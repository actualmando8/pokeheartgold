/* Decompiled from asm/overlay_90.s */
#include "global.h"

void ov90_02258800(void) {
    /* Original at 0x02258800 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    str r1, [sp]\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    add r2, r6, #0\n    mov r1, #0x10\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02258812\n    bl sub_020347A0\n    strb r0, [r6, #8]\n    bl sub_0203769C\n    mov r5, #0\n    add r7, r0, #0\n    add r4, r5, #0\n    add r0, r4, #0\n    bl sub_02034818\n    cmp r0, #0\n    beq _02258840\n    cmp r7, r4\n    bne _0225883A\n    strb r5, [r6, #9]\n    add r0, r6, r5\n    strb r4, [r0, #4]\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r4, #4\n    blt _0225882A\n    ldrb r0, [r6, #8]\n    cmp r5, r0\n    beq _02258850\n    bl GF_AssertFail\n    ldr r0, [sp]\n    cmp r0, #0\n    bne _0225885A\n    mov r0, #1\n    strb r0, [r6, #0xb]\n    ldr r0, [sp, #4]\n    str r0, [r6]\n    ldr r0, [sp, #8]\n    strb r0, [r6, #0xa]\n    ldr r0, [sp, #0x20]\n    str r0, [r6, #0xc]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_0225886C(void) {
    /* Original at 0x0225886C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r2, [r0, #8]\n    mov r3, #0\n    cmp r2, #0\n    ble _02258888\n    add r2, r0, r3\n    ldrb r2, [r2, #4]\n    cmp r1, r2\n    bne _02258880\n    add r0, r3, #0\n    bx lr\n    ldrb r2, [r0, #8]\n    add r3, r3, #1\n    cmp r3, r2\n    blt _02258874\n    mov r0, #4\n    bx lr"
    );
    #endif
}

void ov90_0225888C(void) {
    GF_AssertFail();
}

void ov90_022588A4(void) {
    /* Original at 0x022588A4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #4\n    blo _022588B4\n    blo _022588B0\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}\n    ldr r2, [r0, #0xc]\n    add r0, r2, r1\n    ldrb r1, [r0, #4]\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _022588C6\n    mov r0, #0\n    pop {r3, pc}\n    add r0, r2, r1\n    ldrb r0, [r0, #8]\n    pop {r3, pc}"
    );
    #endif
}

void ov90_022588CC(void) {
    /* Original at 0x022588CC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #4\n    blo _022588E0\n    blo _022588DC\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrb r2, [r5, #0xb]\n    cmp r2, #1\n    bne _02258900\n    bl ov90_0225886C\n    ldrb r1, [r5, #9]\n    cmp r0, r1\n    bne _022588F8\n    ldr r0, [r5]\n    bl Save_PlayerData_GetProfile\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl sub_02034818\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    bne _0225890A\n    bl GF_AssertFail\n    ldr r1, [r5, #0xc]\n    lsl r0, r4, #2\n    add r0, r1, r0\n    ldr r0, [r0, #0x20]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov90_02258914(void) {
    ov90_02259588();
}

void ov90_02258920(void) {
    ov90_02259588();
}

void ov90_0225892C(void) {
    ov90_02259588();
}

void ov90_02258938(void) {
    /* Original at 0x02258938 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _022589B8 ; =0x000005EC\n    ldr r0, [r5, r0]\n    bl SysTask_Destroy\n    mov r0, #0x5f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl SysTask_Destroy\n    mov r0, #0xb9\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov90_0225A108\n    mov r0, #0x73\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov90_0225A340\n    ldrb r0, [r5, #0x10]\n    mov r6, #0\n    cmp r0, #0\n    ble _02258980\n    mov r0, #0x81\n    lsl r0, r0, #2\n    add r4, r5, r0\n    add r0, r4, #0\n    bl ov90_02259EAC\n    ldrb r0, [r5, #0x10]\n    add r6, r6, #1\n    add r4, #0x38\n    cmp r6, r0\n    blt _02258970\n    add r0, r5, #0\n    add r0, #0x4c\n    bl ov90_02259434\n    add r0, r5, #0\n    bl ov90_02259784\n    add r0, r5, #0\n    add r0, #0x3c\n    bl ov90_022591D4\n    mov r0, #0x1b\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ov90_02258E10\n    add r0, r5, #0\n    add r0, #0x84\n    bl ov90_02259158\n    add r0, r5, #0\n    add r0, #0x30\n    bl ov90_02259084\n    add r0, r5, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}\n    _022589B8: .word 0x000005EC"
    );
    #endif
}

void ov90_022589BC(void) {
    /* Original at 0x022589BC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0]\n    cmp r0, #0x10\n    blo _022589C6\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov90_022589CC(void) {
    GF_AssertFail();
}

void ov90_022589E0(void) {
    ov90_0225A6B4();
}

void ov90_022589EC(void) {
    ov90_0225A6B4();
}

void ov90_022589F8(void) {
    ov90_0225A6B4();
}

void ov90_02258A04(void) {
    /* Original at 0x02258A04 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _02258A90 ; =0x00000644\n    ldr r0, [r5, r0]\n    bl SysTask_Destroy\n    ldr r0, _02258A94 ; =0x00000648\n    ldr r0, [r5, r0]\n    bl SysTask_Destroy\n    mov r0, #0xcf\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov90_0225A108\n    ldrb r0, [r5, #0x14]\n    mov r6, #0\n    cmp r0, #0\n    ble _02258A40\n    mov r0, #0x97\n    lsl r0, r0, #2\n    add r4, r5, r0\n    add r0, r4, #0\n    bl ov90_02259EAC\n    ldrb r0, [r5, #0x14]\n    add r6, r6, #1\n    add r4, #0x38\n    cmp r6, r0\n    blt _02258A30\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov90_0225B380\n    add r0, r5, #0\n    bl ov90_0225A960\n    add r0, r5, #0\n    add r0, #0x68\n    bl ov90_02259434\n    add r0, r5, #0\n    add r0, #0x58\n    bl ov90_022591D4\n    mov r0, #0x73\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov90_02258E10\n    add r0, r5, #0\n    add r0, #0xa0\n    bl ov90_02259158\n    add r0, r5, #0\n    add r0, #0x4c\n    bl ov90_02259084\n    ldr r0, _02258A98 ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    ldr r0, _02258A9C ; =0x04001050\n    strh r1, [r0]\n    bl GF_DestroyVramTransferManager\n    add r0, r5, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}\n    _02258A90: .word 0x00000644\n    _02258A94: .word 0x00000648\n    _02258A98: .word 0x04000050\n    _02258A9C: .word 0x04001050"
    );
    #endif
}

void ov90_02258AA0(void) {
    /* Original at 0x02258AA0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #6]\n    bx lr"
    );
    #endif
}

void ov90_02258AA4(void) {
    /* Original at 0x02258AA4 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov90_02258AA8(void) {
    /* Original at 0x02258AA8 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7}\n    sub sp, #4\n    add r5, r0, #0\n    mov r7, #0\n    mov ip, r1\n    add r0, r1, #0\n    beq _02258AE8\n    add r3, r5, #0\n    add r2, r7, #0\n    cmp r7, #0\n    ble _02258ADA\n    add r0, sp, #0\n    add r4, r0, r7\n    sub r0, r4, #1\n    ldrb r1, [r0]\n    ldr r0, [r3]\n    lsl r6, r1, #2\n    ldr r6, [r5, r6]\n    cmp r0, r6\n    bls _02258ADA\n    sub r2, r2, #1\n    strb r1, [r4]\n    sub r4, r4, #1\n    cmp r2, #0\n    bgt _02258AC2\n    add r0, sp, #0\n    strb r7, [r0, r2]\n    add r7, r7, #1\n    mov r0, ip\n    add r3, r3, #4\n    cmp r7, r0\n    blo _02258AB8\n    mov r0, ip\n    mov r4, #0\n    cmp r0, #0\n    bls _02258B1E\n    add r3, sp, #0\n    add r2, r4, #0\n    cmp r4, #0\n    ble _02258B0E\n    sub r0, r3, #1\n    ldrb r1, [r0]\n    ldrb r0, [r3]\n    lsl r6, r1, #2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r6, [r5, r6]\n    cmp r0, r6\n    bne _02258B0E\n    add r0, r5, r1\n    ldrb r2, [r0, #0x10]\n    ldrb r0, [r3]\n    add r4, r4, #1\n    add r3, r3, #1\n    add r0, r5, r0\n    strb r2, [r0, #0x10]\n    mov r0, ip\n    cmp r4, r0\n    blo _02258AF2\n    add sp, #4\n    pop {r3, r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov90_02258B24(void) {
    ((u8*)r0)[6] = r1;
    ((u8*)r0)[7] = 1;
}

void ov90_02258B2C(void) {
    ov90_0225B53C(0x7a);
}

void ov90_02258B44(void) {
    /* Original at 0x02258B44 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x7a\n    lsl r2, r2, #2\n    ldr r3, _02258B50 ; =ov90_0225B594\n    add r0, r0, r2\n    bx r3\n    nop\n    _02258B50: .word ov90_0225B594"
    );
    #endif
}

void ov90_02258B54(void) {
    /* Original at 0x02258B54 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r4, #0\n    cmp r0, #0\n    beq _02258B94\n    bl sub_02037454\n    ldrb r1, [r5, #8]\n    cmp r1, r0\n    beq _02258B6C\n    mov r4, #1\n    bl sub_02039264\n    cmp r0, #1\n    bne _02258B76\n    mov r4, #1\n    bl sub_020390C4\n    cmp r0, #2\n    blt _02258B80\n    mov r4, #1\n    cmp r4, #1\n    bne _02258B8A\n    ldr r0, [r5, #0xc]\n    mov r1, #1\n    str r1, [r0, #0x1c]\n    ldr r0, [r5, #0xc]\n    ldr r0, [r0, #0x1c]\n    cmp r0, #1\n    bne _02258B94\n    mov r4, #1\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov90_02258B98(void) {
    /* Original at 0x02258B98 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    bne _02258BA6\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    ldr r0, [r0, #0x1c]\n    cmp r0, #1\n    beq _02258BB2\n    bl GF_AssertFail\n    bl sub_02034420\n    cmp r0, #1\n    bne _02258BC4\n    bl sub_020343E4\n    bl sub_0203986C\n    b _02258BD0\n    bl sub_020392A0\n    cmp r0, #1\n    bne _02258BD0\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov90_02258BD4(void) {
    /* Original at 0x02258BD4 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r1, #0\n    mov r1, #0x73\n    add r6, r0, #0\n    add r0, r5, #0\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    mov r2, #0x73\n    add r4, r0, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    str r6, [r4, #8]\n    mov r0, #0xc8\n    add r1, r5, #0\n    bl NARC_New\n    str r0, [r4, #0xc]\n    add r0, r4, #0\n    add r0, #0x10\n    mov r1, #1\n    add r2, r5, #0\n    bl ov90_02258DD0\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, _02258C34 ; =0x00001388\n    mov r2, #3\n    str r0, [sp, #0xc]\n    str r5, [sp, #0x10]\n    add r0, r4, #0\n    ldr r1, [r4, #0xc]\n    add r0, #0x10\n    add r3, r2, #0\n    bl ov90_02258E54\n    str r0, [r4, #0x28]\n    add r0, r4, #0\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02258C34: .word 0x00001388"
    );
    #endif
}

void ov90_02258C38(void) {
    /* Original at 0x02258C38 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x2c]\n    cmp r0, #0\n    beq _02258C4A\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    ldr r0, [r4, #0x30]\n    cmp r0, #0\n    beq _02258C54\n    bl Sprite_Delete\n    add r0, r4, #0\n    add r0, #0x34\n    bl ov90_0225BD08\n    add r0, r4, #0\n    add r0, #0x10\n    bl ov90_02258E10\n    ldr r0, [r4, #0xc]\n    bl NARC_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov90_02258C74(void) {
    /* Original at 0x02258C74 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0, #0x14]\n    ldr r1, _02258C88 ; =0x00001388\n    bl SpriteResourceCollection_Find\n    mov r1, #1\n    bl SpriteTransfer_GetPlttOffset\n    pop {r3, pc}\n    nop\n    _02258C88: .word 0x00001388"
    );
    #endif
}

void ov90_02258C8C(void) {
    /* Original at 0x02258C8C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x2c]\n    cmp r0, #0\n    beq _02258C9A\n    bl GF_AssertFail\n    ldr r0, _02258CAC ; =ov90_0225BEE0\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #0x2c]\n    mov r0, #1\n    strh r0, [r4, #4]\n    pop {r4, pc}\n    _02258CAC: .word ov90_0225BEE0"
    );
    #endif
}

void ov90_02258CB0(void) {
    /* Original at 0x02258CB0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x2c]\n    cmp r0, #0\n    beq _02258CBE\n    bl GF_AssertFail\n    ldr r0, _02258CD8 ; =ov90_0225C06C\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #0x2c]\n    mov r0, #1\n    strh r0, [r4, #4]\n    ldr r0, _02258CDC ; =0x000005F1\n    bl PlaySE\n    pop {r4, pc}\n    nop\n    _02258CD8: .word ov90_0225C06C\n    _02258CDC: .word 0x000005F1"
    );
    #endif
}

void ov90_02258CE0(void) {
    /* Original at 0x02258CE0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0, #4]\n    cmp r0, #0\n    bne _02258CEA\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov90_02258CF0(void) {
    /* Original at 0x02258CF0 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r4, [sp, #0x18]\n    add r5, r0, #0\n    add r7, r2, #0\n    add r0, r3, #0\n    add r6, r1, #0\n    lsl r2, r4, #0xc\n    str r3, [sp]\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    add r2, r0, #0\n    sub r0, r7, r6\n    mov r7, #2\n    mov r3, #0\n    lsl r7, r7, #0xa\n    add r2, r2, r7\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r1\n    sub r2, r0, r2\n    asr r1, r2, #0x1f\n    lsr r0, r2, #0x13\n    lsl r1, r1, #0xd\n    orr r1, r0\n    lsl r0, r2, #0xd\n    add r0, r0, r7\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    add r1, r4, #0\n    mul r1, r4\n    lsl r1, r1, #0xc\n    bl FX_Div\n    str r6, [r5]\n    ldr r1, [sp]\n    str r6, [r5, #4]\n    str r1, [r5, #8]\n    str r0, [r5, #0xc]\n    str r4, [r5, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_02258D4C(void) {
    /* Original at 0x02258D4C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    add r4, r1, #0\n    cmp r4, r0\n    blt _02258D5E\n    add r4, r0, #0\n    mov r7, #1\n    b _02258D60\n    mov r7, #0\n    ldr r0, [r5, #8]\n    lsl r2, r4, #0xc\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsr r6, r2, #0xc\n    lsl r0, r1, #0x14\n    add r2, r4, #0\n    orr r6, r0\n    ldr r0, [r5, #0xc]\n    mul r2, r4\n    lsl r2, r2, #0xc\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    lsl r1, r2, #2\n    bl FX_Div\n    ldr r1, [r5, #4]\n    add r0, r6, r0\n    add r0, r1, r0\n    str r0, [r5]\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_02258DB0(void) {
    /* Original at 0x02258DB0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r2, [r0, #8]\n    add r0, #0xc\n    lsr r4, r2, #1\n    mov r3, #0\n    cmp r4, #0\n    ble _02258DCC\n    ldrh r2, [r0]\n    add r3, r3, #1\n    add r2, r2, r1\n    strh r2, [r0]\n    add r0, r0, #2\n    cmp r3, r4\n    blt _02258DBE\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov90_02258DD0(void) {
    /* Original at 0x02258DD0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    add r6, r1, #0\n    add r7, r2, #0\n    mov r4, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl Create2DGfxResObjMan\n    add r4, r4, #1\n    stmia r5!, {r0}\n    cmp r4, #4\n    blt _02258DDC\n    mov r0, #0x38\n    add r4, r6, #0\n    mul r4, r0\n    add r0, r7, #0\n    add r1, r4, #0\n    bl Heap_Alloc\n    ldr r1, [sp]\n    add r2, r4, #0\n    str r0, [r1, #0x10]\n    mov r1, #0\n    bl memset\n    ldr r0, [sp]\n    str r6, [r0, #0x14]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_02258E10(void) {
    /* Original at 0x02258E10 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x14]\n    mov r6, #0\n    cmp r0, #0\n    bls _02258E38\n    add r4, r6, #0\n    ldr r1, [r5, #0x10]\n    ldr r0, [r1, r4]\n    cmp r0, #1\n    bne _02258E2E\n    add r0, r5, #0\n    add r1, r1, r4\n    bl ov90_02258FB8\n    ldr r0, [r5, #0x14]\n    add r6, r6, #1\n    add r4, #0x38\n    cmp r6, r0\n    blo _02258E1E\n    mov r6, #0\n    add r4, r5, #0\n    ldr r0, [r4]\n    bl Destroy2DGfxResObjMan\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #4\n    blt _02258E3C\n    ldr r0, [r5, #0x10]\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov90_02258E54(void) {
    /* Original at 0x02258E54 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    ldr r6, [r5, #0x14]\n    mov r4, #0\n    str r1, [sp, #0x18]\n    str r2, [sp, #0x1c]\n    add r7, r3, #0\n    add r1, r4, #0\n    cmp r6, #0\n    bls _02258E84\n    ldr r3, [r5, #0x10]\n    add r2, r3, #0\n    ldr r0, [r2]\n    cmp r0, #0\n    bne _02258E7C\n    mov r0, #0x38\n    mul r0, r1\n    add r4, r3, r0\n    b _02258E84\n    add r1, r1, #1\n    add r2, #0x38\n    cmp r1, r6\n    blo _02258E6E\n    cmp r4, #0\n    bne _02258E8C\n    bl GF_AssertFail\n    ldr r0, [sp, #0x38]\n    str r7, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x3c]\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x40]\n    ldr r3, [sp, #0x1c]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x44]\n    add r1, r4, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x48]\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl ov90_02258EE0\n    add r0, r4, #0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_02258EB4(void) {
    /* Original at 0x02258EB4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #0x20\n    add r0, #0x14\n    str r0, [sp, #4]\n    lsl r0, r2, #0xc\n    str r0, [sp, #8]\n    lsl r0, r3, #0xc\n    str r0, [sp, #0xc]\n    str r1, [sp]\n    add r0, sp, #0x18\n    ldrh r0, [r0, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #1\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x2c]\n    str r0, [sp, #0x1c]\n    add r0, sp, #0\n    bl Sprite_Create\n    add sp, #0x20\n    pop {r3, pc}"
    );
    #endif
}

void ov90_02258EE0(void) {
    /* Original at 0x02258EE0 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    str r2, [sp, #0x2c]\n    str r3, [sp, #0x30]\n    cmp r0, #0\n    beq _02258EF6\n    bl GF_AssertFail\n    mov r0, #1\n    ldr r7, [sp, #0x58]\n    str r0, [r4]\n    str r7, [sp]\n    ldr r6, [sp, #0x5c]\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldr r0, [r5]\n    ldr r1, [sp, #0x2c]\n    ldr r2, [sp, #0x4c]\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    str r0, [r4, #4]\n    str r7, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x48]\n    ldr r1, [sp, #0x2c]\n    str r0, [sp, #8]\n    str r6, [sp, #0xc]\n    ldr r0, [r5, #4]\n    ldr r2, [sp, #0x30]\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    str r0, [r4, #8]\n    str r7, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldr r0, [r5, #8]\n    ldr r1, [sp, #0x2c]\n    ldr r2, [sp, #0x50]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r4, #0xc]\n    str r7, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldr r0, [r5, #0xc]\n    ldr r1, [sp, #0x2c]\n    ldr r2, [sp, #0x54]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #4]\n    bl sub_0200ADA4\n    cmp r0, #0\n    bne _02258F66\n    bl GF_AssertFail\n    ldr r0, [r4, #4]\n    bl sub_0200A740\n    ldr r0, [r4, #8]\n    bl sub_0200B00C\n    cmp r0, #0\n    bne _02258F7A\n    bl GF_AssertFail\n    ldr r0, [r4, #8]\n    bl sub_0200A740\n    mov r0, #0\n    str r7, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r1, #1\n    str r1, [sp, #0x10]\n    ldr r1, [r5]\n    add r4, #0x14\n    str r1, [sp, #0x14]\n    ldr r1, [r5, #4]\n    add r2, r7, #0\n    str r1, [sp, #0x18]\n    ldr r1, [r5, #8]\n    add r3, r7, #0\n    str r1, [sp, #0x1c]\n    ldr r1, [r5, #0xc]\n    str r1, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl CreateSpriteResourcesHeader\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_02258FB8(void) {
    /* Original at 0x02258FB8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r0, #1\n    beq _02258FC8\n    bl GF_AssertFail\n    mov r0, #0\n    str r0, [r4]\n    ldr r0, [r4, #4]\n    bl sub_0200AEB0\n    ldr r0, [r4, #8]\n    bl sub_0200B0A8\n    mov r6, #0\n    ldr r0, [r5]\n    ldr r1, [r4, #4]\n    bl DestroySingle2DGfxResObj\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #4\n    blt _02258FDA\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov90_02258FF0(void) {
    /* Original at 0x02258FF0 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [sp, #0x18]\n    add r6, r2, #0\n    str r0, [sp, #0x18]\n    add r0, r1, #0\n    str r3, [sp]\n    bl SetBothScreensModesAndDisable\n    ldr r0, [sp, #0x18]\n    bl BgConfig_Alloc\n    str r0, [r5]\n    ldr r0, [sp]\n    str r6, [r5, #4]\n    str r0, [r5, #8]\n    ldr r0, _02259080 ; =gSystem + 0x60\n    mov r1, #0\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    ldr r0, [sp]\n    mov r7, #0\n    cmp r0, #0\n    bls _0225907C\n    add r4, r6, #0\n    ldr r1, [r4]\n    ldr r0, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    add r2, r6, #4\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4]\n    ldr r3, [sp, #0x18]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov r1, #0x20\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    ldr r1, [r4]\n    ldr r0, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl BgClearTilemapBufferAndCommit\n    ldr r1, [r4]\n    mov r2, #0\n    lsl r1, r1, #0x18\n    ldr r0, [r5]\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    ldr r1, [r4]\n    ldr r0, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    mov r2, #3\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [sp]\n    add r7, r7, #1\n    add r6, #0x20\n    add r4, #0x20\n    cmp r7, r0\n    blo _02259024\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02259080: .word gSystem + 0x60"
    );
    #endif
}

void ov90_02259084(void) {
    /* Original at 0x02259084 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r1, #3\n    ldr r0, [r5]\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r5, #8]\n    mov r6, #0\n    cmp r0, #0\n    bls _022590B6\n    add r4, r6, #0\n    ldr r1, [r5, #4]\n    ldr r0, [r5]\n    ldr r1, [r1, r4]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl FreeBgTilemapBuffer\n    ldr r0, [r5, #8]\n    add r6, r6, #1\n    add r4, #0x20\n    cmp r6, r0\n    blo _0225909E\n    ldr r0, [r5]\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov90_022590C0(void) {
    DoScheduledBgGpuUpdates();
}

void ov90_022590CC(void) {
    /* Original at 0x022590CC */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    str r1, [sp, #0x14]\n    add r6, r2, #0\n    str r3, [sp, #0x18]\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    ldr r4, [sp, #0x40]\n    str r0, [sp, #8]\n    mov r3, #0x1f\n    str r3, [sp, #0xc]\n    add r2, r0, #0\n    str r4, [sp, #0x10]\n    bl OamManager_Create\n    ldr r3, _02259154 ; =ov90_0225C294\n    add r2, sp, #0x1c\n    add r7, r2, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r1, #0x10\n    add r0, r7, #0\n    add r2, r1, #0\n    str r6, [sp, #0x1c]\n    str r4, [sp, #0x28]\n    bl ObjCharTransfer_InitEx\n    ldr r0, [sp, #0x18]\n    add r1, r4, #0\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    mov r0, #1\n    mov r1, #0x10\n    bl G2dRenderer_SetObjCharTransferReservedRegion\n    mov r0, #1\n    bl G2dRenderer_SetPlttTransferReservedRegion\n    ldr r0, [sp, #0x14]\n    add r1, r5, #4\n    add r2, r4, #0\n    bl G2dRenderer_Init\n    str r0, [r5]\n    bl sub_0203A880\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02259154: .word ov90_0225C294"
    );
    #endif
}

void ov90_02259158(void) {
    SpriteList_Delete();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    OamManager_Free();
}

void ov90_02259170(void) {
    SpriteList_RenderAndAnimateSprites();
}

void ov90_0225917C(void) {
    OamManager_ApplyAndResetBuffers();
}

void ov90_02259184(void) {
    /* Original at 0x02259184 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xec\n    add r3, r4, #0\n    bl NewMsgDataFromNarc\n    str r0, [r5]\n    mov r0, #8\n    mov r1, #0x40\n    add r2, r4, #0\n    bl MessageFormat_New_Custom\n    str r0, [r5, #4]\n    mov r0, #0x80\n    add r1, r4, #0\n    bl String_New\n    str r0, [r5, #8]\n    mov r0, #0x80\n    add r1, r4, #0\n    bl String_New\n    mov r1, #6\n    str r0, [r5, #0xc]\n    mov r0, #0\n    lsl r1, r1, #6\n    add r2, r4, #0\n    bl LoadFontPal1\n    mov r1, #6\n    mov r0, #4\n    lsl r1, r1, #6\n    add r2, r4, #0\n    bl LoadFontPal1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov90_022591D4(void) {
    String_Delete(*((u32*)(r0 + 0xc)));
    String_Delete(*((u32*)(r4 + 8)));
    MessageFormat_Delete(*((u32*)(r4 + 4)));
    DestroyMsgData();
}

void ov90_022591F4(void) {
    MessageFormat_ResetBuffers();
}

void ov90_02259200(void) {
    /* Original at 0x02259200 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0225920C ; =BufferPlayersName\n    add r2, r1, #0\n    ldr r0, [r0, #4]\n    mov r1, #0\n    bx r3\n    nop\n    _0225920C: .word BufferPlayersName"
    );
    #endif
}

void ov90_02259210(void) {
    /* Original at 0x02259210 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0225921C ; =BufferCountryName\n    add r2, r1, #0\n    ldr r0, [r0, #4]\n    mov r1, #0\n    bx r3\n    nop\n    _0225921C: .word BufferCountryName"
    );
    #endif
}

void ov90_02259220(void) {
    BufferCityName(0);
}

void ov90_02259234(void) {
    BufferIntegerAsString(0, 1);
}

void ov90_02259250(void) {
    BufferIntegerAsString(0, 1, 2);
}

void ov90_0225926C(void) {
    /* Original at 0x0225926C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02259278 ; =BufferWiFiPlazaInstrumentName\n    add r2, r1, #0\n    ldr r0, [r0, #4]\n    mov r1, #1\n    bx r3\n    nop\n    _02259278: .word BufferWiFiPlazaInstrumentName"
    );
    #endif
}

void ov90_0225927C(void) {
    /* Original at 0x0225927C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02259288 ; =BufferWiFiPlazaActivityName\n    add r2, r1, #0\n    ldr r0, [r0, #4]\n    mov r1, #0\n    bx r3\n    nop\n    _02259288: .word BufferWiFiPlazaActivityName"
    );
    #endif
}

void ov90_0225928C(void) {
    ReadMsgDataIntoString(r2, *((u32*)(r0 + 0xc)));
    StringExpandPlaceholders(*((u32*)(r5 + 4)), r4, *((u32*)(r5 + 0xc)));
}

void ov90_022592A8(void) {
    ov90_02259350();
}

void ov90_022592C4(void) {
    /* Original at 0x022592C4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r2, #0\n    ldr r0, [r5]\n    ldr r2, [r5, #0xc]\n    add r4, r3, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #4]\n    ldr r1, [r5, #8]\n    ldr r2, [r5, #0xc]\n    bl StringExpandPlaceholders\n    mov r0, #0\n    ldr r1, [r5, #8]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    sub r3, r4, r0\n    bpl _022592F0\n    mov r3, #0\n    add r0, sp, #0x10\n    ldrb r0, [r0, #0x10]\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02259310 ; =0x000F0E00\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r2, [r5, #8]\n    add r0, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _02259310: .word 0x000F0E00"
    );
    #endif
}

void ov90_02259314(void) {
    /* Original at 0x02259314 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r2, #0\n    ldr r0, [r5]\n    ldr r2, [r5, #0xc]\n    add r4, r3, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #4]\n    ldr r2, [r5, #0xc]\n    add r1, r4, #0\n    bl StringExpandPlaceholders\n    mov r3, #0\n    ldr r0, [sp, #0x20]\n    str r3, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0225934C ; =0x0001020F\n    mov r1, #1\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r2, r4, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _0225934C: .word 0x0001020F"
    );
    #endif
}

void ov90_02259350(void) {
    /* Original at 0x02259350 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r2, #0\n    ldr r0, [r5]\n    ldr r2, [r5, #0xc]\n    add r6, r3, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #4]\n    ldr r1, [r5, #8]\n    ldr r2, [r5, #0xc]\n    bl StringExpandPlaceholders\n    add r0, sp, #0x10\n    ldrb r0, [r0, #0x10]\n    mov r1, #0\n    add r3, r6, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r2, [r5, #8]\n    add r0, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov90_0225938C(void) {
    /* Original at 0x0225938C */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x30]\n    add r7, r1, #0\n    str r0, [sp, #0x30]\n    add r0, r2, #0\n    str r3, [sp, #0x18]\n    bl Save_PlayerData_GetOptionsAddr\n    bl Options_GetFrame\n    add r4, r0, #0\n    mov r0, #1\n    bl TextFlags_BeginAutoScroll\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x30]\n    mov r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r7]\n    mov r2, #1\n    mov r3, #0xd\n    bl LoadUserFrameGfx2\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x30]\n    mov r1, #4\n    str r0, [sp, #4]\n    ldr r0, [r7]\n    mov r2, #1\n    mov r3, #0xd\n    bl LoadUserFrameGfx2\n    ldr r4, [sp, #0x14]\n    mov r6, #0\n    add r5, r4, #0\n    cmp r6, #0\n    bne _022593E8\n    mov r2, #2\n    mov r0, #0x13\n    b _022593EC\n    mov r2, #4\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xc\n    str r0, [sp, #0xc]\n    mov r0, #0x1f\n    str r0, [sp, #0x10]\n    lsl r2, r2, #0x18\n    ldr r0, [r7]\n    add r1, r4, #0\n    lsr r2, r2, #0x18\n    mov r3, #2\n    bl AddWindowParameterized\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r1, [sp, #0x30]\n    mov r0, #0x80\n    bl String_New\n    str r0, [r5, #0x24]\n    add r6, r6, #1\n    add r4, #0x10\n    add r5, r5, #4\n    cmp r6, #2\n    blt _022593DE\n    ldr r1, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    str r1, [r0, #0x34]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_02259434(void) {
    /* Original at 0x02259434 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r4, #0\n    add r5, r7, #0\n    add r6, r7, #0\n    add r0, r7, #0\n    add r1, r4, #0\n    bl ov90_022594FC\n    ldr r0, [r5, #0x24]\n    bl String_Delete\n    add r0, r6, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, r5, #4\n    add r6, #0x10\n    cmp r4, #2\n    blt _0225943E\n    bl TextFlags_EndAutoScroll\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_02259464(void) {
    /* Original at 0x02259464 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    str r1, [sp, #4]\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r0, #1\n    bne _0225948A\n    ldr r2, _022594F8 ; =ov90_0225C34C\n    mov r1, #0\n    ldrh r0, [r2]\n    cmp r4, r0\n    bne _02259482\n    ldrh r4, [r2, #2]\n    add r1, r1, #1\n    add r2, r2, #4\n    cmp r1, #0x14\n    blo _0225947A\n    add r0, r5, #0\n    str r0, [sp, #8]\n    add r0, #0x20\n    str r0, [sp, #8]\n    lsl r0, r6, #1\n    ldr r1, [sp, #8]\n    str r0, [sp, #0xc]\n    ldrh r0, [r1, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _022594B4\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #0xc]\n    ldrh r0, [r1, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov90_02259570\n    lsl r7, r6, #4\n    add r0, r5, r7\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #1\n    lsl r3, r6, #2\n    str r0, [sp]\n    add r3, r5, r3\n    ldr r0, [sp, #4]\n    ldr r3, [r3, #0x24]\n    add r1, r4, #0\n    add r2, r5, r7\n    bl ov90_02259314\n    ldr r2, [sp, #8]\n    ldr r1, [sp, #0xc]\n    mov r3, #0xd\n    strh r0, [r2, r1]\n    mov r1, #1\n    add r0, r5, r7\n    add r2, r1, #0\n    bl DrawFrameAndWindow2\n    add r0, r5, r7\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022594F8: .word ov90_0225C34C"
    );
    #endif
}

void ov90_022594FC(void) {
    /* Original at 0x022594FC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov90_02259570\n    add r6, r5, #0\n    add r6, #0x20\n    lsl r7, r4, #1\n    ldrh r0, [r6, r7]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _02259524\n    ldrh r0, [r6, r7]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    lsl r4, r4, #4\n    add r0, r5, r4\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r5, r4\n    bl ClearWindowTilemapAndScheduleTransfer\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_02259538(void) {
    TextPrinterCheckActive(0, 1);
}

void ov90_02259554(void) {
    WaitingIcon_New(1);
}

void ov90_02259570(void) {
    sub_0200F478(0);
}

void ov90_02259588(void) {
    /* Original at 0x02259588 */
    /* Requires manual decompilation - 131 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    mov r1, #0x12\n    add r6, r0, #0\n    add r5, r2, #0\n    mov r0, #0x13\n    lsl r1, r1, #6\n    mov r2, #0\n    bl Sound_SetSceneAndPlayBGM\n    ldr r1, _022596A0 ; =0x000005F4\n    add r0, r5, #0\n    bl Heap_Alloc\n    ldr r2, _022596A0 ; =0x000005F4\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    add r2, r4, #0\n    add r2, #8\n    mov r1, #0x10\n    ldrb r0, [r6]\n    add r6, r6, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _022595B4\n    ldr r3, _022596A4 ; =0x04000050\n    strh r7, [r4, #4]\n    mov r1, #0\n    strh r1, [r3]\n    ldr r0, _022596A8 ; =0x04001050\n    sub r3, #0x50\n    strh r1, [r0]\n    ldr r2, [r3]\n    ldr r1, _022596AC ; =0xFFFF1FFF\n    sub r0, #0x50\n    and r2, r1\n    str r2, [r3]\n    ldr r2, [r0]\n    and r1, r2\n    str r1, [r0]\n    ldr r0, _022596B0 ; =ov90_0225C2CC\n    bl GfGfx_SetBanks\n    add r0, r4, #0\n    strh r5, [r4, #2]\n    bl ov90_0225C178\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x18\n    add r1, #8\n    bl ov90_0225A204\n    add r0, r4, #0\n    ldr r1, _022596B4 ; =ov90_0225C2A4\n    ldr r2, _022596B8 ; =ov90_0225C39C\n    add r0, #0x30\n    mov r3, #5\n    str r5, [sp]\n    bl ov90_02258FF0\n    add r0, r4, #0\n    mov r2, #1\n    add r0, #0x84\n    mov r1, #0x10\n    add r3, r2, #0\n    str r5, [sp]\n    bl ov90_022590CC\n    mov r0, #0x1b\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #1\n    add r2, r5, #0\n    bl ov90_02258DD0\n    add r0, r4, #0\n    add r0, #0x3c\n    add r1, r5, #0\n    bl ov90_02259184\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov90_022596C8\n    add r0, r4, #0\n    ldrb r1, [r4, #0x11]\n    add r0, #8\n    bl ov90_0225888C\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #8\n    bl ov90_022588A4\n    str r5, [sp]\n    add r3, r0, #0\n    add r0, r4, #0\n    add r1, r4, #0\n    ldr r2, [r4, #8]\n    add r0, #0x4c\n    add r1, #0x30\n    bl ov90_0225938C\n    ldr r0, _022596BC ; =ov90_02259794\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r1, _022596C0 ; =0x000005EC\n    mov r2, #0\n    str r0, [r4, r1]\n    ldr r0, _022596C4 ; =ov90_02259B18\n    add r1, r4, #0\n    bl SysTask_CreateOnVWaitQueue\n    mov r1, #0x5f\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldrb r0, [r4, #0x12]\n    cmp r0, #0\n    beq _02259688\n    add r0, r5, #0\n    bl ov00_021E69A8\n    ldr r0, [r4, #8]\n    bl Save_GameStats_Get\n    ldrb r1, [r4, #0x13]\n    cmp r1, #0\n    beq _0225969A\n    mov r1, #0x27\n    bl GameStats_AddScore\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022596A0: .word 0x000005F4\n    _022596A4: .word 0x04000050\n    _022596A8: .word 0x04001050\n    _022596AC: .word 0xFFFF1FFF\n    _022596B0: .word ov90_0225C2CC\n    _022596B4: .word ov90_0225C2A4\n    _022596B8: .word ov90_0225C39C\n    _022596BC: .word ov90_02259794\n    _022596C0: .word 0x000005EC\n    _022596C4: .word ov90_02259B18"
    );
    #endif
}

void ov90_022596C8(void) {
    /* Original at 0x022596C8 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0xc8\n    add r4, r1, #0\n    bl NARC_New\n    mov r1, #0x12\n    lsl r1, r1, #4\n    str r1, [sp]\n    mov r2, #0\n    mov r1, #4\n    add r3, r2, #0\n    add r6, r0, #0\n    str r4, [sp, #4]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldr r2, [r5, #0x30]\n    add r0, r6, #0\n    mov r1, #6\n    mov r3, #1\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r3, #2\n    lsl r3, r3, #8\n    add r0, r6, #0\n    mov r1, #9\n    mov r2, #0\n    add r3, r5, r3\n    str r4, [sp]\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    mov r1, #0x7f\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldr r2, [r5, #0x30]\n    add r0, r6, #0\n    mov r1, #8\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldrh r1, [r5, #4]\n    add r0, r6, #0\n    add r2, r4, #0\n    bl ov90_0225A65C\n    mov r0, #0xc\n    str r0, [sp]\n    mov r0, #0xd\n    str r0, [sp, #4]\n    mov r0, #0xe\n    str r0, [sp, #8]\n    ldr r0, _02259780 ; =0x00001388\n    add r1, r6, #0\n    str r0, [sp, #0xc]\n    mov r0, #0x1b\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r2, #0xb\n    mov r3, #5\n    str r4, [sp, #0x10]\n    bl ov90_02258E54\n    mov r1, #0x72\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #4\n    str r6, [sp]\n    str r4, [sp, #4]\n    add r1, r5, #0\n    add r2, r5, #0\n    ldrh r3, [r5, #4]\n    add r0, r5, r0\n    add r1, #0x30\n    add r2, #0x3c\n    bl ov90_0225A2B0\n    add r0, r6, #0\n    bl NARC_Delete\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _02259780: .word 0x00001388"
    );
    #endif
}

void ov90_02259784(void) {
    /* Original at 0x02259784 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x7f\n    lsl r1, r1, #2\n    ldr r3, _02259790 ; =Heap_Free\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _02259790: .word Heap_Free"
    );
    #endif
}

void ov90_02259794(void) {
    /* Original at 0x02259794 */
    /* Requires manual decompilation - 391 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r4, r1, #0\n    ldrb r0, [r4]\n    cmp r0, #0x10\n    bls _022597A2\n    b _02259AF2\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022597AE: ; jump table\n    mov r0, #6\n    mov r1, #1\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldrh r0, [r4, #2]\n    ldr r3, _02259AD8 ; =0x0000FFFF\n    add r2, r1, #0\n    str r0, [sp, #8]\n    mov r0, #3\n    bl BeginNormalPaletteFade\n    mov r0, #0x73\n    lsl r0, r0, #2\n    add r1, r4, #0\n    ldrh r2, [r4, #2]\n    add r0, r4, r0\n    add r1, #0x30\n    bl ov90_0225A350\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02259AF2\n    mov r0, #0x73\n    lsl r0, r0, #2\n    add r1, r4, #0\n    add r0, r4, r0\n    add r1, #0x30\n    bl ov90_0225A428\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _022598AA\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02259AF2\n    mov r0, #0x73\n    lsl r0, r0, #2\n    add r1, r4, #0\n    add r0, r4, r0\n    add r1, #0x30\n    bl ov90_0225A428\n    cmp r0, #1\n    bne _022598AA\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02259AF2\n    add r0, r4, #0\n    add r1, r4, #0\n    mov r2, #0\n    add r0, #0x4c\n    add r1, #0x3c\n    add r3, r2, #0\n    bl ov90_02259464\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02259AF2\n    add r0, r4, #0\n    add r0, #0x4c\n    mov r1, #0\n    bl ov90_02259538\n    cmp r0, #0\n    beq _022598AA\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    mov r0, #0x40\n    strb r0, [r4, #1]\n    b _02259AF2\n    ldrb r0, [r4, #1]\n    cmp r0, #0\n    beq _022598AA\n    sub r0, r0, #1\n    strb r0, [r4, #1]\n    ldrb r0, [r4, #1]\n    cmp r0, #0\n    bne _022598AA\n    add r0, r4, #0\n    add r0, #0x4c\n    mov r1, #0\n    bl ov90_022594FC\n    mov r0, #0x73\n    lsl r0, r0, #2\n    add r1, r4, #0\n    add r0, r4, r0\n    add r1, #0x30\n    bl ov90_0225A3E0\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02259AF2\n    mov r0, #0x73\n    lsl r0, r0, #2\n    add r1, r4, #0\n    add r0, r4, r0\n    add r1, #0x30\n    bl ov90_0225A544\n    cmp r0, #1\n    beq _022598AC\n    b _02259AF2\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02259AF2\n    mov r0, #0xb9\n    lsl r0, r0, #2\n    add r1, r4, #0\n    ldrh r2, [r4, #2]\n    add r0, r4, r0\n    add r1, #0x30\n    bl ov90_0225A088\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #8\n    add r1, #0x18\n    bl ov90_0225A258\n    ldrb r1, [r4, #0x10]\n    mov r6, #0\n    str r0, [sp, #0x1c]\n    cmp r1, #0\n    ble _02259986\n    mov r0, #0x81\n    lsl r0, r0, #2\n    add r5, r4, r0\n    add r0, r4, #0\n    str r0, [sp, #0x20]\n    add r0, #0x30\n    str r0, [sp, #0x20]\n    add r0, r4, #0\n    str r0, [sp, #0x24]\n    add r0, #0x84\n    str r0, [sp, #0x24]\n    add r0, r4, #0\n    str r0, [sp, #0x28]\n    add r0, #8\n    str r0, [sp, #0x28]\n    add r0, r4, #0\n    str r0, [sp, #0x2c]\n    add r0, #0x3c\n    str r4, [sp, #0x18]\n    add r7, r6, #0\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x20]\n    mov r3, #2\n    str r0, [sp]\n    str r6, [sp, #4]\n    ldrb r0, [r4, #0x11]\n    lsl r3, r3, #8\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x24]\n    str r0, [sp, #0xc]\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    str r0, [sp, #0x10]\n    ldrh r0, [r4, #2]\n    str r0, [sp, #0x14]\n    ldrh r2, [r4, #4]\n    ldr r3, [r4, r3]\n    add r0, r5, #0\n    bl ov90_02259BCC\n    ldr r0, [sp, #0x28]\n    add r1, r6, #0\n    bl ov90_0225888C\n    add r1, r0, #0\n    ldr r0, [sp, #0x28]\n    bl ov90_022588A4\n    mov r1, #0\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x18]\n    ldr r1, [sp, #0x2c]\n    ldr r2, [r2, #0x20]\n    add r0, r5, #0\n    mov r3, #8\n    bl ov90_02259D50\n    add r3, r4, r6\n    ldrb r0, [r3, #0x1c]\n    ldr r1, [sp, #0x2c]\n    ldr r2, [sp, #0x1c]\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    ldrb r3, [r3, #0x18]\n    add r0, r5, #0\n    bl ov90_02259DAC\n    mov r1, #7\n    lsl r2, r7, #0x10\n    add r0, r5, #0\n    mvn r1, r1\n    asr r2, r2, #0x10\n    bl ov90_02259EE0\n    ldr r0, [sp, #0x18]\n    ldrb r1, [r4, #0x10]\n    add r0, r0, #4\n    add r6, r6, #1\n    add r5, #0x38\n    str r0, [sp, #0x18]\n    add r7, r7, #3\n    cmp r6, r1\n    blt _02259904\n    mov r6, #0\n    cmp r1, #0\n    ble _022599AE\n    mov r0, #0x81\n    lsl r0, r0, #2\n    add r7, r4, #0\n    add r5, r4, r0\n    add r7, #0x30\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov90_02259E8C\n    add r0, r5, #0\n    bl ov90_02259EA0\n    ldrb r0, [r4, #0x10]\n    add r6, r6, #1\n    add r5, #0x38\n    cmp r6, r0\n    blt _02259996\n    mov r0, #0x5c\n    strb r0, [r4, #1]\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02259AF2\n    add r0, r4, #0\n    bl ov90_02259B68\n    cmp r0, #1\n    bne _022599EA\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02259AF2\n    ldrb r0, [r4, #1]\n    sub r0, r0, #1\n    strb r0, [r4, #1]\n    ldrb r0, [r4, #1]\n    cmp r0, #0\n    bne _022599EA\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    mov r0, #0x81\n    bl sub_02037AC0\n    ldrb r0, [r4, #0x12]\n    cmp r0, #0\n    bne _022599EC\n    b _02259AF2\n    bl ov00_021E6A4C\n    b _02259AF2\n    mov r0, #0x81\n    bl sub_02037B38\n    cmp r0, #0\n    beq _02259AF2\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02259AF2\n    ldrb r0, [r4, #0x10]\n    mov r7, #0\n    cmp r0, #0\n    ble _02259A2A\n    mov r0, #0x81\n    lsl r0, r0, #2\n    add r6, r7, #0\n    add r5, r4, r0\n    lsl r1, r6, #0x10\n    add r0, r5, #0\n    asr r1, r1, #0x10\n    bl ov90_02259F44\n    ldrb r0, [r4, #0x10]\n    add r7, r7, #1\n    add r6, r6, #3\n    add r5, #0x38\n    cmp r7, r0\n    blt _02259A14\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    mov r0, #8\n    strb r0, [r4, #1]\n    b _02259AF2\n    ldrb r0, [r4, #1]\n    sub r0, r0, #1\n    strb r0, [r4, #1]\n    add r0, r4, #0\n    bl ov90_02259B68\n    ldrb r0, [r4, #1]\n    cmp r0, #0\n    bne _02259AF2\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02259AF2\n    mov r0, #6\n    str r0, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    ldrh r0, [r4, #2]\n    mov r1, #0\n    add r3, r1, #0\n    str r0, [sp, #8]\n    mov r0, #3\n    bl BeginNormalPaletteFade\n    add r0, r4, #0\n    bl ov90_02259B68\n    ldrb r0, [r4, #0x11]\n    cmp r0, #0\n    bne _02259AAE\n    ldrh r0, [r4, #4]\n    cmp r0, #0\n    beq _02259A82\n    cmp r0, #1\n    beq _02259A8E\n    cmp r0, #2\n    beq _02259A9A\n    b _02259AA4\n    ldr r0, _02259ADC ; =ov90_0225C1E8\n    mov r1, #3\n    bl ov90_02259B38\n    str r0, [sp, #0x30]\n    b _02259AA4\n    ldr r0, _02259AE0 ; =_0225C1E0\n    mov r1, #2\n    bl ov90_02259B38\n    str r0, [sp, #0x30]\n    b _02259AA4\n    ldr r0, _02259AE4 ; =ov90_0225C1E4\n    mov r1, #3\n    bl ov90_02259B38\n    str r0, [sp, #0x30]\n    mov r0, #0x1a\n    add r1, sp, #0x30\n    mov r2, #4\n    bl sub_02037030\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02259AF2\n    add r0, r4, #0\n    bl ov90_02259B68\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _02259AF2\n    mov r0, #0xb9\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov90_0225A108\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _02259AF2\n    nop\n    _02259AD8: .word 0x0000FFFF\n    _02259ADC: .word ov90_0225C1E8\n    _02259AE0: .word _0225C1E0\n    _02259AE4: .word ov90_0225C1E4\n    ldrb r1, [r4, #7]\n    cmp r1, #1\n    bne _02259AF2\n    add r0, r0, #1\n    strb r0, [r4]\n    add r0, r4, #0\n    add r0, #0x84\n    bl ov90_02259170\n    ldr r0, [r4, #0x30]\n    mov r1, #3\n    mov r2, #4\n    mov r3, #2\n    bl ScheduleSetBgPosText\n    ldr r0, [r4, #0x30]\n    mov r1, #5\n    mov r2, #4\n    mov r3, #2\n    bl ScheduleSetBgPosText\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_02259B18(void) {
    /* Original at 0x02259B18 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    add r0, #0x30\n    bl ov90_022590C0\n    add r0, r4, #0\n    add r0, #0x84\n    bl ov90_0225917C\n    mov r0, #0xb9\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov90_0225A198\n    pop {r4, pc}"
    );
    #endif
}

void ov90_02259B38(void) {
    /* Original at 0x02259B38 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl MTRandom\n    mov r1, #0x64\n    bl _u32_div_f\n    mov r3, #0\n    add r0, r3, #0\n    cmp r4, #0\n    bls _02259B5E\n    ldrb r2, [r5, r0]\n    add r3, r3, r2\n    cmp r3, r1\n    bhi _02259B64\n    add r0, r0, #1\n    cmp r0, r4\n    blo _02259B50\n    bl GF_AssertFail\n    sub r0, r4, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov90_02259B68(void) {
    /* Original at 0x02259B68 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldrb r0, [r7, #0x10]\n    cmp r0, #0\n    ble _02259BC6\n    mov r0, #0x81\n    lsl r0, r0, #2\n    add r6, r7, r0\n    add r4, r7, #0\n    add r5, r6, #0\n    mov r0, #0x85\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02259BB0\n    add r0, r6, #0\n    bl ov90_02259F7C\n    str r0, [sp, #8]\n    mov r0, #0xb9\n    lsl r0, r0, #2\n    add r0, r7, r0\n    add r1, r5, #0\n    bl ov90_0225A134\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    bne _02259BB4\n    mov r0, #0\n    str r0, [sp]\n    b _02259BB4\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldrb r1, [r7, #0x10]\n    add r0, r0, #1\n    add r4, #0x38\n    add r6, #0x38\n    add r5, #0x38\n    str r0, [sp, #4]\n    cmp r0, r1\n    blt _02259B86\n    ldr r0, [sp]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_02259BCC(void) {
    /* Original at 0x02259BCC */
    /* Requires manual decompilation - 174 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r5, r0, #0\n    ldr r0, [sp, #0x48]\n    add r6, r3, #0\n    str r0, [sp, #0x48]\n    ldr r0, [sp, #0x54]\n    str r1, [sp, #0x1c]\n    ldr r4, [sp, #0x4c]\n    str r0, [sp, #0x54]\n    cmp r2, #0\n    beq _02259BEC\n    cmp r2, #1\n    beq _02259BFA\n    cmp r2, #2\n    bne _02259C10\n    ldr r0, [sp, #0x1c]\n    ldr r2, [sp, #0x50]\n    add r1, r4, #0\n    bl ov90_0225A050\n    add r7, r0, #0\n    b _02259C12\n    ldr r0, [sp, #0x50]\n    cmp r0, r4\n    bls _02259C04\n    add r7, r4, #1\n    b _02259C12\n    cmp r0, r4\n    bne _02259C0C\n    mov r7, #0\n    b _02259C12\n    add r7, r4, #0\n    b _02259C12\n    add r7, r4, #0\n    mov r0, #1\n    mov r1, #2\n    bl SetBgPriority\n    mov r0, #0\n    mov r1, #1\n    bl SetBgPriority\n    ldr r1, [sp, #0x1c]\n    mov r0, #0xc\n    add r2, r1, #0\n    mul r2, r0\n    str r2, [sp, #0x2c]\n    ldr r2, _02259D38 ; =ov90_0225C310\n    ldr r1, [sp, #0x2c]\n    mov r3, #5\n    add r1, r2, r1\n    ldrb r1, [r7, r1]\n    mov r2, #0\n    str r1, [sp, #0x28]\n    add r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp]\n    mov r1, #0x1a\n    str r1, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #0x68\n    add r1, r4, #0\n    mul r1, r0\n    ldr r0, _02259D3C ; =0x00000201\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x48]\n    add r1, r5, #0\n    ldr r0, [r0]\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r0, #0xc\n    str r0, [sp, #8]\n    mov r2, #0\n    ldr r1, _02259D40 ; =ov90_0225C314\n    ldr r0, [sp, #0x2c]\n    str r2, [sp, #0xc]\n    add r0, r1, r0\n    ldrb r0, [r4, r0]\n    ldr r3, [sp, #0x28]\n    mov r1, #1\n    str r0, [sp, #0x10]\n    ldrh r0, [r6]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    ldrh r0, [r6, #2]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x48]\n    ldr r0, [r0]\n    bl CopyToBgTilemapRect\n    ldr r0, [sp, #0x28]\n    ldr r1, _02259D44 ; =ov90_0225C318\n    lsl r0, r0, #3\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x2c]\n    ldr r2, _02259D48 ; =ov90_0225C274\n    add r0, r1, r0\n    ldrb r0, [r7, r0]\n    ldr r3, _02259D4C ; =ov90_0225C276\n    ldr r1, [sp, #0x54]\n    lsl r6, r0, #2\n    ldrsh r2, [r2, r6]\n    str r0, [sp, #0x24]\n    mov r0, #0\n    ldrsh r6, [r3, r6]\n    str r0, [sp]\n    ldr r0, [sp, #0x5c]\n    ldr r3, [sp, #0x20]\n    str r0, [sp, #4]\n    add r3, r6, r3\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x58]\n    ldr r1, [r1]\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl ov90_02258EB4\n    ldr r1, [sp, #0x24]\n    str r0, [r5, #0x10]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    bl Sprite_SetPalOffset\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0x10]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x5c]\n    ldr r3, [sp, #0x20]\n    str r0, [sp, #4]\n    ldr r1, [sp, #0x54]\n    add r3, #0x15\n    str r3, [sp, #0x20]\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x58]\n    ldr r1, [r1]\n    mov r2, #0x18\n    lsr r3, r3, #0x18\n    bl ov90_02258EB4\n    str r0, [r5, #0x14]\n    mov r1, #0\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5, #0x14]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    strb r4, [r5, #0x1a]\n    ldr r0, [sp, #0x1c]\n    strb r7, [r5, #0x1b]\n    strh r0, [r5, #0x18]\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _02259D38: .word ov90_0225C310\n    _02259D3C: .word 0x00000201\n    _02259D40: .word ov90_0225C314\n    _02259D44: .word ov90_0225C318\n    _02259D48: .word ov90_0225C274\n    _02259D4C: .word ov90_0225C276"
    );
    #endif
}

void ov90_02259D50(void) {
    /* Original at 0x02259D50 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r2, #0\n    add r4, r3, #0\n    bl ov90_02259200\n    ldr r0, [sp, #0x1c]\n    add r1, sp, #8\n    cmp r0, #1\n    bne _02259D8A\n    mov r0, #0x10\n    ldrsh r0, [r1, r0]\n    lsl r3, r4, #0x18\n    mov r1, #0xa\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, _02259DA8 ; =0x00050600\n    add r2, r6, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    lsr r3, r3, #0x18\n    bl ov90_02259350\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    mov r0, #0x10\n    ldrsh r0, [r1, r0]\n    lsl r3, r4, #0x18\n    mov r1, #0xa\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r6, #0\n    lsr r3, r3, #0x18\n    bl ov90_022592A8\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _02259DA8: .word 0x00050600"
    );
    #endif
}

void ov90_02259DAC(void) {
    /* Original at 0x02259DAC */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r0, #0\n    add r5, r1, #0\n    add r4, r3, #0\n    cmp r2, #0\n    beq _02259DE8\n    cmp r4, #0\n    beq _02259E14\n    add r0, r5, #0\n    bl ov90_022591F4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov90_02259210\n    mov r0, #0x10\n    str r0, [sp]\n    add r4, sp, #8\n    mov r3, #0x14\n    ldrsh r3, [r4, r3]\n    add r0, r5, #0\n    mov r1, #0xb\n    lsl r3, r3, #0x18\n    add r2, r6, #0\n    lsr r3, r3, #0x18\n    bl ov90_022592A8\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    cmp r4, #0\n    beq _02259E14\n    add r0, r5, #0\n    bl ov90_022591F4\n    ldr r2, [sp, #0x18]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov90_02259220\n    mov r0, #0x10\n    str r0, [sp]\n    add r4, sp, #8\n    mov r3, #0x14\n    ldrsh r3, [r4, r3]\n    add r0, r5, #0\n    mov r1, #0xc\n    lsl r3, r3, #0x18\n    add r2, r6, #0\n    lsr r3, r3, #0x18\n    bl ov90_022592A8\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov90_02259E18(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x14)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x14)), (r4 + 4));
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x14)), 1);
}

void ov90_02259E38(void) {
    /* Original at 0x02259E38 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r1, #0\n    add r1, r2, #0\n    add r6, r0, #0\n    ldr r2, [sp, #0x1c]\n    add r0, r5, #0\n    add r4, r3, #0\n    bl ov90_02259234\n    ldr r0, [sp, #0x1c]\n    add r1, sp, #8\n    cmp r0, #5\n    bne _02259E70\n    mov r0, #0x10\n    ldrsh r0, [r1, r0]\n    lsl r3, r4, #0x18\n    mov r1, #0xe\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r6, #0\n    lsr r3, r3, #0x18\n    bl ov90_022592C4\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0x10\n    ldrsh r0, [r1, r0]\n    lsl r3, r4, #0x18\n    mov r1, #0xd\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r6, #0\n    lsr r3, r3, #0x18\n    bl ov90_022592C4\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov90_02259E8C(void) {
    ScheduleWindowCopyToVram();
    ScheduleBgTilemapBufferTransfer(1);
}

void ov90_02259EA0(void) {
    Sprite_SetDrawFlag();
}

void ov90_02259EAC(void) {
    /* Original at 0x02259EAC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    beq _02259EBE\n    bl Sprite_Delete\n    mov r0, #0\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _02259ECC\n    bl Sprite_Delete\n    mov r0, #0\n    str r0, [r4, #0x14]\n    add r0, r4, #0\n    bl WindowIsInUse\n    cmp r0, #1\n    bne _02259EDC\n    add r0, r4, #0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov90_02259EE0(void) {
    /* Original at 0x02259EE0 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r1, #0\n    ble _02259EFC\n    lsl r0, r1, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02259F0A\n    lsl r0, r1, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r2, r0, #0\n    mov r0, #8\n    str r0, [sp]\n    add r0, r5, #0\n    mov r3, #7\n    ldr r1, _02259F3C ; =0xFFF01000\n    add r0, #0x1c\n    lsl r3, r3, #0xe\n    bl ov90_02258CF0\n    mov r0, #0\n    strh r0, [r5, #0x30]\n    ldr r0, _02259F40 ; =0x0000057E\n    strh r4, [r5, #0x32]\n    str r0, [r5, #0x34]\n    ldr r1, [r5, #0x1c]\n    add r0, r5, #0\n    asr r1, r1, #0xc\n    neg r1, r1\n    bl ov90_02259FC8\n    pop {r3, r4, r5, pc}\n    nop\n    _02259F3C: .word 0xFFF01000\n    _02259F40: .word 0x0000057E"
    );
    #endif
}

void ov90_02259F44(void) {
    /* Original at 0x02259F44 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #8\n    str r0, [sp]\n    add r4, r1, #0\n    add r0, r5, #0\n    ldr r1, [r5, #0x1c]\n    ldr r2, _02259F74 ; =0xFFF01000\n    add r0, #0x1c\n    mov r3, #0\n    bl ov90_02258CF0\n    mov r0, #0\n    strh r0, [r5, #0x30]\n    ldr r0, _02259F78 ; =0x0000057F\n    strh r4, [r5, #0x32]\n    str r0, [r5, #0x34]\n    ldr r1, [r5, #0x1c]\n    add r0, r5, #0\n    asr r1, r1, #0xc\n    neg r1, r1\n    bl ov90_02259FC8\n    pop {r3, r4, r5, pc}\n    _02259F74: .word 0xFFF01000\n    _02259F78: .word 0x0000057F"
    );
    #endif
}

void ov90_02259F7C(void) {
    /* Original at 0x02259F7C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x32\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    bgt _02259FBE\n    mov r0, #0x30\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    bne _02259F9A\n    ldr r0, [r5, #0x34]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl PlaySE\n    mov r1, #0x30\n    ldrsh r0, [r5, r1]\n    add r0, r0, #1\n    strh r0, [r5, #0x30]\n    ldrsh r1, [r5, r1]\n    add r0, r5, #0\n    add r0, #0x1c\n    bl ov90_02258D4C\n    ldr r1, [r5, #0x1c]\n    add r4, r0, #0\n    asr r1, r1, #0xc\n    add r0, r5, #0\n    neg r1, r1\n    bl ov90_02259FC8\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    sub r0, r0, #1\n    strh r0, [r5, #0x32]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov90_02259FC8(void) {
    /* Original at 0x02259FC8 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldrh r0, [r5, #0x18]\n    add r4, r1, #0\n    ldrb r2, [r5, #0x1b]\n    sub r1, r0, #1\n    mov r0, #0xc\n    add r3, r1, #0\n    mul r3, r0\n    ldr r0, _0225A040 ; =ov90_0225C324\n    ldr r6, _0225A044 ; =ov90_0225C31C\n    add r0, r0, r3\n    ldrb r0, [r2, r0]\n    add r3, r6, r3\n    ldrb r2, [r2, r3]\n    lsl r1, r0, #2\n    ldr r0, _0225A048 ; =ov90_0225C276\n    lsl r2, r2, #3\n    ldrsh r0, [r0, r1]\n    add r0, r0, r2\n    ldr r2, _0225A04C ; =ov90_0225C274\n    lsl r0, r0, #0x18\n    ldrsh r1, [r2, r1]\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0xc\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    add r1, r1, r4\n    lsl r1, r1, #0xc\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x10]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldrh r0, [r5, #0x18]\n    add r4, #0x18\n    sub r1, r0, #1\n    add r2, r1, #0\n    mov r0, #0xc\n    mul r2, r0\n    add r0, r6, #0\n    ldrb r1, [r5, #0x1b]\n    add r0, r0, r2\n    ldrb r0, [r1, r0]\n    lsl r0, r0, #3\n    add r0, #0x15\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    lsl r0, r4, #0xc\n    str r0, [sp]\n    lsl r0, r1, #0xc\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x14]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _0225A040: .word ov90_0225C324\n    _0225A044: .word ov90_0225C31C\n    _0225A048: .word ov90_0225C276\n    _0225A04C: .word ov90_0225C274"
    );
    #endif
}

void ov90_0225A050(void) {
    /* Original at 0x0225A050 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    add r5, r0, #0\n    ldr r4, _0225A080 ; =0x00000000\n    beq _0225A076\n    ldr r7, _0225A084 ; =ov90_0225C284\n    lsl r6, r5, #2\n    add r7, r7, r6\n    sub r6, r7, #4\n    ldrb r6, [r6]\n    cmp r1, r6\n    bne _0225A068\n    add r3, r4, #0\n    cmp r2, r6\n    bne _0225A06E\n    add r0, r4, #0\n    add r4, r4, #1\n    add r7, r7, #1\n    cmp r4, r5\n    blo _0225A05E\n    sub r0, r3, r0\n    bpl _0225A07C\n    add r0, r0, r5\n    pop {r4, r5, r6, r7}\n    bx lr\n    _0225A080: .word 0x00000000\n    _0225A084: .word ov90_0225C284"
    );
    #endif
}

void ov90_0225A088(void) {
    /* Original at 0x0225A088 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0xc1\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    add r4, r1, #0\n    str r2, [sp]\n    cmp r0, #0\n    beq _0225A09E\n    bl GF_AssertFail\n    mov r1, #0\n    str r4, [r6]\n    add r3, r1, #0\n    ldr r0, [r4]\n    add r2, r1, #0\n    sub r3, #0xff\n    bl BgSetPosTextAndCommit\n    ldr r0, [r6]\n    mov r2, #0\n    add r3, r2, #0\n    ldr r0, [r0]\n    mov r1, #1\n    sub r3, #0xff\n    bl BgSetPosTextAndCommit\n    mov r7, #6\n    mov r4, #0\n    add r5, r6, #4\n    lsl r7, r7, #6\n    mov r2, #6\n    ldr r0, _0225A100 ; =0x0000FF01\n    add r1, r5, #0\n    lsl r2, r2, #6\n    bl MIi_CpuClear16\n    add r4, r4, #1\n    add r5, r5, r7\n    cmp r4, #2\n    blt _0225A0C6\n    mov r2, #0x61\n    lsl r2, r2, #2\n    ldr r0, [sp]\n    add r1, r6, #4\n    add r2, r6, r2\n    bl sub_02014A08\n    mov r1, #0xc1\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    ldr r0, [r6, r1]\n    mov r1, #0\n    bl sub_02014A78\n    ldr r0, _0225A104 ; =ov90_0225A1B8\n    add r1, r6, #0\n    bl Main_SetHBlankIntrCB\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225A100: .word 0x0000FF01\n    _0225A104: .word ov90_0225A1B8"
    );
    #endif
}

void ov90_0225A108(void) {
    /* Original at 0x0225A108 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xc1\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0225A130\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetHBlankIntrCB\n    mov r0, #0xc1\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_02014A38\n    mov r0, #0xc1\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov90_0225A134(void) {
    /* Original at 0x0225A134 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    mov r1, #0xc1\n    lsl r1, r1, #2\n    str r0, [sp]\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    bne _0225A148\n    bl GF_AssertFail\n    mov r1, #0xc1\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    bl sub_02014A4C\n    ldr r1, _0225A194 ; =ov90_0225C31C\n    add r5, r0, #0\n    mov r6, #0\n    mov r7, #0xc\n    ldrh r0, [r4, #0x18]\n    sub r3, r6, #1\n    add r2, r0, #0\n    mul r2, r7\n    ldrb r0, [r4, #0x1b]\n    add r2, r1, r2\n    add r0, r0, r2\n    sub r0, #0xc\n    ldrb r0, [r0]\n    lsl r0, r0, #3\n    add r2, r3, r0\n    bpl _0225A176\n    add r2, #0xc0\n    ldr r0, [r4, #0x1c]\n    lsl r2, r2, #1\n    asr r0, r0, #0xc\n    add r6, r6, #1\n    strh r0, [r5, r2]\n    cmp r6, #0x30\n    blt _0225A15C\n    mov r1, #0xc1\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #1\n    bl sub_02014A78\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225A194: .word ov90_0225C31C"
    );
    #endif
}

void ov90_0225A198(void) {
    /* Original at 0x0225A198 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xc1\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0225A1B6\n    bl sub_02014A8C\n    mov r0, #0xc1\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl sub_02014A78\n    pop {r4, pc}"
    );
    #endif
}

void ov90_0225A1B8(void) {
    /* Original at 0x0225A1B8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0225A1FC ; =0x04000006\n    ldrh r4, [r0]\n    cmp r4, #0xc0\n    bge _0225A1F8\n    mov r0, #0xc1\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_02014A60\n    add r6, r0, #0\n    ldr r0, _0225A200 ; =0x04000004\n    ldrh r1, [r0]\n    mov r0, #2\n    tst r0, r1\n    beq _0225A1F8\n    lsl r4, r4, #1\n    ldr r0, [r5]\n    mov r1, #0\n    ldrsh r3, [r6, r4]\n    ldr r0, [r0]\n    add r2, r1, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r5]\n    ldrsh r3, [r6, r4]\n    ldr r0, [r0]\n    mov r1, #1\n    mov r2, #0\n    bl BgSetPosTextAndCommit\n    pop {r4, r5, r6, pc}\n    nop\n    _0225A1FC: .word 0x04000006\n    _0225A200: .word 0x04000004"
    );
    #endif
}

void ov90_0225A204(void) {
    /* Original at 0x0225A204 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    str r0, [sp]\n    ldrb r0, [r5, #8]\n    mov r4, #0\n    cmp r0, #0\n    ble _0225A252\n    ldr r6, [sp]\n    add r1, r5, r4\n    ldrb r1, [r1, #4]\n    add r0, r5, #0\n    bl ov90_022588CC\n    str r0, [r6, #8]\n    cmp r0, #0\n    bne _0225A22A\n    bl GF_AssertFail\n    add r0, r5, r4\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    add r7, r0, r4\n    ldr r0, [sp, #4]\n    ldrb r0, [r0, #4]\n    bl sub_020348A8\n    ldr r1, [sp]\n    strb r0, [r1, r4]\n    ldr r0, [sp, #4]\n    ldrb r0, [r0, #4]\n    bl sub_020348CC\n    strb r0, [r7, #4]\n    ldrb r0, [r5, #8]\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, r0\n    blt _0225A216\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_0225A258(void) {
    /* Original at 0x0225A258 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    ldrb r4, [r0, #8]\n    mov r3, #0\n    add r2, r3, #0\n    sub r4, r4, #1\n    cmp r4, #0\n    ble _0225A286\n    mov r5, #1\n    add r4, r1, r2\n    ldrb r6, [r4, #1]\n    ldrb r4, [r1, r2]\n    cmp r4, r6\n    bne _0225A27A\n    cmp r4, #0\n    beq _0225A27A\n    cmp r6, #0\n    bne _0225A27C\n    add r3, r5, #0\n    ldrb r4, [r0, #8]\n    add r2, r2, #1\n    sub r4, r4, #1\n    cmp r2, r4\n    blt _0225A268\n    add r0, r3, #0\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void ov90_0225A28C(void) {
    /* Original at 0x0225A28C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r1, #3\n    bl _u32_div_f\n    add r4, r1, #0\n    add r0, r5, #0\n    mov r1, #3\n    bl _u32_div_f\n    add r1, r4, #1\n    cmp r1, #3\n    bhs _0225A2A8\n    add r4, r1, #0\n    lsl r1, r0, #1\n    add r0, r0, r1\n    add r0, r0, r4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov90_0225A2B0(void) {
    /* Original at 0x0225A2B0 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0xb\n    str r0, [sp]\n    mov r0, #0x14\n    str r0, [sp, #4]\n    mov r0, #0xa\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    ldr r0, _0225A33C ; =0x00000201\n    add r4, r1, #0\n    str r0, [sp, #0x10]\n    add r7, r2, #0\n    add r6, r3, #0\n    ldr r0, [r4]\n    add r1, r5, #0\n    mov r2, #1\n    mov r3, #6\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r1, [sp, #0x2c]\n    mov r0, #0x80\n    bl String_New\n    str r0, [r5, #0x14]\n    add r0, r7, #0\n    add r1, r6, #0\n    bl ov90_0225927C\n    ldr r1, [r5, #0x14]\n    add r0, r7, #0\n    mov r2, #0x10\n    bl ov90_0225928C\n    mov r0, #1\n    mov r1, #0\n    str r6, [r5, #0x10]\n    bl GfGfx_EngineATogglePlanes\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    str r3, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x28]\n    ldr r2, [r4]\n    mov r1, #7\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    str r3, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x28]\n    ldr r2, [r4]\n    mov r1, #0xa\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225A33C: .word 0x00000201"
    );
    #endif
}

void ov90_0225A340(void) {
    RemoveWindow();
    String_Delete(*((u32*)(r4 + 0x14)));
}

void ov90_0225A350(void) {
    /* Original at 0x0225A350 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    strh r0, [r5, #0x2c]\n    strh r0, [r5, #0x2e]\n    ldr r0, [r5, #0x10]\n    add r4, r1, #0\n    add r7, r2, #0\n    lsl r6, r0, #2\n    ldr r1, _0225A3D0 ; =ov90_0225C258\n    ldr r2, _0225A3D4 ; =ov90_0225C228\n    ldr r3, _0225A3D8 ; =ov90_0225C21C\n    mov r0, #0x10\n    str r0, [sp]\n    add r0, r5, #0\n    ldr r1, [r1, r6]\n    ldr r2, [r2, r6]\n    ldr r3, [r3, r6]\n    add r0, #0x18\n    bl ov90_02258CF0\n    ldr r2, [r5, #0x18]\n    add r0, r5, #0\n    add r1, r4, #0\n    asr r2, r2, #0xc\n    bl ov90_0225A5BC\n    mov r0, #2\n    add r1, r7, #0\n    bl FontID_Alloc\n    ldr r1, [r5, #0x14]\n    mov r0, #2\n    mov r2, #0\n    bl FontID_String_GetWidth\n    mov r2, #0\n    str r2, [sp]\n    add r3, r0, #0\n    str r2, [sp, #4]\n    ldr r0, [r5, #0x10]\n    lsr r4, r3, #1\n    lsl r1, r0, #2\n    ldr r0, _0225A3DC ; =ov90_0225C210\n    mov r3, #0x50\n    ldr r0, [r0, r1]\n    mov r1, #2\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r2, [r5, #0x14]\n    add r0, r5, #0\n    sub r3, r3, r4\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #2\n    bl FontID_Release\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225A3D0: .word ov90_0225C258\n    _0225A3D4: .word ov90_0225C228\n    _0225A3D8: .word ov90_0225C21C\n    _0225A3DC: .word ov90_0225C210"
    );
    #endif
}

void ov90_0225A3E0(void) {
    /* Original at 0x0225A3E0 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    mov r0, #0\n    strh r0, [r5, #0x2c]\n    strh r0, [r5, #0x2e]\n    ldr r0, [r5, #0x10]\n    add r4, r1, #0\n    lsl r3, r0, #2\n    ldr r1, _0225A41C ; =ov90_0225C228\n    ldr r2, _0225A420 ; =ov90_0225C1F8\n    mov r0, #8\n    str r0, [sp]\n    add r0, r5, #0\n    ldr r6, _0225A424 ; =ov90_0225C204\n    ldr r1, [r1, r3]\n    ldr r2, [r2, r3]\n    ldr r3, [r6, r3]\n    add r0, #0x18\n    bl ov90_02258CF0\n    ldr r2, [r5, #0x18]\n    add r0, r5, #0\n    add r1, r4, #0\n    asr r2, r2, #0xc\n    bl ov90_0225A60C\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0225A41C: .word ov90_0225C228\n    _0225A420: .word ov90_0225C1F8\n    _0225A424: .word ov90_0225C204"
    );
    #endif
}

void ov90_0225A428(void) {
    /* Original at 0x0225A428 */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0x2e\n    ldrsh r0, [r4, r0]\n    add r5, r1, #0\n    cmp r0, #3\n    bhi _0225A528\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225A444: ; jump table\n    mov r1, #0x2c\n    ldrsh r1, [r4, r1]\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov90_02258D4C\n    ldr r2, [r4, #0x18]\n    add r6, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    asr r2, r2, #0xc\n    bl ov90_0225A60C\n    mov r0, #0x2c\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4, #0x2c]\n    cmp r6, #1\n    bne _0225A528\n    ldr r0, _0225A530 ; =0x00000581\n    bl PlaySE\n    ldr r0, [r4, #0x10]\n    ldr r1, _0225A534 ; =ov90_0225C228\n    lsl r3, r0, #2\n    ldr r2, _0225A538 ; =ov90_0225C234\n    mov r0, #4\n    str r0, [sp]\n    add r0, r4, #0\n    ldr r5, _0225A53C ; =ov90_0225C240\n    ldr r1, [r1, r3]\n    ldr r2, [r2, r3]\n    ldr r3, [r5, r3]\n    add r0, #0x18\n    bl ov90_02258CF0\n    mov r0, #0x2e\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4, #0x2e]\n    mov r0, #0\n    strh r0, [r4, #0x2c]\n    b _0225A528\n    mov r1, #0x2c\n    ldrsh r1, [r4, r1]\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov90_02258D4C\n    ldr r2, [r4, #0x18]\n    add r6, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    asr r2, r2, #0xc\n    bl ov90_0225A60C\n    mov r0, #0x2c\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4, #0x2c]\n    cmp r6, #1\n    bne _0225A528\n    ldr r0, [r4, #0x10]\n    ldr r1, _0225A538 ; =ov90_0225C234\n    lsl r3, r0, #2\n    ldr r2, _0225A534 ; =ov90_0225C228\n    mov r0, #4\n    str r0, [sp]\n    add r0, r4, #0\n    ldr r5, _0225A540 ; =ov90_0225C24C\n    ldr r1, [r1, r3]\n    ldr r2, [r2, r3]\n    ldr r3, [r5, r3]\n    add r0, #0x18\n    bl ov90_02258CF0\n    mov r0, #0x2e\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4, #0x2e]\n    mov r0, #0\n    strh r0, [r4, #0x2c]\n    b _0225A528\n    mov r1, #0x2c\n    ldrsh r1, [r4, r1]\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov90_02258D4C\n    ldr r2, [r4, #0x18]\n    add r6, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    asr r2, r2, #0xc\n    bl ov90_0225A60C\n    mov r0, #0x2c\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4, #0x2c]\n    cmp r6, #1\n    bne _0225A528\n    mov r0, #0x2e\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4, #0x2e]\n    b _0225A528\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0225A530: .word 0x00000581\n    _0225A534: .word ov90_0225C228\n    _0225A538: .word ov90_0225C234\n    _0225A53C: .word ov90_0225C240\n    _0225A540: .word ov90_0225C24C"
    );
    #endif
}

void ov90_0225A544(void) {
    /* Original at 0x0225A544 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #0x2e\n    ldrsh r1, [r5, r1]\n    cmp r1, #0\n    beq _0225A558\n    cmp r1, #1\n    beq _0225A586\n    b _0225A5B8\n    mov r1, #0x2c\n    ldrsh r1, [r5, r1]\n    add r0, #0x18\n    bl ov90_02258D4C\n    ldr r2, [r5, #0x18]\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    asr r2, r2, #0xc\n    bl ov90_0225A60C\n    mov r0, #0x2c\n    ldrsh r0, [r5, r0]\n    add r0, r0, #1\n    strh r0, [r5, #0x2c]\n    cmp r6, #1\n    bne _0225A5B8\n    mov r0, #0x2e\n    ldrsh r0, [r5, r0]\n    add r0, r0, #1\n    strh r0, [r5, #0x2e]\n    b _0225A5B8\n    bl ClearWindowTilemapAndCopyToVram\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov90_0225A5BC\n    ldr r0, [r4]\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov90_0225A5BC(void) {
    /* Original at 0x0225A5BC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, [r0, #0x10]\n    add r5, r1, #0\n    add r4, r2, #0\n    cmp r0, #0\n    beq _0225A5D2\n    cmp r0, #1\n    beq _0225A5D2\n    cmp r0, #2\n    beq _0225A5EC\n    b _0225A606\n    mov r1, #0\n    ldr r0, [r5]\n    add r2, r1, #0\n    add r3, r4, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r5]\n    mov r1, #1\n    mov r2, #0\n    add r3, r4, #0\n    bl BgSetPosTextAndCommit\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5]\n    mov r1, #0\n    mov r2, #3\n    add r3, r4, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r5]\n    mov r1, #1\n    mov r2, #3\n    add r3, r4, #0\n    bl BgSetPosTextAndCommit\n    pop {r3, r4, r5, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov90_0225A60C(void) {
    /* Original at 0x0225A60C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, [r0, #0x10]\n    add r5, r1, #0\n    add r4, r2, #0\n    cmp r0, #0\n    beq _0225A622\n    cmp r0, #1\n    beq _0225A622\n    cmp r0, #2\n    beq _0225A63C\n    b _0225A656\n    mov r1, #0\n    ldr r0, [r5]\n    add r2, r1, #0\n    add r3, r4, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r5]\n    mov r1, #1\n    mov r2, #0\n    add r3, r4, #0\n    bl ScheduleSetBgPosText\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5]\n    mov r1, #0\n    mov r2, #3\n    add r3, r4, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r5]\n    mov r1, #1\n    mov r2, #3\n    add r3, r4, #0\n    bl ScheduleSetBgPosText\n    pop {r3, r4, r5, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov90_0225A65C(void) {
    /* Original at 0x0225A65C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r5, r2, #0\n    cmp r1, #0\n    beq _0225A672\n    cmp r1, #1\n    beq _0225A676\n    cmp r1, #2\n    beq _0225A67A\n    b _0225A67E\n    mov r0, #1\n    b _0225A680\n    mov r0, #2\n    b _0225A680\n    mov r0, #0\n    b _0225A680\n    mov r0, #1\n    lsl r4, r0, #5\n    mov r0, #0xa0\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0\n    add r3, r4, #0\n    str r5, [sp, #8]\n    bl GfGfxLoader_GXLoadPalWithSrcOffsetFromOpenNarc\n    mov r0, #0xa0\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #4\n    add r3, r4, #0\n    str r5, [sp, #8]\n    bl GfGfxLoader_GXLoadPalWithSrcOffsetFromOpenNarc\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov90_0225A6B4(void) {
    /* Original at 0x0225A6B4 */
    /* Requires manual decompilation - 172 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r1, #0\n    add r5, r3, #0\n    add r6, r0, #0\n    ldr r1, _0225A820 ; =0x00000664\n    add r0, r5, #0\n    str r2, [sp, #4]\n    bl Heap_Alloc\n    ldr r2, _0225A820 ; =0x00000664\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    add r2, r4, #0\n    add r2, #0x1c\n    mov r1, #0x18\n    ldrb r0, [r7]\n    add r7, r7, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _0225A6D8\n    add r2, r4, #0\n    add r2, #0xc\n    mov r1, #0x10\n    ldrb r0, [r6]\n    add r6, r6, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _0225A6EA\n    ldr r0, [sp, #4]\n    strb r0, [r4, #7]\n    add r0, r4, #0\n    bl ov90_0225C15C\n    ldr r3, _0225A824 ; =0x04000050\n    mov r1, #0\n    strh r1, [r3]\n    ldr r0, _0225A828 ; =0x04001050\n    sub r3, #0x50\n    strh r1, [r0]\n    ldr r2, [r3]\n    ldr r1, _0225A82C ; =0xFFFF1FFF\n    sub r0, #0x50\n    and r2, r1\n    str r2, [r3]\n    ldr r2, [r0]\n    and r1, r2\n    str r1, [r0]\n    ldr r0, _0225A830 ; =ov90_0225C2F4\n    bl GfGfx_SetBanks\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x34\n    add r1, #0xc\n    strh r5, [r4, #2]\n    bl ov90_0225A204\n    mov r0, #0x10\n    add r1, r5, #0\n    bl GF_CreateVramTransferManager\n    add r0, r4, #0\n    ldr r1, _0225A834 ; =ov90_0225C264\n    ldr r2, _0225A838 ; =ov90_0225C43C\n    add r0, #0x4c\n    mov r3, #6\n    str r5, [sp]\n    bl ov90_02258FF0\n    add r0, r4, #0\n    mov r2, #2\n    add r0, #0xa0\n    mov r1, #0x20\n    add r3, r2, #0\n    str r5, [sp]\n    bl ov90_022590CC\n    mov r0, #0x73\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #2\n    add r2, r5, #0\n    bl ov90_02258DD0\n    add r0, r4, #0\n    add r0, #0x58\n    add r1, r5, #0\n    bl ov90_02259184\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov90_0225A850\n    add r0, r4, #0\n    ldrb r1, [r4, #0x15]\n    add r0, #0xc\n    bl ov90_0225888C\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xc\n    bl ov90_022588A4\n    str r5, [sp]\n    add r3, r0, #0\n    add r0, r4, #0\n    add r1, r4, #0\n    ldr r2, [r4, #0xc]\n    add r0, #0x68\n    add r1, #0x4c\n    bl ov90_0225938C\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    add r1, r4, #0\n    ldrb r2, [r4, #0x16]\n    add r0, r4, r0\n    add r1, #0x4c\n    add r3, r5, #0\n    bl ov90_0225B340\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0xc\n    add r1, #0x34\n    bl ov90_0225A258\n    strb r0, [r4, #5]\n    ldrb r0, [r4, #7]\n    cmp r0, #0\n    beq _0225A7CE\n    cmp r0, #1\n    beq _0225A7CE\n    cmp r0, #2\n    beq _0225A7DE\n    b _0225A7EE\n    ldr r0, _0225A83C ; =ov90_0225A980\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r1, _0225A840 ; =0x00000644\n    str r0, [r4, r1]\n    b _0225A800\n    ldr r0, _0225A844 ; =ov90_0225AE4C\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r1, _0225A840 ; =0x00000644\n    str r0, [r4, r1]\n    b _0225A800\n    bl GF_AssertFail\n    ldr r0, _0225A83C ; =ov90_0225A980\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r1, _0225A840 ; =0x00000644\n    str r0, [r4, r1]\n    ldr r0, _0225A848 ; =ov90_0225B230\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnVWaitQueue\n    ldr r1, _0225A84C ; =0x00000648\n    str r0, [r4, r1]\n    ldrb r0, [r4, #0x16]\n    cmp r0, #0\n    beq _0225A81A\n    add r0, r5, #0\n    bl ov00_021E69A8\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225A820: .word 0x00000664\n    _0225A824: .word 0x04000050\n    _0225A828: .word 0x04001050\n    _0225A82C: .word 0xFFFF1FFF\n    _0225A830: .word ov90_0225C2F4\n    _0225A834: .word ov90_0225C264\n    _0225A838: .word ov90_0225C43C\n    _0225A83C: .word ov90_0225A980\n    _0225A840: .word 0x00000644\n    _0225A844: .word ov90_0225AE4C\n    _0225A848: .word ov90_0225B230\n    _0225A84C: .word 0x00000648"
    );
    #endif
}

void ov90_0225A850(void) {
    /* Original at 0x0225A850 */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0xc8\n    add r4, r1, #0\n    bl NARC_New\n    mov r1, #0x12\n    lsl r1, r1, #4\n    str r1, [sp]\n    mov r2, #0\n    mov r1, #4\n    add r3, r2, #0\n    add r6, r0, #0\n    str r4, [sp, #4]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0x12\n    lsl r0, r0, #4\n    str r0, [sp]\n    mov r1, #4\n    add r0, r6, #0\n    add r2, r1, #0\n    mov r3, #0\n    str r4, [sp, #4]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldr r2, [r5, #0x4c]\n    add r0, r6, #0\n    mov r1, #6\n    mov r3, #1\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r1, #0\n    mov r0, #1\n    str r1, [sp]\n    lsl r0, r0, #0xe\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    str r4, [sp, #0xc]\n    ldr r2, [r5, #0x4c]\n    add r0, r6, #0\n    mov r1, #6\n    mov r3, #5\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r3, #0x96\n    lsl r3, r3, #2\n    add r0, r6, #0\n    mov r1, #9\n    mov r2, #0\n    add r3, r5, r3\n    str r4, [sp]\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    mov r1, #0x95\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldr r2, [r5, #0x4c]\n    add r0, r6, #0\n    mov r1, #8\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldr r2, [r5, #0x4c]\n    add r0, r6, #0\n    mov r1, #8\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldrb r1, [r5, #7]\n    add r0, r6, #0\n    add r2, r4, #0\n    bl ov90_0225A65C\n    mov r0, #0xc\n    str r0, [sp]\n    mov r0, #0xd\n    str r0, [sp, #4]\n    mov r0, #0xe\n    str r0, [sp, #8]\n    ldr r0, _0225A95C ; =0x00001388\n    add r1, r6, #0\n    str r0, [sp, #0xc]\n    mov r0, #0x73\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r2, #0xb\n    mov r3, #5\n    str r4, [sp, #0x10]\n    bl ov90_02258E54\n    mov r1, #0x79\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov90_0225B254\n    mov r3, #0x82\n    lsl r3, r3, #2\n    add r0, r5, r3\n    add r1, r5, #0\n    add r2, r5, #0\n    sub r3, #0x3c\n    str r6, [sp]\n    add r1, #0x4c\n    add r2, #0xa0\n    add r3, r5, r3\n    str r4, [sp, #4]\n    bl ov90_0225B59C\n    add r0, r6, #0\n    bl NARC_Delete\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0225A95C: .word 0x00001388"
    );
    #endif
}

void ov90_0225A960(void) {
    /* Original at 0x0225A960 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x82\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov90_0225B690\n    mov r0, #0x95\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    add r0, r4, #0\n    bl ov90_0225B330\n    pop {r4, pc}"
    );
    #endif
}

void ov90_0225A980(void) {
    /* Original at 0x0225A980 */
    /* Requires manual decompilation - 545 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldrb r1, [r4, #4]\n    cmp r1, #0x17\n    bhi _0225AA8A\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225A998: ; jump table\n    ldr r0, [r4, #0x18]\n    ldr r1, [r0]\n    ldr r0, _0225ACA8 ; =0x0000064C\n    str r1, [r4, r0]\n    ldrb r0, [r4, #0x17]\n    cmp r0, #1\n    bne _0225A9DC\n    mov r0, #0\n    strb r0, [r4, #9]\n    b _0225AA1A\n    add r0, r4, #0\n    bl ov90_0225BA14\n    ldrb r2, [r4, #0x15]\n    add r1, r4, r2\n    add r1, #0x2c\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _0225AA0A\n    lsl r1, r2, #2\n    add r1, r4, r1\n    ldr r1, [r1, #0x1c]\n    cmp r1, r0\n    bls _0225AA0A\n    ldr r0, [r4, #0x18]\n    ldr r0, [r0]\n    bl ov90_0225A28C\n    ldr r1, [r4, #0x18]\n    str r0, [r1]\n    mov r0, #1\n    strb r0, [r4, #9]\n    b _0225AA0E\n    mov r0, #0\n    strb r0, [r4, #9]\n    ldrb r0, [r4, #0x15]\n    cmp r0, #0\n    bne _0225AA1A\n    add r0, r4, #0\n    bl ov90_0225BA38\n    mov r0, #6\n    mov r1, #1\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldrh r0, [r4, #2]\n    ldr r3, _0225ACAC ; =0x0000FFFF\n    add r2, r1, #0\n    str r0, [sp, #8]\n    mov r0, #3\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0225AA8A\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x68\n    add r1, #0x58\n    mov r2, #1\n    mov r3, #0\n    bl ov90_02259464\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    add r0, r4, #0\n    add r0, #0x68\n    mov r1, #0\n    bl ov90_02259538\n    cmp r0, #0\n    beq _0225AA8A\n    mov r0, #0x40\n    strh r0, [r4]\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _0225AA8A\n    sub r0, r0, #1\n    strh r0, [r4]\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _0225AA8C\n    b _0225AE1C\n    add r0, r4, #0\n    add r0, #0x68\n    mov r1, #0\n    mov r5, #1\n    bl ov90_022594FC\n    mov r0, #0xcf\n    lsl r0, r0, #2\n    add r1, r4, #0\n    ldrh r2, [r4, #2]\n    add r0, r4, r0\n    add r1, #0x4c\n    bl ov90_0225A088\n    add r0, r4, #0\n    bl ov90_0225BA14\n    ldrb r6, [r4, #0x14]\n    add r2, r0, #0\n    mov r1, #0\n    cmp r6, #0\n    ble _0225AACC\n    add r3, r4, #0\n    add r7, r1, #0\n    ldr r0, [r3, #0x1c]\n    cmp r0, r2\n    bls _0225AAC4\n    add r5, r7, #0\n    add r1, r1, #1\n    add r3, r3, #4\n    cmp r1, r6\n    blt _0225AABC\n    cmp r5, #1\n    bne _0225AADC\n    ldr r0, _0225ACB0 ; =0x00000652\n    mov r1, #0x10\n    strh r1, [r4, r0]\n    mov r0, #0x16\n    strb r0, [r4, #4]\n    b _0225AE1C\n    ldrb r0, [r4, #4]\n    mov r1, #4\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    mov r0, #0x65\n    lsl r0, r0, #4\n    strh r1, [r4, r0]\n    b _0225AE1C\n    mov r7, #0x65\n    mov r1, #0\n    mov r6, #1\n    lsl r7, r7, #4\n    ldrh r0, [r4, r7]\n    sub r0, r0, #1\n    strh r0, [r4, r7]\n    ldrb r3, [r4, #0x14]\n    mov r0, #0\n    cmp r3, #0\n    ble _0225AB1A\n    mov r2, #0x65\n    lsl r2, r2, #4\n    ldrh r2, [r4, r2]\n    add r5, r4, r0\n    add r5, #0x2c\n    ldrb r5, [r5]\n    cmp r2, r5\n    bne _0225AB14\n    add r1, r6, #0\n    add r0, r0, #1\n    cmp r0, r3\n    blt _0225AB08\n    cmp r1, #0\n    beq _0225AAF4\n    mov r1, #0x65\n    lsl r1, r1, #4\n    ldrh r0, [r4, r1]\n    cmp r0, #3\n    bhi _0225AB4C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225AB34: ; jump table\n    mov r2, #0x10\n    add r0, r1, #2\n    strh r2, [r4, r0]\n    b _0225AB50\n    mov r2, #0x20\n    add r0, r1, #2\n    strh r2, [r4, r0]\n    b _0225AB50\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl ov90_0225B8F0\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    ldr r0, _0225ACB0 ; =0x00000652\n    ldrh r1, [r4, r0]\n    sub r1, r1, #1\n    strh r1, [r4, r0]\n    add r0, r4, #0\n    bl ov90_0225B8F0\n    ldr r0, _0225ACB0 ; =0x00000652\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    bne _0225ABFC\n    ldrb r0, [r4, #0x14]\n    mov r5, #0\n    cmp r0, #0\n    ble _0225ABB2\n    mov r6, #0x65\n    add r7, r5, #0\n    lsl r6, r6, #4\n    add r1, r4, r5\n    add r1, #0x2c\n    ldrb r2, [r1]\n    ldrh r1, [r4, r6]\n    add r0, r7, #0\n    cmp r1, r2\n    bne _0225AB94\n    mov r0, #1\n    b _0225AB9E\n    cmp r1, #1\n    bne _0225AB9E\n    cmp r2, #0\n    bne _0225AB9E\n    mov r0, #1\n    cmp r0, #0\n    beq _0225ABAA\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov90_0225B7FC\n    ldrb r0, [r4, #0x14]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _0225AB82\n    mov r0, #0x65\n    lsl r0, r0, #4\n    ldrh r0, [r4, r0]\n    cmp r0, #1\n    bls _0225ABC2\n    mov r0, #5\n    strb r0, [r4, #4]\n    b _0225AE1C\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    add r0, r4, #0\n    bl ov90_0225B8F0\n    cmp r0, #0\n    beq _0225ABFC\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    add r0, r1, #1\n    strb r0, [r4, #4]\n    add r0, r4, #0\n    bl ov90_0225B274\n    mov r0, #0x1e\n    strh r0, [r4]\n    b _0225AE1C\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _0225ABF6\n    sub r0, r0, #1\n    strh r0, [r4]\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _0225ABFE\n    b _0225AE1C\n    mov r0, #0xa\n    strb r0, [r4, #4]\n    mov r0, #0\n    strh r0, [r4]\n    b _0225AE1C\n    ldrb r1, [r4, #0x15]\n    add r0, r4, r1\n    add r0, #0x2c\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0225AC18\n    mov r5, #0x11\n    b _0225AC1A\n    mov r5, #0x12\n    lsl r1, r1, #2\n    add r1, r4, r1\n    add r0, r4, #0\n    ldr r1, [r1, #0x3c]\n    add r0, #0x58\n    bl ov90_02259200\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x68\n    add r1, #0x58\n    add r2, r5, #0\n    mov r3, #0\n    bl ov90_02259464\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    add r0, r4, #0\n    add r0, #0x68\n    mov r1, #0\n    bl ov90_02259538\n    cmp r0, #0\n    beq _0225AD06\n    add r0, r4, #0\n    bl ov90_0225B978\n    cmp r0, #1\n    bne _0225AD06\n    ldrb r0, [r4, #0x17]\n    cmp r0, #1\n    bne _0225AC68\n    mov r0, #0x66\n    strh r0, [r4]\n    mov r0, #0xe\n    strb r0, [r4, #4]\n    b _0225AE1C\n    mov r0, #0x66\n    strh r0, [r4]\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _0225AC80\n    sub r0, r0, #1\n    strh r0, [r4]\n    b _0225AE1C\n    ldrb r0, [r4, #9]\n    cmp r0, #0\n    beq _0225ACB4\n    ldr r1, [r4, #0x18]\n    add r0, r4, #0\n    ldr r1, [r1]\n    add r0, #0x58\n    bl ov90_0225926C\n    ldr r0, _0225ACA8 ; =0x0000064C\n    ldr r1, [r4, r0]\n    ldr r0, [r4, #0x18]\n    ldr r0, [r0]\n    cmp r1, r0\n    bne _0225ACA2\n    mov r5, #0x13\n    b _0225ACB6\n    mov r5, #2\n    b _0225ACB6\n    nop\n    _0225ACA8: .word 0x0000064C\n    _0225ACAC: .word 0x0000FFFF\n    _0225ACB0: .word 0x00000652\n    mov r5, #9\n    ldrb r1, [r4, #0x15]\n    add r0, r4, #0\n    add r0, #0x58\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r1, [r1, #0x3c]\n    bl ov90_02259200\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x68\n    add r1, #0x58\n    add r2, r5, #0\n    mov r3, #0\n    bl ov90_02259464\n    mov r0, #0xd\n    strb r0, [r4, #4]\n    b _0225AE1C\n    add r0, r4, #0\n    add r0, #0x68\n    mov r1, #0\n    bl ov90_02259538\n    cmp r0, #0\n    beq _0225AD06\n    mov r0, #0x66\n    strh r0, [r4]\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _0225AD06\n    sub r0, r0, #1\n    strh r0, [r4]\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _0225AD08\n    b _0225AE1C\n    add r0, r4, #0\n    add r0, #0x68\n    mov r1, #0\n    bl ov90_022594FC\n    mov r0, #0x1e\n    strh r0, [r4]\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _0225AD2A\n    sub r0, r0, #1\n    strh r0, [r4]\n    b _0225AE1C\n    mov r0, #0x82\n    bl sub_02037AC0\n    ldrb r0, [r4, #0x16]\n    cmp r0, #0\n    beq _0225AD3A\n    bl ov00_021E6A4C\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    mov r0, #0x82\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0225AE1C\n    ldrb r0, [r4, #0x17]\n    cmp r0, #0\n    beq _0225AD58\n    mov r0, #0x13\n    strb r0, [r4, #4]\n    b _0225AE1C\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r1, #0\n    ldrh r0, [r4, #2]\n    add r2, r1, #0\n    add r3, r1, #0\n    str r0, [sp, #8]\n    mov r0, #3\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0225AE1C\n    mov r0, #0x15\n    strb r0, [r4, #4]\n    b _0225AE1C\n    add r0, r4, #0\n    bl ov90_0225B9A8\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    ldrh r0, [r4, #2]\n    add r1, r4, #0\n    add r2, r4, #0\n    str r0, [sp]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldrb r3, [r4, #7]\n    add r0, r4, r0\n    add r1, #0x68\n    add r2, #0x58\n    bl ov90_0225B38C\n    cmp r0, #0\n    beq _0225AE1C\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov90_0225B538\n    strb r0, [r4, #8]\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    mov r0, #0xcf\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov90_0225A108\n    mov r0, #1\n    strb r0, [r4, #6]\n    b _0225AE1C\n    ldr r0, _0225AE48 ; =0x00000652\n    ldrh r1, [r4, r0]\n    sub r1, r1, #1\n    strh r1, [r4, r0]\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    bne _0225AE1C\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225AE1C\n    ldrb r0, [r4, #0x14]\n    mov r5, #0\n    cmp r0, #0\n    ble _0225AE18\n    sub r1, r0, #1\n    add r0, r4, r5\n    add r0, #0x2c\n    strb r1, [r0]\n    add r2, r4, r5\n    add r2, #0x2c\n    ldrb r2, [r2]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov90_0225B7FC\n    ldrb r0, [r4, #0x14]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _0225ADFA\n    mov r0, #7\n    strb r0, [r4, #4]\n    add r0, r4, #0\n    bl ov90_0225B2A8\n    add r0, r4, #0\n    add r0, #0xa0\n    bl ov90_02259170\n    ldr r0, [r4, #0x4c]\n    mov r1, #3\n    mov r2, #4\n    mov r3, #2\n    bl ScheduleSetBgPosText\n    ldr r0, [r4, #0x4c]\n    mov r1, #5\n    mov r2, #4\n    mov r3, #2\n    bl ScheduleSetBgPosText\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225AE48: .word 0x00000652"
    );
    #endif
}

void ov90_0225AE4C(void) {
    /* Original at 0x0225AE4C */
    /* Requires manual decompilation - 437 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r4, r1, #0\n    ldrb r0, [r4, #4]\n    cmp r0, #0x14\n    bhi _0225AF36\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225AE64: ; jump table\n    ldrb r0, [r4, #0x17]\n    cmp r0, #1\n    bne _0225AE9A\n    mov r0, #0\n    strb r0, [r4, #9]\n    b _0225AEC0\n    ldr r0, [r4, #0x30]\n    cmp r0, #0xa\n    blo _0225AEB0\n    ldr r0, [r4, #0x18]\n    ldr r0, [r0]\n    bl ov90_0225A28C\n    ldr r1, [r4, #0x18]\n    str r0, [r1]\n    mov r0, #1\n    b _0225AEB2\n    mov r0, #0\n    strb r0, [r4, #9]\n    ldrb r0, [r4, #0x15]\n    cmp r0, #0\n    bne _0225AEC0\n    add r0, r4, #0\n    bl ov90_0225BAA0\n    mov r0, #6\n    mov r1, #1\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldrh r0, [r4, #2]\n    ldr r3, _0225B1C4 ; =0x0000FFFF\n    add r2, r1, #0\n    str r0, [sp, #8]\n    mov r0, #3\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0225AF36\n    ldrb r0, [r4, #4]\n    mov r1, #4\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    mov r0, #0x65\n    lsl r0, r0, #4\n    strh r1, [r4, r0]\n    b _0225B204\n    add r0, r4, #0\n    add r0, #0x68\n    add r1, #0x58\n    mov r2, #1\n    mov r3, #0\n    bl ov90_02259464\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    add r0, r4, #0\n    add r0, #0x68\n    mov r1, #0\n    bl ov90_02259538\n    cmp r0, #0\n    beq _0225AF36\n    mov r0, #0x66\n    strh r0, [r4]\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _0225AF36\n    sub r0, r0, #1\n    strh r0, [r4]\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _0225AF38\n    b _0225B204\n    add r0, r4, #0\n    add r0, #0x68\n    mov r1, #0\n    bl ov90_022594FC\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    mov r0, #0xcf\n    lsl r0, r0, #2\n    ldrh r2, [r4, #2]\n    add r0, r4, r0\n    add r1, #0x4c\n    bl ov90_0225A088\n    ldrb r1, [r4, #0x14]\n    mov r6, #0\n    cmp r1, #0\n    ble _0225B020\n    mov r0, #0x97\n    lsl r0, r0, #2\n    add r5, r4, r0\n    add r0, r4, #0\n    str r0, [sp, #0x1c]\n    add r0, #0x4c\n    str r0, [sp, #0x1c]\n    add r0, r4, #0\n    str r0, [sp, #0x20]\n    add r0, #0xa0\n    str r0, [sp, #0x20]\n    add r0, r4, #0\n    str r0, [sp, #0x24]\n    add r0, #0xc\n    str r0, [sp, #0x24]\n    add r0, r4, #0\n    str r0, [sp, #0x28]\n    add r0, #0x58\n    str r4, [sp, #0x18]\n    add r7, r6, #0\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x1c]\n    mov r3, #0x96\n    str r0, [sp]\n    str r6, [sp, #4]\n    ldrb r0, [r4, #0x15]\n    lsl r3, r3, #2\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x20]\n    str r0, [sp, #0xc]\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    str r0, [sp, #0x10]\n    ldrh r0, [r4, #2]\n    str r0, [sp, #0x14]\n    ldrb r2, [r4, #7]\n    ldr r3, [r4, r3]\n    add r0, r5, #0\n    bl ov90_02259BCC\n    ldr r0, [sp, #0x24]\n    add r1, r6, #0\n    bl ov90_0225888C\n    add r1, r0, #0\n    ldr r0, [sp, #0x24]\n    bl ov90_022588A4\n    mov r1, #0\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x18]\n    ldr r1, [sp, #0x28]\n    ldr r2, [r2, #0x3c]\n    add r0, r5, #0\n    mov r3, #8\n    bl ov90_02259D50\n    add r0, r4, r6\n    add r0, #0x38\n    ldrb r0, [r0]\n    add r3, r4, r6\n    add r3, #0x34\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    ldrb r2, [r4, #5]\n    ldrb r3, [r3]\n    ldr r1, [sp, #0x28]\n    add r0, r5, #0\n    bl ov90_02259DAC\n    ldr r1, [sp, #0x1c]\n    add r0, r5, #0\n    bl ov90_02259E8C\n    add r0, r5, #0\n    bl ov90_02259EA0\n    mov r1, #7\n    lsl r2, r7, #0x10\n    add r0, r5, #0\n    mvn r1, r1\n    asr r2, r2, #0x10\n    bl ov90_02259EE0\n    ldr r0, [sp, #0x18]\n    ldrb r1, [r4, #0x14]\n    add r0, r0, #4\n    add r6, r6, #1\n    add r5, #0x38\n    str r0, [sp, #0x18]\n    add r7, r7, #3\n    cmp r6, r1\n    blt _0225AF8A\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    mov r0, #0x10\n    strh r0, [r4]\n    b _0225B204\n    add r0, r4, #0\n    bl ov90_0225B8F0\n    cmp r0, #1\n    bne _0225B0BE\n    ldrh r0, [r4]\n    sub r0, r0, #1\n    strh r0, [r4]\n    ldrh r0, [r4]\n    cmp r0, #0\n    bne _0225B0BE\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r1, [r4, #0x30]\n    add r0, r4, r0\n    bl ov90_0225B6B0\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    mov r0, #0x82\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, #0x4c\n    bl ov90_0225B6C4\n    cmp r0, #1\n    bne _0225B0BE\n    ldrb r0, [r4, #9]\n    cmp r0, #1\n    bne _0225B072\n    add r0, r4, #0\n    bl ov90_0225B954\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    add r0, r4, #0\n    ldr r1, [r4, #0x30]\n    add r0, #0x58\n    bl ov90_02259250\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x68\n    add r1, #0x58\n    mov r2, #7\n    mov r3, #0\n    bl ov90_02259464\n    mov r0, #0x66\n    strh r0, [r4]\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    add r0, r4, #0\n    add r0, #0x68\n    mov r1, #0\n    bl ov90_02259538\n    cmp r0, #1\n    bne _0225B0BE\n    ldrh r0, [r4]\n    cmp r0, #0\n    bne _0225B0D8\n    add r0, r4, #0\n    bl ov90_0225B978\n    cmp r0, #1\n    beq _0225B0C0\n    b _0225B204\n    ldrb r0, [r4, #0x17]\n    cmp r0, #1\n    bne _0225B0D0\n    mov r0, #0x66\n    strh r0, [r4]\n    mov r0, #0xc\n    strb r0, [r4, #4]\n    b _0225B204\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    sub r0, r0, #1\n    strh r0, [r4]\n    b _0225B204\n    ldrb r0, [r4, #9]\n    cmp r0, #0\n    beq _0225B0E8\n    mov r2, #8\n    b _0225B0EA\n    mov r2, #9\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x68\n    add r1, #0x58\n    mov r3, #0\n    bl ov90_02259464\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    add r0, r4, #0\n    add r0, #0x68\n    mov r1, #0\n    bl ov90_02259538\n    cmp r0, #0\n    beq _0225B204\n    mov r0, #0x66\n    strh r0, [r4]\n    ldrb r0, [r4, #9]\n    cmp r0, #0\n    beq _0225B11E\n    mov r0, #0xd\n    strb r0, [r4, #4]\n    b _0225B204\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _0225B204\n    sub r0, r0, #1\n    strh r0, [r4]\n    ldrh r0, [r4]\n    cmp r0, #0\n    bne _0225B204\n    mov r0, #0xe\n    strb r0, [r4, #4]\n    b _0225B204\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _0225B146\n    sub r0, r0, #1\n    strh r0, [r4]\n    ldrh r0, [r4]\n    cmp r0, #0\n    bne _0225B204\n    mov r0, #0xe\n    strb r0, [r4, #4]\n    b _0225B204\n    ldrb r0, [r4, #0x16]\n    cmp r0, #0\n    beq _0225B15C\n    bl ov00_021E6A4C\n    mov r0, #0x82\n    bl sub_02037AC0\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    mov r0, #0x82\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0225B204\n    ldrb r0, [r4, #0x17]\n    cmp r0, #0\n    beq _0225B180\n    mov r0, #0x12\n    strb r0, [r4, #4]\n    b _0225B204\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r1, #0\n    ldrh r0, [r4, #2]\n    add r2, r1, #0\n    add r3, r1, #0\n    str r0, [sp, #8]\n    mov r0, #3\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0225B204\n    mov r0, #0x14\n    strb r0, [r4, #4]\n    b _0225B204\n    add r0, r4, #0\n    bl ov90_0225B9A8\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    _0225B1C4: .word 0x0000FFFF\n    ldrh r0, [r4, #2]\n    add r2, r4, #0\n    add r1, #0x68\n    str r0, [sp]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldrb r3, [r4, #7]\n    add r0, r4, r0\n    add r2, #0x58\n    bl ov90_0225B38C\n    cmp r0, #0\n    beq _0225B204\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov90_0225B538\n    strb r0, [r4, #8]\n    ldrb r0, [r4, #4]\n    add r0, r0, #1\n    strb r0, [r4, #4]\n    b _0225B204\n    mov r0, #0xcf\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov90_0225A108\n    mov r0, #1\n    strb r0, [r4, #6]\n    add r0, r4, #0\n    bl ov90_0225B2A8\n    add r0, r4, #0\n    add r0, #0xa0\n    bl ov90_02259170\n    ldr r0, [r4, #0x4c]\n    mov r1, #3\n    mov r2, #4\n    mov r3, #2\n    bl ScheduleSetBgPosText\n    ldr r0, [r4, #0x4c]\n    mov r1, #5\n    mov r2, #4\n    mov r3, #2\n    bl ScheduleSetBgPosText\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_0225B230(void) {
    /* Original at 0x0225B230 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl GF_RunVramTransferTasks\n    add r0, r4, #0\n    add r0, #0x4c\n    bl ov90_022590C0\n    add r0, r4, #0\n    add r0, #0xa0\n    bl ov90_0225917C\n    mov r0, #0xcf\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov90_0225A198\n    pop {r4, pc}"
    );
    #endif
}

void ov90_0225B254(void) {
    GfGfxLoader_GetPlttDataFromOpenNarc(5);
}

void ov90_0225B274(void) {
    /* Original at 0x0225B274 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _0225B2A4 ; =0x0000065E\n    mov r2, #1\n    strh r2, [r0, r1]\n    ldrb r3, [r0, #0x14]\n    mov r2, #0\n    cmp r3, #0\n    ble _0225B2A0\n    add r1, r0, r2\n    add r1, #0x2c\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _0225B29A\n    ldrb r1, [r0, #0x15]\n    cmp r1, r2\n    bne _0225B29A\n    bl ov90_0225B954\n    pop {r3, pc}\n    add r2, r2, #1\n    cmp r2, r3\n    blt _0225B284\n    pop {r3, pc}\n    nop\n    _0225B2A4: .word 0x0000065E"
    );
    #endif
}

void ov90_0225B2A8(void) {
    /* Original at 0x0225B2A8 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0225B320 ; =0x0000065E\n    ldrh r1, [r5, r0]\n    cmp r1, #0\n    beq _0225B31E\n    sub r0, r0, #2\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    beq _0225B2C0\n    cmp r0, #8\n    bne _0225B30A\n    ldrb r0, [r5, #0x14]\n    mov r6, #0\n    cmp r0, #0\n    ble _0225B30A\n    ldr r4, _0225B324 ; =ov90_0225C1EC\n    ldr r7, _0225B328 ; =0x0000065C\n    add r0, r5, r6\n    add r0, #0x2c\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0225B300\n    ldr r0, _0225B32C ; =0x00000658\n    ldrb r3, [r4]\n    ldr r0, [r5, r0]\n    ldr r2, [r0, #0xc]\n    ldrh r0, [r5, r7]\n    lsl r1, r3, #5\n    cmp r0, #0\n    bne _0225B2EA\n    add r0, r3, #3\n    b _0225B2EC\n    add r0, r3, #7\n    lsl r0, r0, #5\n    add r2, r2, r0\n    mov r0, #0xf\n    mov r3, #0x20\n    bl GF_CreateNewVramTransferTask\n    cmp r0, #0\n    bne _0225B300\n    bl GF_AssertFail\n    ldrb r0, [r5, #0x14]\n    add r6, r6, #1\n    add r4, r4, #1\n    cmp r6, r0\n    blt _0225B2CC\n    ldr r3, _0225B328 ; =0x0000065C\n    ldrh r0, [r5, r3]\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1c\n    sub r1, r1, r2\n    mov r0, #0x1c\n    ror r1, r0\n    add r0, r2, r1\n    strh r0, [r5, r3]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225B320: .word 0x0000065E\n    _0225B324: .word ov90_0225C1EC\n    _0225B328: .word 0x0000065C\n    _0225B32C: .word 0x00000658"
    );
    #endif
}

void ov90_0225B330(void) {
    /* Original at 0x0225B330 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0225B338 ; =0x00000654\n    ldr r3, _0225B33C ; =Heap_Free\n    ldr r0, [r0, r1]\n    bx r3\n    _0225B338: .word 0x00000654\n    _0225B33C: .word Heap_Free"
    );
    #endif
}

void ov90_0225B340(void) {
    /* Original at 0x0225B340 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r6, r2, #0\n    mov r1, #0\n    mov r2, #0x20\n    add r5, r0, #0\n    add r7, r3, #0\n    bl memset\n    ldr r0, [r4]\n    str r0, [r5, #8]\n    mov r0, #4\n    str r0, [r5, #0xc]\n    mov r0, #0x8b\n    str r0, [r5, #0x10]\n    mov r0, #2\n    str r0, [r5, #0x14]\n    mov r0, #0x18\n    strb r0, [r5, #0x18]\n    mov r0, #8\n    strb r0, [r5, #0x19]\n    mov r0, #0\n    strb r0, [r5, #0x1b]\n    add r0, r7, #0\n    bl YesNoPrompt_Create\n    str r0, [r5, #4]\n    strb r6, [r5, #1]\n    mov r0, #1\n    strb r0, [r5, #0x1d]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_0225B380(void) {
    YesNoPrompt_Destroy();
}

void ov90_0225B38C(void) {
    /* Original at 0x0225B38C */
    /* Requires manual decompilation - 181 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldrb r0, [r4]\n    add r5, r1, #0\n    add r6, r2, #0\n    cmp r0, #0xc\n    bhi _0225B42C\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0225B3A8: ; jump table\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0\n    mov r2, #1\n    ldr r5, [sp, #0x20]\n    str r2, [sp, #4]\n    add r1, r0, #0\n    add r3, r0, #0\n    str r5, [sp, #8]\n    bl BeginNormalPaletteFade\n    ldr r1, [sp, #0x20]\n    mov r0, #0\n    bl sub_0203A948\n    ldrb r0, [r4, #1]\n    cmp r0, #0\n    beq _0225B3EC\n    add r0, r5, #0\n    bl ov00_021E69A8\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _0225B530\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0225B42C\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _0225B530\n    add r0, r6, #0\n    add r1, r3, #0\n    bl ov90_0225927C\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #3\n    mov r3, #1\n    bl ov90_02259464\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _0225B530\n    add r0, r5, #0\n    mov r1, #1\n    bl ov90_02259538\n    cmp r0, #1\n    beq _0225B42E\n    b _0225B530\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _0225B530\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #8\n    bl YesNoPrompt_InitFromTemplate\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _0225B530\n    ldr r0, [r4, #4]\n    bl YesNoPrompt_HandleInput\n    sub r1, r0, #1\n    cmp r1, #1\n    bhi _0225B530\n    cmp r0, #1\n    bne _0225B464\n    mov r1, #0\n    mov r0, #0x16\n    add r2, r1, #0\n    bl sub_02037030\n    b _0225B472\n    cmp r0, #2\n    bne _0225B472\n    mov r1, #0\n    mov r0, #0x17\n    add r2, r1, #0\n    bl sub_02037030\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0xf\n    mov r3, #1\n    bl ov90_02259464\n    add r0, r5, #0\n    mov r1, #1\n    bl ov90_02259554\n    ldr r0, [r4, #4]\n    bl YesNoPrompt_Reset\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _0225B530\n    ldrb r1, [r4, #0x1e]\n    cmp r1, #0\n    beq _0225B530\n    ldrb r1, [r4, #0x1f]\n    cmp r1, #0\n    beq _0225B4A6\n    mov r0, #0xa\n    strb r0, [r4]\n    b _0225B530\n    add r0, r0, #1\n    strb r0, [r4]\n    b _0225B530\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #6\n    mov r3, #1\n    bl ov90_02259464\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _0225B530\n    add r0, r5, #0\n    mov r1, #1\n    bl ov90_02259538\n    cmp r0, #1\n    bne _0225B530\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    mov r0, #0x66\n    strh r0, [r4, #2]\n    b _0225B530\n    ldrh r0, [r4, #2]\n    sub r0, r0, #1\n    strh r0, [r4, #2]\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    bne _0225B530\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _0225B530\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    mov r1, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x20]\n    add r2, r1, #0\n    str r0, [sp, #8]\n    mov r0, #4\n    add r3, r1, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _0225B530\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0225B530\n    bl sub_0203A914\n    ldrb r0, [r4, #1]\n    cmp r0, #0\n    beq _0225B522\n    bl ov00_021E6A4C\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _0225B530\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov90_0225B538(void) {
    /* Original at 0x0225B538 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0x1f]\n    bx lr"
    );
    #endif
}

void ov90_0225B53C(void) {
    /* Original at 0x0225B53C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    add r0, r3, #0\n    mov r3, #1\n    lsl r3, r1\n    ldrb r1, [r4, #0x1c]\n    tst r1, r3\n    bne _0225B55A\n    cmp r2, #0\n    bne _0225B554\n    mov r1, #0\n    strb r1, [r4, #0x1d]\n    ldrb r1, [r4, #0x1c]\n    orr r1, r3\n    strb r1, [r4, #0x1c]\n    ldrb r3, [r4, #0x1c]\n    mov r2, #0\n    add r1, r2, #0\n    mov r5, #1\n    add r6, r5, #0\n    lsl r6, r1\n    tst r6, r3\n    beq _0225B56C\n    add r2, r2, #1\n    add r1, r1, #1\n    cmp r1, #4\n    blt _0225B562\n    cmp r2, r0\n    bne _0225B592\n    ldrb r0, [r4, #0x1d]\n    cmp r0, #0\n    beq _0225B588\n    mov r1, #0\n    mov r0, #0x18\n    add r2, r1, #0\n    bl sub_02037030\n    pop {r4, r5, r6, pc}\n    mov r1, #0\n    mov r0, #0x19\n    add r2, r1, #0\n    bl sub_02037030\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov90_0225B594(void) {
    ((u8*)r0)[0x1e] = 1;
    ((u8*)r0)[0x1f] = r1;
}

void ov90_0225B59C(void) {
    /* Original at 0x0225B59C */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r1, #0\n    ldr r1, [sp, #0x44]\n    str r2, [sp, #0x14]\n    str r1, [sp, #0x44]\n    mov r1, #0\n    mov r2, #0x4c\n    add r7, r0, #0\n    add r6, r3, #0\n    ldr r4, [sp, #0x40]\n    bl memset\n    mov r0, #0x20\n    str r0, [sp]\n    ldr r0, [sp, #0x44]\n    mov r3, #7\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0x18\n    mov r2, #0\n    lsl r3, r3, #6\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0x8b\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x44]\n    mov r1, #0x19\n    str r0, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r4, #0\n    mov r3, #2\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    ldr r0, [sp, #0x44]\n    mov r1, #0x1a\n    str r0, [sp]\n    add r0, r4, #0\n    mov r2, #0\n    add r3, r7, #4\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    str r0, [r7]\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0x11\n    str r0, [sp, #4]\n    mov r0, #0x12\n    str r0, [sp, #8]\n    ldr r0, _0225B68C ; =0x00001389\n    add r1, r4, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x44]\n    mov r2, #0xf\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    mov r3, #1\n    bl ov90_02258E54\n    str r0, [r7, #0x44]\n    mov r0, #0x28\n    str r0, [sp, #0x20]\n    mov r0, #0\n    str r0, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r4, #0x4a\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    mov r6, #0\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x1c]\n    lsl r2, r4, #0x10\n    add r0, r6, r0\n    lsl r0, r0, #2\n    add r5, r7, r0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x44]\n    ldr r1, [sp, #0x14]\n    str r0, [sp, #4]\n    ldr r0, [r7, #0x44]\n    ldr r1, [r1]\n    ldr r3, [sp, #0x24]\n    asr r2, r2, #0x10\n    bl ov90_02258EB4\n    str r0, [r5, #8]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #8]\n    ldr r1, [sp, #0x18]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5, #8]\n    mov r1, #0\n    bl Sprite_SetPriority\n    add r6, r6, #1\n    add r4, #0x18\n    cmp r6, #5\n    blt _0225B630\n    ldr r0, [sp, #0x20]\n    add r0, #0x24\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #5\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, #3\n    blt _0225B624\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225B68C: .word 0x00001389"
    );
    #endif
}

void ov90_0225B690(void) {
    /* Original at 0x0225B690 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #8]\n    bl Sprite_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0xf\n    blt _0225B698\n    ldr r0, [r6]\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov90_0225B6B0(void) {
    /* Original at 0x0225B6B0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0x4b\n    strb r1, [r2]\n    add r1, r0, #0\n    mov r2, #0\n    add r1, #0x48\n    strb r2, [r1]\n    add r0, #0x4a\n    strb r2, [r0]\n    bx lr"
    );
    #endif
}

void ov90_0225B6C4(void) {
    /* Original at 0x0225B6C4 */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r0, #0x48\n    ldrb r0, [r0]\n    add r5, r1, #0\n    cmp r0, #3\n    bls _0225B6D6\n    b _0225B7F2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225B6E2: ; jump table\n    ldr r0, [r4, #4]\n    mov r1, #0x8b\n    bl ov90_02258DB0\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x14\n    str r0, [sp, #8]\n    ldr r2, [r4, #4]\n    ldr r0, [r5]\n    mov r1, #2\n    add r2, #0xc\n    bl LoadRectToBgTilemapRect\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x14\n    str r0, [sp, #4]\n    mov r0, #0xe\n    str r0, [sp, #8]\n    mov r2, #0\n    ldr r0, [r5]\n    mov r1, #2\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    ldr r0, [r5]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r4, #0\n    add r0, #0x48\n    ldrb r0, [r0]\n    add r4, #0x48\n    add r0, r0, #1\n    strb r0, [r4]\n    b _0225B7F2\n    add r0, r4, #0\n    add r0, #0x4a\n    ldrb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x4b\n    ldrb r0, [r0]\n    cmp r1, r0\n    bne _0225B750\n    mov r0, #3\n    add r4, #0x48\n    strb r0, [r4]\n    b _0225B7F2\n    ldr r0, _0225B7F8 ; =0x00000594\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0x4a\n    ldrb r0, [r0]\n    mov r1, #0xf\n    bl _s32_div_f\n    lsl r0, r1, #2\n    add r0, r4, r0\n    ldr r0, [r0, #8]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #8\n    add r0, #0x49\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x48\n    ldrb r0, [r0]\n    add r4, #0x48\n    add r0, r0, #1\n    strb r0, [r4]\n    b _0225B7F2\n    add r0, r4, #0\n    add r0, #0x49\n    ldrb r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x49\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x49\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0225B7F2\n    add r0, r4, #0\n    add r0, #0x4a\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x4a\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x4a\n    ldrb r5, [r0]\n    mov r1, #0xf\n    add r0, r5, #0\n    bl _s32_div_f\n    cmp r1, #0\n    bne _0225B7E4\n    add r0, r4, #0\n    add r0, #0x4b\n    ldrb r0, [r0]\n    cmp r5, r0\n    beq _0225B7E4\n    mov r6, #0\n    add r5, r4, #0\n    add r7, r6, #0\n    ldr r0, [r5, #8]\n    add r1, r7, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #8]\n    mov r1, #2\n    bl Sprite_SetAnimCtrlSeq\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, #0xf\n    blt _0225B7CC\n    mov r0, #1\n    add r4, #0x48\n    strb r0, [r4]\n    b _0225B7F2\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0225B7F8: .word 0x00000594"
    );
    #endif
}

void ov90_0225B7FC(void) {
    /* Original at 0x0225B7FC */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r6, r1, #0\n    add r5, r0, #0\n    mov r0, #0x38\n    add r4, r6, #0\n    mul r4, r0\n    add r0, r5, #0\n    add r0, #0x4c\n    str r0, [sp]\n    str r6, [sp, #4]\n    ldrb r0, [r5, #0x15]\n    mov r3, #0x97\n    lsl r3, r3, #2\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0xa0\n    str r0, [sp, #0xc]\n    add r0, r3, #0\n    sub r0, #0x78\n    ldr r0, [r5, r0]\n    add r7, r5, r3\n    str r0, [sp, #0x10]\n    ldrh r0, [r5, #2]\n    str r2, [sp, #0x18]\n    sub r3, r3, #4\n    str r0, [sp, #0x14]\n    ldrb r1, [r5, #0x14]\n    ldrb r2, [r5, #7]\n    ldr r3, [r5, r3]\n    add r0, r7, r4\n    bl ov90_02259BCC\n    add r0, r5, #0\n    add r0, #0xc\n    add r1, r6, #0\n    bl ov90_0225888C\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0xc\n    bl ov90_022588A4\n    lsl r1, r6, #2\n    str r1, [sp, #0x1c]\n    mov r1, #0\n    str r1, [sp]\n    ldr r2, [sp, #0x1c]\n    str r0, [sp, #4]\n    add r2, r5, r2\n    add r1, r5, #0\n    ldr r2, [r2, #0x3c]\n    add r0, r7, r4\n    add r1, #0x58\n    mov r3, #8\n    bl ov90_02259D50\n    add r0, r5, r6\n    add r0, #0x38\n    ldrb r0, [r0]\n    add r3, r5, r6\n    add r1, r5, #0\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    add r3, #0x34\n    ldrb r2, [r5, #5]\n    ldrb r3, [r3]\n    add r0, r7, r4\n    add r1, #0x58\n    bl ov90_02259DAC\n    ldrb r0, [r5, #7]\n    cmp r0, #0\n    bne _0225B896\n    mov r1, #5\n    b _0225B898\n    mov r1, #6\n    ldr r3, [sp, #0x18]\n    mov r0, #0\n    add r6, r3, #1\n    mov r3, #4\n    sub r3, r3, r6\n    lsl r6, r3, #1\n    ldr r3, _0225B8EC ; =ov90_0225C1F0\n    ldr r2, [sp, #0x1c]\n    str r0, [sp]\n    ldrsh r6, [r3, r6]\n    mov r3, #0xb0\n    str r1, [sp, #4]\n    add r2, r5, r2\n    sub r3, r3, r6\n    add r1, r5, #0\n    lsl r3, r3, #0x10\n    ldr r2, [r2, #0x1c]\n    add r0, r7, r4\n    add r1, #0x58\n    asr r3, r3, #0x10\n    bl ov90_02259E38\n    add r5, #0x4c\n    add r0, r7, r4\n    add r1, r5, #0\n    bl ov90_02259E8C\n    ldr r1, [sp, #0x18]\n    add r0, r7, r4\n    bl ov90_02259E18\n    ldr r1, [sp, #0x18]\n    add r0, r7, r4\n    lsl r2, r1, #1\n    ldr r1, _0225B8EC ; =ov90_0225C1F0\n    ldrsh r1, [r1, r2]\n    mov r2, #0\n    bl ov90_02259EE0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225B8EC: .word ov90_0225C1F0"
    );
    #endif
}

void ov90_0225B8F0(void) {
    /* Original at 0x0225B8F0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldrb r0, [r7, #0x14]\n    cmp r0, #0\n    ble _0225B94E\n    mov r0, #0x97\n    lsl r0, r0, #2\n    add r6, r7, r0\n    add r4, r7, #0\n    add r5, r6, #0\n    mov r0, #0x9b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0225B938\n    add r0, r6, #0\n    bl ov90_02259F7C\n    str r0, [sp, #8]\n    mov r0, #0xcf\n    lsl r0, r0, #2\n    add r0, r7, r0\n    add r1, r5, #0\n    bl ov90_0225A134\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    bne _0225B93C\n    mov r0, #0\n    str r0, [sp]\n    b _0225B93C\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldrb r1, [r7, #0x14]\n    add r0, r0, #1\n    add r4, #0x38\n    add r6, #0x38\n    add r5, #0x38\n    str r0, [sp, #4]\n    cmp r0, r1\n    blt _0225B90E\n    ldr r0, [sp]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_0225B954(void) {
    /* Original at 0x0225B954 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x66\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0225B970\n    ldr r0, _0225B974 ; =0x000004BF\n    bl PlayFanfare\n    mov r0, #0x66\n    mov r1, #1\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _0225B974: .word 0x000004BF"
    );
    #endif
}

void ov90_0225B978(void) {
    /* Original at 0x0225B978 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x66\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _0225B996\n    bl IsFanfarePlaying\n    cmp r0, #0\n    bne _0225B996\n    mov r0, #0x66\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    mov r0, #0x66\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    beq _0225B9A4\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov90_0225B9A8(void) {
    /* Original at 0x0225B9A8 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    bl sub_0202C6F4\n    add r4, r0, #0\n    ldrb r0, [r5, #0x14]\n    mov r6, #0\n    cmp r0, #0\n    ble _0225BA12\n    add r7, sp, #0\n    add r0, r5, r6\n    ldrb r0, [r0, #0x10]\n    bl sub_0203484C\n    add r1, r0, #0\n    ldr r0, [r5, #0xc]\n    add r2, r7, #0\n    bl sub_0203A084\n    cmp r0, #0\n    beq _0225B9D8\n    cmp r0, #1\n    bne _0225BA0A\n    ldrb r0, [r5, #7]\n    cmp r0, #0\n    beq _0225B9E8\n    cmp r0, #1\n    beq _0225B9F4\n    cmp r0, #2\n    beq _0225BA00\n    b _0225BA0A\n    ldr r1, [sp]\n    add r0, r4, #0\n    mov r2, #1\n    bl sub_0202C554\n    b _0225BA0A\n    ldr r1, [sp]\n    add r0, r4, #0\n    mov r2, #1\n    bl sub_0202C584\n    b _0225BA0A\n    ldr r1, [sp]\n    add r0, r4, #0\n    mov r2, #1\n    bl sub_0202C5B4\n    ldrb r0, [r5, #0x14]\n    add r6, r6, #1\n    cmp r6, r0\n    blt _0225B9BE\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov90_0225BA14(void) {
    GF_AssertFail(0, 0, 0);
}

void ov90_0225BA38(void) {
    /* Original at 0x0225BA38 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x1c\n    add r1, sp, #0xc\n    mov r4, #0\n    str r4, [r1]\n    str r4, [r1, #4]\n    str r4, [r1, #8]\n    add r5, r0, #0\n    str r4, [r1, #0xc]\n    bl ov90_0225BA14\n    ldrb r2, [r5, #0x14]\n    add r1, r4, #0\n    cmp r2, #0\n    ble _0225BA7E\n    add r2, r5, #0\n    add r3, sp, #0xc\n    add r6, r5, r1\n    add r6, #0x2c\n    ldrb r6, [r6]\n    cmp r6, #0\n    bne _0225BA74\n    ldr r6, [r2, #0x1c]\n    cmp r0, r6\n    beq _0225BA74\n    ldr r6, [r5, #0x18]\n    add r4, r4, #1\n    add r6, r6, r1\n    ldrb r6, [r6, #4]\n    stmia r3!, {r6}\n    ldrb r6, [r5, #0x14]\n    add r1, r1, #1\n    add r2, r2, #4\n    cmp r1, r6\n    blt _0225BA5A\n    cmp r4, #0\n    beq _0225BA9C\n    ldr r0, [sp, #0x10]\n    add r2, r4, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x18]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x18]\n    ldrb r1, [r5, #7]\n    ldr r0, [r0, #0x30]\n    ldr r3, [sp, #0xc]\n    bl ov45_0222ACB8\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov90_0225BAA0(void) {
    /* Original at 0x0225BAA0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    add r1, r0, #0\n    ldrb r2, [r1, #0x14]\n    cmp r2, #0\n    beq _0225BACA\n    ldr r0, [r1, #0x30]\n    cmp r0, #0xa\n    blo _0225BACA\n    ldr r3, [r1, #0x18]\n    ldrb r0, [r3, #5]\n    str r0, [sp]\n    ldrb r0, [r3, #6]\n    str r0, [sp, #4]\n    ldrb r0, [r3, #7]\n    str r0, [sp, #8]\n    ldr r0, [r3, #0x30]\n    ldrb r1, [r1, #7]\n    ldrb r3, [r3, #4]\n    bl ov45_0222ACB8\n    add sp, #0xc\n    pop {pc}"
    );
    #endif
}

void ov90_0225BAD0(void) {
    /* Original at 0x0225BAD0 */
    /* Requires manual decompilation - 117 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r0, #0\n    str r1, [sp, #8]\n    str r2, [sp, #0xc]\n    add r0, #0xc\n    mov r1, #0\n    mov r2, #0xc0\n    str r3, [sp, #0x10]\n    bl memset\n    add r0, r7, #0\n    add r0, #0xcc\n    mov r1, #0\n    mov r2, #0xc0\n    bl memset\n    mov r6, #0\n    strh r6, [r7, #8]\n    mov r0, #0x63\n    strh r6, [r7, #0xa]\n    lsl r0, r0, #2\n    ldr r4, _0225BBC4 ; =ov90_0225C2B4\n    str r6, [r7, r0]\n    add r5, r7, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0xc]\n    str r0, [sp, #4]\n    ldr r2, [r4]\n    ldr r3, [r4, #4]\n    lsl r2, r2, #4\n    lsl r3, r3, #4\n    ldr r0, [sp, #8]\n    asr r2, r2, #0x10\n    asr r3, r3, #0x10\n    bl ov90_02258EB4\n    str r0, [r5]\n    mov r1, #5\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5]\n    mov r1, #0\n    bl Sprite_SetPriority\n    add r6, r6, #1\n    add r4, #0xc\n    add r5, r5, #4\n    cmp r6, #2\n    blt _0225BB02\n    mov r3, #1\n    lsl r3, r3, #0x1a\n    ldr r1, [r3]\n    mov r0, #0xe\n    lsl r0, r0, #0xc\n    and r1, r0\n    ldr r4, [r3]\n    ldr r2, _0225BBC8 ; =0xFFFF1FFF\n    lsr r1, r1, #0xd\n    and r4, r2\n    mov r2, #1\n    bic r1, r2\n    lsl r1, r1, #0xd\n    orr r1, r4\n    add r2, r3, #0\n    str r1, [r3]\n    add r2, #0x48\n    ldrh r4, [r2]\n    mov r1, #0x3f\n    bic r4, r1\n    mov r1, #0x1f\n    orr r4, r1\n    mov r1, #0x20\n    orr r4, r1\n    strh r4, [r2]\n    add r2, r3, #0\n    mov r4, #0\n    add r2, #0x40\n    strh r4, [r2]\n    add r2, r3, #0\n    add r2, #0x44\n    strh r4, [r2]\n    add r2, r3, #0\n    add r2, #0x4a\n    ldrb r4, [r2]\n    mov r2, #0x19\n    lsl r2, r2, #4\n    strb r4, [r7, r2]\n    ldr r3, [r3]\n    and r0, r3\n    lsr r3, r0, #0xd\n    mov r0, #2\n    and r3, r0\n    add r0, r2, #4\n    str r3, [r7, r0]\n    add r0, r2, #1\n    ldrb r3, [r7, r0]\n    mov r0, #0x1f\n    bic r3, r0\n    mov r0, #0xf\n    orr r3, r0\n    add r0, r2, #1\n    strb r3, [r7, r0]\n    ldrb r0, [r7, r0]\n    orr r1, r0\n    add r0, r2, #1\n    strb r1, [r7, r0]\n    ldr r0, _0225BBCC ; =ov90_0225BE08\n    add r1, r7, #0\n    bl Main_SetHBlankIntrCB\n    ldr r0, [r7, #4]\n    mov r1, #2\n    bl Sprite_SetFlipMode\n    add r0, r7, #0\n    bl ov90_0225BD84\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0225BBC4: .word ov90_0225C2B4\n    _0225BBC8: .word 0xFFFF1FFF\n    _0225BBCC: .word ov90_0225BE08"
    );
    #endif
}

void ov90_0225BBD0(void) {
    /* Original at 0x0225BBD0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #8\n    ldrsh r2, [r0, r1]\n    mov r4, #0\n    add r2, r2, #1\n    strh r2, [r0, #8]\n    ldrsh r2, [r0, r1]\n    cmp r2, #8\n    blt _0225BBE6\n    strh r1, [r0, #8]\n    mov r4, #1\n    mov r1, #1\n    bl ov90_0225BC28\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov90_0225BBF0(void) {
    /* Original at 0x0225BBF0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #8\n    ldrsh r2, [r5, r0]\n    mov r1, #0\n    add r4, r1, #0\n    sub r2, r2, #1\n    strh r2, [r5, #8]\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    bgt _0225BC18\n    mov r4, #1\n    strh r4, [r5, #8]\n    ldr r0, [r5]\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #4]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r1, #0\n    add r0, r5, #0\n    mvn r1, r1\n    bl ov90_0225BC28\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov90_0225BC28(void) {
    /* Original at 0x0225BC28 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp]\n    ldr r2, [sp]\n    mov r0, #8\n    ldrsh r2, [r2, r0]\n    mov r3, #0x17\n    add r4, r2, #0\n    mul r4, r3\n    asr r2, r4, #2\n    lsr r2, r2, #0x1d\n    add r2, r4, r2\n    asr r4, r2, #3\n    ldr r2, [sp]\n    strh r4, [r2, #0xa]\n    ldrsh r0, [r2, r0]\n    add r0, r0, r1\n    cmp r0, #8\n    bgt _0225BC62\n    cmp r0, #0\n    blt _0225BC62\n    add r1, r0, #0\n    mul r1, r3\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    asr r0, r0, #3\n    str r0, [sp, #4]\n    b _0225BC6A\n    ldr r0, [sp]\n    mov r1, #0xa\n    ldrsh r0, [r0, r1]\n    str r0, [sp, #4]\n    ldr r0, [sp, #4]\n    ldr r7, _0225BD04 ; =ov90_0225C2B4\n    ldr r4, [sp]\n    mov r6, #0\n    lsl r5, r0, #0xc\n    add r3, r7, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #8\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    cmp r6, #0\n    str r0, [r2]\n    bne _0225BCB6\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    ble _0225BC9C\n    add r0, r5, #0\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0225BCAA\n    add r0, r5, #0\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #0xc]\n    sub r0, r1, r0\n    str r0, [sp, #0xc]\n    b _0225BCE6\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    ble _0225BCCE\n    add r0, r5, #0\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0225BCDC\n    add r0, r5, #0\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #0xc]\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    ldr r0, [r4]\n    add r1, sp, #8\n    bl Sprite_SetMatrix\n    add r6, r6, #1\n    add r7, #0xc\n    add r4, r4, #4\n    cmp r6, #2\n    blt _0225BC74\n    ldr r0, [sp]\n    bl ov90_0225BD84\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225BD04: .word ov90_0225C2B4"
    );
    #endif
}

void ov90_0225BD08(void) {
    /* Original at 0x0225BD08 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    beq _0225BD22\n    bl SysTask_Destroy\n    mov r0, #0x63\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r6, r0]\n    mov r4, #0\n    add r5, r6, #0\n    add r7, r4, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _0225BD34\n    bl Sprite_Delete\n    str r7, [r5]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _0225BD28\n    bl HBlankInterruptDisable\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _0225BD7C ; =0xFFFF1FFF\n    add r3, r1, #0\n    and r3, r0\n    mov r0, #0x65\n    lsl r0, r0, #2\n    ldr r1, [r6, r0]\n    sub r0, r0, #4\n    lsl r1, r1, #0xd\n    orr r1, r3\n    str r1, [r2]\n    add r2, #0x4a\n    ldrh r2, [r2]\n    mov r1, #0x3f\n    ldrb r0, [r6, r0]\n    bic r2, r1\n    lsl r1, r0, #0x1b\n    lsr r1, r1, #0x1b\n    lsl r0, r0, #0x1a\n    orr r1, r2\n    lsr r0, r0, #0x1f\n    beq _0225BD74\n    mov r0, #0x20\n    orr r1, r0\n    ldr r0, _0225BD80 ; =0x0400004A\n    strh r1, [r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225BD7C: .word 0xFFFF1FFF\n    _0225BD80: .word 0x0400004A"
    );
    #endif
}

void ov90_0225BD84(void) {
    /* Original at 0x0225BD84 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    add r0, #0xcc\n    mov r1, #0\n    mov r2, #0xc0\n    bl memset\n    mov r0, #0xa\n    ldrsh r2, [r4, r0]\n    mov r0, #0x17\n    mov r1, #0\n    sub r0, r0, r2\n    cmp r0, #0\n    ble _0225BDC0\n    ldr r7, _0225BDDC ; =0x00000115\n    mov r0, #1\n    mov r2, #0x79\n    mov r5, #0xa\n    mov r6, #0x17\n    add r3, r4, r1\n    strb r0, [r3, r7]\n    sub r3, r2, r1\n    add r3, r4, r3\n    add r3, #0xcc\n    strb r0, [r3]\n    ldrsh r3, [r4, r5]\n    add r1, r1, #1\n    sub r3, r6, r3\n    cmp r1, r3\n    blt _0225BDAA\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0225BDDA\n    ldr r0, _0225BDE0 ; =ov90_0225BDE4\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnVWaitQueue\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225BDDC: .word 0x00000115\n    _0225BDE0: .word ov90_0225BDE4"
    );
    #endif
}

void ov90_0225BDE4(void) {
    /* Original at 0x0225BDE4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    add r0, #0xc\n    add r1, #0xcc\n    mov r2, #0xc0\n    bl memcpy\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl SysTask_Destroy\n    mov r0, #0x63\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov90_0225BE08(void) {
    /* Original at 0x0225BE08 */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r1, _0225BED0 ; =0x04000006\n    ldrh r2, [r1]\n    add r2, r2, #1\n    lsr r4, r2, #0x1f\n    lsl r3, r2, #0x18\n    sub r3, r3, r4\n    mov r2, #0x18\n    ror r3, r2\n    add r2, r4, r3\n    cmp r2, #0xc0\n    bge _0225BECA\n    sub r3, r1, #6\n    ldr r4, [r3]\n    mov r3, #0xe\n    lsl r3, r3, #0xc\n    and r3, r4\n    sub r4, r1, #2\n    ldrh r5, [r4]\n    mov r4, #2\n    lsr r3, r3, #0xd\n    tst r4, r5\n    beq _0225BECA\n    cmp r2, #0x49\n    blt _0225BE3E\n    cmp r2, #0x79\n    ble _0225BE6A\n    ldr r1, _0225BED4 ; =0x0400004A\n    mov r4, #0x3f\n    ldrh r1, [r1]\n    bic r1, r4\n    mov r4, #0x19\n    lsl r4, r4, #4\n    ldrb r4, [r0, r4]\n    lsl r5, r4, #0x1b\n    lsr r5, r5, #0x1b\n    lsl r4, r4, #0x1a\n    orr r1, r5\n    lsr r4, r4, #0x1f\n    beq _0225BE5C\n    mov r4, #0x20\n    orr r1, r4\n    ldr r4, _0225BED4 ; =0x0400004A\n    strh r1, [r4]\n    mov r1, #0x65\n    lsl r1, r1, #2\n    ldr r1, [r0, r1]\n    orr r3, r1\n    b _0225BE98\n    add r1, #0x44\n    ldrh r1, [r1]\n    mov r4, #0x3f\n    bic r1, r4\n    ldr r4, _0225BED8 ; =0x00000191\n    ldrb r4, [r0, r4]\n    lsl r5, r4, #0x1b\n    lsr r5, r5, #0x1b\n    lsl r4, r4, #0x1a\n    orr r1, r5\n    lsr r4, r4, #0x1f\n    beq _0225BE86\n    mov r4, #0x20\n    orr r1, r4\n    ldr r4, _0225BED4 ; =0x0400004A\n    strh r1, [r4]\n    mov r1, #0x65\n    lsl r1, r1, #2\n    ldr r4, [r0, r1]\n    mov r1, #2\n    orr r1, r4\n    mvn r1, r1\n    and r3, r1\n    add r0, r0, r2\n    ldrb r0, [r0, #0xc]\n    cmp r0, #1\n    ldr r0, _0225BEDC ; =0xFFFF1FFF\n    bne _0225BEB8\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    and r1, r0\n    mov r0, #1\n    orr r0, r3\n    lsl r0, r0, #0xd\n    orr r0, r1\n    str r0, [r2]\n    pop {r4, r5}\n    bx lr\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    and r1, r0\n    mov r0, #1\n    bic r3, r0\n    lsl r0, r3, #0xd\n    orr r0, r1\n    str r0, [r2]\n    pop {r4, r5}\n    bx lr\n    nop\n    _0225BED0: .word 0x04000006\n    _0225BED4: .word 0x0400004A\n    _0225BED8: .word 0x00000191\n    _0225BEDC: .word 0xFFFF1FFF"
    );
    #endif
}

void ov90_0225BEE0(void) {
    /* Original at 0x0225BEE0 */
    /* Requires manual decompilation - 156 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r1, #0\n    ldrh r0, [r4, #4]\n    cmp r0, #5\n    bhi _0225BF44\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225BEF8: ; jump table\n    add r0, r4, #0\n    ldr r1, [r4, #0x28]\n    ldr r2, [r4, #8]\n    ldr r3, [r4]\n    add r0, #0x34\n    bl ov90_0225BAD0\n    mov r0, #0x40\n    str r0, [sp]\n    ldr r0, [r4]\n    mov r2, #0x80\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x28]\n    ldr r1, [r4, #8]\n    mov r3, #0x61\n    bl ov90_02258EB4\n    str r0, [r4, #0x30]\n    mov r1, #0\n    bl Sprite_SetPriority\n    ldrh r0, [r4, #4]\n    add sp, #8\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r0, #0x34\n    bl ov90_0225BBD0\n    cmp r0, #1\n    beq _0225BF46\n    b _0225C05E\n    ldrh r0, [r4, #4]\n    add sp, #8\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    mov r0, #0\n    strh r0, [r4, #6]\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x30]\n    bl Sprite_GetAnimationFrame\n    add r6, r0, #0\n    mov r1, #2\n    ldr r0, [r4, #0x30]\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    ldr r0, [r4, #0x30]\n    bl Sprite_GetAnimationFrame\n    add r5, r0, #0\n    cmp r6, r5\n    beq _0225BFC8\n    cmp r5, #0xf\n    bhi _0225BFC8\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225BF82: ; jump table\n    ldr r0, _0225C064 ; =0x000005DD\n    bl PlaySE\n    b _0225BFC8\n    ldr r0, _0225C064 ; =0x000005DD\n    bl PlaySE\n    b _0225BFC8\n    ldr r0, _0225C064 ; =0x000005DD\n    bl PlaySE\n    b _0225BFC8\n    ldr r0, _0225C064 ; =0x000005DD\n    bl PlaySE\n    b _0225BFC8\n    ldr r0, _0225C068 ; =0x00000642\n    bl PlaySE\n    cmp r5, #0xf\n    bne _0225BFFC\n    mov r0, #6\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bne _0225BFDE\n    ldr r0, [r4, #0x30]\n    mov r1, #0\n    bl Sprite_SetPalOffsetRespectVramOffset\n    b _0225BFEA\n    cmp r0, #4\n    bne _0225BFEA\n    ldr r0, [r4, #0x30]\n    mov r1, #1\n    bl Sprite_SetPalOffsetRespectVramOffset\n    mov r0, #6\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #6]\n    ldrsh r0, [r4, r0]\n    cmp r0, #8\n    blt _0225BFFC\n    mov r0, #0\n    strh r0, [r4, #6]\n    ldr r0, [r4, #0x30]\n    bl Sprite_IsAnimated\n    cmp r0, #0\n    bne _0225C05E\n    ldrh r0, [r4, #4]\n    mov r1, #0\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    ldr r0, [r4, #0x30]\n    bl Sprite_SetPalOffsetRespectVramOffset\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r0, #0x34\n    bl ov90_0225BBF0\n    cmp r0, #1\n    bne _0225C05E\n    ldr r0, [r4, #0x30]\n    bl Sprite_Delete\n    mov r1, #0\n    str r1, [r4, #0x30]\n    ldrh r0, [r4, #4]\n    add sp, #8\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    strh r1, [r4, #6]\n    pop {r4, r5, r6, pc}\n    mov r0, #6\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #6]\n    ldrsh r0, [r4, r0]\n    cmp r0, #2\n    blt _0225C05E\n    mov r0, #0\n    strh r0, [r4, #4]\n    add r0, r4, #0\n    add r0, #0x34\n    bl ov90_0225BD08\n    ldr r0, [r4, #0x2c]\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _0225C064: .word 0x000005DD\n    _0225C068: .word 0x00000642"
    );
    #endif
}

void ov90_0225C06C(void) {
    /* Original at 0x0225C06C */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r1, #0\n    ldrh r0, [r4, #4]\n    cmp r0, #5\n    bhi _0225C14C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225C084: ; jump table\n    add r0, r4, #0\n    ldr r1, [r4, #0x28]\n    ldr r2, [r4, #8]\n    ldr r3, [r4]\n    add r0, #0x34\n    bl ov90_0225BAD0\n    mov r0, #0x40\n    str r0, [sp]\n    ldr r0, [r4]\n    mov r2, #0x80\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x28]\n    ldr r1, [r4, #8]\n    mov r3, #0x61\n    bl ov90_02258EB4\n    str r0, [r4, #0x30]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x30]\n    mov r1, #0\n    bl Sprite_SetPriority\n    ldrh r0, [r4, #4]\n    add sp, #8\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    pop {r4, pc}\n    add r0, r4, #0\n    add r0, #0x34\n    bl ov90_0225BBD0\n    cmp r0, #1\n    bne _0225C14C\n    ldr r0, [r4, #0x30]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldrh r0, [r4, #4]\n    add sp, #8\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    mov r0, #0\n    strh r0, [r4, #6]\n    pop {r4, pc}\n    mov r0, #6\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #6]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0x32\n    blt _0225C14C\n    ldrh r0, [r4, #4]\n    add sp, #8\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    pop {r4, pc}\n    add r0, r4, #0\n    add r0, #0x34\n    bl ov90_0225BBF0\n    cmp r0, #1\n    bne _0225C14C\n    ldr r0, [r4, #0x30]\n    bl Sprite_Delete\n    mov r0, #0\n    str r0, [r4, #0x30]\n    strh r0, [r4, #6]\n    ldrh r0, [r4, #4]\n    add sp, #8\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    pop {r4, pc}\n    mov r0, #6\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #6]\n    ldrsh r0, [r4, r0]\n    cmp r0, #2\n    blt _0225C14C\n    mov r0, #0\n    strh r0, [r4, #4]\n    add r0, r4, #0\n    add r0, #0x34\n    bl ov90_0225BD08\n    ldr r0, [r4, #0x2c]\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov90_0225C150(void) {
    /* Original at 0x0225C150 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0225C154 ; =ov90_0225C4FC\n    bx lr\n    _0225C154: .word ov90_0225C4FC"
    );
    #endif
}

u8 ov90_0225C158(void) {
    return 5;
}

void ov90_0225C15C(void) {
    ov90_0225C150();
    ov90_0225C158();
    sub_0203410C(r4, r0, r5);
}

void ov90_0225C178(void) {
    ov90_0225C150();
    ov90_0225C158();
    sub_0203410C(r4, r0, r5);
}

u8 ov90_0225C194(void) {
    return 0;
}

u8 ov90_0225C198(void) {
    return 4;
}

void ov90_0225C19C(void) {
    ov90_02258B24();
}

void ov90_0225C1A8(void) {
    /* Original at 0x0225C1A8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    add r0, r3, #0\n    ldr r3, _0225C1B4 ; =ov90_02258B2C\n    mov r2, #1\n    bx r3\n    nop\n    _0225C1B4: .word ov90_02258B2C"
    );
    #endif
}

void ov90_0225C1B8(void) {
    /* Original at 0x0225C1B8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    add r0, r3, #0\n    ldr r3, _0225C1C4 ; =ov90_02258B2C\n    mov r2, #0\n    bx r3\n    nop\n    _0225C1C4: .word ov90_02258B2C"
    );
    #endif
}

void ov90_0225C1C8(void) {
    ov90_02258B44();
}

void ov90_0225C1D4(void) {
    ov90_02258B44();
}
