/* Decompiled from asm/overlay_01_022051EC.s */
#include "global.h"

void ov01_022051EC(void) {
    ov01_021F1430(0xc4, 0, 0);
    ov01_02205218();
}

void ov01_02205208(void) {
    ov01_022052A4();
    ov01_021F1448(r4);
}

void ov01_02205218(void) {
    /* Original at 0x02205218 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r0, r4, #4\n    mov r1, #4\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    add r0, r4, #0\n    add r0, #0x14\n    mov r1, #0x67\n    mov r2, #0x84\n    mov r3, #4\n    bl Field3dModel_LoadFromFilesystem\n    mov r0, #4\n    str r0, [sp]\n    add r0, r4, #4\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x24\n    add r1, #0x14\n    mov r2, #0x67\n    mov r3, #0xa8\n    bl Field3dModelAnimation_LoadFromFilesystem\n    mov r0, #4\n    str r0, [sp]\n    add r0, r4, #4\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x38\n    add r1, #0x14\n    mov r2, #0x67\n    mov r3, #0xa6\n    bl Field3dModelAnimation_LoadFromFilesystem\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x4c\n    add r1, #0x14\n    bl Field3dObject_InitFromModel\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x4c\n    add r1, #0x24\n    bl Field3dObject_AddAnimation\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x4c\n    add r1, #0x38\n    bl Field3dObject_AddAnimation\n    add r0, r4, #0\n    add r0, #0x24\n    mov r1, #2\n    mov r2, #0\n    bl ov01_022053C4\n    add r4, #0x4c\n    add r0, r4, #0\n    mov r1, #0\n    bl Field3dObject_SetActiveFlag\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_022052A4(void) {
    Field3dModelAnimation_Unload((r0 + 4));
    Field3dModelAnimation_Unload(r4, (r4 + 4));
    Field3dModel_Unload(r4);
}

void ov01_022052C4(void) {
    /* Original at 0x022052C4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r1, #0x16\n    str r5, [sp, #8]\n    bl ov01_021F1450\n    str r0, [sp, #0xc]\n    add r0, sp, #8\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r1, _022052F0 ; =ov01_022096CC\n    add r0, r5, #0\n    add r2, r4, #0\n    mov r3, #0\n    bl ov01_021F1620\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _022052F0: .word ov01_022096CC"
    );
    #endif
}

void ov01_022052F4(void) {
    sub_02068D74();
}

void ov01_02205300(void) {
    /* Original at 0x02205300 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    ldr r1, [r0, #4]\n    mov r2, #0\n    str r1, [r4, #4]\n    str r2, [r4]\n    ldr r4, [r0, #4]\n    mov r1, #2\n    add r0, r4, #0\n    add r0, #0x24\n    bl ov01_022053C4\n    add r0, r4, #0\n    add r0, #0x4c\n    mov r1, #1\n    bl Field3dObject_SetActiveFlag\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    add r4, #0x4c\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, r4, #0\n    bl Field3dObject_SetPosEx\n    mov r0, #SEQ_SE_GS_TUREARUKI>>4\n    lsl r0, r0, #4\n    bl PlaySE\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_02205350(void) {
    /* Original at 0x02205350 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_02205354(void) {
    /* Original at 0x02205354 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r1, #4]\n    ldr r3, _02205360 ; =Field3dObject_SetActiveFlag\n    add r0, #0x4c\n    mov r1, #0\n    bx r3\n    nop\n    _02205360: .word Field3dObject_SetActiveFlag"
    );
    #endif
}

void ov01_02205364(void) {
    /* Original at 0x02205364 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r4, [r5, #4]\n    mov r1, #2\n    add r0, r4, #0\n    add r0, #0x24\n    bl ov01_02205388\n    cmp r0, #0\n    beq _0220537C\n    mov r0, #1\n    str r0, [r5]\n    add r4, #0x4c\n    add r0, r4, #0\n    bl Field3dObject_Draw\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_02205388(void) {
    /* Original at 0x02205388 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r5, #0\n    add r6, r1, #0\n    add r7, r0, #0\n    add r4, r5, #0\n    cmp r6, #0\n    bls _022053B8\n    mov r0, #0x14\n    mul r0, r4\n    mov r1, #1\n    add r0, r7, r0\n    lsl r1, r1, #0xc\n    bl Field3dModelAnimation_FrameAdvanceAndCheck\n    cmp r0, #0\n    beq _022053AE\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, r6\n    blo _02205396\n    cmp r5, r6\n    bne _022053C0\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_022053C4(void) {
    /* Original at 0x022053C4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r7, r2, #0\n    mov r4, #0\n    cmp r5, #0\n    bls _022053E8\n    mov r0, #0x14\n    mul r0, r4\n    add r0, r6, r0\n    add r1, r7, #0\n    bl Field3dModelAnimation_FrameSet\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, r5\n    blo _022053D2\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}
