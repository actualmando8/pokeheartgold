/* Decompiled from asm/unk_0205CB48.s */
#include "global.h"

void PlayerAvatar_MoveControl(void) {
    // mvn r1, r1
    // add r2, sp, #8
    // add r3, sp, #8
    // ldr r0, [sp, #0x1c]
    // add r0, sp, #8
    // str r0, [sp]
}





void sub_0205CBE4(void) {
}





void sub_0205CBEC(void) {
    // mvn r0, r0
}





void sub_0205CC4C(void) {
}





void sub_0205CC74(void) {
}





void sub_0205CC94(void) {
    PlayerAvatar_GetUnk10();
    PlayerAvatar_GetMapObject(r6);
    sub_0205F504();
    MapObject_GetMovementCommand(r4);
    sub_02062390();
    // mvn r0, r0
    sub_02060FA8(r4, r0);
    sub_0205B984(r5);
    // mov r0, #SEQ_SE_DP_FOOT3_0>>6
    PlaySE((r0 << 6));
    sub_0205B7A4(r5);
    PlaySE(SEQ_SE_DP_FOOT3_1);
    sub_0205B798(r5);
    sub_0205B8AC(r5);
    PlaySE(SEQ_SE_DP_MARSH_WALK);
    MapObject_GetMovementCommand(r4);
    // str r0, [sp]
    PlayerAvatar_GetState(r6);
    // ldr r0, [sp]
    sub_0205DE64();
    sub_0205B6F4(r5);
    sub_0205B6F4(r7);
    PlaySE(SEQ_SE_DP_KUSA);
    MetatileBehavior_IsEncounterGrass(r5);
    MetatileBehavior_IsEncounterGrass(r7);
    PlaySE(SEQ_SE_GS_KUSA2);
    sub_0205CD70(r4, r6);
}





void sub_0205CD70(void) {
    MapObject_GetMovementCommand();
    sub_02062390();
    // str r0, [sp]
    sub_0205F504(r6);
    sub_0205F504(r6);
    sub_0205B6F4(((r0 << 0x18) >> 0x18));
    sub_0205B984(r7);
    sub_0205B7A4(r7);
    MetatileBehavior_IsEncounterGrass(r7);
    // ldr r0, [sp]
    // mvn r1, r1
    // ldr r1, [sp]
    sub_02060FE0(r6, 0);
    PlayerAvatar_ResetUnkC(r5, *((u16*)(_020FCB98 + (((r0 << 0x18) >> 0x18) << 2))));
    PlayerAvatar_GetUnk14(r5);
    PlayerAvatar_ResetUnkC(r5);
    PlayerAvatar_ToggleUnkC(r5);
    PlayerAvatar_GetUnkC(r5);
    PlayerAvatar_GetState(r5);
    sub_0205DE98(r5);
    sub_02006088(*((u16*)(_020FCB98 + (1 << 2))), (1 << 2));
    PlaySE(*((u16*)(_020FCB98 + r1)));
    sub_02005BA8(r4);
    GF_AssertFail();
}





void PlayerAvatar_UpdateMovement(void) {
    // mvn r1, r1
}





void sub_0205CF44(void) {
}





BOOL sub_0205CF60(void) {
}





void sub_0205CFBC(void) {
}





void sub_0205D004(void) {
}





void sub_0205D01C(void) {
    PlayerAvatar_GetMapObject();
    sub_0205F504();
    sub_0205E078(r5, r0, r6);
    PlayerAvatar_CheckFlag1(r5);
    // blx r1
    // add r5, #8
}





void sub_0205D07C(void) {
    // blx r2
}





void sub_0205D09C(void) {
}





void sub_0205D0A8(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    // mvn r1, r1
}





void sub_0205D190(void) {
}





void sub_0205D1FC(void) {
}





void sub_0205D240(void) {
    // add r1, sp, #0xc
    // add r4, sp, #0xc
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, sp, #0
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0x10]
}





void sub_0205D2A0(void) {
    // bpl _0205D2C4
}





void sub_0205D2D0(void) {
    // add r5, #0xe4
}





void sub_0205D340(void) {
    // str r2, [sp, #8]
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205D36A: ; jump table
    // str r4, [sp]
    // add r0, sp, #0x10
    // ldr r3, [sp, #8]
    // str r0, [sp, #4]
    // str r4, [sp]
    // add r0, sp, #0x10
    // ldr r3, [sp, #8]
    // str r0, [sp, #4]
}





void sub_0205D3A8(void) {
    // add r3, sp, #8
    // str r0, [sp]
    // add r3, sp, #8
    // str r0, [sp]
    // add r3, sp, #8
    // str r0, [sp]
}





void sub_0205D40C(void) {
}





void sub_0205D428(void) {
}





void sub_0205D44C(void) {
}





void sub_0205D450(void) {
    // mvn r1, r1
}





void sub_0205D494(void) {
}





void sub_0205D4B4(void) {
    // str r3, [sp, #4]
    // tst r0, r4
    // str r0, [sp]
    // str r0, [sp]
    // tst r0, r4
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // ldr r0, [sp, #8]
    // add r1, r4, r1
    // add r2, r3, r2
    // mov r0, #SEQ_SE_DP_WALL_HIT>>8
    // str r0, [sp, #4]
    // add r1, sp, #0x18
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // tst r0, r4
    // mov r0, #SEQ_SE_DP_WALL_HIT>>8
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add r4, #0xe4
}





void sub_0205D610(void) {
}





void sub_0205D640(void) {
}





void sub_0205D658(void) {
}





void sub_0205D684(void) {
}





void sub_0205D6B4(void) {
    // bpl _0205D6C6
}





void sub_0205D6E8(void) {
    // str r3, [sp, #4]
    // ldr r5, [sp, #0x20]
    // ldr r4, [sp, #0x24]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205D70C: ; jump table
    // ldr r2, [sp, #4]
    // str r4, [sp]
    // ldr r2, [sp, #4]
    // str r4, [sp]
    // ldr r2, [sp, #4]
    // str r4, [sp]
    // ldr r2, [sp, #4]
    // str r4, [sp]
}





void sub_0205D75C(void) {
}





void sub_0205D778(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205D78A: ; jump table
}





void sub_0205D7AC(void) {
    // mvn r0, r0
}





void sub_0205D818(void) {
}





void sub_0205D83C(void) {
    // tst r0, r4
    // str r0, [sp]
    // tst r0, r4
    // str r0, [sp]
    // str r0, [sp]
    // tst r0, r4
    // mov r0, #SEQ_SE_DP_WALL_HIT>>8
    // tst r0, r4
    // str r0, [sp]
    // mvn r1, r1
    // str r0, [sp]
    // tst r0, r4
    // mov r0, #SEQ_SE_DP_WALL_HIT>>8
    // str r0, [sp]
    // ldr r2, [sp]
}





void sub_0205D948(void) {
}





void sub_0205D978(void) {
    // str r0, [sp]
    // tst r0, r4
    // str r0, [sp, #4]
    // tst r0, r4
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // tst r0, r4
    // mov r0, #SEQ_SE_DP_WALL_HIT>>8
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r2, [sp, #4]
}





void sub_0205DA1C(void) {
}





void sub_0205DA34(void) {
    // str r0, [sp]
    // tst r0, r1
    // ldr r0, [sp]
    // tst r0, r1
}





void sub_0205DAA8(void) {
    // str r2, [sp, #4]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x10]
    // add r1, sp, #0x1c
    // ldr r1, [sp, #0x14]
    // ldr r6, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // ldr r2, [sp, #8]
    // add r1, r7, r1
    // add r3, r6, r3
    // ldr r2, [sp, #0x14]
    // add r1, sp, #0x18
    // str r1, [sp]
    // ldr r6, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // add r1, sp, #0x1c
    // add r2, r7, r2
    // add r3, r6, r3
    // add r1, sp, #0x18
    // ldrsb r0, [r1, r0]
    // ldr r3, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r2, r3, r2
    // ldr r3, [sp, #4]
    // add r1, r7, r1
    // ldr r1, [sp, #0x14]
    // ldr r5, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // ldr r2, [sp, #8]
    // add r1, r7, r1
    // add r3, r5, r3
}





void sub_0205DB68(void) {
    // mvn r0, r0
    // str r0, [sp]
    // ldr r0, [sp]
    // add r1, r6, r7
    // add r2, r5, r2
    // add r1, r4, r4
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0205DBB8: ; jump table
}





void sub_0205DBF4(void) {
    // mvn r0, r0
    // str r0, [sp]
    // ldr r2, [sp]
    // add r1, r4, r4
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0205DC36: ; jump table
    // ldr r2, [sp]
    // add r1, r6, r5
    // add r2, r2, r3
}





void sub_0205DCA0(void) {
    // mvn r0, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #4]
    // ldr r0, [sp]
    // add r1, r6, r7
    // add r2, r2, r3
}





void sub_0205DCFC(void) {
    // mvn r1, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #4]
    // ldr r0, [sp]
    // add r1, r6, r7
    // add r2, r2, r3
}





void sub_0205DD94(void) {
}





void sub_0205DD9C(void) {
    // tst r1, r0
    // tst r0, r1
    // sub r1, #0x11
}





void sub_0205DDB8(void) {
    // tst r1, r0
    // tst r0, r1
    // sub r1, #0x81
}





void sub_0205DDD4(void) {
    // mvn r1, r1
    // str r0, [sp]
    // mvn r1, r1
    // ldr r1, [sp]
}





void sub_0205DE38(void) {
}





void sub_0205DE64(void) {
    // sub r0, #0x1c
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205DE76: ; jump table
}





void sub_0205DE88(void) {
    // tst r0, r1
}





BOOL sub_0205DE98(void) {
    // sub r0, #0x58
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205DEB0: ; jump table
}





void sub_0205DEC0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205DEDA: ; jump table
}





void sub_0205DF0C(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp, #0x1c]
    // tst r1, r4
    // tst r0, r1
    // mov r0, #SEQ_SE_DP_WALL_HIT>>8
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205DF86: ; jump table
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp]
}





void sub_0205DFC8(void) {
}





void sub_0205DFD4(void) {
}





void sub_0205DFEC(void) {
}





void sub_0205DFFC(void) {
    // str r0, [sp]
    // add r0, r4, r0
    // str r0, [r6]
    // ldr r0, [sp]
    // add r0, r4, r0
    // str r0, [r7]
}





void PlayerAvatar_GetCoordsInFront(void) {
}





void sub_0205E048(void) {
}





void sub_0205E078(void) {
    // mvn r1, r1
}




