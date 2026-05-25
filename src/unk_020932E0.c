/* Decompiled from asm/unk_020932E0.s */
#include "global.h"

void sub_020932E0(void) {
    Heap_Alloc(0x000046E8);
    memset(0, 0x000046E8);
    GF_AssertFail();
    *((u32*)(r4 + 4)) = r6;
    *((u8*)(r4 + 0xd)) = r5;
    *((u8*)(r4 + 0x10)) = r7;
    GF_AssertFail(*((u8*)(r4 + 0xd)));
    *((u8*)(r4 + 0xd)) = 3;
    Heap_Alloc(*((u32*)(r4 + 4)), (0xc * *((u8*)(r4 + 0xd))), *((u8*)(r4 + 0xd)));
    // str r0, [r4, r1]
    // add r1, #0x22
    Heap_Alloc(*((u32*)(r4 + 4)), (*((u8*)(r4 + 0xd)) << 2));
    // str r0, [r4, r1]
    // add r1, #0xf
    sub_02095CE0(*((u32*)(r4 + 4)), r4);
    // str r0, [r4, r1]
}




void sub_02093354(void) {
    sub_02095D2C(*((u32*)(r0 + 0x000046B8)));
    sub_0209515C(r5);
    // add r0, r5, r0
    sub_020950F8(0x00004650, 1);
    // add r0, r5, r0
    RemoveWindow(0x00004670);
    sub_020950D4(r5);
    Heap_Free(*((u32*)(r5 + 0x000046C8)));
    Heap_Free(*((u32*)(r5 + 0x000046CC)));
    sub_0200AEB0(*((u32*)(r5 + (0x57 << 2))));
    sub_0200B0A8(*((u32*)(r5 + (0x16 << 4))));
    Destroy2DGfxResObjMan(*((u32*)(r5 + (0x51 << 2))));
    SpriteList_Delete(*((u32*)(r5 + 0x18)));
    Heap_Free(*((u32*)(r5 + 0x000046A4)));
    YesNoPrompt_Destroy(*((u32*)(r5 + 8)));
    Heap_Free(*((u32*)(r5 + 0x000007E4)));
    Heap_Free(*((u32*)(r5 + (0x8d << 4))));
    FontID_Release(4);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    // strh r1, [r0]
    FreeBgTilemapBuffer(*((u32*)r5), 0);
    FreeBgTilemapBuffer(*((u32*)r5), 1);
    FreeBgTilemapBuffer(*((u32*)r5), 2);
    FreeBgTilemapBuffer(*((u32*)r5), 3);
    Heap_Free(r5);
}




void sub_02093440(void) {
    YesNoPrompt_Create(*((u32*)(r0 + 4)));
    *((u32*)(r5 + 8)) = r0;
    // ldr r2, [sp, #0x48]
    // str r6, [r5, r0]
    // str r7, [r5, r1]
    // str r4, [r5]
    // add r1, #0xa0
    // str r2, [r5, r1]
    // ldr r2, [sp, #0x44]
    // add r1, #0x9c
    // str r2, [r5, r1]
    // ldr r1, [sp, #0x34]
    *((u8*)(r5 + 0xf)) = 0x0000463C;
    // mvn r2, r2
    // add r1, #0xa8
    // str r2, [r5, r1]
    // add r0, #0xa4
    // str r2, [r5, r0]
    // ldr r0, [sp, #0x30]
    *((u8*)(r5 + 0x13)) = 0x0000463C;
    sub_02094D9C(*((u32*)r5), *((u32*)(r5 + 4)), 0);
    sub_02093A50(r5);
    sub_02093B40(r5);
    sub_02094004(r5);
    GfGfx_EngineATogglePlanes(0x10, 1);
    FontID_Alloc(4, *((u32*)(r5 + 4)));
    LoadFontPal0(0, (0x1a << 4), *((u32*)(r5 + 4)));
    LoadFontPal0(0, (6 << 6), *((u32*)(r5 + 4)));
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x30]
    *((u8*)(r5 + 0x11)) = r0;
    // ldr r0, [sp, #0x2c]
    *((u8*)(r5 + 0x12)) = r0;
    sub_02095D1C(*((u32*)(r5 + 0x000046B8)), ((r1 << 0x18) >> 0x18));
    sub_02095D40(*((u32*)(r5 + 0x000046B8)), 2, 0);
    sub_02093B84(r5);
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x3c]
    // str r0, [r5, r1]
    // str r2, [r5, r0]
    // add r1, #8
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)r5), 0x00004648, 1, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)r5), 0x00004670, 1, 0x19);
    sub_02094D1C(r5);
    sub_020941CC(r5, *((u32*)r5), *((u32*)(r5 + 4)));
    sub_020942B0(r5);
    sub_020943EC(r5);
    sub_020950C0(r5);
    sub_02095794();
    // ldr r0, [sp, #0x40]
    // str r0, [r5, r1]
    *((u32*)(r5 + 0x14)) = 0;
    // add r0, #8
    // str r2, [r5, r0]
    // add r0, #0xc
    // str r2, [r5, r0]
    // add r1, #0x10
    // str r2, [r5, r1]
}




void sub_02093594(void) {
    // add r0, r4, r0
    // blx r1
    // str r1, [r4, r0]
    sub_020956B8(r0, 0);
    GF_RunVramTransferTasks();
    OamManager_ApplyAndResetBuffers();
    DoScheduledBgGpuUpdates(*((u32*)r4));
    // str r0, [r3, r1]
}




void sub_020935E0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _020935F4: ; jump table
}




void sub_02093630(void) {
    // str r4, [sp]
    System_GetTouchHeld();
    // sub r0, #8
    sub_02095DD8(*((u32*)(r5 + 0x000046C0)), gSystem);
    sub_02095540(r5);
    // asr r7, r0, #0x18
    sub_020955EC(r5);
    // asr r7, r0, #0x18
    // asr r6, r0, #0x18
    // asr r6, r0, #0x18
    sub_02095354(r5);
    // str r0, [sp]
    PlaySE(0x000005DD);
    sub_020954CC(r5);
    // str r0, [sp]
    PlaySE(0x000005DD);
    sub_02095D88(*((u32*)(r5 + 0x000046B8)), r7, r6);
    sub_02095238(r5);
    PlaySE(0x000005DC);
    System_GetTouchNew(*((u32*)(r5 + 0x000046BC)));
    // add r0, #0x44
    // str r1, [r5, r0]
    TouchscreenHitbox_FindRectAtTouchNew(*((u32*)(r5 + 0x000007E4)), 1);
    // mvn r0, r0
    sub_02095D40(*((u32*)(r5 + 0x000046B8)), 2, ((r0 << 0x18) >> 0x18));
    sub_02094794(r5, r4);
    PlaySE(0x000005EB);
    sub_020948C4(r5, 1, r4);
    // str r0, [sp]
    // add r0, #0x21
    // sub r2, #0x21
    sub_02095D40(*((u32*)(r5 + 0x000046B8)), 3, ((r4 << 0x18) >> 0x18));
    // sub r1, #0x21
    sub_02094860(r5, r4);
    PlaySE(0x000005EB);
    // sub r4, #0x21
    sub_020948C4(r5, 2, r4);
    // str r0, [sp]
    sub_02095540(r5);
    sub_020955EC(r5);
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #4
    Sprite_SetMatrix(*((u32*)(r5 + (0x23 << 6))));
    sub_02095D40(*((u32*)(r5 + 0x000046B8)), 1, 0);
    sub_0209569C(r5);
    // str r0, [sp]
    sub_020956B8(r5);
    // str r1, [r5, r0]
    System_GetTouchHeld(0x000046C0, 1);
    sub_020949F4(r5);
    // str r1, [r5, r0]
    sub_02094A70(r5, 1);
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    *((u32*)(r5 + 0x14)) = 1;
    // ldr r0, [sp]
}




void sub_0209389C(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    *((u8*)(8 + 0x10)) = 0x19;
    *((u8*)(8 + 0x11)) = 0xf;
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(*((u32*)(r4 + 8)), 0xf);
    // add r0, r4, r0
    sub_020950F8(0x00004660, 0);
    sub_0209501C(r4, 3, 1);
    sub_0209501C(r4, 2, 1);
    sub_02095780();
    *((u32*)(r4 + 0x14)) = 2;
}




void sub_02093908(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + 8)));
    // add r0, r4, r0
    sub_020950F8(0x00004660, 1);
    YesNoPrompt_Reset(*((u32*)(r4 + 8)));
    *((u32*)(r4 + 0x14)) = 6;
    // add r0, r4, r0
    sub_020950F8(0x00004660, 1);
    YesNoPrompt_Reset(*((u32*)(r4 + 8)));
    sub_02094F5C(r4, *((u32*)(r4 + 0x000046B0)));
    sub_020950C0(r4);
    sub_02095794();
    sub_020956B8(r4);
    *((u32*)(r4 + 0x14)) = 0;
}




void sub_0209396C(void) {
    // add r0, sp, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // add r1, sp, #0
}




void sub_020939B8(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + 8)));
    // add r0, r4, r0
    sub_020950F8(0x00004660, 1);
    YesNoPrompt_Reset(*((u32*)(r4 + 8)));
    sub_02094F5C(r4, *((u32*)(r4 + 0x00004684)));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0x23 << 6))), 0x2d);
    sub_02094A90(r4, 2);
    // str r1, [r4, r0]
    sub_02095794(0x000046BC, 0);
    sub_020956B8(r4);
    *((u32*)(r4 + 0x14)) = 0;
    // add r0, r4, r0
    sub_020950F8(0x00004660, 1);
    YesNoPrompt_Reset(*((u32*)(r4 + 8)));
    sub_02094A90(r4, 0);
    sub_02095794();
    *((u32*)(r4 + 0x14)) = 0;
}




void sub_02093A40(void) {
}




void sub_02093A50(void) {
    // add r1, #0x1c
    // add r0, #0x1c
    // str r0, [r4, r7]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0x14
    // str r0, [sp, #0xc]
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x14
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x14
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // sub r1, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xff
}




void sub_02093B40(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // str r2, [sp, #0x1c]
    // add r2, #0xc
    // add r3, #0x30
    // str r2, [sp, #0x20]
    // str r1, [sp, #0x24]
    // add r0, r0, r3
    // str r1, [sp, #0x28]
}




void sub_02093B84(void) {
    // add r0, sp, #0x10
    sub_02094150(r0, 1);
    Heap_Alloc(*((u32*)(r5 + 4)), (*((u8*)(r5 + 0xd)) << 3));
    // str r0, [r5, r1]
    // str r0, [sp, #0xc]
    // str r7, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // strb r0, [r1, r6]
    // add r1, r0, r6
    // add r0, #0x18
    *((u8*)(*((u32*)(r5 + 0x000046A4)) + 2)) = *((u8*)(*((u32*)(r5 + 0x000046A4)) + 0));
    // add r1, r0, r6
    *((u8*)(*((u32*)(r5 + 0x000046A4)) + 1)) = 0xc0;
    // add r1, r0, r6
    // add r0, #0x20
    *((u8*)(*((u32*)(r5 + 0x000046A4)) + 3)) = *((u8*)(*((u32*)(r5 + 0x000046A4)) + 1));
    // add r1, r0, r6
    *((u32*)(*((u32*)(r5 + 0x000046A4)) + 4)) = 0;
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    // add r0, #0x28
    // str r0, [sp, #0x1c]
    // add r0, sp, #0x10
    Sprite_CreateAffine(*((u32*)(r5 + 0x000007E8)), *((u32*)(r5 + 0x000046A4)));
    // str r0, [r4, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + 0x000007E8)), 1);
    // add r1, #0x27
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x000007E8)), r7);
    Sprite_SetPriority(*((u32*)(r4 + 0x000007E8)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x000007E8)), 0);
    Sprite_SetDrawPriority(*((u32*)(r4 + 0x000007E8)), 6);
    // str r0, [sp]
    // ldr r2, [sp, #4]
    // add r0, #0x21
    // add r0, r1, r0
    sub_0209428C((r7 << 2), 0xd4, 0x18);
    // ldr r0, [sp, #0xc]
    // add r0, #0x28
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r6, #8
    // add r0, #0x28
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r4, #0x34
    // add r0, #0x28
    // str r0, [sp, #4]
    // add r4, #0x2c
    // str r0, [sp]
    sub_0209417C(r5, 0xd4, ((r7 + 1) * 0x28), 0x2f);
    // add r2, r5, r1
    // add r4, #0x28
    // str r0, [r2, r1]
    // strb r1, [r5, r0]
    // strb r3, [r5, r1]
    // strb r2, [r5, r1]
    // strb r3, [r5, r1]
    // str r1, [r5, r0]
}




void sub_02093CE4(void) {
    // str r0, [sp]
    // str r0, [sp, #0x18]
    // ldr r0, [sp]
    // mov ip, r0
    // ldr r0, [sp]
    // add r3, #8
    // ldr r5, [sp, #0x18]
    // str r4, [sp, #8]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // add r3, r0, r5
    // str r0, [sp, #0x1c]
    // sub r0, r0, r2
    // sub r1, r1, r2
    // ldr r0, [sp, #0x1c]
    // sub r1, r7, r6
    // sub r0, r0, r6
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp]
    sub_02093E7C(*((u32*)(*((u32*)(r0 + 0x0000469C)) + 0x00004694)), ((*((u8*)(0x0000469C + 3)) << 0x18) >> 0x18), *((u8*)(0x0000469C + 1)), 0x0000469C);
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // add r3, r0, r5
    // str r0, [sp, #0x20]
    // sub r0, r0, r2
    // sub r1, r1, r2
    // ldr r0, [sp, #0x20]
    // sub r1, r7, r6
    // sub r0, r0, r6
    // ldr r0, [sp]
    // ldr r1, [sp, #0x18]
    sub_02094F5C(*((u32*)(r1 + 0x00004694)), *((u8*)(r3 + 3)), *((u8*)(r3 + 1)));
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp]
    sub_02093E7C(((r1 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x18]
    // add r4, #8
    // mov r0, ip
    // add r5, #8
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x14]
    // add r2, #0xd
    // add r2, #0xc
    // add r2, #0xe
    // sub r2, #8
    // str r1, [sp, #0x10]
    // sub r7, r1, r6
    // add r2, #0xf
    // sub r1, r1, r6
    // ldr r1, [sp, #0x14]
    // sub r2, r1, r5
    // sub r1, r4, r5
    // sub r3, #0x18
    sub_02094F5C(1, *((u32*)(1 + r3)), r3);
    // ldr r0, [sp]
    sub_020956B8();
    // ldr r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // str r5, [sp, #4]
    // ldr r0, [sp, #4]
    // add r4, r0, r6
    // ldr r0, [sp, #0x10]
    // sub r0, r0, r3
    // sub r3, r4, r3
    // ldr r0, [sp, #0x14]
    // sub r3, r0, r2
    // sub r0, r1, r2
    // ldr r0, [sp]
    sub_02093F84(*((u32*)(*((u32*)(*((u8*)(2 + 0xd)) + 0x000046A4)) + 4)), ((*((u32*)(*((u32*)(*((u32*)(*((u8*)(2 + 0xd)) + 0x000046A4)) + 4)) + 0x00004684)) << 0x18) >> 0x18), ((0 << 0x18) >> 0x18), *((u8*)(r4 + 1)));
    // ldr r0, [sp, #0xc]
    // add r5, #8
    // add r6, #8
    GF_AssertFail(3);
}




void sub_02093E7C(void) {
    // str r1, [sp]
    PlaySE(0x000005EA);
    // ldr r0, [sp]
    // add r0, r1, r0
    *((u32*)((r0 << 3) + 4)) = 1;
    // sub r2, #0x20
    // ldr r1, [sp]
    sub_02094668(r5, *((u32*)(r5 + 0x000046A4)), ((*((u32*)(r5 + 0x000046A4)) << 0x18) >> 0x18), 0);
    // sub r2, #0xd
    // add r3, r0, r6
    // add r2, sp, #4
    // add r3, r5, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp, #4]
    // sub r1, r1, r0
    // str r1, [sp, #4]
    // ldr r1, [sp, #8]
    // sub r0, r1, r0
    // str r0, [sp, #8]
    Sprite_SetMatrix(*((u32*)(*((u32*)(r5 + (0x8d << 4))) + (0 * 0xc))), 0xc, 0xc, *((u32*)(r3 + 4)));
    Sprite_SetDrawFlag(*((u32*)(*((u32*)(r5 + (0x8d << 4))) + r6)), 1);
    // add r2, r2, r6
    *((u32*)(*((u32*)(r5 + (0x00004684 >> 3))) + 4)) = *((u32*)(r5 + 0x00004684));
    // add r2, r2, r6
    *((u32*)(*((u32*)(r5 + (0x00004684 >> 3))) + 8)) = *((u8*)(r5 + 0xf));
    *((u8*)(r5 + 0xe)) = (*((u8*)(r5 + 0xe)) + 1);
    // add r1, r5, r0
    Sprite_SetOamMode(*((u32*)(*((u32*)(r5 + 0x00004684)) + (0x66 << 2))), 1, *((u32*)(r5 + (0x00004684 >> 3))));
    // ldr r0, [sp]
    // add r1, r5, r1
    // add r0, #0x2c
    // str r2, [r1, r3]
    // str r6, [r1, r2]
    // str r4, [r1, r2]
    // add r3, #8
    // str r2, [r1, r3]
    // ldr r1, [sp]
    // str r1, [r5, r0]
}




void sub_02093F84(void) {
    PlaySE(0x000005EA);
    // add r0, r5, r7
    // str r1, [r0, r2]
    // add r0, r5, r0
    // sub r2, #0xa8
    Sprite_SetDrawFlag(*((u32*)((0x34 * r4) + (0x89 << 4))), 0, (0x89 << 4));
    // add r1, r2, r1
    *((u32*)((r4 << 3) + 4)) = 0;
    // add r0, r1, r0
    *((u32*)((r6 << 3) + 4)) = 1;
    sub_02094668(r5, r6, r4, 1);
    // add r2, r5, r7
    // add r1, r5, r1
    // str r3, [r1, r0]
    // str r4, [r1, r3]
    // str r3, [r1, r2]
    // add r0, #8
    // str r2, [r1, r0]
    // str r6, [r5, r0]
}




void sub_02094004(void) {
    // str r0, [sp]
    // add r0, #0x78
    sub_0209428C(*((u32*)(r0 + 0x000007E4)), 0xe0, 0xb0, 0x32);
    // str r0, [sp]
    sub_0209417C(r5, 0xe0, 0xb0, 4);
    // str r0, [r5, r1]
    Sprite_SetPriority(*((u32*)(r5 + 0x000008B4)), 3);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x000008B4)), 0);
    // str r3, [sp]
    // add r0, #0x80
    sub_0209428C(*((u32*)(r5 + 0x000007E4)), 0x90, 0x10, 0x20);
    // str r0, [sp]
    sub_0209417C(r5, 0x90, 0x10, 2);
    // str r0, [r5, r1]
    // str r3, [sp]
    // sub r1, #0xd4
    // add r0, #0x7c
    sub_0209428C(*((u32*)(r5 + 0x000008B8)), 0x10, 0x10, 0x20);
    // str r0, [sp]
    sub_0209417C(r5, 0x10, 0x10, 0);
    // str r0, [r5, r1]
    // str r1, [sp]
    sub_0209417C(r5, 0, 0, 0x32);
    // str r0, [r5, r1]
    // sub r1, #0xe0
    // add r0, #0x21
    // strb r2, [r1, r0]
    // str r0, [sp]
    sub_0209417C(r5, 0, 0x40, 6);
    // str r0, [r1, r4]
    // add r1, r0, r4
    // mvn r0, r0
    *((u32*)(*((u32*)(r5 + (0x8d << 4))) + 4)) = 0;
    // add r1, r1, r4
    *((u32*)(*((u32*)(r5 + (0x8d << 4))) + 8)) = *((u8*)(r5 + 0x10));
    Sprite_SetDrawPriority(*((u32*)(*((u32*)(r5 + (0x8d << 4))) + r4)), 4);
    // add r6, #0x24
    // add r4, #0xc
    *((u8*)(r5 + 0xe)) = 0;
    // str r0, [sp]
    sub_0209417C(r5, 0x14, 0x28, 0x2d);
    // str r0, [r5, r1]
    Sprite_SetPriority(*((u32*)(r5 + (0x23 << 6))), 1);
    Sprite_SetDrawPriority(*((u32*)(r5 + (0x23 << 6))), 1);
}




void sub_02094150(void) {
    // str r3, [r0]
    // add r3, r1, r3
}




void sub_0209417C(void) {
    // add r0, sp, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x24]
    // add r0, sp, #0
    // ldr r1, [sp, #0x48]
}




void sub_020941CC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x97, 1, r1, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r6, 2, 0, 0);
    BgCommitTilemapBufferToVram(r6, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x97, 4, r6, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r6, 3, 0, 0);
    BgCommitTilemapBufferToVram(r6, 3);
    // add r3, r5, r3
    // str r4, [sp]
    GfGfxLoader_GetScrnData(0x97, 3, 1, 0x000046D0);
    // str r0, [r5, r3]
    // add r3, #0xc
    // add r3, r5, r3
    // str r4, [sp]
    GfGfxLoader_GetScrnData(0x97, 1, 1, 0x000046C8);
    // str r0, [r5, r1]
    GfGfx_EngineATogglePlanes(8, 0);
}




void sub_0209428C(void) {
    // ldr r5, [sp, #8]
    // add r4, r5, r4
    // asr r4, r4, #1
    // sub r5, r2, r4
    // strb r5, [r0]
    // add r5, r3, r5
    // asr r5, r5, #1
    // sub r3, r1, r5
    // add r2, r2, r4
    // add r1, r1, r5
}




void sub_020942B0(void) {
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r0, sp, #0x18
    sub_02094150(1);
    // ldr r4, [sp, #4]
    // str r6, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #0xc]
    // add r0, r0, r7
    sub_0209428C(*((u32*)(r1 + 0x000007E4)), 0x14, 0x18);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x24]
    // add r0, sp, #0x18
    Sprite_CreateAffine(*((u32*)(r4 + (0x66 << 2))));
    // str r0, [r4, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + (0x66 << 2))), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0x66 << 2))), (r6 + 7));
    Sprite_SetPriority(*((u32*)(r4 + (0x66 << 2))), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x66 << 2))), 0);
    Sprite_SetDrawPriority(*((u32*)(r4 + (0x66 << 2))), 6);
    // ldr r0, [sp, #0x14]
    // add r4, #0x34
    // add r5, #0x18
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // add r0, #0x18
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #4]
    // add r0, sp, #0x18
    Sprite_CreateAffine(*((u32*)(((5 << 0xe) << 1) + (0x7b << 4))), (0x7b << 4));
    // ldr r1, [sp, #4]
    // str r0, [r1, r2]
    // ldr r0, [sp, #4]
    Sprite_SetAnimActiveFlag(*((u32*)(r0 + (0x7b << 4))), 1, (0x7b << 4));
    // ldr r0, [sp, #4]
    Sprite_SetAnimCtrlSeq(*((u32*)(r0 + (0x7b << 4))), 0x30);
    // ldr r0, [sp, #4]
    Sprite_SetPriority(*((u32*)(r0 + (0x7b << 4))), 1);
    // ldr r0, [sp, #4]
    Sprite_SetDrawFlag(*((u32*)(r0 + (0x7b << 4))), 0);
    // ldr r0, [sp, #4]
    Sprite_SetDrawPriority(*((u32*)(r0 + (0x7b << 4))), 8);
    // ldr r0, [sp, #4]
    Sprite_SetOamMode(*((u32*)(r0 + (0x7b << 4))), 1);
}




void sub_020943EC(void) {
}




void sub_02094400(void) {
    NARC_New(0x14, *((u32*)(r0 + 4)));
    // str r0, [sp, #0x1c]
    Heap_AllocAtEnd(*((u32*)(r5 + 4)), (1 << 0xc));
    // str r0, [sp, #0x20]
    Sprite_SetOamMode(*((u32*)(r5 + (0x66 << 2))), 0);
    // add r6, #0xc
    // add r3, sp, #0x24
    // blx r6
    // add r3, sp, #0x24
    // add r2, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x24
    // add r1, r5, r1
    sub_02094C08(0x40, 0x000008D4, r7, *((u32*)(r4 + (0x66 << 2))));
    // add r0, sp, #0x24
    Sprite_SetOamMode(*((u32*)(r4 + (0x66 << 2))), 1);
    Sprite_SetOamMode(*((u32*)(r4 + (0x66 << 2))), 0);
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // add r1, r5, r1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x24
    sub_02094C08(0x40, 0x000008D4, r7, 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x66 << 2))), 0);
    // add r4, #0x34
    // ldr r0, [sp, #0x20]
    Heap_Free();
    // ldr r0, [sp, #0x1c]
    NARC_Delete();
    // str r1, [r5, r0]
    sub_02094C88(r5, *((u8*)(r5 + 0xf)));
    sub_02094EB4(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyRectToBgTilemapRect(*((u32*)r5), 2, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 2);
}




void sub_02094528(void) {
    NARC_New(0x14, *((u32*)(r0 + 4)));
    // str r0, [sp, #0x20]
    Heap_AllocAtEnd(*((u32*)(r6 + 4)), (1 << 0xc));
    // str r0, [sp, #0x24]
    Party_GetCount(*((u32*)(r6 + 0x00004640)));
    // str r0, [sp, #0x1c]
    // add r2, sp, #0x28
    sub_02094F14(r6, 0);
    // add r3, sp, #0x28
    // add r2, r5, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0x24]
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x28
    // add r1, r6, r1
    sub_02094C08(0x40, 0x000008D4, r4, *((u32*)(r5 + (0x66 << 2))));
    // add r0, sp, #0x28
    Sprite_SetOamMode(*((u32*)(r5 + (0x66 << 2))), 1);
    Sprite_SetOamMode(*((u32*)(r5 + (0x66 << 2))), 0);
    // ldr r0, [sp, #0x1c]
    // add r5, #0x34
    // str r1, [sp, #0x28]
    // add r0, sp, #0x28
    *((u16*)(r0 + 8)) = 0;
    *((u16*)(r0 + 0xa)) = 0;
    *((u16*)(r0 + 0xc)) = 0;
    *((u16*)(r0 + 0xe)) = 0;
    // add r5, r6, r0
    // ldr r0, [sp, #0x24]
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // add r1, r6, r1
    // str r0, [sp, #4]
    // add r0, sp, #0x28
    // str r7, [sp, #8]
    sub_02094C08((0x34 * (r4 + 1)), 0x000008D4, (r4 + 1), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x66 << 2))), 0);
    // add r5, #0x34
    // ldr r0, [sp, #0x24]
    Heap_Free();
    // ldr r0, [sp, #0x20]
    NARC_Delete();
    // str r1, [r6, r0]
    sub_02094C88(r6, *((u8*)(r6 + 0xf)));
    sub_02094EB4(r6);
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    CopyRectToBgTilemapRect(*((u32*)r6), 2, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r6), 2);
}




void sub_02094668(void) {
    // str r1, [sp, #0xc]
    NARC_New(0x14, *((u32*)(r0 + 4)));
    // str r0, [sp, #0x14]
    Heap_AllocAtEnd(*((u32*)(r4 + 4)), (1 << 0xc));
    // str r0, [sp, #0x18]
    // str r2, [r5, r0]
    // add r5, r5, r1
    // ldr r1, [sp, #0xc]
    // add r1, r4, r2
    // add r5, r4, r0
    // mov ip, r2
    // add r2, r5, r3
    // add r6, r1, r0
    // ldmia r2!, {r0, r1}
    // stmia r6!, {r0, r1}
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r3
    // mov r3, ip
    // add r1, r4, r5
    // add r3, r4, r3
    // sub r5, #0xec
    // ldr r2, [sp, #0xc]
    sub_02094C08(0x00000222, (0x83 << 2), (0x34 * (0x83 << 2)), *((u32*)((r7 * 0x34) + 0x000008D4)));
    // add r6, r4, r0
    // ldr r0, [sp, #0xc]
    // add r3, r6, r5
    // str r1, [sp, #0x10]
    // add r1, r4, r1
    // add r2, r1, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // add r3, r4, r3
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r6, r5
    // ldr r2, [sp, #0xc]
    // add r1, r4, r5
    // sub r5, #0xec
    sub_02094C08(0x00000222, (0x34 * (0x67 << 2)), *((u32*)(r3 + 0x000008D4)));
    // ldr r0, [sp, #0x18]
    Heap_Free();
    // ldr r0, [sp, #0x14]
    NARC_Delete();
    // str r1, [r4, r0]
}




void sub_02094758(void) {
    // add r7, #0xc
    // add r0, #0xc
    // add r0, #0xc
    // add r5, r5, r7
}




void sub_02094794(void) {
    // add r1, r5, r0
}




void sub_020947C0(void) {
    // add r1, r5, r6
    // add r1, r5, r6
    // mvn r1, r1
    // add r7, r3, r2
    // add r2, #0xc
    // mvn r3, r3
    // mvn r0, r0
    // add r2, #0xc
}




void sub_02094860(void) {
    sub_02094894();
    // add r1, r5, r0
    Sprite_GetMatrixPtr(*((u32*)(*((u8*)(r5 + 0xd)) + 0x000007E8)), *((u8*)(r5 + 0xd)));
    Sprite_SetMatrix(*((u32*)(r5 + (0x23 << 6))), r0);
}




void sub_02094894(void) {
    // add r1, r0, r2
    Sprite_GetDrawFlag(*((u32*)(r1 + 0x000007E8)), (0x34 * r1));
}




void sub_020948C4(void) {
    // str r0, [r5, r1]
    // str r6, [r5, r0]
    // add r0, #0x1c
    // str r4, [r5, r0]
    // add r7, r5, r0
    // add r1, #0x20
    // str r7, [r5, r1]
    // add r1, #0x20
    // add r7, r5, r0
    // str r7, [r5, r1]
    GF_AssertFail(0x000007E8, 0x00004680);
    Sprite_GetMatrixPtr(*((u32*)(r7 + (0x34 * r6))));
    // add r2, r5, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x23 << 6))), 0x2e, r0);
    // sub r0, #0x1c
    Sprite_SetDrawPriority(*((u32*)(*((u32*)(r5 + 0x000046A0)) + (0x34 * *((u32*)(r5 + 0x000046A0))))), 3, *((u32*)(r5 + 0x000046A0)));
    // sub r0, #0x1c
    Sprite_GetMatrixPtr(*((u32*)(*((u32*)(r5 + 0x000046A0)) + (0x34 * *((u32*)(r5 + 0x000046A0))))), *((u32*)(r5 + 0x000046A0)), *((u32*)(r5 + 0x000046A0)));
    // str r2, [r4, r0]
    // add r4, r4, r1
    NARC_New(0x14, *((u32*)(r5 + 4)), 0, (0 + 1));
    Heap_AllocAtEnd(*((u32*)(r5 + 4)), (1 << 0xc));
    // str r7, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0x1c
    // add r0, r0, r1
    // add r1, r5, r1
    sub_02094C08((*((u32*)(r5 + 0x000046A0)) + 4), (0x000046A0 >> 3), 0, *((u32*)(r5 + (0x7b << 4))));
    Sprite_SetMatrix(*((u32*)(r5 + (0x7b << 4))), r6);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x7b << 4))), 1);
    Heap_Free(r7);
    NARC_Delete(r4);
    // str r1, [r5, r0]
}




void sub_020949F4(void) {
    // add r0, sp, #4
    // add r1, sp, #0
    System_GetTouchHeldCoords(*((u32*)(r0 + 0x00004680)));
    // ldr r0, [sp, #4]
    // add r5, sp, #0x14
    // str r0, [sp, #0x14]
    // ldr r0, [sp]
    // add r3, sp, #8
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #0xc]
    // sub r0, r1, r0
    // str r0, [sp, #0xc]
    // sub r0, #0x1c
    Sprite_SetMatrix(*((u32*)(*((u32*)(r4 + 0x000046A0)) + (0x34 * *((u32*)(r4 + 0x000046A0))))), r3, r3, *((u32*)(r4 + 0x000046A0)));
    // add r1, sp, #0x14
    Sprite_SetMatrix(*((u32*)(r4 + (0x23 << 6))));
    // ldr r1, [sp, #4]
    // str r1, [r4, r0]
    // ldr r1, [sp]
    // str r1, [r4, r0]
}




void sub_02094A70(void) {
    sub_02093CE4(*((u32*)(r0 + 0x00004680)));
    sub_02094A90(r4, r0);
}




void sub_02094A90(void) {
    // sub r0, #0x14
    // add r5, r4, r0
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // sub r2, #0x18
    // str r0, [r3]
    // add r0, #0x14
    // add r2, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x14
    // add r2, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    sub_02095D40(*((u32*)(r0 + 0x000046B8)), 3, ((*((u32*)(r0 + ((*((u32*)(r0 + ((*((u32*)(r0 + 0x0000469C)) << 0x18) >> 0x18))) << 0x18) >> 0x18))) << 0x18) >> 0x18));
    // add r3, sp, #0
    // add r5, r4, r2
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, #0x14
    // add r0, #0x30
    sub_02095D40(*((u32*)(r4 + 0x00004688)), 3, ((*((u32*)(r4 + (0x00004688 - 4))) << 0x18) >> 0x18));
    // add r0, #0x30
    sub_02095D40(*((u32*)(r4 + r2)), 2, ((*((u32*)(r4 + (r2 - 4))) << 0x18) >> 0x18));
    // sub r0, #0x1c
    // sub r1, #0x18
    // add r1, r4, r1
    Sprite_SetMatrix(*((u32*)(*((u32*)(r4 + 0x000046A0)) + (0x34 * *((u32*)(r4 + 0x000046A0))))), 0x000046A0, *((u32*)(r4 + 0x000046A0)), *((u32*)(r4 + 0x000046A0)));
    // sub r0, #0x1c
    Sprite_SetDrawPriority(*((u32*)(*((u32*)(r4 + 0x000046A0)) + (0x34 * *((u32*)(r4 + 0x000046A0))))), 6, *((u32*)(r4 + 0x000046A0)));
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r4 + (0x23 << 6))));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0x23 << 6))), 0x2d);
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r3, [r4, r2]
    // add r2, #8
    // str r1, [r4, r2]
    // add r2, #0xc
    // str r1, [r4, r2]
    // add r2, #0x10
    // str r1, [r4, r2]
    // add r2, #0x14
    // str r1, [r4, r2]
    // add r2, #0x18
    // str r1, [r4, r2]
    // add r2, #0x20
    // str r1, [r4, r2]
    // add r0, #0x1c
    // str r1, [r4, r0]
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x7b << 4))), 0, 0x00004680, (0 - 1));
}




void sub_02094C08(void) {
    // add r4, r1, r0
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // add r1, sp, #0
    // ldr r0, [sp]
    // add r1, #0xc
    // ldr r1, [sp, #0x20]
    // add r0, r1, r0
    // str r0, [r4]
    // add r0, #8
}




void sub_02094C6C(void) {
}




void sub_02094C88(void) {
    NewMsgDataFromNarc(1, 0x1b, 0x0000012A, *((u32*)(r0 + 4)));
    NewString_ReadMsgData(1);
    DestroyMsgData(r6);
    String_New(0x40, *((u32*)(r5 + 4)));
    // add r3, #0x10
    // blx r3
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00004650, 0, r6, *((u32*)(r5 + 0x0000463C)));
    FontID_String_GetCenterAlignmentX(0, r4, 0, 0x60);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00004650, 0, r4, r0);
    // add r0, r5, r0
    CopyWindowToVram(0x00004650);
    String_Delete(r4);
}




void sub_02094D1C(void) {
    NewMsgDataFromNarc(1, 0x1b, 0x0000012A, *((u32*)(r0 + 4)));
    NewString_ReadMsgData(0);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00004670, 0);
    // add r0, r5, r0
    GetWindowWidth(0x00004670);
    FontID_String_GetCenterAlignmentX(4, r4, 0, (r0 << 3));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00004670, 4, r4, r0);
    // add r0, r5, r0
    CopyWindowToVram(0x00004670);
    String_Delete(r4);
    DestroyMsgData(r6);
}




void sub_02094D9C(void) {
    sub_02094DF8();
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    // str r0, [sp]
    // str r4, [sp, #4]
    GfGfxLoader_GXLoadPal(0x97, 0, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x97, 2, r5, 2);
    // str r1, [sp]
    BG_FillCharDataRange(r5, 0, 0, 1);
}




void sub_02094DF8(void) {
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
}




void sub_02094EB4(void) {
    // add r0, r0, r4
    // add r0, r0, r4
    // add r1, r5, r0
    // add r4, #0xc
}




void sub_02094F14(void) {
    Party_GetMonByIndex(*((u32*)(r0 + 0x00004640)), 0x00004640);
    // mov r1, #MON_DATA_SPECIES
    GetMonData(0);
    // str r0, [r4]
    // mov r1, #MON_DATA_IS_EGG
    GetMonData(r5, 0);
    *((u16*)(r4 + 8)) = r0;
    // mov r1, #MON_DATA_FORM
    GetMonData(r5, 0);
    *((u16*)(r4 + 0xa)) = r0;
    // mov r1, #MON_DATA_HELD_ITEM
    GetMonData(r5, 0);
    *((u16*)(r4 + 0xc)) = r0;
    *((u16*)(r4 + 0xe)) = 0;
}




void sub_02094F5C(void) {
    // add r0, r5, r7
    // add r1, #0x44
    // add r2, r0, r4
    // str r1, [sp, #4]
    // str r1, [sp]
    Sprite_SetDrawFlag(*((u32*)(*((u32*)(r0 + 0x0000088C)) + (*((u32*)(r0 + 0x0000088C)) * 0xc))), 0, *((u32*)(r0 + 0x0000088C)));
    // mvn r1, r1
    // add r2, r2, r4
    *((u32*)(*((u32*)(r5 + (0x8d << 4))) + 4)) = 0;
    *((u8*)(r5 + 0xe)) = (*((u8*)(r5 + 0xe)) - 1);
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // add r1, r5, r1
    Sprite_SetOamMode(*((u32*)((0x34 * (0x8d << 4)) + (0x66 << 2))), 0, *((u8*)(r5 + 0xf)));
    // add r1, r5, r1
    // sub r0, #0xe8
    Sprite_GetMatrixPtr(*((u32*)((0x34 * r6) + r0)), (0x34 * r6));
    Sprite_SetMatrix(*((u32*)(r5 + 0x000008C4)), r0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x000008C4)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x000008C4)), 0x32);
    // add r0, r5, r7
    // str r1, [r0, r2]
    // add r0, r5, r0
    // sub r2, #0xa8
    Sprite_SetDrawFlag(*((u32*)((0x34 * r6) + (0x89 << 4))), 0, (0x89 << 4));
    // add r0, r1, r0
    *((u32*)((r6 << 3) + 4)) = 0;
}




void sub_0209501C(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r0), 0, 0x000003D2, 0xb);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)r4), 0x00004660, 3, 2);
    NewMsgDataFromNarc(1, 0x1b, 0x0000012A, *((u32*)(r4 + 4)));
    NewString_ReadMsgData(r5);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00004660, 0xf);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r0
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00004660, r6, r5, 0);
    String_Delete(r5);
    DestroyMsgData(r7);
    // add r0, r4, r0
    CopyWindowToVram(0x00004660);
    GfGfx_EngineATogglePlanes(8, 1);
}




void sub_020950C0(void) {
}




void sub_020950D4(void) {
    // add r0, r4, r0
    GetWindowBgConfig(0x00004660);
    // add r0, r4, r0
    RemoveWindow(0x00004660);
}




void sub_020950F8(void) {
}




void sub_0209511C(void) {
    // str r3, [r7, r6]
    // add r7, r7, r6
    *((u32*)(*((u32*)(r0 + 0x000046B4)) + 4)) = *((u32*)(r0 + 0x00000888));
    // add r5, #0x10
    // add r6, #8
}




void sub_0209515C(void) {
    Sprite_Delete(*((u32*)(r0 + (0x66 << 2))));
    // add r4, #0x34
    Sprite_Delete(*((u32*)(r5 + 0x000007E8)));
    // add r4, #0x34
    Sprite_Delete(*((u32*)(*((u32*)(r5 + (0x8d << 4))) + 0)));
    // add r4, #0xc
    Sprite_Delete(*((u32*)(r5 + 0x000008B4)));
    Sprite_Delete(*((u32*)(r5 + 0x000008BC)));
    Sprite_Delete(*((u32*)(r5 + 0x000008B8)));
    Sprite_Delete(*((u32*)(r5 + 0x000008C4)));
    Sprite_Delete(*((u32*)(r5 + (0x23 << 6))));
    // sub r0, r0, r1
    Sprite_Delete(*((u32*)(r5 + 0x000008C8)), *((u8*)(r5 + 0xd)));
}




void sub_02095238(void) {
    sub_02095DD8(*((u32*)(r0 + 0x000046B8)));
    sub_02095DE8(*((u32*)(r4 + 0x000046B8)));
    // str r1, [sp, #0x14]
    // add r1, r7, r7
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02095268: ; jump table
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    _s32_div_f((1 << 0x10), 6);
    // add r0, #0x14
    // str r0, [sp, #0xc]
    _s32_div_f(r6, 6);
    // add r0, #0x28
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r6, sp, #0xc
    // ldmia r6!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // sub r2, #0x38
    // sub r0, #0x1c
    Sprite_SetMatrix(*((u32*)(*((u32*)(r4 + 0x000046BC)) + (0x34 * *((u32*)(r4 + 0x000046BC))))), r3, *((u32*)(r4 + 0x000046BC)));
    // str r1, [r4, r0]
    // str r5, [r4, r0]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, sp, #0xc
    Sprite_SetMatrix(*((u32*)(r4 + (0x23 << 6))), 0xd4);
    sub_020956B8(r4);
}




void sub_02095354(void) {
    sub_02095DD8(*((u32*)(r0 + 0x000046B8)));
    sub_02095DE8(*((u32*)(r4 + 0x000046B8)));
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02095380: ; jump table
    sub_02094794(r4, r0);
    sub_020948C4(r4, 1, r7);
    // add r6, sp, #0x18
    // str r0, [r6]
    *((u32*)(r6 + 4)) = r5;
    *((u32*)(r6 + 8)) = r5;
    // add r3, r3, r1
    // str r0, [r4, r2]
    // str r3, [r4, r0]
    // add r3, sp, #0xc
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #0x10]
    // sub r0, r1, r0
    // str r0, [sp, #0x10]
    // sub r2, #0x10
    // add r0, #0xc
    Sprite_SetMatrix(*((u32*)(*((u32*)(r4 + 0x00004694)) + (0x34 * *((u32*)(r4 + 0x00004694))))), ((((r5 << 0x18) >> 0x18) + 1) * 0x28), *((u32*)(r4 + 0x00004694)), ((((r5 << 0x18) >> 0x18) + 1) * 0x28));
    // add r1, sp, #0x18
    Sprite_SetMatrix(*((u32*)(r4 + (0x23 << 6))));
    sub_02095D40(*((u32*)(r4 + 0x000046B8)), 4, ((r5 << 0x18) >> 0x18));
    // add r1, #8
    // str r5, [r4, r0]
    sub_02094860(r4, r7, *((u8*)(r4 + 0xd)));
    sub_020948C4(r4, 2, r7);
    // sub r0, #0x1c
    Sprite_GetMatrixPtr(*((u32*)(*((u32*)(r4 + 0x000046A0)) + (0x34 * *((u32*)(r4 + 0x000046A0))))), *((u32*)(r4 + 0x000046A0)), *((u32*)(r4 + 0x000046A0)));
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // sub r0, #0x1c
    Sprite_SetMatrix(*((u32*)(*((u32*)(r4 + 0x000046A0)) + (0x34 * *((u32*)(r4 + 0x000046A0))))), r3, r3, *((u32*)(r4 + 0x000046A0)));
    // str r5, [r4, r0]
    *((u32*)(r4 + 0x14)) = 4;
    sub_0209569C(r4);
    sub_02094A70(r4);
}




void sub_020954CC(void) {
    sub_02095DD8(*((u32*)(r0 + 0x000046B8)));
    PlaySE(0x000005DC);
    sub_02094A90(r5, r4);
    sub_0209569C(r5);
    sub_02095D40(*((u32*)(r5 + 0x000046B8)), 1, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r5 + (0x23 << 6))));
    PlaySE(0x000005DC);
}




void sub_02095540(void) {
    *((u8*)(r0 + 0xf)) = (*((u8*)(r0 + 0x10)) - 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r0 + 0x000008BC)), 1);
    sub_020943EC(r5);
    PlaySE(0x000005DC);
    sub_02095DD8(*((u32*)(r5 + 0x000046B8)));
    sub_02095DE8(*((u32*)(r5 + 0x000046B8)));
    _s32_div_f(6);
    sub_02095D40(*((u32*)(r5 + 0x000046B8)), 6, ((r1 << 0x18) >> 0x18));
    // add r0, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r5 + (0x23 << 6))));
    sub_02095DD8(*((u32*)(r5 + r0)));
    sub_02095DE8(*((u32*)(r5 + 0x000046B8)));
    sub_02095D40(*((u32*)(r5 + 0x000046B8)), 2, r0);
}




void sub_020955EC(void) {
    *((u8*)(r0 + 0xf)) = (*((u8*)(r0 + 0xf)) + 1);
    *((u8*)(r0 + 0xf)) = 0;
    Sprite_SetAnimCtrlSeq(*((u32*)(r0 + 0x000008B8)), 3);
    sub_020943EC(r5);
    PlaySE(0x000005DC);
    sub_02095DD8(*((u32*)(r5 + 0x000046B8)));
    sub_02095DE8(*((u32*)(r5 + 0x000046B8)));
    _s32_div_f(6);
    sub_02095D40(*((u32*)(r5 + 0x000046B8)), 6, ((r1 << 0x18) >> 0x18));
    // add r0, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r5 + (0x23 << 6))));
    sub_02095DD8(*((u32*)(r5 + r0)));
    sub_02095DE8(*((u32*)(r5 + 0x000046B8)));
    sub_02095D40(*((u32*)(r5 + 0x000046B8)), 2, r0);
}




void sub_0209569C(void) {
    Sprite_SetAnimCtrlSeq(*((u32*)(r0 + 0x000008B4)), 5);
    PlaySE(0x000005DC);
}




void sub_020956B8(void) {
    // sub r0, #0x20
    // mvn r6, r6
    sub_02095DD8(*((u32*)(r0 + 0x000046D8)), *((u32*)(r0 + 0x000046D8)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _020956E2: ; jump table
    sub_02095DE8(*((u32*)(r4 + 0x000046B8)));
    sub_020947C0(r4, r0);
    sub_02095DE8(*((u32*)(r4 + 0x000046B8)));
    sub_02094894(r4, r0);
    // add r1, r4, r0
    // blx r3
    // str r5, [r4, r0]
    // str r6, [r4, r0]
}




void sub_02095780(void) {
    // sub r2, #0x1d
}




void sub_02095794(void) {
}



