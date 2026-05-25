/* Decompiled from asm/unk_02034354.s */
#include "global.h"

void sub_02034354(void) {
    /* Original at 0x02034354 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    str r1, [sp, #4]\n    bl Save_PlayerData_GetProfile\n    str r0, [sp, #8]\n    ldr r0, _020343E0 ; =_021D4130\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _020343DA\n    mov r1, #0xea\n    mov r0, #0xf\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    ldr r1, _020343E0 ; =_021D4130\n    mov r2, #0xea\n    str r0, [r1]\n    mov r1, #0\n    lsl r2, r2, #2\n    bl MI_CpuFill8\n    mov r6, #0\n    ldr r7, _020343E0 ; =_021D4130\n    add r4, r6, #0\n    add r5, r6, #0\n    ldr r1, [r7]\n    add r0, r1, #0\n    add r0, #0x2c\n    add r2, r0, r4\n    mov r0, #0xd3\n    add r1, r1, r5\n    lsl r0, r0, #2\n    str r2, [r1, r0]\n    add r0, r6, #0\n    bl sub_020346E8\n    add r6, r6, #1\n    add r4, #0x68\n    add r5, r5, #4\n    cmp r6, #8\n    blt _0203438A\n    ldr r2, _020343E0 ; =_021D4130\n    mov r1, #0xe9\n    ldr r3, [r2]\n    mov r0, #0\n    lsl r1, r1, #2\n    strb r0, [r3, r1]\n    ldr r4, [r2]\n    add r3, r1, #1\n    strb r0, [r4, r3]\n    add r3, r1, #2\n    ldr r4, [r2]\n    sub r1, #0x58\n    strb r0, [r4, r3]\n    ldr r3, [r2]\n    ldr r0, [sp]\n    str r0, [r3, #8]\n    ldr r3, [r2]\n    ldr r0, [sp, #4]\n    str r0, [r3, #4]\n    ldr r2, [r2]\n    ldr r0, [sp, #8]\n    ldr r1, [r2, r1]\n    bl PlayerProfile_Copy\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _020343E0: .word _021D4130"
    );
    #endif
}

void sub_020343E4(void) {
    /* Original at 0x020343E4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0203441C ; =_021D4130\n    ldr r0, [r1]\n    cmp r0, #0\n    beq _02034418\n    mov r4, #0\n    mov r0, #0xd3\n    add r5, r4, #0\n    add r3, r4, #0\n    lsl r0, r0, #2\n    ldr r2, [r1]\n    add r4, r4, #1\n    add r2, r2, r5\n    add r5, r5, #4\n    str r3, [r2, r0]\n    cmp r4, #8\n    blt _020343F8\n    ldr r0, _0203441C ; =_021D4130\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02034412\n    bl Heap_Free\n    ldr r0, _0203441C ; =_021D4130\n    mov r1, #0\n    str r1, [r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _0203441C: .word _021D4130"
    );
    #endif
}

void sub_02034420(void) {
    /* Original at 0x02034420 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02034430 ; =_021D4130\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0203442C\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02034430: .word _021D4130"
    );
    #endif
}

void sub_02034434(void) {
    /* Original at 0x02034434 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    bl sub_0203769C\n    add r4, r0, #0\n    ldr r0, _0203451C ; =_021D4130\n    ldr r0, [r0]\n    ldr r0, [r0, #8]\n    bl Save_FriendGroup_Get\n    str r0, [sp]\n    ldr r0, _0203451C ; =_021D4130\n    ldr r0, [r0]\n    ldr r0, [r0, #8]\n    bl sub_0202C6F4\n    add r7, r0, #0\n    ldr r0, _0203451C ; =_021D4130\n    ldr r0, [r0]\n    ldr r0, [r0, #8]\n    bl Save_WiFiHistory_Get\n    add r6, r0, #0\n    ldr r0, _0203451C ; =_021D4130\n    ldr r1, [r0]\n    ldr r0, [r1]\n    cmp r0, #0\n    bne _02034470\n    ldr r0, [r1, #8]\n    bl Save_PlayerData_GetProfile\n    ldr r1, _0203451C ; =_021D4130\n    ldr r2, [r1]\n    lsl r1, r4, #2\n    add r2, r2, r1\n    mov r1, #0xd3\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    bl PlayerProfile_Copy\n    mov r0, #0x68\n    add r5, r4, #0\n    mul r5, r0\n    ldr r0, _0203451C ; =_021D4130\n    ldr r0, [r0]\n    add r0, #0x68\n    add r0, r0, r5\n    bl OS_GetMacAddress\n    ldr r0, [sp]\n    mov r1, #1\n    mov r2, #0\n    bl sub_0202C7E0\n    ldr r1, _0203451C ; =_021D4130\n    mov r2, #0x10\n    ldr r1, [r1]\n    add r1, #0x58\n    add r1, r1, r5\n    bl MI_CpuCopy8\n    add r0, r6, #0\n    bl WifiHistory_GetPlayerCountry\n    ldr r1, _0203451C ; =_021D4130\n    ldr r1, [r1]\n    add r1, r1, r5\n    add r1, #0x6f\n    strb r0, [r1]\n    add r0, r6, #0\n    bl WiFiHistory_GetPlayerRegion\n    ldr r2, _0203451C ; =_021D4130\n    ldr r1, [r2]\n    add r1, r1, r5\n    add r1, #0x70\n    strb r0, [r1]\n    ldr r0, [r2]\n    mov r1, #0\n    add r0, r0, r5\n    add r0, #0x71\n    strb r1, [r0]\n    add r0, r7, #0\n    bl sub_0202C08C\n    ldr r1, _0203451C ; =_021D4130\n    ldr r1, [r1]\n    add r1, #0x4c\n    add r1, r1, r5\n    bl DWC_CreateExchangeToken\n    ldr r0, _0203451C ; =_021D4130\n    mov r1, #0\n    ldr r0, [r0]\n    mov r2, #0x20\n    add r0, #0xc\n    add r0, r0, r5\n    bl MI_CpuFill8\n    ldr r0, _0203451C ; =_021D4130\n    ldr r1, [r0]\n    ldr r0, [r1, #4]\n    cmp r0, #0\n    beq _0203450A\n    add r1, #0xc\n    add r1, r1, r5\n    bl LinkBattleRuleset_Copy\n    ldr r1, _0203451C ; =_021D4130\n    mov r0, #3\n    ldr r1, [r1]\n    mov r2, #0x68\n    add r1, #0xc\n    add r1, r1, r5\n    bl sub_02037030\n    pop {r3, r4, r5, r6, r7, pc}\n    _0203451C: .word _021D4130"
    );
    #endif
}

u8 sub_02034520(void) {
    return 0x68;
}

void sub_02034524(void) {
    /* Original at 0x02034524 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02034538 ; =_021D4130\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02034534\n    mov r0, #0xe9\n    mov r1, #1\n    lsl r0, r0, #2\n    strb r1, [r2, r0]\n    bx lr\n    nop\n    _02034538: .word _021D4130"
    );
    #endif
}

void sub_0203453C(void) {
    /* Original at 0x0203453C */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _020345C8 ; =_021D4130\n    add r4, r2, #0\n    ldr r1, [r1]\n    cmp r1, #0\n    beq _020345C4\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _020345C4\n    ldr r1, _020345C8 ; =_021D4130\n    mov r2, #0x68\n    ldr r5, [r1]\n    add r1, r4, #0\n    add r1, #0x62\n    ldrb r1, [r1]\n    add r5, #0xc\n    add r0, r4, #0\n    add r3, r1, #0\n    mul r3, r2\n    add r1, r5, r3\n    bl MI_CpuCopy8\n    add r4, #0x62\n    ldr r1, _020345C8 ; =_021D4130\n    ldrb r3, [r4]\n    ldr r2, [r1]\n    ldr r0, _020345CC ; =0x000003A6\n    strb r3, [r2, r0]\n    ldr r2, [r1]\n    ldrb r1, [r2, r0]\n    sub r0, #0x5a\n    lsl r1, r1, #2\n    add r1, r2, r1\n    ldr r0, [r1, r0]\n    bl PlayerProfile_IsNameEmpty\n    cmp r0, #1\n    beq _020345C4\n    ldr r2, _020345C8 ; =_021D4130\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldr r3, [r2]\n    add r1, r0, #0\n    add r1, #0xa\n    add r4, r3, r0\n    ldrb r3, [r3, r1]\n    ldrb r1, [r4, r3]\n    cmp r1, #2\n    bhs _020345C4\n    mov r1, #1\n    strb r1, [r4, r3]\n    ldr r1, [r2]\n    add r0, #0xa\n    ldrb r4, [r1, r0]\n    bl sub_0203769C\n    cmp r4, r0\n    bne _020345C4\n    ldr r0, _020345C8 ; =_021D4130\n    mov r2, #3\n    ldr r0, [r0]\n    add r1, r0, r4\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    strb r2, [r1, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _020345C8: .word _021D4130\n    _020345CC: .word 0x000003A6"
    );
    #endif
}

void sub_020345D0(void) {
    /* Original at 0x020345D0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02034630 ; =_021D4130\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _0203462C\n    mov r3, #0x68\n    add r4, r5, #0\n    add r0, r2, #0\n    mul r4, r3\n    add r1, #0xc\n    add r1, r1, r4\n    add r2, r3, #0\n    bl MI_CpuCopy8\n    ldr r0, _02034630 ; =_021D4130\n    add r1, r5, #0\n    ldr r0, [r0]\n    add r0, #0x68\n    add r0, r0, r4\n    bl sub_020357C4\n    ldr r0, _02034630 ; =_021D4130\n    mov r2, #1\n    ldr r0, [r0]\n    add r1, r0, r5\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    strb r2, [r1, r0]\n    bl sub_0203769C\n    cmp r5, r0\n    bne _02034622\n    ldr r0, _02034630 ; =_021D4130\n    mov r2, #3\n    ldr r0, [r0]\n    add r1, r0, r5\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    strb r2, [r1, r0]\n    pop {r3, r4, r5, pc}\n    ldr r0, _02034630 ; =_021D4130\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _02034634 ; =0x000003A5\n    strb r2, [r1, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _02034630: .word _021D4130\n    _02034634: .word 0x000003A5"
    );
    #endif
}

void sub_02034638(void) {
    /* Original at 0x02034638 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, _020346CC ; =_021D4130\n    ldr r1, [r0]\n    ldr r0, _020346D0 ; =0x000003A5\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _0203464A\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_0203769C\n    cmp r0, #0\n    beq _02034656\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #5\n    bl sub_02037824\n    cmp r0, #0\n    bne _020346C8\n    mov r4, #0\n    add r5, r4, #0\n    add r7, r4, #0\n    ldr r0, _020346CC ; =_021D4130\n    ldr r2, [r0]\n    mov r0, #0xe7\n    add r1, r2, r4\n    lsl r0, r0, #2\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _020346A6\n    add r0, r2, r5\n    add r0, #0x6e\n    strb r4, [r0]\n    ldr r0, _020346CC ; =_021D4130\n    ldr r6, [r0]\n    bl PlayerProfile_sizeof\n    add r2, r0, #0\n    mov r0, #0xd3\n    add r1, r6, r7\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r6, #0x2c\n    add r1, r6, r5\n    bl MI_CpuCopy8\n    ldr r1, _020346CC ; =_021D4130\n    mov r0, #4\n    ldr r1, [r1]\n    mov r2, #0x68\n    add r1, #0xc\n    add r1, r1, r5\n    bl sub_0203753C\n    add r4, r4, #1\n    add r5, #0x68\n    add r7, r7, #4\n    cmp r4, #8\n    blt _02034666\n    mov r1, #0\n    mov r0, #5\n    add r2, r1, #0\n    bl sub_0203753C\n    ldr r0, _020346CC ; =_021D4130\n    mov r2, #0\n    ldr r1, [r0]\n    ldr r0, _020346D0 ; =0x000003A5\n    strb r2, [r1, r0]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _020346CC: .word _021D4130\n    _020346D0: .word 0x000003A5"
    );
    #endif
}

void sub_020346D4(void) {
    /* Original at 0x020346D4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020346E0 ; =_021D4130\n    ldr r1, [r0]\n    ldr r0, _020346E4 ; =0x000003A5\n    ldrb r0, [r1, r0]\n    bx lr\n    nop\n    _020346E0: .word _021D4130\n    _020346E4: .word 0x000003A5"
    );
    #endif
}

void sub_020346E8(void) {
    /* Original at 0x020346E8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02034710 ; =_021D4130\n    ldr r1, [r0]\n    lsl r0, r4, #2\n    add r1, r1, r0\n    mov r0, #0xd3\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl PlayerProfile_Init\n    ldr r0, _02034710 ; =_021D4130\n    mov r2, #0\n    ldr r0, [r0]\n    add r1, r0, r4\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    strb r2, [r1, r0]\n    pop {r4, pc}\n    nop\n    _02034710: .word _021D4130"
    );
    #endif
}

void sub_02034714(void) {
    /* Original at 0x02034714 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0203472C ; =_021D4130\n    ldr r1, [r1]\n    add r1, r1, r0\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldrb r0, [r1, r0]\n    cmp r0, #1\n    bne _02034728\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _0203472C: .word _021D4130"
    );
    #endif
}

void sub_02034730(void) {
    /* Original at 0x02034730 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0203474C ; =_021D4130\n    mov r2, #1\n    ldr r1, [r1]\n    add r1, r1, r0\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldrb r0, [r1, r0]\n    cmp r0, #2\n    beq _02034748\n    cmp r0, #1\n    beq _02034748\n    mov r2, #0\n    add r0, r2, #0\n    bx lr\n    _0203474C: .word _021D4130"
    );
    #endif
}

void sub_02034750(void) {
    /* Original at 0x02034750 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02034768 ; =_021D4130\n    ldr r1, [r1]\n    add r1, r1, r0\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldrb r0, [r1, r0]\n    cmp r0, #2\n    bne _02034764\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02034768: .word _021D4130"
    );
    #endif
}

void sub_0203476C(void) {
    /* Original at 0x0203476C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0203477C ; =_021D4130\n    mov r2, #2\n    ldr r1, [r1]\n    add r1, r1, r0\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    strb r2, [r1, r0]\n    bx lr\n    _0203477C: .word _021D4130"
    );
    #endif
}

void sub_02034780(void) {
    /* Original at 0x02034780 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0203479C ; =_021D4130\n    mov r0, #0\n    ldr r3, [r1]\n    mov r1, #0xe7\n    lsl r1, r1, #2\n    ldrb r2, [r3, r1]\n    cmp r2, #1\n    beq _0203479A\n    add r0, r0, #1\n    add r3, r3, #1\n    cmp r0, #8\n    blt _0203478A\n    mov r0, #0xff\n    bx lr\n    _0203479C: .word _021D4130"
    );
    #endif
}

void sub_020347A0(void) {
    /* Original at 0x020347A0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r1, _020347C8 ; =_021D4130\n    mov r0, #0\n    ldr r4, [r1]\n    mov r1, #0xe7\n    add r3, r0, #0\n    lsl r1, r1, #2\n    ldrb r2, [r4, r1]\n    cmp r2, #2\n    beq _020347B8\n    cmp r2, #3\n    bne _020347BA\n    add r0, r0, #1\n    add r3, r3, #1\n    add r4, r4, #1\n    cmp r3, #8\n    blt _020347AE\n    pop {r3, r4}\n    bx lr\n    nop\n    _020347C8: .word _021D4130"
    );
    #endif
}

void sub_020347CC(void) {
    /* Original at 0x020347CC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, _02034814 ; =_021D4130\n    mov r5, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02034810\n    bl sub_02037454\n    cmp r0, #0\n    bne _020347E4\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r7, #0xe7\n    ldr r6, _02034814 ; =_021D4130\n    add r4, r5, #0\n    lsl r7, r7, #2\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    bne _0203480A\n    ldr r0, [r6]\n    add r0, r0, r4\n    ldrb r0, [r0, r7]\n    cmp r0, #0\n    beq _0203480A\n    add r0, r4, #0\n    bl sub_020346E8\n    mov r5, #1\n    add r4, r4, #1\n    cmp r4, #8\n    blt _020347EC\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02034814: .word _021D4130"
    );
    #endif
}

void sub_02034818(void) {
    /* Original at 0x02034818 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02034848 ; =_021D4130\n    ldr r3, [r1]\n    cmp r3, #0\n    bne _02034824\n    mov r0, #0\n    bx lr\n    mov r1, #0xe7\n    add r2, r3, r0\n    lsl r1, r1, #2\n    ldrb r1, [r2, r1]\n    cmp r1, #1\n    beq _02034838\n    cmp r1, #2\n    beq _02034838\n    cmp r1, #3\n    bne _02034844\n    lsl r0, r0, #2\n    add r1, r3, r0\n    mov r0, #0xd3\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bx lr\n    mov r0, #0\n    bx lr\n    _02034848: .word _021D4130"
    );
    #endif
}

void sub_0203484C(void) {
    /* Original at 0x0203484C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0203486C ; =_021D4130\n    ldr r3, [r1]\n    mov r1, #0xe7\n    add r2, r3, r0\n    lsl r1, r1, #2\n    ldrb r1, [r2, r1]\n    cmp r1, #0\n    beq _02034866\n    mov r1, #0x68\n    add r3, #0x4c\n    mul r1, r0\n    add r0, r3, r1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _0203486C: .word _021D4130"
    );
    #endif
}

void sub_02034870(void) {
    /* Original at 0x02034870 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    ldr r0, _0203487C ; =_021D4130\n    ldr r3, _02034880 ; =sub_0203A378\n    ldr r0, [r0]\n    ldr r0, [r0, #8]\n    bx r3\n    _0203487C: .word _021D4130\n    _02034880: .word sub_0203A378"
    );
    #endif
}

void sub_02034884(void) {
    /* Original at 0x02034884 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020348A4 ; =_021D4130\n    ldr r3, [r1]\n    mov r1, #0xe7\n    add r2, r3, r0\n    lsl r1, r1, #2\n    ldrb r1, [r2, r1]\n    cmp r1, #0\n    beq _0203489E\n    mov r1, #0x68\n    add r3, #0x58\n    mul r1, r0\n    add r0, r3, r1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _020348A4: .word _021D4130"
    );
    #endif
}

void sub_020348A8(void) {
    /* Original at 0x020348A8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020348C8 ; =_021D4130\n    ldr r3, [r1]\n    mov r1, #0xe7\n    add r2, r3, r0\n    lsl r1, r1, #2\n    ldrb r1, [r2, r1]\n    cmp r1, #0\n    beq _020348C4\n    mov r1, #0x68\n    mul r1, r0\n    add r0, r3, r1\n    add r0, #0x6f\n    ldrb r0, [r0]\n    bx lr\n    mov r0, #0\n    bx lr\n    _020348C8: .word _021D4130"
    );
    #endif
}

void sub_020348CC(void) {
    /* Original at 0x020348CC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020348EC ; =_021D4130\n    ldr r3, [r1]\n    mov r1, #0xe7\n    add r2, r3, r0\n    lsl r1, r1, #2\n    ldrb r1, [r2, r1]\n    cmp r1, #0\n    beq _020348E8\n    mov r1, #0x68\n    mul r1, r0\n    add r0, r3, r1\n    add r0, #0x70\n    ldrb r0, [r0]\n    bx lr\n    mov r0, #0\n    bx lr\n    _020348EC: .word _021D4130"
    );
    #endif
}

void sub_020348F0(void) {
    /* Original at 0x020348F0 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r4, #0\n    add r5, r4, #0\n    add r6, r4, #0\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _0203494C\n    ldr r0, _02034958 ; =_021D4130\n    ldr r0, [r0]\n    add r1, r0, r4\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _0203494C\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _0203494C\n    ldr r0, _02034958 ; =_021D4130\n    ldr r1, _0203495C ; =0x0000039D\n    ldr r0, [r0]\n    add r2, r0, r4\n    ldrb r1, [r2, r1]\n    cmp r1, #0\n    beq _0203494C\n    add r1, r6, #0\n    add r2, r0, r5\n    add r3, r2, #0\n    add r3, #0x74\n    ldrb r0, [r2, #0xc]\n    ldrb r3, [r3]\n    cmp r0, r3\n    beq _02034944\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r1, r1, #1\n    add r2, r2, #1\n    cmp r1, #0x20\n    blt _02034934\n    add r4, r4, #1\n    add r5, #0x68\n    cmp r4, #7\n    blt _020348F8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _02034958: .word _021D4130\n    _0203495C: .word 0x0000039D"
    );
    #endif
}

void sub_02034960(void) {
    /* Original at 0x02034960 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, _02034A18 ; =_021D4130\n    add r6, r1, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02034A14\n    cmp r7, #2\n    beq _02034980\n    bl sub_0203769C\n    bl sub_020378AC\n    mov r1, #1\n    and r0, r1\n    str r0, [sp]\n    mov r4, #0\n    bl sub_02037454\n    cmp r0, #0\n    ble _02034A14\n    add r5, r4, #0\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _02034A08\n    ldr r0, _02034A18 ; =_021D4130\n    mov r1, #0xe7\n    ldr r0, [r0]\n    lsl r1, r1, #2\n    add r2, r0, r4\n    ldrb r1, [r2, r1]\n    cmp r1, #0\n    beq _02034A08\n    cmp r7, #0\n    bne _020349D2\n    add r0, r4, #0\n    bl sub_020378AC\n    mov r1, #1\n    and r1, r0\n    ldr r0, [sp]\n    cmp r0, r1\n    beq _02034A08\n    ldr r0, _02034A18 ; =_021D4130\n    mov r1, #0xdb\n    ldr r0, [r0]\n    lsl r1, r1, #2\n    add r0, r0, r5\n    ldrh r1, [r0, r1]\n    add r2, r1, r6\n    mov r1, #0xdb\n    lsl r1, r1, #2\n    strh r2, [r0, r1]\n    b _02034A08\n    cmp r7, #1\n    bne _020349F8\n    add r0, r4, #0\n    bl sub_020378AC\n    mov r1, #1\n    and r1, r0\n    ldr r0, [sp]\n    cmp r0, r1\n    beq _02034A08\n    ldr r0, _02034A18 ; =_021D4130\n    ldr r1, _02034A1C ; =0x0000036E\n    ldr r0, [r0]\n    add r0, r0, r5\n    ldrh r1, [r0, r1]\n    add r2, r1, r6\n    ldr r1, _02034A1C ; =0x0000036E\n    strh r2, [r0, r1]\n    b _02034A08\n    mov r1, #0x37\n    add r0, r0, r5\n    lsl r1, r1, #4\n    ldrh r1, [r0, r1]\n    add r2, r1, r6\n    mov r1, #0x37\n    lsl r1, r1, #4\n    strh r2, [r0, r1]\n    add r5, r5, #6\n    add r4, r4, #1\n    bl sub_02037454\n    cmp r4, r0\n    blt _0203498C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02034A18: .word _021D4130\n    _02034A1C: .word 0x0000036E"
    );
    #endif
}

void sub_02034A20(void) {
    /* Original at 0x02034A20 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    bl sub_0202C6F4\n    str r0, [sp, #4]\n    mov r4, #0\n    bl sub_02037454\n    cmp r0, #0\n    ble _02034A88\n    add r5, r4, #0\n    add r0, r4, #0\n    bl sub_0203484C\n    add r1, r0, #0\n    beq _02034A7C\n    add r0, r7, #0\n    add r2, sp, #8\n    bl sub_0203A084\n    cmp r0, #0\n    beq _02034A52\n    cmp r0, #1\n    bne _02034A7C\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    bge _02034A5C\n    bl GF_AssertFail\n    ldr r0, _02034AB8 ; =_021D4130\n    mov r2, #0xdb\n    ldr r0, [r0]\n    ldr r3, _02034ABC ; =0x0000036E\n    add r6, r0, r5\n    mov r0, #0x37\n    lsl r0, r0, #4\n    ldrh r0, [r6, r0]\n    lsl r2, r2, #2\n    str r0, [sp]\n    ldrh r2, [r6, r2]\n    ldrh r3, [r6, r3]\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    bl sub_0202C4F0\n    add r5, r5, #6\n    add r4, r4, #1\n    bl sub_02037454\n    cmp r4, r0\n    blt _02034A38\n    mov r3, #0xdb\n    mov r2, #0\n    lsl r3, r3, #2\n    ldr r6, _02034AB8 ; =_021D4130\n    add r1, r2, #0\n    add r0, r2, #0\n    add r4, r3, #2\n    add r5, r3, #4\n    ldr r7, [r6]\n    add r2, r2, #1\n    add r7, r7, r1\n    strh r0, [r7, r3]\n    ldr r7, [r6]\n    add r7, r7, r1\n    strh r0, [r7, r4]\n    ldr r7, [r6]\n    add r7, r7, r1\n    add r1, r1, #6\n    strh r0, [r7, r5]\n    cmp r2, #8\n    blt _02034A98\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02034AB8: .word _021D4130\n    _02034ABC: .word 0x0000036E"
    );
    #endif
}

void sub_02034AC0(void) {
    /* Original at 0x02034AC0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #1\n    bne _02034AD2\n    mov r0, #0\n    mov r1, #1\n    bl sub_02034960\n    b _02034AE2\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _02034AE2\n    mov r0, #1\n    add r1, r0, #0\n    bl sub_02034960\n    add r0, r4, #0\n    bl sub_02034A20\n    pop {r4, pc}"
    );
    #endif
}

void sub_02034AEC(void) {
    sub_02034960(2);
    sub_02034A20(r4);
}

void sub_02034B00(void) {
    /* Original at 0x02034B00 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02034B08 ; =_021D4130\n    ldr r1, [r1]\n    str r0, [r1]\n    bx lr\n    _02034B08: .word _021D4130"
    );
    #endif
}
