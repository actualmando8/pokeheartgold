/* Decompiled from asm/overlay_80_02238034.s */
#include "global.h"

void ov80_02238034(void) {
    // add r0, r3, r0
    // sub r5, r0, r4
    // sub r5, r0, r4
    LCRandom(*((u16*)(ov80_0223D516 + ((7 << 3) << 3))), ((7 << 3) << 3), (r2 + 1));
    _s32_div_f(r5);
    // add r0, r4, r1
}




void ov80_022380A0(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // strh r0, [r5]
}




void BattleArcade_GetMonCount(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022380FA: ; jump table
}




void BattleArcade_GetOpponentMonCount(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223812E: ; jump table
}




void BattleArcade_NewBattleSetup(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r2, [r4, r1]
    // str r2, [r4, r0]
    // add r1, #0x28
    // str r0, [r4, r1]
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // str r1, [sp, #0x1c]
    // add r0, sp, #0x20
    // add r1, r7, r1
    // add r1, #0x78
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // add r1, sp, #0x20
    // add r5, #0x34
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // sub r0, r1, r0
    // add r0, sp, #0x20
    // add r1, r7, r1
    // add r1, #0x78
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // add r1, sp, #0x20
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #8]
}




void ov80_02238344(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02238354: ; jump table
}




u8 ov80_02238370(void) {
}




void BattleArcade_MultiplayerCheck(void) {
    // cmp r0, #2
    // beq _0223837C
    // cmp r0, #3
    // bne _02238380
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov80_02238384(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
}




void ov80_022383A8(void) {
}




void ov80_022383C0(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // add r4, r5, r0
    // str r1, [sp, #4]
    // add r2, sp, #4
    // ldr r0, [sp]
    // add r4, #0x38
}




void ov80_02238430(void) {
}




void ov80_02238444(void) {
    // add r1, r0, r1
    // add r1, #0x78
    // add r1, r2, r1
    ov80_02238498(7, ((0x0000FEC9 << 0x10) >> 0x10), *((u16*)(*((u8*)(r0 + 0x11)) << 1)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223847E: ; jump table
}




void ov80_02238498(void) {
    BattleArcade_MultiplayerCheck(*((u8*)(r0 + 0x10)));
}




void ov80_022384BC(void) {
    // cmp r0, #9
    // bhs _022384C4
    // mov r0, #0
    // bx lr
    // cmp r0, #0x12
    // bhs _022384CC
    // mov r0, #1
    // bx lr
    // cmp r0, #0x1b
    // bhs _022384D4
    // mov r0, #2
    // bx lr
    // mov r0, #3
    // bx lr
    // TODO: decompile
}



