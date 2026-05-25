/* Decompiled from asm/overlay_28.s */
#include "global.h"

void ov28_0225D520(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    Heap_Create(3, 8, (3 << 0xf));
    // strh r1, [r0]
    CreateSysTaskAndEnvironment(ov28_0225DC2C, (0xd << 6), 0xa, 8);
    SysTask_GetData();
    *((u32*)(r0 + 0x10)) = r5;
    // ldr r0, [sp]
    *((u32*)(r0 + 0x14)) = r7;
    *((u32*)(r0 + 0x18)) = r0;
    // ldr r0, [sp, #4]
    *((u32*)(r0 + 0x1c)) = r0;
    *((u32*)(r0 + 0x20)) = r6;
    // str r1, [r4, r0]
    ov01_021E7F54(*((u32*)(r0 + 0x18)), 0);
    // str r0, [r4, r1]
    // add r1, sp, #8
    FieldSystem_GetFacingObject(*((u32*)(r4 + 0x18)), (0xcd << 2));
    // ldr r0, [sp, #8]
    MapObject_GetScriptID();
    ov01_021F6BD0();
    // ldr r0, [sp, #8]
    MapObject_GetSpriteID();
    ov01_021F6BB0();
    // str r1, [r4, r0]
    NARC_New(0xfd, 8);
    ov28_0225D628();
    ov28_0225D650(r5);
    ov28_0225D6FC(r4, r7);
    ov28_0225D764(r4);
    ov28_0225D7E0(r4);
    ov28_0225D898(r4, r7);
    NARC_Delete(r7);
}




void ov28_0225D5EC(void) {
}




u8 ov28_0225D624(void) {
}




void ov28_0225D628(void) {
    GX_SetBankForSubBG(0x80);
    GX_SetBankForSubOBJ((1 << 8));
    // and r1, r0
    // str r0, [r2]
}




void ov28_0225D650(void) {
    GXS_SetGraphicsMode(0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BG_ClearCharDataRange(4, 0x20, 0, 8);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 6, r3, 0);
}




void ov28_0225D6E0(void) {
}




void ov28_0225D6FC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp]
    // str r0, [sp, #4]
}




void ov28_0225D764(void) {
    // str r0, [r5, r1]
    // str r0, [r5, r1]
    // str r0, [r5, r1]
    // str r0, [r5, r1]
    // str r0, [r5, r1]
}




void ov28_0225D7C4(void) {
}




void ov28_0225D7E0(void) {
    FontID_Alloc(4, 8);
    // str r0, [sp, #0x10]
    // add r4, r7, r0
    AddWindow(*((u32*)(r7 + 0x10)), r4, ov28_0225EB52);
    FillWindowPixelBuffer(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 4, *((u32*)(r5 + (0x1a << 4))), 0);
    CopyWindowPixelsToVram_TextMode(r4);
    // ldr r0, [sp, #0x10]
    // add r6, #8
    // add r4, #0x10
    // str r0, [sp, #0x10]
    // add r2, r7, r0
    // add r0, r2, r0
    ScheduleWindowCopyToVram((*((u8*)(ov28_0225EB7C + *((u32*)(r7 + (0xcd << 2))))) << 4), *((u32*)(r7 + (0xcd << 2))));
    // add r0, r7, r0
    ScheduleWindowCopyToVram((0x7d << 2));
}




void ov28_0225D878(void) {
    // add r5, r0, r1
    // add r5, #0x10
}




void ov28_0225D898(void) {
    // add r1, #0x28
    // add r0, #0x28
}




void ov28_0225D8D0(void) {
}




void ov28_0225D8EC(void) {
    // str r0, [r5, r6]
}




void ov28_0225D910(void) {
}




void ov28_0225D92C(void) {
    // ldr r0, [sp, #0x30]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r5]
    // ldr r0, [sp, #0x34]
    // ldr r2, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x3c]
    // ldr r2, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov28_0225D9BC(void) {
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




void ov28_0225DA1C(void) {
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // add r3, r3, r2
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // add r2, sp, #0
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // str r2, [sp, #0x2c]
    // add r4, r0, r2
    // add r0, sp, #0
    // str r0, [r4, r6]
}




void ov28_0225DA74(void) {
    NARC_New(0xe, 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // sub r0, #0x92
    // sub r1, #0xa2
    // add r0, r5, r0
    // add r1, r5, r1
    ov28_0225D92C(0x000001F2, 0x000001F2, r0, 0x46);
    NARC_Delete(r4);
    // add r0, r5, r1
    // sub r1, #0x10
    // add r1, r5, r1
    // add r2, sp, #0x20
    ov28_0225D9BC((0x16 << 4), 1);
    // add r2, sp, #0x20
    ov28_0225DA1C(r5, 0, ov28_0225EA9A);
    // add r2, sp, #0x20
    ov28_0225DA1C(r5, 1, ov28_0225EA9E);
    // add r2, sp, #0x20
    ov28_0225DA1C(r5, 2, ov28_0225EAA2);
    // add r2, sp, #0x20
    ov28_0225DA1C(r5, 3, ov28_0225EAA6);
    FieldSystem_GetPlayerAvatar(*((u32*)(r5 + 0x18)));
    PlayerAvatar_CheckRunningShoesLock();
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x61 << 2))), 3);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x62 << 2))), 0xb);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x61 << 2))), 4);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x62 << 2))), 7);
}




void ov28_0225DB54(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov28_0225DB8C(void) {
    // add r1, sp, #0x20
    // strb r0, [r1]
    *((u8*)(r1 + 1)) = 0;
    *((u8*)(r1 + 2)) = 0;
    *((u8*)(r1 + 3)) = 0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // sub r0, #0x83
    // sub r1, #0xa3
    // add r0, r5, r0
    // add r1, r5, r1
    ov28_0225D92C(0x000001F3, 0x000001F3, r1, 4);
    // add r0, r5, r1
    // sub r1, #0x20
    // add r1, r5, r1
    // add r2, sp, #0x24
    ov28_0225D9BC((0x17 << 4), 2);
    // add r6, sp, #0x24
    // add r7, sp, #0x20
    ov28_0225DA1C(r5, (0 + 4), r6, r7);
}




void ov28_0225DBFC(void) {
    // ldr r0, [r5, r6]
    // ldr r0, [r7, r0]
    // ldr r0, [r7, r0]
}




void ov28_0225DC2C(void) {
    // add r1, #0xd2
    FieldSystem_IsPlayerMovementAllowed(*((u32*)(r1 + 0x18)), ((*((u8*)*((u32*)(r1 + 0x18))) << 0x18) >> 0x1f));
    // add r0, #0xd2
    // add r2, #0xd2
    // strb r1, [r2]
    TouchscreenHitbox_FindHitboxAtTouchNew(ov28_0225EA88, (*((u8*)*((u32*)(r4 + 0x18))) & ~(0x80)), *((u32*)(r4 + 0x18)));
    // mvn r1, r1
    // str r1, [r4, r0]
    FieldSystem_TaskIsRunning(*((u32*)(r4 + 0x18)), 1);
    TouchscreenHitbox_FindHitboxAtTouchHeld(ov28_0225EA88);
    // mvn r1, r1
    // mvn r1, r1
    ov28_0225E31C(r4, 0);
    ov28_0225E578(r4, 0);
    // and r0, r1
    // strh r0, [r4, r2]
    // add r0, #0xec
    // strh r1, [r4, r0]
    // add r0, #0xee
    // strh r1, [r4, r0]
    // add r2, #0xf0
    // str r1, [r4, r2]
    StopSE(0x0000093D, 0, (0x93 << 2));
    ov28_0225E7D4(r4);
    ov28_0225E1A4(r4);
    ov28_0225E31C(r4, 1);
    ov28_0225E578(r4, 1);
    ov28_0225E730(r4);
    ov28_0225E3BC(r4);
    ov28_0225E43C(r4);
    ov28_0225E900(r4);
    ov28_0225E938(r4);
    ov28_0225E9E0(r4);
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + 0x24)));
}




void DowsingMchn_GetHiddenItemLocs(void) {
}




void DowsingMchn_FreeHiddenItemLocs(void) {
}




void ov28_0225DD58(void) {
    DowsingMchn_GetHiddenItemLocs();
    // str r4, [r5, r0]
    // add r6, r0, r4
    // ldrsh r0, [r6, r0]
    // str r0, [sp, #4]
    abs(0);
    // ldrsh r0, [r6, r0]
    abs(2);
    // add r0, r7, r0
    // ldr r1, [sp, #4]
    // strh r1, [r5, r0]
    // add r1, r0, r4
    // ldrsh r1, [r1, r0]
    // strh r1, [r5, r0]
    // str r1, [r5, r0]
    // ldrsh r0, [r6, r0]
    // str r0, [sp]
    abs(0, 1);
    // str r0, [sp, #8]
    // ldrsh r0, [r6, r0]
    abs(2);
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // ldr r1, [sp]
    // strh r1, [r5, r0]
    // add r1, r0, r4
    // ldrsh r1, [r1, r0]
    // strh r1, [r5, r0]
    DowsingMchn_FreeHiddenItemLocs(r5);
}




void ov28_0225DE04(void) {
    // asr r1, r0, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // add r0, r1, r0
    // str r0, [r5]
    // asr r1, r0, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // add r0, r1, r0
}




void ov28_0225DE64(void) {
    // sub r1, #0x64
    // sub r2, #0x54
}




void ov28_0225DE78(void) {
    // bx r3
    // nop
    // _0225DE84: .word FX_Atan2Idx
}




void ov28_0225DE88(void) {
    // mul r0, r1
}




void ov28_0225DE98(void) {
}




void ov28_0225DEB0(void) {
    ov28_0225DE64(*((u32*)(r0 + (0x85 << 2))), *((u32*)(r0 + ((0x85 << 2) + 4))));
    ov28_0225DE88();
    // sub r2, #0xf4
    // add r3, r0, r2
    // str r0, [r4, r1]
    // add r2, #0xc
    // str r3, [r4, r2]
    // add r3, #0x78
    // add r2, #0x18
    // str r3, [r4, r2]
    // add r0, #0xd8
    // add r2, #0x24
    // str r0, [r4, r2]
    // add r0, #0x2c
    // add r1, #0x2c
    // and r2, r0
    // strh r0, [r4, r1]
}




void ov28_0225DF04(void) {
    // add r1, r2, r1
    // add r1, r3, r1
}




void ov28_0225DF14(void) {
    ov28_0225DE64(*((u32*)(r0 + (0x85 << 2))), *((u32*)(r0 + ((0x85 << 2) + 4))));
    ov28_0225DE88();
    // ldrsh r0, [r5, r1]
    // ldrsh r1, [r5, r1]
    ov28_0225DE78(((0x82 << 2) + 2));
    ov28_0225DE88();
    // add r1, r4, r1
    // add r1, r0, r1
    // add r3, #0x1e
    // str r2, [r5, r1]
    // add r6, #0x78
    // add r2, r3, r2
    // add r2, r6, r2
    // add r2, #0xc
    // str r3, [r5, r2]
    // sub r3, #0x24
    // sub r6, #0x87
    // add r2, r3, r2
    // add r2, r6, r2
    // add r2, #0x18
    // add r4, #0x5a
    // str r3, [r5, r2]
    // add r0, #0x5a
    // add r2, r4, r2
    // add r0, r0, r2
    // add r0, #0x24
    // str r2, [r5, r0]
    // add r0, #0x2c
    // add r1, #0x2c
    // and r2, r0
    // strh r0, [r5, r1]
}




void ov28_0225DFA4(void) {
}




void ov28_0225DFBC(void) {
    ov28_0225DE64(*((u32*)(r0 + (0x85 << 2))), *((u32*)(r0 + ((0x85 << 2) + 4))));
    ov28_0225DE88();
    // ldrsh r0, [r5, r1]
    // ldrsh r1, [r5, r1]
    ov28_0225DE78(((0x82 << 2) + 2));
    ov28_0225DE88();
    // add r0, r6, r0
    _u32_div_f((r4 << 1), 3);
    // str r0, [r5, r1]
    // add r0, #0x1e
    // add r1, #0x87
    // add r0, r1, r0
    _u32_div_f((r4 << 1), 3);
    // str r0, [r5, r1]
    // sub r0, #0x24
    // sub r1, #0x78
    // add r0, r1, r0
    _u32_div_f((r4 << 1), 3);
    // str r0, [r5, r1]
    // add r4, #0x5a
    // add r6, #0x3c
    // add r0, r6, r0
    _u32_div_f((r4 << 1), 3);
    // str r0, [r5, r1]
    // add r0, #8
    // add r1, #8
    // and r2, r0
    // strh r0, [r5, r1]
}




void ov28_0225E054(void) {
    // add r1, r2, r1
}




void ov28_0225E060(void) {
    ov28_0225DE64(*((u32*)(r0 + (0x85 << 2))), *((u32*)(r0 + ((0x85 << 2) + 4))));
    ov28_0225DE88();
    // ldrsh r0, [r5, r1]
    // ldrsh r1, [r5, r1]
    ov28_0225DE78(((0x82 << 2) + 2));
    ov28_0225DE88();
    // add r0, r4, r6
    _u32_div_f(3);
    // str r0, [r5, r1]
    // add r0, #0x3c
    // add r0, r0, r4
    // add r0, #0xc
    // str r2, [r5, r0]
    // sub r0, #0x48
    // add r0, r0, r4
    // add r0, #0x18
    // add r4, #0x5a
    // add r6, #0x2d
    // str r2, [r5, r0]
    // add r0, r4, r6
    // add r0, #0x24
    // str r2, [r5, r0]
    // add r0, #0x2c
    // add r1, #0x2c
    // and r2, r0
    // strh r0, [r5, r1]
}




void ov28_0225E0DC(void) {
}




void ov28_0225E0F4(void) {
    // ldrsh r0, [r5, r1]
    // ldrsh r0, [r5, r0]
    // add r6, #0x54
    // add r0, #0xc
    // add r1, #0x10
    // add r4, #0x64
    // sub r0, r6, r0
    // sub r1, r4, r1
    ov28_0225DE78(*((u32*)(r0 + (0x82 << 2))), *((u32*)(r0 + (0x82 << 2))));
    ov28_0225DE88();
    // str r0, [r5, r1]
    // sub r0, #0xc
    // sub r1, #8
    // add r2, #0xa
    // sub r0, r2, r0
    // add r2, #0xc
    // sub r1, r2, r1
    ov28_0225DE78(*((u32*)(r5 + (0x22 << 4))), *((u32*)(r5 + (0x22 << 4))), r4);
    ov28_0225DE88();
    // str r0, [r5, r1]
    // sub r0, #0x18
    // sub r1, #0x14
    // sub r2, #0xc
    // sub r0, r2, r0
    // sub r1, r2, r1
    ov28_0225DE78(*((u32*)(r5 + (0x8b << 2))), *((u32*)(r5 + (0x8b << 2))), (r4 - 4));
    ov28_0225DE88();
    // str r0, [r5, r1]
    // sub r0, #0x24
    // sub r1, #0x20
    // sub r6, #8
    // sub r4, #8
    // sub r0, r6, r0
    // sub r1, r4, r1
    ov28_0225DE78(*((u32*)(r5 + (0x8e << 2))), *((u32*)(r5 + (0x8e << 2))));
    ov28_0225DE88();
    // str r0, [r5, r1]
    // add r0, #8
    // add r1, #8
    // and r2, r0
    // strh r0, [r5, r1]
}




void ov28_0225E1A4(void) {
    ov28_0225DD58();
    ov28_0225DEB0(r6, *((u32*)(r6 + (0x83 << 2))));
    // str r1, [r6, r0]
    // ldrsh r0, [r6, r0]
    abs(((0x21 << 4) - 4), 0);
    // asr r4, r0, #0x10
    // ldrsh r0, [r6, r0]
    abs(0x0000020A);
    // asr r0, r0, #0x10
    ov28_0225E0F4(r6);
    // str r1, [r6, r0]
    ov28_0225E060(r6, 4);
    // str r1, [r6, r0]
    ov28_0225DFBC(r6, 3);
    // str r1, [r6, r0]
    ov28_0225DF14(r6, 2);
    // str r1, [r6, r0]
    // str r7, [r1, r3]
    // str r7, [r1, r5]
    // add r1, #0xc
    // strh r0, [r6, r1]
    // and r2, r0
    // strh r0, [r6, r1]
    // sub r1, #0x30
    // str r0, [sp]
    // add r0, r6, r1
    // str r0, [sp, #4]
    _u32_div_f(*((u32*)(r6 + (0x22 << 4))), (0x5a << 2), *((u16*)(r6 + (0x93 << 2))), ((0x22 << 4) - 4));
    // str r1, [r4, r0]
    _u32_div_f(*((u32*)(r4 + ((0x22 << 4) - 4))), (0x5a << 2));
    // str r1, [r4, r0]
    // sub r0, r7, r5
    abs(((0x87 << 2) + 4));
    // sub r0, #0xb4
    // add r1, r1, r0
    // str r1, [r4, r0]
    // sub r0, #0xb8
    // add r1, r1, r0
    // str r1, [r4, r0]
    // ldr r0, [sp, #4]
    // blx r1
    // ldr r0, [sp, #4]
    // add r4, #0xc
    // add r0, #0xc
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp]
}




void ov28_0225E31C(void) {
    // add r1, #0x3e
    // ldrsh r1, [r0, r1]
    // add r3, r1, r3
    // add r1, #0x3e
    // strh r3, [r0, r1]
    // add r1, #0x3e
    // ldrsh r1, [r0, r1]
    // add r2, #0x3e
    // strh r3, [r0, r2]
    // ldrsh r2, [r0, r1]
    // strh r2, [r0, r1]
}




void ov28_0225E374(void) {
    // add r1, #0x3e
    // ldrsh r1, [r5, r1]
    // add r0, #0x3e
    // strh r2, [r5, r0]
    // ldrsh r0, [r5, r0]
    _s32_div_f(0x0000024E, 0xa, *((u8*)(ov28_0225EA90 + (*((u32*)(r0 + (0x21 << 4))) << 1))));
    // and r0, r1
    // strh r0, [r4]
    // ldrsh r0, [r5, r0]
    _s32_div_f(0x0000024E, 0x14);
    // strh r0, [r6]
}




void ov28_0225E3BC(void) {
    // ldrsh r1, [r5, r1]
    Sprite_SetDrawFlag(*((u32*)(r0 + (0x19 << 4))), 0);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ov28_0225E374();
    // add r6, sp, #0
    Sprite_SetPalIndexRespectVramOffset(*((u32*)(r5 + (0x19 << 4))), (*((u16*)r6) + 1));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x19 << 4))), *((u16*)(r6 + 2)));
    Sprite_SetDrawFlag(*((u32*)(r5 + r7)), 1);
}




void ov28_0225E424(void) {
}




void ov28_0225E43C(void) {
    // add r3, r4, r3
    // and r1, r2
    // and r2, r3
    // strh r1, [r5, r0]
    // add r7, sp, #4
    // str r1, [r5, r0]
    ov28_0225DE04(r7, *((u32*)(r0 + (0x87 << 2))), (0xFFFF8000 >> 0x11), (((0xFFFF8000 >> 0x10) << 0x10) >> 0x10));
    Sprite_SetMatrix(*((u32*)(r4 + (0x19 << 4))), r7);
    ov28_0225E424(*((u32*)(r4 + (0x19 << 4))), *((u32*)(r5 + (0x87 << 2))));
    // add r5, #0xc
    // sub r0, #0x30
    // str r1, [sp]
    // add r7, r5, r0
    // sub r0, #8
    // str r1, [r4, r0]
    // add r0, sp, #4
    ov28_0225DE04((0x89 << 2), *((u32*)(r5 + (0x87 << 2))));
    // add r1, sp, #4
    Sprite_SetMatrix(*((u32*)(r6 + (0x19 << 4))));
    ov28_0225E424(*((u32*)(r6 + (0x19 << 4))), *((u32*)(r4 + (0x87 << 2))));
    // blx r1
    // ldr r0, [sp]
    // add r4, #0xc
    // add r7, #0xc
    // str r0, [sp]
}




void ov28_0225E51C(void) {
    // sub r0, #8
    // ldrsh r0, [r5, r0]
    // sub r0, r0, r1
    abs(((0x21 << 4) + 7), *((u32*)(r0 + (0x21 << 4))));
    // ldrsh r0, [r5, r0]
    // sub r0, r0, r4
    abs((0x0000020A + 7));
    // add r1, r6, r0
    // sub r1, r0, r1
}




void ov28_0225E578(void) {
    // str r1, [sp, #0x10]
    // asr r0, r0, #0x10
    // str r0, [sp, #0x30]
    // asr r0, r0, #0x10
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x24]
    // sub r0, r0, r7
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x34]
    // lsl r1, r5
    // tst r0, r1
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x30]
    // sub r0, r0, r5
    abs(*((u16*)1), 1);
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x18]
    abs();
    // ldr r1, [sp, #0x38]
    // add r0, r1, r0
    // ldr r2, [sp, #0x14]
    ov28_0225E51C(r6, ((r5 << 0x10) >> 0x10));
    // add r3, r4, r5
    // add r1, #0xa
    // strb r1, [r3, r0]
    // strb r2, [r3, r0]
    // strb r2, [r3, r0]
    // add r3, r4, r5
    // strb r1, [r3, r0]
    // strb r1, [r3, r0]
    // add r3, r4, r5
    // strb r1, [r3, r0]
    // strb r1, [r3, r0]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r6 + 0x10)), 6, 0x00001001, (((r5 + 3) << 0x18) >> 0x18));
    _s32_div_f(0xa);
    // ldr r0, [sp, #0x3c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r6 + 0x10)), 6, *((u16*)(ov28_0225EB32 + (r0 << 1))), (((r5 + 3) << 0x18) >> 0x18));
    // asr r5, r0, #0x10
    // ldr r0, [sp, #0x34]
    // add r4, #0xf
    // str r0, [sp, #0x34]
    // asr r7, r0, #0x10
    ScheduleBgTilemapBufferTransfer(*((u32*)(r6 + 0x10)), 6);
}




void ov28_0225E730(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ov28_0225E374();
    // add r0, sp, #0
    // add r0, r1, r0
    // sub r0, r1, r0
    // asr r4, r0, #0x10
    // add r1, #8
    // sub r2, #8
    // ldrsh r1, [r5, r2]
    // sub r0, r1, r0
    abs(((*((u32*)(r5 + ((0x21 << 4) + 4))) >> 3) - 3), ((*((u32*)(r5 + (0x21 << 4))) >> 3) + 7), (0x21 << 4));
    // ldrsh r0, [r5, r0]
    // sub r0, r0, r6
    abs((0x0000020A + 7));
    // add r1, r7, r0
    // sub r0, r0, r1
    // add r0, r4, r0
    // asr r4, r0, #0x10
    PlaySE_SetPitch(0x0000093D, r4);
    // strh r1, [r5, r0]
    // ldrsh r1, [r5, r0]
    // strh r4, [r5, r0]
}




void ov28_0225E7D4(void) {
    // add r0, sp, #4
    // add r1, sp, #0
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // str r0, [r4, r1]
    // ldr r2, [sp]
    // str r2, [r4, r0]
}




void ov28_0225E810(void) {
    // add r1, #0xd2
    FieldSystem_IsPlayerMovementAllowed(*((u32*)(r0 + 0x18)), ((*((u8*)*((u32*)(r0 + 0x18))) << 0x19) >> 0x1f));
    FieldSystem_GetPlayerAvatar(*((u32*)(r5 + 0x18)));
    PlayerAvatar_GetMapObject();
    MapObject_GetSpriteID();
    // sub r0, #0xbc
    sub_0205F330(r4);
    ov01_021E7F54((0xcd << 2));
    // add r1, sp, #0
    FieldSystem_GetFacingObject(*((u32*)(r5 + 0x18)));
    // ldr r0, [sp]
    MapObject_GetScriptID();
    ov01_021F6BD0();
    // ldr r0, [sp]
    MapObject_GetSpriteID();
    ov01_021F6BB0();
    // str r4, [r5, r1]
    // add r2, r5, r0
    // add r0, r2, r0
    ScheduleWindowCopyToVram((*((u8*)(ov28_0225EB7C + *((u32*)(r5 + (0xcd << 2))))) << 4), *((u32*)(r5 + (0xcd << 2))));
}




void ov28_0225E8B8(void) {
    // str r2, [sp]
    // ldr r1, [sp]
}




void ov28_0225E900(void) {
    sub_0203DF8C(*((u32*)(r0 + 0x18)));
    ov28_0225E810(r4);
    ov28_0225E8B8(_0225EA7C, *((u32*)(r4 + (6 << 6))), 5, 6);
    *((u32*)(gSystem + 0x5c)) = 1;
}




void ov28_0225E938(void) {
    PlayerAvatar_GetState(*((u32*)(*((u32*)(r0 + 0x18)) + 0x40)));
    ov28_0225EA58(r5);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x61 << 2))), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x62 << 2))), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x61 << 2))), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x62 << 2))), 1);
    TouchscreenHitbox_TouchNewIsIn(ov28_0225EA84);
    FieldSystem_GetPlayerAvatar(*((u32*)(r5 + 0x18)));
    PlayerAvatar_CheckRunningShoesLock();
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x61 << 2))), 4);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x62 << 2))), 7);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x61 << 2))), 3);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x62 << 2))), 0xb);
    // eor r1, r4
    PlayerAvatar_SetRunningShoesLock(r6, 1);
}




void ov28_0225E9E0(void) {
    ov28_0225EA58();
    // add r0, r4, r0
    ClearWindowTilemapAndScheduleTransfer((0x7d << 2));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0x63 << 2))), 8);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x63 << 2))), 0);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x7d << 2));
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x63 << 2))), 1);
    ov28_0225E8B8(ov28_0225EA80, *((u32*)(r4 + (0x63 << 2))), 8, 9);
    // add r0, #0xd0
    // strh r1, [r0]
    // add r0, r1, r0
    MenuInputStateMgr_SetState((0x43 << 2), 1);
}




void ov28_0225EA58(void) {
    // add r0, #0xd2
}



