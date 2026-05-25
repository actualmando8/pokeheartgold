/* Decompiled from asm/overlay_02_02245B80.s */
#include "global.h"

void ov02_02245B80(void) {
    /* Original at 0x02245B80 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    bl ov02_02245B9C\n    add r2, r0, #0\n    ldr r1, _02245B98 ; =ov02_02245BC8\n    add r0, r4, #0\n    bl TaskManager_Call\n    pop {r4, pc}\n    _02245B98: .word ov02_02245BC8"
    );
    #endif
}

void ov02_02245B9C(void) {
    /* Original at 0x02245B9C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #4\n    mov r1, #0xd0\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _02245BB4\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r1, #0\n    mov r2, #0xd0\n    bl MI_CpuFill8\n    str r5, [r4, #4]\n    mov r0, #4\n    str r0, [r4]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_02245BC8(void) {
    /* Original at 0x02245BC8 */
    /* Requires manual decompilation - 145 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrh r1, [r4, #8]\n    cmp r1, #4\n    bls _02245BDA\n    b _02245D06\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02245BE6: ; jump table\n    bl ov02_02245D18\n    mov r1, #0\n    add r0, r4, #0\n    strh r1, [r4, #0xa]\n    add r0, #0xcc\n    str r1, [r0]\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    b _02245D06\n    add r0, #0xcc\n    ldr r0, [r0]\n    cmp r0, #0xff\n    beq _02245C68\n    cmp r0, #0\n    beq _02245C26\n    cmp r0, #0x1e\n    beq _02245C26\n    cmp r0, #0x32\n    beq _02245C26\n    cmp r0, #0x3c\n    beq _02245C26\n    cmp r0, #0x46\n    beq _02245C26\n    cmp r0, #0x50\n    bne _02245C5A\n    ldr r0, _02245D0C ; =SEQ_SE_DP_FW411\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0xcc\n    ldr r0, [r0]\n    cmp r0, #0x32\n    bne _02245C3C\n    ldr r0, _02245D10 ; =SEQ_SE_DP_F207\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0xcc\n    ldr r0, [r0]\n    cmp r0, #0x3c\n    blt _02245C5A\n    mov r1, #0xa\n    bl _s32_div_f\n    add r1, r0, #0\n    sub r1, r1, #5\n    lsl r1, r1, #0x16\n    ldr r0, _02245D0C ; =SEQ_SE_DP_FW411\n    asr r1, r1, #0x10\n    bl PlaySE_SetPitch\n    add r0, r4, #0\n    add r0, #0xcc\n    ldr r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0xcc\n    str r1, [r0]\n    add r0, r4, #0\n    bl ov02_02245DE0\n    ldrh r1, [r4, #0xa]\n    add r0, r1, #1\n    strh r0, [r4, #0xa]\n    cmp r1, #0x5a\n    blo _02245D06\n    mov r0, #0x18\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r3, _02245D14 ; =0x00007FFF\n    mov r0, #3\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    b _02245D06\n    bl ov02_02245DE0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _02245D06\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    b _02245D06\n    ldrh r2, [r4, #0xa]\n    add r1, r2, #1\n    strh r1, [r4, #0xa]\n    cmp r2, #0x3c\n    blo _02245D06\n    bl ov02_02245DB0\n    ldr r0, [r4, #4]\n    add r0, #0x50\n    bl ov01_021EA284\n    ldr r0, [r4, #4]\n    mov r1, #4\n    ldr r0, [r0, #0x48]\n    bl ov01_021EA220\n    ldr r1, [r4, #4]\n    ldr r3, _02245D14 ; =0x00007FFF\n    str r0, [r1, #0x50]\n    mov r0, #0x12\n    mov r1, #1\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r0, [r4]\n    add r2, r1, #0\n    str r0, [sp, #8]\n    mov r0, #3\n    bl BeginNormalPaletteFade\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    b _02245D06\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _02245D06\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _02245D0C: .word SEQ_SE_DP_FW411\n    _02245D10: .word SEQ_SE_DP_F207\n    _02245D14: .word 0x00007FFF"
    );
    #endif
}

void ov02_02245D18(void) {
    /* Original at 0x02245D18 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r1, [r4]\n    add r0, #0xbc\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    add r0, r4, #0\n    ldr r3, [r4]\n    add r0, #0xc\n    mov r1, #0xae\n    mov r2, #0\n    bl Field3dModel_LoadFromFilesystem\n    ldr r0, [r4]\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r0, #0xbc\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r0, #0x1c\n    add r1, #0xc\n    mov r2, #0xae\n    mov r3, #1\n    bl Field3dModelAnimation_LoadFromFilesystem\n    ldr r0, [r4]\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r0, #0xbc\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r0, #0x30\n    add r1, #0xc\n    mov r2, #0xae\n    mov r3, #2\n    bl Field3dModelAnimation_LoadFromFilesystem\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x44\n    add r1, #0xc\n    bl Field3dObject_InitFromModel\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x44\n    add r1, #0x1c\n    bl Field3dObject_AddAnimation\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x44\n    add r1, #0x30\n    bl Field3dObject_AddAnimation\n    add r0, r4, #0\n    mov r1, #0x22\n    mov r3, #0xa\n    add r0, #0x44\n    lsl r1, r1, #0xe\n    mov r2, #0\n    lsl r3, r3, #0x10\n    bl Field3dObject_SetPosEx\n    add r4, #0x44\n    add r0, r4, #0\n    mov r1, #1\n    bl Field3dObject_SetActiveFlag\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov02_02245DB0(void) {
    /* Original at 0x02245DB0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x44\n    mov r1, #0\n    bl Field3dObject_SetActiveFlag\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x30\n    add r1, #0xbc\n    bl Field3dModelAnimation_Unload\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x1c\n    add r1, #0xbc\n    bl Field3dModelAnimation_Unload\n    add r4, #0xc\n    add r0, r4, #0\n    bl Field3dModel_Unload\n    pop {r4, pc}"
    );
    #endif
}

void ov02_02245DE0(void) {
    /* Original at 0x02245DE0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #1\n    add r4, r0, #0\n    add r0, #0x1c\n    lsl r1, r1, #0xc\n    bl Field3dModelAnimation_FrameAdvanceAndLoop\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x30\n    lsl r1, r1, #0xc\n    bl Field3dModelAnimation_FrameAdvanceAndLoop\n    add r4, #0x44\n    add r0, r4, #0\n    bl Field3dObject_Draw\n    pop {r4, pc}"
    );
    #endif
}

void ov02_02245E04(void) {
    /* Original at 0x02245E04 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #0xa4\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0xa4\n    bl MI_CpuFill8\n    add r0, r4, #0\n    add r0, #0xa0\n    str r6, [r0]\n    add r0, r4, #0\n    add r0, #0x8c\n    add r1, r6, #0\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    ldrh r1, [r5]\n    ldrb r2, [r5, #2]\n    add r0, r4, #0\n    add r3, r6, #0\n    bl Field3dModel_LoadFromFilesystem\n    add r0, r4, #0\n    add r0, #0x10\n    add r1, r4, #0\n    bl Field3dObject_InitFromModel\n    ldrh r1, [r5]\n    ldrb r3, [r5, #3]\n    ldr r2, [r5, #4]\n    add r0, r4, #0\n    bl ov02_02245ED8\n    add r0, r4, #0\n    add r0, #0x10\n    mov r1, #1\n    bl Field3dObject_SetActiveFlag\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x9e\n    strh r1, [r0]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_02245E68(void) {
    /* Original at 0x02245E68 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, #0x10\n    mov r1, #0\n    bl Field3dObject_SetActiveFlag\n    add r0, r5, #0\n    add r0, #0x9c\n    ldrb r0, [r0]\n    mov r6, #0\n    cmp r0, #0\n    ble _02245EB8\n    add r0, r5, #0\n    add r7, r5, #0\n    str r0, [sp]\n    add r0, #0x8c\n    add r4, r6, #0\n    add r7, #0x10\n    str r0, [sp]\n    add r1, r5, #0\n    add r1, #0x88\n    ldr r1, [r1]\n    add r0, r7, #0\n    add r1, r1, r4\n    bl Field3dObject_RemoveAnimation\n    add r0, r5, #0\n    add r0, #0x88\n    ldr r0, [r0]\n    ldr r1, [sp]\n    add r0, r0, r4\n    bl Field3dModelAnimation_Unload\n    add r0, r5, #0\n    add r0, #0x9c\n    ldrb r0, [r0]\n    add r6, r6, #1\n    add r4, #0x14\n    cmp r6, r0\n    blt _02245E8E\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x9c\n    strb r1, [r0]\n    add r0, r5, #0\n    bl Field3dModel_Unload\n    add r0, r5, #0\n    add r0, #0x88\n    ldr r0, [r0]\n    bl Heap_Free\n    add r0, r5, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_02245ED8(void) {
    /* Original at 0x02245ED8 */
    /* Requires manual decompilation - 116 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    str r3, [sp, #0xc]\n    add r0, #0x9c\n    ldrb r0, [r0]\n    add r7, r2, #0\n    str r1, [sp, #8]\n    cmp r0, #0\n    beq _02245F38\n    mov r6, #0\n    cmp r0, #0\n    ble _02245F2E\n    add r0, r5, #0\n    str r0, [sp, #0x10]\n    add r0, #0x10\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    str r0, [sp, #0x14]\n    add r0, #0x8c\n    add r4, r6, #0\n    str r0, [sp, #0x14]\n    add r1, r5, #0\n    add r1, #0x88\n    ldr r1, [r1]\n    ldr r0, [sp, #0x10]\n    add r1, r1, r4\n    bl Field3dObject_RemoveAnimation\n    add r0, r5, #0\n    add r0, #0x88\n    ldr r0, [r0]\n    ldr r1, [sp, #0x14]\n    add r0, r0, r4\n    bl Field3dModelAnimation_Unload\n    add r0, r5, #0\n    add r0, #0x9c\n    ldrb r0, [r0]\n    add r6, r6, #1\n    add r4, #0x14\n    cmp r6, r0\n    blt _02245F04\n    add r0, r5, #0\n    add r0, #0x88\n    ldr r0, [r0]\n    bl Heap_Free\n    add r1, r5, #0\n    ldr r0, [sp, #0xc]\n    add r1, #0x9c\n    strb r0, [r1]\n    add r1, r5, #0\n    add r1, #0x9c\n    add r0, r5, #0\n    ldrb r2, [r1]\n    add r0, #0xa0\n    mov r1, #0x14\n    ldr r0, [r0]\n    mul r1, r2\n    bl Heap_Alloc\n    add r1, r5, #0\n    add r1, #0x88\n    str r0, [r1]\n    add r2, r5, #0\n    add r2, #0x9c\n    add r0, r5, #0\n    ldrb r3, [r2]\n    add r0, #0x88\n    mov r2, #0x14\n    ldr r0, [r0]\n    mov r1, #0\n    mul r2, r3\n    bl MI_CpuFill8\n    add r0, r5, #0\n    add r0, #0x9c\n    ldrb r0, [r0]\n    mov r6, #0\n    cmp r0, #0\n    ble _02245FCA\n    add r0, r5, #0\n    str r0, [sp, #0x18]\n    add r0, #0x8c\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    str r0, [sp, #0x1c]\n    add r0, #0x10\n    add r4, r6, #0\n    str r0, [sp, #0x1c]\n    add r0, r5, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    ldr r2, [sp, #8]\n    str r0, [sp]\n    ldr r0, [sp, #0x18]\n    add r1, r5, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x88\n    ldr r0, [r0]\n    ldrh r3, [r7]\n    add r0, r0, r4\n    bl Field3dModelAnimation_LoadFromFilesystem\n    add r1, r5, #0\n    add r1, #0x88\n    ldr r1, [r1]\n    ldr r0, [sp, #0x1c]\n    add r1, r1, r4\n    bl Field3dObject_AddAnimation\n    add r0, r5, #0\n    add r0, #0x9c\n    ldrb r0, [r0]\n    add r6, r6, #1\n    add r7, r7, #2\n    add r4, #0x14\n    cmp r6, r0\n    blt _02245F8E\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_02245FD0(void) {
    /* Original at 0x02245FD0 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, #0x9c\n    ldrb r0, [r0]\n    mov r7, #0\n    add r6, r7, #0\n    cmp r0, #0\n    ble _0224602E\n    add r4, r7, #0\n    add r0, r5, #0\n    add r0, #0x9e\n    ldrh r0, [r0]\n    cmp r0, #0\n    beq _02245FFE\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0224600C\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0x88\n    ldr r0, [r0]\n    add r0, r0, r4\n    bl Field3dModelAnimation_FrameAdvanceAndCheck\n    add r7, r7, r0\n    add r0, r5, #0\n    add r0, #0x9c\n    ldrb r0, [r0]\n    add r6, r6, #1\n    add r4, #0x14\n    cmp r6, r0\n    blt _02245FE2\n    add r0, r5, #0\n    add r0, #0x10\n    bl Field3dObject_Draw\n    add r5, #0x9c\n    ldrb r0, [r5]\n    cmp r7, r0\n    bne _02246042\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_02246048(void) {
    /* Original at 0x02246048 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, #0x9c\n    ldrb r0, [r0]\n    mov r4, #0\n    cmp r0, #0\n    ble _022460A2\n    mov r7, #0x3f\n    add r6, r4, #0\n    lsl r7, r7, #0x18\n    add r0, r5, #0\n    add r0, #0x9e\n    ldrh r0, [r0]\n    cmp r0, #0\n    beq _02246076\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    add r0, r7, #0\n    bl _fadd\n    b _02246082\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r7, #0\n    bl _fsub\n    bl _ffix\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0x88\n    ldr r0, [r0]\n    add r0, r0, r6\n    bl Field3dModelAnimation_FrameAdvanceAndLoop\n    add r0, r5, #0\n    add r0, #0x9c\n    ldrb r0, [r0]\n    add r4, r4, #1\n    add r6, #0x14\n    cmp r4, r0\n    blt _0224605C\n    add r5, #0x10\n    add r0, r5, #0\n    bl Field3dObject_Draw\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_022460AC(void) {
    /* Original at 0x022460AC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r1, r4, #0\n    bl ov02_022460CC\n    add r2, r0, #0\n    ldr r1, _022460C8 ; =ov02_022460FC\n    add r0, r5, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, pc}\n    _022460C8: .word ov02_022460FC"
    );
    #endif
}

void ov02_022460CC(void) {
    /* Original at 0x022460CC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #4\n    mov r1, #0x14\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _022460E6\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    str r5, [r4, #4]\n    strh r6, [r4, #0x10]\n    mov r0, #4\n    str r0, [r4]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_022460FC(void) {
    /* Original at 0x022460FC */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrh r0, [r4, #0xc]\n    cmp r0, #0\n    beq _02246116\n    cmp r0, #1\n    beq _02246158\n    cmp r0, #2\n    beq _0224616A\n    b _0224617C\n    ldrh r1, [r4, #0x10]\n    mov r0, #0xc\n    ldr r2, _02246184 ; =ov02_02253264\n    mul r0, r1\n    ldr r1, [r4]\n    add r0, r2, r0\n    bl ov02_02245E04\n    str r0, [r4, #8]\n    ldr r0, [r4, #4]\n    add r1, sp, #0\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_CopyPositionVector\n    ldr r0, [r4, #8]\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, #0x10\n    bl Field3dObject_SetPosEx\n    ldrh r1, [r4, #0x10]\n    mov r0, #0xc\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, _02246188 ; =ov02_02253264 + 8\n    ldrh r0, [r0, r2]\n    bl PlaySE\n    ldrh r0, [r4, #0xc]\n    add r0, r0, #1\n    strh r0, [r4, #0xc]\n    b _0224617C\n    ldr r0, [r4, #8]\n    bl ov02_02245FD0\n    cmp r0, #0\n    beq _0224617C\n    ldrh r0, [r4, #0xc]\n    add r0, r0, #1\n    strh r0, [r4, #0xc]\n    b _0224617C\n    ldr r0, [r4, #8]\n    bl ov02_02245E68\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _02246184: .word ov02_02253264\n    _02246188: .word ov02_02253264 + 8"
    );
    #endif
}

void ShowLegendaryWing(void) {
    /* Original at 0x0224618C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r1, r4, #0\n    bl ov02_022461AC\n    add r2, r0, #0\n    ldr r1, _022461A8 ; =ov02_022461DC\n    add r0, r5, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, pc}\n    _022461A8: .word ov02_022461DC"
    );
    #endif
}

void ov02_022461AC(void) {
    /* Original at 0x022461AC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #4\n    mov r1, #0x18\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _022461C6\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r1, #0\n    mov r2, #0x18\n    bl MI_CpuFill8\n    str r5, [r4, #4]\n    strb r6, [r4, #0x10]\n    mov r0, #4\n    str r0, [r4]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_022461DC(void) {
    /* Original at 0x022461DC */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrh r0, [r4, #0x12]\n    cmp r0, #4\n    bhi _022462C0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022461FA: ; jump table\n    ldrb r0, [r4, #0x10]\n    ldr r1, _022462C8 ; =ov02_02253254\n    lsl r0, r0, #3\n    add r0, r1, r0\n    ldr r1, [r4]\n    bl ov02_02245E04\n    str r0, [r4, #8]\n    ldr r0, [r4, #4]\n    add r1, sp, #0\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_CopyPositionVector\n    ldr r0, [r4, #8]\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, #0x10\n    bl Field3dObject_SetPosEx\n    ldr r0, _022462CC ; =SEQ_SE_GS_STOPPERKAIJO\n    bl PlaySE\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    b _022462C0\n    ldr r0, [r4, #8]\n    bl ov02_02245FD0\n    cmp r0, #0\n    beq _022462C0\n    ldrb r2, [r4, #0x10]\n    ldr r0, [r4, #8]\n    mov r1, #0xae\n    lsl r3, r2, #3\n    ldr r2, _022462D0 ; =ov02_02253D80\n    ldr r2, [r2, r3]\n    mov r3, #3\n    bl ov02_02245ED8\n    ldr r0, _022462D4 ; =ov02_022462DC\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    mov r2, #0\n    str r0, [r4, #0xc]\n    add r0, r5, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl QueueScript\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    b _022462C0\n    ldr r0, [r4, #0xc]\n    bl SysTask_Destroy\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    ldr r0, [r4, #8]\n    bl ov02_02245FD0\n    cmp r0, #0\n    beq _022462C0\n    ldrb r2, [r4, #0x10]\n    ldr r0, [r4, #8]\n    mov r1, #0xae\n    lsl r3, r2, #3\n    ldr r2, _022462D8 ; =ov02_02253D84\n    ldr r2, [r2, r3]\n    mov r3, #3\n    bl ov02_02245ED8\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    ldr r0, [r4, #8]\n    bl ov02_02245FD0\n    cmp r0, #0\n    beq _022462C0\n    ldr r0, [r4, #8]\n    bl ov02_02245E68\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _022462C8: .word ov02_02253254\n    _022462CC: .word SEQ_SE_GS_STOPPERKAIJO\n    _022462D0: .word ov02_02253D80\n    _022462D4: .word ov02_022462DC\n    _022462D8: .word ov02_02253D84"
    );
    #endif
}

void ov02_022462DC(void) {
    ov02_02246048();
}

void ov02_022462E8(void) {
    /* Original at 0x022462E8 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    bl ov02_02246304\n    add r2, r0, #0\n    ldr r1, _02246300 ; =ov02_02246330\n    add r0, r4, #0\n    bl TaskManager_Call\n    pop {r4, pc}\n    _02246300: .word ov02_02246330"
    );
    #endif
}

void ov02_02246304(void) {
    /* Original at 0x02246304 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #4\n    mov r1, #0x10\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _0224631C\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r1, #0\n    mov r2, #0x10\n    bl MI_CpuFill8\n    str r5, [r4, #4]\n    mov r0, #4\n    str r0, [r4]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_02246330(void) {
    /* Original at 0x02246330 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #0\n    beq _02246348\n    cmp r1, #1\n    beq _0224635A\n    cmp r1, #2\n    beq _02246374\n    b _0224638E\n    bl ov02_02246398\n    ldr r0, _02246394 ; =SEQ_SE_GS_AJITO_SIREN\n    bl PlaySE\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0224638E\n    bl ov02_02246490\n    cmp r0, #0\n    beq _0224638E\n    ldrb r1, [r4, #0xc]\n    add r0, r1, #1\n    strb r0, [r4, #0xc]\n    cmp r1, #1\n    blo _0224638E\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0224638E\n    ldr r0, _02246394 ; =SEQ_SE_GS_AJITO_SIREN\n    bl IsSEPlaying\n    cmp r0, #0\n    bne _0224638E\n    add r0, r4, #0\n    bl ov02_02246444\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02246394: .word SEQ_SE_GS_AJITO_SIREN"
    );
    #endif
}

void ov02_02246398(void) {
    /* Original at 0x02246398 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    strb r0, [r5, #0xd]\n    ldrb r3, [r5, #0xd]\n    mov r0, #0x1f\n    mov r1, #2\n    sub r0, r0, r3\n    str r0, [sp]\n    ldr r0, _02246440 ; =0x04000050\n    mov r2, #5\n    bl G2x_SetBlendAlpha_\n    ldr r1, [r5]\n    mov r0, #0xae\n    bl NARC_New\n    mov r1, #0x20\n    str r1, [sp]\n    ldr r1, [r5]\n    mov r2, #0\n    str r1, [sp, #4]\n    mov r1, #0xc\n    add r3, r2, #0\n    add r4, r0, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x40\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #0xd\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #4]\n    add r0, r4, #0\n    ldr r2, [r2, #8]\n    mov r3, #1\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #0xe\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #4]\n    add r0, r4, #0\n    ldr r2, [r2, #8]\n    mov r3, #1\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldr r0, [r5, #4]\n    mov r1, #0\n    ldr r0, [r0, #8]\n    bl GetBgPriority\n    strb r0, [r5, #0xe]\n    ldr r0, [r5, #4]\n    mov r1, #1\n    ldr r0, [r0, #8]\n    bl GetBgPriority\n    strb r0, [r5, #0xf]\n    mov r0, #0\n    mov r1, #1\n    bl SetBgPriority\n    mov r0, #1\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _02246440: .word 0x04000050"
    );
    #endif
}

void ov02_02246444(void) {
    /* Original at 0x02246444 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldrb r1, [r4, #0xe]\n    mov r0, #0\n    bl SetBgPriority\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    bl SetBgPriority\n    ldr r0, [r4, #4]\n    mov r1, #1\n    ldr r0, [r0, #8]\n    bl BgClearTilemapBufferAndCommit\n    ldr r3, [r4]\n    mov r0, #1\n    mov r1, #0x40\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    mov r1, #0\n    ldr r0, _0224648C ; =0x04000050\n    add r2, r1, #0\n    mov r3, #0x1f\n    str r1, [sp]\n    bl G2x_SetBlendAlpha_\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0224648C: .word 0x04000050"
    );
    #endif
}

void ov02_02246490(void) {
    /* Original at 0x02246490 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldrb r0, [r4, #9]\n    cmp r0, #0\n    beq _022464A2\n    cmp r0, #1\n    beq _022464B2\n    b _022464F4\n    mov r0, #0\n    strb r0, [r4, #0xb]\n    strb r0, [r4, #0xa]\n    strb r0, [r4, #0xd]\n    ldrb r0, [r4, #9]\n    add r0, r0, #1\n    strb r0, [r4, #9]\n    b _02246502\n    ldrb r1, [r4, #0xb]\n    add r0, r1, #1\n    strb r0, [r4, #0xb]\n    cmp r1, #0\n    bne _02246502\n    ldrb r3, [r4, #0xd]\n    mov r0, #0x1f\n    mov r1, #2\n    sub r0, r0, r3\n    str r0, [sp]\n    ldr r0, _02246508 ; =0x04000050\n    mov r2, #5\n    bl G2x_SetBlendAlpha_\n    ldrb r1, [r4, #0xa]\n    add r0, r1, #1\n    strb r0, [r4, #0xa]\n    cmp r1, #0xc\n    ldrb r0, [r4, #0xd]\n    bhs _022464DE\n    add r0, r0, #1\n    b _022464E0\n    sub r0, r0, #1\n    strb r0, [r4, #0xd]\n    mov r0, #0\n    strb r0, [r4, #0xb]\n    ldrb r0, [r4, #0xa]\n    cmp r0, #0x18\n    bls _02246502\n    ldrb r0, [r4, #9]\n    add r0, r0, #1\n    strb r0, [r4, #9]\n    b _02246502\n    mov r0, #0\n    strb r0, [r4, #0xa]\n    strb r0, [r4, #0xb]\n    strb r0, [r4, #9]\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, pc}\n    _02246508: .word 0x04000050"
    );
    #endif
}

void ov02_0224650C(void) {
    Heap_Alloc(r1, 0x38);
    MI_CpuFill8(0, 0x38);
    *((u32*)(r4 + 4)) = r5;
    Camera_New(r6);
    *((u32*)(r4 + 0x18)) = r0;
}

void ov02_02246534(void) {
    Camera_Delete(*((u32*)(r0 + 0x18)));
    Heap_Free(r4);
}

void ov02_02246548(void) {
    /* Original at 0x02246548 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r1, #0\n    ble _02246568\n    lsl r0, r1, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02246576\n    lsl r0, r1, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    strh r0, [r5, #8]\n    cmp r4, #0\n    ble _02246592\n    lsl r0, r4, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _022465A0\n    lsl r0, r4, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    strh r0, [r5, #0xa]\n    strh r6, [r5, #0xe]\n    add r0, sp, #0x10\n    ldrh r0, [r0, #0x10]\n    strh r0, [r5, #0x12]\n    mov r0, #0\n    strh r0, [r5, #0x10]\n    ldrh r0, [r5, #0x12]\n    cmp r0, #0\n    beq _022465CA\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _022465D8\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r1, r0, #0\n    mov r0, #0x5a\n    lsl r0, r0, #0xe\n    bl FX_Div\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #4]\n    ldr r1, [r5, #0x18]\n    ldr r0, [r0, #0x24]\n    bl Camera_Copy\n    ldr r1, [r5, #0x18]\n    add r0, sp, #0\n    bl Camera_GetLookAtCamTarget\n    add r4, sp, #0\n    add r3, r5, #0\n    add r3, #0x20\n    ldmia r4!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    add r4, r2, #0\n    str r0, [r3]\n    add r3, r5, #0\n    ldmia r4!, {r0, r1}\n    add r3, #0x2c\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r3]\n    ldr r1, [r5, #0x18]\n    add r0, r2, #0\n    bl Camera_SetFixedTarget\n    ldr r0, [r5, #0x18]\n    bl Camera_SetStaticPtr\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov02_0224662C(void) {
    /* Original at 0x0224662C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    strh r1, [r0, #0x10]\n    ldr r0, [r0, #4]\n    ldr r3, _02246638 ; =sub_0202313C\n    ldr r0, [r0, #0x24]\n    bx r3\n    _02246638: .word Camera_SetStaticPtr"
    );
    #endif
}

void ov02_0224663C(void) {
    /* Original at 0x0224663C */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrh r2, [r5, #0x10]\n    add r0, #0x10\n    add r1, r2, #1\n    strh r1, [r5, #0x10]\n    cmp r2, #0\n    ldrh r2, [r5, #0x10]\n    beq _02246666\n    ldrh r1, [r0]\n    add r1, r1, #1\n    strh r1, [r0]\n    lsl r0, r2, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0224667A\n    ldrh r1, [r0]\n    add r1, r1, #1\n    strh r1, [r0]\n    lsl r0, r2, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r2, r0, #0\n    ldr r0, [r5, #0x14]\n    asr r3, r2, #0x1f\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    bl GF_SinDegFX32\n    mov r2, #8\n    ldrsh r2, [r5, r2]\n    add r4, r0, #0\n    asr r6, r4, #0x1f\n    add r1, r6, #0\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    add r2, r0, #0\n    mov r0, #2\n    add r3, r1, #0\n    mov r7, #0\n    lsl r0, r0, #0xa\n    add r0, r2, r0\n    adc r3, r7\n    ldr r1, [r5, #0x2c]\n    lsl r2, r3, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r2\n    add r0, r1, r0\n    str r0, [r5, #0x20]\n    mov r2, #0xa\n    ldrsh r2, [r5, r2]\n    add r0, r4, #0\n    add r1, r6, #0\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r4, #2\n    add r3, r7, #0\n    lsl r4, r4, #0xa\n    add r4, r0, r4\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r4, #0xc\n    ldr r2, [r5, #0x30]\n    orr r1, r0\n    add r0, r2, r1\n    str r0, [r5, #0x24]\n    ldrh r1, [r5, #0x10]\n    ldrh r0, [r5, #0x12]\n    cmp r1, r0\n    bhs _022466F8\n    add r0, r3, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x2c]\n    str r0, [r5, #0x20]\n    ldr r0, [r5, #0x30]\n    str r0, [r5, #0x24]\n    strh r3, [r5, #0x10]\n    ldrh r0, [r5, #0xe]\n    sub r0, r0, #1\n    strh r0, [r5, #0xe]\n    ldrh r0, [r5, #0xe]\n    cmp r0, #0\n    bne _02246710\n    mov r3, #1\n    add r0, r3, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_02246714(void) {
    /* Original at 0x02246714 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl TaskManager_GetFieldSystem\n    add r1, sp, #8\n    ldrh r1, [r1, #0x10]\n    add r2, r6, #0\n    add r3, r7, #0\n    str r1, [sp]\n    add r1, r4, #0\n    bl ov02_02246744\n    add r2, r0, #0\n    ldr r1, _02246740 ; =ov02_02246798\n    add r0, r5, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02246740: .word ov02_02246798"
    );
    #endif
}

void ov02_02246744(void) {
    /* Original at 0x02246744 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #4\n    mov r1, #0xc\n    add r7, r2, #0\n    str r3, [sp, #4]\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _02246766\n    bl GF_AssertFail\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    mov r2, #0xc\n    bl MI_CpuFill8\n    str r5, [r4, #4]\n    mov r1, #4\n    str r1, [r4]\n    ldr r0, [r4, #4]\n    bl ov02_0224650C\n    str r0, [r4, #8]\n    add r0, sp, #0x10\n    ldrh r0, [r0, #0x10]\n    lsl r1, r6, #0x10\n    lsl r2, r7, #0x10\n    str r0, [sp]\n    ldr r0, [r4, #8]\n    ldr r3, [sp, #4]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ov02_02246548\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_02246798(void) {
    /* Original at 0x02246798 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    bl ov02_0224663C\n    cmp r0, #0\n    bne _022467AE\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #8]\n    bl ov02_0224662C\n    ldr r0, [r4, #8]\n    bl ov02_02246534\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void OpenAlphHiddenRoom(void) {
    /* Original at 0x022467C4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    lsl r1, r5, #0x18\n    lsr r1, r1, #0x18\n    bl ov02_022467E8\n    add r2, r0, #0\n    ldr r1, _022467E4 ; =ov02_02246818\n    add r0, r4, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, pc}\n    nop\n    _022467E4: .word ov02_02246818"
    );
    #endif
}

void ov02_022467E8(void) {
    /* Original at 0x022467E8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #4\n    mov r1, #0x1c\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _02246802\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r1, #0\n    mov r2, #0x1c\n    bl MI_CpuFill8\n    str r5, [r4, #4]\n    strb r6, [r4, #0x19]\n    mov r0, #4\n    str r0, [r4]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_02246818(void) {
    /* Original at 0x02246818 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrb r1, [r4, #0x18]\n    cmp r1, #0\n    beq _0224682C\n    cmp r1, #1\n    beq _0224683E\n    b _02246862\n    bl ov02_0224686C\n    ldr r0, _02246868 ; =0x000005DC\n    bl PlaySE\n    ldrb r0, [r4, #0x18]\n    add r0, r0, #1\n    strb r0, [r4, #0x18]\n    b _02246862\n    bl ov02_022469A0\n    cmp r0, #0\n    beq _02246862\n    ldr r0, _02246868 ; =0x000005DC\n    bl PlaySE\n    ldrb r0, [r4, #0x18]\n    add r0, r0, #1\n    strb r0, [r4, #0x18]\n    add r0, r4, #0\n    bl ov02_02246964\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02246868: .word 0x000005DC"
    );
    #endif
}

void ov02_0224686C(void) {
    /* Original at 0x0224686C */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0xae\n    bl NARC_New\n    mov r1, #0x20\n    str r1, [sp]\n    ldr r1, [r5]\n    mov r2, #0\n    str r1, [sp, #4]\n    mov r1, #0xf\n    add r3, r2, #0\n    add r4, r0, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #0x10\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #4]\n    add r0, r4, #0\n    ldr r2, [r2, #8]\n    mov r3, #1\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #0x11\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #4]\n    add r0, r4, #0\n    ldr r2, [r2, #8]\n    mov r3, #1\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldr r0, [r5, #4]\n    mov r1, #1\n    ldr r0, [r0, #8]\n    bl GetBgPriority\n    strb r0, [r5, #0x1a]\n    mov r0, #1\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    bl NARC_Delete\n    ldr r0, [r5, #4]\n    add r1, r5, #0\n    ldr r0, [r0, #8]\n    ldr r2, _0224695C ; =ov02_0225324C\n    add r1, #8\n    bl AddWindow\n    add r0, r5, #0\n    add r0, #8\n    mov r1, #9\n    bl FillWindowPixelBuffer\n    ldr r3, [r5]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xc6\n    bl NewMsgDataFromNarc\n    ldrb r1, [r5, #0x19]\n    add r4, r0, #0\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    mov r0, #3\n    add r1, r7, #0\n    mov r2, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x18\n    mov r1, #0\n    lsr r6, r0, #0x18\n    mov r3, #0x70\n    sub r6, r3, r6\n    lsr r3, r6, #0x1f\n    add r3, r6, r3\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02246960 ; =0x000F0E09\n    add r2, r7, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    str r1, [sp, #0xc]\n    add r0, #8\n    mov r1, #3\n    asr r3, r3, #1\n    bl AddTextPrinterParameterizedWithColor\n    add r5, #8\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r4, #0\n    bl DestroyMsgData\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224695C: .word ov02_0225324C\n    _02246960: .word 0x000F0E09"
    );
    #endif
}

void ov02_02246964(void) {
    /* Original at 0x02246964 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldrb r1, [r4, #0x1a]\n    mov r0, #1\n    bl SetBgPriority\n    add r0, r4, #0\n    add r0, #8\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #8\n    bl RemoveWindow\n    ldr r0, [r4, #4]\n    mov r1, #1\n    ldr r0, [r0, #8]\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #1\n    ldr r3, [r4]\n    lsl r1, r0, #0xc\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    pop {r4, pc}"
    );
    #endif
}

void ov02_022469A0(void) {
    /* Original at 0x022469A0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _022469B0 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r1, r0\n    bne _022469AC\n    mov r0, #0\n    bx lr\n    nop\n    _022469B0: .word gSystem"
    );
    #endif
}

void ov02_022469B4(void) {
    /* Original at 0x022469B4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r6, r2, #0\n    add r5, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov02_022469D8\n    add r2, r0, #0\n    ldr r1, _022469D4 ; =ov02_02246A34\n    add r0, r5, #0\n    bl TaskManager_Call\n    pop {r4, r5, r6, pc}\n    _022469D4: .word ov02_02246A34"
    );
    #endif
}

void ov02_022469D8(void) {
    /* Original at 0x022469D8 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #4\n    mov r1, #0x1c\n    add r7, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _022469F8\n    bl GF_AssertFail\n    add sp, #0x10\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    mov r2, #0x1c\n    bl MI_CpuFill8\n    str r5, [r4, #8]\n    str r6, [r4, #0x10]\n    str r7, [r4, #0x14]\n    mov r0, #4\n    str r0, [r4]\n    bl AllocMonZeroed\n    str r0, [r4, #0xc]\n    bl ZeroMonData\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [r4, #0xc]\n    mov r1, #0x95\n    mov r2, #0x64\n    mov r3, #0x20\n    bl CreateMon\n    add r0, r4, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_02246A34(void) {
    /* Original at 0x02246A34 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _02246A48\n    cmp r0, #1\n    beq _02246A5E\n    b _02246A7E\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #0xc]\n    ldr r2, [r4, #0x10]\n    ldr r3, [r4, #0x14]\n    bl ov02_022494C4\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _02246A7E\n    ldr r0, [r4, #0x18]\n    bl ov02_0224953C\n    cmp r0, #0\n    beq _02246A7E\n    ldr r0, [r4, #0x18]\n    bl ov02_02249548\n    ldr r0, [r4, #0xc]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}
