/* Decompiled from asm/overlay_93_thumb_2.s */
#include "global.h"

void ov93_0225FBF0(void) {
    /* Original at 0x0225FBF0 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r7, r0, #0\n    str r1, [sp, #0x10]\n    mov r0, #0xc9\n    mov r1, #0x75\n    add r5, r2, #0\n    add r4, r3, #0\n    bl NARC_New\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    mov r1, #0x75\n    str r1, [sp, #0xc]\n    ldr r1, _0225FC7C ; =ov93_02262CEC\n    lsl r6, r5, #3\n    ldrh r1, [r1, r6]\n    add r2, r7, #0\n    mov r3, #7\n    str r0, [sp, #0x14]\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r1, _0225FC80 ; =ov93_02262CEE\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x75\n    str r0, [sp, #0xc]\n    ldrh r1, [r1, r6]\n    ldr r0, [sp, #0x14]\n    add r2, r7, #0\n    mov r3, #7\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldr r0, [sp, #0x14]\n    bl NARC_Delete\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x30\n    bl MI_CpuFill8\n    ldr r0, [sp, #0x10]\n    mov r1, #0xc\n    add r2, r0, #0\n    mul r2, r1\n    ldr r0, _0225FC84 ; =ov93_02262FD4\n    lsl r1, r5, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    str r0, [r4, #0xc]\n    str r5, [r4, #4]\n    add r0, r4, #0\n    str r1, [r4]\n    add r0, #0x2c\n    strb r1, [r0]\n    ldr r2, [sp, #0x10]\n    add r0, r7, #0\n    add r1, r4, #0\n    bl ov93_0225FCA4\n    ldr r0, _0225FC88 ; =0x000005EB\n    bl PlaySE\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225FC7C: .word ov93_02262CEC\n    _0225FC80: .word ov93_02262CEE\n    _0225FC84: .word ov93_02262FD4\n    _0225FC88: .word 0x000005EB"
    );
    #endif
}

void ov93_0225FC8C(void) {
    BgClearTilemapBufferAndCommit(0, 1, 7);
}

void ov93_0225FCA4(void) {
    /* Original at 0x0225FCA4 */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r1, #0\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _0225FD86\n    add r0, sp, #0xc\n    str r0, [sp]\n    add r0, r2, #0\n    ldr r1, [r5, #4]\n    ldr r2, [r5, #8]\n    add r3, sp, #0x10\n    bl ov93_0225FD8C\n    mov r0, #1\n    ldr r1, [sp, #0x10]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bne _0225FCD0\n    mov r7, #0\n    b _0225FCF0\n    bge _0225FCE2\n    lsl r1, r1, #7\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r1, r0, #0xc\n    mov r0, #0x80\n    sub r7, r0, r1\n    b _0225FCF0\n    sub r0, r1, r0\n    lsl r1, r0, #7\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r0, r0, #0xc\n    neg r7, r0\n    mov r0, #1\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bne _0225FCFE\n    mov r6, #0\n    b _0225FD1E\n    bge _0225FD10\n    lsl r1, r1, #7\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r1, r0, #0xc\n    mov r0, #0x80\n    sub r6, r0, r1\n    b _0225FD1E\n    sub r0, r1, r0\n    lsl r1, r0, #7\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r0, r0, #0xc\n    neg r6, r0\n    ldr r0, [r5, #0x10]\n    cmp r0, #0\n    bne _0225FD28\n    mov r4, #0\n    b _0225FD44\n    bl LCRandom\n    mov r1, #7\n    and r0, r1\n    add r4, r0, #1\n    ldr r1, [r5, #0x28]\n    mov r0, #1\n    tst r0, r1\n    beq _0225FD3C\n    neg r4, r4\n    ldr r1, [r5, #0x28]\n    mov r0, #1\n    eor r0, r1\n    str r0, [r5, #0x28]\n    ldr r0, [sp, #0x10]\n    bl FX_Inv\n    add r5, r0, #0\n    ldr r0, [sp, #0xc]\n    bl FX_Inv\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    mov r1, #7\n    mov r2, #3\n    add r3, r5, #0\n    bl ScheduleSetBgAffineScale\n    ldr r0, [sp, #4]\n    ldr r3, [sp, #8]\n    mov r1, #7\n    mov r2, #6\n    bl ScheduleSetBgAffineScale\n    ldr r0, [sp, #4]\n    mov r1, #7\n    mov r2, #0\n    sub r3, r4, r7\n    bl ScheduleSetBgPosText\n    mov r3, #0x27\n    ldr r0, [sp, #4]\n    mov r1, #7\n    mov r2, #3\n    sub r3, r3, r6\n    bl ScheduleSetBgPosText\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov93_0225FD8C(void) {
    /* Original at 0x0225FD8C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r3, #0\n    ldr r0, _0225FDE8 ; =ov93_02262CF0\n    lsl r3, r1, #3\n    ldr r0, [r0, r3]\n    add r6, r5, #0\n    mul r0, r2\n    mov r2, #0xc\n    mul r6, r2\n    ldr r3, _0225FDEC ; =ov93_02262FD4\n    lsl r2, r1, #2\n    add r1, r3, r6\n    ldr r1, [r2, r1]\n    bl _s32_div_f\n    mov r1, #3\n    lsl r1, r1, #8\n    add r2, r0, r1\n    ldr r1, [sp, #0x10]\n    str r2, [r4]\n    str r2, [r1]\n    mov r1, #1\n    lsl r1, r1, #0xc\n    cmp r2, r1\n    ble _0225FDE6\n    mov r1, #0xd\n    lsl r1, r1, #8\n    sub r0, r0, r1\n    ldr r2, _0225FDF0 ; =0x0000119A\n    asr r1, r0, #0x1f\n    mov r3, #0\n    bl _ll_mul\n    mov r3, #2\n    mov r5, #0\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    adc r1, r5\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    ldr r2, [r4]\n    orr r1, r0\n    add r0, r2, r1\n    str r0, [r4]\n    pop {r4, r5, r6, pc}\n    _0225FDE8: .word ov93_02262CF0\n    _0225FDEC: .word ov93_02262FD4\n    _0225FDF0: .word 0x0000119A"
    );
    #endif
}

void ov93_0225FDF4(void) {
    /* Original at 0x0225FDF4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0xa\n    blt _0225FDFC\n    mov r0, #2\n    bx lr\n    cmp r0, #5\n    blt _0225FE04\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov93_0225FE08(void) {
    /* Original at 0x0225FE08 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x10]\n    add r6, r2, #0\n    add r0, r0, r6\n    add r7, r3, #0\n    str r0, [r4, #0x10]\n    mov r1, #6\n    bl _s32_div_f\n    str r0, [r4, #0x14]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov93_0225E3C4\n    add r1, r4, #0\n    add r1, #0x18\n    lsl r0, r0, #2\n    ldr r2, [r1, r0]\n    add r2, r2, r6\n    str r2, [r1, r0]\n    bl sub_0203769C\n    cmp r7, r0\n    bne _0225FE4E\n    ldr r1, _0225FE54 ; =0x00003848\n    ldr r0, [r5, r1]\n    add r0, r0, r6\n    str r0, [r5, r1]\n    ldr r0, _0225FE58 ; =0x000015A8\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    bl ov93_02262098\n    ldr r0, [r4, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225FE54: .word 0x00003848\n    _0225FE58: .word 0x000015A8"
    );
    #endif
}

void ov93_0225FE5C(void) {
    /* Original at 0x0225FE5C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x10]\n    cmp r1, #0\n    bne _0225FE66\n    mov r0, #0\n    bx lr\n    ldr r2, [r0, #0x14]\n    cmp r1, r2\n    bge _0225FE6E\n    add r2, r1, #0\n    ldr r1, [r0, #0x10]\n    sub r1, r1, r2\n    str r1, [r0, #0x10]\n    ldr r1, [r0, #8]\n    add r1, r1, r2\n    str r1, [r0, #8]\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov93_0225FE80(void) {
    /* Original at 0x0225FE80 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0225FEA8 ; =0x00002FCC\n    add r6, r1, #0\n    ldr r0, [r5, r0]\n    add r4, r2, #0\n    cmp r0, #0\n    beq _0225FEA4\n    add r0, r4, #0\n    bl ov93_0225FE5C\n    ldr r2, [r5]\n    add r0, r6, #0\n    add r2, #0x30\n    ldrb r2, [r2]\n    add r1, r4, #0\n    bl ov93_0225FCA4\n    pop {r4, r5, r6, pc}\n    nop\n    _0225FEA8: .word 0x00002FCC"
    );
    #endif
}

void ov93_0225FEAC(void) {
    /* Original at 0x0225FEAC */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0225FEBC ; =0x00001428\n    ldr r3, _0225FEC0 ; =_s32_div_f\n    add r2, r0, r1\n    ldr r1, [r2, #8]\n    mov r0, #0x64\n    mul r0, r1\n    ldr r1, [r2, #0xc]\n    bx r3\n    _0225FEBC: .word 0x00001428\n    _0225FEC0: .word _s32_div_f"
    );
    #endif
}

void ov93_0225FEC4(void) {
    /* Original at 0x0225FEC4 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldr r0, _0225FF14 ; =0x00002FDC\n    add r4, r1, #0\n    mov r3, #0\n    add r2, r5, #0\n    ldr r1, [r2, r0]\n    cmp r1, #0\n    bne _0225FF00\n    ldr r2, _0225FF14 ; =0x00002FDC\n    mov r6, #0x18\n    add r2, r5, r2\n    mul r6, r3\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r2, r6\n    bl ov93_0225FF1C\n    str r0, [sp]\n    ldr r1, _0225FF18 ; =0x00001560\n    ldrb r2, [r4, #1]\n    ldrb r3, [r4]\n    add r0, r5, #0\n    add r1, r5, r1\n    bl ov93_02261C58\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    add r3, r3, #1\n    add r2, #0x18\n    cmp r3, #0x28\n    blt _0225FED2\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0225FF14: .word 0x00002FDC\n    _0225FF18: .word 0x00001560"
    );
    #endif
}

void ov93_0225FF1C(void) {
    /* Original at 0x0225FF1C */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r2, #0\n    add r7, r0, #0\n    ldr r0, [r4]\n    add r5, r1, #0\n    cmp r0, #0\n    beq _0225FF2E\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x18\n    bl MI_CpuFill8\n    ldrb r1, [r5]\n    add r0, r7, #0\n    bl ov93_0225E3C4\n    ldr r1, [r7]\n    ldr r3, _0225FFF4 ; =ov93_02263010\n    add r1, #0x30\n    ldrb r2, [r1]\n    mov r1, #0x28\n    mul r1, r2\n    mov r2, #0xa\n    mul r2, r0\n    ldrb r0, [r5]\n    add r1, r3, r1\n    add r6, r1, r2\n    strh r0, [r4, #4]\n    ldrh r0, [r5, #2]\n    add r1, r6, #0\n    strh r0, [r4, #6]\n    ldr r0, [r5, #8]\n    str r0, [r4, #8]\n    str r6, [r4, #0x14]\n    ldrb r0, [r5, #1]\n    strb r0, [r4, #0xe]\n    add r0, r7, #0\n    bl ov93_0226027C\n    str r0, [r4, #0x10]\n    bl sub_0203769C\n    ldrb r1, [r5]\n    cmp r1, r0\n    bne _0225FF8E\n    ldr r1, [r5, #4]\n    add r0, r7, #0\n    bl ov93_0225DF38\n    mov r0, #0x19\n    strh r0, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #1\n    str r0, [r4]\n    add r1, sp, #0\n    mov r3, #0x16\n    ldr r0, [r4, #0x10]\n    add r1, #2\n    add r2, sp, #0\n    lsl r3, r3, #0x10\n    mov r5, #0\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    ldrb r0, [r6, #7]\n    cmp r0, #3\n    bhi _0225FFE8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225FFB6: ; jump table\n    add r1, sp, #0\n    add r0, r5, #0\n    ldrsh r1, [r1, r0]\n    mov r0, #0x1c\n    sub r5, r0, r1\n    b _0225FFE8\n    add r1, sp, #0\n    mov r0, #2\n    ldrsh r5, [r1, r0]\n    sub r5, #0xcc\n    b _0225FFE8\n    add r1, sp, #0\n    add r0, r5, #0\n    ldrsh r5, [r1, r0]\n    sub r5, #0xa4\n    b _0225FFE8\n    add r1, sp, #0\n    mov r0, #2\n    ldrsh r1, [r1, r0]\n    mov r0, #0x34\n    sub r5, r0, r1\n    mov r1, #5\n    lsl r0, r5, #0xc\n    lsl r1, r1, #0xc\n    bl _s32_div_f\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225FFF4: .word ov93_02263010"
    );
    #endif
}

void ov93_0225FFF8(void) {
    /* Original at 0x0225FFF8 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _02260070 ; =0x00002FDC\n    mov r6, #0\n    add r4, r5, r0\n    add r7, r6, #0\n    ldr r0, [r4]\n    cmp r0, #1\n    bne _02260064\n    mov r0, #0xc\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _0226002C\n    mov r0, #0xc\n    ldrsh r0, [r4, r0]\n    sub r0, r0, #1\n    strh r0, [r4, #0xc]\n    mov r0, #0xc\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bne _02260064\n    ldr r0, [r4, #0x10]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    b _02260064\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov93_02260080\n    cmp r0, #1\n    bne _02260064\n    ldr r0, _02260074 ; =0x00002FCC\n    ldr r0, [r5, r0]\n    cmp r0, #1\n    bne _0226005C\n    ldr r0, _02260078 ; =0x00002FBC\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _0226005C\n    ldrb r0, [r4, #0xe]\n    ldr r1, _0226007C ; =0x00001428\n    mov r3, #4\n    str r0, [sp]\n    ldrsh r3, [r4, r3]\n    ldr r2, [r4, #8]\n    add r0, r5, #0\n    add r1, r5, r1\n    bl ov93_0225FE08\n    ldr r0, [r4, #0x10]\n    bl Sprite_DeleteAndFreeResources\n    str r7, [r4]\n    add r6, r6, #1\n    add r4, #0x18\n    cmp r6, #0x28\n    blt _02260004\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02260070: .word 0x00002FDC\n    _02260074: .word 0x00002FCC\n    _02260078: .word 0x00002FBC\n    _0226007C: .word 0x00001428"
    );
    #endif
}

void ov93_02260080(void) {
    /* Original at 0x02260080 */
    /* Requires manual decompilation - 225 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    str r0, [sp]\n    add r1, sp, #4\n    mov r3, #0x16\n    ldr r0, [r4, #0x10]\n    add r1, #2\n    add r2, sp, #4\n    lsl r3, r3, #0x10\n    mov r7, #0\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    ldr r0, [r4, #0x14]\n    ldrb r0, [r0, #7]\n    cmp r0, #3\n    bhi _02260188\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022600AE: ; jump table\n    add r0, sp, #4\n    add r1, r7, #0\n    ldrsh r2, [r0, r1]\n    mov r0, #0x1c\n    sub r6, r0, r2\n    mov r2, #5\n    ldr r0, [r4, #0x10]\n    lsl r2, r2, #0xc\n    bl ManagedSprite_AddSpritePrecisePositionXY\n    add r1, sp, #8\n    mov r3, #0x16\n    ldr r0, [r4, #0x10]\n    add r1, #2\n    add r2, sp, #8\n    lsl r3, r3, #0x10\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    add r1, sp, #4\n    mov r0, #4\n    ldrsh r1, [r1, r0]\n    mov r0, #0x1c\n    sub r5, r0, r1\n    cmp r1, #0x4a\n    ble _02260188\n    mov r7, #1\n    b _02260188\n    add r1, sp, #4\n    mov r0, #2\n    ldrsh r6, [r1, r0]\n    ldr r0, [r4, #0x10]\n    ldr r1, _02260270 ; =0xFFFFB000\n    add r2, r7, #0\n    sub r6, #0xcc\n    bl ManagedSprite_AddSpritePrecisePositionXY\n    add r1, sp, #8\n    mov r3, #0x16\n    ldr r0, [r4, #0x10]\n    add r1, #2\n    add r2, sp, #8\n    lsl r3, r3, #0x10\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    add r1, sp, #4\n    mov r0, #6\n    ldrsh r0, [r1, r0]\n    add r5, r0, #0\n    sub r5, #0xcc\n    cmp r0, #0x98\n    bge _02260188\n    mov r7, #1\n    b _02260188\n    add r0, sp, #4\n    add r1, r7, #0\n    ldrsh r6, [r0, r1]\n    ldr r0, [r4, #0x10]\n    ldr r2, _02260270 ; =0xFFFFB000\n    sub r6, #0xa4\n    bl ManagedSprite_AddSpritePrecisePositionXY\n    add r1, sp, #8\n    mov r3, #0x16\n    ldr r0, [r4, #0x10]\n    add r1, #2\n    add r2, sp, #8\n    lsl r3, r3, #0x10\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    add r1, sp, #4\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    add r5, r0, #0\n    sub r5, #0xa4\n    cmp r0, #0x72\n    bge _02260188\n    mov r7, #1\n    b _02260188\n    add r1, sp, #4\n    mov r0, #2\n    ldrsh r1, [r1, r0]\n    mov r0, #0x34\n    add r2, r7, #0\n    sub r6, r0, r1\n    mov r1, #5\n    ldr r0, [r4, #0x10]\n    lsl r1, r1, #0xc\n    bl ManagedSprite_AddSpritePrecisePositionXY\n    add r1, sp, #8\n    mov r3, #0x16\n    ldr r0, [r4, #0x10]\n    add r1, #2\n    add r2, sp, #8\n    lsl r3, r3, #0x10\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    add r1, sp, #4\n    mov r0, #6\n    ldrsh r1, [r1, r0]\n    mov r0, #0x34\n    sub r5, r0, r1\n    cmp r1, #0x68\n    ble _02260188\n    mov r7, #1\n    cmp r5, #0\n    blt _022601B8\n    cmp r5, #0xe\n    bge _022601F0\n    lsl r0, r5, #0xc\n    mov r1, #0xe\n    bl _s32_div_f\n    mov r1, #1\n    lsl r1, r1, #0xa\n    cmp r0, r1\n    bge _022601A2\n    add r0, r1, #0\n    bl _fflt\n    ldr r1, _02260274 ; =0x45800000\n    bl _fdiv\n    add r1, r0, #0\n    ldr r0, [r4, #0x10]\n    add r2, r1, #0\n    bl ManagedSprite_SetAffineScale\n    b _022601F0\n    mov r0, #0xd\n    mvn r0, r0\n    cmp r5, r0\n    ble _022601F0\n    ldrb r0, [r4, #0xe]\n    neg r1, r5\n    lsl r2, r0, #2\n    ldr r0, _02260278 ; =ov93_02262CA4\n    ldr r0, [r0, r2]\n    mul r0, r1\n    mov r1, #0xe\n    bl _s32_div_f\n    mov r1, #1\n    lsl r1, r1, #0xa\n    cmp r0, r1\n    bge _022601DC\n    add r0, r1, #0\n    bl _fflt\n    ldr r1, _02260274 ; =0x45800000\n    bl _fdiv\n    add r1, r0, #0\n    ldr r0, [r4, #0x10]\n    add r2, r1, #0\n    bl ManagedSprite_SetAffineScale\n    bl sub_0203769C\n    mov r1, #4\n    ldrsh r1, [r4, r1]\n    cmp r1, r0\n    bne _02260260\n    cmp r6, #0\n    blt _02260260\n    cmp r5, #0\n    bgt _02260260\n    ldr r0, [sp]\n    add r1, sp, #0xc\n    bl ov93_022614F4\n    strb r0, [r4, #0xe]\n    ldrb r0, [r4, #0xe]\n    cmp r0, #1\n    beq _0226021E\n    cmp r0, #2\n    beq _02260226\n    cmp r0, #3\n    beq _02260232\n    b _0226023A\n    ldr r0, [r4, #8]\n    lsl r0, r0, #1\n    str r0, [r4, #8]\n    b _0226023A\n    ldr r1, [r4, #8]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    str r0, [r4, #8]\n    b _0226023A\n    ldr r1, [r4, #8]\n    lsl r0, r1, #1\n    add r0, r1, r0\n    str r0, [r4, #8]\n    ldrb r1, [r4, #0xe]\n    ldr r0, [sp]\n    bl ov93_02260FB8\n    ldrb r0, [r4, #0xe]\n    cmp r0, #0\n    beq _02260250\n    ldr r0, [sp, #0xc]\n    mov r1, #3\n    bl ov93_02261528\n    ldr r0, [sp]\n    bl ov93_02260F84\n    add r1, r0, #0\n    beq _02260260\n    ldr r0, [sp]\n    bl ov93_022627E8\n    cmp r7, #1\n    bne _0226026A\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02260270: .word 0xFFFFB000\n    _02260274: .word 0x45800000\n    _02260278: .word ov93_02262CA4"
    );
    #endif
}

void ov93_0226027C(void) {
    /* Original at 0x0226027C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x34\n    ldr r6, _022602E0 ; =ov93_02262DCC\n    add r2, r0, #0\n    add r5, r1, #0\n    add r4, sp, #0\n    mov r3, #6\n    ldmia r6!, {r0, r1}\n    stmia r4!, {r0, r1}\n    sub r3, r3, #1\n    bne _0226028A\n    ldr r0, [r6]\n    add r1, sp, #0\n    str r0, [r4]\n    mov r0, #0\n    ldrsh r0, [r5, r0]\n    strh r0, [r1]\n    mov r0, #2\n    ldrsh r0, [r5, r0]\n    strh r0, [r1, #2]\n    ldrb r0, [r5, #6]\n    str r0, [sp, #0xc]\n    ldr r0, [r2, #0x24]\n    ldr r1, [r2, #0x28]\n    add r2, sp, #0\n    bl SpriteSystem_NewSprite\n    mov r1, #0\n    mov r2, #2\n    mov r3, #0x16\n    ldrsh r1, [r5, r1]\n    ldrsh r2, [r5, r2]\n    lsl r3, r3, #0x10\n    add r4, r0, #0\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldrh r1, [r5, #4]\n    add r0, r4, #0\n    bl ManagedSprite_SetAnim\n    add r0, r4, #0\n    mov r1, #2\n    bl ManagedSprite_SetAffineOverwriteMode\n    ldr r0, [r4]\n    bl Sprite_TickFrame\n    add r0, r4, #0\n    add sp, #0x34\n    pop {r3, r4, r5, r6, pc}\n    _022602E0: .word ov93_02262DCC"
    );
    #endif
}

void ov93_022602E4(void) {
    /* Original at 0x022602E4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    ldr r7, _0226030C ; =0x00002FDC\n    add r5, r0, #0\n    add r6, r4, #0\n    ldr r0, [r5, r7]\n    cmp r0, #1\n    bne _02260300\n    ldr r0, _02260310 ; =0x00002FEC\n    ldr r0, [r5, r0]\n    bl Sprite_DeleteAndFreeResources\n    ldr r0, _0226030C ; =0x00002FDC\n    str r6, [r5, r0]\n    add r4, r4, #1\n    add r5, #0x18\n    cmp r4, #0x28\n    blt _022602EE\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0226030C: .word 0x00002FDC\n    _02260310: .word 0x00002FEC"
    );
    #endif
}

void ov93_02260314(void) {
    /* Original at 0x02260314 */
    /* Requires manual decompilation - 334 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x68\n    ldr r5, _022605F8 ; =ov93_02262E00\n    str r2, [sp, #4]\n    add r7, r0, #0\n    str r1, [sp]\n    mov r4, #0\n    add r3, sp, #0x34\n    mov r2, #6\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02260326\n    ldr r0, [r5]\n    str r0, [r3]\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #8]\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #0x10]\n    str r0, [sp, #0x18]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    b _0226044C\n    ldr r2, [r7]\n    ldr r1, [sp, #0xc]\n    add r0, r7, #0\n    add r1, r2, r1\n    add r1, #0x2c\n    ldrb r1, [r1]\n    bl ov93_0225E3C4\n    add r5, r0, #0\n    ldr r0, [sp, #4]\n    lsl r1, r5, #2\n    add r0, r0, r1\n    ldr r1, [r0, #0x18]\n    mov r0, #0x24\n    mul r0, r1\n    ldr r2, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    add r1, r2, r1\n    bl _s32_div_f\n    ldr r1, [sp, #0xc]\n    lsl r5, r5, #1\n    lsl r2, r1, #2\n    add r1, sp, #0x24\n    str r0, [r1, r2]\n    ldr r0, [r7]\n    add r0, #0x30\n    ldrb r0, [r0]\n    lsl r3, r0, #3\n    ldr r0, _022605FC ; =ov93_02262D7C\n    add r0, r0, r3\n    ldrh r0, [r5, r0]\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    add r0, r0, #4\n    str r0, [sp, #0x1c]\n    ldr r0, [r1, r2]\n    str r0, [sp, #0x20]\n    b _0226043E\n    mov r0, #0x18\n    add r1, r4, #0\n    mul r1, r0\n    ldr r0, [sp, #0x1c]\n    add r2, sp, #0x34\n    add r5, r0, r1\n    ldr r0, [r7, #0x24]\n    ldr r1, [r7, #0x28]\n    bl SpriteSystem_NewSprite\n    add r6, r0, #0\n    beq _02260446\n    mov r3, #0x16\n    mov r1, #0x80\n    mov r2, #0x60\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r1, [sp, #0x10]\n    add r0, r6, #0\n    bl ManagedSprite_SetAnim\n    ldr r0, [r6]\n    bl Sprite_TickFrame\n    bl LCRandom\n    lsr r1, r0, #0x1f\n    lsl r2, r0, #0x13\n    sub r2, r2, r1\n    mov r0, #0x13\n    ror r2, r0\n    mov r0, #2\n    add r1, r1, r2\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [r5, #4]\n    bl LCRandom\n    lsr r1, r0, #0x1f\n    lsl r2, r0, #0x12\n    sub r2, r2, r1\n    mov r0, #0x12\n    ror r2, r0\n    mov r0, #2\n    add r1, r1, r2\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [r5, #8]\n    bl LCRandom\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    bl _s32_div_f\n    lsl r0, r1, #0xc\n    str r0, [r5, #0xc]\n    bl LCRandom\n    mov r1, #5\n    lsl r1, r1, #0xe\n    bl _s32_div_f\n    mov r0, #0xa\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [r5, #0x10]\n    bl LCRandom\n    mov r1, #0xf\n    bl _s32_div_f\n    add r1, #0x14\n    strh r1, [r5, #0x14]\n    add r1, r4, #0\n    mov r0, #0x18\n    mul r1, r0\n    ldr r0, [sp]\n    add r4, r4, #1\n    add r0, r0, r1\n    str r6, [r0, #4]\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    str r0, [sp, #8]\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #0x20]\n    cmp r1, r0\n    blt _02260396\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, [r7]\n    add r0, #0x30\n    ldrb r1, [r0]\n    ldr r0, [sp, #0xc]\n    cmp r0, r1\n    bge _0226045A\n    b _02260344\n    mov r0, #0xe\n    str r0, [sp, #0x3c]\n    mov r0, #0\n    mov r1, #0xd9\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x40]\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    add r6, r0, r1\n    b _02260522\n    ldr r1, [sp, #0xc]\n    mov r0, #0x18\n    mul r0, r1\n    add r4, r6, r0\n    ldr r0, [r7, #0x24]\n    ldr r1, [r7, #0x28]\n    add r2, sp, #0x34\n    bl SpriteSystem_NewSprite\n    add r5, r0, #0\n    beq _02260528\n    mov r3, #0x16\n    mov r1, #0x80\n    mov r2, #0x60\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    bl LCRandom\n    mov r1, #3\n    bl _s32_div_f\n    add r0, r5, #0\n    add r1, #0x1c\n    bl ManagedSprite_SetAnim\n    ldr r0, [r5]\n    bl Sprite_TickFrame\n    bl LCRandom\n    lsr r1, r0, #0x1f\n    lsl r2, r0, #0x13\n    sub r2, r2, r1\n    mov r0, #0x13\n    ror r2, r0\n    mov r0, #2\n    add r1, r1, r2\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [r4, #4]\n    bl LCRandom\n    lsr r1, r0, #0x1f\n    lsl r2, r0, #0x12\n    sub r2, r2, r1\n    mov r0, #0x12\n    ror r2, r0\n    mov r0, #2\n    add r1, r1, r2\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [r4, #8]\n    bl LCRandom\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    bl _s32_div_f\n    lsl r0, r1, #0xc\n    str r0, [r4, #0xc]\n    bl LCRandom\n    mov r1, #5\n    lsl r1, r1, #0xe\n    bl _s32_div_f\n    mov r0, #1\n    lsl r0, r0, #0x10\n    add r0, r1, r0\n    str r0, [r4, #0x10]\n    bl LCRandom\n    mov r1, #0xf\n    bl _s32_div_f\n    add r1, #0x14\n    strh r1, [r4, #0x14]\n    ldr r1, [sp, #0xc]\n    mov r0, #0x18\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp]\n    add r1, r0, r2\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    str r5, [r1, r0]\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0xc]\n    cmp r0, #8\n    blt _0226046E\n    mov r0, #0xd\n    str r0, [sp, #0x3c]\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #4]\n    lsl r1, r0, #1\n    ldr r0, _02260600 ; =_02262C6C\n    ldrh r0, [r0, r1]\n    ldr r1, _02260604 ; =0x00000424\n    str r0, [sp, #0x40]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    add r6, r0, r1\n    b _022605EC\n    ldr r1, [sp, #0xc]\n    mov r0, #0x18\n    mul r0, r1\n    add r4, r6, r0\n    ldr r0, [r7, #0x24]\n    ldr r1, [r7, #0x28]\n    add r2, sp, #0x34\n    bl SpriteSystem_NewSprite\n    add r5, r0, #0\n    beq _022605F2\n    mov r3, #0x16\n    mov r1, #0x80\n    mov r2, #0x60\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    add r0, r5, #0\n    mov r1, #0xb\n    bl ManagedSprite_SetAnim\n    ldr r0, [r5]\n    bl Sprite_TickFrame\n    bl LCRandom\n    lsr r1, r0, #0x1f\n    lsl r2, r0, #0x13\n    sub r2, r2, r1\n    mov r0, #0x13\n    ror r2, r0\n    mov r0, #2\n    add r1, r1, r2\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [r4, #4]\n    bl LCRandom\n    lsr r1, r0, #0x1f\n    lsl r2, r0, #0x12\n    sub r2, r2, r1\n    mov r0, #0x12\n    ror r2, r0\n    mov r0, #2\n    add r1, r1, r2\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [r4, #8]\n    bl LCRandom\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    bl _s32_div_f\n    lsl r0, r1, #0xc\n    str r0, [r4, #0xc]\n    bl LCRandom\n    mov r1, #5\n    lsl r1, r1, #0xe\n    bl _s32_div_f\n    mov r0, #1\n    lsl r0, r0, #0x10\n    add r0, r1, r0\n    str r0, [r4, #0x10]\n    bl LCRandom\n    mov r1, #0xf\n    bl _s32_div_f\n    add r1, #0x14\n    strh r1, [r4, #0x14]\n    ldr r1, [sp, #0xc]\n    mov r0, #0x18\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp]\n    add r1, r0, r2\n    ldr r0, _02260604 ; =0x00000424\n    str r5, [r1, r0]\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0xc]\n    cmp r0, #3\n    blt _02260544\n    add sp, #0x68\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022605F8: .word ov93_02262E00\n    _022605FC: .word ov93_02262D7C\n    _02260600: .word _02262C6C\n    _02260604: .word 0x00000424"
    );
    #endif
}

void ov93_02260608(void) {
    /* Original at 0x02260608 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _0226065C ; =0x000033A0\n    mov r4, #0\n    add r5, r6, r0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _0226061C\n    bl Sprite_DeleteAndFreeResources\n    add r4, r4, #1\n    add r5, #0x18\n    cmp r4, #0x24\n    blt _02260612\n    mov r0, #0x37\n    lsl r0, r0, #8\n    mov r5, #0\n    add r4, r6, r0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _02260636\n    bl Sprite_DeleteAndFreeResources\n    add r5, r5, #1\n    add r4, #0x18\n    cmp r5, #8\n    blt _0226062C\n    mov r0, #0xdf\n    lsl r0, r0, #6\n    mov r4, #0\n    add r5, r6, r0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _02260650\n    bl Sprite_DeleteAndFreeResources\n    add r4, r4, #1\n    add r5, #0x18\n    cmp r4, #3\n    blt _02260646\n    pop {r4, r5, r6, pc}\n    nop\n    _0226065C: .word 0x000033A0"
    );
    #endif
}

void ov93_02260660(void) {
    /* Original at 0x02260660 */
    /* Requires manual decompilation - 319 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    ldr r1, _022608FC ; =0x0000339C\n    mov r4, #0\n    add r0, r0, r1\n    str r0, [sp, #0x18]\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02260678\n    add sp, #0x34\n    add r0, r4, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x18]\n    str r4, [sp, #0x14]\n    add r5, r0, #4\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _0226073A\n    mov r1, #0x14\n    ldrsh r1, [r5, r1]\n    cmp r1, #0\n    bne _02260696\n    bl Sprite_DeleteAndFreeResources\n    mov r0, #0\n    str r0, [r5]\n    b _0226073A\n    ldr r1, [r5, #0xc]\n    ldr r0, [r5, #0x10]\n    add r0, r1, r0\n    str r0, [r5, #0xc]\n    ldr r1, [r5, #4]\n    ldr r0, [r5, #8]\n    add r1, r1, r0\n    mov r0, #0xa\n    lsl r0, r0, #0x10\n    str r1, [r5, #4]\n    cmp r1, r0\n    blt _022606B0\n    str r0, [r5, #4]\n    ldr r0, [r5, #0xc]\n    ldr r6, [r5, #4]\n    bl GF_SinDegFX32\n    add r7, r0, #0\n    ldr r0, [r5, #4]\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0xc]\n    bl GF_CosDegFX32\n    str r0, [sp, #0x1c]\n    asr r1, r7, #0x1f\n    add r0, r7, #0\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    str r0, [sp, #0x28]\n    ldr r2, [sp, #0x10]\n    ldr r0, [sp, #0x1c]\n    add r6, r1, #0\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    add r2, r1, #0\n    mov r3, #2\n    add r7, r0, #0\n    ldr r1, [sp, #0x28]\n    lsl r3, r3, #0xa\n    add r3, r1, r3\n    ldr r1, _02260900 ; =0\n    ldr r0, [r5]\n    adc r6, r1\n    lsl r1, r6, #0x14\n    lsr r3, r3, #0xc\n    orr r3, r1\n    asr r1, r3, #0xb\n    lsr r1, r1, #0x14\n    add r1, r3, r1\n    asr r1, r1, #0xc\n    add r1, #0x80\n    mov r3, #2\n    lsl r1, r1, #0x10\n    ldr r6, _02260900 ; =0\n    lsl r3, r3, #0xa\n    asr r1, r1, #0x10\n    add r3, r7, r3\n    adc r2, r6\n    lsl r2, r2, #0x14\n    lsr r3, r3, #0xc\n    orr r3, r2\n    neg r3, r3\n    asr r2, r3, #0xb\n    lsr r2, r2, #0x14\n    add r2, r3, r2\n    asr r2, r2, #0xc\n    add r2, #0x60\n    lsl r2, r2, #0x10\n    mov r3, #0x16\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    mov r0, #0x14\n    ldrsh r0, [r5, r0]\n    add r4, r4, #1\n    sub r0, r0, #1\n    strh r0, [r5, #0x14]\n    ldr r0, [sp, #0x14]\n    add r5, #0x18\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    cmp r0, #0x24\n    blt _0226067E\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0xd9\n    ldr r0, [sp, #0x18]\n    lsl r1, r1, #2\n    add r5, r0, r1\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _0226080E\n    mov r1, #0x14\n    ldrsh r1, [r5, r1]\n    cmp r1, #0\n    bne _0226076A\n    bl Sprite_DeleteAndFreeResources\n    mov r0, #0\n    str r0, [r5]\n    b _0226080E\n    ldr r1, [r5, #0xc]\n    ldr r0, [r5, #0x10]\n    add r0, r1, r0\n    str r0, [r5, #0xc]\n    ldr r1, [r5, #4]\n    ldr r0, [r5, #8]\n    add r1, r1, r0\n    mov r0, #0xa\n    lsl r0, r0, #0x10\n    str r1, [r5, #4]\n    cmp r1, r0\n    blt _02260784\n    str r0, [r5, #4]\n    ldr r0, [r5, #0xc]\n    ldr r6, [r5, #4]\n    bl GF_SinDegFX32\n    add r7, r0, #0\n    ldr r0, [r5, #4]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0xc]\n    bl GF_CosDegFX32\n    str r0, [sp, #0x20]\n    asr r1, r7, #0x1f\n    add r0, r7, #0\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    str r0, [sp, #0x2c]\n    ldr r2, [sp, #0xc]\n    ldr r0, [sp, #0x20]\n    add r6, r1, #0\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    add r2, r1, #0\n    mov r3, #2\n    add r7, r0, #0\n    ldr r1, [sp, #0x2c]\n    lsl r3, r3, #0xa\n    add r3, r1, r3\n    ldr r1, _02260900 ; =0\n    ldr r0, [r5]\n    adc r6, r1\n    lsl r1, r6, #0x14\n    lsr r3, r3, #0xc\n    orr r3, r1\n    asr r1, r3, #0xb\n    lsr r1, r1, #0x14\n    add r1, r3, r1\n    asr r1, r1, #0xc\n    add r1, #0x80\n    mov r3, #2\n    lsl r1, r1, #0x10\n    ldr r6, _02260900 ; =0\n    lsl r3, r3, #0xa\n    asr r1, r1, #0x10\n    add r3, r7, r3\n    adc r2, r6\n    lsl r2, r2, #0x14\n    lsr r3, r3, #0xc\n    orr r3, r2\n    neg r3, r3\n    asr r2, r3, #0xb\n    lsr r2, r2, #0x14\n    add r2, r3, r2\n    asr r2, r2, #0xc\n    add r2, #0x60\n    lsl r2, r2, #0x10\n    mov r3, #0x16\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    mov r0, #0x14\n    ldrsh r0, [r5, r0]\n    add r4, r4, #1\n    sub r0, r0, #1\n    strh r0, [r5, #0x14]\n    ldr r0, [sp]\n    add r5, #0x18\n    add r0, r0, #1\n    str r0, [sp]\n    cmp r0, #8\n    blt _02260752\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r1, _02260904 ; =0x00000424\n    ldr r0, [sp, #0x18]\n    add r5, r0, r1\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _022608E0\n    mov r1, #0x14\n    ldrsh r1, [r5, r1]\n    cmp r1, #0\n    bne _0226083C\n    bl Sprite_DeleteAndFreeResources\n    mov r0, #0\n    str r0, [r5]\n    b _022608E0\n    ldr r1, [r5, #0xc]\n    ldr r0, [r5, #0x10]\n    add r0, r1, r0\n    str r0, [r5, #0xc]\n    ldr r1, [r5, #4]\n    ldr r0, [r5, #8]\n    add r1, r1, r0\n    mov r0, #0xa\n    lsl r0, r0, #0x10\n    str r1, [r5, #4]\n    cmp r1, r0\n    blt _02260856\n    str r0, [r5, #4]\n    ldr r0, [r5, #0xc]\n    ldr r6, [r5, #4]\n    bl GF_SinDegFX32\n    add r7, r0, #0\n    ldr r0, [r5, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0xc]\n    bl GF_CosDegFX32\n    str r0, [sp, #0x24]\n    asr r1, r7, #0x1f\n    add r0, r7, #0\n    asr r3, r6, #0x1f\n    add r2, r6, #0\n    bl _ll_mul\n    str r0, [sp, #0x30]\n    ldr r2, [sp, #8]\n    ldr r0, [sp, #0x24]\n    add r6, r1, #0\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    add r2, r1, #0\n    mov r3, #2\n    add r7, r0, #0\n    ldr r1, [sp, #0x30]\n    lsl r3, r3, #0xa\n    add r3, r1, r3\n    ldr r1, _02260900 ; =0\n    ldr r0, [r5]\n    adc r6, r1\n    lsl r1, r6, #0x14\n    lsr r3, r3, #0xc\n    orr r3, r1\n    asr r1, r3, #0xb\n    lsr r1, r1, #0x14\n    add r1, r3, r1\n    asr r1, r1, #0xc\n    add r1, #0x80\n    mov r3, #2\n    lsl r1, r1, #0x10\n    ldr r6, _02260900 ; =0\n    lsl r3, r3, #0xa\n    asr r1, r1, #0x10\n    add r3, r7, r3\n    adc r2, r6\n    lsl r2, r2, #0x14\n    lsr r3, r3, #0xc\n    orr r3, r2\n    neg r3, r3\n    asr r2, r3, #0xb\n    lsr r2, r2, #0x14\n    add r2, r3, r2\n    asr r2, r2, #0xc\n    add r2, #0x60\n    lsl r2, r2, #0x10\n    mov r3, #0x16\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    mov r0, #0x14\n    ldrsh r0, [r5, r0]\n    add r4, r4, #1\n    sub r0, r0, #1\n    strh r0, [r5, #0x14]\n    ldr r0, [sp, #4]\n    add r5, #0x18\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #3\n    blt _02260824\n    cmp r4, #0\n    bne _022608F6\n    ldr r0, [sp, #0x18]\n    mov r1, #0\n    str r1, [r0]\n    mov r0, #1\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    _022608FC: .word 0x0000339C\n    _02260900: .word 0\n    _02260904: .word 0x00000424"
    );
    #endif
}

void ov93_02260908(void) {
    /* Original at 0x02260908 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02260970 ; =0x0000339C\n    add r4, r5, r0\n    ldr r0, [r4]\n    cmp r0, #1\n    bne _0226091A\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r2, #0x47\n    add r0, r4, #0\n    mov r1, #0\n    lsl r2, r2, #4\n    bl MI_CpuFill8\n    ldr r1, _02260970 ; =0x0000339C\n    ldr r2, _02260974 ; =0x00001428\n    add r0, r5, #0\n    add r1, r5, r1\n    add r2, r5, r2\n    bl ov93_02260314\n    ldr r1, _02260974 ; =0x00001428\n    ldr r0, [r5, #0x2c]\n    add r1, r5, r1\n    bl ov93_0225FC8C\n    add r0, r5, #0\n    bl ov93_02260B84\n    mov r2, #0\n    ldr r0, _02260978 ; =0x00002FCC\n    add r1, r2, #0\n    str r2, [r5, r0]\n    ldr r0, _0226097C ; =0x00001430\n    str r2, [r5, r0]\n    add r0, #8\n    str r2, [r5, r0]\n    mov r0, #0x51\n    lsl r0, r0, #6\n    add r2, r2, #1\n    str r1, [r5, r0]\n    add r5, r5, #4\n    cmp r2, #4\n    blt _02260958\n    ldr r0, _02260980 ; =0x00000594\n    bl PlaySE\n    mov r0, #1\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    nop\n    _02260970: .word 0x0000339C\n    _02260974: .word 0x00001428\n    _02260978: .word 0x00002FCC\n    _0226097C: .word 0x00001430\n    _02260980: .word 0x00000594"
    );
    #endif
}

void ov93_02260984(void) {
    /* Original at 0x02260984 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    ldr r6, _022609DC ; =ov93_02262E34\n    add r4, r2, #0\n    add r3, r0, #0\n    add r7, r1, #0\n    add r5, sp, #0\n    mov r2, #6\n    ldmia r6!, {r0, r1}\n    stmia r5!, {r0, r1}\n    sub r2, r2, #1\n    bne _02260994\n    ldr r0, [r6]\n    add r2, sp, #0\n    str r0, [r5]\n    ldr r0, [r3, #0x24]\n    ldr r1, [r3, #0x28]\n    bl SpriteSystem_NewSprite\n    mov r3, #0x16\n    lsl r2, r4, #4\n    mov r1, #0x48\n    sub r1, r1, r2\n    lsl r1, r1, #0x10\n    add r5, r0, #0\n    asr r1, r1, #0x10\n    mov r2, #0x20\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ManagedSprite_SetAnim\n    ldr r0, [r5]\n    bl Sprite_TickFrame\n    add r0, r5, #0\n    mov r1, #1\n    bl ManagedSprite_SetAnimateFlag\n    add r0, r5, #0\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    _022609DC: .word ov93_02262E34"
    );
    #endif
}

void ov93_022609E0(void) {
    /* Original at 0x022609E0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, _02260A10 ; =0x0000380C\n    mov r4, #0\n    add r5, r7, r0\n    add r6, r4, #0\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    add r3, r4, #0\n    bl ov93_02260A58\n    ldr r0, [r5]\n    add r1, r6, #0\n    bl ManagedSprite_TickNFrames\n    mov r0, #1\n    lsl r0, r0, #0xe\n    add r4, r4, #1\n    add r5, #0xc\n    add r6, r6, r0\n    cmp r4, #5\n    blt _022609EC\n    pop {r3, r4, r5, r6, r7, pc}\n    _02260A10: .word 0x0000380C"
    );
    #endif
}

void ov93_02260A14(void) {
    Sprite_DeleteAndFreeResources(0);
}

void ov93_02260A30(void) {
    /* Original at 0x02260A30 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _02260A54 ; =0x0000380C\n    mov r4, #0\n    add r5, r6, r0\n    add r0, r5, #0\n    bl ov93_02260A8C\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov93_02260AD8\n    add r4, r4, #1\n    add r5, #0xc\n    cmp r4, #5\n    blt _02260A3A\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _02260A54: .word 0x0000380C"
    );
    #endif
}

void ov93_02260A58(void) {
    /* Original at 0x02260A58 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r7, r0, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0xc\n    bl MI_CpuFill8\n    add r0, r6, #0\n    bl ov93_02260B70\n    strb r0, [r5, #4]\n    mov r0, #1\n    strb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    add r0, r7, #0\n    add r2, r4, #0\n    bl ov93_02260984\n    str r0, [r5]\n    strb r4, [r5, #6]\n    strh r6, [r5, #8]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov93_02260A8C(void) {
    /* Original at 0x02260A8C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #6]\n    mov r3, #0x16\n    add r2, sp, #0\n    lsl r1, r0, #4\n    mov r0, #0x48\n    sub r0, r0, r1\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    add r1, sp, #0\n    ldr r0, [r5]\n    add r1, #2\n    lsl r3, r3, #0x10\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    add r1, sp, #0\n    mov r0, #2\n    ldrsh r2, [r1, r0]\n    cmp r4, r2\n    ble _02260AD6\n    add r2, r2, #2\n    strh r2, [r1, #2]\n    ldrsh r0, [r1, r0]\n    cmp r0, r4\n    ble _02260AC2\n    strh r4, [r1, #2]\n    add r3, sp, #0\n    mov r1, #2\n    mov r2, #0\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    mov r3, #0x16\n    ldr r0, [r5]\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov93_02260AD8(void) {
    /* Original at 0x02260AD8 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldrb r1, [r4, #6]\n    add r5, r0, #0\n    cmp r1, #0\n    bne _02260B66\n    ldrb r1, [r4, #5]\n    cmp r1, #1\n    beq _02260B44\n    cmp r1, #3\n    bne _02260B66\n    ldr r0, [r4]\n    bl ManagedSprite_IsAnimated\n    cmp r0, #0\n    bne _02260B66\n    mov r0, #8\n    ldrsh r1, [r4, r0]\n    add r1, r1, #5\n    strh r1, [r4, #8]\n    ldrsh r0, [r4, r0]\n    bl ov93_02260B70\n    strb r0, [r4, #4]\n    mov r0, #1\n    strb r0, [r4, #5]\n    ldrb r1, [r4, #4]\n    ldr r0, [r4]\n    bl ManagedSprite_SetAnim\n    mov r1, #7\n    mov r3, #0x16\n    ldr r0, [r4]\n    mvn r1, r1\n    mov r2, #0x20\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, _02260B68 ; =0x0000380C\n    mov r2, #0\n    add r3, r5, r0\n    mov r1, #4\n    ldrb r0, [r3, #6]\n    cmp r0, #0\n    bne _02260B36\n    strb r1, [r3, #6]\n    b _02260B3A\n    sub r0, r0, #1\n    strb r0, [r3, #6]\n    add r2, r2, #1\n    add r3, #0xc\n    cmp r2, #5\n    blt _02260B2C\n    pop {r3, r4, r5, pc}\n    bl ov93_0225FEAC\n    ldrb r1, [r4, #5]\n    cmp r1, #1\n    bne _02260B66\n    cmp r0, #0x4b\n    ble _02260B66\n    mov r0, #2\n    strb r0, [r4, #5]\n    ldrb r1, [r4, #4]\n    ldr r0, [r4]\n    add r1, r1, #3\n    bl ManagedSprite_SetAnim\n    ldr r0, _02260B6C ; =0x00000596\n    bl PlaySE\n    pop {r3, r4, r5, pc}\n    _02260B68: .word 0x0000380C\n    _02260B6C: .word 0x00000596"
    );
    #endif
}

void ov93_02260B70(void) {
    /* Original at 0x02260B70 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0xa\n    blt _02260B78\n    mov r0, #2\n    bx lr\n    cmp r0, #5\n    blt _02260B80\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov93_02260B84(void) {
    /* Original at 0x02260B84 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02260BAC ; =0x0000380C\n    mov r2, #0\n    add r1, r0, r1\n    ldrb r0, [r1, #6]\n    cmp r0, #0\n    bne _02260BA0\n    mov r0, #3\n    strb r0, [r1, #5]\n    ldr r0, [r1]\n    mov r1, #6\n    bl ManagedSprite_SetAnim\n    pop {r3, pc}\n    add r2, r2, #1\n    add r1, #0xc\n    cmp r2, #5\n    blt _02260B8C\n    pop {r3, pc}\n    nop\n    _02260BAC: .word 0x0000380C"
    );
    #endif
}

void ov93_02260BB0(void) {
    /* Original at 0x02260BB0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4]\n    add r0, #0x30\n    ldrb r0, [r0]\n    cmp r0, #3\n    bne _02260BEC\n    mov r0, #0xc\n    str r0, [sp]\n    mov r1, #4\n    str r1, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x2c]\n    mov r2, #0\n    mov r3, #0xd\n    bl BgTilemapRectChangePalette\n    mov r0, #0xc\n    str r0, [sp]\n    mov r1, #4\n    str r1, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x2c]\n    mov r2, #0x14\n    mov r3, #0xd\n    bl BgTilemapRectChangePalette\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov93_02260BF0(void) {
    /* Original at 0x02260BF0 */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [r6]\n    add r0, #0x30\n    ldrb r0, [r0]\n    cmp r0, #0\n    ble _02260C50\n    ldr r0, _02260CF0 ; =ov93_02262C72\n    str r0, [sp, #4]\n    add r0, sp, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r5, [sp]\n    ldrh r7, [r0]\n    mov r4, #0\n    add r0, r6, #0\n    add r0, #0x8c\n    add r3, r7, r4\n    mov r1, #1\n    lsl r3, r3, #0x10\n    ldr r0, [r0]\n    add r2, r1, #0\n    lsr r3, r3, #0x10\n    bl PaletteData_GetBufferColorAtIndex\n    strh r0, [r5]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #3\n    blt _02260C14\n    ldr r0, [sp, #4]\n    add r0, r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    add r0, r0, #6\n    str r0, [sp]\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, [r6]\n    add r0, #0x30\n    ldrb r1, [r0]\n    ldr r0, [sp, #0xc]\n    cmp r0, r1\n    blt _02260C0C\n    bl sub_0203769C\n    ldr r3, [r6]\n    mov r2, #0\n    add r1, r3, #0\n    add r1, #0x30\n    ldrb r4, [r1]\n    cmp r4, #0\n    ble _02260C74\n    add r1, r3, #0\n    add r1, #0x2c\n    ldrb r1, [r1]\n    cmp r0, r1\n    beq _02260C74\n    add r2, r2, #1\n    add r3, r3, #1\n    cmp r2, r4\n    blt _02260C62\n    add r0, r6, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #1\n    bl PaletteData_GetUnfadedBuf\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #1\n    bl PaletteData_GetFadedBuf\n    ldr r1, [r6]\n    add r7, r0, #0\n    add r0, r1, #0\n    add r0, #0x30\n    ldrb r5, [r0]\n    mov r4, #0\n    cmp r5, #0\n    ble _02260CEA\n    add r1, r1, r4\n    add r1, #0x2c\n    ldrb r1, [r1]\n    add r0, r6, #0\n    bl ov93_0225E3C4\n    lsl r1, r0, #1\n    ldr r0, _02260CF4 ; =ov93_02262DA4\n    lsl r2, r5, #3\n    add r0, r0, r2\n    ldrh r2, [r1, r0]\n    mov r1, #6\n    add r3, r4, #0\n    mul r3, r1\n    add r1, sp, #0x10\n    add r1, r1, r3\n    lsl r3, r2, #1\n    ldr r2, [sp, #8]\n    mov r0, #0\n    add r2, r2, r3\n    add r3, r7, r3\n    ldrh r5, [r1]\n    add r0, r0, #1\n    strh r5, [r2]\n    ldrh r5, [r1]\n    add r1, r1, #2\n    add r2, r2, #2\n    strh r5, [r3]\n    add r3, r3, #2\n    cmp r0, #3\n    blt _02260CC8\n    ldr r1, [r6]\n    add r4, r4, #1\n    add r0, r1, #0\n    add r0, #0x30\n    ldrb r5, [r0]\n    cmp r4, r5\n    blt _02260C9E\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02260CF0: .word ov93_02262C72\n    _02260CF4: .word ov93_02262DA4"
    );
    #endif
}

void ov93_02260CF8(void) {
    /* Original at 0x02260CF8 */
    /* Requires manual decompilation - 137 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x9c\n    add r7, r0, #0\n    ldr r0, [r7, #0x28]\n    ldr r1, _02260E10 ; =0x00002716\n    mov r2, #2\n    bl SpriteManager_FindPlttResourceOffset\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, [r7]\n    add r0, #0x30\n    ldrb r0, [r0]\n    cmp r0, #0\n    ble _02260D6E\n    ldr r0, _02260E14 ; =ov93_02262C8A\n    str r0, [sp, #8]\n    add r0, sp, #0x1c\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    lsl r0, r0, #4\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    ldr r5, [sp, #4]\n    ldrh r1, [r0]\n    ldr r0, [sp]\n    mov r6, #0\n    add r4, r1, r0\n    add r0, r7, #0\n    add r0, #0x8c\n    lsl r3, r4, #0x10\n    ldr r0, [r0]\n    mov r1, #3\n    mov r2, #1\n    lsr r3, r3, #0x10\n    bl PaletteData_GetBufferColorAtIndex\n    strh r0, [r5]\n    add r6, r6, #1\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r6, #0x10\n    blt _02260D32\n    ldr r0, [sp, #8]\n    add r0, r0, #2\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    add r0, #0x20\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    ldr r0, [r7]\n    add r0, #0x30\n    ldrb r1, [r0]\n    ldr r0, [sp, #0x18]\n    cmp r0, r1\n    blt _02260D26\n    bl sub_0203769C\n    ldr r3, [r7]\n    mov r2, #0\n    add r1, r3, #0\n    add r1, #0x30\n    ldrb r4, [r1]\n    cmp r4, #0\n    ble _02260D92\n    add r1, r3, #0\n    add r1, #0x2c\n    ldrb r1, [r1]\n    cmp r0, r1\n    beq _02260D92\n    add r2, r2, #1\n    add r3, r3, #1\n    cmp r2, r4\n    blt _02260D80\n    add r0, r7, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #3\n    bl PaletteData_GetUnfadedBuf\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #3\n    bl PaletteData_GetFadedBuf\n    ldr r1, [r7]\n    str r0, [sp, #0x10]\n    add r0, r1, #0\n    add r0, #0x30\n    ldrb r5, [r0]\n    mov r4, #0\n    cmp r5, #0\n    ble _02260E0C\n    ldr r0, [sp, #0xc]\n    lsl r6, r0, #4\n    add r1, r1, r4\n    add r1, #0x2c\n    ldrb r1, [r1]\n    add r0, r7, #0\n    bl ov93_0225E3C4\n    lsl r1, r0, #1\n    ldr r0, _02260E18 ; =ov93_02262D04\n    lsl r2, r5, #3\n    add r0, r0, r2\n    ldrh r0, [r1, r0]\n    lsl r3, r4, #5\n    add r1, sp, #0x1c\n    add r2, r6, r0\n    add r1, r1, r3\n    lsl r5, r2, #1\n    ldr r2, [sp, #0x14]\n    ldr r3, [sp, #0x10]\n    mov r0, #0\n    add r2, r2, r5\n    add r3, r3, r5\n    ldrh r5, [r1]\n    add r0, r0, #1\n    strh r5, [r2]\n    ldrh r5, [r1]\n    add r1, r1, #2\n    add r2, r2, #2\n    strh r5, [r3]\n    add r3, r3, #2\n    cmp r0, #0x10\n    blt _02260DEA\n    ldr r1, [r7]\n    add r4, r4, #1\n    add r0, r1, #0\n    add r0, #0x30\n    ldrb r5, [r0]\n    cmp r4, r5\n    blt _02260DC0\n    add sp, #0x9c\n    pop {r4, r5, r6, r7, pc}\n    _02260E10: .word 0x00002716\n    _02260E14: .word ov93_02262C8A\n    _02260E18: .word ov93_02262D04"
    );
    #endif
}

void ov93_02260E1C(void) {
    /* Original at 0x02260E1C */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r0, [r5, #0x28]\n    ldr r1, _02260F08 ; =0x00002716\n    mov r2, #2\n    bl SpriteManager_FindPlttResourceOffset\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    add r0, #0x30\n    ldrb r0, [r0]\n    cmp r0, #0\n    ble _02260E76\n    ldr r0, [sp, #4]\n    ldr r7, _02260F0C ; =ov93_02262C82\n    lsl r0, r0, #4\n    add r4, sp, #0x14\n    str r0, [sp]\n    ldrh r6, [r7]\n    ldr r3, [sp]\n    add r0, r5, #0\n    add r0, #0x8c\n    add r3, r6, r3\n    lsl r3, r3, #0x10\n    ldr r0, [r0]\n    mov r1, #3\n    mov r2, #1\n    lsr r3, r3, #0x10\n    bl PaletteData_GetBufferColorAtIndex\n    strh r0, [r4]\n    ldr r0, [sp, #0x10]\n    add r7, r7, #2\n    add r0, r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    add r4, r4, #2\n    add r0, #0x30\n    ldrb r1, [r0]\n    ldr r0, [sp, #0x10]\n    cmp r0, r1\n    blt _02260E46\n    bl sub_0203769C\n    ldr r3, [r5]\n    mov r2, #0\n    add r1, r3, #0\n    add r1, #0x30\n    ldrb r4, [r1]\n    cmp r4, #0\n    ble _02260E9A\n    add r1, r3, #0\n    add r1, #0x2c\n    ldrb r1, [r1]\n    cmp r0, r1\n    beq _02260E9A\n    add r2, r2, #1\n    add r3, r3, #1\n    cmp r2, r4\n    blt _02260E88\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #3\n    bl PaletteData_GetUnfadedBuf\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #3\n    bl PaletteData_GetFadedBuf\n    ldr r1, [r5]\n    str r0, [sp, #8]\n    add r0, r1, #0\n    add r0, #0x30\n    ldrb r6, [r0]\n    mov r4, #0\n    cmp r6, #0\n    ble _02260F02\n    ldr r0, [sp, #4]\n    lsl r7, r0, #4\n    add r1, r1, r4\n    add r1, #0x2c\n    ldrb r1, [r1]\n    add r0, r5, #0\n    bl ov93_0225E3C4\n    lsl r1, r0, #1\n    ldr r0, _02260F10 ; =ov93_02262D54\n    lsl r2, r6, #3\n    add r0, r0, r2\n    ldrh r0, [r1, r0]\n    lsl r1, r4, #1\n    add r2, sp, #0x14\n    ldrh r3, [r2, r1]\n    add r0, r7, r0\n    ldr r2, [sp, #0xc]\n    lsl r0, r0, #1\n    strh r3, [r2, r0]\n    add r2, sp, #0x14\n    ldrh r2, [r2, r1]\n    ldr r1, [sp, #8]\n    add r4, r4, #1\n    strh r2, [r1, r0]\n    ldr r1, [r5]\n    add r0, r1, #0\n    add r0, #0x30\n    ldrb r6, [r0]\n    cmp r4, r6\n    blt _02260EC8\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02260F08: .word 0x00002716\n    _02260F0C: .word ov93_02262C82\n    _02260F10: .word ov93_02262D54"
    );
    #endif
}

void ov93_02260F14(void) {
    /* Original at 0x02260F14 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x10\n    bl MI_CpuFill8\n    bl sub_0203769C\n    strb r0, [r4]\n    strh r5, [r4, #2]\n    str r6, [r4, #4]\n    str r6, [r4, #8]\n    mov r0, #0\n    strb r0, [r4, #1]\n    strb r0, [r4, #0xc]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov93_02260F3C(void) {
    /* Original at 0x02260F3C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r2, _02260F80 ; =0x00002FB0\n    add r4, r0, #0\n    sub r0, r2, #4\n    add r3, r1, #0\n    ldr r1, [r4, r2]\n    ldr r0, [r4, r0]\n    sub r0, r1, r0\n    cmp r0, #8\n    blt _02260F56\n    mov r0, #0\n    pop {r4, r5}\n    bx lr\n    lsr r5, r1, #0x1f\n    lsl r1, r1, #0x1d\n    sub r1, r1, r5\n    mov r0, #0x1d\n    ror r1, r0\n    add r0, r5, r1\n    lsl r0, r0, #4\n    add r1, r4, r0\n    add r0, r2, #0\n    sub r0, #0x84\n    add r5, r1, r0\n    ldmia r3!, {r0, r1}\n    stmia r5!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r5!, {r0, r1}\n    ldr r0, [r4, r2]\n    add r0, r0, #1\n    str r0, [r4, r2]\n    mov r0, #1\n    pop {r4, r5}\n    bx lr\n    _02260F80: .word 0x00002FB0"
    );
    #endif
}

void ov93_02260F84(void) {
    /* Original at 0x02260F84 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r1, _02260FB4 ; =0x00002FAC\n    add r2, r1, #4\n    ldr r4, [r0, r1]\n    ldr r2, [r0, r2]\n    cmp r4, r2\n    blt _02260F98\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    add r2, r4, #1\n    str r2, [r0, r1]\n    sub r1, #0x80\n    add r3, r0, r1\n    lsr r2, r4, #0x1f\n    lsl r1, r4, #0x1d\n    sub r1, r1, r2\n    mov r0, #0x1d\n    ror r1, r0\n    add r0, r2, r1\n    lsl r0, r0, #4\n    add r0, r3, r0\n    pop {r3, r4}\n    bx lr\n    _02260FB4: .word 0x00002FAC"
    );
    #endif
}

void ov93_02260FB8(void) {
    /* Original at 0x02260FB8 */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r2, r0, #0\n    ldr r0, _022610A4 ; =0x00002FB0\n    add r7, r1, #0\n    ldr r5, [r2, r0]\n    sub r0, r0, #4\n    ldr r0, [r2, r0]\n    mov r4, #0\n    cmp r0, r5\n    beq _02260FD0\n    cmp r7, #0\n    bne _02260FD4\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    lsr r3, r0, #0x1f\n    lsl r1, r0, #0x1d\n    sub r1, r1, r3\n    mov r0, #0x1d\n    ror r1, r0\n    add r1, r3, r1\n    lsr r3, r5, #0x1f\n    lsl r5, r5, #0x1d\n    sub r5, r5, r3\n    ror r5, r0\n    add r0, r3, r5\n    cmp r1, r0\n    bge _02261012\n    cmp r1, r0\n    bge _0226105A\n    lsl r3, r1, #4\n    add r6, r2, r3\n    ldr r3, _022610A8 ; =0x00002F38\n    ldrb r5, [r6, r3]\n    cmp r5, #0\n    bne _02261008\n    ldr r0, _022610AC ; =0x00002F2C\n    add r2, r2, r0\n    lsl r0, r1, #4\n    add r4, r2, r0\n    b _0226105A\n    add r1, r1, #1\n    add r6, #0x10\n    cmp r1, r0\n    blt _02260FF8\n    b _0226105A\n    cmp r1, #8\n    bge _02261034\n    lsl r3, r1, #4\n    add r6, r2, r3\n    ldr r3, _022610A8 ; =0x00002F38\n    ldrb r5, [r6, r3]\n    cmp r5, #0\n    bne _0226102C\n    ldr r3, _022610AC ; =0x00002F2C\n    lsl r1, r1, #4\n    add r3, r2, r3\n    add r4, r3, r1\n    b _02261034\n    add r1, r1, #1\n    add r6, #0x10\n    cmp r1, #8\n    blt _0226101C\n    cmp r4, #0\n    bne _0226105A\n    mov r6, #0\n    cmp r0, #0\n    ble _0226105A\n    ldr r1, _022610A8 ; =0x00002F38\n    add r5, r2, #0\n    ldrb r3, [r5, r1]\n    cmp r3, #0\n    bne _02261052\n    ldr r0, _022610AC ; =0x00002F2C\n    add r1, r2, r0\n    lsl r0, r6, #4\n    add r4, r1, r0\n    b _0226105A\n    add r6, r6, #1\n    add r5, #0x10\n    cmp r6, r0\n    blt _02261042\n    cmp r4, #0\n    bne _02261066\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r4, #1]\n    cmp r0, #0\n    beq _02261070\n    bl GF_AssertFail\n    mov r0, #1\n    strb r7, [r4, #1]\n    strb r0, [r4, #0xc]\n    cmp r7, #1\n    beq _02261084\n    cmp r7, #2\n    beq _0226108C\n    cmp r7, #3\n    beq _02261098\n    b _022610A0\n    ldr r0, [r4, #4]\n    lsl r0, r0, #1\n    str r0, [r4, #8]\n    b _022610A0\n    ldr r1, [r4, #4]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    str r0, [r4, #8]\n    b _022610A0\n    ldr r1, [r4, #4]\n    lsl r0, r1, #1\n    add r0, r1, r0\n    str r0, [r4, #8]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _022610A4: .word 0x00002FB0\n    _022610A8: .word 0x00002F38\n    _022610AC: .word 0x00002F2C"
    );
    #endif
}

void ov93_022610B0(void) {
    /* Original at 0x022610B0 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    ldr r4, _02261144 ; =ov93_02262E68\n    add r7, r0, #0\n    str r1, [sp]\n    add r3, sp, #4\n    mov r2, #6\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _022610BE\n    ldr r0, [r4]\n    ldr r4, [sp]\n    ldr r5, _02261148 ; =ov93_02262CB4\n    str r0, [r3]\n    mov r6, #0\n    ldr r0, [r7, #0x24]\n    ldr r1, [r7, #0x28]\n    add r2, sp, #4\n    bl SpriteSystem_NewSprite\n    mov r3, #0x16\n    str r0, [r4]\n    mov r1, #0\n    mov r2, #2\n    ldrsh r1, [r5, r1]\n    ldrsh r2, [r5, r2]\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    lsr r1, r6, #0x1f\n    add r1, r6, r1\n    asr r1, r1, #1\n    ldr r0, [r4]\n    add r1, #0x1f\n    bl ManagedSprite_SetAnim\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #4\n    blt _022610D0\n    ldr r0, [r7]\n    add r0, #0x30\n    ldrb r0, [r0]\n    cmp r0, #2\n    beq _0226111E\n    cmp r0, #3\n    beq _02261136\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    mov r1, #0\n    ldr r0, [r0, #8]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [sp]\n    mov r1, #0\n    ldr r0, [r0, #0xc]\n    bl ManagedSprite_SetDrawFlag\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    mov r1, #0\n    ldr r0, [r0, #4]\n    bl ManagedSprite_SetDrawFlag\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    _02261144: .word ov93_02262E68\n    _02261148: .word ov93_02262CB4"
    );
    #endif
}

void ov93_0226114C(void) {
    Sprite_DeleteAndFreeResources(0);
}

void ov93_02261164(void) {
    /* Original at 0x02261164 */
    /* Requires manual decompilation - 160 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    ldr r4, _022612CC ; =ov93_02262E9C\n    add r5, r0, #0\n    str r1, [sp]\n    add r3, sp, #0xc\n    mov r2, #6\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02261172\n    ldr r0, [r4]\n    ldr r4, [sp]\n    str r0, [r3]\n    mov r0, #0\n    ldr r7, _022612D0 ; =ov93_02262C7A\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    add r0, #0xe4\n    ldr r1, [r0]\n    ldr r0, [r4, #0xc]\n    add r0, r1, r0\n    bl GF_SinDegFX32\n    asr r1, r0, #0x1f\n    mov r2, #0x4c\n    mov r3, #0\n    bl _ll_mul\n    mov r2, #2\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    ldr r0, _022612D4 ; =0\n    adc r1, r0\n    lsl r0, r1, #0x14\n    lsr r6, r2, #0xc\n    orr r6, r0\n    ldr r0, [sp]\n    add r6, #0x80\n    add r0, #0xe4\n    ldr r1, [r0]\n    ldr r0, [r4, #0xc]\n    add r0, r1, r0\n    bl GF_CosDegFX32\n    asr r1, r0, #0x1f\n    mov r2, #0x44\n    mov r3, #0\n    bl _ll_mul\n    mov r2, #2\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    ldr r2, _022612D4 ; =0\n    adc r1, r2\n    lsr r2, r0, #0xc\n    lsl r1, r1, #0x14\n    orr r2, r1\n    mov r0, #0x62\n    sub r0, r0, r2\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    add r2, sp, #0xc\n    bl SpriteSystem_NewSprite\n    ldr r2, [sp, #4]\n    lsl r1, r6, #0x10\n    sub r2, #0x18\n    lsl r2, r2, #0x10\n    mov r3, #0x16\n    str r0, [r4]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldrh r1, [r7, #2]\n    ldr r0, [r4]\n    bl ManagedSprite_SetAnim\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    ldr r0, [r4]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    ldr r2, _022612D8 ; =ov93_02262ED0\n    bl SpriteSystem_NewSprite\n    mov r1, #0\n    mov r3, #0x16\n    add r2, r1, #0\n    lsl r3, r3, #0x10\n    str r0, [r4, #4]\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [r4, #4]\n    mov r1, #0x21\n    bl ManagedSprite_SetAnim\n    ldr r0, [r4, #4]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    ldr r2, _022612DC ; =ov93_02262F04\n    bl SpriteSystem_NewSprite\n    ldr r2, [sp, #4]\n    lsl r1, r6, #0x10\n    lsl r2, r2, #0x10\n    mov r3, #0x16\n    str r0, [r4, #8]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [r4, #8]\n    mov r1, #1\n    bl ManagedSprite_SetOamMode\n    ldr r0, [r4, #8]\n    mov r1, #1\n    bl ManagedSprite_SetAffineOverwriteMode\n    mov r1, #0xfe\n    lsl r1, r1, #0x16\n    ldr r0, [r4, #8]\n    add r2, r1, #0\n    bl ManagedSprite_SetAffineScale\n    ldr r1, [sp, #8]\n    ldr r0, [r4, #8]\n    add r1, #0x22\n    bl ManagedSprite_SetAnim\n    ldr r0, [r4, #8]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x30\n    bl ov93_02262444\n    ldr r0, [sp, #8]\n    add r4, #0x4c\n    add r0, r0, #1\n    add r7, r7, #2\n    str r0, [sp, #8]\n    cmp r0, #3\n    bge _022612B4\n    b _02261186\n    ldr r0, [sp]\n    mov r1, #1\n    ldr r0, [r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [sp]\n    mov r1, #1\n    ldr r0, [r0, #8]\n    bl ManagedSprite_SetDrawFlag\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    _022612CC: .word ov93_02262E9C\n    _022612D0: .word ov93_02262C7A\n    _022612D4: .word 0\n    _022612D8: .word ov93_02262ED0\n    _022612DC: .word ov93_02262F04"
    );
    #endif
}

void ov93_022612E0(void) {
    /* Original at 0x022612E0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    mov r4, #0\n    ldr r0, [r5]\n    bl Sprite_DeleteAndFreeResources\n    ldr r0, [r5, #4]\n    bl Sprite_DeleteAndFreeResources\n    ldr r0, [r5, #8]\n    bl Sprite_DeleteAndFreeResources\n    add r1, r5, #0\n    add r0, r6, #0\n    add r1, #0x30\n    bl ov93_02262484\n    add r4, r4, #1\n    add r5, #0x4c\n    cmp r4, #3\n    blt _022612E8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov93_02261310(void) {
    /* Original at 0x02261310 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r1, #0xf4\n    ldrb r1, [r1]\n    mov r0, #0x1e\n    lsl r0, r0, #0xc\n    lsl r2, r1, #2\n    ldr r1, _02261350 ; =ov93_02262CC4\n    ldrb r1, [r1, r2]\n    bl _s32_div_f\n    add r1, r4, #0\n    add r1, #0xe8\n    str r0, [r1]\n    mov r1, #0\n    add r2, r1, #0\n    add r3, r4, #0\n    lsl r0, r2, #0xc\n    str r0, [r3, #0xc]\n    add r1, r1, #1\n    strb r1, [r3, #0x14]\n    add r2, #0x5a\n    add r3, #0x4c\n    cmp r1, #3\n    blt _02261332\n    mov r0, #2\n    strb r0, [r4, #0x10]\n    mov r0, #1\n    add r4, #0xf1\n    strb r0, [r4]\n    pop {r4, pc}\n    nop\n    _02261350: .word ov93_02262CC4"
    );
    #endif
}

void ov93_02261354(void) {
    /* Original at 0x02261354 */
    /* Requires manual decompilation - 201 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r6, r0, #0\n    add r0, r4, #0\n    add r0, #0xf1\n    ldrb r0, [r0]\n    mov r5, #0\n    cmp r0, #1\n    bne _02261368\n    b _022614E8\n    add r0, r4, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0xec\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf2\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _022613F4\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r1, [r0]\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    add r1, r1, r0\n    add r0, r4, #0\n    add r0, #0xe4\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf3\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0xf3\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0xf4\n    ldrb r1, [r1]\n    add r0, r4, #0\n    add r0, #0xf3\n    lsl r2, r1, #2\n    ldr r1, _022614EC ; =ov93_02262CC4\n    ldrb r0, [r0]\n    ldrb r1, [r1, r2]\n    cmp r0, r1\n    blo _02261456\n    add r0, r4, #0\n    add r0, #0xf3\n    strb r5, [r0]\n    add r0, r4, #0\n    add r0, #0xf0\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0xf0\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf0\n    ldrb r1, [r0]\n    mov r0, #0x1e\n    lsl r0, r0, #0xc\n    add r2, r1, #0\n    mul r2, r0\n    add r0, r4, #0\n    add r0, #0xe4\n    str r2, [r0]\n    add r0, r4, #0\n    add r0, #0xf4\n    ldrb r0, [r0]\n    lsl r1, r0, #2\n    ldr r0, _022614F0 ; =ov93_02262CC5\n    ldrb r1, [r0, r1]\n    add r0, r4, #0\n    add r0, #0xf2\n    strb r1, [r0]\n    b _02261456\n    add r0, r4, #0\n    add r0, #0xf2\n    ldrb r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0xf2\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf2\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02261456\n    add r0, r4, #0\n    add r0, #0xf0\n    ldrb r0, [r0]\n    cmp r0, #0xc\n    blo _02261456\n    add r0, r4, #0\n    add r0, #0xf0\n    strb r5, [r0]\n    add r0, r4, #0\n    add r0, #0xf4\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0xf4\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf4\n    ldrb r0, [r0]\n    cmp r0, #5\n    blo _0226143C\n    add r0, r4, #0\n    mov r1, #4\n    add r0, #0xf4\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0xf4\n    ldrb r1, [r1]\n    mov r0, #0x1e\n    lsl r0, r0, #0xc\n    lsl r2, r1, #2\n    ldr r1, _022614EC ; =ov93_02262CC4\n    ldrb r1, [r1, r2]\n    bl _s32_div_f\n    add r1, r4, #0\n    add r1, #0xe8\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0xf4\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02261492\n    ldr r1, _022614EC ; =ov93_02262CC4\n    mov r0, #0\n    mov r7, #0xc\n    ldrb r3, [r1]\n    ldrb r2, [r1, #1]\n    add r0, r0, #1\n    add r1, r1, #4\n    add r2, r3, r2\n    add r3, r2, #0\n    mul r3, r7\n    add r5, r5, r3\n    cmp r0, #2\n    blt _02261466\n    add r0, r4, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    sub r5, #0xf\n    cmp r5, r0\n    bne _022614C6\n    add r0, r4, #0\n    add r0, #0x4c\n    mov r1, #1\n    bl ov93_02261528\n    b _022614C6\n    cmp r0, #2\n    bne _022614C6\n    ldr r0, _022614EC ; =ov93_02262CC4\n    mov r1, #0\n    mov r7, #0xc\n    ldrb r3, [r0]\n    ldrb r2, [r0, #1]\n    add r1, r1, #1\n    add r0, r0, #4\n    add r2, r3, r2\n    add r3, r2, #0\n    mul r3, r7\n    add r5, r5, r3\n    cmp r1, #3\n    blt _0226149C\n    add r0, r4, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    sub r5, #0xf\n    cmp r5, r0\n    bne _022614C6\n    add r0, r4, #0\n    add r0, #0x98\n    mov r1, #1\n    bl ov93_02261528\n    mov r7, #0\n    add r5, r4, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    bl ov93_02261538\n    add r2, r5, #0\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, #0x30\n    bl ov93_02262540\n    add r7, r7, #1\n    add r5, #0x4c\n    cmp r7, #3\n    blt _022614CA\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022614EC: .word ov93_02262CC4\n    _022614F0: .word ov93_02262CC5"
    );
    #endif
}

void ov93_022614F4(void) {
    /* Original at 0x022614F4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r2, _02261524 ; =0x00001468\n    mov r3, #0\n    add r2, r0, r2\n    add r4, r2, #0\n    ldrb r0, [r4, #0x15]\n    cmp r0, #1\n    bne _02261512\n    mov r0, #0x4c\n    mul r0, r3\n    add r0, r2, r0\n    str r0, [r1]\n    ldrb r0, [r0, #0x14]\n    pop {r3, r4}\n    bx lr\n    add r3, r3, #1\n    add r4, #0x4c\n    cmp r3, #3\n    blt _022614FE\n    mov r0, #0\n    str r0, [r1]\n    pop {r3, r4}\n    bx lr\n    nop\n    _02261524: .word 0x00001468"
    );
    #endif
}

void ov93_02261528(void) {
    /* Original at 0x02261528 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "strb r1, [r0, #0x10]\n    mov r1, #0\n    strb r1, [r0, #0x11]\n    strb r1, [r0, #0x12]\n    str r1, [r0, #0x18]\n    strb r1, [r0, #0x15]\n    bx lr"
    );
    #endif
}

void ov93_02261538(void) {
    /* Original at 0x02261538 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldrb r3, [r2, #0x10]\n    lsl r4, r3, #2\n    ldr r3, _02261548 ; =ov93_02262C94\n    ldr r3, [r3, r4]\n    blx r3\n    pop {r4, pc}\n    nop\n    _02261548: .word ov93_02262C94"
    );
    #endif
}

void ov93_0226154C(void) {
    /* Original at 0x0226154C */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    strb r0, [r2, #0x15]\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov93_02261554(void) {
    /* Original at 0x02261554 */
    /* Requires manual decompilation - 224 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r2, #0\n    mov r0, #0x1c\n    ldrsh r0, [r5, r0]\n    add r1, sp, #0\n    strh r0, [r1, #2]\n    mov r0, #0x1e\n    ldrsh r0, [r5, r0]\n    strh r0, [r1]\n    ldrb r0, [r5, #0x11]\n    cmp r0, #0\n    beq _02261574\n    cmp r0, #1\n    beq _022615A8\n    b _02261732\n    ldr r0, [r5]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r5, #8]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add r1, sp, #0\n    mov r3, #0x16\n    ldr r0, [r5]\n    add r1, #2\n    add r2, sp, #0\n    lsl r3, r3, #0x10\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    add r1, sp, #0\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    strh r0, [r5, #0x1c]\n    mov r0, #0\n    ldrsh r0, [r1, r0]\n    strh r0, [r5, #0x1e]\n    ldrb r0, [r5, #0x11]\n    add r0, r0, #1\n    strb r0, [r5, #0x11]\n    mov r1, #0x5a\n    ldr r2, [r5, #0xc]\n    lsl r1, r1, #0xc\n    cmp r2, r1\n    bgt _022615BA\n    bge _022615EC\n    cmp r2, #0\n    beq _022615CC\n    b _02261654\n    lsl r0, r1, #1\n    cmp r2, r0\n    bgt _022615C4\n    beq _02261614\n    b _02261654\n    ldr r0, _0226173C ; =0x0010E000\n    cmp r2, r0\n    beq _02261634\n    b _02261654\n    mov r0, #0x1e\n    ldrsh r0, [r5, r0]\n    ldrb r1, [r5, #0x12]\n    add r0, #0x20\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    mul r0, r1\n    mov r1, #0xf\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    asr r1, r0, #0x10\n    sub r1, #0x20\n    add r0, sp, #0\n    strh r1, [r0]\n    b _02261658\n    mov r0, #0x1c\n    ldrsh r2, [r5, r0]\n    mov r0, #0x12\n    lsl r0, r0, #4\n    sub r0, r2, r0\n    lsl r0, r0, #0x10\n    ldrb r1, [r5, #0x12]\n    asr r0, r0, #0x10\n    mul r0, r1\n    mov r1, #0xf\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    asr r1, r0, #0x10\n    mov r0, #0x12\n    lsl r0, r0, #4\n    add r1, r1, r0\n    add r0, sp, #0\n    strh r1, [r0, #2]\n    b _02261658\n    mov r0, #0x1e\n    ldrsh r0, [r5, r0]\n    ldrb r1, [r5, #0x12]\n    sub r0, #0xe4\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    mul r0, r1\n    mov r1, #0xf\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    asr r1, r0, #0x10\n    add r1, #0xe4\n    add r0, sp, #0\n    strh r1, [r0]\n    b _02261658\n    mov r0, #0x1c\n    ldrsh r0, [r5, r0]\n    ldrb r1, [r5, #0x12]\n    add r0, #0x20\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    mul r0, r1\n    mov r1, #0xf\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    asr r1, r0, #0x10\n    sub r1, #0x20\n    add r0, sp, #0\n    strh r1, [r0, #2]\n    b _02261658\n    bl GF_AssertFail\n    ldrb r1, [r5, #0x12]\n    cmp r1, #0xf\n    blo _022616A0\n    mov r1, #0x1c\n    mov r2, #0x1e\n    mov r3, #0x16\n    ldrsh r1, [r5, r1]\n    ldrsh r2, [r5, r2]\n    ldr r0, [r5]\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    mov r2, #0x1e\n    ldrsh r2, [r5, r2]\n    mov r1, #0x1c\n    mov r3, #0x16\n    add r2, #0x18\n    lsl r2, r2, #0x10\n    ldrsh r1, [r5, r1]\n    ldr r0, [r5, #8]\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    add r0, r5, #0\n    mov r1, #2\n    bl ov93_02261528\n    add r1, r5, #0\n    add r5, #0x30\n    add r0, r4, #0\n    add r2, r5, #0\n    bl ov93_0226249C\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0xb4\n    mul r0, r1\n    lsl r0, r0, #0xc\n    mov r1, #0xf\n    bl _s32_div_f\n    bl GF_SinDegFX32\n    mov r2, #6\n    asr r1, r0, #0x1f\n    lsl r2, r2, #0xe\n    mov r3, #0\n    bl _ll_mul\n    mov r3, #2\n    mov r2, #0\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    adc r1, r2\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    orr r1, r0\n    neg r1, r1\n    asr r0, r1, #0xb\n    add r3, sp, #0\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r4, r0, #0xc\n    ldrsh r2, [r3, r2]\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    add r2, r2, r4\n    lsl r2, r2, #0x10\n    mov r3, #0x16\n    ldr r0, [r5]\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    add r2, #0x18\n    lsl r2, r2, #0x10\n    mov r3, #0x16\n    ldr r0, [r5, #8]\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    neg r0, r4\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r0, #0xc\n    mov r1, #0x18\n    bl _s32_div_f\n    mov r1, #1\n    lsl r1, r1, #0xc\n    sub r0, r1, r0\n    bl _fflt\n    ldr r1, _02261740 ; =0x45800000\n    bl _fdiv\n    add r1, r0, #0\n    ldr r0, [r5, #8]\n    add r2, r1, #0\n    bl ManagedSprite_SetAffineScale\n    ldrb r0, [r5, #0x12]\n    add r0, r0, #1\n    strb r0, [r5, #0x12]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _0226173C: .word 0x0010E000\n    _02261740: .word 0x45800000"
    );
    #endif
}

void ov93_02261744(void) {
    /* Original at 0x02261744 */
    /* Requires manual decompilation - 171 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r0, #0xf3\n    ldrb r0, [r0]\n    add r4, r2, #0\n    cmp r0, #0\n    beq _02261774\n    add r1, #0xf4\n    ldrb r1, [r1]\n    mov r0, #0xb\n    lsl r0, r0, #0xe\n    lsl r2, r1, #2\n    ldr r1, _022618BC ; =ov93_02262CC4\n    ldrb r1, [r1, r2]\n    bl _s32_div_f\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl ManagedSprite_TickNFrames\n    b _0226177C\n    ldr r0, [r4]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    add r0, r5, #0\n    add r0, #0xf3\n    ldrb r1, [r0]\n    mov r0, #0xb4\n    mul r0, r1\n    add r1, r5, #0\n    add r1, #0xf4\n    ldrb r1, [r1]\n    lsl r0, r0, #0xc\n    lsl r2, r1, #2\n    ldr r1, _022618BC ; =ov93_02262CC4\n    ldrb r1, [r1, r2]\n    bl _s32_div_f\n    bl GF_SinDegFX32\n    mov r2, #3\n    asr r1, r0, #0x1f\n    lsl r2, r2, #0xe\n    mov r3, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    neg r1, r1\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r7, r0, #0xc\n    add r0, r5, #0\n    add r0, #0xe4\n    ldr r1, [r0]\n    ldr r0, [r4, #0xc]\n    add r0, r1, r0\n    bl GF_SinDegFX32\n    asr r1, r0, #0x1f\n    mov r2, #0x4c\n    mov r3, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r6, r2, #0xc\n    orr r6, r0\n    add r0, r5, #0\n    add r0, #0xe4\n    ldr r1, [r0]\n    ldr r0, [r4, #0xc]\n    add r6, #0x80\n    add r0, r1, r0\n    bl GF_CosDegFX32\n    asr r1, r0, #0x1f\n    mov r2, #0x44\n    mov r3, #0\n    bl _ll_mul\n    add r2, r0, #0\n    mov r0, #2\n    mov r3, #0\n    lsl r0, r0, #0xa\n    add r0, r2, r0\n    adc r1, r3\n    lsr r2, r0, #0xc\n    lsl r1, r1, #0x14\n    orr r2, r1\n    mov r0, #0x62\n    sub r0, r0, r2\n    str r0, [sp, #4]\n    ldr r2, [sp, #4]\n    lsl r1, r6, #0x10\n    sub r2, #0x18\n    add r2, r2, r7\n    lsl r2, r2, #0x10\n    mov r3, #0x16\n    ldr r0, [r4]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r2, [sp, #4]\n    lsl r1, r6, #0x10\n    lsl r2, r2, #0x10\n    mov r3, #0x16\n    ldr r0, [r4, #8]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    neg r0, r7\n    mov r1, #3\n    bl _s32_div_f\n    lsl r0, r0, #0xc\n    mov r1, #0xc\n    bl _s32_div_f\n    mov r1, #1\n    lsl r1, r1, #0xc\n    sub r0, r1, r0\n    bl _fflt\n    ldr r1, _022618C0 ; =0x45800000\n    bl _fdiv\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    add r2, r1, #0\n    bl ManagedSprite_SetAffineScale\n    add r1, r5, #0\n    add r1, #0xf4\n    ldrb r1, [r1]\n    add r0, r5, #0\n    add r0, #0xf3\n    lsl r2, r1, #2\n    ldr r1, _022618BC ; =ov93_02262CC4\n    ldrb r0, [r0]\n    ldrb r1, [r1, r2]\n    sub r1, r1, #1\n    cmp r0, r1\n    bne _02261896\n    add r2, r4, #0\n    ldr r0, [sp]\n    add r1, r4, #0\n    add r2, #0x30\n    bl ov93_0226249C\n    add r5, #0xe4\n    ldr r1, [r5]\n    ldr r0, [r4, #0xc]\n    add r0, r1, r0\n    mov r1, #0x5a\n    asr r0, r0, #0xc\n    lsl r1, r1, #2\n    bl _s32_div_f\n    cmp r1, #0xb4\n    bne _022618B0\n    mov r0, #1\n    b _022618B2\n    mov r0, #0\n    strb r0, [r4, #0x15]\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022618BC: .word ov93_02262CC4\n    _022618C0: .word 0x45800000"
    );
    #endif
}

void ov93_022618C4(void) {
    /* Original at 0x022618C4 */
    /* Requires manual decompilation - 342 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r2, #0\n    ldrb r0, [r4, #0x11]\n    add r5, r1, #0\n    cmp r0, #3\n    bls _022618D4\n    b _02261BA2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022618E0: ; jump table\n    ldr r0, _02261BA8 ; =0x00000593\n    bl PlaySE\n    add r1, sp, #8\n    mov r3, #0x16\n    ldr r0, [r4]\n    add r1, #2\n    add r2, sp, #8\n    lsl r3, r3, #0x10\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    add r3, sp, #4\n    mov r2, #4\n    ldrsh r2, [r3, r2]\n    mov r1, #6\n    ldrsh r1, [r3, r1]\n    sub r2, #0x20\n    lsl r2, r2, #0x10\n    mov r3, #0x16\n    ldr r0, [r4, #4]\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [r4, #4]\n    mov r1, #0x21\n    bl ManagedSprite_SetAnim\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    ldrb r1, [r4, #0x14]\n    ldr r0, [r4]\n    lsl r2, r1, #1\n    ldr r1, _02261BAC ; =ov93_02262C7A\n    ldrh r1, [r1, r2]\n    add r1, r1, #2\n    bl ManagedSprite_SetAnim\n    add r0, r5, #0\n    add r0, #0xf4\n    ldrb r0, [r0]\n    ldr r1, _02261BB0 ; =ov93_02262CC6\n    add r5, #0xf4\n    lsl r0, r0, #2\n    ldrb r0, [r1, r0]\n    strb r0, [r4, #0x12]\n    ldrb r0, [r5]\n    lsl r0, r0, #2\n    ldrb r0, [r1, r0]\n    lsr r0, r0, #1\n    strb r0, [r4, #0x13]\n    ldrb r0, [r4, #0x11]\n    add r0, r0, #1\n    strb r0, [r4, #0x11]\n    b _02261BA2\n    ldrb r1, [r4, #0x12]\n    ldrb r0, [r4, #0x13]\n    cmp r1, r0\n    bne _02261984\n    ldrb r1, [r4, #0x14]\n    ldr r0, [r4]\n    lsl r2, r1, #1\n    ldr r1, _02261BAC ; =ov93_02262C7A\n    ldrh r1, [r1, r2]\n    add r1, r1, #1\n    bl ManagedSprite_SetAnim\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r1, #1\n    ldr r0, [r4, #4]\n    lsl r1, r1, #0xe\n    bl ManagedSprite_TickNFrames\n    ldrb r0, [r4, #0x12]\n    cmp r0, #0\n    bne _022619A8\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldrb r1, [r4, #0x14]\n    ldr r0, [r4]\n    lsl r2, r1, #1\n    ldr r1, _02261BAC ; =ov93_02262C7A\n    ldrh r1, [r1, r2]\n    bl ManagedSprite_SetAnim\n    ldrb r0, [r4, #0x11]\n    add r0, r0, #1\n    strb r0, [r4, #0x11]\n    b _02261BA2\n    sub r0, r0, #1\n    strb r0, [r4, #0x12]\n    b _02261BA2\n    add r0, r5, #0\n    add r0, #0xf2\n    ldrb r0, [r0]\n    mov r2, #0\n    cmp r0, #0\n    bne _022619E0\n    add r0, r5, #0\n    add r0, #0xf4\n    ldrb r0, [r0]\n    add r3, r5, #0\n    add r3, #0xf3\n    lsl r1, r0, #2\n    ldr r0, _02261BB4 ; =ov93_02262CC4\n    ldrb r3, [r3]\n    ldrb r0, [r0, r1]\n    add r5, #0xf0\n    sub r3, r0, r3\n    add r3, r2, r3\n    ldr r2, _02261BB8 ; =ov93_02262CC5\n    ldrb r1, [r2, r1]\n    add r1, r3, r1\n    add r6, r1, r0\n    ldrb r0, [r5]\n    add r5, r0, #2\n    b _02261A0C\n    add r1, r2, r0\n    add r0, r5, #0\n    add r0, #0xf0\n    ldrb r0, [r0]\n    cmp r0, #0xc\n    blo _022619FE\n    add r5, #0xf4\n    ldrb r0, [r5]\n    mov r5, #1\n    add r0, r0, #1\n    lsl r2, r0, #2\n    ldr r0, _02261BB4 ; =ov93_02262CC4\n    ldrb r0, [r0, r2]\n    add r6, r1, r0\n    b _02261A0C\n    add r5, #0xf4\n    ldrb r2, [r5]\n    add r5, r0, #1\n    lsl r3, r2, #2\n    ldr r2, _02261BB4 ; =ov93_02262CC4\n    ldrb r2, [r2, r3]\n    add r6, r1, r2\n    mov r1, #0x1e\n    ldr r0, [r4, #0xc]\n    lsl r1, r1, #0xc\n    bl _s32_div_f\n    add r0, r5, r0\n    mov r1, #0xc\n    bl _s32_div_f\n    add r5, r1, #0\n    mov r0, #0x1e\n    lsl r0, r0, #0xc\n    add r7, r5, #0\n    mul r7, r0\n    add r0, r7, #0\n    bl GF_SinDegFX32\n    add r5, r0, #0\n    add r0, r7, #0\n    bl GF_CosDegFX32\n    str r0, [sp]\n    add r1, sp, #4\n    mov r3, #0x16\n    ldr r0, [r4]\n    add r1, #2\n    add r2, sp, #4\n    lsl r3, r3, #0x10\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    add r1, sp, #4\n    mov r3, #0\n    ldrsh r0, [r1, r3]\n    mov r2, #0x4c\n    add r0, #0x18\n    strh r0, [r1]\n    mov r0, #2\n    ldrsh r7, [r1, r0]\n    asr r1, r5, #0x1f\n    add r0, r5, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    add r1, #0x80\n    lsl r0, r1, #0x10\n    asr r0, r0, #0x10\n    sub r0, r0, r7\n    lsl r0, r0, #0xc\n    add r1, r6, #0\n    bl _s32_div_f\n    str r0, [r4, #0x20]\n    add r0, sp, #4\n    mov r3, #0\n    ldrsh r5, [r0, r3]\n    ldr r0, [sp]\n    mov r2, #0x44\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    add r2, r0, #0\n    mov r0, #2\n    mov r3, #0\n    lsl r0, r0, #0xa\n    add r0, r2, r0\n    adc r1, r3\n    lsr r2, r0, #0xc\n    lsl r1, r1, #0x14\n    orr r2, r1\n    mov r0, #0x62\n    sub r0, r0, r2\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    sub r0, r0, r5\n    lsl r0, r0, #0xc\n    add r1, r6, #0\n    bl _s32_div_f\n    str r0, [r4, #0x24]\n    lsl r0, r7, #0xc\n    str r0, [r4, #0x28]\n    lsl r0, r5, #0xc\n    str r0, [r4, #0x2c]\n    strb r6, [r4, #0x12]\n    str r6, [r4, #0x18]\n    ldrb r0, [r4, #0x11]\n    add r0, r0, #1\n    strb r0, [r4, #0x11]\n    ldr r1, [r4, #0x28]\n    ldr r0, [r4, #0x20]\n    add r0, r1, r0\n    str r0, [r4, #0x28]\n    ldr r1, [r4, #0x2c]\n    ldr r0, [r4, #0x24]\n    add r0, r1, r0\n    str r0, [r4, #0x2c]\n    ldrb r1, [r4, #0x12]\n    mov r0, #0xb4\n    mul r0, r1\n    ldr r1, [r4, #0x18]\n    lsl r0, r0, #0xc\n    bl _s32_div_f\n    bl GF_SinDegFX32\n    mov r2, #3\n    asr r1, r0, #0x1f\n    lsl r2, r2, #0xe\n    mov r3, #0\n    bl _ll_mul\n    add r5, r0, #0\n    ldr r2, [r4, #0x28]\n    add r6, r1, #0\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    ldr r2, [r4, #0x2c]\n    lsl r1, r1, #4\n    asr r3, r2, #0xb\n    lsr r3, r3, #0x14\n    add r3, r2, r3\n    mov r2, #2\n    asr r3, r3, #0xc\n    mov r7, #0\n    lsl r2, r2, #0xa\n    asr r1, r1, #0x10\n    sub r3, #0x18\n    add r2, r5, r2\n    adc r6, r7\n    lsl r5, r6, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r5\n    neg r5, r2\n    asr r2, r5, #0xb\n    lsr r2, r2, #0x14\n    add r2, r5, r2\n    asr r2, r2, #0xc\n    add r2, r3, r2\n    lsl r2, r2, #0x10\n    mov r3, #0x16\n    ldr r0, [r4]\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    mov r0, #0xb\n    ldr r1, [r4, #0x18]\n    lsl r0, r0, #0xe\n    bl _s32_div_f\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl ManagedSprite_TickNFrames\n    ldr r2, [r4, #0x28]\n    ldr r3, [r4, #0x2c]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r2, r3, #0xb\n    lsr r2, r2, #0x14\n    add r2, r3, r2\n    lsl r1, r1, #4\n    lsl r2, r2, #4\n    mov r3, #0x16\n    ldr r0, [r4, #8]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldrb r0, [r4, #0x12]\n    sub r0, r0, #1\n    strb r0, [r4, #0x12]\n    ldrb r0, [r4, #0x12]\n    cmp r0, #0\n    bne _02261BA2\n    ldrb r1, [r4, #0x14]\n    ldr r0, [r4]\n    lsl r2, r1, #1\n    ldr r1, _02261BAC ; =ov93_02262C7A\n    ldrh r1, [r1, r2]\n    bl ManagedSprite_SetAnim\n    ldr r0, [r4]\n    add r1, r7, #0\n    bl ManagedSprite_SetAnimationFrame\n    add r0, r4, #0\n    mov r1, #2\n    bl ov93_02261528\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02261BA8: .word 0x00000593\n    _02261BAC: .word ov93_02262C7A\n    _02261BB0: .word ov93_02262CC6\n    _02261BB4: .word ov93_02262CC4\n    _02261BB8: .word ov93_02262CC5"
    );
    #endif
}

void ov93_02261BBC(void) {
    /* Original at 0x02261BBC */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    ldr r6, _02261C34 ; =ov93_02262E9C\n    add r5, r0, #0\n    add r4, r1, #0\n    add r3, sp, #0\n    mov r2, #6\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02261BCA\n    ldr r0, [r6]\n    mov r7, #0x16\n    str r0, [r3]\n    mov r6, #0\n    lsl r7, r7, #0x10\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    add r2, sp, #0\n    bl SpriteSystem_NewSprite\n    mov r1, #0\n    str r0, [r4]\n    add r2, r1, #0\n    add r3, r7, #0\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [r4]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    ldr r2, _02261C38 ; =ov93_02262ED0\n    bl SpriteSystem_NewSprite\n    mov r1, #0\n    str r0, [r4, #4]\n    add r2, r1, #0\n    add r3, r7, #0\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [r4, #4]\n    mov r1, #0x21\n    bl ManagedSprite_SetAnim\n    ldr r0, [r4, #4]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r6, r6, #1\n    add r4, #0x18\n    cmp r6, #3\n    blt _02261BDC\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    _02261C34: .word ov93_02262E9C\n    _02261C38: .word ov93_02262ED0"
    );
    #endif
}

void ov93_02261C3C(void) {
    /* Original at 0x02261C3C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r4, #0\n    ldr r0, [r5]\n    bl Sprite_DeleteAndFreeResources\n    ldr r0, [r5, #4]\n    bl Sprite_DeleteAndFreeResources\n    add r4, r4, #1\n    add r5, #0x18\n    cmp r4, #3\n    blt _02261C42\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov93_02261C58(void) {
    /* Original at 0x02261C58 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    add r5, r2, #0\n    str r3, [sp]\n    ldr r4, _02261D04 ; =0\n    beq _02261D02\n    bl sub_0203769C\n    ldr r1, [sp]\n    cmp r1, r0\n    beq _02261D02\n    add r0, r4, #0\n    add r2, r7, #0\n    ldrb r1, [r2, #0x15]\n    cmp r1, #0\n    bne _02261C82\n    mov r1, #0x18\n    mul r1, r0\n    add r4, r7, r1\n    b _02261C8A\n    add r0, r0, #1\n    add r2, #0x18\n    cmp r0, #3\n    blt _02261C74\n    cmp r4, #0\n    beq _02261D02\n    ldr r1, [sp]\n    add r0, r6, #0\n    bl ov93_0225E3C4\n    ldr r1, [r6]\n    ldr r2, _02261D08 ; =ov93_02262D2C\n    add r1, #0x30\n    ldrb r1, [r1]\n    add r7, r0, #0\n    ldr r0, [r4]\n    lsl r3, r1, #3\n    lsl r1, r7, #1\n    add r2, r2, r3\n    ldrh r1, [r1, r2]\n    bl ManagedSprite_SetPaletteOverride\n    ldr r1, _02261D0C ; =ov93_02262C7A\n    lsl r2, r5, #1\n    ldrh r1, [r1, r2]\n    ldr r0, [r4]\n    bl ManagedSprite_SetAnim\n    ldr r0, [r6]\n    mov r3, #0x16\n    add r0, #0x30\n    ldrb r0, [r0]\n    lsl r3, r3, #0x10\n    lsl r1, r0, #2\n    ldr r0, _02261D10 ; =ov93_02262CD8\n    add r0, r0, r1\n    ldrb r0, [r7, r0]\n    ldr r1, _02261D14 ; =ov93_02262CB4\n    lsl r2, r0, #2\n    ldr r0, _02261D18 ; =ov93_02262CB6\n    ldrsh r1, [r1, r2]\n    ldrsh r0, [r0, r2]\n    mov r2, #0x10\n    sub r0, #0x18\n    strh r0, [r4, #0x10]\n    ldrsh r2, [r4, r2]\n    ldr r0, [r4]\n    sub r2, #0x60\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    ldr r0, [sp, #0x18]\n    strb r5, [r4, #0x12]\n    sub r0, #0xc\n    strh r0, [r4, #0x16]\n    mov r0, #0\n    strb r0, [r4, #0x13]\n    mov r0, #1\n    strb r0, [r4, #0x15]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02261D04: .word 0\n    _02261D08: .word ov93_02262D2C\n    _02261D0C: .word ov93_02262C7A\n    _02261D10: .word ov93_02262CD8\n    _02261D14: .word ov93_02262CB4\n    _02261D18: .word ov93_02262CB6"
    );
    #endif
}

void ov93_02261D1C(void) {
    /* Original at 0x02261D1C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldrb r0, [r5, #0x15]\n    cmp r0, #1\n    bne _02261D32\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov93_02261D3C\n    add r4, r4, #1\n    add r5, #0x18\n    cmp r4, #3\n    blt _02261D24\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov93_02261D3C(void) {
    /* Original at 0x02261D3C */
    /* Requires manual decompilation - 171 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r1, #0\n    ldrb r0, [r4, #0x13]\n    cmp r0, #4\n    bls _02261D4A\n    b _02261E88\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02261D56: ; jump table\n    add r1, sp, #0\n    mov r3, #0x16\n    ldr r0, [r4]\n    add r1, #2\n    add r2, sp, #0\n    lsl r3, r3, #0x10\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    add r1, sp, #0\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    lsl r0, r0, #0xc\n    str r0, [r4, #8]\n    mov r0, #0\n    ldrsh r0, [r1, r0]\n    lsl r0, r0, #0xc\n    str r0, [r4, #0xc]\n    ldrb r0, [r4, #0x13]\n    add r0, r0, #1\n    strb r0, [r4, #0x13]\n    mov r0, #0x16\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _02261D96\n    sub r0, r0, #1\n    strh r0, [r4, #0x16]\n    b _02261E88\n    ldr r0, [r4]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #2\n    ldr r1, [r4, #0xc]\n    lsl r0, r0, #0xe\n    add r2, r1, r0\n    str r2, [r4, #0xc]\n    mov r0, #0x10\n    ldrsh r1, [r4, r0]\n    asr r0, r2, #0xb\n    lsr r0, r0, #0x14\n    add r0, r2, r0\n    asr r0, r0, #0xc\n    cmp r0, r1\n    blt _02261E88\n    lsl r0, r1, #0xc\n    str r0, [r4, #0xc]\n    ldrb r0, [r4, #0x13]\n    add r0, r0, #1\n    strb r0, [r4, #0x13]\n    b _02261E88\n    add r1, sp, #0\n    mov r3, #0x16\n    ldr r0, [r4]\n    add r1, #2\n    add r2, sp, #0\n    lsl r3, r3, #0x10\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    sub r2, #0x20\n    lsl r2, r2, #0x10\n    mov r3, #0x16\n    ldr r0, [r4, #4]\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [r4, #4]\n    mov r1, #0x21\n    bl ManagedSprite_SetAnim\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _02261EB0 ; =0x00000593\n    bl PlaySE\n    ldrb r1, [r4, #0x12]\n    ldr r0, [r4]\n    lsl r2, r1, #1\n    ldr r1, _02261EB4 ; =ov93_02262C7A\n    ldrh r1, [r1, r2]\n    add r1, r1, #2\n    bl ManagedSprite_SetAnim\n    mov r0, #8\n    strb r0, [r4, #0x14]\n    ldrb r0, [r4, #0x13]\n    add r0, r0, #1\n    strb r0, [r4, #0x13]\n    b _02261E88\n    ldrb r0, [r4, #0x14]\n    sub r0, r0, #1\n    strb r0, [r4, #0x14]\n    ldrb r0, [r4, #0x14]\n    cmp r0, #3\n    bne _02261E36\n    mov r1, #1\n    ldr r0, [r4, #4]\n    lsl r1, r1, #0xe\n    bl ManagedSprite_TickNFrames\n    ldrb r0, [r4, #0x14]\n    cmp r0, #0\n    bne _02261E88\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldrb r1, [r4, #0x12]\n    ldr r0, [r4]\n    lsl r2, r1, #1\n    ldr r1, _02261EB4 ; =ov93_02262C7A\n    ldrh r1, [r1, r2]\n    bl ManagedSprite_SetAnim\n    ldrb r0, [r4, #0x13]\n    add r0, r0, #1\n    strb r0, [r4, #0x13]\n    b _02261E88\n    mov r0, #2\n    ldr r1, [r4, #0xc]\n    lsl r0, r0, #0xe\n    sub r1, r1, r0\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    str r1, [r4, #0xc]\n    asr r1, r0, #0xc\n    mov r0, #0x10\n    ldrsh r0, [r4, r0]\n    sub r0, #0x60\n    cmp r1, r0\n    bgt _02261E88\n    ldr r0, [r4]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0\n    strb r0, [r4, #0x13]\n    add sp, #4\n    strb r0, [r4, #0x15]\n    pop {r3, r4, pc}\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r2, r3, #0xb\n    lsr r2, r2, #0x14\n    add r2, r3, r2\n    lsl r1, r1, #4\n    lsl r2, r2, #4\n    mov r3, #0x16\n    ldr r0, [r4]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    mov r0, #1\n    add sp, #4\n    pop {r3, r4, pc}\n    _02261EB0: .word 0x00000593\n    _02261EB4: .word ov93_02262C7A"
    );
    #endif
}

void ov93_02261EB8(void) {
    /* Original at 0x02261EB8 */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x70\n    str r0, [sp, #0x18]\n    str r1, [sp, #0x1c]\n    str r2, [sp, #0x20]\n    ldr r0, [sp, #0x8c]\n    ldr r1, [sp, #0x88]\n    mov r2, #0\n    add r5, r3, #0\n    ldr r4, [sp, #0x9c]\n    bl FontID_String_GetWidthMultiline\n    add r7, r0, #0\n    asr r1, r7, #2\n    lsr r1, r1, #0x1d\n    add r1, r7, r1\n    asr r6, r1, #3\n    mov r1, #8\n    bl FX_ModS32\n    cmp r0, #0\n    beq _02261EE6\n    add r6, r6, #1\n    add r0, sp, #0x30\n    bl InitWindow\n    mov r0, #0\n    ldr r3, [sp, #0xb0]\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsl r2, r6, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x18]\n    add r1, sp, #0x30\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl AddTextWindowTopLeftCorner\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x90]\n    ldr r1, [sp, #0x8c]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    str r3, [sp, #0x10]\n    ldr r2, [sp, #0x88]\n    add r0, sp, #0x30\n    str r3, [sp, #0x14]\n    bl AddTextPrinterParameterizedWithColorAndSpacing\n    add r0, sp, #0x30\n    mov r1, #1\n    mov r2, #0x75\n    bl sub_02013688\n    mov r1, #1\n    add r2, r1, #0\n    add r3, sp, #0x24\n    bl sub_02021AC8\n    ldr r0, [sp, #0xa4]\n    cmp r0, #1\n    bne _02261F42\n    lsr r0, r7, #0x1f\n    add r0, r7, r0\n    asr r0, r0, #1\n    sub r4, r4, r0\n    ldr r0, [sp, #0x20]\n    str r0, [sp, #0x40]\n    add r0, sp, #0x30\n    str r0, [sp, #0x44]\n    ldr r0, [sp, #0x1c]\n    bl SpriteManager_GetSpriteList\n    str r0, [sp, #0x48]\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x98]\n    bl SpriteManager_FindPlttResourceProxy\n    str r0, [sp, #0x4c]\n    mov r0, #0\n    str r0, [sp, #0x50]\n    ldr r0, [sp, #0x28]\n    str r4, [sp, #0x58]\n    str r0, [sp, #0x54]\n    ldr r0, [sp, #0xa0]\n    str r0, [sp, #0x5c]\n    ldr r0, [sp, #0xa8]\n    str r0, [sp, #0x60]\n    ldr r0, [sp, #0xac]\n    str r0, [sp, #0x64]\n    mov r0, #1\n    str r0, [sp, #0x68]\n    mov r0, #0x75\n    str r0, [sp, #0x6c]\n    add r0, sp, #0x40\n    bl sub_020135D8\n    ldr r1, [sp, #0x94]\n    add r6, r0, #0\n    cmp r1, #0\n    beq _02261F8C\n    bl sub_020138B0\n    ldr r2, [sp, #0xa0]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl sub_020136B4\n    add r0, sp, #0x30\n    bl RemoveWindow\n    str r6, [r5]\n    add r3, sp, #0x24\n    ldmia r3!, {r0, r1}\n    add r2, r5, #4\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    strh r7, [r5, #0x10]\n    add sp, #0x70\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov93_02261FB0(void) {
    /* Original at 0x02261FB0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl FontOAM_Delete\n    add r0, r4, #4\n    bl sub_02021B5C\n    mov r0, #0\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov93_02261FC8(void) {
    /* Original at 0x02261FC8 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    mov r7, #0\n    add r5, r0, #0\n    ldr r0, [sp]\n    add r1, r0, r7\n    mov r0, #6\n    lsl r0, r0, #6\n    ldrb r1, [r1, r0]\n    cmp r1, #0x40\n    bge _02261FEA\n    mov r0, #0x40\n    sub r6, r0, r1\n    add r4, r6, #0\n    sub r4, #0x50\n    b _02262004\n    cmp r1, #0x80\n    bge _02261FFA\n    mov r0, #0xa0\n    sub r4, r0, r1\n    sub r4, #0x10\n    add r6, r4, #0\n    sub r6, #0x50\n    b _02262004\n    sub r1, #0xa0\n    mov r0, #0x40\n    sub r6, r0, r1\n    add r4, r6, #0\n    sub r4, #0x50\n    ldr r0, [r5, #4]\n    add r1, sp, #8\n    add r2, sp, #4\n    bl sub_02013794\n    mov r2, #0xa8\n    ldr r0, [r5, #4]\n    ldr r1, [sp, #8]\n    sub r2, r2, r6\n    bl sub_020136B4\n    mov r2, #0xa8\n    ldr r0, [r5, #0x18]\n    ldr r1, [sp, #8]\n    sub r2, r2, r4\n    bl sub_020136B4\n    add r7, r7, #1\n    add r5, #0x28\n    cmp r7, #6\n    blt _02261FD2\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov93_02262034(void) {
    /* Original at 0x02262034 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, _02262094 ; =0x0000019E\n    add r4, r1, #0\n    ldrsb r1, [r4, r0]\n    cmp r1, #0\n    ble _02262046\n    sub r1, r1, #1\n    strb r1, [r4, r0]\n    pop {r3, r4, r5, pc}\n    add r0, r0, #2\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _02262054\n    cmp r0, #1\n    beq _02262070\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov93_02262108\n    cmp r0, #1\n    bne _02262066\n    add r0, r4, #0\n    bl ov93_022620D4\n    pop {r3, r4, r5, pc}\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    bl ov93_02262130\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov93_02261FC8\n    cmp r5, #1\n    bne _02262092\n    ldr r0, _02262094 ; =0x0000019E\n    mov r1, #0xf\n    strb r1, [r4, r0]\n    add r1, r0, #2\n    ldrb r1, [r4, r1]\n    add r0, r0, #2\n    sub r1, r1, #1\n    strb r1, [r4, r0]\n    pop {r3, r4, r5, pc}\n    _02262094: .word 0x0000019E"
    );
    #endif
}

void ov93_02262098(void) {
    /* Original at 0x02262098 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r5, _022620D0 ; =0x000186A0\n    add r7, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    add r0, r6, #0\n    add r1, r5, #0\n    bl _s32_div_f\n    add r3, r0, #0\n    mov r0, #0x63\n    lsl r2, r3, #4\n    add r1, r7, r4\n    lsl r0, r0, #2\n    strb r2, [r1, r0]\n    add r0, r3, #0\n    mul r0, r5\n    sub r6, r6, r0\n    add r0, r5, #0\n    mov r1, #0xa\n    bl _s32_div_f\n    add r4, r4, #1\n    add r5, r0, #0\n    cmp r4, #6\n    blt _022620A2\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022620D0: .word 0x000186A0"
    );
    #endif
}

void ov93_022620D4(void) {
    /* Original at 0x022620D4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    mov r1, #0x66\n    mov r5, #0\n    lsl r1, r1, #2\n    add r3, r5, #0\n    sub r2, r1, #6\n    mov r6, #0x63\n    add r4, r0, r5\n    lsl r6, r6, #2\n    ldrb r7, [r4, r6]\n    sub r6, r6, #6\n    strb r7, [r4, r6]\n    mov r6, #5\n    sub r6, r6, r5\n    lsl r6, r6, #1\n    strb r6, [r4, r1]\n    add r5, r5, #1\n    strb r3, [r4, r2]\n    cmp r5, #6\n    blt _022620E0\n    ldr r1, _02262104 ; =0x0000019F\n    strb r3, [r0, r1]\n    pop {r4, r5, r6, r7}\n    bx lr\n    _02262104: .word 0x0000019F"
    );
    #endif
}

void ov93_02262108(void) {
    /* Original at 0x02262108 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r1, #6\n    lsl r1, r1, #6\n    mov r5, #0\n    add r2, r1, #6\n    add r3, r0, r5\n    ldrb r4, [r3, r1]\n    ldrb r3, [r3, r2]\n    cmp r4, r3\n    beq _02262122\n    mov r0, #0\n    pop {r4, r5}\n    bx lr\n    add r5, r5, #1\n    cmp r5, #6\n    blt _02262112\n    mov r0, #1\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov93_02262130(void) {
    /* Original at 0x02262130 */
    /* Requires manual decompilation - 124 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _02262224 ; =0x0000019F\n    mov r7, #5\n    ldrb r0, [r6, r0]\n    cmp r0, #6\n    bls _02262142\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r4, #0\n    str r4, [sp]\n    ldr r0, [sp]\n    add r5, r6, r7\n    mov ip, r0\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldrsb r0, [r5, r0]\n    cmp r0, #0\n    ble _0226216A\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldrsb r0, [r5, r0]\n    sub r1, r0, #1\n    mov r0, #0x66\n    lsl r0, r0, #2\n    strb r1, [r5, r0]\n    mov r0, #0\n    str r0, [sp]\n    b _02262216\n    ldr r0, _02262228 ; =0x00000192\n    ldrb r0, [r5, r0]\n    cmp r0, #1\n    bls _02262186\n    mov r0, #6\n    ldr r1, _0226222C ; =0x00000186\n    lsl r0, r0, #6\n    ldrb r0, [r5, r0]\n    ldrb r1, [r5, r1]\n    cmp r0, r1\n    bne _02262186\n    mov r0, #1\n    str r0, [sp]\n    b _02262216\n    mov r0, #0\n    mov r1, #6\n    str r0, [sp]\n    mov r0, #6\n    lsl r1, r1, #6\n    lsl r0, r0, #6\n    ldrb r2, [r5, r1]\n    ldrb r0, [r5, r0]\n    add r2, #0x17\n    strb r2, [r5, r1]\n    add r1, r1, #6\n    ldrb r3, [r5, r1]\n    add r1, r3, #0\n    add r1, #0xa0\n    cmp r0, r3\n    bgt _022621B0\n    mov r2, #6\n    lsl r2, r2, #6\n    ldrb r2, [r5, r2]\n    cmp r2, r3\n    bhs _022621BE\n    cmp r0, r1\n    bgt _02262204\n    mov r0, #6\n    lsl r0, r0, #6\n    ldrb r0, [r5, r0]\n    cmp r0, r1\n    blt _02262204\n    ldr r0, _02262228 ; =0x00000192\n    ldrb r0, [r5, r0]\n    cmp r0, #1\n    bhs _022621D2\n    ldr r0, _02262228 ; =0x00000192\n    ldrb r0, [r5, r0]\n    add r1, r0, #1\n    ldr r0, _02262228 ; =0x00000192\n    strb r1, [r5, r0]\n    b _02262204\n    cmp r7, #5\n    beq _022621DC\n    mov r0, ip\n    cmp r0, #1\n    bne _02262204\n    ldr r0, _02262228 ; =0x00000192\n    ldrb r0, [r5, r0]\n    add r1, r0, #1\n    ldr r0, _02262228 ; =0x00000192\n    strb r1, [r5, r0]\n    sub r0, #0xc\n    ldrb r1, [r5, r0]\n    mov r0, #6\n    lsl r0, r0, #6\n    strb r1, [r5, r0]\n    add r0, #0x1f\n    ldrb r0, [r6, r0]\n    add r1, r0, #1\n    ldr r0, _02262224 ; =0x0000019F\n    strb r1, [r6, r0]\n    ldrb r0, [r6, r0]\n    cmp r0, #6\n    blo _02262204\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #6\n    lsl r0, r0, #6\n    ldrb r0, [r5, r0]\n    mov r1, #0xa0\n    bl _s32_div_f\n    mov r0, #6\n    lsl r0, r0, #6\n    strb r1, [r5, r0]\n    add r4, r4, #1\n    sub r7, r7, #1\n    cmp r4, #6\n    blt _02262146\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02262224: .word 0x0000019F\n    _02262228: .word 0x00000192\n    _0226222C: .word 0x00000186"
    );
    #endif
}

void ov93_02262230(void) {
    /* Original at 0x02262230 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r1, r0, #0\n    ldr r0, [r1, #0x24]\n    ldr r1, [r1, #0x28]\n    ldr r2, _0226224C ; =ov93_02262F6C\n    bl SpriteSystem_NewSprite\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl Sprite_TickFrame\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _0226224C: .word ov93_02262F6C"
    );
    #endif
}

void ov93_02262250(void) {
    /* Original at 0x02262250 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r7, r0, #0\n    ldr r0, _022622FC ; =0x00003848\n    add r6, r7, #0\n    ldr r0, [r7, r0]\n    add r4, r7, #0\n    str r0, [sp, #0x2c]\n    mov r0, #5\n    str r0, [sp, #0x30]\n    ldr r0, _02262300 ; =0x000016B0\n    add r6, #0x64\n    add r5, r7, r0\n    add r4, #0xc8\n    add r5, #0x64\n    ldr r0, _02262300 ; =0x000016B0\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    beq _0226227A\n    bl GF_AssertFail\n    ldr r0, [sp, #0x2c]\n    mov r1, #0xa\n    bl _u32_div_f\n    add r0, r7, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    add r1, r1, #4\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x2c]\n    mov r1, #0xa\n    bl _u32_div_f\n    str r0, [sp, #0x2c]\n    ldr r0, _02262304 ; =0x000015AC\n    add r1, sp, #0x3c\n    ldr r0, [r4, r0]\n    add r2, sp, #0x38\n    bl sub_02013794\n    ldr r0, [sp, #0x34]\n    add r2, r7, #0\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _02262308 ; =0x000E0F00\n    add r2, #0x90\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, _0226230C ; =0x00002713\n    add r3, r5, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x3c]\n    str r0, [sp, #0x14]\n    mov r0, #0xa8\n    str r0, [sp, #0x18]\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    mov r0, #1\n    str r0, [sp, #0x20]\n    mov r0, #0xc\n    str r0, [sp, #0x24]\n    mov r0, #2\n    str r0, [sp, #0x28]\n    ldr r0, [r7, #0x2c]\n    ldr r1, [r7, #0x28]\n    ldr r2, [r2]\n    bl ov93_02261EB8\n    ldr r0, [sp, #0x34]\n    bl String_Delete\n    ldr r0, [sp, #0x30]\n    sub r6, #0x14\n    sub r4, #0x28\n    sub r5, #0x14\n    sub r0, r0, #1\n    str r0, [sp, #0x30]\n    bpl _0226226E\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022622FC: .word 0x00003848\n    _02262300: .word 0x000016B0\n    _02262304: .word 0x000015AC\n    _02262308: .word 0x000E0F00\n    _0226230C: .word 0x00002713"
    );
    #endif
}

void ov93_02262310(void) {
    /* Original at 0x02262310 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _02262334 ; =0x000016B0\n    mov r6, #0\n    add r4, r5, r0\n    add r7, r0, #0\n    ldr r0, [r5, r7]\n    cmp r0, #0\n    beq _02262328\n    add r0, r4, #0\n    bl ov93_02261FB0\n    add r6, r6, #1\n    add r5, #0x14\n    add r4, #0x14\n    cmp r6, #6\n    blt _0226231C\n    pop {r3, r4, r5, r6, r7, pc}\n    _02262334: .word 0x000016B0"
    );
    #endif
}

void ov93_02262338(void) {
    Sprite_DeleteAndFreeResources();
}

void ov93_02262344(void) {
    /* Original at 0x02262344 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r1, r0, #0\n    ldr r0, [r1, #0x24]\n    ldr r1, [r1, #0x28]\n    ldr r2, _02262364 ; =ov93_02262FA0\n    bl SpriteSystem_NewSprite\n    add r4, r0, #0\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r4]\n    bl Sprite_TickFrame\n    add r0, r4, #0\n    pop {r4, pc}\n    _02262364: .word ov93_02262FA0"
    );
    #endif
}

void ov93_02262368(void) {
    Sprite_DeleteAndFreeResources();
}

void ov93_02262374(void) {
    /* Original at 0x02262374 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    mov r0, #4\n    ldrsh r1, [r4, r0]\n    cmp r1, #0xa\n    bhi _0226243E\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0226238C: ; jump table\n    mov r3, #0x16\n    ldr r0, [r4]\n    mov r1, #0x80\n    mov r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [r4]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    b _0226243E\n    mov r1, #6\n    ldrsh r2, [r4, r1]\n    add r2, r2, #1\n    strh r2, [r4, #6]\n    ldrsh r1, [r4, r1]\n    cmp r1, #0xf\n    ble _0226243E\n    mov r1, #0\n    strh r1, [r4, #6]\n    mov r1, #1\n    str r1, [r4, #0x14]\n    str r1, [r4, #0x18]\n    mov r1, #0x80\n    str r1, [r4, #0xc]\n    mov r1, #0x20\n    str r1, [r4, #0x10]\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    b _0226243E\n    mov r1, #0\n    str r1, [r4, #0x18]\n    ldr r0, [r4, #0x10]\n    mov r2, #6\n    add r0, r0, #6\n    str r0, [r4, #0x10]\n    ldr r0, [r4]\n    bl ManagedSprite_OffsetPositionXY\n    ldr r0, [r4, #0x10]\n    cmp r0, #0x60\n    ble _0226243E\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    b _0226243E\n    mov r1, #0\n    str r1, [r4, #0x14]\n    ldr r0, [r4]\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    mov r0, #6\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #6]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0x1e\n    ble _0226243E\n    mov r0, #0\n    strh r0, [r4, #6]\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    b _0226243E\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov93_02262444(void) {
    /* Original at 0x02262444 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    mov r6, #0\n    ldr r0, [r7, #0x24]\n    ldr r1, [r7, #0x28]\n    ldr r2, _02262480 ; =ov93_02262F38\n    bl SpriteSystem_NewSprite\n    add r4, r0, #0\n    mov r1, #0x1b\n    bl ManagedSprite_SetAnim\n    add r0, r4, #0\n    mov r1, #1\n    bl ManagedSprite_SetOamMode\n    add r0, r4, #0\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r4]\n    bl Sprite_TickFrame\n    add r6, r6, #1\n    stmia r5!, {r4}\n    cmp r6, #2\n    blt _0226244C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02262480: .word ov93_02262F38"
    );
    #endif
}

void ov93_02262484(void) {
    Sprite_DeleteAndFreeResources(0);
}

void ov93_0226249C(void) {
    /* Original at 0x0226249C */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r0, [r1]\n    add r1, sp, #4\n    mov r3, #0x16\n    str r2, [sp]\n    add r1, #2\n    add r2, sp, #4\n    lsl r3, r3, #0x10\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    ldr r5, [sp]\n    mov r4, #0\n    add r6, sp, #4\n    mov r7, #1\n    mov r2, #0\n    ldrsh r2, [r6, r2]\n    mov r1, #2\n    mov r3, #0x16\n    add r2, #0x1c\n    lsl r2, r2, #0x10\n    ldrsh r1, [r6, r1]\n    ldr r0, [r5]\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [r5]\n    mov r1, #0x1b\n    bl ManagedSprite_SetAnim\n    ldr r0, [r5]\n    mov r1, #1\n    bl ManagedSprite_SetOamMode\n    ldr r0, [r5]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    bl LCRandom\n    lsr r1, r0, #0x1f\n    lsl r2, r0, #0x14\n    sub r2, r2, r1\n    mov r0, #0x14\n    ror r2, r0\n    mov r0, #1\n    add r1, r1, r2\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [r5, #8]\n    bl LCRandom\n    lsr r1, r0, #0x1f\n    lsl r2, r0, #0x16\n    sub r2, r2, r1\n    mov r0, #0x16\n    ror r2, r0\n    mov r0, #1\n    add r1, r1, r2\n    lsl r0, r0, #0xa\n    add r0, r1, r0\n    str r0, [r5, #0x10]\n    add r0, r4, #0\n    tst r0, r7\n    beq _0226252A\n    mov r0, #0\n    ldr r1, [r5, #8]\n    mvn r0, r0\n    mul r0, r1\n    str r0, [r5, #8]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _022624BA\n    ldr r0, [sp]\n    mov r1, #0\n    strb r1, [r0, #0x19]\n    mov r1, #1\n    strb r1, [r0, #0x18]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov93_02262540(void) {
    /* Original at 0x02262540 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r2, #0\n    ldrb r0, [r6, #0x18]\n    cmp r0, #0\n    beq _02262594\n    cmp r0, #1\n    bne _02262594\n    mov r4, #0\n    add r5, r6, #0\n    ldr r2, [r5, #0x10]\n    ldr r0, [r5]\n    ldr r1, [r5, #8]\n    neg r2, r2\n    bl ManagedSprite_AddSpritePrecisePositionXY\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _02262552\n    ldrb r0, [r6, #0x19]\n    add r0, r0, #1\n    strb r0, [r6, #0x19]\n    ldrb r0, [r6, #0x19]\n    cmp r0, #8\n    bls _02262594\n    mov r5, #0\n    add r4, r6, #0\n    add r7, r5, #0\n    ldr r0, [r4]\n    add r1, r7, #0\n    bl ManagedSprite_SetDrawFlag\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #2\n    blt _02262580\n    mov r0, #0\n    strb r0, [r6, #0x18]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov93_02262598(void) {
    /* Original at 0x02262598 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0xc\n    mov r2, #0x75\n    add r5, r0, #0\n    bl OverlayManager_CreateAndGetData\n    mov r1, #0\n    mov r2, #0xc\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    str r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov93_022625BC(void) {
    /* Original at 0x022625BC */
    /* Requires manual decompilation - 130 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, [r4]\n    add r1, r0, #0\n    add r1, #0x3d\n    ldrb r1, [r1]\n    cmp r1, #1\n    bne _02262642\n    add r1, r0, #0\n    add r1, #0x3e\n    ldrb r1, [r1]\n    cmp r1, #0\n    beq _022625E4\n    cmp r1, #1\n    beq _02262606\n    cmp r1, #2\n    b _0226261E\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _022625F0\n    bl sub_0200FB70\n    mov r0, #0\n    bl sub_0200FC20\n    ldr r1, [r4]\n    add r0, r1, #0\n    add r0, #0x3e\n    ldrb r0, [r0]\n    add r1, #0x3e\n    add r0, r0, #1\n    strb r0, [r1]\n    b _0226263E\n    bl ov90_02258B98\n    cmp r0, #1\n    bne _0226263E\n    ldr r1, [r4]\n    add r0, r1, #0\n    add r0, #0x3e\n    ldrb r0, [r0]\n    add r1, #0x3e\n    add r0, r0, #1\n    strb r0, [r1]\n    b _0226263E\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _0226262C\n    bl ov90_02258938\n    mov r0, #0\n    str r0, [r4, #4]\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0226263A\n    bl ov90_02258A04\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r1, [r5]\n    cmp r1, #5\n    bhi _022626E0\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02262654: ; jump table\n    add r0, #0x31\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0226266E\n    mov r0, #1\n    str r0, [r5]\n    b _022626E4\n    mov r0, #3\n    str r0, [r5]\n    b _022626E4\n    mov r1, #0x75\n    bl ov90_0225892C\n    str r0, [r4, #4]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _022626E4\n    ldr r0, [r4, #4]\n    bl ov90_022589BC\n    cmp r0, #1\n    bne _022626E4\n    ldr r0, [r4, #4]\n    bl ov90_022589CC\n    ldr r1, [r4]\n    str r0, [r1, #0x34]\n    ldr r0, [r4, #4]\n    bl ov90_02258938\n    mov r0, #0\n    str r0, [r4, #4]\n    mov r0, #5\n    str r0, [r5]\n    b _022626E4\n    add r1, r0, #0\n    add r1, #0x10\n    mov r2, #0x75\n    bl ov90_022589F8\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _022626E4\n    ldr r0, [r4, #8]\n    bl ov90_02258AA0\n    cmp r0, #1\n    bne _022626E4\n    ldr r0, [r4, #8]\n    bl ov90_02258AA4\n    ldr r1, [r4]\n    str r0, [r1, #0x38]\n    ldr r0, [r4, #8]\n    bl ov90_02258A04\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #5\n    str r0, [r5]\n    b _022626E4\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

u32 ov93_022626E8(void) {
    OverlayManager_GetData();
    OverlayManager_FreeData(r4);
    return 1;
}

void ov93_022626FC(void) {
    /* Original at 0x022626FC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02262708 ; =sub_0203410C\n    add r2, r0, #0\n    ldr r0, _0226270C ; =ov93_022630E4\n    mov r1, #4\n    bx r3\n    nop\n    _02262708: .word sub_0203410C\n    _0226270C: .word ov93_022630E4"
    );
    #endif
}

u8 ov93_02262710(void) {
    return 0x14;
}

u8 ov93_02262714(void) {
    return 4;
}

void ov93_02262718(void) {
    ov93_0225E144();
}

void ov93_02262724(void) {
    sub_02037030(0, 0x18, 1, 0x14);
}

void ov93_0226273C(void) {
    /* Original at 0x0226273C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0xbf\n    mov r1, #1\n    lsl r0, r0, #6\n    str r1, [r3, r0]\n    bx lr"
    );
    #endif
}

void ov93_02262748(void) {
    sub_02037030(0, 0x19, 1, 0);
}

void ov93_02262760(void) {
    /* Original at 0x02262760 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    ldr r3, [r4]\n    ldr r1, [r2]\n    add r5, r3, #0\n    add r5, #0x30\n    ldrb r5, [r5]\n    mov r2, #0\n    cmp r5, #0\n    ble _0226278E\n    add r6, r3, #0\n    add r6, #0x2c\n    ldrb r6, [r6]\n    cmp r0, r6\n    bne _02262786\n    lsl r0, r2, #2\n    add r0, r4, r0\n    str r1, [r0, #0xc]\n    b _0226278E\n    add r2, r2, #1\n    add r3, r3, #1\n    cmp r2, r5\n    blt _02262774\n    ldr r0, [r4]\n    add r0, #0x30\n    ldrb r0, [r0]\n    cmp r2, r0\n    blt _0226279C\n    bl GF_AssertFail\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov93_022627A4(void) {
    sub_02037030(0, 0x17, 0x64, 1, 4);
}

void ov93_022627C0(void) {
    /* Original at 0x022627C0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r2, [r4]\n    lsl r3, r2, #2\n    ldr r2, _022627E4 ; =ov93_02263114\n    ldr r2, [r2, r3]\n    cmp r2, #0\n    beq _022627E0\n    blx r2\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _022627E4: .word ov93_02263114"
    );
    #endif
}

void ov93_022627E8(void) {
    /* Original at 0x022627E8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    mov r0, #1\n    str r0, [sp]\n    add r2, sp, #4\n    ldmia r4!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov93_0225E230\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov93_02262814(void) {
    /* Original at 0x02262814 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    bl sub_0203769C\n    ldrb r1, [r4, #4]\n    cmp r1, r0\n    beq _0226282C\n    add r0, r5, #0\n    add r1, r4, #4\n    bl ov93_0225FEC4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov93_02262830(void) {
    /* Original at 0x02262830 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    mov r0, #2\n    str r0, [sp]\n    add r0, sp, #0\n    strh r5, [r0, #4]\n    mov r1, #5\n    strb r1, [r0, #6]\n    strb r4, [r0, #7]\n    add r0, r6, #0\n    add r1, sp, #0\n    bl ov93_0225E230\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov93_02262860(void) {
    /* Original at 0x02262860 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, _02262880 ; =0x00002FD0\n    add r5, r0, #0\n    ldr r2, [r5, r1]\n    add r2, r2, #1\n    str r2, [r5, r1]\n    bl ov93_02260908\n    ldrb r1, [r4, #6]\n    ldrb r2, [r4, #7]\n    add r0, r5, #0\n    bl ov93_0225E48C\n    pop {r3, r4, r5, pc}\n    nop\n    _02262880: .word 0x00002FD0"
    );
    #endif
}

void ov93_02262884(void) {
    /* Original at 0x02262884 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    add r6, r3, #0\n    bl MI_CpuFill8\n    mov r0, #3\n    str r0, [sp]\n    add r0, sp, #0\n    strh r5, [r0, #4]\n    strb r4, [r0, #6]\n    mov r1, #4\n    strb r1, [r0, #7]\n    strb r6, [r0, #8]\n    add r0, r7, #0\n    add r1, sp, #0\n    bl ov93_0225E230\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov93_022628B8(void) {
    /* Original at 0x022628B8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldrh r1, [r4, #4]\n    add r5, r0, #0\n    ldr r0, _022628E8 ; =0x00002FC8\n    ldr r3, _022628EC ; =0x00001428\n    str r1, [r5, r0]\n    ldr r1, [r5]\n    ldrb r2, [r4, #6]\n    add r1, #0x30\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x2c]\n    add r3, r5, r3\n    bl ov93_0225FBF0\n    ldr r0, _022628F0 ; =0x00002FCC\n    mov r1, #1\n    str r1, [r5, r0]\n    ldrb r1, [r4, #7]\n    ldrb r2, [r4, #8]\n    add r0, r5, #0\n    bl ov93_0225E48C\n    pop {r3, r4, r5, pc}\n    _022628E8: .word 0x00002FC8\n    _022628EC: .word 0x00001428\n    _022628F0: .word 0x00002FCC"
    );
    #endif
}

void ov93_022628F4(void) {
    /* Original at 0x022628F4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    mov r0, #4\n    str r0, [sp]\n    mov r1, #2\n    add r0, sp, #0\n    strb r1, [r0, #4]\n    strb r4, [r0, #5]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov93_0225E230\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov93_02262920(void) {
    /* Original at 0x02262920 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r1, #0\n    mov r1, #3\n    str r1, [r0, #0x20]\n    ldrb r1, [r2, #4]\n    ldr r3, _02262930 ; =ov93_0225E48C\n    ldrb r2, [r2, #5]\n    bx r3\n    nop\n    _02262930: .word ov93_0225E48C"
    );
    #endif
}

void ov93_02262934(void) {
    /* Original at 0x02262934 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    mov r0, #5\n    str r0, [sp]\n    mov r1, #3\n    add r0, sp, #0\n    strb r1, [r0, #4]\n    strb r4, [r0, #5]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov93_0225E230\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov93_02262960(void) {
    /* Original at 0x02262960 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    ldr r1, _02262974 ; =0x00002FBC\n    mov r2, #1\n    str r2, [r0, r1]\n    mov r1, #6\n    str r1, [r0, #0x20]\n    ldrb r1, [r3, #4]\n    ldrb r2, [r3, #5]\n    ldr r3, _02262978 ; =ov93_0225E48C\n    bx r3\n    _02262974: .word 0x00002FBC\n    _02262978: .word ov93_0225E48C"
    );
    #endif
}

void ov93_0226297C(void) {
    /* Original at 0x0226297C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    mov r0, #6\n    str r0, [sp]\n    add r0, sp, #0\n    strb r5, [r0, #4]\n    strb r4, [r0, #5]\n    add r0, r6, #0\n    add r1, sp, #0\n    bl ov93_0225E230\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov93_022629A8(void) {
    /* Original at 0x022629A8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _022629B4 ; =ov93_0225E48C\n    add r2, r1, #0\n    ldrb r1, [r2, #4]\n    ldrb r2, [r2, #5]\n    bx r3\n    nop\n    _022629B4: .word ov93_0225E48C"
    );
    #endif
}

void ov93_022629B8(void) {
    /* Original at 0x022629B8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    mov r0, #7\n    str r0, [sp]\n    mov r1, #6\n    add r0, sp, #0\n    strb r1, [r0, #4]\n    strb r4, [r0, #5]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov93_0225E230\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov93_022629E4(void) {
    /* Original at 0x022629E4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r1, #0\n    mov r1, #1\n    str r1, [r0, #0x20]\n    ldrb r1, [r2, #4]\n    ldr r3, _022629F4 ; =ov93_0225E48C\n    ldrb r2, [r2, #5]\n    bx r3\n    nop\n    _022629F4: .word ov93_0225E48C"
    );
    #endif
}
