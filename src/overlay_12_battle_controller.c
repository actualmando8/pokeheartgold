/* Decompiled from asm/overlay_12_battle_controller.s */
#include "global.h"

void BattleController_SendData(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r0, sp, #0x10
    // add r1, r0, r3
    // strh r2, [r7]
    // strh r0, [r5]
    // ldr r1, [sp]
    // add r0, sp, #8
    // strb r1, [r0]
    // ldr r1, [sp, #4]
    // add r1, sp, #0x10
    // add r1, sp, #8
    // strb r7, [r4, r2]
    // strh r2, [r5]
    // strb r2, [r4, r1]
    // strh r1, [r5]
}




void BattleController_RecvData(void) {
    // add r4, r0, r1
    // add r0, r3, r2
    // add r7, r1, r7
    // add r7, r2, r7
    // strb r0, [r7, r4]
    // add r0, r5, r0
    // add r1, #0x94
    // add r1, r3, r2
    // add r1, r1, r2
    // add r1, #0x94
    // strb r4, [r1]
}




void ov12_022621C4(void) {
    // strh r1, [r4]
    // strh r1, [r0]
    // add r1, r6, r1
    // add r0, r0, r1
    // strh r0, [r4]
}




void ov12_02262240(void) {
    // str r1, [sp, #4]
    // tst r0, r1
    // tst r0, r1
    // ldr r0, [sp, #4]
    sub_02037454(0x10, *((u32*)(r0 + 0x0000240C)));
    ov12_0224ECC4(*((u32*)(r5 + 0x30)), r4, r7, *((u8*)r6));
    sub_02037454();
    // add r0, sp, #0x10
    // ldr r1, [sp, #4]
    // str r0, [sp]
    sub_02074F9C(r5, r7, r6);
    // ldr r0, [sp, #4]
    ov12_0224ECC4(*((u32*)(r5 + 0x30)), 0, r7, *((u8*)r6));
    // add r0, sp, #0x10
    // ldr r1, [sp, #4]
    // str r0, [sp]
    BattleController_SendData(r5, r7, r6);
}




void BattleController_EmitPlayEncounterAnimation(void) {
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // add r3, sp, #4
}




void BattleController_EmitPokemonEncounter(void) {
    // add r2, sp, #4
    // strb r3, [r2]
    // add r2, sp, #4
    // add r3, r2, r4
    // mov ip, r2
    // and r2, r3
    // add r2, sp, #4
    *((u8*)(3 + 1)) = ((*((u8*)(0xc0 + 1)) & ~(3)) | 3);
    // add r3, r2, r4
    // mov r2, ip
    // sub r2, #0x58
    // add r2, sp, #4
    *((u8*)(((((*((u8*)(((*((u8*)(0xc0 + 1)) & ~(3)) | 3) + *((u32*)(r0 + 0x30)))) << 0x1a) >> 0x1f) << 0x1f) >> 0x1d) + 1)) = ((*((u8*)(3 + 1)) & ~(4)) | ((((*((u8*)(((*((u8*)(0xc0 + 1)) & ~(3)) | 3) + *((u32*)(r0 + 0x30)))) << 0x1a) >> 0x1f) << 0x1f) >> 0x1d));
    // add r3, r2, r4
    // mov r2, ip
    // sub r2, #0x7e
    // add r2, sp, #4
    *((u16*)(*((u32*)(r0 + 0x30)) + 2)) = *((u16*)(((*((u8*)(3 + 1)) & ~(4)) | ((((*((u8*)(((*((u8*)(0xc0 + 1)) & ~(3)) | 3) + *((u32*)(r0 + 0x30)))) << 0x1a) >> 0x1f) << 0x1f) >> 0x1d)) + *((u32*)(r0 + 0x30))));
    // add r3, r2, r4
    // mov r2, ip
    // sub r2, #0x16
    // str r2, [sp, #8]
    ov12_0223AB0C(*((u32*)(*((u16*)(((*((u8*)(3 + 1)) & ~(4)) | ((((*((u8*)(((*((u8*)(0xc0 + 1)) & ~(3)) | 3) + *((u32*)(r0 + 0x30)))) << 0x1a) >> 0x1f) << 0x1f) >> 0x1d)) + *((u32*)(r0 + 0x30)))) + *((u32*)(r0 + 0x30)))), *((u16*)(((*((u8*)(3 + 1)) & ~(4)) | ((((*((u8*)(((*((u8*)(0xc0 + 1)) & ~(3)) | 3) + *((u32*)(r0 + 0x30)))) << 0x1a) >> 0x1f) << 0x1f) >> 0x1d)) + *((u32*)(r0 + 0x30)))));
    ov12_02256748(*((u32*)(r6 + 0x30)), r7, r0, 1);
    // add r2, sp, #4
    // str r0, [sp, #0xc]
    // add r5, sp, #4
    // add r3, r1, r4
    *((u8*)(r2 + 1)) = ((*((u8*)(r2 + 1)) & ~(0xf8)) | ((((*((u8*)(r3 + 0x00002D66)) << 0x1b) >> 0x1b) << 0x1b) >> 0x18));
    GetBattlerVar(*((u32*)(r6 + 0x30)), r7, (0 + 6), 0);
    *((u16*)(r5 + 0xc)) = r0;
    // add r2, #0x1f
    GetBattlerVar(*((u32*)(r6 + 0x30)), r7, r4, 0);
    *((u16*)(r5 + 0x14)) = r0;
    // add r2, #0x27
    GetBattlerVar(*((u32*)(r6 + 0x30)), r7, r4, 0);
    *((u16*)(r5 + 0x1c)) = r0;
    // add r3, sp, #0x28
    GetBattlerVar(*((u32*)(r6 + 0x30)), r7, 0x2d);
    // str r0, [sp]
    // add r3, sp, #4
    ov12_02262240(r6, 1, r7);
}




void BattleController_EmitPokemonSlideIn(void) {
    // add r3, sp, #4
    // strb r2, [r3]
    // add r3, r2, r4
    // mov ip, r2
    // and r2, r3
    // add r2, sp, #4
    *((u8*)(3 + 1)) = ((*((u8*)(r3 + 1)) & ~(3)) | 3);
    // add r3, r2, r4
    // mov r2, ip
    // sub r2, #0x58
    // add r2, sp, #4
    *((u8*)(((((*((u8*)(((*((u8*)(r3 + 1)) & ~(3)) | 3) + *((u32*)(r0 + 0x30)))) << 0x1a) >> 0x1f) << 0x1f) >> 0x1d) + 1)) = ((*((u8*)(3 + 1)) & ~(4)) | ((((*((u8*)(((*((u8*)(r3 + 1)) & ~(3)) | 3) + *((u32*)(r0 + 0x30)))) << 0x1a) >> 0x1f) << 0x1f) >> 0x1d));
    // add r3, r2, r4
    // mov r2, ip
    // sub r2, #0x7e
    // add r2, sp, #4
    *((u16*)(*((u32*)(r0 + 0x30)) + 2)) = *((u16*)(((*((u8*)(3 + 1)) & ~(4)) | ((((*((u8*)(((*((u8*)(r3 + 1)) & ~(3)) | 3) + *((u32*)(r0 + 0x30)))) << 0x1a) >> 0x1f) << 0x1f) >> 0x1d)) + *((u32*)(r0 + 0x30))));
    // add r3, r2, r4
    // mov r2, ip
    // sub r2, #0x16
    // str r2, [sp, #8]
    ov12_0223AB0C(*((u32*)(*((u16*)(((*((u8*)(3 + 1)) & ~(4)) | ((((*((u8*)(((*((u8*)(r3 + 1)) & ~(3)) | 3) + *((u32*)(r0 + 0x30)))) << 0x1a) >> 0x1f) << 0x1f) >> 0x1d)) + *((u32*)(r0 + 0x30)))) + *((u32*)(r0 + 0x30)))), *((u16*)(((*((u8*)(3 + 1)) & ~(4)) | ((((*((u8*)(((*((u8*)(r3 + 1)) & ~(3)) | 3) + *((u32*)(r0 + 0x30)))) << 0x1a) >> 0x1f) << 0x1f) >> 0x1d)) + *((u32*)(r0 + 0x30)))));
    ov12_02256748(*((u32*)(r6 + 0x30)), r7, r0, 1);
    // str r0, [sp, #0xc]
    // add r2, sp, #4
    // add r1, r0, r7
    // str r0, [sp, #0x10]
    // add r3, r1, r4
    // add r1, #0x59
    *((u8*)(r2 + 1)) = ((*((u8*)(r2 + 1)) & ~(0xf8)) | ((((*((u8*)(r3 + 0x00002D66)) << 0x1b) >> 0x1b) << 0x1b) >> 0x18));
    // add r0, r0, r4
    // str r0, [sp, #0x14]
    BattleSystem_GetBattlerIdPartner(r6, r7, ((((*((u8*)(r3 + 0x00002D66)) << 0x1b) >> 0x1b) << 0x1b) >> 0x18));
    // ldr r2, [sp, #0x10]
    // add r1, r1, r0
    // str r0, [sp, #0x4c]
    ov12_0223B854(r6, r7);
    // add r5, sp, #4
    GetBattlerVar(*((u32*)(r6 + 0x30)), r7, (0 + 6), 0);
    *((u16*)(r5 + 0x18)) = r0;
    // add r2, #0x1f
    GetBattlerVar(*((u32*)(r6 + 0x30)), r7, r4, 0);
    *((u16*)(r5 + 0x20)) = r0;
    // add r2, #0x27
    GetBattlerVar(*((u32*)(r6 + 0x30)), r7, r4, 0);
    *((u16*)(r5 + 0x28)) = r0;
    // add r3, sp, #0x34
    GetBattlerVar(*((u32*)(r6 + 0x30)), r7, 0x2d);
    // str r0, [sp]
    // add r3, sp, #4
    ov12_02262240(r6, 1, r7);
}




void BattleController_EmitPokemonSendOut(void) {
    // add r6, sp, #0x10
    // strb r1, [r6]
    // str r2, [sp, #4]
    // add r2, r0, r5
    // str r3, [sp, #8]
    // tst r1, r3
    // add r3, #0x4a
    // add r0, #0x34
    // and r2, r3
    *((u8*)(r6 + 1)) = ((*((u8*)(r6 + 1)) & ~(3)) | 3);
    // add r1, r1, r5
    // str r0, [sp, #0x14]
    // add r3, #0xe
    // sub r0, #8
    // and r2, r3
    *((u8*)(r6 + 1)) = ((*((u32*)(r0 + 0x30)) & ~(3)) | 3);
    // add r1, r1, r5
    // str r0, [sp, #0x14]
    // add r3, sp, #0x10
    // add r2, r1, r6
    // sub r1, #0x26
    *((u8*)(((*((u8*)(3 + *((u32*)(*((u32*)(r0 + 0x30)) + 0x00002DB0)))) << 0x1c) >> 0x1c) + 1)) = ((*((u8*)(((*((u8*)(3 + *((u32*)(*((u32*)(r0 + 0x30)) + 0x00002DB0)))) << 0x1c) >> 0x1c) + 1)) & ~(4)) | ((((*((u8*)(3 + 0x00002D66)) << 0x1a) >> 0x1f) << 0x1f) >> 0x1d));
    // add r0, r0, r6
    *((u16*)(((*((u8*)(3 + *((u32*)(*((u32*)(r0 + 0x30)) + 0x00002DB0)))) << 0x1c) >> 0x1c) + 2)) = *((u16*)(*((u32*)(r0 + 0x30)) + 0x00002D66));
    ov12_0223AB0C(r0, r1, ((((*((u8*)(3 + 0x00002D66)) << 0x1a) >> 0x1f) << 0x1f) >> 0x1d), ((*((u8*)(3 + *((u32*)(*((u32*)(r0 + 0x30)) + 0x00002DB0)))) << 0x1c) >> 0x1c));
    ov12_02256748(*((u32*)(r4 + 0x30)), r7, r0, 0);
    // str r0, [sp, #0x18]
    // add r1, r0, r7
    // str r0, [sp, #0x1c]
    // add r0, sp, #0x10
    // add r3, r2, r6
    *((u8*)(*((u8*)(r1 + 0x0000219C)) + 1)) = ((*((u8*)(*((u8*)(r1 + 0x0000219C)) + 1)) & ~(0xf8)) | ((((*((u8*)(r3 + 0x00002D66)) << 0x1b) >> 0x1b) << 0x1b) >> 0x18));
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x20]
    // add r2, #0x59
    // add r0, r0, r5
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x24]
    // add r1, r0, r5
    // tst r0, r1
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #0x5c]
    ov12_0223B854(r4, r7, 0x00002D66, ((((*((u8*)(r3 + 0x00002D66)) << 0x1b) >> 0x1b) << 0x1b) >> 0x18));
    // add r5, sp, #0x10
    GetBattlerVar(*((u32*)(r4 + 0x30)), r7, (0 + 6), 0);
    *((u16*)(r5 + 0x18)) = r0;
    // add r2, #0x1f
    GetBattlerVar(*((u32*)(r4 + 0x30)), r7, r6, 0);
    *((u16*)(r5 + 0x20)) = r0;
    // add r2, #0x27
    GetBattlerVar(*((u32*)(r4 + 0x30)), r7, r6, 0);
    *((u16*)(r5 + 0x28)) = r0;
    // add r3, sp, #0x40
    GetBattlerVar(*((u32*)(r4 + 0x30)), r7, 0x2d);
    // add r3, sp, #0x10
    // mov ip, r2
    // str r3, [sp, #0xc]
    // add r1, r0, r2
    // ldr r0, [sp, #0xc]
    // add r0, #0x50
    // strh r1, [r0]
    // add r1, r0, r2
    // add r0, #0x5c
    // strb r1, [r0]
    // add r1, r0, r2
    // add r0, #0x60
    // strb r1, [r0]
    // add r6, r0, r2
    // tst r0, r1
    // add r0, #0x58
    // strb r1, [r0]
    // add r1, r0, r2
    // add r0, #0x58
    // strb r1, [r0]
    // add r1, r0, r2
    // add r2, #0xc0
    *((u32*)(r3 + 0x64)) = *((u32*)(((*((u8*)(r6 + 0x00002DBE)) << 0x1c) >> 0x1c) + 0x00002DA8));
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // mov r0, ip
    // mov ip, r0
    // str r0, [sp]
    // add r3, sp, #0x10
    ov12_02262240(r4, 1, r7, (r3 + 1));
}




void BattleController_EmitRecallPokemon(void) {
    // str r0, [sp, #4]
    // add r0, r0, r1
    // str r2, [sp, #8]
    // tst r0, r1
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #4]
    // add r5, sp, #0xc
    // add r3, r1, r0
    // strb r6, [r5]
    // ldr r5, [sp, #4]
    // add r5, r5, r0
    // add r0, #0x4a
    // tst r0, r6
    // add r0, #0x7e
    // str r0, [sp]
    // add r1, #0x94
    // sub r0, #0x26
    GetMonPicHeightBySpeciesGenderForm(*((u16*)(*((u32*)(r5 + 0x30)) + 0x00002D66)), ((*((u16*)(*((u32*)(r5 + 0x30)) + 0x00002D66)) << 0x18) >> 0x18), ((0 << 0x18) >> 0x18), ((((*((u8*)(r3 + 0x00002D66)) << 0x1b) >> 0x1b) << 0x18) >> 0x18));
    // add r0, #0x42
    // str r0, [sp]
    // add r1, #0x58
    // sub r0, #0x26
    GetMonPicHeightBySpeciesGenderForm(*((u16*)(r5 + r1)), ((*((u8*)(r5 + r1)) << 0x1c) >> 0x1c), ((r2 << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    // add r1, sp, #0xc
    *((u8*)(r1 + 1)) = r0;
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #4]
    // add r1, r1, r0
    // add r1, sp, #0xc
    // sub r2, #0xf
    *((u16*)(*((u32*)(r1 + 0x30)) + 2)) = *((u8*)(*((u32*)(r1 + 0x30)) + 0x00002DBF));
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // tst r0, r1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // add r7, sp, #0xc
    // ldr r0, [sp, #8]
    // add r1, r1, r0
    // str r0, [sp, #0x38]
    // mov ip, r0
    // add r2, r4, r0
    // add r0, #0x58
    // add r6, r4, r0
    *((u16*)(r7 + 8)) = *((u16*)(r4 + (0xb5 << 6)));
    *((u8*)(r7 + 0x14)) = ((*((u8*)0x00002DBF) << 0x1a) >> 0x1f);
    *((u8*)(r7 + 0x18)) = ((*((u8*)0x00002DBF) << 0x1b) >> 0x1b);
    // tst r0, r1
    *((u8*)(r7 + 0x10)) = *((u16*)(r4 + 0x00002DFA));
    *((u8*)(r7 + 0x10)) = ((*((u8*)r6) << 0x1c) >> 0x1c);
    // add r4, #0xc0
    *((u32*)(r7 + 0x1c)) = *((u32*)(r4 + 0x00002DA8));
    // mov r0, ip
    // add r2, #0xc0
    // add r6, #0xc0
    // mov ip, r0
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #8]
    // add r3, sp, #0xc
    ov12_02262240(0x30, 1, 0x00002DBF, (r7 + 1));
}




void ov12_022628A0(void) {
    // add r0, r4, r0
    // str r2, [sp, #4]
    // tst r0, r1
    // add r0, r0, r6
    // add r0, sp, #8
    // strb r1, [r0]
    // add r1, r0, r6
    // add r0, #0x4a
    // tst r0, r6
    // add r0, #0x7e
    // str r0, [sp]
    // sub r0, #0x26
    // add r5, #0x94
    GetMonPicHeightBySpeciesGenderForm(*((u16*)(6 + 0x00002D66)), ((*((u16*)(6 + 0x00002D66)) << 0x18) >> 0x18), ((0 << 0x18) >> 0x18), ((((*((u8*)(*((u32*)(r0 + 0x30)) + 0x00002D66)) << 0x1b) >> 0x1b) << 0x18) >> 0x18));
    // add r0, #0x42
    // str r0, [sp]
    // sub r0, #0x26
    // add r5, #0x58
    GetMonPicHeightBySpeciesGenderForm(*((u16*)(r1 + r5)), ((*((u8*)(r1 + r5)) << 0x1c) >> 0x1c), ((r2 << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    // add r1, sp, #8
    *((u8*)(r1 + 1)) = r0;
    // ldr r0, [sp, #4]
    // add r1, sp, #8
    *((u16*)(r1 + 2)) = r0;
    // str r0, [sp]
    // add r3, sp, #8
    ov12_02262240(r4, 1, r7);
}




void BattleController_EmitDeletePokemon(void) {
}




void BattleController_EmitTrainerEncounter(void) {
    // add r3, sp, #4
    // strb r1, [r3]
    // add r1, r0, r1
    // add r1, #0xad
    // add r1, r0, r2
    // add r1, #0xa8
    // str r1, [sp]
    // add r3, sp, #4
}




void BattleController_EmitThrowPokeball(void) {
    // add r3, sp, #4
    // strb r6, [r3]
    *((u8*)(r3 + 1)) = r2;
    BattleSystem_GetBattlerIdPartner();
    // add r1, r1, r0
    // add r3, sp, #4
    // add r0, sp, #4
    *((u16*)(0x0000219C + 2)) = *((u8*)(*((u32*)(r5 + 0x30)) + 0x0000219C));
    // str r0, [sp]
    ov12_02262240(r5, 1, r4);
}




void BattleController_EmitTrainerSlideOut(void) {
}




void BattleController_EmitTrainerSlideIn(void) {
    // add r4, sp, #4
    // strb r1, [r4]
    // add r1, r0, r1
    // add r1, #0xad
    // add r1, r0, r3
    // add r1, #0xa8
    // str r2, [sp, #8]
    // str r1, [sp]
    // add r3, sp, #4
}




void BattleController_EmitHealthbarSlideIn(void) {
    // add r7, r5, r1
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    BattleSystem_GetPartyMon(r2, *((u8*)(r7 + r2)));
    GetMonData(5, 0);
    // str r0, [sp, #0x10]
    GetMonData(r6, 0xa1, 0);
    // str r0, [sp, #0xc]
    // add r3, sp, #0x14
    // strb r0, [r3]
    // add r0, r5, r6
    *((u8*)(r3 + 1)) = *((u8*)(0xc0 + 0x00002D74));
    // add r1, #0x18
    // add r2, #0x1c
    *((u16*)(r3 + 2)) = *((u32*)(0xc0 + 0x00002D74));
    *((u16*)(r3 + 4)) = *((u32*)(0xc0 + 0x00002D74));
    *((u8*)(r3 + 6)) = *((u8*)(r7 + r4));
    GetBattlerStatusCondition(r5, r4, 0x00002D74);
    // add r1, sp, #0x14
    // and r0, r3
    *((u8*)(r1 + 7)) = (0x1f | (*((u8*)(r1 + 7)) & ~(0x1f)));
    // add r7, r5, r0
    // add r1, r5, r6
    // add r0, sp, #0x14
    *((u8*)((*((u32*)(r1 + 0x00002D54)) >> 0x1f) + 7)) = ((*((u8*)((*((u32*)(r1 + 0x00002D54)) >> 0x1f) + 7)) & ~(0x60)) | 0x40);
    // add r3, sp, #0x14
    // add r1, r5, r6
    *((u8*)(((r0 << 0x18) >> 0x18) + 7)) = (((((*((u8*)(((*((u8*)((*((u32*)(r1 + 0x00002D54)) >> 0x1f) + 7)) & ~(0x60)) | 0x40) + 0x00002DBE)) << 0x1c) >> 0x1c) << 0x1e) >> 0x19) | (*((u8*)(((r0 << 0x18) >> 0x18) + 7)) & ~(0x60)));
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    GetMonExpBySpeciesAndLevel((((((*((u8*)(((*((u8*)((*((u32*)(r1 + 0x00002D54)) >> 0x1f) + 7)) & ~(0x60)) | 0x40) + 0x00002DBE)) << 0x1c) >> 0x1c) << 0x1e) >> 0x19) | (*((u8*)(((r0 << 0x18) >> 0x18) + 7)) & ~(0x60))), ((*((u8*)((*((u32*)(r1 + 0x00002D54)) >> 0x1f) + 7)) & ~(0x60)) | 0x40), (*((u8*)(((r0 << 0x18) >> 0x18) + 7)) & ~(0x60)), ((r0 << 0x18) >> 0x18));
    // add r2, r5, r1
    // sub r0, r1, r0
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    GetMonExpBySpeciesAndLevel((*((u32*)(r2 + 0x00002DA4)) + 1));
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    GetMonExpBySpeciesAndLevel();
    // sub r0, r5, r0
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    BattleSystem_CheckMonCaught(*((u16*)(r7 + r6)));
    // add r3, sp, #0x14
    *((u8*)(r3 + 7)) = (((((r0 << 0x18) >> 0x18) << 0x1f) >> 0x18) | (*((u8*)(r3 + 7)) & ~(0x80)));
    // ldr r0, [sp, #4]
    BattleSystem_GetSafariBallCount((((((r0 << 0x18) >> 0x18) << 0x1f) >> 0x18) | (*((u8*)(r3 + 7)) & ~(0x80))), (*((u8*)(r3 + 7)) & ~(0x80)), 0x80);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #8]
    // add r1, sp, #0x14
    *((u8*)(r1 + 0x14)) = r0;
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r3, sp, #0x14
    ov12_02262240(0x18, 1, r4);
}




void BattleController_EmitHealthbarSlideOut(void) {
}




void ov12_02262B80(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // add r1, sp, #0x28
    MIi_CpuClearFast(0, 0x2c);
    // ldr r0, [sp, #4]
    BattleSystem_GetBattleContext();
    // ldr r1, [sp, #0xc]
    BattleBuffer_Clear();
    // ldr r0, [sp, #4]
    BattleSystem_GetMaxBattlers();
    // ldr r0, [sp, #8]
    Battler_CanSelectAction(r4);
    MaskOfFlagNo(r4);
    // ldr r0, [sp, #4]
    BattleSystem_GetMaxBattlers();
    // add r0, sp, #0x28
    // strb r1, [r0]
    *((u8*)(r0 + 1)) = r6;
    // ldr r0, [sp, #8]
    // add r0, sp, #0x48
    *((u8*)(*((u8*)(r0 + 0x00003108)) + 9)) = (*((u8*)(r0 + 0x00003108)) | r5);
    // ldr r0, [sp, #4]
    BattleSystem_GetBattleType(*((u8*)(r0 + 0x00003108)), (*((u8*)(r0 + 0x00003108)) | r5));
    // str r0, [sp, #0x20]
    // tst r0, r1
    // ldr r0, [sp, #0x20]
    // tst r0, r1
    // ldr r0, [sp, #0xc]
    // and r4, r1
    // ldr r4, [sp, #0xc]
    // ldr r0, [sp, #4]
    BattleSystem_GetParty(r0);
    // str r0, [sp, #0x24]
    Party_GetCount();
    // ldr r0, [sp, #8]
    // add r5, sp, #0x28
    // add r6, r0, r1
    // ldr r0, [sp, #0x20]
    // and r0, r1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x24]
    Party_GetMonByIndex(6, *((u8*)(r6 + 0x0000312C)));
    GetMonData(0xae, 0);
    GetMonData(r4, 0xa3, 0);
    GetMonData(r4, 0xa0, 0);
    *((u8*)(r5 + 8)) = 3;
    *((u8*)(r5 + 8)) = 1;
    *((u8*)(r5 + 8)) = 2;
    // ldr r0, [sp, #0x1c]
    GetPercentProgressTowardsNextLevel(r4);
    *((u8*)(r5 + 2)) = r0;
    // ldr r0, [sp, #0x24]
    Party_GetCount();
    // ldr r0, [sp, #0x20]
    // and r0, r1
    // ldr r0, [sp, #0x20]
    // tst r0, r1
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    BattleSystem_GetFieldSide(0x10);
    // ldr r0, [sp, #4]
    BattleSystem_GetBattlerFromBattlerType(2);
    // ldr r0, [sp, #4]
    BattleSystem_GetBattlerFromBattlerType(3);
    // ldr r0, [sp, #4]
    BattleSystem_GetParty(r0);
    // str r0, [sp, #0x10]
    Party_GetCount();
    // ldr r0, [sp, #8]
    // add r5, sp, #0x28
    // add r4, r0, r1
    // ldr r0, [sp, #0x10]
    Party_GetMonByIndex(6, *((u8*)(r4 + 0x0000312C)));
    GetMonData(0xae, 0);
    GetMonData(r6, 0xa3, 0);
    GetMonData(r6, 0xa0, 0);
    *((u8*)(r5 + 0xe)) = 3;
    *((u8*)(r5 + 0xe)) = 1;
    *((u8*)(r5 + 0xe)) = 2;
    // ldr r0, [sp, #0x10]
    Party_GetCount(2);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    BattleSystem_GetFieldSide();
    // ldr r0, [sp, #4]
    BattleSystem_GetBattlerFromBattlerType(4);
    // ldr r0, [sp, #4]
    BattleSystem_GetBattlerFromBattlerType(5);
    // ldr r0, [sp, #4]
    BattleSystem_GetParty(r0);
    // str r0, [sp, #0x14]
    Party_GetCount();
    // ldr r0, [sp, #8]
    // add r5, sp, #0x28
    // add r4, r0, r1
    // add r5, #3
    // ldr r0, [sp, #0x14]
    Party_GetMonByIndex(6, *((u8*)(r4 + 0x0000312C)));
    GetMonData(0xae, 0);
    GetMonData(r6, 0xa3, 0);
    GetMonData(r6, 0xa0, 0);
    *((u8*)(r5 + 0xe)) = 3;
    *((u8*)(r5 + 0xe)) = 1;
    *((u8*)(r5 + 0xe)) = 2;
    // ldr r0, [sp, #0x14]
    Party_GetCount(2);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    ov12_0223ABB8(2);
    // ldr r0, [sp, #4]
    BattleSystem_GetParty(r0);
    // str r0, [sp, #0x18]
    Party_GetCount();
    // ldr r0, [sp, #8]
    // add r5, sp, #0x28
    // add r4, r0, r1
    // ldr r0, [sp, #0x18]
    Party_GetMonByIndex(6, *((u8*)(r4 + 0x0000312C)));
    GetMonData(0xae, 0);
    GetMonData(r6, 0xa3, 0);
    GetMonData(r6, 0xa0, 0);
    *((u8*)(r5 + 0xe)) = 3;
    *((u8*)(r5 + 0xe)) = 1;
    *((u8*)(r5 + 0xe)) = 2;
    // ldr r0, [sp, #0x18]
    Party_GetCount(2);
    // add r6, sp, #0x28
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    GetBattlerVar((0 + 6), 0);
    *((u16*)(r6 + 0x14)) = r0;
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // add r2, #0x1f
    GetBattlerVar(r5, 0);
    *((u8*)(r4 + 0x1c)) = r0;
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // add r2, #0x27
    GetBattlerVar(r5, 0);
    // add r1, #0x20
    // strb r0, [r1]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r3, sp, #0x28
    // add r0, r0, r1
    *((u16*)(r3 + 0x24)) = *((u32*)(r0 + 0x00002D8C));
    *((u16*)(r3 + 0x26)) = *((u32*)(r0 + (0x00002D8C + 4)));
    // ldrsh r2, [r3, r2]
    // add r1, #0x20
    // add r0, sp, #0x48
    *((u8*)(*((u32*)(r0 + 0x00002D8C)) + 8)) = 3;
    *((u8*)(*((u32*)(r0 + 0x00002D8C)) + 8)) = 1;
    // add r0, sp, #0x48
    *((u8*)(*((u32*)(r0 + 0x00002D8C)) + 8)) = 2;
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x28
    ov12_02262240(0x2c, 1, 0x24);
}




void ov12_02262F24(void) {
}




void ov12_02262F40(void) {
    // str r2, [sp, #0xc]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    BattleSystem_GetBattleContext();
    // ldr r1, [sp, #0xc]
    BattleBuffer_Clear();
    // add r2, sp, #0x14
    // strb r0, [r2]
    // add r7, sp, #0x14
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r1, r1, r0
    *((u8*)(r2 + 1)) = *((u8*)(r1 + 0x0000219C));
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r6, r0, r1
    *((u16*)(r7 + 4)) = *((u16*)(r6 + 0x00002D4C));
    *((u8*)(r7 + 0xc)) = *((u8*)(r6 + 0x00002D6C));
    GetMoveMaxPP(*((u16*)(r6 + 0x00002D4C)), *((u8*)(r6 + 0x00002D70)));
    *((u8*)(r5 + 0x10)) = r0;
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // mvn r0, r0
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0xc]
    StruggleCheck(0, 0);
    // add r1, sp, #0x14
    *((u16*)(r1 + 2)) = r0;
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x14
    ov12_02262240(0x14, 1);
}




void ov12_02262FE0(void) {
}




void ov12_02262FFC(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r3, [sp, #0xc]
    BattleBuffer_Clear(r1, r3);
    // ldr r0, [sp, #4]
    BattleSystem_GetBattleType();
    // add r1, sp, #0x1c
    // strb r2, [r1]
    *((u16*)(r1 + 2)) = r4;
    // and r2, r1
    // tst r0, r1
    // ldr r0, [sp, #0xc]
    // add r0, sp, #0x1c
    *((u8*)(r0 + 1)) = 1;
    // add r0, sp, #0x1c
    *((u8*)(r0 + 1)) = 0;
    // ldr r2, [sp, #8]
    // str r0, [sp, #0x18]
    // add r7, r0, r1
    // add r1, #0x6a
    // add r5, r0, r1
    // add r4, sp, #0x20
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r3, sp, #0x1c
    // add r4, #1
    // mov ip, r0
    *((u16*)(r3 + 8)) = *((u32*)(r0 + 0x00002D8C));
    *((u16*)(r3 + 0xa)) = *((u32*)(r0 + 0x00002D90));
    // strb r0, [r4]
    // ldr r1, [sp, #0x10]
    // strb r0, [r4]
    // ldr r0, [sp, #0x14]
    // and r0, r1
    // strb r0, [r4]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x18]
    // add r1, r1, r0
    *((u8*)(r3 + 4)) = *((u8*)(((*((u8*)r5) << 0x1c) >> 0x1c) + 0x0000219C));
    *((u8*)(r3 + 6)) = 3;
    *((u8*)(r3 + 6)) = 1;
    // mov r0, ip
    // strb r1, [r4]
    *((u8*)(r3 + 6)) = 2;
    // ldr r0, [sp, #0x18]
    // add r2, #0xc0
    // add r3, #8
    // add r4, #8
    // add r7, #0xc0
    // add r5, #0xc0
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x1c
    ov12_02262240(0x24, 1, r0);
}




void ov12_0226311C(void) {
}




void ov12_02263138(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    BattleBuffer_Clear(r1, r2);
    // add r6, sp, #0x10
    // add r0, sp, #0x10
    // strb r1, [r0]
    // ldr r4, [sp, #8]
    // mov ip, r0
    // add r7, r0, r1
    // ldr r2, [sp, #8]
    // mov r1, ip
    // add r2, r2, r1
    *((u8*)(r6 + 4)) = *((u8*)(r2 + 0x0000219C));
    // add r1, r4, r3
    // add r1, r5, r3
    *((u8*)(*((u8*)(r2 + 0x0000219C)) + 8)) = *((u8*)(*((u8*)(r2 + 0x0000219C)) + 0x0000312C));
    // add r1, #0x20
    // strb r2, [r1]
    // mov r1, ip
    // add r7, #0xc0
    // mov ip, r1
    // ldr r0, [sp, #4]
    BattleSystem_GetBattleType(0x0000312C, (r6 + 1), ((*((u32*)r7) << 0xa) >> 0x1d), (0 + 1));
    MaskOfFlagNo(1);
    // ldr r1, [sp, #8]
    // tst r0, r1
    MaskOfFlagNo(3, *((u8*)(r1 + 0x00003108)), 0x00003108);
    // ldr r1, [sp, #8]
    // tst r0, r1
    // add r0, sp, #0x10
    *((u8*)(r0 + 1)) = 1;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 0;
    MaskOfFlagNo(1, 0, 0x00003108);
    // ldr r1, [sp, #8]
    // add r3, sp, #0x10
    // tst r0, r1
    // ldr r1, [sp, #8]
    *((u8*)(r3 + 1)) = 0;
    // tst r1, r4
    *((u8*)(r3 + 2)) = 1;
    *((u8*)(r3 + 3)) = 0;
    // ldr r1, [sp, #8]
    // sub r2, #0x10
    // tst r1, r2
    *((u8*)(r3 + 2)) = 0;
    *((u8*)(r3 + 3)) = 1;
    *((u8*)(r3 + 3)) = 1;
    // ldr r1, [sp, #8]
    *((u8*)(r3 + 1)) = 0;
    // tst r1, r4
    *((u8*)(r3 + 2)) = 1;
    *((u8*)(r3 + 3)) = 0;
    // ldr r1, [sp, #8]
    // sub r2, #0x10
    // tst r1, r2
    *((u8*)(r3 + 2)) = 0;
    *((u8*)(r3 + 3)) = 1;
    *((u8*)(r3 + 3)) = 1;
    // ldr r0, [sp, #4]
    BattleSystem_GetBattleType(1, (1 << 0x18), *((u32*)(1 + (3 << 0xc))));
    // add r3, sp, #0x10
    // ldr r1, [sp, #8]
    *((u8*)(r3 + 1)) = 0;
    // tst r1, r4
    *((u8*)(r3 + 2)) = 1;
    *((u8*)(r3 + 3)) = 0;
    // ldr r1, [sp, #8]
    // sub r2, #0x10
    // tst r1, r2
    *((u8*)(r3 + 2)) = 0;
    *((u8*)(r3 + 3)) = 1;
    *((u8*)(r3 + 3)) = 1;
    // add r0, sp, #0x10
    *((u8*)(1 + 1)) = 0;
    *((u8*)(1 + 2)) = 0;
    *((u8*)(1 + 3)) = 0;
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x10
    ov12_02262240(0x24, 1, *((u32*)(1 + (0xba << 6))));
}




void ov12_022632C0(void) {
}




void BattleController_EmitShowMonList(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    BattleBuffer_Clear(r1, r2);
    // add r1, sp, #0x10
    // strb r0, [r1]
    // ldr r0, [sp, #0xc]
    // add r7, sp, #0x10
    *((u8*)(r1 + 1)) = 0x12;
    // ldr r0, [sp, #0x50]
    *((u8*)(r1 + 2)) = r4;
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x54]
    // ldr r5, [sp, #8]
    *((u8*)(r1 + 3)) = 0x12;
    // ldr r0, [sp, #8]
    // add r0, sp, #0x30
    *((u8*)(0x12 + 4)) = *((u8*)(0x12 + 0x00003108));
    // ldr r1, [sp, #8]
    // add r2, r1, r3
    *((u8*)(r7 + 4)) = *((u8*)(r2 + 0x0000219C));
    // add r1, r5, r4
    // add r1, r6, r4
    *((u8*)(*((u8*)(r2 + 0x0000219C)) + 8)) = *((u8*)(*((u8*)(r2 + 0x0000219C)) + 0x0000312C));
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x10
    ov12_02262240(0x28, 1, *((u8*)(*((u8*)(r2 + 0x0000219C)) + 0x0000312C)), (0 + 1));
}




void ov12_02263360(void) {
}




void BattleController_EmitDrawYesNoBox(void) {
    // add r0, sp, #4
    // strb r1, [r0]
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // add r3, sp, #4
}




void BattleController_EmitPrintAttackMessage(void) {
    // add r3, sp, #4
    // strb r1, [r3]
    // add r4, r2, r1
    *((u8*)(r3 + 1)) = *((u8*)(r4 + 0x0000219C));
    *((u16*)(r3 + 2)) = *((u32*)(r1 + 0x00003044));
    // str r1, [sp]
    // add r3, sp, #4
    ov12_02262240(1, *((u32*)(r1 + 0x64)));
}




void BattleController_EmitPrintMessage(void) {
}




void BattleController_SetMoveAnimation(void) {
    // str r3, [sp]
    // str r6, [sp, #4]
    // str r6, [sp, #8]
    // str r2, [sp, #0xc]
    // add r2, sp, #0x10
    // str r0, [sp]
    // add r3, sp, #0x10
}




void ov12_0226343C(void) {
    // str r3, [sp]
    // ldr r6, [sp, #0x78]
    // str r4, [sp, #4]
    // str r6, [sp, #8]
    // str r2, [sp, #0xc]
    // add r2, sp, #0x10
    // str r0, [sp]
    // add r3, sp, #0x10
}




void BattleController_EmitMonFlicker(void) {
}




void BattleController_EmitHealthbarUpdate(void) {
    // str r2, [sp, #8]
    // add r3, r5, r2
    // str r0, [sp, #4]
    BattleSystem_GetPartyMon(r2, *((u8*)(r3 + 0x0000219C)));
    GetMonData(5, 0);
    GetMonData(r4, 0xa1, 0);
    // add r3, sp, #0xc
    // strb r0, [r3]
    // ldr r0, [sp, #8]
    // add r1, r5, r4
    *((u8*)(r3 + 1)) = *((u8*)(0xc0 + 0x00002D74));
    // add r2, #0x18
    *((u16*)(r3 + 2)) = *((u32*)(0xc0 + 0x00002D74));
    // add r2, #0x1c
    // sub r0, #0x34
    *((u16*)(r3 + 4)) = *((u32*)(0xc0 + 0x00002D74));
    // str r2, [sp, #0x14]
    // add r1, r5, r4
    // add r0, sp, #0xc
    *((u8*)((*((u32*)(0xc0 + 0x00002D54)) >> 0x1f) + 7)) = 2;
    // add r1, r5, r4
    // add r0, sp, #0xc
    *((u8*)((*((u8*)(2 + 0x00002DBE)) << 0x1c) + 7)) = ((*((u8*)(2 + 0x00002DBE)) << 0x1c) >> 0x1c);
    GetMonExpBySpeciesAndLevel(r7, r0, *((u32*)(r5 + 0x0000215C)));
    // add r2, r5, r4
    // sub r0, r1, r0
    // str r0, [sp, #0x18]
    GetMonExpBySpeciesAndLevel(r7, (r6 + 1));
    GetMonExpBySpeciesAndLevel(r7, r6);
    // sub r0, r4, r0
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #8]
    // add r3, sp, #0xc
    ov12_02262240(0x14, 1);
}




void ov12_02263564(void) {
    // str r3, [sp, #8]
    // add r3, r5, r4
    // str r0, [sp, #4]
    BattleSystem_GetPartyMon(r2, *((u8*)(r3 + 0x0000219C)));
    GetMonData(5, 0);
    GetMonData(r6, 0xa1, 0);
    // add r0, sp, #0xc
    // strb r1, [r0]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x10]
    GetMonExpBySpeciesAndLevel(r7, r0);
    // add r2, r5, r1
    // sub r0, r1, r0
    // str r0, [sp, #0x14]
    GetMonExpBySpeciesAndLevel(r7, (r6 + 1));
    GetMonExpBySpeciesAndLevel(r7, r6);
    // sub r0, r5, r0
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r3, sp, #0xc
    ov12_02262240(0x10, 1, r4);
}




void BattleController_EmitPlayFaintAnimation(void) {
    // str r0, [sp, #4]
    // mov ip, r2
    // add r1, sp, #0xc
    // strb r2, [r1]
    // mov r2, ip
    // add r2, r0, r3
    *((u16*)(r1 + 2)) = *((u16*)(0x1a + (0xb5 << 6)));
    // add r4, #0x26
    // add r5, #0x70
    *((u8*)(r1 + 8)) = ((*((u8*)(0x1a + (0xb5 << 6))) << 0x1b) >> 0x1b);
    // add r2, r0, r5
    // tst r1, r4
    // add r1, sp, #0xc
    *((u8*)((1 << 0x18) + 9)) = 0;
    // tst r1, r4
    // add r1, sp, #0xc
    *((u8*)((2 << 0x14) + 0xa)) = 0;
    // tst r2, r4
    // add r4, r0, r3
    // sub r2, #0x16
    *((u8*)((2 << 0x14) + 1)) = *((u16*)(*((u32*)(((*((u8*)(0x1a + (0xb5 << 6))) << 0x1b) >> 0x1b) + (0xc0 * 0x1a))) + 0x00002DFA));
    // str r1, [sp, #0x10]
    // add r4, r0, r3
    // sub r2, #0x16
    *((u8*)(*((u32*)(*((u32*)(((*((u8*)(0x1a + (0xb5 << 6))) << 0x1b) >> 0x1b) + (0xc0 * 0x1a))) + 0x00002DFA)) + 1)) = ((*((u8*)(*((u32*)(((*((u8*)(0x1a + (0xb5 << 6))) << 0x1b) >> 0x1b) + (0xc0 * 0x1a))) + 0x00002DBE)) << 0x1c) >> 0x1c);
    // str r1, [sp, #0x10]
    // str r1, [sp, #8]
    // add r7, sp, #0xc
    // add r3, r0, r1
    // add r1, #0x58
    // add r6, r0, r1
    *((u16*)(r7 + 0xc)) = *((u16*)(r1 + (0xb5 << 6)));
    *((u8*)(r7 + 0x18)) = ((*((u8*)((*((u8*)(*((u32*)(((*((u8*)(0x1a + (0xb5 << 6))) << 0x1b) >> 0x1b) + (0xc0 * 0x1a))) + 0x00002DBE)) << 0x1c) >> 0x1c)) << 0x1a) >> 0x1f);
    *((u8*)(r7 + 0x1c)) = ((*((u8*)((*((u8*)(*((u32*)(((*((u8*)(0x1a + (0xb5 << 6))) << 0x1b) >> 0x1b) + (0xc0 * 0x1a))) + 0x00002DBE)) << 0x1c) >> 0x1c)) << 0x1b) >> 0x1b);
    // tst r1, r2
    *((u8*)(r7 + 0x14)) = *((u16*)(r1 + 0x00002DFA));
    *((u8*)(r7 + 0x14)) = ((*((u8*)r6) << 0x1c) >> 0x1c);
    // add r0, #0xc0
    *((u32*)(r7 + 0x20)) = *((u32*)(r1 + 0x00002DA8));
    // ldr r1, [sp, #8]
    // add r3, #0xc0
    // add r6, #0xc0
    // str r1, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // mov r2, ip
    // add r3, sp, #0xc
    ov12_02262240(0x30, 1, *((u32*)(r1 + 0x00002DB0)), ((*((u8*)(*((u32*)(((*((u8*)(0x1a + (0xb5 << 6))) << 0x1b) >> 0x1b) + (0xc0 * 0x1a))) + 0x00002DBE)) << 0x1c) >> 0x1c));
}




void BattleController_EmitPlaySE(void) {
}




void BattleController_EmitFadeOutBattle(void) {
}




void BattleController_EmitToggleVanish(void) {
    // mov ip, r1
    // add r1, sp, #8
    // strb r3, [r1]
    *((u8*)(r1 + 1)) = r2;
    // mov r1, ip
    // add r2, r3, r2
    // tst r1, r2
    // add r7, sp, #8
    // add r1, sp, #8
    *((u8*)((1 << 0x18) + 2)) = 0;
    // str r3, [sp, #4]
    // add r2, r1, r3
    *((u16*)(r7 + 4)) = *((u16*)(0 + (0xb5 << 6)));
    // add r2, r1, r3
    *((u8*)(r7 + 0x10)) = ((*((u8*)(0 + 0x00002D66)) << 0x1a) >> 0x1f);
    // add r2, r1, r3
    *((u8*)(r7 + 0x14)) = ((*((u8*)(0 + 0x00002D66)) << 0x1b) >> 0x1b);
    // add r6, r1, r3
    // tst r1, r2
    *((u8*)(r7 + 0xc)) = *((u16*)(r6 + 0x00002DFA));
    // add r2, r1, r3
    *((u8*)(r7 + 0xc)) = ((*((u8*)(r6 + 0x00002DBE)) << 0x1c) >> 0x1c);
    // add r2, r1, r3
    // add r3, #0xc0
    *((u32*)(r7 + 0x18)) = *((u32*)(*((u32*)(r6 + 0x00002DB0)) + 0x00002DA8));
    // ldr r1, [sp, #4]
    // str r1, [sp, #4]
    // str r1, [sp]
    // mov r2, ip
    // add r3, sp, #8
    ov12_02262240(1, *((u32*)(r6 + 0x00002DB0)), 0);
}




void BattleController_EmitHealthbarStatus(void) {
}




void BattleController_EmitPrintTrainerMessage(void) {
}




void BattleController_EmitSetStatus2Effect(void) {
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r4, [sp, #8]
    // str r2, [sp, #0xc]
    // add r2, sp, #0x10
    // str r0, [sp]
    // add r3, sp, #0x10
}




void BattleController_EmitCopyStatus2Effect(void) {
    // ldr r2, [sp, #0x78]
    // str r2, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // str r2, [sp, #0xc]
    // add r2, sp, #0x10
    // str r0, [sp]
    // add r3, sp, #0x10
}




void BattleController_EmitPrintReturnMessage(void) {
    // add r0, sp, #4
    // strb r2, [r0]
    *((u8*)(r0 + 1)) = r3;
    // ldrsh r2, [r1, r0]
    // sub r1, r2, r0
    _s32_div_f((0x64 * r1), 0x20, 0x20);
    // add r1, sp, #4
    *((u16*)(r1 + 2)) = r0;
    // str r0, [sp]
    // add r3, sp, #4
    ov12_02262240(r5, 1, r4);
}




void BattleController_EmitPrintSendOutMessage(void) {
    // add r0, sp, #4
    // strb r1, [r0]
    *((u8*)(r0 + 1)) = r3;
    *((u16*)(r0 + 2)) = (0xfa << 2);
    _u32_div_f(((0xfa << 2) * (0xfa << 2)), *((u32*)(r1 + (0x00002E4C + 4))), 0x00002E4C);
    // add r1, sp, #4
    *((u16*)(r1 + 2)) = r0;
    // str r0, [sp]
    // add r3, sp, #4
    ov12_02262240(r5, 1, r4);
}




void BattleController_EmitPrintEncounterMessage(void) {
}




void BattleController_EmitPrintFirstSendOutMessage(void) {
    // str r2, [sp, #4]
    // add r1, sp, #8
    // strb r2, [r1]
    BattleSystem_GetMaxBattlers(0x23);
    // add r5, sp, #8
    // add r1, r7, r4
    *((u8*)(r5 + 4)) = *((u8*)(r1 + 0x0000219C));
    BattleSystem_GetMaxBattlers(r6);
    // str r0, [sp]
    // ldr r2, [sp, #4]
    // add r3, sp, #8
    ov12_02262240(r6, 1);
}




void ov12_0226399C(void) {
}




void ov12_022639B8(void) {
    // add r0, sp, #4
    // strb r1, [r0]
    // add r6, sp, #0x48
    // add r3, sp, #8
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // str r0, [sp]
    // add r3, sp, #4
}




void ov12_02263A00(void) {
}




void ov12_02263A1C(void) {
    // add r7, r5, r1
    // str r0, [sp, #4]
    BattleSystem_GetPartyMon(r2, *((u8*)(r7 + r2)));
    GetMonData(5, 0);
    // str r0, [sp, #0xc]
    GetMonData(r6, 0xa1, 0);
    // str r0, [sp, #8]
    // add r3, sp, #0x10
    // strb r0, [r3]
    // add r0, r5, r6
    *((u8*)(r3 + 1)) = *((u8*)(0xc0 + 0x00002D74));
    // add r1, #0x18
    // add r2, #0x1c
    *((u16*)(r3 + 2)) = *((u32*)(0xc0 + 0x00002D74));
    *((u16*)(r3 + 4)) = *((u32*)(0xc0 + 0x00002D74));
    *((u8*)(r3 + 6)) = *((u8*)(r7 + r4));
    GetBattlerStatusCondition(r5, r4, 0x00002D74);
    // add r1, sp, #0x10
    // and r0, r3
    *((u8*)(r1 + 7)) = (0x1f | (*((u8*)(r1 + 7)) & ~(0x1f)));
    // add r7, r5, r0
    // add r1, r5, r6
    // add r0, sp, #0x10
    *((u8*)((*((u32*)(r1 + 0x00002D54)) >> 0x1f) + 7)) = ((*((u8*)((*((u32*)(r1 + 0x00002D54)) >> 0x1f) + 7)) & ~(0x60)) | 0x40);
    // add r3, sp, #0x10
    // add r1, r5, r6
    *((u8*)(((r0 << 0x18) >> 0x18) + 7)) = (((((*((u8*)(((*((u8*)((*((u32*)(r1 + 0x00002D54)) >> 0x1f) + 7)) & ~(0x60)) | 0x40) + 0x00002DBE)) << 0x1c) >> 0x1c) << 0x1e) >> 0x19) | (*((u8*)(((r0 << 0x18) >> 0x18) + 7)) & ~(0x60)));
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #8]
    GetMonExpBySpeciesAndLevel((((((*((u8*)(((*((u8*)((*((u32*)(r1 + 0x00002D54)) >> 0x1f) + 7)) & ~(0x60)) | 0x40) + 0x00002DBE)) << 0x1c) >> 0x1c) << 0x1e) >> 0x19) | (*((u8*)(((r0 << 0x18) >> 0x18) + 7)) & ~(0x60))), ((*((u8*)((*((u32*)(r1 + 0x00002D54)) >> 0x1f) + 7)) & ~(0x60)) | 0x40), (*((u8*)(((r0 << 0x18) >> 0x18) + 7)) & ~(0x60)), ((r0 << 0x18) >> 0x18));
    // add r2, r5, r1
    // sub r0, r1, r0
    // ldr r1, [sp, #8]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    GetMonExpBySpeciesAndLevel((*((u32*)(r2 + 0x00002DA4)) + 1));
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #8]
    GetMonExpBySpeciesAndLevel();
    // sub r0, r5, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    BattleSystem_CheckMonCaught(*((u16*)(r7 + r6)));
    // add r3, sp, #0x10
    *((u8*)(r3 + 7)) = (((((r0 << 0x18) >> 0x18) << 0x1f) >> 0x18) | (*((u8*)(r3 + 7)) & ~(0x80)));
    // ldr r0, [sp, #4]
    BattleSystem_GetSafariBallCount((((((r0 << 0x18) >> 0x18) << 0x1f) >> 0x18) | (*((u8*)(r3 + 7)) & ~(0x80))), (*((u8*)(r3 + 7)) & ~(0x80)), 0x80);
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r3, sp, #0x10
    ov12_02262240(0x14, 1, r4);
}




void BattleController_EmitBattleMonToPartyMonCopy(void) {
    // str r2, [sp, #8]
    // add r2, sp, #0x10
    // strb r1, [r2]
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    // add r4, r6, r3
    // and r3, r4
    *((u8*)(r2 + 1)) = ((*((u8*)(r2 + 1)) & ~(0xf)) | 0xf);
    // ldr r1, [sp, #8]
    // str r3, [sp, #0xc]
    // add r3, r6, r1
    *((u8*)(r2 + 1)) = ((*((u8*)(r2 + 1)) & ~(0xf0)) | ((((((*((u32*)((0xc0 * ((*((u8*)(r2 + 1)) & ~(0xf)) | 0xf)) + 0x00002DCC)) << 0x1a) >> 0x1c) << 0x18) >> 0x18) << 0x1c) >> 0x18));
    // sub r4, #0x40
    // sub r1, #0x14
    *((u16*)(r2 + 2)) = *((u32*)((0xc0 * ((*((u8*)(r2 + 1)) & ~(0xf)) | 0xf)) + 0x00002DCC));
    *((u16*)(r2 + 0xc)) = *((u16*)((0xc0 * ((*((u8*)(r2 + 1)) & ~(0xf)) | 0xf)) + 0x00002DCC));
    // ldr r1, [sp, #8]
    BattleSystem_GetFieldSide(*((u16*)((0xc0 * ((*((u8*)(r2 + 1)) & ~(0xf)) | 0xf)) + 0x00002DCC)), (0xc0 * ((*((u8*)(r2 + 1)) & ~(0xf)) | 0xf)));
    // add r1, r6, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // add r2, r6, r0
    // add r1, sp, #0x10
    *((u16*)((*((u8*)(r2 + 0x00002D66)) << 0x1b) + 0x20)) = ((*((u8*)(r2 + 0x00002D66)) << 0x1b) >> 0x1b);
    // ldr r1, [sp, #8]
    // add r1, r6, r2
    // mov ip, r2
    // add r2, sp, #0x10
    // str r0, [sp, #0x34]
    *((u16*)((0xc0 * (*((u8*)(r2 + 0x00002D66)) << 0x1b)) + 0xe)) = *((u16*)((*((u8*)(r2 + 0x00002D66)) << 0x1b) + 0x00002D4C));
    *((u8*)((0xc0 * (*((u8*)(r2 + 0x00002D66)) << 0x1b)) + 0x16)) = *((u8*)((*((u8*)(r2 + 0x00002D66)) << 0x1b) + 0x00002D6C));
    // add r1, sp, #0x10
    // ldrsh r0, [r1, r0]
    // mov r0, ip
    // add r3, r6, r0
    // and r1, r2
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // add r1, r6, r0
    // str r0, [sp, #0x2c]
    // tst r0, r2
    // add r0, sp, #0x10
    *((u16*)((1 << 0x1a) + 0x2a)) = 1;
    // and r0, r2
    // str r0, [r6, r1]
    *((u16*)(0xFBFFFFFF + 0x2a)) = 0;
    // tst r0, r2
    // add r0, sp, #0x10
    *((u16*)((2 << 0x1a) + 0x28)) = 1;
    *((u16*)((2 << 0x1a) + 0x2a)) = 1;
    // and r0, r2
    // str r0, [r6, r1]
    *((u16*)(0xF7FFFFFF + 0x28)) = 0;
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #8]
    // add r3, sp, #0x10
    ov12_02262240(0x2c, 1, *((u32*)(r6 + (0x85 << 6))), ((*((u8*)(r2 + 0x00002D66)) << 0x1b) + 1));
}




void BattleController_EmitBackgroundSlideIn(void) {
}




void ov12_02263CCC(void) {
}




void BattleControl_EmitPartyStatusHeal(void) {
    // add r4, sp, #4
    // strb r5, [r4]
    *((u16*)(r4 + 2)) = r3;
    // add r3, r1, r3
    // add r3, sp, #4
    *((u8*)(r4 + 1)) = *((u8*)((0xc0 * r2) + 0x00002D67));
    // str r1, [sp]
    ov12_02262240(1, (0xc0 * r2));
}




void ov12_02263D14(void) {
    // add r0, sp, #4
    // strb r1, [r0]
    // str r0, [sp]
    // add r3, sp, #4
}




void BattleController_EmitPlayMosaicAnimation(void) {
}




void BattleController_EmitChangeForm(void) {
    // add r3, sp, #4
    // strb r1, [r3]
    // add r2, r1, r6
    *((u16*)(r3 + 2)) = *((u16*)(r2 + (0xb5 << 6)));
    // add r4, r2, r6
    // add r2, #0x26
    *((u8*)(r3 + 5)) = ((*((u8*)(r4 + (0xb5 << 6))) << 0x1a) >> 0x1f);
    // add r5, r2, r6
    // add r2, #0x70
    // tst r2, r4
    // add r2, #0xba
    // add r1, #0xa4
    *((u8*)(r3 + 4)) = *((u16*)(r5 + (0xb5 << 6)));
    // add r2, r2, r6
    // str r1, [sp, #0xc]
    // add r2, #0x7e
    // add r1, #0x68
    *((u8*)(r3 + 4)) = ((*((u8*)(r5 + *((u32*)(*((u32*)(r0 + 0x30)) + (0xb5 << 6))))) << 0x1c) >> 0x1c);
    // add r2, r2, r6
    // str r1, [sp, #0xc]
    // add r3, sp, #4
    // add r2, r1, r6
    // add r1, sp, #4
    *((u8*)((*((u8*)(*((u32*)(r0 + 0x30)) + 0x00002D66)) << 0x1b) + 1)) = ((*((u8*)(*((u32*)(r0 + 0x30)) + 0x00002D66)) << 0x1b) >> 0x1b);
    // str r1, [sp]
    ov12_02262240(1, r1);
}




void BattleController_EmitSetBattleBackground(void) {
}




void ov12_02263E18(void) {
}




void BattleController_EmitInitStartBallGauge(void) {
    // str r4, [sp]
    // add r2, sp, #4
    // str r0, [sp]
    // add r3, sp, #4
}




void BattleController_EmitDeleteStartBallGauge(void) {
    // str r4, [sp]
    // add r2, sp, #4
    // str r0, [sp]
    // add r3, sp, #4
}




void BattleController_EmitInitBallGauge(void) {
    // str r4, [sp]
    // add r2, sp, #4
    // str r0, [sp]
    // add r3, sp, #4
}




void BattleController_EmitDeleteBallGauge(void) {
    // str r4, [sp]
    // add r2, sp, #4
    // str r0, [sp]
    // add r3, sp, #4
}




void BattleController_EmitLoadBallGfx(void) {
}




void BattleController_EmitDeleteBallGfx(void) {
}




void BattleController_EmitIncrementGameStat(void) {
}




void BattleController_EmitShowWaitMessage(void) {
    BattleSystem_GetBattleType();
    // add r1, sp, #4
    // strb r2, [r1]
    *((u16*)(r1 + 2)) = 0;
    // tst r0, r1
    sub_0202FC48(4, 0);
    // tst r0, r1
    // add r1, sp, #8
    ov12_0223BE68(r5, *((u32*)(r5 + 0x0000240C)));
    // add r1, sp, #4
    *((u16*)(r1 + 2)) = r0;
    GF_AssertFail(*((u16*)(r1 + 2)));
    // str r0, [sp]
    // add r3, sp, #4
    ov12_02262240(r5, 1, r4);
}




void ov12_02263F8C(void) {
    // str r0, [sp, #4]
    // add r0, sp, #0xc
    // strb r1, [r0]
    // add r7, sp, #0xc
    // str r2, [sp, #8]
    // mov ip, r0
    // add r0, r3, r4
    // add r4, #0x58
    // add r6, r3, r4
    *((u16*)(r7 + 0x18)) = *((u16*)(r1 + (0xb5 << 6)));
    // add r4, #0x24
    // strb r5, [r4]
    // add r4, #0x28
    // strb r5, [r4]
    // tst r4, r5
    // add r4, #0x20
    // strb r5, [r4]
    // add r4, #0x20
    // strb r5, [r4]
    // add r3, #0xc0
    *((u32*)(r7 + 0x2c)) = *((u32*)(r1 + 0x00002DA8));
    // mov r4, ip
    // add r0, #0xc0
    // add r6, #0xc0
    // mov ip, r4
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #8]
    // add r3, sp, #0xc
    ov12_02262240(0x58, 1, (r7 + 4), r1);
}




void ov12_02264038(void) {
}




void ov12_02264054(void) {
}




void BattleController_EmitPrintResultMessage(void) {
}




void BattleController_EmitRunAwayMessage(void) {
    BattleSystem_GetBattleType();
    // str r0, [sp, #4]
    // add r0, sp, #8
    // strb r1, [r0]
    *((u8*)(r0 + 1)) = 0;
    *((u16*)(r0 + 2)) = 0;
    BattleSystem_GetMaxBattlers(r6, 0x3c);
    // add r7, sp, #8
    MaskOfFlagNo(r4);
    *((u8*)(r7 + 1)) = (r0 | *((u8*)(r7 + 1)));
    // add r5, #0x10
    BattleSystem_GetMaxBattlers(r6, *((u8*)(r7 + 1)));
    // ldr r0, [sp, #4]
    // tst r0, r1
    sub_0202FC48(4);
    // tst r0, r1
    // add r1, sp, #0xc
    ov12_0223BE68(r6, *((u32*)(r6 + 0x0000240C)));
    // add r1, sp, #8
    *((u16*)(r1 + 2)) = r0;
    GF_AssertFail(*((u16*)(r1 + 2)));
    // str r0, [sp]
    // add r3, sp, #8
    ov12_02262240(r6, 1, 0);
}




void BattleController_EmitForefitMessage(void) {
    BattleSystem_GetBattleType();
    // add r1, sp, #4
    // strb r2, [r1]
    *((u16*)(r1 + 2)) = 0;
    // tst r0, r1
    sub_0202FC48(4, 0);
    // tst r0, r1
    // add r1, sp, #8
    ov12_0223BE68(r4, *((u32*)(r4 + 0x0000240C)));
    // add r1, sp, #4
    *((u16*)(r1 + 2)) = r0;
    GF_AssertFail(*((u16*)(r1 + 2)));
    // str r0, [sp]
    // add r3, sp, #4
    ov12_02262240(r4, 1, 0);
}




void BattleController_EmitSwapToSubstituteSprite(void) {
    // str r0, [sp, #4]
    // add r0, sp, #0xc
    // strb r1, [r0]
    // add r7, sp, #0xc
    // str r2, [sp, #8]
    // mov ip, r0
    // add r0, r3, r4
    // add r4, #0x58
    // add r6, r3, r4
    *((u16*)(r7 + 0x18)) = *((u16*)(r1 + (0xb5 << 6)));
    // add r4, #0x24
    // strb r5, [r4]
    // add r4, #0x28
    // strb r5, [r4]
    // tst r4, r5
    // add r4, #0x20
    // strb r5, [r4]
    // add r4, #0x20
    // strb r5, [r4]
    // add r3, #0xc0
    *((u32*)(r7 + 0x2c)) = *((u32*)(r1 + 0x00002DA8));
    // mov r4, ip
    // add r0, #0xc0
    // add r6, #0xc0
    // mov ip, r4
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #8]
    // add r3, sp, #0xc
    ov12_02262240(0x58, 1, (r7 + 4), r1);
}




void BattleController_EmitPlayMoveSE(void) {
    // add r4, sp, #4
    // strb r3, [r4]
    // tst r3, r1
    *((u8*)(r4 + 1)) = 2;
    // tst r1, r5
    *((u8*)(r4 + 1)) = 1;
    *((u8*)(r4 + 1)) = 0;
    // str r1, [sp]
    // add r3, sp, #4
    ov12_02262240(1, *((u32*)(r1 + 0x0000216C)));
}




void BattleController_EmitPlaySong(void) {
}




void BattleController_EmitSetBattleResults(void) {
    BattleSystem_GetBattleType();
    // add r0, sp, #4
    // strb r1, [r0]
    BattleSystem_GetBattleOutcomeFlags(r5, 0x41);
    // str r0, [sp, #8]
    // add r0, sp, #4
    *((u16*)(r0 + 2)) = 0;
    // tst r0, r4
    sub_0202FC48(4, 0);
    // tst r0, r1
    // add r1, sp, #0xc
    ov12_0223BE68(r5, *((u32*)(r5 + 0x0000240C)));
    // add r1, sp, #4
    *((u16*)(r1 + 2)) = r0;
    GF_AssertFail(*((u16*)(r1 + 2)));
    // str r0, [sp]
    // add r3, sp, #4
    ov12_02262240(r5, 1, 0);
}




void BattleController_EmitBlankMessage(void) {
}




void ov12_0226430C(void) {
    // add r0, sp, #4
    // strb r2, [r0]
    // add r1, sp, #4
    // str r0, [sp]
    // add r3, sp, #4
}




void ov12_02264334(void) {
    // str r1, [sp]
    // add r0, r5, r2
    // add r6, r3, r6
    // add r6, r2, r6
    // strb r0, [r6, r7]
    // add r0, r4, r0
    // ldr r2, [sp]
    // strb r2, [r4, r3]
    // add r3, r5, r2
    // add r3, r3, r2
    // add r3, #0x94
    // strb r4, [r3]
    // str r0, [sp]
    // ldr r0, [sp]
}




void ov12_022643C8(void) {
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x24]
    // str r1, [sp, #0x24]
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #4]
    // str r1, [sp, #0x28]
    // strb r1, [r4]
    // add r1, sp, #0x10
    *((u16*)(r2 + 2)) = *((u16*)(0x16 + 0x1c));
    // ldr r1, [sp, #0x24]
    *((u16*)(r2 + 0x14)) = *((u16*)(0x16 + 0x1c));
    // ldr r1, [sp, #0x28]
    *((u16*)(r2 + 0x16)) = *((u16*)(0x16 + 0x1c));
    // ldr r1, [sp, #0x20]
    *((u32*)(r2 + 0x4c)) = r3;
    *((u32*)(r2 + 0x50)) = *((u16*)(0x16 + 0x1c));
    BattleSystem_GetTerrainId(*((u16*)(0x16 + 0x1c)));
    *((u32*)(r4 + 0x54)) = r0;
    *((u16*)(r4 + 0xe)) = (*((u16*)(r4 + 0xe)) & ~(4));
    // ldr r0, [sp, #8]
    *((u16*)(r4 + 0xe)) = (*((u16*)(r4 + 0xe)) & ~(8));
    // add r1, #0x10
    *((u32*)(r4 + 4)) = *((u32*)(8 + 0x00002144));
    // ldr r0, [sp, #8]
    // add r0, sp, #0x10
    // ldr r0, [sp, #8]
    // add r1, r0, r1
    *((u16*)(r4 + 8)) = *((u8*)((*((u16*)(*((u32*)(*((u32*)(8 + 0x00002144)) + 0x00002144)) + 0x1c)) << 4) + 0x000003E1));
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #8]
    // add r1, r0, r1
    // ldr r1, [sp, #8]
    *((u16*)(r4 + 0xc)) = *((u8*)((0xc0 * *((u8*)((*((u16*)(*((u32*)(*((u32*)(8 + 0x00002144)) + 0x00002144)) + 0x1c)) << 4) + 0x000003E1))) + 0x00002D75));
    // str r0, [sp]
    // ldr r0, [sp, #4]
    CheckAbilityActive(0xd, (0xc0 * *((u8*)((*((u16*)(*((u32*)(*((u32*)(8 + 0x00002144)) + 0x00002144)) + 0x1c)) << 4) + 0x000003E1))), 8, 0);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    CheckAbilityActive(0x4c, 8, 0);
    // ldr r0, [sp, #8]
    *((u32*)(r4 + 0x10)) = *((u32*)(r0 + (6 << 6)));
    *((u32*)(r4 + 0x10)) = 0;
    // ldr r0, [sp, #8]
    *((u16*)(r4 + 0xa)) = *((u32*)(0 + 0x00002164));
    // ldr r0, [sp, #8]
    // add r2, r0, r1
    // ldr r0, [sp, #0x24]
    // tst r0, r3
    // and r5, r3
    *((u16*)(r4 + 0xe)) = ((*((u16*)(r4 + 0xe)) & ~(1)) | ((0 << 0x10) >> 0x10));
    // tst r0, r1
    // ldr r1, [sp, #8]
    *((u16*)(r4 + 0xe)) = ((*((u16*)(r4 + 0xe)) & ~(2)) | ((((0 << 0x10) >> 0x10) << 0x1f) >> 0x1e));
    // add r6, r2, r5
    // add r5, #0x58
    // mov ip, r4
    // add r7, r3, r5
    // mov r3, ip
    *((u16*)((0xb5 << 6) + 0x18)) = *((u16*)(((((0 << 0x10) >> 0x10) << 0x1f) >> 0x1e) + (0xb5 << 6)));
    // add r3, r4, r0
    // add r3, #0x24
    // strb r5, [r3]
    // add r3, r4, r0
    // add r3, #0x28
    // strb r5, [r3]
    *((u32*)(r4 + 0x3c)) = *((u32*)(((((0 << 0x10) >> 0x10) << 0x1f) >> 0x1e) + (0xb7 << 6)));
    // tst r3, r5
    // add r3, r4, r0
    // add r3, #0x20
    // strb r5, [r3]
    // add r3, r4, r0
    // add r3, #0x20
    // strb r5, [r3]
    *((u32*)(r4 + 0x2c)) = *((u32*)(((((0 << 0x10) >> 0x10) << 0x1f) >> 0x1e) + 0x00002DA8));
    // mov r3, ip
    // add r1, #0xc0
    // mov ip, r3
    // add r6, #0xc0
    // add r7, #0xc0
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x24]
    ov12_0223C140((0 + 1), ((((0 << 0x10) >> 0x10) << 0x1f) >> 0x1e), (r4 + 4), (*((u32*)(((((0 << 0x10) >> 0x10) << 0x1f) >> 0x1e) + 0x00002DA8)) + 2));
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0x24]
    // add r2, r2, r1
    *((u16*)(r4 + 0xe)) = (4 | *((u16*)(r4 + 0xe)));
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x28]
    ov12_0223C140((4 | *((u16*)(r4 + 0xe))), *((u16*)(r4 + 0xe)));
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0x28]
    // add r2, r2, r1
    *((u16*)(r4 + 0xe)) = (8 | *((u16*)(r4 + 0xe)));
}




void ov12_022645C8(void) {
    // add r0, sp, #4
    // add r0, sp, #4
    // strb r1, [r0]
    // str r0, [sp]
    // add r3, sp, #4
}




void ov12_022645F8(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // str r1, [sp, #4]
    // str r0, [sp, #0x38]
    MIi_CpuClearFast(0, r2, 8);
    // ldr r0, [sp]
    BattleSystem_GetBattleType();
    // and r0, r4
    // strb r6, [r5]
    // tst r0, r4
    // ldr r0, [sp]
    // ldr r1, [sp, #0x38]
    BattleSystem_GetFieldSide(0x10);
    // ldr r0, [sp]
    // ldr r1, [sp, #0x38]
    BattleSystem_GetFieldSide();
    // ldr r0, [sp]
    // ldr r1, [sp, #0x38]
    ov12_0223AB0C();
    // ldr r0, [sp]
    // ldr r1, [sp, #0x38]
    ov12_0223AB0C();
    // ldr r6, [sp, #0x38]
    // ldr r0, [sp]
    BattleSystem_GetBattlerIdPartner(r6);
    // str r0, [sp, #0x38]
    // ldr r0, [sp]
    // ldr r1, [sp, #0x38]
    BattleSystem_GetBattlerIdPartner();
    // ldr r0, [sp]
    BattleSystem_GetParty(r0);
    // str r0, [sp, #0x10]
    Party_GetCount();
    // ldr r0, [sp, #4]
    // add r6, r0, r1
    // ldr r0, [sp, #0x10]
    Party_GetMonByIndex(6, *((u8*)(r6 + 0x0000312C)));
    // str r0, [sp, #0x14]
    GetMonData(0xae, 0);
    // ldr r0, [sp, #0x14]
    GetMonData(0xa3, 0);
    // ldr r0, [sp, #0x14]
    GetMonData(0xa0, 0);
    // add r1, r5, r4
    *((u8*)(r1 + 2)) = 3;
    // add r1, r5, r4
    *((u8*)(r1 + 2)) = 1;
    // add r1, r5, r4
    *((u8*)(r1 + 2)) = 2;
    // ldr r0, [sp, #0x10]
    Party_GetCount(2);
    // ldr r0, [sp]
    // ldr r1, [sp, #0x38]
    BattleSystem_GetParty();
    // str r0, [sp, #8]
    Party_GetCount();
    // ldr r0, [sp, #0x38]
    // ldr r0, [sp, #4]
    // add r6, r0, r1
    // ldr r0, [sp, #8]
    Party_GetMonByIndex(*((u8*)(r6 + 0x0000312C)));
    // str r0, [sp, #0x18]
    GetMonData(0xae, 0);
    // ldr r0, [sp, #0x18]
    GetMonData(0xa3, 0);
    // ldr r0, [sp, #0x18]
    GetMonData(0xa0, 0);
    // add r1, r5, r4
    *((u8*)(r1 + 2)) = 3;
    // add r1, r5, r4
    *((u8*)(r1 + 2)) = 1;
    // add r1, r5, r4
    *((u8*)(r1 + 2)) = 2;
    // ldr r0, [sp, #8]
    Party_GetCount(2);
    // tst r0, r4
    // tst r0, r4
    // ldr r0, [sp, #0x38]
    // and r0, r1
    // str r0, [sp, #0x38]
    // ldr r0, [sp]
    // ldr r1, [sp, #0x38]
    BattleSystem_GetParty(8, 1);
    // str r0, [sp, #0xc]
    Party_GetCount();
    // ldr r0, [sp, #0x38]
    // ldr r0, [sp, #4]
    // add r6, r0, r1
    // ldr r0, [sp, #0xc]
    Party_GetMonByIndex(*((u8*)(r6 + 0x0000312C)));
    // str r0, [sp, #0x1c]
    GetMonData(0xae, 0);
    // ldr r0, [sp, #0x1c]
    GetMonData(0xa3, 0);
    // ldr r0, [sp, #0x1c]
    GetMonData(0xa0, 0);
    // add r1, r5, r4
    *((u8*)(r1 + 2)) = 3;
    // add r1, r5, r4
    *((u8*)(r1 + 2)) = 1;
    // add r1, r5, r4
    *((u8*)(r1 + 2)) = 2;
    // ldr r0, [sp, #0xc]
    Party_GetCount(2);
}



