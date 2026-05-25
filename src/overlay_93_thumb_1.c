/* Decompiled from asm/overlay_93_thumb_1.s */
#include "global.h"

void ov93_0225C540(void) {
    /* Original at 0x0225C540 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl OverlayManager_GetArgs\n    add r5, r0, #0\n    mov r0, #3\n    mov r1, #0x75\n    lsl r2, r0, #0x11\n    bl Heap_Create\n    add r0, r4, #0\n    mov r1, #0x40\n    mov r2, #0x75\n    bl OverlayManager_CreateAndGetData\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x40\n    bl MI_CpuFill8\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov93_0225C6D8\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov93_0225C574(void) {
    /* Original at 0x0225C574 */
    /* Requires manual decompilation - 138 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r4, r1, #0\n    bl OverlayManager_GetData\n    add r5, r0, #0\n    add r0, r6, #0\n    bl OverlayManager_GetArgs\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov93_0225C730\n    cmp r0, #1\n    bne _0225C596\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4]\n    cmp r0, #8\n    bls _0225C59E\n    b _0225C6B0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225C5AA: ; jump table\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x31\n    strb r1, [r0]\n    ldr r0, _0225C6B8 ; =ov93_02262A08\n    add r1, r5, #0\n    mov r2, #0x75\n    bl OverlayManager_New\n    str r0, [r5, #0x28]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225C6B4\n    ldr r0, [r5, #0x28]\n    bl OverlayManager_Run\n    cmp r0, #1\n    bne _0225C6B4\n    ldr r0, [r5, #0x28]\n    bl OverlayManager_Delete\n    mov r0, #0\n    str r0, [r5, #0x28]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225C6B4\n    add r0, r5, #0\n    mov r1, #1\n    add r0, #0x31\n    strb r1, [r0]\n    ldr r0, _0225C6BC ; =_022629F8\n    add r1, r5, #0\n    mov r2, #0x75\n    bl OverlayManager_New\n    str r0, [r5, #0x28]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225C6B4\n    ldr r0, [r5, #0x28]\n    bl OverlayManager_Run\n    cmp r0, #1\n    bne _0225C6B4\n    ldr r0, [r5, #0x28]\n    bl OverlayManager_Delete\n    mov r0, #0\n    str r0, [r5, #0x28]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225C6B4\n    add r6, #0x38\n    ldrb r0, [r6]\n    cmp r0, #0\n    beq _0225C638\n    bl ov00_021E6A4C\n    add r0, r5, #0\n    mov r1, #2\n    add r0, #0x31\n    strb r1, [r0]\n    ldr r0, _0225C6B8 ; =ov93_02262A08\n    add r1, r5, #0\n    mov r2, #0x75\n    bl OverlayManager_New\n    str r0, [r5, #0x28]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225C6B4\n    ldr r0, [r5, #0x28]\n    bl OverlayManager_Run\n    cmp r0, #1\n    bne _0225C6B4\n    ldr r0, [r5, #0x28]\n    bl OverlayManager_Delete\n    mov r1, #0\n    str r1, [r5, #0x28]\n    ldr r0, [r5, #0x38]\n    cmp r0, #1\n    bne _0225C672\n    str r1, [r4]\n    b _0225C6B4\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225C6B4\n    mov r0, #0\n    mov r1, #1\n    bl sub_020398D4\n    mov r0, #0xde\n    bl sub_02037AC0\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225C6B4\n    mov r0, #0xde\n    bl sub_02037B38\n    cmp r0, #1\n    beq _0225C6A8\n    bl sub_02037454\n    add r5, r0, #0\n    bl sub_020347A0\n    cmp r5, r0\n    bge _0225C6B4\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225C6B4\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _0225C6B8: .word ov93_02262A08\n    _0225C6BC: .word _022629F8"
    );
    #endif
}

u32 ov93_0225C6C0(void) {
    OverlayManager_GetData();
    OverlayManager_FreeData(r4);
    Heap_Destroy(0x75);
    return 1;
}

void ov93_0225C6D8(void) {
    /* Original at 0x0225C6D8 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    bl sub_0203769C\n    mov r5, #0\n    add r4, r5, #0\n    add r0, r4, #0\n    bl sub_02034818\n    cmp r0, #0\n    beq _0225C6FA\n    add r0, r6, r5\n    add r0, #0x2c\n    strb r4, [r0]\n    add r5, r5, #1\n    b _0225C702\n    add r1, r6, r4\n    add r1, #0x2c\n    mov r0, #0xff\n    strb r0, [r1]\n    add r4, r4, #1\n    cmp r4, #4\n    blt _0225C6E6\n    add r0, r6, #0\n    add r0, #0x30\n    strb r5, [r0]\n    add r0, r7, #0\n    add r0, #0x38\n    ldrb r1, [r0]\n    add r0, r6, #0\n    add r0, #0x3c\n    strb r1, [r0]\n    str r7, [sp]\n    add r1, r7, #0\n    add r1, #0x39\n    ldr r2, [r7, #0x34]\n    add r7, #0x38\n    ldrb r1, [r1]\n    ldrb r3, [r7]\n    add r0, r6, #0\n    bl ov90_02258800\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov93_0225C730(void) {
    /* Original at 0x0225C730 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x3d\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _0225C74E\n    bl ov90_02258B54\n    cmp r0, #1\n    bne _0225C74E\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x3d\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x3d\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0225C762\n    ldr r0, [r4, #0x28]\n    cmp r0, #0\n    bne _0225C762\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov93_0225C768(void) {
    /* Original at 0x0225C768 */
    /* Requires manual decompilation - 319 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r0, #1\n    lsl r0, r0, #0x1a\n    ldr r1, [r0]\n    ldr r2, _0225CA54 ; =0xFFFFE0FF\n    and r1, r2\n    str r1, [r0]\n    ldr r1, _0225CA58 ; =0x04001000\n    ldr r3, [r1]\n    and r2, r3\n    str r2, [r1]\n    ldr r3, [r0]\n    ldr r2, _0225CA5C ; =0xFFFF1FFF\n    and r3, r2\n    str r3, [r0]\n    ldr r3, [r1]\n    add r0, #0x50\n    and r2, r3\n    str r2, [r1]\n    mov r3, #0x10\n    mov r1, #1\n    mov r2, #0x3f\n    str r3, [sp]\n    bl G2x_SetBlendAlpha_\n    mov r0, #3\n    str r0, [sp]\n    ldr r0, _0225CA60 ; =0x04001050\n    mov r1, #8\n    mov r2, #0x1f\n    mov r3, #0xd\n    bl G2x_SetBlendAlpha_\n    ldr r1, _0225CA64 ; =0x00003850\n    add r0, r4, #0\n    mov r2, #0x75\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _0225CA64 ; =0x00003850\n    add r5, r0, #0\n    mov r1, #0\n    bl MI_CpuFill8\n    add r0, r5, #0\n    add r0, #0xa8\n    mov r1, #0x75\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    mov r0, #0x75\n    bl ov93_0225CF14\n    add r1, r5, #0\n    add r1, #0x98\n    str r0, [r1]\n    add r0, r4, #0\n    bl OverlayManager_GetArgs\n    str r0, [r5]\n    add r0, r5, #0\n    bl ov93_022626FC\n    mov r0, #0x75\n    bl PaletteData_Init\n    add r1, r5, #0\n    add r1, #0x8c\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #1\n    bl PaletteData_SetAutoTransparent\n    add r0, r5, #0\n    add r0, #0x8c\n    mov r2, #2\n    ldr r0, [r0]\n    mov r1, #0\n    lsl r2, r2, #8\n    mov r3, #0x75\n    bl PaletteData_AllocBuffers\n    add r0, r5, #0\n    add r0, #0x8c\n    mov r1, #1\n    ldr r0, [r0]\n    lsl r2, r1, #9\n    mov r3, #0x75\n    bl PaletteData_AllocBuffers\n    add r0, r5, #0\n    add r0, #0x8c\n    mov r2, #7\n    ldr r0, [r0]\n    mov r1, #2\n    lsl r2, r2, #6\n    mov r3, #0x75\n    bl PaletteData_AllocBuffers\n    add r0, r5, #0\n    add r0, #0x8c\n    mov r2, #2\n    ldr r0, [r0]\n    mov r1, #3\n    lsl r2, r2, #8\n    mov r3, #0x75\n    bl PaletteData_AllocBuffers\n    mov r0, #0x75\n    bl BgConfig_Alloc\n    str r0, [r5, #0x2c]\n    mov r0, #0x40\n    mov r1, #0x75\n    bl GF_CreateVramTransferManager\n    mov r0, #4\n    mov r1, #8\n    bl SetKeyRepeatTimers\n    ldr r0, [r5, #0x2c]\n    bl ov93_0225D1D8\n    bl sub_020210BC\n    mov r0, #4\n    bl sub_02021148\n    add r0, r5, #0\n    bl ov93_0225CFC0\n    mov r0, #0x75\n    bl SpriteSystem_Alloc\n    ldr r1, _0225CA68 ; =ov93_02262AA8\n    ldr r2, _0225CA6C ; =ov93_02262A7C\n    mov r3, #0x20\n    str r0, [r5, #0x24]\n    bl SpriteSystem_Init\n    ldr r1, _0225CA70 ; =0x00100010\n    mov r0, #1\n    bl G2dRenderer_SetObjCharTransferReservedRegion\n    mov r0, #1\n    bl G2dRenderer_SetPlttTransferReservedRegion\n    ldr r0, [r5, #0x24]\n    bl SpriteManager_New\n    str r0, [r5, #0x28]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    mov r2, #0xe0\n    bl SpriteSystem_InitSprites\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    ldr r2, _0225CA74 ; =ov93_02262A90\n    bl SpriteSystem_InitManagerWithCapacities\n    ldr r0, [r5, #0x24]\n    bl SpriteSystem_GetRenderer\n    mov r2, #0x16\n    mov r1, #0\n    lsl r2, r2, #0x10\n    bl G2dRenderer_SetSubSurfaceCoords\n    add r0, r5, #0\n    bl ov93_0225D674\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xc\n    mov r3, #0x75\n    bl NewMsgDataFromNarc\n    add r1, r5, #0\n    add r1, #0x80\n    str r0, [r1]\n    mov r0, #0x75\n    bl MessageFormat_New\n    add r1, r5, #0\n    add r1, #0x84\n    str r0, [r1]\n    mov r0, #5\n    lsl r0, r0, #6\n    mov r1, #0x75\n    bl String_New\n    add r1, r5, #0\n    add r1, #0x88\n    str r0, [r1]\n    mov r0, #0x13\n    mov r1, #0x75\n    bl FontSystem_NewInit\n    add r1, r5, #0\n    add r1, #0x90\n    str r0, [r1]\n    ldr r1, _0225CA78 ; =0x00001468\n    add r0, r5, #0\n    add r1, r5, r1\n    bl ov93_02261310\n    mov r0, #0xc9\n    mov r1, #0x75\n    bl NARC_New\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov93_0225DB2C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov93_0225DBC8\n    add r0, r5, #0\n    bl ov93_0225D380\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov93_0225D78C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov93_0225DA40\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov93_0225DD2C\n    add r0, r4, #0\n    bl NARC_Delete\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xe0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #0x10\n    mov r2, #7\n    mov r3, #0x75\n    bl PaletteData_LoadNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x50\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #0x10\n    mov r2, #7\n    mov r3, #0x75\n    bl PaletteData_LoadNarc\n    add r0, r5, #0\n    bl ov93_0225D4EC\n    add r0, r5, #0\n    mov r1, #0\n    bl ov93_0225D5AC\n    add r0, r5, #0\n    bl ov93_0225D468\n    bl sub_0203A880\n    add r0, r5, #0\n    bl ov93_0225E7B0\n    add r1, r5, #0\n    add r1, #0xd4\n    str r0, [r1]\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x75\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #0x1b\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, _0225CA7C ; =ov93_0225D07C\n    ldr r2, _0225CA80 ; =0x0000EA60\n    add r1, r5, #0\n    bl SysTask_CreateOnMainQueue\n    add r1, r5, #0\n    add r1, #0x94\n    str r0, [r1]\n    ldr r0, _0225CA84 ; =gSystem + 0x60\n    mov r1, #1\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    bl GfGfx_BothDispOn\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #1\n    bl TextFlags_SetAutoScrollParam\n    mov r0, #0\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldr r0, [r5, #0x28]\n    bl SpriteManager_GetSpriteList\n    mov r1, #0x75\n    bl ov90_02258BD4\n    str r0, [r5, #0x1c]\n    bl ov90_02258C74\n    add r2, r0, #0\n    add r0, r5, #0\n    add r0, #0x8c\n    lsl r2, r2, #0x14\n    ldr r0, [r0]\n    mov r1, #2\n    lsr r2, r2, #0x10\n    mov r3, #0x60\n    bl PaletteData_LoadPaletteSlotFromHardware\n    ldr r0, _0225CA88 ; =ov93_0225CEA0\n    add r1, r5, #0\n    bl Main_SetVBlankIntrCB\n    ldr r0, [r5]\n    add r0, #0x3c\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0225CA4C\n    mov r0, #0x75\n    bl ov00_021E69A8\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _0225CA54: .word 0xFFFFE0FF\n    _0225CA58: .word 0x04001000\n    _0225CA5C: .word 0xFFFF1FFF\n    _0225CA60: .word 0x04001050\n    _0225CA64: .word 0x00003850\n    _0225CA68: .word ov93_02262AA8\n    _0225CA6C: .word ov93_02262A7C\n    _0225CA70: .word 0x00100010\n    _0225CA74: .word ov93_02262A90\n    _0225CA78: .word 0x00001468\n    _0225CA7C: .word ov93_0225D07C\n    _0225CA80: .word 0x0000EA60\n    _0225CA84: .word gSystem + 0x60\n    _0225CA88: .word ov93_0225CEA0"
    );
    #endif
}

void ov93_0225CA8C(void) {
    /* Original at 0x0225CA8C */
    /* Requires manual decompilation - 271 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r1, [r4]\n    add r2, r1, #0\n    add r2, #0x3d\n    ldrb r2, [r2]\n    cmp r2, #1\n    bne _0225CAF6\n    add r0, r1, #0\n    add r0, #0x3e\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0225CAB2\n    cmp r0, #1\n    b _0225CAE0\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0225CABE\n    bl sub_0200FB70\n    mov r0, #0\n    bl sub_0200FC20\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _0225CCE0 ; =0xFFFF1FFF\n    and r0, r1\n    str r0, [r2]\n    ldr r1, [r4]\n    add r0, r1, #0\n    add r0, #0x3e\n    ldrb r0, [r0]\n    add r1, #0x3e\n    add r0, r0, #1\n    strb r0, [r1]\n    b _0225CAF0\n    add r0, r1, #0\n    bl ov90_02258B98\n    cmp r0, #1\n    bne _0225CAF0\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, pc}\n    ldr r2, [r5]\n    cmp r2, #6\n    bhi _0225CB60\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0225CB08: ; jump table\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0225CB60\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225CCC8\n    mov r0, #0xd3\n    bl sub_02037AC0\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225CCC8\n    mov r0, #0xd3\n    bl sub_02037B38\n    cmp r0, #1\n    bne _0225CB60\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225CCC8\n    bl ov93_022627A4\n    cmp r0, #1\n    bne _0225CB60\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225CCC8\n    add r1, #0x30\n    ldrb r1, [r1]\n    ldr r2, [r4, #8]\n    cmp r2, r1\n    bhs _0225CB62\n    b _0225CCC8\n    bl ov93_0225E10C\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225CCC8\n    mov r1, #0xbf\n    lsl r1, r1, #6\n    ldr r1, [r4, r1]\n    cmp r1, #1\n    bne _0225CB9A\n    bl ov93_02262250\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x75\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #0x1a\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add r0, r4, #0\n    bl ov93_0225E764\n    ldr r0, [r4, #0x20]\n    cmp r0, #7\n    bhi _0225CC78\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225CBB2: ; jump table\n    mov r0, #1\n    lsl r0, r0, #0x1a\n    ldr r2, [r0]\n    ldr r1, _0225CCE0 ; =0xFFFF1FFF\n    add r3, r0, #0\n    and r2, r1\n    lsr r1, r0, #0xc\n    orr r1, r2\n    str r1, [r0]\n    add r1, r0, #0\n    ldr r2, _0225CCE4 ; =0x0000044C\n    add r1, #0x42\n    strh r2, [r1]\n    add r1, r0, #0\n    ldr r2, _0225CCE8 ; =0x0000A8B8\n    add r1, #0x46\n    strh r2, [r1]\n    add r3, #0x48\n    ldrh r2, [r3]\n    ldr r1, _0225CCEC ; =0xFFFFC0FF\n    and r2, r1\n    lsr r1, r0, #0xe\n    orr r1, r2\n    strh r1, [r3]\n    add r0, #0x4a\n    ldrh r2, [r0]\n    mov r1, #0x3f\n    bic r2, r1\n    mov r1, #0x1f\n    orr r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0]\n    add r0, r4, #0\n    bl ov93_02262310\n    mov r0, #2\n    str r0, [r4, #0x20]\n    ldr r1, _0225CCF0 ; =0x0000174C\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov93_02262374\n    cmp r0, #1\n    bne _0225CC78\n    ldr r0, _0225CCF4 ; =0x00001768\n    mov r1, #1\n    str r1, [r4, r0]\n    mov r0, #0\n    str r0, [r4, #0x20]\n    b _0225CC78\n    ldr r0, [r4, #0x1c]\n    bl ov90_02258C8C\n    mov r0, #4\n    str r0, [r4, #0x20]\n    b _0225CC78\n    ldr r0, [r4, #0x1c]\n    bl ov90_02258CE0\n    cmp r0, #1\n    bne _0225CC78\n    ldr r0, _0225CCF8 ; =0x00002FB8\n    mov r1, #1\n    str r1, [r4, r0]\n    ldr r0, _0225CCFC ; =0x00001559\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #5\n    str r0, [r4, #0x20]\n    add r0, r4, #0\n    bl ov93_0225D4B8\n    add r0, r4, #0\n    mov r1, #1\n    bl ov93_0225D5AC\n    b _0225CC78\n    ldr r0, [r4, #0x1c]\n    bl ov90_02258CB0\n    mov r0, #7\n    str r0, [r4, #0x20]\n    b _0225CC78\n    ldr r0, [r4, #0x1c]\n    bl ov90_02258CE0\n    cmp r0, #1\n    bne _0225CC78\n    mov r0, #8\n    str r0, [r4, #0x20]\n    add r0, r4, #0\n    bl ov93_0225E4B0\n    add r0, r4, #0\n    bl ov93_0225E370\n    ldr r0, _0225CD00 ; =0x00002FBC\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    beq _0225CCC8\n    add r0, r4, #0\n    bl ov93_0225E300\n    cmp r0, #1\n    bne _0225CC9C\n    ldr r0, _0225CD04 ; =0x00002FC4\n    mov r1, #0xd\n    str r1, [r4, r0]\n    ldr r1, _0225CCF8 ; =0x00002FB8\n    ldr r0, [r4, r1]\n    cmp r0, #1\n    bne _0225CCC8\n    sub r0, r1, #4\n    ldr r2, [r4, r0]\n    ldr r0, _0225CD08 ; =0x00000516\n    cmp r2, r0\n    bhi _0225CCC8\n    sub r0, r1, #4\n    ldr r0, [r4, r0]\n    add r2, r0, #1\n    sub r0, r1, #4\n    str r2, [r4, r0]\n    b _0225CCC8\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0225CCC8\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    bl ov93_0225E7AC\n    ldr r0, _0225CD0C ; =0x0000384C\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0225CCE0: .word 0xFFFF1FFF\n    _0225CCE4: .word 0x0000044C\n    _0225CCE8: .word 0x0000A8B8\n    _0225CCEC: .word 0xFFFFC0FF\n    _0225CCF0: .word 0x0000174C\n    _0225CCF4: .word 0x00001768\n    _0225CCF8: .word 0x00002FB8\n    _0225CCFC: .word 0x00001559\n    _0225CD00: .word 0x00002FBC\n    _0225CD04: .word 0x00002FC4\n    _0225CD08: .word 0x00000516\n    _0225CD0C: .word 0x0000384C"
    );
    #endif
}

void ov93_0225CD10(void) {
    /* Original at 0x0225CD10 */
    /* Requires manual decompilation - 153 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, _0225CE94 ; =0x00002FD0\n    ldr r1, [r4, r0]\n    ldr r0, [r4]\n    str r1, [r0, #0x24]\n    ldr r0, [r4, #0x1c]\n    bl ov90_02258C38\n    add r0, r4, #0\n    bl ov93_022602E4\n    add r0, r4, #0\n    bl ov93_02260608\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    add r0, r4, #0\n    bl ov93_0225D6E0\n    add r0, r4, #0\n    bl ov93_0225D9E8\n    add r0, r4, #0\n    bl ov93_0225DAF8\n    add r0, r4, #0\n    bl ov93_0225DBC4\n    add r0, r4, #0\n    bl ov93_0225DD28\n    add r0, r4, #0\n    bl ov93_0225DED0\n    add r1, r4, #0\n    add r1, #0xd4\n    ldr r1, [r1]\n    add r0, r4, #0\n    bl ov93_0225E860\n    add r5, r4, #0\n    mov r6, #0\n    add r5, #0x30\n    add r0, r5, #0\n    bl RemoveWindow\n    add r6, r6, #1\n    add r5, #0x10\n    cmp r6, #5\n    blt _0225CD72\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, [r4, #0x2c]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x2c]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x2c]\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x2c]\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x2c]\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x2c]\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x2c]\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    bl sub_020135AC\n    ldr r0, [r4, #0x24]\n    ldr r1, [r4, #0x28]\n    bl SpriteSystem_FreeResourcesAndManager\n    ldr r0, [r4, #0x24]\n    bl SpriteSystem_Free\n    bl GF_DestroyVramTransferManager\n    add r0, r4, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #0\n    bl PaletteData_FreeBuffers\n    add r0, r4, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #1\n    bl PaletteData_FreeBuffers\n    add r0, r4, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #2\n    bl PaletteData_FreeBuffers\n    add r0, r4, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #3\n    bl PaletteData_FreeBuffers\n    add r0, r4, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    bl PaletteData_Free\n    add r0, r4, #0\n    add r0, #0x88\n    ldr r0, [r0]\n    bl String_Delete\n    add r0, r4, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    bl MessageFormat_Delete\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    bl DestroyMsgData\n    ldr r0, [r4, #0x2c]\n    bl Heap_Free\n    add r0, r4, #0\n    bl ov93_0225D064\n    add r0, r4, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    bl SysTask_Destroy\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _0225CE98 ; =0xFFFF1FFF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _0225CE9C ; =0x04001000\n    add r4, #0x98\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    ldr r0, [r4]\n    bl ov93_0225CFB8\n    bl sub_02021238\n    add r0, r7, #0\n    bl OverlayManager_FreeData\n    mov r0, #0\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetAutoScrollParam\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    bl sub_0203A914\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225CE94: .word 0x00002FD0\n    _0225CE98: .word 0xFFFF1FFF\n    _0225CE9C: .word 0x04001000"
    );
    #endif
}

void ov93_0225CEA0(void) {
    /* Original at 0x0225CEA0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0xd4\n    ldr r1, [r1]\n    bl ov93_0225EA50\n    bl GF_RunVramTransferTasks\n    bl SpriteSystem_TransferOam\n    add r0, r4, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    bl PaletteData_PushTransparentBuffers\n    ldr r0, _0225CF04 ; =0x00001454\n    ldrb r1, [r4, r0]\n    cmp r1, #1\n    bne _0225CED8\n    mov r0, #7\n    mov r1, #1\n    bl ToggleBgLayer\n    ldr r0, _0225CF04 ; =0x00001454\n    mov r1, #0\n    strb r1, [r4, r0]\n    b _0225CEEE\n    add r0, r0, #1\n    ldrb r0, [r4, r0]\n    cmp r0, #1\n    bne _0225CEEE\n    mov r0, #7\n    mov r1, #0\n    bl ToggleBgLayer\n    ldr r0, _0225CF08 ; =0x00001455\n    mov r1, #0\n    strb r1, [r4, r0]\n    ldr r0, [r4, #0x2c]\n    bl DoScheduledBgGpuUpdates\n    ldr r3, _0225CF0C ; =0x027E0000\n    ldr r1, _0225CF10 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    nop\n    _0225CF04: .word 0x00001454\n    _0225CF08: .word 0x00001455\n    _0225CF0C: .word 0x027E0000\n    _0225CF10: .word 0x00003FF8"
    );
    #endif
}

void ov93_0225CF14(void) {
    GF_3DVramMan_Create(0, 2, 1);
}

void ov93_0225CF34(void) {
    /* Original at 0x0225CF34 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _0225CFA0 ; =0x04000008\n    mov r1, #3\n    ldrh r2, [r0]\n    bic r2, r1\n    mov r1, #1\n    orr r1, r2\n    strh r1, [r0]\n    add r0, #0x58\n    ldrh r2, [r0]\n    ldr r1, _0225CFA4 ; =0xFFFFCFFD\n    and r2, r1\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrh r3, [r0]\n    add r1, r1, #2\n    and r3, r2\n    mov r2, #0x10\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r3, [r0]\n    ldr r2, _0225CFA8 ; =0x0000CFFB\n    and r3, r2\n    strh r3, [r0]\n    ldrh r3, [r0]\n    sub r2, #0x1c\n    and r3, r1\n    mov r1, #8\n    orr r1, r3\n    strh r1, [r0]\n    ldrh r1, [r0]\n    and r1, r2\n    strh r1, [r0]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl G3X_SetFog\n    mov r0, #0\n    ldr r2, _0225CFAC ; =0x00007FFF\n    add r1, r0, #0\n    mov r3, #0x3f\n    str r0, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _0225CFB0 ; =0xBFFF0000\n    ldr r0, _0225CFB4 ; =0x04000580\n    str r1, [r0]\n    pop {r3, pc}\n    _0225CFA0: .word 0x04000008\n    _0225CFA4: .word 0xFFFFCFFD\n    _0225CFA8: .word 0x0000CFFB\n    _0225CFAC: .word 0x00007FFF\n    _0225CFB0: .word 0xBFFF0000\n    _0225CFB4: .word 0x04000580"
    );
    #endif
}

void ov93_0225CFB8(void) {
    GF_3DVramMan_Delete();
}

void ov93_0225CFC0(void) {
    /* Original at 0x0225CFC0 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    ldr r3, _0225D058 ; =ov93_02262A38\n    add r4, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0xc\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    mov r0, #0x75\n    bl Camera_New\n    add r1, r4, #0\n    add r1, #0x9c\n    str r0, [r1]\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    mov r1, #0x7b\n    str r0, [sp, #8]\n    ldr r2, _0225D05C ; =ov93_02262A18\n    ldr r3, _0225D060 ; =0x00000FA4\n    add r0, sp, #0xc\n    lsl r1, r1, #0xc\n    bl Camera_Init_FromTargetDistanceAndAngle\n    add r2, r4, #0\n    add r2, #0x9c\n    mov r0, #1\n    mov r1, #0xe1\n    ldr r2, [r2]\n    lsl r0, r0, #0xc\n    lsl r1, r1, #0xe\n    bl Camera_SetPerspectiveClippingPlane\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    bl Camera_SetStaticPtr\n    mov r0, #0x75\n    bl Camera_New\n    add r1, r4, #0\n    add r1, #0xa0\n    str r0, [r1]\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    mov r1, #5\n    str r0, [sp, #8]\n    ldr r2, _0225D05C ; =ov93_02262A18\n    ldr r3, _0225D060 ; =0x00000FA4\n    add r0, sp, #0xc\n    lsl r1, r1, #0x10\n    bl Camera_Init_FromTargetDistanceAndAngle\n    add r4, #0xa0\n    mov r0, #1\n    mov r1, #0xe1\n    ldr r2, [r4]\n    lsl r0, r0, #0xc\n    lsl r1, r1, #0xe\n    bl Camera_SetPerspectiveClippingPlane\n    add sp, #0x18\n    pop {r4, pc}\n    nop\n    _0225D058: .word ov93_02262A38\n    _0225D05C: .word ov93_02262A18\n    _0225D060: .word 0x00000FA4"
    );
    #endif
}

void ov93_0225D064(void) {
    Camera_Delete();
    Camera_Delete();
}

void ov93_0225D07C(void) {
    /* Original at 0x0225D07C */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x40\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x34]\n    str r0, [sp, #0x38]\n    str r0, [sp, #0x3c]\n    mov r0, #0\n    str r0, [sp, #0x28]\n    str r0, [sp, #0x2c]\n    str r0, [sp, #0x30]\n    add r0, sp, #4\n    add r4, r1, #0\n    bl MTX_Identity33_\n    ldr r1, _0225D1B0 ; =0x000015A8\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov93_02262034\n    ldr r1, _0225D1B4 ; =0x00001468\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov93_02261354\n    ldr r1, _0225D1B8 ; =0x00001560\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov93_02261D1C\n    add r0, r4, #0\n    bl ov93_0225FFF8\n    ldr r2, _0225D1BC ; =0x00001428\n    ldr r1, [r4, #0x2c]\n    add r0, r4, #0\n    add r2, r4, r2\n    bl ov93_0225FE80\n    add r0, r4, #0\n    bl ov93_02260660\n    add r0, r4, #0\n    bl ov93_0225E03C\n    add r0, r4, #0\n    bl ov93_02260A30\n    bl Thunk_G3X_Reset\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    bl Camera_SetStaticPtr\n    add r1, r4, #0\n    add r1, #0x9c\n    ldr r1, [r1]\n    mov r0, #1\n    bl Camera_ApplyPerspectiveType\n    bl Camera_PushLookAtToNNSGlb\n    mov r0, #0\n    ldr r2, _0225D1C0 ; =0xFFFFF000\n    add r1, r0, #0\n    add r3, r0, #0\n    bl NNS_G3dGlbLightVector\n    ldr r1, _0225D1C4 ; =0x0000739C\n    mov r0, #0\n    bl NNS_G3dGlbLightColor\n    ldr r0, _0225D1C8 ; =0x00007FFF\n    mov r2, #0\n    add r1, r0, #0\n    bl NNS_G3dGlbMaterialColorDiffAmb\n    ldr r0, _0225D1C8 ; =0x00007FFF\n    mov r2, #0\n    add r1, r0, #0\n    bl NNS_G3dGlbMaterialColorSpecEmi\n    add r0, sp, #0x28\n    bl NNS_G3dGlbSetBaseTrans\n    ldr r1, _0225D1CC ; =NNS_G3dGlb + 0xBC\n    add r0, sp, #4\n    bl MI_Copy36B\n    ldr r1, _0225D1D0 ; =NNS_G3dGlb + 0x80\n    mov r0, #0xa4\n    ldr r2, [r1, #0x7c]\n    bic r2, r0\n    add r0, sp, #0x34\n    str r2, [r1, #0x7c]\n    bl NNS_G3dGlbSetBaseScale\n    bl NNS_G3dGlbFlushP\n    add r1, r4, #0\n    add r1, #0xd4\n    ldr r1, [r1]\n    add r0, r4, #0\n    bl ov93_0225E898\n    mov r1, #0\n    mov r0, #0x11\n    add r2, r1, #0\n    bl NNS_G3dGeBufferOP_N\n    ldr r0, _0225D1D4 ; =0x000013B0\n    add r0, r4, r0\n    bl sub_020181EC\n    add r0, r4, #0\n    add r0, #0xe8\n    bl sub_020181EC\n    add r0, r4, #0\n    bl ov93_0225E0A4\n    mov r2, #1\n    mov r0, #0x12\n    add r1, sp, #0\n    str r2, [sp]\n    bl NNS_G3dGeBufferOP_N\n    bl Thunk_G3X_Reset\n    bl sub_0201543C\n    cmp r0, #0\n    ble _0225D18C\n    bl Thunk_G3X_Reset\n    bl sub_02015460\n    ldr r0, [r4, #0x28]\n    bl SpriteSystem_DrawSprites\n    bl SpriteSystem_UpdateTransfer\n    mov r0, #0\n    add r1, r0, #0\n    bl RequestSwap3DBuffers\n    ldr r1, [r4, #0x2c]\n    mov r0, #0x75\n    bl sub_020399FC\n    add sp, #0x40\n    pop {r4, pc}\n    nop\n    _0225D1B0: .word 0x000015A8\n    _0225D1B4: .word 0x00001468\n    _0225D1B8: .word 0x00001560\n    _0225D1BC: .word 0x00001428\n    _0225D1C0: .word 0xFFFFF000\n    _0225D1C4: .word 0x0000739C\n    _0225D1C8: .word 0x00007FFF\n    _0225D1CC: .word NNS_G3dGlb + 0xBC\n    _0225D1D0: .word NNS_G3dGlb + 0x80\n    _0225D1D4: .word 0x000013B0"
    );
    #endif
}

void ov93_0225D1D8(void) {
    /* Original at 0x0225D1D8 */
    /* Requires manual decompilation - 180 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x8c\n    add r5, r0, #0\n    bl GfGfx_DisableEngineAPlanes\n    ldr r4, _0225D36C ; =ov93_02262AC8\n    add r3, sp, #0x10\n    mov r2, #5\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0225D1E8\n    add r0, sp, #0x10\n    bl GfGfx_SetBanks\n    mov r1, #6\n    mov r2, #2\n    mov r0, #0\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x12\n    bl MIi_CpuClear32\n    mov r1, #0x62\n    mov r2, #2\n    mov r0, #0\n    lsl r1, r1, #0x14\n    lsl r2, r2, #0x10\n    bl MIi_CpuClear32\n    mov r1, #0x19\n    mov r2, #1\n    mov r0, #0\n    lsl r1, r1, #0x16\n    lsl r2, r2, #0x12\n    bl MIi_CpuClear32\n    mov r1, #0x66\n    mov r2, #2\n    mov r0, #0\n    lsl r1, r1, #0x14\n    lsl r2, r2, #0x10\n    bl MIi_CpuClear32\n    ldr r4, _0225D370 ; =ov93_02262A44\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r4, _0225D374 ; =ov93_02262B40\n    add r3, sp, #0x38\n    mov r2, #0xa\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0225D248\n    ldr r0, [r4]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r5, #0\n    add r2, sp, #0x38\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    mov r1, #2\n    add r2, sp, #0x54\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    mov r1, #3\n    add r2, sp, #0x70\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    mov r1, #3\n    add r0, r5, #0\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    ldr r1, _0225D378 ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #2\n    orr r0, r2\n    strh r0, [r1]\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r4, #0\n    ldr r6, _0225D37C ; =ov93_02262B94\n    add r7, r4, #0\n    cmp r4, #3\n    bge _0225D30A\n    add r1, r4, #4\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    add r2, r6, #0\n    add r3, r7, #0\n    bl InitBgFromTemplate\n    b _0225D31A\n    add r1, r4, #4\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    add r2, r6, #0\n    mov r3, #1\n    bl InitBgFromTemplate\n    add r0, r4, #4\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x75\n    bl BG_ClearCharDataRange\n    add r1, r4, #4\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl BgClearTilemapBufferAndCommit\n    add r1, r4, #4\n    lsl r1, r1, #0x18\n    mov r2, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add r1, r4, #4\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add r4, r4, #1\n    add r6, #0x1c\n    cmp r4, #4\n    blo _0225D2F4\n    mov r0, #7\n    mov r1, #0\n    bl ToggleBgLayer\n    add sp, #0x8c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225D36C: .word ov93_02262AC8\n    _0225D370: .word ov93_02262A44\n    _0225D374: .word ov93_02262B40\n    _0225D378: .word 0x04000008\n    _0225D37C: .word ov93_02262B94"
    );
    #endif
}

void ov93_0225D380(void) {
    /* Original at 0x0225D380 */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x14\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    mov r0, #3\n    lsl r0, r0, #8\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4, #0x2c]\n    add r1, #0x30\n    mov r2, #1\n    mov r3, #0xb\n    bl AddWindowParameterized\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #5\n    str r0, [sp, #0xc]\n    mov r0, #0xc5\n    lsl r0, r0, #2\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4, #0x2c]\n    add r1, #0x40\n    mov r2, #4\n    mov r3, #0x12\n    bl AddWindowParameterized\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #5\n    str r0, [sp, #0xc]\n    mov r0, #0xca\n    lsl r0, r0, #2\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4, #0x2c]\n    add r1, #0x50\n    mov r2, #4\n    mov r3, #0x15\n    bl AddWindowParameterized\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #5\n    str r0, [sp, #0xc]\n    mov r0, #0xcf\n    lsl r0, r0, #2\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4, #0x2c]\n    add r1, #0x60\n    mov r2, #4\n    mov r3, #1\n    bl AddWindowParameterized\n    add r0, r4, #0\n    add r0, #0x40\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0x50\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0x60\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1c\n    str r0, [sp, #4]\n    mov r2, #4\n    add r1, r4, #0\n    str r2, [sp, #8]\n    mov r0, #5\n    str r0, [sp, #0xc]\n    ldr r0, _0225D464 ; =0x00000359\n    add r1, #0x70\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #0x2c]\n    mov r3, #2\n    bl AddWindowParameterized\n    add r4, #0x70\n    add r0, r4, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add sp, #0x14\n    pop {r3, r4, pc}\n    nop\n    _0225D464: .word 0x00000359"
    );
    #endif
}

void ov93_0225D468(void) {
    /* Original at 0x0225D468 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    mov r2, #0x35\n    add r5, r0, #0\n    add r0, #0x70\n    mov r1, #1\n    lsl r2, r2, #4\n    mov r3, #6\n    bl DrawFrameAndWindow1\n    add r0, r5, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    mov r1, #3\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r0, _0225D4B4 ; =0x0001020F\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x70\n    add r2, r4, #0\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add r5, #0x70\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0225D4B4: .word 0x0001020F"
    );
    #endif
}

void ov93_0225D4B8(void) {
    /* Original at 0x0225D4B8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0x12\n    str r0, [sp]\n    mov r0, #0x1e\n    str r0, [sp, #4]\n    mov r0, #6\n    str r0, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x2c]\n    ldr r2, _0225D4E8 ; =0x000003FF\n    mov r1, #4\n    mov r3, #1\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x2c]\n    mov r1, #4\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _0225D4E8: .word 0x000003FF"
    );
    #endif
}

void ov93_0225D4EC(void) {
    /* Original at 0x0225D4EC */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    bl sub_0203769C\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    str r0, [sp, #0x18]\n    add r0, #0x30\n    mov r4, #0\n    str r0, [sp, #0x18]\n    b _0225D590\n    ldr r0, [r5]\n    ldr r2, [sp, #0x10]\n    add r1, r0, r4\n    add r1, #0x2c\n    ldrb r1, [r1]\n    cmp r2, r1\n    beq _0225D58E\n    bl ov90_022588CC\n    mov r1, #0x75\n    bl PlayerProfile_GetPlayerName_NewString\n    ldr r1, [r5]\n    add r6, r0, #0\n    add r1, r1, r4\n    add r1, #0x2c\n    ldrb r1, [r1]\n    add r0, r5, #0\n    bl ov93_0225E3C4\n    str r0, [sp, #0x14]\n    ldr r0, [r5]\n    add r1, r0, r4\n    add r1, #0x2c\n    ldrb r1, [r1]\n    bl ov90_022588A4\n    cmp r0, #1\n    bne _0225D542\n    ldr r7, _0225D5A0 ; =0x0007080F\n    b _0225D544\n    ldr r7, _0225D5A4 ; =0x0001020F\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsr r1, r0, #0x1f\n    add r1, r0, r1\n    asr r2, r1, #1\n    mov r1, #0x28\n    sub r3, r1, r2\n    mov r1, #1\n    tst r0, r1\n    beq _0225D560\n    sub r3, r3, #1\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, [r5]\n    add r2, r6, #0\n    add r0, #0x30\n    ldrb r0, [r0]\n    lsl r1, r0, #2\n    ldr r0, _0225D5A8 ; =ov93_02262A68\n    add r1, r0, r1\n    ldr r0, [sp, #0x14]\n    ldrb r0, [r0, r1]\n    lsl r1, r0, #4\n    ldr r0, [sp, #0x18]\n    add r0, r0, r1\n    mov r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl Heap_Free\n    add r4, r4, #1\n    ldr r0, [r5]\n    add r0, #0x30\n    ldrb r0, [r0]\n    cmp r4, r0\n    blt _0225D504\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225D5A0: .word 0x0007080F\n    _0225D5A4: .word 0x0001020F\n    _0225D5A8: .word ov93_02262A68"
    );
    #endif
}

void ov93_0225D5AC(void) {
    /* Original at 0x0225D5AC */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    cmp r1, #1\n    bne _0225D604\n    mov r0, #0xd\n    str r0, [sp]\n    mov r0, #0xc\n    str r0, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x2c]\n    ldr r2, _0225D670 ; =0x000003FF\n    mov r3, #0\n    bl FillBgTilemapRect\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xc\n    str r0, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    mov r3, #0x11\n    str r3, [sp, #0xc]\n    ldr r0, [r4, #0x2c]\n    ldr r2, _0225D670 ; =0x000003FF\n    bl FillBgTilemapRect\n    mov r0, #0xd\n    str r0, [sp]\n    mov r0, #0xc\n    str r0, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x2c]\n    ldr r2, _0225D670 ; =0x000003FF\n    mov r3, #0x14\n    bl FillBgTilemapRect\n    b _0225D662\n    ldr r0, [r4]\n    add r0, #0x30\n    ldrb r0, [r0]\n    cmp r0, #2\n    beq _0225D614\n    cmp r0, #3\n    beq _0225D64A\n    b _0225D662\n    mov r0, #0xd\n    str r0, [sp]\n    mov r0, #0xc\n    str r0, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x2c]\n    ldr r2, _0225D670 ; =0x000003FF\n    mov r3, #0\n    bl FillBgTilemapRect\n    mov r0, #0xd\n    str r0, [sp]\n    mov r0, #0xc\n    str r0, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x2c]\n    ldr r2, _0225D670 ; =0x000003FF\n    mov r3, #0x14\n    bl FillBgTilemapRect\n    b _0225D662\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xc\n    str r0, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    mov r3, #0x11\n    str r3, [sp, #0xc]\n    ldr r0, [r4, #0x2c]\n    ldr r2, _0225D670 ; =0x000003FF\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x2c]\n    mov r1, #4\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _0225D670: .word 0x000003FF"
    );
    #endif
}

void ov93_0225D674(void) {
    /* Original at 0x0225D674 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl sub_02014DA0\n    mov r1, #0x12\n    mov r0, #0x75\n    lsl r1, r1, #0xa\n    bl Heap_Alloc\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x75\n    str r0, [sp, #4]\n    mov r3, #0x12\n    ldr r0, _0225D6D8 ; =ov93_0225D744\n    ldr r1, _0225D6DC ; =ov93_0225D768\n    lsl r3, r3, #0xa\n    bl sub_02014DB4\n    add r1, r4, #0\n    add r1, #0xa4\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    bl sub_02015524\n    add r2, r0, #0\n    mov r0, #1\n    mov r1, #0xe1\n    lsl r0, r0, #0xc\n    lsl r1, r1, #0xe\n    bl Camera_SetPerspectiveClippingPlane\n    mov r0, #0xd5\n    mov r1, #0\n    mov r2, #0x75\n    bl sub_02015264\n    add r4, #0xa4\n    add r1, r0, #0\n    ldr r0, [r4]\n    mov r2, #0xa\n    mov r3, #1\n    bl sub_0201526C\n    add sp, #8\n    pop {r4, pc}\n    _0225D6D8: .word ov93_0225D744\n    _0225D6DC: .word ov93_0225D768"
    );
    #endif
}

void ov93_0225D6E0(void) {
    sub_020154D0();
    sub_02014EBC();
    Heap_Free(r5);
}

void ov93_0225D700(void) {
    /* Original at 0x0225D700 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r3, r0, #0\n    cmp r1, #0\n    beq _0225D712\n    cmp r1, #1\n    beq _0225D720\n    cmp r1, #2\n    beq _0225D72E\n    b _0225D73C\n    add r0, #0xa4\n    mov r1, #0\n    ldr r0, [r0]\n    add r2, r1, #0\n    bl sub_02015494\n    pop {r3, pc}\n    add r0, #0xa4\n    ldr r0, [r0]\n    mov r1, #1\n    mov r2, #0\n    bl sub_02015494\n    pop {r3, pc}\n    add r0, #0xa4\n    ldr r0, [r0]\n    mov r1, #2\n    mov r2, #0\n    bl sub_02015494\n    pop {r3, pc}\n    bl GF_AssertFail\n    pop {r3, pc}"
    );
    #endif
}

void ov93_0225D744(void) {
    /* Original at 0x0225D744 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, _0225D764 ; =NNS_GfdDefaultFuncAllocTexVram\n    mov r2, #0\n    ldr r3, [r3]\n    blx r3\n    add r4, r0, #0\n    bne _0225D756\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl sub_02015354\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0xd\n    pop {r4, pc}\n    nop\n    _0225D764: .word NNS_GfdDefaultFuncAllocTexVram"
    );
    #endif
}

void ov93_0225D768(void) {
    /* Original at 0x0225D768 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, _0225D788 ; =NNS_GfdDefaultFuncAllocPlttVram\n    mov r2, #1\n    ldr r3, [r3]\n    blx r3\n    add r4, r0, #0\n    bne _0225D77A\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl sub_02015394\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0xd\n    pop {r4, pc}\n    nop\n    _0225D788: .word NNS_GfdDefaultFuncAllocPlttVram"
    );
    #endif
}

void ov93_0225D78C(void) {
    /* Original at 0x0225D78C */
    /* Requires manual decompilation - 270 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    add r5, r0, #0\n    str r1, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, _0225D9C4 ; =0x00002713\n    str r1, [sp, #0x2c]\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    ldr r2, [r5, #0x24]\n    ldr r3, [r5, #0x28]\n    mov r1, #2\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    add r0, r5, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    mov r1, #2\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x1e\n    sub r0, r1, r0\n    lsr r0, r0, #1\n    add r4, r0, #6\n    add r2, r5, #0\n    ldr r3, _0225D9C8 ; =0x0000169C\n    str r6, [sp]\n    mov r0, #0\n    ldr r1, _0225D9CC ; =0x000E0F00\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r1, _0225D9C4 ; =0x00002713\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    add r1, r4, #0\n    add r1, #0x24\n    str r1, [sp, #0x14]\n    mov r1, #0xa8\n    str r1, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    mov r0, #1\n    str r0, [sp, #0x20]\n    mov r0, #0xc\n    str r0, [sp, #0x24]\n    mov r0, #2\n    str r0, [sp, #0x28]\n    add r2, #0x90\n    ldr r0, [r5, #0x2c]\n    ldr r1, [r5, #0x28]\n    ldr r2, [r2]\n    add r3, r5, r3\n    bl ov93_02261EB8\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    mov r1, #0\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x30]\n    add r0, r5, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    mov r1, #1\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x38]\n    mov r0, #0\n    str r0, [sp, #0x34]\n    ldr r0, _0225D9D0 ; =0x000015AC\n    add r7, r5, r0\n    add r0, #0x14\n    add r6, r5, r0\n    ldr r0, [sp, #0x30]\n    add r2, r5, #0\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _0225D9CC ; =0x000E0F00\n    add r2, #0x90\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, _0225D9C4 ; =0x00002713\n    add r3, r7, #0\n    str r0, [sp, #0x10]\n    str r4, [sp, #0x14]\n    mov r0, #0xa8\n    str r0, [sp, #0x18]\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    mov r0, #3\n    str r0, [sp, #0x20]\n    mov r0, #0xc\n    str r0, [sp, #0x24]\n    mov r0, #0xa\n    str r0, [sp, #0x28]\n    ldr r0, [r5, #0x2c]\n    ldr r1, [r5, #0x28]\n    ldr r2, [r2]\n    bl ov93_02261EB8\n    ldr r0, [sp, #0x38]\n    add r2, r5, #0\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _0225D9CC ; =0x000E0F00\n    add r2, #0x90\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, _0225D9C4 ; =0x00002713\n    add r3, r6, #0\n    str r0, [sp, #0x10]\n    str r4, [sp, #0x14]\n    mov r0, #0xa8\n    str r0, [sp, #0x18]\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    mov r0, #3\n    str r0, [sp, #0x20]\n    mov r0, #0xc\n    str r0, [sp, #0x24]\n    mov r0, #0xa\n    str r0, [sp, #0x28]\n    ldr r0, [r5, #0x2c]\n    ldr r1, [r5, #0x28]\n    ldr r2, [r2]\n    bl ov93_02261EB8\n    ldr r0, [sp, #0x34]\n    add r4, r4, #6\n    add r0, r0, #1\n    add r7, #0x28\n    add r6, #0x28\n    str r0, [sp, #0x34]\n    cmp r0, #6\n    blt _0225D840\n    ldr r0, [sp, #0x30]\n    bl String_Delete\n    ldr r0, [sp, #0x38]\n    bl String_Delete\n    ldr r0, _0225D9D4 ; =0x000015A8\n    add r0, r5, r0\n    bl ov93_02261FC8\n    add r0, r5, #0\n    bl ov93_02262250\n    ldr r0, [sp, #0x2c]\n    mov r1, #2\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, _0225D9D8 ; =0x00002714\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    ldr r2, [r5, #0x24]\n    ldr r3, [r5, #0x28]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0225D9DC ; =0x00002712\n    ldr r2, [sp, #0x2c]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    mov r3, #0x18\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0225D9DC ; =0x00002712\n    ldr r2, [sp, #0x2c]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    mov r3, #0x1a\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0225D9DC ; =0x00002712\n    ldr r2, [sp, #0x2c]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    mov r3, #0x19\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add r0, r5, #0\n    bl ov93_02262230\n    ldr r1, _0225D9D4 ; =0x000015A8\n    str r0, [r5, r1]\n    mov r0, #0xc8\n    str r0, [sp]\n    mov r0, #0x14\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, _0225D9DC ; =0x00002712\n    mov r1, #2\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    ldr r2, [r5, #0x24]\n    ldr r3, [r5, #0x28]\n    bl SpriteSystem_LoadPaletteBuffer\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0225D9E0 ; =0x00002711\n    mov r2, #0xc8\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    mov r3, #0x15\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0225D9E0 ; =0x00002711\n    mov r2, #0xc8\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    mov r3, #0x16\n    bl SpriteSystem_LoadCellResObj\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0225D9E0 ; =0x00002711\n    mov r2, #0xc8\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    mov r3, #0x17\n    bl SpriteSystem_LoadAnimResObj\n    add r0, r5, #0\n    bl ov93_02262344\n    ldr r1, _0225D9E4 ; =0x0000174C\n    str r0, [r5, r1]\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225D9C4: .word 0x00002713\n    _0225D9C8: .word 0x0000169C\n    _0225D9CC: .word 0x000E0F00\n    _0225D9D0: .word 0x000015AC\n    _0225D9D4: .word 0x000015A8\n    _0225D9D8: .word 0x00002714\n    _0225D9DC: .word 0x00002712\n    _0225D9E0: .word 0x00002711\n    _0225D9E4: .word 0x0000174C"
    );
    #endif
}

void ov93_0225D9E8(void) {
    /* Original at 0x0225D9E8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, _0225DA30 ; =0x000015AC\n    mov r6, #0\n    add r4, r7, r0\n    add r0, #0x14\n    add r5, r7, r0\n    add r0, r4, #0\n    bl ov93_02261FB0\n    add r0, r5, #0\n    bl ov93_02261FB0\n    add r6, r6, #1\n    add r4, #0x28\n    add r5, #0x28\n    cmp r6, #6\n    blt _0225D9F6\n    ldr r0, _0225DA34 ; =0x0000169C\n    add r0, r7, r0\n    bl ov93_02261FB0\n    add r0, r7, #0\n    bl ov93_02262310\n    ldr r1, _0225DA38 ; =0x000015A8\n    add r0, r7, #0\n    ldr r1, [r7, r1]\n    bl ov93_02262338\n    ldr r1, _0225DA3C ; =0x0000174C\n    add r0, r7, #0\n    ldr r1, [r7, r1]\n    bl ov93_02262368\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225DA30: .word 0x000015AC\n    _0225DA34: .word 0x0000169C\n    _0225DA38: .word 0x000015A8\n    _0225DA3C: .word 0x0000174C"
    );
    #endif
}

void ov93_0225DA40(void) {
    /* Original at 0x0225DA40 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r4, r1, #0\n    add r5, r0, #0\n    str r4, [sp]\n    mov r0, #0x17\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #9\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _0225DAE4 ; =0x00002716\n    mov r1, #3\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    ldr r2, [r5, #0x24]\n    ldr r3, [r5, #0x28]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _0225DAE8 ; =0x00002714\n    add r2, r4, #0\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    mov r3, #0x14\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0225DAE8 ; =0x00002714\n    add r2, r4, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    mov r3, #0x16\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0225DAE8 ; =0x00002714\n    add r2, r4, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    mov r3, #0x15\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add r0, r5, #0\n    bl ov93_022609E0\n    ldr r1, _0225DAEC ; =0x00001458\n    add r0, r5, #0\n    add r1, r5, r1\n    bl ov93_022610B0\n    ldr r1, _0225DAF0 ; =0x00001468\n    add r0, r5, #0\n    add r1, r5, r1\n    bl ov93_02261164\n    ldr r1, _0225DAF4 ; =0x00001560\n    add r0, r5, #0\n    add r1, r5, r1\n    bl ov93_02261BBC\n    add r0, r5, #0\n    bl ov93_02260CF8\n    add r0, r5, #0\n    bl ov93_02260E1C\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    nop\n    _0225DAE4: .word 0x00002716\n    _0225DAE8: .word 0x00002714\n    _0225DAEC: .word 0x00001458\n    _0225DAF0: .word 0x00001468\n    _0225DAF4: .word 0x00001560"
    );
    #endif
}

void ov93_0225DAF8(void) {
    /* Original at 0x0225DAF8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov93_02260A14\n    ldr r1, _0225DB20 ; =0x00001458\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov93_0226114C\n    ldr r1, _0225DB24 ; =0x00001468\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov93_022612E0\n    ldr r1, _0225DB28 ; =0x00001560\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov93_02261C3C\n    pop {r4, pc}\n    _0225DB20: .word 0x00001458\n    _0225DB24: .word 0x00001468\n    _0225DB28: .word 0x00001560"
    );
    #endif
}

void ov93_0225DB2C(void) {
    /* Original at 0x0225DB2C */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x8c\n    add r4, r1, #0\n    ldr r0, [r0]\n    mov r1, #0xc9\n    mov r2, #4\n    mov r3, #0x75\n    bl PaletteData_LoadNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x75\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x2c]\n    add r0, r4, #0\n    mov r1, #2\n    mov r3, #3\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x75\n    str r0, [sp, #0xc]\n    mov r1, #3\n    ldr r2, [r5, #0x2c]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0x75\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x2c]\n    add r0, r4, #0\n    mov r3, #2\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x75\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x2c]\n    add r0, r4, #0\n    mov r1, #1\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #1\n    add r5, #0x8c\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    mov r2, #2\n    add r3, r1, #0\n    bl PaletteData_FillPaletteInBuffer\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov93_0225DBC4(void) {
    /* Original at 0x0225DBC4 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov93_0225DBC8(void) {
    /* Original at 0x0225DBC8 */
    /* Requires manual decompilation - 161 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0xa0\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x8c\n    add r4, r1, #0\n    ldr r0, [r0]\n    mov r1, #0xc9\n    mov r2, #5\n    mov r3, #0x75\n    bl PaletteData_LoadNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #5\n    lsl r0, r0, #6\n    str r0, [sp, #4]\n    mov r0, #0x60\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #0xc9\n    mov r2, #6\n    mov r3, #0x75\n    bl PaletteData_LoadFromNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x75\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x2c]\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r3, #6\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x75\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x2c]\n    add r0, r4, #0\n    mov r1, #0xe\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x75\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x2c]\n    add r0, r4, #0\n    mov r1, #0x12\n    mov r3, #5\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    ldr r0, [r5]\n    add r0, #0x30\n    ldrb r0, [r0]\n    cmp r0, #2\n    beq _0225DC64\n    cmp r0, #3\n    beq _0225DC7E\n    b _0225DC98\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x75\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x2c]\n    add r0, r4, #0\n    mov r1, #0xf\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    b _0225DCB0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x75\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x2c]\n    add r0, r4, #0\n    mov r1, #0x10\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    b _0225DCB0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x75\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x2c]\n    add r0, r4, #0\n    mov r1, #0x11\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x75\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x2c]\n    add r0, r4, #0\n    mov r1, #0x12\n    mov r3, #4\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x75\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x2c]\n    add r0, r4, #0\n    mov r1, #0x13\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add r0, r5, #0\n    bl ov93_02260BF0\n    add r0, r5, #0\n    bl ov93_02260BB0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x75\n    str r0, [sp, #4]\n    mov r2, #0x35\n    ldr r0, [r5, #0x2c]\n    mov r1, #4\n    lsl r2, r2, #4\n    mov r3, #6\n    bl LoadUserFrameGfx1\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #1\n    mov r2, #0x60\n    mov r3, #0x20\n    bl PaletteData_LoadPaletteSlotFromHardware\n    mov r3, #0\n    str r3, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    add r5, #0x8c\n    ldr r0, [r5]\n    mov r2, #2\n    bl PaletteData_FillPaletteInBuffer\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov93_0225DD28(void) {
    /* Original at 0x0225DD28 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov93_0225DD2C(void) {
    /* Original at 0x0225DD2C */
    /* Requires manual decompilation - 184 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    str r0, [sp, #8]\n    str r0, [sp, #0x10]\n    add r0, #0xd8\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r7, #0\n    bl sub_0203769C\n    add r1, r0, #0\n    ldr r0, [sp, #8]\n    bl ov93_0225E45C\n    add r4, r0, #0\n    mov r1, #0x14\n    mul r4, r1\n    ldr r2, _0225DEB4 ; =ov93_02262AF0\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0xc]\n    ldr r2, [r2, r4]\n    mov r3, #0x75\n    bl sub_02018030\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x10]\n    add r0, #0x10\n    bl sub_020181B0\n    ldr r0, [sp, #0x10]\n    add r1, r7, #0\n    ldr r2, _0225DEB8 ; =0xFFFE7000\n    add r0, #0x10\n    add r3, r1, #0\n    bl sub_020182A8\n    ldr r0, [sp, #0x10]\n    mov r1, #1\n    lsl r1, r1, #0xc\n    add r0, #0x10\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_020182C4\n    ldr r0, [sp, #0x10]\n    mov r1, #1\n    add r0, #0x10\n    bl sub_020182A0\n    ldr r2, _0225DEBC ; =ov93_02262AF4\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0xc]\n    ldr r2, [r2, r4]\n    add r0, #0x88\n    mov r3, #0x75\n    bl sub_02018030\n    ldr r2, _0225DEC0 ; =ov93_02262AF8\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0xc]\n    ldr r2, [r2, r4]\n    add r0, #0x98\n    mov r3, #0x75\n    bl sub_02018030\n    ldr r2, _0225DEC4 ; =ov93_02262AFC\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0xc]\n    ldr r2, [r2, r4]\n    add r0, #0xa8\n    mov r3, #0x75\n    bl sub_02018030\n    ldr r2, _0225DEC8 ; =ov93_02262B00\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0xc]\n    ldr r2, [r2, r4]\n    add r0, #0xb8\n    mov r3, #0x75\n    bl sub_02018030\n    add r0, r7, #0\n    str r0, [sp, #0x1c]\n    mov r1, #0x51\n    ldr r0, [sp, #0x10]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #8]\n    str r0, [sp, #0x24]\n    add r0, #0xa8\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x10]\n    str r0, [sp, #0x20]\n    add r0, #0x88\n    str r0, [sp, #0x20]\n    mov r0, #0\n    ldr r4, [sp, #0x20]\n    ldr r5, [sp, #0x14]\n    ldr r6, [sp, #0x10]\n    str r0, [sp, #0x18]\n    cmp r7, #0\n    bne _0225DE18\n    mov r0, #0x75\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    ldr r3, [sp, #0x18]\n    str r0, [sp, #4]\n    ldr r2, [sp, #0xc]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, #0x23\n    bl sub_020180BC\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r7, [r6, r0]\n    b _0225DE24\n    ldr r3, [sp, #0x24]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl sub_020180E8\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02018198\n    ldr r0, [sp, #0x18]\n    add r4, #0x10\n    add r0, r0, #1\n    add r5, #0x90\n    add r6, #0x90\n    str r0, [sp, #0x18]\n    cmp r0, #4\n    blt _0225DDF6\n    mov r0, #9\n    ldr r1, [sp, #0x14]\n    lsl r0, r0, #6\n    add r0, r1, r0\n    str r0, [sp, #0x14]\n    mov r0, #9\n    ldr r1, [sp, #0x10]\n    lsl r0, r0, #6\n    add r0, r1, r0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #1\n    str r0, [sp, #0x1c]\n    cmp r0, #8\n    blt _0225DDEC\n    ldr r1, [sp, #8]\n    ldr r0, _0225DECC ; =0x000013A0\n    mov r2, #0x1e\n    add r0, r1, r0\n    ldr r1, [sp, #0xc]\n    mov r3, #0x75\n    bl sub_02018030\n    ldr r1, [sp, #8]\n    ldr r0, _0225DECC ; =0x000013A0\n    add r2, r1, #0\n    add r0, r1, r0\n    ldr r1, _0225DECC ; =0x000013A0\n    add r0, #0x10\n    add r1, r2, r1\n    bl sub_020181B0\n    ldr r1, [sp, #8]\n    ldr r0, _0225DECC ; =0x000013A0\n    ldr r2, _0225DEB8 ; =0xFFFE7000\n    add r0, r1, r0\n    mov r1, #0\n    add r0, #0x10\n    add r3, r1, #0\n    bl sub_020182A8\n    ldr r1, [sp, #8]\n    ldr r0, _0225DECC ; =0x000013A0\n    add r0, r1, r0\n    mov r1, #1\n    lsl r1, r1, #0xc\n    add r0, #0x10\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_020182C4\n    ldr r1, [sp, #8]\n    ldr r0, _0225DECC ; =0x000013A0\n    add r0, r1, r0\n    add r0, #0x10\n    mov r1, #1\n    bl sub_020182A0\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225DEB4: .word ov93_02262AF0\n    _0225DEB8: .word 0xFFFE7000\n    _0225DEBC: .word ov93_02262AF4\n    _0225DEC0: .word ov93_02262AF8\n    _0225DEC4: .word ov93_02262AFC\n    _0225DEC8: .word ov93_02262B00\n    _0225DECC: .word 0x000013A0"
    );
    #endif
}

void ov93_0225DED0(void) {
    /* Original at 0x0225DED0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    add r6, #0xd8\n    str r0, [sp]\n    add r0, r6, #0\n    bl sub_02018068\n    add r5, r6, #0\n    mov r4, #0\n    add r5, #0x88\n    add r0, r5, #0\n    bl sub_02018068\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #4\n    blt _0225DEE6\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x51\n    lsl r0, r0, #2\n    add r7, r6, r0\n    ldr r6, [sp]\n    add r6, #0xa8\n    mov r4, #0\n    add r5, r7, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_020180F8\n    add r4, r4, #1\n    add r5, #0x90\n    cmp r4, #4\n    blt _0225DF06\n    mov r0, #9\n    lsl r0, r0, #6\n    add r7, r7, r0\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #8\n    blt _0225DF02\n    ldr r1, _0225DF34 ; =0x000013A0\n    ldr r0, [sp]\n    add r0, r0, r1\n    bl sub_02018068\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225DF34: .word 0x000013A0"
    );
    #endif
}

void ov93_0225DF38(void) {
    /* Original at 0x0225DF38 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0x4b\n    lsl r0, r0, #4\n    add r5, #0xd8\n    cmp r1, r0\n    ble _0225DF4C\n    mov r2, #3\n    b _0225DF5E\n    cmp r1, #2\n    ble _0225DF54\n    mov r2, #2\n    b _0225DF5E\n    cmp r1, #1\n    ble _0225DF5C\n    mov r2, #1\n    b _0225DF5E\n    mov r2, #0\n    add r0, r5, #0\n    str r0, [sp, #4]\n    add r0, #0x88\n    mov r1, #0x90\n    str r0, [sp, #4]\n    lsl r0, r2, #4\n    mul r1, r2\n    mov r3, #9\n    mov ip, r0\n    mov r0, #0\n    add r1, r5, r1\n    lsl r3, r3, #6\n    add r4, r1, #0\n    add r4, #0xc8\n    ldr r4, [r4]\n    cmp r4, #0\n    bne _0225DFF2\n    add r4, r2, #0\n    mov r1, #0x90\n    mul r4, r1\n    lsl r1, r0, #3\n    add r0, r0, r1\n    lsl r7, r0, #6\n    add r0, r5, #0\n    add r0, #0xcc\n    add r6, r0, r7\n    ldr r1, [sp, #4]\n    mov r2, ip\n    add r0, r6, r4\n    add r1, r1, r2\n    bl sub_020181B0\n    mov r1, #0\n    ldr r2, _0225E000 ; =0xFFFE7000\n    add r0, r6, r4\n    add r3, r1, #0\n    bl sub_020182A8\n    mov r1, #1\n    lsl r1, r1, #0xc\n    add r0, r6, r4\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_020182C4\n    add r0, r6, r4\n    mov r1, #1\n    bl sub_020182A0\n    mov r0, #0x51\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r0, r0, r7\n    str r0, [sp]\n    add r0, r0, r4\n    mov r1, #0\n    bl sub_02018198\n    ldr r1, [sp]\n    add r0, r6, r4\n    add r1, r1, r4\n    bl sub_020181D4\n    add r0, r5, r7\n    add r0, r0, r4\n    mov r1, #1\n    add r0, #0xc8\n    str r1, [r0]\n    ldr r0, _0225E004 ; =0x00000591\n    bl PlaySE\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r0, #1\n    add r1, r1, r3\n    cmp r0, #8\n    blt _0225DF76\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225E000: .word 0xFFFE7000\n    _0225E004: .word 0x00000591"
    );
    #endif
}

void ov93_0225E008(void) {
    /* Original at 0x0225E008 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    lsl r0, r1, #3\n    add r0, r1, r0\n    add r4, #0xd8\n    lsl r6, r0, #6\n    add r0, r4, #0\n    add r0, #0xcc\n    mov r3, #0x90\n    add r5, r2, #0\n    mul r5, r3\n    add r3, #0xb4\n    add r1, r4, r3\n    add r0, r0, r6\n    add r1, r1, r6\n    add r0, r0, r5\n    add r1, r1, r5\n    bl sub_020181E0\n    add r0, r4, r6\n    add r0, r0, r5\n    mov r1, #0\n    add r0, #0xc8\n    str r1, [r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov93_0225E03C(void) {
    /* Original at 0x0225E03C */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    mov r1, #0x51\n    str r0, [sp]\n    str r0, [sp, #8]\n    add r0, #0xd8\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    add r0, r0, r1\n    mov r7, #0\n    str r0, [sp, #4]\n    ldr r4, [sp, #8]\n    ldr r5, [sp, #4]\n    mov r6, #0\n    add r0, r4, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    cmp r0, #1\n    bne _0225E07A\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl sub_0201815C\n    cmp r0, #1\n    bne _0225E07A\n    ldr r0, [sp]\n    add r1, r7, #0\n    add r2, r6, #0\n    bl ov93_0225E008\n    add r6, r6, #1\n    add r4, #0x90\n    add r5, #0x90\n    cmp r6, #4\n    blt _0225E058\n    mov r0, #9\n    ldr r1, [sp, #8]\n    lsl r0, r0, #6\n    add r0, r1, r0\n    str r0, [sp, #8]\n    mov r0, #9\n    ldr r1, [sp, #4]\n    lsl r0, r0, #6\n    add r0, r1, r0\n    add r7, r7, #1\n    str r0, [sp, #4]\n    cmp r7, #8\n    blt _0225E052\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov93_0225E0A4(void) {
    /* Original at 0x0225E0A4 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    add r0, #0xd8\n    str r0, [sp]\n    ldr r7, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r7, #0xcc\n    ldr r4, [sp]\n    mov r6, #0\n    add r5, r7, #0\n    add r0, r4, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    cmp r0, #1\n    bne _0225E0CC\n    add r0, r5, #0\n    bl sub_020181EC\n    add r6, r6, #1\n    add r4, #0x90\n    add r5, #0x90\n    cmp r6, #4\n    blt _0225E0BC\n    mov r0, #9\n    ldr r1, [sp]\n    lsl r0, r0, #6\n    add r0, r1, r0\n    str r0, [sp]\n    mov r0, #9\n    lsl r0, r0, #6\n    add r7, r7, r0\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #8\n    blt _0225E0B6\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov93_0225E0F4(void) {
    sub_0203769C(0, 1);
}

void ov93_0225E10C(void) {
    /* Original at 0x0225E10C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    ldr r5, [r0]\n    ldr r3, [r0, #0xc]\n    add r4, r5, #0\n    add r4, #0x30\n    ldrb r6, [r4]\n    add r1, r5, #0\n    add r1, #0x2c\n    mov r2, #1\n    ldrb r1, [r1]\n    cmp r6, #1\n    ble _0225E13C\n    add r4, r0, #4\n    ldr r7, [r4, #0xc]\n    cmp r3, r7\n    bhs _0225E134\n    add r1, r5, r2\n    add r1, #0x2c\n    ldrb r1, [r1]\n    add r3, r7, #0\n    add r2, r2, #1\n    add r4, r4, #4\n    cmp r2, r6\n    blt _0225E126\n    str r1, [r0, #4]\n    add r0, r1, #0\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov93_0225E144(void) {
    /* Original at 0x0225E144 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    str r1, [sp]\n    add r5, r2, #0\n    bl ov93_0225E1E0\n    cmp r0, #1\n    beq _0225E196\n    ldr r0, _0225E198 ; =0x00002F04\n    mov r1, #0x3c\n    add r6, r4, r0\n    ldr r0, [sp]\n    lsl r7, r0, #2\n    ldr r0, [r6, r7]\n    bl _s32_div_f\n    add r0, r1, #0\n    ldr r1, _0225E19C ; =0x00001C1C\n    mov r3, #0x4b\n    ldr r2, [sp]\n    lsl r3, r3, #4\n    add r1, r4, r1\n    mul r3, r2\n    add r2, r1, r3\n    mov r1, #0x14\n    mul r1, r0\n    ldr r0, [r6, r7]\n    add r4, r2, r1\n    add r0, r0, #1\n    str r0, [r6, r7]\n    ldr r0, [r2, r1]\n    cmp r0, #0\n    beq _0225E18A\n    bl GF_AssertFail\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225E198: .word 0x00002F04\n    _0225E19C: .word 0x00001C1C"
    );
    #endif
}

void ov93_0225E1A0(void) {
    /* Original at 0x0225E1A0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    ldr r0, _0225E1D8 ; =0x00002F14\n    lsl r4, r7, #2\n    add r5, r6, r0\n    ldr r0, [r5, r4]\n    mov r1, #0x3c\n    bl _s32_div_f\n    ldr r0, _0225E1DC ; =0x00001C1C\n    add r2, r6, r0\n    mov r0, #0x4b\n    lsl r0, r0, #4\n    mul r0, r7\n    add r0, r2, r0\n    mov r2, #0x14\n    mul r2, r1\n    ldr r1, [r0, r2]\n    cmp r1, #0\n    beq _0225E1D4\n    ldr r1, [r5, r4]\n    add r0, r0, r2\n    add r1, r1, #1\n    str r1, [r5, r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225E1D8: .word 0x00002F14\n    _0225E1DC: .word 0x00001C1C"
    );
    #endif
}

void ov93_0225E1E0(void) {
    /* Original at 0x0225E1E0 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r0, #7\n    bhi _0225E228\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225E1F8: ; jump table\n    ldr r0, _0225E22C ; =0x00002EF0\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0225E214\n    bl GF_AssertFail\n    ldr r0, _0225E22C ; =0x00002EF0\n    add r2, r5, r0\n    ldmia r4!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r2]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0225E22C: .word 0x00002EF0"
    );
    #endif
}

void ov93_0225E230(void) {
    /* Original at 0x0225E230 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov93_0225E27C\n    cmp r0, #1\n    beq _0225E270\n    ldr r0, _0225E274 ; =0x00002F24\n    mov r1, #0x3c\n    ldr r0, [r5, r0]\n    bl _s32_div_f\n    ldr r0, _0225E278 ; =0x0000176C\n    add r2, r5, r0\n    mov r0, #0x14\n    mul r0, r1\n    ldr r1, _0225E274 ; =0x00002F24\n    add r6, r2, r0\n    ldr r3, [r5, r1]\n    add r3, r3, #1\n    str r3, [r5, r1]\n    ldr r0, [r2, r0]\n    cmp r0, #0\n    beq _0225E264\n    bl GF_AssertFail\n    ldmia r4!, {r0, r1}\n    stmia r6!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r6!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r6]\n    pop {r4, r5, r6, pc}\n    nop\n    _0225E274: .word 0x00002F24\n    _0225E278: .word 0x0000176C"
    );
    #endif
}

void ov93_0225E27C(void) {
    /* Original at 0x0225E27C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r2, r1, #0\n    ldr r1, [r2]\n    cmp r1, #7\n    bhi _0225E2CC\n    add r3, r1, r1\n    add r3, pc\n    ldrh r3, [r3, #6]\n    lsl r3, r3, #0x10\n    asr r3, r3, #0x10\n    add pc, r3\n    _0225E292: ; jump table\n    ldr r3, _0225E2D0 ; =0x00002EDC\n    ldr r4, [r0, r3]\n    cmp r4, #0\n    bne _0225E2BC\n    add r3, r0, r3\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    mov r0, #1\n    pop {r4, pc}\n    cmp r1, r4\n    bne _0225E2C4\n    mov r0, #1\n    pop {r4, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _0225E2D0: .word 0x00002EDC"
    );
    #endif
}

void ov93_0225E2D4(void) {
    /* Original at 0x0225E2D4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0225E2F8 ; =0x00002F28\n    mov r1, #0x3c\n    ldr r0, [r4, r0]\n    bl _s32_div_f\n    ldr r0, _0225E2FC ; =0x0000176C\n    add r2, r1, #0\n    add r3, r4, r0\n    mov r0, #0x14\n    mul r2, r0\n    ldr r1, [r3, r2]\n    add r0, r3, r2\n    cmp r1, #0\n    bne _0225E2F6\n    mov r0, #0\n    pop {r4, pc}\n    _0225E2F8: .word 0x00002F28\n    _0225E2FC: .word 0x0000176C"
    );
    #endif
}

void ov93_0225E300(void) {
    /* Original at 0x0225E300 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r2, _0225E364 ; =0x00002FC4\n    add r5, r0, #0\n    ldr r1, [r5, r2]\n    cmp r1, #0\n    ble _0225E314\n    sub r0, r1, #1\n    str r0, [r5, r2]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r1, r2, #0\n    sub r1, #0xe8\n    ldr r1, [r5, r1]\n    cmp r1, #0\n    beq _0225E338\n    sub r2, #0xe8\n    add r1, r5, r2\n    bl ov93_02262724\n    cmp r0, #1\n    bne _0225E334\n    ldr r0, _0225E368 ; =0x00002EDC\n    mov r1, #0\n    str r1, [r5, r0]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    bl ov93_0225E2D4\n    add r4, r0, #0\n    bne _0225E344\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov93_02262724\n    cmp r0, #1\n    bne _0225E360\n    mov r0, #0\n    str r0, [r4]\n    ldr r0, _0225E36C ; =0x00002F28\n    ldr r1, [r5, r0]\n    add r1, r1, #1\n    str r1, [r5, r0]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0225E364: .word 0x00002FC4\n    _0225E368: .word 0x00002EDC\n    _0225E36C: .word 0x00002F28"
    );
    #endif
}

void ov93_0225E370(void) {
    /* Original at 0x0225E370 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0225E3B4 ; =0x00002EF0\n    add r5, r0, #0\n    add r1, r5, r1\n    bl ov93_022627C0\n    cmp r0, #1\n    beq _0225E3B2\n    ldr r0, [r5]\n    mov r4, #0\n    add r0, #0x30\n    ldrb r0, [r0]\n    cmp r0, #0\n    ble _0225E3B2\n    ldr r1, [r5]\n    add r0, r5, #0\n    add r1, r1, r4\n    add r1, #0x2c\n    ldrb r1, [r1]\n    bl ov93_0225E1A0\n    add r1, r0, #0\n    beq _0225E3A6\n    add r0, r5, #0\n    bl ov93_022627C0\n    b _0225E38C\n    ldr r0, [r5]\n    add r4, r4, #1\n    add r0, #0x30\n    ldrb r0, [r0]\n    cmp r4, r0\n    blt _0225E38C\n    pop {r3, r4, r5, pc}\n    _0225E3B4: .word 0x00002EF0"
    );
    #endif
}

void ov93_0225E3B8(void) {
    /* Original at 0x0225E3B8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0225E3C0 ; =0x00002FC8\n    ldr r0, [r0, r1]\n    bx lr\n    nop\n    _0225E3C0: .word 0x00002FC8"
    );
    #endif
}

void ov93_0225E3C4(void) {
    /* Original at 0x0225E3C4 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r7, r1, #0\n    bl sub_0203769C\n    mov r6, #0xff\n    add r4, r6, #0\n    mov r1, #0\n    b _0225E3F6\n    ldr r2, [r5]\n    add r2, r2, r1\n    add r2, #0x2c\n    ldrb r2, [r2]\n    cmp r0, r2\n    bne _0225E3E6\n    add r4, r1, #0\n    ldr r2, [r5]\n    add r2, r2, r1\n    add r2, #0x2c\n    ldrb r2, [r2]\n    cmp r7, r2\n    bne _0225E3F4\n    add r6, r1, #0\n    add r1, r1, #1\n    ldr r2, [r5]\n    add r2, #0x30\n    ldrb r2, [r2]\n    cmp r1, r2\n    blt _0225E3D8\n    mov r0, #0\n    cmp r6, #0xff\n    beq _0225E40C\n    cmp r4, #0xff\n    beq _0225E40C\n    mov r0, #1\n    cmp r0, #0\n    bne _0225E414\n    bl GF_AssertFail\n    mov r1, #0\n    ldr r0, _0225E458 ; =ov93_02262A54\n    b _0225E440\n    ldr r2, [r5]\n    add r2, #0x30\n    ldrb r2, [r2]\n    lsl r2, r2, #2\n    add r2, r0, r2\n    ldrb r2, [r1, r2]\n    cmp r4, r2\n    bne _0225E42C\n    str r1, [sp]\n    ldr r2, [r5]\n    add r2, #0x30\n    ldrb r2, [r2]\n    lsl r2, r2, #2\n    add r2, r0, r2\n    ldrb r2, [r1, r2]\n    cmp r6, r2\n    bne _0225E43E\n    str r1, [sp, #4]\n    add r1, r1, #1\n    ldr r2, [r5]\n    add r2, #0x30\n    ldrb r2, [r2]\n    cmp r1, r2\n    blt _0225E41A\n    ldr r1, [sp, #4]\n    ldr r0, [sp]\n    sub r0, r1, r0\n    bpl _0225E454\n    add r0, r0, r2\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225E458: .word ov93_02262A54"
    );
    #endif
}

void ov93_0225E45C(void) {
    /* Original at 0x0225E45C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, [r0]\n    mov r2, #0\n    add r0, r3, #0\n    add r0, #0x30\n    ldrb r4, [r0]\n    cmp r4, #0\n    ble _0225E482\n    add r0, r3, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    cmp r1, r0\n    bne _0225E47A\n    add r0, r2, #0\n    pop {r4, pc}\n    add r2, r2, #1\n    add r3, r3, #1\n    cmp r2, r4\n    blt _0225E46C\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov93_0225E48C(void) {
    /* Original at 0x0225E48C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0225E4AC ; =0x00002FD4\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    add r6, r2, #0\n    cmp r0, #0\n    beq _0225E4A0\n    bl GF_AssertFail\n    ldr r0, _0225E4AC ; =0x00002FD4\n    str r4, [r5, r0]\n    add r0, r0, #4\n    str r6, [r5, r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _0225E4AC: .word 0x00002FD4"
    );
    #endif
}

void ov93_0225E4B0(void) {
    /* Original at 0x0225E4B0 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0225E538 ; =0x00002FD4\n    mov r1, #0\n    ldr r2, [r4, r0]\n    cmp r2, #6\n    bhi _0225E508\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0225E4CA: ; jump table\n    mov r1, #1\n    b _0225E50C\n    mov r1, #1\n    b _0225E50C\n    mov r1, #1\n    b _0225E50C\n    sub r0, #8\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _0225E50C\n    mov r1, #1\n    b _0225E50C\n    ldr r0, _0225E53C ; =0x0000339C\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0225E50C\n    mov r1, #1\n    b _0225E50C\n    ldr r0, _0225E540 ; =0x00001768\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _0225E50C\n    mov r1, #1\n    b _0225E50C\n    mov r0, #0\n    pop {r4, pc}\n    cmp r1, #1\n    bne _0225E534\n    ldr r0, _0225E544 ; =0x00002FD8\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl sub_02037AC0\n    add r0, r4, #0\n    bl ov93_0225E0F4\n    cmp r0, #1\n    bne _0225E52A\n    mov r1, #7\n    b _0225E52C\n    mov r1, #0\n    ldr r0, _0225E538 ; =0x00002FD4\n    str r1, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _0225E538: .word 0x00002FD4\n    _0225E53C: .word 0x0000339C\n    _0225E540: .word 0x00001768\n    _0225E544: .word 0x00002FD8"
    );
    #endif
}

void ov93_0225E548(void) {
    /* Original at 0x0225E548 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0225E580 ; =0x00002FD4\n    ldr r2, [r4, r0]\n    cmp r2, #7\n    beq _0225E558\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, r1\n    beq _0225E564\n    mov r0, #0\n    pop {r4, pc}\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl sub_02037B38\n    cmp r0, #1\n    bne _0225E57A\n    ldr r0, _0225E580 ; =0x00002FD4\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0225E580: .word 0x00002FD4"
    );
    #endif
}

void ov93_0225E584(void) {
    /* Original at 0x0225E584 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #5\n    bhi _0225E616\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0225E59A: ; jump table\n    ldrb r2, [r4, #0x18]\n    mov r1, #1\n    bl ov93_0226297C\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    b _0225E616\n    ldrb r1, [r4, #0x18]\n    bl ov93_0225E548\n    cmp r0, #1\n    bne _0225E616\n    ldrb r0, [r4, #0x18]\n    add r0, r0, #1\n    strb r0, [r4, #0x18]\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    b _0225E616\n    ldrb r1, [r4, #0x18]\n    bl ov93_022629B8\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    b _0225E616\n    ldrb r1, [r4, #0x18]\n    bl ov93_0225E548\n    cmp r0, #1\n    bne _0225E616\n    ldrb r0, [r4, #0x18]\n    add r0, r0, #1\n    strb r0, [r4, #0x18]\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    b _0225E616\n    ldrb r1, [r4, #0x18]\n    bl ov93_022628F4\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    b _0225E616\n    ldrb r1, [r4, #0x18]\n    bl ov93_0225E548\n    cmp r0, #1\n    bne _0225E616\n    ldrb r0, [r4, #0x18]\n    add r0, r0, #1\n    strb r0, [r4, #0x18]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov93_0225E61C(void) {
    /* Original at 0x0225E61C */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r1, _0225E6E8 ; =0x00002FB4\n    ldr r0, _0225E6EC ; =0x00000516\n    ldr r2, [r5, r1]\n    cmp r2, r0\n    bls _0225E64C\n    add r0, r1, #0\n    add r0, #0x20\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _0225E64C\n    add r0, r1, #0\n    sub r0, #0xd8\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _0225E64C\n    sub r1, #0xc4\n    ldr r0, [r5, r1]\n    cmp r0, #0\n    bne _0225E64C\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0xc]\n    cmp r0, #3\n    bhi _0225E6E4\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225E65E: ; jump table\n    ldr r0, _0225E6F0 ; =0x00002FC8\n    ldr r0, [r5, r0]\n    bl ov93_0225FDF4\n    ldr r1, _0225E6F0 ; =0x00002FC8\n    add r2, r0, #0\n    ldrb r3, [r4, #0x18]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov93_02262884\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    b _0225E6E4\n    ldrb r1, [r4, #0x18]\n    add r0, r5, #0\n    bl ov93_0225E548\n    cmp r0, #1\n    bne _0225E6E4\n    ldrb r0, [r4, #0x18]\n    add r0, r0, #1\n    strb r0, [r4, #0x18]\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    b _0225E6E4\n    ldr r0, _0225E6F4 ; =0x00001434\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    beq _0225E6E4\n    sub r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, r1\n    blt _0225E6E4\n    ldr r0, _0225E6F0 ; =0x00002FC8\n    ldr r1, [r5, r0]\n    add r1, r1, #1\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov93_0225E3B8\n    add r1, r0, #0\n    ldrb r2, [r4, #0x18]\n    add r0, r5, #0\n    bl ov93_02262830\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    b _0225E6E4\n    ldrb r1, [r4, #0x18]\n    add r0, r5, #0\n    bl ov93_0225E548\n    cmp r0, #1\n    bne _0225E6E4\n    ldrb r0, [r4, #0x18]\n    add r0, r0, #1\n    strb r0, [r4, #0x18]\n    mov r0, #0\n    str r0, [r4, #0xc]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0225E6E8: .word 0x00002FB4\n    _0225E6EC: .word 0x00000516\n    _0225E6F0: .word 0x00002FC8\n    _0225E6F4: .word 0x00001434"
    );
    #endif
}

void ov93_0225E6F8(void) {
    /* Original at 0x0225E6F8 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #3\n    bhi _0225E75E\n    add r2, r1, r1\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0225E70E: ; jump table\n    ldrb r1, [r4, #0x18]\n    bl ov93_02262934\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    b _0225E75E\n    ldrb r1, [r4, #0x18]\n    bl ov93_0225E548\n    cmp r0, #1\n    bne _0225E75E\n    ldrb r0, [r4, #0x18]\n    add r0, r0, #1\n    strb r0, [r4, #0x18]\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    b _0225E75E\n    ldr r0, [r0, #0x20]\n    cmp r0, #8\n    bne _0225E75E\n    add r0, r1, #1\n    str r0, [r4, #0xc]\n    b _0225E75E\n    ldr r1, [r4, #0x14]\n    add r1, r1, #1\n    str r1, [r4, #0x14]\n    cmp r1, #0x5a\n    blt _0225E75E\n    bl ov93_02262748\n    cmp r0, #1\n    bne _0225E75E\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov93_0225E764(void) {
    /* Original at 0x0225E764 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov93_0225E0F4\n    cmp r0, #0\n    bne _0225E774\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r0, #0xb8\n    ldr r2, [r0]\n    add r4, r5, #0\n    add r4, #0xb8\n    cmp r2, #3\n    blo _0225E786\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    lsl r3, r2, #2\n    ldr r2, _0225E7A8 ; =ov93_02262A20\n    add r0, r5, #0\n    ldr r2, [r2, r3]\n    add r1, r4, #0\n    blx r2\n    cmp r0, #1\n    bne _0225E7A4\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r4, #0xc]\n    str r0, [r4, #0x14]\n    str r0, [r4, #0x10]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0225E7A8: .word ov93_02262A20"
    );
    #endif
}

void ov93_0225E7AC(void) {
    /* Original at 0x0225E7AC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov93_0225E7B0(void) {
    /* Original at 0x0225E7B0 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x9e\n    add r5, r0, #0\n    mov r0, #0x75\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    mov r2, #0x9e\n    mov r1, #0\n    lsl r2, r2, #2\n    add r4, r0, #0\n    bl MI_CpuFill8\n    ldr r0, [r5]\n    ldr r1, [r0, #0x34]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov93_0225EC98\n    add r0, r4, #0\n    bl ov93_0225EF0C\n    add r0, r4, #0\n    bl ov93_0225EF5C\n    ldr r0, [r5]\n    ldr r0, [r0, #0x34]\n    cmp r0, #1\n    beq _0225E806\n    cmp r0, #2\n    bne _0225E81A\n    mov r1, #1\n    mov r0, #0x26\n    lsl r1, r1, #0x12\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    mov r1, #0x1a\n    lsl r1, r1, #0xe\n    add r0, r0, #4\n    str r1, [r4, r0]\n    b _0225E828\n    mov r1, #9\n    mov r0, #0x26\n    lsl r1, r1, #0x10\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    mov r1, #7\n    lsl r1, r1, #0x10\n    add r0, r0, #4\n    str r1, [r4, r0]\n    b _0225E828\n    mov r1, #6\n    mov r0, #0x26\n    lsl r1, r1, #0x10\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    mov r0, #0x87\n    mov r1, #0x80\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r1, #0x28\n    add r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r5, #0\n    bl ov93_0225F9D8\n    add r0, r5, #0\n    bl ov93_0225FB00\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov93_0225FB6C\n    mov r1, #2\n    mov r0, #0x92\n    lsl r1, r1, #0xc\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov93_0225E860(void) {
    /* Original at 0x0225E860 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x8d\n    add r4, r1, #0\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov93_0225FBE4\n    add r0, r5, #0\n    bl ov93_0225FABC\n    ldr r0, [r4]\n    bl Heap_Free\n    mov r0, #0x93\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov93_0225E898(void) {
    /* Original at 0x0225E898 */
    /* Requires manual decompilation - 198 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    mov r1, #0x91\n    add r5, r0, #0\n    mov r0, #0\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r5, #0x20]\n    cmp r0, #2\n    bne _0225E8D8\n    ldr r0, _0225EA38 ; =0x00001758\n    add r2, r1, #0\n    ldr r3, [r5, r0]\n    sub r2, #0x38\n    str r3, [r4, r2]\n    add r2, r0, #4\n    ldr r3, [r5, r2]\n    add r2, r1, #0\n    sub r2, #0x34\n    str r3, [r4, r2]\n    add r2, r0, #0\n    add r2, #8\n    ldr r3, [r5, r2]\n    add r2, r1, #0\n    sub r2, #0x30\n    str r3, [r4, r2]\n    add r0, #0xc\n    ldr r0, [r5, r0]\n    sub r1, #0x2c\n    str r0, [r4, r1]\n    b _0225E920\n    ldr r0, _0225EA3C ; =0x00002FB8\n    ldr r2, [r5, r0]\n    cmp r2, #0\n    beq _0225E8E8\n    add r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #1\n    bne _0225E900\n    mov r1, #0x83\n    lsl r1, r1, #2\n    mov r2, #0\n    str r2, [r4, r1]\n    add r0, r1, #4\n    str r2, [r4, r0]\n    add r0, r1, #0\n    add r0, #8\n    str r2, [r4, r0]\n    add r1, #0xc\n    str r2, [r4, r1]\n    b _0225E920\n    ldr r2, _0225EA40 ; =gSystem + 0x40\n    add r0, r1, #0\n    ldrh r3, [r2, #0x20]\n    sub r0, #0x38\n    str r3, [r4, r0]\n    add r0, r1, #0\n    ldrh r3, [r2, #0x22]\n    sub r0, #0x34\n    str r3, [r4, r0]\n    add r0, r1, #0\n    ldrh r3, [r2, #0x26]\n    sub r0, #0x30\n    sub r1, #0x2c\n    str r3, [r4, r0]\n    ldrh r0, [r2, #0x24]\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov93_0225F370\n    mov r0, #0x85\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0225E946\n    add r0, r4, #0\n    bl ov93_0225EB38\n    ldr r0, [r4, #0x20]\n    cmp r0, #0\n    bne _0225E946\n    bne _0225E946\n    mov r0, #0x9d\n    mov r1, #0\n    lsl r0, r0, #2\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    bl ov93_0225F44C\n    add r0, r4, #0\n    bl ov93_0225EB70\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov93_0225FB6C\n    mov r0, #0x9a\n    lsl r0, r0, #2\n    ldrsh r1, [r4, r0]\n    cmp r1, #0\n    ble _0225E97C\n    add r1, #8\n    strh r1, [r4, r0]\n    ldrsh r1, [r4, r0]\n    cmp r1, #0x1e\n    ble _0225E976\n    mov r1, #0x1e\n    strh r1, [r4, r0]\n    add r0, r4, #0\n    bl ov93_0225EDFC\n    ldr r0, _0225EA44 ; =0x00002FBC\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    bne _0225EA34\n    sub r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #1\n    bne _0225EA34\n    mov r2, #0x91\n    lsl r2, r2, #2\n    ldr r1, [r4, r2]\n    cmp r1, #0\n    ble _0225EA34\n    add r0, r2, #0\n    add r0, #0x18\n    ldr r0, [r4, r0]\n    add r2, #0xdc\n    mov r7, #0\n    cmp r0, r2\n    bge _0225E9C4\n    add r0, r4, #0\n    bl ov93_0225EDB8\n    cmp r0, #1\n    bne _0225E9D4\n    mov r0, #0x9a\n    mov r1, #8\n    lsl r0, r0, #2\n    strh r1, [r4, r0]\n    add r1, r7, #0\n    add r0, #0xd\n    strb r1, [r4, r0]\n    ldr r0, _0225EA48 ; =0x0000058E\n    bl PlaySE\n    b _0225E9D4\n    add r0, r4, #0\n    bl ov93_0225EDE8\n    mov r0, #0x9a\n    add r1, r7, #0\n    lsl r0, r0, #2\n    strh r1, [r4, r0]\n    mov r7, #1\n    mov r1, #0x91\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov93_0225EA6C\n    add r6, r0, #0\n    cmp r7, #1\n    bne _0225E9F2\n    mov r0, #0x19\n    mul r0, r6\n    mov r1, #0x64\n    bl _s32_div_f\n    add r6, r6, r0\n    ldr r1, _0225EA4C ; =0x00002FC8\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    add r3, sp, #0\n    bl ov93_02260F14\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov93_02260F3C\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov93_0225FEC4\n    mov r1, #0x91\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov93_0225EA98\n    mov r2, #0x91\n    lsl r2, r2, #2\n    ldr r2, [r4, r2]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r7, #0\n    bl ov93_0225EAE0\n    mov r0, #0x91\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225EA38: .word 0x00001758\n    _0225EA3C: .word 0x00002FB8\n    _0225EA40: .word gSystem + 0x40\n    _0225EA44: .word 0x00002FBC\n    _0225EA48: .word 0x0000058E\n    _0225EA4C: .word 0x00002FC8"
    );
    #endif
}

void ov93_0225EA50(void) {
    ov93_0225ED3C(0);
}

void ov93_0225EA6C(void) {
    /* Original at 0x0225EA6C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0x62\n    blt _0225EA76\n    mov r2, #0x4b\n    lsl r2, r2, #4\n    b _0225EA7A\n    mov r2, #0xa\n    mul r2, r1\n    mov r1, #0x27\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    ldr r3, _0225EA90 ; =_s32_div_f\n    lsl r1, r0, #2\n    ldr r0, _0225EA94 ; =ov93_022630D8\n    ldr r0, [r0, r1]\n    mov r1, #0x64\n    mul r0, r2\n    bx r3\n    nop\n    _0225EA90: .word _s32_div_f\n    _0225EA94: .word ov93_022630D8"
    );
    #endif
}

void ov93_0225EA98(void) {
    /* Original at 0x0225EA98 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x91\n    lsl r2, r2, #2\n    ldr r1, [r0, r2]\n    cmp r1, #0x62\n    blt _0225EAB2\n    add r1, r2, #4\n    ldr r3, [r0, r1]\n    mov r1, #1\n    lsl r1, r1, #0xc\n    add r3, r3, r1\n    add r1, r2, #4\n    str r3, [r0, r1]\n    b _0225EACC\n    blt _0225EAC4\n    add r1, r2, #4\n    ldr r3, [r0, r1]\n    mov r1, #1\n    lsl r1, r1, #0xc\n    add r3, r3, r1\n    add r1, r2, #4\n    str r3, [r0, r1]\n    b _0225EACC\n    mov r3, #2\n    lsl r3, r3, #0xc\n    add r1, r2, #4\n    str r3, [r0, r1]\n    mov r1, #0x92\n    lsl r1, r1, #2\n    mov r2, #0x11\n    ldr r3, [r0, r1]\n    lsl r2, r2, #0xc\n    cmp r3, r2\n    ble _0225EADC\n    str r2, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov93_0225EAE0(void) {
    /* Original at 0x0225EAE0 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r3, #1\n    bne _0225EAFE\n    mov r2, #0x91\n    lsl r2, r2, #2\n    ldr r2, [r1, r2]\n    cmp r2, #0x62\n    blt _0225EAFE\n    mov r1, #0\n    bl ov93_0225D700\n    ldr r0, _0225EB34 ; =0x00000592\n    bl PlaySE\n    pop {r3, pc}\n    mov r2, #0x91\n    lsl r2, r2, #2\n    ldr r2, [r1, r2]\n    cmp r2, #0x62\n    bge _0225EB32\n    ldr r2, [r1, #0x20]\n    ldr r1, [r1, #0x10]\n    cmp r1, r2\n    bge _0225EB20\n    mov r1, #2\n    bl ov93_0225D700\n    mov r0, #0x59\n    lsl r0, r0, #4\n    bl PlaySE\n    pop {r3, pc}\n    cmp r1, r2\n    ble _0225EB32\n    mov r1, #1\n    bl ov93_0225D700\n    mov r0, #0x59\n    lsl r0, r0, #4\n    bl PlaySE\n    pop {r3, pc}\n    _0225EB34: .word 0x00000592"
    );
    #endif
}

void ov93_0225EB38(void) {
    /* Original at 0x0225EB38 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x8e\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    cmp r2, #0\n    beq _0225EB6C\n    mov r2, #0\n    str r2, [r4, r1]\n    sub r2, r2, #1\n    add r1, r1, #4\n    str r2, [r4, r1]\n    bl ov93_0225F9AC\n    mov r1, #9\n    lsl r1, r1, #6\n    ldr r2, [r4, r1]\n    sub r2, r2, r0\n    add r0, r1, #4\n    str r2, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0x19\n    bge _0225EB6C\n    mov r2, #0\n    add r0, r1, #4\n    str r2, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov93_0225EB70(void) {
    /* Original at 0x0225EB70 */
    /* Requires manual decompilation - 124 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x38\n    add r5, r0, #0\n    ldr r0, _0225EC80 ; =0x2D8B6127\n    add r1, sp, #0x1c\n    str r0, [sp, #0x1c]\n    mov r0, #0x32\n    mov r2, #1\n    bl NNS_G3dGeBufferOP_N\n    ldr r0, _0225EC84 ; =0x00007FFF\n    add r1, sp, #0x18\n    str r0, [sp, #0x18]\n    mov r0, #0x33\n    mov r2, #1\n    bl NNS_G3dGeBufferOP_N\n    mov r1, #0\n    mov r0, #0x11\n    add r2, r1, #0\n    bl NNS_G3dGeBufferOP_N\n    mov r0, #0\n    str r0, [sp, #0x2c]\n    mov r0, #0x13\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x30]\n    ldr r0, _0225EC88 ; =0xFFFFB000\n    add r1, sp, #0x2c\n    str r0, [sp, #0x34]\n    mov r0, #0x1c\n    mov r2, #3\n    bl NNS_G3dGeBufferOP_N\n    mov r0, #0x99\n    lsl r0, r0, #2\n    ldr r4, [r5, r0]\n    add r0, r0, #6\n    ldrsh r0, [r5, r0]\n    mov r1, #0x64\n    mul r0, r4\n    bl _s32_div_f\n    mov r1, #0x26\n    lsl r1, r1, #4\n    add r6, r4, r0\n    add r0, r1, #0\n    ldr r4, [r5, r1]\n    add r0, #8\n    add r1, #0xc\n    ldrsh r2, [r5, r0]\n    ldrsh r0, [r5, r1]\n    mov r1, #0x64\n    add r0, r2, r0\n    mul r0, r4\n    bl _s32_div_f\n    add r0, r4, r0\n    str r0, [sp, #0x20]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x28]\n    mov r0, #0x1b\n    add r1, sp, #0x20\n    mov r2, #3\n    str r6, [sp, #0x24]\n    bl NNS_G3dGeBufferOP_N\n    mov r0, #3\n    str r0, [sp, #0x14]\n    mov r0, #0x10\n    add r1, sp, #0x14\n    mov r2, #1\n    bl NNS_G3dGeBufferOP_N\n    mov r1, #0\n    mov r0, #0x15\n    add r2, r1, #0\n    bl NNS_G3dGeBufferOP_N\n    mov r0, #2\n    str r0, [sp, #0x10]\n    mov r0, #0x10\n    add r1, sp, #0x10\n    mov r2, #1\n    bl NNS_G3dGeBufferOP_N\n    mov r0, #1\n    add r1, r0, #0\n    bl ov93_0225EE4C\n    bl ov93_0225EE98\n    ldr r1, [r5, #4]\n    mov r2, #1\n    ldr r0, [r1, #0x2c]\n    lsl r4, r0, #0x10\n    ldr r0, [r1, #8]\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    ldr r0, _0225EC8C ; =0x1FFFFFFF\n    and r1, r0\n    ldr r0, _0225EC90 ; =0x72400000\n    orr r0, r1\n    str r0, [sp, #0xc]\n    mov r0, #0x2a\n    add r1, sp, #0xc\n    bl NNS_G3dGeBufferOP_N\n    lsr r0, r4, #0x11\n    str r0, [sp, #8]\n    mov r0, #0x2b\n    add r1, sp, #8\n    mov r2, #1\n    bl NNS_G3dGeBufferOP_N\n    ldr r0, _0225EC94 ; =0x001F00C1\n    add r1, sp, #4\n    str r0, [sp, #4]\n    mov r0, #0x29\n    mov r2, #1\n    bl NNS_G3dGeBufferOP_N\n    add r0, r5, #0\n    bl ov93_0225EFAC\n    mov r2, #1\n    mov r0, #0x12\n    add r1, sp, #0\n    str r2, [sp]\n    bl NNS_G3dGeBufferOP_N\n    bl NNS_G3dGeFlushBuffer\n    add sp, #0x38\n    pop {r4, r5, r6, pc}\n    _0225EC80: .word 0x2D8B6127\n    _0225EC84: .word 0x00007FFF\n    _0225EC88: .word 0xFFFFB000\n    _0225EC8C: .word 0x1FFFFFFF\n    _0225EC90: .word 0x72400000\n    _0225EC94: .word 0x001F00C1"
    );
    #endif
}

void ov93_0225EC98(void) {
    /* Original at 0x0225EC98 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0xc9\n    mov r1, #0x1d\n    mov r2, #0x75\n    bl AllocAndReadWholeNarcMemberByIdPair\n    str r0, [r5]\n    bl NNS_G3dGetTex\n    str r0, [r5, #4]\n    bl GF3dRender_AllocAndLoadTexResources\n    ldr r6, [r5, #4]\n    ldrh r0, [r6, #0x30]\n    ldr r7, [r6, #0x38]\n    lsl r4, r0, #3\n    ldr r0, [r6, #0x2c]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0xd\n    str r0, [sp]\n    mov r0, #0x93\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0225ECD0\n    bl GF_AssertFail\n    mov r0, #0x75\n    add r1, r4, #0\n    bl Heap_Alloc\n    mov r1, #0x93\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0x75\n    add r1, r4, #0\n    bl Heap_Alloc\n    mov r1, #0x25\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    sub r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r6, r7\n    add r2, r4, #0\n    bl MI_CpuCopy8\n    mov r1, #0x25\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r6, r7\n    add r2, r4, #0\n    bl MI_CpuCopy8\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl DC_FlushRange\n    mov r1, #0x96\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r0, r1, #4\n    str r4, [r5, r0]\n    ldr r0, [r5, #4]\n    ldr r0, [r0, #0x14]\n    cmp r0, #0\n    bne _0225ED2A\n    bl GF_AssertFail\n    ldr r2, [r5, #4]\n    ldr r0, [r5]\n    ldr r1, [r2, #0x14]\n    add r1, r2, r1\n    sub r1, r1, r0\n    bl Heap_Realloc\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov93_0225ED3C(void) {
    /* Original at 0x0225ED3C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl GX_BeginLoadTexPltt\n    mov r2, #0x25\n    lsl r2, r2, #4\n    add r1, r2, #0\n    ldr r0, [r4, r2]\n    add r1, #8\n    add r2, r2, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    bl GX_LoadTexPltt\n    bl GX_EndLoadTexPltt\n    pop {r4, pc}"
    );
    #endif
}

void ov93_0225ED60(void) {
    /* Original at 0x0225ED60 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    lsl r0, r1, #1\n    add r0, r1, r0\n    mov r1, #0x32\n    lsl r0, r0, #0xa\n    lsl r1, r1, #4\n    bl _s32_div_f\n    add r0, #0x80\n    asr r3, r0, #8\n    cmp r3, #0x10\n    ble _0225ED7E\n    mov r3, #0x10\n    mov r2, #0x93\n    mov r0, #0x1f\n    lsl r2, r2, #2\n    str r0, [sp]\n    add r1, r2, #4\n    ldr r0, [r4, r2]\n    add r2, #8\n    ldr r2, [r4, r2]\n    lsl r3, r3, #0x18\n    lsl r2, r2, #0xf\n    ldr r1, [r4, r1]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl BlendPalette\n    mov r1, #0x25\n    lsl r1, r1, #4\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    bl DC_FlushRange\n    ldr r0, _0225EDB4 ; =0x00000276\n    mov r1, #1\n    strb r1, [r4, r0]\n    add sp, #4\n    pop {r3, r4, pc}\n    _0225EDB4: .word 0x00000276"
    );
    #endif
}

void ov93_0225EDB8(void) {
    /* Original at 0x0225EDB8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #0x97\n    lsl r2, r2, #2\n    ldr r3, [r0, r2]\n    mov r4, #0\n    add r1, r3, r1\n    str r1, [r0, r2]\n    add r1, r2, #0\n    ldr r3, [r0, r2]\n    add r1, #0xc4\n    cmp r3, r1\n    blt _0225EDD8\n    add r1, r2, #0\n    add r1, #0xc4\n    str r1, [r0, r2]\n    mov r4, #1\n    mov r1, #0x97\n    lsl r1, r1, #2\n    ldr r1, [r0, r1]\n    bl ov93_0225ED60\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov93_0225EDE8(void) {
    /* Original at 0x0225EDE8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x97\n    ldr r3, _0225EDF8 ; =ov93_0225ED60\n    mov r2, #0\n    lsl r1, r1, #2\n    str r2, [r0, r1]\n    ldr r1, [r0, r1]\n    bx r3\n    nop\n    _0225EDF8: .word ov93_0225ED60"
    );
    #endif
}

void ov93_0225EDFC(void) {
    /* Original at 0x0225EDFC */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #0x9a\n    add r4, r0, #0\n    lsl r2, r2, #2\n    ldrsh r1, [r4, r2]\n    cmp r1, #0\n    beq _0225EE44\n    add r1, r2, #0\n    add r1, #0xd\n    ldrb r1, [r4, r1]\n    add r3, r1, #1\n    add r1, r2, #0\n    add r1, #0xd\n    strb r3, [r4, r1]\n    add r1, r2, #0\n    add r1, #0xd\n    ldrb r1, [r4, r1]\n    cmp r1, #4\n    bne _0225EE32\n    sub r2, #0xc\n    ldr r2, [r4, r2]\n    lsr r1, r2, #0x1f\n    add r1, r2, r1\n    asr r1, r1, #1\n    bl ov93_0225ED60\n    pop {r4, pc}\n    cmp r1, #8\n    bne _0225EE44\n    sub r2, #0xc\n    ldr r1, [r4, r2]\n    bl ov93_0225ED60\n    ldr r0, _0225EE48 ; =0x00000275\n    mov r1, #0\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _0225EE48: .word 0x00000275"
    );
    #endif
}

void ov93_0225EE4C(void) {
    /* Original at 0x0225EE4C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r1, #0\n    cmp r0, #0\n    beq _0225EE5A\n    mov r0, #1\n    b _0225EE5C\n    mov r0, #0\n    lsl r1, r0, #0xf\n    ldr r0, _0225EE90 ; =0x21085EF7\n    mov r2, #1\n    orr r0, r1\n    str r0, [sp, #4]\n    mov r0, #0x30\n    add r1, sp, #4\n    bl NNS_G3dGeBufferOP_N\n    cmp r4, #0\n    beq _0225EE76\n    mov r0, #1\n    b _0225EE78\n    mov r0, #0\n    lsl r1, r0, #0xf\n    ldr r0, _0225EE94 ; =0x00007FFF\n    mov r2, #1\n    orr r0, r1\n    str r0, [sp]\n    mov r0, #0x31\n    add r1, sp, #0\n    bl NNS_G3dGeBufferOP_N\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _0225EE90: .word 0x21085EF7\n    _0225EE94: .word 0x00007FFF"
    );
    #endif
}
