/* Decompiled from asm/overlay_01_021FC05C.s */
#include "global.h"

void ov01_021FC05C(void) {
    /* Original at 0x021FC05C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r0, [r1, #8]\n    add r4, r2, #0\n    bl ov01_021FC14C\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xa\n    mov r3, #0x13\n    bl ov01_021FC1A4\n    mov r3, #0\n    str r3, [r4, #0x14]\n    mov r0, #0x10\n    str r0, [sp]\n    ldr r0, _021FC0A0 ; =0x04000050\n    mov r1, #4\n    mov r2, #0x29\n    bl G2x_SetBlendAlpha_\n    mov r0, #2\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _021FC0A4 ; =SEQ_SE_DP_FW230\n    bl PlaySE\n    add sp, #4\n    pop {r3, r4, pc}\n    _021FC0A0: .word 0x04000050\n    _021FC0A4: .word SEQ_SE_DP_FW230"
    );
    #endif
}

void ov01_021FC0A8(void) {
    /* Original at 0x021FC0A8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r0, [r1, #8]\n    add r4, r2, #0\n    bl ov01_021FC14C\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0\n    mov r3, #0xf\n    bl ov01_021FC1A4\n    mov r0, #0\n    str r0, [r4, #0x14]\n    mov r0, #6\n    str r0, [sp]\n    ldr r0, _021FC0D8 ; =0x04000050\n    mov r1, #4\n    mov r2, #0x21\n    mov r3, #0xa\n    bl G2x_SetBlendAlpha_\n    add sp, #4\n    pop {r3, r4, pc}\n    _021FC0D8: .word 0x04000050"
    );
    #endif
}

void ov01_021FC0DC(void) {
    /* Original at 0x021FC0DC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021FC0E0(void) {
    /* Original at 0x021FC0E0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    ldr r0, [r4, #0x14]\n    cmp r0, #1\n    beq _021FC106\n    add r0, r4, #0\n    bl ov01_021FC1B4\n    cmp r0, #0\n    beq _021FC0F8\n    mov r0, #1\n    str r0, [r4, #0x14]\n    ldr r1, [r4]\n    mov r0, #0x10\n    sub r0, r0, r1\n    lsl r0, r0, #8\n    orr r1, r0\n    ldr r0, _021FC108 ; =0x04000052\n    strh r1, [r0]\n    pop {r4, pc}\n    _021FC108: .word 0x04000052"
    );
    #endif
}

void ov01_021FC10C(void) {
    /* Original at 0x021FC10C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021FC110(void) {
    /* Original at 0x021FC110 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r3, _021FC11C ; =Field3dObjectTaskManager_CreateTask\n    ldr r0, [r0, #4]\n    ldr r1, _021FC120 ; =ov01_02208BCC\n    bx r3\n    nop\n    _021FC11C: .word Field3dObjectTaskManager_CreateTask\n    _021FC120: .word ov01_02208BCC"
    );
    #endif
}

void ov01_021FC124(void) {
    Field3dObjectTask_Delete();
}

void ov01_021FC12C(void) {
    Field3dObjectTask_GetData();
}

void ov01_021FC138(void) {
    /* Original at 0x021FC138 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r3, _021FC144 ; =Field3dObjectTaskManager_CreateTask\n    ldr r0, [r0, #4]\n    ldr r1, _021FC148 ; =ov01_02208BE4\n    bx r3\n    nop\n    _021FC144: .word Field3dObjectTaskManager_CreateTask\n    _021FC148: .word ov01_02208BE4"
    );
    #endif
}

void ov01_021FC14C(void) {
    /* Original at 0x021FC14C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    ldr r1, _021FC19C ; =0x00005D5F\n    add r5, r0, #0\n    add r0, sp, #4\n    strh r1, [r0]\n    mov r0, #2\n    add r1, sp, #4\n    add r2, r0, #0\n    mov r3, #0xc2\n    bl BG_LoadPlttData\n    mov r0, #4\n    mov r1, #0x20\n    bl Heap_Alloc\n    mov r1, #0x11\n    mov r2, #0x20\n    add r4, r0, #0\n    bl memset\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #2\n    add r2, r4, #0\n    mov r3, #0x20\n    bl BG_LoadCharTilesData\n    add r0, r4, #0\n    bl Heap_Free\n    ldr r2, _021FC1A0 ; =0x00006001\n    add r0, r5, #0\n    mov r1, #2\n    bl BgFillTilemapBufferAndCommit\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _021FC19C: .word 0x00005D5F\n    _021FC1A0: .word 0x00006001"
    );
    #endif
}

void ov01_021FC1A4(void) {
    /* Original at 0x021FC1A4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    str r1, [r0, #4]\n    sub r1, r2, r1\n    str r1, [r0, #8]\n    str r3, [r0, #0x10]\n    mov r1, #0\n    str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov01_021FC1B4(void) {
    /* Original at 0x021FC1B4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    ldr r0, [r4, #0xc]\n    mul r0, r1\n    ldr r1, [r4, #0x10]\n    bl _s32_div_f\n    ldr r1, [r4, #4]\n    add r0, r0, r1\n    str r0, [r4]\n    ldr r0, [r4, #0xc]\n    ldr r1, [r4, #0x10]\n    add r0, r0, #1\n    cmp r0, r1\n    bgt _021FC1DA\n    str r0, [r4, #0xc]\n    mov r0, #0\n    pop {r4, pc}\n    str r1, [r4, #0xc]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FC1E0(void) {
    BG_SetMaskColor();
}

void ov01_021FC1EC(void) {
    /* Original at 0x021FC1EC */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021FC1F4 ; =BG_SetMaskColor\n    mov r0, #2\n    ldr r1, _021FC1F8 ; =0x00007FFF\n    bx r3\n    _021FC1F4: .word BG_SetMaskColor\n    _021FC1F8: .word 0x00007FFF"
    );
    #endif
}

void ov01_021FC1FC(void) {
    /* Original at 0x021FC1FC */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r1, _021FC254 ; =0x00007FFF\n    add r4, r0, #0\n    add r0, sp, #4\n    strh r1, [r0]\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r1, _021FC258 ; =0x0400000C\n    mov r0, #3\n    ldrh r2, [r1]\n    mov r3, #0xc4\n    bic r2, r0\n    mov r0, #3\n    orr r0, r2\n    strh r0, [r1]\n    mov r0, #2\n    add r1, sp, #4\n    add r2, r0, #0\n    bl BG_LoadPlttData\n    mov r1, #2\n    str r1, [sp]\n    ldr r0, [r4, #8]\n    add r2, r1, #0\n    mov r3, #1\n    bl BG_FillCharDataRange\n    ldr r0, [r4, #8]\n    ldr r2, _021FC25C ; =0x00006002\n    mov r1, #2\n    bl BgFillTilemapBufferAndCommit\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    bl ov01_021FC1E0\n    add sp, #8\n    pop {r4, pc}\n    _021FC254: .word 0x00007FFF\n    _021FC258: .word 0x0400000C\n    _021FC25C: .word 0x00006002"
    );
    #endif
}

void ov01_021FC260(void) {
    /* Original at 0x021FC260 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r1, _021FC2B8 ; =0x00007FFF\n    add r4, r0, #0\n    add r0, sp, #4\n    strh r1, [r0]\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r1, _021FC2BC ; =0x0400000E\n    mov r0, #3\n    ldrh r2, [r1]\n    mov r3, #0xc4\n    bic r2, r0\n    mov r0, #3\n    orr r2, r0\n    strh r2, [r1]\n    add r1, sp, #4\n    mov r2, #2\n    bl BG_LoadPlttData\n    mov r2, #2\n    str r2, [sp]\n    ldr r0, [r4, #8]\n    mov r1, #3\n    mov r3, #1\n    bl BG_FillCharDataRange\n    ldr r0, [r4, #8]\n    ldr r2, _021FC2C0 ; =0x00006002\n    mov r1, #3\n    bl BgFillTilemapBufferAndCommit\n    mov r0, #8\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    bl ov01_021FC1E0\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _021FC2B8: .word 0x00007FFF\n    _021FC2BC: .word 0x0400000E\n    _021FC2C0: .word 0x00006002"
    );
    #endif
}

u8 ov01_021FC2C4(void) {
    return 0;
}

void ov01_021FC2C8(void) {
    /* Original at 0x021FC2C8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0, #4]\n    ldr r0, [r0, #0xc]\n    bl ov01_021EB31C\n    ldr r3, _021FC2EC ; =ov01_02208BC0\n    mov r2, #0\n    ldr r1, [r3]\n    cmp r0, r1\n    bne _021FC2E0\n    mov r0, #0\n    pop {r3, pc}\n    add r2, r2, #1\n    add r3, r3, #4\n    cmp r2, #3\n    blt _021FC2D6\n    mov r0, #1\n    pop {r3, pc}\n    _021FC2EC: .word ov01_02208BC0"
    );
    #endif
}

void ov01_021FC2F0(void) {
    /* Original at 0x021FC2F0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021FC302\n    bl ov01_021FC124\n    mov r0, #0\n    str r0, [r4]\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

u8 GetHoneySweetScentWorkSize(void) {
    return 0xc;
}

void Task_HoneyOrSweetScent(void) {
    /* Original at 0x021FC310 */
    /* Requires manual decompilation - 176 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r6, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrh r1, [r4, #8]\n    cmp r1, #9\n    bls _021FC32A\n    b _021FC4AE\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021FC336: ; jump table\n    add r0, r5, #0\n    bl ov01_021FC2C8\n    cmp r0, #1\n    bne _021FC36C\n    mov r0, #1\n    strh r0, [r4, #8]\n    add r0, r5, #0\n    bl ov01_021FC2C4\n    str r0, [r4, #4]\n    cmp r0, #0\n    beq _021FC39C\n    add r0, r5, #0\n    bl ov01_021FC1EC\n    b _021FC4B2\n    mov r0, #7\n    strh r0, [r4, #8]\n    mov r0, #0x14\n    strh r0, [r4, #0xa]\n    b _021FC4B2\n    add r0, r5, #0\n    bl ov01_021FC110\n    str r0, [r4]\n    mov r0, #2\n    mov r1, #0\n    strh r0, [r4, #8]\n    bl SetBgPriority\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    b _021FC4B2\n    ldr r0, [r4]\n    bl ov01_021FC12C\n    cmp r0, #0\n    bne _021FC39E\n    b _021FC4B2\n    mov r0, #0x16\n    strh r0, [r4, #0xa]\n    mov r0, #3\n    strh r0, [r4, #8]\n    b _021FC4B2\n    mov r0, #0xa\n    ldrsh r0, [r4, r0]\n    sub r0, r0, #1\n    strh r0, [r4, #0xa]\n    ldr r0, [r5, #0x20]\n    ldr r0, [r0]\n    bl MapHeader_HasWildEncounters\n    cmp r0, #0\n    beq _021FC3F4\n    mov r0, #0xa\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bge _021FC4B2\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetXCoord\n    add r6, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetZCoord\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl GetMetatileBehavior\n    add r1, r0, #0\n    add r0, r5, #0\n    bl FieldSystem_CanGenerateStepEncounter\n    cmp r0, #0\n    beq _021FC3EE\n    mov r0, #6\n    strh r0, [r4, #8]\n    b _021FC4B2\n    mov r0, #4\n    strh r0, [r4, #8]\n    b _021FC4B2\n    mov r0, #4\n    strh r0, [r4, #8]\n    b _021FC4B2\n    ldr r0, [r4]\n    bl ov01_021FC124\n    add r0, r5, #0\n    bl ov01_021FC138\n    str r0, [r4]\n    mov r0, #5\n    strh r0, [r4, #8]\n    b _021FC4B2\n    ldr r0, [r4]\n    bl ov01_021FC12C\n    cmp r0, #0\n    beq _021FC4B2\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _021FC4B8 ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    mov r0, #2\n    mov r1, #3\n    bl SetBgPriority\n    mov r0, #8\n    strh r0, [r4, #8]\n    b _021FC4B2\n    bl ov01_021FC2F0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021FC444\n    add r0, r5, #0\n    bl ov01_021FC260\n    add r0, r5, #0\n    add r1, r6, #0\n    bl FieldSystem_PerformSweetScentEncounterCheck\n    cmp r0, #0\n    bne _021FC4B2\n    bl GF_AssertFail\n    b _021FC4B2\n    mov r0, #0xa\n    ldrsh r1, [r4, r0]\n    sub r1, r1, #1\n    strh r1, [r4, #0xa]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bge _021FC4B2\n    mov r2, #0\n    ldr r1, _021FC4BC ; =0x000007E3\n    add r0, r6, #0\n    add r3, r2, #0\n    bl QueueScript\n    mov r0, #9\n    strh r0, [r4, #8]\n    b _021FC4B2\n    mov r2, #0\n    ldr r1, _021FC4C0 ; =0x000007E2\n    add r0, r6, #0\n    add r3, r2, #0\n    bl QueueScript\n    mov r0, #9\n    strh r0, [r4, #8]\n    b _021FC4B2\n    bl ov01_021FC2F0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021FC498\n    add r0, r5, #0\n    bl ov01_021FC1FC\n    ldr r0, [r5, #8]\n    mov r1, #2\n    mov r2, #0\n    bl BgFillTilemapBufferAndCommit\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _021FC4B8: .word 0x04000050\n    _021FC4BC: .word 0x000007E3\n    _021FC4C0: .word 0x000007E2"
    );
    #endif
}
