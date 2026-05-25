/* Decompiled from asm/unk_020961D8.s */
#include "global.h"

void sub_020961D8(void) {
    TaskManager_GetFieldSystem();
    Heap_Alloc(0x20, 0x24);
    // str r5, [r4]
    MessageFormat_New(0x20);
    *((u32*)(r4 + 4)) = r0;
    // str r3, [sp]
    // add r3, #0xec
    // add r3, r5, r3
    EasyChat_CreateArgs(2, 0, *((u32*)(*((u32*)r4) + 0xc)), 0x20);
    *((u32*)(r4 + 0x10)) = r0;
    Save_Misc_Get(*((u32*)(r5 + 0xc)));
    *((u32*)(r4 + 0x14)) = r0;
    *((u32*)(r4 + 0x20)) = r6;
    // add r0, #8
    MailMsg_Init_WithBank(r4, 4);
    // add r1, #8
    SaveMisc_GetBattleGreeting(*((u32*)(r4 + 0x14)), r4);
    sub_02090D40(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0x18)) = 0;
    TaskManager_Call(r7, sub_02096260, r4);
}




void sub_02096248(void) {
}




void sub_02096260(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0209627A: ; jump table
    // add r1, #8
    // strh r1, [r0]
    // strh r1, [r0]
    // add r1, #8
    // add r1, #8
}



