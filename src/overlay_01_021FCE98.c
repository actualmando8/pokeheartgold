/* Decompiled from asm/overlay_01_021FCE98.s */
#include "global.h"

void Task_UseSweetScentInField(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // ldr r0, [sp]
    // bl TaskManager_GetEnvironment
    // add r7, r0, #0
    // ldr r0, [sp]
    // bl TaskManager_GetStatePtr
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r5, [r7, #4]
    // cmp r0, #7
    // bls _021FCEBC
    // b _021FCFDE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FCEC8: ; jump table
    // ldr r6, [r5]
    // add r0, r5, #0
    // bl Heap_Free
    // mov r0, #0xb
    // mov r1, #0xc
    // bl Heap_AllocAtEnd
    // str r0, [r7, #4]
    // str r6, [r0, #8]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _021FCFDE
    // bl GetHoneySweetScentWorkSize
    // add r7, r0, #0
    // mov r0, #0xb
    // add r1, r7, #0
    // bl Heap_AllocAtEnd
    // str r0, [r5, #4]
    // mov r1, #0
    // add r2, r7, #0
    // bl memset
    // ldr r0, [r6, #0x40]
    // bl PlayerAvatar_GetState
    // sub r0, r0, #1
    // cmp r0, #1  ; walking or biking?
    // bhi _021FCF20
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _021FCFDE
    // add r0, r6, #0
    // bl ov01_022062CC
    // ldr r1, [r5, #8]
    // cmp r1, r0
    // bne _021FCF46
    // add r0, r6, #0
    // bl FollowMon_IsVisible
    // cmp r0, #0
    // beq _021FCF46
    // ldr r0, [sp]
    // ldr r1, _021FCFE4 ; =ov01_02205A60
    // mov r2, #0
    // bl TaskManager_Call
    // mov r0, #4
    // str r0, [r4]
    // b _021FCFDE
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _021FCFDE
    // ldr r0, [r6, #0x40]
    // bl PlayerAvatar_GetGender
    // add r3, r0, #0
    // ldr r2, [r7]
    // add r0, r6, #0
    // mov r1, #0
    // bl ov02_02249458
    // str r0, [r5]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _021FCFDE
    // ldr r0, [r5]
    // bl ov02_0224953C
    // cmp r0, #0
    // beq _021FCFDE
    // ldr r0, [r5]
    // bl ov02_02249548
    // mov r0, #6
    // str r0, [r4]
    // b _021FCFDE
    // add r0, r6, #0
    // mov r1, #0xc
    // bl ov02_02250780
    // cmp r0, #0
    // beq _021FCF9C
    // mov r0, #0x42
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #1
    // mov r5, #2
    // bl FieldSystem_UnkSub108_AddMonMood
    // b _021FCF9E
    // mov r5, #1
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov02_022507B4
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _021FCFDE
    // add r0, r6, #0
    // bl ov01_021FCFEC
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _021FCFDE
    // ldr r0, [sp]
    // ldr r1, _021FCFE8 ; =Task_HoneyOrSweetScent
    // ldr r2, [r5, #4]
    // bl TaskManager_Call
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _021FCFDE
    // add r0, r5, #0
    // bl Heap_Free
    // add r0, r7, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FCFE4: .word ov01_02205A60
    // _021FCFE8: .word Task_HoneyOrSweetScent
    // TODO: decompile
}



void ov01_021FCFEC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #4
    // mov r1, #0xd4
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // mov r0, #4
    // add r1, r5, #0
    // add r2, r4, #0
    // bl ov01_021FD064
    // ldr r0, [r5, #0x10]
    // ldr r1, _021FD010 ; =ov01_021FD014
    // add r2, r4, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, pc}
    // _021FD010: .word ov01_021FD014
    // TODO: decompile
}



u32 ov01_021FD014(void) {
    TaskManager_GetEnvironment();
    TaskManager_GetStatePtr(r4);
    // add r0, #0x20
    ov01_021FD154(r5, 3);
    // str r0, [r4]
    // add r5, #0x5c
    Field3dObject_Draw(r5);
    ov01_021FD128(r5);
    Heap_Free(r5);
}



void ov01_021FD064(void) {
    HeapExp_FndInitAllocator(r2, r0, 0x20);
    // add r0, #0x10
    Field3dModel_LoadFromFilesystem(r4, 0x86, 0x17, r5);
    // str r5, [sp]
    // add r0, #0x20
    // add r1, #0x10
    // str r4, [sp, #4]
    Field3dModelAnimation_LoadFromFilesystem(r4, r4, 0x86, 0x15);
    // str r5, [sp]
    // add r0, #0x34
    // add r1, #0x10
    // str r4, [sp, #4]
    Field3dModelAnimation_LoadFromFilesystem(r4, r4, 0x86, 0x16);
    // str r5, [sp]
    // add r0, #0x48
    // add r1, #0x10
    // str r4, [sp, #4]
    Field3dModelAnimation_LoadFromFilesystem(r4, r4, 0x86, 0x14);
    // add r0, #0x5c
    // add r1, #0x10
    Field3dObject_InitFromModel(r4, r4);
    // add r0, #0x5c
    // add r1, #0x20
    Field3dObject_AddAnimation(r4, r4);
    // add r0, #0x5c
    // add r1, #0x34
    Field3dObject_AddAnimation(r4, r4);
    // add r0, #0x5c
    // add r1, #0x48
    Field3dObject_AddAnimation(r4, r4);
    // add r0, #0x20
    ov01_021FD190(r4, 3, 0);
    FollowMon_GetMapObject(r6);
    // add r1, sp, #8
    MapObject_CopyPositionVector();
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // add r0, #0x5c
    Field3dObject_SetPosEx(r4);
    // add r4, #0x5c
    Field3dObject_SetActiveFlag(r4, 1);
}



void ov01_021FD128(void) {
}



u32 ov01_021FD154(void) {
    // mul r0, r4
    // add r0, r7, r0
    Field3dModelAnimation_FrameAdvanceAndCheck(0x14, (1 << 0xc));
}



void ov01_021FD190(void) {
    // mul r0, r4
    // add r0, r6, r0
    Field3dModelAnimation_FrameSet(0x14, r2);
}


