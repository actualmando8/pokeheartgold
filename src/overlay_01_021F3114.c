/* Decompiled from asm/overlay_01_021F3114.s */
#include "global.h"

u32 ov01_021F3114(void) {
}




void ov01_021F3170(void) {
    ov01_021F3348(0x18);
    *((u32*)(r0 + 0xc)) = r5;
    *((u32*)(r0 + 0x10)) = r6;
    // str r7, [r4]
    PlaySE(SEQ_SE_DP_F209);
    FieldSystem_CreateTask(r5, ov01_021F31CC, r4);
}




u32 ov01_021F31A0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F31B0: ; jump table
}




u32 ov01_021F31CC(void) {
    TaskManager_GetEnvironment();
    PlayerAvatar_GetMapObject(*((u32*)(r0 + 0x10)));
    sub_0205F504();
    MapObject_SetFlagsBits(r6, (1 << 8));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    sub_0205DFC8(*((u32*)(r4 + 0x10)));
    sub_0206234C(*((u32*)r4), 0xc);
    sub_0205DFD4(*((u32*)(r4 + 0x10)), r0);
    PlayerAvatar_SetFacingDirection(*((u32*)(r4 + 0x10)), *((u32*)r4));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 4)) = 7;
    ov01_021F31A0(*((u32*)r4));
    // str r0, [r4]
    PlayerAvatar_SetFacingDirection(*((u32*)(r4 + 0x10)), *((u32*)r4));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
    sub_0205B9DC(r5);
    // str r0, [r4]
    ov04_02256BE4(*((u32*)(r4 + 0xc)), r5);
    sub_0205B9E8(r5);
    // str r0, [r4]
    ov04_02256BE4(*((u32*)(r4 + 0xc)), r5);
    sub_0205B9F4(r5);
    // str r0, [r4]
    ov04_02256BE4(*((u32*)(r4 + 0xc)), r5);
    sub_0205BA00(r5);
    // str r0, [r4]
    ov04_02256BE4(*((u32*)(r4 + 0xc)), r5);
    sub_0205BA0C(r5);
    ov01_021F31A0(*((u32*)r4));
    // str r0, [r4]
    MapObject_ClearFlagsBits(r6, 0x80);
    MapObject_ClearFlagsBits(r6, (1 << 8));
    PlayerAvatar_SetFacingDirection(*((u32*)(r4 + 0x10)), *((u32*)r4));
    ov01_021F336C(r4);
    StopSE(SEQ_SE_DP_F209, 0);
    ov01_021F31A0(1);
    // str r0, [r4]
    sub_0205DA34(*((u32*)(r4 + 0x10)), r6, *((u32*)r4));
    *((u32*)(r4 + 8)) = 1;
    MapObject_ClearFlagsBits(r6, 0x80);
    MapObject_ClearFlagsBits(r6, (1 << 8));
    PlayerAvatar_SetFacingDirection(*((u32*)(r4 + 0x10)), *((u32*)r4));
    ov01_021F336C(r4);
    StopSE(SEQ_SE_DP_F209, 0);
}




void * ov01_021F3348(void) {
    Heap_AllocAtEnd(4, r0);
    GF_AssertFail();
    memset(r4, 0, r5);
}



void ov01_021F336C(void) {
}



