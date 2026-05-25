/* Decompiled from asm/overlay_80_022372D8.s */
#include "global.h"

void ov80_022372D8(void) {
    // str r1, [sp]
    ov80_022379C0(r2);
    // ldr r2, [sp, #0x18]
    // add r5, r2, r1
    // add r7, r1, r0
    // add r6, r1, r0
    LCRandom((r6 << 3), ov80_0223C608);
    _s32_div_f(0xc);
    // add r0, r6, r0
    // sub r0, #0x10
    // strh r0, [r5]
    // ldr r0, [sp]
}




void ov80_02237334(void) {
    // ldr r0, [sp, #0x34]
    // str r1, [sp]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x10]
    // add r0, sp, #0x20
    // str r0, [sp, #8]
    ov80_022379C0(r3);
    // str r0, [sp, #4]
    // add r0, r1, r0
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x34]
    // strh r2, [r0, r1]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x34]
    // strh r2, [r0, r1]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x34]
    // add r0, r0, r1
    // str r0, [sp, #0xc]
    LCRandom((0xa * r6), ((0xa * r6) << 1), (0x4d << 2));
    _u32_div_f((0x4b << 2));
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r4, [sp, #0x14]
    // add r5, r1, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #4]
    // add r7, r0, r1
    // ldr r1, [sp, #0x34]
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x34]
    // ldr r0, [sp, #0xc]
    // strh r4, [r0]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    LCRandom((0x4b << 2), (0 + 1), (r2 + 2));
    // sub r2, r2, r1
    // ror r2, r0
    // add r0, r1, r2
    // ldr r1, [sp, #0x34]
    // ldr r0, [sp, #0x18]
    // strh r2, [r1, r0]
    // ldr r0, [sp]
}




void ov80_02237448(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x30]
    // ldr r6, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r7, [sp, #0xc]
    ov80_022379C0(r2);
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x28]
    // sub r5, #0x65
    // add r2, r0, r2
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x10]
    // add r0, r2, r0
    // str r0, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // sub r0, r1, r0
    LCRandom(((*((u16*)(ov80_0223C5A8 << 2)) + 1) << 0x10), *((u16*)((ov80_0223C5A8 << 2) + 2)), ov80_0223C5A8, ov80_0223C990);
    _s32_div_f(r5);
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r2, [sp, #8]
    // ldr r0, [sp]
    // mov ip, r0
    // add r5, r6, r0
    // ldr r0, [sp, #0xc]
    // mov r1, ip
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x28]
    // strh r1, [r5, r0]
    // add r3, r1, r0
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // strh r1, [r5, r0]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
}




void ov80_022375D0(void) {
    ov80_0223787C(*((u8*)(r0 + 4)));
    // str r0, [sp, #0x18]
    ov80_02237888(*((u8*)(r5 + 4)));
    // str r0, [sp, #0x10]
    SaveArray_Party_Get(*((u32*)(r5 + 0x000006FC)));
    // str r0, [sp, #0x1c]
    HealParty();
    ov80_02237850(*((u8*)(r5 + 4)));
    BattleSetup_New(0xb, r0);
    // str r1, [sp]
    // str r1, [sp, #4]
    sub_02051D18(0, *((u32*)(r6 + 8)), *((u32*)(r6 + 0x18)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // ldr r1, [sp, #0x18]
    Party_InitWithMaxSize(*((u32*)(r4 + 4)), 0x16);
    AllocMonZeroed(0xb);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // add r2, r5, r6
    // ldr r0, [sp, #0x1c]
    Party_GetMonByIndex(*((u8*)(r2 + (0x26 << 4))));
    // ldr r1, [sp, #0x20]
    CopyPokemonToPokemon();
    // ldr r1, [sp, #0x20]
    BattleSetup_AddMonToParty(r4, 0);
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    Heap_Free();
    BattleSetup_SetAllySideBattlersToPlayer(r4);
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x28]
    // add r6, #0x18
    // add r0, sp, #0x34
    ov80_02229F04((r7 << 1), *((u16*)(r5 + r1)), 0xb, 0xcc);
    Heap_Free();
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    // add r1, sp, #0x34
    ov80_0222A480(r4, 1);
    // ldr r1, [sp, #0x10]
    Party_InitWithMaxSize(*((u32*)(r4 + 8)));
    // add r1, #0xf
    // add r3, r5, r1
    // add r1, r2, r1
    // add r1, r3, r1
    sub_02030BD0(*((u8*)(r5 + 0x000006F5)), (*((u8*)(r5 + 4)) << 3), *((u8*)(r5 + 4)));
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // ldr r2, [sp, #0x24]
    ov80_02237980(r5, r7);
    *((u32*)(r4 + 0x34)) = r0;
    // add r1, #0x34
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x28]
    // add r1, r5, r3
    // ldr r0, [sp, #0x14]
    // sub r3, #0x28
    // add r0, r1, r0
    // add r6, r5, r3
    // ldr r1, [sp, #0x24]
    // add r3, r6, r3
    ov80_02237894(0xce, r4, *((u16*)(r6 + (0 + 1))), (r7 << 1));
    AllocMonZeroed(0xb);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r0, r5, r0
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    ov80_02237820(r5, r7);
    // ldr r1, [sp, #0x24]
    ov80_022378F8(r5);
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x30]
    // add r0, r1, r0
    ov80_0222A140(r6, ((r0 << 0x18) >> 0x18));
    UpdateMonAbility(r6);
    BattleSetup_AddMonToParty(r4, r6, 1);
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // str r1, [sp, #0xc]
    Heap_Free(r6, (r0 + 1));
    BattleSetup_SetAllySideBattlersToPlayer(r4);
    sub_0203769C();
    // sub r0, r1, r0
    sub_02034818(1);
    PlayerProfile_Copy(*((u32*)(r4 + (1 << 8))));
    // add r1, r5, r1
    // add r0, sp, #0x34
    ov80_02229F04(*((u16*)(((r7 + 1) << 1) + 0x18)), 0xb, 0xcc);
    Heap_Free();
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    // add r1, sp, #0x34
    ov80_0222A480(r4, 3);
    // ldr r1, [sp, #0x10]
    Party_InitWithMaxSize(*((u32*)(r4 + 0x10)));
    AllocMonZeroed(0xb);
    ov80_02237820(r5, r7);
    // ldr r1, [sp, #0x24]
    ov80_022378F8(r5);
    // add r1, r5, r0
    // ldr r0, [sp, #0x14]
    // add r0, r1, r0
    ov80_0222A140((0x29 << 4), r6, ((r0 << 0x18) >> 0x18));
    UpdateMonAbility(r6);
    BattleSetup_AddMonToParty(r4, r6, 3);
    Heap_Free(r6);
}




void ov80_02237820(void) {
    // add r1, r0, r1
    // sub r3, r4, r3
    // add r3, r4, r3
    // str r3, [r1, r2]
    // add r3, r0, r2
    CalcShininessByOtIdAndPersonality(*((u32*)(0x0003D0A9 + (0xa7 << 2))), *((u32*)((0x2a << 4) + (0x38 * r1))), (0x38 * r1), 0x0003D0A9);
}




void ov80_02237850(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237860: ; jump table
}




void ov80_0223787C(void) {
    // cmp r0, #1
    // bne _02237884
    // mov r0, #2
    // bx lr
    // mov r0, #1
    // bx lr
    // TODO: decompile
}




void ov80_02237888(void) {
    // cmp r0, #1
    // bne _02237890
    // mov r0, #2
    // bx lr
    // mov r0, #1
    // bx lr
    // TODO: decompile
}




void ov80_02237894(void) {
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x30]
    // ldr r7, [sp, #0x28]
    // str r0, [sp, #0x30]
    ov80_0223796C(r1);
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // ldr r3, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    ov80_0222A4EC(r6, *((u16*)r5), 0);
    // add r6, #0x38
}




void ov80_022378F8(void) {
    // add r1, r0, r1
    // add r1, r2, r1
    ov80_022379C8(((0x0000FECD << 0x10) >> 0x10), *((u16*)(((*((u8*)(r0 + 5)) << 0x19) >> 0x17) + 0x18)));
}




void ov80_02237920(void) {
    // ldr r1, _02237928 ; =ov80_0223D4C0
    // ldrb r0, [r1, r0]
    // bx lr
    // nop
    // _02237928: .word ov80_0223D4C0
    // TODO: decompile
}




void ov80_0223792C(void) {
    // cmp r0, #2
    // beq _02237934
    // cmp r0, #3
    // bne _02237938
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov80_0223793C(void) {
    SaveArray_Party_Get(*((u32*)(r0 + 0x000006FC)));
    Party_GetMonByIndex(*((u8*)(r4 + (0x26 << 4))));
    GetMonData(0xa1, 0);
    _s32_div_f(0xa);
}




void ov80_0223796C(void) {
}




void ov80_02237980(void) {
    // add r0, r0, r1
    // add r0, r1, r0
}




void ov80_022379C0(void) {
    // cmp r0, #0xa
    // blo _022379C6
    // mov r0, #9
    // bx lr
    // TODO: decompile
}




void ov80_022379C8(void) {
    SaveArray_Party_Get(*((u32*)(r0 + 0x000006FC)));
    Party_GetMonByIndex(*((u8*)(r5 + (0x26 << 4))));
    GetMonData(0xa1, 0);
    ov80_0223787C(*((u8*)(r5 + 4)));
    Party_GetMonByIndex(r6, *((u8*)(r5 + 0x00000261)));
    GetMonData(0xa1, 0);
    ov80_0223792C(*((u8*)(r5 + 4)));
}




void ov80_02237A40(void) {
}



