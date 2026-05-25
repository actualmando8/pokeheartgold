/* Decompiled from asm/unk_020658D4.s */
#include "global.h"

void sub_020658D4(void) {
}




void sub_02065900(void) {
    sub_0205F394();
    sub_02065CD0(r5, r0);
    MapObject_ClearFlag18(r5, 0);
    // blx r2
}




void sub_02065938(void) {
    sub_0205F394();
    sub_02065CD0(r5, r0);
    // blx r2
}




void sub_02065968(void) {
    sub_0205F394();
    sub_02065CD0(r5, r0);
    // blx r2
}




void sub_02065998(void) {
    // bx lr
    // TODO: decompile
}




void sub_0206599C(void) {
}




void sub_020659A8(void) {
}




void sub_020659B8(void) {
}




void sub_020659CC(void) {
    // strb r1, [r6]
    // add r0, #0xe8 ; ->followMon.effectTimer
    // str r1, [r0]
    // str r1, [r4, r0]
    // add r0, #0xec ; ->followMon.duration
    // str r1, [r0]
    // add r4, #0xf0 ; ->followMon.parentData
    // str r1, [r4]
    // str r0, [sp]
}




void sub_02065A4C(void) {
    // str r1, [r4, r0]
    // add r1, #0xec
    // add r1, #0xf0
    // str r1, [r4, r0]
    // strb r0, [r6]
    // add r0, #0xfd
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}




void sub_02065B70(void) {
    // strb r0, [r4]
}




void sub_02065BE8(void) {
    // strb r0, [r4]
}




void sub_02065C2C(void) {
    // strb r0, [r4]
}




void sub_02065C48(void) {
    // strb r0, [r4]
}




void sub_02065C90(void) {
    // strb r0, [r5]
    // strb r0, [r5]
}




void sub_02065CD0(void) {
}




void sub_02065CFC(void) {
}




void sub_02065D24(void) {
    // ldrsh r1, [r5, r1]
    // ldrsh r1, [r5, r1]
}




void sub_02065D58(void) {
}




void sub_02065D78(void) {
    // add r4, #0xe8
    // sub r1, #0x58
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02065D9C: ; jump table
}




void sub_02065DB4(void) {
    // sub r1, #0x58
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02065DDA: ; jump table
}




void sub_02065DF4(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // strb r0, [r4]
}




void sub_02065F44(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
}




void sub_02065FBC(void) {
}




void sub_02065FFC(void) {
}




void sub_02066024(void) {
    sub_0205F394();
    sub_02066150(r5, r0);
    // blx r2
}




void sub_02066054(void) {
    // bx lr
    // TODO: decompile
}




void sub_02066058(void) {
}




void sub_02066064(void) {
    // strb r0, [r4]
}




void sub_020660A0(void) {
    // strb r0, [r4]
}




LocalMapObject * sub_020660C0(void) {
    // str r1, [sp, #8]
    MapObject_GetType(0);
    // str r0, [sp]
    MapObject_GetMapID(r4);
    sub_02064518(r4);
    MapObject_GetManager(r4);
    // ldr r1, [sp]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _020660FA: ; jump table
    // add r1, sp, #4
    // add r2, sp, #8
    MapObjectManager_GetNextObjectWithFlagFromIndex((*((u16*)(r1 + 6)) << 0x10), 1);
    // ldr r0, [sp, #4]
    MapObject_GetMapID();
    // ldr r0, [sp, #4]
    sub_02064518();
    // ldr r0, [sp, #4]
    // add r1, sp, #4
    // add r2, sp, #8
    MapObjectManager_GetNextObjectWithFlagFromIndex(r7, 1);
}



void sub_02066150(void) {
    // str r1, [sp]
    // str r0, [sp, #8]
    // add r1, sp, #4
    // add r2, sp, #8
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r1, sp, #4
    // add r2, sp, #8
    // ldr r1, [sp]
}




void sub_020661CC(void) {
}




void sub_020661F0(void) {
}




void sub_0206623C(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #4]
    // add r4, r4, r0
    // add r1, r6, r0
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
}




void sub_020662C4(void) {
    sub_0205F370(8);
    *((u8*)(r0 + 1)) = r5;
    sub_0205F328(r4, 0);
    MapObject_ClearSingleMovement(r4);
    MapObject_SetFlagsBits(r4, (1 << 0x14));
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    MapObject_SetFacingVector(r4, r3, r3);
}




void sub_0206630C(void) {
}




void sub_02066318(void) {
}




void sub_02066324(void) {
}




void sub_02066330(void) {
}




void sub_0206633C(void) {
    sub_0205F394();
    // blx r2
}




void sub_02066360(void) {
}




void sub_02066370(void) {
    sub_0205F394();
    // strb r1, [r5]
    sub_02066420(r4, 0);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    MapObject_SetFacingVector(r4, r3, r3);
    MapObject_SetFlagsBits(r4, (1 << 0x14));
}




void sub_020663B4(void) {
    // strb r0, [r4]
}




void sub_020663E4(void) {
}




void sub_02066420(void) {
}




void sub_0206642C(void) {
}




void sub_02066438(void) {
}




void sub_02066444(void) {
    // ldmia r5!, {r0, r1}
    // add r4, sp, #0x20
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // add r4, sp, #0x10
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // add r4, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // add r1, sp, #0x10
    // add r1, sp, #0
    GF_AssertFail(((0 + 1) << 0x18), (((0 + 1) << 0x18) >> 0x18), (((0 + 1) << 0x18) >> 0x18), r0);
}




void sub_020664D8(void) {
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // str r2, [sp, #4]
    // add r0, #0xfe
    // add r1, sp, #8
    // add r2, sp, #4
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // str r1, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // str r1, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
}



