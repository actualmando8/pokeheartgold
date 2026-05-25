/* Decompiled from asm/overlay_80_02229EE0.s */
#include "global.h"

void ov80_02229EE0(void) {
    AllocAndReadWholeNarcMemberByIdPair();
}

void ov80_02229EF4(void) {
    /* Original at 0x02229EF4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    ldr r3, _02229F00 ; =ReadWholeNarcMemberByIdPair\n    bx r3\n    nop\n    _02229F00: .word ReadWholeNarcMemberByIdPair"
    );
    #endif
}

void ov80_02229F04(void) {
    /* Original at 0x02229F04 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    mov r1, #0x1b\n    str r3, [sp]\n    mov r0, #1\n    add r2, r1, #0\n    add r3, r6, #0\n    bl NewMsgDataFromNarc\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x30\n    bl MI_CpuFill8\n    lsl r0, r4, #0x10\n    ldr r2, [sp]\n    lsr r0, r0, #0x10\n    add r1, r6, #0\n    bl ov80_02229EE0\n    add r6, r0, #0\n    ldr r0, _02229F68 ; =0x0000FFFF\n    str r4, [r5]\n    strh r0, [r5, #0x18]\n    lsl r0, r4, #1\n    add r0, r4, r0\n    strh r0, [r5, #0x1a]\n    ldrh r0, [r6]\n    add r1, r4, #0\n    strh r0, [r5, #4]\n    add r0, r7, #0\n    bl NewString_ReadMsgData\n    add r5, #8\n    add r4, r0, #0\n    add r1, r5, #0\n    mov r2, #8\n    bl CopyStringToU16Array\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r7, #0\n    bl DestroyMsgData\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02229F68: .word 0x0000FFFF"
    );
    #endif
}

void ov80_02229F6C(void) {
    /* Original at 0x02229F6C */
    /* Requires manual decompilation - 211 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r1, [sp]\n    add r7, r2, #0\n    mov r1, #0\n    mov r2, #0x38\n    add r4, r0, #0\n    add r6, r3, #0\n    ldr r5, [sp, #0x34]\n    bl MI_CpuFill8\n    ldr r1, [sp]\n    ldr r2, [sp, #0x40]\n    add r0, sp, #8\n    bl ov80_02229EF4\n    ldrh r1, [r4]\n    add r3, sp, #8\n    ldr r0, _0222A118 ; =0xFFFFF800\n    add r2, r1, #0\n    and r2, r0\n    ldrh r1, [r3]\n    lsr r0, r0, #0x15\n    and r0, r1\n    orr r0, r2\n    strh r0, [r4]\n    ldrh r1, [r4]\n    ldr r0, _0222A11C ; =0xFFFF07FF\n    and r0, r1\n    ldrh r1, [r3, #0xe]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x10\n    orr r0, r1\n    strh r0, [r4]\n    ldr r0, [sp, #0x38]\n    cmp r0, #0\n    beq _02229FCC\n    cmp r5, #4\n    blo _02229FC2\n    mov r0, #3\n    and r0, r5\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldr r0, _0222A120 ; =_0223B620\n    lsl r1, r5, #1\n    ldrh r0, [r0, r1]\n    strh r0, [r4, #2]\n    b _02229FD0\n    ldrh r0, [r3, #0xc]\n    strh r0, [r4, #2]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0\n    add r1, sp, #8\n    add r2, r4, #0\n    add r5, r0, #0\n    ldrh r3, [r1, #2]\n    strh r3, [r2, #4]\n    ldrh r3, [r1, #2]\n    cmp r3, #0xda\n    bne _02229FE8\n    str r5, [sp, #4]\n    add r0, r0, #1\n    add r1, r1, #2\n    add r2, r2, #2\n    cmp r0, #4\n    blt _02229FDC\n    str r7, [r4, #0xc]\n    cmp r6, #0\n    bne _0222A026\n    bl LCRandom\n    add r5, r0, #0\n    bl LCRandom\n    lsl r0, r0, #0x10\n    add r6, r5, #0\n    orr r6, r0\n    add r0, r6, #0\n    bl GetNatureFromPersonality\n    add r1, sp, #8\n    ldrb r1, [r1, #0xb]\n    cmp r1, r0\n    bne _02229FF8\n    add r0, r7, #0\n    add r1, r6, #0\n    bl CalcShininessByOtIdAndPersonality\n    cmp r0, #1\n    beq _02229FF8\n    str r6, [r4, #0x10]\n    b _0222A028\n    str r6, [r4, #0x10]\n    add r0, sp, #0x20\n    ldrb r1, [r0, #0x10]\n    ldr r2, [r4, #0x14]\n    mov r0, #0x1f\n    bic r2, r0\n    mov r0, #0x1f\n    and r0, r1\n    orr r2, r0\n    ldr r0, _0222A124 ; =0xFFFFFC1F\n    mov r7, #0\n    and r2, r0\n    lsl r0, r1, #0x1b\n    lsr r1, r0, #0x16\n    orr r2, r1\n    ldr r1, _0222A128 ; =0xFFFF83FF\n    add r5, r7, #0\n    and r2, r1\n    lsr r1, r0, #0x11\n    orr r2, r1\n    ldr r1, _0222A12C ; =0xFFF07FFF\n    and r2, r1\n    lsr r1, r0, #0xc\n    orr r2, r1\n    ldr r1, _0222A130 ; =0xFE0FFFFF\n    and r2, r1\n    lsr r1, r0, #7\n    orr r2, r1\n    ldr r1, _0222A134 ; =0xC1FFFFFF\n    lsr r0, r0, #2\n    and r1, r2\n    orr r0, r1\n    str r0, [r4, #0x14]\n    add r0, r5, #0\n    bl MaskOfFlagNo\n    add r1, sp, #8\n    ldrb r1, [r1, #0xa]\n    tst r0, r1\n    beq _0222A078\n    add r7, r7, #1\n    add r5, r5, #1\n    cmp r5, #6\n    blt _0222A068\n    ldr r0, _0222A138 ; =0x000001FE\n    add r1, r7, #0\n    bl _s32_div_f\n    cmp r0, #0xff\n    ble _0222A08C\n    mov r0, #0xff\n    lsl r0, r0, #0x18\n    mov r5, #0\n    lsr r7, r0, #0x18\n    add r0, r5, #0\n    bl MaskOfFlagNo\n    add r1, sp, #8\n    ldrb r1, [r1, #0xa]\n    tst r0, r1\n    beq _0222A0A4\n    add r0, r4, r5\n    strb r7, [r0, #0x18]\n    add r5, r5, #1\n    cmp r5, #6\n    blt _0222A092\n    mov r0, #0\n    strb r0, [r4, #0x1e]\n    ldr r0, _0222A13C ; =gGameLanguage\n    mov r1, #0x19\n    ldrb r0, [r0]\n    strb r0, [r4, #0x1f]\n    ldrh r0, [r4]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x15\n    bl GetMonBaseStat\n    cmp r0, #0\n    beq _0222A0E8\n    ldr r2, [r4, #0x10]\n    mov r1, #1\n    tst r1, r2\n    beq _0222A0D4\n    add r1, r4, #0\n    add r1, #0x20\n    strb r0, [r1]\n    b _0222A0FA\n    ldrh r0, [r4]\n    mov r1, #0x18\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x15\n    bl GetMonBaseStat\n    add r1, r4, #0\n    add r1, #0x20\n    strb r0, [r1]\n    b _0222A0FA\n    ldrh r0, [r4]\n    mov r1, #0x18\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x15\n    bl GetMonBaseStat\n    add r1, r4, #0\n    add r1, #0x20\n    strb r0, [r1]\n    add r1, r4, #0\n    ldr r0, [sp, #4]\n    add r1, #0x21\n    strb r0, [r1]\n    ldrh r0, [r4]\n    add r4, #0x22\n    ldr r1, [sp, #0x3c]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x15\n    add r2, r4, #0\n    bl GetSpeciesNameIntoArray\n    add r0, r6, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222A118: .word 0xFFFFF800\n    _0222A11C: .word 0xFFFF07FF\n    _0222A120: .word _0223B620\n    _0222A124: .word 0xFFFFFC1F\n    _0222A128: .word 0xFFFF83FF\n    _0222A12C: .word 0xFFF07FFF\n    _0222A130: .word 0xFE0FFFFF\n    _0222A134: .word 0xC1FFFFFF\n    _0222A138: .word 0x000001FE\n    _0222A13C: .word gGameLanguage"
    );
    #endif
}

void ov80_0222A140(void) {
    /* Original at 0x0222A140 */
    /* Requires manual decompilation - 202 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    add r4, r2, #0\n    bl ZeroMonData\n    cmp r4, #0x78\n    bne _0222A158\n    mov r4, #0x32\n    b _0222A15E\n    cmp r4, #0x79\n    bne _0222A15E\n    mov r4, #0x64\n    ldr r1, [r6, #0x14]\n    ldr r0, _0222A308 ; =0x3FFFFFFF\n    add r2, r4, #0\n    and r0, r1\n    str r0, [sp, #0x1c]\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r6, #0x10]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldrh r1, [r6]\n    ldr r3, [sp, #0x1c]\n    add r0, r5, #0\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x15\n    bl CreateMon\n    add r0, r5, #0\n    mov r1, #0xaf\n    add r2, sp, #0x1c\n    bl SetMonData\n    add r0, r5, #0\n    bl CalcMonLevelAndStats\n    ldrh r0, [r6]\n    add r2, sp, #0x14\n    add r2, #1\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x1b\n    add r0, sp, #0x14\n    strb r1, [r0, #1]\n    add r0, r5, #0\n    mov r1, #0x70\n    bl SetMonData\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r6, #2\n    bl SetMonData\n    mov r4, #0\n    str r6, [sp, #0x10]\n    add r7, r4, #0\n    ldr r0, [sp, #0x10]\n    add r2, sp, #0x14\n    ldrh r1, [r0, #4]\n    add r0, sp, #0x14\n    add r2, #2\n    strh r1, [r0, #2]\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x36\n    bl SetMonData\n    ldrb r0, [r6, #0x1e]\n    add r2, sp, #0x14\n    add r2, #1\n    add r1, r0, #0\n    asr r1, r7\n    mov r0, #3\n    and r1, r0\n    add r0, sp, #0x14\n    strb r1, [r0, #1]\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x3e\n    bl SetMonData\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x42\n    mov r2, #0\n    bl GetMonData\n    add r1, sp, #0x14\n    strb r0, [r1]\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x3a\n    add r2, sp, #0x14\n    bl SetMonData\n    ldr r0, [sp, #0x10]\n    add r4, r4, #1\n    add r0, r0, #2\n    add r7, r7, #2\n    str r0, [sp, #0x10]\n    cmp r4, #4\n    blt _0222A1BC\n    ldr r0, [r6, #0xc]\n    mov r1, #7\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    add r2, sp, #0x18\n    bl SetMonData\n    add r2, sp, #0x14\n    ldrb r1, [r6, #0x18]\n    add r0, sp, #0x14\n    add r2, #1\n    strb r1, [r0, #1]\n    add r0, r5, #0\n    mov r1, #0xd\n    bl SetMonData\n    add r2, sp, #0x14\n    ldrb r1, [r6, #0x19]\n    add r0, sp, #0x14\n    add r2, #1\n    strb r1, [r0, #1]\n    add r0, r5, #0\n    mov r1, #0xe\n    bl SetMonData\n    add r2, sp, #0x14\n    ldrb r1, [r6, #0x1a]\n    add r0, sp, #0x14\n    add r2, #1\n    strb r1, [r0, #1]\n    add r0, r5, #0\n    mov r1, #0xf\n    bl SetMonData\n    add r2, sp, #0x14\n    ldrb r1, [r6, #0x1b]\n    add r0, sp, #0x14\n    add r2, #1\n    strb r1, [r0, #1]\n    add r0, r5, #0\n    mov r1, #0x10\n    bl SetMonData\n    add r2, sp, #0x14\n    ldrb r1, [r6, #0x1c]\n    add r0, sp, #0x14\n    add r2, #1\n    strb r1, [r0, #1]\n    add r0, r5, #0\n    mov r1, #0x11\n    bl SetMonData\n    add r2, sp, #0x14\n    ldrb r1, [r6, #0x1d]\n    add r0, sp, #0x14\n    add r2, #1\n    strb r1, [r0, #1]\n    add r0, r5, #0\n    mov r1, #0x12\n    bl SetMonData\n    add r2, r6, #0\n    add r0, r5, #0\n    mov r1, #0xa\n    add r2, #0x20\n    bl SetMonData\n    add r2, r6, #0\n    add r0, r5, #0\n    mov r1, #9\n    add r2, #0x21\n    bl SetMonData\n    ldr r0, [r6, #0x14]\n    lsl r0, r0, #1\n    lsr r0, r0, #0x1f\n    beq _0222A2E4\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xed\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    ldrh r1, [r6]\n    add r4, r0, #0\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x15\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #0x77\n    add r2, r7, #0\n    bl SetMonData\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r4, #0\n    bl DestroyMsgData\n    b _0222A2F0\n    add r2, r6, #0\n    add r0, r5, #0\n    mov r1, #0x75\n    add r2, #0x22\n    bl SetMonData\n    add r6, #0x1f\n    add r0, r5, #0\n    mov r1, #0xc\n    add r2, r6, #0\n    bl SetMonData\n    add r0, r5, #0\n    bl CalcMonLevelAndStats\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222A308: .word 0x3FFFFFFF"
    );
    #endif
}

void ov80_0222A30C(void) {
    /* Original at 0x0222A30C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0222A32C ; =ov80_0223B628\n    mov r2, #0\n    ldrh r1, [r3]\n    cmp r0, r1\n    bne _0222A31E\n    ldr r0, _0222A330 ; =ov80_0223B62A\n    lsl r1, r2, #2\n    ldrh r0, [r0, r1]\n    bx lr\n    add r2, r2, #1\n    add r3, r3, #4\n    cmp r2, #0x3f\n    blo _0222A310\n    mov r0, #3\n    bx lr\n    nop\n    _0222A32C: .word ov80_0223B628\n    _0222A330: .word ov80_0223B62A"
    );
    #endif
}

void ov80_0222A334(void) {
    /* Original at 0x0222A334 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    bl Save_PlayerData_GetProfile\n    add r6, r0, #0\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl Save_PlayerData_GetProfile\n    mov r3, #0\n    add r1, r0, #0\n    str r3, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #4\n    bl sub_0207217C\n    ldr r0, _0222A3B8 ; =0x00000113\n    bl MapHeader_GetMapSec\n    add r3, r0, #0\n    mov r0, #0xb\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0\n    bl MonSetTrainerMemo\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xc1\n    mov r3, #0xb\n    bl NewMsgDataFromNarc\n    mov r1, #0\n    add r5, r0, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    add r0, r4, #0\n    mov r1, #0x91\n    add r2, r6, #0\n    bl SetMonData\n    add r0, r4, #0\n    mov r1, #7\n    add r2, sp, #8\n    bl SetMonData\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, #0\n    bl DestroyMsgData\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0222A3B8: .word 0x00000113"
    );
    #endif
}

void ov80_0222A3BC(void) {
    ov80_0222A334(r2);
    Party_AddMon(r5, r4);
}

void ov80_0222A3D4(void) {
    /* Original at 0x0222A3D4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl Sprite_GetAnimationNumber\n    cmp r4, r0\n    beq _0222A3FC\n    add r0, r5, #0\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    add r0, r5, #0\n    add r1, r4, #0\n    bl Sprite_SetAnimCtrlSeq\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_0222A400(void) {
    /* Original at 0x0222A400 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    lsl r1, r1, #0xc\n    add r4, r2, #0\n    str r1, [sp]\n    lsl r1, r4, #0xc\n    str r1, [sp, #4]\n    mov r1, #0\n    add r5, r0, #0\n    str r1, [sp, #8]\n    cmp r3, #1\n    bne _0222A42E\n    bl Sprite_GetAnimationFrame\n    cmp r0, #0\n    bne _0222A428\n    sub r0, r4, #3\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    b _0222A42E\n    add r0, r4, #1\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov80_0222A43C(void) {
    /* Original at 0x0222A43C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r2, #0x30\n    bl CalculateHpBarColor\n    cmp r0, #4\n    bhi _0222A46E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222A454: ; jump table\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #3\n    pop {r3, pc}\n    mov r0, #4\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}"
    );
    #endif
}

void ov80_0222A474(void) {
    ov80_02229F04();
    Heap_Free();
}

void ov80_0222A480(void) {
    /* Original at 0x0222A480 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    lsl r0, r3, #2\n    ldr r1, [r4]\n    add r0, r5, r0\n    str r1, [r0, #0x18]\n    mov r0, #0x34\n    add r6, r3, #0\n    mul r6, r0\n    add r0, r5, r6\n    ldrh r1, [r4, #4]\n    add r0, #0x29\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0x3c\n    add r1, r4, #0\n    add r0, r0, r6\n    add r1, #8\n    bl CopyU16StringArray\n    add r0, r5, r6\n    ldrh r1, [r4, #0x20]\n    add r0, #0x4c\n    strh r1, [r0]\n    add r0, r5, r6\n    ldrh r1, [r4, #0x22]\n    add r0, #0x4e\n    strh r1, [r0]\n    add r0, r5, r6\n    ldrh r1, [r4, #0x24]\n    add r0, #0x50\n    strh r1, [r0]\n    add r0, r5, r6\n    ldrh r1, [r4, #0x26]\n    add r0, #0x52\n    strh r1, [r0]\n    add r0, r5, r6\n    ldrh r1, [r4, #0x28]\n    add r0, #0x54\n    strh r1, [r0]\n    add r0, r5, r6\n    ldrh r1, [r4, #0x2a]\n    add r0, #0x56\n    strh r1, [r0]\n    add r0, r5, r6\n    ldrh r1, [r4, #0x2c]\n    add r0, #0x58\n    strh r1, [r0]\n    add r0, r5, r6\n    ldrh r1, [r4, #0x2e]\n    add r0, #0x5a\n    strh r1, [r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_0222A4EC(void) {
    /* Original at 0x0222A4EC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r7, r0, #0\n    str r1, [sp, #0x14]\n    add r5, r2, #0\n    add r4, r3, #0\n    bl LCRandom\n    add r6, r0, #0\n    bl LCRandom\n    lsl r0, r0, #0x10\n    add r2, r6, #0\n    orr r2, r0\n    lsl r0, r5, #0x18\n    str r4, [sp]\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x34]\n    ldr r3, [sp, #0x30]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x38]\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    add r0, r7, #0\n    bl ov80_02229F6C\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222A52C(void) {
    /* Original at 0x0222A52C */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x30]\n    add r7, r1, #0\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x34]\n    str r2, [sp, #0x10]\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x38]\n    str r3, [sp, #0x14]\n    str r0, [sp, #0x38]\n    ldr r0, [sp, #0x3c]\n    mov r4, #0\n    str r0, [sp, #0x3c]\n    ldr r0, [sp, #0x34]\n    cmp r0, #0\n    ble _0222A5A0\n    ldr r5, [sp, #0x30]\n    add r6, r3, #0\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    bne _0222A55E\n    mov r0, #0\n    b _0222A560\n    ldrb r0, [r0, r4]\n    lsl r0, r0, #0x18\n    lsr r3, r0, #0x18\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    bne _0222A56E\n    mov r0, #0\n    b _0222A570\n    ldr r0, [r6]\n    str r0, [sp]\n    ldr r0, [sp, #0x38]\n    add r2, r4, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x3c]\n    str r0, [sp, #8]\n    ldrh r1, [r7]\n    ldr r0, [sp, #0xc]\n    bl ov80_0222A4EC\n    ldr r1, [sp, #0x30]\n    cmp r1, #0\n    beq _0222A58C\n    str r0, [r5]\n    ldr r0, [sp, #0xc]\n    add r4, r4, #1\n    add r0, #0x38\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x34]\n    add r6, r6, #4\n    add r7, r7, #2\n    add r5, r5, #4\n    cmp r4, r0\n    blt _0222A554\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222A5A4(void) {
    /* Original at 0x0222A5A4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0x64\n    bhs _0222A5AC\n    mov r0, #3\n    bx lr\n    cmp r0, #0x78\n    bhs _0222A5B4\n    mov r0, #6\n    bx lr\n    cmp r0, #0x8c\n    bhs _0222A5BC\n    mov r0, #9\n    bx lr\n    cmp r0, #0xa0\n    bhs _0222A5C4\n    mov r0, #0xc\n    bx lr\n    cmp r0, #0xb4\n    bhs _0222A5CC\n    mov r0, #0xf\n    bx lr\n    cmp r0, #0xc8\n    bhs _0222A5D4\n    mov r0, #0x12\n    bx lr\n    cmp r0, #0xdc\n    bhs _0222A5DC\n    mov r0, #0x15\n    bx lr\n    mov r0, #0x1f\n    bx lr"
    );
    #endif
}

void ov80_0222A5E0(void) {
    /* Original at 0x0222A5E0 */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x7c\n    str r0, [sp]\n    ldr r0, [sp, #0x90]\n    add r7, r3, #0\n    str r1, [sp, #4]\n    str r2, [sp, #8]\n    str r0, [sp, #0x90]\n    cmp r0, #6\n    ble _0222A5F8\n    bl GF_AssertFail\n    ldr r0, [sp, #0x90]\n    mov r4, #0\n    str r4, [sp, #0x14]\n    cmp r0, #0\n    beq _0222A6A6\n    add r0, sp, #0x1c\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x94]\n    str r0, [sp, #0xc]\n    bl LCRandom\n    ldr r1, [sp]\n    ldrh r1, [r1, #2]\n    bl _s32_div_f\n    ldr r0, [sp]\n    lsl r1, r1, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #4]\n    mov r2, #0xcd\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x18]\n    bl ov80_02229EF4\n    mov r0, #0\n    cmp r4, #0\n    ble _0222A64E\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x10]\n    ldrh r2, [r2]\n    ldrh r3, [r3, #0xc]\n    add r1, sp, #0x1c\n    ldrh r5, [r1]\n    cmp r5, r2\n    beq _0222A64E\n    ldrh r5, [r1, #0xc]\n    cmp r5, r3\n    beq _0222A64E\n    add r0, r0, #1\n    add r1, #0x10\n    cmp r0, r4\n    blt _0222A63A\n    cmp r0, r4\n    bne _0222A6A0\n    ldr r0, [sp, #0x14]\n    cmp r0, #0x32\n    bge _0222A68C\n    mov r3, #0\n    cmp r7, #0\n    ble _0222A680\n    ldr r2, [sp, #0x10]\n    ldr r5, [sp, #0x10]\n    ldrh r2, [r2]\n    ldrh r6, [r5, #0xc]\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    ldrh r5, [r0]\n    cmp r2, r5\n    beq _0222A680\n    ldrh r5, [r1]\n    cmp r6, r5\n    beq _0222A680\n    add r3, r3, #1\n    add r0, r0, #2\n    add r1, r1, #2\n    cmp r3, r7\n    blt _0222A66A\n    cmp r3, r7\n    beq _0222A68C\n    ldr r0, [sp, #0x14]\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    b _0222A6A0\n    ldr r1, [sp, #0x18]\n    ldr r0, [sp, #0xc]\n    add r4, r4, #1\n    strh r1, [r0]\n    ldr r0, [sp, #0x10]\n    add r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    add r0, r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x90]\n    cmp r4, r0\n    bne _0222A60A\n    ldr r0, [sp, #0x14]\n    cmp r0, #0x32\n    blt _0222A6B2\n    add sp, #0x7c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x7c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222A6B8(void) {
    /* Original at 0x0222A6B8 */
    /* Requires manual decompilation - 127 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x74\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x8c]\n    str r2, [sp, #0x14]\n    str r3, [sp, #0x18]\n    str r0, [sp, #0x8c]\n    add r0, sp, #0x44\n    mov r2, #0xb\n    mov r3, #0xcc\n    add r5, r1, #0\n    bl ov80_02229F04\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x10]\n    mov r4, #0\n    cmp r0, #0\n    ble _0222A6EE\n    add r0, r5, #0\n    bl ov80_0222A5A4\n    ldr r1, [sp, #0x8c]\n    strb r0, [r1, r4]\n    ldr r0, [sp, #0x10]\n    add r4, r4, #1\n    cmp r4, r0\n    blt _0222A6DC\n    add r0, sp, #0x78\n    ldrb r0, [r0, #0x1c]\n    add r1, sp, #0x2c\n    cmp r0, #0\n    bne _0222A710\n    ldr r0, [sp, #0x10]\n    add r2, sp, #0x24\n    str r0, [sp]\n    ldr r0, [sp, #0x18]\n    mov r3, #0\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x20]\n    bl ov80_0222A5E0\n    b _0222A7A6\n    ldr r0, [sp, #0x10]\n    add r2, sp, #0x24\n    lsr r0, r0, #1\n    str r0, [sp, #0x1c]\n    str r0, [sp]\n    ldr r0, [sp, #0x18]\n    mov r3, #0\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x20]\n    bl ov80_0222A5E0\n    ldr r0, [sp, #0x1c]\n    mov r7, #0\n    cmp r0, #0\n    ble _0222A75C\n    ldr r6, [sp, #0x18]\n    add r4, sp, #0x2c\n    add r5, sp, #0x24\n    ldrh r1, [r6]\n    add r0, sp, #0x34\n    mov r2, #0xcd\n    bl ov80_02229EF4\n    add r0, sp, #0x24\n    ldrh r0, [r0, #0x10]\n    add r7, r7, #1\n    add r6, r6, #2\n    strh r0, [r4]\n    add r0, sp, #0x24\n    ldrh r0, [r0, #0x1c]\n    add r4, r4, #2\n    strh r0, [r5]\n    ldr r0, [sp, #0x1c]\n    add r5, r5, #2\n    cmp r7, r0\n    blt _0222A738\n    ldr r0, [sp, #0x20]\n    bl Heap_Free\n    ldr r1, [sp, #0x14]\n    add r0, sp, #0x44\n    mov r2, #0xb\n    mov r3, #0xcc\n    bl ov80_02229F04\n    ldr r1, [sp, #0x10]\n    str r0, [sp, #0x20]\n    lsr r6, r1, #1\n    ldr r1, [sp, #0x18]\n    lsl r2, r6, #1\n    add r1, r1, r2\n    str r6, [sp]\n    str r1, [sp, #4]\n    mov r1, #0xb\n    str r1, [sp, #8]\n    add r1, sp, #0x2c\n    add r2, sp, #0x24\n    add r3, r6, #0\n    bl ov80_0222A5E0\n    mov r5, #0\n    cmp r6, #0\n    ble _0222A7A6\n    ldr r0, [sp, #0x8c]\n    add r4, r0, r6\n    ldr r0, [sp, #0x14]\n    bl ov80_0222A5A4\n    strb r0, [r4]\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r5, r6\n    blt _0222A796\n    ldr r0, [sp, #0x20]\n    bl Heap_Free\n    ldr r0, [sp, #0x90]\n    ldr r1, [sp, #0x18]\n    str r0, [sp]\n    ldr r0, [sp, #0x10]\n    ldr r2, [sp, #0x8c]\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    mov r0, #0xcd\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x88]\n    mov r3, #0\n    bl ov80_0222A52C\n    add sp, #0x74\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222A7CC(void) {
    /* Original at 0x0222A7CC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_0203769C\n    mov r1, #1\n    eor r0, r1\n    bl sub_02034818\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl BufferPlayersName\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_0222A7EC(void) {
    /* Original at 0x0222A7EC */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl PlayerProfile_GetTrainerGender\n    add r4, r0, #0\n    add r0, r5, #0\n    bl PlayerProfile_GetVersion\n    cmp r0, #0\n    bgt _0222A804\n    beq _0222A822\n    b _0222A816\n    cmp r0, #0xc\n    bgt _0222A816\n    cmp r0, #7\n    blt _0222A816\n    beq _0222A816\n    cmp r0, #8\n    beq _0222A816\n    cmp r0, #0xc\n    beq _0222A82E\n    cmp r4, #0\n    bne _0222A81E\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #0x61\n    pop {r3, r4, r5, pc}\n    cmp r4, #0\n    bne _0222A82A\n    mov r0, #0xee\n    pop {r3, r4, r5, pc}\n    mov r0, #0xef\n    pop {r3, r4, r5, pc}\n    cmp r4, #0\n    bne _0222A836\n    ldr r0, _0222A83C ; =0x00000127\n    pop {r3, r4, r5, pc}\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    pop {r3, r4, r5, pc}\n    _0222A83C: .word 0x00000127"
    );
    #endif
}

void ov80_0222A840(void) {
    Save_WiFiHistory_Get();
    sub_02039F68();
}
