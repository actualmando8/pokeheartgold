/* Decompiled from asm/overlay_01_021F3114.s */
#include "global.h"

void ov01_021F3114(void) {
    /* Original at 0x021F3114 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    bl PlayerAvatar_GetMapObject\n    bl sub_0205F504\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r4, #0\n    bl sub_0205B9DC\n    cmp r0, #1\n    bne _021F3136\n    mov r2, #3\n    b _021F3164\n    add r0, r4, #0\n    bl sub_0205B9E8\n    cmp r0, #1\n    bne _021F3144\n    mov r2, #2\n    b _021F3164\n    add r0, r4, #0\n    bl sub_0205B9F4\n    cmp r0, #1\n    bne _021F3152\n    mov r2, #0\n    b _021F3164\n    add r0, r4, #0\n    bl sub_0205BA00\n    cmp r0, #1\n    bne _021F3160\n    mov r2, #1\n    b _021F3164\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov01_021F3170\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F3170(void) {
    /* Original at 0x021F3170 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x18\n    add r6, r1, #0\n    add r7, r2, #0\n    bl ov01_021F3348\n    add r4, r0, #0\n    str r5, [r4, #0xc]\n    str r6, [r4, #0x10]\n    ldr r0, _021F3198 ; =SEQ_SE_DP_F209\n    str r7, [r4]\n    bl PlaySE\n    ldr r1, _021F319C ; =ov01_021F31CC\n    add r0, r5, #0\n    add r2, r4, #0\n    bl FieldSystem_CreateTask\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F3198: .word SEQ_SE_DP_F209\n    _021F319C: .word ov01_021F31CC"
    );
    #endif
}

void ov01_021F31A0(void) {
    /* Original at 0x021F31A0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #3\n    bhi _021F31C8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F31B0: ; jump table\n    mov r0, #2\n    bx lr\n    mov r0, #1\n    bx lr\n    mov r0, #3\n    bx lr\n    mov r0, #0\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021F31CC(void) {
    /* Original at 0x021F31CC */
    /* Requires manual decompilation - 157 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    bl PlayerAvatar_GetMapObject\n    add r6, r0, #0\n    bl sub_0205F504\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _021F31F4\n    cmp r0, #1\n    beq _021F3206\n    cmp r0, #2\n    beq _021F3236\n    b _021F3340\n    mov r1, #1\n    add r0, r6, #0\n    lsl r1, r1, #8\n    bl MapObject_SetFlagsBits\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    b _021F3340\n    ldr r0, [r4, #0x10]\n    bl sub_0205DFC8\n    cmp r0, #0\n    bne _021F3212\n    b _021F3340\n    ldr r0, [r4]\n    mov r1, #0xc\n    bl sub_0206234C\n    add r1, r0, #0\n    ldr r0, [r4, #0x10]\n    bl sub_0205DFD4\n    ldr r0, [r4, #0x10]\n    ldr r1, [r4]\n    bl PlayerAvatar_SetFacingDirection\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    mov r0, #7\n    str r0, [r4, #4]\n    b _021F3340\n    ldr r0, [r4, #4]\n    cmp r0, #2\n    beq _021F3244\n    cmp r0, #4\n    beq _021F3244\n    cmp r0, #6\n    bne _021F3254\n    ldr r0, [r4]\n    bl ov01_021F31A0\n    str r0, [r4]\n    ldr r0, [r4, #0x10]\n    ldr r1, [r4]\n    bl PlayerAvatar_SetFacingDirection\n    ldr r0, [r4, #4]\n    sub r0, r0, #1\n    str r0, [r4, #4]\n    bne _021F3340\n    add r0, r5, #0\n    bl sub_0205B9DC\n    cmp r0, #1\n    bne _021F3274\n    mov r0, #3\n    str r0, [r4]\n    ldr r0, [r4, #0xc]\n    add r1, r5, #0\n    bl ov04_02256BE4\n    b _021F3300\n    add r0, r5, #0\n    bl sub_0205B9E8\n    cmp r0, #1\n    bne _021F328C\n    mov r0, #2\n    str r0, [r4]\n    ldr r0, [r4, #0xc]\n    add r1, r5, #0\n    bl ov04_02256BE4\n    b _021F3300\n    add r0, r5, #0\n    bl sub_0205B9F4\n    cmp r0, #1\n    bne _021F32A4\n    mov r0, #0\n    str r0, [r4]\n    ldr r0, [r4, #0xc]\n    add r1, r5, #0\n    bl ov04_02256BE4\n    b _021F3300\n    add r0, r5, #0\n    bl sub_0205BA00\n    cmp r0, #1\n    bne _021F32BC\n    mov r0, #1\n    str r0, [r4]\n    ldr r0, [r4, #0xc]\n    add r1, r5, #0\n    bl ov04_02256BE4\n    b _021F3300\n    add r0, r5, #0\n    bl sub_0205BA0C\n    cmp r0, #1\n    ldr r0, [r4]\n    bne _021F32FA\n    bl ov01_021F31A0\n    str r0, [r4]\n    add r0, r6, #0\n    mov r1, #0x80\n    bl MapObject_ClearFlagsBits\n    mov r1, #1\n    add r0, r6, #0\n    lsl r1, r1, #8\n    bl MapObject_ClearFlagsBits\n    ldr r0, [r4, #0x10]\n    ldr r1, [r4]\n    bl PlayerAvatar_SetFacingDirection\n    add r0, r4, #0\n    bl ov01_021F336C\n    ldr r0, _021F3344 ; =SEQ_SE_DP_F209\n    mov r1, #0\n    bl StopSE\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    bl ov01_021F31A0\n    str r0, [r4]\n    ldr r0, [r4, #0x10]\n    ldr r2, [r4]\n    add r1, r6, #0\n    bl sub_0205DA34\n    cmp r0, #0\n    bne _021F3314\n    mov r0, #1\n    str r0, [r4, #8]\n    b _021F3340\n    add r0, r6, #0\n    mov r1, #0x80\n    bl MapObject_ClearFlagsBits\n    mov r1, #1\n    add r0, r6, #0\n    lsl r1, r1, #8\n    bl MapObject_ClearFlagsBits\n    ldr r0, [r4, #0x10]\n    ldr r1, [r4]\n    bl PlayerAvatar_SetFacingDirection\n    add r0, r4, #0\n    bl ov01_021F336C\n    ldr r0, _021F3344 ; =SEQ_SE_DP_F209\n    mov r1, #0\n    bl StopSE\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _021F3344: .word SEQ_SE_DP_F209"
    );
    #endif
}

void ov01_021F3348(void) {
    /* Original at 0x021F3348 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #4\n    add r1, r5, #0\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    bne _021F335C\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0\n    add r2, r5, #0\n    bl memset\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F336C(void) {
    Heap_FreeExplicit();
}
