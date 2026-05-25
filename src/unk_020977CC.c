/* Decompiled from asm/unk_020977CC.s */
#include "global.h"

void sub_020977CC(void) {
    /* Original at 0x020977CC */
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
    ldr r1, _0209780C ; =sub_020978D0
    add r2, r4, #0
    bl TaskManager_Call
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _0209780C: .word sub_020978D0"
    );
    #endif
}

void sub_02097810(void) {
    /* Original at 0x02097810 */
    /* Requires manual decompilation - 41 instructions */
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
    bhi _02097852
    add r0, r0, r0
    add r0, pc
    ldrh r0, [r0, #6]
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add pc, r0
    _0209783C: ; jump table
    mov r0, #0
    strb r0, [r4, #2]
    b _0209785A
    mov r0, #1
    strb r0, [r4, #2]
    b _0209785A
    bl GF_AssertFail
    mov r0, #0
    strb r0, [r4, #2]
    ldr r0, [r5, #0xc]
    bl Save_PlayerData_GetProfile
    bl PlayerProfile_GetTrainerGender
    strb r0, [r4, #1]
    ldr r0, [r5, #0x10]
    ldr r1, _02097874 ; =sub_02097878
    add r2, r4, #0
    bl TaskManager_Call
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _02097874: .word sub_02097878"
    );
    #endif
}

void sub_02097878(void) {
    /* Original at 0x02097878 */
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
    beq _020978A2
    cmp r0, #1
    beq _020978AC
    cmp r0, #2
    beq _020978BA
    b _020978C4
    add r0, r4, #0
    add r1, r6, #0
    bl sub_0203FC68
    b _020978C4
    add r0, r4, #0
    bl FieldSystem_ApplicationIsRunning
    cmp r0, #0
    beq _020978C4
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

void sub_020978D0(void) {
    /* Original at 0x020978D0 */
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
    bhi _020979A2
    add r1, r1, r1
    add r1, pc
    ldrh r1, [r1, #6]
    lsl r1, r1, #0x10
    asr r1, r1, #0x10
    add pc, r1
    _020978F6: ; jump table
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
    b _020979A2
    bl IsPaletteFadeFinished
    cmp r0, #0
    beq _02097938
    bl GF_SndGetFadeTimer
    cmp r0, #0
    beq _0209793E
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
    b _020979A2
    ldrb r1, [r4, #1]
    add r2, r4, #0
    add r0, r6, #0
    add r2, #0x10
    bl sub_02097810
    mov r0, #3
    strb r0, [r4]
    b _020979A2
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
    b _020979A2
    ldr r1, [r4, #4]
    add r0, r6, #0
    mov r2, #0
    bl FieldBGM_PlayForMapHeader
    add r0, r5, #0
    bl sub_02055408
    mov r0, #5
    strb r0, [r4]
    b _020979A2
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
