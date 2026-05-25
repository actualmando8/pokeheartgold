/* Decompiled from asm/overlay_01_02203A18.s */
#include "global.h"

void ov01_02203A18(void) {
}




void ov01_02203A38(void) {
}




void ov01_02203A48(void) {
    ov01_021F146C();
    // str r6, [sp, #0x20]
    ov01_021F1450(0x12);
    // str r0, [sp, #0x24]
    // str r5, [sp, #0x28]
    *((u32*)(0 + 4)) = 1;
    // add r1, sp, #0x14
    MapObject_CopyPositionVector(r5, 1);
    // add r1, sp, #8
    MapObject_CopyFacingVector(r5);
    // str r0, [sp, #0xc]
    // add r0, sp, #0x14
    // add r1, sp, #8
    VEC_Add(0, 0);
    MapObject_GetPriority(r5);
    // add r0, sp, #0x20
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r2, sp, #0x14
    ov01_021F1620(r6, ov01_02209518, r4);
}




void ov01_02203AB4(void) {
    Heap_AllocAtEnd(4, 8);
    // str r6, [r2]
    *((u32*)(r0 + 4)) = r4;
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov01_02203AD8, r0);
}




void ov01_02203AD8(void) {
    // str r0, [r5]
}




void ov01_02203B28(void) {
    ov01_021F18D4(*((u32*)r0), 0xc, 0x82);
    ov01_021F1908(*((u32*)r4), 0xc, 0x8c);
    ov01_021F1930(*((u32*)r4), 0xd, 0x1c, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov01_021F1758(*((u32*)r4), 0xe, 0xc, 0xc);
}




void ov01_02203B70(void) {
}




void ov01_02203B98(void) {
}




void ov01_02203BB4(void) {
    sub_02068D98();
    // ldmia r3!, {r0, r1}
    // add r2, #0x30
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    MapObject_GetID(*((u32*)(r4 + 0x38)), r4, r0);
    *((u32*)(r4 + 8)) = r0;
    MapObject_GetMapID(*((u32*)(r4 + 0x38)));
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 0x28)) = (6 << 0xc);
    sub_02068D90(r6);
    ov01_021F14B4(*((u32*)(r4 + 0x30)), *((u32*)(ov01_02209544 + (r0 << 3))), 1);
    *((u32*)(r4 + 0x58)) = r0;
    ov01_021F14B4(*((u32*)(r4 + 0x30)), *((u32*)(ov01_02209544 + r5)), 1);
    *((u32*)(r4 + 0x54)) = r0;
    // add r1, #0x40
    sub_02026E18(r4);
    NNS_G3dGetTex(*((u32*)(r4 + 0x58)));
    *((u32*)(r4 + 0x50)) = r0;
    // add r0, #0x64
    // strh r1, [r0]
    // add r0, #0x66
    // strh r1, [r0]
    ov01_021F1AD4(*((u32*)(r4 + 0x30)), 0xd);
    sub_020209AC(0);
    *((u32*)(r4 + 0x60)) = r0;
    sub_02020910(r5, 0);
    *((u32*)(r4 + 0x5c)) = r0;
    sub_02020838(*((u32*)(r4 + 0x50)), 0);
    GF_CreateNewVramTransferTask(0, *((u32*)(r4 + 0x5c)), r0, *((u32*)(r4 + 0x60)));
    sub_02020888(*((u32*)(r4 + 0x50)), 0);
    GF_CreateNewVramTransferTask(1, r5, r0, 0x20);
    // add r1, sp, #0
    sub_02068DB8(r6);
    // add r1, sp, #0
    ov01_02203B98(*((u32*)(r4 + 0x30)));
    *((u32*)(r4 + 0x3c)) = r0;
    sub_02023EA4(0);
    PlaySE(SEQ_SE_DP_DECIDE);
}




void ov01_02203CA0(void) {
}




void ov01_02203CB8(void) {
    // add r1, sp, #0x24
    // add r1, sp, #0x18
    // add r1, sp, #0xc
    // add r1, sp, #0
    // ldr r3, [sp, #0x24]
    // ldr r2, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // add r2, r3, r2
    // add r0, r0, r2
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #0x30]
    // ldr r1, [sp, #0x28]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #8]
    // add r0, r1, r0
    // add r5, r2, r0
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r1, r0
    // add r0, r2, r0
    // add r0, r3, r0
    // add r2, r5, r1
    // str r5, [sp, #0x34]
    // str r0, [sp, #0x38]
    // add r0, r0, r1
    // str r2, [sp, #0x34]
    // str r0, [sp, #0x38]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02203D40: ; jump table
    // add r0, r1, r0
    // sub r0, r1, r0
    // str r0, [r4]
    // add r0, #0x40
    // str r0, [r4]
    // str r0, [r4]
    // add r1, sp, #0x30
}




void ov01_02203DC0(void) {
    // add r1, sp, #0
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
}




void ov01_02203DF8(void) {
    // ldrh r0, [r2, r0]
    // ldrb r1, [r1, r2]
}



