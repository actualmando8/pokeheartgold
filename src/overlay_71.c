/* Decompiled from asm/overlay_71.s */
#include "global.h"

void TradeSequence_Init(void) {
    /* Original at 0x02246960 */
    /* Requires manual decompilation - 192 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _02246970\n    b _02246B0C\n    mov r0, #3\n    mov r1, #0x38\n    lsl r2, r0, #0xf\n    bl Heap_Create\n    mov r0, #3\n    mov r1, #0x39\n    lsl r2, r0, #0xf\n    bl Heap_Create\n    bl ov71_022473E4\n    mov r1, #0xfd\n    mov r0, #3\n    lsl r1, r1, #2\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    mov r1, #0x56\n    add r0, r5, #0\n    lsl r1, r1, #2\n    mov r2, #0x38\n    bl OverlayManager_CreateAndGetData\n    add r4, r0, #0\n    bne _022469A6\n    b _02246B06\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    mov r0, #0x38\n    bl BgConfig_Alloc\n    str r0, [r4, #8]\n    mov r0, #0x19\n    lsl r0, r0, #4\n    mov r1, #0x38\n    bl String_New\n    str r0, [r4, #0x14]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xb3\n    mov r3, #0x38\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x10]\n    mov r0, #0x38\n    bl MessageFormat_New\n    str r0, [r4, #0xc]\n    ldr r2, [r4]\n    ldr r0, [r2, #0x10]\n    cmp r0, #1\n    beq _022469EE\n    cmp r0, #2\n    beq _02246A20\n    cmp r0, #4\n    beq _02246A2C\n    b _02246A44\n    ldr r0, [r4, #0xc]\n    ldr r2, [r2]\n    mov r1, #0\n    bl BufferBoxMonNickname\n    ldr r2, [r4]\n    ldr r0, [r4, #0xc]\n    ldr r2, [r2, #4]\n    mov r1, #1\n    bl BufferBoxMonNickname\n    ldr r2, [r4]\n    ldr r0, [r4, #0xc]\n    ldr r2, [r2, #8]\n    mov r1, #2\n    bl BufferPlayersName\n    ldr r0, [r4]\n    ldr r0, [r0, #4]\n    bl ov71_02246B28\n    mov r1, #0x52\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    b _02246A44\n    ldr r0, [r4, #0xc]\n    ldr r2, [r2]\n    mov r1, #0\n    bl BufferBoxMonNickname\n    b _02246A44\n    ldr r0, [r4, #0xc]\n    ldr r2, [r2, #4]\n    mov r1, #1\n    bl BufferBoxMonNickname\n    ldr r0, [r4]\n    ldr r0, [r0, #4]\n    bl ov71_02246B28\n    mov r1, #0x52\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x7f\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r3, #0x20\n    str r3, [sp, #0xc]\n    mov r1, #0x38\n    str r1, [sp, #0x10]\n    mov r1, #0x80\n    add r2, r0, #0\n    bl OamManager_Create\n    add r1, r4, #0\n    mov r0, #0x40\n    add r1, #0x1c\n    mov r2, #0x38\n    bl G2dRenderer_Init\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    mov r2, #0x3a\n    add r0, #0x1c\n    mov r1, #0\n    lsl r2, r2, #0xe\n    bl G2dRenderer_SetSubSurfaceCoords\n    ldr r0, [r4]\n    mov r1, #5\n    ldr r0, [r0]\n    mov r2, #0\n    bl GetBoxMonData\n    mov r1, #0x53\n    lsl r1, r1, #2\n    strh r0, [r4, r1]\n    ldr r0, [r4]\n    mov r1, #5\n    ldr r0, [r0, #4]\n    mov r2, #0\n    bl GetBoxMonData\n    mov r1, #0x15\n    lsl r1, r1, #4\n    strh r0, [r4, r1]\n    ldr r0, [r4]\n    mov r1, #0x70\n    ldr r0, [r0]\n    mov r2, #0\n    bl GetBoxMonData\n    ldr r1, _02246B14 ; =0x0000014E\n    mov r2, #0\n    strh r0, [r4, r1]\n    ldr r0, [r4]\n    mov r1, #0x70\n    ldr r0, [r0, #4]\n    bl GetBoxMonData\n    ldr r1, _02246B18 ; =0x00000152\n    strh r0, [r4, r1]\n    mov r0, #0\n    add r1, r1, #2\n    str r0, [r4, r1]\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _02246B1C ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _02246B20 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    ldr r0, _02246B24 ; =ov71_02246C48\n    add r1, r4, #0\n    mov r2, #1\n    bl SysTask_CreateOnPrintQueue\n    mov r1, #0x51\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0\n    add r1, #0x10\n    str r0, [r4, r1]\n    add sp, #0x14\n    mov r0, #1\n    pop {r4, r5, pc}\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _02246B14: .word 0x0000014E\n    _02246B18: .word 0x00000152\n    _02246B1C: .word 0xFFFFE0FF\n    _02246B20: .word 0x04001000\n    _02246B24: .word ov71_02246C48"
    );
    #endif
}

void ov71_02246B28(void) {
    /* Original at 0x02246B28 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetBoxMonData\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0x1c\n    bl GetMonBaseStat_HandleAlternateForm\n    cmp r0, #0\n    bne _02246B52\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void TradeSequence_Exit(void) {
    /* Original at 0x02246B58 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl OS_DisableInterrupts\n    add r6, r0, #0\n    add r0, r5, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl SysTask_Destroy\n    bl sub_0203A914\n    ldr r0, [r4, #0xc]\n    bl MessageFormat_Delete\n    ldr r0, [r4, #0x10]\n    bl DestroyMsgData\n    ldr r0, [r4, #0x14]\n    bl String_Delete\n    ldr r0, [r4, #8]\n    bl Heap_Free\n    ldr r0, [r4, #0x18]\n    bl SpriteList_Delete\n    bl OamManager_Free\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0x38\n    bl Heap_Destroy\n    mov r0, #0x39\n    bl Heap_Destroy\n    add r0, r6, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void TradeSequence_Main(void) {
    /* Original at 0x02246BB8 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r3, [r4, #4]\n    cmp r3, #7\n    bhs _02246C34\n    ldr r1, [r4]\n    ldr r6, _02246C38 ; =ov71_0224BBF8\n    lsl r2, r3, #4\n    ldr r1, [r1, #0x10]\n    ldr r6, [r6, r2]\n    tst r1, r6\n    beq _02246C24\n    mov r1, #0x55\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    bne _02246BEC\n    ldr r1, _02246C3C ; =ov71_0224BBEC\n    ldr r1, [r1, r2]\n    blx r1\n    mov r1, #0x55\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r2, [r4, #4]\n    mov r0, #0x55\n    lsl r3, r2, #4\n    ldr r2, _02246C40 ; =ov71_0224BBF0\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r2, [r2, r3]\n    add r1, r5, #0\n    blx r2\n    cmp r0, #0\n    beq _02246C2C\n    ldr r1, [r4, #4]\n    mov r0, #0x55\n    lsl r2, r1, #4\n    ldr r1, _02246C44 ; =ov71_0224BBF4\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r1, r2]\n    blx r1\n    mov r0, #0x55\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    str r1, [r5]\n    b _02246C2C\n    add r0, r3, #1\n    str r0, [r4, #4]\n    mov r0, #0\n    str r0, [r5]\n    bl ov71_022473F0\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _02246C38: .word ov71_0224BBF8\n    _02246C3C: .word ov71_0224BBEC\n    _02246C40: .word ov71_0224BBF0\n    _02246C44: .word ov71_0224BBF4"
    );
    #endif
}

void ov71_02246C48(void) {
    /* Original at 0x02246C48 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r1, #0x18]\n    bl SpriteList_RenderAndAnimateSprites\n    bl OamManager_ApplyAndResetBuffers\n    ldr r3, _02246C64 ; =0x027E0000\n    ldr r1, _02246C68 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r3, pc}\n    nop\n    _02246C64: .word 0x027E0000\n    _02246C68: .word 0x00003FF8"
    );
    #endif
}

void ov71_02246C6C(void) {
    /* Original at 0x02246C6C */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0x38\n    add r6, r1, #0\n    add r1, r0, #0\n    add r1, #0xc8\n    bl Heap_Alloc\n    add r4, r0, #0\n    ldr r0, _02246D30 ; =0x00000000\n    str r0, [r5]\n    beq _02246D28\n    mov r0, #0x59\n    mov r1, #6\n    add r2, sp, #4\n    mov r3, #0x38\n    bl GfGfxLoader_GetPlttData\n    add r7, r0, #0\n    beq _02246CA6\n    mov r0, #0\n    add r1, r4, #0\n    mov r2, #0x60\n    bl MIi_CpuClear16\n    add r0, r7, #0\n    bl Heap_Free\n    add r1, r4, #0\n    mov r0, #0\n    add r1, #0xec\n    str r0, [r1]\n    add r1, r4, #0\n    add r1, #0xe8\n    str r0, [r1]\n    add r1, r4, #0\n    add r1, #0xf0\n    str r0, [r1]\n    add r1, r4, #0\n    add r1, #0xf4\n    str r0, [r1]\n    add r1, r4, #0\n    add r1, #0xe4\n    str r5, [r1]\n    add r1, r4, #0\n    add r1, #0xf8\n    str r0, [r1]\n    add r1, r4, #0\n    add r1, #0xfc\n    str r6, [r1]\n    add r3, r4, #0\n    add r2, r0, #0\n    add r1, r3, #0\n    add r1, #0xc4\n    add r0, r0, #1\n    add r3, r3, #4\n    str r2, [r1]\n    cmp r0, #8\n    blt _02246CD6\n    mov r0, #8\n    str r0, [sp]\n    ldr r0, _02246D34 ; =0x04000050\n    mov r1, #4\n    mov r2, #0xc\n    mov r3, #0x10\n    bl G2x_SetBlendAlpha_\n    mov r0, #8\n    str r0, [sp]\n    ldr r0, _02246D38 ; =0x04001050\n    mov r1, #4\n    mov r2, #0xc\n    mov r3, #0x10\n    bl G2x_SetBlendAlpha_\n    ldr r0, _02246D3C ; =ov71_02246D9C\n    add r1, r4, #0\n    mov r2, #0x14\n    bl SysTask_CreateOnVWaitQueue\n    add r1, r4, #0\n    add r1, #0xc0\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02246D28\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    mov r1, #1\n    str r1, [r0]\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02246D30: .word 0x00000000\n    _02246D34: .word 0x04000050\n    _02246D38: .word 0x04001050\n    _02246D3C: .word ov71_02246D9C"
    );
    #endif
}

void ov71_02246D40(void) {
    /* Original at 0x02246D40 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    ldr r1, [r1]\n    cmp r1, #1\n    bne _02246D52\n    mov r1, #1\n    add r0, #0xe8\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov71_02246D54(void) {
    /* Original at 0x02246D54 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    ldr r0, [r0]\n    cmp r0, #1\n    bne _02246D9A\n    mov r4, #0\n    add r5, r6, #0\n    add r0, r5, #0\n    add r0, #0xc4\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02246D78\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov71_02246F60\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #8\n    blt _02246D66\n    add r0, r6, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    mov r1, #0\n    str r1, [r0]\n    add r0, r6, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    bl SysTask_Destroy\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov71_02246D9C(void) {
    /* Original at 0x02246D9C */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02246E1A\n    add r0, r4, #0\n    add r0, #0xf0\n    ldr r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0xf0\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf0\n    ldr r0, [r0]\n    cmp r0, #0\n    bgt _02246DD8\n    ldr r0, _02246E80 ; =0x000006AD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x1e\n    add r0, #0xf0\n    str r1, [r0]\n    add r0, r4, #0\n    bl ov71_02246EAC\n    add r0, r4, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02246E7C\n    bl GX_BeginLoadBGExtPltt\n    bl GXS_BeginLoadBGExtPltt\n    add r0, r4, #0\n    mov r1, #0x60\n    bl DC_FlushRange\n    mov r1, #6\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    mov r2, #0x60\n    bl GX_LoadBGExtPltt\n    mov r1, #6\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    mov r2, #0x60\n    bl GXS_LoadBGExtPltt\n    bl GX_EndLoadBGExtPltt\n    bl GXS_EndLoadBGExtPltt\n    mov r0, #0\n    add r4, #0xec\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02246E5C\n    bl GX_BeginLoadBGExtPltt\n    bl GXS_BeginLoadBGExtPltt\n    add r0, r4, #0\n    mov r1, #0x60\n    bl DC_FlushRange\n    mov r1, #6\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    mov r2, #0x60\n    bl GX_LoadBGExtPltt\n    mov r1, #6\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    mov r2, #0x60\n    bl GXS_LoadBGExtPltt\n    bl GX_EndLoadBGExtPltt\n    bl GXS_EndLoadBGExtPltt\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xec\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf4\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02246E7C\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    mov r1, #0\n    str r1, [r0]\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    nop\n    _02246E80: .word 0x000006AD"
    );
    #endif
}

void ov71_02246E84(void) {
    /* Original at 0x02246E84 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    cmp r1, #0\n    blt _02246E94\n    cmp r1, #0x60\n    bge _02246E94\n    mov r4, #0\n    lsl r1, r1, #1\n    strh r4, [r0, r1]\n    cmp r2, #0\n    blt _02246EA0\n    cmp r2, #0x60\n    bge _02246EA0\n    lsl r1, r2, #1\n    strh r3, [r0, r1]\n    mov r1, #1\n    add r0, #0xec\n    str r1, [r0]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov71_02246EAC(void) {
    /* Original at 0x02246EAC */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r0, #0xc4\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02246F58\n    mov r0, #0x38\n    mov r1, #0x18\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _02246F58\n    add r0, r5, #0\n    str r5, [r4]\n    add r0, #0xfc\n    ldr r0, [r0]\n    cmp r0, #1\n    bne _02246EDE\n    mov r0, #0\n    mvn r0, r0\n    b _02246EE0\n    mov r0, #0xf\n    str r0, [r4, #4]\n    mov r0, #0\n    str r0, [r4, #0xc]\n    mov r0, #2\n    str r0, [r4, #8]\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    add r1, r4, #0\n    str r0, [r4, #0x10]\n    add r0, r5, #0\n    add r0, #0xfc\n    ldr r0, [r0]\n    mov r2, #0xa\n    str r0, [r4, #0x14]\n    ldr r0, _02246F5C ; =ov71_02246F90\n    bl SysTask_CreateOnMainQueue\n    add r1, r5, #0\n    add r1, #0xf8\n    ldr r1, [r1]\n    lsl r1, r1, #2\n    add r1, r5, r1\n    add r1, #0xc4\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r0, #0xc4\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02246F52\n    add r0, r5, #0\n    add r0, #0xf4\n    ldr r0, [r0]\n    add r1, r0, #1\n    add r0, r5, #0\n    add r0, #0xf4\n    str r1, [r0]\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    add r1, r0, #1\n    add r0, r5, #0\n    add r0, #0xf8\n    str r1, [r0]\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    cmp r0, #8\n    blt _02246F58\n    mov r0, #0\n    add r5, #0xf8\n    str r0, [r5]\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r3, r4, r5, pc}\n    nop\n    _02246F5C: .word ov71_02246F90"
    );
    #endif
}

void ov71_02246F60(void) {
    /* Original at 0x02246F60 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r5, #0\n    lsl r4, r1, #2\n    add r6, #0xc4\n    ldr r0, [r6, r4]\n    cmp r0, #0\n    beq _02246F8E\n    bl SysTask_GetData\n    bl Heap_Free\n    ldr r0, [r6, r4]\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r6, r4]\n    add r0, r5, #0\n    add r0, #0xf4\n    ldr r0, [r0]\n    add r5, #0xf4\n    sub r0, r0, #1\n    str r0, [r5]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov71_02246F90(void) {
    /* Original at 0x02246F90 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0xc]\n    add r1, r0, #1\n    str r1, [r4, #0xc]\n    ldr r0, [r4, #8]\n    cmp r1, r0\n    blt _02246FF8\n    mov r3, #0\n    str r3, [r4, #0xc]\n    ldr r0, [r4, #0x14]\n    cmp r0, #1\n    bne _02246FD0\n    ldr r1, [r4, #4]\n    ldr r0, [r4]\n    add r2, r1, #1\n    cmp r2, #0xf\n    blt _02246FC2\n    bl ov71_02246E84\n    ldr r0, [r4]\n    ldr r1, [r4, #0x10]\n    bl ov71_02246F60\n    pop {r4, pc}\n    ldr r3, _02246FFC ; =0x00007FFF\n    bl ov71_02246E84\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    pop {r4, pc}\n    ldr r2, [r4, #4]\n    ldr r0, [r4]\n    cmp r2, #0\n    bge _02246FEA\n    add r1, r2, #0\n    add r2, r2, #1\n    bl ov71_02246E84\n    ldr r0, [r4]\n    ldr r1, [r4, #0x10]\n    bl ov71_02246F60\n    pop {r4, pc}\n    ldr r3, _02246FFC ; =0x00007FFF\n    add r1, r2, #1\n    bl ov71_02246E84\n    ldr r0, [r4, #4]\n    sub r0, r0, #1\n    str r0, [r4, #4]\n    pop {r4, pc}\n    nop\n    _02246FFC: .word 0x00007FFF"
    );
    #endif
}

void ov71_02247000(void) {
    /* Original at 0x02247000 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    add r6, r1, #0\n    mov r0, #0x38\n    mov r1, #0x24\n    add r7, r2, #0\n    str r3, [sp, #4]\n    ldr r5, [sp, #0x28]\n    bl Heap_Alloc\n    add r4, r0, #0\n    ldr r0, _02247060 ; =0x00000001\n    str r0, [r5]\n    beq _02247058\n    ldr r1, [sp]\n    str r1, [r4]\n    str r6, [r4, #8]\n    ldr r1, [sp, #4]\n    str r7, [r4, #0xc]\n    str r1, [r4, #0x10]\n    ldr r1, [sp, #0x20]\n    str r1, [r4, #0x14]\n    cmp r6, r7\n    bge _02247034\n    mov r0, #0\n    str r0, [r4, #0x18]\n    ldr r0, [sp, #0x24]\n    mov r2, #0\n    str r0, [r4, #0x1c]\n    str r5, [r4, #4]\n    ldr r0, _02247064 ; =ov71_02247068\n    add r1, r4, #0\n    str r2, [r5]\n    bl SysTask_CreateOnVBlankQueue\n    str r0, [r4, #0x20]\n    cmp r0, #0\n    bne _02247058\n    mov r0, #1\n    str r0, [r5]\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02247060: .word 0x00000001\n    _02247064: .word ov71_02247068"
    );
    #endif
}

void ov71_02247068(void) {
    /* Original at 0x02247068 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #0x10]\n    mul r1, r0\n    asr r2, r1, #0xc\n    asr r1, r2, #4\n    lsr r1, r1, #0x1b\n    add r1, r2, r1\n    asr r2, r1, #5\n    ldr r1, [r4, #0x18]\n    cmp r1, #0\n    beq _0224708A\n    cmp r1, #1\n    beq _022470A0\n    b _022470B4\n    ldr r1, [r4, #0xc]\n    add r0, r0, r2\n    cmp r0, r1\n    bge _02247096\n    str r0, [r4, #8]\n    b _022470B4\n    str r1, [r4, #8]\n    ldr r0, [r4, #4]\n    mov r1, #1\n    str r1, [r0]\n    b _022470B4\n    ldr r1, [r4, #0xc]\n    sub r0, r0, r2\n    cmp r0, r1\n    ble _022470AC\n    str r0, [r4, #8]\n    b _022470B4\n    str r1, [r4, #8]\n    ldr r0, [r4, #4]\n    mov r1, #1\n    str r1, [r0]\n    add r0, r4, #0\n    bl ov71_022470DC\n    ldr r0, [r4, #4]\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _022470D0\n    add r0, r4, #0\n    bl ov71_02247424\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    ldr r1, [r4, #0x10]\n    ldr r0, [r4, #0x14]\n    add r0, r1, r0\n    str r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_022470DC(void) {
    /* Original at 0x022470DC */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    add r2, sp, #4\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #8]\n    mov r3, #0x80\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #0x1c]\n    lsl r1, r0, #2\n    ldr r0, _02247120 ; =_0224BBD4\n    ldr r0, [r0, r1]\n    mov r1, #2\n    str r0, [sp]\n    ldr r0, [r4]\n    bl SetBgAffine\n    ldr r0, [r4, #0x1c]\n    add r2, sp, #4\n    lsl r1, r0, #2\n    ldr r0, _02247120 ; =_0224BBD4\n    mov r3, #0x80\n    ldr r0, [r0, r1]\n    mov r1, #6\n    str r0, [sp]\n    ldr r0, [r4]\n    bl SetBgAffine\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _02247120: .word _0224BBD4"
    );
    #endif
}

void ov71_02247124(void) {
    /* Original at 0x02247124 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x48\n    add r5, r0, #0\n    ldr r0, [sp, #0x60]\n    add r4, r1, #0\n    str r2, [sp, #0x14]\n    str r3, [sp, #0x18]\n    cmp r0, #0\n    beq _0224713C\n    mov r7, #0x19\n    lsl r7, r7, #8\n    b _02247140\n    mov r7, #0x32\n    lsl r7, r7, #6\n    mov r0, #0x38\n    add r1, r7, #0\n    bl Heap_AllocAtEnd\n    str r0, [sp, #0x24]\n    cmp r0, #0\n    beq _02247202\n    ldr r3, _02247228 ; =ov71_0224BBDC\n    add r2, sp, #0x28\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    cmp r4, #0\n    ldr r0, [r5]\n    bne _02247164\n    ldr r4, [r0]\n    b _02247166\n    ldr r4, [r0, #4]\n    add r0, r4, #0\n    bl AcquireBoxMonLock\n    str r0, [sp, #0x20]\n    add r0, sp, #0x38\n    add r1, r4, #0\n    mov r2, #2\n    mov r3, #0\n    bl GetBoxmonSpriteCharAndPlttNarcIds\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl GetBoxMonData\n    str r0, [sp, #0x1c]\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    ldr r0, [sp, #0x60]\n    cmp r0, #0\n    beq _022471A0\n    ldr r0, [sp, #0x30]\n    lsl r0, r0, #1\n    str r0, [sp, #0x30]\n    add r0, r4, #0\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #1\n    bne _022471B8\n    ldr r0, _0224722C ; =0x00000147\n    cmp r6, r0\n    bne _022471B8\n    add r6, r0, #0\n    add r6, #0xa7\n    ldr r0, [sp, #0x24]\n    add r1, sp, #0x28\n    str r0, [sp]\n    ldr r0, [sp, #0x1c]\n    mov r2, #0x38\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x60]\n    add r3, sp, #0x28\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    str r6, [sp, #0x10]\n    ldrh r0, [r1, #0x10]\n    ldrh r1, [r1, #0x12]\n    bl sub_02014510\n    ldr r0, [sp, #0x24]\n    add r1, r7, #0\n    bl DC_FlushRange\n    ldr r1, [sp, #0x14]\n    mov r0, #0\n    str r0, [sp]\n    lsl r1, r1, #0x18\n    ldr r0, [r5, #8]\n    ldr r2, [sp, #0x24]\n    lsr r1, r1, #0x18\n    add r3, r7, #0\n    bl BG_LoadCharTilesData\n    ldr r1, [sp, #0x20]\n    add r0, r4, #0\n    bl ReleaseBoxMonLock\n    ldr r0, [sp, #0x24]\n    bl Heap_Free\n    ldr r0, [sp, #0x14]\n    cmp r0, #4\n    blo _0224720C\n    mov r2, #4\n    b _0224720E\n    mov r2, #0\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x38\n    ldr r3, [sp, #0x18]\n    str r0, [sp, #4]\n    add r1, sp, #0x28\n    ldrh r0, [r1, #0x10]\n    ldrh r1, [r1, #0x14]\n    lsl r3, r3, #5\n    bl GfGfxLoader_GXLoadPal\n    add sp, #0x48\n    pop {r3, r4, r5, r6, r7, pc}\n    _02247228: .word ov71_0224BBDC\n    _0224722C: .word 0x00000147"
    );
    #endif
}

void ov71_02247230(void) {
    /* Original at 0x02247230 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r1, #0\n    bne _02247242\n    ldr r1, _022472C0 ; =0x0000010A\n    b _02247252\n    mov r1, #0x52\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    cmp r0, #0\n    beq _02247250\n    sub r1, #0x3d\n    b _02247252\n    sub r1, #0x3e\n    mov r0, #0x38\n    str r0, [sp]\n    mov r0, #7\n    mov r2, #0\n    add r3, sp, #0x1c\n    bl GfGfxLoader_GetScrnData\n    add r7, r0, #0\n    beq _022472BA\n    mov r0, #0xa\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x1c]\n    ldr r2, [sp, #0x38]\n    add r0, #0xc\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0x20\n    ldr r3, [sp, #0x3c]\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x18]\n    lsl r1, r4, #0x18\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [r5, #8]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl CopyToBgTilemapRect\n    mov r0, #0xa\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsl r0, r6, #0x18\n    ldr r2, [sp, #0x38]\n    ldr r3, [sp, #0x3c]\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    lsl r1, r4, #0x18\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [r5, #8]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl BgTilemapRectChangePalette\n    add r0, r7, #0\n    bl Heap_Free\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022472C0: .word 0x0000010A"
    );
    #endif
}

void ov71_022472C4(void) {
    /* Original at 0x022472C4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r3, #0\n    mov r0, #0x39\n    add r3, r5, #0\n    str r0, [sp]\n    add r1, r2, #0\n    add r0, r4, #0\n    mov r2, #1\n    add r3, #8\n    bl GfGfxLoader_GetCellBank\n    str r0, [r5]\n    mov r0, #0x39\n    add r3, r5, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #1\n    add r3, #0xc\n    bl GfGfxLoader_GetAnimBank\n    str r0, [r5, #4]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov71_022472FC(void) {
    /* Original at 0x022472FC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0224730E\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4]\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _0224731C\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4, #4]\n    pop {r4, pc}"
    );
    #endif
}

void ov71_02247320(void) {
    /* Original at 0x02247320 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "str r2, [r0]\n    str r3, [r0, #8]\n    ldr r2, [r1, #8]\n    str r2, [r0, #0xc]\n    ldr r1, [r1, #0xc]\n    ldr r2, [sp]\n    str r1, [r0, #0x10]\n    add r1, r0, #0\n    add r1, #0x20\n    strb r2, [r1]\n    mov r1, #0\n    str r1, [r0, #4]\n    str r1, [r0, #0x14]\n    str r1, [r0, #0x18]\n    str r1, [r0, #0x1c]\n    bx lr"
    );
    #endif
}

void ov71_02247340(void) {
    /* Original at 0x02247340 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x20\n    ldr r0, [r0, #0x18]\n    str r0, [sp]\n    lsl r0, r2, #0xc\n    str r0, [sp, #8]\n    lsl r0, r3, #0xc\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x28]\n    str r1, [sp, #4]\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x2c]\n    str r0, [sp, #0x18]\n    mov r0, #0x38\n    str r0, [sp, #0x1c]\n    add r0, sp, #0\n    bl Sprite_Create\n    add r4, r0, #0\n    beq _0224737C\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl Sprite_SetAnimSpeed\n    add r0, r4, #0\n    add sp, #0x20\n    pop {r4, pc}"
    );
    #endif
}

void ov71_02247384(void) {
    /* Original at 0x02247384 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov71_02247388(void) {
    /* Original at 0x02247388 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov71_0224738C(void) {
    /* Original at 0x0224738C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov71_02247390(void) {
    /* Original at 0x02247390 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov71_02247398(void) {
    /* Original at 0x02247398 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    ldr r0, [r0, #4]\n    bx lr"
    );
    #endif
}

void ov71_022473A0(void) {
    /* Original at 0x022473A0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    ldr r0, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov71_022473A8(void) {
    /* Original at 0x022473A8 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x53\n    lsl r1, r1, #2\n    ldrh r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov71_022473B0(void) {
    /* Original at 0x022473B0 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _022473B8 ; =0x0000014E\n    ldrh r0, [r0, r1]\n    bx lr\n    nop\n    _022473B8: .word 0x0000014E"
    );
    #endif
}

void ov71_022473BC(void) {
    /* Original at 0x022473BC */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x15\n    lsl r1, r1, #4\n    ldrh r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov71_022473C4(void) {
    /* Original at 0x022473C4 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _022473CC ; =0x00000152\n    ldrh r0, [r0, r1]\n    bx lr\n    nop\n    _022473CC: .word 0x00000152"
    );
    #endif
}

void ov71_022473D0(void) {
    Options_GetFrame();
}

void ov71_022473DC(void) {
    /* Original at 0x022473DC */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    ldr r0, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov71_022473E4(void) {
    /* Original at 0x022473E4 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _022473EC ; =_0224C040\n    mov r1, #0\n    str r1, [r0]\n    bx lr\n    _022473EC: .word _0224C040"
    );
    #endif
}

void ov71_022473F0(void) {
    /* Original at 0x022473F0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r6, _0224741C ; =_0224C040\n    ldr r0, [r6]\n    cmp r0, #0\n    beq _02247418\n    mov r4, #0\n    cmp r0, #0\n    ble _02247412\n    ldr r5, _02247420 ; =ov71_0224C044\n    ldr r0, [r5]\n    bl Heap_Free\n    ldr r0, [r6]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r0\n    blt _02247402\n    ldr r0, _0224741C ; =_0224C040\n    mov r1, #0\n    str r1, [r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _0224741C: .word _0224C040\n    _02247420: .word ov71_0224C044"
    );
    #endif
}

void ov71_02247424(void) {
    /* Original at 0x02247424 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02247444 ; =_0224C040\n    ldr r0, [r0]\n    cmp r0, #0x20\n    blt _02247434\n    bl GF_AssertFail\n    ldr r0, _02247444 ; =_0224C040\n    ldr r2, [r0]\n    add r1, r2, #1\n    str r1, [r0]\n    ldr r0, _02247448 ; =ov71_0224C044\n    lsl r1, r2, #2\n    str r4, [r0, r1]\n    pop {r4, pc}\n    _02247444: .word _0224C040\n    _02247448: .word ov71_0224C044"
    );
    #endif
}

void ov71_0224744C(void) {
    /* Original at 0x0224744C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r4, r1, #0\n    mov r0, #0x39\n    mov r1, #0x20\n    add r5, r2, #0\n    str r3, [sp]\n    bl Heap_Alloc\n    add r6, r0, #0\n    beq _02247492\n    ldr r3, [sp]\n    add r1, r4, #0\n    add r2, r5, #0\n    bl ov71_0224784C\n    mov r1, #0x8c\n    mov r0, #0x39\n    mul r1, r7\n    bl Heap_Alloc\n    str r0, [r6, #0x18]\n    mov r4, #0\n    str r7, [r6, #0x1c]\n    cmp r7, #0\n    bls _02247492\n    add r5, r4, #0\n    ldr r0, [r6, #0x18]\n    add r0, r0, r5\n    bl ov71_022475C4\n    add r4, r4, #1\n    add r5, #0x8c\n    cmp r4, r7\n    blo _02247482\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov71_02247498(void) {
    /* Original at 0x02247498 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x1c]\n    mov r6, #0\n    cmp r0, #0\n    bls _022474B8\n    add r4, r6, #0\n    ldr r0, [r5, #0x18]\n    add r0, r0, r4\n    bl ov71_022475F8\n    ldr r0, [r5, #0x1c]\n    add r6, r6, #1\n    add r4, #0x8c\n    cmp r6, r0\n    blo _022474A6\n    ldr r0, [r5, #0x18]\n    bl Heap_Free\n    add r0, r5, #0\n    bl ov71_022478B8\n    add r0, r5, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov71_022474CC(void) {
    /* Original at 0x022474CC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    mov r1, #0\n    add r5, r0, #0\n    mov r0, #0x11\n    add r2, r1, #0\n    bl NNS_G3dGeBufferOP_N\n    bl Camera_PushLookAtToNNSGlb\n    ldr r0, [r5, #0x1c]\n    mov r6, #0\n    cmp r0, #0\n    bls _02247502\n    add r4, r6, #0\n    ldr r0, [r5, #0x18]\n    add r0, r0, r4\n    ldr r1, [r0, #0x64]\n    cmp r1, #0\n    beq _022474F8\n    bl ov71_02247514\n    ldr r0, [r5, #0x1c]\n    add r6, r6, #1\n    add r4, #0x8c\n    cmp r6, r0\n    blo _022474EA\n    mov r2, #1\n    mov r0, #0x12\n    add r1, sp, #0\n    str r2, [sp]\n    bl NNS_G3dGeBufferOP_N\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov71_02247514(void) {
    /* Original at 0x02247514 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x50\n    add r4, r0, #0\n    add r0, sp, #0x2c\n    bl MTX_Identity33_\n    add r0, r4, #0\n    add r0, #0x80\n    ldrh r0, [r0]\n    ldr r3, _022475C0 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #8\n    bl MTX_RotX33_\n    add r1, sp, #0x2c\n    add r0, sp, #8\n    add r2, r1, #0\n    bl MTX_Concat33\n    add r0, r4, #0\n    add r0, #0x82\n    ldrh r0, [r0]\n    ldr r3, _022475C0 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #8\n    bl MTX_RotY33_\n    add r1, sp, #0x2c\n    add r0, sp, #8\n    add r2, r1, #0\n    bl MTX_Concat33\n    add r0, r4, #0\n    add r0, #0x84\n    ldrh r0, [r0]\n    ldr r3, _022475C0 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #8\n    bl MTX_RotZ33_\n    add r1, sp, #0x2c\n    add r0, sp, #8\n    add r2, r1, #0\n    bl MTX_Concat33\n    add r0, r4, #0\n    add r0, #0x88\n    ldr r0, [r0]\n    cmp r0, #0x1f\n    beq _022475AC\n    str r0, [sp]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    str r0, [sp, #4]\n    bl NNS_G3dGlbPolygonAttr\n    add r1, r4, #0\n    add r0, r4, #4\n    add r4, #0x74\n    add r1, #0x68\n    add r2, sp, #0x2c\n    add r3, r4, #0\n    bl GF3dRender_DrawModel\n    add sp, #0x50\n    pop {r4, pc}\n    _022475C0: .word FX_SinCosTable_"
    );
    #endif
}

void ov71_022475C4(void) {
    /* Original at 0x022475C4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    str r1, [r0, #0x64]\n    add r2, r0, #0\n    str r1, [r0]\n    add r2, #0x84\n    strh r1, [r2]\n    mov r2, #0x84\n    ldrsh r3, [r0, r2]\n    add r2, r0, #0\n    add r2, #0x82\n    strh r3, [r2]\n    mov r2, #0x82\n    ldrsh r3, [r0, r2]\n    add r2, r0, #0\n    add r2, #0x80\n    strh r3, [r2]\n    mov r2, #1\n    lsl r2, r2, #0xc\n    str r2, [r0, #0x7c]\n    str r2, [r0, #0x78]\n    str r2, [r0, #0x74]\n    str r1, [r0, #0x70]\n    str r1, [r0, #0x6c]\n    str r1, [r0, #0x68]\n    bx lr"
    );
    #endif
}

void ov71_022475F8(void) {
    Heap_Free(0);
}

void ov71_02247610(void) {
    /* Original at 0x02247610 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r4, [r0, #0x18]\n    add r6, r1, #0\n    mov r0, #0x8c\n    mul r6, r0\n    add r7, r2, #0\n    mov r0, #1\n    str r0, [sp]\n    str r3, [sp, #4]\n    add r1, r3, #0\n    add r0, r7, #0\n    mov r2, #0\n    mov r3, #0x39\n    add r5, r4, r6\n    bl GfGfxLoader_LoadFromNarc\n    str r0, [r4, r6]\n    ldr r1, [sp, #4]\n    add r0, r7, #0\n    bl GetNarcMemberSizeByIdPair\n    add r1, r0, #0\n    ldr r0, [r4, r6]\n    bl DC_FlushRange\n    ldr r0, [r4, r6]\n    cmp r0, #0\n    beq _022476AC\n    bl NNS_G3dGetMdlSet\n    str r0, [r5, #0x58]\n    cmp r0, #0\n    beq _02247674\n    add r2, r0, #0\n    add r2, #8\n    beq _02247668\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _02247668\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _0224766A\n    mov r1, #0\n    cmp r1, #0\n    beq _02247674\n    ldr r1, [r1]\n    add r0, r0, r1\n    b _02247676\n    mov r0, #0\n    str r0, [r5, #0x5c]\n    ldr r0, [r5]\n    bl NNS_G3dGetTex\n    str r0, [r5, #0x60]\n    bl GF3dRender_AllocAndLoadTexResources\n    ldr r0, [r5]\n    ldr r1, [r5, #0x60]\n    bl GF3dRender_BindModelSet\n    ldr r1, [r5, #0x5c]\n    add r0, r5, #4\n    bl NNS_G3dRenderObjInit\n    ldr r0, [sp, #0x20]\n    mov r1, #0x1f\n    str r0, [r5, #0x68]\n    ldr r0, [sp, #0x24]\n    str r0, [r5, #0x6c]\n    ldr r0, [sp, #0x28]\n    str r0, [r5, #0x70]\n    add r0, r5, #0\n    add r0, #0x88\n    str r1, [r0]\n    ldr r0, [sp, #0x2c]\n    str r0, [r5, #0x64]\n    add r0, r5, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov71_022476B4(void) {
    /* Original at 0x022476B4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0x68\n    add r3, r1, #0\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    bx lr"
    );
    #endif
}

void ov71_022476C4(void) {
    /* Original at 0x022476C4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    add r2, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x68\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    bx lr"
    );
    #endif
}

void ov71_022476D4(void) {
    /* Original at 0x022476D4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0x80\n    ldrh r2, [r2]\n    strh r2, [r1]\n    add r2, r0, #0\n    add r2, #0x82\n    ldrh r2, [r2]\n    add r0, #0x84\n    strh r2, [r1, #2]\n    ldrh r0, [r0]\n    strh r0, [r1, #4]\n    bx lr"
    );
    #endif
}

void ov71_022476EC(void) {
    /* Original at 0x022476EC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r3, [r1]\n    add r2, r0, #0\n    add r2, #0x80\n    strh r3, [r2]\n    add r2, r0, #0\n    ldrh r3, [r1, #2]\n    add r2, #0x82\n    add r0, #0x84\n    strh r3, [r2]\n    ldrh r1, [r1, #4]\n    strh r1, [r0]\n    bx lr"
    );
    #endif
}

void ov71_02247704(void) {
    ((u32*)r0)[0x64] = r1;
}

void ov71_02247708(void) {
    /* Original at 0x02247708 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r2, r0, #0\n    add r2, #0x88\n    str r1, [r2]\n    cmp r1, #0x1f\n    ldr r0, [r0, #0x5c]\n    beq _02247722\n    mov r2, #0x1f\n    mov r1, #0\n    lsl r2, r2, #0x10\n    bl NNSi_G3dModifyPolygonAttrMask\n    pop {r3, pc}\n    mov r2, #0x1f\n    mov r1, #1\n    lsl r2, r2, #0x10\n    bl NNSi_G3dModifyPolygonAttrMask\n    pop {r3, pc}"
    );
    #endif
}

void ov71_02247730(void) {
    ((u32*)r0)[0x74] = r1;
    ((u32*)r0)[0x78] = r1;
    ((u32*)r0)[0x7c] = r1;
}

void ov71_02247738(void) {
    /* Original at 0x02247738 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x4c\n    add r4, r0, #0\n    add r0, sp, #0x28\n    bl MTX_Identity33_\n    add r0, r4, #0\n    add r0, #0x80\n    ldrh r0, [r0]\n    ldr r3, _022477E8 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #4\n    bl MTX_RotX33_\n    add r1, sp, #0x28\n    add r0, sp, #4\n    add r2, r1, #0\n    bl MTX_Concat33\n    add r0, r4, #0\n    add r0, #0x82\n    ldrh r0, [r0]\n    ldr r3, _022477E8 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #4\n    bl MTX_RotY33_\n    add r1, sp, #0x28\n    add r0, sp, #4\n    add r2, r1, #0\n    bl MTX_Concat33\n    add r0, r4, #0\n    add r0, #0x84\n    ldrh r0, [r0]\n    ldr r3, _022477E8 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #4\n    bl MTX_RotZ33_\n    add r1, sp, #0x28\n    add r0, sp, #4\n    add r2, r1, #0\n    bl MTX_Concat33\n    mov r1, #0\n    mov r0, #0x11\n    add r2, r1, #0\n    bl NNS_G3dGeBufferOP_N\n    bl Camera_PushLookAtToNNSGlb\n    add r1, r4, #0\n    ldr r0, [r4, #0x5c]\n    add r4, #0x74\n    add r1, #0x68\n    add r2, sp, #0x28\n    add r3, r4, #0\n    bl sub_0201F990\n    add r4, r0, #0\n    mov r2, #1\n    mov r0, #0x12\n    add r1, sp, #0\n    str r2, [sp]\n    bl NNS_G3dGeBufferOP_N\n    add r0, r4, #0\n    add sp, #0x4c\n    pop {r3, r4, pc}\n    _022477E8: .word FX_SinCosTable_"
    );
    #endif
}

void ov71_022477EC(void) {
    Camera_GetLookAtCamPos();
}

void ov71_0224780C(void) {
    /* Original at 0x0224780C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02247818 ; =Camera_SetAnglePos\n    add r2, r0, #0\n    add r0, r1, #0\n    ldr r1, [r2]\n    bx r3\n    nop\n    _02247818: .word Camera_SetAnglePos"
    );
    #endif
}

void ov71_0224781C(void) {
    /* Original at 0x0224781C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02247828 ; =Camera_AdjustAngleTarget\n    add r2, r0, #0\n    add r0, r1, #0\n    ldr r1, [r2]\n    bx r3\n    nop\n    _02247828: .word Camera_AdjustAngleTarget"
    );
    #endif
}

void ov71_0224782C(void) {
    /* Original at 0x0224782C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02247838 ; =Camera_ApplyPerspectiveType\n    add r2, r0, #0\n    add r0, r1, #0\n    ldr r1, [r2]\n    bx r3\n    nop\n    _02247838: .word Camera_ApplyPerspectiveType"
    );
    #endif
}

void ov71_0224783C(void) {
    /* Original at 0x0224783C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02247848 ; =Camera_SetPerspectiveAngle\n    add r2, r0, #0\n    add r0, r1, #0\n    ldr r1, [r2]\n    bx r3\n    nop\n    _02247848: .word Camera_SetPerspectiveAngle"
    );
    #endif
}

void ov71_0224784C(void) {
    /* Original at 0x0224784C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    mov r0, #0x39\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl Camera_New\n    str r0, [r5]\n    str r4, [r5, #4]\n    str r6, [r5, #8]\n    mov r1, #0x4b\n    add r2, r5, #0\n    str r7, [r5, #0xc]\n    mov r0, #0\n    strh r0, [r5, #0x10]\n    strh r0, [r5, #0x12]\n    strh r0, [r5, #0x14]\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    ldr r3, _022478B4 ; =0x00000FA4\n    str r0, [sp, #8]\n    add r0, r5, #4\n    lsl r1, r1, #0xe\n    add r2, #0x10\n    bl Camera_Init_FromTargetDistanceAndAngle\n    mov r1, #0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x10]\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x14]\n    ldr r1, [r5]\n    add r0, sp, #0xc\n    bl Camera_SetLookAtCamUp\n    ldr r0, [r5]\n    bl Camera_SetStaticPtr\n    mov r1, #0xfa\n    ldr r2, [r5]\n    mov r0, #0\n    lsl r1, r1, #0xe\n    bl Camera_SetPerspectiveClippingPlane\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022478B4: .word 0x00000FA4"
    );
    #endif
}

void ov71_022478B8(void) {
    Camera_UnsetStaticPtr();
    Camera_Delete();
}

void ov71_022478C8(void) {
    /* Original at 0x022478C8 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x39\n    mov r1, #0x84\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _0224791E\n    str r5, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl ov71_02247384\n    str r0, [r4, #0x54]\n    mov r0, #0x39\n    bl PokepicManager_Create\n    str r0, [r4, #0xc]\n    mov r0, #0\n    str r0, [r4, #0x10]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    mov r1, #0x39\n    bl String_New\n    str r0, [r4, #0x68]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    mov r1, #0x39\n    bl String_New\n    str r0, [r4, #0x6c]\n    mov r0, #0\n    str r0, [r4, #0x78]\n    str r0, [r4, #0x7c]\n    mov r0, #0xb4\n    mov r1, #0x39\n    bl NARC_New\n    add r1, r4, #0\n    add r1, #0x80\n    str r0, [r1]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_02247924(void) {
    /* Original at 0x02247924 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _0224798C\n    bl ov71_02248120\n    add r0, r4, #0\n    bl ov71_022481EC\n    add r0, r4, #0\n    bl ov71_0224809C\n    ldr r0, [r4, #0x68]\n    bl String_Delete\n    ldr r0, [r4, #0x6c]\n    bl String_Delete\n    ldr r0, [r4, #0x70]\n    bl ov71_02247498\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x54]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x54]\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    add r0, #0x58\n    bl RemoveWindow\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    bl NARC_Delete\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    beq _02247980\n    bl Pokepic_Delete\n    ldr r0, [r4, #0xc]\n    bl PokepicManager_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov71_02247990(void) {
    /* Original at 0x02247990 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r2, [r4]\n    add r5, r0, #0\n    cmp r2, #4\n    bhs _022479BE\n    lsl r3, r2, #2\n    ldr r2, _022479C4 ; =ov71_0224BC64\n    add r1, r5, #4\n    ldr r2, [r2, r3]\n    blx r2\n    cmp r0, #0\n    beq _022479B4\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r5, #4]\n    add r0, r5, #0\n    bl ov71_022479C8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _022479C4: .word ov71_0224BC64"
    );
    #endif
}

void ov71_022479C8(void) {
    /* Original at 0x022479C8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    bl G3X_Reset\n    mov r1, #0\n    mov r0, #0x11\n    add r2, r1, #0\n    bl NNS_G3dGeBufferOP_N\n    bl NNS_G3dGeFlushBuffer\n    bl NNS_G2dSetupSoftwareSpriteCamera\n    ldr r0, [r4, #0xc]\n    bl PokepicManager_HandleLoadImgAndOrPltt\n    ldr r0, [r4, #0xc]\n    bl PokepicManager_DrawAll\n    mov r2, #1\n    str r2, [sp]\n    mov r0, #0x12\n    add r1, sp, #0\n    bl NNS_G3dGeBufferOP_N\n    ldr r0, [r4, #0x70]\n    bl ov71_022474CC\n    mov r0, #0\n    add r1, r0, #0\n    bl RequestSwap3DBuffers\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov71_02247A10(void) {
    /* Original at 0x02247A10 */
    /* Requires manual decompilation - 233 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    add r4, r0, #0\n    ldr r0, _02247C0C ; =ov71_0224BCBC\n    bl GfGfx_SetBanks\n    ldr r2, _02247C10 ; =0x04000304\n    ldr r0, _02247C14 ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    ldr r0, _02247C18 ; =ov71_0224BC74\n    bl SetBothScreensModesAndDisable\n    ldr r0, [r4, #0x54]\n    ldr r2, _02247C1C ; =ov71_0224BC84\n    mov r1, #1\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x54]\n    ldr r2, _02247C20 ; =ov71_0224BCA0\n    mov r1, #2\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x54]\n    ldr r2, _02247C20 ; =ov71_0224BCA0\n    mov r1, #6\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r2, _02247C24 ; =0x04000008\n    mov r0, #3\n    ldrh r3, [r2]\n    mov r1, #1\n    bic r3, r0\n    add r0, r3, #0\n    orr r0, r1\n    strh r0, [r2]\n    mov r2, #0\n    str r2, [sp]\n    ldr r0, [r4, #0x54]\n    add r3, r1, #0\n    bl BG_FillCharDataRange\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    bl ov71_022473D0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x39\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    mov r2, #0x6d\n    mov r3, #2\n    bl LoadUserFrameGfx2\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    add r1, r4, #0\n    str r0, [sp, #8]\n    mov r2, #1\n    str r2, [sp, #0xc]\n    str r2, [sp, #0x10]\n    ldr r0, [r4, #0x54]\n    add r1, #0x58\n    mov r3, #2\n    bl AddWindowParameterized\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r3, #0x20\n    str r3, [sp]\n    mov r0, #0x39\n    str r0, [sp, #4]\n    mov r0, #0x10\n    mov r1, #8\n    mov r2, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x54]\n    mov r0, #0x59\n    mov r1, #0x16\n    mov r3, #2\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x54]\n    mov r0, #0x59\n    mov r1, #0x15\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x39\n    mov r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #0x17\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x54]\n    mov r0, #0x59\n    mov r1, #0x16\n    mov r3, #6\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x54]\n    mov r0, #0x59\n    mov r1, #0x15\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x39\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #0x17\n    mov r2, #4\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPal\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    bl ov71_02247ED0\n    mov r1, #0\n    mov r0, #1\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov71_0224744C\n    str r0, [r4, #0x70]\n    add r0, r4, #0\n    bl ov71_02247F9C\n    str r0, [r4, #0x10]\n    mov r1, #0\n    mov r0, #0x6a\n    str r1, [sp]\n    lsl r0, r0, #0xa\n    str r0, [sp, #4]\n    ldr r0, _02247C28 ; =0x00073800\n    mov r2, #0x59\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [r4, #0x70]\n    mov r3, #0x1b\n    bl ov71_02247610\n    ldr r2, _02247C2C ; =ov71_0224BC5C\n    str r0, [r4, #0x74]\n    ldrh r3, [r2]\n    add r0, sp, #0x14\n    add r1, sp, #0x14\n    strh r3, [r0]\n    ldrh r3, [r2, #2]\n    ldrh r2, [r2, #4]\n    strh r3, [r0, #2]\n    strh r2, [r0, #4]\n    ldr r0, [r4, #0x74]\n    bl ov71_022476EC\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r4, #0\n    bl ov71_02247FF8\n    ldr r0, _02247C30 ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    bl sub_0203A880\n    mov r0, #1\n    mov r1, #0x38\n    bl sub_0203A948\n    mov r0, #0x10\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #1\n    add sp, #0x1c\n    pop {r3, r4, pc}\n    _02247C0C: .word ov71_0224BCBC\n    _02247C10: .word 0x04000304\n    _02247C14: .word 0xFFFF7FFF\n    _02247C18: .word ov71_0224BC74\n    _02247C1C: .word ov71_0224BC84\n    _02247C20: .word ov71_0224BCA0\n    _02247C24: .word 0x04000008\n    _02247C28: .word 0x00073800\n    _02247C2C: .word ov71_0224BC5C\n    _02247C30: .word 0x04000050"
    );
    #endif
}

void ov71_02247C34(void) {
    /* Original at 0x02247C34 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r1]\n    cmp r0, #0\n    bne _02247C5A\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _02247C5A\n    ldr r0, [r4, #0x3c]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x3c]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov71_02247C60(void) {
    /* Original at 0x02247C60 */
    /* Requires manual decompilation - 169 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r1, #0\n    add r4, r0, #0\n    ldr r0, [r5]\n    cmp r0, #4\n    bhi _02247C9A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02247C7A: ; jump table\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02247DE4\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0xa\n    bgt _02247C9C\n    b _02247DE4\n    ldr r0, [r4]\n    bl ov71_0224738C\n    str r0, [sp, #0xc]\n    ldr r0, [r4]\n    bl ov71_02247388\n    add r7, r0, #0\n    ldr r0, [r4]\n    bl ov71_022473DC\n    cmp r0, #1\n    bne _02247CBC\n    mov r1, #0\n    mov r6, #2\n    b _02247CC0\n    mov r1, #4\n    mov r6, #3\n    ldr r0, [sp, #0xc]\n    ldr r2, [r4, #0x68]\n    bl ReadMsgDataIntoString\n    ldr r1, [r4, #0x6c]\n    ldr r2, [r4, #0x68]\n    add r0, r7, #0\n    bl StringExpandPlaceholders\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    add r0, r4, #0\n    ldr r2, [r4, #0x6c]\n    add r0, #0x58\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0x6d\n    mov r2, #2\n    bl sub_0200E948\n    add r0, r4, #0\n    add r0, #0x58\n    bl CopyWindowToVram\n    mov r0, #0\n    str r0, [r4, #8]\n    str r6, [r5]\n    b _02247DE4\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0x3c\n    ble _02247DE4\n    ldr r0, [r4]\n    bl ov71_0224738C\n    add r6, r0, #0\n    ldr r0, [r4]\n    bl ov71_02247388\n    add r7, r0, #0\n    ldr r2, [r4, #0x68]\n    add r0, r6, #0\n    mov r1, #1\n    bl ReadMsgDataIntoString\n    ldr r1, [r4, #0x6c]\n    ldr r2, [r4, #0x68]\n    add r0, r7, #0\n    bl StringExpandPlaceholders\n    ldr r0, [r4]\n    bl ov71_02247390\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    bne _02247D80\n    ldr r0, [r4, #0x10]\n    mov r1, #1\n    bl Pokepic_StartAnim\n    ldr r0, [r4]\n    bl ov71_022473A8\n    add r2, r0, #0\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    add r1, sp, #0x10\n    mov r3, #1\n    bl sub_020729A4\n    ldr r0, [r4]\n    bl ov71_022473A8\n    add r6, r0, #0\n    ldr r0, [r4]\n    bl ov71_022473B0\n    add r2, r0, #0\n    add r1, sp, #0x10\n    lsl r2, r2, #0x18\n    ldrb r1, [r1]\n    add r0, r6, #0\n    lsr r2, r2, #0x18\n    bl sub_020062E0\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    add r0, r4, #0\n    ldr r2, [r4, #0x6c]\n    add r0, #0x58\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    add r0, r4, #0\n    add r0, #0x58\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02247DE4\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0x3c\n    ble _02247DE4\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02247DE4\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0x14\n    ble _02247DE4\n    add sp, #0x14\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov71_02247DEC(void) {
    /* Original at 0x02247DEC */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldr r1, [r4]\n    add r5, r0, #0\n    cmp r1, #4\n    bhi _02247EC6\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02247E06: ; jump table\n    ldr r0, _02247ECC ; =0x000006A7\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x10\n    mov r3, #0xc\n    bl ov71_022480C0\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02247EC6\n    bl ov71_02248110\n    cmp r0, #0\n    beq _02247EC6\n    ldr r0, [r5, #0x10]\n    bl Pokepic_Delete\n    ldr r0, [r5, #0x40]\n    mov r1, #0\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5, #0x40]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02247EC6\n    ldr r0, [r5, #0x40]\n    bl Sprite_IsAnimated\n    cmp r0, #0\n    bne _02247EC6\n    ldr r0, [r5, #0x74]\n    mov r1, #1\n    bl ov71_02247704\n    mov r1, #0x10\n    add r0, r5, #0\n    mov r2, #0\n    add r3, r1, #0\n    bl ov71_022480C0\n    add r0, r5, #0\n    bl ov71_0224817C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02247EC6\n    bl ov71_022481D8\n    cmp r0, #2\n    bge _02247E8E\n    add r0, r5, #0\n    bl ov71_022481C8\n    cmp r0, #1\n    bne _02247EC6\n    mov r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02247EC6\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _02247EC6\n    add r0, r5, #0\n    bl ov71_022481C8\n    cmp r0, #0\n    beq _02247EC6\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _02247ECC: .word 0x000006A7"
    );
    #endif
}

void ov71_02247ED0(void) {
    /* Original at 0x02247ED0 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    bl NNS_G3dInit\n    bl G3X_InitMtxStack\n    ldr r0, _02247F78 ; =0x04000060\n    ldr r2, _02247F7C ; =0xFFFFCFFD\n    ldrh r1, [r0]\n    and r1, r2\n    strh r1, [r0]\n    ldrh r3, [r0]\n    add r1, r2, #2\n    and r3, r1\n    mov r1, #0x10\n    orr r1, r3\n    strh r1, [r0]\n    ldrh r3, [r0]\n    ldr r1, _02247F80 ; =0x0000CFFB\n    and r1, r3\n    strh r1, [r0]\n    add r1, r2, #2\n    ldrh r3, [r0]\n    lsr r2, r2, #0x11\n    and r3, r1\n    mov r1, #8\n    orr r1, r3\n    strh r1, [r0]\n    mov r0, #0\n    add r1, r0, #0\n    mov r3, #0x3f\n    str r0, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _02247F84 ; =0x04000540\n    mov r0, #2\n    str r0, [r1]\n    ldr r0, _02247F88 ; =0xBFFF0000\n    str r0, [r1, #0x40]\n    mov r0, #1\n    add r1, r0, #0\n    bl GF_3DVramMan_InitFrameTexVramManager\n    mov r0, #1\n    lsl r0, r0, #0xe\n    mov r1, #1\n    bl GF_3DVramMan_InitFramePlttVramManager\n    ldr r3, _02247F8C ; =NNS_GfdDefaultFuncAllocTexVram\n    mov r0, #1\n    mov r1, #0\n    ldr r3, [r3]\n    lsl r0, r0, #0xe\n    add r2, r1, #0\n    blx r3\n    ldr r3, _02247F90 ; =NNS_GfdDefaultFuncAllocPlttVram\n    add r4, r0, #0\n    ldr r3, [r3]\n    mov r0, #0x80\n    mov r1, #0\n    mov r2, #1\n    blx r3\n    ldr r2, _02247F94 ; =0x7FFF0000\n    add r6, r0, #0\n    and r2, r4\n    lsl r1, r4, #0x10\n    lsr r2, r2, #0x10\n    ldr r0, [r5, #0xc]\n    lsr r1, r1, #0xd\n    lsl r2, r2, #4\n    bl PokepicManager_SetCharBaseAddrAndSize\n    ldr r2, _02247F98 ; =0xFFFF0000\n    lsl r1, r6, #0x10\n    and r2, r6\n    lsr r2, r2, #0x10\n    ldr r0, [r5, #0xc]\n    lsr r1, r1, #0xd\n    lsl r2, r2, #3\n    bl PokepicManager_SetPlttBaseAddrAndSize\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _02247F78: .word 0x04000060\n    _02247F7C: .word 0xFFFFCFFD\n    _02247F80: .word 0x0000CFFB\n    _02247F84: .word 0x04000540\n    _02247F88: .word 0xBFFF0000\n    _02247F8C: .word NNS_GfdDefaultFuncAllocTexVram\n    _02247F90: .word NNS_GfdDefaultFuncAllocPlttVram\n    _02247F94: .word 0x7FFF0000\n    _02247F98: .word 0xFFFF0000"
    );
    #endif
}

void ov71_02247F9C(void) {
    /* Original at 0x02247F9C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl ov71_02247390\n    add r4, r0, #0\n    add r0, sp, #0x10\n    add r1, r4, #0\n    mov r2, #2\n    mov r3, #0\n    bl GetBoxmonSpriteCharAndPlttNarcIds\n    ldr r0, [r5]\n    bl ov71_022473A8\n    add r2, r0, #0\n    add r0, r5, #0\n    add r0, #0x80\n    add r1, r5, #0\n    ldr r0, [r0]\n    add r1, #0x14\n    mov r3, #1\n    bl NARC_ReadPokepicAnimScript\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl sub_02070854\n    add r3, r0, #0\n    mov r1, #0\n    str r1, [sp]\n    add r0, r5, #0\n    str r1, [sp, #4]\n    add r0, #0x14\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [r5, #0xc]\n    add r3, #0x50\n    add r1, sp, #0x10\n    mov r2, #0x80\n    bl PokepicManager_CreatePokepic\n    add sp, #0x20\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_02247FF8(void) {
    /* Original at 0x02247FF8 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x70\n    add r4, r0, #0\n    add r0, #0x44\n    mov r1, #0x59\n    mov r2, #7\n    mov r3, #8\n    bl ov71_022472C4\n    add r0, sp, #0x5c\n    bl NNS_G2dInitImagePaletteProxy\n    add r0, sp, #0x38\n    bl NNS_G2dInitImageProxy\n    mov r3, #0\n    str r3, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    add r0, sp, #0x38\n    str r0, [sp, #0x10]\n    mov r0, #0x59\n    mov r1, #9\n    bl GfGfxLoader_LoadImageMapping\n    mov r0, #0x39\n    str r0, [sp]\n    add r0, sp, #0x5c\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #0xa\n    mov r2, #1\n    mov r3, #0\n    bl GfGfxLoader_PartiallyLoadPalette\n    mov r0, #2\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, sp, #0x14\n    add r1, #0x44\n    add r2, sp, #0x38\n    add r3, sp, #0x5c\n    bl ov71_02247320\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #0x14\n    mov r2, #0x80\n    mov r3, #0x64\n    bl ov71_02247340\n    str r0, [r4, #0x3c]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #0x14\n    mov r2, #0x80\n    mov r3, #0x5a\n    bl ov71_02247340\n    str r0, [r4, #0x40]\n    mov r1, #1\n    bl Sprite_SetPriority\n    ldr r0, [r4, #0x3c]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x40]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #0x70\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224809C(void) {
    /* Original at 0x0224809C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x3c]\n    cmp r0, #0\n    beq _022480AE\n    bl Sprite_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _022480A4\n    add r6, #0x44\n    add r0, r6, #0\n    bl ov71_022472FC\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov71_022480C0(void) {
    /* Original at 0x022480C0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0x39\n    mov r1, #0x14\n    str r2, [sp]\n    add r7, r3, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _02248106\n    str r5, [r4]\n    lsl r0, r6, #0xc\n    str r0, [r4, #4]\n    ldr r0, [sp]\n    lsl r1, r0, #0xc\n    str r1, [r4, #8]\n    ldr r0, [r4, #4]\n    sub r0, r1, r0\n    add r1, r7, #0\n    bl _s32_div_f\n    str r0, [r4, #0xc]\n    ldr r0, _02248108 ; =ov71_02248140\n    str r7, [r4, #0x10]\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnVBlankQueue\n    str r0, [r5, #0x78]\n    ldr r0, _0224810C ; =0x04000050\n    mov r1, #1\n    add r2, r6, #0\n    bl G2x_SetBlendBrightness_\n    pop {r3, r4, r5, r6, r7, pc}\n    _02248108: .word ov71_02248140\n    _0224810C: .word 0x04000050"
    );
    #endif
}

void ov71_02248110(void) {
    /* Original at 0x02248110 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x78]\n    cmp r0, #0\n    bne _0224811A\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov71_02248120(void) {
    /* Original at 0x02248120 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x78]\n    cmp r0, #0\n    beq _0224813C\n    bl SysTask_GetData\n    bl ov71_02247424\n    ldr r0, [r4, #0x78]\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #0x78]\n    pop {r4, pc}"
    );
    #endif
}

void ov71_02248140(void) {
    /* Original at 0x02248140 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0x10]\n    sub r0, r0, #1\n    str r0, [r4, #0x10]\n    cmp r0, #0\n    ble _02248162\n    ldr r1, [r4, #4]\n    ldr r0, [r4, #0xc]\n    add r2, r1, r0\n    str r2, [r4, #4]\n    ldr r0, _02248178 ; =0x04000050\n    mov r1, #1\n    asr r2, r2, #0xc\n    bl G2x_SetBlendBrightness_\n    pop {r4, pc}\n    ldr r2, [r4, #8]\n    ldr r0, _02248178 ; =0x04000050\n    mov r1, #1\n    asr r2, r2, #0xc\n    bl G2x_SetBlendBrightness_\n    ldr r0, [r4]\n    bl ov71_02248120\n    pop {r4, pc}\n    nop\n    _02248178: .word 0x04000050"
    );
    #endif
}

void ov71_0224817C(void) {
    /* Original at 0x0224817C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x39\n    mov r1, #0x30\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _022481BC\n    str r5, [r4]\n    ldr r0, [r5, #0x74]\n    add r1, r4, #0\n    str r0, [r4, #4]\n    add r1, #8\n    bl ov71_022476B4\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x14\n    bl ov71_022476D4\n    ldr r0, _022481C0 ; =0x00002F60\n    mov r2, #0\n    str r0, [r4, #0x1c]\n    str r2, [r4, #0x20]\n    strh r2, [r4, #0x2c]\n    str r2, [r4, #0x24]\n    ldr r0, _022481C4 ; =ov71_0224820C\n    add r1, r4, #0\n    str r2, [r4, #0x28]\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #0x7c]\n    pop {r3, r4, r5, pc}\n    nop\n    _022481C0: .word 0x00002F60\n    _022481C4: .word ov71_0224820C"
    );
    #endif
}

void ov71_022481C8(void) {
    /* Original at 0x022481C8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x7c]\n    cmp r0, #0\n    bne _022481D2\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov71_022481D8(void) {
    SysTask_GetData(0);
}

void ov71_022481EC(void) {
    /* Original at 0x022481EC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x7c]\n    cmp r0, #0\n    beq _02248208\n    bl SysTask_GetData\n    bl Heap_Free\n    ldr r0, [r4, #0x7c]\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #0x7c]\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224820C(void) {
    /* Original at 0x0224820C */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0x24]\n    cmp r0, #0\n    bne _02248280\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x1c]\n    add r0, r1, r0\n    str r0, [r4, #0xc]\n    ldr r1, [r4, #0x1c]\n    cmp r1, #0\n    blt _0224822E\n    mov r0, #0x1e\n    lsl r0, r0, #6\n    sub r0, r1, r0\n    str r0, [r4, #0x1c]\n    b _02248280\n    mov r0, #0x1e\n    lsl r0, r0, #6\n    sub r0, r1, r0\n    str r0, [r4, #0x1c]\n    ldr r1, [r4, #0xc]\n    ldr r0, _022482E4 ; =0xFFFFC000\n    cmp r1, r0\n    bgt _02248280\n    str r0, [r4, #0xc]\n    ldr r1, [r4, #0x1c]\n    mov r0, #0x2c\n    mul r0, r1\n    mov r1, #0x64\n    bl _s32_div_f\n    neg r1, r0\n    mov r0, #0xfa\n    lsl r0, r0, #4\n    str r1, [r4, #0x1c]\n    cmp r1, r0\n    bge _0224825C\n    mov r0, #1\n    str r0, [r4, #0x24]\n    ldr r0, _022482E8 ; =0x000005E6\n    bl PlaySE\n    ldr r0, [r4, #0x20]\n    add r0, r0, #1\n    str r0, [r4, #0x20]\n    cmp r0, #1\n    beq _02248272\n    cmp r0, #3\n    beq _02248278\n    b _02248280\n    mov r0, #0xb0\n    strh r0, [r4, #0x2c]\n    b _02248280\n    mov r0, #0x2c\n    ldrsh r0, [r4, r0]\n    add r0, #0x50\n    strh r0, [r4, #0x2c]\n    mov r0, #0x14\n    mov r2, #0x2c\n    ldrsh r3, [r4, r0]\n    ldrsh r0, [r4, r2]\n    add r1, r4, #0\n    add r1, #0x14\n    add r0, r3, r0\n    strh r0, [r4, #0x14]\n    mov r0, #0x18\n    ldrsh r3, [r4, r0]\n    ldrsh r0, [r4, r2]\n    sub r0, r3, r0\n    strh r0, [r4, #0x18]\n    ldr r0, [r4, #4]\n    bl ov71_022476EC\n    mov r2, #0x2c\n    ldrsh r3, [r4, r2]\n    ldr r5, [r4, #8]\n    add r1, r4, #0\n    lsl r0, r3, #2\n    add r0, r3, r0\n    add r0, r5, r0\n    str r0, [r4, #8]\n    ldrsh r2, [r4, r2]\n    ldr r3, [r4, #0x10]\n    add r1, #8\n    lsl r0, r2, #2\n    add r0, r2, r0\n    add r0, r3, r0\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #4]\n    bl ov71_022476C4\n    ldr r0, [r4, #0x24]\n    cmp r0, #0\n    beq _022482E2\n    mov r0, #0x2c\n    ldrsh r0, [r4, r0]\n    sub r0, #0xe\n    strh r0, [r4, #0x2c]\n    ldr r0, [r4, #0x28]\n    add r0, r0, #1\n    str r0, [r4, #0x28]\n    cmp r0, #0x1e\n    ble _022482E2\n    ldr r0, [r4]\n    bl ov71_022481EC\n    pop {r3, r4, r5, pc}\n    _022482E4: .word 0xFFFFC000\n    _022482E8: .word 0x000005E6"
    );
    #endif
}

void ov71_022482EC(void) {
    /* Original at 0x022482EC */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x5b\n    add r5, r0, #0\n    mov r0, #0x39\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _0224834E\n    str r5, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl ov71_02247384\n    add r1, r4, #0\n    add r1, #0xc0\n    str r0, [r1]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xd4\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xc4\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xcc\n    str r1, [r0]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    bl MTRandom\n    add r1, r4, #0\n    add r1, #0xbc\n    str r0, [r1]\n    add r0, r4, #0\n    mov r2, #0\n    add r0, #0xd0\n    str r2, [r0]\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    str r2, [r4, r0]\n    ldr r0, _02248354 ; =ov71_02248B60\n    add r1, r4, #0\n    bl SysTask_CreateOnVWaitQueue\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02248354: .word ov71_02248B60"
    );
    #endif
}

void ov71_02248358(void) {
    /* Original at 0x02248358 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OS_DisableInterrupts\n    add r4, r0, #0\n    cmp r5, #0\n    beq _022483A4\n    add r0, r5, #0\n    bl ov71_0224889C\n    add r0, r5, #0\n    bl ov71_022489F8\n    add r0, r5, #0\n    bl ov71_02248B24\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _02248386\n    bl SysTask_Destroy\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _02248394\n    bl ov71_02248E04\n    add r0, r5, #0\n    add r0, #0xbc\n    ldr r0, [r0]\n    bl SetMTRNGSeed\n    add r0, r5, #0\n    bl Heap_Free\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_022483AC(void) {
    /* Original at 0x022483AC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r2, [r4]\n    add r5, r0, #0\n    cmp r2, #4\n    bhs _022483DA\n    lsl r3, r2, #2\n    ldr r2, _022483E0 ; =ov71_0224BCFC\n    add r1, r5, #4\n    ldr r2, [r2, r3]\n    blx r2\n    cmp r0, #0\n    beq _022483D0\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r5, #4]\n    add r0, r5, #0\n    bl ov71_022483E4\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _022483E0: .word ov71_0224BCFC"
    );
    #endif
}

void ov71_022483E4(void) {
    /* Original at 0x022483E4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0xd4\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02248404\n    bl G3X_Reset\n    add r4, #0xd4\n    ldr r0, [r4]\n    bl ov71_022474CC\n    mov r0, #0\n    add r1, r0, #0\n    bl RequestSwap3DBuffers\n    pop {r4, pc}"
    );
    #endif
}

void ov71_02248408(void) {
    /* Original at 0x02248408 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov71_02248604\n    add r0, r4, #0\n    bl ov71_022488E4\n    add r0, r4, #0\n    bl ov71_02248A08\n    mov r0, #8\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov71_0224843C(void) {
    /* Original at 0x0224843C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r1, [r4]\n    cmp r1, #0\n    beq _0224844C\n    cmp r1, #1\n    beq _02248462\n    b _0224847A\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0224847A\n    ldr r0, _02248480 ; =ov71_0224C0C4\n    mov r1, #0\n    str r1, [r0]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224847A\n    ldr r1, _02248480 ; =ov71_0224C0C4\n    ldr r2, [r1]\n    cmp r2, #0x1e\n    bge _0224846E\n    add r2, r2, #1\n    str r2, [r1]\n    add r0, #0xd0\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0224847A\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02248480: .word ov71_0224C0C4"
    );
    #endif
}

void ov71_02248484(void) {
    /* Original at 0x02248484 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #4\n    bhi _0224852A\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0224849C: ; jump table\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224852A\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #8\n    ble _0224852A\n    add r0, r4, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    mov r1, #0\n    mov r2, #0x1f\n    mov r3, #0x18\n    bl ov71_02248E30\n    add r0, r4, #0\n    bl ov71_02248EB4\n    mov r1, #0x16\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r4, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    mov r1, #0\n    bl ov71_02247708\n    add r4, #0xd8\n    ldr r0, [r4]\n    mov r1, #1\n    bl ov71_02247704\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224852A\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov71_02249260\n    cmp r0, #0\n    beq _0224852A\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224852A\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov71_02249254\n    cmp r0, #0\n    beq _0224852A\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224852A\n    bl ov71_02248B54\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_02248530(void) {
    /* Original at 0x02248530 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #4\n    bhi _022485F4\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0224854A: ; jump table\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov71_0224926C\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _022485F4\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #2\n    ble _022485F4\n    mov r0, #0\n    str r0, [r4, #8]\n    add r4, #0xc4\n    ldr r0, [r4]\n    bl ov71_02246D40\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _022485F4\n    add r1, r4, #0\n    add r1, #0xc8\n    ldr r1, [r1]\n    cmp r1, #0\n    bne _022485F4\n    mov r1, #0x59\n    lsl r1, r1, #2\n    add r1, r4, r1\n    bl ov71_02248D0C\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _022485F4\n    ldr r0, [r4, #8]\n    cmp r0, #0x28\n    bge _022485B8\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0x28\n    bne _022485B8\n    ldr r0, _022485FC ; =0x000006AF\n    bl PlaySE\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov71_02249254\n    cmp r0, #0\n    beq _022485F4\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0\n    ldr r3, _02248600 ; =0x00007FFF\n    add r1, r0, #0\n    add r2, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _022485F4\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _022485F4\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _022485FC: .word 0x000006AF\n    _02248600: .word 0x00007FFF"
    );
    #endif
}

void ov71_02248604(void) {
    /* Original at 0x02248604 */
    /* Requires manual decompilation - 287 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, _02248880 ; =ov71_0224BD54\n    bl GfGfx_SetBanks\n    ldr r2, _02248884 ; =0x04000304\n    ldr r0, _02248888 ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    ldr r0, _0224888C ; =ov71_0224BCEC\n    bl SetBothScreensModesAndDisable\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    ldr r2, _02248890 ; =ov71_0224BD1C\n    mov r1, #2\n    mov r3, #1\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    ldr r2, _02248890 ; =ov71_0224BD1C\n    mov r1, #6\n    mov r3, #1\n    bl InitBgFromTemplate\n    bl OS_DisableInterrupts\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    ldr r2, _02248894 ; =ov71_0224BD38\n    mov r1, #3\n    mov r3, #2\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    ldr r2, _02248894 ; =ov71_0224BD38\n    mov r1, #7\n    mov r3, #2\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    add r2, r4, #0\n    str r0, [sp, #0xc]\n    add r2, #0xc0\n    mov r1, #2\n    ldr r2, [r2]\n    mov r0, #0x59\n    add r3, r1, #0\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    add r2, r4, #0\n    str r0, [sp, #0xc]\n    add r2, #0xc0\n    ldr r2, [r2]\n    mov r0, #0x59\n    mov r1, #2\n    mov r3, #6\n    bl GfGfxLoader_LoadCharData\n    mov r1, #0\n    str r1, [sp]\n    add r2, r4, #0\n    str r1, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    add r2, #0xc0\n    ldr r2, [r2]\n    mov r0, #0x59\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnData\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    add r2, r4, #0\n    str r0, [sp, #0xc]\n    add r2, #0xc0\n    ldr r2, [r2]\n    mov r0, #0x59\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnData\n    ldr r0, [r4]\n    bl ov71_022473A0\n    add r5, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x39\n    mov r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #3\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x39\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #3\n    mov r2, #4\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPal\n    ldr r0, _02248898 ; =ov71_0224BCE4\n    lsl r1, r5, #1\n    ldrh r5, [r0, r1]\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x40\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0x59\n    mov r1, #3\n    mov r2, #0\n    add r3, r5, #0\n    bl GfGfxLoader_GXLoadPalWithSrcOffset\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x40\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0x59\n    mov r1, #3\n    mov r2, #4\n    add r3, r5, #0\n    bl GfGfxLoader_GXLoadPalWithSrcOffset\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    add r2, r4, #0\n    str r0, [sp, #0xc]\n    add r2, #0xc0\n    ldr r2, [r2]\n    mov r0, #0x59\n    mov r1, #5\n    mov r3, #3\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    add r2, r4, #0\n    str r0, [sp, #0xc]\n    add r2, #0xc0\n    ldr r2, [r2]\n    mov r0, #0x59\n    mov r1, #5\n    mov r3, #7\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    add r2, r4, #0\n    str r0, [sp, #0xc]\n    add r2, #0xc0\n    ldr r2, [r2]\n    mov r0, #0x59\n    mov r1, #4\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    add r2, r4, #0\n    str r0, [sp, #0xc]\n    add r2, #0xc0\n    ldr r2, [r2]\n    mov r0, #0x59\n    mov r1, #4\n    mov r3, #7\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x39\n    mov r1, #0x60\n    bl Heap_Alloc\n    add r5, r0, #0\n    beq _0224880A\n    mov r0, #0\n    add r1, r5, #0\n    mov r2, #0x60\n    bl MIi_CpuClear32\n    add r0, r5, #0\n    mov r1, #0x60\n    bl DC_FlushRange\n    bl GX_BeginLoadBGExtPltt\n    bl GXS_BeginLoadBGExtPltt\n    mov r1, #6\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    mov r2, #0x60\n    bl GX_LoadBGExtPltt\n    mov r1, #6\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    mov r2, #0x60\n    bl GXS_LoadBGExtPltt\n    bl GX_EndLoadBGExtPltt\n    bl GXS_EndLoadBGExtPltt\n    add r0, r5, #0\n    bl Heap_Free\n    add r0, r4, #0\n    add r0, #0xc0\n    mov r3, #0xff\n    ldr r0, [r0]\n    mov r1, #6\n    mov r2, #3\n    mvn r3, r3\n    bl BgSetPosTextAndCommit\n    mov r0, #7\n    mov r1, #0\n    bl ToggleBgLayer\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r4, #0\n    add r0, #0xc0\n    mov r1, #3\n    ldr r0, [r0]\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add r0, r4, #0\n    add r0, #0xc8\n    mov r1, #1\n    bl ov71_02246C6C\n    add r1, r4, #0\n    add r1, #0xc4\n    str r0, [r1]\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r0, #0xd0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r0, #0xc0\n    mov r1, #0x12\n    mov r2, #1\n    ldr r0, [r0]\n    lsl r1, r1, #6\n    lsl r2, r2, #0xc\n    mov r3, #1\n    bl ov71_02247000\n    add r4, #0xcc\n    str r0, [r4]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _02248880: .word ov71_0224BD54\n    _02248884: .word 0x04000304\n    _02248888: .word 0xFFFF7FFF\n    _0224888C: .word ov71_0224BCEC\n    _02248890: .word ov71_0224BD1C\n    _02248894: .word ov71_0224BD38\n    _02248898: .word ov71_0224BCE4"
    );
    #endif
}

void ov71_0224889C(void) {
    /* Original at 0x0224889C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _022488B2\n    add r0, r4, #0\n    add r0, #0xc4\n    ldr r0, [r0]\n    bl ov71_02246D54\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    add r4, #0xc0\n    ldr r0, [r4]\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    pop {r4, pc}"
    );
    #endif
}

void ov71_022488E4(void) {
    /* Original at 0x022488E4 */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl NNS_G3dInit\n    bl G3X_InitMtxStack\n    ldr r0, _022489C4 ; =0x04000060\n    ldr r1, _022489C8 ; =0xFFFFCFFD\n    ldrh r2, [r0]\n    and r2, r1\n    strh r2, [r0]\n    ldrh r3, [r0]\n    add r2, r1, #2\n    and r3, r2\n    mov r2, #0x10\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r3, [r0]\n    ldr r2, _022489CC ; =0x0000CFFB\n    and r2, r3\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrh r3, [r0]\n    add r1, r1, #2\n    and r3, r2\n    mov r2, #8\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r2, [r0]\n    and r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0]\n    ldr r0, _022489D0 ; =ov71_0224BD0C\n    bl G3X_SetEdgeColorTable\n    mov r1, #0\n    ldr r0, _022489D4 ; =0x000043FF\n    ldr r2, _022489D8 ; =0x00007FFF\n    mov r3, #0x3f\n    str r1, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _022489DC ; =0x04000540\n    mov r0, #2\n    str r0, [r1]\n    ldr r0, _022489E0 ; =0xBFFF0000\n    str r0, [r1, #0x40]\n    mov r0, #1\n    add r1, r0, #0\n    bl GF_3DVramMan_InitFrameTexVramManager\n    mov r0, #1\n    lsl r0, r0, #0xe\n    mov r1, #1\n    bl GF_3DVramMan_InitFramePlttVramManager\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r1, _022489E4 ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    strh r2, [r1]\n    mov r1, #0\n    mov r0, #1\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov71_0224744C\n    add r1, r4, #0\n    add r1, #0xd4\n    str r0, [r1]\n    mov r1, #0\n    ldr r0, _022489E8 ; =0xFFFC8800\n    str r1, [sp]\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    add r0, r4, #0\n    str r1, [sp, #0xc]\n    add r0, #0xd4\n    ldr r0, [r0]\n    mov r2, #0x59\n    mov r3, #0x1b\n    bl ov71_02247610\n    add r1, r4, #0\n    add r1, #0xd8\n    str r0, [r1]\n    ldr r1, _022489EC ; =0x0000EBE0\n    ldr r0, _022489F0 ; =ov71_0224C0C4\n    strh r1, [r0, #4]\n    mov r1, #0\n    strh r1, [r0, #6]\n    strh r1, [r0, #8]\n    add r0, r4, #0\n    add r0, #0xd4\n    ldr r0, [r0]\n    ldr r1, _022489F4 ; =ov71_0224C0C8\n    bl ov71_0224780C\n    add r4, #0xd8\n    mov r1, #7\n    ldr r0, [r4]\n    lsl r1, r1, #0xa\n    bl ov71_02247730\n    add sp, #0x10\n    pop {r4, pc}\n    _022489C4: .word 0x04000060\n    _022489C8: .word 0xFFFFCFFD\n    _022489CC: .word 0x0000CFFB\n    _022489D0: .word ov71_0224BD0C\n    _022489D4: .word 0x000043FF\n    _022489D8: .word 0x00007FFF\n    _022489DC: .word 0x04000540\n    _022489E0: .word 0xBFFF0000\n    _022489E4: .word 0x04000008\n    _022489E8: .word 0xFFFC8800\n    _022489EC: .word 0x0000EBE0\n    _022489F0: .word ov71_0224C0C4\n    _022489F4: .word ov71_0224C0C8"
    );
    #endif
}

void ov71_022489F8(void) {
    ov71_02247498();
}

void ov71_02248A08(void) {
    /* Original at 0x02248A08 */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x74\n    add r7, r0, #0\n    add r0, #0xc\n    mov r1, #0x59\n    mov r2, #0xb\n    mov r3, #0xc\n    bl ov71_022472C4\n    add r0, sp, #0x60\n    bl NNS_G2dInitImagePaletteProxy\n    add r0, sp, #0x3c\n    bl NNS_G2dInitImageProxy\n    mov r3, #0\n    str r3, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    add r0, sp, #0x3c\n    str r0, [sp, #0x10]\n    mov r0, #0x59\n    mov r1, #0xd\n    bl GfGfxLoader_LoadImageMapping\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    add r0, sp, #0x3c\n    str r0, [sp, #0x10]\n    mov r0, #0x59\n    mov r1, #0xd\n    mov r2, #1\n    bl GfGfxLoader_LoadImageMapping\n    mov r0, #0x39\n    str r0, [sp]\n    add r0, sp, #0x60\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #0xe\n    mov r2, #1\n    mov r3, #0\n    bl GfGfxLoader_PartiallyLoadPalette\n    mov r0, #0x39\n    str r0, [sp]\n    add r0, sp, #0x60\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #0xe\n    mov r2, #2\n    mov r3, #0\n    bl GfGfxLoader_PartiallyLoadPalette\n    mov r0, #1\n    add r1, r7, #0\n    str r0, [sp]\n    add r0, sp, #0x18\n    add r1, #0xc\n    add r2, sp, #0x3c\n    add r3, sp, #0x60\n    bl ov71_02247320\n    ldr r0, _02248B20 ; =0x035947D1\n    bl SetMTRNGSeed\n    mov r0, #0\n    str r0, [sp, #0x14]\n    add r4, r7, #0\n    bl MTRandom\n    mov r1, #0xe8\n    bl _u32_div_f\n    add r6, r1, #0\n    add r6, #0xc\n    bl MTRandom\n    mov r1, #0x71\n    lsl r1, r1, #2\n    bl _u32_div_f\n    add r5, r1, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    sub r5, #0x1c\n    str r0, [sp, #4]\n    ldr r0, [r7]\n    add r1, sp, #0x18\n    add r2, r6, #0\n    add r3, r5, #0\n    bl ov71_02247340\n    str r0, [r4, #0x1c]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r5, #0x38\n    ldr r0, [r7]\n    add r1, sp, #0x18\n    add r2, r6, #0\n    add r3, r5, #0\n    bl ov71_02247340\n    str r0, [r4, #0x20]\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x20]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x20]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [sp, #0x14]\n    add r4, #8\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    cmp r0, #0x14\n    blt _02248AA2\n    add sp, #0x74\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02248B20: .word 0x035947D1"
    );
    #endif
}

void ov71_02248B24(void) {
    /* Original at 0x02248B24 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x1c]\n    cmp r0, #0\n    beq _02248B36\n    bl Sprite_Delete\n    ldr r0, [r5, #0x20]\n    cmp r0, #0\n    beq _02248B40\n    bl Sprite_Delete\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, #0x14\n    blt _02248B2C\n    add r6, #0xc\n    add r0, r6, #0\n    bl ov71_022472FC\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov71_02248B54(void) {
    /* Original at 0x02248B54 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x5a\n    mov r2, #1\n    lsl r1, r1, #2\n    str r2, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov71_02248B60(void) {
    /* Original at 0x02248B60 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x5a\n    add r4, r1, #0\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _02248BB4\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    add r0, #0xc0\n    mov r3, #0xff\n    ldr r0, [r0]\n    mov r1, #2\n    mov r2, #3\n    mvn r3, r3\n    bl BgSetPosTextAndCommit\n    add r4, #0xc0\n    ldr r0, [r4]\n    mov r1, #6\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    mov r0, #3\n    mov r1, #0\n    bl ToggleBgLayer\n    mov r0, #7\n    mov r1, #1\n    bl ToggleBgLayer\n    ldr r2, _02248BB8 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    nop\n    _02248BB8: .word 0x04000304"
    );
    #endif
}

void ov71_02248BBC(void) {
    /* Original at 0x02248BBC */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    str r5, [r2, #4]\n    add r0, r2, #0\n    str r1, [r0]\n    mov r1, #0x52\n    mov r7, #0\n    lsl r1, r1, #2\n    str r7, [r0, r1]\n    add r1, r1, #4\n    str r2, [sp]\n    str r7, [r0, r1]\n    add r4, r2, #0\n    add r6, r2, #0\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r5, #0x1c]\n    bl Sprite_GetMatrixPtr\n    add r2, r6, #0\n    add r3, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x58\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r7, r7, #1\n    str r0, [r2]\n    add r4, r4, #4\n    add r5, #8\n    add r6, #0xc\n    cmp r7, #0x14\n    blt _02248BD8\n    ldr r0, _02248C20 ; =ov71_02248C24\n    ldr r1, [sp]\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r1, [sp]\n    ldr r1, [r1]\n    str r0, [r1]\n    ldr r0, [sp]\n    ldr r0, [r0]\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02248C1C\n    ldr r0, [sp]\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02248C20: .word ov71_02248C24"
    );
    #endif
}

void ov71_02248C24(void) {
    /* Original at 0x02248C24 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r1, #0\n    mov r1, #0x52\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    add r0, r0, #1\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    cmp r0, #0xc\n    ble _02248C58\n    mov r0, #0\n    str r0, [r5, r1]\n    add r0, r1, #4\n    ldr r0, [r5, r0]\n    cmp r0, #0x14\n    bge _02248C58\n    lsl r0, r0, #2\n    mov r2, #1\n    add r0, r5, r0\n    str r2, [r0, #8]\n    add r0, r1, #4\n    ldr r0, [r5, r0]\n    add r2, r0, #1\n    add r0, r1, #4\n    str r2, [r5, r0]\n    mov r0, #0\n    add r7, r5, #0\n    str r0, [sp, #4]\n    add r6, r5, #0\n    str r5, [sp]\n    add r4, r0, #0\n    add r7, #0x58\n    mov r1, #0x21\n    ldr r2, [r6, #0x5c]\n    lsl r1, r1, #0xc\n    add r2, r2, r1\n    mov r1, #0x6a\n    add r0, r6, #0\n    lsl r1, r1, #0xe\n    add r0, #0x5c\n    str r2, [r6, #0x5c]\n    cmp r2, r1\n    blt _02248CA6\n    mov r1, #0x71\n    ldr r2, [r0]\n    lsl r1, r1, #0xe\n    sub r1, r2, r1\n    str r1, [r0]\n    ldr r0, [sp]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _02248CA6\n    ldr r0, [r5, #4]\n    mov r1, #1\n    add r0, r0, r4\n    ldr r0, [r0, #0x1c]\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #4]\n    mov r1, #1\n    add r0, r0, r4\n    ldr r0, [r0, #0x20]\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #4]\n    add r1, r7, #0\n    add r0, r0, r4\n    ldr r0, [r0, #0x1c]\n    bl Sprite_SetMatrix\n    add r2, r6, #0\n    add r2, #0x58\n    add r3, sp, #8\n    ldmia r2!, {r0, r1}\n    mov ip, r3\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    mov r0, #0xe\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #4]\n    mov r1, ip\n    add r0, r0, r4\n    ldr r0, [r0, #0x20]\n    bl Sprite_SetMatrix\n    ldr r0, [sp]\n    add r6, #0xc\n    add r0, r0, #4\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    add r4, #8\n    add r0, r0, #1\n    add r7, #0xc\n    str r0, [sp, #4]\n    cmp r0, #0x14\n    blt _02248C66\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov71_02248CF4(void) {
    /* Original at 0x02248CF4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _02248D0A\n    bl SysTask_GetData\n    ldr r0, [r0]\n    mov r1, #0\n    str r1, [r0]\n    add r0, r4, #0\n    bl SysTask_Destroy\n    pop {r4, pc}"
    );
    #endif
}

void ov71_02248D0C(void) {
    /* Original at 0x02248D0C */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    mov r1, #0x17\n    add r6, r0, #0\n    mov r0, #0x39\n    lsl r1, r1, #4\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _02248D78\n    str r6, [r4]\n    add r6, #0xc0\n    mov r0, #0x55\n    ldr r1, [r6]\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    mov r1, #2\n    bl Bg_GetYpos\n    lsl r1, r0, #0xc\n    mov r0, #0x56\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    sub r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #6\n    bl Bg_GetYpos\n    mov r1, #0x57\n    lsl r0, r0, #0xc\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r2, #0\n    add r0, r1, #4\n    str r2, [r4, r0]\n    add r0, r1, #0\n    add r0, #8\n    str r2, [r4, r0]\n    add r0, r1, #0\n    add r0, #0xc\n    str r5, [r4, r0]\n    add r1, #0x10\n    str r2, [r4, r1]\n    ldr r0, _02248D7C ; =ov71_02248D80\n    add r1, r4, #0\n    bl SysTask_CreateOnVBlankQueue\n    str r0, [r5]\n    cmp r0, #0\n    bne _02248D78\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}\n    nop\n    _02248D7C: .word ov71_02248D80"
    );
    #endif
}

void ov71_02248D80(void) {
    /* Original at 0x02248D80 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r3, #0x59\n    add r4, r1, #0\n    lsl r3, r3, #2\n    mov r0, #2\n    ldr r1, [r4, r3]\n    lsl r0, r0, #0x14\n    cmp r1, r0\n    bge _02248E02\n    sub r0, r3, #4\n    ldr r1, [r4, r0]\n    add r0, r3, #0\n    sub r0, #0x44\n    add r1, r1, r0\n    sub r0, r3, #4\n    str r1, [r4, r0]\n    add r5, r3, #0\n    ldr r1, [r4, r3]\n    ldr r0, [r4, r0]\n    sub r5, #0xc\n    add r0, r1, r0\n    str r0, [r4, r3]\n    add r0, r3, #0\n    sub r0, #0x10\n    ldr r5, [r4, r5]\n    ldr r3, [r4, r3]\n    ldr r0, [r4, r0]\n    sub r3, r5, r3\n    mov r1, #2\n    mov r2, #3\n    asr r3, r3, #0xc\n    bl BgSetPosTextAndCommit\n    mov r5, #0x55\n    lsl r5, r5, #2\n    add r3, r5, #0\n    ldr r0, [r4, r5]\n    add r3, #8\n    add r5, #0x10\n    ldr r6, [r4, r3]\n    ldr r3, [r4, r5]\n    mov r1, #6\n    sub r3, r6, r3\n    mov r2, #3\n    asr r3, r3, #0xc\n    bl BgSetPosTextAndCommit\n    mov r1, #0x59\n    lsl r1, r1, #2\n    mov r0, #2\n    ldr r2, [r4, r1]\n    lsl r0, r0, #0x12\n    cmp r2, r0\n    blt _02248E02\n    add r0, r1, #0\n    add r0, #8\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _02248E02\n    add r1, #8\n    ldr r0, [r4]\n    add r1, r4, r1\n    add r2, r4, #4\n    bl ov71_02248BBC\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov71_02248E04(void) {
    /* Original at 0x02248E04 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    beq _02248E2E\n    bl SysTask_GetData\n    add r4, r0, #0\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    mov r2, #0\n    str r2, [r1]\n    add r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov71_02248CF4\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_02248E30(void) {
    /* Original at 0x02248E30 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    add r5, r1, #0\n    mov r0, #0x39\n    mov r1, #0x14\n    add r7, r2, #0\n    add r6, r3, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _02248E70\n    lsl r0, r5, #0xc\n    str r0, [r4]\n    lsl r1, r7, #0xc\n    str r1, [r4, #8]\n    ldr r0, [r4]\n    sub r0, r1, r0\n    add r1, r6, #0\n    bl _s32_div_f\n    str r0, [r4, #4]\n    ldr r0, [sp]\n    str r6, [r4, #0xc]\n    add r1, r5, #0\n    str r0, [r4, #0x10]\n    bl ov71_02247708\n    ldr r0, _02248E74 ; =ov71_02248E78\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02248E74: .word ov71_02248E78"
    );
    #endif
}

void ov71_02248E78(void) {
    /* Original at 0x02248E78 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0xc]\n    sub r0, r0, #1\n    str r0, [r4, #0xc]\n    cmp r0, #0\n    ble _02248E9A\n    ldr r1, [r4]\n    ldr r0, [r4, #4]\n    add r1, r1, r0\n    str r1, [r4]\n    ldr r0, [r4, #0x10]\n    asr r1, r1, #0xc\n    bl ov71_02247708\n    pop {r3, r4, r5, pc}\n    ldr r1, [r4, #8]\n    ldr r0, [r4, #0x10]\n    asr r1, r1, #0xc\n    bl ov71_02247708\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_02248EB4(void) {
    /* Original at 0x02248EB4 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r5, #0\n    add r4, #0xdc\n    add r0, #0xd8\n    add r1, r4, #0\n    ldr r0, [r0]\n    add r1, #8\n    bl ov71_022476B4\n    add r0, r5, #0\n    add r0, #0xd8\n    add r1, r4, #0\n    ldr r0, [r0]\n    add r1, #0x20\n    bl ov71_022476D4\n    add r3, r4, #0\n    add r3, #8\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x14\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, r5, #0\n    add r0, #0xd4\n    ldr r0, [r0]\n    str r0, [r4, #4]\n    add r0, r5, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    add r5, #0xdc\n    str r0, [r5]\n    ldr r0, [r4, #0xc]\n    str r0, [r4, #0x28]\n    ldr r1, [r4, #0xc]\n    ldr r0, _02248F84 ; =0xFFFF8000\n    sub r0, r0, r1\n    mov r1, #0x1e\n    bl _s32_div_f\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    mov r2, #1\n    mov r1, #0x1e\n    add r0, #0x80\n    str r1, [r0]\n    mov r1, #0\n    str r1, [r4, #0x38]\n    str r1, [r4, #0x3c]\n    str r1, [r4, #0x40]\n    add r0, r4, #0\n    str r1, [r4, #0x44]\n    add r0, #0x54\n    strh r1, [r0]\n    add r0, r4, #0\n    lsl r2, r2, #0xe\n    add r0, #0x56\n    strh r2, [r0]\n    add r0, r4, #0\n    add r0, #0x5a\n    strh r1, [r0]\n    str r1, [r4, #0x7c]\n    add r2, r4, #0\n    add r0, r1, #0\n    add r3, r2, #0\n    add r3, #0x5c\n    strh r0, [r3]\n    add r3, r2, #0\n    add r3, #0x5e\n    strh r0, [r3]\n    add r3, r2, #0\n    add r3, #0x60\n    strh r0, [r3]\n    add r3, r2, #0\n    add r3, #0x62\n    add r1, r1, #1\n    add r2, #8\n    strh r0, [r3]\n    cmp r1, #3\n    blt _02248F38\n    mov r1, #0xd\n    str r0, [r4, #0x78]\n    add r0, r4, #0\n    lsl r1, r1, #8\n    mov r2, #0x1e\n    bl ov71_02248F8C\n    mov r1, #0x29\n    mov r2, #5\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    lsl r2, r2, #0xe\n    mov r3, #0x1e\n    bl ov71_02248FC8\n    ldr r0, _02248F88 ; =ov71_02249184\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    pop {r3, r4, r5, pc}\n    nop\n    _02248F84: .word 0xFFFF8000\n    _02248F88: .word ov71_02249184"
    );
    #endif
}

void ov71_02248F8C(void) {
    /* Original at 0x02248F8C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    beq _02248FBA\n    mov r0, #0x56\n    ldrsh r0, [r5, r0]\n    add r1, r6, #0\n    sub r0, r4, r0\n    bl _s32_div_f\n    add r1, r5, #0\n    add r1, #0x5a\n    strh r0, [r1]\n    mov r0, #0x56\n    ldrsh r1, [r5, r0]\n    mov r0, #0x5a\n    ldrsh r0, [r5, r0]\n    add r1, r1, r0\n    add r0, r5, #0\n    add r0, #0x56\n    strh r1, [r0]\n    b _02248FBE\n    add r0, #0x56\n    strh r4, [r0]\n    add r0, r5, #0\n    add r0, #0x58\n    strh r4, [r0]\n    str r6, [r5, #0x74]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov71_02248FC8(void) {
    /* Original at 0x02248FC8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    beq _02249000\n    ldr r0, [r5, #0x38]\n    add r1, r7, #0\n    sub r0, r4, r0\n    bl _s32_div_f\n    str r0, [r5, #0x40]\n    ldr r0, [r5, #0x3c]\n    add r1, r7, #0\n    sub r0, r6, r0\n    bl _s32_div_f\n    str r0, [r5, #0x44]\n    ldr r1, [r5, #0x38]\n    ldr r0, [r5, #0x40]\n    add r0, r1, r0\n    str r0, [r5, #0x38]\n    ldr r1, [r5, #0x3c]\n    ldr r0, [r5, #0x44]\n    add r0, r1, r0\n    str r0, [r5, #0x3c]\n    str r4, [r5, #0x48]\n    str r6, [r5, #0x4c]\n    str r7, [r5, #0x50]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov71_02249004(void) {
    /* Original at 0x02249004 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    beq _0224902A\n    lsl r0, r4, #3\n    str r0, [sp]\n    add r1, r5, r0\n    mov r0, #0x5c\n    ldrsh r0, [r1, r0]\n    add r1, r7, #0\n    sub r0, r6, r0\n    bl _s32_div_f\n    ldr r1, [sp]\n    add r1, r5, r1\n    add r1, #0x5e\n    strh r0, [r1]\n    lsl r1, r4, #3\n    add r0, r5, r1\n    add r0, #0x60\n    strh r6, [r0]\n    add r0, r5, r1\n    add r0, #0x62\n    strh r7, [r0]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov71_0224903C(void) {
    /* Original at 0x0224903C */
    /* Requires manual decompilation - 159 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x74]\n    cmp r0, #0\n    beq _02249068\n    sub r0, r0, #1\n    str r0, [r5, #0x74]\n    beq _0224905E\n    mov r0, #0x56\n    ldrsh r1, [r5, r0]\n    mov r0, #0x5a\n    ldrsh r0, [r5, r0]\n    add r1, r1, r0\n    add r0, r5, #0\n    add r0, #0x56\n    strh r1, [r0]\n    b _02249068\n    mov r0, #0x58\n    ldrsh r1, [r5, r0]\n    add r0, r5, #0\n    add r0, #0x56\n    strh r1, [r0]\n    mov r0, #0x54\n    ldrsh r1, [r5, r0]\n    mov r0, #0x56\n    ldrsh r0, [r5, r0]\n    add r1, r1, r0\n    add r0, r5, #0\n    add r0, #0x54\n    strh r1, [r0]\n    add r0, r5, #0\n    add r0, #0x54\n    ldrh r0, [r0]\n    mov r1, #0xb6\n    bl _s32_div_f\n    add r4, r0, #0\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    cmp r4, r0\n    blt _02249090\n    sub r4, r4, r0\n    ldr r0, [r5, #0x50]\n    cmp r0, #0\n    beq _022490B6\n    ldr r1, [r5, #0x38]\n    ldr r0, [r5, #0x40]\n    add r0, r1, r0\n    str r0, [r5, #0x38]\n    ldr r1, [r5, #0x3c]\n    ldr r0, [r5, #0x44]\n    add r0, r1, r0\n    str r0, [r5, #0x3c]\n    ldr r0, [r5, #0x50]\n    sub r0, r0, #1\n    str r0, [r5, #0x50]\n    bne _022490B6\n    ldr r0, [r5, #0x48]\n    str r0, [r5, #0x38]\n    ldr r0, [r5, #0x4c]\n    str r0, [r5, #0x3c]\n    lsl r0, r4, #0x10\n    ldr r6, [r5, #0x38]\n    lsr r0, r0, #0x10\n    bl GF_CosDegNoWrap\n    asr r1, r0, #0x1f\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    mov r3, #2\n    mov r6, #0\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    adc r1, r6\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    ldr r2, [r5, #8]\n    orr r1, r0\n    add r0, r2, r1\n    str r0, [r5, #0x14]\n    lsl r0, r4, #0x10\n    ldr r6, [r5, #0x3c]\n    lsr r0, r0, #0x10\n    bl GF_SinDegNoWrap\n    asr r1, r0, #0x1f\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    mov r4, #2\n    mov r3, #0\n    lsl r4, r4, #0xa\n    add r4, r0, r4\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r4, #0xc\n    ldr r2, [r5, #0x10]\n    orr r1, r0\n    add r0, r2, r1\n    str r0, [r5, #0x1c]\n    mov r0, #0x22\n    ldrsh r1, [r5, r0]\n    mov r0, #0x56\n    ldrsh r0, [r5, r0]\n    mov r2, #0x5e\n    mov r6, #0x60\n    add r0, r1, r0\n    strh r0, [r5, #0x22]\n    add r0, r5, #0\n    mov r1, #0x5c\n    add r4, r0, #0\n    add r4, #0x62\n    ldrh r4, [r4]\n    cmp r4, #0\n    beq _02249156\n    add r4, r0, #0\n    add r4, #0x62\n    ldrh r4, [r4]\n    sub r7, r4, #1\n    add r4, r0, #0\n    add r4, #0x62\n    strh r7, [r4]\n    add r4, r0, #0\n    add r4, #0x62\n    ldrh r4, [r4]\n    cmp r4, #0\n    bne _0224914A\n    ldrsh r7, [r0, r6]\n    add r4, r0, #0\n    add r4, #0x5c\n    strh r7, [r4]\n    b _02249156\n    ldrsh r7, [r0, r1]\n    ldrsh r4, [r0, r2]\n    add r7, r7, r4\n    add r4, r0, #0\n    add r4, #0x5c\n    strh r7, [r4]\n    add r3, r3, #1\n    add r0, #8\n    cmp r3, #3\n    blt _0224911E\n    mov r0, #0x20\n    ldrsh r1, [r5, r0]\n    mov r0, #0x5c\n    ldrsh r0, [r5, r0]\n    add r0, r1, r0\n    strh r0, [r5, #0x20]\n    mov r0, #0x22\n    ldrsh r1, [r5, r0]\n    mov r0, #0x64\n    ldrsh r0, [r5, r0]\n    add r0, r1, r0\n    strh r0, [r5, #0x22]\n    mov r0, #0x24\n    ldrsh r1, [r5, r0]\n    mov r0, #0x6c\n    ldrsh r0, [r5, r0]\n    add r0, r1, r0\n    strh r0, [r5, #0x24]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov71_02249184(void) {
    /* Original at 0x02249184 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _022491E4\n    ldr r1, [r4, #0x28]\n    ldr r0, [r4, #0x2c]\n    add r0, r1, r0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x80\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #0\n    bgt _022491E4\n    mov r1, #2\n    lsl r1, r1, #8\n    str r1, [r4, #0x30]\n    mov r0, #0\n    lsl r1, r1, #5\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x3c\n    bl ov71_02248FC8\n    ldr r2, _02249200 ; =0xFFFFF800\n    add r0, r4, #0\n    mov r1, #0\n    mov r3, #0x1e\n    bl ov71_02249004\n    mov r0, #1\n    str r0, [r4, #0x7c]\n    ldr r1, _02249204 ; =ov71_02249208\n    add r0, r5, #0\n    bl SysTask_SetFunc\n    add r0, r4, #0\n    bl ov71_0224903C\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x14\n    bl ov71_022476C4\n    ldr r0, [r4]\n    add r4, #0x20\n    add r1, r4, #0\n    bl ov71_022476EC\n    pop {r3, r4, r5, pc}\n    _02249200: .word 0xFFFFF800\n    _02249204: .word ov71_02249208"
    );
    #endif
}

void ov71_02249208(void) {
    /* Original at 0x02249208 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0x78]\n    cmp r0, #0\n    bne _02249252\n    ldr r1, [r4, #0x2c]\n    ldr r0, [r4, #0x30]\n    add r1, r1, r0\n    str r1, [r4, #0x2c]\n    ldr r0, [r4, #0x28]\n    add r0, r0, r1\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    bl ov71_0224903C\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x14\n    bl ov71_022476C4\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x20\n    bl ov71_022476EC\n    ldr r0, [r4]\n    bl ov71_02247738\n    cmp r0, #0\n    bne _02249252\n    ldr r0, [r4]\n    mov r1, #0\n    bl ov71_02247704\n    mov r0, #1\n    str r0, [r4, #0x78]\n    pop {r4, pc}"
    );
    #endif
}

void ov71_02249254(void) {
    SysTask_GetData();
}

void ov71_02249260(void) {
    SysTask_GetData();
}

void ov71_0224926C(void) {
    /* Original at 0x0224926C */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    bl SysTask_GetData\n    add r4, r0, #0\n    mov r1, #0\n    str r1, [r4, #0x78]\n    add r0, sp, #0\n    strh r1, [r0, #4]\n    ldrh r1, [r0, #4]\n    strh r1, [r0, #2]\n    strh r1, [r0]\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl ov71_0224782C\n    ldr r0, [r4, #4]\n    add r1, sp, #0\n    bl ov71_0224780C\n    ldr r1, _022492F4 ; =0x000058CC\n    mov r0, #2\n    lsl r0, r0, #0x12\n    str r1, [r4, #0x2c]\n    sub r0, r1, r0\n    str r0, [r4, #0x28]\n    add r0, r4, #0\n    mov r1, #0\n    mov r3, #0x14\n    add r0, #0x80\n    str r3, [r0]\n    ldr r0, [r4, #0x28]\n    add r2, r1, #0\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    bl ov71_02248FC8\n    mov r2, #0x56\n    ldrsh r2, [r4, r2]\n    add r0, r4, #0\n    mov r1, #1\n    neg r2, r2\n    mov r3, #0x1e\n    bl ov71_02249004\n    mov r1, #2\n    add r2, r1, #0\n    add r0, r4, #0\n    add r2, #0xfe\n    mov r3, #0x32\n    bl ov71_02249004\n    mov r1, #2\n    ldr r0, [r4]\n    lsl r1, r1, #0xc\n    bl ov71_02247730\n    ldr r0, [r4]\n    mov r1, #1\n    bl ov71_02247704\n    ldr r1, _022492F8 ; =ov71_022492FC\n    add r0, r5, #0\n    bl SysTask_SetFunc\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _022492F4: .word 0x000058CC\n    _022492F8: .word ov71_022492FC"
    );
    #endif
}

void ov71_022492FC(void) {
    /* Original at 0x022492FC */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov71_0224903C\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0224933C\n    ldr r1, [r4, #0x28]\n    ldr r0, [r4, #0x2c]\n    add r0, r1, r0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x80\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0224933C\n    ldr r1, _02249354 ; =ov71_02249358\n    add r0, r5, #0\n    bl SysTask_SetFunc\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x14\n    bl ov71_022476C4\n    ldr r0, [r4]\n    add r4, #0x20\n    add r1, r4, #0\n    bl ov71_022476EC\n    pop {r3, r4, r5, pc}\n    nop\n    _02249354: .word ov71_02249358"
    );
    #endif
}

void ov71_02249358(void) {
    /* Original at 0x02249358 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov71_0224903C\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x80\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #0x6e\n    ble _0224939A\n    ldr r1, [r4, #0x28]\n    ldr r0, _022493B0 ; =0xFFFC5800\n    sub r0, r0, r1\n    mov r1, #0x35\n    bl _s32_div_f\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    mov r1, #0x35\n    add r0, #0x80\n    str r1, [r0]\n    ldr r1, _022493B4 ; =ov71_022493B8\n    add r0, r5, #0\n    bl SysTask_SetFunc\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x14\n    bl ov71_022476C4\n    ldr r0, [r4]\n    add r4, #0x20\n    add r1, r4, #0\n    bl ov71_022476EC\n    pop {r3, r4, r5, pc}\n    _022493B0: .word 0xFFFC5800\n    _022493B4: .word ov71_022493B8"
    );
    #endif
}

void ov71_022493B8(void) {
    /* Original at 0x022493B8 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov71_0224903C\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _022493F8\n    ldr r1, [r4, #0x28]\n    ldr r0, [r4, #0x2c]\n    add r0, r1, r0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x80\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _022493F8\n    ldr r1, _02249410 ; =ov71_02249414\n    add r0, r5, #0\n    bl SysTask_SetFunc\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x14\n    bl ov71_022476C4\n    ldr r0, [r4]\n    add r4, #0x20\n    add r1, r4, #0\n    bl ov71_022476EC\n    pop {r3, r4, r5, pc}\n    nop\n    _02249410: .word ov71_02249414"
    );
    #endif
}

void ov71_02249414(void) {
    /* Original at 0x02249414 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov71_0224903C\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x80\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #1\n    ble _02249446\n    mov r0, #2\n    lsl r0, r0, #0x10\n    str r0, [r4, #0x2c]\n    ldr r1, _0224945C ; =ov71_02249460\n    add r0, r5, #0\n    bl SysTask_SetFunc\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x14\n    bl ov71_022476C4\n    ldr r0, [r4]\n    add r4, #0x20\n    add r1, r4, #0\n    bl ov71_022476EC\n    pop {r3, r4, r5, pc}\n    _0224945C: .word ov71_02249460"
    );
    #endif
}

void ov71_02249460(void) {
    /* Original at 0x02249460 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0x78]\n    cmp r0, #0\n    bne _0224949C\n    add r0, r4, #0\n    bl ov71_0224903C\n    ldr r1, [r4, #0x28]\n    ldr r0, [r4, #0x2c]\n    add r0, r1, r0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x18]\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x14\n    bl ov71_022476C4\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x20\n    bl ov71_022476EC\n    ldr r0, [r4]\n    bl ov71_02247738\n    cmp r0, #0\n    bne _0224949C\n    mov r0, #1\n    str r0, [r4, #0x78]\n    pop {r4, pc}"
    );
    #endif
}

void ov71_022494A0(void) {
    /* Original at 0x022494A0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x39\n    mov r1, #0xa4\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _022494CA\n    str r5, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl ov71_02247384\n    str r0, [r4, #0x24]\n    mov r0, #0\n    str r0, [r4, #0x28]\n    add r0, r4, #0\n    add r0, #0x34\n    bl ov71_02249988\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_022494D0(void) {
    /* Original at 0x022494D0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _022494FE\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    add r0, r4, #0\n    bl ov71_022497C8\n    add r0, r4, #0\n    bl ov71_022498E0\n    add r0, r4, #0\n    bl ov71_02249970\n    add r0, r4, #0\n    add r0, #0x34\n    bl ov71_02249990\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov71_02249500(void) {
    /* Original at 0x02249500 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r2, [r4]\n    add r5, r0, #0\n    cmp r2, #2\n    bhs _0224952E\n    lsl r3, r2, #2\n    ldr r2, _02249534 ; =ov71_0224BD7C\n    add r1, r5, #4\n    ldr r2, [r2, r3]\n    blx r2\n    cmp r0, #0\n    beq _02249524\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r5, #4]\n    add r0, r5, #0\n    bl ov71_02249538\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _02249534: .word ov71_0224BD7C"
    );
    #endif
}

void ov71_02249538(void) {
    /* Original at 0x02249538 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x28]\n    cmp r0, #0\n    beq _02249554\n    bl G3X_Reset\n    ldr r0, [r4, #0x28]\n    bl ov71_022474CC\n    mov r0, #0\n    add r1, r0, #0\n    bl RequestSwap3DBuffers\n    pop {r4, pc}"
    );
    #endif
}

void ov71_02249558(void) {
    /* Original at 0x02249558 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov71_02249670\n    add r0, r4, #0\n    bl ov71_022497E0\n    add r0, r4, #0\n    bl ov71_022498F0\n    mov r2, #0\n    ldr r0, _02249598 ; =ov71_02249C98\n    add r1, r4, #0\n    str r2, [r4, #0xc]\n    bl SysTask_CreateOnVWaitQueue\n    mov r0, #3\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    ldr r3, _0224959C ; =0x00007FFF\n    mov r0, #0\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _02249598: .word ov71_02249C98\n    _0224959C: .word 0x00007FFF"
    );
    #endif
}

void ov71_022495A0(void) {
    /* Original at 0x022495A0 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r0, #4\n    bhi _0224965C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022495BA: ; jump table\n    mov r0, #0\n    str r0, [r5, #8]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224965C\n    ldr r0, [r5, #8]\n    add r0, r0, #1\n    str r0, [r5, #8]\n    cmp r0, #0xa\n    ble _0224965C\n    ldr r0, _02249664 ; =0x000006AB\n    bl PlaySE\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x34\n    bl ov71_022499A4\n    ldr r0, [r5, #0x2c]\n    mov r1, #1\n    bl ov71_02247704\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224965C\n    add r0, r5, #0\n    add r0, #0x34\n    bl ov71_02249A50\n    cmp r0, #0\n    beq _0224965C\n    ldr r0, _02249668 ; =0x000006AC\n    bl PlaySE\n    ldr r0, [r5, #0x20]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5, #0x20]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224965C\n    ldr r0, [r5, #0x20]\n    bl Sprite_IsAnimated\n    cmp r0, #0\n    bne _0224965C\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0\n    ldr r3, _0224966C ; =0x00007FFF\n    add r1, r0, #0\n    add r2, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224965C\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0224965C\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _02249664: .word 0x000006AB\n    _02249668: .word 0x000006AC\n    _0224966C: .word 0x00007FFF"
    );
    #endif
}

void ov71_02249670(void) {
    /* Original at 0x02249670 */
    /* Requires manual decompilation - 149 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, _022497B4 ; =ov71_0224BDC0\n    bl GfGfx_SetBanks\n    ldr r2, _022497B8 ; =0x04000304\n    ldr r0, _022497BC ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    ldr r0, _022497C0 ; =ov71_0224BD84\n    bl SetBothScreensModesAndDisable\n    ldr r0, [r4, #0x24]\n    ldr r2, _022497C4 ; =ov71_0224BDA4\n    mov r1, #3\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x24]\n    ldr r2, _022497C4 ; =ov71_0224BDA4\n    mov r1, #7\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4]\n    bl ov71_022473A0\n    cmp r0, #3\n    bhi _022496C2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022496BA: ; jump table\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    mov r7, #0x10\n    mov r6, #0x11\n    mov r5, #0\n    b _022496F0\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    mov r7, #0x10\n    mov r6, #0x11\n    mov r5, #0x20\n    b _022496F0\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    mov r7, #0x10\n    mov r6, #0x11\n    mov r5, #0x40\n    b _022496F0\n    mov r0, #0x18\n    str r0, [sp, #0x10]\n    mov r7, #0x19\n    mov r6, #0x1a\n    mov r5, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x24]\n    mov r0, #0x59\n    add r1, r7, #0\n    mov r3, #3\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x24]\n    mov r0, #0x59\n    add r1, r7, #0\n    mov r3, #7\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    ldr r2, [r4, #0x24]\n    mov r0, #0x59\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    ldr r2, [r4, #0x24]\n    mov r0, #0x59\n    mov r3, #7\n    bl GfGfxLoader_LoadScrnData\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0x59\n    add r1, r6, #0\n    add r3, r5, #0\n    bl GfGfxLoader_GXLoadPalWithSrcOffset\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0x59\n    add r1, r6, #0\n    mov r2, #4\n    add r3, r5, #0\n    bl GfGfxLoader_GXLoadPalWithSrcOffset\n    mov r1, #3\n    add r3, r1, #0\n    ldr r0, [r4, #0x24]\n    add r2, r1, #0\n    add r3, #0xfd\n    bl BgSetPosTextAndCommit\n    ldr r0, [r4, #0x24]\n    mov r1, #7\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _022497B4: .word ov71_0224BDC0\n    _022497B8: .word 0x04000304\n    _022497BC: .word 0xFFFF7FFF\n    _022497C0: .word ov71_0224BD84\n    _022497C4: .word ov71_0224BDA4"
    );
    #endif
}

void ov71_022497C8(void) {
    FreeBgTilemapBuffer(*((u32*)(r0 + 0x24)), 3);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x24)), 7);
}

void ov71_022497E0(void) {
    /* Original at 0x022497E0 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x24\n    add r4, r0, #0\n    bl NNS_G3dInit\n    bl G3X_InitMtxStack\n    ldr r0, _022498B4 ; =0x04000060\n    ldr r1, _022498B8 ; =0xFFFFCFFD\n    ldrh r2, [r0]\n    and r2, r1\n    strh r2, [r0]\n    ldrh r3, [r0]\n    add r2, r1, #2\n    and r3, r2\n    mov r2, #0x10\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r3, [r0]\n    ldr r2, _022498BC ; =0x0000CFFB\n    and r2, r3\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrh r3, [r0]\n    add r1, r1, #2\n    and r3, r2\n    mov r2, #8\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r2, [r0]\n    and r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0]\n    ldr r0, _022498C0 ; =ov71_0224BD94\n    bl G3X_SetEdgeColorTable\n    mov r1, #0\n    ldr r0, _022498C4 ; =0x000043FF\n    ldr r2, _022498C8 ; =0x00007FFF\n    mov r3, #0x3f\n    str r1, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _022498CC ; =0x04000540\n    mov r0, #2\n    str r0, [r1]\n    ldr r0, _022498D0 ; =0xBFFF0000\n    str r0, [r1, #0x40]\n    mov r0, #1\n    add r1, r0, #0\n    bl GF_3DVramMan_InitFrameTexVramManager\n    mov r0, #1\n    lsl r0, r0, #0xe\n    mov r1, #1\n    bl GF_3DVramMan_InitFramePlttVramManager\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r1, _022498D4 ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    strh r2, [r1]\n    mov r1, #0\n    mov r0, #1\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov71_0224744C\n    str r0, [r4, #0x28]\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [r4, #0x28]\n    mov r2, #0x59\n    mov r3, #0x1b\n    bl ov71_02247610\n    ldr r1, _022498D8 ; =0x000018E3\n    str r0, [r4, #0x2c]\n    add r0, sp, #0x10\n    strh r1, [r0]\n    mov r1, #0\n    strh r1, [r0, #2]\n    strh r1, [r0, #4]\n    ldr r0, [r4, #0x28]\n    add r1, sp, #0x10\n    bl ov71_0224780C\n    ldr r0, [r4, #0x28]\n    ldr r1, _022498DC ; =0x000007D2\n    bl ov71_0224783C\n    ldr r0, [r4, #0x28]\n    add r1, sp, #0x18\n    bl ov71_022477EC\n    add sp, #0x24\n    pop {r3, r4, pc}\n    nop\n    _022498B4: .word 0x04000060\n    _022498B8: .word 0xFFFFCFFD\n    _022498BC: .word 0x0000CFFB\n    _022498C0: .word ov71_0224BD94\n    _022498C4: .word 0x000043FF\n    _022498C8: .word 0x00007FFF\n    _022498CC: .word 0x04000540\n    _022498D0: .word 0xBFFF0000\n    _022498D4: .word 0x04000008\n    _022498D8: .word 0x000018E3\n    _022498DC: .word 0x000007D2"
    );
    #endif
}

void ov71_022498E0(void) {
    ov71_02247498();
}

void ov71_022498F0(void) {
    /* Original at 0x022498F0 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x70\n    add r4, r0, #0\n    add r0, #0x10\n    mov r1, #0x59\n    mov r2, #7\n    mov r3, #8\n    bl ov71_022472C4\n    add r0, sp, #0x5c\n    bl NNS_G2dInitImagePaletteProxy\n    add r0, sp, #0x38\n    bl NNS_G2dInitImageProxy\n    mov r3, #0\n    str r3, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    add r0, sp, #0x38\n    str r0, [sp, #0x10]\n    mov r0, #0x59\n    mov r1, #9\n    bl GfGfxLoader_LoadImageMapping\n    mov r0, #0x39\n    str r0, [sp]\n    add r0, sp, #0x5c\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #0xa\n    mov r2, #1\n    mov r3, #0\n    bl GfGfxLoader_PartiallyLoadPalette\n    mov r0, #0\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, sp, #0x14\n    add r1, #0x10\n    add r2, sp, #0x38\n    add r3, sp, #0x5c\n    bl ov71_02247320\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #0x14\n    mov r2, #0x80\n    mov r3, #0x60\n    bl ov71_02247340\n    mov r1, #0\n    str r0, [r4, #0x20]\n    bl Sprite_SetDrawFlag\n    add sp, #0x70\n    pop {r4, pc}"
    );
    #endif
}

void ov71_02249970(void) {
    /* Original at 0x02249970 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x20]\n    cmp r0, #0\n    beq _0224997E\n    bl Sprite_Delete\n    add r4, #0x10\n    add r0, r4, #0\n    bl ov71_022472FC\n    pop {r4, pc}"
    );
    #endif
}

void ov71_02249988(void) {
    ((u32*)r0)[4] = 0;
}

void ov71_02249990(void) {
    SysTask_Destroy(0);
}

void ov71_022499A4(void) {
    /* Original at 0x022499A4 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    str r0, [r4]\n    ldr r1, [r0, #0x2c]\n    ldr r2, _02249A34 ; =0xFFFFD870\n    str r1, [r4, #0xc]\n    ldr r0, [r0, #0x28]\n    ldr r1, _02249A38 ; =0xFFF50E00\n    str r0, [r4, #8]\n    mov r0, #0\n    str r0, [r4, #0x10]\n    str r1, [r4, #0x14]\n    mov r1, #0xe2\n    lsl r1, r1, #0xc\n    str r1, [r4, #0x18]\n    add r1, r4, #0\n    add r1, #0x6c\n    strh r2, [r1]\n    add r1, r4, #0\n    ldr r2, _02249A3C ; =0xFFFFF550\n    add r1, #0x6e\n    strh r2, [r1]\n    ldr r1, _02249A40 ; =0x000134C4\n    str r1, [r4, #0x3c]\n    ldr r1, _02249A44 ; =0xFFFF4D56\n    str r1, [r4, #0x40]\n    str r0, [r4, #0x60]\n    str r0, [r4, #0x64]\n    mov r1, #2\n    str r0, [r4, #0x68]\n    lsl r1, r1, #0xc\n    strh r1, [r4, #0x34]\n    ldr r1, _02249A48 ; =0xFFFFE000\n    strh r1, [r4, #0x36]\n    strh r0, [r4, #0x38]\n    add r1, r4, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0x34\n    bl ov71_022476EC\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x54]\n    mov r0, #0x4a\n    lsl r0, r0, #0xa\n    str r0, [r4, #0x44]\n    mov r0, #0x63\n    lsl r0, r0, #0xa\n    str r0, [r4, #0x48]\n    mov r0, #0\n    str r0, [r4, #0x5c]\n    add r0, r4, #0\n    bl ov71_02249A98\n    add r1, r4, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0x28\n    bl ov71_022476C4\n    add r1, r4, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0x34\n    bl ov71_022476D4\n    ldr r0, _02249A4C ; =ov71_02249B64\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #4]\n    pop {r4, pc}\n    nop\n    _02249A34: .word 0xFFFFD870\n    _02249A38: .word 0xFFF50E00\n    _02249A3C: .word 0xFFFFF550\n    _02249A40: .word 0x000134C4\n    _02249A44: .word 0xFFFF4D56\n    _02249A48: .word 0xFFFFE000\n    _02249A4C: .word ov71_02249B64"
    );
    #endif
}

void ov71_02249A50(void) {
    /* Original at 0x02249A50 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    cmp r0, #0\n    bne _02249A5A\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov71_02249A60(void) {
    /* Original at 0x02249A60 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r4, [sp, #0x18]\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r4, #0\n    beq _02249A96\n    ldr r0, [r5, #0x44]\n    sub r0, r1, r0\n    add r1, r4, #0\n    bl _s32_div_f\n    str r0, [r5, #0x4c]\n    ldr r0, [r5, #0x48]\n    add r1, r4, #0\n    sub r0, r6, r0\n    bl _s32_div_f\n    str r0, [r5, #0x50]\n    ldr r0, [r5, #0x54]\n    add r1, r4, #0\n    sub r0, r7, r0\n    bl _s32_div_f\n    str r0, [r5, #0x58]\n    ldr r0, [sp, #0x18]\n    str r0, [r5, #0x5c]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov71_02249A98(void) {
    /* Original at 0x02249A98 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, #0x6c\n    ldrh r0, [r0]\n    mov r1, #0xb6\n    bl _s32_div_f\n    add r4, r0, #0\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    cmp r4, r0\n    blt _02249AB2\n    sub r4, r4, r0\n    mov r0, #0x6c\n    ldrsh r1, [r5, r0]\n    mov r0, #0x6e\n    ldrsh r0, [r5, r0]\n    add r1, r1, r0\n    add r0, r5, #0\n    add r0, #0x6c\n    strh r1, [r0]\n    ldr r0, [r5, #0x5c]\n    cmp r0, #0\n    beq _02249AEC\n    ldr r1, [r5, #0x44]\n    ldr r0, [r5, #0x4c]\n    add r0, r1, r0\n    str r0, [r5, #0x44]\n    ldr r1, [r5, #0x48]\n    ldr r0, [r5, #0x50]\n    add r0, r1, r0\n    str r0, [r5, #0x48]\n    ldr r1, [r5, #0x54]\n    ldr r0, [r5, #0x58]\n    add r1, r1, r0\n    str r1, [r5, #0x54]\n    ldr r0, [r5, #0xc]\n    bl ov71_02247730\n    ldr r0, [r5, #0x5c]\n    sub r0, r0, #1\n    str r0, [r5, #0x5c]\n    lsl r0, r4, #0x10\n    ldr r6, [r5, #0x44]\n    lsr r0, r0, #0x10\n    bl GF_CosDegNoWrap\n    asr r1, r0, #0x1f\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [r5, #0x1c]\n    lsl r0, r4, #0x10\n    ldr r6, [r5, #0x48]\n    lsr r0, r0, #0x10\n    bl GF_SinDegNoWrap\n    asr r1, r0, #0x1f\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [r5, #0x20]\n    add r1, r5, #0\n    str r3, [r5, #0x24]\n    mov r0, #0x34\n    ldrsh r2, [r5, r0]\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r2, r0\n    strh r0, [r5, #0x34]\n    ldr r0, [r5, #0xc]\n    add r1, #0x34\n    bl ov71_022476EC\n    add r0, r5, #0\n    add r1, r5, #0\n    add r5, #0x28\n    add r0, #0x1c\n    add r1, #0x10\n    add r2, r5, #0\n    bl VEC_Add\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov71_02249B64(void) {
    /* Original at 0x02249B64 */
    /* Requires manual decompilation - 132 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r1, #0\n    ldr r1, [r4, #0x68]\n    cmp r1, #0x3c\n    bge _02249B74\n    add r1, r1, #1\n    str r1, [r4, #0x68]\n    ldr r1, [r4, #0x60]\n    cmp r1, #4\n    bls _02249B7C\n    b _02249C8C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02249B88: ; jump table\n    ldr r1, [r4, #0x14]\n    ldr r0, [r4, #0x3c]\n    add r0, r1, r0\n    str r0, [r4, #0x14]\n    ldr r1, [r4, #0x18]\n    ldr r0, [r4, #0x40]\n    add r0, r1, r0\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    bl ov71_02249A98\n    add r1, r4, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0x28\n    bl ov71_022476C4\n    ldr r0, [r4, #0xc]\n    bl ov71_02247738\n    cmp r0, #0\n    beq _02249C8C\n    ldr r0, [r4, #0x60]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0x60]\n    pop {r3, r4, pc}\n    ldr r0, [r4, #0xc]\n    bl ov71_02247738\n    cmp r0, #0\n    bne _02249BE0\n    ldr r0, [r4]\n    bl ov71_02249C90\n    ldr r0, [r4, #0x60]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0x60]\n    pop {r3, r4, pc}\n    ldr r1, [r4, #0x14]\n    ldr r0, [r4, #0x3c]\n    add r0, r1, r0\n    str r0, [r4, #0x14]\n    ldr r1, [r4, #0x18]\n    ldr r0, [r4, #0x40]\n    add r0, r1, r0\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    bl ov71_02249A98\n    ldr r0, [r4, #0xc]\n    add r4, #0x28\n    add r1, r4, #0\n    bl ov71_022476C4\n    add sp, #4\n    pop {r3, r4, pc}\n    ldr r1, [r4, #0x14]\n    ldr r0, [r4, #0x3c]\n    add r0, r1, r0\n    str r0, [r4, #0x14]\n    ldr r1, [r4, #0x18]\n    ldr r0, [r4, #0x40]\n    add r0, r1, r0\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    bl ov71_02249A98\n    add r1, r4, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0x28\n    bl ov71_022476C4\n    ldr r0, [r4, #0x68]\n    cmp r0, #0x3c\n    blt _02249C8C\n    mov r1, #2\n    lsl r1, r1, #0xa\n    mov r0, #0xc\n    str r0, [sp]\n    add r0, r4, #0\n    add r2, r1, #0\n    lsr r3, r1, #2\n    bl ov71_02249A60\n    mov r0, #0\n    str r0, [r4, #0x64]\n    ldr r0, [r4, #0x60]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0x60]\n    pop {r3, r4, pc}\n    add r0, r4, #0\n    bl ov71_02249A98\n    add r1, r4, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0x28\n    bl ov71_022476C4\n    ldr r0, [r4, #0x64]\n    add r0, r0, #1\n    str r0, [r4, #0x64]\n    cmp r0, #0xc\n    blt _02249C8C\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl ov71_02247704\n    mov r0, #0\n    str r0, [r4, #0x64]\n    ldr r0, [r4, #0x60]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0x60]\n    pop {r3, r4, pc}\n    ldr r1, [r4, #0x64]\n    add r1, r1, #1\n    str r1, [r4, #0x64]\n    cmp r1, #8\n    ble _02249C8C\n    mov r1, #0\n    str r1, [r4, #4]\n    bl SysTask_Destroy\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov71_02249C90(void) {
    ((u32*)r0)[0xc] = 1;
}

void ov71_02249C98(void) {
    /* Original at 0x02249C98 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _02249CE4\n    mov r3, #0\n    ldr r1, _02249CE8 ; =0x00001150\n    str r3, [r4, #0xc]\n    add r0, sp, #0\n    strh r1, [r0]\n    strh r3, [r0, #2]\n    strh r3, [r0, #4]\n    mov r1, #3\n    ldr r0, [r4, #0x24]\n    add r2, r1, #0\n    bl BgSetPosTextAndCommit\n    mov r2, #3\n    add r3, r2, #0\n    ldr r0, [r4, #0x24]\n    mov r1, #7\n    add r3, #0xfd\n    bl BgSetPosTextAndCommit\n    ldr r0, [r4, #0x28]\n    add r1, sp, #0\n    bl ov71_0224781C\n    ldr r2, _02249CEC ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    add r0, r5, #0\n    bl SysTask_Destroy\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _02249CE8: .word 0x00001150\n    _02249CEC: .word 0x04000304"
    );
    #endif
}

void ov71_02249CF0(void) {
    /* Original at 0x02249CF0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x39\n    mov r1, #0x24\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _02249D0E\n    str r5, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl ov71_02247384\n    str r0, [r4, #0xc]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_02249D14(void) {
    /* Original at 0x02249D14 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _02249D24\n    bl ov71_0224A080\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov71_02249D28(void) {
    /* Original at 0x02249D28 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r2, [r4]\n    add r5, r0, #0\n    cmp r2, #2\n    bhs _02249D50\n    lsl r3, r2, #2\n    ldr r2, _02249D54 ; =ov71_0224BDE8\n    add r1, r5, #4\n    ldr r2, [r2, r3]\n    blx r2\n    cmp r0, #0\n    beq _02249D4C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r5, #4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _02249D54: .word ov71_0224BDE8"
    );
    #endif
}

void ov71_02249D58(void) {
    /* Original at 0x02249D58 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    bl ov71_02249E6C\n    mov r0, #8\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    ldr r3, _02249D7C ; =0x00007FFF\n    mov r0, #0\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    mov r0, #1\n    add sp, #0xc\n    pop {pc}\n    _02249D7C: .word 0x00007FFF"
    );
    #endif
}

void ov71_02249D80(void) {
    /* Original at 0x02249D80 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _02249D98\n    cmp r0, #1\n    beq _02249DCA\n    cmp r0, #2\n    beq _02249DF6\n    b _02249E04\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _02249E04\n    ldr r0, _02249E0C ; =0xFFE80000\n    mov r2, #0\n    str r0, [r5, #0x10]\n    mov r0, #5\n    lsl r0, r0, #0x10\n    str r0, [r5, #0x14]\n    ldr r0, _02249E10 ; =0x00005999\n    add r1, r5, #0\n    str r0, [r5, #0x18]\n    ldr r0, _02249E14 ; =0xFFFFDDDE\n    str r0, [r5, #0x1c]\n    mov r0, #0x3c\n    str r0, [r5, #8]\n    ldr r0, _02249E18 ; =ov71_02249E24\n    str r2, [r5, #0x20]\n    bl SysTask_CreateOnVBlankQueue\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02249E04\n    ldr r0, [r5, #0x20]\n    cmp r0, #0\n    beq _02249E04\n    ldr r0, _02249E1C ; =0x000006A8\n    bl PlaySE\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0\n    ldr r3, _02249E20 ; =0x00007FFF\n    add r1, r0, #0\n    add r2, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02249E04\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _02249E04\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _02249E0C: .word 0xFFE80000\n    _02249E10: .word 0x00005999\n    _02249E14: .word 0xFFFFDDDE\n    _02249E18: .word ov71_02249E24\n    _02249E1C: .word 0x000006A8\n    _02249E20: .word 0x00007FFF"
    );
    #endif
}

void ov71_02249E24(void) {
    /* Original at 0x02249E24 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _02249E52\n    sub r0, r0, #1\n    str r0, [r4, #8]\n    ldr r1, [r4, #0x10]\n    ldr r0, [r4, #0x18]\n    add r0, r1, r0\n    str r0, [r4, #0x10]\n    ldr r1, [r4, #0x14]\n    ldr r0, [r4, #0x1c]\n    add r2, r1, r0\n    str r2, [r4, #0x14]\n    ldr r1, [r4, #0x10]\n    ldr r0, [r4, #0xc]\n    asr r1, r1, #0xc\n    asr r2, r2, #0xc\n    bl ov71_0224A0B8\n    pop {r3, r4, r5, pc}\n    mov r1, #0x2f\n    mvn r1, r1\n    ldr r0, [r4, #0xc]\n    add r2, r1, #0\n    bl ov71_0224A0B8\n    mov r0, #1\n    str r0, [r4, #0x20]\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_02249E6C(void) {
    /* Original at 0x02249E6C */
    /* Requires manual decompilation - 228 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, _0224A064 ; =ov71_0224BE54\n    bl GfGfx_SetBanks\n    ldr r2, _0224A068 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    ldr r0, _0224A06C ; =ov71_0224BDF0\n    bl SetBothScreensModesAndDisable\n    ldr r0, [r4, #0xc]\n    ldr r2, _0224A070 ; =ov71_0224BE00\n    mov r1, #1\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0xc]\n    ldr r2, _0224A070 ; =ov71_0224BE00\n    mov r1, #5\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0xc]\n    ldr r2, _0224A074 ; =ov71_0224BE1C\n    mov r1, #2\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0xc]\n    ldr r2, _0224A078 ; =ov71_0224BE38\n    mov r1, #3\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0xc]\n    ldr r2, _0224A078 ; =ov71_0224BE38\n    mov r1, #7\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0xc]\n    mov r0, #0x59\n    mov r1, #0x13\n    mov r3, #3\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0xc]\n    mov r0, #0x59\n    mov r1, #0x13\n    mov r3, #7\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0xc]\n    mov r0, #0x59\n    mov r1, #0x12\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0xc]\n    mov r0, #0x59\n    mov r1, #0x12\n    mov r3, #7\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x39\n    mov r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #0x14\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x39\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #0x14\n    mov r2, #4\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0xc8\n    str r0, [sp]\n    mov r1, #1\n    ldr r0, [r4, #0xc]\n    mov r2, #0\n    add r3, r1, #0\n    bl BG_FillCharDataRange\n    mov r0, #0xc8\n    str r0, [sp]\n    ldr r0, [r4, #0xc]\n    mov r1, #5\n    mov r2, #0\n    mov r3, #1\n    bl BG_FillCharDataRange\n    mov r0, #0xc8\n    str r0, [sp]\n    ldr r0, [r4, #0xc]\n    mov r1, #2\n    mov r2, #0\n    mov r3, #1\n    bl BG_FillCharDataRange\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, [r4]\n    mov r2, #1\n    mov r3, #0xe\n    bl ov71_02247124\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, [r4]\n    mov r2, #5\n    mov r3, #0xe\n    bl ov71_02247124\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [r4]\n    mov r1, #1\n    mov r2, #2\n    mov r3, #0xf\n    bl ov71_02247124\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x40\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    mov r2, #0xc8\n    bl FillBgTilemapRect\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x40\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r0, [r4, #0xc]\n    mov r1, #5\n    mov r2, #0xc8\n    bl FillBgTilemapRect\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x40\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r0, [r4, #0xc]\n    mov r1, #2\n    mov r2, #0xc8\n    bl FillBgTilemapRect\n    mov r0, #0x14\n    str r0, [sp]\n    mov r1, #0\n    str r1, [sp, #4]\n    ldr r0, [r4]\n    mov r2, #1\n    mov r3, #0xe\n    bl ov71_02247230\n    mov r0, #0x14\n    str r0, [sp]\n    mov r1, #0\n    str r1, [sp, #4]\n    ldr r0, [r4]\n    mov r2, #5\n    mov r3, #0xe\n    bl ov71_02247230\n    mov r2, #2\n    str r2, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    mov r1, #1\n    mov r3, #0xf\n    bl ov71_02247230\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0xc]\n    mov r1, #5\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0xc]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0xc]\n    ldr r2, _0224A07C ; =0xFFFFFE80\n    mov r1, #0x50\n    bl ov71_0224A0B8\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x10\n    pop {r4, pc}\n    _0224A064: .word ov71_0224BE54\n    _0224A068: .word 0x04000304\n    _0224A06C: .word ov71_0224BDF0\n    _0224A070: .word ov71_0224BE00\n    _0224A074: .word ov71_0224BE1C\n    _0224A078: .word ov71_0224BE38\n    _0224A07C: .word 0xFFFFFE80"
    );
    #endif
}

void ov71_0224A080(void) {
    /* Original at 0x0224A080 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0xc]\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0xc]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0xc]\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0xc]\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224A0B8(void) {
    /* Original at 0x0224A0B8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r3, _0224A0EC ; =0x000001FF\n    add r4, r1, #0\n    add r6, r2, #0\n    and r4, r3\n    add r5, r0, #0\n    mov r1, #2\n    mov r2, #3\n    and r3, r6\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #3\n    add r3, r4, #0\n    bl BgSetPosTextAndCommit\n    add r4, #0xc0\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #3\n    add r3, r4, #0\n    bl BgSetPosTextAndCommit\n    pop {r4, r5, r6, pc}\n    nop\n    _0224A0EC: .word 0x000001FF"
    );
    #endif
}

void ov71_0224A0F0(void) {
    /* Original at 0x0224A0F0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x39\n    mov r1, #0xb0\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _0224A124\n    str r5, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl ov71_02247384\n    str r0, [r4, #0x24]\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0xc]\n    add r0, r4, #0\n    add r0, #0x34\n    bl ov71_0224A5A8\n    ldr r0, _0224A128 ; =ov71_0224A8B0\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0224A128: .word ov71_0224A8B0"
    );
    #endif
}

void ov71_0224A12C(void) {
    /* Original at 0x0224A12C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _0224A15A\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    add r0, r4, #0\n    bl ov71_0224A3D8\n    add r0, r4, #0\n    bl ov71_0224A500\n    add r0, r4, #0\n    bl ov71_0224A590\n    add r0, r4, #0\n    add r0, #0x34\n    bl ov71_0224A5B0\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224A15C(void) {
    /* Original at 0x0224A15C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r2, [r4]\n    add r5, r0, #0\n    cmp r2, #2\n    bhs _0224A184\n    lsl r3, r2, #2\n    ldr r2, _0224A188 ; =ov71_0224BE7C\n    add r1, r5, #4\n    ldr r2, [r2, r3]\n    blx r2\n    cmp r0, #0\n    beq _0224A180\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r5, #4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _0224A188: .word ov71_0224BE7C"
    );
    #endif
}

void ov71_0224A18C(void) {
    /* Original at 0x0224A18C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov71_0224A278\n    add r0, r4, #0\n    bl ov71_0224A3F0\n    add r0, r4, #0\n    bl ov71_0224A510\n    mov r0, #8\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    ldr r3, _0224A1C0 ; =0x00007FFF\n    mov r0, #0\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0224A1C0: .word 0x00007FFF"
    );
    #endif
}

void ov71_0224A1C4(void) {
    /* Original at 0x0224A1C4 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r0, #3\n    bhi _0224A26A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224A1DE: ; jump table\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0224A26A\n    ldr r0, [r5, #0x20]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5, #0x20]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224A26A\n    ldr r0, [r5, #0x20]\n    bl Sprite_IsAnimated\n    cmp r0, #0\n    bne _0224A26A\n    ldr r0, _0224A270 ; =0x000006AA\n    bl PlaySE\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x34\n    bl ov71_0224A5C4\n    ldr r0, [r5, #0x2c]\n    mov r1, #1\n    bl ov71_02247704\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224A26A\n    add r5, #0x34\n    add r0, r5, #0\n    bl ov71_0224A684\n    cmp r0, #0\n    beq _0224A26A\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0\n    ldr r3, _0224A274 ; =0x00007FFF\n    add r1, r0, #0\n    add r2, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224A26A\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0224A26A\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0224A270: .word 0x000006AA\n    _0224A274: .word 0x00007FFF"
    );
    #endif
}

void ov71_0224A278(void) {
    /* Original at 0x0224A278 */
    /* Requires manual decompilation - 152 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, _0224A3C8 ; =ov71_0224BEC0\n    bl GfGfx_SetBanks\n    ldr r2, _0224A3CC ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    ldr r0, _0224A3D0 ; =ov71_0224BE84\n    bl SetBothScreensModesAndDisable\n    ldr r0, [r4, #0x24]\n    ldr r2, _0224A3D4 ; =ov71_0224BEA4\n    mov r1, #3\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x24]\n    ldr r2, _0224A3D4 ; =ov71_0224BEA4\n    mov r1, #7\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4]\n    bl ov71_022473A0\n    cmp r0, #3\n    bhi _0224A2CA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224A2C2: ; jump table\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    mov r7, #0x10\n    mov r6, #0x11\n    mov r5, #0\n    b _0224A2F8\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    mov r7, #0x10\n    mov r6, #0x11\n    mov r5, #0x20\n    b _0224A2F8\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    mov r7, #0x10\n    mov r6, #0x11\n    mov r5, #0x40\n    b _0224A2F8\n    mov r0, #0x18\n    str r0, [sp, #0x10]\n    mov r7, #0x19\n    mov r6, #0x1a\n    mov r5, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x24]\n    mov r0, #0x59\n    add r1, r7, #0\n    mov r3, #3\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x24]\n    mov r0, #0x59\n    add r1, r7, #0\n    mov r3, #7\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    ldr r2, [r4, #0x24]\n    mov r0, #0x59\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    ldr r2, [r4, #0x24]\n    mov r0, #0x59\n    mov r3, #7\n    bl GfGfxLoader_LoadScrnData\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0x59\n    add r1, r6, #0\n    add r3, r5, #0\n    bl GfGfxLoader_GXLoadPalWithSrcOffset\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0x59\n    add r1, r6, #0\n    mov r2, #4\n    add r3, r5, #0\n    bl GfGfxLoader_GXLoadPalWithSrcOffset\n    mov r1, #3\n    ldr r0, [r4, #0x24]\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    mov r2, #3\n    add r3, r2, #0\n    ldr r0, [r4, #0x24]\n    mov r1, #7\n    add r3, #0xfd\n    bl BgSetPosTextAndCommit\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    bl sub_0203A880\n    mov r0, #1\n    mov r1, #0x38\n    bl sub_0203A948\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0224A3C8: .word ov71_0224BEC0\n    _0224A3CC: .word 0x04000304\n    _0224A3D0: .word ov71_0224BE84\n    _0224A3D4: .word ov71_0224BEA4"
    );
    #endif
}

void ov71_0224A3D8(void) {
    FreeBgTilemapBuffer(*((u32*)(r0 + 0x24)), 3);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x24)), 7);
}

void ov71_0224A3F0(void) {
    /* Original at 0x0224A3F0 */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x24\n    add r4, r0, #0\n    bl NNS_G3dInit\n    bl G3X_InitMtxStack\n    ldr r0, _0224A4D0 ; =0x04000060\n    ldr r1, _0224A4D4 ; =0xFFFFCFFD\n    ldrh r2, [r0]\n    and r2, r1\n    strh r2, [r0]\n    ldrh r3, [r0]\n    add r2, r1, #2\n    and r3, r2\n    mov r2, #0x10\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r3, [r0]\n    ldr r2, _0224A4D8 ; =0x0000CFFB\n    and r2, r3\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrh r3, [r0]\n    add r1, r1, #2\n    and r3, r2\n    mov r2, #8\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r2, [r0]\n    and r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0]\n    ldr r0, _0224A4DC ; =ov71_0224BE94\n    bl G3X_SetEdgeColorTable\n    mov r1, #0\n    ldr r0, _0224A4E0 ; =0x000043FF\n    ldr r2, _0224A4E4 ; =0x00007FFF\n    mov r3, #0x3f\n    str r1, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _0224A4E8 ; =0x04000540\n    mov r0, #2\n    str r0, [r1]\n    ldr r0, _0224A4EC ; =0xBFFF0000\n    str r0, [r1, #0x40]\n    mov r0, #1\n    add r1, r0, #0\n    bl GF_3DVramMan_InitFrameTexVramManager\n    mov r0, #1\n    lsl r0, r0, #0xe\n    mov r1, #1\n    bl GF_3DVramMan_InitFramePlttVramManager\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r1, _0224A4F0 ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    strh r2, [r1]\n    mov r1, #0\n    mov r0, #1\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov71_0224744C\n    str r0, [r4, #0x28]\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [r4, #0x28]\n    mov r2, #0x59\n    mov r3, #0x1b\n    bl ov71_02247610\n    ldr r1, _0224A4F4 ; =0x000018E3\n    str r0, [r4, #0x2c]\n    add r0, sp, #0x10\n    strh r1, [r0]\n    mov r1, #0\n    strh r1, [r0, #2]\n    strh r1, [r0, #4]\n    ldr r0, [r4, #0x28]\n    add r1, sp, #0x10\n    bl ov71_0224780C\n    ldr r1, _0224A4F8 ; =0x00001150\n    add r0, sp, #0x10\n    strh r1, [r0]\n    ldr r0, [r4, #0x28]\n    add r1, sp, #0x10\n    bl ov71_0224781C\n    ldr r0, [r4, #0x28]\n    ldr r1, _0224A4FC ; =0x000007D2\n    bl ov71_0224783C\n    ldr r0, [r4, #0x28]\n    add r1, sp, #0x18\n    bl ov71_022477EC\n    add sp, #0x24\n    pop {r3, r4, pc}\n    _0224A4D0: .word 0x04000060\n    _0224A4D4: .word 0xFFFFCFFD\n    _0224A4D8: .word 0x0000CFFB\n    _0224A4DC: .word ov71_0224BE94\n    _0224A4E0: .word 0x000043FF\n    _0224A4E4: .word 0x00007FFF\n    _0224A4E8: .word 0x04000540\n    _0224A4EC: .word 0xBFFF0000\n    _0224A4F0: .word 0x04000008\n    _0224A4F4: .word 0x000018E3\n    _0224A4F8: .word 0x00001150\n    _0224A4FC: .word 0x000007D2"
    );
    #endif
}

void ov71_0224A500(void) {
    ov71_02247498();
}

void ov71_0224A510(void) {
    /* Original at 0x0224A510 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x70\n    add r4, r0, #0\n    add r0, #0x10\n    mov r1, #0x59\n    mov r2, #7\n    mov r3, #8\n    bl ov71_022472C4\n    add r0, sp, #0x5c\n    bl NNS_G2dInitImagePaletteProxy\n    add r0, sp, #0x38\n    bl NNS_G2dInitImageProxy\n    mov r3, #0\n    str r3, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    add r0, sp, #0x38\n    str r0, [sp, #0x10]\n    mov r0, #0x59\n    mov r1, #9\n    bl GfGfxLoader_LoadImageMapping\n    mov r0, #0x39\n    str r0, [sp]\n    add r0, sp, #0x5c\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #0xa\n    mov r2, #1\n    mov r3, #0\n    bl GfGfxLoader_PartiallyLoadPalette\n    mov r0, #1\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, sp, #0x14\n    add r1, #0x10\n    add r2, sp, #0x38\n    add r3, sp, #0x5c\n    bl ov71_02247320\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #0x14\n    mov r2, #0x80\n    mov r3, #0x60\n    bl ov71_02247340\n    mov r1, #0\n    str r0, [r4, #0x20]\n    bl Sprite_SetDrawFlag\n    add sp, #0x70\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224A590(void) {
    /* Original at 0x0224A590 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x20]\n    cmp r0, #0\n    beq _0224A59E\n    bl Sprite_Delete\n    add r4, #0x10\n    add r0, r4, #0\n    bl ov71_022472FC\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224A5A8(void) {
    ((u32*)r0)[4] = 0;
}

void ov71_0224A5B0(void) {
    SysTask_Destroy(0);
}

void ov71_0224A5C4(void) {
    /* Original at 0x0224A5C4 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r1, #0\n    str r0, [r4]\n    ldr r1, [r0, #0x2c]\n    ldr r2, _0224A664 ; =0xFFFFD870\n    str r1, [r4, #0xc]\n    ldr r0, [r0, #0x28]\n    ldr r1, _0224A668 ; =0x003D6C00\n    str r0, [r4, #8]\n    mov r0, #0\n    str r0, [r4, #0x10]\n    str r1, [r4, #0x14]\n    ldr r1, _0224A66C ; =0xFFE44000\n    str r1, [r4, #0x18]\n    add r1, r4, #0\n    add r1, #0x78\n    strh r2, [r1]\n    add r1, r4, #0\n    ldr r2, _0224A670 ; =0xFFFFF550\n    add r1, #0x7a\n    strh r2, [r1]\n    ldr r1, _0224A674 ; =0xFFFEF2C6\n    str r1, [r4, #0x3c]\n    ldr r1, _0224A678 ; =0x0000936D\n    str r1, [r4, #0x40]\n    str r0, [r4, #0x6c]\n    str r0, [r4, #0x70]\n    mov r1, #2\n    str r0, [r4, #0x74]\n    lsl r1, r1, #0xc\n    strh r1, [r4, #0x34]\n    ldr r1, _0224A67C ; =0xFFFFE000\n    strh r1, [r4, #0x36]\n    strh r0, [r4, #0x38]\n    add r1, r4, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0x34\n    bl ov71_022476EC\n    mov r3, #2\n    lsl r3, r3, #8\n    mov r1, #0x4a\n    mov r2, #0x63\n    str r3, [r4, #0x5c]\n    lsl r0, r3, #2\n    str r0, [r4, #0x44]\n    str r0, [r4, #0x48]\n    mov r0, #0\n    str r0, [r4, #0x68]\n    mov r0, #0xc\n    str r0, [sp]\n    add r0, r4, #0\n    lsl r1, r1, #0xa\n    lsl r2, r2, #0xa\n    lsl r3, r3, #3\n    bl ov71_0224A694\n    add r0, r4, #0\n    bl ov71_0224A6D8\n    add r1, r4, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0x28\n    bl ov71_022476C4\n    add r1, r4, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0x34\n    bl ov71_022476D4\n    ldr r0, _0224A680 ; =ov71_0224A7D0\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #4]\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0224A664: .word 0xFFFFD870\n    _0224A668: .word 0x003D6C00\n    _0224A66C: .word 0xFFE44000\n    _0224A670: .word 0xFFFFF550\n    _0224A674: .word 0xFFFEF2C6\n    _0224A678: .word 0x0000936D\n    _0224A67C: .word 0xFFFFE000\n    _0224A680: .word ov71_0224A7D0"
    );
    #endif
}

void ov71_0224A684(void) {
    /* Original at 0x0224A684 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    cmp r0, #0\n    bne _0224A68E\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov71_0224A694(void) {
    /* Original at 0x0224A694 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [sp, #0x18]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    str r0, [sp]\n    cmp r0, #0\n    beq _0224A6D4\n    ldr r0, [r5, #0x44]\n    ldr r1, [sp]\n    sub r0, r4, r0\n    bl _s32_div_f\n    str r0, [r5, #0x4c]\n    ldr r0, [r5, #0x48]\n    ldr r1, [sp]\n    sub r0, r6, r0\n    bl _s32_div_f\n    str r0, [r5, #0x50]\n    ldr r0, [r5, #0x5c]\n    ldr r1, [sp]\n    sub r0, r7, r0\n    bl _s32_div_f\n    str r0, [r5, #0x60]\n    str r4, [r5, #0x54]\n    str r6, [r5, #0x58]\n    ldr r0, [sp, #0x18]\n    str r7, [r5, #0x64]\n    str r0, [r5, #0x68]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov71_0224A6D8(void) {
    /* Original at 0x0224A6D8 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0224A7CC ; =_0224C020\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0224A7BA\n    add r0, r5, #0\n    add r0, #0x78\n    ldrh r0, [r0]\n    mov r1, #0xb6\n    bl _s32_div_f\n    add r4, r0, #0\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    cmp r4, r0\n    blt _0224A6FC\n    sub r4, r4, r0\n    mov r0, #0x78\n    ldrsh r1, [r5, r0]\n    mov r0, #0x7a\n    ldrsh r0, [r5, r0]\n    sub r1, r1, r0\n    add r0, r5, #0\n    add r0, #0x78\n    strh r1, [r0]\n    ldr r0, [r5, #0x68]\n    cmp r0, #0\n    beq _0224A744\n    sub r0, r0, #1\n    str r0, [r5, #0x68]\n    beq _0224A730\n    ldr r1, [r5, #0x44]\n    ldr r0, [r5, #0x4c]\n    add r0, r1, r0\n    str r0, [r5, #0x44]\n    ldr r1, [r5, #0x48]\n    ldr r0, [r5, #0x50]\n    add r0, r1, r0\n    str r0, [r5, #0x48]\n    ldr r1, [r5, #0x5c]\n    ldr r0, [r5, #0x60]\n    add r0, r1, r0\n    b _0224A73A\n    ldr r0, [r5, #0x54]\n    str r0, [r5, #0x44]\n    ldr r0, [r5, #0x58]\n    str r0, [r5, #0x48]\n    ldr r0, [r5, #0x64]\n    str r0, [r5, #0x5c]\n    ldr r0, [r5, #0xc]\n    ldr r1, [r5, #0x5c]\n    bl ov71_02247730\n    lsl r0, r4, #0x10\n    ldr r6, [r5, #0x44]\n    lsr r0, r0, #0x10\n    bl GF_CosDegNoWrap\n    asr r1, r0, #0x1f\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [r5, #0x1c]\n    lsl r0, r4, #0x10\n    ldr r6, [r5, #0x48]\n    lsr r0, r0, #0x10\n    bl GF_SinDegNoWrap\n    asr r1, r0, #0x1f\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [r5, #0x20]\n    add r1, r5, #0\n    str r3, [r5, #0x24]\n    mov r0, #0x34\n    ldrsh r2, [r5, r0]\n    mov r0, #3\n    lsl r0, r0, #8\n    sub r0, r2, r0\n    strh r0, [r5, #0x34]\n    ldr r0, [r5, #0xc]\n    add r1, #0x34\n    bl ov71_022476EC\n    add r0, r5, #0\n    add r1, r5, #0\n    add r5, #0x28\n    add r0, #0x1c\n    add r1, #0x10\n    add r2, r5, #0\n    bl VEC_Add\n    pop {r4, r5, r6, pc}\n    add r2, r5, #0\n    add r2, #0x10\n    ldmia r2!, {r0, r1}\n    add r5, #0x28\n    stmia r5!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r5]\n    pop {r4, r5, r6, pc}\n    nop\n    _0224A7CC: .word _0224C020"
    );
    #endif
}

void ov71_0224A7D0(void) {
    /* Original at 0x0224A7D0 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r1, [r4, #0x74]\n    cmp r1, #0x46\n    bge _0224A7DE\n    add r1, r1, #1\n    str r1, [r4, #0x74]\n    ldr r1, [r4, #0x6c]\n    cmp r1, #3\n    bhi _0224A8A4\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0224A7F0: ; jump table\n    add r0, r4, #0\n    bl ov71_0224A6D8\n    add r1, r4, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0x28\n    bl ov71_022476C4\n    ldr r0, [r4, #0x74]\n    add r0, r0, #1\n    str r0, [r4, #0x74]\n    cmp r0, #0xc\n    blt _0224A8A4\n    mov r0, #0\n    str r0, [r4, #0x74]\n    ldr r0, [r4, #0x6c]\n    add r0, r0, #1\n    str r0, [r4, #0x6c]\n    pop {r4, pc}\n    ldr r0, [r4, #0xc]\n    bl ov71_02247738\n    cmp r0, #0\n    bne _0224A836\n    ldr r0, [r4]\n    bl ov71_0224A8A8\n    ldr r0, [r4, #0x6c]\n    add r0, r0, #1\n    str r0, [r4, #0x6c]\n    pop {r4, pc}\n    ldr r1, [r4, #0x14]\n    ldr r0, [r4, #0x3c]\n    add r0, r1, r0\n    str r0, [r4, #0x14]\n    ldr r1, [r4, #0x18]\n    ldr r0, [r4, #0x40]\n    add r0, r1, r0\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    bl ov71_0224A6D8\n    ldr r0, [r4, #0xc]\n    add r4, #0x28\n    add r1, r4, #0\n    bl ov71_022476C4\n    pop {r4, pc}\n    ldr r1, [r4, #0x14]\n    ldr r0, [r4, #0x3c]\n    add r0, r1, r0\n    str r0, [r4, #0x14]\n    ldr r1, [r4, #0x18]\n    ldr r0, [r4, #0x40]\n    add r0, r1, r0\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    bl ov71_0224A6D8\n    add r1, r4, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0x28\n    bl ov71_022476C4\n    ldr r0, [r4, #0x74]\n    cmp r0, #0x46\n    blt _0224A8A4\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl ov71_02247704\n    mov r0, #0\n    str r0, [r4, #0x70]\n    ldr r0, [r4, #0x6c]\n    add r0, r0, #1\n    str r0, [r4, #0x6c]\n    pop {r4, pc}\n    ldr r1, [r4, #0x70]\n    add r1, r1, #1\n    str r1, [r4, #0x70]\n    cmp r1, #8\n    ble _0224A8A4\n    mov r1, #0\n    str r1, [r4, #4]\n    bl SysTask_Destroy\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224A8A8(void) {
    ((u32*)r0)[0xc] = 1;
}

void ov71_0224A8B0(void) {
    /* Original at 0x0224A8B0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4, #0x28]\n    cmp r0, #0\n    beq _0224A8CE\n    bl G3X_Reset\n    ldr r0, [r4, #0x28]\n    bl ov71_022474CC\n    mov r0, #0\n    add r1, r0, #0\n    bl RequestSwap3DBuffers\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _0224A910\n    ldr r1, _0224A914 ; =0x0000EEB0\n    add r0, sp, #0\n    strh r1, [r0]\n    mov r1, #0\n    strh r1, [r0, #2]\n    strh r1, [r0, #4]\n    mov r1, #3\n    add r3, r1, #0\n    ldr r0, [r4, #0x24]\n    add r2, r1, #0\n    add r3, #0xfd\n    bl BgSetPosTextAndCommit\n    ldr r0, [r4, #0x24]\n    mov r1, #7\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r4, #0x28]\n    add r1, sp, #0\n    bl ov71_0224781C\n    ldr r2, _0224A918 ; =0x04000304\n    ldr r0, _0224A91C ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    mov r0, #0\n    str r0, [r4, #0xc]\n    add sp, #8\n    pop {r4, pc}\n    _0224A914: .word 0x0000EEB0\n    _0224A918: .word 0x04000304\n    _0224A91C: .word 0xFFFF7FFF"
    );
    #endif
}

void ov71_0224A920(void) {
    /* Original at 0x0224A920 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x39\n    mov r1, #0x3c\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _0224A94E\n    str r5, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl ov71_02247384\n    str r0, [r4, #0xc]\n    mov r0, #0\n    str r0, [r4, #0x20]\n    str r0, [r4, #0x10]\n    str r0, [r4, #0x14]\n    str r0, [r4, #0x18]\n    str r0, [r4, #0x30]\n    str r0, [r4, #0x34]\n    str r0, [r4, #0x38]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_0224A954(void) {
    /* Original at 0x0224A954 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _0224A988\n    bl ov71_0224ADB0\n    add r0, r4, #0\n    bl ov71_0224AEF4\n    ldr r0, [r4, #0x30]\n    cmp r0, #0\n    beq _0224A96E\n    bl ov71_0224B068\n    ldr r0, [r4, #0x34]\n    cmp r0, #0\n    beq _0224A978\n    bl ov71_0224AFB8\n    ldr r0, [r4, #0x38]\n    cmp r0, #0\n    beq _0224A982\n    bl ov71_0224B11C\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224A98C(void) {
    /* Original at 0x0224A98C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r2, [r4]\n    add r5, r0, #0\n    cmp r2, #3\n    bhs _0224A9BA\n    lsl r3, r2, #2\n    ldr r2, _0224A9C0 ; =ov71_0224BEF0\n    add r1, r5, #4\n    ldr r2, [r2, r3]\n    blx r2\n    cmp r0, #0\n    beq _0224A9B0\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r5, #4]\n    add r0, r5, #0\n    bl ov71_0224A9C4\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _0224A9C0: .word ov71_0224BEF0"
    );
    #endif
}

void ov71_0224A9C4(void) {
    /* Original at 0x0224A9C4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x20]\n    cmp r0, #0\n    beq _0224A9F6\n    mov r0, #0x2a\n    ldrsh r1, [r4, r0]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    strh r0, [r4, #0x2a]\n    add r1, r4, #0\n    ldr r0, [r4, #0x24]\n    add r1, #0x28\n    bl ov71_022476EC\n    bl G3X_Reset\n    ldr r0, [r4, #0x20]\n    bl ov71_022474CC\n    mov r0, #0\n    add r1, r0, #0\n    bl RequestSwap3DBuffers\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224A9F8(void) {
    /* Original at 0x0224A9F8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov71_0224AB7C\n    add r0, r4, #0\n    bl ov71_0224ADE4\n    mov r0, #8\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    ldr r3, _0224AA24 ; =0x00007FFF\n    mov r0, #0\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0224AA24: .word 0x00007FFF"
    );
    #endif
}

void ov71_0224AA28(void) {
    /* Original at 0x0224AA28 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #6\n    bhi _0224AAF2\n    add r2, r1, r1\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0224AA40: ; jump table\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0224AAF2\n    mov r0, #0\n    str r0, [r4, #8]\n    add r0, r4, #0\n    add r4, #0x30\n    add r1, r4, #0\n    bl ov71_0224AFD4\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224AAF2\n    ldr r1, [r4, #8]\n    add r1, r1, #1\n    str r1, [r4, #8]\n    cmp r1, #8\n    ble _0224AAF2\n    add r4, #0x34\n    add r1, r4, #0\n    bl ov71_0224AF08\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224AAF2\n    ldr r0, [r4, #0x34]\n    cmp r0, #0\n    bne _0224AAF2\n    ldr r0, [r4, #0x30]\n    cmp r0, #0\n    bne _0224AAF2\n    add r0, r1, #1\n    str r0, [r5]\n    b _0224AAF2\n    mov r1, #0\n    add r0, #0x14\n    mvn r1, r1\n    bl ov71_02246C6C\n    str r0, [r4, #0x10]\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224AAF2\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0x1e\n    ble _0224AAF2\n    add r0, r4, #0\n    add r0, #0x38\n    str r0, [sp]\n    ldr r0, [r4, #0x24]\n    mov r1, #0x1f\n    mov r2, #0\n    mov r3, #0x28\n    bl ov71_0224B084\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224AAF2\n    ldr r0, [r4, #0x38]\n    cmp r0, #0\n    bne _0224AAF2\n    ldr r0, [r4, #0x10]\n    bl ov71_02246D40\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224AAF2\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    bne _0224AAF2\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_0224AAF8(void) {
    /* Original at 0x0224AAF8 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0224AB10\n    cmp r0, #1\n    beq _0224AB38\n    cmp r0, #2\n    beq _0224AB62\n    b _0224AB76\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    mov r3, #1\n    str r0, [sp]\n    add r0, r5, #0\n    str r3, [sp, #4]\n    add r0, #0x1c\n    str r0, [sp, #8]\n    ldr r0, [r5, #0xc]\n    lsl r1, r3, #0xc\n    lsl r2, r3, #0xa\n    bl ov71_02247000\n    str r0, [r5, #0x18]\n    mov r0, #0\n    str r0, [r5, #8]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224AB76\n    ldr r0, [r5, #8]\n    add r0, r0, #1\n    str r0, [r5, #8]\n    cmp r0, #0xd\n    ble _0224AB76\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224AB76\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0224AB76\n    ldr r0, [r5, #0x1c]\n    cmp r0, #0\n    beq _0224AB76\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov71_0224AB7C(void) {
    /* Original at 0x0224AB7C */
    /* Requires manual decompilation - 238 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, _0224AD94 ; =ov71_0224BF54\n    bl GfGfx_SetBanks\n    ldr r2, _0224AD98 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    ldr r0, _0224AD9C ; =ov71_0224BEFC\n    bl SetBothScreensModesAndDisable\n    ldr r0, [r4, #0xc]\n    ldr r2, _0224ADA0 ; =ov71_0224BF1C\n    mov r1, #2\n    mov r3, #1\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0xc]\n    ldr r2, _0224ADA0 ; =ov71_0224BF1C\n    mov r1, #6\n    mov r3, #1\n    bl InitBgFromTemplate\n    bl OS_DisableInterrupts\n    add r5, r0, #0\n    ldr r0, [r4, #0xc]\n    ldr r2, _0224ADA4 ; =ov71_0224BF38\n    mov r1, #3\n    mov r3, #2\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0xc]\n    ldr r2, _0224ADA4 ; =ov71_0224BF38\n    mov r1, #7\n    mov r3, #2\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    mov r1, #2\n    ldr r2, [r4, #0xc]\n    mov r0, #0x59\n    add r3, r1, #0\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0xc]\n    mov r0, #0x59\n    mov r1, #2\n    mov r3, #6\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0xc]\n    mov r0, #0x59\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0xc]\n    mov r0, #0x59\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnData\n    ldr r0, [r4]\n    bl ov71_022473A0\n    add r5, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x39\n    mov r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #3\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x39\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #3\n    mov r2, #4\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPal\n    ldr r0, _0224ADA8 ; =ov71_0224BEE8\n    lsl r1, r5, #1\n    ldrh r5, [r0, r1]\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x40\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0x59\n    mov r1, #3\n    mov r2, #0\n    add r3, r5, #0\n    bl GfGfxLoader_GXLoadPalWithSrcOffset\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x40\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0x59\n    mov r1, #3\n    mov r2, #4\n    add r3, r5, #0\n    bl GfGfxLoader_GXLoadPalWithSrcOffset\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0xc]\n    mov r0, #0x59\n    mov r1, #5\n    mov r3, #3\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0xc]\n    mov r0, #0x59\n    mov r1, #5\n    mov r3, #7\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0xc]\n    mov r0, #0x59\n    mov r1, #4\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0xc]\n    mov r0, #0x59\n    mov r1, #4\n    mov r3, #7\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x39\n    mov r1, #0x60\n    bl Heap_Alloc\n    add r5, r0, #0\n    beq _0224AD52\n    mov r0, #0\n    add r1, r5, #0\n    mov r2, #0x60\n    bl MIi_CpuClear32\n    add r0, r5, #0\n    mov r1, #0x60\n    bl DC_FlushRange\n    bl GX_BeginLoadBGExtPltt\n    bl GXS_BeginLoadBGExtPltt\n    mov r1, #6\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    mov r2, #0x60\n    bl GX_LoadBGExtPltt\n    mov r1, #6\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    mov r2, #0x60\n    bl GXS_LoadBGExtPltt\n    bl GX_EndLoadBGExtPltt\n    bl GXS_EndLoadBGExtPltt\n    add r0, r5, #0\n    bl Heap_Free\n    ldr r0, [r4, #0xc]\n    ldr r3, _0224ADAC ; =0xFFFFFE80\n    mov r1, #2\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    mov r2, #3\n    add r3, r2, #0\n    ldr r0, [r4, #0xc]\n    mov r1, #6\n    sub r3, #0xc3\n    bl BgSetPosTextAndCommit\n    mov r1, #3\n    ldr r0, [r4, #0xc]\n    add r2, r1, #0\n    mov r3, #0x43\n    bl BgSetPosTextAndCommit\n    mov r0, #7\n    mov r1, #0\n    bl ToggleBgLayer\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0224AD94: .word ov71_0224BF54\n    _0224AD98: .word 0x04000304\n    _0224AD9C: .word ov71_0224BEFC\n    _0224ADA0: .word ov71_0224BF1C\n    _0224ADA4: .word ov71_0224BF38\n    _0224ADA8: .word ov71_0224BEE8\n    _0224ADAC: .word 0xFFFFFE80"
    );
    #endif
}

void ov71_0224ADB0(void) {
    /* Original at 0x0224ADB0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _0224ADC0\n    ldr r0, [r4, #0x10]\n    bl ov71_02246D54\n    ldr r0, [r4, #0xc]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0xc]\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0xc]\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0xc]\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224ADE4(void) {
    /* Original at 0x0224ADE4 */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl NNS_G3dInit\n    bl G3X_InitMtxStack\n    ldr r0, _0224AEC8 ; =0x04000060\n    ldr r1, _0224AECC ; =0xFFFFCFFD\n    ldrh r2, [r0]\n    and r2, r1\n    strh r2, [r0]\n    ldrh r3, [r0]\n    add r2, r1, #2\n    and r3, r2\n    mov r2, #0x10\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r3, [r0]\n    ldr r2, _0224AED0 ; =0x0000CFFB\n    and r2, r3\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrh r3, [r0]\n    add r1, r1, #2\n    and r3, r2\n    mov r2, #8\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r2, [r0]\n    and r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0]\n    ldr r0, _0224AED4 ; =ov71_0224BF0C\n    bl G3X_SetEdgeColorTable\n    mov r1, #0\n    ldr r0, _0224AED8 ; =0x000043FF\n    ldr r2, _0224AEDC ; =0x00007FFF\n    mov r3, #0x3f\n    str r1, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _0224AEE0 ; =0x04000540\n    mov r0, #2\n    str r0, [r1]\n    ldr r0, _0224AEE4 ; =0xBFFF0000\n    str r0, [r1, #0x40]\n    mov r0, #1\n    add r1, r0, #0\n    bl GF_3DVramMan_InitFrameTexVramManager\n    mov r0, #1\n    lsl r0, r0, #0xe\n    mov r1, #1\n    bl GF_3DVramMan_InitFramePlttVramManager\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r1, _0224AEE8 ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    strh r2, [r1]\n    mov r1, #0\n    mov r0, #1\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov71_0224744C\n    str r0, [r4, #0x20]\n    mov r1, #0\n    mov r0, #0x23\n    str r1, [sp]\n    lsl r0, r0, #0xe\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x20]\n    mov r2, #0x59\n    mov r3, #0x1b\n    bl ov71_02247610\n    str r0, [r4, #0x24]\n    ldr r0, _0224AEEC ; =ov71_0224C0D0\n    mov r1, #0\n    strh r1, [r0]\n    strh r1, [r0, #2]\n    strh r1, [r0, #4]\n    ldr r0, [r4, #0x20]\n    ldr r1, _0224AEF0 ; =ov71_0224C0D0\n    bl ov71_0224780C\n    ldr r0, [r4, #0x20]\n    mov r1, #1\n    bl ov71_0224782C\n    mov r1, #2\n    ldr r0, [r4, #0x24]\n    lsl r1, r1, #0xc\n    bl ov71_02247730\n    ldr r0, [r4, #0x24]\n    add r4, #0x28\n    add r1, r4, #0\n    bl ov71_022476D4\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _0224AEC8: .word 0x04000060\n    _0224AECC: .word 0xFFFFCFFD\n    _0224AED0: .word 0x0000CFFB\n    _0224AED4: .word ov71_0224BF0C\n    _0224AED8: .word 0x000043FF\n    _0224AEDC: .word 0x00007FFF\n    _0224AEE0: .word 0x04000540\n    _0224AEE4: .word 0xBFFF0000\n    _0224AEE8: .word 0x04000008\n    _0224AEEC: .word ov71_0224C0D0\n    _0224AEF0: .word ov71_0224C0D0"
    );
    #endif
}

void ov71_0224AEF4(void) {
    ov71_02247498(0);
}

void ov71_0224AF08(void) {
    /* Original at 0x0224AF08 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    mov r0, #0x39\n    mov r1, #0x24\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _0224AF48\n    str r6, [r4]\n    ldr r0, [r6, #0xc]\n    add r1, r4, #0\n    str r0, [r4, #4]\n    ldr r0, _0224AF4C ; =0xFFE80000\n    mov r2, #0\n    str r0, [r4, #0xc]\n    asr r0, r0, #1\n    str r0, [r4, #0x10]\n    ldr r0, _0224AF50 ; =0x00009999\n    str r0, [r4, #0x14]\n    mov r0, #0x28\n    str r0, [r4, #8]\n    ldr r0, _0224AF54 ; =ov71_0224AF58\n    str r5, [r4, #0x1c]\n    bl SysTask_CreateOnVBlankQueue\n    str r0, [r5]\n    cmp r0, #0\n    bne _0224AF48\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}\n    nop\n    _0224AF4C: .word 0xFFE80000\n    _0224AF50: .word 0x00009999\n    _0224AF54: .word ov71_0224AF58"
    );
    #endif
}

void ov71_0224AF58(void) {
    /* Original at 0x0224AF58 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224AF98\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x14]\n    mov r2, #3\n    add r0, r1, r0\n    str r0, [r4, #0xc]\n    ldr r1, [r4, #0x10]\n    ldr r0, [r4, #0x14]\n    add r0, r1, r0\n    str r0, [r4, #0x10]\n    ldr r3, [r4, #0xc]\n    ldr r0, [r4, #4]\n    mov r1, #2\n    asr r3, r3, #0xc\n    bl BgSetPosTextAndCommit\n    ldr r3, [r4, #0x10]\n    ldr r0, [r4, #4]\n    mov r1, #6\n    mov r2, #3\n    asr r3, r3, #0xc\n    bl BgSetPosTextAndCommit\n    ldr r0, [r4, #8]\n    sub r0, r0, #1\n    str r0, [r4, #8]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #4]\n    mov r1, #2\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r4, #4]\n    mov r1, #6\n    mov r2, #3\n    mov r3, #0xc0\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    bl ov71_0224AFB8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_0224AFB8(void) {
    /* Original at 0x0224AFB8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _0224AFD2\n    bl SysTask_GetData\n    ldr r1, [r0, #0x1c]\n    mov r2, #0\n    str r2, [r1]\n    bl ov71_02247424\n    add r0, r4, #0\n    bl SysTask_Destroy\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224AFD4(void) {
    /* Original at 0x0224AFD4 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    mov r0, #0x39\n    mov r1, #0x1c\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _0224B020\n    str r5, [r4]\n    ldr r0, [r6, #0x24]\n    add r1, r4, #0\n    str r0, [r4, #8]\n    add r1, #0xc\n    bl ov71_022476B4\n    mov r0, #0x32\n    ldr r1, [r4, #0x10]\n    lsl r0, r0, #0xc\n    sub r1, r0, r1\n    asr r0, r1, #3\n    lsr r0, r0, #0x1c\n    add r0, r1, r0\n    asr r0, r0, #4\n    str r0, [r4, #0x18]\n    mov r0, #0x10\n    str r0, [r4, #4]\n    ldr r0, _0224B024 ; =ov71_0224B028\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5]\n    cmp r0, #0\n    bne _0224B020\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}\n    nop\n    _0224B024: .word ov71_0224B028"
    );
    #endif
}

void ov71_0224B028(void) {
    /* Original at 0x0224B028 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _0224B04E\n    ldr r1, [r4, #0x10]\n    ldr r0, [r4, #0x18]\n    add r0, r1, r0\n    str r0, [r4, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4, #8]\n    add r1, #0xc\n    bl ov71_022476C4\n    ldr r0, [r4, #4]\n    sub r0, r0, #1\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x32\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #8]\n    add r4, #0xc\n    add r1, r4, #0\n    bl ov71_022476C4\n    add r0, r5, #0\n    bl ov71_0224B068\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_0224B068(void) {
    /* Original at 0x0224B068 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _0224B082\n    bl SysTask_GetData\n    ldr r1, [r0]\n    mov r2, #0\n    str r2, [r1]\n    bl Heap_Free\n    add r0, r4, #0\n    bl SysTask_Destroy\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224B084(void) {
    /* Original at 0x0224B084 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    add r6, r1, #0\n    mov r0, #0x39\n    mov r1, #0x18\n    str r2, [sp, #4]\n    add r7, r3, #0\n    ldr r5, [sp, #0x20]\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _0224B0DC\n    str r5, [r4]\n    lsl r0, r6, #0xc\n    str r0, [r4, #4]\n    ldr r0, [sp, #4]\n    lsl r1, r0, #0xc\n    str r1, [r4, #0xc]\n    ldr r0, [r4, #4]\n    sub r0, r1, r0\n    add r1, r7, #0\n    bl _s32_div_f\n    str r0, [r4, #8]\n    ldr r0, [sp]\n    str r7, [r4, #0x10]\n    add r1, r6, #0\n    str r0, [r4, #0x14]\n    bl ov71_02247708\n    ldr r0, _0224B0E4 ; =ov71_0224B0E8\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5]\n    cmp r0, #0\n    bne _0224B0E0\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [r5]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224B0E4: .word ov71_0224B0E8"
    );
    #endif
}

void ov71_0224B0E8(void) {
    /* Original at 0x0224B0E8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r1, #0x10]\n    sub r0, r0, #1\n    str r0, [r1, #0x10]\n    cmp r0, #0\n    ble _0224B108\n    ldr r2, [r1, #4]\n    ldr r0, [r1, #8]\n    add r2, r2, r0\n    str r2, [r1, #4]\n    ldr r0, [r1, #0x14]\n    asr r1, r2, #0xc\n    bl ov71_02247708\n    pop {r4, pc}\n    ldr r0, [r1, #0x14]\n    ldr r1, [r1, #0xc]\n    asr r1, r1, #0xc\n    bl ov71_02247708\n    add r0, r4, #0\n    bl ov71_0224B11C\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224B11C(void) {
    /* Original at 0x0224B11C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _0224B136\n    bl SysTask_GetData\n    ldr r1, [r0]\n    mov r2, #0\n    str r2, [r1]\n    bl Heap_Free\n    add r0, r4, #0\n    bl SysTask_Destroy\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224B138(void) {
    /* Original at 0x0224B138 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x39\n    mov r1, #0x88\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _0224B194\n    str r5, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl ov71_02247384\n    str r0, [r4, #0x58]\n    mov r0, #0x39\n    bl PokepicManager_Create\n    str r0, [r4, #0x10]\n    mov r0, #0\n    str r0, [r4, #0x14]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    mov r1, #0x39\n    bl String_New\n    str r0, [r4, #0x6c]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    mov r1, #0x39\n    bl String_New\n    str r0, [r4, #0x70]\n    mov r1, #0\n    add r0, r4, #0\n    str r1, [r4, #0x7c]\n    add r0, #0x80\n    str r1, [r0]\n    str r1, [r4, #0x74]\n    mov r0, #0xb4\n    mov r1, #0x39\n    bl NARC_New\n    add r1, r4, #0\n    add r1, #0x84\n    str r0, [r1]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_0224B198(void) {
    /* Original at 0x0224B198 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _0224B1F8\n    bl ov71_0224B970\n    add r0, r4, #0\n    bl ov71_0224B8EC\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    bl ov71_0224BA48\n    ldr r0, [r4, #0x6c]\n    bl String_Delete\n    ldr r0, [r4, #0x70]\n    bl String_Delete\n    ldr r0, [r4, #0x74]\n    cmp r0, #0\n    beq _0224B1C8\n    bl ov71_02247498\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    add r0, #0x5c\n    bl RemoveWindow\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _0224B1E2\n    bl Pokepic_Delete\n    add r0, r4, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    bl NARC_Delete\n    ldr r0, [r4, #0x10]\n    bl PokepicManager_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224B1FC(void) {
    /* Original at 0x0224B1FC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r2, [r4]\n    add r5, r0, #0\n    cmp r2, #4\n    bhs _0224B22A\n    lsl r3, r2, #2\n    ldr r2, _0224B230 ; =ov71_0224BF84\n    add r1, r5, #4\n    ldr r2, [r2, r3]\n    blx r2\n    cmp r0, #0\n    beq _0224B220\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r5, #4]\n    add r0, r5, #0\n    bl ov71_0224B234\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _0224B230: .word ov71_0224BF84"
    );
    #endif
}

void ov71_0224B234(void) {
    /* Original at 0x0224B234 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    bl G3X_Reset\n    mov r1, #0\n    mov r0, #0x11\n    add r2, r1, #0\n    bl NNS_G3dGeBufferOP_N\n    bl NNS_G3dGeFlushBuffer\n    bl NNS_G2dSetupSoftwareSpriteCamera\n    ldr r0, [r4, #0x10]\n    bl PokepicManager_HandleLoadImgAndOrPltt\n    ldr r0, [r4, #0x10]\n    bl PokepicManager_DrawAll\n    mov r2, #1\n    str r2, [sp]\n    mov r0, #0x12\n    add r1, sp, #0\n    bl NNS_G3dGeBufferOP_N\n    ldr r0, [r4, #0x74]\n    cmp r0, #0\n    beq _0224B272\n    bl ov71_022474CC\n    mov r0, #0\n    add r1, r0, #0\n    bl RequestSwap3DBuffers\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov71_0224B280(void) {
    /* Original at 0x0224B280 */
    /* Requires manual decompilation - 197 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    add r4, r0, #0\n    ldr r0, _0224B430 ; =ov71_0224BFDC\n    bl GfGfx_SetBanks\n    ldr r2, _0224B434 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    ldr r0, _0224B438 ; =ov71_0224BF94\n    bl SetBothScreensModesAndDisable\n    ldr r0, [r4, #0x58]\n    ldr r2, _0224B43C ; =ov71_0224BFA4\n    mov r1, #1\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x58]\n    ldr r2, _0224B440 ; =ov71_0224BFC0\n    mov r1, #2\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r2, _0224B444 ; =0x04000008\n    mov r0, #3\n    ldrh r3, [r2]\n    mov r1, #1\n    bic r3, r0\n    add r0, r3, #0\n    orr r0, r1\n    strh r0, [r2]\n    mov r2, #0\n    str r2, [sp]\n    ldr r0, [r4, #0x58]\n    add r3, r1, #0\n    bl BG_FillCharDataRange\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    bl ov71_022473D0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x39\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    mov r2, #0x6d\n    mov r3, #2\n    bl LoadUserFrameGfx2\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    add r1, r4, #0\n    str r0, [sp, #8]\n    mov r2, #1\n    str r2, [sp, #0xc]\n    str r2, [sp, #0x10]\n    ldr r0, [r4, #0x58]\n    add r1, #0x5c\n    mov r3, #2\n    bl AddWindowParameterized\n    add r0, r4, #0\n    add r0, #0x5c\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r3, #0x20\n    str r3, [sp]\n    mov r0, #0x39\n    str r0, [sp, #4]\n    mov r0, #0x10\n    mov r1, #8\n    mov r2, #0\n    bl GfGfxLoader_GXLoadPal\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x58]\n    mov r0, #0x59\n    mov r1, #0x16\n    mov r3, #2\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x58]\n    mov r0, #0x59\n    mov r1, #0x15\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x39\n    mov r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #0x17\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPal\n    add r0, r4, #0\n    bl ov71_0224B720\n    mov r1, #0\n    mov r0, #1\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov71_0224744C\n    str r0, [r4, #0x74]\n    add r0, r4, #0\n    bl ov71_0224B7EC\n    mov r1, #6\n    mov r2, #1\n    str r0, [r4, #0x14]\n    bl Pokepic_SetAttr\n    mov r1, #0\n    mov r0, #0x13\n    str r1, [sp]\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    mov r0, #0x1e\n    lsl r0, r0, #0xe\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [r4, #0x74]\n    mov r2, #0x59\n    mov r3, #0x1b\n    bl ov71_02247610\n    ldr r2, _0224B448 ; =ov71_0224BF7C\n    str r0, [r4, #0x78]\n    ldrh r3, [r2]\n    add r0, sp, #0x14\n    add r1, sp, #0x14\n    strh r3, [r0]\n    ldrh r3, [r2, #2]\n    ldrh r2, [r2, #4]\n    strh r3, [r0, #2]\n    strh r2, [r0, #4]\n    ldr r0, [r4, #0x78]\n    bl ov71_022476EC\n    add r0, r4, #0\n    bl ov71_0224B848\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0224B44C ; =0x04000050\n    mov r1, #1\n    mov r2, #4\n    mov r3, #0x10\n    bl G2x_SetBlendAlpha_\n    mov r0, #0x10\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    mov r0, #1\n    add sp, #0x1c\n    pop {r3, r4, pc}\n    _0224B430: .word ov71_0224BFDC\n    _0224B434: .word 0x04000304\n    _0224B438: .word ov71_0224BF94\n    _0224B43C: .word ov71_0224BFA4\n    _0224B440: .word ov71_0224BFC0\n    _0224B444: .word 0x04000008\n    _0224B448: .word ov71_0224BF7C\n    _0224B44C: .word 0x04000050"
    );
    #endif
}

void ov71_0224B450(void) {
    /* Original at 0x0224B450 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r1]\n    cmp r0, #0\n    bne _0224B476\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0224B476\n    ldr r0, [r4, #0x40]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x40]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224B47C(void) {
    /* Original at 0x0224B47C */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #4\n    bhi _0224B576\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0224B496: ; jump table\n    add r1, r4, #0\n    add r1, #0x80\n    bl ov71_0224B9CC\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0224B576\n    ldr r0, [r4, #0x44]\n    mov r1, #2\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x44]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x78]\n    mov r1, #0\n    bl ov71_02247704\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224B576\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0xa\n    ble _0224B576\n    ldr r0, [r4, #0x14]\n    mov r1, #6\n    mov r2, #0\n    bl Pokepic_SetAttr\n    add r0, r4, #0\n    mov r1, #0x10\n    mov r2, #0\n    mov r3, #0xc\n    bl ov71_0224B910\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _0224B576\n    bl ov71_0224B960\n    cmp r0, #0\n    beq _0224B576\n    ldr r0, [r4]\n    bl ov71_02247398\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    bne _0224B55A\n    ldr r0, [r4]\n    bl ov71_022473BC\n    add r2, r0, #0\n    add r0, r4, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    add r1, sp, #0\n    mov r3, #1\n    bl sub_020729A4\n    ldr r0, [r4]\n    bl ov71_022473BC\n    add r6, r0, #0\n    ldr r0, [r4]\n    bl ov71_022473C4\n    add r2, r0, #0\n    add r1, sp, #0\n    lsl r2, r2, #0x18\n    ldrb r1, [r1]\n    add r0, r6, #0\n    lsr r2, r2, #0x18\n    bl sub_020062E0\n    ldr r0, [r4, #0x14]\n    mov r1, #1\n    bl Pokepic_StartAnim\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224B576\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0x1e\n    ble _0224B576\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov71_0224B57C(void) {
    /* Original at 0x0224B57C */
    /* Requires manual decompilation - 159 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #5\n    bhi _0224B5B8\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0224B596: ; jump table\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224B6E6\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0xa\n    bgt _0224B5BA\n    b _0224B6E6\n    ldr r0, [r4]\n    bl ov71_0224738C\n    str r0, [sp, #0xc]\n    ldr r0, [r4]\n    bl ov71_02247388\n    add r7, r0, #0\n    ldr r0, [r4]\n    bl ov71_022473DC\n    cmp r0, #1\n    bne _0224B5DA\n    mov r1, #2\n    add r6, r1, #0\n    b _0224B5DE\n    mov r1, #5\n    mov r6, #3\n    ldr r0, [sp, #0xc]\n    ldr r2, [r4, #0x6c]\n    bl ReadMsgDataIntoString\n    ldr r1, [r4, #0x70]\n    ldr r2, [r4, #0x6c]\n    add r0, r7, #0\n    bl StringExpandPlaceholders\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    add r0, r4, #0\n    ldr r2, [r4, #0x70]\n    add r0, #0x5c\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    add r0, r4, #0\n    add r0, #0x5c\n    mov r1, #0x6d\n    mov r2, #2\n    bl sub_0200E948\n    add r0, r4, #0\n    add r0, #0x5c\n    bl CopyWindowToVram\n    ldr r0, _0224B6EC ; =0x000004A4\n    bl PlayFanfare\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #1\n    str r0, [r4, #0xc]\n    str r6, [r5]\n    b _0224B6E6\n    mov r1, #0x3c\n    bl ov71_0224B6F0\n    cmp r0, #0\n    beq _0224B6E6\n    ldr r0, [r4]\n    bl ov71_0224738C\n    add r6, r0, #0\n    ldr r0, [r4]\n    bl ov71_02247388\n    add r7, r0, #0\n    ldr r2, [r4, #0x6c]\n    add r0, r6, #0\n    mov r1, #3\n    bl ReadMsgDataIntoString\n    ldr r1, [r4, #0x70]\n    ldr r2, [r4, #0x6c]\n    add r0, r7, #0\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    add r0, #0x5c\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    add r0, r4, #0\n    ldr r2, [r4, #0x70]\n    add r0, #0x5c\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    add r0, r4, #0\n    add r0, #0x5c\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224B6E6\n    mov r1, #0x3c\n    bl ov71_0224B6F0\n    cmp r0, #0\n    beq _0224B6E6\n    add r0, r4, #0\n    add r0, #0x5c\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224B6E6\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0xa\n    ble _0224B6E6\n    mov r0, #0x10\n    str r0, [sp]\n    mov r1, #0\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224B6E6\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0224B6E6\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224B6EC: .word 0x000004A4"
    );
    #endif
}

void ov71_0224B6F0(void) {
    /* Original at 0x0224B6F0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    add r4, r1, #0\n    cmp r0, #0\n    beq _0224B702\n    bl IsFanfarePlaying\n    str r0, [r5, #0xc]\n    ldr r0, [r5, #8]\n    cmp r0, r4\n    bge _0224B710\n    add r0, r0, #1\n    str r0, [r5, #8]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    bne _0224B71A\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_0224B720(void) {
    /* Original at 0x0224B720 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    bl NNS_G3dInit\n    bl G3X_InitMtxStack\n    ldr r0, _0224B7C8 ; =0x04000060\n    ldr r2, _0224B7CC ; =0xFFFFCFFD\n    ldrh r1, [r0]\n    and r1, r2\n    strh r1, [r0]\n    ldrh r3, [r0]\n    add r1, r2, #2\n    and r3, r1\n    mov r1, #0x10\n    orr r1, r3\n    strh r1, [r0]\n    ldrh r3, [r0]\n    ldr r1, _0224B7D0 ; =0x0000CFFB\n    and r1, r3\n    strh r1, [r0]\n    add r1, r2, #2\n    ldrh r3, [r0]\n    lsr r2, r2, #0x11\n    and r3, r1\n    mov r1, #8\n    orr r1, r3\n    strh r1, [r0]\n    mov r0, #0\n    add r1, r0, #0\n    mov r3, #0x3f\n    str r0, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _0224B7D4 ; =0x04000540\n    mov r0, #2\n    str r0, [r1]\n    ldr r0, _0224B7D8 ; =0xBFFF0000\n    str r0, [r1, #0x40]\n    mov r0, #1\n    add r1, r0, #0\n    bl GF_3DVramMan_InitFrameTexVramManager\n    mov r0, #1\n    lsl r0, r0, #0xe\n    mov r1, #1\n    bl GF_3DVramMan_InitFramePlttVramManager\n    ldr r3, _0224B7DC ; =NNS_GfdDefaultFuncAllocTexVram\n    mov r0, #1\n    mov r1, #0\n    ldr r3, [r3]\n    lsl r0, r0, #0xe\n    add r2, r1, #0\n    blx r3\n    ldr r3, _0224B7E0 ; =NNS_GfdDefaultFuncAllocPlttVram\n    add r4, r0, #0\n    ldr r3, [r3]\n    mov r0, #0x80\n    mov r1, #0\n    mov r2, #1\n    blx r3\n    ldr r2, _0224B7E4 ; =0x7FFF0000\n    add r6, r0, #0\n    and r2, r4\n    lsl r1, r4, #0x10\n    lsr r2, r2, #0x10\n    ldr r0, [r5, #0x10]\n    lsr r1, r1, #0xd\n    lsl r2, r2, #4\n    bl PokepicManager_SetCharBaseAddrAndSize\n    ldr r2, _0224B7E8 ; =0xFFFF0000\n    lsl r1, r6, #0x10\n    and r2, r6\n    lsr r2, r2, #0x10\n    ldr r0, [r5, #0x10]\n    lsr r1, r1, #0xd\n    lsl r2, r2, #3\n    bl PokepicManager_SetPlttBaseAddrAndSize\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _0224B7C8: .word 0x04000060\n    _0224B7CC: .word 0xFFFFCFFD\n    _0224B7D0: .word 0x0000CFFB\n    _0224B7D4: .word 0x04000540\n    _0224B7D8: .word 0xBFFF0000\n    _0224B7DC: .word NNS_GfdDefaultFuncAllocTexVram\n    _0224B7E0: .word NNS_GfdDefaultFuncAllocPlttVram\n    _0224B7E4: .word 0x7FFF0000\n    _0224B7E8: .word 0xFFFF0000"
    );
    #endif
}

void ov71_0224B7EC(void) {
    /* Original at 0x0224B7EC */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl ov71_02247398\n    add r4, r0, #0\n    add r0, sp, #0x10\n    add r1, r4, #0\n    mov r2, #2\n    mov r3, #0\n    bl GetBoxmonSpriteCharAndPlttNarcIds\n    ldr r0, [r5]\n    bl ov71_022473BC\n    add r2, r0, #0\n    add r0, r5, #0\n    add r0, #0x84\n    add r1, r5, #0\n    ldr r0, [r0]\n    add r1, #0x18\n    mov r3, #1\n    bl NARC_ReadPokepicAnimScript\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl sub_02070854\n    add r3, r0, #0\n    mov r1, #0\n    str r1, [sp]\n    add r0, r5, #0\n    str r1, [sp, #4]\n    add r0, #0x18\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [r5, #0x10]\n    add r3, #0x50\n    add r1, sp, #0x10\n    mov r2, #0x80\n    bl PokepicManager_CreatePokepic\n    add sp, #0x20\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov71_0224B848(void) {
    /* Original at 0x0224B848 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x70\n    add r4, r0, #0\n    add r0, #0x48\n    mov r1, #0x59\n    mov r2, #7\n    mov r3, #8\n    bl ov71_022472C4\n    add r0, sp, #0x5c\n    bl NNS_G2dInitImagePaletteProxy\n    add r0, sp, #0x38\n    bl NNS_G2dInitImageProxy\n    mov r3, #0\n    str r3, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #0x39\n    str r0, [sp, #0xc]\n    add r0, sp, #0x38\n    str r0, [sp, #0x10]\n    mov r0, #0x59\n    mov r1, #9\n    bl GfGfxLoader_LoadImageMapping\n    mov r0, #0x39\n    str r0, [sp]\n    add r0, sp, #0x5c\n    str r0, [sp, #4]\n    mov r0, #0x59\n    mov r1, #0xa\n    mov r2, #1\n    mov r3, #0\n    bl GfGfxLoader_PartiallyLoadPalette\n    mov r0, #2\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, sp, #0x14\n    add r1, #0x48\n    add r2, sp, #0x38\n    add r3, sp, #0x5c\n    bl ov71_02247320\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #0x14\n    mov r2, #0x80\n    mov r3, #0x64\n    bl ov71_02247340\n    str r0, [r4, #0x40]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #0x14\n    mov r2, #0x80\n    mov r3, #0x5a\n    bl ov71_02247340\n    str r0, [r4, #0x44]\n    mov r1, #1\n    bl Sprite_SetPriority\n    ldr r0, [r4, #0x40]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x44]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #0x70\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224B8EC(void) {
    /* Original at 0x0224B8EC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x40]\n    cmp r0, #0\n    beq _0224B8FE\n    bl Sprite_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _0224B8F4\n    add r6, #0x48\n    add r0, r6, #0\n    bl ov71_022472FC\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov71_0224B910(void) {
    /* Original at 0x0224B910 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0x39\n    mov r1, #0x14\n    str r2, [sp]\n    add r7, r3, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _0224B956\n    str r5, [r4]\n    lsl r0, r6, #0xc\n    str r0, [r4, #4]\n    ldr r0, [sp]\n    lsl r1, r0, #0xc\n    str r1, [r4, #8]\n    ldr r0, [r4, #4]\n    sub r0, r1, r0\n    add r1, r7, #0\n    bl _s32_div_f\n    str r0, [r4, #0xc]\n    ldr r0, _0224B958 ; =ov71_0224B990\n    str r7, [r4, #0x10]\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnVBlankQueue\n    str r0, [r5, #0x7c]\n    ldr r0, _0224B95C ; =0x04000050\n    mov r1, #1\n    add r2, r6, #0\n    bl G2x_SetBlendBrightness_\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224B958: .word ov71_0224B990\n    _0224B95C: .word 0x04000050"
    );
    #endif
}

void ov71_0224B960(void) {
    /* Original at 0x0224B960 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x7c]\n    cmp r0, #0\n    bne _0224B96A\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov71_0224B970(void) {
    /* Original at 0x0224B970 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x7c]\n    cmp r0, #0\n    beq _0224B98C\n    bl SysTask_GetData\n    bl ov71_02247424\n    ldr r0, [r4, #0x7c]\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #0x7c]\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224B990(void) {
    /* Original at 0x0224B990 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0x10]\n    sub r0, r0, #1\n    str r0, [r4, #0x10]\n    cmp r0, #0\n    ble _0224B9B2\n    ldr r1, [r4, #4]\n    ldr r0, [r4, #0xc]\n    add r2, r1, r0\n    str r2, [r4, #4]\n    ldr r0, _0224B9C8 ; =0x04000050\n    mov r1, #1\n    asr r2, r2, #0xc\n    bl G2x_SetBlendBrightness_\n    pop {r4, pc}\n    ldr r2, [r4, #8]\n    ldr r0, _0224B9C8 ; =0x04000050\n    mov r1, #1\n    asr r2, r2, #0xc\n    bl G2x_SetBlendBrightness_\n    ldr r0, [r4]\n    bl ov71_0224B970\n    pop {r4, pc}\n    nop\n    _0224B9C8: .word 0x04000050"
    );
    #endif
}

void ov71_0224B9CC(void) {
    /* Original at 0x0224B9CC */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0x39\n    mov r1, #0x44\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _0224BA3A\n    mov r1, #0\n    str r1, [r4, #4]\n    str r6, [r4]\n    ldr r0, [r5, #0x74]\n    str r0, [r4, #0x10]\n    ldr r0, [r5, #0x78]\n    str r0, [r4, #0x14]\n    str r5, [r4, #8]\n    ldr r0, _0224BA40 ; =0x000018CC\n    str r1, [r4, #0x18]\n    str r0, [r4, #0x1c]\n    mov r0, #0x14\n    str r0, [r4, #0x20]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    strh r0, [r4, #0x3a]\n    str r1, [r4, #0x40]\n    ldr r0, [r4, #0x14]\n    bl ov71_02247708\n    ldr r0, [r4, #0x14]\n    mov r1, #1\n    bl ov71_02247704\n    add r1, r4, #0\n    ldr r0, [r4, #0x14]\n    add r1, #0x24\n    bl ov71_022476B4\n    add r1, r4, #0\n    ldr r0, [r4, #0x14]\n    add r1, #0x34\n    bl ov71_022476D4\n    ldr r0, _0224BA44 ; =ov71_0224BABC\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r6]\n    cmp r0, #0\n    bne _0224BA3E\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    str r0, [r6]\n    pop {r4, r5, r6, pc}\n    _0224BA40: .word 0x000018CC\n    _0224BA44: .word ov71_0224BABC"
    );
    #endif
}

void ov71_0224BA48(void) {
    /* Original at 0x0224BA48 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _0224BA62\n    bl SysTask_GetData\n    ldr r1, [r0]\n    mov r2, #0\n    str r2, [r1]\n    bl Heap_Free\n    add r0, r4, #0\n    bl SysTask_Destroy\n    pop {r4, pc}"
    );
    #endif
}

void ov71_0224BA64(void) {
    /* Original at 0x0224BA64 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    ldr r0, [r1, #0x40]\n    cmp r0, #0\n    beq _0224BA86\n    mov r0, #0x3a\n    ldrsh r2, [r1, r0]\n    mov r0, #0x3c\n    ldrsh r0, [r1, r0]\n    add r0, r2, r0\n    strh r0, [r1, #0x3a]\n    ldr r0, [r1, #0x40]\n    sub r0, r0, #1\n    str r0, [r1, #0x40]\n    bne _0224BA86\n    mov r0, #0x3e\n    ldrsh r0, [r1, r0]\n    strh r0, [r1, #0x3a]\n    mov r0, #0x36\n    ldrsh r2, [r1, r0]\n    mov r0, #0x3a\n    ldrsh r0, [r1, r0]\n    ldr r3, _0224BA9C ; =ov71_022476EC\n    add r0, r2, r0\n    strh r0, [r1, #0x36]\n    ldr r0, [r1, #0x14]\n    add r1, #0x34\n    bx r3\n    nop\n    _0224BA9C: .word ov71_022476EC"
    );
    #endif
}

void ov71_0224BAA0(void) {
    _s32_div_f(0x3a);
}

void ov71_0224BABC(void) {
    /* Original at 0x0224BABC */
    /* Requires manual decompilation - 123 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov71_0224BA64\n    ldr r0, [r4, #4]\n    cmp r0, #5\n    bhi _0224BBCA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224BADA: ; jump table\n    ldr r0, [r4, #0x20]\n    cmp r0, #0\n    beq _0224BB06\n    ldr r1, [r4, #0x18]\n    ldr r0, [r4, #0x1c]\n    add r0, r1, r0\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #0x20]\n    sub r0, r0, #1\n    str r0, [r4, #0x20]\n    ldr r1, [r4, #0x18]\n    ldr r0, [r4, #0x14]\n    asr r1, r1, #0xc\n    bl ov71_02247708\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x14]\n    mov r1, #0x1f\n    bl ov71_02247708\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    mov r1, #6\n    add r0, r4, #0\n    lsl r1, r1, #6\n    mov r2, #0x1e\n    bl ov71_0224BAA0\n    mov r0, #0\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    cmp r0, #0xa\n    ble _0224BBCA\n    mov r0, #0\n    str r0, [r4, #0x30]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    ldr r1, [r4, #0x28]\n    ldr r0, [r4, #0x30]\n    add r0, r1, r0\n    str r0, [r4, #0x28]\n    mov r0, #0x1e\n    ldr r1, [r4, #0x30]\n    lsl r0, r0, #6\n    sub r0, r1, r0\n    str r0, [r4, #0x30]\n    add r1, r4, #0\n    ldr r0, [r4, #0x14]\n    add r1, #0x24\n    bl ov71_022476C4\n    ldr r1, [r4, #0x28]\n    ldr r0, _0224BBCC ; =0xFFFF5000\n    cmp r1, r0\n    bge _0224BBCA\n    ldr r0, _0224BBD0 ; =0x000005E6\n    bl PlaySE\n    mov r0, #0\n    ldr r1, [r4, #0x30]\n    mvn r0, r0\n    mul r0, r1\n    str r0, [r4, #0x30]\n    ldr r0, [r4, #8]\n    mov r1, #0\n    mov r2, #0x10\n    mov r3, #8\n    bl ov71_0224B910\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    ldr r1, [r4, #0x28]\n    ldr r0, [r4, #0x30]\n    add r1, r1, r0\n    mov r0, #0x13\n    lsl r0, r0, #0xc\n    str r1, [r4, #0x28]\n    cmp r1, r0\n    blt _0224BB9E\n    str r0, [r4, #0x28]\n    add r1, r4, #0\n    ldr r0, [r4, #0x14]\n    add r1, #0x24\n    bl ov71_022476C4\n    mov r0, #0x13\n    ldr r1, [r4, #0x28]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bne _0224BBCA\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #8]\n    bl ov71_0224B960\n    cmp r0, #0\n    beq _0224BBCA\n    add r0, r5, #0\n    bl ov71_0224BA48\n    pop {r3, r4, r5, pc}\n    _0224BBCC: .word 0xFFFF5000\n    _0224BBD0: .word 0x000005E6"
    );
    #endif
}
