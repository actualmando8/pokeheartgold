/* Decompiled from asm/overlay_01_021F4704.s */
#include "global.h"

void ov01_021F4704(void) {
    /* Original at 0x021F4704 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    add r5, r1, #0\n    add r1, r6, #0\n    bl _s32_div_f\n    add r4, r1, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl _s32_div_f\n    cmp r4, r1\n    bne _021F4722\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F4728(void) {
    /* Original at 0x021F4728 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    add r5, r1, #0\n    add r1, r6, #0\n    bl _s32_div_f\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl _s32_div_f\n    cmp r4, r0\n    bne _021F4746\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F474C(void) {
    /* Original at 0x021F474C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x30\n    add r4, r1, #0\n    mul r4, r0\n    add r1, r5, r4\n    ldr r0, [r1, #0x14]\n    cmp r0, #0\n    beq _021F4764\n    ldr r0, [r1, #0xc]\n    bl ov01_021F6614\n    add r1, r5, r4\n    ldr r0, [r1, #0x18]\n    cmp r0, #0\n    beq _021F4772\n    ldr r0, [r1, #0x10]\n    bl ov01_021FB354\n    mov r1, #1\n    add r0, r5, r4\n    str r1, [r0, #0x28]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F477C(void) {
    /* Original at 0x021F477C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    beq _021F478C\n    ldr r0, [r4, #8]\n    bl ov01_021F6614\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _021F4798\n    ldr r0, [r4, #0xc]\n    bl ov01_021FB354\n    mov r0, #0\n    str r0, [r4, #0x10]\n    str r0, [r4, #0x14]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F47A0(void) {
    /* Original at 0x021F47A0 */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r2, #0\n    asr r2, r0, #4\n    lsr r2, r2, #0x1b\n    add r2, r0, r2\n    asr r7, r2, #5\n    asr r2, r1, #4\n    lsr r2, r2, #0x1b\n    add r2, r1, r2\n    asr r6, r2, #5\n    ldr r2, [sp, #0x18]\n    str r3, [sp]\n    ldr r4, [sp, #0x1c]\n    bl ov01_021F5A28\n    ldr r1, [sp, #0x18]\n    bl ov01_021F6328\n    add r1, r6, #0\n    mul r1, r5\n    add r1, r7, r1\n    cmp r0, #3\n    bhi _021F4886\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F47DA: ; jump table\n    sub r2, r1, r5\n    str r1, [r4, #0xc]\n    sub r0, r2, #1\n    str r0, [r4]\n    str r2, [r4, #4]\n    sub r0, r1, #1\n    str r0, [r4, #8]\n    sub r0, r7, #1\n    bpl _021F47FC\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r4]\n    str r0, [r4, #8]\n    sub r0, r6, #1\n    bpl _021F488A\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r4, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    str r1, [r4, #8]\n    sub r0, r1, r5\n    str r0, [r4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    add r0, r1, #1\n    str r0, [r4, #0xc]\n    add r0, r7, #1\n    cmp r0, r5\n    blt _021F4824\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r4, #4]\n    str r0, [r4, #0xc]\n    sub r0, r6, #1\n    bpl _021F488A\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    str r1, [r4, #4]\n    sub r0, r1, #1\n    add r1, r1, r5\n    str r0, [r4]\n    sub r0, r1, #1\n    str r0, [r4, #8]\n    str r1, [r4, #0xc]\n    sub r0, r7, #1\n    bpl _021F484A\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r4]\n    str r0, [r4, #8]\n    ldr r0, [sp]\n    add r1, r6, #1\n    cmp r1, r0\n    ble _021F488A\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r4, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}\n    str r1, [r4]\n    add r0, r1, #1\n    str r0, [r4, #4]\n    add r0, r1, r5\n    str r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    add r0, r7, #1\n    cmp r0, r5\n    blt _021F4876\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r4, #4]\n    str r0, [r4, #0xc]\n    ldr r0, [sp]\n    add r1, r6, #1\n    cmp r1, r0\n    ble _021F488A\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F488C(void) {
    /* Original at 0x021F488C */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    str r1, [sp]\n    mov r6, #0\n    ldr r1, _021F4964 ; =0x00000A74\n    mov r0, #4\n    bl Heap_Alloc\n    ldr r2, _021F4964 ; =0x00000A74\n    mov r1, #0\n    add r7, r0, #0\n    bl MI_CpuFill8\n    lsl r4, r6, #2\n    add r0, r5, r4\n    add r0, #0x90\n    str r7, [r0]\n    add r0, r5, r4\n    add r0, #0x90\n    ldr r2, [r0]\n    ldr r0, _021F4968 ; =0x00000864\n    mov r1, #0\n    str r1, [r2, r0]\n    add r2, r5, r4\n    add r2, #0x90\n    ldr r3, [r2]\n    ldr r2, _021F496C ; =0x00000854\n    ldr r1, [r5]\n    add r0, r6, #0\n    add r2, r3, r2\n    bl ov01_021FACE4\n    add r2, r5, r4\n    add r2, #0x90\n    ldr r3, [r2]\n    ldr r2, _021F4970 ; =0x00000858\n    ldr r1, [r5]\n    add r0, r6, #0\n    add r2, r3, r2\n    bl ov01_021FACEC\n    add r1, r5, #0\n    add r1, #0xbc\n    ldr r1, [r1]\n    mov r0, #4\n    bl ov01_021F3638\n    add r1, r5, r4\n    add r1, #0x90\n    ldr r2, [r1]\n    ldr r1, _021F4974 ; =0x00000868\n    str r0, [r2, r1]\n    add r0, r5, r4\n    add r0, #0x90\n    ldr r2, [r0]\n    mov r1, #0\n    mov r0, #0x86\n    mvn r1, r1\n    lsl r0, r0, #4\n    str r1, [r2, r0]\n    add r0, r1, #0\n    add r1, r5, r4\n    add r1, #0x90\n    mov r2, #2\n    ldr r1, [r1]\n    lsl r2, r2, #0xa\n    bl MIi_CpuClearFast\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _021F4944\n    mov r0, #4\n    lsl r1, r0, #8\n    bl Heap_Alloc\n    add r1, r5, r4\n    add r1, #0x90\n    ldr r2, [r1]\n    mov r1, #0xa7\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    add r0, r5, r4\n    add r0, #0x90\n    ldr r1, [r0]\n    mov r0, #0xa7\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r2, #1\n    mov r1, #0xff\n    lsl r2, r2, #0xa\n    bl MI_CpuFill8\n    add r1, r5, r4\n    add r1, #0x90\n    ldr r2, [r1]\n    ldr r1, _021F4978 ; =0x0000086C\n    mov r0, #0\n    add r1, r2, r1\n    mov r2, #0x81\n    lsl r2, r2, #2\n    bl MIi_CpuClear32\n    add r0, r6, #1\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    cmp r6, #4\n    blo _021F4894\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F4964: .word 0x00000A74\n    _021F4968: .word 0x00000864\n    _021F496C: .word 0x00000854\n    _021F4970: .word 0x00000858\n    _021F4974: .word 0x00000868\n    _021F4978: .word 0x0000086C"
    );
    #endif
}

void ov01_021F497C(void) {
    /* Original at 0x021F497C */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r6, #0\n    ldr r1, _021F49EC ; =0x00000A74\n    mov r0, #4\n    bl Heap_Alloc\n    ldr r2, _021F49EC ; =0x00000A74\n    mov r1, #0\n    add r7, r0, #0\n    bl MI_CpuFill8\n    lsl r4, r6, #2\n    add r0, r5, r4\n    add r0, #0x90\n    str r7, [r0]\n    add r0, r5, r4\n    add r0, #0x90\n    ldr r2, [r0]\n    ldr r0, _021F49F0 ; =0x00000864\n    mov r1, #0\n    str r1, [r2, r0]\n    add r2, r5, r4\n    add r2, #0x90\n    ldr r3, [r2]\n    ldr r2, _021F49F4 ; =0x00000854\n    ldr r1, [r5]\n    add r0, r6, #0\n    add r2, r3, r2\n    bl ov01_021FACE4\n    add r1, r5, #0\n    add r1, #0xbc\n    ldr r1, [r1]\n    mov r0, #4\n    bl ov01_021F3638\n    add r1, r5, r4\n    add r1, #0x90\n    ldr r2, [r1]\n    ldr r1, _021F49F8 ; =0x00000868\n    str r0, [r2, r1]\n    add r0, r5, r4\n    add r0, #0x90\n    ldr r2, [r0]\n    mov r1, #0\n    mov r0, #0x86\n    mvn r1, r1\n    lsl r0, r0, #4\n    str r1, [r2, r0]\n    add r0, r6, #1\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    cmp r6, #4\n    blo _021F4982\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F49EC: .word 0x00000A74\n    _021F49F0: .word 0x00000864\n    _021F49F4: .word 0x00000854\n    _021F49F8: .word 0x00000868"
    );
    #endif
}

void ov01_021F49FC(void) {
    /* Original at 0x021F49FC */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    add r5, r2, #0\n    cmp r6, #0\n    beq _021F4A22\n    mov r0, #4\n    mov r1, #0x10\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    mov r2, #0\n    mov r3, #0x10\n    str r4, [sp]\n    bl NARC_ReadFromMember\n    b _021F4A38\n    bl GF_AssertFail\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0x41\n    add r1, r7, #0\n    mov r2, #4\n    mov r3, #0\n    bl AllocAtEndAndReadFromNarcMemberByIdPair\n    add r4, r0, #0\n    ldr r0, [r4]\n    str r0, [r5]\n    ldr r0, [r4, #4]\n    str r0, [r5, #0xc]\n    ldr r0, [r4, #8]\n    str r0, [r5, #4]\n    ldr r0, [r4, #0xc]\n    str r0, [r5, #8]\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F4A50(void) {
    /* Original at 0x021F4A50 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, [sp, #0x20]\n    add r5, r1, #0\n    add r6, r2, #0\n    add r4, r3, #0\n    cmp r0, #0\n    beq _021F4A72\n    ldr r0, _021F4AA4 ; =0x00000808\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021F4A6C\n    bl GF_AssertFail\n    ldr r0, _021F4AA4 ; =0x00000808\n    mov r1, #0\n    str r1, [r4, r0]\n    ldr r0, [sp, #0x18]\n    cmp r0, #0\n    blt _021F4A7E\n    ldr r1, [sp, #0x1c]\n    cmp r0, r1\n    blt _021F4A82\n    ldr r0, _021F4AA8 ; =0x0000FFFF\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r6, #0\n    bl GetMapModelNo\n    add r4, r0, #0\n    ldr r0, _021F4AA8 ; =0x0000FFFF\n    cmp r4, r0\n    beq _021F4A9E\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov01_021F49FC\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F4AA4: .word 0x00000808\n    _021F4AA8: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F4AAC(void) {
    /* Original at 0x021F4AAC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #1\n    lsl r0, r0, #8\n    add r4, r1, #0\n    ldr r2, _021F4AE0 ; =0x0000086C\n    ldr r0, [r5, r0]\n    mov r1, #4\n    add r2, r4, r2\n    bl NARC_ReadFile\n    ldr r2, _021F4AE0 ; =0x0000086C\n    ldr r0, [r4, r2]\n    asr r0, r0, #0x10\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    beq _021F4ADC\n    mov r0, #1\n    lsl r0, r0, #8\n    add r2, r2, #4\n    ldr r0, [r5, r0]\n    add r2, r4, r2\n    bl NARC_ReadFile\n    pop {r3, r4, r5, pc}\n    nop\n    _021F4AE0: .word 0x0000086C"
    );
    #endif
}

void ov01_021F4AE4(void) {
    /* Original at 0x021F4AE4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    mov r1, #1\n    lsl r1, r1, #8\n    ldr r0, [r0, r1]\n    add r1, r2, #0\n    add r2, r4, #0\n    bl NARC_ReadFile\n    mov r0, #0xa7\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021F4B1A\n    mov r0, #0xa7\n    mov r1, #1\n    mov r5, #0\n    add r6, r4, #0\n    lsl r0, r0, #4\n    lsl r1, r1, #0xa\n    ldrh r3, [r6]\n    ldr r2, [r4, r0]\n    add r6, r6, #2\n    strb r3, [r2, r5]\n    add r5, r5, #1\n    cmp r5, r1\n    blt _021F4B0C\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F4B1C(void) {
    /* Original at 0x021F4B1C */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    add r0, #0xc4\n    ldr r0, [r0]\n    add r7, r1, #0\n    str r0, [sp, #0xc]\n    add r4, r3, #0\n    ldr r1, [sp, #0xc]\n    add r0, r4, #0\n    str r2, [sp, #8]\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    lsr r6, r0, #0x10\n    ldr r1, [sp, #0xc]\n    add r0, r4, #0\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r6, #1\n    blo _021F4B56\n    cmp r6, #3\n    bhi _021F4B56\n    cmp r4, #1\n    blo _021F4B56\n    cmp r4, #2\n    bls _021F4B70\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r1, [sp, #8]\n    ldr r2, _021F4BE4 ; =0x00000868\n    ldr r0, [r5, r0]\n    add r5, #0xf4\n    ldr r1, [r1, #0xc]\n    ldr r2, [r7, r2]\n    ldr r3, [r5]\n    bl ov01_021F3744\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Save_SafariZone_Get\n    str r0, [sp, #0x14]\n    bl sub_0202F620\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    bl SafariZone_GetAreaSet\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    cmp r0, #0\n    bne _021F4BA6\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Save_PlayerData_GetProfile\n    bl PlayerProfile_GetTrainerGender\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    b _021F4BAC\n    ldr r0, [sp, #0x14]\n    bl SafariZone_GetLinkLeaderGender\n    str r7, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    lsl r0, r0, #8\n    sub r4, r4, #1\n    ldr r0, [r5, r0]\n    add r5, #0xf4\n    sub r3, r6, #1\n    lsl r3, r3, #0x10\n    ldr r1, _021F4BE4 ; =0x00000868\n    lsl r4, r4, #0x10\n    ldr r2, [r5]\n    lsr r5, r4, #0x10\n    lsl r4, r5, #1\n    lsr r3, r3, #0x10\n    add r4, r5, r4\n    add r4, r3, r4\n    mov r3, #0x7a\n    add r5, r4, #0\n    mul r5, r3\n    ldr r3, [sp, #0x10]\n    ldr r1, [r7, r1]\n    add r3, r3, r5\n    bl ov01_021F3834\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F4BE4: .word 0x00000868"
    );
    #endif
}

void ov01_021F4BE8(void) {
    /* Original at 0x021F4BE8 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    ldr r4, [sp, #0x28]\n    add r6, r0, #0\n    ldr r0, [r4, #0x10]\n    add r5, r1, #0\n    add r0, r0, #1\n    str r0, [r4, #0x10]\n    add r0, r3, #0\n    add r7, r2, #0\n    bl ov01_021FB9CC\n    ldr r1, _021F4C64 ; =0x00000854\n    mov r3, #1\n    add r2, r5, r1\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    add r1, #0x10\n    str r0, [sp, #8]\n    add r0, r5, r1\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    add r0, #0x10\n    str r0, [sp, #0x10]\n    lsl r3, r3, #8\n    ldr r0, [r6, r3]\n    lsl r3, r3, #3\n    ldr r1, [sp, #0x2c]\n    ldr r2, [r7, #4]\n    add r3, r5, r3\n    bl ov01_021F676C\n    str r0, [r4, #8]\n    ldr r0, [sp, #0x30]\n    cmp r0, #0\n    beq _021F4C5E\n    ldr r0, [r4, #0x14]\n    ldr r2, _021F4C68 ; =0x00000858\n    add r0, r0, #1\n    str r0, [r4, #0x14]\n    add r0, r5, r2\n    str r0, [sp]\n    add r0, r4, #0\n    add r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #1\n    lsl r0, r0, #8\n    add r2, r2, #4\n    add r3, r4, #0\n    ldr r0, [r6, r0]\n    ldr r1, [r7, #8]\n    ldr r2, [r5, r2]\n    add r3, #0x14\n    bl ov01_021FB308\n    str r0, [r4, #0xc]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F4C64: .word 0x00000854\n    _021F4C68: .word 0x00000858"
    );
    #endif
}

void ov01_021F4C6C(void) {
    /* Original at 0x021F4C6C */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r0, r3, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ov01_021FB9CC\n    mov r2, #1\n    str r0, [sp]\n    lsl r2, r2, #8\n    ldr r3, _021F4D04 ; =0x00000854\n    ldr r0, [r5, r2]\n    lsl r2, r2, #3\n    ldr r1, [r6, #4]\n    add r2, r4, r2\n    add r3, r4, r3\n    bl ov01_021F67B4\n    ldr r1, [sp, #0x20]\n    cmp r1, #0\n    beq _021F4C9C\n    bl ov01_021EA3B0\n    ldr r3, _021F4D08 ; =0x00000864\n    mov r0, #1\n    ldr r2, [sp, #0x1c]\n    str r0, [r4, r3]\n    sub r1, r3, #4\n    str r2, [r4, r1]\n    ldr r1, [sp, #0x24]\n    cmp r1, #0\n    beq _021F4CFE\n    add r2, r3, #0\n    add r0, #0xff\n    sub r2, #8\n    sub r3, #0xc\n    ldr r0, [r5, r0]\n    ldr r1, [r6, #8]\n    ldr r2, [r4, r2]\n    ldr r3, [r4, r3]\n    bl ov01_021FB270\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r3, [r5, r0]\n    cmp r3, #0\n    beq _021F4CD8\n    ldr r2, _021F4D0C ; =0x00000868\n    add r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #0x1c]\n    ldr r2, [r4, r2]\n    blx r3\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    bl ov01_02204698\n    cmp r0, #0\n    beq _021F4CFE\n    ldr r0, [sp, #0x18]\n    bl sub_02054E20\n    cmp r0, #0\n    bne _021F4CFE\n    add r5, #0xf8\n    mov r1, #2\n    lsl r1, r1, #0xa\n    ldr r0, [r5]\n    add r1, r4, r1\n    bl ov01_02204678\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021F4D04: .word 0x00000854\n    _021F4D08: .word 0x00000864\n    _021F4D0C: .word 0x00000868"
    );
    #endif
}

void ov01_021F4D10(void) {
    /* Original at 0x021F4D10 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    ldr r5, [sp, #0x40]\n    lsl r4, r0, #2\n    add r0, r5, r4\n    ldr r0, [r0, #0x18]\n    ldr r6, [sp, #0x3c]\n    str r0, [sp]\n    ldr r0, [sp, #0x38]\n    str r1, [sp, #0xc]\n    mul r0, r3\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r3, [r5, r4]\n    add r0, sp, #0x10\n    add r1, r6, #0\n    bl ov01_021F4A50\n    add r7, r0, #0\n    ldr r0, _021F4D80 ; =0x0000FFFF\n    cmp r7, r0\n    beq _021F4D7C\n    ldr r1, [r5, r4]\n    add r0, r6, #0\n    bl ov01_021F4AAC\n    ldr r1, [r5, r4]\n    ldr r2, [sp, #0x10]\n    add r0, r6, #0\n    bl ov01_021F4AE4\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r3, [r5, r4]\n    ldr r2, _021F4D84 ; =0x00000868\n    ldr r0, [r6, r0]\n    ldr r2, [r3, r2]\n    add r3, r6, #0\n    add r3, #0xf4\n    ldr r1, [sp, #0x1c]\n    ldr r3, [r3]\n    bl ov01_021F3744\n    str r5, [sp]\n    str r7, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r1, [r5, r4]\n    ldr r3, [sp, #0xc]\n    add r0, r6, #0\n    add r2, sp, #0x10\n    bl ov01_021F4BE8\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F4D80: .word 0x0000FFFF\n    _021F4D84: .word 0x00000868"
    );
    #endif
}

void ov01_021F4D88(void) {
    /* Original at 0x021F4D88 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x1fc\n    sub sp, #0x1fc\n    sub sp, #0x1fc\n    sub sp, #0x1fc\n    sub sp, #0x30\n    str r1, [sp, #0xc]\n    ldr r1, _021F4E10 ; =0x00000828\n    lsl r6, r0, #2\n    add r1, sp\n    ldr r4, [r1, #0x18]\n    ldr r5, [r1, #0x14]\n    add r0, r4, r6\n    ldr r0, [r0, #0x18]\n    str r0, [sp]\n    ldr r0, [r1, #0x10]\n    add r1, r5, #0\n    mul r0, r3\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r3, [r4, r6]\n    add r0, sp, #0x10\n    bl ov01_021F4A50\n    add r7, r0, #0\n    ldr r0, _021F4E14 ; =0x0000FFFF\n    cmp r7, r0\n    beq _021F4E04\n    ldr r1, [r4, r6]\n    add r0, r5, #0\n    bl ov01_021F4AAC\n    mov r1, #1\n    lsl r1, r1, #8\n    ldr r0, [r5, r1]\n    lsl r1, r1, #3\n    add r2, sp, #0x20\n    bl NARC_ReadFile\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r3, [r4, r6]\n    ldr r2, _021F4E18 ; =0x00000868\n    ldr r0, [r5, r0]\n    ldr r2, [r3, r2]\n    add r3, r5, #0\n    add r3, #0xf4\n    ldr r1, [sp, #0x1c]\n    ldr r3, [r3]\n    bl ov01_021F3744\n    str r4, [sp]\n    str r7, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r1, [r4, r6]\n    ldr r3, [sp, #0xc]\n    add r0, r5, #0\n    add r2, sp, #0x10\n    bl ov01_021F4BE8\n    add sp, #0x1fc\n    add sp, #0x1fc\n    add sp, #0x1fc\n    add sp, #0x1fc\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F4E10: .word 0x00000828\n    _021F4E14: .word 0x0000FFFF\n    _021F4E18: .word 0x00000868"
    );
    #endif
}

void ov01_021F4E1C(void) {
    /* Original at 0x021F4E1C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    ldr r5, [sp, #0x40]\n    lsl r4, r0, #2\n    add r7, r5, #0\n    add r7, #0x18\n    ldr r0, [r7, r4]\n    ldr r6, [sp, #0x3c]\n    str r0, [sp]\n    ldr r0, [sp, #0x38]\n    str r1, [sp, #0xc]\n    mul r0, r3\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r3, [r5, r4]\n    add r0, sp, #0x14\n    add r1, r6, #0\n    bl ov01_021F4A50\n    ldr r1, _021F4E84 ; =0x0000FFFF\n    str r0, [sp, #0x10]\n    cmp r0, r1\n    beq _021F4E80\n    ldr r1, [r5, r4]\n    add r0, r6, #0\n    bl ov01_021F4AAC\n    ldr r1, [r5, r4]\n    ldr r2, [sp, #0x14]\n    add r0, r6, #0\n    bl ov01_021F4AE4\n    ldr r1, [r5, r4]\n    ldr r3, [r7, r4]\n    add r0, r6, #0\n    add r2, sp, #0x14\n    bl ov01_021F4B1C\n    ldr r0, [sp, #0x10]\n    str r5, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r1, [r5, r4]\n    ldr r3, [sp, #0xc]\n    add r0, r6, #0\n    add r2, sp, #0x14\n    bl ov01_021F4BE8\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _021F4E84: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F4E88(void) {
    /* Original at 0x021F4E88 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r7, r0, #0\n    lsl r5, r1, #2\n    ldr r6, [sp, #0x4c]\n    ldr r1, [sp, #0x40]\n    ldr r0, [sp, #0x44]\n    add r4, r6, #0\n    mul r0, r1\n    str r7, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r2, [sp, #0x10]\n    add r4, #0x90\n    add r2, r3, #0\n    ldr r3, [r4, r5]\n    add r0, sp, #0x18\n    add r1, r6, #0\n    bl ov01_021F4A50\n    ldr r1, _021F4F04 ; =0x0000FFFF\n    str r0, [sp, #0x14]\n    cmp r0, r1\n    beq _021F4EFE\n    ldr r1, [r4, r5]\n    add r0, r6, #0\n    bl ov01_021F4AAC\n    ldr r1, [r4, r5]\n    ldr r2, [sp, #0x18]\n    add r0, r6, #0\n    bl ov01_021F4AE4\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r3, [r4, r5]\n    ldr r2, _021F4F08 ; =0x00000868\n    ldr r0, [r6, r0]\n    ldr r2, [r3, r2]\n    add r3, r6, #0\n    add r3, #0xf4\n    ldr r1, [sp, #0x24]\n    ldr r3, [r3]\n    bl ov01_021F3744\n    ldr r0, [sp, #0x14]\n    ldr r3, [sp, #0x10]\n    str r0, [sp]\n    ldr r0, [sp, #0x48]\n    str r7, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r5]\n    add r0, r6, #0\n    add r2, sp, #0x18\n    bl ov01_021F4C6C\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F4F04: .word 0x0000FFFF\n    _021F4F08: .word 0x00000868"
    );
    #endif
}

void ov01_021F4F0C(void) {
    /* Original at 0x021F4F0C */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x1fc\n    sub sp, #0x1fc\n    sub sp, #0x1fc\n    sub sp, #0x1fc\n    sub sp, #0x38\n    add r7, r0, #0\n    ldr r0, _021F4FA4 ; =0x00000830\n    str r2, [sp, #0x10]\n    add r0, sp\n    ldr r5, [r0, #0x1c]\n    lsl r4, r1, #2\n    ldr r1, [r0, #0x10]\n    ldr r0, [r0, #0x14]\n    add r6, r5, #0\n    mul r0, r1\n    str r7, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r6, #0x90\n    add r2, r3, #0\n    ldr r3, [r6, r4]\n    add r0, sp, #0x18\n    add r1, r5, #0\n    bl ov01_021F4A50\n    ldr r1, _021F4FA8 ; =0x0000FFFF\n    str r0, [sp, #0x14]\n    cmp r0, r1\n    beq _021F4F96\n    ldr r1, [r6, r4]\n    add r0, r5, #0\n    bl ov01_021F4AAC\n    mov r1, #1\n    lsl r1, r1, #8\n    ldr r0, [r5, r1]\n    lsl r1, r1, #3\n    add r2, sp, #0x28\n    bl NARC_ReadFile\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r3, [r6, r4]\n    ldr r2, _021F4FAC ; =0x00000868\n    ldr r0, [r5, r0]\n    ldr r2, [r3, r2]\n    add r3, r5, #0\n    add r3, #0xf4\n    ldr r1, [sp, #0x24]\n    ldr r3, [r3]\n    bl ov01_021F3744\n    ldr r0, [sp, #0x14]\n    ldr r3, [sp, #0x10]\n    str r0, [sp]\n    ldr r0, _021F4FA4 ; =0x00000830\n    str r7, [sp, #4]\n    add r0, sp\n    ldr r0, [r0, #0x18]\n    add r2, sp, #0x18\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r1, [r6, r4]\n    add r0, r5, #0\n    bl ov01_021F4C6C\n    add sp, #0x1fc\n    add sp, #0x1fc\n    add sp, #0x1fc\n    add sp, #0x1fc\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F4FA4: .word 0x00000830\n    _021F4FA8: .word 0x0000FFFF\n    _021F4FAC: .word 0x00000868"
    );
    #endif
}

void ov01_021F4FB0(void) {
    /* Original at 0x021F4FB0 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r7, r0, #0\n    lsl r5, r1, #2\n    ldr r6, [sp, #0x4c]\n    ldr r1, [sp, #0x40]\n    ldr r0, [sp, #0x44]\n    add r4, r6, #0\n    mul r0, r1\n    str r7, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r2, [sp, #0x10]\n    add r4, #0x90\n    add r2, r3, #0\n    ldr r3, [r4, r5]\n    add r0, sp, #0x18\n    add r1, r6, #0\n    bl ov01_021F4A50\n    ldr r1, _021F5020 ; =0x0000FFFF\n    str r0, [sp, #0x14]\n    cmp r0, r1\n    beq _021F501A\n    ldr r1, [r4, r5]\n    add r0, r6, #0\n    bl ov01_021F4AAC\n    ldr r1, [r4, r5]\n    ldr r2, [sp, #0x18]\n    add r0, r6, #0\n    bl ov01_021F4AE4\n    ldr r1, [r4, r5]\n    add r0, r6, #0\n    add r2, sp, #0x18\n    add r3, r7, #0\n    bl ov01_021F4B1C\n    ldr r0, [sp, #0x14]\n    ldr r3, [sp, #0x10]\n    str r0, [sp]\n    ldr r0, [sp, #0x48]\n    str r7, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r5]\n    add r0, r6, #0\n    add r2, sp, #0x18\n    bl ov01_021F4C6C\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F5020: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F5024(void) {
    /* Original at 0x021F5024 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0]\n    cmp r1, #0\n    bne _021F5034\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    bne _021F5034\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021F5038(void) {
    /* Original at 0x021F5038 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    str r3, [sp]\n    add r0, sp, #0x10\n    add r7, r1, #0\n    ldrb r1, [r0, #0x14]\n    mov r0, #0x30\n    str r2, [sp, #8]\n    add r5, r1, #0\n    mul r5, r0\n    add r0, r4, #0\n    str r0, [sp, #4]\n    add r0, #0x2c\n    str r0, [sp, #4]\n    ldr r0, [r0, r5]\n    cmp r0, #0\n    beq _021F5060\n    bl GF_AssertFail\n    ldr r0, [sp, #4]\n    mov r1, #1\n    str r1, [r0, r5]\n    add r6, r4, r5\n    add r0, sp, #0x10\n    add r1, r6, #0\n    ldrb r2, [r0, #0x18]\n    add r1, #0x30\n    add r5, r4, #0\n    strb r2, [r1]\n    add r2, r6, #0\n    ldr r1, [sp, #8]\n    str r7, [r6, #0x1c]\n    str r1, [r6, #0x20]\n    ldr r1, [sp]\n    add r2, #0x24\n    strb r1, [r2]\n    ldrb r0, [r0, #0x10]\n    add r1, r6, #0\n    add r1, #0x25\n    strb r0, [r1]\n    ldr r1, [sp]\n    add r5, #0x90\n    lsl r3, r1, #2\n    ldr r1, [r5, r3]\n    lsl r2, r0, #2\n    str r1, [r6, #4]\n    ldr r0, [r5, r2]\n    add r1, r6, #0\n    str r0, [r6, #8]\n    add r1, #0x26\n    mov r0, #0\n    strb r0, [r1]\n    str r0, [r6, #0x28]\n    add r0, r4, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021F50B6\n    add r1, r4, #0\n    add r1, #0xb4\n    mov r0, #0\n    str r0, [r1]\n    mov r1, #0x86\n    ldr r0, [r5, r3]\n    lsl r1, r1, #4\n    str r7, [r0, r1]\n    ldr r2, [r5, r2]\n    ldr r0, [sp, #8]\n    str r0, [r2, r1]\n    add r0, r4, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0xa0\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xa1\n    ldrb r0, [r0]\n    add r4, #0xa1\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    strb r0, [r4]\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F50F0(void) {
    /* Original at 0x021F50F0 */
    /* Requires manual decompilation - 453 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r0, #0xa2\n    ldrb r1, [r0]\n    mov r0, #0x30\n    add r4, r5, #0\n    add r2, r5, #4\n    mul r0, r1\n    add r4, #0xd0\n    add r6, r2, r0\n    ldr r0, [r4, #0x20]\n    cmp r0, #1\n    bne _021F513A\n    ldr r2, [r4, #0xc]\n    cmp r2, #0\n    beq _021F513A\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    beq _021F5198\n    ldr r0, [r4, #0x14]\n    ldr r1, [r0]\n    ldr r0, [r4, #0x10]\n    ldr r0, [r0]\n    cmp r1, r0\n    ble _021F5128\n    bl GF_AssertFail\n    ldr r0, [r4, #0x10]\n    ldr r1, [r0]\n    ldr r0, [r4, #0x14]\n    ldr r0, [r0]\n    sub r1, r1, r0\n    mov r0, #1\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    bge _021F513C\n    b _021F5276\n    ldr r1, [r4, #0xc]\n    add r2, sp, #0x10\n    ldr r0, [r1]\n    ldr r1, [r1, #8]\n    add r3, sp, #0xc\n    bl ov01_021F61DC\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0xc]\n    add r2, r5, #0\n    bl ov01_021F5F64\n    ldr r2, [r4, #0xc]\n    add r3, r4, #0\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    ldr r0, [r4, #8]\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x11\n    sub r1, r1, r2\n    mov r0, #0x11\n    ror r1, r0\n    add r0, r2, r1\n    beq _021F517A\n    mov r0, #1\n    bl sub_02039AD8\n    cmp r0, #0\n    bne _021F5258\n    ldr r0, [r4, #8]\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x11\n    sub r1, r1, r2\n    mov r0, #0x11\n    ror r1, r0\n    add r0, r2, r1\n    beq _021F518E\n    bl GF_AssertFail\n    mov r0, #0\n    str r0, [r4, #0x18]\n    str r0, [r4, #0x10]\n    str r0, [r4, #0x14]\n    b _021F5276\n    ldr r7, [r2]\n    ldr r3, [r4]\n    cmp r3, r7\n    beq _021F51AE\n    ldr r1, [r4, #8]\n    ldr r0, [r2, #8]\n    cmp r1, r0\n    beq _021F51AE\n    bl GF_AssertFail\n    b _021F5276\n    cmp r3, r7\n    bne _021F51BA\n    ldr r1, [r4, #8]\n    ldr r0, [r2, #8]\n    cmp r1, r0\n    beq _021F5276\n    mov r3, #1\n    str r3, [r4, #0x18]\n    ldr r2, [r4, #0xc]\n    ldr r0, [r4]\n    ldr r1, [r2]\n    cmp r0, r1\n    beq _021F520E\n    cmp r0, r1\n    ble _021F51D8\n    str r4, [r4, #0x10]\n    ldr r0, [r4, #0xc]\n    str r0, [r4, #0x14]\n    mov r0, #3\n    strb r0, [r4, #0x1c]\n    b _021F51DE\n    str r2, [r4, #0x10]\n    str r4, [r4, #0x14]\n    strb r3, [r4, #0x1c]\n    ldr r0, [r4]\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x11\n    sub r1, r1, r2\n    mov r0, #0x11\n    ror r1, r0\n    add r0, r2, r1\n    beq _021F51F8\n    mov r0, #1\n    bl sub_02039AD8\n    cmp r0, #0\n    bne _021F5258\n    ldr r0, [r4]\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x11\n    sub r1, r1, r2\n    mov r0, #0x11\n    ror r1, r0\n    add r0, r2, r1\n    beq _021F526E\n    bl GF_AssertFail\n    b _021F526E\n    add r1, r5, #0\n    add r1, #0xdc\n    add r0, r5, #0\n    ldr r1, [r1]\n    add r0, #0xd8\n    ldr r0, [r0]\n    ldr r1, [r1, #8]\n    cmp r0, r1\n    ble _021F5230\n    add r0, r4, #0\n    add r0, #8\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #0xc]\n    add r0, #8\n    str r0, [r4, #0x14]\n    mov r0, #4\n    b _021F523C\n    add r2, #8\n    add r0, r4, #0\n    str r2, [r4, #0x10]\n    add r0, #8\n    str r0, [r4, #0x14]\n    mov r0, #2\n    strb r0, [r4, #0x1c]\n    ldr r0, [r4, #8]\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x11\n    sub r1, r1, r2\n    mov r0, #0x11\n    ror r1, r0\n    add r0, r2, r1\n    beq _021F525A\n    mov r0, #1\n    bl sub_02039AD8\n    cmp r0, #0\n    beq _021F525A\n    b _021F54A4\n    ldr r0, [r4, #8]\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x11\n    sub r1, r1, r2\n    mov r0, #0x11\n    ror r1, r0\n    add r0, r2, r1\n    beq _021F526E\n    bl GF_AssertFail\n    ldrb r0, [r4, #0x1c]\n    add r1, r5, #0\n    bl ov01_021F613C\n    add r0, r5, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    cmp r0, #3\n    bls _021F5282\n    b _021F53FA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F528E: ; jump table\n    add r0, r6, #0\n    add r0, #0x22\n    ldrb r0, [r0]\n    add r1, r6, r0\n    add r1, #0x20\n    ldrb r1, [r1]\n    lsl r1, r1, #2\n    add r1, r5, r1\n    add r1, #0x80\n    ldr r1, [r1]\n    cmp r1, #1\n    beq _021F52D6\n    add r1, r5, #0\n    add r1, #0xc8\n    ldr r1, [r1]\n    add r4, r5, #0\n    str r1, [sp]\n    str r5, [sp, #4]\n    str r6, [sp, #8]\n    add r4, #0xfc\n    add r1, r5, #0\n    add r2, r5, #0\n    add r3, r5, #0\n    ldr r4, [r4]\n    add r1, #0xb8\n    add r2, #0xc0\n    add r3, #0xc4\n    ldr r1, [r1]\n    ldr r2, [r2]\n    ldr r3, [r3]\n    ldr r4, [r4, #4]\n    blx r4\n    add r0, r6, #0\n    add r0, #0x22\n    ldrb r0, [r0]\n    add r6, #0x22\n    mov r1, #1\n    add r0, r0, #1\n    strb r0, [r6]\n    add r0, r5, #0\n    add r0, #0xb4\n    str r1, [r0]\n    b _021F53FA\n    add r0, r6, #0\n    add r0, #0x22\n    ldrb r0, [r0]\n    sub r0, r0, #1\n    add r0, r6, r0\n    add r0, #0x20\n    ldrb r0, [r0]\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #1\n    bne _021F5324\n    add r0, r6, #0\n    bl ov01_021F477C\n    add r1, r6, #0\n    add r1, #0x22\n    ldrb r1, [r1]\n    mov r0, #0\n    sub r1, r1, #1\n    add r1, r6, r1\n    add r1, #0x20\n    ldrb r1, [r1]\n    lsl r1, r1, #2\n    add r1, r5, r1\n    add r1, #0x80\n    str r0, [r1]\n    add r0, r6, #0\n    add r0, #0x22\n    ldrb r0, [r0]\n    cmp r0, #2\n    bhi _021F53FA\n    add r0, r6, #0\n    add r0, #0x10\n    bl ov01_021F5024\n    cmp r0, #1\n    bne _021F53FA\n    add r0, r6, #0\n    add r0, #0x22\n    ldrb r0, [r0]\n    cmp r0, #2\n    blo _021F534A\n    mov r0, #1\n    str r0, [r6, #0x24]\n    b _021F5352\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0xb4\n    str r1, [r0]\n    add r0, r6, #0\n    add r0, #0x22\n    ldrb r0, [r0]\n    sub r0, r0, #1\n    lsl r0, r0, #2\n    ldr r2, [r6, r0]\n    ldr r0, _021F54A8 ; =0x00000864\n    ldr r1, [r2, r0]\n    cmp r1, #1\n    bne _021F53A8\n    sub r0, #0x10\n    ldr r0, [r2, r0]\n    bl NNS_G3dGetMdlSet\n    cmp r0, #0\n    beq _021F5392\n    add r2, r0, #0\n    add r2, #8\n    beq _021F5386\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _021F5386\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _021F5388\n    mov r1, #0\n    cmp r1, #0\n    beq _021F5392\n    ldr r1, [r1]\n    add r4, r0, r1\n    b _021F5394\n    mov r4, #0\n    add r0, r5, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    bl ov01_021FBA00\n    cmp r0, #1\n    bne _021F53A8\n    add r0, r4, #0\n    bl ov01_021EA3B0\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r3, [r5, r0]\n    cmp r3, #0\n    beq _021F53FA\n    add r0, r6, #0\n    add r0, #0x22\n    ldrb r0, [r0]\n    mov r2, #0x86\n    lsl r2, r2, #4\n    sub r0, r0, #1\n    lsl r0, r0, #2\n    ldr r4, [r6, r0]\n    ldr r1, [r4, r2]\n    cmp r1, #0\n    blt _021F53FA\n    add r0, r5, #0\n    add r6, r5, #0\n    add r0, #0xc4\n    add r6, #0xc8\n    ldr r0, [r0]\n    ldr r6, [r6]\n    mul r6, r0\n    cmp r1, r6\n    bge _021F53FA\n    lsr r0, r2, #3\n    add r2, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r4, r2]\n    blx r3\n    b _021F53FA\n    add r6, #0x10\n    add r0, r6, #0\n    bl ov01_021F5024\n    cmp r0, #1\n    bne _021F53FA\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0xa0\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021F541C\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0xa2\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa1\n    strb r1, [r0]\n    mov r0, #2\n    add r5, #0xb4\n    add sp, #0x14\n    str r0, [r5]\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov01_021F5D10\n    cmp r0, #1\n    bne _021F54A4\n    add r0, r5, #0\n    add r0, #0xa2\n    ldrb r1, [r0]\n    mov r0, #0x30\n    mov r2, #0\n    mul r0, r1\n    add r0, r5, r0\n    str r2, [r0, #0x2c]\n    add r0, r5, #0\n    bl ov01_021F5D20\n    add r0, r5, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    sub r1, r0, #1\n    add r0, r5, #0\n    add r0, #0xa0\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa2\n    ldrb r0, [r0]\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r5, #0\n    add r1, r2, r1\n    add r0, #0xa2\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021F5472\n    mov r1, #0\n    b _021F5482\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0xa2\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa1\n    strb r1, [r0]\n    mov r1, #2\n    add r0, r5, #0\n    add r0, #0xb4\n    str r1, [r0]\n    ldr r0, [r5, #0x6c]\n    cmp r0, #1\n    bne _021F54A4\n    mov r0, #0\n    str r0, [r5, #0x6c]\n    add r0, r5, #0\n    add r0, #0x70\n    ldrb r0, [r0]\n    add r1, r5, #0\n    bl ov01_021F5D38\n    add r0, r5, #0\n    bl ov01_021F5CB4\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _021F54A8: .word 0x00000864"
    );
    #endif
}

void ov01_021F54AC(void) {
    /* Original at 0x021F54AC */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    ldr r4, [sp, #0x34]\n    str r2, [sp, #0x10]\n    add r7, r0, #0\n    ldr r0, [r4, #0x6c]\n    add r5, r3, #0\n    str r1, [sp, #0xc]\n    ldr r6, [sp, #0x30]\n    cmp r0, #1\n    bne _021F54C6\n    bl GF_AssertFail\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, sp, #0x14\n    bl ov01_021F5BBC\n    cmp r0, #1\n    bne _021F5544\n    add r1, sp, #0x14\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov01_021F474C\n    add r0, r4, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    cmp r0, #2\n    blo _021F5528\n    mov r0, #1\n    str r0, [r4, #0x6c]\n    ldr r0, [sp, #0xc]\n    str r7, [r4, #0x74]\n    str r0, [r4, #0x78]\n    add r1, r4, #0\n    ldr r0, [sp, #0x10]\n    add r1, #0x7c\n    strb r0, [r1]\n    add r0, r4, #0\n    add r0, #0x7d\n    strb r5, [r0]\n    ldr r0, [sp, #0x10]\n    add r2, r4, #0\n    add r2, #0x90\n    lsl r1, r0, #2\n    ldr r0, [r2, r1]\n    str r0, [r4, #0x64]\n    lsl r0, r5, #2\n    ldr r3, [r2, r0]\n    str r3, [r4, #0x68]\n    add r4, #0x70\n    strb r6, [r4]\n    ldr r3, [r2, r1]\n    mov r1, #0x86\n    lsl r1, r1, #4\n    str r7, [r3, r1]\n    ldr r2, [r2, r0]\n    ldr r0, [sp, #0xc]\n    add sp, #0x18\n    str r0, [r2, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    str r5, [sp]\n    add r0, #0xa1\n    ldrb r0, [r0]\n    ldr r2, [sp, #0xc]\n    add r1, r7, #0\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldr r3, [sp, #0x10]\n    add r0, r4, #0\n    bl ov01_021F5038\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    str r5, [sp]\n    add r0, #0xa1\n    ldrb r0, [r0]\n    ldr r2, [sp, #0xc]\n    add r1, r7, #0\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldr r3, [sp, #0x10]\n    add r0, r4, #0\n    bl ov01_021F5038\n    cmp r0, #1\n    beq _021F5564\n    bl GF_AssertFail\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F5568(void) {
    /* Original at 0x021F5568 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r4, r6, #0\n    lsl r5, r0, #2\n    add r4, #0x90\n    ldr r1, [r4, r5]\n    ldr r0, _021F55E4 ; =0x00000864\n    mov r2, #0\n    str r2, [r1, r0]\n    ldr r1, [r4, r5]\n    sub r0, #8\n    ldr r0, [r1, r0]\n    bl ov01_021FB2F4\n    ldr r1, [r4, r5]\n    ldr r0, _021F55E8 ; =0x00000868\n    ldr r0, [r1, r0]\n    bl ov01_021F36AC\n    mov r0, #0\n    mov r2, #0x86\n    ldr r1, [r4, r5]\n    mvn r0, r0\n    lsl r2, r2, #4\n    str r0, [r1, r2]\n    ldr r1, [r4, r5]\n    sub r2, #0x60\n    bl MIi_CpuClearFast\n    ldr r2, [r4, r5]\n    ldr r1, _021F55EC ; =0x0000086C\n    mov r0, #0\n    add r1, r2, r1\n    mov r2, #0x81\n    lsl r2, r2, #2\n    bl MIi_CpuClear32\n    add r0, r6, r5\n    mov r1, #1\n    add r0, #0x80\n    str r1, [r0]\n    add r0, r6, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    bl ov01_02204698\n    cmp r0, #0\n    beq _021F55D8\n    add r6, #0xf8\n    mov r1, #2\n    ldr r2, [r4, r5]\n    lsl r1, r1, #0xa\n    ldr r0, [r6]\n    add r1, r2, r1\n    bl ov01_02204688\n    ldr r1, [r4, r5]\n    ldr r0, _021F55F0 ; =0x00000808\n    mov r2, #0\n    str r2, [r1, r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _021F55E4: .word 0x00000864\n    _021F55E8: .word 0x00000868\n    _021F55EC: .word 0x0000086C\n    _021F55F0: .word 0x00000808"
    );
    #endif
}

void ov01_021F55F4(void) {
    /* Original at 0x021F55F4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r4, [sp, #0x18]\n    add r5, r1, #0\n    add r1, r4, #0\n    add r6, r0, #0\n    add r7, r2, #0\n    str r3, [sp]\n    bl ov01_021F5568\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F5568\n    add r4, #0x90\n    lsl r1, r6, #2\n    lsl r5, r5, #2\n    lsl r2, r7, #2\n    ldr r0, [r4, r1]\n    ldr r3, [r4, r5]\n    ldr r6, [r4, r2]\n    str r6, [r4, r1]\n    ldr r1, [sp]\n    lsl r6, r1, #2\n    ldr r1, [r4, r6]\n    str r1, [r4, r5]\n    str r0, [r4, r2]\n    str r3, [r4, r6]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F562C(void) {
    /* Original at 0x021F562C */
    /* Requires manual decompilation - 379 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r1, [sp, #8]\n    add r7, r0, #0\n    ldr r0, [sp, #8]\n    add r6, r2, #0\n    cmp r0, #4\n    bls _021F563E\n    b _021F5952\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F564A: ; jump table\n    mov r0, #2\n    mov r1, #3\n    mov r2, #0\n    mov r3, #1\n    str r6, [sp]\n    bl ov01_021F55F4\n    add r0, r6, #0\n    add r0, #0xad\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _021F569E\n    add r0, r6, #0\n    add r0, #0xc4\n    ldr r2, [r0]\n    mov r0, #1\n    sub r5, r7, r2\n    str r0, [sp, #0x10]\n    mov r0, #0\n    sub r4, r5, #1\n    str r0, [sp, #0xc]\n    cmp r5, #0\n    bge _021F5688\n    sub r5, r0, #1\n    add r4, r5, #0\n    b _021F56D4\n    cmp r4, #0\n    blt _021F5698\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    bne _021F56D4\n    mov r4, #0\n    mvn r4, r4\n    b _021F56D4\n    cmp r0, #3\n    bne _021F56D0\n    add r0, r6, #0\n    add r0, #0xc4\n    ldr r2, [r0]\n    mov r0, #0\n    sub r5, r7, r2\n    str r0, [sp, #0x10]\n    mov r0, #1\n    add r4, r5, #1\n    str r0, [sp, #0xc]\n    cmp r5, #0\n    bge _021F56BE\n    sub r5, r0, #2\n    add r4, r5, #0\n    b _021F56D4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    bne _021F56D4\n    mov r4, #0\n    mvn r4, r4\n    b _021F56D4\n    bl GF_AssertFail\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0xc]\n    ldr r0, [sp, #8]\n    lsl r2, r2, #0x18\n    str r0, [sp]\n    lsl r3, r3, #0x18\n    add r0, r5, #0\n    add r1, r4, #0\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    str r6, [sp, #4]\n    bl ov01_021F54AC\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #1\n    mov r1, #3\n    mov r2, #0\n    mov r3, #2\n    str r6, [sp]\n    bl ov01_021F55F4\n    add r0, r6, #0\n    add r0, #0xad\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _021F5750\n    add r0, r6, #0\n    add r0, #0xc4\n    ldr r2, [r0]\n    sub r5, r7, #1\n    sub r0, r7, r2\n    sub r4, r0, #1\n    mov r0, #2\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    cmp r5, #0\n    blt _021F572E\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    bne _021F5734\n    mov r5, #0\n    mvn r5, r5\n    add r4, r5, #0\n    cmp r4, #0\n    blt _021F574A\n    add r2, r6, #0\n    add r2, #0xc4\n    ldr r2, [r2]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F4704\n    cmp r0, #0\n    bne _021F57A6\n    mov r4, #0\n    mvn r4, r4\n    b _021F57A6\n    cmp r0, #3\n    bne _021F57A2\n    add r0, r6, #0\n    add r0, #0xc4\n    ldr r2, [r0]\n    sub r5, r7, #1\n    add r0, r7, r2\n    sub r4, r0, #1\n    mov r0, #0\n    str r0, [sp, #0x10]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    cmp r5, #0\n    blt _021F5778\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    bne _021F577E\n    mov r5, #0\n    mvn r5, r5\n    add r4, r5, #0\n    add r0, r6, #0\n    add r0, #0xc4\n    ldr r2, [r0]\n    add r0, r6, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    mul r0, r2\n    cmp r0, r4\n    ble _021F579C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F4704\n    cmp r0, #0\n    bne _021F57A6\n    mov r4, #0\n    mvn r4, r4\n    b _021F57A6\n    bl GF_AssertFail\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0xc]\n    ldr r0, [sp, #8]\n    lsl r2, r2, #0x18\n    str r0, [sp]\n    lsl r3, r3, #0x18\n    add r0, r5, #0\n    add r1, r4, #0\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    str r6, [sp, #4]\n    bl ov01_021F54AC\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    mov r1, #2\n    mov r2, #1\n    mov r3, #3\n    str r6, [sp]\n    bl ov01_021F55F4\n    add r0, r6, #0\n    add r0, #0xad\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021F5832\n    add r0, r6, #0\n    add r0, #0xc4\n    ldr r2, [r0]\n    add r5, r7, #1\n    sub r0, r7, r2\n    add r4, r0, #1\n    mov r0, #3\n    str r0, [sp, #0x10]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    mul r0, r2\n    cmp r0, r5\n    ble _021F5808\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    bne _021F580E\n    mov r5, #0\n    mvn r5, r5\n    add r4, r5, #0\n    add r0, r6, #0\n    add r0, #0xc4\n    ldr r2, [r0]\n    add r0, r6, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    mul r0, r2\n    cmp r0, r4\n    ble _021F582C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F4704\n    cmp r0, #0\n    bne _021F5882\n    mov r4, #0\n    mvn r4, r4\n    b _021F5882\n    cmp r0, #2\n    bne _021F5882\n    add r0, r6, #0\n    add r0, #0xc4\n    ldr r2, [r0]\n    add r5, r7, #1\n    add r0, r7, r2\n    add r4, r0, #1\n    mov r0, #1\n    str r0, [sp, #0x10]\n    mov r0, #3\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    mul r0, r2\n    cmp r0, r5\n    ble _021F5862\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    bne _021F5868\n    mov r5, #0\n    mvn r5, r5\n    add r4, r5, #0\n    cmp r4, #0\n    blt _021F587E\n    add r2, r6, #0\n    add r2, #0xc4\n    ldr r2, [r2]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F4704\n    cmp r0, #0\n    bne _021F5882\n    mov r4, #0\n    mvn r4, r4\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0xc]\n    ldr r0, [sp, #8]\n    lsl r2, r2, #0x18\n    str r0, [sp]\n    lsl r3, r3, #0x18\n    add r0, r5, #0\n    add r1, r4, #0\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    str r6, [sp, #4]\n    bl ov01_021F54AC\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    mov r1, #1\n    mov r2, #2\n    mov r3, #3\n    str r6, [sp]\n    bl ov01_021F55F4\n    add r0, r6, #0\n    add r0, #0xad\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021F58F0\n    add r0, r6, #0\n    add r0, #0xc4\n    ldr r2, [r0]\n    mov r0, #3\n    str r0, [sp, #0x10]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    add r5, r7, r2\n    mul r0, r2\n    sub r4, r5, #1\n    cmp r0, r5\n    bgt _021F58DE\n    ldr r0, [sp, #0xc]\n    sub r5, r0, #3\n    add r4, r5, #0\n    b _021F5934\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    bne _021F5934\n    mov r4, #0\n    mvn r4, r4\n    b _021F5934\n    cmp r0, #1\n    bne _021F5930\n    add r0, r6, #0\n    add r0, #0xc4\n    ldr r2, [r0]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    mov r0, #3\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    add r5, r7, r2\n    mul r0, r2\n    add r4, r5, #1\n    cmp r0, r5\n    bgt _021F591A\n    ldr r0, [sp, #0xc]\n    sub r5, r0, #4\n    add r4, r5, #0\n    b _021F5934\n    cmp r0, r4\n    ble _021F592A\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    bne _021F5934\n    mov r4, #0\n    mvn r4, r4\n    b _021F5934\n    bl GF_AssertFail\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0xc]\n    ldr r0, [sp, #8]\n    lsl r2, r2, #0x18\n    str r0, [sp]\n    lsl r3, r3, #0x18\n    add r0, r5, #0\n    add r1, r4, #0\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    str r6, [sp, #4]\n    bl ov01_021F54AC\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F595C(void) {
    /* Original at 0x021F595C */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    add r5, r1, #0\n    add r4, r5, #0\n    lsl r6, r0, #2\n    mov r0, #0x86\n    add r3, sp, #0x38\n    mov r1, #0\n    str r1, [r3]\n    str r1, [r3, #4]\n    str r2, [sp, #4]\n    add r2, r5, #0\n    add r4, #0x90\n    str r1, [r3, #8]\n    add r2, #0xc0\n    ldr r1, [r4, r6]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, r5, #0\n    add r1, #0xc4\n    ldr r1, [r1]\n    ldr r2, [r2]\n    bl ov01_021F5FB8\n    ldr r1, [r4, r6]\n    ldr r0, _021F59F4 ; =0x00000864\n    ldr r0, [r1, r0]\n    cmp r0, #1\n    bne _021F59C6\n    ldr r3, _021F59F8 ; =ov01_02206BD8\n    add r2, sp, #0x2c\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    ldr r3, _021F59FC ; =ov01_02206BE4\n    str r0, [r2]\n    add r2, sp, #8\n    mov r7, #4\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r7, r7, #1\n    bne _021F59A8\n    ldr r0, [r3]\n    add r3, sp, #0x2c\n    str r0, [r2]\n    mov r0, #2\n    ldr r1, [r4, r6]\n    lsl r0, r0, #0xa\n    add r0, r1, r0\n    add r1, sp, #0x38\n    add r2, sp, #8\n    bl GF3dRender_DrawModel\n    ldr r4, [r4, r6]\n    ldr r0, _021F59F4 ; =0x00000864\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _021F59EE\n    add r0, r5, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    bl ov01_021FBA00\n    add r2, r0, #0\n    ldr r0, _021F5A00 ; =0x00000868\n    add r5, #0xb8\n    ldr r0, [r4, r0]\n    ldr r3, [sp, #4]\n    str r0, [sp]\n    ldr r1, [r5]\n    add r0, sp, #0x38\n    bl ov01_021F3A3C\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F59F4: .word 0x00000864\n    _021F59F8: .word ov01_02206BD8\n    _021F59FC: .word ov01_02206BE4\n    _021F5A00: .word 0x00000868"
    );
    #endif
}

void ov01_021F5A04(void) {
    /* Original at 0x021F5A04 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    add r5, r1, #0\n    add r6, r0, #0\n    add r1, r7, #0\n    bl _u32_div_f\n    add r4, r1, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    bl _u32_div_f\n    lsr r0, r0, #5\n    add r1, r0, #0\n    lsr r2, r4, #5\n    mul r1, r5\n    add r0, r2, r1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F5A28(void) {
    /* Original at 0x021F5A28 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mul r2, r1\n    add r0, r0, r2\n    bx lr"
    );
    #endif
}

void ov01_021F5A30(void) {
    /* Original at 0x021F5A30 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    add r5, r1, #0\n    add r6, r0, #0\n    add r1, r7, #0\n    bl _u32_div_f\n    add r4, r1, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    bl _u32_div_f\n    lsr r0, r0, #5\n    add r1, r0, #0\n    lsr r2, r4, #5\n    mul r1, r5\n    add r0, r2, r1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F5A54(void) {
    /* Original at 0x021F5A54 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    bne _021F5A5E\n    mov r0, #3\n    pop {r3, pc}\n    cmp r0, #1\n    bne _021F5A66\n    mov r0, #2\n    pop {r3, pc}\n    cmp r0, #2\n    bne _021F5A6E\n    mov r0, #1\n    pop {r3, pc}\n    cmp r0, #3\n    bne _021F5A76\n    mov r0, #0\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021F5A80(void) {
    /* Original at 0x021F5A80 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r2, #0\n    add r4, r3, #0\n    cmp r0, #4\n    bhi _021F5AE0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F5A96: ; jump table\n    add r0, r4, #0\n    add r1, r5, #0\n    bl _s32_div_f\n    add r0, r1, #1\n    cmp r0, r5\n    blt _021F5AB2\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #1\n    pop {r3, r4, r5, pc}\n    lsl r1, r1, #5\n    add r0, r4, r5\n    mul r1, r5\n    cmp r0, r1\n    blt _021F5AE6\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r1, r5, #0\n    bl _s32_div_f\n    sub r0, r1, #1\n    bpl _021F5AD4\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    sub r0, r4, #1\n    pop {r3, r4, r5, pc}\n    sub r0, r4, r5\n    bpl _021F5AE6\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F5AE8(void) {
    /* Original at 0x021F5AE8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #4\n    bhi _021F5B20\n    add r2, r0, r0\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021F5AF8: ; jump table\n    sub r0, r1, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx lr\n    add r0, r1, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx lr\n    sub r0, r1, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx lr\n    add r0, r1, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx lr"
    );
    #endif
}

void ov01_021F5B24(void) {
    /* Original at 0x021F5B24 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl ov01_021F5AE8\n    cmp r5, r0\n    bge _021F5B56\n    sub r0, r0, r5\n    cmp r0, #1\n    bne _021F5B42\n    ldrb r0, [r4]\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    b _021F5B82\n    cmp r0, #2\n    bne _021F5B50\n    ldrb r0, [r4]\n    sub r0, r0, #2\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    b _021F5B82\n    bl GF_AssertFail\n    b _021F5B82\n    cmp r5, r0\n    ble _021F5B7E\n    sub r0, r5, r0\n    cmp r0, #1\n    bne _021F5B6A\n    ldrb r0, [r4]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    b _021F5B82\n    cmp r0, #2\n    bne _021F5B78\n    ldrb r0, [r4]\n    add r0, r0, #2\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    b _021F5B82\n    bl GF_AssertFail\n    b _021F5B82\n    bl GF_AssertFail\n    strb r6, [r4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F5B88(void) {
    /* Original at 0x021F5B88 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #4\n    bhi _021F5BB4\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F5B9A: ; jump table\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #4\n    pop {r3, pc}\n    mov r0, #3\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021F5BBC(void) {
    /* Original at 0x021F5BBC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    add r7, r2, #0\n    mov r4, #0\n    ldr r0, [r5, #0x2c]\n    cmp r0, #1\n    bne _021F5BE2\n    add r0, r6, #0\n    bl ov01_021F5B88\n    add r1, r5, #0\n    add r1, #0x30\n    ldrb r1, [r1]\n    cmp r1, r0\n    bne _021F5BE2\n    strb r4, [r7]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r5, #0x30\n    cmp r4, #2\n    blt _021F5BC6\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F5BF0(void) {
    /* Original at 0x021F5BF0 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, #0xa1\n    ldrb r1, [r0]\n    mov r0, #0x30\n    add r4, r5, #0\n    mul r0, r1\n    add r0, r5, r0\n    ldr r0, [r0, #0x2c]\n    add r4, #0x64\n    cmp r0, #0\n    beq _021F5C0C\n    bl GF_AssertFail\n    add r1, r5, #0\n    add r1, #0xa1\n    ldrb r2, [r1]\n    mov r1, #0x30\n    mov r0, #1\n    add r3, r2, #0\n    mul r3, r1\n    add r2, r5, r3\n    add r3, r5, #0\n    str r0, [r2, #0x2c]\n    add r3, #0xa1\n    ldrb r3, [r3]\n    ldrb r2, [r4, #0xc]\n    add r6, r3, #0\n    mul r6, r1\n    add r3, r5, r6\n    add r3, #0x30\n    strb r2, [r3]\n    add r3, r5, #0\n    add r3, #0xa1\n    ldrb r3, [r3]\n    ldr r2, [r4, #0x10]\n    add r6, r3, #0\n    mul r6, r1\n    add r3, r5, r6\n    str r2, [r3, #0x1c]\n    add r3, r5, #0\n    add r3, #0xa1\n    ldrb r3, [r3]\n    ldr r2, [r4, #0x14]\n    add r6, r3, #0\n    mul r6, r1\n    add r3, r5, r6\n    str r2, [r3, #0x20]\n    add r3, r5, #0\n    add r3, #0xa1\n    ldrb r3, [r3]\n    ldrb r2, [r4, #0x18]\n    add r6, r3, #0\n    mul r6, r1\n    add r3, r5, r6\n    add r3, #0x24\n    strb r2, [r3]\n    add r3, r5, #0\n    add r3, #0xa1\n    ldrb r3, [r3]\n    ldrb r2, [r4, #0x19]\n    add r6, r3, #0\n    mul r6, r1\n    add r3, r5, r6\n    add r3, #0x25\n    strb r2, [r3]\n    add r3, r5, #0\n    add r3, #0xa1\n    ldrb r3, [r3]\n    ldr r2, [r4]\n    add r6, r3, #0\n    mul r6, r1\n    add r3, r5, r6\n    str r2, [r3, #4]\n    add r2, r5, #0\n    add r2, #0xa1\n    ldrb r2, [r2]\n    ldr r4, [r4, #4]\n    add r3, r2, #0\n    mul r3, r1\n    add r2, r5, r3\n    add r3, r5, #0\n    str r4, [r2, #8]\n    add r3, #0xa1\n    ldrb r3, [r3]\n    mov r2, #0\n    add r4, r3, #0\n    mul r4, r1\n    add r3, r5, r4\n    add r3, #0x26\n    strb r2, [r3]\n    add r3, r5, #0\n    add r3, #0xa1\n    ldrb r3, [r3]\n    mul r1, r3\n    add r1, r5, r1\n    str r2, [r1, #0x28]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F5CB4(void) {
    /* Original at 0x021F5CB4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    add r4, r5, #0\n    add r4, #0x64\n    cmp r0, #2\n    blo _021F5CC8\n    bl GF_AssertFail\n    add r0, r5, #0\n    bl ov01_021F5BF0\n    cmp r0, #1\n    beq _021F5CD6\n    bl GF_AssertFail\n    mov r0, #0x86\n    ldr r2, [r4, #0x10]\n    ldr r1, [r4]\n    lsl r0, r0, #4\n    str r2, [r1, r0]\n    ldr r2, [r4, #0x14]\n    ldr r1, [r4, #4]\n    str r2, [r1, r0]\n    add r0, r5, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r5, #0\n    add r0, #0xa0\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa1\n    ldrb r0, [r0]\n    add r5, #0xa1\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    strb r0, [r5]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F5D10(void) {
    /* Original at 0x021F5D10 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    add r1, #0xa2\n    ldrb r2, [r1]\n    mov r1, #0x30\n    mul r1, r2\n    add r0, r0, r1\n    ldr r0, [r0, #0x28]\n    bx lr"
    );
    #endif
}

void ov01_021F5D20(void) {
    /* Original at 0x021F5D20 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    add r2, r3, #0\n    lsl r1, r3, #2\n    add r1, r0, r1\n    add r1, #0x80\n    str r2, [r1]\n    add r1, r3, #1\n    lsl r1, r1, #0x18\n    lsr r3, r1, #0x18\n    cmp r3, #4\n    blo _021F5D24\n    bx lr"
    );
    #endif
}

void ov01_021F5D38(void) {
    /* Original at 0x021F5D38 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #4\n    bhi _021F5D88\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F5D48: ; jump table\n    add r0, r1, #0\n    mov r2, #1\n    add r0, #0x88\n    str r2, [r0]\n    add r1, #0x8c\n    str r2, [r1]\n    bx lr\n    add r0, r1, #0\n    mov r2, #1\n    add r0, #0x80\n    str r2, [r0]\n    add r1, #0x88\n    str r2, [r1]\n    bx lr\n    add r0, r1, #0\n    mov r2, #1\n    add r0, #0x80\n    str r2, [r0]\n    add r1, #0x84\n    str r2, [r1]\n    bx lr\n    add r0, r1, #0\n    mov r2, #1\n    add r0, #0x84\n    str r2, [r0]\n    add r1, #0x8c\n    str r2, [r1]\n    bx lr"
    );
    #endif
}

void ov01_021F5D8C(void) {
    /* Original at 0x021F5D8C */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r6, r1, #0\n    add r5, r0, #0\n    add r4, r3, #0\n    mov r1, #0\n    add r7, r2, #0\n    bl ov01_021F488C\n    add r2, r5, #0\n    add r3, r5, #0\n    str r4, [sp]\n    add r0, sp, #0x10\n    str r0, [sp, #4]\n    add r2, #0xc4\n    add r3, #0xc8\n    ldr r2, [r2]\n    ldr r3, [r3]\n    add r0, r6, #0\n    add r1, r7, #0\n    bl ov01_021F47A0\n    mov r4, #0\n    add r7, sp, #0x10\n    lsl r6, r4, #2\n    bl ov01_021FB254\n    add r1, r5, r6\n    add r1, #0x90\n    ldr r2, [r1]\n    ldr r1, _021F5E1C ; =0x0000085C\n    str r0, [r2, r1]\n    add r0, r5, r6\n    add r0, #0x90\n    ldr r1, [r0]\n    ldr r0, _021F5E1C ; =0x0000085C\n    ldr r0, [r1, r0]\n    bl ov01_021FB360\n    add r0, r5, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    bl ov01_021FBA00\n    add r1, r5, #0\n    add r1, #0xc4\n    ldr r1, [r1]\n    add r2, r5, #0\n    str r1, [sp]\n    add r1, r5, #0\n    add r1, #0xc8\n    ldr r1, [r1]\n    add r3, r5, #0\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    add r2, #0xb8\n    add r3, #0xc0\n    ldr r0, [r7, r6]\n    ldr r2, [r2]\n    ldr r3, [r3]\n    add r1, r4, #0\n    bl ov01_021F4E88\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _021F5DBC\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F5E1C: .word 0x0000085C"
    );
    #endif
}

void ov01_021F5E20(void) {
    /* Original at 0x021F5E20 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    add r4, r3, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    bl ov01_021F497C\n    add r2, r5, #0\n    add r3, r5, #0\n    str r4, [sp]\n    add r0, sp, #0x10\n    str r0, [sp, #4]\n    add r2, #0xc4\n    add r3, #0xc8\n    ldr r2, [r2]\n    ldr r3, [r3]\n    add r0, r6, #0\n    add r1, r7, #0\n    bl ov01_021F47A0\n    mov r4, #0\n    add r7, r4, #0\n    lsl r6, r4, #2\n    add r0, r5, r6\n    add r0, #0x90\n    ldr r1, [r0]\n    ldr r0, _021F5E9C ; =0x0000085C\n    str r7, [r1, r0]\n    add r0, r5, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    bl ov01_021FBA00\n    add r1, r5, #0\n    add r1, #0xc4\n    ldr r1, [r1]\n    add r2, r5, #0\n    str r1, [sp]\n    add r1, r5, #0\n    add r1, #0xc8\n    ldr r1, [r1]\n    add r3, r5, #0\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    add r0, sp, #0x10\n    add r2, #0xb8\n    add r3, #0xc0\n    ldr r0, [r0, r6]\n    ldr r2, [r2]\n    ldr r3, [r3]\n    add r1, r4, #0\n    bl ov01_021F4F0C\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _021F5E4E\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F5E9C: .word 0x0000085C"
    );
    #endif
}

void ov01_021F5EA0(void) {
    /* Original at 0x021F5EA0 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r6, r1, #0\n    add r5, r0, #0\n    add r4, r3, #0\n    mov r1, #1\n    add r7, r2, #0\n    bl ov01_021F488C\n    add r2, r5, #0\n    add r3, r5, #0\n    str r4, [sp]\n    add r0, sp, #0x10\n    str r0, [sp, #4]\n    add r2, #0xc4\n    add r3, #0xc8\n    ldr r2, [r2]\n    ldr r3, [r3]\n    add r0, r6, #0\n    add r1, r7, #0\n    bl ov01_021F47A0\n    mov r4, #0\n    add r7, sp, #0x10\n    lsl r6, r4, #2\n    bl ov01_021FB254\n    add r1, r5, r6\n    add r1, #0x90\n    ldr r2, [r1]\n    ldr r1, _021F5F30 ; =0x0000085C\n    str r0, [r2, r1]\n    add r0, r5, r6\n    add r0, #0x90\n    ldr r1, [r0]\n    ldr r0, _021F5F30 ; =0x0000085C\n    ldr r0, [r1, r0]\n    bl ov01_021FB360\n    add r0, r5, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    bl ov01_021FBA00\n    add r1, r5, #0\n    add r1, #0xc4\n    ldr r1, [r1]\n    add r2, r5, #0\n    str r1, [sp]\n    add r1, r5, #0\n    add r1, #0xc8\n    ldr r1, [r1]\n    add r3, r5, #0\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r5, [sp, #0xc]\n    add r2, #0xb8\n    add r3, #0xc0\n    ldr r0, [r7, r6]\n    ldr r2, [r2]\n    ldr r3, [r3]\n    add r1, r4, #0\n    bl ov01_021F4FB0\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _021F5ED0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F5F30: .word 0x0000085C"
    );
    #endif
}

void ov01_021F5F34(void) {
    /* Original at 0x021F5F34 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r1, r0, #0\n    mov r3, #0\n    add r1, #0xa2\n    strb r3, [r1]\n    add r1, r0, #0\n    add r1, #0xa1\n    strb r3, [r1]\n    add r1, r0, #0\n    add r1, #0xa0\n    strb r3, [r1]\n    add r4, r0, #0\n    add r2, r3, #0\n    mov r1, #1\n    str r2, [r4, #0x2c]\n    str r1, [r4, #0x28]\n    add r3, r3, #1\n    add r4, #0x30\n    cmp r3, #2\n    blt _021F5F50\n    bl ov01_021F5D20\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F5F64(void) {
    /* Original at 0x021F5F64 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    add r2, #0xcc\n    ldr r2, [r2]\n    bl ov01_021F5A28\n    add r1, r4, #0\n    add r1, #0xa8\n    str r0, [r1]\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0xa8\n    add r1, #0xcc\n    ldr r0, [r0]\n    ldr r1, [r1]\n    bl ov01_021F6328\n    add r1, r4, #0\n    add r1, #0xad\n    strb r0, [r1]\n    add r0, r4, #0\n    add r0, #0xad\n    ldrb r0, [r0]\n    bl ov01_021F5A54\n    add r1, r4, #0\n    add r1, #0xac\n    strb r0, [r1]\n    add r0, r4, #0\n    add r1, r4, #0\n    add r2, r4, #0\n    add r0, #0xa8\n    add r1, #0xc4\n    add r2, #0xcc\n    ldr r0, [r0]\n    ldr r1, [r1]\n    ldr r2, [r2]\n    bl ov01_021F5A30\n    add r4, #0xa4\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F5FB8(void) {
    /* Original at 0x021F5FB8 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r2, #0\n    mov r2, #1\n    add r5, r3, #0\n    lsl r2, r2, #0x14\n    str r2, [r5]\n    str r2, [r5, #8]\n    mov r2, #0\n    add r4, r0, #0\n    mvn r2, r2\n    str r1, [sp, #4]\n    cmp r4, r2\n    beq _021F601A\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    lsr r6, r0, #0x10\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    add r0, r7, #0\n    bl MapMatrix_GetWidth\n    str r0, [sp, #8]\n    add r0, r7, #0\n    bl MapMatrix_GetMatrixId\n    add r1, r0, #0\n    ldr r0, [sp, #8]\n    add r2, r6, #0\n    str r0, [sp]\n    add r0, r7, #0\n    add r3, r4, #0\n    bl MapMatrix_GetMapAltitude\n    lsl r0, r0, #0xf\n    str r0, [r5, #4]\n    ldr r1, [r5]\n    lsl r0, r6, #0x15\n    add r0, r1, r0\n    str r0, [r5]\n    ldr r1, [r5, #8]\n    lsl r0, r4, #0x15\n    add r0, r1, r0\n    str r0, [r5, #8]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F6020(void) {
    /* Original at 0x021F6020 */
    /* Requires manual decompilation - 113 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r1, #0\n    mov r1, #0x11\n    add r5, r0, #0\n    mov r0, #4\n    lsl r1, r1, #4\n    str r2, [sp]\n    str r3, [sp, #4]\n    bl Heap_Alloc\n    mov r2, #0x11\n    mov r1, #0\n    lsl r2, r2, #4\n    add r4, r0, #0\n    bl MI_CpuFill8\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    bne _021F6054\n    add r0, r4, #0\n    ldr r1, _021F610C ; =ov01_02206BC0\n    add r0, #0xfc\n    str r1, [r0]\n    mov r6, #1\n    b _021F6078\n    cmp r0, #1\n    bne _021F6064\n    add r0, r4, #0\n    ldr r1, _021F6110 ; =ov01_02206BD0\n    add r0, #0xfc\n    str r1, [r0]\n    mov r6, #0\n    b _021F6078\n    cmp r0, #2\n    bne _021F6074\n    add r0, r4, #0\n    ldr r1, _021F6114 ; =ov01_02206BC8\n    add r0, #0xfc\n    str r1, [r0]\n    mov r6, #1\n    b _021F6078\n    bl GF_AssertFail\n    mov r0, #0x41\n    ldr r1, [sp, #0x28]\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r6, #0\n    bl ov01_021FAC44\n    str r0, [r4]\n    add r0, r4, #0\n    add r0, #0xb8\n    str r7, [r0]\n    add r0, r4, #0\n    add r0, #0xc0\n    str r5, [r0]\n    add r1, r4, #0\n    ldr r0, [sp]\n    add r1, #0xbc\n    str r0, [r1]\n    add r0, r5, #0\n    bl MapMatrix_GetWidth\n    add r1, r4, #0\n    add r1, #0xc4\n    str r0, [r1]\n    add r0, r5, #0\n    bl MapMatrix_GetHeight\n    add r1, r4, #0\n    add r1, #0xc8\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0xc4\n    ldr r0, [r0]\n    lsl r1, r0, #5\n    add r0, r4, #0\n    add r0, #0xcc\n    str r1, [r0]\n    add r1, r4, #0\n    ldr r0, [sp, #4]\n    add r1, #0xf4\n    str r0, [r1]\n    add r0, r4, #0\n    ldr r1, [sp, #0x20]\n    add r0, #0xf8\n    str r1, [r0]\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0xf0\n    str r1, [r0]\n    add r0, r4, #0\n    bl ov01_021F5F34\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xb0\n    str r1, [r0]\n    add r0, r4, #0\n    mov r1, #2\n    add r0, #0xb4\n    str r1, [r0]\n    mov r0, #0x41\n    mov r1, #4\n    bl NARC_New\n    mov r1, #1\n    lsl r1, r1, #8\n    str r0, [r4, r1]\n    mov r0, #0\n    add r1, #8\n    str r0, [r4, r1]\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F610C: .word ov01_02206BC0\n    _021F6110: .word ov01_02206BD0\n    _021F6114: .word ov01_02206BC8"
    );
    #endif
}

void ov01_021F6118(void) {
    /* Original at 0x021F6118 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r5, #0\n    add r6, #0xfc\n    add r3, r5, #0\n    ldr r6, [r6]\n    add r3, #0xcc\n    ldr r3, [r3]\n    ldr r6, [r6]\n    add r4, r1, #0\n    add r7, r2, #0\n    blx r6\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov01_021F5F64\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F613C(void) {
    /* Original at 0x021F613C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r2, r5, #0\n    add r3, r5, #0\n    add r1, #0xc8\n    add r2, #0xcc\n    add r3, #0xa8\n    ldr r1, [r1]\n    ldr r2, [r2]\n    ldr r3, [r3]\n    add r6, r0, #0\n    bl ov01_021F5A80\n    add r1, r5, #0\n    add r2, r5, #0\n    add r1, #0xc4\n    add r2, #0xcc\n    ldr r1, [r1]\n    ldr r2, [r2]\n    add r7, r0, #0\n    bl ov01_021F5A04\n    add r1, r5, #0\n    add r1, #0xcc\n    add r4, r0, #0\n    ldr r1, [r1]\n    add r0, r7, #0\n    bl ov01_021F6328\n    add r1, r5, #0\n    add r1, #0xa4\n    ldr r1, [r1]\n    cmp r1, r4\n    bne _021F61A4\n    add r1, r5, #0\n    add r1, #0xad\n    ldrb r1, [r1]\n    cmp r1, r0\n    beq _021F61A4\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    bl ov01_021F562C\n    add r1, r5, #0\n    add r1, #0xad\n    add r5, #0xac\n    ldrb r1, [r1]\n    add r0, r6, #0\n    add r2, r5, #0\n    bl ov01_021F5B24\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F61A8(void) {
    /* Original at 0x021F61A8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    sub r7, r4, #1\n    lsl r0, r4, #2\n    add r0, r5, r0\n    add r0, #0x90\n    ldr r1, [r0]\n    mov r0, #0x86\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    cmp r0, r7\n    beq _021F61CE\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov01_021F595C\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _021F61B2\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F61DC(void) {
    /* Original at 0x021F61DC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    asr r4, r0, #0xf\n    lsr r4, r4, #0x10\n    add r4, r0, r4\n    asr r0, r4, #0x10\n    str r0, [r2]\n    asr r0, r1, #0xf\n    lsr r0, r0, #0x10\n    add r0, r1, r0\n    asr r0, r0, #0x10\n    str r0, [r3]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov01_021F61F8(void) {
    /* Original at 0x021F61F8 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_0201A430\n    bl NNS_GfdResetLnkTexVramState\n    bl NNS_GfdResetLnkPlttVramState\n    mov r4, #0\n    add r6, r5, #4\n    mov r7, #0x30\n    add r0, r4, #0\n    mul r0, r7\n    add r0, r6, r0\n    bl ov01_021F477C\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #2\n    blo _021F620E\n    mov r6, #0\n    add r7, r6, #0\n    lsl r4, r6, #2\n    add r0, r5, r4\n    add r0, #0x90\n    ldr r2, [r0]\n    ldr r0, _021F62A4 ; =0x00000864\n    mov r1, #0\n    str r1, [r2, r0]\n    add r0, r5, r4\n    add r0, #0x90\n    ldr r1, [r0]\n    ldr r0, _021F62A8 ; =0x0000085C\n    ldr r0, [r1, r0]\n    bl ov01_021FB2E8\n    add r0, r5, r4\n    add r0, #0x90\n    ldr r1, [r0]\n    ldr r0, _021F62AC ; =0x00000868\n    ldr r0, [r1, r0]\n    bl ov01_021F3660\n    add r0, r5, r4\n    add r0, #0x90\n    ldr r1, [r0]\n    mov r0, #0xa7\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _021F6272\n    bl Heap_Free\n    add r0, r5, r4\n    add r0, #0x90\n    ldr r2, [r0]\n    mov r0, #0xa7\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r2, r0]\n    add r0, r5, r4\n    add r0, #0x90\n    ldr r0, [r0]\n    bl Heap_Free\n    add r0, r5, r4\n    add r0, #0x90\n    str r7, [r0]\n    add r0, r6, #1\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    cmp r6, #4\n    blo _021F6226\n    add r0, r5, #0\n    mov r1, #3\n    add r0, #0xb4\n    str r1, [r0]\n    add r0, r5, #0\n    mov r1, #1\n    add r0, #0xb0\n    str r1, [r0]\n    add r5, #0xf0\n    str r7, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F62A4: .word 0x00000864\n    _021F62A8: .word 0x0000085C\n    _021F62AC: .word 0x00000868"
    );
    #endif
}

void ov01_021F62B0(void) {
    /* Original at 0x021F62B0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    bl NARC_Delete\n    ldr r0, [r4]\n    bl ov01_021FACB4\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F62CC(void) {
    /* Original at 0x021F62CC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    add r1, #0xb0\n    ldr r1, [r1]\n    cmp r1, #1\n    bne _021F62E2\n    add r0, #0xa0\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021F62E2\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021F62E8(void) {
    /* Original at 0x021F62E8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r2, r4, #0\n    add r3, r5, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0xd0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r4, #0xdc\n    str r0, [r2]\n    str r5, [r4]\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov01_021F6304(void) {
    /* Original at 0x021F6304 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    add r0, #0xdc\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021F630C(void) {
    /* Original at 0x021F630C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "lsl r0, r0, #2\n    add r0, r1, r0\n    add r0, #0x90\n    ldr r1, [r0]\n    ldr r0, _021F631C ; =0x00000868\n    ldr r0, [r1, r0]\n    str r0, [r2]\n    bx lr\n    _021F631C: .word 0x00000868"
    );
    #endif
}

void ov01_021F6320(void) {
    /* Original at 0x021F6320 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xac\n    ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021F6328(void) {
    /* Original at 0x021F6328 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl _u32_div_f\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1b\n    sub r1, r1, r2\n    mov r0, #0x1b\n    ror r1, r0\n    mov r0, #0x1f\n    and r0, r4\n    add r1, r2, r1\n    cmp r0, #0x10\n    bge _021F6350\n    cmp r1, #0x10\n    bge _021F634C\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}\n    cmp r1, #0x10\n    bge _021F6358\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F635C(void) {
    /* Original at 0x021F635C */
    /* Requires manual decompilation - 220 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    cmp r0, r5\n    bne _021F6372\n    add r4, #0xac\n    ldrb r0, [r4]\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _021F637E\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r0, #0xac\n    ldrb r1, [r0]\n    cmp r1, #3\n    bls _021F638A\n    b _021F6528\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F6396: ; jump table\n    add r0, r4, #0\n    add r0, #0xa4\n    add r2, r4, #0\n    ldr r0, [r0]\n    add r2, #0xc4\n    ldr r2, [r2]\n    sub r3, r5, r0\n    cmp r2, r3\n    bne _021F63B8\n    add r0, r1, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    cmp r3, #1\n    bne _021F63D2\n    add r1, r5, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    beq _021F63D2\n    add r4, #0xac\n    ldrb r0, [r4]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0xa4\n    add r1, #0xc4\n    ldr r2, [r1]\n    ldr r0, [r0]\n    add r3, r2, #1\n    sub r1, r5, r0\n    cmp r3, r1\n    bne _021F63FC\n    add r1, r5, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    bne _021F63FC\n    add r4, #0xac\n    ldrb r0, [r4]\n    add r0, r0, #3\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r0, #0xa4\n    add r2, r4, #0\n    ldr r0, [r0]\n    add r2, #0xc4\n    ldr r2, [r2]\n    sub r3, r5, r0\n    cmp r2, r3\n    bne _021F641A\n    add r0, r1, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    sub r1, r0, r5\n    cmp r1, #1\n    bne _021F6436\n    add r1, r5, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    beq _021F6436\n    add r4, #0xac\n    ldrb r0, [r4]\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0xa4\n    add r1, #0xc4\n    ldr r2, [r1]\n    ldr r0, [r0]\n    sub r3, r2, #1\n    sub r1, r5, r0\n    cmp r3, r1\n    bne _021F6460\n    add r1, r5, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    bne _021F6460\n    add r4, #0xac\n    ldrb r0, [r4]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r0, #0xa4\n    add r2, r4, #0\n    ldr r0, [r0]\n    add r2, #0xc4\n    ldr r2, [r2]\n    sub r3, r0, r5\n    cmp r2, r3\n    bne _021F647E\n    sub r0, r1, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    sub r1, r2, #1\n    cmp r1, r3\n    bne _021F649A\n    add r1, r5, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    bne _021F649A\n    add r4, #0xac\n    ldrb r0, [r4]\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    sub r1, r5, r0\n    cmp r1, #1\n    bne _021F64C2\n    add r2, r4, #0\n    add r2, #0xc4\n    ldr r2, [r2]\n    add r1, r5, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    beq _021F64C2\n    add r4, #0xac\n    ldrb r0, [r4]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r0, #0xa4\n    add r2, r4, #0\n    ldr r0, [r0]\n    add r2, #0xc4\n    ldr r2, [r2]\n    sub r3, r0, r5\n    cmp r2, r3\n    bne _021F64E0\n    sub r0, r1, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    add r1, r2, #1\n    cmp r1, r3\n    bne _021F64FC\n    add r1, r5, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    bne _021F64FC\n    add r4, #0xac\n    ldrb r0, [r4]\n    sub r0, r0, #3\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    sub r1, r0, r5\n    cmp r1, #1\n    bne _021F6524\n    add r2, r4, #0\n    add r2, #0xc4\n    ldr r2, [r2]\n    add r1, r5, #0\n    bl ov01_021F4728\n    cmp r0, #0\n    beq _021F6524\n    add r4, #0xac\n    ldrb r0, [r4]\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    mov r0, #4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F652C(void) {
    GF_AssertFail(0x86);
}

void ov01_021F654C(void) {
    /* Original at 0x021F654C */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r2, #0\n    asr r2, r6, #4\n    add r5, r0, #0\n    lsr r2, r2, #0x1b\n    add r2, r6, r2\n    add r4, r1, #0\n    add r0, #0xc4\n    ldr r1, [r0]\n    asr r0, r4, #4\n    lsr r0, r0, #0x1b\n    add r0, r4, r0\n    asr r2, r2, #5\n    str r3, [sp]\n    add r3, r2, #0\n    asr r0, r0, #5\n    mul r3, r1\n    add r7, r0, r3\n    add r0, r5, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    mul r0, r1\n    cmp r7, r0\n    blo _021F658A\n    mov r0, #1\n    bl sub_02039AD8\n    cmp r0, #0\n    beq _021F658A\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r0, #0xc4\n    ldr r1, [r0]\n    add r0, r5, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    mul r0, r1\n    cmp r7, r0\n    blo _021F65A0\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0xcc\n    ldr r1, [r0]\n    add r0, r6, #0\n    mul r0, r1\n    add r0, r4, r0\n    bl ov01_021F6328\n    add r1, r0, #0\n    add r0, r7, #0\n    add r2, r5, #0\n    bl ov01_021F635C\n    ldr r1, [sp]\n    cmp r1, #0\n    beq _021F65C2\n    strb r0, [r1]\n    cmp r0, #3\n    bls _021F65CA\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F65D0(void) {
    /* Original at 0x021F65D0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r0, r0, r1\n    add r0, #0x90\n    ldr r1, [r0]\n    ldr r0, _021F65E0 ; =0x0000085C\n    ldr r0, [r1, r0]\n    bx lr\n    nop\n    _021F65E0: .word 0x0000085C"
    );
    #endif
}

void ov01_021F65E4(void) {
    /* Original at 0x021F65E4 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r0, r0, r1\n    add r0, #0x90\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021F65F0(void) {
    /* Original at 0x021F65F0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r0, r0, r1\n    add r0, #0x90\n    ldr r1, [r0]\n    mov r0, #0xa7\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bx lr"
    );
    #endif
}

void ov01_021F6600(void) {
    /* Original at 0x021F6600 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r0, r0, r1\n    add r0, #0x90\n    ldr r1, [r0]\n    ldr r0, _021F6610 ; =0x0000086C\n    add r0, r1, r0\n    bx lr\n    nop\n    _021F6610: .word 0x0000086C"
    );
    #endif
}

void ov01_021F6614(void) {
    SysTask_GetData();
}

void ov01_021F6620(void) {
    /* Original at 0x021F6620 */
    /* Requires manual decompilation - 147 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x20]\n    cmp r0, #1\n    bne _021F6630\n    mov r0, #5\n    strb r0, [r4, #0x18]\n    ldrb r0, [r4, #0x18]\n    cmp r0, #5\n    bls _021F6638\n    b _021F676A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F6644: ; jump table\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #0xe\n    ldr r5, [r4, #8]\n    lsl r0, r0, #0xc\n    cmp r5, r0\n    bgt _021F6662\n    mov r0, #2\n    b _021F6666\n    add r5, r0, #0\n    mov r0, #1\n    strb r0, [r4, #0x18]\n    ldr r2, [r4, #0x10]\n    ldr r0, [r4]\n    ldr r3, [r2]\n    ldr r2, [r4, #0x2c]\n    add r1, r5, #0\n    add r2, r3, r2\n    bl NARC_ReadFile\n    ldr r0, [r4, #0x2c]\n    add r0, r0, r5\n    str r0, [r4, #0x2c]\n    pop {r4, r5, r6, pc}\n    ldr r2, [r4, #0x2c]\n    ldr r0, [r4, #8]\n    sub r5, r0, r2\n    mov r0, #0xe\n    lsl r0, r0, #0xc\n    cmp r5, r0\n    ble _021F6694\n    add r5, r0, #0\n    mov r6, #0\n    b _021F6696\n    mov r6, #1\n    ldr r3, [r4, #0x10]\n    ldr r0, [r4]\n    ldr r3, [r3]\n    add r1, r5, #0\n    add r2, r3, r2\n    bl NARC_ReadFile\n    cmp r6, #0\n    beq _021F66AE\n    mov r0, #2\n    strb r0, [r4, #0x18]\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x2c]\n    add r0, r0, r5\n    str r0, [r4, #0x2c]\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _021F66CE\n    bl GF3dRender_ResTexIsLoaded\n    cmp r0, #1\n    bne _021F66CE\n    ldr r0, [r4, #0x10]\n    ldr r1, [r4, #0x14]\n    ldr r0, [r0]\n    bl GF3dRender_BindModelSet\n    mov r0, #3\n    strb r0, [r4, #0x18]\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x10]\n    ldr r0, [r0]\n    bl NNS_G3dGetMdlSet\n    add r5, r0, #0\n    ldrb r0, [r5, #9]\n    cmp r0, #1\n    beq _021F66E8\n    bl GF_AssertFail\n    cmp r5, #0\n    beq _021F670C\n    add r1, r5, #0\n    add r1, #8\n    beq _021F6700\n    ldrb r0, [r5, #9]\n    cmp r0, #0\n    bls _021F6700\n    ldrh r0, [r5, #0xe]\n    add r0, r1, r0\n    add r0, r0, #4\n    b _021F6702\n    mov r0, #0\n    cmp r0, #0\n    beq _021F670C\n    ldr r0, [r0]\n    add r5, r5, r0\n    b _021F670E\n    mov r5, #0\n    cmp r5, #0\n    bne _021F6716\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    add r1, r5, #0\n    bl NNS_G3dRenderObjInit\n    ldr r0, [r4, #0xc]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _021F672A\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    str r1, [r0, #8]\n    ldr r0, [r4, #0x28]\n    bl ov01_02204698\n    cmp r0, #0\n    beq _021F674C\n    ldr r0, [r4, #4]\n    bl sub_02054E20\n    cmp r0, #0\n    bne _021F674C\n    ldr r0, [r4, #0x28]\n    ldr r1, [r4, #0xc]\n    bl ov01_02204678\n    ldr r0, [r4, #0x1c]\n    mov r1, #1\n    str r1, [r0]\n    mov r0, #5\n    strb r0, [r4, #0x18]\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x24]\n    mov r1, #0\n    str r1, [r0]\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F676C(void) {
    /* Original at 0x021F676C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #4\n    mov r1, #0x30\n    add r6, r2, #0\n    add r7, r3, #0\n    bl Heap_AllocAtEnd\n    add r1, r0, #0\n    str r5, [r1]\n    str r4, [r1, #4]\n    str r6, [r1, #8]\n    ldr r0, [sp, #0x18]\n    str r7, [r1, #0xc]\n    str r0, [r1, #0x10]\n    ldr r0, [sp, #0x1c]\n    mov r2, #0\n    str r0, [r1, #0x14]\n    ldr r0, [sp, #0x20]\n    str r0, [r1, #0x28]\n    ldr r0, [sp, #0x24]\n    strb r2, [r1, #0x18]\n    str r0, [r1, #0x1c]\n    str r2, [r0]\n    ldr r0, [sp, #0x28]\n    str r0, [r1, #0x24]\n    str r2, [r1, #0x20]\n    ldr r0, _021F67B0 ; =ov01_021F6620\n    mov r2, #1\n    bl SysTask_CreateOnMainQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F67B0: .word ov01_021F6620"
    );
    #endif
}

void ov01_021F67B4(void) {
    /* Original at 0x021F67B4 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r3, #0\n    add r5, r2, #0\n    ldr r2, [r4]\n    bl NARC_ReadFile\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    beq _021F67DE\n    bl GF3dRender_ResTexIsLoaded\n    cmp r0, #1\n    bne _021F67DE\n    ldr r0, [r4]\n    ldr r1, [sp, #0x10]\n    bl GF3dRender_BindModelSet\n    cmp r0, #0\n    bne _021F67DE\n    bl GF_AssertFail\n    ldr r0, [r4]\n    bl NNS_G3dGetMdlSet\n    ldrb r0, [r0, #9]\n    cmp r0, #1\n    beq _021F67EE\n    bl GF_AssertFail\n    ldr r0, [r4]\n    bl NNS_G3dGetMdlSet\n    cmp r0, #0\n    beq _021F6818\n    add r2, r0, #0\n    add r2, #8\n    beq _021F680C\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _021F680C\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _021F680E\n    mov r1, #0\n    cmp r1, #0\n    beq _021F6818\n    ldr r1, [r1]\n    add r4, r0, r1\n    b _021F681A\n    mov r4, #0\n    cmp r4, #0\n    bne _021F6822\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    bl NNS_G3dRenderObjInit\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}
