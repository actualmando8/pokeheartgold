/* Decompiled from asm/overlay_80_022357B4.s */
#include "global.h"

void ov80_022357B4(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _022357CC: ; jump table
    // add r1, #0x78
    ov80_02236698(r1, r0, (((*((u8*)(r0 + 0xc)) - 1) << 0x18) >> 0x18));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, r4, r2
    // add r1, #0x78
    ov80_02236450(r4, *((u16*)(((*((u8*)(r4 + 0xc)) - 1) << 2) + 0x3e)), *((u8*)(r4 + 0xe)));
    // add r1, #0xa8
    // add r2, sp, #0x14
    // add r6, sp, #0x10
    // ldrh r3, [r1]
    // add r1, #0x38
    // strh r3, [r2]
    // add r3, #0xaa
    // ldrh r3, [r3]
    // add r5, #0x38
    // strh r3, [r6]
    // add r0, sp, #0x14
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, r4, r2
    // add r1, r4, r1
    ov80_02236450(r4, (0x62 << 2), *((u16*)(((((*((u8*)(r4 + 0xc)) - 1) << 1) + 1) << 1) + 0x3e)), *((u8*)(r4 + 0xe)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, r4, r2
    // add r1, #0x78
    ov80_02236450(r4, r4, *((u16*)(((*((u8*)(r4 + 0xc)) - 1) << 1) + 0x3e)), *((u8*)(r4 + 0xe)));
}



void ov80_02235898(void) {
    // lsl r2, r1, #4
    // add r1, r1, r2
    // lsl r1, r1, #4
    // add r0, r0, r1
    // add r0, #0x7c
    // ldrh r0, [r0]
    // ldr r3, _022358AC ; =ov80_0222A30C
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bx r3
    // _022358AC: .word ov80_0222A30C
    // TODO: decompile
}



void ov80_022358B0(void) {
}



void ov80_022358C4(void) {
    *((u8*)(r0 + 0xd)) = (*((u8*)(r0 + 0xd)) + 1);
    sub_020674A4(*((u32*)(r0 + 8)));
    *((u32*)(r4 + 8)) = r0;
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
}



void ov80_022358E8(void) {
    // ldrb r1, [r0, #0xd]
    // ldrh r0, [r0, #0x1a]
    // add r1, r0, r1
    // ldr r0, _022358FC ; =0x0000FFFF
    // cmp r1, r0
    // bhi _022358F8
    // lsl r0, r1, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // nop
    // _022358FC: .word 0x0000FFFF
    // TODO: decompile
}


