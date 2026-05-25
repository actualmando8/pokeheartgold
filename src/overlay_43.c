/* Decompiled from asm/overlay_43.s */
#include "global.h"

void PalPad_Init(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02229FA4 ; =FS_OVERLAY_ID(OVY_42)
    // mov r1, #2
    // bl HandleLoadOverlay
    // mov r2, #7
    // mov r0, #3
    // mov r1, #0x33
    // lsl r2, r2, #0x10
    // bl Heap_Create
    // ldr r1, _02229FA8 ; =0x000005A4
    // add r0, r5, #0
    // mov r2, #0x33
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _02229FA8 ; =0x000005A4
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // mov r1, #0x9f
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r0, #0x68
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // mov r2, #0x33
    // bl ov43_0222A290
    // mov r1, #0x85
    // lsl r1, r1, #2
    // add r0, r4, #4
    // add r1, r4, r1
    // mov r2, #0x33
    // bl ov43_0222A48C
    // mov r1, #0xa
    // lsl r1, r1, #6
    // add r0, r4, r1
    // sub r1, #0x6c
    // add r1, r4, r1
    // add r2, r4, #4
    // mov r3, #0x33
    // bl ov43_0222AE5C
    // mov r1, #0xb
    // lsl r1, r1, #6
    // add r0, r4, r1
    // sub r1, #0xac
    // add r1, r4, r1
    // add r2, r4, #4
    // mov r3, #0x33
    // bl ov43_0222B5A8
    // mov r0, #0xf
    // mov r1, #0x85
    // lsl r0, r0, #6
    // lsl r1, r1, #2
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, #4
    // mov r3, #0x33
    // bl ov43_0222CBAC
    // mov r0, #0xf3
    // mov r1, #0x85
    // lsl r0, r0, #2
    // lsl r1, r1, #2
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, #4
    // mov r3, #0x33
    // bl ov43_0222CD90
    // ldr r0, _02229FAC ; =0x00000408
    // mov r1, #0x85
    // lsl r1, r1, #2
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, #4
    // mov r3, #0x33
    // bl ov43_0222D134
    // ldr r0, _02229FB0 ; =ov43_0222A148
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _02229FA4: .word FS_OVERLAY_ID(OVY_42)
    // _02229FA8: .word 0x000005A4
    // _02229FAC: .word 0x00000408
    // _02229FB0: .word ov43_0222A148
    // TODO: decompile
}



void PalPad_Main(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _02229FCC
    // cmp r0, #1
    // beq _0222A084
    // b _0222A098
    // ldr r0, [r4]
    // cmp r0, #5
    // bhi _0222A064
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02229FDE: ; jump table
    // mov r1, #0xa
    // lsl r1, r1, #6
    // add r0, r4, r1
    // sub r1, #0x6c
    // add r1, r4, r1
    // add r2, r4, #4
    // mov r3, #0x33
    // bl ov43_0222AE64
    // add r6, r0, #0
    // b _0222A064
    // mov r1, #0xb
    // lsl r1, r1, #6
    // add r0, r4, r1
    // sub r1, #0xac
    // add r1, r4, r1
    // add r2, r4, #4
    // mov r3, #0x33
    // bl ov43_0222B5D0
    // add r6, r0, #0
    // b _0222A064
    // mov r0, #0x33
    // str r0, [sp]
    // mov r0, #0xf
    // mov r2, #0x85
    // lsl r0, r0, #6
    // lsl r2, r2, #2
    // add r0, r4, r0
    // add r1, r4, #0
    // add r2, r4, r2
    // add r3, r4, #4
    // bl ov43_0222CBB4
    // add r6, r0, #0
    // b _0222A064
    // mov r0, #0xf3
    // mov r1, #0x85
    // lsl r0, r0, #2
    // lsl r1, r1, #2
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, #4
    // bl ov43_0222CD98
    // add r6, r0, #0
    // b _0222A064
    // ldr r0, _0222A0A4 ; =0x00000408
    // mov r1, #0x85
    // lsl r1, r1, #2
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, #4
    // mov r3, #0x33
    // bl ov43_0222D15C
    // add r6, r0, #0
    // b _0222A064
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // cmp r6, #1
    // bne _0222A098
    // ldr r0, _0222A0A8 ; =0x0000021D
    // ldrb r1, [r4, r0]
    // str r1, [r4]
    // add r1, r0, #1
    // ldrb r1, [r4, r1]
    // sub r0, r0, #1
    // strb r1, [r4, r0]
    // mov r0, #0x5a
    // mov r1, #4
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // mov r0, #1
    // str r0, [r5]
    // b _0222A098
    // mov r0, #0x5a
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bgt _0222A098
    // mov r0, #0
    // str r0, [r5]
    // add r0, r4, #4
    // bl ov43_0222A500
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _0222A0A4: .word 0x00000408
    // _0222A0A8: .word 0x0000021D
    // TODO: decompile
}



void PalPad_Exit(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // mov r1, #0xa
    // lsl r1, r1, #6
    // add r0, r4, r1
    // sub r1, #0x6c
    // add r1, r4, r1
    // add r2, r4, #4
    // bl ov43_0222B098
    // mov r1, #0xb
    // lsl r1, r1, #6
    // add r0, r4, r1
    // sub r1, #0xac
    // add r1, r4, r1
    // add r2, r4, #4
    // bl ov43_0222B93C
    // mov r0, #0xf
    // mov r1, #0x85
    // lsl r0, r0, #6
    // lsl r1, r1, #2
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, #4
    // bl ov43_0222CD34
    // mov r0, #0xf3
    // mov r1, #0x85
    // lsl r0, r0, #2
    // lsl r1, r1, #2
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, #4
    // bl ov43_0222CE0C
    // ldr r0, _0222A140 ; =0x00000408
    // mov r1, #0x85
    // lsl r1, r1, #2
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, #4
    // bl ov43_0222D228
    // add r0, r4, #4
    // bl ov43_0222A520
    // mov r1, #0x85
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, #0x68
    // ldr r1, [r4, r1]
    // bl ov43_0222A2F0
    // add r0, r5, #0
    // bl OverlayManager_FreeData
    // mov r0, #0x33
    // bl Heap_Destroy
    // ldr r0, _0222A144 ; =FS_OVERLAY_ID(OVY_42)
    // bl UnloadOverlayByID
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _0222A140: .word 0x00000408
    // _0222A144: .word FS_OVERLAY_ID(OVY_42)
    // TODO: decompile
}



void ov43_0222A148(void) {
}



void ov43_0222A154(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // mov r1, #0x85
    // add r5, r0, #0
    // lsl r1, r1, #2
    // add r0, r5, #4
    // add r1, r5, r1
    // add r2, r4, #0
    // bl ov43_0222A48C
    // mov r1, #0xa
    // lsl r1, r1, #6
    // add r0, r5, r1
    // sub r1, #0x6c
    // add r1, r5, r1
    // add r2, r5, #4
    // add r3, r4, #0
    // bl ov43_0222B0A0
    // mov r1, #0xb
    // lsl r1, r1, #6
    // add r0, r5, r1
    // sub r1, #0xac
    // add r1, r5, r1
    // add r2, r5, #4
    // add r3, r4, #0
    // bl ov43_0222B944
    // mov r0, #0xf
    // mov r1, #0x85
    // lsl r0, r0, #6
    // lsl r1, r1, #2
    // add r0, r5, r0
    // add r1, r5, r1
    // add r2, r5, #4
    // add r3, r4, #0
    // bl ov43_0222CD3C
    // mov r0, #0xf3
    // mov r1, #0x85
    // lsl r0, r0, #2
    // lsl r1, r1, #2
    // add r0, r5, r0
    // add r1, r5, r1
    // add r2, r5, #4
    // add r3, r4, #0
    // bl ov43_0222CE48
    // ldr r0, _0222A1D4 ; =0x00000408
    // mov r1, #0x85
    // lsl r1, r1, #2
    // add r0, r5, r0
    // add r1, r5, r1
    // add r2, r5, #4
    // add r3, r4, #0
    // bl ov43_0222D584
    // ldr r0, _0222A1D8 ; =ov43_0222A148
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // pop {r3, r4, r5, pc}
    // _0222A1D4: .word 0x00000408
    // _0222A1D8: .word ov43_0222A148
    // TODO: decompile
}



void ov43_0222A1DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // mov r1, #0xa
    // lsl r1, r1, #6
    // add r0, r4, r1
    // sub r1, #0x6c
    // add r1, r4, r1
    // add r2, r4, #4
    // bl ov43_0222B1D8
    // mov r1, #0xb
    // lsl r1, r1, #6
    // add r0, r4, r1
    // sub r1, #0xac
    // add r1, r4, r1
    // add r2, r4, #4
    // bl ov43_0222BAB8
    // mov r0, #0xf
    // mov r1, #0x85
    // lsl r0, r0, #6
    // lsl r1, r1, #2
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, #4
    // bl ov43_0222CD40
    // mov r0, #0xf3
    // mov r1, #0x85
    // lsl r0, r0, #2
    // lsl r1, r1, #2
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, #4
    // bl ov43_0222D008
    // ldr r0, _0222A248 ; =0x00000408
    // mov r1, #0x85
    // lsl r1, r1, #2
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, #4
    // bl ov43_0222D610
    // add r0, r4, #4
    // bl ov43_0222A520
    // pop {r4, pc}
    // _0222A248: .word 0x00000408
    // TODO: decompile
}



void ov43_0222A24C(void) {
    InitWindow(r1);
    // add r0, sp, #0x18
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(r5, r4, r6, r7);
    // add r1, sp, #0x3c
    // ldrb r1, [r1]
    FillWindowPixelBuffer(r4);
}



void ov43_0222A290(void) {
    *((u32*)(r0 + 4)) = *((u32*)r1);
    String_New(0x80, r2);
    *((u32*)(r5 + 0x58)) = r0;
    String_New(0x80, r6);
    *((u32*)(r5 + 0x5c)) = r0;
    MenuInputStateMgr_GetState(*((u32*)(r4 + 4)));
    // str r0, [r5]
    Save_PlayerData_GetOptionsAddr(*((u32*)(r5 + 4)));
    Options_GetTextFrameDelay();
    *((u8*)(r5 + 0xc)) = r0;
    Options_GetFrame(r4);
    *((u8*)(r5 + 0xd)) = r0;
    Options_GetButtonMode(r4);
    *((u8*)(r5 + 0xe)) = 0;
    TextFlags_SetCanABSpeedUpPrint(1);
    TextFlags_SetCanTouchSpeedUpPrint(1);
}



void ov43_0222A2F0(void) {
}



void ov43_0222A318(void) {
}



void ov43_0222A320(void) {
    // ldr r1, _0222A330 ; =gSystem
    // ldr r2, [r1, #0x48]
    // ldr r1, _0222A334 ; =0x00000CF3
    // tst r1, r2
    // beq _0222A32E
    // mov r1, #0
    // str r1, [r0]
    // bx lr
    // _0222A330: .word gSystem
    // _0222A334: .word 0x00000CF3
    // TODO: decompile
}



void ov43_0222A338(void) {
    String_Copy(*((u32*)(r0 + 0x58)));
    String_Copy(*((u32*)(r5 + 0x5c)), r4);
}



void ov43_0222A358(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    sub_0202C6F4(*((u32*)(r0 + 4)));
    sub_0202C08C();
    DWC_CreateFriendKey();
    // str r0, [sp, #0x10]
    // str r1, [sp, #0xc]
    sub_0202C2DC(r5, 0);
    // add r1, sp, #0x1c
    String_atoi(r6);
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0xc]
    // eor r1, r0
    // ldr r0, [sp, #0x10]
    // eor r0, r7
    // orr r0, r1
    sub_0202C08C(r5);
    DWC_CheckFriendKey(r7, r6);
    // ldr r0, [sp]
    // add r3, sp, #0x18
    sub_0203A128(*((u32*)(1 + 4)), r7, r6);
    sub_0202C23C(r5, r4);
    DWC_CreateFriendKeyToken(r7, r6);
    // ldr r2, [sp, #4]
    sub_0202C270(r5, r4);
    sub_0202C190(r5, r4, 8, 2);
    GF_AssertFail(1);
}



void ov43_0222A414(void) {
}



void ov43_0222A41C(void) {
}



void ov43_0222A420(void) {
    // add r0, #0x10
    memset(0, 0x48);
    sub_0202C6F4(*((u32*)(r5 + 4)));
    // str r0, [sp]
    *((u32*)(r5 + 0x10)) = 0;
    // add r6, #0x14
    // add r7, #0x10
    // ldr r0, [sp]
    sub_0202C2DC(0);
    // add r0, r5, r0
    *((u8*)(*((u32*)(r5 + 0x10)) + 0x18)) = r4;
    // ldr r0, [sp]
    sub_0202C090(*((u32*)(r5 + 0x10)), r4, 8);
    // add r1, r5, r0
    // add r1, #0x38
    // str r1, [r6]
    // add r1, r5, r1
    // add r1, #0x38
    // strb r0, [r1]
    // str r0, [r7]
}



void ov43_0222A48C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // ldr r0, _0222A4FC ; =gSystem + 0x60
    // mov r1, #1
    // add r4, r2, #0
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // mov r0, #0x55
    // add r1, r4, #0
    // bl NARC_New
    // str r0, [r5, #0x58]
    // bl ov43_0222A550
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov43_0222A570
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov43_0222A690
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov43_0222A87C
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov43_0222A8C0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov43_0222AC28
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov43_0222A998
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #1
    // bl TextFlags_SetCanABSpeedUpPrint
    // mov r0, #0
    // bl TextFlags_SetAutoScrollParam
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // pop {r4, r5, r6, pc}
    // nop
    // _0222A4FC: .word gSystem + 0x60
    // TODO: decompile
}



void ov43_0222A500(void) {
}



void ov43_0222A50C(void) {
}



void ov43_0222A520(void) {
}



void ov43_0222A550(void) {
}



void ov43_0222A570(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r7, r1, #0
    // add r5, r0, #0
    // add r0, r7, #0
    // bl BgConfig_Alloc
    // add r3, sp, #0x10
    // ldr r4, _0222A664 ; =ov43_0222EDC8
    // str r0, [r5]
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r6, _0222A668 ; =ov43_0222EFFC
    // mov r4, #0
    // lsl r1, r4, #0x18
    // ldr r0, [r5]
    // lsr r1, r1, #0x18
    // add r2, r6, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // mov r1, #0x20
    // mov r2, #0
    // add r3, r7, #0
    // bl BG_ClearCharDataRange
    // lsl r1, r4, #0x18
    // ldr r0, [r5]
    // lsr r1, r1, #0x18
    // bl BgClearTilemapBufferAndCommit
    // add r4, r4, #1
    // add r6, #0x1c
    // cmp r4, #7
    // blt _0222A598
    // mov r0, #0x16
    // lsl r0, r0, #4
    // str r0, [sp]
    // str r7, [sp, #4]
    // mov r2, #0
    // ldr r0, [r5, #0x58]
    // mov r1, #5
    // add r3, r2, #0
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r0, #0xa0
    // str r0, [sp]
    // str r7, [sp, #4]
    // mov r1, #4
    // ldr r0, [r5, #0x58]
    // add r2, r1, #0
    // mov r3, #0
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r3, #0
    // str r3, [sp]
    // str r3, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    // ldr r0, [r5, #0x58]
    // ldr r2, [r5]
    // mov r1, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    // ldr r0, [r5, #0x58]
    // ldr r2, [r5]
    // mov r1, #7
    // mov r3, #2
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    // mov r1, #6
    // ldr r0, [r5, #0x58]
    // ldr r2, [r5]
    // add r3, r1, #0
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r3, #0
    // str r3, [sp]
    // str r3, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    // ldr r0, [r5, #0x58]
    // ldr r2, [r5]
    // mov r1, #0xa
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    // ldr r0, [r5, #0x58]
    // ldr r2, [r5]
    // mov r1, #8
    // mov r3, #6
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222A664: .word ov43_0222EDC8
    // _0222A668: .word ov43_0222EFFC
    // TODO: decompile
}



void ov43_0222A66C(void) {
    FreeBgTilemapBuffer(*((u32*)r0), ((0 << 0x18) >> 0x18));
    Heap_Free(*((u32*)r5));
    // str r0, [r5]
}



void ov43_0222A690(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // add r7, r1, #0
    // add r6, r0, #0
    // bl NNS_G2dInitOamManagerModule
    // mov r0, #0x10
    // add r1, r7, #0
    // bl GF_CreateVramTransferManager
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x7e
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #0x1e
    // str r3, [sp, #0xc]
    // add r2, r0, #0
    // str r7, [sp, #0x10]
    // bl OamManager_Create
    // ldr r4, _0222A814 ; =ov43_0222EDD8
    // add r3, sp, #0x2c
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r1, #0x10
    // add r0, r2, #0
    // add r2, r1, #0
    // str r7, [sp, #0x38]
    // bl ObjCharTransfer_InitEx
    // mov r0, #0x40
    // add r1, r7, #0
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // add r1, r6, #0
    // mov r0, #0x40
    // add r1, #0xbc
    // add r2, r7, #0
    // bl G2dRenderer_Init
    // str r0, [r6, #4]
    // add r0, r6, #0
    // add r3, r6, #0
    // ldr r1, _0222A818 ; =ov43_0222F0FC
    // add r0, #8
    // mov r2, #1
    // add r3, #0xbc
    // bl sub_0200B27C
    // mov r4, #0
    // add r5, r6, #0
    // mov r0, #0x40
    // add r1, r4, #0
    // add r2, r7, #0
    // bl Create2DGfxResObjMan
    // mov r1, #0x79
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _0222A706
    // mov r0, #0x64
    // str r0, [sp]
    // mov r2, #1
    // str r2, [sp, #4]
    // str r7, [sp, #8]
    // add r0, r1, #0
    // ldr r0, [r6, r0]
    // ldr r1, [r6, #0x58]
    // add r3, r2, #0
    // bl AddCharResObjFromOpenNarc
    // add r1, r6, #0
    // add r1, #0xac
    // str r0, [r1]
    // mov r0, #0x64
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #5
    // str r0, [sp, #8]
    // mov r0, #0x7a
    // str r7, [sp, #0xc]
    // lsl r0, r0, #2
    // mov r2, #0
    // ldr r0, [r6, r0]
    // ldr r1, [r6, #0x58]
    // add r3, r2, #0
    // bl AddPlttResObjFromOpenNarc
    // add r1, r6, #0
    // add r1, #0xb0
    // str r0, [r1]
    // mov r0, #0x64
    // str r0, [sp]
    // mov r2, #2
    // str r2, [sp, #4]
    // mov r0, #0x7b
    // str r7, [sp, #8]
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // ldr r1, [r6, #0x58]
    // mov r3, #1
    // bl AddCellOrAnimResObjFromOpenNarc
    // add r1, r6, #0
    // add r1, #0xb4
    // str r0, [r1]
    // mov r0, #0x64
    // str r0, [sp]
    // mov r2, #3
    // str r2, [sp, #4]
    // mov r0, #0x1f
    // str r7, [sp, #8]
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // ldr r1, [r6, #0x58]
    // mov r3, #1
    // bl AddCellOrAnimResObjFromOpenNarc
    // add r1, r6, #0
    // add r1, #0xb8
    // str r0, [r1]
    // add r0, r6, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // bl sub_0200ADA4
    // cmp r0, #0
    // bne _0222A7AC
    // bl GF_AssertFail
    // add r0, r6, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // bl sub_0200B00C
    // cmp r0, #0
    // bne _0222A7BE
    // bl GF_AssertFail
    // add r0, r6, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // bl sub_0200A740
    // add r0, r6, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // bl sub_0200A740
    // mov r1, #0x64
    // add r0, r1, #0
    // mov r3, #0x79
    // str r1, [sp]
    // sub r0, #0x65
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // lsl r3, r3, #2
    // ldr r2, [r6, r3]
    // str r2, [sp, #0x14]
    // add r2, r3, #4
    // ldr r2, [r6, r2]
    // str r2, [sp, #0x18]
    // add r2, r3, #0
    // add r2, #8
    // ldr r2, [r6, r2]
    // add r3, #0xc
    // str r2, [sp, #0x1c]
    // ldr r2, [r6, r3]
    // add r6, #0x88
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r6, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl CreateSpriteResourcesHeader
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // _0222A814: .word ov43_0222EDD8
    // _0222A818: .word ov43_0222F0FC
    // TODO: decompile
}



void ov43_0222A81C(void) {
    // add r0, #0xac
    sub_0200AEB0(*((u32*)r0));
    // add r0, #0xb0
    sub_0200B0A8(*((u32*)r7));
    // add r1, #0xac
    // ldr r0, [r5, r6]
    DestroySingle2DGfxResObj(*((u32*)r7));
    // ldr r0, [r4, r6]
    Destroy2DGfxResObjMan();
    SpriteList_Delete(*((u32*)(r7 + 4)));
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    OamManager_Free();
    GF_DestroyVramTransferManager();
}



void ov43_0222A87C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl MessageFormat_New
    // str r0, [r5, #0x50]
    // ldr r2, _0222A8A4 ; =0x0000030B
    // mov r0, #0
    // mov r1, #0x1b
    // add r3, r4, #0
    // bl NewMsgDataFromNarc
    // str r0, [r5, #0x54]
    // mov r0, #4
    // add r1, r4, #0
    // bl FontID_Alloc
    // pop {r3, r4, r5, pc}
    // nop
    // _0222A8A4: .word 0x0000030B
    // TODO: decompile
}



void ov43_0222A8A8(void) {
}



void ov43_0222A8C0(void) {
    LoadFontPal1(0, (0x16 << 4));
    LoadFontPal1(4, (7 << 6), r4);
    // str r0, [sp]
    // str r4, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r5), 1, 0x46, 0xc);
    // add r0, #0x64
    InitWindow(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x64
    AddWindowParameterized(*((u32*)r5), r5, 1, 1);
    String_New(0x80, r4);
    *((u32*)(r5 + 0x74)) = r0;
    String_New(0x80, r4);
    *((u32*)(r5 + 0x78)) = r0;
    String_New(0x80, r4);
    *((u32*)(r5 + 0x7c)) = r0;
    String_New(0x80, r4);
    // add r1, #0x80
    // str r0, [r1]
    TouchscreenListMenuSpawner_Create(r4, 0);
    *((u32*)(r5 + 0x5c)) = r0;
    YesNoPrompt_Create(r4);
    *((u32*)(r5 + 0x60)) = r0;
}



void ov43_0222A960(void) {
}



void ov43_0222A998(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r1, [sp, #8]
    // mov r1, #0x82
    // lsl r1, r1, #2
    // ldr r4, _0222A9D4 ; =ov43_0222F0C0
    // str r0, [sp, #4]
    // mov r7, #0
    // add r6, r0, r1
    // add r5, r0, #0
    // ldr r0, [sp, #8]
    // mov r2, #1
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldrb r1, [r4]
    // ldr r0, [r0, #0x58]
    // add r3, r6, #0
    // bl GfGfxLoader_GetScrnDataFromOpenNarc
    // mov r1, #2
    // lsl r1, r1, #8
    // str r0, [r5, r1]
    // add r7, r7, #1
    // add r6, r6, #4
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r7, #2
    // blt _0222A9AC
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0222A9D4: .word ov43_0222F0C0
    // TODO: decompile
}



void ov43_0222A9D8(void) {
}



void ov43_0222A9F4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r0, #0x84
    // ldr r0, [r0]
    // add r4, r1, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // add r6, r2, #0
    // bl TextPrinterCheckActive
    // cmp r0, #1
    // bne _0222AA22
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // add r0, r5, #0
    // add r0, #0x84
    // ldr r0, [r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl RemoveTextPrinter
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x54]
    // ldr r2, [r5, #0x78]
    // add r1, r6, #0
    // bl ReadMsgDataIntoString
    // ldr r0, [r5, #0x50]
    // ldr r1, [r5, #0x74]
    // ldr r2, [r5, #0x78]
    // bl StringExpandPlaceholders
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _0222AA6C ; =0x000F0200
    // mov r3, #0
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r2, [r5, #0x74]
    // add r0, r4, #0
    // mov r1, #1
    // bl AddTextPrinterParameterizedWithColor
    // add r5, #0x84
    // str r0, [r5]
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _0222AA6C: .word 0x000F0200
    // TODO: decompile
}



void ov43_0222AA70(void) {
    // add r0, #0x84
    TextPrinterCheckActive(((*((u32*)r0) << 0x18) >> 0x18));
    TextFlags_SetCanTouchSpeedUpPrint(0);
    // add r0, #0x84
    RemoveTextPrinter(((*((u32*)r4) << 0x18) >> 0x18));
    // add r4, #0x64
    ClearWindowTilemapAndScheduleTransfer(r4);
}



void ov43_0222AAA4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r6, r2, #0
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0222AB18 ; =0x05F5E100
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r3, #0
    // bl _ll_udiv
    // add r2, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // ldr r0, [r5, #0x50]
    // mov r3, #4
    // bl BufferIntegerAsString
    // ldr r2, _0222AB1C ; =0x00002710
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r3, #0
    // bl _ll_udiv
    // ldr r2, _0222AB1C ; =0x00002710
    // mov r3, #0
    // bl _ull_mod
    // mov r1, #2
    // add r2, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x50]
    // mov r3, #4
    // bl BufferIntegerAsString
    // ldr r2, _0222AB1C ; =0x00002710
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r3, #0
    // bl _ull_mod
    // add r2, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x50]
    // mov r1, #3
    // mov r3, #4
    // bl BufferIntegerAsString
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _0222AB18: .word 0x05F5E100
    // _0222AB1C: .word 0x00002710
    // TODO: decompile
}



void ov43_0222AB20(void) {
}



void ov43_0222AB5C(void) {
}



void ov43_0222AB94(void) {
    sub_0202C6F4(r1);
    sub_0202C090(r4, 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x50)), 2, r0, 2);
    sub_0202C090(r7, r4, 4);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x50)), 0, r0, 4);
    sub_0202C090(r7, r4, 5);
    BufferMonthNameAbbr(*((u32*)(r5 + 0x50)), 1, r0);
}



void ov43_0222ABFC(void) {
}



void ov43_0222AC18(void) {
    // ldr r3, _0222AC24 ; =BufferWiFiPlazaActivityName
    // add r2, r1, #0
    // ldr r0, [r0, #0x50]
    // mov r1, #0
    // bx r3
    // nop
    // _0222AC24: .word BufferWiFiPlazaActivityName
    // TODO: decompile
}



void ov43_0222AC28(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp]
    // ldr r5, [sp]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r4, _0222ACD0 ; =ov43_0222F14C
    // add r0, r5, #0
    // str r0, [sp, #0xc]
    // add r0, #0x88
    // str r1, [sp, #4]
    // add r7, r4, #0
    // mov r6, #5
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [r0, #4]
    // str r0, [r4]
    // ldr r0, [sp, #0xc]
    // str r0, [r4, #4]
    // ldr r0, [sp, #4]
    // str r0, [r4, #0x2c]
    // add r0, r7, #0
    // bl Sprite_CreateAffine
    // mov r1, #0x7d
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r1, #0
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [sp, #8]
    // add r4, #0x30
    // add r0, r0, #1
    // add r7, #0x30
    // add r5, r5, #4
    // add r6, r6, #2
    // str r0, [sp, #8]
    // cmp r0, #2
    // blt _0222AC44
    // ldr r0, [sp]
    // ldr r1, _0222ACD4 ; =ov43_0222F160
    // ldr r0, [r0, #4]
    // str r0, [r1, #0x4c]
    // ldr r0, [sp]
    // add r0, #0x88
    // str r0, [r1, #0x50]
    // ldr r0, [sp, #4]
    // str r0, [r1, #0x78]
    // ldr r0, _0222ACD8 ; =ov43_0222F1AC
    // bl Sprite_CreateAffine
    // mov r2, #0x7f
    // ldr r1, [sp]
    // lsl r2, r2, #2
    // str r0, [r1, r2]
    // add r0, r1, #0
    // ldr r0, [r0, r2]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r1, #0x7f
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #1
    // bl Sprite_SetAnimCtrlSeq
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222ACD0: .word ov43_0222F14C
    // _0222ACD4: .word ov43_0222F160
    // _0222ACD8: .word ov43_0222F1AC
    // TODO: decompile
}



void ov43_0222ACDC(void) {
    // ldr r0, [r5, r0]
    Sprite_Delete((0x7f << 2));
    // ldr r0, [r5, r6]
    Sprite_Delete();
}



void ov43_0222AD00(void) {
}



void ov43_0222AD20(void) {
}



void ov43_0222AD40(void) {
    // add r5, r0, r2
    // ldr r0, [r5, r4]
    Sprite_SetAnimActiveFlag(1, (0x7d << 2));
    // ldr r0, [r5, r4]
    // add r1, r1, r7
    Sprite_SetAnimCtrlSeq((r6 + 5));
    // ldr r0, [r5, r4]
    Sprite_ResetAnimCtrlState();
}



void ov43_0222AD74(void) {
    // ldr r0, [r5, r0]
    Sprite_SetAnimCtrlSeq((0x7f << 2), r2);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0x7f << 2), r4);
}



void ov43_0222AD98(void) {
    // ldr r0, [r5, r0]
    Sprite_SetPriority((0x7f << 2));
    // ldr r0, [r5, r0]
    Sprite_SetDrawPriority((0x7f << 2), r4);
}



void ov43_0222ADB8(void) {
    // add r0, sp, #4
    MI_CpuFill8(0, 0x14);
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, sp, #4
    *((u8*)(0xd + 0x10)) = 0x19;
    *((u8*)(0xd + 0x11)) = 9;
    // bic r1, r2
    // and r2, r3
    // orr r1, r2
    *((u8*)(0xd + 0x12)) = *((u8*)(0xd + 0x12));
    // bic r1, r2
    // orr r1, r2
    *((u8*)(0xd + 0x12)) = *((u8*)(0xd + 0x12));
    *((u8*)(0xd + 0x13)) = 0;
    // add r1, sp, #4
    YesNoPrompt_InitFromTemplate(*((u32*)(r4 + 0x60)), 0, ((((r6 << 0x18) >> 0x18) << 0x1c) >> 0x18), ((*((u32*)r5) << 0x18) >> 0x18));
    // str r0, [sp]
    StartBrightnessTransition(4, 8, 0, 0x3d);
}



void ov43_0222AE2C(void) {
    YesNoPrompt_HandleInput(*((u32*)(r1 + 0x60)));
    YesNoPrompt_IsInTouchMode(*((u32*)(r4 + 0x60)));
    // str r0, [r5]
    YesNoPrompt_Reset(*((u32*)(r4 + 0x60)));
    SetBlendBrightness(0, 0x3d, 1);
}



void ov43_0222AE5C(void) {
}



void ov43_0222AE64(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r4, r1, #0
    // add r7, r3, #0
    // ldrb r3, [r4, #8]
    // add r5, r0, #0
    // add r6, r2, #0
    // cmp r3, #0xb
    // bhi _0222AEF0
    // add r3, r3, r3
    // add r3, pc
    // ldrh r3, [r3, #6]
    // lsl r3, r3, #0x10
    // asr r3, r3, #0x10
    // add pc, r3
    // _0222AE82: ; jump table
    // bl ov43_0222B1FC
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0
    // mov r1, #0x11
    // add r2, r1, #0
    // add r3, r0, #0
    // str r7, [sp, #8]
    // bl BeginNormalPaletteFade
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0222B08A
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0222AEF0
    // mov r0, #3
    // strb r0, [r4, #8]
    // b _0222B08A
    // bl ov43_0222B1FC
    // mov r0, #3
    // strb r0, [r4, #8]
    // b _0222B08A
    // bl ov43_0222B374
    // str r0, [sp, #0x10]
    // cmp r0, #0
    // beq _0222AEF0
    // mov r0, #2
    // str r0, [r5, #4]
    // mov r0, #4
    // strb r0, [r4, #8]
    // b _0222B08A
    // ldr r3, [r5, #4]
    // sub r2, r3, #1
    // str r2, [r5, #4]
    // cmp r3, #0
    // beq _0222AEF2
    // b _0222B08A
    // mov r2, #0
    // str r2, [r5, #4]
    // bl ov43_0222B574
    // cmp r0, #1
    // bne _0222AF24
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov43_0222B440
    // ldr r0, [r5]
    // cmp r0, #3
    // beq _0222AF10
    // cmp r0, #1
    // bne _0222AF16
    // mov r0, #5
    // strb r0, [r4, #8]
    // b _0222B08A
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov43_0222B458
    // add sp, #0x14
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r5]
    // cmp r0, #1
    // bne _0222B01C
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x3a
    // add r3, r7, #0
    // bl ov43_0222B4BC
    // mov r0, #0xb
    // strb r0, [r4, #8]
    // b _0222B08A
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0
    // mov r1, #0x10
    // str r7, [sp, #8]
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0222B08A
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _0222B01C
    // add sp, #0x14
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // bl ov43_0222B1FC
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0
    // mov r1, #0x11
    // add r2, r1, #0
    // add r3, r0, #0
    // str r7, [sp, #8]
    // bl BeginNormalPaletteFade
    // mov r0, #8
    // strb r0, [r4, #8]
    // b _0222B08A
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0222B08A
    // add r0, r7, #0
    // bl PlayerProfile_New
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x58]
    // bl String_cstr
    // add r1, r0, #0
    // ldr r0, [sp, #0xc]
    // bl Save_Profile_PlayerName_Set
    // ldr r0, [r6, #0x50]
    // ldr r2, [sp, #0xc]
    // mov r1, #0
    // bl BufferPlayersName
    // ldr r0, [sp, #0xc]
    // bl Heap_Free
    // ldr r0, [r4, #0x5c]
    // add r1, sp, #0x10
    // bl String_atoi
    // add r3, r0, #0
    // ldr r0, [sp, #0x10]
    // add r2, r1, #0
    // cmp r0, #0
    // beq _0222AFE2
    // add r0, r6, #0
    // add r1, r3, #0
    // bl ov43_0222AAA4
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x37
    // add r3, r7, #0
    // bl ov43_0222B4BC
    // mov r0, #9
    // strb r0, [r4, #8]
    // b _0222B08A
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x38
    // add r3, r7, #0
    // bl ov43_0222B4BC
    // mov r0, #0xb
    // strb r0, [r4, #8]
    // b _0222B08A
    // bl ov43_0222B534
    // cmp r0, #0
    // beq _0222B08A
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0
    // bl ov43_0222ADB8
    // mov r0, #0xa
    // strb r0, [r4, #8]
    // b _0222B08A
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov43_0222AE2C
    // cmp r0, #1
    // beq _0222B01E
    // cmp r0, #2
    // beq _0222B04C
    // b _0222B08A
    // ldr r1, [r4, #0x5c]
    // ldr r2, [r4, #0x58]
    // add r0, r4, #0
    // bl ov43_0222A358
    // add r2, r0, #0
    // bne _0222B038
    // add r0, r5, #0
    // bl ov43_0222B55C
    // mov r0, #3
    // strb r0, [r4, #8]
    // b _0222B08A
    // ldr r3, _0222B090 ; =ov43_0222F0C8
    // add r0, r5, #0
    // ldrb r2, [r3, r2]
    // add r1, r6, #0
    // add r3, r7, #0
    // bl ov43_0222B4BC
    // mov r0, #0xb
    // strb r0, [r4, #8]
    // b _0222B08A
    // add r0, r5, #0
    // bl ov43_0222B55C
    // mov r0, #3
    // strb r0, [r4, #8]
    // b _0222B08A
    // bl ov43_0222B534
    // cmp r0, #0
    // beq _0222B08A
    // ldr r0, _0222B094 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // bne _0222B078
    // mov r0, #2
    // tst r0, r1
    // bne _0222B078
    // bl System_GetTouchNew
    // cmp r0, #0
    // beq _0222B08A
    // add r0, r5, #0
    // bl ov43_0222B55C
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov43_0222B408
    // mov r0, #3
    // strb r0, [r4, #8]
    // mov r0, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0222B090: .word ov43_0222F0C8
    // _0222B094: .word gSystem
    // TODO: decompile
}



void ov43_0222B098(void) {
}



void ov43_0222B0A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // str r0, [sp, #0x14]
    // add r0, #8
    // add r5, r1, #0
    // str r2, [sp, #0x24]
    // str r3, [sp, #0x18]
    // bl InitWindow
    // mov r3, #4
    // ldr r1, [sp, #0x14]
    // str r3, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0x14
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x24]
    // add r1, #8
    // ldr r0, [r0]
    // mov r2, #3
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x14]
    // add r0, #0x20
    // bl InitWindow
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // mov r0, #0xac
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x14]
    // ldr r0, [r0]
    // add r1, #0x20
    // mov r2, #1
    // mov r3, #2
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x14]
    // mov r1, #0
    // add r0, #8
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // mov r1, #0
    // add r0, #0x20
    // bl FillWindowPixelBuffer
    // ldr r1, [sp, #0x18]
    // mov r0, #0x80
    // bl String_New
    // ldr r1, [sp, #0x14]
    // str r0, [r1, #0x3c]
    // ldr r0, [r5, #4]
    // bl Save_PlayerData_GetOptionsAddr
    // bl Options_GetTextFrameDelay
    // ldr r1, [sp, #0x14]
    // str r0, [r1, #0x38]
    // ldr r1, [sp, #0x18]
    // mov r0, #0x80
    // bl String_New
    // add r4, r0, #0
    // ldr r1, [sp, #0x18]
    // mov r0, #0x80
    // bl String_New
    // str r0, [sp, #0x1c]
    // ldr r0, [r5, #4]
    // bl Save_PlayerData_GetProfile
    // add r2, r0, #0
    // ldr r0, [sp, #0x24]
    // mov r1, #0
    // ldr r0, [r0, #0x50]
    // bl BufferPlayersName
    // ldr r0, [sp, #0x14]
    // mov r7, #0
    // str r0, [sp, #0x20]
    // add r0, #8
    // mov r5, #8
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x1c]
    // ldr r0, [r0, #0x54]
    // add r1, r7, #1
    // bl ReadMsgDataIntoString
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x1c]
    // ldr r0, [r0, #0x50]
    // add r1, r4, #0
    // bl StringExpandPlaceholders
    // mov r0, #4
    // add r1, r4, #0
    // mov r2, #0
    // bl FontID_String_GetWidth
    // mov ip, r0
    // str r5, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222B1D4 ; =0x00010F00
    // mov r3, #0xc0
    // str r0, [sp, #8]
    // mov r0, #0
    // mov r6, ip
    // str r0, [sp, #0xc]
    // sub r3, r3, r6
    // ldr r0, [sp, #0x20]
    // mov r1, #4
    // add r2, r4, #0
    // lsr r3, r3, #1
    // bl AddTextPrinterParameterizedWithColor
    // add r7, r7, #1
    // add r5, #0x28
    // cmp r7, #4
    // blt _0222B160
    // add r0, r4, #0
    // bl String_Delete
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // mov r1, #0xb
    // ldr r0, [r0, #0x58]
    // mov r2, #1
    // add r3, #0x1c
    // bl GfGfxLoader_GetScrnDataFromOpenNarc
    // ldr r1, [sp, #0x14]
    // str r0, [r1, #0x18]
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222B1D4: .word 0x00010F00
    // TODO: decompile
}



void ov43_0222B1D8(void) {
}



void ov43_0222B1FC(void) {
    // add r1, #0x64
    ov43_0222A9F4(r2, r2, 0);
    // add r0, #8
    ScheduleWindowCopyToVram(r5);
    // str r3, [sp]
    // ldrh r0, [r2]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    LoadRectToBgTilemapRect(*((u32*)r4), 2, *((u32*)(r5 + 0x1c)), 0);
    ScheduleSetBgPosText(*((u32*)r4), 2, 0, 0);
    ScheduleSetBgPosText(*((u32*)r4), 2, 3, 0);
    ov43_0222AD74(r4, 1, 0);
    ov43_0222AD98(r4, 1, 0);
    ov43_0222B3A4(r5, r4);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
}



void ov43_0222B278(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _0222B314 ; =gSystem
    // add r4, r2, #0
    // ldr r3, [r0, #0x48]
    // ldr r0, _0222B318 ; =0x00000CF3
    // mov r2, #0
    // tst r0, r3
    // beq _0222B28C
    // str r2, [r1]
    // ldr r6, _0222B314 ; =gSystem
    // mov r0, #1
    // ldr r1, [r6, #0x48]
    // add r3, r1, #0
    // tst r3, r0
    // beq _0222B2AA
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov43_0222B3C4
    // ldr r0, _0222B31C ; =0x000005DD
    // bl PlaySE
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r3, #2
    // tst r1, r3
    // beq _0222B2BE
    // ldr r0, _0222B31C ; =0x000005DD
    // bl PlaySE
    // mov r0, #3
    // str r0, [r5]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldr r1, [r6, #0x4c]
    // mov r3, #0x40
    // tst r3, r1
    // beq _0222B2DC
    // ldr r1, [r5]
    // cmp r1, #0
    // beq _0222B2D4
    // sub r1, r1, #1
    // str r1, [r5]
    // add r2, r0, #0
    // b _0222B2F6
    // mov r1, #3
    // str r1, [r5]
    // add r2, r0, #0
    // b _0222B2F6
    // mov r3, #0x80
    // tst r1, r3
    // beq _0222B2F6
    // ldr r1, [r5]
    // cmp r1, #3
    // bhs _0222B2F0
    // add r1, r1, #1
    // str r1, [r5]
    // add r2, r0, #0
    // b _0222B2F6
    // mov r1, #0
    // str r1, [r5]
    // add r2, r0, #0
    // cmp r2, #1
    // bne _0222B310
    // ldr r0, _0222B320 ; =0x000005E5
    // bl PlaySE
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov43_0222B3A4
    // ldr r0, [r4]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _0222B314: .word gSystem
    // _0222B318: .word 0x00000CF3
    // _0222B31C: .word 0x000005DD
    // _0222B320: .word 0x000005E5
    // TODO: decompile
}



void ov43_0222B324(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _0222B36C ; =ov43_0222EE1A
    // add r6, r1, #0
    // add r4, r2, #0
    // add r7, r3, #0
    // bl TouchscreenHitbox_FindHitboxAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _0222B340
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #1
    // str r1, [r7]
    // str r1, [r6]
    // str r0, [r5]
    // ldr r0, _0222B370 ; =0x000005DD
    // bl PlaySE
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov43_0222B3C4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov43_0222B3A4
    // ldr r0, [r4]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222B36C: .word ov43_0222EE1A
    // _0222B370: .word 0x000005DD
    // TODO: decompile
}



void ov43_0222B374(void) {
    // str r3, [sp]
    // add r3, sp, #0
    ov43_0222B324(0);
    // ldr r1, [sp]
    // str r1, [r4]
    ov43_0222B278(r5, r4, r6);
}



void ov43_0222B3A4(void) {
    // add r2, r0, #0
    // ldr r3, [r2]
    // mov r2, #0x28
    // mul r2, r3
    // mov r0, #0x7f
    // add r2, #0x30
    // lsl r0, r0, #2
    // lsl r2, r2, #0x10
    // ldr r0, [r1, r0]
    // ldr r3, _0222B3C0 ; =Sprite_SetPositionXY
    // mov r1, #0x80
    // asr r2, r2, #0x10
    // bx r3
    // nop
    // _0222B3C0: .word Sprite_SetPositionXY
    // TODO: decompile
}



void ov43_0222B3C4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r1), 2, 2, ((4 << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)r6), 2);
}



void ov43_0222B408(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r1), 2, 2, ((4 << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 2);
}



void ov43_0222B440(void) {
    // add r2, r0, #0
    // add r0, r1, #0
    // ldr r2, [r2]
    // ldr r1, _0222B450 ; =ov43_0222F0CC
    // ldr r3, _0222B454 ; =ov43_0222A318
    // ldrb r1, [r1, r2]
    // mov r2, #0
    // bx r3
    // _0222B450: .word ov43_0222F0CC
    // _0222B454: .word ov43_0222A318
    // TODO: decompile
}



void ov43_0222B458(void) {
    ov43_0222AA70(r1);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r4), 2, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r4), 3, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 3);
    // add r5, #8
    ClearWindowTilemapAndScheduleTransfer(r5);
    ov43_0222AD74(r4, 0, 0xff);
}



void ov43_0222B4BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #0x80
    // add r1, r3, #0
    // add r7, r2, #0
    // bl String_New
    // add r6, r0, #0
    // add r0, r5, #0
    // add r0, #0x20
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // ldr r0, [r4, #0x54]
    // add r1, r7, #0
    // add r2, r6, #0
    // bl ReadMsgDataIntoString
    // ldr r0, [r4, #0x50]
    // ldr r1, [r5, #0x3c]
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, [r5, #0x38]
    // mov r1, #1
    // str r0, [sp, #4]
    // ldr r0, _0222B530 ; =0x00010200
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, #0
    // ldr r2, [r5, #0x3c]
    // add r0, #0x20
    // bl AddTextPrinterParameterizedWithColor
    // str r0, [r5, #0x34]
    // add r0, r5, #0
    // add r0, #0x20
    // mov r1, #1
    // mov r2, #0x46
    // mov r3, #0xc
    // bl DrawFrameAndWindow2
    // add r5, #0x20
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222B530: .word 0x00010200
    // TODO: decompile
}



void ov43_0222B534(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x34)) << 0x18) >> 0x18));
    TextFlags_SetCanTouchSpeedUpPrint(0);
    TextFlags_GetIsTouchSpeedingUpPrint();
    // str r0, [r4]
}



void ov43_0222B55C(void) {
}



void ov43_0222B574(void) {
    sub_0202C6F4(*((u32*)(r1 + 4)));
    sub_0202C2DC(r0, 0);
}



void ov43_0222B5A8(void) {
}



void ov43_0222B5D0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r4, r1, #0
    // ldrb r5, [r4, #8]
    // add r6, r0, #0
    // add r7, r2, #0
    // str r3, [sp, #0xc]
    // cmp r5, #0x17
    // bls _0222B5E4
    // b _0222B932
    // add r5, r5, r5
    // add r5, pc
    // ldrh r5, [r5, #6]
    // lsl r5, r5, #0x10
    // asr r5, r5, #0x10
    // add pc, r5
    // _0222B5F0: ; jump table
    // mov r0, #0
    // strh r0, [r6]
    // strh r0, [r6, #2]
    // strh r0, [r6, #4]
    // strh r0, [r6, #6]
    // add r0, r4, #0
    // bl ov43_0222A420
    // ldr r3, [sp, #0xc]
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl ov43_0222BB20
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0222B932
    // bl ov43_0222BFA4
    // cmp r0, #4
    // bhi _0222B70A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222B656: ; jump table
    // add r0, r6, #0
    // add r1, r4, #0
    // mov r2, #2
    // bl ov43_0222C53C
    // b _0222B932
    // add r0, r6, #0
    // add r1, r4, #0
    // mov r2, #3
    // bl ov43_0222C53C
    // b _0222B932
    // mov r0, #0x17
    // strb r0, [r4, #8]
    // b _0222B932
    // mov r0, #4
    // add r6, #0xf4
    // str r0, [r6]
    // mov r0, #5
    // strb r0, [r4, #8]
    // b _0222B932
    // bl ov43_0222BFD4
    // mov r0, #4
    // strb r0, [r4, #8]
    // b _0222B932
    // bl ov43_0222C024
    // cmp r0, #1
    // bne _0222B70A
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0222B932
    // add r2, r6, #0
    // add r2, #0xf4
    // add r1, r6, #0
    // ldr r2, [r2]
    // add r1, #0xf4
    // sub r3, r2, #1
    // add r2, r6, #0
    // ldr r1, [r1]
    // add r2, #0xf4
    // str r3, [r2]
    // cmp r1, #0
    // bgt _0222B70A
    // add r1, r6, #0
    // mov r2, #0
    // add r1, #0xf4
    // str r2, [r1]
    // bl ov43_0222C620
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222A41C
    // ldr r3, [sp, #0xc]
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl ov43_0222C148
    // mov r0, #6
    // strb r0, [r4, #8]
    // b _0222B932
    // bl ov43_0222C228
    // strb r0, [r4, #8]
    // b _0222B932
    // mov r0, #4
    // add r6, #0xf4
    // str r0, [r6]
    // mov r0, #8
    // strb r0, [r4, #8]
    // b _0222B932
    // add r3, r6, #0
    // add r3, #0xf4
    // ldr r3, [r3]
    // sub r5, r3, #1
    // add r3, r6, #0
    // add r3, #0xf4
    // add r6, #0xf4
    // str r5, [r3]
    // ldr r3, [r6]
    // cmp r3, #0
    // ble _0222B70C
    // b _0222B932
    // bl ov43_0222BBB8
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #0
    // bl ov43_0222A318
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0xb
    // ldrsb r2, [r4, r1]
    // asr r0, r2, #2
    // lsr r0, r0, #0x1d
    // add r0, r2, r0
    // asr r0, r0, #3
    // strh r0, [r6]
    // ldrsb r0, [r4, r1]
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1d
    // sub r1, r1, r2
    // mov r0, #0x1d
    // ror r1, r0
    // add r0, r2, r1
    // strh r0, [r6, #4]
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0222B932
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r3, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // mov r1, #0x10
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // add r0, r6, #0
    // bl ov43_0222C620
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // bl sub_0202C6F4
    // add r1, r4, r5
    // ldrb r1, [r1, #0x18]
    // bl sub_0202C254
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222A414
    // mov r0, #0xb
    // strb r0, [r4, #8]
    // b _0222B932
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0222B818
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl ov43_0222BBB8
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #4
    // bl ov43_0222A318
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // bl ov43_0222C620
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // bl sub_0202C6F4
    // add r1, r4, r5
    // ldrb r1, [r1, #0x18]
    // ldr r2, [r4, #0x58]
    // bl sub_0202C270
    // ldr r3, [sp, #0xc]
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl ov43_0222BB20
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // mov r1, #0x11
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // mov r0, #0xe
    // strb r0, [r4, #8]
    // b _0222B932
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0222B818
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0222B932
    // bl ov43_0222C32C
    // mov r0, #0x10
    // strb r0, [r4, #8]
    // b _0222B932
    // bl ov43_0222C358
    // cmp r0, #1
    // bne _0222B818
    // mov r0, #0x11
    // strb r0, [r4, #8]
    // b _0222B932
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov43_0222AE2C
    // cmp r0, #1
    // beq _0222B81A
    // cmp r0, #2
    // beq _0222B826
    // b _0222B932
    // add r0, r6, #0
    // bl ov43_0222C600
    // mov r0, #0x12
    // strb r0, [r4, #8]
    // b _0222B932
    // add r0, r6, #0
    // bl ov43_0222C600
    // add r0, r7, #0
    // mov r1, #1
    // bl ov43_0222AD00
    // mov r2, #4
    // add r0, r6, #0
    // ldrsh r2, [r6, r2]
    // add r0, #8
    // add r1, r7, #0
    // mov r3, #0
    // bl ov43_0222C890
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0222B932
    // add r1, r7, #0
    // bl ov43_0222C65C
    // mov r0, #0x13
    // strb r0, [r4, #8]
    // b _0222B932
    // add r1, r7, #0
    // bl ov43_0222C714
    // cmp r0, #1
    // bne _0222B932
    // ldr r0, [r4, #4]
    // bl sub_0202C6F4
    // str r0, [sp, #0x10]
    // add r0, r6, #0
    // bl ov43_0222C620
    // str r0, [sp, #0x14]
    // add r5, r4, #0
    // ldr r1, [sp, #0x14]
    // add r5, #0x18
    // ldrb r1, [r5, r1]
    // ldr r0, [sp, #0x10]
    // bl sub_0202C338
    // ldr r0, [r4, #4]
    // bl Save_Frontier_GetStatic
    // ldr r1, [sp, #0x14]
    // ldrb r1, [r5, r1]
    // bl sub_020311AC
    // add r0, r4, #0
    // bl ov43_0222A420
    // mov r0, #4
    // ldrsh r0, [r6, r0]
    // mov r3, #0
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldrsh r3, [r6, r3]
    // add r0, r6, #0
    // add r2, r7, #0
    // bl ov43_0222C378
    // add r0, r7, #0
    // mov r1, #1
    // bl ov43_0222AD00
    // mov r0, #0x14
    // strb r0, [r4, #8]
    // b _0222B932
    // add r1, r7, #0
    // bl ov43_0222C750
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0222B932
    // bl ov43_0222C2B0
    // cmp r0, #1
    // bne _0222B8D4
    // mov r0, #0x16
    // strb r0, [r4, #8]
    // b _0222B932
    // add r0, r7, #0
    // mov r1, #1
    // bl ov43_0222AD00
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0222B932
    // bl ov43_0222C5D8
    // cmp r0, #0
    // beq _0222B932
    // ldr r0, _0222B938 ; =gSystem
    // ldr r0, [r0, #0x48]
    // cmp r0, #0
    // bne _0222B8FA
    // bl System_GetTouchNew
    // cmp r0, #0
    // beq _0222B932
    // add r0, r7, #0
    // mov r1, #1
    // bl ov43_0222AD00
    // mov r2, #4
    // add r0, r6, #0
    // ldrsh r2, [r6, r2]
    // add r0, #8
    // add r1, r7, #0
    // mov r3, #0
    // bl ov43_0222C890
    // mov r0, #2
    // strb r0, [r4, #8]
    // add r0, r6, #0
    // bl ov43_0222C600
    // b _0222B932
    // bl ov43_0222BBB8
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #2
    // bl ov43_0222A318
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222B938: .word gSystem
    // TODO: decompile
}



void ov43_0222B93C(void) {
}



void ov43_0222B944(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x5c
    // str r0, [sp, #0x18]
    // ldr r4, [sp, #0x18]
    // mov r0, #0
    // ldr r5, _0222BA9C ; =ov43_0222ED74
    // ldr r6, _0222BAA0 ; =ov43_0222EE08
    // add r7, r2, #0
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x28]
    // add r4, #8
    // ldr r0, [sp, #0x1c]
    // add r1, r7, #0
    // str r0, [sp]
    // ldrh r3, [r5]
    // add r0, r4, #0
    // add r2, r6, #0
    // bl ov43_0222C788
    // ldr r0, [sp, #0x28]
    // add r5, r5, #2
    // add r0, r0, #1
    // add r6, r6, #6
    // add r4, #0x38
    // str r0, [sp, #0x28]
    // cmp r0, #3
    // blt _0222B95A
    // ldr r0, [r7, #4]
    // ldr r3, [sp, #0x1c]
    // mov r1, #0
    // mov r2, #0x10
    // bl ov42_02227060
    // ldr r1, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // add r1, #0xb4
    // str r0, [r1]
    // ldr r0, [sp, #0x18]
    // mov r1, #1
    // add r0, #0xb4
    // ldr r0, [r0]
    // mov r2, #2
    // bl ov42_02227228
    // mov r3, #0x15
    // ldr r1, [sp, #0x18]
    // str r3, [sp]
    // mov r0, #9
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // ldr r0, _0222BAA4 ; =0x0000014F
    // add r1, #0xb8
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, [r7]
    // mov r2, #1
    // bl ov43_0222A24C
    // ldr r0, [r7, #0x54]
    // mov r1, #7
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222BAA8 ; =0x00010F00
    // mov r1, #4
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // add r2, r4, #0
    // add r0, #0xb8
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r0, _0222BAAC ; =ov43_0222EEE0
    // ldr r6, [sp, #0x18]
    // str r0, [sp, #0x24]
    // ldr r1, [sp, #0x1c]
    // mov r0, #4
    // bl ListMenuItems_New
    // add r1, r6, #0
    // add r1, #0xe4
    // ldr r5, [sp, #0x24]
    // str r0, [r1]
    // mov r4, #0
    // add r0, r6, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // ldr r1, [r7, #0x54]
    // ldr r2, [r5]
    // ldr r3, [r5, #4]
    // bl ListMenuItems_AppendFromMsgData
    // add r4, r4, #1
    // add r5, #8
    // cmp r4, #4
    // blt _0222BA06
    // ldr r0, [sp, #0x24]
    // add r6, r6, #4
    // add r0, #0x20
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r0, r0, #1
    // str r0, [sp, #0x20]
    // cmp r0, #2
    // blt _0222B9F4
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // ldr r0, _0222BAB0 ; =0x00000161
    // ldr r1, [sp, #0x18]
    // str r0, [sp, #0x10]
    // mov r0, #0xf
    // str r0, [sp, #0x14]
    // ldr r0, [r7]
    // add r1, #0xc8
    // mov r2, #1
    // mov r3, #2
    // bl ov43_0222A24C
    // ldr r1, [sp, #0x1c]
    // mov r0, #0x80
    // bl String_New
    // ldr r1, [sp, #0x18]
    // ldr r4, _0222BAB4 ; =ov43_0222EEB0
    // add r1, #0xd8
    // str r0, [r1]
    // add r3, sp, #0x2c
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0222BA6A
    // ldr r0, [r7, #4]
    // add r7, #0x88
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // str r7, [sp, #0x30]
    // str r0, [sp, #0x58]
    // add r0, sp, #0x2c
    // bl Sprite_CreateAffine
    // ldr r1, [sp, #0x18]
    // add r1, #0xf8
    // str r0, [r1]
    // ldr r0, [sp, #0x18]
    // mov r1, #0
    // add r0, #0xf8
    // str r0, [sp, #0x18]
    // ldr r0, [r0]
    // bl Sprite_SetDrawFlag
    // add sp, #0x5c
    // pop {r4, r5, r6, r7, pc}
    // _0222BA9C: .word ov43_0222ED74
    // _0222BAA0: .word ov43_0222EE08
    // _0222BAA4: .word 0x0000014F
    // _0222BAA8: .word 0x00010F00
    // _0222BAAC: .word ov43_0222EEE0
    // _0222BAB0: .word 0x00000161
    // _0222BAB4: .word ov43_0222EEB0
    // TODO: decompile
}



void ov43_0222BAB8(void) {
    // add r0, #0xf8
    Sprite_Delete(*((u32*)r0));
    // add r0, #0xc8
    RemoveWindow(r5);
    // add r0, #0xd8
    String_Delete(*((u32*)r5));
    // add r0, #0xe4
    ListMenuItems_Delete(*((u32*)r5));
    // add r0, #0xb8
    RemoveWindow(r5);
    // add r0, #0xb4
    ov42_02227274(*((u32*)r5));
    // add r0, #0xb4
    ov42_02227114(*((u32*)r5));
    // add r5, #8
    ov43_0222C7EC(r5, r7);
    // add r5, #0x38
}



void ov43_0222BB20(void) {
    // add r1, #0x64
    ov43_0222A9F4(r2, r2, 5);
    // ldr r0, [r4, r0]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldrh r2, [r0]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r4), 0, 0x11, 0x14);
    // add r0, #0xb8
    ScheduleWindowCopyToVram(r5);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 0);
    ov43_0222AD00(r4, 1);
    // ldrsh r0, [r5, r0]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r6, [sp, #8]
    // ldrsh r3, [r5, r3]
    ov43_0222C378(r5, r7, r4, 0);
    ov43_0222AD74(r4, 1, 1);
    ov43_0222AD98(r4, 1, 0x10);
}



void ov43_0222BBB8(void) {
    ov43_0222AA70(r2);
    // add r0, #0xb8
    ClearWindowTilemapAndScheduleTransfer(r5);
    // add r5, #8
    // add r2, r4, r7
    ov43_0222C9A4(r5, r4);
    // add r5, #0x38
    ov43_0222AD74(r4, 0, 0xff);
    ov43_0222AD98(r4, 1, 9);
    ov43_0222AD00(r4, 0);
    // ldr r0, [r4, r0]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldrh r3, [r0]
    // str r3, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r4), 0, 0x11, 0x14);
    // ldr r0, [r4, r0]
    // str r2, [sp]
    // str r3, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldrh r1, [r0]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r4), 0, 0x10, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 0);
}



void ov43_0222BC78(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r2, #0
    // cmp r3, #0
    // bne _0222BC9C
    // ldr r0, _0222BD14 ; =0x000005DD
    // bl PlaySE
    // mov r2, #4
    // add r0, r5, #0
    // ldrsh r2, [r5, r2]
    // add r0, #8
    // add r1, r4, #0
    // mov r3, #1
    // bl ov43_0222C890
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // cmp r3, #5
    // bne _0222BCEA
    // mov r0, #4
    // ldrsh r2, [r5, r0]
    // cmp r2, #8
    // bne _0222BCC2
    // ldr r0, _0222BD14 ; =0x000005DD
    // bl PlaySE
    // mov r2, #4
    // add r0, r5, #0
    // ldrsh r2, [r5, r2]
    // add r0, #8
    // add r1, r4, #0
    // mov r3, #1
    // bl ov43_0222C890
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // ldrsh r3, [r5, r0]
    // ldr r1, [r1, #0x10]
    // lsl r3, r3, #3
    // add r2, r2, r3
    // cmp r1, r2
    // bls _0222BD10
    // ldr r0, _0222BD14 ; =0x000005DD
    // bl PlaySE
    // mov r2, #4
    // add r0, r5, #0
    // ldrsh r2, [r5, r2]
    // add r0, #8
    // add r1, r4, #0
    // mov r3, #1
    // bl ov43_0222C890
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // cmp r3, #1
    // bne _0222BCFC
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #1
    // bl ov43_0222AD40
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // cmp r3, #2
    // bne _0222BD0E
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov43_0222AD40
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0222BD14: .word 0x000005DD
    // TODO: decompile
}



void ov43_0222BD18(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, _0222BEE0 ; =gSystem
    // add r6, r1, #0
    // ldr r1, [r0, #0x48]
    // ldr r0, _0222BEE4 ; =0x00000CF3
    // add r7, r2, #0
    // tst r0, r1
    // beq _0222BD30
    // mov r0, #0
    // str r0, [r6]
    // ldr r0, _0222BEE0 ; =gSystem
    // mov r2, #1
    // ldr r1, [r0, #0x48]
    // tst r2, r1
    // beq _0222BD4A
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // mov r3, #5
    // bl ov43_0222BC78
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // mov r2, #2
    // tst r1, r2
    // beq _0222BD72
    // mov r0, #8
    // strh r0, [r5, #4]
    // mov r2, #4
    // add r0, r5, #0
    // ldrsh r2, [r5, r2]
    // add r0, #8
    // add r1, r7, #0
    // bl ov43_0222C844
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // mov r3, #0
    // bl ov43_0222BC78
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // mov r1, #4
    // ldrsh r1, [r5, r1]
    // mov r4, #0
    // lsl r2, r1, #0x10
    // lsr r2, r2, #0x10
    // str r2, [sp, #8]
    // add r2, r4, #0
    // str r2, [sp, #4]
    // ldr r2, [r0, #0x4c]
    // mov r0, #0x40
    // tst r0, r2
    // beq _0222BDBA
    // cmp r1, #8
    // bne _0222BDA0
    // mov r0, #6
    // ldrsh r0, [r5, r0]
    // mov r4, #1
    // add r1, r4, #0
    // strh r0, [r5, #4]
    // add r0, r7, #0
    // bl ov43_0222AD00
    // b _0222BE62
    // cmp r1, #4
    // bge _0222BDB0
    // cmp r1, #0
    // ble _0222BE62
    // sub r0, r1, #1
    // strh r0, [r5, #4]
    // mov r4, #1
    // b _0222BE62
    // ble _0222BE62
    // sub r0, r1, #1
    // strh r0, [r5, #4]
    // mov r4, #1
    // b _0222BE62
    // mov r0, #0x80
    // tst r0, r2
    // beq _0222BDEC
    // cmp r1, #3
    // beq _0222BDC8
    // cmp r1, #7
    // bne _0222BDD0
    // mov r0, #8
    // strh r0, [r5, #4]
    // mov r4, #1
    // b _0222BE62
    // cmp r1, #4
    // bge _0222BDE0
    // cmp r1, #3
    // bge _0222BE62
    // add r0, r1, #1
    // strh r0, [r5, #4]
    // mov r4, #1
    // b _0222BE62
    // cmp r1, #7
    // bge _0222BE62
    // add r0, r1, #1
    // strh r0, [r5, #4]
    // mov r4, #1
    // b _0222BE62
    // mov r0, #0x20
    // tst r0, r2
    // beq _0222BE12
    // cmp r1, #8
    // beq _0222BE62
    // cmp r1, #4
    // bge _0222BE0A
    // add r0, r1, #4
    // mov r4, #1
    // strh r0, [r5, #4]
    // add r0, r4, #0
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp]
    // b _0222BE62
    // sub r0, r1, #4
    // strh r0, [r5, #4]
    // mov r4, #1
    // b _0222BE62
    // mov r3, #0x10
    // add r0, r2, #0
    // tst r0, r3
    // beq _0222BE38
    // cmp r1, #8
    // beq _0222BE62
    // cmp r1, #4
    // bge _0222BE2A
    // add r0, r1, #4
    // strh r0, [r5, #4]
    // mov r4, #1
    // b _0222BE62
    // sub r0, r1, #4
    // mov r4, #1
    // strh r0, [r5, #4]
    // add r0, r4, #0
    // str r0, [sp, #4]
    // str r0, [sp]
    // b _0222BE62
    // ldrb r0, [r6, #0xe]
    // cmp r0, #0
    // beq _0222BE62
    // beq _0222BE50
    // lsl r1, r3, #5
    // tst r1, r2
    // beq _0222BE50
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r4, #0
    // str r0, [sp]
    // b _0222BE62
    // cmp r0, #0
    // beq _0222BE62
    // mov r0, #1
    // lsl r0, r0, #8
    // tst r0, r2
    // beq _0222BE62
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // cmp r0, #1
    // bne _0222BEBC
    // ldr r0, [sp]
    // cmp r0, #0
    // beq _0222BE96
    // mov r0, #0
    // ldrsh r1, [r5, r0]
    // mov r3, #2
    // strh r1, [r5, #2]
    // ldrsh r0, [r5, r0]
    // add r0, r0, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // strh r0, [r5]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl ov43_0222BC78
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // ldrsh r1, [r5, r0]
    // strh r1, [r5, #2]
    // ldrsh r1, [r5, r0]
    // sub r1, r1, #1
    // strh r1, [r5]
    // ldrsh r0, [r5, r0]
    // cmp r0, #0
    // bge _0222BEAC
    // add r0, r0, #4
    // strh r0, [r5]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // mov r3, #1
    // bl ov43_0222BC78
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // cmp r4, #1
    // bne _0222BED8
    // ldr r0, _0222BEE8 ; =0x000005E5
    // bl PlaySE
    // mov r2, #4
    // add r0, r5, #0
    // ldrsh r2, [r5, r2]
    // add r0, #8
    // add r1, r7, #0
    // bl ov43_0222C844
    // ldr r0, [sp, #8]
    // strh r0, [r5, #6]
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222BEE0: .word gSystem
    // _0222BEE4: .word 0x00000CF3
    // _0222BEE8: .word 0x000005E5
    // TODO: decompile
}



void ov43_0222BEEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _0222BF9C ; =ov43_0222EF60
    // add r7, r1, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // bl TouchscreenHitbox_FindHitboxAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _0222BF08
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #8
    // bhi _0222BF34
    // mov r1, #1
    // str r1, [r6]
    // strh r0, [r5, #4]
    // ldr r0, _0222BFA0 ; =0x000005E5
    // bl PlaySE
    // mov r2, #4
    // add r0, r5, #0
    // ldrsh r2, [r5, r2]
    // add r0, #8
    // add r1, r4, #0
    // bl ov43_0222C844
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, r4, #0
    // mov r3, #5
    // bl ov43_0222BC78
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #9
    // beq _0222BF4C
    // cmp r0, #0xa
    // bne _0222BF40
    // mov r1, #1
    // b _0222BF4C
    // mov r1, #0
    // ldrsh r1, [r5, r1]
    // sub r0, #0xb
    // sub r0, r0, r1
    // lsl r0, r0, #0x18
    // asr r1, r0, #0x18
    // cmp r1, #0
    // bne _0222BF54
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // str r0, [r6]
    // mov r0, #0
    // ldrsh r2, [r5, r0]
    // strh r2, [r5, #2]
    // ldrsh r2, [r5, r0]
    // add r2, r2, r1
    // strh r2, [r5]
    // cmp r1, #0
    // ldrsh r0, [r5, r0]
    // blt _0222BF86
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // strh r0, [r5]
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, r4, #0
    // mov r3, #2
    // bl ov43_0222BC78
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #0
    // bge _0222BF8E
    // add r0, r0, #4
    // strh r0, [r5]
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, r4, #0
    // mov r3, #1
    // bl ov43_0222BC78
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222BF9C: .word ov43_0222EF60
    // _0222BFA0: .word 0x000005E5
    // TODO: decompile
}



void ov43_0222BFA4(void) {
    // str r3, [sp]
    // add r3, sp, #0
    ov43_0222BEEC(0);
    // ldr r1, [sp]
    // str r1, [r4]
    ov43_0222BD18(r5, r4, r6);
}



void ov43_0222BFD4(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, #0xb2
    // ldrh r0, [r0]
    // add r4, r2, #0
    // cmp r0, #2
    // bne _0222BFE8
    // mov r2, #2
    // b _0222BFEA
    // mov r2, #1
    // mov r0, #4
    // ldrsh r0, [r5, r0]
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // mov r3, #0
    // ldrsh r3, [r5, r3]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov43_0222C378
    // add r5, #8
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0xa
    // bl ov43_0222C844
    // add r0, r4, #0
    // mov r1, #0
    // bl ov43_0222AD20
    // ldr r0, _0222C020 ; =0x000005E1
    // bl PlaySE
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _0222C020: .word 0x000005E1
    // TODO: decompile
}



void ov43_0222C024(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // mov r0, #0xb0
    // ldrsh r0, [r5, r0]
    // str r1, [sp, #0xc]
    // add r4, r2, #0
    // add r6, r3, #0
    // cmp r0, #8
    // blt _0222C0B4
    // mov r2, #0
    // ldr r0, [r4]
    // mov r1, #2
    // add r3, r2, #0
    // bl ScheduleSetBgPosText
    // mov r2, #0
    // ldr r0, [r4]
    // mov r1, #3
    // add r3, r2, #0
    // bl ScheduleSetBgPosText
    // ldr r3, _0222C140 ; =ov43_0222F0FC
    // add r2, sp, #0x10
    // add r7, r2, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r4, #0
    // add r0, #8
    // add r1, r7, #0
    // bl GF_SetG2dRendererSurface
    // add r0, r5, #0
    // add r0, #0xb2
    // ldrh r0, [r0]
    // cmp r0, #2
    // bne _0222C076
    // mov r2, #2
    // b _0222C078
    // mov r2, #1
    // mov r0, #0x38
    // add r1, r5, #0
    // mul r0, r2
    // mov r2, #2
    // add r1, #8
    // lsl r2, r2, #8
    // add r0, r1, r0
    // add r1, r4, #0
    // add r2, r4, r2
    // bl ov43_0222C9A4
    // mov r0, #4
    // ldrsh r0, [r5, r0]
    // mov r3, #0
    // ldr r1, [sp, #0xc]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r6, [sp, #8]
    // ldrsh r3, [r5, r3]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov43_0222C378
    // add r0, r4, #0
    // mov r1, #1
    // bl ov43_0222AD20
    // add sp, #0x20
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r1, r0, #8
    // asr r0, r1, #2
    // lsr r0, r0, #0x1d
    // add r0, r1, r0
    // asr r6, r0, #3
    // add r0, r5, #0
    // add r0, #0xb2
    // ldrh r0, [r0]
    // cmp r0, #2
    // bne _0222C0CA
    // neg r6, r6
    // ldr r0, [r4]
    // mov r1, #2
    // mov r2, #0
    // add r3, r6, #0
    // bl ScheduleSetBgPosText
    // ldr r0, [r4]
    // mov r1, #3
    // mov r2, #0
    // add r3, r6, #0
    // bl ScheduleSetBgPosText
    // ldr r3, _0222C140 ; =ov43_0222F0FC
    // add r2, sp, #0x10
    // add r7, r2, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r1, [sp, #0x10]
    // lsl r0, r6, #0xc
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // add r0, #8
    // add r1, r7, #0
    // bl GF_SetG2dRendererSurface
    // mov r0, #0xb0
    // ldrsh r3, [r5, r0]
    // mov r0, #0x1f
    // lsr r2, r3, #0x1f
    // lsl r1, r3, #0x1f
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // beq _0222C130
    // add r2, r3, r2
    // asr r0, r2, #1
    // lsl r1, r0, #2
    // ldr r0, _0222C144 ; =ov43_0222F0EC
    // ldr r6, [r0, r1]
    // cmp r6, #0
    // beq _0222C130
    // mov r2, #0
    // mov r3, #2
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // add r0, r5, #0
    // add r1, r4, #0
    // blx r6
    // mov r0, #0xb0
    // ldrsh r0, [r5, r0]
    // add r5, #0xb0
    // add r0, r0, #1
    // strh r0, [r5]
    // mov r0, #0
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222C140: .word ov43_0222F0FC
    // _0222C144: .word ov43_0222F0EC
    // TODO: decompile
}



void ov43_0222C148(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // add r5, r1, #0
    // add r6, r0, #0
    // ldr r0, [r5, #4]
    // add r4, r2, #0
    // str r3, [sp, #0x18]
    // bl sub_0202C6F4
    // str r0, [sp, #0x1c]
    // add r0, r6, #0
    // bl ov43_0222C620
    // str r0, [sp, #0x20]
    // add r7, r5, #0
    // ldr r1, [sp, #0x20]
    // add r7, #0x18
    // ldrb r1, [r7, r1]
    // ldr r0, [sp, #0x1c]
    // mov r2, #8
    // bl sub_0202C090
    // str r0, [sp, #0x24]
    // add r0, sp, #0x28
    // mov r1, #0
    // mov r2, #0x18
    // bl MI_CpuFill8
    // ldr r1, _0222C220 ; =ov43_0222ED9C
    // add r0, sp, #0x28
    // ldrh r2, [r1, #4]
    // strh r2, [r0]
    // ldrh r2, [r1, #6]
    // strh r2, [r0, #2]
    // ldrh r2, [r1, #8]
    // strh r2, [r0, #4]
    // ldrh r2, [r1, #0xa]
    // strh r2, [r0, #6]
    // ldrh r2, [r1, #0xc]
    // ldrh r1, [r1, #0xe]
    // strh r2, [r0, #8]
    // strh r1, [r0, #0xa]
    // ldr r0, [sp, #0x24]
    // cmp r0, #2
    // bne _0222C1AC
    // add r0, r6, #0
    // add r0, #0xe8
    // ldr r0, [r0]
    // str r0, [sp, #0x34]
    // b _0222C1B4
    // add r0, r6, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // str r0, [sp, #0x34]
    // ldr r0, [r4]
    // mov r1, #4
    // str r0, [sp, #0x38]
    // add r0, sp, #0x28
    // strb r1, [r0, #0x14]
    // mov r0, #5
    // str r0, [sp]
    // mov r0, #0x11
    // str r0, [sp, #4]
    // mov r1, #0
    // ldr r0, _0222C224 ; =ov43_0222C630
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r0, #1
    // str r0, [sp, #0x14]
    // ldr r2, [r5]
    // ldr r0, [r4, #0x5c]
    // lsl r2, r2, #0x18
    // add r1, sp, #0x28
    // lsr r2, r2, #0x18
    // mov r3, #0xd
    // bl TouchscreenListMenu_CreateWithCallback
    // add r1, r6, #0
    // add r1, #0xec
    // str r0, [r1]
    // ldr r2, [sp, #0x20]
    // ldr r1, [r5, #4]
    // ldrb r2, [r7, r2]
    // ldr r3, [sp, #0x18]
    // add r0, r4, #0
    // bl ov43_0222AB20
    // ldr r3, [sp, #0x18]
    // add r0, r6, #0
    // add r1, r4, #0
    // mov r2, #0xc
    // bl ov43_0222C550
    // add r0, r4, #0
    // mov r1, #0
    // bl ov43_0222AD00
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #4
    // mov r1, #8
    // mov r2, #0
    // mov r3, #0x3d
    // bl StartBrightnessTransition
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222C220: .word ov43_0222ED9C
    // _0222C224: .word ov43_0222C630
    // TODO: decompile
}



void ov43_0222C228(void) {
    ov43_0222C5D8();
    // add r0, #0xec
    TouchscreenListMenu_HandleInput(*((u32*)r5));
    // mvn r0, r0
    ov43_0222AD00(r6, 1);
    ov43_0222C600(r5);
    // add r0, #0xec
    TouchscreenListMenu_WasLastInputTouch(*((u32*)r5));
    // str r0, [r7]
    // add r0, #0xec
    TouchscreenListMenu_Destroy(*((u32*)r5));
    ov43_0222AD00(r6, 1);
    // ldrsh r2, [r5, r2]
    // add r0, #8
    ov43_0222C890(r5, r6, 4, 0);
    SetBlendBrightness(0, 0x3d, 1);
}



void ov43_0222C2B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r1, #0
    // str r0, [sp]
    // ldr r0, [r5, #4]
    // add r4, r2, #0
    // str r3, [sp, #4]
    // bl sub_0202C6F4
    // str r0, [sp, #0x1c]
    // ldr r0, [sp]
    // bl ov43_0222C620
    // add r6, r5, #0
    // add r7, r0, #0
    // add r6, #0x18
    // ldrb r1, [r6, r7]
    // ldr r0, [sp, #0x1c]
    // bl sub_0202C23C
    // bl DWC_GetFriendKey
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // mov r2, #0
    // eor r0, r2
    // ldr r2, [sp, #0x14]
    // mov r1, #0
    // eor r1, r2
    // orr r0, r1
    // beq _0222C2F6
    // mov r0, #0x3c
    // str r0, [sp, #8]
    // b _0222C2FA
    // mov r0, #0x42
    // str r0, [sp, #8]
    // ldr r0, _0222C328 ; =0x000005DD
    // bl PlaySE
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // add r0, r4, #0
    // bl ov43_0222AAA4
    // ldrb r2, [r6, r7]
    // ldr r1, [r5, #4]
    // ldr r3, [sp, #4]
    // add r0, r4, #0
    // bl ov43_0222AB20
    // ldr r0, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r1, r4, #0
    // bl ov43_0222C550
    // mov r0, #1
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222C328: .word 0x000005DD
    // TODO: decompile
}



void ov43_0222C32C(void) {
}



void ov43_0222C358(void) {
    ov43_0222C5D8();
    ov43_0222ADB8(r5, r4, 1);
}



void ov43_0222C378(void) {
    // str r1, [sp, #0x10]
    // ldr r1, [sp, #0x34]
    // ldr r1, [sp, #0x30]
    // strh r7, [r5]
    *((u16*)(r0 + 4)) = r1;
    ov43_0222C3E8(r2, r3);
    // ldr r1, [sp, #0x34]
    // mul r0, r1
    // add r4, #8
    // str r0, [sp, #0x14]
    // add r0, r4, r0
    // add r2, r6, r2
    ov43_0222C7F8(0x38, r6, (2 << 8));
    // add r0, r6, r0
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // add r5, #0xb4
    // add r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // str r7, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x10]
    // add r0, r4, r0
    ov43_0222C918((2 << 8), r6, *((u32*)r5));
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x30]
    // add r0, r4, r0
    ov43_0222C844(r6);
}



void ov43_0222C3E8(void) {
    // ldr r0, [r5, r0]
    // str r2, [sp]
    // str r3, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldrh r3, [r0]
    // str r3, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r1), 0, 0x10, 0);
    // ldr r0, [r5, r0]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldrh r1, [r0]
    // add r2, #0x10
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r5), 0, (((r4 << 2) << 0x18) >> 0x18), 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 0);
}



void ov43_0222C46C(void) {
    // ldr r0, [r4, r0]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // add r2, #0x10
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldrh r1, [r0]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r1), 0, (((r3 << 2) << 0x18) >> 0x18), 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 0);
}



void ov43_0222C4B8(void) {
    // ldr r0, [r5, r0]
    // str r2, [sp]
    // str r3, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldrh r3, [r0]
    // str r3, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r1), 0, 0x10, 0);
    // ldr r0, [r5, r0]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldrh r1, [r0]
    // add r2, #0x10
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r5), 0, (((r4 << 2) << 0x18) >> 0x18), 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 0);
}



void ov43_0222C53C(void) {
    *((u8*)(r1 + 8)) = 3;
    // add r1, #0xb2
    // strh r2, [r1]
    // add r0, #0xb0
    // strh r1, [r0]
}



void ov43_0222C550(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r3, #0
    // add r0, #0xc8
    // mov r1, #0xf
    // add r7, r2, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x80
    // add r1, r6, #0
    // bl String_New
    // add r6, r0, #0
    // ldr r0, [r4, #0x54]
    // add r1, r7, #0
    // add r2, r6, #0
    // bl ReadMsgDataIntoString
    // add r1, r5, #0
    // add r1, #0xd8
    // ldr r0, [r4, #0x50]
    // ldr r1, [r1]
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // mov r3, #0
    // add r0, r5, #0
    // add r2, r5, #0
    // str r3, [sp]
    // add r0, #0xe0
    // ldr r0, [r0]
    // add r2, #0xd8
    // str r0, [sp, #4]
    // ldr r0, _0222C5D4 ; =0x00010200
    // mov r1, #1
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, #0
    // ldr r2, [r2]
    // add r0, #0xc8
    // bl AddTextPrinterParameterizedWithColor
    // add r1, r5, #0
    // add r1, #0xdc
    // str r0, [r1]
    // add r0, r5, #0
    // add r0, #0xc8
    // mov r1, #1
    // mov r2, #0x46
    // mov r3, #0xc
    // bl DrawFrameAndWindow2
    // add r5, #0xc8
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222C5D4: .word 0x00010200
    // TODO: decompile
}



void ov43_0222C5D8(void) {
    // add r0, #0xdc
    TextPrinterCheckActive(((*((u32*)r0) << 0x18) >> 0x18));
    TextFlags_SetCanTouchSpeedUpPrint(0);
    TextFlags_GetIsTouchSpeedingUpPrint();
    // str r0, [r4]
}



void ov43_0222C600(void) {
}



void ov43_0222C620(void) {
    // ldrsh r1, [r0, r1]
    // ldrsh r0, [r0, r1]
    // add r0, r2, r0
}



void ov43_0222C630(void) {
    // push {r3, lr}
    // cmp r3, #1
    // bne _0222C63E
    // ldr r0, _0222C658 ; =0x000005DC
    // bl PlaySE
    // pop {r3, pc}
    // cmp r3, #2
    // bne _0222C64A
    // ldr r0, _0222C658 ; =0x000005DC
    // bl PlaySE
    // pop {r3, pc}
    // cmp r3, #3
    // bne _0222C654
    // ldr r0, _0222C658 ; =0x000005DC
    // bl PlaySE
    // pop {r3, pc}
    // nop
    // _0222C658: .word 0x000005DC
    // TODO: decompile
}



void ov43_0222C65C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, #0xf8
    // add r4, r1, #0
    // ldr r0, [r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0xff
    // bl ov43_0222AD74
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // mov r1, #4
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0xfc
    // str r1, [r0]
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #4
    // ldrsh r1, [r5, r0]
    // mov r0, #0xa
    // add r5, #0xf8
    // add r3, r1, #0
    // mul r3, r0
    // ldr r0, _0222C700 ; =ov43_0222EFA0
    // ldrsh r0, [r0, r3]
    // lsl r2, r0, #3
    // ldr r0, _0222C704 ; =ov43_0222EFA2
    // str r2, [sp]
    // ldrsh r0, [r0, r3]
    // lsl r1, r0, #3
    // add r1, #0xfc
    // lsl r0, r2, #0xc
    // str r0, [sp]
    // str r1, [sp, #4]
    // lsl r0, r1, #0xc
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // ldr r1, _0222C708 ; =0x0400004A
    // ldr r0, _0222C70C ; =0xFFFFC0FF
    // ldrh r2, [r1]
    // and r2, r0
    // mov r0, #7
    // lsl r0, r0, #8
    // orr r2, r0
    // strh r2, [r1]
    // ldrh r3, [r1]
    // mov r2, #0x3f
    // sub r0, #0xd8
    // bic r3, r2
    // mov r2, #0x1f
    // orr r3, r2
    // mov r2, #0x20
    // orr r3, r2
    // strh r3, [r1]
    // lsl r4, r2, #0x15
    // ldr r3, [r4]
    // ldr r1, _0222C710 ; =0xFFFF1FFF
    // and r3, r1
    // lsl r1, r2, #0xa
    // orr r1, r3
    // str r1, [r4]
    // bl PlaySE
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _0222C700: .word ov43_0222EFA0
    // _0222C704: .word ov43_0222EFA2
    // _0222C708: .word 0x0400004A
    // _0222C70C: .word 0xFFFFC0FF
    // _0222C710: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov43_0222C714(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // bl Sprite_IsAnimated
    // cmp r0, #0
    // bne _0222C728
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // bl Sprite_GetAnimationFrame
    // add r1, r4, #0
    // add r1, #0xfc
    // ldr r1, [r1]
    // sub r1, r0, r1
    // cmp r1, #2
    // blo _0222C748
    // add r4, #0xfc
    // str r0, [r4]
    // ldr r0, _0222C74C ; =0x00000628
    // bl PlaySE
    // mov r0, #0
    // pop {r4, pc}
    // _0222C74C: .word 0x00000628
    // TODO: decompile
}



void ov43_0222C750(void) {
    // push {r3, r4, r5, lr}
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r1, [r2]
    // ldr r0, _0222C784 ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r5, #0xf8
    // ldr r0, [r5]
    // mov r1, #0
    // bl Sprite_SetAnimActiveFlag
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0xff
    // bl ov43_0222AD74
    // pop {r3, r4, r5, pc}
    // _0222C784: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov43_0222C788(void) {
    // ldrh r0, [r4]
    // strh r0, [r5]
    *((u16*)(r0 + 2)) = *((u16*)(r2 + 2));
    *((u16*)(r0 + 4)) = *((u16*)(r2 + 4));
    // add r0, #8
    InitWindow(r0);
    // ldrsh r1, [r4, r0]
    // neg r1, r1
    // ldrsh r3, [r4, r0]
    // neg r3, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r5, #8
    AddWindowParameterized(*((u32*)r6), r5, 3, (((r3 + 4) << 0x18) >> 0x18));
}



void ov43_0222C7EC(void) {
}



void ov43_0222C7F8(void) {
    // ldrsh r5, [r0, r1]
    // neg r5, r5
    // ldrsh r3, [r0, r1]
    // neg r3, r3
    // str r0, [sp]
    // ldrh r0, [r2]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    LoadRectToBgTilemapRect(*((u32*)r1), 2, *((u32*)(r2 + 8)), ((r3 << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
}



void ov43_0222C844(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // cmp r2, #0xa
    // bne _0222C858
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0xff
    // bl ov43_0222AD74
    // pop {r4, pc}
    // ldr r1, _0222C88C ; =ov43_0222EFA0
    // mov r0, #0xa
    // add r3, r2, #0
    // mul r3, r0
    // add r2, r1, r3
    // ldrsh r1, [r1, r3]
    // mov r3, #2
    // ldrsh r2, [r2, r3]
    // mov r0, #0x7f
    // lsl r0, r0, #2
    // add r1, r1, #7
    // add r2, r2, #2
    // lsl r1, r1, #0x13
    // lsl r2, r2, #0x13
    // ldr r0, [r4, r0]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl Sprite_SetPositionXY
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0xff
    // bl ov43_0222AD74
    // pop {r4, pc}
    // nop
    // _0222C88C: .word ov43_0222EFA0
    // TODO: decompile
}



void ov43_0222C890(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // ldr r5, _0222C914 ; =ov43_0222EFA0
    // add r7, r0, #0
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // mov r4, #0
    // ldr r0, [sp, #0x14]
    // cmp r0, #1
    // bne _0222C8B0
    // ldr r0, [sp, #0x10]
    // cmp r0, r4
    // bne _0222C8B0
    // ldrb r0, [r5, #8]
    // b _0222C8B2
    // ldrb r0, [r5, #7]
    // mov r1, #2
    // ldrsh r3, [r7, r1]
    // cmp r3, #0
    // bge _0222C8BC
    // neg r3, r3
    // mov r1, #0
    // ldrsh r2, [r7, r1]
    // cmp r2, #0
    // bge _0222C8C6
    // neg r2, r2
    // ldrb r1, [r5, #4]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r1, [sp]
    // ldrb r1, [r5, #5]
    // mov r6, #0
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldrsh r6, [r5, r6]
    // ldr r0, [sp, #0xc]
    // ldrb r1, [r5, #6]
    // add r2, r6, r2
    // mov r6, #2
    // ldrsh r6, [r5, r6]
    // lsl r2, r2, #0x18
    // ldr r0, [r0]
    // add r3, r6, r3
    // lsl r3, r3, #0x18
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl BgTilemapRectChangePalette
    // add r4, r4, #1
    // add r5, #0xa
    // cmp r4, #9
    // blt _0222C8A0
    // ldr r0, [sp, #0xc]
    // mov r1, #2
    // ldr r0, [r0]
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, [sp, #0xc]
    // mov r1, #0
    // ldr r0, [r0]
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222C914: .word ov43_0222EFA0
    // TODO: decompile
}



void ov43_0222C918(void) {
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // str r3, [sp, #0x10]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x3c]
    sub_0202C6F4(*((u32*)(r1 + 4)));
    // str r0, [sp, #0x14]
    // add r0, #8
    FillWindowPixelBuffer(r6, 0);
    ov43_0222CA30(r6, r7);
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x34]
    // str r0, [sp, #0x18]
    // add r5, r1, r0
    // ldr r0, [sp, #0x34]
    // ldr r0, [sp, #0x18]
    // add r0, r0, r4
    // ldr r0, [sp, #0x14]
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // ldr r3, [sp, #0x30]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0xc]
    ov43_0222CA50(r6, *((u32*)(r0 << 3)), r7);
    // ldr r2, [sp, #0x30]
    ov43_0222CB34(r6, r7, r4);
    ScheduleBgTilemapBufferTransfer(*((u32*)r7), 2);
    // add r6, #8
    ScheduleWindowCopyToVram(r6);
}



void ov43_0222C9A4(void) {
    ov43_0222CA30();
    // add r0, #8
    ClearWindowTilemapAndScheduleTransfer(r5);
    // ldrsh r1, [r5, r0]
    // neg r1, r1
    // ldrsh r3, [r5, r0]
    // neg r3, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r4), 2, 0, ((r3 << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
    // ldrsh r1, [r5, r0]
    // neg r1, r1
    // ldrsh r3, [r5, r0]
    // neg r3, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r4), 3, 0, ((r3 << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 3);
}



void ov43_0222CA30(void) {
}



void ov43_0222CA50(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r0, #0
    // ldr r0, [sp, #0x48]
    // add r6, r2, #0
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x10]
    // ldr r0, [sp, #0x44]
    // ldr r1, [sp, #0x18]
    // mov r2, #7
    // str r3, [sp, #0x14]
    // ldr r4, [sp, #0x40]
    // bl sub_0202C090
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x44]
    // ldr r1, [sp, #0x18]
    // mov r2, #8
    // bl sub_0202C090
    // add r7, r0, #0
    // cmp r7, #2
    // bne _0222CA8C
    // ldr r2, [sp, #0x14]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r3, r4, #0
    // bl ov43_0222CB34
    // b _0222CAD0
    // mov r0, #0xa
    // add r6, r4, #0
    // mul r6, r0
    // ldr r2, _0222CB28 ; =ov43_0222EFA0
    // mov r1, #0
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r2, r6]
    // add r0, #0xfc
    // add r1, r1, r2
    // lsl r2, r1, #3
    // add r2, #8
    // add r1, sp, #0x20
    // strh r2, [r1]
    // mov r2, #2
    // ldrsh r3, [r5, r2]
    // ldr r2, _0222CB2C ; =ov43_0222EFA2
    // ldrsh r2, [r2, r6]
    // add r2, r3, r2
    // lsl r2, r2, #3
    // add r0, r2, r0
    // strh r0, [r1, #2]
    // mov r0, #8
    // strh r0, [r1, #4]
    // mov r0, #1
    // strh r0, [r1, #6]
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x4c]
    // add r1, sp, #0x20
    // bl ov42_022272BC
    // lsl r1, r4, #2
    // add r1, r5, r1
    // str r0, [r1, #0x18]
    // ldr r1, [sp, #0x4c]
    // mov r0, #0x80
    // bl String_New
    // add r6, r0, #0
    // ldr r0, [sp, #0x44]
    // ldr r1, [sp, #0x18]
    // bl sub_0202C254
    // add r1, r0, #0
    // add r0, r6, #0
    // bl CopyU16ArrayToString
    // add r3, r4, #0
    // mov r0, #0xa
    // mul r3, r0
    // ldr r0, _0222CB2C ; =ov43_0222EFA2
    // ldr r4, _0222CB28 ; =ov43_0222EFA0
    // ldrsh r0, [r0, r3]
    // ldrsh r3, [r4, r3]
    // lsl r1, r7, #2
    // lsl r0, r0, #3
    // sub r0, #0x18
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222CB30 ; =ov43_0222ED94
    // add r5, #8
    // ldr r0, [r0, r1]
    // mov r1, #4
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // add r2, r6, #0
    // lsl r3, r3, #3
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222CB28: .word ov43_0222EFA0
    // _0222CB2C: .word ov43_0222EFA2
    // _0222CB30: .word ov43_0222ED94
    // TODO: decompile
}



void ov43_0222CB34(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x1c
    // add r4, r1, #0
    // add r1, r3, #0
    // mov r3, #2
    // ldrsh r5, [r0, r3]
    // cmp r5, #0
    // bge _0222CB46
    // neg r5, r5
    // mov r3, #0
    // ldrsh r6, [r0, r3]
    // cmp r6, #0
    // bge _0222CB50
    // neg r6, r6
    // ldr r0, [r2, #0xc]
    // add r3, r1, #0
    // mov r1, #3
    // str r1, [sp]
    // mov r1, #4
    // str r1, [sp, #4]
    // add r1, r0, #0
    // add r1, #0xc
    // str r1, [sp, #8]
    // mov r1, #0
    // mov r2, #0xa
    // str r1, [sp, #0xc]
    // mul r3, r2
    // str r1, [sp, #0x10]
    // ldrh r1, [r0]
    // ldr r2, _0222CBA4 ; =ov43_0222EFA0
    // ldrsh r2, [r2, r3]
    // lsl r1, r1, #0x15
    // lsr r1, r1, #0x18
    // str r1, [sp, #0x14]
    // add r2, r2, r6
    // ldr r6, _0222CBA8 ; =ov43_0222EFA2
    // ldrh r0, [r0, #2]
    // ldrsh r3, [r6, r3]
    // lsl r2, r2, #0x18
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // add r3, r3, r5
    // str r0, [sp, #0x18]
    // lsl r3, r3, #0x18
    // ldr r0, [r4]
    // mov r1, #2
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl CopyToBgTilemapRect
    // ldr r0, [r4]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x1c
    // pop {r3, r4, r5, r6, pc}
    // _0222CBA4: .word ov43_0222EFA0
    // _0222CBA8: .word ov43_0222EFA2
    // TODO: decompile
}



void ov43_0222CBAC(void) {
}



void ov43_0222CBB4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r2, #0
    // add r7, r1, #0
    // ldrb r1, [r5, #8]
    // add r4, r0, #0
    // ldr r6, [sp, #0x30]
    // cmp r1, #6
    // bls _0222CBC8
    // b _0222CD26
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222CBD4: ; jump table
    // add r1, r5, #0
    // add r2, r6, #0
    // bl ov43_0222CD44
    // str r0, [r4, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #4]
    // bl Save_PlayerData_GetOptionsAddr
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0xc
    // add r2, sp, #8
    // bl sub_02085400
    // str r0, [r4, #8]
    // add r0, r7, #0
    // bl ov43_0222A1DC
    // ldr r0, _0222CD2C ; =gOverlayTemplate_NamingScreen
    // ldr r1, [r4, #4]
    // add r2, r6, #0
    // bl OverlayManager_New
    // str r0, [r4]
    // mov r0, #1
    // strb r0, [r5, #8]
    // b _0222CD26
    // ldr r0, [r4]
    // bl OverlayManager_Run
    // cmp r0, #0
    // beq _0222CD26
    // ldr r0, [r4]
    // bl OverlayManager_Delete
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x14]
    // cmp r0, #0
    // bne _0222CC54
    // ldr r0, _0222CD30 ; =_02102620
    // ldr r1, [r4, #8]
    // add r2, r6, #0
    // bl OverlayManager_New
    // str r0, [r4]
    // mov r0, #2
    // strb r0, [r5, #8]
    // b _0222CD26
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov43_0222A318
    // mov r0, #3
    // strb r0, [r5, #8]
    // b _0222CD26
    // ldr r0, [r4]
    // bl OverlayManager_Run
    // cmp r0, #0
    // beq _0222CD26
    // ldr r0, [r4]
    // bl OverlayManager_Delete
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // ldr r1, [r1, #0x18]
    // ldr r2, [r2, #0x1c]
    // add r0, r5, #0
    // bl ov43_0222A338
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #7
    // bl ov43_0222A318
    // mov r0, #3
    // strb r0, [r5, #8]
    // b _0222CD26
    // ldr r0, [r4, #4]
    // bl NamingScreen_DeleteArgs
    // ldr r0, [r4, #8]
    // bl sub_02085438
    // add r0, r7, #0
    // add r1, r6, #0
    // bl ov43_0222A154
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r5, #0
    // add r2, r6, #0
    // bl ov43_0222CD44
    // str r0, [r4, #4]
    // add r0, r7, #0
    // bl ov43_0222A1DC
    // ldr r0, _0222CD2C ; =gOverlayTemplate_NamingScreen
    // ldr r1, [r4, #4]
    // add r2, r6, #0
    // bl OverlayManager_New
    // str r0, [r4]
    // mov r0, #5
    // strb r0, [r5, #8]
    // b _0222CD26
    // ldr r0, [r4]
    // bl OverlayManager_Run
    // cmp r0, #0
    // beq _0222CD26
    // ldr r0, [r4]
    // bl OverlayManager_Delete
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x14]
    // cmp r0, #0
    // bne _0222CD02
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0xc
    // bl ov43_0222A318
    // ldr r1, [r4, #4]
    // add r0, r5, #0
    // ldr r1, [r1, #0x18]
    // mov r2, #0
    // bl ov43_0222A338
    // mov r0, #6
    // strb r0, [r5, #8]
    // b _0222CD26
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0xd
    // bl ov43_0222A318
    // mov r0, #6
    // strb r0, [r5, #8]
    // b _0222CD26
    // ldr r0, [r4, #4]
    // bl NamingScreen_DeleteArgs
    // add r0, r7, #0
    // add r1, r6, #0
    // bl ov43_0222A154
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222CD2C: .word gOverlayTemplate_NamingScreen
    // _0222CD30: .word _02102620
    // TODO: decompile
}



void ov43_0222CD34(void) {
}



void ov43_0222CD3C(void) {
    // bx lr
    // TODO: decompile
}



void ov43_0222CD40(void) {
    // bx lr
    // TODO: decompile
}



void ov43_0222CD44(void) {
    Save_PlayerData_GetOptionsAddr(*((u32*)(r1 + 4)));
    // str r0, [sp]
    // str r2, [sp, #4]
    NamingScreen_CreateArgs(r4, 7, 0, 7);
    // ldrh r0, [r0]
    sub_02020B78(*((u32*)(r5 + 0x60)));
    CopyU16ArrayToString(*((u32*)(r4 + 0x18)), *((u32*)(r5 + 0x60)));
    String_SetEmpty();
    *((u32*)(r5 + 0x64)) = 0;
}



void ov43_0222CD90(void) {
}



void ov43_0222CD98(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // ldrb r3, [r4, #8]
    // add r5, r0, #0
    // add r6, r2, #0
    // cmp r3, #0
    // beq _0222CDB0
    // cmp r3, #1
    // beq _0222CDBA
    // cmp r3, #2
    // beq _0222CDDC
    // b _0222CE04
    // bl ov43_0222D028
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0222CE04
    // bl ov43_0222CE14
    // cmp r0, #0
    // beq _0222CE04
    // ldr r0, _0222CE08 ; =0x000005DD
    // bl PlaySE
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #1
    // bl ov43_0222D0F8
    // mov r0, #4
    // str r0, [r5, #0x38]
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0222CE04
    // ldr r1, [r5, #0x38]
    // sub r1, r1, #1
    // str r1, [r5, #0x38]
    // cmp r1, #0
    // bgt _0222CE04
    // add r1, r6, #0
    // mov r2, #0
    // bl ov43_0222D0F8
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #2
    // bl ov43_0222A318
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov43_0222D090
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _0222CE08: .word 0x000005DD
    // TODO: decompile
}



void ov43_0222CE0C(void) {
}



void ov43_0222CE14(void) {
    // push {r4, lr}
    // ldr r0, _0222CE40 ; =ov43_0222ED7A
    // add r4, r1, #0
    // bl TouchscreenHitbox_FindHitboxAtTouchNew
    // cmp r0, #0
    // bne _0222CE28
    // mov r0, #1
    // str r0, [r4]
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov43_0222A320
    // ldr r0, _0222CE44 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _0222CE3C
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _0222CE40: .word ov43_0222ED7A
    // _0222CE44: .word gSystem
    // TODO: decompile
}



void ov43_0222CE48(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r0, #0
    // str r1, [sp, #0x14]
    // add r4, r2, #0
    // add r7, r3, #0
    // bl InitWindow
    // mov r1, #0xb
    // str r1, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // add r1, r5, #0
    // mov r2, #3
    // mov r3, #4
    // bl AddWindowParameterized
    // add r0, r5, #0
    // add r0, #0x10
    // bl InitWindow
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0xe
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // mov r0, #0xc1
    // str r0, [sp, #0x10]
    // add r1, r5, #0
    // ldr r0, [r4]
    // add r1, #0x10
    // mov r2, #3
    // mov r3, #9
    // bl AddWindowParameterized
    // add r0, r5, #0
    // add r0, #0x20
    // bl InitWindow
    // mov r3, #0x15
    // add r1, r5, #0
    // str r3, [sp]
    // mov r0, #9
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // mov r0, #0xdd
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // add r1, #0x20
    // mov r2, #3
    // bl AddWindowParameterized
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r0, #0x10
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r0, #0x20
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x80
    // add r1, r7, #0
    // bl String_New
    // add r6, r0, #0
    // mov r0, #0x80
    // add r1, r7, #0
    // bl String_New
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // ldr r0, [r0, #4]
    // bl sub_0202C6F4
    // bl sub_0202C08C
    // bl DWC_CreateFriendKey
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // mov r2, #0
    // eor r0, r2
    // ldr r2, [sp, #0x24]
    // mov r1, #0
    // eor r1, r2
    // orr r0, r1
    // ldr r0, [r4, #0x54]
    // beq _0222CF86
    // mov r1, #0x35
    // add r2, r6, #0
    // bl ReadMsgDataIntoString
    // mov r0, #0
    // add r1, r6, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidthMultiline
    // mov r1, #0xc0
    // sub r0, r1, r0
    // mov r1, #0
    // lsr r3, r0, #1
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222CFFC ; =0x00010200
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x1c]
    // add r0, r4, #0
    // bl ov43_0222AAA4
    // ldr r0, [r4, #0x54]
    // ldr r2, [sp, #0x20]
    // mov r1, #0x34
    // bl ReadMsgDataIntoString
    // ldr r0, [r4, #0x50]
    // ldr r2, [sp, #0x20]
    // add r1, r6, #0
    // bl StringExpandPlaceholders
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222D000 ; =0x000F0200
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x10
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // b _0222CFB4
    // mov r1, #0x36
    // add r2, r6, #0
    // bl ReadMsgDataIntoString
    // mov r0, #0
    // add r1, r6, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidthMultiline
    // mov r1, #0xc0
    // sub r0, r1, r0
    // mov r1, #0
    // lsr r3, r0, #1
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222CFFC ; =0x00010200
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [r4, #0x54]
    // mov r1, #0x33
    // add r2, r6, #0
    // bl ReadMsgDataIntoString
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222D004 ; =0x00010F00
    // mov r1, #4
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x20
    // add r2, r6, #0
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, [sp, #0x20]
    // bl String_Delete
    // str r7, [sp]
    // add r3, r5, #0
    // ldr r0, [r4, #0x58]
    // mov r1, #0xe
    // mov r2, #1
    // add r3, #0x34
    // bl GfGfxLoader_GetScrnDataFromOpenNarc
    // str r0, [r5, #0x30]
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222CFFC: .word 0x00010200
    // _0222D000: .word 0x000F0200
    // _0222D004: .word 0x00010F00
    // TODO: decompile
}



void ov43_0222D008(void) {
}



void ov43_0222D028(void) {
    Save_PlayerData_GetProfile(*((u32*)(r1 + 4)));
    BufferPlayersName(*((u32*)(r4 + 0x50)), 0, r0);
    // add r1, #0x64
    ov43_0222A9F4(r4, r4, 0x32);
    // str r3, [sp]
    // ldrh r0, [r2]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    LoadRectToBgTilemapRect(*((u32*)r4), 2, *((u32*)(r5 + 0x34)), 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
    ScheduleWindowCopyToVram(r5);
    // add r0, #0x10
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x20
    ScheduleWindowCopyToVram(r5);
}



void ov43_0222D090(void) {
    ov43_0222AA70(r1);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r4), 2, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
    ClearWindowTilemapAndScheduleTransfer(r5);
    // add r0, #0x10
    ClearWindowTilemapAndScheduleTransfer(r5);
    // add r5, #0x20
    ClearWindowTilemapAndScheduleTransfer(r5);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r4), 3, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 3);
}



void ov43_0222D0F8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // ldr r3, _0222D130 ; =_0222ED5C
    // add r4, r1, #0
    // ldrb r5, [r3, #1]
    // ldrb r3, [r3, #2]
    // add r1, sp, #0xc
    // strb r5, [r1]
    // strb r3, [r1, #1]
    // mov r1, #0xe
    // str r1, [sp]
    // mov r1, #4
    // str r1, [sp, #4]
    // add r0, sp, #0xc
    // ldrb r0, [r0, r2]
    // mov r1, #2
    // mov r2, #0x11
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // mov r3, #0x14
    // bl BgTilemapRectChangePalette
    // ldr r0, [r4]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0222D130: .word _0222ED5C
    // TODO: decompile
}



void ov43_0222D134(void) {
}



void ov43_0222D15C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // ldrb r5, [r6, #8]
    // add r4, r0, #0
    // add r7, r2, #0
    // str r3, [sp]
    // cmp r5, #6
    // bhi _0222D220
    // add r5, r5, r5
    // add r5, pc
    // ldrh r5, [r5, #6]
    // lsl r5, r5, #0x10
    // asr r5, r5, #0x10
    // add pc, r5
    // _0222D178: ; jump table
    // mov r0, #0
    // strh r0, [r4, #0xe]
    // strh r0, [r4]
    // ldr r3, [sp]
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl ov43_0222D654
    // mov r0, #2
    // strb r0, [r6, #8]
    // b _0222D220
    // bl ov43_0222D47C
    // strb r0, [r6, #8]
    // b _0222D220
    // bl ov43_0222D4C4
    // ldr r3, [sp]
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl ov43_0222D508
    // mov r0, #4
    // strb r0, [r6, #8]
    // b _0222D220
    // bl ov43_0222D508
    // cmp r0, #1
    // bne _0222D220
    // mov r0, #2
    // strb r0, [r6, #8]
    // b _0222D220
    // ldrh r0, [r4, #0xe]
    // cmp r0, #0
    // beq _0222D1DC
    // ldrh r0, [r4, #0xc]
    // sub r0, r0, #1
    // strh r0, [r4, #0xc]
    // ldrh r0, [r4, #0xc]
    // cmp r0, #0
    // bne _0222D220
    // ldr r1, [r4, #8]
    // add r0, r6, #0
    // bl ov43_0222DCC4
    // cmp r0, #0
    // beq _0222D206
    // ldr r0, _0222D224 ; =0x000005E5
    // bl PlaySE
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov43_0222D87C
    // add r0, r6, #0
    // mov r1, #4
    // mov r2, #1
    // bl ov43_0222A318
    // mov r0, #1
    // strh r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #2
    // strb r0, [r6, #8]
    // b _0222D220
    // add r1, r7, #0
    // bl ov43_0222D778
    // add r0, r6, #0
    // mov r1, #1
    // mov r2, #9
    // bl ov43_0222A318
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222D224: .word 0x000005E5
    // TODO: decompile
}



void ov43_0222D228(void) {
}



void ov43_0222D230(void) {
    // ldr r0, [r0, #0x10]
    // cmp r0, #1
    // bne _0222D23A
    // mov r0, #8
    // b _0222D23C
    // mov r0, #3
    // sub r0, r0, #1
    // cmp r1, r0
    // bne _0222D246
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov43_0222D24C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r5, r2, #0
    // cmp r3, #5
    // bhi _0222D2F2
    // add r1, r3, r3
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222D262: ; jump table
    // mov r1, #0
    // ldrsh r1, [r4, r1]
    // bl ov43_0222D230
    // cmp r0, #0
    // beq _0222D2F2
    // ldr r0, _0222D2F8 ; =0x000005DD
    // bl PlaySE
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // ldr r0, _0222D2F8 ; =0x000005DD
    // bl PlaySE
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // mov r2, #0
    // ldrsh r2, [r4, r2]
    // add r1, r5, #0
    // bl ov43_0222DB28
    // mov r2, #0
    // ldrsh r2, [r4, r2]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov43_0222DB94
    // mov r0, #2
    // str r0, [r4, #8]
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // mov r2, #0
    // ldrsh r2, [r4, r2]
    // add r1, r5, #0
    // bl ov43_0222DB28
    // mov r2, #0
    // ldrsh r2, [r4, r2]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov43_0222DB94
    // mov r0, #3
    // str r0, [r4, #8]
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // str r0, [r4, #8]
    // mov r0, #4
    // strh r0, [r4, #0xc]
    // add r0, r5, #0
    // mov r1, #2
    // mov r2, #1
    // bl ov43_0222AD40
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // mov r2, #1
    // str r2, [r4, #8]
    // mov r0, #4
    // strh r0, [r4, #0xc]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov43_0222AD40
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // nop
    // _0222D2F8: .word 0x000005DD
    // TODO: decompile
}



void ov43_0222D2FC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _0222D3B0 ; =gSystem
    // add r4, r1, #0
    // ldr r1, [r0, #0x48]
    // ldr r0, _0222D3B4 ; =0x00000CF3
    // add r6, r2, #0
    // tst r0, r1
    // beq _0222D312
    // mov r0, #0
    // str r0, [r4]
    // ldr r1, _0222D3B0 ; =gSystem
    // mov r0, #3
    // ldr r2, [r1, #0x48]
    // tst r0, r2
    // beq _0222D32A
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #1
    // bl ov43_0222D24C
    // pop {r4, r5, r6, pc}
    // ldr r0, [r1, #0x4c]
    // mov r2, #0x20
    // add r1, r0, #0
    // tst r1, r2
    // bne _0222D340
    // ldrb r1, [r4, #0xe]
    // cmp r1, #0
    // beq _0222D358
    // lsl r2, r2, #4
    // tst r2, r0
    // beq _0222D358
    // mov r1, #0
    // add r0, r5, #0
    // mvn r1, r1
    // bl ov43_0222ED18
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #2
    // bl ov43_0222D24C
    // pop {r4, r5, r6, pc}
    // mov r2, #0x10
    // add r3, r0, #0
    // tst r3, r2
    // bne _0222D36A
    // cmp r1, #0
    // beq _0222D380
    // add r2, #0xf0
    // tst r0, r2
    // beq _0222D380
    // add r0, r5, #0
    // mov r1, #1
    // bl ov43_0222ED18
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #3
    // bl ov43_0222D24C
    // pop {r4, r5, r6, pc}
    // ldr r0, _0222D3B0 ; =gSystem
    // ldr r1, [r0, #0x44]
    // mov r0, #0x40
    // tst r0, r1
    // beq _0222D398
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #4
    // bl ov43_0222D24C
    // pop {r4, r5, r6, pc}
    // mov r0, #0x80
    // tst r0, r1
    // beq _0222D3AC
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #5
    // bl ov43_0222D24C
    // pop {r4, r5, r6, pc}
    // mov r0, #2
    // pop {r4, r5, r6, pc}
    // _0222D3B0: .word gSystem
    // _0222D3B4: .word 0x00000CF3
    // TODO: decompile
}



void ov43_0222D3B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x10]
    // add r7, r1, #0
    // add r6, r3, #0
    // str r2, [sp]
    // cmp r0, #0
    // beq _0222D3D0
    // ldr r0, _0222D474 ; =ov43_0222EE84
    // bl TouchscreenHitbox_FindHitboxAtTouchNew
    // b _0222D3D6
    // ldr r0, _0222D478 ; =ov43_0222EE42
    // bl TouchscreenHitbox_FindHitboxAtTouchNew
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _0222D3E4
    // mov r0, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r4, #0
    // bne _0222D3FA
    // mov r0, #1
    // str r0, [r6]
    // ldr r2, [sp]
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r3, #4
    // bl ov43_0222D24C
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r4, #1
    // bne _0222D410
    // mov r0, #1
    // str r0, [r6]
    // ldr r2, [sp]
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r3, #5
    // bl ov43_0222D24C
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r1, r4, #2
    // lsl r1, r1, #0x10
    // add r0, r5, #0
    // asr r1, r1, #0x10
    // bl ov43_0222D230
    // cmp r0, #0
    // beq _0222D434
    // sub r0, r4, #2
    // strh r0, [r5]
    // mov r3, #1
    // ldr r2, [sp]
    // add r0, r5, #0
    // add r1, r7, #0
    // str r3, [r6]
    // bl ov43_0222D24C
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // ldrsh r0, [r5, r0]
    // sub r1, r4, #2
    // sub r0, r1, r0
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // bne _0222D446
    // mov r0, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // str r0, [r6]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov43_0222ED18
    // cmp r4, #0
    // blt _0222D464
    // ldr r2, [sp]
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r3, #3
    // bl ov43_0222D24C
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, [sp]
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r3, #2
    // bl ov43_0222D24C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222D474: .word ov43_0222EE84
    // _0222D478: .word ov43_0222EE42
    // TODO: decompile
}



void ov43_0222D47C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r4, r1, #0
    // ldr r1, _0222D4C0 ; =gSystem
    // add r6, r2, #0
    // ldr r2, [r1, #0x44]
    // add r5, r0, #0
    // mov r0, #0
    // mov r1, #0xc0
    // str r0, [sp]
    // tst r1, r2
    // bne _0222D496
    // strh r0, [r5, #0xe]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // add r3, sp, #0
    // bl ov43_0222D3B8
    // ldr r1, [sp]
    // cmp r1, #0
    // beq _0222D4B0
    // mov r1, #1
    // add sp, #4
    // str r1, [r4]
    // pop {r3, r4, r5, r6, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov43_0222D2FC
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0222D4C0: .word gSystem
    // TODO: decompile
}



void ov43_0222D4C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r1, #0
    // add r5, r0, #0
    // add r4, r2, #0
    // mov r1, #0
    // str r1, [r5, #4]
    // add r0, r4, #0
    // add r6, r3, #0
    // bl ov43_0222AD20
    // ldr r0, [r5, #8]
    // cmp r0, #2
    // bne _0222D4E4
    // mov r3, #2
    // b _0222D4E6
    // mov r3, #1
    // mov r0, #0
    // ldrsh r0, [r5, r0]
    // add r1, r7, #0
    // add r2, r4, #0
    // str r0, [sp]
    // add r0, r5, #0
    // str r6, [sp, #4]
    // bl ov43_0222DAE8
    // ldr r0, _0222D504 ; =0x000005E1
    // bl PlaySE
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222D504: .word 0x000005E1
    // TODO: decompile
}



void ov43_0222D508(void) {
    ScheduleSetBgPosText(*((u32*)r2), 2, 0, 0);
    ScheduleSetBgPosText(*((u32*)r4), 3, 0, 0);
    // ldrsh r0, [r5, r3]
    // str r0, [sp]
    // str r6, [sp, #4]
    ov43_0222DAE8(r5, r7, r4, 0);
    ov43_0222AD20(r4, 1);
    ov43_0222DB94(r5, r4, 0xff);
    // asr r0, r1, #1
    // add r0, r1, r0
    // asr r3, r0, #2
    // neg r3, r3
    ScheduleSetBgPosText(*((u32*)r4), 3, 0);
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
}



void ov43_0222D584(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r7, r0, #0
    // str r2, [sp, #8]
    // add r1, r2, #0
    // add r0, #0xf8
    // add r2, r3, #0
    // str r3, [sp, #0xc]
    // bl ov43_0222DD40
    // ldr r1, [sp, #8]
    // add r0, r7, #0
    // bl ov43_0222DDA0
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, _0222D600 ; =ov43_0222EDAC
    // add r7, #0x14
    // str r0, [sp, #0x14]
    // ldr r0, _0222D604 ; =ov43_0222EE08
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r3, [sp, #0x14]
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0x10]
    // ldr r3, [r3]
    // add r0, r7, #0
    // bl ov43_0222DDF0
    // ldr r4, _0222D608 ; =ov43_0222F10C
    // ldr r5, _0222D60C ; =ov43_0222F0D0
    // mov r6, #0
    // ldr r0, [r4]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // add r2, r6, #0
    // str r0, [sp, #4]
    // ldrb r3, [r5]
    // add r0, r7, #0
    // bl ov43_0222DE14
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #1
    // cmp r6, #8
    // blt _0222D5C6
    // ldr r0, [sp, #0x14]
    // add r7, #0x4c
    // add r0, r0, #4
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, r0, #6
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #3
    // blt _0222D5AE
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _0222D600: .word ov43_0222EDAC
    // _0222D604: .word ov43_0222EE08
    // _0222D608: .word ov43_0222F10C
    // _0222D60C: .word ov43_0222F0D0
    // TODO: decompile
}



void ov43_0222D610(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    // add r5, #0x14
    ov43_0222DED0(r0, 0);
    ov43_0222DE10(r5);
    // add r5, #0x4c
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    ov43_0222DDD0();
    // ldr r0, [sp]
    // add r0, #0xf8
    // str r0, [sp]
    ov43_0222DD88();
}



void ov43_0222D654(void) {
    // ldrsb r2, [r6, r2]
    // add r2, r6, r2
    ov43_0222AB20(r2, *((u32*)(r1 + 4)), *((u8*)(0xb + 0x18)));
    // add r1, r5, r1
    ov43_0222A9F4(r4, (0x4a << 2), 0xd);
    // ldr r2, [r5, r0]
    // str r3, [sp]
    // ldrh r0, [r2]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    LoadRectToBgTilemapRect(*((u32*)r4), 5, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 5);
    // add r0, #0xfc
    // str r1, [sp]
    // ldrh r0, [r2]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    LoadRectToBgTilemapRect(*((u32*)r4), 0, *((u32*)r5), 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 0);
    // ldr r2, [r5, r0]
    // str r3, [sp]
    // ldrh r0, [r2]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    LoadRectToBgTilemapRect(*((u32*)r4), 2, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
    ov43_0222D8B8(r5, r6, r4, r7);
    ov43_0222AD98(r4, 0, 0);
    // ldrsh r0, [r5, r3]
    // str r0, [sp]
    // str r7, [sp, #4]
    ov43_0222DAE8(r5, r6, r4, 0);
    ov43_0222DB94(r5, r4, 0xff);
    // ldr r0, [r4, r0]
    Sprite_SetPositionXY((0x7d << 2), 0xf4, 0x18);
    ov43_0222AD40(r4, 2, 0);
    // ldr r0, [r4, r0]
    Sprite_SetPositionXY((0x7e << 2), 0xf4, 0x88);
    ov43_0222AD40(r4, 3, 0);
    ov43_0222AD00(r4, 1);
    SetBgPriority(2, 0);
}



void ov43_0222D778(void) {
    ov43_0222AD00(r1, 0);
    // ldr r0, [r5, r0]
    Sprite_SetPositionXY((0x7d << 2), 8, 0x62);
    ov43_0222AD40(r5, 0, 0);
    // ldr r0, [r5, r0]
    Sprite_SetPositionXY((0x7e << 2), 0xf8, 0x62);
    ov43_0222AD40(r5, 1, 0);
    // add r4, #0x14
    ov43_0222DF90(r7, r5);
    // add r4, #0x4c
    ov43_0222DC7C(r7, r5);
    ov43_0222DB84(r7, r5);
    ov43_0222DACC(r7);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r5), 5, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r5), 4, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r5), 2, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 5);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 4);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 2);
    // ldr r2, [r7, r0]
    // str r1, [sp]
    // ldrh r0, [r2]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    LoadRectToBgTilemapRect(*((u32*)r5), 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 0);
    ov43_0222AA70(r5);
    SetBgPriority(2, 2);
}



void ov43_0222D87C(void) {
    // add r5, #0x14
    ov43_0222DF90(r0, r1);
    // add r5, #0x4c
    // add r4, r7, r0
    ClearWindowTilemapAndScheduleTransfer((r4 + 1));
    // add r4, #0x10
    ov43_0222AA70(r6);
}



void ov43_0222D8B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // add r5, r1, #0
    // add r7, r0, #0
    // ldr r0, [r5, #4]
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // bl sub_0202C6F4
    // mov r1, #0xb
    // ldrsb r1, [r5, r1]
    // mov r2, #8
    // str r0, [sp, #0x24]
    // add r1, r5, r1
    // ldrb r1, [r1, #0x18]
    // bl sub_0202C090
    // str r0, [sp, #0x20]
    // mov r0, #0x46
    // lsl r0, r0, #2
    // mov r6, #0
    // add r4, r7, r0
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r6, r6, #1
    // add r4, #0x10
    // cmp r6, #8
    // blo _0222D8E4
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x18]
    // mov r3, #2
    // add r2, r5, r2
    // add r2, #0x38
    // ldrb r2, [r2]
    // ldr r0, [r0, #0x50]
    // add r2, r2, #1
    // bl BufferIntegerAsString
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x18]
    // ldr r2, [r5, #0x14]
    // ldr r0, [r0, #0x50]
    // mov r3, #2
    // bl BufferIntegerAsString
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0222DAC0 ; =0x000F0200
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // mov r0, #0x46
    // lsl r0, r0, #2
    // add r0, r7, r0
    // add r1, r5, #0
    // mov r3, #0x12
    // bl ov43_0222ECD4
    // ldr r0, [sp, #0x20]
    // cmp r0, #0
    // bne _0222D94A
    // ldr r4, _0222DAC4 ; =0x00050600
    // b _0222D956
    // cmp r0, #1
    // bne _0222D954
    // mov r4, #0xc1
    // lsl r4, r4, #0xa
    // b _0222D956
    // ldr r4, _0222DAC8 ; =0x00010200
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x18]
    // ldr r1, [r5, #4]
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // ldr r3, [sp, #0x1c]
    // bl ov43_0222AB20
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0x4e
    // lsl r0, r0, #2
    // ldr r2, [sp, #0x18]
    // add r0, r7, r0
    // add r1, r5, #0
    // mov r3, #0x11
    // str r4, [sp, #8]
    // bl ov43_0222ECD4
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0222DAC0 ; =0x000F0200
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // mov r0, #0x5e
    // lsl r0, r0, #2
    // add r0, r7, r0
    // add r1, r5, #0
    // mov r3, #0xf
    // bl ov43_0222ECD4
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x18]
    // ldr r1, [r5, #4]
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // ldr r3, [sp, #0x1c]
    // bl ov43_0222AB5C
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0222DAC8 ; =0x00010200
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // mov r0, #0x52
    // lsl r0, r0, #2
    // add r0, r7, r0
    // add r1, r5, #0
    // mov r3, #0x10
    // bl ov43_0222ECD4
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0222DAC0 ; =0x000F0200
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // mov r0, #0x62
    // lsl r0, r0, #2
    // add r0, r7, r0
    // add r1, r5, #0
    // mov r3, #0x1b
    // bl ov43_0222ECD4
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x18]
    // ldr r1, [r5, #4]
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl ov43_0222AB94
    // cmp r0, #0
    // beq _0222DA0E
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0222DAC8 ; =0x00010200
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // mov r0, #0x56
    // lsl r0, r0, #2
    // add r0, r7, r0
    // add r1, r5, #0
    // mov r3, #0x1c
    // bl ov43_0222ECD4
    // mov r1, #0xb
    // ldrsb r1, [r5, r1]
    // ldr r0, [sp, #0x24]
    // mov r2, #7
    // add r1, r5, r1
    // ldrb r1, [r1, #0x18]
    // bl sub_0202C090
    // add r1, r0, #0
    // ldr r0, [sp, #0x20]
    // mov r2, #1
    // bl GetUnionRoomAvatarAttrBySprite
    // mov r1, #2
    // add r2, sp, #0x28
    // bl sub_02070D84
    // mov r1, #0x32
    // ldr r0, [sp, #0x1c]
    // lsl r1, r1, #6
    // bl Heap_Alloc
    // mov r3, #0
    // add r4, r0, #0
    // str r3, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x1c]
    // bl sub_020141C4
    // mov r0, #0x50
    // str r0, [sp]
    // mov r2, #0
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // add r0, r7, r0
    // add r1, r4, #0
    // add r3, r2, #0
    // bl BlitBitmapRectToWindow
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #0x20
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // mov r3, #0x1e
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x30]
    // mov r2, #4
    // lsl r3, r3, #4
    // bl GfGfxLoader_GXLoadPal
    // mov r1, #4
    // mov r0, #0xa
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0xf
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // add r2, r1, #0
    // ldr r0, [r0]
    // add r3, r1, #0
    // bl BgTilemapRectChangePalette
    // mov r0, #0x46
    // lsl r0, r0, #2
    // mov r4, #0
    // add r5, r7, r0
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #8
    // blo _0222DAAC
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222DAC0: .word 0x000F0200
    // _0222DAC4: .word 0x00050600
    // _0222DAC8: .word 0x00010200
    // TODO: decompile
}



void ov43_0222DACC(void) {
}



void ov43_0222DAE8(void) {
    // ldr r2, [sp, #0x20]
    // strh r2, [r5]
    ov43_0222DB28(r2);
    // add r0, r5, r0
    // str r0, [sp]
    // add r5, #0x14
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #8]
    // mul r0, r6
    // add r0, r5, r0
    ov43_0222DF4C(0x4c, r7, r4);
}



void ov43_0222DB28(void) {
    // add r1, #0x10
    // ldr r0, [r5, r0]
    // asr r1, r1, #0x10
    Sprite_SetPositionXY((0x7f << 2), ((r2 << 5) << 0x10), 0xb0);
    // ldr r0, [r5, r0]
    Sprite_SetPositionXY((0x7f << 2), 0xf0, 0xb0);
    // mul r1, r2
    // add r1, #0x38
    // ldr r0, [r5, r0]
    // asr r1, r1, #0x10
    Sprite_SetPositionXY((0x7f << 2), (0x70 << 0x10), 0xb0);
    ov43_0222AD74(r5, 1, r4);
}



void ov43_0222DB84(void) {
    // ldr r3, _0222DB90 ; =ov43_0222AD74
    // add r0, r1, #0
    // mov r1, #0
    // mov r2, #0xff
    // bx r3
    // nop
    // _0222DB90: .word ov43_0222AD74
    // TODO: decompile
}



void ov43_0222DB94(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x1c
    // add r6, r0, #0
    // ldr r0, [r6, #0x10]
    // add r5, r1, #0
    // add r4, r2, #0
    // cmp r0, #1
    // bne _0222DBDC
    // mov r0, #0x83
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0x20
    // str r1, [sp]
    // mov r1, #4
    // str r1, [sp, #4]
    // add r1, r0, #0
    // add r1, #0xc
    // str r1, [sp, #8]
    // mov r2, #0
    // str r2, [sp, #0xc]
    // mov r1, #0xc
    // str r1, [sp, #0x10]
    // ldrh r1, [r0]
    // mov r3, #0x14
    // lsl r1, r1, #0x15
    // lsr r1, r1, #0x18
    // str r1, [sp, #0x14]
    // ldrh r0, [r0, #2]
    // mov r1, #2
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x18]
    // ldr r0, [r5]
    // bl CopyToBgTilemapRect
    // b _0222DC10
    // mov r0, #0x83
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0x20
    // str r1, [sp]
    // mov r1, #4
    // str r1, [sp, #4]
    // add r1, r0, #0
    // add r1, #0xc
    // str r1, [sp, #8]
    // mov r2, #0
    // str r2, [sp, #0xc]
    // mov r3, #0x14
    // str r3, [sp, #0x10]
    // ldrh r1, [r0]
    // lsl r1, r1, #0x15
    // lsr r1, r1, #0x18
    // str r1, [sp, #0x14]
    // ldrh r0, [r0, #2]
    // mov r1, #2
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x18]
    // ldr r0, [r5]
    // bl CopyToBgTilemapRect
    // cmp r4, #0xff
    // bne _0222DC20
    // ldr r0, [r5]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x1c
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0x83
    // ldr r1, [r6, #0x10]
    // lsl r0, r0, #2
    // ldr r3, [r5, r0]
    // ldr r2, _0222DC70 ; =ov43_0222EDB8
    // lsl r0, r1, #3
    // add r2, r2, r0
    // ldr r6, _0222DC74 ; =ov43_0222EDF8
    // ldrb r2, [r4, r2]
    // add r0, r6, r0
    // ldrb r0, [r4, r0]
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // add r0, r3, #0
    // add r0, #0xc
    // str r0, [sp, #8]
    // ldr r0, _0222DC78 ; =ov43_0222F0C4
    // str r2, [sp, #0xc]
    // ldrb r0, [r0, r1]
    // mov r1, #2
    // str r0, [sp, #0x10]
    // ldrh r0, [r3]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x14]
    // ldrh r0, [r3, #2]
    // mov r3, #0x14
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x18]
    // ldr r0, [r5]
    // bl CopyToBgTilemapRect
    // ldr r0, [r5]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x1c
    // pop {r3, r4, r5, r6, pc}
    // _0222DC70: .word ov43_0222EDB8
    // _0222DC74: .word ov43_0222EDF8
    // _0222DC78: .word ov43_0222F0C4
    // TODO: decompile
}



void ov43_0222DC7C(void) {
    // ldr r0, [r4, r0]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldrh r1, [r0]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r1), 2, 0, 0x14);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
}



void ov43_0222DCC4(void) {
    sub_0202C6F4(*((u32*)(r0 + 4)));
    // ldrsb r4, [r5, r0]
    // bpl _0222DCE8
    // add r4, r4, r1
    // add r1, r5, r4
    sub_0202C090(r0, *((u8*)(*((u32*)(r5 + 0x10)) + 0x18)), 8);
    *((u8*)(r5 + 0xb)) = r4;
    _u32_div_f((r4 + 1), *((u32*)(r5 + 0x10)));
    // add r1, r5, r4
    sub_0202C090(r6, *((u8*)(r1 + 0x18)), 8);
    *((u8*)(r5 + 0xb)) = r4;
}



void ov43_0222DD40(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r7, r1, #0
    // ldr r1, _0222DD84 ; =_0222ED5C
    // str r2, [sp, #4]
    // ldrh r2, [r1, #0x2e]
    // add r5, r0, #0
    // add r0, sp, #8
    // strh r2, [r0]
    // ldrh r2, [r1, #0x30]
    // add r4, sp, #8
    // mov r6, #0
    // strh r2, [r0, #2]
    // ldrh r2, [r1, #0x32]
    // ldrh r1, [r1, #0x34]
    // strh r2, [r0, #4]
    // strh r1, [r0, #6]
    // ldr r0, [sp, #4]
    // mov r2, #1
    // str r0, [sp]
    // ldrh r1, [r4]
    // ldr r0, [r7, #0x58]
    // add r3, r5, #4
    // bl GfGfxLoader_GetScrnDataFromOpenNarc
    // str r0, [r5]
    // add r6, r6, #1
    // add r5, #8
    // add r4, r4, #2
    // cmp r6, #4
    // blt _0222DD62
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222DD84: .word _0222ED5C
    // TODO: decompile
}



void ov43_0222DD88(void) {
}



void ov43_0222DDA0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // mov r1, #0x46
    // lsl r1, r1, #2
    // ldr r4, _0222DDCC ; =ov43_0222EF20
    // mov r6, #0
    // add r5, r0, r1
    // ldr r0, [r7]
    // add r1, r5, #0
    // add r2, r4, #0
    // bl AddWindow
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r6, r6, #1
    // add r4, #8
    // add r5, #0x10
    // cmp r6, #8
    // blt _0222DDAE
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222DDCC: .word ov43_0222EF20
    // TODO: decompile
}



void ov43_0222DDD0(void) {
    // add r5, r0, r1
    ClearWindowTilemapAndCopyToVram(r5, (0x46 << 2));
    RemoveWindow(r5);
    // add r5, #0x10
}



void ov43_0222DDF0(void) {
    // ldrh r1, [r2]
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(r2 + 2));
    *((u16*)(r0 + 4)) = *((u16*)(r2 + 4));
    *((u32*)(r0 + 8)) = r3;
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 0x2c)) = 0;
}



void ov43_0222DE10(void) {
    // bx lr
    // TODO: decompile
}



void ov43_0222DE14(void) {
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x44]
    // str r3, [sp, #0x1c]
    AllocWindows(((r3 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x14]
    // add r7, r1, r4
    *((u32*)(r7 + 0xc)) = r0;
    // ldr r0, [sp, #0x1c]
    *((u32*)(r7 + 0x2c)) = r0;
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // ldr r4, [sp, #0x24]
    // ldr r5, [sp, #0x40]
    // add r0, r0, r4
    InitWindow(*((u32*)(r7 + 0xc)));
    // ldr r1, [sp, #0x14]
    // ldrsh r0, [r1, r0]
    // neg r0, r0
    // ldr r2, [sp, #0x14]
    // ldrsh r6, [r2, r1]
    // neg r6, r6
    // add r0, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x10]
    // ldrb r3, [r5]
    // ldr r0, [sp, #0x18]
    // add r3, r3, r6
    // add r1, r1, r4
    AddWindowParameterized(*((u32*)0xb), *((u32*)(r7 + 0xc)), 3, ((r3 << 0x18) >> 0x18));
    // add r0, r0, r4
    FillWindowPixelBuffer(*((u32*)(r7 + 0xc)), 0);
    // add r4, #0x10
    // mul r2, r0
    // ldr r0, [sp, #0x20]
    // add r0, r0, r2
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // str r1, [sp, #0x24]
}



void ov43_0222DED0(void) {
    // add r0, r5, r4
    // add r6, #0x2c
    // ldr r1, [r6, r4]
    WindowArray_Delete(*((u32*)(r0 + 0xc)), ((r1 << 0x18) >> 0x18));
    // add r0, r5, r4
    *((u32*)(r0 + 0xc)) = 0;
    // str r1, [r6, r4]
}



void ov43_0222DEF8(void) {
    // add r5, r0, r1
    // add r0, r0, r4
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0xc)), (r1 << 2));
    // add r4, #0x10
}



void ov43_0222DF1C(void) {
    // add r5, r0, r1
    // add r0, r0, r4
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r5 + 0xc)), (r1 << 2));
    // add r0, r0, r4
    FillWindowPixelBuffer(*((u32*)(r5 + 0xc)), r7);
    // add r4, #0x10
}



void ov43_0222DF4C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r2, #0
    // add r7, r1, #0
    // add r1, r5, #0
    // add r6, r0, #0
    // add r4, r3, #0
    // bl ov43_0222DF90
    // ldr r0, [sp, #0x1c]
    // cmp r0, #0
    // beq _0222DF74
    // add r2, r5, #0
    // lsl r5, r4, #2
    // ldr r4, _0222DF88 ; =ov43_0222F12C
    // ldr r3, [sp, #0x20]
    // ldr r4, [r4, r5]
    // add r0, r6, #0
    // add r1, r7, #0
    // blx r4
    // pop {r3, r4, r5, r6, r7, pc}
    // add r2, r5, #0
    // lsl r5, r4, #2
    // ldr r4, _0222DF8C ; =_0222F0E0
    // ldr r3, [sp, #0x20]
    // ldr r4, [r4, r5]
    // add r0, r6, #0
    // add r1, r7, #0
    // blx r4
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222DF88: .word ov43_0222F12C
    // _0222DF8C: .word _0222F0E0
    // TODO: decompile
}



void ov43_0222DF90(void) {
    ov43_0222DF1C(r0, 0);
    ov43_0222EC14(r6, r5);
}



void ov43_0222DFB0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r5, r1, #0
    // str r0, [sp, #0x20]
    // ldr r0, [r5, #4]
    // add r4, r2, #0
    // bl sub_0202C6F4
    // str r0, [sp, #0x28]
    // mov r1, #0
    // str r4, [sp]
    // mov r0, #0x13
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, _0222E0E4 ; =0x00010200
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x7c]
    // add r2, r1, #0
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // add r3, r5, #0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r6, #0
    // str r6, [sp, #0x24]
    // ldr r0, [sp, #0x24]
    // str r4, [sp]
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // add r0, r6, #0
    // add r0, #0x14
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, _0222E0E4 ; =0x00010200
    // str r7, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x7c]
    // mov r1, #0
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // mov r2, #2
    // str r0, [sp, #0x18]
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // add r3, r5, #0
    // bl ov43_0222EC58
    // mov r1, #0xb
    // ldrsb r1, [r5, r1]
    // ldr r0, [sp, #0x28]
    // add r2, r6, #1
    // add r1, r5, r1
    // ldrb r1, [r1, #0x18]
    // bl sub_0202C090
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x16
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, _0222E0E4 ; =0x00010200
    // str r7, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x7c]
    // mov r1, #0
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // mov r2, #2
    // str r0, [sp, #0x18]
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // add r3, r5, #0
    // bl ov43_0222EC58
    // ldr r0, [sp, #0x24]
    // add r6, r6, #1
    // add r0, #0x18
    // str r0, [sp, #0x24]
    // cmp r6, #2
    // blo _0222DFEE
    // str r4, [sp]
    // mov r0, #0x17
    // str r0, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // ldr r0, _0222E0E4 ; =0x00010200
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x7c]
    // mov r2, #1
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // add r3, r5, #0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r1, #0xb
    // ldrsb r1, [r5, r1]
    // ldr r0, [sp, #0x28]
    // mov r2, #3
    // add r1, r5, r1
    // ldrb r1, [r1, #0x18]
    // bl sub_0202C090
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // ldr r0, _0222E0E4 ; =0x00010200
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x7c]
    // add r4, #0x80
    // str r0, [sp, #0x14]
    // ldr r0, [r4]
    // mov r2, #3
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r3, r5, #0
    // str r1, [sp, #0x1c]
    // bl ov43_0222EC58
    // ldr r0, [sp, #0x20]
    // mov r1, #0
    // bl ov43_0222DEF8
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _0222E0E4: .word 0x00010200
    // TODO: decompile
}



void ov43_0222E0E8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r1, #0
    // add r6, r0, #0
    // ldr r0, [r5, #4]
    // add r4, r2, #0
    // bl Save_Frontier_GetStatic
    // add r7, r0, #0
    // str r4, [sp]
    // mov r0, #0x1d
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // ldr r0, _0222E21C ; =0x00010200
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x7c]
    // mov r1, #2
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // add r3, r5, #0
    // str r0, [sp, #0x18]
    // add r0, r6, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // add r0, r7, #0
    // mov r1, #0x64
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // str r4, [sp]
    // add r0, #0x22
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r1, _0222E21C ; =0x00010200
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, [r4, #0x7c]
    // mov r2, #1
    // str r1, [sp, #0x14]
    // add r1, r4, #0
    // add r1, #0x80
    // ldr r1, [r1]
    // add r3, r5, #0
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, r6, #0
    // mov r1, #2
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // add r0, r7, #0
    // mov r1, #0x71
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x25
    // str r0, [sp, #4]
    // mov r0, #0x70
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, _0222E21C ; =0x00010200
    // mov r2, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x7c]
    // mov r1, #2
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // add r3, r5, #0
    // str r0, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // add r0, r6, #0
    // bl ov43_0222EC58
    // str r4, [sp]
    // mov r0, #0x24
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r1, #0x18
    // str r1, [sp, #0xc]
    // ldr r1, _0222E21C ; =0x00010200
    // mov r2, #1
    // str r1, [sp, #0x10]
    // ldr r1, [r4, #0x7c]
    // add r3, r5, #0
    // str r1, [sp, #0x14]
    // add r1, r4, #0
    // add r1, #0x80
    // ldr r1, [r1]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, r6, #0
    // mov r1, #2
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // add r0, r7, #0
    // mov r1, #0x70
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x25
    // str r0, [sp, #4]
    // mov r0, #0x70
    // str r0, [sp, #8]
    // mov r0, #0x18
    // str r0, [sp, #0xc]
    // ldr r0, _0222E21C ; =0x00010200
    // mov r2, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x7c]
    // add r4, #0x80
    // str r0, [sp, #0x14]
    // ldr r0, [r4]
    // mov r1, #2
    // str r0, [sp, #0x18]
    // add r0, r6, #0
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // add r0, r6, #0
    // mov r1, #2
    // bl ov43_0222DEF8
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222E21C: .word 0x00010200
    // TODO: decompile
}



void ov43_0222E220(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r1, #0
    // str r0, [sp, #0x20]
    // ldr r0, [r5, #4]
    // add r6, r3, #0
    // add r4, r2, #0
    // bl Save_Frontier_GetStatic
    // str r0, [sp, #0x24]
    // mov r0, #0x80
    // add r1, r6, #0
    // bl String_New
    // add r7, r0, #0
    // mov r0, #0x80
    // add r1, r6, #0
    // bl String_New
    // add r6, r0, #0
    // str r4, [sp]
    // mov r0, #0x1e
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // ldr r0, _0222E5B0 ; =0x00010200
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    // mov r1, #3
    // add r3, r5, #0
    // bl ov43_0222EC58
    // str r4, [sp]
    // mov r0, #0x26
    // str r0, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // ldr r0, _0222E5B0 ; =0x00010200
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r1, #3
    // mov r2, #1
    // add r3, r5, #0
    // bl ov43_0222EC58
    // str r4, [sp]
    // mov r0, #0x28
    // str r0, [sp, #4]
    // mov r0, #0xd0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, _0222E5B0 ; =0x00010200
    // mov r1, #3
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // mov r0, #2
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r2, #1
    // add r3, r5, #0
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x66
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // cmp r0, #0
    // bne _0222E2C8
    // mov r0, #0x22
    // b _0222E2CA
    // mov r0, #0x23
    // str r4, [sp]
    // str r0, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // ldr r0, _0222E5B0 ; =0x00010200
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r1, #3
    // mov r2, #2
    // add r3, r5, #0
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x73
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x25
    // str r0, [sp, #4]
    // mov r0, #0x70
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, _0222E5B0 ; =0x00010200
    // mov r1, #3
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r2, #2
    // add r3, r5, #0
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x75
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x2b
    // str r0, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // ldr r0, _0222E5B0 ; =0x00010200
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r1, #3
    // mov r2, #2
    // add r3, r5, #0
    // bl ov43_0222EC58
    // str r4, [sp]
    // mov r0, #0x24
    // str r0, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, _0222E5B0 ; =0x00010200
    // mov r2, #2
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r1, #3
    // add r3, r5, #0
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x72
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x25
    // str r0, [sp, #4]
    // mov r0, #0x70
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, _0222E5B0 ; =0x00010200
    // mov r1, #3
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r2, #2
    // add r3, r5, #0
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x74
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x2b
    // str r0, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, _0222E5B0 ; =0x00010200
    // mov r2, #2
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r1, #3
    // add r3, r5, #0
    // bl ov43_0222EC58
    // str r4, [sp]
    // mov r0, #0x27
    // str r0, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // ldr r0, _0222E5B0 ; =0x00010200
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // mov r1, #3
    // ldr r0, [sp, #0x20]
    // add r2, r1, #0
    // add r3, r5, #0
    // bl ov43_0222EC58
    // mov r1, #3
    // str r4, [sp]
    // mov r0, #0x28
    // str r0, [sp, #4]
    // mov r0, #0xd0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, _0222E5B0 ; =0x00010200
    // add r2, r1, #0
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // mov r0, #2
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // add r3, r5, #0
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x68
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // cmp r0, #0
    // bne _0222E460
    // mov r0, #0x22
    // b _0222E462
    // mov r0, #0x23
    // str r4, [sp]
    // str r0, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // ldr r0, _0222E5B0 ; =0x00010200
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r1, #3
    // mov r2, #4
    // add r3, r5, #0
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x77
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x25
    // str r0, [sp, #4]
    // mov r0, #0x70
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, _0222E5B0 ; =0x00010200
    // mov r1, #3
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r2, #4
    // add r3, r5, #0
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x79
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x2b
    // str r0, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // ldr r0, _0222E5B0 ; =0x00010200
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r1, #3
    // mov r2, #4
    // add r3, r5, #0
    // bl ov43_0222EC58
    // str r4, [sp]
    // mov r0, #0x24
    // str r0, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, _0222E5B0 ; =0x00010200
    // mov r2, #4
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r1, #3
    // add r3, r5, #0
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x76
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x25
    // str r0, [sp, #4]
    // mov r0, #0x70
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, _0222E5B0 ; =0x00010200
    // mov r1, #3
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r2, #4
    // add r3, r5, #0
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x78
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x2b
    // str r0, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, _0222E5B0 ; =0x00010200
    // mov r2, #4
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r1, #3
    // add r3, r5, #0
    // bl ov43_0222EC58
    // ldr r0, [sp, #0x20]
    // mov r1, #3
    // bl ov43_0222DEF8
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222E5B0: .word 0x00010200
    // TODO: decompile
}



void ov43_0222E5B4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r1, #0
    // str r0, [sp, #0x20]
    // ldr r0, [r5, #4]
    // add r6, r3, #0
    // add r4, r2, #0
    // bl Save_Frontier_GetStatic
    // str r0, [sp, #0x24]
    // mov r0, #0x80
    // add r1, r6, #0
    // bl String_New
    // add r7, r0, #0
    // mov r0, #0x80
    // add r1, r6, #0
    // bl String_New
    // add r6, r0, #0
    // str r4, [sp]
    // mov r0, #0x1f
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // ldr r0, _0222E788 ; =0x00010200
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    // mov r1, #4
    // add r3, r5, #0
    // bl ov43_0222EC58
    // str r4, [sp]
    // mov r0, #0x29
    // str r0, [sp, #4]
    // mov r0, #0x68
    // str r0, [sp, #8]
    // mov r0, #0x14
    // str r0, [sp, #0xc]
    // ldr r0, _0222E788 ; =0x00010200
    // mov r2, #0
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // mov r1, #4
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x6c
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // cmp r0, #0
    // bne _0222E638
    // mov r0, #0x22
    // b _0222E63A
    // mov r0, #0x23
    // str r4, [sp]
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // mov r0, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, _0222E788 ; =0x00010200
    // mov r1, #4
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x87
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x2d
    // str r0, [sp, #4]
    // mov r0, #0x70
    // str r0, [sp, #8]
    // mov r0, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, _0222E788 ; =0x00010200
    // mov r1, #4
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r2, #0
    // add r3, r5, #0
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x88
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x2c
    // str r0, [sp, #4]
    // mov r0, #0xa8
    // str r0, [sp, #8]
    // mov r0, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, _0222E788 ; =0x00010200
    // mov r2, #0
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x1c]
    // mov r1, #4
    // add r3, r5, #0
    // bl ov43_0222EC58
    // str r4, [sp]
    // mov r0, #0x24
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // mov r0, #0x48
    // str r0, [sp, #0xc]
    // ldr r0, _0222E788 ; =0x00010200
    // mov r1, #4
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x86
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x2d
    // str r0, [sp, #4]
    // mov r0, #0x70
    // str r0, [sp, #8]
    // mov r0, #0x48
    // str r0, [sp, #0xc]
    // ldr r0, _0222E788 ; =0x00010200
    // mov r1, #4
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r2, #0
    // add r3, r5, #0
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x8a
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x2c
    // str r0, [sp, #4]
    // mov r0, #0xa8
    // str r0, [sp, #8]
    // mov r0, #0x48
    // str r0, [sp, #0xc]
    // ldr r0, _0222E788 ; =0x00010200
    // mov r2, #0
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // mov r1, #4
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // ldr r0, [sp, #0x20]
    // mov r1, #4
    // bl ov43_0222DEF8
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222E788: .word 0x00010200
    // TODO: decompile
}



void ov43_0222E78C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r5, r1, #0
    // str r0, [sp, #0x20]
    // ldr r0, [r5, #4]
    // str r3, [sp, #0x24]
    // add r4, r2, #0
    // bl Save_Frontier_GetStatic
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x24]
    // mov r0, #0x80
    // bl String_New
    // add r7, r0, #0
    // ldr r1, [sp, #0x24]
    // mov r0, #0x80
    // bl String_New
    // add r6, r0, #0
    // str r4, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // ldr r0, _0222E900 ; =0x00010200
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // mov r1, #5
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x28]
    // mov r1, #0x7c
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // ldr r1, [sp, #0x24]
    // bl GetSpeciesName
    // str r0, [sp, #0x2c]
    // mov r0, #0x18
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0222E900 ; =0x00010200
    // mov r1, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0xc]
    // ldr r0, [r0, #0x20]
    // ldr r2, [sp, #0x2c]
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x2c]
    // bl String_Delete
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x28]
    // mov r1, #0x6a
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // cmp r0, #0
    // bne _0222E826
    // mov r0, #0x22
    // b _0222E828
    // mov r0, #0x23
    // str r4, [sp]
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // mov r0, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, _0222E900 ; =0x00010200
    // mov r1, #5
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x28]
    // mov r1, #0x7b
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x25
    // str r0, [sp, #4]
    // mov r0, #0x70
    // str r0, [sp, #8]
    // mov r0, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, _0222E900 ; =0x00010200
    // mov r1, #5
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r2, #0
    // add r3, r5, #0
    // bl ov43_0222EC58
    // str r4, [sp]
    // mov r0, #0x24
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // mov r0, #0x48
    // str r0, [sp, #0xc]
    // ldr r0, _0222E900 ; =0x00010200
    // mov r1, #5
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x28]
    // mov r1, #0x7a
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x25
    // str r0, [sp, #4]
    // mov r0, #0x70
    // str r0, [sp, #8]
    // mov r0, #0x48
    // str r0, [sp, #0xc]
    // ldr r0, _0222E900 ; =0x00010200
    // mov r1, #5
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r2, #0
    // add r3, r5, #0
    // bl ov43_0222EC58
    // ldr r0, [sp, #0x20]
    // mov r1, #5
    // bl ov43_0222DEF8
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222E900: .word 0x00010200
    // TODO: decompile
}



void ov43_0222E904(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r1, #0
    // str r0, [sp, #0x20]
    // ldr r0, [r5, #4]
    // add r6, r3, #0
    // add r4, r2, #0
    // bl Save_Frontier_GetStatic
    // str r0, [sp, #0x24]
    // mov r0, #0x80
    // add r1, r6, #0
    // bl String_New
    // add r7, r0, #0
    // mov r0, #0x80
    // add r1, r6, #0
    // bl String_New
    // add r6, r0, #0
    // str r4, [sp]
    // mov r0, #0x21
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // ldr r0, _0222EA3C ; =0x00010200
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // mov r1, #6
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x6e
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // cmp r0, #0
    // bne _0222E964
    // mov r0, #0x22
    // b _0222E966
    // mov r0, #0x23
    // str r4, [sp]
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // mov r0, #0x18
    // str r0, [sp, #0xc]
    // ldr r0, _0222EA3C ; =0x00010200
    // mov r1, #6
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x8f
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x2e
    // str r0, [sp, #4]
    // mov r0, #0x70
    // str r0, [sp, #8]
    // mov r0, #0x18
    // str r0, [sp, #0xc]
    // ldr r0, _0222EA3C ; =0x00010200
    // mov r1, #6
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r2, #0
    // add r3, r5, #0
    // bl ov43_0222EC58
    // str r4, [sp]
    // mov r0, #0x24
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // mov r0, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, _0222EA3C ; =0x00010200
    // mov r1, #6
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r2, [r5, r2]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x8e
    // add r2, r5, r2
    // ldrb r2, [r2, #0x18]
    // bl FrontierSave_GetStat
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x2e
    // str r0, [sp, #4]
    // mov r0, #0x70
    // str r0, [sp, #8]
    // mov r0, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, _0222EA3C ; =0x00010200
    // mov r1, #6
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x14]
    // str r6, [sp, #0x18]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r2, #0
    // add r3, r5, #0
    // bl ov43_0222EC58
    // ldr r0, [sp, #0x20]
    // mov r1, #6
    // bl ov43_0222DEF8
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222EA3C: .word 0x00010200
    // TODO: decompile
}



void ov43_0222EA40(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r1, #0
    // str r0, [sp, #0x20]
    // ldr r0, [r5, #4]
    // add r4, r2, #0
    // add r7, r3, #0
    // bl Save_Frontier_GetStatic
    // ldr r0, [r5, #4]
    // bl sub_0202C6F4
    // str r0, [sp, #0x24]
    // mov r0, #0x80
    // add r1, r7, #0
    // bl String_New
    // add r6, r0, #0
    // mov r0, #0x80
    // add r1, r7, #0
    // bl String_New
    // add r7, r0, #0
    // str r4, [sp]
    // mov r0, #0x2f
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // ldr r0, _0222EBD4 ; =0x00010200
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r7, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // mov r1, #1
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // add r0, r4, #0
    // mov r1, #0
    // bl ov43_0222AC18
    // str r4, [sp]
    // mov r0, #0x30
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // mov r0, #0x18
    // str r0, [sp, #0xc]
    // ldr r0, _0222EBD4 ; =0x00010200
    // mov r1, #1
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r7, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r1, #0xb
    // ldrsb r1, [r5, r1]
    // ldr r0, [sp, #0x24]
    // mov r2, #0xa
    // add r1, r5, r1
    // ldrb r1, [r1, #0x18]
    // bl sub_0202C090
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x31
    // str r0, [sp, #4]
    // mov r0, #0x78
    // str r0, [sp, #8]
    // mov r0, #0x18
    // str r0, [sp, #0xc]
    // ldr r0, _0222EBD4 ; =0x00010200
    // mov r2, #0
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r7, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // mov r1, #1
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // add r0, r4, #0
    // mov r1, #1
    // bl ov43_0222AC18
    // str r4, [sp]
    // mov r0, #0x30
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, _0222EBD4 ; =0x00010200
    // mov r1, #1
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r7, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r2, #0xb
    // ldrsb r1, [r5, r2]
    // ldr r0, [sp, #0x24]
    // add r1, r5, r1
    // ldrb r1, [r1, #0x18]
    // bl sub_0202C090
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x31
    // str r0, [sp, #4]
    // mov r0, #0x78
    // str r0, [sp, #8]
    // mov r0, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, _0222EBD4 ; =0x00010200
    // mov r2, #0
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r7, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // mov r1, #1
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // add r0, r4, #0
    // mov r1, #2
    // bl ov43_0222AC18
    // str r4, [sp]
    // mov r0, #0x30
    // str r0, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // mov r0, #0x48
    // str r0, [sp, #0xc]
    // ldr r0, _0222EBD4 ; =0x00010200
    // mov r1, #1
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r7, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // mov r1, #0xb
    // ldrsb r1, [r5, r1]
    // ldr r0, [sp, #0x24]
    // mov r2, #0xc
    // add r1, r5, r1
    // ldrb r1, [r1, #0x18]
    // bl sub_0202C090
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov43_0222ABFC
    // str r4, [sp]
    // mov r0, #0x31
    // str r0, [sp, #4]
    // mov r0, #0x78
    // str r0, [sp, #8]
    // mov r0, #0x48
    // str r0, [sp, #0xc]
    // ldr r0, _0222EBD4 ; =0x00010200
    // mov r2, #0
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r7, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // mov r1, #1
    // add r3, r5, #0
    // str r2, [sp, #0x1c]
    // bl ov43_0222EC58
    // ldr r0, [sp, #0x20]
    // mov r1, #1
    // bl ov43_0222DEF8
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222EBD4: .word 0x00010200
    // TODO: decompile
}



void ov43_0222EBD8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x20
    // add r3, r1, #0
    // str r2, [sp]
    // mov r1, #0xe
    // str r1, [sp, #4]
    // mov r4, #0
    // str r4, [sp, #8]
    // ldr r1, _0222EC10 ; =0x00010200
    // str r4, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, [r2, #0x7c]
    // add r2, #0x80
    // str r1, [sp, #0x14]
    // ldr r1, [r2]
    // add r5, r0, #0
    // str r1, [sp, #0x18]
    // mov r1, #7
    // add r2, r4, #0
    // str r4, [sp, #0x1c]
    // bl ov43_0222EC58
    // add r0, r5, #0
    // mov r1, #7
    // bl ov43_0222DEF8
    // add sp, #0x20
    // pop {r3, r4, r5, pc}
    // _0222EC10: .word 0x00010200
    // TODO: decompile
}



void ov43_0222EC14(void) {
    // ldrsh r2, [r1, r0]
    // neg r2, r2
    // ldrsh r3, [r1, r0]
    // neg r3, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r0), 3, 0, ((r3 << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 3);
}



void ov43_0222EC58(void) {
    // ldr r6, [sp, #0x30]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // ldr r1, [sp, #0x34]
    // ldr r2, [sp, #0x48]
    // ldr r4, [sp, #0x44]
    // ldr r5, [sp, #0x38]
    ReadMsgDataIntoString(*((u32*)(r6 + 0x54)));
    // ldr r2, [sp, #0x48]
    StringExpandPlaceholders(*((u32*)(r6 + 0x50)), r4);
    // ldr r0, [sp, #0x4c]
    FontID_String_GetWidth(1, r4, 0);
    // sub r5, r5, r0
    FontID_String_GetWidth(1, r4, 0);
    // sub r5, r5, r0
    // ldr r0, [sp, #0x3c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r0, r7, r0
    // ldr r0, [sp, #0x14]
    // add r0, r1, r0
    AddTextPrinterParameterizedWithColor(((0 << 2) << 4), 1, r4, r5);
}



void ov43_0222ECD4(void) {
    // add r2, #0x80
    ReadMsgDataIntoString(*((u32*)(r2 + 0x54)), r3, *((u32*)r2));
    // add r2, #0x80
    StringExpandPlaceholders(*((u32*)(r4 + 0x50)), *((u32*)(r4 + 0x7c)), *((u32*)r4));
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 1, *((u32*)(r4 + 0x7c)));
}



void ov43_0222ED18(void) {
    // ldrsh r3, [r4, r0]
    *((u16*)(r0 + 2)) = r3;
    // ldrsh r0, [r4, r0]
    // add r0, r0, r1
    _s32_div_f(0, 3, 3);
    // strh r1, [r4]
    // ldrsh r3, [r4, r0]
    *((u16*)(r4 + 2)) = r3;
    // ldrsh r3, [r4, r0]
    // add r1, r3, r1
    // strh r1, [r4]
    // ldrsh r0, [r4, r0]
    // add r0, r0, r2
    // strh r0, [r4]
}


