/* Decompiled from asm/unk_02097024.s */
#include "global.h"

void * sub_02097024(void) {
    Heap_Alloc(r1, 0x3c);
    memset(0, 0x3c);
    // ldmia r5!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    sub_02096C88(r4, r6, r4);
    *((u32*)(r4 + 0x30)) = r0;
}



void sub_02097060(void) {
}




void sub_02097078(void) {
}




void * sub_0209707C(void) {
    Heap_Alloc(0xb, 0x34);
    memset(0, 0x34);
    *((u32*)(r4 + 0x28)) = r5;
    *((u32*)(r4 + 0x10)) = *((u32*)(r5 + 0xc));
    // add r0, #0x84
    *((u32*)(r4 + 0x14)) = *((u32*)r5);
    Save_PlayerData_GetOptionsAddr(*((u32*)(r5 + 0xc)));
    *((u32*)(r4 + 0x18)) = r0;
    Save_GameStats_Get(*((u32*)(r5 + 0xc)));
    *((u32*)(r4 + 0x1c)) = r0;
    Options_GetFrame(*((u32*)(r4 + 0x18)));
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 0x20)) = r5;
}



u32 sub_020970C0(void) {
    // blx r1
    Heap_Free(r0, *((u32*)(_02108EC0 + (*((u32*)r0) << 2))), (*((u32*)r0) << 2));
}




u32 sub_020970E4(void) {
    // add r0, #8
    sub_02097024(0xb);
    *((u32*)(r4 + 0x24)) = r0;
    // str r0, [r4]
    FieldSystem_LaunchApplication(*((u32*)(r4 + 0x28)), _02108EA0, *((u32*)(r4 + 0x24)));
}




u32 sub_02097108(void) {
    // str r0, [r4]
    // str r1, [r0]
    // str r0, [r4]
}




u32 sub_02097148(void) {
    FieldSystem_ApplicationIsRunning(*((u32*)(r0 + 0x28)));
    // add r1, #0x26
    Heap_Free(*((u32*)(r5 + 0x2c)), *((u32*)(r5 + 0x2c)));
    // add r0, #0x27
    PokemonSummary_CreateArgs(*((u32*)(r5 + 0x28)), 3, 0);
    *((u32*)(r5 + 0x30)) = r0;
    *((u32*)(r5 + 4)) = r4;
    *((u8*)(*((u32*)(r5 + 0x30)) + 0x14)) = r4;
    PokemonSummary_LearnForget_LaunchApp(*((u32*)(r5 + 0x28)), *((u32*)(r5 + 0x30)));
    // str r0, [r5]
    *((u32*)(*((u32*)(r5 + 0x24)) + 4)) = r4;
    FieldSystem_LaunchApplication(*((u32*)(r5 + 0x28)), _02108EB0, *((u32*)(r5 + 0x24)));
    // str r1, [r0]
    // str r0, [r5]
}




u32 sub_020971AC(void) {
    // str r0, [r4]
}




void sub_020971D4(void) {
}




void sub_020971EC(void) {
}



