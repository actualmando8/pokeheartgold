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
}



void sub_020612C0(void) {
}



void sub_020612CC(void) {
}



void sub_020612D8(void) {
}



void sub_020612E4(void) {
}



void sub_020612F0(void) {
}



void sub_020612FC(void) {
}



void sub_02061308(void) {
}



void sub_02061314(void) {
}



void sub_02061320(void) {
}



void sub_0206132C(void) {
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
}



void sub_020613B0(void) {
}



void sub_020613C0(void) {
}



void sub_020613D0(void) {
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
    // str r0, [sp]
    MapObject_GetInitialX();
    // ldr r0, [sp]
    MapObject_GetInitialZ();
    // ldr r0, [sp]
    MapObject_GetXRange();
    // ldr r0, [sp]
    MapObject_GetYRange();
    // str r0, [sp, #4]
    // ldr r0, [sp]
    MapObject_GetMovement();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02061530: ; jump table
    // sub r0, r6, r7
    // str r0, [r4]
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 8)) = r6;
    // sub r0, r5, r0
    *((u32*)(r4 + 4)) = (*((u16*)(r0 + 6)) << 0x10);
    *((u32*)(r4 + 0xc)) = r5;
    // str r6, [r4]
    // add r0, r6, r7
    *((u32*)(r4 + 8)) = (*((u16*)(r0 + 6)) << 0x10);
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    *((u32*)(r4 + 4)) = (*((u16*)(r0 + 6)) << 0x10);
    *((u32*)(r4 + 0xc)) = r5;
    // sub r0, r6, r7
    // str r0, [r4]
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 8)) = r6;
    *((u32*)(r4 + 4)) = r5;
    // add r0, r5, r0
    *((u32*)(r4 + 0xc)) = (*((u16*)(r0 + 6)) << 0x10);
    // str r6, [r4]
    // add r0, r6, r7
    *((u32*)(r4 + 8)) = (*((u16*)(r0 + 6)) << 0x10);
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 4)) = r5;
    // add r0, r5, r0
    *((u32*)(r4 + 0xc)) = (*((u16*)(r0 + 6)) << 0x10);
    // sub r0, r6, r7
    // str r0, [r4]
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 8)) = r6;
    // sub r0, r5, r0
    *((u32*)(r4 + 4)) = (*((u16*)(r0 + 6)) << 0x10);
    // ldr r0, [sp, #4]
    // add r0, r5, r0
    *((u32*)(r4 + 0xc)) = (*((u16*)(r0 + 6)) << 0x10);
    // str r6, [r4]
    // add r0, r6, r7
    *((u32*)(r4 + 8)) = (*((u16*)(r0 + 6)) << 0x10);
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    *((u32*)(r4 + 4)) = (*((u16*)(r0 + 6)) << 0x10);
    // ldr r0, [sp, #4]
    // add r0, r5, r0
    *((u32*)(r4 + 0xc)) = (*((u16*)(r0 + 6)) << 0x10);
    // sub r0, r6, r7
    // str r0, [r4]
    // add r0, r6, r7
    *((u32*)(r4 + 8)) = (*((u16*)(r0 + 6)) << 0x10);
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    *((u32*)(r4 + 4)) = (*((u16*)(r0 + 6)) << 0x10);
    *((u32*)(r4 + 0xc)) = r5;
    // sub r0, r6, r7
    // str r0, [r4]
    // add r0, r6, r7
    *((u32*)(r4 + 8)) = (*((u16*)(r0 + 6)) << 0x10);
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 4)) = r5;
    // add r0, r5, r0
    *((u32*)(r4 + 0xc)) = (*((u16*)(r0 + 6)) << 0x10);
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
}



void sub_020615F0(void) {
    // add r1, sp, #0
    sub_020614F4();
    MapObject_GetXCoord(r5);
    GetDeltaXByFacingDirection(r6);
    // add r4, r4, r0
    MapObject_GetZCoord(r5);
    GetDeltaYByFacingDirection(r6);
    // add r1, r5, r0
    // ldr r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0xc]
}



void sub_02061648(void) {
}



void sub_0206166C(void) {
    sub_0205F394();
    MapObject_SetFacingDirection(r5, *((u32*)r0));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
}



void sub_02061690(void) {
}



void sub_0206169C(void) {
}



void sub_020616A8(void) {
}



void sub_020616B4(void) {
}



void sub_020616C0(void) {
}



void sub_020616E4(void) {
}



void sub_020616F0(void) {
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
    // sub r2, #0x27
    sub_02061F5C(0x26, 0x26);
    // mvn r1, r1
    MapObject_GetFacingDirection(r5, 0);
    sub_0206234C(0);
    MapObject_ForceSetHeldMovement(r5, r0);
    *((u8*)(r4 + 2)) = 1;
}



void sub_02061754(void) {
}



void sub_02061770(void) {
    // sub r2, #0x27
    sub_02061F5C(0x26, 0x26);
    // mvn r1, r1
    *((u8*)(r4 + 2)) = 0;
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u8*)(r4 + 2)) = 3;
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
}



void sub_02061894(void) {
}



void sub_020618B0(void) {
    *((u32*)(r1 + 4)) = (*((u32*)(r1 + 4)) + 1);
    *((u8*)(r1 + 2)) = 3;
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
    sub_0205F370(8);
    sub_02062050(r5);
    sub_02062064(r5, (r4 + 4));
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
    MapObject_GetInitialFacingDirection();
    // ldrsh r1, [r4, r1]
    sub_020611F4(2);
    MapObject_SetNextFacingDirection(r5, r0);
    sub_02062050(r5);
    MapObject_SetFacingDirection(r5, r6);
    // strh r0, [r4]
}



void sub_020619FC(void) {
    // ldrsh r1, [r6, r1]
    MapObject_GetInitialX(2);
    MapObject_GetInitialZ(r5);
    // str r0, [sp]
    MapObject_GetXCoord(r5);
    MapObject_GetZCoord(r5);
    // ldr r1, [sp]
    MapObject_GetNextFacingDirection(r5);
    sub_020611F4();
    MapObject_SetNextFacingDirection(r5, r0);
    sub_02062050(r5);
    MapObject_SetFacingDirection(r5, r4);
    *((u16*)(r6 + 2)) = 0;
    MapObject_GetNextFacingDirection(r5);
    sub_02060BB8(r5, r0);
    // tst r2, r1
    *((u16*)(r6 + 2)) = 1;
    sub_020611F4(r4, 1, r0);
    sub_02060BB8(r5, r0);
    sub_0206234C(r4, 0x20);
    MapObject_ForceSetHeldMovement(r5, r0);
    sub_02062050(r5);
    sub_0206207C(r5, (r6 + 4));
    MapObject_SetSingleMovement(r5);
    // strh r0, [r6]
}



void sub_02061ABC(void) {
    sub_02062428();
    MapObject_ClearSingleMovement(r5);
    sub_02062050(r5);
    sub_020620F8(r5, (r4 + 4));
    // strh r0, [r4]
}



void sub_02061AEC(void) {
    // str r3, [sp]
    sub_0205F370(0xc);
    *((u8*)(r0 + 2)) = r6;
    // ldr r0, [sp]
    *((u8*)(r0 + 3)) = r7;
    *((u32*)(r0 + 4)) = r0;
    sub_02062050(r5);
    // add r4, #8
    sub_02062064(r5, r4);
}



void sub_02061B1C(void) {
}



void sub_02061B2C(void) {
}



void sub_02061B3C(void) {
}



void sub_02061B4C(void) {
}



void sub_02061B5C(void) {
}



void sub_02061B6C(void) {
}



void sub_02061B7C(void) {
}



void sub_02061B8C(void) {
}



void sub_02061B9C(void) {
}



void sub_02061BAC(void) {
}



void sub_02061BBC(void) {
}



void sub_02061BCC(void) {
}



void sub_02061BDC(void) {
}



void sub_02061BEC(void) {
}



void sub_02061BFC(void) {
}



void sub_02061C0C(void) {
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
    MapObject_GetInitialX(*((u8*)(r1 + 3)), *((u8*)(r1 + 1)));
    MapObject_GetXCoord(r6);
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    MapObject_GetInitialZ((*((u8*)(r4 + 1)) + 1));
    MapObject_GetZCoord(r6);
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    MapObject_GetInitialX(r6);
    MapObject_GetInitialZ(r6);
    // str r0, [sp]
    MapObject_GetXCoord(r6);
    MapObject_GetZCoord(r6);
    // ldr r1, [sp]
    *((u8*)(r4 + 1)) = 0;
    sub_02061E6C(*((u32*)(r4 + 4)));
    // ldr r5, [r7, r0]
    MapObject_SetNextFacingDirection(r6, r5);
    sub_02062050(r6);
    MapObject_SetFacingDirection(r6, r5);
    sub_02060BB8(r6, r5);
    // tst r1, r0
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // ldr r5, [r7, r0]
    MapObject_SetNextFacingDirection(r6, r5);
    sub_02062050(r6);
    MapObject_SetFacingDirection(r6, r5);
    sub_02060BB8(r6, r5);
    sub_0206234C(r5, 0x20);
    MapObject_ForceSetHeldMovement(r6, r0);
    sub_02062050(r6);
    // add r1, #8
    sub_0206207C(r6, r4);
    MapObject_SetSingleMovement(r6);
    // strb r0, [r4]
}



void sub_02061D50(void) {
    sub_02062428();
    MapObject_ClearSingleMovement(r5);
    sub_02062050(r5);
    // add r1, #8
    sub_020620F8(r5, r4);
    // strb r0, [r4]
}



void sub_02061D80(void) {
}



void sub_02061D90(void) {
}



void sub_02061DA0(void) {
}



void sub_02061DB0(void) {
}



void sub_02061DC0(void) {
}



void sub_02061DD0(void) {
}



void sub_02061DE0(void) {
}



void sub_02061DF0(void) {
}



void sub_02061E00(void) {
    GF_AssertFail((r0 + 4), *((u32*)(r0 + 4)));
}



void sub_02061E20(void) {
    LCRandom();
    sub_02061E00(r5, r4);
    _s32_div_f(r6, r0);
    // ldr r0, [r5, r0]
}



void sub_02061E44(void) {
    sub_02061E6C();
    LCRandom();
    sub_02061E00(r4, r5);
    _s32_div_f(r6, r0);
    // ldr r0, [r4, r0]
}



void sub_02061E6C(void) {
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
    // str r0, [sp]
    sub_02061E6C(r1);
    sub_02061E00(r4);
    // mvn r0, r0
    // ldr r0, [sp]
    sub_02061E90(0);
    // mvn r1, r1
    // mvn r7, r7
    // ldr r0, [sp]
    MapObject_GetXCoord(*((u32*)r5), (0 + 1), (r5 + 4));
    // str r0, [sp, #8]
    // ldr r0, [sp]
    MapObject_GetZCoord();
    // str r0, [sp, #4]
    // ldr r0, [sp]
    MapObject_GetFieldSystem();
    FieldSystem_GetPlayerAvatar();
    // str r0, [sp, #0xc]
    PlayerAvatar_GetXCoord();
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    PlayerAvatar_GetZCoord();
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #4]
    // mvn r0, r0
}



void sub_02062050(void) {
}



void sub_02062064(void) {
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
}


