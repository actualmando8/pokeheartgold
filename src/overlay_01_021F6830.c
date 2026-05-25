/* Decompiled from asm/overlay_01_021F6830.s */
#include "global.h"

void ov01_021F6830(void) {
}




void ov01_021F6840(void) {
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    // add r1, #0xd0
    ov30_0225D520(*((u32*)(r4 + 8)), r4, r4, 0);
    // add r4, #0xd4
    // str r0, [r4]
}




void ov01_021F6864(void) {
    // add r1, #0xd4
}




void ov01_021F6874(void) {
    ov30_0225D6FC(*((u32*)(r0 + 8)));
    UnloadOverlayByID(FS_OVERLAY_ID);
}




void ov01_021F6894(void) {
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    // add r1, #0xd0
    ov01_021F68DC(*((u32*)(r4 + 8)), r4, r4);
    // add r4, #0xd8
    // str r0, [r4]
}




void ov01_021F68B8(void) {
}




void ov01_021F68C0(void) {
    ov01_021F6930();
    UnloadOverlayByID(FS_OVERLAY_ID);
}




void ov01_021F68DC(void) {
    CreateSysTaskAndEnvironment(ov01_021F69C0, 0x10, 0xa, 4);
    SysTask_GetData();
    // strb r1, [r0]
    *((u8*)(r0 + 1)) = 0;
    *((u32*)(r0 + 4)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u32*)(r0 + 8)) = r5;
    *((u32*)(r0 + 0xc)) = 0;
}




void ov01_021F690C(void) {
    // add r0, #0xd8
    SysTask_GetData(*((u32*)r0));
    // blx r2
}




void ov01_021F6930(void) {
    // add r0, #0xd8
    SysTask_GetData(*((u32*)r0));
    // blx r1
    ov01_021F69A4(r0, *((u32*)(ov01_02206C60 + (*((u8*)r0) << 4))), (*((u8*)r0) << 4));
    // add r5, #0xd8
    DestroySysTaskAndEnvironment(*((u32*)r5));
}




void ov01_021F6968(void) {
    // mvn r1, r1
    HandleLoadOverlay(*((u32*)(ov01_02206C60 + (*((u8*)r0) << 4))), 2);
    // add r1, #0xd0
    // blx r5
    *((u32*)(r4 + 4)) = *((u32*)(*((u32*)(r4 + 8)) + 8));
}




void ov01_021F69A4(void) {
}




void ov01_021F69C0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F69D8: ; jump table
    ov01_021F6968(r1);
    *((u8*)(r4 + 1)) = 1;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(4, 0, 0, 0);
    *((u8*)(r4 + 1)) = 3;
    IsPaletteFadeFinished(3);
    *((u8*)(r4 + 1)) = 4;
    // blx r2
    *((u8*)(r4 + 1)) = 5;
    // blx r1
    ov01_021F69A4(r4, *((u32*)(ov01_02206C60 + (*((u8*)r4) << 4))), (*((u8*)r4) << 4), (*((u8*)r4) << 4));
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = 6;
    ov01_021F6968(r4);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(4, 1, 1, 0);
    *((u8*)(r4 + 1)) = 7;
    IsPaletteFadeFinished(7);
    *((u8*)(r4 + 1)) = 1;
}




void ov01_021F6A9C(void) {
}




void ov01_021F6ABC(void) {
    // add r0, #0xd8
    // str r3, [sp]
    // ldr r0, [sp]
    // str r7, [r4]
}




void ov01_021F6AEC(void) {
}




void ov01_021F6B00(void) {
}




void ov01_021F6B10(void) {
}




void ov01_021F6B20(void) {
}




void ov01_021F6B34(void) {
}




void ov01_021F6B50(void) {
}




void ov01_021F6B64(void) {
    // add r0, #0xd8
}




void ov01_021F6B88(void) {
}




void ov01_021F6BA0(void) {
}




u8 ov01_021F6BAC(void) {
}




void ov01_021F6BB0(void) {
    // bne _021F6BBE
    // cmp r2, #0x2b
    // blo _021F6BB4
    // nop
    // _021F6BCC: .word ov01_02206C08
}




void ov01_021F6BD0(void) {
    // add r1, #0xc7
    // add r1, #0x63
    // add r1, #0x31
}




void ov01_021F6C28(void) {
}




void ov01_021F6C4C(void) {
    // add r5, #0x90
}




void ov01_021F6C7C(void) {
}




void ov01_021F6CA0(void) {
    // add r1, #0x98
    // add r0, #0x98
    // add r4, #0x98
    // strh r0, [r4]
    // add r0, #0x98
    // add r4, #0x98
    // strh r0, [r4]
    // add r4, #0x98
    // strh r0, [r4]
}



