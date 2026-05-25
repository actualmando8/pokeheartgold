/* Decompiled from asm/overlay_01_022031C0.s */
#include "global.h"

void ov01_022031C0(void) {
    // str r5, [r4]
}




void ov01_022031E8(void) {
}




void ov01_022031F8(void) {
    // add r0, #0x1c
    // add r0, #0x3c
    // add r1, #0x1c
    // add r0, #0x2c
    // add r0, #0xb4
    // add r1, #0x2c
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    // add r1, #0x2c
    // add r0, #0xb4
    // add r1, r4, r1
}




void ov01_02203270(void) {
    // add r0, #0x1c
    // add r0, #0x2c
    // add r0, r4, r0
}




UnkStruct_0206793C * ov01_0220329C(void) {
    ov01_021F146C();
    // add r1, sp, #8
    MapObject_CopyPositionVector(r6);
    // ldr r1, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // add r0, sp, #8
    *((u16*)((6 << 0xc) + 0x1c)) = 0;
    *((u16*)((6 << 0xc) + 0x1e)) = 0;
    // add r0, sp, #0x28
    // strb r1, [r0]
    // str r4, [sp, #0x18]
    ov01_021F1468(r4, (0 - 1));
    // str r0, [sp, #0x14]
    ov01_021F1450(r4, 0x11);
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x2c
    // str r6, [sp, #0x20]
    MapObject_CopyPositionVector(r6);
    MapObject_GetPriorityPlusValue(r6, 2);
    // add r1, sp, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #0x2c
    ov01_021F1620(r4, ov01_022094DC, 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #0x2c
    ov01_021F1620(r4, ov01_022094F0, 1);
    // add r2, sp, #0x2c
    // str r1, [sp]
    // str r0, [sp, #4]
    ov01_021F1620(r4, ov01_02209504, 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    ov01_021F1620(r4, ov01_022094C8, 1);
}




void ov01_0220335C(void) {
    // str r0, [r4]
    // add r2, #0x18
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r3, sp, #0
    // add r6, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, sp, #0
    // add r1, sp, #0
    // add r0, #0x3c
    // add r1, sp, #0
    // add r0, #0xb4
    // add r0, #0xb4
}




void ov01_022033E0(void) {
}




void ov01_022033E4(void) {
    // add r1, sp, #0xc
    // add r3, #0x18
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #4]
    // add r1, sp, #0xc
    // str r0, [sp, #0x10]
    // str r0, [r4]
    // add r0, #0x3c
    // add r0, #0xb4
    // add r0, r1, r0
    // str r0, [r4]
    // add r0, r1, r0
}




void ov01_022034B8(void) {
    // add r1, sp, #0
    // add r0, #0x3c
    // add r0, #0xb4
}




void ov01_022034F8(void) {
    // add r1, sp, #0xc
    // add r6, #0x18
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #4]
    // add r1, sp, #0xc
    // str r0, [sp, #0x10]
    // add r0, #0x3c
    // add r0, #0xb4
    // add r0, r1, r0
    // str r0, [r4]
    // add r0, r1, r0
}




void ov01_022035A4(void) {
    // add r1, sp, #0
    // add r0, #0xb4
}




void ov01_022035DC(void) {
    // str r0, [r4]
    // add r2, #0x18
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r3, sp, #0
    // add r6, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, sp, #0
    // add r1, sp, #0
    // add r0, #0x3c
    // add r0, #0x3c
}




void ov01_02203654(void) {
    // str r0, [sp]
    sub_0205F0F8(*((u32*)(r1 + 0x30)), *((u32*)(r1 + 4)), *((u32*)(r1 + 8)), *((u32*)(r1 + 0xc)));
    ov01_021F1640(r4);
    // add r1, sp, #0x1c
    sub_02068DB8(r4);
    // add r6, #0x18
    // add r3, sp, #0x10
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    sub_0206121C(*((u32*)(r5 + 0x24)), r3, r3);
    *((u32*)(r5 + 0x14)) = r0;
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x1c
    // str r0, [sp, #0x20]
    sub_02068DA8(r4);
    FollowMon_GetMapObject(*((u32*)(r5 + 0x24)));
    ov01_021F771C(*((u32*)(*((u32*)(r5 + 0x24)) + 0x3c)));
    sub_02023FB0();
    sub_02023FB0(r7);
    // and r3, r4
    GF_CreateNewVramTransferTask(1, ((r0 << 0x10) >> 0xd), ov01_02209B18, ((0xFFFF0000 >> 0x10) << 3));
    ov01_022055DC(r6);
    MapObject_GetFacingDirection(r6);
    // add r1, #0x48
    MapObject_CopyPositionVector(r6, r5);
    // add r1, #0x48
    // add r2, #0x3c
    ov01_022039BC(r4, r5, r5);
    *((u32*)(r5 + 0x40)) = *((u32*)*((u32*)(r5 + 0x3c)));
    ov01_022039E0(r4);
    *((u32*)(r5 + 0x44)) = r0;
    *((u32*)(r5 + 0x3c)) = 0;
    // str r0, [r5]
    // add r2, sp, #4
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    *((u32*)(r5 + 0x10)) = (*((u32*)(r5 + 0x10)) + 1);
    _s32_div_f((1 << 0xc), (*((u32*)(r5 + 0x10)) + 1), ov01_022094BC);
    // str r0, [sp, #4]
    _s32_div_f((1 << 0xc), *((u32*)(r5 + 0x10)));
    // str r0, [sp, #8]
    ov01_021F771C(*((u32*)(*((u32*)(r5 + 0x24)) + 0x3c)));
    // add r1, sp, #4
    sub_02023E78();
    FollowMon_GetMapObject(*((u32*)(r5 + 0x24)));
    // asr r2, r4, #1
    // add r2, r4, r2
    // asr r2, r2, #2
    // add r2, r1, r2
    // str r2, [r1]
    // add r1, #0x48
    MapObject_SetPositionVector(r5, ((*((u32*)(r5 + 0x44)) << 0xc) >> 0x1e), *((u32*)(r5 + 0x10)));
    // str r0, [r5]
    // add r0, #0x3c
    Field3dObject_SetActiveFlag(*((u32*)(r5 + 0x2c)), 1);
    // ldr r0, [sp]
    MapObject_SetVisible(1);
    *((u32*)(r5 + 0x10)) = 0;
    *((u32*)(r5 + 0x10)) = (*((u32*)(r5 + 0x10)) + 1);
    ov01_021F1640(r4);
}




void ov01_022037E8(void) {
    // add r1, sp, #0
    // add r0, #0x3c
}




void ov01_02203820(void) {
    // str r0, [r4]
    // add r2, #0x18
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r3, sp, #0
    // add r6, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, sp, #0
    // add r0, #0x3c
    // add r0, #0x3c
}




void ov01_02203890(void) {
    sub_0205F0F8(*((u32*)(r1 + 0x30)), *((u32*)(r1 + 4)), *((u32*)(r1 + 8)), *((u32*)(r1 + 0xc)));
    ov01_021F1640(r4);
    FollowMon_GetMapObject(*((u32*)(r5 + 0x24)));
    ov01_021F771C(*((u32*)(*((u32*)(r5 + 0x24)) + 0x3c)));
    ov01_022055DC(r6);
    MapObject_GetFacingDirection(r6);
    // add r1, #0x48
    MapObject_CopyPositionVector(r6, r5);
    // add r1, #0x48
    // add r2, #0x3c
    ov01_022039BC(r4, r5, r5);
    *((u32*)(r5 + 0x40)) = *((u32*)*((u32*)(r5 + 0x3c)));
    ov01_022039E0(r4);
    *((u32*)(r5 + 0x44)) = r0;
    *((u32*)(r5 + 0x3c)) = 0;
    // str r0, [r5]
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    *((u32*)(r5 + 0x10)) = (*((u32*)(r5 + 0x10)) + 1);
    _s32_div_f((1 << 0xc), (*((u32*)(r5 + 0x10)) + 1), ov01_022094B0);
    // str r0, [sp]
    _s32_div_f((1 << 0xc), *((u32*)(r5 + 0x10)));
    // str r0, [sp, #4]
    ov01_021F771C(*((u32*)(*((u32*)(r5 + 0x24)) + 0x3c)));
    // add r1, sp, #0
    sub_02023E78();
    FollowMon_GetMapObject(*((u32*)(r5 + 0x24)));
    // asr r1, r2, #1
    // add r1, r2, r1
    // asr r1, r1, #2
    // add r2, r3, r1
    // str r2, [r1]
    // add r1, #0x48
    MapObject_SetPositionVector(r5, ((*((u32*)(r5 + 0x44)) << 0xc) * *((u32*)(r5 + 0x10))), *((u32*)(r5 + 0x40)));
    // str r0, [r5]
    // add r0, #0x3c
    Field3dObject_SetActiveFlag(*((u32*)(r5 + 0x2c)), 1);
    sub_02069DC8(r7, 1);
    *((u32*)(r5 + 0x10)) = 0;
    *((u32*)(r5 + 0x10)) = (*((u32*)(r5 + 0x10)) + 1);
    ov01_021F1640(r4);
}




void ov01_022039BC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022039CC: ; jump table
    // add r1, #8
    // str r1, [r2]
    // str r1, [r2]
}




void ov01_022039E0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022039F2: ; jump table
    // mvn r0, r0
    // mvn r0, r0
}



