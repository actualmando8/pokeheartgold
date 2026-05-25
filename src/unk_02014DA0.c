/* Decompiled from asm/unk_02014DA0.s */
#include "global.h"

void sub_02014DA0(void) {
    /* Original at 0x02014DA0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    ldr r2, _02014DB0 ; =_021D10A8\n    add r0, r1, #0\n    add r1, r1, #1\n    stmia r2!, {r0}\n    cmp r1, #0x10\n    blt _02014DA6\n    bx lr\n    _02014DB0: .word _021D10A8"
    );
    #endif
}

void sub_02014DB4(void) {
    /* Original at 0x02014DB4 */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r1, [sp, #8]\n    ldr r1, _02014EA8 ; =_021D10A8\n    add r7, r0, #0\n    add r6, r2, #0\n    str r3, [sp, #0xc]\n    mov r5, #0\n    ldr r0, [r1]\n    cmp r0, #0\n    beq _02014DD2\n    add r5, r5, #1\n    add r1, r1, #4\n    cmp r5, #0x10\n    blt _02014DC4\n    cmp r5, #0x10\n    blt _02014DDC\n    add sp, #0x10\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x2c]\n    mov r1, #0xdc\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _02014DEC\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xdc\n    bl memset\n    add r2, r4, #0\n    ldr r0, [sp, #8]\n    str r7, [r4, #0x18]\n    ldr r3, _02014EAC ; =_020F6090\n    str r0, [r4, #0x1c]\n    ldmia r3!, {r0, r1}\n    add r2, #0x34\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    ldr r3, _02014EB0 ; =_020F6078\n    str r0, [r2]\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x40\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    ldr r3, _02014EB4 ; =_020F6084\n    str r0, [r2]\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x4c\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    mov r1, #0\n    str r0, [r2]\n    ldr r2, [sp, #0xc]\n    add r0, r6, #0\n    bl memset\n    ldr r0, [sp, #0xc]\n    str r6, [r4, #0xc]\n    str r6, [r4, #0x10]\n    add r0, r6, r0\n    str r0, [r4, #0x14]\n    add r0, r4, #0\n    add r0, #0xda\n    strb r5, [r0]\n    ldr r0, _02014EA8 ; =_021D10A8\n    lsl r5, r5, #2\n    str r4, [r0, r5]\n    ldr r0, [sp, #0x28]\n    cmp r0, #1\n    bne _02014E80\n    ldr r0, [sp, #0x2c]\n    bl Camera_New\n    str r0, [r4, #0x20]\n    mov r3, #0\n    str r3, [r4, #0x24]\n    str r3, [r4, #0x28]\n    mov r0, #2\n    str r3, [r4, #0x2c]\n    lsl r0, r0, #0xc\n    strh r0, [r4, #0x30]\n    str r3, [sp]\n    ldr r0, [r4, #0x20]\n    ldr r1, _02014EAC ; =_020F6090\n    str r0, [sp, #4]\n    ldrh r2, [r4, #0x30]\n    ldr r0, _02014EB4 ; =_020F6084\n    bl Camera_Init_FromTargetAndPos\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xdb\n    strb r1, [r0]\n    ldr r0, [r4, #0x20]\n    bl Camera_SetStaticPtr\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0x3f\n    str r0, [sp, #4]\n    ldr r0, _02014EB8 ; =_020F609C\n    mov r1, #0x14\n    ldr r0, [r0, r5]\n    mov r2, #0xc8\n    mov r3, #5\n    bl SPL_Init\n    str r0, [r4]\n    ldr r1, _02014EB0 ; =_020F6078\n    add r0, r4, #0\n    bl sub_020154E4\n    add r0, r4, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02014EA8: .word _021D10A8\n    _02014EAC: .word _020F6090\n    _02014EB0: .word _020F6078\n    _02014EB4: .word _020F6084\n    _02014EB8: .word _020F609C"
    );
    #endif
}

void sub_02014EBC(void) {
    /* Original at 0x02014EBC */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_020154B8\n    add r0, r5, #0\n    add r0, #0xd8\n    ldrb r1, [r0]\n    mov r0, #1\n    tst r0, r1\n    beq _02014EDA\n    add r0, r5, #0\n    add r0, #0x58\n    bl NNS_GfdSetFrmTexVramState\n    b _02014EFA\n    mov r0, #2\n    tst r0, r1\n    beq _02014EFA\n    mov r6, #0\n    add r4, r5, #0\n    add r7, r6, #0\n    ldr r0, [r4, #0x58]\n    cmp r0, #0\n    beq _02014EF2\n    bl NNS_GfdFreeLnkTexVram\n    str r7, [r4, #0x58]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #0x10\n    blt _02014EE6\n    add r0, r5, #0\n    add r0, #0xd8\n    ldrb r1, [r0]\n    mov r0, #4\n    tst r0, r1\n    beq _02014F10\n    add r0, r5, #0\n    add r0, #0x98\n    bl NNS_GfdSetFrmPlttVramState\n    b _02014F38\n    mov r0, #8\n    tst r0, r1\n    beq _02014F38\n    mov r6, #0\n    add r4, r5, #0\n    add r7, r6, #0\n    add r0, r4, #0\n    add r0, #0x98\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02014F30\n    bl NNS_GfdFreeLnkPlttVram\n    add r0, r4, #0\n    add r0, #0x98\n    str r7, [r0]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #0x10\n    blt _02014F1C\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0xd8\n    strb r1, [r0]\n    str r1, [r5, #8]\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _02014F50\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r5, #4]\n    ldr r2, _02014F80 ; =_021D10A8\n    mov r1, #0\n    ldr r0, [r2]\n    cmp r0, r5\n    bne _02014F64\n    ldr r0, _02014F80 ; =_021D10A8\n    mov r2, #0\n    lsl r1, r1, #2\n    str r2, [r0, r1]\n    b _02014F6C\n    add r1, r1, #1\n    add r2, r2, #4\n    cmp r1, #0x10\n    blt _02014F54\n    ldr r0, [r5, #0x20]\n    cmp r0, #0\n    beq _02014F76\n    bl Camera_Delete\n    add r0, r5, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02014F80: .word _021D10A8"
    );
    #endif
}

void sub_02014F84(void) {
    sub_02014EBC(0);
}

void sub_02014FA4(void) {
    /* Original at 0x02014FA4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02014FCC ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #8]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _02014FBC\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _02014FC8\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _02014FCC: .word _021D10A0"
    );
    #endif
}

void sub_02014FD0(void) {
    /* Original at 0x02014FD0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02014FF8 ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0xc]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _02014FE8\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _02014FF4\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _02014FF8: .word _021D10A0"
    );
    #endif
}

void sub_02014FFC(void) {
    /* Original at 0x02014FFC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02015024 ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0x10]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _02015014\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _02015020\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _02015024: .word _021D10A0"
    );
    #endif
}

void sub_02015028(void) {
    /* Original at 0x02015028 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02015050 ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0x14]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _02015040\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _0201504C\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _02015050: .word _021D10A0"
    );
    #endif
}

void sub_02015054(void) {
    /* Original at 0x02015054 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0201507C ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0x18]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _0201506C\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _02015078\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _0201507C: .word _021D10A0"
    );
    #endif
}

void sub_02015080(void) {
    /* Original at 0x02015080 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _020150A8 ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0x1c]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _02015098\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _020150A4\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _020150A8: .word _021D10A0"
    );
    #endif
}

void sub_020150AC(void) {
    /* Original at 0x020150AC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _020150D4 ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0x20]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _020150C4\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _020150D0\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _020150D4: .word _021D10A0"
    );
    #endif
}

void sub_020150D8(void) {
    /* Original at 0x020150D8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02015100 ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0x24]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _020150F0\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _020150FC\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _02015100: .word _021D10A0"
    );
    #endif
}

void sub_02015104(void) {
    /* Original at 0x02015104 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0201512C ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0x28]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _0201511C\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _02015128\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _0201512C: .word _021D10A0"
    );
    #endif
}

void sub_02015130(void) {
    /* Original at 0x02015130 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02015158 ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0x2c]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _02015148\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _02015154\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _02015158: .word _021D10A0"
    );
    #endif
}

void sub_0201515C(void) {
    /* Original at 0x0201515C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02015184 ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0x30]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _02015174\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _02015180\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _02015184: .word _021D10A0"
    );
    #endif
}

void sub_02015188(void) {
    /* Original at 0x02015188 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _020151B0 ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0x34]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _020151A0\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _020151AC\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _020151B0: .word _021D10A0"
    );
    #endif
}

void sub_020151B4(void) {
    /* Original at 0x020151B4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _020151DC ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0x38]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _020151CC\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _020151D8\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _020151DC: .word _021D10A0"
    );
    #endif
}

void sub_020151E0(void) {
    /* Original at 0x020151E0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02015208 ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0x3c]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _020151F8\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _02015204\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _02015208: .word _021D10A0"
    );
    #endif
}

void sub_0201520C(void) {
    /* Original at 0x0201520C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02015234 ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0x40]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _02015224\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _02015230\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _02015234: .word _021D10A0"
    );
    #endif
}

void sub_02015238(void) {
    /* Original at 0x02015238 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02015260 ; =_021D10A0\n    mov r2, #3\n    ldr r1, [r1, #0x44]\n    ldr r4, [r1, #0x10]\n    add r0, r4, r0\n    add r3, r0, #0\n    and r3, r2\n    beq _02015250\n    mov r2, #4\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1, #0x10]\n    ldr r1, [r1, #0x14]\n    cmp r0, r1\n    blo _0201525C\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _02015260: .word _021D10A0"
    );
    #endif
}

void sub_02015264(void) {
    AllocAndReadWholeNarcMemberByIdPair();
}

void sub_0201526C(void) {
    /* Original at 0x0201526C */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r6, r1, #0\n    add r4, r2, #0\n    add r7, r3, #0\n    cmp r0, #0\n    bne _02015280\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _0201528A\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0xd8\n    strb r4, [r0]\n    mov r0, #1\n    tst r0, r4\n    beq _020152A0\n    add r0, r5, #0\n    add r0, #0x58\n    bl NNS_GfdGetFrmTexVramState\n    b _020152B6\n    mov r0, #2\n    tst r0, r4\n    beq _020152B6\n    mov r1, #0\n    add r2, r5, #0\n    add r0, r1, #0\n    add r1, r1, #1\n    str r0, [r2, #0x58]\n    add r2, r2, #4\n    cmp r1, #0x10\n    blt _020152AC\n    mov r0, #4\n    tst r0, r4\n    beq _020152C6\n    add r0, r5, #0\n    add r0, #0x98\n    bl NNS_GfdGetFrmPlttVramState\n    b _020152E0\n    mov r0, #8\n    tst r0, r4\n    beq _020152E0\n    mov r2, #0\n    add r3, r5, #0\n    add r1, r2, #0\n    add r0, r3, #0\n    add r0, #0x98\n    add r2, r2, #1\n    add r3, r3, #4\n    str r1, [r0]\n    cmp r2, #0x10\n    blt _020152D2\n    str r6, [r5, #4]\n    cmp r7, #1\n    bne _020152EE\n    add r0, r5, #0\n    bl sub_02015300\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _020152FC ; =sub_02015340\n    add r1, r5, #0\n    mov r2, #5\n    bl SysTask_CreateOnVWaitQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020152FC: .word sub_02015340"
    );
    #endif
}

void sub_02015300(void) {
    /* Original at 0x02015300 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    bl SPL_Load\n    ldr r0, _0201533C ; =_021D10A0\n    str r4, [r0]\n    ldr r1, [r4, #0x18]\n    ldr r0, [r4]\n    cmp r1, #0\n    bne _0201531E\n    bl SPL_LoadTexByVRAMManager\n    b _02015322\n    bl SPL_LoadTexByCallbackFunction\n    ldr r1, [r4, #0x1c]\n    ldr r0, [r4]\n    cmp r1, #0\n    bne _02015330\n    bl SPL_LoadTexPlttByVRAMManager\n    b _02015334\n    bl SPL_LoadTexPlttByCallbackFunction\n    ldr r0, _0201533C ; =_021D10A0\n    mov r1, #0\n    str r1, [r0]\n    pop {r4, pc}\n    _0201533C: .word _021D10A0"
    );
    #endif
}

void sub_02015340(void) {
    /* Original at 0x02015340 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl sub_02015300\n    add r0, r4, #0\n    bl SysTask_Destroy\n    pop {r4, pc}"
    );
    #endif
}

void sub_02015354(void) {
    /* Original at 0x02015354 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _0201535E\n    bl GF_AssertFail\n    ldr r0, _02015390 ; =_021D10A0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0201536A\n    bl GF_AssertFail\n    ldr r0, _02015390 ; =_021D10A0\n    mov r1, #0\n    ldr r3, [r0]\n    add r2, r3, #0\n    ldr r0, [r2, #0x58]\n    cmp r0, #0\n    bne _02015380\n    lsl r0, r1, #2\n    add r0, r3, r0\n    str r4, [r0, #0x58]\n    pop {r4, pc}\n    add r1, r1, #1\n    add r2, r2, #4\n    cmp r1, #0x10\n    blt _02015372\n    bl GF_AssertFail\n    pop {r4, pc}\n    nop\n    _02015390: .word _021D10A0"
    );
    #endif
}

void sub_02015394(void) {
    /* Original at 0x02015394 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _0201539E\n    bl GF_AssertFail\n    ldr r0, _020153D4 ; =_021D10A0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _020153AA\n    bl GF_AssertFail\n    ldr r0, _020153D4 ; =_021D10A0\n    mov r1, #0\n    ldr r3, [r0]\n    add r2, r3, #0\n    add r0, r2, #0\n    add r0, #0x98\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _020153C6\n    lsl r0, r1, #2\n    add r0, r3, r0\n    add r0, #0x98\n    str r4, [r0]\n    pop {r4, pc}\n    add r1, r1, #1\n    add r2, r2, #4\n    cmp r1, #0x10\n    blt _020153B2\n    bl GF_AssertFail\n    pop {r4, pc}\n    _020153D4: .word _021D10A0"
    );
    #endif
}

void sub_020153D8(void) {
    /* Original at 0x020153D8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x20]\n    cmp r1, #0\n    beq _020153F4\n    add r0, #0xdb\n    ldrb r0, [r0]\n    bl Camera_ApplyPerspectiveType\n    ldr r0, [r4, #0x20]\n    bl Camera_SetStaticPtr\n    bl Camera_PushLookAtToNNSGlb\n    bl NNS_G3dGlbFlushP\n    ldr r0, [r4]\n    ldr r1, _02015410 ; =NNS_G3dGlb + 0x4C\n    bl SPL_Draw\n    ldr r0, [r4, #0x20]\n    cmp r0, #0\n    beq _0201540A\n    bl Camera_UnsetStaticPtr\n    bl NNS_G3dGlbFlushP\n    pop {r4, pc}\n    _02015410: .word NNS_G3dGlb + 0x4C"
    );
    #endif
}

void sub_02015414(void) {
    SPL_Calc();
}

void sub_02015420(void) {
    /* Original at 0x02015420 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    ldr r3, _02015438 ; =_021D10A8\n    add r2, r0, #0\n    ldr r1, [r3]\n    cmp r1, #0\n    beq _0201542E\n    add r0, r0, #1\n    add r2, r2, #1\n    add r3, r3, #4\n    cmp r2, #0x10\n    blt _02015426\n    bx lr\n    _02015438: .word _021D10A8"
    );
    #endif
}

void sub_0201543C(void) {
    /* Original at 0x0201543C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r4, #0\n    ldr r5, _0201545C ; =_021D10A8\n    add r6, r4, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _02015450\n    bl sub_020153D8\n    add r4, r4, #1\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, #0x10\n    blt _02015444\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _0201545C: .word _021D10A8"
    );
    #endif
}

void sub_02015460(void) {
    /* Original at 0x02015460 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r4, #0\n    ldr r5, _02015480 ; =_021D10A8\n    add r6, r4, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _02015474\n    bl sub_02015414\n    add r4, r4, #1\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, #0x10\n    blt _02015468\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _02015480: .word _021D10A8"
    );
    #endif
}

void sub_02015484(void) {
    SPL_Create();
}

void sub_02015494(void) {
    SPL_CreateWithInitialize(0);
}

void sub_020154B0(void) {
    /* Original at 0x020154B0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    ldr r0, [r0, #8]\n    bx lr"
    );
    #endif
}

void sub_020154B8(void) {
    SPL_DeleteAll();
}

void sub_020154C4(void) {
    SPL_Delete();
}

void sub_020154D0(void) {
    /* Original at 0x020154D0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void sub_020154D4(void) {
    /* Original at 0x020154D4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0x40\n    add r3, r1, #0\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    bx lr"
    );
    #endif
}

void sub_020154E4(void) {
    Camera_SetLookAtCamUp();
}

void sub_02015504(void) {
    /* Original at 0x02015504 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0201550C ; =_021D10A0\n    ldr r0, [r0, #4]\n    bx lr\n    nop\n    _0201550C: .word _021D10A0"
    );
    #endif
}

void sub_02015510(void) {
    /* Original at 0x02015510 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _02015520 ; =_020F6078\n    add r3, r0, #0\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    bx lr\n    nop\n    _02015520: .word _020F6078"
    );
    #endif
}

void sub_02015524(void) {
    /* Original at 0x02015524 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void sub_02015528(void) {
    /* Original at 0x02015528 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xdb\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02015530(void) {
    /* Original at 0x02015530 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xdb\n    ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_02015538(void) {
    /* Original at 0x02015538 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0x50\n    ldrh r2, [r2]\n    strh r2, [r1]\n    add r2, r0, #0\n    add r2, #0x52\n    ldrh r2, [r2]\n    add r0, #0x54\n    strh r2, [r1, #2]\n    ldrh r0, [r0]\n    strh r0, [r1, #4]\n    bx lr"
    );
    #endif
}

void sub_02015550(void) {
    /* Original at 0x02015550 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    ldr r0, [r0, #0x20]\n    add r4, r1, #0\n    ldrh r2, [r0, #0x1c]\n    cmp r2, #0\n    bne _02015562\n    mov r0, #0\n    pop {r4, r5, r6, r7}\n    bx lr\n    mov r1, #0\n    cmp r2, #0\n    ble _020155EC\n    ldr r3, [r0, #0x18]\n    ldr r7, _020155F4 ; =spl_calc_random\n    ldr r0, _020155F8 ; =spl_calc_gravity\n    cmp r3, #0\n    beq _020155E4\n    cmp r4, #5\n    bhi _020155DE\n    add r5, r4, r4\n    add r5, pc\n    ldrh r5, [r5, #6]\n    lsl r5, r5, #0x10\n    asr r5, r5, #0x10\n    add pc, r5\n    _02015582: ; jump table\n    ldr r5, [r3]\n    cmp r5, r0\n    bne _020155E4\n    ldr r0, [r3, #4]\n    pop {r4, r5, r6, r7}\n    bx lr\n    ldr r5, [r3]\n    cmp r5, r7\n    bne _020155E4\n    ldr r0, [r3, #4]\n    pop {r4, r5, r6, r7}\n    bx lr\n    ldr r6, [r3]\n    ldr r5, _020155FC ; =spl_calc_magnet\n    cmp r6, r5\n    bne _020155E4\n    ldr r0, [r3, #4]\n    pop {r4, r5, r6, r7}\n    bx lr\n    ldr r6, [r3]\n    ldr r5, _02015600 ; =spl_calc_spin\n    cmp r6, r5\n    bne _020155E4\n    ldr r0, [r3, #4]\n    pop {r4, r5, r6, r7}\n    bx lr\n    ldr r6, [r3]\n    ldr r5, _02015604 ; =spl_calc_scfield\n    cmp r6, r5\n    bne _020155E4\n    ldr r0, [r3, #4]\n    pop {r4, r5, r6, r7}\n    bx lr\n    ldr r6, [r3]\n    ldr r5, _02015608 ; =spl_calc_convergence\n    cmp r6, r5\n    bne _020155E4\n    ldr r0, [r3, #4]\n    pop {r4, r5, r6, r7}\n    bx lr\n    mov r0, #0\n    pop {r4, r5, r6, r7}\n    bx lr\n    add r1, r1, #1\n    add r3, #8\n    cmp r1, r2\n    blt _0201556E\n    mov r0, #0\n    pop {r4, r5, r6, r7}\n    bx lr\n    nop\n    _020155F4: .word spl_calc_random\n    _020155F8: .word spl_calc_gravity\n    _020155FC: .word spl_calc_magnet\n    _02015600: .word spl_calc_spin\n    _02015604: .word spl_calc_scfield\n    _02015608: .word spl_calc_convergence"
    );
    #endif
}

void sub_0201560C(void) {
    sub_02015550(0);
}

void sub_02015628(void) {
    sub_02015550(2);
}

void sub_02015640(void) {
    /* Original at 0x02015640 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    mov r1, #2\n    bl sub_02015550\n    add r2, r0, #0\n    bne _02015666\n    add r2, sp, #0\n    mov r0, #0\n    str r0, [r2]\n    str r0, [r2, #4]\n    str r0, [r2, #8]\n    ldmia r2!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldr r0, [r2]\n    add sp, #0xc\n    str r0, [r4]\n    pop {r3, r4, pc}\n    ldmia r2!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r4]\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_02015674(void) {
    sub_02015550(0, 2);
}

void sub_0201568C(void) {
    sub_02015550(0, 0xc, 2);
}

void sub_020156A8(void) {
    sub_02015550(3);
}

void sub_020156BC(void) {
    sub_02015550(0, 3);
}

void sub_020156D8(void) {
    sub_02015550(3);
}

void sub_020156EC(void) {
    sub_02015550(0, 3);
}

void sub_02015708(void) {
    sub_02015550(5);
}

void sub_02015720(void) {
    /* Original at 0x02015720 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    mov r1, #5\n    bl sub_02015550\n    add r2, r0, #0\n    bne _02015746\n    add r2, sp, #0\n    mov r0, #0\n    str r0, [r2]\n    str r0, [r2, #4]\n    str r0, [r2, #8]\n    ldmia r2!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldr r0, [r2]\n    add sp, #0xc\n    str r0, [r4]\n    pop {r3, r4, pc}\n    ldmia r2!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r4]\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_02015754(void) {
    sub_02015550(0, 5);
}

void sub_0201576C(void) {
    sub_02015550(0, 0xc, 5);
}

void ListMenuCursorNew(void) {
    /* Original at 0x02015788 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #8\n    add r5, r0, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    beq _020157AA\n    ldr r0, _020157B0 ; =0x0001020F\n    add r1, r5, #0\n    str r0, [r4]\n    mov r0, #4\n    bl String_New\n    ldr r1, _020157B4 ; =_020F60DC\n    str r0, [r4, #4]\n    bl CopyU16ArrayToString\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _020157B0: .word 0x0001020F\n    _020157B4: .word _020F60DC"
    );
    #endif
}

void DestroyListMenuCursorObj(void) {
    /* Original at 0x020157B8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _020157C2\n    bl GF_AssertFail\n    cmp r4, #0\n    beq _020157D6\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _020157D0\n    bl String_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ListMenuCursorSetColor(void) {
    GF_AssertFail();
}

void ListMenuUpdateCursorObj(void) {
    /* Original at 0x020157F0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [r6]\n    add r5, r1, #0\n    str r0, [sp, #8]\n    mov r1, #0\n    add r4, r2, #0\n    str r1, [sp, #0xc]\n    ldr r2, [r6, #4]\n    add r0, r5, #0\n    add r3, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}
