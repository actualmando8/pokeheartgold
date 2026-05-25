/* Decompiled from asm/unk_0205A44C.s */
#include "global.h"

void sub_0205A44C(void) {
    /* Original at 0x0205A44C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r0, r3, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    mov r1, #1\n    str r1, [r0, #0x2c]\n    add r3, #0x80\n    ldrb r1, [r2]\n    ldr r0, [r3]\n    str r1, [r0, #0x40]\n    ldrb r0, [r2]\n    cmp r0, #4\n    bne _0205A46A\n    bl sub_020388E0\n    pop {r3, pc}"
    );
    #endif
}

void sub_0205A46C(void) {
    /* Original at 0x0205A46C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "add r3, #0x80\n    ldr r0, [r3]\n    mov r1, #1\n    str r1, [r0, #0x44]\n    bx lr"
    );
    #endif
}

void sub_0205A478(void) {
    /* Original at 0x0205A478 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x44]\n    bx lr"
    );
    #endif
}

void sub_0205A47C(void) {
    sub_02037030(0, 0x68, 0);
}

void sub_0205A498(void) {
    /* Original at 0x0205A498 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    bl sub_0203769C\n    mov r1, #1\n    eor r0, r1\n    bl sub_02034818\n    ldr r0, _0205A4B0 ; =0x0000066A\n    mov r1, #1\n    strh r1, [r4, r0]\n    pop {r4, pc}\n    _0205A4B0: .word 0x0000066A"
    );
    #endif
}

void sub_0205A4B4(void) {
    /* Original at 0x0205A4B4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r1, #0x80\n    ldr r1, [r1]\n    lsl r0, r0, #2\n    add r1, r1, r0\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bx lr"
    );
    #endif
}

void sub_0205A4C4(void) {
    /* Original at 0x0205A4C4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "add r3, #0x80\n    ldr r1, [r3]\n    ldrb r2, [r2]\n    add r1, r1, r0\n    ldr r0, _0205A4D4 ; =0x00000176\n    strb r2, [r1, r0]\n    bx lr\n    nop\n    _0205A4D4: .word 0x00000176"
    );
    #endif
}

void sub_0205A4D8(void) {
    /* Original at 0x0205A4D8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0203769C\n    ldr r2, _0205A504 ; =0x00000176\n    add r1, r4, r0\n    ldrb r1, [r1, r2]\n    cmp r1, #2\n    bne _0205A4EE\n    mov r0, #1\n    pop {r4, pc}\n    mov r1, #1\n    eor r0, r1\n    add r0, r4, r0\n    ldrb r0, [r0, r2]\n    cmp r0, #2\n    bne _0205A4FE\n    mov r0, #2\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0205A504: .word 0x00000176"
    );
    #endif
}

void sub_0205A508(void) {
    sub_02037030(0x65, 1);
}

void sub_0205A51C(void) {
    /* Original at 0x0205A51C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0205A540 ; =_020FC824\n    mov r2, #0\n    ldrh r1, [r3]\n    cmp r1, r0\n    bgt _0205A530\n    add r1, r1, #4\n    cmp r1, r0\n    ble _0205A530\n    add r0, r2, #0\n    bx lr\n    add r2, r2, #1\n    add r3, r3, #2\n    cmp r2, #0xa\n    blt _0205A520\n    mov r0, #0\n    mvn r0, r0\n    bx lr\n    nop\n    _0205A540: .word _020FC824"
    );
    #endif
}

void sub_0205A544(void) {
    /* Original at 0x0205A544 */
    /* Requires manual decompilation - 150 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r6, r0, #0\n    cmp r4, #9\n    ble _0205A564\n    add r0, r4, #0\n    bl sub_0205A51C\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0205A566\n    bl GF_AssertFail\n    b _0205A566\n    add r5, r4, #0\n    mov r0, #0x11\n    lsl r0, r0, #4\n    add r6, r6, r0\n    lsl r7, r5, #2\n    ldr r0, [r6, r7]\n    cmp r0, #0\n    bne _0205A578\n    mov r0, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl sub_02035798\n    ldr r5, [r6, r7]\n    add r5, #0x50\n    add r5, #0x30\n    cmp r0, #0\n    bne _0205A58C\n    mov r0, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #9\n    ble _0205A5A6\n    sub r4, #0xa\n    lsr r2, r4, #0x1f\n    lsl r1, r4, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    add r0, r5, r0\n    ldrb r0, [r0, #0x18]\n    asr r4, r0, #7\n    b _0205A5AC\n    bl PlayerProfile_GetTrainerGender\n    add r4, r0, #0\n    ldrb r0, [r5, #0x1c]\n    cmp r0, #0xd\n    bhi _0205A68A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0205A5BE: ; jump table\n    ldr r0, _0205A690 ; =_020FC7FC\n    lsl r1, r4, #2\n    ldr r0, [r0, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl LCRandom\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    lsl r2, r0, #3\n    ldr r0, _0205A694 ; =_020FC814\n    lsl r1, r4, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl LCRandom\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    lsl r2, r0, #3\n    ldr r0, _0205A698 ; =_020FC8D4\n    lsl r1, r4, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl LCRandom\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    lsl r2, r0, #3\n    ldr r0, _0205A69C ; =_020FC804\n    lsl r1, r4, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl LCRandom\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    lsl r2, r0, #3\n    ldr r0, _0205A6A0 ; =_020FC8B4\n    lsl r1, r4, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl LCRandom\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    lsl r2, r0, #3\n    ldr r0, _0205A6A4 ; =_020FC8F4\n    lsl r1, r4, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl LCRandom\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    lsl r2, r0, #3\n    ldr r0, _0205A6A8 ; =_020FC914\n    lsl r1, r4, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0205A690: .word _020FC7FC\n    _0205A694: .word _020FC814\n    _0205A698: .word _020FC8D4\n    _0205A69C: .word _020FC804\n    _0205A6A0: .word _020FC8B4\n    _0205A6A4: .word _020FC8F4\n    _0205A6A8: .word _020FC914"
    );
    #endif
}

void sub_0205A6AC(void) {
    /* Original at 0x0205A6AC */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    bl sub_0203769C\n    bl sub_020348A8\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    bl sub_0203769C\n    mov r1, #1\n    eor r0, r1\n    bl sub_020348A8\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    bl sub_0203769C\n    bl sub_020348CC\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    bl sub_0203769C\n    mov r1, #1\n    eor r0, r1\n    bl sub_020348CC\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r4, #0\n    bne _0205A6F0\n    mov r0, #0xf\n    pop {r3, r4, r5, r6, r7, pc}\n    beq _0205A70C\n    ldr r0, [sp]\n    mov r1, #3\n    add r2, r4, #0\n    bl BufferCountryName\n    cmp r5, #0\n    beq _0205A70C\n    ldr r0, [sp]\n    mov r1, #4\n    add r2, r4, #0\n    add r3, r5, #0\n    bl BufferCityName\n    cmp r7, r4\n    beq _0205A724\n    cmp r5, #0\n    bne _0205A718\n    mov r0, #0xd\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r6, r5\n    bne _0205A720\n    mov r0, #0xd\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xc\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r6, r5\n    beq _0205A72C\n    mov r0, #0xe\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xf\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205A730(void) {
    sub_0205A6AC();
}

void sub_0205A750(void) {
    /* Original at 0x0205A750 */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r6, r3, #0\n    cmp r4, #0\n    bne _0205A764\n    sub r1, r1, #1\n    bl sub_0205A544\n    pop {r4, r5, r6, pc}\n    sub r0, r1, #1\n    bl sub_02035798\n    cmp r0, #0\n    bne _0205A780\n    mov r0, #1\n    add r1, r0, #0\n    bl sub_020398D4\n    mov r0, #1\n    bl sub_02039AD8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    bl PlayerProfile_GetTrainerGender\n    add r1, r0, #0\n    cmp r4, #0x1a\n    bhi _0205A860\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0205A796: ; jump table\n    ldr r0, [r5, #0x34]\n    add r2, r6, #0\n    sub r0, r0, #1\n    bl sub_0205A730\n    pop {r4, r5, r6, pc}\n    ldr r0, _0205A868 ; =_020FC7D4\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    pop {r4, r5, r6, pc}\n    ldr r0, [r5, #0x34]\n    cmp r0, #0\n    bne _0205A7EA\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    lsl r2, r0, #3\n    ldr r0, _0205A86C ; =_020FC95C\n    lsl r1, r1, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    pop {r4, r5, r6, pc}\n    sub r4, #0x13\n    ldr r0, _0205A870 ; =_020FC880\n    lsl r2, r4, #3\n    lsl r1, r1, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    pop {r4, r5, r6, pc}\n    sub r0, r4, #3\n    lsl r2, r0, #3\n    ldr r0, _0205A874 ; =_020FC934\n    lsl r1, r1, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    pop {r4, r5, r6, pc}\n    sub r4, #0xa\n    ldr r0, _0205A878 ; =_020FC838\n    lsl r2, r4, #3\n    lsl r1, r1, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    pop {r4, r5, r6, pc}\n    sub r4, #0xd\n    ldr r0, _0205A87C ; =_020FC850\n    lsl r2, r4, #3\n    lsl r1, r1, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    pop {r4, r5, r6, pc}\n    sub r4, #0x10\n    ldr r0, _0205A880 ; =_020FC868\n    lsl r2, r4, #3\n    lsl r1, r1, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    pop {r4, r5, r6, pc}\n    ldr r0, _0205A884 ; =_020FC7E4\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    pop {r4, r5, r6, pc}\n    ldr r0, _0205A888 ; =_020FC7DC\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    pop {r4, r5, r6, pc}\n    ldr r0, _0205A88C ; =_020FC7EC\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    pop {r4, r5, r6, pc}\n    mov r0, #0xda\n    pop {r4, r5, r6, pc}\n    ldr r0, _0205A890 ; =_020FC7F4\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    mov r0, #0x28\n    pop {r4, r5, r6, pc}\n    _0205A868: .word _020FC7D4\n    _0205A86C: .word _020FC95C\n    _0205A870: .word _020FC880\n    _0205A874: .word _020FC934\n    _0205A878: .word _020FC838\n    _0205A87C: .word _020FC850\n    _0205A880: .word _020FC868\n    _0205A884: .word _020FC7E4\n    _0205A888: .word _020FC7DC\n    _0205A88C: .word _020FC7EC\n    _0205A890: .word _020FC7F4"
    );
    #endif
}

void sub_0205A894(void) {
    /* Original at 0x0205A894 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl sub_0203769C\n    mov r1, #1\n    eor r0, r1\n    bl sub_02034818\n    add r4, r0, #0\n    bne _0205A8AA\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl PlayerProfile_GetVersion\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205A8B4(void) {
    /* Original at 0x0205A8B4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r7, #1\n    add r0, r7, #0\n    sub r4, r7, #1\n    bl sub_02034818\n    add r6, r0, #0\n    beq _0205A8F2\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0205A8FC\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerID\n    lsl r1, r4, #2\n    str r0, [r5, r1]\n    add r0, r6, #0\n    bl PlayerProfile_GetAvatar\n    str r0, [sp]\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerGender\n    lsl r1, r0, #7\n    ldr r0, [sp]\n    orr r1, r0\n    add r0, r5, r4\n    strb r1, [r0, #0x18]\n    b _0205A8FC\n    lsl r1, r4, #2\n    mov r0, #0\n    str r0, [r5, r1]\n    add r1, r5, r4\n    strb r0, [r1, #0x18]\n    add r7, r7, #1\n    cmp r7, #5\n    blt _0205A8BA\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205A904(void) {
    /* Original at 0x0205A904 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x20\n    add r4, r0, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x20\n    bl MI_CpuFill8\n    cmp r4, #0xd\n    bhi _0205A98E\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0205A924: ; jump table\n    add r0, sp, #0\n    mov r1, #2\n    bl sub_0205A8B4\n    b _0205A98E\n    add r0, sp, #0\n    mov r1, #2\n    bl sub_0205A8B4\n    b _0205A98E\n    add r0, sp, #0\n    mov r1, #5\n    bl sub_0205A8B4\n    b _0205A98E\n    add r0, sp, #0\n    mov r1, #4\n    bl sub_0205A8B4\n    b _0205A98E\n    add r0, sp, #0\n    mov r1, #5\n    bl sub_0205A8B4\n    b _0205A98E\n    add r0, sp, #0\n    mov r1, #4\n    bl sub_0205A8B4\n    b _0205A98E\n    add r0, sp, #0\n    mov r1, #5\n    bl sub_0205A8B4\n    b _0205A98E\n    add r0, sp, #0\n    mov r1, #4\n    bl sub_0205A8B4\n    add r0, sp, #0\n    strb r4, [r0, #0x1c]\n    add r0, sp, #0\n    bl sub_02035854\n    bl sub_0203588C\n    add sp, #0x20\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205A9A0(void) {
    /* Original at 0x0205A9A0 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r3, #0\n    mov r0, #0x11\n    add r6, r1, #0\n    add r2, r3, #0\n    add r4, r5, #0\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _0205A9B8\n    add r3, r3, #1\n    add r2, r2, #1\n    add r4, r4, #4\n    cmp r2, #0xa\n    blt _0205A9B0\n    cmp r3, #0\n    beq _0205A9C8\n    mov r0, #0xa6\n    pop {r4, r5, r6, pc}\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl MailMsg_IsInit\n    cmp r0, #0\n    bne _0205A9DA\n    mov r0, #0xa7\n    pop {r4, r5, r6, pc}\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl MailMsg_GetMsgBank\n    cmp r0, #4\n    beq _0205AA0C\n    ldr r0, [r5, #8]\n    bl PlayerProfile_GetAvatar\n    add r4, r0, #0\n    ldr r0, [r5, #8]\n    bl PlayerProfile_GetTrainerGender\n    add r1, r4, #0\n    mov r2, #2\n    bl GetUnionRoomAvatarAttrBySprite\n    add r2, r0, #0\n    add r0, r6, #0\n    mov r1, #0\n    bl BufferTrainerClassName\n    mov r0, #0xa8\n    pop {r4, r5, r6, pc}\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl MailMsg_GetMsgNo\n    add r4, r0, #0\n    cmp r4, #0x14\n    blt _0205AA1E\n    mov r4, #0\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl MailMsg_GetFieldI\n    add r2, r0, #0\n    ldr r0, _0205AA44 ; =0x0000FFFF\n    cmp r2, r0\n    beq _0205AA3A\n    add r0, r6, #0\n    mov r1, #0\n    bl BufferECWord\n    ldr r0, _0205AA48 ; =_020FC9D4\n    lsl r1, r4, #2\n    ldr r0, [r0, r1]\n    pop {r4, r5, r6, pc}\n    nop\n    _0205AA44: .word 0x0000FFFF\n    _0205AA48: .word _020FC9D4"
    );
    #endif
}

void sub_0205AA4C(void) {
    /* Original at 0x0205AA4C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r3, #0\n    strb r3, [r0, #0x1c]\n    add r4, r0, #0\n    add r2, r3, #0\n    stmia r4!, {r2}\n    add r1, r0, r3\n    strb r2, [r1, #0x18]\n    strb r2, [r1, #0x10]\n    add r3, r3, #1\n    strb r2, [r1, #0x14]\n    cmp r3, #4\n    blt _0205AA56\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_0205AA6C(void) {
    MailMsg_Copy(0x5e, 6, 1);
}

void sub_0205AA84(void) {
    /* Original at 0x0205AA84 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #6\n    lsl r1, r1, #6\n    ldr r2, [r0, r1]\n    cmp r2, #0\n    bne _0205AA92\n    mov r0, #0\n    bx lr\n    mov r2, #0\n    str r2, [r0, r1]\n    sub r1, #8\n    add r0, r0, r1\n    bx lr"
    );
    #endif
}

void sub_0205AA9C(void) {
    /* Original at 0x0205AA9C */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r2, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    str r3, [sp, #8]\n    ldr r2, _0205AB80 ; =0x000002E2\n    mov r0, #1\n    mov r1, #0x1b\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    add r6, r0, #0\n    cmp r4, #0\n    bne _0205AAC2\n    sub r0, r7, #1\n    bl sub_02035798\n    b _0205AACE\n    bl sub_0203769C\n    mov r1, #1\n    eor r0, r1\n    bl sub_02034818\n    add r4, r0, #0\n    cmp r4, #0\n    bne _0205AADE\n    add r0, r6, #0\n    bl DestroyMsgData\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r1, #0\n    add r2, r4, #0\n    bl BufferPlayersName\n    ldr r2, [sp, #8]\n    add r0, r5, #0\n    mov r1, #1\n    bl BufferPlayersName\n    add r0, r4, #0\n    bl PlayerProfile_GetLanguage\n    add r4, r0, #0\n    cmp r4, #1\n    blt _0205AB1C\n    cmp r4, #7\n    bgt _0205AB1C\n    sub r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #7\n    bhs _0205AB1C\n    lsl r1, r0, #2\n    ldr r0, _0205AB84 ; =_020FC898\n    ldr r1, [r0, r1]\n    cmp r1, #0\n    blt _0205AB1C\n    ldr r0, [sp, #0x20]\n    bl Save_EasyChat_SetGreetingFlag\n    cmp r4, #7\n    bhi _0205AB54\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0205AB2C: ; jump table\n    mov r1, #0xd3\n    b _0205AB56\n    mov r1, #0xd4\n    b _0205AB56\n    mov r1, #0xd5\n    b _0205AB56\n    mov r1, #0xd6\n    b _0205AB56\n    mov r1, #0xd7\n    b _0205AB56\n    mov r1, #0xd8\n    b _0205AB56\n    mov r1, #0xd9\n    add r0, r6, #0\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #2\n    add r2, r7, #0\n    mov r3, #0\n    str r4, [sp, #4]\n    bl BufferString\n    add r0, r7, #0\n    bl Heap_Free\n    add r0, r6, #0\n    bl DestroyMsgData\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0205AB80: .word 0x000002E2\n    _0205AB84: .word _020FC898"
    );
    #endif
}

void sub_0205AB88(void) {
    sub_0205AA4C();
    *((u8*)(r0 + 0x1c)) = 0;
    sub_02035838(r4, 0);
    sub_02035854();
    sub_0203588C();
}

void sub_0205ABB0(void) {
    ((u32*)r0)[0x30] = 0;
    ((u32*)r0)[0x40] = 0;
    ((u32*)r0)[0x44] = 0;
}

void sub_0205ABBC(void) {
    /* Original at 0x0205ABBC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    str r2, [r0, #0x20]\n    str r2, [r0, #0x24]\n    str r2, [r0, #0x2c]\n    str r2, [r0, #0x30]\n    mov r1, #0x5d\n    str r2, [r0, #0x40]\n    lsl r1, r1, #2\n    strh r2, [r0, r1]\n    add r1, #0xc\n    str r2, [r0, r1]\n    str r2, [r0, #0x44]\n    bx lr"
    );
    #endif
}

void sub_0205ABD8(void) {
    /* Original at 0x0205ABD8 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #0\n    bl sub_020691A8\n    mov r1, #0x61\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0\n    bl sub_020691A8\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0\n    bl sub_020691A8\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4, #8]\n    bl PlayerProfile_GetTrainerGender\n    add r5, r0, #0\n    ldr r0, [r4, #8]\n    bl PlayerProfile_GetAvatar\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #0\n    bl GetUnionRoomAvatarAttrBySprite\n    add r3, r0, #0\n    ldr r0, [r4]\n    lsl r3, r3, #0x18\n    str r0, [sp]\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    lsr r3, r3, #0x18\n    str r0, [sp, #4]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    bl sub_02068FC8\n    bl sub_0203769C\n    mov r1, #1\n    eor r0, r1\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0205AC4C(void) {
    /* Original at 0x0205AC4C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205AC70(void) {
    /* Original at 0x0205AC70 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x61\n    add r2, r0, #0\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    ldr r3, _0205AC80 ; =sub_02036FD8\n    mov r0, #0x69\n    ldr r2, _0205AC84 ; =0x0000066C\n    bx r3\n    _0205AC80: .word sub_02036FD8\n    _0205AC84: .word 0x0000066C"
    );
    #endif
}
