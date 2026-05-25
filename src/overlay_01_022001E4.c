/* Decompiled from asm/overlay_01_022001E4.s */
#include "global.h"

void ov01_022001E4(void) {
}



void ov01_022001F8(void) {
}



void ov01_02200208(void) {
    // ldr r1, [r0]
    // add r1, r1, #1
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}



void ov01_02200210(void) {
}



void ov01_02200220(void) {
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
}



void ov01_02200228(void) {
}



void ov01_02200238(void) {
    // push {r3, lr}
    // cmp r1, #0
    // bne _02200244
    // bl ov01_02200208
    // pop {r3, pc}
    // bl ov01_02200220
    // pop {r3, pc}
    // TODO: decompile
}



void ov01_0220024C(void) {
    // push {r3, lr}
    // cmp r1, #0
    // bne _02200258
    // bl ov01_02200210
    // pop {r3, pc}
    // bl ov01_02200228
    // pop {r3, pc}
    // TODO: decompile
}



void ov01_02200260(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // bne _022002A4
    // mov r1, #1
    // str r1, [r4, #8]
    // ldr r0, [r4, #0x10]
    // mov r2, #0x76
    // bl ov01_021F18D4
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // mov r2, #0x8c
    // bl ov01_021F1908
    // mov r1, #1
    // ldr r0, [r4, #0x10]
    // mov r2, #0x11
    // add r3, r1, #0
    // bl ov01_021F1930
    // mov r1, #1
    // str r1, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _022002A8 ; =ov01_022092F0
    // add r2, r1, #0
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x10]
    // add r3, r1, #0
    // bl ov01_021F1758
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _022002A8: .word ov01_022092F0
    // TODO: decompile
}



void ov01_022002AC(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // bne _022002F4
    // mov r0, #1
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // mov r1, #0xa
    // mov r2, #0x7d
    // bl ov01_021F18D4
    // ldr r0, [r4, #0x10]
    // mov r1, #0xa
    // mov r2, #0x8c
    // bl ov01_021F1908
    // ldr r0, [r4, #0x10]
    // mov r1, #0xb
    // mov r2, #0x18
    // mov r3, #1
    // bl ov01_021F1930
    // mov r0, #0xb
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _022002F8 ; =ov01_022092F0
    // mov r2, #0xa
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x10]
    // mov r1, #0xc
    // add r3, r2, #0
    // bl ov01_021F1758
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _022002F8: .word ov01_022092F0
    // TODO: decompile
}



void ov01_022002FC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // cmp r0, #1
    // bne _0220032A
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ov01_021F18FC
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ov01_021F1924
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ov01_021F1970
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ov01_021F18C8
    // pop {r4, pc}
    // TODO: decompile
}



void ov01_0220032C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // cmp r0, #1
    // bne _0220035A
    // mov r0, #0
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // mov r1, #0xa
    // bl ov01_021F18FC
    // ldr r0, [r4, #0x10]
    // mov r1, #0xa
    // bl ov01_021F1924
    // ldr r0, [r4, #0x10]
    // mov r1, #0xb
    // bl ov01_021F1970
    // ldr r0, [r4, #0x10]
    // mov r1, #0xc
    // bl ov01_021F18C8
    // pop {r4, pc}
    // TODO: decompile
}



void ov01_0220035C(void) {
}



void ov01_0220036C(void) {
}



void ov01_0220037C(void) {
}



void ov01_0220038C(void) {
}



void ov01_0220039C(void) {
    // push {r3, lr}
    // cmp r1, #0
    // bne _022003A8
    // bl ov01_0220035C
    // pop {r3, pc}
    // bl ov01_0220036C
    // pop {r3, pc}
    // TODO: decompile
}



void ov01_022003B0(void) {
    // push {r3, lr}
    // cmp r1, #0
    // bne _022003BC
    // bl ov01_0220037C
    // pop {r3, pc}
    // bl ov01_0220038C
    // pop {r3, pc}
    // TODO: decompile
}



void ov01_022003C4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // ldr r3, _022003F0 ; =ov01_022092C0
    // add r4, sp, #0
    // ldr r5, [r3]
    // ldr r3, [r3, #4]
    // str r5, [sp]
    // str r3, [sp, #4]
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // bl ov01_021F1740
    // add r4, r0, #0
    // bl sub_02023F90
    // mov r1, #0
    // bl NNS_G3dMdlSetMdlFogEnableFlagAll
    // add r0, r4, #0
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _022003F0: .word ov01_022092C0
    // TODO: decompile
}



void ov01_022003F4(void) {
}



void ov01_02200400(void) {
    // push {r3, lr}
    // bl sub_02068D74
    // mov r1, #1
    // str r1, [r0, #0x10]
    // ldr r0, [r0, #0x40]
    // cmp r0, #0
    // beq _02200416
    // mov r1, #0
    // bl sub_02023EA4
    // pop {r3, pc}
    // TODO: decompile
}



void ov01_02200418(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // bl sub_02068D98
    // add r2, r4, #0
    // add r3, r0, #0
    // add r2, #0x30
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, #6
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #0x38]
    // ldr r1, [r4, #0x30]
    // bl ov01_0220039C
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DB8
    // ldr r0, [r4, #0x34]
    // ldr r1, [r4, #0x30]
    // add r2, sp, #0
    // bl ov01_022003C4
    // str r0, [r4, #0x40]
    // ldr r0, [r4, #0x38]
    // ldr r1, [r4, #0x30]
    // bl ov01_02200238
    // ldr r0, [r4, #0x40]
    // mov r1, #0
    // bl sub_02023EA4
    // add r0, r5, #0
    // bl sub_02068D90
    // cmp r0, #1
    // bne _02200474
    // ldr r0, _0220047C ; =SEQ_SE_DP_DECIDE
    // bl PlaySE
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _0220047C: .word SEQ_SE_DP_DECIDE
    // TODO: decompile
}



void ov01_02200480(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r1, sp, #0
    // add r5, r0, #0
    // bl sub_02068DB8
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _0220049C
    // cmp r0, #1
    // beq _022004C6
    // cmp r0, #2
    // b _022004DE
    // ldr r0, [r4, #0x40]
    // mov r1, #1
    // bl sub_02023EA4
    // ldr r1, [r4, #0x1c]
    // ldr r0, [r4, #0x28]
    // add r0, r1, r0
    // str r0, [r4, #0x1c]
    // beq _022004BA
    // mov r0, #2
    // ldr r1, [r4, #0x28]
    // lsl r0, r0, #0xc
    // sub r0, r1, r0
    // str r0, [r4, #0x28]
    // b _022004DE
    // mov r0, #0
    // str r0, [r4, #0x28]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _022004DE
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // cmp r0, #0x1e
    // blt _022004DE
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // str r0, [r4, #4]
    // mov r0, #1
    // str r0, [r4, #0x14]
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DA8
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}



void ov01_022004EC(void) {
}



void ov01_02200508(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldr r1, [r4, #0x10]
    // cmp r1, #1
    // beq _0220053A
    // add r1, sp, #0
    // bl sub_02068DB8
    // ldr r1, [sp]
    // ldr r0, [r4, #0x18]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r0, [r4, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r0, [r4, #0x20]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x40]
    // add r1, sp, #0
    // bl sub_02023E50
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}



void ov01_02200540(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r5, r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // bl ov01_021F146C
    // add r4, r0, #0
    // mov r1, #9
    // str r6, [sp, #0x20]
    // str r4, [sp, #0x24]
    // bl ov01_021F1450
    // str r0, [sp, #0x28]
    // add r0, r5, #0
    // add r1, sp, #0x14
    // str r5, [sp, #0x2c]
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // add r1, sp, #8
    // bl MapObject_CopyFacingVector
    // add r0, sp, #0x14
    // add r1, sp, #8
    // add r2, r0, #0
    // bl VEC_Add
    // add r0, r5, #0
    // bl MapObject_GetPriority
    // add r1, r0, #1
    // add r0, sp, #0x20
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r1, _02200598 ; =ov01_022092DC
    // add r0, r4, #0
    // add r2, sp, #0x14
    // add r3, r7, #0
    // bl ov01_021F1620
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02200598: .word ov01_022092DC
    // TODO: decompile
}



void ov01_0220059C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // bl sub_02068D98
    // add r2, r4, #0
    // add r3, r0, #0
    // add r2, #0x30
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r4, #0x3c]
    // bl MapObject_GetID
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x3c]
    // bl MapObject_GetMapID
    // str r0, [r4, #0xc]
    // mov r0, #6
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #0x38]
    // ldr r1, [r4, #0x30]
    // bl ov01_0220039C
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DB8
    // ldr r0, [r4, #0x34]
    // ldr r1, [r4, #0x30]
    // add r2, sp, #0
    // bl ov01_022003C4
    // str r0, [r4, #0x40]
    // ldr r0, [r4, #0x38]
    // ldr r1, [r4, #0x30]
    // bl ov01_02200238
    // ldr r0, [r4, #0x40]
    // mov r1, #0
    // bl sub_02023EA4
    // add r0, r5, #0
    // bl sub_02068D90
    // cmp r0, #1
    // bne _02200608
    // ldr r0, _02200610 ; =SEQ_SE_DP_DECIDE
    // bl PlaySE
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _02200610: .word SEQ_SE_DP_DECIDE
    // TODO: decompile
}



void ov01_02200614(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldr r6, [r4, #0x3c]
    // ldr r1, [r4, #8]
    // add r5, r0, #0
    // ldr r2, [r4, #0xc]
    // add r0, r6, #0
    // bl sub_0205F0A8
    // cmp r0, #0
    // bne _02200630
    // bl GF_AssertFail
    // add r0, r6, #0
    // add r1, sp, #0
    // bl ov01_021F93AC
    // mov r0, #2
    // ldr r1, [sp, #4]
    // lsl r0, r0, #0x10
    // add r1, r1, r0
    // str r1, [sp, #4]
    // ldr r1, [sp, #8]
    // lsr r0, r0, #5
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _02200658
    // cmp r0, #1
    // beq _02200682
    // cmp r0, #2
    // b _0220069A
    // ldr r0, [r4, #0x40]
    // mov r1, #1
    // bl sub_02023EA4
    // ldr r1, [r4, #0x1c]
    // ldr r0, [r4, #0x28]
    // add r0, r1, r0
    // str r0, [r4, #0x1c]
    // beq _02200676
    // mov r0, #2
    // ldr r1, [r4, #0x28]
    // lsl r0, r0, #0xc
    // sub r0, r1, r0
    // str r0, [r4, #0x28]
    // b _0220069A
    // mov r0, #0
    // str r0, [r4, #0x28]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0220069A
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // cmp r0, #0x1e
    // blt _0220069A
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // str r0, [r4, #4]
    // mov r0, #1
    // str r0, [r4, #0x14]
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DA8
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


