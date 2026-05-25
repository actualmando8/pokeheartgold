/* Decompiled from asm/overlay_01_021FEA0C.s */
#include "global.h"

void ov01_021FEA0C(void) {
}



void ov01_021FEA20(void) {
}



void ov01_021FEA30(void) {
    // str r1, [r0]
}



void ov01_021FEA38(void) {
}



void ov01_021FEA48(void) {
    // str r0, [sp]
    // add r1, #0x14
    ov01_021F19F4(*((u32*)(r0 + 0x10)), r0, 0, 0x57);
    // add r0, #0x28
    // add r1, #0x14
    sub_02069978(r4, r4);
    *((u32*)(r4 + 4)) = 1;
}



void ov01_021FEA7C(void) {
}



void ov01_021FEA90(void) {
}



void ov01_021FEAA0(void) {
}



void ov01_021FEAB0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r6, r1, #0
    // add r7, r2, #0
    // add r2, sp, #0xc
    // mov r1, #0
    // str r1, [r2]
    // str r1, [r2, #4]
    // str r3, [sp, #8]
    // add r5, r0, #0
    // str r1, [r2, #8]
    // bl ov01_021F146C
    // add r4, r0, #0
    // ldr r0, [sp, #8]
    // str r4, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // add r0, r5, #0
    // bl MapObject_GetFieldSystem
    // str r0, [sp, #0x20]
    // add r0, r4, #0
    // mov r1, #5
    // bl ov01_021F1450
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x40]
    // str r5, [sp, #0x28]
    // cmp r0, #0
    // bne _021FEB06
    // mov r0, #2
    // lsl r1, r6, #0x10
    // lsl r0, r0, #0xe
    // add r1, r1, r0
    // str r1, [sp, #0xc]
    // lsl r1, r7, #0x10
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // add r1, sp, #0xc
    // bl sub_0206121C
    // b _021FEB0E
    // add r0, r5, #0
    // add r1, sp, #0xc
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // mov r1, #2
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #0x18
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, _021FEB2C ; =ov01_022090FC
    // ldr r3, [sp, #0x40]
    // add r0, r4, #0
    // add r2, sp, #0xc
    // bl ov01_021F1620
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _021FEB2C: .word ov01_022090FC
    // TODO: decompile
}



void ov01_021FEB30(void) {
}



u32 ov01_021FEB3C(void) {
    sub_02068D98();
    // ldmia r6!, {r0, r1}
    // add r3, #0x10
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    *((u32*)(r4 + 4)) = *((u32*)r0);
    sub_02068D90(r5, r0, r4);
    *((u32*)(r4 + 0xc)) = r0;
    ov01_021FEA90(*((u32*)(r4 + 0x1c)));
    ov01_021FEA30(*((u32*)(r4 + 0x1c)));
}



void ov01_021FEB78(void) {
}



void ov01_021FEB8C(void) {
    // add r1, sp, #0xc
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    sub_0205F9A0(*((u32*)(r1 + 0x20)));
    // add r1, sp, #0
    MapObject_CopyPositionVector(r4);
    // add r1, sp, #0
    sub_02068DA8(r5);
}



void ov01_021FEBC0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x3c
    // add r3, r1, #0
    // add r6, r0, #0
    // ldr r0, [r3]
    // cmp r0, #1
    // beq _021FEC2C
    // ldr r0, [r3, #8]
    // ldr r5, _021FEC30 ; =ov01_022090F0
    // add r0, r0, #1
    // str r0, [r3, #8]
    // ldmia r5!, {r0, r1}
    // add r4, sp, #0
    // stmia r4!, {r0, r1}
    // ldr r0, [r5]
    // mov r2, #0
    // str r0, [r4]
    // ldr r4, [r3, #0x1c]
    // ldr r0, [r3, #4]
    // add r4, #0x28
    // cmp r0, #3
    // bhi _021FEC0A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FEBF8: ; jump table
    // mov r2, #0xb4
    // b _021FEC0A
    // ldr r2, _021FEC34 ; =0x0000010E
    // b _021FEC0A
    // mov r2, #0x5a
    // mov r1, #0
    // lsl r2, r2, #0x10
    // add r0, sp, #0x18
    // lsr r2, r2, #0x10
    // add r3, r1, #0
    // bl sub_02020DA4
    // add r0, r6, #0
    // add r1, sp, #0xc
    // bl sub_02068DB8
    // add r0, r4, #0
    // add r1, sp, #0xc
    // add r2, sp, #0
    // add r3, sp, #0x18
    // bl sub_020699AC
    // add sp, #0x3c
    // pop {r3, r4, r5, r6, pc}
    // _021FEC30: .word ov01_022090F0
    // _021FEC34: .word 0x0000010E
    // TODO: decompile
}


