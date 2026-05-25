/* Decompiled from asm/unk_020850F4.s */
#include "global.h"

void sub_020850F4(void) {
    // push {r3, r4, r5, lr}
    // mov r2, #1
    // add r5, r0, #0
    // mov r0, #3
    // mov r1, #0x6c
    // lsl r2, r2, #0x12
    // bl Heap_Create
    // mov r1, #0xfd
    // add r0, r5, #0
    // lsl r1, r1, #2
    // mov r2, #0x6c
    // bl OverlayManager_CreateAndGetData
    // mov r2, #0xfd
    // mov r1, #0
    // lsl r2, r2, #2
    // add r4, r0, #0
    // bl memset
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // add r5, r0, #0
    // mov r0, #0xee
    // lsl r0, r0, #2
    // add r3, r4, r0
    // mov r2, #6
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0208512C
    // ldr r0, [r5]
    // str r0, [r3]
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _02085238 ; =0xFFFFE0FF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _0208523C ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // mov r0, #0xbe
    // mov r1, #0x6c
    // bl NARC_New
    // mov r1, #0xbb
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0x6c
    // bl BgConfig_Alloc
    // mov r1, #0xbe
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0x6c
    // bl PaletteData_Init
    // mov r1, #0xbf
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #1
    // bl PaletteData_SetAutoTransparent
    // mov r2, #0xbf
    // lsl r2, r2, #2
    // ldr r0, [r4, r2]
    // mov r1, #0
    // sub r2, #0xfc
    // mov r3, #0x6c
    // bl PaletteData_AllocBuffers
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // mov r1, #1
    // ldr r0, [r4, r0]
    // lsl r2, r1, #9
    // mov r3, #0x6c
    // bl PaletteData_AllocBuffers
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // mov r1, #2
    // ldr r0, [r4, r0]
    // lsl r2, r1, #8
    // mov r3, #0x6c
    // bl PaletteData_AllocBuffers
    // mov r2, #0xbf
    // lsl r2, r2, #2
    // ldr r0, [r4, r2]
    // mov r1, #3
    // sub r2, #0xfc
    // mov r3, #0x6c
    // bl PaletteData_AllocBuffers
    // mov r0, #0xbe
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl sub_0208545C
    // add r0, r4, #0
    // bl sub_020863F4
    // add r0, r4, #0
    // bl sub_02085688
    // bl sub_020210BC
    // mov r0, #4
    // bl sub_02021148
    // add r0, r4, #0
    // bl sub_020860B8
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0208520A
    // bl sub_0203A880
    // mov r0, #1
    // mov r1, #0x6c
    // bl sub_0203A948
    // mov r0, #7
    // str r0, [sp]
    // ldr r0, _02085240 ; =0x04000050
    // mov r1, #0
    // mov r2, #6
    // mov r3, #0xf
    // bl G2x_SetBlendAlpha_
    // mov r0, #8
    // str r0, [sp]
    // ldr r0, _02085244 ; =0x04001050
    // mov r1, #0
    // mov r2, #0xe
    // mov r3, #7
    // bl G2x_SetBlendAlpha_
    // ldr r0, _02085248 ; =sub_020855CC
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _02085238: .word 0xFFFFE0FF
    // _0208523C: .word 0x04001000
    // _02085240: .word 0x04000050
    // _02085244: .word 0x04001050
    // _02085248: .word sub_020855CC
    // TODO: decompile
}



u32 sub_0208524C(void) {
    OverlayManager_GetData();
    sub_02085BEC();
    // ldr r0, [r4, r0]
    ov00_021EC9D4((0xfa << 2));
    // sub r0, r1, r0
    sub_0203A930(3);
}



u32 sub_0208527C(void) {
    OverlayManager_GetData();
    // ldr r0, [r4, r0]
    sub_0203A914((0xfa << 2));
    sub_020866CC(r4);
    GfGfx_EngineATogglePlanes(1, 0);
    GfGfx_EngineATogglePlanes(2, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(8, 0);
    GfGfx_EngineBTogglePlanes(1, 0);
    GfGfx_EngineBTogglePlanes(2, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(8, 0);
    // ldr r0, [r4, r0]
    FreeBgTilemapBuffer((0xbe << 2), 1);
    // ldr r0, [r4, r0]
    FreeBgTilemapBuffer((0xbe << 2), 2);
    // ldr r0, [r4, r0]
    FreeBgTilemapBuffer((0xbe << 2), 3);
    // ldr r0, [r4, r0]
    FreeBgTilemapBuffer((0xbe << 2), 4);
    // ldr r0, [r4, r0]
    FreeBgTilemapBuffer((0xbe << 2), 5);
    // ldr r0, [r4, r0]
    FreeBgTilemapBuffer((0xbe << 2), 6);
    // ldr r0, [r4, r0]
    FreeBgTilemapBuffer((0xbe << 2), 7);
    // ldr r0, [r4, r0]
    Heap_Free((0xbe << 2));
    // ldr r0, [r4, r0]
    PaletteData_FreeBuffers((0xbf << 2), 0);
    // ldr r0, [r4, r0]
    PaletteData_FreeBuffers((0xbf << 2), 1);
    // ldr r0, [r4, r0]
    PaletteData_FreeBuffers((0xbf << 2), 2);
    // ldr r0, [r4, r0]
    PaletteData_FreeBuffers((0xbf << 2), 3);
    // ldr r0, [r4, r0]
    PaletteData_Free((0xbf << 2));
    // ldr r0, [r4, r0]
    NARC_Delete((0xbb << 2));
    sub_02021238();
    // ldr r0, [r4, r1]
    // ldr r1, [r4, r1]
    SpriteSystem_FreeResourcesAndManager(((0x2f << 4) + 4));
    // ldr r0, [r4, r0]
    SpriteSystem_Free((0x2f << 4));
    // ldr r0, [r4, r0]
    TouchHitboxController_Destroy((3 << 8));
    OverlayManager_FreeData(r5);
    Heap_Destroy(0x6c);
}



void sub_020853B4(void) {
    // str r0, [sp]
    Heap_Alloc(0x34);
    // ldr r1, [sp]
    // str r6, [r4]
    String_New((r6 + 1));
    *((u32*)(r4 + 0x1c)) = r0;
    *((u32*)(r4 + 0x20)) = r7;
    *((u32*)(r4 + 4)) = *((u32*)r5);
    // ldr r1, [r5, r0]
    // add r0, r4, r0
    *((u32*)(((0 + 1) << 2) + 4)) = (r5 + 4);
    // ldr r0, [sp, #0x18]
    *((u32*)(r4 + 0x2c)) = ((0 + 1) << 2);
    // ldr r0, [sp, #0x1c]
    *((u32*)(r4 + 0x30)) = ((0 + 1) << 2);
}



void sub_02085400(void) {
}



void sub_0208541C(void) {
}



void sub_02085438(void) {
    GF_AssertFail(*((u32*)(r0 + 0x1c)));
    GF_AssertFail();
    String_Delete(*((u32*)(r4 + 0x1c)));
    Heap_Free(r4);
}



void sub_0208545C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xec
    // add r4, r0, #0
    // bl GfGfx_DisableEngineAPlanes
    // ldr r5, _020855BC ; =_02102630
    // add r3, sp, #0
    // mov r2, #5
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0208546C
    // add r0, sp, #0
    // bl GfGfx_SetBanks
    // mov r1, #6
    // mov r2, #2
    // mov r0, #0
    // lsl r1, r1, #0x18
    // lsl r2, r2, #0x12
    // bl MIi_CpuClear32
    // mov r1, #0x62
    // mov r2, #2
    // mov r0, #0
    // lsl r1, r1, #0x14
    // lsl r2, r2, #0x10
    // bl MIi_CpuClear32
    // mov r1, #0x19
    // mov r2, #1
    // mov r0, #0
    // lsl r1, r1, #0x16
    // lsl r2, r2, #0x12
    // bl MIi_CpuClear32
    // mov r1, #0x66
    // mov r2, #2
    // mov r0, #0
    // lsl r1, r1, #0x14
    // lsl r2, r2, #0x10
    // bl MIi_CpuClear32
    // ldr r5, _020855C0 ; =_02102658
    // add r3, sp, #0x98
    // mov r2, #0xa
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _020854B8
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // add r2, sp, #0x98
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #2
    // add r2, sp, #0xb4
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #3
    // add r2, sp, #0xd0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r5, _020855C4 ; =_021026AC
    // add r3, sp, #0x28
    // mov r2, #0xe
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02085526
    // add r0, r4, #0
    // mov r1, #4
    // add r2, sp, #0x28
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #5
    // add r2, sp, #0x44
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #6
    // add r2, sp, #0x60
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #7
    // add r2, sp, #0x7c
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, _020855C8 ; =gSystem + 0x60
    // mov r1, #1
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0xec
    // pop {r4, r5, pc}
    // _020855BC: .word _02102630
    // _020855C0: .word _02102658
    // _020855C4: .word _021026AC
    // _020855C8: .word gSystem + 0x60
    // TODO: decompile
}



void sub_020855CC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl GF_RunVramTransferTasks
    // bl SpriteSystem_TransferOam
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl PaletteData_PushTransparentBuffers
    // mov r0, #0xbe
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl DoScheduledBgGpuUpdates
    // ldr r3, _020855FC ; =OS_IRQTable
    // ldr r1, _02085600 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // nop
    // _020855FC: .word OS_IRQTable
    // _02085600: .word 0x00003FF8
    // TODO: decompile
}


