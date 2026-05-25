/* Decompiled from asm/overlay_12_0226BEC4.s */
#include "global.h"

void ov12_0226BEC4(void) {
    /* Original at 0x0226BEC4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    add r5, r0, #0
    mov r0, #5
    mov r1, #8
    bl Heap_Alloc
    mov r1, #0
    mov r2, #8
    add r4, r0, #0
    bl MI_CpuFill8
    mov r2, #0xfa
    ldr r0, _0226BEEC ; =ov12_0226BF04
    add r1, r4, #0
    lsl r2, r2, #2
    str r5, [r4]
    bl SysTask_CreateOnMainQueue
    pop {r3, r4, r5, pc}
    nop
    _0226BEEC: .word ov12_0226BF04"
    );
    #endif
}

void ov12_0226BEF0(void) {
    /* Original at 0x0226BEF0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    bl SysTask_GetData
    bl Heap_Free
    add r0, r4, #0
    bl SysTask_Destroy
    pop {r4, pc}"
    );
    #endif
}

void ov12_0226BF04(void) {
    /* Original at 0x0226BF04 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    sub sp, #8
    add r4, r1, #0
    ldr r0, [r4]
    bl BattleSystem_GetBattleInput
    mov r1, #4
    ldrsh r1, [r4, r1]
    add r5, r0, #0
    cmp r1, #4
    bhi _0226BFCE
    add r1, r1, r1
    add r1, pc
    ldrh r1, [r1, #6]
    lsl r1, r1, #0x10
    asr r1, r1, #0x10
    add pc, r1
    _0226BF26: ; jump table
    cmp r5, #0
    bne _0226BF38
    bl GF_AssertFail
    mov r0, #7
    mov r1, #5
    bl NARC_New
    add r6, r0, #0
    mov r0, #8
    mov r1, #5
    bl NARC_New
    add r7, r0, #0
    mov r0, #0
    str r0, [sp]
    str r0, [sp, #4]
    add r0, r6, #0
    add r1, r7, #0
    add r2, r5, #0
    mov r3, #0x12
    bl BattleInput_ChangeMenu
    add r0, r6, #0
    bl NARC_Delete
    add r0, r7, #0
    bl NARC_Delete
    mov r0, #4
    ldrsh r0, [r4, r0]
    add sp, #8
    add r0, r0, #1
    strh r0, [r4, #4]
    pop {r3, r4, r5, r6, r7, pc}
    bl BattleInput_CheckFeedbackDone
    cmp r0, #1
    bne _0226BFCE
    mov r0, #4
    ldrsh r0, [r4, r0]
    add sp, #8
    add r0, r0, #1
    strh r0, [r4, #4]
    pop {r3, r4, r5, r6, r7, pc}
    ldr r0, [r4]
    bl ov12_0223C080
    cmp r0, #1
    bne _0226BFCE
    add r0, r5, #0
    bl BattleInput_CheckTouch
    cmp r0, #1
    bne _0226BFCE
    ldr r0, _0226BFD4 ; =0x000005DD
    bl PlaySE
    mov r0, #4
    ldrsh r0, [r4, r0]
    add sp, #8
    add r0, r0, #1
    strh r0, [r4, #4]
    pop {r3, r4, r5, r6, r7, pc}
    mov r0, #6
    ldrsh r1, [r4, r0]
    add r1, r1, #1
    strh r1, [r4, #6]
    ldrsh r0, [r4, r0]
    cmp r0, #8
    ble _0226BFCE
    ldr r0, [r4]
    mov r1, #0
    bl ov12_0223BFFC
    mov r0, #4
    ldrsh r0, [r4, r0]
    add r0, r0, #1
    strh r0, [r4, #4]
    add sp, #8
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _0226BFD4: .word 0x000005DD"
    );
    #endif
}
