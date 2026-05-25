/* Decompiled from asm/overlay_01_021FCE98.s */
#include "global.h"

u32 Task_UseSweetScentInField(void) {
    // str r0, [sp]
    TaskManager_GetFieldSystem();
    // ldr r0, [sp]
    TaskManager_GetEnvironment();
    // ldr r0, [sp]
    TaskManager_GetStatePtr();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FCEC8: ; jump table
    Heap_Free(*((u32*)(r7 + 4)));
    Heap_AllocAtEnd(0xb, 0xc);
    *((u32*)(r7 + 4)) = r0;
    *((u32*)(r0 + 8)) = r6;
    // str r0, [r4]
    GetHoneySweetScentWorkSize((*((u32*)r4) + 1));
    Heap_AllocAtEnd(0xb, r0);
    *((u32*)(r5 + 4)) = r0;
    memset(0, r7);
    PlayerAvatar_GetState(*((u32*)(r6 + 0x40)));
    // str r0, [r4]
    ov01_022062CC(r6);
    FollowMon_IsVisible(r6, *((u32*)(r5 + 8)));
    // ldr r0, [sp]
    TaskManager_Call(ov01_02205A60, 0);
    // str r0, [r4]
    // str r0, [r4]
    PlayerAvatar_GetGender(*((u32*)(r6 + 0x40)));
    ov02_02249458(r6, 0, *((u32*)r7), r0);
    // str r0, [r5]
    // str r0, [r4]
    ov02_0224953C(*((u32*)r5));
    ov02_02249548(*((u32*)r5));
    // str r0, [r4]
    ov02_02250780(r6, 0xc);
    FieldSystem_UnkSub108_AddMonMood(*((u32*)(r6 + (0x42 << 2))), 1);
    ov02_022507B4(r6, 1);
    // str r0, [r4]
    ov01_021FCFEC(r6);
    // str r0, [r4]
    // ldr r0, [sp]
    TaskManager_Call((*((u32*)r4) + 1), Task_HoneyOrSweetScent, *((u32*)(r5 + 4)));
    // str r0, [r4]
    Heap_Free(r5);
    Heap_Free(r7);
}




void ov01_021FCFEC(void) {
    Heap_AllocAtEnd(4, 0xd4);
    ov01_021FD064(4, r5, r0);
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov01_021FD014, r4);
}




u32 ov01_021FD014(void) {
    // add r0, #0x20
    // str r0, [r4]
    // add r5, #0x5c
}




void ov01_021FD064(void) {
    // add r0, #0x10
    // str r5, [sp]
    // add r0, #0x20
    // add r1, #0x10
    // str r4, [sp, #4]
    // str r5, [sp]
    // add r0, #0x34
    // add r1, #0x10
    // str r4, [sp, #4]
    // str r5, [sp]
    // add r0, #0x48
    // add r1, #0x10
    // str r4, [sp, #4]
    // add r0, #0x5c
    // add r1, #0x10
    // add r0, #0x5c
    // add r1, #0x20
    // add r0, #0x5c
    // add r1, #0x34
    // add r0, #0x5c
    // add r1, #0x48
    // add r0, #0x20
    // add r1, sp, #8
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // add r0, #0x5c
    // add r4, #0x5c
}




void ov01_021FD128(void) {
}




u32 ov01_021FD154(void) {
    // add r0, r7, r0
}




void ov01_021FD190(void) {
    // add r0, r6, r0
}



