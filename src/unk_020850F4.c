/* Decompiled from asm/unk_020850F4.s */
#include "global.h"

void sub_020850F4(void) {
    /* Original at 0x020850F4 */
    /* Requires manual decompilation - 140 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #1\n    add r5, r0, #0\n    mov r0, #3\n    mov r1, #0x6c\n    lsl r2, r2, #0x12\n    bl Heap_Create\n    mov r1, #0xfd\n    add r0, r5, #0\n    lsl r1, r1, #2\n    mov r2, #0x6c\n    bl OverlayManager_CreateAndGetData\n    mov r2, #0xfd\n    mov r1, #0\n    lsl r2, r2, #2\n    add r4, r0, #0\n    bl memset\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    add r5, r0, #0\n    mov r0, #0xee\n    lsl r0, r0, #2\n    add r3, r4, r0\n    mov r2, #6\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0208512C\n    ldr r0, [r5]\n    str r0, [r3]\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _02085238 ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _0208523C ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    mov r0, #0xbe\n    mov r1, #0x6c\n    bl NARC_New\n    mov r1, #0xbb\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0x6c\n    bl BgConfig_Alloc\n    mov r1, #0xbe\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0x6c\n    bl PaletteData_Init\n    mov r1, #0xbf\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #1\n    bl PaletteData_SetAutoTransparent\n    mov r2, #0xbf\n    lsl r2, r2, #2\n    ldr r0, [r4, r2]\n    mov r1, #0\n    sub r2, #0xfc\n    mov r3, #0x6c\n    bl PaletteData_AllocBuffers\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    mov r1, #1\n    ldr r0, [r4, r0]\n    lsl r2, r1, #9\n    mov r3, #0x6c\n    bl PaletteData_AllocBuffers\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    mov r1, #2\n    ldr r0, [r4, r0]\n    lsl r2, r1, #8\n    mov r3, #0x6c\n    bl PaletteData_AllocBuffers\n    mov r2, #0xbf\n    lsl r2, r2, #2\n    ldr r0, [r4, r2]\n    mov r1, #3\n    sub r2, #0xfc\n    mov r3, #0x6c\n    bl PaletteData_AllocBuffers\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_0208545C\n    add r0, r4, #0\n    bl sub_020863F4\n    add r0, r4, #0\n    bl sub_02085688\n    bl sub_020210BC\n    mov r0, #4\n    bl sub_02021148\n    add r0, r4, #0\n    bl sub_020860B8\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0208520A\n    bl sub_0203A880\n    mov r0, #1\n    mov r1, #0x6c\n    bl sub_0203A948\n    mov r0, #7\n    str r0, [sp]\n    ldr r0, _02085240 ; =0x04000050\n    mov r1, #0\n    mov r2, #6\n    mov r3, #0xf\n    bl G2x_SetBlendAlpha_\n    mov r0, #8\n    str r0, [sp]\n    ldr r0, _02085244 ; =0x04001050\n    mov r1, #0\n    mov r2, #0xe\n    mov r3, #7\n    bl G2x_SetBlendAlpha_\n    ldr r0, _02085248 ; =sub_020855CC\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _02085238: .word 0xFFFFE0FF\n    _0208523C: .word 0x04001000\n    _02085240: .word 0x04000050\n    _02085244: .word 0x04001050\n    _02085248: .word sub_020855CC"
    );
    #endif
}

void sub_0208524C(void) {
    /* Original at 0x0208524C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl sub_02085BEC\n    add r5, r0, #0\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02085270\n    bl ov00_021EC9D4\n    mov r1, #3\n    sub r0, r1, r0\n    bl sub_0203A930\n    cmp r5, #0\n    beq _02085278\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0208527C(void) {
    /* Original at 0x0208527C */
    /* Requires manual decompilation - 124 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02085294\n    bl sub_0203A914\n    add r0, r4, #0\n    bl sub_020866CC\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl PaletteData_FreeBuffers\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl PaletteData_FreeBuffers\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #2\n    bl PaletteData_FreeBuffers\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #3\n    bl PaletteData_FreeBuffers\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl PaletteData_Free\n    mov r0, #0xbb\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl NARC_Delete\n    bl sub_02021238\n    mov r1, #0x2f\n    lsl r1, r1, #4\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    bl SpriteSystem_FreeResourcesAndManager\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl SpriteSystem_Free\n    mov r0, #3\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    bl TouchHitboxController_Destroy\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0x6c\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020853B4(void) {
    /* Original at 0x020853B4 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    str r0, [sp]\n    mov r1, #0x34\n    add r5, r2, #0\n    add r7, r3, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    ldr r1, [sp]\n    add r0, r6, #1\n    str r6, [r4]\n    bl String_New\n    str r0, [r4, #0x1c]\n    str r7, [r4, #0x20]\n    mov r2, #0\n    add r1, r5, #0\n    add r3, r4, #0\n    ldr r0, [r1]\n    add r2, r2, #1\n    str r0, [r3, #4]\n    add r1, r1, #4\n    add r3, r3, #4\n    cmp r2, #4\n    blt _020853DA\n    sub r0, r2, #1\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    lsl r0, r2, #2\n    add r0, r4, r0\n    str r1, [r0, #4]\n    ldr r0, [sp, #0x18]\n    str r0, [r4, #0x2c]\n    ldr r0, [sp, #0x1c]\n    str r0, [r4, #0x30]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02085400(void) {
    sub_020853B4(0);
}

void sub_0208541C(void) {
    sub_020853B4();
}

void sub_02085438(void) {
    /* Original at 0x02085438 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x1c]\n    cmp r0, #0\n    bne _02085446\n    bl GF_AssertFail\n    cmp r4, #0\n    bne _0208544E\n    bl GF_AssertFail\n    ldr r0, [r4, #0x1c]\n    bl String_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void sub_0208545C(void) {
    /* Original at 0x0208545C */
    /* Requires manual decompilation - 149 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xec\n    add r4, r0, #0\n    bl GfGfx_DisableEngineAPlanes\n    ldr r5, _020855BC ; =_02102630\n    add r3, sp, #0\n    mov r2, #5\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0208546C\n    add r0, sp, #0\n    bl GfGfx_SetBanks\n    mov r1, #6\n    mov r2, #2\n    mov r0, #0\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x12\n    bl MIi_CpuClear32\n    mov r1, #0x62\n    mov r2, #2\n    mov r0, #0\n    lsl r1, r1, #0x14\n    lsl r2, r2, #0x10\n    bl MIi_CpuClear32\n    mov r1, #0x19\n    mov r2, #1\n    mov r0, #0\n    lsl r1, r1, #0x16\n    lsl r2, r2, #0x12\n    bl MIi_CpuClear32\n    mov r1, #0x66\n    mov r2, #2\n    mov r0, #0\n    lsl r1, r1, #0x14\n    lsl r2, r2, #0x10\n    bl MIi_CpuClear32\n    ldr r5, _020855C0 ; =_02102658\n    add r3, sp, #0x98\n    mov r2, #0xa\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _020854B8\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    add r2, sp, #0x98\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #2\n    add r2, sp, #0xb4\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #3\n    add r2, sp, #0xd0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r5, _020855C4 ; =_021026AC\n    add r3, sp, #0x28\n    mov r2, #0xe\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02085526\n    add r0, r4, #0\n    mov r1, #4\n    add r2, sp, #0x28\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #5\n    add r2, sp, #0x44\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #6\n    add r2, sp, #0x60\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #7\n    add r2, sp, #0x7c\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #6\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    ldr r0, _020855C8 ; =gSystem + 0x60\n    mov r1, #1\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0xec\n    pop {r4, r5, pc}\n    _020855BC: .word _02102630\n    _020855C0: .word _02102658\n    _020855C4: .word _021026AC\n    _020855C8: .word gSystem + 0x60"
    );
    #endif
}

void sub_020855CC(void) {
    /* Original at 0x020855CC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl GF_RunVramTransferTasks\n    bl SpriteSystem_TransferOam\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl PaletteData_PushTransparentBuffers\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl DoScheduledBgGpuUpdates\n    ldr r3, _020855FC ; =OS_IRQTable\n    ldr r1, _02085600 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    nop\n    _020855FC: .word OS_IRQTable\n    _02085600: .word 0x00003FF8"
    );
    #endif
}
