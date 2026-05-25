/* Decompiled from asm/overlay_12_02265E28.s */
#include "global.h"

void ov12_02265E28(void) {
    /* Original at 0x02265E28 */
    /* Requires manual decompilation - 116 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    mov r0, #8\n    mov r1, #5\n    bl NARC_New\n    add r4, r0, #0\n    ldr r0, [r5, #4]\n    bl BattleSystem_GetSpriteSystem\n    str r0, [sp, #0x24]\n    ldr r0, [r5, #4]\n    bl BattleSystem_GetSpriteManager\n    str r0, [sp, #0x20]\n    ldr r0, [r5, #4]\n    bl ov12_0223B52C\n    add r7, r0, #0\n    ldrb r0, [r5, #8]\n    cmp r0, #0\n    ldrb r0, [r5, #9]\n    bne _02265E6E\n    lsl r1, r0, #1\n    ldr r0, _02265F1C ; =ov12_0226E0D0\n    ldrh r3, [r0, r1]\n    ldr r0, _02265F20 ; =0x00004E2D\n    mov r1, #0x80\n    str r1, [sp, #0x1c]\n    add r6, r0, #0\n    mov r1, #0x81\n    sub r6, #8\n    str r1, [sp, #0x18]\n    b _02265E82\n    lsl r1, r0, #1\n    ldr r0, _02265F24 ; =ov12_0226E0A0\n    ldrh r3, [r0, r1]\n    ldr r0, _02265F28 ; =0x00004E2E\n    mov r1, #0x83\n    str r1, [sp, #0x1c]\n    add r6, r0, #0\n    mov r1, #0x84\n    sub r6, #8\n    str r1, [sp, #0x18]\n    mov r1, #1\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x20]\n    add r2, r4, #0\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r0, [r5, #4]\n    bl BattleSystem_GetPaletteData\n    str r4, [sp]\n    ldrb r1, [r5, #9]\n    mov r2, #6\n    add r3, r1, #0\n    mul r3, r2\n    ldr r2, _02265F2C ; =ov12_0226E168\n    lsl r1, r7, #1\n    add r2, r2, r3\n    ldrh r1, [r1, r2]\n    ldr r2, [sp, #0x24]\n    ldr r3, [sp, #0x20]\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #1\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, _02265F30 ; =0x00004E29\n    str r1, [sp, #0x14]\n    mov r1, #2\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    ldr r0, [r5, #4]\n    bl BattleSystem_GetPaletteData\n    mov r1, #0\n    str r1, [sp]\n    mov r1, #0x20\n    str r1, [sp, #4]\n    mov r1, #0x70\n    str r1, [sp, #8]\n    ldrb r2, [r5, #9]\n    mov r3, #6\n    lsl r5, r7, #1\n    mul r3, r2\n    ldr r2, _02265F2C ; =ov12_0226E168\n    mov r1, #8\n    add r2, r2, r3\n    ldrh r2, [r5, r2]\n    mov r3, #5\n    bl PaletteData_LoadNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x20]\n    ldr r3, [sp, #0x1c]\n    add r2, r4, #0\n    str r6, [sp, #4]\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x20]\n    ldr r3, [sp, #0x18]\n    add r2, r4, #0\n    str r6, [sp, #4]\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _02265F1C: .word ov12_0226E0D0\n    _02265F20: .word 0x00004E2D\n    _02265F24: .word ov12_0226E0A0\n    _02265F28: .word 0x00004E2E\n    _02265F2C: .word ov12_0226E168\n    _02265F30: .word 0x00004E29"
    );
    #endif
}

void ov12_02265F34(void) {
    /* Original at 0x02265F34 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl BattleSystem_GetSpriteSystem\n    add r5, r0, #0\n    ldr r0, [r4, #4]\n    bl BattleSystem_GetSpriteManager\n    add r1, r0, #0\n    add r0, r5, #0\n    ldrb r3, [r4, #8]\n    mov r2, #0x34\n    ldr r5, _02265F64 ; =ov12_0226E100\n    mul r2, r3\n    add r2, r5, r2\n    bl SpriteSystem_NewSprite\n    str r0, [r4]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    pop {r3, r4, r5, pc}\n    nop\n    _02265F64: .word ov12_0226E100"
    );
    #endif
}

void ov12_02265F68(void) {
    Sprite_DeleteAndFreeResources(0);
}

void ov12_02265F7C(void) {
    /* Original at 0x02265F7C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    bl BattleSystem_GetSpriteManager\n    add r4, r0, #0\n    ldrb r0, [r5, #8]\n    cmp r0, #0\n    bne _02265F92\n    ldr r1, _02265FB8 ; =0x00004E2D\n    b _02265F94\n    ldr r1, _02265FBC ; =0x00004E2E\n    add r5, r1, #0\n    add r0, r4, #0\n    sub r5, #8\n    bl SpriteManager_UnloadCharObjById\n    ldr r1, _02265FC0 ; =0x00004E29\n    add r0, r4, #0\n    bl SpriteManager_UnloadPlttObjById\n    add r0, r4, #0\n    add r1, r5, #0\n    bl SpriteManager_UnloadCellObjById\n    add r0, r4, #0\n    add r1, r5, #0\n    bl SpriteManager_UnloadAnimObjById\n    pop {r3, r4, r5, pc}\n    _02265FB8: .word 0x00004E2D\n    _02265FBC: .word 0x00004E2E\n    _02265FC0: .word 0x00004E29"
    );
    #endif
}

void ov12_02265FC4(void) {
    ManagedSprite_SetDrawFlag();
}

void ov12_02265FD4(void) {
    /* Original at 0x02265FD4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    mov r0, #0\n    add r1, r5, #0\n    mov r2, #0x10\n    add r7, r3, #0\n    bl MIi_CpuClearFast\n    str r4, [r5, #4]\n    strb r6, [r5, #8]\n    strb r7, [r5, #9]\n    cmp r7, #0x18\n    blt _02265FFA\n    bl GF_AssertFail\n    mov r0, #0\n    strb r0, [r5, #9]\n    add r0, r5, #0\n    bl ov12_02265E28\n    add r0, r5, #0\n    bl ov12_02265F34\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov12_02266008(void) {
    ov12_02265F68();
    ov12_02265F7C(r4);
    MIi_CpuClearFast(0, r4, 0x10);
}
