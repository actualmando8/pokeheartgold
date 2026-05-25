/* Decompiled from asm/overlay_01_021F3114.s */
#include "global.h"

u32 ov01_021F3114(void) {
    PlayerAvatar_GetMapObject(r1);
    sub_0205F504();
    sub_0205B9DC(((r0 << 0x18) >> 0x18));
    sub_0205B9E8(r4, 3);
    sub_0205B9F4(r4, 2);
    sub_0205BA00(r4, 0);
    ov01_021F3170(r5, r6, 1);
}



void ov01_021F3170(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0x18
    // add r6, r1, #0
    // add r7, r2, #0
    // bl ov01_021F3348
    // add r4, r0, #0
    // str r5, [r4, #0xc]
    // str r6, [r4, #0x10]
    // ldr r0, _021F3198 ; =SEQ_SE_DP_F209
    // str r7, [r4]
    // bl PlaySE
    // ldr r1, _021F319C ; =ov01_021F31CC
    // add r0, r5, #0
    // add r2, r4, #0
    // bl FieldSystem_CreateTask
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F3198: .word SEQ_SE_DP_F209
    // _021F319C: .word ov01_021F31CC
    // TODO: decompile
}



u32 ov01_021F31A0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F31B0: ; jump table
}



void ov01_021F31CC(void) {
    // push {r4, r5, r6, lr}
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r0, [r4, #0x10]
    // bl PlayerAvatar_GetMapObject
    // add r6, r0, #0
    // bl sub_0205F504
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _021F31F4
    // cmp r0, #1
    // beq _021F3206
    // cmp r0, #2
    // beq _021F3236
    // b _021F3340
    // mov r1, #1
    // add r0, r6, #0
    // lsl r1, r1, #8
    // bl MapObject_SetFlagsBits
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _021F3340
    // ldr r0, [r4, #0x10]
    // bl sub_0205DFC8
    // cmp r0, #0
    // bne _021F3212
    // b _021F3340
    // ldr r0, [r4]
    // mov r1, #0xc
    // bl sub_0206234C
    // add r1, r0, #0
    // ldr r0, [r4, #0x10]
    // bl sub_0205DFD4
    // ldr r0, [r4, #0x10]
    // ldr r1, [r4]
    // bl PlayerAvatar_SetFacingDirection
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // mov r0, #7
    // str r0, [r4, #4]
    // b _021F3340
    // ldr r0, [r4, #4]
    // cmp r0, #2
    // beq _021F3244
    // cmp r0, #4
    // beq _021F3244
    // cmp r0, #6
    // bne _021F3254
    // ldr r0, [r4]
    // bl ov01_021F31A0
    // str r0, [r4]
    // ldr r0, [r4, #0x10]
    // ldr r1, [r4]
    // bl PlayerAvatar_SetFacingDirection
    // ldr r0, [r4, #4]
    // sub r0, r0, #1
    // str r0, [r4, #4]
    // bne _021F3340
    // add r0, r5, #0
    // bl sub_0205B9DC
    // cmp r0, #1
    // bne _021F3274
    // mov r0, #3
    // str r0, [r4]
    // ldr r0, [r4, #0xc]
    // add r1, r5, #0
    // bl ov04_02256BE4
    // b _021F3300
    // add r0, r5, #0
    // bl sub_0205B9E8
    // cmp r0, #1
    // bne _021F328C
    // mov r0, #2
    // str r0, [r4]
    // ldr r0, [r4, #0xc]
    // add r1, r5, #0
    // bl ov04_02256BE4
    // b _021F3300
    // add r0, r5, #0
    // bl sub_0205B9F4
    // cmp r0, #1
    // bne _021F32A4
    // mov r0, #0
    // str r0, [r4]
    // ldr r0, [r4, #0xc]
    // add r1, r5, #0
    // bl ov04_02256BE4
    // b _021F3300
    // add r0, r5, #0
    // bl sub_0205BA00
    // cmp r0, #1
    // bne _021F32BC
    // mov r0, #1
    // str r0, [r4]
    // ldr r0, [r4, #0xc]
    // add r1, r5, #0
    // bl ov04_02256BE4
    // b _021F3300
    // add r0, r5, #0
    // bl sub_0205BA0C
    // cmp r0, #1
    // ldr r0, [r4]
    // bne _021F32FA
    // bl ov01_021F31A0
    // str r0, [r4]
    // add r0, r6, #0
    // mov r1, #0x80
    // bl MapObject_ClearFlagsBits
    // mov r1, #1
    // add r0, r6, #0
    // lsl r1, r1, #8
    // bl MapObject_ClearFlagsBits
    // ldr r0, [r4, #0x10]
    // ldr r1, [r4]
    // bl PlayerAvatar_SetFacingDirection
    // add r0, r4, #0
    // bl ov01_021F336C
    // ldr r0, _021F3344 ; =SEQ_SE_DP_F209
    // mov r1, #0
    // bl StopSE
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // bl ov01_021F31A0
    // str r0, [r4]
    // ldr r0, [r4, #0x10]
    // ldr r2, [r4]
    // add r1, r6, #0
    // bl sub_0205DA34
    // cmp r0, #0
    // bne _021F3314
    // mov r0, #1
    // str r0, [r4, #8]
    // b _021F3340
    // add r0, r6, #0
    // mov r1, #0x80
    // bl MapObject_ClearFlagsBits
    // mov r1, #1
    // add r0, r6, #0
    // lsl r1, r1, #8
    // bl MapObject_ClearFlagsBits
    // ldr r0, [r4, #0x10]
    // ldr r1, [r4]
    // bl PlayerAvatar_SetFacingDirection
    // add r0, r4, #0
    // bl ov01_021F336C
    // ldr r0, _021F3344 ; =SEQ_SE_DP_F209
    // mov r1, #0
    // bl StopSE
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _021F3344: .word SEQ_SE_DP_F209
    // TODO: decompile
}



void * ov01_021F3348(void) {
    Heap_AllocAtEnd(4, r0);
    GF_AssertFail();
    memset(r4, 0, r5);
}



void ov01_021F336C(void) {
}


