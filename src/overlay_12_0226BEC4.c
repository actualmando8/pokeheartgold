/* Decompiled from asm/overlay_12_0226BEC4.s */
#include "global.h"

void ov12_0226BEC4(void) {
    /* Original at 0x0226BEC4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #5\n    mov r1, #8\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #8\n    add r4, r0, #0\n    bl MI_CpuFill8\n    mov r2, #0xfa\n    ldr r0, _0226BEEC ; =ov12_0226BF04\n    add r1, r4, #0\n    lsl r2, r2, #2\n    str r5, [r4]\n    bl SysTask_CreateOnMainQueue\n    pop {r3, r4, r5, pc}\n    nop\n    _0226BEEC: .word ov12_0226BF04"
    );
    #endif
}

void ov12_0226BEF0(void) {
    SysTask_GetData();
    Heap_Free();
    SysTask_Destroy(r4);
}

void ov12_0226BF04(void) {
    /* Original at 0x0226BF04 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r1, #0\n    ldr r0, [r4]\n    bl BattleSystem_GetBattleInput\n    mov r1, #4\n    ldrsh r1, [r4, r1]\n    add r5, r0, #0\n    cmp r1, #4\n    bhi _0226BFCE\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0226BF26: ; jump table\n    cmp r5, #0\n    bne _0226BF38\n    bl GF_AssertFail\n    mov r0, #7\n    mov r1, #5\n    bl NARC_New\n    add r6, r0, #0\n    mov r0, #8\n    mov r1, #5\n    bl NARC_New\n    add r7, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    mov r3, #0x12\n    bl BattleInput_ChangeMenu\n    add r0, r6, #0\n    bl NARC_Delete\n    add r0, r7, #0\n    bl NARC_Delete\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    add sp, #8\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl BattleInput_CheckFeedbackDone\n    cmp r0, #1\n    bne _0226BFCE\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    add sp, #8\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4]\n    bl ov12_0223C080\n    cmp r0, #1\n    bne _0226BFCE\n    add r0, r5, #0\n    bl BattleInput_CheckTouch\n    cmp r0, #1\n    bne _0226BFCE\n    ldr r0, _0226BFD4 ; =0x000005DD\n    bl PlaySE\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    add sp, #8\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #6\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #6]\n    ldrsh r0, [r4, r0]\n    cmp r0, #8\n    ble _0226BFCE\n    ldr r0, [r4]\n    mov r1, #0\n    bl ov12_0223BFFC\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0226BFD4: .word 0x000005DD"
    );
    #endif
}
