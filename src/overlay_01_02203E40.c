/* Decompiled from asm/overlay_01_02203E40.s */
#include "global.h"

void ov01_02203E40(void) {
    // push {r3, r4, r5, lr}
    // mov r2, #0
    // mov r1, #0x68
    // add r3, r2, #0
    // add r5, r0, #0
    // bl ov01_021F1430
    // add r4, r0, #0
    // str r5, [r4]
    // mov r1, #0
    // str r1, [r4, #0x60]
    // mov r1, #0xfe
    // lsl r1, r1, #0x16
    // str r1, [r4, #0x64]
    // bl ov01_02203E74
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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
    // push {r4, r5, r6, lr}
    // sub sp, #0x48
    // add r5, r0, #0
    // bl ov01_021F146C
    // add r4, r0, #0
    // bl ov01_021F1468
    // add r6, r0, #0
    // str r4, [sp, #0x2c]
    // add r0, r4, #0
    // mov r1, #0x13
    // bl ov01_021F1450
    // str r0, [sp, #0x30]
    // ldr r0, [r0, #0x60]
    // cmp r0, #0
    // bne _02203F24
    // str r5, [sp, #0x34]
    // add r0, r5, #0
    // add r1, sp, #0x14
    // bl MapObject_CopyPositionVector
    // ldr r1, [r6, #0x24]
    // add r0, sp, #8
    // bl Camera_GetLookAtCamPos
    // add r0, sp, #8
    // add r1, sp, #0x14
    // add r2, sp, #0x3c
    // bl VEC_Subtract
    // add r0, sp, #8
    // add r1, sp, #0x14
    // bl VEC_Distance
    // str r0, [sp, #0x38]
    // mov r1, #3
    // bl _s32_div_f
    // str r0, [sp, #0x38]
    // add r0, sp, #0x3c
    // add r1, r0, #0
    // bl VEC_Normalize
    // add r0, r5, #0
    // add r1, sp, #0x20
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // mov r1, #2
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #0x2c
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, _02203F28 ; =ov01_022095B4
    // add r0, r4, #0
    // add r2, sp, #0x20
    // mov r3, #0
    // bl ov01_021F1620
    // ldr r1, [sp, #0x30]
    // str r0, [r1, #0x60]
    // ldr r0, [sp, #0x30]
    // ldr r0, [r0, #0x60]
    // add sp, #0x48
    // pop {r4, r5, r6, pc}
    // _02203F28: .word ov01_022095B4
    // TODO: decompile
}


void ov01_02203F2C(void) {
    sub_02068D74();
}


void ov01_02203F3C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02068D98
    // add r3, r0, #0
    // ldmia r3!, {r0, r1}
    // add r2, r4, #4
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // add r0, r5, #0
    // bl sub_02068D90
    // str r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_02203F68(void) {
    // bx lr
    // TODO: decompile
}


void ov01_02203F6C(void) {
    MapObject_CopyPositionVector(*((u32*)(r1 + 0xc)));
    VEC_MultAdd(*((u32*)(r4 + 0x10)), r4);
    sub_02068DA8(r5);
}


void ov01_02203F98(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x3c
    // ldr r6, _02203FFC ; =ov01_022095C8
    // add r5, r0, #0
    // add r4, r1, #0
    // add r3, sp, #0
    // mov r2, #4
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02203FA6
    // ldr r0, [r6]
    // str r0, [r3]
    // ldr r1, [r4, #8]
    // ldr r0, _02204000 ; =0x45800000
    // ldr r1, [r1, #0x64]
    // bl _fmul
    // bl _ffix
    // str r0, [sp, #0x24]
    // ldr r1, [r4, #8]
    // ldr r0, _02204000 ; =0x45800000
    // ldr r1, [r1, #0x64]
    // bl _fmul
    // bl _ffix
    // str r0, [sp, #0x28]
    // ldr r1, [r4, #8]
    // ldr r0, _02204000 ; =0x45800000
    // ldr r1, [r1, #0x64]
    // bl _fmul
    // bl _ffix
    // str r0, [sp, #0x2c]
    // add r0, r5, #0
    // add r1, sp, #0x30
    // bl sub_02068DB8
    // ldr r0, [r4, #8]
    // add r1, sp, #0x30
    // add r0, r0, #4
    // add r2, sp, #0
    // add r3, sp, #0x24
    // bl GF3dRender_DrawModel
    // add sp, #0x3c
    // pop {r3, r4, r5, r6, pc}
    // _02203FFC: .word ov01_022095C8
    // _02204000: .word 0x45800000
    // TODO: decompile
}

