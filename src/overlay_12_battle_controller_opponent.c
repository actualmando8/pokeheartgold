/* Decompiled from asm/overlay_12_battle_controller_opponent.s */
#include "global.h"

void ov12_02258800(void) {
    // str r1, [sp, #0x18]
    BattleSystem_GetBattleContext();
    // ldr r0, [sp, #0x18]
    BattleSystem_GetBattleType(r7);
    // tst r0, r1
    BattleSystem_GetBattleType(r7, 0x10);
    // tst r0, r1
    // str r4, [sp, #0x44]
    // ldr r1, [sp, #0x18]
    BattleSystem_GetBattlerIdPartner(r7, 8);
    // str r0, [sp, #0x44]
    // ldr r2, [sp, #0x18]
    Battler_GetRandomOpposingBattlerId(r7, r5);
    // ldr r1, [sp, #0x18]
    BattleSystem_GetPartySize(r7);
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x50]
    // add r0, r5, r4
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x44]
    // add r0, r5, r0
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x40]
    // ldr r4, [sp, #0x48]
    // ldr r1, [sp, #0x18]
    BattleSystem_GetPartyMon(r7, r4);
    // str r0, [sp, #0x68]
    GetMonData(0xae, 0);
    // ldr r0, [sp, #0x68]
    GetMonData(0x000001EE, 0xa3, 0);
    MaskOfFlagNo(r4);
    // ldr r1, [sp, #0x50]
    // tst r0, r1
    // ldr r1, [sp, #0x34]
    // ldr r1, [sp, #0x30]
    // ldr r1, [sp, #0x34]
    // ldr r1, [sp, #0x30]
    GetBattlerVar(r5, r6, 0x1b, 0);
    // str r0, [sp, #0x60]
    GetBattlerVar(r5, r6, 0x1c, 0);
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0x68]
    GetMonData(((r0 << 0x18) >> 0x18), 0xb1, 0);
    // str r0, [sp, #0x58]
    // ldr r0, [sp, #0x68]
    GetMonData(((r0 << 0x18) >> 0x18), 0xb2, 0);
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x58]
    // ldr r1, [sp, #0x60]
    // ldr r2, [sp, #0x5c]
    CalculateTypeEffectiveness(((r0 << 0x18) >> 0x18));
    // str r0, [sp, #0x4c]
    // ldr r0, [sp, #0x54]
    // ldr r1, [sp, #0x60]
    // ldr r2, [sp, #0x5c]
    CalculateTypeEffectiveness(((r0 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x4c]
    // add r0, r1, r0
    // str r0, [sp, #0x4c]
    // ldr r1, [sp, #0x48]
    // ldr r0, [sp, #0x4c]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x38]
    MaskOfFlagNo(r4);
    // ldr r1, [sp, #0x50]
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x40]
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x38]
    BattleSystem_GetPartyMon(r7);
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x20]
    // add r1, #0x36
    GetMonData(r0, 0);
    // str r0, [sp, #0x3c]
    // ldr r3, [sp, #0x3c]
    ov12_02258BB4(r7, r5, r4);
    // str r0, [sp, #0x6c]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x90]
    GetMonData(r4, 0xa, 0);
    // str r0, [sp, #0x70]
    GetBattlerAbility(r5, r6);
    // str r0, [sp, #0x74]
    GetBattlerHeldItemEffect(r5, r6);
    // str r0, [sp, #0x78]
    GetBattlerVar(r5, r6, 0x1b, 0);
    // str r0, [sp, #0x7c]
    GetBattlerVar(r5, r6, 0x1c, 0);
    // ldr r1, [sp, #0x74]
    // ldr r2, [sp, #0x6c]
    // str r1, [sp]
    // ldr r1, [sp, #0x78]
    // ldr r3, [sp, #0x70]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x7c]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x90
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x3c]
    ov12_02252054(r5);
    // ldr r1, [sp, #0x90]
    // tst r0, r1
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x38]
    MaskOfFlagNo((2 + 1));
    // ldr r1, [sp, #0x50]
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x50]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x40]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x24]
    BattleSystem_GetPartyMon(r7);
    // str r0, [sp, #0x1c]
    GetMonData(0xae, 0);
    // ldr r0, [sp, #0x1c]
    GetMonData(0x000001EE, 0xa3, 0);
    // ldr r1, [sp, #0x34]
    // ldr r1, [sp, #0x24]
    // ldr r1, [sp, #0x30]
    // ldr r1, [sp, #0x24]
    // ldr r1, [sp, #0x34]
    // add r2, #8
    // ldr r1, [sp, #0x24]
    // ldr r1, [sp, #0x30]
    // add r0, #8
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x64]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x84]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x88]
    // ldr r1, [sp, #0x64]
    // ldr r0, [sp, #0x1c]
    // add r1, #0x36
    GetMonData(((((0 << 0x18) >> 0x18) << 0x18) >> 0x18), *((u8*)(r1 + 0x0000219C)), 0);
    // str r0, [sp, #0x8c]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x8c]
    ov12_02258BB4(r7, r5);
    // str r0, [sp, #0x80]
    // ldr r0, [sp, #0x8c]
    // add r1, r5, r0
    BattleSystem_GetFieldSide(r7, r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x84]
    // add r4, r5, r3
    // str r0, [sp, #0xc]
    // str r6, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r2, [sp, #0x8c]
    CalcMoveDamage(r7, r5, *((u32*)(r4 + (0x6f << 2))));
    // str r0, [sp, #0x90]
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x80]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r1, [sp, #8]
    // add r0, sp, #0x90
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x8c]
    ov12_02251D28(r7, r5);
    // str r0, [sp, #0x4c]
    // ldr r1, [sp, #0x90]
    // tst r0, r1
    // str r0, [sp, #0x4c]
    // ldr r1, [sp, #0x28]
    // ldr r0, [sp, #0x4c]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x88]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x64]
    // str r0, [sp, #0x64]
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #0x40]
    // str r1, [sp, #0x24]
    // ldr r0, [sp, #0x2c]
}




void ov12_02258BA0(void) {
}




void ov12_02258BB4(void) {
    // add r0, #0x34
    // add r2, #0x34
    // add r2, #0x8a
    GetMonData(r2, 6, 0);
    GetItemVar(r6, ((r0 << 0x10) >> 0x10), 0xc);
    GetMonData(r4, 6, 0);
    GetItemVar(r6, ((r0 << 0x10) >> 0x10), 1);
    // sub r0, #0x7e
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02258C2C: ; jump table
    GetMonData(r4, 0x4b, 0);
    GetMonData(r4, 0x4a, 0);
    GetMonData(r4, 0x49, 0);
    GetMonData(r4, 0x48, 0);
    // str r0, [sp, #4]
    GetMonData(r4, 0x46, 0);
    // str r0, [sp, #8]
    GetMonData(r4, 0x47, 0);
    // ldr r2, [sp, #4]
    // ldr r2, [sp, #8]
    // and r2, r6
    _s32_div_f((0xf * (((((((r0 << 0x1f) >> 0x1e) | ((r7 << 0x1f) << 0x1f)) | (((r7 << 0x1f) << 0x1f) >> 0x1d)) | ((r7 << 0x1f) >> 0x1c)) | ((r6 << 0x1f) >> 0x1b)) | ((r5 << 0x1f) >> 0x1a))), 0x3f, ((r7 << 0x1f) << 0x1f), (((r7 << 0x1f) << 0x1f) >> 0x1d));
    // str r2, [sp]
    CheckAbilityActive(8, 0);
    // str r0, [sp]
    CheckAbilityActive(r7, r6, 8, 0);
    // tst r1, r0
    // tst r1, r0
    // tst r1, r0
    // tst r1, r0
    // tst r0, r1
}




void ov12_02258D74(void) {
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // str r0, [r4, r1]
}




void ov12_02258DB0(void) {
    BattleSystem_GetBattleType();
    // tst r0, r1
    // sub r1, #0x8b
    // tst r0, r1
    BattleSystem_GetBattleType(r5, *((u8*)(r4 + (0x22 << 4))));
    // tst r0, r1
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r6, [sp, #0x10]
    BattleSystem_GetSpriteSystem(r5, 4, *((u8*)(r4 + 0x00000195)));
    // str r0, [sp, #0x1c]
    BattleSystem_GetPaletteData(r5);
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r0, sp, #0
    ov07_02233DB8(1);
    // add r1, #0x88
    // str r0, [r1]
    // add r0, #0x88
    ov07_022344C4(*((u32*)r4), 0x64);
    // add r0, #0x88
    ov07_022344D0(*((u32*)r4), 2);
    // add r0, #0x88
    ov07_0223449C(*((u32*)r4), 0);
    // add r4, #0x88
    ov07_022344C0(*((u32*)r4), 0);
}




void ov12_02258E54(void) {
    // add r2, #0x94
    // strb r3, [r1, r2]
    // add r2, #0x94
    // blx r2
}




void ov12_02258E7C(void) {
    // add r0, #0x28
}




void ov12_02258EB0(void) {
}




void ov12_02258EB4(void) {
    // add r1, #0x98
}




void ov12_02258EE0(void) {
}




void ov12_02258EF4(void) {
}




void ov12_02258F08(void) {
}




void ov12_02258F1C(void) {
}




void ov12_02258F30(void) {
}




void ov12_02258F44(void) {
    // ldrb r1, [r4, r1]
}




void ov12_02258F68(void) {
}




void ov12_02258F7C(void) {
}




void ov12_02258F90(void) {
}




void ov12_02258FA0(void) {
}




void ov12_02258FB4(void) {
}




void ov12_02258FC8(void) {
}




void ov12_02258FD8(void) {
}




void ov12_02259000(void) {
}




void ov12_02259014(void) {
}




void ov12_02259028(void) {
}




void ov12_0225903C(void) {
}




void ov12_02259050(void) {
}




void ov12_02259064(void) {
}




void ov12_02259078(void) {
}




void ov12_0225908C(void) {
}




void ov12_022590A0(void) {
    // ldrb r1, [r4, r1]
}




void ov12_022590D4(void) {
}




void ov12_022590E8(void) {
}




void ov12_022590FC(void) {
}




void ov12_02259110(void) {
}




void ov12_02259124(void) {
}




void ov12_02259134(void) {
}




void ov12_02259148(void) {
}




void ov12_0225915C(void) {
}




void ov12_02259170(void) {
}




void ov12_02259184(void) {
}




void ov12_02259198(void) {
}




void ov12_022591A8(void) {
}




void ov12_022591BC(void) {
}




void ov12_022591CC(void) {
}




void ov12_022591E0(void) {
}




void ov12_022591F4(void) {
    // add r6, #0x94
    // str r1, [sp, #4]
    // str r0, [sp]
    // tst r0, r1
    // str r0, [sp, #8]
    // add r0, #0x16
    // add r5, #0xe
    // str r0, [sp, #8]
    // tst r0, r1
    // add r1, #0x36
    // ldr r2, [sp, #8]
    // add r1, #0x3a
    // add r2, r2, r4
    // tst r0, r1
    // add r2, #0xc
    // add r2, #0x20
    // add r2, #0x24
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
}




void ov12_022592D0(void) {
    BattleSystem_GetBattleType();
    BattleSystem_GetBattleInput(r5);
    // and r1, r6
    BattleInput_StartMenuScrollHorizontalTask(0xFFFFF300, 0);
    // add r2, #0x94
    ov12_0226430C(r5, *((u8*)(r4 + (0x65 << 2))), *((u8*)r4));
    ov12_02259928(r4);
}




void ov12_02259328(void) {
    // add r0, #0x28
    // add r2, #0x94
}




void ov12_02259358(void) {
    // str r1, [sp, #8]
    // str r0, [sp]
    // add r4, #0x94
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r2, sp, #8
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
}




void ov12_022593D4(void) {
}




void ov12_022593E8(void) {
}




void ov12_022593FC(void) {
    // str r0, [sp, #0x10]
    // add r4, #0x94
    // tst r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x14
    GetMonSpriteCharAndPlttNarcIdsEx(*((u32*)(r1 + 8)), *((u16*)(r1 + 2)), *((u8*)(r1 + 4)), ((0 << 0x18) >> 0x18));
    Pokepic_GetTemplate(*((u32*)(r5 + 0x20)));
    // add r2, sp, #0x14
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    Pokepic_ScheduleReloadFromNarc(*((u32*)(r5 + 0x20)), r0);
    // ldr r0, [sp, #0x10]
    ov12_0223A99C();
    ov12_0223BB94(*((u8*)(r5 + (0x65 << 2))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r0, [sp, #0xc]
    sub_02014540(*((u16*)r7), *((u16*)(r7 + 2)), 5, r0);
    // ldr r0, [sp, #0x10]
    ov12_0223A99C();
    ov12_0223BBA8(*((u8*)(r5 + (0x65 << 2))), *((u16*)r7));
    // ldr r0, [sp, #0x10]
    ov12_0223A99C();
    ov12_0223BBC0(*((u8*)(r5 + (0x65 << 2))), *((u16*)(r7 + 4)));
    // str r0, [sp]
    GetMonPicHeightBySpeciesGenderForm(*((u16*)(r4 + 2)), *((u8*)(r4 + 4)), ((r6 << 0x18) >> 0x18), *((u8*)(r4 + 1)));
    // ldr r0, [sp, #0x10]
    ov12_0223A99C();
    ov12_0223BBD8(*((u8*)(r5 + (0x65 << 2))), r6);
    ov07_02234B5C(*((u8*)(r5 + 0x00000195)), 1);
    // add r2, r6, r2
    Pokepic_SetAttr(*((u32*)(r5 + 0x20)), 1, r0);
    // ldr r0, [sp, #0x10]
    ov12_0226430C(*((u8*)(r5 + (0x65 << 2))), *((u8*)r4));
    ov12_02259928(r5);
}




void ov12_022594F4(void) {
    // ldrb r1, [r4, r1]
}




void ov12_02259514(void) {
    NARC_New(7, 5);
    NARC_New(8, 5);
    BattleSystem_GetBattleInput(r5);
    // str r0, [sp, #8]
    // str r3, [sp]
    // ldr r2, [sp, #8]
    // str r3, [sp, #4]
    BattleInput_ChangeMenu(r6, r7, 0);
    // ldr r0, [sp, #8]
    BattleInput_Deadstriped_022698AC(0);
    NARC_Delete(r6);
    NARC_Delete(r7);
    BattleSystem_GetBattlerIdPartner(r5, *((u8*)(r4 + (0x65 << 2))));
    BattleSystem_GetHpBar(r5, r0);
    ov12_02265D74();
    // add r0, #0x28
    ov12_02264EB4(r4);
    // ldr r0, [sp, #8]
    BattleInput_DisableBallGauge();
    ov12_02262014(r4);
    ov12_0226430C(r5, *((u8*)(r4 + (0x65 << 2))), 0x2f);
    ov12_02259928(r4);
}




void ov12_022595B8(void) {
}




void ov12_022595CC(void) {
}




void ov12_022595E0(void) {
    // add r6, #0x94
}




void ov12_0225961C(void) {
    // add r6, #0x94
}




void ov12_02259658(void) {
    // ldrb r1, [r4, r1]
}




void ov12_02259694(void) {
    // ldrb r1, [r4, r1]
}




void ov12_022596B8(void) {
    // add r4, #0x94
    BattleSystem_GameStatIncrement(*((u16*)(r1 + 2)));
    BattleSystem_GameStatIncrement(*((u16*)(r4 + 2)));
    ov12_0226430C(r6, *((u8*)(r5 + (0x65 << 2))), *((u8*)r4));
    ov12_02259928(r5);
}




void ov12_02259700(void) {
}




void ov12_02259724(void) {
}




void ov12_02259738(void) {
}




void ov12_02259748(void) {
}




void ov12_02259758(void) {
}




void ov12_02259768(void) {
}




void ov12_0225978C(void) {
}




void ov12_022597B0(void) {
}




void ov12_022597C4(void) {
}




void ov12_022597D8(void) {
}




void ov12_022597EC(void) {
    // str r1, [sp, #4]
    // str r1, [sp, #0x10]
    // add r1, #0x94
    // str r1, [sp, #0x10]
    // ldr r2, [sp, #0x10]
    // str r0, [sp]
    // add r2, #8
    // str r7, [sp, #8]
    // ldr r0, [sp]
    // tst r0, r1
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r7, r7, r0
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
}




void ov12_022598F8(void) {
    // ldrb r1, [r4, r1]
}




void ov12_02259928(void) {
    // add r0, #0x94
    // strb r1, [r0]
}




void ov12_02259930(void) {
}




void ov12_02259944(void) {
    Heap_Alloc(5, 0x18);
    // str r4, [r1]
    *((u8*)(r0 + 0x14)) = 0;
    *((u8*)(r0 + 0x15)) = 0;
    *((u8*)(r0 + 0x16)) = 0;
    SysTask_CreateOnMainQueue(ov12_02260668, r0, 0);
}




void ov12_02259968(void) {
    // str r0, [sp, #0x24]
    ov12_0223A8D4();
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    BattleSystem_GetBattleType();
    Heap_Alloc(5, 0x30);
    *((u8*)(r0 + 0x12)) = 0;
    // tst r0, r1
    *((u8*)(r0 + 0x13)) = 2;
    // ldr r0, [sp, #0x24]
    ov12_0223A8F4(2, 1, 0);
    *((u32*)(r4 + 0xc)) = r0;
    // and r2, r1
    // ldrsh r1, [r1, r3]
    ManagedSprite_SetPositionXY(*((u32*)r0), ov07_022377F4, 0x58, (*((u8*)(r6 + 0x00000195)) * 6));
    // ldr r0, [sp, #0x24]
    *((u8*)(r4 + 0x13)) = r2;
    ov12_0223A8F4(r2);
    *((u32*)(r4 + 0xc)) = r0;
    // and r2, r1
    // ldrsh r1, [r1, r3]
    ManagedSprite_SetPositionXY(*((u32*)r0), ov07_022377F4, 0x88, (*((u8*)(r6 + 0x00000195)) * 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x5c
    GetMonSpriteCharAndPlttNarcIdsEx(*((u32*)(r5 + 4)), *((u16*)(r5 + 2)), ((*((u8*)(r5 + 1)) << 0x1e) >> 0x1e), *((u8*)(r4 + 0x13)));
    // str r0, [sp]
    GetMonPicHeightBySpeciesGenderForm(*((u16*)(r5 + 2)), ((*((u8*)(r5 + 1)) << 0x1e) >> 0x1e), *((u8*)(r4 + 0x13)), ((*((u8*)(r5 + 1)) << 0x18) >> 0x1b));
    // str r0, [sp, #0x2c]
    // add r1, sp, #0x30
    // add r1, #2
    sub_020729D8(*((u32*)(r6 + (0x69 << 2))), *((u16*)(r5 + 2)));
    // add r1, sp, #0x30
    // add r1, #1
    sub_020729FC(*((u32*)(r6 + (0x69 << 2))), *((u16*)(r5 + 2)));
    // add r1, sp, #0x30
    sub_02072A20(*((u32*)(r6 + (0x69 << 2))), *((u16*)(r5 + 2)));
    // sub r3, #0xf
    // add r1, sp, #0x30
    // add r1, #3
    NARC_ReadPokepicAnimScript(*((u32*)(r6 + (0x69 << 2))), *((u16*)(r5 + 2)), *((u8*)(r6 + (0x69 << 2))));
    // ldrsh r0, [r0, r7]
    // ldrsh r3, [r3, r7]
    // str r0, [sp]
    // ldrsh r0, [r0, r7]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
    // add r0, sp, #0x30
    // ldrsb r2, [r0, r2]
    // str r2, [sp, #0xc]
    // ldrsb r2, [r0, r2]
    // str r2, [sp, #0x10]
    // add r2, sp, #0x5c
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x30
    // add r0, #3
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    ov12_022612A4(0, 0x00000195, 1, ov07_022377F4);
    *((u32*)(r6 + 0x20)) = r0;
    *((u32*)(r4 + 8)) = *((u32*)(r6 + 0x20));
    // str r3, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 8)), 8, 8, 0);
    // ldr r0, [sp, #0x24]
    BattleSystem_GetBattleSpecial(*((u8*)(r4 + 0x13)));
    // tst r0, r1
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 1);
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0x2e, 0);
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0, 0xc0);
    // sub r2, #0x88
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 1, r7);
    *((u16*)(r4 + 0x14)) = r7;
    // ldrsh r0, [r0, r1]
    *((u16*)(r4 + 0x14)) = ov07_022377DC;
    // ldr r0, [sp, #0x24]
    // str r0, [r4]
    *((u32*)(r4 + 4)) = r6;
    *((u8*)(r4 + 0x10)) = *((u8*)r5);
    *((u8*)(r4 + 0x11)) = *((u8*)(r6 + (0x65 << 2)));
    *((u16*)(r4 + 0x16)) = *((u16*)(r5 + 2));
    // add r1, #0x2c
    // strb r2, [r1]
    *((u32*)(r4 + 0x18)) = *((u32*)(r5 + 8));
    *((u32*)(r4 + 0x1c)) = *((u8*)(r6 + ((0x65 << 2) + 1)));
    GetNatureFromPersonality(*((u32*)(r5 + 4)), *((u32*)(r5 + 8)), ((*((u8*)(r5 + 1)) << 0x18) >> 0x1b));
    *((u32*)(r4 + 0x24)) = r0;
    *((u32*)(r4 + 0x28)) = ((*((u8*)(r5 + 1)) << 0x1d) >> 0x1f);
    // ldr r0, [sp, #0x24]
    BattleSystem_GetBattleSpecial(*((u8*)(r4 + 0x13)));
    // tst r0, r1
    SysTask_CreateOnMainQueue(ov12_0225B7B8, r4, 0);
    SysTask_CreateOnMainQueue(ov12_0225B494, r4, 0);
    sub_02005B58(1);
}




void ov12_02259BA8(void) {
    BattleSystem_GetBattleType();
    Heap_Alloc(5, 0x9c);
    // tst r0, r1
    // add r0, #0x84
    // strb r1, [r0]
    // str r0, [sp]
    // add r3, #0x84
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x14
    GetMonSpriteCharAndPlttNarcIdsEx(r0, *((u16*)(r5 + 2)), ((*((u8*)(r5 + 1)) << 0x1e) >> 0x1e), *((u8*)r0));
    // str r0, [sp]
    // add r2, #0x84
    GetMonPicHeightBySpeciesGenderForm(*((u16*)(r5 + 2)), ((*((u8*)(r5 + 1)) << 0x1e) >> 0x1e), *((u8*)r4), ((*((u8*)(r5 + 1)) << 0x18) >> 0x1b));
    // add r1, #0x85
    // strb r0, [r1]
    // add r1, #0x90
    sub_020729D8(*((u32*)(r6 + (0x69 << 2))), r4, *((u16*)(r5 + 2)));
    // add r1, #0x91
    sub_020729FC(*((u32*)(r6 + (0x69 << 2))), r4, *((u16*)(r5 + 2)));
    // add r1, #0x93
    sub_02072A20(*((u32*)(r6 + (0x69 << 2))), r4, *((u16*)(r5 + 2)));
    ov12_02261284(r6);
    // str r7, [r4]
    *((u32*)(r4 + 4)) = r6;
    // add r0, #0x83
    // strb r1, [r0]
    // add r0, #0x96
    // strb r1, [r0]
    // add r0, #0x80
    // strb r1, [r0]
    // add r1, #0x81
    // strb r2, [r1]
    // add r1, #0x86
    // strh r2, [r1]
    // add r1, #0x97
    // strb r2, [r1]
    // add r0, #0x82
    // strb r1, [r0]
    // add r0, #0x88
    // str r1, [r0]
    // add r0, #0x8c
    // strb r1, [r0]
    GetNatureFromPersonality(*((u32*)(r5 + 4)), *((u32*)(r5 + 0xc)), ((*((u8*)(r5 + 1)) << 0x18) >> 0x1b));
    // add r1, #0x8d
    // strb r0, [r1]
    // add r0, #0x8e
    // strh r1, [r0]
    // add r0, #0x92
    // strb r1, [r0]
    // add r0, #0x94
    // strh r1, [r0]
    sub_02005B58(1, 0);
    BattleSystem_GetBattleType(r7);
    ov12_0223C140(r7, *((u8*)(r6 + (0x65 << 2))));
    // tst r0, r5
    // tst r0, r5
    SysTask_CreateOnMainQueue(ov12_0225B960, r4, 0);
    SysTask_CreateOnMainQueue(ov12_0225BE38, r4, 0);
    SysTask_CreateOnMainQueue(ov12_0225B960, r4, 0);
}




void ov12_02259D48(void) {
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    BattleSystem_GetBattleType();
    Heap_Alloc(5, 0x9c);
    // add r1, #0x83
    // strb r0, [r1]
    // ldr r1, [sp, #0x10]
    // tst r1, r2
    // add r0, #0x84
    // strb r1, [r0]
    // add r1, #0x84
    // strb r0, [r1]
    // str r0, [sp]
    // add r3, #0x84
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x14
    GetMonSpriteCharAndPlttNarcIdsEx(r0, *((u16*)(r4 + 2)), ((*((u8*)(r4 + 1)) << 0x1e) >> 0x1e), *((u8*)r0));
    // str r0, [sp]
    // add r2, #0x84
    GetMonPicHeightBySpeciesGenderForm(*((u16*)(r4 + 2)), ((*((u8*)(r4 + 1)) << 0x1e) >> 0x1e), *((u8*)r5), ((*((u8*)(r4 + 1)) << 0x18) >> 0x1b));
    // add r1, #0x85
    // strb r0, [r1]
    // ldr r0, [sp, #0x10]
    // add r1, #0x90
    sub_020729D8(*((u32*)(r0 + (0x69 << 2))), r5, *((u16*)(r4 + 2)));
    // ldr r0, [sp, #0x10]
    // add r1, #0x91
    sub_020729FC(*((u32*)(r0 + (0x69 << 2))), r5, *((u16*)(r4 + 2)));
    // ldr r0, [sp, #0x10]
    // add r1, #0x93
    sub_02072A20(*((u32*)(r0 + (0x69 << 2))), r5, *((u16*)(r4 + 2)));
    // ldr r0, [sp, #0x10]
    ov12_02261284();
    // ldr r0, [sp, #0xc]
    // str r0, [r5]
    // ldr r0, [sp, #0x10]
    *((u32*)(r5 + 4)) = r0;
    // add r0, #0x80
    // strb r1, [r0]
    // ldr r0, [sp, #0x10]
    // add r0, #0x81
    // strb r2, [r0]
    // add r0, #0x86
    // strh r2, [r0]
    // add r0, #0x97
    // strb r2, [r0]
    // ldr r0, [sp, #0x10]
    // add r0, #0x82
    // strb r1, [r0]
    // add r0, #0x88
    // str r1, [r0]
    // add r0, #0x8c
    // strb r1, [r0]
    GetNatureFromPersonality(*((u32*)(r4 + 4)), *((u32*)(r4 + 0xc)), ((*((u8*)(r4 + 1)) << 0x18) >> 0x1b));
    // add r1, #0x8d
    // strb r0, [r1]
    // add r0, #0x8e
    // strh r1, [r0]
    // add r0, #0x92
    // strb r1, [r0]
    // add r0, #0x94
    // strh r1, [r0]
    // add r1, #0x96
    // strb r0, [r1]
    // add r1, #0x98
    // str r2, [r1]
    // mov ip, r4
    // mov r2, ip
    // add r2, #0x50
    // add r2, #0x40
    // strh r3, [r2]
    // add r2, r4, r0
    // add r2, #0x58
    // add r2, r5, r0
    // add r2, #0x48
    // strb r3, [r2]
    // add r2, r4, r0
    // add r2, #0x5c
    // add r2, r5, r0
    // add r2, #0x4c
    // strb r3, [r2]
    // add r2, r4, r0
    // add r2, #0x60
    // add r2, r5, r0
    // add r2, #0x50
    // strb r3, [r2]
    *((u32*)(r5 + 0x54)) = *((u32*)(r4 + 0x64));
    // mov r2, ip
    // mov ip, r2
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    ov12_0223C140((0 + 1), *((u8*)((r5 + 4) + (0x65 << 2))), (0x65 << 2), *((u8*)r5));
    // add r1, #0x8c
    SysTask_CreateOnMainQueue(ov12_0225C18C, r5, 0);
    SysTask_CreateOnMainQueue(ov12_0225C6C8, r5, 0);
}




void ov12_02259F30(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    Heap_Alloc(5, 0x78);
    // ldr r0, [sp]
    // str r0, [r4]
    // ldr r0, [sp, #4]
    *((u32*)(r0 + 4)) = r0;
    *((u32*)(r0 + 8)) = *((u32*)(r0 + 0x20));
    // ldr r0, [sp, #8]
    // add r0, #0x68
    // strb r1, [r0]
    // ldr r0, [sp, #4]
    // add r0, #0x69
    // strb r2, [r0]
    // ldr r0, [sp, #4]
    // add r0, #0x6a
    // strb r1, [r0]
    // add r1, #0x6b
    // strb r0, [r1]
    // ldr r1, [sp, #8]
    // add r1, #0x6c
    // strb r2, [r1]
    // ldr r1, [sp, #8]
    // add r1, #0x6e
    // strh r2, [r1]
    // ldr r1, [sp, #8]
    *((u32*)(r0 + 0x70)) = *((u32*)(r0 + 4));
    // ldr r1, [sp, #8]
    *((u32*)(r0 + 0x74)) = *((u32*)(*((u32*)(r0 + 4)) + 0x2c));
    // ldr r1, [sp, #8]
    // mov ip, r1
    // mov r3, ip
    *((u16*)(r0 + 0x28)) = *((u16*)(r3 + 8));
    // ldr r3, [sp, #8]
    // add r6, r3, r0
    // add r3, r4, r0
    // add r3, #0x30
    // strb r5, [r3]
    // add r3, r4, r0
    // add r3, #0x34
    // strb r5, [r3]
    // add r3, r4, r0
    // add r3, #0x38
    // strb r5, [r3]
    *((u32*)(r0 + 0x3c)) = *((u32*)(*((u32*)(*((u32*)(r0 + 4)) + 0x2c)) + 0x1c));
    // mov r3, ip
    // mov ip, r3
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    ov12_0223C140((0 + 1), *((u8*)((*((u32*)(*((u32*)(r0 + 4)) + 0x2c)) + 4) + (0x65 << 2))), (0x65 << 2), (*((u32*)(*((u32*)(*((u32*)(r0 + 4)) + 0x2c)) + 0x1c)) + 2));
    SysTask_CreateOnMainQueue(ov12_0225C9BC, r4, 0);
    SysTask_CreateOnMainQueue(ov12_0225CC58, r4, 0);
}




void ov12_0225A018(void) {
    Heap_Alloc(5, 0x10);
    // str r7, [r4]
    *((u32*)(r0 + 4)) = *((u32*)(r5 + 0x20));
    *((u8*)(r0 + 8)) = *((u8*)r6);
    *((u8*)(r0 + 9)) = *((u8*)(r5 + (0x65 << 2)));
    *((u8*)(r0 + 0xa)) = *((u8*)(r5 + ((0x65 << 2) + 1)));
    *((u8*)(r0 + 0xb)) = 0;
    *((u8*)(r0 + 0xc)) = *((u8*)(r6 + 1));
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r0 + 4)), 0, 0x10, 0);
    Pokepic_SetAttr(*((u32*)(r4 + 4)), 0x2d, 1);
    SysTask_CreateOnMainQueue(ov12_0225CDB8, r4, 0);
}




void ov12_0225A07C(void) {
    Heap_Alloc(5, 0x24);
    *((u8*)(r0 + 0x12)) = 0;
    // tst r0, r1
    *((u8*)(r0 + 0x13)) = 2;
    ov12_0223A8F4(r6, 1, 0);
    *((u32*)(r4 + 8)) = r0;
    // and r1, r2
    // ldrsh r1, [r1, r2]
    ManagedSprite_SetPositionXY(*((u32*)r0), ov07_022377F4, 0x58);
    *((u8*)(r4 + 0x13)) = r2;
    ov12_0223A8F4(r6, r2);
    *((u32*)(r4 + 8)) = r0;
    // and r1, r2
    // ldrsh r1, [r1, r2]
    ManagedSprite_SetPositionXY(*((u32*)r0), ov07_022377F4, 0x88);
    BattleSystem_GetBattleType(r6);
    // tst r0, r1
    BattleSystem_GetBattleType(r6, 8);
    // tst r0, r1
    // tst r0, r1
    // str r0, [sp, #0x10]
    // and r0, r1
    // str r0, [sp, #0x10]
    ov12_02261EF0(r6, *((u8*)(r5 + (0x65 << 2))), ((*((u16*)(r7 + 2)) << 0x18) >> 0x18));
    *((u16*)(r7 + 2)) = r0;
    BattleSystem_GetBattleType(r6);
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    ov12_0223C140(r6, *((u8*)(r5 + (0x65 << 2))));
    // ldr r0, [sp, #0x20]
    // tst r0, r1
    // ldr r0, [sp, #0x20]
    // tst r0, r1
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x10]
    // ldrsh r1, [r1, r0]
    // str r1, [sp, #0x14]
    // ldrsh r0, [r1, r0]
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #8]
    ov12_02261B2C(r6, ov07_022377F4, *((u16*)(r7 + 2)), *((u8*)(r5 + 0x00000195)));
    *((u32*)(r5 + 0x18)) = r0;
    *((u32*)(r4 + 0xc)) = r0;
    BattleSystem_GetBattleType(r6);
    BattleSystem_GetBattleType(r6);
    BattleSystem_GetBattleType(r6);
    BattleSystem_GetBattleType(r6, (1 << 8));
    BattleSystem_GetBattleType(r6, (2 << 8));
    BattleSystem_GetBattleType(r6, (1 << 0xa));
    ov12_0223A8D4(r6, (1 << 0xc));
    // str r0, [sp, #0x24]
    // add r2, sp, #0x28
    sub_02070D84(*((u16*)(r7 + 2)), *((u8*)(r4 + 0x13)));
    // ldr r1, [sp, #0x28]
    // add r0, sp, #0x28
    *((u16*)(r0 + 0x18)) = r1;
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x10]
    *((u16*)(r0 + 0x1a)) = r1;
    // ldr r1, [sp, #0x30]
    // add r3, sp, #0x40
    *((u16*)(r0 + 0x1c)) = r1;
    *((u16*)(r0 + 0x1e)) = 0;
    *((u8*)(r3 + 8)) = 0;
    // ldrsh r0, [r2, r0]
    // str r1, [sp, #0x4c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    PokepicManager_CreatePokepic(*((u8*)(r5 + (0x65 << 2))), r3, ov07_022377F4);
    *((u32*)(r4 + 4)) = r0;
    *((u32*)(r4 + 4)) = 0;
    // ldr r0, [sp, #0x10]
    // ldrsh r0, [r0, r1]
    *((u16*)(r4 + 0x14)) = ov07_022377DC;
    // str r6, [r4]
    *((u8*)(r4 + 0x10)) = *((u8*)r7);
    *((u8*)(r4 + 0x11)) = *((u8*)(r5 + (0x65 << 2)));
    *((u32*)(r4 + 0x18)) = *((u8*)(r5 + ((0x65 << 2) + 1)));
    *((u32*)(r4 + 0x20)) = 0;
    BattleSystem_GetBgConfig(r6, *((u8*)(r5 + (0x65 << 2))));
    BgSetPosTextAndCommit(3, 2, 0x84);
    SysTask_CreateOnMainQueue(ov12_0225CE28, r4, 0);
}




void ov12_0225A2A0(void) {
    Heap_Alloc(5, 0x1c);
    *((u8*)(r0 + 0xa)) = 0;
    // str r6, [r4]
    *((u8*)(r0 + 8)) = *((u8*)r7);
    *((u32*)(r0 + 0x10)) = *((u8*)(r7 + 1));
    *((u8*)(r0 + 9)) = *((u8*)(r5 + (0x65 << 2)));
    *((u32*)(r0 + 4)) = r5;
    // tst r2, r3
    *((u8*)(r0 + 0xb)) = 2;
    BattleSystem_GetTrainer(r6, *((u8*)(r5 + 2)), 1, *((u8*)(r5 + ((0x65 << 2) + 1))));
    *((u8*)(r4 + 0xb)) = 0;
    ov12_02261EF0(r6, *((u8*)(r5 + (0x65 << 2))), *((u8*)(r0 + 1)));
    TrainerClassToBackpicID(0);
    *((u32*)(r4 + 0xc)) = r0;
    BattleSystem_GetBattleType(r6);
    ov12_0223C140(r6, *((u8*)(r5 + (0x65 << 2))));
    SysTask_CreateOnMainQueue(ov12_0225D644, r4, 0);
    SysTask_CreateOnMainQueue(ov12_0225D138, r4, 0);
}




void ov12_0225A334(void) {
    Heap_Alloc(5, 0x10);
    *((u8*)(r0 + 0xa)) = 0;
    // str r5, [r1]
    // add r2, #0x94
    *((u8*)(r0 + 8)) = *((u8*)r4);
    *((u8*)(r0 + 9)) = *((u8*)(r4 + (0x65 << 2)));
    *((u32*)(r0 + 4)) = r4;
    // tst r2, r3
    *((u8*)(r0 + 0xb)) = 2;
    SysTask_CreateOnMainQueue(ov12_0225D890, r0, 0, *((u8*)(r4 + ((0x65 << 2) + 1))));
}




void ov12_0225A37C(void) {
    ov12_0223A8D4();
    Heap_Alloc(5, 0x10);
    *((u8*)(r0 + 0xa)) = 0;
    // tst r1, r2
    *((u8*)(r0 + 0xb)) = 2;
    // and r1, r0
    // str r2, [sp]
    // ldrsh r2, [r2, r0]
    // str r2, [sp, #4]
    // ldrsh r0, [r2, r0]
    // str r0, [sp, #8]
    ov12_02261B2C(r7, *((u8*)(r5 + 0x00000195)), *((u16*)(r6 + 2)), *((u8*)(r5 + 0x00000195)));
    *((u32*)(r5 + 0x18)) = r0;
    *((u32*)(r4 + 4)) = r0;
    // add r0, r0, r1
    // ldrsh r0, [r2, r0]
    *((u16*)(r4 + 0xc)) = ov07_022377DC;
    // str r7, [r4]
    *((u8*)(r4 + 8)) = *((u8*)r6);
    *((u8*)(r4 + 9)) = *((u8*)(r5 + (0x00000195 - 1)));
    SysTask_CreateOnMainQueue(ov12_0225D990, r4, 0, 0x00000195);
}




void ov12_0225A414(void) {
    // add r4, #0x28
    MIi_CpuClearFast(0, r1, 1);
    *((u32*)(r4 + 0xc)) = r7;
    // add r0, #0x24
    // strb r1, [r0]
    BattleSystem_GetBattleType(r7, *((u8*)(r6 + (0x65 << 2))));
    BattleHpBar_Util_GetBarTypeFromBattlerSide(*((u8*)(r6 + 0x00000195)), r0);
    // add r1, #0x25
    // strb r0, [r1]
    // add r0, #0x4c
    // strb r1, [r0]
    // ldrsh r0, [r5, r0]
    *((u32*)(r4 + 0x28)) = 2;
    *((u32*)(r4 + 0x2c)) = *((u16*)(r5 + 4));
    // add r0, #0x48
    // strb r1, [r0]
    // add r0, #0x49
    // strb r1, [r0]
    *((u32*)(r4 + 0x30)) = 0;
    *((u32*)(r4 + 0x38)) = *((u32*)(r5 + 8));
    *((u32*)(r4 + 0x3c)) = *((u32*)(r5 + 0xc));
    // add r0, #0x26
    // strb r2, [r0]
    // add r0, #0x4a
    // strb r2, [r0]
    // add r0, #0x4b
    // strb r2, [r0]
    // add r0, #0x4d
    // strb r2, [r0]
    // add r0, #0x27
    // strb r2, [r0]
    BattleHpBar_SetEnabled(r4, 0, *((u32*)(r5 + 0x10)));
    // mvn r2, r2
    ov12_0226498C(r4, *((u32*)(r4 + 0x28)), 0);
    SysTask_CreateOnMainQueue(ov12_0225DA18, r4, (0xfa << 2));
    *((u32*)(r4 + 0x10)) = r0;
}




void ov12_0225A4DC(void) {
    // add r4, #0x28
    MIi_CpuClearFast(0, r1, 1);
    *((u32*)(r4 + 0xc)) = r6;
    // add r0, #0x24
    // strb r1, [r0]
    // add r5, #0x94
    // add r0, #0x4c
    // strb r1, [r0]
    ov12_02264FB0(r4, 1);
    SysTask_CreateOnMainQueue(ov12_0225DA8C, r4, (0xfa << 2));
    *((u32*)(r4 + 0x10)) = r0;
}




void ov12_0225A524(void) {
    // str r1, [sp]
    // str r5, [r4]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r0, #0x34
    // strb r1, [r0]
    // ldr r0, [sp]
    // add r0, #0x28
    // add r0, #0x23
    // strb r1, [r0]
    // ldrsh r0, [r7, r0]
    // add r0, #0x28
    // add r0, #0x3a
    // strb r1, [r0]
    // add r0, #0x29
    // add r0, #0x3b
    // strb r1, [r0]
    // add r0, r5, r3
    // add r0, r6, r3
    // add r2, r7, r0
    // add r1, r4, r0
    // add r1, r4, r0
    // add r2, r7, r3
    // add r0, r4, r3
    // add r0, #0x2c
    // strb r1, [r0]
    // add r0, r4, r3
    // add r2, #0x20
    // add r0, #0x30
    // strb r1, [r0]
    // ldr r0, [sp]
}




void ov12_0225A604(void) {
    // str r1, [sp]
    // add r0, #0x20
    // strb r4, [r0]
    // ldr r0, [sp]
    // str r5, [r3]
    // add r0, #0x94
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r0, #0x28
    // add r2, r7, r4
    // add r1, r3, r4
    // ldr r0, [sp]
}




void ov12_0225A674(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // str r0, [r6]
    // add r0, #0x94
    // add r0, #0x28
    // add r0, #0x32
    // strb r1, [r0]
    // ldr r0, [sp]
    // add r1, sp, #4
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r5, #8
    // add r1, #8
}




void ov12_0225A700(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // ldr r3, [sp, #4]
    // str r0, [r1]
    // str r5, [r4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r7, r0, r6
    // add r1, r1, r6
    // add r0, r3, r2
    // add r0, r5, r2
    // add r7, #0x20
    // add r0, r4, r6
    // add r0, #0x30
    // strb r1, [r0]
    // ldr r0, [sp]
}




void ov12_0225A7AC(void) {
    // str r1, [sp]
    // str r4, [r2]
    // add r0, #0x24
    // add r0, r7, r3
    // add r0, r2, r3
    // add r0, r5, r4
    // add r0, r6, r4
    // ldr r0, [sp]
}




void ov12_0225A818(void) {
    // str r6, [r1]
    // add r0, #0x28
}




void ov12_0225A85C(void) {
    ov12_0223A934();
    // str r0, [sp]
    Heap_Alloc(5, 8);
    // str r6, [r4]
    *((u8*)(r0 + 4)) = *((u8*)r5);
    *((u8*)(r0 + 5)) = *((u8*)(r7 + (0x65 << 2)));
    // add r2, r2, r0
    // add r0, sp, #4
    *((u16*)((*((u16*)(r5 + 2)) << 1) + 2)) = *((u16*)(r5 + 2));
    *((u8*)((*((u16*)(r5 + 2)) << 1) + 1)) = 2;
    // str r0, [sp, #8]
    BattleSystem_GetTextFrameDelay(r6, *((u8*)(r7 + (0x65 << 2))), 2);
    // ldr r1, [sp]
    // add r2, sp, #4
    BattleSystem_PrintBattleMessage(r6, r0);
    *((u8*)(r4 + 6)) = r0;
    SysTask_CreateOnMainQueue(ov12_022605D0, r4, 0);
}




void ov12_0225A8C4(void) {
    BattleSystem_GetMessageLoader();
    // str r0, [sp]
    Heap_Alloc(5, 8);
    // str r5, [r4]
    // add r0, #0x94
    *((u8*)(r0 + 4)) = *((u8*)r6);
    *((u8*)(r0 + 5)) = *((u8*)(r6 + (0x65 << 2)));
    BattleSystem_GetTextFrameDelay(r5);
    // ldr r1, [sp]
    BattleSystem_PrintBattleMessage(r5, r7, r0);
    *((u8*)(r4 + 6)) = r0;
    SysTask_CreateOnMainQueue(ov12_022605D0, r4, 0);
}




void ov12_0225A914(void) {
    Heap_Alloc(5, 0x70);
    // add r0, #0x6a
    // strb r1, [r0]
    // str r7, [r6]
    *((u32*)(r0 + 4)) = r5;
    // add r0, #0x94
    // add r0, #0x68
    // strb r1, [r0]
    // add r0, #0x69
    // strb r1, [r0]
    ov12_0223A8DC(r7, *((u8*)(r5 + (0x65 << 2))));
    *((u32*)(r6 + 0xc)) = r0;
    // add r3, #0x10
    // ldmia r7!, {r0, r1}
    // stmia r3!, {r0, r1}
    *((u32*)(r6 + 8)) = *((u32*)(r5 + 0x20));
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // add r1, #0x6c
    // str r0, [sp]
    // add r0, #0x6b
    ov12_02261D30(r6, r6, *((u32*)(r4 + 0x4c)), *((u32*)(r4 + 0x50)));
    SysTask_CreateOnMainQueue(ov12_0225FD14, r6, 0);
}




void ov12_0225A9B0(void) {
    Heap_Alloc(5, 0xc);
    *((u8*)(r0 + 9)) = 0;
    // str r5, [r1]
    *((u32*)(r0 + 4)) = *((u32*)(r4 + 0x20));
    *((u8*)(r0 + 8)) = *((u8*)(r4 + (0x65 << 2)));
    *((u8*)(r0 + 0xa)) = 0;
    SysTask_CreateOnMainQueue(ov12_0225FF80, r0, 0);
}




void ov12_0225A9E0(void) {
    GF_AssertFail(*((u32*)(r1 + 0x2c)));
    // add r4, #0x28
    MI_CpuFill8(r6, 0, 1);
    *((u32*)(r4 + 0xc)) = r7;
    // add r0, #0x4c
    // strb r1, [r0]
    // add r0, #0x24
    // strb r1, [r0]
    BattleSystem_GetBattleType(r7, *((u8*)(r6 + (0x65 << 2))));
    BattleHpBar_Util_GetBarTypeFromBattlerSide(*((u8*)(r6 + 0x00000195)), r0);
    // add r1, #0x25
    // strb r0, [r1]
    // ldrsh r0, [r5, r0]
    *((u32*)(r4 + 0x28)) = 2;
    *((u32*)(r4 + 0x2c)) = *((u16*)(r5 + 4));
    *((u32*)(r4 + 0x30)) = *((u32*)(r5 + 8));
    // add r0, #0x48
    // strb r1, [r0]
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x30)) = 0;
    SysTask_CreateOnMainQueue(ov12_0225FFDC, r4, (0xfa << 2));
    *((u32*)(r4 + 0x10)) = r0;
}




void ov12_0225AA6C(void) {
    GF_AssertFail(*((u32*)(r1 + 0x2c)));
    // add r4, #0x28
    MI_CpuFill8(r6, 0, 1);
    *((u32*)(r4 + 0xc)) = r7;
    // add r0, #0x4c
    // strb r1, [r0]
    // add r1, #0x24
    // strb r2, [r1]
    *((u32*)(r4 + 0x38)) = *((u32*)(r5 + 4));
    *((u32*)(r4 + 0x3c)) = *((u32*)(r5 + 0xc));
    // sub r1, r2, r1
    *((u32*)(r4 + 0x40)) = *((u32*)(r4 + 0x38));
    SysTask_CreateOnMainQueue(ov12_02260030, r4, (0xfa << 2));
    *((u32*)(r4 + 0x10)) = r0;
    // add r1, #0x24
    // add r4, #0x4c
    ov12_0226430C(*((u32*)(r4 + 0xc)), *((u8*)r4), *((u8*)r4));
}




void ov12_0225AAE0(void) {
    // str r2, [sp]
    Heap_Alloc(5, 0x74);
    // tst r0, r2
    // add r0, #0x67
    // strb r2, [r0]
    // add r2, #0x66
    // strb r0, [r2]
    // str r5, [r1]
    // ldr r2, [sp]
    *((u32*)(r0 + 4)) = r4;
    // add r2, #0x64
    // strb r3, [r2]
    // add r2, #0x65
    // strb r3, [r2]
    *((u32*)(r0 + 8)) = *((u32*)(r4 + 0x20));
    // ldr r2, [sp]
    // add r2, #0x68
    // strh r3, [r2]
    // ldr r2, [sp]
    // add r2, #0x6a
    // strb r3, [r2]
    // ldr r2, [sp]
    // add r2, #0x6b
    // strb r3, [r2]
    // ldr r2, [sp]
    *((u32*)(r0 + 0x6c)) = *((u32*)(r0 + 4));
    // ldr r2, [sp]
    // add r2, #0x70
    // strh r3, [r2]
    // ldr r2, [sp]
    // add r2, #0x72
    // strh r3, [r2]
    // ldr r2, [sp]
    // mov ip, r2
    // mov r4, ip
    *((u16*)(r0 + 0x24)) = *((u16*)(r4 + 0xc));
    // ldr r4, [sp]
    // add r6, r4, r0
    // add r4, r1, r0
    // add r4, #0x2c
    // strb r5, [r4]
    // add r4, r1, r0
    // add r4, #0x30
    // strb r5, [r4]
    // add r4, r1, r0
    // add r4, #0x34
    // strb r5, [r4]
    *((u32*)(r0 + 0x38)) = *((u32*)(r0 + 0x20));
    // mov r4, ip
    // mov ip, r4
    SysTask_CreateOnMainQueue(ov12_022600F0, r0, 0, (r0 + 4));
}




void ov12_0225ABB8(void) {
    // tst r2, r4
    // sub r4, #0x76
    ov12_0226430C(*((u8*)(r1 + (0x65 << 2))), *((u8*)r2));
    sub_0200602C(*((u16*)(r5 + 2)), r4);
}




void ov12_0225ABE8(void) {
    Heap_Alloc(5, 8);
    *((u8*)(r0 + 6)) = 0;
    // str r5, [r1]
    // add r0, #0x94
    *((u8*)(r0 + 4)) = *((u8*)r4);
    *((u8*)(r0 + 5)) = *((u8*)(r4 + (0x65 << 2)));
    SysTask_CreateOnMainQueue(ov12_0226037C, r0, 0);
}




void ov12_0225AC1C(void) {
    // str r2, [sp]
    Heap_Alloc(5, 0x68);
    // str r5, [r1]
    // ldr r0, [sp]
    *((u32*)(r0 + 4)) = r4;
    // add r0, #0x60
    // strb r2, [r0]
    // add r0, #0x61
    // strb r2, [r0]
    // add r2, #0x62
    // strb r0, [r2]
    // ldr r2, [sp]
    // add r2, #0x63
    // strb r3, [r2]
    // ldr r2, [sp]
    *((u32*)(r0 + 0x64)) = *((u8*)(r0 + 2));
    // ldr r2, [sp]
    // mov ip, r2
    // mov r4, ip
    *((u16*)(r0 + 0x20)) = *((u16*)(r4 + 4));
    // ldr r4, [sp]
    // add r6, r4, r0
    // add r4, r1, r0
    // add r4, #0x28
    // strb r5, [r4]
    // add r4, r1, r0
    // add r4, #0x2c
    // strb r5, [r4]
    // add r4, r1, r0
    // add r4, #0x30
    // strb r5, [r4]
    *((u32*)(r0 + 0x34)) = *((u32*)(*((u8*)(r0 + 2)) + 0x18));
    // mov r4, ip
    // mov ip, r4
    SysTask_CreateOnMainQueue(ov12_02260418, r0, 0, (r0 + 4));
}




void ov12_0225ACB0(void) {
    // add r0, #0x72
    // strb r1, [r0]
    // add r0, #0x28
}




void ov12_0225ACE8(void) {
    BattleSystem_GetTrainerIndex(*((u8*)(r1 + (0x65 << 2))));
    // str r0, [sp, #4]
    Heap_Alloc(5, 8);
    // str r6, [r4]
    *((u8*)(r0 + 4)) = *((u8*)r7);
    *((u8*)(r0 + 5)) = *((u8*)(r5 + (0x65 << 2)));
    BattleSystem_GetTextFrameDelay(r6);
    // str r0, [sp]
    // ldr r1, [sp, #4]
    BattleSystem_PrintTrainerMessage(r6, *((u8*)(r5 + (0x65 << 2))), *((u8*)(r7 + 1)));
    *((u8*)(r4 + 6)) = r0;
    SysTask_CreateOnMainQueue(ov12_022605D0, r4, 0);
}




void ov12_0225AD44(void) {
    // add r3, sp, #4
    ov12_02261390();
    BattleSystem_GetMessageLoader(r5);
    // str r0, [sp]
    Heap_Alloc(5, 8);
    // str r5, [r4]
    *((u8*)(r0 + 4)) = *((u8*)r7);
    *((u8*)(r0 + 5)) = *((u8*)(r6 + (0x65 << 2)));
    BattleSystem_GetTextFrameDelay(r5);
    // ldr r1, [sp]
    // add r2, sp, #4
    BattleSystem_PrintBattleMessage(r5, r0);
    *((u8*)(r4 + 6)) = r0;
    SysTask_CreateOnMainQueue(ov12_022605D0, r4, 0);
}




void ov12_0225AD9C(void) {
    // add r3, sp, #4
    ov12_02261464();
    BattleSystem_GetMessageLoader(r5);
    // str r0, [sp]
    Heap_Alloc(5, 8);
    // str r5, [r4]
    *((u8*)(r0 + 4)) = *((u8*)r7);
    *((u8*)(r0 + 5)) = *((u8*)(r6 + (0x65 << 2)));
    BattleSystem_GetTextFrameDelay(r5);
    // ldr r1, [sp]
    // add r2, sp, #4
    BattleSystem_PrintBattleMessage(r5, r0);
    *((u8*)(r4 + 6)) = r0;
    SysTask_CreateOnMainQueue(ov12_022605D0, r4, 0);
}




void ov12_0225ADF4(void) {
    // add r2, sp, #0
    ov12_02261544();
    BattleSystem_GetMessageLoader(r5);
    Heap_Alloc(5, 8);
    // str r5, [r4]
    *((u8*)(r0 + 4)) = 0x22;
    *((u8*)(r0 + 5)) = *((u8*)(r6 + (0x65 << 2)));
    BattleSystem_GetTextFrameDelay(r5);
    // add r2, sp, #0
    BattleSystem_PrintBattleMessage(r5, r7, r0);
    *((u8*)(r4 + 6)) = r0;
    SysTask_CreateOnMainQueue(ov12_022605D0, r4, 0);
}




void ov12_0225AE48(void) {
    // add r3, sp, #4
    ov12_022615F0();
    BattleSystem_GetMessageLoader(r5);
    // str r0, [sp]
    Heap_Alloc(5, 8);
    // str r5, [r4]
    *((u8*)(r0 + 4)) = *((u8*)r7);
    *((u8*)(r0 + 5)) = *((u8*)(r6 + (0x65 << 2)));
    BattleSystem_GetTextFrameDelay(r5);
    // ldr r1, [sp]
    // add r2, sp, #4
    BattleSystem_PrintBattleMessage(r5, r0);
    *((u8*)(r4 + 6)) = r0;
    SysTask_CreateOnMainQueue(ov12_022605D0, r4, 0);
}




void ov12_0225AEA0(void) {
    Heap_Alloc(5, 0xc);
    // str r5, [r1]
    // add r0, #0x94
    *((u8*)(r0 + 8)) = *((u8*)r4);
    // add r4, #0x28
    *((u8*)(r0 + 9)) = *((u8*)(r4 + (0x65 << 2)));
    *((u8*)(r0 + 0xa)) = 0;
    *((u32*)(r0 + 4)) = r4;
    SysTask_CreateOnMainQueue(ov12_02260584, r0, 0);
}




void ov12_0225AED8(void) {
    BattleSystem_GetMessageLoader(0x00000196, *((u8*)(r1 + 0x00000196)));
    // str r0, [sp]
    Heap_Alloc(5, 0xc);
    // str r6, [r7]
    *((u8*)(r0 + 4)) = *((u8*)r4);
    *((u8*)(r0 + 5)) = *((u8*)(r5 + (0x65 << 2)));
    *((u8*)(r0 + 7)) = 0;
    BattleSystem_GetTextFrameDelay(r6);
    // ldr r1, [sp]
    BattleSystem_PrintBattleMessage(r6, (r4 + 4), r0);
    *((u8*)(r7 + 6)) = r0;
    SysTask_CreateOnMainQueue(ov12_02260614, r7, 0);
    ov12_02263A00(*((u8*)(r5 + (r1 - 2))));
    ov12_0226430C(r6, *((u8*)(r5 + (0x65 << 2))), *((u8*)r4));
    BattleSystem_GetBattleType();
    // tst r0, r1
    ov12_02263A00(r6, *((u8*)(r5 + (0x65 << 2))));
    ov12_0226430C(r6, *((u8*)(r5 + (0x65 << 2))), *((u8*)r4));
}




void ov12_0225AF74(void) {
    // add r4, #0x28
    MIi_CpuClearFast(0, r1, 1);
    *((u32*)(r4 + 0xc)) = r7;
    // add r0, #0x24
    // strb r1, [r0]
    BattleSystem_GetBattleType(r7, *((u8*)(r6 + (0x65 << 2))));
    BattleHpBar_Util_GetBarTypeFromBattlerSide(*((u8*)(r6 + 0x00000195)), r0);
    // add r1, #0x25
    // strb r0, [r1]
    // add r0, #0x4c
    // strb r1, [r0]
    // ldrsh r0, [r5, r0]
    *((u32*)(r4 + 0x28)) = 2;
    *((u32*)(r4 + 0x2c)) = *((u16*)(r5 + 4));
    // add r0, #0x48
    // strb r1, [r0]
    // add r0, #0x49
    // strb r1, [r0]
    *((u32*)(r4 + 0x30)) = 0;
    // sub r2, #0x21
    *((u32*)(r4 + 0x38)) = *((u32*)(r5 + 8));
    *((u32*)(r4 + 0x3c)) = *((u32*)(r5 + 0xc));
    // add r0, #0x26
    // strb r1, [r0]
    // add r0, #0x4a
    // strb r1, [r0]
    // add r0, #0x4b
    // strb r1, [r0]
    // add r0, #0x27
    // strb r1, [r0]
    ov12_0226498C(r4, *((u32*)(r4 + 0x28)), 0);
    // add r1, #0x24
    // add r4, #0x4c
    ov12_0226430C(*((u32*)(r4 + 0xc)), *((u8*)r4), *((u8*)r4));
}




void ov12_0225B028(void) {
    Heap_Alloc(5, 0x10);
    *((u8*)(r0 + 0xa)) = 0;
    // str r5, [r1]
    *((u8*)(r0 + 8)) = *((u8*)r4);
    *((u8*)(r0 + 9)) = *((u8*)(r6 + (0x65 << 2)));
    *((u16*)(r0 + 0xc)) = *((u16*)(r4 + 2));
    *((u8*)(r0 + 0xe)) = *((u8*)(r4 + 1));
    SysTask_CreateOnMainQueue(ov12_022609F8, r0, 0);
}




void ov12_0225B060(void) {
    Heap_Alloc(5, 0x10);
    *((u8*)(r0 + 0xa)) = 0;
    // str r6, [r1]
    *((u32*)(r0 + 4)) = *((u32*)(r5 + 0x20));
    *((u8*)(r0 + 8)) = *((u8*)r4);
    *((u8*)(r0 + 9)) = *((u8*)(r5 + (0x65 << 2)));
    *((u8*)(r0 + 0xb)) = *((u8*)(r4 + 1));
    *((u8*)(r0 + 0xc)) = 0;
    *((u8*)(r0 + 0xd)) = *((u8*)(r4 + 2));
    SysTask_CreateOnMainQueue(ov12_02260B30, r0, 0);
}




void ov12_0225B0A0(void) {
    Heap_Alloc(5, 0x10);
    *((u8*)(r0 + 7)) = 0;
    // str r6, [r1]
    *((u8*)(r0 + 4)) = *((u8*)r4);
    *((u8*)(r0 + 5)) = *((u8*)(r5 + (0x65 << 2)));
    *((u8*)(r0 + 6)) = *((u8*)(r5 + ((0x65 << 2) + 1)));
    // add r2, r4, r0
    // add r2, r1, r0
    *((u8*)(*((u8*)(r5 + ((0x65 << 2) + 1))) + 8)) = *((u8*)(*((u8*)(r5 + ((0x65 << 2) + 1))) + 2));
    *((u8*)(r0 + 0xe)) = 0;
    SysTask_CreateOnMainQueue(ov12_02260BA0, r0, 0, *((u8*)(*((u8*)(r5 + ((0x65 << 2) + 1))) + 2)));
}




void ov12_0225B0E8(void) {
    Heap_Alloc(5, 0x10);
    *((u8*)(r0 + 7)) = 0;
    // str r5, [r1]
    *((u8*)(r0 + 4)) = *((u8*)r6);
    *((u8*)(r0 + 5)) = *((u8*)(r4 + (0x65 << 2)));
    *((u8*)(r0 + 6)) = *((u8*)(r4 + ((0x65 << 2) + 1)));
    *((u8*)(r0 + 0xe)) = 0;
    SysTask_CreateOnMainQueue(ov12_02260C58, r0, 0, *((u8*)(r4 + (0x65 << 2))));
}




void ov12_0225B120(void) {
    Heap_Alloc(5, 0x10);
    *((u8*)(r0 + 7)) = 0;
    // str r6, [r1]
    *((u8*)(r0 + 4)) = *((u8*)r4);
    *((u8*)(r0 + 5)) = *((u8*)(r5 + (0x65 << 2)));
    *((u8*)(r0 + 6)) = *((u8*)(r5 + ((0x65 << 2) + 1)));
    // add r2, r4, r0
    // add r2, r1, r0
    *((u8*)(*((u8*)(r5 + ((0x65 << 2) + 1))) + 8)) = *((u8*)(*((u8*)(r5 + ((0x65 << 2) + 1))) + 2));
    *((u8*)(r0 + 0xe)) = 1;
    SysTask_CreateOnMainQueue(ov12_02260BA0, r0, 0, *((u8*)(*((u8*)(r5 + ((0x65 << 2) + 1))) + 2)));
}




void ov12_0225B16C(void) {
    Heap_Alloc(5, 0x10);
    *((u8*)(r0 + 7)) = 0;
    // str r5, [r1]
    *((u8*)(r0 + 4)) = *((u8*)r6);
    *((u8*)(r0 + 5)) = *((u8*)(r4 + (0x65 << 2)));
    *((u8*)(r0 + 6)) = *((u8*)(r4 + ((0x65 << 2) + 1)));
    *((u8*)(r0 + 0xe)) = 1;
    SysTask_CreateOnMainQueue(ov12_02260C58, r0, 0, *((u8*)(r4 + (0x65 << 2))));
}




void ov12_0225B1A8(void) {
    BattleSystem_GetMessageLoader(*((u8*)(r1 + 0x00000196)));
    // add r0, sp, #0
    *((u16*)(r0 + 2)) = 0x0000039B;
    *((u8*)(r0 + 1)) = 0;
    // add r2, sp, #0
    BattleSystem_PrintBattleMessage(r5, r0, 0x0000039B, 0);
    BattleSystem_GetWindow(r5, 0);
    WaitingIcon_New(1);
    ov12_0223BB80(r5, r0);
    ov12_0226430C(r5, *((u8*)(r4 + (0x65 << 2))), 0x37);
}




void ov12_0225B200(void) {
    // add r2, sp, #0
    // add r0, sp, #0
}




void ov12_0225B234(void) {
    Heap_Alloc(5, 0x10);
    *((u8*)(r0 + 0xe)) = 0;
    // str r5, [r1]
    *((u32*)(r0 + 4)) = r4;
    // add r0, #0x94
    *((u8*)(r0 + 0xc)) = *((u8*)r4);
    *((u8*)(r0 + 0xd)) = *((u8*)(r4 + (0x65 << 2)));
    *((u32*)(r0 + 8)) = *((u32*)(r4 + 0x20));
    SysTask_CreateOnMainQueue(ov12_02260CDC, r0, 0);
}




void ov12_0225B26C(void) {
    Heap_Alloc(5, 0x10);
    *((u8*)(r0 + 0xe)) = 0;
    // str r5, [r1]
    *((u32*)(r0 + 4)) = r4;
    // add r0, #0x94
    *((u8*)(r0 + 0xc)) = *((u8*)r4);
    *((u8*)(r0 + 0xd)) = *((u8*)(r4 + (0x65 << 2)));
    *((u32*)(r0 + 8)) = *((u32*)(r4 + 0x20));
    SysTask_CreateOnMainQueue(ov12_02260D28, r0, 0);
}




void ov12_0225B2A4(void) {
    // add r2, sp, #0
    ov12_02261928();
    BattleSystem_GetMessageLoader(r5);
    Heap_Alloc(5, 8);
    // str r5, [r4]
    *((u8*)(r0 + 4)) = 0x3b;
    *((u8*)(r0 + 5)) = *((u8*)(r6 + (0x65 << 2)));
    BattleSystem_GetTextFrameDelay(r5);
    // add r2, sp, #0
    BattleSystem_PrintBattleMessage(r5, r7, r0);
    *((u8*)(r4 + 6)) = r0;
    SysTask_CreateOnMainQueue(ov12_022605D0, r4, 0);
}




void ov12_0225B2F8(void) {
    // add r3, sp, #0
    ov12_022619E4();
    BattleSystem_GetMessageLoader(r5);
    Heap_Alloc(5, 8);
    // str r5, [r4]
    *((u8*)(r0 + 4)) = 0x3c;
    *((u8*)(r0 + 5)) = *((u8*)(r6 + (0x65 << 2)));
    BattleSystem_GetTextFrameDelay(r5);
    // add r2, sp, #0
    BattleSystem_PrintBattleMessage(r5, r7, r0);
    *((u8*)(r4 + 6)) = r0;
    SysTask_CreateOnMainQueue(ov12_022605D0, r4, 0);
}




void ov12_0225B34C(void) {
    // add r2, sp, #0
    ov12_02261AD4();
    BattleSystem_GetMessageLoader(r5);
    Heap_Alloc(5, 8);
    // str r5, [r4]
    *((u8*)(r0 + 4)) = 0x3d;
    *((u8*)(r0 + 5)) = *((u8*)(r6 + (0x65 << 2)));
    BattleSystem_GetTextFrameDelay(r5);
    // add r2, sp, #0
    BattleSystem_PrintBattleMessage(r5, r7, r0);
    *((u8*)(r4 + 6)) = r0;
    SysTask_CreateOnMainQueue(ov12_022605D0, r4, 0);
}




void ov12_0225B3A0(void) {
    // add r2, sp, #0
    // add r0, sp, #0
}




void ov12_0225B3D4(void) {
    // tst r0, r1
    // sub r1, #0x76
    sub_0200602C(0x000006FE, 0x75);
    sub_0200602C(0x000006FC);
    sub_0200602C(0x000006FD);
    ov12_0226430C(r6, *((u8*)(r5 + (0x65 << 2))), *((u8*)r4));
}




void ov12_0225B434(void) {
    // ldrb r1, [r5, r1]
    // ldrb r2, [r4]
}




void ov12_0225B454(void) {
    Heap_Alloc(5, 0xc);
    MI_CpuFill8(0, 0xc);
    *((u8*)(r4 + 6)) = 0;
    // str r6, [r4]
    *((u8*)(r4 + 4)) = *((u8*)r5);
    *((u8*)(r4 + 7)) = *((u8*)(r5 + 1));
    *((u8*)(r4 + 8)) = 0;
    *((u8*)(r4 + 5)) = *((u8*)(r7 + (0x65 << 2)));
    SysTask_CreateOnMainQueue(ov12_02260D84, r4, 0);
}




void ov12_0225B494(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225B4B8: ; jump table
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    // add r1, sp, #0x14
    // ldrsh r0, [r1, r0]
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    // add r3, sp, #0x14
    // ldrsh r2, [r3, r2]
    // add r3, sp, #0x14
    // ldrsh r1, [r3, r2]
    // sub r0, r0, r1
    // ldrsh r0, [r3, r2]
    // sub r0, #0x18
    // ldrsh r2, [r3, r2]
    // neg r2, r2
    // add r3, sp, #0x14
    // ldrsh r1, [r3, r2]
    // sub r0, r1, r0
    // ldrsh r0, [r3, r2]
    // sub r0, #0x10
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x2c
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp]
    // add r1, #2
    // add r2, sp, #0x14
    // add r0, sp, #0x14
    // ldrsh r0, [r0, r1]
    // sub r1, #0xa
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    // add r3, sp, #0x14
    // ldrsh r2, [r3, r2]
    // add r3, sp, #0x14
    // ldrsh r1, [r3, r2]
    // sub r0, r1, r0
    // ldrsh r0, [r3, r2]
    // sub r0, #0x18
    // ldrsh r2, [r3, r2]
    // add r3, sp, #0x14
    // ldrsh r1, [r3, r2]
    // sub r0, r0, r1
    // ldrsh r0, [r3, r2]
    // sub r0, #0x10
    // ldrsh r2, [r3, r2]
    // neg r2, r2
    // ldrsh r5, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x2c
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, sp, #0x18
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, sp, #0x18
}




void ov12_0225B7B8(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225B7DC: ; jump table
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    // add r1, sp, #0x14
    // ldrsh r0, [r1, r0]
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x2c
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp]
    // add r2, sp, #0x18
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, sp, #0x18
}




void ov12_0225B960(void) {
    // add r0, #0x83
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225B980: ; jump table
    // add r0, #0x96
    // strb r1, [r0]
    *((u32*)(r1 + 0x10)) = 0;
    BattleSystem_GetBattleType(*((u32*)r1), 0);
    // tst r0, r1
    BattleSystem_GetBattleSpecial(*((u32*)r4), 8);
    // tst r0, r1
    // add r0, #0x82
    ov07_0221FDFC(*((u32*)r4), 5);
    *((u32*)(r4 + 0x10)) = r0;
    BattleSystem_GetBattleSpecial();
    // tst r0, r1
    ov12_0223B688(*((u32*)r4), 0x20);
    // add r0, #0x82
    ov07_0221FDFC(*((u32*)r4), 5);
    *((u32*)(r4 + 0x10)) = r0;
    // add r0, #0x82
    ov07_0221FDFC(*((u32*)r4), 5);
    *((u32*)(r4 + 0x10)) = r0;
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    // add r1, sp, #0x4c
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // add r0, #0x82
    // str r0, [sp, #0x4c]
    // add r1, #0x81
    // add r2, #0x8c
    BattleSystem_GetPartyMon(*((u32*)r4), *((u8*)r4), *((u8*)r4));
    // str r0, [sp, #0x54]
    // add r1, sp, #0x4c
    ov07_02232694(5);
    *((u32*)(r4 + 8)) = r0;
    ov07_022329B0();
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    // add r0, #0x88
    ov07_02233F20(*((u32*)*((u32*)(r4 + 4))));
    ov07_02232A04(*((u32*)(r4 + 8)));
    // add r0, #0x88
    ov07_02233EA0(*((u32*)*((u32*)(r4 + 4))));
    // add r0, #0x82
    // add r0, #0x96
    // add r0, #0x96
    // strb r1, [r0]
    // add r0, #0x96
    // add r0, #0x96
    // strb r1, [r0]
    ov12_0223A8D4(*((u32*)r4), 0);
    // add r2, #0x86
    // add r3, #0x82
    // add r1, sp, #0x24
    NARC_ReadPokepicAnimScript(*((u32*)(*((u32*)(r4 + 4)) + (0x69 << 2))), *((u32*)(r4 + 4)), *((u16*)r4), *((u8*)r4));
    // add r0, #0x82
    // add r2, #0x14
    // ldrsh r0, [r0, r1]
    // str r0, [sp]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #4]
    // add r0, #0x85
    // str r0, [sp, #8]
    // ldrsb r0, [r4, r0]
    // ldrsh r3, [r3, r5]
    // str r0, [sp, #0xc]
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0x10]
    // add r0, #0x93
    // str r0, [sp, #0x14]
    // add r0, #0x81
    // str r0, [sp, #0x18]
    // add r0, sp, #0x24
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    ov12_022612A4(*((u32*)r4), r5, r4, ov07_022377DC);
    *((u32*)(*((u32*)(r4 + 4)) + 0x20)) = r0;
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xc, 0);
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xd, 0);
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x2c, 0);
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 6, 1);
    // add r0, #0x8e
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x10, 0x10, 0);
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 6, 0);
    ov07_02232A44(*((u32*)(r4 + 8)));
    // add r0, #0x84
    sub_0200602C(0x00000706, 0x75);
    // mvn r1, r1
    sub_0200602C(0x74);
    ov07_0221FE08(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0x10)) = 0;
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    // add r0, #0x88
    ov07_02233E88(*((u32*)*((u32*)(r4 + 4))));
    // add r0, #0x83
    // add r0, #0x83
    // strb r1, [r0]
    Pokepic_GetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xc);
    ov07_02232A54(*((u32*)(r4 + 8)), (1 << 8));
    // add r0, #0x84
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x2d, 0);
    // str r0, [sp]
    // add r0, #0x86
    // add r1, #0x81
    // str r0, [sp, #4]
    // add r0, #0x97
    // add r2, #0x82
    // str r0, [sp, #8]
    // add r0, #0x84
    // str r0, [sp, #0xc]
    // add r0, #0x88
    // str r0, [sp, #0x10]
    ov12_02261F38(*((u32*)r4), *((u8*)r4), *((u8*)r4), *((u32*)(*((u32*)(r4 + 4)) + 0x20)));
    // add r0, #0x8e
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x10, 0, 0);
    // add r4, #0x83
    // strb r0, [r4]
    Pokepic_GetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xc);
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xc, (1 << 8));
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xd, 0xd);
    // add r0, #0x84
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x2d, 0);
    // str r0, [sp]
    // add r0, #0x86
    // add r1, #0x81
    // str r0, [sp, #4]
    // add r0, #0x97
    // add r2, #0x82
    // str r0, [sp, #8]
    // add r0, #0x84
    // str r0, [sp, #0xc]
    // add r0, #0x88
    // str r0, [sp, #0x10]
    ov12_02261F38(*((u32*)r4), *((u8*)r4), *((u8*)r4), *((u32*)(*((u32*)(r4 + 4)) + 0x20)));
    // add r0, #0x8e
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x10, 0, 1);
    // add r4, #0x83
    // strb r0, [r4]
    Pokepic_AddAttr(*((u32*)(5 + 0x20)), 0xc, 0x20);
    Pokepic_AddAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xd, 0x20);
    // ldrsb r1, [r4, r1]
    sub_0200914C(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x90);
    ov07_02232A54(*((u32*)(r4 + 8)));
    // add r4, #0x83
    // strb r0, [r4]
    ov12_0223B750(*((u32*)r4));
    // add r1, #0x81
    sub_02017068(*((u8*)r4));
    Pokepic_IsAnimFinished(*((u32*)(*((u32*)(r4 + 4)) + 0x20)));
    // add r0, #0x88
    ov07_02233ECC(*((u32*)*((u32*)(r4 + 4))));
    // add r0, #0x88
    // str r1, [r0]
    ov07_02232AB8(*((u32*)(r4 + 8)), 0);
    // add r0, #0x92
    ov07_0221BEDC(5);
    *((u32*)(r4 + 0x24)) = r0;
    // add r0, #0x81
    // add r2, sp, #0x58
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x58
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 0x24)));
    // add r4, #0x83
    // strb r0, [r4]
    // add r4, #0x83
    // strb r0, [r4]
    ov07_0221C394(*((u32*)(r4 + 0x24)));
    ov07_0221C3B0(*((u32*)(r4 + 0x24)));
    ov07_0221C3C0(*((u32*)(r4 + 0x24)));
    ov07_0221BFE0(*((u32*)(r4 + 0x24)));
    // add r4, #0x83
    // strb r0, [r4]
    sub_02005B58(0);
    // add r1, #0x81
    // add r2, #0x80
    ov12_0226430C(*((u32*)r4), *((u8*)r4), *((u8*)r4));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}




void ov12_0225BE38(void) {
    // add r0, #0x83
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225BE58: ; jump table
    // add r0, #0x96
    // strb r1, [r0]
    *((u32*)(r1 + 0x10)) = 0;
    BattleSystem_GetBattleType(*((u32*)r1), 0);
    // tst r0, r1
    BattleSystem_GetBattleSpecial(*((u32*)r4), 8);
    // tst r0, r1
    // add r0, #0x82
    ov07_0221FDFC(*((u32*)r4), 5);
    *((u32*)(r4 + 0x10)) = r0;
    BattleSystem_GetBattleSpecial();
    // tst r0, r1
    ov12_0223B688(*((u32*)r4), 0x20);
    // add r0, #0x82
    ov07_0221FDFC(*((u32*)r4), 5);
    *((u32*)(r4 + 0x10)) = r0;
    // add r0, #0x82
    ov07_0221FDFC(*((u32*)r4), 5);
    *((u32*)(r4 + 0x10)) = r0;
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    // add r0, #0x82
    // add r0, #0x96
    // add r0, #0x96
    // strb r1, [r0]
    // add r0, #0x96
    // add r0, #0x96
    // strb r1, [r0]
    ov12_0223A8D4(*((u32*)r4), 0);
    // add r2, #0x86
    // add r3, #0x82
    // add r1, sp, #0x24
    NARC_ReadPokepicAnimScript(*((u32*)(*((u32*)(r4 + 4)) + (0x69 << 2))), *((u32*)(r4 + 4)), *((u16*)r4), *((u8*)r4));
    // add r0, #0x82
    // ldrsh r0, [r0, r3]
    // add r2, #0x14
    // str r0, [sp]
    // ldrsh r0, [r0, r3]
    // ldrsh r3, [r5, r3]
    // str r0, [sp, #4]
    // add r0, #0x85
    // str r0, [sp, #8]
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0xc]
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0x10]
    // add r0, #0x93
    // str r0, [sp, #0x14]
    // add r0, #0x81
    // str r0, [sp, #0x18]
    // add r0, sp, #0x24
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    ov12_022612A4(*((u32*)r4), r5, r4, (*((u8*)r4) * 6));
    *((u32*)(*((u32*)(r4 + 4)) + 0x20)) = r0;
    // add r2, #0xf4
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xc, 0xc);
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xd, 0xd);
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x2c, 0);
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 6, 0);
    ov07_0221FE08(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0x10)) = 0;
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    ov07_0221BEDC(5);
    *((u32*)(r4 + 0x24)) = r0;
    // add r0, #0x81
    // add r2, sp, #0xa4
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0xa4
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 0x24)));
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    ov07_0221C394(*((u32*)(r4 + 0x24)));
    ov07_0221C3B0(*((u32*)(r4 + 0x24)));
    ov07_0221C3C0(*((u32*)(r4 + 0x24)));
    ov07_0221BFE0(*((u32*)(r4 + 0x24)));
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    // add r0, #0x84
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x2d, 0);
    // str r0, [sp]
    // add r0, #0x86
    // add r1, #0x81
    // str r0, [sp, #4]
    // add r0, #0x97
    // add r2, #0x82
    // str r0, [sp, #8]
    // add r0, #0x84
    // str r0, [sp, #0xc]
    // add r0, #0x88
    // str r0, [sp, #0x10]
    ov12_02261F38(*((u32*)r4), *((u8*)r4), *((u8*)r4), *((u32*)(*((u32*)(r4 + 4)) + 0x20)));
    // add r4, #0x83
    // strb r0, [r4]
    ov12_0223B750(*((u32*)r4));
    // add r1, #0x81
    sub_02017068(*((u8*)r4));
    Pokepic_IsAnimFinished(*((u32*)(*((u32*)(r4 + 4)) + 0x20)));
    // add r0, #0x88
    ov07_02233ECC(*((u32*)*((u32*)(r4 + 4))));
    // add r0, #0x88
    // str r1, [r0]
    // add r0, #0x92
    ov07_0221BEDC(5, 0);
    *((u32*)(r4 + 0x24)) = r0;
    // add r0, #0x81
    // add r2, sp, #0x4c
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x4c
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 0x24)));
    // add r4, #0x83
    // strb r0, [r4]
    // add r4, #0x83
    // strb r0, [r4]
    ov07_0221C394(*((u32*)(r4 + 0x24)));
    ov07_0221C3B0(*((u32*)(r4 + 0x24)));
    ov07_0221C3C0(*((u32*)(r4 + 0x24)));
    ov07_0221BFE0(*((u32*)(r4 + 0x24)));
    // add r4, #0x83
    // strb r0, [r4]
    sub_02005B58(0);
    // add r1, #0x81
    // add r2, #0x80
    ov12_0226430C(*((u32*)r4), *((u8*)r4), *((u8*)r4));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}




void ov12_0225C18C(void) {
    ov12_0223A8DC(*((u32*)r1));
    // add r1, #0x83
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225C1B4: ; jump table
    // add r0, #0x82
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // add r0, #0x81
    // str r0, [sp, #0x64]
    // add r0, #0x8e
    // str r0, [sp, #0x68]
    BattleSystem_GetSpriteSystem(*((u32*)r4), *((u8*)r4));
    // str r0, [sp, #0x74]
    BattleSystem_GetPaletteData(*((u32*)r4));
    // str r0, [sp, #0x78]
    // str r2, [sp, #0x6c]
    // str r1, [sp, #0x70]
    // add r0, #0x94
    // str r2, [sp, #0x60]
    // str r1, [sp, #0x60]
    // add r0, sp, #0x58
    ov07_02233DB8(*((u16*)r4), 0, 1);
    *((u32*)(r4 + 0xc)) = r0;
    ov12_0223A8D4(*((u32*)r4));
    // add r2, #0x86
    // add r3, #0x82
    // add r1, sp, #0x30
    NARC_ReadPokepicAnimScript(*((u32*)(*((u32*)(r4 + 4)) + (0x69 << 2))), *((u32*)(r4 + 4)), *((u16*)r4), *((u8*)r4));
    // add r0, #0x82
    // add r2, #0x14
    // ldrsh r0, [r0, r1]
    // str r0, [sp]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #4]
    // add r0, #0x85
    // str r0, [sp, #8]
    // ldrsb r0, [r4, r0]
    // ldrsh r3, [r3, r5]
    // str r0, [sp, #0xc]
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0x10]
    // add r0, #0x93
    // str r0, [sp, #0x14]
    // add r0, #0x81
    // str r0, [sp, #0x18]
    // add r0, sp, #0x30
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    ov12_022612A4(*((u32*)r4), r5, r4, ov07_022377DC);
    *((u32*)(*((u32*)(r4 + 4)) + 0x20)) = r0;
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xc, 0);
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xd, 0);
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x2c, 0);
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 6, 1);
    *((u32*)(r4 + 0x10)) = 0;
    ov07_0221FDFC(*((u32*)r4), 5);
    *((u32*)(r4 + 0x10)) = r0;
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    // add r1, sp, #0x24
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // add r0, #0x82
    // str r0, [sp, #0x24]
    // add r1, #0x81
    // add r2, #0x8c
    BattleSystem_GetPartyMon(*((u32*)r4), *((u8*)r4), *((u8*)r4));
    // str r0, [sp, #0x2c]
    // add r0, #0x8e
    // add r1, sp, #0x24
    // str r0, [sp, #0x28]
    ov07_02232694(5);
    *((u32*)(r4 + 8)) = r0;
    ov07_022329B0();
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    ov07_02233F20(*((u32*)(r4 + 0xc)));
    // add r0, #0x94
    ov07_02232A04(*((u32*)(r4 + 8)));
    ov07_02233EA0(*((u32*)(r4 + 0xc)));
    ov07_0221FE08(*((u32*)(r4 + 0x10)));
    // add r0, #0x8e
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x10, 0x10, 0);
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 6, 0);
    ov07_02232A44(*((u32*)(r4 + 8)));
    // add r0, #0x84
    sub_0200602C(0x00000706, 0x75);
    // mvn r1, r1
    sub_0200602C(0x74);
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    ov07_02233E88(*((u32*)(r4 + 0xc)));
    // add r0, #0x83
    // add r0, #0x83
    // strb r1, [r0]
    Pokepic_GetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xc);
    ov07_02232A54(*((u32*)(r4 + 8)), (1 << 8));
    // add r0, #0x84
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x2d, 0);
    // str r0, [sp]
    // add r0, #0x86
    // add r1, #0x81
    // str r0, [sp, #4]
    // add r0, #0x97
    // add r2, #0x82
    // str r0, [sp, #8]
    // add r0, #0x84
    // str r0, [sp, #0xc]
    // add r0, #0x88
    // str r0, [sp, #0x10]
    ov12_02261F38(*((u32*)r4), *((u8*)r4), *((u8*)r4), *((u32*)(*((u32*)(r4 + 4)) + 0x20)));
    // add r0, #0x8e
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x10, 0, 0);
    // add r4, #0x83
    // strb r0, [r4]
    Pokepic_GetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xc);
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xc, (1 << 8));
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xd, 0xd);
    // add r0, #0x84
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x2d, 0);
    // str r0, [sp]
    // add r0, #0x86
    // add r1, #0x81
    // str r0, [sp, #4]
    // add r0, #0x97
    // add r2, #0x82
    // str r0, [sp, #8]
    // add r0, #0x84
    // str r0, [sp, #0xc]
    // add r0, #0x88
    // str r0, [sp, #0x10]
    ov12_02261F38(*((u32*)r4), *((u8*)r4), *((u8*)r4), *((u32*)(*((u32*)(r4 + 4)) + 0x20)));
    // add r0, #0x8e
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x10, 0, 1);
    // add r4, #0x83
    // strb r0, [r4]
    Pokepic_AddAttr(*((u32*)(5 + 0x20)), 0xc, 0x20);
    Pokepic_AddAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xd, 0x20);
    // ldrsb r1, [r4, r1]
    sub_0200914C(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x90);
    ov07_02232A54(*((u32*)(r4 + 8)));
    // add r4, #0x83
    // strb r0, [r4]
    ov12_0223B750(*((u32*)r4));
    // add r1, #0x81
    sub_02017068(*((u8*)r4));
    Pokepic_IsAnimFinished(*((u32*)(*((u32*)(r4 + 4)) + 0x20)));
    ov07_02233ECC(*((u32*)(r4 + 0xc)));
    ov07_02232AB8(*((u32*)(r4 + 8)));
    // add r0, #0x92
    // add r0, #0x81
    // add r2, sp, #0x180
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x180
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // add r4, #0x83
    // strb r0, [r4]
    // add r4, #0x83
    // strb r0, [r4]
    ov07_0221C394(8);
    ov07_0221C3B0(r5);
    ov07_0221C3C0(r5);
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    // add r0, #0x98
    // add r0, #0x81
    // add r2, sp, #0x128
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x128
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    // add r4, #0x83
    // strb r0, [r4]
    // add r3, #0x81
    // add r1, #0x28
    // add r2, sp, #0xd8
    ov12_02261CA8(*((u32*)r4), r4, *((u8*)r4));
    // add r0, sp, #0xd8
    ov07_02234A20(5);
    // add r0, #0x81
    // add r2, sp, #0x80
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x80
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // str r2, [r1, r0]
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    // add r1, #0x81
    // add r2, #0x80
    ov12_0226430C(*((u32*)r4), *((u8*)r4), *((u8*)r4));
    Heap_Free(r4);
    SysTask_Destroy(r6);
}




void ov12_0225C6C8(void) {
    ov12_0223A8DC(*((u32*)r1));
    // add r1, #0x83
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225C6F0: ; jump table
    ov12_0223A8D4(*((u32*)r4), (*((u16*)(*((u8*)r4) + 6)) << 0x10));
    // add r2, #0x86
    // add r3, #0x82
    // add r1, sp, #0x24
    NARC_ReadPokepicAnimScript(*((u32*)(*((u32*)(r4 + 4)) + (0x69 << 2))), *((u32*)(r4 + 4)), *((u16*)r4), *((u8*)r4));
    // add r0, #0x82
    // ldrsh r0, [r0, r3]
    // add r2, #0x14
    // str r0, [sp]
    // ldrsh r0, [r0, r3]
    // ldrsh r3, [r5, r3]
    // str r0, [sp, #4]
    // add r0, #0x85
    // str r0, [sp, #8]
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0xc]
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0x10]
    // add r0, #0x93
    // str r0, [sp, #0x14]
    // add r0, #0x81
    // str r0, [sp, #0x18]
    // add r0, sp, #0x24
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    ov12_022612A4(*((u32*)r4), r5, r4, (*((u8*)r4) * 6));
    *((u32*)(*((u32*)(r4 + 4)) + 0x20)) = r0;
    // add r2, #0xf4
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xc, 0xc);
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0xd, 0xd);
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x2c, 0);
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 6, 0);
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    // add r0, #0x81
    // add r2, sp, #0x1a4
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x1a4
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    // add r0, #0x84
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 0x2d, 0);
    // str r0, [sp]
    // add r0, #0x86
    // add r1, #0x81
    // str r0, [sp, #4]
    // add r0, #0x97
    // add r2, #0x82
    // str r0, [sp, #8]
    // add r0, #0x84
    // str r0, [sp, #0xc]
    // add r0, #0x88
    // str r0, [sp, #0x10]
    ov12_02261F38(*((u32*)r4), *((u8*)r4), *((u8*)r4), *((u32*)(*((u32*)(r4 + 4)) + 0x20)));
    // add r4, #0x83
    // strb r0, [r4]
    ov12_0223B750(*((u32*)r4));
    // add r1, #0x81
    sub_02017068(*((u8*)r4));
    Pokepic_IsAnimFinished(*((u32*)(*((u32*)(r4 + 4)) + 0x20)));
    // add r0, #0x92
    // add r0, #0x81
    // add r2, sp, #0x14c
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x14c
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // add r4, #0x83
    // strb r0, [r4]
    // add r4, #0x83
    // strb r0, [r4]
    ov07_0221C394(6);
    ov07_0221C3B0(r5);
    ov07_0221C3C0(r5);
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    // add r0, #0x98
    // add r0, #0x81
    // add r2, sp, #0xf4
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0xf4
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    // add r4, #0x83
    // strb r0, [r4]
    // add r3, #0x81
    // add r1, #0x28
    // add r2, sp, #0xa4
    ov12_02261CA8(*((u32*)r4), r4, *((u8*)r4));
    // add r0, sp, #0xa4
    ov07_02234A20(5);
    // add r0, #0x81
    // add r2, sp, #0x4c
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x4c
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // str r2, [r1, r0]
    // add r0, #0x83
    // add r4, #0x83
    // strb r0, [r4]
    // add r1, #0x81
    // add r2, #0x80
    ov12_0226430C(*((u32*)r4), *((u8*)r4), *((u8*)r4));
    Heap_Free(r4);
    SysTask_Destroy(r6);
}




void ov12_0225C9BC(void) {
    ov12_0223A8DC(*((u32*)r1));
    // add r1, #0x6b
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225C9E2: ; jump table
    // add r0, #0x69
    // add r2, sp, #0x120
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x120
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // add r0, #0x6b
    // add r4, #0x6b
    // strb r0, [r4]
    // add r4, #0x6b
    // strb r0, [r4]
    // add r3, #0x69
    // add r1, #0x10
    // add r2, sp, #0xd0
    ov12_02261CA8(*((u32*)r4), r4, *((u8*)r4));
    // add r0, sp, #0xd0
    ov07_0223494C(5);
    // add r0, #0x69
    // add r2, sp, #0x78
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x78
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // str r2, [r1, r0]
    // add r0, #0x6b
    // add r4, #0x6b
    // strb r0, [r4]
    ov07_0221C394((*((u8*)r4) + 1), *((u32*)(r4 + 4)), 0);
    ov07_0221C3B0(r5);
    ov07_0221C3C0(r5);
    // add r0, #0x6b
    // add r4, #0x6b
    // strb r0, [r4]
    // add r0, #0x6a
    // tst r0, r5
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // add r0, #0x69
    // str r0, [sp, #0x5c]
    // add r0, #0x6e
    // str r0, [sp, #0x60]
    BattleSystem_GetSpriteSystem(*((u32*)r4));
    // str r0, [sp, #0x6c]
    BattleSystem_GetPaletteData(*((u32*)r4));
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // add r0, sp, #0x50
    ov07_02233DB8(0);
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r0, #0x69
    // str r0, [sp, #0x34]
    // add r0, #0x6e
    // str r0, [sp, #0x38]
    BattleSystem_GetSpriteSystem(*((u32*)r4), ov12_0226D128);
    // str r0, [sp, #0x44]
    BattleSystem_GetPaletteData(*((u32*)r4));
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // add r0, sp, #0x28
    ov07_02233DB8(0);
    *((u32*)(r4 + 0xc)) = r0;
    // add r0, #0x6b
    // strb r1, [r0]
    // add r0, #0x6e
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 8)), 0, 0x10, 0);
    // add r4, #0x6a
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225CB8A: ; jump table
    // mvn r1, r1
    sub_0200602C(0x00000706, 0x74);
    sub_0200602C(0x00000706, 0x75);
    Pokepic_ResumePaletteFade(*((u32*)(r4 + 8)));
    // add r0, #0x6b
    // add r4, #0x6b
    // strb r0, [r4]
    // sub r2, #0x2c
    Pokepic_AddAttr(*((u32*)(r4 + 8)), 0xc, 0xc);
    // sub r2, #0x2d
    Pokepic_AddAttr(*((u32*)(r4 + 8)), 0xd, 0xd);
    // add r1, #0x6c
    sub_0200914C(*((u32*)(r4 + 8)), *((u8*)r4));
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 0xc);
    Pokepic_Delete(*((u32*)(r4 + 8)));
    // add r4, #0x6b
    // strb r0, [r4]
    ov07_02233E88(*((u32*)(r4 + 0xc)));
    ov07_02233ECC(*((u32*)(r4 + 0xc)));
    // add r4, #0x6b
    // strb r0, [r4]
    // add r1, #0x69
    // add r2, #0x68
    ov12_0226430C(*((u32*)r4), *((u8*)r4), *((u8*)r4));
    Heap_Free(r4);
    SysTask_Destroy(r6);
}




void ov12_0225CC58(void) {
    // add r1, #0x6b
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225CC80: ; jump table
    // add r0, #0x69
    // add r2, sp, #0x110
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, sp, #0x110
    // add r0, #0x6b
    // add r4, #0x6b
    // strb r0, [r4]
    // add r4, #0x6b
    // strb r0, [r4]
    // add r3, #0x69
    // add r1, #0x10
    // add r2, sp, #0xc0
    // add r0, sp, #0xc0
    // add r0, #0x69
    // add r2, sp, #0x68
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, sp, #0x68
    // str r2, [r1, r0]
    // add r0, #0x6b
    // add r4, #0x6b
    // strb r0, [r4]
    // add r0, #0x6b
    // add r4, #0x6b
    // strb r0, [r4]
    // add r0, #0x69
    // add r2, sp, #0x10
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, sp, #0x10
    // add r0, #0x6b
    // add r4, #0x6b
    // strb r0, [r4]
    // add r1, #0x69
    // add r2, #0x68
}




void ov12_0225CDB8(void) {
    // sub r2, #0x2c
    // sub r2, #0x2d
}




void ov12_0225CE28(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225CE78: ; jump table
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r2, sp, #0
    // ldrsh r3, [r2, r0]
    // ldrsh r0, [r2, r1]
    // sub r0, r3, r0
    // ldrsh r0, [r2, r1]
    // sub r0, #0x18
    // ldrsh r1, [r2, r1]
    // neg r1, r1
    // asr r1, r1, #0x10
    // add r2, sp, #0
    // ldrsh r3, [r2, r1]
    // ldrsh r0, [r2, r0]
    // sub r0, r3, r0
    // ldrsh r0, [r2, r1]
    // sub r0, #0x10
    // ldrsh r1, [r2, r1]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // ldrsh r1, [r4, r0]
    // add r3, sp, #0
    // ldrsh r0, [r3, r0]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    // ldrsh r0, [r0, r1]
    // sub r1, #0xe
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r2, sp, #0
    // ldrsh r3, [r2, r1]
    // ldrsh r0, [r2, r0]
    // sub r0, r3, r0
    // ldrsh r0, [r2, r1]
    // sub r0, #0x18
    // ldrsh r1, [r2, r1]
    // add r2, sp, #0
    // ldrsh r3, [r2, r0]
    // ldrsh r0, [r2, r1]
    // sub r0, r3, r0
    // ldrsh r0, [r2, r1]
    // sub r0, #0x10
    // ldrsh r1, [r2, r1]
    // neg r1, r1
    // asr r1, r1, #0x10
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // add r1, sp, #0
    // ldrsh r1, [r1, r0]
    // ldrsh r0, [r4, r0]
    // add r3, sp, #0
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r3, r2]
}




void ov12_0225D138(void) {
    BattleSystem_GetBattleType(*((u32*)r1));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225D15C: ; jump table
    *((u8*)(r4 + 0xa)) = 1;
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225D188: ; jump table
    // str r0, [sp, #8]
    *((u32*)(r4 + 0x18)) = 3;
    // str r0, [sp, #0x18]
    // str r0, [sp, #8]
    *((u32*)(r4 + 0x18)) = 0;
    // str r0, [sp, #0x18]
    // str r0, [sp, #8]
    *((u32*)(r4 + 0x18)) = 0;
    // str r0, [sp, #0x18]
    // str r0, [sp, #8]
    *((u32*)(r4 + 0x18)) = 3;
    // str r0, [sp, #0x18]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    BattleSystem_GetSpriteSystem(*((u32*)r4));
    // str r0, [sp, #0x24]
    BattleSystem_GetPaletteData(*((u32*)r4));
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x2c]
    // add r0, sp, #8
    ov07_02233DB8(*((u32*)r4));
    // add r1, #0x88
    // str r0, [r1]
    // add r0, #0x88
    ov07_022344C4(*((u32*)*((u32*)(r4 + 4))), 0x64);
    // add r0, #0x88
    ov07_022344D0(*((u32*)*((u32*)(r4 + 4))), 2);
    // add r0, #0x88
    ov07_022344C0(*((u32*)*((u32*)(r4 + 4))), 0);
    ManagedSprite_SetAnimationFrame(*((u32*)(*((u32*)(r4 + 4)) + 0x18)), 0);
    ManagedSprite_SetAnim(*((u32*)(*((u32*)(r4 + 4)) + 0x18)), 1);
    ManagedSprite_SetAnimateFlag(*((u32*)(*((u32*)(r4 + 4)) + 0x18)), 1);
    *((u8*)(r4 + 0xa)) = 3;
    ManagedSprite_OffsetPositionXY(*((u32*)(*((u32*)(r4 + 4)) + 0x18)), 5, 0);
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r4 + 4)) + 0x18)));
    // add r1, sp, #4
    // ldrsh r0, [r1, r0]
    // add r0, #0x88
    ov07_02233F20(*((u32*)*((u32*)(r4 + 4))));
    // add r0, #0x88
    ov07_0223449C(*((u32*)*((u32*)(r4 + 4))), 1);
    // add r0, #0x88
    ov07_02233EFC(*((u32*)*((u32*)(r4 + 4))), 0);
    // tst r0, r6
    // tst r0, r6
    BattleSystem_GetBattlerIdPartner(*((u32*)r4), *((u8*)(r4 + 9)));
    BattleSystem_GetOpponentData(*((u32*)r4), r0);
    // add r0, #0x88
    ov07_0223449C(*((u32*)r0), 1);
    // add r0, #0x88
    ov07_02233EFC(*((u32*)r4), 0);
    // add r4, #0x88
    ov07_022344DC(*((u32*)r4), 0xc);
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    BattleSystem_GetSpriteManager(*((u32*)r4));
    Sprite_DeleteAndFreeResources(*((u32*)(*((u32*)(r4 + 4)) + 0x18)));
    *((u32*)(*((u32*)(r4 + 4)) + 0x18)) = 0;
    // add r1, r2, r1
    SpriteManager_UnloadCharObjById(r5, 0x00004E2F, *((u8*)(*((u32*)(r4 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadPlttObjById(r5, 0x00004E2A, *((u8*)(*((u32*)(r4 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadCellObjById(r5, 0x00004E27, *((u8*)(*((u32*)(r4 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadAnimObjById(r5, 0x00004E27, *((u8*)(*((u32*)(r4 + 4)) + 0x00000195)));
    *((u8*)(r4 + 0xa)) = 6;
    ManagedSprite_SetAnimationFrame(*((u32*)(6 + 0x18)), 0);
    ManagedSprite_SetAnim(*((u32*)(*((u32*)(r4 + 4)) + 0x18)), 1);
    ManagedSprite_SetAnimateFlag(*((u32*)(*((u32*)(r4 + 4)) + 0x18)), 1);
    *((u8*)(r4 + 0xa)) = 2;
    // mvn r1, r1
    ManagedSprite_OffsetPositionXY(*((u32*)(*((u32*)(r4 + 4)) + 0x18)), 4, 0);
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r4 + 4)) + 0x18)));
    // add r0, #0x88
    ManagedSprite_GetAnimationFrame(*((u32*)(*((u32*)(r4 + 4)) + 0x18)), *((u32*)(r4 + 4)));
    // str r0, [sp]
    // add r0, r0, r2
    // ldrsh r1, [r5, r0]
    // add r0, #0x88
    ov07_0223449C(*((u32*)*((u32*)(r4 + 4))), 1, (*((u32*)(r4 + 0xc)) * 0x18));
    // add r7, sp, #4
    // add r2, r2, r3
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r5, r2]
    // add r1, r1, r2
    // ldrsh r7, [r7, r2]
    // add r0, #0x88
    // add r2, r2, r3
    // ldrsh r2, [r5, r2]
    // add r2, r7, r2
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_022344A8(*((u32*)*((u32*)(r4 + 4))), (2 << 0x10), (ov12_0226D1EA << 0x10), (*((u32*)(r4 + 0xc)) * 0x18));
    // ldr r0, [sp]
    // add r0, #0x88
    ov07_02233F20(*((u32*)*((u32*)(r4 + 4))));
    // add r0, #0x88
    ov07_02233EFC(*((u32*)*((u32*)(r4 + 4))), 0);
    // add r0, #0x88
    ov07_022344C0(*((u32*)*((u32*)(r4 + 4))), 1);
    // tst r0, r6
    // tst r0, r6
    BattleSystem_GetBattlerIdPartner(*((u32*)r4), *((u8*)(r4 + 9)));
    BattleSystem_GetOpponentData(*((u32*)r4), r0);
    // add r2, r2, r3
    // add r0, #0x88
    // add r7, sp, #4
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r5, r2]
    // add r1, r1, r2
    // ldrsh r7, [r7, r2]
    // add r2, r2, r3
    // ldrsh r2, [r5, r2]
    // asr r1, r1, #0x10
    // add r2, r7, r2
    // asr r2, r2, #0x10
    ov07_022344A8(*((u32*)r0), (2 << 0x10), (ov12_0226D1EA << 0x10), (*((u32*)(r4 + 0xc)) * 0x18));
    // add r0, #0x88
    ov07_0223449C(*((u32*)r6), 1);
    // add r0, #0x88
    ov07_02233EFC(*((u32*)r6), 0);
    // add r6, #0x88
    ov07_022344C0(*((u32*)r6), 1);
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // sub r0, #0x2a
    BattleSystem_GetSpriteManager(*((u32*)r4));
    Sprite_DeleteAndFreeResources(*((u32*)(*((u32*)(r4 + 4)) + 0x18)));
    *((u32*)(*((u32*)(r4 + 4)) + 0x18)) = 0;
    // add r1, r2, r1
    SpriteManager_UnloadCharObjById(r5, 0x00004E2F, *((u8*)(*((u32*)(r4 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadPlttObjById(r5, 0x00004E2A, *((u8*)(*((u32*)(r4 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadCellObjById(r5, 0x00004E27, *((u8*)(*((u32*)(r4 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadAnimObjById(r5, 0x00004E27, *((u8*)(*((u32*)(r4 + 4)) + 0x00000195)));
    *((u8*)(r4 + 0xa)) = 6;
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r4 + 4)) + 0x18)));
    ManagedSprite_GetAnimationFrame(*((u32*)(*((u32*)(r4 + 4)) + 0x18)));
    *((u32*)(r4 + 0x14)) = 8;
    *((u8*)(r4 + 0xa)) = 4;
    // add r0, #0x88
    // add r1, r1, r5
    // ldrsh r1, [r6, r1]
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // add r1, r2, r1
    // ldrsh r3, [r3, r2]
    // add r2, r2, r5
    // ldrsh r2, [r6, r2]
    // asr r1, r1, #0x10
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ov07_022344A8(*((u32*)*((u32*)(r4 + 4))), (ov12_0226D1E8 << 0x10), (ov12_0226D1EA << 0x10));
    // add r0, #0x88
    ov07_02233F20(*((u32*)*((u32*)(r4 + 4))));
    // add r0, #0x88
    ov07_02233EFC(*((u32*)*((u32*)(r4 + 4))), r5);
    // add r0, #0x88
    ov07_022344D0(*((u32*)*((u32*)(r4 + 4))), 1);
    // add r0, #0x88
    ov07_022344C0(*((u32*)*((u32*)(r4 + 4))), 1);
    PlaySE(0x0000070A);
    *((u32*)(r4 + 0x14)) = (*((u32*)(r4 + 0x14)) - 1);
    *((u8*)(r4 + 0xa)) = 6;
    *((u8*)(r4 + 0xa)) = 5;
    // add r0, #0x88
    ov07_02233E88(*((u32*)*((u32*)(r4 + 4))));
    // add r0, #0x88
    ov07_02233ECC(*((u32*)*((u32*)(r4 + 4))));
    // add r0, #0x88
    // str r1, [r0]
    *((u8*)(r4 + 0xa)) = 6;
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 9)), *((u8*)(r4 + 8)));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}




void ov12_0225D644(void) {
    BattleSystem_GetBattleType(*((u32*)r1));
    ManagedSprite_OffsetPositionXY(*((u32*)(*((u32*)(r5 + 4)) + 0x18)), 5, 0);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r5 + 4)) + 0x18)));
    // add r1, sp, #0
    // ldrsh r1, [r1, r0]
    BattleSystem_GetSpriteManager(*((u32*)r5));
    Sprite_DeleteAndFreeResources(*((u32*)(*((u32*)(r5 + 4)) + 0x18)));
    *((u32*)(*((u32*)(r5 + 4)) + 0x18)) = 0;
    // add r1, r2, r1
    SpriteManager_UnloadCharObjById(r4, 0x00004E2F, *((u8*)(*((u32*)(r5 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadPlttObjById(r4, 0x00004E2A, *((u8*)(*((u32*)(r5 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadCellObjById(r4, 0x00004E27, *((u8*)(*((u32*)(r5 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadAnimObjById(r4, 0x00004E27, *((u8*)(*((u32*)(r5 + 4)) + 0x00000195)));
    *((u8*)(r5 + 0xa)) = 2;
    ManagedSprite_SetPriority(*((u32*)(2 + 0x18)), 1);
    ManagedSprite_SetAnimationFrame(*((u32*)(*((u32*)(r5 + 4)) + 0x18)), 0);
    ManagedSprite_SetAnim(*((u32*)(*((u32*)(r5 + 4)) + 0x18)), 1);
    ManagedSprite_SetAnimateFlag(*((u32*)(*((u32*)(r5 + 4)) + 0x18)), 1);
    *((u8*)(r5 + 0xa)) = 1;
    // mvn r1, r1
    ManagedSprite_OffsetPositionXY(*((u32*)(*((u32*)(r5 + 4)) + 0x18)), 4, 0);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r5 + 4)) + 0x18)));
    // add r1, #0x88
    // tst r1, r4
    // tst r1, r4
    ManagedSprite_GetAnimationFrame(*((u32*)(*((u32*)(r5 + 4)) + 0x18)), 8);
    // add r0, r0, r2
    // ldrsh r1, [r6, r0]
    BattleSystem_GetBattlerIdPartner(*((u32*)r5), *((u8*)(r5 + 9)), (*((u32*)(r5 + 0xc)) * 0x18));
    BattleSystem_GetOpponentData(*((u32*)r5), r0);
    // add r0, #0x88
    ov07_02233F20(*((u32*)r0));
    // add r7, sp, #0
    // add r2, r2, r3
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r6, r2]
    // add r0, #0x88
    // add r1, r1, r2
    // ldrsh r7, [r7, r2]
    // add r2, r2, r3
    // ldrsh r2, [r6, r2]
    // asr r1, r1, #0x10
    // add r2, r7, r2
    // asr r2, r2, #0x10
    ov07_022344A8(*((u32*)r4), (2 << 0x10), (ov12_0226D1EA << 0x10), (*((u32*)(r5 + 0xc)) * 0x18));
    // add r0, #0x88
    ov07_0223449C(*((u32*)r4), 1);
    // add r0, #0x88
    ov07_02233EFC(*((u32*)r4), 0);
    // add r0, #0x88
    ov07_022344C0(*((u32*)r4), 1);
    // add r4, #0x88
    ov07_022344D0(*((u32*)r4), 1);
    // add r1, sp, #0
    // ldrsh r1, [r1, r0]
    // sub r0, #0x2a
    BattleSystem_GetSpriteManager(*((u32*)r5));
    Sprite_DeleteAndFreeResources(*((u32*)(*((u32*)(r5 + 4)) + 0x18)));
    *((u32*)(*((u32*)(r5 + 4)) + 0x18)) = 0;
    // add r1, r2, r1
    SpriteManager_UnloadCharObjById(r4, 0x00004E2F, *((u8*)(*((u32*)(r5 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadPlttObjById(r4, 0x00004E2A, *((u8*)(*((u32*)(r5 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadCellObjById(r4, 0x00004E27, *((u8*)(*((u32*)(r5 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadAnimObjById(r4, 0x00004E27, *((u8*)(*((u32*)(r5 + 4)) + 0x00000195)));
    *((u8*)(r5 + 0xa)) = 2;
    ov12_0226430C(*((u32*)r5), *((u8*)(r5 + 9)), *((u8*)(r5 + 8)));
    Heap_Free(r5);
    SysTask_Destroy(r6);
}




void ov12_0225D890(void) {
    ManagedSprite_OffsetPositionXY(*((u32*)(*((u32*)(r1 + 4)) + 0x18)), 5, 0);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r5 + 4)) + 0x18)));
    // add r1, sp, #0
    // ldrsh r1, [r1, r0]
    *((u8*)(r5 + 0xa)) = (*((u8*)(r5 + 0xa)) + 1);
    // mvn r1, r1
    ManagedSprite_OffsetPositionXY(*((u32*)((*((u8*)(r5 + 0xa)) + 1) + 0x18)), 4, 0);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(*((u32*)(r5 + 4)) + 0x18)));
    // add r1, sp, #0
    // ldrsh r1, [r1, r0]
    // sub r0, #0x2a
    *((u8*)(r5 + 0xa)) = (*((u8*)(r5 + 0xa)) + 1);
    BattleSystem_GetSpriteManager(*((u32*)r5));
    Sprite_DeleteAndFreeResources(*((u32*)(*((u32*)(r5 + 4)) + 0x18)));
    *((u32*)(*((u32*)(r5 + 4)) + 0x18)) = 0;
    // add r1, r2, r1
    SpriteManager_UnloadCharObjById(r4, 0x00004E2F, *((u8*)(*((u32*)(r5 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadPlttObjById(r4, 0x00004E2A, *((u8*)(*((u32*)(r5 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadCellObjById(r4, 0x00004E27, *((u8*)(*((u32*)(r5 + 4)) + 0x00000195)));
    // add r1, r2, r1
    SpriteManager_UnloadAnimObjById(r4, 0x00004E27, *((u8*)(*((u32*)(r5 + 4)) + 0x00000195)));
    ov12_0226430C(*((u32*)r5), *((u8*)(r5 + 9)), *((u8*)(r5 + 8)));
    Heap_Free(r5);
    SysTask_Destroy(r6);
}




void ov12_0225D990(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r2, sp, #0
    // ldrsh r0, [r2, r1]
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r2, r1]
    // ldrsh r0, [r2, r1]
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r2, r1]
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
}




void ov12_0225DA18(void) {
    // add r0, #0x4d
    // add r0, #0x4d
    // add r4, #0x4d
    // strb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x4f
    // strb r0, [r4]
    // add r1, #0x24
    // add r2, #0x4c
}




void ov12_0225DA8C(void) {
    // add r0, #0x4f
    // strb r0, [r4]
    // add r1, #0x24
    // add r2, #0x4c
}




void ov12_0225DAD4(void) {
    BattleSystem_GetBgConfig(*((u32*)r1));
    BattleSystem_GetBattleInput(*((u32*)r4));
    BattleSystem_GetOpponentData(*((u32*)r4), *((u8*)(r4 + 9)));
    // str r0, [sp, #0xc]
    BattleSystem_GetBattleType(*((u32*)r4));
    BattleSystem_GetBattlerIdPartner(*((u32*)r4), *((u8*)(r4 + 9)));
    BattleSystem_GetHpBar(*((u32*)r4), r0);
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225DB2E: ; jump table
    // add r2, sp, #0x40
    // strh r3, [r2]
    // add r3, r4, r0
    // add r3, #0x2c
    *((u16*)(r2 + 8)) = *((u8*)*((u16*)(r4 + 0x24)));
    // add r3, r4, r0
    // add r3, #0x30
    *((u16*)(r2 + 0x10)) = *((u8*)*((u8*)*((u16*)(r4 + 0x24))));
    BattleSystem_GetBattleInput(*((u32*)r4), (r4 + 2), (r2 + 2), *((u8*)*((u8*)*((u16*)(r4 + 0x24)))));
    // add r1, #0x34
    // add r2, sp, #0x40
    BattleInput_LoadFightMenuText(*((u8*)r4));
    *((u8*)(r4 + 0xa)) = (*((u8*)(r4 + 0xa)) + 1);
    BattleSystem_GetMessageLoader(*((u32*)r4));
    // tst r1, r0
    ov12_0223BB04(*((u32*)r4), r5);
    // add r1, sp, #0x10
    *((u8*)(r1 + 0xd)) = 2;
    // add r0, #0x23
    // str r0, [sp, #0x20]
    // add r2, sp, #0x1c
    *((u16*)(r1 + 0xe)) = 0x00000399;
    BattleSystem_PrintBattleMessage(*((u32*)r4), r6, *((u8*)(r4 + 9)), 0);
    *((u8*)(r4 + 0xa)) = 3;
    // add r0, sp, #0x10
    *((u8*)(3 + 0xd)) = 0;
    BattleSystem_GetTrainerGender(*((u32*)r4), 0);
    // add r1, r0, r1
    // add r0, sp, #0x10
    *((u16*)(r0 + 0xe)) = 0x000004CA;
    BattleSystem_GetTextFrameDelay(*((u32*)r4), 0x000004CA);
    // add r2, sp, #0x1c
    BattleSystem_PrintBattleMessage(*((u32*)r4), r6, r0);
    // add r1, #0x35
    // strb r0, [r1]
    *((u8*)(r4 + 0xa)) = 2;
    // tst r2, r1
    // add r0, sp, #0x10
    *((u8*)(2 + 0xd)) = 8;
    BattleSystem_GetTrainerIndex(*((u32*)r4), *((u8*)(r4 + 9)), r5);
    // str r0, [sp, #0x20]
    // add r0, sp, #0x10
    *((u16*)(r0 + 0xe)) = 0x0000039A;
    // tst r1, r5
    // add r0, sp, #0x10
    *((u8*)(r0 + 0xd)) = 8;
    BattleSystem_GetTrainerIndex(*((u32*)r4), *((u8*)(r4 + 9)));
    // str r0, [sp, #0x20]
    // add r0, sp, #0x10
    *((u16*)(r0 + 0xe)) = 0x000004C6;
    // add r3, sp, #0x10
    *((u8*)(r3 + 0xd)) = 2;
    // add r2, #0x23
    // sub r0, #0x67
    // str r1, [sp, #0x20]
    *((u16*)(r3 + 0xe)) = r0;
    // add r2, sp, #0x1c
    BattleSystem_PrintBattleMessage(*((u32*)r4), r6, (*((u8*)r4) << 8), 0);
    *((u8*)(r4 + 0xa)) = 3;
    // add r0, #0x35
    TextPrinterCheckActive(*((u8*)r4));
    *((u8*)(r4 + 0xa)) = 3;
    ov12_02264E84(*((u32*)(r4 + 4)));
    // ldr r0, [sp, #0xc]
    ov12_02261FD4(*((u32*)r4));
    *((u8*)(r4 + 0xa)) = 4;
    BattleInput_CheckFeedbackDone(r6);
    NARC_New(7, 5);
    NARC_New(8, 5);
    // add r0, sp, #0x10
    *((u8*)(r0 + 1)) = *((u8*)(r4 + 9));
    // add r1, #0x34
    // add r2, #0x3b
    // strb r1, [r0]
    // add r1, #0x23
    *((u8*)(r0 + 2)) = *((u8*)r4);
    // ldrsh r1, [r4, r1]
    *((u16*)(r0 + 4)) = 0x36;
    *((u16*)(r0 + 6)) = *((u16*)(r4 + 0x38));
    // add r1, #0x3a
    *((u8*)(r0 + 3)) = *((u8*)r4);
    ov12_0223B580(*((u32*)r4), *((u8*)(r4 + 9)), *((u8*)r4));
    // add r1, sp, #0x10
    *((u8*)(r1 + 8)) = r0;
    // ldr r0, [sp, #0xc]
    BattleInput_Deadstriped_022698AC(r6, 1);
    BattleSystem_GetBattleSpecial(*((u32*)r4));
    // tst r0, r1
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r5, r6, 6);
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r5, r6, 0xa);
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r5, r6, 8);
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r5, r6, 0x14);
    // add r0, sp, #0x10
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r5, r6, 4);
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r5, r6, 3);
    ov12_0223BB64(*((u32*)r4), 1);
    BattleSystem_GetBattleSpecial(*((u32*)r4));
    // tst r0, r1
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r5, r6, 5);
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r5, r6, 9);
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r5, r6, 7);
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r5, r6, 0x13);
    // add r0, sp, #0x10
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r5, r6, 1);
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r5, r6, 2);
    // ldr r0, [sp, #0xc]
    // strb r2, [r0, r1]
    // add r1, #0x1c
    BattleInput_SetPartyExpPercents(r6, r4, 1);
    // add r1, #0x10
    // add r2, #0x16
    BattleInput_UpdateBallGaugeAnimation(r6, r4, r4);
    BattleInput_EnableBallGauge(r6);
    NARC_Delete(r7);
    NARC_Delete(r5);
    // ldr r0, [sp, #8]
    ov12_02265D70();
    *((u8*)(r4 + 0xa)) = 5;
    // tst r0, r1
    BattleSystem_GetMaxBattlers(*((u32*)r4), *((u32*)(gSystem + 0x48)));
    BattleSystem_GetOpponentData(*((u32*)r4), r5);
    // add r0, #0x28
    ov12_02264C84();
    BattleSystem_GetMaxBattlers(*((u32*)r4));
    BattleInput_CheckTouch(r6);
    // mvn r1, r1
    *((u32*)(r4 + 0xc)) = r0;
    *((u8*)(r4 + 0xb)) = 0xa;
    PlaySE(0x000005DD, 0);
    *((u8*)(r4 + 0xa)) = 6;
    BattleInput_CheckFeedbackDone(r6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225DF66: ; jump table
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    *((u8*)(r4 + 0xa)) = 7;
    NARC_New(7, 5);
    NARC_New(8, 5);
    // str r3, [sp]
    // str r3, [sp, #4]
    BattleInput_ChangeMenu(r5, r0, r6, 0);
    BattleInput_Deadstriped_022698AC(r6, 0);
    // ldr r0, [sp, #8]
    ov12_02265D74();
    ov12_02264EB4(*((u32*)(r4 + 4)));
    // ldr r0, [sp, #0xc]
    ov12_02262014();
    NARC_Delete(r5);
    NARC_Delete(r7);
    NARC_New(7, 5);
    NARC_New(8, 5);
    // str r3, [sp]
    // str r3, [sp, #4]
    BattleInput_ChangeMenu(r5, r0, r6, 0);
    BattleInput_Deadstriped_022698AC(r6, 0);
    // ldr r0, [sp, #8]
    ov12_02265D74();
    ov12_02264EB4(*((u32*)(r4 + 4)));
    // ldr r0, [sp, #0xc]
    ov12_02262014();
    NARC_Delete(r5);
    NARC_Delete(r7);
    NARC_New(7, 5);
    NARC_New(8, 5);
    BattleInput_GetCancelRunFlag(r6);
    // ldr r0, [sp, #8]
    ov12_02265D74();
    *((u32*)(r4 + 0xc)) = 0xff;
    // str r3, [sp]
    // str r3, [sp, #4]
    BattleInput_ChangeMenu(r7, r5, r6, 0);
    NARC_Delete(r7);
    NARC_Delete(r5);
    GF_AssertFail();
    *((u8*)(r4 + 0xa)) = 8;
    BattleInput_CheckFeedbackDone(r6);
    NARC_New(7, 5);
    NARC_New(8, 5);
    // str r3, [sp]
    // str r3, [sp, #4]
    BattleInput_ChangeMenu(r5, r0, r6, 0);
    BattleInput_Deadstriped_022698AC(r6, 0);
    // ldr r0, [sp, #8]
    ov12_02265D74();
    ov12_02264EB4(*((u32*)(r4 + 4)));
    // ldr r0, [sp, #0xc]
    ov12_02262014();
    BattleInput_DisableBallGauge(r6);
    *((u8*)(r4 + 0xa)) = 8;
    NARC_Delete(r5);
    NARC_Delete(r7);
    ov12_022698B0(r6);
    ov12_02262F24(*((u32*)r4), *((u8*)(r4 + 9)), *((u32*)(r4 + 0xc)));
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 9)), *((u8*)(r4 + 8)));
    Heap_Free(r4);
    SysTask_Destroy(r7);
}




void ov12_0225E104(void) {
}




void ov12_0225E134(void) {
}




void ov12_0225E154(void) {
    ov12_0223B694(*((u32*)r1));
    BattleSystem_GetBattleContext(*((u32*)r4));
    GetBattlerVar(*((u8*)(r4 + 9)), 0, 0);
    GetMonBaseStat(((r0 << 0x10) >> 0x10), 0x1a);
    _s32_div_f((*((u8*)(ov12_0226D140 + (r5 << 1))) * r0), *((u8*)(ov12_0226D141 + (r5 << 1))), ov12_0226D141);
    BattleSystem_Random(*((u32*)r4));
    _s32_div_f(0xff);
    ov12_02262F24(*((u32*)r4), *((u8*)(r4 + 9)), 4);
    ov12_02262F24(*((u8*)(r4 + 9)), 5);
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 9)), *((u8*)(r4 + 8)));
    Heap_Free(r4);
    SysTask_Destroy(r6);
}




void ov12_0225E1D4(void) {
}




void ov12_0225E1FC(void) {
    // add r2, sp, #0
    // add r0, sp, #0
    // add r2, sp, #0
}




void ov12_0225E250(void) {
    BattleSystem_GetBgConfig(*((u32*)r1));
    BattleSystem_GetBattleInput(*((u32*)r4));
    BattleSystem_GetOpponentData(*((u32*)r4), *((u8*)(r4 + 0x1d)));
    // str r0, [sp, #0x10]
    BattleSystem_GetBattlerIdPartner(*((u32*)r4), *((u8*)(r4 + 0x1d)));
    BattleSystem_GetHpBar(*((u32*)r4), r0);
    // add r0, #0x20
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225E2A4: ; jump table
    BattleInput_CheckFeedbackDone(r7);
    BattleSystem_GetMessageLoader(*((u32*)r4));
    // add r0, sp, #0x14
    *((u8*)(r0 + 0x15)) = 2;
    // str r2, [sp, #0x2c]
    *((u16*)(r0 + 0x16)) = 0x00000399;
    // add r2, sp, #0x28
    BattleSystem_PrintBattleMessage(*((u32*)r4), r0, 0x00000399, 0);
    BattleInput_EnableBallGauge(r7);
    NARC_New(7, 5);
    // str r0, [sp, #0xc]
    NARC_New(8, 5);
    // add r5, sp, #0x14
    // str r0, [sp, #8]
    // add r1, r4, r2
    // strh r0, [r5]
    *((u8*)(r5 + 8)) = *((u8*)(r1 + 0x14));
    *((u8*)(r5 + 0xc)) = *((u8*)(r1 + 0x18));
    // add r0, sp, #0x14
    *((u8*)(*((u8*)(r1 + 0x18)) + 0x10)) = *((u8*)(r4 + 0x1e));
    // str r0, [sp]
    // add r0, sp, #0x14
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #8]
    BattleInput_ChangeMenu(0, *((u8*)(r4 + 0x1e)), r7, 0xb);
    // ldr r0, [sp, #0xc]
    NARC_Delete();
    // ldr r0, [sp, #8]
    NARC_Delete();
    // add r0, #0x20
    // add r4, #0x20
    // strb r0, [r4]
    BattleInput_CheckTouch(r7);
    // mvn r1, r1
    *((u32*)(r4 + 8)) = r0;
    PlaySE(0x000005DD, 0);
    // add r0, #0x20
    // add r4, #0x20
    // strb r0, [r4]
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    BattleInput_Deadstriped_022698AC(r7, 0);
    ov12_02265D74(r5);
    ov12_02264EB4(*((u32*)(r4 + 4)));
    // ldr r0, [sp, #0x10]
    ov12_02262014();
    BattleInput_DisableBallGauge(r7);
    ov12_02262FE0(*((u32*)r4), *((u8*)(r4 + 0x1d)), *((u32*)(r4 + 8)));
    // add r0, #0x20
    // add r4, #0x20
    // strb r0, [r4]
    // add r0, #0x20
    // add r0, #0x20
    // strb r1, [r0]
    ov12_022698B0(r7, (*((u8*)r4) + 1));
    ov12_0223BB10(*((u32*)r4), 1);
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 0x1d)), *((u8*)(r4 + 0x1c)));
    Heap_Free(r4);
    SysTask_Destroy(r6);
}




void ov12_0225E404(void) {
    // str r0, [sp, #8]
    BattleSystem_GetBattleType(*((u32*)r1));
    BattleSystem_GetBattleContext(*((u32*)r6));
    // str r0, [sp, #0xc]
    // tst r0, r4
    BattleSystem_GetBattleSpecial(*((u32*)r6));
    // tst r0, r1
    BattleSystem_GetFieldSide(*((u32*)r6), *((u8*)(r6 + 0x1d)));
    ov10_0221BEF4(*((u32*)r6), *((u8*)(r6 + 0x1d)));
    // add r5, sp, #0x10
    MaskOfFlagNo(0);
    // tst r0, r1
    // stmia r5!, {r0}
    BattleSystem_Random(*((u32*)r6), *((u16*)(r6 + 0x22)));
    _s32_div_f(r7);
    // add r0, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, r6, r3
    // ldr r1, [sp, #0xc]
    ov12_022506D4(*((u32*)r6), (r1 << 2), *((u8*)(r6 + 0x1d)), *((u16*)(((*((u32*)(r0 + (r1 << 2))) - 1) << 1) + 0xc)));
    // str r0, [sp]
    // ldr r1, [sp, #0xc]
    ov12_022582B8(*((u32*)r6), 0xb, *((u8*)(r6 + 0x1d)));
    ov12_02262FE0(*((u32*)r6), *((u8*)(r6 + 0x1d)), r4);
    ov12_0226430C(*((u32*)r6), *((u8*)(r6 + 0x1d)), *((u8*)(r6 + 0x1c)));
    Heap_Free(r6);
    // ldr r0, [sp, #8]
    SysTask_Destroy();
}




void ov12_0225E4CC(void) {
}




void ov12_0225E4EC(void) {
    // add r2, sp, #0
    ov12_0223BE0C(*((u32*)r1), *((u8*)(r1 + 0x1d)));
    ov12_02261ED4(*((u32*)r5));
    // add r0, sp, #0
    ov12_02261EB8(*((u32*)r5));
    BattleSystem_GetBattleContext(*((u32*)r5));
    GetBattlerVar(*((u8*)(r5 + 0x1d)), (r4 + 5), 0);
    ov12_02261EB8(*((u32*)r5), ((r0 << 0x10) >> 0x10));
    // add r2, sp, #0
    ov12_02262FE0(*((u32*)r5), *((u8*)(r5 + 0x1d)), *((u8*)r2));
    ov12_0226430C(*((u32*)r5), *((u8*)(r5 + 0x1d)), *((u8*)(r5 + 0x1c)));
    Heap_Free(r5);
    SysTask_Destroy(r6);
}




void ov12_0225E568(void) {
    // str r0, [sp, #8]
    BattleSystem_GetBgConfig(*((u32*)r1));
    BattleSystem_GetOpponentData(*((u32*)r4), *((u8*)(r4 + 0xd)));
    BattleSystem_GetBattleInput(*((u32*)r4));
    BattleSystem_GetBattlerIdPartner(*((u32*)r4), *((u8*)(r4 + 0xd)));
    BattleSystem_GetHpBar(*((u32*)r4), r0);
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225E5B6: ; jump table
    BattleInput_CheckFeedbackDone(r5, (*((u16*)(r1 + 6)) << 0x10));
    NARC_New(7, 5);
    NARC_New(8, 5);
    // add r2, sp, #0x10
    // add r2, #2
    // strh r3, [r2]
    *((u16*)(r2 + 2)) = *((u16*)(r4 + 0x12));
    *((u16*)(r2 + 4)) = *((u16*)(r4 + 0x14));
    // add r1, #8
    *((u16*)(r2 + 6)) = *((u16*)(r4 + 0x16));
    // add r2, #8
    // add r0, sp, #0x30
    // add r0, #2
    // strb r1, [r0]
    ov12_02266C84(*((u16*)(r4 + 0x30)), *((u8*)(r4 + 0xe)), *((u16*)(r4 + 0x16)));
    // add r1, sp, #0x30
    // add r1, #2
    *((u8*)(r1 + 1)) = r0;
    // str r0, [sp]
    // add r0, sp, #0x10
    // add r0, #2
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r6, r5, 0xc);
    NARC_Delete(r7);
    NARC_Delete(r6);
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) + 1);
    BattleInput_CheckTouch(r5);
    // mvn r1, r1
    *((u32*)(r4 + 8)) = r0;
    PlaySE(0x000005DD, 0);
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) + 1);
    ov12_02264EB4(*((u32*)(r4 + 4)));
    ov12_02262014(r7);
    ov12_02265D74(r6);
    // add r0, #0x32
    BattleInput_Deadstriped_022698AC(r5, 0);
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) + 1);
    *((u8*)(r4 + 0xf)) = ((*((u8*)(r4 + 0xf)) + 1) + 1);
    ov12_022698B0(r5);
    BattleSystem_GetBattleType(*((u32*)r4));
    // add r1, sp, #0xc
    ov12_0223C1A0(*((u32*)r4));
    // tst r0, r6
    // add r0, sp, #0xc
    // add r0, sp, #0xc
    ov12_0226311C(*((u32*)r4), *((u8*)(r4 + 0xd)), (*((u8*)(*((u8*)(*((u32*)(r4 + 8)) + (*((u32*)(r4 + 8)) + 1))) + (*((u8*)(*((u32*)(r4 + 8)) + (*((u32*)(r4 + 8)) + 1))) - 1))) + 1));
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0xc)));
    Heap_Free(r4);
    // ldr r0, [sp, #8]
    SysTask_Destroy();
}




void ov12_0225E6FC(void) {
}




void ov12_0225E740(void) {
}




void ov12_0225E760(void) {
    // add r2, sp, #0
    // add r0, sp, #0
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225E7AE: ; jump table
    // add r2, sp, #0
}




void ov12_0225E830(void) {
    BattleSystem_GetPaletteData(*((u32*)r1));
    _0225F376(*((u8*)(r4 + 0xe)));
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225E858: ; jump table
    BattleSystem_GetBattleInput(*((u32*)r4), (*((u16*)(r1 + 6)) << 0x10));
    BattleInput_GetKeyPressed();
    *((u8*)(r4 + 0x10)) = r0;
    BattleSystem_GetMessageIcon(*((u32*)r4));
    sub_0201649C(1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // sub r3, #0xd
    PaletteData_BeginPaletteFade(r5, 5, (3 << 0xa), 5);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // sub r3, #0x12
    PaletteData_BeginPaletteFade(r5, 0xa, 0x0000FFFF, 0xa);
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    PaletteData_GetSelectedBuffersBitmask((*((u8*)(r4 + 0xe)) + 1));
    ov12_02237B0C(*((u32*)r4));
    Heap_Alloc(5, 0x34);
    *((u32*)(r4 + 4)) = r0;
    memset(0, 0x34);
    // str r1, [r0]
    BattleSystem_GetPlayerProfile(*((u32*)r4), *((u8*)(r4 + 0xd)));
    *((u32*)(*((u32*)(r4 + 4)) + 4)) = r0;
    *((u32*)(*((u32*)(r4 + 4)) + 0xc)) = 5;
    // add r0, #0x26
    // strb r1, [r0]
    BattleSystem_GetBag(*((u32*)r4), 0);
    *((u32*)(*((u32*)(r4 + 4)) + 8)) = r0;
    *((u32*)(*((u32*)(r4 + 4)) + 0x10)) = *((u8*)(r4 + 0xd));
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, #0x22
    // strb r1, [r0]
    // add r0, #0x23
    // strb r1, [r0]
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, r4, r0
    // add r0, #0x30
    *((u32*)(*((u32*)(r4 + 4)) + 0x18)) = *((u8*)*((u8*)(r4 + 0xd)));
    ov08_022225D4(*((u32*)(r4 + 4)), *((u8*)*((u8*)(r4 + 0xd))));
    *((u8*)(r4 + 0xe)) = 3;
    // add r0, #0x25
    // strb r1, [r0]
    ov08_022225D4(*((u32*)(r4 + 4)), *((u8*)(r4 + 0x10)));
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // add r0, #0x26
    // add r1, #0x26
    // strb r0, [r1]
    // add r0, #0x25
    *((u8*)(r4 + 0x10)) = *((u8*)*((u32*)(r4 + 4)));
    _0225F376(*((u8*)(*((u32*)(r4 + 4)) + 0x1e)), *((u32*)(r4 + 4)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225E9C4: ; jump table
    *((u8*)(r4 + 0xe)) = 4;
    *((u8*)(r4 + 0xe)) = 6;
    *((u8*)(r4 + 0xe)) = 6;
    BattleSystem_GetParty(*((u32*)r4), *((u8*)(r4 + 0xd)));
    // str r0, [sp, #0x14]
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    BattleSystem_GetBattleType(*((u32*)r4), 2);
    // tst r0, r1
    // and r7, r0
    Party_InitWithMaxSize(*((u32*)*((u32*)(*((u32*)(r4 + 8)) + 4))), 6);
    // ldr r0, [sp, #0x14]
    Party_GetCount();
    // add r5, r4, r0
    BattleSystem_GetPartyMon(*((u32*)r4), r7, *((u8*)(r5 + 0x18)));
    Party_AddMon(*((u32*)*((u32*)(*((u32*)(r4 + 8)) + 4))), r0);
    // add r1, r1, r6
    // add r1, #0x2c
    // strb r0, [r1]
    // ldr r0, [sp, #0x14]
    Party_GetCount(*((u8*)(r5 + 0x18)), *((u32*)(*((u32*)(r4 + 8)) + 4)));
    *((u32*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 8)) = *((u32*)r4);
    *((u32*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0xc)) = 5;
    *((u8*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x11)) = 0;
    // add r1, #0x36
    // strb r0, [r1]
    *((u16*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x24)) = 0;
    // add r0, #0x35
    // strb r1, [r0]
    *((u16*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x22)) = *((u16*)(*((u32*)(r4 + 4)) + 0x1c));
    // add r0, #0x33
    // strb r1, [r0]
    *((u32*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x28)) = *((u32*)(*((u32*)(r4 + 4)) + 0x10));
    // add r0, #0x32
    // strb r1, [r0]
    // add r0, r2, r0
    *((u8*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x14)) = *((u8*)(*((u8*)(r4 + 0xd)) + 0xc));
    BattleSystem_GetBattlerIdPartner(*((u32*)r4), *((u8*)(r4 + 0xd)), *((u32*)(r4 + 8)));
    // add r0, r5, r0
    *((u8*)(*((u32*)(r5 + 4)) + 0x15)) = *((u8*)(r0 + 0xc));
    BattleSystem_GetBattlerIdPartner(*((u32*)r4), *((u8*)(r4 + 0xd)));
    // add r0, r4, r0
    // add r0, #0x30
    *((u32*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x18)) = *((u8*)r0);
    // add r0, r4, r0
    // add r0, #0x30
    *((u32*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x18)) = *((u8*)*((u8*)(r4 + 0xd)));
    BattleSystem_GetBattlerIdPartner(*((u32*)r4), *((u8*)(r4 + 0xd)));
    // add r0, r4, r0
    // add r0, #0x30
    *((u32*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x1c)) = *((u8*)r0);
    ov10_0221BE20(*((u32*)(*((u32*)(r4 + 8)) + 4)), *((u8*)r0));
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // add r0, #0x36
    // add r1, #0x32
    *((u8*)(r4 + 0x10)) = *((u8*)*((u32*)(*((u32*)(r4 + 8)) + 4)));
    // add r0, #0x36
    // strb r1, [r0]
    *((u8*)(r4 + 0xe)) = 2;
    *((u8*)(r4 + 0xe)) = 6;
    ov12_02237BB8(*((u32*)r4), 0);
    BattleSystem_GetBattleInput(*((u32*)r4));
    BattleInput_SetKeyPressed(*((u8*)(r4 + 0x10)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, #0xd
    PaletteData_BeginPaletteFade(r5, 5, (3 << 0xa), 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, #0x12
    PaletteData_BeginPaletteFade(r5, 0xa, 0x0000FFFF, 0xa);
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    PaletteData_GetSelectedBuffersBitmask((*((u8*)(r4 + 0xe)) + 1));
    BattleSystem_GetMessageIcon(*((u32*)r4));
    sub_0201649C(0);
    *((u8*)(r4 + 0xe)) = 9;
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225EBF8: ; jump table
    // add r0, r1, r0
    *((u8*)(r4 + 0xe)) = 8;
    BattleSystem_GetBattleType(*((u32*)r4), *((u16*)(*((u32*)(r4 + 4)) + 0x1c)));
    BattleSystem_GetBattleType(*((u32*)r4));
    BattleSystem_AreBattleAnimationsOn(*((u32*)r4));
    *((u16*)(r4 + 0x12)) = 0x11;
    // mvn r1, r1
    sub_0200602C(0x000005EC, 0x74);
    *((u16*)(r4 + 0x12)) = 0x15;
    BattleSystem_AreBattleAnimationsOn(0x15);
    *((u16*)(r4 + 0x12)) = 0x19;
    // mvn r1, r1
    sub_0200602C(0x000005EC, 0x74);
    *((u16*)(r4 + 0x12)) = 0x1d;
    *((u8*)(r4 + 0xe)) = 8;
    BattleSystem_GetBattleType(*((u32*)r4));
    BattleSystem_GetBattleType(*((u32*)r4));
    GetItemAttr(*((u16*)(*((u32*)(r4 + 4)) + 0x1c)), 0x26, 5);
    BattleSystem_AreBattleAnimationsOn(*((u32*)r4));
    *((u16*)(r4 + 0x12)) = 0x11;
    // mvn r1, r1
    sub_0200602C(0x000005EC, 0x74);
    *((u16*)(r4 + 0x12)) = 0x15;
    *((u8*)(r4 + 0xe)) = 8;
    // add r0, r1, r0
    *((u8*)(r4 + 0xe)) = 8;
    BattleSystem_AreBattleAnimationsOn(*((u32*)r4), *((u16*)(8 + 0x1c)));
    *((u16*)(r4 + 0x12)) = 0xd;
    // mvn r1, r1
    sub_0200602C(0x000005EC, 0x74);
    *((u16*)(r4 + 0x12)) = 0xf;
    BattleSystem_AreBattleAnimationsOn(0xf);
    *((u16*)(r4 + 0x12)) = 0xb;
    // mvn r1, r1
    sub_0200602C(0x000005EC, 0x74);
    *((u16*)(r4 + 0x12)) = 0xf;
    *((u8*)(r4 + 0xe)) = 8;
    *((u8*)(r4 + 0xe)) = 8;
    ov12_02237ED0(*((u32*)r4), 0);
    // add r0, sp, #0x1c
    // strh r1, [r0]
    // add r1, sp, #0x1c
    // strh r0, [r1]
    *((u8*)(0xff + 2)) = *((u8*)(*((u32*)(r4 + 4)) + 0x1e));
    // add r0, r2, r0
    // add r0, #0x2c
    *((u8*)(0xff + 3)) = (*((u8*)*((u8*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x11))) + 1);
    // add r3, sp, #0x1c
    // mov r2, sp
    // strh r5, [r2]
    *((u16*)((*((u32*)(*((u32*)(r4 + 8)) + 4)) - 4) + 2)) = *((u16*)(r3 + 2));
    ov12_022632C0(*((u32*)r4), *((u8*)(r4 + 0xd)), *((u32*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) - 4)), *((u16*)(r3 + 2)));
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0xc)));
    Heap_Free(*((u32*)*((u32*)(*((u32*)(r4 + 8)) + 4))));
    Heap_Free(*((u32*)(*((u32*)(r4 + 8)) + 4)));
    Heap_Free(*((u32*)(r4 + 8)));
    Heap_Free(*((u32*)(r4 + 4)));
    Heap_Free(r4);
    SysTask_Destroy(r7);
    // add r0, sp, #0x8c
    *((u16*)(r0 + 2)) = 0x000004B6;
    *((u8*)(r0 + 1)) = 5;
    // str r0, [sp, #0x90]
    BattleSystem_GetMessageLoader(*((u32*)r4), 5);
    BattleSystem_GetTextFrameDelay(*((u32*)r4));
    // add r2, sp, #0x8c
    BattleSystem_PrintBattleMessage(*((u32*)r4), r5, r0);
    *((u8*)(r4 + 0x11)) = r0;
    *((u8*)(r4 + 0x17)) = 0x1e;
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    TextPrinterCheckActive(*((u8*)(r4 + 0x11)));
    *((u8*)(r4 + 0x17)) = (*((u8*)(r4 + 0x17)) - 1);
    *((u8*)(r4 + 0xe)) = *((u16*)(r4 + 0x12));
    // add r2, sp, #0x1b8
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    BattleSystem_GetOpponentData(*((u32*)r4), *((u8*)(r4 + 0xd)));
    ov12_0223A8DC(*((u32*)r4));
    // add r3, sp, #0x1b8
    ov12_02261B80(*((u32*)r4), r5, r0);
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // add r2, sp, #0x160
    // str r0, [sp]
    // str r5, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    BattleSystem_GetOpponentData(*((u32*)r4), r5);
    ov12_0223A8DC(*((u32*)r4));
    // add r3, sp, #0x160
    ov12_02261B80(*((u32*)r4), r5, r0);
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // add r2, sp, #0x108
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 0);
    BattleSystem_GetOpponentData(*((u32*)r4), *((u8*)(r4 + 0xd)));
    ov12_0223A8DC(*((u32*)r4));
    // add r3, sp, #0x108
    ov12_02261B80(*((u32*)r4), r5, r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 0);
    BattleSystem_GetOpponentData(*((u32*)r4), *((u8*)(r4 + 0xd)));
    ov12_0223A8DC(*((u32*)r4));
    // add r3, sp, #0x108
    ov12_02261B80(*((u32*)r4), r5, r0);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    BattleSystem_GetOpponentData(*((u32*)r4), *((u8*)(r4 + 0xd)));
    ov12_0223A8DC(*((u32*)r4));
    // add r3, sp, #0x108
    ov12_02261B80(*((u32*)r4), r5, r0);
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // add r0, sp, #0x68
    *((u16*)((*((u8*)(r4 + 0xe)) + 1) + 2)) = 0x000004B3;
    *((u8*)((*((u8*)(r4 + 0xe)) + 1) + 1)) = 0xc;
    // add r3, r3, r1
    // str r1, [sp, #0x6c]
    // sub r1, #0x37
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225EFB8: ; jump table
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x70]
    *((u16*)(5 + 2)) = (0x000004B3 + 1);
    *((u8*)(5 + 1)) = 0;
    *((u16*)(5 + 2)) = (0x000004B3 + 2);
    *((u8*)(5 + 1)) = 2;
    BattleSystem_GetMessageLoader(*((u32*)r4), 2, 0x000004B3, (*((u8*)(*((u32*)(r4 + 8)) + 0xc)) << 8));
    BattleSystem_GetTextFrameDelay(*((u32*)r4));
    // add r2, sp, #0x68
    BattleSystem_PrintBattleMessage(*((u32*)r4), r5, r0);
    *((u8*)(r4 + 0x11)) = r0;
    *((u8*)(r4 + 0x17)) = 0x1e;
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // add r2, sp, #0xb0
    // str r0, [sp]
    // str r5, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    BattleSystem_GetOpponentData(*((u32*)r4), r5);
    ov12_0223A8DC(*((u32*)r4));
    // add r3, sp, #0xb0
    ov12_02261B80(*((u32*)r4), r5, r0);
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // add r0, r1, r0
    // add r0, #0x2c
    BattleSystem_GetHpBar(*((u32*)r4), (*((u8*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x11)) << 1));
    MI_CpuFill8(0, 1);
    ov12_0223AB0C(*((u32*)r4), r6);
    // str r0, [sp, #0x18]
    BattleSystem_GetBattleType(*((u32*)r4));
    // ldr r0, [sp, #0x18]
    BattleHpBar_Util_GetBarTypeFromBattlerSide(r0);
    // add r1, #0x25
    // strb r0, [r1]
    BattleSystem_GetPartyMon(*((u32*)r4), r6, r7);
    GetMonData(0xa3, 0);
    // sub r0, r0, r1
    *((u32*)(r5 + 0x28)) = r0;
    GetMonData(r6, 0xa4, 0);
    *((u32*)(r5 + 0x2c)) = r0;
    *((u32*)(r5 + 0x30)) = *((u16*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x20));
    GetMonData(r6, 0xa0, 0);
    // add r0, #0x4a
    // strb r1, [r0]
    ov12_02264DCC(r5, *((u32*)(r5 + 0x30)));
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    BattleSystem_GetHpBar(*((u32*)r4), (*((u8*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x11)) << 1));
    ov12_02264E00();
    // mvn r1, r1
    ov12_0226498C(r5, 0, (1 << 8));
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    BattleSystem_GetMessageLoader(*((u32*)r4));
    // add r1, sp, #0x1c
    *((u16*)(*((u16*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x20)) + 0x2a)) = 0x000004BE;
    // add r1, sp, #0x44
    *((u8*)(*((u16*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x20)) + 1)) = 0x11;
    // add r1, r1, r0
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    *((u16*)((*((u8*)(*((u32*)(r4 + 8)) + 0xc)) << 8) + 0x2a)) = 0x000004E2;
    // add r1, sp, #0x44
    *((u8*)((*((u8*)(*((u32*)(r4 + 8)) + 0xc)) << 8) + 1)) = 2;
    // add r1, r1, r0
    // str r0, [sp, #0x48]
    BattleSystem_GetTextFrameDelay(*((u32*)r4), (*((u8*)(*((u32*)(r4 + 8)) + 0xc)) << 8), 2);
    // add r2, sp, #0x44
    BattleSystem_PrintBattleMessage(*((u32*)r4), r5, r0);
    *((u8*)(r4 + 0x11)) = r0;
    *((u8*)(r4 + 0x17)) = 0x1e;
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    BattleSystem_GetHpBar(*((u32*)r4), (*((u8*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x11)) << 1));
    // str r0, [sp, #0x10]
    // add r2, r3, r2
    // add r2, #0x2c
    BattleSystem_GetPartyMon(*((u32*)r4), r7, *((u8*)*((u8*)(*((u32*)(*((u32*)(r4 + 8)) + 4)) + 0x11))), *((u32*)(*((u32*)(r4 + 8)) + 4)));
    GetMonData(0xa0, r5);
    // ldr r0, [sp, #0x10]
    // add r0, #0x4a
    // strb r1, [r0]
    // ldr r0, [sp, #0x10]
    ov12_0226498C(*((u32*)(r0 + 0x28)), (1 << 8));
    // add r0, sp, #0x1c
    *((u8*)(r0 + 5)) = 2;
    // add r0, r0, r7
    // str r0, [sp, #0x24]
    GetItemAttr(*((u16*)(*((u32*)(r4 + 4)) + 0x1c)), 0xf, 5);
    GetItemAttr(*((u16*)(*((u32*)(r4 + 4)) + 0x1c)), 0x10, 5);
    GetItemAttr(*((u16*)(*((u32*)(r4 + 4)) + 0x1c)), 0x11, 5);
    GetItemAttr(*((u16*)(*((u32*)(r4 + 4)) + 0x1c)), 0x12, 5);
    GetItemAttr(*((u16*)(*((u32*)(r4 + 4)) + 0x1c)), 0x13, 5);
    GetItemAttr(*((u16*)(*((u32*)(r4 + 4)) + 0x1c)), 0x14, 5);
    GetItemAttr(*((u16*)(*((u32*)(r4 + 4)) + 0x1c)), 0x15, 5);
    // add r0, sp, #0x1c
    *((u16*)(r0 + 6)) = 0x000004CD;
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225F2B6: ; jump table
    // add r0, sp, #0x1c
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 6)) = 0x000004BA;
    // add r0, sp, #0x1c
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 6)) = 0x000004B7;
    // add r0, sp, #0x1c
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 6)) = 0x000004B9;
    // add r0, sp, #0x1c
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 6)) = 0x000004BB;
    // add r0, sp, #0x1c
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 6)) = 0x000004B8;
    // add r0, sp, #0x1c
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 6)) = 0x000004BC;
    // add r0, sp, #0x1c
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 6)) = 0x000004BD;
    BattleSystem_GetMessageLoader(*((u32*)r4), 0x000004BD);
    BattleSystem_GetTextFrameDelay(*((u32*)r4));
    // add r2, sp, #0x20
    BattleSystem_PrintBattleMessage(*((u32*)r4), r5, r0);
    *((u8*)(r4 + 0x11)) = r0;
    *((u8*)(r4 + 0x17)) = 0x1e;
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    ov12_0223A8DC(*((u32*)r4));
    ov07_0221C394();
    ov12_0223A8DC(*((u32*)r4));
    ov07_0221C3B0();
    ov12_0223A8DC(*((u32*)r4));
    ov07_0221C3C0();
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    TextPrinterCheckActive(*((u8*)(r4 + 0x11)));
    *((u8*)(r4 + 0x17)) = (*((u8*)(r4 + 0x17)) - 1);
    ov12_02237ED0(*((u32*)r4), 1);
    *((u8*)(r4 + 0xe)) = 8;
}




void ov12_0225F3A4(void) {
    // add r3, sp, #0
    // strh r0, [r3]
    // mov r2, sp
    // strh r6, [r2]
}




void ov12_0225F3FC(void) {
}




void ov12_0225F434(void) {
    // add r2, sp, #0
    // add r0, sp, #0
    // add r2, sp, #0
    // add r0, sp, #0
    // add r2, sp, #0
    // add r3, sp, #0
    // mov r2, sp
    // and r0, r1
    // strh r6, [r2]
}




void ov12_0225F4E0(void) {
    BattleSystem_GetPaletteData(*((u32*)r1));
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225F502: ; jump table
    BattleSystem_GetWindow(*((u32*)r4), 0);
    FillWindowPixelBuffer(0xff);
    CopyWindowPixelsToVram_TextMode(r6);
    BattleSystem_GetBattleInput(*((u32*)r4));
    BattleInput_GetKeyPressed();
    *((u8*)(r4 + 0x17)) = r0;
    BattleSystem_GetMessageIcon(*((u32*)r4));
    sub_0201649C(1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // sub r3, #0xd
    PaletteData_BeginPaletteFade(r5, 5, (3 << 0xa), 5);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // sub r3, #0x12
    PaletteData_BeginPaletteFade(r5, 0xa, 0x0000FFFF, 0xa);
    *((u8*)(r4 + 0xa)) = (*((u8*)(r4 + 0xa)) + 1);
    PaletteData_GetSelectedBuffersBitmask((*((u8*)(r4 + 0xa)) + 1));
    ov12_02237B0C(*((u32*)r4));
    Heap_Alloc(5, 0x38);
    *((u32*)(r4 + 4)) = r0;
    SaveArray_Party_Alloc(5);
    // str r0, [r1]
    BattleSystem_GetBattleType(*((u32*)r4), *((u32*)(r4 + 4)));
    // and r0, r1
    BattleSystem_GetBattleType(*((u32*)r4), 0xc);
    ov12_0223AB0C(*((u32*)r4), *((u8*)(r4 + 9)));
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    BattleSystem_GetBattlerIdPartner(*((u32*)r4));
    // str r0, [sp, #0x14]
    BattleSystem_GetBattlerIdPartner(*((u32*)r4), *((u8*)(r4 + 9)));
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    AllocMonZeroed(5);
    Party_AddMon(*((u32*)*((u32*)(r4 + 4))), r0);
    Heap_Free(r6);
    // ldr r1, [sp, #0x18]
    BattleSystem_GetPartySize(*((u32*)r4));
    // ldr r0, [sp, #0x18]
    // add r5, r4, r1
    // ldr r1, [sp, #0x18]
    BattleSystem_GetPartyMon(*((u32*)r4), (6 * r0), *((u8*)(r5 + 0x1c)));
    // str r0, [sp, #0x1c]
    Party_GetMonByIndex(*((u32*)*((u32*)(r4 + 4))), r6);
    // ldr r0, [sp, #0x1c]
    CopyPokemonToPokemon(r0);
    // add r0, r0, r6
    // add r0, #0x2c
    // strb r1, [r0]
    // ldr r1, [sp, #0x18]
    BattleSystem_GetPartySize(*((u32*)r4), *((u8*)(r5 + 0x1c)));
    // ldr r1, [sp, #0x14]
    BattleSystem_GetPartySize(*((u32*)r4));
    // ldr r0, [sp, #0x14]
    // add r5, r4, r1
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    BattleSystem_GetPartyMon(*((u32*)r4), (6 * r0), *((u8*)(r5 + 0x1c)));
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0xc]
    Party_GetMonByIndex(*((u32*)*((u32*)(r4 + 4))));
    // ldr r0, [sp, #0x20]
    CopyPokemonToPokemon(r0);
    // add r0, r0, r7
    // add r0, #0x2d
    // strb r1, [r0]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #0xc]
    BattleSystem_GetPartySize(*((u32*)r4), *((u8*)(r5 + 0x1c)));
    ov12_0223AB0C(*((u32*)r4), *((u8*)(r4 + 9)));
    *((u8*)(*((u32*)(r4 + 4)) + 0x11)) = 1;
    *((u8*)(*((u32*)(r4 + 4)) + 0x11)) = 0;
    BattleSystem_GetBattleType(*((u32*)r4), 0);
    // tst r0, r1
    BattleSystem_GetBattleType(*((u32*)r4), 2);
    // tst r0, r1
    // and r7, r0
    ov12_0223AB0C(*((u32*)r4), *((u8*)(r4 + 9)));
    *((u8*)(*((u32*)(r4 + 4)) + 0x11)) = 0;
    BattleSystem_GetParty(*((u32*)r4), *((u8*)(r4 + 9)));
    // str r0, [sp, #0x10]
    Party_GetCount();
    // add r5, r4, r0
    BattleSystem_GetPartyMon(*((u32*)r4), r7, *((u8*)(r5 + 0x1c)));
    Party_AddMon(*((u32*)*((u32*)(r4 + 4))), r0);
    // add r0, r0, r6
    // add r0, #0x2c
    // strb r1, [r0]
    // ldr r0, [sp, #0x10]
    Party_GetCount(*((u32*)(r4 + 4)), *((u8*)(r5 + 0x1c)));
    *((u32*)(*((u32*)(r4 + 4)) + 8)) = *((u32*)r4);
    *((u32*)(*((u32*)(r4 + 4)) + 0xc)) = 5;
    // add r0, #0x36
    // strb r1, [r0]
    *((u16*)(*((u32*)(r4 + 4)) + 0x24)) = *((u32*)(r4 + 0x10));
    *((u8*)(*((u32*)(r4 + 4)) + 0x12)) = *((u8*)(r4 + 0x16));
    // add r0, #0x35
    // strb r1, [r0]
    *((u16*)(*((u32*)(r4 + 4)) + 0x22)) = *((u16*)(r4 + 0x14));
    *((u32*)(*((u32*)(r4 + 4)) + 0x28)) = *((u8*)(r4 + 9));
    // add r0, #0x32
    // strb r1, [r0]
    MaskOfFlagNo(*((u8*)(r4 + 9)), *((u8*)(r4 + 0x17)));
    // tst r0, r1
    // add r0, r4, r0
    *((u8*)(*((u32*)(r4 + 4)) + 0x14)) = 6;
    BattleSystem_GetBattleType(*((u32*)r4), 6);
    // tst r0, r1
    *((u8*)(*((u32*)(r4 + 4)) + 0x15)) = 6;
    BattleSystem_GetBattlerIdPartner(*((u32*)r4), *((u8*)(r4 + 9)));
    MaskOfFlagNo();
    // tst r0, r1
    BattleSystem_GetBattlerIdPartner(*((u32*)r4), *((u8*)(r4 + 9)));
    // add r0, r4, r0
    *((u8*)(*((u32*)(r4 + 4)) + 0x15)) = *((u8*)(r0 + 0xc));
    *((u8*)(*((u32*)(r4 + 4)) + 0x15)) = 6;
    ov10_0221BE20(*((u32*)(r4 + 4)), 6);
    *((u8*)(r4 + 0xa)) = (*((u8*)(r4 + 0xa)) + 1);
    // add r0, #0x36
    ov12_02237BB8(*((u32*)r4));
    BattleSystem_GetBattleInput(*((u32*)r4));
    // add r1, #0x32
    BattleInput_SetKeyPressed(*((u8*)*((u32*)(r4 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, #0xd
    PaletteData_BeginPaletteFade(r5, 5, (3 << 0xa), 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, #0x12
    PaletteData_BeginPaletteFade(r5, 0xa, 0x0000FFFF, 0xa);
    *((u8*)(r4 + 0xa)) = (*((u8*)(r4 + 0xa)) + 1);
    PaletteData_GetSelectedBuffersBitmask((*((u8*)(r4 + 0xa)) + 1));
    BattleSystem_GetMessageIcon(*((u32*)r4));
    sub_0201649C(0);
    ov12_02263360(*((u32*)r4), *((u8*)(r4 + 9)), 0xff, *((u32*)(r4 + 4)));
    // add r2, r3, r2
    // add r2, #0x2c
    ov12_02263360(*((u8*)(r4 + 9)), (*((u8*)r2) + 1));
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 9)), *((u8*)(r4 + 8)));
    Heap_Free(*((u32*)*((u32*)(r4 + 4))));
    Heap_Free(*((u32*)(r4 + 4)));
    Heap_Free(r4);
    SysTask_Destroy(r6);
}




void ov12_0225F8AC(void) {
    // str r0, [sp]
    // tst r1, r0
    // tst r0, r1
    // str r6, [sp, #4]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r7, r5, r6
    // add r6, r5, r0
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
}




void ov12_0225F960(void) {
}




void ov12_0225F980(void) {
    // add r2, sp, #0
    ov12_0223BE0C(*((u32*)r1), *((u8*)(r1 + 9)));
    ov12_02261ED4(*((u32*)r4));
    // add r0, sp, #0
    ov12_02261EB8(*((u32*)r4));
    BattleSystem_GetParty(*((u32*)r4), *((u8*)(r4 + 9)));
    // add r1, r4, r1
    ov12_02261EB8(*((u32*)r4), *((u8*)(r4 + 0x16)));
    // add r1, sp, #0
    Party_GetCount();
    ov12_02261EB8(*((u32*)r4));
    BattleSystem_GetPartyMon(*((u8*)(r4 + 9)), (r5 - 1));
    GetMonData(0xa3, 0);
    ov12_02261EB8(*((u32*)r4));
    GetMonData(r5, 0xae, 0);
    ov12_02261EB8(*((u32*)r4), 0x000001EE);
    // add r2, sp, #0
    ov12_02263360(*((u32*)r4), *((u8*)(r4 + 9)), *((u8*)r2));
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 9)), *((u8*)(r4 + 8)));
    Heap_Free(r4);
    SysTask_Destroy(r6);
}




void ov12_0225FA44(void) {
    BattleSystem_GetBgConfig(*((u32*)r1));
    BattleSystem_GetBattleInput(*((u32*)r4));
    BattleSystem_GetOpponentData(*((u32*)r4), *((u8*)(r4 + 0xd)));
    // str r0, [sp, #0xc]
    BattleSystem_GetBattlerIdPartner(*((u32*)r4), *((u8*)(r4 + 0xd)));
    BattleSystem_GetHpBar(*((u32*)r4), r0);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225FA92: ; jump table
    BattleInput_CheckFeedbackDone(r5);
    BattleSystem_GetMessageLoader(*((u32*)r4));
    // add r0, sp, #0x10
    *((u8*)(*((u8*)(r4 + 0xf)) + 5)) = 0x82;
    // str r0, [sp, #0x18]
    *((u8*)(*((u32*)(r4 + 0x14)) + 5)) = 0;
    // add r0, sp, #0x10
    *((u16*)(*((u32*)(r4 + 0x14)) + 6)) = *((u32*)(r4 + 0x10));
    BattleSystem_GetTextFrameDelay(*((u32*)r4), *((u32*)(r4 + 0x10)));
    // add r2, sp, #0x14
    BattleSystem_PrintBattleMessage(*((u32*)r4), r5, r0);
    *((u16*)(r4 + 0x1a)) = r0;
    *((u8*)(r4 + 0xe)) = 1;
    TextPrinterCheckActive(((*((u16*)(r4 + 0x1a)) << 0x18) >> 0x18));
    NARC_New(7, 5);
    NARC_New(8, 5);
    BattleInput_DisableBallGauge(r5);
    // add r0, sp, #0x10
    // strh r1, [r0]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225FB34: ; jump table
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r6, r5, 0xd);
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r6, r5, 0xe);
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r6, r5, 0xf);
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r6, r5, 0x10);
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r7, r6, r5, 0x11);
    GF_AssertFail();
    *((u8*)(r4 + 0xe)) = 2;
    NARC_Delete(r7);
    NARC_Delete(r6);
    BattleInput_CheckTouch(r5);
    // mvn r1, r1
    *((u32*)(r4 + 8)) = r0;
    PlaySE(0x000005DD, 0);
    *((u8*)(r4 + 0xe)) = 3;
    BattleInput_CheckFeedbackDone(r5);
    NARC_New(7, 5);
    // str r0, [sp, #8]
    NARC_New(8, 5);
    ov12_02264EB4(*((u32*)(r4 + 4)));
    // ldr r0, [sp, #0xc]
    ov12_02262014();
    ov12_02265D74(r7);
    BattleInput_DisableBallGauge(r5);
    // str r3, [sp]
    // ldr r0, [sp, #8]
    // str r3, [sp, #4]
    BattleInput_ChangeMenu(r6, r5, 0);
    BattleInput_Deadstriped_022698AC(r5, 0);
    *((u8*)(r4 + 0xe)) = 4;
    // ldr r0, [sp, #8]
    NARC_Delete(4);
    NARC_Delete(r6);
    ov12_022698B0(r5);
    ov12_02262F24(*((u32*)r4), *((u8*)(r4 + 0xd)), *((u32*)(r4 + 8)));
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0xc)));
    Heap_Free(r4);
    SysTask_Destroy(r6);
}




void ov12_0225FC80(void) {
}




void ov12_0225FCA0(void) {
}




void ov12_0225FCC0(void) {
    // add r2, sp, #0
    // add r0, sp, #0
    // add r2, sp, #0
}




void ov12_0225FD14(void) {
    // add r0, #0x6a
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225FD36: ; jump table
    // add r0, #0x69
    // add r2, sp, #0x1b8
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, sp, #0x1b8
    // add r4, #0x6a
    // strb r0, [r4]
    // add r4, #0x6a
    // strb r0, [r4]
    // add r3, #0x69
    // add r1, #0x10
    // add r2, sp, #0x168
    // add r0, sp, #0x168
    // add r0, #0x69
    // add r2, sp, #0x110
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, sp, #0x110
    // str r2, [r1, r0]
    // add r0, #0x6a
    // add r4, #0x6a
    // strb r0, [r4]
    // add r0, #0x6b
    // add r0, #0x6c
    // add r3, #0x10
    // add r0, #0x6a
    // add r4, #0x6a
    // strb r0, [r4]
    // add r0, #0x6b
    // add r0, #0x6c
    // add r0, #0x69
    // add r2, sp, #0xb8
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, sp, #0xb8
    // add r4, #0x6a
    // strb r0, [r4]
    // add r4, #0x6a
    // strb r0, [r4]
    // add r3, #0x69
    // add r1, #0x10
    // add r2, sp, #0x68
    // add r0, sp, #0x68
    // add r0, #0x69
    // add r2, sp, #0x10
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, sp, #0x10
    // str r2, [r1, r0]
    // add r0, #0x6a
    // add r4, #0x6a
    // strb r0, [r4]
    // add r1, #0x69
    // add r2, #0x68
    // add r0, #0x6a
    // add r4, #0x6a
    // strb r0, [r4]
}




void ov12_0225FF80(void) {
    // eor r2, r3
}




void ov12_0225FFDC(void) {
    // strb r0, [r4]
    // mvn r1, r1
    // strb r0, [r4]
    // add r1, #0x24
    // add r2, #0x4c
}




void ov12_02260030(void) {
    // add r0, #0x4e
    // strb r1, [r0]
    PlaySE(0x0000070B, 0);
    ov12_02264E34(r4, *((u32*)(r4 + 0x40)));
    // strb r0, [r4]
    // add r0, #0x4e
    // add r0, #0x4e
    // add r0, #0x4e
    // strb r1, [r0]
    ov12_02264E68(r4, (*((u8*)r4) + 1));
    // mvn r1, r1
    // add r0, #0x4e
    StopSE(0x0000070B, 0);
    // strb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x4e
    // add r0, #0x4e
    // strb r1, [r0]
    // add r0, #0x4e
    StopSE(0x0000070B, 0);
    // strb r0, [r4]
    // add r1, #0x24
    // add r2, #0x4c
    ov12_0226430C(*((u32*)(r4 + 0xc)), *((u8*)r1), *((u8*)r4));
    *((u32*)(r4 + 0x10)) = 0;
    SysTask_Destroy(r5);
}




void ov12_022600F0(void) {
    ov12_0223A8DC(*((u32*)r1));
    // add r1, #0x66
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02260118: ; jump table
    // add r0, #0x70
    // add r0, #0x65
    // add r2, sp, #0xbc
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0xbc
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // add r0, #0x66
    // add r4, #0x66
    // strb r0, [r4]
    // add r4, #0x66
    // strb r0, [r4]
    // add r3, #0x65
    // add r1, #0xc
    // add r2, sp, #0x6c
    ov12_02261CA8(*((u32*)r4), r4, *((u8*)r4));
    // add r0, sp, #0x6c
    ov07_0223494C(5);
    // add r0, #0x65
    // add r2, sp, #0x14
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x14
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // str r2, [r1, r0]
    // add r0, #0x66
    // add r4, #0x66
    // strb r0, [r4]
    ov07_0221C394((*((u8*)r4) + 1), *((u32*)(r4 + 4)), 0);
    ov07_0221C3B0(r5);
    ov07_0221C3C0(r5);
    // add r0, #0x66
    // add r4, #0x66
    // strb r0, [r4]
    // add r0, #0x67
    // mvn r5, r5
    // add r1, #0x65
    BattleSystem_GetChatotVoice(*((u32*)r4), *((u8*)r4));
    // str r5, [sp]
    // str r1, [sp, #4]
    // add r1, #0x72
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r2, #0x68
    // add r3, #0x6b
    sub_0207204C(5, *((u16*)r4), *((u8*)r4));
    // add r0, #0x66
    // add r0, #0x66
    // strb r1, [r0]
    IsCryFinished(r4, (*((u8*)r4) + 1));
    // add r0, #0x66
    // add r4, #0x66
    // strb r0, [r4]
    // add r0, #0x67
    sub_0200602C(0x00000703, 0x75);
    // mvn r1, r1
    sub_0200602C(0x74);
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 0x29);
    // add r4, #0x66
    // strb r0, [r4]
    // add r4, #0x66
    // strb r0, [r4]
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 0x29);
    // sub r5, #8
    // bpl _022602B2
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0x29, 0);
    // add r0, #0x66
    // add r0, #0x66
    // strb r1, [r0]
    // str r0, [sp]
    // add r0, #0x68
    // add r1, #0x6a
    // add r2, #0x67
    // add r3, #0x6b
    GetMonPicHeightBySpeciesGenderForm(*((u16*)r4), *((u8*)r4), *((u8*)r4), *((u8*)r4));
    // sub r0, r3, r0
    // str r0, [sp]
    Pokepic_SetVisible(*((u32*)(r4 + 8)), 0, 0, 0x50);
    // add r0, #0x66
    // add r4, #0x66
    // strb r0, [r4]
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 1);
    // add r2, #8
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 1, r0);
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 0x12);
    // sub r5, #8
    // bpl _02260332
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0x12, 0);
    Pokepic_Delete(*((u32*)(r4 + 8)));
    // add r0, #0x66
    // add r4, #0x66
    // strb r0, [r4]
    // add r1, #0x65
    // add r2, #0x64
    ov12_0226430C(*((u32*)r4), *((u8*)r4), *((u8*)r4));
    Heap_Free(r4);
    SysTask_Destroy(r6);
}




void ov12_0226037C(void) {
    BattleSystem_GetPaletteData(*((u32*)r1));
    ov12_0223A8D4(*((u32*)r5));
    BattleSystem_GetMessageIcon(*((u32*)r5));
    sub_0201649C(1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_BeginPaletteFade(r4, 0xf, 0x0000FFFF, 1);
    // str r1, [sp]
    Pokepic_StartPaletteFadeAll(r7, 0, 0x10, 0);
    GF_SndStartFadeOutBGM(0, 0x10);
    *((u8*)(r5 + 6)) = (*((u8*)(r5 + 6)) + 1);
    PaletteData_GetSelectedBuffersBitmask(r4);
    *((u8*)(r5 + 6)) = (*((u8*)(r5 + 6)) + 1);
    ov12_0226430C(*((u32*)r5), *((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    Heap_Free(r5);
    SysTask_Destroy(r6);
}




void ov12_02260418(void) {
    // add r1, #0x62
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02260440: ; jump table
    // add r2, #0x63
    // add r0, #0x63
    // add r4, #0x62
    // strb r0, [r4]
    // add r0, #0x62
    // add r4, #0x62
    // strb r0, [r4]
    // add r4, #0x62
    // strb r0, [r4]
    // add r0, #0x61
    // add r2, sp, #0xb8
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, sp, #0xb8
    // add r0, #0x62
    // add r4, #0x62
    // strb r0, [r4]
    // add r4, #0x62
    // strb r0, [r4]
    // add r3, #0x61
    // add r1, #8
    // add r2, sp, #0x68
    // add r0, sp, #0x68
    // add r0, #0x61
    // add r2, sp, #0x10
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, sp, #0x10
    // str r2, [r1, r0]
    // add r0, #0x62
    // add r4, #0x62
    // strb r0, [r4]
    // add r0, #0x62
    // add r4, #0x62
    // strb r0, [r4]
    // add r1, #0x61
    // add r2, #0x60
}




void ov12_02260584(void) {
    // add r1, #0xb
    BattleHpBar_BeginExpBarFullFlashEffect(*((u32*)(r1 + 4)));
    PlaySE(0x0000070C);
    *((u8*)(r4 + 0xa)) = (*((u8*)(r4 + 0xa)) + 1);
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 9)), *((u8*)(r4 + 8)));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}




void ov12_022605D0(void) {
}




void ov12_02260614(void) {
}




void ov12_02260668(void) {
    BattleSystem_GetBgConfig(*((u32*)r1));
    BattleSystem_GetPaletteData(*((u32*)r4));
    BattleSystem_GetTerrainId(*((u32*)r4));
    BattleSystem_GetBackgroundId(*((u32*)r4));
    // str r0, [sp, #0xc]
    *((u8*)(r4 + 0x15)) = (*((u8*)(r4 + 0x15)) + 1);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022606AE: ; jump table
    ov07_0223458C(5, 0);
    *((u32*)(r4 + 4)) = r0;
    // add r1, sp, #0x10
    // str r0, [sp, #0x14]
    // str r5, [sp, #0x10]
    ov07_022345C8(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 8)) = r0;
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, sp, #0x10
    ov07_022345C8(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 0xc)) = r0;
    ov07_02234694(*((u32*)(r4 + 8)));
    PlaySE(0x0000084F);
    *((u8*)(r4 + 0x14)) = 1;
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(r7, 1, 0x0000F3FF, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(r7, 4, 0x00003FFF, 0);
    *((u8*)(r4 + 0x16)) = (*((u8*)(r4 + 0x16)) + 1);
    *((u8*)(r4 + 0x16)) = 0x10;
    PaletteData_GetFadedBuf(r7, 1);
    // strh r2, [r6, r1]
    ov07_02234694(*((u32*)(r4 + 0xc)), ((0 + 1) << 0x10), (((((0x1f * *((u8*)(r4 + 0x16))) << 0xc) >> 0x10) << 0xa) | (((((0x1f * *((u8*)(r4 + 0x16))) << 0xc) >> 0x10) << 5) | (((0x1f * *((u8*)(r4 + 0x16))) << 0xc) >> 0x10))), (((0x1f * *((u8*)(r4 + 0x16))) << 0xc) >> 0x10));
    PlaySE((0x85 << 4));
    PaletteData_GetUnfadedBuf(r7, 0);
    ov12_0223BAE0(*((u32*)r4));
    MIi_CpuCopy16(r5, 0xe0);
    BattleSystem_GetBattleType(*((u32*)r4));
    PaletteData_GetUnfadedBuf(r7, 2);
    ov12_0223BAEC(*((u32*)r4));
    MIi_CpuCopy16(r5, 0xa0);
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    PaletteData_GetUnfadedBuf(r7, 2);
    ov12_0223BAEC(*((u32*)r4));
    MIi_CpuCopy16(r5, 0xe0);
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    PaletteData_GetUnfadedBuf(r7, 2);
    ov12_0223BAEC(*((u32*)r4));
    MIi_CpuCopy16(r5, 0xa0);
    PaletteData_GetUnfadedBuf(r7, 2);
    ov12_0223BAEC(*((u32*)r4));
    MIi_CpuCopy16(r5, 0x80);
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(r7, 1, 0x0000F3FF, 0);
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(r7, 4, 0x00003FFF, 0);
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(r7, 0xa, 0x0000FFFF, 0);
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    PaletteData_BeginPaletteFade(r7, 1, (3 << 0xa), 0);
    *((u8*)(r4 + 0x14)) = (*((u8*)(r4 + 0x14)) + 1);
    ov07_022346BC(*((u32*)(r4 + 0xc)));
    ov07_02234604(*((u32*)(r4 + 4)));
    *((u8*)(r4 + 0x14)) = (*((u8*)(r4 + 0x14)) + 1);
    BattleSystem_GetMessageIcon(*((u32*)r4));
    sub_0201649C(0);
    Heap_Free(r4);
    SysTask_Destroy(r6);
    ov07_02234628(*((u32*)(r4 + 4)));
    ov07_02234604(*((u32*)(r4 + 4)));
    *((u8*)(r4 + 0x14)) = (*((u8*)(r4 + 0x14)) + 1);
    PaletteData_GetUnfadedBuf(r7, 0);
    ov12_0223BAE0(*((u32*)r4));
    MIi_CpuCopy16(r5, 0xe0);
    BattleSystem_GetBattleType(*((u32*)r4));
    PaletteData_GetUnfadedBuf(r7, 2);
    ov12_0223BAEC(*((u32*)r4));
    MIi_CpuCopy16(r5, 0xa0);
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    PaletteData_GetUnfadedBuf(r7, 2);
    ov12_0223BAEC(*((u32*)r4));
    MIi_CpuCopy16(r5, 0xe0);
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    PaletteData_GetUnfadedBuf(r7, 2);
    ov12_0223BAEC(*((u32*)r4));
    MIi_CpuCopy16(r5, 0xa0);
    PaletteData_GetUnfadedBuf(r7, 2);
    ov12_0223BAEC(*((u32*)r4));
    MIi_CpuCopy16(r5, 0x80);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(r7, 1, 0x0000FFFF, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r2, [sp, #8]
    PaletteData_BeginPaletteFade(r7, 4, (0x0000FFFF >> 2), 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(r7, 0xa, 0x0000FFFF, 0);
    *((u8*)(r4 + 0x14)) = 3;
}




void ov12_022609F8(void) {
    BattleSystem_GetPaletteData(*((u32*)r1));
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02260A1C: ; jump table
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // sub r3, #0x12
    PaletteData_BeginPaletteFade(0xa, 0x0000FFFF, 0xa);
    *((u8*)(r4 + 0xa)) = (*((u8*)(r4 + 0xa)) + 1);
    PaletteData_GetSelectedBuffersBitmask((*((u8*)(r4 + 0xa)) + 1));
    ov12_02237B0C(*((u32*)r4));
    Heap_Alloc(5, 0x38);
    *((u32*)(r4 + 4)) = r0;
    BattleSystem_GetParty(*((u32*)r4), *((u8*)(r4 + 9)));
    // str r0, [r1]
    *((u32*)(*((u32*)(r4 + 4)) + 8)) = *((u32*)r4);
    *((u32*)(*((u32*)(r4 + 4)) + 0xc)) = 5;
    *((u8*)(*((u32*)(r4 + 4)) + 0x11)) = *((u8*)(r4 + 0xe));
    *((u16*)(*((u32*)(r4 + 4)) + 0x24)) = *((u16*)(r4 + 0xc));
    // add r1, #0x36
    // strb r0, [r1]
    *((u8*)(*((u32*)(r4 + 4)) + 0x12)) = 0;
    // add r1, #0x35
    // strb r2, [r1]
    *((u16*)(*((u32*)(r4 + 4)) + 0x22)) = 0;
    *((u32*)(*((u32*)(r4 + 4)) + 0x28)) = *((u8*)(r4 + 9));
    // add r1, #0x32
    // strb r0, [r1]
    ov10_0221BE20(*((u32*)(r4 + 4)), *((u32*)(r4 + 4)), *((u8*)(r4 + 9)));
    *((u8*)(r4 + 0xa)) = (*((u8*)(r4 + 0xa)) + 1);
    // add r0, #0x36
    ov12_02237BB8(*((u32*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, #0x12
    PaletteData_BeginPaletteFade(r6, 0xa, 0x0000FFFF, 0xa);
    *((u8*)(r4 + 0xa)) = (*((u8*)(r4 + 0xa)) + 1);
    PaletteData_GetSelectedBuffersBitmask((*((u8*)(r4 + 0xa)) + 1));
    // add r0, #0x34
    ov12_02263360(*((u32*)r4), *((u8*)(r4 + 9)), 0xff);
    ov12_02263360(*((u8*)(r4 + 9)), (r2 + 1));
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 9)), *((u8*)(r4 + 8)));
    Heap_Free(*((u32*)(r4 + 4)));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}




void ov12_02260B30(void) {
}




void ov12_02260BA0(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r7, [sp, #8]
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #8]
    // add r0, #8
}




void ov12_02260C58(void) {
}




void ov12_02260CDC(void) {
    // add r0, #0x8c
    // add r1, #0x8c
    // str r0, [r1]
}




void ov12_02260D28(void) {
    // add r0, #0x8c
    // add r0, #0x8c
    // add r0, #0x8c
    // add r0, #0x8c
    // str r1, [r0]
}




void ov12_02260D84(void) {
    BattleSystem_GetPaletteData(*((u32*)r1));
    ov12_0223A8D4(*((u32*)r5));
    BattleSystem_GetMessageIcon(*((u32*)r5));
    sub_0201649C(1);
    // str r0, [sp]
    Pokepic_StartPaletteFadeAll(r7, 0, 0x10, 0);
    GF_SndStartFadeOutBGM(0, 0x10);
    *((u8*)(r5 + 6)) = (*((u8*)(r5 + 6)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_BlendPalette(r4, 0, 0, 0xa0);
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_BlendPalette(r4, 0, 0xc0, 0x40);
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_BlendPalette(r4, 2, 0, 0xe0);
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_BlendPalette(r4, 0, 0xa0, 0x20);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xff
    PaletteData_BlendPalette(r4, 1, 0, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xfd
    PaletteData_BlendPalette(r4, 3, 0, 3);
    *((u8*)(r5 + 8)) = (*((u8*)(r5 + 8)) + 1);
    ToggleBgLayer(0, 0);
    *((u8*)(r5 + 6)) = (*((u8*)(r5 + 6)) + 1);
    ov12_0226430C(*((u32*)r5), *((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    Heap_Free(r5);
    SysTask_Destroy(r6);
}




void ov12_02260EA4(void) {
    BattleSystem_GetBattleType();
    BattleSystem_GetBattleSpecial(r6);
    // tst r1, r4
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E404;
    *((u32*)(r5 + 8)) = ov12_0225E6FC;
    *((u32*)(r5 + 0xc)) = ov12_0225F3A4;
    *((u32*)(r5 + 0x10)) = ov12_0225F8AC;
    *((u32*)(r5 + 0x14)) = ov12_0225FC80;
    // strb r1, [r5, r0]
    // tst r0, r1
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E4EC;
    *((u32*)(r5 + 8)) = ov12_0225E760;
    *((u32*)(r5 + 0xc)) = ov12_0225F434;
    *((u32*)(r5 + 0x10)) = ov12_0225F980;
    *((u32*)(r5 + 0x14)) = ov12_0225FCC0;
    // strb r1, [r5, r0]
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E250;
    *((u32*)(r5 + 8)) = ov12_0225E568;
    *((u32*)(r5 + 0xc)) = ov12_0225E830;
    *((u32*)(r5 + 0x10)) = ov12_0225F4E0;
    *((u32*)(r5 + 0x14)) = ov12_0225FA44;
    // strb r1, [r5, r0]
    // and r1, r4
    // tst r1, r3
    ov12_0223B688(r6, 1, 0x00000195, *((u8*)(r5 + 0x00000195)));
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E404;
    *((u32*)(r5 + 8)) = ov12_0225E6FC;
    *((u32*)(r5 + 0xc)) = ov12_0225F3A4;
    *((u32*)(r5 + 0x10)) = ov12_0225F8AC;
    *((u32*)(r5 + 0x14)) = ov12_0225FC80;
    // strb r1, [r5, r0]
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E4CC;
    *((u32*)(r5 + 8)) = ov12_0225E740;
    *((u32*)(r5 + 0xc)) = ov12_0225F3FC;
    *((u32*)(r5 + 0x10)) = ov12_0225F960;
    *((u32*)(r5 + 0x14)) = ov12_0225FCA0;
    // strb r1, [r5, r0]
    // tst r0, r1
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E4EC;
    *((u32*)(r5 + 8)) = ov12_0225E760;
    *((u32*)(r5 + 0xc)) = ov12_0225F434;
    *((u32*)(r5 + 0x10)) = ov12_0225F980;
    *((u32*)(r5 + 0x14)) = ov12_0225FCC0;
    // strb r1, [r5, r0]
    ov12_0223BFC0(r6, 0);
    ov12_0223AB0C(r6, (r0 << 1));
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E4CC;
    *((u32*)(r5 + 8)) = ov12_0225E740;
    *((u32*)(r5 + 0xc)) = ov12_0225F3FC;
    *((u32*)(r5 + 0x10)) = ov12_0225F960;
    *((u32*)(r5 + 0x14)) = ov12_0225FCA0;
    // strb r2, [r5, r0]
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E250;
    *((u32*)(r5 + 8)) = ov12_0225E568;
    *((u32*)(r5 + 0xc)) = ov12_0225E830;
    *((u32*)(r5 + 0x10)) = ov12_0225F4E0;
    *((u32*)(r5 + 0x14)) = ov12_0225FA44;
    // strb r2, [r5, r0]
    // tst r1, r4
    // tst r0, r1
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E4EC;
    *((u32*)(r5 + 8)) = ov12_0225E760;
    *((u32*)(r5 + 0xc)) = ov12_0225F434;
    *((u32*)(r5 + 0x10)) = ov12_0225F980;
    *((u32*)(r5 + 0x14)) = ov12_0225FCC0;
    // strb r1, [r5, r0]
    ov12_0223BFC0(r6, 0, 0);
    ov12_0223AB0C(r6, r0);
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E4CC;
    *((u32*)(r5 + 8)) = ov12_0225E740;
    *((u32*)(r5 + 0xc)) = ov12_0225F3FC;
    *((u32*)(r5 + 0x10)) = ov12_0225F960;
    *((u32*)(r5 + 0x14)) = ov12_0225FCA0;
    // strb r2, [r5, r0]
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E250;
    *((u32*)(r5 + 8)) = ov12_0225E568;
    *((u32*)(r5 + 0xc)) = ov12_0225E830;
    *((u32*)(r5 + 0x10)) = ov12_0225F4E0;
    *((u32*)(r5 + 0x14)) = ov12_0225FA44;
    // strb r2, [r5, r0]
    // tst r2, r1
    // tst r0, r1
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E4EC;
    *((u32*)(r5 + 8)) = ov12_0225E760;
    *((u32*)(r5 + 0xc)) = ov12_0225F434;
    *((u32*)(r5 + 0x10)) = ov12_0225F980;
    *((u32*)(r5 + 0x14)) = ov12_0225FCC0;
    // strb r1, [r5, r0]
    // tst r1, r2
    // str r1, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E4CC;
    *((u32*)(r5 + 8)) = ov12_0225E740;
    *((u32*)(r5 + 0xc)) = ov12_0225F3FC;
    *((u32*)(r5 + 0x10)) = ov12_0225F960;
    *((u32*)(r5 + 0x14)) = ov12_0225FCA0;
    // strb r1, [r5, r0]
    // str r1, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E250;
    *((u32*)(r5 + 8)) = ov12_0225E568;
    *((u32*)(r5 + 0xc)) = ov12_0225E830;
    *((u32*)(r5 + 0x10)) = ov12_0225F4E0;
    *((u32*)(r5 + 0x14)) = ov12_0225FA44;
    // strb r1, [r5, r0]
    // tst r1, r4
    // tst r2, r1
    // str r2, [r5]
    *((u32*)(r5 + 4)) = 0;
    *((u32*)(r5 + 8)) = 0;
    *((u32*)(r5 + 0xc)) = 0;
    *((u32*)(r5 + 0x10)) = 0;
    *((u32*)(r5 + 0x14)) = 0;
    // strb r1, [r5, r0]
    // str r1, [r5]
    *((u32*)(r5 + 4)) = 0;
    *((u32*)(r5 + 8)) = 0;
    *((u32*)(r5 + 0xc)) = 0;
    *((u32*)(r5 + 0x10)) = 0;
    *((u32*)(r5 + 0x14)) = 0;
    // strb r1, [r5, r0]
    // tst r1, r4
    // tst r2, r1
    // str r2, [r5]
    *((u32*)(r5 + 4)) = 0;
    *((u32*)(r5 + 8)) = 0;
    *((u32*)(r5 + 0xc)) = 0;
    *((u32*)(r5 + 0x10)) = 0;
    *((u32*)(r5 + 0x14)) = 0;
    // strb r1, [r5, r0]
    // str r1, [r5]
    *((u32*)(r5 + 4)) = 0;
    *((u32*)(r5 + 8)) = 0;
    *((u32*)(r5 + 0xc)) = 0;
    *((u32*)(r5 + 0x10)) = 0;
    *((u32*)(r5 + 0x14)) = ov12_0225FA44;
    // strb r2, [r5, r0]
    // tst r3, r1
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E404;
    *((u32*)(r5 + 8)) = ov12_0225E6FC;
    *((u32*)(r5 + 0xc)) = ov12_0225F3A4;
    *((u32*)(r5 + 0x10)) = ov12_0225F8AC;
    *((u32*)(r5 + 0x14)) = ov12_0225FC80;
    // strb r1, [r5, r0]
    // tst r0, r1
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E4EC;
    *((u32*)(r5 + 8)) = ov12_0225E760;
    *((u32*)(r5 + 0xc)) = ov12_0225F434;
    *((u32*)(r5 + 0x10)) = ov12_0225F980;
    *((u32*)(r5 + 0x14)) = ov12_0225FCC0;
    // strb r1, [r5, r0]
    // str r0, [r5]
    *((u32*)(r5 + 4)) = ov12_0225E250;
    *((u32*)(r5 + 8)) = ov12_0225E568;
    *((u32*)(r5 + 0xc)) = ov12_0225E830;
    *((u32*)(r5 + 0x10)) = ov12_0225F4E0;
    *((u32*)(r5 + 0x14)) = ov12_0225FA44;
    // strb r1, [r5, r0]
}




void ov12_02261258(void) {
    // ldrb r0, [r0, r1]
    // nop
    // _02261260: .word 0x00000195
}




void ov12_02261264(void) {
    // ldrb r0, [r0, r1]
    // nop
    // _0226126C: .word 0x00000196
}




void ov12_02261270(void) {
    // cmp r1, #0
    // bne _02261278
}




void OpponentData_GetHpBar(void) {
    // add r0, #0x28
}




void ov12_02261280(void) {
    // add r0, #0x80
}




void ov12_02261284(void) {
    // add r0, #0x80
}




void ov12_02261294(void) {
}




void ov12_022612A4(void) {
    // ldr r4, [sp, #0x50]
    // str r1, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r0, [sp, #0x20]
    // and r0, r6
    // str r0, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x40]
    // ldr r0, [sp, #0x3c]
    // ldr r3, [sp, #0x40]
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r4, [sp, #8]
    // ldr r0, [sp, #0x54]
    // ldr r4, [sp, #0x38]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x58]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r3, r4, r3
    // ldr r0, [sp, #0x1c]
    // asr r6, r6, #1
    // ldr r2, [sp, #0x4c]
    // ldr r2, [sp, #0x38]
    // add r2, #0x24
    // ldr r2, [sp, #0x48]
    // ldr r3, [sp, #0x40]
    // sub r2, r2, r3
    // ldr r2, [sp, #0x44]
}




void ov12_02261390(void) {
    // tst r1, r2
    BattleSystem_GetBattleType(1, *((u8*)(r1 + 0x00000195)));
    // tst r0, r1
    *((u16*)(r4 + 2)) = 0x000003DE;
    *((u8*)(r4 + 1)) = 0x1b;
    *((u32*)(r4 + 4)) = *((u8*)(r5 + (0x65 << 2)));
    *((u32*)(r4 + 8)) = ((*((u8*)(r6 + 1)) << 8) | *((u8*)(r5 + (0x65 << 2))));
    *((u16*)(r4 + 2)) = 0x000003DD;
    *((u8*)(r4 + 1)) = 0x32;
    *((u32*)(r4 + 4)) = *((u8*)(r5 + (0x65 << 2)));
    *((u32*)(r4 + 8)) = *((u8*)(r5 + (0x65 << 2)));
    *((u32*)(r4 + 0xc)) = ((*((u8*)(r6 + 1)) << 8) | *((u8*)(r5 + (0x65 << 2))));
    BattleSystem_GetBattleType(((*((u8*)(r6 + 1)) << 8) | *((u8*)(r5 + (0x65 << 2)))), *((u8*)(r5 + (0x65 << 2))));
    // tst r0, r1
    BattleSystem_GetBattleType(r7, 2);
    // tst r0, r1
    *((u16*)(r4 + 2)) = (0xf6 << 2);
    *((u16*)(r4 + 2)) = 0x000003D9;
    *((u16*)(r4 + 2)) = (0xf7 << 2);
    *((u16*)(r4 + 2)) = 0x000003DA;
    *((u16*)(r4 + 2)) = 0x000003DB;
    *((u16*)(r4 + 2)) = 0x000003D9;
    *((u8*)(r4 + 1)) = 2;
    *((u32*)(r4 + 4)) = ((*((u8*)(r6 + 1)) << 8) | *((u8*)(r5 + (0x65 << 2))));
}




void ov12_02261464(void) {
    // tst r1, r2
    BattleSystem_GetBattleType(1, *((u8*)(r1 + 0x00000195)));
    // tst r0, r1
    *((u16*)(r4 + 2)) = (0xf3 << 2);
    *((u8*)(r4 + 1)) = 0x32;
    *((u32*)(r4 + 4)) = *((u8*)(r5 + (0x65 << 2)));
    *((u32*)(r4 + 8)) = *((u8*)(r5 + (0x65 << 2)));
    *((u32*)(r4 + 0xc)) = ((*((u8*)(r6 + 1)) << 8) | *((u8*)(r5 + (0x65 << 2))));
    *((u16*)(r4 + 2)) = 0x000003CE;
    *((u8*)(r4 + 1)) = 0x1b;
    *((u32*)(r4 + 4)) = *((u8*)(r5 + (0x65 << 2)));
    *((u32*)(r4 + 8)) = ((*((u8*)(r6 + 1)) << 8) | *((u8*)(r5 + (0x65 << 2))));
    BattleSystem_GetBattleType(((*((u8*)(r6 + 1)) << 8) | *((u8*)(r5 + (0x65 << 2)))), *((u8*)(r5 + (0x65 << 2))));
    // tst r0, r1
    BattleSystem_GetBattleType(r7, 2);
    // tst r0, r1
    *((u16*)(r4 + 2)) = 0x000003D6;
    *((u16*)(r4 + 2)) = 0x000003D7;
    // add r0, #0xe1
    *((u16*)(r4 + 2)) = 0x000003D5;
    // add r0, #0xcd
    *((u16*)(r4 + 2)) = 0x00000307;
    // add r0, #0xcc
    *((u16*)(r4 + 2)) = 0x00000307;
    *((u16*)(r4 + 2)) = 0x000003D3;
    *((u8*)(r4 + 1)) = 2;
    *((u32*)(r4 + 4)) = ((*((u8*)(r6 + 1)) << 8) | *((u8*)(r5 + (0x65 << 2))));
}




void ov12_02261544(void) {
    BattleSystem_GetBattleType();
    // tst r0, r4
    BattleSystem_GetBattlerFromBattlerType(r7, 3);
    BattleSystem_GetBattlerFromBattlerType(r7, 5);
    BattleSystem_GetBattlerFromBattlerType(r7, 1);
    // tst r1, r4
    // tst r1, r4
    *((u16*)(r5 + 2)) = (0x3e << 4);
    *((u8*)(r5 + 1)) = 0x3b;
    *((u32*)(r5 + 4)) = r0;
    *((u32*)(r5 + 8)) = r0;
    *((u32*)(r5 + 0xc)) = r0;
    *((u32*)(r5 + 0x10)) = r0;
    // tst r2, r1
    *((u16*)(r5 + 2)) = 0x000003CB;
    *((u8*)(r5 + 1)) = 0x1a;
    *((u32*)(r5 + 4)) = r0;
    *((u32*)(r5 + 8)) = r0;
    *((u16*)(r5 + 2)) = 0x000003CA;
    *((u8*)(r5 + 1)) = 0x1a;
    *((u32*)(r5 + 4)) = r0;
    // tst r1, r4
    // tst r1, r4
    *((u16*)(r5 + 2)) = (0x3e << 4);
    *((u8*)(r5 + 1)) = 0x3b;
    *((u32*)(r5 + 4)) = r0;
    *((u32*)(r5 + 8)) = r0;
    *((u32*)(r5 + 0xc)) = 0x000003CA;
    *((u32*)(r5 + 0x10)) = 0x000003CA;
    *((u16*)(r5 + 2)) = 0x000003C9;
    *((u8*)(r5 + 1)) = 0x1e;
    *((u32*)(r5 + 4)) = r0;
    *((u32*)(r5 + 8)) = r0;
}




void ov12_022615F0(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    BattleSystem_GetBattleType();
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // tst r0, r1
    // ldr r0, [sp, #0x14]
    // and r0, r1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    BattleSystem_GetBattlerIdPartner(1, *((u8*)(1 + (0x00000195 - 1))), 0x00000195);
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // tst r0, r1
    // ldr r0, [sp, #0x14]
    // tst r0, r1
    *((u16*)(r4 + 2)) = 0x000003DF;
    *((u8*)(r4 + 1)) = 0x3c;
    *((u32*)(r4 + 4)) = *((u8*)(r0 + (r2 - 1)));
    *((u32*)(r4 + 8)) = *((u8*)(r0 + (r2 - 1)));
    // add r0, r6, r5
    *((u32*)(r4 + 0xc)) = ((*((u8*)(0x3c + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    *((u32*)(r4 + 0x10)) = *((u8*)(r0 + (r2 - 1)));
    *((u32*)(r4 + 0x14)) = *((u8*)(r0 + (r2 - 1)));
    // add r0, r6, r7
    *((u32*)(r4 + 0x18)) = ((*((u8*)(((*((u8*)(0x3c + 4)) << 8) | *((u8*)(r0 + (r2 - 1)))) + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    // ldr r0, [sp, #0x14]
    // tst r0, r1
    *((u16*)(r4 + 2)) = (0x3d << 4);
    *((u8*)(r4 + 1)) = 0x38;
    *((u32*)(r4 + 4)) = *((u8*)(r0 + (r2 - 1)));
    // add r0, r6, r5
    *((u32*)(r4 + 8)) = ((*((u8*)(0x38 + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    *((u32*)(r4 + 0xc)) = *((u8*)(r0 + (r2 - 1)));
    // add r0, r6, r7
    *((u32*)(r4 + 0x10)) = ((*((u8*)(((*((u8*)(0x38 + 4)) << 8) | *((u8*)(r0 + (r2 - 1)))) + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    // ldr r0, [sp, #0x10]
    *((u16*)(r4 + 2)) = 0x000003CF;
    *((u8*)(r4 + 1)) = 0x31;
    *((u32*)(r4 + 4)) = *((u8*)(r0 + (r2 - 1)));
    // add r0, r6, r5
    *((u32*)(r4 + 8)) = ((*((u8*)(0x31 + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    // add r0, r6, r7
    *((u32*)(r4 + 0xc)) = ((*((u8*)(((*((u8*)(0x31 + 4)) << 8) | *((u8*)(r0 + (r2 - 1)))) + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    *((u16*)(r4 + 2)) = 0x000003CE;
    *((u8*)(r4 + 1)) = 0x1b;
    *((u32*)(r4 + 4)) = *((u8*)(r0 + (r2 - 1)));
    // add r0, r6, r5
    *((u32*)(r4 + 8)) = ((*((u8*)(0x1b + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    // ldr r0, [sp, #0x14]
    // tst r0, r1
    // ldr r0, [sp, #0x14]
    // tst r0, r1
    *((u16*)(r4 + 2)) = 0x000003DF;
    *((u8*)(r4 + 1)) = 0x3c;
    *((u32*)(r4 + 4)) = *((u8*)(r0 + (r2 - 1)));
    *((u32*)(r4 + 8)) = *((u8*)(r0 + (r2 - 1)));
    // add r0, r6, r5
    *((u32*)(r4 + 0xc)) = ((*((u8*)(0x3c + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    *((u32*)(r4 + 0x10)) = *((u8*)(r0 + (r2 - 1)));
    *((u32*)(r4 + 0x14)) = *((u8*)(r0 + (r2 - 1)));
    // add r0, r6, r7
    *((u32*)(r4 + 0x18)) = ((*((u8*)(((*((u8*)(0x3c + 4)) << 8) | *((u8*)(r0 + (r2 - 1)))) + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    // ldr r0, [sp, #0x10]
    *((u16*)(r4 + 2)) = 0x000003CD;
    *((u8*)(r4 + 1)) = 0x39;
    *((u32*)(r4 + 4)) = *((u8*)(r0 + (r2 - 1)));
    *((u32*)(r4 + 8)) = *((u8*)(r0 + (r2 - 1)));
    // add r0, r6, r5
    *((u32*)(r4 + 0xc)) = ((*((u8*)(0x39 + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    // add r0, r6, r7
    *((u32*)(r4 + 0x10)) = ((*((u8*)(((*((u8*)(0x39 + 4)) << 8) | *((u8*)(r0 + (r2 - 1)))) + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    *((u16*)(r4 + 2)) = (0xf3 << 2);
    *((u8*)(r4 + 1)) = 0x32;
    *((u32*)(r4 + 4)) = *((u8*)(r0 + (r2 - 1)));
    *((u32*)(r4 + 8)) = *((u8*)(r0 + (r2 - 1)));
    // add r0, r6, r5
    *((u32*)(r4 + 0xc)) = ((*((u8*)(0x32 + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    // ldr r0, [sp, #0x14]
    // and r0, r1
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    ov12_0223BFC0(((*((u8*)(0x32 + 4)) << 8) | *((u8*)(r0 + (r2 - 1)))), 4);
    // ldr r0, [sp, #0x14]
    // and r0, r1
    // str r0, [sp, #8]
    // ldr r0, [sp]
    ov12_0223BFCC((r0 << 0x18), ((r0 << 0x18) >> 0x18), ((r0 << 0x18) >> 0x18));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0226178E: ; jump table
    // ldr r0, [sp]
    BattleSystem_GetBattlerFromBattlerType((*((u16*)(r0 + 6)) << 0x10), 4);
    // ldr r0, [sp]
    BattleSystem_GetBattlerFromBattlerType(2);
    // ldr r0, [sp]
    BattleSystem_GetBattlerFromBattlerType(2);
    // ldr r0, [sp]
    BattleSystem_GetBattlerFromBattlerType(4);
    // ldr r0, [sp, #0x14]
    // tst r0, r1
    // ldr r0, [sp]
    BattleSystem_GetBattlerFromBattlerType(2);
    // ldr r0, [sp]
    BattleSystem_GetBattlerFromBattlerType(4);
    // ldr r0, [sp]
    BattleSystem_GetBattlerFromBattlerType(0);
    // ldr r0, [sp, #0x14]
    // and r0, r1
    // str r0, [sp, #8]
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    BattleSystem_GetBattlerIdPartner(*((u8*)(8 + (r2 - 1))), (r2 - 1));
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // tst r0, r1
    // ldr r0, [sp]
    BattleSystem_GetBattlerFromBattlerType(2);
    // ldr r0, [sp]
    BattleSystem_GetBattlerFromBattlerType(4);
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    *((u16*)(r4 + 2)) = 0x000003D1;
    *((u8*)(r4 + 1)) = 0x31;
    *((u32*)(r4 + 4)) = *((u8*)(r0 + (r2 - 1)));
    // add r0, r6, r5
    *((u32*)(r4 + 8)) = ((*((u8*)(0x31 + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    // add r0, r6, r7
    *((u32*)(r4 + 0xc)) = ((*((u8*)(((*((u8*)(0x31 + 4)) << 8) | *((u8*)(r0 + (r2 - 1)))) + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    // ldr r0, [sp, #0x14]
    // tst r0, r1
    *((u16*)(r4 + 2)) = 0x000003D2;
    *((u8*)(r4 + 1)) = 9;
    // add r0, r6, r5
    *((u32*)(r4 + 4)) = ((*((u8*)(9 + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    // add r0, r6, r7
    *((u32*)(r4 + 8)) = ((*((u8*)(((*((u8*)(9 + 4)) << 8) | *((u8*)(r0 + (r2 - 1)))) + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    *((u16*)(r4 + 2)) = 0x000003D3;
    *((u8*)(r4 + 1)) = 2;
    // add r0, r6, r5
    *((u32*)(r4 + 4)) = ((*((u8*)(0x000003D3 + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    // ldr r0, [sp, #8]
    *((u16*)(r4 + 2)) = 0x000003E1;
    *((u8*)(r4 + 1)) = 0x39;
    *((u32*)(r4 + 4)) = *((u8*)(r0 + (r2 - 1)));
    *((u32*)(r4 + 8)) = *((u8*)(r0 + (r2 - 1)));
    // add r0, r6, r5
    *((u32*)(r4 + 0xc)) = ((*((u8*)(0x39 + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    // add r0, r6, r7
    *((u32*)(r4 + 0x10)) = ((*((u8*)(((*((u8*)(0x39 + 4)) << 8) | *((u8*)(r0 + (r2 - 1)))) + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    // ldr r0, [sp, #0x14]
    // tst r0, r1
    *((u16*)(r4 + 2)) = 0x000003D2;
    *((u8*)(r4 + 1)) = 9;
    // add r0, r6, r5
    *((u32*)(r4 + 4)) = ((*((u8*)(9 + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    // add r0, r6, r7
    *((u32*)(r4 + 8)) = ((*((u8*)(((*((u8*)(9 + 4)) << 8) | *((u8*)(r0 + (r2 - 1)))) + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
    *((u16*)(r4 + 2)) = 0x000003D3;
    *((u8*)(r4 + 1)) = 2;
    // add r0, r6, r5
    *((u32*)(r4 + 4)) = ((*((u8*)(0x000003D3 + 4)) << 8) | *((u8*)(r0 + (r2 - 1))));
}




void ov12_02261928(void) {
    // str r0, [sp]
    BattleSystem_GetBattleType();
    // ldr r0, [sp]
    BattleSystem_GetBattleOutcomeFlags();
    // tst r0, r6
    // ldr r0, [sp]
    BattleSystem_GetBattlerFromBattlerType(2, 3);
    // ldr r0, [sp]
    BattleSystem_GetBattlerFromBattlerType(5);
    // ldr r0, [sp]
    BattleSystem_GetBattlerFromBattlerType(1);
    // tst r2, r1
    *((u16*)(r5 + 2)) = 0x00000312;
    *((u8*)(r5 + 1)) = 0x1a;
    *((u32*)(r5 + 4)) = r0;
    *((u32*)(r5 + 8)) = r0;
    *((u16*)(r5 + 2)) = 0x00000311;
    *((u8*)(r5 + 1)) = 0x1a;
    *((u32*)(r5 + 4)) = r0;
    // tst r2, r1
    *((u16*)(r5 + 2)) = (0xc5 << 2);
    *((u8*)(r5 + 1)) = 0x1a;
    *((u32*)(r5 + 4)) = r0;
    *((u32*)(r5 + 8)) = 0x00000311;
    *((u16*)(r5 + 2)) = 0x00000313;
    *((u8*)(r5 + 1)) = 0x1a;
    *((u32*)(r5 + 4)) = r0;
    // tst r2, r1
    *((u16*)(r5 + 2)) = 0x00000316;
    *((u8*)(r5 + 1)) = 0x1a;
    *((u32*)(r5 + 4)) = r0;
    *((u32*)(r5 + 8)) = 0x00000313;
    *((u16*)(r5 + 2)) = 0x00000315;
    *((u8*)(r5 + 1)) = 0x1a;
    *((u32*)(r5 + 4)) = r0;
}




void ov12_022619E4(void) {
    // str r2, [sp]
    // str r6, [sp, #4]
    BattleSystem_GetMaxBattlers();
    MaskOfFlagNo(r4);
    // ldr r1, [sp]
    // tst r0, r1
    BattleSystem_GetFieldSide(r5, r4);
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    BattleSystem_GetMaxBattlers(r5);
    // ldr r0, [sp, #4]
    *((u16*)(r7 + 2)) = 0x0000030D;
    *((u8*)(r7 + 1)) = 0;
    BattleSystem_SetBattleOutcomeFlags(r5, 0xc3);
    *((u16*)(r7 + 2)) = 0x0000030D;
    *((u8*)(r7 + 1)) = 0;
    BattleSystem_SetBattleOutcomeFlags(r5, 0xc2);
    BattleSystem_GetBattleType(r5);
    // tst r0, r1
    *((u16*)(r7 + 2)) = (0xc6 << 2);
    *((u8*)(r7 + 1)) = 0x1a;
    BattleSystem_GetBattlerFromBattlerType(r5, 3);
    *((u32*)(r7 + 4)) = r0;
    BattleSystem_GetBattlerFromBattlerType(r5, 5);
    *((u32*)(r7 + 8)) = r0;
    BattleSystem_GetBattleType(r5);
    // tst r0, r1
    *((u16*)(r7 + 2)) = 0x00000317;
    *((u8*)(r7 + 1)) = 8;
    BattleSystem_GetBattlerFromBattlerType(r5, 3);
    *((u32*)(r7 + 4)) = r0;
    *((u16*)(r7 + 2)) = r0;
    *((u8*)(r7 + 1)) = 8;
    BattleSystem_GetBattlerFromBattlerType(r5, 1);
    *((u32*)(r7 + 4)) = r0;
    BattleSystem_SetBattleOutcomeFlags(r5, 0xc1);
}




void ov12_02261AD4(void) {
    // tst r0, r1
}




void ov12_02261B2C(void) {
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // tst r0, r4
    // add r3, sp, #0x28
    // ldrsh r0, [r3, r0]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x18]
    // str r0, [sp, #0xc]
    // str r7, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldrsh r3, [r3, r4]
    // ldr r0, [sp, #0x1c]
}




void ov12_02261B80(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x84]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x84]
    // str r0, [sp, #0x18]
    // ldr r0, [sp]
    // str r0, [sp, #0x20]
    // ldr r0, [sp]
    // str r0, [sp, #0x24]
    // ldr r0, [sp]
    // add r5, sp, #0x1c
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // str r5, [sp, #0x10]
    // ldr r0, [sp]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r4
    // add r0, #0x20
    // add r0, #0x3c
    // strb r1, [r0]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r4
    // add r0, #0x24
    // add r0, #0x40
    // strb r1, [r0]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r4
    // add r0, #0x28
    // add r0, #0x44
    // strb r1, [r0]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // add r1, sp, #0x38
    // ldr r0, [sp]
    // add r1, sp, #0x3c
    // ldr r0, [sp]
    // str r0, [sp, #0x4c]
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp, #0xa0]
    // ldr r0, [sp]
    // str r0, [sp, #0xa4]
    // ldr r0, [sp]
    // str r0, [sp, #0xa8]
    // str r0, [sp, #0x88]
    // ldr r0, [sp]
    // str r0, [sp, #0x8c]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r0, r0, r1
    // add r0, #0xb0
    // add r0, r4, r0
    // str r0, [sp, #0x90]
    // str r0, [sp, #0x94]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #0x98]
    // str r0, [sp, #0x9c]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // add r3, sp, #0x1c
}




void ov12_02261CA8(void) {
    // str r3, [r6]
    // str r0, [sp]
    // str r7, [sp, #0xc]
    // str r6, [sp, #8]
    // str r7, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, r7, r4
    // add r0, #0x20
    // add r0, r6, r4
    // add r0, #0x30
    // strb r1, [r0]
    // add r0, r7, r4
    // add r0, #0x24
    // add r0, r6, r4
    // add r0, #0x34
    // strb r1, [r0]
    // add r0, r7, r4
    // add r0, #0x28
    // add r0, r6, r4
    // add r0, #0x38
    // strb r1, [r0]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r1, #0x4c
    // add r6, #0x18
    // ldr r0, [sp]
}




void ov12_02261D30(void) {
    // add r0, sp, #0
    // tst r0, r1
    // strb r0, [r4]
    // tst r0, r1
    // strb r0, [r5]
    // strb r0, [r5]
    // sub r3, #0x12
    // add r0, r3, r3
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02261D80: ; jump table
    // strb r0, [r4]
    // strb r0, [r5]
    // strb r0, [r4]
    // strb r0, [r5]
    // strb r0, [r4]
    // strb r0, [r5]
}




void ov12_02261DC8(void) {
    ManagedSprite_GetUserAttrForCurrentAnimFrame(*((u32*)(r0 + 0xc)));
    *((u16*)(r5 + 0x16)) = (1 | (*((u16*)(r5 + 0x16)) & ~(1)));
    Heap_Alloc(5, 8);
    // str r2, [r1]
    *((u32*)(r0 + 4)) = r4;
    SysTask_CreateOnMainQueue(ov12_02261E40, r0, r4);
    // sub r1, #0xff
    // and r2, r1
    ManagedSprite_SetAnimationFrame(*((u32*)(r5 + 0xc)), 1, r0);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0xc)), (r6 - 1));
}




void ov12_02261E40(void) {
    // str r0, [r4]
    // str r0, [sp]
    // str r0, [r4]
    // str r0, [sp]
    // str r0, [r4]
}




void ov12_02261EB8(void) {
}




void ov12_02261ED4(void) {
}




void ov12_02261EF0(void) {
    // tst r0, r1
    // add r4, #0x7d
    // add r4, #0x7f
}




void ov12_02261F38(void) {
    // add r1, sp, #0x14
    // strb r2, [r1]
    // ldr r0, [sp, #0x3c]
    // ldr r3, [sp, #0x34]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r5, [sp, #8]
    // ldr r2, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // add r1, sp, #0x14
    // ldr r0, [sp, #0x3c]
    // mvn r4, r4
    // add r0, sp, #0x14
    // strb r1, [r0]
    // ldr r2, [sp, #0x34]
    // str r4, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r1, sp, #0x14
    // ldr r3, [sp, #0x38]
    // str r1, [sp, #0x10]
    // ldr r1, [sp, #0x40]
}



