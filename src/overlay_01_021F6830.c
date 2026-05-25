/* Decompiled from asm/overlay_01_021F6830.s */
#include "global.h"

void ov01_021F6830(void) {
    ov35_02259D80();
}

void ov01_021F6840(void) {
    /* Original at 0x021F6840 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F6860 ; =FS_OVERLAY_ID(OVY_27)\n    mov r1, #2\n    bl HandleLoadOverlay\n    add r1, r4, #0\n    ldr r0, [r4, #8]\n    add r1, #0xd0\n    add r2, r4, #0\n    mov r3, #0\n    bl ov30_0225D520\n    add r4, #0xd4\n    str r0, [r4]\n    pop {r4, pc}\n    _021F6860: .word FS_OVERLAY_ID(OVY_27)"
    );
    #endif
}

void ov01_021F6864(void) {
    /* Original at 0x021F6864 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    ldr r0, [r1, #8]\n    add r1, #0xd4\n    ldr r3, _021F6870 ; =ov30_0225D64C\n    ldr r1, [r1]\n    bx r3\n    _021F6870: .word ov30_0225D64C"
    );
    #endif
}

void ov01_021F6874(void) {
    /* Original at 0x021F6874 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0, #8]\n    bl ov30_0225D6FC\n    cmp r0, #0\n    beq _021F688A\n    ldr r0, _021F6890 ; =FS_OVERLAY_ID(OVY_27)\n    bl UnloadOverlayByID\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _021F6890: .word FS_OVERLAY_ID(OVY_27)"
    );
    #endif
}

void ov01_021F6894(void) {
    /* Original at 0x021F6894 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F68B4 ; =FS_OVERLAY_ID(OVY_27)\n    mov r1, #2\n    bl HandleLoadOverlay\n    add r1, r4, #0\n    ldr r0, [r4, #8]\n    add r1, #0xd0\n    add r2, r4, #0\n    bl ov01_021F68DC\n    add r4, #0xd8\n    str r0, [r4]\n    pop {r4, pc}\n    nop\n    _021F68B4: .word FS_OVERLAY_ID(OVY_27)"
    );
    #endif
}

void ov01_021F68B8(void) {
    ov01_021F690C();
}

void ov01_021F68C0(void) {
    /* Original at 0x021F68C0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov01_021F6930\n    cmp r0, #0\n    beq _021F68D4\n    ldr r0, _021F68D8 ; =FS_OVERLAY_ID(OVY_27)\n    bl UnloadOverlayByID\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _021F68D8: .word FS_OVERLAY_ID(OVY_27)"
    );
    #endif
}

void ov01_021F68DC(void) {
    /* Original at 0x021F68DC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, _021F6908 ; =ov01_021F69C0\n    add r5, r2, #0\n    mov r1, #0x10\n    mov r2, #0xa\n    mov r3, #4\n    bl CreateSysTaskAndEnvironment\n    add r4, r0, #0\n    bl SysTask_GetData\n    ldr r1, [r5, #0x1c]\n    strb r1, [r0]\n    mov r1, #0\n    strb r1, [r0, #1]\n    str r1, [r0, #4]\n    strb r1, [r0, #2]\n    str r5, [r0, #8]\n    str r1, [r0, #0xc]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021F6908: .word ov01_021F69C0"
    );
    #endif
}

void ov01_021F690C(void) {
    /* Original at 0x021F690C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    bl SysTask_GetData\n    add r2, r0, #0\n    ldr r1, [r2, #4]\n    ldrb r2, [r2]\n    ldr r0, [r4, #8]\n    lsl r3, r2, #4\n    ldr r2, _021F692C ; =ov01_02206C60 + 4\n    ldr r2, [r2, r3]\n    blx r2\n    pop {r4, pc}\n    nop\n    _021F692C: .word ov01_02206C60 + 4"
    );
    #endif
}

void ov01_021F6930(void) {
    /* Original at 0x021F6930 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    bl SysTask_GetData\n    add r4, r0, #0\n    ldrb r1, [r4]\n    ldr r0, [r5, #8]\n    lsl r2, r1, #4\n    ldr r1, _021F6964 ; =ov01_02206C60 + 8\n    ldr r1, [r1, r2]\n    blx r1\n    cmp r0, #1\n    bne _021F6960\n    add r0, r4, #0\n    bl ov01_021F69A4\n    add r5, #0xd8\n    ldr r0, [r5]\n    bl DestroySysTaskAndEnvironment\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _021F6964: .word ov01_02206C60 + 8"
    );
    #endif
}

void ov01_021F6968(void) {
    /* Original at 0x021F6968 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    ldrb r0, [r4]\n    lsl r1, r0, #4\n    ldr r0, _021F699C ; =ov01_02206C60 + 12\n    ldr r0, [r0, r1]\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _021F6982\n    mov r1, #2\n    bl HandleLoadOverlay\n    ldrb r5, [r4]\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    lsl r6, r5, #4\n    ldr r5, _021F69A0 ; =ov01_02206C60\n    add r1, r2, #0\n    ldr r0, [r2, #8]\n    ldr r5, [r5, r6]\n    add r1, #0xd0\n    blx r5\n    str r0, [r4, #4]\n    pop {r4, r5, r6, pc}\n    nop\n    _021F699C: .word ov01_02206C60 + 12\n    _021F69A0: .word ov01_02206C60"
    );
    #endif
}

void ov01_021F69A4(void) {
    UnloadOverlayByID(0);
}

void ov01_021F69C0(void) {
    /* Original at 0x021F69C0 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldrb r0, [r4, #1]\n    cmp r0, #7\n    bhi _021F6A8E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F69D8: ; jump table\n    add r0, r4, #0\n    bl ov01_021F6968\n    mov r0, #1\n    add sp, #0xc\n    strb r0, [r4, #1]\n    pop {r3, r4, pc}\n    mov r0, #2\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    add r2, r1, #0\n    add r3, r1, #0\n    str r0, [sp, #8]\n    bl BeginNormalPaletteFade\n    mov r0, #3\n    add sp, #0xc\n    strb r0, [r4, #1]\n    pop {r3, r4, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021F6A8E\n    mov r0, #4\n    add sp, #0xc\n    strb r0, [r4, #1]\n    pop {r3, r4, pc}\n    ldrb r2, [r4]\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #4]\n    lsl r3, r2, #4\n    ldr r2, _021F6A94 ; =ov01_02206C60 + 4\n    ldr r0, [r0, #8]\n    ldr r2, [r2, r3]\n    blx r2\n    mov r0, #5\n    add sp, #0xc\n    strb r0, [r4, #1]\n    pop {r3, r4, pc}\n    ldrb r1, [r4]\n    ldr r0, [r4, #8]\n    lsl r2, r1, #4\n    ldr r1, _021F6A98 ; =ov01_02206C60 + 8\n    ldr r0, [r0, #8]\n    ldr r1, [r1, r2]\n    blx r1\n    cmp r0, #1\n    bne _021F6A8E\n    add r0, r4, #0\n    bl ov01_021F69A4\n    ldrb r0, [r4, #2]\n    add sp, #0xc\n    strb r0, [r4]\n    mov r0, #6\n    strb r0, [r4, #1]\n    pop {r3, r4, pc}\n    add r0, r4, #0\n    bl ov01_021F6968\n    mov r0, #2\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #4\n    add r2, r1, #0\n    mov r3, #0\n    str r0, [sp, #8]\n    bl BeginNormalPaletteFade\n    mov r0, #7\n    add sp, #0xc\n    strb r0, [r4, #1]\n    pop {r3, r4, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021F6A8E\n    mov r0, #1\n    strb r0, [r4, #1]\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _021F6A94: .word ov01_02206C60 + 4\n    _021F6A98: .word ov01_02206C60 + 8"
    );
    #endif
}

void ov01_021F6A9C(void) {
    SysTask_GetData(2);
}

void ov01_021F6ABC(void) {
    /* Original at 0x021F6ABC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    add r6, r1, #0\n    add r7, r2, #0\n    str r3, [sp]\n    bl SysTask_GetData\n    ldr r0, [r0, #4]\n    bl SysTask_GetData\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov01_021F6B00\n    cmp r6, r0\n    beq _021F6AE4\n    bl GF_AssertFail\n    ldr r0, [sp]\n    str r7, [r4]\n    str r0, [r4, #4]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F6AEC(void) {
    /* Original at 0x021F6AEC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r0, #0xd8\n    ldr r0, [r0]\n    bl SysTask_GetData\n    ldr r0, [r0, #4]\n    bl SysTask_GetData\n    ldr r0, [r0]\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021F6B00(void) {
    SysTask_GetData();
}

void ov01_021F6B10(void) {
    SysTask_GetData();
}

void ov01_021F6B20(void) {
    /* Original at 0x021F6B20 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r0, #0xd8\n    ldr r0, [r0]\n    bl SysTask_GetData\n    ldr r0, [r0, #4]\n    bl SysTask_GetData\n    add r0, #0xc\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021F6B34(void) {
    /* Original at 0x021F6B34 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r0, #0xd8\n    ldr r0, [r0]\n    add r5, r1, #0\n    add r4, r2, #0\n    bl SysTask_GetData\n    ldr r0, [r0, #4]\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov27_0225C41C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F6B50(void) {
    /* Original at 0x021F6B50 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r0, #0xd8\n    ldr r0, [r0]\n    bl SysTask_GetData\n    ldr r0, [r0, #4]\n    bl ov27_0225A2CC\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021F6B64(void) {
    /* Original at 0x021F6B64 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r0, #0xd8\n    ldr r0, [r0]\n    add r5, r1, #0\n    bl SysTask_GetData\n    add r4, r0, #0\n    cmp r5, #0\n    ble _021F6B7A\n    cmp r5, #3\n    blt _021F6B7E\n    bl GF_AssertFail\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    bl ov27_0225A2EC\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F6B88(void) {
    ov34_0225D7A8();
}

void ov01_021F6BA0(void) {
    ov34_0225D87C();
}

void ov01_021F6BAC(void) {
    /* Original at 0x021F6BAC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #1\n    bx lr"
    );
    #endif
}

void ov01_021F6BB0(void) {
    /* Original at 0x021F6BB0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021F6BCC ; =ov01_02206C08\n    mov r2, #0\n    ldrh r1, [r3]\n    cmp r0, r1\n    bne _021F6BBE\n    mov r0, #1\n    bx lr\n    add r2, r2, #1\n    add r3, r3, #2\n    cmp r2, #0x2b\n    blo _021F6BB4\n    mov r0, #0\n    bx lr\n    nop\n    _021F6BCC: .word ov01_02206C08"
    );
    #endif
}

void ov01_021F6BD0(void) {
    /* Original at 0x021F6BD0 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021F6C18 ; =0x00001B58\n    cmp r0, r1\n    blt _021F6BE0\n    ldr r1, _021F6C1C ; =0x0000225F\n    cmp r0, r1\n    bgt _021F6BE0\n    mov r0, #1\n    bx lr\n    mov r1, #0xaf\n    lsl r1, r1, #4\n    cmp r0, r1\n    blt _021F6BF2\n    add r1, #0xc7\n    cmp r0, r1\n    bgt _021F6BF2\n    mov r0, #1\n    bx lr\n    ldr r1, _021F6C20 ; =0x00002710\n    cmp r0, r1\n    blt _021F6C02\n    add r1, #0x63\n    cmp r0, r1\n    bgt _021F6C02\n    mov r0, #1\n    bx lr\n    ldr r1, _021F6C24 ; =0x00002774\n    cmp r0, r1\n    blt _021F6C12\n    add r1, #0x31\n    cmp r0, r1\n    bgt _021F6C12\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _021F6C18: .word 0x00001B58\n    _021F6C1C: .word 0x0000225F\n    _021F6C20: .word 0x00002710\n    _021F6C24: .word 0x00002774"
    );
    #endif
}

void ov01_021F6C28(void) {
    /* Original at 0x021F6C28 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x30]\n    bl ov01_021F6B00\n    add r4, r0, #0\n    ldr r0, [r5, #0x30]\n    bl ov01_021F6B10\n    cmp r4, #6\n    bne _021F6C46\n    cmp r0, #1\n    bne _021F6C46\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F6C4C(void) {
    /* Original at 0x021F6C4C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x30]\n    bl ov01_021F6B00\n    add r4, r0, #0\n    ldr r0, [r5, #0x30]\n    bl ov01_021F6B10\n    cmp r4, #3\n    bne _021F6C78\n    cmp r0, #1\n    bne _021F6C78\n    ldr r0, [r5, #0x30]\n    mov r1, #3\n    add r5, #0x90\n    add r2, r1, #0\n    add r3, r5, #0\n    bl ov01_021F6ABC\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F6C7C(void) {
    /* Original at 0x021F6C7C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x30]\n    bl ov01_021F6B00\n    add r4, r0, #0\n    ldr r0, [r5, #0x30]\n    bl ov01_021F6AEC\n    cmp r4, #3\n    bne _021F6C9A\n    cmp r0, #6\n    bne _021F6C9A\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F6CA0(void) {
    /* Original at 0x021F6CA0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x98\n    ldrh r1, [r1]\n    cmp r1, #0\n    beq _021F6CB8\n    cmp r1, #1\n    beq _021F6CD0\n    cmp r1, #2\n    beq _021F6CE6\n    b _021F6CF6\n    ldr r0, [r4, #0x30]\n    mov r1, #3\n    mov r2, #0\n    bl ov01_021F6A9C\n    add r0, r4, #0\n    add r0, #0x98\n    ldrh r0, [r0]\n    add r4, #0x98\n    add r0, r0, #1\n    strh r0, [r4]\n    b _021F6CF6\n    bl ov01_021F6C4C\n    cmp r0, #1\n    bne _021F6CF6\n    add r0, r4, #0\n    add r0, #0x98\n    ldrh r0, [r0]\n    add r4, #0x98\n    add r0, r0, #1\n    strh r0, [r4]\n    b _021F6CF6\n    bl ov01_021F6C7C\n    cmp r0, #1\n    bne _021F6CF6\n    mov r0, #0\n    add r4, #0x98\n    strh r0, [r4]\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}
