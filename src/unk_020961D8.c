/* Decompiled from asm/unk_020961D8.s */
#include "global.h"

void sub_020961D8(void) {
    /* Original at 0x020961D8 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r6, r1, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    mov r0, #0x20\n    mov r1, #0x24\n    bl Heap_Alloc\n    add r4, r0, #0\n    str r5, [r4]\n    mov r0, #0x20\n    bl MessageFormat_New\n    str r0, [r4, #4]\n    mov r3, #0x20\n    str r3, [sp]\n    ldr r2, [r4]\n    add r3, #0xec\n    ldr r2, [r2, #0xc]\n    mov r0, #2\n    mov r1, #0\n    add r3, r5, r3\n    bl EasyChat_CreateArgs\n    str r0, [r4, #0x10]\n    ldr r0, [r5, #0xc]\n    bl Save_Misc_Get\n    str r0, [r4, #0x14]\n    add r0, r4, #0\n    str r6, [r4, #0x20]\n    add r0, #8\n    mov r1, #4\n    bl MailMsg_Init_WithBank\n    add r1, r4, #0\n    ldr r0, [r4, #0x14]\n    add r1, #8\n    bl SaveMisc_GetBattleGreeting\n    ldr r0, [r4, #0x10]\n    bl sub_02090D40\n    mov r0, #0\n    str r0, [r4, #0x18]\n    ldr r1, _02096244 ; =sub_02096260\n    add r0, r7, #0\n    add r2, r4, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02096244: .word sub_02096260"
    );
    #endif
}

void sub_02096248(void) {
    void *r4;
    r4 = r0 + 0;
    /* ldr r0, [r4, #0x10] */
    EasyChat_FreeArgs();
    /* ldr r0, [r4, #4] */
    MessageFormat_Delete();
    r0 = r4 + 0;
    Heap_Free((r4 + 0));
}

void sub_02096260(void) {
    /* Original at 0x02096260 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r1, [r4, #0x18]\n    cmp r1, #4\n    bhi _02096314\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0209627A: ; jump table\n    add r1, r4, #0\n    ldr r0, [r4, #0x10]\n    add r1, #8\n    bl sub_02090D20\n    ldr r0, [r4, #0x10]\n    bl sub_02090D34\n    ldr r0, [r4]\n    ldr r1, [r4, #0x10]\n    bl EasyChat_LaunchApp\n    mov r0, #1\n    str r0, [r4, #0x18]\n    b _02096314\n    ldr r0, [r4]\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    bne _02096314\n    ldr r0, [r4]\n    bl FieldSystem_LoadFieldOverlay\n    mov r0, #2\n    str r0, [r4, #0x18]\n    b _02096314\n    ldr r0, [r4]\n    bl sub_020505C8\n    cmp r0, #0\n    beq _02096314\n    mov r0, #1\n    bl ov01_021E636C\n    mov r0, #3\n    str r0, [r4, #0x18]\n    b _02096314\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _02096314\n    ldr r0, [r4, #0x10]\n    bl sub_02090D48\n    cmp r0, #0\n    beq _020962EC\n    ldr r0, [r4, #0x20]\n    mov r1, #0\n    strh r1, [r0]\n    mov r0, #4\n    str r0, [r4, #0x18]\n    b _02096314\n    ldr r0, [r4, #0x20]\n    mov r1, #1\n    strh r1, [r0]\n    add r1, r4, #0\n    ldr r0, [r4, #0x10]\n    add r1, #8\n    bl sub_02090D60\n    add r1, r4, #0\n    ldr r0, [r4, #0x14]\n    add r1, #8\n    bl SaveMisc_SetBattleGreeting\n    mov r0, #4\n    str r0, [r4, #0x18]\n    b _02096314\n    bl sub_02096248\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}
