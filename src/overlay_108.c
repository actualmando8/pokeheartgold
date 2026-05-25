/* Decompiled from asm/overlay_108.s */
#include "global.h"

void SafariAreaCustomizer_Init(void) {
    /* Original at 0x021E5900 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl OverlayManager_GetArgs\n    mov r2, #5\n    add r5, r0, #0\n    mov r0, #3\n    mov r1, #0x5f\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    ldr r1, _021E5944 ; =0x000184EC\n    add r0, r4, #0\n    mov r2, #0x5f\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _021E5944 ; =0x000184EC\n    mov r1, #0\n    add r4, r0, #0\n    bl MI_CpuFill8\n    mov r0, #0x5f\n    str r0, [r4]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov108_021E59E4\n    mov r1, #0\n    mov r0, #0x43\n    add r2, r1, #0\n    bl Sound_SetSceneAndPlayBGM\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _021E5944: .word 0x000184EC"
    );
    #endif
}

void SafariAreaCustomizer_Exit(void) {
    /* Original at 0x021E5948 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r6, r0, #0\n    bl ov108_021E5A48\n    ldr r2, _021E5974 ; =0x000184EC\n    ldr r4, [r6]\n    add r0, r6, #0\n    mov r1, #0\n    bl MI_CpuFill8\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    add r0, r4, #0\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    nop\n    _021E5974: .word 0x000184EC"
    );
    #endif
}

void SafariAreaCustomizer_Main(void) {
    /* Original at 0x021E5978 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, [r4]\n    cmp r1, #7\n    bhi _021E59DE\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E5992: ; jump table\n    bl ov108_021E5A78\n    str r0, [r4]\n    b _021E59DE\n    bl ov108_021E5A8C\n    str r0, [r4]\n    b _021E59DE\n    bl ov108_021E5AA0\n    str r0, [r4]\n    b _021E59DE\n    bl ov108_021E5AF0\n    str r0, [r4]\n    b _021E59DE\n    bl ov108_021E5B48\n    str r0, [r4]\n    b _021E59DE\n    bl ov108_021E5B98\n    str r0, [r4]\n    b _021E59DE\n    bl ov108_021E5BFC\n    str r0, [r4]\n    b _021E59DE\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E59E4(void) {
    /* Original at 0x021E59E4 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    bl Save_SafariZone_Get\n    add r2, r5, #0\n    str r0, [r5, #0x18]\n    mov r1, #0\n    add r2, #0x1c\n    bl SafariZone_CopyAreaSet\n    ldr r0, [r4]\n    bl Save_PlayerData_GetOptionsAddr\n    add r6, r0, #0\n    bl Options_GetTextSpeed\n    ldr r1, _021E5A38 ; =0x000184DC\n    strb r0, [r5, r1]\n    add r0, r6, #0\n    bl Options_GetFrame\n    ldr r1, _021E5A3C ; =0x000184DD\n    strb r0, [r5, r1]\n    ldr r0, [r4, #4]\n    bl MenuInputStateMgr_GetState\n    str r0, [r5, #0x10]\n    ldr r0, _021E5A40 ; =0x000184E8\n    mov r1, #0\n    str r1, [r5, r0]\n    str r4, [r5, #0x14]\n    ldr r0, [r5, #0x18]\n    bl SafariZone_GetObjectUnlockLevel\n    cmp r0, #0\n    beq _021E5A36\n    ldr r0, _021E5A44 ; =0x000184E3\n    mov r1, #1\n    strb r1, [r5, r0]\n    pop {r4, r5, r6, pc}\n    _021E5A38: .word 0x000184DC\n    _021E5A3C: .word 0x000184DD\n    _021E5A40: .word 0x000184E8\n    _021E5A44: .word 0x000184E3"
    );
    #endif
}

void ov108_021E5A48(void) {
    /* Original at 0x021E5A48 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r2, r4, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #0\n    add r2, #0x1c\n    bl SafariZone_SetAreaSet\n    ldr r0, [r4, #0x14]\n    ldr r0, [r0]\n    bl Save_VarsFlags_Get\n    ldr r1, _021E5A74 ; =0x000184E8\n    ldr r1, [r4, r1]\n    bl ChangeFlag99D\n    ldr r0, [r4, #0x14]\n    ldr r1, [r4, #0x10]\n    ldr r0, [r0, #4]\n    bl MenuInputStateMgr_SetState\n    pop {r4, pc}\n    _021E5A74: .word 0x000184E8"
    );
    #endif
}

void ov108_021E5A78(void) {
    ov108_021E5C54();
}

void ov108_021E5A8C(void) {
    ov108_021E5D0C();
}

void ov108_021E5AA0(void) {
    /* Original at 0x021E5AA0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    cmp r1, #4\n    bhi _021E5AE4\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E5AB6: ; jump table\n    bl ov108_021E5D90\n    str r0, [r4, #4]\n    b _021E5AE4\n    bl ov108_021E5DB8\n    str r0, [r4, #4]\n    b _021E5AE4\n    bl ov108_021E5E68\n    str r0, [r4, #4]\n    b _021E5AE4\n    mov r1, #0\n    str r1, [r4, #4]\n    bl ov108_021E846C\n    ldr r0, [r4, #0xc]\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov108_021E846C\n    mov r0, #2\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E5AF0(void) {
    /* Original at 0x021E5AF0 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    cmp r1, #4\n    bhi _021E5B3C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E5B06: ; jump table\n    bl ov108_021E5F10\n    str r0, [r4, #4]\n    b _021E5B3C\n    bl ov108_021E5F38\n    str r0, [r4, #4]\n    b _021E5B3C\n    bl ov108_021E5E68\n    str r0, [r4, #4]\n    b _021E5B3C\n    bl ov108_021E6010\n    str r0, [r4, #4]\n    b _021E5B3C\n    mov r1, #0\n    str r1, [r4, #4]\n    bl ov108_021E846C\n    ldr r0, [r4, #0xc]\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov108_021E846C\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E5B48(void) {
    /* Original at 0x021E5B48 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    cmp r1, #4\n    bhi _021E5B8C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E5B5E: ; jump table\n    bl ov108_021E6068\n    str r0, [r4, #4]\n    b _021E5B8C\n    bl ov108_021E5E68\n    str r0, [r4, #4]\n    b _021E5B8C\n    bl ov108_021E6090\n    str r0, [r4, #4]\n    b _021E5B8C\n    mov r1, #0\n    str r1, [r4, #4]\n    bl ov108_021E846C\n    ldr r0, [r4, #0xc]\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov108_021E846C\n    mov r0, #4\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E5B98(void) {
    /* Original at 0x021E5B98 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021E5BAA\n    cmp r0, #1\n    beq _021E5BD8\n    b _021E5BF0\n    mov r0, #6\n    mov r1, #1\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r0, [r4]\n    add r2, r1, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _021E5BF0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E5BF0\n    mov r0, #0\n    str r0, [r4, #4]\n    add r0, r4, #0\n    bl ov108_021E846C\n    add sp, #0xc\n    mov r0, #2\n    pop {r3, r4, pc}\n    add r0, r4, #0\n    bl ov108_021E846C\n    mov r0, #5\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov108_021E5BFC(void) {
    /* Original at 0x021E5BFC */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021E5C0E\n    cmp r0, #1\n    beq _021E5C2E\n    b _021E5C46\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _021E5C46\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E5C46\n    mov r0, #0\n    str r0, [r4, #4]\n    add r0, r4, #0\n    bl ov108_021E846C\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    add r0, r4, #0\n    bl ov108_021E846C\n    mov r0, #6\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov108_021E5C54(void) {
    /* Original at 0x021E5C54 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    cmp r1, #0\n    beq _021E5C68\n    cmp r1, #1\n    beq _021E5CB8\n    cmp r1, #2\n    beq _021E5CE2\n    b _021E5CF6\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _021E5D00 ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _021E5D04 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0\n    bl sub_0200FBF4\n    mov r0, #0\n    bl sub_0200FBDC\n    mov r0, #1\n    bl sub_0200FBDC\n    bl sub_020210BC\n    mov r0, #4\n    bl sub_02021148\n    b _021E5CF6\n    bl ov108_021E6C68\n    add r0, r4, #0\n    bl ov108_021E6D80\n    add r0, r4, #0\n    bl ov108_021E6F74\n    add r0, r4, #0\n    bl ov108_021E7080\n    add r0, r4, #0\n    bl ov108_021E7224\n    add r0, r4, #0\n    bl ov108_021E72CC\n    add r0, r4, #0\n    bl ov108_021E733C\n    b _021E5CF6\n    bl ov108_021E7BFC\n    ldr r0, _021E5D08 ; =ov108_021E6BA0\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    mov r0, #0\n    pop {r4, pc}\n    _021E5D00: .word 0xFFFFE0FF\n    _021E5D04: .word 0x04001000\n    _021E5D08: .word ov108_021E6BA0"
    );
    #endif
}

void ov108_021E5D0C(void) {
    /* Original at 0x021E5D0C */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _021E5D1C\n    cmp r0, #2\n    beq _021E5D54\n    b _021E5D7C\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    add r0, r4, #0\n    bl ov108_021E7510\n    add r0, r4, #0\n    bl ov108_021E730C\n    add r0, r4, #0\n    bl ov108_021E72A4\n    add r0, r4, #0\n    bl ov108_021E71EC\n    add r0, r4, #0\n    bl ov108_021E7014\n    add r0, r4, #0\n    bl ov108_021E6F58\n    add r0, r4, #0\n    bl ov108_021E6D24\n    b _021E5D7C\n    bl sub_02021238\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _021E5D88 ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _021E5D8C ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _021E5D88: .word 0xFFFFE0FF\n    _021E5D8C: .word 0x04001000"
    );
    #endif
}

void ov108_021E5D90(void) {
    /* Original at 0x021E5D90 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov108_021E6240\n    cmp r0, #0\n    beq _021E5DA0\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    bne _021E5DAE\n    add r0, r4, #0\n    bl ov108_021E62B4\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov108_021E63B8\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E5DB8(void) {
    /* Original at 0x021E5DB8 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _021E5E5C ; =0x000004BC\n    ldr r0, [r5, r0]\n    bl TouchscreenListMenu_HandleInput\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    bne _021E5DD2\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E5E5C ; =0x000004BC\n    ldr r0, [r5, r0]\n    add r1, r0, #0\n    add r1, #0x27\n    ldrb r1, [r1]\n    lsl r1, r1, #0x18\n    lsr r4, r1, #0x19\n    bl TouchscreenListMenu_Destroy\n    ldr r0, [r5, #0x10]\n    cmp r4, r0\n    beq _021E5DFC\n    cmp r4, #0\n    bne _021E5DF6\n    add r0, r5, #0\n    bl ov108_021E61E8\n    b _021E5DFC\n    add r0, r5, #0\n    bl ov108_021E6238\n    str r4, [r5, #0x10]\n    cmp r6, #0\n    beq _021E5E0A\n    cmp r6, #1\n    beq _021E5E14\n    cmp r6, #2\n    b _021E5E40\n    ldr r0, _021E5E60 ; =0x000184E0\n    mov r1, #0\n    strb r1, [r5, r0]\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl ov108_021E79A8\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #4\n    add r3, r2, #0\n    bl ov108_021E79A8\n    ldr r0, _021E5E64 ; =0x000184DF\n    ldrb r1, [r5, r0]\n    add r0, r0, #1\n    strb r1, [r5, r0]\n    add r0, r5, #0\n    bl ov108_021E6804\n    mov r0, #4\n    str r0, [r5, #0xc]\n    pop {r4, r5, r6, pc}\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl ov108_021E79A8\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #4\n    add r3, r2, #0\n    bl ov108_021E79A8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _021E5E5C: .word 0x000004BC\n    _021E5E60: .word 0x000184E0\n    _021E5E64: .word 0x000184DF"
    );
    #endif
}

void ov108_021E5E68(void) {
    /* Original at 0x021E5E68 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    cmp r1, #0\n    beq _021E5E78\n    cmp r1, #1\n    beq _021E5E84\n    b _021E5E94\n    bl ov108_021E7F7C\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    b _021E5EF6\n    bl ov108_021E80F4\n    cmp r0, #0\n    beq _021E5EF6\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    b _021E5EF6\n    ldr r3, _021E5EFC ; =0x04001000\n    ldr r1, _021E5F00 ; =0xFFFF1FFF\n    ldr r2, [r3]\n    and r1, r2\n    str r1, [r3]\n    ldr r2, _021E5F04 ; =0x000184E1\n    mov r1, #0\n    strb r1, [r4, r2]\n    str r1, [r4, #8]\n    add r2, r2, #1\n    ldrb r2, [r4, r2]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x1b\n    bne _021E5ED2\n    mov r2, #3\n    str r2, [r4, #0xc]\n    mov r2, #1\n    add r3, r2, #0\n    bl ov108_021E7700\n    add r0, r4, #0\n    bl ov108_021E7EB0\n    ldr r1, _021E5F08 ; =0x000184E2\n    mov r0, #0xf8\n    ldrb r2, [r4, r1]\n    bic r2, r0\n    mov r0, #8\n    orr r0, r2\n    strb r0, [r4, r1]\n    b _021E5EF2\n    mov r2, #2\n    str r2, [r4, #0xc]\n    add r2, r1, #0\n    mov r3, #1\n    bl ov108_021E7700\n    ldr r1, _021E5F0C ; =0x000184DF\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov108_021E7CD8\n    ldr r1, _021E5F08 ; =0x000184E2\n    mov r0, #0xf8\n    ldrb r2, [r4, r1]\n    bic r2, r0\n    strb r2, [r4, r1]\n    mov r0, #4\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}\n    nop\n    _021E5EFC: .word 0x04001000\n    _021E5F00: .word 0xFFFF1FFF\n    _021E5F04: .word 0x000184E1\n    _021E5F08: .word 0x000184E2\n    _021E5F0C: .word 0x000184DF"
    );
    #endif
}

void ov108_021E5F10(void) {
    /* Original at 0x021E5F10 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov108_021E6240\n    cmp r0, #0\n    beq _021E5F20\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    bne _021E5F2E\n    add r0, r4, #0\n    bl ov108_021E64C0\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov108_021E66AC\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E5F38(void) {
    /* Original at 0x021E5F38 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x13\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _021E5F50\n    cmp r0, #2\n    beq _021E5F88\n    b _021E5F9E\n    ldr r1, _021E6008 ; =0x000184E0\n    mov r4, #1\n    sub r2, r1, #2\n    ldrb r3, [r5, r2]\n    ldrb r0, [r5, r1]\n    mov r2, #6\n    mul r2, r3\n    add r0, r0, r2\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    sub r0, r1, #1\n    ldrb r3, [r5, r0]\n    mov r0, #0x7a\n    mul r0, r3\n    add r0, r5, r0\n    ldrb r0, [r0, #0x1c]\n    cmp r2, r0\n    beq _021E5FA2\n    add r0, r1, #0\n    add r0, #8\n    str r4, [r5, r0]\n    sub r1, r1, #1\n    add r0, r5, #0\n    ldrb r1, [r5, r1]\n    add r0, #0x1c\n    bl SafariZone_InitAreaInSet\n    b _021E5FA2\n    ldr r0, _021E600C ; =0x000184DF\n    mov r2, #0x7a\n    ldrb r1, [r5, r0]\n    add r0, r5, #0\n    mul r2, r1\n    add r2, r5, r2\n    ldrb r2, [r2, #0x1c]\n    bl ov108_021E7BB4\n    mov r4, #0\n    b _021E5FA2\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0x13\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_IsInTouchMode\n    add r6, r0, #0\n    ldr r0, [r5, #0x10]\n    cmp r6, r0\n    beq _021E5FC6\n    cmp r6, #0\n    bne _021E5FC0\n    add r0, r5, #0\n    bl ov108_021E61E8\n    b _021E5FC6\n    add r0, r5, #0\n    bl ov108_021E6238\n    mov r0, #0x13\n    str r6, [r5, #0x10]\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Reset\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r5, #0\n    mov r1, #0\n    bl ov108_021E767C\n    mov r2, #1\n    add r0, r5, #0\n    mov r1, #0\n    add r3, r2, #0\n    bl ov108_021E7700\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl ov108_021E79A8\n    cmp r4, #0\n    beq _021E6004\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _021E6008: .word 0x000184E0\n    _021E600C: .word 0x000184DF"
    );
    #endif
}

void ov108_021E6010(void) {
    /* Original at 0x021E6010 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    cmp r1, #0\n    beq _021E6020\n    cmp r1, #1\n    beq _021E602C\n    b _021E603C\n    bl ov108_021E81A8\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    b _021E6060\n    bl ov108_021E8270\n    cmp r0, #0\n    beq _021E6060\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    b _021E6060\n    ldr r2, _021E6064 ; =0x000184E2\n    mov r1, #4\n    ldrb r3, [r4, r2]\n    add r0, r3, #0\n    bic r0, r1\n    lsl r1, r3, #0x1d\n    lsr r3, r1, #0x1f\n    mov r1, #1\n    eor r1, r3\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x1d\n    orr r0, r1\n    strb r0, [r4, r2]\n    mov r0, #0\n    str r0, [r4, #8]\n    pop {r4, pc}\n    mov r0, #3\n    pop {r4, pc}\n    _021E6064: .word 0x000184E2"
    );
    #endif
}

void ov108_021E6068(void) {
    /* Original at 0x021E6068 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov108_021E6240\n    cmp r0, #0\n    beq _021E6078\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    bne _021E6086\n    add r0, r4, #0\n    bl ov108_021E6894\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov108_021E69A0\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E6090(void) {
    /* Original at 0x021E6090 */
    /* Requires manual decompilation - 154 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r2, _021E61D8 ; =0x000184E2\n    add r5, r0, #0\n    ldrb r1, [r5, r2]\n    lsl r1, r1, #0x1d\n    lsr r3, r1, #0x1f\n    mov r1, #6\n    add r4, r3, #0\n    mul r4, r1\n    ldr r1, [r5, #8]\n    cmp r1, #0\n    beq _021E60B2\n    cmp r1, #1\n    beq _021E60EE\n    cmp r1, #2\n    beq _021E6174\n    b _021E61BA\n    sub r0, r2, #3\n    ldrb r0, [r5, r0]\n    add r0, r0, r4\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0xdb\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetPriority\n    ldr r0, _021E61DC ; =0x000184E0\n    ldrb r0, [r5, r0]\n    add r0, r0, r4\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0xdb\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetPriority\n    mov r0, #0x10\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    ldr r0, [r5, #8]\n    add r0, r0, #1\n    str r0, [r5, #8]\n    b _021E61D2\n    mov r1, #0\n    bl ov108_021E82E0\n    cmp r0, #0\n    beq _021E61D2\n    ldr r2, _021E61E0 ; =0x000184E8\n    mov r0, #1\n    add r1, r2, #0\n    str r0, [r5, r2]\n    sub r1, #9\n    sub r2, #8\n    add r0, r5, #0\n    ldrb r1, [r5, r1]\n    ldrb r2, [r5, r2]\n    add r0, #0x1c\n    bl SafariZone_SwapAreasInSet\n    ldr r0, _021E61E4 ; =0x000184DF\n    mov r3, #0x7a\n    ldrb r2, [r5, r0]\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    add r1, r2, r4\n    mul r3, r2\n    add r2, r5, r3\n    lsl r1, r1, #0x18\n    ldrb r2, [r2, #0x1c]\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    bl ov108_021E84F8\n    ldr r0, _021E61E4 ; =0x000184DF\n    mov r2, #0x7a\n    ldrb r1, [r5, r0]\n    add r0, r5, #0\n    mul r2, r1\n    add r2, r5, r2\n    ldrb r2, [r2, #0x1c]\n    bl ov108_021E7BB4\n    ldr r0, _021E61DC ; =0x000184E0\n    mov r3, #0x7a\n    ldrb r2, [r5, r0]\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    add r1, r2, r4\n    mul r3, r2\n    add r2, r5, r3\n    lsl r1, r1, #0x18\n    ldrb r2, [r2, #0x1c]\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    bl ov108_021E84F8\n    ldr r0, _021E61DC ; =0x000184E0\n    mov r2, #0x7a\n    ldrb r1, [r5, r0]\n    add r0, r5, #0\n    mul r2, r1\n    add r2, r5, r2\n    ldrb r2, [r2, #0x1c]\n    bl ov108_021E7BB4\n    ldr r0, [r5, #8]\n    add r0, r0, #1\n    str r0, [r5, #8]\n    b _021E61D2\n    mov r1, #1\n    bl ov108_021E82E0\n    cmp r0, #0\n    beq _021E61D2\n    ldr r0, _021E61E4 ; =0x000184DF\n    ldrb r0, [r5, r0]\n    add r0, r0, r4\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0xdb\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    bl ManagedSprite_SetPriority\n    ldr r0, _021E61DC ; =0x000184E0\n    ldrb r0, [r5, r0]\n    add r0, r0, r4\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0xdb\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    bl ManagedSprite_SetPriority\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    ldr r0, [r5, #8]\n    add r0, r0, #1\n    str r0, [r5, #8]\n    b _021E61D2\n    sub r1, r2, #2\n    ldrb r3, [r5, r1]\n    sub r1, r2, #3\n    strb r3, [r5, r1]\n    bl ov108_021E6850\n    mov r0, #0\n    str r0, [r5, #8]\n    mov r0, #2\n    str r0, [r5, #0xc]\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    nop\n    _021E61D8: .word 0x000184E2\n    _021E61DC: .word 0x000184E0\n    _021E61E0: .word 0x000184E8\n    _021E61E4: .word 0x000184DF"
    );
    #endif
}

void ov108_021E61E8(void) {
    /* Original at 0x021E61E8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _021E6230 ; =0x000184E2\n    add r4, r0, #0\n    ldrb r1, [r4, r2]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1b\n    beq _021E6200\n    cmp r1, #1\n    beq _021E620C\n    cmp r1, #2\n    beq _021E6224\n    pop {r4, pc}\n    sub r2, r2, #3\n    ldrb r2, [r4, r2]\n    mov r1, #0\n    bl ov108_021E78F4\n    pop {r4, pc}\n    sub r2, r2, #2\n    ldrb r2, [r4, r2]\n    mov r1, #1\n    bl ov108_021E78F4\n    ldr r2, _021E6234 ; =0x000184DF\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #2\n    bl ov108_021E78F4\n    pop {r4, pc}\n    sub r2, r2, #2\n    ldrb r2, [r4, r2]\n    mov r1, #0\n    bl ov108_021E78F4\n    pop {r4, pc}\n    _021E6230: .word 0x000184E2\n    _021E6234: .word 0x000184DF"
    );
    #endif
}

void ov108_021E6238(void) {
    ov108_021E61E8();
}

void ov108_021E6240(void) {
    /* Original at 0x021E6240 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    cmp r0, #1\n    bne _021E6276\n    bl System_GetTouchHeld\n    cmp r0, #0\n    beq _021E6256\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _021E62A8 ; =gSystem\n    ldr r0, [r0, #0x44]\n    cmp r0, #0\n    beq _021E62A4\n    ldr r0, _021E62AC ; =0x000004C4\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _021E626A\n    add r0, r4, #0\n    blx r1\n    add r0, r4, #0\n    bl ov108_021E61E8\n    mov r0, #0\n    str r0, [r4, #0x10]\n    pop {r4, pc}\n    ldr r0, _021E62A8 ; =gSystem\n    ldr r0, [r0, #0x44]\n    cmp r0, #0\n    beq _021E6282\n    mov r0, #0\n    pop {r4, pc}\n    bl System_GetTouchHeld\n    cmp r0, #0\n    beq _021E62A4\n    ldr r0, _021E62B0 ; =0x000004C8\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _021E6296\n    add r0, r4, #0\n    blx r1\n    add r0, r4, #0\n    bl ov108_021E6238\n    mov r0, #1\n    str r0, [r4, #0x10]\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _021E62A8: .word gSystem\n    _021E62AC: .word 0x000004C4\n    _021E62B0: .word 0x000004C8"
    );
    #endif
}

void ov108_021E62B4(void) {
    /* Original at 0x021E62B4 */
    /* Requires manual decompilation - 113 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _021E63A8 ; =gSystem\n    ldr r4, [r0, #0x48]\n    mov r0, #2\n    tst r0, r4\n    beq _021E62D0\n    ldr r0, _021E63AC ; =0x000005DC\n    bl PlaySE\n    mov r0, #6\n    str r0, [r5, #0xc]\n    mov r0, #4\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    tst r0, r4\n    beq _021E62FA\n    ldr r0, _021E63B0 ; =0x000184DF\n    ldrb r0, [r5, r0]\n    cmp r0, #6\n    ldr r0, _021E63AC ; =0x000005DC\n    blo _021E62EC\n    bl PlaySE\n    mov r0, #6\n    str r0, [r5, #0xc]\n    mov r0, #4\n    pop {r3, r4, r5, r6, r7, pc}\n    bl PlaySE\n    add r0, r5, #0\n    bl ov108_021E6A58\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xf0\n    tst r0, r4\n    bne _021E6304\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E63B0 ; =0x000184DF\n    mov r1, #3\n    ldrb r6, [r5, r0]\n    add r0, r6, #0\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r7, r0, #0x18\n    add r0, r6, #0\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    cmp r6, #2\n    bhs _021E634A\n    mov r0, #0x10\n    tst r0, r4\n    beq _021E6338\n    add r0, r7, #1\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r7, r0, #0x18\n    b _021E634A\n    mov r0, #0x20\n    tst r0, r4\n    beq _021E634A\n    add r0, r7, #2\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r7, r0, #0x18\n    mov r0, #0x40\n    tst r0, r4\n    beq _021E635E\n    add r0, r6, #2\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r6, r0, #0x18\n    b _021E6370\n    mov r0, #0x80\n    tst r0, r4\n    beq _021E6370\n    add r0, r6, #1\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r6, r0, #0x18\n    lsl r0, r6, #1\n    add r0, r6, r0\n    add r1, r7, r0\n    ldr r0, _021E63B0 ; =0x000184DF\n    cmp r6, #2\n    strb r1, [r5, r0]\n    blo _021E6388\n    ldr r0, _021E63A8 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0xc0\n    tst r0, r1\n    beq _021E638E\n    ldr r0, _021E63B4 ; =0x000005E5\n    bl PlaySE\n    ldr r2, _021E63B0 ; =0x000184DF\n    add r0, r5, #0\n    ldrb r2, [r5, r2]\n    mov r1, #0\n    bl ov108_021E78F4\n    ldr r1, _021E63B0 ; =0x000184DF\n    add r0, r5, #0\n    ldrb r1, [r5, r1]\n    bl ov108_021E7CD8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E63A8: .word gSystem\n    _021E63AC: .word 0x000005DC\n    _021E63B0: .word 0x000184DF\n    _021E63B4: .word 0x000005E5"
    );
    #endif
}

void ov108_021E63B8(void) {
    /* Original at 0x021E63B8 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, _021E643C ; =ov108_021EA760\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021E63D2\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    cmp r0, #6\n    bne _021E640C\n    ldr r1, _021E6440 ; =0x0000FFFE\n    add r0, sp, #4\n    strh r1, [r0]\n    add r0, sp, #4\n    str r0, [sp]\n    ldr r3, _021E6444 ; =gSystem + 0x40\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldrh r2, [r3, #0x20]\n    ldrh r3, [r3, #0x22]\n    ldr r0, [r4, r0]\n    mov r1, #3\n    bl DoesPixelAtScreenXYMatchPtrVal\n    cmp r0, #0\n    bne _021E63FC\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _021E6448 ; =0x000005DC\n    bl PlaySE\n    mov r0, #6\n    str r0, [r4, #0xc]\n    add sp, #8\n    mov r0, #4\n    pop {r4, pc}\n    ldr r2, _021E644C ; =0x000184DF\n    mov r1, #0\n    strb r0, [r4, r2]\n    add r0, r2, #1\n    strb r1, [r4, r0]\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    bl ov108_021E78F4\n    ldr r1, _021E644C ; =0x000184DF\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov108_021E7CD8\n    ldr r0, _021E6448 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov108_021E6A58\n    mov r0, #1\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _021E643C: .word ov108_021EA760\n    _021E6440: .word 0x0000FFFE\n    _021E6444: .word gSystem + 0x40\n    _021E6448: .word 0x000005DC\n    _021E644C: .word 0x000184DF"
    );
    #endif
}

void ov108_021E6450(void) {
    /* Original at 0x021E6450 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E64B4 ; =0x000005DC\n    bl PlaySE\n    ldr r1, _021E64B8 ; =0x000184E3\n    ldrb r0, [r4, r1]\n    cmp r0, #0\n    beq _021E646C\n    add r0, r4, #0\n    bl ov108_021E6B00\n    mov r0, #1\n    pop {r4, pc}\n    sub r0, r1, #3\n    ldrb r3, [r4, r0]\n    sub r0, r1, #5\n    ldrb r2, [r4, r0]\n    mov r0, #6\n    mul r0, r2\n    add r0, r3, r0\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    add r0, r1, #5\n    mov r3, #1\n    str r3, [r4, r0]\n    sub r1, r1, #4\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    add r0, #0x1c\n    bl SafariZone_InitAreaInSet\n    ldr r0, _021E64BC ; =0x000184DF\n    mov r2, #0x7a\n    ldrb r1, [r4, r0]\n    add r0, r4, #0\n    mul r2, r1\n    add r2, r4, r2\n    ldrb r2, [r2, #0x1c]\n    bl ov108_021E7BB4\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl ov108_021E79A8\n    mov r0, #2\n    pop {r4, pc}\n    nop\n    _021E64B4: .word 0x000005DC\n    _021E64B8: .word 0x000184E3\n    _021E64BC: .word 0x000184DF"
    );
    #endif
}

void ov108_021E64C0(void) {
    /* Original at 0x021E64C0 */
    /* Requires manual decompilation - 222 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r1, _021E6694 ; =0x000184E0\n    add r5, r0, #0\n    ldrb r2, [r5, r1]\n    str r2, [sp]\n    ldr r2, _021E6698 ; =gSystem\n    ldr r7, [r2, #0x48]\n    mov r2, #2\n    tst r2, r7\n    beq _021E64E2\n    ldr r0, _021E669C ; =0x000005DC\n    bl PlaySE\n    add sp, #8\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #1\n    tst r2, r7\n    beq _021E6526\n    ldr r2, [sp]\n    cmp r2, #6\n    blo _021E64FA\n    ldr r0, _021E669C ; =0x000005DC\n    bl PlaySE\n    add sp, #8\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r2, r1, #2\n    ldrb r3, [r5, r2]\n    sub r1, r1, #1\n    mov r2, #6\n    add r4, r3, #0\n    ldrb r3, [r5, r1]\n    mov r1, #0x7a\n    mul r4, r2\n    mul r1, r3\n    add r1, r5, r1\n    ldr r2, [sp]\n    ldrb r1, [r1, #0x1c]\n    add r2, r2, r4\n    cmp r2, r1\n    bne _021E651E\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov108_021E6450\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xf0\n    tst r0, r7\n    bne _021E6532\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r6, r0, #0x18\n    ldr r0, [sp]\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x10\n    tst r0, r7\n    beq _021E65B6\n    cmp r4, #2\n    bhs _021E65B6\n    cmp r6, #2\n    bne _021E65A8\n    cmp r4, #0\n    bne _021E6576\n    mov r0, #1\n    eor r0, r4\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #1\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r6, r0, #0x18\n    b _021E6644\n    cmp r4, #2\n    bhs _021E6644\n    ldr r1, _021E66A0 ; =0x000184DE\n    ldrb r0, [r5, r1]\n    cmp r0, #1\n    bhs _021E6644\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r1, #4\n    ldrb r2, [r5, r0]\n    mov r0, #2\n    bic r2, r0\n    add r0, r1, #4\n    strb r2, [r5, r0]\n    ldr r0, [sp, #4]\n    mov r1, #3\n    eor r0, r4\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #1\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r6, r0, #0x18\n    b _021E6644\n    add r0, r6, #1\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r6, r0, #0x18\n    b _021E6644\n    mov r0, #0x20\n    tst r0, r7\n    beq _021E661E\n    cmp r4, #2\n    bhs _021E661E\n    cmp r6, #0\n    bne _021E6610\n    cmp r4, #1\n    bne _021E65DE\n    mov r0, #1\n    eor r0, r4\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #2\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r6, r0, #0x18\n    b _021E6644\n    cmp r4, #2\n    bhs _021E6644\n    ldr r1, _021E66A0 ; =0x000184DE\n    ldrb r0, [r5, r1]\n    cmp r0, #0\n    beq _021E6644\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r1, #4\n    ldrb r2, [r5, r0]\n    mov r0, #2\n    orr r2, r0\n    add r0, r1, #4\n    strb r2, [r5, r0]\n    ldr r0, [sp, #4]\n    mov r1, #3\n    eor r0, r4\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #2\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r6, r0, #0x18\n    b _021E6644\n    add r0, r6, #2\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r6, r0, #0x18\n    b _021E6644\n    mov r0, #0x40\n    tst r0, r7\n    beq _021E6632\n    add r0, r4, #2\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r4, r0, #0x18\n    b _021E6644\n    mov r0, #0x80\n    tst r0, r7\n    beq _021E6644\n    add r0, r4, #1\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r4, r0, #0x18\n    lsl r0, r4, #1\n    add r0, r4, r0\n    ldr r2, _021E6694 ; =0x000184E0\n    add r0, r6, r0\n    strb r0, [r5, r2]\n    ldrb r2, [r5, r2]\n    add r0, r5, #0\n    mov r1, #1\n    bl ov108_021E78F4\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _021E6676\n    ldr r0, _021E66A4 ; =0x000005E1\n    bl PlaySE\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl ov108_021E78C0\n    add sp, #8\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E6694 ; =0x000184E0\n    ldrb r1, [r5, r0]\n    ldr r0, [sp]\n    cmp r0, r1\n    beq _021E6686\n    ldr r0, _021E66A8 ; =0x000005E5\n    bl PlaySE\n    add r0, r5, #0\n    bl ov108_021E7EB0\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E6694: .word 0x000184E0\n    _021E6698: .word gSystem\n    _021E669C: .word 0x000005DC\n    _021E66A0: .word 0x000184DE\n    _021E66A4: .word 0x000005E1\n    _021E66A8: .word 0x000005E5"
    );
    #endif
}

void ov108_021E66AC(void) {
    /* Original at 0x021E66AC */
    /* Requires manual decompilation - 151 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, _021E67E8 ; =ov108_021EA7D0\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021E66C6\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    cmp r0, #6\n    beq _021E66D4\n    cmp r0, #7\n    beq _021E670C\n    cmp r0, #8\n    beq _021E675A\n    b _021E67A6\n    ldr r1, _021E67EC ; =0x0000FFFE\n    add r0, sp, #4\n    strh r1, [r0]\n    add r0, sp, #4\n    str r0, [sp]\n    ldr r3, _021E67F0 ; =gSystem + 0x40\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldrh r2, [r3, #0x20]\n    ldrh r3, [r3, #0x22]\n    ldr r0, [r4, r0]\n    mov r1, #3\n    bl DoesPixelAtScreenXYMatchPtrVal\n    cmp r0, #0\n    bne _021E66FA\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _021E67F4 ; =0x000184E0\n    mov r1, #6\n    strb r1, [r4, r0]\n    ldr r0, _021E67F8 ; =0x000005DC\n    bl PlaySE\n    add sp, #8\n    mov r0, #2\n    pop {r4, pc}\n    ldr r1, _021E67FC ; =0x000184DE\n    ldrb r0, [r4, r1]\n    cmp r0, #0\n    bne _021E671A\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r1, #4\n    ldrb r2, [r4, r0]\n    mov r0, #2\n    orr r2, r0\n    add r0, r1, #4\n    strb r2, [r4, r0]\n    add r0, r1, #2\n    mov r2, #5\n    strb r2, [r4, r0]\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl ov108_021E78C0\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_ResetAnimCtrlState\n    ldr r0, _021E6800 ; =0x000005E1\n    bl PlaySE\n    add sp, #8\n    mov r0, #3\n    pop {r4, pc}\n    ldr r1, _021E67FC ; =0x000184DE\n    ldrb r0, [r4, r1]\n    cmp r0, #1\n    bne _021E6768\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r1, #4\n    ldrb r2, [r4, r0]\n    mov r0, #2\n    bic r2, r0\n    add r0, r1, #4\n    strb r2, [r4, r0]\n    mov r2, #0\n    add r0, r1, #2\n    strb r2, [r4, r0]\n    add r0, r4, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl ov108_021E78C0\n    mov r0, #0xda\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0xda\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_ResetAnimCtrlState\n    ldr r0, _021E6800 ; =0x000005E1\n    bl PlaySE\n    add sp, #8\n    mov r0, #3\n    pop {r4, pc}\n    ldr r2, _021E67F4 ; =0x000184E0\n    mov r1, #1\n    strb r0, [r4, r2]\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    bl ov108_021E78F4\n    add r0, r4, #0\n    bl ov108_021E7EB0\n    ldr r1, _021E67F4 ; =0x000184E0\n    sub r0, r1, #2\n    ldrb r2, [r4, r0]\n    ldrb r3, [r4, r1]\n    mov r0, #6\n    mul r0, r2\n    sub r1, r1, #1\n    ldrb r2, [r4, r1]\n    mov r1, #0x7a\n    add r0, r3, r0\n    mul r1, r2\n    add r1, r4, r1\n    ldrb r1, [r1, #0x1c]\n    cmp r0, r1\n    bne _021E67DE\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov108_021E6450\n    add sp, #8\n    pop {r4, pc}\n    _021E67E8: .word ov108_021EA7D0\n    _021E67EC: .word 0x0000FFFE\n    _021E67F0: .word gSystem + 0x40\n    _021E67F4: .word 0x000184E0\n    _021E67F8: .word 0x000005DC\n    _021E67FC: .word 0x000184DE\n    _021E6800: .word 0x000005E1"
    );
    #endif
}

void ov108_021E6804(void) {
    /* Original at 0x021E6804 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _021E6848 ; =0x000184E2\n    add r4, r0, #0\n    ldrb r3, [r4, r2]\n    mov r1, #0xf8\n    bic r3, r1\n    mov r1, #0x10\n    orr r1, r3\n    strb r1, [r4, r2]\n    sub r2, r2, #2\n    ldrb r2, [r4, r2]\n    mov r1, #0\n    bl ov108_021E78F4\n    mov r0, #0xd5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl thunk_Sprite_SetPriority\n    ldr r2, _021E684C ; =0x000184DF\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #3\n    bl ov108_021E78F4\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #2\n    mov r3, #1\n    bl ov108_021E7700\n    pop {r4, pc}\n    nop\n    _021E6848: .word 0x000184E2\n    _021E684C: .word 0x000184DF"
    );
    #endif
}

void ov108_021E6850(void) {
    /* Original at 0x021E6850 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _021E6890 ; =0x000184E2\n    add r4, r0, #0\n    ldrb r3, [r4, r2]\n    mov r1, #0xf8\n    bic r3, r1\n    strb r3, [r4, r2]\n    sub r2, r2, #3\n    ldrb r2, [r4, r2]\n    mov r1, #0\n    bl ov108_021E78F4\n    mov r0, #0xd5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #2\n    bl thunk_Sprite_SetPriority\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl ov108_021E78C0\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #1\n    bl ov108_021E7700\n    pop {r4, pc}\n    nop\n    _021E6890: .word 0x000184E2"
    );
    #endif
}

void ov108_021E6894(void) {
    /* Original at 0x021E6894 */
    /* Requires manual decompilation - 116 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r1, _021E698C ; =gSystem\n    add r5, r0, #0\n    ldr r4, [r1, #0x48]\n    mov r1, #2\n    tst r1, r4\n    beq _021E68B4\n    bl ov108_021E6850\n    mov r0, #2\n    str r0, [r5, #0xc]\n    ldr r0, _021E6990 ; =0x000005DC\n    bl PlaySE\n    mov r0, #4\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    tst r0, r4\n    beq _021E68E8\n    ldr r0, _021E6994 ; =0x000184E0\n    ldrb r1, [r5, r0]\n    cmp r1, #6\n    bhs _021E68CA\n    sub r0, r0, #1\n    ldrb r0, [r5, r0]\n    cmp r0, r1\n    bne _021E68DE\n    add r0, r5, #0\n    bl ov108_021E6850\n    mov r0, #2\n    str r0, [r5, #0xc]\n    ldr r0, _021E6990 ; =0x000005DC\n    bl PlaySE\n    mov r0, #4\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E6998 ; =0x0000069C\n    bl PlaySE\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xf0\n    tst r0, r4\n    bne _021E68F2\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E6994 ; =0x000184E0\n    mov r1, #3\n    ldrb r6, [r5, r0]\n    add r0, r6, #0\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r7, r0, #0x18\n    add r0, r6, #0\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    cmp r6, #2\n    bhs _021E6938\n    mov r0, #0x10\n    tst r0, r4\n    beq _021E6926\n    add r0, r7, #1\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r7, r0, #0x18\n    b _021E6938\n    mov r0, #0x20\n    tst r0, r4\n    beq _021E6938\n    add r0, r7, #2\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r7, r0, #0x18\n    mov r0, #0x40\n    tst r0, r4\n    beq _021E694C\n    add r0, r6, #2\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r6, r0, #0x18\n    b _021E695E\n    mov r0, #0x80\n    tst r0, r4\n    beq _021E695E\n    add r0, r6, #1\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r6, r0, #0x18\n    lsl r0, r6, #1\n    add r0, r6, r0\n    add r1, r7, r0\n    ldr r0, _021E6994 ; =0x000184E0\n    cmp r6, #2\n    strb r1, [r5, r0]\n    blo _021E6976\n    ldr r0, _021E698C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0xc0\n    tst r0, r1\n    beq _021E697C\n    ldr r0, _021E699C ; =0x000005E5\n    bl PlaySE\n    ldr r2, _021E6994 ; =0x000184E0\n    add r0, r5, #0\n    ldrb r2, [r5, r2]\n    mov r1, #0\n    bl ov108_021E78F4\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E698C: .word gSystem\n    _021E6990: .word 0x000005DC\n    _021E6994: .word 0x000184E0\n    _021E6998: .word 0x0000069C\n    _021E699C: .word 0x000005E5"
    );
    #endif
}

void ov108_021E69A0(void) {
    /* Original at 0x021E69A0 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, _021E6A3C ; =ov108_021EA760\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021E69BA\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    cmp r0, #6\n    bne _021E6A00\n    ldr r1, _021E6A40 ; =0x0000FFFE\n    add r0, sp, #4\n    strh r1, [r0]\n    add r0, sp, #4\n    str r0, [sp]\n    ldr r3, _021E6A44 ; =gSystem + 0x40\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldrh r2, [r3, #0x20]\n    ldrh r3, [r3, #0x22]\n    ldr r0, [r4, r0]\n    mov r1, #3\n    bl DoesPixelAtScreenXYMatchPtrVal\n    cmp r0, #0\n    bne _021E69E4\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _021E6A48 ; =0x000184E0\n    mov r1, #6\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    bl ov108_021E6850\n    mov r0, #2\n    str r0, [r4, #0xc]\n    ldr r0, _021E6A4C ; =0x000005DC\n    bl PlaySE\n    add sp, #8\n    mov r0, #4\n    pop {r4, pc}\n    ldr r2, _021E6A50 ; =0x000184DF\n    ldrb r1, [r4, r2]\n    cmp r1, r0\n    bne _021E6A1E\n    add r0, r4, #0\n    bl ov108_021E6850\n    mov r0, #2\n    str r0, [r4, #0xc]\n    ldr r0, _021E6A4C ; =0x000005DC\n    bl PlaySE\n    add sp, #8\n    mov r0, #4\n    pop {r4, pc}\n    add r1, r2, #1\n    strb r0, [r4, r1]\n    add r2, r2, #1\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov108_021E78F4\n    ldr r0, _021E6A54 ; =0x0000069C\n    bl PlaySE\n    mov r0, #3\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _021E6A3C: .word ov108_021EA760\n    _021E6A40: .word 0x0000FFFE\n    _021E6A44: .word gSystem + 0x40\n    _021E6A48: .word 0x000184E0\n    _021E6A4C: .word 0x000005DC\n    _021E6A50: .word 0x000184DF\n    _021E6A54: .word 0x0000069C"
    );
    #endif
}

void ov108_021E6A58(void) {
    /* Original at 0x021E6A58 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r4, r0, #0\n    add r0, sp, #0xc\n    mov r1, #0\n    mov r2, #0x18\n    bl MI_CpuFill8\n    ldr r0, _021E6AE8 ; =_021EA720\n    add r2, sp, #0xc\n    ldrh r3, [r0, #0xc]\n    ldr r5, _021E6AEC ; =ov108_021EA748\n    add r1, sp, #0xc\n    strh r3, [r2]\n    ldrh r3, [r0, #0xe]\n    strh r3, [r2, #2]\n    ldrh r3, [r0, #0x10]\n    strh r3, [r2, #4]\n    ldrh r3, [r0, #0x12]\n    strh r3, [r2, #6]\n    ldrh r3, [r0, #0x14]\n    ldrh r0, [r0, #0x16]\n    strh r3, [r2, #8]\n    strh r0, [r2, #0xa]\n    ldr r0, _021E6AF0 ; =0x000004B4\n    ldr r0, [r4, r0]\n    str r0, [sp, #0x18]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r3, [r4, r0]\n    add r0, r0, #4\n    str r3, [sp, #0x1c]\n    mov r3, #3\n    strb r3, [r2, #0x14]\n    ldr r2, _021E6AF4 ; =0x000184DF\n    ldrb r2, [r4, r2]\n    lsl r3, r2, #2\n    ldr r2, _021E6AF8 ; =ov108_021EA74A\n    ldrh r2, [r2, r3]\n    ldrh r3, [r5, r3]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    str r2, [sp]\n    mov r2, #0\n    str r2, [sp, #4]\n    str r2, [sp, #8]\n    ldr r2, [r4, #0x10]\n    lsl r3, r3, #0x18\n    lsl r2, r2, #0x18\n    ldr r0, [r4, r0]\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl TouchscreenListMenu_Create\n    ldr r1, _021E6AFC ; =0x000004BC\n    ldr r2, _021E6AF4 ; =0x000184DF\n    str r0, [r4, r1]\n    mov r1, #1\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl ov108_021E79A8\n    ldr r2, _021E6AF4 ; =0x000184DF\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #4\n    mov r3, #1\n    bl ov108_021E79A8\n    add sp, #0x24\n    pop {r4, r5, pc}\n    _021E6AE8: .word _021EA720\n    _021E6AEC: .word ov108_021EA748\n    _021E6AF0: .word 0x000004B4\n    _021E6AF4: .word 0x000184DF\n    _021E6AF8: .word ov108_021EA74A\n    _021E6AFC: .word 0x000004BC"
    );
    #endif
}

void ov108_021E6B00(void) {
    /* Original at 0x021E6B00 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    add r0, #0x39\n    str r1, [sp]\n    mov r1, #0\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r1, [sp, #4]\n    str r0, [sp, #0xc]\n    mov r0, #0x1a\n    add r2, sp, #0\n    strb r0, [r2, #0x10]\n    mov r0, #0x10\n    strb r0, [r2, #0x11]\n    ldrb r0, [r2, #0x12]\n    mov r1, #0xf\n    bic r0, r1\n    ldr r1, [r4, #0x10]\n    lsl r1, r1, #0x18\n    lsr r3, r1, #0x18\n    mov r1, #0xf\n    and r1, r3\n    orr r0, r1\n    strb r0, [r2, #0x12]\n    ldrb r1, [r2, #0x12]\n    mov r0, #0xf0\n    bic r1, r0\n    mov r0, #0x13\n    strb r1, [r2, #0x12]\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    ldr r2, _021E6B98 ; =0x000184E0\n    mov r1, #1\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl ov108_021E79A8\n    ldr r3, _021E6B9C ; =0x000184DF\n    add r0, r4, #0\n    add r2, r3, #1\n    ldrb r1, [r4, r3]\n    sub r3, r3, #1\n    ldrb r5, [r4, r3]\n    mov r3, #6\n    ldrb r2, [r4, r2]\n    mul r3, r5\n    add r2, r2, r3\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    bl ov108_021E7BB4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov108_021E767C\n    mov r1, #1\n    add r0, r4, #0\n    mov r2, #3\n    add r3, r1, #0\n    bl ov108_021E7700\n    add sp, #0x14\n    pop {r4, r5, pc}\n    _021E6B98: .word 0x000184E0\n    _021E6B9C: .word 0x000184DF"
    );
    #endif
}

void ov108_021E6BA0(void) {
    /* Original at 0x021E6BA0 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov108_021E8490\n    ldr r3, _021E6C34 ; =0x000184E2\n    ldrb r0, [r4, r3]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _021E6C16\n    mov r0, #0xd\n    add r3, r3, #2\n    lsl r0, r0, #6\n    ldrsh r3, [r4, r3]\n    ldr r0, [r4, r0]\n    mov r1, #1\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    ldr r3, _021E6C38 ; =0x000184E4\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldrsh r3, [r4, r3]\n    ldr r0, [r4, r0]\n    mov r1, #2\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    ldr r3, _021E6C3C ; =0x000184E6\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldrsh r3, [r4, r3]\n    ldr r0, [r4, r0]\n    mov r1, #4\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    ldr r3, _021E6C3C ; =0x000184E6\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldrsh r3, [r4, r3]\n    ldr r0, [r4, r0]\n    mov r1, #6\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    ldr r3, _021E6C3C ; =0x000184E6\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldrsh r3, [r4, r3]\n    ldr r0, [r4, r0]\n    mov r1, #5\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    ldr r1, _021E6C34 ; =0x000184E2\n    mov r0, #1\n    ldrb r2, [r4, r1]\n    bic r2, r0\n    strb r2, [r4, r1]\n    bl GF_RunVramTransferTasks\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl DoScheduledBgGpuUpdates\n    ldr r3, _021E6C40 ; =0x027E0000\n    ldr r1, _021E6C44 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    nop\n    _021E6C34: .word 0x000184E2\n    _021E6C38: .word 0x000184E4\n    _021E6C3C: .word 0x000184E6\n    _021E6C40: .word 0x027E0000\n    _021E6C44: .word 0x00003FF8"
    );
    #endif
}

void ov108_021E6C48(void) {
    GfGfx_SetBanks(5);
}

void ov108_021E6C68(void) {
    /* Original at 0x021E6C68 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xf4\n    add r5, r0, #0\n    bl ov108_021E6C48\n    ldr r2, _021E6D0C ; =0x04000304\n    ldr r0, _021E6D10 ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    ldr r0, [r5]\n    bl BgConfig_Alloc\n    mov r1, #0xd\n    lsl r1, r1, #6\n    add r3, sp, #4\n    ldr r4, _021E6D14 ; =ov108_021EA738\n    str r0, [r5, r1]\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r4, _021E6D18 ; =ov108_021EA898\n    add r3, sp, #0x14\n    mov r2, #0x1c\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021E6CA2\n    mov r4, #0\n    add r7, r4, #0\n    add r6, sp, #0x14\n    mov r0, #0xd\n    lsl r0, r0, #6\n    lsl r1, r4, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    add r2, r6, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #0xd\n    lsl r0, r0, #6\n    lsl r1, r4, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    bl BgClearTilemapBufferAndCommit\n    lsl r0, r4, #0x18\n    ldr r3, [r5]\n    lsr r0, r0, #0x18\n    mov r1, #0x40\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    add r7, r7, #1\n    add r4, r4, #1\n    add r6, #0x1c\n    cmp r7, #8\n    blt _021E6CB0\n    mov r0, #4\n    str r0, [sp]\n    mov r2, #0x1c\n    ldr r0, _021E6D1C ; =0x04000050\n    mov r1, #2\n    add r3, r2, #0\n    bl G2x_SetBlendAlpha_\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, _021E6D20 ; =0x04001050\n    mov r1, #1\n    mov r2, #0x1e\n    mov r3, #0x1c\n    bl G2x_SetBlendAlpha_\n    add sp, #0xf4\n    pop {r4, r5, r6, r7, pc}\n    _021E6D0C: .word 0x04000304\n    _021E6D10: .word 0xFFFF7FFF\n    _021E6D14: .word ov108_021EA738\n    _021E6D18: .word ov108_021EA898\n    _021E6D1C: .word 0x04000050\n    _021E6D20: .word 0x04001050"
    );
    #endif
}

void ov108_021E6D24(void) {
    /* Original at 0x021E6D24 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    mov r1, #0\n    add r5, r0, #0\n    ldr r0, _021E6D74 ; =0x04000050\n    add r2, r1, #0\n    mov r3, #0x1f\n    str r1, [sp]\n    bl G2x_SetBlendAlpha_\n    mov r1, #0\n    ldr r0, _021E6D78 ; =0x04001050\n    add r2, r1, #0\n    mov r3, #0x1f\n    str r1, [sp]\n    bl G2x_SetBlendAlpha_\n    mov r6, #0xd\n    mov r4, #0\n    lsl r6, r6, #6\n    lsl r1, r4, #0x18\n    ldr r0, [r5, r6]\n    lsr r1, r1, #0x18\n    bl FreeBgTilemapBuffer\n    add r4, r4, #1\n    cmp r4, #8\n    blt _021E6D4C\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    ldr r2, _021E6D7C ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _021E6D74: .word 0x04000050\n    _021E6D78: .word 0x04001050\n    _021E6D7C: .word 0x04000304"
    );
    #endif
}

void ov108_021E6D80(void) {
    /* Original at 0x021E6D80 */
    /* Requires manual decompilation - 213 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0xa6\n    bl NARC_New\n    add r4, r0, #0\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r1, [r5]\n    add r2, r4, #0\n    mov r3, #0xa6\n    bl BgConfig_LoadAssetFromOpenNarc\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r1, [r5]\n    add r2, r4, #0\n    mov r3, #0xa6\n    bl BgConfig_LoadAssetFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #7\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r1, [r5]\n    add r2, r4, #0\n    mov r3, #0xa6\n    bl BgConfig_LoadAssetFromOpenNarc\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r1, [r5]\n    add r2, r4, #0\n    mov r3, #0xa6\n    bl BgConfig_LoadAssetFromOpenNarc\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #7\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r0, #0xd\n    str r1, [sp, #0x10]\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r1, [r5]\n    add r2, r4, #0\n    mov r3, #0xa6\n    bl BgConfig_LoadAssetFromOpenNarc\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r1, [r5]\n    add r2, r4, #0\n    mov r3, #0xa6\n    bl BgConfig_LoadAssetFromOpenNarc\n    mov r0, #7\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r1, [r5]\n    add r2, r4, #0\n    mov r3, #0xa6\n    bl BgConfig_LoadAssetFromOpenNarc\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r1, [r5]\n    add r2, r4, #0\n    mov r3, #0xa6\n    bl BgConfig_LoadAssetFromOpenNarc\n    ldr r0, _021E6F4C ; =0x000184E3\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    bne _021E6EA4\n    mov r0, #1\n    b _021E6EA6\n    mov r0, #0\n    add r0, r0, #2\n    str r0, [sp]\n    mov r0, #7\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r1, [r5]\n    add r2, r4, #0\n    mov r3, #0xa6\n    bl BgConfig_LoadAssetFromOpenNarc\n    ldr r0, [r5]\n    ldr r3, _021E6F50 ; =0x000004D8\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #0\n    add r3, r5, r3\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    mov r3, #0x4d\n    lsl r3, r3, #4\n    str r0, [r5, r3]\n    ldr r0, [r5]\n    add r3, r3, #4\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #9\n    mov r2, #0\n    add r3, r5, r3\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    ldr r1, _021E6F54 ; =0x000004CC\n    str r0, [r5, r1]\n    add r0, r4, #0\n    bl NARC_Delete\n    add r0, r5, #0\n    bl ov108_021E7ADC\n    add r0, r5, #0\n    mov r1, #0xff\n    mov r2, #0\n    bl ov108_021E7BB4\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #7\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x14\n    pop {r4, r5, pc}\n    _021E6F4C: .word 0x000184E3\n    _021E6F50: .word 0x000004D8\n    _021E6F54: .word 0x000004CC"
    );
    #endif
}

void ov108_021E6F58(void) {
    /* Original at 0x021E6F58 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x4d\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    ldr r0, _021E6F70 ; =0x000004CC\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    pop {r4, pc}\n    _021E6F70: .word 0x000004CC"
    );
    #endif
}

void ov108_021E6F74(void) {
    /* Original at 0x021E6F74 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #4\n    bl FontID_Alloc\n    ldr r2, _021E7010 ; =0x000001AD\n    ldr r3, [r5]\n    mov r0, #0\n    mov r1, #0x1b\n    bl NewMsgDataFromNarc\n    mov r1, #0xc1\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r2, [r5]\n    mov r0, #1\n    mov r1, #0x11\n    bl MessageFormat_New_Custom\n    mov r1, #0xc2\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r1, [r5]\n    mov r0, #0x51\n    bl String_New\n    mov r1, #0xc3\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, #8\n    ldr r0, [r5, r1]\n    mov r1, #9\n    bl NewString_ReadMsgData\n    mov r1, #0xcd\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, #0x30\n    ldr r0, [r5, r1]\n    mov r1, #0xf\n    bl NewString_ReadMsgData\n    mov r1, #0xce\n    lsl r1, r1, #2\n    add r7, r1, #0\n    str r0, [r5, r1]\n    mov r4, #0\n    add r6, r5, #0\n    sub r7, #0x28\n    mov r0, #0xc1\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #4\n    bl NewString_ReadMsgData\n    str r0, [r6, r7]\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #5\n    blt _021E6FD8\n    mov r7, #0xc9\n    mov r4, #0\n    add r6, r5, #0\n    lsl r7, r7, #2\n    mov r0, #0xc1\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl NewString_ReadMsgData\n    str r0, [r6, r7]\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #4\n    blt _021E6FF6\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E7010: .word 0x000001AD"
    );
    #endif
}

void ov108_021E7014(void) {
    /* Original at 0x021E7014 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r7, #0xc9\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r5, r7]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021E7020\n    mov r7, #0x31\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #4\n    ldr r0, [r4, r7]\n    bl String_Delete\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #5\n    blt _021E7036\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl String_Delete\n    mov r0, #0xcd\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl String_Delete\n    mov r0, #0xc3\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl String_Delete\n    mov r0, #0xc2\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl MessageFormat_Delete\n    mov r0, #0xc1\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl DestroyMsgData\n    mov r0, #4\n    bl FontID_Release\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov108_021E7080(void) {
    /* Original at 0x021E7080 */
    /* Requires manual decompilation - 167 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r7, r0, #0\n    mov r0, #0xed\n    lsl r0, r0, #2\n    ldr r4, _021E71D8 ; =ov108_021EA7A8\n    mov r6, #0\n    add r5, r7, r0\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r7, r0]\n    add r1, r5, #0\n    add r2, r4, #0\n    bl AddWindow\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r6, r6, #1\n    add r4, #8\n    add r5, #0x10\n    cmp r6, #4\n    ble _021E7090\n    mov r0, #5\n    str r0, [sp, #0x24]\n    mov r0, #1\n    ldr r4, _021E71DC ; =0x000003A6\n    str r0, [sp, #0x20]\n    add r0, r4, #0\n    add r0, #0xe\n    mov r5, #0\n    add r6, r7, r0\n    ldr r0, [sp, #0x20]\n    mov r2, #7\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x28]\n    asr r0, r5, #1\n    lsr r0, r0, #0x1e\n    add r0, r5, r0\n    asr r1, r0, #2\n    mov r0, #1\n    eor r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    lsl r0, r0, #1\n    add r0, r0, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov r1, #0x16\n    mul r1, r0\n    str r1, [sp, #0x1c]\n    sub r4, r4, r1\n    ldr r1, [sp, #0x24]\n    mov r3, #1\n    lsl r1, r1, #4\n    str r1, [sp, #0x2c]\n    ldr r1, [sp, #0x28]\n    str r1, [sp]\n    mov r1, #0x16\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #5\n    str r0, [sp, #0xc]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r1, [sp, #0x2c]\n    ldr r0, [r7, r0]\n    add r1, r6, r1\n    bl AddWindowParameterized\n    lsr r2, r5, #0x1f\n    lsl r1, r5, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    lsl r1, r0, #2\n    ldr r0, _021E71E0 ; =ov108_021EA724\n    ldr r0, [r0, r1]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #0x2c]\n    lsl r1, r1, #0x18\n    add r0, r6, r0\n    lsr r1, r1, #0x18\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x28]\n    sub r4, r4, r0\n    ldr r0, [sp, #0x24]\n    mov r2, #7\n    add r0, r0, #1\n    lsl r0, r0, #4\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x18]\n    mov r3, #0x1a\n    add r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #5\n    str r0, [sp, #0xc]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r1, [sp, #0x30]\n    ldr r0, [r7, r0]\n    add r1, r6, r1\n    bl AddWindowParameterized\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #0x30]\n    lsl r1, r1, #0x18\n    add r0, r6, r0\n    lsr r1, r1, #0x18\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x24]\n    add r5, r5, #1\n    add r0, r0, #2\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x20]\n    sub r4, #0xa\n    add r0, r0, #4\n    str r0, [sp, #0x20]\n    cmp r5, #5\n    blt _021E70C2\n    ldr r0, _021E71E4 ; =0x000004A4\n    add r0, r7, r0\n    bl InitWindow\n    ldr r1, _021E71E8 ; =0x000002E1\n    mov r0, #0\n    str r1, [sp]\n    add r1, #0x5f\n    str r0, [sp, #4]\n    ldr r0, [r7, r1]\n    ldr r1, _021E71E4 ; =0x000004A4\n    mov r2, #6\n    add r1, r7, r1\n    mov r3, #2\n    bl AddTextWindowTopLeftCorner\n    ldr r0, _021E71E4 ; =0x000004A4\n    mov r1, #0\n    add r0, r7, r0\n    bl FillWindowPixelBufferText_AssumeTileSize32\n    ldr r0, [r7]\n    bl YesNoPrompt_Create\n    mov r1, #0x13\n    lsl r1, r1, #6\n    str r0, [r7, r1]\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E71D8: .word ov108_021EA7A8\n    _021E71DC: .word 0x000003A6\n    _021E71E0: .word ov108_021EA724\n    _021E71E4: .word 0x000004A4\n    _021E71E8: .word 0x000002E1"
    );
    #endif
}

void ov108_021E71EC(void) {
    /* Original at 0x021E71EC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x13\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    ldr r0, _021E7220 ; =0x000004A4\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0xed\n    lsl r0, r0, #2\n    mov r4, #0\n    add r5, r5, r0\n    add r0, r5, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0xf\n    blt _021E720A\n    pop {r3, r4, r5, pc}\n    _021E7220: .word 0x000004A4"
    );
    #endif
}

void ov108_021E7224(void) {
    /* Original at 0x021E7224 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4]\n    mov r0, #3\n    bl ListMenuItems_New\n    ldr r1, _021E729C ; =0x000004B4\n    str r0, [r4, r1]\n    ldr r1, [r4]\n    mov r0, #2\n    bl ListMenuItems_New\n    ldr r1, _021E72A0 ; =0x000004B8\n    mov r2, #7\n    str r0, [r4, r1]\n    sub r0, r1, #4\n    mov r1, #0xc1\n    lsl r1, r1, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    mov r3, #0\n    bl ListMenuItems_AppendFromMsgData\n    ldr r0, _021E729C ; =0x000004B4\n    mov r1, #0xc1\n    lsl r1, r1, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #1\n    bl ListMenuItems_AppendFromMsgData\n    ldr r0, _021E729C ; =0x000004B4\n    mov r1, #0xc1\n    lsl r1, r1, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    mov r2, #6\n    mov r3, #2\n    bl ListMenuItems_AppendFromMsgData\n    ldr r0, _021E72A0 ; =0x000004B8\n    mov r1, #0xc1\n    lsl r1, r1, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    mov r2, #5\n    mov r3, #0\n    bl ListMenuItems_AppendFromMsgData\n    ldr r0, _021E72A0 ; =0x000004B8\n    mov r1, #0xc1\n    lsl r1, r1, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    mov r2, #6\n    mov r3, #1\n    bl ListMenuItems_AppendFromMsgData\n    pop {r4, pc}\n    _021E729C: .word 0x000004B4\n    _021E72A0: .word 0x000004B8"
    );
    #endif
}

void ov108_021E72A4(void) {
    /* Original at 0x021E72A4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E72C4 ; =0x000004B8\n    ldr r0, [r4, r0]\n    bl ListMenuItems_Delete\n    ldr r0, _021E72C8 ; =0x000004B4\n    ldr r0, [r4, r0]\n    bl ListMenuItems_Delete\n    ldr r0, _021E72C8 ; =0x000004B4\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    pop {r4, pc}\n    _021E72C4: .word 0x000004B8\n    _021E72C8: .word 0x000004B4"
    );
    #endif
}

void ov108_021E72CC(void) {
    /* Original at 0x021E72CC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov108_021E838C\n    ldr r0, [r4]\n    mov r1, #0xc\n    mov r2, #1\n    mov r3, #2\n    bl ov108_021E84A4\n    mov r1, #0xd2\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov108_021E83F0\n    ldr r0, [r4]\n    mov r1, #0\n    bl TouchscreenListMenuSpawner_Create\n    mov r1, #0xd1\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r1, [r4]\n    mov r0, #1\n    bl FontSystem_NewInit\n    mov r1, #0xe7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E730C(void) {
    /* Original at 0x021E730C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_020135AC\n    mov r0, #0xd1\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl TouchscreenListMenuSpawner_Destroy\n    add r0, r4, #0\n    bl ov108_021E844C\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov108_021E84DC\n    add r0, r4, #0\n    bl ov108_021E83C8\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E733C(void) {
    /* Original at 0x021E733C */
    /* Requires manual decompilation - 207 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r4, #0\n    add r7, r5, #0\n    add r6, r5, #0\n    add r0, r4, #0\n    mov r1, #3\n    bl _s32_div_f\n    str r1, [sp, #0x10]\n    add r0, r4, #0\n    mov r1, #3\n    bl _s32_div_f\n    add r3, r0, #0\n    mov r0, #0x80\n    str r0, [sp]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldrb r0, [r7, #0x1c]\n    ldr r2, [sp, #0x10]\n    mov r1, #0x48\n    mul r1, r2\n    str r0, [sp, #8]\n    mov r0, #1\n    mov r2, #0x48\n    mul r2, r3\n    str r0, [sp, #0xc]\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    add r1, #0x38\n    add r2, #0x38\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    mov r3, #2\n    bl ov108_021E8540\n    mov r1, #0xdb\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    add r4, r4, #1\n    add r7, #0x7a\n    add r6, r6, #4\n    cmp r4, #6\n    blt _021E7348\n    mov r4, #0\n    add r6, r5, #0\n    add r0, r4, #0\n    mov r1, #3\n    bl _s32_div_f\n    add r7, r1, #0\n    add r0, r4, #0\n    mov r1, #3\n    bl _s32_div_f\n    add r2, r0, #0\n    mov r0, #0x80\n    str r0, [sp]\n    add r0, r4, #6\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, _021E74FC ; =0x000184DE\n    mov r3, #0x48\n    ldrb r1, [r5, r0]\n    mov r0, #6\n    mul r3, r2\n    mul r0, r1\n    add r0, r4, r0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #1\n    mov r1, #0x50\n    str r0, [sp, #0xc]\n    mov r0, #0xd2\n    mul r1, r7\n    lsl r0, r0, #2\n    add r1, #0x30\n    add r3, #0x38\n    lsl r2, r3, #0x10\n    lsl r1, r1, #0x10\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    mov r3, #3\n    bl ov108_021E8540\n    mov r1, #0xe1\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #6\n    blt _021E73A4\n    sub r1, #0x38\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    ldr r2, _021E7500 ; =ov108_021EA7F8\n    bl SpriteSystem_CreateSpriteFromResourceHeader\n    mov r1, #0xd5\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r0, #8\n    sub r1, r1, #4\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, _021E7500 ; =ov108_021EA7F8\n    bl SpriteSystem_CreateSpriteFromResourceHeader\n    mov r1, #0xd6\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r0, #0xc\n    sub r1, #8\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, _021E7500 ; =ov108_021EA7F8\n    bl SpriteSystem_CreateSpriteFromResourceHeader\n    mov r1, #0x36\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r0, #0x14\n    sub r1, #0x10\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, _021E7504 ; =ov108_021EA820\n    bl SpriteSystem_CreateSpriteFromResourceHeader\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r0, #0x10\n    sub r1, #0xc\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, _021E7508 ; =ov108_021EA848\n    bl SpriteSystem_CreateSpriteFromResourceHeader\n    mov r1, #0xd9\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r0, #0x18\n    sub r1, #0x14\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, _021E750C ; =ov108_021EA870\n    bl SpriteSystem_CreateSpriteFromResourceHeader\n    mov r1, #0xda\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, #0x10\n    ldr r0, [r5, r1]\n    mov r1, #3\n    bl thunk_Sprite_SetPriority\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl thunk_Sprite_SetPriority\n    mov r0, #0xda\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl thunk_Sprite_SetPriority\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl thunk_Sprite_SetPriority\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #5\n    bl thunk_Sprite_SetDrawPriority\n    mov r0, #0xd5\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl thunk_Sprite_SetDrawFlag\n    mov r0, #0xd6\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl thunk_Sprite_SetDrawFlag\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl thunk_Sprite_SetDrawFlag\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl thunk_Sprite_SetDrawFlag\n    add r0, r5, #0\n    bl ov108_021E756C\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _021E74FC: .word 0x000184DE\n    _021E7500: .word ov108_021EA7F8\n    _021E7504: .word ov108_021EA820\n    _021E7508: .word ov108_021EA848\n    _021E750C: .word ov108_021EA870"
    );
    #endif
}

void ov108_021E7510(void) {
    /* Original at 0x021E7510 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl ov108_021E7650\n    mov r0, #0xd5\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_Delete\n    mov r0, #0xd6\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_Delete\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_Delete\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_Delete\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_Delete\n    mov r0, #0xda\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_Delete\n    mov r6, #0xdb\n    mov r4, #0\n    lsl r6, r6, #2\n    ldr r0, [r5, r6]\n    bl ov108_021E8674\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0xc\n    blt _021E755A\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov108_021E756C(void) {
    /* Original at 0x021E756C */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x40\n    add r5, r0, #0\n    ldr r0, _021E7648 ; =0x000004A4\n    ldr r1, [r5]\n    add r0, r5, r0\n    bl sub_02013910\n    mov r1, #0x3a\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #1\n    bl sub_02013948\n    add r6, r0, #0\n    ldr r0, _021E7648 ; =0x000004A4\n    add r0, r5, r0\n    bl GetWindowWidth\n    mov r1, #0x31\n    lsl r1, r1, #4\n    add r4, r0, #0\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r1, r4, #3\n    sub r0, r1, r0\n    mov r1, #0\n    lsr r3, r0, #1\n    mov r2, #0x31\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E764C ; =0x000B0600\n    lsl r2, r2, #4\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, _021E7648 ; =0x000004A4\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    bl AddTextPrinterParameterizedWithColor\n    mov r1, #0xe7\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    sub r1, #0x4c\n    str r0, [sp, #0x10]\n    ldr r0, _021E7648 ; =0x000004A4\n    add r0, r5, r0\n    str r0, [sp, #0x14]\n    ldr r0, [r5, r1]\n    bl SpriteManager_GetSpriteList\n    str r0, [sp, #0x18]\n    mov r0, #0x35\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl SpriteManager_FindPlttResourceProxy\n    str r0, [sp, #0x1c]\n    mov r0, #3\n    str r0, [sp, #0x30]\n    mov r0, #0x80\n    str r0, [sp, #0x34]\n    mov r0, #0xc8\n    mov r2, #1\n    str r0, [sp, #0x28]\n    mov r0, #0xac\n    mov r3, #0xea\n    lsl r3, r3, #2\n    str r2, [sp, #0x38]\n    str r0, [sp, #0x2c]\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [sp, #0x3c]\n    add r0, r6, #0\n    add r3, r5, r3\n    bl sub_02021AC8\n    mov r1, #0xeb\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    sub r1, #0xc\n    str r0, [sp, #0x24]\n    mov r0, #0\n    str r0, [sp, #0x20]\n    ldr r1, [r5, r1]\n    add r0, sp, #0x10\n    bl TextOBJ_Create\n    mov r1, #0xe9\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #1\n    bl TextOBJ_SetSpritesDrawFlag\n    mov r0, #0xe9\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #4\n    bl TextOBJ_SetPaletteNum\n    add sp, #0x40\n    pop {r4, r5, r6, pc}\n    nop\n    _021E7648: .word 0x000004A4\n    _021E764C: .word 0x000B0600"
    );
    #endif
}

void ov108_021E7650(void) {
    /* Original at 0x021E7650 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xe9\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl TextOBJ_Destroy\n    mov r0, #0xea\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl sub_02021B5C\n    mov r0, #0xe9\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    sub r0, r0, #4\n    ldr r0, [r4, r0]\n    bl sub_02013938\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E767C(void) {
    /* Original at 0x021E767C */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #5\n    str r0, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    add r4, r1, #0\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    add r3, r1, #0\n    bl FillBgTilemapRect\n    ldr r0, _021E76FC ; =0x000004D8\n    lsl r3, r4, #1\n    add r2, r4, r3\n    lsl r2, r2, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #0x18\n    str r1, [sp]\n    add r1, r3, #3\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    mov r1, #0\n    mov r4, #0x15\n    sub r3, r4, r3\n    lsl r3, r3, #0x18\n    str r1, [sp, #0xc]\n    lsr r2, r2, #0x18\n    str r2, [sp, #0x10]\n    ldrh r2, [r0]\n    lsr r3, r3, #0x18\n    lsl r2, r2, #0x15\n    lsr r2, r2, #0x18\n    str r2, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    add r2, r1, #0\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl CopyToBgTilemapRect\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r4, r5, pc}\n    _021E76FC: .word 0x000004D8"
    );
    #endif
}

void ov108_021E7700(void) {
    /* Original at 0x021E7700 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    str r1, [sp, #0x10]\n    str r2, [sp, #0x14]\n    add r7, r0, #0\n    ldr r0, [sp, #0x10]\n    lsl r5, r0, #4\n    mov r0, #0xed\n    lsl r0, r0, #2\n    add r4, r7, r0\n    add r0, r4, r5\n    bl GetWindowWidth\n    lsl r0, r0, #0x1b\n    lsr r6, r0, #0x18\n    add r0, r4, r5\n    bl GetWindowHeight\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x1c]\n    ldr r0, _021E77CC ; =0x00030102\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    cmp r0, #2\n    beq _021E778A\n    mov r0, #0xc9\n    lsl r0, r0, #2\n    add r0, r7, r0\n    str r0, [sp, #0x24]\n    mov r0, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x10]\n    mov r7, #4\n    cmp r0, #1\n    bhi _021E7780\n    ldr r0, _021E77D0 ; =0x000D0C0E\n    mov r1, #0xe\n    str r0, [sp, #0x18]\n    add r0, r4, r5\n    bl FillWindowPixelBuffer\n    mov r2, #0\n    str r6, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    add r0, r4, r5\n    mov r1, #6\n    add r3, r2, #0\n    bl FillWindowPixelRect\n    str r6, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r3, [sp, #0x1c]\n    add r0, r4, r5\n    sub r3, r3, #2\n    lsl r3, r3, #0x10\n    mov r1, #6\n    mov r2, #0\n    lsr r3, r3, #0x10\n    bl FillWindowPixelRect\n    b _021E77AC\n    add r0, r4, r5\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    b _021E77AC\n    mov r0, #0x31\n    lsl r0, r0, #4\n    add r0, r7, r0\n    ldr r1, [sp, #0x14]\n    str r0, [sp, #0x24]\n    lsl r2, r1, #2\n    ldr r1, [sp, #0x24]\n    mov r0, #0\n    ldr r1, [r1, r2]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    sub r0, r6, r0\n    lsl r0, r0, #0x17\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x20]\n    mov r7, #4\n    str r7, [sp]\n    mov r1, #0\n    ldr r0, [sp, #0x18]\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r2, [sp, #0x14]\n    add r0, r4, r5\n    lsl r3, r2, #2\n    ldr r2, [sp, #0x24]\n    ldr r2, [r2, r3]\n    ldr r3, [sp, #0x20]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E77CC: .word 0x00030102\n    _021E77D0: .word 0x000D0C0E"
    );
    #endif
}

void ov108_021E77D4(void) {
    /* Original at 0x021E77D4 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0xf9\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #0xc2\n    ldr r2, _021E78B8 ; =0x000184DE\n    str r3, [sp, #4]\n    ldrb r2, [r5, r2]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    add r2, r2, #1\n    bl BufferIntegerAsString\n    mov r2, #0xc2\n    lsl r2, r2, #2\n    add r1, r2, #4\n    ldr r0, [r5, r2]\n    add r2, #0x2c\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r0, #0xf9\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl GetWindowWidth\n    mov r1, #0xc3\n    lsl r1, r1, #2\n    add r4, r0, #0\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r1, r4, #3\n    sub r0, r1, r0\n    mov r1, #0\n    lsr r3, r0, #1\n    str r1, [sp]\n    mov r2, #0xf9\n    ldr r0, _021E78BC ; =0x00030102\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    lsl r2, r2, #2\n    add r0, r5, r2\n    str r1, [sp, #0xc]\n    sub r2, #0xd8\n    ldr r2, [r5, r2]\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _021E78B8 ; =0x000184DE\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    bne _021E7878\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #6\n    bl Sprite_SetAnimCtrlSeq\n    b _021E7884\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #4\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xda\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _021E78B8 ; =0x000184DE\n    ldrb r0, [r5, r0]\n    cmp r0, #1\n    bne _021E78A8\n    mov r0, #0xda\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #7\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    mov r0, #0xda\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #5\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _021E78B8: .word 0x000184DE\n    _021E78BC: .word 0x00030102"
    );
    #endif
}

void ov108_021E78C0(void) {
    /* Original at 0x021E78C0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    cmp r3, #0\n    bne _021E78DA\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xd5\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    pop {r4, r5, r6, pc}\n    mov r2, #0xd5\n    lsl r2, r2, #2\n    lsl r4, r1, #2\n    add r5, r0, r2\n    ldr r0, [r5, r4]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, r4]\n    add r1, r6, #0\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov108_021E78F4(void) {
    /* Original at 0x021E78F4 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r6, #0\n    cmp r7, #6\n    blo _021E790C\n    mov r0, #0xe0\n    str r0, [sp]\n    mov r2, #0xb4\n    mov r6, #1\n    b _021E7984\n    cmp r4, #1\n    beq _021E795E\n    add r0, r7, #0\n    mov r1, #3\n    bl _s32_div_f\n    mov r0, #0x48\n    mul r0, r1\n    add r0, #0x38\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp]\n    add r0, r7, #0\n    mov r1, #3\n    bl _s32_div_f\n    mov r1, #0x48\n    mul r1, r0\n    add r1, #0x38\n    lsl r0, r1, #0x10\n    asr r2, r0, #0x10\n    cmp r4, #2\n    bne _021E7942\n    add r2, #0xc0\n    lsl r0, r2, #0x10\n    asr r2, r0, #0x10\n    b _021E7984\n    cmp r4, #3\n    bne _021E794A\n    mov r6, #2\n    b _021E7984\n    cmp r4, #0\n    bne _021E7984\n    ldr r0, _021E79A4 ; =0x000184E2\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1b\n    cmp r0, #2\n    bne _021E7984\n    mov r6, #3\n    b _021E7984\n    add r0, r7, #0\n    mov r1, #3\n    bl _s32_div_f\n    mov r0, #0x50\n    mul r0, r1\n    add r0, #0x30\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp]\n    add r0, r7, #0\n    mov r1, #3\n    bl _s32_div_f\n    mov r1, #0x48\n    mul r1, r0\n    add r1, #0x38\n    lsl r0, r1, #0x10\n    asr r2, r0, #0x10\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0xd5\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldr r1, [sp]\n    bl Sprite_SetPositionXY\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #1\n    bl ov108_021E78C0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E79A4: .word 0x000184E2"
    );
    #endif
}

void ov108_021E79A8(void) {
    /* Original at 0x021E79A8 */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    add r4, r1, #0\n    add r7, r2, #0\n    cmp r3, #0\n    bne _021E79D0\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E7AD4 ; =0x000004D4\n    mov r2, #0x20\n    ldr r0, [r5, r0]\n    mov r6, #0x18\n    str r2, [sp]\n    add r2, r0, #0\n    str r6, [sp, #4]\n    add r2, #0xc\n    str r2, [sp, #8]\n    mov r3, #0\n    str r3, [sp, #0xc]\n    str r3, [sp, #0x10]\n    ldrh r2, [r0]\n    lsl r2, r2, #0x15\n    lsr r2, r2, #0x18\n    str r2, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    add r2, r3, #0\n    ldr r3, _021E7AD8 ; =0x000184E2\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldrb r3, [r5, r3]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x1b\n    mul r6, r3\n    lsl r3, r6, #0x18\n    ldr r0, [r5, r0]\n    lsr r3, r3, #0x18\n    bl CopyToBgTilemapRect\n    ldr r0, _021E7AD8 ; =0x000184E2\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1b\n    bne _021E7A80\n    add r0, r7, #0\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #3\n    add r0, r1, r0\n    add r0, r0, #3\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x1c]\n    add r0, r7, #0\n    mov r1, #3\n    bl _s32_div_f\n    lsl r1, r0, #3\n    add r0, r0, r1\n    add r0, r0, #3\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    cmp r4, #4\n    bne _021E7AA6\n    ldr r0, _021E7AD4 ; =0x000004D4\n    mov r1, #0x20\n    ldr r0, [r5, r0]\n    mov r2, #0\n    str r1, [sp]\n    mov r1, #3\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    str r2, [sp, #0xc]\n    mov r1, #0x18\n    str r1, [sp, #0x10]\n    ldrh r1, [r0]\n    mov r3, #0x15\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    add r1, r4, #0\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl CopyToBgTilemapRect\n    b _021E7AA6\n    add r0, r7, #0\n    mov r1, #3\n    bl _s32_div_f\n    mov r0, #0xa\n    mul r0, r1\n    add r0, r0, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x1c]\n    add r0, r7, #0\n    mov r1, #3\n    bl _s32_div_f\n    lsl r1, r0, #3\n    add r0, r0, r1\n    add r0, #0x1b\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    str r6, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r3, [sp, #0x1c]\n    add r1, r4, #0\n    mov r2, #0\n    bl FillBgTilemapRect\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E7AD4: .word 0x000004D4\n    _021E7AD8: .word 0x000184E2"
    );
    #endif
}

void ov108_021E7ADC(void) {
    /* Original at 0x021E7ADC */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    str r0, [sp, #0x10]\n    mov r0, #0\n    mov r5, #1\n    str r0, [sp, #0x1c]\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    mov r1, #3\n    bl _s32_div_f\n    lsl r1, r0, #3\n    add r0, r0, r1\n    add r0, r0, #3\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x1c]\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r1, #3\n    add r0, r1, r0\n    add r0, r0, #3\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, [sp, #0x14]\n    mov r4, #0\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    str r6, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x11\n    lsl r2, r5, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #0xd\n    add r3, r7, r4\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0x10]\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    mov r1, #5\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    add r5, r5, #1\n    bl FillBgTilemapRect\n    add r4, r4, #1\n    cmp r4, #8\n    blt _021E7B1A\n    ldr r0, [sp, #0x14]\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, #8\n    blt _021E7B12\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #1\n    str r0, [sp, #0x1c]\n    cmp r0, #6\n    blt _021E7AE8\n    mov r1, #0xd\n    ldr r0, [sp, #0x10]\n    lsl r1, r1, #6\n    ldr r0, [r0, r1]\n    mov r1, #5\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov108_021E7B74(void) {
    /* Original at 0x021E7B74 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r3, #0x12\n    add r4, r2, #0\n    str r0, [sp]\n    add r0, r1, #0\n    add r1, r3, #0\n    mov r2, #0\n    add r3, sp, #4\n    bl GfGfxLoader_GetCharDataFromOpenNarc\n    add r6, r0, #0\n    lsl r0, r4, #6\n    add r0, r0, #1\n    str r0, [sp]\n    mov r0, #0xd\n    ldr r2, [sp, #4]\n    lsl r0, r0, #6\n    mov r3, #1\n    ldr r0, [r5, r0]\n    ldr r2, [r2, #0x14]\n    mov r1, #5\n    lsl r3, r3, #0xc\n    bl BG_LoadCharTilesData\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov108_021E7BB4(void) {
    /* Original at 0x021E7BB4 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r4, r1, #0\n    ldr r1, [r6]\n    mov r0, #0xa6\n    add r5, r2, #0\n    bl NARC_New\n    add r7, r0, #0\n    cmp r4, #6\n    blo _021E7BE6\n    mov r4, #0\n    add r5, r6, #0\n    ldrb r3, [r5, #0x1c]\n    lsl r2, r4, #0x18\n    add r0, r6, #0\n    add r1, r7, #0\n    lsr r2, r2, #0x18\n    bl ov108_021E7B74\n    add r4, r4, #1\n    add r5, #0x7a\n    cmp r4, #6\n    blt _021E7BCE\n    b _021E7BF2\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, r4, #0\n    add r3, r5, #0\n    bl ov108_021E7B74\n    add r0, r7, #0\n    bl NARC_Delete\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov108_021E7BFC(void) {
    /* Original at 0x021E7BFC */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov108_021E7C5C\n    ldr r1, _021E7C54 ; =0x000184DF\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov108_021E7CD8\n    add r0, r4, #0\n    mov r1, #0\n    bl ov108_021E767C\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #1\n    bl ov108_021E7700\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    bne _021E7C30\n    add r0, r4, #0\n    bl ov108_021E61E8\n    b _021E7C36\n    add r0, r4, #0\n    bl ov108_021E6238\n    ldr r0, _021E7C58 ; =0x000184E4\n    mov r2, #0\n    strh r2, [r4, r0]\n    sub r2, #0xc0\n    add r1, r0, #2\n    strh r2, [r4, r1]\n    sub r1, r0, #2\n    ldrb r2, [r4, r1]\n    mov r1, #1\n    sub r0, r0, #2\n    bic r2, r1\n    mov r1, #1\n    orr r1, r2\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    _021E7C54: .word 0x000184DF\n    _021E7C58: .word 0x000184E4"
    );
    #endif
}

void ov108_021E7C5C(void) {
    /* Original at 0x021E7C5C */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, _021E7CD0 ; =0x000184E3\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    beq _021E7CCC\n    mov r0, #0xed\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r4, #0\n    mov r6, #5\n    str r0, [sp, #0x10]\n    mov r0, #0xc1\n    mov r2, #0xc3\n    lsl r0, r0, #2\n    lsl r2, r2, #2\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    add r1, #0xa\n    lsl r7, r6, #4\n    bl ReadMsgDataIntoString\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsr r2, r4, #0x1f\n    lsl r1, r4, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    lsl r1, r0, #2\n    ldr r0, _021E7CD4 ; =ov108_021EA724\n    mov r2, #0xc3\n    ldr r0, [r0, r1]\n    mov r1, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    lsl r2, r2, #2\n    ldr r2, [r5, r2]\n    add r0, r0, r7\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x10]\n    add r0, r0, r7\n    bl CopyWindowToVram\n    add r4, r4, #1\n    add r6, r6, #2\n    cmp r4, #5\n    blt _021E7C76\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _021E7CD0: .word 0x000184E3\n    _021E7CD4: .word ov108_021EA724"
    );
    #endif
}

void ov108_021E7CD8(void) {
    /* Original at 0x021E7CD8 */
    /* Requires manual decompilation - 216 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    cmp r1, #6\n    blo _021E7D3E\n    ldr r0, _021E7EA4 ; =0x000184E3\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    beq _021E7D24\n    mov r0, #0xed\n    lsl r0, r0, #2\n    mov r6, #0\n    mov r4, #6\n    add r7, r5, r0\n    lsr r3, r6, #0x1f\n    lsl r2, r6, #0x1f\n    sub r2, r2, r3\n    mov r1, #0x1f\n    ror r2, r1\n    add r1, r3, r2\n    lsl r2, r1, #2\n    ldr r1, _021E7EA8 ; =ov108_021EA724\n    lsl r0, r4, #4\n    ldr r1, [r1, r2]\n    str r0, [sp, #0x20]\n    lsl r1, r1, #0x18\n    add r0, r7, r0\n    lsr r1, r1, #0x18\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x20]\n    add r0, r7, r0\n    bl ScheduleWindowCopyToVram\n    add r6, r6, #1\n    add r4, r4, #2\n    cmp r6, #5\n    blt _021E7CF4\n    mov r0, #0xfd\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0xc\n    bl FillWindowPixelBuffer\n    mov r0, #0xfd\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    add r3, r5, #0\n    mov r6, #0xfd\n    mov r0, #0x7a\n    add r2, r1, #0\n    add r3, #0x1c\n    mul r2, r0\n    add r0, r3, r2\n    ldrb r1, [r3, r2]\n    lsl r6, r6, #2\n    str r0, [sp, #0x1c]\n    add r0, r6, #0\n    add r2, r6, #0\n    sub r0, #0xf0\n    sub r2, #0xe8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    add r1, #0x10\n    bl ReadMsgDataIntoString\n    add r0, r5, r6\n    bl GetWindowWidth\n    add r1, r6, #0\n    sub r1, #0xe8\n    add r4, r0, #0\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r1, r4, #3\n    sub r0, r1, r0\n    lsl r0, r0, #0x17\n    lsr r4, r0, #0x18\n    add r0, r5, r6\n    mov r1, #0xc\n    bl FillWindowPixelBuffer\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E7EAC ; =0x00080B0C\n    add r2, r6, #0\n    str r0, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    sub r2, #0xe8\n    ldr r2, [r5, r2]\n    add r0, r5, r6\n    add r3, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, r6\n    bl ScheduleWindowCopyToVram\n    ldr r0, _021E7EA4 ; =0x000184E3\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    beq _021E7E9E\n    add r0, sp, #0x24\n    add r0, #3\n    mov r1, #0\n    mov r2, #5\n    bl MI_CpuFill8\n    ldr r0, [sp, #0x1c]\n    mov r4, #0\n    ldrb r0, [r0, #1]\n    cmp r0, #0\n    ble _021E7E02\n    ldr r6, [sp, #0x1c]\n    add r7, sp, #0x24\n    ldrb r1, [r6, #2]\n    add r0, sp, #0x24\n    mov r2, #2\n    bl GetSafariObjectConfig\n    ldrb r1, [r7, #2]\n    cmp r1, #0\n    bne _021E7DE8\n    ldrb r0, [r7, #7]\n    add r0, r0, #1\n    strb r0, [r7, #7]\n    b _021E7DF6\n    add r0, sp, #0x24\n    add r0, #3\n    add r0, r0, r1\n    sub r0, r0, #1\n    ldrb r1, [r0]\n    add r1, r1, #1\n    strb r1, [r0]\n    ldr r0, [sp, #0x1c]\n    add r4, r4, #1\n    ldrb r0, [r0, #1]\n    add r6, r6, #4\n    cmp r4, r0\n    blt _021E7DD0\n    mov r0, #6\n    str r0, [sp, #0x18]\n    add r0, sp, #0x24\n    add r0, #3\n    str r0, [sp, #0x14]\n    mov r0, #0xed\n    lsl r0, r0, #2\n    mov r7, #0\n    add r6, r5, r0\n    ldr r0, [sp, #0x18]\n    ldr r2, [sp, #0x14]\n    lsl r4, r0, #4\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0xc2\n    lsl r0, r0, #2\n    ldrb r2, [r2]\n    ldr r0, [r5, r0]\n    mov r1, #0\n    mov r3, #2\n    bl BufferIntegerAsString\n    mov r0, #0xc2\n    mov r1, #0xc3\n    mov r2, #0xce\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    lsl r2, r2, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    lsr r2, r7, #0x1f\n    lsl r1, r7, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    lsl r1, r0, #2\n    ldr r0, _021E7EA8 ; =ov108_021EA724\n    ldr r0, [r0, r1]\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x10]\n    add r0, r6, r4\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    mov r2, #0xc3\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    lsl r2, r2, #2\n    mov r1, #0\n    ldr r2, [r5, r2]\n    add r0, r6, r4\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, r4\n    bl ScheduleWindowCopyToVram\n    ldr r0, [sp, #0x18]\n    add r7, r7, #1\n    add r0, r0, #2\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    cmp r7, #5\n    blt _021E7E14\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E7EA4: .word 0x000184E3\n    _021E7EA8: .word ov108_021EA724\n    _021E7EAC: .word 0x00080B0C"
    );
    #endif
}

void ov108_021E7EB0(void) {
    /* Original at 0x021E7EB0 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    mov r4, #0xfd\n    add r5, r0, #0\n    lsl r4, r4, #2\n    add r0, r5, r4\n    mov r1, #0xc\n    bl FillWindowPixelBuffer\n    ldr r1, _021E7F70 ; =0x000184DF\n    add r2, r4, #0\n    ldrb r3, [r5, r1]\n    mov r1, #0x7a\n    sub r2, #0xf0\n    mul r1, r3\n    add r1, r5, r1\n    ldrb r1, [r1, #0x1c]\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    add r1, #0x10\n    bl ReadMsgDataIntoString\n    add r1, r4, #0\n    sub r1, #0xe8\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x60\n    sub r0, r1, r0\n    lsl r0, r0, #0x17\n    lsr r3, r0, #0x18\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E7F74 ; =0x00080B0C\n    add r2, r4, #0\n    str r0, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    sub r2, #0xe8\n    ldr r2, [r5, r2]\n    add r0, r5, r4\n    bl AddTextPrinterParameterizedWithColor\n    ldr r3, _021E7F78 ; =0x000184E0\n    ldrb r1, [r5, r3]\n    cmp r1, #6\n    bhs _021E7F66\n    sub r3, r3, #2\n    add r2, r4, #0\n    ldrb r6, [r5, r3]\n    sub r2, #0xf0\n    ldr r0, [r5, r2]\n    mov r3, #6\n    add r2, #8\n    add r1, #0x10\n    mul r3, r6\n    ldr r2, [r5, r2]\n    add r1, r1, r3\n    bl ReadMsgDataIntoString\n    add r1, r4, #0\n    sub r1, #0xe8\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x60\n    sub r0, r1, r0\n    lsl r0, r0, #0x17\n    lsr r3, r0, #0x18\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E7F74 ; =0x00080B0C\n    add r2, r4, #0\n    str r0, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    sub r2, #0xe8\n    ldr r2, [r5, r2]\n    add r0, r5, r4\n    add r3, #0x90\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021E7F70: .word 0x000184DF\n    _021E7F74: .word 0x00080B0C\n    _021E7F78: .word 0x000184E0"
    );
    #endif
}

void ov108_021E7F7C(void) {
    /* Original at 0x021E7F7C */
    /* Requires manual decompilation - 168 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    ldr r1, _021E80DC ; =0x000184E2\n    add r6, r0, #0\n    ldrb r1, [r6, r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1b\n    bne _021E7FF4\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    mov r0, #0xd\n    lsl r0, r0, #6\n    mov r2, #0\n    ldr r0, [r6, r0]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r0, [r6, r0]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0xbf\n    ldr r2, _021E80E0 ; =0x000184E6\n    mvn r0, r0\n    strh r0, [r6, r2]\n    sub r0, r2, #4\n    ldrb r3, [r6, r0]\n    mov r0, #1\n    mov r1, #1\n    bic r3, r0\n    orr r3, r1\n    sub r0, r2, #4\n    strb r3, [r6, r0]\n    sub r0, r2, #6\n    mov r3, #0\n    strb r3, [r6, r0]\n    sub r2, r2, #6\n    ldrb r2, [r6, r2]\n    add r0, r6, #0\n    bl ov108_021E78F4\n    ldr r2, _021E80E4 ; =0x000184DF\n    add r0, r6, #0\n    ldrb r2, [r6, r2]\n    mov r1, #2\n    bl ov108_021E78F4\n    add r0, r6, #0\n    bl ov108_021E77D4\n    b _021E807E\n    mov r1, #1\n    mov r2, #0xff\n    mov r3, #0\n    bl ov108_021E79A8\n    mov r2, #0\n    add r0, r6, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl ov108_021E78C0\n    ldr r0, _021E80DC ; =0x000184E2\n    mov r4, #0\n    ldrb r0, [r6, r0]\n    add r7, r6, #0\n    lsl r0, r0, #0x1d\n    lsr r1, r0, #0x1f\n    mov r0, #6\n    mul r0, r1\n    str r0, [sp, #0x14]\n    lsl r0, r0, #2\n    add r5, r6, r0\n    add r0, r4, #0\n    mov r1, #3\n    bl _s32_div_f\n    str r1, [sp, #0x10]\n    add r0, r4, #0\n    mov r1, #3\n    bl _s32_div_f\n    add r3, r0, #0\n    mov r0, #0xdb\n    lsl r0, r0, #2\n    ldr r2, [sp, #0x10]\n    mov r1, #0x48\n    mul r1, r2\n    mov r2, #0x48\n    mul r2, r3\n    add r1, #0x38\n    sub r2, #0x88\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r5, r0]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0xdb\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #2\n    bl ManagedSprite_SetPriority\n    ldr r1, [sp, #0x14]\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    add r1, r4, r1\n    lsl r1, r1, #0x18\n    ldrb r2, [r7, #0x1c]\n    ldr r0, [r6, r0]\n    lsr r1, r1, #0x18\n    bl ov108_021E84F8\n    add r4, r4, #1\n    add r5, r5, #4\n    add r7, #0x7a\n    cmp r4, #6\n    blt _021E8020\n    ldr r0, _021E80E8 ; =0x000184E1\n    mov r1, #0\n    strb r1, [r6, r0]\n    mov r0, #0xfd\n    lsl r0, r0, #2\n    add r0, r6, r0\n    mov r1, #0xc\n    bl FillWindowPixelBuffer\n    mov r0, #0xfd\n    lsl r0, r0, #2\n    add r0, r6, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _021E80EC ; =0x04001040\n    mov r1, #0xf0\n    strh r1, [r0]\n    mov r1, #0x10\n    add r4, r0, #0\n    strh r1, [r0, #4]\n    add r4, #8\n    ldrh r3, [r4]\n    mov r2, #0x3f\n    mov r1, #0xf\n    bic r3, r2\n    orr r1, r3\n    mov r3, #0x20\n    orr r1, r3\n    strh r1, [r4]\n    add r4, r0, #0\n    add r4, #0xa\n    ldrh r5, [r4]\n    mov r1, #0x1f\n    sub r0, #0x40\n    bic r5, r2\n    orr r1, r5\n    orr r1, r3\n    strh r1, [r4]\n    ldr r2, [r0]\n    ldr r1, _021E80F0 ; =0xFFFF1FFF\n    and r2, r1\n    lsl r1, r3, #8\n    orr r1, r2\n    str r1, [r0]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E80DC: .word 0x000184E2\n    _021E80E0: .word 0x000184E6\n    _021E80E4: .word 0x000184DF\n    _021E80E8: .word 0x000184E1\n    _021E80EC: .word 0x04001040\n    _021E80F0: .word 0xFFFF1FFF"
    );
    #endif
}

void ov108_021E80F4(void) {
    /* Original at 0x021E80F4 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _021E81A0 ; =0x000184E2\n    ldrb r1, [r5, r0]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1b\n    bne _021E811A\n    add r1, r0, #2\n    ldrsh r2, [r5, r1]\n    mov r7, #0x17\n    mvn r7, r7\n    add r2, #0x18\n    strh r2, [r5, r1]\n    add r1, r0, #4\n    ldrsh r1, [r5, r1]\n    add r0, r0, #4\n    add r1, #0x18\n    strh r1, [r5, r0]\n    b _021E812E\n    add r1, r0, #2\n    ldrsh r2, [r5, r1]\n    mov r7, #0x18\n    sub r2, #0x18\n    strh r2, [r5, r1]\n    add r1, r0, #4\n    ldrsh r1, [r5, r1]\n    add r0, r0, #4\n    sub r1, #0x18\n    strh r1, [r5, r0]\n    ldr r1, _021E81A0 ; =0x000184E2\n    mov r0, #1\n    ldrb r2, [r5, r1]\n    mov r4, #0\n    bic r2, r0\n    mov r0, #1\n    orr r0, r2\n    strb r0, [r5, r1]\n    lsl r0, r7, #0x10\n    asr r6, r0, #0x10\n    ldr r0, _021E81A0 ; =0x000184E2\n    add r2, r6, #0\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x1d\n    lsr r1, r0, #0x1f\n    mov r0, #6\n    mul r0, r1\n    add r0, r4, r0\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0xdb\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_OffsetPositionXY\n    add r4, r4, #1\n    cmp r4, #6\n    blt _021E8142\n    mov r0, #0xd5\n    lsl r0, r0, #2\n    lsl r2, r7, #0x10\n    ldr r0, [r5, r0]\n    mov r1, #0\n    asr r2, r2, #0x10\n    bl Sprite_OffsetPositionXY\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    lsl r2, r7, #0x10\n    ldr r0, [r5, r0]\n    mov r1, #0\n    asr r2, r2, #0x10\n    bl Sprite_OffsetPositionXY\n    ldr r0, _021E81A4 ; =0x000184E1\n    ldrb r1, [r5, r0]\n    add r1, r1, #1\n    strb r1, [r5, r0]\n    ldrb r0, [r5, r0]\n    cmp r0, #8\n    blo _021E819A\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E81A0: .word 0x000184E2\n    _021E81A4: .word 0x000184E1"
    );
    #endif
}

void ov108_021E81A8(void) {
    /* Original at 0x021E81A8 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r1, _021E8264 ; =0x000184E2\n    add r6, r0, #0\n    ldrb r0, [r6, r1]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    bne _021E81CA\n    sub r0, r1, #4\n    ldrb r0, [r6, r0]\n    add r2, r0, #1\n    sub r0, r1, #4\n    strb r2, [r6, r0]\n    mov r0, #1\n    lsl r0, r0, #8\n    str r0, [sp]\n    b _021E81DA\n    sub r0, r1, #4\n    ldrb r0, [r6, r0]\n    sub r2, r0, #1\n    sub r0, r1, #4\n    strb r2, [r6, r0]\n    mov r0, #0xff\n    mvn r0, r0\n    str r0, [sp]\n    ldr r0, _021E8264 ; =0x000184E2\n    mov r4, #0\n    ldrb r0, [r6, r0]\n    lsl r0, r0, #0x1d\n    lsr r1, r0, #0x1f\n    mov r0, #6\n    mul r0, r1\n    str r0, [sp, #4]\n    lsl r0, r0, #2\n    add r5, r6, r0\n    add r0, r4, #0\n    mov r1, #3\n    bl _s32_div_f\n    add r7, r1, #0\n    add r0, r4, #0\n    mov r1, #3\n    bl _s32_div_f\n    mov r1, #0x50\n    mul r1, r7\n    add r2, r0, #0\n    mov r0, #0xdb\n    lsl r0, r0, #2\n    ldr r3, [sp]\n    add r1, #0x30\n    add r1, r3, r1\n    mov r3, #0x48\n    mul r3, r2\n    add r3, #0x38\n    lsl r1, r1, #0x10\n    lsl r2, r3, #0x10\n    ldr r0, [r5, r0]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r2, _021E8268 ; =0x000184DE\n    ldr r1, [sp, #4]\n    ldrb r3, [r6, r2]\n    mov r2, #6\n    mov r0, #0xd2\n    mul r2, r3\n    lsl r0, r0, #2\n    add r1, r4, r1\n    add r2, r4, r2\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x18\n    ldr r0, [r6, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    bl ov108_021E84F8\n    mov r0, #0xdb\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl ManagedSprite_SetPriority\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _021E81EE\n    ldr r0, _021E826C ; =0x000184E1\n    mov r1, #0\n    strb r1, [r6, r0]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E8264: .word 0x000184E2\n    _021E8268: .word 0x000184DE\n    _021E826C: .word 0x000184E1"
    );
    #endif
}

void ov108_021E8270(void) {
    /* Original at 0x021E8270 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, _021E82D8 ; =0x000184E2\n    ldrb r0, [r7, r0]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    bne _021E8284\n    mov r0, #0x1f\n    mvn r0, r0\n    b _021E8286\n    mov r0, #0x20\n    lsl r0, r0, #0x10\n    mov r4, #0\n    add r5, r7, #0\n    asr r6, r0, #0x10\n    mov r0, #0xdb\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    mov r2, #0\n    bl ManagedSprite_OffsetPositionXY\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0xc\n    blt _021E828E\n    ldr r2, _021E82DC ; =0x000184E1\n    ldrb r0, [r7, r2]\n    add r0, r0, #1\n    strb r0, [r7, r2]\n    ldrb r0, [r7, r2]\n    cmp r0, #8\n    blo _021E82D2\n    mov r0, #0\n    strb r0, [r7, r2]\n    sub r2, r2, #1\n    ldrb r2, [r7, r2]\n    add r0, r7, #0\n    mov r1, #1\n    bl ov108_021E78F4\n    add r0, r7, #0\n    bl ov108_021E7EB0\n    add r0, r7, #0\n    bl ov108_021E77D4\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E82D8: .word 0x000184E2\n    _021E82DC: .word 0x000184E1"
    );
    #endif
}

void ov108_021E82E0(void) {
    /* Original at 0x021E82E0 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r1, [sp]\n    ldr r1, _021E837C ; =0x000184E2\n    add r6, r0, #0\n    ldrb r0, [r6, r1]\n    add r3, sp, #8\n    lsl r0, r0, #0x1d\n    lsr r2, r0, #0x1f\n    mov r0, #6\n    mul r0, r2\n    sub r2, r1, #3\n    ldrb r2, [r6, r2]\n    add r2, r2, r0\n    strb r2, [r3, #2]\n    sub r2, r1, #2\n    ldrb r2, [r6, r2]\n    add r0, r2, r0\n    strb r0, [r3, #3]\n    sub r0, r1, #3\n    ldrb r0, [r6, r0]\n    mov r1, #3\n    bl _s32_div_f\n    add r1, sp, #8\n    strb r0, [r1]\n    ldr r0, _021E8380 ; =0x000184E0\n    mov r1, #3\n    ldrb r0, [r6, r0]\n    bl _s32_div_f\n    add r1, sp, #8\n    strb r0, [r1, #1]\n    ldr r0, [sp]\n    add r5, sp, #8\n    ldr r1, _021E8384 ; =_021EA720\n    lsl r0, r0, #1\n    add r0, r1, r0\n    mov r7, #0\n    add r4, sp, #8\n    add r5, #2\n    str r0, [sp, #4]\n    ldrb r3, [r4]\n    ldrb r0, [r5]\n    ldr r2, [sp, #4]\n    ldrsb r3, [r2, r3]\n    lsl r0, r0, #2\n    add r1, r6, r0\n    mov r0, #0xdb\n    mov r2, #0xc\n    lsl r0, r0, #2\n    mul r2, r3\n    ldr r0, [r1, r0]\n    lsl r2, r2, #0x10\n    mov r1, #0\n    asr r2, r2, #0x10\n    bl ManagedSprite_OffsetPositionXY\n    add r7, r7, #1\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r7, #2\n    blt _021E8334\n    ldr r0, _021E8388 ; =0x000184E1\n    ldrb r1, [r6, r0]\n    add r1, r1, #1\n    strb r1, [r6, r0]\n    ldrb r1, [r6, r0]\n    cmp r1, #8\n    blo _021E8376\n    mov r1, #0\n    strb r1, [r6, r0]\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021E837C: .word 0x000184E2\n    _021E8380: .word 0x000184E0\n    _021E8384: .word _021EA720\n    _021E8388: .word 0x000184E1"
    );
    #endif
}

void ov108_021E838C(void) {
    /* Original at 0x021E838C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4]\n    mov r0, #0x20\n    bl GF_CreateVramTransferManager\n    ldr r0, [r4]\n    bl SpriteSystem_Alloc\n    mov r1, #0xd3\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    ldr r1, _021E83C0 ; =ov108_021EA9A0\n    ldr r2, _021E83C4 ; =ov108_021EA98C\n    mov r3, #4\n    bl SpriteSystem_Init\n    ldr r0, [r4]\n    bl thunk_ClearMainOAM\n    ldr r0, [r4]\n    bl thunk_ClearSubOAM\n    pop {r4, pc}\n    nop\n    _021E83C0: .word ov108_021EA9A0\n    _021E83C4: .word ov108_021EA98C"
    );
    #endif
}

void ov108_021E83C8(void) {
    /* Original at 0x021E83C8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xd3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl SpriteSystem_Free\n    mov r0, #0xd3\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    bl GF_DestroyVramTransferManager\n    ldr r0, [r4]\n    bl thunk_ClearMainOAM\n    ldr r0, [r4]\n    bl thunk_ClearSubOAM\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E83F0(void) {
    /* Original at 0x021E83F0 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0xd3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021E8442\n    bl SpriteManager_New\n    mov r1, #0x35\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    sub r0, r1, #4\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    mov r2, #0x8c\n    bl SpriteSystem_InitSprites\n    mov r1, #0xd3\n    mov r0, #0\n    lsl r1, r1, #2\n    str r0, [sp]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, _021E8448 ; =ov108_021EA97C\n    mov r3, #2\n    bl sub_0200D2A4\n    mov r0, #0x35\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl SpriteManager_GetSpriteList\n    add r1, r0, #0\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov108_021E853C\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E8448: .word ov108_021EA97C"
    );
    #endif
}

void ov108_021E844C(void) {
    /* Original at 0x021E844C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x35\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _021E846A\n    sub r0, r0, #4\n    ldr r0, [r4, r0]\n    bl SpriteSystem_DestroySpriteManager\n    mov r0, #0x35\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E846C(void) {
    /* Original at 0x021E846C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021E847E\n    bl ov108_021E852C\n    mov r0, #0x35\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021E848C\n    bl SpriteSystem_DrawSprites\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E8490(void) {
    SpriteSystem_TransferOam(0xd3);
}

void ov108_021E84A4(void) {
    /* Original at 0x021E84A4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    mov r1, #0x59\n    lsl r1, r1, #2\n    add r5, r0, #0\n    add r7, r2, #0\n    str r3, [sp]\n    bl Heap_Alloc\n    mov r2, #0x59\n    add r4, r0, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    bl MI_CpuFill8\n    str r5, [r4]\n    mov r0, #4\n    strh r0, [r4, #0xa]\n    strh r6, [r4, #0xc]\n    ldr r0, [sp]\n    strh r7, [r4, #0xe]\n    str r0, [r4, #4]\n    add r0, r4, #0\n    bl ov108_021E867C\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov108_021E84DC(void) {
    /* Original at 0x021E84DC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov108_021E8718\n    mov r2, #0x59\n    add r0, r4, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    bl MI_CpuFill8\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E84F8(void) {
    /* Original at 0x021E84F8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r3, r2, #0\n    mov r2, #0x55\n    lsl r2, r2, #2\n    ldr r4, [r0, r2]\n    lsl r1, r1, #2\n    ldr r4, [r4]\n    sub r2, #0x10\n    ldr r4, [r4, r1]\n    mov r1, #0\n    str r1, [sp]\n    ldr r1, [r0]\n    add r3, #0x12\n    str r1, [sp, #4]\n    ldr r0, [r0, r2]\n    add r1, r4, #0\n    mov r2, #0xa6\n    bl ReplaceCharResObjFromNarc\n    add r0, r4, #0\n    bl sub_0200AE8C\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov108_021E852C(void) {
    SpriteList_RenderAndAnimateSprites();
}

void ov108_021E853C(void) {
    /* Original at 0x021E853C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void ov108_021E8540(void) {
    /* Original at 0x021E8540 */
    /* Requires manual decompilation - 136 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x60\n    add r5, r0, #0\n    str r3, [sp, #0x2c]\n    add r6, r1, #0\n    ldr r0, [r5]\n    mov r1, #0x10\n    add r7, r2, #0\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x10\n    add r4, r0, #0\n    bl MI_CpuFill8\n    ldr r0, [r5]\n    mov r1, #8\n    bl Heap_Alloc\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    mov r1, #0x24\n    bl Heap_Alloc\n    ldr r1, [r4, #8]\n    mov r3, #0xe\n    str r0, [r1]\n    ldr r0, [r4, #8]\n    lsl r3, r3, #0xc\n    ldr r0, [r0]\n    mov r1, #0\n    str r0, [r4, #4]\n    mov r0, #0\n    str r3, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    str r0, [sp, #0x10]\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r2, [r5, r0]\n    str r2, [sp, #0x14]\n    add r2, r0, #4\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x18]\n    add r2, r0, #0\n    add r2, #8\n    ldr r2, [r5, r2]\n    add r0, #0xc\n    str r2, [sp, #0x1c]\n    ldr r0, [r5, r0]\n    add r2, r3, #0\n    str r0, [sp, #0x20]\n    str r1, [sp, #0x24]\n    str r1, [sp, #0x28]\n    add r1, sp, #0x68\n    ldrb r1, [r1, #0x14]\n    ldr r0, [r4, #4]\n    add r1, r1, r3\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r5, #0x14]\n    cmp r0, #0\n    beq _021E85C8\n    str r0, [sp, #0x30]\n    b _021E85CC\n    ldr r0, [r5, #0x10]\n    str r0, [sp, #0x30]\n    ldr r0, [r4, #4]\n    cmp r6, #0\n    str r0, [sp, #0x34]\n    beq _021E85E6\n    lsl r0, r6, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021E85F4\n    lsl r0, r6, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #0x38]\n    cmp r7, #0\n    beq _021E8610\n    lsl r0, r7, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021E861E\n    lsl r0, r7, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    mov r1, #0\n    str r1, [sp, #0x40]\n    ldr r1, [sp, #0x84]\n    str r0, [sp, #0x3c]\n    cmp r1, #2\n    bne _021E8636\n    mov r1, #3\n    lsl r1, r1, #0x12\n    add r0, r0, r1\n    str r0, [sp, #0x3c]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x44]\n    str r0, [sp, #0x48]\n    str r0, [sp, #0x4c]\n    mov r1, #0\n    add r0, sp, #0x30\n    add r2, sp, #0x68\n    strh r1, [r0, #0x20]\n    ldrb r0, [r2, #0x10]\n    str r0, [sp, #0x54]\n    ldr r0, [sp, #0x84]\n    str r0, [sp, #0x58]\n    ldr r0, [r5]\n    str r0, [sp, #0x5c]\n    ldrb r1, [r2, #0x14]\n    ldrb r2, [r2, #0x18]\n    add r0, r5, #0\n    bl ov108_021E84F8\n    add r0, sp, #0x30\n    bl Sprite_CreateAffine\n    str r0, [r4]\n    cmp r0, #0\n    bne _021E866E\n    bl GF_AssertFail\n    add r0, r4, #0\n    add sp, #0x60\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov108_021E8674(void) {
    Sprite_DeleteAndFreeResources();
}

void ov108_021E867C(void) {
    /* Original at 0x021E867C */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r1, _021E8714 ; =ov108_021EA978\n    str r0, [sp]\n    ldrb r2, [r1]\n    add r0, sp, #8\n    strb r2, [r0]\n    ldrb r2, [r1, #1]\n    strb r2, [r0, #1]\n    ldrb r2, [r1, #2]\n    ldrb r1, [r1, #3]\n    strb r2, [r0, #2]\n    strb r1, [r0, #3]\n    ldr r0, [sp]\n    ldr r2, [sp]\n    ldr r1, [sp]\n    ldrh r0, [r0, #0xc]\n    ldr r2, [r2]\n    add r1, #0x18\n    bl G2dRenderer_Init\n    ldr r1, [sp]\n    mov r6, #0x55\n    str r0, [r1, #0x10]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r7, sp, #8\n    add r5, r1, #0\n    add r4, r0, #0\n    lsl r6, r6, #2\n    ldr r2, [sp]\n    ldrb r0, [r7]\n    ldr r1, [sp, #4]\n    ldr r2, [r2]\n    bl Create2DGfxResObjMan\n    mov r1, #0x51\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r1, [sp]\n    ldrb r0, [r7]\n    ldr r1, [r1]\n    bl Create2DGfxResObjList\n    mov r1, #0x55\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r3, [r5, r0]\n    mov r1, #0\n    ldr r0, [r3, #4]\n    cmp r0, #0\n    bls _021E86FA\n    add r2, r1, #0\n    ldr r0, [r3]\n    add r1, r1, #1\n    str r4, [r0, r2]\n    ldr r3, [r5, r6]\n    add r2, r2, #4\n    ldr r0, [r3, #4]\n    cmp r1, r0\n    blo _021E86EA\n    ldr r0, [sp, #4]\n    add r7, r7, #1\n    add r0, r0, #1\n    add r5, r5, #4\n    str r0, [sp, #4]\n    cmp r0, #4\n    blo _021E86B8\n    ldr r0, [sp]\n    bl ov108_021E8758\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E8714: .word ov108_021EA978"
    );
    #endif
}

void ov108_021E8718(void) {
    /* Original at 0x021E8718 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    bl SpriteList_Delete\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200AED4\n    mov r0, #0x56\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200B0CC\n    mov r7, #0x55\n    lsl r7, r7, #2\n    add r6, r7, #0\n    mov r4, #0\n    sub r6, #0x10\n    ldr r0, [r5, r7]\n    bl Delete2DGfxResObjList\n    ldr r0, [r5, r6]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blo _021E8740\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov108_021E8758(void) {
    /* Original at 0x021E8758 */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x55\n    lsl r0, r0, #2\n    mov r7, #0\n    ldr r6, [r5, r0]\n    add r4, r7, #0\n    mov r0, #0xe\n    lsl r0, r0, #0xc\n    add r0, r7, r0\n    str r0, [sp]\n    ldrh r0, [r5, #0xe]\n    add r2, r7, #0\n    mov r1, #0xa6\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    add r2, #0x12\n    str r0, [sp, #8]\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r3, #0\n    bl AddCharResObjFromNarc\n    ldr r1, [r6]\n    str r0, [r1, r4]\n    ldr r0, [r6]\n    ldr r0, [r0, r4]\n    cmp r0, #0\n    bne _021E879A\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _021E87A8\n    cmp r0, #1\n    beq _021E87B2\n    cmp r0, #2\n    b _021E87BC\n    ldr r0, [r6]\n    ldr r0, [r0, r4]\n    bl sub_0200ADA4\n    b _021E87C4\n    ldr r0, [r6]\n    ldr r0, [r0, r4]\n    bl sub_0200AE18\n    b _021E87C4\n    ldr r0, [r6]\n    ldr r0, [r0, r4]\n    bl sub_0200AD64\n    add r7, r7, #1\n    add r4, r4, #4\n    cmp r7, #0xc\n    blt _021E8768\n    mov r4, #0\n    add r6, r5, #0\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r7, [r6, r0]\n    mov r0, #0xe\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    add r0, r4, #2\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    add r2, r4, #0\n    str r0, [sp, #8]\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #0xa6\n    add r2, #0x10\n    mov r3, #0\n    bl AddCellOrAnimResObjFromNarc\n    ldr r1, [r7]\n    str r0, [r1]\n    ldr r0, [r7]\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _021E8806\n    bl GF_AssertFail\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #2\n    blt _021E87D0\n    mov r0, #0x56\n    lsl r0, r0, #2\n    ldr r4, [r5, r0]\n    mov r1, #0xe\n    lsl r1, r1, #0xc\n    str r1, [sp]\n    ldrh r1, [r5, #0xe]\n    sub r0, #0x10\n    mov r2, #0xf\n    str r1, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    ldr r1, [r5]\n    mov r3, #0\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    mov r1, #0xa6\n    bl AddPlttResObjFromNarc\n    ldr r1, [r4]\n    str r0, [r1]\n    ldr r0, [r4]\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _021E8844\n    bl GF_AssertFail\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0200B00C\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}
