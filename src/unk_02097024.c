/* Decompiled from asm/unk_02097024.s */
#include "global.h"

void sub_02097024(void) {
    /* Original at 0x02097024 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #0x3c\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x3c\n    bl memset\n    add r2, r4, #0\n    ldmia r5!, {r0, r1}\n    add r2, #0x14\n    stmia r2!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r5]\n    add r1, r6, #0\n    str r0, [r2]\n    add r0, r4, #0\n    bl sub_02096C88\n    str r0, [r4, #0x30]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02097060(void) {
    sub_02096CF4(*((u32*)(r0 + 0x30)));
    sub_02096CC8(*((u32*)(r4 + 0x30)));
    Heap_Free(r4);
}

void sub_02097078(void) {
    /* Original at 0x02097078 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void sub_0209707C(void) {
    /* Original at 0x0209707C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xb\n    mov r1, #0x34\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x34\n    bl memset\n    str r5, [r4, #0x28]\n    ldr r0, [r5, #0xc]\n    str r0, [r4, #0x10]\n    add r0, r5, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    str r0, [r4, #0x14]\n    ldr r0, [r5, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    str r0, [r4, #0x18]\n    ldr r0, [r5, #0xc]\n    bl Save_GameStats_Get\n    str r0, [r4, #0x1c]\n    ldr r0, [r4, #0x18]\n    bl Options_GetFrame\n    str r0, [r4, #0xc]\n    str r5, [r4, #0x20]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020970C0(void) {
    /* Original at 0x020970C0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4]\n    lsl r2, r1, #2\n    ldr r1, _020970E0 ; =_02108EC0\n    ldr r1, [r1, r2]\n    blx r1\n    cmp r0, #1\n    bne _020970DC\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _020970E0: .word _02108EC0"
    );
    #endif
}

void sub_020970E4(void) {
    /* Original at 0x020970E4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #8\n    mov r1, #0xb\n    bl sub_02097024\n    str r0, [r4, #0x24]\n    mov r0, #1\n    str r0, [r4]\n    ldr r0, [r4, #0x28]\n    ldr r1, _02097104 ; =_02108EA0\n    ldr r2, [r4, #0x24]\n    bl FieldSystem_LaunchApplication\n    mov r0, #0\n    pop {r4, pc}\n    _02097104: .word _02108EA0"
    );
    #endif
}

void sub_02097108(void) {
    /* Original at 0x02097108 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x28]\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    bne _02097142\n    ldr r0, [r4, #0x24]\n    bl sub_02097078\n    cmp r0, #0\n    bne _02097126\n    mov r0, #5\n    str r0, [r4]\n    b _02097142\n    mov r0, #1\n    add r1, r0, #0\n    bl sub_020398D4\n    ldr r0, [r4, #0x28]\n    ldr r1, [r4, #4]\n    bl PartyMenu_LaunchApp_Unk5\n    str r0, [r4, #0x2c]\n    ldr r0, [r4, #0x24]\n    mov r1, #1\n    str r1, [r0]\n    mov r0, #2\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_02097148(void) {
    /* Original at 0x02097148 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x28]\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    bne _020971A4\n    ldr r0, [r5, #0x2c]\n    add r1, r0, #0\n    add r1, #0x26\n    ldrb r4, [r1]\n    bl Heap_Free\n    ldr r0, [r5, #0x2c]\n    add r0, #0x27\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0209718C\n    ldr r0, [r5, #0x28]\n    mov r1, #3\n    mov r2, #0\n    bl PokemonSummary_CreateArgs\n    str r0, [r5, #0x30]\n    str r4, [r5, #4]\n    ldr r0, [r5, #0x30]\n    strb r4, [r0, #0x14]\n    ldr r0, [r5, #0x28]\n    ldr r1, [r5, #0x30]\n    bl PokemonSummary_LearnForget_LaunchApp\n    mov r0, #3\n    str r0, [r5]\n    b _020971A4\n    ldr r0, [r5, #0x24]\n    ldr r1, _020971A8 ; =_02108EB0\n    str r4, [r0, #4]\n    ldr r0, [r5, #0x28]\n    ldr r2, [r5, #0x24]\n    bl FieldSystem_LaunchApplication\n    ldr r0, [r5, #0x24]\n    mov r1, #3\n    str r1, [r0]\n    mov r0, #4\n    str r0, [r5]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _020971A8: .word _02108EB0"
    );
    #endif
}

void sub_020971AC(void) {
    /* Original at 0x020971AC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x28]\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    bne _020971CE\n    ldr r0, [r4, #0x30]\n    bl Heap_Free\n    ldr r0, [r4, #0x28]\n    ldr r1, [r4, #4]\n    bl PartyMenu_LaunchApp_Unk5\n    str r0, [r4, #0x2c]\n    mov r0, #2\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_020971D4(void) {
    FieldSystem_ApplicationIsRunning(0, 5);
}

void sub_020971EC(void) {
    sub_02097060();
}
