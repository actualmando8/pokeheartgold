/* Decompiled from asm/overlay_80_02236450.s */
#include "global.h"

void ov80_02236450(void) {
    ov80_02236B04(*((u8*)(r0 + 0xf)));
    // ldr r2, [sp, #0x3c]
    ov80_02229F04(r4, r6, r0);
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // add r4, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x10]
    ov80_022364A4(r5, r6, r4);
    // ldr r0, [sp, #0x14]
    Heap_Free();
}



void ov80_022364A4(void) {
    // ldr r0, [sp, #0x9c]
    // str r2, [sp, #0x18]
    // str r0, [sp, #0x9c]
    // ldr r0, [sp, #0xa0]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0xa0]
    // ldr r0, [sp, #0xa4]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0xa4]
    // ldr r0, [sp, #0xa8]
    // str r0, [sp, #0xa8]
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x88
    GF_AssertFail(*((u8*)(0 + 0x10)));
    // add r0, sp, #0x88
    // str r4, [sp, #0x30]
    // add r0, sp, #0x74
    // str r0, [sp, #0x24]
    FrontierFieldSystem_0204B510(r7);
    // ldr r1, [sp, #0x14]
    _s32_div_f(*((u16*)(r1 + 2)));
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    // str r0, [sp, #0x34]
    ov80_02236AF0(*((u8*)(r7 + 0xf)), ((r1 << 0x18) >> 0x17));
    // ldr r1, [sp, #0x34]
    // add r0, sp, #0x44
    ov80_02229EF4(r0);
    // str r0, [sp, #0x40]
    // add r5, sp, #0x74
    ov80_02236AF0(*((u8*)(r7 + 0xf)));
    // add r0, sp, #0x54
    ov80_02229EF4(*((u32*)r5), r0);
    // add r0, sp, #0x44
    // ldrh r0, [r0]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x40]
    // ldr r0, [sp, #0x9c]
    // add r1, sp, #0x44
    // ldrh r3, [r1]
    // ldr r2, [sp, #0x9c]
    // ldrh r1, [r2]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x20]
    // add r5, sp, #0x74
    ov80_02236AF0(*((u8*)(r7 + 0xf)), *((u16*)(r0 + 0x10)), (r2 + 2));
    // add r0, sp, #0x54
    ov80_02229EF4(*((u32*)r5), r0);
    // add r0, sp, #0x44
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0xa0]
    // add r1, sp, #0x44
    // ldr r2, [sp, #0xa0]
    // ldrh r1, [r2]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r1, [sp, #0x34]
    // ldr r0, [sp, #0x24]
    // stmia r0!, {r1}
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    GetFrontierTrainerIVs(((0 + 1) + 1), *((u16*)(r0 + 0x1c)), (r2 + 2), *((u16*)(*((u16*)(r0 + 0x1c)) + 0xc)));
    // str r0, [sp, #0x3c]
    FrontierFieldSystem_0204B510(r7);
    FrontierFieldSystem_0204B510(r7);
    // orr r0, r5
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x74
    // str r0, [sp, #0x28]
    // add r6, sp, #0x64
    // str r0, [sp]
    // ldr r0, [sp, #0x3c]
    // ldr r2, [sp, #0x28]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xa8]
    // ldr r3, [sp, #0x38]
    // str r0, [sp, #0x10]
    ov80_02236734(r7, ((*((u32*)r2) << 0x10) >> 0x10));
    // stmia r6!, {r0}
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // add r0, #0x38
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0xa4]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x38]
    // ldr r2, [sp, #0xa4]
    // str r1, [r0]
    // add r0, sp, #0x74
    // add r1, sp, #0x64
    // ldr r4, [sp, #0xa4]
    *((u16*)(r4 + 4)) = *((u32*)(r0 + 4));
    *((u32*)(r2 + 8)) = *((u32*)r1);
    // ldr r4, [sp, #0xa4]
    // str r4, [sp, #0xa4]
    // ldr r0, [sp, #0x2c]
}



void ov80_02236698(void) {
    MI_CpuFill8(r1, 0, (0x11 << 4));
    sub_0202D928(r6);
    sub_0202D7B0();
    ov80_022366D4(r5, r4);
    sub_0202D804(r6, r5, r4);
}



void ov80_022366D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r2, #0x11
    // add r4, r1, #0
    // mov r1, #0
    // lsl r2, r2, #4
    // add r5, r0, #0
    // bl MI_CpuFill8
    // mov r0, #6
    // mul r0, r4
    // ldr r1, _02236728 ; =ov80_0223C050
    // str r0, [sp]
    // add r6, r1, r0
    // ldr r1, _0223672C ; =ov80_0223C07C
    // mov r2, #0x30
    // add r0, r4, #0
    // mul r0, r2
    // add r0, r1, r0
    // add r1, r5, #0
    // ldr r7, _02236730 ; =ov80_0223C0AC
    // bl MI_CpuCopy8
    // ldr r1, _02236728 ; =ov80_0223C050
    // ldr r0, [sp]
    // mov r4, #0
    // ldrh r0, [r1, r0]
    // strh r0, [r5, #6]
    // add r5, #0x30
    // add r0, r6, r4
    // ldrb r1, [r0, #2]
    // mov r0, #0x38
    // mov r2, #0x38
    // mul r0, r1
    // add r0, r7, r0
    // add r1, r5, #0
    // bl MI_CpuCopy8
    // add r4, r4, #1
    // add r5, #0x38
    // cmp r4, #4
    // blt _0223670C
    // pop {r3, r4, r5, r6, r7, pc}
    // _02236728: .word ov80_0223C050
    // _0223672C: .word ov80_0223C07C
    // _02236730: .word ov80_0223C0AC
    // TODO: decompile
}



void ov80_02236734(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r1, #0
    // add r4, r0, #0
    // add r6, r2, #0
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #0x38
    // str r3, [sp]
    // bl MI_CpuFill8
    // ldrb r0, [r4, #0xf]
    // bl ov80_02236AF0
    // add r2, r0, #0
    // add r0, sp, #8
    // add r1, r6, #0
    // bl ov80_02229EF4
    // add r2, sp, #8
    // ldrh r0, [r5]
    // ldr r1, _022368E4 ; =0xFFFFF800
    // ldrh r3, [r2]
    // and r0, r1
    // lsr r1, r1, #0x15
    // and r1, r3
    // orr r0, r1
    // strh r0, [r5]
    // ldrh r1, [r5]
    // ldr r0, _022368E8 ; =0xFFFF07FF
    // and r1, r0
    // ldrh r0, [r2, #0xe]
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x10
    // orr r0, r1
    // strh r0, [r5]
    // ldr r0, [sp, #0x3c]
    // cmp r0, #0
    // beq _0223678E
    // add r0, sp, #0x20
    // ldrb r0, [r0, #0x18]
    // lsl r1, r0, #1
    // ldr r0, _022368EC ; =ov80_0223C048
    // ldrh r0, [r0, r1]
    // b _02236790
    // ldrh r0, [r2, #0xc]
    // strh r0, [r5, #2]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // mov r0, #0
    // add r1, sp, #8
    // add r2, r5, #0
    // add r3, r0, #0
    // ldrh r6, [r1, #2]
    // strh r6, [r2, #4]
    // ldrh r6, [r1, #2]
    // cmp r6, #0xda
    // bne _022367AA
    // str r3, [sp, #4]
    // add r0, r0, #1
    // add r1, r1, #2
    // add r2, r2, #2
    // cmp r0, #4
    // blt _0223679E
    // ldr r0, [sp]
    // ldr r7, [sp, #0x30]
    // str r0, [r5, #0xc]
    // cmp r7, #0
    // bne _022367F0
    // add r0, r4, #0
    // bl FrontierFieldSystem_0204B510
    // add r6, r0, #0
    // add r0, r4, #0
    // bl FrontierFieldSystem_0204B510
    // lsl r0, r0, #0x10
    // add r7, r6, #0
    // orr r7, r0
    // add r0, r7, #0
    // bl GetNatureFromPersonality
    // add r1, sp, #8
    // ldrb r1, [r1, #0xb]
    // cmp r1, r0
    // bne _022367BE
    // ldr r0, [sp]
    // add r1, r7, #0
    // bl CalcShininessByOtIdAndPersonality
    // cmp r0, #1
    // beq _022367BE
    // str r7, [r5, #0x10]
    // b _022367F2
    // str r7, [r5, #0x10]
    // add r0, sp, #0x20
    // ldrb r1, [r0, #0x14]
    // ldr r2, [r5, #0x14]
    // mov r0, #0x1f
    // bic r2, r0
    // mov r0, #0x1f
    // and r0, r1
    // orr r2, r0
    // ldr r0, _022368F0 ; =0xFFFFFC1F
    // mov r6, #0
    // and r2, r0
    // lsl r0, r1, #0x1b
    // lsr r1, r0, #0x16
    // orr r2, r1
    // ldr r1, _022368F4 ; =0xFFFF83FF
    // add r4, r6, #0
    // and r2, r1
    // lsr r1, r0, #0x11
    // orr r2, r1
    // ldr r1, _022368F8 ; =0xFFF07FFF
    // and r2, r1
    // lsr r1, r0, #0xc
    // orr r2, r1
    // ldr r1, _022368FC ; =0xFE0FFFFF
    // and r2, r1
    // lsr r1, r0, #7
    // orr r2, r1
    // ldr r1, _02236900 ; =0xC1FFFFFF
    // lsr r0, r0, #2
    // and r1, r2
    // orr r0, r1
    // str r0, [r5, #0x14]
    // add r0, r4, #0
    // bl MaskOfFlagNo
    // add r1, sp, #8
    // ldrb r1, [r1, #0xa]
    // tst r0, r1
    // beq _02236842
    // add r6, r6, #1
    // add r4, r4, #1
    // cmp r4, #6
    // blt _02236832
    // ldr r0, _02236904 ; =0x000001FE
    // add r1, r6, #0
    // bl _s32_div_f
    // cmp r0, #0xff
    // ble _02236856
    // mov r0, #0xff
    // lsl r0, r0, #0x18
    // mov r4, #0
    // lsr r6, r0, #0x18
    // add r0, r4, #0
    // bl MaskOfFlagNo
    // add r1, sp, #8
    // ldrb r1, [r1, #0xa]
    // tst r0, r1
    // beq _0223686E
    // add r0, r5, r4
    // strb r6, [r0, #0x18]
    // add r4, r4, #1
    // cmp r4, #6
    // blt _0223685C
    // mov r0, #0
    // strb r0, [r5, #0x1e]
    // ldr r0, _02236908 ; =gGameLanguage
    // mov r1, #0x19
    // ldrb r0, [r0]
    // strb r0, [r5, #0x1f]
    // ldrh r0, [r5]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x15
    // bl GetMonBaseStat
    // cmp r0, #0
    // beq _022368B2
    // ldr r2, [r5, #0x10]
    // mov r1, #1
    // tst r1, r2
    // beq _0223689E
    // add r1, r5, #0
    // add r1, #0x20
    // strb r0, [r1]
    // b _022368C4
    // ldrh r0, [r5]
    // mov r1, #0x18
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x15
    // bl GetMonBaseStat
    // add r1, r5, #0
    // add r1, #0x20
    // strb r0, [r1]
    // b _022368C4
    // ldrh r0, [r5]
    // mov r1, #0x18
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x15
    // bl GetMonBaseStat
    // add r1, r5, #0
    // add r1, #0x20
    // strb r0, [r1]
    // add r1, r5, #0
    // ldr r0, [sp, #4]
    // add r1, #0x21
    // strb r0, [r1]
    // ldrh r0, [r5]
    // add r5, #0x22
    // ldr r1, [sp, #0x40]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x15
    // add r2, r5, #0
    // bl GetSpeciesNameIntoArray
    // add r0, r7, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022368E4: .word 0xFFFFF800
    // _022368E8: .word 0xFFFF07FF
    // _022368EC: .word ov80_0223C048
    // _022368F0: .word 0xFFFFFC1F
    // _022368F4: .word 0xFFFF83FF
    // _022368F8: .word 0xFFF07FFF
    // _022368FC: .word 0xFE0FFFFF
    // _02236900: .word 0xC1FFFFFF
    // _02236904: .word 0x000001FE
    // _02236908: .word gGameLanguage
    // TODO: decompile
}



void ov80_0223690C(void) {
    ov80_02236A88(*((u8*)(r0 + 0xf)));
    BattleSetup_New(*((u32*)(r5 + 4)), r0);
    SaveArray_Party_Get(*((u32*)(r4 + 8)));
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_02051D18(r7, 0, *((u32*)(r4 + 8)), *((u32*)(r4 + 0x18)));
    // str r1, [r7, r0]
    // str r1, [r7, r0]
    AllocMonZeroed(*((u32*)(r5 + 4)), 0x12);
    Party_InitWithMaxSize(*((u32*)(r7 + 4)), *((u8*)(r5 + 0xe)));
    // add r1, r5, r6
    // add r1, #0x2a
    // ldrb r1, [r1]
    // ldr r0, [sp, #8]
    Party_GetMonByIndex(*((u8*)(r5 + 0xe)));
    CopyPokemonToPokemon(r4);
    GetMonData(r4, 0xa1, 0);
    GetMonData(r4, 5, 0);
    GetMonExpBySpeciesAndLevel(0x32);
    // str r0, [sp, #0xc]
    // add r2, sp, #0xc
    SetMonData(r4, 8);
    CalcMonLevelAndStats(r4);
    BattleSetup_AddMonToParty(r7, r4, 0);
    Heap_Free(r4);
    BattleSetup_SetAllySideBattlersToPlayer(r7);
    // str r0, [sp]
    // add r1, #0x78
    ov80_02236A34(r7, r5, *((u8*)(r5 + 0xe)), 1);
    *((u32*)(r7 + 0x34)) = 7;
    // add r1, #0x34
    // str r0, [sp]
    // add r1, r5, r1
    // add r2, r3, r2
    // add r1, r1, r2
    ov80_02236A34(r7, (0xa6 << 2), *((u8*)(r5 + 0xe)), 2);
    // str r0, [sp]
    // add r1, r5, r1
    ov80_02236A34(r7, (0x62 << 2), *((u8*)(r5 + 0xe)), 3);
}



void ov80_02236A34(void) {
    // ldr r4, [sp, #0x28]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r4, [sp]
    ov80_0222A480();
    // ldr r0, [sp, #0x28]
    AllocMonZeroed();
    // ldr r0, [sp, #8]
    // add r5, #0x30
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // str r0, [sp, #0xc]
    ov80_0222A140(r5, r0, 0x78);
    // ldr r0, [sp, #0xc]
    Party_AddMon(*((u32*)(r0 + 4)), r4);
    // add r5, #0x38
    Heap_Free(r4);
}



void ov80_02236A88(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02236A98: ; jump table
}



void ov80_02236ABC(void) {
    // ldrb r3, [r0, #0x10]
    // mov r2, #8
    // bic r3, r2
    // lsl r2, r1, #0x18
    // lsr r2, r2, #0x18
    // lsl r2, r2, #0x1f
    // lsr r2, r2, #0x1c
    // orr r2, r3
    // strb r2, [r0, #0x10]
    // ldr r2, _02236AD4 ; =0x0000083E
    // strh r1, [r0, r2]
    // bx lr
    // _02236AD4: .word 0x0000083E
    // TODO: decompile
}



void ov80_02236AD8(void) {
    // ldrh r0, [r1]
}



void ov80_02236AF0(void) {
}



void ov80_02236B04(void) {
}



void ov80_02236B18(void) {
}



void ov80_02236B30(void) {
    sub_02034818(0);
    GF_AssertFail();
    sub_02034818(1);
    GF_AssertFail();
    PlayerProfile_GetVersion(r5);
    PlayerProfile_GetVersion(r4);
}


