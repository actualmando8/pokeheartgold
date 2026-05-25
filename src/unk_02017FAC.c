/* Decompiled from asm/unk_02017FAC.s */
#include "global.h"

void sub_02017FAC(void) {
    // ldr r3, _02017FC8 ; =_020F6280
    // mov r2, #0
    // ldrh r1, [r3, #2]
    // cmp r0, r1
    // bhs _02017FBA
    // add r0, r2, #0
    // bx lr
    // add r2, r2, #1
    // add r3, r3, #2
    // cmp r2, #2
    // blt _02017FB0
    // add r0, r2, #0
    // bx lr
    // nop
    // _02017FC8: .word _020F6280
    // TODO: decompile
}


void sub_02017FCC(void) {
    sub_02017FAC();
}


void sub_02017FE4(void) {
    GF_AssertFail();
}


void LocationIsDiamondPearlCompatible(void) {
    // cmp r0, #MAPSEC_TWINLEAF_TOWN
    // blo _02018008
    // cmp r0, #MAPSEC_BATTLE_PARK
    // bls _02018022
    // mov r1, #METLOC_DAY_CARE_COUPLE>>4
    // lsl r1, r1, #4
    // cmp r0, r1
    // blo _02018016
    // add r1, #METLOC_RILEY-METLOC_DAY_CARE_COUPLE
    // cmp r0, r1
    // bls _02018022
    // ldr r1, _0201802C ; =METLOC_LOVELY_PLACE
    // cmp r0, r1
    // blo _02018026
    // add r1, #METLOC_CONCERT_EVENT-METLOC_LOVELY_PLACE
    // cmp r0, r1
    // bhi _02018026
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _0201802C: .word METLOC_LOVELY_PLACE
    // TODO: decompile
}

