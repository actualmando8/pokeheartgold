/* Decompiled from asm/unk_020979A8.s */
#include "global.h"

void sub_020979A8(void) {
    /* Original at 0x020979A8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r5, r0, #0
    add r6, r1, #0
    mov r0, #0xb
    mov r1, #0x58
    add r7, r2, #0
    str r3, [sp]
    bl Heap_AllocAtEnd
    add r4, r0, #0
    strb r6, [r4, #1]
    add r1, r4, #0
    ldr r0, [sp]
    strb r7, [r4, #2]
    str r0, [r4, #4]
    ldr r0, [sp, #0x18]
    add r1, #0x10
    str r0, [r4, #8]
    ldr r0, [sp, #0x1c]
    str r0, [r4, #0xc]
    mov r0, #0
    bl LoadAreaOrDungeonLightTxt
    mov r0, #0
    strb r0, [r4]
    ldr r0, [r5, #0x10]
    ldr r1, _020979E8 ; =sub_02097AA0
    add r2, r4, #0
    bl TaskManager_Call
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _020979E8: .word sub_02097AA0"
    );
    #endif
}

void sub_020979EC(void) {
    /* Original at 0x020979EC */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r5, r0, #0
    add r6, r1, #0
    mov r0, #0xb
    mov r1, #8
    add r7, r2, #0
    bl Heap_AllocAtEnd
    add r4, r0, #0
    str r7, [r4, #4]
    add r0, r5, #0
    strb r6, [r4]
    bl Field_GetTimeOfDay
    cmp r0, #4
    bhi _02097A2E
    add r0, r0, r0
    add r0, pc
    ldrh r0, [r0, #6]
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add pc, r0
    _02097A18: ; jump table
    mov r0, #0
    strb r0, [r4, #1]
    b _02097A36
    mov r0, #1
    strb r0, [r4, #1]
    b _02097A36
    bl GF_AssertFail
    mov r0, #0
    strb r0, [r4, #1]
    ldr r0, [r5, #0x10]
    ldr r1, _02097A44 ; =sub_02097A48
    add r2, r4, #0
    bl TaskManager_Call
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _02097A44: .word sub_02097A48"
    );
    #endif
}

void sub_02097A48(void) {
    /* Original at 0x02097A48 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    add r5, r0, #0
    bl TaskManager_GetFieldSystem
    add r4, r0, #0
    add r0, r5, #0
    bl TaskManager_GetEnvironment
    add r6, r0, #0
    add r0, r5, #0
    bl TaskManager_GetStatePtr
    add r5, r0, #0
    ldr r0, [r5]
    cmp r0, #0
    beq _02097A72
    cmp r0, #1
    beq _02097A7C
    cmp r0, #2
    beq _02097A8A
    b _02097A94
    add r0, r4, #0
    add r1, r6, #0
    bl sub_0203FC90
    b _02097A94
    add r0, r4, #0
    bl FieldSystem_ApplicationIsRunning
    cmp r0, #0
    beq _02097A94
    mov r0, #0
    pop {r4, r5, r6, pc}
    add r0, r6, #0
    bl Heap_Free
    mov r0, #1
    pop {r4, r5, r6, pc}
    ldr r0, [r5]
    add r0, r0, #1
    str r0, [r5]
    mov r0, #0
    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02097AA0(void) {
    /* Original at 0x02097AA0 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}
    sub sp, #0xc
    add r5, r0, #0
    bl TaskManager_GetFieldSystem
    add r6, r0, #0
    add r0, r5, #0
    bl TaskManager_GetEnvironment
    add r4, r0, #0
    ldrb r1, [r4]
    cmp r1, #5
    bhi _02097B72
    add r1, r1, r1
    add r1, pc
    ldrh r1, [r1, #6]
    lsl r1, r1, #0x10
    asr r1, r1, #0x10
    add pc, r1
    _02097AC6: ; jump table
    mov r0, #6
    str r0, [sp]
    mov r0, #1
    str r0, [sp, #4]
    mov r0, #0xb
    str r0, [sp, #8]
    mov r0, #0
    add r1, r0, #0
    add r2, r0, #0
    add r3, r0, #0
    bl BeginNormalPaletteFade
    mov r0, #0
    mov r1, #6
    bl GF_SndStartFadeOutBGM
    mov r0, #1
    strb r0, [r4]
    b _02097B72
    bl IsPaletteFadeFinished
    cmp r0, #0
    beq _02097B08
    bl GF_SndGetFadeTimer
    cmp r0, #0
    beq _02097B0E
    add sp, #0xc
    mov r0, #0
    pop {r3, r4, r5, r6, pc}
    bl GF_GetCurrentPlayingBGM
    mov r1, #0
    bl StopBGM
    add r0, r5, #0
    bl CallTask_LeaveOverworld
    mov r0, #2
    strb r0, [r4]
    b _02097B72
    ldrb r1, [r4, #1]
    add r2, r4, #0
    add r0, r6, #0
    add r2, #0x10
    bl sub_020979EC
    mov r0, #3
    strb r0, [r4]
    b _02097B72
    ldr r0, [r4, #0xc]
    mov r2, #0
    str r0, [sp]
    ldrb r0, [r4, #2]
    mvn r2, r2
    str r0, [sp, #4]
    ldr r1, [r4, #4]
    ldr r3, [r4, #8]
    add r0, r5, #0
    bl sub_020537F0
    mov r0, #4
    strb r0, [r4]
    b _02097B72
    ldr r1, [r4, #4]
    add r0, r6, #0
    mov r2, #0
    bl FieldBGM_PlayForMapHeader
    add r0, r5, #0
    bl sub_02055408
    mov r0, #5
    strb r0, [r4]
    b _02097B72
    bl Heap_Free
    add sp, #0xc
    mov r0, #1
    pop {r3, r4, r5, r6, pc}
    mov r0, #0
    add sp, #0xc
    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}
