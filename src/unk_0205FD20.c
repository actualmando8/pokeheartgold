/* Decompiled from asm/unk_0205FD20.s */
#include "global.h"

void sub_0205FD20(void) {
}





void sub_0205FD30(void) {
}





void sub_0205FD98(void) {
    // tst r2, r1
    // tst r1, r0
    // tst r0, r1
}





void sub_0205FE0C(void) {
}





void sub_0205FE24(void) {
}





void sub_0205FE48(void) {
    MapObject_GetFlagsBitsMask(4);
    sub_0205FEDC(r4);
    MapObject_ClearFlagsBits(r4, 0x00010004);
}





void sub_0205FE6C(void) {
    MapObject_GetFlagsBitsMask((1 << 0x10));
    sub_02060020(r4);
    MapObject_GetFlagsBitsMask(r4, 4);
    sub_0205FF6C(r4);
    MapObject_ClearFlagsBits(r4, 0x00010004);
}





void sub_0205FEA4(void) {
    MapObject_GetFlagsBitsMask((2 << 0x10));
    sub_02060114(r4);
    MapObject_GetFlagsBitsMask(r4, 8);
    sub_0206008C(r4);
    MapObject_ClearFlagsBits(r4, 0x00020008);
}





void sub_0205FEDC(void) {
}





void sub_0205FF6C(void) {
}





void sub_02060020(void) {
}





void sub_0206008C(void) {
}





void sub_02060114(void) {
}





void sub_020601A4(void) {
}





void sub_020601BC(void) {
    // add r4, #0xfe
    // add r1, sp, #8
    // add r2, sp, #4
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // str r0, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // str r0, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
}





void sub_02060274(void) {
    // add r4, #0xfe
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





void sub_02060328(void) {
    // ldrh r0, [r4]
    // ldrh r0, [r4]
    // ldrh r0, [r4]
}





void sub_0206039C(void) {
}





void sub_020603D0(void) {
}





void sub_020603DC(void) {
}





void sub_020603F8(void) {
    // ldrh r0, [r7]
}





void sub_02060530(void) {
    // ldrh r0, [r6]
}





void sub_0206064C(void) {
}





void sub_02060698(void) {
}





void sub_020606CC(void) {
}





void sub_02060700(void) {
}





void sub_02060704(void) {
}





void sub_02060708(void) {
}





void sub_0206073C(void) {
}





void sub_02060770(void) {
}





void sub_020607A4(void) {
}





void sub_020607D8(void) {
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    // str r7, [sp, #0x10]
    // ldr r4, [sp, #0x10]
}





void sub_020609D4(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
}





void sub_02060AB8(void) {
}





void sub_02060AF0(void) {
}





void sub_02060AF4(void) {
    // ldr r7, [sp, #0x28]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // add r1, sp, #0xc
    // str r1, [sp]
    // ldr r1, [sp, #4]
    // add r1, sp, #0xc
    // ldrsb r0, [r1, r0]
    // ldr r3, [sp, #0x2c]
    // ldr r2, [sp, #8]
    // ldr r2, [sp, #8]
}





void sub_02060B90(void) {
    // add r1, sp, #8
    // ldr r0, [sp, #0x28]
    // str r4, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #8
}





void sub_02060BB8(void) {
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp]
    // ldr r4, [sp, #8]
    // ldr r2, [sp, #4]
    // add r1, r6, r7
    // add r3, r4, r3
}





void sub_02060BFC(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // sub r0, r0, r6
    // bpl _02060C5E
    // neg r0, r0
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // sub r0, r0, r6
    // bpl _02060C8A
    // neg r0, r0
    // add r0, sp, #8
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}





void sub_02060CA8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // sub r0, r0, r4
    // bpl _02060D00
    // neg r0, r0
    // ldr r0, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // sub r0, r0, r4
    // bpl _02060D30
    // neg r0, r0
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r1, sp, #0xc
    // add r2, sp, #8
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // sub r0, r0, r4
    // bpl _02060D7A
    // neg r0, r0
    // add r0, sp, #4
}





void sub_02060D94(void) {
    // mvn r1, r1
    // add r1, r7, r0
    // sub r0, r7, r0
    // mvn r1, r1
    // add r1, r5, r0
    // sub r0, r5, r0
}





void sub_02060DEC(void) {
    sub_0205F8D0();
    MapObject_GetFieldSystem(r4);
    // str r0, [sp]
    sub_0205F504(r4);
    // ldr r0, [sp]
    GetMetatileBehavior((r0 << 0x18), r6, r7);
    sub_0205BA6C();
    // blx r1
    // blx r1
}





BOOL sub_02060E54(void) {
    // sub r0, #0xb2
}





void sub_02060EA4(void) {
}





void sub_02060EBC(void) {
}





void sub_02060ED4(void) {
}





void sub_02060EEC(void) {
}





void GetDeltaXByFacingDirection(void) {
    // ldr r0, [r0, r1]
    // _02060F14: .word _020FD4AC
}





void GetDeltaYByFacingDirection(void) {
    // ldr r0, [r0, r1]
    // _02060F20: .word _020FD49C
}





void sub_02060F24(void) {
}





void sub_02060F78(void) {
}





void sub_02060FA8(void) {
    // str r0, [sp]
    // ldr r2, [sp]
    // add r1, r6, r7
    // add r2, r2, r5
}





void sub_02060FE0(void) {
    // str r0, [sp]
    // ldr r2, [sp]
    // add r1, r6, r7
    // add r2, r2, r5
}





void sub_0206101C(void) {
    // add r1, sp, #0
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0206103C: ; jump table
    // ldr r0, [sp, #8]
    // sub r0, r0, r4
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r0, r0, r4
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // sub r0, r0, r4
    // str r0, [sp]
    // ldr r0, [sp]
    // add r0, r0, r4
    // str r0, [sp]
    // add r1, sp, #0
}





void sub_02061070(void) {
    // add r1, sp, #0xc
    // add r3, sp, #0xc
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, sp, #0
    // ldr r0, [sp, #4]
    // add r1, sp, #0xc
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // asr r2, r1, #3
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
}





void sub_02061108(void) {
}





void sub_02061190(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _020611A0: ; jump table
    // sub r0, r0, r2
    // add r0, r0, r2
    // sub r0, r0, r2
    // str r0, [r1]
    // add r0, r0, r2
    // str r0, [r1]
}





void sub_020611C8(void) {
    // add r3, r3, r0
    // str r3, [r2]
    // add r0, r1, r0
}





void sub_020611DC(void) {
    // sub r0, #0x33
}





void sub_020611F4(void) {
    // ldr r0, [r0, r1]
    // _020611FC: .word _020FD4DC
}





void sub_02061200(void) {
    // ble _02061208
    // bge _02061210
    // bgt _02061218
}





u32 sub_0206121C(void) {
    // add r1, sp, #4
    // str r1, [sp]
    // add r1, sp, #4
}





void sub_02061248(void) {
    // add r1, sp, #4
    // str r1, [sp]
    // add r1, sp, #4
}




