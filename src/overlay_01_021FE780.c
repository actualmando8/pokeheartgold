/* Decompiled from asm/overlay_01_021FE780.s */
#include "global.h"

void ov01_021FE780(void) {
}



void ov01_021FE79C(void) {
}



void ov01_021FE7AC(void) {
    // str r2, [sp]
    ov01_021F19F4(*((u32*)r0), (r0 + 4), 0, 0x56);
    // add r0, #0x18
    sub_02069978(r4, (r4 + 4));
}



void ov01_021FE7D0(void) {
}



void ov01_021FE7DC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x30
    // add r4, r1, #0
    // add r6, r2, #0
    // add r2, sp, #0x14
    // mov r1, #0
    // str r1, [r2]
    // str r1, [r2, #4]
    // add r5, r0, #0
    // str r1, [r2, #8]
    // str r3, [sp, #0x20]
    // bl ov01_021F146C
    // mov r1, #4
    // str r0, [sp, #0x24]
    // bl ov01_021F1450
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x40]
    // str r5, [sp, #0x2c]
    // cmp r0, #0
    // bne _021FE826
    // add r0, r5, #0
    // bl MapObject_GetFieldSystem
    // mov r1, #2
    // lsl r2, r4, #0x10
    // lsl r1, r1, #0xe
    // add r2, r2, r1
    // str r2, [sp, #0x14]
    // lsl r2, r6, #0x10
    // add r1, r2, r1
    // str r1, [sp, #0x1c]
    // add r1, sp, #0x14
    // bl sub_0206121C
    // b _021FE842
    // ldr r3, _021FE860 ; =ov01_022090D0
    // add r2, sp, #8
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r1, sp, #0x14
    // str r0, [r2]
    // add r0, r5, #0
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // add r1, sp, #8
    // bl sub_0205F9A0
    // add r0, r5, #0
    // mov r1, #2
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #0x20
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // ldr r1, _021FE864 ; =ov01_022090DC
    // ldr r3, [sp, #0x40]
    // add r2, sp, #0x14
    // bl ov01_021F1620
    // add sp, #0x30
    // pop {r4, r5, r6, pc}
    // _021FE860: .word ov01_022090D0
    // _021FE864: .word ov01_022090DC
    // TODO: decompile
}



u32 ov01_021FE868(void) {
    sub_02068D98();
    // add r2, #0x24
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    MapObject_GetID(*((u32*)(r0 + 0xc)), r5, r0);
    *((u32*)(r5 + 0xc)) = r0;
    MapObject_GetMapID(r4);
    *((u32*)(r5 + 0x10)) = r0;
    *((u32*)(r5 + 8)) = *((u32*)r7);
    sub_02068D90(r6);
    *((u32*)(r5 + 0x18)) = r0;
    *((u32*)(r5 + 0x1c)) = (1 << 0xc);
    *((u32*)(r5 + 0x20)) = ((1 << 0xc) >> 2);
}



void ov01_021FE8B0(void) {
}



void ov01_021FE8C8(void) {
    sub_0205F0A8(*((u32*)(r1 + 0x30)), *((u32*)(r1 + 0xc)), *((u32*)(r1 + 0x10)));
    ov01_021F1640(r6);
    // str r0, [r5]
    MapObject_GetFacingDirection(r4);
    // mvn r1, r1
    *((u32*)(r5 + 4)) = r0;
    // str r0, [r5]
    *((u32*)(r5 + 8)) = 1;
    // add r2, r1, r0
    *((u32*)(r5 + 0x1c)) = r2;
    *((u32*)(r5 + 0x1c)) = (1 << 0xe);
    // neg r0, r0
    *((u32*)(r5 + 0x20)) = *((u32*)(r5 + 0x20));
    *((u32*)(r5 + 0x1c)) = ((1 << 0xe) >> 2);
    // neg r0, r0
    *((u32*)(r5 + 0x20)) = *((u32*)(r5 + 0x20));
    // str r0, [sp, #0xc]
    // add r1, r1, r0
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, sp, #0xc
    sub_0205F9A0(r4, *((u32*)(r5 + 0x1c)));
    // add r1, sp, #0
    MapObject_CopyPositionVector(r4);
    // sub r0, r1, r0
    // ldr r2, [sp, #4]
    // add r1, sp, #0
    // add r0, r2, r0
    // str r0, [sp, #4]
    sub_02068DA8(r6, *((u32*)(r5 + 0x1c)));
}



void ov01_021FE970(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x3c
    // add r3, r1, #0
    // add r6, r0, #0
    // ldr r0, [r3]
    // cmp r0, #1
    // beq _021FE9E6
    // mov r0, #0
    // ldr r1, [r3, #8]
    // mvn r0, r0
    // cmp r1, r0
    // beq _021FE9E6
    // ldr r0, [r3, #0x14]
    // ldr r5, _021FE9EC ; =ov01_022090C4
    // add r0, r0, #1
    // str r0, [r3, #0x14]
    // ldmia r5!, {r0, r1}
    // add r4, sp, #0
    // stmia r4!, {r0, r1}
    // ldr r0, [r5]
    // mov r2, #0
    // str r0, [r4]
    // ldr r4, [r3, #0x2c]
    // ldr r0, [r3, #8]
    // add r4, #0x18
    // cmp r0, #3
    // bhi _021FE9C4
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FE9B2: ; jump table
    // mov r2, #0xb4
    // b _021FE9C4
    // ldr r2, _021FE9F0 ; =0x0000010E
    // b _021FE9C4
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
    // nop
    // _021FE9EC: .word ov01_022090C4
    // _021FE9F0: .word 0x0000010E
    // TODO: decompile
}



void ov01_021FE9F4(void) {
}


