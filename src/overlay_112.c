/* Decompiled from asm/overlay_112.s */
#include "global.h"

void ov112_021E5900(void) {
}





void ov112_021E5938(void) {
    *((u32*)(_021FF9E0 + 0x18)) = 1;
    *((u32*)(_021FF9E0 + 0x10)) = (*((u32*)(_021FF9E0 + 0x10)) + 1);
}





void ov112_021E594C(void) {
    *((u8*)r0) = r1;
}





void ov112_021E5964(void) {
    *((u8*)r0) = r1;
}





void ov112_021E59A8(void) {
}





void ov112_021E59B4(void) {
    *((u8*)r4) = r2;
    *((u8*)r3) = r2;
    // eor r2, r0
    // strb r2, [r3, r1]
}





void ov112_021E5A14(void) {
    *((u32*)sp) = r0;
    // blx r1
}





void ov112_021E5A5C(void) {
}





void ov112_021E5A68(void) {
}





void ov112_021E5A80(void) {
}





void ov112_021E5A84(void) {
    // b _021E5AB2
    // b _021E5ABC
}





void ov112_021E5AD0(void) {
    // sub r3, r0, r3
    // sbc r1, r2
    // sub r0, r0, r2
    // sbc r1, r3
}





void ov112_021E5B28(void) {
    *((u8*)(r1 + r0)) = ((s32)(r4) >> 8);
}





void ov112_021E5B98(void) {
    // sub r0, #0xf6
    *((u32*)sp) = ((s32)((((s32)((r0 + r0)) >> 0x10) + ((s32)((r0 + r0)) >> 0x10))) >> 0x10);
    *((u32*)sp) = ((s32)((((s32)((r0 + r0)) >> 0x10) + ((s32)((r0 + r0)) >> 0x10))) >> 0x10);
    // eor r2, r1
    *((u32*)sp) = r1;
    // eor r1, r2
    // blx r2
    // sub r4, #8
    // blx r4
}





void ov112_021E5D38(void) {
    *((u32*)(_021FF9E0 + 0xc)) = r0;
}





void ov112_021E5D44(void) {
    *((u32*)(_021FF9E0 + 0x1c)) = r0;
}





void ov112_021E5D50(void) {
    *((u32*)(_021FF9E0 + 0x14)) = r0;
}





void ov112_021E5D5C(void) {
    *((u8*)r1) = r0;
}





void ov112_021E5D68(void) {
}





void ov112_021E5D8C(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 4)) = ((*((u32*)sp) + 0x7f) + ((s32)((*((u32*)sp) + 0x7f)) >> 6));
    *((u8*)r5) = ((*((u32*)sp) + 0x7f) + ((s32)((*((u32*)sp) + 0x7f)) >> 6));
    *((u8*)r5) = ((*((u32*)sp) + 0x7f) + ((s32)((*((u32*)sp) + 0x7f)) >> 6));
    *((u8*)r5) = ((*((u32*)sp) + 0x7f) + ((s32)((*((u32*)sp) + 0x7f)) >> 6));
    // sub r0, r0, r4
    *((u32*)sp) = *((u32*)sp);
    *((u32*)(sp + 8)) = (*((u32*)sp) + 0x7f);
}





void ov112_021E5E18(void) {
    *((u32*)(ov112_021FFAA4 + 0x14)) = r0;
}





void ov112_021E5E28(void) {
}





void ov112_021E5E48(void) {
    // sub r2, r2, r0
    // sbc r3, r1
    // sub r2, r0, r2
    // sbc r1, r3
    // and r1, r4
    // and r0, r4
    // and r2, r3
}





void ov112_021E5EB8(void) {
    *((u32*)(ov112_021FFAA4 + 0x20)) = r0;
    *((u32*)(ov112_021FFAA4 + 0x24)) = r1;
}





void ov112_021E5EC4(void) {
}





void ov112_021E5EEC(void) {
    // and r1, r0
    // sub r0, r0, r1
    *((u8*)(sp + 0)) = r4;
    // and r3, r2
    // and r3, r1
    // and r2, r4
    // sub r1, r1, r5
}





void ov112_021E6004(void) {
    // sub r3, r0, r3
    // sbc r1, r2
    // sub r1, #0xb4
}





void ov112_021E6134(void) {
    *((u8*)(sp + 0)) = ((s32)(r2) >> 8);
}





void ov112_021E6164(void) {
    // sub r3, r0, r3
    // sbc r1, r2
    // sub r0, #0x46
    // and r1, r2
    // and r7, r1
    // and r2, r1
    // and r0, r1
    // and r3, r2
    // and r0, r2
    // and r4, r1
    *((u32*)r5) = ((s32)((r0 + r0)) >> 0x10);
    // and r4, r3
    // and r5, r1
    // and r1, r2
    // and r5, r2
    // and r4, r2
    // and r1, r2
    *((u32*)(((s32)((r0 + r0)) >> 0x10) + 0x8c)) = ((s32)(r2) >> 8);
    // and r2, r3
    *((u16*)(((s32)(r2) >> 8) + 0x78)) = r2;
    // and r2, r3
    *((u16*)(((s32)(r2) >> 8) + 0x7a)) = r2;
    // and r5, r2
    // and r4, r2
    // and r1, r2
    // and r3, r1
    // and r2, r1
    // and r4, r7
    *((u32*)(((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80)) = r2;
    // sub r0, #0xb0
    // sub r2, #0xb0
    // add r2, pc
    // add pc, r2
    // add r1, pc
    // add pc, r1
    // and r5, r4
    // and r0, r4
    *((u8*)(((s32)((r0 + r0)) >> 0x10) + r5)) = ((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10)));
    // add r1, pc
    // add pc, r1
    // and r5, r3
    // and r0, r3
    *((u8*)r4) = (((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10) + (((s32)((((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10))) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10))))) >> 0x10) + ((((s32)((r2 + r2)) >> 0x10) + 0xb8) + 0xd4)));
    // add r1, pc
    // add pc, r1
    // and r5, r3
    // and r0, r3
    *((u8*)r4) = (((s32)((((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10) + ((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10))) >> 0x10) + (((s32)(((((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10) + (((s32)((((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10))) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10))))) >> 0x10) + ((((s32)((r2 + r2)) >> 0x10) + 0xb8) + 0xd4))) + (((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10) + (((s32)((((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10))) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10))))) >> 0x10) + ((((s32)((r2 + r2)) >> 0x10) + 0xb8) + 0xd4))))) >> 0x10) + ((((((s32)((r2 + r2)) >> 0x10) + 0xb8) + 0xd4) + 0xb8) + 0xd4)));
    // add r1, pc
    // add pc, r1
    // and r5, r3
    // and r0, r3
    *((u8*)r4) = (((s32)((((s32)((((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10) + ((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10))) >> 0x10) + ((s32)((((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10) + ((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10))) >> 0x10))) >> 0x10) + (((s32)(((((s32)((((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10) + ((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10))) >> 0x10) + (((s32)(((((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10) + (((s32)((((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10))) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10))))) >> 0x10) + ((((s32)((r2 + r2)) >> 0x10) + 0xb8) + 0xd4))) + (((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10) + (((s32)((((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10))) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10))))) >> 0x10) + ((((s32)((r2 + r2)) >> 0x10) + 0xb8) + 0xd4))))) >> 0x10) + ((((((s32)((r2 + r2)) >> 0x10) + 0xb8) + 0xd4) + 0xb8) + 0xd4))) + (((s32)((((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10) + ((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10))) >> 0x10) + (((s32)(((((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10) + (((s32)((((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10))) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10))))) >> 0x10) + ((((s32)((r2 + r2)) >> 0x10) + 0xb8) + 0xd4))) + (((s32)(((((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))) + (((s32)((r2 + r2)) >> 0x10) + (r2 + (((((s32)(r2) >> 8) + 0x7a) + 0x80) + 0x80))))) >> 0x10) + (((s32)((((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10))) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((((s32)((r0 + r0)) >> 0x10) + r5) + ((s32)((r2 + r2)) >> 0x10))))) >> 0x10) + ((((s32)((r2 + r2)) >> 0x10) + 0xb8) + 0xd4))))) >> 0x10) + ((((((s32)((r2 + r2)) >> 0x10) + 0xb8) + 0xd4) + 0xb8) + 0xd4))))) >> 0x10) + ((((((((s32)((r2 + r2)) >> 0x10) + 0xb8) + 0xd4) + 0xb8) + 0xd4) + 0xb8) + 0xd4)));
}





void ov112_021E6A6C(void) {
    // sub r1, #0xb0
    // bmi _021E6BCE
    // add r1, pc
    // add pc, r1
    *((u8*)(sp + 0)) = ((s32)((r1 + r1)) >> 0x10);
}





void ov112_021E6BDC(void) {
    *((u32*)(ov112_021FFB24 + 0x20)) = *((u32*)(ov112_021FFB24 + 0x24));
    *((u32*)(ov112_021FFB24 + 0x28)) = *((u32*)(ov112_021FFB24 + 0x2c));
    *((u16*)(ov112_021FFB24 + 0x30)) = *((u16*)(ov112_021FFB24 + 0x32));
    *((u16*)(ov112_021FFB24 + 0x36)) = 0;
    *((u16*)(ov112_021FFB24 + 0x3a)) = 0;
}





void ov112_021E6BF8(void) {
    // sub r0, #0xb0
    // sub r2, #0x10
}





void ov112_021E6F60(void) {
    // sub r0, #0xa0
    // bmi _021E7064
    // and r1, r0
    // and r3, r6
    // and r2, r5
    // sub r0, #0xb0
    // sub r1, r1, r4
}





void ov112_021E7398(void) {
    OS_LockMutex(ov112_021FFB08);
    ov112_021E5B98();
    ov112_021E5E18(r4);
    OS_UnlockMutex(r5);
    OS_Sleep(r6);
}





void ov112_021E73C8(void) {
    *((u32*)sp) = r4;
    *((u32*)(sp + 4)) = r6;
}





void ov112_021E7464(void) {
    OS_LockMutex(ov112_021FFB08);
    OS_KillThread(ov112_021FFBD8, 0);
    OS_UnlockMutex(ov112_021FFB08);
}





void ov112_021E7484(void) {
    *((u8*)(ov112_021FFB24 + 0x1c)) = 0x2a;
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x2a;
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x2c;
}





void ov112_021E74A8(void) {
}





void ov112_021E7548(void) {
}





void ov112_021E7594(void) {
}





void ov112_021E7620(void) {
}





void ov112_021E7668(void) {
}





void ov112_021E7670(void) {
}





void ov112_021E768C(void) {
}





void ov112_021E76A8(void) {
    ov112_021E59A8(ov112_021FFAA4);
    *((u32*)(ov112_021FFAA4 + 0x14)) = 1;
}





void ov112_021E76CC(void) {
    // and r2, r1
    *((u32*)r0) = r2;
    // and r1, r2
    *((u32*)r3) = r1;
    *((u16*)(r0 + 0x50)) = r1;
    *((u16*)(r3 + 0x50)) = r1;
}





void ov112_021E7768(void) {
    // and r0, r1
    *((u16*)r2) = r0;
}





void ov112_021E77E4(void) {
    *((u32*)(r4 + r0)) = r1;
}





void ov112_021E7830(void) {
    // add r1, pc
    // add pc, r1
    *((u32*)r5) = r0;
    // blx r1
    *((u32*)r5) = r0;
    // blx r1
    *((u32*)r5) = r0;
    // blx r1
    *((u32*)r5) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)r5) = r0;
    *((u32*)r4) = r0;
}





void ov112_021E7910(void) {
    OverlayManager_GetData();
    TextFlags_SetCanABSpeedUpPrint(0);
    TextFlags_SetCanTouchSpeedUpPrint(0);
    ov112_021E77E4(r4);
    OverlayManager_FreeData(r5);
    Main_SetVBlankIntrCB(0, 0);
    Heap_Destroy(0x9a);
    sub_0201A738(0x10);
    RegisterMainOverlay(FS_OVERLAY_ID, gApplication_TitleScreen);
}





void ov112_021E795C(void) {
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021E79A8(void) {
    *((u32*)(r3 + r1)) = r0;
}





void ov112_021E79D0(void) {
}





void ov112_021E79F0(void) {
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    InitBgFromTemplate(r4, 1, ov112_021F3704, 0);
    InitBgFromTemplate(r4, 2, ov112_021F3720, 0);
    InitBgFromTemplate(r4, 3, ov112_021F373C, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    BgClearTilemapBufferAndCommit(r4, 2);
    BgClearTilemapBufferAndCommit(r4, 3);
    InitBgFromTemplate(r4, 4, ov112_021F3758, 0);
    InitBgFromTemplate(r4, 5, ov112_021F3774, 0);
    InitBgFromTemplate(r4, 6, ov112_021F3790, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    BgClearTilemapBufferAndCommit(r4, 5);
    BgClearTilemapBufferAndCommit(r4, 6);
    BG_ClearCharDataRange(4, 0x20, 0, 0x9a);
    BG_ClearCharDataRange(5, 0x20, 0, 0x9a);
    BG_ClearCharDataRange(6, 0x20, 0, 0x9a);
}





void ov112_021E7AC8(void) {
}





void ov112_021E7B18(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}





void ov112_021E7C18(void) {
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021E7C6C(void) {
    String_Delete(*((u32*)(r0 + 0x0001E454)));
    DestroyMsgData(*((u32*)(r4 + 0x0001E450)));
    DestroyMsgData(*((u32*)(r4 + 0x0001E44C)));
    MessageFormat_Delete(*((u32*)(r4 + 0x0001E448)));
}





void ov112_021E7CA4(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021E7CC8(void) {
    *((u32*)(r5 + r1)) = r0;
    // mov r2, #GAME_VERSION
    // strh r2, [r5, r0]
    // strb r2, [r5, r0]
    // strb r0, [r5, r1]
    *((u32*)(r5 + (r1 + 0x5a))) = (((r0 + 8) + 0x5b) + 0x5b);
    *((u32*)(r5 + (((r0 + 8) + 0x5b) + 0x5b))) = (r5 + ((r1 + 0x5a) + 0x3c));
    // mov r1, #GAME_VERSION
    // strh r1, [r5, r0]
}





void ov112_021E7D7C(void) {
}





void ov112_021E7DA4(void) {
}





void ov112_021E7DC0(void) {
    *((u32*)(r4 + r0)) = (r4 + r1);
    // mov r1, #GAME_VERSION
    // strh r1, [r4, r0]
}





void ov112_021E7DFC(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r3;
    *((u32*)(sp + 0x10)) = r3;
    *((u32*)sp) = (sp + 0x14);
    *((u32*)(sp + 4)) = (sp + 0x14);
    *((u32*)(sp + 8)) = (sp + 0x14);
    *((u32*)(sp + 0xc)) = (sp + 0x14);
}





void ov112_021E8B74(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 0x30)) = *((u32*)(sp + 0x30));
    *((u32*)(sp + 4)) = r2;
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 0x30));
    *((u32*)(sp + 8)) = r7;
    // sub r1, r1, r2
    // ror r1, r0
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x10));
    // strb r0, [r1, r7]
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x14));
    *((u16*)r5) = *((u32*)(sp + 0x14));
    // and r1, r2
    // and r0, r2
    *((u16*)*((u32*)sp)) = *((u32*)(sp + 0x30));
    // strb r1, [r0, r7]
    *((u32*)(sp + 8)) = *((u32*)(sp + 8));
    *((u32*)sp) = *((u32*)sp);
}





void ov112_021E8C5C(void) {
    *((u16*)r4) = r0;
}





void ov112_021E8CB8(void) {
    *((u32*)(sp + 0x28)) = r0;
    *((u32*)(sp + 0x24)) = r0;
    *((u32*)(sp + 0x2c)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0x2c)) = *((u32*)(sp + 0x2c));
    *((u16*)r7) = *((u32*)(sp + 0x2c));
    // and r0, r2
    *((u8*)(((r1 + 0xe6) + 0x36) + 0x26)) = *((u32*)(sp + 0x2c));
    // and r0, r2
    *((u32*)(sp + 0x20)) = (((r1 + 0xe6) + 0x36) + 0x26);
    *((u32*)(sp + 0x1c)) = *((u32*)(sp + 0x20));
    *((u8*)(*((u32*)(sp + 0x20)) + 0x27)) = (((r1 + 0xe6) + 0x36) + 0x26);
    *((u32*)sp) = (sp + 0x3c);
    *((u32*)(sp + 0x14)) = (sp + 0x40);
    *((u32*)(sp + 0x34)) = (r7 + (sp + 0x40));
    *((u32*)sp) = ((r7 + (sp + 0x40)) + 0x52);
    *((u32*)(sp + 0x30)) = ((r7 + (sp + 0x40)) + 0x52);
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x14));
    *((u32*)sp) = (((sp + 0x40) + 0x10) + *((u32*)(sp + 0x20)));
    *((u32*)(sp + 0x18)) = (*((u32*)(sp + 0x14)) + 0x72);
    *((u32*)(sp + 0x38)) = (r7 + (*((u32*)(sp + 0x14)) + 0x72));
    *((u32*)sp) = (r7 + (*((u32*)(sp + 0x14)) + 0x72));
    *((u32*)(sp + 4)) = (r7 + (*((u32*)(sp + 0x14)) + 0x72));
    *((u32*)(sp + 8)) = (r7 + (*((u32*)(sp + 0x14)) + 0x72));
    *((u32*)(sp + 0xc)) = (r7 + (*((u32*)(sp + 0x14)) + 0x72));
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x18));
    *((u16*)((*((u32*)(sp + 0x24)) + 0x80) + 0x8c)) = ((((sp + 0x40) + 0x10) + *((u32*)(sp + 0x30))) + *((u32*)(sp + 0x24)));
    *((u16*)((((*((u32*)(sp + 0x24)) + 0x80) + 0x8c) + 0x82) + 0xa0)) = ((((sp + 0x40) + 0x10) + *((u32*)(sp + 0x30))) + *((u32*)(sp + 0x24)));
    *((u8*)((r7 + (((sp + 0x40) + 0x10) + *((u32*)(sp + 0x20)))) + 0xb4)) = ((((sp + 0x40) + 0x10) + *((u32*)(sp + 0x30))) + *((u32*)(sp + 0x24)));
    *((u32*)sp) = *((u32*)(sp + 0x1c));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x1c));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x1c));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x1c));
    // sub r2, #0x3e
    *((u32*)sp) = (((sp + 0x40) + 0x10) + *((u32*)(sp + 0x20)));
    *((u32*)sp) = ((((sp + 0x40) + 0x10) + *((u32*)(sp + 0x20))) + 0x18);
    *((u32*)sp) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x24));
    *((u32*)sp) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x24));
}





void ov112_021E90FC(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r1;
}





void ov112_021E9148(void) {
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0x14)) = r1;
    *((u32*)(sp + 0x18)) = r2;
    *((u32*)(sp + 0x1c)) = r3;
    *((u32*)(sp + 0x20)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r6;
    *((u32*)(sp + 4)) = r7;
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x20));
    *((u32*)sp) = (*((u32*)(sp + 0x14)) + 0x5b);
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0xc)) = (*((u32*)(sp + 0x14)) + 0x5b);
    *((u32*)sp) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x10)) = (*((u32*)(sp + 0x10)) + 0xe0);
}





void ov112_021E9290(void) {
    *((u32*)(sp + 0x20)) = r3;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r5;
    *((u32*)(sp + 0x10)) = r7;
    *((u32*)(sp + 0x14)) = r3;
    *((u32*)(sp + 0x18)) = r1;
    *((u32*)(sp + 0x1c)) = r0;
    *((u32*)sp) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x20));
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x20));
}





void ov112_021E9338(void) {
}





void ov112_021E935C(void) {
    // sub r1, r1, r5
    // ror r1, r2
    // sub r3, r3, r5
    // ror r3, r2
    // and r1, r2
    // and r0, r1
}





void ov112_021E93BC(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 0x30)) = *((u32*)(sp + 0x30));
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0x34)) = *((u32*)(sp + 0x34));
    *((u32*)(sp + 0x38)) = *((u32*)(sp + 0x38));
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 0x38));
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x38));
    *((u32*)(sp + 0xc)) = ((s32)((*((u32*)(sp + 0x3c)) + ((s32)(*((u32*)(sp + 0x3c))) >> 2))) >> 3);
    // lsl r2, r4
    *((u8*)(*((u32*)(sp + 8)) + *((u32*)(sp + 0x10)))) = *((u32*)(sp + 4));
    // and r0, r2
    // lsl r0, r4
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 4));
}





void ov112_021E9464(void) {
}





void ov112_021E9470(void) {
}





void ov112_021E9480(void) {
    // sub r2, #0x46
    // sub r2, #0x46
    // sub r2, #0x23
    // sub r2, #0x23
    // sub r2, #8
    // sub r2, #9
    // sub r2, #9
    // sub r2, #8
}





void ov112_021E95A0(void) {
    *((u32*)(r6 + *((u32*)sp))) = r4;
}





void ov112_021E9610(void) {
    *((u32*)sp) = r1;
    // sub r0, r1, r0
}





void ov112_021E966C(void) {
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)(r5 + r0)) = r4;
    // strh r1, [r5, r0]
}





void ov112_021E96D0(void) {
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)(r5 + r0)) = r4;
    // strh r1, [r5, r0]
}





void ov112_021E9750(void) {
    *((u32*)(r4 + r0)) = ~(r1);
    // strh r1, [r4, r0]
    *((u32*)(r4 + r0)) = ~(r1);
    // strh r1, [r4, r0]
    *((u32*)(r4 + r0)) = ~(r1);
    *((u32*)(r4 + r0)) = ~(r1);
    // strh r1, [r4, r0]
    *((u32*)(r4 + r0)) = ~(r1);
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
}





void ov112_021E9888(void) {
    GF_AssertFail();
    TouchscreenHitbox_FindRectAtTouchNew(*((u32*)(ov112_021FF514 + (r4 << 2))), (r4 << 2));
}





void ov112_021E98A4(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021E98E8(void) {
    // bx r3
}





void ov112_021E98F8(void) {
    // sub r4, r4, r5
    // ror r4, r3
    // asr r1, r3
    // asr r1, r3
    // and r0, r1
}





void ov112_021E9934(void) {
    // sub r5, r5, r6
    // ror r5, r2
    // and r5, r3
    // lsl r3, r2
    // lsl r3, r2
    // eor r2, r3
    // and r2, r4
    // strb r2, [r0, r1]
    // strb r1, [r0, r2]
    // eor r1, r3
    // and r1, r2
    // strb r1, [r0, r4]
}





void ov112_021E9998(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 0x38)) = *((u32*)(sp + 0x38));
    *((u32*)(sp + 0x1c)) = *((u32*)(sp + 0x38));
    *((u32*)(sp + 8)) = r2;
    *((u32*)(sp + 0xc)) = r3;
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x38));
    // and r6, r1
    // and r0, r1
    // sub r6, #8
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 8));
    *((u32*)(sp + 0x18)) = (*((u32*)(sp + 0x10)) + (*((u32*)(sp + 0x38)) + *((u32*)(sp + 0xc))));
    // sub r0, #8
    *((u32*)(sp + 0x18)) = (*((u32*)(sp + 0x10)) + (*((u32*)(sp + 0x38)) + *((u32*)(sp + 0xc))));
    *((u32*)(sp + 8)) = *((u32*)(sp + 8));
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x1c)) = *((u32*)(sp + 0x1c));
}





void ov112_021E9A30(void) {
    *((u32*)sp) = ~(r3);
    *((u32*)sp) = ~(~(r3));
    // sub r3, #8
}





void ov112_021E9A78(void) {
    *((u32*)sp) = r1;
    // strb r0, [r5, r1]
    // strb r0, [r5, r1]
    // strb r0, [r5, r1]
    // strb r0, [r5, r1]
    // strb r0, [r5, r1]
    // strb r0, [r5, r1]
    // strb r0, [r5, r1]
    // strb r0, [r5, r1]
    // strb r4, [r1, r0]
}





void ov112_021E9C10(void) {
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
}





void ov112_021E9C94(void) {
}





void ov112_021E9C98(void) {
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0xc
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x10
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x14
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x18
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x1c
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x20
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x24
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x28
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x48
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x4c
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x50
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x54
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x58
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x5c
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x60
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x64
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x68
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x70
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0xc0
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0xc4
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0xc8
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021E9E30(void) {
    String_Delete(*((u32*)(r0 + 0x0001E458)));
    String_Delete(*((u32*)(r4 + 0x0001E45C)));
    String_Delete(*((u32*)(r4 + 0x0001E460)));
    String_Delete(*((u32*)(r4 + 0x0001E464)));
    String_Delete(*((u32*)(r4 + 0x0001E468)));
    String_Delete(*((u32*)(r4 + 0x0001E46C)));
    String_Delete(*((u32*)(r4 + 0x0001E470)));
    String_Delete(*((u32*)(r4 + 0x0001E474)));
    String_Delete(*((u32*)(r4 + 0x0001E494)));
    String_Delete(*((u32*)(r4 + 0x0001E49C)));
    String_Delete(*((u32*)(r4 + 0x0001E498)));
    String_Delete(*((u32*)(r4 + 0x0001E4A0)));
    String_Delete(*((u32*)(r4 + 0x0001E4A4)));
    String_Delete(*((u32*)(r4 + 0x0001E4A8)));
    String_Delete(*((u32*)(r4 + 0x0001E4AC)));
    String_Delete(*((u32*)(r4 + 0x0001E4B0)));
    String_Delete(*((u32*)(r4 + 0x0001E4B4)));
    String_Delete(*((u32*)(r4 + 0x0001E4BC)));
    String_Delete(*((u32*)(r4 + 0x0001E50C)));
    String_Delete(*((u32*)(r4 + 0x0001E510)));
    String_Delete(*((u32*)(r4 + 0x0001E514)));
    String_Delete(*((u32*)(r4 + 0x0001E518)));
}





void ov112_021E9F40(void) {
}





void ov112_021E9F5C(void) {
    *((u32*)sp) = r4;
}





void ov112_021E9FA4(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x28));
    *((u32*)(sp + 0xc)) = r3;
}





void ov112_021E9FD8(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = ((r0 + r2) + r4);
    *((u32*)(sp + 0xc)) = r3;
}





void ov112_021EA010(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x28));
    *((u32*)(sp + 0xc)) = r3;
}





void ov112_021EA044(void) {
    *((u32*)sp) = r4;
}





void ov112_021EA08C(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = ((r5 + r0) + r6);
    *((u32*)(sp + 8)) = r3;
}





void ov112_021EA10C(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = r3;
}





void ov112_021EA17C(void) {
}





void ov112_021EA19C(void) {
    // ldr r0, [r0, r1]
    // bx r3
}





void ov112_021EA1AC(void) {
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    GF_CreateVramTransferManager(0x40, 0x9a);
    ov112_021EA230(r4);
    ov112_021EA2C4(r4);
    ov112_021EA3C0(r4);
    SpriteSystem_GetRenderer(*((u32*)(r4 + 0x0001E528)));
    G2dRenderer_SetSubSurfaceCoords(0, (1 << 0x14));
    ov112_021EAB58();
}





void ov112_021EA1F8(void) {
    Sprite_DeleteAndFreeResources(*((u32*)(r0 + 0x0001E530)));
    SpriteSystem_FreeResourcesAndManager(*((u32*)(r7 + 0x0001E528)), *((u32*)(r7 + (0x0001E528 + 4))));
    SpriteSystem_Free(*((u32*)(r7 + 0x0001E528)));
}





void ov112_021EA230(void) {
    // add r2, sp, #0x34
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    SpriteSystem_Alloc(0x9a, ov112_021FECAC);
    // str r0, [r4, r1]
    SpriteManager_New(*((u32*)(r4 + 0x0001E528)), 0x0001E528);
    // add r2, sp, #0x14
    // str r0, [r4, r7]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    SpriteSystem_Init(*((u32*)(r4 + (0x0001E52C - 4))), r2, ov112_021FECC4, 0x20);
    SpriteSystem_InitSprites(*((u32*)(r4 + (r7 - 4))), *((u32*)(r4 + ((r7 - 4) + 4))), 0xd9);
    // add r2, sp, #0x34
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r4 + (r7 - 4))), *((u32*)(r4 + ((r7 - 4) + 4))));
}





void ov112_021EA2C4(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}





void ov112_021EA3C0(void) {
    *((u32*)sp) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)sp) = (*((u32*)sp) + 0x34);
    *((u32*)((r4 + (*((u32*)sp) + 0x34)) + r1)) = (*((u32*)sp) + 0x34);
    *((u32*)((r4 + (*((u32*)sp) + 0x34)) + r1)) = (*((u32*)sp) + 0x34);
}





void ov112_021EA4F4(void) {
    ManagedSprite_SetAnimateFlag(*((u32*)(r0 + 0x0001E530)), 1);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x0001E530)), 8);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E530)), 0);
}





void ov112_021EA51C(void) {
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r0 + 0x0001E530)), *((u8*)(ov112_021FECE4 + (r1 << 2))), *((u8*)(ov112_021FECE5 + (r1 << 2))), (1 << 0x14));
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x0001E530)), *((u8*)(ov112_021FECE6 + r4)));
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + 0x0001E530)), *((u8*)(ov112_021FECE7 + r4)));
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0001E530)), 1);
}





void ov112_021EA570(void) {
    // ldr r0, [r0, r1]
    // bx r3
}





void ov112_021EA584(void) {
    ManagedSprite_GetActiveAnim(*((u32*)(r0 + 0x0001E530)));
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x0001E530)), (r0 + 3));
}





void ov112_021EA5A4(void) {
    ManagedSprite_SetAnim(*((u32*)(r0 + 0x0001E534)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0001E534)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0001E538)), 0);
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x0001E534)), 2);
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x0001E538)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0001E538)), 1);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x0001E538)), r4);
    ManagedSprite_SetAnimateFlag(*((u32*)(r5 + 0x0001E538)), 1);
}





void ov112_021EA60C(void) {
    ov112_021E7668(0x0001E538);
    ManagedSprite_GetActiveAnim(r5);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x0001E538)), 1);
    ManagedSprite_GetActiveAnim(r5);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x0001E538)), 2);
}





void ov112_021EA64C(void) {
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x0001E534)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E538)), 0);
}





void ov112_021EA670(void) {
}





void ov112_021EA688(void) {
}





void ov112_021EA6A0(void) {
}





void ov112_021EA6B8(void) {
}





void ov112_021EA6D8(void) {
    *((u32*)sp) = r2;
    *((u32*)sp) = (*((u32*)sp) + 0x13);
}





void ov112_021EA76C(void) {
    // strb r0, [r2, r1]
}





void ov112_021EA7D0(void) {
    // strb r0, [r2, r1]
    // sub r0, #0xed
}





void ov112_021EA838(void) {
    // ldrsh r1, [r4, r0]
    // sub r1, #0x14
}





void ov112_021EA864(void) {
    *((u32*)(sp + 4)) = r0;
    // ldrsb r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    *((u32*)sp) = (r1 + (((s32)((r1 + ((s32)(r1) >> 0xb))) >> 0xc) + 0xa));
    // ldrsh r7, [r4, r3]
    // ldrsh r3, [r4, r3]
    // ldrsh r1, [r4, r0]
    // ldrsb r0, [r4, r0]
    // sub r0, r1, r0
    // ldrsh r0, [r4, r0]
    // ldrsh r1, [r4, r0]
    // sub r0, #0x74
    // ldrsh r0, [r4, r0]
    *((u8*)(r0 + r1)) = *((u32*)(sp + 4));
}





void ov112_021EA984(void) {
    *((u8*)(r0 + r1)) = r0;
}





void ov112_021EA9A0(void) {
}





void ov112_021EA9BC(void) {
    // ldrsh r0, [r1, r0]
}





void ov112_021EAA10(void) {
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x0001E568)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E564)), 0);
}





void ov112_021EAA34(void) {
}





void ov112_021EAA98(void) {
    // sub r2, #0x8c
    // sub r2, #0xee
}





void ov112_021EAAE4(void) {
    // ldrsb r4, [r2, r1]
    // ldrsh r3, [r2, r1]
    // ldrsh r3, [r2, r1]
    // sub r1, #0x74
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    // ldrsh r3, [r2, r1]
    // ldrsh r1, [r2, r1]
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
}





void ov112_021EAB58(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}





void ov112_021EAB78(void) {
    *((u32*)sp) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)sp) = r4;
    *((u32*)(sp + 4)) = r0;
}





void ov112_021EABE8(void) {
}





void ov112_021EAC18(void) {
    Sound_SetSceneAndPlayBGM(0x49, 0x00000497, 0);
    PlayBGM(0x00000497);
}





void ov112_021EAC34(void) {
    // blx r1
}





u8 ov112_021EAC58(void) {
}





void ov112_021EAC5C(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r0;
    // strh r2, [r5, r0]
    *((u32*)sp) = (sp + 0x10);
    *((u32*)(sp + 4)) = (sp + 0x10);
    *((u32*)(sp + 8)) = (sp + 0x10);
    *((u32*)(sp + 0xc)) = (sp + 0x10);
    // strh r1, [r5, r0]
    *((u32*)sp) = (sp + 0x10);
    *((u32*)(sp + 4)) = (sp + 0x10);
    *((u32*)(sp + 8)) = (sp + 0x10);
    *((u32*)(sp + 0xc)) = (sp + 0x10);
    *((u32*)sp) = (sp + 0x10);
    *((u32*)(sp + 4)) = (sp + 0x10);
    *((u32*)(sp + 8)) = (sp + 0x10);
    *((u32*)(sp + 0xc)) = (sp + 0x10);
}





void ov112_021EADD0(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    // strh r3, [r5, r0]
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    // sub r2, #0x10
}





void ov112_021EAF48(void) {
}





void ov112_021EAF5C(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r7;
    *((u32*)(r5 + (r1 + 0x98))) = r0;
}





void ov112_021EAFFC(void) {
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r0)) = r1;
    // add r2, pc
    // add pc, r2
    *((u32*)sp) = ((s32)((r2 + r2)) >> 0x10);
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    // strh r3, [r4, r2]
    *((u32*)sp) = ((s32)((r2 + r2)) >> 0x10);
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    // strh r1, [r4, r0]
    *((u32*)sp) = ((s32)((r2 + r2)) >> 0x10);
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = ((s32)((r2 + r2)) >> 0x10);
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = ((s32)((r2 + r2)) >> 0x10);
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EB1D8(void) {
}





void ov112_021EB1E8(void) {
}





void ov112_021EB208(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EB244(void) {
    *((u32*)sp) = r0;
    *((u32*)(r4 + r0)) = r1;
}





void ov112_021EB28C(void) {
    *((u32*)(r4 + ~(r0))) = r1;
    *((u32*)(r4 + ~(r0))) = r1;
}





void ov112_021EB388(void) {
}





void ov112_021EB3A8(void) {
}





void ov112_021EB3B8(void) {
}





void ov112_021EB3D8(void) {
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EB44C(void) {
    *((u32*)(r4 + ~(r0))) = r1;
    *((u32*)(r4 + ~(r0))) = r1;
}





void ov112_021EB568(void) {
    ov112_021EA570();
    *((u32*)(r4 + 4)) = 3;
    *((u32*)(r4 + 0x10)) = 1;
    *((u32*)(r4 + 4)) = 3;
    *((u32*)(r4 + 0x10)) = 2;
    *((u32*)(r4 + 4)) = 0xb;
    GF_AssertFail(0xb);
}





void ov112_021EB5AC(void) {
}





void ov112_021EB5BC(void) {
}





void ov112_021EB5DC(void) {
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EB664(void) {
    *((u32*)(r4 + ~(r0))) = r1;
    *((u32*)(r4 + ~(r0))) = r1;
}





void ov112_021EB780(void) {
}





void ov112_021EB7D8(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EB838(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    *((u32*)(r4 + 4)) = 0xb;
}





void ov112_021EB85C(void) {
}





void ov112_021EB864(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EB8C4(void) {
}





void ov112_021EB8E8(void) {
}





u8 ov112_021EB908(void) {
}





void ov112_021EB90C(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EB950(void) {
    *((u32*)sp) = (sp + 0x10);
    *((u32*)(sp + 4)) = (sp + 0x10);
    *((u32*)(sp + 8)) = (sp + 0x10);
    *((u32*)(sp + 0xc)) = (sp + 0x10);
}





void ov112_021EB9C0(void) {
}





void ov112_021EB9E4(void) {
}





void ov112_021EBA08(void) {
}





void ov112_021EBA28(void) {
    // blx r1
}





u8 ov112_021EBA50(void) {
}





void ov112_021EBA54(void) {
}





void ov112_021EBA6C(void) {
}





void ov112_021EBA8C(void) {
}





u8 ov112_021EBAB0(void) {
}





void ov112_021EBAB4(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EBB58(void) {
    // blx r1
}





u32 ov112_021EBB84(void) {
}





void ov112_021EBB98(void) {
}





void ov112_021EBBB0(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021E966C(r4, 1);
}





void ov112_021EBBD8(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r1;
}





void ov112_021EBC3C(void) {
    *((u32*)(r4 + r1)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EBC7C(void) {
    *((u32*)sp) = r0;
}





void ov112_021EBCD8(void) {
    *((u32*)(r4 + ~(r0))) = r1;
    *((u32*)(r4 + ~(r0))) = r1;
}





void ov112_021EBD9C(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = (r4 + r0);
    *((u32*)(sp + 8)) = (r4 + r0);
    *((u32*)(sp + 0xc)) = r1;
}





void ov112_021EBDE8(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EBE4C(void) {
}





void ov112_021EBE6C(void) {
}





void ov112_021EBE78(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r1;
    // strh r1, [r4, r0]
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = (r4 + (r4 + r0));
    *((u32*)(sp + 8)) = (r4 + (r4 + r0));
    *((u32*)(sp + 0xc)) = r1;
    // strh r1, [r4, r0]
}





u32 ov112_021EBF18(void) {
}





void ov112_021EBF4C(void) {
}





void ov112_021EBF70(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EBFC8(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021EA5A4(r4, 2);
}





void ov112_021EC000(void) {
}





void ov112_021EC038(void) {
}





void ov112_021EC044(void) {
    *((u32*)(r4 + ((s32)((r0 + r0)) >> 0x10))) = r1;
    *((u32*)(r4 + ((s32)((r0 + r0)) >> 0x10))) = r1;
}





void ov112_021EC134(void) {
    *((u32*)(sp + 8)) = ~(r0);
    *((u32*)(sp + 4)) = ~(r0);
    *((u32*)(sp + 8)) = (sp + 0);
    // strh r1, [r5, r0]
    // strh r1, [r5, r0]
}





void ov112_021EC1A8(void) {
    *((u32*)(r4 + r1)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EC1E4(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    *((u32*)(r4 + 4)) = 0xb;
}





void ov112_021EC208(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EC284(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    *((u32*)(r4 + 4)) = 0;
}





void ov112_021EC2A8(void) {
    // ldrsh r0, [r4, r2]
    // sub r2, #0x88
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EC2E4(void) {
}





void ov112_021EC304(void) {
    *((u32*)(r4 + r1)) = r2;
    // sub r2, #0x10
}





void ov112_021EC338(void) {
    *((u32*)(r4 + r1)) = r2;
}





u8 ov112_021EC374(void) {
}





void ov112_021EC378(void) {
}





void ov112_021EC390(void) {
}





void ov112_021EC3B0(void) {
}





void ov112_021EC3C8(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021EA17C(r4);
}





u32 ov112_021EC3F0(void) {
}





void ov112_021EC404(void) {
}





void ov112_021EC414(void) {
}





void ov112_021EC434(void) {
}





void ov112_021EC440(void) {
    *((u32*)(r5 + r3)) = r1;
}





void ov112_021EC460(void) {
}





void ov112_021EC478(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    // strh r1, [r4, r0]
}





void ov112_021EC520(void) {
    // blx r1
}





void ov112_021EC54C(void) {
    // strh r2, [r0, r1]
}





void ov112_021EC55C(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EC640(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EC67C(void) {
}





void ov112_021EC69C(void) {
}





void ov112_021EC6C0(void) {
}





void ov112_021EC6D8(void) {
}





void ov112_021EC6F8(void) {
}





void ov112_021EC70C(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EC778(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021E9C10(r4, 1);
    ov112_021E9C10(r4, 0);
    ov112_021E9A78(r4, 3);
    ov112_021E9A78(r4, 2);
}





void ov112_021EC7B8(void) {
}





void ov112_021EC7D0(void) {
    // ldrsb r1, [r1, r0]
    *((u32*)sp) = r7;
    *((u32*)sp) = (r5 + r4);
    *((u32*)(sp + 4)) = r3;
    *((u32*)sp) = (r5 + r4);
    *((u32*)(sp + 4)) = r3;
    *((u32*)sp) = (r5 + r4);
}





void ov112_021EC8A4(void) {
    *((u32*)sp) = r0;
    *((u32*)sp) = (r4 + (r4 + r0));
    *((u32*)sp) = (r4 + (r4 + r0));
}





void ov112_021EC950(void) {
    *((u32*)(r6 + r0)) = r2;
    *((u32*)(r6 + r1)) = r2;
    // strb r4, [r1, r0]
}





void ov112_021EC99C(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r1;
    // strh r0, [r4, r1]
}





void ov112_021ECA18(void) {
    ov112_021EC7B8();
    ov112_021EA688(r5, 3);
    ov112_021EA670(r5, 4);
    ov112_021EA670(r5, 3);
    ov112_021EA670(r5, 4);
    ov112_021EA670(r5, 3);
    ov112_021EA688(r5, 4);
    ov112_021EA688(r5, 3);
    ov112_021EA688(r5, 4);
}





void ov112_021ECA88(void) {
    // ldrsb r0, [r0, r2]
}





void ov112_021ECAA8(void) {
    *((u32*)(r4 + r0)) = r5;
    *((u32*)(r4 + r0)) = ~(r1);
    *((u32*)(r4 + r0)) = ~(r1);
}





void ov112_021ECCC4(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = ((s32)((r1 + r1)) >> 0x10);
    *((u32*)(sp + 8)) = ((s32)((r1 + r1)) >> 0x10);
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)(r4 + r1)) = ((s32)((r1 + r1)) >> 0x10);
    // strh r1, [r4, r0]
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = ((s32)((r1 + r1)) >> 0x10);
    *((u32*)(sp + 8)) = ((s32)((r1 + r1)) >> 0x10);
    *((u32*)(sp + 0xc)) = r1;
}





void ov112_021ECDA0(void) {
    *((u32*)(r5 + ((s32)(r0) >> 0x18))) = r2;
    *((u32*)(r5 + r1)) = ((s32)(r0) >> 0x18);
    *((u32*)(r5 + ((s32)(r0) >> 0x18))) = r1;
    *((u32*)(r5 + ((s32)(r0) >> 0x18))) = r1;
}





void ov112_021ECE28(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021ECECC(void) {
}





void ov112_021ECEEC(void) {
}





void ov112_021ECEF8(void) {
}





void ov112_021ECF38(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021ECF88(void) {
}





void ov112_021ECFD4(void) {
}





u32 ov112_021ED020(void) {
}





void ov112_021ED054(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021ED090(void) {
}





void ov112_021ED0C8(void) {
}





void ov112_021ED0D0(void) {
    // sub r2, #0x10
    // strh r1, [r4, r0]
    *((u32*)sp) = r0;
    *((u32*)(r4 + (r4 + r2))) = r0;
}





void ov112_021ED13C(void) {
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
    // sub r0, r0, r3
    *((u32*)sp) = r0;
}





void ov112_021ED180(void) {
}





void ov112_021ED1A0(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021ED224(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021EA5A4(r4, 2);
}





void ov112_021ED25C(void) {
}





void ov112_021ED264(void) {
}





void ov112_021ED2F4(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021ED314(void) {
    IsSEPlaying(0x00000934);
    PlaySE(0x00000934);
}





void ov112_021ED330(void) {
    // strh r4, [r5, r0]
    // strh r1, [r5, r0]
}





void ov112_021ED35C(void) {
    // sub r1, #0x14
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
    // add r1, pc
    // add pc, r1
}





void ov112_021ED4D4(void) {
}





void ov112_021ED530(void) {
    // sub r5, r5, r0
    // bpl _021ED550
}





void ov112_021ED590(void) {
}





void ov112_021ED5DC(void) {
}





void ov112_021ED610(void) {
    // ldrh r1, [r0, r1]
    // bls _021ED62E
}





void ov112_021ED640(void) {
    // ldrh r1, [r0, r1]
    // bls _021ED660
}





void ov112_021ED66C(void) {
    // add r1, pc
    // add pc, r1
    // sub r1, r1, r0
    *((u32*)(r4 + r0)) = (r4 + ((s32)((r0 + r0)) >> 0x10));
}





void ov112_021ED7DC(void) {
    *((u32*)(sp + 4)) = r2;
    *((u32*)(sp + 4)) = (r4 + r3);
    // sub r0, #0x10
    // and r5, r6
    *((u32*)(sp + 8)) = r2;
    // sub r0, r1, r0
    *((u32*)(sp + 8)) = (sp + 0);
    *((u16*)(sp + 0)) = r2;
    // and r3, r5
}





void ov112_021ED8DC(void) {
}





void ov112_021ED918(void) {
    // add r1, pc
    // add pc, r1
}





void ov112_021EDA4C(void) {
    // sub r2, #0x10
    // sub r2, #0x10
    // strh r1, [r4, r0]
}





void ov112_021EDAF4(void) {
    // sub r1, #0x1e
}





void ov112_021EDB24(void) {
    // sub r1, #0x14
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
    // add r1, pc
    // add pc, r1
}





void ov112_021EDCB0(void) {
    // add r1, pc
    // add pc, r1
}





void ov112_021EDD08(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EDD30(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EDD5C(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EDD80(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EDDB4(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EDDE8(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EDE1C(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EDE68(void) {
    // strb r2, [r4, r1]
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = (r0 + 0x1c);
    *((u32*)(sp + 8)) = (r0 + 0x1c);
    *((u32*)(sp + 0xc)) = (r0 + 0x1c);
    *((u32*)(r4 + (r4 + r1))) = (r0 + 0x1c);
}





void ov112_021EDF08(void) {
}





void ov112_021EDF4C(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = (r5 + r1);
    *((u32*)(sp + 4)) = (r5 + r1);
    *((u32*)(r5 + (r5 + r1))) = r0;
}





void ov112_021EDFE8(void) {
}





void ov112_021EE044(void) {
    // strb r2, [r4, r1]
    // strb r2, [r4, r1]
}





void ov112_021EE0F4(void) {
}





void ov112_021EE10C(void) {
}





void ov112_021EE12C(void) {
    *((u32*)(r4 + r1)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EE178(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    IsFanfarePlaying();
    *((u32*)(r4 + 4)) = 6;
}





void ov112_021EE1A4(void) {
}





void ov112_021EE1BC(void) {
}





void ov112_021EE1DC(void) {
}





void ov112_021EE1E8(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = (r4 + (r4 + r0));
    *((u32*)(sp + 8)) = (r4 + (r4 + r0));
    *((u32*)(sp + 0xc)) = r1;
}





void ov112_021EE29C(void) {
}





void ov112_021EE2B4(void) {
}





void ov112_021EE2D4(void) {
    *((u32*)sp) = r0;
    *((u32*)(r4 + r0)) = r1;
}





void ov112_021EE31C(void) {
    *((u32*)(r4 + ~(r0))) = r1;
    *((u32*)(r4 + ~(r0))) = r1;
}





void ov112_021EE3E0(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(r4 + (r4 + (r4 + r0)))) = r1;
}





void ov112_021EE464(void) {
    // sub r2, #0x10
}





void ov112_021EE4B8(void) {
}





void ov112_021EE4D0(void) {
    *((u32*)(r4 + r0)) = r1;
}





u8 ov112_021EE510(void) {
}





void ov112_021EE514(void) {
}





void ov112_021EE524(void) {
}





void ov112_021EE52C(void) {
}





void ov112_021EE550(void) {
}





void ov112_021EE570(void) {
}





void ov112_021EE594(void) {
    ManagedSprite_IsAnimated(*((u32*)(r0 + 0x0001E530)));
    ov112_021EA570(r4);
    *((u32*)(r4 + 8)) = *((u32*)(r4 + 0xc));
}





void ov112_021EE5B8(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





u8 ov112_021EE604(void) {
}





void ov112_021EE608(void) {
}





u8 ov112_021EE624(void) {
}





void ov112_021EE628(void) {
    SaveArray_PCStorage_Get(*((u32*)(r0 + 0x20)));
    sub_020326A4(*((u32*)(r5 + 0x0001E440)), 2, *((u32*)(r5 + 0x0001D770)));
    sub_02032720(*((u32*)(r5 + 0x0001E440)), *((u32*)(r5 + 0x0001D798)));
    PCStorage_GetMonByIndexPair(r7, r4, r6);
    Pokewalker_SetBoxMon(*((u32*)(r5 + 0x0001E440)), r0);
    PCStorage_DeleteBoxMonByIndexPair(r7, r4, r6);
    ov112_021EECF0(r5);
}





void ov112_021EE688(void) {
    // blx r1
}





u8 ov112_021EE6AC(void) {
}





void ov112_021EE6B0(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EE6D0(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021EA17C(r4);
}





u32 ov112_021EE6F8(void) {
}





void ov112_021EE70C(void) {
}





void ov112_021EE718(void) {
    sub_0203263C(*((u32*)(r0 + 0x0001E440)));
    *((u32*)(r4 + 4)) = 0xa;
    *((u32*)(r4 + 0x10)) = 3;
}





void ov112_021EE73C(void) {
}





void ov112_021EE754(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    *((u32*)(r4 + 4)) = 0xb;
}





void ov112_021EE778(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EE7A8(void) {
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 0x10)) = (sp + 8);
    *((u32*)(sp + 0xc)) = (sp + 8);
    // strh r0, [r5, r1]
    *((u32*)(r5 + (sp + 8))) = (sp + 8);
    *((u32*)sp) = (sp + 8);
    *((u32*)sp) = (sp + 8);
    *((u32*)(r5 + *((u32*)(sp + 0x10)))) = *((u32*)(sp + 4));
}





void ov112_021EE8BC(void) {
    *((u32*)sp) = r0;
    *((u32*)sp) = (r0 + r4);
}





void ov112_021EE920(void) {
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
}





void ov112_021EE970(void) {
    *((u8*)(sp + 0)) = r0;
    *((u8*)(sp + 0)) = r0;
}





void ov112_021EE9A4(void) {
    *((u32*)(sp + 4)) = r3;
    *((u32*)sp) = *((u32*)(sp + 0x20));
}





void ov112_021EE9E4(void) {
    *((u8*)(sp + 0x10)) = r1;
    // and r0, r3
    *((u32*)sp) = (sp + 0x10);
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x28));
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x28));
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r7;
}





void ov112_021EEA7C(void) {
    Bag_AddItem(*((u32*)(r0 + 0x0001E434)), *((u16*)(r0 + 0x00009DAC)), 1, 0x9a);
    Bag_AddItem(*((u32*)(r5 + 0x0001E434)), *((u16*)(r5 + 0x00009DB8)), 1, 0x9a);
    Bag_AddItem(*((u32*)(r5 + 0x0001E434)), *((u16*)(r5 + 0x0000B002)), 1, 0x9a);
}





void ov112_021EEAF0(void) {
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x24)) = (sp + 0x18);
    *((u32*)(sp + 8)) = (sp + 0x18);
    *((u32*)(sp + 0x20)) = (sp + 0x18);
    *((u32*)sp) = (sp + 0x18);
    *((u32*)sp) = (sp + 0x1c);
    *((u32*)(sp + 0x14)) = (sp + 0x18);
    *((u32*)(sp + 8)) = *((u32*)(sp + 8));
    *((u32*)(sp + 0x10)) = (r5 + *((u32*)(sp + 0x20)));
    *((u32*)(sp + 4)) = *((u32*)(sp + 8));
    *((u32*)sp) = *((u32*)(sp + 0x10));
    *((u32*)sp) = (r5 + (*((u32*)(sp + 0x20)) + 0x1e));
    *((u8*)(sp + 0x18)) = (r5 + (*((u32*)(sp + 0x20)) + 0x1e));
    *((u32*)(r5 + *((u32*)(sp + 0x24)))) = (sp + 0x18);
}





void ov112_021EECF0(void) {
}





void ov112_021EED08(void) {
    *((u32*)(r4 + r1)) = r2;
    // sub r2, #0x10
    // strb r1, [r4, r0]
    // strh r1, [r4, r0]
    // sub r2, #0x10
    // strb r2, [r4, r1]
}





void ov112_021EEDFC(void) {
    // blx r1
}





void ov112_021EEE20(void) {
}





void ov112_021EEE2C(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EEE4C(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    sub_02006B84(*((u16*)(r4 + 0x0001F2D6)));
    IsFanfarePlaying();
    ov112_021EA17C(r4);
}





u32 ov112_021EEE8C(void) {
}





void ov112_021EEEA0(void) {
}





void ov112_021EEEAC(void) {
}





void ov112_021EEEC0(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EEEE0(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021EA17C(r4);
}





u32 ov112_021EEF08(void) {
}





void ov112_021EEF1C(void) {
}





void ov112_021EEF28(void) {
}





void ov112_021EEF30(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EEF68(void) {
    *((u32*)(r5 + r6)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + (r1 + 8))) = r0;
    *((u32*)(r5 + (r5 + r0))) = (r1 + 8);
    *((u32*)sp) = (r1 + 8);
    *((u32*)(sp + 4)) = (r1 + 8);
    *((u32*)(sp + 8)) = (r5 + r0);
    *((u32*)(sp + 0xc)) = (r1 + 8);
    *((u32*)(sp + 0x10)) = (r5 + r0);
    *((u32*)(sp + 0x14)) = (r5 + r0);
    *((u32*)(sp + 0x18)) = (r5 + ((r5 + r0) + 0xc));
    // sub r0, #8
    *((u32*)(sp + 0x1c)) = (r5 + ((r5 + r0) + 0xc));
    *((u32*)(sp + 0x20)) = r5;
    *((u32*)(r5 + r6)) = (((r5 + r0) + 0xc) + 8);
}





void ov112_021EF03C(void) {
    *((u32*)(r5 + r0)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)sp) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(r5 + r0)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(r5 + r0)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(r5 + r0)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(r5 + r0)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)sp) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 8)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(r5 + r0)) = ((s32)((r0 + r0)) >> 0x10);
}





void ov112_021EF100(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EF15C(void) {
}





void ov112_021EF17C(void) {
}





void ov112_021EF19C(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_Init(r3, r3);
    ObjPlttTransfer_Init(0x14, 0x9a);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}





void ov112_021EF1CC(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r3;
    *((u32*)(sp + 0x10)) = r2;
}





void ov112_021EF1F0(void) {
    *((u32*)r5) = r0;
    *((u32*)r5) = r0;
}





void ov112_021EF298(void) {
    *((u32*)r4) = r0;
    *((u32*)r4) = r0;
}





void ov112_021EF300(void) {
    // bx r3
}





void ov112_021EF310(void) {
}





void ov112_021EF31C(void) {
    *((u8*)(r1 + 0x30)) = r0;
    *((u8*)((r1 + 0x30) + 0x31)) = r0;
    *((u8*)(r5 + 0x32)) = r0;
    *((u32*)(r4 + r0)) = r6;
    *((u32*)(r4 + r0)) = ((r1 + 0x30) + 0x31);
    *((u32*)(r4 + r0)) = r6;
    *((u32*)(r4 + r0)) = ((r1 + 0x30) + 0x31);
    *((u8*)((sp + 0) + 0x30)) = ((r1 + 0x30) + 0x31);
    *((u8*)((((sp + 0) + 0x30) + 0x1a) + 0x31)) = (r2 + 0x1a);
    *((u8*)((r5 + 0x32) + 0x32)) = ((((sp + 0) + 0x30) + 0x1a) + 0x31);
}





void ov112_021EF3F8(void) {
    *((u32*)sp) = (r2 + r0);
    *((u32*)(sp + 0x34)) = (sp + 0x34);
    // asr r6, r4
    *((u8*)(((sp + 0x34) + r4) + 0x20)) = r3;
    *((u8*)(((sp + 0x34) + r4) + 0x20)) = (sp + 0x34);
    *((u32*)(sp + 0x34)) = *((u32*)(sp + 8));
    // asr r6, r5
    *((u8*)(((sp + 0x34) + r5) + 0x20)) = (sp + 4);
    *((u8*)(((sp + 0x34) + r5) + 0x20)) = (sp + 0x1c);
}





void ov112_021EF568(void) {
    *((u32*)(r0 + r1)) = r2;
    *((u32*)(r0 + r1)) = (r0 + r2);
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
}





void ov112_021EF5AC(void) {
}





void ov112_021EF62C(void) {
}





u8 ov112_021EF640(void) {
}





void ov112_021EF644(void) {
}





u8 ov112_021EF660(void) {
}





u32 ov112_021EF664(void) {
}





void ov112_021EF67C(void) {
    // blx r1
}





void ov112_021EF6A0(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EF700(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021EF758(void) {
    // sub r4, r1, r0
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = (sp + 0x10);
    *((u32*)(sp + 8)) = r0;
}





void ov112_021EF8C0(void) {
}





void ov112_021EF8D4(void) {
    *((u32*)sp) = (r5 + r1);
    *((u32*)(sp + 4)) = r0;
    *((u32*)(r5 + (r5 + r1))) = r0;
}





void ov112_021EF958(void) {
    *((u32*)(r4 + r1)) = r0;
    // strh r1, [r4, r0]
}





void ov112_021EF994(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EF9D4(void) {
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r0)) = r1;
}





void ov112_021EFA1C(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EFA44(void) {
    // strh r1, [r4, r2]
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EFA74(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EFA9C(void) {
}





void ov112_021EFAC0(void) {
}





void ov112_021EFAD4(void) {
    // sub r0, #0x57
}





void ov112_021EFB14(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = (r5 + r0);
    *((u32*)(sp + 4)) = ((((r5 + r1) + 9) + 9) + 8);
    *((u32*)(sp + 8)) = (r5 + r0);
}





void ov112_021EFC9C(void) {
}





void ov112_021EFCB0(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EFCD8(void) {
}





void ov112_021EFCFC(void) {
}





void ov112_021EFD24(void) {
    // strh r6, [r5, r0]
}





/* Address: 0x021EFD4C
 * Counts non-zero entries in two data arrays, then checks a flag.
 */
u32 ov112_021EFD4C(u32 a1) {
    u32 i, count = 0;
    
    for (i = 0; i < 3; i++) {
        u16 v = *((u16*)(a1 + 0x9DAC));
        if (v == 0)
            break;
        count++;
        a1 += 4;
    }
    
    for (i = 0; i < 0xA; i++) {
        u16 v = *((u16*)(a1 + 0x9DB8));
        if (v == 0)
            break;
        count++;
        a1 += 4;
    }
    
    if (*((u8*)(a1 + 0xAABC)) & 0x80) {
        u16 v = *((u16*)(a1 + 0xB002));
        if (v != 0)
            count++;
    }
    
    return count;
}





void ov112_021EFDA8(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = (sp + 0x10);
    *((u32*)sp) = (sp + 0x10);
    *((u32*)(sp + 4)) = (r7 + (r7 + (sp + 0x10)));
    *((u32*)(sp + 8)) = (sp + 0x10);
}





void ov112_021EFED8(void) {
}





void ov112_021EFEEC(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021EFF14(void) {
}





void ov112_021EFF38(void) {
}





void ov112_021EFF4C(void) {
}





void ov112_021EFF70(void) {
}





void ov112_021EFF84(void) {
    *((u32*)sp) = r4;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    // sub r4, r1, r0
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = (sp + 0x14);
    *((u32*)(sp + 8)) = r0;
}





void ov112_021F00CC(void) {
}





void ov112_021F00E0(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021F0114(void) {
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r0)) = r1;
}





void ov112_021F015C(void) {
}





void ov112_021F0180(void) {
}





void ov112_021F0194(void) {
}





void ov112_021F01B8(void) {
}





void ov112_021F01CC(void) {
    *((u32*)sp) = r4;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    // sub r4, r1, r0
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = (sp + 0x14);
    *((u32*)(sp + 8)) = r0;
}





void ov112_021F0314(void) {
}





void ov112_021F0328(void) {
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021F0368(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    IsFanfarePlaying();
    *((u32*)(r4 + 8)) = *((u32*)(r4 + 0xc));
}





void ov112_021F0394(void) {
}





void ov112_021F039C(void) {
    *((u32*)r4) = r5;
}





void ov112_021F03BC(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r2;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
}





void ov112_021F04DC(void) {
}





void ov112_021F050C(void) {
}





void ov112_021F051C(void) {
}





void ov112_021F05CC(void) {
    // ldr r0, [r5, r6]
    // ldr r0, [r7, r0]
    // ldr r0, [r7, r0]
}





void ov112_021F05FC(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r4;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r4;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r4;
}





void ov112_021F0668(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x1c
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r0, 5, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 7, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 7);
}





void ov112_021F06CC(void) {
    *((u32*)(sp + 0x10)) = (r0 + 0x28);
    *((u32*)sp) = (r1 + 0xa);
    *((u32*)(sp + 4)) = ((r0 + 0x28) + 0x38);
    *((u32*)(sp + 8)) = ((r0 + 0x28) + 0x38);
    *((u32*)(sp + 0xc)) = (r1 + 0xa);
    *((u32*)sp) = ((((r0 + 0x28) + 0x38) + 0x38) + 0x38);
    *((u32*)(sp + 4)) = r3;
    *((u32*)sp) = (r1 + 0xa);
    *((u32*)(sp + 4)) = (((((r0 + 0x28) + 0x38) + 0x38) + 0x38) + 8);
    *((u32*)(sp + 8)) = (((((r0 + 0x28) + 0x38) + 0x38) + 0x38) + 8);
    *((u32*)(sp + 0xc)) = (r1 + 0xa);
    *((u32*)sp) = (((((((r0 + 0x28) + 0x38) + 0x38) + 0x38) + 8) + 8) + 8);
    *((u32*)(sp + 4)) = (((((((r0 + 0x28) + 0x38) + 0x38) + 0x38) + 8) + 8) + 8);
    // sub r3, r1, r0
    *((u32*)sp) = (r1 + 0xa);
    *((u32*)(sp + 4)) = (((((((((r0 + 0x28) + 0x38) + 0x38) + 0x38) + 8) + 8) + 8) + 0x18) + 0x18);
    *((u32*)(sp + 8)) = (((((((((r0 + 0x28) + 0x38) + 0x38) + 0x38) + 8) + 8) + 8) + 0x18) + 0x18);
    *((u32*)(sp + 0xc)) = (r1 + 0xa);
    *((u32*)sp) = (r1 + 0xa);
    *((u32*)(sp + 4)) = ((((((((((((r0 + 0x28) + 0x38) + 0x38) + 0x38) + 8) + 8) + 8) + 0x18) + 0x18) + 0x18) + 0x18) + 0x48);
    *((u32*)(sp + 8)) = ((((((((((((r0 + 0x28) + 0x38) + 0x38) + 0x38) + 8) + 8) + 8) + 0x18) + 0x18) + 0x18) + 0x18) + 0x48);
    *((u32*)(sp + 0xc)) = (r1 + 0xa);
    *((u32*)sp) = (r1 + 0xa);
    *((u32*)(sp + 4)) = (((((((((((((((r0 + 0x28) + 0x38) + 0x38) + 0x38) + 8) + 8) + 8) + 0x18) + 0x18) + 0x18) + 0x18) + 0x48) + 0x48) + 0x48) + 0x48);
    *((u32*)(sp + 8)) = (((((((((((((((r0 + 0x28) + 0x38) + 0x38) + 0x38) + 8) + 8) + 8) + 0x18) + 0x18) + 0x18) + 0x18) + 0x48) + 0x48) + 0x48) + 0x48);
    *((u32*)(sp + 0xc)) = (r1 + 0xa);
    *((u32*)sp) = (r1 + 0xa);
    *((u32*)(sp + 4)) = ((((((((((((((((((((r0 + 0x28) + 0x38) + 0x38) + 0x38) + 8) + 8) + 8) + 0x18) + 0x18) + 0x18) + 0x18) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x28);
    *((u32*)(sp + 8)) = ((((((((((((((((((((r0 + 0x28) + 0x38) + 0x38) + 0x38) + 8) + 8) + 8) + 0x18) + 0x18) + 0x18) + 0x18) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x28);
    *((u32*)(sp + 0xc)) = (r1 + 0xa);
    *((u32*)sp) = (r1 + 0xa);
    *((u32*)(sp + 4)) = (((((((((((((((((((((((r0 + 0x28) + 0x38) + 0x38) + 0x38) + 8) + 8) + 8) + 0x18) + 0x18) + 0x18) + 0x18) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x28) + 0x28) + 0x28) + 0x58);
    *((u32*)(sp + 8)) = (((((((((((((((((((((((r0 + 0x28) + 0x38) + 0x38) + 0x38) + 8) + 8) + 8) + 0x18) + 0x18) + 0x18) + 0x18) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x48) + 0x28) + 0x28) + 0x28) + 0x58);
    *((u32*)(sp + 0xc)) = (r1 + 0xa);
}





void ov112_021F0908(void) {
}





void ov112_021F0980(void) {
}





void ov112_021F09B4(void) {
    *((u32*)(r4 + r7)) = (r0 + 8);
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = (r0 + 8);
    *((u32*)(sp + 8)) = (r0 + 8);
    // sub r1, #0x2d
    *((u32*)(r5 + r2)) = (r0 + 8);
    *((u32*)sp) = (r0 + 8);
    *((u32*)(sp + 4)) = (r0 + 8);
    *((u32*)(sp + 8)) = (r1 + 8);
    // sub r2, #0x14
    *((u32*)(sp + 0xc)) = (r0 + 8);
    *((u32*)(r5 + ((r1 + 8) + 0xff))) = (r0 + 8);
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = (r0 + 8);
    *((u32*)(sp + 8)) = (r0 + 8);
    // sub r0, #0x14
    // sub r1, #0x49
    *((u32*)(r5 + ((r1 + 8) + 0xff))) = (r0 + 8);
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = (r0 + 8);
    *((u32*)(sp + 8)) = (r0 + 8);
    // sub r0, #0x14
    // sub r1, #0x4d
    *((u32*)(r5 + ((r1 + 8) + 0xff))) = (r0 + 8);
    // sub r1, #0xc
    *((u32*)sp) = (r0 + 8);
    *((u32*)(sp + 4)) = (r0 + 8);
    *((u32*)(sp + 8)) = (r0 + 8);
    *((u32*)(r5 + ((r1 + 8) + 0xff))) = (r0 + 8);
    *((u32*)sp) = (r0 + 8);
    *((u32*)(sp + 4)) = (r0 + 8);
    *((u32*)(sp + 8)) = (r0 + 8);
    // sub r1, #0x2c
    *((u32*)(sp + 0xc)) = (r0 + 8);
    *((u32*)(r5 + ((r1 + 8) + 0xff))) = (r0 + 8);
    *((u32*)sp) = (r0 + 8);
    *((u32*)(sp + 4)) = (r0 + 8);
    // sub r1, #0x2c
    *((u32*)(sp + 8)) = (r0 + 8);
    *((u32*)(r5 + ((r1 + 8) + 0xff))) = (r0 + 8);
    *((u32*)sp) = (r0 + 8);
    *((u32*)(sp + 4)) = (r0 + 8);
    // sub r1, #0x2c
    *((u32*)(sp + 8)) = (r0 + 8);
    *((u32*)(r5 + ((r1 + 8) + 0xff))) = (r0 + 8);
    // sub r1, #0xc
}





void ov112_021F0B28(void) {
    *((u32*)sp) = (r0 + 0x18);
    *((u32*)(sp + 4)) = r6;
    *((u32*)(sp + 8)) = (r0 + 0x18);
    *((u32*)(sp + 0xc)) = (r0 + 0x18);
    *((u32*)((r5 + r1) + r7)) = (r0 + 0x18);
    *((u32*)sp) = (r0 + 0x18);
    *((u32*)(sp + 4)) = (r0 + 0x18);
    *((u32*)(sp + 8)) = r2;
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(r5 + (r5 + r1))) = (r0 + 0x18);
    *((u32*)(r5 + (r5 + r1))) = (r0 + 0x18);
}





void ov112_021F0B9C(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = ~(r0);
    *((u32*)(sp + 8)) = ~(r0);
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x10)) = r3;
    *((u32*)(sp + 0x14)) = r3;
    *((u32*)(sp + 0x18)) = r3;
    *((u32*)(sp + 0x1c)) = (r3 + 8);
    *((u32*)(sp + 0x20)) = (~(r0) + 0xc);
    *((u32*)(sp + 0x24)) = r2;
    *((u32*)(sp + 0x28)) = r2;
    *((u32*)sp) = (sp + 0x2c);
    *((u32*)(sp + 0x74)) = r5;
    *((u32*)(sp + 0x58)) = *((u32*)(sp + 0x90));
    *((u32*)(sp + 0x5c)) = (r1 + *((u32*)(sp + 0x94)));
}





void ov112_021F0C30(void) {
    *((u32*)r0) = r1;
}





void ov112_021F0C50(void) {
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
}





void ov112_021F0C8C(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)sp) = (sp + 0x14);
    *((u32*)(sp + 4)) = (sp + 0x14);
    *((u32*)(sp + 8)) = (sp + 0x14);
    *((u32*)(sp + 0xc)) = (sp + 0x14);
}





void ov112_021F0D04(void) {
}





void ov112_021F0D48(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 4)) = r7;
    *((u32*)(sp + 8)) = (r0 + 0x40);
    *((u16*)r5) = r7;
    *((u32*)sp) = *((u32*)sp);
    *((u32*)(sp + 4)) = *((u32*)(sp + 4));
}





void ov112_021F0DC0(void) {
    // and r1, r0
    *((u32*)r2) = r1;
    // and r0, r1
    *((u32*)r2) = r0;
}





void ov112_021F0DF4(void) {
}





void ov112_021F0E14(void) {
}





void ov112_021F0E60(void) {
    *((u8*)(sp + 0)) = r3;
}





void ov112_021F0EB4(void) {
    *((u8*)(sp + 0)) = r3;
}





void ov112_021F0EFC(void) {
    *((u8*)(sp + 0)) = r3;
}





void ov112_021F0F48(void) {
}





void ov112_021F0F60(void) {
}





void ov112_021F0F70(void) {
}





void ov112_021F0F90(void) {
    // add r6, sp, #8
    // stmia r6!, {r0, r1, r2, r3}
    // stmia r6!, {r0, r1, r2, r3}
    // mvn r0, r0
    // str r0, [sp, #4]
    GF_AssertFail(0, 0, 0, 0);
    GF_AssertFail(*((u32*)r5));
    Save_Pokewalker_Get(*((u32*)*((u32*)r5)));
    Save_PlayerData_GetProfile(*((u32*)*((u32*)r5)));
    PlayerProfile_GetTrainerGender();
    *((u32*)(r5 + 0xc)) = r0;
    PlayerProfile_GetNamePtr(r4);
    *((u32*)(r5 + 8)) = r0;
    // add r4, r0, r7
    // add r0, r1, r0
    // add r0, #0x84
    // add r1, #0x84
    // strb r0, [r1]
    // add r1, #0x84
    // strb r0, [r1]
    // add r1, #0x84
    // strb r0, [r1]
    // add r1, #0x84
    // strb r0, [r1]
    // add r0, #0x84
    // strb r2, [r5, r1]
    // add r1, #0xbc
    // str r2, [r5, r1]
    // sub r1, #0x44
    // str r2, [r5, r1]
    // strb r2, [r5, r1]
    // strb r6, [r5, r1]
    // strb r2, [r5, r1]
    // strb r6, [r5, r1]
    // add r0, #0x84
    GF_AssertFail(*((u8*)r4), (5 << 6), (*((u8*)(r5 + 0x00000142)) + 1));
    // ldr r0, [sp, #4]
    // str r1, [sp, #4]
    // add r0, sp, #8
    // str r4, [r0, r1]
    // add r0, sp, #8
    // add r0, r0, r1
    *((u32*)(*((u8*)(r5 + 0x0000013E)) + 4)) = r6;
    // strb r1, [r5, r0]
    // add r7, #0x88
    // add r2, sp, #8
    // add r1, #0x84
    // add r6, sp, #8
    // ldr r0, [sp, #4]
    GF_AssertFail(*((u32*)((r6 + 1) + (0 << 3))), *((u32*)*((u32*)((r6 + 1) + (0 << 3)))), *((u8*)(r5 + 0x0000013E)));
    // ldr r0, [sp, #4]
    // str r1, [r0]
    // add r2, #8
    // str r0, [sp]
    // add r0, sp, #8
    MATH_QSort(0, *((u8*)(r5 + 0x0000013E)), 8, ov112_021F0F70);
    // add r0, sp, #8
    // add r0, #0x76
    // strb r2, [r0]
    GF_RTC_DateTimeToSec(*((u32*)((*((u8*)(r5 + 0x0000013E)) - 1) + ((*((u8*)(r5 + 0x0000013E)) - 1) << 3))), ((*((u8*)(r5 + 0x0000013E)) - 1) << 3), 0);
    // add r1, sp, #8
    // str r0, [r1]
    // add r3, sp, #8
    // add r1, #0x76
    // add r4, #0x76
    // strb r1, [r4]
    // add r1, #0x84
    // add r1, r2, r1
    // str r1, [r0]
    // str r1, [r0]
    // add r6, sp, #8
    // add r3, #0x84
    // add r4, #0x78
    // add r0, #0x84
    // strb r1, [r0]
    // add r6, #8
    // add r2, sp, #8
    // add r7, #0x84
    // add r7, #0xc0
    // str r0, [r7]
    // add r2, #8
    // strb r1, [r5, r0]
}





void ov112_021F1288(void) {
    *((u32*)sp) = (r2 + 0xf8);
}





void ov112_021F1324(void) {
}





void ov112_021F135C(void) {
    *((u32*)(sp + 0x10)) = r3;
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = ((r4 + 0x18) + r6);
    *((u32*)(sp + 8)) = ((r4 + 0x18) + r6);
    *((u32*)(sp + 0xc)) = r1;
}





void ov112_021F13BC(void) {
}





void ov112_021F13CC(void) {
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0x10)) = (r0 + 0x38);
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = (r4 + (r0 + 0x38));
    *((u32*)(sp + 8)) = (r4 + (r0 + 0x38));
    *((u32*)(sp + 0xc)) = r3;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 0xc)) = r3;
}





void ov112_021F1488(void) {
    *((u32*)(sp + 8)) = r2;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = *((u32*)(sp + 0xc));
    *((u32*)(sp + 4)) = r3;
}





void ov112_021F1504(void) {
}





void ov112_021F1548(void) {
}





void ov112_021F1584(void) {
    // mov ip, r3
    // mov r2, ip
}





void ov112_021F15CC(void) {
}





void ov112_021F15E4(void) {
    *((u32*)(sp + 0xc)) = r3;
    *((u32*)(sp + 0)) = r3;
    // sub r0, #0x1d
    // sub r4, #0xd
}





void ov112_021F1624(void) {
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r2;
    // sub r1, #0x19
    *((u32*)(sp + 0x10)) = ((r5 + r1) + 0xc0);
    // sub r1, #0x15
    // sub r0, #0xd
    *((u32*)(sp + 0xc)) = ((r5 + r1) + 0xc0);
    // sub r4, #0xc
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
    *((u32*)sp) = r0;
}





void ov112_021F178C(void) {
}





void ov112_021F179C(void) {
    BgConfig_Alloc(*((u32*)(r0 + 4)));
    // add r3, sp, #4
    *((u32*)(r5 + 0x14)) = r0;
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r6, sp, #0x14
    InitBgFromTemplate(*((u32*)(r5 + 0x14)), *((u8*)ov112_021FF4C0), r6, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x14)), *((u8*)r4));
    // str r0, [sp]
    BG_FillCharDataRange(*((u32*)(r5 + 0x14)), *((u8*)r4), 0, 1);
    // add r6, #0x1c
}





void ov112_021F1814(void) {
    FreeBgTilemapBuffer(*((u32*)(r0 + 0x14)), *((u8*)ov112_021FF4C0));
    Heap_Free(*((u32*)(r6 + 0x14)));
}





void ov112_021F1838(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021F1904(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r0;
}





void ov112_021F194C(void) {
    GF_AssertFail();
    PlayBGM(((*((u32*)(ov112_021FF9B8 + (r4 << 2))) << 0x10) >> 0x10), (r4 << 2));
}





void ov112_021F196C(void) {
    SpriteSystem_Alloc(*((u32*)(r0 + 4)));
    *((u32*)(r5 + 0x68)) = r0;
    SpriteManager_New();
    // add r2, sp, #0x2c
    *((u32*)(r5 + 0x6c)) = r0;
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r3, sp, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // str r3, [sp, #0x18]
    SpriteSystem_Init(*((u32*)(r5 + 0x68)), r2, ov112_021FF330, 0x20);
    SpriteSystem_InitSprites(*((u32*)(r5 + 0x68)), *((u32*)(r5 + 0x6c)), 0x20);
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r5 + 0x68)), *((u32*)(r5 + 0x6c)), r3);
    SpriteSystem_GetRenderer(*((u32*)(r5 + 0x68)));
    G2dRenderer_SetSubSurfaceCoords(0, (0x83 << 0xe));
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}





void ov112_021F1A08(void) {
}





void ov112_021F1A40(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}





void ov112_021F1AF4(void) {
    // mov ip, r1
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, sp, #0
    // str r0, [r3]
    // strh r6, [r1]
    *((u16*)(r1 + 2)) = r3;
    // add r0, sp, #0x38
    // str r2, [sp, #8]
    // add r2, sp, #0
    *((u16*)(r1 + 6)) = *((u8*)(*((u32*)ov112_021FF398) + 0x10));
    // mov r1, ip
    SpriteSystem_NewSpriteWithYOffset(r0, *((u8*)(*((u32*)ov112_021FF398) + 0x14)), (0x83 << 0xe));
    ManagedSprite_SetAnimateFlag(1);
}





void ov112_021F1B44(void) {
    // mov ip, r1
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, sp, #0
    // str r0, [r3]
    // strh r6, [r1]
    *((u16*)(r1 + 2)) = r3;
    // add r0, sp, #0x38
    // str r2, [sp, #8]
    // add r2, sp, #0
    *((u16*)(r1 + 6)) = *((u8*)(*((u32*)ov112_021FF3CC) + 0x10));
    // mov r1, ip
    SpriteSystem_NewSpriteWithYOffset(r0, *((u8*)(*((u32*)ov112_021FF3CC) + 0x14)), (0x83 << 0xe));
    ManagedSprite_SetAnimateFlag(1);
}





void ov112_021F1B94(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(r1 + 0x80)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)((r1 + 0x80) + 0x84)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(((r1 + 0x80) + 0x84) + 0x94)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)((((r1 + 0x80) + 0x84) + 0x94) + 0x88)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(((((r1 + 0x80) + 0x84) + 0x94) + 0x88) + 0x8c)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)((((((r1 + 0x80) + 0x84) + 0x94) + 0x88) + 0x8c) + 0x90)) = r0;
}





void ov112_021F1CC8(void) {
}





void ov112_021F1D28(void) {
}





void ov112_021F1D58(void) {
}





void ov112_021F1D70(void) {
    *((u32*)sp) = r2;
}





void ov112_021F1DC0(void) {
    *((u32*)sp) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 8)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 0xc)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)sp) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 8)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 0xc)) = ((s32)((r0 + r0)) >> 0x10);
    // strb r1, [r4, r0]
    *((u32*)sp) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 8)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)sp) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 8)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)sp) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)sp) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((r0 + r0)) >> 0x10);
    // strb r1, [r4, r0]
    *((u32*)sp) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 8)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)sp) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 8)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)sp) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)sp) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((r0 + r0)) >> 0x10);
    // strb r1, [r4, r0]
}





void ov112_021F1EFC(void) {
    // sub r0, #0x32
}





void ov112_021F1F3C(void) {
}





void ov112_021F1F54(void) {
}





void ov112_021F1F80(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)sp) = ((r0 + 0x98) + 0x98);
    *((u32*)(sp + 4)) = ((r0 + 0x98) + 0x98);
    *((u32*)(sp + 8)) = ((r0 + 0x98) + 0x98);
}





void ov112_021F1FD0(void) {
}





void ov112_021F2000(void) {
    // str r3, [sp, #0x14]
    // str r2, [sp, #0x10]
    // ldr r7, [sp, #0x68]
    // ldr r2, [sp, #0x70]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r4, sp, #0x20
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldr r5, [sp, #8]
    // str r0, [r4]
    // add r0, sp, #0x58
    // str r0, [sp, #0x18]
    // str r4, [sp, #0x1c]
    // ldr r1, [sp, #0x14]
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)(*((u8*)(*((u32*)ov112_021FF400) + 0x14)) + 2)) = r7;
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x18]
    // add r0, sp, #0x20
    *((u16*)(3 + 6)) = r1;
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // str r4, [sp, #0x34]
    // add r2, sp, #0x20
    SpriteSystem_NewSpriteWithYOffset((0 + 2), (0x83 << 0xe));
    *((u32*)(r5 + 8)) = r0;
    ManagedSprite_SetAnimateFlag(1);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 8)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov112_021F1AF4(4, r7);
    // ldr r1, [sp, #8]
    *((u32*)(r1 + 0x10)) = r0;
}





void ov112_021F2098(void) {
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r3;
    *((u32*)(sp + 0x1c)) = *((u32*)(sp + 0xc));
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0xc));
    *((u32*)*((u32*)(sp + 0xc))) = r1;
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    *((u32*)(sp + 0x1c)) = *((u32*)(sp + 0xc));
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0xc));
    *((u32*)*((u32*)(sp + 0xc))) = ((sp + 0x2c) + 2);
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    *((u32*)(sp + 0x28)) = *((u32*)(sp + 0xc));
    *((u32*)(sp + 0x24)) = *((u32*)(sp + 0x28));
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x28));
    *((u32*)(sp + 0x18)) = (*((u32*)(sp + 0x28)) + ((sp + 0x2c) + 2));
    *((u32*)sp) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 8)) = r6;
    // sub r0, #0x32
}





void ov112_021F2204(void) {
    *((u32*)sp) = ((((((r5 + r0) + 0xc0) + 0x98) + 0x98) + 0xac) + 0xac);
    *((u32*)(sp + 4)) = ((((((r5 + r0) + 0xc0) + 0x98) + 0x98) + 0xac) + 0xac);
    *((u32*)sp) = ((r5 + 0x98) + ((((((r5 + r0) + 0xc0) + 0x98) + 0x98) + 0xac) + 0xac));
    *((u32*)(sp + 4)) = ((r5 + 0x98) + ((((((r5 + r0) + 0xc0) + 0x98) + 0x98) + 0xac) + 0xac));
}





void ov112_021F22B0(void) {
}





void ov112_021F22D0(void) {
    *((u32*)sp) = r3;
    *((u16*)(sp + 4)) = ((r6 + r0) + 0x98);
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
}





void ov112_021F2328(void) {
}





void ov112_021F2338(void) {
}





void ov112_021F2348(void) {
    *((u32*)(r0 + r2)) = r1;
}





void ov112_021F235C(void) {
    *((u32*)(r0 + r2)) = r3;
    *((u32*)(r0 + r2)) = r1;
    // and r1, r3
    *((u32*)(r0 + r2)) = r1;
    // and r1, r3
    *((u32*)(r0 + r2)) = r1;
}





void ov112_021F238C(void) {
    // ldrsb r3, [r2, r3]
    // sub r2, r2, r3
    *((u32*)(r5 + r1)) = (r0 + 0xac);
    // ldrsb r0, [r0, r3]
    *((u32*)(r5 + r1)) = (r0 + 0xac);
    // and r0, r2
    *((u32*)(r5 + r1)) = (r0 + 0xac);
    // and r0, r2
    *((u32*)(r5 + r1)) = ((r0 + 0xac) + 0xac);
    // and r0, r2
    *((u32*)(r5 + r1)) = ((r0 + 0xac) + 0xac);
    *((u32*)(r5 + r3)) = ((r0 + 0xac) + 0xac);
    // and r0, r1
    *((u32*)(r5 + (r1 + 0x98))) = ((((r0 + 0xac) + 0xac) + 0xac) + 0xac);
    // and r0, r2
    *((u32*)(r5 + (r1 + 0x98))) = ((((r0 + 0xac) + 0xac) + 0xac) + 0xac);
}





void ov112_021F24C4(void) {
    *((u32*)(r0 + r2)) = r1;
}





void ov112_021F24D8(void) {
    *((u32*)(r0 + r2)) = r3;
    *((u32*)(r0 + r2)) = r1;
    *((u32*)(r0 + r2)) = r3;
}





void ov112_021F24F8(void) {
    *((u32*)(r4 + r2)) = ((r0 + 0x84) + 0x84);
    *((u32*)(r4 + r1)) = (((r0 + 0x84) + 0x84) + 0xac);
    *((u32*)(r4 + (((r0 + 0x84) + 0x84) + 0xac))) = r1;
}





void ov112_021F257C(void) {
    // sub r0, r1, r0
    // bpl _021F25C2
    // neg r0, r0
    // sub r2, r2, r3
    // ror r2, r1
}





void ov112_021F25FC(void) {
}





void ov112_021F2688(void) {
}





void ov112_021F26E8(void) {
}





void ov112_021F2768(void) {
}





void ov112_021F27B8(void) {
}





void ov112_021F27E0(void) {
}





void ov112_021F2810(void) {
}





void ov112_021F2874(void) {
    // sub r1, #0x12
}





void ov112_021F28DC(void) {
}





void ov112_021F2920(void) {
}





void ov112_021F2944(void) {
}





void ov112_021F298C(void) {
}





void ov112_021F2A78(void) {
    // sub r2, #0x11
}





void ov112_021F2B2C(void) {
}





void ov112_021F2B80(void) {
    *((u32*)(r5 + r2)) = (r0 + 0x76);
}





void ov112_021F2CC4(void) {
    *((u32*)(r0 + r2)) = r1;
}





void ov112_021F2CD4(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    // and r0, r2
    *((u32*)(r4 + r1)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r0;
    // and r0, r2
    *((u32*)(r4 + r1)) = r0;
    // and r0, r2
    *((u32*)(r4 + r1)) = r0;
    // and r0, r2
    *((u32*)(r4 + r1)) = r0;
}





void ov112_021F2DE4(void) {
    *((u32*)r4) = r5;
}





void ov112_021F2E70(void) {
    OverlayManager_GetData();
    ov112_021F1324();
    ov112_021F1814(r5);
    ov112_021F1A08(r5);
    NARC_Delete(*((u32*)(r5 + 0x10)));
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    ov112_021F0DC0();
    OverlayManager_FreeData(r4);
    Heap_Destroy(0x9b);
}





void ov112_021F2EB0(void) {
    *((u32*)(r3 + r1)) = r0;
}





void ov112_021F2EF4(void) {
    // add r1, pc
    // add pc, r1
    *((u32*)r4) = r0;
    *((u32*)r4) = r0;
    *((u32*)(r5 + ((s32)((r1 + r1)) >> 0x10))) = r0;
    *((u32*)r4) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = ((s32)((r1 + r1)) >> 0x10);
    *((u32*)(sp + 8)) = r0;
    *((u32*)r4) = r0;
}





void ov112_021F2FAC(void) {
    *((u32*)r4) = r0;
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r0;
    *((u32*)r4) = r0;
}





void ov112_021F3018(void) {
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
}





void ov112_021F30BC(void) {
    // and r1, r2
    *((u8*)((r0 + 0x85) + 0x85)) = (r1 + 0x20);
    *((u8*)((((r0 + 0x85) + 0x85) + 0x85) + 0x85)) = (r1 + 0x20);
    *((u8*)((((((r0 + 0x85) + 0x85) + 0x85) + 0x85) + 0x85) + 0x85)) = (r1 + 0x20);
    *((u8*)(((((((r0 + 0x85) + 0x85) + 0x85) + 0x85) + 0x85) + 0x85) + 0x84)) = (r1 + 0x20);
    // sub r1, #0x1b
    *((u32*)r5) = (r1 + 0x20);
}





void ov112_021F3140(void) {
    // mov ip, r1
    // mov r1, ip
    // and r1, r3
    *((u8*)(((r1 + 0x84) + 0x86) + 0x86)) = r3;
    *((u8*)(((((r1 + 0x84) + 0x86) + 0x86) + 0x86) + 0x86)) = r3;
    *((u8*)(((((((r1 + 0x84) + 0x86) + 0x86) + 0x86) + 0x86) + 0x86) + 0x86)) = r3;
}





void ov112_021F31BC(void) {
}





void ov112_021F31D8(void) {
}





void ov112_021F3244(void) {
    // strh r0, [r4, r1]
}





void ov112_021F328C(void) {
    // str r1, [sp, #4]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp]
    // ldr r5, [sp, #0x10]
    Save_TrainerHouse_Get(0);
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    TrainerHouseSet_CheckHasData();
    // ldr r0, [sp, #8]
    ov112_021F35A4();
    // ldr r0, [sp, #4]
    GF_CalcCRC16(0x000001F2);
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #8]
    ov112_021F35A4(*((u16*)(r1 + 0x000001F2)), 0x000001F2);
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // add r1, sp, #0x18
    ov112_021F3608();
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r2, sp, #0x14
    ov112_021F35C8();
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x18
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r5, r0, r1
    // add r0, sp, #0x18
    // add r6, r0, r4
    // add r3, r5, r0
    // ldmia r3!, {r0, r1}
    // stmia r7!, {r0, r1}
    // strb r0, [r6]
    // add r5, r5, r0
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // add r1, r1, r3
    MI_CpuCopy8((6 << 6), (r0 * (6 << 6)), (6 << 6), ((r0 * (6 << 6)) * (6 << 6)));
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0x18
    // strb r2, [r1, r0]
    // ldr r0, [sp]
    ov112_021F3630();
}





void ov112_021F336C(void) {
    *((u32*)r5) = r0;
}





void ov112_021F33D8(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 0x18)) = r0;
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)(sp + 0x1c)) = r0;
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x18));
    // and r1, r2
    // and r0, r3
    *((u16*)r6) = *((u32*)sp);
    // and r1, r2
    *((u16*)r6) = *((u32*)sp);
    // and r0, r1
    *((u16*)r6) = *((u32*)sp);
    *((u32*)(sp + 0xc)) = *((u32*)sp);
    *((u8*)(*((u32*)(sp + 0x1c)) + 0x20)) = *((u32*)sp);
    *((u8*)((*((u32*)(sp + 0x1c)) + 0x20) + 0x21)) = *((u32*)sp);
    *((u8*)(((*((u32*)(sp + 0x1c)) + 0x20) + 0x21) + 0x22)) = *((u32*)sp);
    *((u32*)(sp + 0x10)) = r4;
    *((u32*)(sp + 8)) = r6;
    // lsl r1, r7
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 8)) = *((u32*)(sp + 8));
    *((u32*)(sp + 4)) = r4;
    // lsl r1, r7
    *((u32*)(sp + 4)) = *((u32*)(sp + 4));
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x1c)) = (r6 + r4);
}





void ov112_021F35A4(void) {
}





void ov112_021F35C8(void) {
    *((u32*)sp) = r2;
    *((u32*)*((u32*)sp)) = r1;
    *((u32*)*((u32*)sp)) = *((u32*)sp);
}





void ov112_021F3608(void) {
    // strb r0, [r6, r4]
}





void ov112_021F3630(void) {
    Save_VarsFlags_Get();
    Save_VarsFlags_SetFlagInArray(r0, *((u16*)ov112_021FF4D4));
    Save_VarsFlags_ClearFlagInArray(r6, *((u16*)r5));
}




