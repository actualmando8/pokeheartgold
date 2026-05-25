/* Decompiled from asm/overlay_15.s */
#include "global.h"

void Bag_Init(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r2, [r0]
    // ldr r1, _021F95EC ; =0xFFFFE0FF
    // ldr r3, _021F95F0 ; =0x04001000
    // and r2, r1
    // str r2, [r0]
    // ldr r2, [r3]
    // add r0, #0x50
    // and r1, r2
    // str r1, [r3]
    // mov r1, #0
    // strh r1, [r0]
    // add r3, #0x50
    // mov r2, #0x42
    // strh r1, [r3]
    // mov r0, #3
    // mov r1, #6
    // lsl r2, r2, #0xc
    // bl Heap_Create
    // ldr r1, _021F95F4 ; =0x0000094C
    // add r0, r5, #0
    // mov r2, #6
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _021F95F4 ; =0x0000094C
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl BagApp_GetSaveStructPtrs
    // mov r0, #6
    // bl BgConfig_Alloc
    // str r0, [r4]
    // mov r0, #0x8f
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl PlayerProfile_GetTrainerGender
    // ldr r1, _021F95F8 ; =0x00000615
    // mov r3, #0
    // strb r0, [r4, r1]
    // mov r1, #6
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #3
    // mov r0, #2
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // mov r0, #3
    // mov r1, #8
    // bl SetKeyRepeatTimers
    // add r0, r4, #0
    // bl ov15_021F9DB4
    // add r0, r4, #0
    // bl ov15_021F9CBC
    // add r0, r4, #0
    // bl ov15_021FA008
    // add r0, r4, #0
    // bl ov15_021F9D28
    // add r0, r4, #0
    // bl ov15_021FA620
    // bl ov15_021F9984
    // ldr r0, [r4]
    // bl ov15_021F99A4
    // add r0, r4, #0
    // bl ov15_021F9AE4
    // bl sub_020210BC
    // mov r0, #4
    // bl sub_02021148
    // add r0, r4, #0
    // bl ov15_021FE020
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // add r0, r4, #0
    // bl ov15_021FE4C8
    // add r0, r4, #0
    // bl ov15_021FE528
    // add r0, r4, #0
    // bl ov15_021FEA5C
    // add r0, r4, #0
    // bl ov15_021FE874
    // add r0, r4, #0
    // bl ov15_021F9F08
    // add r0, r4, #0
    // mov r1, #0
    // bl ov15_021FF29C
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r3, [r4, r0]
    // add r0, r3, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // add r2, r1, #0
    // mul r2, r0
    // add r0, r3, #0
    // add r1, r3, #0
    // add r0, #0xa
    // add r1, #8
    // add r0, r0, r2
    // add r1, r1, r2
    // add r2, r3, r2
    // ldrb r2, [r2, #0xd]
    // bl ov15_021FA044
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r3, [r4, r0]
    // add r0, r3, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // add r2, r1, #0
    // mul r2, r0
    // add r0, r3, #0
    // add r1, r3, #0
    // add r0, #0xa
    // add r1, #8
    // add r0, r0, r2
    // add r1, r1, r2
    // add r2, r3, r2
    // ldrb r2, [r2, #0xd]
    // mov r3, #6
    // bl ov15_021FA070
    // add r0, r4, #0
    // bl ov15_021FF850
    // add r0, r4, #0
    // bl ov15_021FA074
    // mov r1, #0
    // add r2, r0, #0
    // add r0, r4, #0
    // add r3, r1, #0
    // bl ov15_021FD574
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r3, [r4, r0]
    // add r0, r4, #0
    // add r1, r3, #0
    // add r1, #0x64
    // ldrb r2, [r1]
    // mov r1, #0xc
    // mul r1, r2
    // add r1, r3, r1
    // mov r2, #0xa
    // ldrsh r1, [r1, r2]
    // sub r2, #0xb
    // mov r3, #0
    // bl ov15_021FF364
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // add r1, #0x64
    // ldrb r1, [r1]
    // bl ov15_02200030
    // mov r2, #0x8d
    // lsl r2, r2, #2
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // add r2, #0x64
    // ldrb r2, [r2]
    // mov r1, #1
    // bl ov15_021FD404
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r3, [r4, r0]
    // add r0, r3, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // add r2, r1, #0
    // mul r2, r0
    // add r3, r3, r2
    // mov r2, #0xa
    // ldrb r1, [r3, #0xd]
    // ldrsh r2, [r3, r2]
    // add r0, r4, #0
    // mov r3, #0
    // bl ov15_021FF6BC
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r5, [r4, r0]
    // add r0, r4, #0
    // bl ov15_021FA074
    // add r1, r5, #4
    // add r5, #0x64
    // add r2, r0, #0
    // ldrb r5, [r5]
    // mov r3, #0xc
    // add r0, r4, #0
    // mul r3, r5
    // add r1, r1, r3
    // mov r3, #1
    // bl ov15_02200140
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r2, [r4, r0]
    // add r0, r2, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // mul r0, r1
    // add r0, r2, r0
    // ldrh r0, [r0, #8]
    // ldr r1, _021F95FC ; =0x00000644
    // add r0, #8
    // str r0, [r4, r1]
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov15_021FFECC
    // add r0, r4, #0
    // bl ov15_021FA170
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r0, #0x65
    // ldrb r0, [r0]
    // add r0, #0xfc
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _021F95B6
    // add r0, r4, #0
    // bl ov15_021FF1E0
    // add r0, r4, #0
    // bl ov15_021FD93C
    // ldr r0, _021F9600 ; =ov15_021F995C
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // mov r1, #0
    // mov r0, #0x33
    // add r2, r1, #0
    // bl Sound_SetSceneAndPlayBGM
    // bl sub_0203A964
    // ldr r2, _021F9604 ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // mov r0, #4
    // mov r1, #1
    // bl ToggleBgLayer
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _021F95EC: .word 0xFFFFE0FF
    // _021F95F0: .word 0x04001000
    // _021F95F4: .word 0x0000094C
    // _021F95F8: .word 0x00000615
    // _021F95FC: .word 0x00000644
    // _021F9600: .word ov15_021F995C
    // _021F9604: .word 0x04000304
    // TODO: decompile
}




BOOL Bag_Main(void) {
    OverlayManager_GetData();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F9624: ; jump table
    IsPaletteFadeFinished((*((u16*)(*((u32*)r4) + 6)) << 0x10));
    // ldr r0, [r5, r0]
    // add r0, #0x65
    // ldrb r0, [r0]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    ov15_021FA1BC(1);
    // str r0, [r4]
    ov15_021FA93C();
    // ldr r0, [r5, r0]
    // add r0, #0x65
    // ldrb r0, [r0]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    ov15_021FAE48(1);
    // str r0, [r4]
    ov15_021FB5AC();
    // str r0, [r4]
    ov15_021FBD50();
    // str r0, [r4]
    ov15_021FBF98();
    // str r0, [r4]
    ov15_021FBFC0();
    // str r0, [r4]
    ov15_021FBFF8();
    // str r0, [r4]
    ov15_021FC01C();
    // str r0, [r4]
    ov15_021FC140();
    // str r0, [r4]
    ov15_021FC164();
    // str r0, [r4]
    ov15_021FB700();
    // str r0, [r4]
    ov15_021FB820();
    // str r0, [r4]
    ov15_021FC41C();
    // str r0, [r4]
    ov15_021FC784();
    // str r0, [r4]
    ov15_021FC7EC();
    // str r0, [r4]
    ov15_021FCD80();
    // str r0, [r4]
    ov15_021FCDE4();
    // str r0, [r4]
    ov15_021FCFC8();
    // str r0, [r4]
    ov15_021FD058();
    // str r0, [r4]
    ov15_021FD0E8();
    // str r0, [r4]
    ov15_021FD10C();
    // str r0, [r4]
    ov15_021FD24C();
    // str r0, [r4]
    ov15_021FD2FC();
    // str r0, [r4]
    ov15_021FD3AC();
    // str r0, [r4]
    ov15_021FC2E0();
    // str r0, [r4]
    ov15_021FA4F8();
    // str r0, [r4]
    ov15_021FB604();
    // str r0, [r4]
    ov15_021FB654();
    // str r0, [r4]
    ov15_021FA578(1);
    // str r0, [r4]
    // mvn r1, r1
    ov15_021FA578(0);
    // str r0, [r4]
    ov15_021FB060();
    // str r0, [r4]
    ov15_021FAFFC();
    // str r0, [r4]
    ov15_021FCB64();
    // str r0, [r4]
    ov15_021FD850();
    // str r0, [r4]
    sub_020880CC(1, 6);
    // str r0, [r4]
    IsPaletteFadeFinished(0x25);
    ov15_021FF8D4(r5);
    // ldr r0, [r5, r0]
    SpriteSystem_DrawSprites((0x93 << 2));
    ov15_021FDC88(r5);
}




void Bag_Exit(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // bl ov15_021FDC6C
    // add r0, r4, #0
    // bl ov15_021FF894
    // ldr r0, _021F98EC ; =0x0000068C
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // mov r0, #0x69
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // add r0, r4, #0
    // bl ov15_021FA0D8
    // add r0, r4, #0
    // bl ov15_021F9EA8
    // add r0, r4, #0
    // bl ov15_021FE154
    // ldr r0, [r4]
    // bl ov15_021F9A8C
    // bl sub_02021238
    // bl GF_DestroyVramTransferManager
    // add r0, r4, #0
    // bl ov15_021FEB64
    // add r0, r4, #0
    // bl ov15_021FE504
    // add r0, r4, #0
    // bl ov15_021FE8A4
    // add r0, r4, #0
    // bl ov15_021FA028
    // ldr r0, _021F98F0 ; =0x000005E4
    // ldr r0, [r4, r0]
    // bl String_Delete
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // mov r0, #0xbe
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // mov r0, #0xbb
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl MessagePrinter_Delete
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl MessageFormat_Delete
    // mov r0, #0x91
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl NARC_Delete
    // add r0, r5, #0
    // bl OverlayManager_FreeData
    // bl sub_02004B10
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #6
    // bl Heap_Destroy
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _021F98EC: .word 0x0000068C
    // _021F98F0: .word 0x000005E4
    // TODO: decompile
}




void BagApp_GetSaveStructPtrs(void) {
    // ldr r0, [r4, r0]
    Save_Bag_Get(*((u32*)(0x8d << 2)));
    // str r0, [r4, r1]
    // ldr r0, [r4, r0]
    Save_PlayerData_GetProfile(*((u32*)((0x8e << 2) - 4)), (0x8e << 2));
    // str r0, [r4, r1]
    // sub r1, #8
    // ldr r0, [r4, r1]
    Save_PlayerData_GetOptionsAddr(*((u32*)r0), (0x8f << 2));
    // str r0, [r4, r1]
}




void BagApp_GetSaveRoamers(void) {
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // ldr r3, _021F9938 ; =Save_Roamers_Get
    // ldr r0, [r0]
    // bx r3
    // _021F9938: .word Save_Roamers_Get
    // TODO: decompile
}




void BagApp_GetRepelStepCountAddr(void) {
}




void BagApp_SetFlute(void) {
}




void ov15_021F995C(void) {
    // push {r3, lr}
    // ldr r0, [r0]
    // bl DoScheduledBgGpuUpdates
    // bl GF_RunVramTransferTasks
    // bl SpriteSystem_TransferOam
    // ldr r3, _021F997C ; =0x027E0000
    // ldr r1, _021F9980 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r3, pc}
    // nop
    // _021F997C: .word 0x027E0000
    // _021F9980: .word 0x00003FF8
    // TODO: decompile
}




void ov15_021F9984(void) {
}




void ov15_021F99A4(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // ldr r5, _021F9A68 ; =ov15_02200518
    // add r3, sp, #4
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r2, _021F9A6C ; =ov15_022006CC
    // add r0, r4, #0
    // mov r1, #1
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r2, _021F9A70 ; =ov15_022006E8
    // add r0, r4, #0
    // mov r1, #2
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r2, _021F9A74 ; =ov15_02200704
    // add r0, r4, #0
    // mov r1, #3
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #1
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #6
    // bl BG_ClearCharDataRange
    // ldr r2, _021F9A78 ; =ov15_02200720
    // add r0, r4, #0
    // mov r1, #4
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r2, _021F9A7C ; =ov15_0220073C
    // add r0, r4, #0
    // mov r1, #5
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r2, _021F9A80 ; =ov15_02200758
    // add r0, r4, #0
    // mov r1, #6
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r2, _021F9A84 ; =ov15_02200774
    // add r0, r4, #0
    // mov r1, #7
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #6
    // bl BG_ClearCharDataRange
    // mov r0, #7
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #6
    // bl BG_ClearCharDataRange
    // mov r1, #0
    // ldr r0, _021F9A88 ; =0x04000050
    // mov r2, #8
    // add r3, r1, #0
    // str r1, [sp]
    // bl G2x_SetBlendAlpha_
    // add sp, #0x14
    // pop {r4, r5, pc}
    // _021F9A68: .word ov15_02200518
    // _021F9A6C: .word ov15_022006CC
    // _021F9A70: .word ov15_022006E8
    // _021F9A74: .word ov15_02200704
    // _021F9A78: .word ov15_02200720
    // _021F9A7C: .word ov15_0220073C
    // _021F9A80: .word ov15_02200758
    // _021F9A84: .word ov15_02200774
    // _021F9A88: .word 0x04000050
    // TODO: decompile
}




void ov15_021F9A8C(void) {
}




void ov15_021F9AE4(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0xf
    // mov r1, #6
    // bl NARC_New
    // mov r1, #0x91
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #6
    // str r0, [sp, #0xc]
    // ldr r2, [r4]
    // mov r0, #0xf
    // mov r1, #7
    // mov r3, #2
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #6
    // str r0, [sp, #0xc]
    // ldr r2, [r4]
    // mov r0, #0xf
    // mov r1, #0x36
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnData
    // ldr r0, _021F9C60 ; =0x00000615
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // bne _021F9B4A
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #6
    // str r0, [sp, #0xc]
    // ldr r2, [r4]
    // mov r0, #0xf
    // mov r1, #0x5e
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnData
    // b _021F9B62
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #6
    // str r0, [sp, #0xc]
    // ldr r2, [r4]
    // mov r0, #0xf
    // mov r1, #0x5d
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnData
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #0xf
    // mov r1, #8
    // add r3, r2, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #6
    // mov r3, #0x1a
    // str r0, [sp, #4]
    // mov r0, #0xf
    // mov r1, #0x11
    // mov r2, #0
    // lsl r3, r3, #4
    // bl GfGfxLoader_GXLoadPal
    // mov r1, #0x16
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #6
    // bl LoadFontPal1
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // ldr r2, _021F9C64 ; =0x000003F7
    // mov r1, #1
    // mov r3, #0xe
    // bl LoadUserFrameGfx1
    // mov r0, #9
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // ldr r2, _021F9C68 ; =0x000003D9
    // mov r1, #1
    // mov r3, #0xc
    // bl LoadUserFrameGfx2
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #0xf
    // mov r1, #0x26
    // mov r2, #4
    // bl GfGfxLoader_GXLoadPal
    // mov r1, #0x16
    // mov r0, #4
    // lsl r1, r1, #4
    // mov r2, #6
    // bl LoadFontPal1
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #6
    // str r3, [sp, #0xc]
    // ldr r2, [r4]
    // mov r0, #0xf
    // mov r1, #0x2e
    // bl GfGfxLoader_LoadCharData
    // ldr r2, _021F9C6C ; =0x00000694
    // mov r0, #0xf
    // mov r1, #0x28
    // add r2, r4, r2
    // mov r3, #6
    // bl GfGfxLoader_GetPlttData
    // ldr r2, _021F9C70 ; =0x0000068C
    // mov r1, #0x29
    // str r0, [r4, r2]
    // add r2, #0xc
    // mov r0, #0xf
    // add r2, r4, r2
    // mov r3, #6
    // bl GfGfxLoader_GetPlttData
    // mov r1, #0x69
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // mov r0, #0x80
    // mov r2, #4
    // str r0, [sp]
    // mov r0, #6
    // add r3, r2, #0
    // str r0, [sp, #4]
    // mov r0, #0xf
    // mov r1, #8
    // add r3, #0xfc
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #9
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // ldr r2, _021F9C74 ; =0x000003E2
    // mov r1, #4
    // mov r3, #0xc
    // bl LoadUserFrameGfx2
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _021F9C60: .word 0x00000615
    // _021F9C64: .word 0x000003F7
    // _021F9C68: .word 0x000003D9
    // _021F9C6C: .word 0x00000694
    // _021F9C70: .word 0x0000068C
    // _021F9C74: .word 0x000003E2
    // TODO: decompile
}




void ov15_021F9C78(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0xf, 0x36, *((u32*)r0), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0xf, 9, *((u32*)r2), 2);
}




void ov15_021F9CBC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xa
    // mov r3, #6
    // bl NewMsgDataFromNarc
    // mov r1, #0x2f
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // mov r0, #1
    // mov r1, #2
    // mov r2, #0
    // mov r3, #6
    // bl MessagePrinter_New
    // mov r1, #0xbb
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #6
    // bl MessageFormat_New
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xde
    // mov r3, #6
    // bl NewMsgDataFromNarc
    // mov r2, #0xbe
    // lsl r2, r2, #2
    // str r0, [r4, r2]
    // mov r0, #0
    // mov r1, #0x1b
    // sub r2, #0xa
    // mov r3, #6
    // bl NewMsgDataFromNarc
    // mov r1, #0xbf
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #1
    // lsl r0, r0, #8
    // mov r1, #6
    // bl String_New
    // ldr r1, _021F9D24 ; =0x000005E4
    // str r0, [r4, r1]
    // pop {r4, pc}
    // _021F9D24: .word 0x000005E4
    // TODO: decompile
}




void ov15_021F9D28(void) {
    // push {r3, r4, r5, r6}
    // ldr r2, _021F9D5C ; =0x00000614
    // mov r1, #0
    // strb r1, [r0, r2]
    // add r4, r2, #0
    // mov r2, #0x8d
    // lsl r2, r2, #2
    // mov r3, #0xc
    // add r5, r1, #0
    // ldr r6, [r0, r2]
    // mul r5, r3
    // add r5, r6, r5
    // ldr r5, [r5, #4]
    // cmp r5, #0
    // beq _021F9D4C
    // ldrb r5, [r0, r4]
    // add r5, r5, #1
    // strb r5, [r0, r4]
    // add r1, r1, #1
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // cmp r1, #8
    // blo _021F9D38
    // pop {r3, r4, r5, r6}
    // bx lr
    // nop
    // _021F9D5C: .word 0x00000614
    // TODO: decompile
}




void ov15_021F9D60(void) {
    // ldr r0, [r0, r3]
    // add r0, #0x64
    // ldrb r3, [r0]
    // mul r0, r3
    // ldr r2, [r4, r0]
    // ldrh r0, [r2, r0]
    // add r0, r2, r0
}




void ov15_021F9D8C(void) {
    // add r3, r1, #0
    // add r1, r2, #0
    // add r2, r3, #0
    // ldr r3, _021F9D98 ; =ReadMsgDataIntoString
    // bx r3
    // nop
    // _021F9D98: .word ReadMsgDataIntoString
    // TODO: decompile
}




void ov15_021F9D9C(void) {
}




void ov15_021F9DB4(void) {
    // ldr r1, [r7, r0]
    // add r1, #0x64
    // strb r5, [r1]
    // ldr r0, [r7, r0]
    // mul r0, r1
    // add r3, r4, r0
    // ldr r0, [r4, r0]
    *((u16*)(r3 + 4)) = 0;
    *((u16*)(r3 + 6)) = 0;
    // mul r0, r1
    // ldr r0, [r4, r0]
    // ldr r0, [r7, r0]
    // add r0, #0x64
    // strb r2, [r0]
    // mul r0, r5
    // add r6, r4, r0
    // ldr r0, [r4, r0]
    // ldr r0, [r7, r0]
    // add r2, sp, #0
    // add r2, #1
    // add r3, sp, #0
    BagCursor_Field_PocketGetPosition(*((u32*)((0x8d << 2) + 0x6c)), *((u8*)(r6 + 8)), (((0 + 1) << 0x10) >> 0x10));
    // add r0, sp, #0
    *((u16*)(r6 + 4)) = *((u8*)(r0 + 1));
    // add r0, sp, #0
    // ldrb r0, [r0]
    *((u16*)(r6 + 6)) = *((u8*)(r0 + 1));
    // ldr r0, [r7, r0]
    BagCursor_Field_GetPocket(*((u32*)((0x8d << 2) + 0x6c)));
    // mul r1, r0
    // ldr r1, [r4, r1]
    // mul r1, r2
    // ldr r1, [r4, r1]
    // mul r3, r2
    // add r5, r4, r3
    // ldr r3, [r4, r3]
    // ldr r0, [r7, r0]
    // add r0, #0x64
    // strb r1, [r0]
}




void ov15_021F9EA8(void) {
    // ldr r1, [r6, r0]
    // str r0, [sp]
    // ldrsh r3, [r5, r7]
    // ldr r0, [r6, r0]
    BagCursor_Field_PocketSetPosition(*((u32*)((0x8d << 2) + 0x6c)), *((u8*)((r1 + 4) + 8)), ((*((u16*)((r1 + 4) + 4)) << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    // add r5, #0xc
    // ldr r1, [r6, r0]
    // add r1, #0x64
    // ldrb r2, [r1]
    // mul r3, r1
    // ldr r1, [sp]
    // add r1, r1, r3
    BagCursor_Field_SetPocket(*((u32*)(r1 + 0x6c)), *((u8*)(0xc + 8)), r2);
}




void ov15_021F9F08(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // str r0, [sp]
    // ldr r0, [r0, r1]
    // add r2, r0, #4
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // mul r0, r1
    // add r4, r2, r0
    // ldrb r1, [r4, #8]
    // cmp r1, #3
    // bne _021F9F82
    // ldr r0, _021FA000 ; =ov15_022008B0
    // mov r6, #0
    // ldrb r0, [r0, r1]
    // cmp r0, #0
    // bls _021F9F7E
    // ldr r0, [sp]
    // add r5, r6, #0
    // str r0, [sp, #4]
    // add r7, r0, #0
    // ldr r0, [r4]
    // ldrh r3, [r0, r5]
    // add r1, r0, r5
    // cmp r3, #0
    // beq _021F9F7E
    // ldrh r0, [r1, #2]
    // cmp r0, #0
    // beq _021F9F7E
    // mov r0, #0xbf
    // ldr r1, [sp]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0x35
    // ldr r2, [sp, #4]
    // lsl r1, r1, #4
    // ldr r1, [r2, r1]
    // add r2, r3, #0
    // mov r3, #6
    // bl ov15_021F9D9C
    // ldr r0, [r4]
    // add r6, r6, #1
    // ldrh r1, [r0, r5]
    // ldr r0, _021FA004 ; =0x000006A4
    // add r5, r5, #4
    // strh r1, [r7, r0]
    // ldr r0, [sp, #4]
    // ldrb r1, [r4, #8]
    // add r0, r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021FA000 ; =ov15_022008B0
    // add r7, r7, #2
    // ldrb r0, [r0, r1]
    // cmp r6, r0
    // blo _021F9F38
    // strb r6, [r4, #9]
    // b _021F9FDC
    // ldr r0, _021FA000 ; =ov15_022008B0
    // mov r6, #0
    // ldrb r0, [r0, r1]
    // cmp r0, #0
    // bls _021F9FDA
    // ldr r0, [sp]
    // add r5, r6, #0
    // str r0, [sp, #8]
    // add r7, r0, #0
    // ldr r0, [r4]
    // ldrh r3, [r0, r5]
    // add r1, r0, r5
    // cmp r3, #0
    // beq _021F9FDA
    // ldrh r0, [r1, #2]
    // cmp r0, #0
    // beq _021F9FDA
    // mov r0, #0xbe
    // ldr r1, [sp]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0x35
    // ldr r2, [sp, #8]
    // lsl r1, r1, #4
    // ldr r1, [r2, r1]
    // add r2, r3, #0
    // mov r3, #6
    // bl ov15_021F9D8C
    // ldr r0, [r4]
    // add r6, r6, #1
    // ldrh r1, [r0, r5]
    // ldr r0, _021FA004 ; =0x000006A4
    // add r5, r5, #4
    // strh r1, [r7, r0]
    // ldr r0, [sp, #8]
    // ldrb r1, [r4, #8]
    // add r0, r0, #4
    // str r0, [sp, #8]
    // ldr r0, _021FA000 ; =ov15_022008B0
    // add r7, r7, #2
    // ldrb r0, [r0, r1]
    // cmp r6, r0
    // blo _021F9F94
    // strb r6, [r4, #9]
    // ldrb r0, [r4, #9]
    // cmp r0, #0
    // bne _021F9FE6
    // mov r1, #0
    // b _021F9FF2
    // sub r0, r0, #1
    // mov r1, #6
    // bl _s32_div_f
    // mov r1, #6
    // mul r1, r0
    // mov r0, #6
    // ldrsh r0, [r4, r0]
    // cmp r0, r1
    // ble _021F9FFC
    // strh r1, [r4, #6]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021FA000: .word ov15_022008B0
    // _021FA004: .word 0x000006A4
    // TODO: decompile
}




void ov15_021FA008(void) {
    String_New(0x12, 6);
    // str r0, [r5, r6]
}




void ov15_021FA028(void) {
}




void ov15_021FA044(void) {
    // ldrsh r3, [r4, r0]
    // ldrh r0, [r1]
    // add r0, r3, r0
    _s32_div_f((r2 - 1), 6);
    // mul r1, r0
    // strh r1, [r4]
    // ldrsh r1, [r4, r0]
    // strh r0, [r4]
}




void ov15_021FA070(void) {
    // bx lr
    // TODO: decompile
}




void ov15_021FA074(void) {
    // ldr r2, [r0, r1]
    // add r0, #0x64
    // ldrb r1, [r0]
    // mul r0, r1
    // add r2, r2, r0
    // ldrsh r0, [r2, r0]
    // sub r0, r1, r0
}




void ov15_021FA098(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _021FA0D4 ; =0x00000672
    // ldrb r4, [r0, r1]
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r5, [r0, r1]
    // add r0, r4, #0
    // mov r1, #6
    // bl _s32_div_f
    // add r1, r5, #0
    // add r1, #0x64
    // ldrb r2, [r1]
    // mov r1, #0xc
    // mul r1, r2
    // add r2, r5, r1
    // mov r1, #0xa
    // ldrsh r3, [r2, r1]
    // mov r1, #6
    // add r2, r0, #0
    // mul r2, r1
    // cmp r3, r2
    // bne _021FA0CE
    // add r0, r4, #0
    // bl _s32_div_f
    // b _021FA0D0
    // sub r1, r1, #7
    // add r0, r1, #0
    // pop {r3, r4, r5, pc}
    // _021FA0D4: .word 0x00000672
    // TODO: decompile
}




void ov15_021FA0D8(void) {
    // str r2, [r0, r1]
}




void ov15_021FA0E4(void) {
    // ldr r3, [r0, r2]
    // sub r1, #8
    // add r0, #0x64
    // ldrb r2, [r0]
    // mul r0, r2
    // add r0, r3, r0
    *((u16*)(0xc + 8)) = r1;
}




void ov15_021FA104(void) {
    // add r2, r1, #0
    // sub r2, #0xe
    // cmp r2, #1
    // bhi _021FA110
    // mov r0, #0
    // bx lr
    // cmp r1, #7
    // bgt _021FA124
    // ldr r1, _021FA128 ; =0x00000644
    // ldr r0, [r0, r1]
    // cmp r0, #8
    // blt _021FA124
    // cmp r0, #0xd
    // bgt _021FA124
    // mov r0, #0
    // bx lr
    // mov r0, #1
    // bx lr
    // _021FA128: .word 0x00000644
    // TODO: decompile
}




void ov15_021FA12C(void) {
    // push {r3, r4}
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r3, [r0, r1]
    // add r1, r3, #0
    // add r1, #0x64
    // ldrb r2, [r1]
    // mov r1, #0xc
    // add r3, r3, #4
    // mul r1, r2
    // add r1, r3, r1
    // mov r3, #6
    // ldrsh r4, [r1, r3]
    // ldr r3, _021FA168 ; =0x00000644
    // ldr r0, [r0, r3]
    // add r3, r4, r0
    // ldr r0, _021FA16C ; =ov15_022008B0
    // sub r3, #8
    // ldrb r0, [r0, r2]
    // cmp r0, r3
    // bhi _021FA15C
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // ldr r1, [r1]
    // lsl r0, r3, #2
    // ldrh r0, [r1, r0]
    // pop {r3, r4}
    // bx lr
    // nop
    // _021FA168: .word 0x00000644
    // _021FA16C: .word ov15_022008B0
    // TODO: decompile
}




void ov15_021FA170(void) {
    // push {r4, lr}
    // ldr r1, _021FA1B8 ; =0x00000644
    // add r4, r0, #0
    // ldr r2, [r4, r1]
    // cmp r2, #8
    // blt _021FA19C
    // cmp r2, #0xd
    // bgt _021FA19C
    // bl ov15_021FA12C
    // add r2, r0, #0
    // beq _021FA192
    // add r0, r4, #0
    // add r1, r4, #4
    // bl ov15_021FECA0
    // pop {r4, pc}
    // add r0, r4, #0
    // add r1, r4, #4
    // bl ov15_021FECC4
    // pop {r4, pc}
    // cmp r2, #0
    // blt _021FA1AE
    // cmp r2, #7
    // bgt _021FA1AE
    // add r0, r4, #0
    // add r1, r4, #4
    // bl ov15_021FECD8
    // pop {r4, pc}
    // add r0, r4, #0
    // add r1, r4, #4
    // bl ov15_021FECC4
    // pop {r4, pc}
    // _021FA1B8: .word 0x00000644
    // TODO: decompile
}




void ov15_021FA1BC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // ldr r1, _021FA4A4 ; =gSystem
    // mov r2, #0x40
    // ldr r3, [r1, #0x4c]
    // add r5, r0, #0
    // mov r4, #0
    // tst r2, r3
    // beq _021FA1DE
    // ldr r0, _021FA4A8 ; =0x00000644
    // add r4, r4, #1
    // ldr r1, [r5, r0]
    // lsl r2, r1, #2
    // ldr r1, _021FA4AC ; =ov15_02200640
    // ldrb r1, [r1, r2]
    // str r1, [r5, r0]
    // b _021FA38C
    // mov r2, #0x80
    // tst r2, r3
    // beq _021FA1F4
    // ldr r0, _021FA4A8 ; =0x00000644
    // add r4, r4, #1
    // ldr r1, [r5, r0]
    // lsl r2, r1, #2
    // ldr r1, _021FA4B0 ; =ov15_02200641
    // ldrb r1, [r1, r2]
    // str r1, [r5, r0]
    // b _021FA38C
    // mov r2, #0x20
    // add r6, r3, #0
    // tst r6, r2
    // beq _021FA246
    // ldr r1, _021FA4A8 ; =0x00000644
    // ldr r3, _021FA4B4 ; =ov15_02200642
    // ldr r1, [r5, r1]
    // lsl r6, r1, #2
    // ldrb r3, [r3, r6]
    // cmp r3, #0xe
    // bne _021FA21E
    // mov r1, #2
    // str r1, [sp]
    // mov r1, #0xe
    // add r2, sp, #0xc
    // mov r3, #1
    // str r4, [sp, #4]
    // bl ov15_021FA73C
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // cmp r1, #0x10
    // beq _021FA274
    // cmp r1, #0
    // blt _021FA23E
    // cmp r1, #8
    // bge _021FA23E
    // sub r2, #0x21
    // bl ov15_021FA6C0
    // ldr r1, _021FA4A8 ; =0x00000644
    // ldr r2, [r5, r1]
    // cmp r2, r0
    // beq _021FA274
    // str r0, [r5, r1]
    // add r4, r4, #1
    // b _021FA38C
    // ldr r0, _021FA4A8 ; =0x00000644
    // add r4, r4, #1
    // str r3, [r5, r0]
    // b _021FA38C
    // mov r2, #0x10
    // tst r3, r2
    // beq _021FA29A
    // ldr r1, _021FA4A8 ; =0x00000644
    // ldr r2, _021FA4B8 ; =ov15_02200643
    // ldr r1, [r5, r1]
    // lsl r3, r1, #2
    // ldrb r2, [r2, r3]
    // cmp r2, #0xf
    // bne _021FA270
    // mov r1, #2
    // str r1, [sp]
    // add r2, sp, #8
    // mov r1, #0xf
    // add r2, #3
    // mov r3, #1
    // str r4, [sp, #4]
    // bl ov15_021FA73C
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // cmp r1, #0x10
    // bne _021FA276
    // b _021FA38C
    // cmp r1, #0
    // blt _021FA292
    // cmp r1, #8
    // bge _021FA292
    // mov r2, #1
    // bl ov15_021FA6C0
    // ldr r1, _021FA4A8 ; =0x00000644
    // ldr r2, [r5, r1]
    // cmp r2, r0
    // beq _021FA38C
    // str r0, [r5, r1]
    // add r4, r4, #1
    // b _021FA38C
    // ldr r0, _021FA4A8 ; =0x00000644
    // add r4, r4, #1
    // str r2, [r5, r0]
    // b _021FA38C
    // ldr r3, [r1, #0x48]
    // lsl r1, r2, #5
    // tst r1, r3
    // beq _021FA314
    // ldr r1, _021FA4A8 ; =0x00000644
    // ldr r1, [r5, r1]
    // cmp r1, #0
    // blt _021FA2E6
    // cmp r1, #8
    // bge _021FA2E6
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // sub r2, #0x11
    // add r1, #0x64
    // ldrb r1, [r1]
    // bl ov15_021FA6C0
    // ldr r1, _021FA4A8 ; =0x00000644
    // str r0, [r5, r1]
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov15_021FFECC
    // mov r0, #2
    // str r0, [sp]
    // add r0, r4, #0
    // str r0, [sp, #4]
    // ldr r1, _021FA4A8 ; =0x00000644
    // add r2, sp, #8
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r2, #2
    // mov r3, #1
    // bl ov15_021FA73C
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // mov r2, #0
    // add r1, #0x64
    // ldrb r1, [r1]
    // add r0, r5, #0
    // mvn r2, r2
    // bl ov15_021FA6C0
    // add r1, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0
    // add r2, sp, #8
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r2, #2
    // mov r3, #1
    // bl ov15_021FA73C
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // add r2, #0xf0
    // add r1, r3, #0
    // tst r1, r2
    // beq _021FA38C
    // ldr r1, _021FA4A8 ; =0x00000644
    // ldr r1, [r5, r1]
    // cmp r1, #0
    // blt _021FA360
    // cmp r1, #8
    // bge _021FA360
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // mov r2, #1
    // add r1, #0x64
    // ldrb r1, [r1]
    // bl ov15_021FA6C0
    // ldr r1, _021FA4A8 ; =0x00000644
    // str r0, [r5, r1]
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov15_021FFECC
    // mov r0, #2
    // str r0, [sp]
    // add r0, r4, #0
    // str r0, [sp, #4]
    // ldr r1, _021FA4A8 ; =0x00000644
    // add r2, sp, #8
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r2, #1
    // mov r3, #1
    // bl ov15_021FA73C
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r1, #0x64
    // ldrb r1, [r1]
    // mov r2, #1
    // bl ov15_021FA6C0
    // add r1, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0
    // add r2, sp, #8
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r2, #1
    // mov r3, #1
    // bl ov15_021FA73C
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // ldr r1, _021FA4A8 ; =0x00000644
    // ldr r0, [r5, r1]
    // cmp r0, #0x11
    // bne _021FA3A0
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r0, #0x64
    // ldrb r0, [r0]
    // str r0, [r5, r1]
    // cmp r4, #0
    // beq _021FA3C4
    // ldr r0, _021FA4BC ; =0x000005DC
    // bl PlaySE
    // ldr r1, _021FA4A8 ; =0x00000644
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov15_021FFECC
    // ldr r1, _021FA4A8 ; =0x00000644
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov15_021FA0E4
    // add r0, r5, #0
    // bl ov15_021FA170
    // mov r1, #0
    // add r0, sp, #8
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov15_021FAC2C
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // beq _021FA440
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov15_021FA104
    // cmp r0, #0
    // beq _021FA426
    // cmp r4, #8
    // bhs _021FA408
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov15_021FA68C
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _021FA426
    // ldr r1, _021FA4A8 ; =0x00000644
    // add r0, r5, #0
    // str r4, [r5, r1]
    // ldr r1, [r5, r1]
    // bl ov15_021FFECC
    // b _021FA426
    // ldr r1, _021FA4A8 ; =0x00000644
    // add r0, r5, #0
    // str r4, [r5, r1]
    // ldr r1, [r5, r1]
    // bl ov15_021FFECC
    // ldr r0, _021FA4A8 ; =0x00000644
    // ldr r1, [r5, r0]
    // cmp r1, #8
    // blt _021FA426
    // cmp r1, #0xd
    // bgt _021FA426
    // add r0, r5, #0
    // bl ov15_021FA0E4
    // mov r0, #2
    // str r0, [sp]
    // mov r3, #1
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, sp, #8
    // str r3, [sp, #4]
    // bl ov15_021FA73C
    // cmp r0, #1
    // beq _021FA4DA
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // ldr r0, _021FA4A4 ; =gSystem
    // mov r3, #1
    // ldr r1, [r0, #0x48]
    // add r0, r1, #0
    // tst r0, r3
    // beq _021FA47E
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r1, _021FA4A8 ; =0x00000644
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r2, sp, #8
    // bl ov15_021FA73C
    // add r4, r0, #0
    // ldr r0, _021FA4A8 ; =0x00000644
    // ldr r1, [r5, r0]
    // cmp r1, #8
    // blt _021FA474
    // cmp r1, #0xd
    // bgt _021FA474
    // add r0, r5, #0
    // bl ov15_021FA0E4
    // cmp r4, #1
    // beq _021FA4DA
    // add sp, #0x10
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #2
    // tst r1, r0
    // beq _021FA4DA
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r1, #0x10
    // add r2, sp, #8
    // bl ov15_021FA73C
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov15_021FD774
    // ldr r0, _021FA4A8 ; =0x00000644
    // b _021FA4C0
    // nop
    // _021FA4A4: .word gSystem
    // _021FA4A8: .word 0x00000644
    // _021FA4AC: .word ov15_02200640
    // _021FA4B0: .word ov15_02200641
    // _021FA4B4: .word ov15_02200642
    // _021FA4B8: .word ov15_02200643
    // _021FA4BC: .word 0x000005DC
    // ldr r1, [r5, r0]
    // cmp r1, #8
    // blt _021FA4D0
    // cmp r1, #0xd
    // bgt _021FA4D0
    // add r0, r5, #0
    // bl ov15_021FA0E4
    // cmp r4, #1
    // beq _021FA4DA
    // add sp, #0x10
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // add r0, sp, #8
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _021FA4F2
    // add r0, r5, #0
    // mov r1, #0x14
    // mov r2, #0x29
    // mov r3, #0x1b
    // bl ov15_021FD810
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}




void ov15_021FA4F8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x8d
    // add r5, r0, #0
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r6, r1, #4
    // add r1, #0x64
    // ldrb r2, [r1]
    // mov r1, #0xc
    // add r7, r2, #0
    // mul r7, r1
    // mov r2, #0
    // mov r1, #2
    // add r3, r2, #0
    // add r4, r6, r7
    // bl ov15_021FD574
    // ldr r2, _021FA574 ; =0x00000644
    // mov r1, #6
    // ldr r2, [r5, r2]
    // ldrsh r1, [r4, r1]
    // add r0, r5, #0
    // sub r2, #8
    // bl ov15_021FF4EC
    // ldr r1, _021FA574 ; =0x00000644
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // sub r1, #8
    // bl ov15_022002B4
    // add r0, r5, #0
    // bl ov15_021FB14C
    // mov r0, #6
    // ldrsh r3, [r4, r0]
    // ldr r0, _021FA574 ; =0x00000644
    // ldr r1, [r6, r7]
    // ldr r2, [r5, r0]
    // add r2, r3, r2
    // sub r2, #8
    // lsl r2, r2, #2
    // ldrh r2, [r1, r2]
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r1, #0x66
    // strh r2, [r1]
    // mov r2, #6
    // ldrsh r3, [r4, r2]
    // ldr r2, [r5, r0]
    // ldr r1, [r6, r7]
    // add r2, r3, r2
    // sub r2, #8
    // lsl r2, r2, #2
    // add r1, r1, r2
    // ldrh r1, [r1, #2]
    // add r0, #0x3e
    // strh r1, [r5, r0]
    // mov r0, #4
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FA574: .word 0x00000644
    // TODO: decompile
}




void ov15_021FA578(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r3, r0, #4
    // add r0, #0x64
    // ldrb r2, [r0]
    // mov r0, #0xc
    // mul r0, r2
    // add r4, r3, r0
    // cmp r1, #0
    // ble _021FA5A8
    // mov r0, #6
    // ldrsh r0, [r4, r0]
    // add r1, r0, #6
    // ldrb r0, [r4, #9]
    // cmp r1, r0
    // bge _021FA5A2
    // strh r1, [r4, #6]
    // b _021FA5C2
    // mov r0, #0
    // strh r0, [r4, #6]
    // b _021FA5C2
    // mov r1, #6
    // ldrsh r0, [r4, r1]
    // sub r0, r0, #6
    // bmi _021FA5B4
    // strh r0, [r4, #6]
    // b _021FA5C2
    // ldrb r0, [r4, #9]
    // sub r0, r0, #1
    // bl _s32_div_f
    // mov r1, #6
    // mul r1, r0
    // strh r1, [r4, #6]
    // ldr r0, _021FA618 ; =0x00000671
    // ldrb r0, [r5, r0]
    // cmp r0, #1
    // bne _021FA5E0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov15_021FAD80
    // ldr r1, _021FA61C ; =0x0000066C
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov15_021FFF34
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov15_021FA6F4
    // add r0, r5, #0
    // bl ov15_021FA170
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r0, #0x65
    // ldrb r0, [r0]
    // cmp r0, #1
    // beq _021FA60A
    // cmp r0, #2
    // beq _021FA606
    // cmp r0, #3
    // beq _021FA60E
    // b _021FA612
    // mov r0, #0x10
    // pop {r3, r4, r5, pc}
    // mov r0, #0xe
    // pop {r3, r4, r5, pc}
    // mov r0, #0x1a
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _021FA618: .word 0x00000671
    // _021FA61C: .word 0x0000066C
    // TODO: decompile
}




void ov15_021FA620(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021FA648 ; =0x00000614
    // ldrb r2, [r4, r0]
    // mov r0, #0xa
    // add r1, r2, #0
    // mul r1, r0
    // mov r0, #0x5a
    // sub r0, r0, r1
    // add r1, r2, #1
    // bl _s32_div_f
    // add r1, r0, #6
    // ldr r0, _021FA64C ; =0x00000617
    // strb r1, [r4, r0]
    // ldrb r1, [r4, r0]
    // add r0, r0, #1
    // add r1, r1, #4
    // strb r1, [r4, r0]
    // pop {r4, pc}
    // _021FA648: .word 0x00000614
    // _021FA64C: .word 0x00000617
    // TODO: decompile
}




void ov15_021FA650(void) {
    // push {r4, lr}
    // ldr r1, _021FA680 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #2
    // lsl r1, r1, #0xc
    // tst r1, r2
    // beq _021FA67C
    // ldr r3, _021FA684 ; =_02201480
    // ldr r1, [r3]
    // add r4, r1, #1
    // ldr r1, _021FA688 ; =_02201300
    // str r4, [r3]
    // ldr r2, [r1]
    // cmp r4, r2
    // blt _021FA672
    // mov r1, #0
    // str r1, [r3]
    // ldr r3, _021FA684 ; =_02201480
    // mov r1, #1
    // ldr r3, [r3]
    // bl ov15_021FD574
    // mov r0, #0
    // pop {r4, pc}
    // _021FA680: .word gSystem
    // _021FA684: .word _02201480
    // _021FA688: .word _02201300
    // TODO: decompile
}




void ov15_021FA68C(void) {
    // ldr r5, [r0, r2]
    // add r0, r5, r4
    // add r2, #0xc
    // add r4, #0xc
    // mvn r0, r0
}




void ov15_021FA6C0(void) {
    // add r5, r5, r6
    // bpl _021FA6D2
    ov15_021FA68C(r0, 0);
    // mvn r1, r1
}




void ov15_021FA6F4(void) {
    ov15_021FA074();
    ov15_021FD574(r5, 0, r0, 0);
    // ldrsh r1, [r4, r2]
    ov15_021FF364(r5, (6 - 7), 0);
    // ldrsh r2, [r4, r2]
    ov15_021FF6BC(r5, *((u8*)(r4 + 9)), 6, 0);
    ov15_021FA074(r5);
    ov15_02200140(r5, r4, r0, 1);
}




void ov15_021FA73C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // add r7, r2, #0
    // mov r6, #1
    // cmp r1, #0x10
    // bls _021FA74A
    // b _021FA92A
    // add r2, r1, r1
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _021FA756: ; jump table
    // bl ov15_021FA68C
    // sub r1, r6, #2
    // cmp r0, r1
    // bne _021FA786
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // add r1, r2, #0
    // add r1, #0x64
    // ldrb r1, [r1]
    // cmp r0, r1
    // bne _021FA7A0
    // ldr r1, [sp, #0x1c]
    // cmp r1, #0
    // bne _021FA7A0
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r2, #0x64
    // strb r0, [r2]
    // add r0, r4, #0
    // bl ov15_021F9F08
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r2, r0, #4
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // mul r0, r1
    // add r5, r2, r0
    // add r0, r4, #0
    // bl ov15_021FA074
    // mov r1, #0
    // add r2, r0, #0
    // add r0, r4, #0
    // add r3, r1, #0
    // bl ov15_021FD574
    // mov r2, #6
    // ldrsh r1, [r5, r2]
    // add r0, r4, #0
    // sub r2, r2, #7
    // mov r3, #0
    // bl ov15_021FF364
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // add r1, #0x64
    // ldrb r1, [r1]
    // bl ov15_02200030
    // mov r2, #6
    // ldrb r1, [r5, #9]
    // ldrsh r2, [r5, r2]
    // add r0, r4, #0
    // mov r3, #0
    // bl ov15_021FF6BC
    // add r0, r4, #0
    // bl ov15_021FA074
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r3, #1
    // bl ov15_02200140
    // mov r2, #0x8d
    // lsl r2, r2, #2
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // add r2, #0x64
    // ldrb r2, [r2]
    // mov r1, #1
    // bl ov15_021FD404
    // ldr r0, _021FA930 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov15_021FA170
    // ldr r0, _021FA934 ; =0x00000644
    // ldr r1, [r4, r0]
    // cmp r1, #8
    // blt _021FA838
    // add r0, r4, #0
    // bl ov15_021FA0E4
    // add r0, r4, #0
    // bl ov15_021FDF88
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // ldr r0, _021FA938 ; =0x00000808
    // add r1, #0x64
    // ldrb r1, [r1]
    // add r0, r4, r0
    // mov r2, #7
    // add r1, r1, #1
    // bl ov15_021FDAF4
    // b _021FA92A
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r2, [r4, r0]
    // sub r1, #8
    // add r3, r2, #0
    // add r3, #0x64
    // ldrb r5, [r3]
    // mov r3, #0xc
    // add r0, r2, #4
    // mul r3, r5
    // add r3, r0, r3
    // mov r0, #6
    // ldrsh r0, [r3, r0]
    // add r0, r0, r1
    // ldrb r1, [r3, #9]
    // cmp r0, r1
    // bge _021FA88A
    // ldr r1, [r3]
    // lsl r0, r0, #2
    // ldrh r0, [r1, r0]
    // add r2, #0x66
    // strh r0, [r2]
    // ldr r0, _021FA930 ; =0x000005DC
    // strb r6, [r7]
    // bl PlaySE
    // add r0, r4, #0
    // bl ov15_021FA170
    // b _021FA92A
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r2, [r4, r0]
    // add r0, r2, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // mul r0, r1
    // add r0, r2, r0
    // ldrb r0, [r0, #0xd]
    // cmp r0, #6
    // bls _021FA92A
    // ldr r0, _021FA930 ; =0x000005DC
    // bl PlaySE
    // mov r0, #0x1e
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x12
    // mov r2, #9
    // mov r3, #8
    // bl ov15_021FD7D0
    // add r6, r0, #0
    // b _021FA92A
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r2, [r4, r0]
    // add r0, r2, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // mul r0, r1
    // add r0, r2, r0
    // ldrb r0, [r0, #0xd]
    // cmp r0, #6
    // bls _021FA92A
    // ldr r0, _021FA930 ; =0x000005DC
    // bl PlaySE
    // mov r0, #0x1f
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x11
    // mov r2, #9
    // mov r3, #8
    // bl ov15_021FD7D0
    // add r6, r0, #0
    // b _021FA92A
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // mov r3, #0
    // add r2, #0x66
    // strh r3, [r2]
    // ldr r1, [r4, r1]
    // mov r2, #5
    // add r1, #0x68
    // strh r2, [r1]
    // ldr r1, [sp, #0x1c]
    // bl ov15_021FD774
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    // lsl r0, r0, #6
    // bl PlaySE
    // mov r0, #0x24
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x13
    // mov r2, #9
    // mov r3, #8
    // bl ov15_021FD7D0
    // add r6, r0, #0
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FA930: .word 0x000005DC
    // _021FA934: .word 0x00000644
    // _021FA938: .word 0x00000808
    // TODO: decompile
}




void ov15_021FA93C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _021FAA10 ; =0x00000619
    // add r4, r5, r0
    // bl System_GetTouchHeld
    // cmp r0, #0
    // bne _021FA958
    // ldrb r1, [r4, #7]
    // mov r0, #0x70
    // bic r1, r0
    // mov r0, #0x10
    // orr r0, r1
    // strb r0, [r4, #7]
    // add r0, r5, #0
    // bl ov15_021FAC40
    // add r6, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // beq _021FA96E
    // ldrb r0, [r4]
    // cmp r6, r0
    // beq _021FA97A
    // ldrb r1, [r4, #7]
    // mov r0, #0xf
    // bic r1, r0
    // mov r0, #1
    // orr r0, r1
    // strb r0, [r4, #7]
    // add r0, r5, #0
    // bl ov15_021FAA18
    // cmp r0, #0
    // bne _021FA9FE
    // ldrb r0, [r4, #7]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1d
    // cmp r0, #1
    // bne _021FA9FE
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // beq _021FA9FE
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldrb r1, [r4]
    // add r0, #0x64
    // strb r1, [r0]
    // lsl r0, r6, #0x18
    // ldrb r1, [r4]
    // lsr r0, r0, #0x18
    // cmp r1, r0
    // bls _021FA9B4
    // mov r0, #0
    // strb r0, [r4, #1]
    // strb r0, [r4, #2]
    // b _021FA9C6
    // cmp r1, r0
    // bhs _021FA9C2
    // mov r0, #1
    // strb r0, [r4, #1]
    // mov r0, #0
    // strb r0, [r4, #2]
    // b _021FA9C6
    // mov r0, #2
    // strb r0, [r4, #1]
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // strb r0, [r4]
    // ldrb r2, [r4, #7]
    // mov r1, #0xf
    // bic r2, r1
    // strb r2, [r4, #7]
    // ldrb r2, [r4, #7]
    // mov r1, #0x70
    // bic r2, r1
    // strb r2, [r4, #7]
    // mov r1, #0
    // strb r1, [r4, #4]
    // mov r1, #0x67
    // lsl r1, r1, #4
    // strb r0, [r5, r1]
    // add r0, r5, #0
    // bl ov15_021FF950
    // mov r1, #0x67
    // lsl r1, r1, #4
    // ldrb r1, [r5, r1]
    // ldr r0, _021FAA14 ; =0x00000808
    // mov r2, #7
    // add r0, r5, r0
    // add r1, r1, #1
    // bl ov15_021FDAF4
    // add r0, r5, #0
    // bl ov15_021FAB34
    // add r0, r5, #0
    // bl ov15_021FF964
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _021FAA10: .word 0x00000619
    // _021FAA14: .word 0x00000808
    // TODO: decompile
}




void ov15_021FAA18(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _021FAB28 ; =gSystem
    // add r5, r0, #0
    // ldr r0, _021FAB2C ; =0x00000619
    // ldr r2, [r1, #0x48]
    // mov r1, #0x20
    // add r4, r5, r0
    // tst r1, r2
    // beq _021FAAA6
    // sub r1, r0, #5
    // ldrb r1, [r5, r1]
    // cmp r1, #1
    // bne _021FAA36
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // sub r0, #0x3d
    // bl PlaySE
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldrb r1, [r4]
    // add r0, #0x64
    // strb r1, [r0]
    // ldrb r0, [r4]
    // cmp r0, #0
    // beq _021FAA5C
    // sub r0, r0, #1
    // strb r0, [r4]
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldrb r1, [r5, r0]
    // sub r1, r1, #1
    // b _021FAA6A
    // ldr r0, _021FAB30 ; =0x00000614
    // ldrb r1, [r5, r0]
    // sub r1, r1, #1
    // strb r1, [r4]
    // ldrb r1, [r5, r0]
    // add r0, #0x5c
    // sub r1, r1, #1
    // strb r1, [r5, r0]
    // mov r0, #0
    // strb r0, [r4, #2]
    // strb r0, [r4, #1]
    // ldrb r1, [r4, #7]
    // mov r0, #0x70
    // bic r1, r0
    // mov r0, #0x10
    // orr r0, r1
    // strb r0, [r4, #7]
    // ldrb r1, [r4, #7]
    // mov r0, #0xf
    // bic r1, r0
    // mov r0, #1
    // orr r0, r1
    // strb r0, [r4, #7]
    // ldrb r1, [r4, #7]
    // mov r0, #0x80
    // bic r1, r0
    // strb r1, [r4, #7]
    // ldrb r0, [r4, #4]
    // cmp r0, #3
    // beq _021FAA9C
    // mov r0, #4
    // strb r0, [r4, #4]
    // add r0, r5, #0
    // bl ov15_021FF950
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r1, #0x10
    // tst r1, r2
    // beq _021FAB24
    // sub r1, r0, #5
    // ldrb r1, [r5, r1]
    // cmp r1, #1
    // bne _021FAAB8
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // sub r0, #0x3d
    // bl PlaySE
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldrb r1, [r4]
    // add r0, #0x64
    // strb r1, [r0]
    // ldrb r0, [r4]
    // ldr r1, _021FAB30 ; =0x00000614
    // add r2, r0, #1
    // ldrb r0, [r5, r1]
    // cmp r2, r0
    // bge _021FAAE2
    // add r0, r1, #0
    // strb r2, [r4]
    // add r0, #0x5c
    // ldrb r0, [r5, r0]
    // add r0, r0, #1
    // b _021FAAE6
    // mov r0, #0
    // strb r0, [r4]
    // add r1, #0x5c
    // strb r0, [r5, r1]
    // mov r0, #0
    // strb r0, [r4, #2]
    // mov r0, #1
    // strb r0, [r4, #1]
    // ldrb r2, [r4, #7]
    // mov r1, #0x70
    // bic r2, r1
    // mov r1, #0x10
    // orr r1, r2
    // strb r1, [r4, #7]
    // ldrb r2, [r4, #7]
    // mov r1, #0xf
    // bic r2, r1
    // orr r0, r2
    // strb r0, [r4, #7]
    // ldrb r1, [r4, #7]
    // mov r0, #0x80
    // bic r1, r0
    // strb r1, [r4, #7]
    // ldrb r0, [r4, #4]
    // cmp r0, #3
    // beq _021FAB1A
    // mov r0, #4
    // strb r0, [r4, #4]
    // add r0, r5, #0
    // bl ov15_021FF950
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _021FAB28: .word gSystem
    // _021FAB2C: .word 0x00000619
    // _021FAB30: .word 0x00000614
    // TODO: decompile
}




void ov15_021FAB34(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _021FAC28 ; =0x00000619
    // add r5, r0, #0
    // add r4, r5, r1
    // ldrb r1, [r4, #2]
    // cmp r1, #0
    // beq _021FAB4C
    // cmp r1, #1
    // beq _021FAB58
    // cmp r1, #2
    // beq _021FAC20
    // b _021FAC24
    // mov r0, #0
    // strb r0, [r4, #3]
    // ldrb r0, [r4, #2]
    // add r0, r0, #1
    // strb r0, [r4, #2]
    // b _021FAC24
    // ldrb r1, [r4, #3]
    // cmp r1, #8
    // bhs _021FAB64
    // add r0, r1, #1
    // strb r0, [r4, #3]
    // b _021FAC24
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // ldrb r2, [r4]
    // add r1, #0x64
    // strb r2, [r1]
    // bl ov15_021F9F08
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // add r0, r5, #0
    // add r2, r1, #0
    // add r2, #0x64
    // ldrb r3, [r2]
    // mov r2, #0xc
    // mul r2, r3
    // add r1, r1, r2
    // mov r2, #0xa
    // ldrsh r1, [r1, r2]
    // sub r2, #0xb
    // mov r3, #0
    // bl ov15_021FF364
    // add r0, r5, #0
    // bl ov15_021FA074
    // mov r1, #0
    // add r2, r0, #0
    // add r0, r5, #0
    // add r3, r1, #0
    // bl ov15_021FD574
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r1, #0x64
    // ldrb r1, [r1]
    // bl ov15_02200030
    // mov r2, #0x8d
    // lsl r2, r2, #2
    // ldr r2, [r5, r2]
    // add r0, r5, #0
    // add r2, #0x64
    // ldrb r2, [r2]
    // mov r1, #1
    // bl ov15_021FD404
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r3, [r5, r0]
    // add r0, r3, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // add r2, r1, #0
    // mul r2, r0
    // add r0, r3, #0
    // add r1, r3, #0
    // add r0, #0xa
    // add r1, #8
    // add r0, r0, r2
    // add r1, r1, r2
    // add r2, r3, r2
    // ldrb r2, [r2, #0xd]
    // bl ov15_021FA044
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r3, [r5, r0]
    // add r0, r3, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // add r2, r1, #0
    // mul r2, r0
    // add r0, r3, #0
    // add r1, r3, #0
    // add r0, #0xa
    // add r1, #8
    // add r0, r0, r2
    // add r1, r1, r2
    // add r2, r3, r2
    // ldrb r2, [r2, #0xd]
    // mov r3, #6
    // bl ov15_021FA070
    // ldrb r0, [r4, #2]
    // add r0, r0, #1
    // strb r0, [r4, #2]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _021FAC28: .word 0x00000619
    // TODO: decompile
}




void ov15_021FAC2C(void) {
    // ldr r0, _021FAC38 ; =ov15_02201314
    // lsl r1, r1, #2
    // ldr r3, _021FAC3C ; =TouchscreenHitbox_FindRectAtTouchNew
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021FAC38: .word ov15_02201314
    // _021FAC3C: .word TouchscreenHitbox_FindRectAtTouchNew
    // TODO: decompile
}




void ov15_021FAC40(void) {
    // mvn r0, r0
}




void ov15_021FAC48(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x8d
    // add r5, r0, #0
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r3, r1, #4
    // add r1, #0x64
    // ldrb r2, [r1]
    // mov r1, #0xc
    // mul r1, r2
    // add r3, r3, r1
    // ldr r1, _021FAD20 ; =0x00000671
    // mov r2, #1
    // strb r2, [r5, r1]
    // mov r2, #6
    // ldrsh r3, [r3, r2]
    // add r2, r1, #0
    // sub r2, #0x2d
    // ldr r2, [r5, r2]
    // add r1, r1, #1
    // add r2, r3, r2
    // sub r2, #8
    // strb r2, [r5, r1]
    // bl ov15_021FED60
    // add r0, r5, #0
    // bl ov15_021FB114
    // add r0, r5, #0
    // bl ov15_02200294
    // add r0, r5, #0
    // bl ov15_021FF560
    // mov r0, #0x61
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov15_021FF7AC
    // add r0, r5, #0
    // bl ov15_021FED58
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r2, r0, #4
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // mul r0, r1
    // add r4, r2, r0
    // add r0, r5, #0
    // bl ov15_021FA074
    // ldr r3, _021FAD24 ; =0x00000644
    // add r2, r0, #0
    // ldr r3, [r5, r3]
    // add r0, r5, #0
    // mov r1, #1
    // sub r3, #8
    // bl ov15_021FD574
    // ldr r2, _021FAD24 ; =0x00000644
    // mov r1, #6
    // ldr r2, [r5, r2]
    // ldrsh r1, [r4, r1]
    // add r0, r5, #0
    // sub r2, #8
    // mov r3, #1
    // bl ov15_021FF364
    // mov r2, #6
    // ldrb r1, [r4, #9]
    // ldrsh r2, [r4, r2]
    // add r0, r5, #0
    // mov r3, #0
    // bl ov15_021FF6BC
    // add r0, r5, #0
    // bl ov15_021FA074
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r3, #0
    // bl ov15_02200140
    // mov r2, #6
    // ldrsh r3, [r4, r2]
    // ldr r2, _021FAD24 ; =0x00000644
    // add r0, r5, #0
    // ldr r2, [r5, r2]
    // add r1, r4, #0
    // add r2, r3, r2
    // sub r2, #8
    // bl ov15_022001C4
    // ldr r1, _021FAD24 ; =0x00000644
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov15_021FFECC
    // ldr r0, _021FAD24 ; =0x00000644
    // ldr r1, [r5, r0]
    // add r0, #0x28
    // sub r1, #8
    // str r1, [r5, r0]
    // pop {r3, r4, r5, pc}
    // _021FAD20: .word 0x00000671
    // _021FAD24: .word 0x00000644
    // TODO: decompile
}




void ov15_021FAD28(void) {
    // ldr r1, _021FAD6C ; =gSystem
    // mov r2, #0x40
    // ldr r1, [r1, #0x48]
    // tst r2, r1
    // beq _021FAD3C
    // lsl r1, r0, #2
    // ldr r0, _021FAD70 ; =ov15_02200584
    // ldrb r0, [r0, r1]
    // sub r0, #8
    // bx lr
    // mov r2, #0x80
    // tst r2, r1
    // beq _021FAD4C
    // lsl r1, r0, #2
    // ldr r0, _021FAD74 ; =ov15_02200585
    // ldrb r0, [r0, r1]
    // sub r0, #8
    // bx lr
    // mov r2, #0x20
    // tst r2, r1
    // beq _021FAD5C
    // lsl r1, r0, #2
    // ldr r0, _021FAD78 ; =ov15_02200586
    // ldrb r0, [r0, r1]
    // sub r0, #8
    // bx lr
    // mov r2, #0x10
    // tst r1, r2
    // beq _021FAD6A
    // lsl r1, r0, #2
    // ldr r0, _021FAD7C ; =ov15_02200587
    // ldrb r0, [r0, r1]
    // sub r0, #8
    // bx lr
    // _021FAD6C: .word gSystem
    // _021FAD70: .word ov15_02200584
    // _021FAD74: .word ov15_02200585
    // _021FAD78: .word ov15_02200586
    // _021FAD7C: .word ov15_02200587
    // TODO: decompile
}




void ov15_021FAD80(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov15_021FA074
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov15_021FA098
    // add r3, r0, #0
    // add r0, r5, #0
    // mov r1, #1
    // add r2, r6, #0
    // bl ov15_021FD574
    // add r0, r5, #0
    // bl ov15_021FA098
    // mov r1, #6
    // add r2, r0, #0
    // ldrsh r1, [r4, r1]
    // add r0, r5, #0
    // mov r3, #1
    // bl ov15_021FF364
    // ldr r2, _021FADE4 ; =0x00000672
    // add r0, r5, #0
    // ldrb r2, [r5, r2]
    // add r1, r4, #0
    // bl ov15_022001C4
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r3, [r5, r0]
    // add r0, r3, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // add r2, r1, #0
    // mul r2, r0
    // add r3, r3, r2
    // mov r2, #0xa
    // ldrb r1, [r3, #0xd]
    // ldrsh r2, [r3, r2]
    // add r0, r5, #0
    // mov r3, #0
    // bl ov15_021FF6BC
    // pop {r4, r5, r6, pc}
    // nop
    // _021FADE4: .word 0x00000672
    // TODO: decompile
}




void ov15_021FADE8(void) {
    // push {r4, r5, r6, lr}
    // mov r4, #0
    // add r5, r1, #0
    // add r6, r0, #0
    // mvn r4, r4
    // cmp r5, #8
    // bhi _021FAE3A
    // add r1, r5, r5
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021FAE02: ; jump table
    // bl ov15_021FA074
    // cmp r0, r5
    // ble _021FAE28
    // ldr r0, _021FAE40 ; =0x0000066C
    // ldr r4, [r6, r0]
    // sub r0, #0x90
    // bl PlaySE
    // b _021FAE3A
    // ldr r0, _021FAE44 ; =0x000005F3
    // bl PlaySE
    // b _021FAE3A
    // mov r4, #0xe
    // b _021FAE3A
    // mov r4, #0xf
    // b _021FAE3A
    // sub r4, r4, #1
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _021FAE40: .word 0x0000066C
    // _021FAE44: .word 0x000005F3
    // TODO: decompile
}




void ov15_021FAE48(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r4, #0
    // add r2, r0, #4
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // mvn r4, r4
    // mul r0, r1
    // add r7, r2, r0
    // ldr r0, _021FAFE4 ; =0x0000066C
    // ldr r0, [r5, r0]
    // bl ov15_021FAD28
    // lsl r0, r0, #0x10
    // ldr r2, _021FAFE4 ; =0x0000066C
    // lsr r1, r0, #0x10
    // ldr r0, [r5, r2]
    // cmp r0, r1
    // beq _021FAE9C
    // ldr r0, _021FAFE8 ; =0x0000FFFA
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // cmp r0, #1
    // bhi _021FAE8C
    // add r0, r5, #0
    // bl ov15_021FADE8
    // add r4, r0, #0
    // b _021FAE9C
    // str r1, [r5, r2]
    // ldr r1, [r5, r2]
    // add r0, r5, #0
    // bl ov15_021FFF34
    // ldr r0, _021FAFEC ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #2
    // bl ov15_021FAC2C
    // add r6, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // beq _021FAF04
    // cmp r6, #8
    // bne _021FAEC6
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov15_021FADE8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov15_021FFF34
    // b _021FAF24
    // sub r0, r6, #6
    // cmp r0, #1
    // bhi _021FAED8
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov15_021FADE8
    // add r4, r0, #0
    // b _021FAF24
    // ldr r0, _021FAFE4 ; =0x0000066C
    // str r6, [r5, r0]
    // add r0, r5, #0
    // bl ov15_021FA074
    // cmp r0, r6
    // bls _021FAEF2
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov15_021FADE8
    // add r4, r0, #0
    // b _021FAEF8
    // ldr r0, _021FAFF0 ; =0x000005F3
    // bl PlaySE
    // ldr r1, _021FAFE4 ; =0x0000066C
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov15_021FFF34
    // b _021FAF24
    // ldr r0, _021FAFF4 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // beq _021FAF1C
    // ldr r1, _021FAFE4 ; =0x0000066C
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov15_021FADE8
    // add r4, r0, #0
    // b _021FAF24
    // mov r0, #2
    // tst r1, r0
    // beq _021FAF24
    // sub r4, r0, #4
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // bhi _021FAF3E
    // bhs _021FAF46
    // cmp r4, #0xf
    // bhi _021FAFAC
    // cmp r4, #0xe
    // blo _021FAFAC
    // beq _021FAF70
    // cmp r4, #0xf
    // beq _021FAF8E
    // b _021FAFAC
    // add r0, r0, #1
    // cmp r4, r0
    // beq _021FAFE0
    // b _021FAFAC
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    // lsl r0, r0, #6
    // bl PlaySE
    // ldr r0, _021FAFF8 ; =0x00000672
    // mov r1, #6
    // ldrb r0, [r5, r0]
    // bl _s32_div_f
    // mov r1, #6
    // mul r1, r0
    // strh r1, [r7, #6]
    // mov r0, #0x20
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0x13
    // mov r2, #9
    // mov r3, #8
    // bl ov15_021FD7D0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r7, #9]
    // cmp r0, #6
    // bls _021FAFE0
    // ldr r0, _021FAFEC ; =0x000005DC
    // bl PlaySE
    // mov r0, #0x1f
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0x11
    // mov r2, #9
    // mov r3, #8
    // bl ov15_021FD7D0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r7, #9]
    // cmp r0, #6
    // bls _021FAFE0
    // ldr r0, _021FAFEC ; =0x000005DC
    // bl PlaySE
    // mov r0, #0x1e
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0x12
    // mov r2, #9
    // mov r3, #8
    // bl ov15_021FD7D0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _021FAFEC ; =0x000005DC
    // bl PlaySE
    // ldr r1, _021FAFF8 ; =0x00000672
    // mov r2, #6
    // ldrb r0, [r5, r1]
    // sub r1, r1, #6
    // ldrsh r2, [r7, r2]
    // ldr r1, [r5, r1]
    // add r1, r2, r1
    // cmp r0, r1
    // bne _021FAFD2
    // add r0, r5, #0
    // mov r1, #0x14
    // mov r2, #0x29
    // mov r3, #0x21
    // bl ov15_021FD810
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // mov r1, #0x14
    // mov r2, #0x2a
    // mov r3, #0x21
    // bl ov15_021FD810
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #3
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FAFE4: .word 0x0000066C
    // _021FAFE8: .word 0x0000FFFA
    // _021FAFEC: .word 0x000005DC
    // _021FAFF0: .word 0x000005F3
    // _021FAFF4: .word gSystem
    // _021FAFF8: .word 0x00000672
    // TODO: decompile
}




void ov15_021FAFFC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // add r0, r1, #0
    // add r0, #0x64
    // ldrb r3, [r0]
    // mov r0, #0xc
    // add r1, r1, #4
    // mul r0, r3
    // add r5, r1, r0
    // mov r0, #6
    // ldr r1, _021FB05C ; =0x0000066C
    // ldrsh r6, [r5, r0]
    // ldr r2, [r4, r1]
    // add r1, r1, #6
    // add r2, r6, r2
    // lsl r2, r2, #0x10
    // ldrb r1, [r4, r1]
    // lsr r2, r2, #0x10
    // cmp r1, r2
    // beq _021FB050
    // str r0, [sp]
    // ldr r0, [r5]
    // bl MoveItemSlotInList
    // add r0, r4, #0
    // bl ov15_021F9F08
    // ldr r1, _021FB05C ; =0x0000066C
    // ldr r2, [r4, r1]
    // add r0, r1, #0
    // add r2, #8
    // sub r0, #0x28
    // str r2, [r4, r0]
    // sub r1, #0x28
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov15_021FA0E4
    // add r0, r4, #0
    // bl ov15_021FB060
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021FB05C: .word 0x0000066C
    // TODO: decompile
}




void ov15_021FB060(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0xd2
    // add r5, r0, #0
    // mov r3, #0
    // lsl r1, r1, #2
    // str r3, [r5, r1]
    // ldr r1, _021FB10C ; =0x00000671
    // strb r3, [r5, r1]
    // add r2, r1, #1
    // strb r3, [r5, r2]
    // add r1, r1, #3
    // str r3, [r5, r1]
    // bl ov15_021FB114
    // add r0, r5, #0
    // bl ov15_021F9F08
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r2, r0, #4
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // mul r0, r1
    // add r4, r2, r0
    // add r0, r5, #0
    // bl ov15_021FA074
    // mov r1, #0
    // add r2, r0, #0
    // add r0, r5, #0
    // add r3, r1, #0
    // bl ov15_021FD574
    // mov r2, #6
    // ldrsh r1, [r4, r2]
    // add r0, r5, #0
    // sub r2, r2, #7
    // mov r3, #0
    // bl ov15_021FF364
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r1, #0x64
    // ldrb r1, [r1]
    // bl ov15_02200030
    // mov r2, #0x8d
    // lsl r2, r2, #2
    // ldr r2, [r5, r2]
    // add r0, r5, #0
    // add r2, #0x64
    // ldrb r2, [r2]
    // mov r1, #1
    // bl ov15_021FD404
    // mov r2, #6
    // ldrb r1, [r4, #9]
    // ldrsh r2, [r4, r2]
    // add r0, r5, #0
    // mov r3, #0
    // bl ov15_021FF6BC
    // add r0, r5, #0
    // bl ov15_021FA074
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r3, #1
    // bl ov15_02200140
    // add r0, r5, #0
    // bl ov15_021FED24
    // ldr r1, _021FB110 ; =0x00000644
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov15_021FFECC
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _021FB10C: .word 0x00000671
    // _021FB110: .word 0x00000644
    // TODO: decompile
}




void ov15_021FB114(void) {
    // push {r4, lr}
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r2, [r0, r1]
    // add r4, r2, #4
    // add r2, #0x64
    // ldrb r3, [r2]
    // mov r2, #0xc
    // mul r2, r3
    // add r3, r4, r2
    // ldr r2, _021FB148 ; =0x00000671
    // ldrb r2, [r0, r2]
    // cmp r2, #0
    // beq _021FB146
    // ldrh r2, [r3, #4]
    // add r1, #0x1c
    // ldr r0, [r0, r1]
    // sub r2, r2, #1
    // lsl r2, r2, #4
    // add r2, #0x10
    // lsl r2, r2, #0x10
    // mov r1, #0xb1
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // pop {r4, pc}
    // _021FB148: .word 0x00000671
    // TODO: decompile
}




void ov15_021FB14C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // ldr r1, _021FB370 ; =_022004EC
    // add r4, r0, #0
    // ldrb r2, [r1]
    // add r0, sp, #0
    // strb r2, [r0]
    // ldrb r2, [r1, #1]
    // strb r2, [r0, #1]
    // ldrb r2, [r1, #2]
    // strb r2, [r0, #2]
    // ldrb r2, [r1, #3]
    // ldrb r1, [r1, #4]
    // strb r2, [r0, #3]
    // strb r1, [r0, #4]
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // add r0, #0x66
    // ldrh r0, [r0]
    // mov r2, #6
    // bl LoadItemDataOrGfx
    // add r7, r0, #0
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r2, [r4, r0]
    // add r3, r4, #0
    // add r0, r2, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // mul r0, r1
    // add r0, r2, r0
    // ldrb r5, [r0, #0xc]
    // mov r2, #0
    // mov r0, #0x7f
    // add r1, r2, #0
    // lsl r0, r0, #4
    // add r2, r2, #1
    // str r1, [r3, r0]
    // add r3, r3, #4
    // cmp r2, #5
    // blt _021FB19C
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // add r0, r1, #0
    // add r0, #0x65
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _021FB1B8
    // b _021FB2F8
    // add r0, r1, #0
    // add r0, #0x76
    // ldrh r0, [r0]
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0x11
    // ldr r0, _021FB374 ; =0x0000FFFE
    // add r0, r2, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // cmp r0, #1
    // bhi _021FB1E8
    // add r0, r1, #0
    // add r0, #0x64
    // ldrb r2, [r0]
    // mov r0, #0xc
    // mul r0, r2
    // add r0, r1, r0
    // ldrb r0, [r0, #0xc]
    // cmp r0, #5
    // bne _021FB280
    // mov r1, #2
    // add r0, sp, #0
    // strb r1, [r0]
    // b _021FB280
    // add r0, r7, #0
    // mov r1, #6
    // bl GetItemAttr_PreloadedItemData
    // cmp r0, #0
    // beq _021FB280
    // mov r2, #0x8d
    // lsl r2, r2, #2
    // ldr r1, [r4, r2]
    // sub r2, #0x72
    // add r0, r1, #0
    // add r0, #0x66
    // ldrh r0, [r0]
    // cmp r0, r2
    // bne _021FB21C
    // add r2, r1, #0
    // add r2, #0x76
    // ldrh r2, [r2]
    // lsl r2, r2, #0x1f
    // lsr r2, r2, #0x1f
    // cmp r2, #1
    // bne _021FB21C
    // mov r1, #1
    // add r0, sp, #0
    // strb r1, [r0]
    // b _021FB280
    // add r2, r1, #0
    // add r2, #0x64
    // ldrb r3, [r2]
    // mov r2, #0xc
    // mul r2, r3
    // add r2, r1, r2
    // ldrb r3, [r2, #0xc]
    // cmp r3, #5
    // bne _021FB236
    // mov r1, #2
    // add r0, sp, #0
    // strb r1, [r0]
    // b _021FB280
    // ldr r2, _021FB378 ; =0x000001C1
    // cmp r0, r2
    // bne _021FB244
    // mov r1, #4
    // add r0, sp, #0
    // strb r1, [r0]
    // b _021FB280
    // cmp r3, #4
    // bne _021FB25A
    // ldr r0, [r1, #0x70]
    // bl Leftover_CanPlantBerry
    // cmp r0, #1
    // bne _021FB25A
    // mov r1, #3
    // add r0, sp, #0
    // strb r1, [r0]
    // b _021FB280
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // sub r0, #0x3e
    // add r1, #0x66
    // ldrh r1, [r1]
    // cmp r1, r0
    // bne _021FB27A
    // bl SoundSys_GetGBSoundsState
    // cmp r0, #1
    // bne _021FB27A
    // mov r1, #0xf
    // add r0, sp, #0
    // strb r1, [r0]
    // b _021FB280
    // mov r1, #0
    // add r0, sp, #0
    // strb r1, [r0]
    // add r0, r7, #0
    // mov r1, #3
    // bl GetItemAttr_PreloadedItemData
    // cmp r0, #0
    // bne _021FB2AE
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r0, #0x66
    // ldrh r0, [r0]
    // bl ItemIdIsNotJohtoBall
    // cmp r0, #1
    // bne _021FB2A4
    // mov r1, #8
    // add r0, sp, #0
    // strb r1, [r0, #2]
    // cmp r5, #3
    // beq _021FB2AE
    // mov r1, #5
    // add r0, sp, #0
    // strb r1, [r0, #1]
    // add r0, r7, #0
    // mov r1, #4
    // bl GetItemAttr_PreloadedItemData
    // cmp r0, #0
    // beq _021FB310
    // mov r0, #0x8e
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Bag_GetRegisteredItem1
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // add r2, #0x66
    // ldrh r2, [r2]
    // cmp r2, r0
    // beq _021FB2E8
    // add r0, r1, #4
    // ldr r0, [r4, r0]
    // bl Bag_GetRegisteredItem2
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r1, #0x66
    // ldrh r1, [r1]
    // cmp r1, r0
    // bne _021FB2F0
    // mov r1, #7
    // add r0, sp, #0
    // strb r1, [r0, #1]
    // b _021FB310
    // mov r1, #6
    // add r0, sp, #0
    // strb r1, [r0, #1]
    // b _021FB310
    // cmp r0, #6
    // bne _021FB310
    // add r1, #0x66
    // ldrh r1, [r1]
    // add r0, r5, #0
    // bl ov15_021FD3F0
    // cmp r0, #1
    // bne _021FB310
    // mov r1, #0xe
    // add r0, sp, #0
    // strb r1, [r0]
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r0, #0x65
    // ldrb r0, [r0]
    // cmp r0, #6
    // beq _021FB32C
    // cmp r5, #3
    // beq _021FB32C
    // cmp r5, #4
    // beq _021FB32C
    // mov r1, #0xc
    // add r0, sp, #0
    // strb r1, [r0, #3]
    // mov r3, #0x7f
    // mov r1, #0xb
    // add r0, sp, #0
    // strb r1, [r0, #4]
    // ldr r6, _021FB37C ; =ov15_02201368
    // mov r2, #0
    // add r0, sp, #0
    // add r1, r4, #0
    // lsl r3, r3, #4
    // ldrb r5, [r0]
    // cmp r5, #0xff
    // beq _021FB34A
    // lsl r5, r5, #2
    // ldr r5, [r6, r5]
    // str r5, [r1, r3]
    // add r2, r2, #1
    // add r0, r0, #1
    // add r1, r1, #4
    // cmp r2, #5
    // blt _021FB33E
    // add r0, r4, #0
    // add r1, sp, #0
    // mov r2, #5
    // bl ov15_021FEB84
    // add r0, r4, #0
    // add r1, sp, #0
    // bl ov15_021FB380
    // add r0, r7, #0
    // bl Heap_Free
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FB370: .word _022004EC
    // _021FB374: .word 0x0000FFFE
    // _021FB378: .word 0x000001C1
    // _021FB37C: .word ov15_02201368
    // TODO: decompile
}




void ov15_021FB380(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, _021FB3E8 ; =0x0000066C
    // add r5, r0, #0
    // mov r2, #0
    // str r2, [r5, r1]
    // ldr r2, [r5, r1]
    // ldr r1, _021FB3EC ; =ov15_02201468
    // ldrb r1, [r1, r2]
    // bl ov15_021FFECC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov15_0220023C
    // mov r0, #0x61
    // mov r1, #3
    // lsl r0, r0, #2
    // lsl r1, r1, #8
    // ldrb r2, [r4]
    // add r0, r5, r0
    // add r1, r5, r1
    // bl ov15_021FF758
    // mov r0, #0x65
    // mov r1, #3
    // lsl r0, r0, #2
    // lsl r1, r1, #8
    // ldrb r2, [r4, #1]
    // add r0, r5, r0
    // add r1, r5, r1
    // bl ov15_021FF758
    // mov r0, #0x69
    // mov r1, #3
    // lsl r0, r0, #2
    // lsl r1, r1, #8
    // ldrb r2, [r4, #2]
    // add r0, r5, r0
    // add r1, r5, r1
    // bl ov15_021FF758
    // mov r0, #0x6d
    // mov r1, #3
    // lsl r0, r0, #2
    // lsl r1, r1, #8
    // ldrb r2, [r4, #3]
    // add r0, r5, r0
    // add r1, r5, r1
    // bl ov15_021FF758
    // pop {r3, r4, r5, pc}
    // _021FB3E8: .word 0x0000066C
    // _021FB3EC: .word ov15_02201468
    // TODO: decompile
}




void ov15_021FB3F0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _021FB4F8 ; =0x0000066C
    // mov r2, #0x40
    // ldr r1, [r5, r0]
    // ldr r0, _021FB4FC ; =gSystem
    // add r4, r1, #0
    // ldr r0, [r0, #0x48]
    // tst r2, r0
    // beq _021FB40C
    // ldr r0, _021FB500 ; =ov15_02200528
    // lsl r2, r1, #2
    // ldrb r4, [r0, r2]
    // b _021FB434
    // mov r2, #0x80
    // tst r2, r0
    // beq _021FB41A
    // ldr r0, _021FB504 ; =ov15_02200529
    // lsl r2, r1, #2
    // ldrb r4, [r0, r2]
    // b _021FB434
    // mov r2, #0x20
    // tst r2, r0
    // beq _021FB428
    // ldr r0, _021FB508 ; =ov15_0220052A
    // lsl r2, r1, #2
    // ldrb r4, [r0, r2]
    // b _021FB434
    // mov r2, #0x10
    // tst r0, r2
    // beq _021FB434
    // ldr r0, _021FB50C ; =ov15_0220052B
    // lsl r2, r1, #2
    // ldrb r4, [r0, r2]
    // cmp r4, r1
    // beq _021FB452
    // ldr r0, _021FB4F8 ; =0x0000066C
    // ldr r1, _021FB510 ; =ov15_02201468
    // str r4, [r5, r0]
    // ldrb r1, [r1, r4]
    // add r0, r5, #0
    // bl ov15_021FFECC
    // ldr r0, _021FB514 ; =0x000005DC
    // bl PlaySE
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // mov r1, #1
    // bl ov15_021FAC2C
    // add r6, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // beq _021FB4A4
    // add r0, r5, #0
    // mov r1, #1
    // bl ov15_021FD774
    // ldr r0, _021FB4F8 ; =0x0000066C
    // ldr r1, _021FB510 ; =ov15_02201468
    // str r6, [r5, r0]
    // ldrb r1, [r1, r6]
    // add r0, r5, #0
    // bl ov15_021FFECC
    // cmp r6, #4
    // bne _021FB48C
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    // lsl r0, r0, #6
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // lsl r0, r6, #2
    // add r1, r5, r0
    // mov r0, #0x7f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _021FB4F2
    // ldr r0, _021FB514 ; =0x000005DC
    // bl PlaySE
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, _021FB4FC ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // beq _021FB4DE
    // lsl r0, r4, #2
    // add r1, r5, r0
    // mov r0, #0x7f
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _021FB4CE
    // ldr r0, _021FB514 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0
    // bl ov15_021FD774
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // cmp r4, #4
    // bne _021FB4F2
    // ldr r0, _021FB514 ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // mov r0, #2
    // tst r0, r1
    // beq _021FB4F2
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    // lsl r0, r0, #6
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // _021FB4F8: .word 0x0000066C
    // _021FB4FC: .word gSystem
    // _021FB500: .word ov15_02200528
    // _021FB504: .word ov15_02200529
    // _021FB508: .word ov15_0220052A
    // _021FB50C: .word ov15_0220052B
    // _021FB510: .word ov15_02201468
    // _021FB514: .word 0x000005DC
    // TODO: decompile
}




void ov15_021FB518(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov15_021F9F08
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r2, r0, #4
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // mul r0, r1
    // add r4, r2, r0
    // add r0, r5, #0
    // bl ov15_021FA074
    // mov r1, #0
    // add r2, r0, #0
    // add r0, r5, #0
    // add r3, r1, #0
    // bl ov15_021FD574
    // mov r2, #6
    // ldrsh r1, [r4, r2]
    // add r0, r5, #0
    // sub r2, r2, #7
    // mov r3, #0
    // bl ov15_021FF364
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r1, #0x64
    // ldrb r1, [r1]
    // bl ov15_02200030
    // mov r2, #0x8d
    // lsl r2, r2, #2
    // ldr r2, [r5, r2]
    // add r0, r5, #0
    // add r2, #0x64
    // ldrb r2, [r2]
    // mov r1, #1
    // bl ov15_021FD404
    // mov r2, #6
    // ldrb r1, [r4, #9]
    // ldrsh r2, [r4, r2]
    // add r0, r5, #0
    // mov r3, #0
    // bl ov15_021FF6BC
    // add r0, r5, #0
    // bl ov15_021FA074
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r3, #0
    // bl ov15_02200140
    // ldr r1, _021FB5A8 ; =0x00000644
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov15_021FFECC
    // add r0, r5, #0
    // mov r1, #1
    // bl ov15_021F9C78
    // pop {r3, r4, r5, pc}
    // _021FB5A8: .word 0x00000644
    // TODO: decompile
}




void ov15_021FB5AC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // bl ov15_021FB3F0
    // add r1, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r1, r0
    // beq _021FB5C8
    // add r0, r0, #1
    // cmp r1, r0
    // beq _021FB5F8
    // b _021FB5DC
    // mov r0, #0x1c
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x13
    // mov r2, #9
    // mov r3, #8
    // bl ov15_021FD7D0
    // add sp, #4
    // pop {r3, r4, pc}
    // ldr r0, _021FB600 ; =0x00000948
    // mov r2, #9
    // str r1, [r4, r0]
    // add r1, #0x1c
    // mov r0, #0x1d
    // lsl r1, r1, #0x18
    // str r0, [sp]
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // mov r3, #8
    // bl ov15_021FD7D0
    // add sp, #4
    // pop {r3, r4, pc}
    // mov r0, #4
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021FB600: .word 0x00000948
    // TODO: decompile
}




void ov15_021FB604(void) {
    ov15_02200294();
    ov15_021FF560(r5);
    // add r0, r5, r0
    ov15_021FF7AC((0x61 << 2));
    // ldr r4, [r5, r0]
    ov15_021FA074(r5);
    // add r4, #0x64
    // ldrb r4, [r4]
    // mul r3, r4
    // add r1, r1, r3
    ov15_02200140(r5, (r4 + 4), r0, 0);
    ov15_021FE868(r5);
    ov15_021FED3C(r5);
    ov15_021FB518(r5);
}




void ov15_021FB654(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov15_02200294
    // mov r0, #0x61
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov15_021FF7AC
    // ldr r1, _021FB67C ; =0x00000948
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // lsl r1, r1, #2
    // add r2, r4, r1
    // mov r1, #0x7f
    // lsl r1, r1, #4
    // ldr r1, [r2, r1]
    // blx r1
    // pop {r4, pc}
    // nop
    // _021FB67C: .word 0x00000948
    // TODO: decompile
}




void ov15_021FB680(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r1, #0
    // bl ov15_021FD788
    // add r0, r4, #0
    // bl ov15_021FFF24
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #6
    // add r0, #0x66
    // ldrh r0, [r0]
    // add r2, r1, #0
    // bl GetItemAttr
    // add r1, r0, #0
    // lsl r1, r1, #0x10
    // mov r0, #2
    // lsr r1, r1, #0x10
    // bl GetItemFieldUseFunc
    // add r1, r0, #0
    // beq _021FB6EE
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r0, [r0, #0x70]
    // blx r1
    // add r3, r0, #0
    // beq _021FB6EE
    // mov r2, #0x8f
    // mov r0, #6
    // lsl r2, r2, #2
    // str r0, [sp]
    // ldr r0, [r4, r2]
    // sub r2, #8
    // ldr r2, [r4, r2]
    // ldr r1, _021FB6F8 ; =0x000005E4
    // add r2, #0x66
    // ldrh r2, [r2]
    // ldr r1, [r4, r1]
    // bl GetItemUseErrorMessage
    // add r0, r4, #0
    // mov r1, #0
    // bl ov15_021FEF48
    // ldr r1, _021FB6FC ; =0x00000616
    // add sp, #4
    // strb r0, [r4, r1]
    // mov r0, #0xc
    // pop {r3, r4, pc}
    // add r0, r4, #0
    // bl ov15_021FB784
    // add sp, #4
    // pop {r3, r4, pc}
    // _021FB6F8: .word 0x000005E4
    // _021FB6FC: .word 0x00000616
    // TODO: decompile
}




void ov15_021FB700(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021FB778 ; =0x00000616
    // ldrb r0, [r4, r0]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021FB772
    // ldr r0, _021FB77C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _021FB722
    // ldr r0, _021FB780 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x24]
    // cmp r0, #0
    // beq _021FB772
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r0, #0x65
    // ldrb r0, [r0]
    // cmp r0, #3
    // beq _021FB736
    // add r0, r4, #0
    // bl ov15_021FED3C
    // add r0, r4, #0
    // add r0, #0x34
    // mov r1, #1
    // bl ClearFrameAndWindow2
    // add r0, r4, #0
    // add r0, #0x34
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r4, #4
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // mov r1, #1
    // bl ov15_021FD788
    // add r0, r4, #0
    // bl ov15_021FB518
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r0, #0x65
    // ldrb r0, [r0]
    // cmp r0, #3
    // bne _021FB76E
    // mov r0, #0x1a
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0xc
    // pop {r4, pc}
    // nop
    // _021FB778: .word 0x00000616
    // _021FB77C: .word gSystem
    // _021FB780: .word gSystem + 0x40
    // TODO: decompile
}




void ov15_021FB784(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // add r3, r1, #4
    // add r1, #0x64
    // ldrb r2, [r1]
    // mov r1, #0xc
    // mul r1, r2
    // add r3, r3, r1
    // ldr r1, _021FB80C ; =0x0000067B
    // mov r2, #0
    // strb r2, [r4, r1]
    // ldrb r2, [r3, #8]
    // cmp r2, #3
    // bne _021FB7B0
    // ldr r2, _021FB810 ; =ov15_021FB830
    // add r0, r1, #1
    // str r2, [r4, r0]
    // mov r0, #0xd
    // pop {r4, pc}
    // ldr r2, [r4, r0]
    // sub r1, #0x97
    // ldr r0, [r2]
    // add r2, #0x66
    // ldrh r2, [r2]
    // ldr r1, [r4, r1]
    // mov r3, #6
    // bl TryFormatRegisteredKeyItemUseMessage
    // cmp r0, #1
    // bne _021FB7D6
    // add r0, r4, #0
    // mov r1, #0
    // bl ov15_021FEF48
    // ldr r1, _021FB814 ; =0x00000616
    // strb r0, [r4, r1]
    // mov r0, #0xc
    // pop {r4, pc}
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // add r1, #0x66
    // ldrh r1, [r1]
    // bl BagApp_TryUseItemInPlace
    // cmp r0, #1
    // bne _021FB7F4
    // ldr r1, _021FB818 ; =ov15_021FBBB0
    // ldr r0, _021FB81C ; =0x0000067C
    // str r1, [r4, r0]
    // mov r0, #0xd
    // pop {r4, pc}
    // mov r0, #1
    // mov r1, #6
    // bl sub_020880CC
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // add r0, #0x68
    // strh r1, [r0]
    // mov r0, #0x25
    // pop {r4, pc}
    // _021FB80C: .word 0x0000067B
    // _021FB810: .word ov15_021FB830
    // _021FB814: .word 0x00000616
    // _021FB818: .word ov15_021FBBB0
    // _021FB81C: .word 0x0000067C
    // TODO: decompile
}




void ov15_021FB820(void) {
    // push {r3, lr}
    // ldr r1, _021FB82C ; =0x0000067C
    // ldr r1, [r0, r1]
    // blx r1
    // pop {r3, pc}
    // nop
    // _021FB82C: .word 0x0000067C
    // TODO: decompile
}




void ov15_021FB830(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _021FB9C0 ; =0x0000067B
    // add r4, r0, #0
    // ldrb r0, [r4, r1]
    // cmp r0, #3
    // bhi _021FB936
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FB848: ; jump table
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r0, #0x66
    // ldrh r0, [r0]
    // bl TMHMGetMove
    // add r5, r0, #0
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // add r2, r5, #0
    // bl BufferMoveName
    // add r0, r5, #0
    // bl MoveIsHM
    // cmp r0, #1
    // ldr r2, _021FB9C4 ; =0x000005E4
    // bne _021FB88A
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // ldr r2, [r4, r2]
    // mov r1, #0x3c
    // bl ReadMsgDataIntoString
    // b _021FB898
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // ldr r2, [r4, r2]
    // mov r1, #0x3b
    // bl ReadMsgDataIntoString
    // add r0, r4, #0
    // mov r1, #0
    // bl ov15_021FEF48
    // ldr r1, _021FB9C8 ; =0x00000616
    // strb r0, [r4, r1]
    // mov r0, #1
    // add r1, #0x65
    // strb r0, [r4, r1]
    // b _021FB9BA
    // sub r1, #0x65
    // ldrb r0, [r4, r1]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021FB936
    // ldr r0, _021FB9CC ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _021FB8CA
    // ldr r0, _021FB9D0 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x24]
    // cmp r0, #0
    // beq _021FB9BA
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x3d
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0x34
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r0, #0xbd
    // ldr r1, _021FB9C4 ; =0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // add r2, r5, #0
    // bl StringExpandPlaceholders
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, #0
    // mov r1, #0
    // bl ov15_021FEF48
    // ldr r1, _021FB9C8 ; =0x00000616
    // strb r0, [r4, r1]
    // mov r0, #2
    // add r1, #0x65
    // strb r0, [r4, r1]
    // b _021FB9BA
    // sub r1, #0x65
    // ldrb r0, [r4, r1]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021FB9BA
    // add r0, r4, #0
    // bl ov15_021FF004
    // ldr r0, _021FB9C0 ; =0x0000067B
    // mov r1, #3
    // strb r1, [r4, r0]
    // b _021FB9BA
    // ldr r0, _021FB9D4 ; =0x00000804
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _021FB938
    // cmp r0, #2
    // beq _021FB956
    // b _021FB9BA
    // add r0, r4, #0
    // bl ov15_021FF058
    // mov r0, #1
    // mov r1, #6
    // bl sub_020880CC
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // add r0, #0x68
    // strh r1, [r0]
    // mov r0, #0x25
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov15_021FF058
    // add r0, r4, #0
    // bl ov15_021FED3C
    // add r0, r4, #0
    // add r0, #0x34
    // mov r1, #1
    // bl ClearFrameAndWindow2
    // add r0, r4, #0
    // add r0, #0x34
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r4, #4
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r5, [r4, r0]
    // add r0, r4, #0
    // bl ov15_021FA074
    // add r1, r5, #4
    // add r5, #0x64
    // add r2, r0, #0
    // ldrb r5, [r5]
    // mov r3, #0xc
    // add r0, r4, #0
    // mul r3, r5
    // add r1, r1, r3
    // mov r3, #0
    // bl ov15_02200140
    // add r0, r4, #0
    // bl ov15_021FE868
    // add r0, r4, #0
    // bl ov15_02200294
    // add r0, r4, #0
    // bl ov15_021FB518
    // add r0, r4, #0
    // mov r1, #1
    // bl ov15_021FD788
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0xd
    // pop {r3, r4, r5, pc}
    // nop
    // _021FB9C0: .word 0x0000067B
    // _021FB9C4: .word 0x000005E4
    // _021FB9C8: .word 0x00000616
    // _021FB9CC: .word gSystem
    // _021FB9D0: .word gSystem + 0x40
    // _021FB9D4: .word 0x00000804
    // TODO: decompile
}




void BagApp_TryUseItemInPlace(void) {
    // push {r3, r4, r5, lr}
    // mov r2, #0xbd
    // add r4, r0, #0
    // lsl r2, r2, #2
    // ldr r0, [r4, r2]
    // sub r2, #0xb8
    // add r5, r1, #0
    // ldr r2, [r4, r2]
    // mov r1, #0
    // bl BufferPlayersName
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // add r2, r5, #0
    // bl BufferItemName
    // cmp r5, #ITEM_BLACK_FLUTE
    // bne _021FBA20
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #msg_0010_00065
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl BagApp_SetFlute
    // mov r0, #0x1a
    // mov r1, #0
    // lsl r0, r0, #6
    // strh r1, [r4, r0]
    // b _021FBA7A
    // cmp r5, #ITEM_WHITE_FLUTE
    // bne _021FBA44
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #msg_0010_00064
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #2
    // bl BagApp_SetFlute
    // mov r0, #0x1a
    // mov r1, #0
    // lsl r0, r0, #6
    // strh r1, [r4, r0]
    // b _021FBA7A
    // cmp r5, #ITEM_MAX_REPEL
    // beq _021FBA50
    // cmp r5, #ITEM_SUPER_REPEL
    // beq _021FBA50
    // cmp r5, #ITEM_REPEL
    // bne _021FBA5C
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BagApp_TryUseRepel
    // add r5, r0, #0
    // b _021FBA7A
    // ldr r0, _021FBA94 ; =ITEM_GB_SOUNDS
    // cmp r5, r0
    // bne _021FBA76
    // add r0, r4, #0
    // add r1, r5, #0
    // bl BagApp_ToggleGBSounds
    // add r5, r0, #0
    // mov r0, #0x1a
    // mov r1, #0
    // lsl r0, r0, #6
    // strh r1, [r4, r0]
    // b _021FBA7A
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #0xbd
    // ldr r1, _021FBA98 ; =0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // add r2, r5, #0
    // bl StringExpandPlaceholders
    // add r0, r5, #0
    // bl String_Delete
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _021FBA94: .word ITEM_GB_SOUNDS
    // _021FBA98: .word 0x000005E4
    // TODO: decompile
}




void BagApp_TryUseRepel(void) {
    BagApp_GetSaveRoamers();
    RoamerSave_RepelNotInUse();
    // strh r1, [r4, r0]
    // ldr r0, [r4, r0]
    // mov r1, #msg_0010_00063
    NewString_ReadMsgData((0x2f << 4), 0);
    GetItemAttr(r5, 2, 6);
    BagApp_GetRepelStepCountAddr(r4, ((r0 << 0x18) >> 0x18));
    // strh r1, [r4, r0]
    // sub r0, #0x680-SEQ_SE_DP_CARD2
    PlaySE((0x680 << 6), 1);
    // ldr r0, [r4, r0]
    // mov r1, #msg_0010_00062
    NewString_ReadMsgData((0x2f << 4));
}




void BagApp_ToggleGBSounds(void) {
    SoundSys_GetGBSoundsState();
    SoundSys_ToggleGBSounds();
    // ldr r0, [r4, r0]
    // mov r1, #msg_0010_00105
    NewString_ReadMsgData((0x2f << 4));
    SoundSys_ToggleGBSounds();
    // ldr r0, [r4, r0]
    // mov r1, #msg_0010_00104
    NewString_ReadMsgData((0x2f << 4));
}




void ov15_021FBB28(void) {
    // ldr r2, [r4, r0]
    // add r0, #0x64
    // ldrb r1, [r0]
    // mul r3, r0
    // add r1, r2, r3
    // str r0, [sp]
    // add r2, #0x66
    // ldrh r2, [r2]
    // ldrh r3, [r4, r3]
    Pocket_TakeItem(*((u32*)(r1 + 4)), *((u8*)(r1 + 0xd)), (0x1a << 6));
    ov15_021F9F08(r4);
    // ldr r3, [r4, r0]
    // add r0, #0x64
    // ldrb r1, [r0]
    // mul r2, r0
    // add r0, #0xa
    // add r1, #8
    // add r0, r0, r2
    // add r1, r1, r2
    // add r2, r3, r2
    ov15_021FA044(r3, r3, *((u8*)(r1 + 0xd)));
    // ldr r2, [r4, r0]
    // add r0, #0x64
    // ldrb r1, [r0]
    // mul r3, r0
    // add r2, r2, r3
    // add r0, #0xa
    // add r1, #8
    // add r0, r0, r3
    // add r1, r1, r3
    ov15_021FA070(r2, r2, *((u8*)(r2 + 0xd)), 6);
}




void ov15_021FBBB0(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _021FBC5C ; =0x0000067B
    // add r5, r0, #0
    // ldrb r2, [r5, r1]
    // cmp r2, #0
    // beq _021FBBC2
    // cmp r2, #1
    // beq _021FBBD4
    // b _021FBC56
    // mov r1, #0
    // bl ov15_021FEF48
    // ldr r1, _021FBC60 ; =0x00000616
    // strb r0, [r5, r1]
    // mov r0, #1
    // add r1, #0x65
    // strb r0, [r5, r1]
    // b _021FBC56
    // sub r1, #0x65
    // ldrb r0, [r5, r1]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021FBC56
    // ldr r0, _021FBC64 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _021FBBF2
    // ldr r0, _021FBC68 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x24]
    // cmp r0, #0
    // beq _021FBC56
    // add r0, r5, #0
    // bl ov15_021FED3C
    // add r0, r5, #0
    // add r0, #0x34
    // mov r1, #1
    // bl ClearFrameAndWindow2
    // add r0, r5, #0
    // add r0, #0x34
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r5, #0
    // bl ov15_021FBB28
    // add r0, r5, #0
    // bl ov15_021FB518
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r4, [r5, r0]
    // add r0, r5, #0
    // bl ov15_021FA074
    // add r1, r4, #4
    // add r4, #0x64
    // add r2, r0, #0
    // ldrb r4, [r4]
    // mov r3, #0xc
    // add r0, r5, #0
    // mul r3, r4
    // add r1, r1, r3
    // mov r3, #1
    // bl ov15_02200140
    // add r0, r5, #0
    // bl ov15_021FA170
    // add r0, r5, #4
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // mov r1, #1
    // bl ov15_021FD788
    // ldr r0, _021FBC5C ; =0x0000067B
    // mov r1, #0
    // strb r1, [r5, r0]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0xd
    // pop {r3, r4, r5, pc}
    // nop
    // _021FBC5C: .word 0x0000067B
    // _021FBC60: .word 0x00000616
    // _021FBC64: .word gSystem
    // _021FBC68: .word gSystem + 0x40
    // TODO: decompile
}




void ov15_021FBC6C(void) {
    ov15_021FED3C();
    sub_020880CC(1, 6);
    // ldr r0, [r4, r0]
    // add r0, #0x68
    // strh r1, [r0]
}




void ov15_021FBC8C(void) {
    ov15_021FED3C();
    sub_020880CC(1, 6);
    // ldr r0, [r4, r0]
    // add r0, #0x68
    // strh r1, [r0]
}




void ov15_021FBCAC(void) {
    // push {r4, lr}
    // mov r1, #0x1a
    // add r4, r0, #0
    // mov r2, #1
    // lsl r1, r1, #6
    // strh r2, [r4, r1]
    // bl ov15_021FFF24
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r2, [r4, r0]
    // mov r3, #6
    // add r0, r2, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // mul r0, r1
    // add r1, r2, r0
    // add r2, #0x66
    // ldr r0, [r1, #4]
    // ldrb r1, [r1, #0xd]
    // ldrh r2, [r2]
    // bl Pocket_GetQuantity
    // cmp r0, #1
    // bne _021FBCF2
    // add r0, r4, #0
    // bl ov15_021FEEA4
    // add r0, r4, #0
    // mov r1, #0
    // bl ov15_021FD788
    // mov r0, #8
    // pop {r4, pc}
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #3
    // add r3, r2, #0
    // bl ov15_021FD574
    // ldr r2, _021FBD24 ; =0x00000682
    // add r0, r4, #0
    // ldrh r2, [r4, r2]
    // mov r1, #3
    // bl ov15_02200300
    // add r0, r4, #0
    // mov r1, #3
    // bl ov15_021FEDEC
    // add r0, r4, #0
    // bl ov15_021FF7C4
    // add r0, r4, #0
    // mov r1, #1
    // bl ov15_021FF29C
    // mov r0, #5
    // pop {r4, pc}
    // _021FBD24: .word 0x00000682
    // TODO: decompile
}




void ov15_021FBD28(void) {
    // add r0, r0, r2
    // add r0, r0, r2
}




void ov15_021FBD50(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // mov r6, #0
    // mov r1, #3
    // add r4, r0, #0
    // bl ov15_021FAC2C
    // add r5, r0, #0
    // sub r0, r6, #1
    // cmp r5, r0
    // bne _021FBD68
    // b _021FBEF6
    // ldr r0, _021FBF88 ; =0x00000682
    // ldrh r0, [r4, r0]
    // bl ov15_022002EC
    // cmp r0, #1
    // beq _021FBD7A
    // cmp r0, #2
    // beq _021FBD88
    // b _021FBD9A
    // cmp r5, #0
    // beq _021FBD82
    // cmp r5, #3
    // bne _021FBD9A
    // mov r5, #0
    // mvn r5, r5
    // b _021FBD9A
    // cmp r5, #0
    // beq _021FBD96
    // cmp r5, #1
    // beq _021FBD96
    // sub r0, r5, #3
    // cmp r0, #1
    // bhi _021FBD9A
    // mov r5, #0
    // mvn r5, r5
    // cmp r5, #7
    // bls _021FBDA0
    // b _021FBF1E
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FBDAC: ; jump table
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // ldrsh r0, [r4, r1]
    // add r1, r1, #2
    // ldrh r1, [r4, r1]
    // mov r2, #0x64
    // bl ov15_021FBD28
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // strh r0, [r4, r1]
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x1a
    // bl ManagedSprite_SetAnim
    // mov r6, #1
    // b _021FBF1E
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // ldrsh r0, [r4, r1]
    // add r1, r1, #2
    // ldrh r1, [r4, r1]
    // mov r2, #0xa
    // bl ov15_021FBD28
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // strh r0, [r4, r1]
    // mov r0, #0xb5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // mov r0, #0xb5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0x1a
    // bl ManagedSprite_SetAnim
    // mov r6, #1
    // b _021FBF1E
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // ldrsh r0, [r4, r1]
    // add r1, r1, #2
    // ldrh r1, [r4, r1]
    // mov r2, #1
    // bl ov15_021FBD28
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // strh r0, [r4, r1]
    // mov r0, #0xb6
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // mov r0, #0xb6
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0x1a
    // bl ManagedSprite_SetAnim
    // mov r6, #1
    // b _021FBF1E
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // ldrsh r0, [r4, r1]
    // add r1, r1, #2
    // mov r2, #0x63
    // ldrh r1, [r4, r1]
    // mvn r2, r2
    // bl ov15_021FBD28
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // strh r0, [r4, r1]
    // mov r0, #0xb7
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // mov r0, #0xb7
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0x1c
    // bl ManagedSprite_SetAnim
    // mov r6, #2
    // b _021FBF1E
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // ldrsh r0, [r4, r1]
    // add r1, r1, #2
    // mov r2, #9
    // ldrh r1, [r4, r1]
    // mvn r2, r2
    // bl ov15_021FBD28
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // strh r0, [r4, r1]
    // mov r0, #0x2e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // mov r0, #0x2e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x1c
    // bl ManagedSprite_SetAnim
    // mov r6, #2
    // b _021FBF1E
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // ldrsh r0, [r4, r1]
    // add r1, r1, #2
    // mov r2, #0
    // ldrh r1, [r4, r1]
    // mvn r2, r2
    // bl ov15_021FBD28
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // strh r0, [r4, r1]
    // mov r0, #0xb9
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // mov r0, #0xb9
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0x1c
    // bl ManagedSprite_SetAnim
    // mov r6, #2
    // b _021FBF1E
    // mov r6, #3
    // b _021FBF1E
    // mov r6, #4
    // b _021FBF1E
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // add r0, r4, r1
    // add r1, r1, #2
    // ldrh r1, [r4, r1]
    // bl sub_020881C0
    // add r6, r0, #0
    // bne _021FBF1E
    // ldr r0, _021FBF8C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // beq _021FBF16
    // mov r6, #3
    // b _021FBF1E
    // mov r0, #2
    // tst r0, r1
    // beq _021FBF1E
    // mov r6, #4
    // cmp r6, #4
    // bhi _021FBF82
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FBF2E: ; jump table
    // add r0, r4, #0
    // mov r1, #3
    // bl ov15_021FEDEC
    // ldr r0, _021FBF90 ; =0x00000637
    // bl PlaySE
    // add sp, #4
    // mov r0, #5
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, _021FBF94 ; =0x000005DC
    // bl PlaySE
    // mov r0, #6
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x26
    // mov r2, #9
    // mov r3, #8
    // bl ov15_021FD7D0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    // lsl r0, r0, #6
    // bl PlaySE
    // mov r0, #7
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x13
    // mov r2, #9
    // mov r3, #8
    // bl ov15_021FD7D0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #5
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _021FBF88: .word 0x00000682
    // _021FBF8C: .word gSystem
    // _021FBF90: .word 0x00000637
    // _021FBF94: .word 0x000005DC
    // TODO: decompile
}




u32 ov15_021FBF98(void) {
}




void ov15_021FBFC0(void) {
    ov15_021FED3C();
    ov15_021FB518(r4);
    ov15_02200428(r4);
    ov15_021FF29C(r4, 0);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnimationFrame((0xa7 << 2), 0);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0xa7 << 2), 0x10);
}




void ov15_021FBFF8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021FC018 ; =0x00000616
    // ldrb r0, [r4, r0]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021FC012
    // add r0, r4, #0
    // bl ov15_021FF004
    // mov r0, #9
    // pop {r4, pc}
    // mov r0, #8
    // pop {r4, pc}
    // nop
    // _021FC018: .word 0x00000616
    // TODO: decompile
}




void ov15_021FC01C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _021FC134 ; =0x00000804
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _021FC03A
    // cmp r0, #2
    // beq _021FC0CE
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // b _021FC12E
    // add r0, r5, #0
    // bl ov15_021FF058
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x36
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r0, #0x1a
    // lsl r0, r0, #6
    // ldrsh r0, [r5, r0]
    // cmp r0, #1
    // bne _021FC06E
    // mov r2, #0xbd
    // lsl r2, r2, #2
    // ldr r0, [r5, r2]
    // sub r2, #0xc0
    // ldr r2, [r5, r2]
    // mov r1, #0
    // add r2, #0x66
    // ldrh r2, [r2]
    // bl BufferItemName
    // b _021FC082
    // mov r2, #0xbd
    // lsl r2, r2, #2
    // ldr r0, [r5, r2]
    // sub r2, #0xc0
    // ldr r2, [r5, r2]
    // mov r1, #0
    // add r2, #0x66
    // ldrh r2, [r2]
    // bl BufferItemNamePlural
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #1
    // mov r2, #0x1a
    // mov r0, #0xbd
    // str r1, [sp, #4]
    // lsl r2, r2, #6
    // lsl r0, r0, #2
    // ldrsh r2, [r5, r2]
    // ldr r0, [r5, r0]
    // mov r3, #3
    // bl BufferIntegerAsString
    // mov r0, #0xbd
    // ldr r1, _021FC138 ; =0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r5, #0
    // add r0, #0x34
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // mov r1, #0
    // bl ov15_021FEF48
    // ldr r1, _021FC13C ; =0x00000616
    // add sp, #8
    // strb r0, [r5, r1]
    // mov r0, #0xa
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov15_021FF058
    // add r0, r5, #0
    // add r0, #0x34
    // mov r1, #1
    // bl ClearFrameAndWindow2
    // add r0, r5, #0
    // add r0, #0x34
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r5, #4
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r4, [r5, r0]
    // add r0, r5, #0
    // bl ov15_021FA074
    // add r1, r4, #4
    // add r4, #0x64
    // add r2, r0, #0
    // ldrb r4, [r4]
    // mov r3, #0xc
    // add r0, r5, #0
    // mul r3, r4
    // add r1, r1, r3
    // mov r3, #0
    // bl ov15_02200140
    // add r0, r5, #0
    // bl ov15_021FE868
    // add r0, r5, #0
    // bl ov15_021FED3C
    // add r0, r5, #0
    // mov r1, #1
    // bl ov15_021FD788
    // add r0, r5, #0
    // bl ov15_021FB518
    // add sp, #8
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #9
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _021FC134: .word 0x00000804
    // _021FC138: .word 0x000005E4
    // _021FC13C: .word 0x00000616
    // TODO: decompile
}




void ov15_021FC140(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021FC160 ; =0x00000616
    // ldrb r0, [r4, r0]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // beq _021FC154
    // mov r0, #0xa
    // pop {r4, pc}
    // add r4, #0x34
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // mov r0, #0xb
    // pop {r4, pc}
    // _021FC160: .word 0x00000616
    // TODO: decompile
}




void ov15_021FC164(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021FC218 ; =0x00000616
    // ldrb r0, [r5, r0]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021FC214
    // ldr r0, _021FC21C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _021FC186
    // ldr r0, _021FC220 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x24]
    // cmp r0, #0
    // beq _021FC214
    // add r0, r5, #0
    // add r0, #0x34
    // mov r1, #1
    // bl ClearFrameAndWindow2
    // add r0, r5, #0
    // add r0, #0x34
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r5, #4
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r2, [r5, r0]
    // add r0, r2, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // add r3, r1, #0
    // mul r3, r0
    // add r1, r2, r3
    // mov r0, #6
    // mov r3, #0x1a
    // str r0, [sp]
    // add r2, #0x66
    // lsl r3, r3, #6
    // ldr r0, [r1, #4]
    // ldrb r1, [r1, #0xd]
    // ldrh r2, [r2]
    // ldrh r3, [r5, r3]
    // bl Pocket_TakeItem
    // add r0, r5, #0
    // bl ov15_021F9F08
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r4, [r5, r0]
    // add r0, r5, #0
    // bl ov15_021FA074
    // add r1, r4, #4
    // add r4, #0x64
    // add r2, r0, #0
    // ldrb r4, [r4]
    // mov r3, #0xc
    // add r0, r5, #0
    // mul r3, r4
    // add r1, r1, r3
    // mov r3, #1
    // bl ov15_02200140
    // add r0, r5, #0
    // bl ov15_021FE868
    // add r0, r5, #0
    // bl ov15_021FED3C
    // add r0, r5, #0
    // bl ov15_021FB518
    // add r0, r5, #0
    // bl ov15_021FA170
    // add r0, r5, #0
    // mov r1, #1
    // bl ov15_021FD788
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0xb
    // pop {r3, r4, r5, pc}
    // _021FC218: .word 0x00000616
    // _021FC21C: .word gSystem
    // _021FC220: .word gSystem + 0x40
    // TODO: decompile
}




void ov15_021FC224(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x8e
    // add r5, r0, #0
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // sub r1, r1, #4
    // ldr r1, [r5, r1]
    // add r1, #0x66
    // ldrh r1, [r1]
    // bl Bag_TryRegisterItem
    // cmp r0, #0
    // bne _021FC28C
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x67
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r5, #0
    // add r0, #0x34
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r0, #0xbd
    // ldr r1, _021FC2DC ; =0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r5, #0
    // mov r1, #0
    // bl ov15_021FEF48
    // add r0, r5, #0
    // bl ov15_02200294
    // add r0, r5, #0
    // bl ov15_021FFF24
    // add r0, r5, #0
    // mov r1, #0
    // bl ov15_021FD788
    // mov r0, #0x19
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov15_02200294
    // add r0, r5, #0
    // bl ov15_021FF560
    // mov r0, #0x61
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov15_021FF7AC
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r4, [r5, r0]
    // add r0, r5, #0
    // bl ov15_021FA074
    // add r1, r4, #4
    // add r4, #0x64
    // add r2, r0, #0
    // ldrb r4, [r4]
    // mov r3, #0xc
    // add r0, r5, #0
    // mul r3, r4
    // add r1, r1, r3
    // mov r3, #0
    // bl ov15_02200140
    // add r0, r5, #0
    // bl ov15_021FE868
    // add r0, r5, #0
    // bl ov15_021FED3C
    // add r0, r5, #0
    // bl ov15_021FB518
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _021FC2DC: .word 0x000005E4
    // TODO: decompile
}




void ov15_021FC2E0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021FC370 ; =0x00000616
    // ldrb r0, [r5, r0]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021FC36A
    // ldr r0, _021FC374 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _021FC302
    // ldr r0, _021FC378 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x24]
    // cmp r0, #0
    // beq _021FC36A
    // add r0, r5, #0
    // add r0, #0x34
    // mov r1, #1
    // bl ClearFrameAndWindow2
    // add r0, r5, #0
    // add r0, #0x34
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r5, #0
    // bl ov15_02200294
    // add r0, r5, #0
    // bl ov15_021FF560
    // mov r0, #0x61
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov15_021FF7AC
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r4, [r5, r0]
    // add r0, r5, #0
    // bl ov15_021FA074
    // add r1, r4, #4
    // add r4, #0x64
    // add r2, r0, #0
    // ldrb r4, [r4]
    // mov r3, #0xc
    // add r0, r5, #0
    // mul r3, r4
    // add r1, r1, r3
    // mov r3, #0
    // bl ov15_02200140
    // add r0, r5, #0
    // bl ov15_021FE868
    // add r0, r5, #0
    // bl ov15_021FED3C
    // add r0, r5, #0
    // bl ov15_021FB518
    // add r0, r5, #0
    // mov r1, #1
    // bl ov15_021FD788
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0x19
    // pop {r3, r4, r5, pc}
    // nop
    // _021FC370: .word 0x00000616
    // _021FC374: .word gSystem
    // _021FC378: .word gSystem + 0x40
    // TODO: decompile
}




void ov15_021FC37C(void) {
    // ldr r0, [r5, r1]
    // ldr r1, [r5, r1]
    // add r1, #0x66
    // ldrh r1, [r1]
    Bag_UnregisterItem(((0x8e << 2) - 4));
    ov15_02200294(r5);
    ov15_021FF560(r5);
    // add r0, r5, r0
    ov15_021FF7AC((0x61 << 2));
    // ldr r4, [r5, r0]
    ov15_021FA074(r5);
    // add r4, #0x64
    // ldrb r4, [r4]
    // mul r3, r4
    // add r1, r1, r3
    ov15_02200140(r5, (r4 + 4), r0, 0);
    ov15_021FE868(r5);
    ov15_021FED3C(r5);
    ov15_021FB518(r5);
}




void ov15_021FC3E0(void) {
}




void ov15_021FC3EC(void) {
    ov15_021FED3C();
    ov15_021FD788(r4, 0);
    ov15_021FFF24(r4);
    sub_020880CC(1, 6);
    // ldr r0, [r4, r0]
    // add r0, #0x68
    // strh r1, [r0]
}




void ov15_021FC41C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // ldr r1, _021FC70C ; =gSystem
    // mov r2, #0x40
    // ldr r3, [r1, #0x4c]
    // add r5, r0, #0
    // mov r4, #0
    // tst r2, r3
    // beq _021FC43E
    // ldr r0, _021FC710 ; =0x00000644
    // add r4, r4, #1
    // ldr r1, [r5, r0]
    // lsl r2, r1, #2
    // ldr r1, _021FC714 ; =ov15_02200640
    // ldrb r1, [r1, r2]
    // str r1, [r5, r0]
    // b _021FC56E
    // mov r2, #0x80
    // tst r2, r3
    // beq _021FC454
    // ldr r0, _021FC710 ; =0x00000644
    // add r4, r4, #1
    // ldr r1, [r5, r0]
    // lsl r2, r1, #2
    // ldr r1, _021FC718 ; =ov15_02200641
    // ldrb r1, [r1, r2]
    // str r1, [r5, r0]
    // b _021FC56E
    // mov r2, #0x20
    // add r6, r3, #0
    // tst r6, r2
    // beq _021FC4AC
    // ldr r1, _021FC710 ; =0x00000644
    // ldr r3, _021FC71C ; =ov15_02200642
    // ldr r1, [r5, r1]
    // lsl r6, r1, #2
    // ldrb r3, [r3, r6]
    // cmp r3, #0xe
    // bne _021FC484
    // mov r1, #2
    // str r1, [sp]
    // mov r1, #0xe
    // add r2, sp, #0xc
    // add r3, r4, #0
    // str r4, [sp, #4]
    // bl ov15_021FA73C
    // cmp r0, #1
    // bne _021FC4D6
    // add sp, #0x10
    // mov r0, #0xe
    // pop {r4, r5, r6, pc}
    // cmp r1, #0x10
    // beq _021FC56E
    // cmp r1, #0
    // blt _021FC4A4
    // cmp r1, #8
    // bge _021FC4A4
    // sub r2, #0x21
    // bl ov15_021FA6C0
    // ldr r1, _021FC710 ; =0x00000644
    // ldr r2, [r5, r1]
    // cmp r2, r0
    // beq _021FC56E
    // str r0, [r5, r1]
    // add r4, r4, #1
    // b _021FC56E
    // ldr r0, _021FC710 ; =0x00000644
    // add r4, r4, #1
    // str r3, [r5, r0]
    // b _021FC56E
    // mov r2, #0x10
    // tst r3, r2
    // beq _021FC506
    // ldr r1, _021FC710 ; =0x00000644
    // ldr r2, _021FC720 ; =ov15_02200643
    // ldr r1, [r5, r1]
    // lsl r3, r1, #2
    // ldrb r2, [r2, r3]
    // cmp r2, #0xf
    // bne _021FC4DE
    // mov r1, #2
    // str r1, [sp]
    // add r2, sp, #8
    // mov r1, #0xf
    // add r2, #3
    // add r3, r4, #0
    // str r4, [sp, #4]
    // bl ov15_021FA73C
    // cmp r0, #1
    // beq _021FC4D8
    // b _021FC77A
    // add sp, #0x10
    // mov r0, #0xe
    // pop {r4, r5, r6, pc}
    // cmp r1, #0x10
    // beq _021FC56E
    // cmp r1, #0
    // blt _021FC4FE
    // cmp r1, #8
    // bge _021FC4FE
    // mov r2, #1
    // bl ov15_021FA6C0
    // ldr r1, _021FC710 ; =0x00000644
    // ldr r2, [r5, r1]
    // cmp r2, r0
    // beq _021FC56E
    // str r0, [r5, r1]
    // add r4, r4, #1
    // b _021FC56E
    // ldr r0, _021FC710 ; =0x00000644
    // add r4, r4, #1
    // str r2, [r5, r0]
    // b _021FC56E
    // ldr r3, [r1, #0x48]
    // lsl r1, r2, #5
    // tst r1, r3
    // beq _021FC53A
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // sub r2, #0x11
    // add r1, #0x64
    // ldrb r1, [r1]
    // bl ov15_021FA6C0
    // add r1, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // add r0, r4, #0
    // add r2, sp, #8
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r2, #2
    // mov r3, #1
    // bl ov15_021FA73C
    // add sp, #0x10
    // mov r0, #0xe
    // pop {r4, r5, r6, pc}
    // add r2, #0xf0
    // add r1, r3, #0
    // tst r1, r2
    // beq _021FC56E
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // mov r2, #1
    // add r1, #0x64
    // ldrb r1, [r1]
    // bl ov15_021FA6C0
    // add r1, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // add r0, r4, #0
    // add r2, sp, #8
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r2, #1
    // mov r3, #1
    // bl ov15_021FA73C
    // add sp, #0x10
    // mov r0, #0xe
    // pop {r4, r5, r6, pc}
    // ldr r1, _021FC710 ; =0x00000644
    // ldr r0, [r5, r1]
    // cmp r0, #0x11
    // bne _021FC582
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r0, #0x64
    // ldrb r0, [r0]
    // str r0, [r5, r1]
    // cmp r4, #0
    // beq _021FC5A6
    // ldr r0, _021FC724 ; =0x000005DC
    // bl PlaySE
    // ldr r1, _021FC710 ; =0x00000644
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov15_021FFECC
    // ldr r1, _021FC710 ; =0x00000644
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov15_021FA0E4
    // add r0, r5, #0
    // bl ov15_021FA170
    // mov r1, #0
    // add r0, sp, #8
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov15_021FAC2C
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // beq _021FC630
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov15_021FA104
    // cmp r0, #0
    // beq _021FC608
    // cmp r4, #8
    // bhs _021FC5EA
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov15_021FA68C
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _021FC608
    // ldr r1, _021FC710 ; =0x00000644
    // add r0, r5, #0
    // str r4, [r5, r1]
    // ldr r1, [r5, r1]
    // bl ov15_021FFECC
    // b _021FC608
    // ldr r1, _021FC710 ; =0x00000644
    // add r0, r5, #0
    // str r4, [r5, r1]
    // ldr r1, [r5, r1]
    // bl ov15_021FFECC
    // ldr r0, _021FC710 ; =0x00000644
    // ldr r1, [r5, r0]
    // cmp r1, #8
    // blt _021FC608
    // cmp r1, #0xd
    // bgt _021FC608
    // add r0, r5, #0
    // bl ov15_021FA0E4
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, sp, #8
    // mov r3, #0
    // bl ov15_021FA73C
    // cmp r0, #1
    // beq _021FC6B4
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // mov r2, #4
    // add r1, #0x68
    // strh r2, [r1]
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // ldr r0, _021FC70C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // beq _021FC678
    // mov r0, #2
    // str r0, [sp]
    // mov r3, #0
    // ldr r1, _021FC710 ; =0x00000644
    // str r3, [sp, #4]
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r2, sp, #8
    // bl ov15_021FA73C
    // add r4, r0, #0
    // ldr r0, _021FC710 ; =0x00000644
    // ldr r1, [r5, r0]
    // cmp r1, #8
    // blt _021FC662
    // cmp r1, #0xd
    // bgt _021FC662
    // add r0, r5, #0
    // bl ov15_021FA0E4
    // cmp r4, #1
    // beq _021FC6B4
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #4
    // add r0, #0x68
    // strh r1, [r0]
    // add sp, #0x10
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #2
    // tst r1, r0
    // beq _021FC6B4
    // str r0, [sp]
    // mov r3, #0
    // add r0, r5, #0
    // mov r1, #0x10
    // add r2, sp, #8
    // str r3, [sp, #4]
    // bl ov15_021FA73C
    // add r4, r0, #0
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #4
    // add r0, #0x68
    // strh r1, [r0]
    // ldr r0, _021FC710 ; =0x00000644
    // ldr r1, [r5, r0]
    // cmp r1, #8
    // blt _021FC6AE
    // cmp r1, #0xd
    // bgt _021FC6AE
    // add r0, r5, #0
    // bl ov15_021FA0E4
    // add sp, #0x10
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // add r0, sp, #8
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _021FC778
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #3
    // add r0, #0x66
    // ldrh r0, [r0]
    // mov r2, #6
    // bl GetItemAttr
    // cmp r0, #0
    // bne _021FC6E4
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r0, #0x66
    // ldrh r0, [r0]
    // bl ItemIdIsNotJohtoBall
    // cmp r0, #0
    // bne _021FC75C
    // mov r2, #0xbd
    // lsl r2, r2, #2
    // ldr r0, [r5, r2]
    // sub r2, #0xc0
    // ldr r2, [r5, r2]
    // mov r1, #0
    // add r2, #0x66
    // ldrh r2, [r2]
    // bl BufferItemName
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x2f
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r0, #0xbd
    // ldr r1, _021FC728 ; =0x000005E4
    // b _021FC72C
    // _021FC70C: .word gSystem
    // _021FC710: .word 0x00000644
    // _021FC714: .word ov15_02200640
    // _021FC718: .word ov15_02200641
    // _021FC71C: .word ov15_02200642
    // _021FC720: .word ov15_02200643
    // _021FC724: .word 0x000005DC
    // _021FC728: .word 0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r5, #0
    // mov r1, #0
    // bl ov15_021FEF48
    // ldr r1, _021FC780 ; =0x00000616
    // add sp, #0x10
    // strb r0, [r5, r1]
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #5
    // add r0, #0x68
    // strh r1, [r0]
    // mov r0, #0xf
    // pop {r4, r5, r6, pc}
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #4
    // add r0, #0x68
    // strh r1, [r0]
    // add r0, r5, #0
    // mov r1, #0x14
    // mov r2, #0x29
    // mov r3, #0x24
    // bl ov15_021FD810
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // mov r0, #0xe
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _021FC780: .word 0x00000616
    // TODO: decompile
}




void ov15_021FC784(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021FC7E0 ; =0x00000616
    // ldrb r0, [r4, r0]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021FC7DC
    // ldr r0, _021FC7E4 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _021FC7A6
    // ldr r0, _021FC7E8 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x24]
    // cmp r0, #0
    // beq _021FC7DC
    // add r0, r4, #0
    // add r0, #0x34
    // mov r1, #1
    // bl ClearFrameAndWindow2
    // add r0, r4, #0
    // add r0, #0x34
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r3, [r4, r0]
    // add r0, r4, #0
    // add r1, r3, #0
    // add r1, #0x64
    // ldrb r2, [r1]
    // mov r1, #0xc
    // mul r1, r2
    // add r1, r3, r1
    // mov r2, #0xa
    // ldrsh r1, [r1, r2]
    // sub r2, #0xb
    // mov r3, #0
    // bl ov15_021FF364
    // mov r0, #0xe
    // pop {r4, pc}
    // mov r0, #0xf
    // pop {r4, pc}
    // _021FC7E0: .word 0x00000616
    // _021FC7E4: .word gSystem
    // _021FC7E8: .word gSystem + 0x40
    // TODO: decompile
}




void ov15_021FC7EC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // ldr r1, _021FCAB0 ; =gSystem
    // mov r2, #0x40
    // ldr r3, [r1, #0x4c]
    // add r5, r0, #0
    // mov r4, #0
    // tst r2, r3
    // beq _021FC80E
    // ldr r0, _021FCAB4 ; =0x00000644
    // add r4, r4, #1
    // ldr r1, [r5, r0]
    // lsl r2, r1, #2
    // ldr r1, _021FCAB8 ; =ov15_02200640
    // ldrb r1, [r1, r2]
    // str r1, [r5, r0]
    // b _021FC9CA
    // mov r2, #0x80
    // tst r2, r3
    // beq _021FC824
    // ldr r0, _021FCAB4 ; =0x00000644
    // add r4, r4, #1
    // ldr r1, [r5, r0]
    // lsl r2, r1, #2
    // ldr r1, _021FCABC ; =ov15_02200641
    // ldrb r1, [r1, r2]
    // str r1, [r5, r0]
    // b _021FC9CA
    // mov r2, #0x20
    // add r6, r3, #0
    // tst r6, r2
    // beq _021FC87C
    // ldr r1, _021FCAB4 ; =0x00000644
    // ldr r3, _021FCAC0 ; =ov15_02200642
    // ldr r1, [r5, r1]
    // lsl r6, r1, #2
    // ldrb r3, [r3, r6]
    // cmp r3, #0xe
    // bne _021FC854
    // mov r1, #4
    // str r1, [sp]
    // mov r1, #0xe
    // add r2, sp, #0xc
    // mov r3, #1
    // str r4, [sp, #4]
    // bl ov15_021FA73C
    // cmp r0, #1
    // bne _021FC8A6
    // add sp, #0x10
    // mov r0, #0x10
    // pop {r4, r5, r6, pc}
    // cmp r1, #0x10
    // beq _021FC8B2
    // cmp r1, #0
    // blt _021FC874
    // cmp r1, #8
    // bge _021FC874
    // sub r2, #0x21
    // bl ov15_021FA6C0
    // ldr r1, _021FCAB4 ; =0x00000644
    // ldr r2, [r5, r1]
    // cmp r2, r0
    // beq _021FC8B2
    // str r0, [r5, r1]
    // add r4, r4, #1
    // b _021FC9CA
    // ldr r0, _021FCAB4 ; =0x00000644
    // add r4, r4, #1
    // str r3, [r5, r0]
    // b _021FC9CA
    // mov r2, #0x10
    // tst r3, r2
    // beq _021FC8D8
    // ldr r1, _021FCAB4 ; =0x00000644
    // ldr r2, _021FCAC4 ; =ov15_02200643
    // ldr r1, [r5, r1]
    // lsl r3, r1, #2
    // ldrb r2, [r2, r3]
    // cmp r2, #0xf
    // bne _021FC8AE
    // mov r1, #4
    // str r1, [sp]
    // add r2, sp, #8
    // mov r1, #0xf
    // add r2, #3
    // mov r3, #1
    // str r4, [sp, #4]
    // bl ov15_021FA73C
    // cmp r0, #1
    // beq _021FC8A8
    // b _021FCB5A
    // add sp, #0x10
    // mov r0, #0x10
    // pop {r4, r5, r6, pc}
    // cmp r1, #0x10
    // bne _021FC8B4
    // b _021FC9CA
    // cmp r1, #0
    // blt _021FC8D0
    // cmp r1, #8
    // bge _021FC8D0
    // mov r2, #1
    // bl ov15_021FA6C0
    // ldr r1, _021FCAB4 ; =0x00000644
    // ldr r2, [r5, r1]
    // cmp r2, r0
    // beq _021FC9CA
    // str r0, [r5, r1]
    // add r4, r4, #1
    // b _021FC9CA
    // ldr r0, _021FCAB4 ; =0x00000644
    // add r4, r4, #1
    // str r2, [r5, r0]
    // b _021FC9CA
    // ldr r3, [r1, #0x48]
    // lsl r1, r2, #5
    // tst r1, r3
    // beq _021FC952
    // ldr r1, _021FCAB4 ; =0x00000644
    // ldr r1, [r5, r1]
    // cmp r1, #0
    // blt _021FC922
    // cmp r1, #8
    // bge _021FC922
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // sub r2, #0x11
    // add r1, #0x64
    // ldrb r1, [r1]
    // bl ov15_021FA6C0
    // ldr r1, _021FCAB4 ; =0x00000644
    // str r0, [r5, r1]
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov15_021FFECC
    // mov r0, #4
    // str r0, [sp]
    // add r0, r4, #0
    // str r0, [sp, #4]
    // ldr r1, _021FCAB4 ; =0x00000644
    // add r2, sp, #8
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r2, #2
    // mov r3, #1
    // bl ov15_021FA73C
    // b _021FC94C
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // mov r2, #0
    // add r1, #0x64
    // ldrb r1, [r1]
    // add r0, r5, #0
    // mvn r2, r2
    // bl ov15_021FA6C0
    // add r1, r0, #0
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #0
    // add r2, sp, #8
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r2, #2
    // mov r3, #1
    // bl ov15_021FA73C
    // add sp, #0x10
    // mov r0, #0x10
    // pop {r4, r5, r6, pc}
    // add r2, #0xf0
    // add r1, r3, #0
    // tst r1, r2
    // beq _021FC9CA
    // ldr r1, _021FCAB4 ; =0x00000644
    // ldr r1, [r5, r1]
    // cmp r1, #0
    // blt _021FC99C
    // cmp r1, #8
    // bge _021FC99C
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // mov r2, #1
    // add r1, #0x64
    // ldrb r1, [r1]
    // bl ov15_021FA6C0
    // ldr r1, _021FCAB4 ; =0x00000644
    // str r0, [r5, r1]
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov15_021FFECC
    // mov r0, #4
    // str r0, [sp]
    // add r0, r4, #0
    // str r0, [sp, #4]
    // ldr r1, _021FCAB4 ; =0x00000644
    // add r2, sp, #8
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r2, #1
    // mov r3, #1
    // bl ov15_021FA73C
    // b _021FC9C4
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r1, #0x64
    // ldrb r1, [r1]
    // mov r2, #1
    // bl ov15_021FA6C0
    // add r1, r0, #0
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #0
    // add r2, sp, #8
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r2, #1
    // mov r3, #1
    // bl ov15_021FA73C
    // add sp, #0x10
    // mov r0, #0x10
    // pop {r4, r5, r6, pc}
    // ldr r1, _021FCAB4 ; =0x00000644
    // ldr r0, [r5, r1]
    // cmp r0, #0x11
    // bne _021FC9DE
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r0, #0x64
    // ldrb r0, [r0]
    // str r0, [r5, r1]
    // cmp r4, #0
    // beq _021FCA02
    // ldr r0, _021FCAC8 ; =0x000005DC
    // bl PlaySE
    // ldr r1, _021FCAB4 ; =0x00000644
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov15_021FFECC
    // ldr r1, _021FCAB4 ; =0x00000644
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov15_021FA0E4
    // add r0, r5, #0
    // bl ov15_021FA170
    // mov r1, #0
    // add r0, sp, #8
    // strb r1, [r0]
    // add r0, r5, #0
    // bl ov15_021FAC2C
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // beq _021FCA8A
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov15_021FA104
    // cmp r0, #0
    // beq _021FCA64
    // cmp r4, #8
    // bhs _021FCA46
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov15_021FA68C
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _021FCA64
    // ldr r1, _021FCAB4 ; =0x00000644
    // add r0, r5, #0
    // str r4, [r5, r1]
    // ldr r1, [r5, r1]
    // bl ov15_021FFECC
    // b _021FCA64
    // ldr r1, _021FCAB4 ; =0x00000644
    // add r0, r5, #0
    // str r4, [r5, r1]
    // ldr r1, [r5, r1]
    // bl ov15_021FFECC
    // ldr r0, _021FCAB4 ; =0x00000644
    // ldr r1, [r5, r0]
    // cmp r1, #8
    // blt _021FCA64
    // cmp r1, #0xd
    // bgt _021FCA64
    // add r0, r5, #0
    // bl ov15_021FA0E4
    // mov r0, #4
    // str r0, [sp]
    // mov r3, #1
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, sp, #8
    // str r3, [sp, #4]
    // bl ov15_021FA73C
    // cmp r0, #1
    // beq _021FCB40
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // mov r2, #5
    // add r1, #0x68
    // strh r2, [r1]
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // ldr r0, _021FCAB0 ; =gSystem
    // mov r3, #1
    // ldr r1, [r0, #0x48]
    // add r0, r1, #0
    // tst r0, r3
    // beq _021FCAF2
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r1, _021FCAB4 ; =0x00000644
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r2, sp, #8
    // bl ov15_021FA73C
    // add r4, r0, #0
    // ldr r0, _021FCAB4 ; =0x00000644
    // b _021FCACC
    // _021FCAB0: .word gSystem
    // _021FCAB4: .word 0x00000644
    // _021FCAB8: .word ov15_02200640
    // _021FCABC: .word ov15_02200641
    // _021FCAC0: .word ov15_02200642
    // _021FCAC4: .word ov15_02200643
    // _021FCAC8: .word 0x000005DC
    // ldr r1, [r5, r0]
    // cmp r1, #8
    // blt _021FCADC
    // cmp r1, #0xd
    // bgt _021FCADC
    // add r0, r5, #0
    // bl ov15_021FA0E4
    // cmp r4, #1
    // beq _021FCB40
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #5
    // add r0, #0x68
    // strh r1, [r0]
    // add sp, #0x10
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #2
    // tst r0, r1
    // beq _021FCB40
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r2, [r5, r0]
    // mov r1, #0
    // add r2, #0x66
    // strh r1, [r2]
    // ldr r0, [r5, r0]
    // mov r2, #5
    // add r0, #0x68
    // strh r2, [r0]
    // add r0, r5, #0
    // bl ov15_021FD774
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    // lsl r0, r0, #6
    // bl PlaySE
    // ldr r0, _021FCB60 ; =0x00000644
    // ldr r1, [r5, r0]
    // cmp r1, #8
    // blt _021FCB2C
    // cmp r1, #0xd
    // bgt _021FCB2C
    // add r0, r5, #0
    // bl ov15_021FA0E4
    // mov r0, #0x24
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0x13
    // mov r2, #9
    // mov r3, #8
    // bl ov15_021FD7D0
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // add r0, sp, #8
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _021FCB58
    // add r0, r5, #0
    // mov r1, #0x14
    // mov r2, #0x29
    // mov r3, #0x22
    // bl ov15_021FD810
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // mov r0, #0x10
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _021FCB60: .word 0x00000644
    // TODO: decompile
}




void ov15_021FCB64(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // mov r1, #0x8d
    // add r4, r0, #0
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r3, r1, #4
    // add r1, #0x64
    // ldrb r2, [r1]
    // mov r1, #0xc
    // mul r1, r2
    // add r5, r3, r1
    // mov r2, #0
    // mov r1, #4
    // add r3, r2, #0
    // bl ov15_021FD574
    // mov r0, #0x1a
    // mov r1, #1
    // lsl r0, r0, #6
    // strh r1, [r4, r0]
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // add r0, #0x66
    // ldrh r0, [r0]
    // mov r2, #6
    // bl GetItemAttr
    // asr r1, r0, #1
    // ldr r0, _021FCD70 ; =0x00000684
    // mov r2, #0
    // str r1, [r4, r0]
    // ldr r0, [r4]
    // mov r1, #5
    // bl ov15_021FD43C
    // ldr r0, [r4]
    // mov r1, #5
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #0xa5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0xa6
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #0
    // bl ov15_02200458
    // add r0, r4, #0
    // mov r1, #0
    // bl ov15_021FD788
    // ldr r2, _021FCD74 ; =0x00000644
    // mov r1, #6
    // ldr r2, [r4, r2]
    // ldrsh r1, [r5, r1]
    // add r0, r4, #0
    // sub r2, #8
    // bl ov15_021FF4EC
    // ldr r1, _021FCD74 ; =0x00000644
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // sub r1, #8
    // bl ov15_022002B4
    // mov r2, #0x8d
    // lsl r2, r2, #2
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // add r2, #0x66
    // ldrh r2, [r2]
    // add r1, r4, #4
    // bl ov15_021FECA0
    // add r0, r4, #0
    // bl ov15_021FFF24
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #3
    // add r0, #0x66
    // ldrh r0, [r0]
    // mov r2, #6
    // bl GetItemAttr
    // cmp r0, #0
    // bne _021FCC32
    // ldr r0, _021FCD70 ; =0x00000684
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _021FCC7C
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x4c
    // bl NewString_ReadMsgData
    // mov r2, #0xbd
    // lsl r2, r2, #2
    // add r5, r0, #0
    // ldr r0, [r4, r2]
    // sub r2, #0xc0
    // ldr r2, [r4, r2]
    // mov r1, #0
    // add r2, #0x66
    // ldrh r2, [r2]
    // bl BufferItemName
    // mov r0, #0xbd
    // ldr r1, _021FCD78 ; =0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // add r2, r5, #0
    // bl StringExpandPlaceholders
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, #0
    // mov r1, #0
    // bl ov15_021FEF48
    // ldr r1, _021FCD7C ; =0x00000616
    // add sp, #8
    // strb r0, [r4, r1]
    // mov r0, #0x18
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // mov r1, #0
    // bl ov15_021FF0FC
    // add r0, r4, #0
    // bl ov15_021FF068
    // add r0, r4, #0
    // mov r1, #2
    // bl ov15_021FEDEC
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r2, [r4, r0]
    // mov r3, #6
    // add r0, r2, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // mul r0, r1
    // add r1, r2, r0
    // add r2, #0x66
    // ldr r0, [r1, #4]
    // ldrb r1, [r1, #0xd]
    // ldrh r2, [r2]
    // bl Pocket_GetQuantity
    // cmp r0, #1
    // bne _021FCD0C
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x4e
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r5, r0, #0
    // mov r2, #0x1a
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // lsl r2, r2, #6
    // mov r0, #0xbd
    // ldrsh r3, [r4, r2]
    // add r2, r2, #4
    // lsl r0, r0, #2
    // ldr r2, [r4, r2]
    // ldr r0, [r4, r0]
    // mul r2, r3
    // mov r3, #6
    // bl BufferIntegerAsString
    // mov r0, #0xbd
    // ldr r1, _021FCD78 ; =0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // add r2, r5, #0
    // bl StringExpandPlaceholders
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, #0
    // mov r1, #1
    // bl ov15_021FEF48
    // ldr r1, _021FCD7C ; =0x00000616
    // add sp, #8
    // strb r0, [r4, r1]
    // mov r0, #0x15
    // pop {r3, r4, r5, pc}
    // mov r1, #6
    // ldrsh r3, [r5, r1]
    // ldr r1, _021FCD74 ; =0x00000644
    // ldr r0, [r5]
    // ldr r2, [r4, r1]
    // add r1, #0x3e
    // add r2, r3, r2
    // sub r2, #8
    // lsl r2, r2, #2
    // add r0, r0, r2
    // ldrh r0, [r0, #2]
    // strh r0, [r4, r1]
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x4d
    // bl NewString_ReadMsgData
    // mov r2, #0xbd
    // lsl r2, r2, #2
    // add r5, r0, #0
    // ldr r0, [r4, r2]
    // sub r2, #0xc0
    // ldr r2, [r4, r2]
    // mov r1, #0
    // add r2, #0x66
    // ldrh r2, [r2]
    // bl BufferItemName
    // mov r0, #0xbd
    // ldr r1, _021FCD78 ; =0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // add r2, r5, #0
    // bl StringExpandPlaceholders
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, #0
    // mov r1, #1
    // bl ov15_021FEF48
    // ldr r1, _021FCD7C ; =0x00000616
    // strb r0, [r4, r1]
    // mov r0, #0x11
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _021FCD70: .word 0x00000684
    // _021FCD74: .word 0x00000644
    // _021FCD78: .word 0x000005E4
    // _021FCD7C: .word 0x00000616
    // TODO: decompile
}




void ov15_021FCD80(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021FCDDC ; =0x00000616
    // ldrb r0, [r4, r0]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021FCDD6
    // ldr r0, _021FCDE0 ; =0x00000682
    // ldrh r1, [r4, r0]
    // cmp r1, #0x63
    // bls _021FCD9C
    // mov r1, #0x63
    // strh r1, [r4, r0]
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #4
    // add r3, r2, #0
    // bl ov15_021FD574
    // ldr r2, _021FCDE0 ; =0x00000682
    // add r0, r4, #0
    // ldrh r2, [r4, r2]
    // mov r1, #2
    // bl ov15_02200300
    // add r0, r4, #0
    // bl ov15_021FF7FC
    // add r0, r4, #0
    // mov r1, #1
    // bl ov15_021FF29C
    // add r0, r4, #0
    // mov r1, #1
    // bl ov15_022004DC
    // add r0, r4, #0
    // mov r1, #0
    // bl ov15_021FFFDC
    // mov r0, #0x12
    // pop {r4, pc}
    // mov r0, #0x11
    // pop {r4, pc}
    // nop
    // _021FCDDC: .word 0x00000616
    // _021FCDE0: .word 0x00000682
    // TODO: decompile
}




void ov15_021FCDE4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // mov r5, #0
    // mov r1, #4
    // add r4, r0, #0
    // bl ov15_021FAC2C
    // add r6, r0, #0
    // sub r0, r5, #1
    // cmp r6, r0
    // bne _021FCDFC
    // b _021FCF06
    // ldr r0, _021FCFB8 ; =0x00000682
    // ldrh r0, [r4, r0]
    // bl ov15_022002EC
    // cmp r0, #2
    // bne _021FCE14
    // cmp r6, #0
    // beq _021FCE10
    // cmp r6, #2
    // bne _021FCE14
    // mov r6, #0
    // mvn r6, r6
    // cmp r6, #5
    // bls _021FCE1A
    // b _021FCF2E
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FCE26: ; jump table
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // ldrsh r0, [r4, r1]
    // add r1, r1, #2
    // ldrh r1, [r4, r1]
    // mov r2, #0xa
    // bl ov15_021FBD28
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // strh r0, [r4, r1]
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x1a
    // bl ManagedSprite_SetAnim
    // mov r5, #1
    // b _021FCF2E
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // ldrsh r0, [r4, r1]
    // add r1, r1, #2
    // ldrh r1, [r4, r1]
    // mov r2, #1
    // bl ov15_021FBD28
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // strh r0, [r4, r1]
    // mov r0, #0xb5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // mov r0, #0xb5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0x1a
    // bl ManagedSprite_SetAnim
    // mov r5, #1
    // b _021FCF2E
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // ldrsh r0, [r4, r1]
    // add r1, r1, #2
    // mov r2, #9
    // ldrh r1, [r4, r1]
    // mvn r2, r2
    // bl ov15_021FBD28
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // strh r0, [r4, r1]
    // mov r0, #0xb7
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // mov r0, #0xb7
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0x1c
    // bl ManagedSprite_SetAnim
    // mov r5, #2
    // b _021FCF2E
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // ldrsh r0, [r4, r1]
    // add r1, r1, #2
    // mov r2, #0
    // ldrh r1, [r4, r1]
    // mvn r2, r2
    // bl ov15_021FBD28
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // strh r0, [r4, r1]
    // mov r0, #0x2e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // mov r0, #0x2e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x1c
    // bl ManagedSprite_SetAnim
    // mov r5, #2
    // b _021FCF2E
    // mov r5, #3
    // b _021FCF2E
    // mov r5, #4
    // b _021FCF2E
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // add r0, r4, r1
    // add r1, r1, #2
    // ldrh r1, [r4, r1]
    // bl sub_020881C0
    // add r5, r0, #0
    // bne _021FCF2E
    // ldr r0, _021FCFBC ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // beq _021FCF26
    // mov r5, #3
    // b _021FCF2E
    // mov r0, #2
    // tst r0, r1
    // beq _021FCF2E
    // mov r5, #4
    // cmp r5, #4
    // bhi _021FCFB2
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FCF3E: ; jump table
    // add r0, r4, #0
    // bl ov15_021FF068
    // add r0, r4, #0
    // mov r1, #2
    // bl ov15_021FEDEC
    // ldr r0, _021FCFC0 ; =0x00000637
    // bl PlaySE
    // add sp, #4
    // mov r0, #0x12
    // pop {r3, r4, r5, r6, pc}
    // add r0, r4, #0
    // bl ov15_021FF068
    // add r0, r4, #0
    // mov r1, #2
    // bl ov15_021FEDEC
    // ldr r0, _021FCFC0 ; =0x00000637
    // bl PlaySE
    // add sp, #4
    // mov r0, #0x12
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, _021FCFC4 ; =0x000005DC
    // bl PlaySE
    // mov r0, #0x13
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x26
    // mov r2, #9
    // mov r3, #8
    // bl ov15_021FD7D0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #SEQ_SE_GS_GEARCANCEL>>6
    // lsl r0, r0, #6
    // bl PlaySE
    // mov r0, #0x14
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x13
    // mov r2, #9
    // mov r3, #8
    // bl ov15_021FD7D0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0x12
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _021FCFB8: .word 0x00000682
    // _021FCFBC: .word gSystem
    // _021FCFC0: .word 0x00000637
    // _021FCFC4: .word 0x000005DC
    // TODO: decompile
}




void ov15_021FCFC8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r0, #0x44
    // mov r1, #1
    // bl sub_0200E5D4
    // add r0, r5, #0
    // bl ov15_021FF834
    // add r0, r5, #0
    // add r0, #0x34
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x4e
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r4, r0, #0
    // mov r2, #0x1a
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // lsl r2, r2, #6
    // mov r0, #0xbd
    // ldrsh r3, [r5, r2]
    // add r2, r2, #4
    // lsl r0, r0, #2
    // ldr r2, [r5, r2]
    // ldr r0, [r5, r0]
    // mul r2, r3
    // mov r3, #6
    // bl BufferIntegerAsString
    // mov r0, #0xbd
    // ldr r1, _021FD050 ; =0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r5, #0
    // mov r1, #1
    // bl ov15_021FEF48
    // ldr r1, _021FD054 ; =0x00000616
    // strb r0, [r5, r1]
    // add r0, r5, #0
    // bl ov15_02200428
    // add r0, r5, #0
    // bl ov15_021FFF24
    // add r0, r5, #0
    // mov r1, #0
    // bl ov15_021FD788
    // mov r0, #0x15
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _021FD050: .word 0x000005E4
    // _021FD054: .word 0x00000616
    // TODO: decompile
}




void ov15_021FD058(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021FD0E4 ; =0x00000684
    // mov r1, #0
    // str r1, [r5, r0]
    // mov r0, #0x85
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #1
    // bl sub_0200E5D4
    // add r0, r5, #0
    // add r0, #0x44
    // mov r1, #1
    // bl sub_0200E5D4
    // add r0, r5, #0
    // add r0, #0x34
    // mov r1, #1
    // bl ClearFrameAndWindow2
    // add r0, r5, #0
    // add r0, #0x34
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r5, #4
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // bl ov15_02200428
    // add r0, r5, #0
    // bl ov15_021FFF24
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r4, [r5, r0]
    // add r0, r5, #0
    // bl ov15_021FA074
    // add r1, r4, #4
    // add r4, #0x64
    // add r2, r0, #0
    // ldrb r4, [r4]
    // mov r3, #0xc
    // add r0, r5, #0
    // mul r3, r4
    // add r1, r1, r3
    // mov r3, #0
    // bl ov15_02200140
    // add r0, r5, #0
    // bl ov15_021FE868
    // add r0, r5, #0
    // bl ov15_021FED3C
    // add r0, r5, #0
    // bl ov15_021FB518
    // add r0, r5, #0
    // mov r1, #1
    // bl ov15_02200458
    // add r0, r5, #0
    // mov r1, #1
    // bl ov15_021FD788
    // mov r0, #0x10
    // pop {r3, r4, r5, pc}
    // _021FD0E4: .word 0x00000684
    // TODO: decompile
}




void ov15_021FD0E8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021FD108 ; =0x00000616
    // ldrb r0, [r4, r0]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021FD102
    // add r0, r4, #0
    // bl ov15_021FF004
    // mov r0, #0x16
    // pop {r4, pc}
    // mov r0, #0x15
    // pop {r4, pc}
    // nop
    // _021FD108: .word 0x00000616
    // TODO: decompile
}




void ov15_021FD10C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, _021FD23C ; =0x00000804
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _021FD12A
    // cmp r0, #2
    // beq _021FD1BA
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // b _021FD234
    // add r0, r4, #0
    // bl ov15_021FF058
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x4f
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // mov r0, #0x1a
    // lsl r0, r0, #6
    // ldrsh r0, [r4, r0]
    // cmp r0, #1
    // ble _021FD15E
    // mov r2, #0xbd
    // lsl r2, r2, #2
    // ldr r0, [r4, r2]
    // sub r2, #0xc0
    // ldr r2, [r4, r2]
    // mov r1, #0
    // add r2, #0x66
    // ldrh r2, [r2]
    // bl BufferItemNamePlural
    // b _021FD172
    // mov r2, #0xbd
    // lsl r2, r2, #2
    // ldr r0, [r4, r2]
    // sub r2, #0xc0
    // ldr r2, [r4, r2]
    // mov r1, #0
    // add r2, #0x66
    // ldrh r2, [r2]
    // bl BufferItemName
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #1
    // mov r2, #0x1a
    // mov r0, #0xbd
    // str r1, [sp, #4]
    // lsl r2, r2, #6
    // ldrsh r3, [r4, r2]
    // add r2, r2, #4
    // lsl r0, r0, #2
    // ldr r2, [r4, r2]
    // ldr r0, [r4, r0]
    // mul r2, r3
    // mov r3, #6
    // bl BufferIntegerAsString
    // mov r0, #0xbd
    // ldr r1, _021FD240 ; =0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // add r2, r5, #0
    // bl StringExpandPlaceholders
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, #0
    // mov r1, #0
    // bl ov15_021FEF48
    // ldr r1, _021FD244 ; =0x00000616
    // add sp, #8
    // strb r0, [r4, r1]
    // mov r0, #0x17
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov15_021FF058
    // ldr r0, _021FD248 ; =0x00000684
    // mov r1, #0
    // str r1, [r4, r0]
    // mov r0, #0x85
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #1
    // bl sub_0200E5D4
    // add r0, r4, #0
    // add r0, #0x34
    // mov r1, #1
    // bl ClearFrameAndWindow2
    // add r0, r4, #0
    // add r0, #0x34
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r4, #4
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r5, [r4, r0]
    // add r0, r4, #0
    // bl ov15_021FA074
    // add r1, r5, #4
    // add r5, #0x64
    // add r2, r0, #0
    // ldrb r5, [r5]
    // mov r3, #0xc
    // add r0, r4, #0
    // mul r3, r5
    // add r1, r1, r3
    // mov r3, #0
    // bl ov15_02200140
    // add r0, r4, #0
    // bl ov15_021FE868
    // add r0, r4, #0
    // bl ov15_021FED3C
    // add r0, r4, #0
    // bl ov15_021FB518
    // add r0, r4, #0
    // mov r1, #1
    // bl ov15_02200458
    // add r0, r4, #0
    // mov r1, #1
    // bl ov15_021FD788
    // add sp, #8
    // mov r0, #0x10
    // pop {r3, r4, r5, pc}
    // mov r0, #0x16
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _021FD23C: .word 0x00000804
    // _021FD240: .word 0x000005E4
    // _021FD244: .word 0x00000616
    // _021FD248: .word 0x00000684
    // TODO: decompile
}




void ov15_021FD24C(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, _021FD2F4 ; =0x00000616
    // ldrb r0, [r4, r0]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // beq _021FD264
    // add sp, #4
    // mov r0, #0x17
    // pop {r3, r4, pc}
    // ldr r0, _021FD2F8 ; =0x00000643
    // bl PlaySE
    // mov r1, #0x1a
    // lsl r1, r1, #6
    // mov r0, #0x8f
    // ldrsh r2, [r4, r1]
    // add r1, r1, #4
    // lsl r0, r0, #2
    // ldr r1, [r4, r1]
    // ldr r0, [r4, r0]
    // mul r1, r2
    // bl PlayerProfile_AddMoney
    // mov r0, #0x1a
    // lsl r0, r0, #6
    // ldrsh r0, [r4, r0]
    // cmp r0, #1
    // bne _021FD2A8
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // add r0, r1, #0
    // add r0, #0x75
    // ldrb r0, [r0]
    // cmp r0, #0xff
    // beq _021FD2B4
    // add r0, r1, #0
    // add r0, #0x75
    // ldrb r0, [r0]
    // add r1, #0x75
    // add r0, r0, #1
    // strb r0, [r1]
    // b _021FD2B4
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #2
    // add r0, #0x75
    // strb r1, [r0]
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r2, [r4, r0]
    // add r0, r2, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // add r3, r1, #0
    // mul r3, r0
    // add r1, r2, r3
    // mov r0, #6
    // mov r3, #0x1a
    // str r0, [sp]
    // add r2, #0x66
    // lsl r3, r3, #6
    // ldr r0, [r1, #4]
    // ldrb r1, [r1, #0xd]
    // ldrh r2, [r2]
    // ldrh r3, [r4, r3]
    // bl Pocket_TakeItem
    // add r0, r4, #0
    // bl ov15_021F9F08
    // add r4, #0x34
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x18
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021FD2F4: .word 0x00000616
    // _021FD2F8: .word 0x00000643
    // TODO: decompile
}




void ov15_021FD2FC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021FD39C ; =0x00000616
    // ldrb r0, [r5, r0]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021FD396
    // ldr r0, _021FD3A0 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _021FD31E
    // ldr r0, _021FD3A4 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x24]
    // cmp r0, #0
    // beq _021FD396
    // ldr r0, _021FD3A8 ; =0x00000684
    // mov r1, #0
    // str r1, [r5, r0]
    // mov r0, #0x85
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #1
    // bl sub_0200E5D4
    // add r0, r5, #0
    // add r0, #0x34
    // mov r1, #1
    // bl ClearFrameAndWindow2
    // add r0, r5, #0
    // add r0, #0x34
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r5, #4
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r4, [r5, r0]
    // add r0, r5, #0
    // bl ov15_021FA074
    // add r1, r4, #4
    // add r4, #0x64
    // add r2, r0, #0
    // ldrb r4, [r4]
    // mov r3, #0xc
    // add r0, r5, #0
    // mul r3, r4
    // add r1, r1, r3
    // mov r3, #1
    // bl ov15_02200140
    // add r0, r5, #0
    // bl ov15_021FE868
    // add r0, r5, #0
    // bl ov15_021FED3C
    // add r0, r5, #0
    // bl ov15_021FB518
    // add r0, r5, #0
    // bl ov15_021FA170
    // add r0, r5, #0
    // mov r1, #1
    // bl ov15_02200458
    // add r0, r5, #0
    // mov r1, #1
    // bl ov15_021FD788
    // mov r0, #0x10
    // pop {r3, r4, r5, pc}
    // mov r0, #0x18
    // pop {r3, r4, r5, pc}
    // nop
    // _021FD39C: .word 0x00000616
    // _021FD3A0: .word gSystem
    // _021FD3A4: .word gSystem + 0x40
    // _021FD3A8: .word 0x00000684
    // TODO: decompile
}




void ov15_021FD3AC(void) {
}




void ov15_021FD3C0(void) {
    ov15_021FED3C();
    ov15_021FD788(r4, 0);
    ov15_021FFF24(r4);
    sub_020880CC(1, 6);
    // ldr r0, [r4, r0]
    // add r0, #0x68
    // strh r1, [r0]
}




void ov15_021FD3F0(void) {
    // cmp r0, #4
    // beq _021FD3FC
    // cmp r1, #0x5f
    // blo _021FD400
    // cmp r1, #0x63
    // bhs _021FD400
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov15_021FD404(void) {
    // push {r3, r4, r5, lr}
    // lsl r1, r1, #2
    // add r1, r0, r1
    // ldr r0, _021FD438 ; =0x00000694
    // cmp r2, #7
    // ldr r0, [r1, r0]
    // ldr r5, [r0, #0xc]
    // bgt _021FD434
    // lsl r4, r2, #5
    // add r0, r5, r4
    // mov r1, #0
    // mov r2, #0x20
    // bl GXS_LoadBGPltt
    // add r0, r5, r4
    // mov r1, #0x20
    // mov r2, #0x40
    // bl GXS_LoadBGPltt
    // add r0, r5, r4
    // mov r1, #0x60
    // mov r2, #0x20
    // bl GXS_LoadBGPltt
    // pop {r3, r4, r5, pc}
    // nop
    // _021FD438: .word 0x00000694
    // TODO: decompile
}




void ov15_021FD43C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r1, [sp, #0x10]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // add r6, r0, #0
    // add r4, r2, #0
    // bl GetBgTilemapBuffer
    // str r0, [sp, #0x14]
    // cmp r4, #6
    // beq _021FD4B6
    // ldr r1, _021FD4BC ; =ov15_022013A8
    // lsl r0, r4, #5
    // add r5, r1, r0
    // ldr r0, [sp, #0x10]
    // mov r7, #0
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // ldrb r0, [r5]
    // cmp r0, #1
    // bne _021FD48E
    // ldrb r0, [r5, #4]
    // add r1, r4, #0
    // str r0, [sp]
    // ldrb r0, [r5, #5]
    // str r0, [sp, #4]
    // ldrb r0, [r5, #6]
    // str r0, [sp, #8]
    // ldrb r3, [r5, #2]
    // ldrb r2, [r5, #1]
    // add r0, r6, #0
    // lsl r3, r3, #5
    // add r2, r2, r3
    // lsl r3, r2, #1
    // ldr r2, [sp, #0x14]
    // add r2, r2, r3
    // ldrb r3, [r5, #3]
    // bl LoadRectToBgTilemapRect
    // b _021FD4AE
    // cmp r0, #2
    // bne _021FD4AE
    // ldrb r0, [r5, #4]
    // add r1, r4, #0
    // mov r2, #0
    // str r0, [sp]
    // ldrb r0, [r5, #5]
    // str r0, [sp, #4]
    // ldrb r0, [r5, #6]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldrb r3, [r5, #3]
    // add r0, r6, #0
    // bl FillBgTilemapRect
    // add r7, r7, #1
    // add r5, #8
    // cmp r7, #4
    // blt _021FD462
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FD4BC: .word ov15_022013A8
    // TODO: decompile
}




void ov15_021FD4C0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // str r1, [sp, #0x10]
    // lsl r1, r1, #0x18
    // add r5, r2, #0
    // lsr r1, r1, #0x18
    // add r6, r0, #0
    // str r3, [sp, #0x14]
    // bl GetBgTilemapBuffer
    // str r0, [sp, #0x18]
    // sub r0, r5, #1
    // ldr r1, _021FD56C ; =ov15_02201340
    // lsl r0, r0, #3
    // add r5, r1, r0
    // ldr r0, [sp, #0x10]
    // mov r4, #0
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldrb r0, [r5, #1]
    // add r1, r7, #0
    // mov r2, #0
    // str r0, [sp]
    // ldrb r0, [r5, #2]
    // str r0, [sp, #4]
    // ldrb r0, [r5, #3]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldrb r3, [r5]
    // add r0, r6, #0
    // bl FillBgTilemapRect
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #2
    // blt _021FD4E6
    // mov r1, #0
    // ldr r0, [sp, #0x14]
    // mvn r1, r1
    // cmp r0, r1
    // beq _021FD566
    // ldr r1, _021FD570 ; =ov15_02201328
    // lsl r0, r0, #2
    // add r3, r1, r0
    // ldr r0, [sp, #0x14]
    // cmp r0, #1
    // ldrb r0, [r3, #1]
    // bhi _021FD546
    // str r0, [sp]
    // ldrb r0, [r3, #2]
    // ldr r1, [sp, #0x10]
    // mov r4, #6
    // str r0, [sp, #4]
    // ldrb r0, [r3, #3]
    // lsl r1, r1, #0x18
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // lsl r4, r4, #8
    // ldrb r3, [r3]
    // add r0, r6, #0
    // lsr r1, r1, #0x18
    // add r2, r2, r4
    // bl LoadRectToBgTilemapRect
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // str r0, [sp]
    // ldrb r0, [r3, #2]
    // ldr r1, [sp, #0x10]
    // mov r4, #0x1b
    // str r0, [sp, #4]
    // ldrb r0, [r3, #3]
    // lsl r1, r1, #0x18
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // lsl r4, r4, #6
    // ldrb r3, [r3]
    // add r0, r6, #0
    // lsr r1, r1, #0x18
    // add r2, r2, r4
    // bl LoadRectToBgTilemapRect
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021FD56C: .word ov15_02201340
    // _021FD570: .word ov15_02201328
    // TODO: decompile
}




void ov15_021FD574(void) {
    GF_AssertFail();
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FD59A: ; jump table
    // str r0, [sp]
    // add r3, sp, #4
    GfGfxLoader_GetScrnData(0xf, 0x2b, 0);
    // ldr r3, [sp, #4]
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)r4), 5, r3, *((u32*)(r3 + 8)));
    GetBgTilemapBuffer(*((u32*)r4), 5);
    // ldr r1, [sp, #4]
    DC_FlushRange(*((u32*)(r1 + 8)));
    ov15_021FD43C(*((u32*)r4), 5, r6);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 5);
    Heap_Free(r5);
    // str r0, [sp]
    // add r3, sp, #4
    GfGfxLoader_GetScrnData(0xf, 0x27, 0);
    // ldr r3, [sp, #4]
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)r4), 6, r3, *((u32*)(r3 + 8)));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 6);
    Heap_Free(r5);
    ov15_0220005C(r4, 0, 0, 0);
    // str r0, [sp]
    // add r3, sp, #4
    GfGfxLoader_GetScrnData(0xf, 0x2c, 0);
    // ldr r3, [sp, #4]
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)r4), 5, r3, *((u32*)(r3 + 8)));
    GetBgTilemapBuffer(*((u32*)r4), 5);
    // ldr r1, [sp, #4]
    DC_FlushRange(*((u32*)(r1 + 8)));
    ov15_021FD4C0(*((u32*)r4), 5, r6, r7);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 5);
    Heap_Free(r5);
    // str r0, [sp]
    // add r3, sp, #4
    GfGfxLoader_GetScrnData(0xf, 0x2a, 0);
    // ldr r3, [sp, #4]
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)r4), 6, r3, *((u32*)(r3 + 8)));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 6);
    Heap_Free(r5);
    ov15_02200294(r4);
    ov15_021FA098(r4);
    ov15_0220005C(r4, r6, r0, 0);
    // str r0, [sp]
    // add r3, sp, #4
    GfGfxLoader_GetScrnData(0xf, 0x2d, 0);
    // ldr r3, [sp, #4]
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)r4), 6, r3, *((u32*)(r3 + 8)));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 6);
    Heap_Free(r5);
    ov15_021FD43C(*((u32*)r4), 5, r6);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 5);
    // str r0, [sp]
    // add r3, sp, #4
    GfGfxLoader_GetScrnData(0xf, 0x34, 0);
    // ldr r3, [sp, #4]
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)r4), 6, r3, *((u32*)(r3 + 8)));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 6);
    Heap_Free(r5);
    // str r0, [sp]
    // add r3, sp, #4
    GfGfxLoader_GetScrnData(0xf, 0x35, 0);
    // ldr r3, [sp, #4]
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)r4), 6, r3, *((u32*)(r3 + 8)));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 6);
    Heap_Free(r5);
}




void ov15_021FD774(void) {
}




void ov15_021FD788(void) {
    ov15_022004DC(1);
    ov15_021FF29C(r4, 0);
    // add r0, #0x74
    ScheduleWindowCopyToVram(r4);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnimationFrame((0xa7 << 2), 0);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0xa7 << 2), 0x10);
    ov15_022004DC(0);
    ov15_021FF844(r4);
}




void ov15_021FD7D0(void) {
    // add r0, r0, r4
    *((u8*)(r0 + 2)) = 0;
    // strb r1, [r0]
    // and r1, r2
    // bic r5, r4
    // orr r1, r5
    *((u8*)(r0 + 1)) = 0xf;
    // bic r5, r1
    // orr r2, r5
    *((u8*)(r0 + 1)) = ((r3 << 0x1c) >> 0x18);
    // ldr r2, [sp, #8]
    *((u32*)(r0 + 4)) = ((r3 << 0x1c) >> 0x18);
    // bic r2, r4
    *((u8*)(r0 + 3)) = *((u8*)(r0 + 3));
    // bic r2, r1
    *((u8*)(r0 + 3)) = *((u8*)(r0 + 3));
}




void ov15_021FD810(void) {
    // add r0, r4, r2
    *((u8*)(r0 + 2)) = 1;
    // strb r1, [r0]
    *((u32*)(r0 + 4)) = r3;
    // bic r5, r3
    *((u8*)(r0 + 3)) = *((u8*)(r0 + 3));
    // bic r5, r3
    *((u8*)(r0 + 3)) = *((u8*)(r0 + 3));
    // add r5, r4, r0
    // ldr r0, [r5, r4]
    ManagedSprite_SetAnimationFrame(((0x25 << 6) >> 2), 0, (0x25 << 6), 0xf0);
    // ldr r0, [r5, r4]
    ManagedSprite_SetAnim(r6);
}




void ov15_021FD850(void) {
    // add r4, r0, r5
    // ldrb r1, [r4]
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_IsAnimated(((0x25 << 6) >> 2), (*((u8*)(r4 + 2)) << 2));
    // ldrb r1, [r4]
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_SetPaletteOverride((r5 >> 2), ((*((u8*)(r4 + 1)) << 0x1c) >> 0x1c), *((u8*)(r4 + 3)));
    // bic r0, r1
    // and r1, r2
    // orr r0, r1
    *((u8*)(r4 + 3)) = *((u8*)(r4 + 3));
    // bic r1, r3
    // orr r1, r2
    *((u8*)(r4 + 3)) = (((((*((u8*)(r4 + 3)) << 0x1c) >> 0x1c) + 1) << 0x18) >> 0x18);
    // ldrb r1, [r4]
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_SetPaletteOverride((r5 >> 2), ((*((u8*)(r4 + 1)) << 0x18) >> 0x1c), ((((((((((((*((u8*)(r4 + 3)) << 0x1c) >> 0x1c) + 1) << 0x18) >> 0x18) << 0x18) >> 0x1c) + 1) << 0x18) >> 0x18) << 0x1c) >> 0x18), 0xf0);
    // bic r1, r0
    *((u8*)(r4 + 3)) = *((u8*)(r4 + 3));
    // bic r0, r1
    // and r1, r2
    // orr r0, r1
    *((u8*)(r4 + 3)) = *((u8*)(r4 + 3));
    // bic r0, r1
    // orr r0, r1
    *((u8*)(r4 + 3)) = (((((*((u8*)(r4 + 3)) << 0x1c) >> 0x1c) + 1) << 0x18) >> 0x18);
}




void ov15_021FD93C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #6
    // bl GF3dRender_InitSimpleManager
    // ldr r2, _021FDA94 ; =0x04000060
    // ldr r0, _021FDA98 ; =0xFFFFCFFF
    // ldrh r1, [r2]
    // and r1, r0
    // mov r0, #0x10
    // orr r0, r1
    // strh r0, [r2]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl G3X_SetFog
    // mov r0, #0
    // ldr r2, _021FDA9C ; =0x00007FFF
    // add r1, r0, #0
    // add r3, r0, #0
    // str r0, [sp]
    // bl G3X_SetClearColor
    // ldr r0, _021FDAA0 ; =0x00003DEF
    // ldr r1, _021FDAA4 ; =0x0000294A
    // mov r2, #0
    // bl NNS_G3dGlbMaterialColorDiffAmb
    // ldr r0, _021FDAA0 ; =0x00003DEF
    // mov r2, #0
    // add r1, r0, #0
    // bl NNS_G3dGlbMaterialColorSpecEmi
    // mov r0, #0x1f
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0xf
    // mov r2, #3
    // add r3, r1, #0
    // str r1, [sp, #4]
    // bl NNS_G3dGlbPolygonAttr
    // ldr r2, _021FDA94 ; =0x04000060
    // ldr r0, _021FDA98 ; =0xFFFFCFFF
    // ldrh r1, [r2]
    // and r1, r0
    // mov r0, #0x20
    // orr r0, r1
    // strh r0, [r2]
    // ldr r0, _021FDAA8 ; =ov15_02201304
    // bl G3X_SetEdgeColorTable
    // mov r0, #0
    // add r1, r0, #0
    // bl SetBgPriority
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #6
    // bl Camera_New
    // ldr r2, _021FDAAC ; =0x00000818
    // ldr r4, _021FDAB0 ; =ov15_02200500
    // str r0, [r5, r2]
    // add r0, r2, #0
    // add r0, #0xec
    // add r3, r5, r0
    // ldmia r4!, {r0, r1}
    // add r6, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // ldr r4, _021FDAB4 ; =ov15_0220053C
    // str r0, [r3]
    // add r0, r2, #0
    // add r0, #0xf8
    // add r3, r5, r0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // str r0, [r3]
    // ldr r3, _021FDAB8 ; =0x0000091C
    // ldrb r0, [r5, r3]
    // add r1, r3, #0
    // sub r1, #0xc
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r5, r2]
    // add r2, r3, #0
    // str r0, [sp, #8]
    // add r3, r3, #2
    // sub r2, #8
    // ldrh r3, [r5, r3]
    // ldr r1, [r5, r1]
    // add r0, r6, #0
    // add r2, r5, r2
    // bl Camera_Init_FromTargetDistanceAndAngle
    // ldr r0, _021FDABC ; =0x00000934
    // ldr r3, _021FDAC0 ; =ov15_0220050C
    // add r2, r5, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, _021FDAC4 ; =0x00000808
    // add r0, r5, r0
    // bl ov15_021FDAD0
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // ldr r0, _021FDAC4 ; =0x00000808
    // add r1, #0x64
    // ldrb r1, [r1]
    // add r0, r5, r0
    // mov r2, #7
    // add r1, r1, #1
    // bl ov15_021FDAF4
    // ldr r2, _021FDAAC ; =0x00000818
    // mov r0, #0x7b
    // ldr r1, _021FDAC8 ; =0x006A4000
    // ldr r2, [r5, r2]
    // lsl r0, r0, #0xc
    // bl Camera_SetPerspectiveClippingPlane
    // ldr r0, _021FDAAC ; =0x00000818
    // ldr r0, [r5, r0]
    // bl Camera_SetStaticPtr
    // mov r6, #1
    // ldr r7, _021FDA9C ; =0x00007FFF
    // mov r4, #0
    // lsl r6, r6, #0xc
    // mov r2, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // add r3, r2, #0
    // bl NNS_G3dGlbLightVector
    // add r0, r4, #0
    // add r1, r7, #0
    // bl NNS_G3dGlbLightColor
    // add r4, r4, #1
    // cmp r4, #4
    // blo _021FDA58
    // add r0, r5, #0
    // bl ov15_021FDD70
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r1, _021FDACC ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #2
    // orr r0, r2
    // strh r0, [r1]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021FDA94: .word 0x04000060
    // _021FDA98: .word 0xFFFFCFFF
    // _021FDA9C: .word 0x00007FFF
    // _021FDAA0: .word 0x00003DEF
    // _021FDAA4: .word 0x0000294A
    // _021FDAA8: .word ov15_02201304
    // _021FDAAC: .word 0x00000818
    // _021FDAB0: .word ov15_02200500
    // _021FDAB4: .word ov15_0220053C
    // _021FDAB8: .word 0x0000091C
    // _021FDABC: .word 0x00000934
    // _021FDAC0: .word ov15_0220050C
    // _021FDAC4: .word 0x00000808
    // _021FDAC8: .word 0x006A4000
    // _021FDACC: .word 0x04000008
    // TODO: decompile
}




void ov15_021FDAD0(void) {
    // str r3, [r0, r2]
    // str r3, [r0, r1]
    // add r1, #8
    // str r3, [r0, r1]
    // add r1, #0xc
    // strh r3, [r0, r1]
    // add r2, #0xe
    // strh r3, [r0, r2]
}




void ov15_021FDAF4(void) {
    // ldrh r5, [r0, r4]
    // ldrh r3, [r0, r3]
    // sub r3, #8
    // ldr r5, [r0, r3]
    // sub r3, #0xc
    // str r5, [r0, r3]
    // sub r3, #8
    // str r1, [r0, r3]
    // strh r1, [r0, r4]
    // strh r2, [r0, r1]
    // str r1, [r0, r2]
}




void ov15_021FDB2C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // mov r0, #0x90
    // add r2, r1, #0
    // add r1, r0, #0
    // ldr r3, _021FDC64 ; =ov15_02200790
    // mul r2, r0
    // add r1, #0x98
    // add r4, r3, r2
    // ldrh r2, [r5, r1]
    // add r1, r0, #0
    // add r1, #0x9a
    // ldrh r1, [r5, r1]
    // cmp r2, r1
    // beq _021FDC28
    // add r1, r0, #0
    // add r1, #0x98
    // ldrh r1, [r5, r1]
    // add r2, r1, #1
    // add r1, r0, #0
    // add r1, #0x98
    // strh r2, [r5, r1]
    // add r1, r0, #0
    // add r1, #0x8c
    // add r0, #0x90
    // ldr r1, [r5, r1]
    // ldr r0, [r5, r0]
    // lsl r1, r1, #4
    // lsl r0, r0, #4
    // str r1, [sp, #8]
    // ldrh r7, [r4, r1]
    // ldrh r1, [r4, r0]
    // str r0, [sp, #4]
    // sub r0, r1, r7
    // bpl _021FDB76
    // neg r0, r0
    // cmp r1, r7
    // bhs _021FDB80
    // mov r1, #0
    // mvn r1, r1
    // b _021FDB82
    // mov r1, #1
    // mov r2, #2
    // lsl r2, r2, #0xe
    // cmp r0, r2
    // ble _021FDB94
    // lsl r2, r2, #1
    // sub r0, r2, r0
    // mov r2, #0
    // mvn r2, r2
    // mul r1, r2
    // cmp r1, #0
    // ldr r2, _021FDC68 ; =0x0000012A
    // ble _021FDBB0
    // ldrh r1, [r5, r2]
    // str r1, [sp]
    // sub r1, r2, #2
    // ldrh r6, [r5, r1]
    // ldr r1, [sp]
    // bl _s32_div_f
    // mul r0, r6
    // add r0, r7, r0
    // str r0, [sp, #0x14]
    // b _021FDBC4
    // ldrh r1, [r5, r2]
    // str r1, [sp]
    // sub r1, r2, #2
    // ldrh r6, [r5, r1]
    // ldr r1, [sp]
    // bl _s32_div_f
    // mul r0, r6
    // sub r0, r7, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // add r0, r4, r0
    // ldrh r7, [r0, #2]
    // ldr r0, [sp, #4]
    // add r0, r4, r0
    // ldrh r0, [r0, #2]
    // sub r0, r0, r7
    // bl _s32_div_f
    // mul r0, r6
    // add r0, r7, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // add r0, r4, r0
    // ldr r7, [r0, #8]
    // ldr r0, [sp, #4]
    // add r0, r4, r0
    // ldr r0, [r0, #8]
    // sub r0, r0, r7
    // bl _s32_div_f
    // mul r0, r6
    // add r0, r7, r0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // add r0, r4, r0
    // ldr r7, [r0, #0xc]
    // ldr r0, [sp, #4]
    // add r0, r4, r0
    // ldr r0, [r0, #0xc]
    // sub r0, r0, r7
    // bl _s32_div_f
    // mul r0, r6
    // add r1, r7, r0
    // mov r0, #0x43
    // lsl r0, r0, #2
    // ldr r2, [sp, #0x14]
    // add r3, r0, #2
    // strh r2, [r5, r0]
    // ldr r2, [sp, #0x10]
    // strh r2, [r5, r3]
    // sub r3, r0, #4
    // ldr r2, [sp, #0xc]
    // add r0, #0x24
    // str r2, [r5, r3]
    // str r1, [r5, r0]
    // mov r1, #0x4a
    // lsl r1, r1, #2
    // add r0, r1, #2
    // ldrh r2, [r5, r1]
    // ldrh r0, [r5, r0]
    // cmp r2, r0
    // bne _021FDC60
    // sub r0, r1, #4
    // mov r2, #0
    // ldr r0, [r5, r0]
    // mvn r2, r2
    // cmp r0, r2
    // beq _021FDC60
    // add r0, r1, #0
    // sub r0, #8
    // ldr r3, [r5, r0]
    // add r0, r1, #0
    // sub r0, #0xc
    // str r3, [r5, r0]
    // sub r0, r1, #4
    // ldr r3, [r5, r0]
    // add r0, r1, #0
    // sub r0, #8
    // str r3, [r5, r0]
    // sub r0, r1, #4
    // str r2, [r5, r0]
    // mov r0, #0
    // strh r0, [r5, r1]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FDC64: .word ov15_02200790
    // _021FDC68: .word 0x0000012A
    // TODO: decompile
}




void ov15_021FDC6C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov15_021FDF20
    // ldr r0, _021FDC84 ; =0x00000818
    // ldr r0, [r4, r0]
    // bl Camera_Delete
    // bl GF3dRender_DeleteSimpleManager
    // pop {r4, pc}
    // nop
    // _021FDC84: .word 0x00000818
    // TODO: decompile
}




void ov15_021FDC88(void) {
    // push {r4, r5, lr}
    // sub sp, #0x3c
    // ldr r4, _021FDD34 ; =ov15_022005CC
    // add r5, r0, #0
    // add r3, sp, #0x18
    // mov r2, #4
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021FDC94
    // ldr r0, [r4]
    // add r2, sp, #0xc
    // str r0, [r3]
    // ldr r3, _021FDD38 ; =ov15_022004F4
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // ldr r1, _021FDD3C ; =0x00000615
    // str r0, [r2]
    // ldr r0, _021FDD40 ; =0x00000808
    // ldrb r1, [r5, r1]
    // add r0, r5, r0
    // bl ov15_021FDB2C
    // ldr r3, _021FDD44 ; =0x0000091C
    // ldr r2, _021FDD48 ; =0x00000818
    // ldrb r0, [r5, r3]
    // add r1, r2, #0
    // add r3, r3, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r5, r2]
    // add r1, #0xf8
    // str r0, [sp, #8]
    // add r0, r2, #0
    // add r0, #0xec
    // add r2, #0xfc
    // ldrh r3, [r5, r3]
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // add r2, r5, r2
    // bl Camera_Init_FromTargetDistanceAndAngle
    // bl Thunk_G3X_Reset
    // bl Camera_PushLookAtToNNSGlb
    // ldr r0, _021FDD4C ; =0x0000081C
    // add r4, r5, r0
    // add r0, r4, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // lsl r0, r0, #2
    // add r0, r4, r0
    // add r0, #0xa0
    // ldr r0, [r0]
    // bl ov15_021FDD54
    // add r0, r4, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // lsl r0, r0, #2
    // add r0, r4, r0
    // add r0, #0xc0
    // ldr r0, [r0]
    // bl ov15_021FDD54
    // add r0, r4, #0
    // add r0, #0xe0
    // ldr r0, [r0]
    // bl ov15_021FDD54
    // ldr r1, _021FDD50 ; =0x00000934
    // add r0, r4, #0
    // add r1, r5, r1
    // add r2, sp, #0x18
    // add r3, sp, #0xc
    // bl GF3dRender_DrawModel
    // mov r0, #0
    // add r1, r0, #0
    // bl RequestSwap3DBuffers
    // add sp, #0x3c
    // pop {r4, r5, pc}
    // _021FDD34: .word ov15_022005CC
    // _021FDD38: .word ov15_022004F4
    // _021FDD3C: .word 0x00000615
    // _021FDD40: .word 0x00000808
    // _021FDD44: .word 0x0000091C
    // _021FDD48: .word 0x00000818
    // _021FDD4C: .word 0x0000081C
    // _021FDD50: .word 0x00000934
    // TODO: decompile
}




void ov15_021FDD54(void) {
    // add r2, r2, r1
    // str r2, [r0]
    // str r1, [r0]
}




void ov15_021FDD70(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r7, r0, #0
    // mov r0, #0xf
    // mov r1, #6
    // bl NARC_New
    // str r0, [sp, #0x10]
    // ldr r0, _021FDF14 ; =0x00000808
    // mov r1, #6
    // add r0, r7, r0
    // mov r2, #4
    // bl HeapExp_FndInitAllocator
    // ldr r0, _021FDF18 ; =0x0000081C
    // add r4, r7, r0
    // ldr r0, _021FDF1C ; =0x00000615
    // ldrb r0, [r7, r0]
    // cmp r0, #0
    // bne _021FDDA8
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0x41
    // str r0, [sp, #4]
    // mov r0, #0x49
    // mov r1, #0x37
    // str r0, [sp]
    // b _021FDDB6
    // mov r0, #0x4c
    // str r0, [sp, #8]
    // mov r0, #0x54
    // str r0, [sp, #4]
    // mov r0, #0x5c
    // mov r1, #0x4a
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // mov r2, #6
    // bl NARC_AllocAndReadWholeMember
    // add r1, r4, #0
    // add r2, r4, #0
    // str r0, [r4, #0x58]
    // add r0, r4, #0
    // add r1, #0x54
    // add r2, #0x58
    // bl GF3dRender_InitObjFromHeader
    // ldr r0, [r4, #0x58]
    // bl NNS_G3dGetTex
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x54]
    // mov r1, #1
    // mov r2, #0x40
    // bl NNSi_G3dModifyMatFlag
    // ldr r0, [r4, #0x54]
    // mov r1, #1
    // mov r2, #0x80
    // bl NNSi_G3dModifyMatFlag
    // mov r1, #1
    // ldr r0, [r4, #0x54]
    // lsl r2, r1, #9
    // bl NNSi_G3dModifyMatFlag
    // mov r1, #1
    // ldr r0, [r4, #0x54]
    // lsl r2, r1, #0xa
    // bl NNSi_G3dModifyMatFlag
    // mov r2, #0x3f
    // ldr r0, [r4, #0x54]
    // mov r1, #1
    // lsl r2, r2, #0x18
    // bl NNSi_G3dModifyPolygonAttrMask
    // mov r6, #0
    // add r5, r4, #0
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x10]
    // add r1, r1, r6
    // mov r2, #6
    // bl NARC_AllocAndReadWholeMember
    // mov r1, #0
    // str r0, [r5, #0x5c]
    // bl NNS_G3dGetAnmByIdx
    // str r0, [sp, #0x14]
    // ldr r0, _021FDF14 ; =0x00000808
    // ldr r1, [sp, #0x14]
    // ldr r2, [r4, #0x54]
    // add r0, r7, r0
    // bl NNS_G3dAllocAnmObj
    // add r1, r5, #0
    // add r1, #0xa0
    // str r0, [r1]
    // add r0, r5, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // ldr r1, [sp, #0x14]
    // ldr r2, [r4, #0x54]
    // ldr r3, [sp, #0xc]
    // bl NNS_G3dAnmObjInit
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0x10]
    // add r1, r1, r6
    // mov r2, #6
    // bl NARC_AllocAndReadWholeMember
    // mov r1, #0
    // str r0, [r5, #0x7c]
    // bl NNS_G3dGetAnmByIdx
    // str r0, [sp, #0x18]
    // ldr r0, _021FDF14 ; =0x00000808
    // ldr r1, [sp, #0x18]
    // ldr r2, [r4, #0x54]
    // add r0, r7, r0
    // bl NNS_G3dAllocAnmObj
    // add r1, r5, #0
    // add r1, #0xc0
    // str r0, [r1]
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // ldr r1, [sp, #0x18]
    // ldr r2, [r4, #0x54]
    // ldr r3, [sp, #0xc]
    // bl NNS_G3dAnmObjInit
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #8
    // blo _021FDE0E
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp]
    // mov r2, #6
    // bl NARC_AllocAndReadWholeMember
    // add r1, r4, #0
    // add r1, #0x9c
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // mov r1, #0
    // bl NNS_G3dGetAnmByIdx
    // add r5, r0, #0
    // ldr r0, _021FDF14 ; =0x00000808
    // ldr r2, [r4, #0x54]
    // add r0, r7, r0
    // add r1, r5, #0
    // bl NNS_G3dAllocAnmObj
    // add r1, r4, #0
    // add r1, #0xe0
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0xe0
    // ldr r0, [r0]
    // ldr r2, [r4, #0x54]
    // ldr r3, [sp, #0xc]
    // add r1, r5, #0
    // bl NNS_G3dAnmObjInit
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // add r0, #0x64
    // ldrb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xe4
    // str r1, [r0]
    // add r1, r4, #0
    // add r1, #0xe4
    // ldr r1, [r1]
    // add r0, r4, #0
    // lsl r1, r1, #2
    // add r1, r4, r1
    // add r1, #0xa0
    // ldr r1, [r1]
    // bl NNS_G3dRenderObjAddAnmObj
    // add r1, r4, #0
    // add r1, #0xe4
    // ldr r1, [r1]
    // add r0, r4, #0
    // lsl r1, r1, #2
    // add r1, r4, r1
    // add r1, #0xc0
    // ldr r1, [r1]
    // bl NNS_G3dRenderObjAddAnmObj
    // add r0, r4, #0
    // add r4, #0xe0
    // ldr r1, [r4]
    // bl NNS_G3dRenderObjAddAnmObj
    // ldr r0, [sp, #0x10]
    // bl NARC_Delete
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021FDF14: .word 0x00000808
    // _021FDF18: .word 0x0000081C
    // _021FDF1C: .word 0x00000615
    // TODO: decompile
}




void ov15_021FDF20(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _021FDF80 ; =0x0000081C
    // ldr r7, _021FDF84 ; =0x00000808
    // add r0, r5, r0
    // str r0, [sp]
    // mov r6, #0
    // add r4, r0, #0
    // add r1, r4, #0
    // add r1, #0xa0
    // ldr r1, [r1]
    // add r0, r5, r7
    // bl NNS_G3dFreeAnmObj
    // add r1, r4, #0
    // add r1, #0xc0
    // ldr r1, [r1]
    // add r0, r5, r7
    // bl NNS_G3dFreeAnmObj
    // ldr r0, [r4, #0x5c]
    // bl Heap_Free
    // ldr r0, [r4, #0x7c]
    // bl Heap_Free
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #8
    // blo _021FDF30
    // ldr r1, [sp]
    // ldr r0, _021FDF84 ; =0x00000808
    // add r1, #0xe0
    // ldr r1, [r1]
    // add r0, r5, r0
    // bl NNS_G3dFreeAnmObj
    // ldr r0, [sp]
    // add r0, #0x9c
    // ldr r0, [r0]
    // bl Heap_Free
    // ldr r0, [sp]
    // ldr r0, [r0, #0x58]
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FDF80: .word 0x0000081C
    // _021FDF84: .word 0x00000808
    // TODO: decompile
}




void ov15_021FDF88(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021FE01C ; =0x0000081C
    // add r4, r5, r0
    // add r1, r4, #0
    // add r1, #0xe4
    // ldr r1, [r1]
    // add r0, r4, #0
    // lsl r1, r1, #2
    // add r1, r4, r1
    // add r1, #0xc0
    // ldr r1, [r1]
    // bl NNS_G3dRenderObjRemoveAnmObj
    // add r1, r4, #0
    // add r1, #0xe4
    // ldr r1, [r1]
    // add r0, r4, #0
    // lsl r1, r1, #2
    // add r1, r4, r1
    // add r1, #0xa0
    // ldr r1, [r1]
    // bl NNS_G3dRenderObjRemoveAnmObj
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r0, #0x64
    // ldrb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xe4
    // str r1, [r0]
    // add r1, r4, #0
    // add r1, #0xe4
    // ldr r1, [r1]
    // mov r0, #0
    // lsl r1, r1, #2
    // add r1, r4, r1
    // add r1, #0xa0
    // ldr r1, [r1]
    // str r0, [r1]
    // add r1, r4, #0
    // add r1, #0xe4
    // ldr r1, [r1]
    // lsl r1, r1, #2
    // add r1, r4, r1
    // add r1, #0xc0
    // ldr r1, [r1]
    // str r0, [r1]
    // add r1, r4, #0
    // add r1, #0xe0
    // ldr r1, [r1]
    // str r0, [r1]
    // add r1, r4, #0
    // add r1, #0xe4
    // ldr r1, [r1]
    // add r0, r4, #0
    // lsl r1, r1, #2
    // add r1, r4, r1
    // add r1, #0xa0
    // ldr r1, [r1]
    // bl NNS_G3dRenderObjAddAnmObj
    // add r1, r4, #0
    // add r1, #0xe4
    // ldr r1, [r1]
    // add r0, r4, #0
    // lsl r1, r1, #2
    // add r1, r4, r1
    // add r1, #0xc0
    // ldr r1, [r1]
    // bl NNS_G3dRenderObjAddAnmObj
    // pop {r3, r4, r5, pc}
    // _021FE01C: .word 0x0000081C
    // TODO: decompile
}




void ov15_021FE020(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // mov r0, #0x12
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #6
    // str r0, [sp, #8]
    // mov r0, #4
    // str r0, [sp, #0xc]
    // mov r2, #1
    // str r2, [sp, #0x10]
    // ldr r0, [r4]
    // add r1, r4, #4
    // mov r3, #0
    // bl AddWindowParameterized
    // mov r0, #0xd
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // mov r0, #0xc1
    // str r0, [sp, #0x10]
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x14
    // mov r2, #1
    // mov r3, #0
    // bl AddWindowParameterized
    // mov r1, #1
    // str r1, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r3, #2
    // str r3, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x24
    // mov r2, #4
    // bl AddWindowParameterized
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r2, #4
    // add r1, r4, #0
    // str r2, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // mov r0, #0x53
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // add r1, #0x34
    // mov r3, #2
    // bl AddWindowParameterized
    // mov r0, #0xd
    // str r0, [sp]
    // mov r0, #0xc
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // mov r0, #0xdb
    // str r0, [sp, #0x10]
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x44
    // mov r2, #1
    // mov r3, #0x13
    // bl AddWindowParameterized
    // mov r0, #0xc
    // str r0, [sp]
    // mov r0, #0xb
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, _021FE150 ; =0x0000012B
    // add r1, r4, #0
    // str r0, [sp, #0x10]
    // mov r2, #1
    // ldr r0, [r4]
    // add r1, #0x54
    // add r3, r2, #0
    // bl AddWindowParameterized
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #7
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // mov r0, #0x37
    // str r0, [sp, #0x10]
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x64
    // mov r2, #4
    // mov r3, #0xa
    // bl AddWindowParameterized
    // add r0, r4, #0
    // add r0, #0x64
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #7
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // mov r0, #0x45
    // str r0, [sp, #0x10]
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x74
    // mov r2, #4
    // mov r3, #0x18
    // bl AddWindowParameterized
    // add r0, r4, #0
    // add r0, #0x74
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r2, #0
    // add r1, r2, #0
    // add r0, r4, #0
    // add r0, #0xb4
    // add r2, r2, #1
    // add r4, #0x10
    // str r1, [r0]
    // cmp r2, #0x18
    // blt _021FE13E
    // add sp, #0x14
    // pop {r3, r4, pc}
    // _021FE150: .word 0x0000012B
    // TODO: decompile
}




void ov15_021FE154(void) {
    // add r0, r4, r0
    RemoveWindow((0 << 4));
    ov15_021FE3E0(r6);
    ov15_021FE1D0(r6);
}




void ov15_021FE17C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r0, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _021FE1C8
    // add r5, r7, #0
    // ldr r4, _021FE1CC ; =ov15_02200908
    // mov r6, #0
    // add r5, #0xb4
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xb
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #8]
    // mov r2, #4
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r3, [r4]
    // ldr r0, [r7]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // add r6, r6, #1
    // add r4, #0xc
    // add r5, #0x10
    // cmp r6, #0xc
    // blt _021FE192
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _021FE1CC: .word ov15_02200908
    // TODO: decompile
}




void ov15_021FE1D0(void) {
    // add r0, #0xb4
    // add r4, #0xb4
    ClearWindowTilemapAndScheduleTransfer(r0);
    RemoveWindow(r4);
    // add r0, #0xb4
    // str r7, [r0]
    // add r4, #0x10
    // add r5, #0x10
}




void ov15_021FE204(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // mov r3, #0x5d
    // lsl r3, r3, #2
    // str r0, [sp, #0x14]
    // ldr r0, [r0, r3]
    // cmp r0, #0
    // beq _021FE216
    // b _021FE3BC
    // mov r0, #7
    // str r0, [sp]
    // mov r0, #0xb
    // str r0, [sp, #4]
    // mov r2, #4
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, _021FE3C0 ; =0x000002CF
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r1, r1, r3
    // ldr r0, [r0]
    // mov r3, #0xc
    // bl AddWindowParameterized
    // mov r1, #0x5d
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #2
    // add r0, r0, r1
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // ldr r4, _021FE3C4 ; =0x0000031B
    // str r0, [sp, #0x18]
    // add r0, #0xb4
    // ldr r5, _021FE3C8 ; =ov15_022008E8
    // mov r6, #0
    // str r0, [sp, #0x18]
    // add r0, r6, #0
    // add r0, #0xd
    // lsl r7, r0, #4
    // ldr r0, [r5, #4]
    // ldr r1, [sp, #0x18]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r3, [r5]
    // ldr r0, [r0]
    // lsl r3, r3, #0x18
    // add r1, r1, r7
    // mov r2, #4
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x18]
    // mov r1, #0
    // add r0, r0, r7
    // bl FillWindowPixelBuffer
    // add r6, r6, #1
    // add r4, #0x14
    // add r5, #8
    // cmp r6, #4
    // blt _021FE252
    // ldr r0, [sp, #0x14]
    // ldr r4, _021FE3CC ; =0x000002FB
    // str r0, [sp, #0x1c]
    // add r0, #0xb4
    // ldr r5, _021FE3D0 ; =ov15_022008D0
    // mov r6, #0
    // str r0, [sp, #0x1c]
    // add r0, r6, #0
    // add r0, #0x11
    // lsl r7, r0, #4
    // ldr r0, [r5, #4]
    // ldr r1, [sp, #0x1c]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #3
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r3, [r5]
    // ldr r0, [r0]
    // lsl r3, r3, #0x18
    // add r1, r1, r7
    // mov r2, #4
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x1c]
    // mov r1, #0
    // add r0, r0, r7
    // bl FillWindowPixelBuffer
    // add r6, r6, #1
    // add r4, r4, #6
    // add r5, #8
    // cmp r6, #3
    // blt _021FE2A8
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #7
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // ldr r0, _021FE3D4 ; =0x0000030D
    // mov r2, #0x7d
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // lsl r2, r2, #2
    // add r1, r1, r2
    // ldr r0, [r0]
    // mov r2, #4
    // mov r3, #0xe
    // bl AddWindowParameterized
    // mov r1, #0x7d
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #2
    // add r0, r0, r1
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x12
    // str r0, [sp, #4]
    // mov r2, #4
    // mov r4, #0x81
    // str r2, [sp, #8]
    // mov r3, #0xb
    // ldr r0, _021FE3C4 ; =0x0000031B
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // lsl r4, r4, #2
    // ldr r0, [r0]
    // add r1, r1, r4
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x14]
    // add r1, r4, #0
    // add r0, r0, r1
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #9
    // str r0, [sp, #4]
    // mov r2, #4
    // str r2, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // ldr r0, _021FE3D8 ; =0x00000363
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r4, #0x10
    // ldr r0, [r0]
    // add r1, r1, r4
    // bl AddWindowParameterized
    // mov r1, #0x85
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #2
    // add r0, r0, r1
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0xe
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // mov r0, #3
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // ldr r0, _021FE3DC ; =0x00000387
    // mov r2, #0x89
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // lsl r2, r2, #2
    // add r1, r1, r2
    // ldr r0, [r0]
    // mov r2, #4
    // mov r3, #0x18
    // bl AddWindowParameterized
    // mov r1, #0x89
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #2
    // add r0, r0, r1
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FE3C0: .word 0x000002CF
    // _021FE3C4: .word 0x0000031B
    // _021FE3C8: .word ov15_022008E8
    // _021FE3CC: .word 0x000002FB
    // _021FE3D0: .word ov15_022008D0
    // _021FE3D4: .word 0x0000030D
    // _021FE3D8: .word 0x00000363
    // _021FE3DC: .word 0x00000387
    // TODO: decompile
}




void ov15_021FE3E0(void) {
    // str r0, [sp]
    // ldr r0, [r0, r1]
    // ldr r5, [sp]
    // add r6, #0xb4
    // add r0, #0x11
    // add r0, r6, r7
    ClearWindowTilemapAndScheduleTransfer(0, (0x5d << 2));
    // add r0, r6, r7
    RemoveWindow();
    // str r1, [r5, r0]
    // add r5, #0x10
    // ldr r0, [sp]
    // add r1, #0x60
    // add r0, r0, r1
    ClearWindowTilemapAndScheduleTransfer((0x71 << 2), (0x71 << 2));
    // ldr r0, [sp]
    // add r0, r0, r1
    RemoveWindow((0x89 << 2));
    // ldr r0, [sp]
    // str r2, [r0, r1]
    // sub r1, #0x10
    // add r0, r0, r1
    RemoveWindow((0x89 << 2), 0);
    // ldr r0, [sp]
    // str r2, [r0, r1]
    // sub r1, #0x10
    // add r0, r0, r1
    RemoveWindow((0x85 << 2), 0);
    // ldr r0, [sp]
    // str r2, [r0, r1]
    // sub r1, #0x10
    // add r0, r0, r1
    ClearWindowTilemapAndScheduleTransfer((0x81 << 2), 0);
    // ldr r0, [sp]
    // add r0, r0, r1
    RemoveWindow((0x7d << 2));
    // ldr r0, [sp]
    // str r5, [r0, r1]
    // add r6, #0xb4
    // add r0, #0xd
    // add r0, r6, r7
    ClearWindowTilemapAndScheduleTransfer(0, (0x7d << 2));
    // add r0, r6, r7
    RemoveWindow();
    // str r1, [r4, r0]
    // add r4, #0x10
    // ldr r0, [sp]
    // sub r1, #0x10
    // add r0, r0, r1
    ClearWindowTilemapAndScheduleTransfer((0x61 << 2), (0x61 << 2));
    // ldr r0, [sp]
    // add r0, r0, r1
    RemoveWindow((0x5d << 2));
    // ldr r0, [sp]
    // str r2, [r0, r1]
}




void ov15_021FE4C8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xe1
    // mov r3, #6
    // bl NewMsgDataFromNarc
    // ldr r7, _021FE500 ; =0x000005F4
    // add r6, r0, #0
    // mov r4, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // lsl r1, r4, #2
    // add r1, r5, r1
    // str r0, [r1, r7]
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #8
    // blo _021FE4DE
    // add r0, r6, #0
    // bl DestroyMsgData
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FE500: .word 0x000005F4
    // TODO: decompile
}




void ov15_021FE504(void) {
    // push {r4, r5, r6, lr}
    // ldr r6, _021FE524 ; =0x000005F4
    // add r5, r0, #0
    // mov r4, #0
    // lsl r0, r4, #2
    // add r0, r5, r0
    // ldr r0, [r0, r6]
    // bl String_Delete
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #8
    // blo _021FE50C
    // pop {r4, r5, r6, pc}
    // nop
    // _021FE524: .word 0x000005F4
    // TODO: decompile
}




void ov15_021FE528(void) {
    // str r6, [sp]
    // str r7, [sp, #4]
    // add r2, #0xcd
    // str r7, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r0), 3, ((0 << 0x10) >> 0x10), ((0 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, #0xf1
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r5), 3, ((r4 << 0x10) >> 0x10), ((r4 << 0x18) >> 0x18));
}




void ov15_021FE584(void) {
    ov15_021F9D60(((r1 << 0x10) >> 0x10), 0);
    // ldr r0, [r5, r0]
    BufferItemName((0xbd << 2), r4, r0);
}




void ov15_021FE5A4(void) {
    ov15_021F9D60(((r1 << 0x10) >> 0x10), 0);
    // ldr r0, [r5, r0]
    BufferItemNamePlural((0xbd << 2), r4, r0);
}




void ov15_021FE5C4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, _021FE618 ; =0x0000FFFF
    // add r6, r1, #0
    // cmp r6, r0
    // beq _021FE5E6
    // mov r0, #0x82
    // mov r1, #6
    // bl String_New
    // add r1, r6, #0
    // mov r2, #6
    // add r4, r0, #0
    // bl GetItemDescIntoString
    // b _021FE5F4
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x61
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FE61C ; =0x000F0E00
    // add r2, r4, #0
    // str r0, [sp, #8]
    // add r0, r5, #4
    // mov r3, #0x14
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _021FE618: .word 0x0000FFFF
    // _021FE61C: .word 0x000F0E00
    // TODO: decompile
}




void ov15_021FE620(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r4, r5, #0
    // add r0, r1, #0
    // add r4, #0x14
    // bl TMHMGetMove
    // str r0, [sp, #0x10]
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x65
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FE860 ; =0x000F0E00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x59
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FE860 ; =0x000F0E00
    // mov r1, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r2, r6, #0
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x5c
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FE860 ; =0x000F0E00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r3, #0x48
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x5a
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FE860 ; =0x000F0E00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r3, #0xa8
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x5b
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FE860 ; =0x000F0E00
    // mov r1, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0xa8
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, [sp, #0x10]
    // mov r1, #0
    // bl GetMoveMaxPP
    // add r7, r0, #0
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x5d
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // add r2, r7, #0
    // mov r3, #2
    // bl BufferIntegerAsString
    // mov r0, #0xbd
    // ldr r1, _021FE864 ; =0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // add r0, r6, #0
    // bl String_Delete
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FE860 ; =0x000F0E00
    // mov r1, #0
    // str r0, [sp, #8]
    // ldr r2, _021FE864 ; =0x000005E4
    // str r1, [sp, #0xc]
    // ldr r2, [r5, r2]
    // add r0, r4, #0
    // mov r3, #0x30
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // mov r1, #2
    // bl GetMoveAttr
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // cmp r7, #1
    // bhi _021FE790
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x19
    // bl NewString_ReadMsgData
    // b _021FE79C
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x5e
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r2, r7, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // mov r0, #0xbd
    // ldr r1, _021FE864 ; =0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // add r0, r6, #0
    // bl String_Delete
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FE860 ; =0x000F0E00
    // ldr r2, _021FE864 ; =0x000005E4
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, [r5, r2]
    // add r0, r4, #0
    // mov r3, #0xe8
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // mov r1, #4
    // bl GetMoveAttr
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // bne _021FE800
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x19
    // bl NewString_ReadMsgData
    // b _021FE80C
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x5e
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r2, r7, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // mov r0, #0xbd
    // ldr r1, _021FE864 ; =0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // add r0, r6, #0
    // bl String_Delete
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FE860 ; =0x000F0E00
    // mov r1, #0
    // str r0, [sp, #8]
    // ldr r2, _021FE864 ; =0x000005E4
    // str r1, [sp, #0xc]
    // ldr r2, [r5, r2]
    // add r0, r4, #0
    // mov r3, #0xe8
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _021FE860: .word 0x000F0E00
    // _021FE864: .word 0x000005E4
    // TODO: decompile
}




void ov15_021FE868(void) {
}




void ov15_021FE874(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x27
    // bl NewString_ReadMsgData
    // ldr r1, _021FE89C ; =0x000005E8
    // str r0, [r4, r1]
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x26
    // bl NewString_ReadMsgData
    // ldr r1, _021FE8A0 ; =0x000005EC
    // str r0, [r4, r1]
    // pop {r4, pc}
    // nop
    // _021FE89C: .word 0x000005E8
    // _021FE8A0: .word 0x000005EC
    // TODO: decompile
}




void ov15_021FE8A4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021FE8BC ; =0x000005E8
    // ldr r0, [r4, r0]
    // bl String_Delete
    // ldr r0, _021FE8C0 ; =0x000005EC
    // ldr r0, [r4, r0]
    // bl String_Delete
    // pop {r4, pc}
    // nop
    // _021FE8BC: .word 0x000005E8
    // _021FE8C0: .word 0x000005EC
    // TODO: decompile
}




void ov15_021FE8C4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #0xa
    // mov r1, #6
    // bl String_New
    // mov r1, #0
    // add r4, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r2, r6, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // mov r0, #0xbd
    // ldr r2, _021FE910 ; =0x000005EC
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r2, [r5, r2]
    // add r1, r4, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // add r1, r4, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _021FE910: .word 0x000005EC
    // TODO: decompile
}




void ov15_021FE914(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r7, r2, #0
    // add r6, r1, #0
    // add r5, r0, #0
    // mov r0, #0x69
    // ldrh r1, [r7]
    // lsl r0, r0, #2
    // add r4, r3, #0
    // cmp r1, r0
    // bhs _021FE95E
    // sub r0, #0x5d
    // sub r0, r1, r0
    // mov r1, #2
    // lsl r0, r0, #0x10
    // str r1, [sp]
    // lsr r2, r0, #0x10
    // str r6, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, r4, #5
    // str r0, [sp, #0xc]
    // mov r0, #0xbb
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r3, r1, #0
    // bl sub_0200CE7C
    // lsl r2, r4, #0x10
    // ldrh r1, [r7, #2]
    // ldr r3, _021FE98C ; =0x00010200
    // add r0, r5, #0
    // lsr r2, r2, #0x10
    // bl ov15_021FE8C4
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, r0, #1
    // sub r0, r1, r0
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // str r6, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // add r0, r4, #5
    // str r0, [sp, #8]
    // mov r0, #0xbb
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r2, #2
    // mov r3, #1
    // bl PrintUIntOnWindow
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x10
    // bl ov15_021FE9B0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FE98C: .word 0x00010200
    // TODO: decompile
}




void ov15_021FE990(void) {
    // ldr r0, [r0, r1]
    NARC_AllocAndReadWholeMember(0x25, 6);
    NNS_G2dGetUnpackedBGCharacterData(r4);
}




void ov15_021FE9B0(void) {
    // add r1, sp, #0x18
    ov15_021FE990();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    BlitBitmapRectToWindow(r5, *((u32*)(0x18 + 0x14)), 0, 0);
    Heap_FreeExplicit(6, r6);
}




void ov15_021FE9F0(void) {
    // add r1, sp, #0x18
    ov15_021FE990();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    BlitBitmapRectToWindow(r5, *((u32*)(0x28 + 0x14)), 0x18, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    BlitBitmapRectToWindow(r5, *((u32*)(0x28 + 0x14)), 0x40, 0);
    Heap_FreeExplicit(6, r7);
}




void ov15_021FEA5C(void) {
    // ldr r0, [r4, r0]
    NewString_ReadMsgData((0x2f << 4), 0);
    // str r0, [r4, r1]
    // sub r1, #0x10
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(6);
    // str r0, [r4, r1]
    // sub r1, #0x14
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(0x10);
    // str r0, [r4, r1]
    // sub r1, #0x18
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(0x62);
    // str r0, [r4, r1]
    // sub r1, #0x1c
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(0x63);
    // str r0, [r4, r1]
    // sub r1, #0x20
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(1);
    // str r0, [r4, r1]
    // sub r1, #0x24
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(2);
    // str r0, [r4, r1]
    // sub r1, #0x28
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(0x12);
    // str r0, [r4, r1]
    // sub r1, #0x2c
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(3);
    // str r0, [r4, r1]
    // sub r1, #0x30
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(4);
    // str r0, [r4, r1]
    // sub r1, #0x34
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(5);
    // str r0, [r4, r1]
    // sub r1, #0x38
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(8);
    // str r0, [r4, r1]
    // sub r1, #0x3c
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(0x4b);
    // str r0, [r4, r1]
    // sub r1, #0x40
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(0x56);
    // str r0, [r4, r1]
    // sub r1, #0x44
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(0);
    // str r0, [r4, r1]
    // sub r1, #0x48
    // ldr r0, [r4, r1]
    NewString_ReadMsgData(0x80);
    // str r0, [r4, r1]
}




void ov15_021FEB64(void) {
    // add r0, r5, r0
    // ldr r0, [r0, r6]
    String_Delete((0 << 2));
}




void ov15_021FEB84(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r2, [r5, r0]
    // add r0, r2, #0
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // mul r0, r1
    // add r0, r2, r0
    // ldrb r0, [r0, #0xc]
    // cmp r0, #3
    // bne _021FEBDC
    // add r0, r5, #0
    // add r0, #0x14
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r1, #0x66
    // ldrh r1, [r1]
    // bl ov15_021FE620
    // add r0, r5, #4
    // bl ScheduleWindowCopyToVram
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r1, #0x66
    // ldrh r1, [r1]
    // mov r2, #1
    // bl ov15_021FF97C
    // add r0, r5, #0
    // mov r1, #0
    // bl ov15_021F9C78
    // add r0, r5, #0
    // ldr r2, _021FEC98 ; =0x000003E2
    // add r0, #0x24
    // mov r1, #1
    // mov r3, #0xc
    // bl DrawFrameAndWindow2
    // add r0, r5, #0
    // add r0, #0x24
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // add r0, r1, #0
    // add r0, #0x64
    // ldrb r2, [r0]
    // mov r0, #0xc
    // add r3, r1, #4
    // mul r0, r2
    // add r4, r3, r0
    // add r0, r1, #0
    // add r0, #0x65
    // ldrb r0, [r0]
    // cmp r0, #6
    // bne _021FEC30
    // add r1, #0x66
    // ldrb r0, [r4, #8]
    // ldrh r1, [r1]
    // bl ov15_021FD3F0
    // cmp r0, #0
    // bne _021FEC30
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x6a
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // b _021FEC3E
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x2b
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // mov r0, #0x6c
    // mov r1, #6
    // bl String_New
    // mov r1, #6
    // ldrsh r2, [r4, r1]
    // ldr r1, _021FEC9C ; =0x00000644
    // add r6, r0, #0
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r1, r2, r1
    // sub r1, #8
    // mov r2, #0
    // bl ov15_021FE584
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // add r2, r7, #0
    // bl StringExpandPlaceholders
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x24
    // mov r1, #1
    // add r2, r6, #0
    // str r3, [sp, #8]
    // bl AddTextPrinterParameterized
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // add r5, #0x24
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021FEC98: .word 0x000003E2
    // _021FEC9C: .word 0x00000644
    // TODO: decompile
}




void ov15_021FECA0(void) {
    FillWindowPixelBuffer(r1, 0);
    ov15_021FE5C4(r6, ((r4 << 0x10) >> 0x10));
    ScheduleWindowCopyToVram(r5);
}




void ov15_021FECC4(void) {
}




void ov15_021FECD8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // mov r1, #0x2f
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // add r2, #0x78
    // add r1, r2, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FED20 ; =0x000F0E00
    // add r2, r4, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // mov r3, #0x14
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _021FED20: .word 0x000F0E00
    // TODO: decompile
}




void ov15_021FED24(void) {
}




void ov15_021FED3C(void) {
}




void ov15_021FED58(void) {
}




void ov15_021FED60(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r0, #0x24
    // mov r1, #0xff
    // bl FillWindowPixelBuffer
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x2e
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r0, #0x82
    // mov r1, #6
    // bl String_New
    // ldr r1, _021FEDE0 ; =0x00000672
    // add r4, r0, #0
    // ldrb r1, [r5, r1]
    // add r0, r5, #0
    // mov r2, #0
    // bl ov15_021FE584
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // add r0, r5, #0
    // ldr r2, _021FEDE4 ; =0x000003E2
    // add r0, #0x24
    // mov r1, #1
    // mov r3, #0xc
    // bl DrawFrameAndWindow2
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FEDE8 ; =0x00010200
    // mov r1, #1
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x24
    // add r2, r4, #0
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r5, #0x24
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021FEDE0: .word 0x00000672
    // _021FEDE4: .word 0x000003E2
    // _021FEDE8: .word 0x00010200
    // TODO: decompile
}




void ov15_021FEDEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // mov r0, #0x1a
    // lsl r0, r0, #6
    // str r1, [sp, #0x10]
    // ldrsh r1, [r5, r0]
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // cmp r1, r0
    // blt _021FEE06
    // bl GF_AssertFail
    // mov r0, #2
    // mov r1, #6
    // bl String_New
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // cmp r0, #2
    // bne _021FEE1A
    // mov r4, #0xa
    // b _021FEE1C
    // mov r4, #0x64
    // mov r0, #0x1a
    // lsl r0, r0, #6
    // ldrsh r7, [r5, r0]
    // ldr r0, [sp, #0x10]
    // mov r6, #0
    // cmp r0, #0
    // bls _021FEE96
    // add r5, #0xb4
    // add r0, r7, #0
    // add r1, r4, #0
    // bl _u32_div_f
    // str r0, [sp, #0x18]
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // mov r2, #1
    // mov r3, #0
    // bl String16_FormatInteger
    // ldr r0, [sp, #0x18]
    // add r1, r0, #0
    // mul r1, r4
    // sub r7, r7, r1
    // add r0, r4, #0
    // mov r1, #0xa
    // bl _u32_div_f
    // add r4, r0, #0
    // add r0, r6, #0
    // add r0, #0x11
    // lsl r0, r0, #4
    // str r0, [sp, #0x1c]
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FEEA0 ; =0x00010200
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x14]
    // add r0, r5, r0
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x1c]
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x10]
    // add r6, r6, #1
    // cmp r6, r0
    // blo _021FEE2C
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FEEA0: .word 0x00010200
    // TODO: decompile
}




void ov15_021FEEA4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x37
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r3, #0x1a
    // add r2, r0, #4
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // lsl r3, r3, #6
    // mul r0, r1
    // add r1, r2, r0
    // ldrsh r0, [r5, r3]
    // cmp r0, #1
    // ble _021FEEEA
    // mov r2, #6
    // ldrsh r2, [r1, r2]
    // sub r3, #0x3c
    // ldr r1, [r5, r3]
    // add r0, r5, #0
    // add r1, r2, r1
    // sub r1, #8
    // mov r2, #0
    // bl ov15_021FE5A4
    // b _021FEEFE
    // mov r2, #6
    // ldrsh r2, [r1, r2]
    // sub r3, #0x3c
    // ldr r1, [r5, r3]
    // add r0, r5, #0
    // add r1, r2, r1
    // sub r1, #8
    // mov r2, #0
    // bl ov15_021FE584
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #1
    // mov r2, #0x1a
    // mov r0, #0xbd
    // str r1, [sp, #4]
    // lsl r2, r2, #6
    // lsl r0, r0, #2
    // ldrsh r2, [r5, r2]
    // ldr r0, [r5, r0]
    // mov r3, #3
    // bl BufferIntegerAsString
    // mov r0, #0xbd
    // ldr r1, _021FEF40 ; =0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r5, #0
    // mov r1, #0
    // bl ov15_021FEF48
    // ldr r1, _021FEF44 ; =0x00000616
    // strb r0, [r5, r1]
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _021FEF40: .word 0x000005E4
    // _021FEF44: .word 0x00000616
    // TODO: decompile
}




void ov15_021FEF48(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // cmp r1, #0
    // bne _021FEF58
    // add r4, r5, #0
    // add r4, #0x34
    // b _021FEF6C
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _021FEF66
    // bl GF_AssertFail
    // mov r0, #0x81
    // lsl r0, r0, #2
    // add r4, r5, r0
    // add r0, r4, #0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // ldr r2, _021FEFB8 ; =0x000003E2
    // add r0, r4, #0
    // mov r1, #1
    // mov r3, #0xc
    // bl DrawFrameAndWindow2
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // mov r0, #1
    // bl TextFlags_SetCanABSpeedUpPrint
    // mov r0, #0
    // bl TextFlags_SetAutoScrollParam
    // mov r0, #9
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // bl Options_GetTextFrameDelay
    // mov r3, #0
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021FEFBC ; =ov15_021FEFC4
    // ldr r2, _021FEFC0 ; =0x000005E4
    // str r0, [sp, #8]
    // ldr r2, [r5, r2]
    // add r0, r4, #0
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _021FEFB8: .word 0x000003E2
    // _021FEFBC: .word ov15_021FEFC4
    // _021FEFC0: .word 0x000005E4
    // TODO: decompile
}




void ov15_021FEFC4(void) {
    // push {r3, lr}
    // cmp r1, #4
    // bhi _021FEFFC
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FEFD6: ; jump table
    // bl GF_IsAnySEPlaying
    // pop {r3, pc}
    // bl IsFanfarePlaying
    // pop {r3, pc}
    // ldr r0, _021FF000 ; =SEQ_SE_DP_PC_LOGIN
    // bl PlaySE
    // b _021FEFFC
    // ldr r0, _021FF000 ; =SEQ_SE_DP_PC_LOGIN
    // bl IsSEPlaying
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // _021FF000: .word SEQ_SE_DP_PC_LOGIN
    // TODO: decompile
}




void ov15_021FF004(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // ldr r0, [r4]
    // add r2, sp, #0
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // mov r0, #0x81
    // str r0, [sp, #8]
    // mov r0, #9
    // str r0, [sp, #0xc]
    // mov r0, #0x19
    // strb r0, [r2, #0x10]
    // mov r0, #6
    // strb r0, [r2, #0x11]
    // ldrb r3, [r2, #0x12]
    // mov r1, #0xf
    // bic r3, r1
    // strb r3, [r2, #0x12]
    // ldrb r3, [r2, #0x12]
    // mov r1, #0xf0
    // bic r3, r1
    // strb r3, [r2, #0x12]
    // ldrb r3, [r2, #0x12]
    // bic r3, r1
    // strb r3, [r2, #0x12]
    // mov r1, #0
    // strb r1, [r2, #0x13]
    // bl YesNoPrompt_Create
    // ldr r1, _021FF054 ; =0x00000804
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // add r1, sp, #0
    // bl YesNoPrompt_InitFromTemplate
    // add sp, #0x14
    // pop {r3, r4, pc}
    // nop
    // _021FF054: .word 0x00000804
    // TODO: decompile
}




void ov15_021FF058(void) {
    // ldr r1, _021FF060 ; =0x00000804
    // ldr r3, _021FF064 ; =YesNoPrompt_Destroy
    // ldr r0, [r0, r1]
    // bx r3
    // _021FF060: .word 0x00000804
    // _021FF064: .word YesNoPrompt_Destroy
    // TODO: decompile
}




void ov15_021FF068(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // mov r6, #0x89
    // add r5, r0, #0
    // lsl r6, r6, #2
    // add r0, r5, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r6, #0
    // add r0, #0xcc
    // ldr r0, [r5, r0]
    // mov r1, #0x53
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, _021FF0F0 ; =0x00000684
    // add r0, r6, #0
    // ldr r3, [r5, r2]
    // sub r2, r2, #4
    // ldrsh r2, [r5, r2]
    // add r0, #0xd0
    // ldr r0, [r5, r0]
    // mul r2, r3
    // mov r1, #0
    // mov r3, #6
    // bl BufferIntegerAsString
    // add r0, r6, #0
    // ldr r1, _021FF0F4 ; =0x000005E4
    // add r0, #0xd0
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // ldr r1, _021FF0F4 ; =0x000005E4
    // mov r0, #0
    // ldr r1, [r5, r1]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FF0F8 ; =0x00010200
    // mov r1, #0
    // str r0, [sp, #8]
    // ldr r2, _021FF0F4 ; =0x000005E4
    // str r1, [sp, #0xc]
    // ldr r2, [r5, r2]
    // add r0, r5, r6
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, r6
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _021FF0F0: .word 0x00000684
    // _021FF0F4: .word 0x000005E4
    // _021FF0F8: .word 0x00010200
    // TODO: decompile
}




void ov15_021FF0FC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #1
    // add r7, r1, #0
    // lsl r0, r0, #8
    // mov r1, #6
    // bl String_New
    // mov r6, #0x85
    // add r4, r0, #0
    // lsl r6, r6, #2
    // cmp r7, #0
    // bne _021FF14E
    // add r0, r5, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r6, #0
    // add r0, #0xdc
    // ldr r0, [r5, r0]
    // mov r1, #0x50
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FF1DC ; =0x00010200
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r5, r6
    // mov r3, #4
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // b _021FF160
    // mov r0, #0x48
    // mov r1, #0
    // str r0, [sp]
    // mov r3, #0x10
    // add r0, r5, r6
    // add r2, r1, #0
    // str r3, [sp, #4]
    // bl FillWindowPixelRect
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x51
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x10]
    // mov r0, #0x8f
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl PlayerProfile_GetMoney
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // mov r3, #6
    // bl BufferIntegerAsString
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r2, [sp, #0x10]
    // add r1, r4, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // add r1, r4, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r7, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FF1DC ; =0x00010200
    // add r7, #8
    // mov r3, #0x44
    // str r0, [sp, #8]
    // mov r1, #0
    // add r0, r5, r6
    // add r2, r4, #0
    // sub r3, r3, r7
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, r6
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _021FF1DC: .word 0x00010200
    // TODO: decompile
}




void ov15_021FF1E0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r5, #0
    // add r4, #0x54
    // add r0, r4, #0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // ldr r2, _021FF294 ; =0x000003F7
    // add r0, r4, #0
    // mov r1, #1
    // mov r3, #0xe
    // bl DrawFrameAndWindow1
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x73
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r6, #0
    // add r3, r1, #0
    // str r1, [sp, #8]
    // bl AddTextPrinterParameterized
    // add r0, r6, #0
    // bl String_Delete
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x74
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r2, r1, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // mov r0, #0xbd
    // ldr r1, _021FF298 ; =0x000005E4
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // add r0, r6, #0
    // bl String_Delete
    // ldr r1, _021FF298 ; =0x000005E4
    // mov r0, #0
    // ldr r1, [r5, r1]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r3, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // mov r1, #0
    // ldr r2, _021FF298 ; =0x000005E4
    // str r1, [sp, #8]
    // ldr r2, [r5, r2]
    // mov r5, #0x58
    // add r0, r4, #0
    // sub r3, r5, r3
    // bl AddTextPrinterParameterized
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021FF294: .word 0x000003F7
    // _021FF298: .word 0x000005E4
    // TODO: decompile
}




void ov15_021FF29C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // add r6, r1, #0
    // ldr r0, [r5, r0]
    // mov r1, #8
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r5, #0
    // add r0, #0x74
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // cmp r6, #0
    // bne _021FF2EE
    // mov r0, #0
    // add r1, r4, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // mov r1, #0
    // add r3, r0, #0
    // mov r6, #0x30
    // sub r3, r6, r3
    // lsr r3, r3, #1
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FF31C ; =0x000F0E00
    // add r2, r4, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x74
    // add r3, #8
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // b _021FF308
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FF31C ; =0x000F0E00
    // add r2, r4, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x74
    // mov r3, #5
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r5, #0x74
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _021FF31C: .word 0x000F0E00
    // TODO: decompile
}




void ov15_021FF320(void) {
    // push {r4, r5, r6, r7}
    // add r3, r1, #0
    // add r1, r2, #0
    // ldr r2, _021FF360 ; =ov15_022008C8
    // mov r5, #0
    // ldrb r6, [r2, r3]
    // add r4, r5, #0
    // cmp r6, #0
    // ble _021FF35A
    // ldr r7, [r0]
    // ldrb r2, [r2, r3]
    // add r0, r7, #0
    // add r6, r5, #0
    // add r1, r1, #1
    // ldrh r3, [r0]
    // cmp r3, #0
    // beq _021FF350
    // add r3, r7, r6
    // ldrh r3, [r3, #2]
    // cmp r3, #0
    // beq _021FF350
    // add r5, r5, #1
    // cmp r5, r1
    // beq _021FF35A
    // add r4, r4, #1
    // add r0, r0, #4
    // add r6, r6, #4
    // cmp r4, r2
    // blt _021FF33C
    // add r0, r4, #0
    // pop {r4, r5, r6, r7}
    // bx lr
    // _021FF360: .word ov15_022008C8
    // TODO: decompile
}




void ov15_021FF364(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // str r1, [sp, #0x10]
    // add r2, r0, #4
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // str r3, [sp, #0x14]
    // mul r0, r1
    // add r0, r2, r0
    // mov r1, #6
    // str r0, [sp, #0x24]
    // ldrb r2, [r0, #9]
    // ldrsh r0, [r0, r1]
    // sub r0, r2, r0
    // str r0, [sp, #0x20]
    // cmp r0, #6
    // ble _021FF392
    // str r1, [sp, #0x20]
    // ldr r0, _021FF4DC ; =0x0000068A
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // bne _021FF3A2
    // mov r0, #0
    // str r0, [sp, #0x18]
    // mov r4, #6
    // b _021FF3A8
    // mov r0, #6
    // str r0, [sp, #0x18]
    // mov r4, #0
    // ldr r1, _021FF4DC ; =0x0000068A
    // mov r0, #1
    // ldrb r2, [r5, r1]
    // eor r0, r2
    // strb r0, [r5, r1]
    // add r0, r5, #0
    // bl ov15_021FE17C
    // mov r0, #0
    // add r7, r5, #0
    // ldr r6, [sp, #0x18]
    // str r0, [sp, #0x2c]
    // add r7, #0xb4
    // lsl r0, r6, #4
    // add r0, r7, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // lsl r0, r4, #4
    // add r0, r7, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, [sp, #0x2c]
    // add r6, r6, #1
    // add r0, r0, #1
    // add r4, r4, #1
    // str r0, [sp, #0x2c]
    // cmp r0, #6
    // blt _021FF3C2
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // mov r0, #0
    // add r1, #0x64
    // ldrb r1, [r1]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x10]
    // bl ov15_021FF320
    // add r4, r0, #0
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r0, #0x64
    // ldrb r1, [r0]
    // ldr r0, _021FF4E0 ; =ov15_022008C8
    // ldrb r0, [r0, r1]
    // cmp r4, r0
    // bge _021FF4BE
    // lsl r0, r4, #2
    // str r0, [sp, #0x1c]
    // add r7, r5, r0
    // add r0, r5, #0
    // str r0, [sp, #0x30]
    // add r0, #0xb4
    // ldr r6, [sp, #0x18]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [r0]
    // ldr r2, [sp, #0x1c]
    // add r1, r0, r1
    // ldrh r0, [r0, r2]
    // cmp r0, #0
    // beq _021FF4A2
    // ldrh r0, [r1, #2]
    // cmp r0, #0
    // beq _021FF4A2
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // bne _021FF450
    // ldr r1, [sp, #0x30]
    // lsl r2, r6, #4
    // add r1, r1, r2
    // mov r2, #0x35
    // str r4, [sp]
    // lsl r2, r2, #4
    // ldr r2, [r7, r2]
    // ldr r3, [sp, #0x24]
    // add r0, r5, #0
    // bl ov15_021FF570
    // b _021FF494
    // ldr r0, _021FF4E4 ; =0x00000672
    // ldrb r0, [r5, r0]
    // cmp r4, r0
    // bne _021FF470
    // ldr r1, [sp, #0x30]
    // lsl r2, r6, #4
    // add r1, r1, r2
    // mov r2, #0x35
    // str r4, [sp]
    // lsl r2, r2, #4
    // ldr r2, [r7, r2]
    // ldr r3, [sp, #0x24]
    // add r0, r5, #0
    // bl ov15_021FF570
    // b _021FF494
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FF4E8 ; =0x00010200
    // mov r2, #0x35
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // lsl r2, r2, #4
    // ldr r0, [sp, #0x30]
    // lsl r1, r6, #4
    // add r0, r0, r1
    // mov r1, #0
    // ldr r2, [r7, r2]
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x28]
    // add r6, r6, #1
    // add r1, r0, #1
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0x28]
    // cmp r1, r0
    // bge _021FF4BE
    // ldr r0, [sp, #0x1c]
    // add r4, r4, #1
    // add r0, r0, #4
    // str r0, [sp, #0x1c]
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r7, r7, #4
    // add r0, #0x64
    // ldrb r1, [r0]
    // ldr r0, _021FF4E0 ; =ov15_022008C8
    // ldrb r0, [r0, r1]
    // cmp r4, r0
    // blt _021FF41C
    // mov r4, #0
    // add r5, #0xb4
    // ldr r0, [sp, #0x18]
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x18]
    // add r4, r4, #1
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r4, #6
    // blt _021FF4C2
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // _021FF4DC: .word 0x0000068A
    // _021FF4E0: .word ov15_022008C8
    // _021FF4E4: .word 0x00000672
    // _021FF4E8: .word 0x00010200
    // TODO: decompile
}




void ov15_021FF4EC(void) {
    // ldr r2, [r6, r0]
    // add r2, #0x64
    // str r0, [sp, #4]
    // ldrb r2, [r2]
    // add r7, r7, r1
    // mul r0, r2
    // str r0, [sp, #8]
    // add r5, #0xb4
    ClearWindowTilemapAndScheduleTransfer(r0);
    // add r5, #0x10
    ov15_021FE1D0(r6);
    // add r0, #0x64
    ClearWindowTilemapAndScheduleTransfer(r6);
    ov15_021FE204(r6);
    // add r3, r6, r2
    // str r7, [sp]
    // ldr r2, [r3, r2]
    // ldr r4, [sp, #4]
    // ldr r3, [sp, #8]
    // add r1, r6, r1
    // add r3, r4, r3
    ov15_021FF570(r6, (0x5d << 2), (0x35 << 4));
    // add r0, r6, r0
    ScheduleWindowCopyToVram((0x5d << 2));
}




void ov15_021FF560(void) {
    // mov r1, #0x5d
    // lsl r1, r1, #2
    // ldr r3, _021FF56C ; =ClearWindowTilemapAndScheduleTransfer
    // add r0, r0, r1
    // bx r3
    // nop
    // _021FF56C: .word ClearWindowTilemapAndScheduleTransfer
    // TODO: decompile
}




void ov15_021FF570(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r3, #0
    // add r5, r0, #0
    // ldrb r0, [r4, #8]
    // add r6, r1, #0
    // cmp r0, #3
    // beq _021FF586
    // cmp r0, #7
    // beq _021FF5D8
    // b _021FF632
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FF668 ; =0x00010200
    // add r3, r1, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x28]
    // ldr r2, [r4]
    // lsl r7, r0, #2
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r2, r7
    // mov r3, #0x10
    // bl ov15_021FE914
    // ldr r3, [r4]
    // mov r0, #0x52
    // ldrh r1, [r3, r7]
    // lsl r0, r0, #2
    // cmp r1, r0
    // blo _021FF662
    // add r0, #0x5b
    // cmp r1, r0
    // bhi _021FF662
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // add r3, r3, r7
    // ldr r0, [r5, r1]
    // sub r1, r1, #4
    // ldrh r3, [r3, #2]
    // ldr r1, [r5, r1]
    // add r2, r6, #0
    // bl ov15_021FF66C
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FF668 ; =0x00010200
    // add r3, r1, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x28]
    // lsl r7, r0, #2
    // mov r0, #0x8e
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Bag_GetRegisteredItem1
    // ldr r1, [r4]
    // ldrh r1, [r1, r7]
    // cmp r1, r0
    // bne _021FF610
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x10
    // mov r3, #0
    // bl ov15_021FE9F0
    // mov r0, #0x8e
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Bag_GetRegisteredItem2
    // ldr r1, [r4]
    // ldrh r1, [r1, r7]
    // cmp r1, r0
    // bne _021FF662
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x10
    // mov r3, #1
    // bl ov15_021FE9F0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FF668 ; =0x00010200
    // add r3, r1, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r3, [sp, #0x28]
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // sub r1, r1, #4
    // ldr r4, [r4]
    // lsl r3, r3, #2
    // add r3, r4, r3
    // ldrh r3, [r3, #2]
    // ldr r1, [r5, r1]
    // add r2, r6, #0
    // bl ov15_021FF66C
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FF668: .word 0x00010200
    // TODO: decompile
}




void ov15_021FF66C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // mov r1, #0
    // add r6, r2, #0
    // str r1, [sp]
    // mov r2, #1
    // str r2, [sp, #4]
    // add r2, r3, #0
    // add r5, r0, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x57
    // mov r3, #6
    // bl ReadMsgData_ExpandPlaceholders
    // add r4, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FF6B8 ; =0x00010200
    // mov r1, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #0x30
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021FF6B8: .word 0x00010200
    // TODO: decompile
}




void ov15_021FF6BC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // add r5, r1, #0
    // add r0, r2, r3
    // mov r1, #6
    // bl _s32_div_f
    // add r6, r0, #0
    // cmp r5, #0
    // bne _021FF6D6
    // mov r5, #1
    // b _021FF6E0
    // add r0, r5, #5
    // mov r1, #6
    // bl _s32_div_f
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0x64
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // add r2, r6, #1
    // mov r3, #3
    // bl BufferIntegerAsString
    // mov r1, #1
    // str r1, [sp]
    // mov r0, #0xbd
    // str r1, [sp, #4]
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r2, r5, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // sub r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x16
    // mov r3, #6
    // bl ReadMsgData_ExpandPlaceholders
    // mov r1, #0
    // add r5, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FF754 ; =0x000F0100
    // add r2, r5, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x64
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r4, #0x64
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021FF754: .word 0x000F0100
    // TODO: decompile
}




void ov15_021FF758(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // mov r1, #0
    // add r6, r0, #0
    // add r5, r2, #0
    // bl FillWindowPixelBuffer
    // cmp r5, #0xff
    // beq _021FF79E
    // lsl r5, r5, #2
    // add r0, r6, #0
    // bl GetWindowWidth
    // add r7, r0, #0
    // mov r0, #0
    // ldr r1, [r4, r5]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021FF7A8 ; =0x000F0E00
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, [r4, r5]
    // lsl r4, r7, #3
    // sub r3, r4, r3
    // add r0, r6, #0
    // lsr r3, r3, #1
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FF7A8: .word 0x000F0E00
    // TODO: decompile
}




void ov15_021FF7AC(void) {
}




void ov15_021FF7C4(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // mov r1, #0
    // add r4, r0, #0
    // str r1, [sp]
    // mov r2, #0xff
    // str r2, [sp, #4]
    // ldr r0, _021FF7F8 ; =0x000F0E00
    // add r2, #0xf5
    // str r0, [sp, #8]
    // add r0, r4, r2
    // mov r2, #0xc5
    // str r1, [sp, #0xc]
    // lsl r2, r2, #2
    // ldr r2, [r4, r2]
    // mov r3, #5
    // bl AddTextPrinterParameterizedWithColor
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _021FF7F8: .word 0x000F0E00
    // TODO: decompile
}




void ov15_021FF7FC(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // mov r1, #0
    // add r4, r0, #0
    // str r1, [sp]
    // mov r2, #0xff
    // str r2, [sp, #4]
    // ldr r0, _021FF830 ; =0x000F0E00
    // add r2, #0xf5
    // str r0, [sp, #8]
    // add r0, r4, r2
    // mov r2, #0xcd
    // str r1, [sp, #0xc]
    // lsl r2, r2, #2
    // ldr r2, [r4, r2]
    // mov r3, #5
    // bl AddTextPrinterParameterizedWithColor
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _021FF830: .word 0x000F0E00
    // TODO: decompile
}




void ov15_021FF834(void) {
    // mov r1, #0x7d
    // lsl r1, r1, #2
    // ldr r3, _021FF840 ; =ClearWindowTilemapAndScheduleTransfer
    // add r0, r0, r1
    // bx r3
    // nop
    // _021FF840: .word ClearWindowTilemapAndScheduleTransfer
    // TODO: decompile
}




void ov15_021FF844(void) {
}




void ov15_021FF850(void) {
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    GF_CreateVramTransferManager(0x20, 6);
    ov15_021FFA40(r4);
    ov15_021FFAD0(r4);
    ov15_021FFDD8(r4);
    // ldr r0, [r4, r0]
    SpriteSystem_GetRenderer((0x92 << 2));
    G2dRenderer_SetSubSurfaceCoords(0, (1 << 0x14));
}




void ov15_021FF894(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r7, #0x25
    // mov r4, #0
    // add r5, r6, #0
    // lsl r7, r7, #4
    // ldr r0, [r5, r7]
    // bl Sprite_DeleteAndFreeResources
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x27
    // blo _021FF8A0
    // mov r1, #0x92
    // lsl r1, r1, #2
    // ldr r0, [r6, r1]
    // add r1, r1, #4
    // ldr r1, [r6, r1]
    // bl SpriteSystem_FreeResourcesAndManager
    // mov r0, #0x92
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl SpriteSystem_Free
    // ldr r0, _021FF8D0 ; =0x0000069C
    // ldr r0, [r6, r0]
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FF8D0: .word 0x0000069C
    // TODO: decompile
}




void ov15_021FF8D4(void) {
}




void ov15_021FF8F0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r6, r2, #0
    // add r5, r0, #0
    // add r4, r1, #0
    // add r0, r6, #0
    // mov r1, #1
    // bl GetItemIndexMapping
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021FF948 ; =0x0000C0FC
    // mov r1, #0x92
    // add r0, r4, r0
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x12
    // bl SpriteSystem_ReplaceCharResObj
    // add r0, r6, #0
    // mov r1, #2
    // bl GetItemIndexMapping
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021FF94C ; =0x0000C0FB
    // mov r1, #0x92
    // add r0, r4, r0
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x12
    // bl SpriteSystem_ReplacePlttResObj
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _021FF948: .word 0x0000C0FC
    // _021FF94C: .word 0x0000C0FB
    // TODO: decompile
}




void ov15_021FF950(void) {
    // ldr r1, _021FF960 ; =0x0000064B
    // mov r2, #0
    // strb r2, [r0, r1]
    // mov r2, #1
    // sub r1, r1, #3
    // strb r2, [r0, r1]
    // bx lr
    // nop
    // _021FF960: .word 0x0000064B
    // TODO: decompile
}




void ov15_021FF964(void) {
}




void ov15_021FF97C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0x9b
    // lsl r0, r0, #2
    // add r4, r2, #0
    // add r6, r1, #0
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // bl ManagedSprite_SetDrawFlag
    // cmp r4, #0
    // beq _021FFA34
    // add r0, r6, #0
    // bl TMHMGetMove
    // mov r1, #3
    // add r4, r0, #0
    // bl GetMoveAttr
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // add r0, r4, #0
    // mov r1, #1
    // bl GetMoveAttr
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // bl sub_020776B4
    // add r7, r0, #0
    // add r0, r6, #0
    // bl sub_02077678
    // add r3, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021FFA38 ; =0x0000C103
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r7, #0
    // bl SpriteSystem_ReplaceCharResObj
    // add r0, r6, #0
    // bl sub_0207769C
    // add r1, r0, #0
    // mov r0, #0x9b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r1, #4
    // bl ManagedSprite_SetPaletteOverride
    // bl sub_02077830
    // add r6, r0, #0
    // add r0, r4, #0
    // bl sub_02077800
    // add r3, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021FFA3C ; =0x0000C104
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r6, #0
    // bl SpriteSystem_ReplaceCharResObj
    // add r0, r4, #0
    // bl sub_02077818
    // add r1, r0, #0
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r1, r1, #4
    // bl ManagedSprite_SetPaletteOverride
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FFA38: .word 0x0000C103
    // _021FFA3C: .word 0x0000C104
    // TODO: decompile
}




void ov15_021FFA40(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x4c
    // ldr r3, _021FFAC4 ; =ov15_022009BC
    // add r2, sp, #0x34
    // add r4, r0, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, #6
    // bl SpriteSystem_Alloc
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // bl SpriteManager_New
    // mov r7, #0x93
    // lsl r7, r7, #2
    // add r2, sp, #0x14
    // ldr r3, _021FFAC8 ; =ov15_022009F4
    // str r0, [r4, r7]
    // ldmia r3!, {r0, r1}
    // add r6, r2, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // ldr r5, _021FFACC ; =ov15_022009A8
    // stmia r2!, {r0, r1}
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // add r1, r6, #0
    // str r0, [r3]
    // sub r0, r7, #4
    // ldr r0, [r4, r0]
    // mov r3, #0x20
    // bl SpriteSystem_Init
    // sub r1, r7, #4
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x27
    // bl SpriteSystem_InitSprites
    // sub r1, r7, #4
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // add r2, sp, #0x34
    // bl SpriteSystem_InitManagerWithCapacities
    // add sp, #0x4c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021FFAC4: .word ov15_022009BC
    // _021FFAC8: .word ov15_022009F4
    // _021FFACC: .word ov15_022009A8
    // TODO: decompile
}




void ov15_021FFAD0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _021FFDAC ; =0x0000C0F9
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0xf
    // mov r3, #0x1a
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _021FFDB0 ; =0x0000C0FA
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0xf
    // mov r3, #6
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021FFDB4 ; =0x0000C0FB
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0xf
    // mov r3, #0x33
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _021FFDB8 ; =0x0000C102
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x3c
    // mov r3, #4
    // bl SpriteSystem_LoadCharResObj
    // mov r4, #0
    // add r6, r4, #0
    // mov r7, #2
    // mov r0, #0
    // mov r1, #1
    // bl GetItemIndexMapping
    // add r3, r0, #0
    // ldr r0, _021FFDBC ; =0x0000C0FC
    // str r6, [sp]
    // mov r1, #0x93
    // str r7, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    // mov r0, #0x92
    // lsl r0, r0, #2
    // lsl r1, r1, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // mov r2, #0x12
    // bl SpriteSystem_LoadCharResObj
    // add r4, r4, #1
    // cmp r4, #6
    // blt _021FFB54
    // ldr r0, _021FFDC0 ; =0x0000C103
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #1
    // mov r3, #0
    // bl sub_020776B8
    // ldr r0, _021FFDC4 ; =0x0000C104
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #1
    // mov r3, #0
    // bl sub_02077834
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, _021FFDAC ; =0x0000C0F9
    // mov r1, #0x92
    // mov r2, #0xf
    // lsl r1, r1, #2
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r3, r2, #0
    // bl SpriteSystem_LoadPlttResObj
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, _021FFDC8 ; =0x0000C101
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x3c
    // mov r3, #0xa
    // bl SpriteSystem_LoadPlttResObj
    // mov r1, #0x92
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // ldr r3, _021FFDB8 ; =0x0000C102
    // mov r2, #1
    // bl sub_020776EC
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // ldr r0, _021FFDB0 ; =0x0000C0FA
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0xf
    // mov r3, #0x2f
    // bl SpriteSystem_LoadPlttResObj
    // mov r4, #0
    // add r6, r4, #0
    // mov r7, #1
    // mov r0, #0
    // mov r1, #2
    // bl GetItemIndexMapping
    // str r6, [sp]
    // add r3, r0, #0
    // mov r1, #0x93
    // str r7, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // ldr r0, _021FFDB4 ; =0x0000C0FB
    // lsl r1, r1, #2
    // add r0, r4, r0
    // str r0, [sp, #0xc]
    // mov r0, #0x92
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // mov r2, #0x12
    // bl SpriteSystem_LoadPlttResObj
    // add r4, r4, #1
    // cmp r4, #6
    // blt _021FFC2A
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021FFDAC ; =0x0000C0F9
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0xf
    // mov r3, #0x19
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021FFDB0 ; =0x0000C0FA
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0xf
    // mov r3, #5
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021FFDB4 ; =0x0000C0FB
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0xf
    // mov r3, #0x31
    // bl SpriteSystem_LoadCellResObj
    // bl GetItemIconCell
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021FFDBC ; =0x0000C0FC
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x12
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021FFDCC ; =0x0000C0FD
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x3c
    // mov r3, #5
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021FFDAC ; =0x0000C0F9
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0xf
    // mov r3, #0x15
    // bl SpriteSystem_LoadAnimResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021FFDB0 ; =0x0000C0FA
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0xf
    // mov r3, #0x18
    // bl SpriteSystem_LoadAnimResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021FFDB4 ; =0x0000C0FB
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0xf
    // mov r3, #4
    // bl SpriteSystem_LoadAnimResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021FFDBC ; =0x0000C0FC
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0xf
    // mov r3, #0x32
    // bl SpriteSystem_LoadAnimResObj
    // bl GetItemIconAnim
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021FFDCC ; =0x0000C0FD
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x12
    // bl SpriteSystem_LoadAnimResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021FFDD0 ; =0x0000C0FE
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x3c
    // mov r3, #6
    // bl SpriteSystem_LoadAnimResObj
    // mov r1, #0x92
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r2, _021FFDD0 ; =0x0000C0FE
    // ldr r1, [r5, r1]
    // add r3, r2, #1
    // bl sub_0207775C
    // mov r2, #0x6a
    // lsl r2, r2, #4
    // mov r0, #0xf
    // mov r1, #0x30
    // add r2, r5, r2
    // mov r3, #6
    // bl GfGfxLoader_GetPlttData
    // ldr r1, _021FFDD4 ; =0x0000069C
    // str r0, [r5, r1]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FFDAC: .word 0x0000C0F9
    // _021FFDB0: .word 0x0000C0FA
    // _021FFDB4: .word 0x0000C0FB
    // _021FFDB8: .word 0x0000C102
    // _021FFDBC: .word 0x0000C0FC
    // _021FFDC0: .word 0x0000C103
    // _021FFDC4: .word 0x0000C104
    // _021FFDC8: .word 0x0000C101
    // _021FFDCC: .word 0x0000C0FD
    // _021FFDD0: .word 0x0000C0FE
    // _021FFDD4: .word 0x0000069C
    // TODO: decompile
}




void ov15_021FFDD8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r4, _021FFEBC ; =ov15_02200B0C
    // mov r7, #0
    // add r5, r6, #0
    // mov r0, #0x92
    // mov r1, #0x93
    // lsl r0, r0, #2
    // lsl r1, r1, #2
    // mov r3, #1
    // ldr r0, [r6, r0]
    // ldr r1, [r6, r1]
    // add r2, r4, #0
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // mov r1, #0x25
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r7, r7, #1
    // add r4, #0x34
    // add r5, r5, #4
    // cmp r7, #0x27
    // blo _021FFDE2
    // add r0, r1, #0
    // add r0, #0x4c
    // ldr r0, [r6, r0]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // mov r7, #0xb
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #6
    // ldr r0, [r4, r7]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #4
    // blo _021FFE1C
    // mov r7, #0x9d
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #8
    // blo _021FFE34
    // add r0, r6, #0
    // mov r1, #1
    // bl ov15_02200458
    // mov r0, #0x25
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0x9b
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r7, #0xb
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #6
    // ldr r0, [r4, r7]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #4
    // blo _021FFE78
    // mov r7, #0x2d
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #4
    // ldr r0, [r4, r7]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #6
    // blo _021FFE90
    // mov r0, #0xba
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0xba
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FFEBC: .word ov15_02200B0C
    // TODO: decompile
}




void ov15_021FFEC0(void) {
    // ldr r1, _021FFEC8 ; =0x00000648
    // mov r2, #0
    // strb r2, [r0, r1]
    // bx lr
    // _021FFEC8: .word 0x00000648
    // TODO: decompile
}




void ov15_021FFECC(void) {
    // push {r3, r4, r5, lr}
    // lsl r4, r1, #2
    // ldr r1, _021FFF14 ; =ov15_02200AB8
    // ldr r2, _021FFF18 ; =ov15_02200AB9
    // add r5, r0, #0
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // mov r3, #1
    // ldrb r1, [r1, r4]
    // ldrb r2, [r2, r4]
    // ldr r0, [r5, r0]
    // lsl r3, r3, #0x14
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r1, _021FFF1C ; =ov15_02200ABA
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // ldrb r1, [r1, r4]
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetAnim
    // ldr r1, _021FFF20 ; =ov15_02200ABB
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // ldrb r1, [r1, r4]
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetPaletteOverride
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // pop {r3, r4, r5, pc}
    // nop
    // _021FFF14: .word ov15_02200AB8
    // _021FFF18: .word ov15_02200AB9
    // _021FFF1C: .word ov15_02200ABA
    // _021FFF20: .word ov15_02200ABB
    // TODO: decompile
}




void ov15_021FFF24(void) {
    // mov r1, #0x2a
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // ldr r3, _021FFF30 ; =ManagedSprite_SetDrawFlag
    // mov r1, #0
    // bx r3
    // _021FFF30: .word ManagedSprite_SetDrawFlag
    // TODO: decompile
}




void ov15_021FFF34(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // cmp r4, #9
    // blt _021FFF42
    // bl GF_AssertFail
    // cmp r4, #8
    // bne _021FFF58
    // ldr r1, _021FFFC8 ; =ov15_02200A36
    // mov r0, #0x2a
    // lsl r2, r4, #2
    // lsl r0, r0, #4
    // ldrb r1, [r1, r2]
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetAnim
    // b _021FFFA0
    // mov r2, #0x8d
    // lsl r2, r2, #2
    // ldr r0, [r5, r2]
    // add r3, r0, #4
    // add r0, #0x64
    // ldrb r1, [r0]
    // mov r0, #0xc
    // mul r0, r1
    // add r1, r3, r0
    // mov r0, #6
    // ldr r3, _021FFFCC ; =0x00000672
    // ldrsh r0, [r1, r0]
    // ldrb r3, [r5, r3]
    // add r0, r0, r4
    // cmp r0, r3
    // bne _021FFF84
    // add r2, #0x6c
    // ldr r0, [r5, r2]
    // mov r1, #0xa
    // bl ManagedSprite_SetAnim
    // b _021FFFA0
    // ldrb r1, [r1, #9]
    // cmp r0, r1
    // blt _021FFF96
    // add r2, #0x6c
    // ldr r0, [r5, r2]
    // mov r1, #0x28
    // bl ManagedSprite_SetAnim
    // b _021FFFA0
    // add r2, #0x6c
    // ldr r0, [r5, r2]
    // mov r1, #0x14
    // bl ManagedSprite_SetAnim
    // ldr r1, _021FFFD0 ; =ov15_02200A34
    // lsl r4, r4, #2
    // ldr r2, _021FFFD4 ; =ov15_02200A35
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // mov r3, #1
    // ldrb r1, [r1, r4]
    // ldrb r2, [r2, r4]
    // ldr r0, [r5, r0]
    // lsl r3, r3, #0x14
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r1, _021FFFD8 ; =ov15_02200A37
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // ldrb r1, [r1, r4]
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetPaletteOverride
    // pop {r3, r4, r5, pc}
    // _021FFFC8: .word ov15_02200A36
    // _021FFFCC: .word 0x00000672
    // _021FFFD0: .word ov15_02200A34
    // _021FFFD4: .word ov15_02200A35
    // _021FFFD8: .word ov15_02200A37
    // TODO: decompile
}




void ov15_021FFFDC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // cmp r4, #8
    // blt _021FFFEA
    // bl GF_AssertFail
    // ldr r1, _02200020 ; =ov15_022009D4
    // lsl r4, r4, #2
    // ldr r2, _02200024 ; =ov15_022009D5
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // mov r3, #1
    // ldrb r1, [r1, r4]
    // ldrb r2, [r2, r4]
    // ldr r0, [r5, r0]
    // lsl r3, r3, #0x14
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r1, _02200028 ; =ov15_022009D6
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // ldrb r1, [r1, r4]
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetAnim
    // ldr r1, _0220002C ; =ov15_022009D7
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // ldrb r1, [r1, r4]
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetPaletteOverride
    // pop {r3, r4, r5, pc}
    // _02200020: .word ov15_022009D4
    // _02200024: .word ov15_022009D5
    // _02200028: .word ov15_022009D6
    // _0220002C: .word ov15_022009D7
    // TODO: decompile
}




void ov15_02200030(void) {
    // ldr r0, [r0, r1]
    // add r0, r4, r2
    GXS_LoadOBJPltt(0, (1 << 8));
    // add r0, r4, r0
    GXS_LoadOBJPltt((r5 << 5), (r5 << 5), 0x20);
}




void ov15_0220005C(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // ldr r0, [r5, r6]
    ManagedSprite_SetDrawFlag(0);
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    ManagedSprite_SetDrawFlag(0);
    // ldr r0, [r4, r7]
    ManagedSprite_SetDrawFlag(1);
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag((0xa9 << 2), 0);
    // ldr r0, [sp, #4]
    // add r0, #0x15
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_SetDrawFlag((0x25 << 4), 0);
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    ManagedSprite_SetDrawFlag(0);
}




void ov15_022000F4(void) {
    // ldr r3, [r4, r0]
    // add r1, #0x64
    // ldrb r2, [r1]
    // mul r1, r2
    // add r1, r3, r1
    // add r0, #0x60
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag((0x8d << 2), 0);
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag((0xa6 << 2), 0);
    // add r0, #0x60
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag(1);
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag((0xa6 << 2), 1);
}




void ov15_02200140(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r0, #0
    // ldr r6, _022001BC ; =ov15_02200B0C
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // mov r4, #0
    // add r5, r7, #0
    // mov r0, #0x95
    // mov r1, #0x34
    // mov r2, #0x36
    // lsl r0, r0, #2
    // mov r3, #1
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    // ldr r0, [r5, r0]
    // lsl r3, r3, #0x14
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r0, [sp, #4]
    // cmp r4, r0
    // bge _0220019A
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // beq _0220018C
    // ldr r3, [sp]
    // mov r2, #6
    // ldrsh r2, [r3, r2]
    // add r0, r7, #0
    // add r1, r4, #0
    // add r2, r2, r4
    // lsl r2, r2, #1
    // add r3, r7, r2
    // ldr r2, _022001C0 ; =0x000006A4
    // ldrh r2, [r3, r2]
    // bl ov15_021FF8F0
    // mov r0, #0x95
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // b _022001A6
    // mov r0, #0x95
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r4, r4, #1
    // add r6, #0x34
    // add r5, r5, #4
    // cmp r4, #6
    // blt _02200152
    // add r0, r7, #0
    // bl ov15_022000F4
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022001BC: .word ov15_02200B0C
    // _022001C0: .word 0x000006A4
    // TODO: decompile
}




void ov15_022001C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r2, #0
    // str r0, [sp]
    // add r4, r1, #0
    // mov r7, #0
    // add r0, r5, #0
    // mov r1, #6
    // mvn r7, r7
    // bl _s32_div_f
    // mov r1, #6
    // add r2, r0, #0
    // ldrsh r3, [r4, r1]
    // mul r2, r1
    // cmp r3, r2
    // bne _022001EC
    // add r0, r5, #0
    // bl _s32_div_f
    // add r7, r1, #0
    // ldr r4, _02200238 ; =ov15_02200B0C
    // ldr r5, [sp]
    // mov r6, #0
    // mov r0, #0x95
    // mov r1, #0x34
    // mov r2, #0x36
    // lsl r0, r0, #2
    // mov r3, #1
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r5, r0]
    // lsl r3, r3, #0x14
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // cmp r6, r7
    // bne _0220021A
    // mov r0, #0x95
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // b _02200226
    // mov r0, #0x95
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r6, r6, #1
    // add r4, #0x34
    // add r5, r5, #4
    // cmp r6, #6
    // blt _022001F2
    // ldr r0, [sp]
    // bl ov15_022000F4
    // pop {r3, r4, r5, r6, r7, pc}
    // _02200238: .word ov15_02200B0C
    // TODO: decompile
}




void ov15_0220023C(void) {
    // ldr r0, [r7, r0]
    ManagedSprite_SetDrawFlag((0x2a << 4), 1);
    // ldrb r0, [r6, r4]
    // ldr r0, [r5, r0]
    ManagedSprite_SetDrawFlag((0xb << 6), 1);
    // ldr r0, [r5, r0]
    ManagedSprite_SetDrawFlag((0xb << 6), 0);
    // ldr r0, [r7, r0]
    ManagedSprite_SetDrawFlag((0xa5 << 2), 0);
    // ldr r0, [r7, r0]
    ManagedSprite_SetDrawFlag((0xa6 << 2), 0);
}




void ov15_02200294(void) {
}




void ov15_022002B4(void) {
    // ldr r0, [r5, r7]
    ManagedSprite_SetDrawFlag(0);
    // ldr r0, [r5, r0]
    ManagedSprite_SetPositionXYWithSubscreenOffset((0x95 << 2), 0x56, 0x4c, (1 << 0x14));
}




void ov15_022002EC(void) {
    // mov r1, #0
    // cmp r0, #0x64
    // bge _022002F4
    // mov r1, #1
    // cmp r0, #0xa
    // bge _022002FA
    // mov r1, #2
    // add r0, r1, #0
    // bx lr
    // TODO: decompile
}




void ov15_02200300(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, r1, #0
    // str r1, [sp]
    // str r2, [sp, #4]
    // cmp r0, #2
    // bne _0220031A
    // add r0, r2, #0
    // cmp r0, #0x63
    // ble _0220031A
    // mov r0, #0x63
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r2, _02200414 ; =ov15_02200998
    // sub r0, r0, #2
    // lsl r1, r0, #2
    // str r1, [sp, #8]
    // ldr r1, [r2, r1]
    // mov r7, #0
    // cmp r1, #0
    // ble _0220036C
    // mov r1, #0x18
    // mul r1, r0
    // ldr r0, _02200418 ; =ov15_02200A58
    // add r4, r0, r1
    // ldr r0, _0220041C ; =ov15_02200A88
    // add r6, r0, r1
    // ldr r0, [r4]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // ldr r1, [r6]
    // bl ManagedSprite_SetAnim
    // ldr r1, _02200414 ; =ov15_02200998
    // ldr r0, [sp, #8]
    // add r7, r7, #1
    // ldr r0, [r1, r0]
    // add r4, r4, #4
    // add r6, r6, #4
    // cmp r7, r0
    // blt _02200338
    // ldr r0, [sp, #4]
    // bl ov15_022002EC
    // cmp r0, #0
    // beq _022003D4
    // ldr r1, [sp]
    // sub r1, r1, #2
    // bne _0220039A
    // cmp r0, #2
    // bne _0220039A
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0xb7
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // b _022003D4
    // ldr r1, [sp]
    // sub r1, r1, #2
    // cmp r1, #1
    // bne _022003D4
    // sub r2, r0, #1
    // ldr r0, _02200420 ; =ov15_022009A0
    // lsl r7, r2, #2
    // ldr r0, [r0, r7]
    // mov r4, #0
    // cmp r0, #0
    // ble _022003D4
    // ldr r1, _02200424 ; =ov15_02200A14
    // lsl r0, r2, #4
    // add r6, r1, r0
    // ldr r0, [r6]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _02200420 ; =ov15_022009A0
    // add r4, r4, #1
    // ldr r0, [r0, r7]
    // add r6, r6, #4
    // cmp r4, r0
    // blt _022003B6
    // mov r0, #0xba
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0xba
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // mov r0, #0xba
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0x25
    // bl ManagedSprite_SetAnim
    // mov r0, #0xa7
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // mov r0, #0xa7
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0x27
    // bl ManagedSprite_SetAnim
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02200414: .word ov15_02200998
    // _02200418: .word ov15_02200A58
    // _0220041C: .word ov15_02200A88
    // _02200420: .word ov15_022009A0
    // _02200424: .word ov15_02200A14
    // TODO: decompile
}




void ov15_02200428(void) {
    // str r0, [sp]
    // ldr r0, [r5, r6]
    ManagedSprite_SetDrawFlag(0);
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    ManagedSprite_SetDrawFlag(0);
}




void ov15_02200458(void) {
    GF_AssertFail();
    // add r0, sp, #0
    MI_CpuFill8(0, 8);
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    GF_AssertFail(*((u8*)((0x8d << 2) + 0xc)));
    // ldr r0, [r5, r0]
    // add r1, r0, r4
    // add r0, sp, #0
    // strb r1, [r0, r2]
    // add r4, #0xc
    // add r4, sp, #0
    // ldrb r0, [r4]
    // ldr r0, [r5, r0]
    ManagedSprite_SetDrawFlag((0x9d << 2), r7, *((u8*)(r1 + 0xc)));
    // ldr r0, [r5, r0]
    ManagedSprite_SetDrawFlag((0x9d << 2), 0);
}




void ov15_022004DC(void) {
    // mov r2, #0xa7
    // lsl r2, r2, #2
    // ldr r3, _022004E8 ; =ManagedSprite_SetDrawFlag
    // ldr r0, [r0, r2]
    // bx r3
    // nop
    // _022004E8: .word ManagedSprite_SetDrawFlag
    // TODO: decompile
}



