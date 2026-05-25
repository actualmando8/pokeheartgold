/* Decompiled from asm/unk_020961D8.s */
#include "global.h"

void sub_020961D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r6, r1, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // mov r0, #0x20
    // mov r1, #0x24
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // mov r0, #0x20
    // bl MessageFormat_New
    // str r0, [r4, #4]
    // mov r3, #0x20
    // str r3, [sp]
    // ldr r2, [r4]
    // add r3, #0xec
    // ldr r2, [r2, #0xc]
    // mov r0, #2
    // mov r1, #0
    // add r3, r5, r3
    // bl EasyChat_CreateArgs
    // str r0, [r4, #0x10]
    // ldr r0, [r5, #0xc]
    // bl Save_Misc_Get
    // str r0, [r4, #0x14]
    // add r0, r4, #0
    // str r6, [r4, #0x20]
    // add r0, #8
    // mov r1, #4
    // bl MailMsg_Init_WithBank
    // add r1, r4, #0
    // ldr r0, [r4, #0x14]
    // add r1, #8
    // bl SaveMisc_GetBattleGreeting
    // ldr r0, [r4, #0x10]
    // bl sub_02090D40
    // mov r0, #0
    // str r0, [r4, #0x18]
    // ldr r1, _02096244 ; =sub_02096260
    // add r0, r7, #0
    // add r2, r4, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02096244: .word sub_02096260
    // TODO: decompile
}



void sub_02096248(void) {
}



void sub_02096260(void) {
    TaskManager_GetEnvironment();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0209627A: ; jump table
    // add r1, #8
    sub_02090D20(*((u32*)(r0 + 0x10)), r0);
    sub_02090D34(*((u32*)(r4 + 0x10)));
    EasyChat_LaunchApp(*((u32*)r4), *((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0x18)) = 1;
    FieldSystem_ApplicationIsRunning(*((u32*)r4));
    FieldSystem_LoadFieldOverlay(*((u32*)r4));
    *((u32*)(r4 + 0x18)) = 2;
    sub_020505C8(*((u32*)r4));
    ov01_021E636C(1);
    *((u32*)(r4 + 0x18)) = 3;
    IsPaletteFadeFinished(3);
    sub_02090D48(*((u32*)(r4 + 0x10)));
    // strh r1, [r0]
    *((u32*)(r4 + 0x18)) = 4;
    // strh r1, [r0]
    // add r1, #8
    sub_02090D60(*((u32*)(r4 + 0x10)), r4);
    // add r1, #8
    SaveMisc_SetBattleGreeting(*((u32*)(r4 + 0x14)), r4);
    *((u32*)(r4 + 0x18)) = 4;
    sub_02096248(4);
}


