/* Decompiled from asm/overlay_01_021EFB38.s */
#include "global.h"

void ov01_021EFB38(void) {
    /* Original at 0x021EFB38 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _021EFB5C ; =ov01_02209B64\n    ldr r2, [r2, #4]\n    lsl r3, r2, #2\n    ldr r2, _021EFB60 ; =ov01_022068C4\n    ldr r2, [r2, r3]\n    blx r2\n    ldr r0, _021EFB5C ; =ov01_02209B64\n    ldr r1, [r0, #8]\n    add r1, r1, #1\n    str r1, [r0, #8]\n    bl OS_GetTick\n    mov r0, #0\n    add r1, r0, #0\n    bl OS_SetTick\n    pop {r3, pc}\n    _021EFB5C: .word ov01_02209B64\n    _021EFB60: .word ov01_022068C4"
    );
    #endif
}

void ov01_021EFB64(void) {
    /* Original at 0x021EFB64 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0xc\n    blt _021EFB78\n    cmp r0, #0x21\n    bgt _021EFB78\n    ldr r0, _021EFBE8 ; =FS_OVERLAY_ID(OVY_115)\n    mov r1, #2\n    bl HandleLoadOverlay\n    pop {r3, pc}\n    add r1, r0, #0\n    sub r1, #0x22\n    cmp r1, #2\n    bhi _021EFB8A\n    ldr r0, _021EFBEC ; =FS_OVERLAY_ID(OVY_116)\n    mov r1, #2\n    bl HandleLoadOverlay\n    pop {r3, pc}\n    cmp r0, #0x27\n    blt _021EFB9C\n    cmp r0, #0x2c\n    bgt _021EFB9C\n    ldr r0, _021EFBF0 ; =FS_OVERLAY_ID(OVY_117)\n    mov r1, #2\n    bl HandleLoadOverlay\n    pop {r3, pc}\n    cmp r0, #0x2d\n    bne _021EFBAA\n    ldr r0, _021EFBF4 ; =FS_OVERLAY_ID(OVY_118)\n    mov r1, #2\n    bl HandleLoadOverlay\n    pop {r3, pc}\n    cmp r0, #0\n    blt _021EFBBC\n    cmp r0, #5\n    bgt _021EFBBC\n    ldr r0, _021EFBF8 ; =FS_OVERLAY_ID(OVY_120)\n    mov r1, #2\n    bl HandleLoadOverlay\n    pop {r3, pc}\n    cmp r0, #6\n    blt _021EFBCE\n    cmp r0, #0xb\n    bgt _021EFBCE\n    ldr r0, _021EFBFC ; =FS_OVERLAY_ID(OVY_119)\n    mov r1, #2\n    bl HandleLoadOverlay\n    pop {r3, pc}\n    cmp r0, #0x2e\n    bne _021EFBDC\n    ldr r0, _021EFBF8 ; =FS_OVERLAY_ID(OVY_120)\n    mov r1, #2\n    bl HandleLoadOverlay\n    pop {r3, pc}\n    ldr r0, _021EFC00 ; =FS_OVERLAY_ID(OVY_114)\n    mov r1, #2\n    bl HandleLoadOverlay\n    pop {r3, pc}\n    nop\n    _021EFBE8: .word FS_OVERLAY_ID(OVY_115)\n    _021EFBEC: .word FS_OVERLAY_ID(OVY_116)\n    _021EFBF0: .word FS_OVERLAY_ID(OVY_117)\n    _021EFBF4: .word FS_OVERLAY_ID(OVY_118)\n    _021EFBF8: .word FS_OVERLAY_ID(OVY_120)\n    _021EFBFC: .word FS_OVERLAY_ID(OVY_119)\n    _021EFC00: .word FS_OVERLAY_ID(OVY_114)"
    );
    #endif
}

void ov01_021EFC04(void) {
    /* Original at 0x021EFC04 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0xc\n    blt _021EFC16\n    cmp r0, #0x21\n    bgt _021EFC16\n    ldr r0, _021EFC78 ; =FS_OVERLAY_ID(OVY_115)\n    bl UnloadOverlayByID\n    pop {r3, pc}\n    add r1, r0, #0\n    sub r1, #0x22\n    cmp r1, #2\n    bhi _021EFC26\n    ldr r0, _021EFC7C ; =FS_OVERLAY_ID(OVY_116)\n    bl UnloadOverlayByID\n    pop {r3, pc}\n    cmp r0, #0x27\n    blt _021EFC36\n    cmp r0, #0x2c\n    bgt _021EFC36\n    ldr r0, _021EFC80 ; =FS_OVERLAY_ID(OVY_117)\n    bl UnloadOverlayByID\n    pop {r3, pc}\n    cmp r0, #0x2d\n    bne _021EFC42\n    ldr r0, _021EFC84 ; =FS_OVERLAY_ID(OVY_118)\n    bl UnloadOverlayByID\n    pop {r3, pc}\n    cmp r0, #0\n    blt _021EFC52\n    cmp r0, #5\n    bgt _021EFC52\n    ldr r0, _021EFC88 ; =FS_OVERLAY_ID(OVY_120)\n    bl UnloadOverlayByID\n    pop {r3, pc}\n    cmp r0, #6\n    blt _021EFC62\n    cmp r0, #0xb\n    bgt _021EFC62\n    ldr r0, _021EFC8C ; =FS_OVERLAY_ID(OVY_119)\n    bl UnloadOverlayByID\n    pop {r3, pc}\n    cmp r0, #0x2e\n    bne _021EFC6E\n    ldr r0, _021EFC88 ; =FS_OVERLAY_ID(OVY_120)\n    bl UnloadOverlayByID\n    pop {r3, pc}\n    ldr r0, _021EFC90 ; =FS_OVERLAY_ID(OVY_114)\n    bl UnloadOverlayByID\n    pop {r3, pc}\n    nop\n    _021EFC78: .word FS_OVERLAY_ID(OVY_115)\n    _021EFC7C: .word FS_OVERLAY_ID(OVY_116)\n    _021EFC80: .word FS_OVERLAY_ID(OVY_117)\n    _021EFC84: .word FS_OVERLAY_ID(OVY_118)\n    _021EFC88: .word FS_OVERLAY_ID(OVY_120)\n    _021EFC8C: .word FS_OVERLAY_ID(OVY_119)\n    _021EFC90: .word FS_OVERLAY_ID(OVY_114)"
    );
    #endif
}

void ov01_021EFC94(void) {
    /* Original at 0x021EFC94 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    ldr r1, _021EFCD4 ; =ov01_02209B64\n    add r6, r2, #0\n    str r0, [r1, #4]\n    mov r0, #0\n    str r0, [r1, #8]\n    ldr r0, _021EFCD8 ; =ov01_021EFB38\n    mov r1, #0x24\n    mov r2, #5\n    mov r3, #4\n    bl CreateSysTaskAndEnvironment\n    bl SysTask_GetData\n    add r4, r0, #0\n    str r5, [r4, #0x10]\n    str r6, [r4, #0x14]\n    mov r0, #0x6d\n    mov r1, #4\n    bl NARC_New\n    str r0, [r4, #0x20]\n    ldr r1, [r4, #0x14]\n    cmp r1, #0\n    beq _021EFCCC\n    mov r0, #0\n    str r0, [r1]\n    mov r0, #0\n    str r0, [r4, #0x18]\n    pop {r4, r5, r6, pc}\n    nop\n    _021EFCD4: .word ov01_02209B64\n    _021EFCD8: .word ov01_021EFB38"
    );
    #endif
}

void ov01_021EFCDC(void) {
    /* Original at 0x021EFCDC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    add r4, r1, #0\n    bl NARC_Delete\n    ldr r1, [r5, #0xc]\n    mov r0, #4\n    bl Heap_FreeExplicit\n    add r0, r4, #0\n    bl DestroySysTaskAndEnvironment\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021EFCF8(void) {
    /* Original at 0x021EFCF8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    mov r0, #4\n    mov r1, #0x4c\n    str r2, [sp]\n    add r5, r3, #0\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x4c\n    add r4, r0, #0\n    bl memset\n    ldr r0, _021EFD38 ; =ov01_021EFD3C\n    add r1, r4, #0\n    mov r2, #5\n    bl SysTask_CreateOnMainQueue\n    str r5, [r4, #0x48]\n    cmp r5, #0\n    beq _021EFD28\n    mov r0, #0\n    str r0, [r5]\n    str r6, [r4, #0xc]\n    ldr r0, [sp]\n    str r7, [r4, #0x10]\n    str r0, [r4, #0x14]\n    ldr r0, [sp, #0x18]\n    str r0, [r4, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EFD38: .word ov01_021EFD3C"
    );
    #endif
}

void ov01_021EFD3C(void) {
    /* Original at 0x021EFD3C */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r1, #0\n    ldr r1, [r4]\n    cmp r1, #5\n    bhi _021EFE22\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021EFD54: ; jump table\n    ldr r0, [r4, #0xc]\n    cmp r0, #1\n    bne _021EFD7A\n    mov r0, #8\n    str r0, [sp]\n    add r0, r4, #0\n    ldr r2, [r4, #0x14]\n    add r0, #0x30\n    mov r1, #0\n    mov r3, #2\n    bl ov01_021EFFB0\n    b _021EFD90\n    cmp r0, #2\n    bne _021EFD90\n    mov r0, #8\n    str r0, [sp]\n    add r0, r4, #0\n    ldr r2, [r4, #0x14]\n    add r0, #0x30\n    mov r1, #0\n    mov r3, #1\n    bl ov01_021EFFB0\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021EFE22\n    mov r0, #3\n    str r0, [sp]\n    add r0, r4, #0\n    ldr r2, [r4, #0x10]\n    ldr r3, [r4, #0xc]\n    add r0, #0x18\n    mov r1, #0\n    bl ov01_021EFFB0\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021EFE22\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov01_021EFFBC\n    cmp r0, #0\n    beq _021EFE22\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021EFE22\n    mov r0, #3\n    str r0, [sp]\n    add r0, r4, #0\n    ldr r1, [r4, #0x10]\n    ldr r3, [r4, #0xc]\n    add r0, #0x18\n    mov r2, #0\n    bl ov01_021EFFB0\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021EFE22\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov01_021EFFBC\n    cmp r0, #0\n    beq _021EFE22\n    ldr r0, [r4, #8]\n    add r1, r0, #1\n    str r1, [r4, #8]\n    ldr r0, [r4, #4]\n    cmp r1, r0\n    bne _021EFDFE\n    mov r0, #5\n    str r0, [r4]\n    b _021EFE22\n    mov r0, #1\n    str r0, [r4]\n    b _021EFE22\n    mov r1, #0\n    str r1, [r4]\n    str r1, [r4, #8]\n    ldr r2, [r4, #0x48]\n    cmp r2, #0\n    beq _021EFE14\n    mov r1, #1\n    str r1, [r2]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #4\n    pop {r3, r4, pc}\n    add r4, #0x30\n    add r0, r4, #0\n    bl ov01_021EFFBC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021EFE30(void) {
    /* Original at 0x021EFE30 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x18]\n    bx lr"
    );
    #endif
}

void ov01_021EFE34(void) {
    /* Original at 0x021EFE34 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    str r1, [r0, #4]\n    sub r1, r2, r1\n    str r1, [r0, #8]\n    str r3, [r0, #0x10]\n    mov r1, #0\n    str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov01_021EFE44(void) {
    /* Original at 0x021EFE44 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    ldr r0, [r4, #0xc]\n    mul r0, r1\n    ldr r1, [r4, #0x10]\n    bl _s32_div_f\n    ldr r1, [r4, #4]\n    add r0, r0, r1\n    str r0, [r4]\n    ldr r0, [r4, #0xc]\n    ldr r1, [r4, #0x10]\n    add r0, r0, #1\n    cmp r0, r1\n    bgt _021EFE6A\n    str r0, [r4, #0xc]\n    mov r0, #0\n    pop {r4, pc}\n    str r1, [r4, #0xc]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EFE70(void) {
    /* Original at 0x021EFE70 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    str r1, [r0, #4]\n    sub r1, r2, r1\n    str r1, [r0, #8]\n    str r3, [r0, #0x10]\n    mov r1, #0\n    str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov01_021EFE80(void) {
    /* Original at 0x021EFE80 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r2, [r4, #0xc]\n    ldr r0, [r4, #8]\n    lsl r2, r2, #0xc\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    ldr r1, [r4, #0x10]\n    lsl r1, r1, #0xc\n    bl FX_Div\n    ldr r1, [r4, #4]\n    add r0, r0, r1\n    str r0, [r4]\n    ldr r0, [r4, #0xc]\n    ldr r1, [r4, #0x10]\n    add r0, r0, #1\n    cmp r0, r1\n    bgt _021EFEC0\n    str r0, [r4, #0xc]\n    mov r0, #0\n    pop {r4, pc}\n    str r1, [r4, #0xc]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EFEC8(void) {
    /* Original at 0x021EFEC8 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r4, [sp, #0x18]\n    add r5, r0, #0\n    add r7, r2, #0\n    add r0, r3, #0\n    add r6, r1, #0\n    lsl r2, r4, #0xc\n    str r3, [sp]\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    add r2, r0, #0\n    sub r0, r7, r6\n    mov r7, #2\n    mov r3, #0\n    lsl r7, r7, #0xa\n    add r2, r2, r7\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r1\n    sub r2, r0, r2\n    asr r1, r2, #0x1f\n    lsr r0, r2, #0x13\n    lsl r1, r1, #0xd\n    orr r1, r0\n    lsl r0, r2, #0xd\n    add r0, r0, r7\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    add r1, r4, #0\n    mul r1, r4\n    lsl r1, r1, #0xc\n    bl FX_Div\n    str r6, [r5]\n    ldr r1, [sp]\n    str r6, [r5, #4]\n    str r1, [r5, #8]\n    str r0, [r5, #0xc]\n    mov r0, #0\n    str r0, [r5, #0x10]\n    str r4, [r5, #0x14]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EFF28(void) {
    /* Original at 0x021EFF28 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r6, [r5, #0x10]\n    ldr r0, [r5, #8]\n    lsl r2, r6, #0xc\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsr r4, r2, #0xc\n    lsl r0, r1, #0x14\n    add r2, r6, #0\n    orr r4, r0\n    ldr r0, [r5, #0xc]\n    mul r2, r6\n    lsl r2, r2, #0xc\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    lsl r1, r2, #2\n    bl FX_Div\n    ldr r1, [r5, #4]\n    add r0, r4, r0\n    add r0, r1, r0\n    str r0, [r5]\n    ldr r0, [r5, #0x10]\n    ldr r1, [r5, #0x14]\n    add r0, r0, #1\n    cmp r0, r1\n    bgt _021EFF88\n    str r0, [r5, #0x10]\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    str r1, [r5, #0x10]\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021EFF90(void) {
    /* Original at 0x021EFF90 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #1\n    bne _021EFF9E\n    ldr r0, _021EFFA8 ; =0x0400006C\n    bl GXx_SetMasterBrightness_\n    pop {r3, pc}\n    ldr r0, _021EFFAC ; =0x0400106C\n    bl GXx_SetMasterBrightness_\n    pop {r3, pc}\n    nop\n    _021EFFA8: .word 0x0400006C\n    _021EFFAC: .word 0x0400106C"
    );
    #endif
}

void ov01_021EFFB0(void) {
    ov01_021EFE34();
}

void ov01_021EFFBC(void) {
    /* Original at 0x021EFFBC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov01_021EFE44\n    add r4, r0, #0\n    ldr r0, _021EFFD4 ; =ov01_021EFFD8\n    add r1, r5, #0\n    mov r2, #0xa\n    bl SysTask_CreateOnVWaitQueue\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _021EFFD4: .word ov01_021EFFD8"
    );
    #endif
}

void ov01_021EFFD8(void) {
    /* Original at 0x021EFFD8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r1, #0x14]\n    ldr r1, [r1]\n    bl ov01_021EFF90\n    add r0, r4, #0\n    bl SysTask_Destroy\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EFFEC(void) {
    /* Original at 0x021EFFEC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #4\n    mov r1, #0x30\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x30\n    add r4, r0, #0\n    bl memset\n    ldr r0, _021F0020 ; =0x04000048\n    mov r1, #0x3f\n    ldrh r2, [r0]\n    bic r2, r1\n    mov r1, #0x1f\n    orr r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0]\n    ldrh r2, [r0]\n    ldr r1, _021F0024 ; =0xFFFFC0FF\n    and r1, r2\n    strh r1, [r0]\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _021F0020: .word 0x04000048\n    _021F0024: .word 0xFFFFC0FF"
    );
    #endif
}

void ov01_021F0028(void) {
    /* Original at 0x021F0028 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x24]\n    cmp r1, #0\n    beq _021F0036\n    bl ov01_021F0174\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _021F004C ; =0xFFFF1FFF\n    and r0, r1\n    str r0, [r2]\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}\n    nop\n    _021F004C: .word 0xFFFF1FFF"
    );
    #endif
}

void ov01_021F0050(void) {
    /* Original at 0x021F0050 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r6, r0, #0\n    ldr r0, [r5, #0x24]\n    add r7, r2, #0\n    str r3, [sp, #4]\n    ldr r4, [sp, #0x20]\n    cmp r0, #0\n    beq _021F0068\n    bl GF_AssertFail\n    mov r0, #0\n    str r0, [r6, #0x18]\n    ldr r1, [r6, #0x10]\n    add r6, #0x18\n    ldr r1, [r1, #4]\n    ldr r2, [sp, #0x24]\n    ldr r1, [r1, #0x1c]\n    ldr r3, [sp, #0x28]\n    str r1, [r5, #0x20]\n    str r7, [r5, #0x18]\n    str r0, [r5, #0x1c]\n    ldr r0, [sp, #4]\n    str r6, [r5, #0x2c]\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021EFEC8\n    cmp r4, #0\n    blt _021F00A8\n    mov r0, #0xff\n    ldr r2, _021F00D4 ; =0x04000040\n    sub r0, r0, r4\n    strh r0, [r2]\n    add r0, r4, #1\n    mov r1, #0xc0\n    lsl r0, r0, #0x18\n    strh r1, [r2, #4]\n    lsr r0, r0, #0x18\n    strh r0, [r2, #2]\n    strh r1, [r2, #6]\n    b _021F00C4\n    add r0, r4, #0\n    add r0, #0xff\n    lsl r0, r0, #0x18\n    mov r2, #1\n    sub r2, r2, r4\n    lsl r2, r2, #0x18\n    ldr r1, _021F00D4 ; =0x04000040\n    lsr r0, r0, #0x18\n    strh r0, [r1]\n    mov r0, #0xc0\n    strh r0, [r1, #4]\n    lsr r2, r2, #0x18\n    strh r2, [r1, #2]\n    strh r0, [r1, #6]\n    mov r2, #1\n    ldr r0, _021F00D8 ; =ov01_021F00DC\n    add r1, r5, #0\n    lsl r2, r2, #0xa\n    bl SysTask_CreateOnVWaitQueue\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F00D4: .word 0x04000040\n    _021F00D8: .word ov01_021F00DC"
    );
    #endif
}

void ov01_021F00DC(void) {
    /* Original at 0x021F00DC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r2, #1\n    ldr r0, _021F0104 ; =ov01_021F010C\n    add r4, r1, #0\n    lsl r2, r2, #0xa\n    bl SysTask_CreateOnVWaitQueue\n    str r0, [r4, #0x28]\n    ldr r0, [r4, #0x20]\n    ldr r1, _021F0108 ; =ov01_021F01D0\n    add r2, r4, #0\n    bl ov01_021FB530\n    str r0, [r4, #0x24]\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    nop\n    _021F0104: .word ov01_021F010C\n    _021F0108: .word ov01_021F01D0"
    );
    #endif
}

void ov01_021F010C(void) {
    /* Original at 0x021F010C */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0x1c]\n    cmp r0, #0\n    beq _021F011C\n    cmp r0, #1\n    beq _021F0168\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov01_021EFF28\n    cmp r0, #0\n    beq _021F012C\n    ldr r0, [r4, #0x1c]\n    add r0, r0, #1\n    str r0, [r4, #0x1c]\n    ldr r0, [r4]\n    asr r0, r0, #0xc\n    bmi _021F014A\n    mov r1, #0xff\n    sub r1, r1, r0\n    ldr r2, _021F0170 ; =0x04000040\n    add r0, r0, #1\n    strh r1, [r2]\n    mov r1, #0xc0\n    lsl r0, r0, #0x18\n    strh r1, [r2, #4]\n    lsr r0, r0, #0x18\n    strh r0, [r2, #2]\n    strh r1, [r2, #6]\n    pop {r4, pc}\n    add r1, r0, #0\n    add r1, #0xff\n    lsl r1, r1, #0x18\n    ldr r3, _021F0170 ; =0x04000040\n    lsr r1, r1, #0x18\n    strh r1, [r3]\n    mov r1, #1\n    sub r0, r1, r0\n    mov r2, #0xc0\n    lsl r0, r0, #0x18\n    strh r2, [r3, #4]\n    lsr r0, r0, #0x18\n    strh r0, [r3, #2]\n    strh r2, [r3, #6]\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov01_021F0174\n    pop {r4, pc}\n    _021F0170: .word 0x04000040"
    );
    #endif
}

void ov01_021F0174(void) {
    /* Original at 0x021F0174 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F01C8 ; =0x04000048\n    mov r2, #0x3f\n    ldrh r3, [r0]\n    mov r1, #0x1f\n    bic r3, r2\n    orr r3, r1\n    mov r1, #0x20\n    orr r3, r1\n    strh r3, [r0]\n    ldrh r3, [r0, #2]\n    bic r3, r2\n    add r2, r0, #0\n    strh r3, [r0, #2]\n    mov r3, #0\n    sub r2, #8\n    strh r3, [r2]\n    sub r0, r0, #4\n    strh r3, [r0]\n    lsl r3, r1, #0x15\n    ldr r2, [r3]\n    ldr r0, _021F01CC ; =0xFFFF1FFF\n    and r2, r0\n    lsl r0, r1, #8\n    orr r0, r2\n    str r0, [r3]\n    ldr r0, [r4, #0x2c]\n    mov r1, #1\n    str r1, [r0]\n    ldr r0, [r4, #0x24]\n    bl ov01_021FB554\n    mov r0, #0\n    str r0, [r4, #0x24]\n    ldr r0, [r4, #0x28]\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #0x28]\n    pop {r4, pc}\n    nop\n    _021F01C8: .word 0x04000048\n    _021F01CC: .word 0xFFFF1FFF"
    );
    #endif
}

void ov01_021F01D0(void) {
    /* Original at 0x021F01D0 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _021F0240 ; =0x04000006\n    add r4, r1, #0\n    ldrh r0, [r0]\n    ldr r1, [r4, #0x18]\n    bl _u32_div_f\n    mov r1, #1\n    tst r0, r1\n    ldr r0, [r4]\n    bne _021F01E8\n    b _021F01EA\n    neg r0, r0\n    asr r2, r0, #0xc\n    ldr r0, _021F0244 ; =0x000001FF\n    add r1, r2, #0\n    and r1, r0\n    ldr r0, _021F0248 ; =0x04000010\n    cmp r2, #0\n    str r1, [r0]\n    str r1, [r0, #4]\n    str r1, [r0, #8]\n    str r1, [r0, #0xc]\n    ldr r1, _021F024C ; =0xFFFF1FFF\n    blt _021F021C\n    add r3, r0, #0\n    sub r3, #0x10\n    ldr r2, [r3]\n    and r2, r1\n    lsl r1, r0, #9\n    orr r1, r2\n    str r1, [r3]\n    add r0, #0x3a\n    ldrh r2, [r0]\n    mov r1, #0x3f\n    bic r2, r1\n    strh r2, [r0]\n    pop {r4, pc}\n    add r3, r0, #0\n    sub r3, #0x10\n    ldr r2, [r3]\n    and r2, r1\n    lsl r1, r0, #0xa\n    orr r1, r2\n    str r1, [r3]\n    add r0, #0x3a\n    ldrh r2, [r0]\n    mov r1, #0x3f\n    bic r2, r1\n    mov r1, #0x1f\n    orr r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0]\n    pop {r4, pc}\n    nop\n    _021F0240: .word 0x04000006\n    _021F0244: .word 0x000001FF\n    _021F0248: .word 0x04000010\n    _021F024C: .word 0xFFFF1FFF"
    );
    #endif
}

void ov01_021F0250(void) {
    /* Original at 0x021F0250 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r0, #4\n    mov r1, #0x48\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x48\n    add r4, r0, #0\n    bl memset\n    ldr r0, _021F0294 ; =0x04000048\n    mov r5, #0x3f\n    ldrh r2, [r0]\n    mov r1, #0x1f\n    bic r2, r5\n    add r3, r2, #0\n    orr r3, r1\n    mov r2, #0x20\n    orr r3, r2\n    strh r3, [r0]\n    ldrh r6, [r0]\n    ldr r3, _021F0298 ; =0xFFFFC0FF\n    lsl r1, r1, #8\n    and r3, r6\n    orr r3, r1\n    lsl r1, r2, #8\n    orr r1, r3\n    strh r1, [r0]\n    ldrh r1, [r0, #2]\n    bic r1, r5\n    strh r1, [r0, #2]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _021F0294: .word 0x04000048\n    _021F0298: .word 0xFFFFC0FF"
    );
    #endif
}

void ov01_021F029C(void) {
    /* Original at 0x021F029C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x3c]\n    cmp r1, #0\n    beq _021F02AA\n    bl ov01_021F03F8\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _021F02C0 ; =0xFFFF1FFF\n    and r0, r1\n    str r0, [r2]\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}\n    nop\n    _021F02C0: .word 0xFFFF1FFF"
    );
    #endif
}

void ov01_021F02C4(void) {
    /* Original at 0x021F02C4 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x3c]\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r0, #0\n    beq _021F02D8\n    bl GF_AssertFail\n    mov r1, #0\n    str r1, [r5, #0x18]\n    ldr r0, [r5, #0x10]\n    mov r2, #0xff\n    ldr r0, [r0, #4]\n    add r5, #0x18\n    ldr r0, [r0, #0x1c]\n    lsl r2, r2, #0xc\n    str r0, [r4, #0x38]\n    mov r0, #0x60\n    str r0, [r4, #0x30]\n    str r1, [r4, #0x34]\n    str r5, [r4, #0x44]\n    add r0, r4, #0\n    add r3, r7, #0\n    str r6, [sp]\n    bl ov01_021EFEC8\n    add r0, r4, #0\n    mov r2, #6\n    ldr r3, [sp, #0x18]\n    add r0, #0x18\n    mov r1, #0\n    lsl r2, r2, #0x10\n    str r6, [sp]\n    bl ov01_021EFEC8\n    ldr r2, _021F0328 ; =0x04000040\n    mov r1, #0xff\n    strh r1, [r2]\n    mov r0, #0xc0\n    strh r0, [r2, #4]\n    strh r1, [r2, #2]\n    strh r0, [r2, #6]\n    ldr r0, _021F032C ; =ov01_021F0330\n    add r1, r4, #0\n    lsr r2, r2, #0x10\n    bl SysTask_CreateOnVWaitQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F0328: .word 0x04000040\n    _021F032C: .word ov01_021F0330"
    );
    #endif
}

void ov01_021F0330(void) {
    /* Original at 0x021F0330 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r2, #1\n    ldr r0, _021F0358 ; =ov01_021F0360\n    add r4, r1, #0\n    lsl r2, r2, #0xa\n    bl SysTask_CreateOnVWaitQueue\n    str r0, [r4, #0x40]\n    ldr r0, [r4, #0x38]\n    ldr r1, _021F035C ; =ov01_021F03C8\n    add r2, r4, #0\n    bl ov01_021FB530\n    str r0, [r4, #0x3c]\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    nop\n    _021F0358: .word ov01_021F0360\n    _021F035C: .word ov01_021F03C8"
    );
    #endif
}

void ov01_021F0360(void) {
    /* Original at 0x021F0360 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0x34]\n    cmp r0, #0\n    beq _021F0370\n    cmp r0, #1\n    beq _021F03BC\n    pop {r4, pc}\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov01_021EFF28\n    add r0, r4, #0\n    bl ov01_021EFF28\n    cmp r0, #0\n    beq _021F0388\n    ldr r0, [r4, #0x34]\n    add r0, r0, #1\n    str r0, [r4, #0x34]\n    ldr r0, [r4]\n    asr r2, r0, #0xc\n    ldr r0, [r4, #0x18]\n    mov r4, #0xff\n    asr r1, r0, #0xc\n    ldr r0, _021F03C4 ; =0x04000040\n    sub r3, r4, r2\n    strh r3, [r0]\n    mov r3, #0x60\n    sub r3, r3, r1\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    strh r3, [r0, #4]\n    lsl r3, r2, #8\n    lsl r2, r4, #8\n    and r2, r3\n    orr r2, r4\n    add r1, #0x60\n    strh r2, [r0, #2]\n    lsl r2, r1, #8\n    lsl r1, r4, #8\n    and r2, r1\n    mov r1, #0xc0\n    orr r1, r2\n    strh r1, [r0, #6]\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov01_021F03F8\n    pop {r4, pc}\n    _021F03C4: .word 0x04000040"
    );
    #endif
}

void ov01_021F03C8(void) {
    /* Original at 0x021F03C8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021F03F0 ; =0x04000006\n    ldr r1, [r1, #0x30]\n    ldrh r2, [r0]\n    cmp r2, r1\n    ldr r1, _021F03F4 ; =0xFFFF1FFF\n    bhi _021F03E2\n    sub r3, r0, #6\n    ldr r2, [r3]\n    lsr r0, r0, #0xd\n    and r1, r2\n    orr r0, r1\n    str r0, [r3]\n    bx lr\n    sub r3, r0, #6\n    ldr r2, [r3]\n    lsr r0, r0, #0xc\n    and r1, r2\n    orr r0, r1\n    str r0, [r3]\n    bx lr\n    _021F03F0: .word 0x04000006\n    _021F03F4: .word 0xFFFF1FFF"
    );
    #endif
}

void ov01_021F03F8(void) {
    /* Original at 0x021F03F8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F044C ; =0x04000048\n    mov r2, #0x3f\n    ldrh r3, [r0]\n    mov r1, #0x1f\n    bic r3, r2\n    orr r3, r1\n    mov r1, #0x20\n    orr r3, r1\n    strh r3, [r0]\n    ldrh r3, [r0, #2]\n    bic r3, r2\n    add r2, r0, #0\n    strh r3, [r0, #2]\n    mov r3, #0\n    sub r2, #8\n    strh r3, [r2]\n    sub r0, r0, #4\n    strh r3, [r0]\n    lsl r3, r1, #0x15\n    ldr r2, [r3]\n    ldr r0, _021F0450 ; =0xFFFF1FFF\n    and r2, r0\n    lsl r0, r1, #8\n    orr r0, r2\n    str r0, [r3]\n    ldr r0, [r4, #0x44]\n    mov r1, #1\n    str r1, [r0]\n    ldr r0, [r4, #0x3c]\n    bl ov01_021FB554\n    mov r0, #0\n    str r0, [r4, #0x3c]\n    ldr r0, [r4, #0x40]\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #0x40]\n    pop {r4, pc}\n    nop\n    _021F044C: .word 0x04000048\n    _021F0450: .word 0xFFFF1FFF"
    );
    #endif
}

void ov01_021F0454(void) {
    /* Original at 0x021F0454 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r7, r1, #0\n    ldr r1, [sp, #0x34]\n    str r2, [sp, #0x10]\n    lsl r1, r1, #5\n    str r1, [sp]\n    mov r1, #4\n    str r1, [sp, #4]\n    add r1, r3, #0\n    ldr r3, [sp, #0x30]\n    mov r2, #0\n    lsl r3, r3, #5\n    add r6, r0, #0\n    ldr r5, [sp, #0x38]\n    ldr r4, [sp, #0x3c]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    add r0, r6, #0\n    add r2, r5, #0\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #4\n    str r0, [sp]\n    add r0, r6, #0\n    add r1, r7, #0\n    mov r2, #0\n    add r3, sp, #0x14\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    lsl r1, r4, #0x18\n    ldr r2, [sp, #0x14]\n    mov r3, #0\n    str r3, [sp]\n    add r6, r0, #0\n    ldrh r0, [r2]\n    lsr r1, r1, #0x18\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldrh r0, [r2, #2]\n    add r2, #0xc\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl LoadRectToBgTilemapRect\n    ldr r1, [sp, #0x14]\n    mov r2, #0\n    ldrh r0, [r1]\n    add r3, r2, #0\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldrh r0, [r1, #2]\n    lsl r1, r4, #0x18\n    lsr r1, r1, #0x18\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl BgTilemapRectChangePalette\n    add r0, r6, #0\n    bl Heap_Free\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F0500(void) {
    /* Original at 0x021F0500 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    ldr r6, [sp, #0x38]\n    add r5, r0, #0\n    str r6, [sp, #0x38]\n    ldr r6, [sp, #0x30]\n    add r4, r1, #0\n    str r6, [sp]\n    ldr r6, [sp, #0x34]\n    add r7, r2, #0\n    str r6, [sp, #4]\n    ldr r6, [sp, #0x38]\n    str r3, [sp, #0x10]\n    str r6, [sp, #8]\n    ldr r6, [sp, #0x3c]\n    str r6, [sp, #0xc]\n    bl ov01_021F0454\n    ldr r0, [sp, #0x30]\n    ldr r3, [sp, #0x10]\n    str r0, [sp]\n    ldr r0, [sp, #0x34]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x38]\n    add r2, r7, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x40]\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    bl ov01_021F0454\n    ldr r1, [sp, #0x40]\n    ldr r0, [sp, #0x38]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl GetBgTilemapBuffer\n    add r3, r0, #0\n    mov r5, #0\n    mov r0, #0xf\n    mov ip, r5\n    str r0, [sp, #0x14]\n    mov r4, #0\n    add r0, r4, r5\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0xf\n    ldr r0, [sp, #0x14]\n    ldrh r1, [r3, r2]\n    sub r0, r0, r4\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0xf\n    ldrh r0, [r3, r6]\n    add r4, r4, #1\n    strh r0, [r3, r2]\n    strh r1, [r3, r6]\n    ldrh r1, [r3, r2]\n    ldr r0, _021F05C0 ; =0x0000FBFF\n    add r7, r1, #0\n    and r7, r0\n    asr r1, r1, #0xa\n    mov r0, #1\n    eor r0, r1\n    lsl r0, r0, #0xa\n    orr r0, r7\n    strh r0, [r3, r2]\n    ldrh r0, [r3, r6]\n    ldr r1, _021F05C0 ; =0x0000FBFF\n    add r2, r0, #0\n    and r2, r1\n    asr r1, r0, #0xa\n    mov r0, #1\n    eor r0, r1\n    lsl r0, r0, #0xa\n    orr r0, r2\n    strh r0, [r3, r6]\n    cmp r4, #8\n    blt _021F0558\n    ldr r0, [sp, #0x14]\n    add r5, #0x10\n    add r0, #0x10\n    str r0, [sp, #0x14]\n    mov r0, ip\n    add r0, r0, #1\n    mov ip, r0\n    cmp r0, #0x18\n    blt _021F0556\n    ldr r1, [sp, #0x40]\n    ldr r0, [sp, #0x38]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F05C0: .word 0x0000FBFF"
    );
    #endif
}

void ov01_021F05C4(void) {
    /* Original at 0x021F05C4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r2, #0\n    add r0, r1, #0\n    add r1, r5, #4\n    mov r2, #4\n    bl G2dRenderer_Init\n    mov r7, #0x4b\n    str r0, [r5]\n    mov r4, #0\n    lsl r7, r7, #2\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r2, #4\n    bl Create2DGfxResObjMan\n    str r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021F05DC\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F05F4(void) {
    /* Original at 0x021F05F4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl SpriteList_Delete\n    mov r6, #0x4b\n    mov r4, #0\n    lsl r6, r6, #2\n    ldr r0, [r5, r6]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021F0604\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F0614(void) {
    /* Original at 0x021F0614 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    ldr r6, [sp, #0x58]\n    add r5, r1, #0\n    str r6, [sp]\n    mov r1, #1\n    add r7, r0, #0\n    str r1, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0x4b\n    str r1, [sp, #0xc]\n    lsl r0, r0, #2\n    add r4, r2, #0\n    str r3, [sp, #0x2c]\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0x4c]\n    add r1, r7, #0\n    mov r3, #0\n    bl AddCharResObjFromOpenNarcWithAtEndFlag\n    str r0, [r4]\n    str r6, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x48]\n    ldr r2, [sp, #0x2c]\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    str r0, [r4, #4]\n    str r6, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0x50]\n    add r1, r7, #0\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r4, #8]\n    str r6, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0x54]\n    add r1, r7, #0\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r4, #0xc]\n    ldr r0, [r4]\n    bl sub_0200ADA4\n    ldr r0, [r4]\n    bl sub_0200A740\n    ldr r0, [r4, #4]\n    bl sub_0200B00C\n    mov r0, #0\n    mov r2, #0x4b\n    str r6, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    lsl r2, r2, #2\n    ldr r1, [r5, r2]\n    add r4, #0x10\n    str r1, [sp, #0x14]\n    add r1, r2, #4\n    ldr r1, [r5, r1]\n    add r3, r6, #0\n    str r1, [sp, #0x18]\n    add r1, r2, #0\n    add r1, #8\n    ldr r1, [r5, r1]\n    add r2, #0xc\n    str r1, [sp, #0x1c]\n    ldr r1, [r5, r2]\n    add r2, r6, #0\n    str r1, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl CreateSpriteResourcesHeader\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F06EC(void) {
    /* Original at 0x021F06EC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    bl sub_0200AEB0\n    ldr r0, [r4, #4]\n    bl sub_0200B0A8\n    mov r7, #0x4b\n    mov r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r5, r7]\n    ldr r1, [r4]\n    bl DestroySingle2DGfxResObj\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #4\n    blt _021F0704\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F0718(void) {
    /* Original at 0x021F0718 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x20\n    ldr r0, [r0]\n    add r1, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #0x28]\n    str r1, [sp, #4]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x2c]\n    str r2, [sp, #8]\n    str r0, [sp, #0x14]\n    mov r0, #1\n    str r0, [sp, #0x18]\n    mov r0, #4\n    str r0, [sp, #0x1c]\n    add r0, sp, #0\n    str r3, [sp, #0xc]\n    bl Sprite_Create\n    add r4, r0, #0\n    bne _021F0746\n    bl GF_AssertFail\n    add r0, r4, #0\n    add sp, #0x20\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F074C(void) {
    /* Original at 0x021F074C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4}\n    sub sp, #0xc\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    add r2, sp, #0\n    add r4, r0, #0\n    str r1, [sp]\n    ldmia r2!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r4]\n    add sp, #0xc\n    pop {r4}\n    bx lr"
    );
    #endif
}

void ov01_021F0768(void) {
    /* Original at 0x021F0768 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x30\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x30\n    add r4, r0, #0\n    bl memset\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F0780(void) {
    Heap_Free();
}

void ov01_021F0788(void) {
    /* Original at 0x021F0788 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, #0x2e\n    ldrb r0, [r0]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r0, #0\n    beq _021F079E\n    bl GF_AssertFail\n    ldr r3, [sp, #0x1c]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov01_021EFE34\n    add r0, r5, #0\n    ldr r2, [sp, #0x18]\n    ldr r3, [sp, #0x1c]\n    add r0, #0x14\n    add r1, r7, #0\n    bl ov01_021EFE34\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x24]\n    str r0, [r5, #0x28]\n    add r0, r5, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    add r0, r5, #0\n    ldr r1, [sp, #0x28]\n    add r0, #0x2d\n    strb r1, [r0]\n    add r0, sp, #0x2c\n    ldrb r1, [r0]\n    add r0, r5, #0\n    add r0, #0x2f\n    strb r1, [r0]\n    mov r0, #1\n    add r5, #0x2e\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F07E0(void) {
    /* Original at 0x021F07E0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r1, r5, #0\n    add r1, #0x2e\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _021F07F6\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    bl ov01_021EFE44\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x14\n    bl ov01_021EFE44\n    add r0, r5, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    ldr r2, [r5]\n    ldr r6, [r5, #0x14]\n    lsr r1, r0, #1\n    sub r1, r2, r1\n    lsl r1, r1, #0x10\n    asr r3, r1, #0x10\n    add r1, r5, #0\n    add r1, #0x2d\n    ldrb r2, [r1]\n    add r0, r3, r0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    lsr r1, r2, #1\n    str r0, [sp]\n    add r0, r5, #0\n    sub r1, r6, r1\n    add r0, #0x2f\n    lsl r1, r1, #0x10\n    ldrb r0, [r0]\n    asr r1, r1, #0x10\n    add r2, r1, r2\n    str r0, [sp, #4]\n    lsl r2, r2, #0x10\n    ldr r0, [r5, #0x28]\n    asr r2, r2, #0x10\n    bl ov01_021F0960\n    add r0, r4, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F0848(void) {
    /* Original at 0x021F0848 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x30\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x30\n    add r4, r0, #0\n    bl memset\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F0860(void) {
    Heap_Free();
}

void ov01_021F0868(void) {
    /* Original at 0x021F0868 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, #0x2e\n    ldrb r0, [r0]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r0, #0\n    beq _021F087E\n    bl GF_AssertFail\n    ldr r3, [sp, #0x1c]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov01_021EFE34\n    add r0, r5, #0\n    ldr r2, [sp, #0x18]\n    ldr r3, [sp, #0x1c]\n    add r0, #0x14\n    add r1, r7, #0\n    bl ov01_021EFE34\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x24]\n    str r0, [r5, #0x28]\n    add r0, r5, #0\n    add r0, #0x2c\n    strb r1, [r0]\n    add r0, r5, #0\n    ldr r1, [sp, #0x28]\n    add r0, #0x2d\n    strb r1, [r0]\n    add r0, sp, #0x2c\n    ldrb r1, [r0]\n    add r0, r5, #0\n    add r0, #0x2f\n    strb r1, [r0]\n    mov r0, #1\n    add r5, #0x2e\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F08C0(void) {
    /* Original at 0x021F08C0 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r0, #0x2e\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021F08D4\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    ldr r2, [r5]\n    ldr r4, [r5, #0x14]\n    lsr r1, r0, #1\n    sub r1, r2, r1\n    lsl r1, r1, #0x10\n    asr r3, r1, #0x10\n    add r1, r5, #0\n    add r1, #0x2d\n    ldrb r2, [r1]\n    add r0, r3, r0\n    lsl r0, r0, #0x10\n    lsr r1, r2, #1\n    sub r1, r4, r1\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #0\n    add r2, r1, r2\n    str r0, [sp, #4]\n    lsl r2, r2, #0x10\n    ldr r0, [r5, #0x28]\n    asr r2, r2, #0x10\n    bl ov01_021F0960\n    add r0, r5, #0\n    bl ov01_021EFE44\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x14\n    bl ov01_021EFE44\n    add r0, r5, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    ldr r2, [r5]\n    ldr r6, [r5, #0x14]\n    lsr r1, r0, #1\n    sub r1, r2, r1\n    lsl r1, r1, #0x10\n    asr r3, r1, #0x10\n    add r1, r5, #0\n    add r1, #0x2d\n    ldrb r2, [r1]\n    add r0, r3, r0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    lsr r1, r2, #1\n    str r0, [sp]\n    add r0, r5, #0\n    sub r1, r6, r1\n    add r0, #0x2f\n    lsl r1, r1, #0x10\n    ldrb r0, [r0]\n    asr r1, r1, #0x10\n    add r2, r1, r2\n    str r0, [sp, #4]\n    lsl r2, r2, #0x10\n    ldr r0, [r5, #0x28]\n    asr r2, r2, #0x10\n    bl ov01_021F0960\n    add r0, r4, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F0960(void) {
    /* Original at 0x021F0960 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    ldr r5, [sp, #0x18]\n    add r4, r1, #0\n    cmp r5, #0\n    ble _021F09B8\n    cmp r2, #0\n    ble _021F09B8\n    cmp r3, r5\n    beq _021F09B8\n    cmp r4, r2\n    beq _021F09B8\n    cmp r3, #0\n    bge _021F097E\n    mov r3, #0\n    mov r1, #1\n    lsl r1, r1, #8\n    cmp r5, r1\n    ble _021F0988\n    add r5, r1, #0\n    cmp r4, #0\n    bge _021F098E\n    mov r4, #0\n    mov r1, #1\n    lsl r1, r1, #8\n    cmp r2, r1\n    ble _021F0998\n    add r2, r1, #0\n    sub r1, r5, r3\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    str r1, [sp]\n    sub r1, r2, r4\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    str r1, [sp, #4]\n    lsl r2, r3, #0x10\n    add r1, sp, #8\n    lsl r3, r4, #0x10\n    ldrb r1, [r1, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x10\n    bl FillWindowPixelRect\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F09BC(void) {
    /* Original at 0x021F09BC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #4\n    mov r1, #0xcc\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0xcc\n    add r7, r0, #0\n    bl memset\n    mov r4, #0\n    add r5, r7, #0\n    add r0, r6, #0\n    bl ov01_021F0848\n    str r0, [r5, #4]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x30\n    blt _021F09D6\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F09EC(void) {
    /* Original at 0x021F09EC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #4]\n    bl ov01_021F0860\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x30\n    blt _021F09F4\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F0A0C(void) {
    /* Original at 0x021F0A0C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    str r3, [r0]\n    ldr r3, _021F0A48 ; =0xFFFFFFF8\n    add r3, sp\n    ldrb r4, [r3, #0x10]\n    add r3, r0, #0\n    add r3, #0xc9\n    strb r4, [r3]\n    add r3, r0, #0\n    add r3, #0xc6\n    strb r1, [r3]\n    add r1, r0, #0\n    add r1, #0xc7\n    strb r2, [r1]\n    add r1, r0, #0\n    mov r2, #0\n    add r1, #0xc4\n    strb r2, [r1]\n    add r1, r0, #0\n    add r1, #0xc5\n    strb r2, [r1]\n    add r1, r0, #0\n    add r1, #0xc8\n    strb r2, [r1]\n    mov r1, #1\n    add r0, #0xca\n    strb r1, [r0]\n    pop {r3, r4}\n    bx lr\n    nop\n    _021F0A48: .word 0xFFFFFFF8"
    );
    #endif
}

void ov01_021F0A4C(void) {
    /* Original at 0x021F0A4C */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r6, r0, #0\n    add r0, #0xca\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021F0A60\n    add sp, #0x1c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    add r0, #0xc4\n    ldrb r0, [r0]\n    cmp r0, #0x30\n    bhs _021F0AE4\n    mov r1, #0xc8\n    ldrsb r0, [r6, r1]\n    sub r2, r0, #1\n    add r0, r6, #0\n    add r0, #0xc8\n    strb r2, [r0]\n    ldrsb r0, [r6, r1]\n    cmp r0, #0\n    bgt _021F0AE4\n    add r0, r6, #0\n    add r0, #0xc7\n    ldrb r1, [r0]\n    add r0, r6, #0\n    add r0, #0xc8\n    strb r1, [r0]\n    add r0, r6, #0\n    add r0, #0xc4\n    ldrb r0, [r0]\n    mov r1, #0x1d\n    lsr r3, r0, #0x1f\n    lsl r2, r0, #0x1d\n    sub r2, r2, r3\n    ror r2, r1\n    add r2, r3, r2\n    ldr r1, _021F0B40 ; =ov01_02206980\n    mov r3, #0x20\n    ldrb r1, [r1, r2]\n    lsr r2, r0, #3\n    lsl r4, r2, #5\n    mov r2, #0xb0\n    sub r2, r2, r4\n    str r2, [sp]\n    add r2, r6, #0\n    add r2, #0xc6\n    ldrb r2, [r2]\n    lsl r0, r0, #2\n    lsl r1, r1, #5\n    str r2, [sp, #4]\n    ldr r2, [r6]\n    add r0, r6, r0\n    str r2, [sp, #8]\n    str r3, [sp, #0xc]\n    add r2, r6, #0\n    str r3, [sp, #0x10]\n    add r2, #0xc9\n    ldrb r2, [r2]\n    sub r3, #0x30\n    add r1, #0x10\n    str r2, [sp, #0x14]\n    ldr r0, [r0, #4]\n    add r2, r1, #0\n    sub r3, r3, r4\n    bl ov01_021F0868\n    add r0, r6, #0\n    add r0, #0xc4\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r6, #0\n    add r0, #0xc4\n    strb r1, [r0]\n    add r0, r6, #0\n    add r0, #0xc5\n    ldrb r4, [r0]\n    add r0, r6, #0\n    add r0, #0xc4\n    ldrb r0, [r0]\n    cmp r4, r0\n    bge _021F0B1C\n    lsl r0, r4, #2\n    add r7, r6, #0\n    add r5, r6, r0\n    add r7, #0xc5\n    ldr r0, [r5, #4]\n    bl ov01_021F08C0\n    str r0, [sp, #0x18]\n    cmp r0, #1\n    bne _021F0B0E\n    ldrb r0, [r7]\n    add r0, r0, #1\n    strb r0, [r7]\n    add r0, r6, #0\n    add r0, #0xc4\n    ldrb r0, [r0]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r0\n    blt _021F0AFC\n    add r0, r6, #0\n    add r0, #0xc5\n    ldrb r0, [r0]\n    cmp r0, #0x30\n    blo _021F0B38\n    ldr r0, [sp, #0x18]\n    cmp r0, #1\n    bne _021F0B38\n    mov r0, #0\n    add r6, #0xca\n    strb r0, [r6]\n    add sp, #0x1c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F0B40: .word ov01_02206980"
    );
    #endif
}

void ov01_021F0B44(void) {
    /* Original at 0x021F0B44 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #4\n    mov r1, #0xe8\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0xe8\n    add r4, r0, #0\n    bl memset\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F0B5C(void) {
    /* Original at 0x021F0B5C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0xe0\n    ldr r1, [r1]\n    cmp r1, #0\n    beq _021F0B6E\n    bl ov01_021F0CDC\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F0B78(void) {
    /* Original at 0x021F0B78 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, [sp, #0x18]\n    add r7, r1, #0\n    str r0, [sp, #0x18]\n    add r0, r7, #0\n    add r0, #0xe0\n    ldr r0, [r0]\n    add r6, r2, #0\n    add r5, r3, #0\n    cmp r0, #0\n    beq _021F0B94\n    bl GF_AssertFail\n    mov r2, #0\n    str r2, [r4, #0x18]\n    ldr r0, [r4, #0x10]\n    add r4, #0x18\n    ldr r0, [r0, #4]\n    add r3, r6, #0\n    ldr r1, [r0, #0x1c]\n    add r0, r7, #0\n    add r0, #0xd8\n    str r1, [r0]\n    add r0, r7, #0\n    str r2, [r7, #0x14]\n    add r0, #0xe4\n    str r4, [r0]\n    add r0, r7, #0\n    mov r1, #0xff\n    bl ov01_021EFE34\n    mov r4, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl _u32_div_f\n    ldr r0, [sp, #0x18]\n    mul r0, r1\n    add r1, r5, #0\n    bl _u32_div_f\n    add r6, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl _u32_div_f\n    mov r1, #1\n    tst r0, r1\n    bne _021F0BE2\n    add r0, r7, r4\n    strb r6, [r0, #0x18]\n    b _021F0BEA\n    ldr r0, [sp, #0x18]\n    sub r1, r0, r6\n    add r0, r7, r4\n    strb r1, [r0, #0x18]\n    add r4, r4, #1\n    cmp r4, #0xc0\n    blt _021F0BBA\n    ldr r0, _021F0C34 ; =0x04000048\n    mov r1, #0x3f\n    ldrh r3, [r0]\n    ldr r2, [sp, #0x1c]\n    bic r3, r1\n    orr r3, r2\n    mov r2, #0x20\n    orr r3, r2\n    strh r3, [r0]\n    ldrh r3, [r0, #2]\n    bic r3, r1\n    ldr r1, [sp, #0x20]\n    orr r1, r3\n    strh r1, [r0, #2]\n    add r1, r0, #0\n    mov r3, #0\n    sub r1, #8\n    strh r3, [r1]\n    mov r1, #0xc0\n    sub r0, r0, #4\n    strh r1, [r0]\n    lsl r3, r2, #0x15\n    ldr r1, [r3]\n    ldr r0, _021F0C38 ; =0xFFFF1FFF\n    and r1, r0\n    lsl r0, r2, #8\n    orr r0, r1\n    str r0, [r3]\n    ldr r0, _021F0C3C ; =ov01_021F0C40\n    add r1, r7, #0\n    lsl r2, r2, #5\n    bl SysTask_CreateOnVWaitQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F0C34: .word 0x04000048\n    _021F0C38: .word 0xFFFF1FFF\n    _021F0C3C: .word ov01_021F0C40"
    );
    #endif
}

void ov01_021F0C40(void) {
    /* Original at 0x021F0C40 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    ldr r1, _021F0C74 ; =ov01_021F0CA8\n    add r2, r4, #0\n    bl ov01_021FB530\n    add r1, r4, #0\n    add r1, #0xdc\n    str r0, [r1]\n    mov r2, #1\n    ldr r0, _021F0C78 ; =ov01_021F0C7C\n    add r1, r4, #0\n    lsl r2, r2, #0xa\n    bl SysTask_CreateOnVWaitQueue\n    add r4, #0xe0\n    str r0, [r4]\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    nop\n    _021F0C74: .word ov01_021F0CA8\n    _021F0C78: .word ov01_021F0C7C"
    );
    #endif
}

void ov01_021F0C7C(void) {
    /* Original at 0x021F0C7C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _021F0C8C\n    cmp r0, #1\n    beq _021F0C9E\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov01_021EFE44\n    cmp r0, #1\n    bne _021F0CA4\n    ldr r0, [r4, #0x14]\n    add r0, r0, #1\n    str r0, [r4, #0x14]\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov01_021F0CDC\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F0CA8(void) {
    /* Original at 0x021F0CA8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021F0CD4 ; =0x04000006\n    ldrh r0, [r0]\n    cmp r0, #0xc0\n    bge _021F0CD0\n    add r0, r1, r0\n    ldrb r0, [r0, #0x18]\n    ldr r2, [r1]\n    sub r0, r2, r0\n    bpl _021F0CBC\n    mov r0, #0\n    lsl r1, r0, #8\n    mov r0, #0xff\n    lsl r0, r0, #8\n    and r1, r0\n    mov r0, #0xff\n    orr r0, r1\n    ldr r1, _021F0CD8 ; =0x04000040\n    strh r0, [r1]\n    mov r0, #0xc0\n    strh r0, [r1, #4]\n    bx lr\n    nop\n    _021F0CD4: .word 0x04000006\n    _021F0CD8: .word 0x04000040"
    );
    #endif
}

void ov01_021F0CDC(void) {
    /* Original at 0x021F0CDC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    add r4, r0, #0\n    ldr r1, [r2]\n    ldr r0, _021F0D1C ; =0xFFFF1FFF\n    and r0, r1\n    str r0, [r2]\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    mov r1, #1\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xdc\n    ldr r0, [r0]\n    bl ov01_021FB554\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xdc\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xe0\n    ldr r0, [r0]\n    bl SysTask_Destroy\n    mov r0, #0\n    add r4, #0xe0\n    str r0, [r4]\n    pop {r4, pc}\n    nop\n    _021F0D1C: .word 0xFFFF1FFF"
    );
    #endif
}

void ov01_021F0D20(void) {
    /* Original at 0x021F0D20 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    mov r1, #1\n    add r2, r0, #0\n    tst r2, r1\n    bne _021F0D42\n    ldr r1, _021F0DAC ; =0x00001720\n    tst r1, r0\n    bne _021F0D38\n    cmp r0, #0\n    bne _021F0D3C\n    mov r1, #0\n    b _021F0D42\n    bl GF_AssertFail\n    mov r1, #0\n    mov r0, #0x15\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #0x18\n    bhi _021F0D94\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F0D58: ; jump table\n    mov r4, #0\n    b _021F0D94\n    mov r4, #2\n    b _021F0D94\n    mov r4, #4\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    sub r0, r0, #3\n    cmp r0, #1\n    bhi _021F0DA2\n    add r4, r4, #1\n    mov r0, #6\n    mul r0, r1\n    add r0, r4, r0\n    pop {r3, r4, r5, pc}\n    nop\n    _021F0DAC: .word 0x00001720"
    );
    #endif
}

void ov01_021F0DB0(void) {
    /* Original at 0x021F0DB0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F0DC4 ; =0x0400006C\n    ldr r1, [r1]\n    bl GXx_SetMasterBrightness_\n    add r0, r4, #0\n    bl SysTask_Destroy\n    pop {r4, pc}\n    _021F0DC4: .word 0x0400006C"
    );
    #endif
}

void ov01_021F0DC8(void) {
    /* Original at 0x021F0DC8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021F0DD4 ; =SysTask_CreateOnVWaitQueue\n    mov r2, #1\n    add r1, r0, #0\n    ldr r0, _021F0DD8 ; =ov01_021F0DB0\n    lsl r2, r2, #0xa\n    bx r3\n    _021F0DD4: .word SysTask_CreateOnVWaitQueue\n    _021F0DD8: .word ov01_021F0DB0"
    );
    #endif
}

void ov01_021F0DDC(void) {
    /* Original at 0x021F0DDC */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F0E5C ; =ov01_02209B64\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _021F0DEC\n    bl GF_AssertFail\n    mov r0, #4\n    mov r1, #0x18\n    bl Heap_Alloc\n    ldr r1, _021F0E5C ; =ov01_02209B64\n    mov r2, #0x18\n    str r0, [r1]\n    mov r1, #0\n    strb r1, [r0]\n    add r0, r0, #1\n    sub r2, r2, #1\n    bne _021F0DFC\n    ldr r0, _021F0E5C ; =ov01_02209B64\n    mov r1, #0\n    ldr r2, [r0]\n    strh r1, [r2]\n    ldr r2, [r0]\n    strb r1, [r2, #2]\n    ldr r0, [r0]\n    str r4, [r0, #4]\n    mov r0, #2\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    bl GX_ResetBankForBG\n    mov r2, #2\n    ldr r1, _021F0E60 ; =0x06840000\n    mov r0, #0\n    lsl r2, r2, #0x10\n    bl MIi_CpuClearFast\n    ldr r0, _021F0E64 ; =0xC0320C04\n    ldr r2, _021F0E68 ; =0x04000064\n    ldr r1, _021F0E5C ; =ov01_02209B64\n    str r0, [r2]\n    ldr r0, _021F0E6C ; =ov01_021F1094\n    ldr r1, [r1]\n    lsr r2, r2, #0x10\n    bl SysTask_CreateOnVWaitQueue\n    ldr r1, _021F0E5C ; =ov01_02209B64\n    mov r2, #1\n    ldr r0, _021F0E70 ; =ov01_021F10C8\n    ldr r1, [r1]\n    lsl r2, r2, #0xa\n    bl SysTask_CreateOnMainQueue\n    pop {r4, pc}\n    _021F0E5C: .word ov01_02209B64\n    _021F0E60: .word 0x06840000\n    _021F0E64: .word 0xC0320C04\n    _021F0E68: .word 0x04000064\n    _021F0E6C: .word ov01_021F1094\n    _021F0E70: .word ov01_021F10C8"
    );
    #endif
}

void ov01_021F0E74(void) {
    GF_AssertFail(1);
}

void ov01_021F0E90(void) {
    GF_AssertFail();
}

void ov01_021F0EAC(void) {
    sub_0201543C();
}

void ov01_021F0EC0(void) {
    /* Original at 0x021F0EC0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021F0F04 ; =ov01_02209B64\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _021F0ECE\n    bl GF_AssertFail\n    bl sub_02014F84\n    ldr r0, _021F0F04 ; =ov01_02209B64\n    ldr r0, [r0]\n    ldr r0, [r0, #4]\n    bl ov01_021F1210\n    ldr r0, _021F0F04 ; =ov01_02209B64\n    mov r1, #1\n    ldr r0, [r0]\n    ldr r0, [r0, #4]\n    bl ov01_021E631C\n    ldr r0, _021F0F04 ; =ov01_02209B64\n    mov r1, #1\n    ldr r0, [r0]\n    ldr r0, [r0, #4]\n    bl ov01_021E6340\n    ldr r0, _021F0F04 ; =ov01_02209B64\n    ldr r0, [r0]\n    bl Heap_Free\n    ldr r0, _021F0F04 ; =ov01_02209B64\n    mov r1, #0\n    str r1, [r0]\n    pop {r3, pc}\n    _021F0F04: .word ov01_02209B64"
    );
    #endif
}

void ov01_021F0F08(void) {
    /* Original at 0x021F0F08 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _021F0FAC ; =ov01_02209B64\n    add r4, r1, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _021F0F1C\n    bl GF_AssertFail\n    ldr r0, _021F0FAC ; =ov01_02209B64\n    ldr r0, [r0]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _021F0F2A\n    bl GF_AssertFail\n    mov r1, #0x12\n    mov r0, #4\n    lsl r1, r1, #0xa\n    bl Heap_Alloc\n    ldr r2, _021F0FAC ; =ov01_02209B64\n    mov r3, #0x12\n    ldr r1, [r2]\n    lsl r3, r3, #0xa\n    str r0, [r1, #0xc]\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r2, [r2]\n    ldr r0, _021F0FB0 ; =ov01_021F1224\n    ldr r1, _021F0FB4 ; =ov01_021F1250\n    ldr r2, [r2, #0xc]\n    bl sub_02014DB4\n    ldr r1, _021F0FAC ; =ov01_02209B64\n    ldr r2, [r1]\n    str r0, [r2, #8]\n    ldr r0, [r1]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    bne _021F0F64\n    bl GF_AssertFail\n    ldr r0, _021F0FAC ; =ov01_02209B64\n    mov r1, #1\n    ldr r0, [r0]\n    ldr r0, [r0, #8]\n    bl sub_02015528\n    ldr r0, _021F0FAC ; =ov01_02209B64\n    ldr r0, [r0]\n    ldr r0, [r0, #8]\n    bl sub_02015524\n    add r2, r0, #0\n    mov r0, #1\n    mov r1, #0xe1\n    lsl r0, r0, #0xc\n    lsl r1, r1, #0xe\n    bl Camera_SetPerspectiveClippingPlane\n    mov r2, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r3, #4\n    str r2, [sp]\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r1, r0, #0\n    ldr r0, _021F0FAC ; =ov01_02209B64\n    mov r2, #0\n    ldr r0, [r0]\n    add r3, r2, #0\n    ldr r0, [r0, #8]\n    bl sub_0201526C\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _021F0FAC: .word ov01_02209B64\n    _021F0FB0: .word ov01_021F1224\n    _021F0FB4: .word ov01_021F1250"
    );
    #endif
}

void ov01_021F0FB8(void) {
    /* Original at 0x021F0FB8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r1, sp, #0\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    ldr r0, _021F1004 ; =ov01_02209B64\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _021F0FD4\n    bl GF_AssertFail\n    ldr r0, _021F1004 ; =ov01_02209B64\n    ldr r0, [r0]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    bne _021F0FE2\n    bl GF_AssertFail\n    mov r4, #0\n    cmp r5, #0\n    bls _021F0FFE\n    ldr r6, _021F1004 ; =ov01_02209B64\n    add r7, sp, #0\n    ldr r0, [r6]\n    add r1, r4, #0\n    ldr r0, [r0, #8]\n    add r2, r7, #0\n    bl sub_02015484\n    add r4, r4, #1\n    cmp r4, r5\n    blo _021F0FEC\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F1004: .word ov01_02209B64"
    );
    #endif
}

void ov01_021F1008(void) {
    /* Original at 0x021F1008 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021F1040 ; =ov01_02209B64\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _021F1016\n    bl GF_AssertFail\n    ldr r0, _021F1040 ; =ov01_02209B64\n    ldr r0, [r0]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    bne _021F1024\n    mov r0, #1\n    pop {r3, pc}\n    bl sub_02015460\n    ldr r0, _021F1040 ; =ov01_02209B64\n    ldr r0, [r0]\n    ldr r0, [r0, #8]\n    bl sub_020154B0\n    cmp r0, #0\n    bne _021F103A\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _021F1040: .word ov01_02209B64"
    );
    #endif
}

void ov01_021F1044(void) {
    sub_020154B0(0, 1);
}

void ov01_021F1060(void) {
    /* Original at 0x021F1060 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021F1090 ; =ov01_02209B64\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _021F106E\n    bl GF_AssertFail\n    ldr r0, _021F1090 ; =ov01_02209B64\n    ldr r0, [r0]\n    ldr r0, [r0, #8]\n    bl sub_02014EBC\n    ldr r0, _021F1090 ; =ov01_02209B64\n    ldr r0, [r0]\n    ldr r0, [r0, #0xc]\n    bl Heap_Free\n    ldr r0, _021F1090 ; =ov01_02209B64\n    mov r2, #0\n    ldr r1, [r0]\n    str r2, [r1, #8]\n    ldr r0, [r0]\n    str r2, [r0, #0xc]\n    pop {r3, pc}\n    _021F1090: .word ov01_02209B64"
    );
    #endif
}

void ov01_021F1094(void) {
    /* Original at 0x021F1094 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _021F10A6\n    cmp r0, #1\n    beq _021F10AC\n    pop {r3, r4, r5, pc}\n    add r0, r0, #1\n    strh r0, [r4]\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r4, #3]\n    cmp r0, #1\n    bne _021F10C4\n    ldr r0, [r4, #4]\n    bl ov01_021F1148\n    add r0, r5, #0\n    bl SysTask_Destroy\n    ldrh r0, [r4]\n    add r0, r0, #1\n    strh r0, [r4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F10C8(void) {
    /* Original at 0x021F10C8 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x3c\n    add r4, r1, #0\n    add r5, r0, #0\n    ldrh r0, [r4]\n    cmp r0, #2\n    bne _021F1136\n    bl sub_02014DA0\n    add r1, sp, #0x30\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    ldr r3, _021F113C ; =ov01_022067E0\n    str r0, [r1, #8]\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x24\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, sp, #0\n    bl MTX_Identity33_\n    add r0, sp, #0x30\n    bl NNS_G3dGlbSetBaseTrans\n    add r0, sp, #0x24\n    bl NNS_G3dGlbSetBaseScale\n    ldr r1, _021F1140 ; =NNS_G3dGlb + 0xBC\n    add r0, sp, #0\n    bl MI_Copy36B\n    ldr r1, _021F1144 ; =NNS_G3dGlb + 0x80\n    mov r0, #0xa4\n    ldr r2, [r1, #0x7c]\n    bic r2, r0\n    str r2, [r1, #0x7c]\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ov01_021E631C\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ov01_021E6340\n    mov r0, #0\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #1\n    strb r0, [r4, #2]\n    add r0, r5, #0\n    bl SysTask_Destroy\n    add sp, #0x3c\n    pop {r4, r5, pc}\n    nop\n    _021F113C: .word ov01_022067E0\n    _021F1140: .word NNS_G3dGlb + 0xBC\n    _021F1144: .word NNS_G3dGlb + 0x80"
    );
    #endif
}

void ov01_021F1148(void) {
    /* Original at 0x021F1148 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x6c\n    ldr r5, _021F11F8 ; =ov01_0220689C\n    add r4, r0, #0\n    add r3, sp, #0x44\n    mov r2, #5\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F1154\n    add r0, sp, #0x44\n    bl GfGfx_SetBanks\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r5, _021F11FC ; =ov01_022067FC\n    add r3, sp, #0x34\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r0, [r4, #8]\n    bl ov01_021E6050\n    ldr r2, _021F1200 ; =0x0400000E\n    mov r0, #0x43\n    ldrh r1, [r2]\n    and r1, r0\n    ldr r0, _021F1204 ; =0x00004884\n    orr r0, r1\n    strh r0, [r2]\n    mov r0, #3\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #8\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add r0, sp, #0x24\n    bl MTX_Identity22_\n    mov r2, #0\n    str r2, [sp]\n    ldr r0, _021F1208 ; =0x04000030\n    add r1, sp, #0x24\n    add r3, r2, #0\n    str r2, [sp, #4]\n    bl G2x_SetBGyAffine_\n    ldr r5, _021F120C ; =ov01_02206844\n    add r3, sp, #8\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    ldr r0, [r4, #8]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #2\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #4\n    bl BG_ClearCharDataRange\n    ldr r0, [r4, #8]\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x6c\n    pop {r4, r5, pc}\n    _021F11F8: .word ov01_0220689C\n    _021F11FC: .word ov01_022067FC\n    _021F1200: .word 0x0400000E\n    _021F1204: .word 0x00004884\n    _021F1208: .word 0x04000030\n    _021F120C: .word ov01_02206844"
    );
    #endif
}

void ov01_021F1210(void) {
    /* Original at 0x021F1210 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #8]\n    bl ov01_021E6048\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F1224(void) {
    /* Original at 0x021F1224 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021F124C ; =ov01_02209B64\n    add r4, r1, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _021F1236\n    bl GF_AssertFail\n    cmp r4, #0\n    beq _021F123E\n    bl GF_AssertFail\n    ldr r0, _021F124C ; =ov01_02209B64\n    ldr r2, [r0]\n    ldr r0, [r2, #0x10]\n    add r1, r0, r5\n    str r1, [r2, #0x10]\n    pop {r3, r4, r5, pc}\n    nop\n    _021F124C: .word ov01_02209B64"
    );
    #endif
}

void ov01_021F1250(void) {
    /* Original at 0x021F1250 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021F1278 ; =ov01_02209B64\n    add r4, r1, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _021F1262\n    bl GF_AssertFail\n    cmp r4, #0\n    beq _021F126A\n    bl GF_AssertFail\n    ldr r0, _021F1278 ; =ov01_02209B64\n    ldr r2, [r0]\n    ldr r0, [r2, #0x14]\n    add r1, r0, r5\n    str r1, [r2, #0x14]\n    pop {r3, r4, r5, pc}\n    nop\n    _021F1278: .word ov01_02209B64"
    );
    #endif
}

void ov01_021F127C(void) {
    /* Original at 0x021F127C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021F1288 ; =SysTask_CreateOnVBlankQueue\n    mov r2, #1\n    add r1, r0, #0\n    ldr r0, _021F128C ; =ov01_021F1290\n    lsl r2, r2, #0xa\n    bx r3\n    _021F1288: .word SysTask_CreateOnVBlankQueue\n    _021F128C: .word ov01_021F1290"
    );
    #endif
}

void ov01_021F1290(void) {
    /* Original at 0x021F1290 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #8]\n    cmp r0, #2\n    blo _021F12A4\n    ldr r0, [r4]\n    bl sub_02014C08\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    bl sub_02014C40\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F12B4(void) {
    /* Original at 0x021F12B4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl sub_02014AD8\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r4, #8]\n    add r0, r4, #0\n    bl ov01_021F127C\n    str r0, [r4, #4]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F12D0(void) {
    /* Original at 0x021F12D0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl SysTask_Destroy\n    ldr r0, [r4]\n    bl sub_02014B9C\n    ldr r0, [r4]\n    bl sub_02014BD8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F12E8(void) {
    /* Original at 0x021F12E8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    ldr r4, [sp, #0x20]\n    add r5, sp, #0x10\n    str r4, [sp]\n    mov r4, #0x14\n    ldrsh r4, [r5, r4]\n    str r4, [sp, #4]\n    ldr r4, [sp, #0x28]\n    str r4, [sp, #8]\n    ldr r4, [sp, #0x2c]\n    str r4, [sp, #0xc]\n    ldr r4, [sp, #0x30]\n    str r4, [sp, #0x10]\n    ldr r0, [r0]\n    bl sub_02014B08\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_021F1310(void) {
    /* Original at 0x021F1310 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, [r0]\n    add r7, r1, #0\n    bl sub_02014BF8\n    add r5, r0, #0\n    mov r6, #0\n    ldr r0, [r5]\n    add r1, r7, #0\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    add r0, r6, #0\n    bl _u32_div_f\n    mov r1, #1\n    tst r0, r1\n    bne _021F1336\n    lsl r0, r4, #0x10\n    b _021F133A\n    neg r0, r4\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [r5]\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, #0xc0\n    blt _021F131E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}
