/* Decompiled from asm/unk_02061284.s */
#include "global.h"

void sub_02061284(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // mov r1, #8
    // add r5, r0, #0
    // bl sub_0205F370
    // add r4, r0, #0
    // mov r1, #0
    // ldr r0, _020612B0 ; =_020FD7B8
    // mvn r1, r1
    // bl sub_02061E20
    // strh r0, [r4, #2]
    // add r0, r5, #0
    // mov r1, #0
    // str r6, [r4, #4]
    // bl sub_0205F328
    // add r0, r5, #0
    // bl MapObject_ClearSingleMovement
    // pop {r4, r5, r6, pc}
    // _020612B0: .word _020FD7B8
    // TODO: decompile
}


void sub_020612B4(void) {
    sub_02061284();
}


void sub_020612C0(void) {
    sub_02061284();
}


void sub_020612CC(void) {
    sub_02061284();
}


void sub_020612D8(void) {
    sub_02061284();
}


void sub_020612E4(void) {
    sub_02061284();
}


void sub_020612F0(void) {
    sub_02061284();
}


void sub_020612FC(void) {
    sub_02061284();
}


void sub_02061308(void) {
    sub_02061284();
}


void sub_02061314(void) {
    sub_02061284();
}


void sub_02061320(void) {
    sub_02061284();
}


void sub_0206132C(void) {
    sub_02061284();
}


void sub_02061338(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F394
    // add r4, r0, #0
    // mov r2, #0
    // ldr r1, [r4, #4]
    // add r0, r5, #0
    // mvn r2, r2
    // bl sub_02061F5C
    // mov r2, #0
    // add r1, r0, #0
    // mvn r2, r2
    // cmp r1, r2
    // beq _02061360
    // add r0, r5, #0
    // bl MapObject_SetFacingDirection
    // b _02061390
    // ldrh r0, [r4]
    // cmp r0, #0
    // bne _02061390
    // mov r0, #2
    // ldrsh r1, [r4, r0]
    // sub r1, r1, #1
    // strh r1, [r4, #2]
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bgt _02061390
    // ldr r0, _02061398 ; =_020FD7B8
    // add r1, r2, #0
    // bl sub_02061E20
    // strh r0, [r4, #2]
    // mov r1, #0
    // ldr r0, [r4, #4]
    // mvn r1, r1
    // bl sub_02061E44
    // add r1, r0, #0
    // add r0, r5, #0
    // bl MapObject_SetFacingDirection
    // add r0, r5, #0
    // bl sub_02060F78
    // pop {r3, r4, r5, pc}
    // _02061398: .word _020FD7B8
    // TODO: decompile
}


void sub_0206139C(void) {
    // bx lr
    // TODO: decompile
}


void sub_020613A0(void) {
    sub_020613D0();
}


void sub_020613B0(void) {
    sub_020613D0();
}


void sub_020613C0(void) {
    sub_020613D0();
}


void sub_020613D0(void) {
    sub_0205F370(0x10);
    *((u32*)(r0 + 4)) = r7;
    *((u32*)(r0 + 8)) = r4;
    *((u32*)(r0 + 0xc)) = r6;
    sub_0205F328(r5, 0);
    MapObject_ClearSingleMovement(r5);
}


void sub_020613F8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl sub_0205F394
    // add r4, r0, #0
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // cmp r0, #4
    // bhi _020614EE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02061416: ; jump table
    // add r0, r5, #0
    // bl MapObject_ClearSingleMovement
    // add r0, r5, #0
    // bl MapObject_ClearFlag3
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // mov r1, #0
    // bl sub_0206234C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl MapObject_ForceSetHeldMovement
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // add r0, r0, #1
    // strh r0, [r4]
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // bl sub_02062428
    // cmp r0, #0
    // beq _020614EE
    // mov r1, #0
    // ldr r0, _020614F0 ; =_020FD7B8
    // mvn r1, r1
    // bl sub_02061E20
    // strh r0, [r4, #2]
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // add r0, r0, #1
    // strh r0, [r4]
    // mov r0, #2
    // ldrsh r1, [r4, r0]
    // sub r1, r1, #1
    // strh r1, [r4, #2]
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bne _020614EE
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // add r0, r0, #1
    // strh r0, [r4]
    // mov r1, #0
    // ldr r0, [r4, #0xc]
    // mvn r1, r1
    // bl sub_02061E44
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl MapObject_SetOrQueueFacing
    // ldr r0, [r4, #4]
    // cmp r0, #1
    // bne _020614AA
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_020615F0
    // cmp r0, #0
    // bne _020614AA
    // mov r0, #0
    // strh r0, [r4]
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02060BB8
    // cmp r0, #0
    // beq _020614BC
    // mov r0, #0
    // strh r0, [r4]
    // pop {r4, r5, r6, pc}
    // ldr r1, [r4, #8]
    // add r0, r6, #0
    // bl sub_0206234C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl MapObject_ForceSetHeldMovement
    // add r0, r5, #0
    // bl MapObject_SetSingleMovement
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // add r0, r0, #1
    // strh r0, [r4]
    // add r0, r5, #0
    // bl sub_02062428
    // cmp r0, #0
    // beq _020614EE
    // add r0, r5, #0
    // bl MapObject_ClearSingleMovement
    // mov r0, #0
    // strh r0, [r4]
    // pop {r4, r5, r6, pc}
    // _020614F0: .word _020FD7B8
    // TODO: decompile
}


void sub_020614F4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r0, [sp]
    // add r4, r1, #0
    // bl MapObject_GetInitialX
    // add r6, r0, #0
    // ldr r0, [sp]
    // bl MapObject_GetInitialZ
    // add r5, r0, #0
    // ldr r0, [sp]
    // bl MapObject_GetXRange
    // add r7, r0, #0
    // ldr r0, [sp]
    // bl MapObject_GetYRange
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // bl MapObject_GetMovement
    // cmp r0, #0xd
    // bhi _020615E8
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02061530: ; jump table
    // sub r0, r6, r7
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // str r6, [r4, #8]
    // sub r0, r5, r0
    // str r0, [r4, #4]
    // add sp, #8
    // str r5, [r4, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // str r6, [r4]
    // add r0, r6, r7
    // str r0, [r4, #8]
    // ldr r0, [sp, #4]
    // add sp, #8
    // sub r0, r5, r0
    // str r0, [r4, #4]
    // str r5, [r4, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, r6, r7
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // str r6, [r4, #8]
    // str r5, [r4, #4]
    // add r0, r5, r0
    // add sp, #8
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // str r6, [r4]
    // add r0, r6, r7
    // str r0, [r4, #8]
    // ldr r0, [sp, #4]
    // str r5, [r4, #4]
    // add r0, r5, r0
    // add sp, #8
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, r6, r7
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // str r6, [r4, #8]
    // sub r0, r5, r0
    // str r0, [r4, #4]
    // ldr r0, [sp, #4]
    // add sp, #8
    // add r0, r5, r0
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // str r6, [r4]
    // add r0, r6, r7
    // str r0, [r4, #8]
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    // str r0, [r4, #4]
    // ldr r0, [sp, #4]
    // add sp, #8
    // add r0, r5, r0
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, r6, r7
    // str r0, [r4]
    // add r0, r6, r7
    // str r0, [r4, #8]
    // ldr r0, [sp, #4]
    // add sp, #8
    // sub r0, r5, r0
    // str r0, [r4, #4]
    // str r5, [r4, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, r6, r7
    // str r0, [r4]
    // add r0, r6, r7
    // str r0, [r4, #8]
    // ldr r0, [sp, #4]
    // str r5, [r4, #4]
    // add r0, r5, r0
    // add sp, #8
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl GF_AssertFail
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020615F0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r1, #0
    // add r5, r0, #0
    // add r1, sp, #0
    // bl sub_020614F4
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // add r4, r0, #0
    // add r0, r6, #0
    // bl GetDeltaXByFacingDirection
    // add r4, r4, r0
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // add r5, r0, #0
    // add r0, r6, #0
    // bl GetDeltaYByFacingDirection
    // add r1, r5, r0
    // ldr r0, [sp]
    // cmp r0, r4
    // bgt _0206162A
    // ldr r0, [sp, #8]
    // cmp r0, r4
    // bge _02061630
    // add sp, #0x10
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, [sp, #4]
    // cmp r0, r1
    // bgt _0206163C
    // ldr r0, [sp, #0xc]
    // cmp r0, r1
    // bge _02061642
    // add sp, #0x10
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02061648(void) {
    sub_0205F370(8);
    sub_0205F328(r5, 0);
    MapObject_ClearSingleMovement(r5);
    sub_02060F78(r5);
}


void sub_0206166C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F394
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _02061680
    // cmp r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r1, [r4]
    // add r0, r5, #0
    // bl MapObject_SetFacingDirection
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02061690(void) {
    sub_02061648();
}


void sub_0206169C(void) {
    sub_02061648();
}


void sub_020616A8(void) {
    sub_02061648();
}


void sub_020616B4(void) {
    sub_02061648();
}


void sub_020616C0(void) {
    sub_0205F370(8);
    sub_0205F328(r5, 0);
    MapObject_ClearSingleMovement(r5);
    sub_02060F78(r5);
}


void sub_020616E4(void) {
    sub_020616C0();
}


void sub_020616F0(void) {
    sub_020616C0();
}


void sub_020616FC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_0205F394
    // ldr r6, _0206171C ; =_020FD5D0
    // add r4, r0, #0
    // mov r7, #2
    // ldrsb r2, [r4, r7]
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r2, r2, #2
    // ldr r2, [r6, r2]
    // blx r2
    // cmp r0, #1
    // beq _0206170A
    // pop {r3, r4, r5, r6, r7, pc}
    // _0206171C: .word _020FD5D0
    // TODO: decompile
}


void sub_02061720(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // mov r1, #0x26
    // add r2, r1, #0
    // sub r2, #0x27
    // add r5, r0, #0
    // bl sub_02061F5C
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _0206173E
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // mov r1, #0
    // bl sub_0206234C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl MapObject_ForceSetHeldMovement
    // mov r0, #1
    // strb r0, [r4, #2]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02061754(void) {
    sub_02062428(0, 0, 1, 2);
}


void sub_02061770(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r1, [r4, #4]
    // cmp r1, #0
    // beq _02061794
    // mov r1, #0x26
    // add r2, r1, #0
    // sub r2, #0x27
    // bl sub_02061F5C
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _02061794
    // mov r0, #0
    // strb r0, [r4, #2]
    // mov r0, #1
    // pop {r4, pc}
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // cmp r0, #0x18
    // bge _020617A2
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #3
    // strb r0, [r4, #2]
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void sub_020617AC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // ldr r3, _0206183C ; =_020FD754
    // add r2, sp, #0x14
    // add r7, r0, #0
    // add r6, r1, #0
    // ldmia r3!, {r0, r1}
    // add r5, r2, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // ldr r4, _02061840 ; =_020FD768
    // str r0, [r2]
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // str r0, [r3]
    // mov r0, #0
    // ldrsb r0, [r6, r0]
    // cmp r0, #2
    // beq _020617E2
    // add r5, r2, #0
    // add r0, r7, #0
    // bl MapObject_GetFacingDirection
    // mov r4, #0
    // ldr r2, [r5]
    // sub r1, r4, #1
    // cmp r2, r1
    // beq _02061806
    // add r1, r5, #0
    // sub r2, r4, #1
    // ldr r3, [r1]
    // cmp r0, r3
    // beq _02061806
    // add r1, r1, #4
    // ldr r3, [r1]
    // add r4, r4, #1
    // cmp r3, r2
    // bne _020617F6
    // lsl r0, r4, #2
    // ldr r1, [r5, r0]
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // bne _02061816
    // bl GF_AssertFail
    // add r4, r4, #1
    // lsl r0, r4, #2
    // ldr r1, [r5, r0]
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // bne _02061826
    // mov r4, #0
    // lsl r1, r4, #2
    // ldr r1, [r5, r1]
    // add r0, r7, #0
    // bl MapObject_SetFacingDirection
    // mov r0, #0
    // strb r0, [r6, #2]
    // mov r0, #1
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0206183C: .word _020FD754
    // _02061840: .word _020FD768
    // TODO: decompile
}


void sub_02061844(void) {
    sub_020616C0();
}


void sub_02061850(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_0205F394
    // ldr r6, _02061870 ; =_020FD5A0
    // add r4, r0, #0
    // mov r7, #2
    // ldrsb r2, [r4, r7]
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r2, r2, #2
    // ldr r2, [r6, r2]
    // blx r2
    // cmp r0, #1
    // beq _0206185E
    // pop {r3, r4, r5, r6, r7, pc}
    // _02061870: .word _020FD5A0
    // TODO: decompile
}


void sub_02061874(void) {
    MapObject_GetFacingDirection();
    sub_0206234C(0);
    MapObject_ForceSetHeldMovement(r5, r0);
    *((u8*)(r4 + 2)) = 1;
}


void sub_02061894(void) {
    sub_02062428(0, 0, 1, 2);
}


void sub_020618B0(void) {
    // ldr r0, [r1, #4]
    // add r0, r0, #1
    // str r0, [r1, #4]
    // cmp r0, #0x18
    // bge _020618BE
    // mov r0, #0
    // bx lr
    // mov r0, #3
    // strb r0, [r1, #2]
    // mov r0, #1
    // bx lr
    // TODO: decompile
}


void sub_020618C8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // ldr r3, _02061974 ; =_020FD77C
    // add r2, sp, #0x14
    // add r7, r0, #0
    // add r6, r1, #0
    // ldmia r3!, {r0, r1}
    // add r5, r2, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // ldr r3, _02061978 ; =_020FD7A4
    // str r0, [r2]
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // add r4, r2, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // mov r0, #0
    // ldrsb r0, [r6, r0]
    // cmp r0, #2
    // beq _020618FE
    // add r5, r4, #0
    // add r0, r7, #0
    // bl MapObject_GetFacingDirection
    // mov r4, #0
    // ldr r2, [r5]
    // sub r1, r4, #1
    // cmp r2, r1
    // beq _02061922
    // add r1, r5, #0
    // sub r2, r4, #1
    // ldr r3, [r1]
    // cmp r0, r3
    // beq _02061922
    // add r1, r1, #4
    // ldr r3, [r1]
    // add r4, r4, #1
    // cmp r3, r2
    // bne _02061912
    // lsl r0, r4, #2
    // ldr r1, [r5, r0]
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // bne _02061932
    // bl GF_AssertFail
    // add r4, r4, #1
    // lsl r0, r4, #2
    // ldr r1, [r5, r0]
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // bne _02061942
    // mov r4, #0
    // lsl r1, r4, #2
    // ldr r1, [r5, r1]
    // add r0, r7, #0
    // bl MapObject_SetFacingDirection
    // add r0, r7, #0
    // bl MapObject_GetFacingDirection
    // add r4, r0, #0
    // add r0, r7, #0
    // bl MapObject_GetInitialFacingDirection
    // cmp r4, r0
    // bne _02061968
    // mov r0, #0
    // ldrsb r0, [r6, r0]
    // bl sub_020611F4
    // strb r0, [r6]
    // mov r0, #0
    // strb r0, [r6, #2]
    // mov r0, #1
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02061974: .word _020FD77C
    // _02061978: .word _020FD7A4
    // TODO: decompile
}


void sub_0206197C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r1, #8
    // bl sub_0205F370
    // add r4, r0, #0
    // add r0, r5, #0
    // bl sub_02062050
    // cmp r0, #1
    // bne _0206199A
    // add r0, r5, #0
    // add r1, r4, #4
    // bl sub_02062064
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_0206199C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_0205F394
    // ldr r6, _020619BC ; =_020FD548
    // add r4, r0, #0
    // mov r7, #0
    // ldrsh r2, [r4, r7]
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r2, r2, #2
    // ldr r2, [r6, r2]
    // blx r2
    // cmp r0, #1
    // beq _020619AA
    // pop {r3, r4, r5, r6, r7, pc}
    // _020619BC: .word _020FD548
    // TODO: decompile
}


void sub_020619C0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl MapObject_GetInitialFacingDirection
    // mov r1, #2
    // ldrsh r1, [r4, r1]
    // add r6, r0, #0
    // cmp r1, #1
    // bne _020619DA
    // bl sub_020611F4
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl MapObject_SetNextFacingDirection
    // add r0, r5, #0
    // bl sub_02062050
    // cmp r0, #0
    // bne _020619F4
    // add r0, r5, #0
    // add r1, r6, #0
    // bl MapObject_SetFacingDirection
    // mov r0, #1
    // strh r0, [r4]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_020619FC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // mov r1, #2
    // ldrsh r1, [r6, r1]
    // add r5, r0, #0
    // cmp r1, #0
    // beq _02061A5A
    // bl MapObject_GetInitialX
    // add r7, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetInitialZ
    // str r0, [sp]
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // cmp r7, r4
    // bne _02061A5A
    // ldr r1, [sp]
    // cmp r1, r0
    // bne _02061A5A
    // add r0, r5, #0
    // bl MapObject_GetNextFacingDirection
    // bl sub_020611F4
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl MapObject_SetNextFacingDirection
    // add r0, r5, #0
    // bl sub_02062050
    // cmp r0, #0
    // bne _02061A56
    // add r0, r5, #0
    // add r1, r4, #0
    // bl MapObject_SetFacingDirection
    // mov r0, #0
    // strh r0, [r6, #2]
    // add r0, r5, #0
    // bl MapObject_GetNextFacingDirection
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02060BB8
    // mov r1, #1
    // add r2, r0, #0
    // tst r2, r1
    // beq _02061A84
    // add r0, r4, #0
    // strh r1, [r6, #2]
    // bl sub_020611F4
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02060BB8
    // mov r1, #0xc
    // cmp r0, #0
    // beq _02061A8C
    // mov r1, #0x20
    // add r0, r4, #0
    // bl sub_0206234C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl MapObject_ForceSetHeldMovement
    // add r0, r5, #0
    // bl sub_02062050
    // cmp r0, #1
    // bne _02061AAC
    // add r0, r5, #0
    // add r1, r6, #4
    // bl sub_0206207C
    // add r0, r5, #0
    // bl MapObject_SetSingleMovement
    // mov r0, #2
    // strh r0, [r6]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02061ABC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02062428
    // cmp r0, #1
    // bne _02061AE6
    // add r0, r5, #0
    // bl MapObject_ClearSingleMovement
    // add r0, r5, #0
    // bl sub_02062050
    // cmp r0, #1
    // bne _02061AE2
    // add r0, r5, #0
    // add r1, r4, #4
    // bl sub_020620F8
    // mov r0, #0
    // strh r0, [r4]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02061AEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // mov r1, #0xc
    // add r5, r0, #0
    // add r7, r2, #0
    // str r3, [sp]
    // bl sub_0205F370
    // add r4, r0, #0
    // strb r6, [r4, #2]
    // ldr r0, [sp]
    // strb r7, [r4, #3]
    // str r0, [r4, #4]
    // add r0, r5, #0
    // bl sub_02062050
    // cmp r0, #1
    // bne _02061B1A
    // add r4, #8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02062064
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02061B1C(void) {
    sub_02061AEC();
}


void sub_02061B2C(void) {
    sub_02061AEC();
}


void sub_02061B3C(void) {
    sub_02061AEC();
}


void sub_02061B4C(void) {
    sub_02061AEC();
}


void sub_02061B5C(void) {
    sub_02061AEC();
}


void sub_02061B6C(void) {
    sub_02061AEC();
}


void sub_02061B7C(void) {
    sub_02061AEC();
}


void sub_02061B8C(void) {
    sub_02061AEC();
}


void sub_02061B9C(void) {
    sub_02061AEC();
}


void sub_02061BAC(void) {
    sub_02061AEC();
}


void sub_02061BBC(void) {
    sub_02061AEC();
}


void sub_02061BCC(void) {
    sub_02061AEC();
}


void sub_02061BDC(void) {
    sub_02061AEC();
}


void sub_02061BEC(void) {
    sub_02061AEC();
}


void sub_02061BFC(void) {
    sub_02061AEC();
}


void sub_02061C0C(void) {
    sub_02061AEC();
}


void sub_02061C1C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl sub_0205F394
    // ldr r6, _02061C3C ; =_020FD4EC
    // add r4, r0, #0
    // ldrb r2, [r4]
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r2, r2, #2
    // ldr r2, [r6, r2]
    // blx r2
    // cmp r0, #1
    // beq _02061C28
    // pop {r4, r5, r6, pc}
    // nop
    // _02061C3C: .word _020FD4EC
    // TODO: decompile
}


void sub_02061C40(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // ldrb r2, [r4, #1]
    // ldrb r1, [r4, #2]
    // add r6, r0, #0
    // cmp r2, r1
    // bne _02061C82
    // ldrb r1, [r4, #3]
    // cmp r1, #0
    // bne _02061C6C
    // bl MapObject_GetInitialX
    // add r5, r0, #0
    // add r0, r6, #0
    // bl MapObject_GetXCoord
    // cmp r5, r0
    // bne _02061C82
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // b _02061C82
    // bl MapObject_GetInitialZ
    // add r5, r0, #0
    // add r0, r6, #0
    // bl MapObject_GetZCoord
    // cmp r5, r0
    // bne _02061C82
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4, #1]
    // cmp r0, #3
    // bne _02061CB4
    // add r0, r6, #0
    // bl MapObject_GetInitialX
    // add r7, r0, #0
    // add r0, r6, #0
    // bl MapObject_GetInitialZ
    // str r0, [sp]
    // add r0, r6, #0
    // bl MapObject_GetXCoord
    // add r5, r0, #0
    // add r0, r6, #0
    // bl MapObject_GetZCoord
    // cmp r7, r5
    // bne _02061CB4
    // ldr r1, [sp]
    // cmp r1, r0
    // bne _02061CB4
    // mov r0, #0
    // strb r0, [r4, #1]
    // ldr r0, [r4, #4]
    // bl sub_02061E6C
    // add r7, r0, #0
    // ldrb r0, [r4, #1]
    // lsl r0, r0, #2
    // ldr r5, [r7, r0]
    // add r0, r6, #0
    // add r1, r5, #0
    // bl MapObject_SetNextFacingDirection
    // add r0, r6, #0
    // bl sub_02062050
    // cmp r0, #0
    // bne _02061CDC
    // add r0, r6, #0
    // add r1, r5, #0
    // bl MapObject_SetFacingDirection
    // add r0, r6, #0
    // add r1, r5, #0
    // bl sub_02060BB8
    // mov r1, #1
    // tst r1, r0
    // beq _02061D18
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4, #1]
    // lsl r0, r0, #2
    // ldr r5, [r7, r0]
    // add r0, r6, #0
    // add r1, r5, #0
    // bl MapObject_SetNextFacingDirection
    // add r0, r6, #0
    // bl sub_02062050
    // cmp r0, #0
    // bne _02061D10
    // add r0, r6, #0
    // add r1, r5, #0
    // bl MapObject_SetFacingDirection
    // add r0, r6, #0
    // add r1, r5, #0
    // bl sub_02060BB8
    // mov r1, #0xc
    // cmp r0, #0
    // beq _02061D20
    // mov r1, #0x20
    // add r0, r5, #0
    // bl sub_0206234C
    // add r1, r0, #0
    // add r0, r6, #0
    // bl MapObject_ForceSetHeldMovement
    // add r0, r6, #0
    // bl sub_02062050
    // cmp r0, #1
    // bne _02061D42
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #8
    // bl sub_0206207C
    // add r0, r6, #0
    // bl MapObject_SetSingleMovement
    // mov r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02061D50(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02062428
    // cmp r0, #1
    // bne _02061D7C
    // add r0, r5, #0
    // bl MapObject_ClearSingleMovement
    // add r0, r5, #0
    // bl sub_02062050
    // cmp r0, #1
    // bne _02061D78
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #8
    // bl sub_020620F8
    // mov r0, #0
    // strb r0, [r4]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02061D80(void) {
    sub_02061AEC();
}


void sub_02061D90(void) {
    sub_02061AEC();
}


void sub_02061DA0(void) {
    sub_02061AEC();
}


void sub_02061DB0(void) {
    sub_02061AEC();
}


void sub_02061DC0(void) {
    sub_02061AEC();
}


void sub_02061DD0(void) {
    sub_02061AEC();
}


void sub_02061DE0(void) {
    sub_02061AEC();
}


void sub_02061DF0(void) {
    sub_02061AEC();
}


void sub_02061E00(void) {
    // push {r4, lr}
    // ldr r2, [r0]
    // mov r4, #0
    // cmp r1, r2
    // beq _02061E14
    // add r0, r0, #4
    // ldr r2, [r0]
    // add r4, r4, #1
    // cmp r1, r2
    // bne _02061E0A
    // cmp r4, #0
    // bne _02061E1C
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02061E20(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl LCRandom
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02061E00
    // add r1, r0, #0
    // add r0, r6, #0
    // bl _s32_div_f
    // lsl r0, r1, #2
    // ldr r0, [r5, r0]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02061E44(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // bl sub_02061E6C
    // add r4, r0, #0
    // bl LCRandom
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_02061E00
    // add r1, r0, #0
    // add r0, r6, #0
    // bl _s32_div_f
    // lsl r0, r1, #2
    // ldr r0, [r4, r0]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02061E6C(void) {
    GF_AssertFail(0, 0);
}


void sub_02061E90(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl MapObject_GetType
    // cmp r0, #1
    // beq _02061EA6
    // cmp r0, #2
    // beq _02061EA6
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl MapObject_GetFieldSystem
    // bl FieldSystem_GetPlayerAvatar
    // add r6, r0, #0
    // bl sub_0205DE98
    // cmp r0, #0
    // bne _02061EC0
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // mov r4, #0
    // bl MapObject_GetMovement
    // ldr r1, _02061F58 ; =_020FD800
    // lsl r2, r4, #2
    // ldr r2, [r1, r2]
    // add r4, r4, #1
    // cmp r2, r0
    // beq _02061ED8
    // cmp r2, #0xff
    // bne _02061ECA
    // cmp r0, r2
    // beq _02061EE2
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl PlayerAvatar_GetMapObject
    // bl MapObject_GetPositionVectorYCoordUInt
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetPositionVectorYCoordUInt
    // cmp r4, r0
    // beq _02061EFE
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl PlayerAvatar_GetXCoord
    // add r4, r0, #0
    // add r0, r6, #0
    // bl PlayerAvatar_GetZCoord
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl MapObject_GetParam
    // str r0, [sp]
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // add r7, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // add r2, r0, #0
    // ldr r3, [sp]
    // ldr r0, [sp]
    // add r5, r2, r3
    // sub r1, r7, r0
    // sub r3, r2, r3
    // add r0, r7, r0
    // cmp r3, r6
    // bgt _02061F52
    // cmp r5, r6
    // blt _02061F52
    // cmp r1, r4
    // bgt _02061F52
    // cmp r0, r4
    // blt _02061F52
    // add r1, r2, #0
    // add r0, r7, #0
    // add r2, r4, #0
    // add r3, r6, #0
    // bl sub_02061200
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02061F58: .word _020FD800
    // TODO: decompile
}


void sub_02061F5C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // str r0, [sp]
    // add r4, r2, #0
    // add r0, r1, #0
    // bl sub_02061E6C
    // add r1, r4, #0
    // add r5, r0, #0
    // bl sub_02061E00
    // add r4, r0, #0
    // cmp r4, #1
    // bne _02061F80
    // mov r0, #0
    // add sp, #0x14
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // bl sub_02061E90
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0206204A
    // mov r2, #0
    // add r3, r5, #0
    // ldr r1, [r3]
    // cmp r0, r1
    // beq _0206204A
    // add r2, r2, #1
    // add r3, r3, #4
    // cmp r2, r4
    // blt _02061F92
    // mov r7, #0
    // mvn r7, r7
    // ldr r0, [sp]
    // add r6, r7, #0
    // bl MapObject_GetXCoord
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // bl MapObject_GetZCoord
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // bl MapObject_GetFieldSystem
    // bl FieldSystem_GetPlayerAvatar
    // str r0, [sp, #0xc]
    // bl PlayerAvatar_GetXCoord
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // bl PlayerAvatar_GetZCoord
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0x10]
    // cmp r2, r1
    // ble _02061FDA
    // mov r7, #2
    // b _02061FE0
    // cmp r2, r1
    // bge _02061FE0
    // mov r7, #3
    // ldr r1, [sp, #4]
    // cmp r1, r0
    // ble _02061FEA
    // mov r6, #0
    // b _02061FF0
    // cmp r1, r0
    // bge _02061FF0
    // mov r6, #1
    // mov r0, #0
    // sub r1, r0, #1
    // cmp r7, r1
    // bne _0206200E
    // ldr r1, [r5]
    // cmp r6, r1
    // bne _02062004
    // add sp, #0x14
    // add r0, r6, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r0, #1
    // add r5, r5, #4
    // cmp r0, r4
    // blt _02061FF8
    // b _02062046
    // cmp r6, r1
    // bne _02062028
    // ldr r1, [r5]
    // cmp r7, r1
    // bne _0206201E
    // add sp, #0x14
    // add r0, r7, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r0, #1
    // add r5, r5, #4
    // cmp r0, r4
    // blt _02062012
    // b _02062046
    // ldr r1, [r5]
    // cmp r7, r1
    // bne _02062034
    // add sp, #0x14
    // add r0, r7, #0
    // pop {r4, r5, r6, r7, pc}
    // cmp r6, r1
    // bne _0206203E
    // add sp, #0x14
    // add r0, r6, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r0, #1
    // add r5, r5, #4
    // cmp r0, r4
    // blt _02062028
    // mov r0, #0
    // mvn r0, r0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02062050(void) {
    MapObject_GetType(0, 1);
}


void sub_02062064(void) {
    MapObject_GetType(0, 1);
}


void sub_0206207C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // bl MapObject_GetFacingDirection
    // mov r4, #0
    // add r6, r0, #0
    // add r1, r4, #0
    // ldr r0, _020620F4 ; =_020FD7E0
    // mov r2, #1
    // b _02062096
    // add r1, r1, #4
    // add r4, r4, #1
    // cmp r4, #4
    // bge _020620A6
    // ldrsb r3, [r5, r2]
    // lsl r3, r3, #4
    // add r3, r0, r3
    // ldr r3, [r1, r3]
    // cmp r6, r3
    // bne _02062092
    // cmp r4, #4
    // blt _020620AE
    // bl GF_AssertFail
    // add r0, r4, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // strb r6, [r5]
    // mov r0, #1
    // add r1, r2, r1
    // ldrsb r0, [r5, r0]
    // lsl r1, r1, #2
    // lsl r2, r0, #4
    // ldr r0, _020620F4 ; =_020FD7E0
    // add r0, r0, r2
    // ldr r4, [r1, r0]
    // add r0, r7, #0
    // mov r1, #0x80
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _020620DC
    // mov r0, #1
    // b _020620DE
    // mov r0, #0
    // strb r0, [r5, #2]
    // add r0, r7, #0
    // add r1, r4, #0
    // bl MapObject_SetFacingDirection
    // add r0, r7, #0
    // mov r1, #0x80
    // bl MapObject_SetFlagsBits
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _020620F4: .word _020FD7E0
    // TODO: decompile
}


void sub_020620F8(void) {
    MapObject_ClearFlagsBits();
}

