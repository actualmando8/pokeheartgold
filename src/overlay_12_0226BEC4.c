/* Decompiled from asm/overlay_12_0226BEC4.s */
#include "global.h"

void ov12_0226BEC4(void) {
    Heap_Alloc(5, 8);
    MI_CpuFill8(0, 8);
    // str r5, [r4]
    SysTask_CreateOnMainQueue(ov12_0226BF04, r4, (0xfa << 2));
}



void ov12_0226BEF0(void) {
}



void ov12_0226BF04(void) {
    BattleSystem_GetBattleInput(*((u32*)r1));
    // ldrsh r1, [r4, r1]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0226BF26: ; jump table
    GF_AssertFail((*((u16*)(4 + 6)) << 0x10));
    NARC_New(7, 5);
    NARC_New(8, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    BattleInput_ChangeMenu(r6, r0, r5, 0x12);
    NARC_Delete(r6);
    NARC_Delete(r7);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = (4 + 1);
    BattleInput_CheckFeedbackDone((4 + 1));
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = (4 + 1);
    ov12_0223C080(*((u32*)r4));
    BattleInput_CheckTouch(r5);
    PlaySE(0x000005DD);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = (4 + 1);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 6)) = (r1 + 1);
    // ldrsh r0, [r4, r0]
    ov12_0223BFFC(*((u32*)r4), 0);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = (4 + 1);
}


