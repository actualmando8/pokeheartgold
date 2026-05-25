/* Decompiled from asm/overlay_01_021F3D38.s */
#include "global.h"

void ov01_021F3D38(void) {
}



void ov01_021F3D50(void) {
    RemoveWindow(((*((u8*)(r0 + 0x13)) << 0x18) >> 0x1f));
    Heap_Free(r4);
}



void ov01_021F3D68(void) {
}



void ov01_021F3D70(void) {
    // bic r3, r2
    // and r1, r2
    // orr r1, r3
    *((u8*)(r0 + 0x13)) = r1;
}



void ov01_021F3D80(void) {
    // bx lr
    // TODO: decompile
}



void ov01_021F3D84(void) {
    // ldrb r0, [r0, #0x12]
    // bx lr
    // TODO: decompile
}



void ov01_021F3D88(void) {
    // ldrb r0, [r0, #0x13]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x19
    // bne _021F3D94
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov01_021F3D98(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F3DB2: ; jump table
    ov01_021F3E10((*((u16*)(((*((u8*)(*((u32*)(r0 + 0x68)) + 0x13)) << 0x19) >> 0x19) + 6)) << 0x10));
    // bic r1, r0
    *((u8*)(r4 + 0x13)) = *((u8*)(r4 + 0x13));
    ov01_021F3EE0(0x7f, *((u8*)(r4 + 0x13)));
    // bic r1, r0
    *((u8*)(r4 + 0x13)) = *((u8*)(r4 + 0x13));
    ov01_021F3EA0(0x7f, *((u8*)(r4 + 0x13)));
    // bic r1, r0
    *((u8*)(r4 + 0x13)) = *((u8*)(r4 + 0x13));
    ov01_021F3E4C(0x7f, *((u8*)(r4 + 0x13)));
    // bic r1, r0
    *((u8*)(r4 + 0x13)) = *((u8*)(r4 + 0x13));
}



void ov01_021F3DFC(void) {
}



void ov01_021F3E10(void) {
    // sub r3, #0x33
    BgSetPosTextAndCommit(*((u32*)(r0 + 8)), 3, 3, 3);
    sub_0205B63C(*((u32*)(r4 + 8)), *((u32*)(r4 + 0x68)), *((u8*)(*((u32*)(r4 + 0x68)) + 0x12)), 3);
    // orr r0, r1
    *((u8*)(*((u32*)(r4 + 0x68)) + 0x13)) = 0x80;
    sub_0205B6A0(*((u32*)(r4 + 0x68)), *((u8*)(*((u32*)(r4 + 0x68)) + 0x12)), *((u16*)(*((u32*)(r4 + 0x68)) + 0x10)));
}



void ov01_021F3E4C(void) {
    RemoveWindow(*((u32*)(r0 + 0x68)), ((*((u8*)(*((u32*)(r0 + 0x68)) + 0x13)) << 0x18) >> 0x1f));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 8)), 3, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 8)), 3);
    BgSetPosTextAndCommit(*((u32*)(r4 + 8)), 3, 3, 0);
    // bic r1, r0
    *((u8*)(*((u32*)(r4 + 0x68)) + 0x13)) = *((u8*)(*((u32*)(r4 + 0x68)) + 0x13));
}



u32 ov01_021F3EA0(void) {
    Bg_GetYpos(*((u32*)(r0 + 8)), 3);
    // mvn r1, r1
    // sub r3, #0x33
    BgSetPosTextAndCommit(*((u32*)(r4 + 8)), 3, 3, 3);
    BgSetPosTextAndCommit(*((u32*)(r4 + 8)), 3, 4, 0x10);
}



u32 ov01_021F3EE0(void) {
    Bg_GetYpos(*((u32*)(r0 + 8)), 3);
    // mvn r1, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 8)), 3, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 8)), 3);
    BgSetPosTextAndCommit(*((u32*)(r4 + 8)), 3, 3, 0);
    BgSetPosTextAndCommit(*((u32*)(r4 + 8)), 3, 3, 0);
    BgSetPosTextAndCommit(*((u32*)(r4 + 8)), 3, 5, 0x10);
}


