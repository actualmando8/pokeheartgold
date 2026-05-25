/* Decompiled from asm/unk_02091880.s */
#include "global.h"

void sub_02091880(void) {
    /* Original at 0x02091880 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    ldr r1, _020918B8 ; =0x0000195C\n    add r6, r0, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r0, r6, #0\n    str r5, [r4]\n    bl EasyChatManager_New\n    str r0, [r4, #4]\n    mov r3, #0\n    ldr r0, _020918BC ; =0x0000189E\n    add r2, r3, #0\n    add r1, r4, r3\n    add r3, r3, #1\n    strb r2, [r1, r0]\n    cmp r3, #0xbb\n    blt _0209189E\n    add r0, r4, #0\n    bl sub_020918D4\n    add r0, r4, #0\n    bl sub_02091B44\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _020918B8: .word 0x0000195C\n    _020918BC: .word 0x0000189E"
    );
    #endif
}

void sub_020918C0(void) {
    /* Original at 0x020918C0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _020918D2\n    ldr r0, [r4, #4]\n    bl EasyChatManager_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void sub_020918D4(void) {
    /* Original at 0x020918D4 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    mov r4, #0\n    str r0, [sp]\n    add r7, r0, #0\n    str r0, [sp, #8]\n    add r0, #0x68\n    ldr r5, _02091910 ; =sECMenuSpecs\n    str r4, [sp, #4]\n    str r0, [sp, #8]\n    ldr r3, [sp, #8]\n    str r4, [r7, #0x38]\n    lsl r6, r4, #1\n    add r3, r3, r6\n    ldr r0, [sp]\n    ldr r1, [r5, #4]\n    ldr r2, [r5, #8]\n    ldr r6, [r5]\n    blx r6\n    str r0, [r7, #8]\n    add r4, r4, r0\n    ldr r0, [sp, #4]\n    add r7, r7, #4\n    add r0, r0, #1\n    add r5, #0xc\n    str r0, [sp, #4]\n    cmp r0, #0xc\n    blt _020918E8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02091910: .word sECMenuSpecs"
    );
    #endif
}

void ECMenuBuild_Pokemon(void) {
    /* Original at 0x02091914 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    ldr r0, [r0]\n    str r2, [sp, #4]\n    add r5, r1, #0\n    add r4, r3, #0\n    mov r6, #0\n    bl sub_02090D7C\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    add r7, r6, #0\n    cmp r0, #0\n    bls _0209196A\n    ldrh r1, [r5]\n    ldr r0, [sp, #8]\n    bl Pokedex_CheckMonSeenFlag\n    cmp r0, #0\n    beq _02091960\n    ldrh r3, [r5]\n    ldr r0, [sp]\n    mov r2, #7\n    lsr r1, r3, #3\n    add r1, r0, r1\n    ldr r0, _02091970 ; =0x0000189E\n    and r3, r2\n    mov r2, #1\n    ldrb r0, [r1, r0]\n    lsl r2, r3\n    orr r2, r0\n    ldr r0, _02091970 ; =0x0000189E\n    add r6, r6, #1\n    strb r2, [r1, r0]\n    ldrh r0, [r5]\n    strh r0, [r4]\n    add r4, r4, #2\n    ldr r0, [sp, #4]\n    add r7, r7, #1\n    add r5, r5, #2\n    cmp r7, r0\n    blo _02091932\n    add r0, r6, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02091970: .word 0x0000189E"
    );
    #endif
}

void ECMenuBuild_Move(void) {
    /* Original at 0x02091974 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    ldr r0, [r0]\n    add r5, r1, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    bl sub_02090D84\n    cmp r0, #0\n    beq _020919BA\n    mov r2, #0\n    cmp r7, #0\n    bls _020919B6\n    ldrh r6, [r5]\n    ldr r0, [sp]\n    mov r3, #7\n    lsr r1, r6, #3\n    add r1, r0, r1\n    ldr r0, _020919C0 ; =0x0000189E\n    and r6, r3\n    mov r3, #1\n    ldrb r0, [r1, r0]\n    lsl r3, r6\n    orr r3, r0\n    ldr r0, _020919C0 ; =0x0000189E\n    add r2, r2, #1\n    strb r3, [r1, r0]\n    ldrh r0, [r5]\n    add r5, r5, #2\n    strh r0, [r4]\n    add r4, r4, #2\n    cmp r2, r7\n    blo _0209198E\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020919C0: .word 0x0000189E"
    );
    #endif
}

void ECMenuBuild_TrendySayings(void) {
    /* Original at 0x020919C4 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    ldr r0, [r0]\n    add r5, r1, #0\n    str r2, [sp, #4]\n    add r4, r3, #0\n    bl sub_02090D80\n    str r0, [sp, #0xc]\n    ldr r0, _02091A30 ; =0x00000122 ; NARC_msg_msg_0290_bin\n    mov r1, #0\n    bl GetECWordIndexByPair ; EARTH TONES\n    str r0, [sp, #8]\n    mov r7, #0\n    ldr r0, [sp, #4]\n    add r6, r7, #0\n    cmp r0, #0\n    bls _02091A28\n    ldrh r2, [r5]\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #0xc]\n    sub r1, r2, r1\n    bl Save_EasyChat_GetTrendySayingFlag\n    cmp r0, #0\n    beq _02091A1E\n    ldrh r3, [r5]\n    ldr r0, [sp]\n    mov r2, #7\n    lsr r1, r3, #3\n    add r1, r0, r1\n    ldr r0, _02091A34 ; =0x0000189E\n    and r3, r2\n    mov r2, #1\n    ldrb r0, [r1, r0]\n    lsl r2, r3\n    orr r2, r0\n    ldr r0, _02091A34 ; =0x0000189E\n    add r6, r6, #1\n    strb r2, [r1, r0]\n    ldrh r0, [r5]\n    strh r0, [r4]\n    add r4, r4, #2\n    ldr r0, [sp, #4]\n    add r7, r7, #1\n    add r5, r5, #2\n    cmp r7, r0\n    blo _020919EC\n    add r0, r6, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02091A30: .word 0x00000122 ; NARC_msg_msg_0290_bin\n    _02091A34: .word 0x0000189E"
    );
    #endif
}

void ECMenuBuild_Greetings(void) {
    /* Original at 0x02091A38 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp]\n    ldr r0, [r0]\n    add r5, r1, #0\n    str r2, [sp, #4]\n    add r4, r3, #0\n    bl sub_02090D80\n    str r0, [sp, #0x10]\n    ldr r0, _02091AB8 ; =0x0000011F ; NARC_msg_msg_0289_bin\n    mov r1, #0\n    bl GetECWordIndexByPair ; BEAUTY\n    add r6, r0, #0\n    add r0, r6, #5\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0xc]\n    mov r7, #0\n    ldr r0, [sp, #4]\n    str r7, [sp, #8]\n    cmp r0, #0\n    bls _02091AB0\n    ldrh r1, [r5]\n    cmp r1, r6\n    blo _02091A80\n    ldr r0, [sp, #0xc]\n    cmp r1, r0\n    bhi _02091A80\n    ldr r0, [sp, #0x10]\n    sub r1, r1, r6\n    bl Save_EasyChat_GetGreetingsFlag\n    cmp r0, #0\n    beq _02091AA2\n    ldrh r3, [r5]\n    ldr r0, [sp]\n    mov r2, #7\n    lsr r1, r3, #3\n    add r1, r0, r1\n    ldr r0, _02091ABC ; =0x0000189E\n    and r3, r2\n    mov r2, #1\n    ldrb r0, [r1, r0]\n    lsl r2, r3\n    orr r2, r0\n    ldr r0, _02091ABC ; =0x0000189E\n    add r7, r7, #1\n    strb r2, [r1, r0]\n    ldrh r0, [r5]\n    strh r0, [r4]\n    add r4, r4, #2\n    ldr r0, [sp, #8]\n    add r5, r5, #2\n    add r1, r0, #1\n    ldr r0, [sp, #4]\n    str r1, [sp, #8]\n    cmp r1, r0\n    blo _02091A68\n    add r0, r7, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02091AB8: .word 0x0000011F ; NARC_msg_msg_0289_bin\n    _02091ABC: .word 0x0000189E"
    );
    #endif
}

void ECMenuBuild_Generic(void) {
    /* Original at 0x02091AC0 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0\n    mov lr, r2\n    mov ip, r0\n    mov r0, lr\n    add r4, r1, #0\n    add r7, r3, #0\n    cmp r0, #0\n    bls _02091B36\n    ldrh r2, [r4]\n    ldr r0, _02091B3C ; =0x0000FFFE\n    cmp r2, r0\n    bne _02091B0A\n    add r0, r4, #2\n    add r4, r4, #4\n    ldrh r2, [r0]\n    ldrh r0, [r4]\n    cmp r2, #0\n    strh r0, [r7]\n    beq _02091B2A\n    ldrh r5, [r4]\n    mov r3, #7\n    add r4, r4, #2\n    lsr r0, r5, #3\n    add r1, r6, r0\n    ldr r0, _02091B40 ; =0x0000189E\n    and r5, r3\n    mov r3, #1\n    ldrb r0, [r1, r0]\n    lsl r3, r5\n    orr r3, r0\n    ldr r0, _02091B40 ; =0x0000189E\n    sub r2, r2, #1\n    strb r3, [r1, r0]\n    bne _02091AEA\n    b _02091B2A\n    lsr r0, r2, #3\n    ldr r1, _02091B40 ; =0x0000189E\n    add r0, r6, r0\n    ldrb r3, [r0, r1]\n    mov r1, #7\n    mov r5, #1\n    and r1, r2\n    add r2, r5, #0\n    lsl r2, r1\n    ldr r1, _02091B40 ; =0x0000189E\n    orr r2, r3\n    strb r2, [r0, r1]\n    ldrh r0, [r4]\n    add r4, r4, #2\n    strh r0, [r7]\n    add r7, r7, #2\n    mov r0, ip\n    add r1, r0, #1\n    mov r0, lr\n    mov ip, r1\n    cmp r1, r0\n    blo _02091AD4\n    mov r0, lr\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02091B3C: .word 0x0000FFFE\n    _02091B40: .word 0x0000189E"
    );
    #endif
}

void sub_02091B44(void) {
    /* Original at 0x02091B44 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r4, #0\n    ldr r6, _02091B80 ; =_02106C9C\n    str r4, [sp]\n    add r5, r7, #0\n    ldr r0, _02091B84 ; =0x00000C84\n    mov r2, #0xcf\n    str r4, [r5, r0]\n    lsl r2, r2, #4\n    ldr r1, [r6]\n    add r0, r7, #0\n    add r2, r7, r2\n    add r3, r4, #0\n    bl sub_02091B8C\n    ldr r1, _02091B88 ; =0x00000C18\n    add r6, r6, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    add r5, r5, #4\n    add r4, r4, r0\n    ldr r0, [sp]\n    add r0, r0, #1\n    str r0, [sp]\n    cmp r0, #0x1b\n    blo _02091B50\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02091B80: .word _02106C9C\n    _02091B84: .word 0x00000C84\n    _02091B88: .word 0x00000C18"
    );
    #endif
}

void sub_02091B8C(void) {
    /* Original at 0x02091B8C */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    add r6, r0, #0\n    str r2, [sp]\n    mov r0, #0\n    mov ip, r0\n    ldrh r2, [r7]\n    ldr r0, _02091C2C ; =0x0000FFFF\n    mov lr, r3\n    cmp r2, r0\n    beq _02091C28\n    ldr r0, _02091C30 ; =0x0000FFFE\n    cmp r2, r0\n    bne _02091BF4\n    add r0, r7, #2\n    ldrh r5, [r0]\n    add r7, r7, #4\n    mov r3, #0\n    cmp r5, #0\n    bls _02091BEE\n    add r4, r7, #0\n    ldrh r2, [r4]\n    mov r0, #7\n    mov r1, #1\n    and r0, r2\n    lsl r1, r0\n    lsr r0, r2, #3\n    add r2, r6, r0\n    ldr r0, _02091C34 ; =0x0000189E\n    ldrb r0, [r2, r0]\n    tst r0, r1\n    beq _02091BE6\n    lsl r0, r3, #1\n    ldrh r1, [r7, r0]\n    mov r0, lr\n    lsl r2, r0, #1\n    mov r0, lr\n    add r0, r0, #1\n    mov lr, r0\n    ldr r0, [sp]\n    strh r1, [r0, r2]\n    mov r0, ip\n    add r0, r0, #1\n    mov ip, r0\n    b _02091BEE\n    add r3, r3, #1\n    add r4, r4, #2\n    cmp r3, r5\n    blo _02091BB6\n    lsl r0, r5, #1\n    add r7, r7, r0\n    b _02091C20\n    mov r1, #1\n    mov r0, #7\n    and r0, r2\n    add r3, r1, #0\n    lsl r3, r0\n    lsr r0, r2, #3\n    add r1, r6, r0\n    ldr r0, _02091C34 ; =0x0000189E\n    ldrb r0, [r1, r0]\n    tst r0, r3\n    beq _02091C1E\n    mov r1, lr\n    add r1, r1, #1\n    mov r0, lr\n    mov lr, r1\n    ldr r1, [sp]\n    lsl r0, r0, #1\n    strh r2, [r1, r0]\n    mov r0, ip\n    add r0, r0, #1\n    mov ip, r0\n    add r7, r7, #2\n    ldrh r2, [r7]\n    ldr r0, _02091C2C ; =0x0000FFFF\n    cmp r2, r0\n    bne _02091BA2\n    mov r0, ip\n    pop {r3, r4, r5, r6, r7, pc}\n    _02091C2C: .word 0x0000FFFF\n    _02091C30: .word 0x0000FFFE\n    _02091C34: .word 0x0000189E"
    );
    #endif
}

void sub_02091C38(void) {
    /* Original at 0x02091C38 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r0, r0, r1\n    ldr r0, [r0, #8]\n    bx lr"
    );
    #endif
}

void sub_02091C40(void) {
    EasyChatManager_ReadWordIntoString();
}

void sub_02091C60(void) {
    /* Original at 0x02091C60 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r1, r0, r1\n    ldr r1, [r1, #0x38]\n    add r1, r1, r2\n    lsl r1, r1, #1\n    add r0, r0, r1\n    add r0, #0x68\n    ldrh r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_02091C74(void) {
    /* Original at 0x02091C74 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r1, r0, r1\n    ldr r0, _02091C80 ; =0x00000C18\n    ldr r0, [r1, r0]\n    bx lr\n    nop\n    _02091C80: .word 0x00000C18"
    );
    #endif
}

void sub_02091C84(void) {
    /* Original at 0x02091C84 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    add r5, r0, #0\n    lsl r3, r1, #2\n    add r6, r5, r3\n    ldr r3, _02091CA8 ; =0x00000C18\n    ldr r3, [r6, r3]\n    cmp r3, #0\n    beq _02091CA4\n    bl sub_02091CAC\n    add r1, r0, #0\n    ldr r0, [r5, #4]\n    add r2, r4, #0\n    bl EasyChatManager_ReadWordIntoString\n    pop {r4, r5, r6, pc}\n    nop\n    _02091CA8: .word 0x00000C18"
    );
    #endif
}

void sub_02091CAC(void) {
    /* Original at 0x02091CAC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    lsl r1, r1, #2\n    ldr r3, _02091CD4 ; =0x00000C18\n    add r4, r0, r1\n    ldr r1, [r4, r3]\n    cmp r1, #0\n    beq _02091CCE\n    add r1, r3, #0\n    add r1, #0x6c\n    ldr r1, [r4, r1]\n    add r3, #0xd8\n    add r1, r2, r1\n    lsl r1, r1, #1\n    add r0, r0, r1\n    ldrh r0, [r0, r3]\n    pop {r3, r4}\n    bx lr\n    ldr r0, _02091CD8 ; =0x0000FFFF\n    pop {r3, r4}\n    bx lr\n    _02091CD4: .word 0x00000C18\n    _02091CD8: .word 0x0000FFFF"
    );
    #endif
}
