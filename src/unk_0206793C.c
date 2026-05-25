/* Decompiled from asm/unk_0206793C.s */
#include "global.h"

void sub_0206793C(void) {
    /* Original at 0x0206793C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    bl TaskManager_GetFieldSystem
    add r0, r4, #0
    bl TaskManager_GetEnvironment
    add r2, r0, #0
    ldr r1, _02067958 ; =_020FE79C
    add r0, r4, #0
    add r2, #0xc
    bl CallApplicationAsTask
    pop {r4, pc}
    _02067958: .word _020FE79C"
    );
    #endif
}

void Task_NPCTrade(void) {
    /* Original at 0x0206795C */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    sub sp, #8
    add r5, r0, #0
    bl TaskManager_GetFieldSystem
    add r6, r0, #0
    add r0, r5, #0
    bl TaskManager_GetEnvironment
    add r4, r0, #0
    ldr r0, [r4, #4]
    cmp r0, #6
    bhi _02067A16
    add r0, r0, r0
    add r0, pc
    ldrh r0, [r0, #6]
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add pc, r0
    _02067982: ; jump table
    ldr r0, [r4, #0x24]
    add r3, r4, #0
    str r0, [sp]
    ldr r0, [r4, #0x28]
    add r3, #0xc
    str r0, [sp, #4]
    ldr r1, [r4]
    ldr r2, [r4, #8]
    add r0, r6, #0
    bl NPCTrade_CreateTradeAnim
    ldr r1, [r4]
    ldr r2, [r4, #8]
    add r0, r6, #0
    bl NPCTrade_ReceiveMonToSlot
    ldr r0, [r4, #4]
    add r0, r0, #1
    str r0, [r4, #4]
    b _02067A16
    add r0, r5, #0
    bl PaletteFadeUntilFinished
    ldr r0, [r4, #4]
    add r0, r0, #1
    str r0, [r4, #4]
    b _02067A16
    add r0, r5, #0
    bl CallTask_LeaveOverworld
    ldr r0, [r4, #4]
    add r0, r0, #1
    str r0, [r4, #4]
    b _02067A16
    add r0, r5, #0
    bl sub_0206793C
    ldr r0, [r4, #4]
    add r0, r0, #1
    str r0, [r4, #4]
    b _02067A16
    add r0, r5, #0
    bl CallTask_RestoreOverworld
    ldr r0, [r4, #4]
    add r0, r0, #1
    str r0, [r4, #4]
    b _02067A16
    add r0, r5, #0
    bl CallTask_FadeFromBlack
    ldr r0, [r4, #4]
    add r0, r0, #1
    str r0, [r4, #4]
    b _02067A16
    ldr r0, [r4, #0x24]
    bl Heap_Free
    ldr r0, [r4, #0x28]
    bl Heap_Free
    add r0, r4, #0
    bl Heap_Free
    add sp, #8
    mov r0, #1
    pop {r4, r5, r6, pc}
    mov r0, #0
    add sp, #8
    pop {r4, r5, r6, pc}"
    );
    #endif
}

void CallTask_NPCTrade(void) {
    /* Original at 0x02067A1C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r7, r0, #0
    add r5, r1, #0
    add r0, r3, #0
    mov r1, #0x2c
    add r6, r2, #0
    str r3, [sp]
    bl Heap_Alloc
    mov r1, #0
    mov r2, #0x2c
    add r4, r0, #0
    bl memset
    mov r0, #0
    str r0, [r4, #4]
    str r5, [r4]
    ldr r0, [sp]
    str r6, [r4, #8]
    bl AllocMonZeroed
    str r0, [r4, #0x24]
    ldr r0, [sp]
    bl AllocMonZeroed
    str r0, [r4, #0x28]
    ldr r1, _02067A5C ; =Task_NPCTrade
    add r0, r7, #0
    add r2, r4, #0
    bl TaskManager_Call
    pop {r3, r4, r5, r6, r7, pc}
    _02067A5C: .word Task_NPCTrade"
    );
    #endif
}
