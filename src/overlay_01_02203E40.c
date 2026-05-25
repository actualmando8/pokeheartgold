/* Decompiled from asm/overlay_01_02203E40.s */
#include "global.h"

void ov01_02203E40(void) {
    /* Original at 0x02203E40 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    mov r1, #0x68\n    add r3, r2, #0\n    add r5, r0, #0\n    bl ov01_021F1430\n    add r4, r0, #0\n    str r5, [r4]\n    mov r1, #0\n    str r1, [r4, #0x60]\n    mov r1, #0xfe\n    lsl r1, r1, #0x16\n    str r1, [r4, #0x64]\n    bl ov01_02203E74\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_02203E64(void) {
    ov01_02203E94();
    ov01_021F1448(r4);
}

void ov01_02203E74(void) {
    ov01_021F1AB8(0x6a, 0);
}

void ov01_02203E94(void) {
    ov01_021F1448();
}

void ov01_02203EA0(void) {
    /* Original at 0x02203EA0 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x48\n    add r5, r0, #0\n    bl ov01_021F146C\n    add r4, r0, #0\n    bl ov01_021F1468\n    add r6, r0, #0\n    str r4, [sp, #0x2c]\n    add r0, r4, #0\n    mov r1, #0x13\n    bl ov01_021F1450\n    str r0, [sp, #0x30]\n    ldr r0, [r0, #0x60]\n    cmp r0, #0\n    bne _02203F24\n    str r5, [sp, #0x34]\n    add r0, r5, #0\n    add r1, sp, #0x14\n    bl MapObject_CopyPositionVector\n    ldr r1, [r6, #0x24]\n    add r0, sp, #8\n    bl Camera_GetLookAtCamPos\n    add r0, sp, #8\n    add r1, sp, #0x14\n    add r2, sp, #0x3c\n    bl VEC_Subtract\n    add r0, sp, #8\n    add r1, sp, #0x14\n    bl VEC_Distance\n    str r0, [sp, #0x38]\n    mov r1, #3\n    bl _s32_div_f\n    str r0, [sp, #0x38]\n    add r0, sp, #0x3c\n    add r1, r0, #0\n    bl VEC_Normalize\n    add r0, r5, #0\n    add r1, sp, #0x20\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #0x2c\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _02203F28 ; =ov01_022095B4\n    add r0, r4, #0\n    add r2, sp, #0x20\n    mov r3, #0\n    bl ov01_021F1620\n    ldr r1, [sp, #0x30]\n    str r0, [r1, #0x60]\n    ldr r0, [sp, #0x30]\n    ldr r0, [r0, #0x60]\n    add sp, #0x48\n    pop {r4, r5, r6, pc}\n    _02203F28: .word ov01_022095B4"
    );
    #endif
}

void ov01_02203F2C(void) {
    sub_02068D74();
}

void ov01_02203F3C(void) {
    /* Original at 0x02203F3C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r3, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, r4, #4\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, r5, #0\n    bl sub_02068D90\n    str r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_02203F68(void) {
    /* Original at 0x02203F68 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_02203F6C(void) {
    MapObject_CopyPositionVector(*((u32*)(r1 + 0xc)));
    VEC_MultAdd(*((u32*)(r4 + 0x10)), r4);
    sub_02068DA8(r5);
}

void ov01_02203F98(void) {
    /* Original at 0x02203F98 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x3c\n    ldr r6, _02203FFC ; =ov01_022095C8\n    add r5, r0, #0\n    add r4, r1, #0\n    add r3, sp, #0\n    mov r2, #4\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02203FA6\n    ldr r0, [r6]\n    str r0, [r3]\n    ldr r1, [r4, #8]\n    ldr r0, _02204000 ; =0x45800000\n    ldr r1, [r1, #0x64]\n    bl _fmul\n    bl _ffix\n    str r0, [sp, #0x24]\n    ldr r1, [r4, #8]\n    ldr r0, _02204000 ; =0x45800000\n    ldr r1, [r1, #0x64]\n    bl _fmul\n    bl _ffix\n    str r0, [sp, #0x28]\n    ldr r1, [r4, #8]\n    ldr r0, _02204000 ; =0x45800000\n    ldr r1, [r1, #0x64]\n    bl _fmul\n    bl _ffix\n    str r0, [sp, #0x2c]\n    add r0, r5, #0\n    add r1, sp, #0x30\n    bl sub_02068DB8\n    ldr r0, [r4, #8]\n    add r1, sp, #0x30\n    add r0, r0, #4\n    add r2, sp, #0\n    add r3, sp, #0x24\n    bl GF3dRender_DrawModel\n    add sp, #0x3c\n    pop {r3, r4, r5, r6, pc}\n    _02203FFC: .word ov01_022095C8\n    _02204000: .word 0x45800000"
    );
    #endif
}
