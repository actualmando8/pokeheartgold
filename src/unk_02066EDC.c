/* Decompiled from asm/unk_02066EDC.s */
#include "global.h"

void sub_02066EDC(void) {
    /* Original at 0x02066EDC */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r0, r2, #0\n    mov r1, #0x44\n    bl Heap_AllocAtEnd\n    ldr r7, [r6, #0xc]\n    mov r1, #0\n    mov r2, #0x44\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r7, #0\n    bl Save_PlayerData_GetOptionsAddr\n    str r0, [r4, #0xc]\n    add r0, r7, #0\n    bl SaveArray_Party_Get\n    str r0, [r4]\n    add r0, r7, #0\n    bl Save_Bag_Get\n    str r0, [r4, #4]\n    add r0, r4, #0\n    mov r2, #0\n    add r0, #0x25\n    strb r2, [r0]\n    add r0, r4, #0\n    ldrb r1, [r5, #8]\n    add r0, #0x24\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x36\n    ldrb r1, [r0]\n    mov r0, #0xf\n    ldrb r3, [r5, #0xa]\n    bic r1, r0\n    mov r0, #0xf\n    and r3, r0\n    orr r3, r1\n    add r1, r4, #0\n    add r1, #0x36\n    strb r3, [r1]\n    add r1, r4, #0\n    add r1, #0x36\n    add r0, #0xfd\n    ldrb r1, [r1]\n    mov r3, #0xf0\n    add r0, r6, r0\n    bic r1, r3\n    ldrb r3, [r5, #0xb]\n    lsl r3, r3, #0x1c\n    lsr r3, r3, #0x18\n    orr r3, r1\n    add r1, r4, #0\n    add r1, #0x36\n    strb r3, [r1]\n    add r1, r4, #0\n    ldrb r3, [r5, #0xc]\n    add r1, #0x37\n    strb r3, [r1]\n    add r1, r4, #0\n    ldrb r3, [r5, #0xd]\n    add r1, #0x26\n    strb r3, [r1]\n    str r0, [r4, #0x20]\n    add r0, r5, r2\n    ldrb r1, [r0, #0xe]\n    add r0, r4, r2\n    add r0, #0x30\n    strb r1, [r0]\n    add r0, r2, #1\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    cmp r2, #6\n    blo _02066F64\n    ldr r1, _02066F8C ; =gOverlayTemplate_PartyMenu\n    add r0, r6, #0\n    add r2, r4, #0\n    bl FieldSystem_LaunchApplication\n    ldr r0, [r5, #0x14]\n    str r4, [r0]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02066F8C: .word gOverlayTemplate_PartyMenu"
    );
    #endif
}

void sub_02066F90(void) {
    /* Original at 0x02066F90 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    beq _02066FA2\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x14]\n    ldr r4, [r0]\n    add r0, r4, #0\n    add r0, #0x26\n    ldrb r0, [r0]\n    cmp r0, #6\n    beq _02066FBC\n    cmp r0, #7\n    bne _02066FC4\n    mov r0, #0\n    str r0, [r5]\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    str r0, [r5]\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r1, r5, #0\n    add r0, #0x30\n    add r1, #0xe\n    mov r2, #6\n    bl MI_CpuCopy8\n    add r0, r4, #0\n    add r0, #0x26\n    ldrb r0, [r0]\n    strb r0, [r5, #0xd]\n    add r0, r4, #0\n    bl Heap_Free\n    ldr r0, [r5, #0x14]\n    mov r1, #0\n    str r1, [r0]\n    mov r0, #2\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02066FEC(void) {
    /* Original at 0x02066FEC */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    add r6, r0, #0\n    ldr r5, [r7, #0xc]\n    add r0, r2, #0\n    mov r1, #0x3c\n    bl Heap_AllocAtEnd\n    mov r1, #0\n    mov r2, #0x3c\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r5, #0\n    bl Save_PlayerData_GetOptionsAddr\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl SaveArray_Party_Get\n    str r0, [r4]\n    add r0, r5, #0\n    bl SaveArray_IsNatDexEnabled\n    str r0, [r4, #0x1c]\n    add r0, r5, #0\n    bl sub_02088288\n    str r0, [r4, #0x2c]\n    mov r0, #1\n    strb r0, [r4, #0x11]\n    ldrb r0, [r6, #0xd]\n    strb r0, [r4, #0x14]\n    ldr r0, [r4]\n    bl Party_GetCount\n    strb r0, [r4, #0x13]\n    mov r0, #0\n    strh r0, [r4, #0x18]\n    ldrb r0, [r6, #9]\n    strb r0, [r4, #0x12]\n    add r0, r5, #0\n    bl Save_SpecialRibbons_Get\n    str r0, [r4, #0x20]\n    mov r0, #0x43\n    lsl r0, r0, #2\n    add r0, r7, r0\n    str r0, [r4, #0x30]\n    add r0, r5, #0\n    bl sub_0208828C\n    str r0, [r4, #0x34]\n    ldr r1, _02067080 ; =_020FE4B0\n    add r0, r4, #0\n    bl sub_02089D40\n    add r0, r5, #0\n    bl Save_PlayerData_GetProfile\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_0208AD34\n    ldr r1, _02067084 ; =gOverlayTemplate_PokemonSummary\n    add r0, r7, #0\n    add r2, r4, #0\n    bl FieldSystem_LaunchApplication\n    ldr r0, [r6, #0x14]\n    str r4, [r0]\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02067080: .word _020FE4B0\n    _02067084: .word gOverlayTemplate_PokemonSummary"
    );
    #endif
}

void sub_02067088(void) {
    /* Original at 0x02067088 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    beq _0206709A\n    mov r0, #3\n    pop {r4, pc}\n    ldr r0, [r4, #0x14]\n    ldr r0, [r0]\n    ldrb r1, [r0, #0x14]\n    strb r1, [r4, #0xd]\n    bl Heap_Free\n    ldr r1, [r4, #0x14]\n    mov r0, #0\n    str r0, [r1]\n    pop {r4, pc}"
    );
    #endif
}

void sub_020670B0(void) {
    /* Original at 0x020670B0 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    cmp r1, #4\n    bhi _02067112\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _020670D4: ; jump table\n    add r1, r5, #0\n    mov r2, #0xb\n    bl sub_02066EDC\n    str r0, [r4, #4]\n    b _02067112\n    add r1, r5, #0\n    bl sub_02066F90\n    str r0, [r4, #4]\n    b _02067112\n    add r1, r5, #0\n    mov r2, #0xb\n    bl sub_02066FEC\n    str r0, [r4, #4]\n    b _02067112\n    add r1, r5, #0\n    bl sub_02067088\n    str r0, [r4, #4]\n    b _02067112\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02067118(void) {
    /* Original at 0x02067118 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl TaskManager_GetFieldSystem\n    str r0, [sp]\n    mov r0, #0xb\n    mov r1, #0x18\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x18\n    bl MI_CpuFill8\n    strb r6, [r4, #8]\n    strb r7, [r4, #9]\n    add r0, sp, #8\n    ldrb r1, [r0, #0x10]\n    add r2, r4, #0\n    strb r1, [r4, #0xa]\n    ldrb r1, [r0, #0x14]\n    strb r1, [r4, #0xb]\n    ldrb r1, [r0, #0x18]\n    strb r1, [r4, #0xc]\n    ldrb r0, [r0, #0x1c]\n    ldr r1, _02067160 ; =sub_020670B0\n    strb r0, [r4, #0xd]\n    ldr r0, [sp]\n    str r5, [r4, #0x14]\n    ldr r0, [r0, #0x10]\n    bl TaskManager_Call\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02067160: .word sub_020670B0"
    );
    #endif
}

void sub_02067164(void) {
    /* Original at 0x02067164 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    ldr r0, [r5, #0xc]\n    bl sub_0203A05C\n    cmp r0, #0\n    beq _02067184\n    ldrh r1, [r4, #0x12]\n    ldrh r2, [r4, #0x14]\n    add r0, r5, #0\n    bl NintendoWifiConnection_LaunchApp\n    str r0, [r4, #8]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    str r0, [r4]\n    mov r0, #2\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0206718C(void) {
    /* Original at 0x0206718C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    beq _0206719E\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, [r4, #8]\n    ldr r0, [r0, #0x20]\n    str r0, [r4]\n    ldr r0, [r4, #8]\n    bl Heap_Free\n    mov r0, #2\n    pop {r4, pc}"
    );
    #endif
}

void sub_020671B0(void) {
    /* Original at 0x020671B0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    cmp r1, #0\n    beq _020671D2\n    cmp r1, #1\n    beq _020671DC\n    cmp r1, #2\n    beq _020671E6\n    b _020671FC\n    add r1, r5, #0\n    bl sub_02067164\n    str r0, [r4, #4]\n    b _020671FC\n    add r1, r5, #0\n    bl sub_0206718C\n    str r0, [r4, #4]\n    b _020671FC\n    ldrh r1, [r4, #0x10]\n    add r0, r5, #0\n    bl GetVarPointer\n    ldr r1, [r4]\n    strh r1, [r0]\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02067200(void) {
    /* Original at 0x02067200 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl TaskManager_GetFieldSystem\n    str r0, [sp]\n    mov r0, #0xb\n    mov r1, #0x18\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x18\n    bl MI_CpuFill8\n    strh r5, [r4, #0x12]\n    strh r7, [r4, #0x14]\n    ldr r0, [sp]\n    strh r6, [r4, #0x10]\n    ldr r0, [r0, #0x10]\n    ldr r1, _02067234 ; =sub_020671B0\n    add r2, r4, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, r6, r7, pc}\n    _02067234: .word sub_020671B0"
    );
    #endif
}

void sub_02067238(void) {
    /* Original at 0x02067238 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r5, r0, #0\n    bl sub_0203769C\n    mov r1, #1\n    sub r0, r1, r0\n    bl sub_02037C44\n    add r7, r0, #0\n    bne _0206725E\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r1, [r5, #2]\n    add r0, r6, #0\n    bl GetVarPointer\n    add r4, r0, #0\n    ldrh r0, [r5]\n    cmp r0, #0\n    beq _02067278\n    cmp r0, #1\n    beq _02067284\n    cmp r0, #2\n    beq _02067290\n    b _0206729A\n    add r0, r6, #0\n    add r1, r7, #0\n    bl sub_0204B610\n    strh r0, [r4]\n    b _0206729A\n    add r0, r6, #0\n    add r1, r7, #0\n    bl sub_0204B66C\n    strh r0, [r4]\n    b _0206729A\n    add r0, r6, #0\n    add r1, r7, #0\n    bl sub_0204B690\n    strh r0, [r4]\n    add r0, r5, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020672A4(void) {
    /* Original at 0x020672A4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r2, #0\n    bl TaskManager_GetFieldSystem\n    add r7, r0, #0\n    mov r0, #0xb\n    mov r1, #4\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #4\n    bl MI_CpuFill8\n    strh r5, [r4]\n    strh r6, [r4, #2]\n    ldr r0, [r7, #0x10]\n    ldr r1, _020672D4 ; =sub_02067238\n    add r2, r4, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020672D4: .word sub_02067238"
    );
    #endif
}

void sub_020672D8(void) {
    /* Original at 0x020672D8 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    bl Save_Frontier_GetStatic\n    mov r1, #0\n    mov r2, #0xff\n    bl FrontierSave_GetStat\n    str r0, [sp]\n    cmp r0, #0x14\n    bhs _020672F2\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl Save_FrontierData_Get\n    mov r1, #0xd\n    mov r2, #0\n    add r4, r0, #0\n    bl sub_0202D5DC\n    lsl r0, r0, #0x18\n    mov r1, #0\n    lsr r7, r0, #0x18\n    add r0, r4, #0\n    add r2, r1, #0\n    bl sub_0202D5DC\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl sub_0202D5DC\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    add r0, r4, #0\n    mov r1, #0xe\n    mov r2, #0\n    bl sub_0202D5DC\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl sub_0202D5DC\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0\n    bl sub_0202D5DC\n    cmp r7, #0\n    beq _02067350\n    cmp r6, #0\n    beq _02067350\n    cmp r5, #0\n    beq _02067350\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r7, #0\n    bne _02067362\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r2, #1\n    bl sub_0202D5DC\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    cmp r0, #0x32\n    bhs _0206736C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r6, #0\n    bne _0206737E\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    bl sub_0202D5DC\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #0x64\n    blo _02067386\n    cmp r5, #0\n    beq _0206738A\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl sub_0202D5DC\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02067398(void) {
    /* Original at 0x02067398 */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl Save_Frontier_GetStatic\n    mov r1, #0\n    mov r2, #0xff\n    bl FrontierSave_GetStat\n    str r0, [sp, #8]\n    cmp r0, #0x14\n    bhs _020673B6\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl Save_FrontierData_Get\n    mov r1, #0xd\n    mov r2, #0\n    add r7, r0, #0\n    bl sub_0202D5DC\n    lsl r0, r0, #0x18\n    mov r1, #0\n    lsr r6, r0, #0x18\n    add r0, r7, #0\n    add r2, r1, #0\n    bl sub_0202D5DC\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r7, #0\n    mov r1, #1\n    mov r2, #0\n    bl sub_0202D5DC\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    add r0, r7, #0\n    mov r1, #0xe\n    mov r2, #0\n    bl sub_0202D5DC\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    add r0, r7, #0\n    mov r1, #2\n    mov r2, #0\n    bl sub_0202D5DC\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, r7, #0\n    mov r1, #3\n    mov r2, #0\n    bl sub_0202D5DC\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    cmp r6, #0\n    beq _02067426\n    cmp r4, #0\n    beq _02067426\n    cmp r5, #0\n    beq _02067426\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    cmp r6, #0\n    bne _0206743C\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _02067436\n    add sp, #0xc\n    mov r0, #4\n    pop {r4, r5, r6, r7, pc}\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    cmp r0, #0x32\n    bhs _02067448\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    cmp r4, #0\n    bne _0206745E\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _02067458\n    add sp, #0xc\n    mov r0, #5\n    pop {r4, r5, r6, r7, pc}\n    add sp, #0xc\n    mov r0, #2\n    pop {r4, r5, r6, r7, pc}\n    cmp r0, #0x64\n    bhs _02067468\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    cmp r5, #0\n    beq _02067472\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    cmp r1, #0\n    beq _0206747C\n    add sp, #0xc\n    mov r0, #6\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #3\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02067484(void) {
    /* Original at 0x02067484 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xa0\n    ldr r0, [r0]\n    ldr r2, [r1]\n    ldrh r3, [r0, #0x24]\n    add r2, r3, r2\n    strh r2, [r0, #0x24]\n    ldrh r3, [r0, #0x28]\n    ldr r2, [r1, #4]\n    add r2, r3, r2\n    strh r2, [r0, #0x28]\n    ldrh r2, [r0, #0x26]\n    ldr r1, [r1, #8]\n    add r1, r2, r1\n    strh r1, [r0, #0x26]\n    bx lr"
    );
    #endif
}

void sub_020674A4(void) {
    /* Original at 0x020674A4 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020674AC ; =0x02E90EDD\n    mul r1, r0\n    add r0, r1, #1\n    bx lr\n    _020674AC: .word 0x02E90EDD"
    );
    #endif
}

void sub_020674B0(void) {
    /* Original at 0x020674B0 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020674B8 ; =0x5D588B65\n    mul r1, r0\n    add r0, r1, #1\n    bx lr\n    _020674B8: .word 0x5D588B65"
    );
    #endif
}

void sub_020674BC(void) {
    Save_FriendGroup_Get();
    sub_0202C7DC();
    sub_020674B0();
    Save_FrontierData_Get(r5);
    sub_0202D638(r4);
}

void sub_020674E0(void) {
    /* Original at 0x020674E0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    bl Save_FrontierData_Get\n    add r6, r0, #0\n    bl sub_0202D63C\n    bl sub_020674B0\n    add r4, r0, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl sub_0202D638\n    add r0, r4, #0\n    bl sub_020674A4\n    str r0, [sp]\n    add r0, r5, #0\n    bl sub_0202D908\n    mov r1, #0xa\n    add r2, sp, #0\n    bl sub_0202D308\n    ldr r0, [sp]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_0206751C(void) {
    /* Original at 0x0206751C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r0, #0\n    bl Save_FrontierData_Get\n    add r4, r0, #0\n    add r0, r6, #0\n    bl sub_0202D908\n    add r5, r0, #0\n    add r0, r4, #0\n    bl sub_0202D63C\n    bl sub_020674A4\n    mov r1, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r1, #0\n    bl sub_0202D284\n    add r1, r0, #0\n    lsl r1, r1, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    mov r2, #0\n    bl sub_0202D57C\n    mov r1, #0x18\n    add r5, r0, #0\n    mul r5, r1\n    mov r4, #0\n    cmp r5, #0\n    ble _0206756E\n    ldr r0, [sp]\n    bl sub_020674A4\n    add r4, r4, #1\n    str r0, [sp]\n    cmp r4, r5\n    blt _02067562\n    add r0, r6, #0\n    bl sub_0202D908\n    mov r1, #0xa\n    add r2, sp, #0\n    bl sub_0202D308\n    ldr r0, [sp]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void FieldSystem_MapIsBattleTowerMultiPartnerSelectRoom(void) {
    /* Original at 0x02067584 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x20]\n    ldr r1, [r0]\n    ldr r0, _02067598 ; =MAP_BATTLE_TOWER_PARTNER_ROOM\n    cmp r1, r0\n    bne _02067592\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _02067598: .word MAP_BATTLE_TOWER_PARTNER_ROOM"
    );
    #endif
}

void sub_0206759C(void) {
    /* Original at 0x0206759C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    str r1, [sp]\n    cmp r1, #0\n    ble _02067606\n    bl Save_TrainerCard_Get\n    bl TrainerCard_GetBadgeShininessArr\n    add r4, r0, #0\n    add r0, r5, #0\n    bl Save_PlayerData_GetProfile\n    add r7, r0, #0\n    ldr r0, [sp]\n    mov r1, #0xa\n    add r6, r0, #0\n    mov r5, #0\n    mul r6, r1\n    add r0, r7, #0\n    add r1, r5, #0\n    bl PlayerProfile_TestBadgeFlag\n    cmp r0, #0\n    beq _020675FC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl GetShininessOfBadgeI\n    add r1, r0, #0\n    cmp r1, #0\n    ble _020675E4\n    cmp r1, #0xc8\n    bge _020675E4\n    sub r1, r1, r6\n    b _020675EE\n    cmp r1, #0xc8\n    blt _020675EC\n    bl GF_AssertFail\n    mov r1, #0\n    cmp r1, #0\n    bge _020675F4\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    bl SetShininessOfBadgeI\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #8\n    blo _020675C2\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}
