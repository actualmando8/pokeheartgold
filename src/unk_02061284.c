/* Decompiled from asm/unk_02061284.s */
#include "global.h"

void sub_02061284(void) {
    sub_0205F370(8);
    // mvn r1, r1
    sub_02061E20(_020FD7B8, 0);
    *((u16*)(r4 + 2)) = r0;
    *((u32*)(r4 + 4)) = r6;
    sub_0205F328(r5, 0);
    MapObject_ClearSingleMovement(r5);
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
    sub_0205F394();
    // mvn r2, r2
    sub_02061F5C(r5, *((u32*)(r0 + 4)), 0);
    // mvn r2, r2
    MapObject_SetFacingDirection(r5, r0, 0);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 2)) = (r1 - 1);
    // ldrsh r0, [r4, r0]
    sub_02061E20(_020FD7B8, r2);
    *((u16*)(r4 + 2)) = r0;
    // mvn r1, r1
    sub_02061E44(*((u32*)(r4 + 4)), 0);
    MapObject_SetFacingDirection(r5, r0);
    sub_02060F78(r5);
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
    sub_0205F394();
    // ldrsh r0, [r4, r0]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02061416: ; jump table
    MapObject_ClearSingleMovement(r5);
    MapObject_ClearFlag3(r5);
    MapObject_GetFacingDirection(r5);
    sub_0206234C(0);
    MapObject_ForceSetHeldMovement(r5, r0);
    // ldrsh r0, [r4, r0]
    // strh r0, [r4]
    sub_02062428(r5);
    // mvn r1, r1
    sub_02061E20(_020FD7B8, 0);
    *((u16*)(r4 + 2)) = r0;
    // ldrsh r0, [r4, r0]
    // strh r0, [r4]
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 2)) = (r1 - 1);
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // strh r0, [r4]
    // mvn r1, r1
    sub_02061E44(*((u32*)(r4 + 0xc)), 0);
    MapObject_SetOrQueueFacing(r5, r0);
    sub_020615F0(r5, r6);
    // strh r0, [r4]
    sub_02060BB8(r5, r6);
    // strh r0, [r4]
    sub_0206234C(r6, *((u32*)(r4 + 8)));
    MapObject_ForceSetHeldMovement(r5, r0);
    MapObject_SetSingleMovement(r5);
    // ldrsh r0, [r4, r0]
    // strh r0, [r4]
    sub_02062428(r5);
    MapObject_ClearSingleMovement(r5);
    // strh r0, [r4]
}




void sub_020614F4(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02061530: ; jump table
    // sub r0, r6, r7
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    // str r6, [r4]
    // add r0, r6, r7
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    // sub r0, r6, r7
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // add r0, r5, r0
    // str r6, [r4]
    // add r0, r6, r7
    // ldr r0, [sp, #4]
    // add r0, r5, r0
    // sub r0, r6, r7
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    // ldr r0, [sp, #4]
    // add r0, r5, r0
    // str r6, [r4]
    // add r0, r6, r7
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    // ldr r0, [sp, #4]
    // add r0, r5, r0
    // sub r0, r6, r7
    // str r0, [r4]
    // add r0, r6, r7
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    // sub r0, r6, r7
    // str r0, [r4]
    // add r0, r6, r7
    // ldr r0, [sp, #4]
    // add r0, r5, r0
}




void sub_020615F0(void) {
    // add r1, sp, #0
    // add r4, r4, r0
    // add r1, r5, r0
    // ldr r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0xc]
}




void sub_02061648(void) {
}




void sub_0206166C(void) {
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
    sub_0205F394();
    // ldrsb r2, [r4, r7]
    // blx r2
}




void sub_02061720(void) {
    // sub r2, #0x27
    // mvn r1, r1
}




void sub_02061754(void) {
}




void sub_02061770(void) {
    // sub r2, #0x27
    // mvn r1, r1
}




void sub_020617AC(void) {
    // add r2, sp, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldrsb r0, [r6, r0]
    MapObject_GetFacingDirection(r0, _020FD754, _020FD754);
    // mvn r0, r0
    GF_AssertFail(0, *((u32*)(r5 + ((0 + 1) << 2))), (0 - 1), *((u32*)(r5 + 4)));
    // mvn r0, r0
    MapObject_SetFacingDirection(r7, *((u32*)(r5 + (0 << 2))));
    *((u8*)(r6 + 2)) = 0;
}




void sub_02061844(void) {
}




void sub_02061850(void) {
    sub_0205F394();
    // ldrsb r2, [r4, r7]
    // blx r2
}




void sub_02061874(void) {
}




void sub_02061894(void) {
}




void sub_020618B0(void) {
}




void sub_020618C8(void) {
    // add r2, sp, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldrsb r0, [r6, r0]
    MapObject_GetFacingDirection(r0, _020FD7A4);
    // mvn r0, r0
    GF_AssertFail(0, *((u32*)(r5 + ((0 + 1) << 2))), (0 - 1), *((u32*)(r5 + 4)));
    // mvn r0, r0
    MapObject_SetFacingDirection(r7, *((u32*)(r5 + (0 << 2))));
    MapObject_GetFacingDirection(r7);
    MapObject_GetInitialFacingDirection(r7);
    // ldrsb r0, [r6, r0]
    sub_020611F4(0);
    // strb r0, [r6]
    *((u8*)(r6 + 2)) = 0;
}




void sub_0206197C(void) {
}




void sub_0206199C(void) {
    sub_0205F394();
    // ldrsh r2, [r4, r7]
    // blx r2
}




void sub_020619C0(void) {
    // ldrsh r1, [r4, r1]
    // strh r0, [r4]
}




void sub_020619FC(void) {
    // ldrsh r1, [r6, r1]
    // str r0, [sp]
    // ldr r1, [sp]
    // tst r2, r1
    // strh r0, [r6]
}




void sub_02061ABC(void) {
    // strh r0, [r4]
}




void sub_02061AEC(void) {
    // str r3, [sp]
    // ldr r0, [sp]
    // add r4, #8
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
    sub_0205F394();
    // blx r2
}




void sub_02061C40(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    // tst r1, r0
    // add r1, #8
    // strb r0, [r4]
}




void sub_02061D50(void) {
    // add r1, #8
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
}




void sub_02061E20(void) {
    // ldr r0, [r5, r0]
}




void sub_02061E44(void) {
    // ldr r0, [r4, r0]
}




void sub_02061E6C(void) {
}




void sub_02061E90(void) {
    MapObject_GetType();
    // mvn r0, r0
    MapObject_GetFieldSystem(r5);
    FieldSystem_GetPlayerAvatar();
    sub_0205DE98();
    // mvn r0, r0
    MapObject_GetMovement(r5);
    // mvn r0, r0
    PlayerAvatar_GetMapObject(r6, _020FD800, *((u32*)(_020FD800 + (r4 << 2))));
    MapObject_GetPositionVectorYCoordUInt();
    MapObject_GetPositionVectorYCoordUInt(r5);
    // mvn r0, r0
    PlayerAvatar_GetXCoord(r6);
    PlayerAvatar_GetZCoord(r6);
    MapObject_GetParam(r5, 0);
    // str r0, [sp]
    MapObject_GetXCoord(r5);
    MapObject_GetZCoord(r5);
    // ldr r3, [sp]
    // ldr r0, [sp]
    // add r5, r2, r3
    // sub r1, r7, r0
    // sub r3, r2, r3
    // add r0, r7, r0
    sub_02061200(r7, r0, r4, r6);
    // mvn r0, r0
}




void sub_02061F5C(void) {
    // str r0, [sp]
    // mvn r0, r0
    // ldr r0, [sp]
    // mvn r1, r1
    // mvn r7, r7
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
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
    MapObject_GetFacingDirection();
    // ldrsb r3, [r5, r2]
    // add r3, r0, r3
    GF_AssertFail(_020FD7E0, (0 + 4), 1, *((u32*)((0 + 4) + (r3 << 4))));
    // sub r1, r1, r2
    // ror r1, r0
    // strb r6, [r5]
    // add r1, r2, r1
    // ldrsb r0, [r5, r0]
    // add r0, r0, r2
    MapObject_GetFlagsBitsMask(r7, 0x80, (1 << 4));
    *((u8*)(r5 + 2)) = 0;
    MapObject_SetFacingDirection(r7, r4);
    MapObject_SetFlagsBits(r7, 0x80);
}




void sub_020620F8(void) {
}



