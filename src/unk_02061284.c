/* Decompiled from asm/unk_02061284.s */
#include "global.h"

void sub_02061284(void) {
    /* Original at 0x02061284 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    mov r1, #8\n    add r5, r0, #0\n    bl sub_0205F370\n    add r4, r0, #0\n    mov r1, #0\n    ldr r0, _020612B0 ; =_020FD7B8\n    mvn r1, r1\n    bl sub_02061E20\n    strh r0, [r4, #2]\n    add r0, r5, #0\n    mov r1, #0\n    str r6, [r4, #4]\n    bl sub_0205F328\n    add r0, r5, #0\n    bl MapObject_ClearSingleMovement\n    pop {r4, r5, r6, pc}\n    _020612B0: .word _020FD7B8"
    );
    #endif
}

void sub_020612B4(void) {
    sub_02061284();
}

void sub_020612C0(void) {
    sub_02061284();
}

void sub_020612CC(void) {
    sub_02061284();
}

void sub_020612D8(void) {
    sub_02061284();
}

void sub_020612E4(void) {
    sub_02061284();
}

void sub_020612F0(void) {
    sub_02061284();
}

void sub_020612FC(void) {
    sub_02061284();
}

void sub_02061308(void) {
    sub_02061284();
}

void sub_02061314(void) {
    sub_02061284();
}

void sub_02061320(void) {
    sub_02061284();
}

void sub_0206132C(void) {
    sub_02061284();
}

void sub_02061338(void) {
    /* Original at 0x02061338 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F394\n    add r4, r0, #0\n    mov r2, #0\n    ldr r1, [r4, #4]\n    add r0, r5, #0\n    mvn r2, r2\n    bl sub_02061F5C\n    mov r2, #0\n    add r1, r0, #0\n    mvn r2, r2\n    cmp r1, r2\n    beq _02061360\n    add r0, r5, #0\n    bl MapObject_SetFacingDirection\n    b _02061390\n    ldrh r0, [r4]\n    cmp r0, #0\n    bne _02061390\n    mov r0, #2\n    ldrsh r1, [r4, r0]\n    sub r1, r1, #1\n    strh r1, [r4, #2]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bgt _02061390\n    ldr r0, _02061398 ; =_020FD7B8\n    add r1, r2, #0\n    bl sub_02061E20\n    strh r0, [r4, #2]\n    mov r1, #0\n    ldr r0, [r4, #4]\n    mvn r1, r1\n    bl sub_02061E44\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_SetFacingDirection\n    add r0, r5, #0\n    bl sub_02060F78\n    pop {r3, r4, r5, pc}\n    _02061398: .word _020FD7B8"
    );
    #endif
}

void sub_0206139C(void) {
    /* Original at 0x0206139C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_020613A0(void) {
    sub_020613D0();
}

void sub_020613B0(void) {
    sub_020613D0();
}

void sub_020613C0(void) {
    sub_020613D0();
}

void sub_020613D0(void) {
    /* Original at 0x020613D0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r7, r3, #0\n    mov r1, #0x10\n    add r5, r0, #0\n    add r6, r2, #0\n    bl sub_0205F370\n    str r7, [r0, #4]\n    str r4, [r0, #8]\n    str r6, [r0, #0xc]\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r5, #0\n    bl MapObject_ClearSingleMovement\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020613F8(void) {
    /* Original at 0x020613F8 */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl sub_0205F394\n    add r4, r0, #0\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    cmp r0, #4\n    bhi _020614EE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02061416: ; jump table\n    add r0, r5, #0\n    bl MapObject_ClearSingleMovement\n    add r0, r5, #0\n    bl MapObject_ClearFlag3\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    mov r1, #0\n    bl sub_0206234C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_ForceSetHeldMovement\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4]\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    bl sub_02062428\n    cmp r0, #0\n    beq _020614EE\n    mov r1, #0\n    ldr r0, _020614F0 ; =_020FD7B8\n    mvn r1, r1\n    bl sub_02061E20\n    strh r0, [r4, #2]\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4]\n    mov r0, #2\n    ldrsh r1, [r4, r0]\n    sub r1, r1, #1\n    strh r1, [r4, #2]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bne _020614EE\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4]\n    mov r1, #0\n    ldr r0, [r4, #0xc]\n    mvn r1, r1\n    bl sub_02061E44\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl MapObject_SetOrQueueFacing\n    ldr r0, [r4, #4]\n    cmp r0, #1\n    bne _020614AA\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_020615F0\n    cmp r0, #0\n    bne _020614AA\n    mov r0, #0\n    strh r0, [r4]\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02060BB8\n    cmp r0, #0\n    beq _020614BC\n    mov r0, #0\n    strh r0, [r4]\n    pop {r4, r5, r6, pc}\n    ldr r1, [r4, #8]\n    add r0, r6, #0\n    bl sub_0206234C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_ForceSetHeldMovement\n    add r0, r5, #0\n    bl MapObject_SetSingleMovement\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4]\n    add r0, r5, #0\n    bl sub_02062428\n    cmp r0, #0\n    beq _020614EE\n    add r0, r5, #0\n    bl MapObject_ClearSingleMovement\n    mov r0, #0\n    strh r0, [r4]\n    pop {r4, r5, r6, pc}\n    _020614F0: .word _020FD7B8"
    );
    #endif
}

void sub_020614F4(void) {
    /* Original at 0x020614F4 */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    add r4, r1, #0\n    bl MapObject_GetInitialX\n    add r6, r0, #0\n    ldr r0, [sp]\n    bl MapObject_GetInitialZ\n    add r5, r0, #0\n    ldr r0, [sp]\n    bl MapObject_GetXRange\n    add r7, r0, #0\n    ldr r0, [sp]\n    bl MapObject_GetYRange\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    bl MapObject_GetMovement\n    cmp r0, #0xd\n    bhi _020615E8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02061530: ; jump table\n    sub r0, r6, r7\n    str r0, [r4]\n    ldr r0, [sp, #4]\n    str r6, [r4, #8]\n    sub r0, r5, r0\n    str r0, [r4, #4]\n    add sp, #8\n    str r5, [r4, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}\n    str r6, [r4]\n    add r0, r6, r7\n    str r0, [r4, #8]\n    ldr r0, [sp, #4]\n    add sp, #8\n    sub r0, r5, r0\n    str r0, [r4, #4]\n    str r5, [r4, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, r6, r7\n    str r0, [r4]\n    ldr r0, [sp, #4]\n    str r6, [r4, #8]\n    str r5, [r4, #4]\n    add r0, r5, r0\n    add sp, #8\n    str r0, [r4, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}\n    str r6, [r4]\n    add r0, r6, r7\n    str r0, [r4, #8]\n    ldr r0, [sp, #4]\n    str r5, [r4, #4]\n    add r0, r5, r0\n    add sp, #8\n    str r0, [r4, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, r6, r7\n    str r0, [r4]\n    ldr r0, [sp, #4]\n    str r6, [r4, #8]\n    sub r0, r5, r0\n    str r0, [r4, #4]\n    ldr r0, [sp, #4]\n    add sp, #8\n    add r0, r5, r0\n    str r0, [r4, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}\n    str r6, [r4]\n    add r0, r6, r7\n    str r0, [r4, #8]\n    ldr r0, [sp, #4]\n    sub r0, r5, r0\n    str r0, [r4, #4]\n    ldr r0, [sp, #4]\n    add sp, #8\n    add r0, r5, r0\n    str r0, [r4, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, r6, r7\n    str r0, [r4]\n    add r0, r6, r7\n    str r0, [r4, #8]\n    ldr r0, [sp, #4]\n    add sp, #8\n    sub r0, r5, r0\n    str r0, [r4, #4]\n    str r5, [r4, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, r6, r7\n    str r0, [r4]\n    add r0, r6, r7\n    str r0, [r4, #8]\n    ldr r0, [sp, #4]\n    str r5, [r4, #4]\n    add r0, r5, r0\n    add sp, #8\n    str r0, [r4, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020615F0(void) {
    /* Original at 0x020615F0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r1, #0\n    add r5, r0, #0\n    add r1, sp, #0\n    bl sub_020614F4\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    add r0, r6, #0\n    bl GetDeltaXByFacingDirection\n    add r4, r4, r0\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    add r5, r0, #0\n    add r0, r6, #0\n    bl GetDeltaYByFacingDirection\n    add r1, r5, r0\n    ldr r0, [sp]\n    cmp r0, r4\n    bgt _0206162A\n    ldr r0, [sp, #8]\n    cmp r0, r4\n    bge _02061630\n    add sp, #0x10\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, [sp, #4]\n    cmp r0, r1\n    bgt _0206163C\n    ldr r0, [sp, #0xc]\n    cmp r0, r1\n    bge _02061642\n    add sp, #0x10\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02061648(void) {
    /* Original at 0x02061648 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #8\n    bl sub_0205F370\n    str r4, [r0]\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r5, #0\n    bl MapObject_ClearSingleMovement\n    add r0, r5, #0\n    bl sub_02060F78\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0206166C(void) {
    /* Original at 0x0206166C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F394\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _02061680\n    cmp r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r1, [r4]\n    add r0, r5, #0\n    bl MapObject_SetFacingDirection\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02061690(void) {
    sub_02061648();
}

void sub_0206169C(void) {
    sub_02061648();
}

void sub_020616A8(void) {
    sub_02061648();
}

void sub_020616B4(void) {
    sub_02061648();
}

void sub_020616C0(void) {
    /* Original at 0x020616C0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #8\n    bl sub_0205F370\n    strb r4, [r0]\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r5, #0\n    bl MapObject_ClearSingleMovement\n    add r0, r5, #0\n    bl sub_02060F78\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020616E4(void) {
    sub_020616C0();
}

void sub_020616F0(void) {
    sub_020616C0();
}

void sub_020616FC(void) {
    /* Original at 0x020616FC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_0205F394\n    ldr r6, _0206171C ; =_020FD5D0\n    add r4, r0, #0\n    mov r7, #2\n    ldrsb r2, [r4, r7]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    ldr r2, [r6, r2]\n    blx r2\n    cmp r0, #1\n    beq _0206170A\n    pop {r3, r4, r5, r6, r7, pc}\n    _0206171C: .word _020FD5D0"
    );
    #endif
}

void sub_02061720(void) {
    /* Original at 0x02061720 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #0x26\n    add r2, r1, #0\n    sub r2, #0x27\n    add r5, r0, #0\n    bl sub_02061F5C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0206173E\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    mov r1, #0\n    bl sub_0206234C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_ForceSetHeldMovement\n    mov r0, #1\n    strb r0, [r4, #2]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02061754(void) {
    sub_02062428(0, 0, 1, 2);
}

void sub_02061770(void) {
    /* Original at 0x02061770 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r1, [r4, #4]\n    cmp r1, #0\n    beq _02061794\n    mov r1, #0x26\n    add r2, r1, #0\n    sub r2, #0x27\n    bl sub_02061F5C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _02061794\n    mov r0, #0\n    strb r0, [r4, #2]\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    cmp r0, #0x18\n    bge _020617A2\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #3\n    strb r0, [r4, #2]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void sub_020617AC(void) {
    /* Original at 0x020617AC */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    ldr r3, _0206183C ; =_020FD754\n    add r2, sp, #0x14\n    add r7, r0, #0\n    add r6, r1, #0\n    ldmia r3!, {r0, r1}\n    add r5, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    ldr r4, _02061840 ; =_020FD768\n    str r0, [r2]\n    add r3, sp, #0\n    ldmia r4!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r3]\n    mov r0, #0\n    ldrsb r0, [r6, r0]\n    cmp r0, #2\n    beq _020617E2\n    add r5, r2, #0\n    add r0, r7, #0\n    bl MapObject_GetFacingDirection\n    mov r4, #0\n    ldr r2, [r5]\n    sub r1, r4, #1\n    cmp r2, r1\n    beq _02061806\n    add r1, r5, #0\n    sub r2, r4, #1\n    ldr r3, [r1]\n    cmp r0, r3\n    beq _02061806\n    add r1, r1, #4\n    ldr r3, [r1]\n    add r4, r4, #1\n    cmp r3, r2\n    bne _020617F6\n    lsl r0, r4, #2\n    ldr r1, [r5, r0]\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _02061816\n    bl GF_AssertFail\n    add r4, r4, #1\n    lsl r0, r4, #2\n    ldr r1, [r5, r0]\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _02061826\n    mov r4, #0\n    lsl r1, r4, #2\n    ldr r1, [r5, r1]\n    add r0, r7, #0\n    bl MapObject_SetFacingDirection\n    mov r0, #0\n    strb r0, [r6, #2]\n    mov r0, #1\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0206183C: .word _020FD754\n    _02061840: .word _020FD768"
    );
    #endif
}

void sub_02061844(void) {
    sub_020616C0();
}

void sub_02061850(void) {
    /* Original at 0x02061850 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_0205F394\n    ldr r6, _02061870 ; =_020FD5A0\n    add r4, r0, #0\n    mov r7, #2\n    ldrsb r2, [r4, r7]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    ldr r2, [r6, r2]\n    blx r2\n    cmp r0, #1\n    beq _0206185E\n    pop {r3, r4, r5, r6, r7, pc}\n    _02061870: .word _020FD5A0"
    );
    #endif
}

void sub_02061874(void) {
    /* Original at 0x02061874 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl MapObject_GetFacingDirection\n    mov r1, #0\n    bl sub_0206234C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_ForceSetHeldMovement\n    mov r0, #1\n    strb r0, [r4, #2]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02061894(void) {
    sub_02062428(0, 0, 1, 2);
}

void sub_020618B0(void) {
    /* Original at 0x020618B0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r1, #4]\n    add r0, r0, #1\n    str r0, [r1, #4]\n    cmp r0, #0x18\n    bge _020618BE\n    mov r0, #0\n    bx lr\n    mov r0, #3\n    strb r0, [r1, #2]\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void sub_020618C8(void) {
    /* Original at 0x020618C8 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    ldr r3, _02061974 ; =_020FD77C\n    add r2, sp, #0x14\n    add r7, r0, #0\n    add r6, r1, #0\n    ldmia r3!, {r0, r1}\n    add r5, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    ldr r3, _02061978 ; =_020FD7A4\n    str r0, [r2]\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    add r4, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    mov r0, #0\n    ldrsb r0, [r6, r0]\n    cmp r0, #2\n    beq _020618FE\n    add r5, r4, #0\n    add r0, r7, #0\n    bl MapObject_GetFacingDirection\n    mov r4, #0\n    ldr r2, [r5]\n    sub r1, r4, #1\n    cmp r2, r1\n    beq _02061922\n    add r1, r5, #0\n    sub r2, r4, #1\n    ldr r3, [r1]\n    cmp r0, r3\n    beq _02061922\n    add r1, r1, #4\n    ldr r3, [r1]\n    add r4, r4, #1\n    cmp r3, r2\n    bne _02061912\n    lsl r0, r4, #2\n    ldr r1, [r5, r0]\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _02061932\n    bl GF_AssertFail\n    add r4, r4, #1\n    lsl r0, r4, #2\n    ldr r1, [r5, r0]\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _02061942\n    mov r4, #0\n    lsl r1, r4, #2\n    ldr r1, [r5, r1]\n    add r0, r7, #0\n    bl MapObject_SetFacingDirection\n    add r0, r7, #0\n    bl MapObject_GetFacingDirection\n    add r4, r0, #0\n    add r0, r7, #0\n    bl MapObject_GetInitialFacingDirection\n    cmp r4, r0\n    bne _02061968\n    mov r0, #0\n    ldrsb r0, [r6, r0]\n    bl sub_020611F4\n    strb r0, [r6]\n    mov r0, #0\n    strb r0, [r6, #2]\n    mov r0, #1\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02061974: .word _020FD77C\n    _02061978: .word _020FD7A4"
    );
    #endif
}

void sub_0206197C(void) {
    /* Original at 0x0206197C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r1, #8\n    bl sub_0205F370\n    add r4, r0, #0\n    add r0, r5, #0\n    bl sub_02062050\n    cmp r0, #1\n    bne _0206199A\n    add r0, r5, #0\n    add r1, r4, #4\n    bl sub_02062064\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0206199C(void) {
    /* Original at 0x0206199C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_0205F394\n    ldr r6, _020619BC ; =_020FD548\n    add r4, r0, #0\n    mov r7, #0\n    ldrsh r2, [r4, r7]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    ldr r2, [r6, r2]\n    blx r2\n    cmp r0, #1\n    beq _020619AA\n    pop {r3, r4, r5, r6, r7, pc}\n    _020619BC: .word _020FD548"
    );
    #endif
}

void sub_020619C0(void) {
    /* Original at 0x020619C0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl MapObject_GetInitialFacingDirection\n    mov r1, #2\n    ldrsh r1, [r4, r1]\n    add r6, r0, #0\n    cmp r1, #1\n    bne _020619DA\n    bl sub_020611F4\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl MapObject_SetNextFacingDirection\n    add r0, r5, #0\n    bl sub_02062050\n    cmp r0, #0\n    bne _020619F4\n    add r0, r5, #0\n    add r1, r6, #0\n    bl MapObject_SetFacingDirection\n    mov r0, #1\n    strh r0, [r4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020619FC(void) {
    /* Original at 0x020619FC */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    mov r1, #2\n    ldrsh r1, [r6, r1]\n    add r5, r0, #0\n    cmp r1, #0\n    beq _02061A5A\n    bl MapObject_GetInitialX\n    add r7, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetInitialZ\n    str r0, [sp]\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    cmp r7, r4\n    bne _02061A5A\n    ldr r1, [sp]\n    cmp r1, r0\n    bne _02061A5A\n    add r0, r5, #0\n    bl MapObject_GetNextFacingDirection\n    bl sub_020611F4\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl MapObject_SetNextFacingDirection\n    add r0, r5, #0\n    bl sub_02062050\n    cmp r0, #0\n    bne _02061A56\n    add r0, r5, #0\n    add r1, r4, #0\n    bl MapObject_SetFacingDirection\n    mov r0, #0\n    strh r0, [r6, #2]\n    add r0, r5, #0\n    bl MapObject_GetNextFacingDirection\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060BB8\n    mov r1, #1\n    add r2, r0, #0\n    tst r2, r1\n    beq _02061A84\n    add r0, r4, #0\n    strh r1, [r6, #2]\n    bl sub_020611F4\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060BB8\n    mov r1, #0xc\n    cmp r0, #0\n    beq _02061A8C\n    mov r1, #0x20\n    add r0, r4, #0\n    bl sub_0206234C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_ForceSetHeldMovement\n    add r0, r5, #0\n    bl sub_02062050\n    cmp r0, #1\n    bne _02061AAC\n    add r0, r5, #0\n    add r1, r6, #4\n    bl sub_0206207C\n    add r0, r5, #0\n    bl MapObject_SetSingleMovement\n    mov r0, #2\n    strh r0, [r6]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02061ABC(void) {
    /* Original at 0x02061ABC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02062428\n    cmp r0, #1\n    bne _02061AE6\n    add r0, r5, #0\n    bl MapObject_ClearSingleMovement\n    add r0, r5, #0\n    bl sub_02062050\n    cmp r0, #1\n    bne _02061AE2\n    add r0, r5, #0\n    add r1, r4, #4\n    bl sub_020620F8\n    mov r0, #0\n    strh r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02061AEC(void) {
    /* Original at 0x02061AEC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    mov r1, #0xc\n    add r5, r0, #0\n    add r7, r2, #0\n    str r3, [sp]\n    bl sub_0205F370\n    add r4, r0, #0\n    strb r6, [r4, #2]\n    ldr r0, [sp]\n    strb r7, [r4, #3]\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl sub_02062050\n    cmp r0, #1\n    bne _02061B1A\n    add r4, #8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02062064\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02061B1C(void) {
    sub_02061AEC();
}

void sub_02061B2C(void) {
    sub_02061AEC();
}

void sub_02061B3C(void) {
    sub_02061AEC();
}

void sub_02061B4C(void) {
    sub_02061AEC();
}

void sub_02061B5C(void) {
    sub_02061AEC();
}

void sub_02061B6C(void) {
    sub_02061AEC();
}

void sub_02061B7C(void) {
    sub_02061AEC();
}

void sub_02061B8C(void) {
    sub_02061AEC();
}

void sub_02061B9C(void) {
    sub_02061AEC();
}

void sub_02061BAC(void) {
    sub_02061AEC();
}

void sub_02061BBC(void) {
    sub_02061AEC();
}

void sub_02061BCC(void) {
    sub_02061AEC();
}

void sub_02061BDC(void) {
    sub_02061AEC();
}

void sub_02061BEC(void) {
    sub_02061AEC();
}

void sub_02061BFC(void) {
    sub_02061AEC();
}

void sub_02061C0C(void) {
    sub_02061AEC();
}

void sub_02061C1C(void) {
    /* Original at 0x02061C1C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl sub_0205F394\n    ldr r6, _02061C3C ; =_020FD4EC\n    add r4, r0, #0\n    ldrb r2, [r4]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    ldr r2, [r6, r2]\n    blx r2\n    cmp r0, #1\n    beq _02061C28\n    pop {r4, r5, r6, pc}\n    nop\n    _02061C3C: .word _020FD4EC"
    );
    #endif
}

void sub_02061C40(void) {
    /* Original at 0x02061C40 */
    /* Requires manual decompilation - 113 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    ldrb r2, [r4, #1]\n    ldrb r1, [r4, #2]\n    add r6, r0, #0\n    cmp r2, r1\n    bne _02061C82\n    ldrb r1, [r4, #3]\n    cmp r1, #0\n    bne _02061C6C\n    bl MapObject_GetInitialX\n    add r5, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetXCoord\n    cmp r5, r0\n    bne _02061C82\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    b _02061C82\n    bl MapObject_GetInitialZ\n    add r5, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetZCoord\n    cmp r5, r0\n    bne _02061C82\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    ldrb r0, [r4, #1]\n    cmp r0, #3\n    bne _02061CB4\n    add r0, r6, #0\n    bl MapObject_GetInitialX\n    add r7, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetInitialZ\n    str r0, [sp]\n    add r0, r6, #0\n    bl MapObject_GetXCoord\n    add r5, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetZCoord\n    cmp r7, r5\n    bne _02061CB4\n    ldr r1, [sp]\n    cmp r1, r0\n    bne _02061CB4\n    mov r0, #0\n    strb r0, [r4, #1]\n    ldr r0, [r4, #4]\n    bl sub_02061E6C\n    add r7, r0, #0\n    ldrb r0, [r4, #1]\n    lsl r0, r0, #2\n    ldr r5, [r7, r0]\n    add r0, r6, #0\n    add r1, r5, #0\n    bl MapObject_SetNextFacingDirection\n    add r0, r6, #0\n    bl sub_02062050\n    cmp r0, #0\n    bne _02061CDC\n    add r0, r6, #0\n    add r1, r5, #0\n    bl MapObject_SetFacingDirection\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_02060BB8\n    mov r1, #1\n    tst r1, r0\n    beq _02061D18\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    ldrb r0, [r4, #1]\n    lsl r0, r0, #2\n    ldr r5, [r7, r0]\n    add r0, r6, #0\n    add r1, r5, #0\n    bl MapObject_SetNextFacingDirection\n    add r0, r6, #0\n    bl sub_02062050\n    cmp r0, #0\n    bne _02061D10\n    add r0, r6, #0\n    add r1, r5, #0\n    bl MapObject_SetFacingDirection\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_02060BB8\n    mov r1, #0xc\n    cmp r0, #0\n    beq _02061D20\n    mov r1, #0x20\n    add r0, r5, #0\n    bl sub_0206234C\n    add r1, r0, #0\n    add r0, r6, #0\n    bl MapObject_ForceSetHeldMovement\n    add r0, r6, #0\n    bl sub_02062050\n    cmp r0, #1\n    bne _02061D42\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #8\n    bl sub_0206207C\n    add r0, r6, #0\n    bl MapObject_SetSingleMovement\n    mov r0, #1\n    strb r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02061D50(void) {
    /* Original at 0x02061D50 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02062428\n    cmp r0, #1\n    bne _02061D7C\n    add r0, r5, #0\n    bl MapObject_ClearSingleMovement\n    add r0, r5, #0\n    bl sub_02062050\n    cmp r0, #1\n    bne _02061D78\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #8\n    bl sub_020620F8\n    mov r0, #0\n    strb r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02061D80(void) {
    sub_02061AEC();
}

void sub_02061D90(void) {
    sub_02061AEC();
}

void sub_02061DA0(void) {
    sub_02061AEC();
}

void sub_02061DB0(void) {
    sub_02061AEC();
}

void sub_02061DC0(void) {
    sub_02061AEC();
}

void sub_02061DD0(void) {
    sub_02061AEC();
}

void sub_02061DE0(void) {
    sub_02061AEC();
}

void sub_02061DF0(void) {
    sub_02061AEC();
}

void sub_02061E00(void) {
    /* Original at 0x02061E00 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, [r0]\n    mov r4, #0\n    cmp r1, r2\n    beq _02061E14\n    add r0, r0, #4\n    ldr r2, [r0]\n    add r4, r4, #1\n    cmp r1, r2\n    bne _02061E0A\n    cmp r4, #0\n    bne _02061E1C\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_02061E20(void) {
    /* Original at 0x02061E20 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl LCRandom\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02061E00\n    add r1, r0, #0\n    add r0, r6, #0\n    bl _s32_div_f\n    lsl r0, r1, #2\n    ldr r0, [r5, r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02061E44(void) {
    /* Original at 0x02061E44 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    bl sub_02061E6C\n    add r4, r0, #0\n    bl LCRandom\n    add r6, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_02061E00\n    add r1, r0, #0\n    add r0, r6, #0\n    bl _s32_div_f\n    lsl r0, r1, #2\n    ldr r0, [r4, r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02061E6C(void) {
    GF_AssertFail(0, 0);
}

void sub_02061E90(void) {
    /* Original at 0x02061E90 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl MapObject_GetType\n    cmp r0, #1\n    beq _02061EA6\n    cmp r0, #2\n    beq _02061EA6\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    bl FieldSystem_GetPlayerAvatar\n    add r6, r0, #0\n    bl sub_0205DE98\n    cmp r0, #0\n    bne _02061EC0\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r4, #0\n    bl MapObject_GetMovement\n    ldr r1, _02061F58 ; =_020FD800\n    lsl r2, r4, #2\n    ldr r2, [r1, r2]\n    add r4, r4, #1\n    cmp r2, r0\n    beq _02061ED8\n    cmp r2, #0xff\n    bne _02061ECA\n    cmp r0, r2\n    beq _02061EE2\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl PlayerAvatar_GetMapObject\n    bl MapObject_GetPositionVectorYCoordUInt\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetPositionVectorYCoordUInt\n    cmp r4, r0\n    beq _02061EFE\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl PlayerAvatar_GetXCoord\n    add r4, r0, #0\n    add r0, r6, #0\n    bl PlayerAvatar_GetZCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl MapObject_GetParam\n    str r0, [sp]\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r7, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    add r2, r0, #0\n    ldr r3, [sp]\n    ldr r0, [sp]\n    add r5, r2, r3\n    sub r1, r7, r0\n    sub r3, r2, r3\n    add r0, r7, r0\n    cmp r3, r6\n    bgt _02061F52\n    cmp r5, r6\n    blt _02061F52\n    cmp r1, r4\n    bgt _02061F52\n    cmp r0, r4\n    blt _02061F52\n    add r1, r2, #0\n    add r0, r7, #0\n    add r2, r4, #0\n    add r3, r6, #0\n    bl sub_02061200\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02061F58: .word _020FD800"
    );
    #endif
}

void sub_02061F5C(void) {
    /* Original at 0x02061F5C */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp]\n    add r4, r2, #0\n    add r0, r1, #0\n    bl sub_02061E6C\n    add r1, r4, #0\n    add r5, r0, #0\n    bl sub_02061E00\n    add r4, r0, #0\n    cmp r4, #1\n    bne _02061F80\n    mov r0, #0\n    add sp, #0x14\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    bl sub_02061E90\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0206204A\n    mov r2, #0\n    add r3, r5, #0\n    ldr r1, [r3]\n    cmp r0, r1\n    beq _0206204A\n    add r2, r2, #1\n    add r3, r3, #4\n    cmp r2, r4\n    blt _02061F92\n    mov r7, #0\n    mvn r7, r7\n    ldr r0, [sp]\n    add r6, r7, #0\n    bl MapObject_GetXCoord\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    bl MapObject_GetZCoord\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    bl MapObject_GetFieldSystem\n    bl FieldSystem_GetPlayerAvatar\n    str r0, [sp, #0xc]\n    bl PlayerAvatar_GetXCoord\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    bl PlayerAvatar_GetZCoord\n    ldr r2, [sp, #8]\n    ldr r1, [sp, #0x10]\n    cmp r2, r1\n    ble _02061FDA\n    mov r7, #2\n    b _02061FE0\n    cmp r2, r1\n    bge _02061FE0\n    mov r7, #3\n    ldr r1, [sp, #4]\n    cmp r1, r0\n    ble _02061FEA\n    mov r6, #0\n    b _02061FF0\n    cmp r1, r0\n    bge _02061FF0\n    mov r6, #1\n    mov r0, #0\n    sub r1, r0, #1\n    cmp r7, r1\n    bne _0206200E\n    ldr r1, [r5]\n    cmp r6, r1\n    bne _02062004\n    add sp, #0x14\n    add r0, r6, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r0, #1\n    add r5, r5, #4\n    cmp r0, r4\n    blt _02061FF8\n    b _02062046\n    cmp r6, r1\n    bne _02062028\n    ldr r1, [r5]\n    cmp r7, r1\n    bne _0206201E\n    add sp, #0x14\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r0, #1\n    add r5, r5, #4\n    cmp r0, r4\n    blt _02062012\n    b _02062046\n    ldr r1, [r5]\n    cmp r7, r1\n    bne _02062034\n    add sp, #0x14\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    cmp r6, r1\n    bne _0206203E\n    add sp, #0x14\n    add r0, r6, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r0, #1\n    add r5, r5, #4\n    cmp r0, r4\n    blt _02062028\n    mov r0, #0\n    mvn r0, r0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02062050(void) {
    MapObject_GetType(0, 1);
}

void sub_02062064(void) {
    MapObject_GetType(0, 1);
}

void sub_0206207C(void) {
    /* Original at 0x0206207C */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    bl MapObject_GetFacingDirection\n    mov r4, #0\n    add r6, r0, #0\n    add r1, r4, #0\n    ldr r0, _020620F4 ; =_020FD7E0\n    mov r2, #1\n    b _02062096\n    add r1, r1, #4\n    add r4, r4, #1\n    cmp r4, #4\n    bge _020620A6\n    ldrsb r3, [r5, r2]\n    lsl r3, r3, #4\n    add r3, r0, r3\n    ldr r3, [r1, r3]\n    cmp r6, r3\n    bne _02062092\n    cmp r4, #4\n    blt _020620AE\n    bl GF_AssertFail\n    add r0, r4, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    strb r6, [r5]\n    mov r0, #1\n    add r1, r2, r1\n    ldrsb r0, [r5, r0]\n    lsl r1, r1, #2\n    lsl r2, r0, #4\n    ldr r0, _020620F4 ; =_020FD7E0\n    add r0, r0, r2\n    ldr r4, [r1, r0]\n    add r0, r7, #0\n    mov r1, #0x80\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    beq _020620DC\n    mov r0, #1\n    b _020620DE\n    mov r0, #0\n    strb r0, [r5, #2]\n    add r0, r7, #0\n    add r1, r4, #0\n    bl MapObject_SetFacingDirection\n    add r0, r7, #0\n    mov r1, #0x80\n    bl MapObject_SetFlagsBits\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020620F4: .word _020FD7E0"
    );
    #endif
}

void sub_020620F8(void) {
    MapObject_ClearFlagsBits();
}
