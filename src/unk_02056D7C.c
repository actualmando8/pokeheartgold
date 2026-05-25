/* Decompiled from asm/unk_02056D7C.s */
#include "global.h"

void sub_02056D7C(void) {
    /* Original at 0x02056D7C */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    ldr r1, _02056E2C ; =_021D41C4\n    ldr r2, [r1]\n    cmp r2, #0\n    beq _02056D8C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bne _02056D98\n    str r0, [r1]\n    mov r1, #0\n    mov r2, #0xf4\n    bl MI_CpuFill8\n    ldr r0, _02056E2C ; =_021D41C4\n    ldr r2, _02056E30 ; =0x0000FFFF\n    ldr r1, [r0]\n    mov r7, #2\n    str r4, [r1, #0x30]\n    mov r4, #0\n    add r5, r4, #0\n    sub r3, r4, #1\n    add r1, r4, #0\n    ldr r6, [r0]\n    add r6, r6, r5\n    add r6, #0x78\n    strb r3, [r6]\n    ldr r6, [r0]\n    add r6, r6, r5\n    add r6, #0x74\n    strh r2, [r6]\n    ldr r6, [r0]\n    add r6, r6, r5\n    add r6, #0x76\n    strh r2, [r6]\n    ldr r6, [r0]\n    add r6, r6, r5\n    add r6, #0x79\n    strb r7, [r6]\n    ldr r6, [r0]\n    add r6, r6, r5\n    add r6, #0x38\n    strb r3, [r6]\n    ldr r6, [r0]\n    add r6, r6, r5\n    strh r2, [r6, #0x34]\n    ldr r6, [r0]\n    add r6, r6, r5\n    strh r2, [r6, #0x36]\n    ldr r6, [r0]\n    add r6, r6, r5\n    add r6, #0x39\n    strb r7, [r6]\n    ldr r6, [r0]\n    add r5, #8\n    add r6, r6, r4\n    add r6, #0xb4\n    strb r1, [r6]\n    ldr r6, [r0]\n    add r6, r6, r4\n    add r6, #0xbc\n    add r4, r4, #1\n    strb r1, [r6]\n    cmp r4, #8\n    blt _02056DAA\n    ldr r2, _02056E2C ; =_021D41C4\n    ldr r0, [r2]\n    add r0, #0xed\n    strb r1, [r0]\n    ldr r0, [r2]\n    add r0, #0xef\n    strb r1, [r0]\n    ldr r1, [r2]\n    ldr r0, _02056E34 ; =sub_020572DC\n    ldr r1, [r1, #0x30]\n    mov r2, #0xc8\n    bl SysTask_CreateOnMainQueue\n    ldr r1, _02056E2C ; =_021D41C4\n    ldr r1, [r1]\n    str r0, [r1, #0x2c]\n    bl sub_020374E4\n    bl sub_02056EF4\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02056E2C: .word _021D41C4\n    _02056E30: .word 0x0000FFFF\n    _02056E34: .word sub_020572DC"
    );
    #endif
}

void sub_02056E38(void) {
    /* Original at 0x02056E38 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, _02056E5C ; =_021D41C4\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02056E58\n    mov r5, #0\n    mov r4, #1\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    add r1, r4, #0\n    add r2, r4, #0\n    bl sub_0205724C\n    add r5, r5, #1\n    cmp r5, #8\n    blt _02056E46\n    pop {r3, r4, r5, pc}\n    nop\n    _02056E5C: .word _021D41C4"
    );
    #endif
}

void sub_02056E60(void) {
    /* Original at 0x02056E60 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02056E9C ; =_021D41C4\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02056E9A\n    mov r1, #1\n    add r2, #0xec\n    strb r1, [r2]\n    ldr r0, [r0]\n    mov r1, #0\n    add r0, #0xee\n    strb r1, [r0]\n    bl sub_02056EF4\n    mov r0, #1\n    bl sub_0205701C\n    ldr r0, _02056E9C ; =_021D41C4\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetXCoord\n    ldr r0, _02056E9C ; =_021D41C4\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetZCoord\n    pop {r3, pc}\n    _02056E9C: .word _021D41C4"
    );
    #endif
}

void sub_02056EA0(void) {
    /* Original at 0x02056EA0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _02056EDC ; =_021D41C4\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02056EDA\n    mov r4, #0\n    add r6, r4, #0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    add r1, r6, #0\n    add r2, r5, #0\n    bl sub_0205724C\n    add r4, r4, #1\n    cmp r4, #8\n    blt _02056EB0\n    ldr r0, _02056EDC ; =_021D41C4\n    ldr r0, [r0]\n    ldr r0, [r0, #0x2c]\n    bl SysTask_Destroy\n    ldr r0, _02056EDC ; =_021D41C4\n    ldr r0, [r0]\n    bl Heap_Free\n    ldr r0, _02056EDC ; =_021D41C4\n    mov r1, #0\n    str r1, [r0]\n    pop {r4, r5, r6, pc}\n    _02056EDC: .word _021D41C4"
    );
    #endif
}

void sub_02056EE0(void) {
    /* Original at 0x02056EE0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02056EF0 ; =_021D41C4\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02056EEC\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02056EF0: .word _021D41C4"
    );
    #endif
}

void sub_02056EF4(void) {
    /* Original at 0x02056EF4 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl sub_0203769C\n    ldr r1, _02056FCC ; =_021D41C4\n    lsl r0, r0, #2\n    ldr r2, [r1]\n    ldr r1, [r2, #0x30]\n    add r0, r2, r0\n    ldr r1, [r1, #0x40]\n    str r1, [r0, #4]\n    bl sub_0203769C\n    ldr r1, _02056FCC ; =_021D41C4\n    mov r2, #1\n    ldr r1, [r1]\n    add r0, r1, r0\n    add r0, #0x24\n    strb r2, [r0]\n    bl sub_0203769C\n    add r4, r0, #0\n    ldr r0, _02056FCC ; =_021D41C4\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetXCoord\n    ldr r1, _02056FCC ; =_021D41C4\n    ldr r2, [r1]\n    lsl r1, r4, #3\n    add r1, r2, r1\n    add r1, #0x74\n    strh r0, [r1]\n    bl sub_0203769C\n    add r4, r0, #0\n    ldr r0, _02056FCC ; =_021D41C4\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetZCoord\n    ldr r1, _02056FCC ; =_021D41C4\n    ldr r2, [r1]\n    lsl r1, r4, #3\n    add r1, r2, r1\n    add r1, #0x76\n    strh r0, [r1]\n    bl sub_0203769C\n    add r4, r0, #0\n    ldr r0, _02056FCC ; =_021D41C4\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    ldr r1, _02056FCC ; =_021D41C4\n    ldr r2, [r1]\n    lsl r1, r4, #3\n    add r1, r2, r1\n    add r1, #0x78\n    strb r0, [r1]\n    bl sub_0203769C\n    add r4, r0, #0\n    ldr r0, _02056FCC ; =_021D41C4\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetXCoord\n    ldr r1, _02056FCC ; =_021D41C4\n    ldr r2, [r1]\n    lsl r1, r4, #3\n    add r1, r2, r1\n    strh r0, [r1, #0x34]\n    bl sub_0203769C\n    add r4, r0, #0\n    ldr r0, _02056FCC ; =_021D41C4\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetZCoord\n    ldr r1, _02056FCC ; =_021D41C4\n    ldr r2, [r1]\n    lsl r1, r4, #3\n    add r1, r2, r1\n    strh r0, [r1, #0x36]\n    bl sub_0203769C\n    add r4, r0, #0\n    ldr r0, _02056FCC ; =_021D41C4\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    ldr r1, _02056FCC ; =_021D41C4\n    ldr r2, [r1]\n    lsl r1, r4, #3\n    add r1, r2, r1\n    add r1, #0x38\n    strb r0, [r1]\n    pop {r4, pc}\n    nop\n    _02056FCC: .word _021D41C4"
    );
    #endif
}

void sub_02056FD0(void) {
    /* Original at 0x02056FD0 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _02057018 ; =_021D41C4\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r6, r2, #0\n    ldr r0, [r0, #0x30]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    add r1, sp, #0\n    strb r4, [r1]\n    asr r2, r4, #8\n    strb r2, [r1, #1]\n    asr r2, r6, #8\n    strb r6, [r1, #2]\n    strb r2, [r1, #3]\n    strb r0, [r1, #4]\n    cmp r5, #0\n    beq _02057002\n    ldrb r2, [r1, #4]\n    mov r0, #0x80\n    orr r0, r2\n    strb r0, [r1, #4]\n    mov r0, #0x16\n    add r1, sp, #0\n    bl sub_020376E0\n    ldr r0, _02057018 ; =_021D41C4\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0xec\n    strb r1, [r0]\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _02057018: .word _021D41C4"
    );
    #endif
}

void sub_0205701C(void) {
    /* Original at 0x0205701C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02057048 ; =_021D41C4\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetXCoord\n    add r4, r0, #0\n    ldr r0, _02057048 ; =_021D41C4\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetZCoord\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02056FD0\n    pop {r3, r4, r5, pc}\n    nop\n    _02057048: .word _021D41C4"
    );
    #endif
}

void sub_0205704C(void) {
    /* Original at 0x0205704C */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    ldrh r2, [r1]\n    mov r4, #0xf\n    lsl r4, r4, #0xc\n    ldrh r3, [r1, #2]\n    cmp r2, r4\n    blo _0205705E\n    sub r2, r4, #1\n    mov r4, #0xf\n    lsl r4, r4, #0xc\n    cmp r3, r4\n    blo _02057068\n    sub r3, r4, #1\n    mov r4, #0xf\n    and r0, r4\n    add r4, sp, #0\n    strb r0, [r4]\n    strb r2, [r4, #1]\n    asr r2, r2, #8\n    add r5, r2, #0\n    mov r0, #1\n    and r5, r0\n    asr r2, r3, #7\n    mov r0, #2\n    and r0, r2\n    add r0, r5, r0\n    strb r0, [r4, #2]\n    strb r3, [r4, #3]\n    ldrb r0, [r1, #7]\n    cmp r0, #0\n    beq _02057094\n    ldrb r2, [r4, #2]\n    mov r0, #0x80\n    orr r0, r2\n    strb r0, [r4, #2]\n    mov r2, #4\n    ldrsb r2, [r1, r2]\n    add r5, sp, #0\n    ldrb r0, [r5]\n    lsr r4, r2, #0x1f\n    lsl r3, r2, #0x1e\n    sub r3, r3, r4\n    mov r2, #0x1e\n    ror r3, r2\n    add r2, r4, r3\n    lsl r2, r2, #4\n    add r0, r0, r2\n    strb r0, [r5]\n    ldrb r0, [r1, #5]\n    ldrb r2, [r5]\n    add r1, sp, #0\n    lsl r0, r0, #6\n    add r0, r2, r0\n    strb r0, [r5]\n    mov r0, #0x17\n    mov r2, #0\n    bl sub_02037108\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020570C8(void) {
    /* Original at 0x020570C8 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, _02057128 ; =_021D41C4\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetUnk10\n    add r4, r0, #0\n    ldr r0, _02057128 ; =_021D41C4\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetUnk14\n    add r5, r0, #0\n    cmp r4, #0\n    bne _02057112\n    bl sub_0203769C\n    bl sub_020373B4\n    cmp r0, #0\n    beq _02057112\n    ldr r0, _02057128 ; =_021D41C4\n    ldr r0, [r0]\n    add r0, #0xeb\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02057112\n    mov r0, #1\n    bl sub_0205701C\n    ldr r0, _02057128 ; =_021D41C4\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0xeb\n    strb r1, [r0]\n    cmp r4, #1\n    bne _02057124\n    cmp r5, #1\n    bne _02057124\n    ldr r0, _02057128 ; =_021D41C4\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0xeb\n    strb r1, [r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _02057128: .word _021D41C4"
    );
    #endif
}

void sub_0205712C(void) {
    /* Original at 0x0205712C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    ldr r7, _0205717C ; =_021D41C4\n    add r5, r4, #0\n    add r6, r4, #0\n    ldr r0, [r7]\n    add r1, r0, r4\n    add r1, #0x24\n    ldrb r1, [r1]\n    cmp r1, #0\n    beq _02057168\n    add r2, r0, r4\n    add r2, #0xcc\n    ldrb r2, [r2]\n    add r1, r0, #0\n    add r1, #0x34\n    cmp r2, #0\n    bne _0205715A\n    add r2, r0, #0\n    add r2, #0xec\n    ldrb r2, [r2]\n    cmp r2, #0\n    beq _02057168\n    add r0, r0, r4\n    add r0, #0xcc\n    strb r6, [r0]\n    add r0, r4, #0\n    add r1, r1, r5\n    bl sub_0205704C\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, #8\n    blt _02057136\n    ldr r0, _0205717C ; =_021D41C4\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0xec\n    strb r1, [r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0205717C: .word _021D41C4"
    );
    #endif
}

void sub_02057180(void) {
    /* Original at 0x02057180 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0xf4\n    bx lr"
    );
    #endif
}

void sub_02057184(void) {
    /* Original at 0x02057184 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    ldr r1, _02057248 ; =_021D41C4\n    add r5, r0, #0\n    ldr r2, [r1]\n    lsl r4, r5, #2\n    add r1, r2, r4\n    ldr r1, [r1, #4]\n    cmp r1, #0\n    bne _02057242\n    add r2, #0xee\n    ldrb r1, [r2]\n    cmp r1, #0\n    bne _02057242\n    bl sub_02034818\n    str r0, [sp, #0x14]\n    cmp r0, #0\n    beq _02057242\n    bl sub_0203769C\n    cmp r5, r0\n    beq _020571CC\n    ldr r0, _02057248 ; =_021D41C4\n    mov r1, #1\n    ldr r0, [r0]\n    lsl r1, r1, #8\n    ldr r0, [r0, #0x30]\n    add r1, r5, r1\n    ldr r0, [r0, #0x3c]\n    bl MapObjectManager_GetFirstActiveObjectByID\n    cmp r0, #0\n    beq _020571CC\n    bl MapObject_Remove\n    ldr r0, [sp, #0x14]\n    mov r7, #2\n    bl PlayerProfile_GetVersion\n    cmp r0, #0\n    bne _020571DC\n    mov r7, #1\n    b _020571E2\n    cmp r0, #0xc\n    bne _020571E2\n    mov r7, #0\n    lsl r0, r5, #3\n    str r0, [sp, #0x10]\n    ldr r0, _02057248 ; =_021D41C4\n    ldr r6, [r0]\n    ldr r0, [sp, #0x14]\n    bl PlayerProfile_GetTrainerGender\n    mov r1, #0\n    str r1, [sp]\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    ldr r0, [r6, #0x30]\n    add r3, r6, r1\n    add r1, r3, #0\n    add r2, r3, #0\n    add r1, #0x74\n    add r2, #0x76\n    mov r6, #0x78\n    ldrh r1, [r1]\n    ldrh r2, [r2]\n    ldrsb r3, [r3, r6]\n    ldr r0, [r0, #0x3c]\n    bl PlayerAvatar_CreateWithParams\n    add r6, r0, #0\n    bne _0205721E\n    bl GF_AssertFail\n    ldr r0, _02057248 ; =_021D41C4\n    ldr r0, [r0]\n    add r0, r0, r4\n    str r6, [r0, #4]\n    add r0, r6, #0\n    bl PlayerAvatar_GetMapObject\n    mov r1, #1\n    lsl r1, r1, #8\n    add r1, r5, r1\n    bl MapObject_SetID\n    ldr r0, _02057248 ; =_021D41C4\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, r0, r5\n    add r0, #0x24\n    strb r1, [r0]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02057248: .word _021D41C4"
    );
    #endif
}

void sub_0205724C(void) {
    /* Original at 0x0205724C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _020572A8 ; =_021D41C4\n    add r6, r1, #0\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _020572A4\n    lsl r4, r5, #2\n    add r0, r1, r4\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    beq _02057284\n    ldr r1, [r1, #0x30]\n    ldr r1, [r1, #0x40]\n    cmp r1, r0\n    beq _0205727A\n    cmp r2, #0\n    beq _02057276\n    bl PlayerAvatar_DeleteFromMap\n    b _0205727A\n    bl PlayerAvatar_FreeToHeap\n    ldr r0, _020572A8 ; =_021D41C4\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, r0, r4\n    str r1, [r0, #4]\n    ldr r0, _020572A8 ; =_021D41C4\n    ldr r1, [r0]\n    add r1, #0x24\n    ldrb r0, [r1, r5]\n    cmp r0, #0\n    beq _02057298\n    cmp r6, #0\n    bne _02057298\n    mov r0, #0\n    strb r0, [r1, r5]\n    ldr r0, _020572A8 ; =_021D41C4\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, r0, r5\n    add r0, #0xcc\n    strb r1, [r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _020572A8: .word _021D41C4"
    );
    #endif
}

void sub_020572AC(void) {
    /* Original at 0x020572AC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _020572D8 ; =gSystem\n    mov r4, #2\n    ldr r1, [r1, #0x44]\n    tst r1, r4\n    beq _020572BC\n    mov r4, #1\n    b _020572CE\n    cmp r0, #0\n    beq _020572CE\n    bl FieldSystem_GetPlayerAvatar\n    bl PlayerAvatar_CheckRunningShoesLock\n    cmp r0, #0\n    beq _020572CE\n    mov r4, #1\n    add r0, r4, #0\n    bl sub_02037498\n    pop {r4, pc}\n    nop\n    _020572D8: .word gSystem"
    );
    #endif
}

void sub_020572DC(void) {
    /* Original at 0x020572DC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl sub_02037474\n    cmp r0, #0\n    beq _02057310\n    add r0, r4, #0\n    bl sub_020572AC\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02057304\n    add r0, r4, #0\n    bl sub_0205712C\n    add r0, r4, #0\n    bl sub_020570C8\n    b _0205730A\n    add r0, r4, #0\n    bl sub_020570C8\n    add r0, r4, #0\n    bl sub_02057314\n    pop {r4, pc}"
    );
    #endif
}

void sub_02057314(void) {
    /* Original at 0x02057314 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r5, #0\n    ldr r4, _02057354 ; =_021D41C4\n    add r7, r5, #0\n    add r6, sp, #0\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _02057332\n    add r0, r5, #0\n    bl sub_02057818\n    b _0205734C\n    ldr r3, [r4]\n    add r0, r3, r5\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0205734C\n    strb r5, [r6]\n    ldr r3, [r3, #0x30]\n    add r0, r7, #0\n    mov r1, #1\n    add r2, sp, #0\n    bl sub_0205776C\n    add r5, r5, #1\n    cmp r5, #8\n    blt _0205731E\n    pop {r3, r4, r5, r6, r7, pc}\n    _02057354: .word _021D41C4"
    );
    #endif
}

void sub_02057358(void) {
    /* Original at 0x02057358 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02057380 ; =_021D41C4\n    ldr r2, [r1]\n    cmp r2, #0\n    beq _0205737C\n    add r1, r2, #0\n    add r1, #0xed\n    ldrb r1, [r1]\n    cmp r1, r0\n    beq _02057370\n    add r2, #0xed\n    strb r0, [r2]\n    ldr r1, _02057380 ; =_021D41C4\n    mov r0, #0x3e\n    ldr r1, [r1]\n    add r1, #0xed\n    bl sub_020376E0\n    pop {r3, pc}\n    nop\n    _02057380: .word _021D41C4"
    );
    #endif
}

void sub_02057384(void) {
    /* Original at 0x02057384 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _020573A8 ; =_021D41C4\n    ldr r3, [r2]\n    cmp r3, #0\n    beq _020573A6\n    add r1, r3, #0\n    add r1, #0xed\n    ldrb r1, [r1]\n    cmp r1, r0\n    beq _020573A6\n    add r3, #0xed\n    strb r0, [r3]\n    ldr r1, [r2]\n    mov r0, #0x3e\n    add r1, #0xed\n    bl sub_020376E0\n    pop {r3, pc}\n    _020573A8: .word _021D41C4"
    );
    #endif
}

void sub_020573AC(void) {
    /* Original at 0x020573AC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _020573EC ; =_021D41C4\n    add r4, r2, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _020573E8\n    cmp r1, #1\n    beq _020573C2\n    bl GF_AssertFail\n    cmp r5, #8\n    blt _020573CA\n    bl GF_AssertFail\n    ldrb r0, [r4]\n    mov r1, #1\n    cmp r0, #1\n    beq _020573D8\n    cmp r0, #0\n    beq _020573D8\n    mov r1, #0\n    cmp r1, #0\n    bne _020573E0\n    bl GF_AssertFail\n    ldrb r1, [r4]\n    add r0, r5, #0\n    bl sub_02057C5C\n    pop {r3, r4, r5, pc}\n    nop\n    _020573EC: .word _021D41C4"
    );
    #endif
}

void sub_020573F0(void) {
    /* Original at 0x020573F0 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02057450 ; =_021D41C4\n    add r4, r1, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0205744E\n    add r0, r4, #0\n    bl sub_02057384\n    ldr r0, _02057450 ; =_021D41C4\n    ldr r0, [r0]\n    add r0, #0xf1\n    strb r4, [r0]\n    ldr r4, [r5, #0x40]\n    cmp r4, #0\n    beq _02057420\n    bl sub_0203769C\n    ldr r1, _02057450 ; =_021D41C4\n    lsl r0, r0, #2\n    ldr r1, [r1]\n    add r0, r1, r0\n    str r4, [r0, #4]\n    bl sub_02037474\n    cmp r0, #0\n    beq _0205743A\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0205743A\n    ldr r1, _02057450 ; =_021D41C4\n    mov r0, #0\n    ldr r1, [r1]\n    bl sub_02057550\n    bl sub_02037474\n    cmp r0, #0\n    beq _0205744E\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0205744E\n    bl sub_02057D74\n    pop {r3, r4, r5, pc}\n    _02057450: .word _021D41C4"
    );
    #endif
}

void sub_02057454(void) {
    /* Original at 0x02057454 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0x20\n    tst r0, r1\n    beq _0205745E\n    mov r0, #2\n    bx lr\n    mov r0, #0x10\n    tst r0, r1\n    beq _02057468\n    mov r0, #3\n    bx lr\n    mov r0, #0x40\n    tst r0, r1\n    beq _02057472\n    mov r0, #0\n    bx lr\n    mov r0, #0x80\n    tst r1, r0\n    beq _0205747C\n    mov r0, #1\n    bx lr\n    sub r0, #0x81\n    bx lr"
    );
    #endif
}

void sub_02057480(void) {
    /* Original at 0x02057480 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _020574C0 ; =_021D41C4\n    add r6, r1, #0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    bl Field_GetNumObjectEvents\n    add r4, r0, #0\n    ldr r0, _020574C0 ; =_021D41C4\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    bl Field_GetObjectEvents\n    mov r2, #0\n    cmp r4, #0\n    ble _020574BA\n    ldrh r1, [r0, #0x18]\n    cmp r5, r1\n    bne _020574B2\n    ldrh r1, [r0, #0x1a]\n    cmp r6, r1\n    bne _020574B2\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r2, r2, #1\n    add r0, #0x20\n    cmp r2, r4\n    blt _020574A2\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _020574C0: .word _021D41C4"
    );
    #endif
}

void sub_020574C4(void) {
    /* Original at 0x020574C4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0205751C ; =0x0000FFFF\n    add r6, r1, #0\n    add r7, r2, #0\n    cmp r5, r0\n    beq _0205750A\n    cmp r6, r0\n    beq _0205750A\n    mov r4, #0\n    cmp r4, r7\n    beq _020574F4\n    add r0, r4, #0\n    bl sub_02057B4C\n    cmp r5, r0\n    bne _020574F4\n    add r0, r4, #0\n    bl sub_02057B9C\n    cmp r6, r0\n    bne _020574F4\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    cmp r4, #8\n    blt _020574D8\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02057480\n    cmp r0, #0\n    beq _0205750A\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02057520 ; =_021D41C4\n    add r1, r5, #0\n    ldr r0, [r0]\n    add r2, r6, #0\n    ldr r0, [r0, #0x30]\n    bl sub_020548C0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0205751C: .word 0x0000FFFF\n    _02057520: .word _021D41C4"
    );
    #endif
}

void sub_02057524(void) {
    /* Original at 0x02057524 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    ldr r3, _0205754C ; =_020FC7B8\n    add r4, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    cmp r4, #5\n    str r0, [r2]\n    blt _02057542\n    bl GF_AssertFail\n    lsl r1, r4, #2\n    add r0, sp, #0\n    ldr r0, [r0, r1]\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _0205754C: .word _020FC7B8"
    );
    #endif
}

void sub_02057550(void) {
    /* Original at 0x02057550 */
    /* Requires manual decompilation - 175 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    mov r5, #0\n    ldr r6, _020576B8 ; =_021D41C4\n    str r5, [sp]\n    ldr r0, [r6]\n    add r1, r0, r5\n    add r1, #0x24\n    ldrb r1, [r1]\n    cmp r1, #0\n    beq _02057570\n    add r1, r0, r5\n    add r1, #0xb4\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _02057572\n    b _020576A4\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x34\n    add r4, r2, r1\n    add r1, r0, r5\n    add r1, #0xd4\n    ldrb r1, [r1]\n    cmp r1, #0\n    beq _02057592\n    add r1, r0, r5\n    add r1, #0xd4\n    ldrb r1, [r1]\n    add r0, r0, r5\n    add r0, #0xd4\n    sub r1, r1, #1\n    strb r1, [r0]\n    ldr r0, [r6]\n    add r0, r0, r5\n    add r0, #0xbc\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _020575A2\n    mov r7, #0\n    b _020575AA\n    add r0, r5, #0\n    bl sub_020374C0\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_020374AC\n    strb r0, [r4, #5]\n    ldr r0, [r6]\n    add r1, r0, r5\n    add r1, #0xd4\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _020576A4\n    ldrb r1, [r4, #7]\n    cmp r1, #1\n    bne _020575CC\n    add r1, r0, r5\n    add r1, #0xcc\n    mov r0, #1\n    strb r0, [r1]\n    mov r0, #0\n    strb r0, [r4, #7]\n    ldr r1, [r6]\n    add r0, r1, r5\n    add r0, #0xc4\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _020575E6\n    add r1, r1, r5\n    add r1, #0xc4\n    mov r0, #1\n    strb r0, [r1]\n    b _020576A4\n    add r0, r7, #0\n    add r1, r7, #0\n    bl sub_02057454\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_02057BEC\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl sub_02057C24\n    str r0, [sp, #8]\n    ldr r1, [sp, #4]\n    ldr r0, _020576BC ; =0x0000FFFF\n    cmp r1, r0\n    beq _020576A4\n    ldr r1, [sp, #8]\n    cmp r1, r0\n    beq _020576A4\n    mov r0, #0\n    mvn r0, r0\n    cmp r7, r0\n    beq _020576A4\n    mov r0, #4\n    ldrsb r0, [r4, r0]\n    cmp r0, r7\n    beq _02057650\n    strb r7, [r4, #4]\n    ldr r0, [r6]\n    add r1, r0, r5\n    add r1, #0xd4\n    mov r0, #4\n    strb r0, [r1]\n    ldr r0, [r6]\n    add r1, r0, r5\n    add r1, #0xcc\n    mov r0, #1\n    strb r0, [r1]\n    ldr r0, [r6]\n    add r1, r0, r5\n    add r1, #0xc4\n    ldrb r1, [r1]\n    cmp r1, #2\n    bls _020576A4\n    add r1, r0, r5\n    add r1, #0xc4\n    ldrb r1, [r1]\n    add r0, r0, r5\n    add r0, #0xc4\n    sub r1, r1, #1\n    strb r1, [r0]\n    b _020576A4\n    ldr r0, [r6]\n    add r0, r0, r5\n    add r0, #0xc4\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _020576A4\n    ldr r0, [sp, #4]\n    add r2, r5, #0\n    bl sub_020574C4\n    cmp r0, #0\n    beq _02057682\n    mov r0, #1\n    strb r0, [r4, #7]\n    ldr r0, [r6]\n    add r1, r0, r5\n    add r1, #0xcc\n    mov r0, #1\n    strb r0, [r1]\n    ldr r0, [r6]\n    add r1, r0, r5\n    add r1, #0xd4\n    mov r0, #4\n    strb r0, [r1]\n    b _020576A4\n    ldr r0, [r6]\n    add r1, r0, r5\n    add r1, #0xcc\n    mov r0, #1\n    strb r0, [r1]\n    ldr r0, [sp, #4]\n    strh r0, [r4]\n    ldr r0, [sp, #8]\n    strh r0, [r4, #2]\n    strb r7, [r4, #4]\n    ldrb r0, [r4, #5]\n    bl sub_02057524\n    ldr r1, [r6]\n    add r1, r1, r5\n    add r1, #0xd4\n    strb r0, [r1]\n    ldr r0, [sp]\n    add r5, r5, #1\n    add r0, #8\n    str r0, [sp]\n    cmp r5, #8\n    bge _020576B2\n    b _0205755A\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _020576B8: .word _021D41C4\n    _020576BC: .word 0x0000FFFF"
    );
    #endif
}

void sub_020576C0(void) {
    /* Original at 0x020576C0 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r3, _02057768 ; =_021D41C4\n    add r1, r0, #0\n    ldr r4, [r3]\n    add r0, r2, #0\n    cmp r4, #0\n    beq _02057764\n    add r5, r4, #0\n    ldrb r6, [r0, #4]\n    add r5, #0x34\n    lsl r2, r1, #3\n    add r2, r5, r2\n    mov r5, #0x80\n    tst r5, r6\n    beq _020576E6\n    mov r0, #1\n    add r4, #0xec\n    strb r0, [r4]\n    pop {r4, r5, r6, pc}\n    mov r4, #4\n    ldrsb r5, [r2, r4]\n    sub r4, r4, #5\n    cmp r5, r4\n    bne _02057702\n    mov r5, #0\n    mov r4, #1\n    ldr r6, [r3]\n    add r6, r6, r5\n    add r6, #0xcc\n    add r5, r5, #1\n    strb r4, [r6]\n    cmp r5, #8\n    blt _020576F4\n    mov r3, #0\n    strh r3, [r2]\n    strh r3, [r2, #2]\n    ldrh r4, [r2]\n    ldrb r3, [r0]\n    add r3, r4, r3\n    strh r3, [r2]\n    ldrb r4, [r0, #1]\n    ldrh r3, [r2]\n    lsl r5, r4, #8\n    mov r4, #0xff\n    lsl r4, r4, #8\n    and r5, r4\n    add r3, r3, r5\n    strh r3, [r2]\n    ldrh r5, [r2, #2]\n    ldrb r3, [r0, #2]\n    add r3, r5, r3\n    strh r3, [r2, #2]\n    ldrb r5, [r0, #3]\n    ldrh r3, [r2, #2]\n    lsl r5, r5, #8\n    and r4, r5\n    add r3, r3, r4\n    strh r3, [r2, #2]\n    ldrb r3, [r0, #4]\n    mov r0, #0xf\n    ldr r4, _02057768 ; =_021D41C4\n    and r0, r3\n    strb r0, [r2, #4]\n    ldr r3, [r4]\n    mov r0, #1\n    add r3, r3, r1\n    add r3, #0x24\n    strb r0, [r3]\n    ldr r3, [r4]\n    add r1, r3, r1\n    add r1, #0xcc\n    strb r0, [r1]\n    ldr r0, [r4]\n    ldrh r1, [r2]\n    ldrh r2, [r2, #2]\n    ldr r0, [r0, #0x30]\n    bl sub_020548C0\n    cmp r0, #0\n    beq _02057764\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    nop\n    _02057768: .word _021D41C4"
    );
    #endif
}

void sub_0205776C(void) {
    /* Original at 0x0205776C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _02057794 ; =_021D41C4\n    ldrb r4, [r2]\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02057790\n    bl sub_0203769C\n    cmp r4, r0\n    beq _02057790\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl sub_0205724C\n    add r0, r4, #0\n    bl sub_020346E8\n    pop {r4, pc}\n    nop\n    _02057794: .word _021D41C4"
    );
    #endif
}

void sub_02057798(void) {
    /* Original at 0x02057798 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #5\n    bx lr"
    );
    #endif
}

void sub_0205779C(void) {
    /* Original at 0x0205779C */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldrb r1, [r2]\n    mov r0, #0xf\n    add r3, r1, #0\n    and r3, r0\n    ldr r0, _02057814 ; =_021D41C4\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _02057810\n    ldrb r4, [r2, #2]\n    add r1, #0x74\n    lsl r0, r3, #3\n    add r1, r1, r0\n    mov r0, #0x80\n    tst r0, r4\n    beq _020577C0\n    mov r0, #1\n    b _020577C2\n    mov r0, #0\n    strb r0, [r1, #7]\n    mov r0, #0\n    strh r0, [r1]\n    strh r0, [r1, #2]\n    ldrh r4, [r1]\n    ldrb r0, [r2, #1]\n    add r0, r4, r0\n    strh r0, [r1]\n    ldrb r4, [r2, #2]\n    ldrh r0, [r1]\n    lsl r5, r4, #8\n    mov r4, #1\n    lsl r4, r4, #8\n    and r5, r4\n    add r0, r0, r5\n    strh r0, [r1]\n    ldrh r5, [r1, #2]\n    ldrb r0, [r2, #3]\n    add r0, r5, r0\n    strh r0, [r1, #2]\n    ldrb r5, [r2, #2]\n    ldrh r0, [r1, #2]\n    lsl r5, r5, #7\n    and r4, r5\n    add r0, r0, r4\n    strh r0, [r1, #2]\n    ldrb r0, [r2]\n    asr r4, r0, #4\n    mov r0, #3\n    and r4, r0\n    strb r4, [r1, #4]\n    ldrb r2, [r2]\n    asr r2, r2, #6\n    and r0, r2\n    strb r0, [r1, #5]\n    lsl r0, r3, #0x18\n    lsr r0, r0, #0x18\n    bl sub_02057184\n    pop {r3, r4, r5, pc}\n    nop\n    _02057814: .word _021D41C4"
    );
    #endif
}

void sub_02057818(void) {
    /* Original at 0x02057818 */
    /* Requires manual decompilation - 225 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r0, _02057A00 ; =_021D41C4\n    lsl r1, r5, #3\n    ldr r0, [r0]\n    add r2, r0, #0\n    add r2, #0x74\n    add r6, r2, r1\n    add r2, r0, #0\n    add r2, #0xdc\n    ldrb r1, [r2, r5]\n    cmp r1, #0\n    beq _0205783C\n    sub r0, r1, #1\n    add sp, #0x1c\n    strb r0, [r2, r5]\n    pop {r4, r5, r6, r7, pc}\n    ldrh r2, [r6]\n    ldr r1, _02057A04 ; =0x0000FFFF\n    cmp r2, r1\n    beq _02057866\n    ldrh r2, [r6, #2]\n    cmp r2, r1\n    beq _02057866\n    add r0, #0xee\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02057866\n    bl sub_0203769C\n    cmp r5, r0\n    bne _02057868\n    ldr r0, _02057A00 ; =_021D41C4\n    ldr r0, [r0]\n    add r0, #0xf1\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02057868\n    b _020579FC\n    ldr r0, _02057A00 ; =_021D41C4\n    ldr r1, [r0]\n    lsl r0, r5, #2\n    add r0, r1, r0\n    ldr r0, [r0, #4]\n    str r0, [sp, #0x18]\n    cmp r0, #0\n    bne _0205787A\n    b _020579FC\n    bl PlayerAvatar_GetXCoord\n    ldrh r1, [r6]\n    sub r0, r0, r1\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    bl PlayerAvatar_GetZCoord\n    ldrh r1, [r6, #2]\n    sub r7, r0, r1\n    ldr r0, [sp, #0x18]\n    bl PlayerAvatar_GetFacingDirection\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    bne _020578A4\n    cmp r7, #0\n    bne _020578A4\n    mov r4, #0\n    b _020578CE\n    ldr r0, [sp, #0x10]\n    bl abs\n    add r4, r0, #0\n    add r0, r7, #0\n    bl abs\n    cmp r4, r0\n    ble _020578C4\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    ble _020578C0\n    mov r4, #0x20\n    b _020578CE\n    mov r4, #0x10\n    b _020578CE\n    cmp r7, #0\n    ble _020578CC\n    mov r4, #0x40\n    b _020578CE\n    mov r4, #0x80\n    add r0, r7, #0\n    bl abs\n    ldr r0, [sp, #0x10]\n    bl abs\n    ldrb r0, [r6, #5]\n    mov r7, #0xff\n    str r0, [sp, #0x14]\n    cmp r0, #3\n    bhi _02057916\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _020578F0: ; jump table\n    mov r0, #5\n    str r0, [sp, #8]\n    b _02057916\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #2\n    orr r0, r4\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    b _02057916\n    mov r0, #2\n    str r0, [sp, #8]\n    b _02057916\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _02057A00 ; =_021D41C4\n    ldr r0, [r0]\n    add r0, #0xf0\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0205793C\n    bl sub_0203769C\n    cmp r5, r0\n    bne _0205793C\n    ldr r0, _02057A00 ; =_021D41C4\n    ldr r1, [r0]\n    add r0, r1, #0\n    add r0, #0xf0\n    ldrb r0, [r0]\n    add r1, #0xf0\n    sub r0, r0, #1\n    strb r0, [r1]\n    b _020579A8\n    mov r0, #2\n    add r1, r4, #0\n    bic r1, r0\n    bne _0205797A\n    ldrb r0, [r6, #7]\n    cmp r0, #0\n    beq _0205797A\n    mov r0, #3\n    str r0, [sp, #0x14]\n    mov r0, #4\n    ldrsb r0, [r6, r0]\n    cmp r0, #3\n    bhi _0205796E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02057962: ; jump table\n    mov r7, #0x1c\n    b _020579A8\n    mov r7, #0x1d\n    b _020579A8\n    mov r7, #0x1e\n    b _020579A8\n    mov r7, #0x1f\n    b _020579A8\n    cmp r1, #0\n    bne _02057992\n    mov r0, #4\n    ldrsb r0, [r6, r0]\n    ldr r1, [sp, #0xc]\n    cmp r0, r1\n    beq _02057992\n    mov r1, #0x24\n    bl sub_0206234C\n    add r7, r0, #0\n    b _020579A8\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x18]\n    ldr r3, [sp, #8]\n    add r1, r4, #0\n    add r2, r4, #0\n    bl sub_0205DF0C\n    add r7, r0, #0\n    ldr r0, [sp, #0x18]\n    bl sub_0205DFC8\n    cmp r0, #0\n    bne _020579BC\n    ldr r0, [sp, #0x18]\n    bl sub_0205DE38\n    cmp r0, #0\n    beq _020579FC\n    cmp r7, #0xff\n    beq _020579FC\n    ldr r0, [sp, #0x18]\n    add r1, r7, #0\n    bl sub_0205DFD4\n    mov r0, #2\n    bic r4, r0\n    beq _020579FC\n    ldr r0, _02057A00 ; =_021D41C4\n    ldr r0, [r0]\n    add r0, r0, r5\n    add r0, #0xdc\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _020579EC\n    ldr r0, [sp, #0x14]\n    bl sub_02057524\n    ldr r1, _02057A00 ; =_021D41C4\n    ldr r1, [r1]\n    add r1, r1, r5\n    add r1, #0xdc\n    strb r0, [r1]\n    ldr r0, _02057A00 ; =_021D41C4\n    ldr r1, [r0]\n    add r1, #0xdc\n    ldrb r0, [r1, r5]\n    cmp r0, #0\n    beq _020579FC\n    sub r0, r0, #1\n    strb r0, [r1, r5]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _02057A00: .word _021D41C4\n    _02057A04: .word 0x0000FFFF"
    );
    #endif
}

void sub_02057A08(void) {
    /* Original at 0x02057A08 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #4\n    bx lr"
    );
    #endif
}

void sub_02057A0C(void) {
    /* Original at 0x02057A0C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02057A30 ; =_021D41C4\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02057A1A\n    mov r0, #0\n    pop {r3, pc}\n    bl sub_0203769C\n    bl sub_020373B4\n    cmp r0, #0\n    beq _02057A2A\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _02057A30: .word _021D41C4"
    );
    #endif
}

void sub_02057A34(void) {
    /* Original at 0x02057A34 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02057A80 ; =_021D41C4\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02057A44\n    ldr r0, _02057A84 ; =0x0000FFFF\n    pop {r4, pc}\n    bl sub_0203769C\n    cmp r4, r0\n    bne _02057A5A\n    ldr r0, _02057A80 ; =_021D41C4\n    ldr r1, [r0]\n    lsl r0, r4, #3\n    add r0, r1, r0\n    add r0, #0x74\n    ldrh r0, [r0]\n    pop {r4, pc}\n    bl sub_02057A0C\n    cmp r0, #0\n    beq _02057A70\n    ldr r0, _02057A80 ; =_021D41C4\n    ldr r1, [r0]\n    add r0, r1, r4\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02057A74\n    ldr r0, _02057A84 ; =0x0000FFFF\n    pop {r4, pc}\n    lsl r0, r4, #3\n    add r0, r1, r0\n    add r0, #0x74\n    ldrh r0, [r0]\n    pop {r4, pc}\n    nop\n    _02057A80: .word _021D41C4\n    _02057A84: .word 0x0000FFFF"
    );
    #endif
}

void sub_02057A88(void) {
    /* Original at 0x02057A88 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02057AD4 ; =_021D41C4\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02057A98\n    ldr r0, _02057AD8 ; =0x0000FFFF\n    pop {r4, pc}\n    bl sub_0203769C\n    cmp r4, r0\n    bne _02057AAE\n    ldr r0, _02057AD4 ; =_021D41C4\n    ldr r1, [r0]\n    lsl r0, r4, #3\n    add r0, r1, r0\n    add r0, #0x76\n    ldrh r0, [r0]\n    pop {r4, pc}\n    bl sub_02057A0C\n    cmp r0, #0\n    beq _02057AC4\n    ldr r0, _02057AD4 ; =_021D41C4\n    ldr r1, [r0]\n    add r0, r1, r4\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02057AC8\n    ldr r0, _02057AD8 ; =0x0000FFFF\n    pop {r4, pc}\n    lsl r0, r4, #3\n    add r0, r1, r0\n    add r0, #0x76\n    ldrh r0, [r0]\n    pop {r4, pc}\n    nop\n    _02057AD4: .word _021D41C4\n    _02057AD8: .word 0x0000FFFF"
    );
    #endif
}

void sub_02057ADC(void) {
    /* Original at 0x02057ADC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02057A34\n    ldr r1, _02057B0C ; =0x0000FFFF\n    cmp r0, r1\n    bne _02057AEE\n    add r0, r1, #0\n    pop {r4, pc}\n    ldr r0, _02057B10 ; =_021D41C4\n    lsl r4, r4, #3\n    ldr r0, [r0]\n    add r1, r0, r4\n    mov r0, #0x78\n    ldrsb r0, [r1, r0]\n    bl GetDeltaXByFacingDirection\n    ldr r1, _02057B10 ; =_021D41C4\n    ldr r1, [r1]\n    add r1, r1, r4\n    add r1, #0x74\n    ldrh r1, [r1]\n    add r0, r1, r0\n    pop {r4, pc}\n    _02057B0C: .word 0x0000FFFF\n    _02057B10: .word _021D41C4"
    );
    #endif
}

void sub_02057B14(void) {
    /* Original at 0x02057B14 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02057A88\n    ldr r1, _02057B44 ; =0x0000FFFF\n    cmp r0, r1\n    bne _02057B26\n    add r0, r1, #0\n    pop {r4, pc}\n    ldr r0, _02057B48 ; =_021D41C4\n    lsl r4, r4, #3\n    ldr r0, [r0]\n    add r1, r0, r4\n    mov r0, #0x78\n    ldrsb r0, [r1, r0]\n    bl GetDeltaYByFacingDirection\n    ldr r1, _02057B48 ; =_021D41C4\n    ldr r1, [r1]\n    add r1, r1, r4\n    add r1, #0x76\n    ldrh r1, [r1]\n    add r0, r1, r0\n    pop {r4, pc}\n    _02057B44: .word 0x0000FFFF\n    _02057B48: .word _021D41C4"
    );
    #endif
}

void sub_02057B4C(void) {
    /* Original at 0x02057B4C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02057B94 ; =_021D41C4\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02057B5C\n    ldr r0, _02057B98 ; =0x0000FFFF\n    pop {r4, pc}\n    bl sub_0203769C\n    cmp r4, r0\n    bne _02057B70\n    ldr r0, _02057B94 ; =_021D41C4\n    ldr r1, [r0]\n    lsl r0, r4, #3\n    add r0, r1, r0\n    ldrh r0, [r0, #0x34]\n    pop {r4, pc}\n    bl sub_02057A0C\n    cmp r0, #0\n    beq _02057B86\n    ldr r0, _02057B94 ; =_021D41C4\n    ldr r1, [r0]\n    add r0, r1, r4\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02057B8A\n    ldr r0, _02057B98 ; =0x0000FFFF\n    pop {r4, pc}\n    lsl r0, r4, #3\n    add r0, r1, r0\n    ldrh r0, [r0, #0x34]\n    pop {r4, pc}\n    nop\n    _02057B94: .word _021D41C4\n    _02057B98: .word 0x0000FFFF"
    );
    #endif
}

void sub_02057B9C(void) {
    /* Original at 0x02057B9C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02057BE4 ; =_021D41C4\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02057BAC\n    ldr r0, _02057BE8 ; =0x0000FFFF\n    pop {r4, pc}\n    bl sub_0203769C\n    cmp r4, r0\n    bne _02057BC0\n    ldr r0, _02057BE4 ; =_021D41C4\n    ldr r1, [r0]\n    lsl r0, r4, #3\n    add r0, r1, r0\n    ldrh r0, [r0, #0x36]\n    pop {r4, pc}\n    bl sub_02057A0C\n    cmp r0, #0\n    beq _02057BD6\n    ldr r0, _02057BE4 ; =_021D41C4\n    ldr r1, [r0]\n    add r0, r1, r4\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02057BDA\n    ldr r0, _02057BE8 ; =0x0000FFFF\n    pop {r4, pc}\n    lsl r0, r4, #3\n    add r0, r1, r0\n    ldrh r0, [r0, #0x36]\n    pop {r4, pc}\n    nop\n    _02057BE4: .word _021D41C4\n    _02057BE8: .word 0x0000FFFF"
    );
    #endif
}

void sub_02057BEC(void) {
    /* Original at 0x02057BEC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02057B4C\n    ldr r1, _02057C1C ; =0x0000FFFF\n    cmp r0, r1\n    bne _02057BFE\n    add r0, r1, #0\n    pop {r4, pc}\n    ldr r0, _02057C20 ; =_021D41C4\n    lsl r4, r4, #3\n    ldr r0, [r0]\n    add r1, r0, r4\n    mov r0, #0x38\n    ldrsb r0, [r1, r0]\n    bl GetDeltaXByFacingDirection\n    ldr r1, _02057C20 ; =_021D41C4\n    ldr r1, [r1]\n    add r1, r1, r4\n    ldrh r1, [r1, #0x34]\n    add r0, r1, r0\n    pop {r4, pc}\n    nop\n    _02057C1C: .word 0x0000FFFF\n    _02057C20: .word _021D41C4"
    );
    #endif
}

void sub_02057C24(void) {
    /* Original at 0x02057C24 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02057B9C\n    ldr r1, _02057C54 ; =0x0000FFFF\n    cmp r0, r1\n    bne _02057C36\n    add r0, r1, #0\n    pop {r4, pc}\n    ldr r0, _02057C58 ; =_021D41C4\n    lsl r4, r4, #3\n    ldr r0, [r0]\n    add r1, r0, r4\n    mov r0, #0x38\n    ldrsb r0, [r1, r0]\n    bl GetDeltaYByFacingDirection\n    ldr r1, _02057C58 ; =_021D41C4\n    ldr r1, [r1]\n    add r1, r1, r4\n    ldrh r1, [r1, #0x36]\n    add r0, r1, r0\n    pop {r4, pc}\n    nop\n    _02057C54: .word 0x0000FFFF\n    _02057C58: .word _021D41C4"
    );
    #endif
}

void sub_02057C5C(void) {
    /* Original at 0x02057C5C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, _02057C90 ; =_021D41C4\n    ldr r4, [r3]\n    add r4, #0xb4\n    ldrb r2, [r4, r0]\n    cmp r1, r2\n    beq _02057C8C\n    strb r1, [r4, r0]\n    ldr r2, [r3]\n    lsl r1, r0, #3\n    add r2, r2, r1\n    mov r4, #0\n    add r2, #0x3b\n    strb r4, [r2]\n    ldr r2, [r3]\n    mov r4, #1\n    add r0, r2, r0\n    add r0, #0xcc\n    strb r4, [r0]\n    ldr r0, [r3]\n    mov r2, #2\n    add r0, r0, r1\n    add r0, #0x39\n    strb r2, [r0]\n    pop {r3, r4}\n    bx lr\n    _02057C90: .word _021D41C4"
    );
    #endif
}

void sub_02057C94(void) {
    /* Original at 0x02057C94 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    ldr r1, _02057D48 ; =_020FC7A0\n    add r0, sp, #8\n    ldrh r2, [r1]\n    ldr r3, _02057D4C ; =_020FC7A8\n    strh r2, [r0]\n    ldrh r2, [r1, #2]\n    strh r2, [r0, #2]\n    ldrh r2, [r1, #4]\n    ldrh r1, [r1, #6]\n    strh r2, [r0, #4]\n    strh r1, [r0, #6]\n    add r2, sp, #0x20\n    mov r1, #8\n    ldrh r0, [r3]\n    add r3, r3, #2\n    strh r0, [r2]\n    add r2, r2, #2\n    sub r1, r1, #1\n    bne _02057CB2\n    bl sub_0203993C\n    bl sub_0203774C\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp]\n    cmp r6, #2\n    bne _02057CD6\n    add r5, sp, #8\n    b _02057CD8\n    add r5, sp, #0x20\n    mov r7, #0\n    cmp r6, #0\n    ble _02057D24\n    mov r4, #0\n    cmp r6, #0\n    ble _02057D1C\n    add r0, r4, #0\n    bl sub_02057A34\n    ldrh r1, [r5]\n    cmp r1, r0\n    bne _02057D16\n    add r0, r4, #0\n    bl sub_02057A88\n    ldrh r1, [r5, #2]\n    cmp r1, r0\n    bne _02057D16\n    ldr r0, [sp, #4]\n    lsl r1, r4, #2\n    add r0, r0, #1\n    str r0, [sp, #4]\n    add r0, sp, #0x10\n    str r7, [r0, r1]\n    bl sub_0203769C\n    cmp r4, r0\n    bne _02057D1C\n    mov r0, #1\n    str r0, [sp]\n    b _02057D1C\n    add r4, r4, #1\n    cmp r4, r6\n    blt _02057CE4\n    add r7, r7, #1\n    add r5, r5, #4\n    cmp r7, r6\n    blt _02057CDE\n    ldr r0, [sp, #4]\n    cmp r0, r6\n    bne _02057D42\n    mov r5, #0\n    cmp r6, #0\n    ble _02057D42\n    add r4, sp, #0x10\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl sub_02037894\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, r6\n    blt _02057D32\n    ldr r0, [sp]\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _02057D48: .word _020FC7A0\n    _02057D4C: .word _020FC7A8"
    );
    #endif
}

void sub_02057D50(void) {
    /* Original at 0x02057D50 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r2, [r2]\n    cmp r2, #3\n    bne _02057D64\n    ldr r1, _02057D70 ; =_021D41C4\n    mov r2, #0\n    ldr r1, [r1]\n    add r0, r1, r0\n    add r0, #0xbc\n    strb r2, [r0]\n    bx lr\n    ldr r1, _02057D70 ; =_021D41C4\n    ldr r1, [r1]\n    add r0, r1, r0\n    add r0, #0xe6\n    strb r2, [r0]\n    bx lr\n    _02057D70: .word _021D41C4"
    );
    #endif
}

void sub_02057D74(void) {
    /* Original at 0x02057D74 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    bl sub_0203993C\n    bl sub_0203774C\n    add r7, r0, #0\n    cmp r7, #2\n    bne _02057D8C\n    ldr r0, _02057DFC ; =_0210FAB4\n    str r0, [sp]\n    b _02057D90\n    ldr r0, _02057E00 ; =_0210FABC\n    str r0, [sp]\n    mov r1, #0\n    add r0, sp, #4\n    strb r1, [r0]\n    cmp r7, #0\n    ble _02057DF8\n    ldr r0, _02057E04 ; =_021D41C4\n    add r6, sp, #4\n    ldr r1, [r0]\n    ldrb r0, [r6]\n    add r0, r1, r0\n    add r0, #0xe6\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02057DEA\n    mov r4, #0\n    cmp r7, #0\n    ble _02057DEA\n    ldr r5, [sp]\n    ldrb r0, [r6]\n    bl sub_02057B4C\n    ldrh r1, [r5]\n    cmp r1, r0\n    bne _02057DE2\n    ldrb r0, [r6]\n    bl sub_02057B9C\n    ldrh r1, [r5, #2]\n    cmp r1, r0\n    bne _02057DE2\n    ldr r0, _02057E04 ; =_021D41C4\n    ldr r1, [r0]\n    ldrb r0, [r6]\n    add r1, r1, r0\n    add r1, #0xbc\n    mov r0, #1\n    strb r0, [r1]\n    mov r0, #0x5f\n    add r1, sp, #4\n    bl sub_02037184\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r7\n    blt _02057DB4\n    add r0, sp, #4\n    ldrb r1, [r0]\n    add r1, r1, #1\n    strb r1, [r0]\n    ldrb r0, [r0]\n    cmp r0, r7\n    blt _02057D9A\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02057DFC: .word _0210FAB4\n    _02057E00: .word _0210FABC\n    _02057E04: .word _021D41C4"
    );
    #endif
}

void sub_02057E08(void) {
    /* Original at 0x02057E08 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl sub_0203769C\n    add r4, r0, #0\n    bl sub_02057A34\n    cmp r0, #8\n    ble _02057E28\n    mov r0, #2\n    bl sub_02057F28\n    mov r0, #2\n    mov r1, #0x24\n    bl sub_0206234C\n    b _02057E36\n    mov r0, #3\n    bl sub_02057F28\n    mov r0, #3\n    mov r1, #0x24\n    bl sub_0206234C\n    add r1, r0, #0\n    ldr r0, _02057E4C ; =_021D41C4\n    ldr r2, [r0]\n    lsl r0, r4, #2\n    add r0, r2, r0\n    ldr r0, [r0, #4]\n    bl sub_0205DFD4\n    bl sub_02058024\n    pop {r4, pc}\n    _02057E4C: .word _021D41C4"
    );
    #endif
}

void sub_02057E50(void) {
    /* Original at 0x02057E50 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    bl sub_0203993C\n    bl sub_0203774C\n    str r0, [sp]\n    ldr r1, [sp]\n    mov r0, #0\n    cmp r1, #0\n    ble _02057E8E\n    ldr r1, _02057EE8 ; =_021D41C4\n    ldr r2, [r1]\n    add r1, r2, #0\n    add r1, #0x24\n    ldrb r1, [r1]\n    cmp r1, #0\n    beq _02057E7E\n    add r1, r2, #0\n    add r1, #0xcc\n    ldrb r1, [r1]\n    cmp r1, #1\n    bne _02057E84\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp]\n    add r0, r0, #1\n    add r2, r2, #1\n    cmp r0, r1\n    blt _02057E6A\n    ldr r0, [sp]\n    mov r5, #0\n    cmp r0, #0\n    ble _02057EE2\n    add r4, r5, #0\n    ldr r0, _02057EE8 ; =_021D41C4\n    ldr r7, [r0]\n    mov r0, #4\n    add r7, #0x34\n    add r6, r7, r4\n    ldrsb r0, [r6, r0]\n    bl sub_02057EEC\n    str r0, [sp, #4]\n    bl GetDeltaXByFacingDirection\n    ldrh r1, [r7, r4]\n    add r0, r1, r0\n    strh r0, [r7, r4]\n    ldr r0, [sp, #4]\n    bl GetDeltaYByFacingDirection\n    ldrh r1, [r6, #2]\n    add r0, r1, r0\n    strh r0, [r6, #2]\n    mov r0, #2\n    strb r0, [r6, #5]\n    ldr r0, _02057EE8 ; =_021D41C4\n    ldr r0, [r0]\n    add r1, r0, r5\n    add r1, #0xcc\n    mov r0, #1\n    strb r0, [r1]\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_02057C5C\n    ldr r0, [sp]\n    add r5, r5, #1\n    add r4, #8\n    cmp r5, r0\n    blt _02057E98\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02057EE8: .word _021D41C4"
    );
    #endif
}

void sub_02057EEC(void) {
    /* Original at 0x02057EEC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    bne _02057EF6\n    mov r0, #1\n    pop {r3, pc}\n    cmp r0, #1\n    bne _02057EFE\n    mov r0, #0\n    pop {r3, pc}\n    cmp r0, #2\n    bne _02057F06\n    mov r0, #3\n    pop {r3, pc}\n    cmp r0, #3\n    bne _02057F0E\n    mov r0, #2\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #2\n    pop {r3, pc}"
    );
    #endif
}

void sub_02057F18(void) {
    /* Original at 0x02057F18 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02057F24 ; =_021D41C4\n    ldr r1, [r1]\n    add r0, r1, r0\n    add r0, #0xdc\n    ldrb r0, [r0]\n    bx lr\n    _02057F24: .word _021D41C4"
    );
    #endif
}

void sub_02057F28(void) {
    /* Original at 0x02057F28 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02057F54 ; =_021D41C4\n    add r1, r4, #0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x30]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_SetFacingDirection\n    bl sub_0203769C\n    ldr r1, _02057F54 ; =_021D41C4\n    lsl r0, r0, #3\n    ldr r1, [r1]\n    add r0, r1, r0\n    add r0, #0x78\n    strb r4, [r0]\n    mov r0, #0\n    bl sub_0205701C\n    pop {r4, pc}\n    nop\n    _02057F54: .word _021D41C4"
    );
    #endif
}

void sub_02057F58(void) {
    sub_0203E2F4(0);
}

void sub_02057F70(void) {
    /* Original at 0x02057F70 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_0203E30C\n    mov r0, #1\n    bl sub_02057358\n    pop {r3, pc}"
    );
    #endif
}

void sub_02057F80(void) {
    /* Original at 0x02057F80 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02057FA0 ; =_021D41C4\n    ldr r0, [r0]\n    add r0, #0xef\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02057F9C\n    bl sub_02057F70\n    ldr r0, _02057FA0 ; =_021D41C4\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0xef\n    strb r1, [r0]\n    pop {r3, pc}\n    nop\n    _02057FA0: .word _021D41C4"
    );
    #endif
}

void sub_02057FA4(void) {
    /* Original at 0x02057FA4 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    ldr r0, _02058020 ; =_021D41C4\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0205801A\n    mov r6, #0\n    add r4, r6, #0\n    add r5, r6, #0\n    ldr r0, _02058020 ; =_021D41C4\n    ldr r0, [r0]\n    add r0, r0, r4\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    beq _02058010\n    bl sub_0203769C\n    cmp r6, r0\n    beq _02058010\n    ldr r0, _02058020 ; =_021D41C4\n    ldr r0, [r0]\n    add r0, r0, r4\n    ldr r0, [r0, #4]\n    bl PlayerAvatar_GetMapObject\n    ldr r1, _02058020 ; =_021D41C4\n    str r0, [sp, #0xc]\n    ldr r1, [r1]\n    add r1, r1, r5\n    add r2, r1, #0\n    add r2, #0x74\n    ldrh r2, [r2]\n    str r2, [sp, #8]\n    add r2, r1, #0\n    add r2, #0x76\n    ldrh r7, [r2]\n    mov r2, #0x78\n    ldrsb r1, [r1, r2]\n    str r1, [sp, #4]\n    ldr r1, [sp, #8]\n    bl MapObject_SetCurrentX\n    ldr r0, [sp, #0xc]\n    add r1, r7, #0\n    bl MapObject_SetCurrentZ\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    str r0, [sp]\n    ldr r0, [sp, #0xc]\n    mov r2, #0\n    add r3, r7, #0\n    bl MapObject_SetPositionFromXYZAndDirection\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, #8\n    cmp r6, #8\n    blt _02057FB6\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02058020: .word _021D41C4"
    );
    #endif
}

void sub_02058024(void) {
    /* Original at 0x02058024 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02058030 ; =_021D41C4\n    mov r1, #8\n    ldr r0, [r0]\n    add r0, #0xf0\n    strb r1, [r0]\n    bx lr\n    _02058030: .word _021D41C4"
    );
    #endif
}
