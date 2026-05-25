/* Decompiled from asm/overlay_44.s */
#include "global.h"

void ov44_02229EE0(void) {
    /* Original at 0x02229EE0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r1, #0x16\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    bl Save_VarsFlags_Get\n    mov r1, #2\n    mov r2, #0x1b\n    bl Save_VarsFlags_FlypointFlagAction\n    pop {r3, pc}"
    );
    #endif
}

u8 ov44_02229EF8(void) {
    return 0;
}

u8 ov44_02229EFC(void) {
    return 1;
}

void ov44_02229F00(void) {
    /* Original at 0x02229F00 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldrb r4, [r1, #0x1b]\n    add r5, r0, #0\n    add r1, r4, #0\n    sub r1, #0x14\n    cmp r1, #1\n    bhi _02229F18\n    bl ov44_02229EE0\n    cmp r0, #0\n    bne _02229F18\n    mov r4, #0x1d\n    add r0, r4, #0\n    sub r0, #0x16\n    cmp r0, #5\n    bhi _02229F2C\n    add r0, r5, #0\n    bl ov44_02229EFC\n    cmp r0, #0\n    bne _02229F2C\n    mov r4, #0x1d\n    add r0, r4, #0\n    sub r0, #0x12\n    cmp r0, #1\n    bhi _02229F40\n    add r0, r5, #0\n    bl ov44_02229EF8\n    cmp r0, #0\n    bne _02229F40\n    mov r4, #0x1d\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_02229F44(void) {
    /* Original at 0x02229F44 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "sub r0, #0x12\n    cmp r0, #9\n    bhi _02229F6E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02229F56: ; jump table\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov44_02229F74(void) {
    /* Original at 0x02229F74 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub r0, #0x12\n    cmp r0, #9\n    bhi _02229FAC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02229F88: ; jump table\n    mov r0, #0xb\n    pop {r3, pc}\n    mov r0, #0xd\n    pop {r3, pc}\n    mov r0, #0xf\n    pop {r3, pc}\n    mov r0, #0xe\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov44_02229FB4(void) {
    /* Original at 0x02229FB4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "sub r0, #9\n    cmp r0, #5\n    bhi _02229FD6\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02229FC6: ; jump table\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov44_02229FDC(void) {
    /* Original at 0x02229FDC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov44_02229FB4\n    cmp r0, #0\n    beq _02229FEC\n    mov r0, #1\n    pop {r4, pc}\n    sub r4, #0xf\n    cmp r4, #0xc\n    bhi _0222A01C\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02229FFE: ; jump table\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222A020(void) {
    /* Original at 0x0222A020 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #7\n    bhi _0222A044\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222A030: ; jump table\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov44_0222A048(void) {
    /* Original at 0x0222A048 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov44_0222A020\n    cmp r0, #0\n    beq _0222A058\n    mov r0, #1\n    pop {r4, pc}\n    cmp r4, #8\n    bgt _0222A064\n    bge _0222A088\n    cmp r4, #1\n    beq _0222A088\n    b _0222A08C\n    sub r4, #0x12\n    cmp r4, #8\n    bhi _0222A08C\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222A076: ; jump table\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222A090(void) {
    /* Original at 0x0222A090 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "sub r0, #0xc\n    cmp r0, #3\n    bhi _0222A0AE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222A0A2: ; jump table\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov44_0222A0B4(void) {
    /* Original at 0x0222A0B4 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x1d\n    cmp r0, #0x1b\n    bhi _0222A164\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222A0C6: ; jump table\n    mov r1, #0x12\n    b _0222A164\n    mov r1, #0x14\n    b _0222A164\n    mov r1, #0x16\n    b _0222A164\n    mov r1, #0x1a\n    b _0222A164\n    mov r1, #0x18\n    b _0222A164\n    mov r1, #8\n    b _0222A164\n    mov r1, #2\n    b _0222A164\n    mov r1, #3\n    b _0222A164\n    mov r1, #4\n    b _0222A164\n    mov r1, #5\n    b _0222A164\n    mov r1, #6\n    b _0222A164\n    mov r1, #7\n    b _0222A164\n    mov r1, #1\n    b _0222A164\n    mov r1, #0x13\n    b _0222A164\n    mov r1, #0x15\n    b _0222A164\n    mov r1, #0x17\n    b _0222A164\n    mov r1, #0x1b\n    b _0222A164\n    mov r1, #0x19\n    b _0222A164\n    mov r1, #0xf\n    b _0222A164\n    mov r1, #9\n    b _0222A164\n    mov r1, #0xa\n    b _0222A164\n    mov r1, #0xb\n    b _0222A164\n    mov r1, #0xc\n    b _0222A164\n    mov r1, #0xd\n    b _0222A164\n    mov r1, #0xe\n    b _0222A164\n    mov r1, #0x10\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov44_0222A168(void) {
    /* Original at 0x0222A168 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r1, #0x16\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    bl SaveArray_Party_Get\n    str r0, [sp]\n    bl Party_GetCount\n    mov r5, #0\n    add r7, r0, #0\n    add r4, r5, #0\n    cmp r7, #0\n    ble _0222A1B0\n    ldr r0, [sp]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #0xa3\n    mov r2, #0\n    add r6, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0222A1AA\n    add r0, r6, #0\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _0222A1AA\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r4, r7\n    blt _0222A184\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_0222A1B4(void) {
    /* Original at 0x0222A1B4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    sub r1, #0x12\n    cmp r1, #1\n    bhi _0222A1C6\n    bl sub_02039AF8\n    pop {r4, pc}\n    bl ov44_02229F44\n    cmp r0, #0\n    beq _0222A1D4\n    bl sub_02039B18\n    pop {r4, pc}\n    cmp r4, #0x10\n    bne _0222A1DE\n    bl sub_02039B58\n    pop {r4, pc}\n    sub r4, #0x14\n    cmp r4, #1\n    bhi _0222A1F0\n    mov r0, #0\n    bl sub_020378E4\n    bl sub_02039E9C\n    pop {r4, pc}\n    mov r0, #1\n    bl sub_020378E4\n    bl sub_02039B7C\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222A1FC(void) {
    /* Original at 0x0222A1FC */
    /* Requires manual decompilation - 227 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    str r0, [sp, #4]\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _0222A3E8 ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _0222A3EC ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    mov r0, #4\n    mov r1, #8\n    bl SetKeyRepeatTimers\n    mov r0, #0x58\n    mov r1, #0x35\n    bl NARC_New\n    str r0, [sp, #0x20]\n    mov r0, #0x35\n    bl BgConfig_Alloc\n    mov r2, #0x57\n    ldr r1, [sp, #4]\n    lsl r2, r2, #2\n    str r0, [r1, r2]\n    mov r0, #0x35\n    bl MessageFormat_New\n    mov r2, #0x59\n    ldr r1, [sp, #4]\n    lsl r2, r2, #2\n    str r0, [r1, r2]\n    ldr r2, _0222A3F0 ; =0x0000030A\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x35\n    bl NewMsgDataFromNarc\n    mov r2, #0x5a\n    ldr r1, [sp, #4]\n    lsl r2, r2, #2\n    str r0, [r1, r2]\n    mov r2, #0x32\n    mov r0, #0\n    mov r1, #0x1b\n    lsl r2, r2, #4\n    mov r3, #0x35\n    bl NewMsgDataFromNarc\n    mov r2, #0x5b\n    ldr r1, [sp, #4]\n    lsl r2, r2, #2\n    str r0, [r1, r2]\n    bl ov44_0222A830\n    mov r1, #0x57\n    ldr r0, [sp, #4]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    bl ov44_0222A850\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0x20]\n    bl ov44_0222AEC0\n    mov r2, #0x33\n    ldr r1, _0222A3F4 ; =0x00000D68\n    ldr r0, [sp, #4]\n    lsl r2, r2, #4\n    add r0, r0, r1\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, [sp, #0x20]\n    mov r1, #5\n    add r2, sp, #0x2c\n    mov r3, #0x35\n    bl GfGfxLoader_GetPlttDataFromOpenNarc\n    add r4, r0, #0\n    ldr r0, [sp, #0x2c]\n    mov r2, #0xd7\n    ldr r1, [sp, #4]\n    lsl r2, r2, #4\n    add r1, r1, r2\n    ldr r0, [r0, #0xc]\n    mov r2, #0x80\n    bl MIi_CpuCopy16\n    ldr r0, [sp, #0x2c]\n    mov r2, #0xdf\n    ldr r1, [sp, #4]\n    lsl r2, r2, #4\n    add r1, r1, r2\n    ldr r0, [r0, #0xc]\n    mov r2, #0x80\n    bl MIi_CpuCopy16\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    mov r1, #0xdf\n    str r0, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #4]\n    lsl r1, r1, #4\n    add r0, r0, r1\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #4]\n    sub r1, #0x80\n    add r0, r0, r1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #1\n    lsl r1, r0, #5\n    ldr r0, [sp, #4]\n    add r0, r0, r1\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x18]\n    cmp r0, #0x15\n    blt _0222A316\n    bl GF_AssertFail\n    ldr r0, [sp, #0x24]\n    mov r7, #1\n    add r4, r0, #2\n    ldr r0, [sp, #0xc]\n    add r6, r0, #2\n    ldr r0, [sp, #8]\n    add r5, r0, #2\n    ldr r0, [sp, #0x14]\n    asr r0, r0, #8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x28]\n    mov r0, #0xd7\n    lsl r0, r0, #4\n    ldrh r0, [r4, r0]\n    ldr r3, [sp, #0x28]\n    add r1, r6, #0\n    str r0, [sp]\n    add r0, r5, #0\n    mov r2, #1\n    bl BlendPalette\n    add r7, r7, #1\n    add r4, r4, #2\n    add r6, r6, #2\n    add r5, r5, #2\n    cmp r7, #0x10\n    blt _0222A32E\n    ldr r0, [sp, #0xc]\n    add r0, #0x20\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    cmp r0, #1\n    beq _0222A37A\n    mov r0, #3\n    ldr r1, [sp, #0x14]\n    lsl r0, r0, #8\n    add r1, r1, r0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r1, [sp, #0x14]\n    cmp r1, r0\n    blt _0222A30C\n    str r0, [sp, #0x14]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    b _0222A30C\n    ldr r0, [sp, #8]\n    add r0, #0x20\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #1\n    str r0, [sp, #0x1c]\n    cmp r0, #3\n    blt _0222A2FA\n    mov r1, #0xdf\n    ldr r0, [sp, #4]\n    lsl r1, r1, #4\n    add r0, r0, r1\n    mov r1, #0x2a\n    lsl r1, r1, #4\n    bl DC_FlushRange\n    ldr r1, _0222A3F8 ; =0x00000D6C\n    ldr r0, [sp, #4]\n    mov r2, #1\n    str r2, [r0, r1]\n    ldr r2, _0222A3FC ; =0x00001094\n    mov r3, #0\n    str r3, [r0, r2]\n    sub r2, r1, #4\n    ldr r1, [sp, #4]\n    ldr r0, _0222A400 ; =ov44_0222A40C\n    add r1, r1, r2\n    mov r2, #0x14\n    bl SysTask_CreateOnVBlankQueue\n    ldr r2, _0222A3F4 ; =0x00000D68\n    ldr r1, [sp, #4]\n    str r0, [r1, r2]\n    ldr r0, _0222A404 ; =ov44_0222A7F8\n    bl Main_SetVBlankIntrCB\n    bl ov44_0222AFE8\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0x20]\n    bl ov44_0222B030\n    ldr r0, [sp, #4]\n    bl ov44_0222B0A4\n    ldr r0, _0222A408 ; =gSystem + 0x60\n    mov r1, #1\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    ldr r0, [sp, #0x20]\n    bl NARC_Delete\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222A3E8: .word 0xFFFFE0FF\n    _0222A3EC: .word 0x04001000\n    _0222A3F0: .word 0x0000030A\n    _0222A3F4: .word 0x00000D68\n    _0222A3F8: .word 0x00000D6C\n    _0222A3FC: .word 0x00001094\n    _0222A400: .word ov44_0222A40C\n    _0222A404: .word ov44_0222A7F8\n    _0222A408: .word gSystem + 0x60"
    );
    #endif
}

void ov44_0222A40C(void) {
    /* Original at 0x0222A40C */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _0222A4AA\n    ldr r1, _0222A4AC ; =0x0000032B\n    mov r0, #1\n    ldrb r2, [r4, r1]\n    eor r2, r0\n    strb r2, [r4, r1]\n    ldrb r2, [r4, r1]\n    tst r0, r2\n    bne _0222A4AA\n    add r0, r1, #1\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bhi _0222A442\n    sub r0, r1, #3\n    ldrsh r0, [r4, r0]\n    add r2, r4, #0\n    add r2, #0x88\n    lsl r0, r0, #5\n    add r0, r2, r0\n    mov r1, #0\n    mov r2, #0x20\n    bl GX_LoadBGPltt\n    mov r0, #0xcb\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222A450\n    cmp r0, #2\n    bne _0222A466\n    mov r0, #0xca\n    lsl r0, r0, #2\n    ldrsh r0, [r4, r0]\n    add r1, r4, #0\n    add r1, #0x88\n    lsl r0, r0, #5\n    add r0, r1, r0\n    mov r1, #0\n    mov r2, #0x20\n    bl GXS_LoadBGPltt\n    ldr r0, _0222A4B0 ; =0x0000032A\n    ldrsb r1, [r4, r0]\n    cmp r1, #0\n    bne _0222A48E\n    sub r1, r0, #2\n    ldrsh r1, [r4, r1]\n    add r2, r1, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsh r1, [r4, r1]\n    cmp r1, #0x15\n    blt _0222A4AA\n    mov r2, #0x13\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsb r2, [r4, r0]\n    mov r1, #1\n    eor r1, r2\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    sub r1, r0, #2\n    ldrsh r1, [r4, r1]\n    sub r2, r1, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsh r1, [r4, r1]\n    cmp r1, #0\n    bge _0222A4AA\n    mov r2, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsb r1, [r4, r0]\n    eor r1, r2\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    _0222A4AC: .word 0x0000032B\n    _0222A4B0: .word 0x0000032A"
    );
    #endif
}

void ov44_0222A4B4(void) {
    /* Original at 0x0222A4B4 */
    /* Requires manual decompilation - 136 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r1, #0\n    ldr r1, [r6]\n    add r5, r0, #0\n    cmp r1, #0\n    beq _0222A4CA\n    cmp r1, #1\n    bne _0222A4C8\n    b _0222A5F2\n    b _0222A600\n    bl OverlayManager_GetArgs\n    add r4, r0, #0\n    bl sub_02039998\n    cmp r0, #0\n    beq _0222A510\n    ldr r0, [r4, #4]\n    cmp r0, #0xc\n    bhi _0222A51A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222A4EA: ; jump table\n    mov r1, #0x80\n    mov r0, #3\n    lsl r2, r1, #9\n    bl Heap_Create\n    b _0222A51A\n    mov r1, #0x80\n    mov r0, #3\n    lsl r2, r1, #9\n    bl Heap_Create\n    ldr r0, _0222A608 ; =FS_OVERLAY_ID(OVY_42)\n    mov r1, #2\n    bl HandleLoadOverlay\n    ldr r0, [r4, #4]\n    cmp r0, #1\n    bne _0222A536\n    mov r2, #7\n    mov r0, #3\n    mov r1, #0x35\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    b _0222A542\n    mov r2, #0xa\n    mov r0, #3\n    mov r1, #0x35\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    mov r1, #0x43\n    add r0, r5, #0\n    lsl r1, r1, #6\n    mov r2, #0x35\n    bl OverlayManager_CreateAndGetData\n    mov r2, #0x43\n    mov r1, #0\n    lsl r2, r2, #6\n    add r5, r0, #0\n    bl MI_CpuFill8\n    mov r0, #0x20\n    mov r1, #0x35\n    bl GF_CreateVramTransferManager\n    mov r1, #6\n    mov r0, #8\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r2, [r4]\n    sub r0, #0x20\n    sub r1, #0x20\n    str r2, [r5, r0]\n    ldr r0, [r5, r1]\n    bl sub_0202C6F4\n    str r0, [r5]\n    mov r1, #0xd5\n    ldr r0, [r4, #4]\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    mov r2, #8\n    sub r0, #8\n    str r2, [r5, r0]\n    sub r2, #9\n    add r1, #0x1c\n    str r2, [r5, r1]\n    mov r0, #0xf\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0xf\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r5, #0\n    bl ov44_0222ADF8\n    add r0, r5, #0\n    bl ov44_0222A1FC\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x35\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    bl sub_02039998\n    cmp r0, #0\n    beq _0222A5D2\n    bl sub_0203A880\n    b _0222A5DC\n    bl LoadDwcOverlay\n    mov r0, #0x35\n    bl sub_02039FD8\n    mov r0, #4\n    bl sub_02021148\n    cmp r0, #1\n    beq _0222A5EA\n    bl GF_AssertFail\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _0222A600\n    bl OverlayManager_GetData\n    mov r0, #0\n    str r0, [r6]\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0222A608: .word FS_OVERLAY_ID(OVY_42)"
    );
    #endif
}

void ov44_0222A60C(void) {
    /* Original at 0x0222A60C */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #0\n    beq _0222A626\n    cmp r1, #1\n    beq _0222A634\n    cmp r1, #2\n    beq _0222A64E\n    b _0222A65A\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0222A65A\n    mov r0, #1\n    str r0, [r5]\n    b _0222A65A\n    mov r2, #0xd2\n    lsl r2, r2, #2\n    ldr r2, [r4, r2]\n    ldr r3, _0222A684 ; =ov44_0223676C\n    lsl r6, r2, #2\n    ldr r6, [r3, r6]\n    cmp r6, #0\n    beq _0222A65A\n    ldr r3, _0222A688 ; =_022368A0\n    str r2, [r3]\n    blx r6\n    str r0, [r5]\n    b _0222A65A\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0222A65A\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222A668\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov44_02231BB0\n    cmp r0, #1\n    bne _0222A680\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov44_02231C60\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _0222A684: .word ov44_0223676C\n    _0222A688: .word _022368A0"
    );
    #endif
}

void ov44_0222A68C(void) {
    /* Original at 0x0222A68C */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    ldr r0, _0222A74C ; =0x00000D68\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222A6AE\n    bl SysTask_Destroy\n    ldr r0, _0222A74C ; =0x00000D68\n    mov r1, #0\n    str r1, [r5, r0]\n    add r0, r0, #4\n    str r1, [r5, r0]\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02231BB0\n    cmp r0, #1\n    bne _0222A6C6\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02231B4C\n    add r0, r5, #0\n    bl ov44_0222F98C\n    cmp r0, #1\n    bne _0222A6D6\n    add r0, r5, #0\n    bl ov44_0222FA28\n    ldr r0, _0222A750 ; =0x00000B0C\n    add r0, r5, r0\n    bl ov44_0222ABB8\n    mov r0, #0xb3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_020135AC\n    mov r7, #0xaf\n    mov r6, #0\n    add r4, r5, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    bl Destroy2DGfxResObjMan\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #4\n    blt _0222A6F0\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl SpriteList_Delete\n    bl OamManager_Free\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    add r0, r5, #0\n    bl ov44_0222B164\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ov44_0222AE74\n    mov r0, #0x5b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl DestroyMsgData\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl DestroyMsgData\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl MessageFormat_Delete\n    ldr r0, _0222A754 ; =FS_OVERLAY_ID(OVY_42)\n    bl UnloadOverlayByID\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222A74C: .word 0x00000D68\n    _0222A750: .word 0x00000B0C\n    _0222A754: .word FS_OVERLAY_ID(OVY_42)"
    );
    #endif
}

void ov44_0222A758(void) {
    /* Original at 0x0222A758 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl ov44_0222A68C\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    add r6, r0, #0\n    mov r0, #0xd3\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    str r1, [r6, #4]\n    ldr r0, [r4, r0]\n    cmp r0, #8\n    beq _0222A780\n    cmp r0, #0xa\n    bne _0222A78C\n    bl UnloadDwcOverlay\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    b _0222A792\n    bl ov00_021E6EBC\n    str r0, [r6, #8]\n    add r0, r4, #0\n    bl ov44_0222AE44\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    bl sub_02021238\n    bl GF_DestroyVramTransferManager\n    mov r0, #0x35\n    bl Heap_Destroy\n    mov r0, #0xd3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0xc\n    bhi _0222A7E2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222A7C2: ; jump table\n    mov r0, #0x80\n    bl Heap_Destroy\n    bl ov44_0222E074\n    cmp r0, #1\n    bne _0222A7F2\n    mov r0, #0\n    mov r1, #0x78\n    bl GF_SndHandleSetInitialVolume\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov44_0222A7F8(void) {
    /* Original at 0x0222A7F8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl DoScheduledBgGpuUpdates\n    bl GF_RunVramTransferTasks\n    bl OamManager_ApplyAndResetBuffers\n    ldr r0, _0222A82C ; =0x000010BC\n    ldrh r0, [r4, r0]\n    cmp r0, #1\n    bne _0222A828\n    mov r0, #0\n    bl SetMasterBrightnessNeutral\n    mov r0, #1\n    bl SetMasterBrightnessNeutral\n    ldr r0, _0222A82C ; =0x000010BC\n    mov r1, #0\n    strh r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _0222A82C: .word 0x000010BC"
    );
    #endif
}

void ov44_0222A830(void) {
    GfGfx_SetBanks(5);
}

void ov44_0222A850(void) {
    /* Original at 0x0222A850 */
    /* Requires manual decompilation - 246 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0xf0\n    ldr r5, _0222AA68 ; =ov44_022353B0\n    add r3, sp, #0xe0\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _0222AA6C ; =ov44_022353E8\n    add r3, sp, #0xc4\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x35\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0222AA70 ; =ov44_02235404\n    add r3, sp, #0xa8\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x35\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0222AA74 ; =ov44_02235490\n    add r3, sp, #0x8c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #2\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x35\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0222AA78 ; =ov44_02235420\n    add r3, sp, #0x70\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #3\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x35\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0222AA7C ; =ov44_0223543C\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0222AA80 ; =ov44_02235458\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0222AA84 ; =ov44_02235474\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #6\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #6\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0222AA88 ; =ov44_022354AC\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #7\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x35\n    bl BG_ClearCharDataRange\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x35\n    bl BG_ClearCharDataRange\n    mov r0, #2\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x35\n    bl BG_ClearCharDataRange\n    mov r0, #3\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x35\n    bl BG_ClearCharDataRange\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x35\n    bl BG_ClearCharDataRange\n    mov r0, #5\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x35\n    bl BG_ClearCharDataRange\n    mov r0, #6\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x35\n    bl BG_ClearCharDataRange\n    mov r0, #7\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x35\n    bl BG_ClearCharDataRange\n    mov r0, #0\n    mov r1, #3\n    bl SetBgPriority\n    mov r0, #1\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #3\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #2\n    mov r1, #0\n    bl SetBgPriority\n    ldr r0, _0222AA8C ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    ldr r0, _0222AA90 ; =0x04001050\n    strh r1, [r0]\n    add sp, #0xf0\n    pop {r3, r4, r5, pc}\n    _0222AA68: .word ov44_022353B0\n    _0222AA6C: .word ov44_022353E8\n    _0222AA70: .word ov44_02235404\n    _0222AA74: .word ov44_02235490\n    _0222AA78: .word ov44_02235420\n    _0222AA7C: .word ov44_0223543C\n    _0222AA80: .word ov44_02235458\n    _0222AA84: .word ov44_02235474\n    _0222AA88: .word ov44_022354AC\n    _0222AA8C: .word 0x04000050\n    _0222AA90: .word 0x04001050"
    );
    #endif
}

void ov44_0222AA94(void) {
    /* Original at 0x0222AA94 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r2, _0222AABC ; =0x00000A88\n    mov r4, #0\n    add r5, r0, #0\n    ldr r3, [r5, r2]\n    cmp r3, #0\n    bne _0222AAAC\n    lsl r2, r4, #2\n    add r2, r0, r2\n    ldr r0, _0222AABC ; =0x00000A88\n    str r1, [r2, r0]\n    pop {r3, r4, r5, pc}\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x21\n    blt _0222AA9C\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}\n    nop\n    _0222AABC: .word 0x00000A88"
    );
    #endif
}

void ov44_0222AAC0(void) {
    /* Original at 0x0222AAC0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r2, _0222AAE8 ; =0x00000A88\n    mov r4, #0\n    add r5, r0, #0\n    ldr r3, [r5, r2]\n    cmp r3, r1\n    bne _0222AADA\n    lsl r1, r4, #2\n    add r1, r0, r1\n    ldr r0, _0222AAE8 ; =0x00000A88\n    mov r2, #0\n    str r2, [r1, r0]\n    pop {r3, r4, r5, pc}\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x21\n    blt _0222AAC8\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}\n    _0222AAE8: .word 0x00000A88"
    );
    #endif
}

void ov44_0222AAEC(void) {
    /* Original at 0x0222AAEC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r7, _0222AB20 ; =0x00000A88\n    str r0, [sp]\n    add r6, r1, #0\n    mov r4, #0\n    add r5, r0, #0\n    ldr r0, [r5, r7]\n    cmp r0, #0\n    beq _0222AB12\n    bl ov44_02231EF4\n    cmp r6, r0\n    bne _0222AB12\n    ldr r0, [sp]\n    lsl r1, r4, #2\n    add r1, r0, r1\n    ldr r0, _0222AB20 ; =0x00000A88\n    ldr r0, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x21\n    blt _0222AAF8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222AB20: .word 0x00000A88"
    );
    #endif
}

void ov44_0222AB24(void) {
    /* Original at 0x0222AB24 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r0, #0\n    add r6, r2, #0\n    add r4, r3, #0\n    mov r0, #0x40\n    str r0, [sp]\n    mov r3, #0xe\n    add r5, r1, #0\n    add r1, r3, #0\n    add r0, r6, #0\n    mov r2, #0\n    add r3, #0xf2\n    str r4, [sp, #4]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0x40\n    str r0, [sp]\n    mov r3, #0x1a\n    add r0, r6, #0\n    mov r1, #0xe\n    mov r2, #4\n    lsl r3, r3, #4\n    str r4, [sp, #4]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r6, #0\n    mov r1, #0xd\n    add r2, r7, #0\n    mov r3, #1\n    str r4, [sp, #0xc]\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #0xd\n    add r2, r7, #0\n    mov r3, #6\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    bne _0222AB9C\n    add r3, r5, #0\n    add r0, r6, #0\n    mov r1, #0xd\n    mov r2, #0\n    add r3, #0xc\n    str r4, [sp]\n    bl GfGfxLoader_GetCharDataFromOpenNarc\n    str r0, [r5, #8]\n    ldr r0, [r5]\n    cmp r0, #0\n    bne _0222ABB2\n    add r0, r6, #0\n    mov r1, #0xf\n    mov r2, #0\n    add r3, r5, #4\n    str r4, [sp]\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    str r0, [r5]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_0222ABB8(void) {
    /* Original at 0x0222ABB8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0222ABCA\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0222ABD8\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4, #8]\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222ABDC(void) {
    /* Original at 0x0222ABDC */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x1c\n    ldr r1, [r1, #4]\n    add r4, r2, #0\n    mov r2, #2\n    str r2, [sp]\n    str r2, [sp, #4]\n    add r2, r1, #0\n    add r2, #0xc\n    str r2, [sp, #8]\n    ldr r2, [sp, #0x34]\n    add r6, r3, #0\n    lsl r2, r2, #0x19\n    lsr r2, r2, #0x18\n    str r2, [sp, #0xc]\n    mov r2, #0\n    str r2, [sp, #0x10]\n    ldrh r2, [r1]\n    add r3, sp, #0x20\n    add r5, r0, #0\n    lsl r2, r2, #0x15\n    lsr r2, r2, #0x18\n    str r2, [sp, #0x14]\n    ldrh r1, [r1, #2]\n    add r2, r6, #0\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x18]\n    lsl r1, r4, #0x18\n    ldrb r3, [r3, #0x10]\n    lsr r1, r1, #0x18\n    bl CopyToBgTilemapRect\n    add r0, r4, #0\n    bl ov44_0222ADC4\n    mov r1, #2\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r1, [sp, #0x38]\n    add r3, sp, #0x20\n    add r0, r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    lsl r1, r4, #0x18\n    ldrb r3, [r3, #0x10]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    add r2, r6, #0\n    bl BgTilemapRectChangePalette\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov44_0222AC54(void) {
    /* Original at 0x0222AC54 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    ldr r5, [sp, #0x24]\n    mov r4, #0\n    cmp r5, #0x1d\n    bhi _0222ACD4\n    add r5, r5, r5\n    add r5, pc\n    ldrh r5, [r5, #6]\n    lsl r5, r5, #0x10\n    asr r5, r5, #0x10\n    add pc, r5\n    _0222AC6C: ; jump table\n    mov r5, #3\n    b _0222ACD6\n    mov r4, #1\n    mov r5, #6\n    b _0222ACD6\n    mov r4, #1\n    mov r5, #7\n    b _0222ACD6\n    mov r4, #1\n    mov r5, #0xa\n    b _0222ACD6\n    mov r5, #5\n    b _0222ACD6\n    mov r4, #1\n    mov r5, #0xb\n    b _0222ACD6\n    mov r5, #4\n    b _0222ACD6\n    mov r5, #8\n    b _0222ACD6\n    mov r5, #5\n    b _0222ACD6\n    mov r5, #5\n    add r6, sp, #0x10\n    ldrb r6, [r6, #0x10]\n    str r6, [sp]\n    str r5, [sp, #4]\n    str r4, [sp, #8]\n    bl ov44_0222ABDC\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov44_0222ACE8(void) {
    /* Original at 0x0222ACE8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    ldr r1, [r1, #0xc]\n    add r4, r0, #0\n    ldrh r5, [r1, #2]\n    lsl r5, r5, #0x13\n    lsr r5, r5, #0x10\n    str r5, [sp]\n    ldrh r5, [r1]\n    lsl r5, r5, #0x13\n    lsr r5, r5, #0x10\n    str r5, [sp, #4]\n    str r2, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r2, #0x10\n    str r2, [sp, #0x10]\n    str r2, [sp, #0x14]\n    ldr r2, [sp, #0x28]\n    ldr r1, [r1, #0x14]\n    lsl r2, r2, #0x14\n    lsr r2, r2, #0x10\n    mov r3, #0\n    bl BlitBitmapRectToWindow\n    ldrb r0, [r4, #4]\n    bl ov44_0222ADC4\n    add r2, r0, #0\n    ldr r1, [sp, #0x2c]\n    add r0, r4, #0\n    add r1, r2, r1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl SetWindowPaletteNum\n    add sp, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222AD34(void) {
    /* Original at 0x0222AD34 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    ldr r5, [sp, #0x18]\n    mov r4, #0\n    cmp r5, #0x1d\n    bhi _0222ADB4\n    add r5, r5, r5\n    add r5, pc\n    ldrh r5, [r5, #6]\n    lsl r5, r5, #0x10\n    asr r5, r5, #0x10\n    add pc, r5\n    _0222AD4C: ; jump table\n    mov r5, #3\n    b _0222ADB6\n    mov r4, #1\n    mov r5, #6\n    b _0222ADB6\n    mov r4, #1\n    mov r5, #7\n    b _0222ADB6\n    mov r4, #1\n    mov r5, #0xa\n    b _0222ADB6\n    mov r5, #5\n    b _0222ADB6\n    mov r4, #1\n    mov r5, #0xb\n    b _0222ADB6\n    mov r5, #4\n    b _0222ADB6\n    mov r5, #8\n    b _0222ADB6\n    mov r5, #5\n    b _0222ADB6\n    mov r5, #5\n    str r5, [sp]\n    str r4, [sp, #4]\n    bl ov44_0222ACE8\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222ADC4(void) {
    /* Original at 0x0222ADC4 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #4\n    bhs _0222ADCC\n    mov r0, #8\n    bx lr\n    mov r0, #0xd\n    bx lr"
    );
    #endif
}

void ov44_0222ADD0(void) {
    /* Original at 0x0222ADD0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x35\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    bl ov44_0222E030\n    mov r0, #0x12\n    add sp, #0xc\n    pop {pc}"
    );
    #endif
}

void ov44_0222ADF8(void) {
    /* Original at 0x0222ADF8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x5f\n    lsl r0, r0, #2\n    mov r1, #0x35\n    bl String_New\n    mov r1, #0x5d\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r1, #8\n    add r0, r1, #0\n    mov r1, #0x35\n    bl String_New\n    mov r1, #0x5f\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #0\n    mov r1, #0x35\n    bl String_New\n    mov r1, #0x17\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    mov r0, #0xb4\n    mov r1, #0x35\n    bl String_New\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0xd2\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222AE44(void) {
    /* Original at 0x0222AE44 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl String_Delete\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl String_Delete\n    mov r0, #0x5f\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl String_Delete\n    mov r0, #0x17\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl String_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222AE74(void) {
    /* Original at 0x0222AE74 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #0\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222AEC0(void) {
    /* Original at 0x0222AEC0 */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r4, [r6, r0]\n    mov r0, #1\n    add r5, r1, #0\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #8\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x35\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x35\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #4\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x35\n    bl LoadFontPal1\n    mov r1, #6\n    mov r0, #0\n    lsl r1, r1, #6\n    mov r2, #0x35\n    bl LoadFontPal1\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #0x35\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #2\n    add r2, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #0x35\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x35\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #0xb\n    add r2, r4, #0\n    mov r3, #4\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x35\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #0xc\n    add r2, r4, #0\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    bl Save_PlayerData_GetOptionsAddr\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x35\n    str r0, [sp, #4]\n    ldr r2, _0222AFE0 ; =0x000001E2\n    add r0, r4, #0\n    mov r1, #2\n    mov r3, #0xa\n    bl LoadUserFrameGfx2\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x35\n    str r0, [sp, #4]\n    ldr r2, _0222AFE4 ; =0x000001D9\n    add r0, r4, #0\n    mov r1, #2\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x35\n    str r0, [sp, #4]\n    ldr r2, _0222AFE4 ; =0x000001D9\n    add r0, r4, #0\n    mov r1, #1\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _0222AFE0: .word 0x000001E2\n    _0222AFE4: .word 0x000001D9"
    );
    #endif
}

void ov44_0222AFE8(void) {
    /* Original at 0x0222AFE8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _0222B028 ; =ov44_022353C0\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    ldr r1, _0222B02C ; =0x00200010\n    mov r2, #0x10\n    bl ObjCharTransfer_InitEx\n    mov r0, #0x14\n    mov r1, #0x35\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    ldr r1, _0222B02C ; =0x00200010\n    mov r0, #1\n    bl G2dRenderer_SetObjCharTransferReservedRegion\n    mov r0, #1\n    bl G2dRenderer_SetPlttTransferReservedRegion\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _0222B028: .word ov44_022353C0\n    _0222B02C: .word 0x00200010"
    );
    #endif
}

void ov44_0222B030(void) {
    /* Original at 0x0222B030 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x20\n    str r3, [sp, #0xc]\n    mov r2, #0x35\n    str r2, [sp, #0x10]\n    add r2, r0, #0\n    bl OamManager_Create\n    mov r1, #0x65\n    lsl r1, r1, #2\n    mov r0, #8\n    add r1, r6, r1\n    mov r2, #0x35\n    bl G2dRenderer_Init\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [r6, r1]\n    add r0, r1, #4\n    mov r2, #1\n    add r0, r6, r0\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r7, #0xaf\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #2\n    mov r0, #1\n    add r1, r4, #0\n    mov r2, #0x35\n    bl Create2DGfxResObjMan\n    str r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0222B07C\n    mov r0, #1\n    mov r1, #0x35\n    bl FontSystem_NewInit\n    mov r1, #0xb3\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_0222B0A4(void) {
    GfGfx_EngineATogglePlanes();
}

void ov44_0222B0B0(void) {
    /* Original at 0x0222B0B0 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222B0DA\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl sub_0200E5D4\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x16\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    ldr r0, _0222B15C ; =0x000001CA\n    mov r1, #0x2f\n    str r0, [sp, #0x10]\n    sub r0, #0x6e\n    lsl r1, r1, #4\n    ldr r0, [r4, r0]\n    add r1, r4, r1\n    mov r2, #3\n    mov r3, #5\n    bl AddWindowParameterized\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r4, r2]\n    add r2, #0x10\n    ldr r2, [r4, r2]\n    mov r1, #0x15\n    bl ReadMsgDataIntoString\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    mov r0, #0\n    ldr r1, [r4, r1]\n    add r2, r0, #0\n    mov r3, #0xb0\n    bl FontID_String_GetCenterAlignmentX\n    mov r1, #0\n    add r3, r0, #0\n    mov r2, #0x2f\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0222B160 ; =0x000F0E00\n    lsl r2, r2, #4\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r4, r2\n    lsr r2, r2, #1\n    ldr r2, [r4, r2]\n    mov r1, #1\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r3, r4, pc}\n    nop\n    _0222B15C: .word 0x000001CA\n    _0222B160: .word 0x000F0E00"
    );
    #endif
}

void ov44_0222B164(void) {
    /* Original at 0x0222B164 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov44_0222F7BC\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222B184\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222B19C\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #0x33\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222B1B4\n    mov r0, #0x33\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222B1CC\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #0x31\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222B1E4\n    mov r0, #0x31\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #0x15\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222B1F6\n    mov r1, #0\n    add r2, r1, #0\n    bl DestroyListMenu\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222B20C\n    bl ListMenuItems_Delete\n    mov r0, #0x53\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222B224\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222B228(void) {
    /* Original at 0x0222B228 */
    /* Requires manual decompilation - 134 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02039998\n    cmp r0, #0\n    beq _0222B2CA\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    bl sub_020398C8\n    str r0, [r5, #4]\n    ldr r1, [r5, #4]\n    add r0, r5, #0\n    bl ov44_02229F00\n    cmp r0, #8\n    beq _0222B278\n    cmp r0, #0x12\n    beq _0222B278\n    cmp r0, #0x14\n    beq _0222B278\n    cmp r0, #0x16\n    beq _0222B278\n    cmp r0, #0x17\n    beq _0222B278\n    cmp r0, #0x18\n    beq _0222B278\n    cmp r0, #0x19\n    beq _0222B278\n    cmp r0, #0x1a\n    beq _0222B278\n    cmp r0, #0x1b\n    beq _0222B278\n    cmp r0, #0x13\n    bne _0222B2A8\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    bl sub_020343E4\n    bl sub_02039378\n    bl sub_020398C8\n    add r1, r0, #0\n    str r0, [r5, #4]\n    add r1, #0x22\n    ldrb r1, [r1]\n    add r0, #0x21\n    strb r1, [r0]\n    mov r0, #0xd7\n    mov r1, #0x14\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0x41\n    sub r0, #0x14\n    str r1, [r5, r0]\n    b _0222B360\n    add r0, r5, #0\n    mov r1, #0x4d\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #1\n    add r1, r0, #0\n    bl sub_020398D4\n    mov r0, #0x10\n    bl sub_02037AC0\n    mov r0, #0xd2\n    mov r1, #0x3d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222B360\n    ldr r1, _0222B364 ; =0x0000047D\n    mov r0, #0xb\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    add r0, r5, #0\n    bl ov44_0222B0B0\n    ldr r0, [r5]\n    bl sub_0202C08C\n    bl DWC_CheckHasProfile\n    cmp r0, #0\n    bne _0222B32E\n    mov r0, #0\n    mov r1, #3\n    bl SetBgPriority\n    mov r0, #1\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #3\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #2\n    mov r1, #1\n    bl SetBgPriority\n    add r0, r5, #0\n    mov r1, #0x12\n    bl ov44_0222F66C\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, _0222B368 ; =ov44_02235384\n    mov r2, #0\n    bl ov44_02231A28\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0xd2\n    mov r1, #6\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222B360\n    ldr r0, [r5]\n    bl sub_0202C08C\n    bl DWC_CheckValidConsole\n    cmp r0, #0\n    bne _0222B34E\n    add r0, r5, #0\n    mov r1, #0x14\n    bl ov44_0222F66C\n    mov r0, #0xd2\n    mov r1, #3\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222B360\n    add r0, r5, #0\n    mov r1, #0x11\n    mov r2, #1\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222B364: .word 0x0000047D\n    _0222B368: .word ov44_02235384"
    );
    #endif
}

void ov44_0222B36C(void) {
    /* Original at 0x0222B36C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222B3A0\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, _0222B3A4 ; =ov44_0223537C\n    mov r2, #0\n    bl ov44_02231A28\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0xd2\n    mov r1, #2\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222B3A4: .word ov44_0223537C"
    );
    #endif
}

void ov44_0222B3A8(void) {
    /* Original at 0x0222B3A8 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    bne _0222B408\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r1, _0222B428 ; =0x000004A4\n    bl sub_020396FC\n    str r0, [r5, #4]\n    add r0, r5, #0\n    mov r1, #0x17\n    mov r2, #1\n    bl ov44_0222F510\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222B3EC\n    bl GF_AssertFail\n    mov r1, #0x2d\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0xee\n    bl WaitingIcon_New\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0xd2\n    mov r1, #0xe\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222B424\n    cmp r0, #2\n    bne _0222B420\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #0xd2\n    mov r1, #0x22\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222B424\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222B428: .word 0x000004A4"
    );
    #endif
}

void ov44_0222B42C(void) {
    /* Original at 0x0222B42C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0222B48C ; =gSystem\n    add r4, r1, #0\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _0222B444\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0222B488\n    add r0, r5, #0\n    mov r1, #0x15\n    bl ov44_0222F66C\n    mov r0, #3\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #2\n    mov r1, #1\n    bl SetBgPriority\n    mov r0, #1\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #0\n    mov r1, #3\n    bl SetBgPriority\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, _0222B490 ; =ov44_02235384\n    mov r2, #1\n    bl ov44_02231A28\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0xd2\n    mov r1, #4\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222B48C: .word gSystem\n    _0222B490: .word ov44_02235384"
    );
    #endif
}

void ov44_0222B494(void) {
    /* Original at 0x0222B494 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    bne _0222B4EE\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl RemoveWindow\n    add r0, r5, #0\n    mov r1, #0x16\n    bl ov44_0222F66C\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, _0222B524 ; =ov44_02235384\n    mov r2, #1\n    bl ov44_02231A28\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0xd2\n    mov r1, #5\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222B520\n    cmp r0, #2\n    bne _0222B51C\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0xd2\n    mov r1, #0x22\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222B520\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222B524: .word ov44_02235384"
    );
    #endif
}

void ov44_0222B528(void) {
    /* Original at 0x0222B528 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    bne _0222B5EA\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #3\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #2\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #1\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #0\n    mov r1, #3\n    bl SetBgPriority\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl RemoveWindow\n    ldr r0, [r5]\n    bl sub_0202C03C\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x1f\n    bl SaveArray_Get\n    bl sub_02031710\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl Save_Frontier_GetStatic\n    bl sub_02031188\n    mov r0, #0xd2\n    mov r1, #0xe\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r1, _0222B648 ; =0x000004A4\n    bl sub_020396FC\n    str r0, [r5, #4]\n    add r0, r5, #0\n    mov r1, #0x17\n    mov r2, #1\n    bl ov44_0222F510\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222B5CE\n    bl GF_AssertFail\n    mov r1, #0x2d\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0xee\n    bl WaitingIcon_New\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0xda\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222B644\n    cmp r0, #2\n    bne _0222B640\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #3\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #2\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #1\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #0\n    mov r1, #3\n    bl SetBgPriority\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl RemoveWindow\n    add r0, r5, #0\n    mov r1, #0x14\n    bl ov44_0222F66C\n    mov r0, #0xd2\n    mov r1, #3\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222B644\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222B648: .word 0x000004A4"
    );
    #endif
}

void ov44_0222B64C(void) {
    /* Original at 0x0222B64C */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    bne _0222B6EA\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #0\n    mov r1, #3\n    bl SetBgPriority\n    mov r0, #1\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #3\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #2\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0xd2\n    mov r1, #0xe\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r1, _0222B740 ; =0x000004A4\n    bl sub_020396FC\n    str r0, [r5, #4]\n    add r0, r5, #0\n    mov r1, #0x17\n    mov r2, #1\n    bl ov44_0222F510\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222B6CE\n    bl GF_AssertFail\n    mov r1, #0x2d\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0xee\n    bl WaitingIcon_New\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0xda\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222B73C\n    cmp r0, #2\n    bne _0222B738\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #0\n    mov r1, #3\n    bl SetBgPriority\n    mov r0, #1\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #3\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #2\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0xd2\n    mov r1, #0x22\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222B73C\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222B740: .word 0x000004A4"
    );
    #endif
}

void ov44_0222B744(void) {
    /* Original at 0x0222B744 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0\n    mov r1, #3\n    bl SetBgPriority\n    mov r0, #1\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #3\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #2\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #0xd2\n    mov r1, #0xf\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222B778(void) {
    /* Original at 0x0222B778 */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    str r1, [sp]\n    bl Save_PlayerData_GetProfile\n    str r0, [sp, #0x14]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl Save_Pokedex_Get\n    str r0, [sp, #0x10]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl SaveArray_Party_Get\n    str r0, [sp, #0xc]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl Save_WiFiHistory_Get\n    str r0, [sp, #8]\n    ldr r0, [sp, #0xc]\n    bl Party_GetCount\n    mov r6, #0\n    str r0, [sp, #4]\n    cmp r0, #0\n    ble _0222B7F0\n    add r4, r6, #0\n    ldr r0, [sp, #0xc]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #5\n    mov r2, #0\n    add r7, r0, #0\n    bl GetMonData\n    ldr r1, [r5, #4]\n    mov r2, #0\n    strh r0, [r1, r4]\n    add r0, r7, #0\n    mov r1, #6\n    bl GetMonData\n    ldr r1, [r5, #4]\n    add r6, r6, #1\n    add r1, r1, r4\n    strh r0, [r1, #0xc]\n    ldr r0, [sp, #4]\n    add r4, r4, #2\n    cmp r6, r0\n    blt _0222B7C0\n    ldr r0, [sp, #0x14]\n    bl PlayerProfile_GetVersion\n    ldr r1, [r5, #4]\n    strb r0, [r1, #0x18]\n    ldr r0, [sp, #0x14]\n    bl PlayerProfile_GetLanguage\n    ldr r1, [r5, #4]\n    strb r0, [r1, #0x19]\n    ldr r0, [sp, #0x10]\n    bl Pokedex_GetNatDexFlag\n    ldr r1, [r5, #4]\n    strb r0, [r1, #0x1a]\n    ldr r0, [r5, #4]\n    mov r1, #0x1d\n    strb r1, [r0, #0x1b]\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl ov44_0222F830\n    ldr r0, [r5, #4]\n    mov r1, #0\n    strb r1, [r0, #0x1c]\n    ldr r0, [sp, #0x14]\n    bl PlayerProfile_GetAvatar\n    ldr r1, [r5, #4]\n    strb r0, [r1, #0x1d]\n    ldr r0, [sp, #0x14]\n    bl PlayerProfile_GetTrainerGender\n    ldr r1, [r5, #4]\n    strb r0, [r1, #0x1e]\n    ldr r0, [sp, #8]\n    bl WifiHistory_GetPlayerCountry\n    ldr r1, [r5, #4]\n    strb r0, [r1, #0x1f]\n    ldr r0, [sp, #8]\n    bl WiFiHistory_GetPlayerRegion\n    ldr r1, [r5, #4]\n    add r1, #0x20\n    strb r0, [r1]\n    ldr r0, [r5, #4]\n    mov r1, #1\n    add r0, #0x21\n    strb r1, [r0]\n    ldr r0, [r5, #4]\n    add r0, #0x22\n    strb r1, [r0]\n    ldr r0, [r5, #4]\n    mov r1, #0x24\n    bl ov00_021E6D60\n    ldr r0, [r5, #4]\n    mov r1, #0x24\n    add r0, #0x24\n    bl ov00_021E6CCC\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_0222B870(void) {
    /* Original at 0x0222B870 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r6, #0\n    add r5, r0, #0\n    add r4, r6, #0\n    add r1, r5, r4\n    mov r0, #0\n    strb r0, [r1, #0xc]\n    ldr r0, _0222B8DC ; =0x000010BE\n    ldrh r0, [r5, r0]\n    cmp r0, r4\n    ble _0222B8D2\n    add r0, r4, #0\n    bl ov44_02231974\n    cmp r0, #0\n    beq _0222B8D2\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_02231958\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov44_02229F00\n    cmp r0, #0\n    beq _0222B8BA\n    cmp r0, #0x1c\n    beq _0222B8BA\n    ldrb r1, [r7, #0x1d]\n    cmp r1, #0\n    beq _0222B8BA\n    add r0, r5, r6\n    add r1, r4, #1\n    strb r1, [r0, #0xc]\n    add r6, r6, #1\n    b _0222B8D2\n    cmp r0, #0x1c\n    bne _0222B8D2\n    add r0, r5, #0\n    add r1, r4, #1\n    bl ov44_02230048\n    cmp r0, #0\n    beq _0222B8D2\n    add r0, r5, #0\n    add r1, r4, #1\n    bl ov44_02230028\n    add r4, r4, #1\n    cmp r4, #0x20\n    blt _0222B878\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222B8DC: .word 0x000010BE"
    );
    #endif
}

void ov44_0222B8E0(void) {
    /* Original at 0x0222B8E0 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r4, #0\n    str r4, [sp, #0xc]\n    add r6, r5, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_02231958\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov44_02229F00\n    ldr r1, [r6, #0x4c]\n    str r0, [sp]\n    cmp r0, r1\n    bne _0222B916\n    add r0, r7, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    add r0, r6, #0\n    add r0, #0xcc\n    ldr r0, [r0]\n    cmp r1, r0\n    beq _0222B992\n    add r0, r5, #0\n    add r1, r4, #1\n    bl ov44_0222AAEC\n    str r0, [sp, #4]\n    cmp r0, #0\n    beq _0222B992\n    ldr r0, [r6, #0x4c]\n    bl ov44_02229FDC\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    bl ov44_02229FDC\n    ldr r1, [sp, #8]\n    cmp r1, #1\n    bne _0222B94C\n    cmp r0, #0\n    bne _0222B94C\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r1, [sp, #4]\n    add r0, r5, r0\n    mov r2, #0\n    bl ov44_02231FA8\n    b _0222B964\n    ldr r1, [sp, #8]\n    cmp r1, #0\n    bne _0222B964\n    cmp r0, #1\n    bne _0222B964\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r1, [sp, #4]\n    add r0, r5, r0\n    mov r2, #1\n    bl ov44_02231FA8\n    ldr r0, [sp]\n    mov r2, #7\n    str r0, [r6, #0x4c]\n    add r0, r7, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    add r0, r6, #0\n    add r0, #0xcc\n    str r1, [r0]\n    ldrb r3, [r7, #0x1d]\n    ldr r0, [r5]\n    add r1, r4, #0\n    bl sub_0202C190\n    ldrb r3, [r7, #0x1e]\n    ldr r0, [r5]\n    add r1, r4, #0\n    mov r2, #8\n    bl sub_0202C190\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #0x20\n    blt _0222B8EC\n    ldr r0, [sp, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_0222B9A0(void) {
    /* Original at 0x0222B9A0 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl sub_020392D8\n    add r7, r0, #0\n    ldr r6, [r7]\n    ldr r1, [r7, #4]\n    add r0, r6, #0\n    bl ov00_021E6A70\n    add r5, r0, #0\n    cmp r5, #0xb\n    beq _0222B9C0\n    cmp r6, #0x19\n    bne _0222B9D0\n    ldr r0, [r7, #4]\n    cmp r0, #2\n    beq _0222B9CA\n    mov r7, #0xe\n    b _0222B9CC\n    mov r7, #0xb\n    mov r5, #0xb\n    b _0222B9E4\n    cmp r6, #0x1a\n    bne _0222B9DA\n    mov r7, #0xd\n    mov r5, #0xc\n    b _0222B9E4\n    cmp r5, #0\n    blt _0222B9E2\n    add r7, r5, #0\n    b _0222B9E4\n    mov r7, #0xb\n    add r0, r4, #0\n    bl ov44_0222F7BC\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    add r2, r6, #0\n    mov r3, #5\n    bl BufferIntegerAsString\n    mov r0, #0xd7\n    mov r1, #0x1e\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov44_0222F66C\n    cmp r5, #0xb\n    bhi _0222BA5E\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222BA22: ; jump table\n    mov r0, #0xd2\n    mov r1, #0xa\n    lsl r0, r0, #2\n    add sp, #8\n    str r1, [r4, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xd2\n    mov r1, #0xa\n    lsl r0, r0, #2\n    add sp, #8\n    str r1, [r4, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xd2\n    mov r1, #0xa\n    lsl r0, r0, #2\n    add sp, #8\n    str r1, [r4, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xd2\n    mov r1, #0x23\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_0222BA6C(void) {
    /* Original at 0x0222BA6C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0222BAB4 ; =gSystem\n    add r4, r1, #0\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _0222BA84\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0222BAB0\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222BAA8\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0xd2\n    mov r1, #8\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222BAB4: .word gSystem"
    );
    #endif
}

void ov44_0222BAB8(void) {
    /* Original at 0x0222BAB8 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xd2\n    mov r3, #9\n    lsl r2, r2, #2\n    str r3, [r0, r2]\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov44_0222BAC4(void) {
    /* Original at 0x0222BAC4 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xd2\n    mov r3, #0xb\n    lsl r2, r2, #2\n    str r3, [r0, r2]\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov44_0222BAD0(void) {
    /* Original at 0x0222BAD0 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    add r4, r1, #0\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    ble _0222BAE8\n    sub r1, r1, #1\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, _0222BB34 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _0222BAFA\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0222BB30\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222BB1E\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl RemoveWindow\n    add r0, r5, #0\n    mov r1, #0x58\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0xb\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222BB34: .word gSystem"
    );
    #endif
}

void ov44_0222BB38(void) {
    /* Original at 0x0222BB38 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222BB92\n    ldr r0, _0222BB98 ; =0x04000304\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222BB76\n    mov r2, #0x57\n    mov r0, #0x35\n    lsl r2, r2, #2\n    str r0, [sp]\n    ldr r0, [r5, r2]\n    ldr r1, _0222BB9C ; =ov44_0223538C\n    add r2, #0x7d\n    mov r3, #0xb\n    bl Std_CreateYesNoMenu\n    mov r1, #0x61\n    b _0222BB86\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, _0222BBA0 ; =ov44_02235374\n    mov r2, #0\n    bl ov44_02231A28\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0xd2\n    mov r1, #0xc\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222BB98: .word 0x04000304\n    _0222BB9C: .word ov44_0223538C\n    _0222BBA0: .word ov44_02235374"
    );
    #endif
}

void ov44_0222BBA4(void) {
    /* Original at 0x0222BBA4 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0222BC74 ; =0x04000304\n    add r4, r1, #0\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222BC0A\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x35\n    bl Handle2dMenuInput_DeleteOnFinish\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0222BBD0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    cmp r0, #0\n    bne _0222BBEA\n    bl sub_02039330\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    mov r0, #0xd2\n    mov r1, #0xd\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222BC6A\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    bl sub_02039330\n    bl sub_020343E4\n    mov r0, #0xd3\n    mov r1, #8\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0x22\n    sub r0, r0, #4\n    str r1, [r5, r0]\n    b _0222BC6A\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    bne _0222BC38\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    bl sub_02039330\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    mov r0, #0xd2\n    mov r1, #0xd\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222BC6A\n    cmp r0, #2\n    bne _0222BC66\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    bl sub_02039330\n    bl sub_020343E4\n    mov r0, #0xd3\n    mov r1, #8\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0x22\n    sub r0, r0, #4\n    str r1, [r5, r0]\n    b _0222BC6A\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222BC74: .word 0x04000304"
    );
    #endif
}

void ov44_0222BC78(void) {
    /* Original at 0x0222BC78 */
    /* Requires manual decompilation - 188 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _0222BC88\n    b _0222BE22\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02231BB0\n    cmp r0, #1\n    bne _0222BCCE\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0\n    bl sub_0200FBF4\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02231B4C\n    mov r2, #0\n    ldr r0, _0222BE28 ; =0x00000A88\n    add r3, r5, #0\n    add r1, r2, #0\n    add r2, r2, #1\n    str r1, [r3, r0]\n    add r3, r3, #4\n    cmp r2, #0x21\n    blt _0222BCB8\n    mov r0, #0x35\n    bl thunk_ClearMainOAM\n    mov r0, #0x35\n    bl thunk_ClearSubOAM\n    add r0, r5, #0\n    bl ov44_0222F98C\n    cmp r0, #1\n    bne _0222BCDE\n    add r0, r5, #0\n    bl ov44_0222FA28\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222BD02\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl sub_0200E5D4\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222BD1A\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0x58\n    mov r1, #0x35\n    bl NARC_New\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov44_0222AEC0\n    add r0, r6, #0\n    bl NARC_Delete\n    ldr r0, _0222BE2C ; =0x00000D6C\n    mov r1, #1\n    str r1, [r5, r0]\n    ldr r0, _0222BE30 ; =gSystem + 0x60\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    mov r1, #0\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    add r3, r1, #0\n    bl BgSetPosTextAndCommit\n    mov r0, #0x57\n    lsl r0, r0, #2\n    mov r1, #0\n    ldr r0, [r5, r0]\n    mov r2, #3\n    add r3, r1, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, _0222BE34 ; =0x000010BC\n    mov r1, #1\n    strh r1, [r5, r0]\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222BDAC\n    mov r0, #0x31\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0x15\n    lsl r0, r0, #4\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    bl DestroyListMenu\n    mov r0, #0x15\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r5, r0]\n    sub r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    mov r0, #0x53\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    add r0, #0xc\n    mov r1, #0\n    mov r2, #0x20\n    bl MI_CpuFill8\n    add r0, r5, #0\n    add r0, #0x2c\n    mov r1, #0\n    mov r2, #0x20\n    bl MI_CpuFill8\n    add r0, r5, #0\n    add r0, #0x4c\n    mov r1, #0\n    mov r2, #0x80\n    bl MI_CpuFill8\n    add r0, r5, #0\n    add r0, #0xcc\n    mov r1, #0\n    mov r2, #0x80\n    bl MI_CpuFill8\n    add r0, r5, #0\n    bl ov44_0222B0B0\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r1, _0222BE38 ; =0x000004A4\n    bl sub_020396FC\n    str r0, [r5, #4]\n    add r0, r5, #0\n    mov r1, #0x17\n    mov r2, #1\n    bl ov44_0222F510\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222BE08\n    bl GF_AssertFail\n    mov r1, #0x2d\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0xee\n    bl WaitingIcon_New\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0xd2\n    mov r1, #0xe\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _0222BE28: .word 0x00000A88\n    _0222BE2C: .word 0x00000D6C\n    _0222BE30: .word gSystem + 0x60\n    _0222BE34: .word 0x000010BC\n    _0222BE38: .word 0x000004A4"
    );
    #endif
}

void ov44_0222BE3C(void) {
    /* Original at 0x0222BE3C */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222BE58\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    bl ov00_021E7314\n    cmp r0, #0\n    beq _0222BE92\n    mov r0, #0xd2\n    mov r1, #0x45\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    mov r1, #0x1e\n    mov r2, #1\n    bl ov44_0222F510\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222BE80\n    bl GF_AssertFail\n    mov r1, #0x2d\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0xee\n    bl WaitingIcon_New\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    bl sub_02039274\n    cmp r0, #0\n    beq _0222BEC6\n    mov r0, #0xda\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    beq _0222BEAC\n    mov r1, #0x10\n    sub r0, #0x20\n    str r1, [r5, r0]\n    b _0222BEDC\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222B778\n    add r0, r5, #0\n    bl ov44_0222B870\n    bl ov44_0222ADD0\n    mov r1, #0xd2\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    b _0222BEDC\n    bl sub_020393C8\n    cmp r0, #0\n    bne _0222BED6\n    bl sub_020390C4\n    cmp r0, #3\n    bne _0222BEDC\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222BEE0(void) {
    /* Original at 0x0222BEE0 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222BEFC\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    bl ov00_021E7314\n    cmp r0, #0\n    beq _0222BF1C\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Save_PrepareForAsyncWrite\n    mov r0, #0xd2\n    mov r1, #0x47\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    bl sub_02039274\n    cmp r0, #0\n    beq _0222BF50\n    mov r0, #0xda\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    beq _0222BF36\n    mov r1, #0x10\n    sub r0, #0x20\n    str r1, [r5, r0]\n    b _0222BF66\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222B778\n    add r0, r5, #0\n    bl ov44_0222B870\n    bl ov44_0222ADD0\n    mov r1, #0xd2\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    b _0222BF66\n    bl sub_020393C8\n    cmp r0, #0\n    bne _0222BF60\n    bl sub_020390C4\n    cmp r0, #3\n    bne _0222BF66\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222BF6C(void) {
    /* Original at 0x0222BF6C */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov00_021E7314\n    cmp r0, #0\n    beq _0222BFA0\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl Save_WriteFileAsync\n    cmp r0, #0\n    beq _0222BF9C\n    cmp r0, #1\n    beq _0222BF9C\n    bl ov00_021E7328\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl Save_ClearStatusFlags\n    b _0222BFA0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    bl sub_02039274\n    cmp r0, #0\n    beq _0222BFD4\n    mov r0, #0xda\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    beq _0222BFBA\n    mov r1, #0x10\n    sub r0, #0x20\n    str r1, [r5, r0]\n    b _0222BFEA\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222B778\n    add r0, r5, #0\n    bl ov44_0222B870\n    bl ov44_0222ADD0\n    mov r1, #0xd2\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    b _0222BFEA\n    bl sub_020393C8\n    cmp r0, #0\n    bne _0222BFE4\n    bl sub_020390C4\n    cmp r0, #3\n    bne _0222BFEA\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222BFF0(void) {
    /* Original at 0x0222BFF0 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    add r4, r1, #0\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    ble _0222C008\n    sub r1, r1, #1\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    bl sub_020392A0\n    cmp r0, #0\n    beq _0222C01C\n    bl ov44_0222ADD0\n    mov r1, #0xd2\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    b _0222C05C\n    bl sub_020393C8\n    cmp r0, #0\n    bne _0222C02C\n    bl sub_020390C4\n    cmp r0, #3\n    bne _0222C034\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    b _0222C05C\n    bl sub_020390C4\n    cmp r0, #4\n    bge _0222C04E\n    bl sub_02039264\n    cmp r0, #0\n    bne _0222C04E\n    mov r0, #0\n    bl sub_020373B4\n    cmp r0, #0\n    bne _0222C05C\n    bl sub_02039358\n    bl ov44_0222ADD0\n    mov r1, #0xd2\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222C060(void) {
    /* Original at 0x0222C060 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov44_0222F7BC\n    add r0, r5, #0\n    mov r1, #0x13\n    bl ov44_0222F66C\n    mov r0, #0xd2\n    mov r1, #0x11\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0\n    add r0, #0x20\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222C084(void) {
    /* Original at 0x0222C084 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0222C11C ; =gSystem\n    add r4, r1, #0\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _0222C09C\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0222C118\n    mov r1, #0xd5\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    cmp r0, #1\n    bne _0222C0BA\n    add r0, r1, #0\n    mov r2, #0xa\n    sub r0, #8\n    str r2, [r5, r0]\n    mov r0, #0x22\n    sub r1, #0xc\n    str r0, [r5, r1]\n    bl sub_02039330\n    b _0222C118\n    ldr r0, [r5]\n    bl sub_0202C2F8\n    cmp r0, #0\n    bne _0222C0DE\n    add r0, r5, #0\n    mov r1, #0x1a\n    mov r2, #1\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x3b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #1\n    add r0, #0x14\n    str r1, [r5, r0]\n    b _0222C118\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222B778\n    add r0, r5, #0\n    bl ov44_0222B870\n    bl ov44_0222ADD0\n    mov r1, #0xd2\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, #0x48\n    add r0, r5, r1\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222C118\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl RemoveWindow\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222C11C: .word gSystem"
    );
    #endif
}

void ov44_0222C120(void) {
    /* Original at 0x0222C120 */
    /* Requires manual decompilation - 156 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl Save_PlayerData_GetProfile\n    mov r1, #0x35\n    add r6, r0, #0\n    bl PlayerProfile_GetPlayerName_NewString\n    add r4, r0, #0\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _0222C152\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerGender\n    cmp r0, #0\n    bne _0222C16C\n    ldr r0, _0222C280 ; =0x00050600\n    b _0222C170\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp, #0x10]\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    add r2, r4, #0\n    str r0, [sp, #8]\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r3, #0x20\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    ldr r1, [r5, #4]\n    add r0, r5, #0\n    bl ov44_02229F00\n    add r1, sp, #0x10\n    add r4, r0, #0\n    bl ov44_0223120C\n    add r6, r0, #0\n    cmp r4, #1\n    bne _0222C204\n    bl ov00_021E6EBC\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0222C1C8\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    add r1, r6, #0\n    bl ReadMsgDataIntoString\n    b _0222C214\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    ldr r0, [r5]\n    mov r2, #8\n    bl sub_0202C090\n    cmp r0, #0\n    bne _0222C1E0\n    ldr r0, _0222C280 ; =0x00050600\n    str r0, [sp, #0x10]\n    b _0222C1EA\n    cmp r0, #1\n    bne _0222C1EA\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp, #0x10]\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    ldr r0, [r5]\n    bl sub_0202C254\n    add r1, r0, #0\n    mov r0, #0x17\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl CopyU16ArrayToString\n    b _0222C214\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    add r1, r6, #0\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    mov r2, #0x2e\n    str r0, [sp, #8]\n    lsl r2, r2, #4\n    add r0, r5, r2\n    str r1, [sp, #0xc]\n    lsr r2, r2, #1\n    ldr r2, [r5, r2]\n    mov r3, #0x66\n    bl AddTextPrinterParameterizedWithColor\n    mov r2, #1\n    str r2, [sp]\n    mov r0, #0x57\n    ldr r1, _0222C284 ; =0x00000B0C\n    str r4, [sp, #4]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    mov r3, #2\n    bl ov44_0222AC54\n    ldr r0, [r5, #4]\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0222C256\n    mov r0, #8\n    b _0222C258\n    mov r0, #1\n    mov r2, #1\n    str r2, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r1, _0222C284 ; =0x00000B0C\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    mov r3, #0x1a\n    bl ov44_0222ABDC\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _0222C280: .word 0x00050600\n    _0222C284: .word 0x00000B0C"
    );
    #endif
}

void ov44_0222C288(void) {
    PlaySE();
}

void ov44_0222C29C(void) {
    /* Original at 0x0222C29C */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222C2BA\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222C2DE\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl sub_0200E5D4\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #0x1c\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    ldr r0, _0222C350 ; =0x00000192\n    mov r1, #0x2e\n    str r0, [sp, #0x10]\n    sub r0, #0x36\n    lsl r1, r1, #4\n    ldr r0, [r4, r0]\n    add r1, r4, r1\n    mov r2, #3\n    bl AddWindowParameterized\n    mov r2, #1\n    mov r1, #0x2f\n    lsl r1, r1, #4\n    str r2, [sp]\n    mov r0, #0x1c\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    ldr r0, _0222C354 ; =0x000001A1\n    add r1, r4, r1\n    str r0, [sp, #0x10]\n    sub r0, #0x45\n    ldr r0, [r4, r0]\n    add r3, r2, #0\n    bl AddWindowParameterized\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r2, _0222C358 ; =0x000001D9\n    add r0, r4, r0\n    mov r1, #0\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _0222C350: .word 0x00000192\n    _0222C354: .word 0x000001A1\n    _0222C358: .word 0x000001D9"
    );
    #endif
}

void ov44_0222C35C(void) {
    /* Original at 0x0222C35C */
    /* Requires manual decompilation - 166 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r7, r1, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _0222C372\n    add sp, #0xc\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    bl sub_020393C8\n    cmp r0, #0\n    bne _0222C388\n    bl sub_020392A0\n    cmp r0, #0\n    bne _0222C388\n    add sp, #0xc\n    add r0, r7, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, _0222C4D8 ; =sub_02078D24\n    bl ov00_021E5CBC\n    ldr r0, _0222C4DC ; =0x00000D6C\n    mov r1, #0\n    str r1, [r5, r0]\n    mov r0, #0x58\n    mov r1, #0x35\n    bl NARC_New\n    add r6, r0, #0\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r1, _0222C4E0 ; =0x00000B0C\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    add r2, r6, #0\n    mov r3, #0x35\n    bl ov44_0222AB24\n    add r0, r5, #0\n    bl ov44_0222F8F0\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222C402\n    mov r0, #0x31\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0x15\n    lsl r0, r0, #4\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    bl DestroyListMenu\n    mov r0, #0x15\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r5, r0]\n    sub r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    mov r0, #0x53\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02231BB0\n    cmp r0, #0\n    bne _0222C456\n    ldr r0, [r5, #4]\n    ldrb r0, [r0, #0x1e]\n    cmp r0, #0\n    bne _0222C41C\n    mov r4, #0\n    b _0222C41E\n    mov r4, #0x61\n    ldr r0, [r5]\n    bl sub_0202C318\n    ldr r1, _0222C4E4 ; =0x000010BE\n    mov r3, #0x57\n    strh r0, [r5, r1]\n    str r4, [sp]\n    ldrh r0, [r5, r1]\n    lsl r3, r3, #2\n    mov r1, #0x35\n    str r0, [sp, #4]\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r3, [r5, r3]\n    add r0, r5, r0\n    add r2, r6, #0\n    bl ov44_02231A7C\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r4, #0\n    bl ov44_02231D9C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222AA94\n    add r0, r5, #0\n    bl ov44_0222F98C\n    cmp r0, #0\n    bne _0222C46A\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x35\n    bl ov44_0222F9A0\n    add r0, r5, #0\n    mov r1, #0x35\n    bl ov44_02230060\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r5, #0\n    bl ov44_0222B870\n    add r0, r5, #0\n    bl ov44_0222C29C\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    bl sub_02039B58\n    mov r1, #0\n    mov r0, #0x37\n    mvn r1, r1\n    lsl r0, r0, #4\n    str r1, [r5, r0]\n    add r0, r6, #0\n    bl NARC_Delete\n    ldr r0, _0222C4E8 ; =gSystem + 0x60\n    mov r1, #0\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x35\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_020398D4\n    add r0, r7, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222C4D8: .word sub_02078D24\n    _0222C4DC: .word 0x00000D6C\n    _0222C4E0: .word 0x00000B0C\n    _0222C4E4: .word 0x000010BE\n    _0222C4E8: .word gSystem + 0x60"
    );
    #endif
}

void ov44_0222C4EC(void) {
    sub_020390C4();
}

void ov44_0222C500(void) {
    /* Original at 0x0222C500 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov00_021E709C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222C51E\n    ldr r0, [r4, #4]\n    add r0, #0x21\n    ldrb r0, [r0]\n    bl ov00_021E70B8\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222C524(void) {
    /* Original at 0x0222C524 */
    /* Requires manual decompilation - 137 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    bl ov44_0222B870\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r5, #0\n    str r0, [sp, #4]\n    str r0, [sp]\n    add r0, r5, #0\n    add r0, #0xc\n    add r1, #0x2c\n    mov r2, #0x20\n    bl memcmp\n    cmp r0, #0\n    bne _0222C54A\n    b _0222C64C\n    mov r4, #0\n    add r7, r5, r4\n    add r1, r7, #0\n    add r1, #0x2c\n    ldrb r1, [r1]\n    mov r2, #0\n    add r0, r2, #0\n    add r3, r5, r0\n    ldrb r3, [r3, #0xc]\n    cmp r3, r1\n    bne _0222C564\n    mov r2, #1\n    b _0222C56A\n    add r0, r0, #1\n    cmp r0, #0x20\n    blt _0222C558\n    cmp r2, #0\n    bne _0222C5AE\n    cmp r1, #0\n    beq _0222C5AE\n    add r0, r5, #0\n    bl ov44_0222AAEC\n    add r6, r0, #0\n    beq _0222C5AE\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r6, #0\n    bl ov44_02231E94\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov44_0222AAC0\n    add r1, r5, r4\n    add r1, #0x2c\n    ldrb r1, [r1]\n    add r0, r5, #0\n    bl ov44_02230028\n    add r1, r5, r4\n    add r1, #0x2c\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mov r2, #0x35\n    bl ov44_0222F970\n    mov r0, #1\n    str r0, [sp]\n    ldrb r0, [r7, #0xc]\n    mov r1, #0\n    add r2, r1, #0\n    add r3, r5, r2\n    add r3, #0x2c\n    ldrb r3, [r3]\n    cmp r0, r3\n    bne _0222C5C2\n    mov r1, #1\n    b _0222C5C8\n    add r2, r2, #1\n    cmp r2, #0x20\n    blt _0222C5B4\n    cmp r1, #0\n    bne _0222C618\n    ldrb r1, [r7, #0xc]\n    cmp r1, #0\n    beq _0222C618\n    add r0, r5, #0\n    sub r1, r1, #1\n    bl ov44_02231958\n    add r1, r0, #0\n    add r6, r5, r4\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldrb r1, [r1, #0x1d]\n    ldrb r2, [r6, #0xc]\n    add r0, r5, r0\n    bl ov44_02231E08\n    str r0, [sp, #0xc]\n    cmp r0, #0\n    beq _0222C60A\n    ldrb r1, [r7, #0xc]\n    add r0, r5, #0\n    mov r2, #2\n    bl ov44_0222FFF4\n    ldr r1, [sp, #0xc]\n    add r0, r5, #0\n    bl ov44_0222AA94\n    mov r0, #1\n    str r0, [sp, #4]\n    b _0222C618\n    ldrb r1, [r6, #0xc]\n    add r0, r5, #0\n    mov r2, #1\n    bl ov44_0222FFF4\n    mov r0, #0\n    strb r0, [r6, #0xc]\n    add r4, r4, #1\n    cmp r4, #0x20\n    blt _0222C54C\n    add r0, r5, #0\n    add r1, r5, #0\n    add r0, #0x2c\n    add r1, #0xc\n    mov r2, #0x20\n    bl memcpy\n    add r0, r5, #0\n    bl ov44_02230080\n    ldr r0, [sp, #4]\n    cmp r0, #1\n    bne _0222C640\n    ldr r0, _0222C654 ; =0x0000064E\n    bl PlaySE\n    b _0222C64C\n    ldr r0, [sp]\n    cmp r0, #1\n    bne _0222C64C\n    ldr r0, _0222C654 ; =0x0000064E\n    bl PlaySE\n    ldr r0, [sp, #8]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222C654: .word 0x0000064E"
    );
    #endif
}

void ov44_0222C658(void) {
    /* Original at 0x0222C658 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov44_0222B8E0\n    cmp r0, #0\n    ble _0222C66E\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_02230060\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222C670(void) {
    ov44_0222C524();
    ov44_0222C658(r5, r4);
}

void ov44_0222C684(void) {
    /* Original at 0x0222C684 */
    /* Requires manual decompilation - 338 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    mov r7, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _0222C698\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222C6AA\n    add r0, r4, #0\n    bl ov44_0222B9A0\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_020390C4\n    cmp r0, #4\n    bne _0222C6E0\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov44_0222F780\n    add r0, r4, #0\n    mov r1, #0x12\n    add r2, r7, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    bl sub_02039358\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    mov r1, #0x35\n    bl ov44_0222C670\n    add r0, r4, #0\n    bl ov44_0222FBA0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov44_02232008\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov44_02231D98\n    cmp r0, #0\n    bne _0222C79A\n    bl ov00_021E709C\n    sub r1, r7, #1\n    cmp r0, r1\n    bne _0222C75C\n    ldr r0, _0222C9A0 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    lsl r0, r0, #0xa\n    tst r0, r1\n    beq _0222C75C\n    add r0, r4, #0\n    bl ov44_0222F8C0\n    cmp r0, #0\n    beq _0222C732\n    add r0, r4, #0\n    mov r1, #0x5a\n    add r2, r7, #0\n    bl ov44_0222F510\n    b _0222C73C\n    add r0, r4, #0\n    mov r1, #0x5b\n    add r2, r7, #0\n    bl ov44_0222F510\n    ldr r0, _0222C9A4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov44_0222C120\n    mov r0, #0xd2\n    mov r1, #0x14\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #0x35\n    bl ov44_0222F950\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    mov r1, #0x35\n    bl ov44_0222FA80\n    add r6, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov44_0222AAEC\n    add r1, r0, #0\n    cmp r6, #0\n    beq _0222C790\n    cmp r1, #0\n    beq _0222C784\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov44_02231D48\n    b _0222C79A\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov44_02231D8C\n    b _0222C79A\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov44_02231D8C\n    add r0, r4, #0\n    bl ov44_0222C4EC\n    cmp r0, #0\n    beq _0222C7C4\n    mov r0, #0x37\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0222C7C4\n    ldr r0, _0222C9A8 ; =0x00000623\n    bl PlaySE\n    mov r0, #0xd2\n    mov r1, #0x30\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x37\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _0222C80E\n    bl ov00_021E709C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222C80E\n    bl ov00_021E709C\n    mov r1, #0x37\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov44_0222F780\n    add r0, r4, #0\n    mov r1, #0x4c\n    mov r2, #0\n    bl ov44_0222F510\n    ldr r0, [r4, #4]\n    add r0, #0x21\n    ldrb r0, [r0]\n    bl ov00_021E70B8\n    mov r0, #0xd1\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _0222C854\n    mov r0, #0x37\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0222C854\n    bl ov00_021E709C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0222C854\n    mov r0, #0\n    bl ov00_021E70B8\n    mov r1, #0x37\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov44_0222F780\n    add r0, r4, #0\n    mov r1, #0x12\n    mov r2, #0\n    bl ov44_0222F510\n    bl sub_02039358\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov00_021E7080\n    cmp r0, #1\n    bne _0222C86E\n    bl ov00_021E709C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0222C86E\n    mov r0, #0\n    bl ov00_021E70B8\n    ldr r1, [r4, #4]\n    add r0, r4, #0\n    bl ov44_02229F00\n    mov r1, #0x37\n    lsl r1, r1, #4\n    ldr r2, [r4, r1]\n    mov r1, #0\n    mvn r1, r1\n    add r6, r0, #0\n    cmp r2, r1\n    bne _0222C8C8\n    ldr r1, _0222C9A0 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #2\n    tst r1, r2\n    beq _0222C8B2\n    bl ov44_02229FDC\n    cmp r0, #0\n    beq _0222C8B2\n    ldr r0, _0222C9A4 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0xd2\n    mov r1, #0x27\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #0x35\n    bl ov44_0222F950\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov44_02231BB4\n    add r7, r0, #0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov44_02232018\n    cmp r7, #3\n    bhi _0222C998\n    add r0, r7, r7\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222C8D8: ; jump table\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0222C9A4 ; =0x000005DD\n    bl PlaySE\n    add r0, r6, #0\n    bl ov44_02229FDC\n    cmp r0, #0\n    beq _0222C8FE\n    mov r0, #0xd2\n    mov r1, #0x27\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _0222C916\n    mov r0, #0xd3\n    mov r1, #8\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r1, #0x39\n    sub r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #0x19\n    mov r2, #1\n    bl ov44_0222F510\n    add r0, r4, #0\n    mov r1, #0x35\n    bl ov44_0222F950\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0222C9A4 ; =0x000005DD\n    bl PlaySE\n    add r0, r6, #0\n    bl ov44_02229FDC\n    cmp r0, #0\n    beq _0222C946\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov44_02231FCC\n    mov r0, #0xd2\n    mov r1, #0x27\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _0222C964\n    cmp r6, #0x10\n    bne _0222C964\n    bl sub_020392A0\n    cmp r0, #1\n    bne _0222C964\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov44_02231FCC\n    mov r0, #0xd2\n    mov r1, #0x24\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #0x35\n    bl ov44_0222F950\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0222C9A4 ; =0x000005DD\n    bl PlaySE\n    add r0, r6, #0\n    bl ov44_02229FDC\n    cmp r0, #0\n    beq _0222C984\n    mov r1, #0x27\n    b _0222C986\n    mov r1, #0x2a\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #0x35\n    bl ov44_0222F950\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222C9A0: .word gSystem\n    _0222C9A4: .word 0x000005DD\n    _0222C9A8: .word 0x00000623"
    );
    #endif
}

void ov44_0222C9AC(void) {
    /* Original at 0x0222C9AC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov44_0222C500\n    cmp r0, #0\n    beq _0222C9CA\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov44_022319EC\n    b _0222C9F0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222C9F0\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov44_022319EC\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222C9F4(void) {
    /* Original at 0x0222C9F4 */
    /* Requires manual decompilation - 132 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    ldr r1, _0222CB30 ; =0x00000382\n    add r5, r0, #0\n    ldrh r1, [r5, r1]\n    sub r1, r1, #1\n    bl ov44_02231958\n    add r1, r0, #0\n    add r0, #0x21\n    ldrb r4, [r0]\n    add r0, r5, #0\n    bl ov44_02229F00\n    add r6, r0, #0\n    mov r0, #0xd\n    lsl r0, r0, #6\n    ldr r1, [r5, r0]\n    sub r1, r1, #1\n    str r1, [r5, r0]\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    bge _0222CA2A\n    mov r1, #0x46\n    add r0, #8\n    str r1, [r5, r0]\n    b _0222CB2C\n    bl sub_020390C4\n    cmp r0, #5\n    bne _0222CA52\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0xf\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222CB2C\n    bl sub_020390C4\n    cmp r0, #3\n    bne _0222CA7A\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x12\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222CB2C\n    bl sub_020390C4\n    cmp r0, #4\n    beq _0222CA8A\n    bl sub_02039264\n    cmp r0, #0\n    beq _0222CAAA\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x13\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222CB2C\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222CABA\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    b _0222CB2C\n    cmp r4, #0\n    bne _0222CADE\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222CB2C\n    cmp r6, #0x10\n    beq _0222CB02\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222CB2C\n    bl sub_020390C4\n    cmp r0, #1\n    bne _0222CB2C\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r5, #0\n    mov r1, #1\n    bl ov44_0222F818\n    mov r1, #0xd2\n    mov r0, #0x18\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r1, #0x3a\n    ldrh r1, [r5, r1]\n    ldr r0, [r5]\n    sub r1, r1, #1\n    bl sub_0202C4B0\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222CB30: .word 0x00000382"
    );
    #endif
}

void ov44_0222CB34(void) {
    /* Original at 0x0222CB34 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0xe\n    mov r2, #0\n    bl ov44_0222F510\n    add r0, r5, #0\n    mov r1, #1\n    bl ov44_0222F818\n    mov r0, #0xd2\n    mov r1, #0x17\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    bl ov00_021E6EBC\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222CB78\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    ldr r0, [r5]\n    bl sub_0202C4B0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222CB7C(void) {
    /* Original at 0x0222CB7C */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222CB94\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    bl ov00_021E6EBC\n    cmp r0, #0\n    bge _0222CBB2\n    add r0, r5, #0\n    mov r1, #0x13\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_02231958\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_02229F00\n    cmp r0, #0x10\n    beq _0222CBF0\n    cmp r0, #1\n    beq _0222CBF0\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222CC2C\n    ldr r0, _0222CC30 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _0222CC14\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0222CC24\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    mov r0, #0xd2\n    mov r1, #0x18\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222CC2C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_0222CC34\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222CC30: .word gSystem"
    );
    #endif
}

void ov44_0222CC34(void) {
    /* Original at 0x0222CC34 */
    /* Requires manual decompilation - 156 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r6, r1, #0\n    bl ov00_021E6EBC\n    cmp r0, #0\n    bge _0222CC5C\n    add r0, r5, #0\n    mov r1, #0x13\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add sp, #0xc\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, pc}\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_02231958\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_02229F00\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0x35\n    bl ov44_0222C670\n    add r0, r5, #0\n    bl ov44_0222FBA0\n    bl sub_020390C4\n    cmp r0, #5\n    bne _0222CCA8\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0xf\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222CD9C\n    bl sub_020390C4\n    cmp r0, #3\n    bne _0222CCD0\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x12\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222CD9C\n    bl sub_020390C4\n    cmp r0, #4\n    beq _0222CCE0\n    bl sub_02039264\n    cmp r0, #0\n    beq _0222CD00\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x13\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222CD9C\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222CD10\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    b _0222CD9C\n    cmp r4, #0x10\n    beq _0222CD38\n    cmp r4, #1\n    beq _0222CD38\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222CD9C\n    ldr r0, _0222CDA4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _0222CD4A\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0222CD5E\n    add r0, r5, #0\n    mov r1, #0x14\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x19\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222CD9C\n    bl ov00_021E7078\n    cmp r0, #0\n    ldr r1, _0222CDA8 ; =0x00000B0C\n    beq _0222CD82\n    mov r2, #1\n    str r2, [sp]\n    mov r3, #2\n    str r3, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    bl ov44_0222ABDC\n    b _0222CD9C\n    mov r2, #1\n    str r2, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    mov r3, #2\n    bl ov44_0222ABDC\n    add r0, r6, #0\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0222CDA4: .word gSystem\n    _0222CDA8: .word 0x00000B0C"
    );
    #endif
}

void ov44_0222CDAC(void) {
    /* Original at 0x0222CDAC */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222CDC4\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222CE30\n    bl ov00_021E6EBC\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222CDEE\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    ldr r0, [r5]\n    bl sub_0202C4B0\n    ldr r0, _0222CE34 ; =0x04000304\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222CE14\n    mov r2, #0x57\n    mov r0, #0x35\n    lsl r2, r2, #2\n    str r0, [sp]\n    ldr r0, [r5, r2]\n    ldr r1, _0222CE38 ; =ov44_0223538C\n    add r2, #0x7d\n    mov r3, #0xb\n    bl Std_CreateYesNoMenu\n    mov r1, #0x61\n    b _0222CE24\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, _0222CE3C ; =ov44_02235374\n    mov r2, #0\n    bl ov44_02231A14\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0xd2\n    mov r1, #0x1a\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222CE34: .word 0x04000304\n    _0222CE38: .word ov44_0223538C\n    _0222CE3C: .word ov44_02235374"
    );
    #endif
}

void ov44_0222CE40(void) {
    /* Original at 0x0222CE40 */
    /* Requires manual decompilation - 178 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0222CFDC ; =0x04000304\n    add r4, r1, #0\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222CF0C\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x35\n    bl Handle2dMenuInput_DeleteOnFinish\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0222CEC8\n    bl sub_020390C4\n    cmp r0, #4\n    bge _0222CE82\n    bl sub_02039264\n    cmp r0, #0\n    bne _0222CE82\n    mov r0, #0\n    bl sub_020373B4\n    cmp r0, #0\n    bne _0222CEB6\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x35\n    bl Clear2dMenuWindowAndDelete\n    mov r0, #0\n    mov r1, #0x37\n    mvn r0, r0\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    mov r2, #0x14\n    sub r0, #0x14\n    str r2, [r5, r0]\n    mov r0, #0x41\n    sub r1, #0x28\n    str r0, [r5, r1]\n    b _0222CEC4\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222CEC4\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    cmp r0, #0\n    bne _0222CF02\n    bl sub_020393C8\n    cmp r0, #0\n    bne _0222CEFA\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    bl sub_020393B4\n    mov r0, #0\n    mov r1, #0x37\n    mvn r0, r0\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    mov r2, #0x14\n    sub r0, #0x14\n    str r2, [r5, r0]\n    mov r0, #0x41\n    sub r1, #0x28\n    str r0, [r5, r1]\n    b _0222CFD0\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    b _0222CFD0\n    mov r0, #0xd2\n    mov r1, #0x18\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222CFD0\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    bne _0222CF5A\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    bl sub_020393C8\n    cmp r0, #0\n    bne _0222CF52\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    bl sub_020393B4\n    mov r0, #0\n    mov r1, #0x37\n    mvn r0, r0\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    mov r2, #0x14\n    sub r0, #0x14\n    str r2, [r5, r0]\n    mov r0, #0x41\n    sub r1, #0x28\n    str r0, [r5, r1]\n    b _0222CFD0\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    b _0222CFD0\n    cmp r0, #2\n    bne _0222CF72\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #0xd2\n    mov r1, #0x18\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222CFD0\n    bl sub_020390C4\n    cmp r0, #4\n    bge _0222CF8C\n    bl sub_02039264\n    cmp r0, #0\n    bne _0222CF8C\n    mov r0, #0\n    bl sub_020373B4\n    cmp r0, #0\n    bne _0222CFBE\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #0\n    mov r1, #0x37\n    mvn r0, r0\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    mov r2, #0x14\n    sub r0, #0x14\n    str r2, [r5, r0]\n    mov r0, #0x41\n    sub r1, #0x28\n    str r0, [r5, r1]\n    b _0222CFCC\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222CFCC\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222CFDC: .word 0x04000304"
    );
    #endif
}

void ov44_0222CFE0(void) {
    /* Original at 0x0222CFE0 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222CFF8\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    ldr r1, [r5, #4]\n    add r0, r5, #0\n    bl ov44_02229F00\n    cmp r0, #0x10\n    beq _0222D00C\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222D02A\n    mov r0, #0xd7\n    mov r1, #0x1e\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    sub r1, r1, #1\n    str r1, [r5, r0]\n    ldr r1, _0222D0A0 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #3\n    tst r1, r2\n    bne _0222D04C\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222D04C\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0222D09A\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    bl sub_02039358\n    bl sub_02039B58\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02231BB0\n    cmp r0, #0\n    bne _0222D078\n    mov r0, #0xd7\n    mov r1, #0x14\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0x41\n    sub r0, #0x14\n    str r1, [r5, r0]\n    b _0222D09A\n    add r0, r5, #0\n    bl ov44_0222F8F0\n    add r0, r5, #0\n    bl ov44_0222C120\n    mov r1, #0\n    mov r0, #0x37\n    mvn r1, r1\n    lsl r0, r0, #4\n    str r1, [r5, r0]\n    mov r1, #0x13\n    sub r0, #0x28\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov44_022319EC\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222D0A0: .word gSystem"
    );
    #endif
}

void ov44_0222D0A4(void) {
    /* Original at 0x0222D0A4 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222D0BC\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222D0D2\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, _0222D108 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _0222D0E4\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0222D104\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    bl sub_02039358\n    mov r0, #0xd7\n    mov r1, #0x14\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0x41\n    sub r0, #0x14\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222D108: .word gSystem"
    );
    #endif
}

void ov44_0222D10C(void) {
    /* Original at 0x0222D10C */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222D124\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222D142\n    mov r0, #0xd7\n    mov r1, #0x1e\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    sub r1, r1, #1\n    str r1, [r5, r0]\n    ldr r1, _0222D1B8 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #3\n    tst r1, r2\n    bne _0222D164\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222D164\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0222D1B2\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    bl sub_02039B58\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02231BB0\n    cmp r0, #0\n    bne _0222D190\n    bl ov44_0222ADD0\n    mov r1, #0xd2\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    b _0222D1B2\n    add r0, r5, #0\n    bl ov44_0222F8F0\n    add r0, r5, #0\n    bl ov44_0222C120\n    mov r1, #0\n    mov r0, #0x37\n    mvn r1, r1\n    lsl r0, r0, #4\n    str r1, [r5, r0]\n    mov r1, #0x13\n    sub r0, #0x28\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov44_022319EC\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222D1B8: .word gSystem"
    );
    #endif
}

void ov44_0222D1BC(void) {
    /* Original at 0x0222D1BC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov44_0222D1C0(void) {
    /* Original at 0x0222D1C0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov44_0222D1C4(void) {
    /* Original at 0x0222D1C4 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov44_0222D1C8(void) {
    /* Original at 0x0222D1C8 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    add r4, r1, #0\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    ble _0222D1E0\n    sub r1, r1, #1\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, _0222D210 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _0222D1F2\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0222D20A\n    add r0, r5, #0\n    mov r1, #0x1a\n    mov r2, #1\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x3b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #1\n    add r0, #0x14\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222D210: .word gSystem"
    );
    #endif
}

void ov44_0222D214(void) {
    /* Original at 0x0222D214 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r4, r1, #0\n    bl ov44_02232018\n    add r0, r5, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x28\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222D23C(void) {
    /* Original at 0x0222D23C */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r4, r1, #0\n    bl ov44_02232018\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222D2A0\n    ldr r0, _0222D2A4 ; =0x04000304\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222D284\n    mov r2, #0x57\n    mov r0, #0x35\n    lsl r2, r2, #2\n    str r0, [sp]\n    ldr r0, [r5, r2]\n    ldr r1, _0222D2A8 ; =ov44_0223538C\n    add r2, #0x7d\n    mov r3, #0xb\n    bl Std_CreateYesNoMenu\n    mov r1, #0x61\n    b _0222D294\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, _0222D2AC ; =ov44_02235374\n    mov r2, #0\n    bl ov44_02231A14\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0xd2\n    mov r1, #0x29\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222D2A4: .word 0x04000304\n    _0222D2A8: .word ov44_0223538C\n    _0222D2AC: .word ov44_02235374"
    );
    #endif
}

void ov44_0222D2B0(void) {
    /* Original at 0x0222D2B0 */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    ldr r0, _0222D3D8 ; =0x04000304\n    add r6, r1, #0\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222D34A\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x35\n    bl Handle2dMenuInput_DeleteOnFinish\n    add r5, r0, #0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov44_02232018\n    mov r0, #0x37\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _0222D316\n    bl ov00_021E709C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222D316\n    ldr r0, [r4, #4]\n    add r0, #0x21\n    ldrb r0, [r0]\n    bl ov00_021E70B8\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _0222D314\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x35\n    bl Clear2dMenuWindowAndDelete\n    mov r5, #1\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _0222D322\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    cmp r5, #0\n    bne _0222D33A\n    add r0, r4, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    bl sub_02039B58\n    add r0, r4, #0\n    bl ov44_022319EC\n    b _0222D3CA\n    add r0, r4, #0\n    bl ov44_022319EC\n    add r0, r4, #0\n    mov r1, #1\n    bl ov44_022319BC\n    b _0222D3CA\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    add r5, r0, #0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov44_02232018\n    mov r0, #0x37\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _0222D386\n    bl ov00_021E709C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222D386\n    ldr r0, [r4, #4]\n    add r0, #0x21\n    ldrb r0, [r0]\n    bl ov00_021E70B8\n    mov r5, #2\n    cmp r5, #1\n    bne _0222D3A8\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r4, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    bl sub_02039B58\n    add r0, r4, #0\n    bl ov44_022319EC\n    b _0222D3CA\n    cmp r5, #2\n    bne _0222D3C6\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r4, #0\n    bl ov44_022319EC\n    add r0, r4, #0\n    mov r1, #1\n    bl ov44_022319BC\n    b _0222D3CA\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _0222D3D8: .word 0x04000304"
    );
    #endif
}

void ov44_0222D3DC(void) {
    /* Original at 0x0222D3DC */
    /* Requires manual decompilation - 202 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    ldr r3, _0222D584 ; =ov44_022366FC\n    add r2, sp, #0x1c\n    add r5, r0, #0\n    str r1, [sp, #0x14]\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r5, #0\n    mov r7, #3\n    ldr r4, _0222D588 ; =ov44_0223671C\n    bl ov44_02229EF8\n    cmp r0, #1\n    bne _0222D424\n    add r0, sp, #0x1c\n    ldrh r1, [r0, #0x10]\n    add r7, r7, #1\n    ldr r2, _0222D58C ; =_02236660\n    add r1, r1, #1\n    strh r1, [r0, #0x10]\n    ldrh r1, [r0, #0x12]\n    add r1, r1, #1\n    strh r1, [r0, #0x12]\n    sub r0, r7, #1\n    lsl r1, r0, #3\n    ldmia r2!, {r0, r2}\n    add r3, r4, r1\n    str r0, [r4, r1]\n    str r2, [r3, #4]\n    add r0, r5, #0\n    bl ov44_02229EE0\n    cmp r0, #1\n    bne _0222D44E\n    add r0, sp, #0x1c\n    ldrh r1, [r0, #0x10]\n    add r7, r7, #1\n    ldr r2, _0222D58C ; =_02236660\n    add r1, r1, #1\n    strh r1, [r0, #0x10]\n    ldrh r1, [r0, #0x12]\n    add r1, r1, #1\n    strh r1, [r0, #0x12]\n    sub r0, r7, #1\n    lsl r1, r0, #3\n    ldr r0, [r2, #0x18]\n    ldr r2, [r2, #0x1c]\n    add r3, r4, r1\n    str r0, [r4, r1]\n    str r2, [r3, #4]\n    add r0, r5, #0\n    bl ov44_02229EFC\n    cmp r0, #1\n    bne _0222D478\n    add r0, sp, #0x1c\n    ldrh r1, [r0, #0x10]\n    add r7, r7, #1\n    ldr r2, _0222D58C ; =_02236660\n    add r1, r1, #1\n    strh r1, [r0, #0x10]\n    ldrh r1, [r0, #0x12]\n    add r1, r1, #1\n    strh r1, [r0, #0x12]\n    sub r0, r7, #1\n    lsl r1, r0, #3\n    ldr r0, [r2, #8]\n    ldr r2, [r2, #0xc]\n    add r3, r4, r1\n    str r0, [r4, r1]\n    str r2, [r3, #4]\n    add r0, sp, #0x1c\n    ldrh r1, [r0, #0x10]\n    ldr r2, _0222D58C ; =_02236660\n    add r1, r1, #1\n    strh r1, [r0, #0x10]\n    ldrh r1, [r0, #0x12]\n    add r1, r1, #1\n    strh r1, [r0, #0x12]\n    ldr r0, [r2, #0x10]\n    lsl r1, r7, #3\n    str r0, [r4, r1]\n    add r3, r4, r1\n    ldr r2, [r2, #0x14]\n    add r0, r7, #1\n    mov r1, #0x35\n    str r2, [r3, #4]\n    bl ListMenuItems_New\n    mov r1, #0x55\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r7, #1\n    mov r6, #0\n    str r0, [sp, #0x18]\n    cmp r0, #0\n    ble _0222D4CA\n    mov r0, #0x55\n    mov r1, #0x5a\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, [r4]\n    ldr r3, [r4, #4]\n    bl ListMenuItems_AppendFromMsgData\n    ldr r0, [sp, #0x18]\n    add r6, r6, #1\n    add r4, #8\n    cmp r6, r0\n    blt _0222D4AC\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222D4EE\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl sub_0200E5D4\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    add r0, r7, #1\n    mov r1, #3\n    str r1, [sp]\n    mov r1, #0xf\n    lsl r0, r0, #1\n    str r1, [sp, #4]\n    lsl r1, r0, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #8]\n    mov r1, #0xd\n    str r1, [sp, #0xc]\n    mov r1, #0x3b\n    sub r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    mov r1, #0x32\n    lsl r1, r1, #4\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    mov r2, #2\n    mov r3, #0x10\n    bl AddWindowParameterized\n    mov r0, #0x32\n    lsl r0, r0, #4\n    ldr r2, _0222D590 ; =0x000001D9\n    add r0, r5, r0\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r2, #0x32\n    lsl r2, r2, #4\n    str r0, [sp, #0x1c]\n    add r0, r5, r2\n    str r0, [sp, #0x28]\n    add r2, #0x54\n    ldrh r2, [r5, r2]\n    add r0, sp, #0x1c\n    mov r1, #0\n    mov r3, #0x35\n    bl ListMenuInit\n    mov r1, #0x56\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02232018\n    mov r0, #0xd2\n    mov r1, #0x25\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    ldr r0, [sp, #0x14]\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222D584: .word ov44_022366FC\n    _0222D588: .word ov44_0223671C\n    _0222D58C: .word _02236660\n    _0222D590: .word 0x000001D9"
    );
    #endif
}

void ov44_0222D594(void) {
    /* Original at 0x0222D594 */
    /* Requires manual decompilation - 281 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    bl ov44_0222A168\n    str r0, [sp]\n    add r0, r5, #0\n    bl ov44_0222E02C\n    add r6, r0, #0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02232018\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222D5FC\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl sub_0200E5D4\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0x56\n    lsl r0, r0, #2\n    mov r2, #0xdd\n    lsl r2, r2, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    add r2, r5, r2\n    bl DestroyListMenu\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222D65A\n    add r0, r5, #0\n    bl ov44_0222C500\n    cmp r0, #0\n    beq _0222D656\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    sub r0, #0x28\n    add r0, r5, r0\n    mov r1, #0\n    bl sub_0200E5D4\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0x56\n    lsl r0, r0, #2\n    mov r2, #0xdd\n    lsl r2, r2, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    add r2, r5, r2\n    bl DestroyListMenu\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x56\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ListMenu_ProcessInput\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov44_0222C500\n    cmp r0, #0\n    beq _0222D674\n    mov r4, #1\n    mvn r4, r4\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _0222D686\n    add r0, r0, #1\n    cmp r4, r0\n    bne _0222D69C\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    ldr r0, _0222D820 ; =0x000005DD\n    bl PlaySE\n    b _0222D7E8\n    ldr r0, _0222D820 ; =0x000005DD\n    bl PlaySE\n    cmp r4, #0x13\n    bne _0222D6DE\n    cmp r6, #0\n    beq _0222D6DE\n    cmp r6, #1\n    bne _0222D6BA\n    add r0, r5, #0\n    mov r1, #0x68\n    mov r2, #0\n    bl ov44_0222F510\n    b _0222D6D4\n    cmp r6, #3\n    bne _0222D6CA\n    add r0, r5, #0\n    mov r1, #0x6a\n    mov r2, #0\n    bl ov44_0222F510\n    b _0222D6D4\n    add r0, r5, #0\n    mov r1, #0x69\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222D782\n    cmp r4, #0xf\n    bne _0222D6FC\n    ldr r0, [sp]\n    cmp r0, #2\n    bge _0222D6FC\n    add r0, r5, #0\n    mov r1, #0x59\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222D782\n    cmp r4, #1\n    bne _0222D71A\n    ldr r0, [sp]\n    cmp r0, #2\n    bge _0222D71A\n    add r0, r5, #0\n    mov r1, #0x67\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222D782\n    cmp r4, #0\n    beq _0222D726\n    cmp r4, #1\n    beq _0222D726\n    cmp r4, #0x1d\n    bne _0222D76C\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl sub_0200E5D4\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0x56\n    lsl r0, r0, #2\n    mov r2, #0xdd\n    lsl r2, r2, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    add r2, r5, r2\n    bl DestroyListMenu\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_0222D8B0\n    mov r0, #0xd2\n    mov r1, #0x26\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_0222F818\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r4, #0\n    mov r6, #1\n    bl ov44_02229F44\n    cmp r0, #0\n    beq _0222D7C4\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    cmp r1, #0x13\n    bne _0222D7C4\n    mov r1, #0x44\n    str r1, [r5, r0]\n    add r0, r5, #0\n    sub r1, #0x45\n    add r2, r4, #0\n    bl ov44_0223197C\n    add r0, r4, #0\n    bl ov44_0222A1B4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_0222F818\n    add r0, r4, #0\n    bl ov44_02229F74\n    mov r1, #0xd3\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r6, #0\n    b _0222D7D6\n    mov r1, #0\n    add r0, r5, #0\n    mvn r1, r1\n    add r2, r4, #0\n    bl ov44_0223197C\n    add r0, r4, #0\n    bl ov44_0222A1B4\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0x13\n    bne _0222D7E8\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov44_022319BC\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl sub_0200E5D4\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0x56\n    lsl r0, r0, #2\n    mov r2, #0xdd\n    lsl r2, r2, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    add r2, r5, r2\n    bl DestroyListMenu\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222D820: .word 0x000005DD"
    );
    #endif
}

void ov44_0222D824(void) {
    /* Original at 0x0222D824 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222D840\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add sp, #0xc\n    add r0, r4, #0\n    pop {r4, r5, pc}\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02232018\n    add r0, r5, #0\n    bl ov44_0222C500\n    cmp r0, #0\n    beq _0222D85C\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    bl sub_020392A0\n    cmp r0, #0\n    beq _0222D8AA\n    mov r0, #0\n    mov r1, #1\n    bl sub_020398D4\n    mov r0, #0\n    bl sub_020378E4\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x35\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0xe1\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl sub_02034354\n    bl sub_02034434\n    bl sub_0203769C\n    bl sub_0203476C\n    mov r4, #2\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov44_0222D8B0(void) {
    /* Original at 0x0222D8B0 */
    /* Requires manual decompilation - 199 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    cmp r1, #0\n    beq _0222D8C4\n    cmp r1, #1\n    beq _0222D8E6\n    cmp r1, #0x1d\n    beq _0222D908\n    b _0222D928\n    mov r0, #0xdf\n    mov r1, #1\n    lsl r0, r0, #2\n    ldr r3, _0222DA4C ; =ov44_02235508\n    strh r1, [r5, r0]\n    add r2, sp, #0x14\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    ldr r4, _0222DA50 ; =ov44_022366BC\n    mov r7, #4\n    stmia r2!, {r0, r1}\n    b _0222D928\n    mov r0, #0xdf\n    mov r1, #0\n    lsl r0, r0, #2\n    ldr r3, _0222DA4C ; =ov44_02235508\n    strh r1, [r5, r0]\n    add r2, sp, #0x14\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    ldr r4, _0222DA54 ; =ov44_022366DC\n    mov r7, #4\n    stmia r2!, {r0, r1}\n    b _0222D928\n    ldr r3, _0222DA58 ; =ov44_02235528\n    add r2, sp, #0x14\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r0, #0xdf\n    ldr r4, _0222DA5C ; =ov44_0223669C\n    mov r1, #2\n    lsl r0, r0, #2\n    mov r7, #4\n    strh r1, [r5, r0]\n    add r0, r7, #0\n    mov r1, #0x35\n    bl ListMenuItems_New\n    mov r1, #0x55\n    lsl r1, r1, #2\n    mov r6, #0\n    str r0, [r5, r1]\n    cmp r7, #0\n    ble _0222D9A6\n    ldr r2, [r4]\n    cmp r2, #0x47\n    beq _0222D956\n    mov r0, #0x55\n    mov r1, #0x5a\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r3, [r4, #4]\n    bl ListMenuItems_AppendFromMsgData\n    b _0222D99E\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    add r2, r6, #0\n    bl BufferWiFiPlazaActivityName\n    mov r0, #0x5a\n    mov r2, #0x17\n    lsl r0, r0, #2\n    lsl r2, r2, #4\n    ldr r0, [r5, r0]\n    ldr r1, [r4]\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    mov r0, #0x59\n    mov r1, #0x5e\n    mov r2, #0x17\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    lsl r2, r2, #4\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r0, #0x55\n    mov r1, #0x5e\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, [r4, #4]\n    bl ListMenuItems_AddItem\n    add r6, r6, #1\n    add r4, #8\n    cmp r6, r7\n    blt _0222D93C\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222D9CA\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl sub_0200E5D4\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r1, #9\n    str r1, [sp]\n    mov r1, #0xf\n    lsl r0, r7, #1\n    str r1, [sp, #4]\n    lsl r1, r0, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #8]\n    mov r1, #0xd\n    str r1, [sp, #0xc]\n    mov r1, #0x3b\n    sub r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    mov r1, #0x32\n    lsl r1, r1, #4\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    mov r2, #2\n    mov r3, #0x10\n    bl AddWindowParameterized\n    mov r0, #0x32\n    lsl r0, r0, #4\n    ldr r2, _0222DA60 ; =0x000001D9\n    add r0, r5, r0\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r3, #0x32\n    lsl r3, r3, #4\n    str r0, [sp, #0x14]\n    add r0, r5, r3\n    add r2, r3, #0\n    str r0, [sp, #0x20]\n    add r2, #0x5c\n    ldrh r2, [r5, r2]\n    add r3, #0x56\n    add r0, sp, #0x14\n    lsl r2, r2, #1\n    add r2, r5, r2\n    ldrh r2, [r2, r3]\n    mov r1, #0\n    mov r3, #0x35\n    bl ListMenuInit\n    mov r1, #0x56\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #1\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222DA4C: .word ov44_02235508\n    _0222DA50: .word ov44_022366BC\n    _0222DA54: .word ov44_022366DC\n    _0222DA58: .word ov44_02235528\n    _0222DA5C: .word ov44_0223669C\n    _0222DA60: .word 0x000001D9"
    );
    #endif
}

void ov44_0222DA64(void) {
    /* Original at 0x0222DA64 */
    /* Requires manual decompilation - 184 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r6, r1, #0\n    bl ov44_02232018\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222DAC4\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl sub_0200E5D4\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    ldr r3, _0222DC10 ; =0x00000376\n    mov r0, #0x56\n    add r2, r5, r3\n    add r3, r3, #6\n    ldrh r3, [r5, r3]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    lsl r3, r3, #1\n    mov r1, #0\n    add r2, r2, r3\n    bl DestroyListMenu\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov44_0222C500\n    cmp r0, #0\n    beq _0222DB16\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    sub r0, #0x28\n    add r0, r5, r0\n    mov r1, #0\n    bl sub_0200E5D4\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    ldr r3, _0222DC10 ; =0x00000376\n    mov r0, #0x56\n    add r2, r5, r3\n    add r3, r3, #6\n    ldrh r3, [r5, r3]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    lsl r3, r3, #1\n    mov r1, #0\n    add r2, r2, r3\n    bl DestroyListMenu\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222DB2C\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x56\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ListMenu_ProcessInput\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _0222DB4A\n    add r0, r0, #1\n    cmp r4, r0\n    bne _0222DB5A\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0222DC14 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0xd2\n    mov r1, #0x24\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222DB76\n    ldr r0, _0222DC14 ; =0x000005DD\n    bl PlaySE\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_0222F818\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0x13\n    bne _0222DBD2\n    add r0, r4, #0\n    mov r7, #1\n    bl ov44_02229F44\n    cmp r0, #0\n    beq _0222DBBC\n    mov r0, #0xd2\n    mov r1, #0x44\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    sub r1, #0x45\n    add r2, r4, #0\n    bl ov44_0223197C\n    add r0, r4, #0\n    bl ov44_0222A1B4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_0222F818\n    add r0, r4, #0\n    bl ov44_02229F74\n    mov r1, #0xd3\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r7, #0\n    b _0222DBCA\n    add r0, r5, #0\n    sub r1, r7, #2\n    add r2, r4, #0\n    bl ov44_0223197C\n    bl sub_02039B7C\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov44_022319BC\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl sub_0200E5D4\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    ldr r3, _0222DC10 ; =0x00000376\n    mov r0, #0x56\n    add r2, r5, r3\n    add r3, r3, #6\n    ldrh r3, [r5, r3]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    lsl r3, r3, #1\n    mov r1, #0\n    add r2, r2, r3\n    bl DestroyListMenu\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222DC10: .word 0x00000376\n    _0222DC14: .word 0x000005DD"
    );
    #endif
}

void ov44_0222DC18(void) {
    /* Original at 0x0222DC18 */
    /* Requires manual decompilation - 148 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r6, r1, #0\n    bl ov44_02231C70\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov44_0222AAEC\n    add r7, r0, #0\n    bne _0222DC3A\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov44_0222AAEC\n    str r0, [sp]\n    cmp r0, #0\n    bne _0222DC66\n    add r0, r4, #0\n    sub r1, r5, #1\n    bl ov44_0222F780\n    add r0, r4, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    bl ov44_02231F04\n    add r2, r0, #0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r1, [sp]\n    add r0, r4, r0\n    bl ov44_02231F14\n    sub r7, r5, #1\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov44_02231958\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov44_02229F00\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    ldr r0, _0222DD60 ; =0x0000037E\n    add r1, r7, #0\n    strh r5, [r4, r0]\n    add r0, r4, #0\n    bl ov44_0222F780\n    cmp r5, #0xf\n    bne _0222DCA4\n    mov r1, #3\n    b _0222DD4C\n    cmp r5, #0x13\n    bne _0222DCAC\n    mov r1, #4\n    b _0222DD4C\n    cmp r5, #0x12\n    bne _0222DCB4\n    mov r1, #0x53\n    b _0222DD4C\n    cmp r5, #0x15\n    bne _0222DCBC\n    mov r1, #5\n    b _0222DD4C\n    cmp r5, #0x14\n    bne _0222DCC4\n    mov r1, #0x54\n    b _0222DD4C\n    cmp r5, #0x17\n    bne _0222DCDA\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    mov r2, #0\n    bl BufferWiFiPlazaActivityName\n    mov r1, #6\n    b _0222DD4C\n    cmp r5, #0x16\n    bne _0222DCE2\n    mov r1, #0x55\n    b _0222DD4C\n    cmp r5, #0x19\n    bne _0222DCF8\n    mov r0, #0x59\n    lsl r0, r0, #2\n    mov r1, #1\n    ldr r0, [r4, r0]\n    add r2, r1, #0\n    bl BufferWiFiPlazaActivityName\n    mov r1, #6\n    b _0222DD4C\n    cmp r5, #0x18\n    bne _0222DD00\n    mov r1, #0x55\n    b _0222DD4C\n    cmp r5, #0x1b\n    bne _0222DD16\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    mov r2, #2\n    bl BufferWiFiPlazaActivityName\n    mov r1, #6\n    b _0222DD4C\n    cmp r5, #0x1a\n    bne _0222DD1E\n    mov r1, #0x55\n    b _0222DD4C\n    add r0, r5, #0\n    bl ov44_02229FB4\n    cmp r0, #0\n    beq _0222DD2C\n    mov r1, #2\n    b _0222DD4C\n    cmp r5, #8\n    bne _0222DD34\n    mov r1, #0x52\n    b _0222DD4C\n    add r0, r5, #0\n    bl ov44_0222A020\n    cmp r0, #0\n    beq _0222DD42\n    mov r1, #0x51\n    b _0222DD4C\n    cmp r5, #1\n    bne _0222DD4A\n    mov r1, #0x56\n    b _0222DD4C\n    mov r1, #7\n    add r0, r4, #0\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x2b\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222DD60: .word 0x0000037E"
    );
    #endif
}

void ov44_0222DD64(void) {
    /* Original at 0x0222DD64 */
    /* Requires manual decompilation - 291 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    add r5, r0, #0\n    str r1, [sp, #0x14]\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222DD80\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    ldr r0, [sp, #0x14]\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02231C70\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_0222AAEC\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov44_0222C500\n    cmp r0, #0\n    beq _0222DDC0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r6, #0\n    bl ov44_02231F88\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    ldr r0, [sp, #0x14]\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    cmp r6, #0\n    bne _0222DDFE\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r6, #0\n    bl ov44_02231F88\n    mov r0, #0x56\n    lsl r0, r0, #2\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    bl DestroyListMenu\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    ldr r0, [sp, #0x14]\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_02231958\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_02229F00\n    ldr r1, _0222DFDC ; =0x0000037E\n    ldrh r2, [r5, r1]\n    cmp r2, r0\n    beq _0222DE40\n    add r1, #0xe\n    add r0, r5, r1\n    add r1, r6, #0\n    bl ov44_02231F88\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    ldr r0, [sp, #0x14]\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222DE58\n    ldr r0, [sp, #0x14]\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    ldr r3, _0222DFE0 ; =ov44_022354C8\n    mov r0, #2\n    str r0, [sp, #0x1c]\n    add r2, sp, #0x24\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02231C70\n    add r1, r0, #0\n    add r0, r5, #0\n    sub r1, r1, #1\n    bl ov44_02231958\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov44_02229F00\n    add r6, #0x21\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    mov r0, #0xe\n    ldrb r1, [r6]\n    lsl r0, r0, #6\n    strh r1, [r5, r0]\n    ldr r0, [r5, #4]\n    add r0, #0x21\n    ldrb r0, [r0]\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x18]\n    mov r0, #2\n    mov r1, #0x35\n    bl ListMenuItems_New\n    mov r1, #0x55\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0\n    ldr r6, _0222DFE4 ; =ov44_022353A0\n    str r0, [sp, #0x20]\n    add r7, sp, #0x24\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    bne _0222DF3A\n    add r0, r4, #0\n    bl ov44_0222A048\n    cmp r0, #0\n    bne _0222DEDC\n    cmp r4, #0\n    beq _0222DEDC\n    cmp r4, #0x1c\n    beq _0222DEDC\n    cmp r4, #0x1d\n    blo _0222DEF0\n    ldrh r0, [r7, #0x12]\n    sub r0, r0, #1\n    strh r0, [r7, #0x12]\n    ldrh r0, [r7, #0x10]\n    sub r0, r0, #1\n    strh r0, [r7, #0x10]\n    ldr r0, [sp, #0x1c]\n    sub r0, r0, #1\n    str r0, [sp, #0x1c]\n    b _0222DF4E\n    cmp r4, #0x10\n    bne _0222DF24\n    ldr r0, [sp, #0x18]\n    cmp r0, #2\n    bne _0222DF10\n    mov r0, #0x55\n    mov r1, #0x5a\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r3, [r6, #4]\n    mov r2, #0x24\n    bl ListMenuItems_AppendFromMsgData\n    b _0222DF4E\n    ldrh r0, [r7, #0x12]\n    sub r0, r0, #1\n    strh r0, [r7, #0x12]\n    ldrh r0, [r7, #0x10]\n    sub r0, r0, #1\n    strh r0, [r7, #0x10]\n    ldr r0, [sp, #0x1c]\n    sub r0, r0, #1\n    str r0, [sp, #0x1c]\n    b _0222DF4E\n    mov r0, #0x55\n    mov r1, #0x5a\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, [r6]\n    ldr r3, [r6, #4]\n    bl ListMenuItems_AppendFromMsgData\n    b _0222DF4E\n    mov r0, #0x55\n    mov r1, #0x5a\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, [r6]\n    ldr r3, [r6, #4]\n    bl ListMenuItems_AppendFromMsgData\n    ldr r0, [sp, #0x20]\n    add r6, #8\n    add r0, r0, #1\n    str r0, [sp, #0x20]\n    cmp r0, #2\n    blo _0222DEC0\n    ldr r0, [sp, #0x1c]\n    mov r1, #3\n    sub r0, r1, r0\n    lsl r0, r0, #1\n    add r0, #0xb\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xf\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x32\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x3b\n    str r0, [sp, #0x10]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    lsl r1, r1, #4\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    mov r2, #2\n    mov r3, #0x10\n    bl AddWindowParameterized\n    mov r0, #0x32\n    lsl r0, r0, #4\n    ldr r2, _0222DFE8 ; =0x000001D9\n    add r0, r5, r0\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    str r0, [sp, #0x24]\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    str r0, [sp, #0x30]\n    add r0, sp, #0x24\n    add r2, r1, #0\n    mov r3, #0x35\n    bl ListMenuInit\n    mov r1, #0x56\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0xd2\n    mov r1, #0x2c\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    ldr r0, [sp, #0x14]\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    _0222DFDC: .word 0x0000037E\n    _0222DFE0: .word ov44_022354C8\n    _0222DFE4: .word ov44_022353A0\n    _0222DFE8: .word 0x000001D9"
    );
    #endif
}

void ov44_0222DFEC(void) {
    /* Original at 0x0222DFEC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r2, _0222E028 ; =0x000001EF\n    mov r5, #0\n    add r1, r2, #0\n    add r1, #0x29\n    add r3, r2, #0\n    ldrh r4, [r0]\n    cmp r4, r3\n    bne _0222E004\n    mov r0, #0\n    pop {r4, r5}\n    bx lr\n    cmp r4, r2\n    bls _0222E00E\n    mov r0, #0\n    pop {r4, r5}\n    bx lr\n    ldrh r4, [r0, #0xc]\n    cmp r4, r1\n    bls _0222E01A\n    mov r0, #0\n    pop {r4, r5}\n    bx lr\n    add r5, r5, #1\n    add r0, r0, #2\n    cmp r5, #6\n    blt _0222DFF8\n    mov r0, #1\n    pop {r4, r5}\n    bx lr\n    _0222E028: .word 0x000001EF"
    );
    #endif
}

u8 ov44_0222E02C(void) {
    return 3;
}

void ov44_0222E030(void) {
    /* Original at 0x0222E030 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0\n    bl ov00_021E70B8\n    bl ov44_0222E074\n    cmp r0, #0\n    bne _0222E056\n    bl IsNighttime\n    mov r0, #0\n    bl Sound_SetScene\n    ldr r1, _0222E070 ; =0x00000427\n    mov r0, #0xb\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    pop {r4, pc}\n    bl GF_GetCurrentPlayingBGM\n    add r4, r0, #0\n    bl GF_GetCurrentPlayingBGM\n    bl GF_GetVolumeBySeqNo\n    add r1, r0, #0\n    add r0, r4, #0\n    bl GF_SetVolumeBySeqNo\n    pop {r4, pc}\n    nop\n    _0222E070: .word 0x00000427"
    );
    #endif
}

void ov44_0222E074(void) {
    GF_GetCurrentPlayingBGM(0, 1);
}

void ov44_0222E090(void) {
    /* Original at 0x0222E090 */
    /* Requires manual decompilation - 422 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    mov r0, #0x56\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    str r1, [sp]\n    mov r6, #0\n    bl ListMenu_ProcessInput\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov44_0222C500\n    cmp r0, #0\n    beq _0222E0B2\n    sub r7, r6, #2\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02231C70\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_0222AAEC\n    str r0, [sp, #0x14]\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222E11C\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl sub_0200E5D4\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0x56\n    lsl r0, r0, #2\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    bl DestroyListMenu\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    beq _0222E110\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r1, [sp, #0x14]\n    add r0, r5, r0\n    bl ov44_02231F88\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    ldr r0, [sp]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    mvn r0, r0\n    cmp r7, r0\n    beq _0222E1B0\n    add r0, r0, #1\n    cmp r7, r0\n    bne _0222E1C0\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    bne _0222E15C\n    mov r0, #0x56\n    lsl r0, r0, #2\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    bl DestroyListMenu\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r6, #1\n    b _0222E3FE\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_02231958\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov44_02229F00\n    ldr r1, _0222E450 ; =0x0000037E\n    add r6, #0x21\n    ldrh r1, [r5, r1]\n    ldrb r6, [r6]\n    cmp r1, r0\n    bne _0222E18C\n    bl ov44_02229F44\n    cmp r0, #0\n    bne _0222E1AA\n    mov r0, #0xe\n    lsl r0, r0, #6\n    ldrh r0, [r5, r0]\n    cmp r0, r6\n    beq _0222E1AA\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r6, #1\n    b _0222E3FE\n    ldr r0, [sp]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0222E454 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E3FE\n    ldr r0, _0222E454 ; =0x000005DD\n    bl PlaySE\n    cmp r7, #1\n    beq _0222E1CC\n    b _0222E3F2\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, #0x3a\n    strh r4, [r5, r0]\n    cmp r4, #0\n    bne _0222E1DE\n    b _0222E3FE\n    add r0, r5, #0\n    bl ov44_0222A168\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl ov44_0222E02C\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_02231958\n    str r0, [sp, #8]\n    ldr r1, [sp, #8]\n    add r0, r5, #0\n    bl ov44_02229F00\n    ldr r1, [sp, #8]\n    add r7, r0, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    str r1, [sp, #4]\n    ldr r1, _0222E450 ; =0x0000037E\n    ldrh r1, [r5, r1]\n    cmp r1, r7\n    bne _0222E226\n    bl ov44_02229F44\n    cmp r0, #0\n    bne _0222E244\n    mov r0, #0xe\n    lsl r0, r0, #6\n    ldrh r1, [r5, r0]\n    ldr r0, [sp, #4]\n    cmp r1, r0\n    beq _0222E244\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r6, #1\n    b _0222E3FE\n    ldr r0, [sp, #8]\n    bl ov44_0222DFEC\n    cmp r0, #0\n    bne _0222E26C\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r6, #1\n    b _0222E3FE\n    add r0, r7, #0\n    bl ov44_0222A090\n    cmp r0, #0\n    beq _0222E2A2\n    ldr r0, [sp, #0x10]\n    cmp r0, #2\n    bge _0222E2A2\n    cmp r7, #0xf\n    bne _0222E28C\n    add r0, r5, #0\n    mov r1, #0x59\n    mov r2, #0\n    bl ov44_0222F510\n    b _0222E296\n    add r0, r5, #0\n    mov r1, #0x67\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r6, #1\n    b _0222E3FE\n    cmp r7, #0x13\n    bne _0222E2E2\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    beq _0222E2E2\n    cmp r0, #1\n    bne _0222E2BC\n    add r0, r5, #0\n    mov r1, #0x68\n    mov r2, #0\n    bl ov44_0222F510\n    b _0222E2D6\n    cmp r0, #3\n    bne _0222E2CC\n    add r0, r5, #0\n    mov r1, #0x6a\n    mov r2, #0\n    bl ov44_0222F510\n    b _0222E2D6\n    add r0, r5, #0\n    mov r1, #0x69\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r6, #1\n    b _0222E3FE\n    add r0, r7, #0\n    bl ov44_02229F44\n    cmp r0, #0\n    bne _0222E32C\n    ldr r0, [r5, #4]\n    add r0, #0x21\n    ldrb r1, [r0]\n    ldr r0, [sp, #4]\n    cmp r0, r1\n    beq _0222E32C\n    cmp r0, #0\n    beq _0222E308\n    add r0, r5, #0\n    mov r1, #0x86\n    mov r2, #0\n    bl ov44_0222F510\n    b _0222E312\n    add r0, r5, #0\n    mov r1, #0x87\n    mov r2, #0\n    bl ov44_0222F510\n    add r0, r7, #0\n    bl ov44_0222A0B4\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F818\n    mov r0, #0xd2\n    mov r1, #0x3f\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r6, #1\n    b _0222E3FE\n    add r0, r7, #0\n    bl ov44_0222A0B4\n    add r7, r0, #0\n    cmp r7, #0x1d\n    beq _0222E3FE\n    sub r0, r4, #1\n    bl ov44_02231974\n    cmp r0, #6\n    bne _0222E3D4\n    add r0, r5, #0\n    sub r1, r4, #1\n    add r2, r7, #0\n    bl ov44_0223197C\n    cmp r0, #0\n    beq _0222E3B6\n    mov r0, #0xd\n    ldr r1, _0222E458 ; =0x00000708\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    add r0, r7, #0\n    bl ov44_0222A1B4\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov44_0222F818\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x11\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222E386\n    bl GF_AssertFail\n    mov r1, #0x2d\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0xee\n    bl WaitingIcon_New\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    cmp r7, #1\n    beq _0222E3A4\n    mov r0, #0xd2\n    mov r1, #0x2d\n    lsl r0, r0, #2\n    b _0222E3B0\n    mov r0, #0xd\n    ldr r1, _0222E458 ; =0x00000708\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    mov r1, #0x15\n    add r0, #8\n    str r1, [r5, r0]\n    mov r6, #1\n    b _0222E3FE\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r6, #1\n    b _0222E3FE\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r6, #1\n    b _0222E3FE\n    cmp r7, #2\n    bne _0222E3FE\n    mov r0, #0xd2\n    mov r1, #0x36\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    cmp r6, #0\n    bne _0222E408\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl sub_0200E5D4\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0x56\n    lsl r0, r0, #2\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    bl DestroyListMenu\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    beq _0222E448\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r1, [sp, #0x14]\n    add r0, r5, r0\n    bl ov44_02231F88\n    ldr r0, [sp]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222E450: .word 0x0000037E\n    _0222E454: .word 0x000005DD\n    _0222E458: .word 0x00000708"
    );
    #endif
}

void ov44_0222E45C(void) {
    /* Original at 0x0222E45C */
    /* Requires manual decompilation - 157 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0xd\n    lsl r0, r0, #6\n    add r4, r1, #0\n    ldr r1, [r5, r0]\n    sub r1, r1, #1\n    str r1, [r5, r0]\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    bge _0222E47C\n    mov r1, #0x46\n    add r0, #8\n    str r1, [r5, r0]\n    b _0222E5D0\n    bl sub_020390C4\n    cmp r0, #3\n    bne _0222E4A4\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x12\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E5D0\n    bl sub_020390C4\n    cmp r0, #5\n    bne _0222E4CC\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0xf\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E5D0\n    bl sub_020390C4\n    cmp r0, #4\n    beq _0222E4DC\n    bl sub_02039264\n    cmp r0, #0\n    beq _0222E4FC\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x12\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E5D0\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222E50C\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    b _0222E5D0\n    bl sub_020390C4\n    cmp r0, #1\n    bne _0222E5D0\n    ldr r1, [r5, #4]\n    add r0, r5, #0\n    bl ov44_02229F00\n    add r6, r0, #0\n    bl ov44_02229F44\n    cmp r0, #0\n    bne _0222E54A\n    mov r0, #0xd2\n    mov r1, #0x31\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl sub_02034354\n    mov r0, #0xd7\n    mov r1, #0x1e\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E5D0\n    mov r0, #0\n    bl sub_020373B4\n    cmp r0, #1\n    bne _0222E5AA\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl sub_02034354\n    mov r0, #0\n    mov r1, #1\n    bl sub_020398D4\n    add r0, r6, #0\n    bl ov44_0222A1B4\n    add r0, r6, #0\n    bl ov44_02229F74\n    mov r1, #0xd3\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0\n    bl sub_020378E4\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x35\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0xe1\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r4, #2\n    b _0222E5D0\n    bl sub_02037880\n    cmp r0, #1\n    bne _0222E5D0\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x12\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov44_0222E5D8(void) {
    /* Original at 0x0222E5D8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov44_0222E5DC(void) {
    /* Original at 0x0222E5DC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov44_0222E5E0(void) {
    /* Original at 0x0222E5E0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222E5F8\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov44_0222F8F0\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    bl sub_02039358\n    mov r1, #0\n    mov r0, #0x37\n    mvn r1, r1\n    lsl r0, r0, #4\n    str r1, [r5, r0]\n    mov r1, #0x13\n    sub r0, #0x28\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov44_022319EC\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222E62C(void) {
    /* Original at 0x0222E62C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov44_0222E630(void) {
    /* Original at 0x0222E630 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov44_0222E634(void) {
    /* Original at 0x0222E634 */
    /* Requires manual decompilation - 185 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_02231958\n    add r7, r0, #0\n    ldr r1, [r5, #4]\n    add r0, r5, #0\n    bl ov44_02229F00\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov44_02229F00\n    ldr r1, [r5, #4]\n    add r1, #0x21\n    ldrb r1, [r1]\n    cmp r4, #0xc\n    bne _0222E672\n    cmp r0, #5\n    bne _0222E672\n    mov r0, #0xd2\n    mov r1, #0x31\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E790\n    cmp r4, #0xd\n    bne _0222E684\n    cmp r0, #6\n    bne _0222E684\n    mov r0, #0xd2\n    mov r1, #0x31\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E790\n    cmp r4, #0xe\n    bne _0222E696\n    cmp r0, #7\n    bne _0222E696\n    mov r0, #0xd2\n    mov r1, #0x31\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E790\n    cmp r4, #9\n    bne _0222E6A8\n    cmp r0, #2\n    bne _0222E6A8\n    mov r0, #0xd2\n    mov r1, #0x31\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E790\n    cmp r4, #0xa\n    bne _0222E6BA\n    cmp r0, #3\n    bne _0222E6BA\n    mov r0, #0xd2\n    mov r1, #0x31\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E790\n    cmp r4, #0xb\n    bne _0222E6CC\n    cmp r0, #4\n    bne _0222E6CC\n    mov r0, #0xd2\n    mov r1, #0x31\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E790\n    cmp r4, #0xf\n    bne _0222E6DE\n    cmp r0, #8\n    bne _0222E6DE\n    mov r0, #0xd2\n    mov r1, #0x31\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E790\n    cmp r4, #0x13\n    bne _0222E6F0\n    cmp r0, #0x12\n    bne _0222E6F0\n    mov r0, #0xd2\n    mov r1, #0x31\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E790\n    cmp r4, #0x15\n    bne _0222E702\n    cmp r0, #0x14\n    bne _0222E702\n    mov r0, #0xd2\n    mov r1, #0x31\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E790\n    cmp r4, #0x17\n    bne _0222E714\n    cmp r0, #0x16\n    bne _0222E714\n    mov r0, #0xd2\n    mov r1, #0x31\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E790\n    cmp r4, #0x19\n    bne _0222E726\n    cmp r0, #0x18\n    bne _0222E726\n    mov r0, #0xd2\n    mov r1, #0x31\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E790\n    cmp r4, #0x1b\n    bne _0222E738\n    cmp r0, #0x1a\n    bne _0222E738\n    mov r0, #0xd2\n    mov r1, #0x31\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E790\n    cmp r4, #0x10\n    bne _0222E750\n    cmp r0, #1\n    bne _0222E750\n    cmp r1, #0\n    ble _0222E750\n    mov r0, #0xd2\n    mov r1, #0x16\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222E762\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x12\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    bl sub_02039358\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0xb\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl sub_02034354\n    mov r0, #0xd2\n    mov r1, #0x31\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0x1e\n    add r0, #0x14\n    str r1, [r5, r0]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_0222E7C4(void) {
    /* Original at 0x0222E7C4 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl sub_020390C4\n    cmp r0, #3\n    blt _0222E7F0\n    mov r1, #0x37\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x12\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E852\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222E800\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    b _0222E852\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_02231958\n    add r6, r0, #0\n    ldr r1, [r5, #4]\n    add r0, r5, #0\n    bl ov44_02229F00\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov44_02229F00\n    add r6, r0, #0\n    bl ov44_0222A0B4\n    cmp r4, r0\n    beq _0222E84E\n    cmp r4, r6\n    beq _0222E84E\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E852\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #0xe1\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov44_0222E860(void) {
    /* Original at 0x0222E860 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_020390C4\n    cmp r0, #4\n    bge _0222E880\n    bl sub_02039264\n    cmp r0, #0\n    bne _0222E880\n    mov r0, #0\n    bl sub_020373B4\n    cmp r0, #0\n    bne _0222E8BA\n    mov r1, #0xe1\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    cmp r0, #0\n    beq _0222E896\n    add r0, r5, #0\n    mov r1, #0x65\n    mov r2, #0\n    bl ov44_0222F510\n    b _0222E8AA\n    sub r1, #0x14\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x12\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xe1\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0x1b\n    sub r0, #0x3c\n    str r1, [r5, r0]\n    b _0222E902\n    add r0, r5, #0\n    bl ov44_0222E7C4\n    cmp r0, #0\n    bne _0222E902\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    bne _0222E8F2\n    mov r0, #0xd\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0222E902\n    bl sub_02037BEC\n    mov r0, #0xe\n    bl sub_02037AC0\n    mov r0, #0xe1\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0x32\n    sub r0, #0x3c\n    str r1, [r5, r0]\n    b _0222E902\n    sub r1, r1, #1\n    str r1, [r5, r0]\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _0222E902\n    mov r0, #0xd\n    bl sub_02037AC0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222E908(void) {
    /* Original at 0x0222E908 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov44_0222E7C4\n    cmp r0, #0\n    bne _0222E942\n    mov r0, #0xe\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0222E942\n    ldr r1, [r5, #4]\n    add r0, r5, #0\n    bl ov44_02229F00\n    add r1, sp, #0\n    strh r0, [r1]\n    bl sub_0203769C\n    add r1, sp, #0\n    bl sub_02037C0C\n    cmp r0, #0\n    beq _0222E942\n    mov r0, #0xd2\n    mov r1, #0x33\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222E948(void) {
    /* Original at 0x0222E948 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0222E95A\n    mov r0, #1\n    b _0222E95C\n    mov r0, #0\n    bl sub_02037C44\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov44_0222E7C4\n    cmp r0, #0\n    bne _0222E9BE\n    cmp r4, #0\n    beq _0222E9BE\n    ldr r1, [r5, #4]\n    add r0, r5, #0\n    bl ov44_02229F00\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    add r0, r6, #0\n    bl ov44_0222A0B4\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    ldrh r0, [r4]\n    cmp r0, r1\n    beq _0222E990\n    cmp r0, r6\n    bne _0222E9A0\n    mov r0, #0xf\n    bl sub_02037AC0\n    mov r0, #0xd2\n    mov r1, #0x34\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222E9BE\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_0222E9C4(void) {
    /* Original at 0x0222E9C4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov44_0222E7C4\n    cmp r0, #0\n    bne _0222E9F6\n    mov r0, #0xf\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0222E9F6\n    bl sub_02034434\n    mov r0, #1\n    add r1, r0, #0\n    bl sub_020398D4\n    mov r0, #0x12\n    bl sub_02037AC0\n    mov r0, #0xd2\n    mov r1, #0x35\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222E9FC(void) {
    /* Original at 0x0222E9FC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222EA16\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _0222EA28\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222EA2C(void) {
    /* Original at 0x0222EA2C */
    /* Requires manual decompilation - 167 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x2c\n    add r4, r0, #0\n    add r5, r1, #0\n    bl ov44_0222E7C4\n    cmp r0, #0\n    bne _0222EA50\n    mov r0, #0x12\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0222EA50\n    add r0, r4, #0\n    bl ov44_0222E9FC\n    cmp r0, #1\n    beq _0222EA52\n    b _0222EB88\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    add r1, sp, #0xc\n    mov r2, #0x35\n    bl sub_0203A1C4\n    add r0, r4, #0\n    bl ov44_0222F7BC\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov44_02231958\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov44_02229F00\n    add r1, r0, #0\n    cmp r1, #0xf\n    beq _0222EA84\n    cmp r1, #8\n    bne _0222EA90\n    mov r0, #0xd3\n    mov r2, #7\n    lsl r0, r0, #2\n    mov r1, #8\n    str r2, [r4, r0]\n    b _0222EB68\n    sub r0, #0x12\n    cmp r0, #1\n    bhi _0222EAA2\n    mov r0, #0xd3\n    mov r2, #0xb\n    lsl r0, r0, #2\n    mov r1, #0x12\n    str r2, [r4, r0]\n    b _0222EB68\n    add r0, r1, #0\n    sub r0, #0x14\n    cmp r0, #1\n    bhi _0222EAB6\n    mov r0, #0xd3\n    mov r2, #0xc\n    lsl r0, r0, #2\n    mov r1, #0x14\n    str r2, [r4, r0]\n    b _0222EB68\n    add r0, r1, #0\n    sub r0, #0x16\n    cmp r0, #1\n    bhi _0222EACA\n    mov r0, #0xd3\n    mov r2, #0xd\n    lsl r0, r0, #2\n    mov r1, #0x16\n    str r2, [r4, r0]\n    b _0222EB68\n    add r0, r1, #0\n    sub r0, #0x18\n    cmp r0, #1\n    bhi _0222EADE\n    mov r0, #0xd3\n    mov r2, #0xe\n    lsl r0, r0, #2\n    mov r1, #0x18\n    str r2, [r4, r0]\n    b _0222EB68\n    add r0, r1, #0\n    sub r0, #0x1a\n    cmp r0, #1\n    bhi _0222EAF2\n    mov r0, #0xd3\n    mov r2, #0xf\n    lsl r0, r0, #2\n    mov r1, #0x1a\n    str r2, [r4, r0]\n    b _0222EB68\n    cmp r1, #9\n    beq _0222EAFA\n    cmp r1, #2\n    bne _0222EB06\n    mov r0, #0xd3\n    mov r2, #1\n    lsl r0, r0, #2\n    mov r1, #2\n    str r2, [r4, r0]\n    b _0222EB68\n    cmp r1, #0xa\n    beq _0222EB0E\n    cmp r1, #3\n    bne _0222EB1A\n    mov r0, #0xd3\n    mov r2, #2\n    lsl r0, r0, #2\n    mov r1, #3\n    str r2, [r4, r0]\n    b _0222EB68\n    cmp r1, #0xb\n    beq _0222EB22\n    cmp r1, #4\n    bne _0222EB2E\n    mov r0, #0xd3\n    mov r2, #3\n    lsl r0, r0, #2\n    mov r1, #4\n    str r2, [r4, r0]\n    b _0222EB68\n    cmp r1, #0xc\n    beq _0222EB36\n    cmp r1, #5\n    bne _0222EB42\n    mov r0, #0xd3\n    mov r2, #4\n    lsl r0, r0, #2\n    mov r1, #5\n    str r2, [r4, r0]\n    b _0222EB68\n    cmp r1, #0xd\n    beq _0222EB4A\n    cmp r1, #6\n    bne _0222EB56\n    mov r0, #0xd3\n    mov r2, #5\n    lsl r0, r0, #2\n    mov r1, #6\n    str r2, [r4, r0]\n    b _0222EB68\n    cmp r1, #0xe\n    beq _0222EB5E\n    cmp r1, #7\n    bne _0222EB68\n    mov r0, #0xd3\n    mov r2, #6\n    lsl r0, r0, #2\n    mov r1, #7\n    str r2, [r4, r0]\n    add r0, r4, #0\n    bl ov44_0222F818\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x35\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r5, #2\n    add r0, r5, #0\n    add sp, #0x2c\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov44_0222EB90(void) {
    /* Original at 0x0222EB90 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x57\n    lsl r0, r0, #2\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0xd9\n    mov r1, #0\n    lsl r0, r0, #2\n    strb r1, [r5, r0]\n    bl ov44_0222ADD0\n    mov r1, #0xd2\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222EBB8(void) {
    /* Original at 0x0222EBB8 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xd2\n    mov r3, #0x37\n    lsl r2, r2, #2\n    str r3, [r0, r2]\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov44_0222EBC4(void) {
    /* Original at 0x0222EBC4 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222EBE0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov44_0222C4EC\n    cmp r0, #0\n    beq _0222EBF2\n    mov r0, #0xd2\n    mov r1, #0x38\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    ldr r0, _0222EC10 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _0222EC04\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0222EC0C\n    mov r0, #0xd2\n    mov r1, #0x38\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222EC10: .word gSystem"
    );
    #endif
}

void ov44_0222EC14(void) {
    ov44_0222F7BC(0xd2, 0x13);
}

void ov44_0222EC2C(void) {
    /* Original at 0x0222EC2C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222EC86\n    ldr r0, _0222EC8C ; =0x04000304\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222EC6A\n    mov r2, #0x57\n    mov r0, #0x35\n    lsl r2, r2, #2\n    str r0, [sp]\n    ldr r0, [r5, r2]\n    ldr r1, _0222EC90 ; =ov44_0223538C\n    add r2, #0x7d\n    mov r3, #0xb\n    bl Std_CreateYesNoMenu\n    mov r1, #0x61\n    b _0222EC7A\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, _0222EC94 ; =ov44_02235374\n    mov r2, #0\n    bl ov44_02231A14\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0xd2\n    mov r1, #0x3a\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222EC8C: .word 0x04000304\n    _0222EC90: .word ov44_0223538C\n    _0222EC94: .word ov44_02235374"
    );
    #endif
}

void ov44_0222EC98(void) {
    /* Original at 0x0222EC98 */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    ldr r0, _0222EDB4 ; =0x04000304\n    add r6, r1, #0\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222ED32\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x35\n    bl Handle2dMenuInput_DeleteOnFinish\n    add r5, r0, #0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222ECD0\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl ov44_0222C500\n    cmp r0, #0\n    beq _0222ECF2\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _0222ECEE\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x35\n    bl Clear2dMenuWindowAndDelete\n    mov r5, #1\n    mvn r5, r5\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _0222ECFE\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    cmp r5, #0\n    bne _0222ED1C\n    add r0, r4, #0\n    mov r1, #0x1a\n    mov r2, #1\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x3b\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r1, #1\n    add r0, #0x14\n    str r1, [r4, r0]\n    b _0222EDB0\n    add r0, r4, #0\n    bl ov44_0222F7BC\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov44_022319EC\n    b _0222EDB0\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    add r5, r0, #0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222ED54\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl ov44_0222C500\n    cmp r0, #0\n    beq _0222ED60\n    mov r5, #2\n    cmp r5, #1\n    bne _0222ED88\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r4, #0\n    mov r1, #0x1a\n    mov r2, #1\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x3b\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r1, #1\n    add r0, #0x14\n    str r1, [r4, r0]\n    b _0222EDB0\n    cmp r5, #2\n    bne _0222EDAC\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r4, #0\n    bl ov44_0222F7BC\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov44_022319EC\n    b _0222EDB0\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    _0222EDB4: .word 0x04000304"
    );
    #endif
}

void ov44_0222EDB8(void) {
    /* Original at 0x0222EDB8 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222EDD4\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    cmp r1, #1\n    bne _0222EDE6\n    mov r1, #0\n    str r1, [r5, r0]\n    bl sub_02039330\n    bl sub_02037D78\n    cmp r0, #0\n    bne _0222EE0C\n    ldr r0, [r5]\n    bl sub_0202C46C\n    add r0, r5, #0\n    mov r1, #0x1b\n    mov r2, #1\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x3c\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0x1e\n    add r0, #0x14\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222EE10(void) {
    /* Original at 0x0222EE10 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222EE2C\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    sub r0, r0, #1\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    cmp r0, #0\n    bne _0222EE50\n    add r0, r1, #0\n    mov r2, #8\n    sub r0, #0x10\n    str r2, [r5, r0]\n    mov r0, #0x22\n    sub r1, #0x14\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222EE54(void) {
    /* Original at 0x0222EE54 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x10\n    add r4, r1, #0\n    bl sub_02037B38\n    cmp r0, #0\n    bne _0222EE68\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    mov r1, #1\n    bl sub_020398D4\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222EEC4\n    ldr r0, _0222EEC8 ; =0x04000304\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222EEA8\n    mov r2, #0x57\n    mov r0, #0x35\n    lsl r2, r2, #2\n    str r0, [sp]\n    ldr r0, [r5, r2]\n    ldr r1, _0222EECC ; =ov44_0223538C\n    add r2, #0x7d\n    mov r3, #0xb\n    bl Std_CreateYesNoMenu\n    mov r1, #0x61\n    b _0222EEB8\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, _0222EED0 ; =ov44_02235374\n    mov r2, #0\n    bl ov44_02231A28\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0xd2\n    mov r1, #0x3e\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222EEC8: .word 0x04000304\n    _0222EECC: .word ov44_0223538C\n    _0222EED0: .word ov44_02235374"
    );
    #endif
}

void ov44_0222EED4(void) {
    /* Original at 0x0222EED4 */
    /* Requires manual decompilation - 207 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222EEF0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    bl sub_02039274\n    cmp r0, #0\n    bne _0222EF08\n    bl sub_02039264\n    cmp r0, #0\n    bne _0222EF08\n    bl sub_020390C4\n    cmp r0, #3\n    blt _0222EF42\n    ldr r0, _0222F0A8 ; =0x04000304\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222EF24\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x35\n    bl Clear2dMenuWindowAndDelete\n    b _0222EF2E\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r5, #0\n    mov r1, #0x65\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1c\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    b _0222F0A4\n    bl sub_020393C8\n    cmp r0, #0\n    ldr r0, _0222F0A8 ; =0x04000304\n    beq _0222EF78\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222EF66\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x35\n    bl Clear2dMenuWindowAndDelete\n    b _0222EF70\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    b _0222F0A4\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222F000\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x35\n    bl Handle2dMenuInput_DeleteOnFinish\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0222EF9C\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    cmp r0, #0\n    bne _0222EFE2\n    add r0, r5, #0\n    mov r1, #0x8a\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222EFB8\n    bl GF_AssertFail\n    mov r1, #0x2d\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0xee\n    bl WaitingIcon_New\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r1, #0xe1\n    mov r0, #1\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    mov r2, #0x31\n    sub r0, #0x3c\n    str r2, [r5, r0]\n    mov r0, #0x1e\n    sub r1, #0x28\n    str r0, [r5, r1]\n    b _0222F08A\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    bl sub_020343E4\n    bl sub_020393B4\n    mov r0, #0xd7\n    mov r1, #0x14\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0x41\n    sub r0, #0x14\n    str r1, [r5, r0]\n    b _0222F08A\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    bne _0222F05A\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r5, #0\n    mov r1, #0x8a\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222F030\n    bl GF_AssertFail\n    mov r1, #0x2d\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0xee\n    bl WaitingIcon_New\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r1, #0xe1\n    mov r0, #1\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    mov r2, #0x31\n    sub r0, #0x3c\n    str r2, [r5, r0]\n    mov r0, #0x1e\n    sub r1, #0x28\n    str r0, [r5, r1]\n    b _0222F08A\n    cmp r0, #2\n    bne _0222F086\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    bl sub_020343E4\n    bl sub_020393B4\n    mov r0, #0xd7\n    mov r1, #0x14\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0x41\n    sub r0, #0x14\n    str r1, [r5, r0]\n    b _0222F08A\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #0xe1\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _0222F0A4\n    bl sub_020398C8\n    add r1, r0, #0\n    str r0, [r5, #4]\n    add r1, #0x22\n    ldrb r1, [r1]\n    add r0, #0x21\n    strb r1, [r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222F0A8: .word 0x04000304"
    );
    #endif
}

void ov44_0222F0AC(void) {
    /* Original at 0x0222F0AC */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r6, r1, #0\n    bl ov44_02231C70\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_0222AAEC\n    cmp r0, #0\n    bne _0222F0E8\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_02231958\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov44_02229F00\n    ldr r2, _0222F184 ; =0x0000037E\n    add r7, #0x21\n    ldrh r3, [r5, r2]\n    ldrb r1, [r7]\n    cmp r3, r0\n    bne _0222F10E\n    add r0, r2, #2\n    ldrh r0, [r5, r0]\n    cmp r0, r1\n    beq _0222F12C\n    add r0, r5, #0\n    sub r1, r4, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222F180\n    ldr r0, _0222F188 ; =0x04000304\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222F164\n    mov r2, #0x57\n    mov r0, #0x35\n    lsl r2, r2, #2\n    str r0, [sp]\n    ldr r0, [r5, r2]\n    ldr r1, _0222F18C ; =ov44_0223538C\n    add r2, #0x7d\n    mov r3, #0xb\n    bl Std_CreateYesNoMenu\n    mov r1, #0x61\n    b _0222F174\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, _0222F190 ; =ov44_02235374\n    mov r2, #0\n    bl ov44_02231A14\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0xd2\n    mov r1, #0x40\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222F184: .word 0x0000037E\n    _0222F188: .word 0x04000304\n    _0222F18C: .word ov44_0223538C\n    _0222F190: .word ov44_02235374"
    );
    #endif
}

void ov44_0222F194(void) {
    /* Original at 0x0222F194 */
    /* Requires manual decompilation - 363 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r4, r1, #0\n    bl ov44_02231C70\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov44_0222AAEC\n    cmp r0, #0\n    bne _0222F1F6\n    ldr r0, _0222F4D0 ; =0x04000304\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222F1CE\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x35\n    bl Clear2dMenuWindowAndDelete\n    b _0222F1D8\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r5, #0\n    sub r1, r6, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    sub r1, r6, #1\n    bl ov44_02231958\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov44_02229F00\n    ldr r2, _0222F4D4 ; =0x0000037E\n    add r7, #0x21\n    ldrh r3, [r5, r2]\n    ldrb r1, [r7]\n    cmp r3, r0\n    bne _0222F21C\n    add r0, r2, #2\n    ldrh r0, [r5, r0]\n    cmp r0, r1\n    beq _0222F260\n    ldr r0, _0222F4D0 ; =0x04000304\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222F238\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x35\n    bl Clear2dMenuWindowAndDelete\n    b _0222F242\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r5, #0\n    sub r1, r6, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_020393C8\n    cmp r0, #0\n    beq _0222F296\n    ldr r0, _0222F4D0 ; =0x04000304\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222F284\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x35\n    bl Clear2dMenuWindowAndDelete\n    b _0222F28E\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r5, #0\n    bl ov44_0222B9A0\n    b _0222F4CC\n    bl sub_020390C4\n    cmp r0, #3\n    ldr r0, _0222F4D0 ; =0x04000304\n    blt _0222F2DE\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222F2BA\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x35\n    bl Clear2dMenuWindowAndDelete\n    b _0222F2C4\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r5, #0\n    mov r1, #0x12\n    mov r2, #0\n    bl ov44_0222F510\n    bl sub_02039358\n    mov r0, #0xd2\n    mov r1, #0x1d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0222F3D4\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x35\n    bl Handle2dMenuInput_DeleteOnFinish\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0222F302\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #0\n    bne _0222F3AE\n    ldr r0, _0222F4D4 ; =0x0000037E\n    ldrh r0, [r5, r0]\n    bl ov44_0222A0B4\n    add r6, r0, #0\n    cmp r6, #0x1d\n    beq _0222F3AE\n    ldr r0, _0222F4D8 ; =0x00000382\n    ldrh r0, [r5, r0]\n    sub r0, r0, #1\n    bl ov44_02231974\n    cmp r0, #6\n    bne _0222F3AE\n    add r0, r5, #0\n    bl ov44_0222F89C\n    ldr r1, _0222F4D8 ; =0x00000382\n    add r0, r5, #0\n    ldrh r1, [r5, r1]\n    add r2, r6, #0\n    sub r1, r1, #1\n    bl ov44_0223197C\n    cmp r0, #0\n    beq _0222F3AE\n    mov r0, #0xd\n    ldr r1, _0222F4DC ; =0x00000708\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    add r0, r6, #0\n    bl ov44_0222A1B4\n    mov r0, #0\n    bl sub_020378E4\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov44_0222F818\n    ldr r1, _0222F4D8 ; =0x00000382\n    add r0, r5, #0\n    ldrh r1, [r5, r1]\n    sub r1, r1, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x11\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222F37A\n    bl GF_AssertFail\n    mov r1, #0x2d\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0xee\n    bl WaitingIcon_New\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    cmp r6, #1\n    beq _0222F39C\n    mov r0, #0xd2\n    mov r1, #0x2d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xd\n    ldr r1, _0222F4DC ; =0x00000708\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    mov r1, #0x15\n    add r0, #8\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    add r0, r5, #0\n    bl ov44_0222F8F0\n    add r0, r5, #0\n    bl ov44_0222C120\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    bne _0222F494\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    ldr r0, _0222F4D4 ; =0x0000037E\n    ldrh r0, [r5, r0]\n    bl ov44_0222A0B4\n    add r6, r0, #0\n    cmp r6, #0x1d\n    beq _0222F4CC\n    ldr r0, _0222F4D8 ; =0x00000382\n    ldrh r0, [r5, r0]\n    sub r0, r0, #1\n    bl ov44_02231974\n    cmp r0, #6\n    bne _0222F4CC\n    add r0, r5, #0\n    bl ov44_0222F89C\n    ldr r1, _0222F4D8 ; =0x00000382\n    add r0, r5, #0\n    ldrh r1, [r5, r1]\n    add r2, r6, #0\n    sub r1, r1, #1\n    bl ov44_0223197C\n    cmp r0, #0\n    beq _0222F4CC\n    mov r0, #0xd\n    ldr r1, _0222F4DC ; =0x00000708\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    add r0, r6, #0\n    bl ov44_0222A1B4\n    mov r0, #0\n    bl sub_020378E4\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov44_0222F818\n    ldr r1, _0222F4D8 ; =0x00000382\n    add r0, r5, #0\n    ldrh r1, [r5, r1]\n    sub r1, r1, #1\n    bl ov44_0222F780\n    add r0, r5, #0\n    mov r1, #0x11\n    mov r2, #0\n    bl ov44_0222F510\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222F460\n    bl GF_AssertFail\n    mov r1, #0x2d\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0xee\n    bl WaitingIcon_New\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    cmp r6, #1\n    beq _0222F482\n    mov r0, #0xd2\n    mov r1, #0x2d\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xd\n    ldr r1, _0222F4DC ; =0x00000708\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    mov r1, #0x15\n    add r0, #8\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #2\n    bne _0222F4C8\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r5, #0\n    bl ov44_0222F7BC\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov44_0222F818\n    add r0, r5, #0\n    bl ov44_0222F8F0\n    add r0, r5, #0\n    bl ov44_0222C120\n    mov r0, #0xd2\n    mov r1, #0x13\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222F4D0: .word 0x04000304\n    _0222F4D4: .word 0x0000037E\n    _0222F4D8: .word 0x00000382\n    _0222F4DC: .word 0x00000708"
    );
    #endif
}

void ov44_0222F4E0(void) {
    /* Original at 0x0222F4E0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    bl sub_02037D78\n    cmp r0, #0\n    bne _0222F508\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x35\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r4, #2\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov44_0222F510(void) {
    /* Original at 0x0222F510 */
    /* Requires manual decompilation - 151 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    beq _0222F520\n    mov r0, #1\n    b _0222F52E\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl Save_PlayerData_GetOptionsAddr\n    bl Options_GetTextFrameDelay\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    bl ov44_0222F910\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222F55C\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222F580\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    cmp r0, #8\n    beq _0222F5AC\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222F5AC\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    mov r0, #6\n    mov r1, #8\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xc\n    str r0, [sp, #0xc]\n    ldr r0, _0222F668 ; =0x0000012D\n    mov r1, #0x2d\n    str r0, [sp, #0x10]\n    add r0, #0x2f\n    lsl r1, r1, #4\n    mov r2, #2\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    add r3, r2, #0\n    bl AddWindowParameterized\n    cmp r7, #0\n    beq _0222F5E8\n    mov r2, #0x5b\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, r2, #4\n    ldr r2, [r5, r2]\n    add r1, r6, #0\n    bl ReadMsgDataIntoString\n    b _0222F5F8\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    add r1, r6, #0\n    bl ReadMsgDataIntoString\n    mov r2, #0x59\n    lsl r2, r2, #2\n    add r1, r2, #0\n    ldr r0, [r5, r2]\n    add r1, #0x10\n    add r2, #0xc\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r2, #0x2d\n    lsl r2, r2, #4\n    add r0, r5, r2\n    mov r1, #1\n    sub r2, #0xee\n    mov r3, #0xa\n    bl DrawFrameAndWindow2\n    mov r0, #1\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetAutoScrollParam\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r3, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    mov r2, #0x5d\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    str r3, [sp, #8]\n    lsl r2, r2, #2\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    mov r1, #6\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0222F668: .word 0x0000012D"
    );
    #endif
}

void ov44_0222F66C(void) {
    /* Original at 0x0222F66C */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov44_0222F910\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222F69C\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222F6C0\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl RemoveWindow\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    cmp r0, #8\n    beq _0222F6EC\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222F6EC\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    mov r0, #6\n    mov r1, #8\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    mov r3, #4\n    str r3, [sp]\n    mov r0, #0x17\n    str r0, [sp, #4]\n    mov r0, #0x10\n    str r0, [sp, #8]\n    mov r1, #0xc\n    str r1, [sp, #0xc]\n    mov r0, #0x69\n    str r0, [sp, #0x10]\n    add r0, #0xf3\n    lsl r1, r1, #6\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    mov r2, #2\n    bl AddWindowParameterized\n    mov r2, #0x5b\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, r2, #4\n    ldr r2, [r5, r2]\n    add r1, r4, #0\n    bl ReadMsgDataIntoString\n    mov r2, #0x59\n    lsl r2, r2, #2\n    add r1, r2, #0\n    ldr r0, [r5, r2]\n    add r1, #0x10\n    add r2, #0xc\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r5, r0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #3\n    lsl r0, r0, #8\n    ldr r2, _0222F77C ; =0x000001D9\n    add r0, r5, r0\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    mov r3, #0\n    mov r0, #3\n    lsl r0, r0, #8\n    str r3, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    add r2, #0x75\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    mov r1, #6\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    lsl r0, r1, #1\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _0222F77C: .word 0x000001D9"
    );
    #endif
}

void ov44_0222F780(void) {
    /* Original at 0x0222F780 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0\n    add r6, r1, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _0222F7BA\n    mov r0, #0x35\n    bl PlayerProfile_New\n    add r4, r0, #0\n    ldr r0, [r5]\n    add r1, r6, #0\n    bl sub_0202C254\n    add r1, r0, #0\n    add r0, r4, #0\n    bl Save_Profile_PlayerName_Set\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    add r2, r4, #0\n    bl BufferPlayersName\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov44_0222F7BC(void) {
    /* Original at 0x0222F7BC */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov44_0222F910\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    cmp r0, #8\n    beq _0222F7F0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    beq _0222F7F0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    mov r0, #6\n    mov r1, #8\n    lsl r0, r0, #6\n    str r1, [r4, r0]\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222F814\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222F818(void) {
    /* Original at 0x0222F818 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r2, [r4, #4]\n    cmp r2, #0\n    beq _0222F82E\n    bl ov44_0222F830\n    ldr r0, [r4, #4]\n    mov r1, #0x24\n    bl ov00_021E6D60\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222F830(void) {
    /* Original at 0x0222F830 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r5, #4]\n    cmp r1, #0\n    beq _0222F89A\n    bl ov44_02229F00\n    cmp r0, r4\n    beq _0222F894\n    ldr r0, [r5, #4]\n    strb r4, [r0, #0x1b]\n    add r0, r4, #0\n    bl ov44_0222A020\n    cmp r0, #0\n    bne _0222F894\n    cmp r4, #8\n    beq _0222F894\n    cmp r4, #0x14\n    beq _0222F894\n    cmp r4, #0x16\n    beq _0222F894\n    cmp r4, #0x18\n    beq _0222F894\n    cmp r4, #0x1a\n    beq _0222F894\n    cmp r4, #0x12\n    beq _0222F894\n    cmp r4, #1\n    bne _0222F878\n    mov r0, #0\n    mov r1, #0x1e\n    bl GF_SndStartFadeOutBGM\n    b _0222F894\n    cmp r4, #0x10\n    bne _0222F894\n    mov r0, #0\n    bl ov00_021E70B8\n    bl ov44_0222E074\n    cmp r0, #1\n    bne _0222F894\n    mov r0, #0x78\n    mov r1, #0x1e\n    mov r2, #1\n    bl GF_SndStartFadeInBGM\n    add r0, r5, #0\n    bl ov44_0222C120\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222F89C(void) {
    /* Original at 0x0222F89C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r2, [r4, #4]\n    add r0, r2, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    mov r0, #1\n    add r2, #0x21\n    sub r0, r0, r1\n    strb r0, [r2]\n    ldr r0, [r4, #4]\n    mov r1, #0x24\n    bl ov00_021E6D60\n    ldr r0, [r4, #4]\n    add r0, #0x21\n    ldrb r0, [r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222F8C0(void) {
    /* Original at 0x0222F8C0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r2, [r4, #4]\n    add r0, r2, #0\n    add r0, #0x22\n    ldrb r1, [r0]\n    mov r0, #1\n    add r2, #0x22\n    sub r0, r0, r1\n    strb r0, [r2]\n    ldr r1, [r4, #4]\n    add r0, r1, #0\n    add r0, #0x22\n    ldrb r0, [r0]\n    add r1, #0x21\n    strb r0, [r1]\n    ldr r0, [r4, #4]\n    mov r1, #0x24\n    bl ov00_021E6D60\n    ldr r0, [r4, #4]\n    add r0, #0x22\n    ldrb r0, [r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222F8F0(void) {
    /* Original at 0x0222F8F0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    add r0, r1, #0\n    add r0, #0x22\n    ldrb r0, [r0]\n    add r1, #0x21\n    strb r0, [r1]\n    ldr r0, [r4, #4]\n    mov r1, #0x24\n    bl ov00_021E6D60\n    ldr r0, [r4, #4]\n    add r0, #0x22\n    ldrb r0, [r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222F910(void) {
    /* Original at 0x0222F910 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222F94E\n    bl sub_0200F478\n    mov r0, #0x63\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _0222F94E\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0222F950(void) {
    /* Original at 0x0222F950 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov44_0222FC0C\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02231D8C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_02230060\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222F970(void) {
    /* Original at 0x0222F970 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ov44_0222FC00\n    cmp r4, r0\n    bne _0222F988\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov44_0222F950\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov44_0222F98C(void) {
    /* Original at 0x0222F98C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222F99C ; =0x00000B68\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    beq _0222F998\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _0222F99C: .word 0x00000B68"
    );
    #endif
}

void ov44_0222F9A0(void) {
    /* Original at 0x0222F9A0 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldr r0, _0222FA14 ; =0x00000B1C\n    add r4, r2, #0\n    mov r2, #0x92\n    add r6, r1, #0\n    add r0, r5, r0\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    ldr r0, _0222FA18 ; =ov44_022354E8\n    ldr r2, _0222FA1C ; =ov44_0222FC84\n    mov r1, #8\n    add r3, r5, #0\n    str r4, [sp]\n    bl TouchHitboxController_Create\n    ldr r1, _0222FA20 ; =0x00000B68\n    str r0, [r5, r1]\n    add r0, r4, #0\n    bl MessageFormat_New\n    ldr r1, _0222FA14 ; =0x00000B1C\n    add r2, r4, #0\n    str r0, [r5, r1]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov44_0222FCBC\n    ldr r0, _0222FA24 ; =0x00000B94\n    mov r1, #1\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov44_02230090\n    add r0, r5, #0\n    bl ov44_022300C8\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _0222FA14: .word 0x00000B1C\n    _0222FA18: .word ov44_022354E8\n    _0222FA1C: .word ov44_0222FC84\n    _0222FA20: .word 0x00000B68\n    _0222FA24: .word 0x00000B94"
    );
    #endif
}

void ov44_0222FA28(void) {
    /* Original at 0x0222FA28 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov44_0222F98C\n    cmp r0, #0\n    beq _0222FA76\n    add r0, r4, #0\n    bl ov44_0222FF30\n    ldr r0, _0222FA78 ; =0x00000B68\n    ldr r0, [r4, r0]\n    bl TouchHitboxController_Destroy\n    ldr r0, _0222FA78 ; =0x00000B68\n    mov r1, #0\n    str r1, [r4, r0]\n    sub r0, #0x4c\n    ldr r0, [r4, r0]\n    bl MessageFormat_Delete\n    ldr r0, _0222FA7C ; =0x00000B1C\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    pop {r4, pc}\n    _0222FA78: .word 0x00000B68\n    _0222FA7C: .word 0x00000B1C"
    );
    #endif
}

void ov44_0222FA80(void) {
    /* Original at 0x0222FA80 */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r6, r1, #0\n    bl ov44_02231C8C\n    add r5, r0, #0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov44_02231CE8\n    cmp r0, #3\n    blo _0222FAA6\n    cmp r0, #6\n    bhi _0222FAA6\n    add r5, r0, #0\n    cmp r5, #3\n    blo _0222FAD0\n    cmp r5, #6\n    bhi _0222FAD0\n    ldr r0, _0222FB88 ; =0x00000B8C\n    sub r1, r5, #3\n    ldrb r2, [r4, r0]\n    cmp r2, r1\n    beq _0222FAD0\n    strb r1, [r4, r0]\n    ldr r0, _0222FB8C ; =0x000005E1\n    bl PlaySE\n    add r0, r4, #0\n    bl ov44_02230090\n    ldr r0, _0222FB90 ; =0x00000B91\n    mov r1, #1\n    strb r1, [r4, r0]\n    add r0, r0, #3\n    str r1, [r4, r0]\n    ldr r0, _0222FB94 ; =0x00000B8F\n    ldrb r1, [r4, r0]\n    cmp r1, #1\n    bne _0222FAF0\n    mov r1, #2\n    strb r1, [r4, r0]\n    mov r1, #0\n    add r0, r0, #1\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov44_02230234\n    add r0, r4, #0\n    bl ov44_02231720\n    ldr r0, _0222FB94 ; =0x00000B8F\n    ldrb r1, [r4, r0]\n    cmp r1, #0\n    bne _0222FB1A\n    sub r0, #0x27\n    ldr r0, [r4, r0]\n    bl TouchHitboxController_IsTriggered\n    add r0, r4, #0\n    bl ov44_022313C8\n    ldr r0, _0222FB90 ; =0x00000B91\n    ldrb r0, [r4, r0]\n    cmp r0, #1\n    bne _0222FB1A\n    add r0, r4, #0\n    bl ov44_022300C8\n    ldr r0, _0222FB90 ; =0x00000B91\n    mov r1, #0\n    strb r1, [r4, r0]\n    ldr r0, _0222FB94 ; =0x00000B8F\n    ldrb r0, [r4, r0]\n    add r0, #0xfe\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _0222FB82\n    add r0, r4, #0\n    bl ov44_02231788\n    add r5, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov44_0222FBC8\n    cmp r0, #1\n    bne _0222FB68\n    ldr r1, _0222FB98 ; =0x00000B8D\n    mov r3, #1\n    ldrb r2, [r4, r1]\n    add r0, r1, #6\n    strb r2, [r4, r0]\n    mov r0, #0\n    strb r0, [r4, r1]\n    add r2, r1, #1\n    strb r0, [r4, r2]\n    add r2, r1, #4\n    strb r3, [r4, r2]\n    add r2, r1, #7\n    str r3, [r4, r2]\n    add r1, r1, #2\n    strb r0, [r4, r1]\n    add r0, r4, #0\n    bl ov44_02231754\n    ldr r0, _0222FB9C ; =0x000005DD\n    bl PlaySE\n    b _0222FB82\n    cmp r5, #0\n    beq _0222FB82\n    ldr r0, _0222FB9C ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov44_0222FC3C\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov44_02230234\n    ldr r0, _0222FB98 ; =0x00000B8D\n    ldrb r0, [r4, r0]\n    pop {r4, r5, r6, pc}\n    _0222FB88: .word 0x00000B8C\n    _0222FB8C: .word 0x000005E1\n    _0222FB90: .word 0x00000B91\n    _0222FB94: .word 0x00000B8F\n    _0222FB98: .word 0x00000B8D\n    _0222FB9C: .word 0x000005DD"
    );
    #endif
}

void ov44_0222FBA0(void) {
    /* Original at 0x0222FBA0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0222FBC0 ; =0x00000B8F\n    add r4, r0, #0\n    ldrb r2, [r4, r1]\n    cmp r2, #0\n    bne _0222FBBE\n    add r1, r1, #2\n    ldrb r1, [r4, r1]\n    cmp r1, #1\n    bne _0222FBBE\n    bl ov44_022300C8\n    ldr r0, _0222FBC4 ; =0x00000B91\n    mov r1, #0\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    _0222FBC0: .word 0x00000B8F\n    _0222FBC4: .word 0x00000B91"
    );
    #endif
}

void ov44_0222FBC8(void) {
    /* Original at 0x0222FBC8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0222FBF4 ; =0x00000B8F\n    ldrb r0, [r0, r2]\n    cmp r0, #3\n    bne _0222FBD4\n    mov r0, #0\n    bx lr\n    ldr r2, _0222FBF8 ; =gSystem\n    mov r0, #0xf0\n    ldr r3, [r2, #0x44]\n    tst r0, r3\n    bne _0222FBEA\n    ldr r2, [r2, #0x48]\n    ldr r0, _0222FBFC ; =0x00000403\n    tst r0, r2\n    bne _0222FBEA\n    cmp r1, #2\n    bne _0222FBEE\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _0222FBF4: .word 0x00000B8F\n    _0222FBF8: .word gSystem\n    _0222FBFC: .word 0x00000403"
    );
    #endif
}

void ov44_0222FC00(void) {
    /* Original at 0x0222FC00 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222FC08 ; =0x00000B8D\n    ldrb r0, [r0, r1]\n    bx lr\n    nop\n    _0222FC08: .word 0x00000B8D"
    );
    #endif
}

void ov44_0222FC0C(void) {
    /* Original at 0x0222FC0C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov44_0222F98C\n    cmp r0, #1\n    bne _0222FC36\n    ldr r0, _0222FC38 ; =0x00000B8D\n    mov r2, #0\n    strb r2, [r4, r0]\n    add r1, r0, #1\n    strb r2, [r4, r1]\n    add r1, r0, #2\n    strb r2, [r4, r1]\n    add r1, r0, #4\n    mov r2, #1\n    strb r2, [r4, r1]\n    add r0, r0, #7\n    str r2, [r4, r0]\n    add r0, r4, #0\n    bl ov44_02231754\n    pop {r4, pc}\n    _0222FC38: .word 0x00000B8D"
    );
    #endif
}

void ov44_0222FC3C(void) {
    /* Original at 0x0222FC3C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    bl ov44_02229EE0\n    cmp r0, #1\n    bne _0222FC4E\n    mov r1, #7\n    b _0222FC50\n    mov r1, #2\n    cmp r5, #3\n    bne _0222FC68\n    mov r0, #0xb9\n    lsl r0, r0, #4\n    ldrsb r0, [r4, r0]\n    add r0, r0, #1\n    bl _u32_div_f\n    mov r0, #0xb9\n    lsl r0, r0, #4\n    strb r1, [r4, r0]\n    pop {r3, r4, r5, pc}\n    mov r2, #0xb9\n    lsl r2, r2, #4\n    ldrsb r3, [r4, r2]\n    add r0, r4, r2\n    sub r3, r3, #1\n    strb r3, [r0]\n    ldrsb r2, [r4, r2]\n    cmp r2, #0\n    bge _0222FC82\n    mov r2, #0\n    ldrsb r2, [r0, r2]\n    add r1, r2, r1\n    strb r1, [r0]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_0222FC84(void) {
    /* Original at 0x0222FC84 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r4, _0222FCB4 ; =0x00000B8C\n    ldrb r3, [r2, r4]\n    lsl r3, r3, #3\n    add r0, r0, r3\n    add r3, r4, #0\n    add r5, r2, r0\n    sub r3, #0x20\n    ldrb r3, [r5, r3]\n    cmp r3, #2\n    bne _0222FCB2\n    add r3, r4, #1\n    ldrb r3, [r2, r3]\n    cmp r3, #0\n    bne _0222FCB2\n    cmp r1, #0\n    bne _0222FCB2\n    add r1, r0, #1\n    add r0, r4, #1\n    strb r1, [r2, r0]\n    ldr r0, _0222FCB8 ; =0x000005DD\n    bl PlaySE\n    pop {r3, r4, r5, pc}\n    _0222FCB4: .word 0x00000B8C\n    _0222FCB8: .word 0x000005DD"
    );
    #endif
}

void ov44_0222FCBC(void) {
    /* Original at 0x0222FCBC */
    /* Requires manual decompilation - 283 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r7, r0, #0\n    mov r0, #0x57\n    lsl r0, r0, #2\n    str r1, [sp, #0x14]\n    ldr r0, [r7, r0]\n    mov r1, #4\n    str r2, [sp, #0x18]\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0x80\n    str r0, [sp]\n    ldr r0, [sp, #0x18]\n    mov r1, #0x11\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x14]\n    mov r2, #4\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0xa0\n    str r0, [sp]\n    ldr r0, [sp, #0x18]\n    mov r1, #0x14\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x14]\n    mov r2, #4\n    mov r3, #0x80\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x18]\n    mov r2, #0x57\n    str r0, [sp, #0xc]\n    lsl r2, r2, #2\n    ldr r0, [sp, #0x14]\n    ldr r2, [r7, r2]\n    mov r1, #0x10\n    mov r3, #4\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0x30\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x18]\n    mov r2, #0x57\n    str r0, [sp, #0xc]\n    lsl r2, r2, #2\n    ldr r0, [sp, #0x14]\n    ldr r2, [r7, r2]\n    mov r1, #0x13\n    mov r3, #6\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x18]\n    mov r2, #0x57\n    str r0, [sp, #0xc]\n    lsl r2, r2, #2\n    ldr r0, [sp, #0x14]\n    ldr r2, [r7, r2]\n    mov r1, #0x12\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldr r0, [sp, #0x18]\n    ldr r3, _0222FF18 ; =0x00000B24\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    mov r1, #0x15\n    mov r2, #0\n    add r3, r7, r3\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    mov r1, #0xb2\n    lsl r1, r1, #4\n    str r0, [r7, r1]\n    add r0, r1, #4\n    ldr r0, [r7, r0]\n    mov r1, #0x30\n    bl ov44_0222FFB4\n    ldr r0, _0222FF1C ; =0x00000B44\n    mov r6, #0\n    add r5, r7, r0\n    add r4, r7, #0\n    ldr r0, [sp, #0x18]\n    add r1, r6, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    add r1, #0x16\n    mov r2, #0\n    add r3, r5, #0\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    ldr r1, _0222FF20 ; =0x00000B28\n    str r0, [r4, r1]\n    add r0, r1, #0\n    add r0, #0x1c\n    ldr r0, [r4, r0]\n    mov r1, #0x30\n    bl ov44_0222FFB4\n    add r6, r6, #1\n    add r5, r5, #4\n    add r4, r4, #4\n    cmp r6, #7\n    blt _0222FD7A\n    ldr r0, [sp, #0x18]\n    ldr r3, _0222FF24 ; =0x00000B64\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    mov r1, #0x1d\n    mov r2, #0\n    add r3, r7, r3\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    mov r1, #0xb6\n    lsl r1, r1, #4\n    str r0, [r7, r1]\n    add r0, r1, #4\n    ldr r0, [r7, r0]\n    mov r1, #0x30\n    bl ov44_0222FFB4\n    mov r1, #0x1e\n    ldr r2, [sp, #0x18]\n    mov r0, #4\n    lsl r1, r1, #4\n    bl LoadFontPal1\n    mov r0, #0\n    ldr r1, _0222FF28 ; =0x00000B98\n    str r0, [sp, #0x1c]\n    add r0, r7, r1\n    str r0, [sp, #0x30]\n    mov r0, #1\n    add r1, #0x80\n    str r0, [sp, #0x2c]\n    add r0, r7, r1\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x1c]\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x30]\n    bl InitWindow\n    ldr r0, [sp, #0x1c]\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r1, r2, r1\n    mov r0, #6\n    mul r0, r1\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x1c]\n    mov r2, #5\n    asr r0, r0, #1\n    lsr r1, r0, #0x1e\n    ldr r0, [sp, #0x1c]\n    add r1, r0, r1\n    asr r0, r1, #2\n    lsl r5, r0, #4\n    ldr r0, [sp, #0x20]\n    add r3, r5, #4\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #9\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    lsl r3, r3, #0x18\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    ldr r1, [sp, #0x30]\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    ldr r0, [sp, #0x30]\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x30]\n    bl ScheduleWindowCopyToVram\n    ldr r0, [sp, #0x20]\n    ldr r4, [sp, #0x28]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov r6, #0\n    add r5, r5, #1\n    str r0, [sp, #0x34]\n    add r0, r4, #0\n    bl InitWindow\n    ldr r0, [sp, #0x34]\n    lsl r3, r5, #0x18\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x24]\n    mov r2, #5\n    add r1, r6, r0\n    mov r0, #6\n    mul r0, r1\n    add r0, #0xda\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    add r1, r4, #0\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add r6, r6, #1\n    add r4, #0x10\n    add r5, #0xc\n    cmp r6, #2\n    blt _0222FE64\n    ldr r0, [sp, #0x30]\n    add r0, #0x10\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x2c]\n    add r0, #0x1b\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x28]\n    add r0, #0x20\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x24]\n    add r0, r0, #2\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #1\n    str r0, [sp, #0x1c]\n    cmp r0, #8\n    blt _0222FDEC\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #0x1e\n    str r0, [sp, #4]\n    mov r0, #0x15\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    mov r0, #0x57\n    ldr r1, _0222FF2C ; =0x00000D18\n    str r3, [sp, #0x10]\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    add r1, r7, r1\n    mov r2, #7\n    bl AddWindowParameterized\n    ldr r0, _0222FF2C ; =0x00000D18\n    mov r1, #0\n    add r0, r7, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _0222FF2C ; =0x00000D18\n    add r0, r7, r0\n    bl ScheduleWindowCopyToVram\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x18]\n    add r0, r7, #0\n    bl ov44_02231420\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222FF18: .word 0x00000B24\n    _0222FF1C: .word 0x00000B44\n    _0222FF20: .word 0x00000B28\n    _0222FF24: .word 0x00000B64\n    _0222FF28: .word 0x00000B98\n    _0222FF2C: .word 0x00000D18"
    );
    #endif
}

void ov44_0222FF30(void) {
    /* Original at 0x0222FF30 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    bl ov44_022316B0\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r1, _0222FFA8 ; =0x00000B98\n    ldr r0, [sp]\n    add r7, r0, r1\n    add r1, #0x80\n    add r6, r0, r1\n    add r0, r7, #0\n    bl RemoveWindow\n    mov r4, #0\n    add r5, r6, #0\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #2\n    blt _0222FF52\n    ldr r0, [sp, #4]\n    add r7, #0x10\n    add r0, r0, #1\n    add r6, #0x20\n    str r0, [sp, #4]\n    cmp r0, #8\n    blt _0222FF48\n    ldr r1, _0222FFAC ; =0x00000D18\n    ldr r0, [sp]\n    add r0, r0, r1\n    bl RemoveWindow\n    mov r1, #0xb2\n    ldr r0, [sp]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    bl Heap_Free\n    ldr r4, [sp]\n    ldr r6, _0222FFB0 ; =0x00000B28\n    mov r5, #0\n    ldr r0, [r4, r6]\n    bl Heap_Free\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #7\n    blt _0222FF8A\n    mov r1, #0xb6\n    ldr r0, [sp]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222FFA8: .word 0x00000B98\n    _0222FFAC: .word 0x00000D18\n    _0222FFB0: .word 0x00000B28"
    );
    #endif
}

void ov44_0222FFB4(void) {
    /* Original at 0x0222FFB4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    add r5, r1, #0\n    add r1, r0, #0\n    add r1, #0xc\n    mov ip, r1\n    ldrh r1, [r0]\n    ldrh r0, [r0, #2]\n    lsr r2, r1, #3\n    lsr r7, r0, #3\n    mov r0, #0\n    cmp r7, #0\n    ble _0222FFF0\n    add r3, r0, #0\n    mov r1, #0\n    cmp r2, #0\n    ble _0222FFE8\n    lsl r6, r3, #1\n    mov r4, ip\n    add r4, r4, r6\n    ldrh r6, [r4]\n    add r1, r1, #1\n    add r6, r6, r5\n    strh r6, [r4]\n    add r4, r4, #2\n    cmp r1, r2\n    blt _0222FFDA\n    add r0, r0, #1\n    add r3, r3, r2\n    cmp r0, r7\n    blt _0222FFCE\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov44_0222FFF4(void) {
    /* Original at 0x0222FFF4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r6, #0\n    bne _02230004\n    bl GF_AssertFail\n    cmp r4, #0\n    bne _0223000C\n    bl GF_AssertFail\n    cmp r4, #3\n    blo _02230014\n    bl GF_AssertFail\n    ldr r0, _02230024 ; =0x00000B6B\n    add r1, r5, r6\n    strb r4, [r1, r0]\n    mov r1, #1\n    add r0, #0x26\n    strb r1, [r5, r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _02230024: .word 0x00000B6B"
    );
    #endif
}

void ov44_02230028(void) {
    GF_AssertFail(1, 0);
}

void ov44_02230048(void) {
    GF_AssertFail();
}

void ov44_02230060(void) {
    /* Original at 0x02230060 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _0223007C ; =0x00000B8F\n    ldrb r3, [r0, r2]\n    cmp r3, #0\n    beq _02230070\n    bl ov44_02230234\n    pop {r3, pc}\n    mov r3, #1\n    add r1, r2, #5\n    str r3, [r0, r1]\n    bl ov44_022300C8\n    pop {r3, pc}\n    _0223007C: .word 0x00000B8F"
    );
    #endif
}

void ov44_02230080(void) {
    /* Original at 0x02230080 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0223008C ; =0x00000B94\n    mov r2, #1\n    str r2, [r0, r1]\n    sub r1, r1, #3\n    strb r2, [r0, r1]\n    bx lr\n    _0223008C: .word 0x00000B94"
    );
    #endif
}

void ov44_02230090(void) {
    /* Original at 0x02230090 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, _022300C4 ; =0x00000B8C\n    mov r2, #0\n    ldrb r0, [r4, r0]\n    mov r1, #4\n    add r3, r2, #0\n    str r0, [sp, #8]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl BgTilemapRectChangePalette\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #4\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _022300C4: .word 0x00000B8C"
    );
    #endif
}

void ov44_022300C8(void) {
    /* Original at 0x022300C8 */
    /* Requires manual decompilation - 165 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r6, r0, #0\n    ldr r0, _02230220 ; =0x00000B94\n    ldr r1, [r6, r0]\n    cmp r1, #1\n    bne _022300FA\n    mov r2, #0\n    str r2, [r6, r0]\n    mov r0, #1\n    str r0, [sp, #0x18]\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x57\n    str r2, [sp, #0xc]\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #6\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    b _022300FE\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r1, _02230224 ; =0x00000B98\n    mov r7, #0\n    add r0, r6, r1\n    add r1, #0x80\n    str r0, [sp, #0x14]\n    add r0, r6, r1\n    str r0, [sp, #0x10]\n    ldr r0, _02230228 ; =0x00000B8C\n    ldrb r1, [r6, r0]\n    sub r0, #0x21\n    lsl r1, r1, #3\n    add r1, r7, r1\n    add r4, r1, #1\n    add r1, r6, r4\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _0223013A\n    ldr r0, [r6]\n    sub r1, r4, #1\n    mov r2, #8\n    bl sub_0202C090\n    cmp r0, #0\n    bne _02230134\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _0223013E\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    b _0223013E\n    mov r0, #2\n    str r0, [sp, #0x1c]\n    asr r0, r7, #1\n    lsr r0, r0, #0x1e\n    add r0, r7, r0\n    asr r2, r0, #2\n    lsr r3, r7, #0x1f\n    lsl r1, r7, #0x1e\n    sub r1, r1, r3\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r3, r1\n    ldr r1, _0223022C ; =0x00000B8D\n    mov ip, r0\n    ldrb r0, [r6, r1]\n    cmp r4, r0\n    bne _02230162\n    add r1, r1, #1\n    ldrb r5, [r6, r1]\n    b _02230164\n    mov r5, #0\n    cmp r4, r0\n    beq _02230170\n    ldr r0, _02230230 ; =0x00000B93\n    ldrb r0, [r6, r0]\n    cmp r4, r0\n    bne _02230174\n    mov r1, #1\n    b _02230176\n    mov r1, #0\n    ldr r0, [sp, #0x18]\n    cmp r0, #1\n    beq _02230180\n    cmp r1, #1\n    bne _022301EC\n    lsl r1, r2, #0x1c\n    mov r3, #6\n    mov r2, ip\n    mul r3, r2\n    lsl r2, r3, #0x18\n    ldr r3, [sp, #0x1c]\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    lsl r3, r3, #0x18\n    str r0, [sp]\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl ov44_02231148\n    ldr r0, [sp, #0x1c]\n    cmp r0, #2\n    beq _022301C4\n    ldr r1, [sp, #0x14]\n    add r0, r6, #0\n    add r2, r4, #0\n    add r3, r5, #0\n    str r7, [sp]\n    bl ov44_022312B8\n    ldr r1, [sp, #0x10]\n    add r0, r6, #0\n    add r2, r4, #0\n    add r3, r5, #0\n    str r7, [sp]\n    bl ov44_02231344\n    b _022301EC\n    ldr r0, [sp, #0x14]\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x14]\n    bl ScheduleWindowCopyToVram\n    ldr r5, [sp, #0x10]\n    mov r4, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #2\n    blt _022301D6\n    ldr r0, [sp, #0x14]\n    add r7, r7, #1\n    add r0, #0x10\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    add r0, #0x20\n    str r0, [sp, #0x10]\n    cmp r7, #8\n    blt _0223010C\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02230220: .word 0x00000B94\n    _02230224: .word 0x00000B98\n    _02230228: .word 0x00000B8C\n    _0223022C: .word 0x00000B8D\n    _02230230: .word 0x00000B93"
    );
    #endif
}

void ov44_02230234(void) {
    /* Original at 0x02230234 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r1, #0\n    add r5, r0, #0\n    ldr r1, _022302F4 ; =0x00000B8D\n    ldr r0, [r5]\n    ldrb r1, [r5, r1]\n    mov r2, #8\n    sub r1, r1, #1\n    bl sub_0202C090\n    cmp r0, #1\n    bne _02230252\n    mov r4, #7\n    b _02230254\n    mov r4, #8\n    mov r0, #0xb9\n    lsl r0, r0, #4\n    ldrsb r1, [r5, r0]\n    sub r0, #0x4c\n    lsl r1, r1, #2\n    add r1, r5, r1\n    ldr r3, [r1, r0]\n    mov r0, #0x57\n    add r2, r3, #0\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r3, [r3, #8]\n    mov r1, #6\n    add r2, #0xc\n    bl BG_LoadScreenTilemapData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    mov r2, #0\n    ldr r0, [r5, r0]\n    mov r1, #6\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    add r0, r5, #0\n    bl ov44_02229EE0\n    cmp r0, #0\n    bne _022302AE\n    add r0, r5, #0\n    bl ov44_02230FE8\n    ldr r0, _022302F8 ; =0x00000D18\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    mov r2, #0xb9\n    lsl r2, r2, #4\n    ldrsb r2, [r5, r2]\n    add r0, r5, #0\n    add r1, r6, #0\n    lsl r3, r2, #2\n    ldr r2, _022302FC ; =ov44_02236680\n    ldr r2, [r2, r3]\n    blx r2\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, _022302F8 ; =0x00000D18\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #8\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _022302F4: .word 0x00000B8D\n    _022302F8: .word 0x00000D18\n    _022302FC: .word ov44_02236680"
    );
    #endif
}

void ov44_02230300(void) {
    /* Original at 0x02230300 */
    /* Requires manual decompilation - 550 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, _02230694 ; =0x00000B8D\n    mov r2, #8\n    ldrb r0, [r5, r0]\n    sub r4, r0, #1\n    ldr r0, [r5]\n    add r1, r4, #0\n    bl sub_0202C090\n    cmp r0, #0\n    bne _0223031E\n    ldr r0, _02230698 ; =0x00050600\n    b _02230322\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_02231918\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    mov r1, #0x2a\n    bl ReadMsgDataIntoString\n    mov r2, #0x5e\n    ldr r0, _0223069C ; =0x00000B1C\n    lsl r2, r2, #2\n    ldr r1, [r5, r2]\n    sub r2, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r0, #8\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, [sp, #0x14]\n    add r2, #0x79\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, _022306A0 ; =0x00000D18\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    mov r3, #0x20\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_02231958\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x10]\n    add r0, r5, #0\n    bl ov44_02229F00\n    add r1, sp, #0x14\n    add r7, r0, #0\n    bl ov44_0223120C\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    add r1, r0, #0\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    mov r0, #8\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, [sp, #0x14]\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _022306A0 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x71\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #0x68\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x35\n    bl PlayerProfile_New\n    add r6, r0, #0\n    ldr r0, [r5]\n    add r1, r4, #0\n    bl sub_0202C298\n    add r1, r0, #0\n    add r0, r6, #0\n    bl Save_Profile_PlayerName_Set\n    ldr r0, _0223069C ; =0x00000B1C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r6, #0\n    bl BufferPlayersName\n    add r0, r6, #0\n    bl Heap_Free\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x2b\n    bl ReadMsgDataIntoString\n    mov r0, #0x20\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _022306A4 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _022306A0 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r1, #0x96\n    mov r0, #0x5a\n    add r2, r1, #0\n    lsl r0, r0, #2\n    add r2, #0xda\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    mov r2, #0x5e\n    ldr r0, _0223069C ; =0x00000B1C\n    lsl r2, r2, #2\n    ldr r1, [r5, r2]\n    sub r2, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe8\n    sub r3, r1, r0\n    mov r0, #0x20\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _022306A4 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _022306A0 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    bl AddTextPrinterParameterizedWithColor\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x2c\n    bl ReadMsgDataIntoString\n    mov r0, #0x38\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _022306A4 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _022306A0 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [r5]\n    add r1, r4, #0\n    mov r2, #1\n    bl sub_0202C090\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0223069C ; =0x00000B1C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    mov r3, #4\n    bl BufferIntegerAsString\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    mov r1, #0x2d\n    bl ReadMsgDataIntoString\n    mov r2, #0x5e\n    ldr r0, _0223069C ; =0x00000B1C\n    lsl r2, r2, #2\n    ldr r1, [r5, r2]\n    sub r2, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r0, #0x38\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _022306A4 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _022306A0 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #0x78\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [r5]\n    add r1, r4, #0\n    mov r2, #2\n    bl sub_0202C090\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0223069C ; =0x00000B1C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    mov r3, #4\n    bl BufferIntegerAsString\n    mov r0, #0x5a\n    mov r1, #0x2e\n    lsl r0, r0, #2\n    lsl r2, r1, #3\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    mov r2, #0x5e\n    ldr r0, _0223069C ; =0x00000B1C\n    lsl r2, r2, #2\n    ldr r1, [r5, r2]\n    sub r2, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe8\n    sub r3, r1, r0\n    mov r0, #0x38\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _022306A4 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _022306A0 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x5a\n    mov r1, #0x2f\n    lsl r0, r0, #2\n    lsl r2, r1, #3\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    mov r0, #0x50\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _022306A4 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _022306A0 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [r5]\n    add r1, r4, #0\n    mov r2, #3\n    bl sub_0202C090\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0223069C ; =0x00000B1C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    mov r3, #4\n    bl BufferIntegerAsString\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    mov r1, #0x30\n    bl ReadMsgDataIntoString\n    mov r2, #0x5e\n    ldr r0, _0223069C ; =0x00000B1C\n    lsl r2, r2, #2\n    ldr r1, [r5, r2]\n    sub r2, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe8\n    sub r3, r1, r0\n    mov r0, #0x50\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _022306A4 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _022306A0 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl ov44_02229EF8\n    cmp r0, #1\n    bne _022306B4\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x31\n    bl ReadMsgDataIntoString\n    mov r0, #0x68\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _022306A4 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _022306A0 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [r5]\n    add r1, r4, #0\n    mov r2, #9\n    bl sub_0202C090\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0223069C ; =0x00000B1C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    mov r3, #4\n    bl BufferIntegerAsString\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    mov r1, #0x32\n    bl ReadMsgDataIntoString\n    mov r2, #0x5e\n    ldr r0, _0223069C ; =0x00000B1C\n    lsl r2, r2, #2\n    ldr r1, [r5, r2]\n    sub r2, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe8\n    sub r3, r1, r0\n    mov r0, #0x68\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _022306A4 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _022306A0 ; =0x00000D18\n    b _022306A8\n    nop\n    _02230694: .word 0x00000B8D\n    _02230698: .word 0x00050600\n    _0223069C: .word 0x00000B1C\n    _022306A0: .word 0x00000D18\n    _022306A4: .word 0x00010200\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    bl AddTextPrinterParameterizedWithColor\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x33\n    bl ReadMsgDataIntoString\n    mov r0, #0x80\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _022307D0 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _022307D4 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [r5]\n    add r1, r4, #0\n    mov r2, #6\n    bl sub_0202C090\n    add r2, r0, #0\n    beq _02230788\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _022307D8 ; =0x00000B1C\n    mov r1, #2\n    ldr r0, [r5, r0]\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    ldr r0, [r5]\n    add r1, r4, #0\n    mov r2, #4\n    bl sub_0202C090\n    mov r1, #0\n    add r2, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _022307D8 ; =0x00000B1C\n    mov r3, #4\n    ldr r0, [r5, r0]\n    bl BufferIntegerAsString\n    ldr r0, [r5]\n    add r1, r4, #0\n    mov r2, #5\n    bl sub_0202C090\n    add r2, r0, #0\n    ldr r0, _022307D8 ; =0x00000B1C\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl BufferMonthNameAbbr\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    mov r1, #0x4a\n    bl ReadMsgDataIntoString\n    mov r2, #0x5e\n    ldr r0, _022307D8 ; =0x00000B1C\n    lsl r2, r2, #2\n    ldr r1, [r5, r2]\n    sub r2, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe8\n    sub r3, r1, r0\n    mov r0, #0x80\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _022307D0 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _022307D4 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    bl AddTextPrinterParameterizedWithColor\n    mov r3, #2\n    str r3, [sp]\n    mov r0, #0x57\n    ldr r1, _022307DC ; =0x00000B0C\n    str r7, [sp, #4]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    mov r2, #6\n    bl ov44_0222AC54\n    ldr r0, [sp, #0x10]\n    add r0, #0x21\n    str r0, [sp, #0x10]\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _022307AE\n    mov r1, #8\n    b _022307B0\n    mov r1, #1\n    mov r0, #2\n    str r0, [sp]\n    str r1, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r1, _022307DC ; =0x00000B0C\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    mov r2, #6\n    mov r3, #0x1c\n    bl ov44_0222ABDC\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _022307D0: .word 0x00010200\n    _022307D4: .word 0x00000D18\n    _022307D8: .word 0x00000B1C\n    _022307DC: .word 0x00000B0C"
    );
    #endif
}

void ov44_022307E0(void) {
    /* Original at 0x022307E0 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _022308A0 ; =0x00000B8D\n    mov r2, #0x5a\n    ldrb r0, [r5, r0]\n    lsl r2, r2, #2\n    mov r1, #0x34\n    sub r4, r0, #1\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _022308A4 ; =0x000F0E00\n    add r2, #0x79\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, _022308A8 ; =0x00000D18\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    mov r2, #0\n    add r3, r4, #0\n    bl ov44_02231084\n    mov r0, #0x18\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _022308AC ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _022308A8 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x78\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x41\n    mov r2, #0x71\n    add r3, r4, #0\n    bl ov44_02231054\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x3b\n    bl ReadMsgDataIntoString\n    mov r0, #0x30\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _022308AC ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _022308A8 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x78\n    str r0, [sp]\n    mov r0, #0x30\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x41\n    mov r2, #0x70\n    add r3, r4, #0\n    bl ov44_02231054\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _022308A0: .word 0x00000B8D\n    _022308A4: .word 0x000F0E00\n    _022308A8: .word 0x00000D18\n    _022308AC: .word 0x00010200"
    );
    #endif
}

void ov44_022308B0(void) {
    /* Original at 0x022308B0 */
    /* Requires manual decompilation - 286 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _02230B1C ; =0x00000B8D\n    mov r2, #0x5a\n    ldrb r0, [r5, r0]\n    lsl r2, r2, #2\n    mov r1, #0x35\n    sub r4, r0, #1\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230B20 ; =0x000F0E00\n    add r2, #0x79\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, _02230B24 ; =0x00000D18\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x3c\n    bl ReadMsgDataIntoString\n    mov r0, #0x18\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230B28 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230B24 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x3e\n    bl ReadMsgDataIntoString\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe8\n    sub r3, r1, r0\n    mov r0, #0x18\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230B28 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230B24 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    bl AddTextPrinterParameterizedWithColor\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    mov r2, #1\n    add r3, r4, #0\n    bl ov44_02231084\n    mov r0, #0x30\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230B28 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230B24 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x68\n    str r0, [sp]\n    mov r0, #0x30\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x41\n    mov r2, #0x73\n    add r3, r4, #0\n    bl ov44_02231054\n    mov r0, #0xd4\n    str r0, [sp]\n    mov r0, #0x30\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x42\n    mov r2, #0x75\n    add r3, r4, #0\n    bl ov44_02231054\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x3b\n    bl ReadMsgDataIntoString\n    mov r0, #0x40\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230B28 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230B24 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x68\n    str r0, [sp]\n    mov r0, #0x40\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x41\n    mov r2, #0x72\n    add r3, r4, #0\n    bl ov44_02231054\n    mov r0, #0xd4\n    str r0, [sp]\n    mov r0, #0x40\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x42\n    mov r2, #0x74\n    add r3, r4, #0\n    bl ov44_02231054\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x3d\n    bl ReadMsgDataIntoString\n    mov r0, #0x58\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230B28 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230B24 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x3e\n    bl ReadMsgDataIntoString\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe8\n    sub r3, r1, r0\n    mov r0, #0x58\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230B28 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230B24 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    bl AddTextPrinterParameterizedWithColor\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    mov r2, #2\n    add r3, r4, #0\n    bl ov44_02231084\n    mov r0, #0x70\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230B28 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230B24 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x68\n    str r0, [sp]\n    mov r0, #0x70\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x41\n    mov r2, #0x77\n    add r3, r4, #0\n    bl ov44_02231054\n    mov r0, #0xd4\n    str r0, [sp]\n    mov r0, #0x70\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x42\n    mov r2, #0x79\n    add r3, r4, #0\n    bl ov44_02231054\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x3b\n    bl ReadMsgDataIntoString\n    mov r0, #0x80\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230B28 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230B24 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x68\n    str r0, [sp]\n    mov r0, #0x80\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x41\n    mov r2, #0x76\n    add r3, r4, #0\n    bl ov44_02231054\n    mov r0, #0xd4\n    str r0, [sp]\n    mov r0, #0x80\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x42\n    mov r2, #0x78\n    add r3, r4, #0\n    bl ov44_02231054\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _02230B1C: .word 0x00000B8D\n    _02230B20: .word 0x000F0E00\n    _02230B24: .word 0x00000D18\n    _02230B28: .word 0x00010200"
    );
    #endif
}

void ov44_02230B2C(void) {
    /* Original at 0x02230B2C */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _02230C58 ; =0x00000B8D\n    mov r2, #0x5a\n    ldrb r0, [r5, r0]\n    lsl r2, r2, #2\n    mov r1, #0x36\n    sub r4, r0, #1\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230C5C ; =0x000F0E00\n    add r2, #0x79\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, _02230C60 ; =0x00000D18\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x3f\n    bl ReadMsgDataIntoString\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r0, r0, #1\n    lsr r1, r0, #1\n    mov r0, #0xb4\n    sub r3, r0, r1\n    mov r0, #0x18\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230C64 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230C60 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    bl AddTextPrinterParameterizedWithColor\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    mov r2, #3\n    add r3, r4, #0\n    bl ov44_02231084\n    mov r0, #0x30\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230C64 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230C60 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x68\n    str r0, [sp]\n    mov r0, #0x30\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x44\n    mov r2, #0x87\n    add r3, r4, #0\n    bl ov44_02231054\n    mov r0, #0xd4\n    str r0, [sp]\n    mov r0, #0x30\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x43\n    mov r2, #0x88\n    add r3, r4, #0\n    bl ov44_02231054\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x3b\n    bl ReadMsgDataIntoString\n    mov r0, #0x50\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230C64 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230C60 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x68\n    str r0, [sp]\n    mov r0, #0x50\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x44\n    mov r2, #0x86\n    add r3, r4, #0\n    bl ov44_02231054\n    mov r0, #0xd4\n    str r0, [sp]\n    mov r0, #0x50\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x43\n    mov r2, #0x8a\n    add r3, r4, #0\n    bl ov44_02231054\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _02230C58: .word 0x00000B8D\n    _02230C5C: .word 0x000F0E00\n    _02230C60: .word 0x00000D18\n    _02230C64: .word 0x00010200"
    );
    #endif
}

void ov44_02230C68(void) {
    /* Original at 0x02230C68 */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r6, r1, #0\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    ldr r0, _02230D7C ; =0x00000B8D\n    mov r2, #0x5a\n    ldrb r0, [r5, r0]\n    lsl r2, r2, #2\n    mov r1, #0x37\n    sub r4, r0, #1\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230D80 ; =0x000F0E00\n    add r2, #0x79\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, _02230D84 ; =0x00000D18\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    mov r1, #0x7c\n    add r2, r4, #0\n    bl FrontierSave_GetStat\n    add r1, r6, #0\n    bl GetSpeciesName\n    add r6, r0, #0\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r0, r0, #1\n    lsr r1, r0, #1\n    mov r0, #0x21\n    sub r3, r0, r1\n    mov r0, #0x18\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02230D88 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230D84 ; =0x00000D18\n    add r2, r6, #0\n    add r0, r5, r0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    mov r2, #4\n    add r3, r4, #0\n    bl ov44_02231084\n    mov r0, #0x30\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230D88 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230D84 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x6c\n    str r0, [sp]\n    mov r0, #0x30\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x41\n    mov r2, #0x7b\n    add r3, r4, #0\n    bl ov44_02231054\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x3b\n    bl ReadMsgDataIntoString\n    mov r0, #0x50\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230D88 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230D84 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x6c\n    str r0, [sp]\n    mov r0, #0x50\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x41\n    mov r2, #0x7a\n    add r3, r4, #0\n    bl ov44_02231054\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02230D7C: .word 0x00000B8D\n    _02230D80: .word 0x000F0E00\n    _02230D84: .word 0x00000D18\n    _02230D88: .word 0x00010200"
    );
    #endif
}

void ov44_02230D8C(void) {
    /* Original at 0x02230D8C */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _02230E4C ; =0x00000B8D\n    mov r2, #0x5a\n    ldrb r0, [r5, r0]\n    lsl r2, r2, #2\n    mov r1, #0x38\n    sub r4, r0, #1\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230E50 ; =0x000F0E00\n    add r2, #0x79\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, _02230E54 ; =0x00000D18\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    mov r2, #5\n    add r3, r4, #0\n    bl ov44_02231084\n    mov r0, #0x18\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230E58 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230E54 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x70\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x45\n    mov r2, #0x8f\n    add r3, r4, #0\n    bl ov44_02231054\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    mov r1, #0x3b\n    bl ReadMsgDataIntoString\n    mov r0, #0x30\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230E58 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230E54 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x70\n    str r0, [sp]\n    mov r0, #0x30\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0x45\n    mov r2, #0x8e\n    add r3, r4, #0\n    bl ov44_02231054\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _02230E4C: .word 0x00000B8D\n    _02230E50: .word 0x000F0E00\n    _02230E54: .word 0x00000D18\n    _02230E58: .word 0x00010200"
    );
    #endif
}

void ov44_02230E5C(void) {
    /* Original at 0x02230E5C */
    /* Requires manual decompilation - 172 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl sub_0202C6F4\n    add r6, r0, #0\n    ldr r0, _02230FD4 ; =0x00000B8D\n    mov r2, #0x5a\n    ldrb r0, [r5, r0]\n    lsl r2, r2, #2\n    mov r1, #0x46\n    sub r4, r0, #1\n    ldr r0, [r5, r2]\n    add r2, #0x10\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230FD8 ; =0x000F0E00\n    add r2, #0x79\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, _02230FDC ; =0x00000D18\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, _02230FE0 ; =0x00000B1C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    bl BufferWiFiPlazaActivityName\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    mov r1, #0x47\n    bl ReadMsgDataIntoString\n    mov r2, #0x5e\n    ldr r0, _02230FE0 ; =0x00000B1C\n    lsl r2, r2, #2\n    ldr r1, [r5, r2]\n    sub r2, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r0, #0x18\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230FE4 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230FDC ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r2, #0xa\n    bl sub_0202C090\n    add r2, r0, #0\n    mov r0, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x48\n    mov r3, #0xa4\n    bl ov44_022310C8\n    ldr r0, _02230FE0 ; =0x00000B1C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    mov r2, #1\n    bl BufferWiFiPlazaActivityName\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    mov r1, #0x47\n    bl ReadMsgDataIntoString\n    mov r2, #0x5e\n    ldr r0, _02230FE0 ; =0x00000B1C\n    lsl r2, r2, #2\n    ldr r1, [r5, r2]\n    sub r2, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r0, #0x30\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230FE4 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230FDC ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r2, #0xb\n    bl sub_0202C090\n    add r2, r0, #0\n    mov r0, #0x30\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x48\n    mov r3, #0xa4\n    bl ov44_022310C8\n    ldr r0, _02230FE0 ; =0x00000B1C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    mov r2, #2\n    bl BufferWiFiPlazaActivityName\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    mov r1, #0x47\n    bl ReadMsgDataIntoString\n    mov r2, #0x5e\n    ldr r0, _02230FE0 ; =0x00000B1C\n    lsl r2, r2, #2\n    ldr r1, [r5, r2]\n    sub r2, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r0, #0x48\n    str r0, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _02230FE4 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02230FDC ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r2, #0xc\n    bl sub_0202C090\n    add r2, r0, #0\n    mov r1, #0x48\n    add r0, r5, #0\n    mov r3, #0xa4\n    str r1, [sp]\n    bl ov44_022310C8\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _02230FD4: .word 0x00000B8D\n    _02230FD8: .word 0x000F0E00\n    _02230FDC: .word 0x00000D18\n    _02230FE0: .word 0x00000B1C\n    _02230FE4: .word 0x00010200"
    );
    #endif
}

void ov44_02230FE8(void) {
    /* Original at 0x02230FE8 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    mov r4, #0\n    add r5, r0, #0\n    mov r7, #1\n    add r6, r4, #0\n    ldr r0, _02231050 ; =0x00000B64\n    add r2, r4, #0\n    ldr r0, [r5, r0]\n    add r2, #0x1a\n    str r7, [sp]\n    add r1, r0, #0\n    str r7, [sp, #4]\n    add r1, #0xc\n    str r1, [sp, #8]\n    str r6, [sp, #0xc]\n    str r6, [sp, #0x10]\n    ldrh r1, [r0]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #6\n    add r3, r6, #0\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl CopyToBgTilemapRect\n    add r4, r4, #1\n    cmp r4, #5\n    blt _02230FF4\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r1, #6\n    mov r0, #0x57\n    str r1, [sp, #8]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r2, #0x1a\n    mov r3, #0\n    bl BgTilemapRectChangePalette\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _02231050: .word 0x00000B64"
    );
    #endif
}

void ov44_02231054(void) {
    /* Original at 0x02231054 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r6, r2, #0\n    add r7, r3, #0\n    add r4, r1, #0\n    bl Save_Frontier_GetStatic\n    add r1, r6, #0\n    add r2, r7, #0\n    bl FrontierSave_GetStat\n    add r2, r0, #0\n    ldr r0, [sp, #0x1c]\n    ldr r3, [sp, #0x18]\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_022310C8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_02231084(void) {
    /* Original at 0x02231084 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r3, #0\n    cmp r4, #6\n    blo _02231096\n    bl GF_AssertFail\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl Save_Frontier_GetStatic\n    ldr r1, _022310C4 ; =ov44_022353D0\n    lsl r2, r4, #2\n    ldr r1, [r1, r2]\n    add r2, r7, #0\n    bl FrontierSave_GetStat\n    cmp r0, #0\n    bne _022310B4\n    mov r1, #0x39\n    b _022310B6\n    mov r1, #0x3a\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r6, #0\n    bl ReadMsgDataIntoString\n    pop {r3, r4, r5, r6, r7, pc}\n    _022310C4: .word ov44_022353D0"
    );
    #endif
}

void ov44_022310C8(void) {
    /* Original at 0x022310C8 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0223113C ; =0x00000B1C\n    add r6, r1, #0\n    add r4, r3, #0\n    ldr r0, [r5, r0]\n    mov r1, #0\n    mov r3, #4\n    bl BufferIntegerAsString\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    add r1, r6, #0\n    bl ReadMsgDataIntoString\n    mov r2, #0x5e\n    ldr r0, _0223113C ; =0x00000B1C\n    lsl r2, r2, #2\n    ldr r1, [r5, r2]\n    sub r2, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    mov r0, #0\n    ldr r1, [r5, r1]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r0, r0, #1\n    lsr r0, r0, #1\n    sub r3, r4, r0\n    ldr r0, [sp, #0x20]\n    mov r2, #0xff\n    str r0, [sp]\n    str r2, [sp, #4]\n    ldr r0, _02231140 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _02231144 ; =0x00000D18\n    str r1, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _0223113C: .word 0x00000B1C\n    _02231140: .word 0x00010200\n    _02231144: .word 0x00000D18"
    );
    #endif
}

void ov44_02231148(void) {
    /* Original at 0x02231148 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    str r2, [sp, #0x1c]\n    ldr r4, [sp, #0x38]\n    add r5, r0, #0\n    add r7, r1, #0\n    add r6, r3, #0\n    cmp r4, #4\n    blo _0223115E\n    bl GF_AssertFail\n    cmp r4, #3\n    bne _02231164\n    mov r4, #1\n    cmp r4, #2\n    bhs _022311A8\n    mov r0, #0x10\n    str r0, [sp]\n    mov r1, #6\n    ldr r0, _02231208 ; =0x00000B24\n    str r1, [sp, #4]\n    ldr r0, [r5, r0]\n    add r2, r7, #0\n    add r0, #0xc\n    str r0, [sp, #8]\n    lsl r0, r4, #0x14\n    lsr r0, r0, #0x10\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mul r0, r1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x10]\n    mov r0, #0x20\n    str r0, [sp, #0x14]\n    mov r0, #0x12\n    str r0, [sp, #0x18]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r3, [sp, #0x1c]\n    bl CopyToBgTilemapRect\n    b _022311E4\n    mov r0, #0x10\n    str r0, [sp]\n    mov r1, #6\n    ldr r2, _02231208 ; =0x00000B24\n    str r1, [sp, #4]\n    ldr r3, [r5, r2]\n    mov r2, #0x12\n    add r3, #0xc\n    lsl r2, r2, #6\n    add r2, r3, r2\n    str r2, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    add r2, r6, #0\n    mul r2, r1\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    str r2, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0x12\n    str r0, [sp, #0x18]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r3, [sp, #0x1c]\n    add r2, r7, #0\n    bl CopyToBgTilemapRect\n    mov r0, #0x10\n    str r0, [sp]\n    add r0, r6, #4\n    mov r1, #6\n    lsl r0, r0, #0x18\n    str r1, [sp, #4]\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r3, [sp, #0x1c]\n    add r2, r7, #0\n    bl BgTilemapRectChangePalette\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02231208: .word 0x00000B24"
    );
    #endif
}

void ov44_0223120C(void) {
    /* Original at 0x0223120C */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _022312B0 ; =0x00010200\n    cmp r0, #0x1b\n    str r2, [r1]\n    bhi _022312AC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02231220: ; jump table\n    ldr r2, _022312B4 ; =0x00020E00\n    mov r0, #0x24\n    str r2, [r1]\n    bx lr\n    ldr r2, _022312B4 ; =0x00020E00\n    mov r0, #0x1b\n    str r2, [r1]\n    bx lr\n    mov r0, #0x60\n    bx lr\n    mov r0, #0x61\n    bx lr\n    mov r0, #0x5f\n    bx lr\n    mov r0, #0x63\n    bx lr\n    mov r0, #0x64\n    bx lr\n    mov r0, #0x62\n    bx lr\n    ldr r2, _022312B4 ; =0x00020E00\n    mov r0, #0x1d\n    str r2, [r1]\n    bx lr\n    mov r0, #0x1c\n    bx lr\n    mov r0, #0x5c\n    bx lr\n    ldr r2, _022312B4 ; =0x00020E00\n    mov r0, #0x21\n    str r2, [r1]\n    bx lr\n    mov r0, #0x20\n    bx lr\n    ldr r2, _022312B4 ; =0x00020E00\n    mov r0, #0x23\n    str r2, [r1]\n    bx lr\n    mov r0, #0x22\n    bx lr\n    mov r0, #0x4f\n    bx lr\n    mov r0, #0x5c\n    bx lr\n    _022312B0: .word 0x00010200\n    _022312B4: .word 0x00020E00"
    );
    #endif
}

void ov44_022312B8(void) {
    /* Original at 0x022312B8 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #0\n    str r2, [sp, #0x10]\n    add r4, r3, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _02231338 ; =ov44_02235364\n    mov r2, #8\n    ldrb r7, [r0, r4]\n    ldr r0, [sp, #0x10]\n    sub r0, r0, #1\n    str r0, [sp, #0x14]\n    ldr r0, [r5]\n    ldr r1, [sp, #0x14]\n    bl sub_0202C090\n    cmp r0, #0\n    bne _022312E8\n    ldr r4, _0223133C ; =0x00050600\n    b _022312EC\n    mov r4, #0xc1\n    lsl r4, r4, #0xa\n    ldr r1, [sp, #0x14]\n    add r0, r5, #0\n    bl ov44_02231918\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    mov r1, #0x2a\n    bl ReadMsgDataIntoString\n    mov r2, #0x5e\n    ldr r0, _02231340 ; =0x00000B1C\n    lsl r2, r2, #2\n    ldr r1, [r5, r2]\n    sub r2, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    bl StringExpandPlaceholders\n    str r7, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    str r4, [sp, #8]\n    mov r3, #0\n    str r3, [sp, #0xc]\n    add r2, #0x79\n    ldr r2, [r5, r2]\n    add r0, r6, #0\n    mov r1, #1\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _02231338: .word ov44_02235364\n    _0223133C: .word 0x00050600\n    _02231340: .word 0x00000B1C"
    );
    #endif
}

void ov44_02231344(void) {
    /* Original at 0x02231344 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    sub r1, r2, #1\n    add r6, r0, #0\n    add r4, r3, #0\n    bl ov44_02231958\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0xc]\n    add r0, r6, #0\n    bl ov44_02229F00\n    str r0, [sp, #8]\n    ldr r0, _022313C0 ; =ov44_02235364\n    ldrb r0, [r0, r4]\n    mov r4, #0\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    cmp r4, #0\n    bne _0223138A\n    ldr r0, [sp, #8]\n    ldr r1, _022313C4 ; =0x00000B0C\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r6, r1\n    mov r2, #0\n    add r3, r7, #0\n    bl ov44_0222AD34\n    b _022313AE\n    ldr r0, [sp, #0xc]\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02231398\n    mov r0, #8\n    b _0223139A\n    mov r0, #1\n    ldr r1, _022313C4 ; =0x00000B0C\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r6, r1\n    mov r2, #0\n    add r3, r7, #0\n    bl ov44_0222ACE8\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #2\n    blt _0223136A\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _022313C0: .word ov44_02235364\n    _022313C4: .word 0x00000B0C"
    );
    #endif
}

void ov44_022313C8(void) {
    /* Original at 0x022313C8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r1, _02231418 ; =0x00000B8D\n    ldrb r2, [r0, r1]\n    cmp r2, #0\n    beq _02231414\n    add r2, r1, #5\n    ldrb r2, [r0, r2]\n    add r3, r2, #1\n    add r2, r1, #5\n    strb r3, [r0, r2]\n    ldrb r4, [r0, r2]\n    add r2, r1, #1\n    ldrb r3, [r0, r2]\n    ldr r2, _0223141C ; =ov44_02235368\n    ldrb r2, [r2, r3]\n    cmp r4, r2\n    blo _02231414\n    mov r3, #0\n    add r2, r1, #5\n    strb r3, [r0, r2]\n    add r2, r1, #1\n    ldrb r2, [r0, r2]\n    add r4, r2, #1\n    add r2, r1, #1\n    strb r4, [r0, r2]\n    mov r2, #1\n    add r4, r1, #4\n    strb r2, [r0, r4]\n    add r4, r1, #1\n    ldrb r4, [r0, r4]\n    cmp r4, #4\n    blo _02231414\n    add r4, r1, #5\n    strb r3, [r0, r4]\n    add r4, r1, #1\n    strb r3, [r0, r4]\n    add r1, r1, #2\n    strb r2, [r0, r1]\n    pop {r3, r4}\n    bx lr\n    _02231418: .word 0x00000B8D\n    _0223141C: .word ov44_02235368"
    );
    #endif
}

void ov44_02231420(void) {
    /* Original at 0x02231420 */
    /* Requires manual decompilation - 285 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x12c\n    ldr r6, _02231684 ; =ov44_02235570\n    str r2, [sp, #0x2c]\n    add r5, r0, #0\n    add r4, r1, #0\n    add r3, sp, #0x9c\n    mov r2, #0x12\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02231430\n    mov r0, #0x10\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0x1e\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    add r1, r4, #0\n    str r0, [sp, #8]\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r2, #0x2b\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    ldr r1, _02231688 ; =0x00000D28\n    mov r2, #0x2c\n    str r0, [r5, r1]\n    mov r0, #0x1e\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x2c]\n    add r1, r4, #0\n    str r0, [sp, #0xc]\n    mov r0, #0xb\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    ldr r1, _0223168C ; =0x00000D2C\n    mov r2, #0x29\n    str r0, [r5, r1]\n    mov r0, #0x1e\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    add r1, r4, #0\n    str r0, [sp, #8]\n    mov r0, #0xb1\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0xd3\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #0x1e\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    add r1, r4, #0\n    str r0, [sp, #8]\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r2, #0x2a\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r1, _02231690 ; =0x00000D34\n    str r0, [r5, r1]\n    sub r1, #0xc\n    ldr r0, [r5, r1]\n    bl sub_0200AE18\n    cmp r0, #0\n    bne _022314D6\n    bl GF_AssertFail\n    ldr r0, _0223168C ; =0x00000D2C\n    ldr r0, [r5, r0]\n    bl sub_0200B00C\n    cmp r0, #0\n    bne _022314E6\n    bl GF_AssertFail\n    ldr r0, _02231688 ; =0x00000D28\n    ldr r0, [r5, r0]\n    bl sub_0200A740\n    ldr r0, _0223168C ; =0x00000D2C\n    ldr r0, [r5, r0]\n    bl sub_0200A740\n    mov r1, #0x1e\n    add r0, r1, #0\n    mov r3, #0xaf\n    str r1, [sp]\n    sub r0, #0x1f\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    lsl r3, r3, #2\n    ldr r2, [r5, r3]\n    str r2, [sp, #0x14]\n    add r2, r3, #4\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x18]\n    add r2, r3, #0\n    add r2, #8\n    ldr r2, [r5, r2]\n    add r3, #0xc\n    str r2, [sp, #0x1c]\n    ldr r2, [r5, r3]\n    add r3, r1, #0\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, sp, #0x78\n    add r2, r1, #0\n    bl CreateSpriteResourcesHeader\n    mov r0, #0\n    add r4, sp, #0x9c\n    ldr r7, _02231694 ; =_0223535C\n    str r0, [sp, #0x34]\n    str r4, [sp, #0x30]\n    add r6, r5, #0\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    str r0, [r4]\n    add r0, sp, #0x78\n    str r0, [r4, #4]\n    ldr r0, [sp, #0x2c]\n    str r0, [r4, #0x2c]\n    ldr r0, [sp, #0x30]\n    bl Sprite_CreateAffine\n    ldr r1, _02231698 ; =0x00000D38\n    str r0, [r6, r1]\n    add r0, r1, #0\n    ldrb r1, [r7]\n    ldr r0, [r6, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [sp, #0x30]\n    add r4, #0x30\n    add r0, #0x30\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x34]\n    add r6, r6, #4\n    add r0, r0, #1\n    add r7, r7, #1\n    str r0, [sp, #0x34]\n    cmp r0, #3\n    blt _0223153E\n    ldr r1, [sp, #0x2c]\n    mov r0, #2\n    bl FontID_Alloc\n    add r0, sp, #0x68\n    bl InitWindow\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, sp, #0x68\n    mov r2, #8\n    mov r3, #2\n    bl AddTextWindowTopLeftCorner\n    ldr r1, [sp, #0x2c]\n    mov r0, #0x40\n    bl String_New\n    add r4, r0, #0\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x49\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    mov r0, #2\n    add r1, r4, #0\n    mov r2, #0\n    mov r3, #0x40\n    bl FontID_String_GetCenterAlignmentX\n    mov r1, #0\n    add r3, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0223169C ; =0x00010200\n    add r2, r4, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, sp, #0x68\n    mov r1, #2\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    ldr r1, [sp, #0x2c]\n    add r0, sp, #0x68\n    bl sub_02013910\n    mov r1, #2\n    add r4, r0, #0\n    bl sub_02013948\n    ldr r3, _022316A0 ; =0x00000D44\n    mov r1, #1\n    mov r2, #2\n    add r3, r5, r3\n    bl sub_02021AC8\n    cmp r0, #0\n    bne _02231604\n    bl GF_AssertFail\n    mov r0, #0xb3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    str r0, [sp, #0x38]\n    add r0, sp, #0x68\n    str r0, [sp, #0x3c]\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    str r0, [sp, #0x40]\n    ldr r0, _0223168C ; =0x00000D2C\n    ldr r0, [r5, r0]\n    bl SpriteTransfer_GetPaletteProxy\n    str r0, [sp, #0x44]\n    ldr r0, _022316A4 ; =0x00000D3C\n    ldr r1, [r5, r0]\n    add r0, #0xc\n    str r1, [sp, #0x48]\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    str r0, [sp, #0x4c]\n    mov r0, #0x1f\n    mvn r0, r0\n    str r0, [sp, #0x50]\n    add r0, #0x18\n    str r0, [sp, #0x54]\n    mov r0, #0\n    str r0, [sp, #0x58]\n    str r0, [sp, #0x5c]\n    mov r0, #2\n    str r0, [sp, #0x60]\n    ldr r0, [sp, #0x2c]\n    str r0, [sp, #0x64]\n    add r0, sp, #0x38\n    bl TextOBJ_Create\n    mov r1, #0xd5\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r4, #0\n    bl sub_02013938\n    add r0, sp, #0x68\n    bl RemoveWindow\n    mov r0, #2\n    bl FontID_Release\n    ldr r0, [sp, #0x2c]\n    ldr r2, _022316A8 ; =ov44_022317F0\n    str r0, [sp]\n    ldr r0, _022316AC ; =ov44_02235394\n    mov r1, #3\n    add r3, r5, #0\n    bl TouchHitboxController_Create\n    mov r1, #0xd6\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add sp, #0x12c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02231684: .word ov44_02235570\n    _02231688: .word 0x00000D28\n    _0223168C: .word 0x00000D2C\n    _02231690: .word 0x00000D34\n    _02231694: .word _0223535C\n    _02231698: .word 0x00000D38\n    _0223169C: .word 0x00010200\n    _022316A0: .word 0x00000D44\n    _022316A4: .word 0x00000D3C\n    _022316A8: .word ov44_022317F0\n    _022316AC: .word ov44_02235394"
    );
    #endif
}

void ov44_022316B0(void) {
    /* Original at 0x022316B0 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0xd6\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl TouchHitboxController_Destroy\n    mov r0, #0xd5\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl TextOBJ_Destroy\n    ldr r0, _02231710 ; =0x00000D44\n    add r0, r5, r0\n    bl sub_02021B5C\n    ldr r7, _02231714 ; =0x00000D38\n    mov r6, #0\n    add r4, r5, #0\n    ldr r0, [r4, r7]\n    bl Sprite_Delete\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #3\n    blt _022316D6\n    ldr r0, _02231718 ; =0x00000D28\n    ldr r0, [r5, r0]\n    bl sub_0200AEB0\n    ldr r0, _0223171C ; =0x00000D2C\n    ldr r0, [r5, r0]\n    bl sub_0200B0A8\n    mov r7, #0xaf\n    ldr r6, _02231718 ; =0x00000D28\n    mov r4, #0\n    lsl r7, r7, #2\n    ldr r0, [r5, r7]\n    ldr r1, [r5, r6]\n    bl DestroySingle2DGfxResObj\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _022316FC\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02231710: .word 0x00000D44\n    _02231714: .word 0x00000D38\n    _02231718: .word 0x00000D28\n    _0223171C: .word 0x00000D2C"
    );
    #endif
}

void ov44_02231720(void) {
    /* Original at 0x02231720 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _02231748 ; =0x00000D54\n    mov r1, #1\n    str r1, [r5, r0]\n    mov r0, #0x10\n    bl GfGfx_EngineBTogglePlanes\n    ldr r0, _0223174C ; =0x00000D58\n    mov r4, #0\n    ldr r6, _02231750 ; =0x00000B1C\n    str r4, [r5, r0]\n    add r0, r5, r6\n    add r1, r4, #0\n    bl ov44_02231800\n    add r4, r4, #1\n    cmp r4, #3\n    blt _02231738\n    pop {r4, r5, r6, pc}\n    _02231748: .word 0x00000D54\n    _0223174C: .word 0x00000D58\n    _02231750: .word 0x00000B1C"
    );
    #endif
}

void ov44_02231754(void) {
    /* Original at 0x02231754 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02231784 ; =0x00000D54\n    ldr r1, [r4, r0]\n    cmp r1, #2\n    bne _02231776\n    sub r0, #0x18\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0xd5\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl TextOBJ_SetSpritesDrawFlag\n    ldr r0, _02231784 ; =0x00000D54\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #0x10\n    bl GfGfx_EngineBTogglePlanes\n    pop {r4, pc}\n    _02231784: .word 0x00000D54"
    );
    #endif
}

void ov44_02231788(void) {
    /* Original at 0x02231788 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r1, _022317E0 ; =0x00000D54\n    add r5, r0, #0\n    ldr r0, [r5, r1]\n    cmp r0, #0\n    bne _02231798\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #3\n    add r0, r1, #4\n    str r2, [r5, r0]\n    add r0, r1, #0\n    mov r2, #0xff\n    add r0, #8\n    add r1, #0xc\n    str r2, [r5, r0]\n    ldr r0, [r5, r1]\n    bl TouchHitboxController_IsTriggered\n    ldr r6, _022317E4 ; =0x00000B1C\n    ldr r7, _022317E0 ; =0x00000D54\n    mov r4, #0\n    ldr r0, [r5, r7]\n    cmp r0, #2\n    bne _022317BE\n    cmp r4, #1\n    beq _022317D6\n    ldr r2, _022317E8 ; =0x00000D58\n    ldr r3, _022317EC ; =0x00000D5C\n    ldr r2, [r5, r2]\n    ldr r3, [r5, r3]\n    add r0, r5, r6\n    add r1, r4, #0\n    bl ov44_0223183C\n    cmp r0, #1\n    bne _022317D6\n    add r0, r4, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    cmp r4, #3\n    blt _022317B4\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _022317E0: .word 0x00000D54\n    _022317E4: .word 0x00000B1C\n    _022317E8: .word 0x00000D58\n    _022317EC: .word 0x00000D5C"
    );
    #endif
}

void ov44_022317F0(void) {
    /* Original at 0x022317F0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _022317FC ; =0x00000D58\n    str r0, [r2, r3]\n    add r0, r3, #4\n    str r1, [r2, r0]\n    bx lr\n    nop\n    _022317FC: .word 0x00000D58"
    );
    #endif
}

void ov44_02231800(void) {
    /* Original at 0x02231800 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r0, #0x87\n    ldr r1, _02231838 ; =_0223535C\n    lsl r0, r0, #2\n    add r6, r5, r0\n    lsl r7, r4, #2\n    ldrb r1, [r1, r4]\n    ldr r0, [r6, r7]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r6, r7]\n    mov r1, #4\n    bl Sprite_SetAnimationFrame\n    cmp r4, #1\n    bne _02231836\n    mov r0, #0x8d\n    mov r1, #0x1f\n    lsl r0, r0, #2\n    mvn r1, r1\n    add r2, r1, #0\n    ldr r0, [r5, r0]\n    add r2, #0x18\n    bl sub_020136B4\n    pop {r3, r4, r5, r6, r7, pc}\n    _02231838: .word _0223535C"
    );
    #endif
}

void ov44_0223183C(void) {
    /* Original at 0x0223183C */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    mov r0, #0\n    add r5, r1, #0\n    add r6, r3, #0\n    str r0, [sp, #8]\n    cmp r2, r5\n    bne _022318BE\n    mov r1, #0x87\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    lsl r4, r5, #2\n    add r7, r0, r1\n    ldr r0, [r7, r4]\n    bl Sprite_GetAnimationFrame\n    str r0, [sp, #4]\n    cmp r6, #0\n    beq _02231868\n    cmp r6, #2\n    bne _022318B0\n    cmp r6, #0\n    bne _02231876\n    ldr r1, _0223190C ; =ov44_02235360\n    ldr r0, [r7, r4]\n    ldrb r1, [r1, r5]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [sp, #4]\n    cmp r0, #3\n    bhs _02231904\n    mov r1, #2\n    ldr r0, [r7, r4]\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    ldr r0, [r7, r4]\n    bl Sprite_GetAnimationFrame\n    add r4, r0, #0\n    cmp r5, #1\n    bne _022318A6\n    ldr r2, _02231910 ; =ov44_0223536C\n    mov r1, #0x8d\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #0x1f\n    ldrsb r2, [r2, r4]\n    mvn r1, r1\n    bl sub_020136B4\n    cmp r4, #3\n    blo _02231904\n    mov r0, #1\n    str r0, [sp, #8]\n    b _02231904\n    cmp r6, #1\n    bne _02231904\n    cmp r0, #3\n    bhs _02231904\n    mov r0, #1\n    str r0, [sp, #8]\n    b _02231904\n    mov r1, #0x87\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    lsl r4, r5, #2\n    add r6, r0, r1\n    ldr r0, [r6, r4]\n    bl Sprite_GetAnimationNumber\n    add r7, r0, #0\n    ldr r0, [r6, r4]\n    bl Sprite_GetAnimationFrame\n    str r0, [sp, #0xc]\n    ldr r0, _0223190C ; =ov44_02235360\n    ldrb r0, [r0, r5]\n    cmp r7, r0\n    bne _022318FA\n    ldr r1, _02231914 ; =_0223535C\n    ldr r0, [r6, r4]\n    ldrb r1, [r1, r5]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r1, [sp, #0xc]\n    mov r2, #4\n    sub r1, r2, r1\n    lsl r1, r1, #0x10\n    ldr r0, [r6, r4]\n    lsr r1, r1, #0x10\n    bl Sprite_SetAnimationFrame\n    mov r1, #2\n    ldr r0, [r6, r4]\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    ldr r0, [sp, #8]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223190C: .word ov44_02235360\n    _02231910: .word ov44_0223536C\n    _02231914: .word _0223535C"
    );
    #endif
}

void ov44_02231918(void) {
    /* Original at 0x02231918 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0\n    add r6, r1, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _02231950\n    mov r0, #0x35\n    bl PlayerProfile_New\n    add r4, r0, #0\n    ldr r0, [r5]\n    add r1, r6, #0\n    bl sub_0202C254\n    add r1, r0, #0\n    add r0, r4, #0\n    bl Save_Profile_PlayerName_Set\n    ldr r0, _02231954 ; =0x00000B1C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    bl BufferPlayersName\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}\n    nop\n    _02231954: .word 0x00000B1C"
    );
    #endif
}

void ov44_02231958(void) {
    /* Original at 0x02231958 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0x20\n    blo _02231962\n    ldr r1, _02231970 ; =0x00001098\n    add r0, r0, r1\n    bx lr\n    ldr r2, [r0, #4]\n    mov r0, #0x24\n    add r2, #0x24\n    mul r0, r1\n    add r0, r2, r0\n    bx lr\n    nop\n    _02231970: .word 0x00001098"
    );
    #endif
}

void ov44_02231974(void) {
    ov00_021E6D68();
}

void ov44_0223197C(void) {
    /* Original at 0x0223197C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0xf\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_020379A0\n    ldr r0, [r5, #4]\n    add r0, #0x21\n    ldrb r0, [r0]\n    bl ov00_021E70B8\n    add r0, r6, #0\n    bl ov44_02229F44\n    cmp r0, #1\n    bne _022319A8\n    mov r0, #1\n    mov r1, #0x80\n    bl ov00_021E714C\n    b _022319B0\n    mov r0, #0\n    mov r1, #0x80\n    bl ov00_021E714C\n    bl sub_02097214\n    add r0, r4, #0\n    bl sub_02039080\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov44_022319BC(void) {
    /* Original at 0x022319BC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _022319E8 ; =0x00000D64\n    add r4, r1, #0\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    bne _022319E6\n    mov r1, #1\n    str r1, [r5, r0]\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov44_02231D94\n    cmp r4, #1\n    bne _022319E6\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #0\n    bl ov44_0222F510\n    pop {r3, r4, r5, pc}\n    _022319E8: .word 0x00000D64"
    );
    #endif
}

void ov44_022319EC(void) {
    /* Original at 0x022319EC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02231A10 ; =0x00000D64\n    add r4, r0, #0\n    ldr r2, [r4, r1]\n    cmp r2, #1\n    bne _02231A0C\n    mov r2, #0\n    str r2, [r4, r1]\n    bl ov44_0222F7BC\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0\n    bl ov44_02231D94\n    pop {r4, pc}\n    nop\n    _02231A10: .word 0x00000D64"
    );
    #endif
}

void ov44_02231A14(void) {
    ov44_02231A28();
    YesNoPrompt_SetIgnoreTouch(1);
}

void ov44_02231A28(void) {
    /* Original at 0x02231A28 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0x35\n    add r4, r1, #0\n    add r6, r2, #0\n    bl YesNoPrompt_Create\n    str r5, [sp]\n    ldrb r1, [r4]\n    add r7, r0, #0\n    str r1, [sp, #4]\n    ldrh r1, [r4, #6]\n    str r1, [sp, #8]\n    ldrb r1, [r4, #5]\n    str r1, [sp, #0xc]\n    ldrb r2, [r4, #1]\n    add r1, sp, #0\n    strb r2, [r1, #0x10]\n    ldrb r2, [r4, #2]\n    strb r2, [r1, #0x11]\n    ldrb r3, [r1, #0x12]\n    mov r2, #0xf\n    bic r3, r2\n    strb r3, [r1, #0x12]\n    ldrb r2, [r1, #0x12]\n    mov r3, #0xf0\n    bic r2, r3\n    lsl r3, r6, #0x18\n    lsr r3, r3, #0x18\n    lsl r3, r3, #0x1c\n    lsr r3, r3, #0x18\n    orr r2, r3\n    strb r2, [r1, #0x12]\n    mov r2, #0\n    strb r2, [r1, #0x13]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    add r0, r7, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_02231A7C(void) {
    /* Original at 0x02231A7C */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r2, #0\n    add r4, r1, #0\n    ldr r2, _02231B3C ; =0x000006FC\n    mov r1, #0\n    add r5, r0, #0\n    str r3, [sp]\n    bl memset\n    ldr r0, [sp, #0x24]\n    str r4, [r5, #4]\n    sub r0, r0, #1\n    lsr r7, r0, #3\n    ldr r0, [sp]\n    add r2, r6, #0\n    str r0, [r5, #0x10]\n    add r0, r5, #0\n    ldr r1, [r5, #4]\n    add r0, #0x14\n    bl ov44_02232298\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    bl ov44_02232334\n    add r0, r7, #0\n    bl ov44_02232E90\n    add r2, sp, #4\n    strh r0, [r2]\n    lsr r0, r0, #0x10\n    strh r0, [r2, #2]\n    ldrh r0, [r2]\n    strh r0, [r2, #4]\n    ldrh r1, [r2, #2]\n    strh r1, [r2, #6]\n    ldrh r0, [r2, #4]\n    add r2, r4, #0\n    bl ov42_02227EE0\n    ldr r1, _02231B40 ; =0x000006E4\n    str r0, [r5, r1]\n    add r0, r7, #0\n    bl ov44_02232E9C\n    add r1, r0, #0\n    ldr r0, _02231B40 ; =0x000006E4\n    ldr r0, [r5, r0]\n    bl ov42_02227F48\n    mov r0, #0x30\n    add r1, r4, #0\n    bl ov42_02228010\n    ldr r1, _02231B44 ; =0x000006E8\n    add r2, r4, #0\n    str r0, [r5, r1]\n    ldr r1, [sp, #0x20]\n    add r0, r5, #0\n    bl ov44_02232204\n    mov r0, #0x6f\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ov42_02229394\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov44_02232248\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov44_0223233C\n    mov r1, #0x6d\n    lsl r1, r1, #4\n    add r0, r5, #0\n    add r1, r5, r1\n    add r2, r6, #0\n    bl ov44_02232CCC\n    mov r0, #0x80\n    add r1, r4, #0\n    bl ov42_02229A40\n    ldr r1, _02231B48 ; =0x000006F8\n    str r0, [r5, r1]\n    mov r0, #1\n    str r0, [r5]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02231B3C: .word 0x000006FC\n    _02231B40: .word 0x000006E4\n    _02231B44: .word 0x000006E8\n    _02231B48: .word 0x000006F8"
    );
    #endif
}

void ov44_02231B4C(void) {
    /* Original at 0x02231B4C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02231BA0 ; =0x000006F8\n    ldr r0, [r4, r0]\n    bl ov42_02229A78\n    add r0, r4, #0\n    bl ov44_02232288\n    mov r1, #0x6d\n    lsl r1, r1, #4\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov44_02232D08\n    add r0, r4, #0\n    bl ov44_02232028\n    add r0, r4, #0\n    bl ov44_02232238\n    ldr r0, _02231BA4 ; =0x000006E8\n    ldr r0, [r4, r0]\n    bl ov42_02228050\n    ldr r0, _02231BA8 ; =0x000006E4\n    ldr r0, [r4, r0]\n    bl ov42_02227F28\n    add r0, r4, #0\n    add r0, #0x14\n    bl ov44_022322E8\n    ldr r0, [r4, #0x10]\n    bl ov44_02232338\n    ldr r2, _02231BAC ; =0x000006FC\n    add r0, r4, #0\n    mov r1, #0\n    bl memset\n    pop {r4, pc}\n    _02231BA0: .word 0x000006F8\n    _02231BA4: .word 0x000006E8\n    _02231BA8: .word 0x000006E4\n    _02231BAC: .word 0x000006FC"
    );
    #endif
}

void ov44_02231BB0(void) {
    /* Original at 0x02231BB0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov44_02231BB4(void) {
    /* Original at 0x02231BB4 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02231C50 ; =0x000006E8\n    ldr r0, [r4, r0]\n    bl ov42_0222807C\n    add r0, r4, #0\n    bl ov44_02232158\n    add r0, r4, #0\n    bl ov44_02232104\n    mov r1, #0x6f\n    lsl r1, r1, #4\n    add r0, r4, r1\n    sub r1, #0x24\n    ldr r1, [r4, r1]\n    ldr r1, [r1]\n    bl ov42_02229358\n    ldr r1, _02231C54 ; =0x000006F4\n    ldr r0, [r4, r1]\n    sub r1, r1, #4\n    add r1, r4, r1\n    bl ov42_02229420\n    ldr r0, _02231C58 ; =0x000006EC\n    ldr r0, [r4, r0]\n    bl ov42_022290DC\n    add r0, r4, #0\n    bl ov44_02232194\n    add r0, r4, #0\n    bl ov44_02232594\n    add r0, r4, #0\n    bl ov44_02232050\n    cmp r0, #1\n    bne _02231C4A\n    add r0, r4, #0\n    bl ov44_02232604\n    cmp r0, #1\n    bne _02231C24\n    add r0, r4, #0\n    bl ov44_0223254C\n    ldr r0, _02231C5C ; =gSystem\n    ldr r1, [r0, #0x44]\n    mov r0, #0x80\n    tst r0, r1\n    beq _02231C24\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, _02231C5C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _02231C4A\n    add r0, r4, #0\n    bl ov44_02231C70\n    cmp r0, #0\n    beq _02231C3C\n    mov r0, #2\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov44_02232070\n    cmp r0, #1\n    bne _02231C4A\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02231C50: .word 0x000006E8\n    _02231C54: .word 0x000006F4\n    _02231C58: .word 0x000006EC\n    _02231C5C: .word gSystem"
    );
    #endif
}

void ov44_02231C60(void) {
    SpriteList_RenderAndAnimateSprites();
}

void ov44_02231C70(void) {
    GF_AssertFail();
}

void ov44_02231C8C(void) {
    /* Original at 0x02231C8C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, _02231CE0 ; =0x000006CC\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _02231C9E\n    bl GF_AssertFail\n    ldr r0, _02231CE0 ; =0x000006CC\n    ldr r0, [r4, r0]\n    ldr r0, [r0]\n    bl ov42_022282DC\n    add r2, sp, #0\n    strh r0, [r2]\n    lsr r0, r0, #0x10\n    strh r0, [r2, #2]\n    ldrh r0, [r2]\n    mov r1, #4\n    strh r0, [r2, #4]\n    ldrh r0, [r2, #2]\n    strh r0, [r2, #6]\n    ldrsh r3, [r2, r1]\n    ldr r0, _02231CE4 ; =0x000006E4\n    asr r1, r3, #3\n    lsr r1, r1, #0x1c\n    add r1, r3, r1\n    mov r3, #6\n    ldrsh r3, [r2, r3]\n    lsl r1, r1, #0xc\n    ldr r0, [r4, r0]\n    asr r2, r3, #3\n    lsr r2, r2, #0x1c\n    add r2, r3, r2\n    lsl r2, r2, #0xc\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    bl ov42_02227FDC\n    add sp, #8\n    pop {r4, pc}\n    _02231CE0: .word 0x000006CC\n    _02231CE4: .word 0x000006E4"
    );
    #endif
}

void ov44_02231CE8(void) {
    /* Original at 0x02231CE8 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, _02231D40 ; =0x000006CC\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _02231CFA\n    bl GF_AssertFail\n    ldr r0, _02231D40 ; =0x000006CC\n    ldr r0, [r4, r0]\n    ldr r0, [r0]\n    bl ov42_022282DC\n    add r2, sp, #0\n    strh r0, [r2]\n    lsr r0, r0, #0x10\n    strh r0, [r2, #2]\n    ldrh r0, [r2]\n    mov r1, #4\n    strh r0, [r2, #4]\n    ldrh r0, [r2, #2]\n    strh r0, [r2, #6]\n    ldrsh r3, [r2, r1]\n    ldr r0, _02231D44 ; =0x000006E4\n    asr r1, r3, #3\n    lsr r1, r1, #0x1c\n    add r1, r3, r1\n    mov r3, #6\n    ldrsh r3, [r2, r3]\n    lsl r1, r1, #0xc\n    ldr r0, [r4, r0]\n    asr r2, r3, #3\n    lsr r2, r2, #0x1c\n    add r2, r3, r2\n    asr r2, r2, #4\n    add r2, r2, #1\n    lsl r2, r2, #0x10\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    bl ov42_02227FDC\n    add sp, #8\n    pop {r4, pc}\n    _02231D40: .word 0x000006CC\n    _02231D44: .word 0x000006E4"
    );
    #endif
}

void ov44_02231D48(void) {
    /* Original at 0x02231D48 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r4, r0, #0\n    ldr r0, [r5]\n    bl ov42_022282DC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    ldr r0, [r5, #4]\n    bl ov42_0222920C\n    add r2, r0, #0\n    add r1, sp, #0\n    add r0, r4, #0\n    mov r4, sp\n    ldrh r3, [r1, #4]\n    sub r4, r4, #4\n    sub r2, r2, #2\n    strh r3, [r4]\n    ldrh r1, [r1, #6]\n    strh r1, [r4, #2]\n    ldr r1, [r4]\n    bl ov44_022325A4\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_02231D8C(void) {
    ov44_022325F4();
}

void ov44_02231D94(void) {
    /* Original at 0x02231D94 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov44_02231D98(void) {
    /* Original at 0x02231D98 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov44_02231D9C(void) {
    /* Original at 0x02231D9C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r1, #0\n    bl ov44_02232798\n    add r4, r0, #0\n    ldr r0, _02231E00 ; =0x000006CC\n    add r1, sp, #0xc\n    str r4, [r5, r0]\n    add r0, r5, #0\n    bl ov44_02232724\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r3, #0\n    str r3, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, sp, #0xc\n    str r3, [sp, #8]\n    bl ov44_02232800\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_02232864\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov44_022327C8\n    mov r1, #0x6f\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0x24\n    ldr r1, [r5, r1]\n    ldr r1, [r1]\n    bl ov42_02229358\n    ldr r1, _02231E04 ; =0x000006F4\n    ldr r0, [r5, r1]\n    sub r1, r1, #4\n    add r1, r5, r1\n    bl ov42_02229420\n    add r0, r4, #0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _02231E00: .word 0x000006CC\n    _02231E04: .word 0x000006F4"
    );
    #endif
}

void ov44_02231E08(void) {
    /* Original at 0x02231E08 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r1, #0\n    bl ov44_02232798\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, sp, #0x14\n    sub r2, r6, #1\n    bl ov44_02232680\n    ldr r0, _02231E90 ; =0x000006CC\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _02231E5E\n    ldr r0, [r0]\n    bl ov42_022282DC\n    add r1, sp, #0xc\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    mov r2, #8\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    ldrsh r2, [r1, r2]\n    cmp r0, r2\n    bne _02231E5E\n    mov r0, #6\n    mov r2, #0xa\n    ldrsh r0, [r1, r0]\n    ldrsh r1, [r1, r2]\n    cmp r0, r1\n    bne _02231E5E\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, sp, #0x14\n    add r3, r6, #0\n    bl ov44_02232800\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_02232884\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov44_022327C8\n    add r0, r4, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _02231E90: .word 0x000006CC"
    );
    #endif
}

void ov44_02231E94(void) {
    /* Original at 0x02231E94 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    mov r1, #6\n    bl ov42_02228188\n    ldr r0, _02231ECC ; =ov44_02232BCC\n    mov r1, #0\n    str r0, [r4, #0x10]\n    ldr r0, _02231ED0 ; =ov44_02232914\n    str r0, [r4, #0x18]\n    mov r0, #2\n    strh r0, [r4, #0xc]\n    strh r1, [r4, #8]\n    ldr r0, [r4, #4]\n    bl ov42_0222919C\n    ldr r0, [r4, #4]\n    bl ov42_022291A0\n    add r0, r5, #0\n    mov r1, #4\n    add r2, r4, #0\n    bl ov44_02232C6C\n    pop {r3, r4, r5, pc}\n    nop\n    _02231ECC: .word ov44_02232BCC\n    _02231ED0: .word ov44_02232914"
    );
    #endif
}

void ov44_02231ED4(void) {
    /* Original at 0x02231ED4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl ov42_022290C4\n    ldr r0, [r4]\n    bl ov42_02228100\n    mov r1, #0x1c\n    mov r0, #0\n    strb r0, [r4]\n    add r4, r4, #1\n    sub r1, r1, #1\n    bne _02231EE8\n    pop {r4, pc}"
    );
    #endif
}

void ov44_02231EF4(void) {
    ov42_02228188();
}

void ov44_02231F04(void) {
    /* Original at 0x02231F04 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    mov r1, #6\n    bl ov42_02228188\n    bl ov42_022282A4\n    pop {r3, pc}"
    );
    #endif
}

void ov44_02231F14(void) {
    /* Original at 0x02231F14 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r1, #0\n    add r6, r0, #0\n    ldr r0, [r5, #0x10]\n    add r4, r2, #0\n    str r0, [r5, #0x14]\n    ldr r0, _02231F84 ; =ov44_02232C48\n    mov r1, #4\n    str r0, [r5, #0x10]\n    ldrh r0, [r5, #0xc]\n    strh r0, [r5, #0xe]\n    mov r0, #5\n    strh r0, [r5, #0xc]\n    ldr r0, [r5]\n    bl ov42_02228188\n    add r3, r0, #0\n    add r0, r6, #0\n    mov r1, #0\n    add r2, r4, #0\n    bl ov44_02232C4C\n    ldr r0, [r5, #4]\n    mov r1, #0\n    bl ov42_0222919C\n    ldr r0, [r5, #4]\n    add r1, r4, #0\n    bl ov42_02229218\n    ldr r0, [r5]\n    mov r1, #0\n    bl ov42_02228188\n    add r1, sp, #0\n    strh r0, [r1]\n    ldr r0, [r5]\n    mov r1, #1\n    bl ov42_02228188\n    add r1, sp, #0\n    strh r0, [r1, #2]\n    mov r3, sp\n    ldrh r2, [r1]\n    ldr r0, [r5, #4]\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #2]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022291D8\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02231F84: .word ov44_02232C48"
    );
    #endif
}

void ov44_02231F88(void) {
    /* Original at 0x02231F88 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    beq _02231FA6\n    ldr r0, [r1, #0x14]\n    cmp r0, #0\n    beq _02231FA6\n    str r0, [r1, #0x10]\n    mov r0, #0\n    str r0, [r1, #0x14]\n    ldrh r0, [r1, #0xe]\n    strh r0, [r1, #0xc]\n    ldr r0, [r1, #4]\n    mov r1, #1\n    bl ov42_0222919C\n    pop {r3, pc}"
    );
    #endif
}

void ov44_02231FA8(void) {
    /* Original at 0x02231FA8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    add r4, r2, #0\n    bl ov44_02232C94\n    cmp r0, #0\n    bne _02231FBE\n    strb r4, [r5, #0xb]\n    pop {r4, r5, r6, pc}\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov44_02232CA8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov44_02231FCC(void) {
    /* Original at 0x02231FCC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov44_02232070\n    cmp r0, #1\n    bne _02232002\n    add r0, r5, #0\n    bl ov44_02231CE8\n    lsl r0, r0, #0x18\n    asr r0, r0, #0x18\n    sub r0, r0, #3\n    lsl r0, r0, #0x18\n    asr r4, r0, #0x18\n    bmi _02231FEE\n    cmp r4, #4\n    blt _02231FF2\n    bl GF_AssertFail\n    mov r0, #0x6d\n    lsl r0, r0, #4\n    lsl r1, r4, #0x18\n    add r0, r5, r0\n    lsr r1, r1, #0x18\n    bl ov44_02232E5C\n    pop {r3, r4, r5, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_02232008(void) {
    /* Original at 0x02232008 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x6d\n    lsl r1, r1, #4\n    ldr r3, _02232014 ; =ov44_02232E80\n    add r0, r0, r1\n    bx r3\n    nop\n    _02232014: .word ov44_02232E80"
    );
    #endif
}

void ov44_02232018(void) {
    /* Original at 0x02232018 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x6d\n    lsl r1, r1, #4\n    ldr r3, _02232024 ; =ov44_02232D20\n    add r1, r0, r1\n    bx r3\n    nop\n    _02232024: .word ov44_02232D20"
    );
    #endif
}

void ov44_02232028(void) {
    /* Original at 0x02232028 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x63\n    lsl r0, r0, #2\n    mov r6, #0\n    add r4, r5, r0\n    add r7, r0, #0\n    ldr r0, [r5, r7]\n    cmp r0, #0\n    beq _02232042\n    add r0, r4, #0\n    bl ov44_02231ED4\n    add r6, r6, #1\n    add r5, #0x1c\n    add r4, #0x1c\n    cmp r6, #0x30\n    blt _02232036\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_02232050(void) {
    ov42_02228188(0, 1, 5);
}

void ov44_02232070(void) {
    /* Original at 0x02232070 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _022320FC ; =0x000006CC\n    ldr r0, [r5, r0]\n    ldr r0, [r0]\n    bl ov42_022282DC\n    add r1, sp, #0\n    strh r0, [r1, #4]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #6]\n    ldrh r0, [r1, #4]\n    strh r0, [r1, #0xc]\n    ldrh r0, [r1, #6]\n    strh r0, [r1, #0xe]\n    ldr r0, _022320FC ; =0x000006CC\n    mov r1, #6\n    ldr r0, [r5, r0]\n    ldr r0, [r0]\n    bl ov42_02228188\n    add r4, r0, #0\n    add r0, sp, #0\n    mov r2, sp\n    ldrh r1, [r0, #0xc]\n    sub r2, r2, #4\n    strh r1, [r2]\n    ldrh r0, [r0, #0xe]\n    add r1, r4, #0\n    strh r0, [r2, #2]\n    ldr r0, [r2]\n    bl ov42_02228270\n    add r2, sp, #0\n    strh r0, [r2]\n    lsr r0, r0, #0x10\n    strh r0, [r2, #2]\n    ldrh r0, [r2]\n    mov r1, #8\n    strh r0, [r2, #8]\n    ldrh r0, [r2, #2]\n    strh r0, [r2, #0xa]\n    ldrsh r3, [r2, r1]\n    ldr r0, _02232100 ; =0x000006E4\n    asr r1, r3, #3\n    lsr r1, r1, #0x1c\n    add r1, r3, r1\n    mov r3, #0xa\n    ldrsh r3, [r2, r3]\n    lsl r1, r1, #0xc\n    ldr r0, [r5, r0]\n    asr r2, r3, #3\n    lsr r2, r2, #0x1c\n    add r2, r3, r2\n    lsl r2, r2, #0xc\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    bl ov42_02227FDC\n    cmp r4, #0\n    bne _022320F6\n    cmp r0, #2\n    bne _022320F6\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _022320FC: .word 0x000006CC\n    _02232100: .word 0x000006E4"
    );
    #endif
}

void ov44_02232104(void) {
    /* Original at 0x02232104 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0223214C ; =0x000006F8\n    add r1, sp, #8\n    ldr r0, [r5, r0]\n    bl ov42_02229AC8\n    cmp r0, #1\n    bne _02232148\n    ldr r7, _02232150 ; =0x000006E8\n    add r6, sp, #0\n    add r4, sp, #8\n    ldr r0, _02232154 ; =0x000006E4\n    ldr r1, [r5, r7]\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    add r3, r6, #0\n    bl ov42_02228C80\n    cmp r0, #1\n    bne _0223213A\n    ldr r0, _02232150 ; =0x000006E8\n    add r1, r6, #0\n    ldr r0, [r5, r0]\n    bl ov42_02228068\n    ldr r0, _0223214C ; =0x000006F8\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl ov42_02229AC8\n    cmp r0, #1\n    beq _0223211E\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0223214C: .word 0x000006F8\n    _02232150: .word 0x000006E8\n    _02232154: .word 0x000006E4"
    );
    #endif
}

void ov44_02232158(void) {
    /* Original at 0x02232158 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r0, #0x63\n    lsl r0, r0, #2\n    mov r6, #0\n    add r4, r7, #0\n    add r5, r7, r0\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02232186\n    mov r2, #0x67\n    lsl r2, r2, #2\n    ldr r2, [r4, r2]\n    add r0, r7, #0\n    add r1, r5, #0\n    blx r2\n    cmp r0, #1\n    bne _02232186\n    add r0, r5, #0\n    bl ov44_02231ED4\n    add r6, r6, #1\n    add r4, #0x1c\n    add r5, #0x1c\n    cmp r6, #0x30\n    blt _02232166\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_02232194(void) {
    /* Original at 0x02232194 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r0, #0x63\n    lsl r0, r0, #2\n    mov r6, #0\n    add r4, r7, #0\n    add r5, r7, r0\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _022321B8\n    mov r2, #0x69\n    lsl r2, r2, #2\n    ldr r2, [r4, r2]\n    add r0, r7, #0\n    add r1, r5, #0\n    blx r2\n    add r6, r6, #1\n    add r4, #0x1c\n    add r5, #0x1c\n    cmp r6, #0x30\n    blt _022321A2\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_022321C4(void) {
    /* Original at 0x022321C4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r1]\n    ldr r1, _02232200 ; =0x000006E8\n    ldr r1, [r4, r1]\n    bl ov42_022283BC\n    cmp r0, #0\n    beq _022321FA\n    mov r2, #0x63\n    mov r1, #0\n    add r5, r4, #0\n    lsl r2, r2, #2\n    ldr r3, [r5, r2]\n    cmp r3, r0\n    bne _022321F2\n    mov r0, #0x63\n    lsl r0, r0, #2\n    add r2, r4, r0\n    mov r0, #0x1c\n    mul r0, r1\n    add r0, r2, r0\n    pop {r3, r4, r5, pc}\n    add r1, r1, #1\n    add r5, #0x1c\n    cmp r1, #0x30\n    blt _022321DE\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02232200: .word 0x000006E8"
    );
    #endif
}

void ov44_02232204(void) {
    /* Original at 0x02232204 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r3, r1, #0\n    mov r1, #0\n    add r5, r0, #0\n    add r4, r2, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    ldr r0, [r5, #0x14]\n    mov r2, #0x30\n    bl ov42_02228F24\n    ldr r1, _02232234 ; =0x000006EC\n    add r2, r4, #0\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #2\n    bl ov42_02229028\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _02232234: .word 0x000006EC"
    );
    #endif
}

void ov44_02232238(void) {
    /* Original at 0x02232238 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02232240 ; =0x000006EC\n    ldr r3, _02232244 ; =ov42_02228F94\n    ldr r0, [r0, r1]\n    bx r3\n    _02232240: .word 0x000006EC\n    _02232244: .word ov42_02228F94"
    );
    #endif
}

void ov44_02232248(void) {
    /* Original at 0x02232248 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    ldr r6, _02232280 ; =ov44_02235604\n    add r4, r1, #0\n    add r5, r0, #0\n    add r2, sp, #0\n    mov r1, #0xb\n    ldrb r0, [r6]\n    add r6, r6, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02232256\n    add r0, sp, #0\n    ldrb r1, [r0, #9]\n    add r2, sp, #0\n    add r1, r1, r3\n    strb r1, [r0, #9]\n    add r0, r5, #0\n    ldr r1, [r5, #0x10]\n    add r0, #0x18\n    add r3, r4, #0\n    bl ov42_022293B8\n    ldr r1, _02232284 ; =0x000006F4\n    str r0, [r5, r1]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _02232280: .word ov44_02235604\n    _02232284: .word 0x000006F4"
    );
    #endif
}

void ov44_02232288(void) {
    /* Original at 0x02232288 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02232290 ; =0x000006F4\n    ldr r3, _02232294 ; =ov42_0222940C\n    ldr r0, [r0, r1]\n    bx r3\n    _02232290: .word 0x000006F4\n    _02232294: .word ov42_0222940C"
    );
    #endif
}

void ov44_02232298(void) {
    /* Original at 0x02232298 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r6, r1, #0\n    str r2, [sp]\n    mov r0, #0x60\n    add r1, r7, #4\n    add r2, r6, #0\n    bl G2dRenderer_Init\n    mov r2, #0x32\n    str r0, [r7]\n    add r0, r7, #4\n    mov r1, #0\n    lsl r2, r2, #0x10\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r4, #0\n    add r5, r7, #0\n    mov r0, #0x10\n    add r1, r4, #0\n    add r2, r6, #0\n    bl Create2DGfxResObjMan\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _022322BC\n    ldr r2, [sp]\n    add r0, r7, #0\n    add r1, r6, #0\n    bl ov44_02232314\n    add r0, r7, #0\n    add r1, r6, #0\n    bl ov44_02232324\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_022322E8(void) {
    /* Original at 0x022322E8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    bl ov44_0223232C\n    add r0, r7, #0\n    bl ov44_0223231C\n    mov r6, #0x4b\n    mov r4, #0\n    add r5, r7, #0\n    lsl r6, r6, #2\n    ldr r0, [r5, r6]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _022322FE\n    ldr r0, [r7]\n    bl SpriteList_Delete\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_02232314(void) {
    ov44_0223237C();
}

void ov44_0223231C(void) {
    ov44_0223247C();
}

void ov44_02232324(void) {
    ov44_022324B0();
}

void ov44_0223232C(void) {
    ov44_02232530();
}

void ov44_02232334(void) {
    /* Original at 0x02232334 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov44_02232338(void) {
    /* Original at 0x02232338 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov44_0223233C(void) {
    /* Original at 0x0223233C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    mov r0, #1\n    add r4, r2, #0\n    lsl r0, r0, #8\n    mov r2, #0\n    add r5, r1, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x1f\n    add r3, r2, #0\n    str r5, [sp, #4]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    add r1, r0, #0\n    bl BG_SetMaskColor\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    str r3, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x1e\n    add r2, r6, #0\n    str r5, [sp, #0xc]\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov44_0223237C(void) {
    /* Original at 0x0223237C */
    /* Requires manual decompilation - 117 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x2c\n    add r4, r1, #0\n    mov r1, #0x32\n    add r5, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r6, r2, #0\n    str r4, [sp, #8]\n    add r1, #0xfa\n    ldr r0, [r5, r1]\n    add r1, r6, #0\n    mov r2, #0x26\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0x4f\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r1, #0x32\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    add r1, #0xfe\n    ldr r0, [r5, r1]\n    add r1, r6, #0\n    mov r2, #0x25\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    mov r1, #5\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r0, #0x32\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    sub r1, #0xc\n    ldr r0, [r5, r1]\n    add r1, r6, #0\n    mov r2, #0x27\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x51\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0x32\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    sub r1, #0xc\n    ldr r0, [r5, r1]\n    add r1, r6, #0\n    mov r2, #0x28\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x52\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, #0xc\n    ldr r0, [r5, r1]\n    bl sub_0200ADA4\n    cmp r0, #1\n    beq _02232410\n    bl GF_AssertFail\n    mov r0, #5\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl sub_0200B00C\n    cmp r0, #1\n    beq _02232422\n    bl GF_AssertFail\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200A740\n    mov r0, #5\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl sub_0200A740\n    mov r1, #0x32\n    add r0, r1, #0\n    str r1, [sp]\n    sub r0, #0x33\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r3, #0x4d\n    str r0, [sp, #0xc]\n    mov r2, #2\n    str r2, [sp, #0x10]\n    add r2, r1, #0\n    add r2, #0xfa\n    ldr r2, [r5, r2]\n    lsl r3, r3, #2\n    str r2, [sp, #0x14]\n    add r2, r1, #0\n    add r2, #0xfe\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x18]\n    ldr r2, [r5, r3]\n    str r2, [sp, #0x1c]\n    add r2, r3, #4\n    ldr r2, [r5, r2]\n    add r3, #0x18\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r5, r3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl CreateSpriteResourcesHeader\n    add sp, #0x2c\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov44_0223247C(void) {
    /* Original at 0x0223247C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200AEB0\n    mov r0, #5\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl sub_0200B0A8\n    mov r7, #0x4b\n    lsl r7, r7, #2\n    add r6, r7, #0\n    mov r4, #0\n    add r6, #0x10\n    ldr r0, [r5, r7]\n    ldr r1, [r5, r6]\n    bl DestroySingle2DGfxResObj\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0223249E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_022324B0(void) {
    /* Original at 0x022324B0 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x30\n    add r4, r0, #0\n    add r2, sp, #0\n    mov r0, #0\n    add r3, r1, #0\n    add r5, r2, #0\n    add r1, r0, #0\n    stmia r5!, {r0, r1}\n    stmia r5!, {r0, r1}\n    stmia r5!, {r0, r1}\n    stmia r5!, {r0, r1}\n    stmia r5!, {r0, r1}\n    stmia r5!, {r0, r1}\n    ldr r1, [r4]\n    str r1, [sp]\n    mov r1, #0x53\n    lsl r1, r1, #2\n    add r1, r4, r1\n    str r1, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #0x28]\n    lsl r1, r1, #0xc\n    str r0, [sp, #0x24]\n    add r0, r2, #0\n    str r1, [sp, #0x14]\n    str r1, [sp, #0x18]\n    str r3, [sp, #0x2c]\n    bl Sprite_CreateAffine\n    mov r1, #0x17\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    mov r1, #0x5d\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r0, r1, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x17\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x30\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_02232530(void) {
    /* Original at 0x02232530 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x17\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov44_0223254C(void) {
    /* Original at 0x0223254C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r1, sp, #0\n    add r4, r0, #0\n    bl ov44_02232724\n    add r2, sp, #0\n    mov r0, #0\n    ldrsh r1, [r2, r0]\n    add r1, #8\n    strh r1, [r2]\n    mov r1, #2\n    ldrsh r3, [r2, r1]\n    add r3, #0x20\n    strh r3, [r2, #2]\n    ldrsh r0, [r2, r0]\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    ldrsh r0, [r2, r1]\n    add r1, sp, #4\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_SetMatrix\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov44_02232594(void) {
    /* Original at 0x02232594 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x61\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    ldr r3, _022325A0 ; =Sprite_SetDrawFlag\n    mov r1, #0\n    bx r3\n    _022325A0: .word Sprite_SetDrawFlag"
    );
    #endif
}

void ov44_022325A4(void) {
    /* Original at 0x022325A4 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r1, sp, #0x18\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    add r4, r2, #0\n    add r0, #8\n    lsl r0, r0, #0x10\n    asr r0, r0, #4\n    str r0, [sp]\n    mov r0, #6\n    ldrsh r0, [r1, r0]\n    add r1, sp, #0\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Sprite_SetMatrix\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl Sprite_SetDrawPriority\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add sp, #0xc\n    pop {r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov44_022325F4(void) {
    /* Original at 0x022325F4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x62\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    ldr r3, _02232600 ; =Sprite_SetDrawFlag\n    mov r1, #0\n    bx r3\n    _02232600: .word Sprite_SetDrawFlag"
    );
    #endif
}

void ov44_02232604(void) {
    /* Original at 0x02232604 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _02232678 ; =0x000006CC\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _02232618\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r0]\n    bl ov42_022282DC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    ldr r0, _02232678 ; =0x000006CC\n    mov r1, #6\n    ldr r0, [r5, r0]\n    ldr r0, [r0]\n    bl ov42_02228188\n    add r4, r0, #0\n    ldr r0, _0223267C ; =0x000006E4\n    add r2, sp, #0\n    mov r1, #4\n    ldrsh r3, [r2, r1]\n    ldr r0, [r5, r0]\n    asr r1, r3, #3\n    lsr r1, r1, #0x1c\n    add r1, r3, r1\n    mov r3, #6\n    ldrsh r3, [r2, r3]\n    lsl r1, r1, #0xc\n    lsr r1, r1, #0x10\n    asr r2, r3, #3\n    lsr r2, r2, #0x1c\n    add r2, r3, r2\n    lsl r2, r2, #0xc\n    lsr r2, r2, #0x10\n    bl ov42_02227FDC\n    cmp r0, #0xf\n    bne _02232670\n    cmp r4, #1\n    bne _02232670\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _02232678: .word 0x000006CC\n    _0223267C: .word 0x000006E4"
    );
    #endif
}

void ov44_02232680(void) {
    /* Original at 0x02232680 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    mov r0, #7\n    add r4, r2, #0\n    and r4, r0\n    ldr r0, _02232720 ; =0x000006E4\n    str r1, [sp]\n    ldr r0, [r5, r0]\n    lsr r7, r2, #3\n    bl ov42_02227F40\n    add r6, r0, #0\n    ldr r0, _02232720 ; =0x000006E4\n    ldr r0, [r5, r0]\n    bl ov42_02227F44\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    bls _02232718\n    add r0, r7, #3\n    str r0, [sp, #0x14]\n    add r0, r4, #7\n    str r0, [sp, #0xc]\n    mov r4, #0\n    cmp r6, #0\n    bls _0223270C\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #8]\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    ldr r0, _02232720 ; =0x000006E4\n    lsl r1, r4, #0x10\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x10\n    add r2, r7, #0\n    bl ov42_02227FDC\n    ldr r1, [sp, #0xc]\n    cmp r0, r1\n    bne _02232706\n    ldr r0, _02232720 ; =0x000006E4\n    lsl r1, r4, #0x10\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0x10]\n    lsr r1, r1, #0x10\n    bl ov42_02227FDC\n    ldr r1, [sp, #0x14]\n    cmp r0, r1\n    bne _02232706\n    ldr r0, [sp]\n    lsl r1, r4, #4\n    strh r1, [r0]\n    ldr r0, [sp, #8]\n    lsl r1, r0, #4\n    ldr r0, [sp]\n    add sp, #0x18\n    strh r1, [r0, #2]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    cmp r4, r6\n    blo _022326CC\n    ldr r0, [sp, #8]\n    add r1, r0, #1\n    ldr r0, [sp, #4]\n    str r1, [sp, #8]\n    cmp r1, r0\n    blo _022326B6\n    bl GF_AssertFail\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _02232720: .word 0x000006E4"
    );
    #endif
}

void ov44_02232724(void) {
    /* Original at 0x02232724 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    ldr r0, _02232794 ; =0x000006E4\n    str r1, [sp]\n    ldr r0, [r7, r0]\n    bl ov42_02227F40\n    add r5, r0, #0\n    ldr r0, _02232794 ; =0x000006E4\n    ldr r0, [r7, r0]\n    bl ov42_02227F44\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    bls _0223278C\n    mov r4, #0\n    cmp r5, #0\n    bls _02232780\n    ldr r0, [sp, #8]\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    ldr r0, _02232794 ; =0x000006E4\n    lsl r1, r4, #0x10\n    ldr r0, [r7, r0]\n    lsr r1, r1, #0x10\n    add r2, r6, #0\n    bl ov42_02227FDC\n    cmp r0, #0xf\n    bne _0223277A\n    ldr r0, [sp]\n    lsl r1, r4, #4\n    strh r1, [r0]\n    ldr r0, [sp, #8]\n    lsl r1, r0, #4\n    ldr r0, [sp]\n    add sp, #0xc\n    strh r1, [r0, #2]\n    pop {r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    cmp r4, r5\n    blo _02232756\n    ldr r0, [sp, #8]\n    add r1, r0, #1\n    ldr r0, [sp, #4]\n    str r1, [sp, #8]\n    cmp r1, r0\n    blo _0223274A\n    bl GF_AssertFail\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02232794: .word 0x000006E4"
    );
    #endif
}

void ov44_02232798(void) {
    /* Original at 0x02232798 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #0x63\n    mov r1, #0\n    add r4, r0, #0\n    lsl r2, r2, #2\n    ldr r3, [r4, r2]\n    cmp r3, #0\n    bne _022327B6\n    mov r2, #0x63\n    lsl r2, r2, #2\n    add r2, r0, r2\n    mov r0, #0x1c\n    mul r0, r1\n    add r0, r2, r0\n    pop {r4, pc}\n    add r1, r1, #1\n    add r4, #0x1c\n    cmp r1, #0x30\n    blt _022327A2\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov44_022327C8(void) {
    /* Original at 0x022327C8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r0, #0\n    ldr r0, _022327FC ; =0x000006EC\n    add r5, r1, #0\n    ldr r0, [r3, r0]\n    ldr r1, [r5]\n    ldr r3, [r3, #4]\n    add r4, r2, #0\n    bl ov42_0222903C\n    str r0, [r5, #4]\n    cmp r4, #0\n    bne _022327F8\n    ldr r0, [r5, #4]\n    mov r1, #0\n    bl ov42_0222919C\n    ldr r0, [r5, #4]\n    bl ov42_022291A0\n    ldr r0, [r5, #4]\n    mov r1, #0\n    bl ov42_02229200\n    pop {r3, r4, r5, pc}\n    nop\n    _022327FC: .word 0x000006EC"
    );
    #endif
}

void ov44_02232800(void) {
    /* Original at 0x02232800 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    mov r1, #0\n    ldrsh r1, [r2, r1]\n    add r5, sp, #0\n    strh r1, [r5]\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    strh r1, [r5, #2]\n    ldr r1, [sp, #0x20]\n    strh r3, [r5, #4]\n    strh r1, [r5, #6]\n    add r1, sp, #8\n    ldrb r2, [r1, #0x14]\n    strh r2, [r5, #8]\n    ldrh r1, [r1, #0x10]\n    strh r1, [r5, #0xa]\n    ldr r1, _02232834 ; =0x000006E8\n    ldr r0, [r0, r1]\n    add r1, sp, #0\n    bl ov42_022280B8\n    str r0, [r4]\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _02232834: .word 0x000006E8"
    );
    #endif
}

void ov44_02232838(void) {
    /* Original at 0x02232838 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0, #0xc]\n    cmp r0, #5\n    bhi _0223285E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223284A: ; jump table\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov44_02232864(void) {
    /* Original at 0x02232864 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r1, #0\n    ldr r1, _02232878 ; =ov44_02232A60\n    ldr r3, _0223287C ; =ov44_02232C6C\n    str r1, [r2, #0x10]\n    ldr r1, _02232880 ; =ov44_02232910\n    str r1, [r2, #0x18]\n    mov r1, #0\n    strh r1, [r2, #0xc]\n    bx r3\n    nop\n    _02232878: .word ov44_02232A60\n    _0223287C: .word ov44_02232C6C\n    _02232880: .word ov44_02232910"
    );
    #endif
}

void ov44_02232884(void) {
    /* Original at 0x02232884 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02232898 ; =ov44_02232B74\n    str r0, [r1, #0x10]\n    ldr r0, _0223289C ; =ov44_02232914\n    str r0, [r1, #0x18]\n    mov r0, #0x2d\n    strh r0, [r1, #8]\n    mov r0, #1\n    strh r0, [r1, #0xc]\n    bx lr\n    nop\n    _02232898: .word ov44_02232B74\n    _0223289C: .word ov44_02232914"
    );
    #endif
}

void ov44_022328A0(void) {
    /* Original at 0x022328A0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _022328D8 ; =ov44_02232BE4\n    add r4, r1, #0\n    str r0, [r4, #0x10]\n    ldr r0, _022328DC ; =ov44_02232910\n    str r0, [r4, #0x18]\n    bl MTRandom\n    ldr r1, _022328E0 ; =0x000003FF\n    add r2, r4, #0\n    and r1, r0\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r1, r0\n    strh r0, [r4, #8]\n    mov r0, #3\n    strh r0, [r4, #0xc]\n    add r0, r5, #0\n    mov r1, #0\n    bl ov44_02232C6C\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl ov42_0222919C\n    pop {r3, r4, r5, pc}\n    nop\n    _022328D8: .word ov44_02232BE4\n    _022328DC: .word ov44_02232910\n    _022328E0: .word 0x000003FF"
    );
    #endif
}

void ov44_022328E4(void) {
    /* Original at 0x022328E4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r1, _02232908 ; =ov44_02232C30\n    add r2, r4, #0\n    str r1, [r4, #0x10]\n    ldr r1, _0223290C ; =ov44_022329B0\n    str r1, [r4, #0x18]\n    mov r1, #0x1c\n    strh r1, [r4, #8]\n    mov r1, #4\n    strh r1, [r4, #0xc]\n    bl ov44_02232C6C\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ov42_0222919C\n    pop {r4, pc}\n    _02232908: .word ov44_02232C30\n    _0223290C: .word ov44_022329B0"
    );
    #endif
}

void ov44_02232910(void) {
    /* Original at 0x02232910 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov44_02232914(void) {
    /* Original at 0x02232914 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r1, #0\n    ldr r0, [r4, #4]\n    bl ov42_022291AC\n    ldr r0, [r4, #4]\n    bl ov42_022291F4\n    cmp r0, #0\n    bne _02232932\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl ov42_02229200\n    ldr r0, [r4]\n    mov r1, #0\n    bl ov42_02228188\n    add r1, sp, #0\n    strh r0, [r1, #4]\n    ldr r0, [r4]\n    mov r1, #1\n    bl ov42_02228188\n    add r1, sp, #0\n    strh r0, [r1, #6]\n    ldrh r0, [r1, #4]\n    strh r0, [r1]\n    ldrh r0, [r1, #6]\n    strh r0, [r1, #2]\n    ldrh r0, [r4, #8]\n    bl GF_SinDegNoWrap\n    ldr r2, _022329AC ; =0xFFF40000\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x14\n    bl _ll_mul\n    mov r5, #2\n    mov r6, #0\n    lsl r5, r5, #0xa\n    mov r3, #6\n    add r2, sp, #0\n    add r5, r0, r5\n    adc r1, r6\n    lsl r0, r1, #0x14\n    lsr r1, r5, #0xc\n    orr r1, r0\n    ldrsh r3, [r2, r3]\n    asr r0, r1, #0xc\n    add r0, r3, r0\n    strh r0, [r2, #6]\n    mov r3, sp\n    ldrh r1, [r2, #4]\n    ldr r0, [r4, #4]\n    sub r3, r3, #4\n    strh r1, [r3]\n    ldrh r1, [r2, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022291D8\n    add r1, sp, #0\n    mov r3, sp\n    ldrh r2, [r1]\n    ldr r0, [r4, #4]\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #2]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_02229258\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _022329AC: .word 0xFFF40000"
    );
    #endif
}

void ov44_022329B0(void) {
    /* Original at 0x022329B0 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r1, #0\n    ldr r0, [r4]\n    mov r1, #0\n    bl ov42_02228188\n    add r1, sp, #0\n    strh r0, [r1, #4]\n    ldr r0, [r4]\n    mov r1, #1\n    bl ov42_02228188\n    add r1, sp, #0\n    strh r0, [r1, #6]\n    ldrh r0, [r1, #4]\n    strh r0, [r1]\n    ldrh r0, [r1, #6]\n    strh r0, [r1, #2]\n    mov r0, #8\n    ldrsh r0, [r4, r0]\n    sub r0, #0x10\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    cmp r0, #0\n    ble _02232A26\n    mov r1, #6\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    asr r1, r0, #0x10\n    mov r0, #0xb4\n    mul r0, r1\n    mov r1, #6\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_SinDegNoWrap\n    add r1, sp, #0\n    mov r2, #6\n    ldrsh r3, [r1, r2]\n    asr r2, r0, #0x1f\n    lsr r5, r0, #0x12\n    lsl r2, r2, #0xe\n    lsl r6, r0, #0xe\n    mov r0, #2\n    orr r2, r5\n    mov r5, #0\n    lsl r0, r0, #0xa\n    add r6, r6, r0\n    adc r2, r5\n    lsl r0, r2, #0x14\n    lsr r2, r6, #0xc\n    orr r2, r0\n    asr r0, r2, #0xc\n    sub r0, r3, r0\n    strh r0, [r1, #6]\n    add r1, sp, #0\n    ldrh r2, [r1, #4]\n    mov r3, sp\n    ldr r0, [r4, #4]\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022291D8\n    add r1, sp, #0\n    mov r3, sp\n    ldrh r2, [r1]\n    ldr r0, [r4, #4]\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #2]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_02229258\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl ov42_02229218\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov44_02232A60(void) {
    /* Original at 0x02232A60 */
    /* Requires manual decompilation - 123 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    ldr r0, [r6]\n    mov r1, #6\n    bl ov42_02228188\n    add r4, r0, #0\n    ldr r0, [r6]\n    mov r1, #4\n    bl ov42_02228188\n    add r7, r0, #0\n    ldr r0, [r6]\n    mov r1, #5\n    bl ov42_02228188\n    cmp r0, #0\n    beq _02232A8A\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02232B70 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _02232AC4\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov44_022321C4\n    str r0, [sp]\n    cmp r0, #0\n    beq _02232AC0\n    bl ov44_02232838\n    cmp r0, #1\n    bne _02232ABA\n    ldr r0, [sp]\n    mov r1, #4\n    ldr r0, [r0]\n    bl ov42_02228188\n    strb r0, [r6, #0xa]\n    b _02232AC4\n    mov r0, #0\n    strb r0, [r6, #0xa]\n    b _02232AC4\n    mov r0, #0\n    strb r0, [r6, #0xa]\n    ldr r0, [r5, #0xc]\n    cmp r0, #1\n    bne _02232ACE\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02232B70 ; =gSystem\n    mov r1, #2\n    ldr r0, [r0, #0x44]\n    add r2, r0, #0\n    tst r2, r1\n    beq _02232ADC\n    mov r1, #3\n    mov r2, #0x40\n    tst r2, r0\n    beq _02232B00\n    cmp r4, #0\n    bne _02232AF2\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl ov44_02232C4C\n    b _02232B6A\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    add r3, r7, #0\n    bl ov44_02232C4C\n    b _02232B6A\n    mov r2, #0x80\n    tst r2, r0\n    beq _02232B24\n    cmp r4, #1\n    bne _02232B16\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl ov44_02232C4C\n    b _02232B6A\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r7, #0\n    bl ov44_02232C4C\n    b _02232B6A\n    mov r2, #0x20\n    tst r2, r0\n    beq _02232B48\n    cmp r4, #2\n    bne _02232B3A\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl ov44_02232C4C\n    b _02232B6A\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #2\n    add r3, r7, #0\n    bl ov44_02232C4C\n    b _02232B6A\n    mov r2, #0x10\n    tst r0, r2\n    beq _02232B6A\n    cmp r4, #3\n    bne _02232B5E\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl ov44_02232C4C\n    b _02232B6A\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #3\n    add r3, r7, #0\n    bl ov44_02232C4C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02232B70: .word gSystem"
    );
    #endif
}

void ov44_02232B74(void) {
    /* Original at 0x02232B74 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #8\n    ldrsh r1, [r4, r0]\n    sub r1, r1, #1\n    strh r1, [r4, #8]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bgt _02232BC4\n    ldr r0, [r4, #4]\n    bl ov42_022291B8\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl ov42_0222919C\n    ldr r0, _02232BC8 ; =0x000006CC\n    mov r1, #4\n    ldr r0, [r5, r0]\n    ldr r0, [r0]\n    bl ov42_02228188\n    add r6, r0, #0\n    ldr r0, [r4]\n    mov r1, #4\n    bl ov42_02228188\n    cmp r0, r6\n    bne _02232BBA\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_02232864\n    b _02232BC4\n    ldrb r2, [r4, #0xb]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov44_02232CA8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _02232BC8: .word 0x000006CC"
    );
    #endif
}

void ov44_02232BCC(void) {
    /* Original at 0x02232BCC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #8\n    ldrsh r2, [r1, r0]\n    add r2, r2, #1\n    strh r2, [r1, #8]\n    ldrsh r0, [r1, r0]\n    cmp r0, #0x2d\n    ble _02232BDE\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov44_02232BE4(void) {
    /* Original at 0x02232BE4 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    mov r0, #8\n    ldrsh r1, [r5, r0]\n    sub r1, r1, #1\n    strh r1, [r5, #8]\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    bgt _02232C26\n    bl MTRandom\n    ldr r1, _02232C2C ; =0x000003FF\n    and r1, r0\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r1, r0\n    strh r0, [r5, #8]\n    bl MTRandom\n    add r4, r0, #0\n    mov r1, #3\n    and r4, r1\n    ldr r0, [r5]\n    mov r1, #4\n    bl ov42_02228188\n    add r3, r0, #0\n    add r0, r6, #0\n    mov r1, #0\n    add r2, r4, #0\n    bl ov44_02232C4C\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _02232C2C: .word 0x000003FF"
    );
    #endif
}

void ov44_02232C30(void) {
    /* Original at 0x02232C30 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #8\n    ldrsh r2, [r1, r0]\n    sub r2, r2, #1\n    strh r2, [r1, #8]\n    ldrsh r0, [r1, r0]\n    cmp r0, #0\n    bge _02232C42\n    mov r0, #0x1c\n    strh r0, [r1, #8]\n    mov r0, #0\n    bx lr"
    );
    #endif
}

u8 ov44_02232C48(void) {
    return 0;
}

void ov44_02232C4C(void) {
    ov42_02229A8C();
}

void ov44_02232C6C(void) {
    /* Original at 0x02232C6C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    ldr r0, [r4]\n    mov r1, #6\n    bl ov42_02228188\n    add r7, r0, #0\n    ldr r0, [r4]\n    mov r1, #4\n    bl ov42_02228188\n    add r3, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov44_02232C4C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov44_02232C94(void) {
    /* Original at 0x02232C94 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x18]\n    ldr r0, _02232CA4 ; =ov44_02232914\n    cmp r1, r0\n    beq _02232CA0\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02232CA4: .word ov44_02232914"
    );
    #endif
}

void ov44_02232CA8(void) {
    /* Original at 0x02232CA8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    beq _02232CB6\n    cmp r4, #1\n    beq _02232CBC\n    b _02232CC2\n    bl ov44_022328A0\n    b _02232CC6\n    bl ov44_022328E4\n    b _02232CC6\n    bl GF_AssertFail\n    strb r4, [r5, #0xb]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_02232CCC(void) {
    /* Original at 0x02232CCC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r3, r0, #0\n    add r5, r4, #0\n    mov r1, #0x14\n    mov r0, #0\n    strb r0, [r5]\n    add r5, r5, #1\n    sub r1, r1, #1\n    bne _02232CD8\n    ldr r3, [r3, #4]\n    add r0, r2, #0\n    mov r1, #0x20\n    add r2, r4, #4\n    bl GfGfxLoader_GetPlttDataFromOpenNarc\n    str r0, [r4]\n    mov r0, #0xf\n    strb r0, [r4, #8]\n    mov r0, #0\n    strb r0, [r4, #9]\n    ldrb r0, [r4, #9]\n    lsl r1, r0, #1\n    ldr r0, _02232D04 ; =ov44_02235600\n    ldrh r0, [r0, r1]\n    strh r0, [r4, #0xa]\n    pop {r3, r4, r5, pc}\n    nop\n    _02232D04: .word ov44_02235600"
    );
    #endif
}

void ov44_02232D08(void) {
    Heap_Free(0, 0x14);
}

void ov44_02232D20(void) {
    ov44_02232D34(r1);
    ov44_02232DA0(r4);
}

void ov44_02232D34(void) {
    /* Original at 0x02232D34 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0xa\n    ldrsh r1, [r5, r0]\n    sub r1, r1, #1\n    strh r1, [r5, #0xa]\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    bgt _02232D9A\n    ldrb r0, [r5, #9]\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    strb r0, [r5, #9]\n    ldrb r0, [r5, #9]\n    lsl r1, r0, #1\n    ldr r0, _02232D9C ; =ov44_02235600\n    ldrh r0, [r0, r1]\n    strh r0, [r5, #0xa]\n    ldrb r0, [r5, #9]\n    cmp r0, #1\n    bne _02232D6C\n    mov r6, #2\n    b _02232D6E\n    mov r6, #1\n    mov r4, #0\n    mov r7, #1\n    add r0, r7, #0\n    ldrb r1, [r5, #8]\n    lsl r0, r4\n    tst r0, r1\n    beq _02232D94\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov44_02232E2C\n    add r1, r4, #1\n    lsl r1, r1, #1\n    add r2, r0, #0\n    mov r0, #0xf\n    add r1, #0xe0\n    mov r3, #2\n    bl GF_CreateNewVramTransferTask\n    add r4, r4, #1\n    cmp r4, #4\n    blt _02232D72\n    pop {r3, r4, r5, r6, r7, pc}\n    _02232D9C: .word ov44_02235600"
    );
    #endif
}

void ov44_02232DA0(void) {
    /* Original at 0x02232DA0 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrb r3, [r4, #0xd]\n    mov r0, #0\n    add r1, r0, #0\n    lsl r5, r3, #2\n    ldr r3, _02232E1C ; =ov44_0223560F\n    add r2, r0, #0\n    ldrb r3, [r3, r5]\n    cmp r3, #1\n    bne _02232DC8\n    mov r3, #0xe\n    ldrsh r5, [r4, r3]\n    sub r5, r5, #1\n    strh r5, [r4, #0xe]\n    ldrsh r3, [r4, r3]\n    cmp r3, #0\n    bgt _02232DD2\n    mov r2, #1\n    b _02232DD2\n    ldrb r3, [r4, #0x10]\n    cmp r3, #0\n    beq _02232DD2\n    strb r0, [r4, #0x10]\n    mov r2, #1\n    cmp r2, #0\n    beq _02232DFE\n    ldrb r0, [r4, #0xd]\n    add r0, r0, #1\n    strb r0, [r4, #0xd]\n    ldrb r0, [r4, #0xd]\n    cmp r0, #8\n    blo _02232DEA\n    add r0, r4, #0\n    bl ov44_02232E38\n    pop {r3, r4, r5, pc}\n    lsl r1, r0, #2\n    ldr r0, _02232E20 ; =ov44_02235610\n    ldrb r0, [r0, r1]\n    ldr r1, _02232E24 ; =ov44_02235612\n    strh r0, [r4, #0xe]\n    ldrb r0, [r4, #0xd]\n    lsl r2, r0, #2\n    ldr r0, _02232E28 ; =ov44_02235611\n    ldrb r1, [r1, r2]\n    ldrb r0, [r0, r2]\n    cmp r0, #0\n    beq _02232E1A\n    add r0, r4, #0\n    bl ov44_02232E2C\n    ldrb r1, [r4, #0xc]\n    add r2, r0, #0\n    mov r0, #0xf\n    add r1, r1, #1\n    lsl r1, r1, #1\n    add r1, #0xe0\n    mov r3, #2\n    bl GF_CreateNewVramTransferTask\n    pop {r3, r4, r5, pc}\n    _02232E1C: .word ov44_0223560F\n    _02232E20: .word ov44_02235610\n    _02232E24: .word ov44_02235612\n    _02232E28: .word ov44_02235611"
    );
    #endif
}

void ov44_02232E2C(void) {
    /* Original at 0x02232E2C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r2, [r0, #0xc]\n    add r0, r1, #1\n    lsl r0, r0, #1\n    add r0, r2, r0\n    bx lr"
    );
    #endif
}

void ov44_02232E38(void) {
    /* Original at 0x02232E38 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #0xc]\n    ldrb r3, [r0, #8]\n    mov r2, #1\n    lsl r2, r1\n    add r1, r3, #0\n    orr r1, r2\n    strb r1, [r0, #8]\n    mov r1, #0\n    strb r1, [r0, #0xc]\n    strb r1, [r0, #0xd]\n    strh r1, [r0, #0xe]\n    strb r1, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov44_02232E54(void) {
    /* Original at 0x02232E54 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    strb r1, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov44_02232E5C(void) {
    /* Original at 0x02232E5C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldrb r1, [r5, #0xd]\n    cmp r1, #0\n    beq _02232E6C\n    bl ov44_02232E38\n    mov r0, #1\n    ldrb r1, [r5, #8]\n    lsl r0, r4\n    eor r0, r1\n    strb r0, [r5, #8]\n    add r0, r5, #0\n    strb r4, [r5, #0xc]\n    bl ov44_02232E54\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov44_02232E80(void) {
    ov44_02232E54();
}

void ov44_02232E90(void) {
    /* Original at 0x02232E90 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r0, #2\n    ldr r0, _02232E98 ; =ov44_02235630\n    ldr r0, [r0, r1]\n    bx lr\n    _02232E98: .word ov44_02235630"
    );
    #endif
}

void ov44_02232E9C(void) {
    /* Original at 0x02232E9C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r0, #2\n    ldr r0, _02232EA4 ; =ov44_0223688C\n    ldr r0, [r0, r1]\n    bx lr\n    _02232EA4: .word ov44_0223688C"
    );
    #endif
}
