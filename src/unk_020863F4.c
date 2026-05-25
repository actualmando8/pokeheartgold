/* Decompiled from asm/unk_020863F4.s */
#include "global.h"

void sub_020863F4(void) {
    /* Original at 0x020863F4 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x4c\n    add r4, r0, #0\n    mov r0, #0x6c\n    bl SpriteSystem_Alloc\n    mov r7, #0x2f\n    lsl r7, r7, #4\n    add r2, sp, #0x2c\n    ldr r3, _02086484 ; =_021027F4\n    str r0, [r4, r7]\n    ldmia r3!, {r0, r1}\n    add r6, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    ldr r5, _02086488 ; =_021027C8\n    stmia r2!, {r0, r1}\n    add r3, sp, #0x18\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    add r1, r6, #0\n    str r0, [r3]\n    ldr r0, [r4, r7]\n    mov r3, #0x20\n    bl SpriteSystem_Init\n    ldr r3, _0208648C ; =_021027DC\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r7, #0\n    ldr r0, [r4, r0]\n    bl SpriteManager_New\n    add r1, r7, #4\n    str r0, [r4, r1]\n    sub r0, r1, #4\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    mov r2, #0x80\n    bl SpriteSystem_InitSprites\n    cmp r0, #0\n    bne _02086468\n    bl GF_AssertFail\n    mov r1, #0x2f\n    lsl r1, r1, #4\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    add r2, sp, #0\n    bl SpriteSystem_InitManagerWithCapacities\n    cmp r0, #0\n    bne _02086480\n    bl GF_AssertFail\n    add sp, #0x4c\n    pop {r4, r5, r6, r7, pc}\n    _02086484: .word _021027F4\n    _02086488: .word _021027C8\n    _0208648C: .word _021027DC"
    );
    #endif
}

void sub_02086490(void) {
    /* Original at 0x02086490 */
    /* Requires manual decompilation - 261 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    mov r1, #0x2f\n    lsl r1, r1, #4\n    add r7, r0, #0\n    add r0, r1, #4\n    ldr r5, [r7, r0]\n    add r0, r1, #0\n    add r0, #0xc\n    ldr r0, [r7, r0]\n    ldr r6, [r7, r1]\n    str r0, [sp, #0x18]\n    add r0, r1, #0\n    add r0, #8\n    ldr r0, [r7, r0]\n    mov r3, #1\n    str r0, [sp, #0x1c]\n    sub r0, r1, #4\n    ldr r4, [r7, r0]\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x6c\n    str r0, [sp, #0xc]\n    ldr r2, [sp, #0x1c]\n    add r0, r4, #0\n    mov r1, #0xc\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x6c\n    str r0, [sp, #0xc]\n    ldr r2, [sp, #0x1c]\n    add r0, r4, #0\n    mov r1, #0xe\n    mov r3, #1\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [sp, #0x18]\n    mov r1, #0xbe\n    mov r2, #0xd\n    mov r3, #0x6c\n    bl PaletteData_LoadNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x6c\n    str r0, [sp, #0xc]\n    ldr r2, [sp, #0x1c]\n    add r0, r4, #0\n    mov r1, #0xf\n    mov r3, #5\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x6c\n    str r0, [sp, #0xc]\n    ldr r2, [sp, #0x1c]\n    add r0, r4, #0\n    mov r1, #0x11\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x18]\n    mov r1, #0xbe\n    mov r2, #0x10\n    mov r3, #0x6c\n    bl PaletteData_LoadNarc\n    str r4, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r0, #0xfa\n    str r1, [sp, #0x10]\n    lsl r0, r0, #2\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    mov r1, #2\n    add r2, r6, #0\n    add r3, r5, #0\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #2\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #3\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    str r4, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, _020866C4 ; =0x000003E9\n    mov r1, #2\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    add r2, r6, #0\n    add r3, r5, #0\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _020866C4 ; =0x000003E9\n    add r1, r5, #0\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r2, r4, #0\n    mov r3, #4\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _020866C4 ; =0x000003E9\n    add r1, r5, #0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r2, r4, #0\n    mov r3, #6\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _020866C4 ; =0x000003E9\n    add r1, r5, #0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r2, r4, #0\n    mov r3, #7\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    str r4, [sp]\n    mov r0, #9\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r1, #2\n    str r1, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, _020866C8 ; =0x000003EA\n    add r2, r6, #0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    add r3, r5, #0\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _020866C8 ; =0x000003EA\n    add r1, r5, #0\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r2, r4, #0\n    mov r3, #8\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _020866C8 ; =0x000003EA\n    add r1, r5, #0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r2, r4, #0\n    mov r3, #0xa\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _020866C8 ; =0x000003EA\n    add r1, r5, #0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r2, r4, #0\n    mov r3, #0xb\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r0, #0xf6\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    bl Options_GetFrame\n    add r4, r0, #0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x6c\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x1c]\n    mov r1, #4\n    mov r2, #1\n    mov r3, #0xa\n    bl LoadUserFrameGfx2\n    add r0, r4, #0\n    bl sub_0200E640\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xb0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x18]\n    mov r1, #0x26\n    mov r3, #0x6c\n    bl PaletteData_LoadNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xc0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x18]\n    mov r1, #0x10\n    mov r2, #8\n    mov r3, #0x6c\n    bl PaletteData_LoadNarc\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020866C4: .word 0x000003E9\n    _020866C8: .word 0x000003EA"
    );
    #endif
}

void sub_020866CC(void) {
    /* Original at 0x020866CC */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    mov r4, #0\n    cmp r0, #0\n    ble _020866F2\n    mov r7, #0x2d\n    add r5, r6, #0\n    lsl r7, r7, #4\n    ldr r0, [r5, #0xc]\n    bl Sprite_DeleteAndFreeResources\n    ldr r0, [r6, r7]\n    add r4, r4, #1\n    add r5, #0x1c\n    cmp r4, r0\n    blt _020866E2\n    mov r0, #0xfb\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r5, #0\n    cmp r0, #0\n    ble _02086718\n    mov r7, #0xfb\n    add r4, r6, #0\n    lsl r7, r7, #2\n    mov r0, #0x73\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_DeleteAndFreeResources\n    ldr r0, [r6, r7]\n    add r5, r5, #1\n    add r4, #0x1c\n    cmp r5, r0\n    blt _02086704\n    mov r7, #0x9d\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    bl Sprite_DeleteAndFreeResources\n    add r5, r5, #1\n    add r4, #0x1c\n    cmp r5, #2\n    blt _02086720\n    mov r7, #0x22\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #4\n    ldr r0, [r4, r7]\n    bl Sprite_DeleteAndFreeResources\n    add r5, r5, #1\n    add r4, #0x1c\n    cmp r5, #3\n    blt _02086736\n    add r0, r6, #0\n    bl sub_02086FE8\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    add r0, r6, r0\n    bl RemoveWindow\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02086758(void) {
    /* Original at 0x02086758 */
    /* Requires manual decompilation - 152 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r1, [sp]\n    add r2, r0, #4\n    ldr r1, [r1, r0]\n    str r1, [sp, #8]\n    ldr r1, [sp]\n    ldr r1, [r1, r2]\n    add r2, sp, #0x10\n    str r1, [sp, #4]\n    ldr r1, [sp, #0xc]\n    strh r1, [r2]\n    strh r1, [r2, #2]\n    strh r1, [r2, #4]\n    strh r1, [r2, #6]\n    mov r1, #0xa\n    str r1, [sp, #0x18]\n    ldr r1, [sp, #0xc]\n    mov r2, #1\n    str r1, [sp, #0x3c]\n    str r1, [sp, #0x40]\n    str r1, [sp, #0x1c]\n    add r1, r0, #0\n    add r1, #0xf8\n    str r1, [sp, #0x24]\n    str r1, [sp, #0x28]\n    str r1, [sp, #0x2c]\n    str r1, [sp, #0x30]\n    sub r1, r2, #2\n    str r1, [sp, #0x34]\n    str r1, [sp, #0x38]\n    ldr r1, [sp]\n    str r2, [sp, #0x20]\n    add r0, #0xf0\n    ldr r4, [r1, r0]\n    mov r1, #0x3f\n    ldr r0, [sp]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    sub r6, r0, #1\n    bmi _020867DC\n    mov r0, #0x1c\n    add r1, r6, #0\n    mul r1, r0\n    ldr r0, [sp]\n    mov r7, #0xa\n    add r5, r0, r1\n    add r0, r4, #0\n    add r1, r7, #0\n    bl _u32_div_f\n    add r0, r1, #1\n    str r0, [r5]\n    add r0, r4, #0\n    mov r1, #0xa\n    bl _u32_div_f\n    add r4, r0, #0\n    sub r5, #0x1c\n    sub r6, r6, #1\n    bpl _020867C0\n    mov r1, #0xfb\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r2, #0x2d\n    ldr r1, [sp]\n    lsl r2, r2, #4\n    ldr r1, [r1, r2]\n    mov r6, #0\n    add r1, r1, r0\n    cmp r1, #0\n    ble _0208689C\n    ldr r4, [sp]\n    mov r7, #0x4c\n    add r5, r4, #0\n    cmp r0, #0\n    beq _0208684C\n    mov r0, #7\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    ldr r0, [sp, #0xc]\n    add r0, r0, r1\n    add r0, r0, #1\n    cmp r6, r0\n    bne _0208684C\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #4]\n    add r2, sp, #0x10\n    bl SpriteSystem_NewSprite\n    mov r1, #0x73\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #0\n    lsl r1, r7, #0x10\n    ldr r0, [r4, r0]\n    asr r1, r1, #0x10\n    mov r2, #0x18\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x73\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x16\n    bl ManagedSprite_SetAnim\n    mov r0, #0x73\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ManagedSprite_TickFrame\n    ldr r0, [sp, #0xc]\n    add r4, #0x1c\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    b _02086882\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #4]\n    add r2, sp, #0x10\n    bl SpriteSystem_NewSprite\n    lsl r1, r7, #0x10\n    str r0, [r5, #0xc]\n    asr r1, r1, #0x10\n    mov r2, #0x18\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5]\n    ldr r1, [r5, #8]\n    bl sub_02086D98\n    add r1, r0, #0\n    ldr r0, [r5, #0xc]\n    bl ManagedSprite_SetAnim\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    bl ManagedSprite_SetAffineOverwriteMode\n    ldr r0, [r5, #0xc]\n    bl ManagedSprite_TickFrame\n    add r5, #0x1c\n    ldr r1, [sp]\n    mov r0, #0xfb\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r2, r1, #0\n    mov r1, #0x2d\n    lsl r1, r1, #4\n    ldr r1, [r2, r1]\n    add r6, r6, #1\n    add r1, r1, r0\n    add r7, #8\n    cmp r6, r1\n    blt _020867FA\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020868A0(void) {
    /* Original at 0x020868A0 */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x34\n    mov r1, #0x2f\n    lsl r1, r1, #4\n    add r5, r0, #0\n    add r0, r1, #4\n    ldr r6, [r5, r1]\n    ldr r4, [r5, r0]\n    mov r2, #0\n    add r0, sp, #0\n    strh r2, [r0]\n    strh r2, [r0, #2]\n    strh r2, [r0, #4]\n    strh r2, [r0, #6]\n    add r1, #0xf9\n    mov r0, #1\n    str r0, [sp, #0x10]\n    sub r0, r0, #2\n    str r2, [sp, #8]\n    str r2, [sp, #0x2c]\n    str r2, [sp, #0x30]\n    str r2, [sp, #0xc]\n    str r1, [sp, #0x14]\n    str r1, [sp, #0x18]\n    str r1, [sp, #0x1c]\n    str r1, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, sp, #0\n    bl SpriteSystem_NewSprite\n    mov r1, #0x22\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, sp, #0\n    bl SpriteSystem_NewSprite\n    mov r1, #0x8f\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, sp, #0\n    bl SpriteSystem_NewSprite\n    mov r1, #0x96\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r1, #0x3f\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl sub_02086AE4\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnim\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ManagedSprite_TickFrame\n    mov r2, #0x91\n    lsl r2, r2, #2\n    mov r1, #0\n    strh r1, [r5, r2]\n    add r0, r2, #2\n    strh r1, [r5, r0]\n    mov r0, #1\n    sub r2, #0x14\n    str r0, [r5, r2]\n    add r0, r5, #0\n    bl sub_02086B2C\n    mov r1, #0x8f\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    sub r1, #0xc\n    ldr r1, [r5, r1]\n    bl ManagedSprite_SetAnim\n    mov r0, #0x8f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ManagedSprite_TickFrame\n    mov r0, #0x8f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ManagedSprite_SetOamMode\n    mov r2, #0x26\n    lsl r2, r2, #4\n    mov r1, #0\n    strh r1, [r5, r2]\n    add r0, r2, #2\n    strh r1, [r5, r0]\n    mov r0, #1\n    sub r2, #0x14\n    str r0, [r5, r2]\n    add r0, r5, #0\n    bl sub_02086B2C\n    mov r1, #0x96\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    sub r1, #0xc\n    ldr r1, [r5, r1]\n    bl ManagedSprite_SetAnim\n    mov r0, #0x96\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ManagedSprite_TickFrame\n    mov r0, #0x96\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ManagedSprite_SetOamMode\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl sub_02086AB4\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0\n    bl sub_02086AB4\n    add sp, #0x34\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_020869BC(void) {
    /* Original at 0x020869BC */
    /* Requires manual decompilation - 116 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x34\n    mov r2, #0x2f\n    lsl r2, r2, #4\n    add r5, r0, #0\n    add r0, r2, #4\n    ldr r6, [r5, r2]\n    ldr r4, [r5, r0]\n    mov r0, #0\n    add r1, sp, #0\n    strh r0, [r1]\n    strh r0, [r1, #2]\n    strh r0, [r1, #4]\n    strh r0, [r1, #6]\n    add r2, #0xfa\n    mov r1, #0xa\n    str r1, [sp, #8]\n    mov r1, #1\n    str r1, [sp, #0x10]\n    sub r1, r1, #2\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x2c]\n    str r0, [sp, #0x30]\n    str r0, [sp, #0xc]\n    str r2, [sp, #0x14]\n    str r2, [sp, #0x18]\n    str r2, [sp, #0x1c]\n    str r2, [sp, #0x20]\n    str r1, [sp, #0x24]\n    str r1, [sp, #0x28]\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, sp, #0\n    bl SpriteSystem_NewSprite\n    mov r1, #0x9d\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, sp, #0\n    bl SpriteSystem_NewSprite\n    mov r2, #0x29\n    lsl r2, r2, #4\n    add r1, r2, #0\n    str r0, [r5, r2]\n    add r1, #0xde\n    ldrb r3, [r5, r1]\n    add r1, r2, #0\n    add r1, #0xdf\n    ldrb r1, [r5, r1]\n    add r0, r2, #0\n    sub r0, #0x1c\n    add r3, r3, r1\n    lsr r1, r3, #0x1f\n    add r1, r3, r1\n    add r3, r2, #0\n    add r3, #0xdc\n    add r2, #0xdd\n    lsl r1, r1, #0xf\n    ldrb r3, [r5, r3]\n    ldrb r2, [r5, r2]\n    ldr r0, [r5, r0]\n    asr r1, r1, #0x10\n    add r3, r3, r2\n    lsr r2, r3, #0x1f\n    add r2, r3, r2\n    lsl r2, r2, #0xf\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnim\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ManagedSprite_TickFrame\n    mov r2, #0x29\n    lsl r2, r2, #4\n    add r1, r2, #0\n    add r1, #0xe2\n    ldrb r3, [r5, r1]\n    add r1, r2, #0\n    add r1, #0xe3\n    ldrb r1, [r5, r1]\n    ldr r0, [r5, r2]\n    add r3, r3, r1\n    lsr r1, r3, #0x1f\n    add r1, r3, r1\n    add r3, r2, #0\n    add r3, #0xe0\n    add r2, #0xe1\n    lsl r1, r1, #0xf\n    ldrb r3, [r5, r3]\n    ldrb r2, [r5, r2]\n    asr r1, r1, #0x10\n    add r3, r3, r2\n    lsr r2, r3, #0x1f\n    add r2, r3, r2\n    lsl r2, r2, #0xf\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x29\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnim\n    mov r0, #0x29\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ManagedSprite_TickFrame\n    add sp, #0x34\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_02086AB4(void) {
    /* Original at 0x02086AB4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r2, #1\n    bne _02086ACE\n    mov r2, #0x1c\n    mul r2, r1\n    add r1, r0, r2\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, pc}\n    mov r2, #0x1c\n    mul r2, r1\n    add r1, r0, r2\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, pc}"
    );
    #endif
}

void sub_02086AE4(void) {
    /* Original at 0x02086AE4 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r1, r0\n    blt _02086B26\n    mov r0, #0x1c\n    mul r0, r1\n    add r0, r4, r0\n    mov r2, #0x85\n    ldr r0, [r0, #0xc]\n    lsl r2, r2, #2\n    str r1, [r4, r2]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x22\n    lsl r0, r0, #4\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    add r2, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r4, r0]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_02086B2C(void) {
    /* Original at 0x02086B2C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r1, #0x10\n    mov r2, #0x8f\n    add r3, r0, #0\n    lsl r2, r2, #2\n    lsl r1, r1, #2\n    ldr r0, [r3, r2]\n    add r3, r3, r1\n    add r1, r2, #0\n    add r1, #0xca\n    ldrb r4, [r3, r1]\n    add r1, r2, #0\n    add r1, #0xcb\n    ldrb r1, [r3, r1]\n    add r4, r4, r1\n    lsr r1, r4, #0x1f\n    add r1, r4, r1\n    add r4, r2, #0\n    add r4, #0xc8\n    add r2, #0xc9\n    lsl r1, r1, #0xf\n    ldrb r4, [r3, r4]\n    ldrb r2, [r3, r2]\n    asr r1, r1, #0x10\n    add r3, r4, r2\n    lsr r2, r3, #0x1f\n    add r2, r3, r2\n    lsl r2, r2, #0xf\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    pop {r4, pc}"
    );
    #endif
}

void sub_02086B6C(void) {
    /* Original at 0x02086B6C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r3, r0, #0\n    mov r0, #0x1c\n    mul r0, r2\n    add r1, #0x10\n    mov r2, #0x22\n    lsl r1, r1, #2\n    add r0, r3, r0\n    lsl r2, r2, #4\n    add r3, r3, r1\n    add r1, r2, #0\n    add r1, #0xe6\n    ldrb r4, [r3, r1]\n    add r1, r2, #0\n    add r1, #0xe7\n    ldrb r1, [r3, r1]\n    ldr r0, [r0, r2]\n    add r4, r4, r1\n    lsr r1, r4, #0x1f\n    add r1, r4, r1\n    add r4, r2, #0\n    add r4, #0xe4\n    add r2, #0xe5\n    lsl r1, r1, #0xf\n    ldrb r4, [r3, r4]\n    ldrb r2, [r3, r2]\n    asr r1, r1, #0x10\n    add r3, r4, r2\n    lsr r2, r3, #0x1f\n    add r2, r3, r2\n    lsl r2, r2, #0xf\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    pop {r4, pc}"
    );
    #endif
}

void sub_02086BB4(void) {
    /* Original at 0x02086BB4 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ManagedSprite_TickFrame\n    mov r0, #0x8f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ManagedSprite_TickFrame\n    mov r0, #0x96\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ManagedSprite_TickFrame\n    add r4, r5, #0\n    mov r7, #0x22\n    mov r6, #1\n    add r4, #0x1c\n    lsl r7, r7, #4\n    ldr r0, [r4, r7]\n    bl ManagedSprite_GetActiveAnim\n    cmp r0, #3\n    bne _02086C34\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ManagedSprite_IsAnimated\n    cmp r0, #0\n    bne _02086C76\n    mov r0, #0x22\n    mov r1, #0x85\n    lsl r0, r0, #4\n    lsl r1, r1, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    bl ManagedSprite_SetAnim\n    mov r0, #0xdd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #1\n    bne _02086C1E\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl sub_02086AB4\n    b _02086C28\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl sub_02086AB4\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0\n    bl sub_02086AB4\n    b _02086C76\n    mov r1, #0x85\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    cmp r0, r1\n    beq _02086C48\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnim\n    mov r0, #0x96\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ManagedSprite_GetActiveAnim\n    cmp r0, #3\n    beq _02086C76\n    mov r0, #0xdd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #1\n    bne _02086C6C\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl sub_02086AB4\n    b _02086C76\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl sub_02086AB4\n    add r6, r6, #1\n    add r4, #0x1c\n    cmp r6, #3\n    blt _02086BE0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02086C80(void) {
    sub_020136B4();
}

void sub_02086C8C(void) {
    /* Original at 0x02086C8C */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    add r4, r5, #0\n    ldr r0, _02086D94 ; =0x0000036E\n    ldrb r1, [r5, r0]\n    add r0, r0, #1\n    ldrb r0, [r5, r0]\n    add r1, r1, r0\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    lsl r0, r0, #0xf\n    asr r0, r0, #0x10\n    sub r0, #0x28\n    lsl r0, r0, #0x10\n    asr r7, r0, #0x10\n    mov r0, #0xdb\n    lsl r0, r0, #2\n    ldrb r1, [r5, r0]\n    add r0, r0, #1\n    ldrb r0, [r5, r0]\n    add r1, r1, r0\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    lsl r0, r0, #0xf\n    asr r0, r0, #0x10\n    sub r0, r0, #7\n    lsl r0, r0, #0x10\n    asr r6, r0, #0x10\n    mov r0, #0x9a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02086CD8\n    cmp r0, #1\n    beq _02086CE2\n    b _02086D60\n    mov r0, #0xa\n    mov r1, #0\n    lsl r0, r0, #6\n    strb r1, [r4, r0]\n    b _02086D82\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldrb r0, [r4, r0]\n    add r1, r0, #1\n    mov r0, #0xa\n    lsl r0, r0, #6\n    strb r1, [r4, r0]\n    ldrb r0, [r4, r0]\n    cmp r0, #1\n    bne _02086D12\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ManagedSprite_SetAnim\n    mov r0, #0xdf\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    add r2, r6, #0\n    bl sub_02086C80\n    b _02086D82\n    cmp r0, #2\n    bne _02086D32\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #2\n    bl ManagedSprite_SetAnim\n    mov r0, #0xdf\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    sub r2, r6, #1\n    bl sub_02086C80\n    b _02086D82\n    cmp r0, #0xa\n    bne _02086D82\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnim\n    mov r0, #0xdf\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    add r2, r6, #0\n    bl sub_02086C80\n    mov r0, #0x9a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r0, #1\n    mov r0, #0x9a\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _02086D82\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnim\n    mov r0, #0xdf\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    add r2, r6, #0\n    bl sub_02086C80\n    mov r0, #0x9a\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, [sp]\n    add r5, r5, #4\n    add r0, r0, #1\n    add r4, #0x1c\n    str r0, [sp]\n    cmp r0, #2\n    blt _02086C96\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02086D94: .word 0x0000036E"
    );
    #endif
}

void sub_02086D98(void) {
    /* Original at 0x02086D98 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    cmp r1, #0\n    bne _02086DA0\n    mov r2, #0xb\n    add r0, r2, r0\n    bx lr"
    );
    #endif
}

void sub_02086DA4(void) {
    /* Original at 0x02086DA4 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    mov r1, #0x2d\n    lsl r1, r1, #4\n    ldr r1, [r0, r1]\n    mov r3, #0\n    cmp r1, #0\n    ble _02086DDE\n    mov r6, #0x2e\n    lsl r6, r6, #4\n    add r4, r0, #0\n    add r1, r3, #0\n    mov r2, #1\n    sub r7, r6, #4\n    ldr r5, [r0, r7]\n    cmp r3, r5\n    blt _02086DCE\n    ldr r5, [r0, r6]\n    cmp r3, r5\n    bge _02086DCE\n    str r2, [r4, #8]\n    b _02086DD0\n    str r1, [r4, #8]\n    mov r5, #0x2d\n    lsl r5, r5, #4\n    ldr r5, [r0, r5]\n    add r3, r3, #1\n    add r4, #0x1c\n    cmp r3, r5\n    blt _02086DBE\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void sub_02086DE4(void) {
    /* Original at 0x02086DE4 */
    /* Requires manual decompilation - 171 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r1, [sp, #4]\n    mov r1, #0xb5\n    lsl r1, r1, #2\n    str r0, [sp]\n    ldr r0, [r0, r1]\n    mov r4, #0\n    lsl r2, r0, #1\n    ldr r0, [sp]\n    str r4, [sp, #8]\n    add r2, r0, r2\n    add r0, r1, #0\n    sub r0, #0x34\n    ldrsh r5, [r2, r0]\n    ldr r0, [sp]\n    sub r1, r1, #4\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    bgt _02086E0E\n    b _02086F3E\n    ldr r7, [sp]\n    add r6, r7, #0\n    mov r0, #0xb7\n    ldr r1, [sp]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    cmp r4, r0\n    blt _02086E3E\n    add r2, r1, #0\n    mov r1, #0x2e\n    lsl r1, r1, #4\n    ldr r1, [r2, r1]\n    cmp r4, r1\n    bge _02086E3E\n    cmp r4, r0\n    bne _02086E36\n    add r5, #0x14\n    lsl r0, r5, #0x10\n    asr r5, r0, #0x10\n    b _02086E50\n    add r5, #0x20\n    lsl r0, r5, #0x10\n    asr r5, r0, #0x10\n    b _02086E50\n    cmp r4, #0\n    bne _02086E4A\n    add r5, #0x14\n    lsl r0, r5, #0x10\n    asr r5, r0, #0x10\n    b _02086E50\n    add r5, #8\n    lsl r0, r5, #0x10\n    asr r5, r0, #0x10\n    add r1, sp, #0xc\n    ldr r0, [r7, #0xc]\n    add r1, #2\n    add r2, sp, #0xc\n    bl ManagedSprite_GetPositionXY\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    bne _02086E72\n    add r3, sp, #0xc\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r0, [r7, #0xc]\n    add r1, r5, #0\n    bl ManagedSprite_SetPositionXY\n    b _02086E8E\n    add r1, sp, #0xc\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    sub r1, r5, r0\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    strh r0, [r7, #0x14]\n    mov r0, #0\n    strh r0, [r7, #0x16]\n    mov r0, #2\n    strb r0, [r7, #0x18]\n    mov r0, #0\n    strb r0, [r7, #0x19]\n    mov r0, #7\n    lsl r0, r0, #6\n    ldr r0, [r6, r0]\n    cmp r4, r0\n    bne _02086F2C\n    mov r0, #0xfb\n    ldr r1, [sp]\n    lsl r0, r0, #2\n    ldr r1, [r1, r0]\n    ldr r0, [sp, #8]\n    cmp r0, r1\n    beq _02086F2C\n    mov r0, #0x73\n    lsl r0, r0, #2\n    add r1, sp, #0xc\n    ldr r0, [r6, r0]\n    add r1, #2\n    add r2, sp, #0xc\n    bl ManagedSprite_GetPositionXY\n    ldr r1, [sp]\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r2, r1, #0\n    mov r1, #0xb7\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    cmp r1, r0\n    bne _02086ED2\n    add r5, #8\n    lsl r0, r5, #0x10\n    asr r5, r0, #0x10\n    b _02086EE8\n    cmp r4, r1\n    ble _02086EE2\n    cmp r4, r0\n    bge _02086EE2\n    add r5, #0x14\n    lsl r0, r5, #0x10\n    asr r5, r0, #0x10\n    b _02086EE8\n    add r5, #8\n    lsl r0, r5, #0x10\n    asr r5, r0, #0x10\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    bne _02086F02\n    mov r0, #0x73\n    lsl r0, r0, #2\n    add r3, sp, #0xc\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r0, [r6, r0]\n    add r1, r5, #0\n    bl ManagedSprite_SetPositionXY\n    b _02086F24\n    add r1, sp, #0xc\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    sub r1, r5, r0\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r1, r0, #1\n    mov r0, #0x75\n    lsl r0, r0, #2\n    strh r1, [r6, r0]\n    mov r1, #0\n    add r0, r0, #2\n    strh r1, [r6, r0]\n    mov r0, #0x76\n    mov r1, #2\n    lsl r0, r0, #2\n    strb r1, [r6, r0]\n    ldr r0, [sp, #8]\n    add r6, #0x1c\n    add r0, r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x2d\n    ldr r1, [sp]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r4, r4, #1\n    add r7, #0x1c\n    cmp r4, r0\n    bge _02086F3E\n    b _02086E12\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02086F44(void) {
    /* Original at 0x02086F44 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    mov r4, #0\n    cmp r0, #0\n    ble _02086FC8\n    add r5, r6, #0\n    mov r0, #0xb7\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    cmp r4, r0\n    blt _02086F74\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    cmp r4, r0\n    bge _02086F74\n    mov r0, #0x10\n    str r0, [sp]\n    add r7, r0, #0\n    b _02086F7A\n    mov r0, #4\n    str r0, [sp]\n    mov r7, #8\n    add r2, sp, #4\n    ldr r0, [r5, #0xc]\n    add r1, sp, #4\n    add r2, #2\n    bl ManagedSprite_GetPositionXY\n    add r1, sp, #4\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    add r4, r4, #1\n    sub r1, r0, r7\n    ldr r0, [r5, #0x10]\n    strb r1, [r0]\n    add r1, sp, #4\n    mov r0, #0\n    ldrsh r1, [r1, r0]\n    ldr r0, [sp]\n    sub r1, r1, r0\n    ldr r0, [r5, #0x10]\n    strb r1, [r0, #2]\n    add r1, sp, #4\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    add r1, r0, r7\n    ldr r0, [r5, #0x10]\n    strb r1, [r0, #1]\n    add r1, sp, #4\n    mov r0, #0\n    ldrsh r1, [r1, r0]\n    ldr r0, [sp]\n    add r1, r1, r0\n    ldr r0, [r5, #0x10]\n    add r5, #0x1c\n    strb r1, [r0, #3]\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    cmp r4, r0\n    blt _02086F58\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02086FCC(void) {
    /* Original at 0x02086FCC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #2\n    mov r1, #0x6c\n    bl FontSystem_NewInit\n    mov r1, #0xde\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #2\n    mov r1, #0x6c\n    bl FontID_Alloc\n    pop {r4, pc}"
    );
    #endif
}

void sub_02086FE8(void) {
    /* Original at 0x02086FE8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #2\n    bl FontID_Release\n    mov r0, #0xdf\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl FontOAM_Delete\n    mov r0, #0xe1\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl sub_02021B5C\n    mov r0, #0xe\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl FontOAM_Delete\n    mov r0, #0x39\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl sub_02021B5C\n    mov r0, #0xde\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_020135AC\n    pop {r4, pc}"
    );
    #endif
}

void sub_02087028(void) {
    /* Original at 0x02087028 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r3, r0, #0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    ldr r4, _02087060 ; =0x000003EB\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    add r2, r4, #0\n    str r4, [sp, #0x14]\n    sub r0, #0xef\n    sub r2, #0xfb\n    sub r4, #0xf7\n    ldr r0, [r3, r0]\n    ldr r2, [r3, r2]\n    ldr r3, [r3, r4]\n    mov r1, #2\n    bl SpriteSystem_LoadPaletteBuffer\n    add sp, #0x18\n    pop {r4, pc}\n    nop\n    _02087060: .word 0x000003EB"
    );
    #endif
}

void sub_02087064(void) {
    /* Original at 0x02087064 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    bl sub_02087028\n    mov r1, #0\n    add r0, r4, #0\n    mov r2, #0x4e\n    mov r3, #0xa5\n    str r1, [sp]\n    bl sub_02087090\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0xac\n    mov r3, #0xa5\n    bl sub_02087090\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_02087090(void) {
    /* Original at 0x02087090 */
    /* Requires manual decompilation - 137 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x5c\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0x26\n    mov r3, #0x6c\n    bl NewMsgDataFromNarc\n    add r1, r4, #2\n    str r0, [sp, #0x14]\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x18]\n    add r0, sp, #0x1c\n    bl InitWindow\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, sp, #0x1c\n    mov r2, #0xa\n    mov r3, #2\n    bl AddTextWindowTopLeftCorner\n    ldr r1, [sp, #0x18]\n    mov r0, #2\n    mov r2, #0\n    mov r3, #0x50\n    bl FontID_String_GetCenterAlignmentX\n    mov r1, #0\n    add r3, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _020871BC ; =0x000F0D02\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, sp, #0x1c\n    mov r1, #2\n    bl AddTextPrinterParameterizedWithColor\n    add r0, sp, #0x1c\n    mov r1, #1\n    mov r2, #0x6c\n    bl sub_02013688\n    mov r3, #0xe1\n    lsl r3, r3, #2\n    mov r1, #0xc\n    add r6, r4, #0\n    mul r6, r1\n    mov r1, #1\n    add r3, r5, r3\n    add r2, r1, #0\n    add r3, r3, r6\n    bl sub_02021AC8\n    add r0, r4, #0\n    add r0, #0x1a\n    lsl r0, r0, #2\n    add r3, r5, r0\n    ldr r0, _020871C0 ; =0x00000306\n    add r2, r0, #1\n    ldrb r1, [r3, r0]\n    ldrb r2, [r3, r2]\n    add r2, r1, r2\n    lsr r1, r2, #0x1f\n    add r1, r2, r1\n    lsl r1, r1, #0xf\n    asr r7, r1, #0x10\n    sub r1, r0, #2\n    ldrb r2, [r3, r1]\n    sub r1, r0, #1\n    ldrb r1, [r3, r1]\n    add r2, r2, r1\n    lsr r1, r2, #0x1f\n    add r1, r2, r1\n    lsl r1, r1, #0xf\n    asr r1, r1, #0x10\n    str r1, [sp, #0x10]\n    add r1, r0, #0\n    add r1, #0x72\n    ldr r1, [r5, r1]\n    sub r0, #0x12\n    str r1, [sp, #0x2c]\n    add r1, sp, #0x1c\n    str r1, [sp, #0x30]\n    ldr r0, [r5, r0]\n    bl SpriteManager_GetSpriteList\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #0x34]\n    ldr r0, [r5, r1]\n    add r1, #0xf7\n    bl SpriteManager_FindPlttResourceProxy\n    str r0, [sp, #0x38]\n    mov r1, #0\n    mov r0, #0xe2\n    str r1, [sp, #0x3c]\n    add r2, r5, r6\n    lsl r0, r0, #2\n    ldr r2, [r2, r0]\n    sub r0, #0xc\n    add r5, r5, r0\n    sub r7, #0x28\n    str r2, [sp, #0x40]\n    lsl r2, r7, #0x10\n    asr r2, r2, #0x10\n    str r2, [sp, #0x44]\n    ldr r2, [sp, #0x10]\n    lsl r4, r4, #2\n    sub r2, r2, #7\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    str r1, [sp, #0x4c]\n    str r1, [sp, #0x50]\n    mov r1, #1\n    str r1, [sp, #0x54]\n    mov r1, #0x6c\n    str r2, [sp, #0x48]\n    str r1, [sp, #0x58]\n    add r0, sp, #0x2c\n    bl sub_020135D8\n    str r0, [r5, r4]\n    ldr r0, [r5, r4]\n    ldr r1, [sp, #0x70]\n    bl sub_020138E0\n    ldr r0, [sp, #0x18]\n    bl String_Delete\n    ldr r0, [sp, #0x14]\n    bl DestroyMsgData\n    add r0, sp, #0x1c\n    bl RemoveWindow\n    add sp, #0x5c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _020871BC: .word 0x000F0D02\n    _020871C0: .word 0x00000306"
    );
    #endif
}

void sub_020871C4(void) {
    /* Original at 0x020871C4 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r1, #0\n    add r7, r0, #0\n    add r0, r5, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl InitWindow\n    ldr r0, [sp, #0x28]\n    lsl r2, r4, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    lsl r3, r6, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    add r1, r5, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xc\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x34]\n    lsr r2, r2, #0x18\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    add r0, r7, #0\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    mov r3, #0xb\n    bl DrawFrameAndWindow2\n    add r0, r5, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    bl CopyWindowToVram\n    ldr r1, [sp, #0x38]\n    add r0, r5, #0\n    bl sub_02087230\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02087230(void) {
    /* Original at 0x02087230 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    mov r1, #0xf\n    add r4, r0, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0x26\n    mov r3, #0x6c\n    bl NewMsgDataFromNarc\n    add r1, r5, #0\n    add r6, r0, #0\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r5, #0\n    str r3, [sp, #8]\n    bl AddTextPrinterParameterized\n    add r0, r4, #0\n    bl CopyWindowToVram\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl DestroyMsgData\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}
