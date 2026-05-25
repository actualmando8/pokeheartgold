/* Decompiled from asm/unk_02034354.s */
#include "global.h"

void sub_02034354(void) {
    /* Original at 0x02034354 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}
    sub sp, #0xc
    str r0, [sp]
    str r1, [sp, #4]
    bl Save_PlayerData_GetProfile
    str r0, [sp, #8]
    ldr r0, _020343E0 ; =_021D4130
    ldr r0, [r0]
    cmp r0, #0
    bne _020343DA
    mov r1, #0xea
    mov r0, #0xf
    lsl r1, r1, #2
    bl Heap_Alloc
    ldr r1, _020343E0 ; =_021D4130
    mov r2, #0xea
    str r0, [r1]
    mov r1, #0
    lsl r2, r2, #2
    bl MI_CpuFill8
    mov r6, #0
    ldr r7, _020343E0 ; =_021D4130
    add r4, r6, #0
    add r5, r6, #0
    ldr r1, [r7]
    add r0, r1, #0
    add r0, #0x2c
    add r2, r0, r4
    mov r0, #0xd3
    add r1, r1, r5
    lsl r0, r0, #2
    str r2, [r1, r0]
    add r0, r6, #0
    bl sub_020346E8
    add r6, r6, #1
    add r4, #0x68
    add r5, r5, #4
    cmp r6, #8
    blt _0203438A
    ldr r2, _020343E0 ; =_021D4130
    mov r1, #0xe9
    ldr r3, [r2]
    mov r0, #0
    lsl r1, r1, #2
    strb r0, [r3, r1]
    ldr r4, [r2]
    add r3, r1, #1
    strb r0, [r4, r3]
    add r3, r1, #2
    ldr r4, [r2]
    sub r1, #0x58
    strb r0, [r4, r3]
    ldr r3, [r2]
    ldr r0, [sp]
    str r0, [r3, #8]
    ldr r3, [r2]
    ldr r0, [sp, #4]
    str r0, [r3, #4]
    ldr r2, [r2]
    ldr r0, [sp, #8]
    ldr r1, [r2, r1]
    bl PlayerProfile_Copy
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    nop
    _020343E0: .word _021D4130"
    );
    #endif
}

void sub_020343E4(void) {
    /* Original at 0x020343E4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    ldr r1, _0203441C ; =_021D4130
    ldr r0, [r1]
    cmp r0, #0
    beq _02034418
    mov r4, #0
    mov r0, #0xd3
    add r5, r4, #0
    add r3, r4, #0
    lsl r0, r0, #2
    ldr r2, [r1]
    add r4, r4, #1
    add r2, r2, r5
    add r5, r5, #4
    str r3, [r2, r0]
    cmp r4, #8
    blt _020343F8
    ldr r0, _0203441C ; =_021D4130
    ldr r0, [r0]
    cmp r0, #0
    beq _02034412
    bl Heap_Free
    ldr r0, _0203441C ; =_021D4130
    mov r1, #0
    str r1, [r0]
    pop {r3, r4, r5, pc}
    nop
    _0203441C: .word _021D4130"
    );
    #endif
}

void sub_02034420(void) {
    /* Original at 0x02034420 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02034430 ; =_021D4130
    ldr r0, [r0]
    cmp r0, #0
    beq _0203442C
    mov r0, #1
    bx lr
    mov r0, #0
    bx lr
    _02034430: .word _021D4130"
    );
    #endif
}

void sub_02034434(void) {
    /* Original at 0x02034434 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    bl sub_0203769C
    add r4, r0, #0
    ldr r0, _0203451C ; =_021D4130
    ldr r0, [r0]
    ldr r0, [r0, #8]
    bl Save_FriendGroup_Get
    str r0, [sp]
    ldr r0, _0203451C ; =_021D4130
    ldr r0, [r0]
    ldr r0, [r0, #8]
    bl sub_0202C6F4
    add r7, r0, #0
    ldr r0, _0203451C ; =_021D4130
    ldr r0, [r0]
    ldr r0, [r0, #8]
    bl Save_WiFiHistory_Get
    add r6, r0, #0
    ldr r0, _0203451C ; =_021D4130
    ldr r1, [r0]
    ldr r0, [r1]
    cmp r0, #0
    bne _02034470
    ldr r0, [r1, #8]
    bl Save_PlayerData_GetProfile
    ldr r1, _0203451C ; =_021D4130
    ldr r2, [r1]
    lsl r1, r4, #2
    add r2, r2, r1
    mov r1, #0xd3
    lsl r1, r1, #2
    ldr r1, [r2, r1]
    bl PlayerProfile_Copy
    mov r0, #0x68
    add r5, r4, #0
    mul r5, r0
    ldr r0, _0203451C ; =_021D4130
    ldr r0, [r0]
    add r0, #0x68
    add r0, r0, r5
    bl OS_GetMacAddress
    ldr r0, [sp]
    mov r1, #1
    mov r2, #0
    bl sub_0202C7E0
    ldr r1, _0203451C ; =_021D4130
    mov r2, #0x10
    ldr r1, [r1]
    add r1, #0x58
    add r1, r1, r5
    bl MI_CpuCopy8
    add r0, r6, #0
    bl WifiHistory_GetPlayerCountry
    ldr r1, _0203451C ; =_021D4130
    ldr r1, [r1]
    add r1, r1, r5
    add r1, #0x6f
    strb r0, [r1]
    add r0, r6, #0
    bl WiFiHistory_GetPlayerRegion
    ldr r2, _0203451C ; =_021D4130
    ldr r1, [r2]
    add r1, r1, r5
    add r1, #0x70
    strb r0, [r1]
    ldr r0, [r2]
    mov r1, #0
    add r0, r0, r5
    add r0, #0x71
    strb r1, [r0]
    add r0, r7, #0
    bl sub_0202C08C
    ldr r1, _0203451C ; =_021D4130
    ldr r1, [r1]
    add r1, #0x4c
    add r1, r1, r5
    bl DWC_CreateExchangeToken
    ldr r0, _0203451C ; =_021D4130
    mov r1, #0
    ldr r0, [r0]
    mov r2, #0x20
    add r0, #0xc
    add r0, r0, r5
    bl MI_CpuFill8
    ldr r0, _0203451C ; =_021D4130
    ldr r1, [r0]
    ldr r0, [r1, #4]
    cmp r0, #0
    beq _0203450A
    add r1, #0xc
    add r1, r1, r5
    bl LinkBattleRuleset_Copy
    ldr r1, _0203451C ; =_021D4130
    mov r0, #3
    ldr r1, [r1]
    mov r2, #0x68
    add r1, #0xc
    add r1, r1, r5
    bl sub_02037030
    pop {r3, r4, r5, r6, r7, pc}
    _0203451C: .word _021D4130"
    );
    #endif
}

void sub_02034520(void) {
    /* Original at 0x02034520 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0x68
    bx lr"
    );
    #endif
}

void sub_02034524(void) {
    /* Original at 0x02034524 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02034538 ; =_021D4130
    ldr r2, [r0]
    cmp r2, #0
    beq _02034534
    mov r0, #0xe9
    mov r1, #1
    lsl r0, r0, #2
    strb r1, [r2, r0]
    bx lr
    nop
    _02034538: .word _021D4130"
    );
    #endif
}

void sub_0203453C(void) {
    /* Original at 0x0203453C */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    ldr r1, _020345C8 ; =_021D4130
    add r4, r2, #0
    ldr r1, [r1]
    cmp r1, #0
    beq _020345C4
    lsl r0, r0, #0x10
    lsr r0, r0, #0x10
    bl sub_020373B4
    cmp r0, #0
    beq _020345C4
    ldr r1, _020345C8 ; =_021D4130
    mov r2, #0x68
    ldr r5, [r1]
    add r1, r4, #0
    add r1, #0x62
    ldrb r1, [r1]
    add r5, #0xc
    add r0, r4, #0
    add r3, r1, #0
    mul r3, r2
    add r1, r5, r3
    bl MI_CpuCopy8
    add r4, #0x62
    ldr r1, _020345C8 ; =_021D4130
    ldrb r3, [r4]
    ldr r2, [r1]
    ldr r0, _020345CC ; =0x000003A6
    strb r3, [r2, r0]
    ldr r2, [r1]
    ldrb r1, [r2, r0]
    sub r0, #0x5a
    lsl r1, r1, #2
    add r1, r2, r1
    ldr r0, [r1, r0]
    bl PlayerProfile_IsNameEmpty
    cmp r0, #1
    beq _020345C4
    ldr r2, _020345C8 ; =_021D4130
    mov r0, #0xe7
    lsl r0, r0, #2
    ldr r3, [r2]
    add r1, r0, #0
    add r1, #0xa
    add r4, r3, r0
    ldrb r3, [r3, r1]
    ldrb r1, [r4, r3]
    cmp r1, #2
    bhs _020345C4
    mov r1, #1
    strb r1, [r4, r3]
    ldr r1, [r2]
    add r0, #0xa
    ldrb r4, [r1, r0]
    bl sub_0203769C
    cmp r4, r0
    bne _020345C4
    ldr r0, _020345C8 ; =_021D4130
    mov r2, #3
    ldr r0, [r0]
    add r1, r0, r4
    mov r0, #0xe7
    lsl r0, r0, #2
    strb r2, [r1, r0]
    pop {r3, r4, r5, pc}
    nop
    _020345C8: .word _021D4130
    _020345CC: .word 0x000003A6"
    );
    #endif
}

void sub_020345D0(void) {
    /* Original at 0x020345D0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    add r5, r0, #0
    ldr r0, _02034630 ; =_021D4130
    ldr r1, [r0]
    cmp r1, #0
    beq _0203462C
    mov r3, #0x68
    add r4, r5, #0
    add r0, r2, #0
    mul r4, r3
    add r1, #0xc
    add r1, r1, r4
    add r2, r3, #0
    bl MI_CpuCopy8
    ldr r0, _02034630 ; =_021D4130
    add r1, r5, #0
    ldr r0, [r0]
    add r0, #0x68
    add r0, r0, r4
    bl sub_020357C4
    ldr r0, _02034630 ; =_021D4130
    mov r2, #1
    ldr r0, [r0]
    add r1, r0, r5
    mov r0, #0xe7
    lsl r0, r0, #2
    strb r2, [r1, r0]
    bl sub_0203769C
    cmp r5, r0
    bne _02034622
    ldr r0, _02034630 ; =_021D4130
    mov r2, #3
    ldr r0, [r0]
    add r1, r0, r5
    mov r0, #0xe7
    lsl r0, r0, #2
    strb r2, [r1, r0]
    pop {r3, r4, r5, pc}
    ldr r0, _02034630 ; =_021D4130
    mov r2, #1
    ldr r1, [r0]
    ldr r0, _02034634 ; =0x000003A5
    strb r2, [r1, r0]
    pop {r3, r4, r5, pc}
    nop
    _02034630: .word _021D4130
    _02034634: .word 0x000003A5"
    );
    #endif
}

void sub_02034638(void) {
    /* Original at 0x02034638 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    ldr r0, _020346CC ; =_021D4130
    ldr r1, [r0]
    ldr r0, _020346D0 ; =0x000003A5
    ldrb r0, [r1, r0]
    cmp r0, #0
    bne _0203464A
    mov r0, #0
    pop {r3, r4, r5, r6, r7, pc}
    bl sub_0203769C
    cmp r0, #0
    beq _02034656
    mov r0, #0
    pop {r3, r4, r5, r6, r7, pc}
    mov r0, #5
    bl sub_02037824
    cmp r0, #0
    bne _020346C8
    mov r4, #0
    add r5, r4, #0
    add r7, r4, #0
    ldr r0, _020346CC ; =_021D4130
    ldr r2, [r0]
    mov r0, #0xe7
    add r1, r2, r4
    lsl r0, r0, #2
    ldrb r0, [r1, r0]
    cmp r0, #0
    beq _020346A6
    add r0, r2, r5
    add r0, #0x6e
    strb r4, [r0]
    ldr r0, _020346CC ; =_021D4130
    ldr r6, [r0]
    bl PlayerProfile_sizeof
    add r2, r0, #0
    mov r0, #0xd3
    add r1, r6, r7
    lsl r0, r0, #2
    ldr r0, [r1, r0]
    add r6, #0x2c
    add r1, r6, r5
    bl MI_CpuCopy8
    ldr r1, _020346CC ; =_021D4130
    mov r0, #4
    ldr r1, [r1]
    mov r2, #0x68
    add r1, #0xc
    add r1, r1, r5
    bl sub_0203753C
    add r4, r4, #1
    add r5, #0x68
    add r7, r7, #4
    cmp r4, #8
    blt _02034666
    mov r1, #0
    mov r0, #5
    add r2, r1, #0
    bl sub_0203753C
    ldr r0, _020346CC ; =_021D4130
    mov r2, #0
    ldr r1, [r0]
    ldr r0, _020346D0 ; =0x000003A5
    strb r2, [r1, r0]
    mov r0, #1
    pop {r3, r4, r5, r6, r7, pc}
    mov r0, #0
    pop {r3, r4, r5, r6, r7, pc}
    _020346CC: .word _021D4130
    _020346D0: .word 0x000003A5"
    );
    #endif
}

void sub_020346D4(void) {
    /* Original at 0x020346D4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020346E0 ; =_021D4130
    ldr r1, [r0]
    ldr r0, _020346E4 ; =0x000003A5
    ldrb r0, [r1, r0]
    bx lr
    nop
    _020346E0: .word _021D4130
    _020346E4: .word 0x000003A5"
    );
    #endif
}

void sub_020346E8(void) {
    /* Original at 0x020346E8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    ldr r0, _02034710 ; =_021D4130
    ldr r1, [r0]
    lsl r0, r4, #2
    add r1, r1, r0
    mov r0, #0xd3
    lsl r0, r0, #2
    ldr r0, [r1, r0]
    bl PlayerProfile_Init
    ldr r0, _02034710 ; =_021D4130
    mov r2, #0
    ldr r0, [r0]
    add r1, r0, r4
    mov r0, #0xe7
    lsl r0, r0, #2
    strb r2, [r1, r0]
    pop {r4, pc}
    nop
    _02034710: .word _021D4130"
    );
    #endif
}

void sub_02034714(void) {
    /* Original at 0x02034714 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0203472C ; =_021D4130
    ldr r1, [r1]
    add r1, r1, r0
    mov r0, #0xe7
    lsl r0, r0, #2
    ldrb r0, [r1, r0]
    cmp r0, #1
    bne _02034728
    mov r0, #1
    bx lr
    mov r0, #0
    bx lr
    _0203472C: .word _021D4130"
    );
    #endif
}

void sub_02034730(void) {
    /* Original at 0x02034730 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0203474C ; =_021D4130
    mov r2, #1
    ldr r1, [r1]
    add r1, r1, r0
    mov r0, #0xe7
    lsl r0, r0, #2
    ldrb r0, [r1, r0]
    cmp r0, #2
    beq _02034748
    cmp r0, #1
    beq _02034748
    mov r2, #0
    add r0, r2, #0
    bx lr
    _0203474C: .word _021D4130"
    );
    #endif
}

void sub_02034750(void) {
    /* Original at 0x02034750 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02034768 ; =_021D4130
    ldr r1, [r1]
    add r1, r1, r0
    mov r0, #0xe7
    lsl r0, r0, #2
    ldrb r0, [r1, r0]
    cmp r0, #2
    bne _02034764
    mov r0, #1
    bx lr
    mov r0, #0
    bx lr
    _02034768: .word _021D4130"
    );
    #endif
}

void sub_0203476C(void) {
    /* Original at 0x0203476C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0203477C ; =_021D4130
    mov r2, #2
    ldr r1, [r1]
    add r1, r1, r0
    mov r0, #0xe7
    lsl r0, r0, #2
    strb r2, [r1, r0]
    bx lr
    _0203477C: .word _021D4130"
    );
    #endif
}

void sub_02034780(void) {
    /* Original at 0x02034780 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0203479C ; =_021D4130
    mov r0, #0
    ldr r3, [r1]
    mov r1, #0xe7
    lsl r1, r1, #2
    ldrb r2, [r3, r1]
    cmp r2, #1
    beq _0203479A
    add r0, r0, #1
    add r3, r3, #1
    cmp r0, #8
    blt _0203478A
    mov r0, #0xff
    bx lr
    _0203479C: .word _021D4130"
    );
    #endif
}

void sub_020347A0(void) {
    /* Original at 0x020347A0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}
    ldr r1, _020347C8 ; =_021D4130
    mov r0, #0
    ldr r4, [r1]
    mov r1, #0xe7
    add r3, r0, #0
    lsl r1, r1, #2
    ldrb r2, [r4, r1]
    cmp r2, #2
    beq _020347B8
    cmp r2, #3
    bne _020347BA
    add r0, r0, #1
    add r3, r3, #1
    add r4, r4, #1
    cmp r3, #8
    blt _020347AE
    pop {r3, r4}
    bx lr
    nop
    _020347C8: .word _021D4130"
    );
    #endif
}

void sub_020347CC(void) {
    /* Original at 0x020347CC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    ldr r0, _02034814 ; =_021D4130
    mov r5, #0
    ldr r0, [r0]
    cmp r0, #0
    beq _02034810
    bl sub_02037454
    cmp r0, #0
    bne _020347E4
    add r0, r5, #0
    pop {r3, r4, r5, r6, r7, pc}
    mov r7, #0xe7
    ldr r6, _02034814 ; =_021D4130
    add r4, r5, #0
    lsl r7, r7, #2
    lsl r0, r4, #0x10
    lsr r0, r0, #0x10
    bl sub_020373B4
    cmp r0, #0
    bne _0203480A
    ldr r0, [r6]
    add r0, r0, r4
    ldrb r0, [r0, r7]
    cmp r0, #0
    beq _0203480A
    add r0, r4, #0
    bl sub_020346E8
    mov r5, #1
    add r4, r4, #1
    cmp r4, #8
    blt _020347EC
    add r0, r5, #0
    pop {r3, r4, r5, r6, r7, pc}
    _02034814: .word _021D4130"
    );
    #endif
}

void sub_02034818(void) {
    /* Original at 0x02034818 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02034848 ; =_021D4130
    ldr r3, [r1]
    cmp r3, #0
    bne _02034824
    mov r0, #0
    bx lr
    mov r1, #0xe7
    add r2, r3, r0
    lsl r1, r1, #2
    ldrb r1, [r2, r1]
    cmp r1, #1
    beq _02034838
    cmp r1, #2
    beq _02034838
    cmp r1, #3
    bne _02034844
    lsl r0, r0, #2
    add r1, r3, r0
    mov r0, #0xd3
    lsl r0, r0, #2
    ldr r0, [r1, r0]
    bx lr
    mov r0, #0
    bx lr
    _02034848: .word _021D4130"
    );
    #endif
}

void sub_0203484C(void) {
    /* Original at 0x0203484C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0203486C ; =_021D4130
    ldr r3, [r1]
    mov r1, #0xe7
    add r2, r3, r0
    lsl r1, r1, #2
    ldrb r1, [r2, r1]
    cmp r1, #0
    beq _02034866
    mov r1, #0x68
    add r3, #0x4c
    mul r1, r0
    add r0, r3, r1
    bx lr
    mov r0, #0
    bx lr
    nop
    _0203486C: .word _021D4130"
    );
    #endif
}

void sub_02034870(void) {
    /* Original at 0x02034870 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0
    ldr r0, _0203487C ; =_021D4130
    ldr r3, _02034880 ; =sub_0203A378
    ldr r0, [r0]
    ldr r0, [r0, #8]
    bx r3
    _0203487C: .word _021D4130
    _02034880: .word sub_0203A378"
    );
    #endif
}

void sub_02034884(void) {
    /* Original at 0x02034884 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020348A4 ; =_021D4130
    ldr r3, [r1]
    mov r1, #0xe7
    add r2, r3, r0
    lsl r1, r1, #2
    ldrb r1, [r2, r1]
    cmp r1, #0
    beq _0203489E
    mov r1, #0x68
    add r3, #0x58
    mul r1, r0
    add r0, r3, r1
    bx lr
    mov r0, #0
    bx lr
    nop
    _020348A4: .word _021D4130"
    );
    #endif
}

void sub_020348A8(void) {
    /* Original at 0x020348A8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020348C8 ; =_021D4130
    ldr r3, [r1]
    mov r1, #0xe7
    add r2, r3, r0
    lsl r1, r1, #2
    ldrb r1, [r2, r1]
    cmp r1, #0
    beq _020348C4
    mov r1, #0x68
    mul r1, r0
    add r0, r3, r1
    add r0, #0x6f
    ldrb r0, [r0]
    bx lr
    mov r0, #0
    bx lr
    _020348C8: .word _021D4130"
    );
    #endif
}

void sub_020348CC(void) {
    /* Original at 0x020348CC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020348EC ; =_021D4130
    ldr r3, [r1]
    mov r1, #0xe7
    add r2, r3, r0
    lsl r1, r1, #2
    ldrb r1, [r2, r1]
    cmp r1, #0
    beq _020348E8
    mov r1, #0x68
    mul r1, r0
    add r0, r3, r1
    add r0, #0x70
    ldrb r0, [r0]
    bx lr
    mov r0, #0
    bx lr
    _020348EC: .word _021D4130"
    );
    #endif
}

void sub_020348F0(void) {
    /* Original at 0x020348F0 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    mov r4, #0
    add r5, r4, #0
    add r6, r4, #0
    lsl r0, r4, #0x10
    lsr r0, r0, #0x10
    bl sub_020373B4
    cmp r0, #0
    beq _0203494C
    ldr r0, _02034958 ; =_021D4130
    ldr r0, [r0]
    add r1, r0, r4
    mov r0, #0xe7
    lsl r0, r0, #2
    ldrb r0, [r1, r0]
    cmp r0, #0
    beq _0203494C
    add r0, r4, #1
    lsl r0, r0, #0x10
    lsr r0, r0, #0x10
    bl sub_020373B4
    cmp r0, #0
    beq _0203494C
    ldr r0, _02034958 ; =_021D4130
    ldr r1, _0203495C ; =0x0000039D
    ldr r0, [r0]
    add r2, r0, r4
    ldrb r1, [r2, r1]
    cmp r1, #0
    beq _0203494C
    add r1, r6, #0
    add r2, r0, r5
    add r3, r2, #0
    add r3, #0x74
    ldrb r0, [r2, #0xc]
    ldrb r3, [r3]
    cmp r0, r3
    beq _02034944
    mov r0, #0
    pop {r4, r5, r6, pc}
    add r1, r1, #1
    add r2, r2, #1
    cmp r1, #0x20
    blt _02034934
    add r4, r4, #1
    add r5, #0x68
    cmp r4, #7
    blt _020348F8
    mov r0, #1
    pop {r4, r5, r6, pc}
    _02034958: .word _021D4130
    _0203495C: .word 0x0000039D"
    );
    #endif
}

void sub_02034960(void) {
    /* Original at 0x02034960 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r7, r0, #0
    ldr r0, _02034A18 ; =_021D4130
    add r6, r1, #0
    ldr r0, [r0]
    cmp r0, #0
    beq _02034A14
    cmp r7, #2
    beq _02034980
    bl sub_0203769C
    bl sub_020378AC
    mov r1, #1
    and r0, r1
    str r0, [sp]
    mov r4, #0
    bl sub_02037454
    cmp r0, #0
    ble _02034A14
    add r5, r4, #0
    lsl r0, r4, #0x10
    lsr r0, r0, #0x10
    bl sub_020373B4
    cmp r0, #0
    beq _02034A08
    ldr r0, _02034A18 ; =_021D4130
    mov r1, #0xe7
    ldr r0, [r0]
    lsl r1, r1, #2
    add r2, r0, r4
    ldrb r1, [r2, r1]
    cmp r1, #0
    beq _02034A08
    cmp r7, #0
    bne _020349D2
    add r0, r4, #0
    bl sub_020378AC
    mov r1, #1
    and r1, r0
    ldr r0, [sp]
    cmp r0, r1
    beq _02034A08
    ldr r0, _02034A18 ; =_021D4130
    mov r1, #0xdb
    ldr r0, [r0]
    lsl r1, r1, #2
    add r0, r0, r5
    ldrh r1, [r0, r1]
    add r2, r1, r6
    mov r1, #0xdb
    lsl r1, r1, #2
    strh r2, [r0, r1]
    b _02034A08
    cmp r7, #1
    bne _020349F8
    add r0, r4, #0
    bl sub_020378AC
    mov r1, #1
    and r1, r0
    ldr r0, [sp]
    cmp r0, r1
    beq _02034A08
    ldr r0, _02034A18 ; =_021D4130
    ldr r1, _02034A1C ; =0x0000036E
    ldr r0, [r0]
    add r0, r0, r5
    ldrh r1, [r0, r1]
    add r2, r1, r6
    ldr r1, _02034A1C ; =0x0000036E
    strh r2, [r0, r1]
    b _02034A08
    mov r1, #0x37
    add r0, r0, r5
    lsl r1, r1, #4
    ldrh r1, [r0, r1]
    add r2, r1, r6
    mov r1, #0x37
    lsl r1, r1, #4
    strh r2, [r0, r1]
    add r5, r5, #6
    add r4, r4, #1
    bl sub_02037454
    cmp r4, r0
    blt _0203498C
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _02034A18: .word _021D4130
    _02034A1C: .word 0x0000036E"
    );
    #endif
}

void sub_02034A20(void) {
    /* Original at 0x02034A20 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}
    sub sp, #0xc
    add r7, r0, #0
    bl sub_0202C6F4
    str r0, [sp, #4]
    mov r4, #0
    bl sub_02037454
    cmp r0, #0
    ble _02034A88
    add r5, r4, #0
    add r0, r4, #0
    bl sub_0203484C
    add r1, r0, #0
    beq _02034A7C
    add r0, r7, #0
    add r2, sp, #8
    bl sub_0203A084
    cmp r0, #0
    beq _02034A52
    cmp r0, #1
    bne _02034A7C
    ldr r0, [sp, #8]
    cmp r0, #0
    bge _02034A5C
    bl GF_AssertFail
    ldr r0, _02034AB8 ; =_021D4130
    mov r2, #0xdb
    ldr r0, [r0]
    ldr r3, _02034ABC ; =0x0000036E
    add r6, r0, r5
    mov r0, #0x37
    lsl r0, r0, #4
    ldrh r0, [r6, r0]
    lsl r2, r2, #2
    str r0, [sp]
    ldrh r2, [r6, r2]
    ldrh r3, [r6, r3]
    ldr r0, [sp, #4]
    ldr r1, [sp, #8]
    bl sub_0202C4F0
    add r5, r5, #6
    add r4, r4, #1
    bl sub_02037454
    cmp r4, r0
    blt _02034A38
    mov r3, #0xdb
    mov r2, #0
    lsl r3, r3, #2
    ldr r6, _02034AB8 ; =_021D4130
    add r1, r2, #0
    add r0, r2, #0
    add r4, r3, #2
    add r5, r3, #4
    ldr r7, [r6]
    add r2, r2, #1
    add r7, r7, r1
    strh r0, [r7, r3]
    ldr r7, [r6]
    add r7, r7, r1
    strh r0, [r7, r4]
    ldr r7, [r6]
    add r7, r7, r1
    add r1, r1, #6
    strh r0, [r7, r5]
    cmp r2, #8
    blt _02034A98
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    nop
    _02034AB8: .word _021D4130
    _02034ABC: .word 0x0000036E"
    );
    #endif
}

void sub_02034AC0(void) {
    /* Original at 0x02034AC0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    cmp r1, #1
    bne _02034AD2
    mov r0, #0
    mov r1, #1
    bl sub_02034960
    b _02034AE2
    mov r0, #0
    mvn r0, r0
    cmp r1, r0
    bne _02034AE2
    mov r0, #1
    add r1, r0, #0
    bl sub_02034960
    add r0, r4, #0
    bl sub_02034A20
    pop {r4, pc}"
    );
    #endif
}

void sub_02034AEC(void) {
    /* Original at 0x02034AEC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    mov r0, #2
    bl sub_02034960
    add r0, r4, #0
    bl sub_02034A20
    pop {r4, pc}"
    );
    #endif
}

void sub_02034B00(void) {
    /* Original at 0x02034B00 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02034B08 ; =_021D4130
    ldr r1, [r1]
    str r0, [r1]
    bx lr
    _02034B08: .word _021D4130"
    );
    #endif
}
