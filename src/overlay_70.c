/* Decompiled from asm/overlay_70.s */
#include "global.h"

void ov70_022378C0(void) {
    // str r4, [r3]
    *((u32*)(_02246800 + 4)) = 0;
    *((u32*)(_02246800 + 8)) = r0;
    *((u32*)(_02246800 + 0xc)) = r1;
    *((u32*)(_02246800 + 0x10)) = r2;
}





void ov70_022378DC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022378F4: ; jump table
    ov38_0221BF48((*((u16*)(*((u32*)_02246800) + 6)) << 0x10), _02246800);
    // str r1, [r0]
    ov38_0221C014(_02246800, 0x18);
    ov70_02238398();
    *((u32*)(_02246800 + 4)) = r0;
    ov38_0221BFEC(_02246800);
    // str r1, [r0]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _02237966: ; jump table
    *((u32*)(_02246800 + 4)) = 0;
    // sub r1, #0x1d
    *((u32*)(_02246800 + 4)) = 0;
    // sub r1, #0x1c
    *((u32*)(_02246800 + 4)) = 0;
    // sub r1, #0x19
    *((u32*)(_02246800 + 4)) = 0;
    // sub r1, #0x1e
    *((u32*)(_02246800 + 4)) = 0;
    // sub r1, #0x1f
    *((u32*)(_02246800 + 4)) = 0;
    // sub r1, #0x20
    *((u32*)(_02246800 + 4)) = 0;
    // sub r1, #0x21
    *((u32*)(_02246800 + 4)) = 0;
    // sub r1, #0x22
    *((u32*)(_02246800 + 4)) = 0;
    // sub r1, #0x23
    *((u32*)(_02246800 + 4)) = 0;
    // sub r1, #0x1a
    *((u32*)(_02246800 + 4)) = 0;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 0xc;
    ov38_0221BFEC(_02246800, 0xc, (*((u16*)(*((u8*)(ov70_02246920 + 0x1c)) + 6)) << 0x10));
    ov38_0221BF48();
    // str r1, [r0]
    ov38_0221C014(_02246800, 0x18);
    ov70_02238398();
    *((u32*)(_02246800 + 4)) = r0;
    ov38_0221BFEC(_02246800);
    // str r2, [r0]
    // add r3, r1, r1
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _02237A18: ; jump table
    *((u32*)(_02246800 + 4)) = 0;
    // sub r2, #0x1d
    *((u32*)(_02246800 + 4)) = 0x18;
    // sub r2, #0x1c
    *((u32*)(_02246800 + 4)) = 0x18;
    // sub r2, #0x1b
    *((u32*)(_02246800 + 4)) = 0x18;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 1;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 0xc;
    ov38_0221BFEC(_02246800, 0xc, 0x18, (*((u16*)(r3 + 6)) << 0x10));
    ov38_0221BF48();
    // str r1, [r0]
    ov38_0221C014(_02246800, 0x18);
    ov70_02238398();
    *((u32*)(_02246800 + 4)) = r0;
    ov38_0221BFEC(_02246800);
    // str r1, [r0]
    ov38_0221C020(_02246800, 0x18);
    *((u32*)(_02246800 + 4)) = 0;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 2;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 3;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 1;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 0xc;
    ov38_0221BFEC(_02246800, 0xc);
    ov38_0221BF48();
    // str r1, [r0]
    ov38_0221C014(_02246800, 0x18);
    ov70_02238398();
    *((u32*)(_02246800 + 4)) = r0;
    ov38_0221BFEC(_02246800);
    // str r1, [r0]
    ov38_0221C020(_02246800, 0x18);
    *((u32*)(_02246800 + 4)) = 1;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 2;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 3;
    *((u32*)(_02246800 + 4)) = 0;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 1;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 0xc;
    ov38_0221BFEC(_02246800, 0xc);
    ov38_0221BF48();
    // str r1, [r0]
    ov38_0221C014(_02246800, 0x18);
    ov70_02238398();
    *((u32*)(_02246800 + 4)) = r0;
    ov38_0221BFEC(_02246800);
    // str r2, [r1]
    *((u32*)(_02246800 + 4)) = 0;
    // sub r2, #0x1b
    *((u32*)(_02246800 + 4)) = 0x18;
    // sub r2, #0x1c
    *((u32*)(_02246800 + 4)) = 0x18;
    // sub r2, #0x1a
    *((u32*)(_02246800 + 4)) = 0x18;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 0xc;
    ov38_0221BFEC(_02246800, 0xc, 0x18);
    ov38_0221BF48();
    // str r1, [r0]
    ov38_0221C014(_02246800, 0x18);
    ov70_02238398();
    *((u32*)(_02246800 + 4)) = r0;
    ov38_0221BFEC(_02246800);
    // str r2, [r0]
    // add r3, r1, r1
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _02237C30: ; jump table
    *((u32*)(_02246800 + 4)) = 0;
    // sub r2, #0x1b
    *((u32*)(_02246800 + 4)) = 0x18;
    // sub r2, #0x1d
    *((u32*)(_02246800 + 4)) = 0x18;
    // sub r2, #0x1c
    *((u32*)(_02246800 + 4)) = 0x18;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 1;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 0xc;
    ov38_0221BFEC(_02246800, 0xc, 0x18, (*((u16*)(r3 + 6)) << 0x10));
    ov38_0221BF48();
    // str r1, [r0]
    ov38_0221C014(_02246800, 0x18);
    ov70_02238398();
    *((u32*)(_02246800 + 4)) = r0;
    ov38_0221BFEC(_02246800);
    // str r1, [r0]
    ov38_0221C020(_02246800, 0x18);
    ov38_0221C020((0x49 << 2));
    _u32_div_f((0x49 << 2));
    *((u32*)(_02246800 + 4)) = r0;
    *((u32*)(_02246800 + 4)) = 0;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 1;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 0xc;
    ov38_0221BFEC(_02246800, 0xc);
    ov38_0221BF48();
    // str r1, [r0]
    ov38_0221C014(_02246800, 0x18);
    ov70_02238398();
    *((u32*)(_02246800 + 4)) = r0;
    ov38_0221BFEC(_02246800);
    // str r1, [r0]
    ov38_0221C020(_02246800, 0x18);
    *((u32*)(_02246800 + 4)) = 0;
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237D40: ; jump table
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 4;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 5;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 6;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 7;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 8;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 9;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 0xa;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 1;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 0xc;
    ov38_0221BFEC(_02246800, 0xc);
    ov38_0221BF48();
    // str r1, [r0]
    ov38_0221C014(_02246800, 0x18);
    ov70_02238398();
    *((u32*)(_02246800 + 4)) = r0;
    ov38_0221BFEC(_02246800);
    // str r2, [r1]
    *((u32*)(_02246800 + 4)) = 0;
    // sub r2, #0x1a
    *((u32*)(_02246800 + 4)) = 0x18;
    // sub r2, #0x1d
    *((u32*)(_02246800 + 4)) = 0x18;
    ov38_0221BFEC(0, _02246800, 0x18);
    ov38_0221BF48();
    // str r1, [r0]
    ov38_0221C014(_02246800, 0x18);
    ov70_02238398();
    *((u32*)(_02246800 + 4)) = r0;
    ov38_0221BFEC(_02246800);
    // str r2, [r1]
    *((u32*)(_02246800 + 4)) = 0;
    *((u32*)(_02246800 + 4)) = 1;
    *((u32*)(_02246800 + 4)) = 2;
    // sub r2, #0x1a
    *((u32*)(_02246800 + 4)) = 0x18;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 0xc;
    ov38_0221BFEC(_02246800, 0xc, 0x18);
    ov38_0221BF48();
    // str r1, [r0]
    ov38_0221C014(_02246800, 0x18);
    ov70_02238398();
    *((u32*)(_02246800 + 4)) = r0;
    ov38_0221BFEC(_02246800);
    // str r1, [r0]
    ov38_0221C020(_02246800, 0x18);
    *((u32*)(_02246800 + 4)) = 0;
    *((u32*)(_02246800 + 4)) = 0;
    *((u32*)(_02246800 + 4)) = 1;
    *((u32*)(_02246800 + 4)) = 2;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 1;
    // mvn r1, r1
    *((u32*)(_02246800 + 4)) = 0xc;
    ov38_0221BFEC(_02246800, 0xc);
    // str r0, [r1]
    // sub r0, #0x24
    *((u32*)(r1 + 4)) = 0x18;
    ov38_0221BFEC(0x18);
}





void ov70_02237F2C(void) {
    // str r1, [r0]
}





void ov70_02237F38(void) {
    // str r0, [r1]
}





void ov70_02237F58(void) {
    // nop
    // _02237F60: .word _02246800
}





void ov70_02237F64(void) {
    memcpy(ov70_02246814, r0, (0x49 << 2));
    ov38_0221BE84();
    // str r0, [sp]
    ov70_02238360(ov70_022460A0, ov70_02246814, (0x49 << 2), ov70_0224693C);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x25
    *((u32*)(_02246800 + 4)) = 0x18;
    ov38_0221BFEC(_02246800, 0x18);
}





void ov70_02237FB4(void) {
    // str r1, [r2]
    *((u32*)(ov70_02246814 + 4)) = *((u32*)(ov70_0224680C + 4));
    ov38_0221BE84(*((u32*)(ov70_0224680C + 4)), *((u32*)ov70_0224680C), ov70_02246814);
    // str r0, [sp]
    ov70_02238360(ov70_022460EC, ov70_02246814, 8, ov70_0224693C);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x25
    *((u32*)(_02246800 + 4)) = 0x18;
    ov38_0221BFEC(_02246800, 0x18);
}





void ov70_02238008(void) {
    *((u32*)(ov70_02246900 + 0x40)) = r0;
    ov38_0221BE84(ov70_02246900);
    // str r0, [sp]
    ov70_02238360(ov70_0224613C, ov70_02246814, 0, r4);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x25
    *((u32*)(_02246800 + 4)) = 0x18;
    ov38_0221BFEC(_02246800, 0x18);
}





void ov70_02238058(void) {
    *((u32*)(ov70_02246900 + 0x40)) = r0;
    ov38_0221BE84(ov70_02246900);
    // str r0, [sp]
    ov70_02238360(ov70_02246184, ov70_02246814, 0, r4);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x25
    *((u32*)(_02246800 + 4)) = 0x18;
    ov38_0221BFEC(_02246800, 0x18);
}





void ov70_022380A8(void) {
    ov38_0221BE84();
    // str r0, [sp]
    ov70_02238360(ov70_022461D0, ov70_02246814, 0, ov70_0224693C);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x25
    *((u32*)(_02246800 + 4)) = 0x18;
    ov38_0221BFEC(_02246800, 0x18);
}





void ov70_022380EC(void) {
    ov38_0221BE84();
    // str r0, [sp]
    ov70_02238360(ov70_0224621C, ov70_02246814, 0, ov70_0224693C);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x25
    *((u32*)(_02246800 + 4)) = 0x18;
    ov38_0221BFEC(_02246800, 0x18);
}





void ov70_02238130(void) {
    *((u32*)(ov70_02246900 + 0x40)) = r2;
    ov38_0221BE84(ov70_02246900);
    // strb r0, [r1]
    *((u8*)(ov70_02246814 + 1)) = *((u8*)(r5 + 1));
    *((u8*)(ov70_02246814 + 2)) = *((u8*)(r5 + 2));
    *((u8*)(ov70_02246814 + 3)) = *((u8*)(r5 + 3));
    *((u8*)(ov70_02246814 + 4)) = *((u8*)(r5 + 4));
    *((u8*)(ov70_02246814 + 5)) = *((u8*)(r5 + 5));
    *((u8*)(_02246800 + 0x1a)) = r4;
    // str r0, [sp]
    ov70_02238360(ov70_02246268, ov70_02246814, 7, r6);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x25
    *((u32*)(_02246800 + 4)) = 0x18;
    ov38_0221BFEC(_02246800, 0x18);
}





void ov70_022381A4(void) {
    *((u32*)(ov70_02246900 + 0x40)) = r1;
    ov38_0221BE84(ov70_02246900);
    // strb r0, [r3]
    // ldrsb r1, [r5, r0]
    // str r0, [sp]
    ov70_02238360(ov70_02246268, ov70_02246814, 8, r4);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x25
    *((u32*)(_02246800 + 4)) = 0x18;
    ov38_0221BFEC(_02246800, 0x18);
}





void ov70_02238208(void) {
    *((u32*)(ov70_02246900 + 0x40)) = r2;
    ov38_0221BE84(ov70_02246900);
    memcpy(ov70_02246814, r4, (0x49 << 2));
    *((u32*)(ov70_02246900 + 0x38)) = r5;
    // str r2, [sp]
    ov70_02238360(ov70_022462B4, ov70_02246814, ((0x49 << 2) + 4), r6);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x25
    *((u32*)(_02246800 + 4)) = 0x18;
    ov38_0221BFEC(_02246800, 0x18);
}





void ov70_0223826C(void) {
    // str r1, [r2]
    *((u32*)(ov70_02246814 + 4)) = *((u32*)(ov70_0224680C + 4));
    ov38_0221BE84(*((u32*)(ov70_0224680C + 4)), *((u32*)ov70_0224680C), ov70_02246814);
    // str r0, [sp]
    ov70_02238360(ov70_02246304, ov70_02246814, 8, ov70_0224693C);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x25
    *((u32*)(_02246800 + 4)) = 0x18;
    ov38_0221BFEC(_02246800, 0x18);
}





void ov70_022382C0(void) {
    ov38_0221BE84();
    // str r0, [sp]
    ov70_02238360(ov70_02246358, ov70_02246814, 0, ov70_0224693C);
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x25
    *((u32*)(_02246800 + 4)) = 0x18;
    ov38_0221BFEC(_02246800, 0x18);
}





void ov70_02238304(void) {
    // add r0, #0x1c
    OS_GetMacAddress();
    memcpy(ov70_02246814, r5, 0x64);
    *((u32*)(ov70_02246900 + 0x40)) = r4;
    ov38_0221BE84(ov70_02246900);
    // str r0, [sp]
    ov70_02238360(ov70_022463A4, ov70_02246814, 0x64, *((u32*)(ov70_02246900 + 0x40)));
    // str r1, [r0]
    // str r1, [r0]
    // sub r1, #0x25
    *((u32*)(_02246800 + 4)) = 0x18;
    ov38_0221BFEC(_02246800, 0x18);
}





void ov70_02238360(void) {
    // ldr r1, [sp, #0x18]
    // str r3, [sp]
    // str r1, [sp, #4]
    ov38_0221BEA8(*((u32*)(_02246800 + 8)), r1, r2);
}





void ov70_02238398(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022383AA: ; jump table
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r0, r0
    // mvn r4, r4
}





BOOL ov70_02238430(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov70_02238880(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    Heap_Create(3, 0x3d, (7 << 0x10));
    LoadDwcOverlay();
    LoadOVY38();
    sub_02039FD8(0x3d);
    OverlayManager_CreateAndGetData(r6, 0x00001608, 0x3d);
    memset(0, 0x00001608);
    BgConfig_Alloc(0x3d);
    *((u32*)(r4 + 4)) = r0;
    // add r2, sp, #0
    *((u32*)(ov70_02246944 + 4)) = r4;
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    SetBothScreensModesAndDisable(r2, ov70_022451F8);
    FontID_Alloc(4, 0x3d);
    MessageFormat_New_Custom(0xb, 0x40, 0x3d);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, 0x00000307, 0x3d);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, 0x0000030A, 0x3d);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, (0x32 << 4), 0x3d);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, 0xed, 0x3d);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, 0x0000031E, 0x3d);
    // str r0, [r4, r1]
    SetKeyRepeatTimers(4, 8);
    ov70_02238818(r4, r6);
    ov70_02238E70(r4);
    Sound_SetSceneAndPlayBGM(0xb, 0x0000047D, 1);
    Heap_Alloc(0x3d, 0x00020020);
    *((u32*)(r4 + 0x4c)) = r0;
    // add r0, #0x1f
    NNS_FndCreateExpHeapEx((r0 & ~(0x1f)), (2 << 0x10), 0);
    *((u32*)(r4 + 0x50)) = r0;
    // str r0, [r5]
    sub_02034D8C(1);
    TextFlags_SetCanTouchSpeedUpPrint(1);
    // str r0, [r5]
}





BOOL ov70_022385C0(void) {
    OverlayManager_GetData();
    ov00_021ECB40();
    ov70_022378DC();
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022385E4: ; jump table
    sub_02034DB8((*((u16*)(r0 + 6)) << 0x10), *((u32*)r5));
    // str r1, [r0]
    ov00_021EC294(ov70_02238DF8, ov70_02238E20);
    // str r0, [r5]
    // blx r2
    // str r0, [r5]
    ov70_02238880(r4, *((u32*)(ov70_022463EC + (*((u32*)(r4 + 0x14)) * 0xc))), *((u32*)(r4 + 0x14)));
    ov70_02238E98(r4);
    IsPaletteFadeFinished();
    // str r0, [r5]
    // blx r2
    // str r0, [r5]
    IsPaletteFadeFinished(r4, *((u32*)(ov70_022463EC + (*((u32*)(r4 + 0x14)) * 0xc))), *((u32*)(r4 + 0x14)));
    ov70_02238E70(r4);
    PlayerProfile_GetTrainerGender(*((u32*)(*((u32*)r4) + 0x1c)));
    ov70_02240D74(r4, r0);
    ov70_02241184(r4, *((u32*)(r4 + (0x4a << 2))), 0);
    ov70_02239C6C(r4);
    ov70_02239CF8(r4);
    // str r1, [r4, r0]
    // blx r2
    // str r0, [r5]
    ov70_02238F04(r4, *((u32*)r5), *((u32*)(ov70_022463EC + (*((u32*)(r4 + 0x14)) * 0xc))), *((u32*)(r4 + 0x14)));
    ov70_02238F24(r4);
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + 0x00000BF4)));
}





BOOL ov70_022386F4(void) {
    OverlayManager_GetData();
    Heap_Free(*((u32*)(r0 + 0x4c)));
    UnloadOVY38();
    UnloadDwcOverlay();
    ov70_02238E98(r4);
    DestroyMsgData(*((u32*)(r4 + 0x00000BA4)));
    DestroyMsgData(*((u32*)(r4 + 0x00000BAC)));
    DestroyMsgData(*((u32*)(r4 + 0x00000BA8)));
    DestroyMsgData(*((u32*)(r4 + (0xba << 4))));
    DestroyMsgData(*((u32*)(r4 + (0xbb << 4))));
    MessageFormat_Delete(*((u32*)(r4 + 0x00000B9C)));
    ov70_0223887C(r4);
    sub_02034DE0();
    TextFlags_SetCanTouchSpeedUpPrint(0);
    Heap_Free(*((u32*)(r4 + 4)));
    Heap_Free(*((u32*)r4));
    OverlayManager_FreeData(r5);
    FontID_Release(4);
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    Main_SetVBlankIntrCB(0, 0, 0x04001000);
    Heap_Destroy(0x3d);
}





void ov70_022387AC(void) {
    // blx r1
    // str r1, [r4, r0]
    // blx r1
    DoScheduledBgGpuUpdates(*((u32*)(r0 + 4)), *((u32*)(r0 + 0x00001208)));
    GF_RunVramTransferTasks();
    OamManager_ApplyAndResetBuffers();
    // str r0, [r3, r1]
}





void ov70_022387F8(void) {
}





void ov70_02238818(void) {
    OverlayManager_GetArgs(r1);
    // str r0, [r4]
    *((u32*)(r4 + 0x14)) = 0;
    ov70_02238E50(r4, 0, 0);
    // strh r0, [r4, r1]
    // strh r0, [r4, r1]
    // strb r3, [r4, r2]
    // strb r0, [r4, r2]
    // strb r0, [r4, r2]
    // strh r0, [r4, r1]
    // strh r0, [r4, r2]
    // strh r3, [r4, r1]
    // add r1, #0x1c
    // strh r0, [r4, r1]
    // add r1, #0x1e
    // strh r0, [r4, r1]
    // strh r0, [r4, r1]
    // sub r1, #0x20
    // str r0, [r4, r1]
    // add r2, #0xf0
    // str r0, [r4, r2]
}





void ov70_0223887C(void) {
}





void ov70_02238880(void) {
    // and r1, r0
    // str r1, [r3]
    // and r1, r0
    // str r0, [r2]
    // strh r3, [r0]
    *((u16*)(0x04000048 + 2)) = (0x20 | (0x1f | (*((u16*)(0x04000048 + 2)) & ~(0x3f))));
    // sub r1, #8
    // strh r2, [r1]
    // strh r1, [r0]
}





void ov70_022388D0(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_Init(r3, r3);
    ObjPlttTransfer_Init(0x14, 0x3d);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}





void ov70_02238900(void) {
    NARC_New(0x64, 0x3d);
    // str r0, [sp, #0x18]
    NNS_G2dInitOamManagerModule();
    // and r3, r0
    // str r3, [r2]
    // and r0, r2
    // str r0, [r3]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r1, [sp, #0x10]
    OamManager_Create(0, 0x7a, 0, 0x20);
    // add r1, r5, r1
    G2dRenderer_Init(0x54, 0x00000BF8, 0x3d);
    // str r0, [r5, r1]
    // add r0, r5, r0
    G2dRenderer_SetSubSurfaceCoords((0x00000BF4 + 4), 0, (1 << 0x14));
    Create2DGfxResObjMan(3, 0, 0x3d);
    // str r0, [r4, r7]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x18]
    AddCharResObjFromOpenNarc(*((u32*)(r5 + (0xd2 << 4))), 0x15, 1);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0xc
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x18]
    AddPlttResObjFromOpenNarc(*((u32*)(r5 + (0xd3 << 4))), (0xd3 << 4), 0xa, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0xc
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x18]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x00000D34)), 0x00000D34, 0x16, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0xc
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x18]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x00000D38)), 0x00000D38, 0x17, 1);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x1c
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x18]
    AddCharResObjFromOpenNarc(*((u32*)(r5 + 0x00000D3C)), 0x00000D3C, 0x2b, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0x1c
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x18]
    AddPlttResObjFromOpenNarc(*((u32*)(r5 + (0x35 << 6))), (0x35 << 6), 9, 0);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x1c
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x18]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x00000D44)), 0x00000D44, 0x2c, 1);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x1c
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x18]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x00000D48)), 0x00000D48, 0x2d, 1);
    // str r0, [r5, r1]
    // sub r1, #0x1c
    sub_0200ACF0(*((u32*)(r5 + 0x00000D4C)), 0x00000D4C);
    sub_0200ACF0(*((u32*)(r5 + (0x35 << 6))));
    sub_0200AF94(*((u32*)(r5 + 0x00000D34)));
    sub_0200AF94(*((u32*)(r5 + 0x00000D44)));
    sub_02074490();
    // add r2, sp, #0x1c
    GfGfxLoader_GetPlttData(0x14, r0, 0x3d);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    DC_FlushRange(*((u32*)(r0 + 0xc)), 0x60);
    // ldr r0, [sp, #0x1c]
    GX_LoadOBJPltt(*((u32*)(r0 + 0xc)), 0x60, 0x60);
    // ldr r0, [sp, #0x1c]
    // and r1, r0
    // add r0, r1, r0
    // asr r1, r0, #1
    // asr r0, r2, #0xa
    // and r6, r7
    // add r0, r6, r0
    // asr r2, r2, #5
    // and r6, r5
    // add r2, r6, r2
    // asr r0, r0, #1
    // asr r2, r2, #1
    // strh r0, [r4]
    // ldr r0, [sp, #0x1c]
    DC_FlushRange(*((u32*)((((((*((u16*)*((u32*)(r0 + 0xc))) >> 0x1f) >> 0x1f) << 0xa) | ((*((u16*)*((u32*)(r0 + 0xc))) >> 0x1f) << 5)) | *((u16*)*((u32*)(r0 + 0xc)))) + 0xc)), 0x60, ((*((u16*)*((u32*)(r0 + 0xc))) >> 0x1f) << 5), (0 + 1));
    // ldr r0, [sp, #0x1c]
    GX_LoadOBJPltt(*((u32*)(r0 + 0xc)), 0xc0, 0x60);
    // ldr r0, [sp, #0x14]
    Heap_Free();
    // ldr r0, [sp, #0x18]
    NARC_Delete();
}





void ov70_02238B54(void) {
    // str r1, [r0]
    *((u32*)(r0 + 4)) = r2;
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = (1 << 0xc);
    *((u32*)(r0 + 0x18)) = (1 << 0xc);
    *((u32*)(r0 + 0x1c)) = (1 << 0xc);
    *((u16*)(r0 + 0x20)) = 0;
    *((u32*)(r0 + 0x24)) = 1;
    *((u32*)(r0 + 0x28)) = r3;
    *((u32*)(r0 + 0x2c)) = 0x3d;
}





void ov70_02238B80(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #8
    // str r0, [sp, #0x1c]
    // add r0, #0xc
    // add r2, #0x40
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x24]
    // add r0, r4, r2
    // str r1, [sp, #0x28]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // str r2, [sp, #0x1c]
    // add r2, #0xc
    // add r3, #0x64
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r4, r3
}





void ov70_02238C14(void) {
}





void ov70_02238C2C(void) {
    // str r0, [sp]
    // add r0, sp, #0x20
    // ldr r1, [sp, #0x30]
    // ldr r0, [sp, #0x30]
    // str r5, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // str r7, [sp, #0x10]
    // add r1, sp, #4
    // ldr r0, [sp]
    // add r1, sp, #4
    // ldr r0, [sp]
}





void ov70_02238C8C(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + 0x000011C8)), 0x000011C8);
    ov70_02238FE0((r0 - 1));
}





void ov70_02238CAC(void) {
    TouchscreenListMenuSpawner_Create(0x3d, 0);
    // str r0, [r5, r1]
    // add r0, sp, #0x18
    MI_CpuFill8(0, 0x18);
    // add r0, sp, #0x18
    // add r1, sp, #0x18
    // strh r3, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(_022451EC + 2));
    *((u16*)(r0 + 4)) = *((u16*)(_022451EC + 4));
    *((u16*)(r0 + 6)) = *((u16*)(_022451EC + 6));
    *((u16*)(r0 + 8)) = *((u16*)(_022451EC + 8));
    *((u16*)(r0 + 0xa)) = *((u16*)(_022451EC + 0xa));
    // add r3, #0x20
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    *((u8*)(r0 + 0x14)) = r4;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    TouchscreenListMenu_CreateWithCallback(*((u32*)(r5 + 0x000011AC)), 0, 0x14);
    ov70_02238FB4(1);
}





void ov70_02238D38(void) {
}





void ov70_02238D60(void) {
    TouchscreenListMenu_Destroy(*((u32*)(r0 + 0x000011D0)));
    TouchscreenListMenuSpawner_Destroy(*((u32*)(r4 + 0x000011CC)));
    ov70_02238FE0();
}





void ov70_02238D84(void) {
}





void ov70_02238D8C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0
}





void ov70_02238DF8(void) {
    OS_DisableInterrupts();
    NNS_FndAllocFromExpHeapEx(*((u32*)ov70_02246944), r5, r4);
    OS_RestoreInterrupts(r6);
}





void ov70_02238E20(void) {
    OS_DisableInterrupts();
    NNS_FndFreeToExpHeap(*((u32*)ov70_02246944), r5);
    OS_RestoreInterrupts(r4);
}





void ov70_02238E44(void) {
}





void ov70_02238E50(void) {
}





void ov70_02238E58(void) {
}





void ov70_02238E64(void) {
}





void ov70_02238E70(void) {
    ov70_022387F8();
    ov70_022388D0();
    ov70_02238900(r4);
    ov70_02238B80(r4);
    Main_SetVBlankIntrCB(ov70_022387AC, r4);
}





void ov70_02238E98(void) {
    ov70_02241308();
    sub_0200AEB0(*((u32*)(r6 + (0xd3 << 4))));
    sub_0200AEB0(*((u32*)(r6 + (0x35 << 6))));
    sub_0200B0A8(*((u32*)(r6 + 0x00000D34)));
    sub_0200B0A8(*((u32*)(r6 + 0x00000D44)));
    Destroy2DGfxResObjMan(*((u32*)(r6 + (0xd2 << 4))));
    SpriteList_Delete(*((u32*)(r6 + 0x00000BF4)));
    // str r1, [r6, r0]
    OamManager_Free(0x00000BF4, 0);
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
}





void ov70_02238F04(void) {
}





void ov70_02238F10(void) {
    // strh r2, [r0, r1]
    // strh r2, [r0, r1]
}





void ov70_02238F24(void) {
    PCStorage_CountMonsAndEggsInBox(*((u32*)(*((u32*)r0) + 0xc)), (*((u16*)(r0 + 0x000011FA)) - 1));
    // add r0, r2, r0
    // strh r0, [r4, r1]
    // strh r2, [r4, r0]
    // strh r2, [r4, r0]
}





void ov70_02238F64(void) {
}





void ov70_02238F80(void) {
}





void ov70_02238F9C(void) {
}





void ov70_02238FB4(void) {
    // sub r2, #0x25
    G2x_SetBlendBrightness_(0x04000050, 0x1e, 0x1e);
    // sub r2, #0x25
    G2x_SetBlendBrightness_(0x04001050, 0x1e, 0x1e);
}





void ov70_02238FE0(void) {
    // strh r1, [r0]
    // strh r1, [r0]
}





void ov70_02238FF4(void) {
    ov70_02239614();
    // and r0, r1
    // strh r0, [r2]
    ov70_02239134(*((u32*)(r4 + 4)), *((u16*)0x04000304), 0x04000304);
    ov70_02239330(r4);
    ov70_022394B8(r4);
    ov70_02239414(r4);
    ov70_02245124(r4);
    ov70_02239B00(r4);
    Sound_SetSceneAndPlayBGM(0x17, 0x00000484, 1);
    ov70_02239304(r4);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u32*)(r4 + 0x2c)) = 0;
    *((u16*)(r4 + 0x34)) = 1;
    PlayerProfile_GetTrainerGender(*((u32*)(*((u32*)r4) + 0x1c)));
    ov70_02240EF4(r4, r0);
    GXx_GetMasterBrightness_(0x0400106C);
    ov70_02241358(r4);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0);
    *((u32*)(r4 + 0x2c)) = 5;
    // str r1, [r4, r0]
}





void ov70_022390DC(void) {
    ov70_02238E44();
    sub_0203A930();
    // blx r1
}





void ov70_022390FC(void) {
    // ldr r0, [r4, r0]
}





void ov70_02239134(void) {
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    ov70_022391F0(r4, 0, 0);
    BG_ClearCharDataRange(0, 0x20, 0, 0x3d);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}





void ov70_022391F0(void) {
    // add r2, sp, #0x54
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    InitBgFromTemplate(r0, 4, r2, 0);
    BgClearTilemapBufferAndCommit(r5, 4);
    // add r2, sp, #0x38
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    InitBgFromTemplate(r5, 6, r2, 0);
    BgClearTilemapBufferAndCommit(r5, 6);
    // add r3, sp, #0x1c
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // str r4, [sp, #0x20]
    InitBgFromTemplate(r5, 5, r3, 0);
    BG_ClearCharDataRange(4, 0x20, 0, 0x3d);
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r5, 7, r3, 0);
    BgClearTilemapBufferAndCommit(r5, 7);
}





void ov70_022392BC(void) {
}





void ov70_022392E0(void) {
}





void ov70_02239304(void) {
    GfGfx_EngineATogglePlanes(1, 0);
    GfGfx_EngineATogglePlanes(2, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000DCC)), 0);
}





void ov70_02239330(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov70_02239414(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #8
    // add r2, #0xc
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x24]
    // add r0, sp, #0x2c
    // str r1, [sp, #0x28]
    CreateSpriteResourcesHeader(*((u32*)(r0 + (0xd2 << 4))), 0, 0, 0);
    // add r0, sp, #0x50
    // add r2, sp, #0x2c
    ov70_02238B54(r4, 1);
    // str r1, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // add r0, sp, #0x50
    Sprite_CreateAffine((*((u16*)(ov70_02245242 + (*((u16*)(r4 + (0x47 << 2))) << 2))) << 0xc), (*((u16*)(r4 + (0x47 << 2))) << 2), (*((u16*)(r4 + (0x47 << 2))) << 2));
    // str r0, [r4, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + 0x00000DCC)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000DCC)), 0x2b);
}





void ov70_022394A8(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // _022394B0: .word 0x00000DCC
    // _022394B4: .word Sprite_Delete
}





void ov70_022394B8(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r7, r1
    AddWindowParameterized(*((u32*)(r0 + 4)), 0x00000F38, 1, 2);
    // add r0, r7, r0
    FillWindowPixelBuffer(0x00000F38, 0);
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r7, r0
    AddTextPrinterParameterizedWithColor(0x00000F38, 1, *((u32*)(r7 + (0x2f << 6))), 0);
    // str r0, [sp, #0x14]
    // add r5, r7, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r7 + 4)), r5, 1, 9);
    FillWindowPixelBuffer(r5, 0);
    // ldr r0, [sp, #0x14]
    // add r6, #0x1e
    // add r5, #0x10
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r7, r1
    AddWindowParameterized(*((u32*)(r7 + 4)), 0x00000F18, 0, 2);
    // add r0, r7, r0
    FillWindowPixelBuffer(0x00000F18, 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r7, r1
    AddWindowParameterized(*((u32*)(r7 + 4)), 0x00001158, 0, 2);
    // add r0, r7, r0
    FillWindowPixelBuffer(0x00001158, 0xf);
    ov70_02239D44(r7, 0);
}





void ov70_022395C4(void) {
    // add r0, r6, r0
    RemoveWindow(0x00001198);
    // add r0, r6, r0
    RemoveWindow(0x00001158);
    // add r0, r6, r0
    RemoveWindow(0x00000F18);
    // add r5, r6, r0
    RemoveWindow(r5);
    // add r5, #0x10
    // add r0, r6, r0
    RemoveWindow(0x00000F38);
}





void ov70_02239614(void) {
    String_New(0xb4, 0x3d);
    // str r0, [r4, r1]
    // sub r1, #0x1c
    NewString_ReadMsgData(*((u32*)(r4 + 0x00000BBC)), 0x27);
    // str r0, [r4, r1]
}





void ov70_0223963C(void) {
    String_Delete(*((u32*)(r0 + 0x00000BBC)));
    String_Delete(*((u32*)(r4 + (0x2f << 6))));
}





void ov70_02239658(void) {
    GfGfx_EngineATogglePlanes(1, 0);
    GfGfx_EngineATogglePlanes(2, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    ov70_02238E50(r4, 7, 0xb);
    *((u32*)(r4 + 0x1c)) = 1;
    *((u32*)(r4 + 0x2c)) = 9;
}





void ov70_02239698(void) {
}





void ov70_022396A8(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
}





void ov70_022396CC(void) {
}





void ov70_022396E0(void) {
}





void ov70_022396F4(void) {
    // str r1, [sp]
    ov70_02239B84(4, 1, 0);
    ov70_02238D84(r4, 0xa, 6);
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + 0x00000DCC)), 1);
    ov70_02238F10(r4);
}





void ov70_02239730(void) {
    // bx r3
    // nop
    // _02239738: .word TouchscreenHitbox_FindRectAtTouchNew
    // _0223973C: .word ov70_0224524C
}





void ov70_02239740(void) {
    ov70_02238E50(5, 5);
    *((u32*)(r4 + 0x2c)) = 9;
    PlaySE(0x000005DC);
    ov70_02238E50(7, 0xb);
    *((u32*)(r4 + 0x1c)) = 2;
    *((u32*)(r4 + 0x2c)) = 9;
    *((u16*)(r4 + 0x3a)) = 0x00000708;
    PlaySE(0x000005DC);
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + 0x00000DCC)), 0);
    // str r0, [sp]
    ov70_02239B84(r4, 0x22, 1, 0);
    ov70_02238D84(r4, 0xb, 5);
    PlaySE(0x000005F3);
    // str r1, [r4, r0]
    // strh r2, [r4, r1]
    ov70_02238E50((0x47 << 6), 4, 0xd);
    *((u32*)(r4 + 0x2c)) = 9;
    PlaySE(0x000005DC);
    ov70_02238E64();
    // str r0, [sp]
    ov70_02239BDC(r4, 7, r0, 0);
    ov70_02238D84(r4, 0xa, 0xc);
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + 0x00000DCC)), 0);
    PlaySE(0x000005DC);
}





void ov70_02239834(void) {
    ov70_02239730();
    // mvn r0, r0
    // strh r4, [r5, r0]
    PlaySE(0x000005DC);
    ov70_02238D8C(*((u32*)(r5 + 0x00000DCC)), *((u16*)(ov70_02245240 + (*((u16*)(r5 + (0x47 << 2))) << 2))), *((u16*)(ov70_02245242 + (*((u16*)(r5 + (0x47 << 2))) << 2))), ov70_02245242);
    ov70_02239740(r5, r4);
    // tst r1, r0
    ov70_02238E64(r5, 2);
    // str r0, [sp]
    ov70_02239BDC(r5, 7, r0, 0);
    ov70_02238D84(r5, 0xa, 0xc);
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x00000DCC)), 0);
    // tst r1, r0
    ov70_02239740(r5, *((u16*)(r5 + (0x47 << 2))));
    // tst r2, r1
    // add r0, #0xdc
    // add r0, #0xdc
    // add r1, #0xdc
    // strh r0, [r5, r1]
    PlaySE(0x000005DC, 0x40, r0);
    ov70_02238D8C(*((u32*)(r5 + 0x00000DCC)), *((u16*)(ov70_02245240 + (*((u16*)(r5 + (0x47 << 2))) << 2))), *((u16*)(ov70_02245242 + (*((u16*)(r5 + (0x47 << 2))) << 2))), (*((u16*)(r5 + (0x47 << 2))) << 2));
    // tst r0, r1
    // add r0, #0x9c
    // add r0, #0x9c
    // add r1, #0x9c
    // strh r0, [r5, r1]
    PlaySE(0x000005DC, 0x80);
    ov70_02238D8C(*((u32*)(r5 + 0x00000DCC)), *((u16*)(ov70_02245240 + (*((u16*)(r5 + (0x47 << 2))) << 2))), *((u16*)(ov70_02245242 + (*((u16*)(r5 + (0x47 << 2))) << 2))), (*((u16*)(r5 + (0x47 << 2))) << 2));
}





void ov70_02239954(void) {
    PlayerProfile_GetTrainerGender(*((u32*)(*((u32*)r0) + 0x1c)));
    ov70_02241004(r4, r0);
    *((u32*)(r4 + 0x2c)) = 8;
    // strh r1, [r4, r0]
}





void ov70_0223997C(void) {
    *((u32*)(r0 + 0x2c)) = 9;
}





void ov70_02239990(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}





void ov70_022399D8(void) {
    // str r0, [sp]
    // add r2, #0xf8
    ov70_02238C14(*((u32*)(r0 + 4)), 0xa, 0xa, 3);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x2c)) = 0xd;
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000DCC)), 0);
}





void ov70_02239A10(void) {
    ov70_02238C8C();
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    // add r0, r4, r0
    ClearFrameAndWindow2(0x00001158, 1);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x00001158);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x00001198);
    ToggleBgLayer(6, 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0xf1 << 4))), 0);
    ov70_02238E50(r4, 0, 0);
    *((u32*)(r4 + 0x2c)) = 7;
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    // add r0, r4, r0
    ClearFrameAndWindow2(0x00001158, 1);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x00001158);
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + 0x00000DCC)), 1);
    *((u32*)(r4 + 0x2c)) = 5;
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000DCC)), 1);
}





void ov70_02239AAC(void) {
}





void ov70_02239ACC(void) {
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}





void ov70_02239B00(void) {
    // add r4, r7, r0
    // add r5, r2, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r4, 0xf, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r4, 0xe, 0, 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r4, 0xd, 0, 0xa);
    // str r0, [sp]
    ov70_02239C34(r4, *((u32*)(r7 + (0xba << 4))), 4, *((u32*)r5));
    CopyWindowToVram(r4);
    // add r4, #0x10
}





void ov70_02239B84(void) {
    // add r2, #0x1c
    ReadMsgDataIntoString(*((u32*)(r0 + (0xba << 4))), *((u32*)(r0 + (0xba << 4))));
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000F18, 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow2(0x00000F18, 0, 1, 0xe);
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized(0x00000F18, 1, *((u32*)(r5 + 0x00000BBC)), 0);
    // str r0, [r5, r1]
}





void ov70_02239BDC(void) {
    // add r2, #0x1c
    ReadMsgDataIntoString(*((u32*)(r0 + (0xba << 4))), *((u32*)(r0 + (0xba << 4))));
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00001158, 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow2(0x00001158, 0, 1, 0xe);
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized(0x00001158, 1, *((u32*)(r5 + 0x00000BBC)), 0);
    // str r0, [r5, r1]
}





void ov70_02239C34(void) {
    NewString_ReadMsgData(r1, r3);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, r6, r0, 0);
    String_Delete(r4);
}





void ov70_02239C6C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov70_02239CF8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov70_02239D44(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)(r0 + 4)), 0x00001198, 4, 0xd);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00001198, 0);
    // add r0, r5, r0
    ov70_022450EC(0x00001198, *((u32*)(r5 + (0xba << 4))), r4);
}





void ov70_02239D8C(void) {
    ov70_0223A1E4();
    ov70_02239EAC(*((u32*)(r4 + 4)));
    ov70_02239FA4(r4);
    ov70_0223A0D4(r4);
    ov70_0223A06C(r4);
    // add r0, r4, r0
    Mon_GetBoxMon((0x4f << 2));
    // str r0, [sp]
    // add r0, r4, r0
    // str r0, [sp, #4]
    // add r3, r4, r3
    ov70_0223A578(*((u32*)(r4 + (0xba << 4))), *((u32*)(r4 + ((0xba << 4) + 4))), *((u32*)(r4 + ((0xba << 4) - 4))), 0x00001058);
    // add r0, r4, r1
    // str r0, [sp]
    // sub r1, #0x50
    // add r1, r4, r1
    // add r2, r4, r2
    // add r3, r4, r3
    ov70_0223A72C(*((u32*)(r4 + (0xba << 4))), 0x00001118, (0x92 << 2), (0x4f << 2));
    // ldrsb r0, [r4, r1]
    // ldrsb r1, [r4, r1]
    ov70_0223F864((0x0000022F + 1), 0);
    // ldrsh r2, [r4, r1]
    // str r2, [sp]
    // ldrsb r1, [r4, r1]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r3, r4, r3
    ov70_0223F470(*((u32*)(r4 + (0xba << 4))), *((u32*)(r4 + ((0xba << 4) + 4))), *((u32*)(r4 + ((0xba << 4) - 4))), 0x000010E8);
    // add r0, r4, r0
    ov70_0223A7E4((0x4f << 2));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0);
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov70_02239E68(void) {
    // blx r1
}





void ov70_02239E7C(void) {
    // ldr r0, [r4, r0]
}





void ov70_02239EAC(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x54
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r0, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
    BG_ClearCharDataRange(0, 0x20, 0, 0x3d);
    BG_ClearCharDataRange(3, 0x20, 0, 0x3d);
    ov70_022391F0(r4, 0, 0);
}





void ov70_02239F78(void) {
}





void ov70_02239FA4(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov70_0223A06C(void) {
    // add r0, sp, #0
    // add r2, r4, r2
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // str r0, [r4, r1]
}





void ov70_0223A0C4(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _0223A0D0: .word Sprite_Delete
}





void ov70_0223A0D4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r7, r1
    AddWindowParameterized(*((u32*)(r0 + 4)), 0x00000F18, 0, 2);
    // add r0, r7, r0
    FillWindowPixelBuffer(0x00000F18, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r7, r1
    AddWindowParameterized(*((u32*)(r7 + 4)), 0x00000F58, 0, 0x15);
    // str r0, [sp, #0x14]
    // add r5, r7, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r7 + 4)), r5, 3, ((*((u32*)ov70_022453B8) << 0x18) >> 0x18));
    FillWindowPixelBuffer(r5, 0);
    // add r4, #0x10
    // add r6, r6, r0
    // ldr r0, [sp, #0x14]
    // add r5, #0x10
    // str r0, [sp, #0x14]
    ov70_02239D44(r7, 2);
}





void ov70_0223A1A0(void) {
    // add r0, r5, r0
    RemoveWindow(0x00001198);
    // add r0, r5, r0
    RemoveWindow(0x00000F18);
    // add r0, r5, r0
    RemoveWindow(0x00000F58);
    // add r5, r5, r0
    RemoveWindow(r5);
    // add r5, #0x10
}





void ov70_0223A1E4(void) {
    String_New(0xb4, 0x3d);
    // str r0, [r5, r1]
    // sub r1, #0x1c
    NewString_ReadMsgData(*((u32*)(r5 + 0x00000BBC)), 0x27);
    // str r0, [r5, r1]
    String_New(0x14, 0x3d);
    // str r0, [r5, r6]
}





void ov70_0223A224(void) {
    String_Delete(*((u32*)(r0 + 0x00000BC4)));
    String_Delete(*((u32*)(r7 + 0x00000BBC)));
    String_Delete(*((u32*)(r7 + (0x2f << 6))));
}





void ov70_0223A258(void) {
}





void ov70_0223A260(void) {
    // tst r3, r1
    // str r0, [sp]
    // add r0, r4, r0
    // str r0, [sp, #4]
    ov70_0223A4F4(r0, 5, 1, 0);
    ov70_02238D84(r4, 3, 7);
    PlaySE(0x000005DC);
    // tst r2, r3
    *((u32*)(r4 + 0x2c)) = 2;
    ov70_02238E50(0, 2);
    PlaySE(0x000005DC);
}





void ov70_0223A2D0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}





void ov70_0223A2F8(void) {
    // str r0, [sp]
    ov70_02238C14(*((u32*)(r0 + 4)), 0xc, 0x0000016A, 8);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x2c)) = 6;
}





void ov70_0223A324(void) {
    ov70_02238C8C();
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    *((u32*)(r4 + 0x2c)) = 2;
    // str r1, [r4, r0]
    ov70_02238E50(r4, 7, 8);
    ov70_0223A874(r4);
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    // add r0, r4, r0
    *((u32*)(r4 + 0x2c)) = 0;
    ClearFrameAndWindow2(0x00000F18, 0);
    ov70_0223A874(r4);
}





void ov70_0223A384(void) {
    ListMenuItems_New(2, 0x3d);
    // str r0, [r4, r1]
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x000011AC)), *((u32*)(r4 + (0xba << 4))), 0x37, 1);
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x000011AC)), *((u32*)(r4 + (0xba << 4))), 0x38, 2);
    ov70_02238CAC(r4, 2, 0xd);
    // str r0, [r4, r1]
    ov70_02238FB4(1, 0x000011D0);
    *((u32*)(r4 + 0x2c)) = 8;
}





void ov70_0223A3DC(void) {
    TouchscreenListMenu_HandleInput(*((u32*)(r0 + 0x000011D0)));
    ov70_02238D60(r5);
    ListMenuItems_Delete(*((u32*)(r5 + 0x000011AC)));
    // add r4, r5, r0
    ov70_0223E76C(r4);
    Party_GetCount(*((u32*)(*((u32*)r5) + 8)));
    // str r0, [sp]
    // str r4, [sp, #4]
    ov70_0223A4F4(r5, 0x24, 1, 0);
    ov70_02238D84(r5, 3, 1);
    // str r0, [sp]
    // str r4, [sp, #4]
    ov70_0223A4F4(r5, 6, 1, 0);
    ov70_02238D84(r5, 3, 5);
    ov70_0223A874(r5);
    // mvn r1, r1
    ov70_02238D60(r5, 1);
    ListMenuItems_Delete(*((u32*)(r5 + 0x000011AC)));
    *((u32*)(r5 + 0x2c)) = 2;
    ov70_02238E50(r5, 1, 0);
    ov70_0223A874(r5);
}





void ov70_0223A4A0(void) {
}





void ov70_0223A4C0(void) {
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}





void ov70_0223A4F4(void) {
    // ldr r0, [sp, #0x24]
    Mon_GetBoxMon();
    BufferBoxMonSpeciesName(*((u32*)(r5 + 0x00000B9C)), 0, r0);
    NewString_ReadMsgData(*((u32*)(r5 + (0xba << 4))), r6);
    // add r1, #0x20
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B9C)), *((u32*)(r5 + 0x00000B9C)), r0);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000F18, 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow2(0x00000F18, 0, 1, 0xe);
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized(0x00000F18, 1, *((u32*)(r5 + 0x00000BBC)), 0);
    // str r0, [r5, r1]
    String_Delete(r6, (0xbf << 4));
}





void ov70_0223A578(void) {
    // str r1, [sp, #8]
    // ldr r4, [sp, #0x54]
    String_New(0x16, 0x3d);
    // str r0, [sp, #0x1c]
    String_New(0x12, 0x3d);
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x50]
    // ldr r2, [sp, #0x1c]
    GetBoxMonData(0x77);
    // ldrsh r0, [r4, r2]
    // str r0, [sp, #0x10]
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0x14]
    // ldrsb r4, [r4, r0]
    // ldr r0, [sp, #0x50]
    GetBoxMonData(3, 6, 0);
    // str r0, [sp, #0x38]
    NewString_ReadMsgData(r5, 0x49);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    NewString_ReadMsgData(r5, *((u32*)(ov70_02245910 + r1)), ov70_02245910);
    // str r0, [sp, #0x30]
    NewString_ReadMsgData(r5, 0x6a);
    // str r0, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r7, 3, r4, 3);
    ReadMsgData_ExpandPlaceholders(r7, r5, 0x6b, 0x3d);
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x10]
    NewString_ReadMsgData();
    // ldr r1, [sp, #0x38]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x18]
    GetItemNameIntoString(((r1 << 0x10) >> 0x10), 0x3d);
    NewString_ReadMsgData(r5, 0x3b);
    // str r0, [sp, #0x20]
    FillWindowPixelBuffer(r6, 0);
    // add r5, #0x10
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x1c]
    ov70_02245084(r6, 0, 0);
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // str r3, [sp]
    // ldr r1, [sp, #0x30]
    // str r0, [sp, #4]
    ov70_02245084(r6, ov70_0224649C, 0x40, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x34]
    // add r0, #0x10
    ov70_02245084(r6, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x2c]
    // add r0, #0x20
    ov70_02245084(r6, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x28]
    // add r0, #0x30
    ov70_02245084(r6, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x24]
    // add r0, #0x40
    ov70_02245084(r6, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x18]
    // add r0, #0x50
    ov70_02245084(r6, 0, 0);
    // str r2, [sp]
    // add r6, #0x60
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x20]
    ov70_02245084(r6, 0, 0);
    // ldr r0, [sp, #0x24]
    String_Delete();
    // ldr r0, [sp, #0x18]
    String_Delete();
    // ldr r0, [sp, #0x2c]
    String_Delete();
    // ldr r0, [sp, #0x28]
    String_Delete();
    // ldr r0, [sp, #0x30]
    String_Delete();
    // ldr r0, [sp, #0x1c]
    String_Delete();
    // ldr r0, [sp, #0x34]
    String_Delete();
    // ldr r0, [sp, #0x20]
    String_Delete();
}





void ov70_0223A72C(void) {
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    String_New(0x10, 0x3d);
    String_New(0x10, 0x3d);
    NewString_ReadMsgData(r7, 0x31);
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #8]
    CopyU16ArrayToString(r4);
    NewString_ReadMsgData(r7, 0xb4);
    // ldr r0, [sp, #0xc]
    GetMonData(0x91, r6);
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    ov70_02245084(r5, 0, 0);
    // str r2, [sp]
    // add r5, #0x10
    // str r0, [sp, #4]
    ov70_02245084(r5, r4, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    ov70_02245084(0x000F0200, r7, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // add r0, #0x10
    ov70_02245084(0x00010200, r6, 0, 0);
    // ldr r0, [sp, #0x10]
    String_Delete();
    String_Delete(r4);
    String_Delete(r7);
    String_Delete(r6);
}





void ov70_0223A7E4(void) {
    // add r0, sp, #0x20
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r4, [sp, #0xc]
    // str r6, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x20
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x20
}





void ov70_0223A874(void) {
    // ldrsb r0, [r4, r1]
    // ldrsb r1, [r4, r1]
    ov70_0223F864((0x0000022F + 1), 0);
    // ldrsh r2, [r4, r1]
    // str r2, [sp]
    // ldrsb r1, [r4, r1]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r3, r4, r3
    ov70_0223F470(*((u32*)(r4 + (0xba << 4))), *((u32*)(r4 + ((0xba << 4) + 4))), *((u32*)(r4 + ((0xba << 4) - 4))), 0x000010E8);
}





void ov70_0223A8BC(void) {
    ov70_0223AE98();
    // mvn r1, r1
    // sub r1, r1, r2
    ov70_0223AB3C(*((u32*)(r4 + 4)), 0x1f, *((u32*)(r4 + 0x00000F14)));
    ov70_0223ABF4(r4);
    ov70_0223ACF4(r4);
    ov70_0223AC98(r4);
    // sub r0, #8
    // add r0, r4, r0
    // add r0, r0, r5
    Mon_GetBoxMon((0x26 << 4), *((u32*)(r4 + (0x4b << 2))));
    // str r0, [sp]
    // add r0, r4, r0
    // add r0, r0, r5
    // str r0, [sp, #4]
    // add r3, r4, r3
    ov70_0223A578(*((u32*)(r4 + (0xba << 4))), *((u32*)(r4 + ((0xba << 4) + 4))), *((u32*)(r4 + ((0xba << 4) - 4))), 0x00001058);
    // sub r0, #8
    // add r0, r4, r1
    // str r0, [sp]
    // sub r1, #0x50
    // add r2, r4, r2
    // add r5, r4, r5
    // add r2, r2, r3
    // add r1, r4, r1
    // add r3, r5, r3
    ov70_0223A72C(*((u32*)(r4 + (0xba << 4))), 0x00001118, (0xdb << 2), (*((u32*)(r4 + (0x4b << 2))) * (0x4b << 2)));
    // add r2, r4, r0
    // sub r0, #8
    // add r0, r2, r0
    ov70_0223A7E4(((0x4b << 2) * *((u32*)(r4 + (0x4b << 2)))), *((u32*)(r4 + (0x4b << 2))));
    // add r1, r4, r1
    ov70_0223B3BC(*((u32*)(r4 + (0xba << 4))), 0x00001138, 0x4d);
    // add r1, r4, r1
    ov70_0223B3BC(*((u32*)(r4 + (0xba << 4))), 0x000010E8, 0x51);
    // add r1, r4, r1
    ov70_0223B3EC(*((u32*)(r4 + (0xba << 4))), 0x00000F58, 0x58);
    // add r1, r4, r1
    ov70_0223B3EC(*((u32*)(r4 + (0xba << 4))), 0x00000F68, 0x6d);
    ov70_0223B258(r4);
    // neg r2, r2
    ov70_02241330(r4, *((u32*)(r4 + (0x4b << 2))), *((u32*)(r4 + 0x00000F14)));
    // str r1, [r4, r0]
    // strh r0, [r2]
    GXx_GetMasterBrightness_(0x0400006C, *((u16*)0x04000304), 0x04000304);
    // mvn r1, r1
    GXx_GetMasterBrightness_(0x0400106C, 0xf);
    // mvn r1, r1
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0);
    GXx_GetMasterBrightness_(0x0400006C);
    // mvn r1, r1
    GXx_GetMasterBrightness_(0x0400106C, 0xf);
    // mvn r1, r1
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(4, 1, 1, 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov70_0223AA90(void) {
    // blx r1
    // str r0, [sp]
    // ldrsh r2, [r5, r7]
    // ldrsh r1, [r5, r1]
    // add r2, r3, r2
    // add r2, #0x20
    ov70_02238F9C(*((u32*)(r0 + 0x00000EE4)), 0x0000120C, 0x00000F14, *((u32*)(r0 + 0x00000F14)));
    // add r2, #0x34
    // sub r2, r2, r3
    ov70_02238F9C(*((u32*)(r6 + (0xee << 4))), 0xd0, 0x3a, *((u32*)(r6 + (0xee << 4))));
    ov70_02241330(r6, *((u32*)(r6 + (0x4b << 2))), *((u32*)(r6 + 0x00000F14)));
    // ldr r0, [sp]
}





void ov70_0223AB00(void) {
    // str r2, [r4, r1]
    ov70_0223ACE4(0x00001208, 0);
    ov70_0223AF30(r4);
    ov70_0223AE40(r4);
    ov70_0223ABD8(*((u32*)(r4 + 4)));
    Sprite_SetDrawFlag(*((u32*)(r4 + (0xf1 << 4))), 0);
    ov70_02238E58(r4);
}





void ov70_0223AB3C(void) {
    // add r3, sp, #0x1c
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r0, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r5, 0);
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r5, 1, r3, 0);
    BG_ClearCharDataRange(0, 0x20, 0, 0x3d);
    GXx_GetMasterBrightness_(0x0400106C);
    ov70_022391F0(r5, r4, 1);
    ov70_022391F0(r5, r4, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(8, 0);
}





void ov70_0223ABD8(void) {
}





void ov70_0223ABF4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov70_0223AC98(void) {
    // add r0, sp, #0
    // add r2, r4, r2
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // str r0, [r4, r1]
}





void ov70_0223ACE4(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _0223ACF0: .word Sprite_Delete
}





void ov70_0223ACF4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r6, r1
    AddWindowParameterized(*((u32*)(r0 + 4)), 0x00000F18, 4, 2);
    // add r0, r6, r0
    FillWindowPixelBuffer(0x00000F18, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r6, r1
    AddWindowParameterized(*((u32*)(r6 + 4)), 0x00000F58, 4, 1);
    // add r0, r6, r0
    FillWindowPixelBuffer(0x00000F58, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r6, r1
    AddWindowParameterized(*((u32*)(r6 + 4)), 0x00000F68, 4, 0x11);
    // add r0, r6, r0
    FillWindowPixelBuffer(0x00000F68, 0);
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r5, r6, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r6 + 4)), r5, ((*((u32*)(ov70_022454EC + 0x10)) << 0x18) >> 0x18), ((*((u32*)ov70_022454EC) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x14]
    // add r0, r0, r2
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r6 + 4)), r5, (((*((u32*)(r4 + 8)) * *((u32*)(r4 + 0xc))) << 0x18) >> 0x18), ((*((u32*)r4) << 0x18) >> 0x18));
    // add r7, r7, r0
    FillWindowPixelBuffer(r5, 0);
    // ldr r0, [sp, #0x18]
    // add r4, #0x14
    // add r5, #0x10
    // str r0, [sp, #0x18]
}





void ov70_0223AE40(void) {
    // add r0, r5, r0
    RemoveWindow(0x00000F18);
    // add r0, r5, r0
    ClearWindowTilemapAndCopyToVram(0x00000F68);
    // add r0, r5, r0
    ClearWindowTilemapAndCopyToVram(0x00000F58);
    // add r0, r5, r0
    RemoveWindow(0x00000F68);
    // add r0, r5, r0
    RemoveWindow(0x00000F58);
    // add r5, r5, r0
    ClearWindowTilemapAndCopyToVram(r5);
    RemoveWindow(r5);
    // add r5, #0x10
}





void ov70_0223AE98(void) {
    // add r2, r5, r0
    // sub r0, #8
    // add r4, r2, r0
    String_New(0xb4, 0x3d);
    // str r0, [r5, r1]
    // sub r1, #0x20
    MessageFormat_ResetBuffers(*((u32*)(r5 + 0x00000BBC)), 0x00000BBC);
    BufferCountryName(*((u32*)(r5 + 0x00000B9C)), 8, *((u8*)(r4 + 0x0000011E)));
    BufferCityName(*((u32*)(r5 + 0x00000B9C)), 9, *((u8*)(r4 + (0x0000011F - 1))), *((u8*)(r4 + 0x0000011F)));
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x00000B9C)), *((u32*)(r5 + (0x00000B9C + 4))), 0x52, 0x3d);
    // str r0, [r5, r1]
    // sub r0, #0x28
    // sub r1, #0x24
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x00000BC4)), *((u32*)(r5 + 0x00000BC4)), 0x53, 0x3d);
    // str r0, [r5, r1]
}





void ov70_0223AF30(void) {
    String_Delete(*((u32*)(r0 + 0x00000BC4)));
    String_Delete(*((u32*)(r4 + 0x00000BC8)));
    String_Delete(*((u32*)(r4 + 0x00000BBC)));
}





void ov70_0223AF5C(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + (0xf1 << 4))), 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u32*)(r4 + 0x2c)) = 7;
    *((u32*)(r4 + 0x2c)) = 1;
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000F0C)), 1);
}





void ov70_0223AFA8(void) {
    // add r1, r5, r0
    // add r1, #0x10
    Sprite_SetAnimCtrlSeq(*((u32*)(r1 + 0x00000EE4)), (r1 << 2));
    *((u32*)(r5 + 0x2c)) = 2;
    ov70_02238E50(r5, 3, 0x11);
    // str r4, [r5, r0]
    ov70_02241330(r5, r4, 0);
    PlaySE(0x000005DC);
}





void ov70_0223AFFC(void) {
    // tst r3, r2
    // str r1, [sp]
    ov70_0223B364(0x10, 1, 0);
    ov70_02238D84(r4, 3, 4);
    PlaySE(0x000005DC);
    // tst r3, r1
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u32*)(r4 + 0x2c)) = 8;
    PlaySE(0x000005DC);
    // tst r2, r1
    ov70_0223AFA8(*((u8*)(ov70_022454A4 + (*((u32*)(r4 + (0x4b << 2))) << 1))), (*((u8*)(ov70_022454A4 + (*((u32*)(r4 + (0x4b << 2))) << 1))) + 1), *((u32*)(r4 + ((0x4b << 2) - 4))));
    // tst r1, r2
    ov70_0223AFA8(*((u8*)(ov70_022454A5 + (*((u32*)(r4 + (0x4b << 2))) << 1))), (*((u8*)(ov70_022454A5 + (*((u32*)(r4 + (0x4b << 2))) << 1))) + 1), *((u32*)(r4 + ((0x4b << 2) - 4))));
    ov70_02241164(*((u32*)(r4 + (0x4a << 2))));
    // mvn r0, r0
    ov70_0223AFA8(r4, r0);
    TouchscreenHitbox_FindRectAtTouchNew(ov70_02245498);
    // str r0, [sp]
    ov70_0223B364(r4, 0x10, 1, 0);
    ov70_02238D84(r4, 3, 4);
    PlaySE(0x000005DC);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u32*)(r4 + 0x2c)) = 8;
    PlaySE(0x000005DC);
}





void ov70_0223B12C(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x00000F0C)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0);
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov70_0223B188(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    ov70_02238C2C(*((u32*)(r0 + 4)), 0xa, 0x0000012E, 3);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x2c)) = 5;
}





void ov70_0223B1B8(void) {
    ov70_02238C8C();
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    *((u32*)(r4 + 0x2c)) = 2;
    ov70_02238E50(r4, 5, 6);
    // add r1, r4, r1
    ov70_0223B3BC(*((u32*)(r4 + (0xba << 4))), 0x00001138, 0x4d);
    // add r1, r4, r1
    ov70_0223B3BC(*((u32*)(r4 + (0xba << 4))), 0x000010E8, 0x51);
    ov70_0223B258(r4);
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    // add r0, r4, r0
    ClearFrameAndWindow2(0x00000F18, 0);
    *((u32*)(r4 + 0x2c)) = 1;
    // add r1, r4, r1
    ov70_0223B3EC(*((u32*)(r4 + (0xba << 4))), 0x00000F58, 0x58);
    // add r1, r4, r1
    ov70_0223B3EC(*((u32*)(r4 + (0xba << 4))), 0x00000F68, 0x6d);
}





void ov70_0223B258(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x64, 0x24, *((u32*)(r0 + 4)), 1);
    // add r0, r4, r0
    ov70_0223B484(0x000010F8, *((u32*)(r4 + 0x00000BC4)), *((u32*)(r4 + (0x00000BC4 + 4))));
    // add r0, r4, r0
    // add r3, r4, r3
    // sub r5, #8
    // add r3, r3, r5
    ov70_0223B41C(0x00001148, *((u32*)(r4 + (0xba << 4))), *((u32*)(r4 + ((0xba << 4) + 4))), (0x35 << 4));
}





void ov70_0223B2C0(void) {
}





void ov70_0223B2D0(void) {
    // str r1, [r4, r0]
    IsPaletteFadeFinished(0x00000F14, (*((u32*)(r0 + 0x00000F14)) + 1));
    // str r1, [r4, r0]
    *((u32*)(r4 + 0x2c)) = 1;
    // sub r0, #8
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000F14)), 1);
}





void ov70_0223B300(void) {
    // str r1, [r4, r0]
    IsPaletteFadeFinished(0x00000F14, (*((u32*)(r0 + 0x00000F14)) - 1));
    // and r0, r1
    // strh r0, [r2]
    *((u32*)(r4 + 0x2c)) = 2;
    ov70_02238E50(r4, 4, 0xf);
    // str r1, [r4, r0]
}





void ov70_0223B344(void) {
}





void ov70_0223B364(void) {
    // add r2, #0x1c
    ReadMsgDataIntoString(*((u32*)(r0 + (0xba << 4))), *((u32*)(r0 + (0xba << 4))));
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000F18, 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow2(0x00000F18, 0, 1, 2);
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized(0x00000F18, 1, *((u32*)(r5 + 0x00000BBC)), 0);
    // str r0, [r5, r1]
}





void ov70_0223B3BC(void) {
    NewString_ReadMsgData(r2);
    // str r2, [sp]
    // str r0, [sp, #4]
    ov70_02245084(r5, r0, 0, 0);
    String_Delete(r4);
}





void ov70_0223B3EC(void) {
    NewString_ReadMsgData(r2);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov70_022450B8(r5, r0, 0, 0);
    String_Delete(r4);
}





void ov70_0223B41C(void) {
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // ldrsh r2, [r4, r3]
    ov70_0223F20C(r5, r7, 0);
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldrsb r2, [r4, r2]
    ov70_0223F324(r5, r6, 2, 0);
    // ldrsb r0, [r4, r0]
    // ldrsb r1, [r4, r1]
    ov70_0223F864(3, 4, 0);
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    ov70_0223F38C(r5, r6, r0, 0);
}





void ov70_0223B484(void) {
    FillWindowPixelBuffer(0);
    // add r0, #0x10
    FillWindowPixelBuffer(r5, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    ov70_02245084(r5, r4, 0, 0);
    // str r2, [sp]
    // add r5, #0x10
    // str r0, [sp, #4]
    ov70_02245084(r5, r6, 0, 0);
}





void ov70_0223B4D4(void) {
    BgSetPosTextAndCommit(*((u32*)(r0 + 4)), 0, 3, *((u32*)(r0 + 0x00000F14)));
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 1, 3, *((u32*)(r4 + 0x00000F14)));
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 2, 3, *((u32*)(r4 + 0x00000F14)));
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 3, 3, *((u32*)(r4 + 0x00000F14)));
    // neg r3, r3
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 4, 3, *((u32*)(r4 + 0x00000F14)));
    // sub r3, #0x23
    // sub r3, r3, r5
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 5, 3, 3);
    // neg r3, r3
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 6, 3, *((u32*)(r4 + 0x00000F14)));
    // neg r3, r3
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 7, 3, *((u32*)(r4 + 0x00000F14)));
}





void ov70_0223B55C(void) {
    ov70_0223BC7C();
    ov70_0223B7CC(*((u32*)(r4 + 4)));
    ov70_0223B8E0(r4);
    ov70_0223BAE0(r4);
    ov70_0223B9C8(r4);
    // str r0, [sp, #0xc]
    // add r0, r4, r3
    // str r0, [sp, #0x10]
    // add r1, r4, r0
    // str r1, [sp, #0x14]
    // str r2, [sp, #0x18]
    // sub r2, #0x54
    // sub r3, #0x50
    // str r2, [sp, #0x1c]
    // add r0, #0x5c
    // str r2, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    // add r2, #0x10
    // str r1, [sp, #0x2c]
    // str r1, [sp, #0x30]
    // str r1, [sp, #0x34]
    // str r0, [sp, #0x38]
    // add r0, sp, #0xc
    ov70_02242014(*((u32*)(*((u32*)(r4 + 0x00001168)) + 0x14)), 2, 1, 0x00000F58);
    // str r0, [r4, r1]
    // sub r1, #0x30
    // add r0, r4, r0
    // add r1, r4, r1
    ov70_0223CB1C(0x00001058, 0x000011A8, *((u32*)(r4 + (0xba << 4))));
    // add r1, r4, r1
    ov70_0223CC04(*((u32*)(r4 + 4)), 0x000010D8, *((u32*)(r4 + (0xba << 4))), *((u16*)(r4 + 0x000011DE)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // sub r2, #0x1a
    // ldrsh r2, [r4, r2]
    // add r0, r4, r0
    ov70_0223F1D8(0x00001068, *((u32*)(r4 + 0x00000BA4)), 0x00000BA4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r2, #0x14
    // ldrsb r2, [r4, r2]
    // add r0, r4, r0
    ov70_0223F2BC(0x00001088, *((u32*)(r4 + (0xba << 4))), (0xba << 4), 1);
    // ldrsb r0, [r4, r1]
    // ldrsb r1, [r4, r1]
    ov70_0223F864((0x00000B8D + 1), 1);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r0
    ov70_0223F370(0x000010A8, *((u32*)(r4 + (0xba << 4))), r0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r2, #0x10
    // add r0, r4, r0
    ov70_0223F244(0x00001188, *((u32*)(r4 + (0xbb << 4))), *((u32*)(r4 + (0xbb << 4))), *((u32*)(r4 + 0x000012CC)));
    // str r1, [r4, r0]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0);
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov70_0223B6EC(void) {
    // blx r1
    // str r0, [sp]
    // ldrsh r3, [r4, r3]
    // ldrsh r1, [r4, r1]
    // add r2, r2, r3
    ov70_02238F9C(*((u32*)(r0 + 0x00000EE4)), 0x0000120C, *((u32*)(r0 + 0x00000F14)), 0x0000120E);
    // add r2, r2, r7
    ov70_02238F9C(*((u32*)(r5 + (0xf1 << 4))), 0x37, *((u32*)(r5 + 0x00000F14)));
    ov70_0223C2EC(r5);
    ov70_0223C2EC(r5);
    // sub r2, r3, r2
    ov70_02238F9C(*((u32*)(r5 + 0x00000DCC)), *((u16*)(ov70_022464FE + (r4 * 6))), *((u32*)(r5 + 0x00000F14)), *((u16*)(ov70_02246500 + (6 * r0))));
    // ldr r0, [sp]
}





void ov70_0223B788(void) {
    // str r1, [r4, r0]
    // sub r0, #0x60
    ov70_0224212C(*((u32*)(r0 + 0x00001208)), 0);
    ov70_0223BAAC(r4);
    ov70_0223BCD0(r4);
    ov70_0223BC2C(r4);
    ov70_0223B8B4(*((u32*)(r4 + 4)));
    Sprite_SetDrawFlag(*((u32*)(r4 + (0xf1 << 4))), 0);
    ov70_02238E58(r4);
}





void ov70_0223B7CC(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x54
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r0, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
    ov70_022391F0(r4, 0, 0);
    BG_ClearCharDataRange(2, 0x20, 0, 0x3d);
    BG_ClearCharDataRange(0, 0x20, 0, 0x3d);
    BG_ClearCharDataRange(3, 0x20, 0, 0x3d);
}





void ov70_0223B8B4(void) {
}





void ov70_0223B8E0(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov70_0223B9C8(void) {
    // add r0, sp, #0
    // add r2, r4, r2
    ov70_02238B54(r0, (0xd6 << 4), 1);
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // str r1, [sp, #8]
    Sprite_CreateAffine((*((u16*)(ov70_022464F0 + 0x10)) << 0xc), (*((u16*)(ov70_022464F0 + 0xe)) << 0xc));
    // str r0, [r4, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + 0x00000DCC)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000DCC)), 0x2d);
    Sprite_SetPriority(*((u32*)(r4 + 0x00000DCC)), 1);
    Sprite_SetOamMode(*((u32*)(r4 + 0x00000DCC)), 1);
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    Sprite_CreateAffine((2 << 0x10));
    // str r0, [r4, r1]
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0xdd << 4))), 0x2f);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0xdd << 4))), 0);
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    Sprite_CreateAffine((0x75 << 0xc));
    // str r0, [r4, r1]
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000F04)), 0x26);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000F04)), 0);
    // str r0, [sp, #8]
    // add r0, sp, #0
    Sprite_CreateAffine((0x23 << 0xe));
    // str r0, [r4, r1]
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000F08)), 0x27);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000F08)), 0);
    sub_0203A880();
}





void ov70_0223BAAC(void) {
    Sprite_Delete(*((u32*)(r0 + 0x00000DCC)));
    Sprite_Delete(*((u32*)(r4 + (0xdd << 4))));
    Sprite_Delete(*((u32*)(r4 + 0x00000F04)));
    Sprite_Delete(*((u32*)(r4 + 0x00000F08)));
}





void ov70_0223BAE0(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // add r1, r1, r2
    AddWindowParameterized(*((u32*)(0x60 + 4)), 0, 2);
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    FillWindowPixelBuffer(0);
    // ldr r0, [sp, #0x14]
    // add r5, r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((1 << 0x10) >> 0x10) + 4)), r5, 3, ((*((u16*)ov70_02245640) << 0x18) >> 0x18));
    FillWindowPixelBuffer(r5, 0);
    // add r6, #0x16
    // add r5, #0x10
    // ldr r0, [sp, #0x14]
    // add r5, r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((0x85 << 0x10) >> 0x10) + 4)), r5, 3, ((*((u16*)ov70_0224562C) << 0x18) >> 0x18));
    FillWindowPixelBuffer(r5, 0);
    // add r6, #0x38
    // add r5, #0x10
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r1, r1, r7
    AddWindowParameterized(*((u32*)(((0x0000011D << 0x10) >> 0x10) + 4)), 0x00001058, 3, ((*((u16*)ov70_02245634) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x18]
    // add r0, r0, r7
    FillWindowPixelBuffer(0);
    // add r6, #0x14
    // ldr r0, [sp, #0x14]
    ov70_02239D44(4);
}





void ov70_0223BC2C(void) {
    // add r0, r6, r0
    RemoveWindow(0x00001198);
    // add r0, r6, r0
    RemoveWindow(0x00000F18);
    // add r5, r6, r0
    RemoveWindow(r5);
    // add r5, #0x10
    // add r5, r6, r0
    RemoveWindow(r5);
    // add r5, #0x10
}





void ov70_0223BC7C(void) {
    String_New(0xb4, 0x3d);
    // str r0, [r4, r1]
    // sub r1, #0x1c
    NewString_ReadMsgData(*((u32*)(r4 + 0x00000BBC)), 0x2a);
    // str r0, [r4, r1]
    Heap_Alloc(0x3d, 0x30);
    // str r0, [r4, r1]
    MIi_CpuClearFast(0, *((u32*)(r4 + 0x000011C4)), 0x30);
    ov70_0223F684(0x3d);
    // add r1, #0x70
    *((u32*)(*((u32*)(r4 + 0x000011C4)) + 0x14)) = r0;
    // add r0, r4, r1
    ov70_0223F948(0x000011C4, *((u32*)(r4 + 0x000011C4)));
}





void ov70_0223BCD0(void) {
    Heap_Free(*((u32*)(*((u32*)(r0 + 0x000011C4)) + 0x14)));
    Heap_Free(*((u32*)(r4 + 0x000011C4)));
    String_Delete(*((u32*)(r4 + 0x00000BBC)));
    String_Delete(*((u32*)(r4 + (0x2f << 6))));
}





void ov70_0223BD04(void) {
    // str r1, [sp]
    ov70_0223CAC4(0x20, 0, 0);
    GXx_GetMasterBrightness_(0x0400006C);
    // mvn r1, r1
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u32*)(r4 + 0x2c)) = 0x1e;
    *((u32*)(r4 + 0x2c)) = 1;
    // str r1, [sp]
    ov70_0223CAC4(1, 8, 1, 0);
    ov70_02238D84(r4, 0x15, 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0xf1 << 4))), 1);
}





void ov70_0223BD80(void) {
    // bx r3
    // nop
    // _0223BD88: .word TouchscreenHitbox_FindRectAtTouchNew
    // _0223BD8C: .word ov70_022456C8
}





void ov70_0223BD90(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223BDA6: ; jump table
    *((u32*)(r0 + 0x2c)) = 3;
    PlaySE(0x000005DC, (*((u16*)(r1 + 6)) << 0x10));
    // ldrsh r0, [r4, r0]
    GetMonBaseStat(0x00000B8A, 0x12);
    *((u32*)(*((u32*)(r4 + 0x000011C4)) + 0x20)) = r0;
    // add r0, r4, r0
    ov70_0223EDE4(0x00000B8A, *((u32*)(*((u32*)(r4 + 0x000011C4)) + 0x20)), *((u32*)(r4 + 0x000011C4)));
    PlaySE(0x000005DC);
    *((u32*)(r4 + 0x2c)) = 6;
    PlaySE(0x000005DC);
    *((u32*)(r4 + 0x2c)) = 9;
    PlaySE(0x000005DC);
    *((u32*)(r4 + 0x2c)) = 0xc;
    PlaySE(0x000005DC);
    *((u32*)(r4 + 0x2c)) = 0x1d;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    PlaySE(0x000005DC);
    *((u32*)(r4 + 0x2c)) = 0xf;
    // str r1, [sp]
    ov70_0223CAC4(0xf, 0xf, 1, 0);
    ov70_02238D84(r4, 0x15, 0x17);
    PlaySE(0x000005DC);
}





void ov70_0223BE84(void) {
    ov70_0223BD80();
    // mvn r0, r0
    ov70_0223C420(r5, r0);
    ov70_0223BD90(r5, r4);
    ov70_0223C304(r5);
    // tst r0, r2
    ov70_0223C2EC(r5, *((u32*)(gSystem + 0x48)), 1);
    ov70_0223BD90(r5, r0);
    // tst r0, r1
    // str r0, [sp]
    ov70_0223CAC4(r5, 0xf, 0);
    ov70_02238D84(r5, 0x15, 0x17);
    PlaySE(0x000005DC);
}





void ov70_0223BF00(void) {
    // ldrsh r1, [r4, r3]
    // str r1, [sp]
    ov70_0223CAC4(0xc, 1, 0);
    ov70_02238D84(r4, 0x15, 1);
    PlaySE(0x000005F3);
    // add r0, r4, r3
    // add r3, #0xe
    // add r1, r4, r1
    ov70_0223CC68((r3 + 6), *((u32*)(r4 + 0x000012CC)), *((u32*)(r4 + r3)));
    // str r0, [sp]
    ov70_0223CAC4(r4, 0x21, 1, 0);
    ov70_02238D84(r4, 0x15, 1);
    PlaySE(0x000005F3);
    PlaySE(0x000005FE);
    // str r0, [sp]
    ov70_0223CAC4(r4, 0xd, 1, 0);
    ov70_02238D84(r4, 0x15, 0x10);
    ov70_02241234(r4);
}





void ov70_0223BFA8(void) {
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0xc
    // add r1, sp, #0
    // add r0, sp, #0xc
    // add r0, sp, #0x1c
    // sub r0, r4, r0
    // bmi _0223C002
}





void ov70_0223C008(void) {
    ov70_0223BFA8(1);
    ov70_0223BFA8(r5, 0);
    // add r0, r5, r0
    // add r2, r5, r2
    ov70_02238130(0x00000B8A, (r4 + 2), (0x26 << 4));
    // add r0, sp, #0
    MI_CpuFill8(0, 8);
    // add r0, sp, #0
    // ldrsh r2, [r5, r1]
    // strh r2, [r0]
    // ldrsb r2, [r5, r2]
    *((u8*)(r0 + 2)) = (0x00000B8A + 2);
    // ldrsb r2, [r5, r2]
    *((u8*)(r0 + 3)) = (0x00000B8A + 3);
    // ldrsb r2, [r5, r2]
    *((u8*)(r0 + 4)) = (0x00000B8A + 4);
    // ldrsb r1, [r5, r1]
    *((u8*)(r0 + 5)) = (0x00000B8A + 5);
    *((u8*)(r0 + 6)) = r4;
    *((u8*)(r0 + 7)) = *((u32*)(r5 + 0x000012CC));
    // add r0, sp, #0
    // add r1, r5, r1
    ov70_022381A4((0x26 << 4), (0x00000B8A + 4));
    // strh r2, [r5, r0]
    // add r0, #8
    // strh r2, [r5, r0]
    // add r0, #0xa
    // strh r2, [r5, r0]
    // add r1, #0xe
    // sub r2, #0xee
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    *((u32*)(r5 + 0x2c)) = 0x11;
    // strh r1, [r5, r2]
}





void ov70_0223C0C8(void) {
    ov70_02237F38();
    ov70_02237F58();
    // str r1, [r4, r0]
    // add r0, #0xf
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223C0F4: ; jump table
    // str r5, [r4, r0]
    StopSE(0x000005FE, 0);
    ov70_02241184(r4, r5, 1);
    // add r1, r4, r1
    ov70_0223CC04(*((u32*)(r4 + 4)), 0x000010D8, *((u32*)(r4 + (0xba << 4))), 0);
    // add r1, r4, r1
    ov70_0223CC04(*((u32*)(r4 + (0xba << 4))), 1);
    *((u32*)(r4 + 0x2c)) = 0x12;
    *((u32*)(r4 + 0x2c)) = 0x1b;
    sub_020399EC(0x1b);
    *((u32*)(r4 + 0x2c)) = 0x14;
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00001604)));
}





void ov70_0223C19C(void) {
    // str r1, [sp]
    ov70_0223CAC4(0xe, 1, 0);
    ov70_02238D84(r4, 0x15, 1);
    PlaySE(0x000005F3);
    // str r1, [sp]
    ov70_0223CAC4(0x1e, 1, 0);
    ov70_02238D84(r4, 0x15, 0x13);
    // str r1, [r4, r0]
}





void ov70_0223C1F8(void) {
    // str r2, [r4, r1]
    // str r1, [sp]
    ov70_0223CAC4(0x20, 1, 0);
    ov70_02238D84(r4, 0x15, 1);
    // strh r1, [r4, r0]
}





void ov70_0223C23C(void) {
    // strh r3, [r4, r1]
    // str r1, [sp]
    ov70_0223CAC4(0x26, 1, 0);
    ov70_02238D84(r4, 0x15, 1);
    PlaySE(0x000005F3);
}





void ov70_0223C274(void) {
    // str r1, [sp]
    ov70_0223CAC4(0x99, 4, 0);
    ov70_02238D84(r4, 0x16, 0x1c);
    // str r1, [r4, r0]
    PlaySE(0x000005F3, 0);
}





void ov70_0223C2B0(void) {
    // str r1, [sp]
    ov70_0223CAC4(0x9e, 4, 0);
    ov70_02238D84(r4, 0x16, 2);
    ov70_02238E50(r4, 0, 0);
    PlaySE(0x000005F3);
}





void ov70_0223C2EC(void) {
    // ldr r1, [r0, r1]
    // cmp r0, #0
    // bne _0223C2FA
    // _0223C300: .word 0x000011C4
}





void ov70_0223C304(void) {
    // tst r1, r0
    *((u32*)(*((u32*)(r0 + 0x000011C4)) + 0x28)) = (*((u32*)(*((u32*)(r0 + 0x000011C4)) + 0x28)) - 1);
    PlaySE(0x000005DC, *((u32*)(r0 + 0x000011C4)));
    PlaySE(0x000005DC);
    *((u32*)(*((u32*)(r5 + 0x000011C4)) + 0x2c)) = (*((u32*)(*((u32*)(r5 + 0x000011C4)) + 0x2c)) - 1);
    // tst r1, r0
    *((u32*)(*((u32*)(r5 + 0x000011C4)) + 0x28)) = (*((u32*)(*((u32*)(r5 + 0x000011C4)) + 0x28)) + 1);
    PlaySE(0x000005DC, *((u32*)(r5 + 0x000011C4)));
    PlaySE(0x000005DC);
    *((u32*)(*((u32*)(r5 + 0x000011C4)) + 0x2c)) = (*((u32*)(*((u32*)(r5 + 0x000011C4)) + 0x2c)) + 1);
    // tst r1, r0
    PlaySE(0x000005DC, 0x10);
    *((u32*)(*((u32*)(r5 + 0x000011C4)) + 0x24)) = 1;
    // tst r0, r1
    PlaySE(0x000005DC, 0x20);
    *((u32*)(*((u32*)(r5 + 0x000011C4)) + 0x24)) = 0;
    ov70_0223C2EC(r5, 0);
    ov70_0223C2EC(r5);
    ov70_02238F9C(*((u32*)(r5 + 0x00000DCC)), *((u16*)(ov70_022464FE + (r4 * 6))), *((u16*)(ov70_02246500 + (6 * r0))), (6 * r0));
    ov70_0223C2EC(r5);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000DCC)), *((u16*)(ov70_02246502 + (r0 * 6))), (r0 * 6), r0);
}





void ov70_0223C420(void) {
    *((u32*)(*((u32*)(r0 + 0x000011C4)) + 0x24)) = 0;
    *((u32*)(*((u32*)(r0 + 0x000011C4)) + 0x28)) = *((u8*)(ov70_022464F1 + (r1 << 1)));
    *((u32*)(*((u32*)(r0 + 0x000011C4)) + 0x24)) = 1;
    *((u32*)(*((u32*)(r0 + 0x000011C4)) + 0x2c)) = *((u8*)(ov70_022464F1 + *((u32*)(r0 + 0x000011C4))));
    ov70_0223C2EC(r0, 0x000011C4, *((u8*)(ov70_022464F1 + *((u32*)(r0 + 0x000011C4)))), 1);
    ov70_0223C2EC(r5);
    ov70_02238F9C(*((u32*)(r5 + 0x00000DCC)), *((u16*)(ov70_022464FE + (r4 * 6))), *((u16*)(ov70_02246500 + (6 * r0))), (6 * r0));
    ov70_0223C2EC(r5);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000DCC)), *((u16*)(ov70_02246502 + (r0 * 6))), (r0 * 6), r0);
}





void ov70_0223C4B0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0);
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov70_0223C4E4(void) {
    // str r1, [sp]
    ov70_0223CAC4(9, 1, 0);
    ov70_02238D84(r4, 0x15, 4);
}





void ov70_0223C50C(void) {
    ov70_022420C4(*((u32*)(r0 + 0x000011A8)), 0);
    ov70_0223CD28(9);
    *((u32*)(r4 + 0x2c)) = 5;
}





void ov70_0223C52C(void) {
    ov70_02242144(*((u32*)(r0 + 0x000011A8)));
    // mvn r0, r0
    ov70_0223CD28(0);
    *((u32*)(r4 + 0x2c)) = 0;
    // add r0, #0x70
    // add r0, r4, r0
    // add r1, r2, r1
    ov70_0223F960(0x000011C4, *((u16*)(*((u32*)(r4 + 0x000011C4)) + 4)), *((u16*)(*((u32*)(r4 + 0x000011C4)) + 0xa)), *((u16*)(*((u32*)(r4 + 0x000011C4)) + 8)));
    ov70_0223CD28(0);
    // strh r5, [r4, r0]
    *((u32*)(r4 + 0x2c)) = 0;
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00001068, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    ov70_0223F1D8(0x00001068, *((u32*)(r4 + 0x00000BA4)), r5, 0);
    GetMonBaseStat(r5, 0x12);
    *((u32*)(*((u32*)(r4 + 0x000011C4)) + 0x20)) = r0;
    // add r1, #0x70
    // add r0, r4, r1
    // add r1, r2, r1
    ov70_0223F960(*((u16*)(*((u32*)(r4 + 0x000011C4)) + 4)), *((u16*)(*((u32*)(r4 + 0x000011C4)) + 0xa)), *((u16*)(*((u32*)(r4 + 0x000011C4)) + 8)));
    // add r0, r4, r0
    ov70_0223EDE4(0x00000B8A, *((u32*)(*((u32*)(r4 + 0x000011C4)) + 0x20)));
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00001088, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r2, #0x14
    // ldrsb r2, [r4, r2]
    // add r0, r4, r0
    ov70_0223F2BC(0x00001088, *((u32*)(r4 + (0xba << 4))), (0xba << 4), 1);
}





void ov70_0223C618(void) {
    // str r1, [sp]
    ov70_0223CAC4(0xa, 1, 0);
    ov70_02238D84(r4, 0x15, 7);
}





void ov70_0223C640(void) {
    ov70_022420C4(*((u32*)(r0 + 0x000011A8)), 1);
    ov70_0223CD28(9);
    *((u32*)(r4 + 0x2c)) = 8;
}





void ov70_0223C660(void) {
    ov70_02242144(*((u32*)(r0 + 0x000011A8)));
    // mvn r0, r0
    ov70_0223CD28(0);
    // add r0, r5, r0
    ClearFrameAndWindow2(0x00000F18, 0);
    *((u32*)(r5 + 0x2c)) = 0;
    ov70_0223CD28(0);
    // strb r1, [r5, r0]
    // add r0, r5, r0
    *((u32*)(r5 + 0x2c)) = 0;
    FillWindowPixelBuffer(0x00001088, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r2, #0x14
    // ldrsb r2, [r5, r2]
    // add r0, r5, r0
    ov70_0223F2BC(0x00001088, *((u32*)(r5 + (0xba << 4))), (0xba << 4), 1);
}





void ov70_0223C6F0(void) {
    // str r1, [sp]
    ov70_0223CAC4(0xb, 1, 0);
    ov70_02238D84(r4, 0x15, 0xa);
}





void ov70_0223C718(void) {
    // strh r1, [r4, r0]
    ov70_022420C4(*((u32*)(r0 + 0x000011A8)), 2);
    ov70_0223CD28(9);
    *((u32*)(r4 + 0x2c)) = 0xb;
}





void ov70_0223C744(void) {
    ov70_02242144(*((u32*)(r0 + 0x000011A8)));
    // mvn r0, r0
    ov70_0223CD28(0);
    *((u32*)(r5 + 0x2c)) = 0;
    ov70_0223CD28(0);
    // add r0, r5, r0
    ov70_0223F828(0x00000B8A, r4, 1);
    // add r0, r5, r0
    *((u32*)(r5 + 0x2c)) = 0;
    FillWindowPixelBuffer(0x000010A8, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov70_0223F370(0x000010A8, *((u32*)(r5 + (0xba << 4))), r4, 0);
}





void ov70_0223C7C4(void) {
    // str r1, [sp]
    ov70_0223CAC4(0xb0, 1, 0);
    ov70_02238D84(r4, 0x15, 0xd);
}





void ov70_0223C7EC(void) {
    // strh r1, [r4, r0]
    ov70_022420C4(*((u32*)(r0 + 0x000011A8)), 3);
    ov70_0223CD28(9);
    *((u32*)(r4 + 0x2c)) = 0xe;
}





void ov70_0223C818(void) {
    ov70_02242144(*((u32*)(r0 + 0x000011A8)));
    // mvn r0, r0
    ov70_0223CD28(0);
    // add r0, r5, r0
    ClearFrameAndWindow2(0x00000F18, 0);
    *((u32*)(r5 + 0x2c)) = 0;
    ov70_0223CD28(0);
    ov70_0223F8A8(r5, r4);
    // add r0, r5, r0
    *((u32*)(r5 + 0x2c)) = 0;
    FillWindowPixelBuffer(0x00001188, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r2, #0x10
    // add r0, r5, r0
    ov70_0223F244(0x00001188, *((u32*)(r5 + (0xbb << 4))), *((u32*)(r5 + (0xbb << 4))), *((u32*)(r5 + 0x000012CC)));
}





void ov70_0223C8B0(void) {
    // str r0, [sp]
    ov70_02238C14(*((u32*)(r0 + 4)), 0xc, (0x12 << 4), 3);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x2c)) = 0x18;
}





void ov70_0223C8DC(void) {
    ov70_02238C8C();
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    *((u32*)(r4 + 0x2c)) = 2;
    ov70_02238E50(r4, 1, 0);
    ov70_02241234(r4);
    // str r1, [r4, r0]
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)), 0);
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov70_0223C928(void) {
}





void ov70_0223C930(void) {
    // str r1, [sp]
    ov70_0223CAC4(0x98, 1, 0);
    ov70_02238D84(r4, 0x15, 1);
}





void ov70_0223C958(void) {
}





void ov70_0223C978(void) {
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}





void ov70_0223C9AC(void) {
    // str r1, [r4, r0]
    IsPaletteFadeFinished(0x00000F14, (*((u32*)(r0 + 0x00000F14)) + 1));
    // strh r0, [r2]
    // mvn r1, r1
    // str r1, [r4, r0]
    // sub r0, #0x2c
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000F14)), 0x10, 0x04000304);
    *((u32*)(r4 + 0x2c)) = 2;
    ov70_02238E50(r4, 3, 0x10);
    // str r1, [r4, r0]
    Sprite_SetDrawFlag(*((u32*)(r4 + (0xf1 << 4))), 0);
}





void ov70_0223CA18(void) {
    // str r1, [r4, r0]
    IsPaletteFadeFinished(0x00000F14, (*((u32*)(r0 + 0x00000F14)) - 1));
    // str r1, [r4, r0]
    *((u32*)(r4 + 0x2c)) = 1;
}





void ov70_0223CA40(void) {
    // tst r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    ov70_02241164(*((u32*)(r5 + (0x4a << 2))));
    // add r1, r5, r0
    // add r1, #0x10
    Sprite_SetAnimCtrlSeq(*((u32*)(r1 + 0x00000EE4)), (r0 << 2));
    *((u32*)(r5 + 0x2c)) = 2;
    ov70_02238E50(r5, 3, 0);
    // str r4, [r5, r0]
    PlaySE(0x000005DC);
}





void ov70_0223CAC4(void) {
    // add r2, #0x1c
    ReadMsgDataIntoString(*((u32*)(r0 + (0xba << 4))), *((u32*)(r0 + (0xba << 4))));
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000F18, 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow2(0x00000F18, 0, 1, 0xe);
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized(0x00000F18, 1, *((u32*)(r5 + 0x00000BBC)), 0);
    // str r0, [r5, r1]
}





void ov70_0223CB1C(void) {
    NewString_ReadMsgData(r2, 0x3d);
    // str r2, [sp]
    // str r0, [sp, #4]
    ov70_02245084(r5, r0, 0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(r4, 0x3f);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, #0x20
    ov70_02245084(r5, r0, 0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(r4, 0x41);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, #0x40
    ov70_02245084(r5, r0, 0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(r4, 0xab);
    // str r2, [sp]
    // str r0, [sp, #4]
    ov70_02245084(r7, r0, 0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(r4, 0x43);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, #0x60
    ov70_022450B8(r5, r0, 0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(r4, 0xee);
    // str r2, [sp]
    // add r5, #0x70
    // str r0, [sp, #4]
    ov70_022450B8(r5, r0, 0, 0);
    String_Delete(r4);
}





void ov70_0223CC04(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    BgTilemapRectChangePalette(r0, 1, 0x12, 2);
    BgCommitTilemapBufferToVram(r5, 1);
    NewString_ReadMsgData(r6, 0x45);
    // str r2, [sp]
    // str r4, [sp, #4]
    ov70_022450B8(r7, r0, 0, 0);
    String_Delete(r5);
}





void ov70_0223CC68(void) {
    // ldrsh r5, [r0, r4]
    // ldrsh r4, [r1, r4]
    // ldrsb r5, [r0, r4]
    // ldrsb r4, [r1, r4]
    // ldrsb r5, [r0, r4]
    // ldrsb r4, [r1, r4]
    // ldrsb r5, [r0, r4]
    // ldrsb r0, [r1, r4]
}





void ov70_0223CCA4(void) {
    BgSetPosTextAndCommit(*((u32*)(r0 + 4)), 0, 3, *((u32*)(r0 + 0x00000F14)));
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 1, 3, *((u32*)(r4 + 0x00000F14)));
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 2, 3, *((u32*)(r4 + 0x00000F14)));
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 3, 3, *((u32*)(r4 + 0x00000F14)));
    // neg r3, r3
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 4, 3, *((u32*)(r4 + 0x00000F14)));
    // neg r3, r3
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 5, 3, *((u32*)(r4 + 0x00000F14)));
    // neg r3, r3
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 6, 3, *((u32*)(r4 + 0x00000F14)));
    // neg r3, r3
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 7, 3, *((u32*)(r4 + 0x00000F14)));
}





void ov70_0223CD28(void) {
}





void ov70_0223CD44(void) {
    ov70_0223D3BC();
    // and r0, r1
    // strh r0, [r2]
    ov70_0223CE44(*((u32*)(r4 + 4)), *((u16*)0x04000304), 0x04000304);
    ov70_0223CF74(r4);
    ov70_0223D26C(r4);
    ov70_0223D058(r4);
    ov70_02241358(r4);
    GXx_GetMasterBrightness_(0x0400106C);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    ov70_0223E264(r4, *((u16*)(r4 + (0x12 << 4))));
    ov70_02245124(r4);
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov70_0223CDD8(void) {
    ov70_02238E44();
    sub_0203A930();
    // blx r1
}





void ov70_0223CDF8(void) {
    sub_0203A914();
    GXx_GetMasterBrightness_(0x0400106C);
    ov70_02241380(r4);
    ov70_0223D208(r4);
    ov70_0223D414(r4);
    ov70_0223D378(r4);
    ov70_0223CF48(*((u32*)(r4 + 4)));
    Sprite_SetDrawFlag(*((u32*)(r4 + (0xf1 << 4))), 0);
    ov70_02238E58(r4);
}





void ov70_0223CE44(void) {
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    GfGfx_EngineBTogglePlanes(0x16, 1);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
    ov70_022391F0(r4, 0, 0);
    BG_ClearCharDataRange(0, 0x20, 0, 0x3d);
    BG_ClearCharDataRange(3, 0x20, 0, 0x3d);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}





void ov70_0223CF48(void) {
}





void ov70_0223CF74(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov70_0223D058(void) {
    // add r0, sp, #0
    // add r2, r7, r2
    ov70_02238B54(r0, (0xd6 << 4), 1);
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    Sprite_CreateAffine((*((u16*)(ov70_02245786 + (*((u16*)(r7 + 0x00000122)) << 2))) << 0xc), (*((u16*)(r7 + 0x00000122)) << 2), (*((u16*)(r7 + 0x00000122)) << 2));
    // str r0, [r7, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r7 + 0x00000DCC)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r7 + 0x00000DCC)), 4);
    Sprite_SetPriority(*((u32*)(r7 + 0x00000DCC)), 0);
    Sprite_SetPriority(*((u32*)(r7 + 0x00000DCC)), 1);
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x24]
    // add r0, sp, #0
    Sprite_CreateAffine(0x14);
    // str r0, [r5, r1]
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000DD8)), (r6 + 6));
    Sprite_SetPriority(*((u32*)(r5 + 0x00000DD8)), 1);
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x24]
    // add r0, sp, #0
    Sprite_CreateAffine(0xa);
    // str r0, [r5, r1]
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xe5 << 4))), 0x28);
    Sprite_SetPriority(*((u32*)(r5 + (0xe5 << 4))), 1);
    // add r0, #8
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x24]
    // add r0, sp, #0
    Sprite_CreateAffine(0xa);
    // str r0, [r5, r1]
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000EC8)), 0x2a);
    Sprite_SetPriority(*((u32*)(r5 + 0x00000EC8)), 1);
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    Sprite_CreateAffine((*((u16*)(ov70_022456E8 + 2)) << 0xc));
    // str r0, [r5, r1]
    // add r1, #0x26
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000F04)), r6);
    Sprite_SetPriority(*((u32*)(r5 + 0x00000F04)), 1);
    Sprite_SetDrawFlag(*((u32*)(r7 + (0xf1 << 4))), 1);
    ov70_02238F9C(*((u32*)(r7 + (0xf1 << 4))), 0x37, (0x6a << 2));
}





void ov70_0223D208(void) {
    Sprite_Delete(*((u32*)(r0 + 0x00000F04)));
    Sprite_Delete(*((u32*)(r5 + 0x00000DCC)));
    Sprite_Delete(*((u32*)(r5 + 0x00000DD8)));
    Sprite_Delete(*((u32*)(r4 + r7)));
    Sprite_Delete(*((u32*)(r5 + 0x00000EC8)));
}





void ov70_0223D26C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r0 + 4)), 0x00000F48, 3, 4);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000F48, 0);
    // add r0, r4, r0
    CopyWindowToVram(0x00000F48);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xfc
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 4)), 0x00000F18, 0, 2);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000F18, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 4)), 0x00001158, 0, 2);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00001158, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 4)), 0x00000F68, 1, 0x18);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000F68, 6);
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    ov70_02245084(0x00000F68, *((u32*)(r4 + 0x00000BB8)), 0, 1);
    ov70_02239D44(r4, 3);
    ov70_02239D44(r4, 1);
}





void ov70_0223D378(void) {
    // add r0, r4, r0
    RemoveWindow(0x00001198);
    // add r0, r4, r0
    RemoveWindow(0x00001158);
    // add r0, r4, r0
    RemoveWindow(0x00000F68);
    // add r0, r4, r0
    RemoveWindow(0x00000F18);
    // add r0, r4, r0
    RemoveWindow(0x00000F48);
}





void ov70_0223D3BC(void) {
    String_New(0x12, 0x3d);
    // str r0, [r4, r1]
    String_New(0xb4, 0x3d);
    // str r0, [r4, r1]
    // sub r1, #0x1c
    NewString_ReadMsgData(*((u32*)(r4 + 0x00000BBC)), 0x6d);
    // str r0, [r4, r1]
    // strh r1, [r4, r0]
    Heap_Alloc(0x3d, 0x78);
    // str r0, [r4, r1]
}





void ov70_0223D414(void) {
    Heap_Free(*((u32*)(r0 + 0x000011F4)));
    String_Delete(*((u32*)(r4 + 0x00000BB4)));
    String_Delete(*((u32*)(r4 + 0x00000BBC)));
    String_Delete(*((u32*)(r4 + 0x00000BB8)));
}





void ov70_0223D44C(void) {
    IsPaletteFadeFinished();
    // str r0, [sp]
    // str r3, [sp, #4]
    ov70_0223E01C(r5, 0x11, 1, 0);
    ov70_02238D84(r5, 3, 1);
}





void ov70_0223D490(void) {
    ov70_02238E50(1, 0);
    *((u32*)(r4 + 0x2c)) = 2;
    PlaySE(0x000005DC);
    PlaySE(0x000005DC);
    ov70_0223E5C8(*((u32*)(*((u32*)r4) + 8)), *((u32*)(*((u32*)r4) + 0xc)), *((u16*)(r4 + (0x12 << 4))), *((u16*)(r4 + ((0x12 << 4) + 2))));
    ov70_0223E4DC(*((u32*)(*((u32*)r4) + 8)), *((u32*)(*((u32*)r4) + 0xc)), *((u16*)(r4 + (0x12 << 4))), *((u16*)(r4 + ((0x12 << 4) + 2))));
    ov70_0223E49C(*((u32*)(*((u32*)r4) + 8)), *((u32*)(*((u32*)r4) + 0xc)), *((u16*)(r4 + (0x12 << 4))), *((u16*)(r4 + ((0x12 << 4) + 2))));
    BufferBoxMonNickname(*((u32*)(r4 + 0x00000B9C)), 0, r0);
    // str r0, [sp]
    // str r3, [sp, #4]
    ov70_0223E01C(r4, 0x16, 1, 0);
    ov70_02238D84(r4, 3, 7);
    // str r0, [sp]
    // str r2, [sp, #4]
    ov70_0223E01C(r4, 0x1a, 1, 0);
    ov70_02238D84(r4, 4, 1);
    // str r0, [sp]
    // str r2, [sp, #4]
    ov70_0223E01C(r4, 0x1b, 1, 0);
    ov70_02238D84(r4, 4, 1);
}





void ov70_0223D588(void) {
    ov70_0223D690(6, 0x00000122, *((u16*)(r0 + 0x00000122)));
    ov70_0223E5C8(*((u32*)(*((u32*)r5) + 8)), *((u32*)(*((u32*)r5) + 0xc)), *((u16*)(r5 + (r2 - 2))));
    ov70_0223E49C(*((u32*)(*((u32*)r5) + 8)), *((u32*)(*((u32*)r5) + 0xc)), *((u16*)(r5 + (0x12 << 4))), *((u16*)(r5 + ((0x12 << 4) + 2))));
    // add r3, r5, r1
    // sub r1, #8
    // add r1, r3, r1
    ov70_0223E658(((0x4b << 2) * *((u32*)(r5 + (0x4b << 2)))), *((u32*)(r5 + (0x4b << 2))));
    ov70_0223E4DC(*((u32*)(*((u32*)r5) + 8)), *((u32*)(*((u32*)r5) + 0xc)), *((u16*)(r5 + (0x12 << 4))), *((u16*)(r5 + ((0x12 << 4) + 2))));
    BufferBoxMonNickname(*((u32*)(r5 + 0x00000B9C)), 0, r4);
    // str r0, [sp]
    // str r3, [sp, #4]
    ov70_0223E01C(r5, 0x12, 1, 0);
    ov70_02238D84(r5, 3, 9);
    PlaySE(0x000005DC);
    // str r0, [sp]
    // str r2, [sp, #4]
    ov70_0223E01C(r5, 0x1a, 1, 0);
    ov70_02238D84(r5, 4, 1);
    PlaySE(0x000005DC);
    PlaySE(0x000005DC);
}





void ov70_0223D680(void) {
    // bx r3
    // nop
    // _0223D688: .word TouchscreenHitbox_FindRectAtTouchNew
    // _0223D68C: .word ov70_02245884
}





void ov70_0223D690(void) {
    ov70_02238E50(1, 0);
    *((u32*)(r4 + 0x2c)) = 2;
    PlaySE(0x000005DC);
    ov70_02238E50(3, 0x11);
    *((u32*)(r4 + 0x2c)) = 2;
    PlaySE(0x000005DC);
}





void ov70_0223D6C8(void) {
    ov70_0223D680();
    // mvn r0, r0
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x00000F04)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000F04)), 0x26);
    ov70_0223D924(*((u16*)(r5 + (0x12 << 4))), 0x13, 1);
    // strh r0, [r5, r1]
    ov70_0223E264(r5, *((u16*)(r5 + (0x12 << 4))));
    PlaySE(0x000005DC);
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x00000F08)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000F08)), 0x27);
    // sub r2, #0x14
    ov70_0223D924(*((u16*)(r5 + (0x12 << 4))), 0x13, 0x13);
    // strh r0, [r5, r1]
    ov70_0223E264(r5, *((u16*)(r5 + (0x12 << 4))));
    PlaySE(0x000005DC);
    ov70_0223D690(r5, *((u32*)(r5 + 0x24)));
    // strh r4, [r5, r1]
    ov70_0223D8E8(*((u32*)(r5 + 0x00000DCC)), *((u16*)(r5 + 0x00000122)));
    // strh r4, [r5, r1]
    ov70_0223D8E8(*((u32*)(r5 + 0x00000DCC)), *((u16*)(r5 + 0x00000122)));
    ov70_0223D490(r5);
    ov70_0223D588(r5);
    ov70_0223D808(r5);
    // tst r0, r1
    ov70_0223D690(r5, 5);
    // tst r0, r1
    ov70_0223D490(r5);
    // tst r0, r1
    ov70_0223D690(r5, 6);
    // tst r0, r1
    ov70_0223D588(r5);
}





void ov70_0223D808(void) {
    // tst r1, r0
    // tst r1, r0
    // tst r1, r0
    // tst r0, r1
    // add r1, r1, r2
    // add r0, r5, r0
    // str r0, [sp]
    // ldr r1, [sp]
    // str r0, [sp, #4]
    Sprite_SetAnimActiveFlag(*((u32*)(ov70_02245804 + (((0 << 0x18) >> 0x18) << 2))), 1, (*((u16*)(r0 + 0x00000122)) << 2), *((u16*)(r0 + 0x00000122)));
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add r6, #0x26
    Sprite_SetAnimCtrlSeq(*((u32*)(r1 + r0)), r6);
    // sub r4, #0x64
    ov70_0223D924(*((u16*)(r5 + (0x12 << 4))), 0x13, r4);
    // strh r0, [r5, r1]
    ov70_0223E264(r5, *((u16*)(r5 + (0x12 << 4))));
    PlaySE(0x000005DC);
    // strh r4, [r5, r0]
    PlaySE(0x000005DC);
    ov70_0223D8E8(*((u32*)(r5 + 0x00000DCC)), *((u16*)(r5 + 0x00000122)));
}





void ov70_0223D8E8(void) {
    ov70_02238D8C(*((u16*)(ov70_02245784 + (r1 << 2))), *((u16*)(ov70_02245786 + (r1 << 2))), (r1 << 2));
    Sprite_SetPriority(r5, 0);
    Sprite_SetPriority(r5, 1);
}





void ov70_0223D924(void) {
    // add r0, r0, r2
    // bpl _0223D92C
}





void ov70_0223D934(void) {
    ListMenuItems_New(3, 0x3d);
    // str r0, [r4, r1]
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x000011AC)), *((u32*)(r4 + (0xba << 4))), 0x62, 1);
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x000011AC)), *((u32*)(r4 + (0xba << 4))), 0x63, 2);
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x000011AC)), *((u32*)(r4 + (0xba << 4))), 0x64, 3);
    ov70_02238CAC(r4, 3, 0xa);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x2c)) = 8;
}





void ov70_0223D998(void) {
    TouchscreenListMenu_HandleInput(*((u32*)(r0 + 0x000011D0)));
    // mvn r1, r1
    ov70_02238D60(r5, 1);
    ListMenuItems_Delete(*((u32*)(r5 + 0x000011AC)));
    // add r0, r5, r0
    ClearFrameAndWindow2(0x00000F18, 0);
    *((u32*)(r5 + 0x2c)) = 2;
    ov70_02238E50(r5, 8, 5);
    ov70_02238D60(r5);
    ListMenuItems_Delete(*((u32*)(r5 + 0x000011AC)));
    ov70_0223E49C(*((u32*)(*((u32*)r5) + 8)), *((u32*)(*((u32*)r5) + 0xc)), *((u16*)(r5 + (0x12 << 4))), *((u16*)(r5 + ((0x12 << 4) + 2))));
    ov70_0223E4FC();
    // str r0, [sp]
    // str r2, [sp, #4]
    ov70_0223E01C(r5, 0x25, 1, 0);
    ov70_02238D84(r5, 4, 1);
    ov70_0223E538(r4);
    // str r0, [sp]
    // str r2, [sp, #4]
    ov70_0223E01C(r5, 0xb1, 1, 0);
    // str r0, [sp]
    // str r2, [sp, #4]
    ov70_0223E01C(r5, 0xb2, 1, 0);
    ov70_02238D84(r5, 4, 1);
    ov70_0223E59C(r4);
    // str r0, [sp]
    // str r2, [sp, #4]
    ov70_0223E01C(r5, 0xb3, 1, 0);
    ov70_02238D84(r5, 4, 1);
    ov70_0223E490(*((u16*)(r5 + (0x12 << 4))));
    Party_GetMonByIndex(*((u32*)(*((u32*)r5) + 8)), *((u16*)(r5 + 0x00000122)));
    GetMonData(0xa2, r4);
    *((u32*)(r5 + 0x2c)) = 0xe;
    ov70_0223E49C(*((u32*)(*((u32*)r5) + 8)), *((u32*)(*((u32*)r5) + 0xc)), *((u16*)(r5 + (0x12 << 4))), *((u16*)(r5 + ((0x12 << 4) + 2))));
    // str r0, [r5, r1]
    *((u32*)(r5 + 0x2c)) = 2;
    ov70_02238E50(r5, 6, 0);
    ov70_02238D60(r5);
    ListMenuItems_Delete(*((u32*)(r5 + 0x000011AC)));
    // add r0, r5, r0
    ClearFrameAndWindow2(0x00000F18, 0);
    *((u32*)(r5 + 0x2c)) = 0;
}





void ov70_0223DB30(void) {
    ListMenuItems_New(3, 0x3d);
    // str r0, [r4, r1]
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x000011AC)), *((u32*)(r4 + (0xba << 4))), 0x57, 1);
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x000011AC)), *((u32*)(r4 + (0xba << 4))), 0x58, 2);
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x000011AC)), *((u32*)(r4 + (0xba << 4))), 0x59, 3);
    ov70_02238CAC(r4, 3, 0xa);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x2c)) = 0xa;
}





void ov70_0223DB94(void) {
    TouchscreenListMenu_HandleInput(*((u32*)(r0 + 0x000011D0)));
    // mvn r1, r1
    ov70_02238D60(r5, 1);
    ListMenuItems_Delete(*((u32*)(r5 + 0x000011AC)));
    *((u32*)(r5 + 0x2c)) = 2;
    ov70_02238E50(r5, 8, 6);
    ov70_02238D60(r5);
    ListMenuItems_Delete(*((u32*)(r5 + 0x000011AC)));
    // add r0, r5, r0
    ClearFrameAndWindow2(0x00000F18, 0);
    ov70_0223E49C(*((u32*)(*((u32*)r5) + 8)), *((u32*)(*((u32*)r5) + 0xc)), *((u16*)(r5 + (0x12 << 4))), *((u16*)(r5 + ((0x12 << 4) + 2))));
    ov70_0223E4FC();
    // str r0, [sp]
    // str r2, [sp, #4]
    ov70_0223E01C(r5, 0x25, 1, 0);
    ov70_02238D84(r5, 4, 1);
    ov70_0223E538(r4);
    // str r0, [sp]
    // str r2, [sp, #4]
    ov70_0223E01C(r5, 0xb1, 1, 0);
    // str r0, [sp]
    // str r2, [sp, #4]
    ov70_0223E01C(r5, 0xb2, 1, 0);
    ov70_02238D84(r5, 4, 1);
    ov70_0223E59C(r4);
    // str r0, [sp]
    // str r2, [sp, #4]
    ov70_0223E01C(r5, 0xb3, 1, 0);
    ov70_02238D84(r5, 4, 1);
    ov70_0223E490(*((u16*)(r5 + (0x12 << 4))));
    Party_GetMonByIndex(*((u32*)(*((u32*)r5) + 8)), *((u16*)(r5 + 0x00000122)));
    GetMonData(0xa2, r4);
    *((u32*)(r5 + 0x2c)) = 0xb;
    ov70_0223DE6C(r5);
    ov70_02238D60(r5);
    ListMenuItems_Delete(*((u32*)(r5 + 0x000011AC)));
    // add r0, r5, r0
    ClearFrameAndWindow2(0x00000F18, 0);
    *((u32*)(r5 + 0x2c)) = 0;
}





void ov70_0223DD0C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    // str r1, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0);
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov70_0223DD68(void) {
    // str r0, [sp]
    ov70_02238C14(*((u32*)(r0 + 4)), 0xc, 0x000001AD, 8);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x2c)) = 6;
}





void ov70_0223DD94(void) {
    ov70_02238C8C();
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    *((u32*)(r4 + 0x2c)) = 2;
    ov70_02238E50(r4, 0, 0);
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov70_0223DDD0(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    ov70_0223E01C(0x19, 1, 0);
    ov70_02238D84(r4, 3, 0xc);
}





void ov70_0223DDFC(void) {
    // str r0, [sp]
    ov70_02238C14(*((u32*)(r0 + 4)), 0xa, 0x000001AD, 8);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x2c)) = 0xd;
}





void ov70_0223DE28(void) {
    ov70_02238C8C();
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    ov70_0223DE6C(r4);
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    // add r0, r4, r0
    ClearFrameAndWindow2(0x00001158, 0);
    *((u32*)(r4 + 0x2c)) = 1;
}





void ov70_0223DE6C(void) {
    // add r2, r4, r0
    // sub r0, #8
    // add r0, r2, r0
    ov70_0223E76C(((0x4b << 2) * *((u32*)(r0 + (0x4b << 2)))), *((u32*)(r0 + (0x4b << 2))));
    Party_GetCount(*((u32*)(*((u32*)r4) + 8)));
    // str r0, [sp]
    // str r2, [sp, #4]
    ov70_0223E01C(r4, 0x1c, 1, 0);
    ov70_02238D84(r4, 4, 1);
    ov70_0223E49C(*((u32*)(*((u32*)r4) + 8)), *((u32*)(*((u32*)r4) + 0xc)), *((u16*)(r4 + (0x12 << 4))), *((u16*)(r4 + ((0x12 << 4) + 2))));
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x2c)) = 2;
    // str r1, [r4, r0]
    ov70_02238E50(r4, 7, 9);
    // add r0, r4, r0
    ov70_0223E690((0x4f << 2), r4);
    // str r1, [r4, r0]
}





void ov70_0223DF14(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    ov70_0223E01C(0x19, 1, 0);
    ov70_02238D84(r4, 3, 0xf);
}





void ov70_0223DF40(void) {
    // str r0, [sp]
    ov70_02238C14(*((u32*)(r0 + 4)), 0xa, 0x000001AD, 8);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x2c)) = 0x10;
}





void ov70_0223DF6C(void) {
    ov70_02238C8C();
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    ov70_0223E49C(*((u32*)(*((u32*)r4) + 8)), *((u32*)(*((u32*)r4) + 0xc)), *((u16*)(r4 + (0x12 << 4))), *((u16*)(r4 + ((0x12 << 4) + 2))));
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x2c)) = 2;
    ov70_02238E50(r4, 6, 0);
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    // add r0, r4, r0
    ClearFrameAndWindow2(0x00001158, 0);
    *((u32*)(r4 + 0x2c)) = 1;
}





void ov70_0223DFD0(void) {
}





void ov70_0223DFF0(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + (0xbf << 4))) << 0x18) >> 0x18));
    // add r0, r4, r0
    ClearFrameAndWindow2(0x00001158, 0);
    *((u32*)(r4 + 0x2c)) = *((u32*)(r4 + 0x30));
}





void ov70_0223E01C(void) {
    NewString_ReadMsgData(*((u32*)(r0 + (0xba << 4))));
    // add r1, #0x20
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B9C)), *((u32*)(r5 + 0x00000B9C)), r0);
    // ldr r0, [sp, #0x24]
    // add r4, r5, r0
    FillWindowPixelBuffer(r4, 0xf);
    DrawFrameAndWindow2(r4, 0, 1, 0xe);
    // str r3, [sp]
    // str r6, [sp, #4]
    // str r3, [sp, #8]
    AddTextPrinterParameterized(r4, 1, *((u32*)(r5 + 0x00000BBC)), 0);
    // str r0, [r5, r1]
    String_Delete(r7, (0xbf << 4));
}





void ov70_0223E094(void) {
}





void ov70_0223E0BC(void) {
    // str r0, [sp]
    // ldr r4, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // add r2, sp, #8
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r1, #0xc
    // add r0, #0xc
    // str r0, [r4]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
}





void ov70_0223E114(void) {
}





void ov70_0223E120(void) {
    // str r0, [sp]
    // add r7, #0xc
    // add r0, #0xc
    // add r0, #0xc
    // add r5, r5, r7
    // ldr r0, [sp]
}





void ov70_0223E170(void) {
    // str r1, [sp, #0xc]
    // ldr r4, [sp, #0x40]
    // str r0, [sp, #0x1c]
    // strh r0, [r6]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // strh r0, [r4]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x3c]
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x44]
    // ldr r3, [sp, #0x38]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x44]
}





void ov70_0223E264(void) {
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x20]
    Heap_AllocAtEnd(3, 0x00003D68);
    // str r0, [r5, r1]
    // str r0, [sp, #0x18]
    NARC_New(0x14, 0x3d);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x10]
    PCStorage_GetMonByIndexPair(0);
    // add r1, r2, r1
    ov70_0223E114((r4 << 2), *((u32*)(r5 + r6)));
    // strh r0, [r1, r6]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x10]
    // add r7, r5, r6
    PCStorage_GetMonByIndexPair(0, *((u32*)(r5 + 0x000011F4)), 0);
    // ldr r1, [sp, #0x1c]
    // str r4, [sp]
    // str r1, [sp, #4]
    // add r3, sp, #0x2c
    // add r1, r1, r6
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x18]
    // add r1, r1, r2
    // str r1, [sp, #0xc]
    // add r3, r3, r6
    ov70_0223E170(*((u32*)(r7 + 0x00000DD8)), *((u32*)(r7 + (0xe5 << 4))));
    Sprite_SetDrawFlag(*((u32*)(r7 + 0x00000EC8)), 0);
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x10]
    PCStorage_GetBoxName(((r4 + 1) << 0x10), *((u32*)(r5 + 0x00000BB4)));
    Party_GetCount(*((u32*)(*((u32*)r5) + 8)));
    // str r0, [sp, #0x14]
    Party_GetMonByIndex(*((u32*)(*((u32*)r5) + 8)), 0);
    // str r0, [sp, #0x24]
    Mon_GetBoxMon();
    // str r0, [sp, #0x28]
    // add r1, r1, r6
    ov70_0223E114(*((u32*)(r5 + 0x000011F4)));
    // ldr r0, [sp, #0x1c]
    // str r4, [sp]
    // str r0, [sp, #4]
    // add r7, r5, r6
    // add r0, r0, r6
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // add r0, r0, r1
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // add r3, sp, #0x2c
    // add r3, r3, r6
    ov70_0223E170((0x83 << 2), *((u32*)(r7 + 0x00000DD8)), *((u32*)(r7 + (0xe5 << 4))));
    // ldr r0, [sp, #0x24]
    GetMonData(0xa2, 0);
    Sprite_SetDrawFlag(*((u32*)(r7 + 0x00000EC8)), 1);
    Sprite_SetDrawFlag(*((u32*)(r7 + r0)), 0);
    // ldr r0, [sp, #0x14]
    // add r6, r5, r1
    // strh r7, [r0, r1]
    Sprite_SetDrawFlag(*((u32*)(r6 + 0x00000DD8)), 0);
    Sprite_SetDrawFlag(*((u32*)(r6 + (0xe5 << 4))), 0);
    // ldr r0, [sp, #0x18]
    // add r1, r0, r1
    *((u32*)((r4 * (0x83 << 2)) + 8)) = 0;
    Sprite_SetDrawFlag(*((u32*)(r6 + 0x00000EC8)), 0);
    // add r2, #0x14
    ReadMsgDataIntoString(*((u32*)(r5 + (0xba << 4))), 0x5c, *((u32*)(r5 + (0xba << 4))));
    // ldr r0, [sp, #0x1c]
    NARC_Delete();
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000F48, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov70_02245084(0x00000F48, *((u32*)(r5 + 0x00000BB4)), 0, 5);
    // add r4, r5, r2
    // sub r2, #8
    // ldr r3, [sp, #0x18]
    // add r1, r5, r1
    // add r2, r4, r2
    ov70_0223E738(*((u32*)(r5 + 0x000011F4)), 0x00000DD8, ((0x4b << 2) * *((u32*)(r5 + (0x4b << 2)))), *((u32*)(r5 + (0x4b << 2))));
    // str r1, [r5, r0]
}





void ov70_0223E490(void) {
    // cmp r0, #0x12
    // bne _0223E498
}





void ov70_0223E49C(void) {
}





void ov70_0223E4DC(void) {
}





void ov70_0223E4FC(void) {
    AcquireBoxMonLock();
    // str r0, [sp]
    GetBoxMonData(r7, *((u16*)ov70_02245700), 0);
    // add r4, r4, r0
    // ldr r1, [sp]
    ReleaseBoxMonLock(r7);
}





void ov70_0223E538(void) {
    AcquireBoxMonLock();
    GetBoxMonData(r5, 5, 0);
    GetBoxMonData(r5, 0x70, 0);
    ReleaseBoxMonLock(r5, r7);
    // add r0, #8
    // add r1, #8
    // add r1, #0xd
}





void ov70_0223E59C(void) {
}





void ov70_0223E5C8(void) {
}





void ov70_0223E5FC(void) {
    // ldrsh r3, [r0, r4]
    // ldrsh r2, [r1, r4]
    // ldrsb r3, [r1, r2]
    // ldrsb r2, [r0, r2]
    // ldrsb r3, [r0, r2]
    // ldrsb r0, [r1, r2]
    // ldrsb r0, [r1, r0]
}





void ov70_0223E658(void) {
}





void ov70_0223E690(void) {
    // add r1, sp, #0
    // add r0, sp, #0
    // add r1, sp, #0
    // add r0, #0xec
    // strh r2, [r0]
    // add r0, #0xee
    // strh r1, [r0]
    // add r2, r5, r0
    // sub r0, #8
    // add r0, r2, r0
    // add r1, sp, #0
    // strh r0, [r1]
    // add r1, sp, #0
    // add r0, #0xf0
    // strh r2, [r0]
    // add r0, #0xf2
    // add r4, #0xf4
    // strh r2, [r0]
    // strh r0, [r4]
}





void ov70_0223E738(void) {
    // ldrsh r0, [r5, r0]
    // add r4, r4, r0
}





void ov70_0223E76C(void) {
}





void ov70_0223E78C(void) {
    ov70_0223ECCC();
    ov70_0223E954(*((u32*)(r4 + 4)));
    ov70_0223EA6C(r4);
    ov70_0223EB34(r4);
    ov70_0223EC0C(r4);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0);
    ov70_02245124(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r3, r4, r3
    ov70_0223F3D8(*((u32*)(r4 + (0xba << 4))), *((u32*)(r4 + ((0xba << 4) + 4))), *((u32*)(r4 + ((0xba << 4) - 4))), 0x00001058);
    // add r0, r4, r1
    // str r0, [sp]
    // add r0, #0x20
    // add r1, #0x1c
    // add r2, r4, r2
    ov70_0223F508(*((u32*)(r4 + (0x2e << 6))), *((u32*)(r4 + (0x2e << 6))), 0x00001088, *((u32*)(r4 + (0x49 << 2))));
    // str r0, [sp, #0xc]
    // add r0, r4, r2
    // str r0, [sp, #0x10]
    // add r1, r4, r0
    // str r1, [sp, #0x14]
    // add r0, #0x5c
    // str r1, [sp, #0x18]
    // sub r1, #0x54
    // sub r2, #0x50
    // str r1, [sp, #0x1c]
    // str r2, [sp, #0x24]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x28]
    // add r3, #0x10
    // str r1, [sp, #0x2c]
    // str r1, [sp, #0x30]
    // str r1, [sp, #0x34]
    // str r0, [sp, #0x38]
    // add r0, sp, #0xc
    ov70_02242014(*((u32*)(*((u32*)(r4 + 0x00001168)) + 0x14)), 2, 0, (0xba << 4));
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov70_0223E884(void) {
    ov70_02238E44();
    sub_0203A930();
    // blx r1
}





void ov70_0223E8A4(void) {
    sub_0203A914();
    ov70_0223ECA4(r4);
    ov70_0224212C(*((u32*)(r4 + 0x000011A8)));
    ov70_0223ED24(r4);
    ov70_0223EBD4(r4);
    ov70_0223EA40(*((u32*)(r4 + 4)));
    Sprite_SetDrawFlag(*((u32*)(r4 + (0xf1 << 4))), 0);
    ov70_02238E58(r4);
}





void ov70_0223E8E8(void) {
    NewString_ReadMsgData(*((u32*)(r0 + (0xba << 4))));
    // add r1, #0x20
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B9C)), *((u32*)(r5 + 0x00000B9C)), r0);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000F18, 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow2(0x00000F18, 0, 1, 0xe);
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized(0x00000F18, 1, *((u32*)(r5 + 0x00000BBC)), 0);
    // str r0, [r5, r1]
    String_Delete(r6, (0xbf << 4));
}





void ov70_0223E954(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x64
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r0, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x48
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    // add r3, sp, #0x2c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(r4, 2, 0, 0);
    BgCommitTilemapBufferToVram(r4, 2);
    // add r3, sp, #0x10
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
    BG_ClearCharDataRange(0, 0x20, 0, 0x3d);
    BG_ClearCharDataRange(3, 0x20, 0, 0x3d);
    ov70_022391F0(r4, 0, 0);
}





void ov70_0223EA40(void) {
}





void ov70_0223EA6C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov70_0223EB34(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // add r1, r1, r2
    AddWindowParameterized(*((u32*)(0x60 + 4)), 0, 2);
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    FillWindowPixelBuffer(0);
    // ldr r0, [sp, #0x14]
    // add r5, r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    AddWindowParameterized(*((u32*)(((0x96 << 0x10) >> 0x10) + 4)), r5, 3, ((*((u16*)ov70_02245920) << 0x18) >> 0x18));
    FillWindowPixelBuffer(r5, 0);
    CopyWindowToVram(r5);
    // add r6, #0x16
    // add r5, #0x10
    // ldr r0, [sp, #0x14]
    ov70_02239D44(3);
}





void ov70_0223EBD4(void) {
    // add r0, r6, r0
    RemoveWindow(0x00001198);
    // add r5, r6, r0
    RemoveWindow(r5);
    // add r5, #0x10
    // add r0, r6, r0
    RemoveWindow(0x00000F18);
}





void ov70_0223EC0C(void) {
    // add r0, sp, #0
    // add r2, r4, r2
    ov70_02238B54(r0, (0xd6 << 4), 1);
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    Sprite_CreateAffine((2 << 0x10));
    // str r0, [r4, r1]
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0xdd << 4))), 0x2f);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0xdd << 4))), 0);
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    Sprite_CreateAffine((0x75 << 0xc));
    // str r0, [r4, r1]
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000F04)), 0x26);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000F04)), 0);
    // str r0, [sp, #8]
    // add r0, sp, #0
    Sprite_CreateAffine((0x23 << 0xe));
    // str r0, [r4, r1]
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000F08)), 0x27);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000F08)), 0);
}





void ov70_0223ECA4(void) {
    Sprite_Delete(*((u32*)(r0 + (0xdd << 4))));
    Sprite_Delete(*((u32*)(r4 + 0x00000F04)));
    Sprite_Delete(*((u32*)(r4 + 0x00000F08)));
}





void ov70_0223ECCC(void) {
    String_New(0xb4, 0x3d);
    // str r0, [r4, r1]
    Heap_Alloc(0x3d, 0x30);
    // str r0, [r4, r1]
    MIi_CpuClearFast(0, *((u32*)(r4 + 0x000011C4)), 0x30);
    // add r2, #0x1c
    ov70_0223F634(0x3d, 0, *((u32*)(r4 + 0x000011C4)));
    *((u32*)(*((u32*)(r4 + 0x000011C4)) + 0x18)) = r0;
    ov70_0223F684(0x3d, *((u32*)(r4 + 0x000011C4)));
    // add r1, #0x70
    *((u32*)(*((u32*)(r4 + 0x000011C4)) + 0x14)) = r0;
    // add r0, r4, r1
    ov70_0223F948(0x000011C4, *((u32*)(r4 + 0x000011C4)));
}





void ov70_0223ED24(void) {
    Heap_Free(*((u32*)(*((u32*)(r0 + 0x000011C4)) + 0x14)));
    Heap_Free(*((u32*)(*((u32*)(r4 + 0x000011C4)) + 0x18)));
    Heap_Free(*((u32*)(r4 + 0x000011C4)));
    String_Delete(*((u32*)(r4 + 0x00000BBC)));
}





void ov70_0223ED58(void) {
    IsPaletteFadeFinished();
    // str r0, [sp]
    ov70_0223E8E8(r4, 9, 1, 0);
    ov70_02238D84(r4, 0x10, 1);
}





void ov70_0223ED8C(void) {
    // tst r1, r2
    ov70_02238E50(5, 5);
    *((u32*)(r4 + 0x2c)) = 2;
    *((u32*)(r4 + 0x2c)) = 3;
}





void ov70_0223EDB0(void) {
}





void ov70_0223EDCC(void) {
}





void ov70_0223EDD8(void) {
}





void ov70_0223EDE4(void) {
}





void ov70_0223EE10(void) {
    ov70_02242144(*((u32*)(r0 + 0x000011A8)));
    // mvn r1, r1
    // add r0, r4, r0
    ClearFrameAndWindow2(0x00000F18, 0);
    ov70_02238E50(r4, 5, 5);
    *((u32*)(r4 + 0x2c)) = 2;
    // add r0, #0x70
    // add r0, r4, r0
    // add r1, r2, r1
    ov70_0223F960(0x000011C4, *((u16*)(*((u32*)(r4 + 0x000011C4)) + 4)), *((u16*)(*((u32*)(r4 + 0x000011C4)) + 0xa)), *((u16*)(*((u32*)(r4 + 0x000011C4)) + 8)));
    // strh r0, [r4, r1]
    GetMonBaseStat(0x12);
    *((u32*)(*((u32*)(r4 + 0x000011C4)) + 0x20)) = r0;
    // add r0, r4, r0
    ov70_0223EDE4(0x00000B84, *((u32*)(*((u32*)(r4 + 0x000011C4)) + 0x20)), *((u32*)(r4 + 0x000011C4)));
    *((u32*)(r4 + 0x2c)) = 0xa;
    // ldrsb r1, [r4, r0]
    *((u32*)(r4 + 0x2c)) = 7;
    // ldrsh r0, [r4, r2]
    // add r3, r4, r3
    // str r0, [sp]
    // str r1, [sp, #4]
    // mvn r0, r0
    // str r0, [sp, #8]
    // add r0, #0x1c
    // add r1, #0x20
    // add r2, #0x18
    ov70_0223F3D8(*((u32*)(r4 + 0x00000B84)), *((u32*)(r4 + 0x00000B84)), *((u32*)(r4 + 0x00000B84)), 0x00001058);
    // add r0, #0x70
    // add r0, r4, r0
    // add r1, r2, r1
    ov70_0223F960(0x000011C4, *((u16*)(*((u32*)(r4 + 0x000011C4)) + 4)), *((u16*)(*((u32*)(r4 + 0x000011C4)) + 0xa)), *((u16*)(*((u32*)(r4 + 0x000011C4)) + 8)));
}





void ov70_0223EEE8(void) {
    // str r1, [sp]
    ov70_0223E8E8(0xa, 1, 0);
    ov70_02238D84(r4, 0x10, 8);
}





void ov70_0223EF10(void) {
    // strh r1, [r4, r0]
    ov70_022420C4(*((u32*)(r0 + 0x000011A8)), 1);
    *((u32*)(r4 + 0x2c)) = 9;
}





void ov70_0223EF38(void) {
    ov70_02242144(*((u32*)(r0 + 0x000011A8)));
    // mvn r1, r1
    // add r0, r4, r0
    ClearFrameAndWindow2(0x00000F18, 0);
    *((u32*)(r4 + 0x2c)) = 0;
    // strb r0, [r4, r2]
    *((u32*)(r4 + 0x2c)) = 0xa;
    // ldrsh r0, [r4, r0]
    // sub r1, #0xb
    // str r0, [sp]
    // ldrsb r0, [r4, r2]
    // add r3, r4, r3
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0x1a
    // add r1, #0x1e
    // add r2, #0x16
    ov70_0223F3D8(*((u32*)(r4 + 0x00000B86)), *((u32*)(r4 + 0x00000B86)), *((u32*)(r4 + 0x00000B86)), 0x00001058);
}





void ov70_0223EFB8(void) {
    // str r1, [sp]
    ov70_0223E8E8(0xb, 1, 0);
    ov70_02238D84(r4, 0x10, 0xb);
}





void ov70_0223EFE0(void) {
    ov70_022420C4(*((u32*)(r0 + 0x000011A8)), 2);
    // strh r1, [r4, r0]
    *((u32*)(r4 + 0x2c)) = 0xc;
}





void ov70_0223F008(void) {
    ov70_02242144(*((u32*)(r0 + 0x000011A8)));
    // mvn r0, r0
    // add r0, r4, r0
    ClearFrameAndWindow2(0x00000F18, 0);
    // add r0, r4, r0
    ov70_0223EDE4(0x00000B84, *((u32*)(*((u32*)(r4 + 0x000011C4)) + 0x20)));
    *((u32*)(r4 + 0x2c)) = 0;
    *((u32*)(r4 + 0x2c)) = 7;
    // add r0, r4, r0
    ov70_0223F828(0x00000B84, 0);
    *((u32*)(r4 + 0x2c)) = 0xd;
    // ldrsb r0, [r4, r1]
    // ldrsb r1, [r4, r1]
    ov70_0223F864(0xd, (0x00000B87 + 1), 0);
    // ldrsh r1, [r4, r2]
    // add r3, r4, r3
    // str r1, [sp]
    // ldrsb r1, [r4, r1]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x1c
    // add r1, #0x20
    // add r2, #0x18
    ov70_0223F3D8(*((u32*)(r4 + 0x00000B84)), *((u32*)(r4 + 0x00000B84)), *((u32*)(r4 + 0x00000B84)), 0x00001058);
}





void ov70_0223F0B4(void) {
    // str r1, [sp]
    ov70_0223E8E8(0x17, 1, 0);
    ov70_02238D84(r4, 0x10, 0xe);
}





void ov70_0223F0DC(void) {
    // str r0, [sp]
    ov70_02238C14(*((u32*)(r0 + 4)), 0xc, 0x0000011A, 3);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x2c)) = 0xf;
}





void ov70_0223F108(void) {
    ov70_02238C8C();
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    ov70_02238E50(r4, 7, 7);
    *((u32*)(r4 + 0x2c)) = 2;
    // str r1, [r4, r0]
    // add r0, r4, r0
    ov70_0223F7A4((0x4f << 2), r4);
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    ov70_02238E50(r4, 5, 5);
    *((u32*)(r4 + 0x2c)) = 2;
}





void ov70_0223F164(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    // str r1, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0);
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov70_0223F1B8(void) {
}





void ov70_0223F1D8(void) {
    // ldr r0, [sp, #0x1c]
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x18]
}





void ov70_0223F20C(void) {
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
}





void ov70_0223F244(void) {
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #4]
}





void ov70_0223F2A0(void) {
    // cmp r0, #1
    // bne _0223F2AA
    // cmp r0, #2
    // bne _0223F2B2
    // nop
    // _0223F2B8: .word ov70_022465EC
}





void ov70_0223F2BC(void) {
    NewString_ReadMsgData(r1, *((u32*)(ov70_02245910 + (r2 << 2))), (r2 << 2));
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    ov70_0223F2A0(r5);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x18]
    ov70_02245084(r6, r4);
    // ldr r1, [sp, #0x20]
    ov70_0223F2A0(r5);
    // ldr r1, [sp, #0x1c]
    // ldr r3, [sp, #0x18]
    // str r1, [sp]
    // str r0, [sp, #4]
    ov70_02245084(r6, r4, 0);
    String_Delete(r4);
}





void ov70_0223F324(void) {
    NewString_ReadMsgData(r1, *((u32*)(ov70_02245910 + (r2 << 2))), (r2 << 2));
    // ldr r1, [sp, #0x28]
    ov70_0223F2A0(r5);
    // ldr r1, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, r4);
    String_Delete(r4);
}





void ov70_0223F370(void) {
}





void ov70_0223F38C(void) {
    // mvn r0, r0
    // ldr r0, [sp, #0x24]
    NewString_ReadMsgData(r1, *((u32*)(ov70_022459F4 + (r2 << 3))), ov70_022459F4);
    // ldr r0, [sp, #0x20]
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    ov70_02245084(r6, r0);
    String_Delete(r4);
}





void ov70_0223F3D8(void) {
    // str r1, [sp, #0x10]
    // str r0, [sp, #0xc]
    NewString_ReadMsgData(0x65);
    // str r0, [sp, #0x14]
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x14]
    ov70_02245084(r6, 0, 0);
    // add r5, #0x10
    FillWindowPixelBuffer(r6, 0);
    // add r5, #0x10
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x30]
    // add r0, #0x10
    ov70_0223F1D8(r6, 0);
    // ldr r2, [sp, #0x34]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, #0x10
    ov70_0223F2BC(r6, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r6, #0x20
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x38]
    ov70_0223F370(r6, 0, 2);
    // ldr r0, [sp, #0x14]
    String_Delete();
}





void ov70_0223F470(void) {
    // str r1, [sp, #0x10]
    // str r0, [sp, #0xc]
    NewString_ReadMsgData(0x65);
    // str r0, [sp, #0x14]
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x14]
    ov70_02245084(r6, 0, 0);
    // add r5, #0x10
    FillWindowPixelBuffer(r6, 0);
    // add r5, #0x10
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x30]
    // add r0, #0x10
    ov70_0223F1D8(r6, 0);
    // ldr r2, [sp, #0x34]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, #0x10
    ov70_0223F2BC(r6, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r6, #0x20
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x38]
    // str r3, [sp, #8]
    ov70_0223F370(r6, 0);
    // ldr r0, [sp, #0x14]
    String_Delete();
}





void ov70_0223F508(void) {
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r7, [sp, #0x38]
    String_New(0xb, 0x3d);
    // str r0, [sp, #0x18]
    String_New(0xb, 0x3d);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x18]
    GetBoxMonData(0x77);
    // ldr r0, [sp, #0xc]
    GetBoxMonData(0x6f, 0);
    // ldr r0, [sp, #0xc]
    CalcBoxMonLevel();
    // str r0, [sp, #0x10]
    NewString_ReadMsgData(r4, 0x68);
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    BufferIntegerAsString(r5, 3, 3);
    ReadMsgData_ExpandPlaceholders(r5, r4, 0x6c, 0x3d);
    // str r0, [sp, #0x1c]
    // ldr r2, [sp, #0x14]
    ReadMsgDataIntoString(r4, *((u32*)(ov70_02245910 + (r6 << 2))), (r6 << 2));
    // ldr r5, [sp, #8]
    FillWindowPixelBuffer(r5, 0);
    // add r5, #0x10
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x20]
    ov70_02245084(0x000F0200, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x18]
    // add r0, #0x10
    ov70_02245084(0x00010200, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x1c]
    // add r0, #0x20
    ov70_02245084(0x00010200, 0, 0);
    // str r3, [sp]
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r0, #0x10
    // str r0, [sp, #8]
    ov70_02245084(*((u32*)(ov70_022465EC + ((r6 - 1) << 2))), ((r6 - 1) << 2), 0x46, 0);
    // ldr r0, [sp, #0xc]
    GetBoxMonData(5, 0);
    // strh r0, [r7]
    // ldr r0, [sp, #0x10]
    *((u8*)(r7 + 2)) = r6;
    *((u8*)(r7 + 3)) = r0;
    // ldr r0, [sp, #0x1c]
    String_Delete();
    // ldr r0, [sp, #0x14]
    String_Delete();
    // ldr r0, [sp, #0x18]
    String_Delete();
    // ldr r0, [sp, #0x20]
    String_Delete();
}





void ov70_0223F634(void) {
}





void ov70_0223F658(void) {
    // str r0, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    GfGfxLoader_LoadFromNarc_GetSizeOut(0x4a, *((u32*)(ov70_02245AAC + (r1 << 2))), 0, r0);
    // ldr r1, [sp, #8]
    // str r1, [r4]
}





void ov70_0223F684(void) {
    Heap_Alloc(0x3d, 0x000001EE);
    MIi_CpuClearFast(0, r0, 0x000001EE);
    // str r2, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    GfGfxLoader_LoadFromNarc_GetSizeOut(0x4a, 0xc, 0, r5);
    // ldr r0, [sp, #8]
    // strb r1, [r4, r2]
    Heap_Free(r0, 1, *((u16*)r0), (r0 >> 1));
}





void ov70_0223F6E4(void) {
    ov70_0223E490(*((u16*)(r1 + (0x12 << 4))));
    Mon_UpdateShayminForm(*((u32*)(r4 + (0x49 << 2))), 0);
    SizeOfStructPokemon();
    MIi_CpuCopyFast(*((u32*)(r4 + (0x49 << 2))), r5, r0);
    BoxMon_UpdateShayminForm(*((u32*)(r4 + (0x49 << 2))), 0);
    CopyBoxPokemonToPokemon(*((u32*)(r4 + (0x49 << 2))), r5);
    PlayerProfile_GetNamePtr(*((u32*)(*((u32*)r4) + 0x1c)));
    // add r0, r5, r0
    CopyU16StringArrayN((0x43 << 2), r0, 8);
    PlayerProfile_GetTrainerID_VisibleHalf(*((u32*)(*((u32*)r4) + 0x1c)));
    // strh r0, [r5, r1]
    WifiHistory_GetPlayerCountry(*((u32*)(*((u32*)r4) + 0x18)), (0x47 << 2));
    // strb r0, [r5, r1]
    WiFiHistory_GetPlayerRegion(*((u32*)(*((u32*)r4) + 0x18)), 0x0000011E);
    // strb r0, [r5, r1]
    PlayerProfile_GetAvatar(*((u32*)(*((u32*)r4) + 0x1c)), 0x0000011F);
    // strb r0, [r5, r1]
    PlayerProfile_GetTrainerGender(*((u32*)(*((u32*)r4) + 0x1c)), (0x12 << 4));
    // add r1, #0xf6
    // strb r0, [r1]
    // mov r1, #GAME_VERSION
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
}





void ov70_0223F7A4(void) {
    // add r1, #0xec
    // strh r2, [r1]
    // add r1, #0xee
    // strh r2, [r1]
    // add r1, #0xf0
    // strh r2, [r1]
    // add r1, #0xf2
    // strh r2, [r1]
    // add r0, #8
    // add r5, #0xf4
    // strh r0, [r5]
}





void ov70_0223F7E4(void) {
    // str r1, [sp]
    ListMenuItems_New(0xb, 0x3d);
    // str r0, [r7]
    // ldr r1, [sp]
    ListMenuItems_AppendFromMsgData(*((u32*)r7), *((u32*)r5), 0);
    // add r5, #8
}





void ov70_0223F828(void) {
    GF_AssertFail();
    GF_AssertFail();
    // add r1, r6, r0
    // ldrsh r0, [r1, r0]
    *((u8*)(r5 + 3)) = 4;
    // ldrsh r0, [r1, r0]
    *((u8*)(r5 + 4)) = 6;
}





void ov70_0223F864(void) {
    // ldrsh r7, [r4, r6]
    // ldrsh r7, [r4, r5]
    // add r4, #8
}





void ov70_0223F8A8(void) {
    // str r2, [r0, r1]
    // str r2, [r0, r1]
}





void ov70_0223F8D0(void) {
    // str r2, [r1]
    // sub r0, r0, r2
}





void ov70_0223F904(void) {
    // str r1, [sp]
    // add r1, sp, #4
    ov70_0223F8D0(r2);
    ListMenuItems_New(0x3d);
    // str r0, [r5]
    // ldr r2, [sp, #4]
    // add r3, r2, r4
    // ldr r1, [sp]
    ListMenuItems_AppendFromMsgData(*((u32*)r5), *((u16*)(ov70_02245B5C + (r3 << 1))), (r3 + 1));
}





void ov70_0223F948(void) {
    // strh r1, [r0]
}





void ov70_0223F960(void) {
    // add r0, r0, r1
}





void ov70_0223F96C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
}





void ov70_0223F9B4(void) {
    ov70_02238E44();
    sub_0203A930();
    // blx r1
}





void ov70_0223F9D4(void) {
    GXx_GetMasterBrightness_(0x0400106C);
    ov70_02241380(r4);
    ov70_0223FC58(r4);
    ov70_0223FC30(r4);
    ov70_0223FB34(*((u32*)(r4 + 4)));
    ov70_02238E58(r4);
}





void ov70_0223FA08(void) {
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    BG_ClearCharDataRange(0, 0x20, 0, 0x3d);
    BG_ClearCharDataRange(1, 0x20, 0, 0x3d);
    BG_ClearCharDataRange(4, 0x20, 0, 0x3d);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}





void ov70_0223FB34(void) {
}





void ov70_0223FB60(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x64, 0, 0, 0);
    LoadFontPal1(0, (0x1a << 4), 0x3d);
    Options_GetFrame(*((u32*)(*((u32*)r5) + 0x24)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r4, 0, 1, 0xe);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(r4, 0, 0x1f, 0xb);
    ToggleBgLayer(4, 0);
    ToggleBgLayer(5, 0);
    GfGfx_EngineBTogglePlanes(0x10, 0);
    ov70_02239C6C(r5);
    ov70_02239CF8(r5);
}





void ov70_0223FBF4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r0 + 4)), 0x00000F18, 0, 2);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000F18, 0);
}





void ov70_0223FC30(void) {
    // add r0, r0, r1
}





void ov70_0223FC40(void) {
}





void ov70_0223FC58(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // _0223FC60: .word 0x00000BBC
    // _0223FC64: .word String_Delete
}





void ov70_0223FC68(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223FC80: ; jump table
    // str r1, [sp]
    ov70_02244FA4(*((u32*)(r0 + (0xba << 4))), 0x18, 1);
    ov70_02238D84(r4, 0x25, 2);
    // str r1, [sp]
    ov70_02244FA4(*((u32*)(r4 + (0xba << 4))), 0x18, 1);
    ov70_02238D84(r4, 0x25, 7);
    // str r1, [sp]
    ov70_02244FA4(*((u32*)(r4 + (0xba << 4))), 0x18, 1);
    ov70_02238D84(r4, 0x25, 0xc);
    // str r1, [sp]
    ov70_02244FA4(*((u32*)(r4 + (0xba << 4))), 0x18, 1);
    ov70_02238D84(r4, 0x25, 0x12);
    // str r1, [r4, r0]
    // str r1, [sp]
    ov70_02244FA4(0x000011FC, *((u32*)(r4 + (0xba << 4))), 0x18, 0);
    *((u32*)(r4 + 0x2c)) = 0x18;
    // str r1, [sp]
    ov70_02244FA4(0x18, *((u32*)(r4 + (0xba << 4))), 0x94, 1);
    *((u32*)(r4 + 0x18)) = 1;
    *((u32*)(r4 + 0x2c)) = 0x1d;
    GF_AssertFail(0x1d);
    ov70_02238F64(r4);
}





void ov70_0223FD64(void) {
    // add r0, r4, r0
    Pokemon_RemoveCapsule((0x4f << 2));
    // add r0, r4, r0
    ov70_02237F64((0x4f << 2));
    *((u32*)(r4 + 0x2c)) = 3;
    // str r1, [r4, r0]
    ov70_02240D44(r4, 4, 6);
}





void ov70_0223FD98(void) {
    ov70_02237F38();
    ov70_02237F58();
    // str r2, [r4, r1]
    // add r1, #0xf
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223FDC2: ; jump table
    ov70_022409C0(r4, 1, 0);
    GameStats_Inc(*((u32*)(*((u32*)r4) + 0x28)), 0x2d);
    *((u32*)(r4 + 0x2c)) = 0x1e;
    *((u32*)(r4 + 0x3c)) = 0x1e;
    *((u32*)(r4 + 0x2c)) = 0x26;
    *((u32*)(r4 + 0x3c)) = 0x26;
    *((u32*)(r4 + 0x2c)) = 0x27;
    *((u32*)(r4 + 0x3c)) = 0x27;
    *((u32*)(r4 + 0x2c)) = 0x27;
    *((u32*)(r4 + 0x3c)) = 0x27;
    *((u32*)(r4 + 0x2c)) = 0x26;
    sub_020399EC(0x26);
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00001604)));
}





void ov70_0223FE40(void) {
}





void ov70_0223FE60(void) {
    ov70_02237F38();
    ov70_02237F58();
    // str r2, [r4, r1]
    // add r1, #0xf
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223FE8A: ; jump table
    *((u32*)(r4 + 0x2c)) = 0x21;
    *((u32*)(r4 + 0x3c)) = 0x21;
    *((u32*)(r4 + 0x2c)) = 0x27;
    sub_02039AD8(4, (*((u16*)(r0 + 6)) << 0x10), 0);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00001604)));
}





void ov70_0223FEE4(void) {
    // add r0, r4, r0
    ov70_02238008((0x4f << 2));
    *((u32*)(r4 + 0x2c)) = 8;
    // str r1, [r4, r0]
    ov70_02240D44(r4, 9, 0xb);
}





void ov70_0223FF10(void) {
    ov70_02237F38();
    ov70_02237F58();
    // str r2, [r4, r1]
    // add r1, #0xf
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223FF3A: ; jump table
    // ldrsb r5, [r4, r0]
    *((u32*)(r4 + 0x2c)) = 0x18;
    sub_0202DBA0(*((u32*)*((u32*)r4)), (*((u16*)(r0 + 6)) << 0x10), 0);
    // add r1, r4, r1
    ov70_02240A7C(r4, (0x4f << 2), r0, r5);
    *((u32*)(r4 + 0x2c)) = 0x1e;
    *((u32*)(r4 + 0x2c)) = 0x26;
    *((u32*)(r4 + 0x2c)) = 0x26;
    *((u32*)(r4 + 0x3c)) = 0x26;
    *((u32*)(r4 + 0x2c)) = 0x27;
    *((u32*)(r4 + 0x3c)) = 0x27;
    *((u32*)(r4 + 0x2c)) = 0x26;
    sub_020399EC(0x26);
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00001604)));
}





void ov70_0223FFCC(void) {
}





void ov70_0223FFE8(void) {
    ov70_02237F38();
    ov70_02237F58();
    // add r0, #0xf
    // str r2, [r4, r1]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02240010: ; jump table
    *((u32*)(r4 + 0x2c)) = 0x21;
    sub_02039AD8(3, 0x00001604, 0);
    sub_02039AD8(4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00001604)));
}





void ov70_0224006C(void) {
    // add r0, r4, r0
    Pokemon_RemoveCapsule((0x4f << 2));
    // sub r0, #8
    // add r2, r4, r0
    // add r1, #0x10
    // add r1, r4, r1
    // add r2, r4, r2
    ov70_02238208(*((u32*)(*((u32*)(r4 + (0x4b << 2))) + (0xda << 2))), (0x4b << 2), 0x00000A5C);
    ov70_02240D44(r4, 0xe, 0x10);
    *((u32*)(r4 + 0x2c)) = 0xd;
    // str r1, [r4, r0]
}





void ov70_022400BC(void) {
    ov70_02237F38();
    ov70_02237F58();
    // str r1, [r4, r2]
    // add r2, #0xf
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _022400E6: ; jump table
    *((u32*)(r4 + 0x2c)) = 0x1e;
    ov70_022409C0(r4, 0, (*((u16*)(r0 + 6)) << 0x10));
    // add r1, r4, r1
    ov70_02240B9C(r4, 0x00000A5C, *((u16*)(r4 + (0x12 << 4))));
    // add r1, r4, r1
    ov70_02240CE4(*((u32*)(*((u32*)r4) + 0x18)), 0x00000A5C);
    // add r1, r4, r1
    ov70_02240500(r4, 0x00000A5C);
    *((u32*)(r4 + 0x3c)) = r0;
    *((u32*)(r4 + 0x2c)) = 0x11;
    *((u32*)(r4 + 0x3c)) = 0x11;
    *((u32*)(r4 + 0x2c)) = 0x27;
    *((u32*)(r4 + 0x3c)) = 0x27;
    *((u32*)(r4 + 0x2c)) = 0x27;
    *((u32*)(r4 + 0x3c)) = 0x27;
    *((u32*)(r4 + 0x2c)) = 0x26;
    sub_020399EC(0x26);
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00001604)));
}





void ov70_02240180(void) {
}





void ov70_0224019C(void) {
    ov70_02237F38();
    ov70_02237F58();
    // add r0, #0xf
    // str r2, [r4, r1]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022401C4: ; jump table
    *((u32*)(r4 + 0x2c)) = 0x21;
    sub_02039AD8(3, 0x00001604, 0);
    sub_02039AD8(4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00001604)));
}





void ov70_02240220(void) {
}





void ov70_02240240(void) {
    ov70_02237F38();
    ov70_02237F58();
    // str r2, [r4, r1]
    // add r1, #0xf
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224026C: ; jump table
    *((u32*)(r4 + 0x2c)) = 0x1a;
    *((u16*)(r4 + 0x36)) = 1;
    // add r1, r4, r1
    ov70_02240D00(r4, (0x4f << 2), 0);
    ov70_02238F80(r4);
    // str r0, [sp]
    ov70_02244FA4(r4, *((u32*)(r4 + (0xba << 4))), 0x1d, 1);
    ov70_02238D84(r4, 0x25, 0x1c);
    ov70_02238F80(r4);
    // str r0, [sp]
    ov70_02244FA4(r4, *((u32*)(r4 + (0xba << 4))), 0x23, 1);
    ov70_02238D84(r4, 0x25, 0x1c);
    *((u32*)(r4 + 0x2c)) = 0x12;
    // str r1, [r4, r0]
    *((u16*)(r4 + 0x36)) = r2;
    sub_0202DB54(*((u32*)*((u32*)r4)), 1);
    AllocMonZeroed(0x3d);
    sub_0202DB64(*((u32*)*((u32*)r4)), r0);
    Mon_GetBoxMon(r5);
    BufferBoxMonNickname(*((u32*)(r4 + 0x00000B9C)), 0, r0);
    *((u32*)(r4 + 0x28)) = 2;
    *((u32*)(r4 + 0x2c)) = 0x22;
    sub_0202DBA0(*((u32*)*((u32*)r4)));
    ov70_02240A7C(r4, r5, r0, 0);
    sub_0202DB5C(*((u32*)*((u32*)r4)), 0);
    Heap_Free(r5);
    ov70_022404D4(r4);
    *((u16*)(r4 + 0x36)) = r2;
    sub_0202DB54(*((u32*)*((u32*)r4)));
    AllocMonZeroed(0x3d);
    sub_0202DB64(*((u32*)*((u32*)r4)), r0);
    Mon_GetBoxMon(r5);
    BufferBoxMonNickname(*((u32*)(r4 + 0x00000B9C)), 0, r0);
    *((u32*)(r4 + 0x28)) = 3;
    *((u32*)(r4 + 0x2c)) = 0x22;
    sub_0202DB5C(*((u32*)*((u32*)r4)), 0);
    Heap_Free(r5);
    *((u32*)(r4 + 0x3c)) = r0;
    *((u32*)(r4 + 0x2c)) = 0x26;
    ShowCommunicationError(3, 1);
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00001604)));
}





void ov70_022403FC(void) {
}





void ov70_02240410(void) {
}





void ov70_02240430(void) {
    ov70_02237F38();
    ov70_02237F58();
    // str r1, [r4, r2]
    // add r2, #0xf
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0224045A: ; jump table
    ov70_02240D54(r4, 0, (*((u16*)(r0 + 6)) << 0x10));
    *((u32*)(r4 + 0x2c)) = 0x16;
    *((u16*)(r4 + 0x36)) = 0;
    *((u16*)(r4 + 0x36)) = 1;
    *((u16*)(r4 + 0x36)) = r1;
    *((u32*)(r4 + 0x3c)) = 1;
    *((u32*)(r4 + 0x2c)) = 0x26;
    sub_020399EC(3);
    ov70_022404D4(r4);
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00001604)));
}





void ov70_022404D4(void) {
}





void ov70_02240500(void) {
    GameStats_AddScore(*((u32*)(*((u32*)r0) + 0x28)), 0x18);
    GameStats_Inc(*((u32*)(*((u32*)r5) + 0x28)), 0x19);
    GetMonData(r4, 0xc, 0);
    Save_Pokewalker_Get(*((u32*)(*((u32*)r5) + 0x20)), *((u8*)gGameLanguage));
    Pokewalker_UnlockCourse(0x14);
}





void ov70_02240540(void) {
    sub_0202DBA0(*((u32*)*((u32*)r0)));
    // ldrsb r3, [r4, r3]
    // add r1, r4, r1
    ov70_02240A7C(r4, (0x4f << 2), r0, 0x0000025D);
    // add r1, r4, r1
    ov70_02240CE4(*((u32*)(*((u32*)r4) + 0x18)), (0x4f << 2));
    // add r1, r4, r1
    ov70_02240500(r4, (0x4f << 2));
    sub_0202DB5C(*((u32*)*((u32*)r4)), 0);
    *((u32*)(r4 + 0x2c)) = 0x1e;
    ov70_02240D44(r4, 0x13, 0xb);
}





void ov70_02240598(void) {
}





void ov70_022405B4(void) {
    ov70_02237F38();
    ov70_02237F58();
    // str r2, [r4, r1]
    // add r1, #0xf
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022405DE: ; jump table
    *((u32*)(r4 + 0x2c)) = 0x21;
    sub_02039AD8(3, (*((u16*)(r0 + 6)) << 0x10), 0);
    *((u32*)(r4 + 0x3c)) = r0;
    sub_02039AD8(4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00001604)));
}





u8 ov70_0224063C(void) {
}





void ov70_02240640(void) {
}





void ov70_02240658(void) {
}





void ov70_02240670(void) {
}





void ov70_02240684(void) {
}





void ov70_0224069C(void) {
}





void ov70_022406B8(void) {
    ov70_02237F38();
    ov70_02237F58();
    // add r0, #0xf
    // str r2, [r4, r1]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022406E0: ; jump table
    ov70_022404D4(r4, 0x00001604, 0);
    ov70_022404D4(r4);
    ov70_022404D4(r4);
    sub_02039AD8(3);
    sub_02039AD8(4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00001604)));
}





void ov70_02240748(void) {
    // str r1, [sp]
    ov70_02244FA4(*((u32*)(r0 + (0xba << 4))), 0x93, 1);
    ov70_02238D84(r4, 0x25, 0x24);
    ov70_02238E50(r4, 1, 0);
    ov70_02238F80(r4);
    ov70_02241234(r4);
}





void ov70_0224078C(void) {
    // add r1, #0xf
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022407A4: ; jump table
    // str r1, [sp]
    ov70_02244FA4(*((u32*)(r0 + (0xba << 4))), 0x9c, 1);
}





u32 ov70_022407E4(void) {
}





u32 ov70_0224080C(void) {
}





u32 ov70_02240838(void) {
}





void ov70_02240854(void) {
    // str r1, [r4, r0]
}





void ov70_02240884(void) {
    // str r2, [r0, r1]
}





void ov70_0224089C(void) {
}





void ov70_022408BC(void) {
    Save_WriteFileAsync(*((u32*)(*((u32*)r0) + 0x20)));
    *((u32*)(r4 + 0x2c)) = *((u16*)(r4 + 0x000011D6));
    ov70_02238F80(r4);
}





u32 ov70_022408E0(void) {
}





void ov70_022408FC(void) {
    Save_WriteFileAsync(*((u32*)(*((u32*)r0) + 0x20)));
    ov70_02238E50(r4, 1, 0);
    ov70_02238F80(r4);
    // str r0, [sp]
    ov70_02244FA4(r4, *((u32*)(r4 + (0xba << 4))), *((u32*)(r4 + 0x28)), 1);
    ov70_02238D84(r4, 0x25, 0x1c);
}





void ov70_02240948(void) {
    ov70_02238F80();
    sub_0203A914();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0);
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov70_022409A0(void) {
}





void ov70_022409C0(void) {
    AllocMonZeroed(0x3d, (0x12 << 4));
    PCStorage_GetMonByIndexPair(*((u32*)(*((u32*)r5) + 0xc)), *((u16*)(r5 + (0x12 << 4))), *((u16*)(r5 + ((0x12 << 4) + 2))));
    CopyBoxPokemonToPokemon(r4);
    sub_0202DB70(*((u32*)*((u32*)r5)), r4, *((u16*)(r5 + (0x12 << 4))));
    PCStorage_DeleteBoxMonByIndexPair(*((u32*)(*((u32*)r5) + 0xc)), *((u16*)(r5 + (0x12 << 4))), *((u16*)(r5 + ((0x12 << 4) + 2))));
    Heap_Free(r4);
    Party_GetMonByIndex(*((u32*)(*((u32*)r5) + 8)), *((u16*)(r5 + (r1 + 2))));
    Pokemon_RemoveCapsule();
    sub_0202DB70(*((u32*)*((u32*)r5)), r4, *((u16*)(r5 + (0x12 << 4))));
    Party_RemoveMon(*((u32*)(*((u32*)r5) + 8)), *((u16*)(r5 + 0x00000122)));
    Party_HasMon(*((u32*)(*((u32*)r5) + 8)), 0x000001B9);
    Save_Chatot_Get(*((u32*)(*((u32*)r5) + 0x20)));
    Chatot_Invalidate();
    sub_0202DB5C(*((u32*)*((u32*)r5)), 1);
}





void ov70_02240A7C(void) {
    GetMonData(r1, 6, 0);
    UpdatePokedexWithReceivedSpecies(*((u32*)(*((u32*)r5) + 0x20)), r4);
    // str r0, [sp, #0x20]
    Party_GetCount(*((u32*)(*((u32*)r5) + 8)));
    // str r0, [sp, #0x20]
    // add r0, sp, #0
    // strb r1, [r0]
    GetMonData(r4, 5, 0);
    GetMonData(r4, 0x6e, 0);
    GetMonData(r4, 0x99, 0);
    GetMonData(r4, 0x6e, 0);
    Save_VarsFlags_Get(*((u32*)(*((u32*)r5) + 0x20)));
    Save_VarsFlags_GetVar404C();
    Save_VarsFlags_SetVar404C(r6, 1);
    // add r2, sp, #0
    SetMonData(r4, 9);
    SetMonData(r4, 0x6f, 0);
    ov70_02240CA0(*((u32*)*((u32*)r5)), 0);
    // ldr r0, [sp, #0x20]
    Party_AddMon(*((u32*)(*((u32*)r5) + 8)), r4);
    Party_GetCount(*((u32*)(*((u32*)r5) + 8)));
    // str r2, [r5, r1]
    // str r2, [r5, r0]
    // str r0, [sp, #4]
    // add r1, sp, #0x20
    // add r2, sp, #4
    PCStorage_FindFirstEmptySlot(*((u32*)(*((u32*)r5) + 0xc)), (0x4d << 2), (r0 - 1));
    Mon_GetBoxMon(r4);
    // ldr r1, [sp, #0x20]
    PCStorage_PlaceMonInBoxFirstEmptySlot(*((u32*)(*((u32*)r5) + 0xc)), r0);
    // ldr r1, [sp, #0x20]
    // str r1, [r5, r0]
    // ldr r1, [sp, #4]
    // str r1, [r5, r0]
    sub_0202DB5C(*((u32*)*((u32*)r5)), 0);
}





void ov70_02240B9C(void) {
    UpdatePokedexWithReceivedSpecies(*((u32*)(*((u32*)r0) + 0x20)));
    // str r0, [sp, #0x20]
    Party_GetCount(*((u32*)(*((u32*)r5) + 8)));
    // str r0, [sp, #0x20]
    GetMonData(r4, 5, 0);
    GetMonData(r4, 0x6e, 0);
    GetMonData(r4, 0x99, 0);
    GetMonData(r4, 0x6e, 0);
    Save_VarsFlags_Get(*((u32*)(*((u32*)r5) + 0x20)));
    Save_VarsFlags_GetVar404C();
    Save_VarsFlags_SetVar404C(r6, 1);
    // add r0, sp, #0
    // strb r1, [r0]
    // add r2, sp, #0
    SetMonData(r4, 9);
    SetMonData(r4, 0x6f, 0);
    // ldr r0, [sp, #0x20]
    Party_AddMon(*((u32*)(*((u32*)r5) + 8)), r4);
    Party_GetCount(*((u32*)(*((u32*)r5) + 8)));
    // str r2, [r5, r1]
    // str r2, [r5, r0]
    // str r0, [sp, #4]
    // add r1, sp, #0x20
    // add r2, sp, #4
    PCStorage_FindFirstEmptySlot(*((u32*)(*((u32*)r5) + 0xc)), (0x4d << 2), (r0 - 1));
    Mon_GetBoxMon(r4);
    // ldr r1, [sp, #0x20]
    PCStorage_PlaceMonInBoxFirstEmptySlot(*((u32*)(*((u32*)r5) + 0xc)), r0);
    // ldr r1, [sp, #0x20]
    // str r1, [r5, r0]
    // ldr r1, [sp, #4]
    // str r1, [r5, r0]
    ov70_02240CA0(*((u32*)*((u32*)r5)), 1);
}





void ov70_02240CA0(void) {
    // add r0, sp, #0xc
    // add r1, sp, #0
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x18]
}





void ov70_02240CE4(void) {
}





void ov70_02240D00(void) {
    ov70_0223E76C(r1);
    Party_GetCount(*((u32*)(*((u32*)r4) + 8)));
    Party_GetCount(*((u32*)(*((u32*)r4) + 8)), *((u16*)(r4 + 0x000011F8)));
}





void ov70_02240D44(void) {
    // strh r1, [r0, r3]
    // strh r2, [r0, r1]
}





void ov70_02240D54(void) {
}





void ov70_02240D74(void) {
    ov70_0224127C();
    // add r0, sp, #4
    // add r2, r5, r2
    ov70_02238B54(r5, 0x00000D84, 2);
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, sp, #4
    Sprite_CreateAffine(0x00182000);
    // str r0, [r5, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x00000EE4)), 1);
    Sprite_SetPriority(*((u32*)(r5 + 0x00000EE4)), 2);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000EE4)), ((7 * r4) + 3));
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000EE4)), 1);
    // str r0, [sp]
    // add r0, sp, #4
    Sprite_CreateAffine(0);
    // str r0, [r4, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + 0x00000EE8)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000EE8)), r7);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000EE8)), 0);
    ov70_022410F0(*((u32*)(r4 + 0x00000EE8)), *((u16*)r6), *((u16*)(r6 + 2)));
    Sprite_SetPriority(*((u32*)(r4 + 0x00000EE8)), 2);
    // ldr r0, [sp]
    // str r0, [sp]
    // add r0, sp, #4
    Sprite_CreateAffine((r0 + 1));
    // str r0, [r5, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x00000F0C)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000F0C)), 0x2b);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000F0C)), 0);
    ov70_022410F0(*((u32*)(r5 + 0x00000F0C)), 0x80, 0x56);
    Sprite_SetPriority(*((u32*)(r5 + 0x00000F0C)), 1);
    // add r0, sp, #4
    Sprite_CreateAffine();
    // str r0, [r5, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + (0xf1 << 4))), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xf1 << 4))), 0x2a);
    // add r2, r3, r2
    ov70_02238F9C(*((u32*)(r5 + (0xf1 << 4))), 0x37, (0x6a << 2), *((u32*)(r5 + ((0xf1 << 4) + 4))));
    Sprite_SetDrawFlag(*((u32*)(r5 + (0xf1 << 4))), 0);
    Sprite_GetMatrixPtr(*((u32*)(r5 + 0x00000EE4)));
    // asr r2, r1, #0xb
    // add r2, r1, r2
    // asr r1, r2, #0xc
    // strh r1, [r5, r7]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // strh r0, [r5, r6]
}





void ov70_02240EF4(void) {
    ov70_02240D74();
    CreateSysTaskAndEnvironment(ov70_02240F58, 0x10, 5, 0x3d);
    // str r0, [r5, r1]
    SysTask_GetData(*((u32*)(r5 + 0x000011D8)), 0x000011D8);
    // str r1, [r0]
    // sub r2, #0x28
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = r4;
    *((u32*)(r0 + 0xc)) = r5;
    ov70_02240F3C(0, 0);
    PlaySE(0x0000062E);
}





void ov70_02240F3C(void) {
    // add r1, r1, r2
}





void ov70_02240F58(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02240F72: ; jump table
    *((u32*)(r1 + 4)) = 0xa0;
    // str r1, [r4]
    ov70_02240F3C(r1, 1);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 5);
    ov70_022410F0(*((u32*)(r5 + 0x00000EE4)), 0x80, (*((u32*)(r4 + 4)) + 5));
    Sprite_IsAnimated(*((u32*)(r5 + 0x00000EE4)));
    ov70_02240F3C(r4, 2);
    // str r0, [r4]
    *((u32*)(r4 + 4)) = 0x8a;
    // str r1, [r4]
    ov70_02240F3C(r4, 3);
    *((u32*)(r4 + 4)) = (r0 - 2);
    ov70_022410F0(*((u32*)(r5 + 0x00000EE4)), 0x80, *((u32*)(r4 + 4)));
    PlaySE(0x0000060C);
    // strh r2, [r1, r0]
    DestroySysTaskAndEnvironment(r6, *((u32*)(r4 + 0xc)), 1);
}





void ov70_02241004(void) {
    CreateSysTaskAndEnvironment(ov70_02241048, 0x10, 5, 0x3d);
    // str r0, [r5, r1]
    SysTask_GetData(*((u32*)(r5 + 0x000011D8)), 0x000011D8);
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0x8a;
    *((u32*)(r0 + 8)) = r4;
    *((u32*)(r0 + 0xc)) = r5;
    ov70_02240F3C(5);
    PlaySE(0x0000060D);
}





void ov70_02241048(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02241060: ; jump table
    *((u32*)(r1 + 4)) = 0xa0;
    // str r0, [r4]
    ov70_02240F3C(r1, 6);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 2);
    ov70_022410F0(*((u32*)(r5 + 0x00000EE4)), 0x80, (*((u32*)(r4 + 4)) + 2));
    Sprite_IsAnimated(*((u32*)(r5 + 0x00000EE4)));
    ov70_02240F3C(r4, 0);
    // str r0, [r4]
    PlaySE(0x0000062F);
    // mvn r0, r0
    // str r1, [r4]
    ov70_02240F3C(r4, 3);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 5);
    ov70_022410F0(*((u32*)(r5 + 0x00000EE4)), 0x80, (*((u32*)(r4 + 4)) - 5));
    // strh r2, [r5, r1]
    DestroySysTaskAndEnvironment(0x000011DC, 1);
}





void ov70_022410F0(void) {
    // sub r5, #8
    // str r0, [sp]
    // add r0, r0, r1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0
}





void ov70_02241164(void) {
}





void ov70_02241184(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    PlaySE(0x0000064E);
    // ldr r4, [sp, #4]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // str r0, [sp]
    ov70_022412C8(*((u32*)(r1 + 0x000011E4)), *((u32*)(r1 + 0x000011EC)), 0, *((u8*)(r4 + (0xe << 6))));
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000EE8)));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + r0)), r7);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000EE8)), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000EE8)), 0);
    // add r4, r4, r0
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
}





void ov70_0224122C(void) {
    // add r0, #0xe
}





void ov70_02241234(void) {
    Sprite_GetDrawFlag(*((u32*)(r0 + 0x00000EE8)));
    Sprite_GetAnimationNumber(*((u32*)(r5 + 0x00000EE8)));
    ov70_0224122C(r4);
    ov70_0224122C(r4);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000EE8)), (r0 + 1));
}





void ov70_0224127C(void) {
    // add r2, r4, r2
    GfGfxLoader_GetPlttData(0x54, 0xb, 0x000011EC, 0x3d);
    // str r0, [r4, r3]
    // str r0, [sp]
    // add r3, r4, r3
    GfGfxLoader_GetCharData(0x54, 0xc, 1, (0x000011E8 - 4));
    // str r0, [r4, r1]
    DC_FlushRange(*((u32*)(r4 + (0x000011E0 + 4))), (2 << 0xe));
}





void ov70_022412C8(void) {
    // ldr r0, [sp, #0x18]
    SpriteToUnionRoomAvatarIdx(r3);
    // add r0, r1, r0
    GXS_LoadOBJ(((6 << 8) * r0), *((u16*)(ov70_02245CFC + (r5 << 1))), (2 << 8));
    // add r0, r6, r0
    GXS_LoadOBJPltt((r4 << 5), ((r5 + 2) << 5), 0x20);
}





void ov70_02241308(void) {
    // add r0, #0xc
    Heap_Free(*((u32*)(r0 + 0x000011DC)), *((u16*)(r0 + 0x000011DC)));
    Heap_Free(*((u32*)(r4 + 0x000011E0)));
}





void ov70_02241330(void) {
    // add r3, #0x20
    // add r2, r2, r3
    ov70_022410F0(*((u32*)(r0 + 0x00000F0C)), *((u16*)(ov70_02245D0A + (r1 << 2))), *((u16*)(ov70_02245D0C + (r1 << 2))));
}





void ov70_02241358(void) {
    // ldrsh r1, [r5, r7]
    // ldrsh r2, [r5, r6]
    ov70_02238F9C(*((u32*)(r0 + 0x00000EE4)));
}





void ov70_02241380(void) {
    // ldrsh r2, [r5, r6]
    // ldrsh r1, [r5, r7]
    // add r2, #0x20
    ov70_02238F9C(*((u32*)(r0 + 0x00000EE4)));
}





void ov70_022413AC(void) {
    ov70_0223E49C(*((u32*)(*((u32*)r0) + 8)), *((u32*)(*((u32*)r0) + 0xc)), *((u16*)(r0 + (0x12 << 4))), *((u16*)(r0 + ((0x12 << 4) + 2))));
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, #0xcd
    // strb r1, [r0]
    // add r0, #0xcf
    // strb r2, [r0]
    // add r0, #0xd0
    // strb r1, [r0]
    // add r0, #0xce
    // strb r2, [r0]
    // add r0, #0xd4
    // strh r1, [r0]
    sub_02088288(*((u32*)(*((u32*)r4) + 0x20)), 0, 1);
    // add r1, #0xe8
    // str r0, [r1]
    // add r0, #0xd8
    // str r1, [r0]
    // add r0, #0xc0
    // str r1, [r0]
    Save_SpecialRibbons_Get(*((u32*)(*((u32*)r4) + 0x20)), *((u32*)(*((u32*)r4) + 0x24)));
    // add r1, #0xdc
    // str r0, [r1]
    sub_0208828C(*((u32*)(*((u32*)r4) + 0x20)), r4);
    // add r1, #0xf0
    // str r0, [r1]
    // add r0, #0xbc
    sub_02089D40(r4, ov70_02245D48);
    // add r0, #0xbc
    sub_0208AD34(r4, *((u32*)(*((u32*)r4) + 0x1c)));
    // add r1, #0xbc
    OverlayManager_New(gOverlayTemplate_PokemonSummary, r4, 0x3d);
    // add r1, #0xb8
    // str r0, [r1]
    // str r1, [r4, r0]
}





void ov70_02241468(void) {
    // add r0, #0xb8
    // add r0, #0xb8
}





void ov70_02241494(void) {
}





void ov70_022414A0(void) {
    AllocMonZeroed(0x3d);
    // str r0, [r4, r1]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022414C2: ; jump table
    // add r0, r4, r0
    Mon_GetBoxMon((0x4f << 2), 0x000011F0);
    // add r1, #0xf8
    // str r0, [r1]
    // add r0, #0xf8
    // add r0, #0xfc
    // str r1, [r0]
    // add r0, r4, r0
    ov70_0224182C((0x4f << 2), *((u32*)r4));
    // str r0, [r4, r1]
    // sub r0, #0x30
    // str r2, [r4, r0]
    // sub r0, #0x2c
    // str r2, [r4, r0]
    // sub r1, #0x28
    // str r0, [r4, r1]
    // add r0, r4, r0
    Mon_GetBoxMon((0x4f << 2), (0x13 << 4), 3);
    // add r1, #0xfc
    // str r0, [r1]
    // add r0, #0xfc
    // add r0, #0xf8
    // str r1, [r0]
    // add r0, r4, r0
    ov70_0224182C((0x4f << 2), *((u32*)r4));
    // str r0, [r4, r1]
    // sub r0, #0x30
    // str r2, [r4, r0]
    // sub r0, #0x2c
    // str r2, [r4, r0]
    // sub r1, #0x28
    // str r0, [r4, r1]
    // add r0, r4, r0
    Mon_GetBoxMon((0x4f << 2), (0x13 << 4), 3);
    // add r1, #0xfc
    // str r0, [r1]
    sub_0202DB64(*((u32*)*((u32*)r4)), *((u32*)(r4 + 0x000011F0)));
    Mon_GetBoxMon(*((u32*)(r4 + 0x000011F0)));
    // add r1, #0xf8
    // str r0, [r1]
    // add r0, r4, r0
    ov70_0224182C((0x4f << 2), r4);
    // str r0, [r4, r1]
    // sub r0, #0x30
    // str r2, [r4, r0]
    // sub r0, #0x2c
    // str r2, [r4, r0]
    // sub r1, #0x28
    // str r0, [r4, r1]
    sub_0202DB64(*((u32*)*((u32*)r4)), *((u32*)(r4 + (0x13 << 4))), 3);
    Mon_GetBoxMon(*((u32*)(r4 + 0x000011F0)));
    // add r1, #0xf8
    // str r0, [r1]
    // add r2, r4, r0
    // sub r0, #8
    // add r0, r2, r0
    Mon_GetBoxMon(((0x4b << 2) * *((u32*)(r4 + (0x4b << 2)))), *((u32*)(r4 + (0x4b << 2))));
    // add r1, #0xfc
    // str r0, [r1]
    // add r2, r4, r0
    // sub r0, #8
    // add r0, r2, r0
    ov70_0224182C(((0x4b << 2) * *((u32*)(r4 + (0x4b << 2)))), *((u32*)(r4 + (0x4b << 2))));
    // str r0, [r4, r1]
    // sub r0, #0x30
    // str r2, [r4, r0]
    // sub r0, #0x2c
    // str r2, [r4, r0]
    // sub r1, #0x28
    // str r0, [r4, r1]
    // str r1, [r4, r0]
    // add r1, #0xf8
    OverlayManager_New(ov70_02245D50, r4, 0x3d);
    // add r1, #0xb8
    // str r0, [r1]
    // str r1, [r4, r0]
}





void ov70_02241648(void) {
    // add r0, #0xb8
    OverlayManager_Run(*((u32*)r0));
    // add r0, #0xb8
    OverlayManager_Delete(*((u32*)r5));
    ov70_02241868(r5, *((u32*)(r5 + 0x24)));
    GetMonData(6, 0);
    // add r0, sp, #0x28
    // str r0, [sp]
    GetMonEvolution(0, r6, 1, ((r0 << 0x10) >> 0x10));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    sub_02075A7C(0, r6, r0, *((u32*)(*((u32*)r5) + 0x24)));
    // str r0, [r5, r1]
    *((u32*)(r5 + 0x2c)) = 1;
    ov70_02238E50(r5, 1, 0);
    ov70_02241868(r5);
    AllocMonZeroed(0x3d);
    sub_0202DB64(*((u32*)*((u32*)r5)), r0);
    GetMonData(r6, 5, 0);
    // str r0, [sp, #0x1c]
    GetMonData(r7, 5, 0);
    // ldr r1, [sp, #0x1c]
    GetMonData(r6, 0, 0);
    // str r0, [sp, #0x20]
    GetMonData(r7, 0, 0);
    // ldr r1, [sp, #0x20]
    GetMonData(r6, 6, 0);
    // add r0, sp, #0x24
    // str r0, [sp]
    GetMonEvolution(0, r6, 1, ((r0 << 0x10) >> 0x10));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    sub_02075A7C(0, r6, r0, *((u32*)(*((u32*)r5) + 0x24)));
    // str r0, [r5, r1]
    *((u32*)(r5 + 0x2c)) = 1;
    ov70_02238E50(r5, 1, 0);
    ov70_02238E50(r5, 1, 0);
    Heap_Free(r7);
    ov70_02238E50(r5, 1, 0);
    sub_02075D3C(*((u32*)(r5 + (0x11 << 4))));
    sub_02075D4C(*((u32*)(r5 + (0x11 << 4))));
    ov70_022418A4(r5);
    // and r0, r1
    // str r0, [r2]
    ov70_02238E50(r5, 7, 0xc);
}





void ov70_02241808(void) {
    Heap_Free(*((u32*)(r0 + 0x000011F0)));
    Heap_Free(*((u32*)(r4 + (0x13 << 4))));
    ov70_02238E58(r4);
}





void ov70_0224182C(void) {
    PlayerProfile_New(0x3d);
    PlayerProfile_Init();
    // add r1, r5, r1
    Save_Profile_PlayerName_Set(r4, (0x43 << 2));
    PlayerProfile_SetVersion(r4, *((u8*)(r5 + 0x00000122)));
    PlayerProfile_SetLanguage(r4, *((u8*)(r5 + 0x00000123)));
}





void ov70_02241868(void) {
    // add r2, r0, r1
    // sub r1, #8
    // add r0, r2, r1
    // add r0, r0, r1
    // add r0, r0, r1
}





void ov70_022418A4(void) {
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
}





void ov70_0224190C(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02241924: ; jump table
    // str r0, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r1, r5
    AddWindowParameterized(*((u32*)r0), *((u32*)(r0 + 4)), ((*((u32*)(r0 + 0x54)) << 0x18) >> 0x18), *((u8*)ov70_02245E0E));
    // add r0, r0, r5
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // ldr r0, [sp, #0x28]
    // add r5, #0x10
    // str r0, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xe0
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), 9);
    // add r0, #0xe0
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), 1);
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x36
    // str r0, [sp, #0x10]
    // add r1, r1, r5
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), *((u8*)(ov70_02245E10 - 2)));
    // add r0, r0, r5
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // add r5, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xe0
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), 9);
    // add r0, #0xe0
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r1, r5
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), *((u8*)ov70_02245DA2));
    // add r0, r0, r5
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // ldr r0, [sp, #0x14]
    // add r7, #0x10
    // add r5, #0x10
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x40
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), 6);
    // add r0, #0x40
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xe0
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), 9);
    // add r0, #0xe0
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r1, r5
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), *((u8*)ov70_02245E0E));
    // add r0, r0, r5
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // ldr r0, [sp, #0x18]
    // add r5, #0x10
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xe0
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), 9);
    // add r0, #0xe0
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xf0
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), 2);
    // add r0, #0xf0
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r1, r5
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), *((u8*)ov70_02245D96));
    // add r0, r0, r5
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // ldr r0, [sp, #0x1c]
    // add r7, #0x2e
    // add r5, #0x10
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x50
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), 0xd);
    // add r0, #0x50
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xe0
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), 0x18);
    // add r0, #0xe0
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r1, r5
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), *((u8*)ov70_02245D60));
    // add r0, r0, r5
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // ldr r0, [sp, #0x20]
    // add r7, #0x10
    // add r5, #0x10
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xe0
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), 9);
    // add r0, #0xe0
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r1, r5
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), *((u8*)ov70_02245D6E));
    // add r0, r0, r5
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // ldr r0, [sp, #0x24]
    // add r7, #0x16
    // add r5, #0x10
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x40
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), 6);
    // add r0, #0x40
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xe0
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), ((*((u32*)(r4 + 0x54)) << 0x18) >> 0x18), 9);
    // add r0, #0xe0
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
}





void ov70_02241DB4(void) {
    // add r2, sp, #0x10
    // add r2, #1
    // add r3, sp, #0x10
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02241DDC: ; jump table
    // add r0, r0, r5
    // add r0, r0, r5
    // add r0, r0, r5
    // add r5, #0x10
    // add r0, sp, #0x10
    // ldrsb r0, [r0, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xe0
    // add r0, r0, r5
    // add r0, r0, r5
    // add r0, r0, r5
    // add r5, #0x10
    // add r0, sp, #0x10
    // ldrsb r0, [r0, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xe0
    // add r0, r0, r5
    // add r0, r0, r5
    // add r0, r0, r5
    // add r5, #0x10
    // add r0, sp, #0x10
    // ldrsb r0, [r0, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xe0
    // add r0, r0, r5
    // add r0, r0, r5
    // add r0, r0, r5
    // add r5, #0x10
    // add r0, sp, #0x10
    // ldrsb r0, [r0, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xe0
    // add r0, #0xf0
    // add r0, r0, r5
    // add r0, r0, r5
    // add r0, r0, r5
    // add r5, #0x10
    // add r0, sp, #0x10
    // ldrsb r0, [r0, r1]
    // sub r0, #0x10
    // asr r0, r0, #0x18
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xe0
    // add r0, r0, r5
    // add r5, #0x10
    // add r0, #0xe0
    // add r0, r0, r5
    // add r5, #0x10
    // add r0, #0xe0
}





void ov70_02242014(void) {
    // str r0, [r4]
    // add r0, #0x40
    // strh r1, [r0]
    // add r0, #0x42
    // strh r1, [r0]
    // add r0, #0x44
    // strb r1, [r0]
    // add r0, #0x45
    // strb r1, [r0]
    // add r0, #0x7e
    // strb r1, [r0]
    // str r0, [sp]
}





void ov70_022420C4(void) {
    // add r2, #0x58
    // strh r1, [r2]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022420DA: ; jump table
    // add r1, #0x7e
    // strb r2, [r1]
    // add r1, #0x7e
    // strb r2, [r1]
    // add r1, #0x7e
    // strb r2, [r1]
    // add r1, #0x7e
    // strb r2, [r1]
}





void ov70_0224212C(void) {
}





void ov70_02242144(void) {
}





void ov70_02242164(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02242176: ; jump table
    TouchscreenHitbox_FindRectAtTouchNew(ov70_02245ED0, (*((u16*)(r1 + 6)) << 0x10));
    TouchscreenHitbox_FindRectAtTouchNew(ov70_02245F28);
    TouchscreenHitbox_FindRectAtTouchNew(ov70_02245E3E);
    TouchscreenHitbox_FindRectAtTouchNew(ov70_02245DD0);
    TouchscreenHitbox_FindRectAtTouchNew(ov70_02245E5E);
    TouchscreenHitbox_FindRectAtTouchNew(ov70_02245DE4);
}





void ov70_022421D0(void) {
    // add r0, #0x7e
    // strb r1, [r0]
    // tst r2, r0
    *((u32*)(r0 + 0x48)) = *((u8*)(ov70_02245EA8 + (*((u32*)(r0 + 0x48)) << 2)));
    // tst r2, r0
    *((u32*)(r0 + 0x48)) = *((u8*)(ov70_02245EA9 + (*((u32*)(r0 + 0x48)) << 2)));
    // tst r2, r0
    *((u32*)(r0 + 0x48)) = *((u8*)(ov70_02245EAA + (*((u32*)(r0 + 0x48)) << 2)));
    // tst r0, r2
    *((u32*)(r0 + 0x48)) = *((u8*)(ov70_02245EAB + (*((u32*)(r0 + 0x48)) << 2)));
    // tst r0, r2
    // add r0, #0x7e
    *((u32*)(r0 + 0x48)) = *((u8*)r0);
    // add r0, #0x48
    // str r2, [r0]
    // tst r0, r2
    // add r0, #0x7e
    *((u32*)(r0 + 0x48)) = *((u8*)r0);
    // bmi _02242282
    // add r0, #0x48
    // str r2, [r0]
    // bpl _02242276
    PlaySE(0x000005DC, *((u32*)(r0 + 0x48)), (*((u32*)(r0 + 0x48)) - 4));
    // add r1, #0x10
    ov70_02238F9C(*((u32*)(r5 + 0xc)), (*((u8*)(ov70_02245E26 + (*((u32*)(r5 + 0x48)) << 1))) << 3), (*((u8*)(ov70_02245E27 + (*((u32*)(r5 + 0x48)) << 1))) << 3), ov70_02245E27);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0xc)), 0x30);
    Sprite_SetAnimCtrlSeq(0x3d);
    ov70_02242164(r5, 4);
    // mvn r0, r0
    PlaySE(0x000005DC);
    // mvn r0, r0
    GF_AssertFail(1);
    PlaySE(0x000005DC);
    // tst r1, r0
    GF_AssertFail((1 - 3), *((u32*)(r5 + 0x48)), *((u32*)(gSystem + 0x48)));
    PlaySE(0x000005DC);
    // tst r0, r2
    PlaySE(0x000005DC);
    // mvn r0, r0
    // mvn r0, r0
}





void ov70_02242364(void) {
    // ldrsh r0, [r0, r2]
    // sub r1, #0x3d
    // mvn r0, r0
}





void ov70_02242390(void) {
    // add r0, #0x7e
    // strb r1, [r0]
    // tst r2, r0
    *((u32*)(r0 + 0x48)) = *((u8*)(ov70_02245DC0 + (*((u32*)(r0 + 0x48)) << 2)));
    // tst r2, r0
    *((u32*)(r0 + 0x48)) = *((u8*)(ov70_02245DC1 + (*((u32*)(r0 + 0x48)) << 2)));
    // tst r2, r0
    *((u32*)(r0 + 0x48)) = *((u8*)(ov70_02245DC2 + (*((u32*)(r0 + 0x48)) << 2)));
    // tst r0, r2
    *((u32*)(r0 + 0x48)) = *((u8*)(ov70_02245DC3 + (*((u32*)(r0 + 0x48)) << 2)));
    // add r0, #0x7e
    *((u32*)(r0 + 0x48)) = *((u8*)r0);
    PlaySE(0x000005DC, *((u32*)(r0 + 0x48)), (*((u32*)(r0 + 0x48)) << 2));
    ov70_02238F9C(*((u32*)(r5 + 0xc)), 0xc0, 0x88);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0xc)), 0x30);
    // add r1, #0x10
    ov70_02238F9C(*((u32*)(r5 + 0xc)), (*((u8*)(ov70_02245E26 + (r0 << 1))) << 3), (*((u8*)(ov70_02245E27 + (r0 << 1))) << 3), ov70_02245E27);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0xc)), 0x2f);
    ov70_02242164(r5, 5);
    // mvn r0, r0
    ov70_02242364(r5, r0);
    // mvn r1, r1
    // ldrsh r0, [r5, r0]
    // add r0, r4, r6
    PlaySE(0x000005DC, *((u32*)(ov70_02245E84 + (0x3c << 2))));
    // tst r0, r1
    ov70_02242364(r5, *((u32*)(r5 + 0x48)));
    // mvn r1, r1
    // ldrsh r0, [r5, r0]
    // add r0, r4, r6
    PlaySE(0x000005DC, *((u32*)(ov70_02245E84 + (0x3c << 2))));
    // tst r0, r1
    PlaySE(0x000005DC);
    // mvn r0, r0
    // mvn r0, r0
}





void ov70_02242508(void) {
}





void ov70_0224251C(void) {
    // mvn r0, r0
    // mvn r1, r1
    ov70_02242574(1, 0);
    // mvn r0, r0
    ov70_02242574(0, 1);
    // mvn r0, r0
    // ldrsh r2, [r5, r0]
    // add r4, r1, r2
    PlaySE(0x000005DC, *((u32*)(r5 + 0x5c)), (r2 << 2));
    // add r0, r1, r0
    // sub r0, #0x5b
}





void ov70_02242574(void) {
    // ldrsh r0, [r5, r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // add r0, #0x5a
    // strh r4, [r0]
    // ldrsh r0, [r5, r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // ldrsh r1, [r5, r1]
    // str r0, [sp]
    // ldrsh r3, [r5, r3]
    // add r2, #0x40
}





void ov70_0224261C(void) {
    // tst r1, r2
    *((u32*)(r0 + 0x48)) = (*((u32*)(r0 + 0x48)) - 1);
    *((u32*)(r0 + 0x48)) = 4;
    // tst r1, r2
    *((u32*)(r0 + 0x48)) = (*((u32*)(r0 + 0x48)) + 1);
    *((u32*)(r0 + 0x48)) = 0;
    // tst r3, r1
    // sub r1, #0x21
    ov70_02242574(0, 0x20, *((u32*)(gSystem + 0x4c)), *((u32*)(gSystem + 0x4c)));
    // tst r1, r2
    ov70_02242574(1);
    PlaySE(0x000005DC);
    ov70_02238F9C(*((u32*)(r5 + 0xc)), *((u8*)(ov70_02245D76 + (*((u32*)(r5 + 0x48)) << 1))), *((u8*)(ov70_02245D77 + (*((u32*)(r5 + 0x48)) << 1))), (*((u32*)(r5 + 0x48)) << 1));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0xc)), 0x30);
    Sprite_SetAnimCtrlSeq(0x31);
    ov70_02242164(r5, 0);
    // mvn r0, r0
    ov70_0224251C(r5, r0);
    // tst r1, r2
    ov70_0224251C(r5, *((u32*)(r5 + 0x48)), *((u32*)(gSystem + 0x48)));
    // tst r1, r2
    PlaySE(0x000005DC, 2);
    // mvn r0, r0
}





void ov70_022426F4(void) {
    // tst r0, r1
    PlaySE(0x000005DC, *((u32*)(gSystem + 0x4c)));
    *((u32*)(r5 + 0x48)) = (*((u32*)(r5 + 0x48)) - 1);
    *((u32*)(r5 + 0x48)) = 3;
    // tst r0, r1
    PlaySE(0x000005DC);
    *((u32*)(r5 + 0x48)) = (*((u32*)(r5 + 0x48)) + 1);
    *((u32*)(r5 + 0x48)) = 0;
    ov70_02238F9C(*((u32*)(r5 + 0xc)), *((u8*)(ov70_02245D66 + (*((u32*)(r5 + 0x48)) << 1))), *((u8*)(ov70_02245D67 + (*((u32*)(r5 + 0x48)) << 1))), (*((u32*)(r5 + 0x48)) << 1));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0xc)), 0x30);
    Sprite_SetAnimCtrlSeq(0x31);
    ov70_02242164(r5, 1);
    // mvn r0, r0
    PlaySE(0x000005DC);
    // tst r1, r2
    PlaySE(0x000005DC, 1, *((u32*)(gSystem + 0x48)));
    // tst r1, r2
    PlaySE(0x000005DC, 2);
    // mvn r0, r0
}





void ov70_022427C4(void) {
    // ldrsh r0, [r4, r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // ldrsh r0, [r4, r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // ldrsh r1, [r4, r1]
    // str r0, [sp]
    // ldrsh r3, [r4, r3]
    // add r2, #0x40
}





void ov70_02242860(void) {
    PlaySE(0x000005DC);
    // mvn r0, r0
    // mvn r1, r1
    ov70_022427C4(1, 0);
    // mvn r0, r0
    ov70_022427C4(0, 1);
    // mvn r0, r0
    // ldrsh r1, [r5, r0]
    // add r2, r4, r1
    PlaySE(0x000005DC, *((u32*)(r5 + 0x5c)));
    // add r0, r1, r0
    // sub r0, #0x5b
}





void ov70_022428C0(void) {
    // tst r1, r2
    PlaySE(0x000005DC, 0x40, *((u32*)(gSystem + 0x4c)));
    *((u32*)(r5 + 0x48)) = (*((u32*)(r5 + 0x48)) - 1);
    *((u32*)(r5 + 0x48)) = 4;
    // tst r1, r2
    PlaySE(0x000005DC, 0x80);
    *((u32*)(r5 + 0x48)) = (*((u32*)(r5 + 0x48)) + 1);
    *((u32*)(r5 + 0x48)) = 0;
    // tst r3, r1
    // sub r1, #0x21
    ov70_022427C4(0, 0x20, r2);
    // tst r1, r2
    ov70_022427C4(1);
    ov70_02238F9C(*((u32*)(r5 + 0xc)), *((u8*)(ov70_02245D80 + (*((u32*)(r5 + 0x48)) << 1))), *((u8*)(ov70_02245D81 + (*((u32*)(r5 + 0x48)) << 1))), (*((u32*)(r5 + 0x48)) << 1));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0xc)), 0x30);
    Sprite_SetAnimCtrlSeq(0x31);
    ov70_02242164(r5, 2);
    // mvn r0, r0
    ov70_02242860(r5, r0);
    // tst r1, r2
    ov70_02242860(r5, *((u32*)(r5 + 0x48)), *((u32*)(gSystem + 0x48)));
    // tst r1, r2
    PlaySE(0x000005DC, 2);
    // mvn r0, r0
}





void ov70_022429A0(void) {
    // mvn r0, r0
}





void ov70_022429B8(void) {
    // add r0, #0x7e
    // strb r1, [r0]
    // tst r2, r0
    *((u32*)(r0 + 0x48)) = *((u8*)(ov70_02245EFC + (*((u32*)(r0 + 0x48)) << 2)));
    // tst r2, r0
    *((u32*)(r0 + 0x48)) = *((u8*)(ov70_02245EFD + (*((u32*)(r0 + 0x48)) << 2)));
    // tst r2, r0
    *((u32*)(r0 + 0x48)) = *((u8*)(ov70_02245EFE + (*((u32*)(r0 + 0x48)) << 2)));
    // tst r0, r2
    *((u32*)(r0 + 0x48)) = *((u8*)(ov70_02245EFF + (*((u32*)(r0 + 0x48)) << 2)));
    // tst r0, r2
    // add r0, #0x7e
    *((u32*)(r0 + 0x48)) = *((u8*)r0);
    // add r0, #0x48
    // str r2, [r0]
    // tst r0, r2
    // add r0, #0x7e
    *((u32*)(r0 + 0x48)) = *((u8*)r0);
    // bmi _02242A6A
    // add r0, #0x48
    // str r2, [r0]
    // bpl _02242A5E
    PlaySE(0x000005DC, *((u32*)(r0 + 0x48)), (*((u32*)(r0 + 0x48)) - 4));
    // add r1, #0x10
    ov70_02238F9C(*((u32*)(r5 + 0xc)), (*((u8*)(ov70_02245DF8 + (*((u32*)(r5 + 0x48)) << 1))) << 3), (*((u8*)(ov70_02245DF9 + (*((u32*)(r5 + 0x48)) << 1))) << 3), ov70_02245DF9);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0xc)), 0x30);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0xc)), 0x31);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0xc)), 0x3d);
    ov70_02242164(r5, 6);
    // mvn r0, r0
    ov70_022429A0(r5, r0);
    // mvn r0, r0
    PlaySE(0x000005DC);
    // tst r0, r1
    ov70_022429A0(r5, *((u32*)(r5 + 0x48)));
    // mvn r0, r0
    PlaySE(0x000005DC);
    // tst r0, r1
    PlaySE(0x000005DC);
    // mvn r0, r0
    // mvn r0, r0
}





void ov70_02242B5C(void) {
    PlaySE(0x000005DC);
    // mvn r0, r0
    // mvn r1, r1
    ov70_02242BBC(1, 0);
    // mvn r0, r0
    ov70_02242BBC(0, 1);
    // mvn r0, r0
    // ldrsh r3, [r5, r0]
    // add r2, r3, r2
    // add r4, r1, r2
    PlaySE(0x000005DC, *((u32*)(r5 + 0x5c)), (r3 << 2));
    // add r0, r1, r0
    // sub r0, #0x5b
}





void ov70_02242BBC(void) {
    // ldrsh r0, [r5, r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // add r0, #0x5a
    // strh r4, [r0]
    // ldrsh r0, [r5, r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // ldrsh r1, [r5, r1]
    // str r0, [sp]
    // ldrsh r3, [r5, r3]
    // add r2, #0x50
}





void ov70_02242C64(void) {
    // tst r1, r2
    PlaySE(0x000005DC, 0x40, *((u32*)(gSystem + 0x4c)));
    *((u32*)(r5 + 0x48)) = (*((u32*)(r5 + 0x48)) - 1);
    *((u32*)(r5 + 0x48)) = 5;
    // tst r1, r2
    PlaySE(0x000005DC, 0x80);
    *((u32*)(r5 + 0x48)) = (*((u32*)(r5 + 0x48)) + 1);
    *((u32*)(r5 + 0x48)) = 0;
    // tst r3, r1
    // sub r1, #0x21
    ov70_02242BBC(0, 0x20, r2);
    // tst r1, r2
    ov70_02242BBC(1);
    ov70_02238F9C(*((u32*)(r5 + 0xc)), *((u8*)(ov70_02245D8A + (*((u32*)(r5 + 0x48)) << 1))), *((u8*)(ov70_02245D8B + (*((u32*)(r5 + 0x48)) << 1))), (*((u32*)(r5 + 0x48)) << 1));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0xc)), 0x30);
    Sprite_SetAnimCtrlSeq(0x32);
    ov70_02242164(r5, 3);
    // mvn r0, r0
    ov70_02242B5C(r5, r0);
    // tst r1, r2
    ov70_02242B5C(r5, *((u32*)(r5 + 0x48)), *((u32*)(gSystem + 0x48)));
    // tst r1, r2
    PlaySE(0x000005DC, 2);
    // mvn r0, r0
}





void ov70_02242D44(void) {
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp]
    sub_02019688(*((u32*)(r0 + 0x1c)), 0, 0x64, 0x22);
    sub_02019B08(*((u32*)(r5 + 0x1c)), 0);
    // ldr r1, [sp, #4]
    ov70_0224190C(r5);
    // add r0, #0x64
    MI_CpuFill8(r5, 1, 0x1a);
    // add r1, #0x6e
    NewString_ReadMsgData(*((u32*)(r5 + 0x24)), 0);
    // ldr r0, [sp, #4]
    ov70_02243F7C(r5, r4);
    // add r2, r5, r4
    // add r2, #0x64
    // strb r1, [r2]
    // add r2, r5, r4
    // add r2, #0x64
    // strb r1, [r2]
    ov70_02243FE0(r5, r4);
    // add r2, r5, r4
    // add r2, #0x64
    // strb r1, [r2]
    // add r2, r5, r4
    // add r2, #0x64
    // strb r1, [r2]
    // str r0, [sp]
    // add r1, r1, r6
    ov70_02242FC4(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 4)), r7, 2);
    String_Delete(r7);
    // add r6, #0x10
    // add r2, #0xe0
    ov70_02243EB8(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x24)), *((u32*)(r5 + 4)), 0x44);
    // ldr r0, [sp, #4]
    NewString_ReadMsgData(*((u32*)(r5 + 0x24)), 0xae);
    // str r0, [sp]
    // add r1, #0xf0
    ov70_02242FC4(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 4)), r0, 2);
    String_Delete(r4);
    // ldr r2, [sp, #8]
    // asr r2, r2, #0x18
    sub_020196E8(*((u32*)(r5 + 0x1c)), 0, (r2 << 0x18), 0);
    sub_020197F4(*((u32*)(r5 + 0x1c)), 0);
}





void ov70_02242E58(void) {
    // str r0, [sp]
    sub_02019688(*((u32*)(r0 + 0x1c)), 0, 0x64, 0x1f);
    sub_02019B08(*((u32*)(r5 + 0x1c)), 0);
    ov70_0224190C(r5, 1);
    // add r1, #0x7c
    NewString_ReadMsgData(*((u32*)(r5 + 0x24)), 0);
    // str r0, [sp]
    // add r1, r1, r4
    ov70_02242FC4(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 4)), r0, 2);
    String_Delete(r7);
    // add r4, #0x10
    // add r2, #0xe0
    ov70_02243EB8(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x24)), *((u32*)(r5 + 4)), 0x44);
    sub_020196E8(*((u32*)(r5 + 0x1c)), 0, 0x20, 0);
    sub_020197F4(*((u32*)(r5 + 0x1c)), 0);
    // str r0, [sp]
    sub_020198FC(*((u32*)(r5 + 0x1c)), 0, (0 - 4), 0);
}





void ov70_02242EE4(void) {
    // str r0, [sp]
    sub_02019688(*((u32*)(r0 + 0x1c)), 0, 0x64, 0x23);
    sub_02019B08(*((u32*)(r4 + 0x1c)), 0);
    ov70_0224190C(r4, 2);
    // add r0, #0x34
    ov70_0223F7E4(r4, *((u32*)(r4 + 0x24)), 1);
    *((u32*)(r4 + 0x5c)) = r0;
    // add r0, #0x34
    ov70_0223F7E4(r4, *((u32*)(r4 + 0x24)), 0);
    *((u32*)(r4 + 0x5c)) = r0;
    ov70_022434C0(r4, 0, *((u32*)(r4 + 0x5c)));
    // add r0, #0x5a
    // strh r1, [r0]
    ov70_02242508(*((u32*)(r4 + 0x5c)), 4);
    // str r0, [sp]
    // ldrsh r3, [r4, r3]
    // add r2, #0x40
    ov70_02243F00(*((u32*)(r4 + 0x1c)), *((u32*)(r4 + 0x38)), *((u32*)(r4 + 4)), 0x5a);
    // add r2, #0xe0
    ov70_02243EB8(*((u32*)(r4 + 0x1c)), *((u32*)(r4 + 0x24)), *((u32*)(r4 + 4)), 0x44);
    sub_020196E8(*((u32*)(r4 + 0x1c)), 0, 0x20, 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0xc)), 0x31);
    *((u32*)(r4 + 0x48)) = 0;
    // add r0, #0x7e
    // strb r1, [r0]
    ov70_02238F9C(*((u32*)(r4 + 0xc)), *((u8*)(ov70_02245D76 + (*((u32*)(r4 + 0x48)) << 1))), *((u8*)(ov70_02245D77 + (*((u32*)(r4 + 0x48)) << 1))), (*((u32*)(r4 + 0x48)) << 1));
    sub_020197F4(*((u32*)(r4 + 0x1c)), 0);
    // str r0, [sp]
    sub_020198FC(*((u32*)(r4 + 0x1c)), 0, (0 - 4), 0);
    *((u32*)(r4 + 0x4c)) = 0x20;
}





void ov70_02242FC4(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
}





void ov70_02242FF4(void) {
    // mvn r0, r0
}





void ov70_02242FFC(void) {
    // ldrsh r0, [r4, r0]
    // mvn r0, r0
}





void ov70_0224304C(void) {
}





void ov70_02243068(void) {
    // mvn r0, r0
}





void ov70_0224308C(void) {
    // str r0, [sp]
}





void ov70_022430CC(void) {
    // add r1, #0x64
    // mvn r0, r0
    // str r2, [sp]
    // mvn r0, r0
}





void ov70_02243120(void) {
    ov70_02241DB4(4);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 0);
    // ldrsh r1, [r4, r0]
    GF_AssertFail(0x3c);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x3e)) = 0;
    // sub r0, #0x3e
    *((u32*)(r4 + 0x4c)) = 8;
    // mvn r0, r0
}





void ov70_0224316C(void) {
    // str r0, [sp]
    sub_02019688(*((u32*)(r0 + 0x1c)), 0, 0x64, 0x22);
    sub_02019B08(*((u32*)(r5 + 0x1c)), 0);
    ov70_0224190C(r5, 4);
    // add r0, #0x64
    MI_CpuFill8(r5, 1, 0x1a);
    // add r1, #0x6e
    NewString_ReadMsgData(*((u32*)(r5 + 0x24)), 0);
    ov70_02243F7C(r5, r4);
    // add r2, r5, r4
    // add r2, #0x64
    // add r2, r5, r4
    // add r2, #0x64
    // strb r1, [r2]
    // str r0, [sp]
    // add r1, r1, r6
    ov70_02242FC4(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 4)), r7, 2);
    String_Delete(r7);
    // add r6, #0x10
    // add r2, #0xe0
    ov70_02243EB8(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x24)), *((u32*)(r5 + 4)), 0x44);
    sub_020196E8(*((u32*)(r5 + 0x1c)), 0, 0x10, 0);
    sub_020197F4(*((u32*)(r5 + 0x1c)), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0xc)), 0x3d);
    // ldrsh r0, [r5, r0]
    // add r1, #0x10
    ov70_02238F9C(*((u32*)(r5 + 0xc)), (*((u8*)(ov70_02245E26 + (0x3c << 1))) << 3), (*((u8*)(ov70_02245E27 + (0x3c << 1))) << 3), (0x3c << 1));
    // ldrsh r0, [r5, r0]
    *((u32*)(r5 + 0x48)) = 0x3c;
    Sprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 1);
    *((u32*)(r5 + 0x4c)) = 5;
}





void ov70_02243254(void) {
    // str r0, [sp]
    sub_02019688(*((u32*)(r0 + 0x1c)), 0, 0x64, 0x20);
    sub_02019B08(*((u32*)(r5 + 0x1c)), 0);
    ov70_0224190C(r5, 5);
    // add r0, #0x64
    MI_CpuFill8(r5, 1, 0x1a);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r3, [r5, r3]
    // add r3, #0x6e
    ov70_02243E8C(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x24)), *((u32*)(r5 + 4)), 0x3c);
    // ldrsh r1, [r5, r0]
    // add r1, r4, r1
    ov70_02243F54(r5, (*((u32*)(ov70_02245E84 + (r1 << 2))) - 1), (r1 << 2));
    // ldrsh r1, [r5, r1]
    // add r1, r5, r4
    // add r2, r2, r1
    // add r2, #0x63
    // ldrsh r1, [r5, r1]
    // add r1, r5, r4
    // add r2, r2, r1
    // add r2, #0x63
    // strb r1, [r2]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldrsh r3, [r5, r3]
    // add r2, r2, r7
    // add r3, r4, r3
    // add r3, r3, r6
    ov70_02243E8C(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x24)), *((u32*)(r5 + 4)), *((u32*)(ov70_02245FA0 - 4)));
    // ldrsh r1, [r5, r0]
    // add r0, r0, r2
    // add r7, #0x10
    // add r2, #0xe0
    ov70_02243EB8(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x24)), *((u32*)(r5 + 4)), 0x44);
    sub_020196E8(*((u32*)(r5 + 0x1c)), 0, 0x10, 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0xc)), 0x2f);
    // ldrsh r0, [r5, r0]
    *((u32*)(r5 + 0x48)) = 0;
    // add r1, #0x10
    ov70_02238F9C(*((u32*)(r5 + 0xc)), (*((u8*)(ov70_02245E26 + (*((u32*)(r5 + 0x48)) << 1))) << 3), (*((u8*)(ov70_02245E27 + (*((u32*)(r5 + 0x48)) << 1))) << 3), (*((u32*)(r5 + 0x48)) << 1));
    Sprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 1);
    *((u32*)(r5 + 0x4c)) = 9;
    // sub r0, #0xa
}





void ov70_022433A8(void) {
    // add r1, #0x64
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022433C6: ; jump table
    // mvn r0, r0
    // sub r0, #0xb
    // mvn r0, r0
}





void ov70_02243400(void) {
    // ldrsh r0, [r4, r0]
    // mvn r0, r0
}





void ov70_02243420(void) {
    // sub r1, #9
}





void ov70_0224342C(void) {
    // str r1, [sp]
    // ldr r0, [sp]
}





void ov70_02243458(void) {
    // str r1, [sp]
    // ldr r1, [sp, #0x28]
    // add r2, sp, #0xc
    // ldr r7, [sp, #0x2c]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r6]
    // ldr r0, [sp, #0xc]
    // ldr r5, [sp, #4]
    // ldr r1, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
}





void ov70_022434C0(void) {
    // str r2, [sp, #4]
    // str r4, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, r0, r4
    FillWindowPixelBuffer(*((u32*)(r0 + 4)), 0x22);
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #8]
    // str r0, [sp]
    // add r2, r2, r3
    // add r1, r1, r4
    ov70_02242FC4(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 4)), *((u32*)(r6 + r2)), 0);
    // add r0, r0, r4
    CopyWindowPixelsToVram_TextMode(*((u32*)(r5 + 4)));
    // add r2, r2, r4
    sub_02019A60(*((u32*)(r5 + 0x1c)), 0, *((u32*)(r5 + 4)));
    // ldr r0, [sp, #0xc]
    // add r4, #0x10
    // add r6, #8
    // str r0, [sp, #0xc]
}





void ov70_0224352C(void) {
    // add r7, r1, r0
    // str r2, [sp, #4]
    // str r4, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, r0, r4
    FillWindowPixelBuffer(*((u32*)(r0 + 4)), 0x22);
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #8]
    // str r0, [sp]
    // add r2, r2, r3
    // add r1, r1, r4
    ov70_02242FC4(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 4)), *((u32*)(r6 + r2)), 0);
    // add r0, r0, r4
    CopyWindowPixelsToVram_TextMode(*((u32*)(r5 + 4)));
    // add r2, r2, r4
    sub_02019A60(*((u32*)(r5 + 0x1c)), 0, *((u32*)(r5 + 4)));
    // ldr r0, [sp, #0xc]
    // add r4, #0x10
    // add r6, #8
    // str r0, [sp, #0xc]
}





void ov70_02243598(void) {
    // str r0, [sp]
    sub_02019688(*((u32*)(r0 + 0x1c)), 0, 0x64, 0x23);
    sub_02019B08(*((u32*)(r4 + 0x1c)), 0);
    ov70_0224190C(r4, 0);
    // ldrsh r2, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r2, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x34
    ov70_02243458(r4, *((u32*)(r4 + 0x28)), *((u32*)(r4 + 0x24)), *((u32*)(r4 + 0x30)));
    *((u32*)(r4 + 0x5c)) = r0;
    // add r0, #0x5a
    // strh r1, [r0]
    ov70_022434C0(r4, 0, *((u32*)(r4 + 0x5c)));
    ov70_02242508(*((u32*)(r4 + 0x5c)), 4);
    // str r0, [sp]
    // ldrsh r3, [r4, r3]
    // add r2, #0x40
    ov70_02243F00(*((u32*)(r4 + 0x1c)), *((u32*)(r4 + 0x38)), *((u32*)(r4 + 4)), 0x5a);
    // add r2, #0xe0
    ov70_02243EB8(*((u32*)(r4 + 0x1c)), *((u32*)(r4 + 0x24)), *((u32*)(r4 + 4)), 0x44);
    sub_020196E8(*((u32*)(r4 + 0x1c)), 0, 0x10, 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0xc)), 0x31);
    *((u32*)(r4 + 0x48)) = 0;
    ov70_02238F9C(*((u32*)(r4 + 0xc)), *((u8*)(ov70_02245D76 + (0 << 1))), *((u8*)(ov70_02245D77 + (0 << 1))), (0 << 1));
    ov70_02238F9C(*((u32*)(r4 + 0x10)), 0xe4, 0x78);
    ov70_02238F9C(*((u32*)(r4 + 0x14)), 0x9a, 0x78);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 1);
    *((u32*)(r4 + 0x4c)) = 0xd;
    // sub r0, #0xe
}





void ov70_02243688(void) {
    ov70_0224261C();
    // mvn r0, r0
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x10)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x14)), 0);
    PlaySE(0x000005DC);
    *((u32*)(r5 + 0x4c)) = 0xe;
    // sub r0, #0xf
    // add r5, #0x40
    // strh r0, [r5]
    // str r2, [sp]
    sub_020198FC(*((u32*)(r5 + 0x1c)), 0, 4, 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x10)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x14)), 0);
    *((u32*)(r5 + 0x4c)) = 3;
    *((u32*)(r5 + 0x50)) = 0xf;
    // add r5, #0x40
    // strh r4, [r5]
    // mvn r0, r0
}





void ov70_02243700(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x10)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 0);
    ov70_02241DB4(r4, 0);
    ListMenuItems_Delete(*((u32*)(r4 + 0x34)));
    // ldrsh r0, [r4, r0]
    GF_AssertFail(0x3c);
    // ldrsh r0, [r4, r0]
    *((u32*)(r4 + 0x4c)) = 0xb;
    // mvn r0, r0
}





void ov70_02243750(void) {
    // ldrsh r0, [r4, r0]
}





void ov70_02243768(void) {
    ov70_02242D44(6, 0x20);
    // str r0, [sp]
    sub_020198FC(*((u32*)(r4 + 0x1c)), 0, (0 - 4), 0);
    *((u32*)(r4 + 0x4c)) = 1;
    *((u32*)(r4 + 0x50)) = 0x11;
    *((u32*)(r4 + 0x48)) = 0xa;
    // sub r0, #0xb
    *((u16*)(r4 + 0x3c)) = 0xa;
    // add r1, #0x10
    ov70_02238F9C(*((u32*)(r4 + 0xc)), (*((u8*)(ov70_02245DF8 + (*((u32*)(r4 + 0x48)) << 1))) << 3), (*((u8*)(ov70_02245DF9 + (*((u32*)(r4 + 0x48)) << 1))) << 3), (*((u32*)(r4 + 0x48)) << 1));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0xc)), 0x31);
    // mvn r0, r0
}





void ov70_022437C8(void) {
    // add r1, #0x64
    // mvn r0, r0
    // str r2, [sp]
    // sub r0, #0x13
    // str r2, [sp]
    // sub r0, #0x14
    // mvn r0, r0
}





void ov70_02243848(void) {
    ov70_02241DB4(6);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 0);
    // ldrsh r2, [r4, r0]
    // sub r1, #0x3d
    // sub r0, #0x3e
    // sub r0, #0x3e
    GF_AssertFail(0, 0x3c);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x3e)) = 0;
    // str r2, [sp]
    sub_020198FC(*((u32*)(r4 + 0x1c)), 0, (3 - 7), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x18)), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0xc)), 0x32);
    *((u32*)(r4 + 0x4c)) = 2;
    *((u32*)(r4 + 0x50)) = 0x18;
    *((u32*)(r4 + 0x4c)) = 0x14;
    // mvn r0, r0
}





void ov70_022438D4(void) {
    ov70_02242D44(6, 0x10);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0xc)), 0x3d);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 1);
    // ldrsh r0, [r4, r0]
    *((u32*)(r4 + 0x48)) = 0x3c;
    // add r1, #0x10
    ov70_02238F9C(*((u32*)(r4 + 0xc)), (*((u8*)(ov70_02245DF8 + (0x3c << 1))) << 3), (*((u8*)(ov70_02245DF9 + (0x3c << 1))) << 3), (0x3c << 1));
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x18)), 1);
    *((u32*)(r4 + 0x4c)) = 0x11;
    // sub r0, #0x12
}





void ov70_02243928(void) {
    // str r0, [sp]
    sub_02019688(*((u32*)(r0 + 0x1c)), 0, 0x64, 0x20);
    sub_02019B08(*((u32*)(r5 + 0x1c)), 0);
    ov70_0224190C(r5, 5);
    // add r0, #0x64
    MI_CpuFill8(r5, 1, 0x1a);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r3, [r5, r3]
    // add r3, #0x6e
    ov70_02243E8C(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x24)), *((u32*)(r5 + 4)), 0x3c);
    // ldrsh r1, [r5, r1]
    // add r1, r4, r1
    ov70_02243FD4(r5, (*((u32*)(ov70_02245E84 + (0x3c << 2))) - 1), (0x3c << 2));
    // ldrsh r1, [r5, r1]
    // add r1, r5, r4
    // add r2, r2, r1
    // add r2, #0x63
    // ldrsh r1, [r5, r1]
    // add r1, r5, r4
    // add r2, r2, r1
    // add r2, #0x63
    // strb r1, [r2]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldrsh r3, [r5, r3]
    // add r2, r2, r7
    // add r3, r4, r3
    // add r3, r3, r6
    ov70_02243E8C(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x24)), *((u32*)(r5 + 4)), *((u32*)(ov70_02245FA0 - 4)));
    // add r7, #0x10
    // add r2, #0xe0
    ov70_02243EB8(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x24)), *((u32*)(r5 + 4)), 0x44);
    sub_020196E8(*((u32*)(r5 + 0x1c)), 0, 0x10, 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0xc)), 0x2f);
    // ldrsh r0, [r5, r0]
    *((u32*)(r5 + 0x48)) = 0;
    // add r1, #0x10
    ov70_02238F9C(*((u32*)(r5 + 0xc)), (*((u8*)(ov70_02245E26 + (*((u32*)(r5 + 0x48)) << 1))) << 3), (*((u8*)(ov70_02245E27 + (*((u32*)(r5 + 0x48)) << 1))) << 3), (*((u32*)(r5 + 0x48)) << 1));
    Sprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x18)), 1);
    *((u32*)(r5 + 0x4c)) = 0x15;
    // sub r0, #0x16
}





void ov70_02243A6C(void) {
    // add r1, #0x64
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02243A8A: ; jump table
    // mvn r0, r0
    // sub r0, #0x17
    // mvn r0, r0
}





void ov70_02243AC4(void) {
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // mvn r0, r0
}





void ov70_02243B1C(void) {
    // ldrsh r2, [r0, r1]
    // sub r1, #0x3f
}





void ov70_02243B2C(void) {
    // str r0, [sp]
    sub_02019688(*((u32*)(r0 + 0x1c)), 0, 0x64, 0x1e);
    sub_02019B08(*((u32*)(r4 + 0x1c)), 0);
    ov70_0224190C(r4, 3);
    // ldrsh r3, [r4, r3]
    // ldrsh r2, [r4, r2]
    // add r0, #0x34
    // add r2, r2, r3
    ov70_0223F904(r4, *((u32*)(r4 + 0x2c)), 0x3e, *((u32*)(ov70_02245E84 + (0x3c << 2))));
    *((u32*)(r4 + 0x5c)) = r0;
    ov70_0224352C(r4, 0, *((u32*)(r4 + 0x5c)));
    // add r0, #0x5a
    // strh r1, [r0]
    ov70_02242508(*((u32*)(r4 + 0x5c)), 5);
    // str r0, [sp]
    // ldrsh r3, [r4, r3]
    // add r2, #0x50
    ov70_02243F00(*((u32*)(r4 + 0x1c)), *((u32*)(r4 + 0x38)), *((u32*)(r4 + 4)), 0x5a);
    // add r2, #0xe0
    ov70_02243EB8(*((u32*)(r4 + 0x1c)), *((u32*)(r4 + 0x24)), *((u32*)(r4 + 4)), 0x44);
    sub_020196E8(*((u32*)(r4 + 0x1c)), 0, 1, 0);
    *((u32*)(r4 + 0x48)) = 0;
    ov70_02238F9C(*((u32*)(r4 + 0xc)), *((u8*)(ov70_02245D8A + (0 << 1))), *((u8*)(ov70_02245D8B + (0 << 1))), (0 << 1));
    ov70_02238F9C(*((u32*)(r4 + 0x10)), 0xb0, 0x88);
    ov70_02238F9C(*((u32*)(r4 + 0x14)), 0x58, 0x88);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 1);
    *((u32*)(r4 + 0x4c)) = 0x19;
    // sub r0, #0x1a
}





void ov70_02243C08(void) {
    // mvn r0, r0
    // str r2, [sp]
    // str r2, [sp]
    // add r5, #0x42
    // strh r4, [r5]
    // mvn r0, r0
}





void ov70_02243C8C(void) {
    ov70_02241DB4(3);
    ListMenuItems_Delete(*((u32*)(r4 + 0x34)));
    // ldrsh r0, [r4, r0]
    GF_AssertFail(0x3c);
    // ldrsh r0, [r4, r0]
    *((u32*)(r4 + 0x4c)) = 0x17;
    // mvn r0, r0
}





void ov70_02243CC8(void) {
    // ldrsh r0, [r4, r0]
}





void ov70_02243CEC(void) {
    *((u32*)(r0 + 0x48)) = 0;
    ov70_02242E58(0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0xc)), 0x31);
    ov70_02238F9C(*((u32*)(r4 + 0xc)), *((u8*)(ov70_02245D66 + (*((u32*)(r4 + 0x48)) << 1))), *((u8*)(ov70_02245D67 + (*((u32*)(r4 + 0x48)) << 1))), (*((u32*)(r4 + 0x48)) << 1));
    *((u32*)(r4 + 0x4c)) = 1;
    *((u32*)(r4 + 0x50)) = 0x1d;
    // sub r0, #0x1e
}





void ov70_02243D28(void) {
    // mvn r0, r0
    // str r2, [sp]
    // sub r0, #0x20
    // add r5, #0x44
    // strb r0, [r5]
    // str r2, [sp]
    // add r5, #0x44
    // strb r4, [r5]
    // mvn r0, r0
}





void ov70_02243D90(void) {
}





void ov70_02243DA0(void) {
    *((u32*)(r0 + 0x48)) = 0;
    ov70_02242EE4(0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0xc)), 0x31);
    ov70_02238F9C(*((u32*)(r4 + 0xc)), *((u8*)(ov70_02245D80 + (*((u32*)(r4 + 0x48)) << 1))), *((u8*)(ov70_02245D81 + (*((u32*)(r4 + 0x48)) << 1))), (*((u32*)(r4 + 0x48)) << 1));
    *((u32*)(r4 + 0x4c)) = 1;
    *((u32*)(r4 + 0x50)) = 0x20;
    // sub r0, #0x21
}





void ov70_02243DDC(void) {
    // mvn r0, r0
    // str r2, [sp]
    // sub r0, #0x23
    // add r5, #0x45
    // strb r0, [r5]
    // str r2, [sp]
    // ldrsh r0, [r5, r0]
    // add r5, #0x45
    // add r0, r4, r0
    // add r0, r1, r0
    // strb r0, [r5]
    // mvn r0, r0
}





void ov70_02243E74(void) {
    // ldrsb r0, [r4, r0]
}





void ov70_02243E8C(void) {
    // ldr r0, [sp, #0x1c]
    // ldr r3, [sp, #0x18]
    // str r0, [sp]
}





void ov70_02243EB8(void) {
    NewString_ReadMsgData(r1, r3);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 4, r0, 0);
    CopyWindowPixelsToVram_TextMode(r5);
    sub_02019A60(r6, 0, r5);
    String_Delete(r4);
}





void ov70_02243F00(void) {
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp]
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x20]
    // str r3, [sp, #8]
}





void ov70_02243F54(void) {
    // add r2, sp, #0
    // ldr r2, [sp]
}





void ov70_02243F7C(void) {
    // add r6, r0, r1
    // add r1, r4, r5
    ov70_02243F54(r0, (r1 << 3), *((u32*)(ov70_02245F5C + (r1 << 3))), (r1 << 2));
    ov70_02243F54(*((u32*)(r6 + 4)), r4);
}





void ov70_02243FD4(void) {
}





void ov70_02243FE0(void) {
    // add r6, r0, r1
    // add r1, r4, r5
    ov70_02243FD4(r0, (r1 << 3), *((u32*)(ov70_02245F5C + (r1 << 3))), (r1 << 2));
    ov70_02243FD4(*((u32*)(r6 + 4)), r4);
}





void ov70_02244038(void) {
    ov70_02244670();
    // and r0, r1
    // strh r0, [r2]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    ov70_022441A4(*((u32*)(r4 + 4)));
    ov70_022442B4(r4);
    ov70_0224458C(r4);
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_EngineATogglePlanes(2, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(8, 0);
    GfGfx_EngineBTogglePlanes(1, 1);
    GfGfx_EngineBTogglePlanes(2, 1);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(8, 0);
    ov00_021EC5B4();
    sub_02039418(*((u32*)(*((u32*)r4) + 0x20)), *((u32*)r4));
    // str r0, [sp]
    ov70_02244FA4(r4, *((u32*)(r4 + 0x00000BA8)), 1, 1);
    ov70_02238D84(r4, 0xc, 2);
    ov70_02238F64(r4);
    Sys_ClearSleepDisableFlag(4);
    *((u32*)(r4 + 0x2c)) = 0;
    sub_02039418(*((u32*)(*((u32*)r4) + 0x20)));
    ov70_02245124(r4);
    *((u32*)(r4 + 0x2c)) = 0x11;
}





void ov70_02244124(void) {
    ov70_02238E44();
    sub_0203A930();
    // blx r1
    // strh r2, [r5, r1]
    // strh r2, [r5, r1]
}





void ov70_02244154(void) {
    SysTask_Destroy(*((u32*)(r0 + 0x000012D0)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    ov70_022446A8(r4, 0);
    ov70_02244644(r4);
    ov70_02244290(*((u32*)(r4 + 4)));
    // str r1, [r4, r0]
    ov70_02238E58(r4, 0);
}





void ov70_022441A4(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x54
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r0, 0, r3, 0);
    GfGfx_EngineATogglePlanes(1, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    GfGfx_EngineATogglePlanes(2, 0);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    GfGfx_EngineBTogglePlanes(1, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    GfGfx_EngineBTogglePlanes(2, 0);
    BG_ClearCharDataRange(0, 0x20, 0, 0x3d);
    BG_ClearCharDataRange(4, 0x20, 0, 0x3d);
    GfGfx_EngineBTogglePlanes(0x10, 0);
}





void ov70_02244290(void) {
}





void ov70_022442B4(void) {
    // str r0, [sp, #0x10]
    NARC_New(0x58, 0x3d);
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #0x2c]
    GfGfxLoader_GXLoadPalFromOpenNarc(3, 0, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_GXLoadPalFromOpenNarc(0x3d, 3, 4, 0);
    LoadFontPal1(0, (0x1a << 4), 0x3d);
    LoadFontPal1(4, (0x1a << 4), 0x3d);
    // ldr r0, [sp, #0x10]
    Options_GetFrame(*((u32*)(*((u32*)r0) + 0x24)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r4, 0, 1, 0xe);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(r4, 0, 0x1f, 0xb);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_LoadCharDataFromOpenNarc(0x3d, 2, r4, 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_LoadScrnDataFromOpenNarc(0x3d, 6, r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_LoadCharDataFromOpenNarc(0x3d, 0xb, r4, 5);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    GfGfxLoader_LoadScrnDataFromOpenNarc(0x3d, 0xc, r4, 5);
    BG_SetMaskColor(0, 0);
    BG_SetMaskColor(4, 0);
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    MI_CpuFill8(0, (0x33 << 4));
    // ldr r0, [sp, #0x2c]
    // add r2, sp, #0x38
    GfGfxLoader_GetPlttDataFromOpenNarc(5, 0x3d);
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x10]
    // add r1, r1, r2
    MIi_CpuCopy16(*((u32*)(r0 + 0xc)), 0x80);
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x10]
    // add r1, r1, r2
    MIi_CpuCopy16(*((u32*)(r0 + 0xc)), 0x80);
    Heap_Free(r4);
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // sub r1, #0x80
    // add r0, r0, r1
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x24]
    GF_AssertFail((0 + 1), ((0 + 1) << 5));
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // asr r0, r0, #8
    // str r0, [sp, #0x34]
    // ldr r3, [sp, #0x34]
    // str r0, [sp]
    BlendPalette((r0 + 2), (r0 + 2), 1);
    // ldr r0, [sp, #0x18]
    // add r0, #0x20
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // add r1, r1, r0
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // add r0, #0x20
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    DC_FlushRange((1 + 1), (0x2a << 4));
    // ldr r0, [sp, #0x10]
    // str r2, [r0, r1]
    // str r3, [r0, r2]
    // ldr r1, [sp, #0x10]
    // add r1, r1, r2
    SysTask_CreateOnVBlankQueue(ov70_022444E4, 0x000012D4, 0x14, 0);
    // ldr r1, [sp, #0x10]
    // str r0, [r1, r2]
    // ldr r0, [sp, #0x2c]
    NARC_Delete(0x000012D0);
}





void ov70_022444E4(void) {
    // eor r2, r0
    // strb r2, [r4, r1]
    // tst r0, r2
    // ldrsh r0, [r4, r0]
    // add r2, #0x88
    // add r0, r2, r0
    GX_LoadBGPltt(((0x0000032B - 3) << 5), 0, 0x20);
    // ldrsh r0, [r4, r0]
    // add r1, #0x88
    // add r0, r1, r0
    GXS_LoadBGPltt(((0xca << 2) << 5), 0, 0x20);
    // ldrsb r1, [r4, r0]
    // ldrsh r1, [r4, r1]
    // strh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // strh r2, [r4, r1]
    // ldrsb r2, [r4, r0]
    // eor r1, r2
    // strb r1, [r4, r0]
    // ldrsh r1, [r4, r1]
    // strh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // strh r2, [r4, r1]
    // ldrsb r1, [r4, r0]
    // eor r1, r2
    // strb r1, [r4, r0]
}





void ov70_0224458C(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r0 + 4)), 0x00000F48, 0, 4);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000F48, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 4)), 0x00000F38, 0, 4);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000F38, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    ov70_02245050(0x00000F38, *((u32*)(r4 + (0x2f << 6))), 0, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 4)), 0x00000F18, 0, 2);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000F18, 0);
}





void ov70_02244644(void) {
    // add r0, r4, r0
    RemoveWindow(0x00000F18);
    // add r0, r4, r0
    RemoveWindow(0x00000F38);
    // add r0, r4, r0
    RemoveWindow(0x00000F48);
}





void ov70_02244670(void) {
    String_New(0xb4, 0x3d);
    // str r0, [r4, r1]
    String_New((1 << 8), 0x3d);
    // str r0, [r4, r1]
    // sub r1, #0x4c
    NewString_ReadMsgData(*((u32*)(r4 + 0x00000BEC)), 0x1f);
    // str r0, [r4, r1]
}





void ov70_022446A8(void) {
    String_Delete(*((u32*)(r0 + (0x2f << 6))));
    String_Delete(*((u32*)(r4 + 0x00000BEC)));
    String_Delete(*((u32*)(r4 + 0x00000BBC)));
}





void ov70_022446D0(void) {
    // str r1, [sp]
    ov70_02244FA4(*((u32*)(r0 + 0x00000BAC)), 0x11, 1);
    ov70_02238D84(r4, 0xd, 1);
    // strh r1, [r4, r0]
}





void ov70_02244708(void) {
    ov70_02238C8C();
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    // str r0, [sp]
    ov70_02244FA4(r4, *((u32*)(r4 + 0x00000BA8)), 1, 1);
    ov70_02238D84(r4, 0xc, 2);
    ov70_02238F64(r4);
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    sub_0203946C();
    ov70_02238E50(r4, 0, 0);
    *((u32*)(r4 + 0x2c)) = 0xb;
}





void ov70_02244774(void) {
    // str r1, [sp]
    ov70_02244FA4(*((u32*)(r0 + (0xba << 4))), 7, 1);
    ov70_02238D84(r4, 0xd, 0x10);
}





void ov70_022447A0(void) {
    Handle2dMenuInput_DeleteOnFinish(*((u32*)(r0 + 0x000011B0)), 0x3d);
    // mvn r1, r1
    ov00_021EC5B4((0 - 1));
    *((u32*)(r4 + 0x2c)) = 0;
    ov70_02238E50(r4, 7, 0xb);
    *((u32*)(r4 + 0x1c)) = 1;
    *((u32*)(r4 + 0x2c)) = 0xb;
    ov00_021EC5B4(0xb);
    ov00_021EC8D8();
    sub_0203946C();
    ov70_02238E50(r4, 0, 0);
    *((u32*)(r4 + 0x2c)) = 0xb;
}





void ov70_02244804(void) {
    // str r1, [sp]
    ov70_02244FA4(*((u32*)(r0 + 0x00000BAC)), 0x1a, 1);
    ov70_02238D84(r4, 0xc, 0x12);
}





u32 ov70_02244834(void) {
}





void ov70_02244854(void) {
    sub_0203A914();
    // str r0, [sp]
    ov70_02244FA4(r4, *((u32*)(r4 + 0x00000BAC)), 0x1b, 1);
    ov70_02238D84(r4, 0x14, 0xb);
}





void ov70_02244888(void) {
}





void ov70_022448C0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022448E6: ; jump table
    // add r0, sp, #8
    // add r1, sp, #4
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, sp, #0
    // sub r0, #0x17
    // add r0, sp, #0xc
}





void ov70_02244944(void) {
}





void ov70_02244954(void) {
    ov00_021ECDC8();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224496E: ; jump table
    *((u32*)(r4 + 0x2c)) = 6;
    ov70_02238F80(r4);
    // add r0, sp, #4
    // add r1, sp, #0
    ov00_021EC11C();
    *((u32*)(r4 + 0x40)) = r0;
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 0x44)) = r0;
    ov00_021EC210();
    ov00_021EC8D8();
    *((u32*)(r4 + 0x2c)) = 0x17;
    // ldr r1, [sp]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022449B2: ; jump table
    *((u32*)(r4 + 0x2c)) = 0x17;
    ov00_021FA0D8(0x17, (*((u16*)(r1 + 6)) << 0x10));
    *((u32*)(r4 + 0x2c)) = 0x17;
    *((u32*)(r4 + 0x2c)) = 0x17;
    ov00_021ED9B4(0x17);
    *((u32*)(r4 + 0x2c)) = 0x17;
    sub_020399EC(0x17);
    // ldr r1, [sp, #4]
    *((u32*)(r4 + 0x2c)) = 0x17;
}





void ov70_02244A04(void) {
}





void ov70_02244A4C(void) {
}





void ov70_02244A68(void) {
    ov70_02237F38();
    ov70_02237F58();
    // str r1, [r4, r0]
    // add r0, #0xf
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02244A94: ; jump table
    *((u32*)(r4 + 0x2c)) = 9;
    ov70_02238F80(r4, 0);
    *((u32*)(r4 + 0x3c)) = r5;
    *((u32*)(r4 + 0x2c)) = 0x15;
    ov70_02238F80(r4);
    *((u32*)(r4 + 0x3c)) = r5;
    *((u32*)(r4 + 0x2c)) = 0x15;
    ov70_02238F80(r4);
    *((u32*)(r4 + 0x3c)) = r5;
    *((u32*)(r4 + 0x2c)) = 0x15;
    ov70_02238F80(r4);
    *((u32*)(r4 + 0x3c)) = r5;
    *((u32*)(r4 + 0x2c)) = 0x15;
    ov70_02238F80(r4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00001604)));
}





void ov70_02244B20(void) {
    // add r1, r4, r1
    sub_0203189C(*((u32*)(*((u32*)r0) + 0x20)), 0x00001260);
    // add r0, r4, r1
    // add r1, #0x64
    // add r1, r4, r1
    ov70_02238304(0x00001260);
    *((u32*)(r4 + 0x2c)) = 0xa;
    // str r1, [r4, r0]
}





void ov70_02244B54(void) {
    ov70_02237F38();
    ov70_02237F58();
    // str r1, [r4, r0]
    // add r0, #0xf
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02244B82: ; jump table
    ov70_02238F80(r4, 0);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02244BD2: ; jump table
    ov70_02238E50(r4, 1, 0);
    *((u32*)(r4 + 0x2c)) = 0xb;
    *((u32*)(r4 + 0x3c)) = 0xFFFFEC75;
    *((u32*)(r4 + 0x2c)) = 0x15;
    *((u32*)(r4 + 0x3c)) = 0xFFFFEC78;
    *((u32*)(r4 + 0x2c)) = 0x15;
    *((u32*)(r4 + 0x3c)) = 0xFFFFEC77;
    *((u32*)(r4 + 0x2c)) = 0x15;
    sub_020399EC(0x15);
    *((u32*)(r4 + 0x3c)) = 0xFFFFEC74;
    *((u32*)(r4 + 0x2c)) = 0x15;
    *((u32*)(r4 + 0x3c)) = 0xFFFFEC73;
    *((u32*)(r4 + 0x2c)) = 0x15;
    ov70_02238F80(r4);
    sub_020399EC();
    ov70_02238F80(r4);
    *((u32*)(r4 + 0x3c)) = r5;
    *((u32*)(r4 + 0x2c)) = 0x15;
    ov70_02238F80(r4);
    *((u32*)(r4 + 0x3c)) = r5;
    *((u32*)(r4 + 0x2c)) = 0x15;
    ov70_02238F80(r4);
    *((u32*)(r4 + 0x3c)) = r5;
    *((u32*)(r4 + 0x2c)) = 0x15;
    ov70_02238F80(r4);
    *((u32*)(r4 + 0x3c)) = r5;
    *((u32*)(r4 + 0x2c)) = 0x15;
    ov70_02238F80(r4);
    sub_020399EC();
    // str r1, [r4, r0]
    sub_020399EC((0xe1 << 4), *((u32*)(r4 + 0x00001604)));
}





void ov70_02244CA8(void) {
    // neg r0, r0
    // neg r2, r2
}





void ov70_02244CCC(void) {
    // tst r0, r1
    // tst r0, r1
    // add r0, r4, r0
    sub_0200E5D4(0x00000F48, 0);
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov70_02244D08(void) {
    sub_0203A914();
    ov70_02238F80(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u32*)(r4 + 0x2c)) = 0;
    // str r1, [r4, r0]
}





void ov70_02244D44(void) {
    ov70_02238C8C();
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    ov70_02238E50(r4, 0, 0);
    *((u32*)(r4 + 0x2c)) = 0xb;
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x000011C8)));
    *((u32*)(r4 + 0x2c)) = 0;
}





void ov70_02244D80(void) {
    // mvn r2, r2
    // add r1, r0, r1
    // bmi _02244DFE
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02244DAA: ; jump table
    // mvn r1, r1
    // add r1, #9
    // add r1, #9
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02244DE6: ; jump table
    // str r0, [sp]
    ov70_02244FA4(r0, *((u32*)(r0 + (0xba << 4))), 0xb8, 1);
    ov70_02238D84(r4, 0xc, 0x16);
}





void ov70_02244E44(void) {
    // ldrsh r1, [r4, r1]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02244E60: ; jump table
    // str r1, [sp]
    ov70_02244FA4(*((u32*)(r0 + (0xba << 4))), 0xba, 1);
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    TextPrinterCheckActive(((*((u32*)(r4 + (0xbf << 4))) << 0x18) >> 0x18), (r1 + 1));
    sub_0203946C();
    ov00_021EC8D8();
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // str r1, [sp]
    ov70_02244FA4((0x16 << 8), *((u32*)(r4 + (0xba << 4))), 0xbb, 1);
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    TextPrinterCheckActive(((*((u32*)(r4 + (0xbf << 4))) << 0x18) >> 0x18), (r1 + 1));
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    ov70_02238E50(r4, 0, 0);
    *((u32*)(r4 + 0x2c)) = 0xb;
}





void ov70_02244F14(void) {
}





void ov70_02244F34(void) {
    // str r1, [r4, r0]
}





void ov70_02244F68(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + (0xbf << 4))) << 0x18) >> 0x18));
    // str r0, [sp]
    ov70_02238C14(*((u32*)(r4 + 4)), 0xa, (0x8d << 2), 8);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x2c)) = *((u32*)(r4 + 0x30));
}





void ov70_02244FA4(void) {
    NewString_ReadMsgData(r1, r2);
    // add r1, #0x20
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B9C)), *((u32*)(r5 + 0x00000B9C)), r0);
    String_Delete(r6);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000F18, 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow2(0x00000F18, 0, 1, 0xe);
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized(0x00000F18, 1, *((u32*)(r5 + 0x00000BBC)), 0);
    // str r0, [r5, r1]
    // str r1, [r5, r0]
}





void ov70_02245018(void) {
    // ldr r0, [sp, #0xc]
    // sub r1, r1, r0
    // add r0, r1, r0
    // asr r2, r0, #1
    // ldr r0, [sp, #0xc]
    // sub r2, r1, r0
}





void ov70_02245050(void) {
    // ldr r3, [sp, #0x24]
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r3, [sp, #0x20]
    // str r4, [sp]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
}





void ov70_02245084(void) {
    // ldr r3, [sp, #0x24]
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r3, [sp, #0x20]
    // str r4, [sp]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
}





void ov70_022450B8(void) {
    // ldr r3, [sp, #0x24]
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r3, [sp, #0x20]
    // str r4, [sp]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
}





void ov70_022450EC(void) {
    NewString_ReadMsgData(r1, *((u32*)(ov70_0224600C + (r2 << 2))), (r2 << 2));
    // str r2, [sp]
    // str r0, [sp, #4]
    ov70_02245084(r5, r0, 0, 0);
    String_Delete(r4);
}





void ov70_02245124(void) {
}





void ov70_0224512C(void) {
    String_New((1 << 8), 0x3d);
    ReadMsgDataIntoString(*((u32*)(r5 + 0x00000BAC)), r6, r0);
    // add r1, #0x50
    StringExpandPlaceholders(*((u32*)(r5 + 0x00000B9C)), *((u32*)(r5 + 0x00000B9C)), r4);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000F48, 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow1(0x00000F48, 1, 0x1f, 0xb);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized(0x00000F48, 1, *((u32*)(r5 + 0x00000BEC)), 0);
    // str r0, [r5, r1]
    String_Delete(r4, (0xbf << 4));
}





void ov70_022451A8(void) {
    // mvn r0, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r0 + 0x00000B9C)), 0, 5);
    // add r0, r5, r0
    ClearFrameAndWindow2(0x00000F18, 1);
    ov70_0224512C(r5, r4);
}




