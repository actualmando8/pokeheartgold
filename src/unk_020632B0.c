/* Decompiled from asm/unk_020632B0.s */
#include "global.h"

void sub_020632B0(void) {
    /* Original at 0x020632B0 */
    /* Requires manual decompilation - 149 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r1, #0\n    str r3, [sp, #4]\n    mov r1, #0xc\n    str r0, [sp]\n    add r7, r2, #0\n    ldr r5, [sp, #0x24]\n    bl sub_0205F3C0\n    add r4, r0, #0\n    mov r0, #0xb\n    mov r1, #0x1c\n    bl Heap_AllocAtEnd\n    mov r1, #0\n    mov r2, #0x1c\n    str r0, [r4, #8]\n    bl MI_CpuFill8\n    mov r0, #0x10\n    add r1, sp, #0x10\n    ldrsb r0, [r1, r0]\n    cmp r5, #0\n    strb r0, [r4]\n    strb r5, [r4, #1]\n    ldrh r0, [r1, #0x18]\n    strb r0, [r4, #3]\n    ble _020632FC\n    lsl r0, r5, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0206330A\n    lsl r0, r5, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #8]\n    ldr r0, [r4, #8]\n    strb r6, [r0, #1]\n    ldr r0, [r4, #8]\n    strb r7, [r0, #2]\n    ldr r1, [r4, #8]\n    ldr r0, [sp, #4]\n    strb r0, [r1, #3]\n    lsl r0, r6, #4\n    cmp r0, #0\n    ble _02063336\n    lsl r0, r6, #0x10\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02063344\n    lsl r0, r6, #0x10\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #8]\n    bl FX_Div\n    ldr r1, [r4, #8]\n    str r0, [r1, #4]\n    lsl r0, r7, #4\n    cmp r0, #0\n    ble _0206336A\n    lsl r0, r7, #0x10\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02063378\n    lsl r0, r7, #0x10\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #8]\n    bl FX_Div\n    ldr r1, [r4, #8]\n    str r0, [r1, #8]\n    ldr r0, [sp, #4]\n    lsl r0, r0, #4\n    cmp r0, #0\n    ble _020633A2\n    ldr r0, [sp, #4]\n    lsl r0, r0, #0x10\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _020633B2\n    ldr r0, [sp, #4]\n    lsl r0, r0, #0x10\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #8]\n    bl FX_Div\n    ldr r1, [r4, #8]\n    str r0, [r1, #0xc]\n    mov r0, #0xb4\n    add r1, r5, #0\n    bl _s32_div_f\n    ldr r1, [r4, #8]\n    strb r0, [r1]\n    ldr r1, [r4, #8]\n    ldr r0, [sp]\n    add r1, #0x10\n    bl MapObject_CopyPositionVector\n    ldr r0, [r4, #8]\n    ldr r0, [r0, #0x14]\n    str r0, [r4, #4]\n    ldr r0, [sp]\n    bl sub_02060F78\n    ldr r0, [sp]\n    ldr r1, _0206341C ; =0x00010004\n    bl MapObject_SetFlagsBits\n    add r2, sp, #0x10\n    mov r1, #0x10\n    ldrsb r1, [r2, r1]\n    ldr r0, [sp]\n    bl MapObject_SetOrQueueFacing\n    add r1, sp, #0x10\n    ldrh r1, [r1, #0x18]\n    ldr r0, [sp]\n    bl sub_0205F328\n    ldr r0, [sp]\n    bl MapObject_IncrementMovementStep\n    ldr r0, [sp]\n    bl MapObject_CheckVisible\n    cmp r0, #0\n    bne _02063416\n    ldr r0, _02063420 ; =SEQ_SE_DP_DANSA\n    bl PlaySE\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0206341C: .word 0x00010004\n    _02063420: .word SEQ_SE_DP_DANSA"
    );
    #endif
}

void MapObjectMovementCmd108_Step1(void) {
    /* Original at 0x02063424 */
    /* Requires manual decompilation - 257 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    bl sub_0205F3E4\n    add r4, r0, #0\n    ldrb r0, [r4, #2]\n    cmp r0, #0\n    beq _02063448\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02063456\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp]\n    asr r0, r0, #0x1f\n    str r0, [sp, #4]\n    ldr r6, [r4, #8]\n    ldr r2, [sp]\n    ldr r0, [r6, #4]\n    ldr r3, [sp, #4]\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    ldr r3, [r6, #0x10]\n    mov r6, #2\n    mov r2, #0\n    lsl r6, r6, #0xa\n    add r6, r0, r6\n    adc r1, r2\n    lsl r0, r1, #0x14\n    lsr r1, r6, #0xc\n    orr r1, r0\n    add r0, r3, r1\n    str r2, [sp, #0xc]\n    str r0, [sp, #8]\n    ldr r6, [r4, #8]\n    ldr r2, [sp]\n    ldr r0, [r6, #0xc]\n    ldr r3, [sp, #4]\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r3, #2\n    ldr r2, [r6, #0x18]\n    mov r6, #0\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    adc r1, r6\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    orr r1, r0\n    add r0, r2, r1\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_CheckFlag29\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, sp, #8\n    bl sub_02061248\n    cmp r0, #0\n    beq _020634CC\n    ldr r0, [sp, #0xc]\n    str r0, [r4, #4]\n    b _020634D0\n    ldr r0, [r4, #4]\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r1, sp, #8\n    bl MapObject_SetPositionVector\n    ldr r0, [r4, #8]\n    ldrb r1, [r0]\n    ldrb r0, [r4, #2]\n    mul r0, r1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_SinDegNoWrap\n    ldr r7, [r4, #8]\n    add r6, r0, #0\n    ldr r0, [r7, #8]\n    ldr r2, [sp]\n    ldr r3, [sp, #4]\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    add r2, r0, #0\n    ldr r0, [r7, #0x14]\n    mov r3, #0\n    mov r7, #2\n    lsl r7, r7, #0xa\n    add r2, r2, r7\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r1\n    add r0, r0, r2\n    asr r2, r6, #0x1f\n    lsr r1, r6, #0x10\n    lsl r2, r2, #0x10\n    orr r2, r1\n    lsl r1, r6, #0x10\n    add r6, r1, r7\n    adc r2, r3\n    lsl r1, r2, #0x14\n    lsr r2, r6, #0xc\n    orr r2, r1\n    add r1, r0, r2\n    ldr r0, [sp, #0xc]\n    str r3, [sp, #8]\n    sub r0, r1, r0\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r1, sp, #8\n    str r3, [sp, #0x10]\n    bl sub_0205F9A0\n    mov r0, #1\n    ldrsb r1, [r4, r0]\n    sub r1, r1, #1\n    strb r1, [r4, #1]\n    ldrb r1, [r4, #2]\n    add r1, r1, #1\n    strb r1, [r4, #2]\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    ble _02063550\n    add sp, #0x14\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [sp, #0x10]\n    str r0, [sp, #0xc]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, sp, #8\n    bl MapObject_SetFacingVector\n    add r0, r5, #0\n    add r1, sp, #8\n    bl sub_0205F9A0\n    ldr r2, [r4, #8]\n    mov r1, #1\n    ldrsb r1, [r2, r1]\n    add r0, r5, #0\n    bl MapObject_AddCurrentX\n    ldr r2, [r4, #8]\n    mov r1, #2\n    ldrsb r1, [r2, r1]\n    add r0, r5, #0\n    bl MapObject_AddCurrentY\n    ldr r2, [r4, #8]\n    mov r1, #3\n    ldrsb r1, [r2, r1]\n    add r0, r5, #0\n    bl MapObject_AddCurrentZ\n    ldr r6, [r4, #8]\n    mov r0, #1\n    ldrsb r1, [r6, r0]\n    lsl r0, r1, #4\n    cmp r0, #0\n    ble _020635AA\n    lsl r0, r1, #0x10\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _020635B8\n    lsl r0, r1, #0x10\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [r6, #0x10]\n    add r0, r1, r0\n    str r0, [sp, #8]\n    ldr r6, [r4, #8]\n    mov r0, #2\n    ldrsb r1, [r6, r0]\n    lsl r0, r1, #4\n    cmp r0, #0\n    ble _020635E0\n    lsl r0, r1, #0x10\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _020635EE\n    lsl r0, r1, #0x10\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [r6, #0x14]\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    ldr r6, [r4, #8]\n    mov r0, #3\n    ldrsb r1, [r6, r0]\n    lsl r0, r1, #4\n    cmp r0, #0\n    ble _02063616\n    lsl r0, r1, #0x10\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02063624\n    lsl r0, r1, #0x10\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [r6, #0x18]\n    add r0, r1, r0\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    add r1, sp, #8\n    bl MapObject_SetPositionVector\n    add r0, r5, #0\n    bl sub_02061070\n    ldr r1, _0206367C ; =0x00020008\n    add r0, r5, #0\n    bl MapObject_SetFlagsBits\n    add r0, r5, #0\n    bl sub_02060F78\n    add r0, r5, #0\n    bl sub_0205F484\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r5, #0\n    bl MapObject_IncrementMovementStep\n    add r0, r5, #0\n    bl MapObject_CheckVisible\n    cmp r0, #0\n    bne _0206366E\n    ldr r0, _02063680 ; =SEQ_SE_DP_SUTYA2\n    bl PlaySE\n    ldr r0, [r4, #8]\n    bl Heap_Free\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0206367C: .word 0x00020008\n    _02063680: .word SEQ_SE_DP_SUTYA2"
    );
    #endif
}

void MapObjectMovementCmd105_Step0(void) {
    sub_020632B0(1, 0, 0xf, 3, 1, 5);
}

void MapObjectMovementCmd105_Step2(void) {
    sub_020632B0(1, 0xc, 4, 0, 3);
}

void MapObjectMovementCmd105_Step4(void) {
    sub_020632B0(1, 0, 0xf, 3);
}

void MapObjectMovementCmd105_Step6(void) {
    sub_020632B0(1, 9, 0, 3);
}

void MapObjectMovementCmd105_Step8(void) {
    sub_020632B0(1, 0xc, 2, 3, 1);
}

void MapObjectMovementCmd106_Step0(void) {
    sub_020632B0(1, 2, 6, 1, 3, 0);
}

void MapObjectMovementCmd106_Step2(void) {
    sub_020632B0(1, 0xc, 1, 3, 0, 5);
}

void MapObjectMovementCmd106_Step4(void) {
    sub_020632B0(1, 2, 3, 6, 0);
}

void MapObjectMovementCmd106_Step6(void) {
    sub_020632B0(1, 2, 3, 9, 0);
}

void MapObjectMovementCmd107_Step0(void) {
    sub_020632B0(1, 3, 1, 6);
}

void MapObjectMovementCmd107_Step2(void) {
    sub_020632B0(1, 0, 1, 3, 9, 4);
}

void MapObjectMovementCmd107_Step4(void) {
    sub_020632B0(1, 0xc, 2, 3, 0);
}

void MapObjectMovementCmd107_Step6(void) {
    sub_020632B0(1, 0, 6, 3);
}

void MapObjectMovementCmd107_Step8(void) {
    sub_020632B0(1, 0, 1, 3, 9);
}

void MapObjectMovementCmd107_Step10(void) {
    sub_020632B0(1, 3, 0, 9);
}

void MapObjectMovementCmd107_Step12(void) {
    sub_020632B0(1, 0, 0xc, 1, 3, 4);
}

void MapObjectMovementCmd109_Step12(void) {
    sub_020632B0(1, 0, 0xc, 1, 3, 5);
}

void MapObjectMovementCmd108_Step0(void) {
    sub_020632B0(1, 2, 3, 9, 1, 5);
}

void MapObjectMovementCmd110_Step0(void) {
    sub_020632B0(1, 2, 3, 9, 1, 4);
}

void MapObjectMovementCmd108_Step2(void) {
    sub_020632B0(1, 1, 0, 0xc, 3, 5);
}

void MapObjectMovementCmd111_Step0(void) {
    sub_020632B0(1, 0, 1, 3, 6, 2);
}

void MapObjectMovementCmd111_Step2(void) {
    sub_020632B0(1, 2, 6, 0, 3);
}

void MapObjectMovementCmd111_Step4(void) {
    sub_020632B0(1, 3, 0, 9);
}

void MapObjectMovementCmd111_Step6(void) {
    sub_020632B0(1, 0, 1, 3, 6, 2);
}

void MapObjectMovementCmd111_Step10(void) {
    sub_020632B0(1, 2, 3, 9, 0);
}

void MapObjectMovementCmd111_Step14(void) {
    sub_020632B0(1, 0, 6, 3);
}

void MapObjectMovementCmd111_Step16(void) {
    sub_020632B0(1, 0, 9, 3);
}

void MapObjectMovementCmd111_Step18(void) {
    sub_020632B0(1, 3, 9, 0, 1);
}

void MapObjectMovementCmd112_Step0(void) {
    sub_020632B0(1, 4, 9, 0, 3);
}

void sub_02063A14(void) {
    sub_02063A40();
}

void sub_02063A1C(void) {
    /* Original at 0x02063A1C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02063A5C\n    cmp r0, #0\n    bne _02063A2C\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    bl sub_02063A78\n    cmp r0, #0\n    beq _02063A3A\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_02063A40(void) {
    MapObject_GetType();
}

void sub_02063A5C(void) {
    MapObject_GetType();
}

void sub_02063A78(void) {
    MapObject_GetType();
}

void sub_02063A94(void) {
    /* Original at 0x02063A94 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl MapObject_GetXCoord\n    add r5, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetPreviousXCoord\n    cmp r5, r0\n    beq _02063AAC\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl MapObject_GetZCoord\n    add r5, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetPreviousZCoord\n    cmp r5, r0\n    beq _02063AC2\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02063AC8(void) {
    /* Original at 0x02063AC8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl MapObject_GetXCoord\n    add r5, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetPreviousXCoord\n    cmp r5, r0\n    beq _02063AE0\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl MapObject_GetZCoord\n    add r5, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetPreviousZCoord\n    cmp r5, r0\n    bne _02063AF6\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02063AFC(void) {
    /* Original at 0x02063AFC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

u8 sub_02063B00(void) {
    return 0;
}

u8 sub_02063B04(void) {
    return 0;
}

void sub_02063B08(void) {
    /* Original at 0x02063B08 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r1, #9\n    bl sub_0205F398\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl MapObject_GetParam\n    strb r0, [r4, #3]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02063B20(void) {
    /* Original at 0x02063B20 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F3BC\n    add r4, r0, #0\n    ldrb r0, [r4]\n    cmp r0, #3\n    bhi _02063B98\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02063B3C: ; jump table\n    add r0, r5, #0\n    bl sub_02063A94\n    cmp r0, #1\n    bne _02063B98\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02063B98\n    add r0, r5, #0\n    bl sub_02063AC8\n    cmp r0, #0\n    beq _02063B98\n    mov r0, #2\n    ldrsb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, #2]\n    ldrsb r1, [r4, r0]\n    mov r0, #3\n    ldrsb r0, [r4, r0]\n    cmp r1, r0\n    bge _02063B78\n    mov r0, #0\n    strb r0, [r4]\n    b _02063B98\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    add r0, r5, #0\n    bl MapObject_CheckSingleMovement\n    cmp r0, #1\n    beq _02063B98\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    mov r0, #0\n    strb r0, [r4, #2]\n    strb r0, [r4, #1]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02063B9C(void) {
    /* Original at 0x02063B9C */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    bl sub_0205F3BC\n    add r4, r0, #0\n    ldrb r0, [r4, #1]\n    cmp r0, #3\n    bhi _02063C7A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02063BBA: ; jump table\n    ldr r3, _02063C80 ; =_020FE0C4\n    add r2, sp, #0x10\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    strb r0, [r4, #4]\n    lsl r1, r0, #2\n    add r0, sp, #0x10\n    ldr r0, [r0, r1]\n    strb r0, [r4, #5]\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    ldr r6, _02063C84 ; =_020FE0D4\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    mov r0, #5\n    ldrsb r0, [r4, r0]\n    lsl r3, r0, #3\n    mov r0, #6\n    ldrsb r0, [r4, r0]\n    lsl r1, r0, #2\n    add r0, r2, r3\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl sub_0206234C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_ForceSetHeldMovement\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    add r0, r5, #0\n    bl sub_02062428\n    cmp r0, #0\n    bne _02063C26\n    add sp, #0x20\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    mov r0, #8\n    ldrsb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, #8]\n    ldrsb r0, [r4, r0]\n    cmp r0, #8\n    bge _02063C40\n    add sp, #0x20\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    strb r0, [r4, #8]\n    mov r0, #7\n    ldrsb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, #7]\n    ldrsb r0, [r4, r0]\n    cmp r0, #4\n    bge _02063C64\n    mov r0, #6\n    ldrsb r0, [r4, r0]\n    add sp, #0x20\n    add r1, r0, #1\n    mov r0, #1\n    and r1, r0\n    strb r1, [r4, #6]\n    strb r0, [r4, #1]\n    pop {r4, r5, r6, pc}\n    mov r1, #4\n    ldrsb r1, [r4, r1]\n    add r0, r5, #0\n    bl MapObject_SetFacingDirection\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    mov r0, #0\n    strb r0, [r4, #7]\n    strb r0, [r4]\n    mov r0, #0\n    add sp, #0x20\n    pop {r4, r5, r6, pc}\n    _02063C80: .word _020FE0C4\n    _02063C84: .word _020FE0D4"
    );
    #endif
}

void sub_02063C88(void) {
    /* Original at 0x02063C88 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r1, #9\n    bl sub_0205F398\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl MapObject_GetParam\n    strb r0, [r4, #3]\n    add r0, r5, #0\n    bl MapObject_GetType\n    cmp r0, #5\n    beq _02063CAC\n    mov r0, #1\n    b _02063CAE\n    mov r0, #0\n    strb r0, [r4, #5]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02063CB4(void) {
    /* Original at 0x02063CB4 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F3BC\n    add r4, r0, #0\n    ldrb r0, [r4]\n    cmp r0, #3\n    bhi _02063D2C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02063CD0: ; jump table\n    add r0, r5, #0\n    bl sub_02063A94\n    cmp r0, #1\n    bne _02063D2C\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02063D2C\n    add r0, r5, #0\n    bl sub_02063AC8\n    cmp r0, #0\n    beq _02063D2C\n    mov r0, #2\n    ldrsb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, #2]\n    ldrsb r1, [r4, r0]\n    mov r0, #3\n    ldrsb r0, [r4, r0]\n    cmp r1, r0\n    bge _02063D0C\n    mov r0, #0\n    strb r0, [r4]\n    b _02063D2C\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    add r0, r5, #0\n    bl MapObject_CheckSingleMovement\n    cmp r0, #1\n    beq _02063D2C\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    mov r0, #0\n    strb r0, [r4, #2]\n    strb r0, [r4, #1]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02063D30(void) {
    /* Original at 0x02063D30 */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    ldr r3, _02063E4C ; =_020FE0E4\n    add r2, sp, #0\n    add r7, r0, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r7, #0\n    bl sub_0205F3BC\n    add r4, r0, #0\n    ldrb r0, [r4, #1]\n    cmp r0, #3\n    bhi _02063E46\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02063D64: ; jump table\n    add r0, r7, #0\n    bl MapObject_GetFacingDirection\n    mov r5, #0\n    add r6, r0, #0\n    add r1, r5, #0\n    add r0, sp, #0\n    mov r2, #5\n    b _02063D82\n    add r1, r1, #4\n    add r5, r5, #1\n    cmp r5, #4\n    bge _02063D92\n    ldrsb r3, [r4, r2]\n    lsl r3, r3, #4\n    add r3, r0, r3\n    ldr r3, [r1, r3]\n    cmp r6, r3\n    bne _02063D7E\n    cmp r5, #4\n    blt _02063D9A\n    bl GF_AssertFail\n    add r0, r5, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    strb r6, [r4, #4]\n    add r0, r2, r1\n    strb r0, [r4, #6]\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    mov r0, #5\n    ldrsb r0, [r4, r0]\n    add r2, sp, #0\n    lsl r3, r0, #4\n    mov r0, #6\n    ldrsb r0, [r4, r0]\n    lsl r1, r0, #2\n    add r0, r2, r3\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl sub_0206234C\n    add r1, r0, #0\n    add r0, r7, #0\n    bl MapObject_ForceSetHeldMovement\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    add r0, r7, #0\n    bl sub_02062428\n    cmp r0, #0\n    bne _02063DE8\n    add sp, #0x20\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    mov r0, #8\n    ldrsb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, #8]\n    ldrsb r0, [r4, r0]\n    cmp r0, #8\n    bge _02063E02\n    add sp, #0x20\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    strb r0, [r4, #8]\n    mov r0, #7\n    ldrsb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, #7]\n    ldrsb r0, [r4, r0]\n    cmp r0, #4\n    bge _02063E30\n    mov r0, #6\n    ldrsb r0, [r4, r0]\n    add sp, #0x20\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    strb r0, [r4, #6]\n    mov r0, #1\n    strb r0, [r4, #1]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #4\n    ldrsb r1, [r4, r1]\n    add r0, r7, #0\n    bl MapObject_SetFacingDirection\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    mov r0, #0\n    strb r0, [r4, #7]\n    strb r0, [r4]\n    mov r0, #0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _02063E4C: .word _020FE0E4"
    );
    #endif
}

void sub_02063E50(void) {
    /* Original at 0x02063E50 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x18\n    add r4, r0, #0\n    bl sub_0205F3E8\n    ldr r1, _02063E6C ; =0x00000106\n    str r1, [r0]\n    mov r1, #0\n    str r1, [r0, #4]\n    add r0, r4, #0\n    bl sub_0205F484\n    pop {r4, pc}\n    nop\n    _02063E6C: .word 0x00000106"
    );
    #endif
}

void sub_02063E70(void) {
    /* Original at 0x02063E70 */
    /* Requires manual decompilation - 148 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_0205F394\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    add r1, r5, #0\n    bl sub_02055780\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    bne _02063E9C\n    b _02063FDC\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    bne _02063ECC\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    add r1, r5, #0\n    bl FieldSystem_ApricornTree_TryGetApricorn\n    add r1, r6, #0\n    bl sub_020640A4\n    str r0, [r4]\n    ldr r1, [r4]\n    add r0, r5, #0\n    bl MapObject_SetSpriteID\n    add r1, r4, #0\n    ldr r2, [r4]\n    add r0, r5, #0\n    add r1, #8\n    bl ov01_021F94C0\n    b _02063F22\n    ldr r0, [r4, #4]\n    cmp r6, r0\n    beq _02063F22\n    add r1, r4, #0\n    ldr r2, [r4]\n    add r0, r5, #0\n    add r1, #8\n    bl ov01_021F95CC\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    add r1, r5, #0\n    bl FieldSystem_ApricornTree_TryGetApricorn\n    add r1, r6, #0\n    bl sub_020640A4\n    str r0, [r4]\n    ldr r1, [r4]\n    add r0, r5, #0\n    bl MapObject_SetSpriteID\n    ldr r1, [r4]\n    ldr r0, _02063FE0 ; =0x0000FFFF\n    cmp r1, r0\n    beq _02063F1A\n    cmp r6, #1\n    bne _02063F0C\n    add r0, r5, #0\n    bl ov01_021FE66C\n    add r1, r4, #0\n    ldr r2, [r4]\n    add r0, r5, #0\n    add r1, #8\n    bl ov01_021F94C0\n    b _02063F1E\n    bl GF_AssertFail\n    mov r0, #0\n    strh r0, [r7, #2]\n    add r0, r5, #0\n    str r6, [r4, #4]\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _02063FDC\n    ldr r1, [r4, #8]\n    cmp r1, #0\n    beq _02063FDC\n    add r0, r5, #0\n    bl ov01_021FA3E8\n    add r0, r5, #0\n    bl ov01_021F9344\n    cmp r0, #0\n    bne _02063FD4\n    add r0, r5, #0\n    bl sub_0205F330\n    cmp r0, #0\n    beq _02063F58\n    cmp r0, #1\n    beq _02063F74\n    cmp r0, #2\n    beq _02063F90\n    b _02063FAC\n    ldr r0, [r4, #8]\n    bl sub_02023EF4\n    cmp r0, #0\n    beq _02063FCA\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl sub_02023EE0\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl sub_02023F40\n    b _02063FCA\n    ldr r0, [r4, #8]\n    bl sub_02023EF4\n    cmp r0, #1\n    beq _02063FCA\n    ldr r0, [r4, #8]\n    mov r1, #1\n    bl sub_02023EE0\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl sub_02023F40\n    b _02063FCA\n    ldr r0, [r4, #8]\n    bl sub_02023EF4\n    cmp r0, #2\n    beq _02063FCA\n    ldr r0, [r4, #8]\n    mov r1, #2\n    bl sub_02023EE0\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl sub_02023F40\n    b _02063FCA\n    bl GF_AssertFail\n    ldr r0, [r4, #8]\n    bl sub_02023EF4\n    cmp r0, #0\n    beq _02063FCA\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl sub_02023EE0\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl sub_02023F40\n    mov r1, #1\n    ldr r0, [r4, #8]\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    ldr r1, [r4, #8]\n    add r0, r5, #0\n    bl ov01_021FA40C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02063FE0: .word 0x0000FFFF"
    );
    #endif
}

void sub_02063FE4(void) {
    /* Original at 0x02063FE4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0205F40C\n    add r2, r0, #0\n    add r1, r2, #0\n    ldr r2, [r2]\n    add r0, r4, #0\n    add r1, #8\n    bl ov01_021F95CC\n    pop {r4, pc}"
    );
    #endif
}

void sub_02063FFC(void) {
    /* Original at 0x02063FFC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _02064014\n    add r1, r4, #0\n    add r1, #0xc\n    bl ov01_021F9610\n    add r1, r4, #0\n    ldr r2, [r4]\n    add r0, r5, #0\n    add r1, #8\n    bl ov01_021F95CC\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_SetFlagsBits\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0206402C(void) {
    /* Original at 0x0206402C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _0206407E\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    bne _0206405E\n    ldr r2, [r4]\n    ldr r0, _02064080 ; =0x0000FFFF\n    cmp r2, r0\n    beq _0206405A\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #8\n    bl ov01_021F94C0\n    b _0206405E\n    bl GF_AssertFail\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0206407E\n    add r1, r4, #0\n    add r1, #0xc\n    bl ov01_021F9630\n    ldr r1, [r4, #8]\n    add r0, r5, #0\n    bl ov01_021FA3E8\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_ClearFlagsBits\n    pop {r3, r4, r5, pc}\n    _02064080: .word 0x0000FFFF"
    );
    #endif
}

void sub_02064084(void) {
    /* Original at 0x02064084 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    bne _02064098\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    bl sub_0205F40C\n    ldr r0, [r0, #8]\n    pop {r4, pc}"
    );
    #endif
}

void sub_020640A4(void) {
    GF_AssertFail();
}

void TryGetSeenByNpcTrainers(void) {
    /* Original at 0x020640C8 */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x58\n    add r5, r0, #0\n    ldr r7, [r5, #0x40]\n    add r4, r1, #0\n    ldr r6, [r5, #0x3c]\n    add r1, sp, #0x40\n    str r1, [sp]\n    add r1, r6, #0\n    add r2, r7, #0\n    mov r3, #0\n    bl CheckSeenByNpcTrainers\n    cmp r0, #0\n    bne _020640EC\n    add sp, #0x58\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x50]\n    cmp r0, #0\n    bne _02064172\n    ldr r1, _020641E8 ; =std_trainer_approach\n    ldr r2, [sp, #0x54]\n    add r0, r5, #0\n    bl StartMapSceneScript\n    cmp r4, #0\n    beq _02064114\n    add r0, sp, #0x28\n    str r0, [sp]\n    ldr r3, [sp, #0x54]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl CheckSeenByNpcTrainers\n    cmp r0, #0\n    bne _02064134\n    ldr r0, [sp, #0x48]\n    str r0, [sp]\n    ldr r0, [sp, #0x4c]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x54]\n    ldr r2, [sp, #0x40]\n    ldr r3, [sp, #0x44]\n    add r0, r5, #0\n    bl FieldSystem_SetEngagedTrainer\n    add sp, #0x58\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x48]\n    str r0, [sp]\n    ldr r0, [sp, #0x4c]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x54]\n    ldr r2, [sp, #0x40]\n    ldr r3, [sp, #0x44]\n    add r0, r5, #0\n    bl FieldSystem_SetEngagedTrainer\n    ldr r0, [sp, #0x30]\n    str r0, [sp]\n    ldr r0, [sp, #0x34]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x3c]\n    ldr r2, [sp, #0x28]\n    ldr r3, [sp, #0x2c]\n    add r0, r5, #0\n    bl FieldSystem_SetEngagedTrainer\n    add sp, #0x58\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #1\n    bne _020641DE\n    cmp r4, #0\n    bne _02064180\n    add sp, #0x58\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, [sp, #0x54]\n    ldr r3, [sp, #0x4c]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02064520\n    add r1, r0, #0\n    ldr r2, [sp, #0x40]\n    ldr r3, [sp, #0x44]\n    add r0, sp, #0x10\n    bl GetEngagingTrainerParams\n    ldr r1, _020641E8 ; =std_trainer_approach\n    ldr r2, [sp, #0x54]\n    add r0, r5, #0\n    bl StartMapSceneScript\n    ldr r0, [sp, #0x48]\n    str r0, [sp]\n    ldr r0, [sp, #0x4c]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x54]\n    ldr r2, [sp, #0x40]\n    ldr r3, [sp, #0x44]\n    add r0, r5, #0\n    bl FieldSystem_SetEngagedTrainer\n    ldr r0, [sp, #0x18]\n    str r0, [sp]\n    ldr r0, [sp, #0x1c]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x24]\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, r5, #0\n    bl FieldSystem_SetEngagedTrainer\n    add sp, #0x58\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #0x58\n    pop {r3, r4, r5, r6, r7, pc}\n    _020641E8: .word std_trainer_approach"
    );
    #endif
}

void CheckSeenByNpcTrainers(void) {
    /* Original at 0x020641EC */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r1, sp, #4\n    add r2, sp, #0xc\n    mov r3, #1\n    bl MapObjectManager_GetNextObjectWithFlagFromIndex\n    cmp r0, #0\n    beq _02064264\n    cmp r4, #0\n    beq _02064218\n    ldr r0, [sp, #4]\n    cmp r4, r0\n    beq _02064254\n    ldr r0, [sp, #4]\n    add r1, r7, #0\n    add r2, sp, #8\n    bl sub_020642C4\n    mov r1, #0\n    mvn r1, r1\n    str r0, [sp]\n    cmp r0, r1\n    beq _02064254\n    ldr r0, [sp, #4]\n    bl MapObject_GetTrainerNum\n    add r1, r0, #0\n    lsl r1, r1, #0x10\n    ldr r0, [r5, #0xc]\n    lsr r1, r1, #0x10\n    bl TrainerFlagCheck\n    cmp r0, #0\n    bne _02064254\n    ldr r0, [sp, #0x28]\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    ldr r3, [sp, #8]\n    bl GetEngagingTrainerParams\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    add r1, sp, #4\n    add r2, sp, #0xc\n    mov r3, #1\n    bl MapObjectManager_GetNextObjectWithFlagFromIndex\n    cmp r0, #0\n    bne _0206420E\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void GetEngagingTrainerParams(void) {
    /* Original at 0x0206426C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    str r2, [r5]\n    str r3, [r5, #4]\n    add r0, r4, #0\n    bl MapObject_GetScriptID\n    str r0, [r5, #8]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ScriptNumToTrainerNum\n    str r0, [r5, #0xc]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl TrainerNumIsDouble\n    str r0, [r5, #0x10]\n    str r4, [r5, #0x14]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02064298(void) {
    MapObject_GetType(1);
}

void sub_020642C4(void) {
    /* Original at 0x020642C4 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r4, r1, #0\n    str r2, [sp, #8]\n    bl sub_02064298\n    cmp r0, #1\n    bne _02064332\n    add r0, r4, #0\n    bl PlayerAvatar_GetXCoord\n    add r7, r0, #0\n    add r0, r4, #0\n    bl PlayerAvatar_GetZCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl MapObject_GetParam\n    add r2, r0, #0\n    str r6, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r7, #0\n    bl sub_0206439C\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _0206432A\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_02064468\n    cmp r0, #0\n    bne _0206432A\n    ldr r0, [sp, #8]\n    add sp, #0x14\n    str r4, [r0]\n    add r0, r6, #0\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x14\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    cmp r0, #2\n    bne _02064394\n    add r0, r4, #0\n    bl PlayerAvatar_GetXCoord\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    bl PlayerAvatar_GetZCoord\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl MapObject_GetParam\n    str r0, [sp, #0xc]\n    mov r4, #0\n    str r7, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r2, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0206439C\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _02064386\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_02064468\n    cmp r0, #0\n    bne _02064386\n    ldr r0, [sp, #8]\n    add sp, #0x14\n    str r4, [r0]\n    add r0, r6, #0\n    pop {r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    cmp r4, #4\n    blt _02064352\n    mov r0, #0\n    add sp, #0x14\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    mvn r0, r0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0206439C(void) {
    /* Original at 0x0206439C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [sp, #0x14]\n    lsl r5, r4, #2\n    ldr r4, _020643B4 ; =_020FE194\n    str r1, [sp]\n    add r1, r2, #0\n    add r2, r3, #0\n    ldr r3, [sp, #0x10]\n    ldr r4, [r4, r5]\n    blx r4\n    pop {r3, r4, r5, pc}\n    _020643B4: .word _020FE194"
    );
    #endif
}

void sub_020643B8(void) {
    /* Original at 0x020643B8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    add r4, r3, #0\n    bl MapObject_GetXCoord\n    cmp r0, r6\n    bne _020643DE\n    add r0, r7, #0\n    bl MapObject_GetZCoord\n    cmp r4, r0\n    bge _020643DE\n    sub r1, r0, r5\n    cmp r4, r1\n    blt _020643DE\n    sub r0, r0, r4\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020643E4(void) {
    /* Original at 0x020643E4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    add r4, r3, #0\n    bl MapObject_GetXCoord\n    cmp r0, r6\n    bne _0206440A\n    add r0, r7, #0\n    bl MapObject_GetZCoord\n    cmp r4, r0\n    ble _0206440A\n    add r1, r0, r5\n    cmp r4, r1\n    bgt _0206440A\n    sub r0, r4, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02064410(void) {
    /* Original at 0x02064410 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r6, r1, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    bl MapObject_GetZCoord\n    cmp r0, r4\n    bne _02064436\n    add r0, r7, #0\n    bl MapObject_GetXCoord\n    cmp r5, r0\n    bge _02064436\n    sub r1, r0, r6\n    cmp r5, r1\n    blt _02064436\n    sub r0, r0, r5\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0206443C(void) {
    /* Original at 0x0206443C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r6, r1, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    bl MapObject_GetZCoord\n    cmp r0, r4\n    bne _02064462\n    add r0, r7, #0\n    bl MapObject_GetXCoord\n    cmp r5, r0\n    ble _02064462\n    add r1, r0, r6\n    cmp r5, r1\n    bgt _02064462\n    sub r0, r5, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02064468(void) {
    /* Original at 0x02064468 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    str r0, [sp, #4]\n    str r2, [sp, #8]\n    cmp r2, #0\n    bne _0206447C\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    ldr r0, [sp, #4]\n    bl MapObject_GetZCoord\n    add r7, r0, #0\n    ldr r0, [sp, #4]\n    bl MapObject_GetYCoord\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    bl GetDeltaXByFacingDirection\n    add r6, r4, r0\n    add r0, r5, #0\n    bl GetDeltaYByFacingDirection\n    add r4, r7, r0\n    ldr r0, [sp, #8]\n    mov r7, #0\n    sub r0, r0, #1\n    str r0, [sp, #0x10]\n    cmp r0, #0\n    ble _020644E4\n    mov r0, #1\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #0xc]\n    add r1, r6, #0\n    add r3, r4, #0\n    str r5, [sp]\n    bl sub_02060B90\n    ldr r1, [sp, #0x14]\n    bic r0, r1\n    beq _020644CC\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl GetDeltaXByFacingDirection\n    add r6, r6, r0\n    add r0, r5, #0\n    bl GetDeltaYByFacingDirection\n    add r4, r4, r0\n    ldr r0, [sp, #0x10]\n    add r7, r7, #1\n    cmp r7, r0\n    blt _020644B2\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #0xc]\n    add r1, r6, #0\n    add r3, r4, #0\n    str r5, [sp]\n    bl sub_02060B90\n    mov r1, #1\n    bic r0, r1\n    cmp r0, #4\n    bne _02064500\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void MapObject_GetTrainerNum(void) {
    /* Original at 0x02064508 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl MapObject_GetScriptID\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ScriptNumToTrainerNum\n    pop {r3, pc}"
    );
    #endif
}

void sub_02064518(void) {
    MapObject_GetTrainerNum();
}

void sub_02064520(void) {
    /* Original at 0x02064520 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    mov r0, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, sp, #0\n    add r2, sp, #4\n    mov r3, #1\n    bl MapObjectManager_GetNextObjectWithFlagFromIndex\n    cmp r0, #0\n    beq _02064570\n    add r7, sp, #0\n    ldr r0, [sp]\n    cmp r0, r4\n    beq _02064560\n    bl sub_02064298\n    sub r0, r0, #1\n    cmp r0, #1\n    bhi _02064560\n    ldr r0, [sp]\n    bl MapObject_GetTrainerNum\n    cmp r6, r0\n    bne _02064560\n    ldr r0, [sp]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, sp, #4\n    mov r3, #1\n    bl MapObjectManager_GetNextObjectWithFlagFromIndex\n    cmp r0, #0\n    bne _02064540\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0206457C(void) {
    sub_020645B4();
}

void sub_02064598(void) {
    /* Original at 0x02064598 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _020645A2\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl sub_0206460C\n    pop {r4, pc}"
    );
    #endif
}

void sub_020645AC(void) {
    sub_02064618();
}

void sub_020645B4(void) {
    /* Original at 0x020645B4 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #4\n    mov r1, #0x30\n    add r7, r2, #0\n    str r3, [sp]\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    bne _020645CE\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x30\n    bl memset\n    ldr r0, [sp]\n    add r1, r4, #0\n    str r0, [r4, #8]\n    ldr r0, [sp, #0x18]\n    mov r2, #0xff\n    str r0, [r4, #0xc]\n    ldr r0, [sp, #0x1c]\n    str r0, [r4, #0x10]\n    ldr r0, [sp, #0x20]\n    str r0, [r4, #0x14]\n    ldr r0, [sp, #0x24]\n    str r0, [r4, #0x18]\n    str r5, [r4, #0x2c]\n    str r6, [r4, #0x24]\n    ldr r0, _02064608 ; =sub_02064630\n    str r7, [r4, #0x28]\n    bl SysTask_CreateOnMainQueue\n    add r4, r0, #0\n    bne _02064604\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02064608: .word sub_02064630"
    );
    #endif
}

void sub_0206460C(void) {
    SysTask_GetData();
}

void sub_02064618(void) {
    SysTask_GetData();
    Heap_FreeExplicit(4, r0);
    SysTask_Destroy(r4);
}

void sub_02064630(void) {
    /* Original at 0x02064630 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r4, _02064648 ; =_020FE1A4\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    blx r1\n    cmp r0, #1\n    beq _02064636\n    pop {r3, r4, r5, pc}\n    nop\n    _02064648: .word _020FE1A4"
    );
    #endif
}

void sub_0206464C(void) {
    /* Original at 0x0206464C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x24]\n    add r0, r4, #0\n    bl MapObject_CheckSingleMovement\n    cmp r0, #1\n    bne _02064662\n    add r0, r4, #0\n    bl MapObject_UnpauseMovement\n    mov r0, #1\n    str r0, [r5]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02064668(void) {
    /* Original at 0x02064668 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r5, [r4, #0x24]\n    add r0, r5, #0\n    bl MapObject_CheckSingleMovement\n    cmp r0, #1\n    bne _0206467C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x24]\n    ldr r1, [r4, #8]\n    bl ov01_021F9408\n    add r0, r5, #0\n    mov r1, #0x40\n    bl MapObject_SetFlagsBits\n    mov r0, #2\n    str r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02064694(void) {
    /* Original at 0x02064694 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x28]\n    bl PlayerAvatar_GetMapObject\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    bne _020646AA\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x24]\n    bl MapObject_GetMovement\n    sub r0, #0x33\n    cmp r0, #3\n    bhi _020646D2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _020646C2: ; jump table\n    mov r0, #7\n    str r0, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #3\n    str r0, [r4]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void sub_020646DC(void) {
    /* Original at 0x020646DC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x24]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    bne _020646EE\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0\n    ldr r1, [r4, #8]\n    mvn r0, r0\n    cmp r1, r0\n    bne _020646FC\n    bl GF_AssertFail\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl sub_0206234C\n    add r1, r0, #0\n    ldr r0, [r4, #0x24]\n    bl MapObject_SetHeldMovement\n    mov r0, #4\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_02064714(void) {
    MapObject_IsMovementPaused(0, 1, 5);
}

void sub_02064730(void) {
    ov01_02200540(0, 6, 0);
}

void sub_02064748(void) {
    /* Original at 0x02064748 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x20]\n    bl ov01_022003F4\n    cmp r0, #1\n    bne _02064760\n    ldr r0, [r4, #0x20]\n    bl sub_02068B48\n    mov r0, #9\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_02064764(void) {
    MapObject_SetHeldMovement(0, 8, 0x65);
}

void sub_02064778(void) {
    MapObject_IsMovementPaused(0, 9);
}

void sub_02064790(void) {
    /* Original at 0x02064790 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x1c]\n    add r1, r1, #1\n    str r1, [r0, #0x1c]\n    cmp r1, #0x1e\n    blt _020647A2\n    mov r1, #0\n    str r1, [r0, #0x1c]\n    mov r1, #0xa\n    str r1, [r0]\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_020647A8(void) {
    /* Original at 0x020647A8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0xc]\n    cmp r1, #1\n    bgt _020647B6\n    mov r1, #0xd\n    str r1, [r0]\n    mov r0, #1\n    bx lr\n    mov r1, #0xb\n    str r1, [r0]\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void sub_020647C0(void) {
    /* Original at 0x020647C0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x24]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _020647E2\n    ldr r0, [r4, #8]\n    mov r1, #0xc\n    bl sub_0206234C\n    add r1, r0, #0\n    ldr r0, [r4, #0x24]\n    bl MapObject_SetHeldMovement\n    mov r0, #0xc\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_020647E8(void) {
    MapObject_IsMovementPaused(0, 0xa, 1);
}

void sub_02064808(void) {
    /* Original at 0x02064808 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x1c]\n    add r1, r1, #1\n    str r1, [r0, #0x1c]\n    cmp r1, #8\n    bge _02064816\n    mov r0, #0\n    bx lr\n    mov r1, #0\n    str r1, [r0, #0x1c]\n    mov r1, #0xe\n    str r1, [r0]\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void sub_02064824(void) {
    /* Original at 0x02064824 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x28]\n    bl PlayerAvatar_GetMapObject\n    add r4, r0, #0\n    bl MapObject_GetXCoord\n    add r6, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetZCoord\n    add r7, r0, #0\n    ldr r0, [r5, #0x24]\n    bl MapObject_GetXCoord\n    str r0, [sp]\n    ldr r0, [r5, #0x24]\n    bl MapObject_GetZCoord\n    add r3, r0, #0\n    ldr r2, [sp]\n    add r0, r6, #0\n    add r1, r7, #0\n    bl sub_02061200\n    add r6, r0, #0\n    ldr r0, [r5, #0x28]\n    bl PlayerAvatar_GetFacingDirection\n    cmp r6, r0\n    beq _02064898\n    ldr r0, [r5, #0x18]\n    cmp r0, #0\n    beq _02064870\n    ldr r0, [r5, #0x14]\n    cmp r0, #2\n    bne _02064898\n    add r0, r4, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _0206489C\n    add r0, r4, #0\n    mov r1, #0x80\n    bl MapObject_ClearFlagsBits\n    add r0, r6, #0\n    mov r1, #0\n    bl sub_0206234C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl MapObject_SetHeldMovement\n    mov r0, #0xf\n    str r0, [r5]\n    b _0206489C\n    mov r0, #0x10\n    str r0, [r5]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020648A0(void) {
    /* Original at 0x020648A0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x28]\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    bne _020648B8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl MapObject_ClearHeldMovementIfActive\n    mov r0, #0x10\n    str r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020648C8(void) {
    /* Original at 0x020648C8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x24]\n    bl MapObject_ClearHeldMovementIfActive\n    ldr r0, [r4, #0x24]\n    mov r1, #0\n    bl sub_0205FC94\n    mov r0, #0x11\n    str r0, [r4]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void sub_020648E4(void) {
    /* Original at 0x020648E4 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    str r1, [r0, #4]\n    mov r0, #0\n    bx lr"
    );
    #endif
}
