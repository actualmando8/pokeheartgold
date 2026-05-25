/* Decompiled from asm/unk_02017FAC.s */
#include "global.h"

void sub_02017FAC(void) {
    /* Original at 0x02017FAC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02017FC8 ; =_020F6280\n    mov r2, #0\n    ldrh r1, [r3, #2]\n    cmp r0, r1\n    bhs _02017FBA\n    add r0, r2, #0\n    bx lr\n    add r2, r2, #1\n    add r3, r3, #2\n    cmp r2, #2\n    blt _02017FB0\n    add r0, r2, #0\n    bx lr\n    nop\n    _02017FC8: .word _020F6280"
    );
    #endif
}

void sub_02017FCC(void) {
    sub_02017FAC();
}

void sub_02017FE4(void) {
    GF_AssertFail();
}

void LocationIsDiamondPearlCompatible(void) {
    /* Original at 0x02018000 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #MAPSEC_TWINLEAF_TOWN\n    blo _02018008\n    cmp r0, #MAPSEC_BATTLE_PARK\n    bls _02018022\n    mov r1, #METLOC_DAY_CARE_COUPLE>>4\n    lsl r1, r1, #4\n    cmp r0, r1\n    blo _02018016\n    add r1, #METLOC_RILEY-METLOC_DAY_CARE_COUPLE\n    cmp r0, r1\n    bls _02018022\n    ldr r1, _0201802C ; =METLOC_LOVELY_PLACE\n    cmp r0, r1\n    blo _02018026\n    add r1, #METLOC_CONCERT_EVENT-METLOC_LOVELY_PLACE\n    cmp r0, r1\n    bhi _02018026\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _0201802C: .word METLOC_LOVELY_PLACE"
    );
    #endif
}
