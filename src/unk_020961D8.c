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
    EasyChat_FreeArgs(*((u32*)(r0 + 0x10)));
    MessageFormat_Delete(*((u32*)(r4 + 4)));
    Heap_Free(r4);
}


void sub_02096260(void) {
    // push {r4, lr}
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r1, [r4, #0x18]
    // cmp r1, #4
    // bhi _02096314
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0209627A: ; jump table
    // add r1, r4, #0
    // ldr r0, [r4, #0x10]
    // add r1, #8
    // bl sub_02090D20
    // ldr r0, [r4, #0x10]
    // bl sub_02090D34
    // ldr r0, [r4]
    // ldr r1, [r4, #0x10]
    // bl EasyChat_LaunchApp
    // mov r0, #1
    // str r0, [r4, #0x18]
    // b _02096314
    // ldr r0, [r4]
    // bl FieldSystem_ApplicationIsRunning
    // cmp r0, #0
    // bne _02096314
    // ldr r0, [r4]
    // bl FieldSystem_LoadFieldOverlay
    // mov r0, #2
    // str r0, [r4, #0x18]
    // b _02096314
    // ldr r0, [r4]
    // bl sub_020505C8
    // cmp r0, #0
    // beq _02096314
    // mov r0, #1
    // bl ov01_021E636C
    // mov r0, #3
    // str r0, [r4, #0x18]
    // b _02096314
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _02096314
    // ldr r0, [r4, #0x10]
    // bl sub_02090D48
    // cmp r0, #0
    // beq _020962EC
    // ldr r0, [r4, #0x20]
    // mov r1, #0
    // strh r1, [r0]
    // mov r0, #4
    // str r0, [r4, #0x18]
    // b _02096314
    // ldr r0, [r4, #0x20]
    // mov r1, #1
    // strh r1, [r0]
    // add r1, r4, #0
    // ldr r0, [r4, #0x10]
    // add r1, #8
    // bl sub_02090D60
    // add r1, r4, #0
    // ldr r0, [r4, #0x14]
    // add r1, #8
    // bl SaveMisc_SetBattleGreeting
    // mov r0, #4
    // str r0, [r4, #0x18]
    // b _02096314
    // bl sub_02096248
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}

