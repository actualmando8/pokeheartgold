/* Decompiled from asm/unk_02095DF4.s */
#include "global.h"

void sub_02095DF4(void) {
    /* Original at 0x02095DF4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r5, r0, #0
    add r4, r1, #0
    mov r0, #0xb
    mov r1, #0x20
    add r6, r2, #0
    add r7, r3, #0
    bl Heap_AllocAtEnd
    add r2, r0, #0
    mov r0, #0
    str r0, [r2]
    str r4, [r2, #8]
    strh r6, [r2, #0xe]
    ldr r0, [sp, #0x18]
    strh r7, [r2, #0xc]
    str r0, [r2, #0x10]
    ldr r0, [sp, #0x1c]
    ldr r1, _02095E2C ; =sub_02095E30
    str r0, [r2, #0x14]
    ldr r0, [sp, #0x20]
    str r0, [r2, #0x18]
    ldr r0, [sp, #0x24]
    str r0, [r2, #0x1c]
    ldr r0, [r5, #0x10]
    bl TaskManager_Call
    pop {r3, r4, r5, r6, r7, pc}
    _02095E2C: .word sub_02095E30"
    );
    #endif
}

void sub_02095E30(void) {
    /* Original at 0x02095E30 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    add r4, r0, #0
    bl TaskManager_GetFieldSystem
    add r5, r0, #0
    add r0, r4, #0
    bl TaskManager_GetEnvironment
    add r4, r0, #0
    ldr r0, [r4]
    cmp r0, #3
    bhi _02095EF4
    add r0, r0, r0
    add r0, pc
    ldrh r0, [r0, #6]
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add pc, r0
    _02095E54: ; jump table
    mov r0, #0xb
    mov r1, #0x10
    bl Heap_AllocAtEnd
    str r0, [r4, #4]
    ldr r0, [r4, #8]
    cmp r0, #0
    beq _02095E70
    mov r1, #1
    b _02095E72
    mov r1, #0
    ldr r0, [r4, #4]
    str r1, [r0, #4]
    add r0, r5, #0
    bl FieldSystem_GetSaveData
    ldr r1, [r4, #4]
    str r0, [r1]
    ldrh r1, [r4, #0xc]
    ldr r0, [r4, #4]
    strb r1, [r0, #0xc]
    ldrh r1, [r4, #0xe]
    ldr r0, [r4, #4]
    strb r1, [r0, #0xf]
    ldr r1, [r4, #4]
    add r0, r5, #0
    bl PokeathlonCourse_LaunchApp
    bl sub_0203E30C
    mov r0, #1
    str r0, [r4]
    b _02095EF4
    add r0, r5, #0
    bl FieldSystem_ApplicationIsRunning
    cmp r0, #0
    bne _02095EF4
    mov r0, #2
    str r0, [r4]
    add r0, r5, #0
    bl FieldSystem_LoadFieldOverlay
    b _02095EF4
    add r0, r5, #0
    bl sub_020505C8
    cmp r0, #0
    beq _02095EF4
    mov r0, #3
    str r0, [r4]
    b _02095EF4
    ldr r0, [r4, #4]
    ldrb r1, [r0, #0xe]
    ldr r0, [r4, #0x10]
    strh r1, [r0]
    ldr r0, [r4, #4]
    ldrh r1, [r0, #0xa]
    ldr r0, [r4, #0x14]
    strh r1, [r0]
    ldr r0, [r4, #4]
    ldrh r1, [r0, #8]
    ldr r0, [r4, #0x18]
    strh r1, [r0]
    ldr r0, [r4, #4]
    ldrb r1, [r0, #0xd]
    ldr r0, [r4, #0x1c]
    strh r1, [r0]
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
