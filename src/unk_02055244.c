/* Decompiled from asm/unk_02055244.s */
#include "global.h"

void sub_02055244(void) {
    /* Original at 0x02055244 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl TaskManager_GetFieldSystem\n    bl sub_0203DF7C\n    cmp r0, #0\n    bne _02055256\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void CallTask_LeaveOverworld(void) {
    /* Original at 0x0205525C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r4, r0, #0\n    bl sub_0203DF7C\n    cmp r0, #0\n    bne _02055274\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl sub_0203DF34\n    ldr r1, _02055288 ; =sub_02055244\n    add r0, r5, #0\n    mov r2, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, pc}\n    nop\n    _02055288: .word sub_02055244"
    );
    #endif
}

void sub_0205528C(void) {
    /* Original at 0x0205528C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl TaskManager_GetFieldSystem\n    bl sub_020505C8\n    cmp r0, #0\n    beq _0205529E\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void CallTask_RestoreOverworld(void) {
    /* Original at 0x020552A4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r4, r0, #0\n    bl sub_0203DF7C\n    cmp r0, #0\n    beq _020552BC\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl FieldSystem_LoadFieldOverlay\n    ldr r1, _020552D0 ; =sub_0205528C\n    add r0, r5, #0\n    mov r2, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, pc}\n    nop\n    _020552D0: .word sub_0205528C"
    );
    #endif
}

void sub_020552D4(void) {
    IsPaletteFadeFinished();
}

void PaletteFadeUntilFinished(void) {
    /* Original at 0x020552E8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    bl sub_0203DF7C\n    cmp r0, #0\n    bne _02055302\n    bl GF_AssertFail\n    add sp, #0xc\n    pop {r3, r4, pc}\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r1, _02055328 ; =sub_020552D4\n    add r0, r4, #0\n    mov r2, #0\n    bl TaskManager_Call\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _02055328: .word sub_020552D4"
    );
    #endif
}

void CallTask_FadeFromBlack(void) {
    /* Original at 0x0205532C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    bl sub_0203DF7C\n    cmp r0, #0\n    bne _02055346\n    bl GF_AssertFail\n    add sp, #0xc\n    pop {r3, r4, pc}\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r1, _0205536C ; =sub_020552D4\n    add r0, r4, #0\n    mov r2, #0\n    bl TaskManager_Call\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0205536C: .word sub_020552D4"
    );
    #endif
}

void sub_02055370(void) {
    /* Original at 0x02055370 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl TaskManager_GetStatePtr\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0205538A\n    cmp r0, #1\n    beq _02055398\n    cmp r0, #2\n    beq _020553A6\n    b _020553AA\n    add r0, r5, #0\n    bl PaletteFadeUntilFinished\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _020553AA\n    add r0, r5, #0\n    bl CallTask_LeaveOverworld\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _020553AA\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020553B0(void) {
    /* Original at 0x020553B0 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _020553B8 ; =TaskManager_Call\n    ldr r1, _020553BC ; =sub_02055370\n    mov r2, #0\n    bx r3\n    _020553B8: .word TaskManager_Call\n    _020553BC: .word sub_02055370"
    );
    #endif
}

void sub_020553C0(void) {
    /* Original at 0x020553C0 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl TaskManager_GetStatePtr\n    add r4, r0, #0\n    add r0, r5, #0\n    bl TaskManager_GetFieldSystem\n    ldr r1, [r4]\n    cmp r1, #0\n    beq _020553E0\n    cmp r1, #1\n    beq _020553EE\n    cmp r1, #2\n    beq _02055400\n    b _02055404\n    add r0, r5, #0\n    bl CallTask_RestoreOverworld\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02055404\n    bl FieldSystem_DrawMapNameAnimation\n    add r0, r5, #0\n    bl CallTask_FadeFromBlack\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02055404\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02055408(void) {
    /* Original at 0x02055408 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02055410 ; =TaskManager_Call\n    ldr r1, _02055414 ; =sub_020553C0\n    mov r2, #0\n    bx r3\n    _02055410: .word TaskManager_Call\n    _02055414: .word sub_020553C0"
    );
    #endif
}
