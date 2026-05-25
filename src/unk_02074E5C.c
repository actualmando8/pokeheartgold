/* Decompiled from asm/unk_02074E5C.s */
#include "global.h"

void sub_02074E5C(void) {
    /* Original at 0x02074E5C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl BattleSystem_GetBattleSpecial\n    mov r1, #0x10\n    tst r0, r1\n    bne _02074EB6\n    mov r0, #5\n    mov r1, #8\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r0, #5\n    mov r1, #8\n    bl Heap_Alloc\n    add r6, r0, #0\n    ldr r0, _02074EB8 ; =_020FFE30\n    mov r1, #0xc\n    add r2, r5, #0\n    bl sub_0203410C\n    str r5, [r4]\n    mov r0, #0\n    strb r0, [r4, #4]\n    str r5, [r6]\n    strb r0, [r6, #4]\n    add r0, r5, #0\n    add r1, r4, #4\n    bl ov12_0223BBFC\n    add r0, r5, #0\n    add r1, r6, #4\n    bl ov12_0223BC08\n    ldr r0, _02074EBC ; =sub_02075434\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r0, _02074EC0 ; =sub_020754C0\n    add r1, r6, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    pop {r4, r5, r6, pc}\n    _02074EB8: .word _020FFE30\n    _02074EBC: .word sub_02075434\n    _02074EC0: .word sub_020754C0"
    );
    #endif
}

void sub_02074EC4(void) {
    /* Original at 0x02074EC4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02074ED0 ; =sub_0203410C\n    add r2, r0, #0\n    ldr r0, _02074ED4 ; =_020FFE30\n    mov r1, #0xc\n    bx r3\n    nop\n    _02074ED0: .word sub_0203410C\n    _02074ED4: .word _020FFE30"
    );
    #endif
}

u8 sub_02074ED8(void) {
    return 4;
}

void sub_02074EDC(void) {
    PlayerProfile_sizeof();
}

void sub_02074EE4(void) {
    PartyCore_sizeof();
}

void sub_02074EEC(void) {
    r0 = r0 << 2;
}

u8 sub_02074EF4(void) {
    return 0x34;
}

void sub_02074EF8(void) {
    /* Original at 0x02074EF8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r1]\n    mov r1, #0x80\n    ldr r2, [r3]\n    tst r1, r2\n    beq _02074F0C\n    lsl r0, r0, #3\n    add r0, r3, r0\n    add r0, #0xf8\n    ldr r0, [r0]\n    bx lr\n    lsl r0, r0, #2\n    add r0, r3, r0\n    add r0, #0xf8\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_02074F18(void) {
    /* Original at 0x02074F18 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r1]\n    mov r2, #0x80\n    ldr r3, [r1]\n    tst r2, r3\n    beq _02074F2E\n    lsl r2, r0, #1\n    mov r0, #0x34\n    add r1, #0x28\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    mov r2, #0x34\n    add r1, #0x28\n    mul r2, r0\n    add r0, r1, r2\n    bx lr"
    );
    #endif
}

void sub_02074F38(void) {
    /* Original at 0x02074F38 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r1]\n    mov r1, #0x80\n    ldr r2, [r3]\n    tst r1, r2\n    beq _02074F4A\n    lsl r0, r0, #3\n    add r0, r3, r0\n    ldr r0, [r0, #4]\n    bx lr\n    lsl r0, r0, #2\n    add r0, r3, r0\n    ldr r0, [r0, #4]\n    bx lr"
    );
    #endif
}

void sub_02074F54(void) {
    /* Original at 0x02074F54 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r1]\n    mov r1, #0x80\n    ldr r2, [r3]\n    tst r2, r1\n    beq _02074F68\n    lsl r0, r0, #3\n    add r0, r3, r0\n    add r1, #0x98\n    ldr r0, [r0, r1]\n    bx lr\n    lsl r0, r0, #2\n    add r0, r3, r0\n    add r1, #0x98\n    ldr r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void sub_02074F74(void) {
    /* Original at 0x02074F74 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r1]\n    add r0, #0x5c\n    bx lr"
    );
    #endif
}

void sub_02074F7C(void) {
    /* Original at 0x02074F7C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r1]\n    add r0, #0xc4\n    bx lr"
    );
    #endif
}

void sub_02074F84(void) {
    /* Original at 0x02074F84 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r1]\n    ldr r0, [r0, #8]\n    bx lr"
    );
    #endif
}

void sub_02074F8C(void) {
    /* Original at 0x02074F8C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r1]\n    ldr r0, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void sub_02074F94(void) {
    /* Original at 0x02074F94 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "lsl r0, r0, #2\n    add r0, r1, r0\n    ldr r0, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void sub_02074F9C(void) {
    /* Original at 0x02074F9C */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    str r1, [sp, #4]\n    mov r0, #5\n    mov r1, #4\n    str r2, [sp, #8]\n    add r7, r3, #0\n    bl Heap_Alloc\n    add r6, r0, #0\n    ldr r0, [sp]\n    bl BattleSystem_GetSendBufferPtr\n    add r5, r0, #0\n    ldr r0, [sp]\n    bl ov12_0223A960\n    add r4, r0, #0\n    ldr r0, [sp]\n    bl ov12_0223A96C\n    mov ip, r0\n    add r0, sp, #0x10\n    ldrh r3, [r4]\n    ldrb r0, [r0, #0x10]\n    add r1, r3, #5\n    add r2, r1, r0\n    mov r1, #1\n    lsl r1, r1, #0xc\n    cmp r2, r1\n    bls _02074FE4\n    mov r1, ip\n    strh r3, [r1]\n    mov r1, #0\n    strh r1, [r4]\n    ldr r1, [sp, #4]\n    mov r3, #0\n    strb r1, [r6]\n    ldr r1, [sp, #8]\n    strb r1, [r6, #1]\n    add r1, sp, #0x10\n    ldrb r1, [r1, #0x10]\n    strh r1, [r6, #2]\n    ldrb r2, [r6, r3]\n    ldrh r1, [r4]\n    add r3, r3, #1\n    strb r2, [r5, r1]\n    ldrh r1, [r4]\n    add r1, r1, #1\n    strh r1, [r4]\n    cmp r3, #4\n    blo _02074FF4\n    mov r3, #0\n    cmp r0, #0\n    ble _0207501E\n    ldrb r2, [r7, r3]\n    ldrh r1, [r4]\n    add r3, r3, #1\n    strb r2, [r5, r1]\n    ldrh r1, [r4]\n    add r1, r1, #1\n    strh r1, [r4]\n    cmp r3, r0\n    blt _0207500C\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02075028(void) {
    /* Original at 0x02075028 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r3, [sp]\n    add r0, r3, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    bl BattleSystem_GetRecvBufferPtr\n    add r7, r0, #0\n    ldr r0, [sp]\n    bl ov12_0223A984\n    add r4, r0, #0\n    ldr r0, [sp]\n    bl ov12_0223A990\n    ldrh r1, [r4]\n    add r2, r1, r5\n    add r3, r2, #1\n    mov r2, #1\n    lsl r2, r2, #0xc\n    cmp r3, r2\n    ble _0207505A\n    strh r1, [r0]\n    mov r0, #0\n    strh r0, [r4]\n    mov r0, #0\n    cmp r5, #0\n    ble _02075072\n    ldrb r2, [r6, r0]\n    ldrh r1, [r4]\n    add r0, r0, #1\n    strb r2, [r7, r1]\n    ldrh r1, [r4]\n    add r1, r1, #1\n    strh r1, [r4]\n    cmp r0, r5\n    blt _02075060\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02075074(void) {
    /* Original at 0x02075074 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, lr}\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _0207508E\n    mov r0, #0\n    pop {r3}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    mov r0, #0x33\n    bl sub_02037B38\n    cmp r0, #0\n    bne _020750A2\n    mov r0, #0\n    pop {r3}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    mov r0, #0x18\n    add r1, sp, #0xc\n    mov r2, #4\n    bl sub_02037030\n    pop {r3}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void sub_020750B4(void) {
    /* Original at 0x020750B4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r3, #0\n    ldr r5, [r2]\n    ldr r2, [r4]\n    lsl r1, r0, #2\n    add r3, r2, r1\n    mov r2, #0x5f\n    lsl r2, r2, #2\n    str r5, [r3, r2]\n    ldr r3, [r4]\n    add r1, r3, r1\n    ldr r1, [r1, r2]\n    bl sub_0203049C\n    ldr r0, _020750DC ; =0x00001020\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _020750DC: .word 0x00001020"
    );
    #endif
}

void sub_020750E0(void) {
    /* Original at 0x020750E0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _020750F4\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4]\n    add r4, #0x20\n    add r0, #0xf8\n    ldr r0, [r0]\n    add r1, r4, #0\n    bl PlayerProfile_Copy\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void sub_02075108(void) {
    /* Original at 0x02075108 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _0207511C\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0x34\n    bl sub_02037B38\n    cmp r0, #0\n    bne _0207512A\n    mov r0, #0\n    pop {r4, pc}\n    bl PlayerProfile_sizeof\n    add r4, #0x20\n    add r2, r0, #0\n    mov r0, #0x19\n    add r1, r4, #0\n    bl sub_02036FD8\n    pop {r4, pc}"
    );
    #endif
}

void sub_0207513C(void) {
    /* Original at 0x0207513C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02075148 ; =0x00001020\n    ldrb r1, [r3, r0]\n    add r1, r1, #1\n    strb r1, [r3, r0]\n    bx lr\n    nop\n    _02075148: .word 0x00001020"
    );
    #endif
}

void sub_0207514C(void) {
    /* Original at 0x0207514C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _02075160\n    mov r0, #0\n    pop {r4, pc}\n    ldr r3, [r4]\n    add r4, #0x20\n    add r3, #0x28\n    mov r2, #6\n    ldmia r3!, {r0, r1}\n    stmia r4!, {r0, r1}\n    sub r2, r2, #1\n    bne _02075168\n    ldr r0, [r3]\n    str r0, [r4]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void sub_02075178(void) {
    /* Original at 0x02075178 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _0207518C\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0x35\n    bl sub_02037B38\n    cmp r0, #0\n    bne _0207519A\n    mov r0, #0\n    pop {r4, pc}\n    add r4, #0x20\n    mov r0, #0x1a\n    add r1, r4, #0\n    mov r2, #0x34\n    bl sub_02036FD8\n    pop {r4, pc}"
    );
    #endif
}

void sub_020751A8(void) {
    /* Original at 0x020751A8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020751B4 ; =0x00001020\n    ldrb r1, [r3, r0]\n    add r1, r1, #1\n    strb r1, [r3, r0]\n    bx lr\n    nop\n    _020751B4: .word 0x00001020"
    );
    #endif
}

void sub_020751B8(void) {
    /* Original at 0x020751B8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _020751CC\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4]\n    add r4, #0x20\n    ldr r0, [r0, #4]\n    add r1, r4, #0\n    bl Party_Copy\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void sub_020751DC(void) {
    /* Original at 0x020751DC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _020751F0\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0x36\n    bl sub_02037B38\n    cmp r0, #0\n    bne _020751FE\n    mov r0, #0\n    pop {r4, pc}\n    bl PartyCore_sizeof\n    add r4, #0x20\n    add r2, r0, #0\n    mov r0, #0x1b\n    add r1, r4, #0\n    bl sub_02036FD8\n    pop {r4, pc}"
    );
    #endif
}

void sub_02075210(void) {
    /* Original at 0x02075210 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0207521C ; =0x00001020\n    ldrb r1, [r3, r0]\n    add r1, r1, #1\n    strb r1, [r3, r0]\n    bx lr\n    nop\n    _0207521C: .word 0x00001020"
    );
    #endif
}

void sub_02075220(void) {
    /* Original at 0x02075220 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _02075234\n    mov r0, #0\n    pop {r4, pc}\n    ldr r2, [r4]\n    add r1, #0x10\n    add r0, r4, #0\n    ldr r1, [r2, r1]\n    add r0, #0x20\n    bl Chatot_Copy\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void sub_02075248(void) {
    /* Original at 0x02075248 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _0207525C\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0x37\n    bl sub_02037B38\n    cmp r0, #0\n    bne _0207526A\n    mov r0, #0\n    pop {r4, pc}\n    add r4, #0x20\n    mov r2, #0xfa\n    mov r0, #0x1c\n    add r1, r4, #0\n    lsl r2, r2, #2\n    bl sub_02036FD8\n    pop {r4, pc}"
    );
    #endif
}

void sub_0207527C(void) {
    /* Original at 0x0207527C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _02075290\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r4, [r5]\n    mov r0, #0x80\n    ldr r1, [r4]\n    tst r0, r1\n    beq _020752A2\n    bl sub_0203769C\n    lsl r0, r0, #3\n    b _020752A8\n    bl sub_0203769C\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0x52\n    add r0, #0xf8\n    lsl r1, r1, #2\n    add r2, r5, #0\n    ldr r0, [r0]\n    ldr r1, [r4, r1]\n    add r2, #0x20\n    bl sub_02075554\n    mov r4, #0\n    mov r6, #5\n    mov r7, #0x88\n    add r0, r6, #0\n    add r1, r7, #0\n    bl Heap_Alloc\n    str r0, [r5, #0x10]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _020752C2\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020752D8(void) {
    /* Original at 0x020752D8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _020752EC\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0x38\n    bl sub_02037B38\n    cmp r0, #0\n    bne _020752FA\n    mov r0, #0\n    pop {r4, pc}\n    add r4, #0x20\n    mov r2, #0xfa\n    mov r0, #0x21\n    add r1, r4, #0\n    lsl r2, r2, #2\n    bl sub_02036FD8\n    pop {r4, pc}"
    );
    #endif
}

void sub_0207530C(void) {
    /* Original at 0x0207530C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02075318 ; =0x00001020\n    ldrb r1, [r3, r0]\n    add r1, r1, #1\n    strb r1, [r3, r0]\n    bx lr\n    nop\n    _02075318: .word 0x00001020"
    );
    #endif
}

void sub_0207531C(void) {
    /* Original at 0x0207531C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _02075332\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r1, [r5]\n    mov r0, #0x34\n    mul r0, r4\n    add r3, r1, r0\n    add r3, #0x28\n    add r5, #0x20\n    mov r2, #6\n    ldmia r3!, {r0, r1}\n    stmia r5!, {r0, r1}\n    sub r2, r2, #1\n    bne _02075340\n    ldr r0, [r3]\n    str r0, [r5]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02075350(void) {
    /* Original at 0x02075350 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _02075368\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    bl sub_02037B38\n    cmp r0, #0\n    bne _02075378\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    cmp r4, #1\n    bne _0207538A\n    add r5, #0x20\n    mov r0, #0x1d\n    add r1, r5, #0\n    mov r2, #0x34\n    bl sub_02036FD8\n    pop {r4, r5, r6, pc}\n    add r5, #0x20\n    mov r0, #0x1e\n    add r1, r5, #0\n    mov r2, #0x34\n    bl sub_02036FD8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02075398(void) {
    /* Original at 0x02075398 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020753A4 ; =0x00001020\n    ldrb r1, [r3, r0]\n    add r1, r1, #1\n    strb r1, [r3, r0]\n    bx lr\n    nop\n    _020753A4: .word 0x00001020"
    );
    #endif
}

void sub_020753A8(void) {
    /* Original at 0x020753A8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _020753BE\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r1, [r5]\n    lsl r0, r4, #2\n    add r0, r1, r0\n    add r5, #0x20\n    ldr r0, [r0, #4]\n    add r1, r5, #0\n    bl Party_Copy\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020753D4(void) {
    /* Original at 0x020753D4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    beq _020753EC\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    bl sub_02037B38\n    cmp r0, #0\n    bne _020753FC\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    cmp r4, #1\n    bne _02075412\n    bl PartyCore_sizeof\n    add r5, #0x20\n    add r2, r0, #0\n    mov r0, #0x1f\n    add r1, r5, #0\n    bl sub_02036FD8\n    pop {r4, r5, r6, pc}\n    bl PartyCore_sizeof\n    add r5, #0x20\n    add r2, r0, #0\n    mov r0, #0x20\n    add r1, r5, #0\n    bl sub_02036FD8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02075424(void) {
    /* Original at 0x02075424 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02075430 ; =0x00001020\n    ldrb r1, [r3, r0]\n    add r1, r1, #1\n    strb r1, [r3, r0]\n    bx lr\n    nop\n    _02075430: .word 0x00001020"
    );
    #endif
}

void sub_02075434(void) {
    /* Original at 0x02075434 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    str r0, [sp]\n    ldr r0, [r5]\n    bl BattleSystem_GetSendBufferPtr\n    add r6, r0, #0\n    ldr r0, [r5]\n    bl ov12_0223A954\n    add r4, r0, #0\n    ldr r0, [r5]\n    bl ov12_0223A960\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    bl ov12_0223A96C\n    add r7, r0, #0\n    ldrb r0, [r5, #4]\n    cmp r0, #0\n    beq _02075466\n    cmp r0, #0xff\n    b _020754B0\n    bl sub_02037190\n    mov r1, #0x42\n    lsl r1, r1, #2\n    cmp r0, r1\n    bne _020754BC\n    ldr r0, [sp, #4]\n    ldrh r1, [r4]\n    ldrh r0, [r0]\n    cmp r1, r0\n    beq _020754BC\n    ldrh r0, [r7]\n    cmp r1, r0\n    bne _02075488\n    mov r0, #0\n    strh r0, [r4]\n    strh r0, [r7]\n    ldrh r1, [r4]\n    add r0, r1, #2\n    ldrb r2, [r6, r0]\n    add r0, r1, #3\n    ldrb r0, [r6, r0]\n    add r1, r6, r1\n    lsl r0, r0, #8\n    orr r0, r2\n    add r5, r0, #4\n    mov r0, #0x17\n    add r2, r5, #0\n    bl sub_02037030\n    cmp r0, #1\n    bne _020754BC\n    ldrh r0, [r4]\n    add sp, #8\n    add r0, r0, r5\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl Heap_Free\n    ldr r0, [sp]\n    bl SysTask_Destroy\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020754C0(void) {
    /* Original at 0x020754C0 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    str r0, [sp]\n    ldr r0, [r5]\n    bl BattleSystem_GetRecvBufferPtr\n    add r6, r0, #0\n    ldr r0, [r5]\n    bl ov12_0223A978\n    add r4, r0, #0\n    ldr r0, [r5]\n    bl ov12_0223A984\n    add r7, r0, #0\n    ldr r0, [r5]\n    bl ov12_0223A990\n    ldrb r1, [r5, #4]\n    cmp r1, #0\n    beq _020754EE\n    cmp r1, #0xff\n    b _02075526\n    ldrh r1, [r4]\n    ldrh r2, [r7]\n    cmp r1, r2\n    beq _02075532\n    ldrh r2, [r0]\n    cmp r1, r2\n    bne _02075502\n    mov r1, #0\n    strh r1, [r4]\n    strh r1, [r0]\n    ldrh r1, [r4]\n    ldr r0, [r5]\n    add r1, r6, r1\n    bl ov12_02264334\n    cmp r0, #1\n    bne _02075532\n    ldrh r0, [r4]\n    add r1, r0, #2\n    ldrb r2, [r6, r1]\n    add r1, r0, #3\n    ldrb r1, [r6, r1]\n    lsl r1, r1, #8\n    orr r1, r2\n    add r1, r1, #4\n    add r0, r0, r1\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl Heap_Free\n    ldr r0, [sp]\n    bl SysTask_Destroy\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02075534(void) {
    ov12_0223BC14(r3, 0xff);
    ov12_0223BC20(r4, 0xff);
    ov12_0223BC2C(r4, 1);
}

void sub_02075554(void) {
    /* Original at 0x02075554 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r6, r0, #0\n    add r5, r1, #0\n    bl PlayerProfile_GetNamePtr\n    add r1, r0, #0\n    add r0, r4, #0\n    bl CopyU16StringArray\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerID\n    str r0, [r4, #0x10]\n    add r0, r6, #0\n    bl PlayerProfile_GetLanguage\n    strb r0, [r4, #0x14]\n    add r0, r6, #0\n    bl PlayerProfile_GetVersion\n    strb r0, [r4, #0x15]\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerGender\n    strb r0, [r4, #0x16]\n    mov r0, #0\n    add r1, r4, #0\n    ldr r2, [r5, #0x10]\n    str r2, [r1, #0x18]\n    ldrb r3, [r5, #0x15]\n    add r2, r4, r0\n    add r2, #0x58\n    strb r3, [r2]\n    add r2, r4, r0\n    ldrb r3, [r5, #0x14]\n    add r2, #0x68\n    add r1, r1, #4\n    strb r3, [r2]\n    add r2, r4, r0\n    ldrb r3, [r5, #0x16]\n    add r2, #0x78\n    add r0, r0, #1\n    add r5, #0x88\n    strb r3, [r2]\n    cmp r0, #0x10\n    blt _0207558C\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020755B4(void) {
    /* Original at 0x020755B4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r2, #0\n    add r4, r3, #0\n    bl sub_0203769C\n    cmp r5, r0\n    beq _020755D6\n    mov r0, #0x52\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, r6, #0\n    mov r2, #1\n    mov r3, #5\n    bl SavePalPad_Merge\n    ldr r0, _020755E0 ; =0x00001020\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    _020755E0: .word 0x00001020"
    );
    #endif
}

u8 sub_020755E4(void) {
    return 0x88;
}
