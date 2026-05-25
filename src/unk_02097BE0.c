/* Decompiled from asm/unk_02097BE0.s */
#include "global.h"

void sub_02097BE0(void) {
    /* Original at 0x02097BE0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r5, r0, #0
    add r7, r1, #0
    mov r0, #0xb
    mov r1, #0x54
    bl Heap_AllocAtEnd
    add r4, r0, #0
    ldr r3, [r5, #0x48]
    add r6, r4, #0
    mov r2, #9
    ldmia r3!, {r0, r1}
    stmia r6!, {r0, r1}
    sub r2, r2, #1
    bne _02097BF6
    str r7, [r4, #0x48]
    mov r0, #0
    str r0, [r4, #0x50]
    add r0, r5, #0
    bl Field_GetTimeOfDay
    cmp r0, #4
    bhi _02097C36
    add r0, r0, r0
    add r0, pc
    ldrh r0, [r0, #6]
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add pc, r0
    _02097C1A: ; jump table
    mov r0, #0
    str r0, [r4, #0x4c]
    b _02097C3E
    mov r0, #1
    str r0, [r4, #0x4c]
    b _02097C3E
    mov r0, #2
    str r0, [r4, #0x4c]
    b _02097C3E
    bl GF_AssertFail
    mov r0, #1
    str r0, [r4, #0x4c]
    ldr r0, [r5, #0x10]
    ldr r1, _02097C4C ; =sub_02097C50
    add r2, r4, #0
    bl TaskManager_Call
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _02097C4C: .word sub_02097C50"
    );
    #endif
}

void sub_02097C50(void) {
    /* Original at 0x02097C50 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    add r5, r0, #0
    bl TaskManager_GetFieldSystem
    add r6, r0, #0
    add r0, r5, #0
    bl TaskManager_GetEnvironment
    add r4, r0, #0
    ldr r1, [r4, #0x50]
    cmp r1, #3
    bhi _02097CB0
    add r1, r1, r1
    add r1, pc
    ldrh r1, [r1, #6]
    lsl r1, r1, #0x10
    asr r1, r1, #0x10
    add pc, r1
    _02097C74: ; jump table
    add r0, r5, #0
    bl CallTask_LeaveOverworld
    ldr r0, [r4, #0x50]
    add r0, r0, #1
    str r0, [r4, #0x50]
    b _02097CB0
    add r0, r6, #0
    add r1, r4, #0
    bl sub_02097CB4
    ldr r0, [r4, #0x50]
    add r0, r0, #1
    str r0, [r4, #0x50]
    b _02097CB0
    add r0, r5, #0
    bl CallTask_RestoreOverworld
    ldr r0, [r4, #0x50]
    add r0, r0, #1
    str r0, [r4, #0x50]
    b _02097CB0
    bl Heap_Free
    mov r0, #1
    pop {r4, r5, r6, pc}
    mov r0, #0
    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02097CB4(void) {
    /* Original at 0x02097CB4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    add r4, r0, #0
    add r5, r1, #0
    mov r0, #0xb
    mov r1, #0xc
    bl Heap_AllocAtEnd
    add r2, r0, #0
    str r5, [r2]
    mov r0, #0
    str r0, [r2, #8]
    ldr r0, [r4, #0x10]
    ldr r1, _02097CD4 ; =sub_02097CD8
    bl TaskManager_Call
    pop {r3, r4, r5, pc}
    _02097CD4: .word sub_02097CD8"
    );
    #endif
}

void sub_02097CD8(void) {
    /* Original at 0x02097CD8 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    add r4, r0, #0
    bl TaskManager_GetFieldSystem
    add r5, r0, #0
    add r0, r4, #0
    bl TaskManager_GetEnvironment
    add r4, r0, #0
    ldr r0, [r4, #8]
    ldr r1, [r4]
    cmp r0, #0
    beq _02097CFC
    cmp r0, #1
    beq _02097D14
    cmp r0, #2
    beq _02097D26
    b _02097D36
    mov r0, #0xb
    str r0, [sp]
    ldr r2, [r1, #0x48]
    ldr r3, [r1, #0x4c]
    add r0, r5, #0
    bl LegendaryCinematic_LaunchApp
    str r0, [r4, #4]
    ldr r0, [r4, #8]
    add r0, r0, #1
    str r0, [r4, #8]
    b _02097D36
    add r0, r5, #0
    bl FieldSystem_ApplicationIsRunning
    cmp r0, #0
    bne _02097D36
    ldr r0, [r4, #8]
    add r0, r0, #1
    str r0, [r4, #8]
    b _02097D36
    ldr r0, [r4, #4]
    bl Heap_Free
    add r0, r4, #0
    bl Heap_Free
    mov r0, #1
    pop {r3, r4, r5, pc}
    mov r0, #0
    pop {r3, r4, r5, pc}"
    );
    #endif
}
