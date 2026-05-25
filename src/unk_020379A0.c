/* Decompiled from asm/unk_020379A0.s */
#include "global.h"

void sub_020379A0(void) {
    Heap_Alloc((0x99 << 2));
    // str r0, [r1]
    MI_CpuFill8(0, (0x99 << 2));
    // add r2, r2, r3
    *((u8*)(*((u32*)_021D414C) + 0x10)) = 0xff;
    // strb r0, [r2, r1]
    // strb r0, [r4, r2]
    // strb r4, [r2, r0]
    // strb r4, [r2, r0]
}



void sub_020379F8(void) {
}



void sub_02037A10(void) {
    // cmp r0, #0
    // beq _02037A1C
    // _02037A20: .word _021D414C
}



void sub_02037A24(void) {
    // add r0, sp, #0
    // strb r1, [r0]
    sub_0203769C(*((u8*)r2));
    // add r0, sp, #0
    *((u8*)(r0 + 1)) = r5;
    *((u8*)(r0 + 2)) = *((u8*)r0);
    // add r1, sp, #0
    // add r1, #1
    sub_02037184(0x12, *((u8*)r0));
    // add r4, sp, #0
    // add r0, r0, r5
    *((u8*)(*((u32*)_021D414C) + 0x10)) = *((u8*)r4);
    sub_020373B4(((0 << 0x10) >> 0x10), *((u8*)r4));
    // add r0, r0, r5
    // add r1, sp, #0
    sub_02037184(0x11, *((u8*)r4));
    // strb r2, [r1, r0]
}



void sub_02037A98(void) {
    // add r0, r1, r0
    *((u8*)(*((u8*)r2) + 0x10)) = *((u8*)(r2 + 1));
}



void sub_02037AAC(void) {
    // strb r2, [r1, r0]
}



void sub_02037AC0(void) {
    // strb r0, [r3, r1]
    // strb r3, [r2, r0]
}



void sub_02037ADC(void) {
    // add r1, r2, r1
    sub_020376E0(0x10, (0x00000263 - 1), *((u32*)_021D414C));
    // strb r2, [r1, r0]
    // add r1, #0x10
    sub_02037184(0x11, *((u32*)_021D414C), 0);
    // strb r2, [r1, r0]
}



void sub_02037B38(void) {
    // cmp r2, #0
    // bne _02037B44
    // ldrb r1, [r2, r1]
    // bne _02037B50
    // _02037B54: .word _021D414C
    // _02037B58: .word 0x00000261
}



u8 sub_02037B5C(void) {
    // add r0, r1, r0
}



void sub_02037B6C(void) {
    // strb r3, [r1, r4]
    // add r0, r0, r4
    *((u8*)(*((u32*)_021D414C) + 1)) = *((u8*)(r2 + 1));
}



u8 sub_02037B88(void) {
}



void sub_02037B8C(void) {
}



s8 sub_02037BA0(void) {
    // mvn r0, r0
    // add r0, r3, r2
    // mvn r0, r0
}



void sub_02037BC8(void) {
    // add r0, r0, r5
    MI_CpuFill8(*((u32*)_021D414C), 0, 2);
}



void sub_02037BEC(void) {
    // add r2, r2, r4
    // strb r3, [r2, r0]
}



BOOL sub_02037C0C(void) {
    // add r3, #0x18
    // add r1, r3, r4
    MI_CpuCopy8(r1, 0x46, *((u32*)_021D414C));
    // add r1, #0x18
    // add r1, r1, r4
    sub_020376E0(0x14, *((u32*)_021D414C));
}



void * sub_02037C44(void) {
    // add r2, r3, r0
    // add r3, #0x18
    // add r0, r3, r1
}



void sub_02037C68(void) {
    // add r4, r0, r1
    // strb r5, [r4, r0]
    // add r3, #0x18
    // add r1, r3, r2
    MI_CpuCopy8(r2, r0, 0x46, *((u32*)_021D414C));
}


