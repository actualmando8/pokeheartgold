/* Decompiled from asm/overlay_80_022310C4.s */
#include "global.h"

void ov80_022310C4(void) {
    /* Original at 0x022310C4 */
    /* Requires manual decompilation - 337 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    str r0, [sp, #4]\n    ldr r1, _022313A0 ; =0x00000D98\n    mov r0, #0xb\n    add r6, r2, #0\n    str r3, [sp, #8]\n    bl Heap_Alloc\n    ldr r1, _022313A4 ; =ov80_0223DD44\n    ldr r2, _022313A0 ; =0x00000D98\n    str r0, [r1]\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    ldr r4, [r0]\n    ldr r0, [sp, #4]\n    bl sub_02030B04\n    ldr r1, _022313A8 ; =0x000006F8\n    str r0, [r4, r1]\n    ldr r0, [sp, #4]\n    add r1, r1, #4\n    str r0, [r4, r1]\n    mov r0, #0xb\n    ldr r1, _022313A4 ; =ov80_0223DD44\n    str r0, [r4]\n    ldr r4, [r1]\n    bl SaveArray_Party_Alloc\n    mov r1, #0x99\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0xb\n    bl AllocMonZeroed\n    ldr r1, _022313AC ; =0x00000D8C\n    str r0, [r4, r1]\n    ldr r0, _022313A8 ; =0x000006F8\n    ldr r4, [r4, r0]\n    ldr r0, [sp, #4]\n    bl sub_02030C5C\n    str r0, [sp, #0xc]\n    cmp r5, #0\n    bne _022311E0\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    ldr r0, [r0]\n    strb r6, [r0, #4]\n    ldrb r0, [r0, #4]\n    bl ov80_0223787C\n    add r6, r0, #0\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    mov r1, #0\n    ldr r0, [r0]\n    strb r1, [r0, #5]\n    add r0, r4, #0\n    bl sub_02030AF8\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    ldr r1, [r0]\n    ldrb r2, [r1, #4]\n    cmp r2, #3\n    bne _02231158\n    ldr r0, _022313B0 ; =0x000006FC\n    ldr r0, [r1, r0]\n    bl Save_VarsFlags_Get\n    bl Save_VarsFlags_GetVar4052\n    b _02231164\n    ldr r0, [sp, #0xc]\n    mov r3, #0\n    mov r1, #5\n    str r3, [sp]\n    bl sub_02030CA0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bne _022311A6\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    ldr r1, [r0]\n    ldr r0, _022313B0 ; =0x000006FC\n    ldr r0, [r1, r0]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    ldr r0, [r0]\n    ldrb r0, [r0, #4]\n    bl sub_0205C0CC\n    add r5, r0, #0\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    ldr r0, [r0]\n    ldrb r0, [r0, #4]\n    bl sub_0205C0CC\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl FrontierSave_GetStat\n    ldr r1, _022313A4 ; =ov80_0223DD44\n    ldr r1, [r1]\n    strh r0, [r1, #8]\n    b _022311CA\n    ldr r5, _022313A4 ; =ov80_0223DD44\n    mov r4, #0\n    ldr r0, [r5]\n    ldr r7, _022313B0 ; =0x000006FC\n    strh r4, [r0, #8]\n    ldr r1, [r5]\n    lsl r2, r4, #0x18\n    ldr r0, [r1, r7]\n    ldrb r1, [r1, #4]\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl ov80_02231930\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x12\n    blo _022311B0\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    mov r1, #0x26\n    ldr r3, [r0]\n    ldr r0, [sp, #8]\n    lsl r1, r1, #4\n    strb r0, [r3, r1]\n    add r0, sp, #0x20\n    ldrb r2, [r0, #0x10]\n    add r0, r1, #1\n    strb r2, [r3, r0]\n    b _022312CA\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    mov r1, #0\n    ldr r5, [r0]\n    str r1, [sp]\n    add r0, r4, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_02030B88\n    strb r0, [r5, #4]\n    ldrb r0, [r5, #4]\n    bl ov80_0223787C\n    mov r2, #0\n    add r6, r0, #0\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    str r2, [sp]\n    ldr r5, [r0]\n    add r0, r4, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl sub_02030B88\n    strb r0, [r5, #5]\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    ldr r1, [r0]\n    ldr r0, _022313B0 ; =0x000006FC\n    ldr r0, [r1, r0]\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    ldr r0, [r0]\n    ldrb r0, [r0, #4]\n    bl sub_0205C0CC\n    str r0, [sp, #0x10]\n    ldrb r0, [r5, #4]\n    bl sub_0205C0CC\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    bl FrontierSave_GetStat\n    ldr r1, _022313A4 ; =ov80_0223DD44\n    mov r5, #0\n    ldr r1, [r1]\n    cmp r6, #0\n    strh r0, [r1, #8]\n    ble _02231272\n    add r7, r5, #0\n    lsl r2, r5, #0x18\n    add r0, r4, #0\n    mov r1, #3\n    lsr r2, r2, #0x18\n    add r3, r7, #0\n    str r7, [sp]\n    bl sub_02030B88\n    ldr r1, _022313A4 ; =ov80_0223DD44\n    ldr r1, [r1]\n    add r2, r1, r5\n    mov r1, #0x26\n    lsl r1, r1, #4\n    strb r0, [r2, r1]\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, r6\n    blt _0223124C\n    mov r5, #0\n    add r7, r5, #0\n    lsl r2, r5, #0x18\n    add r0, r4, #0\n    mov r1, #2\n    lsr r2, r2, #0x18\n    add r3, r7, #0\n    str r7, [sp]\n    bl sub_02030B88\n    ldr r1, _022313A4 ; =ov80_0223DD44\n    ldr r2, [r1]\n    lsl r1, r5, #1\n    add r1, r2, r1\n    strh r0, [r1, #0x18]\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #0x14\n    blo _02231276\n    mov r5, #0\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    lsl r2, r5, #0x18\n    ldr r7, [r0]\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #4\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030B88\n    lsl r1, r5, #1\n    lsl r0, r0, #0x18\n    add r2, r7, r1\n    mov r1, #0x9a\n    lsr r0, r0, #0x18\n    lsl r1, r1, #2\n    strh r0, [r2, r1]\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #0x14\n    blo _0223129C\n    mov r5, #0\n    cmp r6, #0\n    ble _02231304\n    ldr r7, _022313A4 ; =ov80_0223DD44\n    ldr r4, [r7]\n    ldr r0, _022313B0 ; =0x000006FC\n    ldr r0, [r4, r0]\n    bl SaveArray_Party_Get\n    mov r1, #0x26\n    add r2, r4, r5\n    lsl r1, r1, #4\n    ldrb r1, [r2, r1]\n    bl Party_GetMonByIndex\n    ldr r4, [r7]\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    lsl r1, r5, #1\n    add r2, r4, r1\n    ldr r1, _022313B4 ; =0x00000728\n    strh r0, [r2, r1]\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, r6\n    blt _022312D2\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    mov r1, #0xa\n    ldr r4, [r0]\n    mov r0, #0\n    str r0, [r4, #0x10]\n    ldrh r0, [r4, #8]\n    bl _s32_div_f\n    strh r0, [r4, #0xa]\n    ldrb r0, [r4, #4]\n    cmp r0, #2\n    bne _0223133E\n    ldr r4, _022313A4 ; =ov80_0223DD44\n    ldr r6, _022313B8 ; =0x00000716\n    mov r5, #0\n    mov r7, #9\n    ldr r1, [r4]\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    add r1, r1, r6\n    add r2, r7, #0\n    bl sub_02030BF4\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #0x12\n    blo _02231324\n    b _0223137E\n    ldr r5, _022313A4 ; =ov80_0223DD44\n    mov r4, #0\n    add r7, sp, #0x14\n    ldr r1, [r5]\n    str r7, [sp]\n    ldrb r1, [r1, #4]\n    lsl r2, r4, #0x18\n    add r3, sp, #0x14\n    ldr r0, [sp, #4]\n    lsr r2, r2, #0x18\n    add r3, #2\n    bl ov80_022318D0\n    add r2, r0, #0\n    lsl r0, r4, #0x18\n    lsl r2, r2, #0x18\n    ldr r1, [r5]\n    ldr r3, _022313BC ; =0x00000704\n    lsr r0, r0, #0x18\n    add r6, r1, r3\n    ldrb r3, [r1, #4]\n    lsr r2, r2, #0x18\n    lsl r1, r3, #3\n    add r1, r3, r1\n    add r1, r6, r1\n    bl sub_02030BF4\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x12\n    blo _02231344\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    ldr r0, [r0]\n    ldrb r0, [r0, #4]\n    bl ov80_0223792C\n    cmp r0, #1\n    bne _02231398\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    ldr r1, [r0]\n    ldr r0, _022313B0 ; =0x000006FC\n    ldr r0, [r1, r0]\n    bl ov80_0222A840\n    ldr r0, _022313A4 ; =ov80_0223DD44\n    ldr r0, [r0]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _022313A0: .word 0x00000D98\n    _022313A4: .word ov80_0223DD44\n    _022313A8: .word 0x000006F8\n    _022313AC: .word 0x00000D8C\n    _022313B0: .word 0x000006FC\n    _022313B4: .word 0x00000728\n    _022313B8: .word 0x00000716\n    _022313BC: .word 0x00000704"
    );
    #endif
}

void ov80_022313C0(void) {
    ov80_022313C8();
}

void ov80_022313C8(void) {
    /* Original at 0x022313C8 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldrb r2, [r5, #4]\n    mov r4, #0\n    mov r6, #1\n    cmp r2, #0\n    beq _022313DA\n    mov r6, #2\n    ldr r1, _02231490 ; =0x000006F5\n    lsl r3, r2, #3\n    ldrb r0, [r5, r1]\n    add r1, #0xf\n    add r1, r5, r1\n    add r2, r2, r3\n    add r1, r1, r2\n    bl sub_02030BD0\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov80_02231A14\n    strb r0, [r5, #7]\n    add r0, r5, #0\n    add r0, #0x18\n    str r0, [sp]\n    ldr r0, _02231490 ; =0x000006F5\n    ldrb r3, [r5, #5]\n    ldrb r0, [r5, r0]\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov80_022372D8\n    ldrb r0, [r5, #5]\n    add r1, r6, #0\n    add r3, r7, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r0, #0x18\n    str r0, [sp, #4]\n    ldrb r0, [r5, #4]\n    ldrh r2, [r5, #0xa]\n    bl ov80_02237334\n    ldrb r0, [r5, #5]\n    add r6, r5, #0\n    add r6, #0x18\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x17\n    ldrh r1, [r6, r0]\n    str r0, [sp, #0xc]\n    ldr r0, _02231494 ; =0x0000FECD\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #1\n    bhi _02231444\n    add r0, r5, #0\n    bl ov80_0223793C\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, [sp, #0xc]\n    ldrh r1, [r6, r0]\n    ldr r0, _02231498 ; =0x00000133\n    cmp r1, r0\n    bne _02231450\n    mov r4, #1\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    cmp r1, r0\n    bne _0223145A\n    mov r4, #2\n    mov r0, #0x99\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Party_GetMonByIndex\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #0x9a\n    lsl r0, r0, #2\n    add r0, r5, r0\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    ldr r1, _0223149C ; =0x000006F4\n    ldrb r3, [r5, #5]\n    ldrb r1, [r5, r1]\n    mov r0, #1\n    add r2, r7, #0\n    bl ov80_02237448\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02231490: .word 0x000006F5\n    _02231494: .word 0x0000FECD\n    _02231498: .word 0x00000133\n    _0223149C: .word 0x000006F4"
    );
    #endif
}

void ov80_022314A0(void) {
    /* Original at 0x022314A0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _022314D0\n    mov r0, #0x99\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _022314B4\n    bl Heap_Free\n    ldr r0, _022314D4 ; =0x00000D8C\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _022314C0\n    bl Heap_Free\n    ldr r2, _022314D8 ; =0x00000D98\n    add r0, r4, #0\n    mov r1, #0\n    bl MI_CpuFill8\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}\n    nop\n    _022314D4: .word 0x00000D8C\n    _022314D8: .word 0x00000D98"
    );
    #endif
}

void ov80_022314DC(void) {
    /* Original at 0x022314DC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    mov r1, #0\n    bl ov80_02231518\n    ldr r1, _02231510 ; =0x000006F2\n    strh r0, [r4, r1]\n    ldrh r2, [r4, r1]\n    add r0, r1, #3\n    strb r2, [r4, r0]\n    ldrh r0, [r4, r1]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl ov80_02237920\n    ldr r1, _02231514 ; =0x000006F4\n    strb r0, [r4, r1]\n    add r0, r1, #1\n    ldrb r0, [r4, r0]\n    cmp r0, #0x11\n    blo _0223150E\n    mov r2, #0x11\n    add r0, r1, #1\n    strb r2, [r4, r0]\n    pop {r4, pc}\n    _02231510: .word 0x000006F2\n    _02231514: .word 0x000006F4"
    );
    #endif
}

void ov80_02231518(void) {
    /* Original at 0x02231518 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0, #6]\n    bx lr"
    );
    #endif
}

void ov80_0223151C(void) {
    /* Original at 0x0223151C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    ldrb r6, [r5, #4]\n    add r4, r1, #0\n    cmp r6, #3\n    beq _0223156E\n    add r0, r6, #0\n    bl sub_0205C0F4\n    add r7, r0, #0\n    ldrb r0, [r5, #4]\n    bl sub_0205C11C\n    str r0, [sp, #0x10]\n    ldrb r0, [r5, #4]\n    bl sub_0205C0F4\n    bl sub_0205C268\n    str r0, [sp, #0x14]\n    add r0, r6, #0\n    bl sub_0205C144\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    add r0, sp, #0x1c\n    str r0, [sp, #8]\n    add r0, sp, #0x18\n    str r0, [sp, #0xc]\n    ldr r0, _02231578 ; =0x000006FC\n    ldr r2, [sp, #0x10]\n    ldr r0, [r5, r0]\n    ldr r3, [sp, #0x14]\n    add r1, r7, #0\n    bl sub_020313C4\n    add sp, #0x20\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    strh r0, [r4]\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02231578: .word 0x000006FC"
    );
    #endif
}

void ov80_0223157C(void) {
    /* Original at 0x0223157C */
    /* Requires manual decompilation - 246 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    ldr r0, _022317B4 ; =0x000006FC\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    bl sub_02030C5C\n    str r0, [sp, #4]\n    ldr r0, _022317B4 ; =0x000006FC\n    ldr r0, [r5, r0]\n    bl Save_Frontier_GetStatic\n    str r0, [sp, #0xc]\n    ldrb r1, [r5, #4]\n    add r0, sp, #0x14\n    strb r1, [r0, #8]\n    mov r1, #0\n    add r0, sp, #0x1c\n    str r0, [sp]\n    ldr r0, _022317B8 ; =0x000006F8\n    add r2, r1, #0\n    ldr r0, [r5, r0]\n    add r3, r1, #0\n    bl sub_02030B30\n    ldr r0, _022317B8 ; =0x000006F8\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl sub_02030B1C\n    ldr r0, _022317B4 ; =0x000006FC\n    ldr r0, [r5, r0]\n    bl SaveArray_Party_Get\n    mov r1, #0x26\n    lsl r1, r1, #4\n    ldrb r1, [r5, r1]\n    bl Party_GetMonByIndex\n    mov r1, #5\n    mov r2, #0\n    str r0, [sp, #8]\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    ldrb r0, [r5, #4]\n    bl sub_0205C11C\n    add r7, r0, #0\n    ldrb r0, [r5, #4]\n    bl sub_0205C11C\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [sp, #0xc]\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    add r7, r0, #0\n    mov r2, #0\n    ldrb r1, [r5, #5]\n    add r0, sp, #0x14\n    add r3, r2, #0\n    strb r1, [r0, #8]\n    add r0, sp, #0x1c\n    str r0, [sp]\n    ldr r0, _022317B8 ; =0x000006F8\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl sub_02030B30\n    ldrb r0, [r5, #4]\n    bl sub_0205C0CC\n    str r0, [sp, #0x10]\n    ldrb r0, [r5, #4]\n    bl sub_0205C0CC\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r5, #8]\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    bl sub_02031108\n    cmp r4, #2\n    beq _022316C8\n    ldrb r4, [r5, #4]\n    cmp r4, #3\n    beq _02231658\n    add r0, r4, #0\n    bl sub_0205C0F4\n    add r6, r0, #0\n    add r0, r4, #0\n    bl sub_0205C0F4\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r5, #8]\n    ldr r0, [sp, #0xc]\n    add r1, r6, #0\n    bl sub_02031108\n    b _0223169A\n    cmp r7, r6\n    beq _0223167C\n    add r0, r4, #0\n    bl sub_0205C0F4\n    add r6, r0, #0\n    add r0, r4, #0\n    bl sub_0205C0F4\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r5, #8]\n    ldr r0, [sp, #0xc]\n    add r1, r6, #0\n    bl sub_02031108\n    b _0223169A\n    add r0, r4, #0\n    bl sub_0205C0F4\n    add r6, r0, #0\n    add r0, r4, #0\n    bl sub_0205C0F4\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r5, #8]\n    ldr r0, [sp, #0xc]\n    add r1, r6, #0\n    bl sub_0203126C\n    ldrb r1, [r5, #6]\n    add r0, sp, #0x14\n    mov r3, #0\n    strb r1, [r0, #8]\n    add r0, sp, #0x1c\n    str r0, [sp]\n    ldrb r2, [r5, #4]\n    ldr r0, [sp, #4]\n    mov r1, #5\n    bl sub_02030C6C\n    ldrb r0, [r5, #4]\n    cmp r0, #3\n    bne _022316C8\n    mov r0, #0x6a\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrb r3, [r5, #6]\n    ldr r0, [sp, #0xc]\n    mov r1, #0x6a\n    bl sub_02031108\n    mov r4, #0\n    add r6, sp, #0x14\n    add r7, sp, #0x14\n    lsl r0, r4, #1\n    add r0, r5, r0\n    ldrh r0, [r0, #0x18]\n    lsl r2, r4, #0x18\n    mov r1, #2\n    strh r0, [r7]\n    ldr r0, _022317B8 ; =0x000006F8\n    str r6, [sp]\n    ldr r0, [r5, r0]\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030B30\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x14\n    blo _022316CE\n    mov r4, #0\n    add r6, sp, #0x1c\n    add r7, sp, #0x14\n    mov r0, #0x26\n    add r1, r5, r4\n    lsl r0, r0, #4\n    ldrb r0, [r1, r0]\n    lsl r2, r4, #0x18\n    mov r1, #3\n    strb r0, [r7, #8]\n    ldr r0, _022317B8 ; =0x000006F8\n    str r6, [sp]\n    ldr r0, [r5, r0]\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030B30\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #2\n    blo _022316F8\n    ldr r0, _022317BC ; =0x00000704\n    mov r4, #0\n    add r6, r5, r0\n    add r7, sp, #0x14\n    ldrb r2, [r5, #4]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    lsl r1, r2, #3\n    add r1, r2, r1\n    add r1, r6, r1\n    bl sub_02030BD0\n    strb r0, [r7, #8]\n    ldr r0, _022317B4 ; =0x000006FC\n    lsl r2, r4, #0x18\n    ldrb r1, [r5, #4]\n    ldrb r3, [r7, #8]\n    ldr r0, [r5, r0]\n    lsr r2, r2, #0x18\n    bl ov80_02231930\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x12\n    blo _02231726\n    mov r4, #0\n    add r6, sp, #0x14\n    add r7, sp, #0x14\n    lsl r0, r4, #1\n    add r1, r5, r0\n    mov r0, #0x9a\n    lsl r0, r0, #2\n    ldrh r0, [r1, r0]\n    lsl r2, r4, #0x18\n    mov r1, #4\n    strh r0, [r7]\n    ldr r0, _022317B8 ; =0x000006F8\n    str r6, [sp]\n    ldr r0, [r5, r0]\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030B30\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x14\n    blo _02231758\n    ldrb r0, [r5, #4]\n    bl sub_0205C11C\n    add r4, r0, #0\n    ldrb r0, [r5, #4]\n    bl sub_0205C11C\n    bl sub_0205C268\n    add r5, r0, #0\n    ldr r0, [sp, #8]\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r3, r0, #0\n    lsl r3, r3, #0x10\n    ldr r0, [sp, #0xc]\n    add r1, r4, #0\n    add r2, r5, #0\n    lsr r3, r3, #0x10\n    bl sub_02031108\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022317B4: .word 0x000006FC\n    _022317B8: .word 0x000006F8\n    _022317BC: .word 0x00000704"
    );
    #endif
}

void ov80_022317C0(void) {
    /* Original at 0x022317C0 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #5]\n    add r1, r1, #1\n    strb r1, [r0, #5]\n    ldrb r0, [r0, #5]\n    bx lr"
    );
    #endif
}

void ov80_022317CC(void) {
    /* Original at 0x022317CC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #5]\n    bx lr"
    );
    #endif
}

void ov80_022317D0(void) {
    /* Original at 0x022317D0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #0x30\n    add r2, r0, #0\n    ldrb r3, [r2, #5]\n    add r0, sp, #0\n    lsl r3, r3, #1\n    add r1, r1, r3\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x17\n    add r1, r2, r1\n    ldrh r1, [r1, #0x18]\n    mov r2, #0xb\n    mov r3, #0xcc\n    bl ov80_02229F04\n    bl Heap_Free\n    add r0, sp, #0\n    ldrh r0, [r0, #4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl ov80_0222A30C\n    add sp, #0x30\n    pop {r3, pc}"
    );
    #endif
}

void ov80_02231804(void) {
    /* Original at 0x02231804 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #4]\n    ldr r0, _02231824 ; =0x00000704\n    add r2, r4, r0\n    lsl r0, r1, #3\n    add r0, r1, r0\n    add r0, r2, r0\n    bl sub_02030C34\n    add r0, r4, #0\n    mov r1, #1\n    bl ov80_0223157C\n    pop {r4, pc}\n    nop\n    _02231824: .word 0x00000704"
    );
    #endif
}

void ov80_02231828(void) {
    /* Original at 0x02231828 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    strb r1, [r0, #6]\n    ldrh r1, [r0, #0xa]\n    cmp r1, #0x12\n    bhs _02231836\n    add r1, r1, #1\n    strh r1, [r0, #0xa]\n    ldr r3, _02231840 ; =ov80_0223157C\n    mov r1, #0\n    strb r1, [r0, #5]\n    bx r3\n    nop\n    _02231840: .word ov80_0223157C"
    );
    #endif
}

void ov80_02231844(void) {
    /* Original at 0x02231844 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #7\n    bhi _02231886\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02231856: ; jump table\n    bl ov80_0222AF10\n    pop {r3, pc}\n    bl ov80_0222AF54\n    pop {r3, pc}\n    bl ov80_0222AFB8\n    pop {r3, pc}\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    bl ov80_0222B024\n    pop {r3, pc}\n    bl ov80_0222B070\n    pop {r3, pc}"
    );
    #endif
}

void ov80_02231888(void) {
    /* Original at 0x02231888 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r3, [r0, #4]\n    ldrh r2, [r0, #0xa]\n    cmp r3, #1\n    bhi _0223189E\n    cmp r2, #0x12\n    blo _02231898\n    mov r1, #0xc\n    b _022318AA\n    ldr r1, _022318C8 ; =ov80_0223BDFC\n    ldrb r1, [r1, r2]\n    b _022318AA\n    cmp r2, #0x12\n    blo _022318A6\n    mov r1, #0x17\n    b _022318AA\n    ldr r1, _022318CC ; =ov80_0223BE10\n    ldrb r1, [r1, r2]\n    cmp r3, #0\n    bne _022318BC\n    ldrh r0, [r0, #8]\n    cmp r0, #0x32\n    beq _022318B8\n    cmp r0, #0xaa\n    bne _022318C2\n    mov r1, #0x14\n    b _022318C2\n    cmp r3, #2\n    bne _022318C2\n    mov r1, #0xc\n    add r0, r1, #0\n    bx lr\n    nop\n    _022318C8: .word ov80_0223BDFC\n    _022318CC: .word ov80_0223BE10"
    );
    #endif
}

void ov80_022318D0(void) {
    /* Original at 0x022318D0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r1, #0\n    add r5, r2, #0\n    add r6, r3, #0\n    ldr r4, [sp, #0x20]\n    bl Save_Frontier_GetStatic\n    str r0, [sp]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl sub_0205C0A0\n    str r0, [sp, #4]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl sub_0205C0A0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    bl FrontierSave_GetStat\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    mov r0, #0xf\n    and r0, r1\n    strh r0, [r6]\n    asr r0, r1, #4\n    strh r0, [r4]\n    lsr r2, r5, #0x1f\n    lsl r1, r5, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    bne _02231928\n    add sp, #8\n    ldrh r0, [r6]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r4]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02231930(void) {
    /* Original at 0x02231930 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r3, #0\n    add r3, sp, #0xc\n    str r3, [sp]\n    add r3, sp, #0xc\n    add r3, #2\n    str r0, [sp, #4]\n    add r6, r1, #0\n    add r5, r2, #0\n    bl ov80_022318D0\n    add r0, sp, #0xc\n    ldrh r1, [r0]\n    ldrh r0, [r0, #2]\n    lsr r3, r5, #0x1f\n    lsl r1, r1, #4\n    orr r0, r1\n    lsl r2, r5, #0x1f\n    lsl r0, r0, #0x18\n    sub r2, r2, r3\n    mov r1, #0x1f\n    ror r2, r1\n    add r1, r3, r2\n    lsl r1, r1, #0x18\n    lsr r0, r0, #0x18\n    lsr r1, r1, #0x18\n    bne _0223196C\n    mov r2, #0xf0\n    b _0223196E\n    mov r2, #0xf\n    and r0, r2\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    lsl r0, r1, #2\n    add r1, r7, #0\n    lsl r1, r0\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    orr r4, r0\n    ldr r0, [sp, #4]\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_0205C0A0\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_0205C0A0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r1, [sp, #8]\n    add r0, r7, #0\n    add r3, r4, #0\n    bl sub_02031108\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_022319B0(void) {
    /* Original at 0x022319B0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #4]\n    cmp r0, #2\n    beq _022319FE\n    ldr r0, _02231A00 ; =0x00000704\n    mov r4, #0\n    add r6, r5, r0\n    ldrb r2, [r5, #4]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    lsl r1, r2, #3\n    add r1, r2, r1\n    add r1, r6, r1\n    bl sub_02030BD0\n    cmp r0, #0xa\n    blo _022319DA\n    add r4, r4, #1\n    cmp r4, #0x11\n    blt _022319C0\n    cmp r4, #0x11\n    bne _022319FE\n    ldr r0, _02231A00 ; =0x00000704\n    mov r4, #0\n    add r6, r5, r0\n    mov r7, #9\n    ldrb r2, [r5, #4]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    lsl r1, r2, #3\n    add r1, r2, r1\n    add r1, r6, r1\n    add r2, r7, #0\n    bl sub_02030BF4\n    add r4, r4, #1\n    cmp r4, #0x11\n    blt _022319E6\n    pop {r3, r4, r5, r6, r7, pc}\n    _02231A00: .word 0x00000704"
    );
    #endif
}

void ov80_02231A04(void) {
    /* Original at 0x02231A04 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov80_022379C8\n    bl ov80_02237A40\n    str r0, [r4, #0xc]\n    pop {r4, pc}"
    );
    #endif
}

void ov80_02231A14(void) {
    /* Original at 0x02231A14 */
    /* Requires manual decompilation - 188 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    ldr r1, _02231BE0 ; =0x000006F5\n    ldrb r2, [r6, #4]\n    ldrb r0, [r6, r1]\n    add r1, #0xf\n    add r3, r6, r1\n    lsl r1, r2, #3\n    add r1, r2, r1\n    add r1, r3, r1\n    bl sub_02030BD0\n    add r4, r0, #0\n    add r0, r6, #0\n    bl ov80_022379C8\n    str r0, [sp, #4]\n    ldrb r0, [r6, #4]\n    cmp r0, #2\n    bne _02231A48\n    ldr r0, [sp, #4]\n    add sp, #0xc\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    ble _02231A60\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02231A6E\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    ldr r5, [r6, #0xc]\n    bl _ffix\n    lsl r1, r5, #1\n    add r1, r5, r1\n    sub r0, r0, r1\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl _fflt\n    ldr r1, _02231BE4 ; =0x45800000\n    bl _fdiv\n    bl _f2d\n    add r3, r1, #0\n    add r2, r0, #0\n    ldr r1, _02231BE8 ; =0x40140000\n    mov r0, #0\n    bl _dmul\n    bl _d2f\n    add r5, r0, #0\n    ldr r0, [sp, #4]\n    bl _fflt\n    add r1, r5, #0\n    bl _fdiv\n    bl _f2d\n    ldr r3, _02231BEC ; =0x3FF00000\n    mov r2, #0\n    bl _dls\n    bhs _02231AC2\n    add r0, r4, #0\n    bl _fflt\n    str r0, [sp]\n    b _02231B00\n    ldr r0, [sp, #4]\n    mul r0, r4\n    cmp r0, #0\n    ble _02231ADC\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02231AEA\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    bl _fflt\n    ldr r1, _02231BE4 ; =0x45800000\n    bl _fdiv\n    add r1, r5, #0\n    bl _fdiv\n    str r0, [sp]\n    ldr r0, _02231BF0 ; =0x00000704\n    mov r5, #0\n    add r4, r5, #0\n    add r7, r6, r0\n    ldr r0, _02231BE0 ; =0x000006F5\n    ldrb r0, [r6, r0]\n    cmp r4, r0\n    bne _02231B26\n    add r0, r5, #0\n    bl _f2d\n    ldr r3, _02231BEC ; =0x3FF00000\n    mov r2, #0\n    bl _dadd\n    bl _d2f\n    add r5, r0, #0\n    b _02231B4E\n    ldrb r2, [r6, #4]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    lsl r1, r2, #3\n    add r1, r2, r1\n    add r1, r7, r1\n    bl sub_02030BD0\n    cmp r0, #0\n    beq _02231B4E\n    add r0, r5, #0\n    bl _f2d\n    ldr r3, _02231BEC ; =0x3FF00000\n    mov r2, #0\n    bl _dadd\n    bl _d2f\n    add r5, r0, #0\n    add r4, r4, #1\n    cmp r4, #0x12\n    blt _02231B08\n    add r0, r5, #0\n    bl _f2d\n    add r2, r0, #0\n    mov r0, #0\n    add r3, r1, #0\n    add r1, r0, #0\n    bl _dneq\n    beq _02231B7C\n    add r0, r5, #0\n    bl _f2d\n    ldr r3, _02231BEC ; =0x3FF00000\n    mov r2, #0\n    bl _dsub\n    bl _d2f\n    add r5, r0, #0\n    add r0, r5, #0\n    bl _f2d\n    ldr r3, _02231BF4 ; =0x3FE00000\n    mov r2, #0\n    bl _dmul\n    bl _d2f\n    add r4, r0, #0\n    ldr r0, [sp, #8]\n    bl _fflt\n    ldr r1, _02231BE4 ; =0x45800000\n    bl _fdiv\n    ldr r1, [sp]\n    bl _fadd\n    add r1, r0, #0\n    add r0, r4, #0\n    bl _fadd\n    add r5, r0, #0\n    bl _ffix\n    add r4, r0, #0\n    add r0, r5, #0\n    bl _ffix\n    bl _fflt\n    add r1, r0, #0\n    add r0, r5, #0\n    bl _fneq\n    beq _02231BC8\n    add r4, r4, #1\n    ldr r0, [sp, #4]\n    cmp r4, r0\n    ble _02231BD0\n    add r4, r0, #0\n    cmp r4, #0x64\n    ble _02231BD6\n    mov r4, #0x64\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02231BE0: .word 0x000006F5\n    _02231BE4: .word 0x45800000\n    _02231BE8: .word 0x40140000\n    _02231BEC: .word 0x3FF00000\n    _02231BF0: .word 0x00000704\n    _02231BF4: .word 0x3FE00000"
    );
    #endif
}
