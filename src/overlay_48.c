/* Decompiled from asm/overlay_48.s */
#include "global.h"

void ov48_02258800(void) {
    /* Original at 0x02258800 */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl OverlayManager_GetArgs\n    mov r2, #5\n    add r5, r0, #0\n    mov r0, #3\n    mov r1, #0x70\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    ldr r1, _0225890C ; =0x0000C724\n    add r0, r4, #0\n    mov r2, #0x70\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _0225890C ; =0x0000C724\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    ldr r0, [r5, #4]\n    bl Save_WiFiHistory_Get\n    str r0, [r4, #0xc]\n    ldr r0, [r5, #4]\n    bl Save_PlayerData_GetOptionsAddr\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #0xc]\n    bl WifiHistory_GetPlayerCountry\n    str r0, [r4, #0x14]\n    ldr r0, [r4, #0xc]\n    bl WiFiHistory_GetPlayerRegion\n    str r0, [r4, #0x18]\n    ldr r0, [r5, #8]\n    add r1, r5, #0\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov48_022593F4\n    add r0, r4, #0\n    ldr r1, [r4, #0x10]\n    add r0, #0x20\n    mov r2, #0x70\n    bl ov48_02259464\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    add r1, r4, #0\n    add r0, r4, r0\n    add r1, #0x20\n    mov r2, #0x70\n    bl ov48_02259824\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0x70\n    bl ov48_0225B068\n    mov r0, #0x70\n    str r0, [sp, #4]\n    mov r2, sp\n    ldr r1, [r4, #4]\n    ldr r0, [r4, #8]\n    sub r2, r2, #4\n    str r1, [r2]\n    str r0, [r2, #4]\n    mov r0, #0x89\n    ldr r3, [r2]\n    lsl r0, r0, #2\n    add r2, r4, #0\n    ldr r1, [r5]\n    add r0, r4, r0\n    add r2, #0x20\n    bl ov48_022598EC\n    add r3, r4, #4\n    ldr r0, _02258910 ; =0x0000C3CC\n    ldmia r3!, {r1, r2}\n    add r0, r4, r0\n    mov r3, #0x70\n    bl ov48_02259BC0\n    ldr r0, _02258914 ; =0x0000C3E0\n    mov r2, #0x5a\n    add r1, r4, #0\n    lsl r2, r2, #2\n    add r0, r4, r0\n    add r1, #0x20\n    add r2, r4, r2\n    mov r3, #0x70\n    bl ov48_02259D00\n    mov r2, #0x70\n    str r2, [sp]\n    mov r0, #0xc7\n    lsl r0, r0, #8\n    add r1, r4, #0\n    add r2, #0xf8\n    ldr r3, [r5, #4]\n    add r0, r4, r0\n    add r1, #0x20\n    add r2, r4, r2\n    bl ov48_02259EAC\n    ldr r0, _02258918 ; =0x0000C40C\n    mov r2, #0x5a\n    add r1, r4, #0\n    lsl r2, r2, #2\n    add r0, r4, r0\n    add r1, #0x20\n    add r2, r4, r2\n    mov r3, #0x70\n    bl ov48_0225A00C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov48_02259130\n    ldr r0, _0225891C ; =ov48_02259090\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _0225890C: .word 0x0000C724\n    _02258910: .word 0x0000C3CC\n    _02258914: .word 0x0000C3E0\n    _02258918: .word 0x0000C40C\n    _0225891C: .word ov48_02259090"
    );
    #endif
}

void ov48_02258920(void) {
    /* Original at 0x02258920 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl OverlayManager_GetData\n    add r7, r0, #0\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r0, #6\n    bhi _022589EE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02258948: ; jump table\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x70\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r5, #0xc]\n    mov r1, #1\n    bl ov45_0222A520\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _022589EE\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _022589EE\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _022589EE\n    add r0, r7, #0\n    bl ov48_02258F64\n    add r6, r0, #0\n    add r0, r7, #0\n    bl ov48_02259030\n    ldr r0, [r5, #0xc]\n    bl ov45_0222A330\n    cmp r0, #1\n    bne _022589AC\n    ldr r0, [r5, #0xc]\n    bl ov45_0222A4A8\n    mov r6, #1\n    bl ov45_0222D844\n    cmp r0, #1\n    bne _022589B6\n    mov r6, #1\n    cmp r6, #1\n    bne _022589EE\n    mov r0, #5\n    str r0, [r4]\n    b _022589EE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x70\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _022589EE\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _022589EE\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    bl ov48_02259050\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_022589FC(void) {
    /* Original at 0x022589FC */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    ldr r0, _02258A74 ; =0x0000C40C\n    add r1, r4, #0\n    add r0, r4, r0\n    add r1, #0x20\n    bl ov48_0225A108\n    mov r0, #0xc7\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl ov48_02259F14\n    ldr r0, _02258A78 ; =0x0000C3E0\n    add r0, r4, r0\n    bl ov48_02259D94\n    ldr r0, _02258A7C ; =0x0000C3CC\n    add r0, r4, r0\n    bl ov48_02259C38\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov48_02259868\n    mov r0, #0x89\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov48_02259984\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov48_0225B0A4\n    add r4, #0x20\n    add r0, r4, #0\n    bl ov48_022594A8\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0x70\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _02258A74: .word 0x0000C40C\n    _02258A78: .word 0x0000C3E0\n    _02258A7C: .word 0x0000C3CC"
    );
    #endif
}

void ov48_02258A80(void) {
    /* Original at 0x02258A80 */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r5, r0, #0\n    str r1, [sp, #0xc]\n    mov r0, #0x62\n    add r1, r2, #0\n    str r2, [sp, #0x10]\n    bl NARC_New\n    mov r2, #0\n    str r2, [r5]\n    str r2, [sp]\n    add r1, sp, #0x2c\n    str r1, [sp, #4]\n    ldr r3, [sp, #0x10]\n    mov r1, #0x12\n    str r0, [sp, #0x24]\n    bl GfGfxLoader_LoadFromOpenNarc_GetSizeOut\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x2c]\n    mov r1, #6\n    bl _u32_div_f\n    add r7, r0, #0\n    ldr r0, [sp, #0x20]\n    mov r6, #1\n    add r4, r0, #6\n    cmp r7, #1\n    ble _02258AEE\n    ldrh r0, [r4]\n    cmp r0, #2\n    beq _02258AE6\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    mov r2, #2\n    str r0, [sp, #8]\n    mov r3, #4\n    ldrsh r2, [r4, r2]\n    ldrsh r3, [r4, r3]\n    ldr r1, [r5]\n    add r0, r5, #0\n    bl ov48_02258B7C\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add r6, r6, #1\n    add r4, r4, #6\n    cmp r6, r7\n    blt _02258ABC\n    ldr r0, [sp, #0x20]\n    bl Heap_Free\n    mov r7, #1\n    bl LocationGmmDatCountGet\n    str r0, [sp, #0x18]\n    cmp r0, #1\n    ble _02258B72\n    add r0, r7, #0\n    bl LocationGmmDatGetEarthPlaceDatId\n    add r1, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    add r0, sp, #0x28\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    ldr r3, [sp, #0x10]\n    mov r2, #0\n    bl GfGfxLoader_LoadFromOpenNarc_GetSizeOut\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x28]\n    mov r6, #1\n    lsr r0, r0, #2\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x1c]\n    add r4, r0, #4\n    ldr r0, [sp, #0x14]\n    cmp r0, #1\n    ble _02258B64\n    add r0, r7, #0\n    bl LocationGmmDatGetCountryMsgNo\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    mov r2, #0\n    str r0, [sp, #8]\n    mov r3, #2\n    ldrsh r2, [r4, r2]\n    ldrsh r3, [r4, r3]\n    ldr r1, [r5]\n    add r0, r5, #0\n    bl ov48_02258B7C\n    ldr r0, [r5]\n    add r6, r6, #1\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r0, [sp, #0x14]\n    add r4, r4, #4\n    cmp r6, r0\n    blt _02258B2E\n    ldr r0, [sp, #0x1c]\n    bl Heap_Free\n    ldr r0, [sp, #0x18]\n    add r7, r7, #1\n    cmp r7, r0\n    blt _02258B00\n    ldr r0, [sp, #0x24]\n    bl NARC_Delete\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_02258B7C(void) {
    /* Original at 0x02258B7C */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    ldr r5, _02258BF0 ; =ov48_0225B1EC\n    add r7, r2, #0\n    add r6, r3, #0\n    add r4, r0, #0\n    mov ip, r1\n    add r3, sp, #0xc\n    mov r2, #4\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02258B8E\n    ldr r0, [r5]\n    mov r1, #0x30\n    str r0, [r3]\n    mov r0, ip\n    add r5, r0, #0\n    mul r5, r1\n    add r0, r4, r5\n    strh r7, [r0, #4]\n    strh r6, [r0, #6]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, sp, #0xc\n    add r1, sp, #0\n    str r7, [sp]\n    str r6, [sp, #4]\n    bl ov48_02258C6C\n    add r3, r4, r5\n    add r6, sp, #0xc\n    add r3, #8\n    mov r2, #4\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02258BC0\n    ldr r0, [r6]\n    str r0, [r3]\n    ldr r0, [sp, #0x50]\n    cmp r0, #0\n    beq _02258BE0\n    add r2, sp, #0x38\n    ldrh r1, [r2, #0x10]\n    ldrh r2, [r2, #0x14]\n    bl ov48_02259A68\n    add r1, r4, r5\n    strh r0, [r1, #0x2c]\n    add r0, sp, #0x38\n    ldrh r2, [r0, #0x10]\n    add r1, r4, r5\n    strh r2, [r1, #0x2e]\n    ldrh r0, [r0, #0x14]\n    strh r0, [r1, #0x30]\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _02258BF0: .word ov48_0225B1EC"
    );
    #endif
}

void ov48_02258BF4(void) {
    /* Original at 0x02258BF4 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r4, r1, #0\n    ldr r1, [r4, #4]\n    ldr r3, _02258C68 ; =FX_SinCosTable_\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    asr r1, r1, #4\n    lsl r2, r1, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r5, r0, #0\n    bl MTX_RotY33_\n    ldr r0, [r4]\n    ldr r3, _02258C68 ; =FX_SinCosTable_\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotX33_\n    add r0, r5, #0\n    add r1, sp, #0\n    add r2, r5, #0\n    bl MTX_Concat33\n    ldr r0, [r4, #8]\n    ldr r3, _02258C68 ; =FX_SinCosTable_\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotZ33_\n    add r0, r5, #0\n    add r1, sp, #0\n    add r2, r5, #0\n    bl MTX_Concat33\n    add sp, #0x24\n    pop {r4, r5, pc}\n    nop\n    _02258C68: .word FX_SinCosTable_"
    );
    #endif
}

void ov48_02258C6C(void) {
    /* Original at 0x02258C6C */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r4, r1, #0\n    ldr r1, [r4]\n    ldr r3, _02258CE0 ; =FX_SinCosTable_\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    asr r1, r1, #4\n    lsl r2, r1, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r5, r0, #0\n    bl MTX_RotY33_\n    ldr r0, [r4, #4]\n    ldr r3, _02258CE0 ; =FX_SinCosTable_\n    neg r0, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotX33_\n    add r0, r5, #0\n    add r1, sp, #0\n    add r2, r5, #0\n    bl MTX_Concat33\n    ldr r0, [r4, #8]\n    ldr r3, _02258CE0 ; =FX_SinCosTable_\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    add r1, r2, #1\n    lsl r1, r1, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotZ33_\n    add r0, r5, #0\n    add r1, sp, #0\n    add r2, r5, #0\n    bl MTX_Concat33\n    add sp, #0x24\n    pop {r4, r5, pc}\n    _02258CE0: .word FX_SinCosTable_"
    );
    #endif
}

void ov48_02258CE4(void) {
    /* Original at 0x02258CE4 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov lr, r0\n    ldr r0, _02258D4C ; =gSystem + 0x40\n    mov ip, r1\n    ldrh r5, [r0, #0x20]\n    mov r1, #0\n    add r7, r2, #0\n    add r6, r3, #0\n    ldr r0, _02258D50 ; =0x0000FFFF\n    add r2, r1, #0\n    add r3, r1, #0\n    add r4, r1, #0\n    cmp r5, r0\n    beq _02258D14\n    mov r0, lr\n    sub r3, r5, r0\n    bpl _02258D0E\n    sub r0, r1, #1\n    eor r3, r0\n    mov r1, #0x10\n    b _02258D14\n    cmp r3, #0\n    ble _02258D14\n    mov r1, #0x20\n    str r1, [r7]\n    mov r1, #0x3f\n    add r0, r3, #0\n    and r0, r1\n    str r0, [r6]\n    ldr r0, _02258D4C ; =gSystem + 0x40\n    ldrh r3, [r0, #0x22]\n    ldr r0, _02258D50 ; =0x0000FFFF\n    cmp r3, r0\n    beq _02258D3C\n    mov r0, ip\n    sub r4, r3, r0\n    bpl _02258D36\n    sub r1, #0x40\n    eor r4, r1\n    mov r2, #0x80\n    b _02258D3C\n    cmp r4, #0\n    ble _02258D3C\n    mov r2, #0x40\n    ldr r0, [sp, #0x18]\n    add r1, r4, #0\n    str r2, [r0]\n    mov r0, #0x3f\n    and r1, r0\n    ldr r0, [sp, #0x1c]\n    str r1, [r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02258D4C: .word gSystem + 0x40\n    _02258D50: .word 0x0000FFFF"
    );
    #endif
}

void ov48_02258D54(void) {
    /* Original at 0x02258D54 */
    /* Requires manual decompilation - 208 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    str r1, [sp]\n    add r0, r4, r0\n    add r1, sp, #0xc\n    add r7, r2, #0\n    bl ov48_022598CC\n    ldr r0, _02258EF4 ; =0x0000C3E0\n    mov r1, #0\n    add r0, r4, r0\n    bl ov48_02259E5C\n    add r6, r0, #0\n    ldr r0, _02258EF4 ; =0x0000C3E0\n    mov r1, #1\n    add r0, r4, r0\n    bl ov48_02259E5C\n    str r0, [sp, #4]\n    ldr r0, _02258EF4 ; =0x0000C3E0\n    mov r1, #2\n    add r0, r4, r0\n    bl ov48_02259E5C\n    add r5, r0, #0\n    ldr r0, _02258EF8 ; =0x0000C3CC\n    add r0, r4, r0\n    bl ov48_02259CFC\n    ldr r2, [sp, #0x10]\n    add r1, r0, #0\n    lsl r2, r2, #0x10\n    ldr r0, [sp, #0xc]\n    asr r2, r2, #0x10\n    mov ip, r2\n    lsl r0, r0, #0x10\n    ldr r2, [sp]\n    mov r3, #1\n    asr r0, r0, #0x10\n    tst r2, r3\n    bne _02258DB8\n    add r2, r6, #0\n    tst r2, r3\n    beq _02258DCC\n    ldr r0, [r4, #4]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _02258DC6\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, [sp, #8]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r1, #0\n    bne _02258DF4\n    ldr r1, [sp, #4]\n    cmp r1, #0\n    bne _02258DDA\n    cmp r5, #0\n    beq _02258DEE\n    ldr r2, [sp, #4]\n    mov r1, #0x55\n    mul r1, r2\n    lsl r1, r1, #0x10\n    lsr r3, r1, #0x10\n    mov r1, #0x55\n    mul r1, r5\n    lsl r1, r1, #0x10\n    lsr r5, r1, #0x10\n    b _02258E16\n    lsl r3, r3, #9\n    add r5, r3, #0\n    b _02258E16\n    ldr r1, [sp, #4]\n    cmp r1, #0\n    bne _02258DFE\n    cmp r5, #0\n    beq _02258E12\n    ldr r2, [sp, #4]\n    mov r1, #0xa\n    mul r1, r2\n    lsl r1, r1, #0x10\n    lsr r3, r1, #0x10\n    mov r1, #0xa\n    mul r1, r5\n    lsl r1, r1, #0x10\n    lsr r5, r1, #0x10\n    b _02258E16\n    mov r3, #0x20\n    add r5, r3, #0\n    mov r2, #0x20\n    add r1, r7, #0\n    tst r1, r2\n    bne _02258E24\n    add r1, r6, #0\n    tst r1, r2\n    beq _02258E44\n    ldr r1, [r4, #4]\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x1f\n    cmp r1, #1\n    bne _02258E36\n    ldr r1, [sp, #0x10]\n    add r1, r1, r3\n    str r1, [sp, #0x10]\n    b _02258E44\n    ldr r2, _02258EFC ; =0xFFFFD820\n    mov r1, ip\n    cmp r1, r2\n    bge _02258E44\n    ldr r1, [sp, #0x10]\n    add r1, r1, r3\n    str r1, [sp, #0x10]\n    mov r2, #0x10\n    add r1, r7, #0\n    tst r1, r2\n    bne _02258E52\n    add r1, r6, #0\n    tst r1, r2\n    beq _02258E72\n    ldr r1, [r4, #4]\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x1f\n    cmp r1, #1\n    bne _02258E64\n    ldr r1, [sp, #0x10]\n    sub r1, r1, r3\n    str r1, [sp, #0x10]\n    b _02258E72\n    ldr r2, _02258F00 ; =0xFFFFCC80\n    mov r1, ip\n    cmp r1, r2\n    ble _02258E72\n    ldr r1, [sp, #0x10]\n    sub r1, r1, r3\n    str r1, [sp, #0x10]\n    mov r1, #0x40\n    add r2, r7, #0\n    tst r2, r1\n    bne _02258E7E\n    tst r1, r6\n    beq _02258EAA\n    ldr r1, [r4, #4]\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x1f\n    cmp r1, #1\n    bne _02258E9E\n    mov r1, #0x3e\n    add r2, r0, r5\n    lsl r1, r1, #8\n    cmp r2, r1\n    bge _02258E9A\n    ldr r1, [sp, #0xc]\n    add r1, r1, r5\n    str r1, [sp, #0xc]\n    b _02258EAA\n    str r1, [sp, #0xc]\n    b _02258EAA\n    ldr r1, _02258F04 ; =0x00002020\n    cmp r0, r1\n    bge _02258EAA\n    ldr r1, [sp, #0xc]\n    add r1, r1, r5\n    str r1, [sp, #0xc]\n    mov r1, #0x80\n    add r2, r7, #0\n    tst r2, r1\n    bne _02258EB6\n    tst r1, r6\n    beq _02258EE2\n    ldr r1, [r4, #4]\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x1f\n    cmp r1, #1\n    bne _02258ED4\n    sub r1, r0, r5\n    ldr r0, _02258F08 ; =0xFFFFC200\n    cmp r1, r0\n    ble _02258ED0\n    ldr r0, [sp, #0xc]\n    sub r0, r0, r5\n    str r0, [sp, #0xc]\n    b _02258EE2\n    str r0, [sp, #0xc]\n    b _02258EE2\n    mov r1, #0x13\n    lsl r1, r1, #8\n    cmp r0, r1\n    ble _02258EE2\n    ldr r0, [sp, #0xc]\n    sub r0, r0, r5\n    str r0, [sp, #0xc]\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, sp, #0xc\n    bl ov48_022598DC\n    mov r0, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _02258EF4: .word 0x0000C3E0\n    _02258EF8: .word 0x0000C3CC\n    _02258EFC: .word 0xFFFFD820\n    _02258F00: .word 0xFFFFCC80\n    _02258F04: .word 0x00002020\n    _02258F08: .word 0xFFFFC200"
    );
    #endif
}

void ov48_02258F0C(void) {
    /* Original at 0x02258F0C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    blt _02258F20\n    ldr r1, _02258F60 ; =0x0000FFFF\n    bl _s32_div_f\n    str r1, [r4]\n    b _02258F36\n    bge _02258F24\n    neg r0, r0\n    ldr r1, _02258F60 ; =0x0000FFFF\n    bl _s32_div_f\n    add r1, r0, #1\n    ldr r0, _02258F60 ; =0x0000FFFF\n    ldr r2, [r4]\n    mul r0, r1\n    add r0, r2, r0\n    str r0, [r4]\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    blt _02258F46\n    ldr r1, _02258F60 ; =0x0000FFFF\n    bl _s32_div_f\n    str r1, [r4, #4]\n    pop {r4, pc}\n    bge _02258F4A\n    neg r0, r0\n    ldr r1, _02258F60 ; =0x0000FFFF\n    bl _s32_div_f\n    add r1, r0, #1\n    ldr r0, _02258F60 ; =0x0000FFFF\n    ldr r2, [r4, #4]\n    mul r0, r1\n    add r0, r2, r0\n    str r0, [r4, #4]\n    pop {r4, pc}\n    nop\n    _02258F60: .word 0x0000FFFF"
    );
    #endif
}

void ov48_02258F64(void) {
    /* Original at 0x02258F64 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r1, [r4]\n    cmp r1, #3\n    bhi _0225901C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02258F7A: ; jump table\n    bl ov48_0225909C\n    cmp r0, #0\n    beq _02259020\n    cmp r0, #1\n    beq _02258F94\n    cmp r0, #2\n    beq _02258FA2\n    b _02259020\n    ldr r0, _02259024 ; =0x0000C3CC\n    add r0, r4, r0\n    bl ov48_02259C4C\n    mov r0, #1\n    strh r0, [r4]\n    b _02259020\n    mov r0, #2\n    strh r0, [r4]\n    b _02259020\n    ldr r0, _02259024 ; =0x0000C3CC\n    mov r1, #0x89\n    lsl r1, r1, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov48_02259C78\n    cmp r0, #1\n    bne _02259020\n    mov r0, #0\n    strh r0, [r4]\n    b _02259020\n    mov r0, #0xc7\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl ov48_02259F48\n    ldr r0, _02259028 ; =0x0000C40C\n    add r0, r4, r0\n    bl ov48_0225A1D0\n    ldr r0, _0225902C ; =0x0000C3E0\n    add r0, r4, r0\n    bl ov48_02259E78\n    ldrh r0, [r4]\n    add r0, r0, #1\n    strh r0, [r4]\n    b _02259020\n    mov r0, #0xc7\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl ov48_02259F8C\n    cmp r0, #0\n    beq _02259020\n    cmp r0, #1\n    beq _02259018\n    cmp r0, #2\n    bne _02259018\n    ldr r0, _02259028 ; =0x0000C40C\n    add r0, r4, r0\n    bl ov48_0225A1EC\n    mov r0, #0xc7\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl ov48_02259FEC\n    ldr r0, _0225902C ; =0x0000C3E0\n    add r0, r4, r0\n    bl ov48_02259E90\n    mov r0, #0\n    strh r0, [r4]\n    b _02259020\n    mov r0, #1\n    pop {r4, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}\n    _02259024: .word 0x0000C3CC\n    _02259028: .word 0x0000C40C\n    _0225902C: .word 0x0000C3E0"
    );
    #endif
}

void ov48_02259030(void) {
    ov48_0225A158(0x5a);
}

void ov48_02259050(void) {
    /* Original at 0x02259050 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl Thunk_G3X_Reset\n    ldr r0, _0225908C ; =0x0000C3CC\n    add r0, r4, r0\n    bl ov48_02259C44\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov48_02259874\n    mov r1, #0x89\n    lsl r1, r1, #2\n    add r0, r4, r1\n    sub r1, #0xac\n    add r1, r4, r1\n    bl ov48_022599A0\n    add r4, #0x20\n    add r0, r4, #0\n    bl ov48_022594D0\n    mov r0, #0\n    mov r1, #1\n    bl RequestSwap3DBuffers\n    pop {r4, pc}\n    nop\n    _0225908C: .word 0x0000C3CC"
    );
    #endif
}

void ov48_02259090(void) {
    ov48_022594DC();
}

void ov48_0225909C(void) {
    /* Original at 0x0225909C */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0225911C ; =0x0000C3E0\n    add r0, r5, r0\n    bl ov48_02259DA0\n    ldr r0, _0225911C ; =0x0000C3E0\n    ldr r1, [r5, r0]\n    mov r0, #2\n    tst r1, r0\n    beq _022590C0\n    ldr r0, _02259120 ; =0x000005DD\n    bl PlaySE\n    add sp, #0xc\n    mov r0, #2\n    pop {r4, r5, pc}\n    ldr r2, _02259124 ; =gSystem\n    lsl r0, r0, #9\n    ldr r1, [r2, #0x48]\n    tst r0, r1\n    beq _0225910C\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov48_02259188\n    cmp r0, #1\n    bne _02259116\n    ldr r0, _02259128 ; =0x0000C40C\n    add r1, sp, #0\n    add r0, r5, r0\n    bl ov48_0225A244\n    cmp r0, #0\n    bne _02259116\n    ldr r0, _02259128 ; =0x0000C40C\n    add r1, sp, #0\n    add r0, r5, r0\n    bl ov48_0225A20C\n    cmp r0, #0\n    beq _02259116\n    ldr r1, [sp, #4]\n    ldr r2, [sp, #8]\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    bl ov48_022593B4\n    ldr r0, _0225912C ; =0x000005D6\n    bl PlaySE\n    b _02259116\n    ldr r2, [r2, #0x44]\n    add r0, r5, #0\n    bl ov48_02258D54\n    add r4, r0, #0\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0225911C: .word 0x0000C3E0\n    _02259120: .word 0x000005DD\n    _02259124: .word gSystem\n    _02259128: .word 0x0000C40C\n    _0225912C: .word 0x000005D6"
    );
    #endif
}

void ov48_02259130(void) {
    /* Original at 0x02259130 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r5, #0x14]\n    ldr r2, [r5, #0x18]\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x18\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    bl ov48_022593B4\n    cmp r0, #0\n    bne _02259184\n    ldr r0, [r4]\n    bl ov48_0225B13C\n    add r6, r0, #0\n    cmp r6, #0x32\n    beq _02259184\n    lsl r1, r6, #0x18\n    ldr r0, [r4]\n    lsr r1, r1, #0x18\n    bl ov45_0222D6B0\n    add r7, r0, #0\n    lsl r1, r6, #0x18\n    ldr r0, [r4]\n    lsr r1, r1, #0x18\n    bl ov45_0222D6D4\n    add r2, r0, #0\n    lsl r1, r7, #0x18\n    lsl r2, r2, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    bl ov48_022593B4\n    cmp r0, #1\n    beq _02259184\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_02259188(void) {
    /* Original at 0x02259188 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov48_022591D8\n    add r6, r0, #0\n    mov r0, #0x89\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov48_02259BBC\n    cmp r6, r0\n    blo _022591A6\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r2, r5, #0\n    add r2, #0x1c\n    ldr r2, [r2]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov48_0225932C\n    str r0, [r4]\n    mov r0, #0x89\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r6, #0\n    bl ov48_02259B84\n    str r0, [r4, #4]\n    mov r0, #0x89\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r6, #0\n    bl ov48_02259BA0\n    str r0, [r4, #8]\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov48_022591D8(void) {
    /* Original at 0x022591D8 */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    mov r0, #0x89\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov48_02259BBC\n    str r0, [sp, #0xc]\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, sp, #0x28\n    bl ov48_022598CC\n    ldr r1, [sp, #0x28]\n    add r0, r1, #0\n    sub r0, #0x80\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add r1, #0x80\n    str r0, [sp, #4]\n    lsl r0, r1, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    add r1, r0, #0\n    sub r1, #0x80\n    lsl r1, r1, #0x10\n    asr r6, r1, #0x10\n    add r1, r0, #0\n    add r1, #0x80\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    str r1, [sp, #0x18]\n    sub r2, r1, r6\n    bpl _02259224\n    neg r2, r2\n    mov r1, #1\n    lsl r1, r1, #8\n    cmp r2, r1\n    ble _0225925E\n    lsl r0, r0, #0x10\n    asr r6, r0, #0x10\n    str r6, [sp, #0x18]\n    cmp r6, #0\n    ble _02259240\n    lsl r0, r1, #8\n    sub r0, r6, r0\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x10]\n    b _02259248\n    lsl r0, r1, #8\n    add r0, r6, r0\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    sub r6, #0x80\n    add r0, #0x80\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    sub r0, #0x80\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    add r0, #0x80\n    str r0, [sp, #0x10]\n    b _02259264\n    ldr r0, [sp, #0x18]\n    str r6, [sp, #0x14]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    mov r7, #1\n    lsl r7, r7, #8\n    mov r4, #0\n    str r0, [sp, #8]\n    cmp r0, #0\n    bls _022592DA\n    mov r0, #0x89\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, sp, #0x1c\n    add r2, r4, #0\n    bl ov48_02259B3C\n    mov r0, #0x89\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r4, #0\n    bl ov48_02259B68\n    ldr r1, [sp, #0x1c]\n    ldr r2, [sp, #4]\n    cmp r1, r2\n    ble _022592D2\n    ldr r2, [sp]\n    cmp r1, r2\n    bge _022592D2\n    ldr r1, [sp, #0x20]\n    cmp r1, r6\n    ble _022592A6\n    ldr r2, [sp, #0x18]\n    cmp r1, r2\n    blt _022592B2\n    ldr r2, [sp, #0x14]\n    cmp r1, r2\n    ble _022592D2\n    ldr r2, [sp, #0x10]\n    cmp r1, r2\n    bge _022592D2\n    cmp r0, #3\n    beq _022592D2\n    add r0, sp, #0x28\n    bl ov48_02258F0C\n    add r0, sp, #0x1c\n    bl ov48_02258F0C\n    add r0, sp, #0x28\n    add r1, sp, #0x1c\n    bl ov48_022592E0\n    cmp r0, r7\n    bhs _022592D2\n    add r7, r0, #0\n    str r4, [sp, #8]\n    ldr r0, [sp, #0xc]\n    add r4, r4, #1\n    cmp r4, r0\n    blo _02259272\n    ldr r0, [sp, #8]\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_022592E0(void) {
    /* Original at 0x022592E0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r3, [r0]\n    ldr r2, [r1]\n    sub r4, r3, r2\n    bpl _022592EC\n    neg r4, r4\n    ldr r2, [r0, #4]\n    ldr r0, [r1, #4]\n    sub r5, r2, r0\n    bpl _022592F6\n    neg r5, r5\n    mov r0, #0xb4\n    bl GF_DegreeToSinCosIdxNoWrap\n    cmp r4, r0\n    ble _02259304\n    ldr r0, _02259328 ; =0x0000FFFF\n    sub r4, r0, r4\n    mov r0, #0xb4\n    bl GF_DegreeToSinCosIdxNoWrap\n    cmp r5, r0\n    ble _02259312\n    ldr r0, _02259328 ; =0x0000FFFF\n    sub r5, r0, r5\n    add r1, r4, #0\n    add r0, r5, #0\n    mul r1, r4\n    mul r0, r5\n    add r0, r1, r0\n    lsl r0, r0, #0xc\n    bl FX_Sqrt\n    asr r0, r0, #0xc\n    pop {r3, r4, r5, pc}\n    nop\n    _02259328: .word 0x0000FFFF"
    );
    #endif
}

void ov48_0225932C(void) {
    /* Original at 0x0225932C */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r0, sp, #0x30\n    ldrb r0, [r0, #8]\n    add r7, r1, #0\n    mov r1, #0xdb\n    sub r4, r0, #4\n    mov r0, #0x89\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r2, #3\n    bl ov48_02259B10\n    add r6, r0, #0\n    mov r0, #0x89\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov48_02259BBC\n    cmp r6, r0\n    blo _0225935E\n    bl GF_AssertFail\n    mov r0, #0x89\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, sp, #0xc\n    add r2, r6, #0\n    bl ov48_02259B3C\n    mov r0, #0x89\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, sp, #0\n    add r2, r7, #0\n    bl ov48_02259B3C\n    ldr r1, [sp, #0x10]\n    ldr r0, [sp, #4]\n    sub r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    mov r0, #0x18\n    mul r0, r1\n    ldr r1, _022593B0 ; =0x0000FFFF\n    bl _s32_div_f\n    add r4, r4, r0\n    bpl _02259394\n    add r4, #0x18\n    cmp r4, #0x18\n    blt _022593A2\n    add r0, r4, #0\n    mov r1, #0x18\n    bl _s32_div_f\n    add r4, r1, #0\n    add r0, r4, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    nop\n    _022593B0: .word 0x0000FFFF"
    );
    #endif
}

void ov48_022593B4(void) {
    /* Original at 0x022593B4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #0x89\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r3, sp, #0xc\n    bl ov48_02259AD0\n    cmp r0, #3\n    beq _022593EC\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, sp, #0\n    bl ov48_022598CC\n    ldr r0, [sp, #8]\n    add r1, sp, #0xc\n    str r0, [sp, #0x14]\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov48_022598DC\n    add sp, #0x18\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    add sp, #0x18\n    pop {r4, pc}"
    );
    #endif
}

void ov48_022593F4(void) {
    /* Original at 0x022593F4 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    ldr r4, [r0, #4]\n    mov r2, #2\n    bic r4, r2\n    mov r3, #1\n    bic r4, r3\n    ldr r3, _02259460 ; =gGameLanguage\n    str r4, [r0, #4]\n    ldrb r3, [r3]\n    cmp r3, #1\n    ldr r3, [r0, #4]\n    bne _02259414\n    mov r2, #2\n    orr r2, r3\n    str r2, [r0, #4]\n    b _02259418\n    bic r3, r2\n    str r3, [r0, #4]\n    ldr r2, [r0, #4]\n    lsl r3, r2, #0x1e\n    lsr r3, r3, #0x1f\n    cmp r3, #1\n    bne _02259452\n    mov r3, #0\n    add r4, r3, #0\n    mov r5, #1\n    mov r6, #1\n    ldr r2, [r1]\n    add r7, r2, r4\n    ldrb r7, [r7, #3]\n    lsl r7, r7, #0x18\n    lsr r7, r7, #0x1c\n    cmp r7, #1\n    bne _02259446\n    ldrh r2, [r2, r4]\n    cmp r2, #0x67\n    beq _02259446\n    ldr r2, [r0, #4]\n    bic r2, r5\n    orr r2, r6\n    str r2, [r0, #4]\n    add r3, r3, #1\n    add r4, r4, #4\n    cmp r3, #0x32\n    blt _0225942A\n    pop {r4, r5, r6, r7}\n    bx lr\n    mov r1, #1\n    bic r2, r1\n    mov r1, #1\n    orr r1, r2\n    str r1, [r0, #4]\n    pop {r4, r5, r6, r7}\n    bx lr\n    _02259460: .word gGameLanguage"
    );
    #endif
}

void ov48_02259464(void) {
    /* Original at 0x02259464 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0xc0\n    add r1, r4, #0\n    bl NARC_New\n    mov r1, #0x51\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0x40\n    add r1, r4, #0\n    bl GF_CreateVramTransferManager\n    ldr r0, _022594A4 ; =ov48_0225B210\n    bl GfGfx_SetBanks\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov48_022594F0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov48_02259688\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov48_02259750\n    pop {r4, r5, r6, pc}\n    _022594A4: .word ov48_0225B210"
    );
    #endif
}

void ov48_022594A8(void) {
    /* Original at 0x022594A8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl NARC_Delete\n    bl GF_DestroyVramTransferManager\n    add r0, r4, #0\n    bl ov48_02259650\n    add r0, r4, #0\n    bl ov48_02259724\n    add r0, r4, #0\n    bl ov48_02259788\n    pop {r4, pc}"
    );
    #endif
}

void ov48_022594D0(void) {
    SpriteList_RenderAndAnimateSprites();
}

void ov48_022594DC(void) {
    /* Original at 0x022594DC */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    bl DoScheduledBgGpuUpdates\n    bl OamManager_ApplyAndResetBuffers\n    bl GF_RunVramTransferTasks\n    pop {r3, pc}"
    );
    #endif
}

void ov48_022594F0(void) {
    /* Original at 0x022594F0 */
    /* Requires manual decompilation - 152 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, _0225963C ; =ov48_0225B190\n    add r7, r2, #0\n    str r1, [sp, #0x10]\n    bl SetBothScreensModesAndDisable\n    add r0, r7, #0\n    bl BgConfig_Alloc\n    str r0, [r5]\n    ldr r0, _02259640 ; =gSystem + 0x60\n    mov r1, #1\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    mov r0, #0\n    ldr r6, _02259644 ; =ov48_0225B2A4\n    ldr r4, _02259648 ; =ov48_0225B1B0\n    str r0, [sp, #0x14]\n    ldr r1, [r4]\n    ldr r0, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    add r2, r6, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4]\n    mov r1, #0x20\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov r2, #0\n    add r3, r7, #0\n    bl BG_ClearCharDataRange\n    ldr r1, [r4]\n    ldr r0, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [sp, #0x14]\n    add r6, #0x1c\n    add r0, r0, #1\n    add r4, r4, #4\n    str r0, [sp, #0x14]\n    cmp r0, #5\n    blt _0225951A\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x51\n    str r7, [sp, #4]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #5\n    mov r2, #4\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x51\n    str r7, [sp, #0xc]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5]\n    mov r1, #0xb\n    mov r3, #4\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x51\n    str r7, [sp, #0xc]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5]\n    mov r1, #0xc\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x51\n    str r7, [sp, #0xc]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5]\n    mov r1, #4\n    mov r3, #6\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x51\n    str r7, [sp, #0xc]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5]\n    mov r1, #0x12\n    mov r3, #7\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r7, #0\n    bl LoadFontPal1\n    mov r1, #0x16\n    mov r0, #4\n    lsl r1, r1, #4\n    add r2, r7, #0\n    bl LoadFontPal1\n    mov r3, #0\n    str r3, [sp]\n    str r7, [sp, #4]\n    ldr r0, [r5]\n    mov r1, #1\n    mov r2, #0x1f\n    bl LoadUserFrameGfx1\n    mov r3, #0\n    str r3, [sp]\n    str r7, [sp, #4]\n    ldr r0, [r5]\n    mov r1, #1\n    mov r2, #0x1f\n    bl LoadUserFrameGfx1\n    ldr r0, [sp, #0x10]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    str r4, [sp]\n    str r7, [sp, #4]\n    mov r2, #0xa\n    ldr r0, [r5]\n    mov r1, #4\n    add r3, r2, #0\n    bl LoadUserFrameGfx2\n    str r4, [sp]\n    str r7, [sp, #4]\n    mov r1, #1\n    ldr r0, [r5]\n    add r2, r1, #0\n    mov r3, #2\n    bl LoadUserFrameGfx2\n    ldr r1, _0225964C ; =0x000072CA\n    mov r0, #0\n    bl BG_SetMaskColor\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225963C: .word ov48_0225B190\n    _02259640: .word gSystem + 0x60\n    _02259644: .word ov48_0225B2A4\n    _02259648: .word ov48_0225B1B0\n    _0225964C: .word 0x000072CA"
    );
    #endif
}

void ov48_02259650(void) {
    /* Original at 0x02259650 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r5, _02259680 ; =ov48_0225B1B0\n    add r6, r0, #0\n    mov r4, #0\n    ldr r1, [r5]\n    ldr r0, [r6]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl FreeBgTilemapBuffer\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #5\n    blt _02259658\n    ldr r0, [r6]\n    bl Heap_Free\n    ldr r0, _02259684 ; =gSystem + 0x60\n    mov r1, #0\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    pop {r4, r5, r6, pc}\n    nop\n    _02259680: .word ov48_0225B1B0\n    _02259684: .word gSystem + 0x60"
    );
    #endif
}

void ov48_02259688(void) {
    /* Original at 0x02259688 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r6, r1, #0\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x1f\n    str r3, [sp, #0xc]\n    add r2, r0, #0\n    str r6, [sp, #0x10]\n    bl OamManager_Create\n    mov r1, #0x10\n    ldr r0, _02259720 ; =ov48_0225B1A0\n    add r2, r1, #0\n    bl ObjCharTransfer_InitEx\n    mov r0, #0x20\n    add r1, r6, #0\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    mov r0, #1\n    mov r1, #0x10\n    bl G2dRenderer_SetObjCharTransferReservedRegion\n    mov r0, #1\n    bl G2dRenderer_SetPlttTransferReservedRegion\n    add r1, r5, #0\n    mov r0, #0x20\n    add r1, #8\n    add r2, r6, #0\n    bl G2dRenderer_Init\n    str r0, [r5, #4]\n    add r0, r5, #0\n    mov r2, #1\n    add r0, #8\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r7, #0x13\n    mov r4, #0\n    lsl r7, r7, #4\n    mov r0, #0x20\n    add r1, r4, #0\n    add r2, r6, #0\n    bl Create2DGfxResObjMan\n    str r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _022596F4\n    bl sub_0203A880\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02259720: .word ov48_0225B1A0"
    );
    #endif
}

void ov48_02259724(void) {
    /* Original at 0x02259724 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    bl SpriteList_Delete\n    mov r6, #0x13\n    mov r4, #0\n    lsl r6, r6, #4\n    ldr r0, [r5, r6]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _02259734\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    bl OamManager_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov48_02259750(void) {
    /* Original at 0x02259750 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, _02259780 ; =ov48_02259798\n    mov r2, #2\n    str r0, [sp, #4]\n    add r0, r1, #0\n    mov r1, #0\n    add r3, r1, #0\n    bl GF_3DVramMan_Create\n    mov r1, #5\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    mov r0, #0\n    ldr r3, _02259784 ; =0xFFFFF001\n    add r1, r0, #0\n    add r2, r0, #0\n    bl NNS_G3dGlbLightVector\n    add sp, #8\n    pop {r4, pc}\n    _02259780: .word ov48_02259798\n    _02259784: .word 0xFFFFF001"
    );
    #endif
}

void ov48_02259788(void) {
    /* Original at 0x02259788 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #5\n    lsl r1, r1, #6\n    ldr r3, _02259794 ; =GF_3DVramMan_Delete\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _02259794: .word GF_3DVramMan_Delete"
    );
    #endif
}

void ov48_02259798(void) {
    /* Original at 0x02259798 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _02259808 ; =0x04000008\n    mov r1, #3\n    ldrh r2, [r0]\n    bic r2, r1\n    mov r1, #1\n    orr r1, r2\n    strh r1, [r0]\n    add r0, #0x58\n    ldrh r2, [r0]\n    ldr r1, _0225980C ; =0xFFFFCFFD\n    and r2, r1\n    strh r2, [r0]\n    ldrh r3, [r0]\n    add r2, r1, #2\n    and r3, r2\n    mov r2, #0x10\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r3, [r0]\n    ldr r2, _02259810 ; =0x0000CFFB\n    and r2, r3\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrh r3, [r0]\n    add r1, r1, #2\n    and r3, r2\n    mov r2, #8\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r2, [r0]\n    and r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl G3X_SetFog\n    mov r1, #0\n    ldr r0, _02259814 ; =0x00006B5A\n    ldr r2, _02259818 ; =0x00007FFF\n    mov r3, #0x3f\n    str r1, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _0225981C ; =0xBFFF0000\n    ldr r0, _02259820 ; =0x04000580\n    str r1, [r0]\n    pop {r3, pc}\n    _02259808: .word 0x04000008\n    _0225980C: .word 0xFFFFCFFD\n    _02259810: .word 0x0000CFFB\n    _02259814: .word 0x00006B5A\n    _02259818: .word 0x00007FFF\n    _0225981C: .word 0xBFFF0000\n    _02259820: .word 0x04000580"
    );
    #endif
}

void ov48_02259824(void) {
    /* Original at 0x02259824 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r3, r2, #0\n    mov r2, #0\n    str r2, [r4]\n    str r2, [r4, #4]\n    mov r0, #1\n    str r2, [r4, #8]\n    lsl r0, r0, #0xc\n    str r0, [r4, #0xc]\n    str r0, [r4, #0x10]\n    str r0, [r4, #0x14]\n    mov r0, #0x69\n    lsl r0, r0, #6\n    str r0, [r4, #0x18]\n    mov r0, #0x1f\n    lsl r0, r0, #0xa\n    str r0, [r4, #0x1c]\n    str r2, [r4, #0x20]\n    mov r2, #0x51\n    lsl r2, r2, #2\n    add r0, r4, #0\n    ldr r1, [r1, r2]\n    add r0, #0x9c\n    mov r2, #3\n    bl sub_02018030\n    add r0, r4, #0\n    add r4, #0x9c\n    add r0, #0x24\n    add r1, r4, #0\n    bl sub_020181B0\n    pop {r4, pc}"
    );
    #endif
}

void ov48_02259868(void) {
    sub_02018068();
}

void ov48_02259874(void) {
    /* Original at 0x02259874 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x24\n    add r4, r0, #0\n    add r1, sp, #0\n    bl ov48_022598BC\n    add r0, r4, #0\n    ldr r1, [r4]\n    ldr r2, [r4, #4]\n    ldr r3, [r4, #8]\n    add r0, #0x24\n    bl sub_020182A8\n    add r0, r4, #0\n    ldr r1, [r4, #0xc]\n    ldr r2, [r4, #0x10]\n    ldr r3, [r4, #0x14]\n    add r0, #0x24\n    bl sub_020182C4\n    add r4, #0x24\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_02018288\n    add sp, #0x24\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov48_022598AC(void) {
    /* Original at 0x022598AC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    add r2, r1, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    bx lr"
    );
    #endif
}

void ov48_022598BC(void) {
    /* Original at 0x022598BC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    ldr r3, _022598C8 ; =ov48_02258BF4\n    add r2, #0x18\n    add r0, r1, #0\n    add r1, r2, #0\n    bx r3\n    _022598C8: .word ov48_02258BF4"
    );
    #endif
}

void ov48_022598CC(void) {
    /* Original at 0x022598CC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0x18\n    add r3, r1, #0\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    bx lr"
    );
    #endif
}

void ov48_022598DC(void) {
    /* Original at 0x022598DC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    add r2, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x18\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    bx lr"
    );
    #endif
}

void ov48_022598EC(void) {
    /* Original at 0x022598EC */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r2, [sp, #4]\n    ldr r2, [sp, #0x34]\n    str r0, [sp]\n    str r2, [sp, #0x34]\n    bl ov48_02258A80\n    ldr r1, _02259974 ; =0x0000C178\n    ldr r0, [sp]\n    ldr r4, _02259978 ; =ov48_0225B178\n    add r5, r0, r1\n    ldr r1, _0225997C ; =0x0000C010\n    mov r7, #0\n    add r6, r0, r1\n    mov r1, #0x51\n    ldr r2, [sp, #4]\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    ldr r2, [r4]\n    ldr r3, [sp, #0x34]\n    add r0, r5, #0\n    bl sub_02018030\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_020181B0\n    add r7, r7, #1\n    add r4, r4, #4\n    add r5, #0x10\n    add r6, #0x78\n    cmp r7, #3\n    blt _0225990C\n    ldr r0, [sp, #0x2c]\n    ldr r2, _02259980 ; =0x0000C004\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    bne _0225995A\n    mov r3, #3\n    ldr r0, [sp]\n    lsl r3, r3, #8\n    str r3, [r0, r2]\n    add r1, r2, #4\n    str r3, [r0, r1]\n    mov r1, #1\n    lsl r1, r1, #0xc\n    add r2, #8\n    str r1, [r0, r2]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    mov r3, #1\n    ldr r0, [sp]\n    lsl r3, r3, #0xc\n    str r3, [r0, r2]\n    add r1, r2, #4\n    str r3, [r0, r1]\n    add r2, #8\n    str r3, [r0, r2]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    _02259974: .word 0x0000C178\n    _02259978: .word ov48_0225B178\n    _0225997C: .word 0x0000C010\n    _02259980: .word 0x0000C004"
    );
    #endif
}

void ov48_02259984(void) {
    sub_02018068(0);
}

void ov48_022599A0(void) {
    /* Original at 0x022599A0 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x58\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r1, sp, #4\n    bl ov48_022598AC\n    add r0, r4, #0\n    add r1, sp, #0x10\n    bl ov48_022598BC\n    ldr r0, _02259A54 ; =0x0000C010\n    ldr r7, _02259A58 ; =0x0000019A\n    mov r6, #0\n    add r4, r5, r0\n    ldr r1, [sp, #4]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #0xc]\n    add r0, r4, #0\n    bl sub_020182A8\n    cmp r6, #2\n    ldr r1, _02259A5C ; =0x0000C004\n    bne _022599E6\n    ldr r3, _02259A60 ; =0x0000C00C\n    ldr r2, _02259A64 ; =0x0000C008\n    ldr r3, [r5, r3]\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    add r0, r4, #0\n    add r3, r3, r7\n    bl sub_020182C4\n    b _022599F6\n    ldr r2, _02259A64 ; =0x0000C008\n    ldr r3, _02259A60 ; =0x0000C00C\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    ldr r3, [r5, r3]\n    add r0, r4, #0\n    bl sub_020182C4\n    add r6, r6, #1\n    add r4, #0x78\n    cmp r6, #3\n    blt _022599C0\n    add r0, sp, #0x34\n    bl MTX_Identity33_\n    mov r0, #0xc1\n    lsl r0, r0, #8\n    add r0, r5, r0\n    add r1, sp, #0x34\n    bl sub_02018288\n    ldr r0, [r5]\n    mov r7, #0\n    cmp r0, #0\n    bls _02259A50\n    ldr r0, _02259A54 ; =0x0000C010\n    add r6, r5, #0\n    add r0, r5, r0\n    add r6, #8\n    add r4, r5, #0\n    str r0, [sp]\n    add r0, r6, #0\n    add r1, sp, #0x10\n    add r2, sp, #0x34\n    bl MTX_Concat33\n    ldrh r2, [r4, #0x2c]\n    cmp r2, #3\n    beq _02259A44\n    mov r0, #0x78\n    add r1, r2, #0\n    mul r1, r0\n    ldr r0, [sp]\n    add r0, r0, r1\n    add r1, sp, #0x34\n    bl sub_02018288\n    ldr r0, [r5]\n    add r7, r7, #1\n    add r6, #0x30\n    add r4, #0x30\n    cmp r7, r0\n    blo _02259A24\n    add sp, #0x58\n    pop {r3, r4, r5, r6, r7, pc}\n    _02259A54: .word 0x0000C010\n    _02259A58: .word 0x0000019A\n    _02259A5C: .word 0x0000C004\n    _02259A60: .word 0x0000C00C\n    _02259A64: .word 0x0000C008"
    );
    #endif
}

void ov48_02259A68(void) {
    /* Original at 0x02259A68 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r7, r1, #0\n    str r2, [sp]\n    mov r4, #0\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov45_0222D724\n    cmp r0, #0\n    beq _02259AC2\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov45_0222D6FC\n    lsl r1, r4, #0x18\n    str r0, [sp, #4]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov45_0222D6B0\n    lsl r0, r0, #0x18\n    lsl r1, r4, #0x18\n    lsr r6, r0, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov45_0222D6D4\n    cmp r6, r7\n    bne _02259AC2\n    ldr r1, [sp]\n    cmp r0, r1\n    bne _02259AC2\n    ldr r0, [sp, #4]\n    cmp r0, #1\n    bne _02259ABC\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    cmp r4, #0x32\n    blt _02259A74\n    mov r0, #3\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_02259AD0(void) {
    /* Original at 0x02259AD0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r2, [sp]\n    add r5, r0, #0\n    add r7, r1, #0\n    str r3, [sp, #4]\n    mov r4, #3\n    bl ov48_02259BBC\n    add r6, r0, #0\n    ldr r2, [sp]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov48_02259B10\n    add r7, r0, #0\n    cmp r7, r6\n    bge _02259B08\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov48_02259B68\n    add r4, r0, #0\n    ldr r1, [sp, #4]\n    add r0, r5, #0\n    add r2, r7, #0\n    bl ov48_02259B3C\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_02259B10(void) {
    /* Original at 0x02259B10 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r5, [r0]\n    mov r4, #0\n    cmp r5, #0\n    bls _02259B34\n    ldrh r3, [r0, #0x2e]\n    cmp r1, r3\n    bne _02259B2C\n    ldrh r3, [r0, #0x30]\n    cmp r2, r3\n    bne _02259B2C\n    add r0, r4, #0\n    pop {r4, r5}\n    bx lr\n    add r4, r4, #1\n    add r0, #0x30\n    cmp r4, r5\n    blo _02259B1A\n    add r0, r5, #0\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov48_02259B3C(void) {
    /* Original at 0x02259B3C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r6, r2, #0\n    add r4, r1, #0\n    cmp r6, r0\n    blo _02259B4E\n    bl GF_AssertFail\n    mov r0, #0x30\n    mul r0, r6\n    add r1, r5, r0\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    str r0, [r4]\n    mov r0, #6\n    ldrsh r0, [r1, r0]\n    str r0, [r4, #4]\n    mov r0, #0\n    str r0, [r4, #8]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov48_02259B68(void) {
    GF_AssertFail(0x30);
}

void ov48_02259B84(void) {
    GF_AssertFail(0x30);
}

void ov48_02259BA0(void) {
    GF_AssertFail(0x30);
}

void ov48_02259BBC(void) {
    /* Original at 0x02259BBC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov48_02259BC0(void) {
    /* Original at 0x02259BC0 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r0, r3, #0\n    bl Camera_New\n    str r0, [r4]\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, [r4]\n    ldr r1, _02259C2C ; =ov48_0225B16C\n    str r0, [sp, #4]\n    ldr r0, _02259C30 ; =ov48_0225B184\n    ldr r2, _02259C34 ; =0x000005C1\n    bl Camera_Init_FromTargetAndPos\n    mov r1, #0x19\n    ldr r2, [r4]\n    mov r0, #0\n    lsl r1, r1, #0xe\n    bl Camera_SetPerspectiveClippingPlane\n    ldr r1, [r4]\n    mov r0, #0\n    bl Camera_ApplyPerspectiveType\n    ldr r0, [r4]\n    bl Camera_SetStaticPtr\n    ldr r0, [sp, #0x14]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    bne _02259C0E\n    mov r0, #1\n    strh r0, [r4, #0x10]\n    mov r0, #5\n    lsl r0, r0, #0x10\n    b _02259C16\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    mov r0, #0x4a\n    lsl r0, r0, #0xe\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #0xc]\n    ldr r1, [r4]\n    bl Camera_SetDistance\n    add sp, #8\n    pop {r4}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    nop\n    _02259C2C: .word ov48_0225B16C\n    _02259C30: .word ov48_0225B184\n    _02259C34: .word 0x000005C1"
    );
    #endif
}

void ov48_02259C38(void) {
    Camera_Delete();
}

void ov48_02259C44(void) {
    Camera_PushLookAtToNNSGlb();
}

void ov48_02259C4C(void) {
    /* Original at 0x02259C4C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #0x10]\n    cmp r0, #0\n    bne _02259C62\n    mov r0, #1\n    strh r0, [r4, #0x10]\n    ldr r0, _02259C74 ; =0x000005D5\n    bl PlaySE\n    b _02259C6C\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    ldr r0, _02259C74 ; =0x000005D5\n    bl PlaySE\n    mov r0, #1\n    strh r0, [r4, #0x12]\n    pop {r4, pc}\n    nop\n    _02259C74: .word 0x000005D5"
    );
    #endif
}

void ov48_02259C78(void) {
    /* Original at 0x02259C78 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r2, r0, #0\n    ldrh r0, [r2, #0x12]\n    cmp r0, #0\n    bne _02259C86\n    mov r0, #1\n    pop {r3, pc}\n    ldrh r0, [r2, #0x10]\n    cmp r0, #0\n    beq _02259CBE\n    cmp r0, #1\n    bne _02259CEA\n    mov r0, #0x16\n    ldr r3, [r2, #0xc]\n    lsl r0, r0, #0xe\n    cmp r3, r0\n    ble _02259CB2\n    mov r0, #2\n    lsl r0, r0, #0xe\n    sub r0, r3, r0\n    str r0, [r2, #0xc]\n    ldr r0, _02259CF8 ; =0x0000C004\n    ldr r3, [r1, r0]\n    sub r3, #0x80\n    str r3, [r1, r0]\n    ldr r3, [r1, r0]\n    add r0, r0, #4\n    str r3, [r1, r0]\n    b _02259CEA\n    mov r0, #5\n    lsl r0, r0, #0x10\n    str r0, [r2, #0xc]\n    mov r0, #0\n    strh r0, [r2, #0x12]\n    b _02259CEA\n    mov r0, #0x12\n    ldr r3, [r2, #0xc]\n    lsl r0, r0, #0x10\n    cmp r3, r0\n    bge _02259CE0\n    mov r0, #2\n    lsl r0, r0, #0xe\n    add r0, r3, r0\n    str r0, [r2, #0xc]\n    ldr r0, _02259CF8 ; =0x0000C004\n    ldr r3, [r1, r0]\n    add r3, #0x80\n    str r3, [r1, r0]\n    ldr r3, [r1, r0]\n    add r0, r0, #4\n    str r3, [r1, r0]\n    b _02259CEA\n    mov r0, #0x4a\n    lsl r0, r0, #0xe\n    str r0, [r2, #0xc]\n    mov r0, #0\n    strh r0, [r2, #0x12]\n    ldr r0, [r2, #0xc]\n    ldr r1, [r2]\n    bl Camera_SetDistance\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _02259CF8: .word 0x0000C004"
    );
    #endif
}

void ov48_02259CFC(void) {
    /* Original at 0x02259CFC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov48_02259D00(void) {
    /* Original at 0x02259D00 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r1, #0\n    add r6, r2, #0\n    mov r1, #0\n    mov r2, #0x2c\n    add r5, r0, #0\n    add r7, r3, #0\n    bl memset\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r2, #1\n    add r1, r5, #0\n    str r2, [sp, #0xc]\n    mov r0, #0x28\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, #0x1c\n    mov r3, #0x19\n    bl AddWindowParameterized\n    add r0, r5, #0\n    add r0, #0x1c\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r6, #0\n    mov r1, #1\n    bl ov48_0225B0C4\n    add r4, r0, #0\n    mov r0, #2\n    add r1, r7, #0\n    bl FontID_Alloc\n    mov r0, #2\n    add r1, r4, #0\n    mov r2, #0\n    mov r3, #0x30\n    bl FontID_String_GetCenterAlignmentX\n    mov r1, #0\n    add r3, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02259D90 ; =0x0002010F\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    str r1, [sp, #0xc]\n    add r0, #0x1c\n    mov r1, #2\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #2\n    bl FontID_Release\n    add r5, #0x1c\n    mov r1, #0\n    add r0, r5, #0\n    mov r2, #0x1f\n    add r3, r1, #0\n    bl DrawFrameAndWindow1\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02259D90: .word 0x0002010F"
    );
    #endif
}

void ov48_02259D94(void) {
    RemoveWindow();
}

void ov48_02259DA0(void) {
    /* Original at 0x02259DA0 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [r4]\n    ldr r0, _02259E58 ; =gSystem + 0x40\n    ldrh r1, [r0, #0x24]\n    cmp r1, #0\n    beq _02259DE8\n    ldrh r1, [r0, #0x20]\n    cmp r1, #0xc8\n    blo _02259DCE\n    cmp r1, #0xf8\n    bhi _02259DCE\n    ldrh r0, [r0, #0x22]\n    cmp r0, #0xa8\n    blo _02259DCE\n    cmp r0, #0xb8\n    bhi _02259DCE\n    mov r0, #2\n    add sp, #0x18\n    str r0, [r4]\n    pop {r4, pc}\n    mov r0, #0\n    str r0, [r4, #4]\n    str r0, [r4, #0x10]\n    str r0, [r4, #0x14]\n    str r0, [r4, #0x18]\n    str r0, [r4]\n    ldr r0, _02259E58 ; =gSystem + 0x40\n    ldrh r1, [r0, #0x20]\n    str r1, [r4, #8]\n    ldrh r0, [r0, #0x22]\n    str r0, [r4, #0xc]\n    mov r0, #4\n    str r0, [r4, #0x18]\n    ldr r0, _02259E58 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x26]\n    cmp r0, #0\n    beq _02259E40\n    ldr r1, [r4, #4]\n    cmp r1, #0\n    beq _02259DFE\n    cmp r1, #1\n    beq _02259E0E\n    add sp, #0x18\n    pop {r4, pc}\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    bne _02259E0A\n    add r0, r1, #1\n    str r0, [r4, #4]\n    b _02259E0E\n    sub r0, r0, #1\n    str r0, [r4, #0x18]\n    add r0, sp, #0xc\n    str r0, [sp]\n    add r0, sp, #8\n    str r0, [sp, #4]\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #0xc]\n    add r2, sp, #0x14\n    add r3, sp, #0x10\n    bl ov48_02258CE4\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #0xc]\n    orr r0, r1\n    str r0, [r4]\n    ldr r0, [sp, #0x10]\n    str r0, [r4, #0x10]\n    ldr r0, [sp, #8]\n    add sp, #0x18\n    str r0, [r4, #0x14]\n    ldr r0, _02259E58 ; =gSystem + 0x40\n    ldrh r1, [r0, #0x20]\n    str r1, [r4, #8]\n    ldrh r0, [r0, #0x22]\n    str r0, [r4, #0xc]\n    pop {r4, pc}\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    beq _02259E4A\n    mov r0, #1\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    str r0, [r4, #0x10]\n    str r0, [r4, #0x14]\n    str r0, [r4, #0x18]\n    add sp, #0x18\n    pop {r4, pc}\n    _02259E58: .word gSystem + 0x40"
    );
    #endif
}

void ov48_02259E5C(void) {
    /* Original at 0x02259E5C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    beq _02259E6A\n    cmp r1, #1\n    beq _02259E6E\n    cmp r1, #2\n    beq _02259E72\n    bx lr\n    ldr r0, [r0]\n    bx lr\n    ldr r0, [r0, #0x10]\n    bx lr\n    ldr r0, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void ov48_02259E78(void) {
    /* Original at 0x02259E78 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x1c\n    mov r1, #1\n    bl sub_0200E5D4\n    add r4, #0x1c\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    pop {r4, pc}"
    );
    #endif
}

void ov48_02259E90(void) {
    /* Original at 0x02259E90 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x1c\n    bl ScheduleWindowCopyToVram\n    add r4, #0x1c\n    mov r1, #0\n    add r0, r4, #0\n    mov r2, #0x1f\n    add r3, r1, #0\n    bl DrawFrameAndWindow1\n    pop {r4, pc}"
    );
    #endif
}

void ov48_02259EAC(void) {
    /* Original at 0x02259EAC */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    mov r1, #0\n    mov r2, #0x2c\n    add r5, r0, #0\n    bl memset\n    add r0, r7, #0\n    bl Save_PlayerData_GetOptionsAddr\n    bl Options_GetTextFrameDelay\n    str r0, [r5, #8]\n    ldr r1, [sp, #0x28]\n    mov r0, #0x80\n    bl String_New\n    str r0, [r5, #0xc]\n    mov r2, #1\n    add r1, r5, #0\n    str r2, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    mov r0, #0x34\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, #0x10\n    mov r3, #2\n    bl AddWindowParameterized\n    add r0, r5, #0\n    add r0, #0x10\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r2, [r5, #0xc]\n    add r0, r6, #0\n    mov r1, #5\n    bl ov48_0225B0D4\n    ldr r0, [sp, #0x28]\n    bl YesNoPrompt_Create\n    str r0, [r5, #0x20]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_02259F14(void) {
    /* Original at 0x02259F14 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _02259F30\n    ldr r0, [r4, #4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    ldr r0, [r4, #0xc]\n    bl String_Delete\n    ldr r0, [r4, #0x20]\n    bl YesNoPrompt_Destroy\n    add r4, #0x10\n    add r0, r4, #0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov48_02259F48(void) {
    /* Original at 0x02259F48 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r0, #0x10\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x10\n    add r2, r1, #0\n    mov r3, #2\n    bl DrawFrameAndWindow2\n    add r0, r4, #0\n    add r0, #0x10\n    bl ScheduleWindowCopyToVram\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, [r4, #8]\n    mov r1, #1\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    add r0, r4, #0\n    ldr r2, [r4, #0xc]\n    add r0, #0x10\n    bl AddTextPrinterParameterized\n    str r0, [r4, #4]\n    mov r0, #0\n    str r0, [r4]\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov48_02259F8C(void) {
    /* Original at 0x02259F8C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _02259F9E\n    cmp r0, #1\n    beq _02259FD8\n    b _02259FE0\n    ldr r0, [r5, #4]\n    mov r4, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _02259FE0\n    ldr r3, _02259FE8 ; =ov48_0225B1C4\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, r5, #0\n    add r0, #0x10\n    bl GetWindowBgConfig\n    str r0, [sp]\n    ldr r0, [r5, #0x20]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02259FE0\n    ldr r0, [r5, #0x20]\n    bl YesNoPrompt_HandleInput\n    add r4, r0, #0\n    add r0, r4, #0\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _02259FE8: .word ov48_0225B1C4"
    );
    #endif
}

void ov48_02259FEC(void) {
    /* Original at 0x02259FEC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x20]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    add r0, #0x10\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r4, #0x10\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    pop {r4, pc}"
    );
    #endif
}

void ov48_0225A00C(void) {
    /* Original at 0x0225A00C */
    /* Requires manual decompilation - 113 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    str r1, [sp, #0x18]\n    str r2, [sp, #0x1c]\n    mov r2, #0\n    add r1, r0, #0\n    str r0, [sp, #0x14]\n    str r3, [sp, #0x20]\n    str r2, [r1]\n    bl ov48_0225A288\n    ldr r5, [sp, #0x14]\n    ldr r4, _0225A100 ; =_0225B164\n    ldr r6, _0225A104 ; =ov48_0225B268\n    mov r7, #0\n    add r5, #0xa0\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x18]\n    str r0, [sp]\n    ldrb r3, [r4]\n    add r0, r5, #0\n    add r2, r6, #0\n    bl ov48_0225A894\n    add r7, r7, #1\n    add r4, r4, #1\n    add r6, #0xc\n    add r5, #0x28\n    cmp r7, #5\n    blt _0225A02C\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r2, #4\n    str r2, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    mov r3, #0x6a\n    ldr r1, [sp, #0x14]\n    lsl r3, r3, #2\n    add r1, r1, r3\n    ldr r0, [r0]\n    mov r3, #2\n    bl AddWindowParameterized\n    mov r1, #0x6a\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x1c]\n    mov r1, #0\n    bl ov48_0225B0C4\n    mov r3, #0\n    add r2, r0, #0\n    str r3, [sp]\n    mov r1, #0xff\n    str r1, [sp, #4]\n    ldr r0, [sp, #0x14]\n    add r1, #0xa9\n    add r0, r0, r1\n    mov r1, #1\n    str r3, [sp, #8]\n    bl AddTextPrinterParameterized\n    mov r1, #0x6a\n    mov r2, #0xa\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    mov r1, #0\n    add r3, r2, #0\n    bl DrawFrameAndWindow2\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    ldr r2, [sp, #0x20]\n    bl ov48_0225A6DC\n    ldr r0, [sp, #0x20]\n    mov r1, #0x51\n    str r0, [sp]\n    ldr r3, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #0x13\n    mov r2, #0\n    add r3, #0x98\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    ldr r1, [sp, #0x14]\n    mov r3, #0xb9\n    add r1, #0x94\n    str r0, [r1]\n    mov r1, #0x6e\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    ldr r2, [sp, #0x14]\n    lsl r3, r3, #2\n    add r2, r2, r3\n    ldr r1, [sp, #0x18]\n    ldr r3, [sp, #0x20]\n    bl ov48_0225AAAC\n    mov r1, #0xb9\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    bl ov48_0225A5C4\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225A100: .word _0225B164\n    _0225A104: .word ov48_0225B268"
    );
    #endif
}

void ov48_0225A108(void) {
    /* Original at 0x0225A108 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xb9\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r4, r1, #0\n    bl ov48_0225A634\n    mov r0, #0x6e\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r4, #0\n    bl ov48_0225AC34\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    bl Heap_Free\n    add r0, r5, #0\n    bl ov48_0225A768\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl RemoveWindow\n    add r0, r5, #0\n    bl ov48_0225A294\n    mov r4, #0\n    add r5, #0xa0\n    add r0, r5, #0\n    bl ov48_0225A928\n    add r4, r4, #1\n    add r5, #0x28\n    cmp r4, #5\n    blt _0225A148\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov48_0225A158(void) {
    /* Original at 0x0225A158 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r3, [r4]\n    add r5, r2, #0\n    cmp r3, #4\n    bhi _0225A1CC\n    add r3, r3, r3\n    add r3, pc\n    ldrh r3, [r3, #6]\n    lsl r3, r3, #0x10\n    asr r3, r3, #0x10\n    add pc, r3\n    _0225A170: ; jump table\n    add r1, r5, #0\n    bl ov48_0225A338\n    mov r0, #0x6e\n    mov r1, #0xb9\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov48_0225AD54\n    pop {r3, r4, r5, pc}\n    bl ov48_0225A354\n    mov r0, #2\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    add r1, r5, #0\n    bl ov48_0225A41C\n    cmp r0, #1\n    bne _0225A1CC\n    mov r0, #0\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    bl ov48_0225A428\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov48_0225A430\n    mov r0, #4\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    add r1, r5, #0\n    bl ov48_0225A430\n    cmp r0, #1\n    bne _0225A1CC\n    mov r0, #0\n    str r0, [r4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov48_0225A1D0(void) {
    /* Original at 0x0225A1D0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    pop {r4, pc}"
    );
    #endif
}

void ov48_0225A1EC(void) {
    /* Original at 0x0225A1EC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    mov r2, #0xa\n    add r0, r4, r0\n    mov r1, #1\n    add r3, r2, #0\n    bl DrawFrameAndWindow2\n    pop {r4, pc}"
    );
    #endif
}

void ov48_0225A20C(void) {
    /* Original at 0x0225A20C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, [r0]\n    cmp r2, #4\n    bhi _0225A23C\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0225A220: ; jump table\n    mov r2, #1\n    str r2, [r0]\n    b _0225A23C\n    mov r1, #3\n    str r1, [r0]\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    bl ov48_0225A2A0\n    mov r0, #1\n    pop {r3, pc}"
    );
    #endif
}

void ov48_0225A244(void) {
    /* Original at 0x0225A244 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r5, r1, #0\n    mov r4, #0\n    add r7, sp, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, r4, #0\n    bl ov48_0225A30C\n    cmp r0, #0\n    bne _0225A264\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r1, [sp, #4]\n    ldr r0, [r5, #4]\n    cmp r1, r0\n    bne _0225A27A\n    ldr r1, [sp, #8]\n    ldr r0, [r5, #8]\n    cmp r1, r0\n    bne _0225A27A\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    cmp r4, #3\n    blt _0225A250\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_0225A288(void) {
    /* Original at 0x0225A288 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    strh r1, [r0, #0x34]\n    strh r1, [r0, #0x36]\n    str r1, [r0, #0x38]\n    bx lr"
    );
    #endif
}

void ov48_0225A294(void) {
    /* Original at 0x0225A294 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    strh r1, [r0, #0x34]\n    strh r1, [r0, #0x36]\n    str r1, [r0, #0x38]\n    bx lr"
    );
    #endif
}

void ov48_0225A2A0(void) {
    /* Original at 0x0225A2A0 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldrh r1, [r5, #0x36]\n    add r1, r1, #1\n    lsr r3, r1, #0x1f\n    lsl r2, r1, #0x1e\n    sub r2, r2, r3\n    mov r1, #0x1e\n    ror r2, r1\n    ldrh r1, [r5, #0x34]\n    add r2, r3, r2\n    cmp r2, r1\n    bne _0225A2C0\n    bl ov48_0225A2EC\n    ldrh r1, [r5, #0x36]\n    mov r0, #0xc\n    mul r0, r1\n    add r0, r5, r0\n    add r2, r0, #4\n    ldmia r4!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r2]\n    ldrh r0, [r5, #0x36]\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    strh r0, [r5, #0x36]\n    ldr r0, [r5, #0x38]\n    add r0, r0, #1\n    str r0, [r5, #0x38]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov48_0225A2EC(void) {
    /* Original at 0x0225A2EC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r2, [r0, #0x34]\n    ldrh r1, [r0, #0x36]\n    cmp r1, r2\n    beq _0225A30A\n    add r1, r2, #1\n    lsr r3, r1, #0x1f\n    lsl r2, r1, #0x1e\n    sub r2, r2, r3\n    mov r1, #0x1e\n    ror r2, r1\n    add r1, r3, r2\n    strh r1, [r0, #0x34]\n    ldr r1, [r0, #0x38]\n    sub r1, r1, #1\n    str r1, [r0, #0x38]\n    bx lr"
    );
    #endif
}

void ov48_0225A30C(void) {
    /* Original at 0x0225A30C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    ldr r1, [r0, #0x38]\n    cmp r2, r1\n    blo _0225A318\n    mov r0, #0\n    bx lr\n    ldrh r1, [r0, #0x36]\n    sub r1, r1, #1\n    sub r2, r1, r2\n    bpl _0225A322\n    add r2, r2, #4\n    mov r1, #0xc\n    mul r1, r2\n    add r0, r0, r1\n    add r2, r0, #4\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov48_0225A338(void) {
    ov48_0225A95C(0);
}

void ov48_0225A354(void) {
    /* Original at 0x0225A354 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    str r1, [sp]\n    add r0, #0x40\n    mov r1, #0\n    mov r2, #0x48\n    bl memset\n    mov r6, #0\n    strh r6, [r5, #0x3c]\n    add r4, r5, #0\n    strh r6, [r5, #0x3e]\n    add r4, #0xa0\n    add r0, r4, #0\n    bl ov48_0225AA50\n    add r6, r6, #1\n    add r4, #0x28\n    cmp r6, #5\n    blt _0225A370\n    mov r0, #0x6e\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov48_0225ACAC\n    add r0, r5, #0\n    str r0, [sp, #8]\n    add r0, #0xa0\n    mov r7, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mvn r7, r7\n    str r0, [sp, #0xc]\n    add r0, #0x3e\n    mov r6, #0\n    str r7, [sp, #0x10]\n    str r0, [sp, #0xc]\n    mov r0, #2\n    sub r4, r0, r6\n    add r0, r5, #0\n    add r1, sp, #0x14\n    add r2, r6, #0\n    bl ov48_0225A30C\n    cmp r0, #1\n    bne _0225A406\n    ldr r0, [sp, #0x14]\n    bl ov48_0225B038\n    mov r1, #0x28\n    str r0, [sp, #4]\n    mul r1, r0\n    ldr r0, [sp, #8]\n    mov r2, #1\n    add r0, r0, r1\n    add r1, r4, #0\n    bl ov48_0225AA38\n    ldr r3, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, sp, #0x14\n    bl ov48_0225A790\n    lsl r0, r4, #2\n    add r1, r5, r0\n    lsl r3, r7, #0x18\n    ldr r0, [sp, #4]\n    add r1, #0x88\n    str r0, [r1]\n    ldr r2, [sp, #0x14]\n    mov r0, #0x6e\n    lsl r0, r0, #2\n    lsl r1, r4, #0x18\n    lsl r2, r2, #0x18\n    add r0, r5, r0\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl ov48_0225ACD8\n    ldr r0, [sp, #0xc]\n    ldrh r0, [r0]\n    add r1, r0, #6\n    ldr r0, [sp, #0xc]\n    strh r1, [r0]\n    ldr r7, [sp, #0x14]\n    b _0225A412\n    lsl r0, r4, #2\n    add r1, r5, r0\n    add r1, #0x88\n    mov r0, #5\n    ldr r7, [sp, #0x10]\n    str r0, [r1]\n    add r6, r6, #1\n    cmp r6, #3\n    blt _0225A3A0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_0225A41C(void) {
    ov48_0225A43C();
}

void ov48_0225A428(void) {
    /* Original at 0x0225A428 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r1, [r0, #0x3c]\n    lsr r1, r1, #1\n    strh r1, [r0, #0x3c]\n    bx lr"
    );
    #endif
}

void ov48_0225A430(void) {
    ov48_0225A43C();
}

void ov48_0225A43C(void) {
    /* Original at 0x0225A43C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #0x3c]\n    add r4, r2, #0\n    add r6, r1, #0\n    add r1, r4, #0\n    mov r7, #1\n    str r0, [sp]\n    bl _s32_div_f\n    cmp r1, #0\n    bne _0225A464\n    ldr r0, [sp]\n    add r1, r4, #0\n    bl _s32_div_f\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov48_0225A4B4\n    ldrh r0, [r5, #0x3c]\n    add r1, r0, #1\n    mov r0, #0x12\n    mul r0, r4\n    cmp r1, r0\n    bge _0225A472\n    strh r1, [r5, #0x3c]\n    ldrh r0, [r5, #0x3e]\n    mov r4, #0\n    cmp r0, #0\n    ble _0225A492\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov48_0225A4C0\n    cmp r0, #0\n    bne _0225A48A\n    mov r7, #0\n    ldrh r0, [r5, #0x3e]\n    add r4, r4, #1\n    cmp r4, r0\n    blt _0225A47A\n    cmp r7, #1\n    bne _0225A4AE\n    mov r0, #0x6e\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov48_0225AD38\n    mov r0, #0xb9\n    lsl r0, r0, #2\n    mov r1, #0\n    add r0, r5, r0\n    add r2, r1, #0\n    bl ov48_0225A668\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_0225A4B4(void) {
    /* Original at 0x0225A4B4 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r0, r0, r1\n    mov r2, #1\n    add r0, #0x40\n    strb r2, [r0]\n    bx lr"
    );
    #endif
}

void ov48_0225A4C0(void) {
    /* Original at 0x0225A4C0 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r2, [sp]\n    add r5, r0, #0\n    lsl r2, r1, #2\n    add r0, r5, r2\n    add r0, #0x40\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0225A4DA\n    add sp, #0x10\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r0, #0x41\n    ldrsb r4, [r0, r2]\n    add r6, r0, r2\n    cmp r4, #2\n    blt _0225A4EC\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x11\n    sub r7, r0, r1\n    add r0, r7, #0\n    mov r1, #6\n    bl _u32_div_f\n    str r0, [sp, #0xc]\n    add r0, r7, #0\n    mov r1, #6\n    bl _u32_div_f\n    ldr r0, [sp, #0xc]\n    str r1, [sp, #4]\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r0, #0x88\n    ldr r0, [r0]\n    cmp r4, #0\n    str r0, [sp, #8]\n    beq _0225A51A\n    cmp r4, #1\n    beq _0225A548\n    b _0225A570\n    add r0, r5, #0\n    bl ov48_0225A858\n    add r3, r0, #0\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    bl ov48_0225A868\n    ldr r2, [sp]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov48_0225A57C\n    mov r0, #0xb9\n    lsl r0, r0, #2\n    lsl r1, r7, #0x13\n    add r0, r5, r0\n    asr r1, r1, #0x10\n    mov r2, #0x90\n    bl ov48_0225A668\n    b _0225A570\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    bl ov48_0225A834\n    add r3, r0, #0\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    bl ov48_0225A868\n    ldr r0, [sp, #8]\n    mov r1, #0x28\n    add r5, #0xa0\n    mul r1, r0\n    add r0, r5, r1\n    ldr r2, [sp]\n    add r1, r7, #0\n    bl ov48_0225AA5C\n    mov r0, #0\n    ldrsb r1, [r6, r0]\n    add r1, r1, #1\n    strb r1, [r6]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_0225A57C(void) {
    /* Original at 0x0225A57C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    add r0, #0x98\n    ldr r0, [r0]\n    add r4, r2, #0\n    mov r2, #0x20\n    str r2, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    add r2, r0, #0\n    add r2, #0xc\n    str r2, [sp, #8]\n    mov r2, #0\n    lsl r1, r1, #0x18\n    str r2, [sp, #0xc]\n    lsr r3, r1, #0x18\n    str r3, [sp, #0x10]\n    ldrh r1, [r0]\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #6\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r4]\n    bl CopyToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov48_0225A5C4(void) {
    /* Original at 0x0225A5C4 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r1, _0225A624 ; =0x04001000\n    ldr r2, _0225A628 ; =0xFFFF1FFF\n    ldr r3, [r1]\n    add r5, r1, #0\n    and r3, r2\n    mov r2, #6\n    lsl r2, r2, #0xc\n    orr r2, r3\n    str r2, [r1]\n    add r5, #0x4a\n    ldrh r6, [r5]\n    mov r3, #0x3f\n    mov r2, #0x1f\n    bic r6, r3\n    orr r2, r6\n    strh r2, [r5]\n    add r1, #0x48\n    ldrh r5, [r1]\n    mov r2, #0xf\n    add r4, r0, #0\n    bic r5, r3\n    add r3, r5, #0\n    orr r3, r2\n    strh r3, [r1]\n    ldrh r5, [r1]\n    ldr r3, _0225A62C ; =0xFFFFC0FF\n    lsl r2, r2, #8\n    and r3, r5\n    orr r2, r3\n    strh r2, [r1]\n    mov r1, #0\n    add r2, r1, #0\n    bl ov48_0225A650\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov48_0225A668\n    ldr r0, _0225A630 ; =ov48_0225A680\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnVWaitQueue\n    str r0, [r4, #0xc]\n    pop {r4, r5, r6, pc}\n    nop\n    _0225A624: .word 0x04001000\n    _0225A628: .word 0xFFFF1FFF\n    _0225A62C: .word 0xFFFFC0FF\n    _0225A630: .word ov48_0225A680"
    );
    #endif
}

void ov48_0225A634(void) {
    SysTask_Destroy();
}

void ov48_0225A650(void) {
    /* Original at 0x0225A650 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    bge _0225A656\n    mov r1, #0\n    cmp r2, #0\n    bge _0225A65C\n    mov r2, #0\n    mov r3, #1\n    strh r3, [r0]\n    strh r1, [r0, #4]\n    strh r2, [r0, #6]\n    bx lr"
    );
    #endif
}

void ov48_0225A668(void) {
    /* Original at 0x0225A668 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    bge _0225A66E\n    mov r1, #0\n    cmp r2, #0\n    bge _0225A674\n    mov r2, #0\n    mov r3, #1\n    strh r3, [r0, #2]\n    strh r1, [r0, #8]\n    strh r2, [r0, #0xa]\n    bx lr"
    );
    #endif
}

void ov48_0225A680(void) {
    /* Original at 0x0225A680 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r4, #0\n    ldrsh r0, [r1, r4]\n    cmp r0, #0\n    beq _0225A6A8\n    mov r0, #6\n    ldrsh r2, [r1, r0]\n    mov r0, #4\n    ldrsh r5, [r1, r0]\n    ldr r0, _0225A6D4 ; =0x04001040\n    mov r3, #0xff\n    strh r3, [r0]\n    lsl r2, r2, #0x18\n    lsl r5, r5, #8\n    lsl r3, r3, #8\n    and r3, r5\n    lsr r2, r2, #0x18\n    orr r2, r3\n    strh r2, [r0, #4]\n    strh r4, [r1]\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    cmp r0, #0\n    beq _0225A6D0\n    mov r0, #0xa\n    ldrsh r2, [r1, r0]\n    mov r0, #8\n    ldrsh r4, [r1, r0]\n    ldr r0, _0225A6D8 ; =0x04001042\n    mov r3, #0xff\n    strh r3, [r0]\n    lsl r2, r2, #0x18\n    lsl r4, r4, #8\n    lsl r3, r3, #8\n    and r3, r4\n    lsr r2, r2, #0x18\n    orr r2, r3\n    strh r2, [r0, #4]\n    mov r0, #0\n    strh r0, [r1, #2]\n    pop {r4, r5}\n    bx lr\n    _0225A6D4: .word 0x04001040\n    _0225A6D8: .word 0x04001042"
    );
    #endif
}

void ov48_0225A6DC(void) {
    /* Original at 0x0225A6DC */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    mov r6, #0x94\n    str r1, [sp, #0x18]\n    add r1, r6, #0\n    mov r7, #0\n    add r1, #0xd4\n    str r0, [sp, #0x14]\n    add r4, r7, #0\n    add r5, r0, r1\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #6\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    add r1, r5, #0\n    ldr r0, [r0]\n    mov r2, #5\n    mov r3, #0\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #0\n    add r6, #0xa2\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    bl CopyWindowToVram\n    add r7, r7, #1\n    add r4, r4, #6\n    add r5, #0x10\n    cmp r7, #3\n    blt _0225A6F0\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #6\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    mov r0, #0x94\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    mov r2, #0x66\n    ldr r1, [sp, #0x14]\n    lsl r2, r2, #2\n    add r1, r1, r2\n    ldr r0, [r0]\n    mov r2, #5\n    bl AddWindowParameterized\n    mov r1, #0x66\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_0225A768(void) {
    /* Original at 0x0225A768 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    mov r4, #0\n    add r5, r6, r0\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #3\n    blt _0225A774\n    mov r0, #0x66\n    lsl r0, r0, #2\n    add r0, r6, r0\n    bl RemoveWindow\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov48_0225A790(void) {
    /* Original at 0x0225A790 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r4, #3\n    blo _0225A7A4\n    bl GF_AssertFail\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    add r5, r5, r0\n    lsl r4, r4, #4\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r6]\n    bl ov48_0225B038\n    str r0, [sp, #0x10]\n    add r0, r7, #0\n    mov r1, #2\n    bl ov48_0225B0C4\n    mov r3, #0\n    add r2, r0, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    lsl r1, r0, #2\n    ldr r0, _0225A82C ; =ov48_0225B1D8\n    ldr r0, [r0, r1]\n    mov r1, #1\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    add r0, r5, r4\n    bl AddTextPrinterParameterizedWithColor\n    ldr r1, [r6, #4]\n    add r0, r7, #0\n    bl ov48_0225B0E0\n    add r2, r0, #0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0225A830 ; =0x00010200\n    mov r3, #0\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    add r0, r5, r4\n    mov r1, #1\n    bl AddTextPrinterParameterizedWithColor\n    ldr r1, [r6, #4]\n    ldr r2, [r6, #8]\n    add r0, r7, #0\n    bl ov48_0225B108\n    add r2, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0225A830 ; =0x00010200\n    mov r3, #0\n    str r0, [sp, #8]\n    add r0, r5, r4\n    mov r1, #1\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0225A82C: .word ov48_0225B1D8\n    _0225A830: .word 0x00010200"
    );
    #endif
}

void ov48_0225A834(void) {
    /* Original at 0x0225A834 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #3\n    blo _0225A844\n    bl GF_AssertFail\n    lsl r0, r4, #4\n    add r1, r5, r0\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r1, [r1, r0]\n    mov r0, #0x36\n    lsl r0, r0, #4\n    mul r0, r6\n    add r0, r1, r0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov48_0225A858(void) {
    /* Original at 0x0225A858 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x69\n    lsl r2, r2, #2\n    ldr r2, [r0, r2]\n    mov r0, #0x36\n    lsl r0, r0, #4\n    mul r0, r1\n    add r0, r2, r0\n    bx lr"
    );
    #endif
}

void ov48_0225A868(void) {
    /* Original at 0x0225A868 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r2, #0\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    add r2, r0, r2\n    lsl r0, r1, #4\n    add r0, r2, r0\n    add r4, r3, #0\n    bl GetWindowBaseTile\n    mov r3, #0x1b\n    add r1, r5, #0\n    mul r1, r3\n    add r0, r0, r1\n    lsl r1, r0, #0x10\n    mov r0, #0x15\n    lsr r1, r1, #0xb\n    add r2, r4, #0\n    lsl r3, r3, #5\n    bl GF_CreateNewVramTransferTask\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov48_0225A894(void) {
    /* Original at 0x0225A894 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r1, [sp, #4]\n    ldr r1, [sp, #0x28]\n    str r2, [sp, #8]\n    str r1, [sp, #0x28]\n    mov r1, #0\n    mov r2, #0x28\n    add r7, r0, #0\n    add r4, r3, #0\n    bl memset\n    ldr r0, [sp, #8]\n    strh r4, [r7, #2]\n    ldrh r0, [r0, #4]\n    cmp r0, #0\n    beq _0225A8F4\n    strh r0, [r7, #0x18]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldrh r0, [r7, #0x18]\n    cmp r0, #0\n    ble _0225A8F4\n    add r6, r7, #0\n    ldr r4, [sp, #8]\n    add r6, #0x10\n    add r5, r7, #0\n    ldr r0, [sp, #0x28]\n    ldr r1, [sp, #4]\n    str r0, [sp]\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldrh r1, [r4]\n    mov r2, #0\n    add r3, r6, #0\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    str r0, [r5, #8]\n    ldr r0, [sp, #0xc]\n    ldrh r1, [r7, #0x18]\n    add r0, r0, #1\n    add r6, r6, #4\n    add r4, r4, #2\n    add r5, r5, #4\n    str r0, [sp, #0xc]\n    cmp r0, r1\n    blt _0225A8CA\n    ldr r0, [sp, #8]\n    ldrh r1, [r0, #8]\n    cmp r1, #0\n    beq _0225A924\n    add r0, r7, #0\n    add r0, #0x24\n    strb r1, [r0]\n    ldr r0, [sp, #8]\n    add r2, r7, #0\n    ldrh r1, [r0, #0xa]\n    add r0, r7, #0\n    add r0, #0x26\n    strb r1, [r0]\n    mov r1, #0x51\n    ldr r0, [sp, #4]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    ldr r1, [sp, #8]\n    ldr r3, [sp, #0x28]\n    ldrh r1, [r1, #6]\n    add r2, #0x20\n    bl GfGfxLoader_GetPlttDataFromOpenNarc\n    str r0, [r7, #0x1c]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_0225A928(void) {
    /* Original at 0x0225A928 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldrh r0, [r6, #0x18]\n    cmp r0, #0\n    beq _0225A94A\n    mov r4, #0\n    cmp r0, #0\n    ble _0225A94A\n    add r5, r6, #0\n    ldr r0, [r5, #8]\n    bl Heap_Free\n    ldrh r0, [r6, #0x18]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r0\n    blt _0225A93A\n    add r0, r6, #0\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0225A95A\n    ldr r0, [r6, #0x1c]\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov48_0225A95C(void) {
    /* Original at 0x0225A95C */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    ldrh r4, [r5]\n    ldrh r0, [r5, #0x18]\n    ldrh r6, [r5, #2]\n    add r7, r1, #0\n    mul r0, r4\n    add r1, r6, #0\n    bl _s32_div_f\n    str r0, [sp, #0x20]\n    add r0, r5, #0\n    add r0, #0x24\n    ldrb r0, [r0]\n    add r1, r6, #0\n    mul r0, r4\n    bl _s32_div_f\n    str r0, [sp, #0x1c]\n    add r0, r4, #1\n    add r1, r6, #0\n    bl _s32_div_f\n    strh r1, [r5]\n    ldrh r0, [r5, #0x18]\n    cmp r0, #0\n    beq _0225A9F4\n    ldrh r1, [r5, #0x1a]\n    ldr r0, [sp, #0x20]\n    cmp r0, r1\n    beq _0225A9F4\n    mov r6, #0\n    strh r0, [r5, #0x1a]\n    add r4, r6, #0\n    add r0, r5, r6\n    ldrb r0, [r0, #4]\n    cmp r0, #1\n    bne _0225A9EC\n    ldrh r0, [r5, #0x1a]\n    mov r1, #0x20\n    mov r2, #0\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x10]\n    str r1, [sp]\n    mov r1, #6\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    lsl r1, r4, #0x18\n    lsr r3, r1, #0x18\n    str r3, [sp, #0x10]\n    ldrh r1, [r0]\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #6\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r7]\n    bl CopyToBgTilemapRect\n    ldr r0, [r7]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add r6, r6, #1\n    add r4, r4, #6\n    cmp r6, #3\n    blt _0225A9A2\n    add r0, r5, #0\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0225AA34\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r1, [r0]\n    ldr r0, [sp, #0x1c]\n    cmp r0, r1\n    beq _0225AA34\n    add r1, r5, #0\n    add r1, #0x25\n    strb r0, [r1]\n    ldr r2, [r5, #0x20]\n    add r1, r5, #0\n    add r1, #0x26\n    ldrb r1, [r1]\n    add r5, #0x25\n    ldr r3, [r2, #0xc]\n    ldrb r2, [r5]\n    mov r0, #0x1f\n    lsl r1, r1, #5\n    lsl r2, r2, #5\n    add r2, r3, r2\n    mov r3, #0x20\n    bl GF_CreateNewVramTransferTask\n    cmp r0, #0\n    bne _0225AA34\n    bl GF_AssertFail\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_0225AA38(void) {
    GF_AssertFail();
}

void ov48_0225AA50(void) {
    /* Original at 0x0225AA50 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    strb r1, [r0, #4]\n    strb r1, [r0, #5]\n    strb r1, [r0, #6]\n    strb r1, [r0, #7]\n    bx lr"
    );
    #endif
}

void ov48_0225AA5C(void) {
    /* Original at 0x0225AA5C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    add r4, r2, #0\n    ldrh r2, [r0, #0x18]\n    cmp r2, #0\n    beq _0225AAA8\n    ldrh r2, [r0, #0x1a]\n    lsl r1, r1, #0x18\n    lsr r3, r1, #0x18\n    lsl r2, r2, #2\n    add r0, r0, r2\n    ldr r0, [r0, #0x10]\n    mov r2, #0x20\n    str r2, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    add r2, r0, #0\n    add r2, #0xc\n    str r2, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    str r3, [sp, #0x10]\n    ldrh r1, [r0]\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #6\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r4]\n    bl CopyToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov48_0225AAAC(void) {
    /* Original at 0x0225AAAC */
    /* Requires manual decompilation - 178 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x88\n    str r0, [sp, #0x2c]\n    str r2, [sp, #0x30]\n    mov r0, #0\n    add r5, r1, #0\n    add r2, sp, #0x44\n    add r1, r0, #0\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r2, #0x4b\n    ldr r0, [sp, #0x2c]\n    lsl r2, r2, #2\n    str r3, [sp, #0x34]\n    bl memset\n    ldr r0, [sp, #0x2c]\n    mov r2, #2\n    strh r2, [r0, #0x30]\n    mov r1, #0x80\n    strh r1, [r0, #0x32]\n    ldr r0, [r5, #4]\n    ldr r3, [sp, #0x34]\n    str r0, [sp, #0x44]\n    add r0, sp, #0x64\n    str r0, [sp, #0x48]\n    mov r0, #0x40\n    str r0, [sp, #0x58]\n    str r3, [sp, #0x60]\n    str r2, [sp, #0x5c]\n    mov r3, #0\n    str r3, [sp]\n    str r2, [sp, #4]\n    mov r2, #0xc\n    str r2, [sp, #8]\n    ldr r2, [sp, #0x34]\n    add r0, #0xf4\n    str r2, [sp, #0xc]\n    add r1, #0xc4\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    mov r2, #0x14\n    bl AddPlttResObjFromOpenNarc\n    ldr r1, [sp, #0x2c]\n    str r0, [r1, #0x70]\n    bl sub_0200B00C\n    cmp r0, #0\n    bne _0225AB18\n    bl GF_AssertFail\n    ldr r0, [sp, #0x2c]\n    ldr r0, [r0, #0x70]\n    bl sub_0200A740\n    mov r0, #0x15\n    str r0, [sp, #0x40]\n    ldr r4, [sp, #0x2c]\n    mov r0, #0x16\n    str r0, [sp, #0x3c]\n    mov r0, #0x17\n    mov r6, #0\n    str r0, [sp, #0x38]\n    add r7, r4, #0\n    str r6, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x34]\n    mov r1, #0x51\n    str r0, [sp, #8]\n    mov r0, #0x13\n    lsl r0, r0, #4\n    lsl r1, r1, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, [sp, #0x40]\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    str r0, [r4, #0x6c]\n    mov r1, #0x51\n    str r6, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x34]\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, [sp, #0x3c]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r4, #0x74]\n    mov r1, #0x51\n    str r6, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x34]\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, [sp, #0x38]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r4, #0x78]\n    ldr r0, [r4, #0x6c]\n    bl sub_0200ADA4\n    cmp r0, #0\n    bne _0225ABA0\n    bl GF_AssertFail\n    ldr r0, [r4, #0x6c]\n    bl sub_0200A740\n    mov r0, #0\n    str r6, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    str r0, [sp, #0x14]\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r2, #0\n    str r0, [sp, #0x18]\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r3, r6, #0\n    str r0, [sp, #0x1c]\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    str r0, [sp, #0x20]\n    mov r0, #0\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, sp, #0x64\n    bl CreateSpriteResourcesHeader\n    add r0, sp, #0x44\n    bl Sprite_Create\n    str r0, [r7, #0x3c]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r1, #1\n    ldr r0, [r7, #0x3c]\n    lsl r1, r1, #0xc\n    bl Sprite_SetAnimSpeed\n    ldr r0, [sp, #0x40]\n    add r6, r6, #1\n    add r0, r0, #3\n    str r0, [sp, #0x40]\n    ldr r0, [sp, #0x3c]\n    add r4, #0x10\n    add r0, r0, #3\n    str r0, [sp, #0x3c]\n    ldr r0, [sp, #0x38]\n    add r7, r7, #4\n    add r0, r0, #3\n    str r0, [sp, #0x38]\n    cmp r6, #0xc\n    blt _0225AB32\n    ldr r0, [sp, #0x2c]\n    bl ov48_0225AD38\n    mov r1, #0\n    ldr r0, [sp, #0x30]\n    add r2, r1, #0\n    bl ov48_0225A668\n    add sp, #0x88\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov48_0225AC34(void) {
    /* Original at 0x0225AC34 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r0, _0225ACA8 ; =0x000005D8\n    mov r1, #0\n    bl StopSE\n    mov r0, #0\n    ldr r7, [sp]\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    ldr r0, [r0, #0x3c]\n    bl Sprite_Delete\n    ldr r0, [r7, #0x6c]\n    bl sub_0200AEB0\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    bne _0225AC72\n    ldr r0, [r7, #0x70]\n    bl sub_0200B0A8\n    mov r0, #0x4d\n    ldr r1, [sp, #4]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldr r1, [r7, #0x70]\n    bl DestroySingle2DGfxResObj\n    ldr r5, [sp, #4]\n    mov r4, #0\n    add r6, r7, #0\n    cmp r4, #1\n    beq _0225AC88\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r1, [r6, #0x6c]\n    bl DestroySingle2DGfxResObj\n    add r4, r4, #1\n    add r6, r6, #4\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0225AC78\n    ldr r0, [sp]\n    add r7, #0x10\n    add r0, r0, #4\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    str r0, [sp, #8]\n    cmp r0, #0xc\n    blt _0225AC4A\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0225ACA8: .word 0x000005D8"
    );
    #endif
}

void ov48_0225ACAC(void) {
    /* Original at 0x0225ACAC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    add r2, r0, #0\n    mov r3, #0\n    add r1, #0x34\n    strb r3, [r1]\n    add r2, #0x34\n    strb r3, [r2, #1]\n    strb r3, [r2, #2]\n    add r1, r0, #0\n    strb r3, [r2, #3]\n    add r2, r0, #0\n    add r1, #0x38\n    strb r3, [r1]\n    add r2, #0x38\n    strb r3, [r2, #1]\n    strb r3, [r2, #2]\n    strb r3, [r2, #3]\n    mov r1, #2\n    strh r1, [r0, #0x30]\n    mov r1, #0x80\n    strh r1, [r0, #0x32]\n    bx lr"
    );
    #endif
}

void ov48_0225ACD8(void) {
    /* Original at 0x0225ACD8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r5, r4\n    add r6, r5, #0\n    str r3, [sp]\n    mov r1, #1\n    add r0, #0x34\n    strb r1, [r0]\n    add r6, #0x38\n    add r0, r2, #0\n    bl ov48_0225B050\n    strb r0, [r6, r4]\n    lsl r7, r4, #4\n    ldrb r2, [r6, r4]\n    mov r1, #0x30\n    ldr r3, _0225AD34 ; =ov48_0225B330\n    mul r1, r2\n    add r1, r3, r1\n    add r0, r5, r7\n    add r1, r1, r7\n    bl ov48_0225AE3C\n    ldr r0, [sp]\n    cmp r0, #0x18\n    bhs _0225AD30\n    bl ov48_0225B050\n    ldrb r1, [r6, r4]\n    cmp r0, r1\n    bne _0225AD30\n    cmp r4, #2\n    bhs _0225AD30\n    add r0, r4, #1\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #1\n    bl ov48_0225AE5C\n    add r0, r5, r7\n    mov r1, #1\n    bl ov48_0225AE58\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225AD34: .word ov48_0225B330"
    );
    #endif
}

void ov48_0225AD38(void) {
    Sprite_SetDrawFlag(0);
}

void ov48_0225AD54(void) {
    /* Original at 0x0225AD54 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #0x32\n    ldrsh r2, [r5, r1]\n    cmp r2, #0\n    ble _0225AD82\n    sub r2, r2, #1\n    strh r2, [r5, #0x32]\n    ldrsh r1, [r5, r1]\n    cmp r1, #0\n    bne _0225ADB6\n    mov r1, #0x30\n    ldrsh r1, [r5, r1]\n    add r2, r4, #0\n    bl ov48_0225ADBC\n    cmp r0, #1\n    bne _0225ADB6\n    ldr r0, _0225ADB8 ; =0x000005D8\n    bl PlaySE\n    pop {r3, r4, r5, pc}\n    mov r1, #0x30\n    ldrsh r1, [r5, r1]\n    add r2, r4, #0\n    bl ov48_0225ADF8\n    cmp r0, #1\n    bne _0225ADB6\n    mov r1, #0x30\n    ldrsh r0, [r5, r1]\n    sub r0, r0, #1\n    bmi _0225ADA6\n    strh r0, [r5, #0x30]\n    ldrsh r1, [r5, r1]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov48_0225ADBC\n    pop {r3, r4, r5, pc}\n    ldr r0, _0225ADB8 ; =0x000005D8\n    mov r1, #0\n    bl StopSE\n    mov r0, #2\n    strh r0, [r5, #0x30]\n    mov r0, #0x80\n    strh r0, [r5, #0x32]\n    pop {r3, r4, r5, pc}\n    _0225ADB8: .word 0x000005D8"
    );
    #endif
}

void ov48_0225ADBC(void) {
    /* Original at 0x0225ADBC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r5, r4\n    add r0, #0x34\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0225ADD0\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    lsl r0, r4, #4\n    add r0, r5, r0\n    add r1, r2, #0\n    bl ov48_0225AEA8\n    add r0, r5, r4\n    add r0, #0x38\n    ldrb r0, [r0]\n    mov r1, #1\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x3c]\n    bl Sprite_SetDrawFlag\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov48_0225B010\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov48_0225ADF8(void) {
    /* Original at 0x0225ADF8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r5, r4\n    add r0, #0x34\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0225AE0C\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    lsl r0, r4, #4\n    add r0, r5, r0\n    add r1, r2, #0\n    bl ov48_0225AE60\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov48_0225B010\n    cmp r6, #1\n    bne _0225AE36\n    add r0, r5, r4\n    add r0, #0x38\n    ldrb r0, [r0]\n    mov r1, #0\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x3c]\n    bl Sprite_SetDrawFlag\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov48_0225AE3C(void) {
    /* Original at 0x0225AE3C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0xc]\n    mov r3, #0\n    ldrsh r2, [r1, r3]\n    strh r2, [r0]\n    mov r2, #2\n    ldrsh r1, [r1, r2]\n    add r1, #0x10\n    strh r1, [r0, #2]\n    strh r3, [r0, #4]\n    strh r3, [r0, #6]\n    strh r3, [r0, #8]\n    strh r3, [r0, #0xa]\n    bx lr"
    );
    #endif
}

void ov48_0225AE58(void) {
    /* Original at 0x0225AE58 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "strh r1, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov48_0225AE5C(void) {
    /* Original at 0x0225AE5C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "strh r1, [r0, #0xa]\n    bx lr"
    );
    #endif
}

void ov48_0225AE60(void) {
    /* Original at 0x0225AE60 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r1, #4\n    ldrsh r3, [r5, r1]\n    ldr r2, [r5, #0xc]\n    mov r1, #8\n    ldrsh r1, [r2, r1]\n    cmp r3, r1\n    ble _0225AE78\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    bl ov48_0225AEDC\n    mov r0, #4\n    ldrsh r0, [r5, r0]\n    add r0, r0, #1\n    strh r0, [r5, #4]\n    mov r0, #6\n    ldrsh r0, [r5, r0]\n    ldr r1, [r5, #0xc]\n    add r2, r0, #1\n    mov r0, #0xc\n    ldrsh r0, [r1, r0]\n    cmp r2, r0\n    ble _0225AE9A\n    mov r0, #0\n    strh r0, [r5, #6]\n    b _0225AE9C\n    strh r2, [r5, #6]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov48_0225AFB4\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov48_0225AEA8(void) {
    /* Original at 0x0225AEA8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #0\n    strh r1, [r5, #4]\n    strh r1, [r5, #6]\n    bl ov48_0225AEDC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov48_0225AFB4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov48_0225AEC4(void) {
    /* Original at 0x0225AEC4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    ldrsh r2, [r0, r2]\n    lsl r2, r2, #0xc\n    str r2, [r1]\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    lsl r3, r0, #0xc\n    lsl r0, r2, #0x13\n    add r0, r3, r0\n    str r0, [r1, #4]\n    bx lr"
    );
    #endif
}

void ov48_0225AEDC(void) {
    /* Original at 0x0225AEDC */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #0xa]\n    ldr r2, [r5, #0xc]\n    cmp r0, #0\n    bne _0225AEF4\n    mov r0, #6\n    ldrsh r0, [r2, r0]\n    sub r0, #0x10\n    lsl r0, r0, #0x10\n    asr r7, r0, #0x10\n    b _0225AEF8\n    mov r0, #6\n    ldrsh r7, [r2, r0]\n    ldrh r0, [r5, #8]\n    cmp r0, #0\n    bne _0225AF0A\n    mov r0, #2\n    ldrsh r0, [r2, r0]\n    add r0, #0x10\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    b _0225AF0E\n    mov r0, #2\n    ldrsh r4, [r2, r0]\n    mov r0, #0\n    ldrsh r6, [r2, r0]\n    mov r0, #4\n    ldrsh r1, [r5, r0]\n    ldrsh r0, [r2, r0]\n    sub r0, r0, r6\n    mul r0, r1\n    mov r1, #8\n    ldrsh r1, [r2, r1]\n    bl _s32_div_f\n    add r0, r6, r0\n    strh r0, [r5]\n    mov r0, #4\n    ldrsh r1, [r5, r0]\n    sub r0, r7, r4\n    ldr r2, [r5, #0xc]\n    mul r0, r1\n    mov r1, #8\n    ldrsh r1, [r2, r1]\n    bl _s32_div_f\n    add r0, r4, r0\n    strh r0, [r5, #2]\n    mov r0, #6\n    ldrsh r1, [r5, r0]\n    ldr r0, _0225AFAC ; =0x0000FFFF\n    ldr r4, [r5, #0xc]\n    mul r0, r1\n    mov r1, #0xc\n    ldrsh r1, [r4, r1]\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    asr r0, r0, #4\n    lsl r1, r0, #2\n    ldr r0, _0225AFB0 ; =FX_SinCosTable_\n    ldrsh r6, [r0, r1]\n    mov r0, #0xa\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _0225AF76\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0225AF84\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    asr r1, r0, #0x1f\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    mov r3, #2\n    mov r4, #0\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    adc r1, r4\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    orr r1, r0\n    ldrsh r2, [r5, r4]\n    asr r0, r1, #0xc\n    add r0, r2, r0\n    strh r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225AFAC: .word 0x0000FFFF\n    _0225AFB0: .word FX_SinCosTable_"
    );
    #endif
}

void ov48_0225AFB4(void) {
    /* Original at 0x0225AFB4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov48_0225A650\n    ldrh r0, [r5, #8]\n    cmp r0, #0\n    bne _0225AFE8\n    ldr r1, [r5, #0xc]\n    mov r0, #2\n    ldrsh r1, [r1, r0]\n    ldrsh r2, [r5, r0]\n    add r0, r1, #0\n    sub r0, #0x10\n    cmp r2, r0\n    ble _0225AFE8\n    add r2, r1, #0\n    add r2, #0x20\n    lsl r2, r2, #0x10\n    add r0, r4, #0\n    asr r2, r2, #0x10\n    bl ov48_0225A650\n    ldrh r0, [r5, #0xa]\n    cmp r0, #0\n    bne _0225B00C\n    ldr r1, [r5, #0xc]\n    mov r0, #6\n    ldrsh r2, [r1, r0]\n    mov r0, #2\n    ldrsh r0, [r5, r0]\n    sub r0, #0x10\n    cmp r0, r2\n    bgt _0225B00C\n    add r1, r2, #0\n    sub r1, #0x20\n    lsl r1, r1, #0x10\n    add r0, r4, #0\n    asr r1, r1, #0x10\n    bl ov48_0225A650\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov48_0225B010(void) {
    /* Original at 0x0225B010 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    lsl r0, r4, #4\n    add r0, r5, r0\n    add r1, sp, #0\n    bl ov48_0225AEC4\n    add r0, r5, r4\n    add r0, #0x38\n    ldrb r0, [r0]\n    add r1, sp, #0\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x3c]\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov48_0225B038(void) {
    GF_AssertFail();
}

void ov48_0225B050(void) {
    GF_AssertFail();
}

void ov48_0225B068(void) {
    /* Original at 0x0225B068 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225B0A0 ; =0x00000321\n    mov r0, #0\n    mov r1, #0x1b\n    add r3, r4, #0\n    bl NewMsgDataFromNarc\n    str r0, [r5]\n    mov r0, #8\n    mov r1, #0x40\n    add r2, r4, #0\n    bl MessageFormat_New_Custom\n    str r0, [r5, #4]\n    mov r0, #0x80\n    add r1, r4, #0\n    bl String_New\n    str r0, [r5, #8]\n    mov r0, #0x80\n    add r1, r4, #0\n    bl String_New\n    str r0, [r5, #0xc]\n    pop {r3, r4, r5, pc}\n    nop\n    _0225B0A0: .word 0x00000321"
    );
    #endif
}

void ov48_0225B0A4(void) {
    /* Original at 0x0225B0A4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl DestroyMsgData\n    ldr r0, [r4, #4]\n    bl MessageFormat_Delete\n    ldr r0, [r4, #8]\n    bl String_Delete\n    ldr r0, [r4, #0xc]\n    bl String_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov48_0225B0C4(void) {
    ReadMsgDataIntoString();
}

void ov48_0225B0D4(void) {
    ReadMsgDataIntoString();
}

void ov48_0225B0E0(void) {
    /* Original at 0x0225B0E0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    ldr r2, [r5, #0xc]\n    mov r1, #3\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #4]\n    mov r1, #0\n    add r2, r4, #0\n    bl BufferCountryName\n    ldr r0, [r5, #4]\n    ldr r1, [r5, #8]\n    ldr r2, [r5, #0xc]\n    bl StringExpandPlaceholders\n    ldr r0, [r5, #8]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov48_0225B108(void) {
    /* Original at 0x0225B108 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r4, r1, #0\n    add r6, r2, #0\n    bl MessageFormat_ResetBuffers\n    ldr r0, [r5]\n    ldr r2, [r5, #0xc]\n    mov r1, #3\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #4]\n    mov r1, #0\n    add r2, r4, #0\n    add r3, r6, #0\n    bl BufferCityName\n    ldr r0, [r5, #4]\n    ldr r1, [r5, #8]\n    ldr r2, [r5, #0xc]\n    bl StringExpandPlaceholders\n    ldr r0, [r5, #8]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov48_0225B13C(void) {
    /* Original at 0x0225B13C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #0\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov45_0222D724\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bne _0225B158\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    add r4, r4, #1\n    cmp r4, #0x32\n    blt _0225B142\n    mov r0, #0x32\n    pop {r3, r4, r5, pc}"
    );
    #endif
}
