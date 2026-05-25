/* Decompiled from asm/unk_020632B0.s */
#include "global.h"

void sub_020632B0(void) {
    // str r3, [sp, #4]
    // str r0, [sp]
    // ldr r5, [sp, #0x24]
    sub_0205F3C0(0xc);
    Heap_AllocAtEnd(0xb, 0x1c);
    *((u32*)(r4 + 8)) = r0;
    MI_CpuFill8(0, 0x1c);
    // add r1, sp, #0x10
    // ldrsb r0, [r1, r0]
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = r5;
    *((u8*)(r4 + 3)) = *((u16*)(r1 + 0x18));
    _fflt((r5 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r5 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp, #8]
    *((u8*)(*((u32*)(r4 + 8)) + 1)) = r6;
    *((u8*)(*((u32*)(r4 + 8)) + 2)) = r7;
    // ldr r0, [sp, #4]
    *((u8*)(*((u32*)(r4 + 8)) + 3)) = *((u32*)(r4 + 8));
    _fflt((r6 << 0x10), *((u32*)(r4 + 8)));
    _fadd((0x3f << 0x18), r0);
    _fflt((r6 << 0x10));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #8]
    FX_Div();
    *((u32*)(*((u32*)(r4 + 8)) + 4)) = r0;
    _fflt((r7 << 0x10), *((u32*)(r4 + 8)));
    _fadd((0x3f << 0x18), r0);
    _fflt((r7 << 0x10));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #8]
    FX_Div();
    *((u32*)(*((u32*)(r4 + 8)) + 8)) = r0;
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    _fflt(((r0 << 4) << 0x10), *((u32*)(r4 + 8)));
    _fadd((0x3f << 0x18), r0);
    // ldr r0, [sp, #4]
    _fflt((r0 << 0x10));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #8]
    FX_Div();
    *((u32*)(*((u32*)(r4 + 8)) + 0xc)) = r0;
    _s32_div_f(0xb4, r5);
    // strb r0, [r1]
    // ldr r0, [sp]
    // add r1, #0x10
    MapObject_CopyPositionVector(*((u32*)(r4 + 8)));
    *((u32*)(r4 + 4)) = *((u32*)(*((u32*)(r4 + 8)) + 0x14));
    // ldr r0, [sp]
    sub_02060F78(*((u32*)(*((u32*)(r4 + 8)) + 0x14)));
    // ldr r0, [sp]
    MapObject_SetFlagsBits(0x00010004);
    // add r2, sp, #0x10
    // ldrsb r1, [r2, r1]
    // ldr r0, [sp]
    MapObject_SetOrQueueFacing(0x10);
    // add r1, sp, #0x10
    // ldr r0, [sp]
    sub_0205F328(*((u16*)(r1 + 0x18)));
    // ldr r0, [sp]
    MapObject_IncrementMovementStep();
    // ldr r0, [sp]
    MapObject_CheckVisible();
    PlaySE(SEQ_SE_DP_DANSA);
}




void MapObjectMovementCmd108_Step1(void) {
    sub_0205F3E4();
    _fflt((*((u8*)(r0 + 2)) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp]
    // asr r0, r0, #0x1f
    // str r0, [sp, #4]
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // asr r1, r0, #0x1f
    _ll_mul(*((u32*)(*((u32*)(r4 + 8)) + 4)));
    // add r6, r0, r6
    // adc r1, r2
    // add r0, r3, r1
    // str r2, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // asr r1, r0, #0x1f
    _ll_mul(*((u32*)(*((u32*)(r4 + 8)) + 0xc)), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), 0, *((u32*)(r6 + 0x10)));
    // add r3, r0, r3
    // adc r1, r6
    // add r0, r2, r1
    // str r0, [sp, #0x10]
    MapObject_GetFieldSystem(r5, (((2 << 0xa) >> 0xc) | (r1 << 0x14)), *((u32*)(r6 + 0x18)), (2 << 0xa));
    MapObject_CheckFlag29(r5);
    // add r1, sp, #8
    sub_02061248(r6, r0);
    // ldr r0, [sp, #0xc]
    *((u32*)(r4 + 4)) = r0;
    // str r0, [sp, #0xc]
    // add r1, sp, #8
    MapObject_SetPositionVector(r5);
    GF_SinDegNoWrap((((*((u8*)(r4 + 2)) * *((u8*)*((u32*)(r4 + 8)))) << 0x10) >> 0x10), *((u8*)*((u32*)(r4 + 8))));
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // asr r1, r0, #0x1f
    _ll_mul(*((u32*)(*((u32*)(r4 + 8)) + 8)));
    // add r2, r2, r7
    // adc r1, r3
    // add r0, r0, r2
    // asr r2, r6, #0x1f
    // add r6, r1, r7
    // adc r2, r3
    // add r1, r0, r2
    // ldr r0, [sp, #0xc]
    // str r3, [sp, #8]
    // sub r0, r1, r0
    // str r0, [sp, #0xc]
    // add r1, sp, #8
    // str r3, [sp, #0x10]
    sub_0205F9A0(r5, (((((r0 >> 0xc) | (r1 << 0x14)) << 0x10) | (r6 >> 0x10)) << 0x14), ((r6 >> 0xc) | (((((r0 >> 0xc) | (r1 << 0x14)) << 0x10) | (r6 >> 0x10)) << 0x14)), 0);
    // ldrsb r1, [r4, r0]
    *((u8*)(r4 + 1)) = (r1 - 1);
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r1, sp, #8
    MapObject_SetFacingVector(r5, (*((u8*)(r4 + 2)) + 1));
    // add r1, sp, #8
    sub_0205F9A0(r5);
    // ldrsb r1, [r2, r1]
    MapObject_AddCurrentX(r5, 1, *((u32*)(r4 + 8)));
    // ldrsb r1, [r2, r1]
    MapObject_AddCurrentY(r5, 2, *((u32*)(r4 + 8)));
    // ldrsb r1, [r2, r1]
    MapObject_AddCurrentZ(r5, 3, *((u32*)(r4 + 8)));
    // ldrsb r1, [r6, r0]
    _fflt((r1 << 0x10));
    _fadd((0x3f << 0x18), r0);
    _fflt((r1 << 0x10));
    _fsub((0x3f << 0x18));
    _ffix();
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldrsb r1, [r6, r0]
    _fflt((*((u32*)(r6 + 0x10)) << 0x10), *((u32*)(r6 + 0x10)));
    _fadd((0x3f << 0x18), r0);
    _fflt((r1 << 0x10));
    _fsub((0x3f << 0x18));
    _ffix();
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldrsb r1, [r6, r0]
    _fflt((*((u32*)(r6 + 0x14)) << 0x10), *((u32*)(r6 + 0x14)));
    _fadd((0x3f << 0x18), r0);
    _fflt((r1 << 0x10));
    _fsub((0x3f << 0x18));
    _ffix();
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // add r1, sp, #8
    MapObject_SetPositionVector(r5, *((u32*)(r6 + 0x18)));
    sub_02061070(r5);
    MapObject_SetFlagsBits(r5, 0x00020008);
    sub_02060F78(r5);
    sub_0205F484(r5);
    sub_0205F328(r5, 0);
    MapObject_IncrementMovementStep(r5);
    MapObject_CheckVisible(r5);
    PlaySE(SEQ_SE_DP_SUTYA2);
    Heap_Free(*((u32*)(r4 + 8)));
}




void MapObjectMovementCmd105_Step0(void) {
}




void MapObjectMovementCmd105_Step2(void) {
}




void MapObjectMovementCmd105_Step4(void) {
}




void MapObjectMovementCmd105_Step6(void) {
}




void MapObjectMovementCmd105_Step8(void) {
}




void MapObjectMovementCmd106_Step0(void) {
}




void MapObjectMovementCmd106_Step2(void) {
}




void MapObjectMovementCmd106_Step4(void) {
}




void MapObjectMovementCmd106_Step6(void) {
}




void MapObjectMovementCmd107_Step0(void) {
}




void MapObjectMovementCmd107_Step2(void) {
}




void MapObjectMovementCmd107_Step4(void) {
}




void MapObjectMovementCmd107_Step6(void) {
}




void MapObjectMovementCmd107_Step8(void) {
}




void MapObjectMovementCmd107_Step10(void) {
}




void MapObjectMovementCmd107_Step12(void) {
}




void MapObjectMovementCmd109_Step12(void) {
}




void MapObjectMovementCmd108_Step0(void) {
}




void MapObjectMovementCmd110_Step0(void) {
}




void MapObjectMovementCmd108_Step2(void) {
}




void MapObjectMovementCmd111_Step0(void) {
}




void MapObjectMovementCmd111_Step2(void) {
}




void MapObjectMovementCmd111_Step4(void) {
}




void MapObjectMovementCmd111_Step6(void) {
}




void MapObjectMovementCmd111_Step10(void) {
}




void MapObjectMovementCmd111_Step14(void) {
}




void MapObjectMovementCmd111_Step16(void) {
}




void MapObjectMovementCmd111_Step18(void) {
}




void MapObjectMovementCmd112_Step0(void) {
}




void sub_02063A14(void) {
}




void sub_02063A1C(void) {
}




void sub_02063A40(void) {
}




void sub_02063A5C(void) {
}




void sub_02063A78(void) {
}




void sub_02063A94(void) {
}




void sub_02063AC8(void) {
}




void sub_02063AFC(void) {
}




u8 sub_02063B00(void) {
}




u8 sub_02063B04(void) {
}




void sub_02063B08(void) {
}




void sub_02063B20(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02063B3C: ; jump table
    // strb r0, [r4]
    // ldrsb r1, [r4, r0]
    // ldrsb r1, [r4, r0]
    // ldrsb r0, [r4, r0]
    // strb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
}




void sub_02063B9C(void) {
    sub_0205F3BC();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02063BBA: ; jump table
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    MapObject_GetFacingDirection(r5, _020FE0C4);
    *((u8*)(r4 + 4)) = r0;
    // add r0, sp, #0x10
    *((u8*)(r4 + 5)) = *((u32*)(r0 + (r0 << 2)));
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldrsb r0, [r4, r0]
    // ldrsb r0, [r4, r0]
    // add r0, r2, r3
    sub_0206234C(*((u32*)((6 << 2) + 6)), 0, r3, (5 << 3));
    MapObject_ForceSetHeldMovement(r5, r0);
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    sub_02062428(r5);
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // ldrsb r1, [r4, r0]
    *((u8*)(r4 + 8)) = (r1 + 1);
    // ldrsb r0, [r4, r0]
    *((u8*)(r4 + 8)) = 0;
    // ldrsb r1, [r4, r0]
    *((u8*)(r4 + 7)) = ((r1 + 1) + 1);
    // ldrsb r0, [r4, r0]
    // ldrsb r0, [r4, r0]
    // and r1, r0
    *((u8*)(r4 + 6)) = (6 + 1);
    *((u8*)(r4 + 1)) = 1;
    // ldrsb r1, [r4, r1]
    MapObject_SetFacingDirection(r5, 4);
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    *((u8*)(r4 + 7)) = 0;
    // strb r0, [r4]
}




void sub_02063C88(void) {
}




void sub_02063CB4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02063CD0: ; jump table
    // strb r0, [r4]
    // ldrsb r1, [r4, r0]
    // ldrsb r1, [r4, r0]
    // ldrsb r0, [r4, r0]
    // strb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
}




void sub_02063D30(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    sub_0205F3BC(r0, _020FE0E4);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02063D64: ; jump table
    MapObject_GetFacingDirection(r7);
    // add r0, sp, #0
    // ldrsb r3, [r4, r2]
    // add r3, r0, r3
    GF_AssertFail((0 + 4), 5, *((u32*)((0 + 4) + (r3 << 4))));
    // sub r1, r1, r2
    // ror r1, r0
    *((u8*)(r4 + 4)) = r6;
    // add r0, r2, r1
    *((u8*)(r4 + 6)) = 0x1e;
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // ldrsb r0, [r4, r0]
    // add r2, sp, #0
    // ldrsb r0, [r4, r0]
    // add r0, r2, r3
    sub_0206234C(*((u32*)((6 << 2) + 6)), 0, ((r5 + 1) >> 0x1f), (5 << 4));
    MapObject_ForceSetHeldMovement(r7, r0);
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    sub_02062428(r7);
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // ldrsb r1, [r4, r0]
    *((u8*)(r4 + 8)) = (r1 + 1);
    // ldrsb r0, [r4, r0]
    *((u8*)(r4 + 8)) = 0;
    // ldrsb r1, [r4, r0]
    *((u8*)(r4 + 7)) = ((r1 + 1) + 1);
    // ldrsb r0, [r4, r0]
    // ldrsb r0, [r4, r0]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u8*)(r4 + 6)) = 0x1e;
    *((u8*)(r4 + 1)) = 1;
    // ldrsb r1, [r4, r1]
    MapObject_SetFacingDirection(r7, 4, ((6 + 1) >> 0x1f));
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    *((u8*)(r4 + 7)) = 0;
    // strb r0, [r4]
}




void sub_02063E50(void) {
    sub_0205F3E8(0x18);
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0;
    sub_0205F484(r4, 0);
}




void sub_02063E70(void) {
    sub_0205F394();
    sub_0205F40C(r5);
    MapObject_GetFieldSystem(r5);
    sub_02055780(r5);
    ov01_021FA2D4(r5);
    MapObject_GetFieldSystem(r5);
    FieldSystem_ApricornTree_TryGetApricorn(r5);
    sub_020640A4(r6);
    // str r0, [r4]
    MapObject_SetSpriteID(r5, *((u32*)r4));
    // add r1, #8
    ov01_021F94C0(r5, r4, *((u32*)r4));
    // add r1, #8
    ov01_021F95CC(r5, r4, *((u32*)r4));
    MapObject_GetFieldSystem(r5);
    FieldSystem_ApricornTree_TryGetApricorn(r5);
    sub_020640A4(r6);
    // str r0, [r4]
    MapObject_SetSpriteID(r5, *((u32*)r4));
    ov01_021FE66C(r5, *((u32*)r4));
    // add r1, #8
    ov01_021F94C0(r5, r4, *((u32*)r4));
    GF_AssertFail();
    *((u16*)(r7 + 2)) = 0;
    *((u32*)(r4 + 4)) = r6;
    ov01_021FA2D4(r5);
    ov01_021FA3E8(r5, *((u32*)(r4 + 8)));
    ov01_021F9344(r5);
    sub_0205F330(r5);
    sub_02023EF4(*((u32*)(r4 + 8)));
    sub_02023EE0(*((u32*)(r4 + 8)), 0);
    sub_02023F40(*((u32*)(r4 + 8)), 0);
    sub_02023EF4(*((u32*)(r4 + 8)));
    sub_02023EE0(*((u32*)(r4 + 8)), 1);
    sub_02023F40(*((u32*)(r4 + 8)), 0);
    sub_02023EF4(*((u32*)(r4 + 8)));
    sub_02023EE0(*((u32*)(r4 + 8)), 2);
    sub_02023F40(*((u32*)(r4 + 8)), 0);
    GF_AssertFail();
    sub_02023EF4(*((u32*)(r4 + 8)));
    sub_02023EE0(*((u32*)(r4 + 8)), 0);
    sub_02023F40(*((u32*)(r4 + 8)), 0);
    sub_02023F04(*((u32*)(r4 + 8)), (1 << 0xc));
    ov01_021FA40C(r5, *((u32*)(r4 + 8)));
}




void sub_02063FE4(void) {
}




void sub_02063FFC(void) {
    // add r1, #0xc
    // add r1, #8
}




void sub_0206402C(void) {
    sub_0205F40C();
    ov01_021FA2D4(r5);
    // add r1, #8
    ov01_021F94C0(r5, r4, *((u32*)r4));
    GF_AssertFail();
    // add r1, #0xc
    ov01_021F9630(*((u32*)(r4 + 8)), r4);
    ov01_021FA3E8(r5, *((u32*)(r4 + 8)));
    MapObject_ClearFlagsBits(r5, (2 << 0x14));
}




void sub_02064084(void) {
}




void sub_020640A4(void) {
}




void TryGetSeenByNpcTrainers(void) {
    // add r1, sp, #0x40
    // str r1, [sp]
    CheckSeenByNpcTrainers(*((u32*)(r0 + 0x3c)), *((u32*)(r0 + 0x40)), 0);
    // ldr r0, [sp, #0x50]
    // ldr r2, [sp, #0x54]
    StartMapSceneScript(r5, std_trainer_approach);
    // add r0, sp, #0x28
    // str r0, [sp]
    // ldr r3, [sp, #0x54]
    CheckSeenByNpcTrainers(r5, r6, r7);
    // ldr r0, [sp, #0x48]
    // str r0, [sp]
    // ldr r0, [sp, #0x4c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x54]
    // ldr r2, [sp, #0x40]
    // ldr r3, [sp, #0x44]
    FieldSystem_SetEngagedTrainer(r5);
    // ldr r0, [sp, #0x48]
    // str r0, [sp]
    // ldr r0, [sp, #0x4c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x54]
    // ldr r2, [sp, #0x40]
    // ldr r3, [sp, #0x44]
    FieldSystem_SetEngagedTrainer(r5);
    // ldr r0, [sp, #0x30]
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x28]
    // ldr r3, [sp, #0x2c]
    FieldSystem_SetEngagedTrainer(r5);
    // ldr r2, [sp, #0x54]
    // ldr r3, [sp, #0x4c]
    sub_02064520(r5, r6);
    // ldr r2, [sp, #0x40]
    // ldr r3, [sp, #0x44]
    // add r0, sp, #0x10
    GetEngagingTrainerParams(r0);
    // ldr r2, [sp, #0x54]
    StartMapSceneScript(r5, std_trainer_approach);
    // ldr r0, [sp, #0x48]
    // str r0, [sp]
    // ldr r0, [sp, #0x4c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x54]
    // ldr r2, [sp, #0x40]
    // ldr r3, [sp, #0x44]
    FieldSystem_SetEngagedTrainer(r5);
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    FieldSystem_SetEngagedTrainer(r5);
    GF_AssertFail(1);
}




void CheckSeenByNpcTrainers(void) {
    // str r0, [sp, #0xc]
    // str r0, [sp, #4]
    // add r1, sp, #4
    // add r2, sp, #0xc
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r2, sp, #8
    // mvn r1, r1
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // ldr r3, [sp, #8]
    // add r1, sp, #4
    // add r2, sp, #0xc
}




void GetEngagingTrainerParams(void) {
    // str r2, [r5]
}




void sub_02064298(void) {
}




void sub_020642C4(void) {
    // str r2, [sp, #8]
    // str r6, [sp]
    // str r0, [sp, #4]
    // mvn r0, r0
    // ldr r0, [sp, #8]
    // str r4, [r0]
    // mvn r0, r0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r7, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // mvn r0, r0
    // ldr r0, [sp, #8]
    // str r4, [r0]
    // mvn r0, r0
    // mvn r0, r0
}




void sub_0206439C(void) {
    // ldr r1, [sp, #0x14]
    // str r1, [sp]
    // ldr r3, [sp, #0x10]
    // blx r4
}




void sub_020643B8(void) {
    // sub r1, r0, r5
    // sub r0, r0, r4
    // mvn r0, r0
}




void sub_020643E4(void) {
    // add r1, r0, r5
    // sub r0, r4, r0
    // mvn r0, r0
}




void sub_02064410(void) {
    // sub r1, r0, r6
    // sub r0, r0, r5
    // mvn r0, r0
}




void sub_0206443C(void) {
    // add r1, r0, r6
    // sub r0, r5, r0
    // mvn r0, r0
}




void sub_02064468(void) {
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0xc]
    // add r6, r4, r0
    // add r4, r7, r0
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // str r5, [sp]
    // ldr r1, [sp, #0x14]
    // add r6, r6, r0
    // add r4, r4, r0
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // str r5, [sp]
}




void MapObject_GetTrainerNum(void) {
}




void sub_02064518(void) {
}




void sub_02064520(void) {
    // str r0, [sp, #4]
    // add r1, sp, #0
    // add r2, sp, #4
    // add r7, sp, #0
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r2, sp, #4
}




void sub_0206457C(void) {
}




BOOL sub_02064598(void) {
}




void sub_020645AC(void) {
}




void sub_020645B4(void) {
    // str r3, [sp]
    Heap_AllocAtEnd(4, 0x30);
    GF_AssertFail();
    memset(r4, 0, 0x30);
    // ldr r0, [sp]
    *((u32*)(r4 + 8)) = r0;
    // ldr r0, [sp, #0x18]
    *((u32*)(r4 + 0xc)) = r0;
    // ldr r0, [sp, #0x1c]
    *((u32*)(r4 + 0x10)) = r0;
    // ldr r0, [sp, #0x20]
    *((u32*)(r4 + 0x14)) = r0;
    // ldr r0, [sp, #0x24]
    *((u32*)(r4 + 0x18)) = r0;
    *((u32*)(r4 + 0x2c)) = r5;
    *((u32*)(r4 + 0x24)) = r6;
    *((u32*)(r4 + 0x28)) = r7;
    SysTask_CreateOnMainQueue(sub_02064630, r4, 0xff);
    GF_AssertFail();
}




void sub_0206460C(void) {
}




void sub_02064618(void) {
}




void sub_02064630(void) {
    // blx r1
}




void sub_0206464C(void) {
    // str r0, [r5]
}




void sub_02064668(void) {
    // str r0, [r4]
}




void sub_02064694(void) {
    // sub r0, #0x33
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _020646C2: ; jump table
    // str r0, [r4]
    // str r0, [r4]
}




void sub_020646DC(void) {
    // mvn r0, r0
    // str r0, [r4]
}




void sub_02064714(void) {
}




void sub_02064730(void) {
}




void sub_02064748(void) {
    // str r0, [r4]
}




void sub_02064764(void) {
}




void sub_02064778(void) {
}




void sub_02064790(void) {
    // str r1, [r0]
}




void sub_020647A8(void) {
    // str r1, [r0]
    // str r1, [r0]
}




void sub_020647C0(void) {
    // str r0, [r4]
}




void sub_020647E8(void) {
}




void sub_02064808(void) {
    // str r1, [r0]
}




void sub_02064824(void) {
    // str r0, [sp]
    // ldr r2, [sp]
    // str r0, [r5]
    // str r0, [r5]
}




void sub_020648A0(void) {
    // str r0, [r4]
}




u32 sub_020648C8(void) {
}




void sub_020648E4(void) {
}



