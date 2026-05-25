/* Decompiled from asm/overlay_10_trainer_ai.s */
#include "global.h"

void ov10_0221BF44(void) {
    // str r0, [sp]
    ov10_0221EE88();
    // tst r0, r1
    // tst r0, r1
    // strb r1, [r5, r0]
    // ldr r0, [sp]
    ov10_0221C278((0xd5 << 2), r5);
    // str r0, [r5, r6]
    // strb r0, [r5, r4]
    // strb r1, [r5, r0]
    // add r0, #0xb
    // tst r0, r1
    // tst r0, r1
    // sub r0, #0xc
    // ldrsb r0, [r5, r0]
    // add r1, sp, #4
    *((u8*)(*((u8*)(r5 + (0xd9 << 2))) + 4)) = (0xd9 << 2);
    // strb r0, [r1]
    // add r3, #0x6b
    // add r0, r5, r0
    // add r6, r5, r2
    // ldrsb r6, [r6, r0]
    // add r0, sp, #8
    // strb r6, [r0, r4]
    // add r0, sp, #4
    // strb r2, [r0, r7]
    *((u8*)(*((u8*)(r5 + (0xd9 << 2))) + 4)) = r6;
    // strb r2, [r1]
    // ldr r0, [sp]
    BattleSystem_Random(*((u8*)(*((u8*)(r5 + (0xd9 << 2))) + 4)), *((u8*)(r5 + (0xd9 << 2))), (1 + 1), (((0xc0 * *((u8*)(r5 + (0xd9 << 2)))) + 2) + 2));
    _s32_div_f(r4);
    // add r0, sp, #4
    // add r2, #0xa
    // add r1, r5, r1
    // strb r3, [r1, r2]
}




void ov10_0221C038(void) {
    // str r0, [sp, #0xc]
    // add r0, sp, #0x18
    // str r0, [sp, #4]
    // add r0, sp, #0x20
    // str r5, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // mvn r1, r1
    // strb r1, [r0]
    // ldr r0, [sp]
    // strh r1, [r0]
    ov10_0221BE20(r0, r1, *((u8*)(r1 + 0x000003CF)), 0xf);
    // ldr r0, [sp, #0xc]
    // strb r0, [r5, r1]
    // and r0, r2
    // and r1, r2
    ov10_0221EE88(r7, r5, 1);
    // strb r2, [r5, r0]
    // sub r1, #0x10
    // strb r2, [r5, r1]
    // tst r0, r4
    // tst r0, r1
    // strb r1, [r5, r0]
    ov10_0221C278(r7, r5, 0);
    // asr r4, r4, #1
    // strb r0, [r5, r6]
    // strb r1, [r5, r0]
    // tst r0, r1
    // ldr r0, [sp, #4]
    // strb r1, [r0]
    // tst r0, r1
    // ldr r0, [sp, #4]
    // strb r1, [r0]
    // sub r0, #0xc
    // ldrsb r1, [r5, r0]
    // add r0, sp, #0x10
    // add r2, #0x6b
    *((u8*)((0xd9 << 2) + 4)) = 5;
    // strb r1, [r0]
    // add r2, r5, r2
    // add r6, r5, r1
    // ldrsb r3, [r6, r3]
    // add r6, sp, #0x14
    // strb r3, [r6, r4]
    // add r6, sp, #0x10
    // strb r1, [r6, r4]
    *((u8*)((0xd9 << 2) + 4)) = (0xd6 << 2);
    // strb r1, [r0]
    BattleSystem_Random(r7, (1 + 1), (((0xc0 * *((u8*)(r5 + (0xd9 << 2)))) + 2) + 2), (0xd6 << 2));
    _s32_div_f(r4);
    // add r0, sp, #0x10
    // ldr r0, [sp, #4]
    // strb r1, [r0]
    // add r0, sp, #0x10
    // ldr r0, [sp]
    // strh r1, [r0]
    // eor r1, r0
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldrsh r0, [r0, r1]
    // ldr r0, [sp]
    // strh r1, [r0]
    // ldr r0, [sp, #8]
    // add r0, #0xc0
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x10
    // ldrsh r1, [r0, r1]
    *((u8*)((((2 + 1) + 2) + 1) + 0xc)) = 0;
    // add r2, sp, #0x20
    // add r2, #2
    // ldrsh r3, [r2, r0]
    // add r0, sp, #0x1c
    // strb r4, [r0, r6]
    // add r0, sp, #0x10
    *((u8*)(0 + 0xc)) = 1;
    BattleSystem_Random(r7, r3, (0 + 2));
    _s32_div_f(r6);
    // add r0, sp, #0x1c
    // add r2, r5, r1
    // add r1, #0xb
    // strb r3, [r2, r1]
    // add r1, #0xb
    // add r3, r5, r2
    // add r3, sp, #0x18
    // add r0, #0x17
    // ldrsb r4, [r3, r1]
    // add r3, r5, r3
    // add r3, r3, r2
    // add r2, r5, r2
    BattleSystem_GetFieldSide(r7, *((u8*)(*((u8*)(r0 + r1)) + 0x000003CF)), *((u16*)((*((u16*)((0xc0 * *((u8*)(r5 + 0x000003CF))) + 0x00002D4C)) << 4) + 0x000003CF)), (0xc0 * *((u8*)(r5 + 0x000003CF))));
    // add r0, #0xb
    // add r1, r5, r2
    // strb r2, [r1, r0]
    CurseUserIsGhost(r5, r6, *((u8*)(r5 + 0x000003CF)));
    // add r0, #0xb
    // add r1, r5, r2
    // strb r2, [r1, r0]
}




void ov10_0221C278(void) {
    // sub r4, #0x10
    // str r1, [r5, r0]
    // add r3, r5, r0
    // add r1, r3, r2
    // add r1, r3, r0
    // strh r1, [r5, r0]
    // strb r0, [r5, r4]
    // blx r2
    // add r2, r5, r0
    // strb r1, [r2, r0]
    // strb r0, [r5, r6]
    // tst r0, r1
    // strb r1, [r5, r0]
    // tst r0, r1
    // strb r1, [r5, r0]
    // strb r0, [r5, r4]
    // and r0, r1
    // strb r0, [r5, r6]
}




void ov10_0221C384(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
}




void ov10_0221C3C4(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
}




void ov10_0221C404(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
}




void ov10_0221C444(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
}




void ov10_0221C484(void) {
    // add r1, r4, r2
    // ldrsb r3, [r1, r5]
    // add r0, r3, r0
    // strb r0, [r1, r5]
    // ldrsb r0, [r1, r2]
    // strb r0, [r1, r2]
}




void ov10_0221C4B8(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // add r2, r5, r1
    _u32_div_f((0x64 * *((u32*)(r2 + 0x00002D8C))), *((u32*)(r2 + (0x00002D8C + 4))), 0x00002D8C);
    ov10_0221EF24(r5, r7);
}




void ov10_0221C510(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // add r2, r5, r1
    _u32_div_f((0x64 * *((u32*)(r2 + 0x00002D8C))), *((u32*)(r2 + (0x00002D8C + 4))), 0x00002D8C);
    ov10_0221EF24(r5, r7);
}




void ov10_0221C568(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // add r2, r5, r1
    _u32_div_f((0x64 * *((u32*)(r2 + 0x00002D8C))), *((u32*)(r2 + (0x00002D8C + 4))), 0x00002D8C);
    ov10_0221EF24(r5, r7);
}




void ov10_0221C5C0(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // add r2, r5, r1
    _u32_div_f((0x64 * *((u32*)(r2 + 0x00002D8C))), *((u32*)(r2 + (0x00002D8C + 4))), 0x00002D8C);
    ov10_0221EF24(r5, r7);
}




void ov10_0221C618(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // add r1, r5, r1
    // tst r0, r6
    ov10_0221EF24(r5, r7);
}




void ov10_0221C664(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // add r1, r5, r1
    // tst r0, r6
    ov10_0221EF24(r5, r7);
}




void ov10_0221C6B0(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // add r1, r5, r1
    // tst r0, r6
    ov10_0221EF24(r5, r7);
}




void ov10_0221C6FC(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // add r1, r5, r1
    // tst r0, r6
    ov10_0221EF24(r5, r7);
}




void ov10_0221C748(void) {
    // add r1, r5, r1
    // tst r0, r6
}




void ov10_0221C790(void) {
    // add r1, r5, r1
    // tst r0, r6
}




void ov10_0221C7D8(void) {
    // str r0, [sp]
    // add r1, r5, r0
    // tst r0, r6
    // ldr r1, [sp]
}




void ov10_0221C828(void) {
    // str r0, [sp]
    // add r1, r5, r0
    // tst r0, r6
    // ldr r1, [sp]
}




void ov10_0221C878(void) {
    // ldr r0, [r5, r0]
}




void ov10_0221C8A8(void) {
    // ldr r0, [r5, r0]
}




void ov10_0221C8D8(void) {
    // ldr r0, [r5, r0]
}




void ov10_0221C908(void) {
    // ldr r0, [r5, r0]
}




void ov10_0221C938(void) {
    // tst r0, r4
}




void ov10_0221C968(void) {
    // tst r0, r4
}




void ov10_0221C998(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF24(r5, r0);
}




void ov10_0221C9C8(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF24(r5, r0);
}




void ov10_0221C9F8(void) {
    // str r0, [sp]
    // mvn r1, r1
    // ldr r1, [sp]
}




void ov10_0221CA4C(void) {
    // str r0, [sp]
    // mvn r1, r1
    // ldr r1, [sp]
}




void ov10_0221CA9C(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r6);
    // mov ip, r0
    // add r3, r6, r1
    // add r5, r3, r2
    // add r5, r6, r4
    // mov r1, ip
    ov10_0221EF24(r6, (r3 + 2), (0 + 2));
}




void ov10_0221CB00(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r6);
    // mov ip, r0
    // add r3, r6, r1
    // add r5, r3, r2
    // add r5, r6, r4
    // mov r1, ip
    ov10_0221EF24(r6, (r3 + 2), (0 + 2));
}




void ov10_0221CB64(void) {
}




void ov10_0221CB80(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221CBA6: ; jump table
    GetBattlerVar(r4, *((u8*)(r4 + 0x000003CF)), 0x1b, 0);
    // str r0, [r4, r1]
    GetBattlerVar(r4, *((u8*)(r4 + (0x3d << 4))), 0x1b, 0);
    // str r0, [r4, r1]
    GetBattlerVar(r4, *((u8*)(r4 + 0x000003CF)), 0x1c, 0);
    // str r0, [r4, r1]
    GetBattlerVar(r4, *((u8*)(r4 + (0x3d << 4))), 0x1c, 0);
    // str r0, [r4, r1]
    // add r2, r4, r1
    // add r1, #0x8c
    // str r1, [r4, r0]
    BattleSystem_GetBattlerIdPartner(r5, *((u8*)(r4 + 0x000003CF)));
    GetBattlerVar(r4, r0, 0x1b, 0);
    // str r0, [r4, r1]
    BattleSystem_GetBattlerIdPartner(r5, *((u8*)(r4 + (0x3d << 4))));
    GetBattlerVar(r4, r0, 0x1b, 0);
    // str r0, [r4, r1]
    BattleSystem_GetBattlerIdPartner(r5, *((u8*)(r4 + 0x000003CF)));
    GetBattlerVar(r4, r0, 0x1c, 0);
    // str r0, [r4, r1]
    BattleSystem_GetBattlerIdPartner(r5, *((u8*)(r4 + (0x3d << 4))));
    GetBattlerVar(r4, r0, 0x1b, 0);
    // str r0, [r4, r1]
    GF_AssertFail((0xd7 << 2));
}




void ov10_0221CCB4(void) {
    // str r1, [r5, r0]
    // str r1, [r5, r0]
}




void ov10_0221CD10(void) {
    ov10_0221EF24(r1, 1);
    // add r2, r4, r1
    // add r1, #0x8b
    // str r1, [r4, r0]
}




void ov10_0221CD34(void) {
    // str r0, [sp, #0x18]
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r6);
    // str r0, [sp, #0x1c]
    // add r2, #0x88
    // add r3, r6, r7
    // add r3, r6, r7
    // add r5, sp, #0x20
    // add r2, #0xa
    GetBattlerVar(r6, *((u8*)(r6 + 0x000003CF)), 0, 0);
    // strb r0, [r5]
    GetBattlerAbility(r6, *((u8*)(r6 + 0x000003CF)));
    // add r1, sp, #0x28
    // str r1, [sp]
    // add r1, r6, r5
    // str r1, [sp, #4]
    // add r1, sp, #0x20
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, r6, r0
    // add r0, #0x14
    // sub r3, #0x6c
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    // add r3, r6, r3
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r3, r3, r5
    ov10_0221EF7C(((*((u32*)(*((u16*)(r1 + 0x00002DB8)) + 0x00002DB8)) << 0xa) >> 0x1d), r6, r4, 0x00002DB8);
    // add r1, sp, #0x28
    // str r1, [r6, r0]
    // str r1, [r6, r0]
    // str r1, [r6, r0]
}




void ov10_0221CE70(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EF34(r4, ((r0 << 0x18) >> 0x18));
    // add r1, r4, r0
    // str r1, [r4, r0]
}




void ov10_0221CEA4(void) {
    // ldr r0, [r5, r0]
}




void ov10_0221CED4(void) {
    // ldr r0, [r5, r0]
}




void ov10_0221CF04(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // str r0, [sp]
    CheckSortSpeed(r6, r5, *((u8*)(r5 + 0x000003CF)), *((u8*)(r5 + (0x000003CF + 1))));
    ov10_0221EF24(r5, r7);
}




void ov10_0221CF48(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // str r0, [sp]
    CheckSortSpeed(r6, r5, *((u8*)(r5 + 0x000003CF)), *((u8*)(r5 + (0x000003CF + 1))));
    ov10_0221EF24(r5, r7);
}




void ov10_0221CF8C(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    // str r1, [r5, r0]
    ov10_0221EF34(r5, ((r0 << 0x18) >> 0x18), r0);
    // str r0, [sp]
    // ldr r1, [sp]
    BattleSystem_GetParty(r7);
    // str r0, [sp, #0xc]
    // tst r0, r1
    // ldr r0, [sp]
    // add r1, r5, r0
    // ldr r1, [sp]
    // str r0, [sp, #8]
    BattleSystem_GetBattlerIdPartner(r7, *((u32*)(r7 + 0x2c)));
    // add r1, r5, r0
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r1, r5, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp]
    BattleSystem_GetPartySize(r7);
    // ldr r0, [sp, #0xc]
    Party_GetMonByIndex(r4);
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #4]
    GetMonData(0xa3, 0);
    GetMonData(r6, 0xae, 0);
    GetMonData(r6, 0xae, 0);
    // str r1, [r5, r0]
    // ldr r1, [sp]
    BattleSystem_GetPartySize(r7, (*((u32*)(r5 + (0xd7 << 2))) + 1));
}




void ov10_0221D068(void) {
}




void ov10_0221D084(void) {
    ov10_0221EF24(r1, 1);
    // add r2, r4, r1
    // add r1, #0x88
    // str r1, [r4, r0]
}




void ov10_0221D0A8(void) {
    // str r0, [sp]
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r0 << 0x18) >> 0x18));
    // add r0, r5, r6
    // tst r2, r4
    // str r1, [r5, r0]
    // add r4, r5, r1
    // sub r1, #0x3f
    // sub r2, #0x73
    // str r1, [r5, r2]
    // sub r1, #0x59
    // str r1, [r5, r0]
    // sub r3, #0x80
    // add r7, r5, r3
    GetMonBaseStat(*((u16*)(r7 + (r0 * 0xc0))), 0x18, 0x000003CF, (0xb7 << 6));
    GetMonBaseStat(*((u16*)(r7 + r6)), 0x19);
    // ldr r0, [sp]
    BattleSystem_Random();
    // tst r0, r1
    // str r4, [r5, r0]
    // str r6, [r5, r0]
    // str r4, [r5, r0]
    // str r6, [r5, r0]
    // add r1, r5, r6
    // str r1, [r5, r0]
}




void ov10_0221D188(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // mov ip, r1
    // add r6, r5, r1
    // tst r2, r3
    // add r2, r5, r0
    // sub r1, #0x34
    // str r4, [r5, r1]
    // mov r1, ip
    // add r2, r5, r1
    // sub r1, #0x27
    // add r6, r5, r1
    // str r1, [sp]
    GetMonBaseStat(*((u16*)(r6 + (0xc0 * r0))), 0x18, (2 << 0x14), *((u32*)(r6 + (0xb7 << 6))));
    // ldr r0, [sp]
    GetMonBaseStat(*((u16*)(r6 + r0)), 0x19);
    // sub r1, #0x59
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
}




void ov10_0221D260(void) {
    ov10_0221EF24(r1, 1);
    // str r0, [sp, #0x10]
    // str r0, [r5, r1]
    // str r0, [sp, #0x14]
    // add r0, r5, r0
    // add r1, r4, r0
    ov10_0221F47C(r7, r5, *((u8*)(r5 + 0x000003CF)), *((u16*)((0xd7 << 2) + 0x00002D4C)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x14
    // str r0, [sp, #0xc]
    ov12_02251D28(r7, r5, r6, r0);
    // ldr r2, [sp, #0x14]
    // tst r1, r2
    // str r0, [r5, r1]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
}




void ov10_0221D314(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EEF0(r4);
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // sub r3, #0x79
    ov10_0221F47C(r5, r4, *((u8*)(r4 + 0x000003CF)), *((u16*)(r4 + 0x000003CF)));
    // str r6, [sp]
    // sub r2, #0x7a
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x14
    // str r0, [sp, #0xc]
    ov12_02251D28(r5, r4, *((u16*)(r4 + (0x3d << 4))), r0);
    // ldr r2, [sp, #0x14]
    // tst r1, r2
    // ldr r1, [sp, #0x10]
    ov10_0221EF24(r4, 0x00140808);
}




void ov10_0221D3AC(void) {
    // str r1, [sp]
    ov10_0221EF24(r1, 1);
    // ldr r0, [sp]
    ov10_0221EEF0();
    // ldr r0, [sp]
    ov10_0221EEF0();
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    ov10_0221EEF0();
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    ov10_0221EF34(((r4 << 0x18) >> 0x18));
    // tst r0, r1
    // ldr r0, [sp]
    // add r1, r0, r6
    // str r0, [sp, #8]
    BattleSystem_GetBattlerIdPartner(r7, r0);
    // ldr r1, [sp]
    // add r1, r1, r0
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r1, r0, r6
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BattleSystem_GetParty(r7, r6);
    // str r0, [sp, #0x14]
    BattleSystem_GetPartySize(r7, r6);
    // ldr r0, [sp, #0x14]
    Party_GetMonByIndex(r5);
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #4]
    GetMonData(0xa3, 0);
    GetMonData(r4, 0xae, 0);
    GetMonData(r4, 0xae, 0);
    GetMonData(r4, 0xa0, 0);
    // ldr r1, [sp, #0x10]
    // tst r0, r1
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    ov10_0221EF24();
    BattleSystem_GetPartySize(r7, r6);
}




void ov10_0221D4A0(void) {
    // str r1, [sp]
    ov10_0221EF24(r1, 1);
    // ldr r0, [sp]
    ov10_0221EEF0();
    // ldr r0, [sp]
    ov10_0221EEF0();
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    ov10_0221EEF0();
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    ov10_0221EF34(((r4 << 0x18) >> 0x18));
    // tst r0, r1
    // ldr r0, [sp]
    // add r1, r0, r6
    // str r0, [sp, #8]
    BattleSystem_GetBattlerIdPartner(r7, r0);
    // ldr r1, [sp]
    // add r1, r1, r0
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r1, r0, r6
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BattleSystem_GetParty(r7, r6);
    // str r0, [sp, #0x14]
    BattleSystem_GetPartySize(r7, r6);
    // ldr r0, [sp, #0x14]
    Party_GetMonByIndex(r5);
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #4]
    GetMonData(0xa3, 0);
    GetMonData(r4, 0xae, 0);
    GetMonData(r4, 0xae, 0);
    GetMonData(r4, 0xa0, 0);
    // ldr r1, [sp, #0x10]
    // tst r0, r1
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    ov10_0221EF24();
    BattleSystem_GetPartySize(r7, r6);
}




void ov10_0221D594(void) {
    // str r1, [r4, r0]
    // tst r1, r2
    // str r1, [r4, r0]
    // tst r0, r1
    // str r1, [r4, r0]
    // tst r0, r1
    // str r1, [r4, r0]
    // tst r0, r1
    // str r1, [r4, r0]
    // tst r0, r1
    // str r1, [r4, r0]
}




void ov10_0221D60C(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // add r0, #0x88
    // add r2, r5, r2
    ov10_0221EF24(r5, r0, (*((u16*)(r5 + 0x00000356)) << 4));
}




void ov10_0221D644(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // add r0, #0x88
    // add r2, r5, r2
    ov10_0221EF24(r5, r0, (*((u16*)(r5 + 0x00000356)) << 4));
}




void ov10_0221D67C(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // str r0, [sp]
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // add r0, r5, r1
    // add r1, r0, r6
    // ldrsb r0, [r1, r0]
    // ldr r1, [sp]
    ov10_0221EF24(r5, (0xc0 * r0));
}




void ov10_0221D6D0(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // str r0, [sp]
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // add r0, r5, r1
    // add r1, r0, r6
    // ldrsb r0, [r1, r0]
    // ldr r1, [sp]
    ov10_0221EF24(r5, (0xc0 * r0));
}




void ov10_0221D724(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // str r0, [sp]
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // add r0, r5, r1
    // add r1, r0, r6
    // ldrsb r0, [r1, r0]
    // ldr r1, [sp]
    ov10_0221EF24(r5, (0xc0 * r0));
}




void ov10_0221D778(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // str r0, [sp]
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // add r0, r5, r1
    // add r1, r0, r6
    // ldrsb r0, [r1, r0]
    // ldr r1, [sp]
    ov10_0221EF24(r5, (0xc0 * r0));
}




void ov10_0221D7CC(void) {
    // str r0, [sp, #0x14]
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r6);
    ov10_0221EEF0(r6);
    // str r0, [sp, #0x1c]
    // add r0, #0x17
    // add r1, r6, r1
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // add r2, #0x88
    // add r3, r6, r7
    // add r3, r6, r7
    // add r5, sp, #0x20
    // add r2, #0xa
    GetBattlerVar(r6, *((u8*)(r6 + 0x000003CF)), 0, 0);
    // strb r0, [r5]
    GetBattlerAbility(r6, *((u8*)(r6 + 0x000003CF)));
    // add r1, sp, #0x20
    // str r1, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // add r4, r6, r0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // sub r3, #0x14
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    ov10_0221F084(((((*((u32*)(r4 + 0x00002DCC)) << 0xa) >> 0x1d) << 0x18) >> 0x18), r6, *((u16*)(r6 + 0x00000356)), *((u16*)(r4 + 0x00002DCC)));
    // add r2, r6, r1
    // ldr r1, [sp, #0x1c]
    ov10_0221EF24(r6, *((u32*)(*((u8*)(r6 + (0x3d << 4))) + 0x00002D8C)), *((u8*)(r6 + (0x3d << 4))));
}




void ov10_0221D8F8(void) {
    // str r0, [sp, #0x14]
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r6);
    ov10_0221EEF0(r6);
    // str r0, [sp, #0x1c]
    // add r0, #0x17
    // add r1, r6, r1
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // add r2, #0x88
    // add r3, r6, r7
    // add r3, r6, r7
    // add r5, sp, #0x20
    // add r2, #0xa
    GetBattlerVar(r6, *((u8*)(r6 + 0x000003CF)), 0, 0);
    // strb r0, [r5]
    GetBattlerAbility(r6, *((u8*)(r6 + 0x000003CF)));
    // add r1, sp, #0x20
    // str r1, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // add r4, r6, r0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // sub r3, #0x14
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    ov10_0221F084(((((*((u32*)(r4 + 0x00002DCC)) << 0xa) >> 0x1d) << 0x18) >> 0x18), r6, *((u16*)(r6 + 0x00000356)), *((u16*)(r4 + 0x00002DCC)));
    // add r2, r6, r1
    // ldr r1, [sp, #0x1c]
    ov10_0221EF24(r6, *((u32*)(*((u8*)(r6 + (0x3d << 4))) + 0x00002D8C)), *((u8*)(r6 + (0x3d << 4))));
}




void ov10_0221DA24(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r6 << 0x18) >> 0x18));
    // add r3, r5, r2
    ov10_0221EF24(r5, r7, *((u16*)(r3 + 0x00002D4C)), (r3 + 2));
    // add r0, r5, r1
    ov10_0221EF24(r5, r7, *((u16*)(r0 + 0x00002D4C)), (0 + 1));
    // add r3, r5, r0
    ov10_0221EF24(r5, r7, *((u16*)(r3 + (0x37 << 4))), (r3 + 2));
}




void ov10_0221DAE4(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r6 << 0x18) >> 0x18));
    // add r3, r5, r2
    ov10_0221EF24(r5, r7, *((u16*)(r3 + 0x00002D4C)), (r3 + 2));
    // add r0, r5, r1
    ov10_0221EF24(r5, r7, *((u16*)(r0 + 0x00002D4C)), (0 + 1));
    // add r3, r5, r0
    ov10_0221EF24(r5, r7, *((u16*)(r3 + (0x37 << 4))), (r3 + 2));
}




void ov10_0221DBA4(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r6 << 0x18) >> 0x18));
    // add r0, r5, r2
    // add r6, r5, r6
    ov10_0221EF24(r5, r7, 0x000003DE, 0x00002D4C);
    // add r0, r5, r0
    // sub r3, #0x6e
    // add r6, r5, r6
    ov10_0221EF24(r5, r7, 0x000003DE, 0x000003DE);
}




void ov10_0221DC48(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r6 << 0x18) >> 0x18));
    // add r0, r5, r2
    // add r6, r5, r6
    ov10_0221EF24(r5, r7, 0x000003DE, 0x00002D4C);
    // add r0, r5, r0
    // sub r3, #0x6e
    // add r6, r5, r6
    ov10_0221EF24(r5, r7, 0x000003DE, 0x000003DE);
}




void ov10_0221DCEC(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r6 << 0x18) >> 0x18));
    // add r1, r5, r1
    ov10_0221EF24(r5, r7);
    // add r1, r5, r1
    ov10_0221EF24(r5, r7);
}




void ov10_0221DD5C(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EEF0(r4);
    // add r2, #0x79
    // add r3, r4, r2
    ov10_0221EF24(r4, r0, *((u16*)(*((u8*)(r4 + 0x00000356)) + 0x00002DE8)), *((u8*)(r4 + 0x00000356)));
    // add r2, #0x79
    // add r3, r4, r2
    ov10_0221EF24(r4, *((u16*)(*((u8*)(r4 + 0x00000356)) + 0x00002DEC)), *((u8*)(r4 + 0x00000356)));
}




void ov10_0221DDCC(void) {
}




void ov10_0221DDE8(void) {
}




void ov10_0221DDEC(void) {
}




void ov10_0221DDF0(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EF34(r4, ((r0 << 0x18) >> 0x18));
    // add r1, r4, r1
    // str r1, [r4, r0]
}




void ov10_0221DE24(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EF34(r4, ((r0 << 0x18) >> 0x18));
    // add r2, r4, r2
    // sub r1, #0x3b
    GetItemVar(r4, *((u16*)((r0 << 1) + 0x000003CF)), 1);
    // str r0, [r4, r1]
    // add r2, r4, r1
    GetItemVar(r4, *((u16*)(r2 + 0x00002DB8)), 1);
    // str r0, [r4, r1]
}




void ov10_0221DE88(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r6 << 0x18) >> 0x18));
    // and r3, r1
    // and r1, r2
    // add r1, r5, r0
    // add r1, r5, r1
    // sub r0, #0x3b
    ov10_0221EF24(r5, r7, *((u8*)(r5 + 0x000003CF)), r0);
}




void ov10_0221DEF0(void) {
    // tst r0, r4
}




void ov10_0221DF20(void) {
    // add r1, r5, r0
    // str r1, [r5, r0]
    // add r2, r5, r0
    // sub r1, #0xa4
    // str r0, [r5, r1]
}




void ov10_0221DF88(void) {
    // str r1, [sp]
    ov10_0221EF24(r1, 1);
    // ldr r0, [sp]
    ov10_0221EEF0();
    // ldr r0, [sp]
    ov10_0221EEF0();
    // str r0, [sp, #8]
    // ldr r0, [sp]
    ov10_0221EF34(((r4 << 0x18) >> 0x18));
    BattleSystem_GetPartySize(r5, r0);
    // ldr r0, [sp]
    // add r0, r0, r6
    // str r0, [sp, #4]
    BattleSystem_GetPartyMon(r5, r6, r4);
    // ldr r2, [sp, #4]
    // str r0, [sp, #0xc]
    GetMonData(0xa3, 0);
    // ldr r0, [sp, #0xc]
    GetMonData(0xa4, 0);
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    ov10_0221EF24();
    BattleSystem_GetPartySize(r5, r6);
}




void ov10_0221E018(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    ov10_0221EF24(r1, 1);
    // ldr r0, [sp, #4]
    ov10_0221EEF0();
    // ldr r0, [sp, #4]
    ov10_0221EEF0();
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    ov10_0221EF34(((r4 << 0x18) >> 0x18));
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    BattleSystem_GetPartySize();
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    BattleSystem_GetPartyMon(r7);
    // ldr r1, [sp, #0xc]
    // add r1, #0x3a
    GetMonData(r0, 0, 0);
    // add r1, #0x42
    GetMonData(r5, r4, 0);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    ov10_0221EF24();
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    BattleSystem_GetPartySize();
}




void ov10_0221E0BC(void) {
    // str r0, [r4, r1]
}




void ov10_0221E0EC(void) {
    ov10_0221EF24(r1, 1);
    // add r2, r4, r0
    // sub r0, #0x7a
    // sub r1, #0x73
    // add r2, r2, r0
    // str r0, [r4, r1]
}




void ov10_0221E11C(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EEF0(r4);
    ov10_0221EF34(r4, ((r5 << 0x18) >> 0x18));
    GetBattlerLearnedMoveCount(r6, r4, r0);
    // add r2, r4, r1
    ov10_0221EF24(r4, r7, ((*((u32*)(r2 + 0x00002DCC)) << 0x13) >> 0x1d));
}




void ov10_0221E178(void) {
    ov10_0221EF24(r1, 1);
    // add r2, r4, r1
    // add r1, #0x8a
    // str r1, [r4, r0]
}




void ov10_0221E19C(void) {
    ov10_0221EF24(r1, 1);
    // add r2, r4, r0
    // add r2, r4, r0
    // add r0, #0x10
    // sub r1, #0x74
    // str r0, [r4, r1]
}




void ov10_0221E1CC(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    // add r2, sp, #0x24
    // ldr r0, [sp, #0x14]
    // stmia r2!, {r1}
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // add r6, sp, #0x24
    // str r6, [sp, #0x20]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // add r5, r0, r1
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // str r4, [r6]
    // str r0, [r5]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    // str r1, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // add r3, sp, #0x24
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #8]
    // str r0, [r1, r2]
    // ldr r1, [sp, #0x14]
}




void ov10_0221E290(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EF34(r4, ((r0 << 0x18) >> 0x18));
    // add r1, r4, r1
    // sub r1, r2, r0
    // str r1, [r4, r0]
}




void ov10_0221E2CC(void) {
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x1c]
    ov10_0221EF24(r1, 1);
    // ldr r0, [sp, #0x1c]
    ov10_0221EEF0();
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x1c]
    ov10_0221EEF0();
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // add r5, sp, #0x34
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x28]
    // add r2, #0xa
    GetBattlerVar(*((u8*)(r0 + 0x000003CF)), 0x000003CF, 0, 0);
    // strb r0, [r5]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x28]
    GetBattlerAbility(0xc0);
    // add r1, sp, #0x44
    // str r1, [sp]
    // ldr r1, [sp, #0x1c]
    // add r2, r1, r4
    // str r1, [sp, #4]
    // add r1, sp, #0x34
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x14
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x14]
    // sub r3, #0x6c
    // add r3, r5, r3
    // ldr r0, [sp, #0x18]
    // add r3, r3, r4
    ov10_0221EF7C(((*((u32*)(r2 + 0x00002DB8)) << 0xa) >> 0x1d), *((u16*)(r2 + 0x00002DB8)), *((u8*)(*((u16*)(r2 + 0x00002DB8)) + 0x000003CF)), 0x00002DB8);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x28]
    BattleSystem_GetPartySize();
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // add r0, r1, r0
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x28]
    BattleSystem_GetPartyMon(*((u8*)(r0 + 0x0000219C)), 0x0000219C, r7);
    GetMonData(0xa3, 0);
    GetMonData(r6, 0xae, 0);
    GetMonData(r6, 0xae, 0);
    // add r5, sp, #0x38
    // add r5, #2
    // add r1, #0x36
    GetMonData(r6, 0, 0);
    // strh r0, [r5]
    // add r4, sp, #0x34
    // add r1, #0x46
    GetMonData(r6, 0, 0);
    // strb r0, [r4]
    GetMonData(r6, 6, 0);
    GetMonData(r6, 0xa, 0);
    // add r1, sp, #0x44
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, sp, #0x34
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x30]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0x14]
    // add r3, sp, #0x38
    // ldr r0, [sp, #0x18]
    // add r3, #2
    ov10_0221EF7C(0, ((r4 << 0x10) >> 0x10), *((u8*)(((r4 << 0x10) >> 0x10) + 0x000003CF)), 0x000003CF);
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x2c]
    ov10_0221EF24();
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x28]
    BattleSystem_GetPartySize();
}




void ov10_0221E460(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221FD34(r5, r4, *((u8*)(r4 + 0x000003CF)), 1);
    ov10_0221EF24(r4, r6);
}




void ov10_0221E498(void) {
    // str r0, [sp, #0x18]
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r6);
    // str r0, [sp, #0x28]
    ov10_0221EEF0(r6);
    // str r0, [sp, #0x24]
    ov10_0221EEF0(r6);
    // str r0, [sp, #0x20]
    // add r5, sp, #0x2c
    // add r2, #0xa
    GetBattlerVar(r6, *((u8*)(r6 + 0x000003CF)), 0, 0);
    // strb r0, [r5]
    GetBattlerAbility(r6, *((u8*)(r6 + 0x000003CF)));
    // add r1, sp, #0x34
    // str r1, [sp]
    // add r1, r6, r5
    // str r1, [sp, #4]
    // add r1, sp, #0x2c
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, r6, r0
    // add r0, #0x14
    // sub r3, #0x6c
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x24]
    // add r3, r6, r3
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r3, r3, r5
    ov10_0221EF7C(((*((u32*)(*((u16*)(r1 + 0x00002DB8)) + 0x00002DB8)) << 0xa) >> 0x1d), r6, r4, 0x00002DB8);
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #0x1c]
    ov10_0221EF34(r6, ((r1 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x24]
    // add r0, #0x17
    // add r1, r6, r1
    GetBattlerAbility(r6, r0);
    // add r1, sp, #0x2c
    // str r1, [sp]
    // str r4, [sp, #4]
    // add r4, r6, r2
    // add r7, r6, r7
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // sub r3, #0x14
    // ldr r0, [sp, #0x18]
    ov10_0221F084(((r5 << 0x18) >> 0x18), r6, *((u16*)(r4 + 0x0000307C)), *((u16*)(r7 + 0x00002DCC)));
    // ldr r1, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    ov10_0221EF24(r6);
}




void ov10_0221E5B0(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EF34(r4, ((r0 << 0x18) >> 0x18));
    // str r1, [r4, r2]
    // add r0, r4, r2
    // ldrsb r5, [r0, r2]
    // add r5, r6, r5
    // str r5, [r4, r3]
}




void ov10_0221E600(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r6 << 0x18) >> 0x18));
    // add r0, r5, r2
    // add r1, r5, r1
    // add r0, r0, r4
    // add r1, r1, r4
    // ldrsb r0, [r0, r2]
    // ldrsb r1, [r1, r2]
    // sub r3, #0x73
    // sub r0, r0, r1
    // str r0, [r5, r3]
}




void ov10_0221E650(void) {
    // str r6, [sp]
    // add r2, sp, #8
    // add r3, sp, #4
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
}




void ov10_0221E6A4(void) {
    // str r6, [sp]
    // add r2, sp, #8
    // add r3, sp, #4
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
}




void ov10_0221E6F8(void) {
    // str r6, [sp]
    // add r2, sp, #8
    // add r3, sp, #4
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
}




void ov10_0221E74C(void) {
    // ldr r3, [sp, #0x10]
    // add r3, r3, r3
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _0221E764: ; jump table
    // add r6, r0, r6
    // str r6, [r2]
    // add r0, r0, r2
    // str r0, [r1]
    // add r6, r0, r6
    // str r6, [r2]
    // add r0, r0, r2
    // str r0, [r1]
    // add r6, r0, r6
    // str r6, [r2]
    // add r0, r0, r2
    // str r0, [r1]
    // add r6, r0, r6
    // str r6, [r2]
    // add r0, r0, r2
    // str r0, [r1]
    // add r6, r0, r6
    // str r6, [r2]
    // add r0, r0, r2
    // str r0, [r1]
    // add r6, r0, r6
    // str r6, [r2]
    // add r0, r0, r2
    // str r0, [r1]
    GF_AssertFail(*((u16*)(*((u16*)(*((u16*)(*((u16*)(*((u16*)(*((u32*)(r0 + 0x00002D8C)) + 0x00002D42)) + 0x00002D44)) + 0x00002D48)) + 0x00002D4A)) + 0x00002D46)), r3, (r1 * 0xc0), 0xc0);
}




void ov10_0221E848(void) {
    // str r0, [sp, #0x18]
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r6);
    // str r0, [sp, #0x20]
    // add r2, #0x88
    // add r3, r6, r7
    // add r3, r6, r7
    // str r0, [sp, #0x1c]
    // add r5, sp, #0x28
    // add r2, #0xa
    GetBattlerVar(r6, *((u8*)(r6 + 0x000003CF)), 0, 0);
    // strb r0, [r5]
    GetBattlerAbility(r6, r7);
    // add r1, sp, #0x30
    // str r1, [sp]
    // add r1, r6, r4
    // str r2, [sp, #4]
    // add r2, sp, #0x28
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x14
    // sub r3, #0x6c
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    // add r3, r6, r3
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r3, r3, r4
    ov10_0221EF7C(((*((u32*)(r1 + 0x00002DB8)) << 0xa) >> 0x1d), r6, r7, 0x00002DB8);
    // ldr r0, [sp, #0x18]
    BattleSystem_GetBattlerIdPartner(*((u8*)(r6 + 0x000003CF)));
    // ldr r0, [sp, #0x1c]
    // add r0, sp, #0x30
    // str r0, [sp, #0x24]
    // add r2, sp, #0x30
    // ldr r0, [sp, #0x24]
    // str r1, [r6, r0]
    // str r1, [r6, r0]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // str r1, [r6, r0]
}




void ov10_0221E9A4(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    GF_AssertFail();
    GF_AssertFail();
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    MaskOfFlagNo();
    // tst r0, r1
    ov10_0221EF24(r5, r6);
}




void ov10_0221E9F4(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    GF_AssertFail();
    GF_AssertFail();
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    MaskOfFlagNo();
    // tst r0, r1
    ov10_0221EF24(r5, r6);
}




void ov10_0221EA44(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EF34(r4, ((r0 << 0x18) >> 0x18));
    // add r1, r4, r1
    // str r1, [r4, r0]
}




void ov10_0221EA7C(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EF34(r4, ((r0 << 0x18) >> 0x18));
    // add r2, r4, r2
    // add r1, #0x90
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}




void ov10_0221EAC8(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EF34(r4, ((r0 << 0x18) >> 0x18));
    // add r1, r4, r1
    // str r1, [r4, r0]
}




void ov10_0221EB00(void) {
}




void ov10_0221EB18(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EF34(r4, ((r0 << 0x18) >> 0x18));
    // add r1, r4, r0
    // str r1, [r4, r0]
}




void ov10_0221EB4C(void) {
    // add r2, r4, r0
    // add r0, #0x86
    // str r0, [r4, r1]
}




void ov10_0221EB6C(void) {
    // add r2, r4, r0
    // add r0, #0x85
    // str r0, [r4, r1]
}




void ov10_0221EB8C(void) {
    // add r2, r4, r0
    // add r0, #0x82
    // str r0, [r4, r1]
}




void ov10_0221EBAC(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EF34(r4, ((r0 << 0x18) >> 0x18));
    // add r2, r4, r1
    // str r1, [r4, r0]
    // add r1, r4, r1
    // str r1, [r4, r0]
}




void ov10_0221EC08(void) {
}




void ov10_0221EC28(void) {
}




void ov10_0221EC44(void) {
    // strb r0, [r4, r1]
}




void ov10_0221EC6C(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // add r0, r5, r4
    // add r2, r5, r3
    ov10_0221EF24(r5, r0, *((u8*)(*((u8*)(r5 + (0x000003CF + 1))) + 0x00002D74)), (0xc0 * *((u8*)(r5 + (0x000003CF + 1)))));
    // add r0, r5, r4
    // add r2, r5, r3
    ov10_0221EF24(r5, *((u8*)(*((u8*)(r5 + (0x000003CF + 1))) + 0x00002D74)), (0xc0 * *((u8*)(r5 + (0x000003CF + 1)))));
    // add r0, r5, r4
    // add r2, r5, r3
    ov10_0221EF24(r5, *((u8*)(*((u8*)(r5 + (0x000003CF + 1))) + 0x00002D74)), (0xc0 * *((u8*)(r5 + (0x000003CF + 1)))));
}




void ov10_0221ED10(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    // add r2, r4, r0
    ov10_0221EF24(r4, r0, *((u8*)(r4 + (0x3d << 4))));
}




void ov10_0221ED48(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    // add r2, r4, r0
    ov10_0221EF24(r4, r0, *((u8*)(r4 + (0x3d << 4))));
}




void ov10_0221ED80(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    // and r0, r3
    // and r2, r3
    ov10_0221EF24(r4, r0, *((u8*)(r4 + (0x000003CF + 1))), 1);
}




void ov10_0221EDB4(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // add r1, r5, r1
    ov10_0221EF24(r5, r6);
}




void ov10_0221EDF8(void) {
    // str r0, [r4, r1]
}




void ov10_0221EE28(void) {
    // strb r0, [r4, r1]
    // sub r1, #0x20
    // add r0, r4, r0
    // str r3, [r0, r1]
    ov10_0221EF24(r1, r2, *((u32*)(r1 + 0x00002138)));
    GF_AssertFail(*((u8*)(r4 + (0xf3 << 2))));
}




void ov10_0221EE60(void) {
    // strb r2, [r1, r0]
    // sub r0, #0x20
    // add r2, r1, r2
    // str r2, [r1, r0]
}




void ov10_0221EE88(void) {
    // str r1, [sp]
    // mov lr, r1
    // mov r3, lr
    // ldr r3, [sp]
    // ldr r2, [sp]
    // add r4, r3, r4
    // add r5, r2, r1
    // mov ip, r1
    // add r4, r5, r2
    // mov r1, lr
    // ldr r1, [sp]
    // ldr r3, [sp]
    // add r2, r1, r2
    // mov r2, ip
    // add r2, r3, r2
    // add r2, r2, r0
    // strh r1, [r2, r0]
}




void ov10_0221EEF0(void) {
    // str r2, [r0, r1]
}




void ov10_0221EF10(void) {
    // add r0, r0, r1
}




void ov10_0221EF24(void) {
    // add r1, r3, r1
    // str r1, [r0, r2]
}




void ov10_0221EF34(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221EF44: ; jump table
    // eor r0, r1
    // eor r0, r1
}




void ov10_0221EF7C(void) {
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x44]
    // ldr r6, [sp, #0x40]
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x48]
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x4c]
    // str r2, [sp, #0x18]
    // str r0, [sp, #0x4c]
    // ldr r0, [sp, #0x50]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x54]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r2, [sp, #0x1c]
    // mov ip, r2
    // add r2, r7, r2
    // str r2, [sp, #0x20]
    // mov r1, ip
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x54]
    // ldr r0, [sp, #0x28]
    // add r1, r7, r0
    // ldr r1, [sp, #0x48]
    // mov r2, ip
    // str r1, [sp]
    // ldr r1, [sp, #0x18]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x4c]
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x50]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x44]
    ov10_0221F084(0x64, r1, 0x0000FFFF, *((u16*)((*((u16*)r2) << 4) + 0x000003DE)));
    // str r0, [r6]
    // str r0, [r6]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // ldr r2, [sp, #0x40]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #0x24]
    // ldr r0, [sp, #0x24]
}




void ov10_0221F084(void) {
    // ldr r1, [sp, #0x60]
    // str r3, [sp, #0x1c]
    // str r1, [sp, #0x60]
    // ldr r1, [sp, #0x64]
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x64]
    BattleSystem_GetFieldSide(*((u8*)(r1 + (0x3d << 4))));
    // str r0, [sp, #0x28]
    // str r4, [sp, #0x20]
    // str r0, [sp, #0x48]
    // add r1, #0x57
    // add r1, #0x57
    // add r0, #0x59
    // ldr r0, [sp, #0x68]
    // ldr r0, [sp, #0x6c]
    // ldr r1, [sp, #0x1c]
    GetItemVar(r6, (0x5a << 2), 0xb);
    // ldr r1, [sp, #0x1c]
    GetItemVar(r6, 0xc);
    // ldr r0, [sp, #0x68]
    // ldr r0, [sp, #0x6c]
    // ldr r1, [sp, #0x1c]
    GetItemVar(r6, 1);
    // sub r0, #0x7e
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221F184: ; jump table
    // ldr r0, [sp, #0x60]
    // ldr r1, [sp, #0x60]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x60]
    // str r1, [sp, #0x34]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x60]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // str r1, [sp, #0x40]
    // ldr r1, [sp, #0x30]
    // and r1, r4
    // ldr r4, [sp, #0x2c]
    // ldr r1, [sp, #0x40]
    // ldr r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // str r1, [sp, #0x24]
    // ldr r4, [sp, #0x34]
    // and r3, r1
    // and r4, r1
    // str r4, [sp, #0x44]
    // and r0, r1
    // and r0, r1
    // ldr r0, [sp, #0x30]
    // and r0, r1
    // asr r7, r0, #1
    // ldr r0, [sp, #0x2c]
    // and r0, r1
    // ldr r0, [sp, #0x44]
    _s32_div_f((0x28 * (((*((u8*)(r1 + 4)) << 3) | (((*((u8*)(*((u8*)*((u8*)((*((u16*)(r0 + 6)) << 0x10) + 1))) + 2)) | ((*((u8*)(*((u8*)*((u8*)((*((u16*)(r0 + 6)) << 0x10) + 1))) + 2)) << 0x1f) >> 0x1d)) | (*((u8*)(*((u8*)*((u8*)((*((u16*)(r0 + 6)) << 0x10) + 1))) + 2)) << 1)) | (*((u8*)(*((u8*)*((u8*)((*((u16*)(r0 + 6)) << 0x10) + 1))) + 3)) << 2))) | (((*((u8*)(*((u8*)*((u8*)((*((u16*)(r0 + 6)) << 0x10) + 1))) + 2)) | ((*((u8*)(*((u8*)*((u8*)((*((u16*)(r0 + 6)) << 0x10) + 1))) + 2)) << 0x1f) >> 0x1d)) | (*((u8*)(*((u8*)*((u8*)((*((u16*)(r0 + 6)) << 0x10) + 1))) + 2)) << 1)) | (*((u8*)(*((u8*)*((u8*)((*((u16*)(r0 + 6)) << 0x10) + 1))) + 3)) << 2)))), 0x3f, (*((u8*)(*((u8*)*((u8*)((*((u16*)(r0 + 6)) << 0x10) + 1))) + 2)) << 1), (*((u8*)(*((u8*)*((u8*)((*((u16*)(r0 + 6)) << 0x10) + 1))) + 3)) << 2));
    // ldr r1, [sp, #0x24]
    // add r4, #0x1e
    _s32_div_f((0xf * r1), 0x3f);
    // add r0, r6, r0
    // ldr r1, [sp, #0x64]
    // add r1, r6, r1
    _u32_div_f((0x19 * *((u32*)((*((u8*)(r6 + (0x3d << 4))) << 2) + 0x000021F0))), *((u32*)((*((u32*)((*((u8*)(r6 + (0x3d << 4))) << 2) + 0x000021F0)) << 2) + 0x000021F0)), 0x000021F0);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x64]
    // add r1, r6, r1
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    BattleSystem_Random(*((u8*)((0xc0 * 0x28) + 0x00002D74)), (0xc0 * 0x28));
    _s32_div_f(0xb);
    // ldr r0, [sp, #0x64]
    // add r2, r6, r2
    _s32_div_f(((r1 + 5) * *((u8*)((0xc0 * r0) + 0x00002D74))), 0xa, *((u8*)((0xc0 * r0) + 0x00002D74)));
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x64]
    // add r1, r6, r1
    _s32_div_f((0xa * *((u8*)((0xc0 * r0) + 0x00002D75))), 0x19);
    // ldr r0, [sp, #0x64]
    // add r1, r6, r1
    // sub r1, r0, r1
    _s32_div_f((0xa * *((u8*)((0xc0 * r0) + 0x00002D75))), 0x19);
    // ldr r0, [sp, #0x18]
    BattleSystem_Random();
    _s32_div_f(0x64);
    // str r0, [sp, #0x20]
    // add r3, r6, r2
    // ldr r0, [sp, #0x20]
    // mov ip, r0
    // ldr r3, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x64]
    // str r0, [sp, #0xc]
    // add r4, r6, r3
    // mov r3, ip
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r3, #0x3c
    // ldr r0, [sp, #0x18]
    CalcMoveDamage(1, r6, r5, *((u32*)(0 + (*((u16*)(ov10_0222B068 + 4)) << 2))));
    // str r0, [sp, #0x20]
    // str r0, [r6, r1]
    // ldr r0, [sp, #0x64]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #8]
    // add r0, sp, #0x48
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    ov12_02251D28(*((u8*)(r6 + (0x3d << 4))), r6, r5, r7);
    // and r1, r3
    // str r1, [r6, r2]
    // ldr r2, [sp, #0x48]
    // tst r1, r2
    // add r1, sp, #0x70
    DamageDivide((*((u8*)0x00140808) * 0), 0x64, 0x0000213C, *((u32*)(r6 + 0x0000213C)));
}




void ov10_0221F47C(void) {
    // add r0, #0x34
    // add r2, #0x34
    // add r2, #0x8a
    GetNaturalGiftType(r1, r2, 0x00000137);
    GetBattlerHeldItemEffect(r4, r6);
    // sub r0, #0x7e
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221F4D2: ; jump table
    // add r1, r4, r0
    // and r0, r6
    _s32_div_f((0xf * (((((*((u32*)(r1 + (0xc0 * r6))) << 2) >> 0x1b) << 0x1f) >> 0x1a) | ((((1 | ((((*((u32*)(r1 + (0xc0 * r6))) << 0x16) >> 0x1b) << 0x1f) >> 0x1e)) | ((((*((u32*)(r1 + (0xc0 * r6))) << 0x11) >> 0x1b) << 0x1f) >> 0x1d)) | ((((*((u32*)(r1 + (0xc0 * r6))) << 0xc) >> 0x1b) << 0x1f) >> 0x1c)) | ((((*((u32*)(r1 + (0xc0 * r6))) << 7) >> 0x1b) << 0x1f) >> 0x1b)))), 0x3f, ((((*((u32*)(r1 + (0xc0 * r6))) << 0xc) >> 0x1b) << 0x1f) >> 0x1c), ((((*((u32*)(r1 + (0xc0 * r6))) << 7) >> 0x1b) << 0x1f) >> 0x1b));
    // str r2, [sp]
    CheckAbilityActive(8, 0);
    // str r0, [sp]
    CheckAbilityActive(r7, r4, 8, 0);
    // tst r1, r0
    // tst r1, r0
    // tst r1, r0
    // tst r1, r0
    // tst r0, r1
}




void ov10_0221F5F4(void) {
    // add r5, r0, r2
    // tst r3, r4
    // add r2, #8
    // add r1, r0, r1
    // strb r2, [r1, r0]
}




void ov10_0221F62C(void) {
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    BattleSystem_GetBattleType();
    // tst r0, r1
    // ldr r0, [sp, #0x18]
    // eor r4, r1
    // add r2, r5, r0
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x18]
    // add r6, r5, r1
    // ldr r2, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    ov10_0221F47C(0x00002D4C, r5, *((u16*)(r6 + 0x00002D4C)));
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x40
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    ov12_02251D28(0, r5, r7, r0);
    // ldr r1, [sp, #0x40]
    // tst r0, r1
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    BattleSystem_GetPartySize(0);
    // ldr r0, [sp, #0x18]
    // add r0, r5, r0
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x20]
    BattleSystem_GetPartyMon();
    GetMonData(0xa3, 0);
    GetMonData(r6, 0xae, 0);
    GetMonData(r6, 0xae, 0);
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r1, #0x36
    GetMonData(r6, 0, 0);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x1c]
    ov12_02258BB4(((r0 << 0x10) >> 0x10), r5, r6);
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x40]
    GetMonData(r6, 0xa, 0);
    // str r0, [sp, #0x30]
    GetBattlerAbility(r5, r4);
    // str r0, [sp, #0x34]
    GetBattlerHeldItemEffect(r5, r4);
    // str r0, [sp, #0x38]
    GetBattlerVar(r5, r4, 0x1b, 0);
    // str r0, [sp, #0x3c]
    GetBattlerVar(r5, r4, 0x1c, 0);
    // ldr r1, [sp, #0x34]
    // ldr r2, [sp, #0x2c]
    // str r1, [sp]
    // ldr r1, [sp, #0x38]
    // ldr r3, [sp, #0x30]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x3c]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x40
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x1c]
    ov12_02252054(r5);
    // ldr r1, [sp, #0x40]
    // tst r0, r1
    // ldr r0, [sp, #0x14]
    BattleSystem_Random(2);
    _s32_div_f(3);
    // ldr r0, [sp, #0x18]
    // add r2, r5, r0
    // ldr r0, [sp, #0x20]
    // strb r0, [r2, r1]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    BattleSystem_GetPartySize((1 + 1), 0x000021A4);
    // ldr r1, [sp, #0x20]
}




void ov10_0221F7F0(void) {
    // str r2, [sp, #0x14]
    BattleSystem_GetBattleType();
    // tst r0, r4
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x74]
    // add r1, r5, r2
    // str r1, [sp, #0x44]
    // add r1, r5, r1
    // add r0, r5, r0
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x38]
    // ldr r1, [sp, #0x44]
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #0x40]
    // ldr r3, [sp, #0x40]
    ov10_0221F47C(r7, r5, (r1 * 0xc0));
    // str r0, [sp, #0x64]
    // ldr r0, [sp, #0x40]
    // add r1, r5, r0
    // ldr r0, [sp, #0x5c]
    // ldr r1, [sp, #0x3c]
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0xb8]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x40]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0xb8
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x64]
    ov12_02251D28(r7, r5);
    // ldr r1, [sp, #0xb8]
    // tst r0, r1
    // str r0, [sp, #0xb8]
    // ldr r1, [sp, #0x38]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x40]
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0xb8
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x64]
    ov12_02251D28(r7, r5);
    // ldr r1, [sp, #0xb8]
    // tst r0, r1
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x74]
    // str r0, [sp, #0x74]
    // ldr r0, [sp, #0x5c]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x6c]
    BattleSystem_GetBattleType(r7);
    // tst r0, r1
    BattleSystem_GetBattleType(r7, 0x10);
    // tst r0, r1
    // ldr r0, [sp, #0x6c]
    // str r0, [sp, #0x68]
    // ldr r1, [sp, #0x14]
    BattleSystem_GetBattlerIdPartner(r7, 8);
    // str r0, [sp, #0x68]
    // ldr r1, [sp, #0x14]
    BattleSystem_GetPartySize(r7);
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x60]
    // ldr r0, [sp, #0x6c]
    // add r0, r5, r0
    // str r0, [sp, #0x4c]
    // ldr r0, [sp, #0x68]
    // add r0, r5, r0
    // str r0, [sp, #0x48]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x30]
    BattleSystem_GetPartyMon(r7);
    // str r0, [sp, #0x58]
    GetMonData(0xa3, 0);
    // ldr r0, [sp, #0x58]
    GetMonData(0xae, 0);
    // ldr r0, [sp, #0x58]
    GetMonData(0xae, 0);
    // ldr r1, [sp, #0x4c]
    // ldr r1, [sp, #0x30]
    // ldr r1, [sp, #0x48]
    // ldr r1, [sp, #0x30]
    // ldr r1, [sp, #0x4c]
    // add r2, #8
    // ldr r1, [sp, #0x30]
    // ldr r1, [sp, #0x48]
    // add r0, #8
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x70]
    // ldr r1, [sp, #0x70]
    // ldr r0, [sp, #0x58]
    // add r1, #0x36
    GetMonData(0, *((u8*)(0x000001EE + 0x0000219C)), 0);
    // str r0, [sp, #0x28]
    // ldr r2, [sp, #0x58]
    // ldr r3, [sp, #0x28]
    ov12_02258BB4(r7, r5);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x28]
    // add r1, r5, r0
    // str r0, [sp, #0xb8]
    // ldr r1, [sp, #0x3c]
    // ldr r0, [sp, #0x58]
    GetMonData(*((u32*)(r1 + 0x00002D8C)), 0xa, 0);
    // str r0, [sp, #0x78]
    GetBattlerAbility(r5, r6);
    // str r0, [sp, #0x7c]
    GetBattlerHeldItemEffect(r5, r6);
    // str r0, [sp, #0x80]
    GetBattlerVar(r5, r6, 0x1b, 0);
    // str r0, [sp, #0x84]
    GetBattlerVar(r5, r6, 0x1c, 0);
    // ldr r1, [sp, #0x7c]
    // ldr r2, [sp, #0x20]
    // str r1, [sp]
    // ldr r1, [sp, #0x80]
    // ldr r3, [sp, #0x78]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x84]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0xb8
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x28]
    ov12_02252054(r5);
    // ldr r1, [sp, #0xb8]
    // tst r0, r1
    BattleSystem_Random(r7);
    _s32_div_f(3);
    // ldr r0, [sp, #0x14]
    // add r2, r5, r0
    // ldr r0, [sp, #0x30]
    // strb r0, [r2, r1]
    // str r0, [sp, #0xb8]
    // ldr r1, [sp, #0x38]
    // ldr r0, [sp, #0x58]
    GetMonData(*((u32*)(0x000021A4 + 0x00002D8C)), 0xa, 0);
    // str r0, [sp, #0x88]
    GetBattlerAbility(r5, r4);
    // str r0, [sp, #0x8c]
    GetBattlerHeldItemEffect(r5, r4);
    // str r0, [sp, #0x90]
    GetBattlerVar(r5, r4, 0x1b, 0);
    // str r0, [sp, #0x94]
    GetBattlerVar(r5, r4, 0x1c, 0);
    // ldr r1, [sp, #0x8c]
    // ldr r2, [sp, #0x20]
    // str r1, [sp]
    // ldr r1, [sp, #0x90]
    // ldr r3, [sp, #0x88]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x94]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0xb8
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x28]
    ov12_02252054(r5);
    // ldr r1, [sp, #0xb8]
    // tst r0, r1
    BattleSystem_Random(r7);
    _s32_div_f(3);
    // ldr r0, [sp, #0x14]
    // add r2, r5, r0
    // ldr r0, [sp, #0x30]
    // strb r0, [r2, r1]
    // ldr r0, [sp, #0x70]
    // str r0, [sp, #0x70]
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x60]
    // str r1, [sp, #0x30]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x60]
    // ldr r0, [sp, #0x6c]
    // add r0, r5, r0
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x68]
    // add r0, r5, r0
    // str r0, [sp, #0x50]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x34]
    BattleSystem_GetPartyMon(r7, ((1 + 1) + 1));
    // str r0, [sp, #0x1c]
    GetMonData(0xa3, 0);
    // ldr r0, [sp, #0x1c]
    GetMonData(0xae, 0);
    // ldr r0, [sp, #0x1c]
    GetMonData(0xae, 0);
    // ldr r1, [sp, #0x54]
    // ldr r1, [sp, #0x34]
    // ldr r1, [sp, #0x50]
    // ldr r1, [sp, #0x34]
    // ldr r1, [sp, #0x54]
    // add r2, #8
    // ldr r1, [sp, #0x34]
    // ldr r1, [sp, #0x50]
    // add r0, #8
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r1, #0x36
    GetMonData(0, *((u8*)(0x000001EE + 0x0000219C)), 0);
    // str r0, [sp, #0x2c]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x2c]
    ov12_02258BB4(r7, r5);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x2c]
    // add r1, r5, r0
    // str r0, [sp, #0xb8]
    // ldr r1, [sp, #0x3c]
    // ldr r0, [sp, #0x1c]
    GetMonData(*((u32*)(r1 + 0x00002D8C)), 0xa, 0);
    // str r0, [sp, #0x98]
    GetBattlerAbility(r5, r6);
    // str r0, [sp, #0x9c]
    GetBattlerHeldItemEffect(r5, r6);
    // str r0, [sp, #0xa0]
    GetBattlerVar(r5, r6, 0x1b, 0);
    // str r0, [sp, #0xa4]
    GetBattlerVar(r5, r6, 0x1c, 0);
    // ldr r1, [sp, #0x9c]
    // ldr r2, [sp, #0x24]
    // str r1, [sp]
    // ldr r1, [sp, #0xa0]
    // ldr r3, [sp, #0x98]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0xa4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0xb8
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x2c]
    ov12_02252054(r5);
    // ldr r0, [sp, #0xb8]
    BattleSystem_Random(r7);
    // sub r2, r2, r1
    // ror r2, r0
    // add r0, r1, r2
    // ldr r0, [sp, #0x14]
    // add r2, r5, r0
    // ldr r0, [sp, #0x34]
    // strb r0, [r2, r1]
    // str r0, [sp, #0xb8]
    // ldr r1, [sp, #0x38]
    // ldr r0, [sp, #0x1c]
    GetMonData(*((u32*)(0x000021A4 + 0x00002D8C)), 0xa, 0);
    // str r0, [sp, #0xa8]
    GetBattlerAbility(r5, r4);
    // str r0, [sp, #0xac]
    GetBattlerHeldItemEffect(r5, r4);
    // str r0, [sp, #0xb0]
    GetBattlerVar(r5, r4, 0x1b, 0);
    // str r0, [sp, #0xb4]
    GetBattlerVar(r5, r4, 0x1c, 0);
    // ldr r1, [sp, #0xac]
    // ldr r2, [sp, #0x24]
    // str r1, [sp]
    // ldr r1, [sp, #0xb0]
    // ldr r3, [sp, #0xa8]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0xb4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0xb8
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x2c]
    ov12_02252054(r5);
    // ldr r0, [sp, #0xb8]
    BattleSystem_Random(r7);
    // sub r2, r2, r1
    // ror r2, r0
    // add r0, r1, r2
    // ldr r0, [sp, #0x14]
    // add r2, r5, r0
    // ldr r0, [sp, #0x34]
    // strb r0, [r2, r1]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x34]
    // ldr r0, [sp, #0x60]
    // str r1, [sp, #0x34]
}




void ov10_0221FD34(void) {
    // str r3, [sp, #0x10]
    ov12_0223AB0C(r2);
    // eor r0, r1
    BattleSystem_GetBattlerFromBattlerType(r5, ((r0 << 0x18) >> 0x18));
    // str r0, [sp, #0x24]
    MaskOfFlagNo(((r0 << 0x18) >> 0x18));
    // tst r0, r1
    // str r0, [sp, #0x28]
    // add r7, r4, r0
    // str r0, [sp, #0x20]
    // ldr r3, [sp, #0x20]
    ov10_0221F47C(r5, r4, r6);
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x24]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x2c
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x20]
    ov12_02251D28(r5, r4, r0);
    // ldr r1, [sp, #0x2c]
    // tst r0, r1
    // ldr r0, [sp, #0x10]
    BattleSystem_Random(r5);
    _s32_div_f(0xa);
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    BattleSystem_GetBattleType(r5);
    // tst r0, r1
    // ldr r1, [sp, #0x24]
    BattleSystem_GetBattlerIdPartner(r5, 2);
    // str r0, [sp, #0x1c]
    MaskOfFlagNo(((r0 << 0x18) >> 0x18));
    // tst r0, r1
    // str r0, [sp, #0x18]
    // add r7, r4, r0
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x14]
    ov10_0221F47C(r5, r4, r6);
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x2c
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x14]
    ov12_02251D28(r5, r4, r0);
    // ldr r1, [sp, #0x2c]
    // tst r0, r1
    // ldr r0, [sp, #0x10]
    BattleSystem_Random(r5);
    _s32_div_f(0xa);
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
}




void ov10_0221FE8C(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    ov10_0221FD34(1);
    BattleSystem_Random(r6);
    _s32_div_f(3);
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // add r1, r0, r1
    // ldr r0, [sp]
    // add r2, r0, r1
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    GetBattlerAbility(0, *((u8*)(r2 + 0x000003E1)));
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #4]
    BattleSystem_GetBattleType(r6);
    // tst r0, r1
    BattleSystem_GetBattleType(r6, 0x10);
    // tst r0, r1
    // ldr r1, [sp, #4]
    BattleSystem_GetBattlerIdPartner(r6, 8);
    // ldr r1, [sp, #4]
    BattleSystem_GetPartySize(r6);
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // add r0, r0, r4
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r7, r0, r7
    // ldr r1, [sp, #4]
    BattleSystem_GetPartyMon(r6, 0);
    GetMonData(0xa3, 0);
    GetMonData(r4, 0xae, 0);
    GetMonData(r4, 0xae, 0);
    // ldr r1, [sp, #8]
    GetMonData(r4, 0xa, 0);
    // ldr r0, [sp, #0x10]
    BattleSystem_Random(r6, ((r0 << 0x18) >> 0x18));
    // tst r0, r1
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add r1, r1, r0
    // strb r5, [r1, r0]
    // ldr r0, [sp, #0xc]
}




void ov10_02220010(void) {
    // str r3, [sp, #0x1c]
    // add r3, r5, r6
    // str r2, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r1, #8
    // add r2, r5, r1
    // ldr r1, [sp, #0x18]
    BattleSystem_GetBattleType(0, (*((u8*)(*((u16*)(r3 + 0x00003064)) + 0x000003E1)) << 0x18), *((u16*)(r3 + 0x00003064)));
    // tst r0, r1
    // ldr r0, [sp, #0x14]
    BattleSystem_GetBattleType(0x10);
    // tst r0, r1
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    BattleSystem_GetBattlerIdPartner(8);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    BattleSystem_GetPartySize((r0 << 0x18));
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // add r0, r5, r4
    // str r0, [sp, #0x2c]
    // add r0, r5, r7
    // str r0, [sp, #0x28]
    // add r0, sp, #0x68
    // add r4, r5, r6
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x34]
    BattleSystem_GetPartyMon(*((u8*)(0 + 0x10)));
    GetMonData(0xa3, 0);
    GetMonData(r6, 0xae, 0);
    GetMonData(r6, 0xae, 0);
    // ldr r1, [sp, #0x2c]
    // ldr r1, [sp, #0x34]
    // ldr r1, [sp, #0x28]
    // ldr r1, [sp, #0x34]
    // ldr r1, [sp, #0x2c]
    // add r2, #8
    // ldr r1, [sp, #0x34]
    // ldr r1, [sp, #0x28]
    // add r0, #8
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0x14]
    // sub r3, #8
    ov10_0221F47C(0, r5, *((u16*)(r4 + 0x0000306C)), *((u16*)(r4 + 0x0000306C)));
    // str r0, [sp, #0x38]
    GetBattlerAbility(r5, *((u16*)(r4 + 0x0000306C)));
    // str r0, [sp, #0x3c]
    GetMonData(r6, 0xa, 0);
    // str r0, [sp, #0x40]
    GetMonData(r6, 6, 0);
    GetItemVar(r5, ((r0 << 0x10) >> 0x10), 1);
    // str r0, [sp, #0x44]
    GetMonData(r6, 0xb1, 0);
    GetMonData(r6, 0xb2, 0);
    // ldr r1, [sp, #0x40]
    // ldr r2, [sp, #0x38]
    // str r1, [sp]
    // ldr r1, [sp, #0x44]
    // ldr r3, [sp, #0x3c]
    // str r1, [sp, #4]
    // str r7, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x10]
    ov12_02252054(r5, *((u16*)(r4 + 0x00003064)));
    // ldr r1, [sp, #0x5c]
    // ldr r0, [sp, #0x1c]
    // tst r0, r1
    // add r1, #0x36
    GetMonData(r6, 0, 0);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x20]
    ov12_02258BB4(((r0 << 0x10) >> 0x10), r5, r6);
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x5c]
    GetMonData(r6, 0xa, 0);
    // str r0, [sp, #0x4c]
    GetBattlerAbility(r5, *((u16*)(r4 + 0x0000306C)));
    // str r0, [sp, #0x50]
    GetBattlerHeldItemEffect(r5, *((u16*)(r4 + 0x0000306C)));
    // str r0, [sp, #0x54]
    GetBattlerVar(r5, *((u16*)(r4 + 0x0000306C)), 0x1b, 0);
    // str r0, [sp, #0x58]
    GetBattlerVar(r5, *((u16*)(r4 + 0x0000306C)), 0x1c, 0);
    // ldr r1, [sp, #0x50]
    // ldr r2, [sp, #0x48]
    // str r1, [sp]
    // ldr r1, [sp, #0x54]
    // ldr r3, [sp, #0x4c]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x58]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x20]
    ov12_02252054(r5);
    // ldr r1, [sp, #0x5c]
    // tst r0, r1
    // ldr r0, [sp, #0x14]
    BattleSystem_Random(2);
    // ldr r1, [sp, #0x24]
    _s32_div_f();
    // ldr r0, [sp, #0x18]
    // add r2, r5, r0
    // ldr r0, [sp, #0x34]
    // strb r0, [r2, r1]
    // ldr r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #0x34]
}




void ov10_02220270(void) {
    // add r1, r5, r0
    // tst r0, r1
    GetBattlerAbility(r1, r2);
    // add r2, r5, r0
    // add r7, r5, r0
    // str r0, [sp, #4]
    BattleSystem_Random(r6, (*((u32*)(r2 + (0x00002D8C + 4))) >> 1));
    // tst r0, r1
    // add r2, r5, r4
    // strb r3, [r2, r0]
    // ldr r0, [sp, #4]
    // add r1, r5, r0
    BattleSystem_Random(r6, 1, 6);
    // tst r0, r1
    // add r2, r5, r4
    // strb r3, [r2, r0]
    // str r0, [sp]
    ov10_02220010(r6, r5, r4, 8);
    // str r0, [sp]
    ov10_02220010(r6, r5, r4, 4);
    BattleSystem_Random(r6);
    // tst r0, r1
    // add r2, r5, r4
    // strb r3, [r2, r0]
}




void ov10_0222036C(void) {
    // add r4, r1, r4
    // ldrsb r1, [r4, r2]
    // add r1, r3, r1
}




void ov10_022203A4(void) {
    // add r5, r2, r3
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // tst r4, r3
    // add r2, #0x10
    // tst r2, r4
    // str r2, [sp]
    CheckAbilityActive(2, r2);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    CheckAbilityActive(0x47, 2, r6);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    CheckAbilityActive(0x2a, 6, r6);
    // ldr r0, [sp, #8]
    GetBattlerVar(r6, 0x1b, 0);
    // ldr r0, [sp, #8]
    GetBattlerVar(r6, 0x1c, 0);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    BattleSystem_GetBattleType((r6 << 0x18));
    // tst r0, r1
    // ldr r0, [sp, #4]
    BattleSystem_GetBattleType(0x10);
    // tst r0, r1
    // ldr r0, [sp, #4]
    BattleSystem_GetBattlerIdPartner(r6);
    // ldr r0, [sp, #4]
    BattleSystem_GetPartySize((r0 << 0x18), r6);
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // add r0, r0, r4
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r7, r0, r7
    // ldr r0, [sp, #4]
    BattleSystem_GetPartyMon(r6, 0);
    GetMonData(0xa3, 0);
    GetMonData(r4, 0xae, 0);
    GetMonData(r4, 0xae, 0);
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    ov10_0221F5F4((*((u8*)(r7 + 0x000021A4)) + 1), r6);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    ov10_0221F62C(1, r6);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    ov10_0221F7F0(1, r6);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    ov10_0221FE8C(1, r6);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    ov10_02220270(1, r6);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    ov10_0221FD34(1, r6, 0);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    ov10_0222036C(0, r6);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    ov10_02220010(2, r6, 8);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    ov10_02220010(3, r6, 4);
}




void ov10_022205BC(void) {
    // str r0, [sp]
    BattleSystem_GetBattleType(r0);
    // tst r0, r6
    // ldr r0, [sp]
    BattleSystem_GetFieldSide(1, r7);
    // ldr r0, [sp]
    ov10_022203A4(r5, r7);
    // add r0, r5, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    ov12_02258800(*((u8*)(0x000021A4 + r7)), r7);
    // str r0, [sp, #0xc]
    // tst r0, r6
    // tst r0, r6
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    BattleSystem_GetBattlerIdPartner(8, r7);
    // str r0, [sp, #8]
    // ldr r0, [sp]
    BattleSystem_GetPartySize(((r0 << 0x18) >> 0x18), r7);
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r6, r5, r0
    // ldr r0, [sp, #8]
    // add r5, r5, r0
    // ldr r0, [sp]
    BattleSystem_GetPartyMon(r7, 0);
    GetMonData(0xa3, 0);
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // strb r4, [r0, r7]
    // ldr r0, [sp]
    ov10_022206B0(3, r7);
}




void ov10_022206B0(void) {
    // str r2, [sp, #0x14]
    // asr r2, r2, #1
    // str r2, [sp, #0xc]
    // add r6, r4, r2
    // ldr r2, [sp, #0x14]
    // str r2, [sp, #0x1c]
    // strb r2, [r6, r3]
    // and r2, r3
    // str r1, [sp]
    ov12_0223AB0C(0x4b, *((u32*)(r0 + 0x2c)));
    // ldr r0, [sp]
    // str r1, [sp, #8]
    // add r1, r4, r1
    // tst r0, r1
    // ldr r1, [sp]
    BattleSystem_GetParty(r5, *((u32*)((0xc0 * 0) + (0xb7 << 6))));
    Party_GetCount();
    Party_GetMonByIndex(r7, r5);
    GetMonData(0xa3, 0);
    GetMonData(r6, 0xae, 0);
    GetMonData(r6, 0xae, 0);
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    Party_GetCount(r7, 0x000001EE);
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r4, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // add r5, r4, r0
    // ldr r0, [sp, #8]
    // add r7, r4, r0
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // sub r1, r1, r0
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    GetItemVar(r4, *((u16*)(*((u8*)(r5 + 0x000003CD)) + (0xe7 << 2))), 0x26);
    GetItemVar(r4, r6, 0x36);
    // sub r0, r3, r1
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    GetItemVar(r4, r6, 0xf, *((u32*)(r7 + (0x00002D8C + 4))));
    // tst r0, r1
    MaskOfFlagNo(5, *((u32*)(r7 + 0x00002DAC)));
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    GetItemVar(r4, r6, 0x10);
    // tst r1, r0
    // tst r0, r1
    MaskOfFlagNo(4, 0x80);
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    GetItemVar(r4, r6, 0x11);
    // tst r0, r1
    MaskOfFlagNo(3, *((u32*)(r7 + 0x00002DAC)));
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    GetItemVar(r4, r6, 0x12);
    // tst r0, r1
    MaskOfFlagNo(2, *((u32*)(r7 + 0x00002DAC)));
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    GetItemVar(r4, r6, 0x13);
    // tst r0, r1
    MaskOfFlagNo(1, *((u32*)(r7 + 0x00002DAC)));
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    GetItemVar(r4, r6, 0x14);
    // tst r0, r1
    MaskOfFlagNo(0, *((u32*)(r7 + 0x00002DB0)));
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    // sub r0, r1, r0
    // bpl _02220950
    GetItemVar(r4, r6, 0x1b);
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    GetItemVar(r4, r6, 0x1c);
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    GetItemVar(r4, r6, 0x1d);
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    GetItemVar(r4, r6, 0x1e);
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    GetItemVar(r4, r6, 0x1f);
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    GetItemVar(r4, r6, 0x20);
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    GetItemVar(r4, r6, 0x16);
    // tst r0, r1
    // strb r1, [r5, r0]
    // str r0, [sp, #0x1c]
    // strb r1, [r5, r0]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp]
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // add r3, r4, r1
    // ldr r1, [sp, #4]
    // add r0, r4, r0
    // strh r6, [r0, r2]
    // add r1, r3, r1
    // sub r2, #0x3a
    // strh r0, [r1, r2]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
}



