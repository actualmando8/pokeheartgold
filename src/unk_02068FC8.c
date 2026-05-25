/* Decompiled from asm/unk_02068FC8.s */
#include "global.h"

void sub_02068FC8(void) {
    /* Original at 0x02068FC8 */
    /* Requires manual decompilation - 198 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xa4\n    str r0, [sp, #0x10]\n    ldr r6, [sp, #0xb8]\n    str r1, [sp, #0x14]\n    str r2, [sp, #0x18]\n    add r0, r6, #0\n    str r3, [sp, #0x1c]\n    ldr r5, [sp, #0xbc]\n    bl FieldSystem_GetSaveData\n    str r0, [sp, #0x20]\n    bl Save_PlayerData_GetProfile\n    add r7, r0, #0\n    ldr r0, [sp, #0x20]\n    bl Save_GameStats_Get\n    add r4, r0, #0\n    ldr r2, _020691A0 ; =0x0000066C\n    add r0, r5, #0\n    mov r1, #0\n    bl memset\n    ldr r0, [sp, #0x1c]\n    strb r0, [r5, #5]\n    add r0, r6, #0\n    bl sub_020691E8\n    str r0, [sp, #0x24]\n    add r0, r7, #0\n    bl PlayerProfile_GetLanguage\n    str r0, [sp]\n    str r5, [sp, #4]\n    ldr r0, [sp, #0x10]\n    ldr r2, [sp, #0x24]\n    ldr r3, [sp, #0x18]\n    mov r1, #GAME_VERSION\n    bl sub_020692A0\n    add r0, r7, #0\n    bl PlayerProfile_GetTrainerID_VisibleHalf\n    str r0, [sp, #0x28]\n    add r0, r7, #0\n    bl PlayerProfile_GetTrainerGender\n    str r0, [sp, #0x2c]\n    add r0, r7, #0\n    bl PlayerProfile_GetNamePtr\n    str r0, [sp, #0x30]\n    add r0, r7, #0\n    bl PlayerProfile_GetMoney\n    str r0, [sp, #0x34]\n    ldr r0, [r6, #0xc]\n    bl Save_Pokedex_Get\n    bl Pokedex_CountDexOwned\n    str r0, [sp, #0x38]\n    ldr r0, [r6, #0xc]\n    bl Save_Pokedex_Get\n    bl Pokedex_IsEnabled\n    str r0, [sp, #0x3c]\n    add r0, r4, #0\n    bl GameStats_GetScore\n    ldr r1, [sp, #0x38]\n    ldr r2, [sp, #0x30]\n    str r1, [sp]\n    ldr r1, [sp, #0x3c]\n    ldr r3, [sp, #0x34]\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    ldr r1, [sp, #0x2c]\n    ldr r0, [sp, #0x28]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r5, [sp, #0xc]\n    bl sub_020692C4\n    ldr r0, [sp, #0x20]\n    bl Save_PlayerData_GetIGTAddr\n    str r0, [sp, #0x40]\n    add r0, r6, #0\n    add r1, sp, #0x94\n    add r2, sp, #0x78\n    bl sub_02055624\n    add r0, r6, #0\n    add r1, sp, #0x84\n    add r2, sp, #0x78\n    bl FieldSystem_GetGameClearTime\n    ldr r0, [r6, #0xc]\n    bl Save_VarsFlags_Get\n    bl CheckGameClearFlag\n    add r1, sp, #0x78\n    str r1, [sp]\n    ldr r1, [sp, #0x14]\n    lsl r0, r0, #0x18\n    str r1, [sp, #4]\n    ldr r1, [sp, #0x40]\n    str r5, [sp, #8]\n    lsr r0, r0, #0x18\n    add r2, sp, #0x94\n    add r3, sp, #0x84\n    bl sub_02069308\n    ldr r0, [r6, #0xc]\n    bl Save_TrainerCard_Get\n    str r0, [sp, #0x44]\n    add r0, r4, #0\n    mov r1, #0x21\n    bl GameStats_GetCapped\n    str r0, [sp, #0x48]\n    add r0, r4, #0\n    mov r1, #0x1a\n    bl GameStats_GetCapped\n    str r0, [sp, #0x4c]\n    add r0, r4, #0\n    mov r1, #0x15\n    bl GameStats_GetCapped\n    str r0, [sp, #0x50]\n    add r0, r4, #0\n    mov r1, #0x19\n    bl GameStats_GetCapped\n    str r0, [sp, #0x54]\n    add r0, r4, #0\n    mov r1, #0x5c\n    bl GameStats_GetCapped\n    str r0, [sp, #0x58]\n    add r0, r4, #0\n    mov r1, #0x14\n    bl GameStats_GetCapped\n    ldr r1, [sp, #0x58]\n    add r1, r1, r0\n    ldr r0, [sp, #0x54]\n    add r1, r0, r1\n    ldr r0, [sp, #0x50]\n    add r1, r0, r1\n    ldr r0, [sp, #0x4c]\n    add r0, r0, r1\n    str r0, [sp, #0x5c]\n    add r0, r4, #0\n    mov r1, #0x16\n    bl GameStats_GetCapped\n    str r0, [sp, #0x60]\n    add r0, r4, #0\n    mov r1, #0x1b\n    bl GameStats_GetCapped\n    str r0, [sp, #0x64]\n    add r0, r4, #0\n    mov r1, #0x17\n    bl GameStats_GetCapped\n    str r0, [sp, #0x68]\n    add r0, r4, #0\n    mov r1, #0x1c\n    bl GameStats_GetCapped\n    str r0, [sp, #0x6c]\n    add r0, r4, #0\n    mov r1, #0x14\n    bl GameStats_GetCapped\n    str r0, [sp, #0x70]\n    add r0, r4, #0\n    mov r1, #0x19\n    bl GameStats_GetCapped\n    add r4, r0, #0\n    ldr r0, [sp, #0x44]\n    bl TrainerCard_SignatureExists\n    str r0, [sp, #0x74]\n    ldr r0, [sp, #0x44]\n    bl TrainerCard_GetSignature\n    ldr r1, [sp, #0x74]\n    ldr r2, [sp, #0x60]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, [sp, #0x48]\n    ldr r0, [sp, #0x5c]\n    ldr r3, [sp, #0x68]\n    add r0, r1, r0\n    ldr r1, [sp, #0x64]\n    str r5, [sp, #8]\n    add r1, r2, r1\n    ldr r2, [sp, #0x6c]\n    add r2, r3, r2\n    ldr r3, [sp, #0x70]\n    add r3, r3, r4\n    bl sub_020693AC\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    bl sub_0206940C\n    mov r3, #0\n    ldr r0, _020691A0 ; =0x0000066C\n    add r2, r3, #0\n    ldrb r1, [r5, r2]\n    add r2, r2, #1\n    eor r3, r1\n    cmp r2, r0\n    blo _02069186\n    ldr r0, _020691A4 ; =0x00000668\n    mov r1, #0\n    strh r3, [r5, r0]\n    add r0, r0, #2\n    strh r1, [r5, r0]\n    add sp, #0xa4\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _020691A0: .word 0x0000066C\n    _020691A4: .word 0x00000668"
    );
    #endif
}

void sub_020691A8(void) {
    /* Original at 0x020691A8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _020691C0 ; =0x0000066C\n    bl Heap_Alloc\n    ldr r2, _020691C0 ; =0x0000066C\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _020691C0: .word 0x0000066C"
    );
    #endif
}

void sub_020691C4(void) {
    /* Original at 0x020691C4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _020691DC ; =0x0000067C\n    bl Heap_Alloc\n    ldr r2, _020691DC ; =0x0000067C\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _020691DC: .word 0x0000067C"
    );
    #endif
}

void sub_020691E0(void) {
    Heap_Free();
}

void sub_020691E8(void) {
    /* Original at 0x020691E8 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    bl FieldSystem_GetSaveData\n    add r7, r0, #0\n    bl Save_GameStats_Get\n    add r0, r7, #0\n    bl Save_VarsFlags_Get\n    add r6, r0, #0\n    add r0, r7, #0\n    bl Save_Frontier_GetStatic\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r4, #0\n    bl CheckGameClearFlag\n    cmp r0, #0\n    beq _02069216\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r7, #0\n    bl Save_Pokedex_Get\n    bl Pokedex_NationalDexIsComplete\n    cmp r0, #0\n    beq _0206922A\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0xff\n    bl FrontierSave_GetStat\n    cmp r0, #0x64\n    bhs _02069270\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0xff\n    bl FrontierSave_GetStat\n    cmp r0, #0x64\n    bhs _02069270\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #0xff\n    bl FrontierSave_GetStat\n    cmp r0, #0x64\n    bhs _02069270\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0xff\n    bl FrontierSave_GetStat\n    cmp r0, #0x64\n    bhs _02069270\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0xff\n    bl FrontierSave_GetStat\n    cmp r0, #0x64\n    blo _02069276\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #0\n    mov r1, #0xf1\n    bl Save_VarsFlags_CheckFlagInArray\n    cmp r0, #0\n    beq _02069288\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    mov r1, #0x61\n    add r0, r6, #0\n    lsl r1, r1, #2\n    bl Save_VarsFlags_CheckFlagInArray\n    cmp r0, #0\n    beq _0206929C\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020692A0(void) {
    /* Original at 0x020692A0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    ldr r5, [sp, #0x14]\n    mov r6, #1\n    ldrb r4, [r5, #4]\n    bic r4, r6\n    mov r6, #1\n    and r0, r6\n    orr r0, r4\n    strb r0, [r5, #4]\n    strb r1, [r5]\n    strb r2, [r5, #3]\n    add r0, sp, #0\n    ldrb r0, [r0, #0x10]\n    strb r0, [r5, #1]\n    strb r3, [r5, #2]\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void sub_020692C4(void) {
    /* Original at 0x020692C4 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r4, [sp, #0x1c]\n    add r6, r1, #0\n    strh r0, [r4, #0x28]\n    ldrb r0, [r4, #4]\n    add r1, r2, #0\n    mov r2, #4\n    bic r0, r2\n    lsl r2, r6, #0x1f\n    lsr r2, r2, #0x1d\n    orr r0, r2\n    strb r0, [r4, #4]\n    add r0, r4, #0\n    add r0, #8\n    mov r2, #8\n    add r5, r3, #0\n    bl CopyU16StringArrayN\n    ldr r0, [sp, #0x10]\n    str r5, [r4, #0x1c]\n    str r0, [r4, #0x20]\n    ldrb r0, [r4, #4]\n    mov r1, #8\n    bic r0, r1\n    ldr r1, [sp, #0x14]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x1c\n    orr r0, r1\n    strb r0, [r4, #4]\n    ldr r0, [sp, #0x18]\n    str r0, [r4, #0x24]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02069308(void) {
    /* Original at 0x02069308 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r4, [sp, #0x28]\n    str r0, [sp]\n    str r1, [sp, #4]\n    add r0, r1, #0\n    add r5, r2, #0\n    add r6, r3, #0\n    ldr r7, [sp, #0x20]\n    bl GetIGTHours\n    strh r0, [r4, #0x2a]\n    ldr r0, [sp, #4]\n    bl GetIGTMinutes\n    add r1, r4, #0\n    add r1, #0x2e\n    strb r0, [r1]\n    add r0, r4, #0\n    ldr r1, [r5]\n    add r0, #0x2f\n    strb r1, [r0]\n    add r0, r4, #0\n    ldr r1, [r5, #4]\n    add r0, #0x30\n    strb r1, [r0]\n    add r0, r4, #0\n    ldr r1, [r5, #8]\n    add r0, #0x31\n    strb r1, [r0]\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _0206936A\n    add r0, r4, #0\n    ldr r1, [r6]\n    add r0, #0x32\n    strb r1, [r0]\n    add r0, r4, #0\n    ldr r1, [r6, #4]\n    add r0, #0x33\n    strb r1, [r0]\n    add r0, r4, #0\n    ldr r1, [r6, #8]\n    add r0, #0x34\n    strb r1, [r0]\n    ldr r0, [r7]\n    strh r0, [r4, #0x2c]\n    ldr r1, [r7, #4]\n    b _02069380\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x32\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x33\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x34\n    strb r1, [r0]\n    strh r1, [r4, #0x2c]\n    add r0, r4, #0\n    add r0, #0x35\n    strb r1, [r0]\n    ldrb r2, [r4, #4]\n    mov r0, #2\n    bic r2, r0\n    add r0, sp, #0x10\n    ldrb r0, [r0, #0x14]\n    lsl r1, r0, #0x1f\n    lsr r1, r1, #0x1e\n    orr r1, r2\n    strb r1, [r4, #4]\n    cmp r0, #0\n    beq _020693A4\n    ldr r0, [sp, #4]\n    add sp, #8\n    str r0, [r4, #0x18]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [r4, #0x18]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020693AC(void) {
    /* Original at 0x020693AC */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r4, [sp, #0x18]\n    ldr r5, _02069400 ; =0x000F423F\n    str r0, [r4, #0x38]\n    cmp r0, r5\n    bls _020693BA\n    str r5, [r4, #0x38]\n    str r1, [r4, #0x3c]\n    str r2, [r4, #0x40]\n    ldr r1, [r4, #0x3c]\n    ldr r0, _02069404 ; =0x0000270F\n    cmp r1, r0\n    bls _020693C8\n    str r0, [r4, #0x3c]\n    ldr r1, [r4, #0x40]\n    ldr r0, _02069404 ; =0x0000270F\n    cmp r1, r0\n    bls _020693D2\n    str r0, [r4, #0x40]\n    ldr r0, _02069408 ; =0x0001869F\n    str r3, [r4, #0x44]\n    cmp r3, r0\n    bls _020693DC\n    str r0, [r4, #0x44]\n    ldrb r1, [r4, #4]\n    mov r0, #0x10\n    mov r2, #6\n    bic r1, r0\n    add r0, sp, #0\n    ldrb r0, [r0, #0x10]\n    lsl r2, r2, #8\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1b\n    orr r0, r1\n    strb r0, [r4, #4]\n    add r4, #0x68\n    ldr r0, [sp, #0x14]\n    add r1, r4, #0\n    bl MI_CpuCopy8\n    pop {r3, r4, r5, pc}\n    nop\n    _02069400: .word 0x000F423F\n    _02069404: .word 0x0000270F\n    _02069408: .word 0x0001869F"
    );
    #endif
}

void sub_0206940C(void) {
    /* Original at 0x0206940C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, [r1, #0xc]\n    add r6, r2, #0\n    bl Save_TrainerCard_Get\n    bl TrainerCard_GetBadgeShininessArr\n    add r1, r6, #0\n    mov r2, #0\n    add r1, #0x48\n    mov r3, #1\n    mov r5, #1\n    lsl r0, r2, #2\n    ldr r4, [r1, r0]\n    bic r4, r3\n    str r4, [r1, r0]\n    ldr r4, [r1, r0]\n    and r4, r5\n    str r4, [r1, r0]\n    add r0, r2, #1\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    cmp r2, #8\n    blo _02069426\n    mov r4, #1\n    mov r5, #0\n    add r0, r7, #0\n    add r1, r5, #0\n    bl PlayerProfile_TestBadgeFlag\n    cmp r0, #0\n    beq _02069454\n    ldrh r0, [r6, #6]\n    orr r0, r4\n    strh r0, [r6, #6]\n    lsl r0, r4, #0x11\n    lsr r4, r0, #0x10\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #0x10\n    blo _02069442\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02069464(void) {
    /* Original at 0x02069464 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _02069490 ; =0x00000684\n    add r5, r0, #0\n    mov r0, #0xb\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [r4]\n    add r0, r5, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    bl sub_0205ABD8\n    str r0, [r4, #4]\n    ldr r0, [r5, #0x10]\n    ldr r1, _02069494 ; =sub_02069498\n    add r2, r4, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, pc}\n    nop\n    _02069490: .word 0x00000684\n    _02069494: .word sub_02069498"
    );
    #endif
}

void sub_02069498(void) {
    /* Original at 0x02069498 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r4, r0, #0\n    add r0, r5, #0\n    bl TaskManager_GetEnvironment\n    add r5, r0, #0\n    ldr r0, [r5]\n    cmp r0, #0xa\n    bgt _020694C2\n    bge _020694E4\n    cmp r0, #1\n    bgt _0206951C\n    cmp r0, #0\n    blt _0206951C\n    beq _020694C8\n    cmp r0, #1\n    beq _020694D4\n    b _0206951C\n    cmp r0, #0xb\n    beq _02069500\n    b _0206951C\n    add r4, #0x80\n    ldr r0, [r4]\n    bl sub_0205AC70\n    mov r0, #1\n    str r0, [r5]\n    ldr r1, [r5, #4]\n    ldr r0, _02069520 ; =0x0000066A\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    beq _0206951C\n    mov r0, #0xa\n    str r0, [r5]\n    b _0206951C\n    add r1, r5, #0\n    ldr r0, [r5, #4]\n    ldr r2, _02069524 ; =0x0000066C\n    add r1, #8\n    bl MI_CpuCopy8\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #8\n    bl TrainerCard_LaunchApp\n    mov r0, #0xb\n    str r0, [r5]\n    b _0206951C\n    add r0, r4, #0\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    bne _0206951C\n    add r4, #0x80\n    ldr r0, [r4]\n    bl sub_0205AC4C\n    add r0, r5, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _02069520: .word 0x0000066A\n    _02069524: .word 0x0000066C"
    );
    #endif
}
