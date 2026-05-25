/* Decompiled from asm/overlay_71.s */
#include "global.h"

void TradeSequence_Init(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // bne _02246970
    // b _02246B0C
    // mov r0, #3
    // mov r1, #0x38
    // lsl r2, r0, #0xf
    // bl Heap_Create
    // mov r0, #3
    // mov r1, #0x39
    // lsl r2, r0, #0xf
    // bl Heap_Create
    // bl ov71_022473E4
    // mov r1, #0xfd
    // mov r0, #3
    // lsl r1, r1, #2
    // mov r2, #1
    // bl Sound_SetSceneAndPlayBGM
    // mov r1, #0x56
    // add r0, r5, #0
    // lsl r1, r1, #2
    // mov r2, #0x38
    // bl OverlayManager_CreateAndGetData
    // add r4, r0, #0
    // bne _022469A6
    // b _02246B06
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // str r0, [r4]
    // mov r0, #0
    // str r0, [r4, #4]
    // mov r0, #0x38
    // bl BgConfig_Alloc
    // str r0, [r4, #8]
    // mov r0, #0x19
    // lsl r0, r0, #4
    // mov r1, #0x38
    // bl String_New
    // str r0, [r4, #0x14]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xb3
    // mov r3, #0x38
    // bl NewMsgDataFromNarc
    // str r0, [r4, #0x10]
    // mov r0, #0x38
    // bl MessageFormat_New
    // str r0, [r4, #0xc]
    // ldr r2, [r4]
    // ldr r0, [r2, #0x10]
    // cmp r0, #1
    // beq _022469EE
    // cmp r0, #2
    // beq _02246A20
    // cmp r0, #4
    // beq _02246A2C
    // b _02246A44
    // ldr r0, [r4, #0xc]
    // ldr r2, [r2]
    // mov r1, #0
    // bl BufferBoxMonNickname
    // ldr r2, [r4]
    // ldr r0, [r4, #0xc]
    // ldr r2, [r2, #4]
    // mov r1, #1
    // bl BufferBoxMonNickname
    // ldr r2, [r4]
    // ldr r0, [r4, #0xc]
    // ldr r2, [r2, #8]
    // mov r1, #2
    // bl BufferPlayersName
    // ldr r0, [r4]
    // ldr r0, [r0, #4]
    // bl ov71_02246B28
    // mov r1, #0x52
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // b _02246A44
    // ldr r0, [r4, #0xc]
    // ldr r2, [r2]
    // mov r1, #0
    // bl BufferBoxMonNickname
    // b _02246A44
    // ldr r0, [r4, #0xc]
    // ldr r2, [r2, #4]
    // mov r1, #1
    // bl BufferBoxMonNickname
    // ldr r0, [r4]
    // ldr r0, [r0, #4]
    // bl ov71_02246B28
    // mov r1, #0x52
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // bl NNS_G2dInitOamManagerModule
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x7f
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r3, #0x20
    // str r3, [sp, #0xc]
    // mov r1, #0x38
    // str r1, [sp, #0x10]
    // mov r1, #0x80
    // add r2, r0, #0
    // bl OamManager_Create
    // add r1, r4, #0
    // mov r0, #0x40
    // add r1, #0x1c
    // mov r2, #0x38
    // bl G2dRenderer_Init
    // str r0, [r4, #0x18]
    // add r0, r4, #0
    // mov r2, #0x3a
    // add r0, #0x1c
    // mov r1, #0
    // lsl r2, r2, #0xe
    // bl G2dRenderer_SetSubSurfaceCoords
    // ldr r0, [r4]
    // mov r1, #5
    // ldr r0, [r0]
    // mov r2, #0
    // bl GetBoxMonData
    // mov r1, #0x53
    // lsl r1, r1, #2
    // strh r0, [r4, r1]
    // ldr r0, [r4]
    // mov r1, #5
    // ldr r0, [r0, #4]
    // mov r2, #0
    // bl GetBoxMonData
    // mov r1, #0x15
    // lsl r1, r1, #4
    // strh r0, [r4, r1]
    // ldr r0, [r4]
    // mov r1, #0x70
    // ldr r0, [r0]
    // mov r2, #0
    // bl GetBoxMonData
    // ldr r1, _02246B14 ; =0x0000014E
    // mov r2, #0
    // strh r0, [r4, r1]
    // ldr r0, [r4]
    // mov r1, #0x70
    // ldr r0, [r0, #4]
    // bl GetBoxMonData
    // ldr r1, _02246B18 ; =0x00000152
    // strh r0, [r4, r1]
    // mov r0, #0
    // add r1, r1, #2
    // str r0, [r4, r1]
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _02246B1C ; =0xFFFFE0FF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _02246B20 ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // ldr r0, _02246B24 ; =ov71_02246C48
    // add r1, r4, #0
    // mov r2, #1
    // bl SysTask_CreateOnPrintQueue
    // mov r1, #0x51
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0
    // add r1, #0x10
    // str r0, [r4, r1]
    // add sp, #0x14
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0x14
    // pop {r4, r5, pc}
    // nop
    // _02246B14: .word 0x0000014E
    // _02246B18: .word 0x00000152
    // _02246B1C: .word 0xFFFFE0FF
    // _02246B20: .word 0x04001000
    // _02246B24: .word ov71_02246C48
    // TODO: decompile
}



void ov71_02246B28(void) {
    GetBoxMonData(5, 0);
    GetBoxMonData(r5, 0x70, 0);
    GetMonBaseStat_HandleAlternateForm(r4, r0, 0x1c);
}



BOOL TradeSequence_Exit(void) {
    OS_DisableInterrupts();
    OverlayManager_GetData(r5);
    // ldr r0, [r4, r0]
    SysTask_Destroy((0x51 << 2));
    sub_0203A914();
    MessageFormat_Delete(*((u32*)(r4 + 0xc)));
    DestroyMsgData(*((u32*)(r4 + 0x10)));
    String_Delete(*((u32*)(r4 + 0x14)));
    Heap_Free(*((u32*)(r4 + 8)));
    SpriteList_Delete(*((u32*)(r4 + 0x18)));
    OamManager_Free();
    OverlayManager_FreeData(r5);
    Heap_Destroy(0x38);
    Heap_Destroy(0x39);
    OS_RestoreInterrupts(r6);
}



void TradeSequence_Main(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r3, [r4, #4]
    // cmp r3, #7
    // bhs _02246C34
    // ldr r1, [r4]
    // ldr r6, _02246C38 ; =ov71_0224BBF8
    // lsl r2, r3, #4
    // ldr r1, [r1, #0x10]
    // ldr r6, [r6, r2]
    // tst r1, r6
    // beq _02246C24
    // mov r1, #0x55
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // bne _02246BEC
    // ldr r1, _02246C3C ; =ov71_0224BBEC
    // ldr r1, [r1, r2]
    // blx r1
    // mov r1, #0x55
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r2, [r4, #4]
    // mov r0, #0x55
    // lsl r3, r2, #4
    // ldr r2, _02246C40 ; =ov71_0224BBF0
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r2, [r2, r3]
    // add r1, r5, #0
    // blx r2
    // cmp r0, #0
    // beq _02246C2C
    // ldr r1, [r4, #4]
    // mov r0, #0x55
    // lsl r2, r1, #4
    // ldr r1, _02246C44 ; =ov71_0224BBF4
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r1, r2]
    // blx r1
    // mov r0, #0x55
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // str r1, [r5]
    // b _02246C2C
    // add r0, r3, #1
    // str r0, [r4, #4]
    // mov r0, #0
    // str r0, [r5]
    // bl ov71_022473F0
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // _02246C38: .word ov71_0224BBF8
    // _02246C3C: .word ov71_0224BBEC
    // _02246C40: .word ov71_0224BBF0
    // _02246C44: .word ov71_0224BBF4
    // TODO: decompile
}



void ov71_02246C48(void) {
    // push {r3, lr}
    // ldr r0, [r1, #0x18]
    // bl SpriteList_RenderAndAnimateSprites
    // bl OamManager_ApplyAndResetBuffers
    // ldr r3, _02246C64 ; =0x027E0000
    // ldr r1, _02246C68 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r3, pc}
    // nop
    // _02246C64: .word 0x027E0000
    // _02246C68: .word 0x00003FF8
    // TODO: decompile
}



void ov71_02246C6C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0x38
    // add r6, r1, #0
    // add r1, r0, #0
    // add r1, #0xc8
    // bl Heap_Alloc
    // add r4, r0, #0
    // ldr r0, _02246D30 ; =0x00000000
    // str r0, [r5]
    // beq _02246D28
    // mov r0, #0x59
    // mov r1, #6
    // add r2, sp, #4
    // mov r3, #0x38
    // bl GfGfxLoader_GetPlttData
    // add r7, r0, #0
    // beq _02246CA6
    // mov r0, #0
    // add r1, r4, #0
    // mov r2, #0x60
    // bl MIi_CpuClear16
    // add r0, r7, #0
    // bl Heap_Free
    // add r1, r4, #0
    // mov r0, #0
    // add r1, #0xec
    // str r0, [r1]
    // add r1, r4, #0
    // add r1, #0xe8
    // str r0, [r1]
    // add r1, r4, #0
    // add r1, #0xf0
    // str r0, [r1]
    // add r1, r4, #0
    // add r1, #0xf4
    // str r0, [r1]
    // add r1, r4, #0
    // add r1, #0xe4
    // str r5, [r1]
    // add r1, r4, #0
    // add r1, #0xf8
    // str r0, [r1]
    // add r1, r4, #0
    // add r1, #0xfc
    // str r6, [r1]
    // add r3, r4, #0
    // add r2, r0, #0
    // add r1, r3, #0
    // add r1, #0xc4
    // add r0, r0, #1
    // add r3, r3, #4
    // str r2, [r1]
    // cmp r0, #8
    // blt _02246CD6
    // mov r0, #8
    // str r0, [sp]
    // ldr r0, _02246D34 ; =0x04000050
    // mov r1, #4
    // mov r2, #0xc
    // mov r3, #0x10
    // bl G2x_SetBlendAlpha_
    // mov r0, #8
    // str r0, [sp]
    // ldr r0, _02246D38 ; =0x04001050
    // mov r1, #4
    // mov r2, #0xc
    // mov r3, #0x10
    // bl G2x_SetBlendAlpha_
    // ldr r0, _02246D3C ; =ov71_02246D9C
    // add r1, r4, #0
    // mov r2, #0x14
    // bl SysTask_CreateOnVWaitQueue
    // add r1, r4, #0
    // add r1, #0xc0
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02246D28
    // add r0, r4, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // mov r1, #1
    // str r1, [r0]
    // add r0, r4, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02246D30: .word 0x00000000
    // _02246D34: .word 0x04000050
    // _02246D38: .word 0x04001050
    // _02246D3C: .word ov71_02246D9C
    // TODO: decompile
}



void ov71_02246D40(void) {
    // add r1, #0xe4
    // add r0, #0xe8
    // str r1, [r0]
}



void ov71_02246D54(void) {
    // add r0, #0xe4
    // add r0, #0xc4
    ov71_02246F60(r0, 0);
    // add r0, #0xe4
    // str r1, [r0]
    // add r0, #0xc0
    SysTask_Destroy(*((u32*)r6), 0);
    Heap_Free(r6);
}



void ov71_02246D9C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0xe8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02246E1A
    // add r0, r4, #0
    // add r0, #0xf0
    // ldr r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf0
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf0
    // ldr r0, [r0]
    // cmp r0, #0
    // bgt _02246DD8
    // ldr r0, _02246E80 ; =0x000006AD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x1e
    // add r0, #0xf0
    // str r1, [r0]
    // add r0, r4, #0
    // bl ov71_02246EAC
    // add r0, r4, #0
    // add r0, #0xec
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02246E7C
    // bl GX_BeginLoadBGExtPltt
    // bl GXS_BeginLoadBGExtPltt
    // add r0, r4, #0
    // mov r1, #0x60
    // bl DC_FlushRange
    // mov r1, #6
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // mov r2, #0x60
    // bl GX_LoadBGExtPltt
    // mov r1, #6
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // mov r2, #0x60
    // bl GXS_LoadBGExtPltt
    // bl GX_EndLoadBGExtPltt
    // bl GXS_EndLoadBGExtPltt
    // mov r0, #0
    // add r4, #0xec
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0xec
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02246E5C
    // bl GX_BeginLoadBGExtPltt
    // bl GXS_BeginLoadBGExtPltt
    // add r0, r4, #0
    // mov r1, #0x60
    // bl DC_FlushRange
    // mov r1, #6
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // mov r2, #0x60
    // bl GX_LoadBGExtPltt
    // mov r1, #6
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // mov r2, #0x60
    // bl GXS_LoadBGExtPltt
    // bl GX_EndLoadBGExtPltt
    // bl GXS_EndLoadBGExtPltt
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xec
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf4
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02246E7C
    // add r0, r4, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // mov r1, #0
    // str r1, [r0]
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // nop
    // _02246E80: .word 0x000006AD
    // TODO: decompile
}



void ov71_02246E84(void) {
    // strh r4, [r0, r1]
    // strh r3, [r0, r1]
    // add r0, #0xec
    // str r1, [r0]
}



void ov71_02246EAC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r0, #0xc4
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02246F58
    // mov r0, #0x38
    // mov r1, #0x18
    // bl Heap_Alloc
    // add r4, r0, #0
    // beq _02246F58
    // add r0, r5, #0
    // str r5, [r4]
    // add r0, #0xfc
    // ldr r0, [r0]
    // cmp r0, #1
    // bne _02246EDE
    // mov r0, #0
    // mvn r0, r0
    // b _02246EE0
    // mov r0, #0xf
    // str r0, [r4, #4]
    // mov r0, #0
    // str r0, [r4, #0xc]
    // mov r0, #2
    // str r0, [r4, #8]
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // add r1, r4, #0
    // str r0, [r4, #0x10]
    // add r0, r5, #0
    // add r0, #0xfc
    // ldr r0, [r0]
    // mov r2, #0xa
    // str r0, [r4, #0x14]
    // ldr r0, _02246F5C ; =ov71_02246F90
    // bl SysTask_CreateOnMainQueue
    // add r1, r5, #0
    // add r1, #0xf8
    // ldr r1, [r1]
    // lsl r1, r1, #2
    // add r1, r5, r1
    // add r1, #0xc4
    // str r0, [r1]
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r0, #0xc4
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02246F52
    // add r0, r5, #0
    // add r0, #0xf4
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r5, #0
    // add r0, #0xf4
    // str r1, [r0]
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r5, #0
    // add r0, #0xf8
    // str r1, [r0]
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // cmp r0, #8
    // blt _02246F58
    // mov r0, #0
    // add r5, #0xf8
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // nop
    // _02246F5C: .word ov71_02246F90
    // TODO: decompile
}



void ov71_02246F60(void) {
    // add r6, #0xc4
    // ldr r0, [r6, r4]
    SysTask_GetData();
    Heap_Free();
    // ldr r0, [r6, r4]
    SysTask_Destroy();
    // str r0, [r6, r4]
    // add r0, #0xf4
    // add r5, #0xf4
    // str r0, [r5]
}



void ov71_02246F90(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #0xc]
    // add r1, r0, #1
    // str r1, [r4, #0xc]
    // ldr r0, [r4, #8]
    // cmp r1, r0
    // blt _02246FF8
    // mov r3, #0
    // str r3, [r4, #0xc]
    // ldr r0, [r4, #0x14]
    // cmp r0, #1
    // bne _02246FD0
    // ldr r1, [r4, #4]
    // ldr r0, [r4]
    // add r2, r1, #1
    // cmp r2, #0xf
    // blt _02246FC2
    // bl ov71_02246E84
    // ldr r0, [r4]
    // ldr r1, [r4, #0x10]
    // bl ov71_02246F60
    // pop {r4, pc}
    // ldr r3, _02246FFC ; =0x00007FFF
    // bl ov71_02246E84
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // pop {r4, pc}
    // ldr r2, [r4, #4]
    // ldr r0, [r4]
    // cmp r2, #0
    // bge _02246FEA
    // add r1, r2, #0
    // add r2, r2, #1
    // bl ov71_02246E84
    // ldr r0, [r4]
    // ldr r1, [r4, #0x10]
    // bl ov71_02246F60
    // pop {r4, pc}
    // ldr r3, _02246FFC ; =0x00007FFF
    // add r1, r2, #1
    // bl ov71_02246E84
    // ldr r0, [r4, #4]
    // sub r0, r0, #1
    // str r0, [r4, #4]
    // pop {r4, pc}
    // nop
    // _02246FFC: .word 0x00007FFF
    // TODO: decompile
}



void ov71_02247000(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r0, [sp]
    // add r6, r1, #0
    // mov r0, #0x38
    // mov r1, #0x24
    // add r7, r2, #0
    // str r3, [sp, #4]
    // ldr r5, [sp, #0x28]
    // bl Heap_Alloc
    // add r4, r0, #0
    // ldr r0, _02247060 ; =0x00000001
    // str r0, [r5]
    // beq _02247058
    // ldr r1, [sp]
    // str r1, [r4]
    // str r6, [r4, #8]
    // ldr r1, [sp, #4]
    // str r7, [r4, #0xc]
    // str r1, [r4, #0x10]
    // ldr r1, [sp, #0x20]
    // str r1, [r4, #0x14]
    // cmp r6, r7
    // bge _02247034
    // mov r0, #0
    // str r0, [r4, #0x18]
    // ldr r0, [sp, #0x24]
    // mov r2, #0
    // str r0, [r4, #0x1c]
    // str r5, [r4, #4]
    // ldr r0, _02247064 ; =ov71_02247068
    // add r1, r4, #0
    // str r2, [r5]
    // bl SysTask_CreateOnVBlankQueue
    // str r0, [r4, #0x20]
    // cmp r0, #0
    // bne _02247058
    // mov r0, #1
    // str r0, [r5]
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r4, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02247060: .word 0x00000001
    // _02247064: .word ov71_02247068
    // TODO: decompile
}



void ov71_02247068(void) {
    // mul r1, r0
    // asr r2, r1, #0xc
    // asr r1, r2, #4
    // add r1, r2, r1
    // asr r2, r1, #5
    // add r0, r0, r2
    *((u32*)(r1 + 8)) = *((u32*)(r1 + 8));
    *((u32*)(r1 + 8)) = *((u32*)(r1 + 0xc));
    // str r1, [r0]
    // sub r0, r0, r2
    *((u32*)(r1 + 8)) = *((u32*)(r1 + 4));
    *((u32*)(r1 + 8)) = *((u32*)(r1 + 0xc));
    // str r1, [r0]
    ov71_022470DC(r1, 1);
    ov71_02247424(r4);
    SysTask_Destroy(r5);
    // add r0, r1, r0
    *((u32*)(r4 + 0x10)) = *((u32*)(r4 + 0x14));
}



void ov71_022470DC(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // add r2, sp, #4
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #8]
    // mov r3, #0x80
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x1c]
    // lsl r1, r0, #2
    // ldr r0, _02247120 ; =_0224BBD4
    // ldr r0, [r0, r1]
    // mov r1, #2
    // str r0, [sp]
    // ldr r0, [r4]
    // bl SetBgAffine
    // ldr r0, [r4, #0x1c]
    // add r2, sp, #4
    // lsl r1, r0, #2
    // ldr r0, _02247120 ; =_0224BBD4
    // mov r3, #0x80
    // ldr r0, [r0, r1]
    // mov r1, #6
    // str r0, [sp]
    // ldr r0, [r4]
    // bl SetBgAffine
    // add sp, #0x14
    // pop {r3, r4, pc}
    // _02247120: .word _0224BBD4
    // TODO: decompile
}



void ov71_02247124(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x48
    // add r5, r0, #0
    // ldr r0, [sp, #0x60]
    // add r4, r1, #0
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // cmp r0, #0
    // beq _0224713C
    // mov r7, #0x19
    // lsl r7, r7, #8
    // b _02247140
    // mov r7, #0x32
    // lsl r7, r7, #6
    // mov r0, #0x38
    // add r1, r7, #0
    // bl Heap_AllocAtEnd
    // str r0, [sp, #0x24]
    // cmp r0, #0
    // beq _02247202
    // ldr r3, _02247228 ; =ov71_0224BBDC
    // add r2, sp, #0x28
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // cmp r4, #0
    // ldr r0, [r5]
    // bne _02247164
    // ldr r4, [r0]
    // b _02247166
    // ldr r4, [r0, #4]
    // add r0, r4, #0
    // bl AcquireBoxMonLock
    // str r0, [sp, #0x20]
    // add r0, sp, #0x38
    // add r1, r4, #0
    // mov r2, #2
    // mov r3, #0
    // bl GetBoxmonSpriteCharAndPlttNarcIds
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl GetBoxMonData
    // str r0, [sp, #0x1c]
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetBoxMonData
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // ldr r0, [sp, #0x60]
    // cmp r0, #0
    // beq _022471A0
    // ldr r0, [sp, #0x30]
    // lsl r0, r0, #1
    // str r0, [sp, #0x30]
    // add r0, r4, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetBoxMonData
    // cmp r0, #1
    // bne _022471B8
    // ldr r0, _0224722C ; =0x00000147
    // cmp r6, r0
    // bne _022471B8
    // add r6, r0, #0
    // add r6, #0xa7
    // ldr r0, [sp, #0x24]
    // add r1, sp, #0x28
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // mov r2, #0x38
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x60]
    // add r3, sp, #0x28
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // str r6, [sp, #0x10]
    // ldrh r0, [r1, #0x10]
    // ldrh r1, [r1, #0x12]
    // bl sub_02014510
    // ldr r0, [sp, #0x24]
    // add r1, r7, #0
    // bl DC_FlushRange
    // ldr r1, [sp, #0x14]
    // mov r0, #0
    // str r0, [sp]
    // lsl r1, r1, #0x18
    // ldr r0, [r5, #8]
    // ldr r2, [sp, #0x24]
    // lsr r1, r1, #0x18
    // add r3, r7, #0
    // bl BG_LoadCharTilesData
    // ldr r1, [sp, #0x20]
    // add r0, r4, #0
    // bl ReleaseBoxMonLock
    // ldr r0, [sp, #0x24]
    // bl Heap_Free
    // ldr r0, [sp, #0x14]
    // cmp r0, #4
    // blo _0224720C
    // mov r2, #4
    // b _0224720E
    // mov r2, #0
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x38
    // ldr r3, [sp, #0x18]
    // str r0, [sp, #4]
    // add r1, sp, #0x28
    // ldrh r0, [r1, #0x10]
    // ldrh r1, [r1, #0x14]
    // lsl r3, r3, #5
    // bl GfGfxLoader_GXLoadPal
    // add sp, #0x48
    // pop {r3, r4, r5, r6, r7, pc}
    // _02247228: .word ov71_0224BBDC
    // _0224722C: .word 0x00000147
    // TODO: decompile
}



void ov71_02247230(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // cmp r1, #0
    // bne _02247242
    // ldr r1, _022472C0 ; =0x0000010A
    // b _02247252
    // mov r1, #0x52
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // cmp r0, #0
    // beq _02247250
    // sub r1, #0x3d
    // b _02247252
    // sub r1, #0x3e
    // mov r0, #0x38
    // str r0, [sp]
    // mov r0, #7
    // mov r2, #0
    // add r3, sp, #0x1c
    // bl GfGfxLoader_GetScrnData
    // add r7, r0, #0
    // beq _022472BA
    // mov r0, #0xa
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x38]
    // add r0, #0xc
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r0, #0x20
    // ldr r3, [sp, #0x3c]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // lsl r1, r4, #0x18
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [r5, #8]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl CopyToBgTilemapRect
    // mov r0, #0xa
    // str r0, [sp]
    // str r0, [sp, #4]
    // lsl r0, r6, #0x18
    // ldr r2, [sp, #0x38]
    // ldr r3, [sp, #0x3c]
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // lsl r1, r4, #0x18
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [r5, #8]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl BgTilemapRectChangePalette
    // add r0, r7, #0
    // bl Heap_Free
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022472C0: .word 0x0000010A
    // TODO: decompile
}



void ov71_022472C4(void) {
    // str r0, [sp]
    // add r3, #8
    GfGfxLoader_GetCellBank(r1, r2, 1, r0);
    // str r0, [r5]
    // str r0, [sp]
    // add r3, #0xc
    GfGfxLoader_GetAnimBank(r4, r6, 1, r5);
    *((u32*)(r5 + 4)) = r0;
}



void ov71_022472FC(void) {
    Heap_Free(*((u32*)r0));
    // str r0, [r4]
    Heap_Free(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 4)) = 0;
}



void ov71_02247320(void) {
    // str r2, [r0]
    *((u32*)(r0 + 8)) = r3;
    *((u32*)(r0 + 0xc)) = *((u32*)(r1 + 8));
    // ldr r2, [sp]
    *((u32*)(r0 + 0x10)) = *((u32*)(r1 + 0xc));
    // add r1, #0x20
    // strb r2, [r1]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 0x14)) = 0;
    *((u32*)(r0 + 0x18)) = 0;
    *((u32*)(r0 + 0x1c)) = 0;
}



void ov71_02247340(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x28]
    // str r1, [sp, #4]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0
    Sprite_Create(0x38);
    Sprite_SetAnimActiveFlag(1);
    Sprite_SetAnimSpeed(r4, (1 << 0xc));
}



void ov71_02247384(void) {
    // ldr r0, [r0, #8]
    // bx lr
    // TODO: decompile
}



void ov71_02247388(void) {
    // ldr r0, [r0, #0xc]
    // bx lr
    // TODO: decompile
}



void ov71_0224738C(void) {
    // ldr r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}



void ov71_02247390(void) {
    // ldr r0, [r0]
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}



void ov71_02247398(void) {
    // ldr r0, [r0]
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}



void ov71_022473A0(void) {
    // ldr r0, [r0]
    // ldr r0, [r0, #0xc]
    // bx lr
    // TODO: decompile
}



void ov71_022473A8(void) {
    // ldrh r0, [r0, r1]
}



void ov71_022473B0(void) {
    // ldr r1, _022473B8 ; =0x0000014E
    // ldrh r0, [r0, r1]
    // bx lr
    // nop
    // _022473B8: .word 0x0000014E
    // TODO: decompile
}



void ov71_022473BC(void) {
    // ldrh r0, [r0, r1]
}



void ov71_022473C4(void) {
    // ldr r1, _022473CC ; =0x00000152
    // ldrh r0, [r0, r1]
    // bx lr
    // nop
    // _022473CC: .word 0x00000152
    // TODO: decompile
}



void ov71_022473D0(void) {
}



void ov71_022473DC(void) {
    // ldr r0, [r0]
    // ldr r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}



void ov71_022473E4(void) {
    // ldr r0, _022473EC ; =_0224C040
    // mov r1, #0
    // str r1, [r0]
    // bx lr
    // _022473EC: .word _0224C040
    // TODO: decompile
}



void ov71_022473F0(void) {
    // push {r4, r5, r6, lr}
    // ldr r6, _0224741C ; =_0224C040
    // ldr r0, [r6]
    // cmp r0, #0
    // beq _02247418
    // mov r4, #0
    // cmp r0, #0
    // ble _02247412
    // ldr r5, _02247420 ; =ov71_0224C044
    // ldr r0, [r5]
    // bl Heap_Free
    // ldr r0, [r6]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, r0
    // blt _02247402
    // ldr r0, _0224741C ; =_0224C040
    // mov r1, #0
    // str r1, [r0]
    // pop {r4, r5, r6, pc}
    // nop
    // _0224741C: .word _0224C040
    // _02247420: .word ov71_0224C044
    // TODO: decompile
}



void ov71_02247424(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02247444 ; =_0224C040
    // ldr r0, [r0]
    // cmp r0, #0x20
    // blt _02247434
    // bl GF_AssertFail
    // ldr r0, _02247444 ; =_0224C040
    // ldr r2, [r0]
    // add r1, r2, #1
    // str r1, [r0]
    // ldr r0, _02247448 ; =ov71_0224C044
    // lsl r1, r2, #2
    // str r4, [r0, r1]
    // pop {r4, pc}
    // _02247444: .word _0224C040
    // _02247448: .word ov71_0224C044
    // TODO: decompile
}



void ov71_0224744C(void) {
    // str r3, [sp]
    Heap_Alloc(0x39, 0x20);
    // ldr r3, [sp]
    ov71_0224784C(r4, r5);
    // mul r1, r7
    Heap_Alloc(0x39, 0x8c);
    *((u32*)(r6 + 0x18)) = r0;
    *((u32*)(r6 + 0x1c)) = r7;
    // add r0, r0, r5
    ov71_022475C4(*((u32*)(r6 + 0x18)));
    // add r5, #0x8c
}



void ov71_02247498(void) {
    // add r0, r0, r4
    ov71_022475F8(*((u32*)(r0 + 0x18)));
    // add r4, #0x8c
    Heap_Free(*((u32*)(r5 + 0x18)));
    ov71_022478B8(r5);
    Heap_Free(r5);
}



void ov71_022474CC(void) {
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    Camera_PushLookAtToNNSGlb();
    // add r0, r0, r4
    ov71_02247514(*((u32*)(r5 + 0x18)), *((u32*)(*((u32*)(r5 + 0x18)) + 0x64)));
    // add r4, #0x8c
    // add r1, sp, #0
    // str r2, [sp]
    NNS_G3dGeBufferOP_N(0x12, 1);
}



void ov71_02247514(void) {
    // push {r4, lr}
    // sub sp, #0x50
    // add r4, r0, #0
    // add r0, sp, #0x2c
    // bl MTX_Identity33_
    // add r0, r4, #0
    // add r0, #0x80
    // ldrh r0, [r0]
    // ldr r3, _022475C0 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #8
    // bl MTX_RotX33_
    // add r1, sp, #0x2c
    // add r0, sp, #8
    // add r2, r1, #0
    // bl MTX_Concat33
    // add r0, r4, #0
    // add r0, #0x82
    // ldrh r0, [r0]
    // ldr r3, _022475C0 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #8
    // bl MTX_RotY33_
    // add r1, sp, #0x2c
    // add r0, sp, #8
    // add r2, r1, #0
    // bl MTX_Concat33
    // add r0, r4, #0
    // add r0, #0x84
    // ldrh r0, [r0]
    // ldr r3, _022475C0 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #8
    // bl MTX_RotZ33_
    // add r1, sp, #0x2c
    // add r0, sp, #8
    // add r2, r1, #0
    // bl MTX_Concat33
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // cmp r0, #0x1f
    // beq _022475AC
    // str r0, [sp]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // str r0, [sp, #4]
    // bl NNS_G3dGlbPolygonAttr
    // add r1, r4, #0
    // add r0, r4, #4
    // add r4, #0x74
    // add r1, #0x68
    // add r2, sp, #0x2c
    // add r3, r4, #0
    // bl GF3dRender_DrawModel
    // add sp, #0x50
    // pop {r4, pc}
    // _022475C0: .word FX_SinCosTable_
    // TODO: decompile
}



void ov71_022475C4(void) {
    *((u32*)(r0 + 0x64)) = 0;
    // str r1, [r0]
    // add r2, #0x84
    // strh r1, [r2]
    // ldrsh r3, [r0, r2]
    // add r2, #0x82
    // strh r3, [r2]
    // ldrsh r3, [r0, r2]
    // add r2, #0x80
    // strh r3, [r2]
    *((u32*)(r0 + 0x7c)) = (1 << 0xc);
    *((u32*)(r0 + 0x78)) = (1 << 0xc);
    *((u32*)(r0 + 0x74)) = (1 << 0xc);
    *((u32*)(r0 + 0x70)) = 0;
    *((u32*)(r0 + 0x6c)) = 0;
    *((u32*)(r0 + 0x68)) = 0;
}



void ov71_022475F8(void) {
}



void ov71_02247610(void) {
    // mul r6, r0
    // str r0, [sp]
    // str r3, [sp, #4]
    // add r5, r4, r6
    GfGfxLoader_LoadFromNarc(r2, r3, 0, 0x39);
    // str r0, [r4, r6]
    // ldr r1, [sp, #4]
    GetNarcMemberSizeByIdPair(r7);
    // ldr r0, [r4, r6]
    DC_FlushRange(r0);
    // ldr r0, [r4, r6]
    NNS_G3dGetMdlSet();
    *((u32*)(r5 + 0x58)) = r0;
    // add r2, #8
    // add r1, r2, r1
    // add r0, r0, r1
    *((u32*)(r5 + 0x5c)) = 0;
    NNS_G3dGetTex(*((u32*)r5), *((u32*)0), r0);
    *((u32*)(r5 + 0x60)) = r0;
    GF3dRender_AllocAndLoadTexResources();
    GF3dRender_BindModelSet(*((u32*)r5), *((u32*)(r5 + 0x60)));
    NNS_G3dRenderObjInit((r5 + 4), *((u32*)(r5 + 0x5c)));
    // ldr r0, [sp, #0x20]
    *((u32*)(r5 + 0x68)) = r0;
    // ldr r0, [sp, #0x24]
    *((u32*)(r5 + 0x6c)) = r0;
    // ldr r0, [sp, #0x28]
    *((u32*)(r5 + 0x70)) = r0;
    // add r0, #0x88
    // str r1, [r0]
    // ldr r0, [sp, #0x2c]
    *((u32*)(r5 + 0x64)) = r5;
}



void ov71_022476B4(void) {
    // add r2, #0x68
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}



void ov71_022476C4(void) {
    // ldmia r3!, {r0, r1}
    // add r2, #0x68
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}



void ov71_022476D4(void) {
    // add r2, #0x80
    // ldrh r2, [r2]
    // strh r2, [r1]
    // add r2, #0x82
    // ldrh r2, [r2]
    // add r0, #0x84
    *((u16*)(r1 + 2)) = r0;
    // ldrh r0, [r0]
    *((u16*)(r1 + 4)) = r0;
}



void ov71_022476EC(void) {
    // ldrh r3, [r1]
    // add r2, #0x80
    // strh r3, [r2]
    // add r2, #0x82
    // add r0, #0x84
    // strh r3, [r2]
    // strh r1, [r0]
}



void ov71_02247704(void) {
}



void ov71_02247708(void) {
    // add r2, #0x88
    // str r1, [r2]
    NNSi_G3dModifyPolygonAttrMask(*((u32*)(r0 + 0x5c)), 0, (0x1f << 0x10));
    NNSi_G3dModifyPolygonAttrMask(1, (0x1f << 0x10));
}



void ov71_02247730(void) {
}



void ov71_02247738(void) {
    // push {r3, r4, lr}
    // sub sp, #0x4c
    // add r4, r0, #0
    // add r0, sp, #0x28
    // bl MTX_Identity33_
    // add r0, r4, #0
    // add r0, #0x80
    // ldrh r0, [r0]
    // ldr r3, _022477E8 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #4
    // bl MTX_RotX33_
    // add r1, sp, #0x28
    // add r0, sp, #4
    // add r2, r1, #0
    // bl MTX_Concat33
    // add r0, r4, #0
    // add r0, #0x82
    // ldrh r0, [r0]
    // ldr r3, _022477E8 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #4
    // bl MTX_RotY33_
    // add r1, sp, #0x28
    // add r0, sp, #4
    // add r2, r1, #0
    // bl MTX_Concat33
    // add r0, r4, #0
    // add r0, #0x84
    // ldrh r0, [r0]
    // ldr r3, _022477E8 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #4
    // bl MTX_RotZ33_
    // add r1, sp, #0x28
    // add r0, sp, #4
    // add r2, r1, #0
    // bl MTX_Concat33
    // mov r1, #0
    // mov r0, #0x11
    // add r2, r1, #0
    // bl NNS_G3dGeBufferOP_N
    // bl Camera_PushLookAtToNNSGlb
    // add r1, r4, #0
    // ldr r0, [r4, #0x5c]
    // add r4, #0x74
    // add r1, #0x68
    // add r2, sp, #0x28
    // add r3, r4, #0
    // bl sub_0201F990
    // add r4, r0, #0
    // mov r2, #1
    // mov r0, #0x12
    // add r1, sp, #0
    // str r2, [sp]
    // bl NNS_G3dGeBufferOP_N
    // add r0, r4, #0
    // add sp, #0x4c
    // pop {r3, r4, pc}
    // _022477E8: .word FX_SinCosTable_
    // TODO: decompile
}



void ov71_022477EC(void) {
}



void ov71_0224780C(void) {
    // ldr r3, _02247818 ; =Camera_SetAnglePos
    // add r2, r0, #0
    // add r0, r1, #0
    // ldr r1, [r2]
    // bx r3
    // nop
    // _02247818: .word Camera_SetAnglePos
    // TODO: decompile
}



void ov71_0224781C(void) {
    // ldr r3, _02247828 ; =Camera_AdjustAngleTarget
    // add r2, r0, #0
    // add r0, r1, #0
    // ldr r1, [r2]
    // bx r3
    // nop
    // _02247828: .word Camera_AdjustAngleTarget
    // TODO: decompile
}



void ov71_0224782C(void) {
    // ldr r3, _02247838 ; =Camera_ApplyPerspectiveType
    // add r2, r0, #0
    // add r0, r1, #0
    // ldr r1, [r2]
    // bx r3
    // nop
    // _02247838: .word Camera_ApplyPerspectiveType
    // TODO: decompile
}



void ov71_0224783C(void) {
    // ldr r3, _02247848 ; =Camera_SetPerspectiveAngle
    // add r2, r0, #0
    // add r0, r1, #0
    // ldr r1, [r2]
    // bx r3
    // nop
    // _02247848: .word Camera_SetPerspectiveAngle
    // TODO: decompile
}



void ov71_0224784C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // mov r0, #0x39
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl Camera_New
    // str r0, [r5]
    // str r4, [r5, #4]
    // str r6, [r5, #8]
    // mov r1, #0x4b
    // add r2, r5, #0
    // str r7, [r5, #0xc]
    // mov r0, #0
    // strh r0, [r5, #0x10]
    // strh r0, [r5, #0x12]
    // strh r0, [r5, #0x14]
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // ldr r3, _022478B4 ; =0x00000FA4
    // str r0, [sp, #8]
    // add r0, r5, #4
    // lsl r1, r1, #0xe
    // add r2, #0x10
    // bl Camera_Init_FromTargetDistanceAndAngle
    // mov r1, #0
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x10]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x14]
    // ldr r1, [r5]
    // add r0, sp, #0xc
    // bl Camera_SetLookAtCamUp
    // ldr r0, [r5]
    // bl Camera_SetStaticPtr
    // mov r1, #0xfa
    // ldr r2, [r5]
    // mov r0, #0
    // lsl r1, r1, #0xe
    // bl Camera_SetPerspectiveClippingPlane
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022478B4: .word 0x00000FA4
    // TODO: decompile
}



void ov71_022478B8(void) {
}



void ov71_022478C8(void) {
    Heap_Alloc(0x39, 0x84);
    // str r5, [r4]
    *((u32*)(r0 + 4)) = 0;
    ov71_02247384(r5);
    *((u32*)(r4 + 0x54)) = r0;
    PokepicManager_Create(0x39);
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 0x10)) = 0;
    String_New((0x4b << 2), 0x39);
    *((u32*)(r4 + 0x68)) = r0;
    String_New((0x4b << 2), 0x39);
    *((u32*)(r4 + 0x6c)) = r0;
    *((u32*)(r4 + 0x78)) = 0;
    *((u32*)(r4 + 0x7c)) = 0;
    NARC_New(0xb4, 0x39);
    // add r1, #0x80
    // str r0, [r1]
}



void ov71_02247924(void) {
    ov71_02248120();
    ov71_022481EC(r4);
    ov71_0224809C(r4);
    String_Delete(*((u32*)(r4 + 0x68)));
    String_Delete(*((u32*)(r4 + 0x6c)));
    ov71_02247498(*((u32*)(r4 + 0x70)));
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x54)), 1);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x54)), 2);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x54)), 6);
    // add r0, #0x58
    RemoveWindow(r4);
    // add r0, #0x80
    NARC_Delete(*((u32*)r4));
    Pokepic_Delete(*((u32*)(r4 + 0x10)));
    PokepicManager_Delete(*((u32*)(r4 + 0xc)));
    Heap_Free(r4);
}



void ov71_02247990(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r2, [r4]
    // add r5, r0, #0
    // cmp r2, #4
    // bhs _022479BE
    // lsl r3, r2, #2
    // ldr r2, _022479C4 ; =ov71_0224BC64
    // add r1, r5, #4
    // ldr r2, [r2, r3]
    // blx r2
    // cmp r0, #0
    // beq _022479B4
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // str r0, [r5, #4]
    // add r0, r5, #0
    // bl ov71_022479C8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _022479C4: .word ov71_0224BC64
    // TODO: decompile
}



void ov71_022479C8(void) {
    G3X_Reset();
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    NNS_G3dGeFlushBuffer();
    NNS_G2dSetupSoftwareSpriteCamera();
    PokepicManager_HandleLoadImgAndOrPltt(*((u32*)(r4 + 0xc)));
    PokepicManager_DrawAll(*((u32*)(r4 + 0xc)));
    // str r2, [sp]
    // add r1, sp, #0
    NNS_G3dGeBufferOP_N(0x12, 1);
    ov71_022474CC(*((u32*)(r4 + 0x70)));
    RequestSwap3DBuffers(0, 0);
}



void ov71_02247A10(void) {
    // push {r3, r4, lr}
    // sub sp, #0x1c
    // add r4, r0, #0
    // ldr r0, _02247C0C ; =ov71_0224BCBC
    // bl GfGfx_SetBanks
    // ldr r2, _02247C10 ; =0x04000304
    // ldr r0, _02247C14 ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // and r0, r1
    // strh r0, [r2]
    // ldr r0, _02247C18 ; =ov71_0224BC74
    // bl SetBothScreensModesAndDisable
    // ldr r0, [r4, #0x54]
    // ldr r2, _02247C1C ; =ov71_0224BC84
    // mov r1, #1
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x54]
    // ldr r2, _02247C20 ; =ov71_0224BCA0
    // mov r1, #2
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x54]
    // ldr r2, _02247C20 ; =ov71_0224BCA0
    // mov r1, #6
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r2, _02247C24 ; =0x04000008
    // mov r0, #3
    // ldrh r3, [r2]
    // mov r1, #1
    // bic r3, r0
    // add r0, r3, #0
    // orr r0, r1
    // strh r0, [r2]
    // mov r2, #0
    // str r2, [sp]
    // ldr r0, [r4, #0x54]
    // add r3, r1, #0
    // bl BG_FillCharDataRange
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r0, [r4, #0x54]
    // mov r1, #1
    // add r3, r2, #0
    // bl FillBgTilemapRect
    // ldr r0, [r4]
    // bl ov71_022473D0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x39
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x54]
    // mov r1, #1
    // mov r2, #0x6d
    // mov r3, #2
    // bl LoadUserFrameGfx2
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // add r1, r4, #0
    // str r0, [sp, #8]
    // mov r2, #1
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // ldr r0, [r4, #0x54]
    // add r1, #0x58
    // mov r3, #2
    // bl AddWindowParameterized
    // add r0, r4, #0
    // add r0, #0x58
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r3, #0x20
    // str r3, [sp]
    // mov r0, #0x39
    // str r0, [sp, #4]
    // mov r0, #0x10
    // mov r1, #8
    // mov r2, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x54]
    // mov r0, #0x59
    // mov r1, #0x16
    // mov r3, #2
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x54]
    // mov r0, #0x59
    // mov r1, #0x15
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x39
    // mov r2, #0
    // str r0, [sp, #4]
    // mov r0, #0x59
    // mov r1, #0x17
    // add r3, r2, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x54]
    // mov r0, #0x59
    // mov r1, #0x16
    // mov r3, #6
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x54]
    // mov r0, #0x59
    // mov r1, #0x15
    // mov r3, #6
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x39
    // str r0, [sp, #4]
    // mov r0, #0x59
    // mov r1, #0x17
    // mov r2, #4
    // mov r3, #0
    // bl GfGfxLoader_GXLoadPal
    // ldr r0, [r4, #0x54]
    // mov r1, #1
    // bl BgCommitTilemapBufferToVram
    // add r0, r4, #0
    // bl ov71_02247ED0
    // mov r1, #0
    // mov r0, #1
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov71_0224744C
    // str r0, [r4, #0x70]
    // add r0, r4, #0
    // bl ov71_02247F9C
    // str r0, [r4, #0x10]
    // mov r1, #0
    // mov r0, #0x6a
    // str r1, [sp]
    // lsl r0, r0, #0xa
    // str r0, [sp, #4]
    // ldr r0, _02247C28 ; =0x00073800
    // mov r2, #0x59
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, [r4, #0x70]
    // mov r3, #0x1b
    // bl ov71_02247610
    // ldr r2, _02247C2C ; =ov71_0224BC5C
    // str r0, [r4, #0x74]
    // ldrh r3, [r2]
    // add r0, sp, #0x14
    // add r1, sp, #0x14
    // strh r3, [r0]
    // ldrh r3, [r2, #2]
    // ldrh r2, [r2, #4]
    // strh r3, [r0, #2]
    // strh r2, [r0, #4]
    // ldr r0, [r4, #0x74]
    // bl ov71_022476EC
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r4, #0
    // bl ov71_02247FF8
    // ldr r0, _02247C30 ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // bl sub_0203A880
    // mov r0, #1
    // mov r1, #0x38
    // bl sub_0203A948
    // mov r0, #0x10
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // mov r0, #1
    // add sp, #0x1c
    // pop {r3, r4, pc}
    // _02247C0C: .word ov71_0224BCBC
    // _02247C10: .word 0x04000304
    // _02247C14: .word 0xFFFF7FFF
    // _02247C18: .word ov71_0224BC74
    // _02247C1C: .word ov71_0224BC84
    // _02247C20: .word ov71_0224BCA0
    // _02247C24: .word 0x04000008
    // _02247C28: .word 0x00073800
    // _02247C2C: .word ov71_0224BC5C
    // _02247C30: .word 0x04000050
    // TODO: decompile
}



void ov71_02247C34(void) {
    IsPaletteFadeFinished(*((u32*)r1));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x3c)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x3c)), 1);
}



void ov71_02247C60(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02247C7A: ; jump table
    *((u32*)(r0 + 8)) = 0;
    // str r0, [r5]
    *((u32*)(r0 + 8)) = (*((u32*)(r0 + 8)) + 1);
    ov71_0224738C(*((u32*)r0));
    // str r0, [sp, #0xc]
    ov71_02247388(*((u32*)r4));
    ov71_022473DC(*((u32*)r4));
    // ldr r0, [sp, #0xc]
    ReadMsgDataIntoString(4, *((u32*)(r4 + 0x68)));
    StringExpandPlaceholders(r7, *((u32*)(r4 + 0x6c)), *((u32*)(r4 + 0x68)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0x58
    AddTextPrinterParameterized(r4, 1, *((u32*)(r4 + 0x6c)), 0);
    // add r0, #0x58
    sub_0200E948(r4, 0x6d, 2);
    // add r0, #0x58
    CopyWindowToVram(r4);
    *((u32*)(r4 + 8)) = 0;
    // str r6, [r5]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov71_0224738C(*((u32*)r4));
    ov71_02247388(*((u32*)r4));
    ReadMsgDataIntoString(r6, 1, *((u32*)(r4 + 0x68)));
    StringExpandPlaceholders(r7, *((u32*)(r4 + 0x6c)), *((u32*)(r4 + 0x68)));
    ov71_02247390(*((u32*)r4));
    GetBoxMonData(0x4c, 0);
    Pokepic_StartAnim(*((u32*)(r4 + 0x10)), 1);
    ov71_022473A8(*((u32*)r4));
    // add r0, #0x80
    // add r1, sp, #0x10
    sub_020729A4(*((u32*)r4), r0, 1);
    ov71_022473A8(*((u32*)r4));
    ov71_022473B0(*((u32*)r4));
    // add r1, sp, #0x10
    // ldrb r1, [r1]
    sub_020062E0(r6, ((r0 << 0x18) >> 0x18));
    // add r0, #0x58
    FillWindowPixelBuffer(r4, 0xf);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0x58
    AddTextPrinterParameterized(r4, 1, *((u32*)(r4 + 0x6c)), 0);
    // add r0, #0x58
    CopyWindowPixelsToVram_TextMode(r4);
    *((u32*)(r4 + 8)) = 0;
    // str r0, [r5]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x58
    ClearFrameAndWindow2(r4, 0);
    *((u32*)(r4 + 8)) = 0;
    // str r0, [r5]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
}



void ov71_02247DEC(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldr r1, [r4]
    // add r5, r0, #0
    // cmp r1, #4
    // bhi _02247EC6
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02247E06: ; jump table
    // ldr r0, _02247ECC ; =0x000006A7
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #0x10
    // mov r3, #0xc
    // bl ov71_022480C0
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02247EC6
    // bl ov71_02248110
    // cmp r0, #0
    // beq _02247EC6
    // ldr r0, [r5, #0x10]
    // bl Pokepic_Delete
    // ldr r0, [r5, #0x40]
    // mov r1, #0
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r5, #0x40]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02247EC6
    // ldr r0, [r5, #0x40]
    // bl Sprite_IsAnimated
    // cmp r0, #0
    // bne _02247EC6
    // ldr r0, [r5, #0x74]
    // mov r1, #1
    // bl ov71_02247704
    // mov r1, #0x10
    // add r0, r5, #0
    // mov r2, #0
    // add r3, r1, #0
    // bl ov71_022480C0
    // add r0, r5, #0
    // bl ov71_0224817C
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02247EC6
    // bl ov71_022481D8
    // cmp r0, #2
    // bge _02247E8E
    // add r0, r5, #0
    // bl ov71_022481C8
    // cmp r0, #1
    // bne _02247EC6
    // mov r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02247EC6
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _02247EC6
    // add r0, r5, #0
    // bl ov71_022481C8
    // cmp r0, #0
    // beq _02247EC6
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _02247ECC: .word 0x000006A7
    // TODO: decompile
}



void ov71_02247ED0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // bl NNS_G3dInit
    // bl G3X_InitMtxStack
    // ldr r0, _02247F78 ; =0x04000060
    // ldr r2, _02247F7C ; =0xFFFFCFFD
    // ldrh r1, [r0]
    // and r1, r2
    // strh r1, [r0]
    // ldrh r3, [r0]
    // add r1, r2, #2
    // and r3, r1
    // mov r1, #0x10
    // orr r1, r3
    // strh r1, [r0]
    // ldrh r3, [r0]
    // ldr r1, _02247F80 ; =0x0000CFFB
    // and r1, r3
    // strh r1, [r0]
    // add r1, r2, #2
    // ldrh r3, [r0]
    // lsr r2, r2, #0x11
    // and r3, r1
    // mov r1, #8
    // orr r1, r3
    // strh r1, [r0]
    // mov r0, #0
    // add r1, r0, #0
    // mov r3, #0x3f
    // str r0, [sp]
    // bl G3X_SetClearColor
    // ldr r1, _02247F84 ; =0x04000540
    // mov r0, #2
    // str r0, [r1]
    // ldr r0, _02247F88 ; =0xBFFF0000
    // str r0, [r1, #0x40]
    // mov r0, #1
    // add r1, r0, #0
    // bl GF_3DVramMan_InitFrameTexVramManager
    // mov r0, #1
    // lsl r0, r0, #0xe
    // mov r1, #1
    // bl GF_3DVramMan_InitFramePlttVramManager
    // ldr r3, _02247F8C ; =NNS_GfdDefaultFuncAllocTexVram
    // mov r0, #1
    // mov r1, #0
    // ldr r3, [r3]
    // lsl r0, r0, #0xe
    // add r2, r1, #0
    // blx r3
    // ldr r3, _02247F90 ; =NNS_GfdDefaultFuncAllocPlttVram
    // add r4, r0, #0
    // ldr r3, [r3]
    // mov r0, #0x80
    // mov r1, #0
    // mov r2, #1
    // blx r3
    // ldr r2, _02247F94 ; =0x7FFF0000
    // add r6, r0, #0
    // and r2, r4
    // lsl r1, r4, #0x10
    // lsr r2, r2, #0x10
    // ldr r0, [r5, #0xc]
    // lsr r1, r1, #0xd
    // lsl r2, r2, #4
    // bl PokepicManager_SetCharBaseAddrAndSize
    // ldr r2, _02247F98 ; =0xFFFF0000
    // lsl r1, r6, #0x10
    // and r2, r6
    // lsr r2, r2, #0x10
    // ldr r0, [r5, #0xc]
    // lsr r1, r1, #0xd
    // lsl r2, r2, #3
    // bl PokepicManager_SetPlttBaseAddrAndSize
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _02247F78: .word 0x04000060
    // _02247F7C: .word 0xFFFFCFFD
    // _02247F80: .word 0x0000CFFB
    // _02247F84: .word 0x04000540
    // _02247F88: .word 0xBFFF0000
    // _02247F8C: .word NNS_GfdDefaultFuncAllocTexVram
    // _02247F90: .word NNS_GfdDefaultFuncAllocPlttVram
    // _02247F94: .word 0x7FFF0000
    // _02247F98: .word 0xFFFF0000
    // TODO: decompile
}



void ov71_02247F9C(void) {
    ov71_02247390(*((u32*)r0));
    // add r0, sp, #0x10
    GetBoxmonSpriteCharAndPlttNarcIds(r0, 2, 0);
    ov71_022473A8(*((u32*)r5));
    // add r0, #0x80
    // add r1, #0x14
    NARC_ReadPokepicAnimScript(*((u32*)r5), r5, r0, 1);
    sub_02070854(r4, 2, 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x14
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, #0x50
    // add r1, sp, #0x10
    PokepicManager_CreatePokepic(*((u32*)(r5 + 0xc)), 0, 0x80, r0);
}



void ov71_02247FF8(void) {
    // add r0, #0x44
    ov71_022472C4(0x59, 7, 8);
    // add r0, sp, #0x5c
    NNS_G2dInitImagePaletteProxy();
    // add r0, sp, #0x38
    NNS_G2dInitImageProxy();
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x38
    // str r0, [sp, #0x10]
    GfGfxLoader_LoadImageMapping(0x59, 9, 1, 0);
    // str r0, [sp]
    // add r0, sp, #0x5c
    // str r0, [sp, #4]
    GfGfxLoader_PartiallyLoadPalette(0x59, 0xa, 1, 0);
    // str r0, [sp]
    // add r0, sp, #0x14
    // add r1, #0x44
    // add r2, sp, #0x38
    // add r3, sp, #0x5c
    ov71_02247320(2, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x14
    ov71_02247340(*((u32*)r4), 0x80, 0x64);
    *((u32*)(r4 + 0x3c)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x14
    ov71_02247340(*((u32*)r4), 0x80, 0x5a);
    *((u32*)(r4 + 0x40)) = r0;
    Sprite_SetPriority(1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x3c)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x40)), 0);
}



void ov71_0224809C(void) {
    Sprite_Delete(*((u32*)(r0 + 0x3c)));
    // add r6, #0x44
    ov71_022472FC(r6);
}



void ov71_022480C0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #0x39
    // mov r1, #0x14
    // str r2, [sp]
    // add r7, r3, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // beq _02248106
    // str r5, [r4]
    // lsl r0, r6, #0xc
    // str r0, [r4, #4]
    // ldr r0, [sp]
    // lsl r1, r0, #0xc
    // str r1, [r4, #8]
    // ldr r0, [r4, #4]
    // sub r0, r1, r0
    // add r1, r7, #0
    // bl _s32_div_f
    // str r0, [r4, #0xc]
    // ldr r0, _02248108 ; =ov71_02248140
    // str r7, [r4, #0x10]
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnVBlankQueue
    // str r0, [r5, #0x78]
    // ldr r0, _0224810C ; =0x04000050
    // mov r1, #1
    // add r2, r6, #0
    // bl G2x_SetBlendBrightness_
    // pop {r3, r4, r5, r6, r7, pc}
    // _02248108: .word ov71_02248140
    // _0224810C: .word 0x04000050
    // TODO: decompile
}



void ov71_02248110(void) {
    // ldr r0, [r0, #0x78]
    // cmp r0, #0
    // bne _0224811A
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov71_02248120(void) {
    SysTask_GetData(*((u32*)(r0 + 0x78)));
    ov71_02247424();
    SysTask_Destroy(*((u32*)(r4 + 0x78)));
    *((u32*)(r4 + 0x78)) = 0;
}



void ov71_02248140(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #0x10]
    // sub r0, r0, #1
    // str r0, [r4, #0x10]
    // cmp r0, #0
    // ble _02248162
    // ldr r1, [r4, #4]
    // ldr r0, [r4, #0xc]
    // add r2, r1, r0
    // str r2, [r4, #4]
    // ldr r0, _02248178 ; =0x04000050
    // mov r1, #1
    // asr r2, r2, #0xc
    // bl G2x_SetBlendBrightness_
    // pop {r4, pc}
    // ldr r2, [r4, #8]
    // ldr r0, _02248178 ; =0x04000050
    // mov r1, #1
    // asr r2, r2, #0xc
    // bl G2x_SetBlendBrightness_
    // ldr r0, [r4]
    // bl ov71_02248120
    // pop {r4, pc}
    // nop
    // _02248178: .word 0x04000050
    // TODO: decompile
}



void ov71_0224817C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x39
    // mov r1, #0x30
    // bl Heap_Alloc
    // add r4, r0, #0
    // beq _022481BC
    // str r5, [r4]
    // ldr r0, [r5, #0x74]
    // add r1, r4, #0
    // str r0, [r4, #4]
    // add r1, #8
    // bl ov71_022476B4
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // add r1, #0x14
    // bl ov71_022476D4
    // ldr r0, _022481C0 ; =0x00002F60
    // mov r2, #0
    // str r0, [r4, #0x1c]
    // str r2, [r4, #0x20]
    // strh r2, [r4, #0x2c]
    // str r2, [r4, #0x24]
    // ldr r0, _022481C4 ; =ov71_0224820C
    // add r1, r4, #0
    // str r2, [r4, #0x28]
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5, #0x7c]
    // pop {r3, r4, r5, pc}
    // nop
    // _022481C0: .word 0x00002F60
    // _022481C4: .word ov71_0224820C
    // TODO: decompile
}



void ov71_022481C8(void) {
    // ldr r0, [r0, #0x7c]
    // cmp r0, #0
    // bne _022481D2
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov71_022481D8(void) {
}



void ov71_022481EC(void) {
    SysTask_GetData(*((u32*)(r0 + 0x7c)));
    Heap_Free();
    SysTask_Destroy(*((u32*)(r4 + 0x7c)));
    *((u32*)(r4 + 0x7c)) = 0;
}



void ov71_0224820C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #0x24]
    // cmp r0, #0
    // bne _02248280
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x1c]
    // add r0, r1, r0
    // str r0, [r4, #0xc]
    // ldr r1, [r4, #0x1c]
    // cmp r1, #0
    // blt _0224822E
    // mov r0, #0x1e
    // lsl r0, r0, #6
    // sub r0, r1, r0
    // str r0, [r4, #0x1c]
    // b _02248280
    // mov r0, #0x1e
    // lsl r0, r0, #6
    // sub r0, r1, r0
    // str r0, [r4, #0x1c]
    // ldr r1, [r4, #0xc]
    // ldr r0, _022482E4 ; =0xFFFFC000
    // cmp r1, r0
    // bgt _02248280
    // str r0, [r4, #0xc]
    // ldr r1, [r4, #0x1c]
    // mov r0, #0x2c
    // mul r0, r1
    // mov r1, #0x64
    // bl _s32_div_f
    // neg r1, r0
    // mov r0, #0xfa
    // lsl r0, r0, #4
    // str r1, [r4, #0x1c]
    // cmp r1, r0
    // bge _0224825C
    // mov r0, #1
    // str r0, [r4, #0x24]
    // ldr r0, _022482E8 ; =0x000005E6
    // bl PlaySE
    // ldr r0, [r4, #0x20]
    // add r0, r0, #1
    // str r0, [r4, #0x20]
    // cmp r0, #1
    // beq _02248272
    // cmp r0, #3
    // beq _02248278
    // b _02248280
    // mov r0, #0xb0
    // strh r0, [r4, #0x2c]
    // b _02248280
    // mov r0, #0x2c
    // ldrsh r0, [r4, r0]
    // add r0, #0x50
    // strh r0, [r4, #0x2c]
    // mov r0, #0x14
    // mov r2, #0x2c
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r4, r2]
    // add r1, r4, #0
    // add r1, #0x14
    // add r0, r3, r0
    // strh r0, [r4, #0x14]
    // mov r0, #0x18
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r4, r2]
    // sub r0, r3, r0
    // strh r0, [r4, #0x18]
    // ldr r0, [r4, #4]
    // bl ov71_022476EC
    // mov r2, #0x2c
    // ldrsh r3, [r4, r2]
    // ldr r5, [r4, #8]
    // add r1, r4, #0
    // lsl r0, r3, #2
    // add r0, r3, r0
    // add r0, r5, r0
    // str r0, [r4, #8]
    // ldrsh r2, [r4, r2]
    // ldr r3, [r4, #0x10]
    // add r1, #8
    // lsl r0, r2, #2
    // add r0, r2, r0
    // add r0, r3, r0
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #4]
    // bl ov71_022476C4
    // ldr r0, [r4, #0x24]
    // cmp r0, #0
    // beq _022482E2
    // mov r0, #0x2c
    // ldrsh r0, [r4, r0]
    // sub r0, #0xe
    // strh r0, [r4, #0x2c]
    // ldr r0, [r4, #0x28]
    // add r0, r0, #1
    // str r0, [r4, #0x28]
    // cmp r0, #0x1e
    // ble _022482E2
    // ldr r0, [r4]
    // bl ov71_022481EC
    // pop {r3, r4, r5, pc}
    // _022482E4: .word 0xFFFFC000
    // _022482E8: .word 0x000005E6
    // TODO: decompile
}



void ov71_022482EC(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x5b
    // add r5, r0, #0
    // mov r0, #0x39
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // add r4, r0, #0
    // beq _0224834E
    // str r5, [r4]
    // mov r0, #0
    // str r0, [r4, #4]
    // add r0, r5, #0
    // bl ov71_02247384
    // add r1, r4, #0
    // add r1, #0xc0
    // str r0, [r1]
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xd4
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xcc
    // str r1, [r0]
    // mov r0, #0x16
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // add r0, r0, #4
    // str r1, [r4, r0]
    // bl MTRandom
    // add r1, r4, #0
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, r4, #0
    // mov r2, #0
    // add r0, #0xd0
    // str r2, [r0]
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // str r2, [r4, r0]
    // ldr r0, _02248354 ; =ov71_02248B60
    // add r1, r4, #0
    // bl SysTask_CreateOnVWaitQueue
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02248354: .word ov71_02248B60
    // TODO: decompile
}



void ov71_02248358(void) {
    OS_DisableInterrupts();
    ov71_0224889C(r5);
    ov71_022489F8(r5);
    ov71_02248B24(r5);
    // ldr r0, [r5, r0]
    SysTask_Destroy((0x16 << 4));
    // ldr r0, [r5, r0]
    ov71_02248E04((0x59 << 2));
    // add r0, #0xbc
    SetMTRNGSeed(*((u32*)r5));
    Heap_Free(r5);
    OS_RestoreInterrupts(r4);
}



void ov71_022483AC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r2, [r4]
    // add r5, r0, #0
    // cmp r2, #4
    // bhs _022483DA
    // lsl r3, r2, #2
    // ldr r2, _022483E0 ; =ov71_0224BCFC
    // add r1, r5, #4
    // ldr r2, [r2, r3]
    // blx r2
    // cmp r0, #0
    // beq _022483D0
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // str r0, [r5, #4]
    // add r0, r5, #0
    // bl ov71_022483E4
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _022483E0: .word ov71_0224BCFC
    // TODO: decompile
}



void ov71_022483E4(void) {
    // add r0, #0xd4
    G3X_Reset(*((u32*)r0));
    // add r4, #0xd4
    ov71_022474CC(*((u32*)r4));
    RequestSwap3DBuffers(0, 0);
}



void ov71_02248408(void) {
    ov71_02248604();
    ov71_022488E4(r4);
    ov71_02248A08(r4);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
}



void ov71_0224843C(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r1, [r4]
    // cmp r1, #0
    // beq _0224844C
    // cmp r1, #1
    // beq _02248462
    // b _0224847A
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0224847A
    // ldr r0, _02248480 ; =ov71_0224C0C4
    // mov r1, #0
    // str r1, [r0]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224847A
    // ldr r1, _02248480 ; =ov71_0224C0C4
    // ldr r2, [r1]
    // cmp r2, #0x1e
    // bge _0224846E
    // add r2, r2, #1
    // str r2, [r1]
    // add r0, #0xd0
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0224847A
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _02248480: .word ov71_0224C0C4
    // TODO: decompile
}



void ov71_02248484(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224849C: ; jump table
    *((u32*)(r0 + 8)) = 0;
    // str r0, [r5]
    *((u32*)(r0 + 8)) = (*((u32*)(r0 + 8)) + 1);
    // add r0, #0xd8
    ov71_02248E30(*((u32*)r0), 0, 0x1f, 0x18);
    ov71_02248EB4(r4);
    // str r0, [r4, r1]
    // add r0, #0xd8
    ov71_02247708(*((u32*)r4), 0);
    // add r4, #0xd8
    ov71_02247704(*((u32*)r4), 1);
    // str r0, [r5]
    // ldr r0, [r4, r0]
    ov71_02249260((0x16 << 4));
    // str r0, [r5]
    // ldr r0, [r4, r0]
    ov71_02249254((0x16 << 4));
    // str r0, [r5]
    ov71_02248B54((*((u32*)r5) + 1));
}



void ov71_02248530(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // ldr r1, [r5]
    // add r4, r0, #0
    // cmp r1, #4
    // bhi _022485F4
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224854A: ; jump table
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov71_0224926C
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _022485F4
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // cmp r0, #2
    // ble _022485F4
    // mov r0, #0
    // str r0, [r4, #8]
    // add r4, #0xc4
    // ldr r0, [r4]
    // bl ov71_02246D40
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _022485F4
    // add r1, r4, #0
    // add r1, #0xc8
    // ldr r1, [r1]
    // cmp r1, #0
    // bne _022485F4
    // mov r1, #0x59
    // lsl r1, r1, #2
    // add r1, r4, r1
    // bl ov71_02248D0C
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _022485F4
    // ldr r0, [r4, #8]
    // cmp r0, #0x28
    // bge _022485B8
    // add r0, r0, #1
    // str r0, [r4, #8]
    // cmp r0, #0x28
    // bne _022485B8
    // ldr r0, _022485FC ; =0x000006AF
    // bl PlaySE
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov71_02249254
    // cmp r0, #0
    // beq _022485F4
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0
    // ldr r3, _02248600 ; =0x00007FFF
    // add r1, r0, #0
    // add r2, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _022485F4
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _022485F4
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _022485FC: .word 0x000006AF
    // _02248600: .word 0x00007FFF
    // TODO: decompile
}



void ov71_02248604(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r0, _02248880 ; =ov71_0224BD54
    // bl GfGfx_SetBanks
    // ldr r2, _02248884 ; =0x04000304
    // ldr r0, _02248888 ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // and r0, r1
    // strh r0, [r2]
    // ldr r0, _0224888C ; =ov71_0224BCEC
    // bl SetBothScreensModesAndDisable
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // ldr r2, _02248890 ; =ov71_0224BD1C
    // mov r1, #2
    // mov r3, #1
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // ldr r2, _02248890 ; =ov71_0224BD1C
    // mov r1, #6
    // mov r3, #1
    // bl InitBgFromTemplate
    // bl OS_DisableInterrupts
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // ldr r2, _02248894 ; =ov71_0224BD38
    // mov r1, #3
    // mov r3, #2
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // ldr r2, _02248894 ; =ov71_0224BD38
    // mov r1, #7
    // mov r3, #2
    // bl InitBgFromTemplate
    // add r0, r5, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // add r2, r4, #0
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    // mov r1, #2
    // ldr r2, [r2]
    // mov r0, #0x59
    // add r3, r1, #0
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // add r2, r4, #0
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    // ldr r2, [r2]
    // mov r0, #0x59
    // mov r1, #2
    // mov r3, #6
    // bl GfGfxLoader_LoadCharData
    // mov r1, #0
    // str r1, [sp]
    // add r2, r4, #0
    // str r1, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    // ldr r2, [r2]
    // mov r0, #0x59
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnData
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // add r2, r4, #0
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    // ldr r2, [r2]
    // mov r0, #0x59
    // mov r3, #6
    // bl GfGfxLoader_LoadScrnData
    // ldr r0, [r4]
    // bl ov71_022473A0
    // add r5, r0, #0
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x39
    // mov r2, #0
    // str r0, [sp, #4]
    // mov r0, #0x59
    // mov r1, #3
    // add r3, r2, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x39
    // str r0, [sp, #4]
    // mov r0, #0x59
    // mov r1, #3
    // mov r2, #4
    // mov r3, #0
    // bl GfGfxLoader_GXLoadPal
    // ldr r0, _02248898 ; =ov71_0224BCE4
    // lsl r1, r5, #1
    // ldrh r5, [r0, r1]
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x40
    // str r0, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0x59
    // mov r1, #3
    // mov r2, #0
    // add r3, r5, #0
    // bl GfGfxLoader_GXLoadPalWithSrcOffset
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x40
    // str r0, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0x59
    // mov r1, #3
    // mov r2, #4
    // add r3, r5, #0
    // bl GfGfxLoader_GXLoadPalWithSrcOffset
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // add r2, r4, #0
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    // ldr r2, [r2]
    // mov r0, #0x59
    // mov r1, #5
    // mov r3, #3
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // add r2, r4, #0
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    // ldr r2, [r2]
    // mov r0, #0x59
    // mov r1, #5
    // mov r3, #7
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // add r2, r4, #0
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    // ldr r2, [r2]
    // mov r0, #0x59
    // mov r1, #4
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // add r2, r4, #0
    // str r0, [sp, #0xc]
    // add r2, #0xc0
    // ldr r2, [r2]
    // mov r0, #0x59
    // mov r1, #4
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0x39
    // mov r1, #0x60
    // bl Heap_Alloc
    // add r5, r0, #0
    // beq _0224880A
    // mov r0, #0
    // add r1, r5, #0
    // mov r2, #0x60
    // bl MIi_CpuClear32
    // add r0, r5, #0
    // mov r1, #0x60
    // bl DC_FlushRange
    // bl GX_BeginLoadBGExtPltt
    // bl GXS_BeginLoadBGExtPltt
    // mov r1, #6
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // mov r2, #0x60
    // bl GX_LoadBGExtPltt
    // mov r1, #6
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // mov r2, #0x60
    // bl GXS_LoadBGExtPltt
    // bl GX_EndLoadBGExtPltt
    // bl GXS_EndLoadBGExtPltt
    // add r0, r5, #0
    // bl Heap_Free
    // add r0, r4, #0
    // add r0, #0xc0
    // mov r3, #0xff
    // ldr r0, [r0]
    // mov r1, #6
    // mov r2, #3
    // mvn r3, r3
    // bl BgSetPosTextAndCommit
    // mov r0, #7
    // mov r1, #0
    // bl ToggleBgLayer
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r4, #0
    // add r0, #0xc0
    // mov r1, #3
    // ldr r0, [r0]
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // add r0, r4, #0
    // add r0, #0xc8
    // mov r1, #1
    // bl ov71_02246C6C
    // add r1, r4, #0
    // add r1, #0xc4
    // str r0, [r1]
    // mov r0, #0x4a
    // lsl r0, r0, #2
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0xd0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0xc0
    // mov r1, #0x12
    // mov r2, #1
    // ldr r0, [r0]
    // lsl r1, r1, #6
    // lsl r2, r2, #0xc
    // mov r3, #1
    // bl ov71_02247000
    // add r4, #0xcc
    // str r0, [r4]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _02248880: .word ov71_0224BD54
    // _02248884: .word 0x04000304
    // _02248888: .word 0xFFFF7FFF
    // _0224888C: .word ov71_0224BCEC
    // _02248890: .word ov71_0224BD1C
    // _02248894: .word ov71_0224BD38
    // _02248898: .word ov71_0224BCE4
    // TODO: decompile
}



void ov71_0224889C(void) {
    // add r0, #0xc8
    // add r0, #0xc4
    ov71_02246D54(*((u32*)r0));
    // add r0, #0xc0
    FreeBgTilemapBuffer(*((u32*)r4), 2);
    // add r0, #0xc0
    FreeBgTilemapBuffer(*((u32*)r4), 6);
    // add r0, #0xc0
    FreeBgTilemapBuffer(*((u32*)r4), 3);
    // add r4, #0xc0
    FreeBgTilemapBuffer(*((u32*)r4), 7);
}



void ov71_022488E4(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // bl NNS_G3dInit
    // bl G3X_InitMtxStack
    // ldr r0, _022489C4 ; =0x04000060
    // ldr r1, _022489C8 ; =0xFFFFCFFD
    // ldrh r2, [r0]
    // and r2, r1
    // strh r2, [r0]
    // ldrh r3, [r0]
    // add r2, r1, #2
    // and r3, r2
    // mov r2, #0x10
    // orr r2, r3
    // strh r2, [r0]
    // ldrh r3, [r0]
    // ldr r2, _022489CC ; =0x0000CFFB
    // and r2, r3
    // strh r2, [r0]
    // add r2, r1, #2
    // ldrh r3, [r0]
    // add r1, r1, #2
    // and r3, r2
    // mov r2, #8
    // orr r2, r3
    // strh r2, [r0]
    // ldrh r2, [r0]
    // and r2, r1
    // mov r1, #0x20
    // orr r1, r2
    // strh r1, [r0]
    // ldr r0, _022489D0 ; =ov71_0224BD0C
    // bl G3X_SetEdgeColorTable
    // mov r1, #0
    // ldr r0, _022489D4 ; =0x000043FF
    // ldr r2, _022489D8 ; =0x00007FFF
    // mov r3, #0x3f
    // str r1, [sp]
    // bl G3X_SetClearColor
    // ldr r1, _022489DC ; =0x04000540
    // mov r0, #2
    // str r0, [r1]
    // ldr r0, _022489E0 ; =0xBFFF0000
    // str r0, [r1, #0x40]
    // mov r0, #1
    // add r1, r0, #0
    // bl GF_3DVramMan_InitFrameTexVramManager
    // mov r0, #1
    // lsl r0, r0, #0xe
    // mov r1, #1
    // bl GF_3DVramMan_InitFramePlttVramManager
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r1, _022489E4 ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // strh r2, [r1]
    // mov r1, #0
    // mov r0, #1
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov71_0224744C
    // add r1, r4, #0
    // add r1, #0xd4
    // str r0, [r1]
    // mov r1, #0
    // ldr r0, _022489E8 ; =0xFFFC8800
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, r4, #0
    // str r1, [sp, #0xc]
    // add r0, #0xd4
    // ldr r0, [r0]
    // mov r2, #0x59
    // mov r3, #0x1b
    // bl ov71_02247610
    // add r1, r4, #0
    // add r1, #0xd8
    // str r0, [r1]
    // ldr r1, _022489EC ; =0x0000EBE0
    // ldr r0, _022489F0 ; =ov71_0224C0C4
    // strh r1, [r0, #4]
    // mov r1, #0
    // strh r1, [r0, #6]
    // strh r1, [r0, #8]
    // add r0, r4, #0
    // add r0, #0xd4
    // ldr r0, [r0]
    // ldr r1, _022489F4 ; =ov71_0224C0C8
    // bl ov71_0224780C
    // add r4, #0xd8
    // mov r1, #7
    // ldr r0, [r4]
    // lsl r1, r1, #0xa
    // bl ov71_02247730
    // add sp, #0x10
    // pop {r4, pc}
    // _022489C4: .word 0x04000060
    // _022489C8: .word 0xFFFFCFFD
    // _022489CC: .word 0x0000CFFB
    // _022489D0: .word ov71_0224BD0C
    // _022489D4: .word 0x000043FF
    // _022489D8: .word 0x00007FFF
    // _022489DC: .word 0x04000540
    // _022489E0: .word 0xBFFF0000
    // _022489E4: .word 0x04000008
    // _022489E8: .word 0xFFFC8800
    // _022489EC: .word 0x0000EBE0
    // _022489F0: .word ov71_0224C0C4
    // _022489F4: .word ov71_0224C0C8
    // TODO: decompile
}



void ov71_022489F8(void) {
}



void ov71_02248A08(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x74
    // add r7, r0, #0
    // add r0, #0xc
    // mov r1, #0x59
    // mov r2, #0xb
    // mov r3, #0xc
    // bl ov71_022472C4
    // add r0, sp, #0x60
    // bl NNS_G2dInitImagePaletteProxy
    // add r0, sp, #0x3c
    // bl NNS_G2dInitImageProxy
    // mov r3, #0
    // str r3, [sp]
    // mov r2, #1
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // add r0, sp, #0x3c
    // str r0, [sp, #0x10]
    // mov r0, #0x59
    // mov r1, #0xd
    // bl GfGfxLoader_LoadImageMapping
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // add r0, sp, #0x3c
    // str r0, [sp, #0x10]
    // mov r0, #0x59
    // mov r1, #0xd
    // mov r2, #1
    // bl GfGfxLoader_LoadImageMapping
    // mov r0, #0x39
    // str r0, [sp]
    // add r0, sp, #0x60
    // str r0, [sp, #4]
    // mov r0, #0x59
    // mov r1, #0xe
    // mov r2, #1
    // mov r3, #0
    // bl GfGfxLoader_PartiallyLoadPalette
    // mov r0, #0x39
    // str r0, [sp]
    // add r0, sp, #0x60
    // str r0, [sp, #4]
    // mov r0, #0x59
    // mov r1, #0xe
    // mov r2, #2
    // mov r3, #0
    // bl GfGfxLoader_PartiallyLoadPalette
    // mov r0, #1
    // add r1, r7, #0
    // str r0, [sp]
    // add r0, sp, #0x18
    // add r1, #0xc
    // add r2, sp, #0x3c
    // add r3, sp, #0x60
    // bl ov71_02247320
    // ldr r0, _02248B20 ; =0x035947D1
    // bl SetMTRNGSeed
    // mov r0, #0
    // str r0, [sp, #0x14]
    // add r4, r7, #0
    // bl MTRandom
    // mov r1, #0xe8
    // bl _u32_div_f
    // add r6, r1, #0
    // add r6, #0xc
    // bl MTRandom
    // mov r1, #0x71
    // lsl r1, r1, #2
    // bl _u32_div_f
    // add r5, r1, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // sub r5, #0x1c
    // str r0, [sp, #4]
    // ldr r0, [r7]
    // add r1, sp, #0x18
    // add r2, r6, #0
    // add r3, r5, #0
    // bl ov71_02247340
    // str r0, [r4, #0x1c]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r5, #0x38
    // ldr r0, [r7]
    // add r1, sp, #0x18
    // add r2, r6, #0
    // add r3, r5, #0
    // bl ov71_02247340
    // str r0, [r4, #0x20]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0x20]
    // mov r1, #1
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x20]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [sp, #0x14]
    // add r4, #8
    // add r0, r0, #1
    // str r0, [sp, #0x14]
    // cmp r0, #0x14
    // blt _02248AA2
    // add sp, #0x74
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02248B20: .word 0x035947D1
    // TODO: decompile
}



void ov71_02248B24(void) {
    Sprite_Delete(*((u32*)(r0 + 0x1c)));
    Sprite_Delete(*((u32*)(r5 + 0x20)));
    // add r5, #8
    // add r6, #0xc
    ov71_022472FC(r6);
}



void ov71_02248B54(void) {
    // str r2, [r0, r1]
}



void ov71_02248B60(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x5a
    // add r4, r1, #0
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _02248BB4
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r4, #0
    // add r0, #0xc0
    // mov r3, #0xff
    // ldr r0, [r0]
    // mov r1, #2
    // mov r2, #3
    // mvn r3, r3
    // bl BgSetPosTextAndCommit
    // add r4, #0xc0
    // ldr r0, [r4]
    // mov r1, #6
    // mov r2, #3
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // mov r0, #3
    // mov r1, #0
    // bl ToggleBgLayer
    // mov r0, #7
    // mov r1, #1
    // bl ToggleBgLayer
    // ldr r2, _02248BB8 ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // nop
    // _02248BB8: .word 0x04000304
    // TODO: decompile
}



void ov71_02248BBC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // str r5, [r2, #4]
    // add r0, r2, #0
    // str r1, [r0]
    // mov r1, #0x52
    // mov r7, #0
    // lsl r1, r1, #2
    // str r7, [r0, r1]
    // add r1, r1, #4
    // str r2, [sp]
    // str r7, [r0, r1]
    // add r4, r2, #0
    // add r6, r2, #0
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r5, #0x1c]
    // bl Sprite_GetMatrixPtr
    // add r2, r6, #0
    // add r3, r0, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x58
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r7, r7, #1
    // str r0, [r2]
    // add r4, r4, #4
    // add r5, #8
    // add r6, #0xc
    // cmp r7, #0x14
    // blt _02248BD8
    // ldr r0, _02248C20 ; =ov71_02248C24
    // ldr r1, [sp]
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r1, [sp]
    // ldr r1, [r1]
    // str r0, [r1]
    // ldr r0, [sp]
    // ldr r0, [r0]
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02248C1C
    // ldr r0, [sp]
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02248C20: .word ov71_02248C24
    // TODO: decompile
}



void ov71_02248C24(void) {
    // ldr r0, [r5, r1]
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // str r0, [r5, r1]
    // ldr r0, [r5, r0]
    // add r0, r5, r0
    *((u32*)((((0x52 << 2) + 4) << 2) + 8)) = 1;
    // ldr r0, [r5, r0]
    // str r2, [r5, r0]
    // str r0, [sp, #4]
    // str r5, [sp]
    // add r7, #0x58
    // add r2, r2, r1
    // add r0, #0x5c
    *((u32*)(r1 + 0x5c)) = *((u32*)(r1 + 0x5c));
    // sub r1, r2, r1
    // str r1, [r0]
    // ldr r0, [sp]
    // add r0, r0, r4
    Sprite_SetDrawFlag(*((u32*)(*((u32*)(r1 + 4)) + 0x1c)), 1, *((u32*)r1));
    // add r0, r0, r4
    Sprite_SetDrawFlag(*((u32*)(*((u32*)(r5 + 4)) + 0x20)), 1);
    // add r0, r0, r4
    Sprite_SetMatrix(*((u32*)(*((u32*)(r5 + 4)) + 0x1c)), r7);
    // add r2, #0x58
    // add r3, sp, #8
    // ldmia r2!, {r0, r1}
    // mov ip, r3
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // mov r1, ip
    // add r0, r0, r4
    Sprite_SetMatrix(*((u32*)(*((u32*)(r5 + 4)) + 0x20)), r6);
    // ldr r0, [sp]
    // add r6, #0xc
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r4, #8
    // add r7, #0xc
    // str r0, [sp, #4]
}



void ov71_02248CF4(void) {
    SysTask_GetData();
    // str r1, [r0]
    SysTask_Destroy(r4, 0);
}



void ov71_02248D0C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // mov r1, #0x17
    // add r6, r0, #0
    // mov r0, #0x39
    // lsl r1, r1, #4
    // bl Heap_Alloc
    // add r4, r0, #0
    // beq _02248D78
    // str r6, [r4]
    // add r6, #0xc0
    // mov r0, #0x55
    // ldr r1, [r6]
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // mov r1, #2
    // bl Bg_GetYpos
    // lsl r1, r0, #0xc
    // mov r0, #0x56
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // sub r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #6
    // bl Bg_GetYpos
    // mov r1, #0x57
    // lsl r0, r0, #0xc
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r2, #0
    // add r0, r1, #4
    // str r2, [r4, r0]
    // add r0, r1, #0
    // add r0, #8
    // str r2, [r4, r0]
    // add r0, r1, #0
    // add r0, #0xc
    // str r5, [r4, r0]
    // add r1, #0x10
    // str r2, [r4, r1]
    // ldr r0, _02248D7C ; =ov71_02248D80
    // add r1, r4, #0
    // bl SysTask_CreateOnVBlankQueue
    // str r0, [r5]
    // cmp r0, #0
    // bne _02248D78
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // nop
    // _02248D7C: .word ov71_02248D80
    // TODO: decompile
}



void ov71_02248D80(void) {
    // ldr r1, [r4, r3]
    // ldr r1, [r4, r0]
    // sub r0, #0x44
    // add r1, r1, r0
    // str r1, [r4, r0]
    // ldr r1, [r4, r3]
    // ldr r0, [r4, r0]
    // sub r5, #0xc
    // add r0, r1, r0
    // str r0, [r4, r3]
    // sub r0, #0x10
    // ldr r5, [r4, r5]
    // ldr r3, [r4, r3]
    // ldr r0, [r4, r0]
    // sub r3, r5, r3
    // asr r3, r3, #0xc
    BgSetPosTextAndCommit((0x59 << 2), 2, 3, (0x59 << 2));
    // ldr r0, [r4, r5]
    // add r3, #8
    // add r5, #0x10
    // ldr r6, [r4, r3]
    // ldr r3, [r4, r5]
    // sub r3, r6, r3
    // asr r3, r3, #0xc
    BgSetPosTextAndCommit(6, 3, (0x55 << 2));
    // ldr r2, [r4, r1]
    // add r0, #8
    // ldr r0, [r4, r0]
    // add r1, #8
    // add r1, r4, r1
    ov71_02248BBC(*((u32*)r4), (0x59 << 2), (r4 + 4));
}



void ov71_02248E04(void) {
    SysTask_GetData();
    // ldr r1, [r4, r0]
    // str r2, [r1]
    // ldr r0, [r4, r0]
    ov71_02248CF4(((0x5a << 2) + 4), 0);
    Heap_Free(r4);
    SysTask_Destroy(r5);
}



void ov71_02248E30(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // add r5, r1, #0
    // mov r0, #0x39
    // mov r1, #0x14
    // add r7, r2, #0
    // add r6, r3, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // beq _02248E70
    // lsl r0, r5, #0xc
    // str r0, [r4]
    // lsl r1, r7, #0xc
    // str r1, [r4, #8]
    // ldr r0, [r4]
    // sub r0, r1, r0
    // add r1, r6, #0
    // bl _s32_div_f
    // str r0, [r4, #4]
    // ldr r0, [sp]
    // str r6, [r4, #0xc]
    // add r1, r5, #0
    // str r0, [r4, #0x10]
    // bl ov71_02247708
    // ldr r0, _02248E74 ; =ov71_02248E78
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02248E74: .word ov71_02248E78
    // TODO: decompile
}



void ov71_02248E78(void) {
    *((u32*)(r1 + 0xc)) = (*((u32*)(r1 + 0xc)) - 1);
    // add r1, r1, r0
    // str r1, [r4]
    // asr r1, r1, #0xc
    ov71_02247708(*((u32*)(r1 + 0x10)), *((u32*)r1));
    // asr r1, r1, #0xc
    ov71_02247708(*((u32*)(r4 + 0x10)), *((u32*)(r4 + 8)));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}



void ov71_02248EB4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r5, #0
    // add r4, #0xdc
    // add r0, #0xd8
    // add r1, r4, #0
    // ldr r0, [r0]
    // add r1, #8
    // bl ov71_022476B4
    // add r0, r5, #0
    // add r0, #0xd8
    // add r1, r4, #0
    // ldr r0, [r0]
    // add r1, #0x20
    // bl ov71_022476D4
    // add r3, r4, #0
    // add r3, #8
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // add r0, r5, #0
    // add r0, #0xd4
    // ldr r0, [r0]
    // str r0, [r4, #4]
    // add r0, r5, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // add r5, #0xdc
    // str r0, [r5]
    // ldr r0, [r4, #0xc]
    // str r0, [r4, #0x28]
    // ldr r1, [r4, #0xc]
    // ldr r0, _02248F84 ; =0xFFFF8000
    // sub r0, r0, r1
    // mov r1, #0x1e
    // bl _s32_div_f
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // mov r2, #1
    // mov r1, #0x1e
    // add r0, #0x80
    // str r1, [r0]
    // mov r1, #0
    // str r1, [r4, #0x38]
    // str r1, [r4, #0x3c]
    // str r1, [r4, #0x40]
    // add r0, r4, #0
    // str r1, [r4, #0x44]
    // add r0, #0x54
    // strh r1, [r0]
    // add r0, r4, #0
    // lsl r2, r2, #0xe
    // add r0, #0x56
    // strh r2, [r0]
    // add r0, r4, #0
    // add r0, #0x5a
    // strh r1, [r0]
    // str r1, [r4, #0x7c]
    // add r2, r4, #0
    // add r0, r1, #0
    // add r3, r2, #0
    // add r3, #0x5c
    // strh r0, [r3]
    // add r3, r2, #0
    // add r3, #0x5e
    // strh r0, [r3]
    // add r3, r2, #0
    // add r3, #0x60
    // strh r0, [r3]
    // add r3, r2, #0
    // add r3, #0x62
    // add r1, r1, #1
    // add r2, #8
    // strh r0, [r3]
    // cmp r1, #3
    // blt _02248F38
    // mov r1, #0xd
    // str r0, [r4, #0x78]
    // add r0, r4, #0
    // lsl r1, r1, #8
    // mov r2, #0x1e
    // bl ov71_02248F8C
    // mov r1, #0x29
    // mov r2, #5
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // lsl r2, r2, #0xe
    // mov r3, #0x1e
    // bl ov71_02248FC8
    // ldr r0, _02248F88 ; =ov71_02249184
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, pc}
    // nop
    // _02248F84: .word 0xFFFF8000
    // _02248F88: .word ov71_02249184
    // TODO: decompile
}



void ov71_02248F8C(void) {
    // ldrsh r0, [r5, r0]
    // sub r0, r4, r0
    _s32_div_f(0x56, r2);
    // add r1, #0x5a
    // strh r0, [r1]
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r1, r1, r0
    // add r0, #0x56
    // strh r1, [r0]
    // add r0, #0x56
    // strh r4, [r0]
    // add r0, #0x58
    // strh r4, [r0]
    *((u32*)(r5 + 0x74)) = r6;
}



void ov71_02248FC8(void) {
    // sub r0, r4, r0
    _s32_div_f(*((u32*)(r0 + 0x38)), r3);
    *((u32*)(r5 + 0x40)) = r0;
    // sub r0, r6, r0
    _s32_div_f(*((u32*)(r5 + 0x3c)), r7);
    *((u32*)(r5 + 0x44)) = r0;
    // add r0, r1, r0
    *((u32*)(r5 + 0x38)) = *((u32*)(r5 + 0x40));
    // add r0, r1, r0
    *((u32*)(r5 + 0x3c)) = *((u32*)(r5 + 0x44));
    *((u32*)(r5 + 0x48)) = r4;
    *((u32*)(r5 + 0x4c)) = r6;
    *((u32*)(r5 + 0x50)) = r7;
}



void ov71_02249004(void) {
    // str r0, [sp]
    // add r1, r5, r0
    // ldrsh r0, [r1, r0]
    // sub r0, r6, r0
    _s32_div_f(0x5c, r3);
    // ldr r1, [sp]
    // add r1, r5, r1
    // add r1, #0x5e
    // strh r0, [r1]
    // add r0, r5, r1
    // add r0, #0x60
    // strh r6, [r0]
    // add r0, r5, r1
    // add r0, #0x62
    // strh r7, [r0]
}



void ov71_0224903C(void) {
    *((u32*)(r0 + 0x74)) = (*((u32*)(r0 + 0x74)) - 1);
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r1, r1, r0
    // add r0, #0x56
    // strh r1, [r0]
    // ldrsh r1, [r5, r0]
    // add r0, #0x56
    // strh r1, [r0]
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r1, r1, r0
    // add r0, #0x54
    // strh r1, [r0]
    // add r0, #0x54
    // ldrh r0, [r0]
    _s32_div_f(r0, 0xb6);
    // sub r4, r4, r0
    // add r0, r1, r0
    *((u32*)(r5 + 0x38)) = *((u32*)(r5 + 0x40));
    // add r0, r1, r0
    *((u32*)(r5 + 0x3c)) = *((u32*)(r5 + 0x44));
    *((u32*)(r5 + 0x50)) = (*((u32*)(r5 + 0x50)) - 1);
    *((u32*)(r5 + 0x38)) = *((u32*)(r5 + 0x48));
    *((u32*)(r5 + 0x3c)) = *((u32*)(r5 + 0x4c));
    GF_CosDegNoWrap(((r0 << 0x10) >> 0x10), *((u32*)(r5 + 0x3c)));
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r6);
    // add r3, r0, r3
    // adc r1, r6
    // orr r1, r0
    // add r0, r2, r1
    *((u32*)(r5 + 0x14)) = (r1 << 0x14);
    GF_SinDegNoWrap(((r4 << 0x10) >> 0x10), ((2 << 0xa) >> 0xc), *((u32*)(r5 + 8)), (2 << 0xa));
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r6);
    // add r4, r0, r4
    // adc r1, r3
    // orr r1, r0
    // add r0, r2, r1
    *((u32*)(r5 + 0x1c)) = (r1 << 0x14);
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, r1, r0
    *((u16*)(r5 + 0x22)) = 0x56;
    // add r4, #0x62
    // ldrh r4, [r4]
    // add r4, #0x62
    // ldrh r4, [r4]
    // add r4, #0x62
    // strh r7, [r4]
    // add r4, #0x62
    // ldrh r4, [r4]
    // ldrsh r7, [r0, r6]
    // add r4, #0x5c
    // strh r7, [r4]
    // ldrsh r7, [r0, r1]
    // ldrsh r4, [r0, r2]
    // add r7, r7, r4
    // add r4, #0x5c
    // strh r7, [r4]
    // add r0, #8
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, r1, r0
    *((u16*)(r5 + 0x20)) = 0x5c;
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, r1, r0
    *((u16*)(r5 + 0x22)) = 0x64;
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, r1, r0
    *((u16*)(r5 + 0x24)) = 0x6c;
}



void ov71_02249184(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _022491E4
    // ldr r1, [r4, #0x28]
    // ldr r0, [r4, #0x2c]
    // add r0, r1, r0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x18]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x80
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // cmp r0, #0
    // bgt _022491E4
    // mov r1, #2
    // lsl r1, r1, #8
    // str r1, [r4, #0x30]
    // mov r0, #0
    // lsl r1, r1, #5
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // add r2, r1, #0
    // mov r3, #0x3c
    // bl ov71_02248FC8
    // ldr r2, _02249200 ; =0xFFFFF800
    // add r0, r4, #0
    // mov r1, #0
    // mov r3, #0x1e
    // bl ov71_02249004
    // mov r0, #1
    // str r0, [r4, #0x7c]
    // ldr r1, _02249204 ; =ov71_02249208
    // add r0, r5, #0
    // bl SysTask_SetFunc
    // add r0, r4, #0
    // bl ov71_0224903C
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x14
    // bl ov71_022476C4
    // ldr r0, [r4]
    // add r4, #0x20
    // add r1, r4, #0
    // bl ov71_022476EC
    // pop {r3, r4, r5, pc}
    // _02249200: .word 0xFFFFF800
    // _02249204: .word ov71_02249208
    // TODO: decompile
}



void ov71_02249208(void) {
    // add r1, r1, r0
    *((u32*)(r1 + 0x2c)) = *((u32*)(r1 + 0x2c));
    // add r0, r0, r1
    *((u32*)(r1 + 0x28)) = *((u32*)(r1 + 0x28));
    *((u32*)(r1 + 0x18)) = *((u32*)(r1 + 0x28));
    ov71_0224903C(r1, *((u32*)(r1 + 0x2c)));
    // add r1, #0x14
    ov71_022476C4(*((u32*)r4), r4);
    // add r1, #0x20
    ov71_022476EC(*((u32*)r4), r4);
    ov71_02247738(*((u32*)r4));
    ov71_02247704(*((u32*)r4), 0);
    *((u32*)(r4 + 0x78)) = 1;
}



void ov71_02249254(void) {
}



void ov71_02249260(void) {
}



void ov71_0224926C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // bl SysTask_GetData
    // add r4, r0, #0
    // mov r1, #0
    // str r1, [r4, #0x78]
    // add r0, sp, #0
    // strh r1, [r0, #4]
    // ldrh r1, [r0, #4]
    // strh r1, [r0, #2]
    // strh r1, [r0]
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl ov71_0224782C
    // ldr r0, [r4, #4]
    // add r1, sp, #0
    // bl ov71_0224780C
    // ldr r1, _022492F4 ; =0x000058CC
    // mov r0, #2
    // lsl r0, r0, #0x12
    // str r1, [r4, #0x2c]
    // sub r0, r1, r0
    // str r0, [r4, #0x28]
    // add r0, r4, #0
    // mov r1, #0
    // mov r3, #0x14
    // add r0, #0x80
    // str r3, [r0]
    // ldr r0, [r4, #0x28]
    // add r2, r1, #0
    // str r0, [r4, #0x18]
    // add r0, r4, #0
    // bl ov71_02248FC8
    // mov r2, #0x56
    // ldrsh r2, [r4, r2]
    // add r0, r4, #0
    // mov r1, #1
    // neg r2, r2
    // mov r3, #0x1e
    // bl ov71_02249004
    // mov r1, #2
    // add r2, r1, #0
    // add r0, r4, #0
    // add r2, #0xfe
    // mov r3, #0x32
    // bl ov71_02249004
    // mov r1, #2
    // ldr r0, [r4]
    // lsl r1, r1, #0xc
    // bl ov71_02247730
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov71_02247704
    // ldr r1, _022492F8 ; =ov71_022492FC
    // add r0, r5, #0
    // bl SysTask_SetFunc
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _022492F4: .word 0x000058CC
    // _022492F8: .word ov71_022492FC
    // TODO: decompile
}



void ov71_022492FC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov71_0224903C
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0224933C
    // ldr r1, [r4, #0x28]
    // ldr r0, [r4, #0x2c]
    // add r0, r1, r0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x18]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x80
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0224933C
    // ldr r1, _02249354 ; =ov71_02249358
    // add r0, r5, #0
    // bl SysTask_SetFunc
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x14
    // bl ov71_022476C4
    // ldr r0, [r4]
    // add r4, #0x20
    // add r1, r4, #0
    // bl ov71_022476EC
    // pop {r3, r4, r5, pc}
    // nop
    // _02249354: .word ov71_02249358
    // TODO: decompile
}



void ov71_02249358(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov71_0224903C
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x80
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // cmp r0, #0x6e
    // ble _0224939A
    // ldr r1, [r4, #0x28]
    // ldr r0, _022493B0 ; =0xFFFC5800
    // sub r0, r0, r1
    // mov r1, #0x35
    // bl _s32_div_f
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // mov r1, #0x35
    // add r0, #0x80
    // str r1, [r0]
    // ldr r1, _022493B4 ; =ov71_022493B8
    // add r0, r5, #0
    // bl SysTask_SetFunc
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x14
    // bl ov71_022476C4
    // ldr r0, [r4]
    // add r4, #0x20
    // add r1, r4, #0
    // bl ov71_022476EC
    // pop {r3, r4, r5, pc}
    // _022493B0: .word 0xFFFC5800
    // _022493B4: .word ov71_022493B8
    // TODO: decompile
}



void ov71_022493B8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov71_0224903C
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _022493F8
    // ldr r1, [r4, #0x28]
    // ldr r0, [r4, #0x2c]
    // add r0, r1, r0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x18]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x80
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _022493F8
    // ldr r1, _02249410 ; =ov71_02249414
    // add r0, r5, #0
    // bl SysTask_SetFunc
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x14
    // bl ov71_022476C4
    // ldr r0, [r4]
    // add r4, #0x20
    // add r1, r4, #0
    // bl ov71_022476EC
    // pop {r3, r4, r5, pc}
    // nop
    // _02249410: .word ov71_02249414
    // TODO: decompile
}



void ov71_02249414(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov71_0224903C
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x80
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // cmp r0, #1
    // ble _02249446
    // mov r0, #2
    // lsl r0, r0, #0x10
    // str r0, [r4, #0x2c]
    // ldr r1, _0224945C ; =ov71_02249460
    // add r0, r5, #0
    // bl SysTask_SetFunc
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x14
    // bl ov71_022476C4
    // ldr r0, [r4]
    // add r4, #0x20
    // add r1, r4, #0
    // bl ov71_022476EC
    // pop {r3, r4, r5, pc}
    // _0224945C: .word ov71_02249460
    // TODO: decompile
}



void ov71_02249460(void) {
    ov71_0224903C(r1);
    // add r0, r1, r0
    *((u32*)(r4 + 0x28)) = *((u32*)(r4 + 0x2c));
    *((u32*)(r4 + 0x18)) = *((u32*)(r4 + 0x2c));
    // add r1, #0x14
    ov71_022476C4(*((u32*)r4), r4);
    // add r1, #0x20
    ov71_022476EC(*((u32*)r4), r4);
    ov71_02247738(*((u32*)r4));
    *((u32*)(r4 + 0x78)) = 1;
}



void ov71_022494A0(void) {
    Heap_Alloc(0x39, 0xa4);
    // str r5, [r4]
    *((u32*)(r0 + 4)) = 0;
    ov71_02247384(r5);
    *((u32*)(r4 + 0x24)) = r0;
    *((u32*)(r4 + 0x28)) = 0;
    // add r0, #0x34
    ov71_02249988(r4);
}



void ov71_022494D0(void) {
    Main_SetVBlankIntrCB(0, 0);
    ov71_022497C8(r4);
    ov71_022498E0(r4);
    ov71_02249970(r4);
    // add r0, #0x34
    ov71_02249990(r4);
    Heap_Free(r4);
}



void ov71_02249500(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r2, [r4]
    // add r5, r0, #0
    // cmp r2, #2
    // bhs _0224952E
    // lsl r3, r2, #2
    // ldr r2, _02249534 ; =ov71_0224BD7C
    // add r1, r5, #4
    // ldr r2, [r2, r3]
    // blx r2
    // cmp r0, #0
    // beq _02249524
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // str r0, [r5, #4]
    // add r0, r5, #0
    // bl ov71_02249538
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _02249534: .word ov71_0224BD7C
    // TODO: decompile
}



void ov71_02249538(void) {
    G3X_Reset(*((u32*)(r0 + 0x28)));
    ov71_022474CC(*((u32*)(r4 + 0x28)));
    RequestSwap3DBuffers(0, 0);
}



void ov71_02249558(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl ov71_02249670
    // add r0, r4, #0
    // bl ov71_022497E0
    // add r0, r4, #0
    // bl ov71_022498F0
    // mov r2, #0
    // ldr r0, _02249598 ; =ov71_02249C98
    // add r1, r4, #0
    // str r2, [r4, #0xc]
    // bl SysTask_CreateOnVWaitQueue
    // mov r0, #3
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // ldr r3, _0224959C ; =0x00007FFF
    // mov r0, #0
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // mov r0, #1
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _02249598: .word ov71_02249C98
    // _0224959C: .word 0x00007FFF
    // TODO: decompile
}



void ov71_022495A0(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // cmp r0, #4
    // bhi _0224965C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022495BA: ; jump table
    // mov r0, #0
    // str r0, [r5, #8]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224965C
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // cmp r0, #0xa
    // ble _0224965C
    // ldr r0, _02249664 ; =0x000006AB
    // bl PlaySE
    // add r1, r5, #0
    // add r0, r5, #0
    // add r1, #0x34
    // bl ov71_022499A4
    // ldr r0, [r5, #0x2c]
    // mov r1, #1
    // bl ov71_02247704
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224965C
    // add r0, r5, #0
    // add r0, #0x34
    // bl ov71_02249A50
    // cmp r0, #0
    // beq _0224965C
    // ldr r0, _02249668 ; =0x000006AC
    // bl PlaySE
    // ldr r0, [r5, #0x20]
    // mov r1, #3
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r5, #0x20]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224965C
    // ldr r0, [r5, #0x20]
    // bl Sprite_IsAnimated
    // cmp r0, #0
    // bne _0224965C
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0
    // ldr r3, _0224966C ; =0x00007FFF
    // add r1, r0, #0
    // add r2, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224965C
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0224965C
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _02249664: .word 0x000006AB
    // _02249668: .word 0x000006AC
    // _0224966C: .word 0x00007FFF
    // TODO: decompile
}



void ov71_02249670(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // ldr r0, _022497B4 ; =ov71_0224BDC0
    // bl GfGfx_SetBanks
    // ldr r2, _022497B8 ; =0x04000304
    // ldr r0, _022497BC ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // and r0, r1
    // strh r0, [r2]
    // ldr r0, _022497C0 ; =ov71_0224BD84
    // bl SetBothScreensModesAndDisable
    // ldr r0, [r4, #0x24]
    // ldr r2, _022497C4 ; =ov71_0224BDA4
    // mov r1, #3
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x24]
    // ldr r2, _022497C4 ; =ov71_0224BDA4
    // mov r1, #7
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4]
    // bl ov71_022473A0
    // cmp r0, #3
    // bhi _022496C2
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022496BA: ; jump table
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // mov r7, #0x10
    // mov r6, #0x11
    // mov r5, #0
    // b _022496F0
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // mov r7, #0x10
    // mov r6, #0x11
    // mov r5, #0x20
    // b _022496F0
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // mov r7, #0x10
    // mov r6, #0x11
    // mov r5, #0x40
    // b _022496F0
    // mov r0, #0x18
    // str r0, [sp, #0x10]
    // mov r7, #0x19
    // mov r6, #0x1a
    // mov r5, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x24]
    // mov r0, #0x59
    // add r1, r7, #0
    // mov r3, #3
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x24]
    // mov r0, #0x59
    // add r1, r7, #0
    // mov r3, #7
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r2, [r4, #0x24]
    // mov r0, #0x59
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r2, [r4, #0x24]
    // mov r0, #0x59
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnData
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0x59
    // add r1, r6, #0
    // add r3, r5, #0
    // bl GfGfxLoader_GXLoadPalWithSrcOffset
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0x59
    // add r1, r6, #0
    // mov r2, #4
    // add r3, r5, #0
    // bl GfGfxLoader_GXLoadPalWithSrcOffset
    // mov r1, #3
    // add r3, r1, #0
    // ldr r0, [r4, #0x24]
    // add r2, r1, #0
    // add r3, #0xfd
    // bl BgSetPosTextAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // mov r2, #3
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _022497B4: .word ov71_0224BDC0
    // _022497B8: .word 0x04000304
    // _022497BC: .word 0xFFFF7FFF
    // _022497C0: .word ov71_0224BD84
    // _022497C4: .word ov71_0224BDA4
    // TODO: decompile
}



void ov71_022497C8(void) {
}



void ov71_022497E0(void) {
    // push {r3, r4, lr}
    // sub sp, #0x24
    // add r4, r0, #0
    // bl NNS_G3dInit
    // bl G3X_InitMtxStack
    // ldr r0, _022498B4 ; =0x04000060
    // ldr r1, _022498B8 ; =0xFFFFCFFD
    // ldrh r2, [r0]
    // and r2, r1
    // strh r2, [r0]
    // ldrh r3, [r0]
    // add r2, r1, #2
    // and r3, r2
    // mov r2, #0x10
    // orr r2, r3
    // strh r2, [r0]
    // ldrh r3, [r0]
    // ldr r2, _022498BC ; =0x0000CFFB
    // and r2, r3
    // strh r2, [r0]
    // add r2, r1, #2
    // ldrh r3, [r0]
    // add r1, r1, #2
    // and r3, r2
    // mov r2, #8
    // orr r2, r3
    // strh r2, [r0]
    // ldrh r2, [r0]
    // and r2, r1
    // mov r1, #0x20
    // orr r1, r2
    // strh r1, [r0]
    // ldr r0, _022498C0 ; =ov71_0224BD94
    // bl G3X_SetEdgeColorTable
    // mov r1, #0
    // ldr r0, _022498C4 ; =0x000043FF
    // ldr r2, _022498C8 ; =0x00007FFF
    // mov r3, #0x3f
    // str r1, [sp]
    // bl G3X_SetClearColor
    // ldr r1, _022498CC ; =0x04000540
    // mov r0, #2
    // str r0, [r1]
    // ldr r0, _022498D0 ; =0xBFFF0000
    // str r0, [r1, #0x40]
    // mov r0, #1
    // add r1, r0, #0
    // bl GF_3DVramMan_InitFrameTexVramManager
    // mov r0, #1
    // lsl r0, r0, #0xe
    // mov r1, #1
    // bl GF_3DVramMan_InitFramePlttVramManager
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r1, _022498D4 ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // strh r2, [r1]
    // mov r1, #0
    // mov r0, #1
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov71_0224744C
    // str r0, [r4, #0x28]
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, [r4, #0x28]
    // mov r2, #0x59
    // mov r3, #0x1b
    // bl ov71_02247610
    // ldr r1, _022498D8 ; =0x000018E3
    // str r0, [r4, #0x2c]
    // add r0, sp, #0x10
    // strh r1, [r0]
    // mov r1, #0
    // strh r1, [r0, #2]
    // strh r1, [r0, #4]
    // ldr r0, [r4, #0x28]
    // add r1, sp, #0x10
    // bl ov71_0224780C
    // ldr r0, [r4, #0x28]
    // ldr r1, _022498DC ; =0x000007D2
    // bl ov71_0224783C
    // ldr r0, [r4, #0x28]
    // add r1, sp, #0x18
    // bl ov71_022477EC
    // add sp, #0x24
    // pop {r3, r4, pc}
    // nop
    // _022498B4: .word 0x04000060
    // _022498B8: .word 0xFFFFCFFD
    // _022498BC: .word 0x0000CFFB
    // _022498C0: .word ov71_0224BD94
    // _022498C4: .word 0x000043FF
    // _022498C8: .word 0x00007FFF
    // _022498CC: .word 0x04000540
    // _022498D0: .word 0xBFFF0000
    // _022498D4: .word 0x04000008
    // _022498D8: .word 0x000018E3
    // _022498DC: .word 0x000007D2
    // TODO: decompile
}



void ov71_022498E0(void) {
}



void ov71_022498F0(void) {
    // add r0, #0x10
    ov71_022472C4(0x59, 7, 8);
    // add r0, sp, #0x5c
    NNS_G2dInitImagePaletteProxy();
    // add r0, sp, #0x38
    NNS_G2dInitImageProxy();
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x38
    // str r0, [sp, #0x10]
    GfGfxLoader_LoadImageMapping(0x59, 9, 1, 0);
    // str r0, [sp]
    // add r0, sp, #0x5c
    // str r0, [sp, #4]
    GfGfxLoader_PartiallyLoadPalette(0x59, 0xa, 1, 0);
    // str r0, [sp]
    // add r0, sp, #0x14
    // add r1, #0x10
    // add r2, sp, #0x38
    // add r3, sp, #0x5c
    ov71_02247320(0, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x14
    ov71_02247340(*((u32*)r4), 0x80, 0x60);
    *((u32*)(r4 + 0x20)) = r0;
    Sprite_SetDrawFlag(0);
}



void ov71_02249970(void) {
    Sprite_Delete(*((u32*)(r0 + 0x20)));
    // add r4, #0x10
    ov71_022472FC(r4);
}



void ov71_02249988(void) {
}



void ov71_02249990(void) {
}



void ov71_022499A4(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // str r0, [r4]
    // ldr r1, [r0, #0x2c]
    // ldr r2, _02249A34 ; =0xFFFFD870
    // str r1, [r4, #0xc]
    // ldr r0, [r0, #0x28]
    // ldr r1, _02249A38 ; =0xFFF50E00
    // str r0, [r4, #8]
    // mov r0, #0
    // str r0, [r4, #0x10]
    // str r1, [r4, #0x14]
    // mov r1, #0xe2
    // lsl r1, r1, #0xc
    // str r1, [r4, #0x18]
    // add r1, r4, #0
    // add r1, #0x6c
    // strh r2, [r1]
    // add r1, r4, #0
    // ldr r2, _02249A3C ; =0xFFFFF550
    // add r1, #0x6e
    // strh r2, [r1]
    // ldr r1, _02249A40 ; =0x000134C4
    // str r1, [r4, #0x3c]
    // ldr r1, _02249A44 ; =0xFFFF4D56
    // str r1, [r4, #0x40]
    // str r0, [r4, #0x60]
    // str r0, [r4, #0x64]
    // mov r1, #2
    // str r0, [r4, #0x68]
    // lsl r1, r1, #0xc
    // strh r1, [r4, #0x34]
    // ldr r1, _02249A48 ; =0xFFFFE000
    // strh r1, [r4, #0x36]
    // strh r0, [r4, #0x38]
    // add r1, r4, #0
    // ldr r0, [r4, #0xc]
    // add r1, #0x34
    // bl ov71_022476EC
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x54]
    // mov r0, #0x4a
    // lsl r0, r0, #0xa
    // str r0, [r4, #0x44]
    // mov r0, #0x63
    // lsl r0, r0, #0xa
    // str r0, [r4, #0x48]
    // mov r0, #0
    // str r0, [r4, #0x5c]
    // add r0, r4, #0
    // bl ov71_02249A98
    // add r1, r4, #0
    // ldr r0, [r4, #0xc]
    // add r1, #0x28
    // bl ov71_022476C4
    // add r1, r4, #0
    // ldr r0, [r4, #0xc]
    // add r1, #0x34
    // bl ov71_022476D4
    // ldr r0, _02249A4C ; =ov71_02249B64
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #4]
    // pop {r4, pc}
    // nop
    // _02249A34: .word 0xFFFFD870
    // _02249A38: .word 0xFFF50E00
    // _02249A3C: .word 0xFFFFF550
    // _02249A40: .word 0x000134C4
    // _02249A44: .word 0xFFFF4D56
    // _02249A48: .word 0xFFFFE000
    // _02249A4C: .word ov71_02249B64
    // TODO: decompile
}



void ov71_02249A50(void) {
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // bne _02249A5A
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov71_02249A60(void) {
    // ldr r4, [sp, #0x18]
    // sub r0, r1, r0
    _s32_div_f(*((u32*)(r0 + 0x44)), r4);
    *((u32*)(r5 + 0x4c)) = r0;
    // sub r0, r6, r0
    _s32_div_f(*((u32*)(r5 + 0x48)), r4);
    *((u32*)(r5 + 0x50)) = r0;
    // sub r0, r7, r0
    _s32_div_f(*((u32*)(r5 + 0x54)), r4);
    *((u32*)(r5 + 0x58)) = r0;
    // ldr r0, [sp, #0x18]
    *((u32*)(r5 + 0x5c)) = r0;
}



void ov71_02249A98(void) {
    // add r0, #0x6c
    // ldrh r0, [r0]
    _s32_div_f(0xb6);
    // sub r4, r4, r0
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r1, r1, r0
    // add r0, #0x6c
    // strh r1, [r0]
    // add r0, r1, r0
    *((u32*)(r5 + 0x44)) = *((u32*)(r5 + 0x4c));
    // add r0, r1, r0
    *((u32*)(r5 + 0x48)) = *((u32*)(r5 + 0x50));
    // add r1, r1, r0
    *((u32*)(r5 + 0x54)) = *((u32*)(r5 + 0x54));
    ov71_02247730(*((u32*)(r5 + 0xc)), *((u32*)(r5 + 0x54)));
    *((u32*)(r5 + 0x5c)) = (*((u32*)(r5 + 0x5c)) - 1);
    GF_CosDegNoWrap(((r4 << 0x10) >> 0x10));
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r6);
    // add r2, r0, r2
    // adc r1, r3
    // orr r1, r0
    *((u32*)(r5 + 0x1c)) = ((2 << 0xa) >> 0xc);
    GF_SinDegNoWrap(((r4 << 0x10) >> 0x10), ((2 << 0xa) >> 0xc), (2 << 0xa), 0);
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r6);
    // add r2, r0, r2
    // adc r1, r3
    // orr r1, r0
    *((u32*)(r5 + 0x20)) = ((2 << 0xa) >> 0xc);
    *((u32*)(r5 + 0x24)) = 0;
    // ldrsh r2, [r5, r0]
    // add r0, r2, r0
    *((u16*)(r5 + 0x34)) = (3 << 8);
    // add r1, #0x34
    ov71_022476EC(*((u32*)(r5 + 0xc)), r5, (2 << 0xa), 0);
    // add r5, #0x28
    // add r0, #0x1c
    // add r1, #0x10
    VEC_Add(r5, r5, r5);
}



void ov71_02249B64(void) {
    *((u32*)(r1 + 0x68)) = (*((u32*)(r1 + 0x68)) + 1);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02249B88: ; jump table
    // add r0, r1, r0
    *((u32*)(r1 + 0x14)) = *((u32*)(r1 + 0x3c));
    // add r0, r1, r0
    *((u32*)(r1 + 0x18)) = *((u32*)(r1 + 0x40));
    ov71_02249A98(r1, *((u32*)(r1 + 0x18)));
    // add r1, #0x28
    ov71_022476C4(*((u32*)(r4 + 0xc)), r4);
    ov71_02247738(*((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0x60)) = (*((u32*)(r4 + 0x60)) + 1);
    ov71_02247738(*((u32*)(r4 + 0xc)));
    ov71_02249C90(*((u32*)r4));
    *((u32*)(r4 + 0x60)) = (*((u32*)(r4 + 0x60)) + 1);
    // add r0, r1, r0
    *((u32*)(r4 + 0x14)) = *((u32*)(r4 + 0x3c));
    // add r0, r1, r0
    *((u32*)(r4 + 0x18)) = *((u32*)(r4 + 0x40));
    ov71_02249A98(r4, *((u32*)(r4 + 0x18)));
    // add r4, #0x28
    ov71_022476C4(*((u32*)(r4 + 0xc)), r4);
    // add r0, r1, r0
    *((u32*)(r4 + 0x14)) = *((u32*)(r4 + 0x3c));
    // add r0, r1, r0
    *((u32*)(r4 + 0x18)) = *((u32*)(r4 + 0x40));
    ov71_02249A98(r4, *((u32*)(r4 + 0x18)));
    // add r1, #0x28
    ov71_022476C4(*((u32*)(r4 + 0xc)), r4);
    // str r0, [sp]
    ov71_02249A60(r4, (2 << 0xa), (2 << 0xa), ((2 << 0xa) >> 2));
    *((u32*)(r4 + 0x64)) = 0;
    *((u32*)(r4 + 0x60)) = (*((u32*)(r4 + 0x60)) + 1);
    ov71_02249A98(r4);
    // add r1, #0x28
    ov71_022476C4(*((u32*)(r4 + 0xc)), r4);
    *((u32*)(r4 + 0x64)) = (*((u32*)(r4 + 0x64)) + 1);
    ov71_02247704(*((u32*)(r4 + 0xc)), 0);
    *((u32*)(r4 + 0x64)) = 0;
    *((u32*)(r4 + 0x60)) = (*((u32*)(r4 + 0x60)) + 1);
    *((u32*)(r4 + 0x64)) = (*((u32*)(r4 + 0x64)) + 1);
    *((u32*)(r4 + 4)) = 0;
    SysTask_Destroy((*((u32*)(r4 + 0x60)) + 1), 0);
}



void ov71_02249C90(void) {
}



void ov71_02249C98(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // beq _02249CE4
    // mov r3, #0
    // ldr r1, _02249CE8 ; =0x00001150
    // str r3, [r4, #0xc]
    // add r0, sp, #0
    // strh r1, [r0]
    // strh r3, [r0, #2]
    // strh r3, [r0, #4]
    // mov r1, #3
    // ldr r0, [r4, #0x24]
    // add r2, r1, #0
    // bl BgSetPosTextAndCommit
    // mov r2, #3
    // add r3, r2, #0
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // add r3, #0xfd
    // bl BgSetPosTextAndCommit
    // ldr r0, [r4, #0x28]
    // add r1, sp, #0
    // bl ov71_0224781C
    // ldr r2, _02249CEC ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // add r0, r5, #0
    // bl SysTask_Destroy
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _02249CE8: .word 0x00001150
    // _02249CEC: .word 0x04000304
    // TODO: decompile
}



void ov71_02249CF0(void) {
    Heap_Alloc(0x39, 0x24);
    // str r5, [r4]
    *((u32*)(r0 + 4)) = 0;
    ov71_02247384(r5);
    *((u32*)(r4 + 0xc)) = r0;
}



void ov71_02249D14(void) {
    ov71_0224A080();
    Heap_Free(r4);
}



void ov71_02249D28(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r2, [r4]
    // add r5, r0, #0
    // cmp r2, #2
    // bhs _02249D50
    // lsl r3, r2, #2
    // ldr r2, _02249D54 ; =ov71_0224BDE8
    // add r1, r5, #4
    // ldr r2, [r2, r3]
    // blx r2
    // cmp r0, #0
    // beq _02249D4C
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // str r0, [r5, #4]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _02249D54: .word ov71_0224BDE8
    // TODO: decompile
}



void ov71_02249D58(void) {
    // push {lr}
    // sub sp, #0xc
    // bl ov71_02249E6C
    // mov r0, #8
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // ldr r3, _02249D7C ; =0x00007FFF
    // mov r0, #0
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // mov r0, #1
    // add sp, #0xc
    // pop {pc}
    // _02249D7C: .word 0x00007FFF
    // TODO: decompile
}



void ov71_02249D80(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _02249D98
    // cmp r0, #1
    // beq _02249DCA
    // cmp r0, #2
    // beq _02249DF6
    // b _02249E04
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _02249E04
    // ldr r0, _02249E0C ; =0xFFE80000
    // mov r2, #0
    // str r0, [r5, #0x10]
    // mov r0, #5
    // lsl r0, r0, #0x10
    // str r0, [r5, #0x14]
    // ldr r0, _02249E10 ; =0x00005999
    // add r1, r5, #0
    // str r0, [r5, #0x18]
    // ldr r0, _02249E14 ; =0xFFFFDDDE
    // str r0, [r5, #0x1c]
    // mov r0, #0x3c
    // str r0, [r5, #8]
    // ldr r0, _02249E18 ; =ov71_02249E24
    // str r2, [r5, #0x20]
    // bl SysTask_CreateOnVBlankQueue
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02249E04
    // ldr r0, [r5, #0x20]
    // cmp r0, #0
    // beq _02249E04
    // ldr r0, _02249E1C ; =0x000006A8
    // bl PlaySE
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0
    // ldr r3, _02249E20 ; =0x00007FFF
    // add r1, r0, #0
    // add r2, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02249E04
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _02249E04
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _02249E0C: .word 0xFFE80000
    // _02249E10: .word 0x00005999
    // _02249E14: .word 0xFFFFDDDE
    // _02249E18: .word ov71_02249E24
    // _02249E1C: .word 0x000006A8
    // _02249E20: .word 0x00007FFF
    // TODO: decompile
}



void ov71_02249E24(void) {
    *((u32*)(r1 + 8)) = (*((u32*)(r1 + 8)) - 1);
    // add r0, r1, r0
    *((u32*)(r1 + 0x10)) = *((u32*)(r1 + 0x18));
    // add r2, r1, r0
    *((u32*)(r1 + 0x14)) = r2;
    // asr r1, r1, #0xc
    // asr r2, r2, #0xc
    ov71_0224A0B8(*((u32*)(r1 + 0xc)), *((u32*)(r1 + 0x10)));
    // mvn r1, r1
    ov71_0224A0B8(*((u32*)(r4 + 0xc)), 0x2f, 0x2f);
    *((u32*)(r4 + 0x20)) = 1;
    SysTask_Destroy(r5);
}



void ov71_02249E6C(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r0, _0224A064 ; =ov71_0224BE54
    // bl GfGfx_SetBanks
    // ldr r2, _0224A068 ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // ldr r0, _0224A06C ; =ov71_0224BDF0
    // bl SetBothScreensModesAndDisable
    // ldr r0, [r4, #0xc]
    // ldr r2, _0224A070 ; =ov71_0224BE00
    // mov r1, #1
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0xc]
    // ldr r2, _0224A070 ; =ov71_0224BE00
    // mov r1, #5
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0xc]
    // ldr r2, _0224A074 ; =ov71_0224BE1C
    // mov r1, #2
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0xc]
    // ldr r2, _0224A078 ; =ov71_0224BE38
    // mov r1, #3
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0xc]
    // ldr r2, _0224A078 ; =ov71_0224BE38
    // mov r1, #7
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0xc]
    // mov r0, #0x59
    // mov r1, #0x13
    // mov r3, #3
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0xc]
    // mov r0, #0x59
    // mov r1, #0x13
    // mov r3, #7
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0xc]
    // mov r0, #0x59
    // mov r1, #0x12
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0xc]
    // mov r0, #0x59
    // mov r1, #0x12
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x39
    // mov r2, #0
    // str r0, [sp, #4]
    // mov r0, #0x59
    // mov r1, #0x14
    // add r3, r2, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x39
    // str r0, [sp, #4]
    // mov r0, #0x59
    // mov r1, #0x14
    // mov r2, #4
    // mov r3, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0xc8
    // str r0, [sp]
    // mov r1, #1
    // ldr r0, [r4, #0xc]
    // mov r2, #0
    // add r3, r1, #0
    // bl BG_FillCharDataRange
    // mov r0, #0xc8
    // str r0, [sp]
    // ldr r0, [r4, #0xc]
    // mov r1, #5
    // mov r2, #0
    // mov r3, #1
    // bl BG_FillCharDataRange
    // mov r0, #0xc8
    // str r0, [sp]
    // ldr r0, [r4, #0xc]
    // mov r1, #2
    // mov r2, #0
    // mov r3, #1
    // bl BG_FillCharDataRange
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, [r4]
    // mov r2, #1
    // mov r3, #0xe
    // bl ov71_02247124
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, [r4]
    // mov r2, #5
    // mov r3, #0xe
    // bl ov71_02247124
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [r4]
    // mov r1, #1
    // mov r2, #2
    // mov r3, #0xf
    // bl ov71_02247124
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x40
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // mov r2, #0xc8
    // bl FillBgTilemapRect
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x40
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r0, [r4, #0xc]
    // mov r1, #5
    // mov r2, #0xc8
    // bl FillBgTilemapRect
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x40
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r0, [r4, #0xc]
    // mov r1, #2
    // mov r2, #0xc8
    // bl FillBgTilemapRect
    // mov r0, #0x14
    // str r0, [sp]
    // mov r1, #0
    // str r1, [sp, #4]
    // ldr r0, [r4]
    // mov r2, #1
    // mov r3, #0xe
    // bl ov71_02247230
    // mov r0, #0x14
    // str r0, [sp]
    // mov r1, #0
    // str r1, [sp, #4]
    // ldr r0, [r4]
    // mov r2, #5
    // mov r3, #0xe
    // bl ov71_02247230
    // mov r2, #2
    // str r2, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // mov r1, #1
    // mov r3, #0xf
    // bl ov71_02247230
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl BgCommitTilemapBufferToVram
    // ldr r0, [r4, #0xc]
    // mov r1, #5
    // bl BgCommitTilemapBufferToVram
    // ldr r0, [r4, #0xc]
    // mov r1, #2
    // bl BgCommitTilemapBufferToVram
    // ldr r0, [r4, #0xc]
    // ldr r2, _0224A07C ; =0xFFFFFE80
    // mov r1, #0x50
    // bl ov71_0224A0B8
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x10
    // pop {r4, pc}
    // _0224A064: .word ov71_0224BE54
    // _0224A068: .word 0x04000304
    // _0224A06C: .word ov71_0224BDF0
    // _0224A070: .word ov71_0224BE00
    // _0224A074: .word ov71_0224BE1C
    // _0224A078: .word ov71_0224BE38
    // _0224A07C: .word 0xFFFFFE80
    // TODO: decompile
}



void ov71_0224A080(void) {
}



void ov71_0224A0B8(void) {
    // push {r4, r5, r6, lr}
    // ldr r3, _0224A0EC ; =0x000001FF
    // add r4, r1, #0
    // add r6, r2, #0
    // and r4, r3
    // add r5, r0, #0
    // mov r1, #2
    // mov r2, #3
    // and r3, r6
    // bl BgSetPosTextAndCommit
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #3
    // add r3, r4, #0
    // bl BgSetPosTextAndCommit
    // add r4, #0xc0
    // add r0, r5, #0
    // mov r1, #5
    // mov r2, #3
    // add r3, r4, #0
    // bl BgSetPosTextAndCommit
    // pop {r4, r5, r6, pc}
    // nop
    // _0224A0EC: .word 0x000001FF
    // TODO: decompile
}



void ov71_0224A0F0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x39
    // mov r1, #0xb0
    // bl Heap_Alloc
    // add r4, r0, #0
    // beq _0224A124
    // str r5, [r4]
    // mov r0, #0
    // str r0, [r4, #4]
    // add r0, r5, #0
    // bl ov71_02247384
    // str r0, [r4, #0x24]
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0xc]
    // add r0, r4, #0
    // add r0, #0x34
    // bl ov71_0224A5A8
    // ldr r0, _0224A128 ; =ov71_0224A8B0
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _0224A128: .word ov71_0224A8B0
    // TODO: decompile
}



void ov71_0224A12C(void) {
    Main_SetVBlankIntrCB(0, 0);
    ov71_0224A3D8(r4);
    ov71_0224A500(r4);
    ov71_0224A590(r4);
    // add r0, #0x34
    ov71_0224A5B0(r4);
    Heap_Free(r4);
}



void ov71_0224A15C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r2, [r4]
    // add r5, r0, #0
    // cmp r2, #2
    // bhs _0224A184
    // lsl r3, r2, #2
    // ldr r2, _0224A188 ; =ov71_0224BE7C
    // add r1, r5, #4
    // ldr r2, [r2, r3]
    // blx r2
    // cmp r0, #0
    // beq _0224A180
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // str r0, [r5, #4]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _0224A188: .word ov71_0224BE7C
    // TODO: decompile
}



void ov71_0224A18C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl ov71_0224A278
    // add r0, r4, #0
    // bl ov71_0224A3F0
    // add r0, r4, #0
    // bl ov71_0224A510
    // mov r0, #8
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // ldr r3, _0224A1C0 ; =0x00007FFF
    // mov r0, #0
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // mov r0, #1
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0224A1C0: .word 0x00007FFF
    // TODO: decompile
}



void ov71_0224A1C4(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // cmp r0, #3
    // bhi _0224A26A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224A1DE: ; jump table
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0224A26A
    // ldr r0, [r5, #0x20]
    // mov r1, #3
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r5, #0x20]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224A26A
    // ldr r0, [r5, #0x20]
    // bl Sprite_IsAnimated
    // cmp r0, #0
    // bne _0224A26A
    // ldr r0, _0224A270 ; =0x000006AA
    // bl PlaySE
    // add r1, r5, #0
    // add r0, r5, #0
    // add r1, #0x34
    // bl ov71_0224A5C4
    // ldr r0, [r5, #0x2c]
    // mov r1, #1
    // bl ov71_02247704
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224A26A
    // add r5, #0x34
    // add r0, r5, #0
    // bl ov71_0224A684
    // cmp r0, #0
    // beq _0224A26A
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0
    // ldr r3, _0224A274 ; =0x00007FFF
    // add r1, r0, #0
    // add r2, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224A26A
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0224A26A
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0224A270: .word 0x000006AA
    // _0224A274: .word 0x00007FFF
    // TODO: decompile
}



void ov71_0224A278(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // ldr r0, _0224A3C8 ; =ov71_0224BEC0
    // bl GfGfx_SetBanks
    // ldr r2, _0224A3CC ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // ldr r0, _0224A3D0 ; =ov71_0224BE84
    // bl SetBothScreensModesAndDisable
    // ldr r0, [r4, #0x24]
    // ldr r2, _0224A3D4 ; =ov71_0224BEA4
    // mov r1, #3
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x24]
    // ldr r2, _0224A3D4 ; =ov71_0224BEA4
    // mov r1, #7
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4]
    // bl ov71_022473A0
    // cmp r0, #3
    // bhi _0224A2CA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224A2C2: ; jump table
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // mov r7, #0x10
    // mov r6, #0x11
    // mov r5, #0
    // b _0224A2F8
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // mov r7, #0x10
    // mov r6, #0x11
    // mov r5, #0x20
    // b _0224A2F8
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // mov r7, #0x10
    // mov r6, #0x11
    // mov r5, #0x40
    // b _0224A2F8
    // mov r0, #0x18
    // str r0, [sp, #0x10]
    // mov r7, #0x19
    // mov r6, #0x1a
    // mov r5, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x24]
    // mov r0, #0x59
    // add r1, r7, #0
    // mov r3, #3
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x24]
    // mov r0, #0x59
    // add r1, r7, #0
    // mov r3, #7
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r2, [r4, #0x24]
    // mov r0, #0x59
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r2, [r4, #0x24]
    // mov r0, #0x59
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnData
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0x59
    // add r1, r6, #0
    // add r3, r5, #0
    // bl GfGfxLoader_GXLoadPalWithSrcOffset
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0x59
    // add r1, r6, #0
    // mov r2, #4
    // add r3, r5, #0
    // bl GfGfxLoader_GXLoadPalWithSrcOffset
    // mov r1, #3
    // ldr r0, [r4, #0x24]
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // mov r2, #3
    // add r3, r2, #0
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // add r3, #0xfd
    // bl BgSetPosTextAndCommit
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // bl sub_0203A880
    // mov r0, #1
    // mov r1, #0x38
    // bl sub_0203A948
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0224A3C8: .word ov71_0224BEC0
    // _0224A3CC: .word 0x04000304
    // _0224A3D0: .word ov71_0224BE84
    // _0224A3D4: .word ov71_0224BEA4
    // TODO: decompile
}



void ov71_0224A3D8(void) {
}



void ov71_0224A3F0(void) {
    // push {r3, r4, lr}
    // sub sp, #0x24
    // add r4, r0, #0
    // bl NNS_G3dInit
    // bl G3X_InitMtxStack
    // ldr r0, _0224A4D0 ; =0x04000060
    // ldr r1, _0224A4D4 ; =0xFFFFCFFD
    // ldrh r2, [r0]
    // and r2, r1
    // strh r2, [r0]
    // ldrh r3, [r0]
    // add r2, r1, #2
    // and r3, r2
    // mov r2, #0x10
    // orr r2, r3
    // strh r2, [r0]
    // ldrh r3, [r0]
    // ldr r2, _0224A4D8 ; =0x0000CFFB
    // and r2, r3
    // strh r2, [r0]
    // add r2, r1, #2
    // ldrh r3, [r0]
    // add r1, r1, #2
    // and r3, r2
    // mov r2, #8
    // orr r2, r3
    // strh r2, [r0]
    // ldrh r2, [r0]
    // and r2, r1
    // mov r1, #0x20
    // orr r1, r2
    // strh r1, [r0]
    // ldr r0, _0224A4DC ; =ov71_0224BE94
    // bl G3X_SetEdgeColorTable
    // mov r1, #0
    // ldr r0, _0224A4E0 ; =0x000043FF
    // ldr r2, _0224A4E4 ; =0x00007FFF
    // mov r3, #0x3f
    // str r1, [sp]
    // bl G3X_SetClearColor
    // ldr r1, _0224A4E8 ; =0x04000540
    // mov r0, #2
    // str r0, [r1]
    // ldr r0, _0224A4EC ; =0xBFFF0000
    // str r0, [r1, #0x40]
    // mov r0, #1
    // add r1, r0, #0
    // bl GF_3DVramMan_InitFrameTexVramManager
    // mov r0, #1
    // lsl r0, r0, #0xe
    // mov r1, #1
    // bl GF_3DVramMan_InitFramePlttVramManager
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r1, _0224A4F0 ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // strh r2, [r1]
    // mov r1, #0
    // mov r0, #1
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov71_0224744C
    // str r0, [r4, #0x28]
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, [r4, #0x28]
    // mov r2, #0x59
    // mov r3, #0x1b
    // bl ov71_02247610
    // ldr r1, _0224A4F4 ; =0x000018E3
    // str r0, [r4, #0x2c]
    // add r0, sp, #0x10
    // strh r1, [r0]
    // mov r1, #0
    // strh r1, [r0, #2]
    // strh r1, [r0, #4]
    // ldr r0, [r4, #0x28]
    // add r1, sp, #0x10
    // bl ov71_0224780C
    // ldr r1, _0224A4F8 ; =0x00001150
    // add r0, sp, #0x10
    // strh r1, [r0]
    // ldr r0, [r4, #0x28]
    // add r1, sp, #0x10
    // bl ov71_0224781C
    // ldr r0, [r4, #0x28]
    // ldr r1, _0224A4FC ; =0x000007D2
    // bl ov71_0224783C
    // ldr r0, [r4, #0x28]
    // add r1, sp, #0x18
    // bl ov71_022477EC
    // add sp, #0x24
    // pop {r3, r4, pc}
    // _0224A4D0: .word 0x04000060
    // _0224A4D4: .word 0xFFFFCFFD
    // _0224A4D8: .word 0x0000CFFB
    // _0224A4DC: .word ov71_0224BE94
    // _0224A4E0: .word 0x000043FF
    // _0224A4E4: .word 0x00007FFF
    // _0224A4E8: .word 0x04000540
    // _0224A4EC: .word 0xBFFF0000
    // _0224A4F0: .word 0x04000008
    // _0224A4F4: .word 0x000018E3
    // _0224A4F8: .word 0x00001150
    // _0224A4FC: .word 0x000007D2
    // TODO: decompile
}



void ov71_0224A500(void) {
}



void ov71_0224A510(void) {
    // add r0, #0x10
    ov71_022472C4(0x59, 7, 8);
    // add r0, sp, #0x5c
    NNS_G2dInitImagePaletteProxy();
    // add r0, sp, #0x38
    NNS_G2dInitImageProxy();
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x38
    // str r0, [sp, #0x10]
    GfGfxLoader_LoadImageMapping(0x59, 9, 1, 0);
    // str r0, [sp]
    // add r0, sp, #0x5c
    // str r0, [sp, #4]
    GfGfxLoader_PartiallyLoadPalette(0x59, 0xa, 1, 0);
    // str r0, [sp]
    // add r0, sp, #0x14
    // add r1, #0x10
    // add r2, sp, #0x38
    // add r3, sp, #0x5c
    ov71_02247320(1, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x14
    ov71_02247340(*((u32*)r4), 0x80, 0x60);
    *((u32*)(r4 + 0x20)) = r0;
    Sprite_SetDrawFlag(0);
}



void ov71_0224A590(void) {
    Sprite_Delete(*((u32*)(r0 + 0x20)));
    // add r4, #0x10
    ov71_022472FC(r4);
}



void ov71_0224A5A8(void) {
}



void ov71_0224A5B0(void) {
}



void ov71_0224A5C4(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r1, #0
    // str r0, [r4]
    // ldr r1, [r0, #0x2c]
    // ldr r2, _0224A664 ; =0xFFFFD870
    // str r1, [r4, #0xc]
    // ldr r0, [r0, #0x28]
    // ldr r1, _0224A668 ; =0x003D6C00
    // str r0, [r4, #8]
    // mov r0, #0
    // str r0, [r4, #0x10]
    // str r1, [r4, #0x14]
    // ldr r1, _0224A66C ; =0xFFE44000
    // str r1, [r4, #0x18]
    // add r1, r4, #0
    // add r1, #0x78
    // strh r2, [r1]
    // add r1, r4, #0
    // ldr r2, _0224A670 ; =0xFFFFF550
    // add r1, #0x7a
    // strh r2, [r1]
    // ldr r1, _0224A674 ; =0xFFFEF2C6
    // str r1, [r4, #0x3c]
    // ldr r1, _0224A678 ; =0x0000936D
    // str r1, [r4, #0x40]
    // str r0, [r4, #0x6c]
    // str r0, [r4, #0x70]
    // mov r1, #2
    // str r0, [r4, #0x74]
    // lsl r1, r1, #0xc
    // strh r1, [r4, #0x34]
    // ldr r1, _0224A67C ; =0xFFFFE000
    // strh r1, [r4, #0x36]
    // strh r0, [r4, #0x38]
    // add r1, r4, #0
    // ldr r0, [r4, #0xc]
    // add r1, #0x34
    // bl ov71_022476EC
    // mov r3, #2
    // lsl r3, r3, #8
    // mov r1, #0x4a
    // mov r2, #0x63
    // str r3, [r4, #0x5c]
    // lsl r0, r3, #2
    // str r0, [r4, #0x44]
    // str r0, [r4, #0x48]
    // mov r0, #0
    // str r0, [r4, #0x68]
    // mov r0, #0xc
    // str r0, [sp]
    // add r0, r4, #0
    // lsl r1, r1, #0xa
    // lsl r2, r2, #0xa
    // lsl r3, r3, #3
    // bl ov71_0224A694
    // add r0, r4, #0
    // bl ov71_0224A6D8
    // add r1, r4, #0
    // ldr r0, [r4, #0xc]
    // add r1, #0x28
    // bl ov71_022476C4
    // add r1, r4, #0
    // ldr r0, [r4, #0xc]
    // add r1, #0x34
    // bl ov71_022476D4
    // ldr r0, _0224A680 ; =ov71_0224A7D0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #4]
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _0224A664: .word 0xFFFFD870
    // _0224A668: .word 0x003D6C00
    // _0224A66C: .word 0xFFE44000
    // _0224A670: .word 0xFFFFF550
    // _0224A674: .word 0xFFFEF2C6
    // _0224A678: .word 0x0000936D
    // _0224A67C: .word 0xFFFFE000
    // _0224A680: .word ov71_0224A7D0
    // TODO: decompile
}



void ov71_0224A684(void) {
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // bne _0224A68E
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov71_0224A694(void) {
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r1, [sp]
    // sub r0, r4, r0
    _s32_div_f(*((u32*)(r0 + 0x44)));
    *((u32*)(r5 + 0x4c)) = r0;
    // ldr r1, [sp]
    // sub r0, r6, r0
    _s32_div_f(*((u32*)(r5 + 0x48)));
    *((u32*)(r5 + 0x50)) = r0;
    // ldr r1, [sp]
    // sub r0, r7, r0
    _s32_div_f(*((u32*)(r5 + 0x5c)));
    *((u32*)(r5 + 0x60)) = r0;
    *((u32*)(r5 + 0x54)) = r4;
    *((u32*)(r5 + 0x58)) = r6;
    // ldr r0, [sp, #0x18]
    *((u32*)(r5 + 0x64)) = r7;
    *((u32*)(r5 + 0x68)) = r0;
}



void ov71_0224A6D8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _0224A7CC ; =_0224C020
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0224A7BA
    // add r0, r5, #0
    // add r0, #0x78
    // ldrh r0, [r0]
    // mov r1, #0xb6
    // bl _s32_div_f
    // add r4, r0, #0
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // cmp r4, r0
    // blt _0224A6FC
    // sub r4, r4, r0
    // mov r0, #0x78
    // ldrsh r1, [r5, r0]
    // mov r0, #0x7a
    // ldrsh r0, [r5, r0]
    // sub r1, r1, r0
    // add r0, r5, #0
    // add r0, #0x78
    // strh r1, [r0]
    // ldr r0, [r5, #0x68]
    // cmp r0, #0
    // beq _0224A744
    // sub r0, r0, #1
    // str r0, [r5, #0x68]
    // beq _0224A730
    // ldr r1, [r5, #0x44]
    // ldr r0, [r5, #0x4c]
    // add r0, r1, r0
    // str r0, [r5, #0x44]
    // ldr r1, [r5, #0x48]
    // ldr r0, [r5, #0x50]
    // add r0, r1, r0
    // str r0, [r5, #0x48]
    // ldr r1, [r5, #0x5c]
    // ldr r0, [r5, #0x60]
    // add r0, r1, r0
    // b _0224A73A
    // ldr r0, [r5, #0x54]
    // str r0, [r5, #0x44]
    // ldr r0, [r5, #0x58]
    // str r0, [r5, #0x48]
    // ldr r0, [r5, #0x64]
    // str r0, [r5, #0x5c]
    // ldr r0, [r5, #0xc]
    // ldr r1, [r5, #0x5c]
    // bl ov71_02247730
    // lsl r0, r4, #0x10
    // ldr r6, [r5, #0x44]
    // lsr r0, r0, #0x10
    // bl GF_CosDegNoWrap
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    // add r2, r6, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // str r1, [r5, #0x1c]
    // lsl r0, r4, #0x10
    // ldr r6, [r5, #0x48]
    // lsr r0, r0, #0x10
    // bl GF_SinDegNoWrap
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    // add r2, r6, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // str r1, [r5, #0x20]
    // add r1, r5, #0
    // str r3, [r5, #0x24]
    // mov r0, #0x34
    // ldrsh r2, [r5, r0]
    // mov r0, #3
    // lsl r0, r0, #8
    // sub r0, r2, r0
    // strh r0, [r5, #0x34]
    // ldr r0, [r5, #0xc]
    // add r1, #0x34
    // bl ov71_022476EC
    // add r0, r5, #0
    // add r1, r5, #0
    // add r5, #0x28
    // add r0, #0x1c
    // add r1, #0x10
    // add r2, r5, #0
    // bl VEC_Add
    // pop {r4, r5, r6, pc}
    // add r2, r5, #0
    // add r2, #0x10
    // ldmia r2!, {r0, r1}
    // add r5, #0x28
    // stmia r5!, {r0, r1}
    // ldr r0, [r2]
    // str r0, [r5]
    // pop {r4, r5, r6, pc}
    // nop
    // _0224A7CC: .word _0224C020
    // TODO: decompile
}



void ov71_0224A7D0(void) {
    *((u32*)(r1 + 0x74)) = (*((u32*)(r1 + 0x74)) + 1);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224A7F0: ; jump table
    ov71_0224A6D8(r1, (*((u16*)(*((u32*)(r1 + 0x6c)) + 6)) << 0x10));
    // add r1, #0x28
    ov71_022476C4(*((u32*)(r4 + 0xc)), r4);
    *((u32*)(r4 + 0x74)) = (*((u32*)(r4 + 0x74)) + 1);
    *((u32*)(r4 + 0x74)) = 0;
    *((u32*)(r4 + 0x6c)) = (*((u32*)(r4 + 0x6c)) + 1);
    ov71_02247738(*((u32*)(r4 + 0xc)));
    ov71_0224A8A8(*((u32*)r4));
    *((u32*)(r4 + 0x6c)) = (*((u32*)(r4 + 0x6c)) + 1);
    // add r0, r1, r0
    *((u32*)(r4 + 0x14)) = *((u32*)(r4 + 0x3c));
    // add r0, r1, r0
    *((u32*)(r4 + 0x18)) = *((u32*)(r4 + 0x40));
    ov71_0224A6D8(r4, *((u32*)(r4 + 0x18)));
    // add r4, #0x28
    ov71_022476C4(*((u32*)(r4 + 0xc)), r4);
    // add r0, r1, r0
    *((u32*)(r4 + 0x14)) = *((u32*)(r4 + 0x3c));
    // add r0, r1, r0
    *((u32*)(r4 + 0x18)) = *((u32*)(r4 + 0x40));
    ov71_0224A6D8(r4, *((u32*)(r4 + 0x18)));
    // add r1, #0x28
    ov71_022476C4(*((u32*)(r4 + 0xc)), r4);
    ov71_02247704(*((u32*)(r4 + 0xc)), 0);
    *((u32*)(r4 + 0x70)) = 0;
    *((u32*)(r4 + 0x6c)) = (*((u32*)(r4 + 0x6c)) + 1);
    *((u32*)(r4 + 0x70)) = (*((u32*)(r4 + 0x70)) + 1);
    *((u32*)(r4 + 4)) = 0;
    SysTask_Destroy((*((u32*)(r4 + 0x6c)) + 1), 0);
}



void ov71_0224A8A8(void) {
}



void ov71_0224A8B0(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, [r4, #0x28]
    // cmp r0, #0
    // beq _0224A8CE
    // bl G3X_Reset
    // ldr r0, [r4, #0x28]
    // bl ov71_022474CC
    // mov r0, #0
    // add r1, r0, #0
    // bl RequestSwap3DBuffers
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // beq _0224A910
    // ldr r1, _0224A914 ; =0x0000EEB0
    // add r0, sp, #0
    // strh r1, [r0]
    // mov r1, #0
    // strh r1, [r0, #2]
    // strh r1, [r0, #4]
    // mov r1, #3
    // add r3, r1, #0
    // ldr r0, [r4, #0x24]
    // add r2, r1, #0
    // add r3, #0xfd
    // bl BgSetPosTextAndCommit
    // ldr r0, [r4, #0x24]
    // mov r1, #7
    // mov r2, #3
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r4, #0x28]
    // add r1, sp, #0
    // bl ov71_0224781C
    // ldr r2, _0224A918 ; =0x04000304
    // ldr r0, _0224A91C ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // and r0, r1
    // strh r0, [r2]
    // mov r0, #0
    // str r0, [r4, #0xc]
    // add sp, #8
    // pop {r4, pc}
    // _0224A914: .word 0x0000EEB0
    // _0224A918: .word 0x04000304
    // _0224A91C: .word 0xFFFF7FFF
    // TODO: decompile
}



void ov71_0224A920(void) {
    Heap_Alloc(0x39, 0x3c);
    // str r5, [r4]
    *((u32*)(r0 + 4)) = 0;
    ov71_02247384(r5);
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 0x20)) = 0;
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x30)) = 0;
    *((u32*)(r4 + 0x34)) = 0;
    *((u32*)(r4 + 0x38)) = 0;
}



void ov71_0224A954(void) {
    ov71_0224ADB0();
    ov71_0224AEF4(r4);
    ov71_0224B068(*((u32*)(r4 + 0x30)));
    ov71_0224AFB8(*((u32*)(r4 + 0x34)));
    ov71_0224B11C(*((u32*)(r4 + 0x38)));
    Heap_Free(r4);
}



void ov71_0224A98C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r2, [r4]
    // add r5, r0, #0
    // cmp r2, #3
    // bhs _0224A9BA
    // lsl r3, r2, #2
    // ldr r2, _0224A9C0 ; =ov71_0224BEF0
    // add r1, r5, #4
    // ldr r2, [r2, r3]
    // blx r2
    // cmp r0, #0
    // beq _0224A9B0
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // str r0, [r5, #4]
    // add r0, r5, #0
    // bl ov71_0224A9C4
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _0224A9C0: .word ov71_0224BEF0
    // TODO: decompile
}



void ov71_0224A9C4(void) {
    // ldrsh r1, [r4, r0]
    // add r0, r1, r0
    *((u16*)(r0 + 0x2a)) = (1 << 0xc);
    // add r1, #0x28
    ov71_022476EC(*((u32*)(r0 + 0x24)), r0);
    G3X_Reset();
    ov71_022474CC(*((u32*)(r4 + 0x20)));
    RequestSwap3DBuffers(0, 0);
}



void ov71_0224A9F8(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl ov71_0224AB7C
    // add r0, r4, #0
    // bl ov71_0224ADE4
    // mov r0, #8
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // ldr r3, _0224AA24 ; =0x00007FFF
    // mov r0, #0
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // mov r0, #1
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _0224AA24: .word 0x00007FFF
    // TODO: decompile
}



void ov71_0224AA28(void) {
    // add r2, r1, r1
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0224AA40: ; jump table
    IsPaletteFadeFinished(*((u32*)r1), (*((u16*)(r2 + 6)) << 0x10));
    *((u32*)(r4 + 8)) = 0;
    // add r4, #0x30
    ov71_0224AFD4(r4, r4);
    // str r0, [r5]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r4, #0x34
    ov71_0224AF08((*((u32*)r5) + 1), r4);
    // str r0, [r5]
    // str r0, [r5]
    // add r0, #0x14
    // mvn r1, r1
    ov71_02246C6C((r1 + 1), 0);
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r4 + 8)) = 0;
    // str r0, [r5]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x38
    // str r0, [sp]
    ov71_0224B084(*((u32*)(r4 + 0x24)), 0x1f, 0, 0x28);
    // str r0, [r5]
    ov71_02246D40(*((u32*)(r4 + 0x10)));
    // str r0, [r5]
}



void ov71_0224AAF8(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    // add r0, #0x1c
    // str r0, [sp, #8]
    ov71_02247000(*((u32*)(r0 + 0xc)), (1 << 0xc), (1 << 0xa), 1);
    *((u32*)(r5 + 0x18)) = r0;
    *((u32*)(r5 + 8)) = 0;
    // str r0, [r4]
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
}



void ov71_0224AB7C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r0, _0224AD94 ; =ov71_0224BF54
    // bl GfGfx_SetBanks
    // ldr r2, _0224AD98 ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // ldr r0, _0224AD9C ; =ov71_0224BEFC
    // bl SetBothScreensModesAndDisable
    // ldr r0, [r4, #0xc]
    // ldr r2, _0224ADA0 ; =ov71_0224BF1C
    // mov r1, #2
    // mov r3, #1
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0xc]
    // ldr r2, _0224ADA0 ; =ov71_0224BF1C
    // mov r1, #6
    // mov r3, #1
    // bl InitBgFromTemplate
    // bl OS_DisableInterrupts
    // add r5, r0, #0
    // ldr r0, [r4, #0xc]
    // ldr r2, _0224ADA4 ; =ov71_0224BF38
    // mov r1, #3
    // mov r3, #2
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0xc]
    // ldr r2, _0224ADA4 ; =ov71_0224BF38
    // mov r1, #7
    // mov r3, #2
    // bl InitBgFromTemplate
    // add r0, r5, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // mov r1, #2
    // ldr r2, [r4, #0xc]
    // mov r0, #0x59
    // add r3, r1, #0
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0xc]
    // mov r0, #0x59
    // mov r1, #2
    // mov r3, #6
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0xc]
    // mov r0, #0x59
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0xc]
    // mov r0, #0x59
    // mov r3, #6
    // bl GfGfxLoader_LoadScrnData
    // ldr r0, [r4]
    // bl ov71_022473A0
    // add r5, r0, #0
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x39
    // mov r2, #0
    // str r0, [sp, #4]
    // mov r0, #0x59
    // mov r1, #3
    // add r3, r2, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x39
    // str r0, [sp, #4]
    // mov r0, #0x59
    // mov r1, #3
    // mov r2, #4
    // mov r3, #0
    // bl GfGfxLoader_GXLoadPal
    // ldr r0, _0224ADA8 ; =ov71_0224BEE8
    // lsl r1, r5, #1
    // ldrh r5, [r0, r1]
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x40
    // str r0, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0x59
    // mov r1, #3
    // mov r2, #0
    // add r3, r5, #0
    // bl GfGfxLoader_GXLoadPalWithSrcOffset
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x40
    // str r0, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #0x59
    // mov r1, #3
    // mov r2, #4
    // add r3, r5, #0
    // bl GfGfxLoader_GXLoadPalWithSrcOffset
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0xc]
    // mov r0, #0x59
    // mov r1, #5
    // mov r3, #3
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0xc]
    // mov r0, #0x59
    // mov r1, #5
    // mov r3, #7
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0xc]
    // mov r0, #0x59
    // mov r1, #4
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0xc]
    // mov r0, #0x59
    // mov r1, #4
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0x39
    // mov r1, #0x60
    // bl Heap_Alloc
    // add r5, r0, #0
    // beq _0224AD52
    // mov r0, #0
    // add r1, r5, #0
    // mov r2, #0x60
    // bl MIi_CpuClear32
    // add r0, r5, #0
    // mov r1, #0x60
    // bl DC_FlushRange
    // bl GX_BeginLoadBGExtPltt
    // bl GXS_BeginLoadBGExtPltt
    // mov r1, #6
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // mov r2, #0x60
    // bl GX_LoadBGExtPltt
    // mov r1, #6
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // mov r2, #0x60
    // bl GXS_LoadBGExtPltt
    // bl GX_EndLoadBGExtPltt
    // bl GXS_EndLoadBGExtPltt
    // add r0, r5, #0
    // bl Heap_Free
    // ldr r0, [r4, #0xc]
    // ldr r3, _0224ADAC ; =0xFFFFFE80
    // mov r1, #2
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // mov r2, #3
    // add r3, r2, #0
    // ldr r0, [r4, #0xc]
    // mov r1, #6
    // sub r3, #0xc3
    // bl BgSetPosTextAndCommit
    // mov r1, #3
    // ldr r0, [r4, #0xc]
    // add r2, r1, #0
    // mov r3, #0x43
    // bl BgSetPosTextAndCommit
    // mov r0, #7
    // mov r1, #0
    // bl ToggleBgLayer
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0224AD94: .word ov71_0224BF54
    // _0224AD98: .word 0x04000304
    // _0224AD9C: .word ov71_0224BEFC
    // _0224ADA0: .word ov71_0224BF1C
    // _0224ADA4: .word ov71_0224BF38
    // _0224ADA8: .word ov71_0224BEE8
    // _0224ADAC: .word 0xFFFFFE80
    // TODO: decompile
}



void ov71_0224ADB0(void) {
    ov71_02246D54(*((u32*)(r0 + 0x10)));
    FreeBgTilemapBuffer(*((u32*)(r4 + 0xc)), 2);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0xc)), 6);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0xc)), 3);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0xc)), 7);
}



void ov71_0224ADE4(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // bl NNS_G3dInit
    // bl G3X_InitMtxStack
    // ldr r0, _0224AEC8 ; =0x04000060
    // ldr r1, _0224AECC ; =0xFFFFCFFD
    // ldrh r2, [r0]
    // and r2, r1
    // strh r2, [r0]
    // ldrh r3, [r0]
    // add r2, r1, #2
    // and r3, r2
    // mov r2, #0x10
    // orr r2, r3
    // strh r2, [r0]
    // ldrh r3, [r0]
    // ldr r2, _0224AED0 ; =0x0000CFFB
    // and r2, r3
    // strh r2, [r0]
    // add r2, r1, #2
    // ldrh r3, [r0]
    // add r1, r1, #2
    // and r3, r2
    // mov r2, #8
    // orr r2, r3
    // strh r2, [r0]
    // ldrh r2, [r0]
    // and r2, r1
    // mov r1, #0x20
    // orr r1, r2
    // strh r1, [r0]
    // ldr r0, _0224AED4 ; =ov71_0224BF0C
    // bl G3X_SetEdgeColorTable
    // mov r1, #0
    // ldr r0, _0224AED8 ; =0x000043FF
    // ldr r2, _0224AEDC ; =0x00007FFF
    // mov r3, #0x3f
    // str r1, [sp]
    // bl G3X_SetClearColor
    // ldr r1, _0224AEE0 ; =0x04000540
    // mov r0, #2
    // str r0, [r1]
    // ldr r0, _0224AEE4 ; =0xBFFF0000
    // str r0, [r1, #0x40]
    // mov r0, #1
    // add r1, r0, #0
    // bl GF_3DVramMan_InitFrameTexVramManager
    // mov r0, #1
    // lsl r0, r0, #0xe
    // mov r1, #1
    // bl GF_3DVramMan_InitFramePlttVramManager
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r1, _0224AEE8 ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // strh r2, [r1]
    // mov r1, #0
    // mov r0, #1
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov71_0224744C
    // str r0, [r4, #0x20]
    // mov r1, #0
    // mov r0, #0x23
    // str r1, [sp]
    // lsl r0, r0, #0xe
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x20]
    // mov r2, #0x59
    // mov r3, #0x1b
    // bl ov71_02247610
    // str r0, [r4, #0x24]
    // ldr r0, _0224AEEC ; =ov71_0224C0D0
    // mov r1, #0
    // strh r1, [r0]
    // strh r1, [r0, #2]
    // strh r1, [r0, #4]
    // ldr r0, [r4, #0x20]
    // ldr r1, _0224AEF0 ; =ov71_0224C0D0
    // bl ov71_0224780C
    // ldr r0, [r4, #0x20]
    // mov r1, #1
    // bl ov71_0224782C
    // mov r1, #2
    // ldr r0, [r4, #0x24]
    // lsl r1, r1, #0xc
    // bl ov71_02247730
    // ldr r0, [r4, #0x24]
    // add r4, #0x28
    // add r1, r4, #0
    // bl ov71_022476D4
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _0224AEC8: .word 0x04000060
    // _0224AECC: .word 0xFFFFCFFD
    // _0224AED0: .word 0x0000CFFB
    // _0224AED4: .word ov71_0224BF0C
    // _0224AED8: .word 0x000043FF
    // _0224AEDC: .word 0x00007FFF
    // _0224AEE0: .word 0x04000540
    // _0224AEE4: .word 0xBFFF0000
    // _0224AEE8: .word 0x04000008
    // _0224AEEC: .word ov71_0224C0D0
    // _0224AEF0: .word ov71_0224C0D0
    // TODO: decompile
}



void ov71_0224AEF4(void) {
}



void ov71_0224AF08(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // mov r0, #0x39
    // mov r1, #0x24
    // bl Heap_Alloc
    // add r4, r0, #0
    // beq _0224AF48
    // str r6, [r4]
    // ldr r0, [r6, #0xc]
    // add r1, r4, #0
    // str r0, [r4, #4]
    // ldr r0, _0224AF4C ; =0xFFE80000
    // mov r2, #0
    // str r0, [r4, #0xc]
    // asr r0, r0, #1
    // str r0, [r4, #0x10]
    // ldr r0, _0224AF50 ; =0x00009999
    // str r0, [r4, #0x14]
    // mov r0, #0x28
    // str r0, [r4, #8]
    // ldr r0, _0224AF54 ; =ov71_0224AF58
    // str r5, [r4, #0x1c]
    // bl SysTask_CreateOnVBlankQueue
    // str r0, [r5]
    // cmp r0, #0
    // bne _0224AF48
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // nop
    // _0224AF4C: .word 0xFFE80000
    // _0224AF50: .word 0x00009999
    // _0224AF54: .word ov71_0224AF58
    // TODO: decompile
}



void ov71_0224AF58(void) {
    // add r0, r1, r0
    *((u32*)(r1 + 0xc)) = *((u32*)(r1 + 0x14));
    // add r0, r1, r0
    *((u32*)(r1 + 0x10)) = *((u32*)(r1 + 0x14));
    // asr r3, r3, #0xc
    BgSetPosTextAndCommit(*((u32*)(r1 + 4)), 2, 3, *((u32*)(r1 + 0xc)));
    // asr r3, r3, #0xc
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 6, 3, *((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) - 1);
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 2, 3, 0);
    BgSetPosTextAndCommit(*((u32*)(r4 + 4)), 6, 3, 0xc0);
    ov71_0224AFB8(r5);
}



void ov71_0224AFB8(void) {
    SysTask_GetData();
    // str r2, [r1]
    ov71_02247424(*((u32*)(r0 + 0x1c)), 0);
    SysTask_Destroy(r4);
}



void ov71_0224AFD4(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // mov r0, #0x39
    // mov r1, #0x1c
    // bl Heap_Alloc
    // add r4, r0, #0
    // beq _0224B020
    // str r5, [r4]
    // ldr r0, [r6, #0x24]
    // add r1, r4, #0
    // str r0, [r4, #8]
    // add r1, #0xc
    // bl ov71_022476B4
    // mov r0, #0x32
    // ldr r1, [r4, #0x10]
    // lsl r0, r0, #0xc
    // sub r1, r0, r1
    // asr r0, r1, #3
    // lsr r0, r0, #0x1c
    // add r0, r1, r0
    // asr r0, r0, #4
    // str r0, [r4, #0x18]
    // mov r0, #0x10
    // str r0, [r4, #4]
    // ldr r0, _0224B024 ; =ov71_0224B028
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5]
    // cmp r0, #0
    // bne _0224B020
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // nop
    // _0224B024: .word ov71_0224B028
    // TODO: decompile
}



void ov71_0224B028(void) {
    // add r0, r1, r0
    *((u32*)(r1 + 0x10)) = *((u32*)(r1 + 0x18));
    // add r1, #0xc
    ov71_022476C4(*((u32*)(r1 + 8)), r1);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
    *((u32*)(r4 + 0x10)) = (0x32 << 0xc);
    // add r4, #0xc
    ov71_022476C4(*((u32*)(r4 + 8)), r4);
    ov71_0224B068(r5);
}



void ov71_0224B068(void) {
    SysTask_GetData();
    // str r2, [r1]
    Heap_Free(*((u32*)r0), 0);
    SysTask_Destroy(r4);
}



void ov71_0224B084(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r0, [sp]
    // add r6, r1, #0
    // mov r0, #0x39
    // mov r1, #0x18
    // str r2, [sp, #4]
    // add r7, r3, #0
    // ldr r5, [sp, #0x20]
    // bl Heap_Alloc
    // add r4, r0, #0
    // beq _0224B0DC
    // str r5, [r4]
    // lsl r0, r6, #0xc
    // str r0, [r4, #4]
    // ldr r0, [sp, #4]
    // lsl r1, r0, #0xc
    // str r1, [r4, #0xc]
    // ldr r0, [r4, #4]
    // sub r0, r1, r0
    // add r1, r7, #0
    // bl _s32_div_f
    // str r0, [r4, #8]
    // ldr r0, [sp]
    // str r7, [r4, #0x10]
    // add r1, r6, #0
    // str r0, [r4, #0x14]
    // bl ov71_02247708
    // ldr r0, _0224B0E4 ; =ov71_0224B0E8
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5]
    // cmp r0, #0
    // bne _0224B0E0
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [r5]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224B0E4: .word ov71_0224B0E8
    // TODO: decompile
}



void ov71_0224B0E8(void) {
    *((u32*)(r1 + 0x10)) = (*((u32*)(r1 + 0x10)) - 1);
    // add r2, r2, r0
    *((u32*)(r1 + 4)) = *((u32*)(r1 + 4));
    // asr r1, r2, #0xc
    ov71_02247708(*((u32*)(r1 + 0x14)), *((u32*)(r1 + 4)));
    // asr r1, r1, #0xc
    ov71_02247708(*((u32*)(r1 + 0x14)), *((u32*)(r1 + 0xc)));
    ov71_0224B11C(r4);
}



void ov71_0224B11C(void) {
    SysTask_GetData();
    // str r2, [r1]
    Heap_Free(*((u32*)r0), 0);
    SysTask_Destroy(r4);
}



void ov71_0224B138(void) {
    Heap_Alloc(0x39, 0x88);
    // str r5, [r4]
    *((u32*)(r0 + 4)) = 0;
    ov71_02247384(r5);
    *((u32*)(r4 + 0x58)) = r0;
    PokepicManager_Create(0x39);
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r4 + 0x14)) = 0;
    String_New((0x4b << 2), 0x39);
    *((u32*)(r4 + 0x6c)) = r0;
    String_New((0x4b << 2), 0x39);
    *((u32*)(r4 + 0x70)) = r0;
    *((u32*)(r4 + 0x7c)) = 0;
    // add r0, #0x80
    // str r1, [r0]
    *((u32*)(r4 + 0x74)) = 0;
    NARC_New(0xb4, 0x39);
    // add r1, #0x84
    // str r0, [r1]
}



void ov71_0224B198(void) {
    ov71_0224B970();
    ov71_0224B8EC(r4);
    // add r0, #0x80
    ov71_0224BA48(*((u32*)r4));
    String_Delete(*((u32*)(r4 + 0x6c)));
    String_Delete(*((u32*)(r4 + 0x70)));
    ov71_02247498(*((u32*)(r4 + 0x74)));
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x58)), 1);
    // add r0, #0x5c
    RemoveWindow(r4);
    Pokepic_Delete(*((u32*)(r4 + 0x14)));
    // add r0, #0x84
    NARC_Delete(*((u32*)r4));
    PokepicManager_Delete(*((u32*)(r4 + 0x10)));
    Heap_Free(r4);
}



void ov71_0224B1FC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r2, [r4]
    // add r5, r0, #0
    // cmp r2, #4
    // bhs _0224B22A
    // lsl r3, r2, #2
    // ldr r2, _0224B230 ; =ov71_0224BF84
    // add r1, r5, #4
    // ldr r2, [r2, r3]
    // blx r2
    // cmp r0, #0
    // beq _0224B220
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // str r0, [r5, #4]
    // add r0, r5, #0
    // bl ov71_0224B234
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _0224B230: .word ov71_0224BF84
    // TODO: decompile
}



void ov71_0224B234(void) {
    G3X_Reset();
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    NNS_G3dGeFlushBuffer();
    NNS_G2dSetupSoftwareSpriteCamera();
    PokepicManager_HandleLoadImgAndOrPltt(*((u32*)(r4 + 0x10)));
    PokepicManager_DrawAll(*((u32*)(r4 + 0x10)));
    // str r2, [sp]
    // add r1, sp, #0
    NNS_G3dGeBufferOP_N(0x12, 1);
    ov71_022474CC(*((u32*)(r4 + 0x74)));
    RequestSwap3DBuffers(0, 0);
}



void ov71_0224B280(void) {
    // push {r3, r4, lr}
    // sub sp, #0x1c
    // add r4, r0, #0
    // ldr r0, _0224B430 ; =ov71_0224BFDC
    // bl GfGfx_SetBanks
    // ldr r2, _0224B434 ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // ldr r0, _0224B438 ; =ov71_0224BF94
    // bl SetBothScreensModesAndDisable
    // ldr r0, [r4, #0x58]
    // ldr r2, _0224B43C ; =ov71_0224BFA4
    // mov r1, #1
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x58]
    // ldr r2, _0224B440 ; =ov71_0224BFC0
    // mov r1, #2
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r2, _0224B444 ; =0x04000008
    // mov r0, #3
    // ldrh r3, [r2]
    // mov r1, #1
    // bic r3, r0
    // add r0, r3, #0
    // orr r0, r1
    // strh r0, [r2]
    // mov r2, #0
    // str r2, [sp]
    // ldr r0, [r4, #0x58]
    // add r3, r1, #0
    // bl BG_FillCharDataRange
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // add r3, r2, #0
    // bl FillBgTilemapRect
    // ldr r0, [r4]
    // bl ov71_022473D0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x39
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // mov r2, #0x6d
    // mov r3, #2
    // bl LoadUserFrameGfx2
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // add r1, r4, #0
    // str r0, [sp, #8]
    // mov r2, #1
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // ldr r0, [r4, #0x58]
    // add r1, #0x5c
    // mov r3, #2
    // bl AddWindowParameterized
    // add r0, r4, #0
    // add r0, #0x5c
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r3, #0x20
    // str r3, [sp]
    // mov r0, #0x39
    // str r0, [sp, #4]
    // mov r0, #0x10
    // mov r1, #8
    // mov r2, #0
    // bl GfGfxLoader_GXLoadPal
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // bl BgCommitTilemapBufferToVram
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x58]
    // mov r0, #0x59
    // mov r1, #0x16
    // mov r3, #2
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x39
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x58]
    // mov r0, #0x59
    // mov r1, #0x15
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x39
    // mov r2, #0
    // str r0, [sp, #4]
    // mov r0, #0x59
    // mov r1, #0x17
    // add r3, r2, #0
    // bl GfGfxLoader_GXLoadPal
    // add r0, r4, #0
    // bl ov71_0224B720
    // mov r1, #0
    // mov r0, #1
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov71_0224744C
    // str r0, [r4, #0x74]
    // add r0, r4, #0
    // bl ov71_0224B7EC
    // mov r1, #6
    // mov r2, #1
    // str r0, [r4, #0x14]
    // bl Pokepic_SetAttr
    // mov r1, #0
    // mov r0, #0x13
    // str r1, [sp]
    // lsl r0, r0, #0xc
    // str r0, [sp, #4]
    // mov r0, #0x1e
    // lsl r0, r0, #0xe
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, [r4, #0x74]
    // mov r2, #0x59
    // mov r3, #0x1b
    // bl ov71_02247610
    // ldr r2, _0224B448 ; =ov71_0224BF7C
    // str r0, [r4, #0x78]
    // ldrh r3, [r2]
    // add r0, sp, #0x14
    // add r1, sp, #0x14
    // strh r3, [r0]
    // ldrh r3, [r2, #2]
    // ldrh r2, [r2, #4]
    // strh r3, [r0, #2]
    // strh r2, [r0, #4]
    // ldr r0, [r4, #0x78]
    // bl ov71_022476EC
    // add r0, r4, #0
    // bl ov71_0224B848
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0224B44C ; =0x04000050
    // mov r1, #1
    // mov r2, #4
    // mov r3, #0x10
    // bl G2x_SetBlendAlpha_
    // mov r0, #0x10
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #3
    // add r2, r1, #0
    // mov r3, #0
    // bl BeginNormalPaletteFade
    // mov r0, #1
    // add sp, #0x1c
    // pop {r3, r4, pc}
    // _0224B430: .word ov71_0224BFDC
    // _0224B434: .word 0x04000304
    // _0224B438: .word ov71_0224BF94
    // _0224B43C: .word ov71_0224BFA4
    // _0224B440: .word ov71_0224BFC0
    // _0224B444: .word 0x04000008
    // _0224B448: .word ov71_0224BF7C
    // _0224B44C: .word 0x04000050
    // TODO: decompile
}



void ov71_0224B450(void) {
    IsPaletteFadeFinished(*((u32*)r1));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x40)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x40)), 1);
}



void ov71_0224B47C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224B496: ; jump table
    // add r1, #0x80
    ov71_0224B9CC(r0);
    // str r0, [r5]
    // add r0, #0x80
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x44)), 2);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x44)), 1);
    ov71_02247704(*((u32*)(r4 + 0x78)), 0);
    *((u32*)(r4 + 8)) = 0;
    // str r0, [r5]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    Pokepic_SetAttr(*((u32*)(r4 + 0x14)), 6, 0);
    ov71_0224B910(r4, 0x10, 0, 0xc);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov71_0224B960((*((u32*)(r4 + 4)) + 1));
    ov71_02247398(*((u32*)r4));
    GetBoxMonData(0x4c, 0);
    ov71_022473BC(*((u32*)r4));
    // add r0, #0x84
    // add r1, sp, #0
    sub_020729A4(*((u32*)r4), r0, 1);
    ov71_022473BC(*((u32*)r4));
    ov71_022473C4(*((u32*)r4));
    // add r1, sp, #0
    // ldrb r1, [r1]
    sub_020062E0(r6, ((r0 << 0x18) >> 0x18));
    Pokepic_StartAnim(*((u32*)(r4 + 0x14)), 1);
    *((u32*)(r4 + 8)) = 0;
    // str r0, [r5]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
}



void ov71_0224B57C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // ldr r1, [r5]
    // add r4, r0, #0
    // cmp r1, #5
    // bhi _0224B5B8
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224B596: ; jump table
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224B6E6
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // cmp r0, #0xa
    // bgt _0224B5BA
    // b _0224B6E6
    // ldr r0, [r4]
    // bl ov71_0224738C
    // str r0, [sp, #0xc]
    // ldr r0, [r4]
    // bl ov71_02247388
    // add r7, r0, #0
    // ldr r0, [r4]
    // bl ov71_022473DC
    // cmp r0, #1
    // bne _0224B5DA
    // mov r1, #2
    // add r6, r1, #0
    // b _0224B5DE
    // mov r1, #5
    // mov r6, #3
    // ldr r0, [sp, #0xc]
    // ldr r2, [r4, #0x6c]
    // bl ReadMsgDataIntoString
    // ldr r1, [r4, #0x70]
    // ldr r2, [r4, #0x6c]
    // add r0, r7, #0
    // bl StringExpandPlaceholders
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r4, #0
    // ldr r2, [r4, #0x70]
    // add r0, #0x5c
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // add r0, r4, #0
    // add r0, #0x5c
    // mov r1, #0x6d
    // mov r2, #2
    // bl sub_0200E948
    // add r0, r4, #0
    // add r0, #0x5c
    // bl CopyWindowToVram
    // ldr r0, _0224B6EC ; =0x000004A4
    // bl PlayFanfare
    // mov r0, #0
    // str r0, [r4, #8]
    // mov r0, #1
    // str r0, [r4, #0xc]
    // str r6, [r5]
    // b _0224B6E6
    // mov r1, #0x3c
    // bl ov71_0224B6F0
    // cmp r0, #0
    // beq _0224B6E6
    // ldr r0, [r4]
    // bl ov71_0224738C
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl ov71_02247388
    // add r7, r0, #0
    // ldr r2, [r4, #0x6c]
    // add r0, r6, #0
    // mov r1, #3
    // bl ReadMsgDataIntoString
    // ldr r1, [r4, #0x70]
    // ldr r2, [r4, #0x6c]
    // add r0, r7, #0
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // add r0, #0x5c
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r4, #0
    // ldr r2, [r4, #0x70]
    // add r0, #0x5c
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // add r0, r4, #0
    // add r0, #0x5c
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224B6E6
    // mov r1, #0x3c
    // bl ov71_0224B6F0
    // cmp r0, #0
    // beq _0224B6E6
    // add r0, r4, #0
    // add r0, #0x5c
    // mov r1, #0
    // bl ClearFrameAndWindow2
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224B6E6
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // cmp r0, #0xa
    // ble _0224B6E6
    // mov r0, #0x10
    // str r0, [sp]
    // mov r1, #0
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x39
    // str r0, [sp, #8]
    // mov r0, #3
    // add r2, r1, #0
    // add r3, r1, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224B6E6
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0224B6E6
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224B6EC: .word 0x000004A4
    // TODO: decompile
}



void ov71_0224B6F0(void) {
    IsFanfarePlaying(*((u32*)(r0 + 0xc)));
    *((u32*)(r5 + 0xc)) = r0;
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
}



void ov71_0224B720(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // bl NNS_G3dInit
    // bl G3X_InitMtxStack
    // ldr r0, _0224B7C8 ; =0x04000060
    // ldr r2, _0224B7CC ; =0xFFFFCFFD
    // ldrh r1, [r0]
    // and r1, r2
    // strh r1, [r0]
    // ldrh r3, [r0]
    // add r1, r2, #2
    // and r3, r1
    // mov r1, #0x10
    // orr r1, r3
    // strh r1, [r0]
    // ldrh r3, [r0]
    // ldr r1, _0224B7D0 ; =0x0000CFFB
    // and r1, r3
    // strh r1, [r0]
    // add r1, r2, #2
    // ldrh r3, [r0]
    // lsr r2, r2, #0x11
    // and r3, r1
    // mov r1, #8
    // orr r1, r3
    // strh r1, [r0]
    // mov r0, #0
    // add r1, r0, #0
    // mov r3, #0x3f
    // str r0, [sp]
    // bl G3X_SetClearColor
    // ldr r1, _0224B7D4 ; =0x04000540
    // mov r0, #2
    // str r0, [r1]
    // ldr r0, _0224B7D8 ; =0xBFFF0000
    // str r0, [r1, #0x40]
    // mov r0, #1
    // add r1, r0, #0
    // bl GF_3DVramMan_InitFrameTexVramManager
    // mov r0, #1
    // lsl r0, r0, #0xe
    // mov r1, #1
    // bl GF_3DVramMan_InitFramePlttVramManager
    // ldr r3, _0224B7DC ; =NNS_GfdDefaultFuncAllocTexVram
    // mov r0, #1
    // mov r1, #0
    // ldr r3, [r3]
    // lsl r0, r0, #0xe
    // add r2, r1, #0
    // blx r3
    // ldr r3, _0224B7E0 ; =NNS_GfdDefaultFuncAllocPlttVram
    // add r4, r0, #0
    // ldr r3, [r3]
    // mov r0, #0x80
    // mov r1, #0
    // mov r2, #1
    // blx r3
    // ldr r2, _0224B7E4 ; =0x7FFF0000
    // add r6, r0, #0
    // and r2, r4
    // lsl r1, r4, #0x10
    // lsr r2, r2, #0x10
    // ldr r0, [r5, #0x10]
    // lsr r1, r1, #0xd
    // lsl r2, r2, #4
    // bl PokepicManager_SetCharBaseAddrAndSize
    // ldr r2, _0224B7E8 ; =0xFFFF0000
    // lsl r1, r6, #0x10
    // and r2, r6
    // lsr r2, r2, #0x10
    // ldr r0, [r5, #0x10]
    // lsr r1, r1, #0xd
    // lsl r2, r2, #3
    // bl PokepicManager_SetPlttBaseAddrAndSize
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _0224B7C8: .word 0x04000060
    // _0224B7CC: .word 0xFFFFCFFD
    // _0224B7D0: .word 0x0000CFFB
    // _0224B7D4: .word 0x04000540
    // _0224B7D8: .word 0xBFFF0000
    // _0224B7DC: .word NNS_GfdDefaultFuncAllocTexVram
    // _0224B7E0: .word NNS_GfdDefaultFuncAllocPlttVram
    // _0224B7E4: .word 0x7FFF0000
    // _0224B7E8: .word 0xFFFF0000
    // TODO: decompile
}



void ov71_0224B7EC(void) {
    ov71_02247398(*((u32*)r0));
    // add r0, sp, #0x10
    GetBoxmonSpriteCharAndPlttNarcIds(r0, 2, 0);
    ov71_022473BC(*((u32*)r5));
    // add r0, #0x84
    // add r1, #0x18
    NARC_ReadPokepicAnimScript(*((u32*)r5), r5, r0, 1);
    sub_02070854(r4, 2, 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x18
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, #0x50
    // add r1, sp, #0x10
    PokepicManager_CreatePokepic(*((u32*)(r5 + 0x10)), 0, 0x80, r0);
}



void ov71_0224B848(void) {
    // add r0, #0x48
    ov71_022472C4(0x59, 7, 8);
    // add r0, sp, #0x5c
    NNS_G2dInitImagePaletteProxy();
    // add r0, sp, #0x38
    NNS_G2dInitImageProxy();
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x38
    // str r0, [sp, #0x10]
    GfGfxLoader_LoadImageMapping(0x59, 9, 1, 0);
    // str r0, [sp]
    // add r0, sp, #0x5c
    // str r0, [sp, #4]
    GfGfxLoader_PartiallyLoadPalette(0x59, 0xa, 1, 0);
    // str r0, [sp]
    // add r0, sp, #0x14
    // add r1, #0x48
    // add r2, sp, #0x38
    // add r3, sp, #0x5c
    ov71_02247320(2, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x14
    ov71_02247340(*((u32*)r4), 0x80, 0x64);
    *((u32*)(r4 + 0x40)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x14
    ov71_02247340(*((u32*)r4), 0x80, 0x5a);
    *((u32*)(r4 + 0x44)) = r0;
    Sprite_SetPriority(1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x40)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x44)), 0);
}



void ov71_0224B8EC(void) {
    Sprite_Delete(*((u32*)(r0 + 0x40)));
    // add r6, #0x48
    ov71_022472FC(r6);
}



void ov71_0224B910(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #0x39
    // mov r1, #0x14
    // str r2, [sp]
    // add r7, r3, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // beq _0224B956
    // str r5, [r4]
    // lsl r0, r6, #0xc
    // str r0, [r4, #4]
    // ldr r0, [sp]
    // lsl r1, r0, #0xc
    // str r1, [r4, #8]
    // ldr r0, [r4, #4]
    // sub r0, r1, r0
    // add r1, r7, #0
    // bl _s32_div_f
    // str r0, [r4, #0xc]
    // ldr r0, _0224B958 ; =ov71_0224B990
    // str r7, [r4, #0x10]
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnVBlankQueue
    // str r0, [r5, #0x7c]
    // ldr r0, _0224B95C ; =0x04000050
    // mov r1, #1
    // add r2, r6, #0
    // bl G2x_SetBlendBrightness_
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224B958: .word ov71_0224B990
    // _0224B95C: .word 0x04000050
    // TODO: decompile
}



void ov71_0224B960(void) {
    // ldr r0, [r0, #0x7c]
    // cmp r0, #0
    // bne _0224B96A
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov71_0224B970(void) {
    SysTask_GetData(*((u32*)(r0 + 0x7c)));
    ov71_02247424();
    SysTask_Destroy(*((u32*)(r4 + 0x7c)));
    *((u32*)(r4 + 0x7c)) = 0;
}



void ov71_0224B990(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #0x10]
    // sub r0, r0, #1
    // str r0, [r4, #0x10]
    // cmp r0, #0
    // ble _0224B9B2
    // ldr r1, [r4, #4]
    // ldr r0, [r4, #0xc]
    // add r2, r1, r0
    // str r2, [r4, #4]
    // ldr r0, _0224B9C8 ; =0x04000050
    // mov r1, #1
    // asr r2, r2, #0xc
    // bl G2x_SetBlendBrightness_
    // pop {r4, pc}
    // ldr r2, [r4, #8]
    // ldr r0, _0224B9C8 ; =0x04000050
    // mov r1, #1
    // asr r2, r2, #0xc
    // bl G2x_SetBlendBrightness_
    // ldr r0, [r4]
    // bl ov71_0224B970
    // pop {r4, pc}
    // nop
    // _0224B9C8: .word 0x04000050
    // TODO: decompile
}



void ov71_0224B9CC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #0x39
    // mov r1, #0x44
    // bl Heap_Alloc
    // add r4, r0, #0
    // beq _0224BA3A
    // mov r1, #0
    // str r1, [r4, #4]
    // str r6, [r4]
    // ldr r0, [r5, #0x74]
    // str r0, [r4, #0x10]
    // ldr r0, [r5, #0x78]
    // str r0, [r4, #0x14]
    // str r5, [r4, #8]
    // ldr r0, _0224BA40 ; =0x000018CC
    // str r1, [r4, #0x18]
    // str r0, [r4, #0x1c]
    // mov r0, #0x14
    // str r0, [r4, #0x20]
    // mov r0, #1
    // lsl r0, r0, #0xc
    // strh r0, [r4, #0x3a]
    // str r1, [r4, #0x40]
    // ldr r0, [r4, #0x14]
    // bl ov71_02247708
    // ldr r0, [r4, #0x14]
    // mov r1, #1
    // bl ov71_02247704
    // add r1, r4, #0
    // ldr r0, [r4, #0x14]
    // add r1, #0x24
    // bl ov71_022476B4
    // add r1, r4, #0
    // ldr r0, [r4, #0x14]
    // add r1, #0x34
    // bl ov71_022476D4
    // ldr r0, _0224BA44 ; =ov71_0224BABC
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r6]
    // cmp r0, #0
    // bne _0224BA3E
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // str r0, [r6]
    // pop {r4, r5, r6, pc}
    // _0224BA40: .word 0x000018CC
    // _0224BA44: .word ov71_0224BABC
    // TODO: decompile
}



void ov71_0224BA48(void) {
    SysTask_GetData();
    // str r2, [r1]
    Heap_Free(*((u32*)r0), 0);
    SysTask_Destroy(r4);
}



void ov71_0224BA64(void) {
    // add r1, r0, #0
    // ldr r0, [r1, #0x40]
    // cmp r0, #0
    // beq _0224BA86
    // mov r0, #0x3a
    // ldrsh r2, [r1, r0]
    // mov r0, #0x3c
    // ldrsh r0, [r1, r0]
    // add r0, r2, r0
    // strh r0, [r1, #0x3a]
    // ldr r0, [r1, #0x40]
    // sub r0, r0, #1
    // str r0, [r1, #0x40]
    // bne _0224BA86
    // mov r0, #0x3e
    // ldrsh r0, [r1, r0]
    // strh r0, [r1, #0x3a]
    // mov r0, #0x36
    // ldrsh r2, [r1, r0]
    // mov r0, #0x3a
    // ldrsh r0, [r1, r0]
    // ldr r3, _0224BA9C ; =ov71_022476EC
    // add r0, r2, r0
    // strh r0, [r1, #0x36]
    // ldr r0, [r1, #0x14]
    // add r1, #0x34
    // bx r3
    // nop
    // _0224BA9C: .word ov71_022476EC
    // TODO: decompile
}



void ov71_0224BAA0(void) {
}



void ov71_0224BABC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov71_0224BA64
    // ldr r0, [r4, #4]
    // cmp r0, #5
    // bhi _0224BBCA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224BADA: ; jump table
    // ldr r0, [r4, #0x20]
    // cmp r0, #0
    // beq _0224BB06
    // ldr r1, [r4, #0x18]
    // ldr r0, [r4, #0x1c]
    // add r0, r1, r0
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #0x20]
    // sub r0, r0, #1
    // str r0, [r4, #0x20]
    // ldr r1, [r4, #0x18]
    // ldr r0, [r4, #0x14]
    // asr r1, r1, #0xc
    // bl ov71_02247708
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x14]
    // mov r1, #0x1f
    // bl ov71_02247708
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // pop {r3, r4, r5, pc}
    // mov r1, #6
    // add r0, r4, #0
    // lsl r1, r1, #6
    // mov r2, #0x1e
    // bl ov71_0224BAA0
    // mov r0, #0
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // cmp r0, #0xa
    // ble _0224BBCA
    // mov r0, #0
    // str r0, [r4, #0x30]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // pop {r3, r4, r5, pc}
    // ldr r1, [r4, #0x28]
    // ldr r0, [r4, #0x30]
    // add r0, r1, r0
    // str r0, [r4, #0x28]
    // mov r0, #0x1e
    // ldr r1, [r4, #0x30]
    // lsl r0, r0, #6
    // sub r0, r1, r0
    // str r0, [r4, #0x30]
    // add r1, r4, #0
    // ldr r0, [r4, #0x14]
    // add r1, #0x24
    // bl ov71_022476C4
    // ldr r1, [r4, #0x28]
    // ldr r0, _0224BBCC ; =0xFFFF5000
    // cmp r1, r0
    // bge _0224BBCA
    // ldr r0, _0224BBD0 ; =0x000005E6
    // bl PlaySE
    // mov r0, #0
    // ldr r1, [r4, #0x30]
    // mvn r0, r0
    // mul r0, r1
    // str r0, [r4, #0x30]
    // ldr r0, [r4, #8]
    // mov r1, #0
    // mov r2, #0x10
    // mov r3, #8
    // bl ov71_0224B910
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // pop {r3, r4, r5, pc}
    // ldr r1, [r4, #0x28]
    // ldr r0, [r4, #0x30]
    // add r1, r1, r0
    // mov r0, #0x13
    // lsl r0, r0, #0xc
    // str r1, [r4, #0x28]
    // cmp r1, r0
    // blt _0224BB9E
    // str r0, [r4, #0x28]
    // add r1, r4, #0
    // ldr r0, [r4, #0x14]
    // add r1, #0x24
    // bl ov71_022476C4
    // mov r0, #0x13
    // ldr r1, [r4, #0x28]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // bne _0224BBCA
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #8]
    // bl ov71_0224B960
    // cmp r0, #0
    // beq _0224BBCA
    // add r0, r5, #0
    // bl ov71_0224BA48
    // pop {r3, r4, r5, pc}
    // _0224BBCC: .word 0xFFFF5000
    // _0224BBD0: .word 0x000005E6
    // TODO: decompile
}


