/* Decompiled from asm/unk_020632B0.s */
#include "global.h"

void sub_020632B0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r1, #0
    // str r3, [sp, #4]
    // mov r1, #0xc
    // str r0, [sp]
    // add r7, r2, #0
    // ldr r5, [sp, #0x24]
    // bl sub_0205F3C0
    // add r4, r0, #0
    // mov r0, #0xb
    // mov r1, #0x1c
    // bl Heap_AllocAtEnd
    // mov r1, #0
    // mov r2, #0x1c
    // str r0, [r4, #8]
    // bl MI_CpuFill8
    // mov r0, #0x10
    // add r1, sp, #0x10
    // ldrsb r0, [r1, r0]
    // cmp r5, #0
    // strb r0, [r4]
    // strb r5, [r4, #1]
    // ldrh r0, [r1, #0x18]
    // strb r0, [r4, #3]
    // ble _020632FC
    // lsl r0, r5, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0206330A
    // lsl r0, r5, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // str r0, [sp, #8]
    // ldr r0, [r4, #8]
    // strb r6, [r0, #1]
    // ldr r0, [r4, #8]
    // strb r7, [r0, #2]
    // ldr r1, [r4, #8]
    // ldr r0, [sp, #4]
    // strb r0, [r1, #3]
    // lsl r0, r6, #4
    // cmp r0, #0
    // ble _02063336
    // lsl r0, r6, #0x10
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _02063344
    // lsl r0, r6, #0x10
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [sp, #8]
    // bl FX_Div
    // ldr r1, [r4, #8]
    // str r0, [r1, #4]
    // lsl r0, r7, #4
    // cmp r0, #0
    // ble _0206336A
    // lsl r0, r7, #0x10
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _02063378
    // lsl r0, r7, #0x10
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [sp, #8]
    // bl FX_Div
    // ldr r1, [r4, #8]
    // str r0, [r1, #8]
    // ldr r0, [sp, #4]
    // lsl r0, r0, #4
    // cmp r0, #0
    // ble _020633A2
    // ldr r0, [sp, #4]
    // lsl r0, r0, #0x10
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _020633B2
    // ldr r0, [sp, #4]
    // lsl r0, r0, #0x10
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [sp, #8]
    // bl FX_Div
    // ldr r1, [r4, #8]
    // str r0, [r1, #0xc]
    // mov r0, #0xb4
    // add r1, r5, #0
    // bl _s32_div_f
    // ldr r1, [r4, #8]
    // strb r0, [r1]
    // ldr r1, [r4, #8]
    // ldr r0, [sp]
    // add r1, #0x10
    // bl MapObject_CopyPositionVector
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #0x14]
    // str r0, [r4, #4]
    // ldr r0, [sp]
    // bl sub_02060F78
    // ldr r0, [sp]
    // ldr r1, _0206341C ; =0x00010004
    // bl MapObject_SetFlagsBits
    // add r2, sp, #0x10
    // mov r1, #0x10
    // ldrsb r1, [r2, r1]
    // ldr r0, [sp]
    // bl MapObject_SetOrQueueFacing
    // add r1, sp, #0x10
    // ldrh r1, [r1, #0x18]
    // ldr r0, [sp]
    // bl sub_0205F328
    // ldr r0, [sp]
    // bl MapObject_IncrementMovementStep
    // ldr r0, [sp]
    // bl MapObject_CheckVisible
    // cmp r0, #0
    // bne _02063416
    // ldr r0, _02063420 ; =SEQ_SE_DP_DANSA
    // bl PlaySE
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0206341C: .word 0x00010004
    // _02063420: .word SEQ_SE_DP_DANSA
    // TODO: decompile
}


void MapObjectMovementCmd108_Step1(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // bl sub_0205F3E4
    // add r4, r0, #0
    // ldrb r0, [r4, #2]
    // cmp r0, #0
    // beq _02063448
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _02063456
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // str r0, [sp]
    // asr r0, r0, #0x1f
    // str r0, [sp, #4]
    // ldr r6, [r4, #8]
    // ldr r2, [sp]
    // ldr r0, [r6, #4]
    // ldr r3, [sp, #4]
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // ldr r3, [r6, #0x10]
    // mov r6, #2
    // mov r2, #0
    // lsl r6, r6, #0xa
    // add r6, r0, r6
    // adc r1, r2
    // lsl r0, r1, #0x14
    // lsr r1, r6, #0xc
    // orr r1, r0
    // add r0, r3, r1
    // str r2, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r6, [r4, #8]
    // ldr r2, [sp]
    // ldr r0, [r6, #0xc]
    // ldr r3, [sp, #4]
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r3, #2
    // ldr r2, [r6, #0x18]
    // mov r6, #0
    // lsl r3, r3, #0xa
    // add r3, r0, r3
    // adc r1, r6
    // lsl r0, r1, #0x14
    // lsr r1, r3, #0xc
    // orr r1, r0
    // add r0, r2, r1
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // bl MapObject_GetFieldSystem
    // add r6, r0, #0
    // add r0, r5, #0
    // bl MapObject_CheckFlag29
    // add r2, r0, #0
    // add r0, r6, #0
    // add r1, sp, #8
    // bl sub_02061248
    // cmp r0, #0
    // beq _020634CC
    // ldr r0, [sp, #0xc]
    // str r0, [r4, #4]
    // b _020634D0
    // ldr r0, [r4, #4]
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // add r1, sp, #8
    // bl MapObject_SetPositionVector
    // ldr r0, [r4, #8]
    // ldrb r1, [r0]
    // ldrb r0, [r4, #2]
    // mul r0, r1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_SinDegNoWrap
    // ldr r7, [r4, #8]
    // add r6, r0, #0
    // ldr r0, [r7, #8]
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // add r2, r0, #0
    // ldr r0, [r7, #0x14]
    // mov r3, #0
    // mov r7, #2
    // lsl r7, r7, #0xa
    // add r2, r2, r7
    // adc r1, r3
    // lsl r1, r1, #0x14
    // lsr r2, r2, #0xc
    // orr r2, r1
    // add r0, r0, r2
    // asr r2, r6, #0x1f
    // lsr r1, r6, #0x10
    // lsl r2, r2, #0x10
    // orr r2, r1
    // lsl r1, r6, #0x10
    // add r6, r1, r7
    // adc r2, r3
    // lsl r1, r2, #0x14
    // lsr r2, r6, #0xc
    // orr r2, r1
    // add r1, r0, r2
    // ldr r0, [sp, #0xc]
    // str r3, [sp, #8]
    // sub r0, r1, r0
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // add r1, sp, #8
    // str r3, [sp, #0x10]
    // bl sub_0205F9A0
    // mov r0, #1
    // ldrsb r1, [r4, r0]
    // sub r1, r1, #1
    // strb r1, [r4, #1]
    // ldrb r1, [r4, #2]
    // add r1, r1, #1
    // strb r1, [r4, #2]
    // ldrsb r0, [r4, r0]
    // cmp r0, #0
    // ble _02063550
    // add sp, #0x14
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r1, sp, #8
    // bl MapObject_SetFacingVector
    // add r0, r5, #0
    // add r1, sp, #8
    // bl sub_0205F9A0
    // ldr r2, [r4, #8]
    // mov r1, #1
    // ldrsb r1, [r2, r1]
    // add r0, r5, #0
    // bl MapObject_AddCurrentX
    // ldr r2, [r4, #8]
    // mov r1, #2
    // ldrsb r1, [r2, r1]
    // add r0, r5, #0
    // bl MapObject_AddCurrentY
    // ldr r2, [r4, #8]
    // mov r1, #3
    // ldrsb r1, [r2, r1]
    // add r0, r5, #0
    // bl MapObject_AddCurrentZ
    // ldr r6, [r4, #8]
    // mov r0, #1
    // ldrsb r1, [r6, r0]
    // lsl r0, r1, #4
    // cmp r0, #0
    // ble _020635AA
    // lsl r0, r1, #0x10
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _020635B8
    // lsl r0, r1, #0x10
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [r6, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r6, [r4, #8]
    // mov r0, #2
    // ldrsb r1, [r6, r0]
    // lsl r0, r1, #4
    // cmp r0, #0
    // ble _020635E0
    // lsl r0, r1, #0x10
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _020635EE
    // lsl r0, r1, #0x10
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [r6, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r6, [r4, #8]
    // mov r0, #3
    // ldrsb r1, [r6, r0]
    // lsl r0, r1, #4
    // cmp r0, #0
    // ble _02063616
    // lsl r0, r1, #0x10
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _02063624
    // lsl r0, r1, #0x10
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [r6, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // add r1, sp, #8
    // bl MapObject_SetPositionVector
    // add r0, r5, #0
    // bl sub_02061070
    // ldr r1, _0206367C ; =0x00020008
    // add r0, r5, #0
    // bl MapObject_SetFlagsBits
    // add r0, r5, #0
    // bl sub_02060F78
    // add r0, r5, #0
    // bl sub_0205F484
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_0205F328
    // add r0, r5, #0
    // bl MapObject_IncrementMovementStep
    // add r0, r5, #0
    // bl MapObject_CheckVisible
    // cmp r0, #0
    // bne _0206366E
    // ldr r0, _02063680 ; =SEQ_SE_DP_SUTYA2
    // bl PlaySE
    // ldr r0, [r4, #8]
    // bl Heap_Free
    // mov r0, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0206367C: .word 0x00020008
    // _02063680: .word SEQ_SE_DP_SUTYA2
    // TODO: decompile
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
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02063A5C
    // cmp r0, #0
    // bne _02063A2C
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // bl sub_02063A78
    // cmp r0, #0
    // beq _02063A3A
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl MapObject_GetXCoord
    // add r5, r0, #0
    // add r0, r4, #0
    // bl MapObject_GetPreviousXCoord
    // cmp r5, r0
    // beq _02063AAC
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl MapObject_GetZCoord
    // add r5, r0, #0
    // add r0, r4, #0
    // bl MapObject_GetPreviousZCoord
    // cmp r5, r0
    // beq _02063AC2
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02063AC8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl MapObject_GetXCoord
    // add r5, r0, #0
    // add r0, r4, #0
    // bl MapObject_GetPreviousXCoord
    // cmp r5, r0
    // beq _02063AE0
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl MapObject_GetZCoord
    // add r5, r0, #0
    // add r0, r4, #0
    // bl MapObject_GetPreviousZCoord
    // cmp r5, r0
    // bne _02063AF6
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02063AFC(void) {
    // bx lr
    // TODO: decompile
}


u8 sub_02063B00(void) {
    return 0;
}


u8 sub_02063B04(void) {
    return 0;
}


void sub_02063B08(void) {
    sub_0205F398(9);
    MapObject_GetParam(r5, 1);
    *((u8*)(r4 + 3)) = r0;
}


void sub_02063B20(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F3BC
    // add r4, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #3
    // bhi _02063B98
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02063B3C: ; jump table
    // add r0, r5, #0
    // bl sub_02063A94
    // cmp r0, #1
    // bne _02063B98
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02063B98
    // add r0, r5, #0
    // bl sub_02063AC8
    // cmp r0, #0
    // beq _02063B98
    // mov r0, #2
    // ldrsb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, #2]
    // ldrsb r1, [r4, r0]
    // mov r0, #3
    // ldrsb r0, [r4, r0]
    // cmp r1, r0
    // bge _02063B78
    // mov r0, #0
    // strb r0, [r4]
    // b _02063B98
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // add r0, r5, #0
    // bl MapObject_CheckSingleMovement
    // cmp r0, #1
    // beq _02063B98
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r0, #0
    // strb r0, [r4, #2]
    // strb r0, [r4, #1]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02063B9C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // bl sub_0205F3BC
    // add r4, r0, #0
    // ldrb r0, [r4, #1]
    // cmp r0, #3
    // bhi _02063C7A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02063BBA: ; jump table
    // ldr r3, _02063C80 ; =_020FE0C4
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // strb r0, [r4, #4]
    // lsl r1, r0, #2
    // add r0, sp, #0x10
    // ldr r0, [r0, r1]
    // strb r0, [r4, #5]
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldr r6, _02063C84 ; =_020FE0D4
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r0, #5
    // ldrsb r0, [r4, r0]
    // lsl r3, r0, #3
    // mov r0, #6
    // ldrsb r0, [r4, r0]
    // lsl r1, r0, #2
    // add r0, r2, r3
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl sub_0206234C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl MapObject_ForceSetHeldMovement
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // add r0, r5, #0
    // bl sub_02062428
    // cmp r0, #0
    // bne _02063C26
    // add sp, #0x20
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // mov r0, #8
    // ldrsb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, #8]
    // ldrsb r0, [r4, r0]
    // cmp r0, #8
    // bge _02063C40
    // add sp, #0x20
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // strb r0, [r4, #8]
    // mov r0, #7
    // ldrsb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, #7]
    // ldrsb r0, [r4, r0]
    // cmp r0, #4
    // bge _02063C64
    // mov r0, #6
    // ldrsb r0, [r4, r0]
    // add sp, #0x20
    // add r1, r0, #1
    // mov r0, #1
    // and r1, r0
    // strb r1, [r4, #6]
    // strb r0, [r4, #1]
    // pop {r4, r5, r6, pc}
    // mov r1, #4
    // ldrsb r1, [r4, r1]
    // add r0, r5, #0
    // bl MapObject_SetFacingDirection
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // mov r0, #0
    // strb r0, [r4, #7]
    // strb r0, [r4]
    // mov r0, #0
    // add sp, #0x20
    // pop {r4, r5, r6, pc}
    // _02063C80: .word _020FE0C4
    // _02063C84: .word _020FE0D4
    // TODO: decompile
}


void sub_02063C88(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r1, #9
    // bl sub_0205F398
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl MapObject_GetParam
    // strb r0, [r4, #3]
    // add r0, r5, #0
    // bl MapObject_GetType
    // cmp r0, #5
    // beq _02063CAC
    // mov r0, #1
    // b _02063CAE
    // mov r0, #0
    // strb r0, [r4, #5]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02063CB4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F3BC
    // add r4, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #3
    // bhi _02063D2C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02063CD0: ; jump table
    // add r0, r5, #0
    // bl sub_02063A94
    // cmp r0, #1
    // bne _02063D2C
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02063D2C
    // add r0, r5, #0
    // bl sub_02063AC8
    // cmp r0, #0
    // beq _02063D2C
    // mov r0, #2
    // ldrsb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, #2]
    // ldrsb r1, [r4, r0]
    // mov r0, #3
    // ldrsb r0, [r4, r0]
    // cmp r1, r0
    // bge _02063D0C
    // mov r0, #0
    // strb r0, [r4]
    // b _02063D2C
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // add r0, r5, #0
    // bl MapObject_CheckSingleMovement
    // cmp r0, #1
    // beq _02063D2C
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r0, #0
    // strb r0, [r4, #2]
    // strb r0, [r4, #1]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02063D30(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // ldr r3, _02063E4C ; =_020FE0E4
    // add r2, sp, #0
    // add r7, r0, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r7, #0
    // bl sub_0205F3BC
    // add r4, r0, #0
    // ldrb r0, [r4, #1]
    // cmp r0, #3
    // bhi _02063E46
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02063D64: ; jump table
    // add r0, r7, #0
    // bl MapObject_GetFacingDirection
    // mov r5, #0
    // add r6, r0, #0
    // add r1, r5, #0
    // add r0, sp, #0
    // mov r2, #5
    // b _02063D82
    // add r1, r1, #4
    // add r5, r5, #1
    // cmp r5, #4
    // bge _02063D92
    // ldrsb r3, [r4, r2]
    // lsl r3, r3, #4
    // add r3, r0, r3
    // ldr r3, [r1, r3]
    // cmp r6, r3
    // bne _02063D7E
    // cmp r5, #4
    // blt _02063D9A
    // bl GF_AssertFail
    // add r0, r5, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // strb r6, [r4, #4]
    // add r0, r2, r1
    // strb r0, [r4, #6]
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // mov r0, #5
    // ldrsb r0, [r4, r0]
    // add r2, sp, #0
    // lsl r3, r0, #4
    // mov r0, #6
    // ldrsb r0, [r4, r0]
    // lsl r1, r0, #2
    // add r0, r2, r3
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl sub_0206234C
    // add r1, r0, #0
    // add r0, r7, #0
    // bl MapObject_ForceSetHeldMovement
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // add r0, r7, #0
    // bl sub_02062428
    // cmp r0, #0
    // bne _02063DE8
    // add sp, #0x20
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // mov r0, #8
    // ldrsb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, #8]
    // ldrsb r0, [r4, r0]
    // cmp r0, #8
    // bge _02063E02
    // add sp, #0x20
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // strb r0, [r4, #8]
    // mov r0, #7
    // ldrsb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, #7]
    // ldrsb r0, [r4, r0]
    // cmp r0, #4
    // bge _02063E30
    // mov r0, #6
    // ldrsb r0, [r4, r0]
    // add sp, #0x20
    // add r0, r0, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // strb r0, [r4, #6]
    // mov r0, #1
    // strb r0, [r4, #1]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #4
    // ldrsb r1, [r4, r1]
    // add r0, r7, #0
    // bl MapObject_SetFacingDirection
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // mov r0, #0
    // strb r0, [r4, #7]
    // strb r0, [r4]
    // mov r0, #0
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _02063E4C: .word _020FE0E4
    // TODO: decompile
}


void sub_02063E50(void) {
    // push {r4, lr}
    // mov r1, #0x18
    // add r4, r0, #0
    // bl sub_0205F3E8
    // ldr r1, _02063E6C ; =0x00000106
    // str r1, [r0]
    // mov r1, #0
    // str r1, [r0, #4]
    // add r0, r4, #0
    // bl sub_0205F484
    // pop {r4, pc}
    // nop
    // _02063E6C: .word 0x00000106
    // TODO: decompile
}


void sub_02063E70(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_0205F394
    // add r7, r0, #0
    // add r0, r5, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetFieldSystem
    // add r1, r5, #0
    // bl sub_02055780
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // bne _02063E9C
    // b _02063FDC
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // bne _02063ECC
    // add r0, r5, #0
    // bl MapObject_GetFieldSystem
    // add r1, r5, #0
    // bl FieldSystem_ApricornTree_TryGetApricorn
    // add r1, r6, #0
    // bl sub_020640A4
    // str r0, [r4]
    // ldr r1, [r4]
    // add r0, r5, #0
    // bl MapObject_SetSpriteID
    // add r1, r4, #0
    // ldr r2, [r4]
    // add r0, r5, #0
    // add r1, #8
    // bl ov01_021F94C0
    // b _02063F22
    // ldr r0, [r4, #4]
    // cmp r6, r0
    // beq _02063F22
    // add r1, r4, #0
    // ldr r2, [r4]
    // add r0, r5, #0
    // add r1, #8
    // bl ov01_021F95CC
    // add r0, r5, #0
    // bl MapObject_GetFieldSystem
    // add r1, r5, #0
    // bl FieldSystem_ApricornTree_TryGetApricorn
    // add r1, r6, #0
    // bl sub_020640A4
    // str r0, [r4]
    // ldr r1, [r4]
    // add r0, r5, #0
    // bl MapObject_SetSpriteID
    // ldr r1, [r4]
    // ldr r0, _02063FE0 ; =0x0000FFFF
    // cmp r1, r0
    // beq _02063F1A
    // cmp r6, #1
    // bne _02063F0C
    // add r0, r5, #0
    // bl ov01_021FE66C
    // add r1, r4, #0
    // ldr r2, [r4]
    // add r0, r5, #0
    // add r1, #8
    // bl ov01_021F94C0
    // b _02063F1E
    // bl GF_AssertFail
    // mov r0, #0
    // strh r0, [r7, #2]
    // add r0, r5, #0
    // str r6, [r4, #4]
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _02063FDC
    // ldr r1, [r4, #8]
    // cmp r1, #0
    // beq _02063FDC
    // add r0, r5, #0
    // bl ov01_021FA3E8
    // add r0, r5, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _02063FD4
    // add r0, r5, #0
    // bl sub_0205F330
    // cmp r0, #0
    // beq _02063F58
    // cmp r0, #1
    // beq _02063F74
    // cmp r0, #2
    // beq _02063F90
    // b _02063FAC
    // ldr r0, [r4, #8]
    // bl sub_02023EF4
    // cmp r0, #0
    // beq _02063FCA
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl sub_02023EE0
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl sub_02023F40
    // b _02063FCA
    // ldr r0, [r4, #8]
    // bl sub_02023EF4
    // cmp r0, #1
    // beq _02063FCA
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl sub_02023EE0
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl sub_02023F40
    // b _02063FCA
    // ldr r0, [r4, #8]
    // bl sub_02023EF4
    // cmp r0, #2
    // beq _02063FCA
    // ldr r0, [r4, #8]
    // mov r1, #2
    // bl sub_02023EE0
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl sub_02023F40
    // b _02063FCA
    // bl GF_AssertFail
    // ldr r0, [r4, #8]
    // bl sub_02023EF4
    // cmp r0, #0
    // beq _02063FCA
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl sub_02023EE0
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl sub_02023F40
    // mov r1, #1
    // ldr r0, [r4, #8]
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // ldr r1, [r4, #8]
    // add r0, r5, #0
    // bl ov01_021FA40C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02063FE0: .word 0x0000FFFF
    // TODO: decompile
}


void sub_02063FE4(void) {
    sub_0205F40C();
    ov01_021F95CC(r4, r0, r0);
}


void sub_02063FFC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _02064014
    // add r1, r4, #0
    // add r1, #0xc
    // bl ov01_021F9610
    // add r1, r4, #0
    // ldr r2, [r4]
    // add r0, r5, #0
    // add r1, #8
    // bl ov01_021F95CC
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_SetFlagsBits
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_0206402C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _0206407E
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // bne _0206405E
    // ldr r2, [r4]
    // ldr r0, _02064080 ; =0x0000FFFF
    // cmp r2, r0
    // beq _0206405A
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #8
    // bl ov01_021F94C0
    // b _0206405E
    // bl GF_AssertFail
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0206407E
    // add r1, r4, #0
    // add r1, #0xc
    // bl ov01_021F9630
    // ldr r1, [r4, #8]
    // add r0, r5, #0
    // bl ov01_021FA3E8
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_ClearFlagsBits
    // pop {r3, r4, r5, pc}
    // _02064080: .word 0x0000FFFF
    // TODO: decompile
}


void sub_02064084(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // bne _02064098
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // bl sub_0205F40C
    // ldr r0, [r0, #8]
    // pop {r4, pc}
    // TODO: decompile
}


void sub_020640A4(void) {
    GF_AssertFail();
}


void TryGetSeenByNpcTrainers(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x58
    // add r5, r0, #0
    // ldr r7, [r5, #0x40]
    // add r4, r1, #0
    // ldr r6, [r5, #0x3c]
    // add r1, sp, #0x40
    // str r1, [sp]
    // add r1, r6, #0
    // add r2, r7, #0
    // mov r3, #0
    // bl CheckSeenByNpcTrainers
    // cmp r0, #0
    // bne _020640EC
    // add sp, #0x58
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x50]
    // cmp r0, #0
    // bne _02064172
    // ldr r1, _020641E8 ; =std_trainer_approach
    // ldr r2, [sp, #0x54]
    // add r0, r5, #0
    // bl StartMapSceneScript
    // cmp r4, #0
    // beq _02064114
    // add r0, sp, #0x28
    // str r0, [sp]
    // ldr r3, [sp, #0x54]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl CheckSeenByNpcTrainers
    // cmp r0, #0
    // bne _02064134
    // ldr r0, [sp, #0x48]
    // str r0, [sp]
    // ldr r0, [sp, #0x4c]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x54]
    // ldr r2, [sp, #0x40]
    // ldr r3, [sp, #0x44]
    // add r0, r5, #0
    // bl FieldSystem_SetEngagedTrainer
    // add sp, #0x58
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x48]
    // str r0, [sp]
    // ldr r0, [sp, #0x4c]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x54]
    // ldr r2, [sp, #0x40]
    // ldr r3, [sp, #0x44]
    // add r0, r5, #0
    // bl FieldSystem_SetEngagedTrainer
    // ldr r0, [sp, #0x30]
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x28]
    // ldr r3, [sp, #0x2c]
    // add r0, r5, #0
    // bl FieldSystem_SetEngagedTrainer
    // add sp, #0x58
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #1
    // bne _020641DE
    // cmp r4, #0
    // bne _02064180
    // add sp, #0x58
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, [sp, #0x54]
    // ldr r3, [sp, #0x4c]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02064520
    // add r1, r0, #0
    // ldr r2, [sp, #0x40]
    // ldr r3, [sp, #0x44]
    // add r0, sp, #0x10
    // bl GetEngagingTrainerParams
    // ldr r1, _020641E8 ; =std_trainer_approach
    // ldr r2, [sp, #0x54]
    // add r0, r5, #0
    // bl StartMapSceneScript
    // ldr r0, [sp, #0x48]
    // str r0, [sp]
    // ldr r0, [sp, #0x4c]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x54]
    // ldr r2, [sp, #0x40]
    // ldr r3, [sp, #0x44]
    // add r0, r5, #0
    // bl FieldSystem_SetEngagedTrainer
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, r5, #0
    // bl FieldSystem_SetEngagedTrainer
    // add sp, #0x58
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // add sp, #0x58
    // pop {r3, r4, r5, r6, r7, pc}
    // _020641E8: .word std_trainer_approach
    // TODO: decompile
}


void CheckSeenByNpcTrainers(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // add r4, r3, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r1, sp, #4
    // add r2, sp, #0xc
    // mov r3, #1
    // bl MapObjectManager_GetNextObjectWithFlagFromIndex
    // cmp r0, #0
    // beq _02064264
    // cmp r4, #0
    // beq _02064218
    // ldr r0, [sp, #4]
    // cmp r4, r0
    // beq _02064254
    // ldr r0, [sp, #4]
    // add r1, r7, #0
    // add r2, sp, #8
    // bl sub_020642C4
    // mov r1, #0
    // mvn r1, r1
    // str r0, [sp]
    // cmp r0, r1
    // beq _02064254
    // ldr r0, [sp, #4]
    // bl MapObject_GetTrainerNum
    // add r1, r0, #0
    // lsl r1, r1, #0x10
    // ldr r0, [r5, #0xc]
    // lsr r1, r1, #0x10
    // bl TrainerFlagCheck
    // cmp r0, #0
    // bne _02064254
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // ldr r3, [sp, #8]
    // bl GetEngagingTrainerParams
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // add r1, sp, #4
    // add r2, sp, #0xc
    // mov r3, #1
    // bl MapObjectManager_GetNextObjectWithFlagFromIndex
    // cmp r0, #0
    // bne _0206420E
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void GetEngagingTrainerParams(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // str r2, [r5]
    // str r3, [r5, #4]
    // add r0, r4, #0
    // bl MapObject_GetScriptID
    // str r0, [r5, #8]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl ScriptNumToTrainerNum
    // str r0, [r5, #0xc]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl TrainerNumIsDouble
    // str r0, [r5, #0x10]
    // str r4, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02064298(void) {
    MapObject_GetType(1);
}


void sub_020642C4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r4, r1, #0
    // str r2, [sp, #8]
    // bl sub_02064298
    // cmp r0, #1
    // bne _02064332
    // add r0, r4, #0
    // bl PlayerAvatar_GetXCoord
    // add r7, r0, #0
    // add r0, r4, #0
    // bl PlayerAvatar_GetZCoord
    // add r6, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl MapObject_GetParam
    // add r2, r0, #0
    // str r6, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r3, r7, #0
    // bl sub_0206439C
    // add r6, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // beq _0206432A
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl sub_02064468
    // cmp r0, #0
    // bne _0206432A
    // ldr r0, [sp, #8]
    // add sp, #0x14
    // str r4, [r0]
    // add r0, r6, #0
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x14
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // cmp r0, #2
    // bne _02064394
    // add r0, r4, #0
    // bl PlayerAvatar_GetXCoord
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // bl PlayerAvatar_GetZCoord
    // add r7, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl MapObject_GetParam
    // str r0, [sp, #0xc]
    // mov r4, #0
    // str r7, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_0206439C
    // add r6, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // beq _02064386
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl sub_02064468
    // cmp r0, #0
    // bne _02064386
    // ldr r0, [sp, #8]
    // add sp, #0x14
    // str r4, [r0]
    // add r0, r6, #0
    // pop {r4, r5, r6, r7, pc}
    // add r4, r4, #1
    // cmp r4, #4
    // blt _02064352
    // mov r0, #0
    // add sp, #0x14
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // mvn r0, r0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_0206439C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, [sp, #0x14]
    // lsl r5, r4, #2
    // ldr r4, _020643B4 ; =_020FE194
    // str r1, [sp]
    // add r1, r2, #0
    // add r2, r3, #0
    // ldr r3, [sp, #0x10]
    // ldr r4, [r4, r5]
    // blx r4
    // pop {r3, r4, r5, pc}
    // _020643B4: .word _020FE194
    // TODO: decompile
}


void sub_020643B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // add r4, r3, #0
    // bl MapObject_GetXCoord
    // cmp r0, r6
    // bne _020643DE
    // add r0, r7, #0
    // bl MapObject_GetZCoord
    // cmp r4, r0
    // bge _020643DE
    // sub r1, r0, r5
    // cmp r4, r1
    // blt _020643DE
    // sub r0, r0, r4
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020643E4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // add r4, r3, #0
    // bl MapObject_GetXCoord
    // cmp r0, r6
    // bne _0206440A
    // add r0, r7, #0
    // bl MapObject_GetZCoord
    // cmp r4, r0
    // ble _0206440A
    // add r1, r0, r5
    // cmp r4, r1
    // bgt _0206440A
    // sub r0, r4, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02064410(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r6, r1, #0
    // add r5, r2, #0
    // add r4, r3, #0
    // bl MapObject_GetZCoord
    // cmp r0, r4
    // bne _02064436
    // add r0, r7, #0
    // bl MapObject_GetXCoord
    // cmp r5, r0
    // bge _02064436
    // sub r1, r0, r6
    // cmp r5, r1
    // blt _02064436
    // sub r0, r0, r5
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_0206443C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r6, r1, #0
    // add r5, r2, #0
    // add r4, r3, #0
    // bl MapObject_GetZCoord
    // cmp r0, r4
    // bne _02064462
    // add r0, r7, #0
    // bl MapObject_GetXCoord
    // cmp r5, r0
    // ble _02064462
    // add r1, r0, r6
    // cmp r5, r1
    // bgt _02064462
    // sub r0, r5, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02064468(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r1, #0
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // cmp r2, #0
    // bne _0206447C
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // bl MapObject_GetXCoord
    // add r4, r0, #0
    // ldr r0, [sp, #4]
    // bl MapObject_GetZCoord
    // add r7, r0, #0
    // ldr r0, [sp, #4]
    // bl MapObject_GetYCoord
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // bl GetDeltaXByFacingDirection
    // add r6, r4, r0
    // add r0, r5, #0
    // bl GetDeltaYByFacingDirection
    // add r4, r7, r0
    // ldr r0, [sp, #8]
    // mov r7, #0
    // sub r0, r0, #1
    // str r0, [sp, #0x10]
    // cmp r0, #0
    // ble _020644E4
    // mov r0, #1
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // add r1, r6, #0
    // add r3, r4, #0
    // str r5, [sp]
    // bl sub_02060B90
    // ldr r1, [sp, #0x14]
    // bic r0, r1
    // beq _020644CC
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl GetDeltaXByFacingDirection
    // add r6, r6, r0
    // add r0, r5, #0
    // bl GetDeltaYByFacingDirection
    // add r4, r4, r0
    // ldr r0, [sp, #0x10]
    // add r7, r7, #1
    // cmp r7, r0
    // blt _020644B2
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // add r1, r6, #0
    // add r3, r4, #0
    // str r5, [sp]
    // bl sub_02060B90
    // mov r1, #1
    // bic r0, r1
    // cmp r0, #4
    // bne _02064500
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void MapObject_GetTrainerNum(void) {
    // push {r3, lr}
    // bl MapObject_GetScriptID
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl ScriptNumToTrainerNum
    // pop {r3, pc}
    // TODO: decompile
}


void sub_02064518(void) {
    MapObject_GetTrainerNum();
}


void sub_02064520(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r1, #0
    // mov r0, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, sp, #0
    // add r2, sp, #4
    // mov r3, #1
    // bl MapObjectManager_GetNextObjectWithFlagFromIndex
    // cmp r0, #0
    // beq _02064570
    // add r7, sp, #0
    // ldr r0, [sp]
    // cmp r0, r4
    // beq _02064560
    // bl sub_02064298
    // sub r0, r0, #1
    // cmp r0, #1
    // bhi _02064560
    // ldr r0, [sp]
    // bl MapObject_GetTrainerNum
    // cmp r6, r0
    // bne _02064560
    // ldr r0, [sp]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, sp, #4
    // mov r3, #1
    // bl MapObjectManager_GetNextObjectWithFlagFromIndex
    // cmp r0, #0
    // bne _02064540
    // bl GF_AssertFail
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_0206457C(void) {
    sub_020645B4();
}


void sub_02064598(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bne _020645A2
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl sub_0206460C
    // pop {r4, pc}
    // TODO: decompile
}


void sub_020645AC(void) {
    sub_02064618();
}


void sub_020645B4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #4
    // mov r1, #0x30
    // add r7, r2, #0
    // str r3, [sp]
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // bne _020645CE
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x30
    // bl memset
    // ldr r0, [sp]
    // add r1, r4, #0
    // str r0, [r4, #8]
    // ldr r0, [sp, #0x18]
    // mov r2, #0xff
    // str r0, [r4, #0xc]
    // ldr r0, [sp, #0x1c]
    // str r0, [r4, #0x10]
    // ldr r0, [sp, #0x20]
    // str r0, [r4, #0x14]
    // ldr r0, [sp, #0x24]
    // str r0, [r4, #0x18]
    // str r5, [r4, #0x2c]
    // str r6, [r4, #0x24]
    // ldr r0, _02064608 ; =sub_02064630
    // str r7, [r4, #0x28]
    // bl SysTask_CreateOnMainQueue
    // add r4, r0, #0
    // bne _02064604
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02064608: .word sub_02064630
    // TODO: decompile
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
    // push {r3, r4, r5, lr}
    // ldr r4, _02064648 ; =_020FE1A4
    // add r5, r1, #0
    // ldr r1, [r5]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // blx r1
    // cmp r0, #1
    // beq _02064636
    // pop {r3, r4, r5, pc}
    // nop
    // _02064648: .word _020FE1A4
    // TODO: decompile
}


void sub_0206464C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r4, [r5, #0x24]
    // add r0, r4, #0
    // bl MapObject_CheckSingleMovement
    // cmp r0, #1
    // bne _02064662
    // add r0, r4, #0
    // bl MapObject_UnpauseMovement
    // mov r0, #1
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02064668(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r5, [r4, #0x24]
    // add r0, r5, #0
    // bl MapObject_CheckSingleMovement
    // cmp r0, #1
    // bne _0206467C
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x24]
    // ldr r1, [r4, #8]
    // bl ov01_021F9408
    // add r0, r5, #0
    // mov r1, #0x40
    // bl MapObject_SetFlagsBits
    // mov r0, #2
    // str r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02064694(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x28]
    // bl PlayerAvatar_GetMapObject
    // bl MapObject_IsMovementPaused
    // cmp r0, #0
    // bne _020646AA
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4, #0x24]
    // bl MapObject_GetMovement
    // sub r0, #0x33
    // cmp r0, #3
    // bhi _020646D2
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _020646C2: ; jump table
    // mov r0, #7
    // str r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #3
    // str r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void sub_020646DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x24]
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // bne _020646EE
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0
    // ldr r1, [r4, #8]
    // mvn r0, r0
    // cmp r1, r0
    // bne _020646FC
    // bl GF_AssertFail
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl sub_0206234C
    // add r1, r0, #0
    // ldr r0, [r4, #0x24]
    // bl MapObject_SetHeldMovement
    // mov r0, #4
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02064714(void) {
    MapObject_IsMovementPaused(0, 1, 5);
}


void sub_02064730(void) {
    ov01_02200540(0, 6, 0);
}


void sub_02064748(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x20]
    // bl ov01_022003F4
    // cmp r0, #1
    // bne _02064760
    // ldr r0, [r4, #0x20]
    // bl sub_02068B48
    // mov r0, #9
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02064764(void) {
    MapObject_SetHeldMovement(0, 8, 0x65);
}


void sub_02064778(void) {
    MapObject_IsMovementPaused(0, 9);
}


void sub_02064790(void) {
    // ldr r1, [r0, #0x1c]
    // add r1, r1, #1
    // str r1, [r0, #0x1c]
    // cmp r1, #0x1e
    // blt _020647A2
    // mov r1, #0
    // str r1, [r0, #0x1c]
    // mov r1, #0xa
    // str r1, [r0]
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_020647A8(void) {
    // ldr r1, [r0, #0xc]
    // cmp r1, #1
    // bgt _020647B6
    // mov r1, #0xd
    // str r1, [r0]
    // mov r0, #1
    // bx lr
    // mov r1, #0xb
    // str r1, [r0]
    // mov r0, #1
    // bx lr
    // TODO: decompile
}


void sub_020647C0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x24]
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #1
    // bne _020647E2
    // ldr r0, [r4, #8]
    // mov r1, #0xc
    // bl sub_0206234C
    // add r1, r0, #0
    // ldr r0, [r4, #0x24]
    // bl MapObject_SetHeldMovement
    // mov r0, #0xc
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void sub_020647E8(void) {
    MapObject_IsMovementPaused(0, 0xa, 1);
}


void sub_02064808(void) {
    // ldr r1, [r0, #0x1c]
    // add r1, r1, #1
    // str r1, [r0, #0x1c]
    // cmp r1, #8
    // bge _02064816
    // mov r0, #0
    // bx lr
    // mov r1, #0
    // str r1, [r0, #0x1c]
    // mov r1, #0xe
    // str r1, [r0]
    // mov r0, #1
    // bx lr
    // TODO: decompile
}


void sub_02064824(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x28]
    // bl PlayerAvatar_GetMapObject
    // add r4, r0, #0
    // bl MapObject_GetXCoord
    // add r6, r0, #0
    // add r0, r4, #0
    // bl MapObject_GetZCoord
    // add r7, r0, #0
    // ldr r0, [r5, #0x24]
    // bl MapObject_GetXCoord
    // str r0, [sp]
    // ldr r0, [r5, #0x24]
    // bl MapObject_GetZCoord
    // add r3, r0, #0
    // ldr r2, [sp]
    // add r0, r6, #0
    // add r1, r7, #0
    // bl sub_02061200
    // add r6, r0, #0
    // ldr r0, [r5, #0x28]
    // bl PlayerAvatar_GetFacingDirection
    // cmp r6, r0
    // beq _02064898
    // ldr r0, [r5, #0x18]
    // cmp r0, #0
    // beq _02064870
    // ldr r0, [r5, #0x14]
    // cmp r0, #2
    // bne _02064898
    // add r0, r4, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #1
    // bne _0206489C
    // add r0, r4, #0
    // mov r1, #0x80
    // bl MapObject_ClearFlagsBits
    // add r0, r6, #0
    // mov r1, #0
    // bl sub_0206234C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl MapObject_SetHeldMovement
    // mov r0, #0xf
    // str r0, [r5]
    // b _0206489C
    // mov r0, #0x10
    // str r0, [r5]
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020648A0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x28]
    // bl PlayerAvatar_GetMapObject
    // add r5, r0, #0
    // bl MapObject_IsMovementPaused
    // cmp r0, #0
    // bne _020648B8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl MapObject_ClearHeldMovementIfActive
    // mov r0, #0x10
    // str r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


u32 sub_020648C8(void) {
    MapObject_ClearHeldMovementIfActive(*((u32*)(r0 + 0x24)));
    sub_0205FC94(*((u32*)(r4 + 0x24)), 0);
    return 1;
}


void sub_020648E4(void) {
    ((u32*)r0)[4] = 1;
}

