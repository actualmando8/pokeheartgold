/* Decompiled from asm/overlay_80_02237A70.s */
#include "global.h"

void ov80_02237A70(void) {
    // add r0, r3, r0
    // sub r5, r0, r4
    // sub r5, r0, r4
    LCRandom(*((u16*)(ov80_0223D4D6 + ((7 << 3) << 3))), ((7 << 3) << 3), (r2 + 1));
    _s32_div_f(r5);
    // add r0, r4, r1
}




void ov80_02237ADC(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // strh r0, [r5]
}




void ov80_02237B24(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237B36: ; jump table
}




void ov80_02237B58(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237B6A: ; jump table
}




void ov80_02237B8C(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // add r0, sp, #0x18
    // add r1, r5, r1
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // add r1, sp, #0x18
    // add r6, #0x34
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // sub r0, r1, r0
    // add r0, sp, #0x18
    // add r1, r5, r1
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // add r1, sp, #0x18
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #8]
}




void ov80_02237D5C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237D6C: ; jump table
}




u8 ov80_02237D88(void) {
}




void ov80_02237D8C(void) {
    // cmp r0, #2
    // beq _02237D94
    // cmp r0, #3
    // bne _02237D98
}




void ov80_02237D9C(void) {
    // str r0, [sp]
    // add r2, sp, #0
    // str r0, [sp]
    // add r2, sp, #0
}




void ov80_02237DF4(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
}




void ov80_02237E18(void) {
}




void ov80_02237E30(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // add r4, r5, r0
    // ldr r0, [sp]
    // add r4, #0x38
}




void ov80_02237E88(void) {
    // add r1, r0, r1
    // add r1, r2, r1
    ov80_02237ED8(7, ((0x0000FEC7 << 0x10) >> 0x10), *((u16*)((*((u8*)(r0 + 0x11)) << 1) + 0x30)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237EC0: ; jump table
}




void ov80_02237ED8(void) {
    ov80_02237D8C(*((u8*)(r0 + 0x10)));
}




void ov80_02237EFC(void) {
    // add r0, sp, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, sp, #0xc
}




void ov80_02237F3C(void) {
    // str r0, [sp]
    // add r4, sp, #4
    // strb r3, [r4]
    // sub r2, r1, r3
    // add r1, #0x10
    // ldr r4, [sp]
    // add r3, sp, #4
    // add r4, r4, r6
    // add r6, r6, r1
    // strh r6, [r4]
    // strh r6, [r4]
    // add r1, #0x20
    // add r2, #0xa
}




void ov80_02237F9C(void) {
    // cmp r0, #8
    // blo _02237FA2
}




void ov80_02237FA4(void) {
    sub_0205C1F0(r1);
    sub_0205C1F0(r4);
    sub_0205C268();
    sub_02031248(r5, r7, r0, r6);
    sub_0205C218(r4);
    sub_0205C218(r4);
    sub_0205C268();
    FrontierSave_GetStat(r5, r7, r0);
    // add r1, r0, r6
    sub_0205C218(r4);
    sub_0205C218(r4);
    sub_0205C268();
    sub_02031108(r5, r6, r0, 0x0000270F);
    sub_0205C218(r4);
    sub_0205C218(r4);
    sub_0205C268();
    sub_02031228(r5, r7, r0, r6);
}



