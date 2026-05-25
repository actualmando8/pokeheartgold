/* Decompiled from asm/overlay_108.s */
#include "global.h"

BOOL SafariAreaCustomizer_Init(void) {
    OverlayManager_GetArgs();
    Heap_Create(3, 0x5f, (5 << 0x10));
    OverlayManager_CreateAndGetData(r4, 0x000184EC, 0x5f);
    MI_CpuFill8(0, 0x000184EC);
    // str r0, [r4]
    ov108_021E59E4(r4, r5);
    Sound_SetSceneAndPlayBGM(0x43, 0, 0);
}




BOOL SafariAreaCustomizer_Exit(void) {
    OverlayManager_GetData();
    ov108_021E5A48();
    MI_CpuFill8(r6, 0, 0x000184EC);
    OverlayManager_FreeData(r5);
    Heap_Destroy(r4);
}




BOOL SafariAreaCustomizer_Main(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E5992: ; jump table
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
}




void ov108_021E59E4(void) {
    Save_SafariZone_Get(*((u32*)r1));
    *((u32*)(r5 + 0x18)) = r0;
    // add r2, #0x1c
    SafariZone_CopyAreaSet(0, r5);
    Save_PlayerData_GetOptionsAddr(*((u32*)r4));
    Options_GetTextSpeed();
    // strb r0, [r5, r1]
    Options_GetFrame(r6, 0x000184DC);
    // strb r0, [r5, r1]
    MenuInputStateMgr_GetState(*((u32*)(r4 + 4)), 0x000184DD);
    *((u32*)(r5 + 0x10)) = r0;
    // str r1, [r5, r0]
    *((u32*)(r5 + 0x14)) = r4;
    SafariZone_GetObjectUnlockLevel(*((u32*)(r5 + 0x18)), 0);
    // strb r1, [r5, r0]
}




void ov108_021E5A48(void) {
    // add r2, #0x1c
    SafariZone_SetAreaSet(*((u32*)(r0 + 0x18)), 0, r0);
    Save_VarsFlags_Get(*((u32*)*((u32*)(r4 + 0x14))));
    ChangeFlag99D(*((u32*)(r4 + 0x000184E8)));
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)(r4 + 0x14)) + 4)), *((u32*)(r4 + 0x10)));
}




void ov108_021E5A78(void) {
}




void ov108_021E5A8C(void) {
}




void ov108_021E5AA0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E5AB6: ; jump table
}




void ov108_021E5AF0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E5B06: ; jump table
}




void ov108_021E5B48(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E5B5E: ; jump table
}




void ov108_021E5B98(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
}




void ov108_021E5BFC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov108_021E5C54(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    sub_0200FBF4(0, 0, 0x04001000);
    sub_0200FBF4(1, 0);
    sub_0200FBDC(0);
    sub_0200FBDC(1);
    sub_020210BC();
    sub_02021148(4);
    ov108_021E6C68();
    ov108_021E6D80(r4);
    ov108_021E6F74(r4);
    ov108_021E7080(r4);
    ov108_021E7224(r4);
    ov108_021E72CC(r4);
    ov108_021E733C(r4);
    ov108_021E7BFC();
    Main_SetVBlankIntrCB(ov108_021E6BA0, r4);
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
}




void ov108_021E5D0C(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    ov108_021E7510(r4);
    ov108_021E730C(r4);
    ov108_021E72A4(r4);
    ov108_021E71EC(r4);
    ov108_021E7014(r4);
    ov108_021E6F58(r4);
    ov108_021E6D24(r4);
    sub_02021238();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    GfGfx_DisableEngineAPlanes(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    GfGfx_DisableEngineBPlanes();
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
}




void ov108_021E5D90(void) {
}




void ov108_021E5DB8(void) {
    TouchscreenListMenu_HandleInput(*((u32*)(r0 + 0x000004BC)));
    // mvn r0, r0
    // add r1, #0x27
    TouchscreenListMenu_Destroy(*((u32*)(r5 + 0x000004BC)), (*((u8*)*((u32*)(r5 + 0x000004BC))) << 0x18));
    ov108_021E61E8(r5);
    ov108_021E6238(r5);
    *((u32*)(r5 + 0x10)) = r4;
    // strb r1, [r5, r0]
    ov108_021E79A8(r5, 1, 0, 0);
    ov108_021E79A8(r5, 4, 0, 0);
    // strb r1, [r5, r0]
    ov108_021E6804(r5, *((u8*)(r5 + 0x000184DF)));
    *((u32*)(r5 + 0xc)) = 4;
    ov108_021E79A8(r5, 1, 0, 0);
    ov108_021E79A8(r5, 4, 0, 0);
}




void ov108_021E5E68(void) {
    ov108_021E7F7C(*((u32*)(r0 + 8)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov108_021E80F4((*((u32*)(r4 + 8)) + 1));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // and r1, r2
    // str r1, [r3]
    // strb r1, [r4, r2]
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 0xc)) = 3;
    ov108_021E7700((*((u32*)(r4 + 8)) + 1), 0, 1, 1);
    ov108_021E7EB0(r4);
    // strb r0, [r4, r1]
    *((u32*)(r4 + 0xc)) = 2;
    ov108_021E7700((8 | (*((u8*)(r4 + 0x000184E2)) & ~(0xf8))), 0x000184E2, 0x000184E2, 1);
    ov108_021E7CD8(r4, *((u8*)(r4 + 0x000184DF)));
    // strb r2, [r4, r1]
}




void ov108_021E5F10(void) {
}




void ov108_021E5F38(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + (0x13 << 6))));
    // add r0, r0, r2
    // add r0, r5, r0
    // add r0, #8
    // str r4, [r5, r0]
    // add r0, #0x1c
    SafariZone_InitAreaInSet(r5, *((u8*)(r5 + (0x000184E0 - 1))), ((*((u8*)(r5 + 0x000184E0)) << 0x18) >> 0x18), *((u8*)(r5 + (0x000184E0 - 1))));
    // add r2, r5, r2
    ov108_021E7BB4(r5, *((u8*)(r5 + 0x000184DF)), *((u8*)((0x7a * *((u8*)(r5 + 0x000184DF))) + 0x1c)));
    YesNoPrompt_IsInTouchMode(*((u32*)(r5 + (0x13 << 6))));
    ov108_021E61E8(r5);
    ov108_021E6238(r5);
    *((u32*)(r5 + 0x10)) = r6;
    YesNoPrompt_Reset(*((u32*)(r5 + (0x13 << 6))));
    // add r0, r5, r0
    ClearWindowTilemapAndCopyToVram((0xf1 << 2));
    ov108_021E767C(r5, 0);
    ov108_021E7700(r5, 0, 1, 1);
    ov108_021E79A8(r5, 1, 0, 0);
}




void ov108_021E6010(void) {
    ov108_021E81A8(*((u32*)(r0 + 8)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov108_021E8270((*((u32*)(r4 + 8)) + 1));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // eor r1, r3
    // strb r0, [r4, r2]
    *((u32*)(r4 + 8)) = 0;
}




void ov108_021E6068(void) {
}




void ov108_021E6090(void) {
    // add r0, r0, r4
    // add r1, r5, r0
    ManagedSprite_SetPriority(*((u32*)(*((u32*)(r0 + 8)) + (0xdb << 2))), 0, 0x000184E2, ((*((u8*)(r0 + 0x000184E2)) << 0x1d) >> 0x1f));
    // add r0, r0, r4
    // add r1, r5, r0
    ManagedSprite_SetPriority(*((u32*)(r1 + (0xdb << 2))), 0);
    GfGfx_EngineBTogglePlanes(0x10, 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov108_021E82E0((*((u32*)(r5 + 8)) + 1), 0);
    // str r0, [r5, r2]
    // sub r1, #9
    // sub r2, #8
    // add r0, #0x1c
    SafariZone_SwapAreasInSet(r5, *((u8*)(r5 + 0x000184E8)), *((u8*)(r5 + 0x000184E8)));
    // add r1, r2, r4
    // add r2, r5, r3
    ov108_021E84F8(*((u32*)(r5 + (0xd2 << 2))), ((r1 << 0x18) >> 0x18), *((u8*)(*((u8*)(r5 + 0x000184DF)) + 0x1c)), (0x7a * *((u8*)(r5 + 0x000184DF))));
    // add r2, r5, r2
    ov108_021E7BB4(r5, *((u8*)(r5 + 0x000184DF)), *((u8*)((0x7a * *((u8*)(r5 + 0x000184DF))) + 0x1c)));
    // add r1, r2, r4
    // add r2, r5, r3
    ov108_021E84F8(*((u32*)(r5 + (0xd2 << 2))), ((r1 << 0x18) >> 0x18), *((u8*)(*((u8*)(r5 + 0x000184E0)) + 0x1c)), (0x7a * *((u8*)(r5 + 0x000184E0))));
    // add r2, r5, r2
    ov108_021E7BB4(r5, *((u8*)(r5 + 0x000184E0)), *((u8*)((0x7a * *((u8*)(r5 + 0x000184E0))) + 0x1c)));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    ov108_021E82E0((*((u32*)(r5 + 8)) + 1), 1);
    // add r0, r0, r4
    // add r1, r5, r0
    ManagedSprite_SetPriority(*((u32*)(r1 + (0xdb << 2))), 2);
    // add r0, r0, r4
    // add r1, r5, r0
    ManagedSprite_SetPriority(*((u32*)(r1 + (0xdb << 2))), 2);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // strb r3, [r5, r1]
    ov108_021E6850((*((u32*)(r5 + 8)) + 1), (r2 - 3), *((u8*)(r5 + (r2 - 2))));
    *((u32*)(r5 + 8)) = 0;
    *((u32*)(r5 + 0xc)) = 2;
}




void ov108_021E61E8(void) {
    ov108_021E78F4(0, *((u8*)(r0 + (0x000184E2 - 3))));
    ov108_021E78F4(1, *((u8*)(r4 + (r2 - 2))));
    ov108_021E78F4(r4, 2, *((u8*)(r4 + 0x000184DF)));
    ov108_021E78F4(0, *((u8*)(r4 + (r2 - 2))));
}




void ov108_021E6238(void) {
}




void ov108_021E6240(void) {
    System_GetTouchHeld(*((u32*)(r0 + 0x10)));
    // blx r1
    ov108_021E61E8(r4, *((u32*)(r4 + 0x000004C4)));
    *((u32*)(r4 + 0x10)) = 0;
    System_GetTouchHeld(0);
    // blx r1
    ov108_021E6238(r4, *((u32*)(r4 + 0x000004C8)));
    *((u32*)(r4 + 0x10)) = 1;
}




void ov108_021E62B4(void) {
    // tst r0, r4
    PlaySE(0x000005DC);
    *((u32*)(r5 + 0xc)) = 6;
    // tst r0, r4
    PlaySE(0x000005DC);
    *((u32*)(r5 + 0xc)) = 6;
    PlaySE(4);
    ov108_021E6A58(r5);
    // tst r0, r4
    _s32_div_f(*((u8*)(r5 + 0x000184DF)), 3);
    _s32_div_f(r6, 3);
    // tst r0, r4
    _s32_div_f((r7 + 1), 3);
    // tst r0, r4
    _s32_div_f((((r1 << 0x18) >> 0x18) + 2), 3);
    // tst r0, r4
    _s32_div_f((r6 + 2), 3);
    // tst r0, r4
    _s32_div_f((((r1 << 0x18) >> 0x18) + 1), 3);
    // add r0, r6, r0
    // add r1, r7, r0
    // strb r1, [r5, r0]
    // tst r0, r1
    PlaySE(0x000005E5, *((u32*)(gSystem + 0x48)));
    ov108_021E78F4(r5, 0, *((u8*)(r5 + 0x000184DF)));
    ov108_021E7CD8(r5, *((u8*)(r5 + 0x000184DF)));
}




void ov108_021E63B8(void) {
    TouchscreenHitbox_FindRectAtTouchNew(ov108_021EA760);
    // mvn r1, r1
    // add r0, sp, #4
    // strh r1, [r0]
    // add r0, sp, #4
    // str r0, [sp]
    DoesPixelAtScreenXYMatchPtrVal(*((u32*)(r4 + (0xd << 6))), 3, *((u16*)(gSystem + 0x20)), *((u16*)(gSystem + 0x22)));
    PlaySE(0x000005DC);
    *((u32*)(r4 + 0xc)) = 6;
    // strb r0, [r4, r2]
    // strb r1, [r4, r0]
    ov108_021E78F4(r4, 0, *((u8*)(r4 + 0x000184DF)));
    ov108_021E7CD8(r4, *((u8*)(r4 + 0x000184DF)));
    PlaySE(0x000005DC);
    ov108_021E6A58(r4);
}




void ov108_021E6450(void) {
    PlaySE(0x000005DC);
    ov108_021E6B00(r4, 0x000184E3);
    // add r0, r3, r0
    // str r3, [r4, r0]
    // add r0, #0x1c
    SafariZone_InitAreaInSet(r4, *((u8*)(r4 + (r1 - 4))), (((6 * *((u8*)(r4 + (r1 - 5)))) << 0x18) >> 0x18), 1);
    // add r2, r4, r2
    ov108_021E7BB4(r4, *((u8*)(r4 + 0x000184DF)), *((u8*)((0x7a * *((u8*)(r4 + 0x000184DF))) + 0x1c)));
    ov108_021E79A8(r4, 1, 0, 0);
}




void ov108_021E64C0(void) {
    // str r2, [sp]
    // tst r2, r7
    PlaySE(0x000005DC, 0x000184E0, 2);
    // tst r2, r7
    // ldr r2, [sp]
    PlaySE(0x000005DC, 1);
    // add r1, r5, r1
    // ldr r2, [sp]
    // add r2, r2, r4
    ov108_021E6450(0, *((u8*)((0x7a * *((u8*)(r5 + (r1 - 1)))) + 0x1c)), 6, *((u8*)(r5 + (r1 - 1))));
    // tst r0, r7
    // ldr r0, [sp]
    _s32_div_f(0, 3);
    // ldr r0, [sp]
    _s32_div_f((r1 << 0x18), 3);
    // str r0, [sp, #4]
    // tst r0, r7
    // eor r0, r4
    _s32_div_f((r6 + 1), 3);
    // str r0, [sp, #4]
    // strb r2, [r5, r0]
    // ldr r0, [sp, #4]
    // eor r0, r4
    _s32_div_f((((r1 << 0x18) >> 0x18) + 1), 3, (*((u8*)(r5 + (0x000184DE + 4))) & ~(2)));
    _s32_div_f((((r1 << 0x18) >> 0x18) + 1), 3);
    // tst r0, r7
    // eor r0, r4
    _s32_div_f((((r1 << 0x18) >> 0x18) + 2), 3);
    // str r0, [sp, #4]
    // strb r2, [r5, r0]
    // ldr r0, [sp, #4]
    // eor r0, r4
    _s32_div_f((((r1 << 0x18) >> 0x18) + 2), 3, (*((u8*)(r5 + (0x000184DE + 4))) | 2));
    _s32_div_f((((r1 << 0x18) >> 0x18) + 2), 3);
    // tst r0, r7
    _s32_div_f((r4 + 2), 3);
    // tst r0, r7
    _s32_div_f((((r1 << 0x18) >> 0x18) + 1), 3);
    // add r0, r4, r0
    // add r0, r6, r0
    // strb r0, [r5, r2]
    ov108_021E78F4(r5, 1, *((u8*)(r5 + 0x000184E0)));
    // ldr r0, [sp, #4]
    PlaySE(0x000005E1);
    ov108_021E78C0(r5, 1, 0, 0);
    // ldr r0, [sp]
    PlaySE(0x000005E5, *((u8*)(r5 + 0x000184E0)));
    ov108_021E7EB0(r5);
}




void ov108_021E66AC(void) {
    TouchscreenHitbox_FindRectAtTouchNew(ov108_021EA7D0);
    // mvn r1, r1
    // add r0, sp, #4
    // strh r1, [r0]
    // add r0, sp, #4
    // str r0, [sp]
    DoesPixelAtScreenXYMatchPtrVal(*((u32*)(r4 + (0xd << 6))), 3, *((u16*)(gSystem + 0x20)), *((u16*)(gSystem + 0x22)));
    // strb r1, [r4, r0]
    PlaySE(0x000005DC, 6);
    // strb r2, [r4, r0]
    // strb r2, [r4, r0]
    ov108_021E78C0(r4, 1, 0, 0);
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + (0xd9 << 2))), 1);
    Sprite_ResetAnimCtrlState(*((u32*)(r4 + (0xd9 << 2))));
    PlaySE(0x000005E1);
    // strb r2, [r4, r0]
    // strb r2, [r4, r0]
    ov108_021E78C0(r4, 1, 0, 0);
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + (0xda << 2))), 1);
    Sprite_ResetAnimCtrlState(*((u32*)(r4 + (0xda << 2))));
    PlaySE(0x000005E1);
    // strb r0, [r4, r2]
    ov108_021E78F4(r4, 1, *((u8*)(r4 + 0x000184E0)));
    ov108_021E7EB0(r4);
    // add r0, r3, r0
    // add r1, r4, r1
    ov108_021E6450(r4, *((u8*)((0x7a * *((u8*)(r4 + (0x000184E0 - 1)))) + 0x1c)), *((u8*)(r4 + (0x000184E0 - 1))), *((u8*)(r4 + 0x000184E0)));
}




void ov108_021E6804(void) {
    // strb r1, [r4, r2]
    ov108_021E78F4(0, *((u8*)(r0 + (0x000184E2 - 2))), (*((u8*)(r0 + 0x000184E2)) & ~(0xf8)));
    thunk_Sprite_SetPriority(*((u32*)(r4 + (0xd5 << 2))), 0);
    ov108_021E78F4(r4, 3, *((u8*)(r4 + 0x000184DF)));
    ov108_021E7700(r4, 0, 2, 1);
}




void ov108_021E6850(void) {
    // strb r3, [r4, r2]
    ov108_021E78F4(0, *((u8*)(r0 + (0x000184E2 - 3))), (*((u8*)(r0 + 0x000184E2)) & ~(0xf8)));
    thunk_Sprite_SetPriority(*((u32*)(r4 + (0xd5 << 2))), 2);
    ov108_021E78C0(r4, 3, 0, 0);
    ov108_021E7700(r4, 0, 0, 1);
}




void ov108_021E6894(void) {
    // tst r1, r4
    ov108_021E6850(2);
    *((u32*)(r5 + 0xc)) = 2;
    PlaySE(0x000005DC);
    // tst r0, r4
    ov108_021E6850(r5, *((u8*)(r5 + 0x000184E0)));
    *((u32*)(r5 + 0xc)) = 2;
    PlaySE(0x000005DC);
    PlaySE(0x0000069C);
    // tst r0, r4
    _s32_div_f(*((u8*)(r5 + 0x000184E0)), 3);
    _s32_div_f(r6, 3);
    // tst r0, r4
    _s32_div_f((r7 + 1), 3);
    // tst r0, r4
    _s32_div_f((((r1 << 0x18) >> 0x18) + 2), 3);
    // tst r0, r4
    _s32_div_f((r6 + 2), 3);
    // tst r0, r4
    _s32_div_f((((r1 << 0x18) >> 0x18) + 1), 3);
    // add r0, r6, r0
    // add r1, r7, r0
    // strb r1, [r5, r0]
    // tst r0, r1
    PlaySE(0x000005E5, *((u32*)(gSystem + 0x48)));
    ov108_021E78F4(r5, 0, *((u8*)(r5 + 0x000184E0)));
}




void ov108_021E69A0(void) {
    TouchscreenHitbox_FindRectAtTouchNew(ov108_021EA760);
    // mvn r1, r1
    // add r0, sp, #4
    // strh r1, [r0]
    // add r0, sp, #4
    // str r0, [sp]
    DoesPixelAtScreenXYMatchPtrVal(*((u32*)(r4 + (0xd << 6))), 3, *((u16*)(gSystem + 0x20)), *((u16*)(gSystem + 0x22)));
    // strb r1, [r4, r0]
    ov108_021E6850(r4, 6);
    *((u32*)(r4 + 0xc)) = 2;
    PlaySE(0x000005DC);
    ov108_021E6850(r4, *((u8*)(r4 + 0x000184DF)), 0x000184DF);
    *((u32*)(r4 + 0xc)) = 2;
    PlaySE(0x000005DC);
    // strb r0, [r4, r1]
    ov108_021E78F4(r4, 0, *((u8*)(r4 + (r2 + 1))));
    PlaySE(0x0000069C);
}




void ov108_021E6A58(void) {
    // add r0, sp, #0xc
    MI_CpuFill8(0, 0x18);
    // add r2, sp, #0xc
    // add r1, sp, #0xc
    // strh r3, [r2]
    *((u16*)(r2 + 2)) = *((u16*)(_021EA720 + 0xe));
    *((u16*)(r2 + 4)) = *((u16*)(_021EA720 + 0x10));
    *((u16*)(r2 + 6)) = *((u16*)(_021EA720 + 0x12));
    *((u16*)(r2 + 8)) = *((u16*)(_021EA720 + 0x14));
    *((u16*)(r2 + 0xa)) = *((u16*)(_021EA720 + 0x16));
    // str r0, [sp, #0x18]
    // str r3, [sp, #0x1c]
    *((u8*)(r2 + 0x14)) = 3;
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    TouchscreenListMenu_Create(*((u32*)(r4 + ((0xd << 6) + 4))), ((*((u32*)(r4 + 0x10)) << 0x18) >> 0x18), ((*((u16*)(ov108_021EA748 + (*((u8*)(r4 + 0x000184DF)) << 2))) << 0x18) >> 0x18));
    // str r0, [r4, r1]
    ov108_021E79A8(r4, 1, *((u8*)(r4 + 0x000184DF)), 1);
    ov108_021E79A8(r4, 4, *((u8*)(r4 + 0x000184DF)), 1);
}




void ov108_021E6B00(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // add r0, #0x39
    // str r1, [sp]
    // str r0, [sp, #8]
    // str r1, [sp, #4]
    // str r0, [sp, #0xc]
    // add r2, sp, #0
    *((u8*)(r2 + 0x10)) = 0x1a;
    *((u8*)(r2 + 0x11)) = 0x10;
    // and r1, r3
    *((u8*)(r2 + 0x12)) = ((*((u8*)(r2 + 0x12)) & ~(0xf)) | 0xf);
    *((u8*)(r2 + 0x12)) = (*((u8*)(r2 + 0x12)) & ~(0xf0));
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(*((u32*)(r4 + (0x13 << 6))), (*((u8*)(r2 + 0x12)) & ~(0xf0)), ((*((u32*)(r4 + 0x10)) << 0x18) >> 0x18));
    ov108_021E79A8(r4, 1, *((u8*)(r4 + 0x000184E0)), 1);
    // add r2, r2, r3
    ov108_021E7BB4(r4, *((u8*)(r4 + 0x000184DF)), ((*((u8*)(r4 + (0x000184DF + 1))) << 0x18) >> 0x18), (6 * *((u8*)(r4 + (0x000184DF - 1)))));
    ov108_021E767C(r4, 1);
    ov108_021E7700(r4, 1, 3, 1);
}




void ov108_021E6BA0(void) {
    ov108_021E8490();
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + (0xd << 6))), 1, 3, (0x000184E2 + 2));
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + (0xd << 6))), 2, 3, 0x000184E4);
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + (0xd << 6))), 4, 3, 0x000184E6);
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + (0xd << 6))), 6, 3, 0x000184E6);
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + (0xd << 6))), 5, 3, 0x000184E6);
    // strb r2, [r4, r1]
    GF_RunVramTransferTasks(1, 0x000184E2, (*((u8*)(r4 + 0x000184E2)) & ~(1)));
    DoScheduledBgGpuUpdates(*((u32*)(r4 + (0xd << 6))));
    // str r0, [r3, r1]
}




void ov108_021E6C48(void) {
}




void ov108_021E6C68(void) {
    ov108_021E6C48();
    // and r0, r1
    // strh r0, [r2]
    BgConfig_Alloc(*((u32*)r5), *((u16*)0x04000304), 0x04000304);
    // add r3, sp, #4
    // str r0, [r5, r1]
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, (0xd << 6), r3);
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r6, sp, #0x14
    InitBgFromTemplate(*((u32*)(r5 + (0xd << 6))), ((0 << 0x18) >> 0x18), r6, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + (0xd << 6))), ((r4 << 0x18) >> 0x18));
    BG_ClearCharDataRange(((r4 << 0x18) >> 0x18), 0x40, 0, *((u32*)r5));
    // add r6, #0x1c
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 2, 0x1c, 0x1c);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04001050, 1, 0x1e, 0x1c);
}




void ov108_021E6D24(void) {
    // str r1, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 0, 0x1f);
    // str r1, [sp]
    G2x_SetBlendAlpha_(0x04001050, 0, 0, 0x1f);
    FreeBgTilemapBuffer(*((u32*)(r5 + (0xd << 6))), ((0 << 0x18) >> 0x18));
    Heap_Free(*((u32*)(r5 + (0xd << 6))));
    // strh r0, [r2]
}




void ov108_021E6D80(void) {
    NARC_New(0xa6, *((u32*)r0));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    BgConfig_LoadAssetFromOpenNarc(*((u32*)(r5 + (0xd << 6))), *((u32*)r5), r0, 0xa6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    BgConfig_LoadAssetFromOpenNarc(*((u32*)(r5 + (0xd << 6))), *((u32*)r5), r4, 0xa6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    BgConfig_LoadAssetFromOpenNarc(*((u32*)(r5 + (0xd << 6))), *((u32*)r5), r4, 0xa6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    BgConfig_LoadAssetFromOpenNarc(*((u32*)(r5 + (0xd << 6))), *((u32*)r5), r4, 0xa6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    BgConfig_LoadAssetFromOpenNarc(*((u32*)(r5 + (0xd << 6))), *((u32*)r5), r4, 0xa6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    BgConfig_LoadAssetFromOpenNarc(*((u32*)(r5 + (0xd << 6))), *((u32*)r5), r4, 0xa6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    BgConfig_LoadAssetFromOpenNarc(*((u32*)(r5 + (0xd << 6))), *((u32*)r5), r4, 0xa6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    BgConfig_LoadAssetFromOpenNarc(*((u32*)(r5 + (0xd << 6))), *((u32*)r5), r4, 0xa6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    BgConfig_LoadAssetFromOpenNarc(*((u32*)(r5 + (0xd << 6))), *((u32*)r5), r4, 0xa6);
    // str r0, [sp]
    // add r3, r5, r3
    GfGfxLoader_GetScrnDataFromOpenNarc(r4, 8, 0, 0x000004D8);
    // str r0, [r5, r3]
    // str r0, [sp]
    // add r3, r5, r3
    GfGfxLoader_GetScrnDataFromOpenNarc(r4, 9, 0, ((0x4d << 4) + 4));
    // str r0, [r5, r1]
    NARC_Delete(r4, 0x000004CC);
    ov108_021E7ADC(r5);
    ov108_021E7BB4(r5, 0xff, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + (0xd << 6))), 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + (0xd << 6))), 2);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + (0xd << 6))), 3);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + (0xd << 6))), 6);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + (0xd << 6))), 7);
}




void ov108_021E6F58(void) {
    Heap_Free(*((u32*)(r0 + (0x4d << 4))));
    Heap_Free(*((u32*)(r4 + 0x000004CC)));
}




void ov108_021E6F74(void) {
    FontID_Alloc(4, *((u32*)r0));
    NewMsgDataFromNarc(0, 0x1b, 0x000001AD, *((u32*)r5));
    // str r0, [r5, r1]
    MessageFormat_New_Custom(1, 0x11, *((u32*)r5));
    // str r0, [r5, r1]
    String_New(0x51, *((u32*)r5));
    // str r0, [r5, r1]
    // sub r1, #8
    NewString_ReadMsgData(*((u32*)(r5 + (0xc3 << 2))), 9);
    // str r0, [r5, r1]
    // sub r1, #0x30
    NewString_ReadMsgData(*((u32*)(r5 + (0xcd << 2))), 0xf);
    // str r0, [r5, r1]
    // sub r7, #0x28
    NewString_ReadMsgData(*((u32*)(r5 + (0xc1 << 2))), (0 + 4));
    // str r0, [r6, r7]
    NewString_ReadMsgData(*((u32*)(r5 + (0xc1 << 2))), 0);
    // str r0, [r6, r7]
}




void ov108_021E7014(void) {
    // ldr r0, [r5, r7]
    // ldr r0, [r4, r7]
    // ldr r0, [r6, r0]
    // ldr r0, [r6, r0]
    // ldr r0, [r6, r0]
    // ldr r0, [r6, r0]
    // ldr r0, [r6, r0]
}




void ov108_021E7080(void) {
    // add r5, r7, r0
    AddWindow(*((u32*)(r0 + (0xd << 6))), r5, ov108_021EA7A8);
    FillWindowPixelBuffer(r5, 0);
    // add r4, #8
    // add r5, #0x10
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    // add r0, #0xe
    // add r6, r7, r0
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x28]
    // asr r0, r5, #1
    // add r0, r5, r0
    // asr r1, r0, #2
    // eor r0, r1
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // sub r4, r4, r1
    // ldr r1, [sp, #0x24]
    // str r1, [sp, #0x2c]
    // ldr r1, [sp, #0x28]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x2c]
    // add r1, r6, r1
    AddWindowParameterized(*((u32*)(r7 + (0xd << 6))), 0x16, 7, 1);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x2c]
    // add r0, r6, r0
    FillWindowPixelBuffer(((*((u32*)(ov108_021EA724 + (0x1f << 2))) << 0x18) >> 0x18), (((0x1f << 2) << 0x18) >> 0x18), (r5 >> 0x1f));
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x28]
    // sub r4, r4, r0
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x18]
    // add r0, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x30]
    // add r1, r6, r1
    AddWindowParameterized(*((u32*)(r7 + (0xd << 6))), 7, 0x1a);
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x30]
    // add r0, r6, r0
    FillWindowPixelBuffer(((r1 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // sub r4, #0xa
    // str r0, [sp, #0x20]
    // add r0, r7, r0
    InitWindow(0x000004A4);
    // str r1, [sp]
    // add r1, #0x5f
    // str r0, [sp, #4]
    // add r1, r7, r1
    AddTextWindowTopLeftCorner(*((u32*)(r7 + 0x000002E1)), 0x000004A4, 6, 2);
    // add r0, r7, r0
    FillWindowPixelBufferText_AssumeTileSize32(0x000004A4, 0);
    YesNoPrompt_Create(*((u32*)r7));
    // str r0, [r7, r1]
}




void ov108_021E71EC(void) {
    YesNoPrompt_Destroy(*((u32*)(r0 + (0x13 << 6))));
    // add r0, r5, r0
    RemoveWindow(0x000004A4);
    // add r5, r5, r0
    ClearWindowTilemapAndCopyToVram(r5);
    RemoveWindow(r5);
    // add r5, #0x10
}




void ov108_021E7224(void) {
    ListMenuItems_New(3, *((u32*)r0));
    // str r0, [r4, r1]
    ListMenuItems_New(2, *((u32*)r4));
    // str r0, [r4, r1]
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + (0x000004B8 - 4))), *((u32*)(r4 + (0xc1 << 2))), 7, 0);
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x000004B4)), *((u32*)(r4 + (0xc1 << 2))), 8, 1);
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x000004B4)), *((u32*)(r4 + (0xc1 << 2))), 6, 2);
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x000004B8)), *((u32*)(r4 + (0xc1 << 2))), 5, 0);
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x000004B8)), *((u32*)(r4 + (0xc1 << 2))), 6, 1);
}




void ov108_021E72A4(void) {
    ListMenuItems_Delete(*((u32*)(r0 + 0x000004B8)));
    ListMenuItems_Delete(*((u32*)(r4 + 0x000004B4)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}




void ov108_021E72CC(void) {
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // str r0, [r4, r1]
}




void ov108_021E730C(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov108_021E733C(void) {
    _s32_div_f(0, 3);
    // str r1, [sp, #0x10]
    _s32_div_f(r4, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0x38
    // add r2, #0x38
    ov108_021E8540(*((u32*)(r5 + (0xd2 << 2))), (((0x48 * r2) << 0x10) >> 0x10), (((0x48 * r0) << 0x10) >> 0x10), 2);
    // str r0, [r6, r1]
    // add r7, #0x7a
    _s32_div_f(0, 3);
    _s32_div_f(r4, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0x30
    // add r3, #0x38
    ov108_021E8540(*((u32*)(r5 + (0xd2 << 2))), (((0x50 * r7) << 0x10) >> 0x10), (((0x48 * r0) << 0x10) >> 0x10), 3);
    // str r0, [r6, r1]
    // sub r1, #0x38
    SpriteSystem_CreateSpriteFromResourceHeader(*((u32*)(r5 + (0xe1 << 2))), *((u32*)(r5 + ((0xe1 << 2) + 4))), ov108_021EA7F8);
    // str r0, [r5, r1]
    // sub r0, #8
    SpriteSystem_CreateSpriteFromResourceHeader(*((u32*)(r5 + (0xd5 << 2))), *((u32*)(r5 + ((0xd5 << 2) - 4))), ov108_021EA7F8);
    // str r0, [r5, r1]
    // sub r0, #0xc
    // sub r1, #8
    SpriteSystem_CreateSpriteFromResourceHeader(*((u32*)(r5 + (0xd6 << 2))), *((u32*)(r5 + (0xd6 << 2))), ov108_021EA7F8);
    // str r0, [r5, r1]
    // sub r0, #0x14
    // sub r1, #0x10
    SpriteSystem_CreateSpriteFromResourceHeader(*((u32*)(r5 + (0x36 << 4))), *((u32*)(r5 + (0x36 << 4))), ov108_021EA820);
    // str r0, [r5, r1]
    // sub r0, #0x10
    // sub r1, #0xc
    SpriteSystem_CreateSpriteFromResourceHeader(*((u32*)(r5 + (0xd7 << 2))), *((u32*)(r5 + (0xd7 << 2))), ov108_021EA848);
    // str r0, [r5, r1]
    // sub r0, #0x18
    // sub r1, #0x14
    SpriteSystem_CreateSpriteFromResourceHeader(*((u32*)(r5 + (0xd9 << 2))), *((u32*)(r5 + (0xd9 << 2))), ov108_021EA870);
    // str r0, [r5, r1]
    // sub r1, #0x10
    thunk_Sprite_SetPriority(*((u32*)(r5 + (0xda << 2))), 3);
    thunk_Sprite_SetPriority(*((u32*)(r5 + (0xd9 << 2))), 3);
    thunk_Sprite_SetPriority(*((u32*)(r5 + (0xda << 2))), 3);
    thunk_Sprite_SetPriority(*((u32*)(r5 + (0x36 << 4))), 0);
    thunk_Sprite_SetDrawPriority(*((u32*)(r5 + (0x36 << 4))), 5);
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + (0xd5 << 2))), 0);
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + (0xd6 << 2))), 0);
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + (0x36 << 4))), 0);
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + (0xd7 << 2))), 0);
    ov108_021E756C(r5);
}




void ov108_021E7510(void) {
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r6]
}




void ov108_021E756C(void) {
    // add r0, r5, r0
    sub_02013910(0x000004A4, *((u32*)r0));
    // str r0, [r5, r1]
    sub_02013948(*((u32*)(r5 + (0x3a << 4))), 1);
    // add r0, r5, r0
    GetWindowWidth(0x000004A4);
    FontID_String_GetWidth(0, *((u32*)(r5 + (0x31 << 4))), 0);
    // sub r0, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x000004A4, 0, *((u32*)(r5 + (0x31 << 4))), (r0 >> 1));
    // sub r1, #0x4c
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    // str r0, [sp, #0x14]
    SpriteManager_GetSpriteList(*((u32*)(r5 + (0xe7 << 2))), (0xe7 << 2));
    // str r0, [sp, #0x18]
    SpriteManager_FindPlttResourceProxy(*((u32*)(r5 + (0x35 << 4))), 0);
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x28]
    // str r2, [sp, #0x38]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x3c]
    // add r3, r5, r3
    sub_02021AC8(r6, 0, 1, (0xea << 2));
    // sub r1, #0xc
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    // add r0, sp, #0x10
    TextOBJ_Create(0, *((u32*)(r5 + (0xeb << 2))));
    // str r0, [r5, r1]
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r5 + (0xe9 << 2))), 1);
    TextOBJ_SetPaletteNum(*((u32*)(r5 + (0xe9 << 2))), 4);
}




void ov108_021E7650(void) {
    // add r0, r4, r0
    // str r1, [r4, r0]
}




void ov108_021E767C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + (0xd << 6))), 0, 0, 0);
    // add r2, r4, r3
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // sub r3, r4, r3
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(r5 + (0xd << 6))), 0, 0, (((r4 << 1) << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + (0xd << 6))), 0);
}




void ov108_021E7700(void) {
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r4, r7, r0
    // add r0, r4, r5
    GetWindowWidth((0xed << 2));
    // add r0, r4, r5
    GetWindowHeight((r0 << 0x1b));
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // add r0, r7, r0
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x18]
    // add r0, r4, r5
    FillWindowPixelBuffer(0x000D0C0E, 0xe);
    // str r6, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r5
    FillWindowPixelRect(2, 6, 0, 0);
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x1c]
    // add r0, r4, r5
    FillWindowPixelRect(2, 6, 0, (((r3 - 2) << 0x10) >> 0x10));
    // add r0, r4, r5
    FillWindowPixelBuffer(2);
    // add r0, r7, r0
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #0x24]
    // ldr r1, [sp, #0x24]
    FontID_String_GetWidth(0, *((u32*)(r1 + (r1 << 2))), 0);
    // sub r0, r6, r0
    // str r0, [sp, #0x20]
    // str r7, [sp]
    // ldr r0, [sp, #0x18]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, [sp, #0x14]
    // add r0, r4, r5
    // ldr r2, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    AddTextPrinterParameterizedWithColor(((r0 << 0x17) >> 0x18), 0, *((u32*)(r2 + (r2 << 2))), (r2 << 2));
}




void ov108_021E77D4(void) {
    // add r0, r5, r0
    FillWindowPixelBuffer((0xf9 << 2), 2);
    // str r3, [sp]
    // str r3, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0xc2 << 2))), 0, (*((u8*)(r5 + 0x000184DE)) + 1), 1);
    // add r2, #0x2c
    StringExpandPlaceholders(*((u32*)(r5 + (0xc2 << 2))), *((u32*)(r5 + ((0xc2 << 2) + 4))), *((u32*)(r5 + (0xc2 << 2))));
    // add r0, r5, r0
    GetWindowWidth((0xf9 << 2));
    FontID_String_GetWidth(0, *((u32*)(r5 + (0xc3 << 2))), 0);
    // sub r0, r1, r0
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r2
    // str r1, [sp, #0xc]
    // sub r2, #0xd8
    AddTextPrinterParameterizedWithColor(0x00030102, 0, *((u32*)(r5 + (0xf9 << 2))), (r0 >> 1));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + (0xd << 6))), 3);
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + (0xd9 << 2))), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xd9 << 2))), 6);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xd9 << 2))), 4);
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + (0xda << 2))), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xda << 2))), 7);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xda << 2))), 5);
}




void ov108_021E78C0(void) {
    // add r1, r0, r1
    // add r5, r0, r2
}




void ov108_021E78F4(void) {
    // str r0, [sp]
    _s32_div_f(r2, 3, 0xb4);
    // add r0, #0x38
    // asr r0, r0, #0x10
    // str r0, [sp]
    _s32_div_f(r7, 3);
    // add r1, #0x38
    // asr r2, r0, #0x10
    // add r2, #0xc0
    // asr r2, r0, #0x10
    _s32_div_f(r7, 3);
    // add r0, #0x30
    // asr r0, r0, #0x10
    // str r0, [sp]
    _s32_div_f(r7, 3);
    // add r1, #0x38
    // asr r2, r0, #0x10
    // add r1, r5, r0
    // ldr r1, [sp]
    Sprite_SetPositionXY(*((u32*)((0x48 * r0) + (0xd5 << 2))), (0x48 * r0));
    ov108_021E78C0(r5, r4, r6, 1);
}




void ov108_021E79A8(void) {
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + (0xd << 6))));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + (0xd << 6))), r4);
    // str r2, [sp]
    // str r6, [sp, #4]
    // add r2, #0xc
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(r5 + (0xd << 6))), 0, (((0x18 * ((*((u8*)(r5 + 0x000184E2)) << 0x18) >> 0x1b)) << 0x18) >> 0x18));
    _s32_div_f(r7, 3);
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    _s32_div_f(r7, 3);
    // add r0, r0, r1
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(r5 + (0xd << 6))), r4, 0, 0x15);
    _s32_div_f(r7, 3);
    // str r0, [sp, #0x1c]
    _s32_div_f(r7, 3);
    // add r0, r0, r1
    // add r0, #0x1b
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x1c]
    FillBgTilemapRect(*((u32*)(r5 + (0xd << 6))), r4, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + (0xd << 6))), r4);
}




void ov108_021E7ADC(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r0, r0, r1
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // add r0, r1, r0
    // ldr r0, [sp, #0x14]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r7, r4
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
}




void ov108_021E7B74(void) {
    // add r3, #0x12
    // str r0, [sp]
    // add r3, sp, #4
    // str r0, [sp]
    // ldr r2, [sp, #4]
}




void ov108_021E7BB4(void) {
    // add r5, #0x7a
}




void ov108_021E7BFC(void) {
    ov108_021E7C5C();
    ov108_021E7CD8(r4, *((u8*)(r4 + 0x000184DF)));
    ov108_021E767C(r4, 0);
    ov108_021E7700(r4, 0, 0, 1);
    ov108_021E61E8(r4);
    ov108_021E6238(r4);
    // strh r2, [r4, r0]
    // sub r2, #0xc0
    // strh r2, [r4, r1]
    // strb r1, [r4, r0]
}




void ov108_021E7C5C(void) {
    // add r0, r5, r0
    // str r0, [sp, #0x10]
    // add r1, #0xa
    ReadMsgDataIntoString(*((u32*)(r0 + (0xc1 << 2))), 0, *((u32*)(r0 + (0xc3 << 2))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r7
    AddTextPrinterParameterizedWithColor(0, 0, *((u32*)(r5 + (0xc3 << 2))), 0);
    // ldr r0, [sp, #0x10]
    // add r0, r0, r7
    CopyWindowToVram();
}




void ov108_021E7CD8(void) {
    // add r7, r5, r0
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // str r0, [sp, #0x20]
    // add r0, r7, r0
    FillWindowPixelBuffer((6 << 4), ((*((u32*)(ov108_021EA724 + (0x1f << 2))) << 0x18) >> 0x18), (0x1f << 2), (0 >> 0x1f));
    // ldr r0, [sp, #0x20]
    // add r0, r7, r0
    ScheduleWindowCopyToVram();
    // add r0, r5, r0
    FillWindowPixelBuffer((0xfd << 2), 0xc);
    // add r0, r5, r0
    ScheduleWindowCopyToVram((0xfd << 2));
    // add r3, #0x1c
    // add r0, r3, r2
    // str r0, [sp, #0x1c]
    // sub r0, #0xf0
    // sub r2, #0xe8
    // add r1, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + (0xfd << 2))), *((u8*)(r5 + (r1 * 0x7a))), *((u32*)(r5 + (0xfd << 2))), r5);
    // add r0, r5, r6
    GetWindowWidth();
    // sub r1, #0xe8
    FontID_String_GetWidth(0, *((u32*)(r5 + r6)), 0);
    // sub r0, r1, r0
    // add r0, r5, r6
    FillWindowPixelBuffer((r0 << 0x17), 0xc);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // sub r2, #0xe8
    // add r0, r5, r6
    AddTextPrinterParameterizedWithColor(0x00080B0C, 0, *((u32*)(r5 + r6)), r4);
    // add r0, r5, r6
    ScheduleWindowCopyToVram();
    // add r0, sp, #0x24
    // add r0, #3
    MI_CpuFill8(*((u8*)(r5 + 0x000184E3)), 0, 5);
    // ldr r0, [sp, #0x1c]
    // ldr r6, [sp, #0x1c]
    // add r7, sp, #0x24
    // add r0, sp, #0x24
    GetSafariObjectConfig(*((u8*)(r0 + 1)), *((u8*)(r6 + 2)), 2);
    *((u8*)(r7 + 7)) = (*((u8*)(r7 + 7)) + 1);
    // add r0, sp, #0x24
    // add r0, #3
    // add r0, r0, r1
    // strb r1, [r0]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x24
    // add r0, #3
    // str r0, [sp, #0x14]
    // add r6, r5, r0
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0xc2 << 2))), 0, *((u8*)r2), 2);
    StringExpandPlaceholders(*((u32*)(r5 + (0xc2 << 2))), *((u32*)(r5 + (0xc3 << 2))), *((u32*)(r5 + (0xce << 2))));
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // add r0, r6, r4
    FillWindowPixelBuffer(*((u32*)(ov108_021EA724 + (0x1f << 2))), (((0x1f << 2) << 0x18) >> 0x18), (r7 >> 0x1f));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r6, r4
    AddTextPrinterParameterizedWithColor(0, 0, *((u32*)(r5 + (0xc3 << 2))), 0);
    // add r0, r6, r4
    ScheduleWindowCopyToVram();
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
}




void ov108_021E7EB0(void) {
    // add r0, r5, r4
    FillWindowPixelBuffer(0xc);
    // sub r2, #0xf0
    // add r1, r5, r1
    // add r2, #8
    // add r1, #0x10
    ReadMsgDataIntoString(*((u32*)(r5 + r4)), *((u8*)((0x7a * *((u8*)(r5 + 0x000184DF))) + 0x1c)), *((u32*)(r5 + r4)), *((u8*)(r5 + 0x000184DF)));
    // sub r1, #0xe8
    FontID_String_GetWidth(0, *((u32*)(r5 + r4)), 0);
    // sub r0, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // sub r2, #0xe8
    // add r0, r5, r4
    AddTextPrinterParameterizedWithColor(0x00080B0C, 0, *((u32*)(r5 + r4)), ((r0 << 0x17) >> 0x18));
    // sub r2, #0xf0
    // add r2, #8
    // add r1, #0x10
    // add r1, r1, r3
    ReadMsgDataIntoString(*((u32*)(r5 + r4)), *((u8*)(r5 + 0x000184E0)), *((u32*)(r5 + r4)), (6 * *((u8*)(r5 + (0x000184E0 - 2)))));
    // sub r1, #0xe8
    FontID_String_GetWidth(0, *((u32*)(r5 + r4)), 0);
    // sub r0, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // sub r2, #0xe8
    // add r0, r5, r4
    // add r3, #0x90
    AddTextPrinterParameterizedWithColor(0x00080B0C, 0, *((u32*)(r5 + r4)), ((r0 << 0x17) >> 0x18));
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}




void ov108_021E7F7C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + (0xd << 6))), 1, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r6 + (0xd << 6))), 1);
    // mvn r0, r0
    // strh r0, [r6, r2]
    // strb r3, [r6, r0]
    // strb r3, [r6, r0]
    ov108_021E78F4(r6, 1, *((u8*)(r6 + (0x000184E6 - 6))), 0);
    ov108_021E78F4(r6, 2, *((u8*)(r6 + 0x000184DF)));
    ov108_021E77D4(r6);
    ov108_021E79A8(1, 0xff, 0);
    ov108_021E78C0(r6, 1, 0, 0);
    // str r0, [sp, #0x14]
    // add r5, r6, r0
    _s32_div_f(0, 3);
    // str r1, [sp, #0x10]
    _s32_div_f(r4, 3);
    // ldr r2, [sp, #0x10]
    // add r1, #0x38
    // sub r2, #0x88
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0xdb << 2))), ((0x48 * r2) << 0x10), ((0x48 * r0) << 0x10), r0);
    ManagedSprite_SetPriority(*((u32*)(r5 + (0xdb << 2))), 2);
    // ldr r1, [sp, #0x14]
    // add r1, r4, r1
    ov108_021E84F8(*((u32*)(r6 + (0xd2 << 2))), ((r1 << 0x18) >> 0x18), *((u8*)(r7 + 0x1c)));
    // add r7, #0x7a
    // strb r1, [r6, r0]
    // add r0, r6, r0
    FillWindowPixelBuffer((0xfd << 2), 0xc);
    // add r0, r6, r0
    ScheduleWindowCopyToVram((0xfd << 2));
    // strh r1, [r0]
    *((u16*)(0x04001040 + 4)) = 0x10;
    // add r4, #8
    // strh r1, [r4]
    // add r4, #0xa
    // sub r0, #0x40
    // strh r1, [r4]
    // and r2, r1
    // str r1, [r0]
}




void ov108_021E80F4(void) {
    // ldrsh r2, [r5, r1]
    // mvn r7, r7
    // add r2, #0x18
    // strh r2, [r5, r1]
    // ldrsh r1, [r5, r1]
    // add r1, #0x18
    // strh r1, [r5, r0]
    // ldrsh r2, [r5, r1]
    // sub r2, #0x18
    // strh r2, [r5, r1]
    // ldrsh r1, [r5, r1]
    // sub r1, #0x18
    // strh r1, [r5, r0]
    // strb r0, [r5, r1]
    // asr r6, r0, #0x10
    // add r0, r4, r0
    // add r1, r5, r0
    ManagedSprite_OffsetPositionXY(*((u32*)(((*((u8*)(r0 + 0x000184E2)) << 0x1d) >> 0x1f) + (0xdb << 2))), 0, r6);
    // asr r2, r2, #0x10
    Sprite_OffsetPositionXY(*((u32*)(r5 + (0xd5 << 2))), 0, (r7 << 0x10));
    // asr r2, r2, #0x10
    Sprite_OffsetPositionXY(*((u32*)(r5 + (0xd7 << 2))), 0, (r7 << 0x10));
    // strb r1, [r5, r0]
}




void ov108_021E81A8(void) {
    // strb r2, [r6, r0]
    // str r0, [sp]
    // strb r2, [r6, r0]
    // mvn r0, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r5, r6, r0
    _s32_div_f(0, 3, (*((u8*)(r0 + (0x000184E2 - 4))) - 1));
    _s32_div_f(r4, 3);
    // ldr r3, [sp]
    // add r1, #0x30
    // add r1, r3, r1
    // add r3, #0x38
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0xdb << 2))), ((0x50 * r7) << 0x10), ((0x48 * r0) << 0x10), (0x48 * r0));
    // ldr r1, [sp, #4]
    // add r1, r4, r1
    // add r2, r4, r2
    ov108_021E84F8(*((u32*)(r6 + (0xd2 << 2))), ((r1 << 0x18) >> 0x18), (((6 * *((u8*)(r6 + 0x000184DE))) << 0x18) >> 0x18), *((u8*)(r6 + 0x000184DE)));
    ManagedSprite_SetPriority(*((u32*)(r5 + (0xdb << 2))), 3);
    // strb r1, [r6, r0]
}




void ov108_021E8270(void) {
    // mvn r0, r0
    // asr r6, r0, #0x10
    ManagedSprite_OffsetPositionXY(*((u32*)(r0 + (0xdb << 2))), r6, 0);
    // strb r0, [r7, r2]
    // strb r0, [r7, r2]
    ov108_021E78F4(r7, 1, *((u8*)(r7 + (0x000184E1 - 1))));
    ov108_021E7EB0(r7);
    ov108_021E77D4(r7);
}




void ov108_021E82E0(void) {
    // str r1, [sp]
    // add r3, sp, #8
    // add r2, r2, r0
    *((u8*)(r3 + 2)) = *((u8*)(r0 + (0x000184E2 - 3)));
    // add r0, r2, r0
    *((u8*)(r3 + 3)) = (6 * ((*((u8*)(r0 + 0x000184E2)) << 0x1d) >> 0x1f));
    _s32_div_f(*((u8*)(r0 + (0x000184E2 - 3))), 3, *((u8*)(r0 + (0x000184E2 - 2))));
    // add r1, sp, #8
    // strb r0, [r1]
    _s32_div_f(*((u8*)(r6 + 0x000184E0)), 3);
    // add r1, sp, #8
    *((u8*)(r1 + 1)) = r0;
    // ldr r0, [sp]
    // add r5, sp, #8
    // add r0, r1, r0
    // add r4, sp, #8
    // add r5, #2
    // str r0, [sp, #4]
    // ldr r2, [sp, #4]
    // ldrsb r3, [r2, r3]
    // add r1, r6, r0
    // asr r2, r2, #0x10
    ManagedSprite_OffsetPositionXY(*((u32*)(_021EA720 + (0xdb << 2))), 0, ((0xc * *((u8*)r4)) << 0x10), *((u8*)r4));
    // strb r1, [r6, r0]
    // strb r1, [r6, r0]
}




void ov108_021E838C(void) {
    GF_CreateVramTransferManager(0x20, *((u32*)r0));
    SpriteSystem_Alloc(*((u32*)r4));
    // str r0, [r4, r1]
    SpriteSystem_Init(*((u32*)(r4 + (0xd3 << 2))), ov108_021EA9A0, ov108_021EA98C, 4);
    thunk_ClearMainOAM(*((u32*)r4));
    thunk_ClearSubOAM(*((u32*)r4));
}




void ov108_021E83C8(void) {
    // str r1, [r4, r0]
}




void ov108_021E83F0(void) {
    SpriteManager_New(*((u32*)(r0 + (0xd3 << 2))));
    // str r0, [r4, r1]
    SpriteSystem_InitSprites(*((u32*)(r4 + ((0x35 << 4) - 4))), *((u32*)(r4 + (0x35 << 4))), 0x8c);
    // str r0, [sp]
    sub_0200D2A4(*((u32*)(r4 + (0xd3 << 2))), *((u32*)(r4 + ((0xd3 << 2) + 4))), ov108_021EA97C, 2);
    SpriteManager_GetSpriteList(*((u32*)(r4 + (0x35 << 4))));
    ov108_021E853C(*((u32*)(r4 + (0xd2 << 2))), r0);
}




void ov108_021E844C(void) {
    // str r1, [r4, r0]
}




void ov108_021E846C(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov108_021E8490(void) {
}




void ov108_021E84A4(void) {
    // str r3, [sp]
    // str r5, [r4]
    // ldr r0, [sp]
}




void ov108_021E84DC(void) {
}




void ov108_021E84F8(void) {
    // sub r2, #0x10
    // str r1, [sp]
    // add r3, #0x12
    // str r1, [sp, #4]
}




void ov108_021E852C(void) {
}




void ov108_021E853C(void) {
}




void ov108_021E8540(void) {
    // str r3, [sp, #0x2c]
    // str r0, [r1]
    // str r3, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // add r0, #0xc
    // str r2, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    // add r1, sp, #0x68
    // add r1, r1, r3
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r1, [sp, #0x40]
    // ldr r1, [sp, #0x84]
    // str r0, [sp, #0x3c]
    // add r0, r0, r1
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // add r0, sp, #0x30
    // add r2, sp, #0x68
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x84]
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // add r0, sp, #0x30
    // str r0, [r4]
}




void ov108_021E8674(void) {
}




void ov108_021E867C(void) {
    // str r0, [sp]
    // add r0, sp, #8
    // strb r2, [r0]
    *((u8*)(r0 + 1)) = *((u8*)(ov108_021EA978 + 1));
    *((u8*)(r0 + 2)) = *((u8*)(ov108_021EA978 + 2));
    *((u8*)(r0 + 3)) = *((u8*)(ov108_021EA978 + 3));
    // ldr r0, [sp]
    // ldr r2, [sp]
    // ldr r1, [sp]
    // add r1, #0x18
    G2dRenderer_Init(*((u16*)(r0 + 0xc)), *((u8*)(ov108_021EA978 + 3)), *((u32*)*((u8*)(ov108_021EA978 + 2))));
    // ldr r1, [sp]
    *((u32*)(r1 + 0x10)) = r0;
    // str r0, [sp, #4]
    // add r7, sp, #8
    // ldr r2, [sp]
    // ldr r1, [sp, #4]
    Create2DGfxResObjMan(*((u8*)r7), *((u32*)r2));
    // str r0, [r5, r1]
    // ldr r1, [sp]
    Create2DGfxResObjList(*((u8*)r7), *((u32*)(0x51 << 2)));
    // str r0, [r5, r1]
    // str r4, [r0, r2]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    ov108_021E8758((*((u32*)(*((u32*)(r5 + r6)) + 4)) + 1), (0 + 1), (0 + 4), *((u32*)(r5 + r6)));
}




void ov108_021E8718(void) {
    // sub r6, #0x10
}




void ov108_021E8758(void) {
    // add r0, r7, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, #0x12
    // str r0, [sp, #8]
    // str r0, [r1, r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, #0x10
    // str r0, [r1]
    // str r1, [sp]
    // sub r0, #0x10
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [r1]
}



