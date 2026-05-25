/* Decompiled from asm/overlay_02_02248728.s */
#include "global.h"

void ov02_02248728(void) {
    /* Original at 0x02248728 */
    /* Requires manual decompilation - 151 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r2, #0\n    ldr r0, [sp, #0x1c]\n    add r7, r3, #0\n    strb r6, [r5]\n    ldr r4, [sp, #0x18]\n    strb r7, [r5, #1]\n    strb r4, [r5, #2]\n    str r0, [sp, #0x1c]\n    strb r0, [r5, #3]\n    ldr r0, [sp, #0x20]\n    mov r2, #4\n    strb r0, [r5, #4]\n    ldr r0, [sp, #0x24]\n    strb r0, [r5, #5]\n    ldr r0, [sp, #0x28]\n    strb r0, [r5, #6]\n    ldr r0, [sp, #0x2c]\n    strb r0, [r5, #7]\n    add r0, r1, #0\n    add r1, r5, #0\n    add r1, #0xc\n    bl G2dRenderer_Init\n    str r0, [r5, #8]\n    add r0, r5, #0\n    mov r2, #2\n    add r0, #0xc\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    add r0, r6, #0\n    mov r1, #0\n    mov r2, #4\n    bl Create2DGfxResObjMan\n    mov r1, #0x4d\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r7, #0\n    mov r1, #1\n    mov r2, #4\n    bl Create2DGfxResObjMan\n    mov r1, #0x4e\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #4\n    bl Create2DGfxResObjMan\n    mov r1, #0x4f\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r0, [sp, #0x1c]\n    mov r1, #3\n    mov r2, #4\n    bl Create2DGfxResObjMan\n    mov r1, #5\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r0, #4\n    lsl r1, r6, #3\n    bl ov02_0224B690\n    mov r1, #0x51\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #4\n    lsl r1, r7, #3\n    bl ov02_0224B690\n    mov r1, #0x52\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #4\n    lsl r1, r4, #3\n    bl ov02_0224B690\n    mov r1, #0x53\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r1, [sp, #0x1c]\n    mov r0, #4\n    lsl r1, r1, #3\n    bl ov02_0224B690\n    mov r1, #0x15\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r1, #0\n    cmp r6, #0\n    ble _02248804\n    ble _02248804\n    ldr r0, [sp, #0x20]\n    add r2, r1, #0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    mov r3, #0x51\n    lsl r3, r3, #2\n    ldr r3, [r5, r3]\n    add r1, r1, #1\n    strh r0, [r3, r2]\n    add r2, #8\n    cmp r1, r6\n    blt _022487F4\n    mov r3, #0\n    cmp r7, #0\n    ble _02248824\n    ble _02248824\n    ldr r0, [sp, #0x24]\n    mov r6, #0x52\n    lsl r0, r0, #0x10\n    add r2, r3, #0\n    asr r1, r0, #0x10\n    lsl r6, r6, #2\n    ldr r0, [r5, r6]\n    add r3, r3, #1\n    strh r1, [r0, r2]\n    add r2, #8\n    cmp r3, r7\n    blt _02248818\n    mov r1, #0\n    cmp r4, #0\n    ble _02248844\n    ble _02248844\n    ldr r2, [sp, #0x28]\n    add r0, r1, #0\n    lsl r2, r2, #0x10\n    asr r6, r2, #0x10\n    mov r2, #0x53\n    lsl r2, r2, #2\n    ldr r3, [r5, r2]\n    add r1, r1, #1\n    strh r6, [r3, r0]\n    add r0, #8\n    cmp r1, r4\n    blt _02248838\n    ldr r0, [sp, #0x1c]\n    mov r1, #0\n    cmp r0, #0\n    ble _02248868\n    ble _02248868\n    ldr r2, [sp, #0x2c]\n    mov r3, #0x15\n    lsl r2, r2, #0x10\n    add r0, r1, #0\n    asr r4, r2, #0x10\n    lsl r3, r3, #4\n    ldr r2, [r5, r3]\n    add r1, r1, #1\n    strh r4, [r2, r0]\n    ldr r2, [sp, #0x1c]\n    add r0, #8\n    cmp r1, r2\n    blt _0224885A\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224886C(void) {
    /* Original at 0x0224886C */
    /* Requires manual decompilation - 123 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5]\n    mov r6, #0\n    cmp r0, #0\n    ble _0224889C\n    add r4, r6, #0\n    mov r7, #4\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    ldrsb r2, [r5, r7]\n    add r0, r1, r4\n    ldrsh r1, [r1, r4]\n    cmp r2, r1\n    beq _02248892\n    ldr r0, [r0, #4]\n    bl sub_0200AEB0\n    ldrb r0, [r5]\n    add r6, r6, #1\n    add r4, #8\n    cmp r6, r0\n    blt _0224887C\n    ldrb r0, [r5, #1]\n    mov r6, #0\n    cmp r0, #0\n    ble _022488C8\n    add r4, r6, #0\n    mov r7, #5\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    ldrsb r2, [r5, r7]\n    add r0, r1, r4\n    ldrsh r1, [r1, r4]\n    cmp r2, r1\n    beq _022488BE\n    ldr r0, [r0, #4]\n    bl sub_0200B0A8\n    ldrb r0, [r5, #1]\n    add r6, r6, #1\n    add r4, #8\n    cmp r6, r0\n    blt _022488A8\n    ldrb r0, [r5, #2]\n    mov r6, #0\n    cmp r0, #0\n    ble _022488F4\n    add r4, r6, #0\n    mov r7, #6\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    ldrsb r2, [r5, r7]\n    add r0, r1, r4\n    ldrsh r1, [r1, r4]\n    cmp r2, r1\n    beq _022488EA\n    ldr r0, [r0, #4]\n    bl sub_0200A740\n    ldrb r0, [r5, #2]\n    add r6, r6, #1\n    add r4, #8\n    cmp r6, r0\n    blt _022488D4\n    ldrb r0, [r5, #3]\n    mov r6, #0\n    cmp r0, #0\n    ble _02248920\n    add r4, r6, #0\n    mov r7, #7\n    mov r0, #0x15\n    lsl r0, r0, #4\n    ldr r1, [r5, r0]\n    ldrsb r2, [r5, r7]\n    add r0, r1, r4\n    ldrsh r1, [r1, r4]\n    cmp r2, r1\n    beq _02248916\n    ldr r0, [r0, #4]\n    bl sub_0200A740\n    ldrb r0, [r5, #3]\n    add r6, r6, #1\n    add r4, #8\n    cmp r6, r0\n    blt _02248900\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Destroy2DGfxResObjMan\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Destroy2DGfxResObjMan\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Destroy2DGfxResObjMan\n    mov r0, #5\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl Destroy2DGfxResObjMan\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    mov r0, #0x15\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    ldr r0, [r5, #8]\n    bl SpriteList_DeleteAllSprites\n    ldr r0, [r5, #8]\n    bl SpriteList_Delete\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_02248980(void) {
    /* Original at 0x02248980 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    ldrb r5, [r6]\n    str r2, [sp, #0x10]\n    str r1, [sp, #0xc]\n    add r7, r3, #0\n    mov r2, #0\n    cmp r5, #0\n    ble _022489E6\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r3, [r6, r0]\n    mov r0, #4\n    ldrsb r4, [r6, r0]\n    mov ip, r3\n    add r0, r2, #0\n    ldrsh r1, [r3, r0]\n    cmp r4, r1\n    bne _022489DE\n    lsl r4, r2, #3\n    mov r0, ip\n    strh r7, [r0, r4]\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r1, [r6, r0]\n    mov r3, #0\n    add r1, r1, r4\n    strh r3, [r1, #2]\n    str r7, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    sub r0, #0x10\n    ldr r0, [r6, r0]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0x51\n    lsl r1, r1, #2\n    ldr r1, [r6, r1]\n    add sp, #0x14\n    add r1, r1, r4\n    str r0, [r1, #4]\n    pop {r4, r5, r6, r7, pc}\n    add r2, r2, #1\n    add r3, #8\n    cmp r2, r5\n    blt _022489A2\n    bl GF_AssertFail\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_022489F0(void) {
    /* Original at 0x022489F0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldrb r3, [r0]\n    mov r2, #0\n    cmp r3, #0\n    ble _02248A1E\n    mov r4, #0x51\n    lsl r4, r4, #2\n    ldr r0, [r0, r4]\n    add r4, r2, #0\n    add r6, r0, #0\n    ldrsh r5, [r6, r4]\n    cmp r1, r5\n    bne _02248A16\n    lsl r1, r2, #3\n    add r0, r0, r1\n    ldr r0, [r0, #4]\n    bl sub_0200ADA4\n    pop {r4, r5, r6, pc}\n    add r2, r2, #1\n    add r6, #8\n    cmp r2, r3\n    blt _02248A04\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_02248A24(void) {
    /* Original at 0x02248A24 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldrb r3, [r0]\n    mov r2, #0\n    cmp r3, #0\n    ble _02248A52\n    mov r4, #0x51\n    lsl r4, r4, #2\n    ldr r0, [r0, r4]\n    add r4, r2, #0\n    add r6, r0, #0\n    ldrsh r5, [r6, r4]\n    cmp r1, r5\n    bne _02248A4A\n    lsl r1, r2, #3\n    add r0, r0, r1\n    ldr r0, [r0, #4]\n    bl sub_0200A740\n    pop {r4, r5, r6, pc}\n    add r2, r2, #1\n    add r6, #8\n    cmp r2, r3\n    blt _02248A38\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_02248A58(void) {
    /* Original at 0x02248A58 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r0, #0\n    ldrb r5, [r6]\n    str r2, [sp, #0x14]\n    str r1, [sp, #0x10]\n    add r7, r3, #0\n    mov r2, #0\n    cmp r5, #0\n    ble _02248AC0\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r3, [r6, r0]\n    mov r0, #5\n    ldrsb r4, [r6, r0]\n    mov ip, r3\n    add r0, r2, #0\n    ldrsh r1, [r3, r0]\n    cmp r4, r1\n    bne _02248AB8\n    lsl r4, r2, #3\n    mov r0, ip\n    strh r7, [r0, r4]\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r1, [r6, r0]\n    mov r3, #0\n    add r1, r1, r4\n    strh r3, [r1, #2]\n    str r7, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    mov r1, #4\n    str r1, [sp, #0xc]\n    sub r0, #0x10\n    ldr r0, [r6, r0]\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0x14]\n    bl AddPlttResObjFromOpenNarc\n    mov r1, #0x52\n    lsl r1, r1, #2\n    ldr r1, [r6, r1]\n    add sp, #0x18\n    add r1, r1, r4\n    str r0, [r1, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r2, r2, #1\n    add r3, #8\n    cmp r2, r5\n    blt _02248A7A\n    bl GF_AssertFail\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_02248AC8(void) {
    /* Original at 0x02248AC8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldrb r3, [r0, #1]\n    mov r2, #0\n    cmp r3, #0\n    ble _02248AF6\n    mov r4, #0x52\n    lsl r4, r4, #2\n    ldr r0, [r0, r4]\n    add r4, r2, #0\n    add r6, r0, #0\n    ldrsh r5, [r6, r4]\n    cmp r1, r5\n    bne _02248AEE\n    lsl r1, r2, #3\n    add r0, r0, r1\n    ldr r0, [r0, #4]\n    bl sub_0200B00C\n    pop {r4, r5, r6, pc}\n    add r2, r2, #1\n    add r6, #8\n    cmp r2, r3\n    blt _02248ADC\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_02248AFC(void) {
    /* Original at 0x02248AFC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldrb r3, [r0, #1]\n    mov r2, #0\n    cmp r3, #0\n    ble _02248B2A\n    mov r4, #0x52\n    lsl r4, r4, #2\n    ldr r0, [r0, r4]\n    add r4, r2, #0\n    add r6, r0, #0\n    ldrsh r5, [r6, r4]\n    cmp r1, r5\n    bne _02248B22\n    lsl r1, r2, #3\n    add r0, r0, r1\n    ldr r0, [r0, #4]\n    bl sub_0200A740\n    pop {r4, r5, r6, pc}\n    add r2, r2, #1\n    add r6, #8\n    cmp r2, r3\n    blt _02248B10\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_02248B30(void) {
    /* Original at 0x02248B30 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    ldrb r5, [r6]\n    str r2, [sp, #0x10]\n    str r1, [sp, #0xc]\n    add r7, r3, #0\n    mov r2, #0\n    cmp r5, #0\n    ble _02248B96\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r3, [r6, r0]\n    mov r0, #6\n    ldrsb r4, [r6, r0]\n    mov ip, r3\n    add r0, r2, #0\n    ldrsh r1, [r3, r0]\n    cmp r4, r1\n    bne _02248B8E\n    lsl r4, r2, #3\n    mov r0, ip\n    strh r7, [r0, r4]\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r1, [r6, r0]\n    mov r3, #0\n    add r1, r1, r4\n    strh r3, [r1, #2]\n    str r7, [sp]\n    mov r1, #2\n    str r1, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    sub r0, #0x10\n    ldr r0, [r6, r0]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x53\n    lsl r1, r1, #2\n    ldr r1, [r6, r1]\n    add sp, #0x14\n    add r1, r1, r4\n    str r0, [r1, #4]\n    pop {r4, r5, r6, r7, pc}\n    add r2, r2, #1\n    add r3, #8\n    cmp r2, r5\n    blt _02248B52\n    bl GF_AssertFail\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_02248BA0(void) {
    /* Original at 0x02248BA0 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    ldrb r5, [r6]\n    str r2, [sp, #0x10]\n    str r1, [sp, #0xc]\n    add r7, r3, #0\n    mov r2, #0\n    cmp r5, #0\n    ble _02248C06\n    mov r0, #0x15\n    lsl r0, r0, #4\n    ldr r3, [r6, r0]\n    mov r0, #7\n    ldrsb r4, [r6, r0]\n    mov ip, r3\n    add r0, r2, #0\n    ldrsh r1, [r3, r0]\n    cmp r4, r1\n    bne _02248BFE\n    lsl r4, r2, #3\n    mov r0, ip\n    strh r7, [r0, r4]\n    mov r0, #0x15\n    lsl r0, r0, #4\n    ldr r1, [r6, r0]\n    mov r3, #0\n    add r1, r1, r4\n    strh r3, [r1, #2]\n    str r7, [sp]\n    mov r1, #3\n    str r1, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    sub r0, #0x10\n    ldr r0, [r6, r0]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x15\n    lsl r1, r1, #4\n    ldr r1, [r6, r1]\n    add sp, #0x14\n    add r1, r1, r4\n    str r0, [r1, #4]\n    pop {r4, r5, r6, r7, pc}\n    add r2, r2, #1\n    add r3, #8\n    cmp r2, r5\n    blt _02248BC2\n    bl GF_AssertFail\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_02248C10(void) {
    /* Original at 0x02248C10 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x70\n    add r5, r0, #0\n    add r4, r1, #0\n    add r1, r2, #0\n    mov r0, #7\n    add r2, r3, #0\n    ldrsb r3, [r5, r0]\n    ldr r6, [sp, #0x84]\n    cmp r6, r3\n    bne _02248C2A\n    sub r0, #8\n    str r0, [sp, #0x84]\n    ldr r0, [sp, #0x84]\n    mov r3, #0\n    str r0, [sp]\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x88]\n    str r3, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    ldr r6, [r5, r0]\n    str r6, [sp, #0x14]\n    add r6, r0, #4\n    ldr r6, [r5, r6]\n    str r6, [sp, #0x18]\n    add r6, r0, #0\n    add r6, #8\n    ldr r6, [r5, r6]\n    add r0, #0xc\n    str r6, [sp, #0x1c]\n    ldr r0, [r5, r0]\n    str r0, [sp, #0x20]\n    str r3, [sp, #0x24]\n    str r3, [sp, #0x28]\n    ldr r3, [sp, #0x80]\n    add r0, sp, #0x4c\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r5, #8]\n    add r2, sp, #0x34\n    str r0, [sp, #0x2c]\n    add r0, sp, #0x4c\n    str r0, [sp, #0x30]\n    ldmia r4!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r2]\n    ldr r0, [sp, #0x8c]\n    str r0, [sp, #0x40]\n    mov r0, #1\n    str r0, [sp, #0x44]\n    mov r0, #4\n    str r0, [sp, #0x48]\n    add r0, sp, #0x2c\n    bl Sprite_Create\n    add r4, r0, #0\n    bne _02248C92\n    bl GF_AssertFail\n    add r0, r4, #0\n    add sp, #0x70\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_02248C98(void) {
    Sprite_GetMatrixPtr();
}

void ov02_02248CAC(void) {
    /* Original at 0x02248CAC */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x34\n    add r4, r0, #0\n    mov r2, #0\n    add r0, sp, #0x1c\n    str r2, [r0]\n    str r2, [r0, #4]\n    add r3, sp, #0x28\n    str r2, [r3]\n    str r2, [r3, #4]\n    ldr r6, _02248D14 ; =ov02_02253360\n    str r2, [r0, #8]\n    ldmia r6!, {r0, r1}\n    add r5, sp, #0x10\n    stmia r5!, {r0, r1}\n    ldr r0, [r6]\n    str r2, [r3, #8]\n    str r0, [r5]\n    add r1, r3, #0\n    str r2, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r2, [sp, #8]\n    mov r0, #0x84\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    add r3, r2, #0\n    bl ov02_02248C10\n    add r4, r0, #0\n    mov r1, #2\n    bl Sprite_SetAffineOverwriteMode\n    add r0, r4, #0\n    add r1, sp, #0x1c\n    bl Sprite_SetAffineMatrix\n    add r0, r4, #0\n    add r1, sp, #0x10\n    bl Sprite_SetAffineScale\n    mov r0, #0\n    bl GF_DegreeToSinCosIdx\n    add r1, r0, #0\n    add r0, r4, #0\n    bl Sprite_SetAffineZRotation\n    add r0, r4, #0\n    add sp, #0x34\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02248D14: .word ov02_02253360"
    );
    #endif
}

void ov02_02248D18(void) {
    /* Original at 0x02248D18 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    mov r3, #0\n    add r2, sp, #0x10\n    str r3, [r2]\n    str r3, [r2, #4]\n    str r3, [r2, #8]\n    cmp r1, #1\n    bne _02248D2C\n    mov r3, #1\n    mov r2, #2\n    str r2, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #0x83\n    str r1, [sp, #0xc]\n    add r1, sp, #0x10\n    bl ov02_02248C10\n    add r4, r0, #0\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #6\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #0\n    add sp, #0x1c\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov02_02248D58(void) {
    /* Original at 0x02248D58 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r5, sp, #0x18\n    mov r4, #0\n    str r4, [r5]\n    str r4, [r5, #4]\n    str r0, [sp, #0xc]\n    str r2, [sp, #0x14]\n    str r3, [sp, #0x10]\n    str r4, [r5, #8]\n    str r1, [sp, #8]\n    add r0, sp, #8\n    str r0, [sp]\n    mov r0, #0x82\n    str r0, [sp, #4]\n    add r0, r1, #0\n    ldr r1, _02248D88 ; =ov02_02253454\n    add r2, r5, #0\n    add r3, r4, #0\n    bl sub_02068B0C\n    add sp, #0x24\n    pop {r4, r5, pc}\n    nop\n    _02248D88: .word ov02_02253454"
    );
    #endif
}

void ov02_02248D8C(void) {
    sub_02068D74();
}

void ov02_02248D98(void) {
    /* Original at 0x02248D98 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl sub_02068D98\n    add r2, r4, #0\n    add r3, r0, #0\n    add r2, #0x58\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r4, #0x64]\n    bl ov02_02248CAC\n    str r0, [r4, #0x68]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov02_02248DBC(void) {
    /* Original at 0x02248DBC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_02068D74\n    add r4, r0, #0\n    ldr r0, [r4, #0x6c]\n    cmp r0, #0\n    beq _02248DD0\n    bl sub_02068B48\n    ldr r0, [r4, #0x70]\n    cmp r0, #0\n    beq _02248DDA\n    bl ov01_021FCD78\n    add r0, r5, #0\n    bl sub_02068B48\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_02248DE4(void) {
    Sprite_Delete();
}

void ov02_02248DF0(void) {
    /* Original at 0x02248DF0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldrb r0, [r5]\n    lsl r1, r0, #2\n    ldr r0, _02248E0C ; =ov02_02253320\n    ldr r4, [r0, r1]\n    ldrb r1, [r5, #1]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    blx r1\n    cmp r0, #1\n    beq _02248DFC\n    pop {r3, r4, r5, pc}\n    _02248E0C: .word ov02_02253320"
    );
    #endif
}

void ov02_02248E10(void) {
    Sprite_SetDrawFlag();
}

void ov02_02248E20(void) {
    /* Original at 0x02248E20 */
    /* Requires manual decompilation - 156 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x30\n    ldr r4, _02248F74 ; =ov02_0225339C\n    add r2, r0, #0\n    ldmia r4!, {r0, r1}\n    add r3, sp, #0x24\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    ldr r4, _02248F78 ; =ov02_022533CC\n    str r0, [r3]\n    ldmia r4!, {r0, r1}\n    add r3, sp, #0x18\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r3]\n    add r0, r2, #0\n    bl sub_02068D74\n    add r4, r0, #0\n    mov r3, #1\n    add r5, r4, #0\n    strb r3, [r4]\n    mov r2, #0\n    strb r2, [r4, #2]\n    strb r2, [r4, #1]\n    str r2, [r4, #4]\n    add r6, sp, #0x24\n    ldmia r6!, {r0, r1}\n    add r5, #8\n    stmia r5!, {r0, r1}\n    ldr r0, [r6]\n    str r0, [r5]\n    str r2, [r4, #0x14]\n    str r2, [r4, #0x18]\n    str r2, [r4, #0x1c]\n    ldr r0, _02248F7C ; =0x0015E000\n    add r2, r4, #0\n    add r5, sp, #0x18\n    str r0, [r4, #0x38]\n    ldmia r5!, {r0, r1}\n    add r2, #0x2c\n    stmia r2!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r2]\n    lsl r0, r3, #0xa\n    str r0, [r4, #0x50]\n    mov r0, #0x2d\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x40]\n    mov r0, #3\n    lsl r0, r0, #0x12\n    str r0, [r4, #0x48]\n    lsl r0, r3, #0x11\n    str r0, [r4, #0x4c]\n    mov r0, #0x2d\n    bl GF_CosDeg\n    ldr r2, [r4, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r4, #0x14]\n    ldr r1, [r4, #0x40]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    ldr r2, [r4, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r4, #0x18]\n    ldr r1, [r4, #8]\n    ldr r0, [r4, #0x14]\n    add r0, r1, r0\n    str r0, [sp, #0x24]\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x18]\n    add r0, r1, r0\n    str r0, [sp, #0x28]\n    ldr r0, [r4, #0x68]\n    add r1, sp, #0x24\n    bl Sprite_SetMatrix\n    ldr r0, [r4, #0x68]\n    add r1, sp, #0x18\n    bl Sprite_SetAffineScale\n    ldr r1, [r4, #0x38]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_DegreeToSinCosIdx\n    add r1, r0, #0\n    ldr r0, [r4, #0x68]\n    bl Sprite_SetAffineZRotation\n    ldr r0, [r4, #0x68]\n    mov r1, #0x84\n    bl Sprite_SetDrawPriority\n    ldr r0, [r4, #0x68]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x58]\n    ldr r1, [r4, #0x60]\n    bl ov02_0224B298\n    str r0, [r4, #0x6c]\n    ldr r0, [r4, #0x5c]\n    mov r1, #4\n    bl ov01_021FCD2C\n    ldr r2, _02248F80 ; =0xFFF88000\n    mov r1, #1\n    mov r3, #0xc\n    str r0, [r4, #0x70]\n    bl ov01_021FCD8C\n    add r1, sp, #0xc\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    ldr r3, _02248F84 ; =ov02_022533A8\n    str r0, [r1, #8]\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    mov r1, #2\n    str r0, [r2]\n    ldr r4, [r4, #0x60]\n    add r0, r4, #0\n    bl Sprite_SetAffineOverwriteMode\n    add r0, r4, #0\n    add r1, sp, #0xc\n    bl Sprite_SetAffineMatrix\n    add r0, r4, #0\n    add r1, sp, #0\n    bl Sprite_SetAffineScale\n    mov r0, #0\n    bl GF_DegreeToSinCosIdx\n    add r1, r0, #0\n    add r0, r4, #0\n    bl Sprite_SetAffineZRotation\n    add r0, r4, #0\n    mov r1, #2\n    bl Sprite_SetAnimCtrlSeq\n    bl ov02_022493FC\n    add sp, #0x30\n    pop {r4, r5, r6, pc}\n    nop\n    _02248F74: .word ov02_0225339C\n    _02248F78: .word ov02_022533CC\n    _02248F7C: .word 0x0015E000\n    _02248F80: .word 0xFFF88000\n    _02248F84: .word ov02_022533A8"
    );
    #endif
}

void ov02_02248F88(void) {
    /* Original at 0x02248F88 */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r1, [r5, #0x48]\n    ldr r0, [r5, #0x4c]\n    ldr r6, [r5, #0x68]\n    ldr r4, [r5, #0x60]\n    sub r0, r1, r0\n    str r0, [r5, #0x48]\n    bpl _02248FA0\n    mov r0, #0\n    str r0, [r5, #0x48]\n    mov r0, #2\n    ldr r1, [r5, #0x4c]\n    lsl r0, r0, #0xa\n    cmp r1, r0\n    ble _02248FB2\n    mov r0, #7\n    lsl r0, r0, #0xa\n    sub r0, r1, r0\n    str r0, [r5, #0x4c]\n    mov r0, #1\n    ldr r1, [r5, #0x4c]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bge _02248FBE\n    str r0, [r5, #0x4c]\n    mov r0, #0x2d\n    bl GF_CosDeg\n    ldr r2, [r5, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r5, #0x14]\n    ldr r1, [r5, #0x40]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    ldr r2, [r5, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r5, #0x18]\n    ldr r1, [r5, #0x40]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r0, r0, #0xc\n    cmp r0, #0x5a\n    bge _02249006\n    mov r0, #1\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [r5, #0x40]\n    ldr r1, [r5, #0x2c]\n    ldr r0, [r5, #0x50]\n    sub r1, r1, r0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r1, [r5, #0x2c]\n    cmp r1, r0\n    bge _02249018\n    str r0, [r5, #0x2c]\n    ldr r1, [r5, #0x30]\n    ldr r0, [r5, #0x50]\n    sub r1, r1, r0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r1, [r5, #0x30]\n    cmp r1, r0\n    bge _0224902A\n    str r0, [r5, #0x30]\n    add r1, r5, #0\n    add r0, r6, #0\n    add r1, #0x2c\n    bl Sprite_SetAffineScale\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x2c\n    bl Sprite_SetAffineScale\n    ldr r1, [r5, #8]\n    ldr r0, [r5, #0x14]\n    add r0, r1, r0\n    str r0, [sp]\n    ldr r1, [r5, #0xc]\n    ldr r0, [r5, #0x18]\n    add r0, r1, r0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    mov r0, #0x12\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldr r0, [r5, #0x48]\n    cmp r0, #0\n    bne _0224907A\n    mov r0, #0\n    str r0, [r5, #4]\n    ldrb r0, [r5, #1]\n    add r0, r0, #1\n    strb r0, [r5, #1]\n    b _02249080\n    ldr r0, [r5, #4]\n    add r0, r0, #1\n    str r0, [r5, #4]\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov02_02249088(void) {
    /* Original at 0x02249088 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x6c]\n    bl ov02_0224B314\n    ldr r0, [r4, #0x70]\n    mov r1, #2\n    mov r2, #0\n    mov r3, #0xc\n    bl ov01_021FCD8C\n    mov r0, #1\n    lsl r0, r0, #0xa\n    str r0, [r4, #0x50]\n    lsl r0, r0, #9\n    str r0, [r4, #0x40]\n    mov r0, #0\n    str r0, [r4, #0x48]\n    mov r0, #6\n    lsl r0, r0, #0xa\n    str r0, [r4, #0x4c]\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov02_022490BC(void) {
    /* Original at 0x022490BC */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r1, [r5, #0x48]\n    ldr r0, [r5, #0x4c]\n    ldr r4, [r5, #0x68]\n    add r0, r1, r0\n    str r0, [r5, #0x48]\n    mov r0, #1\n    ldr r1, [r5, #0x4c]\n    lsl r0, r0, #0xc\n    add r2, r1, r0\n    lsl r1, r0, #4\n    str r2, [r5, #0x4c]\n    cmp r2, r1\n    ble _022490E0\n    lsl r0, r0, #4\n    str r0, [r5, #0x4c]\n    ldr r1, [r5, #0x40]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_CosDeg\n    ldr r2, [r5, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r5, #0x14]\n    mov r0, #0x80\n    bl GF_SinDeg\n    ldr r2, [r5, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r5, #0x18]\n    mov r0, #0xa\n    ldr r1, [r5, #0x40]\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    bge _02249124\n    mov r0, #1\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [r5, #0x40]\n    mov r0, #2\n    ldr r1, [r5, #0x38]\n    lsl r0, r0, #0xc\n    add r1, r1, r0\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    str r1, [r5, #0x38]\n    bl GF_DegreeToSinCosIdx\n    add r1, r0, #0\n    add r0, r4, #0\n    bl Sprite_SetAffineZRotation\n    ldr r1, [r5, #0x2c]\n    ldr r0, [r5, #0x50]\n    add r1, r1, r0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r1, [r5, #0x2c]\n    cmp r1, r0\n    ble _02249156\n    str r0, [r5, #0x2c]\n    ldr r1, [r5, #0x30]\n    ldr r0, [r5, #0x50]\n    add r1, r1, r0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r1, [r5, #0x30]\n    cmp r1, r0\n    ble _02249168\n    str r0, [r5, #0x30]\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x2c\n    bl Sprite_SetAffineScale\n    ldr r1, [r5, #8]\n    ldr r0, [r5, #0x14]\n    add r0, r1, r0\n    str r0, [sp]\n    ldr r1, [r5, #0xc]\n    ldr r0, [r5, #0x18]\n    sub r0, r1, r0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldr r1, [sp, #4]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r1, r0, #0xc\n    mov r0, #0xf\n    mvn r0, r0\n    cmp r1, r0\n    bgt _022491A2\n    ldrb r0, [r5, #1]\n    add r0, r0, #1\n    strb r0, [r5, #1]\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

u32 ov02_022491A8(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x68)), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x60)), 1);
    *((u32*)(r4 + 4)) = 0;
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    return 1;
}

void ov02_022491CC(void) {
    /* Original at 0x022491CC */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    cmp r0, #0x14\n    bge _022491E2\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r3, _02249284 ; =ov02_022533D8\n    add r2, sp, #0xc\n    ldmia r3!, {r0, r1}\n    add r6, r2, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    ldr r3, _02249288 ; =ov02_022533B4\n    str r0, [r2]\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    add r5, r2, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    mov r7, #0\n    str r0, [r2]\n    add r2, r4, #0\n    str r7, [r4, #4]\n    add r3, r6, #0\n    ldmia r3!, {r0, r1}\n    add r2, #8\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    str r7, [r4, #0x14]\n    str r7, [r4, #0x18]\n    str r7, [r4, #0x1c]\n    str r7, [r4, #0x38]\n    add r2, r4, #0\n    ldmia r5!, {r0, r1}\n    add r2, #0x2c\n    stmia r2!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r2]\n    lsl r1, r1, #8\n    ldr r0, _0224928C ; =0x0013B000\n    str r1, [r4, #0x50]\n    str r0, [r4, #0x40]\n    lsl r0, r1, #0xa\n    str r0, [r4, #0x48]\n    lsl r0, r1, #4\n    str r0, [r4, #0x4c]\n    ldr r0, [r4, #0x68]\n    add r1, r6, #0\n    bl Sprite_SetMatrix\n    ldr r0, [r4, #0x68]\n    add r1, sp, #0\n    bl Sprite_SetAffineScale\n    ldr r1, [r4, #0x38]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_DegreeToSinCosIdx\n    add r1, r0, #0\n    ldr r0, [r4, #0x68]\n    bl Sprite_SetAffineZRotation\n    ldr r0, [r4, #0x68]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x60]\n    mov r1, #6\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x60]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    mov r0, #1\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02249284: .word ov02_022533D8\n    _02249288: .word ov02_022533B4\n    _0224928C: .word 0x0013B000"
    );
    #endif
}

void ov02_02249290(void) {
    /* Original at 0x02249290 */
    /* Requires manual decompilation - 126 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r1, [r5, #0x48]\n    ldr r0, [r5, #0x4c]\n    ldr r4, [r5, #0x68]\n    sub r0, r1, r0\n    str r0, [r5, #0x48]\n    mov r0, #1\n    ldr r1, [r5, #0x4c]\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    bge _022492B0\n    lsr r0, r0, #3\n    add r0, r1, r0\n    str r0, [r5, #0x4c]\n    ldr r0, [r5, #0x48]\n    cmp r0, #0\n    bge _022492BA\n    mov r0, #0\n    str r0, [r5, #0x48]\n    ldr r0, _02249398 ; =0x0000013B\n    bl GF_CosDeg\n    ldr r2, [r5, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r5, #0x14]\n    ldr r1, [r5, #0x40]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    ldr r2, [r5, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r5, #0x18]\n    ldr r1, [r5, #0x40]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r0, r0, #0xc\n    cmp r0, #0xb4\n    bge _02249302\n    mov r0, #1\n    lsl r0, r0, #0xe\n    sub r0, r1, r0\n    str r0, [r5, #0x40]\n    ldr r1, [r5, #0x2c]\n    ldr r0, [r5, #0x50]\n    sub r1, r1, r0\n    mov r0, #1\n    lsl r0, r0, #0xa\n    str r1, [r5, #0x2c]\n    cmp r1, r0\n    bge _02249314\n    str r0, [r5, #0x2c]\n    ldr r1, [r5, #0x30]\n    ldr r0, [r5, #0x50]\n    sub r1, r1, r0\n    mov r0, #1\n    lsl r0, r0, #0xa\n    str r1, [r5, #0x30]\n    cmp r1, r0\n    bge _02249326\n    str r0, [r5, #0x30]\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x2c\n    bl Sprite_SetAffineScale\n    mov r0, #6\n    ldr r1, [r5, #0x38]\n    lsl r0, r0, #0xc\n    add r1, r1, r0\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r0, r0, #0xc\n    str r1, [r5, #0x38]\n    cmp r0, #0x3c\n    ble _0224934C\n    mov r0, #0xf\n    lsl r0, r0, #0xe\n    str r0, [r5, #0x38]\n    ldr r1, [r5, #0x38]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_DegreeToSinCosIdx\n    add r1, r0, #0\n    add r0, r4, #0\n    bl Sprite_SetAffineZRotation\n    ldr r1, [r5, #8]\n    ldr r0, [r5, #0x14]\n    add r0, r1, r0\n    str r0, [sp]\n    ldr r1, [r5, #0xc]\n    ldr r0, [r5, #0x18]\n    add r0, r1, r0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldr r0, [r5, #0x48]\n    cmp r0, #0\n    bgt _02249390\n    add r0, r4, #0\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldrb r0, [r5, #1]\n    add r0, r0, #1\n    strb r0, [r5, #1]\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _02249398: .word 0x0000013B"
    );
    #endif
}

void ov02_0224939C(void) {
    /* Original at 0x0224939C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    cmp r0, #8\n    bne _022493BA\n    ldr r0, [r4, #0x60]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x5c]\n    mov r1, #0\n    bl ov02_02249444\n    ldr r0, [r4, #4]\n    cmp r0, #0xa\n    bne _022493C8\n    ldr r0, [r4, #0x60]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #4]\n    cmp r0, #0xf\n    ble _022493E6\n    ldr r0, [r4, #0x70]\n    bl ov01_021FCD6C\n    cmp r0, #1\n    bne _022493E6\n    mov r0, #0\n    str r0, [r4, #4]\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    mov r0, #2\n    strb r0, [r4, #2]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

u8 ov02_022493EC(void) {
    return 0;
}

void ov02_022493F0(void) {
    NARC_New();
}

void ov02_022493FC(void) {
    BeginNormalPaletteFade(0, 4, 6, 1);
}

void ov02_02249420(void) {
    BeginNormalPaletteFade(0, 1, 4, 6);
}

void ov02_02249444(void) {
    PlayerAvatar_GetMapObject(*((u32*)(r0 + 0x40)));
    MapObject_SetVisible(r4);
}

void ov02_02249458(void) {
    /* Original at 0x02249458 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    add r5, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov02_0224955C\n    add r4, r0, #0\n    str r6, [r4, #0x5c]\n    strh r7, [r4, #0xc]\n    ldrh r0, [r4, #0xc]\n    strh r0, [r4, #0xe]\n    str r5, [r4, #0x20]\n    ldr r0, [r4, #0x60]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetMapObject\n    mov r1, #0x82\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    cmp r5, #0\n    bne _02249490\n    ldr r0, _022494B8 ; =ov02_02249584\n    add r1, r4, #0\n    mov r2, #0x86\n    bl SysTask_CreateOnMainQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r5, #2\n    bne _022494AC\n    ldr r0, [sp]\n    bl FollowMon_GetMapObject\n    mov r1, #0x83\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, _022494BC ; =ov02_022499B8\n    add r1, r4, #0\n    mov r2, #0x86\n    bl SysTask_CreateOnMainQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _022494C0 ; =ov02_02249984\n    add r1, r4, #0\n    mov r2, #0x86\n    bl SysTask_CreateOnMainQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    _022494B8: .word ov02_02249584\n    _022494BC: .word ov02_022499B8\n    _022494C0: .word ov02_02249984"
    );
    #endif
}

void ov02_022494C4(void) {
    /* Original at 0x022494C4 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov02_0224955C\n    add r4, r0, #0\n    str r5, [r4, #0x5c]\n    mov r0, #0\n    strh r0, [r4, #0xc]\n    mov r0, #2\n    strh r0, [r4, #0xe]\n    mov r0, #3\n    str r0, [r4, #0x20]\n    mov r0, #0x82\n    lsl r0, r0, #2\n    str r6, [r4, r0]\n    add r0, r0, #4\n    str r7, [r4, r0]\n    ldr r0, [r4, #0x60]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r1, sp, #0xc\n    bl MapObject_CopyPositionVector\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    ldr r1, [sp]\n    ldr r0, [sp, #0xc]\n    sub r0, r1, r0\n    mov r1, #2\n    lsl r1, r1, #0xc\n    bl FX_Div\n    mov r1, #0xbb\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    add r0, r2, r0\n    str r0, [r4, r1]\n    ldr r2, [sp, #8]\n    ldr r0, [sp, #0x14]\n    add r1, #8\n    sub r0, r2, r0\n    str r0, [r4, r1]\n    ldr r0, _02249538 ; =ov02_022499B8\n    add r1, r4, #0\n    mov r2, #0x86\n    bl SysTask_CreateOnMainQueue\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02249538: .word ov02_022499B8"
    );
    #endif
}

void ov02_0224953C(void) {
    SysTask_GetData();
}

void ov02_02249548(void) {
    SysTask_GetData();
    ov02_0224957C();
    SysTask_Destroy(r4);
}

void ov02_0224955C(void) {
    /* Original at 0x0224955C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0xbe\n    add r5, r0, #0\n    mov r0, #4\n    lsl r1, r1, #2\n    bl Heap_AllocAtEnd\n    mov r2, #0xbe\n    mov r1, #0\n    lsl r2, r2, #2\n    add r4, r0, #0\n    bl memset\n    str r5, [r4, #0x60]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_0224957C(void) {
    Heap_Free();
}

void ov02_02249584(void) {
    /* Original at 0x02249584 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r4, _022495B4 ; =ov02_02253550\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    blx r1\n    cmp r0, #1\n    beq _0224958A\n    ldr r0, [r5, #0x10]\n    cmp r0, #1\n    bne _022495B2\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _022495AC\n    bl sub_02068BAC\n    add r0, r5, #0\n    bl ov02_0224A32C\n    pop {r3, r4, r5, pc}\n    _022495B4: .word ov02_02253550"
    );
    #endif
}

u32 ov02_022495B8(void) {
    ov02_02249EC0();
    ov02_02249CF0(r4);
    return 0;
}

u32 ov02_022495D0(void) {
    ov02_02249F6C();
    ov02_02249CF0(r4);
    return 0;
}

void ov02_022495E8(void) {
    /* Original at 0x022495E8 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #0x85\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _022495FE\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r5, _02249650 ; =ov02_02253408\n    add r3, sp, #0xc\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    ldr r5, _02249654 ; =ov02_02253384\n    str r0, [r3]\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    add r1, r2, #0\n    str r0, [r3]\n    add r0, r4, #0\n    bl ov02_0224A418\n    mov r1, #0x79\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl ov02_0224A9B8\n    mov r1, #0x7a\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #1\n    bl ov02_0224A9D8\n    add r0, r4, #0\n    bl ov02_02249D40\n    mov r0, #1\n    str r0, [r4, #0x10]\n    ldr r1, [r4]\n    add r1, r1, #1\n    str r1, [r4]\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    _02249650: .word ov02_02253408\n    _02249654: .word ov02_02253384"
    );
    #endif
}

void ov02_02249658(void) {
    /* Original at 0x02249658 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov02_0224B72C\n    mov r0, #0\n    ldr r1, _0224968C ; =0xFFFC0000\n    str r0, [r4, #0x2c]\n    str r1, [r4, #0x54]\n    mov r1, #0xfe\n    lsl r1, r1, #0xc\n    str r1, [r4, #0x44]\n    mov r1, #0xff\n    lsl r1, r1, #0xc\n    str r1, [r4, #0x48]\n    mov r1, #0x5f\n    lsl r1, r1, #0xc\n    str r1, [r4, #0x4c]\n    mov r1, #0x61\n    lsl r1, r1, #0xc\n    str r1, [r4, #0x50]\n    mov r1, #1\n    str r1, [r4, #0x2c]\n    ldr r1, [r4]\n    add r1, r1, #1\n    str r1, [r4]\n    pop {r4, pc}\n    _0224968C: .word 0xFFFC0000"
    );
    #endif
}

void ov02_02249690(void) {
    /* Original at 0x02249690 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r2, #0\n    str r2, [r4, #0x2c]\n    ldr r1, [r4, #0x44]\n    ldr r0, [r4, #0x54]\n    add r0, r1, r0\n    str r0, [r4, #0x44]\n    cmp r0, #0\n    bgt _022496B4\n    mov r0, #2\n    str r2, [r4, #0x44]\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x54]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    ldr r0, [r4, #0x50]\n    str r0, [sp]\n    ldr r1, [r4, #0x44]\n    ldr r2, [r4, #0x4c]\n    ldr r3, [r4, #0x48]\n    add r0, r4, #0\n    bl ov02_0224A69C\n    mov r0, #1\n    str r0, [r4, #0x2c]\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov02_022496D0(void) {
    /* Original at 0x022496D0 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    ldr r1, [r4, #0x4c]\n    ldr r0, [r4, #0x54]\n    sub r0, r1, r0\n    str r0, [r4, #0x4c]\n    ldr r1, [r4, #0x50]\n    ldr r0, [r4, #0x54]\n    add r0, r1, r0\n    str r0, [r4, #0x50]\n    mov r0, #2\n    ldr r1, [r4, #0x54]\n    lsl r0, r0, #0xc\n    add r2, r1, r0\n    lsl r1, r0, #4\n    str r2, [r4, #0x54]\n    cmp r2, r1\n    ble _022496FE\n    lsl r0, r0, #4\n    str r0, [r4, #0x54]\n    mov r0, #0xe\n    ldr r1, [r4, #0x4c]\n    lsl r0, r0, #0xe\n    cmp r1, r0\n    bge _0224970A\n    str r0, [r4, #0x4c]\n    mov r0, #0x22\n    ldr r1, [r4, #0x50]\n    lsl r0, r0, #0xe\n    cmp r1, r0\n    ble _02249716\n    str r0, [r4, #0x50]\n    ldr r0, [r4, #0x50]\n    str r0, [sp]\n    ldr r1, [r4, #0x44]\n    ldr r2, [r4, #0x4c]\n    ldr r3, [r4, #0x48]\n    add r0, r4, #0\n    bl ov02_0224A69C\n    mov r0, #1\n    str r0, [r4, #0x2c]\n    mov r0, #0xe\n    ldr r1, [r4, #0x4c]\n    lsl r0, r0, #0xe\n    cmp r1, r0\n    bne _0224974E\n    mov r0, #0x22\n    ldr r1, [r4, #0x50]\n    lsl r0, r0, #0xe\n    cmp r1, r0\n    bne _0224974E\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov02_0224A450\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov02_02249754(void) {
    /* Original at 0x02249754 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #8]\n    add r1, r1, #1\n    str r1, [r0, #8]\n    cmp r1, #0xf\n    blt _0224976C\n    mov r1, #0\n    str r1, [r0, #8]\n    ldr r1, _02249770 ; =0xFFFC0000\n    str r1, [r0, #0x58]\n    ldr r1, [r0]\n    add r1, r1, #1\n    str r1, [r0]\n    mov r0, #0\n    bx lr\n    _02249770: .word 0xFFFC0000"
    );
    #endif
}

void ov02_02249774(void) {
    /* Original at 0x02249774 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_GetMatrixPtr\n    add r3, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r1, [sp]\n    ldr r0, [r4, #0x58]\n    add r1, r1, r0\n    mov r0, #0xa\n    lsl r0, r0, #0x10\n    str r1, [sp]\n    cmp r1, r0\n    bgt _022497AC\n    mov r0, #3\n    lsl r0, r0, #0x12\n    str r0, [sp]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov02_022497C0(void) {
    /* Original at 0x022497C0 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r1, [r4, #0x58]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r1, r0, #1\n    ldr r0, _02249834 ; =0xFFFFE000\n    str r1, [r4, #0x58]\n    cmp r1, r0\n    ble _02249802\n    str r0, [r4, #0x58]\n    ldr r0, [r4]\n    mov r1, #5\n    add r0, r0, #1\n    str r0, [r4]\n    ldr r0, [r4, #0x5c]\n    mov r2, #0\n    bl GetMonData\n    add r5, r0, #0\n    ldr r0, [r4, #0x5c]\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    lsl r0, r5, #0x10\n    lsl r1, r1, #0x18\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x18\n    bl PlayCry\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_GetMatrixPtr\n    add r5, r0, #0\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r3]\n    ldr r1, [sp]\n    ldr r0, [r4, #0x58]\n    add r0, r1, r0\n    str r0, [sp]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r2, #0\n    bl Sprite_SetMatrix\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _02249834: .word 0xFFFFE000"
    );
    #endif
}

void ov02_02249838(void) {
    /* Original at 0x02249838 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #8]\n    add r1, r1, #1\n    str r1, [r0, #8]\n    cmp r1, #8\n    blt _02249850\n    mov r1, #0\n    str r1, [r0, #8]\n    ldr r1, _02249854 ; =0xFFFFF000\n    str r1, [r0, #0x58]\n    ldr r1, [r0]\n    add r1, r1, #1\n    str r1, [r0]\n    mov r0, #0\n    bx lr\n    _02249854: .word 0xFFFFF000"
    );
    #endif
}

void ov02_02249858(void) {
    /* Original at 0x02249858 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #0x58]\n    lsl r1, r0, #1\n    ldr r0, _022498B4 ; =0xFFFC0000\n    str r1, [r4, #0x58]\n    cmp r1, r0\n    bge _0224986C\n    str r0, [r4, #0x58]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_GetMatrixPtr\n    add r5, r0, #0\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r3]\n    ldr r1, [sp]\n    ldr r0, [r4, #0x58]\n    add r0, r1, r0\n    str r0, [sp]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r2, #0\n    bl Sprite_SetMatrix\n    ldr r1, [sp]\n    ldr r0, _022498B8 ; =0xFFFD8000\n    cmp r1, r0\n    bgt _022498AC\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x54]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _022498B4: .word 0xFFFC0000\n    _022498B8: .word 0xFFFD8000"
    );
    #endif
}

void ov02_022498BC(void) {
    /* Original at 0x022498BC */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    ldr r1, [r4, #0x4c]\n    ldr r0, [r4, #0x54]\n    add r0, r1, r0\n    str r0, [r4, #0x4c]\n    ldr r1, [r4, #0x50]\n    ldr r0, [r4, #0x54]\n    sub r0, r1, r0\n    str r0, [r4, #0x50]\n    mov r0, #1\n    ldr r1, [r4, #0x54]\n    lsl r0, r0, #0xe\n    add r2, r1, r0\n    lsl r1, r0, #2\n    str r2, [r4, #0x54]\n    cmp r2, r1\n    ble _022498EA\n    lsl r0, r0, #2\n    str r0, [r4, #0x54]\n    mov r0, #0x5f\n    ldr r1, [r4, #0x4c]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    blt _022498F6\n    str r0, [r4, #0x4c]\n    mov r0, #0x61\n    ldr r1, [r4, #0x50]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bgt _02249902\n    str r0, [r4, #0x50]\n    ldr r0, [r4, #0x50]\n    str r0, [sp]\n    ldr r1, [r4, #0x44]\n    ldr r2, [r4, #0x4c]\n    ldr r3, [r4, #0x48]\n    add r0, r4, #0\n    bl ov02_0224A69C\n    mov r0, #1\n    str r0, [r4, #0x2c]\n    mov r0, #0x5f\n    ldr r1, [r4, #0x4c]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bne _0224993A\n    mov r0, #0x61\n    ldr r1, [r4, #0x50]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bne _0224993A\n    add r0, r4, #0\n    bl ov02_0224B768\n    mov r0, #0x11\n    str r0, [r4, #0x34]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov02_02249940(void) {
    ov02_02249FD4(0);
}

void ov02_02249954(void) {
    ov02_0224A028(0);
}

void ov02_02249968(void) {
    ov02_0224A6D0(0);
}

void ov02_0224997C(void) {
    ((u32*)r0)[4] = 1;
}

void ov02_02249984(void) {
    /* Original at 0x02249984 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r4, _022499B4 ; =ov02_02253588\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    blx r1\n    cmp r0, #1\n    beq _0224998A\n    ldr r0, [r5, #0x10]\n    cmp r0, #1\n    bne _022499B2\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _022499AC\n    bl sub_02068BAC\n    add r0, r5, #0\n    bl ov02_0224A32C\n    pop {r3, r4, r5, pc}\n    _022499B4: .word ov02_02253588"
    );
    #endif
}

void ov02_022499B8(void) {
    /* Original at 0x022499B8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r4, _022499E8 ; =ov02_022534F0\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    blx r1\n    cmp r0, #1\n    beq _022499BE\n    ldr r0, [r5, #0x10]\n    cmp r0, #1\n    bne _022499E6\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _022499E0\n    bl sub_02068BAC\n    add r0, r5, #0\n    bl ov02_0224A32C\n    pop {r3, r4, r5, pc}\n    _022499E8: .word ov02_022534F0"
    );
    #endif
}

void ov02_022499EC(void) {
    /* Original at 0x022499EC */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #0x85\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _02249A02\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r5, _02249A54 ; =ov02_022533FC\n    add r3, sp, #0xc\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    ldr r5, _02249A58 ; =ov02_02253414\n    str r0, [r3]\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    add r1, r2, #0\n    str r0, [r3]\n    add r0, r4, #0\n    bl ov02_0224A418\n    mov r1, #0x79\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl ov02_0224A9B8\n    mov r1, #0x7a\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #1\n    bl ov02_0224A9D8\n    add r0, r4, #0\n    bl ov02_02249D40\n    mov r0, #1\n    str r0, [r4, #0x10]\n    ldr r1, [r4]\n    add r1, r1, #1\n    str r1, [r4]\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    _02249A54: .word ov02_022533FC\n    _02249A58: .word ov02_02253414"
    );
    #endif
}

void ov02_02249A5C(void) {
    /* Original at 0x02249A5C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    mov r3, #0x85\n    add r4, r0, #0\n    lsl r3, r3, #2\n    ldr r0, [r4, r3]\n    cmp r0, #0\n    bne _02249A72\n    add sp, #0xc\n    mov r0, #0\n    pop {r3, r4, r5, r6, pc}\n    ldr r6, _02249AC0 ; =ov02_02253348\n    add r5, sp, #0\n    ldmia r6!, {r0, r1}\n    add r2, r5, #0\n    stmia r5!, {r0, r1}\n    ldr r0, [r6]\n    str r0, [r5]\n    add r0, r3, #0\n    add r0, #0xd8\n    ldr r1, [sp]\n    ldr r0, [r4, r0]\n    add r3, #0xe0\n    add r0, r1, r0\n    str r0, [sp]\n    ldr r1, [sp, #4]\n    ldr r0, [r4, r3]\n    add r0, r1, r0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r1, r2, #0\n    bl ov02_0224A418\n    mov r1, #0x79\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #0\n    bl ov02_02249D40\n    mov r0, #1\n    str r0, [r4, #0x10]\n    ldr r1, [r4]\n    add r1, r1, #1\n    str r1, [r4]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _02249AC0: .word ov02_02253348"
    );
    #endif
}

void ov02_02249AC4(void) {
    ov02_0224A8D4(0);
}

u32 ov02_02249AD8(void) {
    ov02_0224A4D0();
    ov02_02249D18(r4);
    return 0;
}

void ov02_02249AF0(void) {
    ov02_02249D40(0, 1, 0x85);
}

u32 ov02_02249B10(void) {
    ov02_0224AB58();
    ov02_0224AC38(r4);
    ov02_0224A690(r4);
    ov02_0224B6B0(r4, 1);
    return 0;
}

void ov02_02249B38(void) {
    /* Original at 0x02249B38 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov02_0224AB8C\n    cmp r0, #2\n    beq _02249B48\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov02_02249B60(void) {
    ov02_0224ADF0(1, 0);
}

void ov02_02249B80(void) {
    /* Original at 0x02249B80 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    add r1, r1, #1\n    str r1, [r4, #8]\n    cmp r1, #0x14\n    blt _02249BA2\n    mov r1, #0\n    str r1, [r4, #8]\n    ldr r1, [r4]\n    add r1, r1, #1\n    str r1, [r4]\n    bl ov02_0224AB58\n    add r0, r4, #0\n    bl ov02_0224ADF0\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov02_02249BA8(void) {
    /* Original at 0x02249BA8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov02_0224AB8C\n    cmp r0, #3\n    beq _02249BB8\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _02249BD4 ; =SEQ_SE_DP_FW019\n    bl PlaySE\n    mov r0, #2\n    lsl r0, r0, #0xa\n    str r0, [r4, #0x54]\n    mov r0, #2\n    str r0, [r4, #0x14]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _02249BD4: .word SEQ_SE_DP_FW019"
    );
    #endif
}

void ov02_02249BD8(void) {
    /* Original at 0x02249BD8 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    ldr r1, [r4, #0x4c]\n    ldr r0, [r4, #0x54]\n    add r0, r1, r0\n    str r0, [r4, #0x4c]\n    ldr r1, [r4, #0x50]\n    ldr r0, [r4, #0x54]\n    sub r0, r1, r0\n    str r0, [r4, #0x50]\n    mov r0, #2\n    ldr r1, [r4, #0x54]\n    lsl r0, r0, #0xa\n    add r2, r1, r0\n    lsl r1, r0, #5\n    str r2, [r4, #0x54]\n    cmp r2, r1\n    ble _02249C06\n    lsl r0, r0, #5\n    str r0, [r4, #0x54]\n    mov r0, #0x5f\n    ldr r1, [r4, #0x4c]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    blt _02249C12\n    str r0, [r4, #0x4c]\n    mov r0, #0x61\n    ldr r1, [r4, #0x50]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bgt _02249C1E\n    str r0, [r4, #0x50]\n    ldr r0, [r4, #0x50]\n    str r0, [sp]\n    ldr r1, [r4, #0x44]\n    ldr r2, [r4, #0x4c]\n    ldr r3, [r4, #0x48]\n    add r0, r4, #0\n    bl ov02_0224A69C\n    mov r0, #1\n    str r0, [r4, #0x2c]\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    bne _02249C4A\n    add r0, r4, #0\n    bl ov02_0224AB8C\n    cmp r0, #4\n    bne _02249C4A\n    mov r0, #1\n    str r0, [r4, #0x18]\n    bl ov02_02249420\n    mov r0, #0x5f\n    ldr r1, [r4, #0x4c]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bne _02249C6C\n    mov r0, #0x61\n    ldr r1, [r4, #0x50]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bne _02249C6C\n    mov r0, #0x11\n    str r0, [r4, #0x34]\n    mov r0, #1\n    str r0, [r4, #0x14]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov02_02249C74(void) {
    /* Original at 0x02249C74 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x20]\n    cmp r1, #3\n    bne _02249C96\n    bl ov02_0224AB8C\n    cmp r0, #2\n    bne _02249C92\n    add r0, r4, #0\n    bl ov02_0224AB9C\n    ldr r0, [r4]\n    add r0, r0, #2\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}\n    ldr r1, [r4, #0x18]\n    cmp r1, #0\n    bne _02249CAC\n    bl ov02_0224AB8C\n    cmp r0, #4\n    bne _02249CAC\n    mov r0, #1\n    str r0, [r4, #0x18]\n    bl ov02_02249420\n    add r0, r4, #0\n    bl ov02_0224AB8C\n    cmp r0, #2\n    beq _02249CBA\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    bne _02249CC8\n    mov r0, #1\n    str r0, [r4, #0x18]\n    bl ov02_02249420\n    add r0, r4, #0\n    bl ov02_0224AB9C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov02_02249CD8(void) {
    IsPaletteFadeFinished(0);
}

void ov02_02249CF0(void) {
    /* Original at 0x02249CF0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x21\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    ldr r0, _02249D14 ; =ov02_02249D5C\n    add r1, r4, #0\n    mov r2, #0x80\n    bl SysTask_CreateOnVBlankQueue\n    mov r1, #0x22\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _02249D14: .word ov02_02249D5C"
    );
    #endif
}

void ov02_02249D18(void) {
    /* Original at 0x02249D18 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x21\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    ldr r0, _02249D3C ; =ov02_02249E58\n    add r1, r4, #0\n    mov r2, #0x80\n    bl SysTask_CreateOnVBlankQueue\n    mov r1, #0x22\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _02249D3C: .word ov02_02249E58"
    );
    #endif
}

void ov02_02249D40(void) {
    SysTask_Destroy(0x22, 0x22, 0);
}

void ov02_02249D5C(void) {
    /* Original at 0x02249D5C */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r0, #0x21\n    add r6, r1, #0\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    bne _02249DD2\n    mov r7, #0x6b\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r5, r7]\n    cmp r0, #0\n    beq _02249D7C\n    bl sub_0200ADA4\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _02249D72\n    mov r7, #0x6f\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    cmp r0, #0\n    beq _02249D96\n    bl sub_0200B00C\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #3\n    blt _02249D8C\n    mov r0, #0x86\n    lsl r0, r0, #2\n    ldr r1, [r6, r0]\n    cmp r1, #0\n    beq _02249DAE\n    add r0, r6, #0\n    bl ov02_0224A834\n    mov r0, #0x87\n    lsl r0, r0, #2\n    ldr r1, [r6, r0]\n    cmp r1, #0\n    beq _02249DBE\n    add r0, r6, #0\n    bl ov02_0224A88C\n    mov r0, #0x21\n    lsl r0, r0, #4\n    ldr r1, [r6, r0]\n    mov r2, #0x80\n    add r1, r1, #1\n    str r1, [r6, r0]\n    ldr r0, _02249DD4 ; =ov02_02249DD8\n    add r1, r6, #0\n    bl SysTask_CreateOnVWaitQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    _02249DD4: .word ov02_02249DD8"
    );
    #endif
}

void ov02_02249DD8(void) {
    /* Original at 0x02249DD8 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    mov r0, #0x21\n    add r6, r1, #0\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    cmp r0, #1\n    bne _02249E56\n    mov r7, #0x6b\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r5, r7]\n    cmp r0, #0\n    beq _02249DFA\n    bl sub_0200A740\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _02249DF0\n    mov r7, #0x6f\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    cmp r0, #0\n    beq _02249E14\n    bl sub_0200A740\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #3\n    blt _02249E0A\n    mov r0, #0x86\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    beq _02249E32\n    bl Heap_Free\n    mov r0, #0x86\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r6, r0]\n    mov r0, #0x87\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    beq _02249E48\n    bl Heap_Free\n    mov r0, #0x87\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r6, r0]\n    mov r0, #0x85\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r6, r0]\n    ldr r0, [sp]\n    bl SysTask_Destroy\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_02249E58(void) {
    /* Original at 0x02249E58 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0x67\n    add r4, r1, #0\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl SpriteResourceCollection_Find\n    mov r1, #0x21\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    bne _02249E8A\n    bl sub_0200ADA4\n    ldr r0, _02249E8C ; =ov02_02249E90\n    add r1, r4, #0\n    mov r2, #0x80\n    bl SysTask_CreateOnVWaitQueue\n    mov r0, #0x21\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    pop {r4, pc}\n    _02249E8C: .word ov02_02249E90"
    );
    #endif
}

void ov02_02249E90(void) {
    /* Original at 0x02249E90 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x67\n    add r4, r1, #0\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl SpriteResourceCollection_Find\n    mov r1, #0x21\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    cmp r1, #1\n    bne _02249EBE\n    bl sub_0200A740\n    mov r0, #0x85\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_02249EC0(void) {
    /* Original at 0x02249EC0 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov02_0224A074\n    mov r2, #3\n    mov r3, #1\n    add r4, r0, #0\n    lsl r2, r2, #0x12\n    add r0, r5, #0\n    mov r1, #0\n    lsl r3, r3, #0xc\n    str r2, [sp]\n    bl ov02_0224A69C\n    add r0, r5, #0\n    bl ov02_0224A648\n    ldr r0, [r5, #0x60]\n    mov r1, #0\n    ldr r0, [r0, #8]\n    bl GetBgPriority\n    strh r0, [r5, #0x24]\n    ldr r0, [r5, #0x60]\n    mov r1, #3\n    ldr r0, [r0, #8]\n    bl GetBgPriority\n    strh r0, [r5, #0x26]\n    ldr r2, _02249F68 ; =0x0400000A\n    mov r1, #3\n    ldrh r3, [r2]\n    mov r0, #1\n    bic r3, r1\n    orr r0, r3\n    strh r0, [r2]\n    ldrh r0, [r2, #4]\n    bic r0, r1\n    strh r0, [r2, #4]\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add r2, r5, #0\n    add r0, r4, #0\n    #ifdef HEARTGOLD\n    mov r1, #2\n    #else\n    mov r1, #5\n    #endif\n    add r2, #0x6c\n    bl ov02_0224A570\n    ldr r0, [r5, #0x60]\n    add r3, r5, #0\n    ldr r0, [r0, #8]\n    add r1, r4, #0\n    #ifdef HEARTGOLD\n    mov r2, #0\n    #else\n    mov r2, #3\n    #endif\n    add r3, #0x68\n    bl ov02_0224A598\n    ldr r0, [r5, #0x60]\n    add r3, r5, #0\n    ldr r0, [r0, #8]\n    add r1, r4, #0\n    #ifdef HEARTGOLD\n    mov r2, #1\n    #else\n    mov r2, #4\n    #endif\n    add r3, #0x64\n    bl ov02_0224A5D0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov02_0224A080\n    add r0, r4, #0\n    bl NARC_Delete\n    mov r0, #4\n    mov r1, #0x20\n    bl sub_020689C8\n    mov r1, #0x1e\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #8\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    pop {r3, r4, r5, pc}\n    _02249F68: .word 0x0400000A"
    );
    #endif
}

void ov02_02249F6C(void) {
    /* Original at 0x02249F6C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov02_0224A074\n    add r4, r0, #0\n    ldr r0, [r5, #0x60]\n    mov r1, #0\n    ldr r0, [r0, #8]\n    bl GetBgPriority\n    strh r0, [r5, #0x24]\n    ldr r0, [r5, #0x60]\n    mov r1, #3\n    ldr r0, [r0, #8]\n    bl GetBgPriority\n    strh r0, [r5, #0x26]\n    ldr r2, _02249FD0 ; =0x0400000A\n    mov r1, #3\n    ldrh r3, [r2]\n    mov r0, #1\n    bic r3, r1\n    orr r0, r3\n    strh r0, [r2]\n    ldrh r0, [r2, #4]\n    bic r0, r1\n    strh r0, [r2, #4]\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov02_0224A080\n    add r0, r4, #0\n    bl NARC_Delete\n    mov r0, #4\n    mov r1, #0x20\n    bl sub_020689C8\n    mov r1, #0x1e\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #8\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    pop {r3, r4, r5, pc}\n    _02249FD0: .word 0x0400000A"
    );
    #endif
}

void ov02_02249FD4(void) {
    /* Original at 0x02249FD4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl sub_020689F8\n    ldr r0, [r4, #0x60]\n    ldr r0, [r0, #8]\n    bl ov02_0224A63C\n    add r0, r4, #0\n    bl ov02_0224A288\n    ldr r2, _0224A024 ; =0x04000008\n    ldrh r1, [r4, #0x24]\n    ldrh r3, [r2]\n    mov r0, #3\n    bic r3, r0\n    orr r1, r3\n    strh r1, [r2]\n    ldrh r1, [r2, #6]\n    bic r1, r0\n    ldrh r0, [r4, #0x26]\n    orr r0, r1\n    strh r0, [r2, #6]\n    mov r0, #0\n    mov r1, #1\n    bl sub_0205B4EC\n    mov r0, #8\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    pop {r4, pc}\n    nop\n    _0224A024: .word 0x04000008"
    );
    #endif
}

void ov02_0224A028(void) {
    /* Original at 0x0224A028 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl sub_020689F8\n    add r0, r4, #0\n    bl ov02_0224A288\n    ldr r2, _0224A070 ; =0x04000008\n    ldrh r1, [r4, #0x24]\n    ldrh r3, [r2]\n    mov r0, #3\n    bic r3, r0\n    orr r1, r3\n    strh r1, [r2]\n    ldrh r1, [r2, #6]\n    bic r1, r0\n    ldrh r0, [r4, #0x26]\n    orr r0, r1\n    strh r0, [r2, #6]\n    mov r0, #0\n    mov r1, #1\n    bl sub_0205B4EC\n    mov r0, #8\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    pop {r4, pc}\n    nop\n    _0224A070: .word 0x04000008"
    );
    #endif
}

void ov02_0224A074(void) {
    NARC_New();
}

void ov02_0224A080(void) {
    /* Original at 0x0224A080 */
    /* Requires manual decompilation - 236 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r1, #0\n    mov r1, #0x7e\n    add r5, r0, #0\n    lsl r1, r1, #2\n    add r1, r5, r1\n    bl ov02_0224A7A8\n    add r1, r5, #0\n    mov r0, #0x20\n    add r1, #0x74\n    mov r2, #4\n    bl G2dRenderer_Init\n    str r0, [r5, #0x70]\n    add r0, r5, #0\n    mov r2, #2\n    add r0, #0x74\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r0, #4\n    mov r1, #0\n    add r2, r0, #0\n    bl Create2DGfxResObjMan\n    mov r1, #0x67\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #3\n    mov r1, #1\n    mov r2, #4\n    bl Create2DGfxResObjMan\n    mov r1, #0x1a\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #4\n    mov r1, #2\n    add r2, r0, #0\n    bl Create2DGfxResObjMan\n    mov r1, #0x69\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #2\n    mov r1, #3\n    mov r2, #4\n    bl Create2DGfxResObjMan\n    mov r1, #0x6a\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #4\n    sub r1, #0xc\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r6, #0\n    mov r2, #0xe\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0x6b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldrh r2, [r5, #0xe]\n    sub r1, #0x10\n    ldr r0, [r5, r1]\n    lsl r3, r2, #1\n    ldr r2, _0224A278 ; =ov02_02253304\n    add r1, r6, #0\n    ldrh r2, [r2, r3]\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0x1b\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov02_0224A810\n    mov r1, #0x6d\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r4, #0\n    str r4, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #4\n    sub r1, #0x14\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r6, #0\n    mov r2, #6\n    add r3, r4, #0\n    bl AddPlttResObjFromOpenNarc\n    mov r1, #0x6f\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldrh r2, [r5, #0xe]\n    add r4, r4, #1\n    cmp r2, #0\n    beq _0224A196\n    mov r0, #1\n    sub r2, r2, #1\n    str r0, [sp]\n    lsl r3, r2, #1\n    ldr r2, _0224A27C ; =ov02_022532FC\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #4\n    ldrh r2, [r2, r3]\n    sub r1, #0x1c\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r6, #0\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    lsl r1, r4, #2\n    add r2, r5, r1\n    mov r1, #0x6f\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    add r4, r4, #1\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov02_0224A868\n    lsl r1, r4, #2\n    add r2, r5, r1\n    mov r1, #0x6f\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #4\n    sub r1, #0x18\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r6, #0\n    mov r2, #0xf\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x72\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldrh r2, [r5, #0xe]\n    sub r1, #0x24\n    ldr r0, [r5, r1]\n    lsl r3, r2, #1\n    ldr r2, _0224A280 ; =ov02_02253310\n    add r1, r6, #0\n    ldrh r2, [r2, r3]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x73\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #4\n    sub r1, #0x28\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r6, #0\n    mov r2, #0xa\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x1d\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #4\n    sub r1, #0x28\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r6, #0\n    mov r2, #0x10\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x76\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldrh r2, [r5, #0xe]\n    sub r1, #0x30\n    ldr r0, [r5, r1]\n    lsl r3, r2, #1\n    ldr r2, _0224A284 ; =ov02_0225330A\n    add r1, r6, #0\n    ldrh r2, [r2, r3]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x77\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r1, #0x1c\n    ldr r0, [r5, #0x5c]\n    add r1, r5, r1\n    mov r2, #4\n    bl ov02_0224A7B8\n    mov r1, #0x86\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, #0x20\n    add r0, r5, r1\n    mov r1, #4\n    bl ov02_0224A800\n    mov r1, #0x87\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _0224A278: .word ov02_02253304\n    _0224A27C: .word ov02_022532FC\n    _0224A280: .word ov02_02253310\n    _0224A284: .word ov02_0225330A"
    );
    #endif
}

void ov02_0224A288(void) {
    /* Original at 0x0224A288 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r7, #0x6b\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r5, r7]\n    cmp r0, #0\n    beq _0224A29E\n    bl sub_0200AEB0\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0224A294\n    mov r7, #0x6f\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    cmp r0, #0\n    beq _0224A2B8\n    bl sub_0200B0A8\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #3\n    blt _0224A2AE\n    mov r7, #0x72\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    cmp r0, #0\n    beq _0224A2D2\n    bl sub_0200A740\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #4\n    blt _0224A2C8\n    mov r7, #0x76\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    cmp r0, #0\n    beq _0224A2EC\n    bl sub_0200A740\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #2\n    blt _0224A2E2\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl Destroy2DGfxResObjMan\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    bl Destroy2DGfxResObjMan\n    mov r0, #0x69\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl Destroy2DGfxResObjMan\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl Destroy2DGfxResObjMan\n    ldr r0, [r6, #0x70]\n    bl SpriteList_DeleteAllSprites\n    ldr r0, [r6, #0x70]\n    bl SpriteList_Delete\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224A32C(void) {
    SpriteList_RenderAndAnimateSprites();
}

void ov02_0224A33C(void) {
    /* Original at 0x0224A33C */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x70\n    add r5, r0, #0\n    ldr r0, [sp, #0x84]\n    add r4, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    cmp r0, #4\n    bne _0224A384\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r6, #0x67\n    ldr r3, [sp, #0x88]\n    str r0, [sp, #0xc]\n    lsl r6, r6, #2\n    str r3, [sp, #0x10]\n    ldr r3, [r5, r6]\n    str r3, [sp, #0x14]\n    add r3, r6, #4\n    ldr r3, [r5, r3]\n    add r6, #8\n    str r3, [sp, #0x18]\n    ldr r3, [r5, r6]\n    str r3, [sp, #0x1c]\n    str r0, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    ldr r3, [sp, #0x80]\n    add r0, sp, #0x4c\n    bl CreateSpriteResourcesHeader\n    b _0224A3BE\n    str r0, [sp]\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0\n    ldr r0, [sp, #0x88]\n    str r3, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldr r6, [r5, r0]\n    str r6, [sp, #0x14]\n    add r6, r0, #4\n    ldr r6, [r5, r6]\n    str r6, [sp, #0x18]\n    add r6, r0, #0\n    add r6, #8\n    ldr r6, [r5, r6]\n    add r0, #0xc\n    str r6, [sp, #0x1c]\n    ldr r0, [r5, r0]\n    str r0, [sp, #0x20]\n    str r3, [sp, #0x24]\n    str r3, [sp, #0x28]\n    ldr r3, [sp, #0x80]\n    add r0, sp, #0x4c\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r5, #0x70]\n    add r2, sp, #0x34\n    str r0, [sp, #0x2c]\n    add r0, sp, #0x4c\n    str r0, [sp, #0x30]\n    ldmia r4!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r2]\n    ldr r0, [sp, #0x8c]\n    str r0, [sp, #0x40]\n    mov r0, #1\n    str r0, [sp, #0x44]\n    mov r0, #4\n    str r0, [sp, #0x48]\n    add r0, sp, #0x2c\n    bl Sprite_Create\n    add r4, r0, #0\n    bne _0224A3EA\n    bl GF_AssertFail\n    add r0, r4, #0\n    add sp, #0x70\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_0224A3F0(void) {
    /* Original at 0x0224A3F0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    mov r5, #1\n    add r4, r3, #0\n    str r5, [sp]\n    mov r3, #0\n    str r3, [sp, #4]\n    str r3, [sp, #8]\n    str r2, [sp, #0xc]\n    add r2, r5, #0\n    bl ov02_0224A33C\n    add r1, r4, #0\n    add r5, r0, #0\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r5, #0\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_0224A418(void) {
    /* Original at 0x0224A418 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldrh r2, [r0, #0xe]\n    mov r3, #0\n    cmp r2, #0\n    beq _0224A426\n    mov r3, #1\n    mov r2, #2\n    str r2, [sp]\n    mov r4, #1\n    str r4, [sp, #4]\n    mov r4, #0\n    str r4, [sp, #8]\n    mov r4, #0x83\n    str r4, [sp, #0xc]\n    bl ov02_0224A33C\n    add r4, r0, #0\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #6\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #0\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov02_0224A450(void) {
    /* Original at 0x0224A450 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #1\n    add r4, r0, #0\n    bl Sprite_SetAnimActiveFlag\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl Sprite_SetAnimSpeed\n    pop {r4, pc}"
    );
    #endif
}

void ov02_0224A468(void) {
    /* Original at 0x0224A468 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r4, r0, #0\n    add r0, sp, #0x1c\n    mov r7, #0\n    str r7, [r0]\n    str r7, [r0, #4]\n    add r6, r2, #0\n    ldr r5, _0224A4CC ; =ov02_02253390\n    add r3, r1, #0\n    str r7, [r0, #8]\n    ldmia r5!, {r0, r1}\n    add r2, sp, #0x10\n    stmia r2!, {r0, r1}\n    ldr r0, [r5]\n    add r1, r3, #0\n    str r0, [r2]\n    str r7, [sp]\n    sub r0, r7, #1\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    add r0, r4, #0\n    add r2, r7, #0\n    add r3, r7, #0\n    str r6, [sp, #0xc]\n    bl ov02_0224A33C\n    add r4, r0, #0\n    mov r1, #2\n    bl Sprite_SetAffineOverwriteMode\n    add r0, r4, #0\n    add r1, sp, #0x1c\n    bl Sprite_SetAffineMatrix\n    add r0, r4, #0\n    add r1, sp, #0x10\n    bl Sprite_SetAffineScale\n    add r0, r7, #0\n    bl GF_DegreeToSinCosIdx\n    add r1, r0, #0\n    add r0, r4, #0\n    bl Sprite_SetAffineZRotation\n    add r0, r4, #0\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224A4CC: .word ov02_02253390"
    );
    #endif
}

void ov02_0224A4D0(void) {
    /* Original at 0x0224A4D0 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov02_0224A074\n    add r6, r0, #0\n    mov r0, #0x6b\n    mov r5, #0\n    add r2, r4, #0\n    lsl r0, r0, #2\n    ldr r1, [r2, r0]\n    cmp r1, #0\n    bne _0224A510\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r6, #0\n    mov r2, #0xb\n    bl AddCharResObjFromOpenNarc\n    lsl r1, r5, #2\n    add r2, r4, r1\n    mov r1, #0x6b\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    b _0224A518\n    add r5, r5, #1\n    add r2, r2, #4\n    cmp r5, #4\n    blt _0224A4E4\n    cmp r5, #4\n    blt _0224A520\n    bl GF_AssertFail\n    mov r0, #0x72\n    mov r5, #0\n    add r2, r4, #0\n    lsl r0, r0, #2\n    ldr r1, [r2, r0]\n    cmp r1, #0\n    bne _0224A554\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0x69\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r6, #0\n    mov r2, #0xc\n    bl AddCellOrAnimResObjFromOpenNarc\n    lsl r1, r5, #2\n    add r2, r4, r1\n    mov r1, #0x72\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    b _0224A55C\n    add r5, r5, #1\n    add r2, r2, #4\n    cmp r5, #4\n    blt _0224A528\n    cmp r5, #4\n    blt _0224A564\n    bl GF_AssertFail\n    add r0, r6, #0\n    bl NARC_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov02_0224A570(void) {
    /* Original at 0x0224A570 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r2, #0\n    mov r2, #4\n    bl NARC_AllocAndReadWholeMember\n    add r1, r5, #0\n    add r4, r0, #0\n    bl NNS_G2dGetUnpackedPaletteData\n    ldr r1, [r5]\n    mov r0, #3\n    ldr r1, [r1, #0xc]\n    mov r2, #0x20\n    lsl r3, r0, #7\n    bl BG_LoadPlttData\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_0224A598(void) {
    /* Original at 0x0224A598 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    add r4, r3, #0\n    mov r2, #4\n    bl NARC_AllocAndReadWholeMember\n    add r1, r4, #0\n    add r6, r0, #0\n    bl NNS_G2dGetUnpackedCharacterData\n    ldr r3, [r4]\n    mov r0, #0\n    str r0, [sp]\n    ldr r2, [r3, #0x14]\n    ldr r3, [r3, #0x10]\n    add r0, r5, #0\n    mov r1, #3\n    bl BG_LoadCharTilesData\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov02_0224A5D0(void) {
    /* Original at 0x0224A5D0 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r2, #0\n    add r6, r1, #0\n    mov r2, #0\n    add r4, r3, #0\n    mov r1, #3\n    add r3, r2, #0\n    add r5, r0, #0\n    bl BgSetPosTextAndCommit\n    mov r1, #3\n    add r0, r5, #0\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add r0, r6, #0\n    add r1, r7, #0\n    mov r2, #4\n    bl NARC_AllocAndReadWholeMember\n    add r1, r4, #0\n    add r6, r0, #0\n    bl NNS_G2dGetUnpackedScreenData\n    ldr r3, [r4]\n    add r0, r5, #0\n    add r2, r3, #0\n    ldr r3, [r3, #8]\n    mov r1, #3\n    add r2, #0xc\n    bl BG_LoadScreenTilemapData\n    mov r0, #0x20\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0xc\n    mov r2, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    add r0, r5, #0\n    mov r1, #3\n    bl BgCommitTilemapBufferToVram\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224A63C(void) {
    BgClearTilemapBufferAndCommit();
}

void ov02_0224A648(void) {
    ov02_0224A6A8();
    *((u32*)(r4 + 0x2c)) = 0;
    ov02_0224A674(r4);
    ov02_0224A67C(r4);
    ov02_0224A66C(r4);
    *((u32*)(r4 + 0x2c)) = 1;
}

void ov02_0224A66C(void) {
    ((u32*)r0)[0x30] = 1;
}

void ov02_0224A674(void) {
    ((u32*)r0)[0x30] = 0;
}

void ov02_0224A67C(void) {
    ((u32*)r0)[0x34] = 0x18;
    ((u32*)r0)[0x38] = 0;
    ((u32*)r0)[0x3c] = 0x17;
    ((u32*)r0)[0x40] = 1;
}

void ov02_0224A690(void) {
    ((u32*)r0)[0x3c] = 0x17;
    ((u32*)r0)[0x40] = 1;
}

void ov02_0224A69C(void) {
    /* Original at 0x0224A69C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x44]\n    str r3, [r0, #0x48]\n    ldr r1, [sp]\n    str r2, [r0, #0x4c]\n    str r1, [r0, #0x50]\n    bx lr"
    );
    #endif
}

void ov02_0224A6A8(void) {
    /* Original at 0x0224A6A8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x89\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0224A6BA\n    bl GF_AssertFail\n    ldr r0, _0224A6CC ; =ov02_0224A700\n    add r1, r4, #0\n    mov r2, #0x81\n    bl SysTask_CreateOnVBlankQueue\n    mov r1, #0x89\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r4, pc}\n    _0224A6CC: .word ov02_0224A700"
    );
    #endif
}

void ov02_0224A6D0(void) {
    /* Original at 0x0224A6D0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x89\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0224A6E2\n    bl GF_AssertFail\n    mov r0, #0x89\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl SysTask_Destroy\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _0224A6FC ; =0xFFFF1FFF\n    and r0, r1\n    str r0, [r2]\n    pop {r4, pc}\n    nop\n    _0224A6FC: .word 0xFFFF1FFF"
    );
    #endif
}

void ov02_0224A700(void) {
    /* Original at 0x0224A700 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    ldr r0, [r1, #0x2c]\n    cmp r0, #0\n    beq _0224A796\n    mov r3, #1\n    lsl r3, r3, #0x1a\n    ldr r2, [r3]\n    ldr r0, _0224A79C ; =0xFFFF1FFF\n    and r2, r0\n    ldr r0, [r1, #0x30]\n    lsl r0, r0, #0xd\n    orr r0, r2\n    str r0, [r3]\n    add r3, #0x48\n    ldrh r2, [r3]\n    mov r0, #0x3f\n    bic r2, r0\n    ldr r0, [r1, #0x34]\n    orr r2, r0\n    ldr r0, [r1, #0x38]\n    cmp r0, #0\n    beq _0224A730\n    mov r0, #0x20\n    orr r2, r0\n    ldr r0, _0224A7A0 ; =0x04000048\n    strh r2, [r0]\n    ldrh r2, [r0, #2]\n    mov r0, #0x3f\n    bic r2, r0\n    ldr r0, [r1, #0x3c]\n    orr r2, r0\n    ldr r0, [r1, #0x40]\n    cmp r0, #0\n    beq _0224A748\n    mov r0, #0x20\n    orr r2, r0\n    ldr r5, _0224A7A4 ; =0x0400004A\n    strh r2, [r5]\n    ldr r2, [r1, #0x50]\n    ldr r6, [r1, #0x48]\n    asr r0, r2, #0xb\n    lsr r0, r0, #0x14\n    add r0, r2, r0\n    ldr r2, [r1, #0x4c]\n    asr r4, r0, #0xc\n    asr r0, r2, #0xb\n    lsr r0, r0, #0x14\n    add r0, r2, r0\n    ldr r2, [r1, #0x44]\n    asr r3, r0, #0xc\n    asr r0, r2, #0xb\n    lsr r0, r0, #0x14\n    asr r1, r6, #0xb\n    add r0, r2, r0\n    lsr r1, r1, #0x14\n    asr r0, r0, #0xc\n    add r1, r6, r1\n    lsl r2, r0, #8\n    mov r0, #0xff\n    asr r1, r1, #0xc\n    lsl r0, r0, #8\n    lsl r1, r1, #0x18\n    and r2, r0\n    lsr r1, r1, #0x18\n    orr r2, r1\n    add r1, r5, #0\n    sub r1, #0xa\n    strh r2, [r1]\n    lsl r1, r3, #8\n    and r1, r0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    orr r1, r0\n    sub r0, r5, #6\n    strh r1, [r0]\n    pop {r3, r4, r5, r6}\n    bx lr\n    nop\n    _0224A79C: .word 0xFFFF1FFF\n    _0224A7A0: .word 0x04000048\n    _0224A7A4: .word 0x0400004A"
    );
    #endif
}

void ov02_0224A7A8(void) {
    /* Original at 0x0224A7A8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0224A7B4 ; =GetPokemonSpriteCharAndPlttNarcIds\n    add r2, r0, #0\n    add r0, r1, #0\n    ldr r1, [r2, #0x5c]\n    mov r2, #2\n    bx r3\n    _0224A7B4: .word GetPokemonSpriteCharAndPlttNarcIds"
    );
    #endif
}

void ov02_0224A7B8(void) {
    /* Original at 0x0224A7B8 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    mov r1, #0x32\n    add r6, r0, #0\n    mov r0, #4\n    lsl r1, r1, #6\n    add r7, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _0224A7D4\n    bl GF_AssertFail\n    mov r1, #0\n    add r0, r6, #0\n    add r2, r1, #0\n    bl GetMonData\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldrh r0, [r5, #6]\n    add r2, r7, #0\n    add r3, r4, #0\n    str r0, [sp, #0xc]\n    ldrh r0, [r5]\n    ldrh r1, [r5, #2]\n    bl sub_02014540\n    add r0, r4, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224A800(void) {
    /* Original at 0x0224A800 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    add r2, r1, #0\n    ldrh r0, [r3]\n    ldrh r1, [r3, #4]\n    ldr r3, _0224A80C ; =sub_02014450\n    bx r3\n    _0224A80C: .word sub_02014450"
    );
    #endif
}

void ov02_0224A810(void) {
    AddCharResObjFromOpenNarc(0x67, 1, 3, 4, 9, 0);
}

void ov02_0224A834(void) {
    /* Original at 0x0224A834 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #0x67\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #3\n    bl SpriteResourceCollection_Find\n    bl sub_0200AF00\n    mov r1, #1\n    bl NNS_G2dGetImageLocation\n    mov r1, #0x32\n    add r5, r0, #0\n    add r0, r4, #0\n    lsl r1, r1, #6\n    bl DC_FlushRange\n    mov r2, #0x32\n    add r0, r4, #0\n    add r1, r5, #0\n    lsl r2, r2, #6\n    bl GX_LoadOBJ\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_0224A868(void) {
    /* Original at 0x0224A868 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #0x10\n    mov r2, #3\n    str r2, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    str r2, [sp, #8]\n    mov r2, #4\n    str r2, [sp, #0xc]\n    mov r2, #0x1a\n    lsl r2, r2, #4\n    ldr r0, [r0, r2]\n    mov r2, #6\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    add sp, #0x10\n    pop {r3, pc}"
    );
    #endif
}

void ov02_0224A88C(void) {
    /* Original at 0x0224A88C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x67\n    lsl r0, r0, #2\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl SpriteResourceCollection_Find\n    bl sub_0200AF00\n    add r6, r0, #0\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl SpriteResourceCollection_Find\n    add r1, r6, #0\n    bl SpriteTransfer_GetPaletteProxy\n    mov r1, #1\n    bl NNS_G2dGetImagePaletteLocation\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #0x20\n    bl DC_FlushRange\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0x20\n    bl GX_LoadOBJPltt\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_0224A8D4(void) {
    /* Original at 0x0224A8D4 */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl SpriteResourceCollection_Find\n    add r4, r0, #0\n    bl sub_0200AEB0\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl DestroySingle2DGfxResObj\n    mov r1, #0x6b\n    mov r0, #0\n    add r3, r5, #0\n    lsl r1, r1, #2\n    ldr r2, [r3, r1]\n    cmp r2, r4\n    bne _0224A912\n    lsl r1, r0, #2\n    add r2, r5, r1\n    mov r1, #0x6b\n    mov r3, #0\n    lsl r1, r1, #2\n    str r3, [r2, r1]\n    b _0224A91A\n    add r0, r0, #1\n    add r3, r3, #4\n    cmp r0, #4\n    blt _0224A8FE\n    cmp r0, #4\n    blt _0224A922\n    bl GF_AssertFail\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl SpriteResourceCollection_Find\n    add r4, r0, #0\n    bl sub_0200B0A8\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl DestroySingle2DGfxResObj\n    mov r1, #0x6f\n    mov r0, #0\n    add r3, r5, #0\n    lsl r1, r1, #2\n    ldr r2, [r3, r1]\n    cmp r2, r4\n    bne _0224A95C\n    lsl r1, r0, #2\n    add r2, r5, r1\n    mov r1, #0x6f\n    mov r3, #0\n    lsl r1, r1, #2\n    str r3, [r2, r1]\n    b _0224A964\n    add r0, r0, #1\n    add r3, r3, #4\n    cmp r0, #3\n    blt _0224A948\n    cmp r0, #3\n    blt _0224A96C\n    bl GF_AssertFail\n    mov r0, #0x69\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl SpriteResourceCollection_Find\n    add r4, r0, #0\n    bl sub_0200A740\n    mov r0, #0x69\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl DestroySingle2DGfxResObj\n    mov r1, #0x72\n    mov r0, #0\n    add r3, r5, #0\n    lsl r1, r1, #2\n    ldr r2, [r3, r1]\n    cmp r2, r4\n    bne _0224A9A6\n    lsl r1, r0, #2\n    add r2, r5, r1\n    mov r1, #0x72\n    mov r3, #0\n    lsl r1, r1, #2\n    str r3, [r2, r1]\n    b _0224A9AE\n    add r0, r0, #1\n    add r3, r3, #4\n    cmp r0, #4\n    blt _0224A992\n    cmp r0, #4\n    blt _0224A9B6\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_0224A9B8(void) {
    ov02_0224A33C(3, 0, 0x81);
}

void ov02_0224A9D8(void) {
    /* Original at 0x0224A9D8 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    mov r0, #2\n    ldr r4, _0224AA40 ; =ov02_022535E4\n    add r6, r1, #0\n    str r0, [r5, #0x14]\n    mov r7, #0\n    ldr r0, [r4]\n    add r1, sp, #0x1c\n    str r0, [sp, #0x1c]\n    ldr r0, [r4, #4]\n    add r2, sp, #0x10\n    str r0, [sp, #0x20]\n    mov r0, #0\n    str r0, [sp, #0x24]\n    ldr r0, [r4, #8]\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0xc]\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x10]\n    ldr r3, [sp, #8]\n    str r0, [sp]\n    str r0, [sp, #0xc]\n    str r6, [sp, #4]\n    add r0, r5, #0\n    bl ov02_0224AA44\n    mov r0, #1\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0x14\n    add r0, r1, r0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0xc]\n    ldr r3, [sp, #8]\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, sp, #0x1c\n    add r2, sp, #0x10\n    str r6, [sp, #4]\n    bl ov02_0224AA44\n    add r7, r7, #1\n    add r4, #0x14\n    cmp r7, #0xd\n    blt _0224A9E8\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224AA40: .word ov02_022535E4"
    );
    #endif
}

void ov02_0224AA44(void) {
    /* Original at 0x0224AA44 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    ldr r0, [sp, #0x34]\n    str r3, [sp, #8]\n    str r5, [sp, #0x10]\n    add r4, r1, #0\n    str r0, [sp, #0xc]\n    ldmia r2!, {r0, r1}\n    add r3, sp, #0x14\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    ldr r1, _0224AA7C ; =ov02_02253468\n    str r0, [r3]\n    add r0, sp, #8\n    str r0, [sp]\n    mov r0, #0x85\n    str r0, [sp, #4]\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r3, [sp, #0x30]\n    add r2, r4, #0\n    bl sub_02068B0C\n    add sp, #0x20\n    pop {r3, r4, r5, pc}\n    nop\n    _0224AA7C: .word ov02_02253468"
    );
    #endif
}

void ov02_0224AA80(void) {
    /* Original at 0x0224AA80 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    bl sub_02068D98\n    add r2, r4, #0\n    add r3, r0, #0\n    add r2, #0xc\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r5, #0\n    bl sub_02068D90\n    str r0, [r4, #4]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r0, [r4, #0x14]\n    ldr r2, [r4, #0xc]\n    ldr r3, [r4, #4]\n    add r1, sp, #0\n    bl ov02_0224A3F0\n    mov r1, #0\n    str r0, [r4, #8]\n    bl Sprite_SetDrawFlag\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov02_0224AAC8(void) {
    Sprite_Delete();
}

void ov02_0224AAD4(void) {
    /* Original at 0x0224AAD4 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r1, sp, #0\n    add r5, r0, #0\n    bl sub_02068DB8\n    ldr r1, [sp]\n    ldr r0, [r4, #0x18]\n    add r0, r1, r0\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0xb\n    str r0, [sp]\n    sub r1, r1, r2\n    mov r0, #0xb\n    ror r1, r0\n    add r0, r2, r1\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    ldr r0, [r4, #8]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldr r0, [r4, #0x10]\n    cmp r0, #1\n    bne _0224AB4E\n    ldr r3, [r4, #0x14]\n    ldr r0, [r3, #0x14]\n    cmp r0, #2\n    bne _0224AB42\n    ldr r2, [r3, #0x4c]\n    ldr r0, [r3, #0x50]\n    mov r3, #2\n    ldr r6, [sp, #4]\n    lsl r3, r3, #0xc\n    sub r5, r6, r3\n    mov r1, #0\n    cmp r5, r2\n    blt _0224AB38\n    cmp r5, r0\n    bgt _0224AB38\n    add r3, r6, r3\n    cmp r3, r2\n    blt _0224AB38\n    cmp r3, r0\n    bgt _0224AB38\n    mov r1, #1\n    ldr r0, [r4, #8]\n    bl Sprite_SetDrawFlag\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    cmp r0, #1\n    bne _0224AB4E\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov02_0224AB54(void) {
    /* Original at 0x0224AB54 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov02_0224AB58(void) {
    /* Original at 0x0224AB58 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r2, sp, #0xc\n    mov r3, #0\n    add r4, r0, #0\n    str r3, [r2]\n    str r3, [r2, #4]\n    str r3, [r2, #8]\n    str r4, [sp, #8]\n    add r0, sp, #8\n    str r0, [sp]\n    mov r0, #0x82\n    str r0, [sp, #4]\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    ldr r1, _0224AB88 ; =ov02_0225347C\n    bl sub_02068B0C\n    mov r1, #0x7b\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add sp, #0x18\n    pop {r4, pc}\n    _0224AB88: .word ov02_0225347C"
    );
    #endif
}

void ov02_0224AB8C(void) {
    sub_02068D74();
}

void ov02_0224AB9C(void) {
    /* Original at 0x0224AB9C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_02068D74\n    add r5, r0, #0\n    ldr r0, [r5, #0x60]\n    cmp r0, #0\n    beq _0224ABB6\n    bl sub_02068B48\n    ldr r0, [r5, #0x64]\n    cmp r0, #0\n    beq _0224ABC0\n    bl ov01_021FCD78\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_02068B48\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

u32 ov02_0224ABCC(void) {
    sub_02068D98();
    *((u32*)(r4 + 0x5c)) = r0;
    sub_02068DB8(r5);
    ov02_0224A468(*((u32*)(r4 + 0x5c)), 0, 0);
    *((u32*)(r4 + 0x58)) = r0;
    return 1;
}

void ov02_0224ABF8(void) {
    Sprite_Delete();
}

void ov02_0224AC04(void) {
    /* Original at 0x0224AC04 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldrb r0, [r5]\n    lsl r1, r0, #2\n    ldr r0, _0224AC20 ; =ov02_022533C0\n    ldr r4, [r0, r1]\n    ldrb r1, [r5, #1]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    blx r1\n    cmp r0, #1\n    beq _0224AC10\n    pop {r3, r4, r5, pc}\n    _0224AC20: .word ov02_022533C0"
    );
    #endif
}

void ov02_0224AC24(void) {
    /* Original at 0x0224AC24 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov02_0224AC28(void) {
    Sprite_SetDrawFlag();
}

void ov02_0224AC38(void) {
    /* Original at 0x0224AC38 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    ldr r4, _0224ACD8 ; =ov02_022533E4\n    add r2, r0, #0\n    ldmia r4!, {r0, r1}\n    add r3, sp, #0xc\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    ldr r4, _0224ACDC ; =ov02_022533F0\n    str r0, [r3]\n    ldmia r4!, {r0, r1}\n    add r3, sp, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r3]\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r2, r0]\n    bl sub_02068D74\n    add r4, r0, #0\n    mov r3, #1\n    add r5, r4, #0\n    strb r3, [r4]\n    mov r2, #0\n    strb r2, [r4, #1]\n    strb r2, [r4, #2]\n    add r6, sp, #0xc\n    ldmia r6!, {r0, r1}\n    add r5, #8\n    stmia r5!, {r0, r1}\n    ldr r0, [r6]\n    add r6, sp, #0\n    str r0, [r5]\n    str r2, [r4, #0x14]\n    str r2, [r4, #0x18]\n    mov r0, #0xf\n    add r5, r4, #0\n    str r2, [r4, #0x1c]\n    lsl r0, r0, #0xe\n    str r0, [r4, #0x38]\n    ldmia r6!, {r0, r1}\n    add r5, #0x2c\n    stmia r5!, {r0, r1}\n    ldr r0, [r6]\n    add r1, sp, #0xc\n    str r0, [r5]\n    lsl r0, r3, #9\n    str r0, [r4, #0x50]\n    mov r0, #0x2d\n    lsl r0, r0, #0xe\n    str r0, [r4, #0x40]\n    str r2, [r4, #0x48]\n    lsl r0, r3, #0xd\n    str r0, [r4, #0x4c]\n    ldr r0, [r4, #0x58]\n    bl Sprite_SetMatrix\n    ldr r0, [r4, #0x58]\n    add r1, sp, #0\n    bl Sprite_SetAffineScale\n    ldr r1, [r4, #0x38]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_DegreeToSinCosIdx\n    add r1, r0, #0\n    ldr r0, [r4, #0x58]\n    bl Sprite_SetAffineZRotation\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    _0224ACD8: .word ov02_022533E4\n    _0224ACDC: .word ov02_022533F0"
    );
    #endif
}

void ov02_0224ACE0(void) {
    /* Original at 0x0224ACE0 */
    /* Requires manual decompilation - 124 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r1, [r5, #0x48]\n    ldr r0, [r5, #0x4c]\n    ldr r4, [r5, #0x58]\n    add r0, r1, r0\n    str r0, [r5, #0x48]\n    mov r0, #1\n    ldr r1, [r5, #0x4c]\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    bge _0224AD00\n    lsr r0, r0, #2\n    add r0, r1, r0\n    str r0, [r5, #0x4c]\n    ldr r0, _0224ADE0 ; =0x0000013B\n    bl GF_CosDeg\n    ldr r2, [r5, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r5, #0x14]\n    ldr r1, [r5, #0x40]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    ldr r2, [r5, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r5, #0x18]\n    ldr r1, [r5, #0x40]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r2, r0, #0xc\n    ldr r0, _0224ADE4 ; =0x0000010E\n    cmp r2, r0\n    bge _0224AD4A\n    mov r0, #1\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [r5, #0x40]\n    ldr r1, [r5, #0x2c]\n    ldr r0, [r5, #0x50]\n    add r1, r1, r0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r1, [r5, #0x2c]\n    cmp r1, r0\n    ble _0224AD5C\n    str r0, [r5, #0x2c]\n    ldr r1, [r5, #0x30]\n    ldr r0, [r5, #0x50]\n    add r1, r1, r0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r1, [r5, #0x30]\n    cmp r1, r0\n    ble _0224AD6E\n    str r0, [r5, #0x30]\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x2c\n    bl Sprite_SetAffineScale\n    mov r0, #6\n    ldr r1, [r5, #0x38]\n    lsl r0, r0, #0xc\n    sub r1, r1, r0\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    str r1, [r5, #0x38]\n    asr r0, r0, #0xc\n    bpl _0224AD90\n    mov r0, #0\n    str r0, [r5, #0x38]\n    ldr r1, [r5, #0x38]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_DegreeToSinCosIdx\n    add r1, r0, #0\n    add r0, r4, #0\n    bl Sprite_SetAffineZRotation\n    ldr r1, [r5, #8]\n    ldr r0, [r5, #0x14]\n    add r0, r1, r0\n    str r0, [sp]\n    ldr r1, [r5, #0xc]\n    ldr r0, [r5, #0x18]\n    add r0, r1, r0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldr r1, [sp, #4]\n    ldr r0, _0224ADE8 ; =0xFFFC0000\n    cmp r1, r0\n    bge _0224ADDA\n    add r0, r4, #0\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #2\n    strb r0, [r5, #2]\n    ldrb r0, [r5, #1]\n    add r0, r0, #1\n    strb r0, [r5, #1]\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0224ADE0: .word 0x0000013B\n    _0224ADE4: .word 0x0000010E\n    _0224ADE8: .word 0xFFFC0000"
    );
    #endif
}

u8 ov02_0224ADEC(void) {
    return 0;
}

void ov02_0224ADF0(void) {
    /* Original at 0x0224ADF0 */
    /* Requires manual decompilation - 171 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    ldr r3, _0224AF5C ; =ov02_02253354\n    add r5, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x24\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    ldr r3, _0224AF60 ; =ov02_0225336C\n    str r0, [r2]\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x18\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_02068D74\n    add r4, r0, #0\n    mov r0, #2\n    strb r0, [r4]\n    mov r6, #0\n    mov r0, #0xbb\n    strb r6, [r4, #1]\n    mov r7, #1\n    strb r7, [r4, #2]\n    str r6, [r4, #4]\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    ldr r2, [sp, #0x24]\n    add r0, #8\n    add r1, r2, r1\n    str r1, [sp, #0x24]\n    add r2, r4, #0\n    ldr r1, [sp, #0x28]\n    ldr r0, [r5, r0]\n    add r3, sp, #0x24\n    add r0, r1, r0\n    str r0, [sp, #0x28]\n    ldmia r3!, {r0, r1}\n    add r2, #8\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r3, sp, #0x18\n    str r0, [r2]\n    str r6, [r4, #0x14]\n    str r6, [r4, #0x18]\n    str r6, [r4, #0x1c]\n    ldr r6, _0224AF64 ; =0x0013B000\n    add r2, r4, #0\n    str r6, [r4, #0x38]\n    ldmia r3!, {r0, r1}\n    add r2, #0x2c\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, r7, #0\n    add r0, #0xff\n    str r0, [r4, #0x50]\n    mov r0, #0xe1\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x40]\n    mov r0, #3\n    lsl r0, r0, #0x12\n    str r0, [r4, #0x48]\n    lsl r0, r7, #0x11\n    str r0, [r4, #0x4c]\n    lsr r0, r6, #0xc\n    bl GF_CosDeg\n    ldr r2, [r4, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r4, #0x14]\n    ldr r1, [r4, #0x40]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    ldr r2, [r4, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r4, #0x18]\n    ldr r1, [r4, #8]\n    ldr r0, [r4, #0x14]\n    add r0, r1, r0\n    str r0, [sp, #0x24]\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x18]\n    add r0, r1, r0\n    str r0, [sp, #0x28]\n    ldr r0, [r4, #0x58]\n    add r1, sp, #0x24\n    bl Sprite_SetMatrix\n    ldr r0, [r4, #0x58]\n    add r1, sp, #0x18\n    bl Sprite_SetAffineScale\n    ldr r1, [r4, #0x38]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_DegreeToSinCosIdx\n    add r1, r0, #0\n    ldr r0, [r4, #0x58]\n    bl Sprite_SetAffineZRotation\n    ldr r0, [r4, #0x58]\n    add r1, r7, #0\n    bl Sprite_SetDrawFlag\n    mov r1, #0x1e\n    lsl r1, r1, #4\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl ov02_0224B298\n    str r0, [r4, #0x60]\n    add r0, r7, #0\n    str r0, [r5, #0x1c]\n    ldr r0, [r5, #0x60]\n    mov r1, #4\n    bl ov01_021FCD2C\n    ldr r2, _0224AF68 ; =0xFFF88000\n    add r1, r7, #0\n    mov r3, #0xc\n    str r0, [r4, #0x64]\n    bl ov01_021FCD8C\n    add r1, sp, #0xc\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    ldr r3, _0224AF6C ; =ov02_02253378\n    str r0, [r1, #8]\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    mov r0, #0x79\n    ldr r1, [r4, #0x5c]\n    lsl r0, r0, #2\n    ldr r4, [r1, r0]\n    mov r1, #2\n    add r0, r4, #0\n    bl Sprite_SetAffineOverwriteMode\n    add r0, r4, #0\n    add r1, sp, #0xc\n    bl Sprite_SetAffineMatrix\n    add r0, r4, #0\n    add r1, sp, #0\n    bl Sprite_SetAffineScale\n    mov r0, #0\n    bl GF_DegreeToSinCosIdx\n    add r1, r0, #0\n    add r0, r4, #0\n    bl Sprite_SetAffineZRotation\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224AF5C: .word ov02_02253354\n    _0224AF60: .word ov02_0225336C\n    _0224AF64: .word 0x0013B000\n    _0224AF68: .word 0xFFF88000\n    _0224AF6C: .word ov02_02253378"
    );
    #endif
}

void ov02_0224AF70(void) {
    /* Original at 0x0224AF70 */
    /* Requires manual decompilation - 173 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r1, [r5, #0x48]\n    ldr r0, [r5, #0x4c]\n    ldr r4, [r5, #0x58]\n    sub r0, r1, r0\n    str r0, [r5, #0x48]\n    bpl _0224AF86\n    mov r0, #0\n    str r0, [r5, #0x48]\n    mov r0, #2\n    ldr r1, [r5, #0x4c]\n    lsl r0, r0, #0xa\n    cmp r1, r0\n    ble _0224AF98\n    mov r0, #6\n    lsl r0, r0, #0xa\n    sub r0, r1, r0\n    str r0, [r5, #0x4c]\n    mov r0, #1\n    ldr r1, [r5, #0x4c]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bge _0224AFA4\n    str r0, [r5, #0x4c]\n    ldr r0, _0224B0D8 ; =0x0000013B\n    bl GF_CosDeg\n    ldr r2, [r5, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r5, #0x14]\n    ldr r1, [r5, #0x40]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    ldr r2, [r5, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r5, #0x18]\n    ldr r1, [r5, #0x40]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r2, r0, #0xc\n    ldr r0, _0224B0DC ; =0x0000010E\n    cmp r2, r0\n    bge _0224AFEE\n    mov r0, #1\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [r5, #0x40]\n    ldr r1, [r5, #0x2c]\n    ldr r0, [r5, #0x50]\n    add r1, r1, r0\n    mov r0, #6\n    lsl r0, r0, #0xa\n    str r1, [r5, #0x2c]\n    cmp r1, r0\n    ble _0224B000\n    str r0, [r5, #0x2c]\n    ldr r1, [r5, #0x30]\n    ldr r0, [r5, #0x50]\n    add r1, r1, r0\n    mov r0, #6\n    lsl r0, r0, #0xa\n    str r1, [r5, #0x30]\n    cmp r1, r0\n    ble _0224B012\n    str r0, [r5, #0x30]\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x2c\n    bl Sprite_SetAffineScale\n    mov r0, #2\n    ldr r1, [r5, #0x38]\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    str r1, [r5, #0x38]\n    asr r1, r0, #0xc\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    cmp r1, r0\n    ble _0224B03A\n    lsl r0, r0, #0xc\n    str r0, [r5, #0x38]\n    ldr r1, [r5, #0x38]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_DegreeToSinCosIdx\n    add r1, r0, #0\n    add r0, r4, #0\n    bl Sprite_SetAffineZRotation\n    ldr r1, [r5, #8]\n    ldr r0, [r5, #0x14]\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    ldr r1, [r5, #0xc]\n    ldr r0, [r5, #0x18]\n    add r0, r1, r0\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    add r1, sp, #0xc\n    bl Sprite_SetMatrix\n    ldr r0, [r5, #0x48]\n    cmp r0, #0\n    bne _0224B07C\n    mov r0, #0\n    str r0, [r5, #4]\n    ldrb r0, [r5, #1]\n    add r0, r0, #1\n    strb r0, [r5, #1]\n    b _0224B082\n    ldr r0, [r5, #4]\n    add r0, r0, #1\n    str r0, [r5, #4]\n    ldr r0, [r5, #4]\n    cmp r0, #0xc\n    bne _0224B08E\n    ldr r0, [r5, #0x60]\n    bl ov02_0224B2CC\n    mov r0, #0x79\n    ldr r1, [r5, #0x5c]\n    lsl r0, r0, #2\n    ldr r4, [r1, r0]\n    add r0, r4, #0\n    bl Sprite_GetScalePtr\n    add r3, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r1, [sp]\n    mov r0, #5\n    add r1, #0x80\n    lsl r0, r0, #0xa\n    str r1, [sp]\n    cmp r1, r0\n    ble _0224B0B8\n    str r0, [sp]\n    ldr r1, [sp, #4]\n    mov r0, #5\n    add r1, #0x80\n    lsl r0, r0, #0xa\n    str r1, [sp, #4]\n    cmp r1, r0\n    ble _0224B0C8\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl Sprite_SetAffineScale\n    mov r0, #0\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    nop\n    _0224B0D8: .word 0x0000013B\n    _0224B0DC: .word 0x0000010E"
    );
    #endif
}

void ov02_0224B0E0(void) {
    /* Original at 0x0224B0E0 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #0x79\n    ldr r1, [r4, #0x5c]\n    lsl r0, r0, #2\n    ldr r5, [r1, r0]\n    mov r1, #3\n    add r0, r5, #0\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r5, #0\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x5c]\n    mov r1, #1\n    bl ov02_0224B6B0\n    mov r0, #0x82\n    ldr r1, [r4, #0x5c]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl sub_0205F484\n    add r0, r5, #0\n    bl Sprite_GetMatrixPtr\n    ldr r5, [r0, #4]\n    ldr r0, [r4, #0x58]\n    bl Sprite_GetMatrixPtr\n    ldr r0, [r0, #4]\n    sub r0, r5, r0\n    str r0, [r4, #0x54]\n    ldr r0, [r4, #0x60]\n    bl ov02_0224B2C0\n    ldr r0, [r4, #0x64]\n    mov r1, #2\n    mov r2, #0\n    mov r3, #0xc\n    bl ov01_021FCD8C\n    mov r1, #1\n    lsl r1, r1, #8\n    str r1, [r4, #0x50]\n    lsl r0, r1, #0xb\n    str r0, [r4, #0x40]\n    mov r0, #0\n    str r0, [r4, #0x48]\n    lsl r0, r1, #3\n    str r0, [r4, #0x4c]\n    mov r0, #3\n    strb r0, [r4, #2]\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_0224B158(void) {
    /* Original at 0x0224B158 */
    /* Requires manual decompilation - 150 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r4, r0, #0\n    ldr r1, [r4, #0x48]\n    ldr r0, [r4, #0x4c]\n    ldr r6, [r4, #0x58]\n    add r0, r1, r0\n    str r0, [r4, #0x48]\n    mov r0, #1\n    ldr r1, [r4, #0x4c]\n    lsl r0, r0, #0xc\n    add r2, r1, r0\n    lsl r1, r0, #4\n    str r2, [r4, #0x4c]\n    cmp r2, r1\n    ble _0224B17C\n    lsl r0, r0, #4\n    str r0, [r4, #0x4c]\n    ldr r1, [r4, #0x40]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    lsl r0, r0, #4\n    lsr r0, r0, #0x10\n    bl GF_CosDeg\n    ldr r2, [r4, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r4, #0x14]\n    mov r0, #0x80\n    bl GF_SinDeg\n    ldr r2, [r4, #0x48]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    mul r0, r1\n    str r0, [r4, #0x18]\n    mov r0, #0x87\n    ldr r1, [r4, #0x40]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bge _0224B1C0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [r4, #0x40]\n    ldr r1, [r4, #0x2c]\n    ldr r0, [r4, #0x50]\n    add r1, r1, r0\n    mov r0, #2\n    lsl r0, r0, #0xc\n    str r1, [r4, #0x2c]\n    cmp r1, r0\n    ble _0224B1D2\n    str r0, [r4, #0x2c]\n    ldr r1, [r4, #0x30]\n    ldr r0, [r4, #0x50]\n    add r1, r1, r0\n    mov r0, #2\n    lsl r0, r0, #0xc\n    str r1, [r4, #0x30]\n    cmp r1, r0\n    ble _0224B1E4\n    str r0, [r4, #0x30]\n    ldr r1, [r4, #8]\n    ldr r0, [r4, #0x14]\n    add r0, r1, r0\n    str r0, [sp, #0x18]\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x18]\n    add r1, r1, r0\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r0, r0, #0xc\n    str r1, [sp, #0x1c]\n    cmp r0, #0xe6\n    blt _0224B20A\n    mov r0, #2\n    strb r0, [r4, #2]\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    mov r0, #0x79\n    ldr r1, [r4, #0x5c]\n    lsl r0, r0, #2\n    ldr r7, [r1, r0]\n    add r0, r7, #0\n    bl Sprite_GetScalePtr\n    add r2, sp, #0xc\n    add r3, sp, #0x18\n    add r5, r0, #0\n    ldmia r3!, {r0, r1}\n    mov ip, r2\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldmia r5!, {r0, r1}\n    add r2, sp, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r2]\n    mov r0, #1\n    ldr r1, [r4, #0x54]\n    lsl r0, r0, #0xc\n    sub r1, r1, r0\n    str r1, [r4, #0x54]\n    ldr r0, [sp, #0x10]\n    add r0, r0, r1\n    str r0, [sp, #0x10]\n    add r0, r7, #0\n    mov r1, ip\n    bl Sprite_SetMatrix\n    mov r0, #1\n    ldr r1, [sp]\n    lsl r0, r0, #8\n    add r2, r1, r0\n    lsl r1, r0, #5\n    str r2, [sp]\n    cmp r2, r1\n    ble _0224B25E\n    lsl r0, r0, #5\n    str r0, [sp]\n    mov r0, #1\n    ldr r1, [sp, #4]\n    lsl r0, r0, #8\n    add r2, r1, r0\n    lsl r1, r0, #5\n    str r2, [sp, #4]\n    cmp r2, r1\n    ble _0224B272\n    lsl r0, r0, #5\n    str r0, [sp, #4]\n    add r0, r7, #0\n    add r1, sp, #0\n    bl Sprite_SetAffineScale\n    add r4, #0x2c\n    add r0, r6, #0\n    add r1, r4, #0\n    bl Sprite_SetAffineScale\n    add r0, r6, #0\n    add r1, sp, #0x18\n    bl Sprite_SetMatrix\n    mov r0, #0\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

u8 ov02_0224B294(void) {
    return 0;
}

void ov02_0224B298(void) {
    /* Original at 0x0224B298 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x1c\n    add r2, sp, #0x10\n    mov r3, #0\n    str r3, [r2]\n    str r3, [r2, #4]\n    str r1, [sp, #0xc]\n    str r3, [r2, #8]\n    add r1, sp, #8\n    str r1, [sp]\n    mov r1, #0x81\n    str r1, [sp, #4]\n    ldr r1, _0224B2BC ; =ov02_022534A4\n    bl sub_02068B0C\n    add sp, #0x1c\n    pop {pc}\n    nop\n    _0224B2BC: .word ov02_022534A4"
    );
    #endif
}

void ov02_0224B2C0(void) {
    sub_02068D74();
}

void ov02_0224B2CC(void) {
    /* Original at 0x0224B2CC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    bl sub_02068D74\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    str r0, [r4, #0xc]\n    str r0, [r4, #8]\n    str r0, [r4, #0x10]\n    str r0, [r4, #0x14]\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #0x20]\n    bl Sprite_GetMatrixPtr\n    add r6, r0, #0\n    add r3, sp, #0\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    add r1, r2, #0\n    str r0, [r3]\n    add r0, r5, #0\n    bl sub_02068DA8\n    ldr r0, [r4, #0x20]\n    mov r1, #5\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov02_0224B314(void) {
    /* Original at 0x0224B314 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    bl sub_02068D74\n    add r4, r0, #0\n    mov r0, #2\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    str r0, [r4, #0xc]\n    str r0, [r4, #8]\n    str r0, [r4, #0x10]\n    str r0, [r4, #0x14]\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #0x20]\n    add r1, sp, #0\n    bl ov02_02248C98\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    ldr r0, [r4, #0x20]\n    mov r1, #4\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov02_0224B350(void) {
    sub_02068D98(1);
}

void ov02_0224B364(void) {
    /* Original at 0x0224B364 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldr r1, [r4, #4]\n    cmp r1, #0\n    bne _0224B3A8\n    ldr r1, [r4, #0xc]\n    lsl r2, r1, #2\n    ldr r1, _0224B3AC ; =ov02_02253520\n    ldr r1, [r1, r2]\n    str r1, [r4, #0x14]\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r1, [sp, #4]\n    ldr r0, [r4, #0x14]\n    add r0, r1, r0\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x20]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    cmp r0, #0xc\n    blt _0224B3A8\n    mov r0, #0\n    str r0, [r4, #0xc]\n    mov r0, #1\n    str r0, [r4, #8]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0224B3AC: .word ov02_02253520"
    );
    #endif
}

void ov02_0224B3B0(void) {
    /* Original at 0x0224B3B0 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldr r1, [r4, #4]\n    cmp r1, #0\n    bne _0224B3F4\n    ldr r1, [r4, #0xc]\n    lsl r2, r1, #2\n    ldr r1, _0224B3F8 ; =ov02_02253430\n    ldr r1, [r1, r2]\n    str r1, [r4, #0x14]\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r1, [sp, #4]\n    ldr r0, [r4, #0x14]\n    add r0, r1, r0\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x20]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    cmp r0, #4\n    blt _0224B3F4\n    mov r0, #0\n    str r0, [r4, #0xc]\n    mov r0, #1\n    str r0, [r4, #8]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0224B3F8: .word ov02_02253430"
    );
    #endif
}

void ov02_0224B3FC(void) {
    /* Original at 0x0224B3FC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, [r1]\n    cmp r2, #1\n    beq _0224B40A\n    cmp r2, #2\n    beq _0224B410\n    pop {r3, pc}\n    bl ov02_0224B364\n    pop {r3, pc}\n    bl ov02_0224B3B0\n    pop {r3, pc}"
    );
    #endif
}

void ov02_0224B418(void) {
    /* Original at 0x0224B418 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #0x5f\n    add r5, r0, #0\n    mov r0, #4\n    lsl r1, r1, #2\n    bl ov02_0224B690\n    add r1, r0, #0\n    str r4, [r1, #0xc]\n    ldr r0, _0224B438 ; =ov02_0224B45C\n    mov r2, #0x86\n    str r5, [r1, #0x14]\n    bl SysTask_CreateOnMainQueue\n    pop {r3, r4, r5, pc}\n    _0224B438: .word ov02_0224B45C"
    );
    #endif
}

void ov02_0224B43C(void) {
    SysTask_GetData();
}

void ov02_0224B448(void) {
    SysTask_GetData();
    Heap_Free();
    SysTask_Destroy(r4);
}

void ov02_0224B45C(void) {
    /* Original at 0x0224B45C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r4, _0224B490 ; =ov02_022534B8\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    blx r1\n    cmp r0, #1\n    beq _0224B462\n    ldr r0, [r5, #0x10]\n    cmp r0, #0\n    beq _0224B48E\n    mov r0, #0x17\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0224B484\n    bl sub_02068BAC\n    ldr r0, [r5, #0x20]\n    cmp r0, #0\n    beq _0224B48E\n    bl SpriteList_RenderAndAnimateSprites\n    pop {r3, r4, r5, pc}\n    _0224B490: .word ov02_022534B8"
    );
    #endif
}

void ov02_0224B494(void) {
    ov02_02249444(0, 1);
}

void ov02_0224B4AC(void) {
    /* Original at 0x0224B4AC */
    /* Requires manual decompilation - 137 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    mov r0, #4\n    mov r1, #0x20\n    bl sub_020689C8\n    mov r1, #0x17\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r2, #2\n    str r2, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    add r0, #0x18\n    mov r1, #0x20\n    add r3, r2, #0\n    str r2, [sp, #0x14]\n    bl ov02_02248728\n    bl ov02_022493F0\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x18\n    add r1, r4, #0\n    mov r2, #0xb\n    mov r3, #0\n    bl ov02_02248980\n    add r0, r5, #0\n    add r0, #0x18\n    add r1, r4, #0\n    mov r2, #6\n    mov r3, #0\n    bl ov02_02248A58\n    add r0, r5, #0\n    add r0, #0x18\n    add r1, r4, #0\n    mov r2, #0xc\n    mov r3, #0\n    bl ov02_02248B30\n    add r0, r5, #0\n    add r0, #0x18\n    mov r1, #0\n    bl ov02_022489F0\n    add r0, r5, #0\n    add r0, #0x18\n    mov r1, #0\n    bl ov02_02248AC8\n    add r0, r5, #0\n    add r0, #0x18\n    mov r1, #0\n    bl ov02_02248A24\n    add r0, r5, #0\n    add r0, #0x18\n    mov r1, #0\n    bl ov02_02248AFC\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    bne _0224B57C\n    add r0, r5, #0\n    add r0, #0x18\n    add r1, r4, #0\n    mov r2, #0x11\n    mov r3, #2\n    bl ov02_02248980\n    add r0, r5, #0\n    add r0, #0x18\n    add r1, r4, #0\n    mov r2, #0x12\n    mov r3, #2\n    bl ov02_02248B30\n    add r0, r5, #0\n    add r0, #0x18\n    add r1, r4, #0\n    mov r2, #0x13\n    mov r3, #1\n    bl ov02_02248BA0\n    add r0, r5, #0\n    add r0, #0x18\n    mov r1, #2\n    bl ov02_022489F0\n    add r0, r5, #0\n    add r0, #0x18\n    mov r1, #2\n    bl ov02_02248A24\n    b _0224B5DC\n    add r0, r5, #0\n    add r0, #0x18\n    add r1, r4, #0\n    mov r2, #0x14\n    mov r3, #2\n    bl ov02_02248980\n    add r0, r5, #0\n    add r0, #0x18\n    add r1, r4, #0\n    mov r2, #7\n    mov r3, #1\n    bl ov02_02248A58\n    add r0, r5, #0\n    add r0, #0x18\n    add r1, r4, #0\n    mov r2, #0x15\n    mov r3, #2\n    bl ov02_02248B30\n    add r0, r5, #0\n    add r0, #0x18\n    add r1, r4, #0\n    mov r2, #0x16\n    mov r3, #1\n    bl ov02_02248BA0\n    add r0, r5, #0\n    add r0, #0x18\n    mov r1, #2\n    bl ov02_022489F0\n    add r0, r5, #0\n    add r0, #0x18\n    mov r1, #1\n    bl ov02_02248AC8\n    add r0, r5, #0\n    add r0, #0x18\n    mov r1, #2\n    bl ov02_02248A24\n    add r0, r5, #0\n    add r0, #0x18\n    mov r1, #1\n    bl ov02_02248AFC\n    add r0, r4, #0\n    bl NARC_Delete\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    mov r0, #0\n    add sp, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_0224B5F0(void) {
    /* Original at 0x0224B5F0 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    add r0, #0x18\n    bl ov02_02248D18\n    mov r1, #0x5b\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r3, #0x17\n    lsl r3, r3, #4\n    ldr r1, [r4, r3]\n    sub r3, r3, #4\n    add r2, r4, #0\n    ldr r0, [r4, #0x14]\n    ldr r3, [r4, r3]\n    add r2, #0x18\n    bl ov02_02248D58\n    mov r1, #0x5d\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    bl ov02_02248E20\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #1\n    str r0, [r4, #0x10]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov02_0224B638(void) {
    /* Original at 0x0224B638 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov02_02248D8C\n    cmp r0, #2\n    beq _0224B64E\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov02_02248DBC\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov02_0224B664(void) {
    /* Original at 0x0224B664 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x17\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl sub_020689F8\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov02_0224886C\n    mov r0, #0\n    str r0, [r4, #0x10]\n    mov r1, #1\n    str r1, [r4, #4]\n    ldr r1, [r4]\n    add r1, r1, #1\n    str r1, [r4]\n    pop {r4, pc}"
    );
    #endif
}

u8 ov02_0224B68C(void) {
    return 0;
}

void ov02_0224B690(void) {
    /* Original at 0x0224B690 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    bne _0224B6A0\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0\n    add r2, r5, #0\n    bl memset\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_0224B6B0(void) {
    /* Original at 0x0224B6B0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    bl MapObject_UnpauseMovement\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl MapObject_SetVisible\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_0224B6D0(void) {
    sub_02068D98(1);
}

void ov02_0224B6E4(void) {
    /* Original at 0x0224B6E4 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r0, [r4]\n    bl Sprite_GetMatrixPtr\n    ldr r1, [r4, #4]\n    ldr r0, [r0, #4]\n    ldr r5, [r1, #0x4c]\n    ldr r3, [r1, #0x50]\n    ldr r1, [r1, #0x1c]\n    cmp r1, #0\n    bne _0224B720\n    mov r1, #2\n    lsl r1, r1, #0xe\n    sub r2, r0, r1\n    cmp r2, r5\n    blt _0224B716\n    add r0, r0, r1\n    cmp r0, r3\n    bgt _0224B716\n    ldr r0, [r4]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_0224B72C(void) {
    /* Original at 0x0224B72C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    add r2, sp, #0x10\n    mov r3, #0\n    str r3, [r2]\n    add r4, r0, #0\n    str r3, [r2, #4]\n    mov r0, #0x79\n    str r3, [r2, #8]\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp, #8]\n    str r4, [sp, #0xc]\n    add r1, sp, #8\n    str r1, [sp]\n    mov r1, #0x87\n    str r1, [sp, #4]\n    ldr r0, [r4, r0]\n    ldr r1, _0224B764 ; =ov02_02253440\n    bl sub_02068B0C\n    mov r1, #0x7d\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add sp, #0x1c\n    pop {r3, r4, pc}\n    nop\n    _0224B764: .word ov02_02253440"
    );
    #endif
}

void ov02_0224B768(void) {
    sub_02068B48(0x7d, 0x7d, 0);
}

void ov02_0224B784(void) {
    /* Original at 0x0224B784 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r2, sp, #0xc\n    mov r1, #0\n    str r1, [r2]\n    add r4, r0, #0\n    str r1, [r2, #4]\n    str r1, [r2, #8]\n    str r4, [sp, #8]\n    bl ov02_0224B88C\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0xc\n    bl MapObject_CopyPositionVector\n    add r0, sp, #8\n    str r0, [sp]\n    mov r0, #0x83\n    str r0, [sp, #4]\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    ldr r1, _0224B7C8 ; =ov02_02253490\n    add r2, sp, #0xc\n    mov r3, #0\n    bl sub_02068B0C\n    mov r1, #0x1f\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add sp, #0x18\n    pop {r4, pc}\n    _0224B7C8: .word ov02_02253490"
    );
    #endif
}

void ov02_0224B7CC(void) {
    /* Original at 0x0224B7CC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    ldr r1, [r0]\n    mov r6, #0x8a\n    str r1, [r4]\n    ldr r4, [r0]\n    lsl r6, r6, #2\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    add r0, r4, r6\n    add r0, #0x24\n    add r1, sp, #0\n    bl Field3dObject_SetPos\n    add r0, r4, r6\n    add r0, #0x24\n    mov r1, #0\n    bl Field3dObject_SetActiveFlag\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov02_0224B804(void) {
    /* Original at 0x0224B804 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov02_0224B808(void) {
    /* Original at 0x0224B808 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    ldr r0, [r5, #4]\n    mov r6, #0x8a\n    lsl r6, r6, #2\n    ldr r4, [r5]\n    cmp r0, #3\n    bhi _0224B878\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224B824: ; jump table\n    mov r0, #1\n    str r0, [r5, #4]\n    pop {r4, r5, r6, pc}\n    add r0, r4, r6\n    add r0, #0x24\n    mov r1, #1\n    bl Field3dObject_SetActiveFlag\n    add r0, r4, r6\n    add r0, #0x9c\n    mov r1, #0\n    bl Field3dModelAnimation_FrameSet\n    add r0, r4, r6\n    add r0, #0xb0\n    mov r1, #0\n    bl Field3dModelAnimation_FrameSet\n    mov r0, #2\n    str r0, [r5, #4]\n    add r0, r4, r6\n    mov r1, #1\n    add r0, #0x9c\n    lsl r1, r1, #0xc\n    bl Field3dModelAnimation_FrameAdvanceAndCheck\n    add r0, r4, r6\n    mov r1, #1\n    add r0, #0xb0\n    lsl r1, r1, #0xc\n    bl Field3dModelAnimation_FrameAdvanceAndCheck\n    cmp r0, #0\n    beq _0224B878\n    mov r0, #1\n    str r0, [r5, #8]\n    mov r0, #3\n    str r0, [r5, #4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_0224B87C(void) {
    /* Original at 0x0224B87C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0x93\n    ldr r1, [r1]\n    lsl r0, r0, #2\n    ldr r3, _0224B888 ; =Field3dObject_Draw\n    add r0, r1, r0\n    bx r3\n    _0224B888: .word Field3dObject_Draw"
    );
    #endif
}

void ov02_0224B88C(void) {
    /* Original at 0x0224B88C */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    mov r1, #0x8a\n    lsl r1, r1, #2\n    add r4, r0, r1\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    mov r0, #0x67\n    mov r1, #0x83\n    mov r2, #4\n    bl AllocAtEndAndReadWholeNarcMemberByIdPair\n    str r0, [r4, #0x10]\n    add r0, r4, #0\n    ldr r1, [r4, #0x10]\n    add r0, #0x14\n    bl ov01_021FBD38\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x24\n    add r1, #0x14\n    bl Field3dObject_InitFromModel\n    mov r0, #4\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x9c\n    add r1, #0x14\n    mov r2, #0x67\n    mov r3, #0xa7\n    str r4, [sp, #4]\n    bl Field3dModelAnimation_LoadFromFilesystem\n    mov r0, #4\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0xb0\n    add r1, #0x14\n    mov r2, #0x67\n    mov r3, #0xa5\n    str r4, [sp, #4]\n    bl Field3dModelAnimation_LoadFromFilesystem\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x24\n    add r1, #0x9c\n    bl Field3dObject_AddAnimation\n    add r0, r4, #0\n    add r4, #0xb0\n    add r0, #0x24\n    add r1, r4, #0\n    bl Field3dObject_AddAnimation\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov02_0224B90C(void) {
    /* Original at 0x0224B90C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x8a\n    lsl r1, r1, #2\n    add r4, r0, r1\n    add r0, r4, #0\n    add r0, #0x14\n    bl ov01_021FBDFC\n    ldr r0, [r4, #0x10]\n    bl ov01_021F1448\n    add r0, r4, #0\n    add r0, #0x9c\n    add r1, r4, #0\n    bl Field3dModelAnimation_Unload\n    add r0, r4, #0\n    add r0, #0xb0\n    add r1, r4, #0\n    bl Field3dModelAnimation_Unload\n    pop {r4, pc}"
    );
    #endif
}

void ov02_0224B938(void) {
    /* Original at 0x0224B938 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl MapObject_SetVisible\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_0205F484\n    add r0, r4, #0\n    bl ov02_0224B784\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov02_0224B964(void) {
    /* Original at 0x0224B964 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl sub_02068D74\n    ldr r0, [r0, #8]\n    cmp r0, #1\n    bne _0224B992\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl sub_02068B48\n    add r0, r4, #0\n    bl ov02_0224B90C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov02_BattleExit_HandleRoamerAction(void) {
    /* Original at 0x0224B998 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r1, #8]\n    str r1, [sp]\n    mov r1, #0\n    bl Party_GetMonByIndex\n    add r7, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Save_Roamers_Get\n    add r6, r0, #0\n    add r0, r7, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r4, r0, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov02_0224BAA8\n    str r0, [sp, #8]\n    cmp r0, #0\n    beq _0224BA50\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl SpeciesToRoamerIdx\n    str r0, [sp, #4]\n    add r0, r7, #0\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    add r0, r7, #0\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, [sp]\n    ldr r0, [r0, #0x14]\n    cmp r0, #1\n    bne _0224BA14\n    cmp r4, #0\n    bne _0224BA14\n    add r0, sp, #8\n    bl RoamerMon_Init\n    ldr r0, [r5, #0xc]\n    bl Save_VarsFlags_Get\n    ldr r1, [sp, #4]\n    mov r2, #2\n    bl sub_02066BE8\n    b _0224BA42\n    cmp r0, #4\n    bne _0224BA2E\n    add r0, sp, #8\n    bl RoamerMon_Init\n    ldr r0, [r5, #0xc]\n    bl Save_VarsFlags_Get\n    ldr r1, [sp, #4]\n    mov r2, #1\n    bl sub_02066BE8\n    b _0224BA42\n    ldr r0, [sp, #8]\n    mov r1, #5\n    add r2, r4, #0\n    bl SetRoamerData\n    ldr r0, [sp, #8]\n    mov r1, #7\n    add r2, r7, #0\n    bl SetRoamerData\n    ldr r1, [r5, #0x20]\n    add r0, r6, #0\n    ldr r1, [r1]\n    bl ov02_RepelActiveRoamersFromMapNo\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    bl LCRandom\n    mov r1, #0x64\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #0x1e\n    bhs _0224BA6C\n    ldr r1, [r5, #0x20]\n    add r0, r6, #0\n    ldr r1, [r1]\n    bl ov02_RepelActiveRoamersFromMapNo\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_RepelActiveRoamersFromMapNo(void) {
    /* Original at 0x0224BA70 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl GetRoamerIsActiveByIndex\n    cmp r0, #0\n    beq _0224BA9C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl Roamer_GetLocation\n    bl GetRoamMapByLocationIdx\n    cmp r6, r0\n    bne _0224BA9C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl RoamerLocationUpdateRand\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _0224BA78\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_0224BAA8(void) {
    /* Original at 0x0224BAA8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl GetRoamerIsActiveByIndex\n    cmp r0, #0\n    beq _0224BAD4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl Roamers_GetRoamMonStats\n    mov r1, #4\n    add r7, r0, #0\n    bl GetRoamerData\n    cmp r6, r0\n    bne _0224BAD4\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _0224BAB0\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void PlayerStepEvent_RepelCounterDecrement(void) {
    /* Original at 0x0224BAE4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl Save_Roamers_Get\n    bl RoamerSave_GetRepelAddr\n    ldrb r1, [r0]\n    cmp r1, #0\n    beq _0224BB0E\n    sub r1, r1, #1\n    strb r1, [r0]\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0224BB0E\n    ldr r1, _0224BB14 ; =std_repel_wore_off\n    add r0, r4, #0\n    mov r2, #0\n    bl StartMapSceneScript\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0224BB14: .word std_repel_wore_off"
    );
    #endif
}

void PokecenterAnimCreate(void) {
    /* Original at 0x0224BB18 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x20\n    add r6, r1, #0\n    mov r1, #0x24\n    add r2, sp, #4\n    add r3, sp, #0\n    add r5, r0, #0\n    bl sub_02054C20\n    cmp r0, #0\n    beq _0224BB84\n    mov r0, #4\n    mov r1, #0x18\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    strb r6, [r4, #0xc]\n    mov r0, #0\n    strb r0, [r4, #0xd]\n    strb r0, [r4, #0xe]\n    strb r0, [r4, #0xf]\n    ldr r0, [r5, #0x30]\n    bl MapMatrix_GetWidth\n    add r1, r0, #0\n    ldr r0, [sp]\n    add r2, sp, #0x14\n    bl sub_02054DC8\n    ldr r1, [sp, #4]\n    add r0, sp, #8\n    bl ov01_021F3B0C\n    add r3, sp, #8\n    ldmia r3!, {r0, r1}\n    add r2, r4, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r1, [r4]\n    ldr r0, [sp, #0x14]\n    add r2, r4, #0\n    add r0, r1, r0\n    str r0, [r4]\n    ldr r1, [r4, #8]\n    ldr r0, [sp, #0x1c]\n    add r0, r1, r0\n    str r0, [r4, #8]\n    ldr r0, [r5, #0x10]\n    ldr r1, _0224BB8C ; =PokecenterAnimRun\n    bl TaskManager_Call\n    add sp, #0x20\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    add sp, #0x20\n    pop {r4, r5, r6, pc}\n    _0224BB8C: .word PokecenterAnimRun"
    );
    #endif
}

void PokecenterAnimRun(void) {
    /* Original at 0x0224BB90 */
    /* Requires manual decompilation - 262 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrb r1, [r4, #0xf]\n    cmp r1, #5\n    bls _0224BBAC\n    b _0224BDCC\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0224BBB8: ; jump table\n    ldr r1, [r6, #0x34]\n    mov r0, #0x6b\n    bl ov01_021FB90C\n    add r5, r0, #0\n    ldr r1, [r6, #0x34]\n    mov r0, #0x25\n    bl ov01_021FB90C\n    add r7, r0, #0\n    ldr r0, [r5]\n    bl NNS_G3dGetMdlSet\n    cmp r0, #0\n    beq _0224BC02\n    add r2, r0, #0\n    add r2, #8\n    beq _0224BBF6\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _0224BBF6\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _0224BBF8\n    mov r1, #0\n    cmp r1, #0\n    beq _0224BC02\n    ldr r1, [r1]\n    add r5, r0, r1\n    b _0224BC04\n    mov r5, #0\n    ldr r0, [r7]\n    bl NNS_G3dGetMdlSet\n    cmp r0, #0\n    beq _0224BC2E\n    add r2, r0, #0\n    add r2, #8\n    beq _0224BC22\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _0224BC22\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _0224BC24\n    mov r1, #0\n    cmp r1, #0\n    beq _0224BC2E\n    ldr r1, [r1]\n    add r7, r0, r1\n    b _0224BC30\n    mov r7, #0\n    ldr r0, [r6, #0x34]\n    bl ov01_021FB9E0\n    mov r1, #0\n    str r1, [sp]\n    str r5, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r1, [sp, #0x14]\n    ldr r0, [r6, #0x54]\n    ldr r1, [r6, #0x58]\n    mov r2, #0x10\n    mov r3, #0x6b\n    bl ov01_021E8DE8\n    add r0, r6, #0\n    mov r1, #0x25\n    add r2, sp, #0x18\n    mov r3, #0\n    bl sub_02054C20\n    cmp r0, #0\n    bne _0224BC66\n    bl GF_AssertFail\n    ldr r0, [sp, #0x18]\n    bl ov01_021F3B38\n    add r5, r0, #0\n    ldr r0, [r6, #0x34]\n    bl ov01_021FB9E0\n    str r5, [sp]\n    str r7, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r6, #0x54]\n    ldr r1, [r6, #0x58]\n    mov r2, #0x20\n    mov r3, #0x25\n    bl ov01_021E8DE8\n    ldrb r0, [r4, #0xf]\n    add r0, r0, #1\n    strb r0, [r4, #0xf]\n    b _0224BDCC\n    add r1, sp, #0x1c\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    ldrb r2, [r4, #0xd]\n    mov r1, #0xc\n    ldr r0, [r4]\n    add r3, r2, #0\n    ldr r2, _0224BDD4 ; =ov02_02253D90\n    mul r3, r1\n    ldr r2, [r2, r3]\n    add r0, r0, r2\n    str r0, [sp, #0x28]\n    ldrb r2, [r4, #0xd]\n    ldr r0, [r4, #4]\n    add r3, r2, #0\n    ldr r2, _0224BDD8 ; =ov02_02253D94\n    mul r3, r1\n    ldr r2, [r2, r3]\n    add r0, r0, r2\n    str r0, [sp, #0x2c]\n    ldrb r2, [r4, #0xd]\n    ldr r0, [r4, #8]\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, _0224BDDC ; =ov02_02253D98\n    ldr r1, [r1, r3]\n    add r0, r0, r1\n    str r0, [sp, #0x30]\n    ldr r0, _0224BDE0 ; =SEQ_SE_DP_BOWA\n    bl PlaySE\n    ldr r0, [r6, #0x54]\n    add r6, #0x9c\n    str r0, [sp]\n    ldr r0, [r6]\n    mov r1, #0x6b\n    add r2, sp, #0x28\n    add r3, sp, #0x1c\n    bl ov01_021F3C0C\n    ldrb r1, [r4, #0xd]\n    add r1, r4, r1\n    strb r0, [r1, #0x10]\n    ldrb r0, [r4, #0xf]\n    add r0, r0, #1\n    strb r0, [r4, #0xf]\n    b _0224BDCC\n    ldrb r0, [r4, #0xe]\n    cmp r0, #0xc\n    bhs _0224BD06\n    add r0, r0, #1\n    strb r0, [r4, #0xe]\n    b _0224BDCC\n    mov r0, #0\n    strb r0, [r4, #0xe]\n    ldrb r0, [r4, #0xd]\n    add r0, r0, #1\n    strb r0, [r4, #0xd]\n    ldrb r1, [r4, #0xd]\n    ldrb r0, [r4, #0xc]\n    cmp r1, r0\n    bhs _0224BD1E\n    mov r0, #1\n    strb r0, [r4, #0xf]\n    b _0224BDCC\n    add r0, r6, #0\n    add r0, #0x9c\n    ldrb r1, [r4, #0x10]\n    ldr r0, [r0]\n    bl ov01_021F3B60\n    bl ov01_021F3B38\n    add r3, r0, #0\n    ldr r0, [r6, #0x58]\n    mov r1, #0x10\n    mov r2, #0\n    bl ov01_021E8E40\n    ldrb r0, [r4, #0xf]\n    add r0, r0, #1\n    strb r0, [r4, #0xf]\n    b _0224BDCC\n    ldr r0, [r6, #0x58]\n    mov r1, #0x10\n    mov r2, #0\n    bl ov01_021E8E70\n    ldr r0, [r6, #0x58]\n    mov r1, #0x20\n    mov r2, #0\n    bl ov01_021E8E70\n    ldr r0, _0224BDE4 ; =SEQ_ME_ASA\n    bl PlayFanfare\n    ldrb r0, [r4, #0xf]\n    add r0, r0, #1\n    strb r0, [r4, #0xf]\n    b _0224BDCC\n    ldr r0, [r6, #0x58]\n    mov r1, #0x10\n    bl ov01_021E8F10\n    cmp r0, #0\n    beq _0224BDCC\n    ldr r0, [r6, #0x58]\n    mov r1, #0x20\n    bl ov01_021E8F10\n    cmp r0, #0\n    beq _0224BDCC\n    bl IsFanfarePlaying\n    cmp r0, #0\n    bne _0224BDCC\n    ldr r0, [r6, #0x54]\n    ldr r1, [r6, #0x58]\n    mov r2, #0x20\n    bl ov01_021E8ED0\n    ldr r0, [r6, #0x54]\n    ldr r1, [r6, #0x58]\n    mov r2, #0x10\n    bl ov01_021E8ED0\n    ldrb r0, [r4, #0xc]\n    mov r5, #0\n    cmp r0, #0\n    bls _0224BDBA\n    add r0, r4, r5\n    add r1, r6, #0\n    add r1, #0x9c\n    ldrb r0, [r0, #0x10]\n    ldr r1, [r1]\n    bl ov01_021F36DC\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldrb r0, [r4, #0xc]\n    cmp r5, r0\n    blo _0224BDA0\n    ldrb r0, [r4, #0xf]\n    add r0, r0, #1\n    strb r0, [r4, #0xf]\n    b _0224BDCC\n    bl Heap_Free\n    add sp, #0x34\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0224BDD4: .word ov02_02253D90\n    _0224BDD8: .word ov02_02253D94\n    _0224BDDC: .word ov02_02253D98\n    _0224BDE0: .word SEQ_SE_DP_BOWA\n    _0224BDE4: .word SEQ_ME_ASA"
    );
    #endif
}

void ov02_0224BDE8(void) {
    /* Original at 0x0224BDE8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    mov r2, #0\n    add r4, r1, #0\n    mov r1, #0xd0\n    add r3, r2, #0\n    add r5, r0, #0\n    bl sub_02054C20\n    cmp r0, #0\n    beq _0224BE1A\n    mov r0, #4\n    add r1, r0, #0\n    bl Heap_AllocAtEnd\n    add r2, r0, #0\n    strb r6, [r2]\n    strb r4, [r2, #1]\n    mov r0, #0\n    strb r0, [r2, #2]\n    ldr r0, [r5, #0x10]\n    ldr r1, _0224BE20 ; =ov02_0224BE24\n    bl TaskManager_Call\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    _0224BE20: .word ov02_0224BE24"
    );
    #endif
}

void ov02_0224BE24(void) {
    /* Original at 0x0224BE24 */
    /* Requires manual decompilation - 130 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrb r1, [r4, #2]\n    cmp r1, #4\n    bls _0224BE40\n    b _0224BF48\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0224BE4C: ; jump table\n    ldr r1, [r6, #0x34]\n    mov r0, #0xd0\n    bl ov01_021FB90C\n    ldr r0, [r0]\n    bl NNS_G3dGetMdlSet\n    cmp r0, #0\n    beq _0224BE88\n    add r2, r0, #0\n    add r2, #8\n    beq _0224BE7C\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _0224BE7C\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _0224BE7E\n    mov r1, #0\n    cmp r1, #0\n    beq _0224BE88\n    ldr r1, [r1]\n    add r7, r0, r1\n    b _0224BE8A\n    mov r7, #0\n    add r0, r6, #0\n    mov r1, #0xd0\n    add r2, sp, #0x18\n    mov r3, #0\n    bl sub_02054C20\n    cmp r0, #0\n    bne _0224BE9E\n    bl GF_AssertFail\n    ldr r0, [sp, #0x18]\n    bl ov01_021F3B38\n    add r5, r0, #0\n    ldr r0, [r6, #0x34]\n    bl ov01_021FB9E0\n    str r5, [sp]\n    str r7, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldrb r0, [r4]\n    mov r2, #1\n    mov r3, #0xd0\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r6, #0x54]\n    ldr r1, [r6, #0x58]\n    bl ov01_021E8DE8\n    ldrb r0, [r4, #2]\n    add r0, r0, #1\n    strb r0, [r4, #2]\n    b _0224BF48\n    ldrb r0, [r4, #1]\n    mov r1, #1\n    cmp r0, #0\n    beq _0224BEE0\n    cmp r0, #1\n    beq _0224BEE0\n    mov r1, #0\n    cmp r1, #0\n    bne _0224BEE8\n    bl GF_AssertFail\n    ldrb r2, [r4, #1]\n    ldr r0, [r6, #0x58]\n    mov r1, #1\n    bl ov01_021E8E70\n    ldr r0, _0224BF50 ; =SEQ_SE_DP_ELEBETA2\n    bl PlaySE\n    ldrb r0, [r4, #2]\n    add r0, r0, #1\n    strb r0, [r4, #2]\n    b _0224BF48\n    ldr r0, [r6, #0x58]\n    mov r1, #1\n    bl ov01_021E8F10\n    cmp r0, #0\n    beq _0224BF48\n    ldr r0, _0224BF50 ; =SEQ_SE_DP_ELEBETA2\n    mov r1, #0\n    bl StopSE\n    ldr r0, _0224BF54 ; =SEQ_SE_DP_PINPON\n    bl PlaySE\n    ldr r0, [r6, #0x54]\n    ldr r1, [r6, #0x58]\n    mov r2, #1\n    bl ov01_021E8ED0\n    ldrb r0, [r4, #2]\n    add r0, r0, #1\n    strb r0, [r4, #2]\n    b _0224BF48\n    ldr r0, _0224BF54 ; =SEQ_SE_DP_PINPON\n    bl IsSEPlaying\n    cmp r0, #0\n    bne _0224BF48\n    ldrb r0, [r4, #2]\n    add r0, r0, #1\n    strb r0, [r4, #2]\n    b _0224BF48\n    bl Heap_Free\n    add sp, #0x1c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0224BF50: .word SEQ_SE_DP_ELEBETA2\n    _0224BF54: .word SEQ_SE_DP_PINPON"
    );
    #endif
}

void ov02_0224BF58(void) {
    /* Original at 0x0224BF58 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    ldr r2, _0224BFBC ; =ov02_022536E8\n    add r7, r1, #0\n    ldr r3, [r2]\n    ldr r2, [r2, #4]\n    str r3, [sp, #0x18]\n    str r2, [sp, #0x1c]\n    add r2, sp, #0x20\n    str r2, [sp]\n    add r1, sp, #0x18\n    mov r2, #2\n    add r3, sp, #0x24\n    add r5, r0, #0\n    bl sub_02054C90\n    cmp r0, #0\n    beq _0224BFB4\n    ldr r0, [r5, #0x34]\n    bl ov01_021FB9E0\n    add r6, r0, #0\n    ldr r0, [sp, #0x24]\n    bl ov01_021F3B38\n    add r4, r0, #0\n    ldr r0, [sp, #0x24]\n    bl ov01_021F3B3C\n    str r4, [sp]\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0x54]\n    ldr r1, [r5, #0x58]\n    ldr r3, [sp, #0x20]\n    add r2, r7, #0\n    bl ov01_021E8DE8\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224BFBC: .word ov02_022536E8"
    );
    #endif
}

void ov02_0224BFC0(void) {
    ov01_021E8E70();
}

void ov02_0224BFCC(void) {
    ov01_021E8E70();
}

void CreateFieldEscapeRopeTaskEnv(void) {
    /* Original at 0x0224BFD8 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    mov r1, #0x30\n    bl ov02_0224C660\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [r4, #0xc]\n    str r5, [r4, #0x24]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    str r0, [r4, #0x20]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetState\n    sub r0, r0, #1\n    cmp r0, #1\n    bhi _0224C006\n    mov r0, #0\n    str r0, [r4, #8]\n    b _0224C01A\n    add r0, r5, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _0224C016\n    mov r0, #1\n    str r0, [r4, #8]\n    b _0224C01A\n    mov r0, #0\n    str r0, [r4, #8]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void Task_FieldEscapeRope(void) {
    /* Original at 0x0224C020 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r7, r0, #0\n    add r0, r6, #0\n    bl TaskManager_GetEnvironment\n    add r5, r0, #0\n    ldr r3, [r5]\n    add r0, r6, #0\n    lsl r4, r3, #2\n    ldr r3, _0224C058 ; =ov02_02253700\n    add r1, r7, #0\n    ldr r3, [r3, r4]\n    add r2, r5, #0\n    blx r3\n    add r4, r0, #0\n    cmp r4, #2\n    bne _0224C04E\n    add r0, r5, #0\n    bl Heap_Free\n    cmp r4, #1\n    beq _0224C032\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224C058: .word ov02_02253700"
    );
    #endif
}

void ov02_0224C05C(void) {
    /* Original at 0x0224C05C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #4\n    add r4, r2, #0\n    bl ov01_021FCD2C\n    ldr r2, _0224C0A4 ; =0xFFF6A000\n    str r0, [r4, #0x1c]\n    mov r1, #1\n    mov r3, #0xf\n    bl ov01_021FCD8C\n    ldr r0, [r4, #0x20]\n    ldr r1, _0224C0A8 ; =ov02_02253820\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C092\n    add r5, #0xe4\n    ldr r0, [r5]\n    ldr r1, _0224C0A8 ; =ov02_02253820\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x14]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    ldr r0, _0224C0AC ; =SEQ_SE_DP_KAIDAN2\n    bl PlaySE\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0224C0A4: .word 0xFFF6A000\n    _0224C0A8: .word ov02_02253820\n    _0224C0AC: .word SEQ_SE_DP_KAIDAN2"
    );
    #endif
}

void ov02_0224C0B0(void) {
    /* Original at 0x0224C0B0 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r2, #0\n    ldr r0, [r4, #0x10]\n    add r5, r1, #0\n    bl EventObjectMovementMan_IsFinish\n    cmp r0, #0\n    bne _0224C0C8\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, pc}\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #0x20]\n    ldr r1, _0224C144 ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C0F0\n    ldr r0, [r4, #0x14]\n    bl EventObjectMovementMan_Delete\n    add r5, #0xe4\n    ldr r0, [r5]\n    ldr r1, _0224C144 ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x14]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    cmp r0, #8\n    bge _0224C100\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, pc}\n    ldr r0, [r4, #0xc]\n    cmp r0, #2\n    bne _0224C120\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    b _0224C138\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0\n    ldr r3, _0224C148 ; =0x00007FFF\n    add r1, r0, #0\n    add r2, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0224C144: .word ov02_02253794\n    _0224C148: .word 0x00007FFF"
    );
    #endif
}

void ov02_0224C14C(void) {
    /* Original at 0x0224C14C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    ldr r0, [r4, #0x10]\n    add r5, r1, #0\n    bl EventObjectMovementMan_IsFinish\n    cmp r0, #1\n    bne _0224C184\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #0x20]\n    ldr r1, _0224C1B4 ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C184\n    ldr r0, [r4, #0x14]\n    bl EventObjectMovementMan_Delete\n    add r5, #0xe4\n    ldr r0, [r5]\n    ldr r1, _0224C1B4 ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x14]\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _0224C190\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C1A2\n    ldr r0, [r4, #0x14]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #0x1c]\n    bl ov01_021FCD78\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _0224C1B4: .word ov02_02253794"
    );
    #endif
}

u32 ov02_0224C1B8(void) {
    Save_LocalFieldData_Get(*((u32*)(r1 + 0xc)));
    LocalFieldData_GetSpecialSpawnWarpPtr();
    sub_02053B04(r5, r0, *((u32*)(r4 + 0xc)));
    return 2;
}

void ov02_0224C1D8(void) {
    ov02_0224C660(r1, 0x30);
    *((u32*)(r0 + 0xc)) = r6;
    *((u32*)(r0 + 0x24)) = r5;
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    *((u32*)(r4 + 0x20)) = r0;
}

void ov02_0224C1F8(void) {
    /* Original at 0x0224C1F8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r5, #0\n    bl TaskManager_GetEnvironment\n    ldr r7, _0224C230 ; =ov02_022536F0\n    add r4, r0, #0\n    ldr r3, [r4]\n    add r0, r5, #0\n    lsl r3, r3, #2\n    ldr r3, [r7, r3]\n    add r1, r6, #0\n    add r2, r4, #0\n    blx r3\n    cmp r0, #2\n    bne _0224C228\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #1\n    beq _0224C20C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224C230: .word ov02_022536F0"
    );
    #endif
}

void ov02_0224C234(void) {
    /* Original at 0x0224C234 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r2, #0\n    ldr r0, [r4, #0xc]\n    add r5, r1, #0\n    cmp r0, #2\n    bne _0224C25A\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    b _0224C270\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r3, _0224C29C ; =0x00007FFF\n    mov r0, #0\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    add r0, r5, #0\n    mov r1, #4\n    bl ov01_021FCD2C\n    mov r1, #1\n    ldr r2, _0224C2A0 ; =0xFFF6A000\n    str r0, [r4, #0x1c]\n    add r3, r1, #0\n    bl ov01_021FCD8C\n    ldr r0, [r4, #0x20]\n    ldr r1, _0224C2A4 ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x10]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _0224C29C: .word 0x00007FFF\n    _0224C2A0: .word 0xFFF6A000\n    _0224C2A4: .word ov02_02253794"
    );
    #endif
}

void ov02_0224C2A8(void) {
    /* Original at 0x0224C2A8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_IsFinish\n    cmp r0, #1\n    bne _0224C2C6\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #0x20]\n    ldr r1, _0224C2E8 ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x10]\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _0224C2D2\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x1c]\n    mov r1, #2\n    mov r2, #0\n    mov r3, #0x3c\n    bl ov01_021FCD8C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    _0224C2E8: .word ov02_02253794"
    );
    #endif
}

void ov02_0224C2EC(void) {
    /* Original at 0x0224C2EC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_IsFinish\n    cmp r0, #0\n    bne _0224C2FE\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    cmp r0, #4\n    ldr r0, [r4, #0x20]\n    bge _0224C31C\n    ldr r1, _0224C330 ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x10]\n    mov r0, #0\n    pop {r4, pc}\n    ldr r1, _0224C334 ; =ov02_02253884\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x10]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0224C330: .word ov02_02253794\n    _0224C334: .word ov02_02253884"
    );
    #endif
}

void ov02_0224C338(void) {
    /* Original at 0x0224C338 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_IsFinish\n    cmp r0, #0\n    bne _0224C34A\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x1c]\n    bl ov01_021FCD6C\n    cmp r0, #0\n    bne _0224C358\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x1c]\n    bl ov01_021FCD78\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_Delete\n    mov r0, #2\n    pop {r4, pc}"
    );
    #endif
}

void FieldMoveTask_CreateDigEnvironment(void) {
    /* Original at 0x0224C368 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r0, r3, #0\n    mov r1, #0x30\n    add r7, r2, #0\n    bl ov02_0224C660\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [r4, #0xc]\n    str r5, [r4, #0x24]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    str r0, [r4, #0x20]\n    add r0, r5, #0\n    str r6, [r4, #0x28]\n    bl ov01_02206268\n    cmp r0, #0\n    beq _0224C3A4\n    add r0, r5, #0\n    bl ov01_022062CC\n    cmp r7, r0\n    bne _0224C3A4\n    mov r0, #1\n    str r0, [r4, #8]\n    b _0224C3A8\n    mov r0, #0\n    str r0, [r4, #8]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void Task_FieldDig(void) {
    /* Original at 0x0224C3AC */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r7, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    add r0, r7, #0\n    bl TaskManager_GetStatePtr\n    add r5, r0, #0\n    ldr r0, [r5]\n    cmp r0, #3\n    bhi _0224C4A2\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0224C3D8: ; jump table\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C3F0\n    ldr r1, _0224C4A8 ; =ov01_02205A60\n    add r0, r7, #0\n    mov r2, #0\n    bl TaskManager_Call\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224C4A2\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C42A\n    add r0, r6, #0\n    mov r1, #4\n    bl ov02_02250780\n    cmp r0, #0\n    beq _0224C41E\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #1\n    mov r4, #2\n    bl FieldSystem_UnkSub108_AddMonMood\n    b _0224C420\n    mov r4, #1\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov02_022507B4\n    b _0224C4A2\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C456\n    ldr r0, [r4, #0x28]\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp]\n    ldr r0, [r4, #0x28]\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    ldr r0, [sp]\n    lsl r1, r1, #0x18\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x18\n    bl PlayCry\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C482\n    bl IsCryFinished\n    cmp r0, #0\n    beq _0224C46E\n    mov r5, #0\n    b _0224C494\n    ldr r3, [r4]\n    add r0, r7, #0\n    lsl r5, r3, #2\n    ldr r3, _0224C4AC ; =ov02_02253710\n    add r1, r6, #0\n    ldr r3, [r3, r5]\n    add r2, r4, #0\n    blx r3\n    add r5, r0, #0\n    b _0224C494\n    ldr r3, [r4]\n    add r0, r7, #0\n    lsl r5, r3, #2\n    ldr r3, _0224C4B0 ; =ov02_02253754\n    add r1, r6, #0\n    ldr r3, [r3, r5]\n    add r2, r4, #0\n    blx r3\n    add r5, r0, #0\n    cmp r5, #2\n    bne _0224C49E\n    add r0, r4, #0\n    bl Heap_Free\n    cmp r5, #1\n    beq _0224C45C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224C4A8: .word ov01_02205A60\n    _0224C4AC: .word ov02_02253710\n    _0224C4B0: .word ov02_02253754"
    );
    #endif
}

u32 ov02_0224C4B4(void) {
    PlayerAvatar_GetGender(*((u32*)(r1 + 0x40)));
    ov02_02249458(r5, 0, *((u32*)(r4 + 0x28)), r0);
    *((u32*)(r4 + 0x18)) = r0;
    return 0;
}

void ov02_0224C4D8(void) {
    /* Original at 0x0224C4D8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    ldr r0, [r4, #0x18]\n    bl ov02_0224953C\n    cmp r0, #0\n    bne _0224C4EA\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x18]\n    bl ov02_02249548\n    ldr r0, [r4, #0x24]\n    bl ov01_02205D68\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void FieldMoveTask_CreateTeleportEnvironment(void) {
    /* Original at 0x0224C500 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r0, r3, #0\n    mov r1, #0x30\n    add r7, r2, #0\n    bl ov02_0224C660\n    add r4, r0, #0\n    mov r0, #2\n    str r0, [r4, #0xc]\n    str r5, [r4, #0x24]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    str r0, [r4, #0x20]\n    str r6, [r4, #0x28]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetState\n    sub r0, r0, #1\n    cmp r0, #1\n    bhi _0224C534\n    mov r0, #0\n    str r0, [r4, #8]\n    b _0224C552\n    add r0, r5, #0\n    bl ov01_02206268\n    cmp r0, #0\n    beq _0224C54E\n    add r0, r5, #0\n    bl ov01_022062CC\n    cmp r7, r0\n    bne _0224C54E\n    mov r0, #1\n    str r0, [r4, #8]\n    b _0224C552\n    mov r0, #0\n    str r0, [r4, #8]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void Task_FieldTeleport(void) {
    /* Original at 0x0224C558 */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r7, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    add r0, r7, #0\n    bl TaskManager_GetStatePtr\n    add r5, r0, #0\n    ldr r0, [r5]\n    cmp r0, #3\n    bhi _0224C64E\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0224C584: ; jump table\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C59C\n    ldr r1, _0224C654 ; =ov01_02205A60\n    add r0, r7, #0\n    mov r2, #0\n    bl TaskManager_Call\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224C64E\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C5D6\n    add r0, r6, #0\n    mov r1, #0xe\n    bl ov02_02250780\n    cmp r0, #0\n    beq _0224C5CA\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #1\n    mov r4, #2\n    bl FieldSystem_UnkSub108_AddMonMood\n    b _0224C5CC\n    mov r4, #1\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov02_022507B4\n    b _0224C64E\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C602\n    ldr r0, [r4, #0x28]\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp]\n    ldr r0, [r4, #0x28]\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    ldr r0, [sp]\n    lsl r1, r1, #0x18\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x18\n    bl PlayCry\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C62E\n    bl IsCryFinished\n    cmp r0, #0\n    beq _0224C61A\n    mov r5, #0\n    b _0224C640\n    ldr r3, [r4]\n    add r0, r7, #0\n    lsl r5, r3, #2\n    ldr r3, _0224C658 ; =ov02_0225373C\n    add r1, r6, #0\n    ldr r3, [r3, r5]\n    add r2, r4, #0\n    blx r3\n    add r5, r0, #0\n    b _0224C640\n    ldr r3, [r4]\n    add r0, r7, #0\n    lsl r5, r3, #2\n    ldr r3, _0224C65C ; =ov02_02253724\n    add r1, r6, #0\n    ldr r3, [r3, r5]\n    add r2, r4, #0\n    blx r3\n    add r5, r0, #0\n    cmp r5, #2\n    bne _0224C64A\n    add r0, r4, #0\n    bl Heap_Free\n    cmp r5, #1\n    beq _0224C608\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224C654: .word ov01_02205A60\n    _0224C658: .word ov02_0225373C\n    _0224C65C: .word ov02_02253724"
    );
    #endif
}

void ov02_0224C660(void) {
    /* Original at 0x0224C660 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    bne _0224C670\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0\n    add r2, r5, #0\n    bl memset\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_0224C680(void) {
    ov01_022060B8(0, 2, 1);
}

void ov02_0224C698(void) {
    /* Original at 0x0224C698 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #4\n    add r4, r2, #0\n    bl ov01_021FCD2C\n    ldr r2, _0224C6D0 ; =0xFFF6A000\n    mov r1, #1\n    mov r3, #0xf\n    str r0, [r4, #0x1c]\n    bl ov01_021FCD8C\n    add r5, #0xe4\n    ldr r0, [r5]\n    ldr r1, _0224C6D4 ; =ov02_02253770\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x14]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    ldr r0, _0224C6D8 ; =SEQ_SE_DP_TELE\n    bl PlaySE\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0224C6D0: .word 0xFFF6A000\n    _0224C6D4: .word ov02_02253770\n    _0224C6D8: .word SEQ_SE_DP_TELE"
    );
    #endif
}

void ov02_0224C6DC(void) {
    /* Original at 0x0224C6DC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    ldr r0, [r4, #0x14]\n    add r5, r1, #0\n    bl EventObjectMovementMan_IsFinish\n    cmp r0, #0\n    bne _0224C6F0\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x14]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #0x20]\n    ldr r1, _0224C718 ; =ov02_02253820\n    bl EventObjectMovementMan_Create\n    add r5, #0xe4\n    str r0, [r4, #0x10]\n    ldr r0, [r5]\n    ldr r1, _0224C718 ; =ov02_02253820\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x14]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0224C718: .word ov02_02253820"
    );
    #endif
}

void ov02_0224C71C(void) {
    /* Original at 0x0224C71C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r0, r1, #0\n    mov r1, #4\n    add r4, r2, #0\n    bl ov01_021FCD2C\n    ldr r2, _0224C750 ; =0xFFF6A000\n    str r0, [r4, #0x1c]\n    mov r1, #1\n    mov r3, #0xf\n    bl ov01_021FCD8C\n    ldr r0, [r4, #0x20]\n    ldr r1, _0224C754 ; =ov02_02253820\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x10]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    ldr r0, _0224C758 ; =SEQ_SE_DP_TELE\n    bl PlaySE\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0224C750: .word 0xFFF6A000\n    _0224C754: .word ov02_02253820\n    _0224C758: .word SEQ_SE_DP_TELE"
    );
    #endif
}

void ov02_0224C75C(void) {
    /* Original at 0x0224C75C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r2, #0\n    ldr r0, [r4, #0x10]\n    add r5, r1, #0\n    bl EventObjectMovementMan_IsFinish\n    cmp r0, #0\n    bne _0224C774\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, pc}\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #0x20]\n    ldr r1, _0224C7D0 ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C79C\n    ldr r0, [r4, #0x14]\n    bl EventObjectMovementMan_Delete\n    add r5, #0xe4\n    ldr r0, [r5]\n    ldr r1, _0224C7D0 ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x14]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    cmp r0, #8\n    bge _0224C7AC\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, pc}\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0224C7D0: .word ov02_02253794"
    );
    #endif
}

void ov02_0224C7D4(void) {
    /* Original at 0x0224C7D4 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    ldr r0, [r4, #0x10]\n    add r5, r1, #0\n    bl EventObjectMovementMan_IsFinish\n    cmp r0, #1\n    bne _0224C80C\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #0x20]\n    ldr r1, _0224C83C ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C80C\n    ldr r0, [r4, #0x14]\n    bl EventObjectMovementMan_Delete\n    add r5, #0xe4\n    ldr r0, [r5]\n    ldr r1, _0224C83C ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x14]\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _0224C818\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C82A\n    ldr r0, [r4, #0x14]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #0x1c]\n    bl ov01_021FCD78\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _0224C83C: .word ov02_02253794"
    );
    #endif
}

void ov02_0224C840(void) {
    /* Original at 0x0224C840 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r1, #0xc]\n    add r4, r2, #0\n    bl Save_LocalFieldData_Get\n    add r6, r0, #0\n    bl LocalFieldData_GetBlackoutSpawn\n    add r1, sp, #0\n    add r7, r0, #0\n    bl GetFlyWarpData\n    add r0, r6, #0\n    bl LocalFieldData_GetSpecialSpawnWarpPtr\n    add r1, r0, #0\n    add r0, r7, #0\n    bl GetSpecialSpawnWarpData\n    ldr r2, [r4, #0xc]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02053B04\n    mov r0, #2\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224C87C(void) {
    /* Original at 0x0224C87C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #4\n    add r4, r2, #0\n    bl ov01_021FCD2C\n    ldr r2, _0224C8C4 ; =0xFFF6A000\n    str r0, [r4, #0x1c]\n    mov r1, #1\n    mov r3, #0xf\n    bl ov01_021FCD8C\n    ldr r0, [r4, #0x20]\n    ldr r1, _0224C8C8 ; =ov02_022537DC\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C8B2\n    add r5, #0xe4\n    ldr r0, [r5]\n    ldr r1, _0224C8C8 ; =ov02_022537DC\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x14]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    ldr r0, _0224C8CC ; =SEQ_SE_DP_KAIDAN2\n    bl PlaySE\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0224C8C4: .word 0xFFF6A000\n    _0224C8C8: .word ov02_022537DC\n    _0224C8CC: .word SEQ_SE_DP_KAIDAN2"
    );
    #endif
}

void ov02_0224C8D0(void) {
    /* Original at 0x0224C8D0 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    ldr r0, [r4, #0x10]\n    add r5, r1, #0\n    bl EventObjectMovementMan_IsFinish\n    cmp r0, #0\n    bne _0224C8E4\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #0x20]\n    ldr r1, _0224C938 ; =ov02_022537B8\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C90E\n    ldr r0, [r4, #0x14]\n    bl EventObjectMovementMan_Delete\n    add r0, r5, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    ldr r1, _0224C938 ; =ov02_022537B8\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x14]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetState\n    cmp r0, #2\n    beq _0224C92E\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    ldr r0, [r4, #0x24]\n    beq _0224C928\n    bl ov02_0224DDF4\n    str r0, [r4, #0x2c]\n    b _0224C92E\n    bl ov02_0224DDE0\n    str r0, [r4, #0x2c]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0224C938: .word ov02_022537B8"
    );
    #endif
}

void ov02_0224C93C(void) {
    /* Original at 0x0224C93C */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r2, #0\n    ldr r0, [r4, #0x10]\n    add r5, r1, #0\n    bl EventObjectMovementMan_IsFinish\n    cmp r0, #0\n    bne _0224C954\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, pc}\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #0x20]\n    ldr r1, _0224C9B0 ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C97C\n    ldr r0, [r4, #0x14]\n    bl EventObjectMovementMan_Delete\n    add r5, #0xe4\n    ldr r0, [r5]\n    ldr r1, _0224C9B0 ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x14]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    cmp r0, #8\n    bge _0224C98C\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, pc}\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0\n    ldr r3, _0224C9B4 ; =0x00007FFF\n    add r1, r0, #0\n    add r2, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0224C9B0: .word ov02_02253794\n    _0224C9B4: .word 0x00007FFF"
    );
    #endif
}

void ov02_0224C9B8(void) {
    /* Original at 0x0224C9B8 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    ldr r0, [r4, #0x10]\n    add r5, r1, #0\n    bl EventObjectMovementMan_IsFinish\n    cmp r0, #1\n    bne _0224C9F2\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #0x20]\n    ldr r1, _0224CA34 ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224C9F2\n    ldr r0, [r4, #0x14]\n    bl EventObjectMovementMan_Delete\n    add r0, r5, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    ldr r1, _0224CA34 ; =ov02_02253794\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x14]\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _0224C9FE\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x10]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetState\n    cmp r0, #2\n    beq _0224CA18\n    ldr r0, [r4, #0x2c]\n    bl ov02_0224DE08\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224CA24\n    ldr r0, [r4, #0x14]\n    bl EventObjectMovementMan_Delete\n    ldr r0, [r4, #0x1c]\n    bl ov01_021FCD78\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _0224CA34: .word ov02_02253794"
    );
    #endif
}

u32 ov02_0224CA38(void) {
    Save_LocalFieldData_Get(*((u32*)(r1 + 0xc)));
    LocalFieldData_GetSpecialSpawnWarpPtr();
    sub_02053B04(r5, r0, *((u32*)(r4 + 0xc)));
    return 2;
}

void ov02_0224CA58(void) {
    /* Original at 0x0224CA58 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    add r3, r0, #0\n    add r0, r2, #0\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r2, #0\n    beq _0224CAB4\n    add r6, r3, r1\n    sub r7, r1, #1\n    sub r1, r6, #1\n    ldrb r2, [r1]\n    mov r1, #1\n    add r5, r7, #0\n    and r1, r2\n    lsl r1, r1, #0x18\n    lsr r4, r1, #0x18\n    cmp r7, #0\n    ble _0224CA9A\n    ldrb r1, [r3, r5]\n    add r2, r3, r5\n    sub r2, r2, #1\n    asr r1, r1, #1\n    strb r1, [r3, r5]\n    ldrb r2, [r2]\n    ldrb r1, [r3, r5]\n    lsl r2, r2, #0x1f\n    lsr r2, r2, #0x18\n    orr r1, r2\n    strb r1, [r3, r5]\n    sub r5, r5, #1\n    cmp r5, #0\n    bgt _0224CA7E\n    ldrb r1, [r3, r5]\n    asr r1, r1, #1\n    strb r1, [r3, r5]\n    ldrb r2, [r3, r5]\n    lsl r1, r4, #7\n    orr r1, r2\n    strb r1, [r3, r5]\n    add r1, r0, #0\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r1, #0\n    bne _0224CA6C\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov02_0224CAB8(void) {
    /* Original at 0x0224CAB8 */
    /* Requires manual decompilation - 152 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r2, #0\n    str r1, [sp]\n    add r7, r3, #0\n    bl WallpaperPasswordBank_GetCount\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl WallpaperPasswordBank_GetIndexOfWord\n    add r1, sp, #4\n    strh r0, [r1, #4]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl WallpaperPasswordBank_GetIndexOfWord\n    add r1, sp, #4\n    strh r0, [r1, #6]\n    add r1, sp, #0x18\n    ldrh r1, [r1, #0x10]\n    add r0, r5, #0\n    bl WallpaperPasswordBank_GetIndexOfWord\n    add r1, sp, #4\n    strh r0, [r1, #8]\n    add r1, sp, #0x18\n    ldrh r1, [r1, #0x14]\n    add r0, r5, #0\n    bl WallpaperPasswordBank_GetIndexOfWord\n    add r1, sp, #4\n    mov r2, #0\n    strh r0, [r1, #0xa]\n    add r3, sp, #8\n    add r5, sp, #4\n    add r7, r2, #0\n    ldrsh r0, [r3, r7]\n    cmp r0, #0\n    bge _0224CB14\n    mov r0, #0\n    add sp, #0x10\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r2, #0\n    ble _0224CB48\n    mov r6, #1\n    mvn r6, r6\n    ldrsh r6, [r3, r6]\n    cmp r0, r6\n    blt _0224CB34\n    sub r0, r0, r6\n    cmp r0, #0xff\n    ble _0224CB30\n    mov r0, #0\n    add sp, #0x10\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    strb r0, [r5]\n    b _0224CB5A\n    sub r0, r6, r0\n    sub r0, r4, r0\n    cmp r0, #0xff\n    ble _0224CB44\n    mov r0, #0\n    add sp, #0x10\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    strb r0, [r5]\n    b _0224CB5A\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    cmp r0, #0xff\n    ble _0224CB58\n    mov r0, #0\n    add sp, #0x10\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    strb r0, [r1]\n    add r2, r2, #1\n    add r3, r3, #2\n    add r5, r5, #1\n    cmp r2, #4\n    blt _0224CB06\n    add r0, sp, #4\n    mov r1, #4\n    mov r2, #5\n    bl ov02_0224CA58\n    mov r2, #0\n    add r1, sp, #4\n    add r4, sp, #4\n    mov r3, #0xf0\n    ldrb r5, [r4, #3]\n    ldrb r0, [r1]\n    add r2, r2, #1\n    asr r6, r5, #4\n    and r5, r3\n    orr r5, r6\n    eor r0, r5\n    strb r0, [r1]\n    add r1, r1, #1\n    cmp r2, #3\n    blt _0224CB76\n    add r2, sp, #4\n    ldrb r3, [r2, #3]\n    mov r2, #0xf\n    add r0, sp, #4\n    and r2, r3\n    lsl r2, r2, #0x18\n    mov r1, #3\n    lsr r2, r2, #0x18\n    bl ov02_0224CA58\n    add r1, sp, #4\n    ldrb r5, [r1]\n    mov r0, #0xf\n    add r4, r5, #0\n    and r4, r0\n    cmp r4, #8\n    blt _0224CBB4\n    add sp, #0x10\n    sub r0, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r1, #1]\n    eor r0, r5\n    strb r0, [r1, #1]\n    ldrb r0, [r1, #2]\n    eor r0, r5\n    strb r0, [r1, #2]\n    ldrb r2, [r1, #1]\n    ldrb r3, [r1, #2]\n    lsl r0, r2, #8\n    add r6, r0, #0\n    ldr r0, [sp]\n    orr r6, r3\n    cmp r0, r6\n    bne _0224CBEE\n    mov r0, #0xf0\n    and r0, r5\n    asr r0, r0, #4\n    cmp r0, #6\n    bne _0224CBEE\n    ldrb r0, [r1, #3]\n    add r1, r5, r2\n    mul r1, r3\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r0, r1\n    bne _0224CBEE\n    add sp, #0x10\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    mvn r0, r0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224CBF8(void) {
    /* Original at 0x0224CBF8 */
    /* Requires manual decompilation - 153 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r2, #0\n    str r1, [sp]\n    add r7, r3, #0\n    bl WallpaperPasswordBank_GetCount\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl WallpaperPasswordBank_GetIndexOfWord\n    add r1, sp, #4\n    strh r0, [r1, #4]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl WallpaperPasswordBank_GetIndexOfWord\n    add r1, sp, #4\n    strh r0, [r1, #6]\n    add r1, sp, #0x18\n    ldrh r1, [r1, #0x10]\n    add r0, r5, #0\n    bl WallpaperPasswordBank_GetIndexOfWord\n    add r1, sp, #4\n    strh r0, [r1, #8]\n    add r1, sp, #0x18\n    ldrh r1, [r1, #0x14]\n    add r0, r5, #0\n    bl WallpaperPasswordBank_GetIndexOfWord\n    add r1, sp, #4\n    mov r2, #0\n    strh r0, [r1, #0xa]\n    add r3, sp, #8\n    add r5, sp, #4\n    add r7, r2, #0\n    ldrsh r0, [r3, r7]\n    cmp r0, #0\n    bge _0224CC54\n    mov r0, #0\n    add sp, #0x10\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r2, #0\n    ble _0224CC88\n    mov r6, #1\n    mvn r6, r6\n    ldrsh r6, [r3, r6]\n    cmp r0, r6\n    blt _0224CC74\n    sub r0, r0, r6\n    cmp r0, #0xff\n    ble _0224CC70\n    mov r0, #0\n    add sp, #0x10\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    strb r0, [r5]\n    b _0224CC9A\n    sub r0, r6, r0\n    sub r0, r4, r0\n    cmp r0, #0xff\n    ble _0224CC84\n    mov r0, #0\n    add sp, #0x10\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    strb r0, [r5]\n    b _0224CC9A\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    cmp r0, #0xff\n    ble _0224CC98\n    mov r0, #0\n    add sp, #0x10\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    strb r0, [r1]\n    add r2, r2, #1\n    add r3, r3, #2\n    add r5, r5, #1\n    cmp r2, #4\n    blt _0224CC46\n    add r0, sp, #4\n    mov r1, #4\n    mov r2, #5\n    bl ov02_0224CA58\n    mov r2, #0\n    add r1, sp, #4\n    add r4, sp, #4\n    mov r3, #0xf0\n    ldrb r5, [r4, #3]\n    ldrb r0, [r1]\n    add r2, r2, #1\n    asr r6, r5, #4\n    and r5, r3\n    orr r5, r6\n    eor r0, r5\n    strb r0, [r1]\n    add r1, r1, #1\n    cmp r2, #3\n    blt _0224CCB6\n    add r2, sp, #4\n    ldrb r3, [r2, #3]\n    mov r2, #0xf\n    add r0, sp, #4\n    and r2, r3\n    lsl r2, r2, #0x18\n    mov r1, #3\n    lsr r2, r2, #0x18\n    bl ov02_0224CA58\n    add r1, sp, #4\n    ldrb r4, [r1]\n    mov r0, #0xf\n    and r0, r4\n    lsl r2, r0, #0x18\n    lsr r2, r2, #0x18\n    cmp r2, #8\n    blo _0224CCF4\n    cmp r2, #0xb\n    blo _0224CCFC\n    mov r0, #0\n    add sp, #0x10\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r2, [r1, #1]\n    eor r2, r4\n    strb r2, [r1, #1]\n    ldrb r2, [r1, #2]\n    eor r2, r4\n    strb r2, [r1, #2]\n    ldrb r2, [r1, #1]\n    ldrb r3, [r1, #2]\n    lsl r5, r2, #8\n    add r6, r5, #0\n    ldr r5, [sp]\n    orr r6, r3\n    cmp r5, r6\n    bne _0224CD30\n    mov r5, #0xf0\n    and r5, r4\n    asr r5, r5, #4\n    cmp r5, #6\n    bne _0224CD30\n    add r2, r4, r2\n    mul r2, r3\n    lsl r2, r2, #0x18\n    ldrb r1, [r1, #3]\n    lsr r2, r2, #0x18\n    cmp r1, r2\n    beq _0224CD34\n    mov r0, #0\n    mvn r0, r0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224CD38(void) {
    /* Original at 0x0224CD38 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    ldr r0, [sp, #0x24]\n    add r7, r1, #0\n    str r2, [sp, #8]\n    add r5, r3, #0\n    bl WallpaperPasswordBank_Create\n    add r4, r0, #0\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerID_VisibleHalf\n    add r1, r0, #0\n    str r5, [sp]\n    add r0, sp, #0x10\n    ldrh r0, [r0, #0x10]\n    add r2, r7, #0\n    str r0, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, r4, #0\n    bl ov02_0224CAB8\n    add r5, r0, #0\n    add r0, r4, #0\n    bl WallpaperPasswordBank_Delete\n    add r0, r5, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224CD74(void) {
    /* Original at 0x0224CD74 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    ldr r0, [sp, #0x24]\n    add r7, r1, #0\n    str r2, [sp, #8]\n    add r5, r3, #0\n    bl WallpaperPasswordBank_Create\n    add r4, r0, #0\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerID_VisibleHalf\n    add r1, r0, #0\n    str r5, [sp]\n    add r0, sp, #0x10\n    ldrh r0, [r0, #0x10]\n    add r2, r7, #0\n    str r0, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, r4, #0\n    bl ov02_0224CBF8\n    add r5, r0, #0\n    add r0, r4, #0\n    bl WallpaperPasswordBank_Delete\n    add r0, r5, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224CDB0(void) {
    /* Original at 0x0224CDB0 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x20\n    add r6, r1, #0\n    mov r1, #0x26\n    add r2, sp, #4\n    add r3, sp, #0\n    add r5, r0, #0\n    bl sub_02054C20\n    cmp r0, #0\n    beq _0224CE1C\n    mov r0, #4\n    mov r1, #0x18\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    strb r6, [r4, #0xc]\n    mov r0, #0\n    strb r0, [r4, #0xd]\n    strb r0, [r4, #0xe]\n    strb r0, [r4, #0xf]\n    ldr r0, [r5, #0x30]\n    bl MapMatrix_GetWidth\n    add r1, r0, #0\n    ldr r0, [sp]\n    add r2, sp, #0x14\n    bl sub_02054DC8\n    ldr r1, [sp, #4]\n    add r0, sp, #8\n    bl ov01_021F3B0C\n    add r3, sp, #8\n    ldmia r3!, {r0, r1}\n    add r2, r4, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r1, [r4]\n    ldr r0, [sp, #0x14]\n    add r2, r4, #0\n    add r0, r1, r0\n    str r0, [r4]\n    ldr r1, [r4, #8]\n    ldr r0, [sp, #0x1c]\n    add r0, r1, r0\n    str r0, [r4, #8]\n    ldr r0, [r5, #0x10]\n    ldr r1, _0224CE24 ; =ov02_0224CE28\n    bl TaskManager_Call\n    add sp, #0x20\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    add sp, #0x20\n    pop {r4, r5, r6, pc}\n    _0224CE24: .word ov02_0224CE28"
    );
    #endif
}

void ov02_0224CE28(void) {
    /* Original at 0x0224CE28 */
    /* Requires manual decompilation - 191 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x30\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrb r1, [r4, #0xf]\n    cmp r1, #5\n    bls _0224CE44\n    b _0224CFC0\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0224CE50: ; jump table\n    ldr r1, [r6, #0x34]\n    mov r0, #0x6b\n    bl ov01_021FB90C\n    ldr r0, [r0]\n    bl NNS_G3dGetMdlSet\n    cmp r0, #0\n    beq _0224CE8E\n    add r2, r0, #0\n    add r2, #8\n    beq _0224CE82\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _0224CE82\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _0224CE84\n    mov r1, #0\n    cmp r1, #0\n    beq _0224CE8E\n    ldr r1, [r1]\n    add r5, r0, r1\n    b _0224CE90\n    mov r5, #0\n    ldr r0, [r6, #0x34]\n    bl ov01_021FB9E0\n    mov r1, #0\n    str r1, [sp]\n    str r5, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r1, [sp, #0x14]\n    ldr r0, [r6, #0x54]\n    ldr r1, [r6, #0x58]\n    mov r2, #0x10\n    mov r3, #0x6b\n    bl ov01_021E8DE8\n    ldrb r0, [r4, #0xf]\n    add r0, r0, #1\n    strb r0, [r4, #0xf]\n    b _0224CFC0\n    add r1, sp, #0x18\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    ldrb r2, [r4, #0xd]\n    mov r1, #0xc\n    ldr r0, [r4]\n    add r3, r2, #0\n    ldr r2, _0224CFC8 ; =ov02_02253DD8\n    mul r3, r1\n    ldr r2, [r2, r3]\n    add r0, r0, r2\n    str r0, [sp, #0x24]\n    ldrb r2, [r4, #0xd]\n    ldr r0, [r4, #4]\n    add r3, r2, #0\n    ldr r2, _0224CFCC ; =ov02_02253DDC\n    mul r3, r1\n    ldr r2, [r2, r3]\n    add r0, r0, r2\n    str r0, [sp, #0x28]\n    ldrb r2, [r4, #0xd]\n    ldr r0, [r4, #8]\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, _0224CFD0 ; =ov02_02253DE0\n    ldr r1, [r1, r3]\n    add r0, r0, r1\n    str r0, [sp, #0x2c]\n    ldr r0, _0224CFD4 ; =SEQ_SE_DP_BOWA\n    bl PlaySE\n    ldr r0, [r6, #0x54]\n    add r6, #0x9c\n    str r0, [sp]\n    ldr r0, [r6]\n    mov r1, #0x6b\n    add r2, sp, #0x24\n    add r3, sp, #0x18\n    bl ov01_021F3C0C\n    ldrb r1, [r4, #0xd]\n    add r1, r4, r1\n    strb r0, [r1, #0x10]\n    ldrb r0, [r4, #0xf]\n    add r0, r0, #1\n    strb r0, [r4, #0xf]\n    b _0224CFC0\n    ldrb r0, [r4, #0xe]\n    cmp r0, #0xf\n    bhs _0224CF28\n    add r0, r0, #1\n    strb r0, [r4, #0xe]\n    b _0224CFC0\n    mov r0, #0\n    strb r0, [r4, #0xe]\n    ldrb r0, [r4, #0xd]\n    add r0, r0, #1\n    strb r0, [r4, #0xd]\n    ldrb r1, [r4, #0xd]\n    ldrb r0, [r4, #0xc]\n    cmp r1, r0\n    bhs _0224CF40\n    mov r0, #1\n    strb r0, [r4, #0xf]\n    b _0224CFC0\n    add r0, r6, #0\n    add r0, #0x9c\n    ldrb r1, [r4, #0x10]\n    ldr r0, [r0]\n    bl ov01_021F3B60\n    bl ov01_021F3B38\n    add r3, r0, #0\n    ldr r0, [r6, #0x58]\n    mov r1, #0x10\n    mov r2, #0\n    bl ov01_021E8E40\n    ldrb r0, [r4, #0xf]\n    add r0, r0, #1\n    strb r0, [r4, #0xf]\n    b _0224CFC0\n    ldr r0, [r6, #0x58]\n    mov r1, #0x10\n    mov r2, #0\n    bl ov01_021E8E70\n    ldrb r0, [r4, #0xf]\n    add r0, r0, #1\n    strb r0, [r4, #0xf]\n    b _0224CFC0\n    ldr r0, [r6, #0x58]\n    mov r1, #0x10\n    bl ov01_021E8F10\n    cmp r0, #0\n    beq _0224CFC0\n    ldr r0, [r6, #0x54]\n    ldr r1, [r6, #0x58]\n    mov r2, #0x10\n    bl ov01_021E8ED0\n    ldrb r0, [r4, #0xc]\n    mov r5, #0\n    cmp r0, #0\n    bls _0224CFAE\n    add r0, r4, r5\n    add r1, r6, #0\n    add r1, #0x9c\n    ldrb r0, [r0, #0x10]\n    ldr r1, [r1]\n    bl ov01_021F36DC\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldrb r0, [r4, #0xc]\n    cmp r5, r0\n    blo _0224CF94\n    ldrb r0, [r4, #0xf]\n    add r0, r0, #1\n    strb r0, [r4, #0xf]\n    b _0224CFC0\n    bl Heap_Free\n    add sp, #0x30\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #0x30\n    pop {r4, r5, r6, pc}\n    nop\n    _0224CFC8: .word ov02_02253DD8\n    _0224CFCC: .word ov02_02253DDC\n    _0224CFD0: .word ov02_02253DE0\n    _0224CFD4: .word SEQ_SE_DP_BOWA"
    );
    #endif
}

void ov02_0224CFD8(void) {
    /* Original at 0x0224CFD8 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r2, #0\n    bl MapObjectManager_GetFirstActiveObjectByID\n    add r6, r0, #0\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    add r0, r6, #0\n    bl MapObject_GetXCoord\n    add r5, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetZCoord\n    add r4, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetFacingDirection\n    cmp r0, #3\n    bhi _0224D028\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224D010: ; jump table\n    sub r4, r4, #1\n    b _0224D02C\n    add r4, r4, #1\n    b _0224D02C\n    sub r5, r5, #1\n    b _0224D02C\n    add r5, r5, #1\n    b _0224D02C\n    bl GF_AssertFail\n    mov r3, #2\n    lsl r1, r5, #0x10\n    lsl r3, r3, #0xe\n    ldr r2, [sp, #4]\n    lsl r4, r4, #0x10\n    add r1, r1, r3\n    add r0, r7, #0\n    add r3, r4, r3\n    bl Field3dObject_SetPosEx\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224D044(void) {
    /* Original at 0x0224D044 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r1, #0\n    add r6, r0, #0\n    add r1, sp, #0\n    bl PlayerAvatar_CopyPositionVector\n    add r0, r6, #0\n    bl PlayerAvatar_GetXCoord\n    add r5, r0, #0\n    add r0, r6, #0\n    bl PlayerAvatar_GetZCoord\n    add r4, r0, #0\n    add r0, r6, #0\n    bl PlayerAvatar_GetFacingDirection\n    cmp r0, #3\n    bhi _0224D090\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224D078: ; jump table\n    sub r4, r4, #1\n    b _0224D094\n    add r4, r4, #1\n    b _0224D094\n    sub r5, r5, #1\n    b _0224D094\n    add r5, r5, #1\n    b _0224D094\n    bl GF_AssertFail\n    mov r3, #2\n    lsl r1, r5, #0x10\n    lsl r3, r3, #0xe\n    ldr r2, [sp, #4]\n    lsl r4, r4, #0x10\n    add r1, r1, r3\n    add r0, r7, #0\n    add r3, r4, r3\n    bl Field3dObject_SetPosEx\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224D0AC(void) {
    /* Original at 0x0224D0AC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r1, sp, #0\n    bl PlayerAvatar_CopyPositionVector\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, r4, #0\n    bl Field3dObject_SetPosEx\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov02_0224D0C8(void) {
    /* Original at 0x0224D0C8 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    str r2, [sp, #8]\n    add r6, r0, #0\n    mov r1, #0\n    mov r2, #0xdc\n    add r4, r3, #0\n    ldr r7, [sp, #0x28]\n    bl memset\n    add r0, r6, #0\n    add r0, #0x78\n    mov r1, #0x86\n    add r2, r5, #0\n    mov r3, #4\n    bl Field3dModel_LoadFromFilesystem\n    add r1, r6, #0\n    add r0, r6, #0\n    add r1, #0x78\n    bl Field3dObject_InitFromModel\n    add r0, r6, #0\n    add r0, #0xd8\n    str r4, [r0]\n    add r0, r6, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    mov r4, #0\n    cmp r0, #0\n    bls _0224D13E\n    add r0, r6, #0\n    add r5, r6, #0\n    str r0, [sp, #0xc]\n    add r0, #0x78\n    add r5, #0x88\n    str r0, [sp, #0xc]\n    ldr r3, [sp, #8]\n    mov r0, #4\n    str r0, [sp]\n    ldr r1, [sp, #0xc]\n    add r0, r5, #0\n    mov r2, #0x86\n    add r3, r3, r4\n    str r7, [sp, #4]\n    bl Field3dModelAnimation_LoadFromFilesystem\n    add r0, r6, #0\n    add r1, r5, #0\n    bl Field3dObject_AddAnimation\n    add r0, r6, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    add r4, r4, #1\n    add r5, #0x14\n    cmp r4, r0\n    blo _0224D114\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224D144(void) {
    /* Original at 0x0224D144 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r0, #0x78\n    add r7, r1, #0\n    bl Field3dModel_Unload\n    add r0, r6, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    mov r4, #0\n    cmp r0, #0\n    bls _0224D176\n    add r5, r6, #0\n    add r5, #0x88\n    add r0, r5, #0\n    add r1, r7, #0\n    bl Field3dModelAnimation_Unload\n    add r0, r6, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    add r4, r4, #1\n    add r5, #0x14\n    cmp r4, r0\n    blo _0224D160\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224D178(void) {
    /* Original at 0x0224D178 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    mov r6, #1\n    mov r4, #0\n    cmp r0, #0\n    bls _0224D1A6\n    add r5, r7, #0\n    add r5, #0x88\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl Field3dModelAnimation_FrameAdvanceAndCheck\n    and r6, r0\n    add r0, r7, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    add r4, r4, #1\n    add r5, #0x14\n    cmp r4, r0\n    blo _0224D18C\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224D1AC(void) {
    /* Original at 0x0224D1AC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    mov r4, #0\n    cmp r0, #0\n    bls _0224D1D8\n    add r5, r6, #0\n    mov r7, #1\n    add r5, #0x88\n    lsl r7, r7, #0xc\n    add r0, r5, #0\n    add r1, r7, #0\n    bl Field3dModelAnimation_FrameAdvanceAndLoop\n    add r0, r6, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    add r4, r4, #1\n    add r5, #0x14\n    cmp r4, r0\n    blo _0224D1C2\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224D1DC(void) {
    Field3dObject_Draw();
}

void ov02_0224D1E4(void) {
    /* Original at 0x0224D1E4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    add r5, r1, #0\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xf0\n    bl memset\n    add r0, r4, #0\n    add r0, #0xdc\n    mov r1, #4\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    add r0, r4, #0\n    add r0, #0xdc\n    mov r1, #3\n    str r0, [sp]\n    add r0, r4, #0\n    mov r2, #0\n    add r3, r1, #0\n    bl ov02_0224D0C8\n    ldr r0, [r5, #0x40]\n    add r1, r4, #0\n    bl ov02_0224D044\n    ldr r0, _0224D228 ; =SEQ_SE_DP_FW015\n    bl PlaySE\n    mov r0, #0\n    add r4, #0xec\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    _0224D228: .word SEQ_SE_DP_FW015"
    );
    #endif
}

void ov02_0224D22C(void) {
    /* Original at 0x0224D22C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    add r5, r1, #0\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xf0\n    bl memset\n    add r0, r4, #0\n    add r0, #0xdc\n    mov r1, #4\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    add r0, r4, #0\n    add r0, #0xdc\n    mov r1, #3\n    str r0, [sp]\n    add r0, r4, #0\n    mov r2, #0\n    add r3, r1, #0\n    bl ov02_0224D0C8\n    ldr r0, [r5, #0x3c]\n    mov r1, #0xfd\n    add r2, r4, #0\n    bl ov02_0224CFD8\n    ldr r0, _0224D274 ; =SEQ_SE_DP_FW015\n    bl PlaySE\n    mov r0, #0\n    add r4, #0xec\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    nop\n    _0224D274: .word SEQ_SE_DP_FW015"
    );
    #endif
}

void ov02_0224D278(void) {
    /* Original at 0x0224D278 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0224D284 ; =ov02_0224D144\n    add r0, r2, #0\n    add r2, #0xdc\n    add r1, r2, #0\n    bx r3\n    nop\n    _0224D284: .word ov02_0224D144"
    );
    #endif
}

void ov02_0224D288(void) {
    /* Original at 0x0224D288 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    add r0, r4, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0224D29A\n    cmp r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov02_0224D178\n    cmp r0, #1\n    bne _0224D2B8\n    add r0, r4, #0\n    mov r1, #0\n    bl Field3dObject_SetActiveFlag\n    add r0, r4, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    add r4, #0xec\n    add r0, r0, #1\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov02_0224D2BC(void) {
    ov02_0224D1DC();
}

void ov02_0224D2C8(void) {
    /* Original at 0x0224D2C8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r3, _0224D2D4 ; =Field3dObjectTaskManager_CreateTask\n    ldr r0, [r0, #4]\n    ldr r1, _0224D2D8 ; =ov02_02253974\n    bx r3\n    nop\n    _0224D2D4: .word Field3dObjectTaskManager_CreateTask\n    _0224D2D8: .word ov02_02253974"
    );
    #endif
}

void ov02_0224D2DC(void) {
    /* Original at 0x0224D2DC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r3, _0224D2E8 ; =Field3dObjectTaskManager_CreateTask\n    ldr r0, [r0, #4]\n    ldr r1, _0224D2EC ; =ov02_022539BC\n    bx r3\n    nop\n    _0224D2E8: .word Field3dObjectTaskManager_CreateTask\n    _0224D2EC: .word ov02_022539BC"
    );
    #endif
}

void ov02_0224D2F0(void) {
    Field3dObjectTask_Delete();
}

void ov02_0224D2F8(void) {
    Field3dObjectTask_GetData(0, 1);
}

void ov02_0224D310(void) {
    /* Original at 0x0224D310 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    add r5, r1, #0\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xf0\n    bl memset\n    add r0, r4, #0\n    add r0, #0xdc\n    mov r1, #4\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    add r0, r4, #0\n    add r0, #0xdc\n    mov r2, #4\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #8\n    add r3, r2, #0\n    bl ov02_0224D0C8\n    ldr r0, [r5, #0x40]\n    add r1, r4, #0\n    bl ov02_0224D044\n    ldr r0, _0224D354 ; =SEQ_SE_DP_FW088\n    bl PlaySE\n    mov r0, #0\n    add r4, #0xec\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    _0224D354: .word SEQ_SE_DP_FW088"
    );
    #endif
}

void ov02_0224D358(void) {
    /* Original at 0x0224D358 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    add r5, r1, #0\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xf0\n    bl memset\n    add r0, r4, #0\n    add r0, #0xdc\n    mov r1, #4\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    add r0, r4, #0\n    add r0, #0xdc\n    mov r2, #4\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #8\n    add r3, r2, #0\n    bl ov02_0224D0C8\n    ldr r0, [r5, #0x3c]\n    mov r1, #0xfd\n    add r2, r4, #0\n    bl ov02_0224CFD8\n    ldr r0, _0224D3A0 ; =SEQ_SE_DP_FW088\n    bl PlaySE\n    mov r0, #0\n    add r4, #0xec\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    nop\n    _0224D3A0: .word SEQ_SE_DP_FW088"
    );
    #endif
}

void ov02_0224D3A4(void) {
    /* Original at 0x0224D3A4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0224D3B0 ; =ov02_0224D144\n    add r0, r2, #0\n    add r2, #0xdc\n    add r1, r2, #0\n    bx r3\n    nop\n    _0224D3B0: .word ov02_0224D144"
    );
    #endif
}

void ov02_0224D3B4(void) {
    /* Original at 0x0224D3B4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    add r0, r4, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0224D3C6\n    cmp r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov02_0224D178\n    cmp r0, #1\n    bne _0224D3E4\n    add r0, r4, #0\n    mov r1, #0\n    bl Field3dObject_SetActiveFlag\n    add r0, r4, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    add r4, #0xec\n    add r0, r0, #1\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov02_0224D3E8(void) {
    ov02_0224D1DC();
}

void ov02_0224D3F4(void) {
    /* Original at 0x0224D3F4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r3, _0224D400 ; =Field3dObjectTaskManager_CreateTask\n    ldr r0, [r0, #4]\n    ldr r1, _0224D404 ; =ov02_022538FC\n    bx r3\n    nop\n    _0224D400: .word Field3dObjectTaskManager_CreateTask\n    _0224D404: .word ov02_022538FC"
    );
    #endif
}

void ov02_0224D408(void) {
    /* Original at 0x0224D408 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r3, _0224D414 ; =Field3dObjectTaskManager_CreateTask\n    ldr r0, [r0, #4]\n    ldr r1, _0224D418 ; =ov02_0225398C\n    bx r3\n    nop\n    _0224D414: .word Field3dObjectTaskManager_CreateTask\n    _0224D418: .word ov02_0225398C"
    );
    #endif
}

void ov02_0224D41C(void) {
    Field3dObjectTask_Delete();
}

void ov02_0224D424(void) {
    Field3dObjectTask_GetData(0, 1);
}

void ov02_0224D43C(void) {
    /* Original at 0x0224D43C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    mov r2, #0x73\n    add r0, r4, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    mov r0, #0x6e\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #4\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    ldr r0, _0224D464 ; =0x000001CA\n    mov r1, #0\n    strh r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _0224D464: .word 0x000001CA"
    );
    #endif
}

void ov02_0224D468(void) {
    ov02_0224D144(0x6e, 0);
}

void ov02_0224D488(void) {
    /* Original at 0x0224D488 */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r7, _0224D574 ; =0x000001CA\n    add r4, r2, #0\n    ldrh r0, [r4, r7]\n    add r5, r1, #0\n    cmp r0, #3\n    bhi _0224D570\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224D4A4: ; jump table\n    ldr r2, _0224D578 ; =ov02_022538EC\n    add r1, sp, #4\n    ldrb r3, [r2, #2]\n    add r0, sp, #4\n    add r1, #2\n    strb r3, [r0, #2]\n    ldrb r3, [r2, #3]\n    strb r3, [r0, #3]\n    ldrb r6, [r2, #4]\n    add r3, sp, #4\n    strb r6, [r0]\n    ldrb r2, [r2, #5]\n    strb r2, [r0, #1]\n    sub r0, r7, #2\n    ldrh r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    mov r0, #0xdc\n    add r6, r2, #0\n    mul r6, r0\n    add r0, #0xdc\n    add r0, r4, r0\n    str r0, [sp]\n    ldrb r1, [r1, r2]\n    ldrb r2, [r3, r2]\n    add r0, r4, r6\n    mov r3, #2\n    bl ov02_0224D0C8\n    ldr r0, [r5, #0x40]\n    add r1, r4, r6\n    bl ov02_0224D0AC\n    sub r1, r7, #2\n    ldrh r0, [r4, r1]\n    add r0, r0, #1\n    strh r0, [r4, r1]\n    ldrh r0, [r4, r1]\n    cmp r0, #2\n    blo _0224D570\n    add r0, r1, #2\n    ldrh r0, [r4, r0]\n    add sp, #8\n    add r2, r0, #1\n    add r0, r1, #2\n    strh r2, [r4, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r0, #0xdc\n    mov r1, #0\n    bl Field3dObject_SetActiveFlag\n    ldr r0, _0224D57C ; =SEQ_SE_DP_FW463\n    bl PlaySE\n    add r0, r7, #0\n    ldrh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    add r0, r4, #0\n    bl ov02_0224D178\n    add r6, r0, #0\n    ldr r0, [r5, #0x40]\n    add r1, r4, #0\n    bl ov02_0224D0AC\n    cmp r6, #1\n    bne _0224D570\n    add r0, r4, #0\n    add r0, #0xdc\n    mov r1, #1\n    bl Field3dObject_SetActiveFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl Field3dObject_SetActiveFlag\n    add r1, r4, #0\n    ldr r0, [r5, #0x40]\n    add r1, #0xdc\n    bl ov02_0224D0AC\n    ldr r0, _0224D574 ; =0x000001CA\n    add sp, #8\n    ldrh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r0, #0xdc\n    bl ov02_0224D1AC\n    add r4, #0xdc\n    ldr r0, [r5, #0x40]\n    add r1, r4, #0\n    bl ov02_0224D0AC\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224D574: .word 0x000001CA\n    _0224D578: .word ov02_022538EC\n    _0224D57C: .word SEQ_SE_DP_FW463"
    );
    #endif
}

void ov02_0224D580(void) {
    ov02_0224D1DC(0);
}

void ov02_0224D598(void) {
    /* Original at 0x0224D598 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r3, _0224D5A4 ; =Field3dObjectTaskManager_CreateTask\n    ldr r0, [r0, #4]\n    ldr r1, _0224D5A8 ; =ov02_02253944\n    bx r3\n    nop\n    _0224D5A4: .word Field3dObjectTaskManager_CreateTask\n    _0224D5A8: .word ov02_02253944"
    );
    #endif
}

void ov02_0224D5AC(void) {
    Field3dObjectTask_Delete();
}

void ov02_0224D5B4(void) {
    /* Original at 0x0224D5B4 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    ldr r1, _0224D640 ; =ov02_022538EC\n    add r4, r2, #0\n    ldrb r2, [r1]\n    add r0, sp, #4\n    strb r2, [r0, #1]\n    ldrb r2, [r1, #1]\n    strb r2, [r0]\n    ldrh r2, [r1, #6]\n    strh r2, [r0, #2]\n    ldrh r2, [r1, #8]\n    strh r2, [r0, #4]\n    ldrh r2, [r1, #0xa]\n    strh r2, [r0, #6]\n    ldrh r1, [r1, #0xc]\n    mov r2, #0xf0\n    strh r1, [r0, #8]\n    add r0, r4, #0\n    mov r1, #0\n    bl memset\n    add r0, r4, #0\n    add r0, #0xdc\n    mov r1, #4\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    add r6, r0, #0\n    add r0, r4, #0\n    add r0, #0xdc\n    str r0, [sp]\n    add r2, sp, #4\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    add r0, r4, #0\n    mov r3, #1\n    bl ov02_0224D0C8\n    add r0, r4, #0\n    bl ov02_0224D1AC\n    ldr r0, [r5, #0x40]\n    add r1, r4, #0\n    bl ov02_0224D0AC\n    add r0, sp, #4\n    lsl r1, r6, #1\n    add r0, #2\n    ldrh r0, [r0, r1]\n    bl GF_DegreeToSinCosIdxNoWrap\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #1\n    bl Field3dObject_SetXRotation\n    ldr r0, _0224D644 ; =SEQ_SE_DP_FW463\n    bl PlaySE\n    mov r0, #0\n    add r4, #0xec\n    strh r0, [r4]\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _0224D640: .word ov02_022538EC\n    _0224D644: .word SEQ_SE_DP_FW463"
    );
    #endif
}

void ov02_0224D648(void) {
    /* Original at 0x0224D648 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0224D654 ; =ov02_0224D144\n    add r0, r2, #0\n    add r2, #0xdc\n    add r1, r2, #0\n    bx r3\n    nop\n    _0224D654: .word ov02_0224D144"
    );
    #endif
}

void ov02_0224D658(void) {
    ov02_0224D1AC(r2);
    ov02_0224D0AC(*((u32*)(r5 + 0x40)), r4);
}

void ov02_0224D670(void) {
    ov02_0224D1DC();
}

void ov02_0224D67C(void) {
    /* Original at 0x0224D67C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r3, _0224D688 ; =Field3dObjectTaskManager_CreateTask\n    ldr r0, [r0, #4]\n    ldr r1, _0224D68C ; =ov02_02253914\n    bx r3\n    nop\n    _0224D688: .word Field3dObjectTaskManager_CreateTask\n    _0224D68C: .word ov02_02253914"
    );
    #endif
}

void ov02_0224D690(void) {
    Field3dObjectTask_Delete();
}

void ov02_0224D698(void) {
    /* Original at 0x0224D698 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    add r6, r1, #0\n    add r4, r2, #0\n    add r5, r3, #0\n    cmp r0, #0\n    beq _0224D6B0\n    bl GF_AssertFail\n    add r0, r6, #0\n    add r1, sp, #0\n    bl PlayerAvatar_CopyPositionVector\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #8]\n    ldr r1, [sp]\n    add r0, r7, #0\n    add r2, r2, r4\n    add r3, r3, r5\n    bl Field3dObject_SetPosEx\n    add r0, r7, #0\n    mov r4, #0\n    add r5, r7, #0\n    mov r1, #1\n    add r0, #0xc8\n    str r1, [r0]\n    add r5, #0x78\n    add r6, r4, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl Field3dModelAnimation_FrameSet\n    add r4, r4, #1\n    add r5, #0x14\n    cmp r4, #4\n    blt _0224D6D8\n    add r0, r7, #0\n    mov r1, #1\n    bl Field3dObject_SetActiveFlag\n    ldr r0, _0224D6FC ; =SEQ_SE_DP_UG_023\n    bl PlaySE\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0224D6FC: .word SEQ_SE_DP_UG_023"
    );
    #endif
}

void ov02_0224D700(void) {
    /* Original at 0x0224D700 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    add r0, #0xc8\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0224D73A\n    ldr r5, [sp]\n    mov r4, #1\n    mov r6, #0\n    add r5, #0x78\n    lsl r7, r4, #0xc\n    add r0, r5, #0\n    add r1, r7, #0\n    bl Field3dModelAnimation_FrameAdvanceAndCheck\n    add r6, r6, #1\n    and r4, r0\n    add r5, #0x14\n    cmp r6, #4\n    blt _0224D716\n    cmp r4, #1\n    bne _0224D73A\n    ldr r0, [sp]\n    mov r1, #0\n    add r0, #0xc8\n    str r1, [r0]\n    ldr r0, [sp]\n    bl Field3dObject_SetActiveFlag\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224D73C(void) {
    /* Original at 0x0224D73C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r1, [sp]\n    str r2, [sp, #4]\n    mov r1, #0\n    mov r2, #0xcc\n    add r7, r0, #0\n    add r5, r3, #0\n    bl memset\n    ldr r1, [sp]\n    add r0, r7, #0\n    bl Field3dObject_InitFromModel\n    add r4, r7, #0\n    mov r6, #0\n    add r4, #0x78\n    ldr r1, [sp]\n    ldr r2, [r5]\n    ldr r3, [sp, #4]\n    add r0, r4, #0\n    bl ov01_021FBE70\n    add r0, r7, #0\n    add r1, r4, #0\n    bl Field3dObject_AddAnimation\n    add r6, r6, #1\n    add r5, r5, #4\n    add r4, #0x14\n    cmp r6, #4\n    blt _0224D75E\n    add r0, r7, #0\n    mov r1, #0\n    bl Field3dObject_SetActiveFlag\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224D788(void) {
    /* Original at 0x0224D788 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r7, #0\n    add r6, r1, #0\n    mov r4, #0\n    add r5, #0x78\n    add r0, r5, #0\n    add r1, r6, #0\n    bl Field3dModelAnimation_Unload\n    add r4, r4, #1\n    add r5, #0x14\n    cmp r4, #4\n    blt _0224D794\n    add r0, r7, #0\n    mov r1, #0\n    mov r2, #0xcc\n    bl memset\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224D7B0(void) {
    /* Original at 0x0224D7B0 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0xce\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    add r1, sp, #0\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_CopyPositionVector\n    mov r1, #0xcf\n    lsl r1, r1, #4\n    ldr r2, [sp]\n    ldr r0, [r4, r1]\n    sub r0, r2, r0\n    bne _0224D7F8\n    add r0, r1, #4\n    ldr r2, [sp, #4]\n    ldr r0, [r4, r0]\n    cmp r2, r0\n    bge _0224D7F8\n    add r0, r1, #0\n    add r0, #8\n    ldr r2, [sp, #8]\n    ldr r0, [r4, r0]\n    cmp r2, r0\n    ble _0224D7F8\n    add r0, r1, #0\n    mov r2, #0\n    sub r0, #8\n    str r2, [r4, r0]\n    mov r2, #2\n    lsl r2, r2, #0x10\n    sub r0, r1, #4\n    str r2, [r4, r0]\n    b _0224D806\n    mov r1, #2\n    ldr r0, _0224D81C ; =0x00000CE8\n    lsl r1, r1, #0x10\n    str r1, [r4, r0]\n    lsr r1, r1, #1\n    add r0, r0, #4\n    str r1, [r4, r0]\n    mov r0, #0xcf\n    lsl r0, r0, #4\n    add r3, sp, #0\n    add r2, r4, r0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0224D81C: .word 0x00000CE8"
    );
    #endif
}

void ov02_0224D820(void) {
    /* Original at 0x0224D820 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov02_0224D7B0\n    mov r2, #0\n    add r1, r4, #0\n    add r0, r1, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0224D858\n    add r1, r4, #0\n    mov r0, #0xcc\n    mov r3, #0xce\n    add r1, #0x10\n    mul r0, r2\n    lsl r3, r3, #4\n    add r0, r1, r0\n    ldr r1, [r4, r3]\n    add r2, r3, #0\n    add r2, #8\n    add r3, #0xc\n    ldr r1, [r1, #0x40]\n    ldr r2, [r4, r2]\n    ldr r3, [r4, r3]\n    bl ov02_0224D698\n    pop {r4, pc}\n    add r2, r2, #1\n    add r1, #0xcc\n    cmp r2, #0x10\n    blt _0224D82C\n    bl GF_AssertFail\n    pop {r4, pc}"
    );
    #endif
}

void ov02_0224D868(void) {
    ov02_0224D700(0);
}

void ov02_0224D880(void) {
    /* Original at 0x0224D880 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r2, #0\n    mov r2, #0xd1\n    str r1, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0\n    lsl r2, r2, #4\n    bl memset\n    ldr r0, _0224D90C ; =0x00000CFC\n    mov r1, #4\n    add r0, r5, r0\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    add r0, r5, #0\n    mov r1, #0x86\n    mov r2, #8\n    mov r3, #4\n    bl Field3dModel_LoadFromFilesystem\n    mov r7, #0xcd\n    mov r4, #0\n    add r6, r5, #0\n    lsl r7, r7, #4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x86\n    add r1, r4, #4\n    mov r2, #0\n    mov r3, #4\n    bl GfGfxLoader_LoadFromNarc\n    str r0, [r6, r7]\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #4\n    blt _0224D8B4\n    add r4, r5, #0\n    mov r7, #0xcd\n    mov r6, #0\n    add r4, #0x10\n    lsl r7, r7, #4\n    ldr r2, _0224D90C ; =0x00000CFC\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r5, r2\n    add r3, r5, r7\n    bl ov02_0224D73C\n    add r6, r6, #1\n    add r4, #0xcc\n    cmp r6, #0x10\n    blt _0224D8D8\n    mov r1, #0xce\n    ldr r0, [sp, #4]\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    add r1, #0x10\n    ldr r0, [r0, #0x40]\n    add r1, r5, r1\n    bl PlayerAvatar_CopyPositionVector\n    ldr r0, _0224D910 ; =0x00000D0C\n    mov r1, #0\n    str r1, [r5, r0]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224D90C: .word 0x00000CFC\n    _0224D910: .word 0x00000D0C"
    );
    #endif
}

void ov02_0224D914(void) {
    /* Original at 0x0224D914 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r2, #0\n    add r4, r5, #0\n    ldr r7, _0224D94C ; =0x00000CFC\n    mov r6, #0\n    add r4, #0x10\n    add r0, r4, #0\n    add r1, r5, r7\n    bl ov02_0224D788\n    add r6, r6, #1\n    add r4, #0xcc\n    cmp r6, #0x10\n    blt _0224D920\n    add r0, r5, #0\n    bl Field3dModel_Unload\n    mov r6, #0xcd\n    mov r4, #0\n    lsl r6, r6, #4\n    ldr r0, [r5, r6]\n    bl Heap_Free\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0224D93C\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224D94C: .word 0x00000CFC"
    );
    #endif
}

void ov02_0224D950(void) {
    /* Original at 0x0224D950 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0224D988 ; =0x00000D0C\n    add r4, r2, #0\n    ldr r0, [r4, r1]\n    cmp r0, #0\n    bne _0224D986\n    add r0, r1, #0\n    sub r0, #0x28\n    ldr r0, [r4, r0]\n    sub r2, r0, #1\n    add r0, r1, #0\n    sub r0, #0x28\n    str r2, [r4, r0]\n    add r0, r1, #0\n    sub r0, #0x28\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bge _0224D980\n    mov r0, #4\n    sub r1, #0x28\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov02_0224D820\n    add r0, r4, #0\n    bl ov02_0224D868\n    pop {r4, pc}\n    _0224D988: .word 0x00000D0C"
    );
    #endif
}

void ov02_0224D98C(void) {
    Field3dObject_Draw(0);
}

void ov02_0224D9A4(void) {
    /* Original at 0x0224D9A4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r3, _0224D9B0 ; =Field3dObjectTaskManager_CreateTask\n    ldr r0, [r0, #4]\n    ldr r1, _0224D9B4 ; =ov02_0225395C\n    bx r3\n    nop\n    _0224D9B0: .word Field3dObjectTaskManager_CreateTask\n    _0224D9B4: .word ov02_0225395C"
    );
    #endif
}

void ov02_0224D9B8(void) {
    Field3dObjectTask_Delete();
}

void ov02_0224D9C0(void) {
    /* Original at 0x0224D9C0 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x28\n    add r4, r2, #0\n    mov r2, #0x45\n    add r5, r1, #0\n    add r0, r4, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    add r0, r4, #0\n    add r0, #0xdc\n    mov r1, #4\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    add r0, r4, #0\n    add r0, #0xdc\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x13\n    mov r2, #0x11\n    mov r3, #2\n    bl ov02_0224D0C8\n    ldr r0, [r5, #0x40]\n    add r1, r4, #0\n    bl ov02_0224D044\n    ldr r1, [r5, #0x24]\n    add r0, sp, #0x10\n    bl Camera_GetLookAtCamTarget\n    add r3, sp, #0x10\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0xf8\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r1, [r5, #0x24]\n    add r0, sp, #4\n    bl Camera_GetLookAtCamPos\n    add r3, sp, #4\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0xec\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, sp, #0x1c\n    str r0, [r2]\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    cmp r0, #3\n    bhi _0224DA7C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224DA46: ; jump table\n    mov r0, #2\n    ldr r1, [sp, #0x24]\n    lsl r0, r0, #0xe\n    sub r0, r1, r0\n    str r0, [sp, #0x24]\n    b _0224DA7C\n    mov r0, #2\n    ldr r1, [sp, #0x24]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #0x24]\n    b _0224DA7C\n    mov r0, #2\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0xe\n    sub r0, r1, r0\n    str r0, [sp, #0x1c]\n    b _0224DA7C\n    mov r0, #2\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #0x1c]\n    mov r0, #0x41\n    lsl r0, r0, #2\n    add r3, sp, #0x1c\n    add r2, r4, r0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, _0224DA9C ; =SEQ_SE_GS_ZUTUKI\n    bl PlaySE\n    ldr r0, _0224DAA0 ; =0x00000113\n    mov r1, #0\n    strb r1, [r4, r0]\n    add sp, #0x28\n    pop {r3, r4, r5, pc}\n    _0224DA9C: .word SEQ_SE_GS_ZUTUKI\n    _0224DAA0: .word 0x00000113"
    );
    #endif
}

void ov02_0224DAA4(void) {
    /* Original at 0x0224DAA4 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x28\n    add r4, r2, #0\n    mov r2, #0x45\n    add r5, r1, #0\n    add r0, r4, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    add r0, r4, #0\n    add r0, #0xdc\n    mov r1, #4\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    add r0, r4, #0\n    add r0, #0xdc\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x13\n    mov r2, #0x11\n    mov r3, #2\n    bl ov02_0224D0C8\n    ldr r0, [r5, #0x3c]\n    mov r1, #0xfd\n    add r2, r4, #0\n    bl ov02_0224CFD8\n    ldr r1, [r5, #0x24]\n    add r0, sp, #0x10\n    bl Camera_GetLookAtCamTarget\n    add r3, sp, #0x10\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0xf8\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r1, [r5, #0x24]\n    add r0, sp, #4\n    bl Camera_GetLookAtCamPos\n    add r3, sp, #4\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0xec\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, sp, #0x1c\n    str r0, [r2]\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    cmp r0, #3\n    bhi _0224DB62\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224DB2C: ; jump table\n    mov r0, #2\n    ldr r1, [sp, #0x24]\n    lsl r0, r0, #0xe\n    sub r0, r1, r0\n    str r0, [sp, #0x24]\n    b _0224DB62\n    mov r0, #2\n    ldr r1, [sp, #0x24]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #0x24]\n    b _0224DB62\n    mov r0, #2\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0xe\n    sub r0, r1, r0\n    str r0, [sp, #0x1c]\n    b _0224DB62\n    mov r0, #2\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #0x1c]\n    mov r0, #0x41\n    lsl r0, r0, #2\n    add r3, sp, #0x1c\n    add r2, r4, r0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, _0224DB84 ; =SEQ_SE_GS_ZUTUKI\n    bl PlaySE\n    ldr r0, _0224DB88 ; =0x00000113\n    mov r1, #0\n    strb r1, [r4, r0]\n    add sp, #0x28\n    pop {r3, r4, r5, pc}\n    nop\n    _0224DB84: .word SEQ_SE_GS_ZUTUKI\n    _0224DB88: .word 0x00000113"
    );
    #endif
}

void ov02_0224DB8C(void) {
    /* Original at 0x0224DB8C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0224DB98 ; =ov02_0224D144\n    add r0, r2, #0\n    add r2, #0xdc\n    add r1, r2, #0\n    bx r3\n    nop\n    _0224DB98: .word ov02_0224D144"
    );
    #endif
}

void ov02_0224DB9C(void) {
    /* Original at 0x0224DB9C */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r1, _0224DC50 ; =0x00000113\n    add r4, r2, #0\n    ldrb r0, [r4, r1]\n    cmp r0, #0\n    beq _0224DBB0\n    cmp r0, #1\n    beq _0224DC38\n    pop {r3, r4, r5, pc}\n    sub r0, r1, #1\n    ldrb r0, [r4, r0]\n    cmp r0, #2\n    bhs _0224DC1C\n    sub r0, r1, #3\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    bgt _0224DC12\n    mov r2, #1\n    sub r0, r1, #3\n    strb r2, [r4, r0]\n    sub r0, r1, #2\n    ldrb r0, [r4, r0]\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r2, r2, r1\n    add r1, r0, #0\n    add r1, #0xf2\n    strb r2, [r4, r1]\n    add r1, r0, #0\n    add r1, #0xf2\n    ldrb r1, [r4, r1]\n    cmp r1, #0\n    beq _0224DBF4\n    add r0, #0xe5\n    ldr r1, [r5, #0x24]\n    add r0, r4, r0\n    bl Camera_OffsetLookAtPosAndTarget\n    b _0224DC1C\n    add r0, r4, #0\n    ldr r1, [r5, #0x24]\n    add r0, #0xf8\n    bl Camera_SetLookAtCamTarget\n    add r0, r4, #0\n    ldr r1, [r5, #0x24]\n    add r0, #0xec\n    bl Camera_SetLookAtCamPos\n    ldr r0, _0224DC54 ; =0x00000112\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _0224DC1C\n    sub r0, r1, #3\n    ldrsb r0, [r4, r0]\n    sub r2, r0, #1\n    sub r0, r1, #3\n    strb r2, [r4, r0]\n    add r0, r4, #0\n    bl ov02_0224D178\n    cmp r0, #1\n    bne _0224DC4C\n    add r0, r4, #0\n    mov r1, #0\n    bl Field3dObject_SetActiveFlag\n    ldr r0, _0224DC50 ; =0x00000113\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    ldr r1, [r5, #0x24]\n    add r0, #0xf8\n    bl Camera_SetLookAtCamTarget\n    add r4, #0xec\n    ldr r1, [r5, #0x24]\n    add r0, r4, #0\n    bl Camera_SetLookAtCamPos\n    pop {r3, r4, r5, pc}\n    nop\n    _0224DC50: .word 0x00000113\n    _0224DC54: .word 0x00000112"
    );
    #endif
}

void ov02_0224DC58(void) {
    ov02_0224D1DC();
}

void ov02_0224DC64(void) {
    /* Original at 0x0224DC64 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r3, _0224DC70 ; =Field3dObjectTaskManager_CreateTask\n    ldr r0, [r0, #4]\n    ldr r1, _0224DC74 ; =ov02_022539A4\n    bx r3\n    nop\n    _0224DC70: .word Field3dObjectTaskManager_CreateTask\n    _0224DC74: .word ov02_022539A4"
    );
    #endif
}

void ov02_0224DC78(void) {
    /* Original at 0x0224DC78 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r3, _0224DC84 ; =Field3dObjectTaskManager_CreateTask\n    ldr r0, [r0, #4]\n    ldr r1, _0224DC88 ; =ov02_0225392C\n    bx r3\n    nop\n    _0224DC84: .word Field3dObjectTaskManager_CreateTask\n    _0224DC88: .word ov02_0225392C"
    );
    #endif
}

void ov02_0224DC8C(void) {
    Field3dObjectTask_Delete();
}

void ov02_0224DC94(void) {
    Field3dObjectTask_GetData(0, 1);
}

void ov02_0224DCB0(void) {
    /* Original at 0x0224DCB0 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r2, #0\n    str r1, [sp, #4]\n    ldr r2, _0224DD28 ; =0x00000E9C\n    add r0, r6, #0\n    mov r1, #0\n    bl memset\n    ldr r0, _0224DD2C ; =0x00000E88\n    mov r1, #4\n    add r0, r6, r0\n    mov r2, #0x20\n    bl HeapExp_FndInitAllocator\n    add r0, r6, #0\n    mov r1, #0x86\n    mov r2, #8\n    mov r3, #4\n    bl Field3dModel_LoadFromFilesystem\n    ldr r7, _0224DD30 ; =0x00000E68\n    mov r4, #0\n    add r5, r6, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x86\n    add r1, r4, #4\n    mov r2, #0\n    mov r3, #4\n    bl GfGfxLoader_LoadFromNarc\n    str r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0224DCE0\n    add r4, r6, #0\n    ldr r7, _0224DD30 ; =0x00000E68\n    mov r5, #0\n    add r4, #0x10\n    ldr r2, _0224DD2C ; =0x00000E88\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r6, r2\n    add r3, r6, r7\n    bl ov02_0224DEA8\n    add r5, r5, #1\n    add r4, #0xcc\n    cmp r5, #0x12\n    blt _0224DD02\n    ldr r1, _0224DD34 ; =0x00000E78\n    ldr r0, [sp, #4]\n    str r0, [r6, r1]\n    mov r0, #0\n    add r1, #0x20\n    strh r0, [r6, r1]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224DD28: .word 0x00000E9C\n    _0224DD2C: .word 0x00000E88\n    _0224DD30: .word 0x00000E68\n    _0224DD34: .word 0x00000E78"
    );
    #endif
}

void ov02_0224DD38(void) {
    ov02_0224DCB0(1);
}

void ov02_0224DD4C(void) {
    /* Original at 0x0224DD4C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r2, #0\n    add r4, r5, #0\n    ldr r7, _0224DD84 ; =0x00000E88\n    mov r6, #0\n    add r4, #0x10\n    add r0, r4, #0\n    add r1, r5, r7\n    bl ov02_0224DEF4\n    add r6, r6, #1\n    add r4, #0xcc\n    cmp r6, #0x12\n    blt _0224DD58\n    add r0, r5, #0\n    bl Field3dModel_Unload\n    ldr r6, _0224DD88 ; =0x00000E68\n    mov r4, #0\n    ldr r0, [r5, r6]\n    bl Heap_Free\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0224DD72\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224DD84: .word 0x00000E88\n    _0224DD88: .word 0x00000E68"
    );
    #endif
}

void ov02_0224DD8C(void) {
    /* Original at 0x0224DD8C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0224DDC4 ; =0x00000E98\n    add r4, r2, #0\n    ldrh r0, [r4, r1]\n    cmp r0, #0\n    bne _0224DDC2\n    add r0, r1, #0\n    sub r0, #0x1c\n    ldr r0, [r4, r0]\n    sub r2, r0, #1\n    add r0, r1, #0\n    sub r0, #0x1c\n    str r2, [r4, r0]\n    add r0, r1, #0\n    sub r0, #0x1c\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bge _0224DDBC\n    mov r0, #4\n    sub r1, #0x1c\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov02_0224DF1C\n    add r0, r4, #0\n    bl ov02_0224E008\n    pop {r4, pc}\n    _0224DDC4: .word 0x00000E98"
    );
    #endif
}

void ov02_0224DDC8(void) {
    Field3dObject_Draw(0);
}

void ov02_0224DDE0(void) {
    /* Original at 0x0224DDE0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r3, _0224DDEC ; =Field3dObjectTaskManager_CreateTask\n    ldr r0, [r0, #4]\n    ldr r1, _0224DDF0 ; =ov02_022539D4\n    bx r3\n    nop\n    _0224DDEC: .word Field3dObjectTaskManager_CreateTask\n    _0224DDF0: .word ov02_022539D4"
    );
    #endif
}

void ov02_0224DDF4(void) {
    /* Original at 0x0224DDF4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r3, _0224DE00 ; =Field3dObjectTaskManager_CreateTask\n    ldr r0, [r0, #4]\n    ldr r1, _0224DE04 ; =ov02_022539EC\n    bx r3\n    nop\n    _0224DE00: .word Field3dObjectTaskManager_CreateTask\n    _0224DE04: .word ov02_022539EC"
    );
    #endif
}

void ov02_0224DE08(void) {
    Field3dObjectTask_Delete();
}

void ov02_0224DE10(void) {
    /* Original at 0x0224DE10 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    add r4, r1, #0\n    add r5, r2, #0\n    add r6, r3, #0\n    cmp r0, #0\n    beq _0224DE26\n    bl GF_AssertFail\n    ldr r2, [r4, #4]\n    ldr r3, [r4, #8]\n    ldr r1, [r4]\n    add r0, r7, #0\n    add r2, r2, r5\n    add r3, r3, r6\n    bl Field3dObject_SetPosEx\n    add r0, r7, #0\n    mov r4, #0\n    add r5, r7, #0\n    mov r1, #1\n    add r0, #0xc8\n    str r1, [r0]\n    add r5, #0x78\n    add r6, r4, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl Field3dModelAnimation_FrameSet\n    add r4, r4, #1\n    add r5, #0x14\n    cmp r4, #4\n    blt _0224DE46\n    add r0, r7, #0\n    mov r1, #1\n    bl Field3dObject_SetActiveFlag\n    ldr r0, _0224DE68 ; =SEQ_SE_DP_UG_023\n    bl PlaySE\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224DE68: .word SEQ_SE_DP_UG_023"
    );
    #endif
}

void ov02_0224DE6C(void) {
    /* Original at 0x0224DE6C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    add r0, #0xc8\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0224DEA6\n    ldr r5, [sp]\n    mov r4, #1\n    mov r6, #0\n    add r5, #0x78\n    lsl r7, r4, #0xc\n    add r0, r5, #0\n    add r1, r7, #0\n    bl Field3dModelAnimation_FrameAdvanceAndCheck\n    add r6, r6, #1\n    and r4, r0\n    add r5, #0x14\n    cmp r6, #4\n    blt _0224DE82\n    cmp r4, #1\n    bne _0224DEA6\n    ldr r0, [sp]\n    mov r1, #0\n    add r0, #0xc8\n    str r1, [r0]\n    ldr r0, [sp]\n    bl Field3dObject_SetActiveFlag\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224DEA8(void) {
    /* Original at 0x0224DEA8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r1, [sp]\n    str r2, [sp, #4]\n    mov r1, #0\n    mov r2, #0xcc\n    add r7, r0, #0\n    add r5, r3, #0\n    bl memset\n    ldr r1, [sp]\n    add r0, r7, #0\n    bl Field3dObject_InitFromModel\n    add r4, r7, #0\n    mov r6, #0\n    add r4, #0x78\n    ldr r1, [sp]\n    ldr r2, [r5]\n    ldr r3, [sp, #4]\n    add r0, r4, #0\n    bl ov01_021FBE70\n    add r0, r7, #0\n    add r1, r4, #0\n    bl Field3dObject_AddAnimation\n    add r6, r6, #1\n    add r5, r5, #4\n    add r4, #0x14\n    cmp r6, #4\n    blt _0224DECA\n    add r0, r7, #0\n    mov r1, #0\n    bl Field3dObject_SetActiveFlag\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224DEF4(void) {
    /* Original at 0x0224DEF4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r7, #0\n    add r6, r1, #0\n    mov r4, #0\n    add r5, #0x78\n    add r0, r5, #0\n    add r1, r6, #0\n    bl Field3dModelAnimation_Unload\n    add r4, r4, #1\n    add r5, #0x14\n    cmp r4, #4\n    blt _0224DF00\n    add r0, r7, #0\n    mov r1, #0\n    mov r2, #0xcc\n    bl memset\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224DF1C(void) {
    /* Original at 0x0224DF1C */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #1\n    mov r1, #0x3a\n    mov r2, #3\n    lsl r0, r0, #0xc\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    add r0, r1, #4\n    lsl r2, r2, #0xc\n    sub r1, #8\n    str r2, [r4, r0]\n    ldr r0, [r4, r1]\n    add r1, sp, #0xc\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_CopyPositionVector\n    ldr r0, _0224E004 ; =0x00000E9A\n    ldrh r1, [r4, r0]\n    cmp r1, #0\n    beq _0224DFC6\n    sub r0, #0x22\n    ldr r0, [r4, r0]\n    bl FollowMon_GetMapObject\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    mov r5, #0\n    add r1, r4, #0\n    add r0, r1, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0224DF80\n    mov r3, #0x3a\n    lsl r3, r3, #6\n    add r1, r4, #0\n    mov r0, #0xcc\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    add r1, #0x10\n    mul r0, r5\n    add r0, r1, r0\n    ldr r3, [r4, r3]\n    add r1, sp, #0xc\n    bl ov02_0224DE10\n    b _0224DF88\n    add r5, r5, #1\n    add r1, #0xcc\n    cmp r5, #0x12\n    blt _0224DF5A\n    cmp r5, #0x12\n    bne _0224DF90\n    bl GF_AssertFail\n    mov r0, #0\n    add r2, r4, #0\n    add r1, r2, #0\n    add r1, #0xd8\n    ldr r1, [r1]\n    cmp r1, #0\n    bne _0224DFBC\n    add r2, r4, #0\n    mov r1, #0xcc\n    mov r3, #0x3a\n    add r2, #0x10\n    mul r1, r0\n    add r0, r2, r1\n    lsl r3, r3, #6\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r3, [r4, r3]\n    add r1, sp, #0\n    bl ov02_0224DE10\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    add r0, r0, #1\n    add r2, #0xcc\n    cmp r0, #0x12\n    blt _0224DF94\n    b _0224DFFA\n    mov r0, #0\n    add r2, r4, #0\n    add r1, r2, #0\n    add r1, #0xd8\n    ldr r1, [r1]\n    cmp r1, #0\n    bne _0224DFF2\n    add r2, r4, #0\n    mov r1, #0xcc\n    mov r3, #0x3a\n    add r2, #0x10\n    mul r1, r0\n    add r0, r2, r1\n    lsl r3, r3, #6\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r3, [r4, r3]\n    add r1, sp, #0xc\n    bl ov02_0224DE10\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    add r0, r0, #1\n    add r2, #0xcc\n    cmp r0, #0x12\n    blt _0224DFCA\n    bl GF_AssertFail\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    nop\n    _0224E004: .word 0x00000E9A"
    );
    #endif
}

void ov02_0224E008(void) {
    ov02_0224DE6C(0);
}

void ov02_0224E020(void) {
    /* Original at 0x0224E020 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0224E032\n    cmp r0, #1\n    beq _0224E04A\n    pop {r3, r4, r5, pc}\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4]\n    lsl r2, r1, #2\n    ldr r1, _0224E06C ; =ov02_02253A34\n    ldr r1, [r1, r2]\n    blx r1\n    cmp r0, #1\n    bne _0224E068\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    pop {r3, r4, r5, pc}\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4]\n    lsl r2, r1, #2\n    ldr r1, _0224E070 ; =ov02_02253A04\n    ldr r1, [r1, r2]\n    blx r1\n    ldr r0, [r4, #4]\n    mov r1, #1\n    strh r1, [r0]\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    nop\n    _0224E06C: .word ov02_02253A34\n    _0224E070: .word ov02_02253A04"
    );
    #endif
}

void ov02_0224E074(void) {
    /* Original at 0x0224E074 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r0, r3, #0\n    mov r1, #0x10\n    add r4, r2, #0\n    bl Heap_Alloc\n    add r6, r0, #0\n    add r2, r6, #0\n    mov r1, #0x10\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _0224E08C\n    ldr r1, _0224E0B4 ; =ov02_02253A1C\n    lsl r2, r4, #2\n    ldr r1, [r1, r2]\n    add r0, r7, #0\n    blx r1\n    str r0, [r6]\n    str r5, [r6, #4]\n    ldr r0, _0224E0B8 ; =ov02_0224E020\n    str r4, [r6, #0xc]\n    mov r2, #0\n    add r1, r6, #0\n    strh r2, [r5]\n    bl SysTask_CreateOnMainQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224E0B4: .word ov02_02253A1C\n    _0224E0B8: .word ov02_0224E020"
    );
    #endif
}

void ov02_0224E0BC(void) {
    /* Original at 0x0224E0BC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    bl ov02_0224E0D4\n    add r2, r0, #0\n    ldr r1, _0224E0D0 ; =ov02_0224E0EC\n    add r0, r4, #0\n    bl TaskManager_Call\n    pop {r4, pc}\n    _0224E0D0: .word ov02_0224E0EC"
    );
    #endif
}

void ov02_0224E0D4(void) {
    Heap_AllocAtEnd(4, 0, 0x20);
}

void ov02_0224E0EC(void) {
    /* Original at 0x0224E0EC */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r5, #0\n    cmp r0, #5\n    bls _0224E108\n    b _0224E21E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224E114: ; jump table\n    add r0, r6, #0\n    bl FollowMon_GetMapObject\n    bl MapObject_UnpauseMovement\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    ldr r0, [r4, #4]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _0224E21E\n    ldr r0, [r4, #8]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _0224E21E\n    add r0, r6, #0\n    bl FollowMon_GetMapObject\n    bl MapObject_PauseMovement\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224E21E\n    ldr r0, [r4, #4]\n    bl MapObject_GetXCoord\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #4]\n    bl MapObject_GetZCoord\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #4]\n    bl MapObject_GetFacingDirection\n    str r0, [r4, #0x14]\n    ldr r0, [r4, #8]\n    bl MapObject_GetXCoord\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #8]\n    bl MapObject_GetZCoord\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0xc\n    add r1, #0x18\n    bl ov02_0224E224\n    add r6, r0, #0\n    ldr r0, [r4, #4]\n    add r1, r6, #0\n    bl MapObject_SetHeldMovement\n    add r0, r6, #0\n    bl ov02_0224E2D4\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    bl MapObject_SetHeldMovement\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224E21E\n    ldr r0, [r4, #4]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _0224E21E\n    ldr r0, [r4, #8]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _0224E21E\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224E21E\n    ldr r0, [r4, #4]\n    bl MapObject_GetFacingDirection\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl ov02_0224E2A0\n    add r1, r0, #0\n    ldr r0, [r4, #4]\n    bl MapObject_SetHeldMovement\n    ldr r0, [r4, #0x14]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl ov02_0224E26C\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    bl MapObject_SetHeldMovement\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224E21E\n    ldr r0, [r4, #4]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _0224E21E\n    ldr r0, [r4, #8]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _0224E21E\n    ldr r0, [r4, #4]\n    bl MapObject_ClearHeldMovementIfActive\n    ldr r0, [r4, #8]\n    bl MapObject_ClearHeldMovementIfActive\n    add r0, r4, #0\n    mov r5, #1\n    bl Heap_Free\n    add r0, r5, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_0224E224(void) {
    /* Original at 0x0224E224 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r5, [r1]\n    ldr r3, [r0]\n    mov r4, #0xd\n    cmp r3, r5\n    bne _0224E246\n    ldr r1, [r1, #4]\n    ldr r0, [r0, #4]\n    cmp r0, r1\n    ble _0224E23C\n    mov r4, #0xc\n    b _0224E268\n    cmp r0, r1\n    blt _0224E268\n    bl GF_AssertFail\n    b _0224E268\n    ldr r2, [r0, #4]\n    ldr r0, [r1, #4]\n    cmp r2, r0\n    bne _0224E264\n    cmp r3, r5\n    ble _0224E256\n    mov r4, #0xe\n    b _0224E268\n    cmp r3, r5\n    bge _0224E25E\n    mov r4, #0xf\n    b _0224E268\n    bl GF_AssertFail\n    b _0224E268\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_0224E26C(void) {
    /* Original at 0x0224E26C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #3\n    bhi _0224E296\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224E27E: ; jump table\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #3\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov02_0224E2A0(void) {
    /* Original at 0x0224E2A0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #3\n    bhi _0224E2CA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224E2B2: ; jump table\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #3\n    pop {r3, pc}\n    mov r0, #2\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov02_0224E2D4(void) {
    /* Original at 0x0224E2D4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub r0, #0xc\n    cmp r0, #3\n    bhi _0224E300\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224E2E8: ; jump table\n    mov r0, #0xd\n    pop {r3, pc}\n    mov r0, #0xc\n    pop {r3, pc}\n    mov r0, #0xf\n    pop {r3, pc}\n    mov r0, #0xe\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov02_0224E308(void) {
    /* Original at 0x0224E308 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0224E318 ; =0x00000165\n    cmp r0, r1\n    bne _0224E312\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _0224E318: .word 0x00000165"
    );
    #endif
}

void ov02_0224E31C(void) {
    /* Original at 0x0224E31C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "sub r0, #0x20\n    asr r2, r0, #4\n    lsr r2, r2, #0x1b\n    add r2, r0, r2\n    sub r1, #0x20\n    asr r0, r1, #4\n    lsr r0, r0, #0x1b\n    add r0, r1, r0\n    asr r1, r0, #5\n    lsl r0, r1, #1\n    asr r2, r2, #5\n    add r0, r1, r0\n    add r0, r2, r0\n    bmi _0224E33C\n    cmp r0, #6\n    blt _0224E33E\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov02_0224E340(void) {
    PlayerAvatar_GetXCoord(*((u32*)(r0 + 0x40)));
    PlayerAvatar_GetZCoord(*((u32*)(r5 + 0x40)));
    ov02_0224E31C(r4, r0);
}

void ov02_0224E35C(void) {
    /* Original at 0x0224E35C */
    /* Requires manual decompilation - 157 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Save_VarsFlags_Get\n    add r6, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetCurrentPosition\n    ldr r0, [r5, #0xc]\n    bl Save_SafariZone_Get\n    add r4, r0, #0\n    ldr r0, [r5, #0x20]\n    ldr r0, [r0]\n    bl ov02_0224E308\n    cmp r0, #0\n    bne _0224E38E\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl Save_VarsFlags_CheckSafariSysFlag\n    cmp r0, #0\n    bne _0224E39E\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl sub_0202F620\n    cmp r0, #0\n    beq _0224E3AE\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl SafariZone_GetObjectUnlockLevel\n    cmp r0, #0\n    bne _0224E3BE\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    add r7, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetXCoord\n    add r4, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetZCoord\n    str r0, [sp, #8]\n    add r0, r7, #0\n    bl GetDeltaXByFacingDirection\n    add r6, r4, r0\n    add r0, r7, #0\n    bl GetDeltaYByFacingDirection\n    ldr r1, [sp, #8]\n    add r4, r1, r0\n    cmp r6, #0x20\n    blt _0224E3F8\n    cmp r6, #0x80\n    bge _0224E3F8\n    cmp r4, #0x20\n    blt _0224E3F8\n    cmp r4, #0x60\n    blt _0224E3FE\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    cmp r6, #0x20\n    blt _0224E40E\n    cmp r6, #0x80\n    bge _0224E40E\n    cmp r4, #0x20\n    blt _0224E40E\n    cmp r4, #0x60\n    blt _0224E414\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x40]\n    add r1, sp, #0x10\n    bl PlayerAvatar_CopyPositionVector\n    add r0, sp, #0xc\n    str r0, [sp]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x18]\n    add r0, r5, #0\n    bl sub_02054774\n    add r7, r0, #0\n    add r0, sp, #0xc\n    ldrb r0, [r0]\n    cmp r0, #1\n    beq _0224E43C\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    lsl r0, r4, #4\n    add r0, #8\n    cmp r0, #0\n    ble _0224E458\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    str r0, [sp, #4]\n    b _0224E468\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    str r0, [sp, #4]\n    lsl r0, r6, #4\n    add r0, #8\n    cmp r0, #0\n    ble _0224E482\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0224E490\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r4, r0, #0\n    ldr r0, [sp, #4]\n    bl _ffix\n    add r3, r0, #0\n    add r0, sp, #0xc\n    str r0, [sp]\n    ldr r1, [sp, #0x14]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl sub_02054774\n    add r1, sp, #0xc\n    ldrb r1, [r1]\n    cmp r1, #1\n    beq _0224E4BA\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    cmp r7, r0\n    bne _0224E4C4\n    add sp, #0x1c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224E4CC(void) {
    sub_0205BAD0();
}

void ov02_0224E4DC(void) {
    sub_0205BAE4();
}

void SafariDecoration_CreateArgs(void) {
    /* Original at 0x0224E4EC */
    /* Requires manual decompilation - 154 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    add r0, r1, #0\n    mov r1, #0x24\n    bl Heap_AllocAtEnd\n    mov r1, #0\n    mov r2, #0x24\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r5, #0\n    bl FieldSystem_GetSaveData\n    str r0, [r4]\n    mov r0, #0x43\n    lsl r0, r0, #2\n    add r1, r5, r0\n    add r0, r0, #5\n    str r1, [r4, #4]\n    add r0, r5, r0\n    str r0, [r4, #0x20]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetState\n    cmp r0, #2\n    bne _0224E528\n    mov r0, #1\n    b _0224E52A\n    mov r0, #0\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    strb r6, [r4, #0x18]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetXCoord\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetZCoord\n    lsl r0, r0, #0x10\n    asr r7, r0, #0x10\n    ldr r0, [r5, #0x40]\n    add r1, sp, #0x20\n    bl PlayerAvatar_CopyPositionVector\n    ldr r0, [sp, #0x14]\n    add r1, r7, #0\n    bl ov02_0224E31C\n    strb r0, [r4, #0x19]\n    add r0, sp, #0x18\n    str r0, [sp]\n    ldr r1, [sp, #0x24]\n    ldr r2, [sp, #0x20]\n    ldr r3, [sp, #0x28]\n    add r0, r5, #0\n    bl sub_02054774\n    str r0, [sp, #0x24]\n    add r1, sp, #0x18\n    ldrb r1, [r1]\n    cmp r1, #1\n    beq _0224E584\n    add sp, #0x2c\n    add r0, r4, #0\n    pop {r4, r5, r6, r7, pc}\n    asr r0, r0, #0xc\n    strb r0, [r4, #0x1a]\n    ldr r0, [sp, #0x10]\n    bl GetDeltaXByFacingDirection\n    ldr r1, [sp, #0x14]\n    add r0, r1, r0\n    strb r0, [r4, #9]\n    ldr r0, [sp, #0x10]\n    bl GetDeltaYByFacingDirection\n    add r0, r7, r0\n    strb r0, [r4, #0xb]\n    mov r0, #1\n    strb r0, [r4, #8]\n    ldr r0, [sp, #0x24]\n    add r2, r7, #0\n    str r0, [sp]\n    add r0, sp, #0x1c\n    str r0, [sp, #4]\n    add r0, sp, #0x18\n    add r0, #2\n    str r0, [sp, #8]\n    str r6, [sp, #0xc]\n    ldr r1, [sp, #0x14]\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    bl ov02_0224E828\n    cmp r0, #0\n    beq _0224E5D4\n    add r1, sp, #0x18\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    strb r0, [r4, #0xd]\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    strb r0, [r4, #0xf]\n    mov r0, #1\n    strb r0, [r4, #0xc]\n    ldr r0, [sp, #0x24]\n    add r2, r7, #0\n    str r0, [sp]\n    add r0, sp, #0x1c\n    str r0, [sp, #4]\n    add r0, sp, #0x18\n    add r0, #2\n    str r0, [sp, #8]\n    str r6, [sp, #0xc]\n    ldr r1, [sp, #0x14]\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    bl ov02_0224EB48\n    cmp r0, #0\n    beq _0224E606\n    add r1, sp, #0x18\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    strb r0, [r4, #0x11]\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    strb r0, [r4, #0x13]\n    mov r0, #1\n    strb r0, [r4, #0x10]\n    ldr r0, [sp, #0x24]\n    add r2, r7, #0\n    str r0, [sp]\n    add r0, sp, #0x1c\n    str r0, [sp, #4]\n    add r0, sp, #0x18\n    add r0, #2\n    str r0, [sp, #8]\n    str r6, [sp, #0xc]\n    ldr r1, [sp, #0x14]\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    bl ov02_0224EE4C\n    cmp r0, #0\n    beq _0224E638\n    add r1, sp, #0x18\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    strb r0, [r4, #0x15]\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    strb r0, [r4, #0x17]\n    mov r0, #1\n    strb r0, [r4, #0x14]\n    add r0, r4, #0\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224E640(void) {
    /* Original at 0x0224E640 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl Save_PlayerData_GetProfile\n    bl PlayerProfile_GetTrainerID\n    add r5, r0, #0\n    add r0, r4, #0\n    bl Save_SafariZone_Get\n    bl SafariZone_GetObjectUnlockLevel\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0xa\n    bl _u32_div_f\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #6\n    bhs _0224E672\n    mov r1, #3\n    bl _s32_div_f\n    b _0224E67C\n    sub r1, r0, #6\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    add r0, r0, #2\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    mov r0, #3\n    sub r0, r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    add r0, r0, #1\n    cmp r4, r0\n    blt _0224E692\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov02_0224E698(void) {
    /* Original at 0x0224E698 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetXCoord\n    lsl r0, r0, #0x10\n    asr r6, r0, #0x10\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetZCoord\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    ldr r0, [r5, #0x40]\n    add r1, sp, #0x14\n    bl PlayerAvatar_CopyPositionVector\n    ldr r0, [r5, #0xc]\n    bl Save_SafariZone_Get\n    mov r1, #0\n    bl SafariZone_GetAreaSet\n    add r2, r0, #0\n    add r0, r6, #0\n    sub r0, #0x20\n    asr r1, r0, #4\n    lsr r1, r1, #0x1b\n    add r1, r0, r1\n    add r0, r4, #0\n    sub r0, #0x20\n    asr r3, r0, #4\n    lsr r3, r3, #0x1b\n    add r3, r0, r3\n    asr r3, r3, #5\n    lsl r0, r3, #1\n    asr r1, r1, #5\n    add r0, r3, r0\n    add r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    mov r0, #0x7a\n    mul r0, r1\n    add r0, r2, r0\n    ldrb r0, [r0, #1]\n    cmp r0, #0x1e\n    blo _0224E706\n    add sp, #0x20\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetState\n    cmp r0, #2\n    beq _0224E716\n    add sp, #0x20\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0xc]\n    bl ov02_0224E640\n    cmp r0, #0\n    bne _0224E726\n    add sp, #0x20\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x18]\n    add r1, r6, #0\n    str r0, [sp]\n    add r0, sp, #0x10\n    add r0, #2\n    str r0, [sp, #4]\n    add r0, sp, #0x10\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl ov02_0224EE4C\n    cmp r0, #0\n    beq _0224E74E\n    add sp, #0x20\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #3\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224E754(void) {
    /* Original at 0x0224E754 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, [r4, #0x40]\n    str r1, [sp]\n    bl PlayerAvatar_GetFacingDirection\n    add r6, r0, #0\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetXCoord\n    add r5, r0, #0\n    add r0, r6, #0\n    bl GetDeltaXByFacingDirection\n    add r7, r5, r0\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetZCoord\n    add r5, r0, #0\n    add r0, r6, #0\n    bl GetDeltaYByFacingDirection\n    add r6, r5, r0\n    ldr r0, [r4, #0xc]\n    bl Save_PlayerData_GetProfile\n    bl PlayerProfile_GetTrainerGender\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    add r0, r7, #0\n    add r1, r6, #0\n    bl ov02_0224E31C\n    add r5, r0, #0\n    lsr r1, r7, #0x1f\n    lsl r0, r7, #0x1b\n    sub r0, r0, r1\n    mov r2, #0x1b\n    ror r0, r2\n    add r7, r1, r0\n    lsr r1, r6, #0x1f\n    lsl r0, r6, #0x1b\n    sub r0, r0, r1\n    ror r0, r2\n    add r6, r1, r0\n    ldr r0, [r4, #0xc]\n    bl Save_SafariZone_Get\n    mov r1, #0\n    bl SafariZone_GetAreaSet\n    mov r1, #0x7a\n    mul r1, r5\n    add r0, r0, r1\n    str r0, [sp, #8]\n    ldrb r0, [r0, #1]\n    mov r4, #0\n    cmp r0, #0\n    ble _0224E81C\n    ldr r0, [sp, #8]\n    add r5, r0, #2\n    ldrb r1, [r5]\n    ldr r2, [sp, #4]\n    add r0, sp, #0xc\n    bl GetSafariObjectConfig\n    ldrb r1, [r5, #1]\n    cmp r7, r1\n    blt _0224E810\n    ldrb r0, [r5, #3]\n    cmp r6, r0\n    bgt _0224E810\n    add r2, sp, #0xc\n    ldrb r2, [r2, #1]\n    lsl r3, r2, #0x1c\n    lsr r3, r3, #0x1d\n    add r1, r1, r3\n    cmp r7, r1\n    bge _0224E810\n    lsl r1, r2, #0x19\n    lsr r1, r1, #0x1d\n    sub r0, r0, r1\n    cmp r6, r0\n    ble _0224E810\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _0224E80A\n    strh r4, [r0]\n    add sp, #0x10\n    ldrb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    add r4, r4, #1\n    ldrb r0, [r0, #1]\n    add r5, r5, #4\n    cmp r4, r0\n    blt _0224E7D4\n    ldr r0, [sp]\n    mov r1, #0\n    strh r1, [r0]\n    mov r0, #0xff\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224E828(void) {
    /* Original at 0x0224E828 */
    /* Requires manual decompilation - 354 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x6c\n    add r4, r0, #0\n    add r5, r1, #0\n    ldr r0, [sp, #0x84]\n    str r2, [sp, #4]\n    ldr r1, _0224EB44 ; =ov02_02253A4C\n    str r0, [sp, #0x84]\n    ldr r0, [sp, #0x88]\n    ldrb r2, [r1, #2]\n    str r0, [sp, #0x88]\n    ldrb r1, [r1, #3]\n    str r3, [sp, #8]\n    add r0, sp, #0x68\n    strb r2, [r0, #1]\n    strb r1, [r0, #2]\n    ldr r1, [sp, #0x84]\n    ldr r6, [sp, #0x80]\n    strh r5, [r1]\n    ldr r2, [sp, #4]\n    ldr r1, [sp, #0x88]\n    strh r2, [r1]\n    ldr r1, [sp, #8]\n    cmp r1, #3\n    bls _0224E85C\n    b _0224EB3E\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0224E868: ; jump table\n    mov r0, #0\n    str r0, [sp, #0x50]\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    beq _0224E87E\n    mov r0, #1\n    b _0224E880\n    ldr r0, [sp, #0x50]\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    mov r0, #0\n    str r0, [sp, #0x54]\n    add r0, sp, #0x68\n    add r0, #1\n    ldrsb r0, [r0, r1]\n    ldr r7, [sp, #0x54]\n    str r0, [sp, #0x38]\n    add r0, sp, #0x70\n    ldrb r0, [r0, #0x1c]\n    str r0, [sp, #0x48]\n    lsl r0, r5, #4\n    str r0, [sp, #0x44]\n    add r0, #8\n    str r0, [sp, #0x44]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x40]\n    ldr r0, [sp, #0x38]\n    add r1, r7, r0\n    ldr r0, [sp, #4]\n    add r0, r0, r1\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #0x3c]\n    ldr r2, [sp, #0x3c]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl GetMetatileBehavior\n    str r0, [sp, #0x58]\n    ldr r2, [sp, #0x3c]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_020548C0\n    add r1, r0, #0\n    ldr r0, [sp, #0x58]\n    ldr r2, [sp, #0x48]\n    bl ov02_0224EF6C\n    cmp r0, #0\n    beq _0224E95C\n    ldr r0, [sp, #0x3c]\n    lsl r0, r0, #4\n    add r0, #8\n    cmp r0, #0\n    ble _0224E8F4\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    str r0, [sp, #0x14]\n    b _0224E904\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x44]\n    cmp r0, #0\n    ble _0224E91C\n    ldr r0, [sp, #0x40]\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0224E92A\n    ldr r0, [sp, #0x40]\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #0x5c]\n    ldr r0, [sp, #0x14]\n    bl _ffix\n    add r3, r0, #0\n    add r0, sp, #0x68\n    str r0, [sp]\n    ldr r2, [sp, #0x5c]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_02054774\n    add r1, sp, #0x68\n    ldrb r1, [r1]\n    cmp r1, #1\n    bne _0224E95C\n    cmp r0, r6\n    bne _0224E95C\n    ldr r0, [sp, #0x50]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x50]\n    ldr r0, [sp, #0x38]\n    add r7, r7, r0\n    ldr r0, [sp, #0x54]\n    add r0, r0, #1\n    str r0, [sp, #0x54]\n    cmp r0, #2\n    blt _0224E8A4\n    ldr r0, [sp, #0x50]\n    cmp r0, #2\n    beq _0224E972\n    b _0224EB3E\n    ldr r0, [sp, #0x84]\n    strh r5, [r0]\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    bne _0224E984\n    ldr r0, [sp, #4]\n    sub r1, r0, #1\n    ldr r0, [sp, #0x88]\n    b _0224E98A\n    ldr r0, [sp, #4]\n    add r1, r0, #2\n    ldr r0, [sp, #0x88]\n    strh r1, [r0]\n    add sp, #0x6c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r1, [sp, #8]\n    cmp r1, #2\n    bne _0224E99C\n    mov r1, #1\n    b _0224E99E\n    mov r1, #2\n    ldrsb r0, [r0, r1]\n    ldr r2, [sp, #4]\n    add r0, r5, r0\n    lsl r0, r0, #0x10\n    asr r5, r0, #0x10\n    add r0, r4, #0\n    add r1, r5, #0\n    bl GetMetatileBehavior\n    str r0, [sp, #0x20]\n    ldr r2, [sp, #4]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_020548C0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #4]\n    lsl r0, r0, #4\n    add r0, #8\n    cmp r0, #0\n    ble _0224E9DC\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    str r0, [sp, #0x10]\n    b _0224E9EC\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    str r0, [sp, #0x10]\n    lsl r0, r5, #4\n    str r0, [sp, #0x2c]\n    add r0, #8\n    str r0, [sp, #0x2c]\n    cmp r0, #0\n    ble _0224EA0A\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0224EA18\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r7, r0, #0\n    ldr r0, [sp, #0x10]\n    bl _ffix\n    add r3, r0, #0\n    add r0, sp, #0x68\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl sub_02054774\n    add r7, r0, #0\n    add r0, sp, #0x70\n    ldrb r0, [r0, #0x1c]\n    ldr r1, [sp, #0x18]\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x20]\n    ldr r2, [sp, #0x34]\n    bl ov02_0224EF6C\n    cmp r0, #0\n    beq _0224EA56\n    add r0, sp, #0x68\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0224EA56\n    cmp r7, r6\n    beq _0224EA5C\n    add sp, #0x6c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x2c]\n    add r7, sp, #0x68\n    lsl r0, r0, #0xc\n    add r7, #1\n    str r0, [sp, #0x4c]\n    mov r0, #0\n    ldrsb r1, [r7, r0]\n    ldr r0, [sp, #4]\n    add r0, r0, r1\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #0x30]\n    ldr r2, [sp, #0x30]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl GetMetatileBehavior\n    str r0, [sp, #0x24]\n    ldr r2, [sp, #0x30]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_020548C0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x30]\n    lsl r0, r0, #4\n    add r0, #8\n    cmp r0, #0\n    ble _0224EAAE\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    str r0, [sp, #0xc]\n    b _0224EABE\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    cmp r0, #0\n    ble _0224EAD6\n    ldr r0, [sp, #0x4c]\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0224EAE4\n    ldr r0, [sp, #0x4c]\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #0x60]\n    ldr r0, [sp, #0xc]\n    bl _ffix\n    add r3, r0, #0\n    add r0, sp, #0x68\n    str r0, [sp]\n    ldr r2, [sp, #0x60]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_02054774\n    str r0, [sp, #0x64]\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x1c]\n    ldr r2, [sp, #0x34]\n    bl ov02_0224EF6C\n    cmp r0, #0\n    beq _0224EB32\n    add r0, sp, #0x68\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0224EB32\n    ldr r0, [sp, #0x64]\n    cmp r0, r6\n    bne _0224EB32\n    ldr r0, [sp, #0x84]\n    strh r5, [r0]\n    ldr r1, [sp, #4]\n    ldr r0, [sp, #0x28]\n    add r1, r1, r0\n    ldr r0, [sp, #0x88]\n    add sp, #0x6c\n    strh r1, [r0]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x28]\n    add r7, r7, #1\n    add r0, r0, #1\n    str r0, [sp, #0x28]\n    cmp r0, #2\n    blt _0224EA6A\n    mov r0, #0\n    add sp, #0x6c\n    pop {r4, r5, r6, r7, pc}\n    _0224EB44: .word ov02_02253A4C"
    );
    #endif
}

void ov02_0224EB48(void) {
    /* Original at 0x0224EB48 */
    /* Requires manual decompilation - 340 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x68\n    add r4, r0, #0\n    ldr r0, [sp, #0x84]\n    str r1, [sp, #4]\n    str r0, [sp, #0x84]\n    ldr r0, [sp, #0x88]\n    ldr r1, _0224EE48 ; =ov02_02253A4C\n    str r0, [sp, #0x88]\n    add r5, r2, #0\n    add r2, r3, #0\n    ldrb r0, [r1]\n    add r3, sp, #0x64\n    ldr r6, [sp, #0x80]\n    strb r0, [r3, #1]\n    ldrb r0, [r1, #1]\n    cmp r2, #3\n    strb r0, [r3, #2]\n    ldr r1, [sp, #4]\n    ldr r0, [sp, #0x84]\n    strh r1, [r0]\n    ldr r0, [sp, #0x88]\n    strh r5, [r0]\n    bls _0224EB7A\n    b _0224EE42\n    add r0, r2, r2\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224EB86: ; jump table\n    cmp r2, #0\n    bne _0224EB96\n    mov r0, #1\n    b _0224EB98\n    mov r0, #2\n    ldrsb r0, [r3, r0]\n    ldr r1, [sp, #4]\n    add r0, r5, r0\n    lsl r0, r0, #0x10\n    asr r5, r0, #0x10\n    add r0, r4, #0\n    add r2, r5, #0\n    bl GetMetatileBehavior\n    str r0, [sp, #0x50]\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    add r2, r5, #0\n    bl sub_020548C0\n    str r0, [sp, #0x4c]\n    lsl r0, r5, #4\n    str r0, [sp, #0x24]\n    add r0, #8\n    str r0, [sp, #0x24]\n    cmp r0, #0\n    ble _0224EBD8\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    str r0, [sp, #0x14]\n    b _0224EBE8\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #4]\n    lsl r0, r0, #4\n    add r0, #8\n    cmp r0, #0\n    ble _0224EC04\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0224EC12\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r7, r0, #0\n    ldr r0, [sp, #0x14]\n    bl _ffix\n    add r3, r0, #0\n    add r0, sp, #0x64\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl sub_02054774\n    add r7, r0, #0\n    add r0, sp, #0x70\n    ldrb r0, [r0, #0x1c]\n    ldr r1, [sp, #0x4c]\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x50]\n    ldr r2, [sp, #0x30]\n    bl ov02_0224EF6C\n    cmp r0, #0\n    beq _0224EC50\n    add r0, sp, #0x64\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0224EC50\n    cmp r7, r6\n    beq _0224EC56\n    add sp, #0x68\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [sp, #0x48]\n    ldr r0, [sp, #0x24]\n    add r7, sp, #0x64\n    lsl r0, r0, #0xc\n    add r7, #1\n    str r0, [sp, #0x34]\n    mov r0, #0\n    ldrsb r1, [r7, r0]\n    ldr r0, [sp, #4]\n    add r2, r5, #0\n    sub r0, r0, r1\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #0x2c]\n    ldr r1, [sp, #0x2c]\n    add r0, r4, #0\n    bl GetMetatileBehavior\n    str r0, [sp, #0x20]\n    ldr r1, [sp, #0x2c]\n    add r0, r4, #0\n    add r2, r5, #0\n    bl sub_020548C0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    ble _0224ECA4\n    ldr r0, [sp, #0x34]\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    str r0, [sp, #0x10]\n    b _0224ECB4\n    ldr r0, [sp, #0x34]\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x2c]\n    lsl r0, r0, #4\n    add r0, #8\n    cmp r0, #0\n    ble _0224ECD0\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0224ECDE\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #0x54]\n    ldr r0, [sp, #0x10]\n    bl _ffix\n    add r3, r0, #0\n    add r0, sp, #0x64\n    str r0, [sp]\n    ldr r2, [sp, #0x54]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_02054774\n    str r0, [sp, #0x58]\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x1c]\n    ldr r2, [sp, #0x30]\n    bl ov02_0224EF6C\n    cmp r0, #0\n    beq _0224ED2C\n    add r0, sp, #0x64\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0224ED2C\n    ldr r0, [sp, #0x58]\n    cmp r0, r6\n    bne _0224ED2C\n    ldr r1, [sp, #4]\n    ldr r0, [sp, #0x48]\n    sub r1, r1, r0\n    ldr r0, [sp, #0x84]\n    strh r1, [r0]\n    ldr r0, [sp, #0x88]\n    add sp, #0x68\n    strh r5, [r0]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x48]\n    add r7, r7, #1\n    add r0, r0, #1\n    str r0, [sp, #0x48]\n    cmp r0, #2\n    blt _0224EC64\n    b _0224EE42\n    mov r0, #0\n    str r0, [sp, #0x44]\n    cmp r2, #2\n    bne _0224ED4E\n    ldr r0, [sp, #4]\n    sub r0, r0, #2\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #0xc]\n    b _0224ED58\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x18]\n    add r0, sp, #0x70\n    ldrb r0, [r0, #0x1c]\n    ldr r7, [sp, #0xc]\n    str r0, [sp, #0x40]\n    lsl r0, r5, #4\n    str r0, [sp, #0x3c]\n    add r0, #8\n    str r0, [sp, #0x3c]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x38]\n    lsl r0, r7, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #0x28]\n    ldr r1, [sp, #0x28]\n    add r0, r4, #0\n    add r2, r5, #0\n    bl GetMetatileBehavior\n    str r0, [sp, #0x5c]\n    ldr r1, [sp, #0x28]\n    add r0, r4, #0\n    add r2, r5, #0\n    bl sub_020548C0\n    add r1, r0, #0\n    ldr r0, [sp, #0x5c]\n    ldr r2, [sp, #0x40]\n    bl ov02_0224EF6C\n    cmp r0, #0\n    beq _0224EE20\n    ldr r0, [sp, #0x3c]\n    cmp r0, #0\n    ble _0224EDB4\n    ldr r0, [sp, #0x38]\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    str r0, [sp, #8]\n    b _0224EDC4\n    ldr r0, [sp, #0x38]\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x28]\n    lsl r0, r0, #4\n    add r0, #8\n    cmp r0, #0\n    ble _0224EDE0\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0224EDEE\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #0x60]\n    ldr r0, [sp, #8]\n    bl _ffix\n    add r3, r0, #0\n    add r0, sp, #0x64\n    str r0, [sp]\n    ldr r2, [sp, #0x60]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_02054774\n    add r1, sp, #0x64\n    ldrb r1, [r1]\n    cmp r1, #1\n    bne _0224EE20\n    cmp r0, r6\n    bne _0224EE20\n    ldr r0, [sp, #0x44]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x44]\n    ldr r0, [sp, #0x18]\n    add r7, r7, #1\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, #2\n    blt _0224ED70\n    ldr r0, [sp, #0x44]\n    cmp r0, #2\n    bne _0224EE42\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp, #0x84]\n    strh r1, [r0]\n    ldr r0, [sp, #0x88]\n    add sp, #0x68\n    strh r5, [r0]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x68\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224EE48: .word ov02_02253A4C"
    );
    #endif
}

void ov02_0224EE4C(void) {
    /* Original at 0x0224EE4C */
    /* Requires manual decompilation - 136 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    str r1, [sp, #0x14]\n    str r2, [sp, #0x18]\n    ldr r4, [sp, #0x38]\n    str r3, [sp, #0x1c]\n    str r4, [sp, #0x38]\n    ldr r4, [sp, #0x44]\n    ldr r6, [sp, #0x3c]\n    str r4, [sp, #0x44]\n    ldr r4, _0224EF68 ; =ov02_02253A4C\n    ldr r7, [sp, #0x40]\n    ldrb r5, [r4, #4]\n    add r4, sp, #0x20\n    str r0, [sp, #0x10]\n    strb r5, [r4]\n    ldr r4, _0224EF68 ; =ov02_02253A4C\n    ldrb r5, [r4, #5]\n    add r4, sp, #0x20\n    strb r5, [r4, #1]\n    ldr r4, [sp, #0x14]\n    strh r4, [r6]\n    ldr r4, [sp, #0x18]\n    strh r4, [r7]\n    ldr r4, [sp, #0x1c]\n    cmp r4, #3\n    bhi _0224EF60\n    add r4, r4, r4\n    add r4, pc\n    ldrh r4, [r4, #6]\n    lsl r4, r4, #0x10\n    asr r4, r4, #0x10\n    add pc, r4\n    _0224EE8E: ; jump table\n    ldr r4, [sp, #0x38]\n    str r4, [sp]\n    str r6, [sp, #4]\n    str r7, [sp, #8]\n    ldr r4, [sp, #0x44]\n    str r4, [sp, #0xc]\n    bl ov02_0224E828\n    cmp r0, #0\n    beq _0224EF60\n    mov r4, #0\n    add r5, sp, #0x20\n    ldr r0, [sp, #0x38]\n    mov r1, #0\n    str r0, [sp]\n    str r6, [sp, #4]\n    str r7, [sp, #8]\n    ldr r0, [sp, #0x44]\n    str r0, [sp, #0xc]\n    ldrsb r2, [r5, r1]\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    add r1, r1, r2\n    lsl r1, r1, #0x10\n    ldr r2, [sp, #0x18]\n    ldr r3, [sp, #0x1c]\n    asr r1, r1, #0x10\n    bl ov02_0224E828\n    cmp r0, #0\n    beq _0224EEF2\n    ldr r0, [sp, #0x14]\n    sub r0, r0, r4\n    strh r0, [r6]\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0\n    bne _0224EEE6\n    ldr r0, [sp, #0x18]\n    sub r0, r0, #1\n    b _0224EEEA\n    ldr r0, [sp, #0x18]\n    add r0, r0, #2\n    add sp, #0x24\n    strh r0, [r7]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #2\n    blt _0224EEAE\n    b _0224EF60\n    ldr r4, [sp, #0x38]\n    str r4, [sp]\n    str r6, [sp, #4]\n    str r7, [sp, #8]\n    ldr r4, [sp, #0x44]\n    str r4, [sp, #0xc]\n    bl ov02_0224EB48\n    cmp r0, #0\n    beq _0224EF60\n    mov r5, #0\n    add r4, sp, #0x20\n    ldr r0, [sp, #0x38]\n    mov r2, #0\n    str r0, [sp]\n    str r6, [sp, #4]\n    str r7, [sp, #8]\n    ldr r0, [sp, #0x44]\n    str r0, [sp, #0xc]\n    ldrsb r3, [r4, r2]\n    ldr r2, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    sub r2, r2, r3\n    lsl r2, r2, #0x10\n    ldr r1, [sp, #0x14]\n    ldr r3, [sp, #0x1c]\n    asr r2, r2, #0x10\n    bl ov02_0224EB48\n    cmp r0, #0\n    beq _0224EF58\n    ldr r0, [sp, #0x1c]\n    cmp r0, #2\n    bne _0224EF46\n    ldr r0, [sp, #0x14]\n    sub r0, r0, #2\n    b _0224EF4A\n    ldr r0, [sp, #0x14]\n    add r0, r0, #1\n    strh r0, [r6]\n    ldr r0, [sp, #0x18]\n    add sp, #0x24\n    add r0, r0, r5\n    strh r0, [r7]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r5, #2\n    blt _0224EF14\n    mov r0, #0\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0224EF68: .word ov02_02253A4C"
    );
    #endif
}

void ov02_0224EF6C(void) {
    /* Original at 0x0224EF6C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r2, #0\n    bne _0224EF78\n    bl ov02_0224E4CC\n    pop {r3, pc}\n    bl ov02_0224E4DC\n    pop {r3, pc}"
    );
    #endif
}

void FieldSystem_FollowMonInteract(void) {
    /* Original at 0x0224EF80 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0224EF8C ; =TaskManager_Call\n    ldr r0, [r0, #0x10]\n    ldr r1, _0224EF90 ; =Task_FollowMonInteract\n    mov r2, #0\n    bx r3\n    nop\n    _0224EF8C: .word TaskManager_Call\n    _0224EF90: .word Task_FollowMonInteract"
    );
    #endif
}

void ov02_0224EF94(void) {
    /* Original at 0x0224EF94 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x1b0\n    add r7, r0, #0\n    ldr r0, [r7, #0x20]\n    ldr r0, [r0]\n    bl MapHeader_GetMapSec\n    add r2, r0, #0\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r7, r0]\n    mov r1, #0xde\n    add r0, #0x14\n    add r2, r2, #1\n    bl ReadWholeNarcMemberByIdPair\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r1, [r7, r0]\n    mov r0, #0x9b\n    lsl r0, r0, #2\n    add r0, r1, r0\n    mov r1, #0xde\n    mov r2, #0\n    bl ReadWholeNarcMemberByIdPair\n    add r0, r7, #0\n    add r1, sp, #4\n    bl ov02_0224F058\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r7, r0]\n    add r3, sp, #0x20\n    str r0, [sp]\n    add r0, #0x14\n    str r0, [sp]\n    mov r0, #0\n    add r2, r0, #0\n    add r1, r2, #0\n    add r1, #0x1e\n    add r2, r2, #1\n    add r0, r0, #1\n    stmia r3!, {r1}\n    cmp r2, #0xc\n    blt _0224EFE2\n    add r2, sp, #0x20\n    lsl r1, r0, #2\n    mov r3, #0\n    add r1, r2, r1\n    stmia r1!, {r3}\n    add r3, r3, #1\n    add r0, r0, #1\n    cmp r3, #0x1e\n    blt _0224EFF8\n    add r2, sp, #0x20\n    lsl r1, r0, #2\n    mov r3, #0x2a\n    add r1, r2, r1\n    stmia r1!, {r3}\n    add r3, r3, #1\n    add r0, r0, #1\n    cmp r3, #0x64\n    blt _0224F00A\n    mov r5, #0\n    add r4, sp, #0x20\n    ldr r1, [r4]\n    mov r0, #0x14\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp]\n    add r6, r0, r2\n    ldrh r0, [r6, #0xa]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x16\n    beq _0224F044\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, sp, #4\n    bl ov02_0224F108\n    cmp r0, #0\n    beq _0224F044\n    ldrh r0, [r6, #0xa]\n    add sp, #0x1b0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x16\n    pop {r3, r4, r5, r6, r7, pc}\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #0x64\n    blt _0224F018\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #0x1b0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224F058(void) {
    /* Original at 0x0224F058 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    add r4, r1, #0\n    bl SaveArray_Party_Get\n    bl GetFirstAliveMonInParty_CrashIfNone\n    mov r1, #5\n    mov r2, #0\n    add r6, r0, #0\n    bl GetMonData\n    mov r1, #0x12\n    lsl r1, r1, #4\n    ldr r2, [r5, r1]\n    ldr r1, _0224F100 ; =0x0000087E\n    strh r0, [r2, r1]\n    add r0, r6, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x12\n    lsl r1, r1, #4\n    ldr r2, [r5, r1]\n    ldr r1, _0224F104 ; =0x0000087D\n    strb r0, [r2, r1]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov02_0224F324\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov02_0224F4BC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov02_0224F580\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov02_0224F5D0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov02_0224F5FC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov02_0224F644\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov02_0224F64C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov02_0224F698\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r3, [r5, r0]\n    ldr r2, _0224F100 ; =0x0000087E\n    add r0, r5, #0\n    ldrh r1, [r3, r2]\n    sub r2, r2, #1\n    ldrb r2, [r3, r2]\n    add r3, r4, #0\n    bl ov02_0224F6AC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov02_0224F728\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r1, [r5, r0]\n    ldr r0, _0224F100 ; =0x0000087E\n    ldrh r0, [r1, r0]\n    add r1, r4, #0\n    bl ov02_0224F76C\n    pop {r4, r5, r6, pc}\n    _0224F100: .word 0x0000087E\n    _0224F104: .word 0x0000087D"
    );
    #endif
}

void ov02_0224F108(void) {
    /* Original at 0x0224F108 */
    /* Requires manual decompilation - 261 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    bl LCRandom\n    mov r1, #0x64\n    bl _s32_div_f\n    ldrb r0, [r5, #0x11]\n    cmp r1, r0\n    blt _0224F124\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r7, [r5, #0x12]\n    cmp r7, #0\n    beq _0224F13E\n    ldr r0, [r6, #0xc]\n    bl Save_VarsFlags_Get\n    add r1, r7, #0\n    bl Save_VarsFlags_CheckFlagInArray\n    cmp r0, #0\n    bne _0224F13E\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #3]\n    lsl r0, r0, #0x1b\n    lsr r1, r0, #0x1b\n    beq _0224F15E\n    cmp r1, #9\n    bne _0224F154\n    ldrb r0, [r4]\n    cmp r0, #0\n    bne _0224F15E\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r4, #1]\n    cmp r1, r0\n    beq _0224F15E\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r1, [r5]\n    cmp r1, #0\n    beq _0224F16E\n    ldrb r0, [r4, #2]\n    cmp r1, r0\n    beq _0224F16E\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #2]\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x1d\n    beq _0224F19C\n    cmp r1, #7\n    ldrb r0, [r4, #3]\n    bne _0224F194\n    cmp r0, #2\n    beq _0224F19C\n    cmp r0, #3\n    beq _0224F19C\n    cmp r0, #4\n    beq _0224F19C\n    cmp r0, #5\n    beq _0224F19C\n    cmp r0, #8\n    beq _0224F19C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r1, r0\n    beq _0224F19C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5, #0xa]\n    lsl r0, r0, #0x1d\n    lsr r1, r0, #0x1d\n    beq _0224F1BA\n    cmp r1, #5\n    ldrb r0, [r4, #0xc]\n    bne _0224F1B2\n    cmp r0, #5\n    bhs _0224F1BA\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r1, r0\n    beq _0224F1BA\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #0x10]\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x1d\n    beq _0224F1D8\n    cmp r1, #4\n    ldrb r0, [r4, #0xd]\n    bne _0224F1D0\n    cmp r0, #4\n    bhs _0224F1D8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r1, r0\n    beq _0224F1D8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #0x10]\n    lsl r0, r0, #0x1d\n    lsr r1, r0, #0x1e\n    beq _0224F1EA\n    ldrb r0, [r4, #4]\n    cmp r1, r0\n    beq _0224F1EA\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #0x10]\n    lsl r0, r0, #0x1b\n    lsr r1, r0, #0x1e\n    beq _0224F212\n    cmp r1, #3\n    bne _0224F200\n    ldrb r0, [r4, #0xe]\n    cmp r0, #0\n    bne _0224F200\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r1, #1\n    bne _0224F20E\n    ldrb r0, [r4, #0xf]\n    cmp r0, #0\n    bne _0224F20E\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #4]\n    lsl r0, r0, #0x1b\n    lsr r1, r0, #0x1b\n    beq _0224F22A\n    ldrb r0, [r4, #5]\n    cmp r1, r0\n    beq _0224F22A\n    ldrb r0, [r4, #6]\n    cmp r1, r0\n    beq _0224F22A\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5, #8]\n    lsl r0, r0, #0x1d\n    lsr r1, r0, #0x1d\n    beq _0224F23C\n    ldrb r0, [r4, #0x11]\n    cmp r1, r0\n    beq _0224F23C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r1, [r5, #0xe]\n    cmp r1, #0\n    beq _0224F24C\n    ldrb r0, [r4, #0x12]\n    cmp r1, r0\n    beq _0224F24C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r1, [r5, #5]\n    cmp r1, #0\n    beq _0224F25C\n    ldrb r0, [r4, #0x13]\n    cmp r1, r0\n    beq _0224F25C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5, #0xc]\n    cmp r0, #0\n    beq _0224F26E\n    sub r1, r0, #1\n    ldrh r0, [r4, #0x1a]\n    cmp r1, r0\n    beq _0224F26E\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5, #0xa]\n    lsl r0, r0, #0x1a\n    lsr r1, r0, #0x1d\n    beq _0224F280\n    ldrb r0, [r4, #0x14]\n    cmp r1, r0\n    beq _0224F280\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #1]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    beq _0224F298\n    mov r1, #0x15\n    ldrsb r1, [r4, r1]\n    bl ov02_02250628\n    cmp r0, #0\n    bne _0224F298\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #4]\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x1d\n    beq _0224F2AA\n    ldrb r0, [r4, #0x16]\n    cmp r1, r0\n    beq _0224F2AA\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #1]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    beq _0224F2C0\n    ldrb r1, [r4, #7]\n    bl ov02_02250594\n    cmp r0, #0\n    bne _0224F2C0\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #2]\n    lsl r0, r0, #0x1d\n    lsr r1, r0, #0x1d\n    beq _0224F2D2\n    ldrb r0, [r4, #8]\n    cmp r1, r0\n    beq _0224F2D2\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #6]\n    cmp r0, #0\n    beq _0224F2E6\n    ldrb r1, [r4, #0xa]\n    bl ov02_022506D4\n    cmp r0, #0\n    bne _0224F2E6\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #7]\n    cmp r0, #0\n    beq _0224F2FA\n    ldrb r1, [r4, #0xb]\n    bl ov02_02250738\n    cmp r0, #0\n    bne _0224F2FA\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #2]\n    lsl r0, r0, #0x1b\n    lsr r1, r0, #0x1e\n    beq _0224F30C\n    ldrb r0, [r4, #9]\n    cmp r1, r0\n    beq _0224F30C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5, #8]\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x1d\n    beq _0224F31E\n    ldrb r0, [r4, #0x17]\n    cmp r1, r0\n    beq _0224F31E\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224F324(void) {
    /* Original at 0x0224F324 */
    /* Requires manual decompilation - 185 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r1, #0\n    mov r1, #6\n    mov r2, #0\n    add r7, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0224F34E\n    mov r1, #1\n    lsl r0, r0, #0x10\n    strb r1, [r5]\n    lsr r0, r0, #0x10\n    mov r1, #5\n    mov r2, #0xb\n    bl GetItemAttr\n    bl ov02_0224F820\n    b _0224F354\n    mov r0, #0\n    strb r0, [r5]\n    mov r0, #8\n    strb r0, [r5, #1]\n    add r0, r7, #0\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    add r4, r0, #0\n    add r0, r7, #0\n    mov r1, #0xa4\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    mov r0, #0x64\n    mul r0, r4\n    bl _s32_div_f\n    cmp r0, #0x64\n    bne _0224F380\n    mov r0, #1\n    strb r0, [r5, #2]\n    b _0224F3A2\n    cmp r0, #0x4b\n    blt _0224F38A\n    mov r0, #2\n    strb r0, [r5, #2]\n    b _0224F3A2\n    cmp r0, #0x32\n    blt _0224F394\n    mov r0, #3\n    strb r0, [r5, #2]\n    b _0224F3A2\n    cmp r0, #0x19\n    blt _0224F39E\n    mov r0, #4\n    strb r0, [r5, #2]\n    b _0224F3A2\n    mov r0, #5\n    strb r0, [r5, #2]\n    add r0, r7, #0\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x88\n    tst r1, r0\n    beq _0224F3B8\n    mov r0, #5\n    strb r0, [r5, #3]\n    b _0224F3FA\n    mov r1, #7\n    tst r1, r0\n    beq _0224F3C4\n    mov r0, #8\n    strb r0, [r5, #3]\n    b _0224F3FA\n    mov r1, #0x10\n    tst r1, r0\n    beq _0224F3D0\n    mov r0, #2\n    strb r0, [r5, #3]\n    b _0224F3FA\n    mov r1, #0x20\n    tst r1, r0\n    beq _0224F3DC\n    mov r0, #3\n    strb r0, [r5, #3]\n    b _0224F3FA\n    mov r1, #0x40\n    tst r1, r0\n    beq _0224F3E8\n    mov r0, #4\n    strb r0, [r5, #3]\n    b _0224F3FA\n    cmp r0, #0\n    bne _0224F3F2\n    mov r0, #1\n    strb r0, [r5, #3]\n    b _0224F3FA\n    bl GF_AssertFail\n    mov r0, #1\n    strb r0, [r5, #3]\n    add r0, r7, #0\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #2\n    cmp r1, #0x32\n    blt _0224F410\n    mov r0, #4\n    strb r0, [r5, #4]\n    b _0224F420\n    sub r0, r0, #2\n    cmp r0, #0x32\n    bgt _0224F41C\n    mov r0, #6\n    strb r0, [r5, #4]\n    b _0224F420\n    mov r0, #5\n    strb r0, [r5, #4]\n    add r0, r7, #0\n    mov r1, #0xb1\n    mov r2, #0\n    bl GetMonData\n    add r4, r0, #0\n    add r0, r7, #0\n    mov r1, #0xb2\n    mov r2, #0\n    bl GetMonData\n    add r6, r0, #0\n    add r0, r4, #0\n    bl ov02_0224F79C\n    strb r0, [r5, #5]\n    add r0, r6, #0\n    bl ov02_0224F79C\n    strb r0, [r5, #6]\n    add r0, r7, #0\n    mov r1, #9\n    mov r2, #0\n    bl GetMonData\n    strb r0, [r5, #7]\n    add r0, r7, #0\n    bl GetMonNature\n    lsl r1, r0, #2\n    ldr r0, _0224F4B4 ; =ov02_02253AC0\n    mov r2, #0\n    ldr r0, [r0, r1]\n    mov r1, #0x6f\n    strb r0, [r5, #8]\n    add r0, r7, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _0224F474\n    mov r0, #1\n    b _0224F476\n    mov r0, #2\n    ldr r3, _0224F4B8 ; =ov02_02253A5C\n    strb r0, [r5, #9]\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0\n    add r6, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    mov r4, #0\n    str r0, [r2]\n    strb r4, [r5, #0xb]\n    add r5, #0xb\n    ldr r1, [r6]\n    add r0, r7, #0\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r4\n    ldrb r1, [r5]\n    add r4, r4, #1\n    add r6, r6, #4\n    orr r0, r1\n    strb r0, [r5]\n    cmp r4, #5\n    blt _0224F490\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0224F4B4: .word ov02_02253AC0\n    _0224F4B8: .word ov02_02253A5C"
    );
    #endif
}

void ov02_0224F4BC(void) {
    /* Original at 0x0224F4BC */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    add r5, r1, #0\n    mov r0, #0\n    strb r0, [r5, #0xc]\n    strb r0, [r5, #0xe]\n    strb r0, [r5, #0xf]\n    strb r0, [r5, #0x10]\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetXCoord\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetZCoord\n    str r0, [sp]\n    ldr r0, [r4, #0x3c]\n    bl MapObjectManager_GetObjectCount\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x3c]\n    bl MapObjectManager_GetObjects\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    ble _0224F57A\n    add r7, r5, #0\n    add r7, #0xc\n    ldr r0, [sp, #0x10]\n    bl MapObject_CheckActive\n    cmp r0, #1\n    bne _0224F568\n    ldr r0, [sp, #0x10]\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    ldr r0, [sp, #0x10]\n    bl MapObject_GetZCoord\n    ldr r1, [sp, #4]\n    sub r6, r1, r4\n    ldr r1, [sp]\n    sub r4, r1, r0\n    ldr r0, [sp, #0x10]\n    bl MapObject_GetSpriteID\n    cmp r0, #0x54\n    bne _0224F52C\n    mov r0, #1\n    strb r0, [r5, #0xf]\n    b _0224F568\n    cmp r0, #0x55\n    bne _0224F536\n    mov r0, #1\n    strb r0, [r5, #0xe]\n    b _0224F568\n    cmp r0, #0x56\n    bne _0224F540\n    mov r0, #1\n    strb r0, [r5, #0x10]\n    b _0224F568\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    blt _0224F568\n    cmp r6, #1\n    bgt _0224F568\n    cmp r4, r0\n    blt _0224F568\n    cmp r4, #1\n    bgt _0224F568\n    ldr r0, [sp, #0x10]\n    bl MapObject_GetID\n    cmp r0, #0xfd\n    beq _0224F568\n    cmp r0, #0xff\n    beq _0224F568\n    ldrb r0, [r7]\n    add r0, r0, #1\n    strb r0, [r7]\n    add r0, sp, #0x10\n    bl MapObjectArray_NextObject2\n    ldr r0, [sp, #0xc]\n    add r1, r0, #1\n    ldr r0, [sp, #8]\n    str r1, [sp, #0xc]\n    cmp r1, r0\n    blt _0224F4FC\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224F580(void) {
    /* Original at 0x0224F580 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    str r1, [sp, #4]\n    mov r4, #0\n    bl Field_GetBgEvents\n    add r5, r0, #0\n    ldr r0, [sp]\n    bl Field_GetNumBgEvents\n    add r7, r0, #0\n    beq _0224F5C6\n    cmp r5, #0\n    beq _0224F5C6\n    add r6, r4, #0\n    cmp r7, #0\n    ble _0224F5C6\n    ldrh r0, [r5, #2]\n    cmp r0, #2\n    bne _0224F5BE\n    ldrh r0, [r5]\n    bl HiddenItemScriptNoToFlagId\n    add r1, r0, #0\n    ldr r0, [sp]\n    bl FieldSystem_FlagCheck\n    cmp r0, #0\n    bne _0224F5BE\n    add r4, r4, #1\n    add r6, r6, #1\n    add r5, #0x14\n    cmp r6, r7\n    blt _0224F5A4\n    ldr r0, [sp, #4]\n    strb r4, [r0, #0xd]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224F5D0(void) {
    /* Original at 0x0224F5D0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, [r0, #0xc]\n    add r4, r1, #0\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetWeatherType\n    cmp r0, #0\n    beq _0224F5E8\n    cmp r0, #1\n    beq _0224F5EE\n    b _0224F5F4\n    mov r0, #1\n    strb r0, [r4, #0x11]\n    pop {r4, pc}\n    mov r0, #3\n    strb r0, [r4, #0x11]\n    pop {r4, pc}\n    mov r0, #0\n    strb r0, [r4, #0x11]\n    pop {r4, pc}"
    );
    #endif
}

void ov02_0224F5FC(void) {
    /* Original at 0x0224F5FC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl FollowMon_GetMapObject\n    bl MapObject_GetXCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    bl MapObject_GetZCoord\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl GetMetatileBehavior\n    mov r1, #0x12\n    strb r0, [r4, #0x12]\n    lsl r1, r1, #4\n    ldr r2, [r5, r1]\n    ldr r1, _0224F640 ; =0x00000882\n    strh r0, [r2, r1]\n    bl MetatileBehavior_CanGenerateWalkingEncounters\n    cmp r0, #0\n    beq _0224F63A\n    mov r0, #1\n    strb r0, [r4, #0x13]\n    pop {r4, r5, r6, pc}\n    mov r0, #2\n    strb r0, [r4, #0x13]\n    pop {r4, r5, r6, pc}\n    _0224F640: .word 0x00000882"
    );
    #endif
}

void ov02_0224F644(void) {
    /* Original at 0x0224F644 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x20]\n    ldr r0, [r0]\n    strh r0, [r1, #0x1a]\n    bx lr"
    );
    #endif
}

void ov02_0224F64C(void) {
    /* Original at 0x0224F64C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl Field_GetTimeOfDay\n    cmp r0, #4\n    bhi _0224F68C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224F664: ; jump table\n    mov r0, #1\n    strb r0, [r4, #0x14]\n    pop {r4, pc}\n    mov r0, #2\n    strb r0, [r4, #0x14]\n    pop {r4, pc}\n    mov r0, #3\n    strb r0, [r4, #0x14]\n    pop {r4, pc}\n    mov r0, #4\n    strb r0, [r4, #0x14]\n    pop {r4, pc}\n    mov r0, #5\n    strb r0, [r4, #0x14]\n    pop {r4, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    strb r0, [r4, #0x14]\n    pop {r4, pc}"
    );
    #endif
}

void ov02_0224F698(void) {
    FieldSystem_UnkSub108_GetMonMood(0x42);
}

void ov02_0224F6AC(void) {
    /* Original at 0x0224F6AC */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    ldr r0, [r0, #0xc]\n    add r5, r3, #0\n    bl SaveArray_Party_Get\n    add r4, r0, #0\n    bl GetIdxOfFirstAliveMonInParty_CrashIfNone\n    add r6, r0, #0\n    add r0, r4, #0\n    add r1, sp, #8\n    add r2, r6, #0\n    bl Party_GetMonAprijuiceModifiers\n    add r0, r4, #0\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    add r1, r0, #0\n    add r0, sp, #0\n    add r2, sp, #8\n    mov r3, #0xb\n    bl CalcMonPokeathlonStars\n    add r0, sp, #0\n    ldrh r2, [r0]\n    lsl r0, r2, #0x1d\n    lsl r2, r2, #0x11\n    lsr r1, r0, #0x1d\n    lsr r2, r2, #0x1d\n    mov r0, #1\n    cmp r1, r2\n    bhs _0224F6F4\n    add r1, r2, #0\n    mov r0, #2\n    add r2, sp, #0\n    ldrh r2, [r2]\n    lsl r2, r2, #0x14\n    lsr r2, r2, #0x1d\n    cmp r1, r2\n    bhs _0224F704\n    add r1, r2, #0\n    mov r0, #4\n    add r2, sp, #0\n    ldrh r2, [r2]\n    lsl r2, r2, #0x1a\n    lsr r2, r2, #0x1d\n    cmp r1, r2\n    bhs _0224F714\n    add r1, r2, #0\n    mov r0, #3\n    add r2, sp, #0\n    ldrh r2, [r2]\n    lsl r2, r2, #0x17\n    lsr r2, r2, #0x1d\n    cmp r1, r2\n    bhs _0224F722\n    mov r0, #5\n    strb r0, [r5, #0x16]\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_0224F728(void) {
    /* Original at 0x0224F728 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r0, #0xe4\n    ldr r0, [r0]\n    add r4, r1, #0\n    bl MapObject_GetFacingDirection\n    cmp r0, #3\n    bhi _0224F764\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224F744: ; jump table\n    mov r0, #3\n    strb r0, [r4, #0x17]\n    pop {r4, pc}\n    mov r0, #4\n    strb r0, [r4, #0x17]\n    pop {r4, pc}\n    mov r0, #2\n    strb r0, [r4, #0x17]\n    pop {r4, pc}\n    mov r0, #1\n    strb r0, [r4, #0x17]\n    pop {r4, pc}\n    mov r0, #0\n    strb r0, [r4, #0x17]\n    pop {r4, pc}"
    );
    #endif
}

void ov02_0224F76C(void) {
    /* Original at 0x0224F76C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r5, #0\n    ble _0224F77C\n    ldr r0, _0224F798 ; =0x000001ED\n    cmp r5, r0\n    ble _0224F782\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}\n    mov r0, #0xe9\n    mov r1, #0\n    mov r2, #0xb\n    bl AllocAtEndAndReadWholeNarcMemberByIdPair\n    sub r1, r5, #1\n    ldrb r1, [r0, r1]\n    strb r1, [r4, #0xa]\n    bl Heap_Free\n    pop {r3, r4, r5, pc}\n    _0224F798: .word 0x000001ED"
    );
    #endif
}

void ov02_0224F79C(void) {
    /* Original at 0x0224F79C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0x11\n    bhi _0224F816\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224F7AE: ; jump table\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #7\n    pop {r3, pc}\n    mov r0, #0xa\n    pop {r3, pc}\n    mov r0, #8\n    pop {r3, pc}\n    mov r0, #9\n    pop {r3, pc}\n    mov r0, #0xd\n    pop {r3, pc}\n    mov r0, #0xc\n    pop {r3, pc}\n    mov r0, #0xe\n    pop {r3, pc}\n    mov r0, #0x11\n    pop {r3, pc}\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #3\n    pop {r3, pc}\n    mov r0, #5\n    pop {r3, pc}\n    mov r0, #4\n    pop {r3, pc}\n    mov r0, #0xb\n    pop {r3, pc}\n    mov r0, #6\n    pop {r3, pc}\n    mov r0, #0xf\n    pop {r3, pc}\n    mov r0, #0x10\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov02_0224F820(void) {
    /* Original at 0x0224F820 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #6\n    bhi _0224F85C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224F832: ; jump table\n    mov r0, #4\n    pop {r3, pc}\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #7\n    pop {r3, pc}\n    mov r0, #6\n    pop {r3, pc}\n    mov r0, #5\n    pop {r3, pc}\n    mov r0, #3\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #8\n    pop {r3, pc}"
    );
    #endif
}

void ov02_0224F864(void) {
    /* Original at 0x0224F864 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0224F87C ; =0x00000884\n    bl Heap_Alloc\n    ldr r2, _0224F87C ; =0x00000884\n    mov r1, #0\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _0224F87C: .word 0x00000884"
    );
    #endif
}

void ov02_0224F880(void) {
    /* Original at 0x0224F880 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r2, r1, #0\n    ldr r0, _0224F8E4 ; =0x000007E4\n    mov r1, #0xdf\n    add r0, r4, r0\n    sub r2, r2, #1\n    bl ReadWholeNarcMemberByIdPair\n    ldr r0, _0224F8E8 ; =0x00000868\n    mov r1, #0\n    strb r1, [r4, r0]\n    add r2, r0, #1\n    strb r1, [r4, r2]\n    add r2, r0, #3\n    strb r1, [r4, r2]\n    add r2, r0, #4\n    ldrb r3, [r4, r2]\n    mov r2, #0xf\n    add r5, r4, #0\n    bic r3, r2\n    add r2, r0, #4\n    strb r3, [r4, r2]\n    add r2, r0, #2\n    strb r1, [r4, r2]\n    add r2, r0, #5\n    strb r1, [r4, r2]\n    add r0, r0, #6\n    strh r1, [r4, r0]\n    ldr r0, _0224F8E4 ; =0x000007E4\n    ldr r2, _0224F8EC ; =0x0000FFFF\n    ldrh r3, [r5, r0]\n    cmp r3, r2\n    beq _0224F8CC\n    add r1, r1, #1\n    add r5, #8\n    cmp r1, #5\n    blt _0224F8BE\n    ldr r3, _0224F8F0 ; =0x0000086C\n    lsl r1, r1, #0x18\n    ldrb r0, [r4, r3]\n    lsr r1, r1, #0x18\n    mov r2, #0xf0\n    lsl r1, r1, #0x1c\n    bic r0, r2\n    lsr r1, r1, #0x18\n    orr r0, r1\n    strb r0, [r4, r3]\n    pop {r3, r4, r5, pc}\n    nop\n    _0224F8E4: .word 0x000007E4\n    _0224F8E8: .word 0x00000868\n    _0224F8EC: .word 0x0000FFFF\n    _0224F8F0: .word 0x0000086C"
    );
    #endif
}

void ov02_0224F8F4(void) {
    Heap_Free();
}

void ov02_0224F8FC(void) {
    /* Original at 0x0224F8FC */
    /* Requires manual decompilation - 262 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r2, _0224FB2C ; =0x0000086C\n    add r4, r1, #0\n    ldrb r3, [r4, r2]\n    add r5, r0, #0\n    lsl r2, r3, #0x1c\n    lsr r2, r2, #0x1c\n    mov ip, r2\n    cmp r2, #5\n    blo _0224F93E\n    bl ov02_02250504\n    ldr r1, _0224FB30 ; =0x0000080C\n    ldr r0, [r4, r1]\n    cmp r0, #0\n    beq _0224F920\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r1, #0\n    add r0, #0xa\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _0224F92E\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, #0xb\n    ldrb r0, [r4, r1]\n    cmp r0, #0\n    beq _0224F93A\n    mov r0, #4\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, _0224FB2C ; =0x0000086C\n    sub r2, #0x88\n    add r7, r4, r2\n    mov r2, ip\n    lsl r2, r2, #3\n    add r6, r7, r2\n    ldrh r7, [r7, r2]\n    ldr r2, _0224FB34 ; =0x0000FFFF\n    cmp r7, r2\n    bne _0224F980\n    bl ov02_02250504\n    ldr r1, _0224FB30 ; =0x0000080C\n    ldr r0, [r4, r1]\n    cmp r0, #0\n    beq _0224F962\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r1, #0\n    add r0, #0xa\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _0224F970\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, #0xb\n    ldrb r0, [r4, r1]\n    cmp r0, #0\n    beq _0224F97C\n    mov r0, #4\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, _0224FB2C ; =0x0000086C\n    sub r2, r2, #3\n    ldrb r2, [r4, r2]\n    cmp r2, #7\n    bls _0224F98C\n    b _0224FB28\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0224F998: ; jump table\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov02_0224FB44\n    cmp r0, #0\n    beq _0224F9CA\n    add r5, #0xe4\n    ldr r0, [r5]\n    bl MapObject_UnpauseMovement\n    ldr r0, _0224FB38 ; =0x00000868\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r1, #5\n    add r0, r0, #1\n    strb r1, [r4, r0]\n    b _0224FB28\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov02_0224FB54\n    cmp r0, #0\n    beq _0224F9E8\n    add r5, #0xe4\n    ldr r0, [r5]\n    bl MapObject_UnpauseMovement\n    ldr r0, _0224FB3C ; =0x00000869\n    mov r1, #2\n    strb r1, [r4, r0]\n    b _0224FB28\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl FollowMon_TryPrintInteractionMessage\n    cmp r0, #0\n    beq _0224FA06\n    add r5, #0xe4\n    ldr r0, [r5]\n    bl MapObject_PauseMovement\n    ldr r0, _0224FB3C ; =0x00000869\n    mov r1, #6\n    strb r1, [r4, r0]\n    b _0224FB28\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov02_0224FC74\n    cmp r0, #0\n    beq _0224FA1A\n    ldr r0, _0224FB3C ; =0x00000869\n    mov r1, #7\n    strb r1, [r4, r0]\n    b _0224FB28\n    ldr r2, _0224FB2C ; =0x0000086C\n    mov r1, #0xf\n    ldrb r3, [r4, r2]\n    add r0, r3, #0\n    bic r0, r1\n    lsl r1, r3, #0x1c\n    lsr r1, r1, #0x1c\n    add r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r3, r1, #0x18\n    mov r1, #0xf\n    and r1, r3\n    orr r0, r1\n    strb r0, [r4, r2]\n    mov r1, #0\n    sub r0, r2, #3\n    strb r1, [r4, r0]\n    b _0224FB28\n    add r2, r7, #0\n    bl ov02_02250004\n    cmp r0, #0\n    beq _0224FB28\n    ldr r0, _0224FB3C ; =0x00000869\n    mov r1, #1\n    strb r1, [r4, r0]\n    b _0224FB28\n    ldr r0, _0224FB2C ; =0x0000086C\n    add r0, r0, #2\n    ldrh r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #1\n    bne _0224FB28\n    ldr r1, _0224FB2C ; =0x0000086C\n    ldrb r2, [r4, r1]\n    lsl r0, r2, #0x18\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x1c\n    lsr r0, r0, #0x1c\n    add r2, r2, #1\n    cmp r0, r2\n    ble _0224FAA8\n    ldr r0, _0224FB40 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _0224FB28\n    add r0, r4, #0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    bl RemoveWindow\n    ldr r0, [r4, #0x10]\n    bl String_Delete\n    add r0, r5, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x40\n    add r5, #0xd2\n    bic r1, r0\n    strb r1, [r5]\n    ldr r0, _0224FB3C ; =0x00000869\n    mov r1, #3\n    strb r1, [r4, r0]\n    b _0224FB28\n    add r0, r1, #0\n    sub r0, #0x60\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0224FABA\n    mov r2, #3\n    sub r0, r1, #3\n    strb r2, [r4, r0]\n    b _0224FB28\n    ldr r0, _0224FB40 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _0224FB28\n    add r0, r4, #0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    bl RemoveWindow\n    ldr r0, [r4, #0x10]\n    bl String_Delete\n    add r0, r5, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x40\n    add r5, #0xd2\n    bic r1, r0\n    strb r1, [r5]\n    ldr r0, _0224FB3C ; =0x00000869\n    mov r1, #3\n    strb r1, [r4, r0]\n    b _0224FB28\n    ldr r0, _0224FB2C ; =0x0000086C\n    add r0, r0, #1\n    ldrb r1, [r4, r0]\n    ldrb r0, [r6, #7]\n    cmp r1, r0\n    blo _0224FB1A\n    mov r0, #0xf\n    bic r3, r0\n    mov r0, ip\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    mov r0, #0xf\n    and r0, r1\n    add r1, r3, #0\n    orr r1, r0\n    ldr r0, _0224FB2C ; =0x0000086C\n    strb r1, [r4, r0]\n    mov r1, #0\n    sub r0, r0, #3\n    strb r1, [r4, r0]\n    b _0224FB28\n    ldr r0, _0224FB2C ; =0x0000086C\n    add r0, r0, #1\n    ldrb r0, [r4, r0]\n    add r1, r0, #1\n    ldr r0, _0224FB2C ; =0x0000086C\n    add r0, r0, #1\n    strb r1, [r4, r0]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224FB2C: .word 0x0000086C\n    _0224FB30: .word 0x0000080C\n    _0224FB34: .word 0x0000FFFF\n    _0224FB38: .word 0x00000868\n    _0224FB3C: .word 0x00000869\n    _0224FB40: .word gSystem"
    );
    #endif
}

void ov02_0224FB44(void) {
    /* Original at 0x0224FB44 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r1]\n    cmp r0, #0\n    beq _0224FB4E\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov02_0224FB54(void) {
    /* Original at 0x0224FB54 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r1, [r5, r0]\n    ldr r0, _0224FB98 ; =0x00000882\n    add r4, r2, #0\n    ldrh r0, [r1, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205BB04\n    cmp r0, #0\n    beq _0224FB74\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrb r2, [r4, #6]\n    cmp r2, #0\n    beq _0224FB92\n    cmp r2, #0xe\n    bls _0224FB82\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r5, #0xe4\n    ldr r1, [r5]\n    sub r2, r2, #1\n    bl ov01_02203AB4\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0224FB98: .word 0x00000882"
    );
    #endif
}

void FollowMon_TryPrintInteractionMessage(void) {
    /* Original at 0x0224FB9C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    add r5, r0, #0\n    ldrh r0, [r6, #2]\n    add r4, r1, #0\n    cmp r0, #0\n    beq _0224FC00\n    mov r0, #1\n    lsl r0, r0, #0xa\n    mov r1, #0xb\n    bl String_New\n    str r0, [r4, #0x10]\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    mov r2, #3\n    bl sub_0205B514\n    ldrh r3, [r6, #2]\n    ldr r1, [r4, #0x10]\n    add r0, r5, #0\n    mov r2, #0xb\n    sub r3, r3, #1\n    bl FollowMon_ExpandInteractionMessage\n    ldr r0, [r5, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    add r6, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_0205B564\n    ldr r1, [r4, #0x10]\n    add r0, r4, #0\n    add r2, r6, #0\n    mov r3, #1\n    bl sub_0205B5B4\n    ldr r1, _0224FC04 ; =0x0000086E\n    strh r0, [r4, r1]\n    add r0, r5, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x40\n    add r5, #0xd2\n    orr r0, r1\n    strb r0, [r5]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _0224FC04: .word 0x0000086E"
    );
    #endif
}

void ov02_0224FC08(void) {
    /* Original at 0x0224FC08 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    mov r0, #1\n    add r4, r1, #0\n    lsl r0, r0, #0xa\n    mov r1, #0xb\n    add r6, r2, #0\n    bl String_New\n    str r0, [r4, #0x10]\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    mov r2, #3\n    bl sub_0205B514\n    ldr r0, _0224FC6C ; =0x00000816\n    mov r2, #0xb\n    ldrb r0, [r4, r0]\n    add r3, r6, #0\n    str r0, [sp]\n    ldr r1, [r4, #0x10]\n    add r0, r5, #0\n    bl ov02_0224FCE0\n    ldr r0, [r5, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    add r6, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_0205B564\n    ldr r1, [r4, #0x10]\n    add r0, r4, #0\n    add r2, r6, #0\n    mov r3, #1\n    bl sub_0205B5B4\n    ldr r1, _0224FC70 ; =0x0000086E\n    strh r0, [r4, r1]\n    add r0, r5, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x40\n    add r5, #0xd2\n    orr r0, r1\n    strb r0, [r5]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _0224FC6C: .word 0x00000816\n    _0224FC70: .word 0x0000086E"
    );
    #endif
}

void ov02_0224FC74(void) {
    /* Original at 0x0224FC74 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0224FC88 ; =0x0000086D\n    mov r3, #0\n    strb r3, [r0, r2]\n    ldrb r0, [r1, #7]\n    cmp r0, #0\n    beq _0224FC82\n    mov r3, #1\n    add r0, r3, #0\n    bx lr\n    nop\n    _0224FC88: .word 0x0000086D"
    );
    #endif
}

void FollowMon_ExpandInteractionMessage(void) {
    /* Original at 0x0224FC8C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r1, [sp]\n    mov r1, #0x1b\n    add r4, r2, #0\n    add r2, r1, #0\n    add r6, r0, #0\n    add r7, r3, #0\n    mov r0, #0\n    add r2, #0xee\n    add r3, r4, #0\n    bl NewMsgDataFromNarc\n    add r5, r0, #0\n    add r0, r4, #0\n    bl MessageFormat_New\n    add r4, r0, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl FollowMon_PlaceholdersSet\n    add r0, r5, #0\n    add r1, r7, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r1, [sp]\n    add r0, r4, #0\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r4, #0\n    bl MessageFormat_Delete\n    add r0, r5, #0\n    bl DestroyMsgData\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224FCE0(void) {
    /* Original at 0x0224FCE0 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r2, #0\n    add r5, r0, #0\n    str r1, [sp]\n    add r6, r3, #0\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0x28\n    add r3, r4, #0\n    bl NewMsgDataFromNarc\n    add r7, r0, #0\n    add r0, r4, #0\n    bl MessageFormat_New\n    add r4, r0, #0\n    mov r0, #2\n    tst r0, r6\n    ldr r0, [r5, #0xc]\n    beq _0224FD3E\n    bl Save_PlayerData_GetProfile\n    add r2, r0, #0\n    add r0, r4, #0\n    mov r1, #0\n    bl BufferPlayersName\n    mov r1, #1\n    add r0, r6, #0\n    tst r0, r1\n    add r2, sp, #0x10\n    beq _0224FD30\n    ldrb r2, [r2, #0x10]\n    add r0, r4, #0\n    sub r2, r2, #1\n    bl BufferFashionName\n    mov r1, #0x20\n    b _0224FD72\n    ldrb r2, [r2, #0x10]\n    add r0, r4, #0\n    sub r2, r2, #1\n    bl BufferFashionNameWithArticle\n    mov r1, #0x5f\n    b _0224FD72\n    bl SaveArray_Party_Get\n    bl GetFirstAliveMonInParty_CrashIfNone\n    bl Mon_GetBoxMon\n    str r0, [sp, #4]\n    ldr r0, [r5, #0xc]\n    bl Save_PlayerData_GetProfile\n    add r2, r0, #0\n    add r0, r4, #0\n    mov r1, #0\n    bl BufferPlayersName\n    ldr r2, [sp, #4]\n    add r0, r4, #0\n    mov r1, #1\n    bl BufferBoxMonNickname\n    mov r0, #1\n    tst r0, r6\n    beq _0224FD70\n    mov r1, #0x61\n    b _0224FD72\n    mov r1, #0x62\n    add r0, r7, #0\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r1, [sp]\n    add r0, r4, #0\n    add r2, r5, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r4, #0\n    bl MessageFormat_Delete\n    add r0, r7, #0\n    bl DestroyMsgData\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224FD9C(void) {
    /* Original at 0x0224FD9C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    mov r0, #2\n    ldrsb r0, [r5, r0]\n    cmp r0, #0\n    beq _0224FDBC\n    ldr r1, [sp]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp]\n    mov r0, #3\n    ldrsb r0, [r5, r0]\n    cmp r0, #0\n    beq _0224FDDC\n    add r0, r4, #0\n    bl FollowMon_GetSpecies\n    cmp r0, #0x32\n    beq _0224FDDC\n    cmp r0, #0x33\n    beq _0224FDDC\n    mov r1, #3\n    ldrsb r1, [r5, r1]\n    add r0, r4, #0\n    bl ov01_021F8F74\n    mov r0, #4\n    ldrsb r0, [r5, r0]\n    cmp r0, #0\n    beq _0224FDEC\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl MapObject_SetPositionVector\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov02_0224FDF8(void) {
    /* Original at 0x0224FDF8 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldrb r0, [r0, #5]\n    cmp r0, #0\n    beq _0224FE32\n    cmp r1, #0\n    beq _0224FE32\n    ldr r0, _0224FE38 ; =SEQ_SE_END\n    cmp r1, r0\n    bls _0224FE2C\n    add r0, r0, #1\n    cmp r1, r0\n    bne _0224FE16\n    mov r0, #0\n    b _0224FE18\n    mov r0, #0xb\n    ldr r4, _0224FE3C ; =0x000001FF\n    add r1, r2, #0\n    str r4, [sp]\n    str r3, [sp, #4]\n    add r2, r4, #0\n    add r3, r4, #0\n    bl PlayCryEx\n    add sp, #8\n    pop {r4, pc}\n    add r0, r1, #0\n    bl PlaySE\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _0224FE38: .word SEQ_SE_END\n    _0224FE3C: .word 0x000001FF"
    );
    #endif
}

void ov02_0224FE40(void) {
    /* Original at 0x0224FE40 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r7, r0, #0\n    ldrb r0, [r5]\n    add r4, r2, #0\n    cmp r0, #0\n    beq _0224FE6C\n    add r0, r4, #0\n    bl MapObject_GetFacingDirection\n    ldrb r1, [r5]\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r4, #0\n    sub r1, r1, #1\n    bl MapObject_SetFacingDirectionDirect\n    add r0, r7, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov02_0224FE70\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224FE70(void) {
    /* Original at 0x0224FE70 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r6, r2, #0\n    bl ov01_022055DC\n    cmp r0, #0\n    beq _0224FEFC\n    add r0, r4, #0\n    bl MapObject_GetFacingDirection\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r6, r0\n    beq _0224FEFC\n    ldr r0, _0224FF00 ; =0x0000087C\n    ldrb r0, [r5, r0]\n    cmp r0, #2\n    beq _0224FE9E\n    cmp r0, #3\n    bne _0224FEFC\n    add r0, r4, #0\n    bl MapObject_GetFieldSystem\n    ldr r1, _0224FF00 ; =0x0000087C\n    add r6, r0, #0\n    ldrb r1, [r5, r1]\n    add r0, r4, #0\n    add r2, sp, #8\n    add r3, sp, #4\n    bl ov02_0224FF04\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    bl GetMetatileBehavior\n    add r5, r0, #0\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    bne _0224FEE0\n    mov r0, #1\n    str r0, [sp]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov01_021FF0E4\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205B6F4\n    cmp r0, #1\n    bne _0224FEFC\n    mov r0, #1\n    str r0, [sp]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov01_021FF964\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _0224FF00: .word 0x0000087C"
    );
    #endif
}

void ov02_0224FF04(void) {
    /* Original at 0x0224FF04 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r4, r2, #0\n    add r6, r1, #0\n    add r5, r3, #0\n    bl MapObject_GetXCoord\n    str r0, [r4]\n    add r0, r7, #0\n    bl MapObject_GetZCoord\n    str r0, [r5]\n    cmp r6, #3\n    bhi _0224FF54\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224FF2C: ; jump table\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5]\n    sub r0, r0, #1\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4]\n    sub r0, r0, #1\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_0224FF5C(void) {
    /* Original at 0x0224FF5C */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r3, _0224FFCC ; =0x00000818\n    add r5, r0, #0\n    add r2, r3, #0\n    add r2, #0x53\n    ldrb r2, [r5, r2]\n    add r0, r5, r3\n    add r3, #0x52\n    lsl r2, r2, #3\n    add r4, r0, r2\n    ldrb r0, [r5, r3]\n    add r6, r1, #0\n    cmp r0, #0\n    bne _0224FFA8\n    add r0, r4, #0\n    bl ov02_0224FD9C\n    ldr r3, _0224FFD0 ; =0x0000086C\n    add r0, r4, #0\n    ldrb r1, [r5, r3]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x19\n    add r2, r5, r1\n    add r1, r3, #0\n    sub r1, #0x84\n    ldrh r1, [r2, r1]\n    add r2, r3, #0\n    add r2, #0x12\n    add r3, #0x11\n    ldrh r2, [r5, r2]\n    ldrb r3, [r5, r3]\n    bl ov02_0224FDF8\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov02_0224FE40\n    ldr r1, _0224FFD4 ; =0x0000086A\n    ldrb r0, [r5, r1]\n    add r0, r0, #1\n    strb r0, [r5, r1]\n    ldrb r2, [r5, r1]\n    ldrb r0, [r4, #1]\n    cmp r2, r0\n    blo _0224FFC6\n    add r0, r1, #1\n    ldrb r0, [r5, r0]\n    add r2, r0, #1\n    add r0, r1, #1\n    strb r2, [r5, r0]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _0224FFCC: .word 0x00000818\n    _0224FFD0: .word 0x0000086C\n    _0224FFD4: .word 0x0000086A"
    );
    #endif
}

void ov02_0224FFD8(void) {
    /* Original at 0x0224FFD8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _02250000 ; =0x0000086B\n    ldrb r1, [r0, r2]\n    cmp r1, #0xa\n    blo _0224FFE4\n    mov r0, #0\n    bx lr\n    lsl r1, r1, #3\n    add r3, r0, r1\n    add r1, r2, #0\n    sub r1, #0x53\n    ldrb r1, [r3, r1]\n    cmp r1, #0xff\n    bne _0224FFF6\n    mov r0, #0\n    bx lr\n    mov r3, #0\n    sub r1, r2, #1\n    strb r3, [r0, r1]\n    mov r0, #1\n    bx lr\n    _02250000: .word 0x0000086B"
    );
    #endif
}

void ov02_02250004(void) {
    /* Original at 0x02250004 */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r2, #0\n    bne _02250016\n    bl GF_AssertFail\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, _02250108 ; =0x00000868\n    ldrb r1, [r4, r0]\n    cmp r1, #4\n    bhi _02250102\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0225002A: ; jump table\n    sub r0, #0x50\n    add r0, r4, r0\n    mov r1, #0xe0\n    sub r2, r2, #1\n    bl ReadWholeNarcMemberByIdPair\n    add r0, r5, #0\n    add r0, #0xe4\n    mov r1, #0x87\n    lsl r1, r1, #4\n    ldr r0, [r0]\n    add r1, r4, r1\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    bl MapObject_GetFacingDirection\n    ldr r1, _0225010C ; =0x0000087C\n    strb r0, [r4, r1]\n    add r0, r5, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    mov r1, #0\n    bl ov01_021F8F68\n    add r5, #0xe4\n    ldr r0, [r5]\n    mov r1, #1\n    bl ov01_021F8F08\n    ldr r0, _02250108 ; =0x00000868\n    mov r1, #2\n    strb r1, [r4, r0]\n    mov r1, #0\n    add r0, r0, #3\n    strb r1, [r4, r0]\n    b _02250102\n    add r0, r4, #0\n    bl ov02_0224FFD8\n    cmp r0, #0\n    ldr r0, _02250108 ; =0x00000868\n    bne _02250094\n    mov r1, #4\n    strb r1, [r4, r0]\n    b _02250102\n    mov r1, #3\n    strb r1, [r4, r0]\n    add r5, #0xe4\n    ldr r1, [r5]\n    add r0, r4, #0\n    bl ov02_0224FF5C\n    cmp r0, #0\n    beq _02250102\n    ldr r0, _02250108 ; =0x00000868\n    mov r1, #2\n    strb r1, [r4, r0]\n    b _02250102\n    add r0, r5, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    bl MapObject_GetFacingDirection\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r5, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    mov r1, #0\n    bl ov01_021F8F68\n    add r0, r5, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    mov r1, #0\n    bl ov01_021F8F08\n    add r0, r5, #0\n    add r0, #0xe4\n    mov r1, #0x87\n    lsl r1, r1, #4\n    ldr r0, [r0]\n    add r1, r4, r1\n    bl MapObject_SetPositionVector\n    ldr r1, _0225010C ; =0x0000087C\n    add r0, r5, #0\n    add r0, #0xe4\n    ldrb r1, [r4, r1]\n    ldr r0, [r0]\n    bl MapObject_SetFacingDirectionDirect\n    add r5, #0xe4\n    ldr r1, [r5]\n    add r0, r4, #0\n    add r2, r6, #0\n    bl ov02_0224FE70\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _02250108: .word 0x00000868\n    _0225010C: .word 0x0000087C"
    );
    #endif
}

void Task_FollowMonInteract(void) {
    /* Original at 0x02250110 */
    /* Requires manual decompilation - 387 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r4, r0, #0\n    add r0, r5, #0\n    bl TaskManager_GetStatePtr\n    add r6, r0, #0\n    ldr r0, [r6]\n    cmp r0, #5\n    bls _0225012A\n    b _0225047E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02250136: ; jump table\n    add r0, r4, #0\n    bl ov02_0224EF94\n    add r1, r0, #0\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov02_0224F880\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _0225047E\n    mov r1, #0x12\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov02_0224F8FC\n    cmp r0, #1\n    bne _02250178\n    add r4, #0xe4\n    ldr r0, [r4]\n    bl MapObject_PauseMovement\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #2\n    bne _0225018E\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    ldr r0, _02250484 ; =0x00000869\n    mov r2, #0xa\n    strb r2, [r1, r0]\n    mov r0, #2\n    str r0, [r6]\n    b _0225047E\n    cmp r0, #3\n    bne _02250198\n    mov r0, #3\n    str r0, [r6]\n    b _0225047E\n    cmp r0, #4\n    bne _02250270\n    mov r0, #4\n    str r0, [r6]\n    b _0225047E\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    ldr r0, _02250484 ; =0x00000869\n    ldrb r0, [r1, r0]\n    sub r0, #0xa\n    cmp r0, #3\n    bhi _02250270\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022501BE: ; jump table\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0\n    bl ov01_021F6A9C\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    ldr r0, _02250484 ; =0x00000869\n    mov r2, #0xb\n    strb r2, [r1, r0]\n    b _0225047E\n    add r0, r4, #0\n    bl ov01_021F6B00\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov01_021F6B10\n    cmp r5, #3\n    bne _02250270\n    cmp r0, #1\n    bne _02250270\n    mov r3, #0x12\n    lsl r3, r3, #4\n    ldr r5, [r4, r3]\n    mov r3, #0x22\n    mov r1, #3\n    lsl r3, r3, #6\n    add r0, r4, #0\n    add r2, r1, #0\n    add r3, r5, r3\n    bl ov01_021F6ABC\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    ldr r0, _02250484 ; =0x00000869\n    mov r2, #0xc\n    strb r2, [r1, r0]\n    b _0225047E\n    add r0, r4, #0\n    bl ov01_021F6B00\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov01_021F6AEC\n    cmp r5, #3\n    bne _02250270\n    cmp r0, #6\n    bne _02250270\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov01_021F6A9C\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    ldr r0, _02250484 ; =0x00000869\n    mov r2, #0xd\n    strb r2, [r1, r0]\n    b _0225047E\n    add r0, r4, #0\n    bl ov01_021F6B00\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov01_021F6B10\n    cmp r5, #0\n    bne _02250270\n    cmp r0, #1\n    bne _02250270\n    mov r0, #0x12\n    lsl r0, r0, #4\n    mov r1, #0x22\n    ldr r0, [r4, r0]\n    lsl r1, r1, #6\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _02250272\n    cmp r1, #1\n    beq _022502C4\n    b _0225047E\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl RemoveWindow\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    ldr r0, [r0, #0x10]\n    bl String_Delete\n    add r0, r4, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x40\n    bic r1, r0\n    add r0, r4, #0\n    add r0, #0xd2\n    strb r1, [r0]\n    mov r0, #0x12\n    lsl r0, r0, #4\n    mov r1, #0x81\n    ldr r0, [r4, r0]\n    lsl r1, r1, #4\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    bne _022502BA\n    add r4, #0xe4\n    ldr r0, [r4]\n    bl MapObject_PauseMovement\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov02_0224F880\n    mov r0, #1\n    str r0, [r6]\n    b _0225047E\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl RemoveWindow\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    ldr r0, [r0, #0x10]\n    bl String_Delete\n    add r0, r4, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x40\n    bic r1, r0\n    add r0, r4, #0\n    add r0, #0xd2\n    strb r1, [r0]\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    ldr r1, _02250488 ; =0x00000812\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    bne _0225030A\n    add r4, #0xe4\n    ldr r0, [r4]\n    bl MapObject_PauseMovement\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov02_0224F880\n    mov r0, #1\n    str r0, [r6]\n    b _0225047E\n    ldr r0, [r4, #0xc]\n    bl Save_FashionData_Get\n    bl Save_FashionData_GetFashionCase\n    add r7, r0, #0\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    ldr r0, _0225048C ; =0x00000816\n    ldrb r0, [r1, r0]\n    sub r5, r0, #1\n    bmi _02250332\n    cmp r5, #0x64\n    blt _02250336\n    bl GF_AssertFail\n    add r0, r7, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl sub_0202BA2C\n    cmp r0, #0\n    beq _02250364\n    add r0, r7, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl FashionCase_GiveFashionItem\n    mov r1, #0x12\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #3\n    bl ov02_0224FC08\n    ldr r0, _02250490 ; =SEQ_ME_ACCE\n    bl PlayFanfare\n    b _02250372\n    mov r1, #0x12\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #2\n    bl ov02_0224FC08\n    mov r0, #5\n    str r0, [r6]\n    b _0225047E\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    ldr r0, _02250494 ; =0x00000817\n    ldrb r0, [r1, r0]\n    cmp r0, #5\n    bhi _022503B2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02250392: ; jump table\n    mov r5, #MON_DATA_SHINY_LEAF_A\n    b _022503BA\n    mov r5, #MON_DATA_SHINY_LEAF_B\n    b _022503BA\n    mov r5, #MON_DATA_SHINY_LEAF_C\n    b _022503BA\n    mov r5, #MON_DATA_SHINY_LEAF_D\n    b _022503BA\n    mov r5, #MON_DATA_SHINY_LEAF_E\n    b _022503BA\n    bl GF_AssertFail\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4, #0xc]\n    bl SaveArray_Party_Get\n    bl GetFirstAliveMonInParty_CrashIfNone\n    add r1, r5, #0\n    mov r2, #0\n    add r7, r0, #0\n    bl GetMonData\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bne _02250404\n    ldr r0, [r4, #0xc]\n    bl Save_VarsFlags_Get\n    bl SetFlag99C\n    mov r1, #1\n    add r0, sp, #0\n    strb r1, [r0]\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, sp, #0\n    bl SetMonData\n    mov r1, #0x12\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #1\n    bl ov02_0224FC08\n    ldr r0, _02250490 ; =SEQ_ME_ACCE\n    bl PlayFanfare\n    b _02250412\n    mov r1, #0x12\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov02_0224FC08\n    mov r0, #5\n    str r0, [r6]\n    b _0225047E\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    ldr r0, _02250498 ; =0x0000086E\n    ldrh r0, [r1, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #1\n    bne _0225047E\n    bl IsFanfarePlaying\n    cmp r0, #0\n    bne _0225047E\n    ldr r0, _0225049C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _0225047E\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl RemoveWindow\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    ldr r0, [r0, #0x10]\n    bl String_Delete\n    add r0, r4, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x40\n    bic r1, r0\n    add r0, r4, #0\n    add r0, #0xd2\n    add r4, #0xe4\n    strb r1, [r0]\n    ldr r0, [r4]\n    bl MapObject_PauseMovement\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02250484: .word 0x00000869\n    _02250488: .word 0x00000812\n    _0225048C: .word 0x00000816\n    _02250490: .word SEQ_ME_ACCE\n    _02250494: .word 0x00000817\n    _02250498: .word 0x0000086E\n    _0225049C: .word gSystem"
    );
    #endif
}

void FollowMon_PlaceholdersSet(void) {
    /* Original at 0x022504A0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    add r4, r1, #0\n    bl SaveArray_Party_Get\n    bl GetFirstAliveMonInParty_CrashIfNone\n    add r6, r0, #0\n    bl Mon_GetBoxMon\n    add r7, r0, #0\n    add r0, r4, #0\n    mov r1, #0\n    add r2, r7, #0\n    bl BufferBoxMonNickname\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl BufferBoxMonSpeciesName\n    ldr r0, [r5, #0xc]\n    bl Save_PlayerData_GetProfile\n    add r2, r0, #0\n    add r0, r4, #0\n    mov r1, #2\n    bl BufferPlayersName\n    ldr r0, [r5, #0x20]\n    ldr r0, [r0]\n    bl MapHeader_GetMapSec\n    add r2, r0, #0\n    add r0, r4, #0\n    mov r1, #3\n    bl BufferLocationName\n    add r0, r6, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    add r2, r0, #0\n    add r0, r4, #0\n    mov r1, #4\n    bl BufferItemName\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov02_02250504(void) {
    /* Original at 0x02250504 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    bl SaveArray_Party_Get\n    bl GetFirstAliveMonInParty_CrashIfNone\n    add r4, r0, #0\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl FieldSystem_UnkSub108_GetMonMood\n    mov r1, #0x12\n    str r0, [sp]\n    lsl r1, r1, #4\n    ldr r2, [r5, r1]\n    ldr r1, _0225058C ; =0x00000815\n    ldrsb r1, [r2, r1]\n    add r1, r0, r1\n    str r1, [sp]\n    cmp r1, #0x7f\n    ble _02250538\n    mov r0, #0x7f\n    str r0, [sp]\n    b _02250542\n    mov r0, #0x7e\n    mvn r0, r0\n    cmp r1, r0\n    bge _02250542\n    str r0, [sp]\n    mov r0, #0x42\n    ldr r1, [sp]\n    lsl r0, r0, #2\n    lsl r1, r1, #0x18\n    ldr r0, [r5, r0]\n    asr r1, r1, #0x18\n    bl FieldSystem_UnkSub108_SetMonMood\n    add r0, r4, #0\n    mov r1, #9\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x12\n    str r0, [sp]\n    lsl r1, r1, #4\n    ldr r2, [r5, r1]\n    ldr r1, _02250590 ; =0x00000814\n    ldrsb r1, [r2, r1]\n    add r0, r0, r1\n    str r0, [sp]\n    cmp r0, #0xff\n    ble _02250576\n    mov r0, #0xff\n    str r0, [sp]\n    b _0225057E\n    cmp r0, #0\n    bge _0225057E\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #9\n    add r2, sp, #0\n    bl SetMonData\n    pop {r3, r4, r5, pc}\n    nop\n    _0225058C: .word 0x00000815\n    _02250590: .word 0x00000814"
    );
    #endif
}

void ov02_02250594(void) {
    /* Original at 0x02250594 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0xa\n    bhi _02250622\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022505A4: ; jump table\n    cmp r1, #0xff\n    bne _02250622\n    mov r0, #1\n    bx lr\n    cmp r1, #0xc8\n    blt _02250622\n    cmp r1, #0xff\n    bge _02250622\n    mov r0, #1\n    bx lr\n    cmp r1, #0x96\n    blt _02250622\n    cmp r1, #0xc8\n    bge _02250622\n    mov r0, #1\n    bx lr\n    cmp r1, #0x5a\n    blt _02250622\n    cmp r1, #0x96\n    bge _02250622\n    mov r0, #1\n    bx lr\n    cmp r1, #0x3c\n    blt _02250622\n    cmp r1, #0x5a\n    bge _02250622\n    mov r0, #1\n    bx lr\n    cmp r1, #0x1e\n    blt _02250622\n    cmp r1, #0x3c\n    bge _02250622\n    mov r0, #1\n    bx lr\n    cmp r1, #1\n    blt _02250622\n    cmp r1, #0x1e\n    bge _02250622\n    mov r0, #1\n    bx lr\n    cmp r1, #0\n    bne _02250622\n    mov r0, #1\n    bx lr\n    cmp r1, #0x5a\n    blt _02250622\n    mov r0, #1\n    bx lr\n    cmp r1, #0x3c\n    bge _02250622\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov02_02250628(void) {
    /* Original at 0x02250628 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0xa\n    bhi _022506CE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02250638: ; jump table\n    cmp r1, #0x7f\n    bne _022506CE\n    mov r0, #1\n    bx lr\n    cmp r1, #0x64\n    blt _022506CE\n    cmp r1, #0x7f\n    bge _022506CE\n    mov r0, #1\n    bx lr\n    cmp r1, #0x32\n    blt _022506CE\n    cmp r1, #0x64\n    bge _022506CE\n    mov r0, #1\n    bx lr\n    cmp r1, #0x1e\n    blt _022506CE\n    cmp r1, #0x32\n    bge _022506CE\n    mov r0, #1\n    bx lr\n    mov r0, #0x1d\n    mvn r0, r0\n    cmp r1, r0\n    ble _022506CE\n    cmp r1, #0x1e\n    bge _022506CE\n    mov r0, #1\n    bx lr\n    mov r0, #0x31\n    mvn r0, r0\n    cmp r1, r0\n    ble _022506CE\n    add r0, #0x14\n    cmp r1, r0\n    bgt _022506CE\n    mov r0, #1\n    bx lr\n    mov r0, #0x7e\n    mvn r0, r0\n    cmp r1, r0\n    ble _022506CE\n    add r0, #0x4d\n    cmp r1, r0\n    bgt _022506CE\n    mov r0, #1\n    bx lr\n    mov r0, #0x7e\n    mvn r0, r0\n    cmp r1, r0\n    bne _022506CE\n    mov r0, #1\n    bx lr\n    cmp r1, #0\n    blt _022506CE\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bgt _022506CE\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov02_022506D4(void) {
    /* Original at 0x022506D4 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0xf9\n    bhi _022506E2\n    cmp r0, r1\n    bne _02250732\n    mov r0, #1\n    pop {r3, pc}\n    sub r0, #0xfa\n    cmp r0, #4\n    bhi _0225072A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022506F4: ; jump table\n    cmp r1, #0x13\n    bhi _02250732\n    mov r0, #1\n    pop {r3, pc}\n    cmp r1, #0x82\n    bhi _02250732\n    mov r0, #1\n    pop {r3, pc}\n    cmp r1, #0x8c\n    blo _02250732\n    cmp r1, #0x95\n    bhi _02250732\n    mov r0, #1\n    pop {r3, pc}\n    cmp r1, #0xa0\n    blo _02250732\n    mov r0, #1\n    pop {r3, pc}\n    cmp r1, #0xdc\n    blo _02250732\n    mov r0, #1\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov02_02250738(void) {
    /* Original at 0x02250738 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    sub sp, #8\n    ldr r4, _0225077C ; =ov02_02253A54\n    add r2, sp, #0\n    ldrb r5, [r4]\n    add r3, sp, #0\n    add r0, r2, r0\n    strb r5, [r3]\n    ldrb r5, [r4, #1]\n    sub r0, r0, #1\n    strb r5, [r3, #1]\n    ldrb r5, [r4, #2]\n    strb r5, [r3, #2]\n    ldrb r5, [r4, #3]\n    ldrb r4, [r4, #4]\n    strb r5, [r3, #3]\n    strb r4, [r3, #4]\n    ldrb r0, [r0]\n    mov r3, #0\n    and r0, r1\n    cmp r0, #0\n    bne _0225076C\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5}\n    bx lr\n    add r3, r3, #1\n    cmp r3, #5\n    blt _02250760\n    mov r0, #0\n    add sp, #8\n    pop {r4, r5}\n    bx lr\n    nop\n    _0225077C: .word ov02_02253A54"
    );
    #endif
}

void ov02_02250780(void) {
    /* Original at 0x02250780 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r0, [r0, #0xc]\n    add r5, r1, #0\n    bl SaveArray_Party_Get\n    bl GetFirstAliveMonInParty_CrashIfNone\n    add r6, r0, #0\n    mov r1, #0xb1\n    mov r2, #0\n    bl GetMonData\n    add r4, r0, #0\n    add r0, r6, #0\n    mov r1, #0xb2\n    mov r2, #0\n    bl GetMonData\n    cmp r4, r5\n    beq _022507AC\n    cmp r0, r5\n    bne _022507B0\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov02_022507B4(void) {
    /* Original at 0x022507B4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    add r4, r1, #0\n    bl FollowMon_GetSpecies\n    sub r0, #0x32\n    cmp r0, #1\n    bls _022507E0\n    mov r0, #0xb\n    mov r1, #8\n    bl Heap_AllocAtEnd\n    add r2, r0, #0\n    strh r4, [r2]\n    mov r0, #0\n    strh r0, [r2, #2]\n    ldr r0, [r5, #0x10]\n    ldr r1, _022507E4 ; =ov02_022507E8\n    bl TaskManager_Call\n    pop {r3, r4, r5, pc}\n    nop\n    _022507E4: .word ov02_022507E8"
    );
    #endif
}

void ov02_022507E8(void) {
    /* Original at 0x022507E8 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetStatePtr\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #4\n    bhi _022508AA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02250814: ; jump table\n    add r0, r6, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    bl MapObject_UnpauseMovement\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    add r0, r6, #0\n    bl FollowMon_GetMapObject\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _022508AA\n    add r6, #0xe4\n    ldr r0, [r6]\n    bl MapObject_PauseMovement\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _022508AA\n    add r0, r6, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    bl MapObject_GetFacingDirection\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    add r6, #0xe4\n    mov r2, #0x14\n    ldr r3, _022508B0 ; =ov02_02253A70\n    mul r2, r1\n    ldr r0, [r6]\n    add r1, r3, r2\n    bl EventObjectMovementMan_Create\n    str r0, [r5, #4]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _022508AA\n    ldr r0, [r5, #4]\n    bl EventObjectMovementMan_IsFinish\n    cmp r0, #1\n    bne _022508AA\n    ldr r0, [r5, #4]\n    bl EventObjectMovementMan_Delete\n    ldrh r0, [r5, #2]\n    add r0, r0, #1\n    strh r0, [r5, #2]\n    ldrh r1, [r5, #2]\n    ldrh r0, [r5]\n    cmp r1, r0\n    blo _0225089A\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _022508AA\n    mov r0, #0\n    str r0, [r4]\n    b _022508AA\n    add r0, r5, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _022508B0: .word ov02_02253A70"
    );
    #endif
}

void ov02_022508B4(void) {
    /* Original at 0x022508B4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xb\n    mov r1, #4\n    bl Heap_AllocAtEnd\n    add r2, r0, #0\n    mov r0, #0\n    strh r0, [r2]\n    strh r0, [r2, #2]\n    ldr r0, [r4, #0x10]\n    ldr r1, _022508D4 ; =ov02_022508D8\n    bl TaskManager_Call\n    mov r0, #1\n    pop {r4, pc}\n    _022508D4: .word ov02_022508D8"
    );
    #endif
}

void ov02_022508D8(void) {
    /* Original at 0x022508D8 */
    /* Requires manual decompilation - 160 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetStatePtr\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #3\n    bls _022508FC\n    b _02250A44\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02250908: ; jump table\n    ldr r3, _02250A4C ; =ov02_02253B24\n    add r2, sp, #0xc\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldrh r0, [r4, #2]\n    add r0, r0, #1\n    strh r0, [r4, #2]\n    ldrh r0, [r4, #2]\n    bl _dfltu\n    add r3, r1, #0\n    add r2, r0, #0\n    ldr r1, _02250A50 ; =0x40A00000\n    mov r0, #0\n    bl _dmul\n    ldr r3, _02250A54 ; =0x40240000\n    mov r2, #0\n    bl _ddiv\n    add r3, r1, #0\n    add r2, r0, #0\n    ldr r1, _02250A58 ; =0x40B00000\n    mov r0, #0\n    bl _dadd\n    bl _dfix\n    str r0, [sp, #0xc]\n    ldrh r0, [r4, #2]\n    bl _dfltu\n    add r3, r1, #0\n    add r2, r0, #0\n    ldr r1, _02250A50 ; =0x40A00000\n    mov r0, #0\n    bl _dmul\n    ldr r3, _02250A54 ; =0x40240000\n    mov r2, #0\n    bl _ddiv\n    add r3, r1, #0\n    add r2, r0, #0\n    ldr r1, _02250A58 ; =0x40B00000\n    mov r0, #0\n    bl _dadd\n    bl _dfix\n    str r0, [sp, #0x10]\n    ldr r0, [r6, #0x3c]\n    bl ov01_021F771C\n    add r1, sp, #0xc\n    bl sub_02023E78\n    ldrh r0, [r4, #2]\n    cmp r0, #0xa\n    blo _02250A44\n    mov r0, #0\n    strh r0, [r4, #2]\n    strh r0, [r4]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02250A44\n    ldrh r0, [r4]\n    add r0, r0, #1\n    strh r0, [r4]\n    ldrh r0, [r4]\n    cmp r0, #0xa\n    blo _02250A44\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02250A44\n    ldr r3, _02250A5C ; =ov02_02253B30\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldrh r0, [r4, #2]\n    add r0, r0, #1\n    strh r0, [r4, #2]\n    ldrh r1, [r4, #2]\n    cmp r1, #0xa\n    blo _022509CE\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02250A2C\n    mov r0, #0xa\n    sub r0, r0, r1\n    bl _dflt\n    add r3, r1, #0\n    add r2, r0, #0\n    ldr r1, _02250A50 ; =0x40A00000\n    mov r0, #0\n    bl _dmul\n    ldr r3, _02250A54 ; =0x40240000\n    mov r2, #0\n    bl _ddiv\n    add r3, r1, #0\n    add r2, r0, #0\n    ldr r1, _02250A58 ; =0x40B00000\n    mov r0, #0\n    bl _dadd\n    bl _dfix\n    str r0, [sp]\n    ldrh r1, [r4, #2]\n    mov r0, #0xa\n    sub r0, r0, r1\n    bl _dflt\n    add r3, r1, #0\n    add r2, r0, #0\n    ldr r1, _02250A50 ; =0x40A00000\n    mov r0, #0\n    bl _dmul\n    ldr r3, _02250A54 ; =0x40240000\n    mov r2, #0\n    bl _ddiv\n    add r3, r1, #0\n    add r2, r0, #0\n    ldr r1, _02250A58 ; =0x40B00000\n    mov r0, #0\n    bl _dadd\n    bl _dfix\n    str r0, [sp, #4]\n    ldr r0, [r6, #0x3c]\n    bl ov01_021F771C\n    add r1, sp, #0\n    bl sub_02023E78\n    b _02250A44\n    bl Heap_Free\n    add sp, #0x18\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    nop\n    _02250A4C: .word ov02_02253B24\n    _02250A50: .word 0x40A00000\n    _02250A54: .word 0x40240000\n    _02250A58: .word 0x40B00000\n    _02250A5C: .word ov02_02253B30"
    );
    #endif
}
