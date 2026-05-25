/* Decompiled from asm/overlay_109.s */
#include "global.h"

void PhotoAlbum_Init(void) {
    /* Original at 0x021E5900 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r6, r0, #0\n    cmp r1, #0\n    beq _021E5912\n    cmp r1, #1\n    beq _021E5954\n    b _021E5964\n    bl ov109_021E5A20\n    mov r2, #2\n    mov r0, #3\n    mov r1, #0x60\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    mov r1, #0x7d\n    add r0, r6, #0\n    lsl r1, r1, #2\n    mov r2, #0x60\n    bl OverlayManager_CreateAndGetData\n    mov r2, #0x7d\n    mov r1, #0\n    lsl r2, r2, #2\n    add r4, r0, #0\n    bl MI_CpuFill8\n    mov r0, #0x60\n    str r0, [r4]\n    add r0, r6, #0\n    bl OverlayManager_GetArgs\n    str r0, [r4, #0x10]\n    add r0, r4, #0\n    bl ov109_021E5A70\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _021E5964\n    bl OverlayManager_GetData\n    bl ov109_021E5B60\n    cmp r0, #0\n    beq _021E5964\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void PhotoAlbum_Main(void) {
    /* Original at 0x021E5968 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, [r4]\n    add r5, r0, #0\n    cmp r1, #9\n    bhi _021E59E4\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E5984: ; jump table\n    bl ov109_021E5BAC\n    str r0, [r4]\n    b _021E59E4\n    bl ov109_021E5C40\n    str r0, [r4]\n    b _021E59E4\n    bl ov109_021E5C48\n    str r0, [r4]\n    b _021E59E4\n    bl ov109_021E5C68\n    str r0, [r4]\n    b _021E59E4\n    bl ov109_021E5C88\n    str r0, [r4]\n    b _021E59E4\n    bl ov109_021E5C90\n    str r0, [r4]\n    b _021E59E4\n    bl ov109_021E5C98\n    str r0, [r4]\n    b _021E59E4\n    bl ov109_021E5CAC\n    str r0, [r4]\n    b _021E59E4\n    bl ov109_021E5BF4\n    str r0, [r4]\n    b _021E59E4\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r5, #0x94\n    ldr r0, [r5]\n    bl SpriteSystem_DrawSprites\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void PhotoAlbum_Exit(void) {
    /* Original at 0x021E59F0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl ov109_021E5B98\n    cmp r0, #0\n    bne _021E5A06\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    bl ov109_021E5A20\n    add r0, r4, #0\n    bl ov109_021E5B40\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0x60\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov109_021E5A20(void) {
    /* Original at 0x021E5A20 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _021E5A68 ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _021E5A6C ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0\n    bl sub_0200FBF4\n    mov r0, #0\n    bl sub_0200FBDC\n    mov r0, #1\n    bl sub_0200FBDC\n    pop {r3, pc}\n    _021E5A68: .word 0xFFFFE0FF\n    _021E5A6C: .word 0x04001000"
    );
    #endif
}

void ov109_021E5A70(void) {
    /* Original at 0x021E5A70 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    ldr r0, [r0, #8]\n    bl MenuInputStateMgr_GetState\n    str r0, [r5, #0xc]\n    ldr r0, [r5, #0x10]\n    ldr r0, [r0, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    add r4, r0, #0\n    bl Options_GetTextFrameDelay\n    add r1, r5, #0\n    add r1, #0x22\n    strb r0, [r1]\n    add r0, r4, #0\n    bl Options_GetFrame\n    add r1, r5, #0\n    add r1, #0x23\n    strb r0, [r1]\n    ldr r0, [r5, #0x10]\n    mov r1, #0xc\n    ldrb r6, [r0, #2]\n    add r0, r6, #0\n    bl _s32_div_f\n    ldr r0, _021E5B3C ; =ov109_021E7890\n    ldrb r4, [r0, r1]\n    add r0, r6, #0\n    mov r1, #0xc\n    bl _s32_div_f\n    strb r0, [r5, #0x19]\n    lsr r2, r4, #0x1f\n    lsl r1, r4, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    strb r0, [r5, #0x1b]\n    lsr r0, r4, #2\n    strb r0, [r5, #0x1c]\n    ldr r0, [r5, #0x10]\n    ldr r0, [r0, #0xc]\n    bl Save_PhotoAlbum_Get\n    mov r1, #0x7b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    ldr r1, [r5]\n    bl PhotoAlbum_LoadAllInUsePhotos\n    add r1, r5, #0\n    add r1, #0xc8\n    str r0, [r1]\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl PhotoAlbum_GetNumSaved\n    add r1, r5, #0\n    add r1, #0xc4\n    strb r0, [r1]\n    add r0, r5, #0\n    add r0, #0xc4\n    ldrb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xc5\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    mov r1, #0xc\n    bl _s32_div_f\n    strb r0, [r5, #0x1a]\n    add r0, r5, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    mov r1, #0xc\n    bl _s32_div_f\n    cmp r1, #0\n    beq _021E5B26\n    ldrb r0, [r5, #0x1a]\n    add r0, r0, #1\n    strb r0, [r5, #0x1a]\n    add r0, r5, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021E5B34\n    mov r0, #1\n    strb r0, [r5, #0x1a]\n    add r0, r5, #0\n    bl ov109_021E5D08\n    pop {r4, r5, r6, pc}\n    _021E5B3C: .word ov109_021E7890"
    );
    #endif
}

void ov109_021E5B40(void) {
    ov109_021E5D5C();
    Heap_Free(r4);
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)(r4 + 0x10)) + 8)), *((u32*)(r4 + 0xc)));
}

void ov109_021E5B60(void) {
    /* Original at 0x021E5B60 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    cmp r1, #0\n    beq _021E5B70\n    cmp r1, #1\n    beq _021E5B7C\n    b _021E5B92\n    bl ov109_021E5CB4\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _021E5B92\n    bl ov109_021E5EC8\n    bl sub_020210BC\n    mov r0, #4\n    bl sub_02021148\n    mov r0, #0\n    str r0, [r4, #4]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

u32 ov109_021E5B98(void) {
    sub_02021238();
    ov109_021E5CE4(r4);
    return 1;
}

void ov109_021E5BAC(void) {
    /* Original at 0x021E5BAC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021E5BBE\n    cmp r0, #1\n    beq _021E5BDC\n    b _021E5BEE\n    mov r0, #6\n    mov r1, #1\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r0, [r4]\n    add r2, r1, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _021E5BEE\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E5BEE\n    mov r0, #0\n    str r0, [r4, #4]\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov109_021E5BF4(void) {
    /* Original at 0x021E5BF4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021E5C06\n    cmp r0, #1\n    beq _021E5C26\n    b _021E5C38\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _021E5C38\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E5C38\n    mov r0, #0\n    str r0, [r4, #4]\n    add sp, #0xc\n    mov r0, #9\n    pop {r3, r4, pc}\n    mov r0, #8\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov109_021E5C40(void) {
    ov109_021E5F10();
}

void ov109_021E5C48(void) {
    ov109_021E656C(1, 2, 5);
}

void ov109_021E5C68(void) {
    ov109_021E66C4(1, 3, 5);
}

void ov109_021E5C88(void) {
    ov109_021E681C();
}

void ov109_021E5C90(void) {
    ov109_021E61BC();
}

void ov109_021E5C98(void) {
    ov109_021E61DC();
}

void ov109_021E5CAC(void) {
    ov109_021E682C();
}

void ov109_021E5CB4(void) {
    /* Original at 0x021E5CB4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov109_021E694C\n    add r0, r4, #0\n    bl ov109_021E6B5C\n    add r0, r4, #0\n    bl ov109_021E6C9C\n    add r0, r4, #0\n    bl ov109_021E6D84\n    add r0, r4, #0\n    bl ov109_021E6E9C\n    ldr r0, _021E5CE0 ; =ov109_021E685C\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    pop {r4, pc}\n    nop\n    _021E5CE0: .word ov109_021E685C"
    );
    #endif
}

void ov109_021E5CE4(void) {
    ov109_021E6EC0();
    ov109_021E6DBC(r4);
    ov109_021E6D2C(r4);
    ov109_021E6C7C(r4);
    ov109_021E6AFC(r4);
}

void ov109_021E5D08(void) {
    /* Original at 0x021E5D08 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    add r0, #0xc4\n    ldrb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xc5\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r2, #0x12\n    add r0, #0xcc\n    mov r1, #0\n    lsl r2, r2, #4\n    bl MI_CpuFill8\n    add r0, r4, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    mov r2, #0\n    cmp r0, #0\n    bls _021E5D5A\n    add r0, r4, #0\n    add r0, #0xcc\n    mov r5, #0x84\n    lsl r3, r2, #3\n    add r1, r0, r3\n    strb r2, [r0, r3]\n    add r3, r4, #0\n    add r3, #0xc8\n    ldr r6, [r3]\n    add r3, r2, #0\n    mul r3, r5\n    add r3, r6, r3\n    str r3, [r1, #4]\n    add r1, r2, #1\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x18\n    add r1, r4, #0\n    add r1, #0xc5\n    ldrb r1, [r1]\n    cmp r2, r1\n    blo _021E5D36\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov109_021E5D5C(void) {
    /* Original at 0x021E5D5C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    mov r4, #0\n    cmp r0, #0\n    bls _021E5D8E\n    mov r6, #0x7b\n    lsl r6, r6, #2\n    lsl r1, r4, #3\n    add r1, r5, r1\n    add r1, #0xd0\n    ldr r0, [r5, r6]\n    ldr r1, [r1]\n    add r2, r4, #0\n    bl PhotoAlbum_SetPhotoAtIndex\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    cmp r4, r0\n    blo _021E5D6E\n    add r0, r5, #0\n    add r0, #0xc4\n    ldrb r0, [r0]\n    cmp r4, r0\n    bhs _021E5DB4\n    mov r6, #0x7b\n    lsl r6, r6, #2\n    ldr r0, [r5, r6]\n    add r1, r4, #0\n    bl PhotoAlbum_DeletePhotoByIndex\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    add r0, #0xc4\n    ldrb r0, [r0]\n    cmp r4, r0\n    blo _021E5D9C\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov109_021E5DB8(void) {
    /* Original at 0x021E5DB8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r5, #0\n    lsl r6, r1, #3\n    add r4, #0xcc\n    add r7, r2, #0\n    add r0, r4, r6\n    add r1, sp, #0\n    mov r2, #8\n    bl MI_CpuCopy8\n    add r5, #0xcc\n    lsl r7, r7, #3\n    add r0, r5, r7\n    add r1, r4, r6\n    mov r2, #8\n    bl MI_CpuCopy8\n    add r0, sp, #0\n    add r1, r5, r7\n    mov r2, #8\n    bl MI_CpuCopy8\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov109_021E5DEC(void) {
    /* Original at 0x021E5DEC */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    add r7, r1, #0\n    sub r1, r0, #1\n    add r0, r5, #0\n    add r0, #0xc5\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    cmp r7, r0\n    bhs _021E5E32\n    add r4, r7, #0\n    cmp r7, r0\n    bhs _021E5E32\n    add r6, r5, #0\n    add r6, #0xcc\n    add r0, r4, #1\n    lsl r0, r0, #3\n    lsl r1, r4, #3\n    add r0, r6, r0\n    add r1, r6, r1\n    mov r2, #8\n    bl MI_CpuCopy8\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    cmp r4, r0\n    blo _021E5E12\n    add r1, r5, #0\n    add r1, #0xcc\n    lsl r0, r0, #3\n    add r0, r1, r0\n    mov r1, #0\n    mov r2, #8\n    bl MI_CpuFill8\n    add r0, r5, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    mov r1, #0xc\n    bl _s32_div_f\n    strb r0, [r5, #0x1a]\n    add r0, r5, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    mov r1, #0xc\n    bl _s32_div_f\n    cmp r1, #0\n    beq _021E5E66\n    ldrb r0, [r5, #0x1a]\n    add r0, r0, #1\n    strb r0, [r5, #0x1a]\n    add r0, r5, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021E5E74\n    mov r0, #1\n    strb r0, [r5, #0x1a]\n    add r0, r5, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    cmp r7, r0\n    blo _021E5EC0\n    cmp r0, #0\n    bne _021E5E8E\n    mov r0, #3\n    strb r0, [r5, #0x1b]\n    strb r0, [r5, #0x1c]\n    mov r0, #0\n    strb r0, [r5, #0x19]\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r7, #0\n    beq _021E5E98\n    sub r0, r7, #1\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    add r0, r7, #0\n    mov r1, #0xc\n    bl _s32_div_f\n    strb r0, [r5, #0x19]\n    add r0, r7, #0\n    mov r1, #0xc\n    bl _s32_div_f\n    ldr r0, _021E5EC4 ; =ov109_021E7890\n    ldrb r3, [r0, r1]\n    mov r0, #0x1e\n    lsr r2, r3, #0x1f\n    lsl r1, r3, #0x1e\n    sub r1, r1, r2\n    ror r1, r0\n    add r0, r2, r1\n    strb r0, [r5, #0x1b]\n    lsr r0, r3, #2\n    strb r0, [r5, #0x1c]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E5EC4: .word ov109_021E7890"
    );
    #endif
}

void ov109_021E5EC8(void) {
    /* Original at 0x021E5EC8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r3, [r4, #0x19]\n    mov r1, #3\n    add r2, r1, #0\n    bl ov109_021E70C4\n    add r0, r4, #0\n    bl ov109_021E7524\n    add r0, r4, #0\n    mov r1, #0\n    bl ov109_021E7388\n    mov r1, #0\n    add r0, r4, #0\n    mov r2, #1\n    add r3, r1, #0\n    bl ov109_021E73F8\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    add r0, r4, #0\n    mov r3, #1\n    bl ov109_021E7474\n    ldr r0, [r4, #0x14]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [r4, #0x14]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    pop {r4, pc}"
    );
    #endif
}

void ov109_021E5F10(void) {
    /* Original at 0x021E5F10 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp]\n    ldrb r1, [r4, #0x18]\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x1f\n    beq _021E5F28\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, pc}\n    add r1, sp, #0\n    bl ov109_021E5FFC\n    ldr r1, [sp]\n    cmp r1, #0\n    bne _021E5F3A\n    add r0, r4, #0\n    bl ov109_021E6058\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov109_021E5F40(void) {
    /* Original at 0x021E5F40 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    cmp r1, #0xc\n    beq _021E5F52\n    cmp r1, #0xd\n    beq _021E5F6A\n    cmp r1, #0xe\n    beq _021E5F86\n    b _021E5FA6\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    strb r1, [r0, #1]\n    ldr r0, _021E5FF4 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #1\n    bl ov109_021E7388\n    mov r0, #8\n    pop {r3, r4, r5, pc}\n    ldrb r1, [r5, #0x19]\n    cmp r1, #0\n    bne _021E5F74\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r1, #2\n    bl ov109_021E7584\n    mov r0, #0x92\n    lsl r0, r0, #4\n    bl PlaySE\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    ldrb r1, [r5, #0x1a]\n    ldrb r2, [r5, #0x19]\n    sub r1, r1, #1\n    cmp r2, r1\n    bne _021E5F94\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r1, #3\n    bl ov109_021E7584\n    mov r0, #0x92\n    lsl r0, r0, #4\n    bl PlaySE\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E5FF8 ; =_021E7884\n    ldrb r2, [r0, r1]\n    ldrb r1, [r5, #0x19]\n    mov r0, #0xc\n    mul r0, r1\n    add r0, r2, r0\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    cmp r4, r0\n    blo _021E5FC4\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    strb r4, [r5, #0x1f]\n    ldrb r0, [r5, #0x1b]\n    strb r0, [r5, #0x1d]\n    ldrb r0, [r5, #0x1c]\n    strb r0, [r5, #0x1e]\n    ldr r0, _021E5FF4 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    bl ov109_021E75C8\n    lsl r1, r4, #3\n    add r1, r5, r1\n    add r1, #0xd0\n    ldr r1, [r1]\n    add r0, r5, #0\n    bl ov109_021E7248\n    add r0, r5, #0\n    mov r1, #1\n    bl ov109_021E74D4\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    _021E5FF4: .word 0x000005DC\n    _021E5FF8: .word _021E7884"
    );
    #endif
}

void ov109_021E5FFC(void) {
    /* Original at 0x021E5FFC */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _021E6050 ; =ov109_021E7A18\n    add r6, r1, #0\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _021E6016\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    bne _021E6022\n    add r0, r5, #0\n    bl ov109_021E75B4\n    mov r3, #1\n    str r3, [r6]\n    cmp r4, #0xc\n    bhs _021E6044\n    mov r0, #3\n    and r0, r4\n    strb r0, [r5, #0x1b]\n    lsr r0, r4, #2\n    strb r0, [r5, #0x1c]\n    ldrb r1, [r5, #0x1b]\n    ldrb r2, [r5, #0x1c]\n    add r0, r5, #0\n    bl ov109_021E7474\n    ldr r0, _021E6054 ; =0x000005DC\n    bl PlaySE\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov109_021E5F40\n    pop {r4, r5, r6, pc}\n    _021E6050: .word ov109_021E7A18\n    _021E6054: .word 0x000005DC"
    );
    #endif
}

void ov109_021E6058(void) {
    /* Original at 0x021E6058 */
    /* Requires manual decompilation - 163 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #1\n    bne _021E6070\n    ldr r1, _021E61B4 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #0xf3\n    tst r1, r2\n    beq _021E6070\n    bl ov109_021E75B4\n    ldr r0, _021E61B4 ; =gSystem\n    mov r1, #1\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _021E6096\n    ldrb r0, [r4, #0x1c]\n    ldrb r1, [r4, #0x1b]\n    cmp r0, #3\n    blo _021E6086\n    mov r1, #0xc\n    b _021E608E\n    lsl r0, r0, #2\n    add r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    add r0, r4, #0\n    bl ov109_021E5F40\n    pop {r4, pc}\n    mov r1, #2\n    tst r1, r0\n    beq _021E60A6\n    add r0, r4, #0\n    mov r1, #0xc\n    bl ov109_021E5F40\n    pop {r4, pc}\n    mov r1, #0x20\n    tst r1, r0\n    beq _021E60F6\n    ldrb r0, [r4, #0x1c]\n    ldrb r1, [r4, #0x1b]\n    cmp r0, #3\n    blo _021E60B8\n    mov r0, #0xc\n    b _021E60C0\n    lsl r0, r0, #2\n    add r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #0xc\n    bne _021E60C8\n    mov r0, #1\n    pop {r4, pc}\n    cmp r1, #0\n    beq _021E60E6\n    ldr r0, _021E61B8 ; =0x000005DC\n    bl PlaySE\n    ldrb r0, [r4, #0x1b]\n    mov r3, #1\n    sub r0, r0, #1\n    strb r0, [r4, #0x1b]\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov109_021E7474\n    b _021E61B0\n    ldrb r0, [r4, #0x19]\n    cmp r0, #0\n    beq _021E61B0\n    add r0, r4, #0\n    mov r1, #0xd\n    bl ov109_021E5F40\n    pop {r4, pc}\n    mov r1, #0x10\n    tst r1, r0\n    beq _021E614A\n    ldrb r0, [r4, #0x1c]\n    ldrb r1, [r4, #0x1b]\n    cmp r0, #3\n    blo _021E6108\n    mov r0, #0xc\n    b _021E6110\n    lsl r0, r0, #2\n    add r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #0xc\n    bne _021E6118\n    mov r0, #1\n    pop {r4, pc}\n    cmp r1, #3\n    bhs _021E6136\n    ldr r0, _021E61B8 ; =0x000005DC\n    bl PlaySE\n    ldrb r0, [r4, #0x1b]\n    mov r3, #1\n    add r0, r0, #1\n    strb r0, [r4, #0x1b]\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov109_021E7474\n    b _021E61B0\n    ldrb r0, [r4, #0x1a]\n    ldrb r1, [r4, #0x19]\n    sub r0, r0, #1\n    cmp r1, r0\n    bge _021E61B0\n    add r0, r4, #0\n    mov r1, #0xe\n    bl ov109_021E5F40\n    pop {r4, pc}\n    mov r1, #0x40\n    tst r1, r0\n    beq _021E6186\n    ldrb r0, [r4, #0x1c]\n    cmp r0, #4\n    bne _021E6160\n    ldrb r0, [r4, #0x1b]\n    cmp r0, #3\n    bhs _021E6160\n    mov r0, #3\n    strb r0, [r4, #0x1b]\n    ldr r0, _021E61B8 ; =0x000005DC\n    bl PlaySE\n    ldrb r0, [r4, #0x1c]\n    mov r3, #1\n    add r0, r0, #3\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    strb r0, [r4, #0x1c]\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov109_021E7474\n    b _021E61B0\n    mov r1, #0x80\n    tst r0, r1\n    beq _021E61B0\n    ldr r0, _021E61B8 ; =0x000005DC\n    bl PlaySE\n    ldrb r0, [r4, #0x1c]\n    mov r3, #1\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    strb r0, [r4, #0x1c]\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov109_021E7474\n    mov r0, #1\n    pop {r4, pc}\n    _021E61B4: .word gSystem\n    _021E61B8: .word 0x000005DC"
    );
    #endif
}

void ov109_021E61BC(void) {
    /* Original at 0x021E61BC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0\n    str r1, [sp]\n    add r1, sp, #0\n    add r4, r0, #0\n    bl ov109_021E638C\n    ldr r1, [sp]\n    cmp r1, #0\n    bne _021E61D8\n    add r0, r4, #0\n    bl ov109_021E63E8\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov109_021E61DC(void) {
    /* Original at 0x021E61DC */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r1, [r4, #8]\n    cmp r1, #0\n    beq _021E61EC\n    cmp r1, #1\n    beq _021E6220\n    b _021E624C\n    ldrh r2, [r4, #0xa]\n    add r1, r2, #1\n    strh r1, [r4, #0xa]\n    cmp r2, #0xf\n    bhs _021E61FA\n    mov r0, #0\n    pop {r4, pc}\n    ldrb r3, [r4, #0x19]\n    mov r1, #3\n    add r2, r1, #0\n    bl ov109_021E70C4\n    add r3, r4, #0\n    add r3, #0x22\n    ldrb r3, [r3]\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0\n    bl ov109_021E73F8\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    b _021E6282\n    ldrh r1, [r4, #0xa]\n    add r0, r1, #1\n    strh r0, [r4, #0xa]\n    cmp r1, #0x1e\n    bhs _021E622E\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _021E6240\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    b _021E6282\n    mov r1, #0\n    add r0, #0x20\n    strb r1, [r0]\n    ldr r0, _021E6288 ; =0x000005DC\n    bl PlaySE\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    add r0, r4, #0\n    mov r3, #1\n    bl ov109_021E7474\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov109_021E73F8\n    ldr r0, [r4, #0x14]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    strh r0, [r4, #8]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _021E6288: .word 0x000005DC"
    );
    #endif
}

void ov109_021E628C(void) {
    /* Original at 0x021E628C */
    /* Requires manual decompilation - 110 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    cmp r1, #0xc\n    beq _021E629E\n    cmp r1, #0xd\n    beq _021E62D0\n    cmp r1, #0xe\n    beq _021E62EC\n    b _021E630C\n    ldr r0, _021E6384 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0\n    bl ov109_021E7248\n    add r0, r5, #0\n    mov r1, #0\n    bl ov109_021E74D4\n    add r0, r5, #0\n    bl ov109_021E77D4\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov109_021E73F8\n    mov r0, #0\n    add r5, #0x20\n    strb r0, [r5]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldrb r1, [r5, #0x19]\n    cmp r1, #0\n    bne _021E62DA\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    mov r1, #2\n    bl ov109_021E7584\n    mov r0, #0x92\n    lsl r0, r0, #4\n    bl PlaySE\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    ldrb r1, [r5, #0x1a]\n    ldrb r2, [r5, #0x19]\n    sub r1, r1, #1\n    cmp r2, r1\n    bne _021E62FA\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    mov r1, #3\n    bl ov109_021E7584\n    mov r0, #0x92\n    lsl r0, r0, #4\n    bl PlaySE\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E6388 ; =_021E7884\n    ldrb r2, [r0, r1]\n    ldrb r1, [r5, #0x19]\n    mov r0, #0xc\n    mul r0, r1\n    add r0, r2, r0\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    cmp r4, r0\n    blo _021E632A\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E6384 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0\n    bl ov109_021E74D4\n    add r0, r5, #0\n    mov r1, #0\n    bl ov109_021E7248\n    ldrb r1, [r5, #0x1f]\n    cmp r4, r1\n    beq _021E636C\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov109_021E5DB8\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov109_021E71BC\n    ldrb r1, [r5, #0x1b]\n    ldrb r2, [r5, #0x1c]\n    add r0, r5, #0\n    mov r3, #0\n    bl ov109_021E7474\n    mov r0, #0\n    strh r0, [r5, #0xa]\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x20\n    strb r1, [r0]\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov109_021E73F8\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6384: .word 0x000005DC\n    _021E6388: .word _021E7884"
    );
    #endif
}

void ov109_021E638C(void) {
    /* Original at 0x021E638C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _021E63E0 ; =ov109_021E7A18\n    add r6, r1, #0\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _021E63A6\n    mov r0, #5\n    pop {r4, r5, r6, pc}\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    bne _021E63B2\n    add r0, r5, #0\n    bl ov109_021E75B4\n    mov r3, #1\n    str r3, [r6]\n    cmp r4, #0xc\n    bhs _021E63D4\n    mov r0, #3\n    and r0, r4\n    strb r0, [r5, #0x1b]\n    lsr r0, r4, #2\n    strb r0, [r5, #0x1c]\n    ldrb r1, [r5, #0x1b]\n    ldrb r2, [r5, #0x1c]\n    add r0, r5, #0\n    bl ov109_021E7474\n    ldr r0, _021E63E4 ; =0x000005DC\n    bl PlaySE\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov109_021E628C\n    pop {r4, r5, r6, pc}\n    _021E63E0: .word ov109_021E7A18\n    _021E63E4: .word 0x000005DC"
    );
    #endif
}

void ov109_021E63E8(void) {
    /* Original at 0x021E63E8 */
    /* Requires manual decompilation - 179 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #1\n    bne _021E6400\n    ldr r1, _021E6564 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #0xf3\n    tst r1, r2\n    beq _021E6400\n    bl ov109_021E75B4\n    ldr r0, _021E6564 ; =gSystem\n    mov r1, #1\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _021E6426\n    ldrb r0, [r4, #0x1c]\n    ldrb r1, [r4, #0x1b]\n    cmp r0, #3\n    blo _021E6416\n    mov r1, #0xc\n    b _021E641E\n    lsl r0, r0, #2\n    add r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    add r0, r4, #0\n    bl ov109_021E628C\n    pop {r4, pc}\n    mov r1, #2\n    tst r1, r0\n    beq _021E6436\n    add r0, r4, #0\n    mov r1, #0xc\n    bl ov109_021E628C\n    pop {r4, pc}\n    mov r1, #0x20\n    tst r1, r0\n    beq _021E6496\n    ldrb r0, [r4, #0x1c]\n    ldrb r1, [r4, #0x1b]\n    cmp r0, #3\n    blo _021E6448\n    mov r0, #0xc\n    b _021E6450\n    lsl r0, r0, #2\n    add r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #0xc\n    bne _021E6458\n    mov r0, #1\n    pop {r4, pc}\n    cmp r1, #0\n    beq _021E6476\n    ldr r0, _021E6568 ; =0x000005DC\n    bl PlaySE\n    ldrb r0, [r4, #0x1b]\n    mov r3, #1\n    sub r0, r0, #1\n    strb r0, [r4, #0x1b]\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov109_021E7474\n    b _021E6560\n    ldrb r0, [r4, #0x19]\n    cmp r0, #0\n    beq _021E6560\n    add r0, r1, #3\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    strb r0, [r4, #0x1b]\n    add r0, r4, #0\n    mov r1, #0xd\n    bl ov109_021E628C\n    pop {r4, pc}\n    mov r1, #0x10\n    tst r1, r0\n    beq _021E64FA\n    ldrb r1, [r4, #0x1c]\n    ldrb r0, [r4, #0x1b]\n    cmp r1, #3\n    blo _021E64A8\n    mov r1, #0xc\n    b _021E64B0\n    lsl r1, r1, #2\n    add r1, r0, r1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, #0xc\n    bne _021E64B8\n    mov r0, #1\n    pop {r4, pc}\n    cmp r0, #3\n    bhs _021E64D6\n    ldr r0, _021E6568 ; =0x000005DC\n    bl PlaySE\n    ldrb r0, [r4, #0x1b]\n    mov r3, #1\n    add r0, r0, #1\n    strb r0, [r4, #0x1b]\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov109_021E7474\n    b _021E6560\n    ldrb r1, [r4, #0x1a]\n    ldrb r2, [r4, #0x19]\n    sub r1, r1, #1\n    cmp r2, r1\n    bge _021E6560\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    strb r0, [r4, #0x1b]\n    add r0, r4, #0\n    mov r1, #0xe\n    bl ov109_021E628C\n    pop {r4, pc}\n    mov r1, #0x40\n    tst r1, r0\n    beq _021E6536\n    ldrb r0, [r4, #0x1c]\n    cmp r0, #4\n    bne _021E6510\n    ldrb r0, [r4, #0x1b]\n    cmp r0, #3\n    bhs _021E6510\n    mov r0, #3\n    strb r0, [r4, #0x1b]\n    ldr r0, _021E6568 ; =0x000005DC\n    bl PlaySE\n    ldrb r0, [r4, #0x1c]\n    mov r3, #1\n    add r0, r0, #3\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    strb r0, [r4, #0x1c]\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov109_021E7474\n    b _021E6560\n    mov r1, #0x80\n    tst r0, r1\n    beq _021E6560\n    ldr r0, _021E6568 ; =0x000005DC\n    bl PlaySE\n    ldrb r0, [r4, #0x1c]\n    mov r3, #1\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    strb r0, [r4, #0x1c]\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov109_021E7474\n    mov r0, #5\n    pop {r4, pc}\n    _021E6564: .word gSystem\n    _021E6568: .word 0x000005DC"
    );
    #endif
}

void ov109_021E656C(void) {
    /* Original at 0x021E656C */
    /* Requires manual decompilation - 154 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r1, [r4, #8]\n    cmp r1, #0\n    beq _021E6580\n    cmp r1, #1\n    beq _021E65DC\n    cmp r1, #2\n    beq _021E6634\n    b _021E66BC\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    mov r3, #0\n    bl ov109_021E7474\n    add r0, r4, #0\n    mov r1, #0\n    bl ov109_021E74D4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov109_021E68B8\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl ov109_021E691C\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov109_021E6F7C\n    ldrb r3, [r4, #0x19]\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #1\n    bl ov109_021E70C4\n    ldrb r3, [r4, #0x19]\n    add r0, r4, #0\n    mov r1, #3\n    sub r3, r3, #1\n    lsl r3, r3, #0x18\n    mov r2, #1\n    lsr r3, r3, #0x18\n    bl ov109_021E70C4\n    ldrb r1, [r4, #0x18]\n    mov r0, #0xf0\n    bic r1, r0\n    strb r1, [r4, #0x18]\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    b _021E66BC\n    ldrb r3, [r4, #0x18]\n    mov r2, #0xf0\n    add r1, r3, #0\n    bic r1, r2\n    lsl r2, r3, #0x18\n    lsr r2, r2, #0x1c\n    add r2, r2, #1\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x18\n    orr r1, r2\n    strb r1, [r4, #0x18]\n    ldrb r1, [r4, #0x18]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1c\n    lsl r2, r1, #2\n    ldr r1, _021E66C0 ; =ov109_021E78DC\n    ldr r1, [r1, r2]\n    bl ov109_021E691C\n    ldrb r0, [r4, #0x18]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    cmp r0, #4\n    blo _021E66BC\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #1\n    bl ov109_021E6F7C\n    ldrb r3, [r4, #0x19]\n    mov r1, #2\n    add r0, r4, #0\n    sub r3, r3, #1\n    lsl r3, r3, #0x18\n    add r2, r1, #0\n    lsr r3, r3, #0x18\n    bl ov109_021E70C4\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    b _021E66BC\n    ldrb r3, [r4, #0x18]\n    mov r2, #0xf0\n    add r1, r3, #0\n    bic r1, r2\n    lsl r2, r3, #0x18\n    lsr r2, r2, #0x1c\n    sub r2, r2, #1\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x18\n    orr r1, r2\n    strb r1, [r4, #0x18]\n    ldrb r1, [r4, #0x18]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1c\n    lsl r2, r1, #2\n    ldr r1, _021E66C0 ; =ov109_021E78DC\n    ldr r1, [r1, r2]\n    bl ov109_021E691C\n    ldrb r0, [r4, #0x18]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    bne _021E66BC\n    ldrb r3, [r4, #0x19]\n    add r0, r4, #0\n    mov r1, #3\n    sub r3, r3, #1\n    lsl r3, r3, #0x18\n    mov r2, #2\n    lsr r3, r3, #0x18\n    bl ov109_021E70C4\n    add r0, r4, #0\n    mov r1, #0\n    bl ov109_021E68B8\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl ov109_021E691C\n    ldrb r0, [r4, #0x19]\n    mov r3, #1\n    sub r0, r0, #1\n    strb r0, [r4, #0x19]\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov109_021E7474\n    add r0, r4, #0\n    bl ov109_021E7524\n    add r0, r4, #0\n    add r0, #0x20\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _021E66B4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov109_021E74D4\n    mov r0, #0\n    strh r0, [r4, #8]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _021E66C0: .word ov109_021E78DC"
    );
    #endif
}

void ov109_021E66C4(void) {
    /* Original at 0x021E66C4 */
    /* Requires manual decompilation - 154 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r1, [r4, #8]\n    cmp r1, #0\n    beq _021E66D8\n    cmp r1, #1\n    beq _021E6734\n    cmp r1, #2\n    beq _021E678C\n    b _021E6814\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    mov r3, #0\n    bl ov109_021E7474\n    add r0, r4, #0\n    mov r1, #0\n    bl ov109_021E74D4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov109_021E68B8\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl ov109_021E691C\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #1\n    bl ov109_021E6F7C\n    mov r1, #2\n    ldrb r3, [r4, #0x19]\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov109_021E70C4\n    ldrb r3, [r4, #0x19]\n    add r0, r4, #0\n    mov r1, #3\n    add r3, r3, #1\n    lsl r3, r3, #0x18\n    mov r2, #2\n    lsr r3, r3, #0x18\n    bl ov109_021E70C4\n    ldrb r1, [r4, #0x18]\n    mov r0, #0xf0\n    bic r1, r0\n    strb r1, [r4, #0x18]\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    b _021E6814\n    ldrb r3, [r4, #0x18]\n    mov r2, #0xf0\n    add r1, r3, #0\n    bic r1, r2\n    lsl r2, r3, #0x18\n    lsr r2, r2, #0x1c\n    add r2, r2, #1\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x18\n    orr r1, r2\n    strb r1, [r4, #0x18]\n    ldrb r1, [r4, #0x18]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1c\n    lsl r2, r1, #2\n    ldr r1, _021E6818 ; =ov109_021E78DC\n    ldr r1, [r1, r2]\n    bl ov109_021E691C\n    ldrb r0, [r4, #0x18]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    cmp r0, #4\n    blo _021E6814\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov109_021E6F7C\n    ldrb r3, [r4, #0x19]\n    add r0, r4, #0\n    mov r1, #2\n    add r3, r3, #1\n    lsl r3, r3, #0x18\n    mov r2, #1\n    lsr r3, r3, #0x18\n    bl ov109_021E70C4\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    b _021E6814\n    ldrb r3, [r4, #0x18]\n    mov r2, #0xf0\n    add r1, r3, #0\n    bic r1, r2\n    lsl r2, r3, #0x18\n    lsr r2, r2, #0x1c\n    sub r2, r2, #1\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x18\n    orr r1, r2\n    strb r1, [r4, #0x18]\n    ldrb r1, [r4, #0x18]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1c\n    lsl r2, r1, #2\n    ldr r1, _021E6818 ; =ov109_021E78DC\n    ldr r1, [r1, r2]\n    bl ov109_021E691C\n    ldrb r0, [r4, #0x18]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    bne _021E6814\n    ldrb r3, [r4, #0x19]\n    add r0, r4, #0\n    mov r1, #3\n    add r3, r3, #1\n    lsl r3, r3, #0x18\n    mov r2, #1\n    lsr r3, r3, #0x18\n    bl ov109_021E70C4\n    add r0, r4, #0\n    mov r1, #0\n    bl ov109_021E68B8\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl ov109_021E691C\n    ldrb r0, [r4, #0x19]\n    mov r3, #1\n    add r0, r0, #1\n    strb r0, [r4, #0x19]\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov109_021E7474\n    add r0, r4, #0\n    bl ov109_021E7524\n    add r0, r4, #0\n    add r0, #0x20\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _021E680C\n    add r0, r4, #0\n    mov r1, #1\n    bl ov109_021E74D4\n    mov r0, #0\n    strh r0, [r4, #8]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _021E6818: .word ov109_021E78DC"
    );
    #endif
}

void ov109_021E681C(void) {
    ov109_021E7640();
}

void ov109_021E682C(void) {
    /* Original at 0x021E682C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r1, [r4, #8]\n    cmp r1, #0\n    beq _021E683C\n    cmp r1, #1\n    beq _021E6848\n    b _021E6858\n    bl ov109_021E76F0\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    b _021E6858\n    bl ov109_021E7748\n    cmp r0, #7\n    beq _021E6858\n    mov r0, #0\n    strh r0, [r4, #8]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #7\n    pop {r4, pc}"
    );
    #endif
}

void ov109_021E685C(void) {
    /* Original at 0x021E685C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _021E686C\n    bl SpriteSystem_TransferOam\n    add r0, r4, #0\n    bl ov109_021E6898\n    add r0, r4, #0\n    bl ov109_021E68D4\n    bl NNS_GfdDoVramTransfer\n    ldr r0, [r4, #0x14]\n    bl DoScheduledBgGpuUpdates\n    ldr r3, _021E6890 ; =0x027E0000\n    ldr r1, _021E6894 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    _021E6890: .word 0x027E0000\n    _021E6894: .word 0x00003FF8"
    );
    #endif
}

void ov109_021E6898(void) {
    /* Original at 0x021E6898 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #0x18]\n    lsl r0, r1, #0x1d\n    lsr r0, r0, #0x1f\n    beq _021E68AE\n    lsl r1, r1, #0x1c\n    mov r0, #2\n    lsr r1, r1, #0x1f\n    bl ToggleBgLayer\n    ldrb r1, [r4, #0x18]\n    mov r0, #4\n    bic r1, r0\n    strb r1, [r4, #0x18]\n    pop {r4, pc}"
    );
    #endif
}

void ov109_021E68B8(void) {
    /* Original at 0x021E68B8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1f\n    ldrb r3, [r0, #0x18]\n    mov r2, #8\n    lsr r1, r1, #0x1c\n    bic r3, r2\n    orr r1, r3\n    strb r1, [r0, #0x18]\n    ldrb r2, [r0, #0x18]\n    mov r1, #4\n    orr r1, r2\n    strb r1, [r0, #0x18]\n    bx lr"
    );
    #endif
}

void ov109_021E68D4(void) {
    /* Original at 0x021E68D4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldrb r0, [r4, #0x18]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    beq _021E6916\n    mov r0, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    bl FX_Inv\n    str r0, [sp, #0x10]\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl FX_Inv\n    str r0, [sp, #4]\n    mov r0, #0x78\n    str r0, [sp]\n    ldr r0, [r4, #0x14]\n    mov r1, #2\n    add r2, sp, #4\n    mov r3, #0x80\n    bl SetBgAffine\n    ldrb r1, [r4, #0x18]\n    mov r0, #2\n    bic r1, r0\n    strb r1, [r4, #0x18]\n    add sp, #0x14\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov109_021E691C(void) {
    /* Original at 0x021E691C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x1f\n    lsl r2, r2, #4\n    str r1, [r0, r2]\n    ldrb r2, [r0, #0x18]\n    mov r1, #2\n    orr r1, r2\n    strb r1, [r0, #0x18]\n    bx lr"
    );
    #endif
}

void ov109_021E692C(void) {
    GfGfx_SetBanks(5);
}

void ov109_021E694C(void) {
    /* Original at 0x021E694C */
    /* Requires manual decompilation - 184 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xd4\n    add r4, r0, #0\n    bl ov109_021E692C\n    ldr r0, [r4]\n    bl BgConfig_Alloc\n    add r3, sp, #0xc4\n    ldr r5, _021E6AD4 ; =ov109_021E78B8\n    str r0, [r4, #0x14]\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r2, _021E6AD8 ; =0x04000304\n    ldr r0, _021E6ADC ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    ldr r5, _021E6AE0 ; =ov109_021E7944\n    add r3, sp, #0xa8\n    and r0, r1\n    strh r0, [r2]\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    ldr r0, [r4, #0x14]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x14]\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E6AE4 ; =ov109_021E797C\n    add r3, sp, #0x8c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #7\n    str r0, [r3]\n    ldr r0, [r4, #0x14]\n    mov r3, #2\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x14]\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E6AE8 ; =ov109_021E7998\n    add r3, sp, #0x70\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #6\n    str r0, [r3]\n    ldr r0, [r4, #0x14]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x14]\n    mov r1, #6\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E6AEC ; =ov109_021E790C\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r3]\n    mov r1, #0\n    ldr r0, [r4, #0x14]\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x14]\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E6AF0 ; =ov109_021E7928\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    ldr r0, [r4, #0x14]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x14]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E6AF4 ; =ov109_021E7960\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    ldr r0, [r4, #0x14]\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x14]\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E6AF8 ; =ov109_021E79B4\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    ldr r0, [r4, #0x14]\n    mov r3, #2\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x14]\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    ldr r3, [r4]\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    ldr r3, [r4]\n    mov r0, #6\n    mov r1, #0x20\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    mov r0, #0\n    ldr r3, [r4]\n    mov r1, #0x20\n    add r2, r0, #0\n    bl BG_ClearCharDataRange\n    ldr r3, [r4]\n    mov r0, #3\n    mov r1, #0x40\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    mov r2, #0\n    ldr r0, [r4, #0x14]\n    mov r1, #7\n    sub r3, r2, #4\n    bl BgSetPosTextAndCommit\n    add sp, #0xd4\n    pop {r4, r5, pc}\n    _021E6AD4: .word ov109_021E78B8\n    _021E6AD8: .word 0x04000304\n    _021E6ADC: .word 0xFFFF7FFF\n    _021E6AE0: .word ov109_021E7944\n    _021E6AE4: .word ov109_021E797C\n    _021E6AE8: .word ov109_021E7998\n    _021E6AEC: .word ov109_021E790C\n    _021E6AF0: .word ov109_021E7928\n    _021E6AF4: .word ov109_021E7960\n    _021E6AF8: .word ov109_021E79B4"
    );
    #endif
}

void ov109_021E6AFC(void) {
    /* Original at 0x021E6AFC */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r2, #0\n    ldr r0, [r4, #0x14]\n    mov r1, #7\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r4, #0x14]\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x14]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x14]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x14]\n    mov r1, #0\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x14]\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x14]\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x14]\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x14]\n    bl Heap_Free\n    ldr r2, _021E6B58 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    pop {r4, pc}\n    nop\n    _021E6B58: .word 0x04000304"
    );
    #endif
}

void ov109_021E6B5C(void) {
    /* Original at 0x021E6B5C */
    /* Requires manual decompilation - 130 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0xab\n    bl NARC_New\n    mov r2, #0\n    str r2, [sp]\n    ldr r1, [r5]\n    add r3, r2, #0\n    str r1, [sp, #4]\n    mov r1, #4\n    add r4, r0, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r2, r1, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #9\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x14]\n    add r0, r4, #0\n    mov r3, #6\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x14]\n    add r0, r4, #0\n    mov r3, #7\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #0xa\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x14]\n    add r0, r4, #0\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x14]\n    add r0, r4, #0\n    mov r3, #3\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #6\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x14]\n    add r0, r4, #0\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldr r0, [r5]\n    add r3, r5, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #0\n    add r3, #0xac\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    add r1, r5, #0\n    add r1, #0xb0\n    str r0, [r1]\n    ldr r0, [r5]\n    add r3, r5, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #0\n    add r3, #0xb4\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    add r1, r5, #0\n    add r1, #0xb8\n    str r0, [r1]\n    ldr r0, [r5]\n    add r3, r5, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0\n    add r3, #0xbc\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    add r1, r5, #0\n    add r1, #0xc0\n    str r0, [r1]\n    add r0, r4, #0\n    bl NARC_Delete\n    mov r1, #6\n    ldr r2, [r5]\n    mov r0, #0\n    lsl r1, r1, #6\n    bl LoadFontPal1\n    add r0, r5, #0\n    add r0, #0x23\n    ldrb r0, [r0]\n    mov r1, #0\n    mov r2, #1\n    str r0, [sp]\n    ldr r0, [r5]\n    mov r3, #0xd\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x14]\n    bl LoadUserFrameGfx2\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov109_021E6C7C(void) {
    Heap_Free();
    Heap_Free(r4);
    Heap_Free();
}

void ov109_021E6C9C(void) {
    /* Original at 0x021E6C9C */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #4\n    bl FontID_Alloc\n    mov r0, #0\n    ldr r3, [r5]\n    mov r1, #0x1b\n    add r2, r0, #0\n    bl NewMsgDataFromNarc\n    str r0, [r5, #0x24]\n    ldr r2, [r5]\n    mov r0, #6\n    mov r1, #0x16\n    bl MessageFormat_New_Custom\n    str r0, [r5, #0x28]\n    ldr r1, [r5]\n    mov r0, #0x80\n    bl String_New\n    str r0, [r5, #0x2c]\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl NewString_ReadMsgData\n    str r0, [r5, #0x30]\n    mov r4, #0\n    add r6, r5, #0\n    ldr r0, [r5, #0x24]\n    add r1, r4, #5\n    bl NewString_ReadMsgData\n    str r0, [r6, #0x34]\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #5\n    blt _021E6CDA\n    mov r4, #0\n    add r6, r5, #0\n    add r1, r4, #0\n    ldr r0, [r5, #0x24]\n    add r1, #0xa\n    bl NewString_ReadMsgData\n    str r0, [r6, #0x48]\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #2\n    blt _021E6CF0\n    ldr r1, [r5]\n    mov r0, #4\n    bl ListMenuItems_New\n    add r1, r5, #0\n    add r1, #0x88\n    str r0, [r1]\n    mov r4, #0\n    add r0, r5, #0\n    add r0, #0x88\n    ldr r0, [r0]\n    ldr r1, [r5, #0x24]\n    add r2, r4, #1\n    add r3, r4, #0\n    bl ListMenuItems_AppendFromMsgData\n    add r4, r4, #1\n    cmp r4, #4\n    blt _021E6D14\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov109_021E6D2C(void) {
    /* Original at 0x021E6D2C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r0, #0x88\n    ldr r0, [r0]\n    bl ListMenuItems_Delete\n    add r0, r6, #0\n    mov r4, #0\n    add r0, #0x88\n    str r4, [r0]\n    add r5, r6, #0\n    ldr r0, [r5, #0x48]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _021E6D42\n    mov r5, #0\n    add r4, r6, #0\n    ldr r0, [r4, #0x34]\n    bl String_Delete\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #5\n    blt _021E6D54\n    ldr r0, [r6, #0x30]\n    bl String_Delete\n    ldr r0, [r6, #0x2c]\n    bl String_Delete\n    ldr r0, [r6, #0x28]\n    bl MessageFormat_Delete\n    ldr r0, [r6, #0x24]\n    bl DestroyMsgData\n    mov r0, #4\n    bl FontID_Release\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov109_021E6D84(void) {
    /* Original at 0x021E6D84 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r7, #0\n    ldr r4, _021E6DB8 ; =ov109_021E78F4\n    mov r6, #0\n    add r5, #0x50\n    ldr r0, [r7, #0x14]\n    add r1, r5, #0\n    add r2, r4, #0\n    bl AddWindow\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r6, r6, #1\n    add r4, #8\n    add r5, #0x10\n    cmp r6, #3\n    blt _021E6D90\n    ldr r0, [r7]\n    bl YesNoPrompt_Create\n    add r7, #0x8c\n    str r0, [r7]\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E6DB8: .word ov109_021E78F4"
    );
    #endif
}

void ov109_021E6DBC(void) {
    /* Original at 0x021E6DBC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r6, #0\n    mov r4, #0\n    add r5, #0x50\n    add r0, r5, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #3\n    blt _021E6DC6\n    add r6, #0x8c\n    ldr r0, [r6]\n    bl YesNoPrompt_Destroy\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov109_021E6DE4(void) {
    /* Original at 0x021E6DE4 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r1, [r4]\n    mov r0, #0x20\n    bl GF_CreateVramTransferManager\n    ldr r0, [r4]\n    bl SpriteSystem_Alloc\n    add r1, r4, #0\n    add r1, #0x90\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    ldr r1, _021E6E58 ; =ov109_021E79D0\n    ldr r2, _021E6E5C ; =ov109_021E78C8\n    mov r3, #3\n    bl SpriteSystem_Init\n    ldr r0, [r4]\n    bl thunk_ClearMainOAM\n    ldr r0, [r4]\n    bl thunk_ClearSubOAM\n    add r0, r4, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    bl SpriteManager_New\n    add r1, r4, #0\n    add r1, #0x94\n    str r0, [r1]\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x90\n    add r1, #0x94\n    ldr r0, [r0]\n    ldr r1, [r1]\n    mov r2, #5\n    bl SpriteSystem_InitSprites\n    mov r0, #1\n    str r0, [sp]\n    add r0, r4, #0\n    add r0, #0x90\n    add r4, #0x94\n    ldr r0, [r0]\n    ldr r1, [r4]\n    ldr r2, _021E6E60 ; =ov109_021E78A8\n    mov r3, #2\n    bl sub_0200D2A4\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E6E58: .word ov109_021E79D0\n    _021E6E5C: .word ov109_021E78C8\n    _021E6E60: .word ov109_021E78A8"
    );
    #endif
}

void ov109_021E6E64(void) {
    /* Original at 0x021E6E64 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r0, #0x90\n    add r1, #0x94\n    ldr r0, [r0]\n    ldr r1, [r1]\n    bl SpriteSystem_DestroySpriteManager\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x94\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    bl SpriteSystem_Free\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x90\n    str r1, [r0]\n    bl GF_DestroyVramTransferManager\n    ldr r0, [r4]\n    bl thunk_ClearMainOAM\n    pop {r4, pc}"
    );
    #endif
}

void ov109_021E6E9C(void) {
    ov109_021E6DE4();
    ov109_021E6EE4(r4);
    TouchscreenListMenuSpawner_Create(0);
    GfGfx_EngineATogglePlanes(0x10, 1);
}

void ov109_021E6EC0(void) {
    GfGfx_EngineATogglePlanes(0x10, 0);
    ov109_021E6F60(r4);
    TouchscreenListMenuSpawner_Destroy(r4);
    ov109_021E6E64(r4);
}

void ov109_021E6EE4(void) {
    /* Original at 0x021E6EE4 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r4, _021E6F5C ; =ov109_021E7A58\n    mov r7, #0\n    add r5, r6, #0\n    add r0, r6, #0\n    add r1, r6, #0\n    add r0, #0x90\n    add r1, #0x94\n    ldr r0, [r0]\n    ldr r1, [r1]\n    add r2, r4, #0\n    bl SpriteSystem_CreateSpriteFromResourceHeader\n    add r1, r5, #0\n    add r1, #0x98\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0x98\n    ldr r0, [r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add r0, r5, #0\n    add r0, #0x98\n    mov r1, #1\n    ldr r0, [r0]\n    lsl r1, r1, #0xc\n    bl Sprite_SetAnimSpeed\n    add r7, r7, #1\n    add r4, #0x28\n    add r5, r5, #4\n    cmp r7, #5\n    blt _021E6EEE\n    add r0, r6, #0\n    add r0, #0x98\n    ldr r0, [r0]\n    mov r1, #0\n    bl Sprite_SetAnimActiveFlag\n    add r0, r6, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r6, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    mov r1, #2\n    bl Sprite_SetPriority\n    add r6, #0xa8\n    ldr r0, [r6]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E6F5C: .word ov109_021E7A58"
    );
    #endif
}

void ov109_021E6F60(void) {
    thunk_Sprite_Delete(0);
}

void ov109_021E6F7C(void) {
    /* Original at 0x021E6F7C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r0, [r5, #0x14]\n    add r4, r1, #0\n    mov r1, #2\n    add r6, r2, #0\n    bl BgClearTilemapBufferAndCommit\n    cmp r6, #0\n    beq _021E6FCE\n    add r0, r5, #0\n    add r0, #0xbc\n    lsr r1, r4, #0x1f\n    add r1, r4, r1\n    asr r2, r1, #1\n    ldr r0, [r0]\n    mov r1, #0x10\n    str r1, [sp]\n    mov r1, #0x18\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    lsl r1, r2, #0x1c\n    lsr r2, r1, #0x18\n    str r2, [sp, #0xc]\n    mov r3, #0\n    str r3, [sp, #0x10]\n    ldrh r1, [r0]\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #2\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #0x14]\n    bl CopyToBgTilemapRect\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov109_021E6FD4(void) {
    /* Original at 0x021E6FD4 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x1c\n    cmp r2, #1\n    bne _021E6FE4\n    lsl r2, r3, #1\n    mov r4, #3\n    add r2, r2, #1\n    b _021E6FEA\n    lsl r2, r3, #1\n    mov r4, #0x1c\n    add r2, r2, #2\n    lsl r2, r2, #0x18\n    lsr r3, r2, #0x18\n    add r2, r0, #0\n    add r2, #0xbc\n    ldr r2, [r2]\n    mov r5, #1\n    str r5, [sp]\n    mov r5, #2\n    str r5, [sp, #4]\n    add r5, r2, #0\n    add r5, #0xc\n    lsl r3, r3, #0x18\n    str r5, [sp, #8]\n    lsr r3, r3, #0x18\n    str r3, [sp, #0xc]\n    mov r3, #0x18\n    str r3, [sp, #0x10]\n    ldrh r3, [r2]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r3, r3, #0x15\n    lsr r3, r3, #0x18\n    str r3, [sp, #0x14]\n    ldrh r2, [r2, #2]\n    mov r3, #0xf\n    lsl r2, r2, #0x15\n    lsr r2, r2, #0x18\n    str r2, [sp, #0x18]\n    ldr r0, [r0, #0x14]\n    add r2, r4, #0\n    bl CopyToBgTilemapRect\n    add sp, #0x1c\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov109_021E7030(void) {
    /* Original at 0x021E7030 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp, #0x18]\n    str r0, [sp, #0x14]\n    mov r0, #0xc\n    mul r0, r2\n    str r3, [sp, #8]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #8]\n    str r1, [sp, #4]\n    add r0, r0, #2\n    str r0, [sp, #0xc]\n    ldr r4, [sp, #8]\n    ldr r0, [sp, #0xc]\n    add r1, r4, #0\n    cmp r1, r0\n    bge _021E70AA\n    ldr r1, _021E70C0 ; =_021E7884\n    ldr r0, [sp, #0x14]\n    add r1, r1, r0\n    add r0, r4, #0\n    add r6, r1, r0\n    ldr r0, [sp, #0x18]\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldrb r1, [r6]\n    ldr r0, [sp, #0x10]\n    add r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    add r0, r5, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    cmp r1, r0\n    str r7, [sp]\n    bhs _021E7092\n    lsl r1, r1, #3\n    add r1, r5, r1\n    add r1, #0xd0\n    lsl r3, r4, #0x18\n    ldr r1, [r1]\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    lsr r3, r3, #0x18\n    bl ov109_021E7178\n    b _021E70A0\n    lsl r3, r4, #0x18\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0\n    lsr r3, r3, #0x18\n    bl ov109_021E7178\n    ldr r0, [sp, #0xc]\n    add r4, r4, #1\n    add r6, r6, #1\n    cmp r4, r0\n    blt _021E7066\n    ldr r0, [sp, #0x14]\n    add r0, r0, #4\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, #3\n    blt _021E704C\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E70C0: .word _021E7884"
    );
    #endif
}

void ov109_021E70C4(void) {
    /* Original at 0x021E70C4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r2, #0\n    mov r2, #1\n    add r5, r0, #0\n    add r4, r1, #0\n    add r7, r3, #0\n    tst r2, r6\n    beq _021E70E8\n    add r2, r7, #0\n    mov r3, #0\n    bl ov109_021E7030\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    add r3, r7, #0\n    bl ov109_021E6FD4\n    mov r3, #2\n    add r0, r6, #0\n    tst r0, r3\n    beq _021E7106\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov109_021E7030\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #2\n    add r3, r7, #0\n    bl ov109_021E6FD4\n    lsl r1, r4, #0x18\n    ldr r0, [r5, #0x14]\n    lsr r1, r1, #0x18\n    bl ScheduleBgTilemapBufferTransfer\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov109_021E7114(void) {
    /* Original at 0x021E7114 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    str r2, [sp, #0x1c]\n    add r5, r0, #0\n    add r6, r1, #0\n    str r3, [sp, #0x20]\n    add r0, #0xb4\n    ldr r4, [r0]\n    add r0, r6, #0\n    mov r1, #6\n    bl _s32_div_f\n    add r7, r1, #0\n    add r0, r6, #0\n    mov r1, #6\n    bl _s32_div_f\n    mov r1, #5\n    str r1, [sp]\n    str r1, [sp, #4]\n    add r1, r4, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    lsl r1, r7, #2\n    add r1, r7, r1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #0xc]\n    lsl r1, r0, #2\n    add r0, r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x10]\n    ldrh r0, [r4]\n    add r3, sp, #0x28\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    ldrh r0, [r4, #2]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldrb r3, [r3, #0x10]\n    ldr r0, [r5, #0x14]\n    ldr r1, [sp, #0x1c]\n    ldr r2, [sp, #0x20]\n    bl CopyToBgTilemapRect\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov109_021E7178(void) {
    /* Original at 0x021E7178 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, _021E71B8 ; =0x00000000\n    beq _021E718C\n    ldrb r1, [r4, #4]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x19\n    add r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    add r4, sp, #0\n    ldrb r5, [r4, #0x10]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    lsl r4, r5, #2\n    add r4, r5, r4\n    add r4, r4, #1\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x18\n    mov r5, #6\n    str r4, [sp]\n    lsl r4, r3, #0x17\n    mul r5, r3\n    lsr r4, r4, #0x18\n    add r3, r5, #4\n    add r3, r4, r3\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    bl ov109_021E7114\n    pop {r3, r4, r5, pc}\n    nop\n    _021E71B8: .word 0x00000000"
    );
    #endif
}

void ov109_021E71BC(void) {
    /* Original at 0x021E71BC */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0xc\n    add r7, r2, #0\n    bl _s32_div_f\n    ldrb r1, [r4, #0x19]\n    cmp r0, r1\n    bne _021E71FE\n    add r0, r5, #0\n    mov r1, #0xc\n    bl _s32_div_f\n    ldr r0, _021E7244 ; =ov109_021E7890\n    mov r2, #3\n    ldrb r3, [r0, r1]\n    mov r1, #0\n    lsl r0, r3, #0x16\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    lsr r6, r3, #0x1f\n    lsl r5, r3, #0x1e\n    sub r5, r5, r6\n    mov r3, #0x1e\n    ror r5, r3\n    add r3, r6, r5\n    lsl r3, r3, #0x18\n    add r0, r4, #0\n    lsr r3, r3, #0x18\n    bl ov109_021E7178\n    add r0, r7, #0\n    mov r1, #0xc\n    bl _s32_div_f\n    ldrb r1, [r4, #0x19]\n    cmp r0, r1\n    bne _021E7238\n    add r0, r7, #0\n    mov r1, #0xc\n    bl _s32_div_f\n    ldr r0, _021E7244 ; =ov109_021E7890\n    mov r2, #3\n    ldrb r5, [r0, r1]\n    mov r1, #0\n    lsl r0, r5, #0x16\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    lsr r3, r5, #0x1f\n    lsl r6, r5, #0x1e\n    sub r6, r6, r3\n    mov r5, #0x1e\n    ror r6, r5\n    add r3, r3, r6\n    lsl r3, r3, #0x18\n    add r0, r4, #0\n    lsr r3, r3, #0x18\n    bl ov109_021E7178\n    ldr r0, [r4, #0x14]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E7244: .word ov109_021E7890"
    );
    #endif
}

void ov109_021E7248(void) {
    /* Original at 0x021E7248 */
    /* Requires manual decompilation - 138 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #0x14]\n    add r4, r1, #0\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [r5, #0x14]\n    mov r1, #7\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    add r0, #0x70\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x14]\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r5, #0x14]\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    cmp r4, #0\n    bne _021E728A\n    add r5, #0x70\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x10]\n    ldr r0, [r0, #0xc]\n    bl Save_PlayerData_GetProfile\n    add r2, r0, #0\n    ldr r0, [r5, #0x28]\n    mov r1, #0\n    bl BufferPlayersName\n    ldrh r0, [r4, #0x32]\n    ldr r1, [r5]\n    ldr r2, [r5, #0x2c]\n    bl MapID_GetLandmarkName\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #2\n    str r3, [sp, #4]\n    ldr r0, [r5, #0x28]\n    ldr r2, [r5, #0x2c]\n    mov r1, #1\n    bl BufferString\n    add r1, r4, #0\n    ldr r0, [r5, #0x2c]\n    add r1, #0x18\n    bl CopyU16ArrayToString\n    mov r0, #0\n    mov r1, #2\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r0, [r5, #0x28]\n    ldr r2, [r5, #0x2c]\n    add r3, r1, #0\n    bl BufferString\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, [r4, #0x38]\n    ldr r0, [r5, #0x28]\n    lsr r2, r2, #0x18\n    lsl r2, r2, #0x18\n    lsr r3, r2, #0x18\n    mov r2, #0x7d\n    lsl r2, r2, #4\n    add r2, r3, r2\n    mov r1, #3\n    mov r3, #4\n    bl BufferIntegerAsString\n    mov r3, #2\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, [r4, #0x38]\n    ldr r0, [r5, #0x28]\n    lsr r2, r2, #0x10\n    lsl r2, r2, #0x18\n    mov r1, #4\n    lsr r2, r2, #0x18\n    bl BufferIntegerAsString\n    mov r3, #2\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, [r4, #0x38]\n    ldr r0, [r5, #0x28]\n    lsr r2, r2, #8\n    lsl r2, r2, #0x18\n    mov r1, #5\n    lsr r2, r2, #0x18\n    bl BufferIntegerAsString\n    add r0, r4, #0\n    bl ov109_021E7850\n    cmp r0, #1\n    ldr r0, [r5, #0x28]\n    bls _021E733A\n    ldr r1, [r5, #0x2c]\n    ldr r2, [r5, #0x4c]\n    bl StringExpandPlaceholders\n    b _021E7342\n    ldr r1, [r5, #0x2c]\n    ldr r2, [r5, #0x48]\n    bl StringExpandPlaceholders\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E7384 ; =0x00030200\n    add r3, r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    ldr r2, [r5, #0x2c]\n    add r0, #0x70\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    add r0, #0x70\n    bl ScheduleWindowCopyToVram\n    mov r0, #8\n    str r0, [sp]\n    ldrb r1, [r4, #4]\n    add r0, r5, #0\n    mov r2, #7\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x19\n    add r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    mov r3, #0xd\n    bl ov109_021E7114\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021E7384: .word 0x00030200"
    );
    #endif
}

void ov109_021E7388(void) {
    /* Original at 0x021E7388 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    add r5, r1, #0\n    add r0, #0x50\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    cmp r5, #0\n    beq _021E73B2\n    add r0, r4, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    mov r1, #9\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    bl Sprite_ResetAnimCtrlState\n    ldr r1, [r4, #0x30]\n    mov r0, #4\n    mov r2, #0\n    bl FontID_String_GetWidth\n    mov r1, #0\n    add r3, r0, #0\n    mov r5, #0x40\n    sub r3, r5, r3\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E73F4 ; =0x00010500\n    lsr r3, r3, #1\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r4, #0\n    ldr r2, [r4, #0x30]\n    add r0, #0x50\n    mov r1, #4\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    add r0, #0x50\n    bl ScheduleWindowCopyToVram\n    ldr r0, [r4, #0x14]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021E73F4: .word 0x00010500"
    );
    #endif
}

void ov109_021E73F8(void) {
    /* Original at 0x021E73F8 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r3, #0\n    cmp r2, #0\n    beq _021E7412\n    mov r1, #1\n    add r0, #0x60\n    add r2, r1, #0\n    mov r3, #0xd\n    bl DrawFrameAndWindow2\n    add r0, r5, #0\n    add r0, #0x60\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    cmp r6, #0\n    bne _021E7440\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E7470 ; =0x0001020F\n    lsl r2, r4, #2\n    str r0, [sp, #8]\n    add r0, r5, #0\n    str r1, [sp, #0xc]\n    add r2, r5, r2\n    ldr r2, [r2, #0x34]\n    add r0, #0x60\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    b _021E7462\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, _021E7470 ; =0x0001020F\n    str r6, [sp, #4]\n    str r0, [sp, #8]\n    lsl r2, r4, #2\n    add r0, r5, #0\n    str r1, [sp, #0xc]\n    add r2, r5, r2\n    ldr r2, [r2, #0x34]\n    add r0, #0x60\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r1, r5, #0\n    add r1, #0x21\n    strb r0, [r1]\n    add r5, #0x60\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021E7470: .word 0x0001020F"
    );
    #endif
}

void ov109_021E7474(void) {
    /* Original at 0x021E7474 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, #0x98\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r1, r3, #0\n    add r6, r2, #0\n    bl Sprite_SetDrawFlag\n    cmp r6, #3\n    bne _021E749C\n    add r0, r5, #0\n    add r0, #0x98\n    ldr r0, [r0]\n    mov r1, #1\n    mov r7, #0xc0\n    mov r4, #0xa0\n    bl Sprite_SetAnimationFrame\n    b _021E74C4\n    mov r0, #0x30\n    add r1, r4, #0\n    mul r1, r0\n    lsr r0, r4, #1\n    add r1, #0x1c\n    lsl r0, r0, #3\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    asr r7, r0, #0x10\n    mov r0, #0x28\n    mul r0, r6\n    add r0, #8\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    add r0, r5, #0\n    add r0, #0x98\n    ldr r0, [r0]\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    add r5, #0x98\n    ldr r0, [r5]\n    add r1, r7, #0\n    add r2, r4, #0\n    bl Sprite_SetPositionXY\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov109_021E74D4(void) {
    /* Original at 0x021E74D4 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x1f]\n    add r4, r1, #0\n    mov r1, #0xc\n    bl _s32_div_f\n    lsl r0, r0, #0x18\n    ldrb r1, [r5, #0x19]\n    lsr r0, r0, #0x18\n    cmp r1, r0\n    beq _021E74EE\n    mov r4, #0\n    ldrb r3, [r5, #0x1d]\n    add r0, r5, #0\n    add r0, #0x9c\n    mov r1, #0x30\n    add r2, r3, #0\n    mul r2, r1\n    lsr r1, r3, #1\n    ldrb r3, [r5, #0x1e]\n    add r2, #0x1c\n    lsl r1, r1, #3\n    add r1, r2, r1\n    mov r2, #0x28\n    mul r2, r3\n    add r2, #8\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r0]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl Sprite_SetPositionXY\n    add r5, #0x9c\n    ldr r0, [r5]\n    add r1, r4, #0\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov109_021E7524(void) {
    /* Original at 0x021E7524 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    mov r1, #0\n    bl Sprite_SetAnimActiveFlag\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    mov r1, #0\n    bl Sprite_SetAnimActiveFlag\n    ldrb r0, [r4, #0x19]\n    cmp r0, #0\n    bne _021E7552\n    add r0, r4, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    mov r1, #2\n    bl Sprite_SetAnimCtrlSeq\n    b _021E755E\n    add r0, r4, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    mov r1, #0\n    bl Sprite_SetAnimCtrlSeq\n    ldrb r0, [r4, #0x1a]\n    cmp r0, #0\n    beq _021E756C\n    ldrb r1, [r4, #0x19]\n    sub r0, r0, #1\n    cmp r1, r0\n    bne _021E7578\n    add r4, #0xa4\n    ldr r0, [r4]\n    mov r1, #5\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, pc}\n    add r4, #0xa4\n    ldr r0, [r4]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, pc}"
    );
    #endif
}

void ov109_021E7584(void) {
    /* Original at 0x021E7584 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r5, #0x98\n    lsl r4, r6, #2\n    ldr r0, [r5, r4]\n    bl Sprite_ResetAnimCtrlState\n    ldr r0, [r5, r4]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    cmp r6, #2\n    ldr r0, [r5, r4]\n    bne _021E75AA\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, r5, r6, pc}\n    mov r1, #4\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov109_021E75B4(void) {
    /* Original at 0x021E75B4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0xc]\n    cmp r1, #0\n    bne _021E75BE\n    mov r1, #1\n    b _021E75C0\n    mov r1, #0\n    str r1, [r0, #0xc]\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov109_021E75C8(void) {
    /* Original at 0x021E75C8 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x24\n    add r4, r0, #0\n    add r0, sp, #0xc\n    mov r1, #0\n    mov r2, #0x18\n    bl MI_CpuFill8\n    ldr r0, _021E763C ; =ov109_021E789C\n    add r2, sp, #0xc\n    ldrh r3, [r0]\n    add r1, sp, #0xc\n    strh r3, [r2]\n    ldrh r3, [r0, #2]\n    strh r3, [r2, #2]\n    ldrh r3, [r0, #4]\n    strh r3, [r2, #4]\n    ldrh r3, [r0, #6]\n    strh r3, [r2, #6]\n    ldrh r3, [r0, #8]\n    ldrh r0, [r0, #0xa]\n    strh r3, [r2, #8]\n    strh r0, [r2, #0xa]\n    add r0, r4, #0\n    add r0, #0x88\n    ldr r0, [r0]\n    mov r3, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0x14]\n    str r0, [sp, #0x1c]\n    mov r0, #4\n    strb r0, [r2, #0x14]\n    mov r0, #0xb\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r2, [r4, #0xc]\n    add r0, #0x80\n    lsl r2, r2, #0x18\n    ldr r0, [r0]\n    lsr r2, r2, #0x18\n    bl TouchscreenListMenu_Create\n    add r1, r4, #0\n    add r1, #0x84\n    str r0, [r1]\n    ldrb r1, [r4, #0x1b]\n    ldrb r2, [r4, #0x1c]\n    add r0, r4, #0\n    mov r3, #0\n    bl ov109_021E7474\n    add sp, #0x24\n    pop {r3, r4, pc}\n    nop\n    _021E763C: .word ov109_021E789C"
    );
    #endif
}

void ov109_021E7640(void) {
    /* Original at 0x021E7640 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    bl TouchscreenListMenu_HandleInput\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _021E76EC\n    add r0, r5, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    bl TouchscreenListMenu_WasLastInputTouch\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    bl TouchscreenListMenu_Destroy\n    ldr r0, [r5, #0xc]\n    cmp r0, r6\n    beq _021E7678\n    add r0, r5, #0\n    bl ov109_021E75B4\n    cmp r4, #0\n    beq _021E7686\n    cmp r4, #1\n    beq _021E7696\n    cmp r4, #2\n    beq _021E76AC\n    b _021E76CE\n    ldr r0, [r5, #0x10]\n    mov r1, #1\n    strb r1, [r0, #1]\n    ldrb r1, [r5, #0x1f]\n    ldr r0, [r5, #0x10]\n    strb r1, [r0, #2]\n    mov r0, #8\n    pop {r4, r5, r6, pc}\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #4\n    add r3, r2, #0\n    bl ov109_021E73F8\n    mov r0, #2\n    add r5, #0x20\n    strb r0, [r5]\n    mov r0, #7\n    pop {r4, r5, r6, pc}\n    ldrb r1, [r5, #0x1b]\n    ldrb r2, [r5, #0x1c]\n    add r0, r5, #0\n    mov r3, #1\n    bl ov109_021E7474\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl ov109_021E73F8\n    mov r0, #1\n    add r5, #0x20\n    strb r0, [r5]\n    mov r0, #5\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    mov r1, #0\n    bl ov109_021E7248\n    add r0, r5, #0\n    mov r1, #0\n    bl ov109_021E74D4\n    ldrb r1, [r5, #0x1b]\n    ldrb r2, [r5, #0x1c]\n    add r0, r5, #0\n    mov r3, #1\n    bl ov109_021E7474\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov109_021E76F0(void) {
    /* Original at 0x021E76F0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    ldr r0, [r4, #0x14]\n    mov r1, #0x19\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x7a\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    strb r1, [r0, #0x10]\n    mov r2, #0x10\n    strb r2, [r0, #0x11]\n    ldrb r1, [r0, #0x12]\n    mov r3, #0xf\n    bic r1, r3\n    ldr r3, [r4, #0xc]\n    add r4, #0x8c\n    lsl r3, r3, #0x18\n    lsr r5, r3, #0x18\n    mov r3, #0xf\n    and r3, r5\n    orr r1, r3\n    strb r1, [r0, #0x12]\n    ldrb r3, [r0, #0x12]\n    mov r1, #0xf0\n    bic r3, r1\n    add r1, r3, #0\n    orr r1, r2\n    strb r1, [r0, #0x12]\n    ldr r0, [r4]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov109_021E7748(void) {
    /* Original at 0x021E7748 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    bl YesNoPrompt_HandleInput\n    add r4, r0, #0\n    cmp r4, #1\n    beq _021E7760\n    cmp r4, #2\n    beq _021E776E\n    b _021E776A\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov109_021E5DEC\n    b _021E776E\n    mov r0, #7\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    bl YesNoPrompt_IsInTouchMode\n    ldr r1, [r5, #0xc]\n    cmp r0, r1\n    beq _021E7780\n    str r0, [r5, #0xc]\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    bl YesNoPrompt_Reset\n    add r0, r5, #0\n    mov r1, #0\n    bl ov109_021E74D4\n    cmp r4, #1\n    bne _021E77A8\n    ldrb r3, [r5, #0x19]\n    mov r1, #3\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov109_021E70C4\n    add r0, r5, #0\n    bl ov109_021E7524\n    ldrb r1, [r5, #0x1b]\n    ldrb r2, [r5, #0x1c]\n    add r0, r5, #0\n    mov r3, #1\n    bl ov109_021E7474\n    add r0, r5, #0\n    mov r1, #0\n    bl ov109_021E7248\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov109_021E73F8\n    mov r0, #0\n    add r5, #0x20\n    strb r0, [r5]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov109_021E77D4(void) {
    /* Original at 0x021E77D4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #8\n    bl Heap_AllocAtEnd\n    mov r1, #0\n    mov r2, #8\n    add r5, r0, #0\n    bl MI_CpuFill8\n    ldr r0, _021E780C ; =ov109_021E7810\n    add r1, r5, #0\n    mov r2, #0\n    str r4, [r5]\n    bl SysTask_CreateOnMainQueue\n    add r0, r4, #0\n    mov r1, #1\n    bl ov109_021E7388\n    ldrb r1, [r4, #0x18]\n    mov r0, #1\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r4, #0x18]\n    pop {r3, r4, r5, pc}\n    _021E780C: .word ov109_021E7810"
    );
    #endif
}

void ov109_021E7810(void) {
    /* Original at 0x021E7810 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r0, #0xa8\n    ldr r0, [r0]\n    bl Sprite_IsAnimated\n    cmp r0, #0\n    bne _021E784C\n    ldr r0, [r4]\n    mov r1, #0\n    bl ov109_021E7388\n    ldr r2, [r4]\n    mov r0, #1\n    ldrb r1, [r2, #0x18]\n    bic r1, r0\n    strb r1, [r2, #0x18]\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #8\n    bl MI_CpuFill8\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov109_021E7850(void) {
    /* Original at 0x021E7850 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r1, #0\n    ldr r3, _021E7880 ; =0x000001ED\n    add r2, r1, #0\n    lsl r4, r2, #2\n    add r4, r0, r4\n    add r4, #0x6c\n    ldrh r4, [r4]\n    cmp r4, #0\n    ble _021E786E\n    cmp r4, r3\n    bgt _021E786E\n    add r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    add r2, r2, #1\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    cmp r2, #6\n    blo _021E7858\n    add r0, r1, #0\n    pop {r3, r4}\n    bx lr\n    nop\n    _021E7880: .word 0x000001ED"
    );
    #endif
}
