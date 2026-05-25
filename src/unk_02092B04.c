/* Decompiled from asm/unk_02092B04.s */
#include "global.h"

void sub_02092B04(void) {
    /* Original at 0x02092B04 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    add r5, r0, #0
    bl TaskManager_GetFieldSystem
    add r6, r0, #0
    add r0, r5, #0
    bl TaskManager_GetEnvironment
    add r4, r0, #0
    ldr r0, _02092B3C ; =0x00000272
    ldrb r0, [r4, r0]
    cmp r0, #0x18
    beq _02092B24
    cmp r0, #0x19
    beq _02092B32
    b _02092B38
    add r0, r6, #0
    add r1, r4, #0
    bl sub_02092B40
    ldr r1, _02092B3C ; =0x00000272
    strb r0, [r4, r1]
    b _02092B38
    add r0, r5, #0
    bl sub_02092B7C
    mov r0, #0
    pop {r4, r5, r6, pc}
    _02092B3C: .word 0x00000272"
    );
    #endif
}

void sub_02092B40(void) {
    /* Original at 0x02092B40 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    add r5, r0, #0
    add r4, r1, #0
    bl FieldSystem_ApplicationIsRunning
    cmp r0, #0
    beq _02092B52
    mov r0, #0x18
    pop {r3, r4, r5, pc}
    mov r0, #0x2a
    lsl r0, r0, #4
    ldr r0, [r4, r0]
    cmp r0, #0
    beq _02092B6A
    ldr r0, [r4, #4]
    bl sub_0207791C
    mov r1, #0x2a
    lsl r1, r1, #4
    ldr r1, [r4, r1]
    strh r0, [r1, #2]
    ldr r0, [r4, #4]
    bl Heap_Free
    add r0, r5, #0
    bl FieldSystem_LoadFieldOverlay
    mov r0, #0x19
    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02092B7C(void) {
    /* Original at 0x02092B7C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    add r5, r0, #0
    bl TaskManager_GetFieldSystem
    add r6, r0, #0
    add r0, r5, #0
    bl TaskManager_GetEnvironment
    add r4, r0, #0
    add r0, r6, #0
    bl sub_020505C8
    cmp r0, #0
    beq _02092BAE
    mov r0, #1
    bl ov01_021E636C
    ldr r1, _02092BB0 ; =ov03_02256E2C
    add r0, r5, #0
    add r2, r4, #0
    bl TaskManager_Jump
    ldr r0, _02092BB4 ; =0x00000272
    mov r1, #0x1a
    strb r1, [r4, r0]
    pop {r4, r5, r6, pc}
    _02092BB0: .word ov03_02256E2C
    _02092BB4: .word 0x00000272"
    );
    #endif
}
