/* Decompiled from asm/unk_02058034.s */
#include "global.h"

void sub_02058034(void) {
}



void sub_02058038(void) {
    sub_02091574(*((u32*)_021D41C8));
    Heap_Alloc(0xf, 0x44);
    // str r0, [r1]
    MI_CpuFill8(0, 0x44);
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = 0x32;
    SysTask_CreateOnMainQueue(sub_020582CC, 0, 0xa);
    *((u32*)(*((u32*)_021D41C8) + 0x34)) = r0;
    *((u32*)(*((u32*)_021D41C8) + 0x14)) = r4;
    *((u32*)(*((u32*)_021D41C8) + 0x40)) = 0;
    sub_02058034(*((u32*)_021D41C8), _021D41C8, 0);
    // add r0, #0x18
    sub_0203778C(*((u32*)_021D41C8));
}



void sub_02058098(void) {
    SysTask_Destroy(*((u32*)(*((u32*)_021D41C8) + 0x34)));
    Heap_Free(*((u32*)(*((u32*)_021D41C8) + 0)));
    Heap_Free(*((u32*)(*((u32*)_021D41C8) + 0x40)));
    Heap_Free(*((u32*)_021D41C8));
    // str r1, [r0]
}



void sub_020580E4(void) {
    sub_02037474();
    FieldSystem_GetSaveData(r5);
    // str r1, [sp]
    // add r3, #0xa4
    sub_02037D8C(r4, r6, *((u32*)r5));
    sub_02058038(r5);
    sub_020582F4(sub_02058304, 0);
}



void sub_02058124(void) {
    sub_02037474();
    FieldSystem_GetSaveData(r5);
    // str r1, [sp]
    // add r3, #0xa4
    sub_02037DD4(r4, r6, *((u32*)r5));
    sub_02058038(r5);
    sub_020582F4(sub_0205832C, 0);
}



void sub_02058164(void) {
    // add r1, #0x3a
    // strb r0, [r1]
}



void sub_02058180(void) {
    // bx r3
    // _02058188: .word sub_020582F4
    // _0205818C: .word sub_020588A0
}



void sub_02058190(void) {
    sub_0200FC60(0, 0);
    sub_0200FC60(1, 0);
    sub_020398D4(1, 1);
    sub_02037D78();
    sub_02058038(r4, *((u32*)_021D41C8));
    // add r0, #0x3e
    // strb r1, [r0]
    // add r1, #0x3e
    // strb r0, [r1]
    // add r0, #0x3f
    // strb r1, [r0]
    sub_0203769C(*((u32*)_021D41C8), 0);
    // str r0, [sp, #8]
    sub_0203769C();
    sub_02034818();
    sub_02037454();
    Heap_Alloc(r4, 0x0000066C);
    // str r0, [r1, r5]
    sub_02037454(*((u32*)r6));
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    sub_02068FC8(0, 0, 0, 0xff);
    sub_02037AC0(0x5f);
    sub_020582F4(sub_020588F8, 0);
}



void sub_02058258(void) {
    // bne _02058268
    // beq _02058272
    // nop
    // _02058278: .word _021D41C8
    // _0205827C: .word sub_020588F8
    // _02058280: .word sub_02058930
}



void sub_02058284(void) {
    sub_020398D4(0, 0);
    sub_020582F4(sub_02058A60, 5);
}



void sub_020582A8(void) {
    sub_02037AC0(0x5b);
    sub_020582F4(sub_02058A38, 5);
}



void sub_020582CC(void) {
    SysTask_Destroy(_021D41C8, *((u32*)_021D41C8));
    // add r2, #0x3c
    // blx r1
}



void sub_020582F4(void) {
    *((u32*)(*((u32*)_021D41C8) + 0x30)) = r0;
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = r1;
}



void sub_02058304(void) {
    sub_0203769C();
    sub_020373B4();
    ov03_02255C54();
    sub_02034434();
    sub_020582F4(sub_02058328, 0);
}



void sub_02058328(void) {
}



void sub_0205832C(void) {
    sub_02034DB8();
    ov03_02255BEC();
    sub_020582F4(sub_02058348, 0);
}



void sub_02058348(void) {
}



void sub_0205834C(void) {
    // add r0, #0x3a
    sub_02037E1C(*((u8*)*((u32*)_021D41C8)));
    sub_020582F4(sub_0205836C, 0);
}



void sub_0205836C(void) {
    sub_02037EC8();
    sub_02034434();
    sub_020582F4(sub_02058388, 0);
}



void sub_02058388(void) {
}



void sub_0205838C(void) {
    sub_02037B38(0x62);
    sub_02057180();
    Heap_Alloc(0xf, r0);
    sub_02056D7C(*((u32*)(*((u32*)_021D41C8) + 0x14)), 0);
    sub_02057F80();
    sub_02037504();
    sub_02037AC0(0x5c);
    sub_020582F4(sub_020583EC, 0);
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = (*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1);
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = 0x1e;
    sub_02037AC0(0x62, *((u32*)_021D41C8));
}



void sub_020583EC(void) {
    sub_0203769C();
    sub_02034638();
    sub_02037B38(0x5c);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    sub_0200FBDC(0);
    sub_0200FBDC(1);
    sub_02056E60();
    sub_0205701C(0);
    sub_020582F4(sub_02058478, 1);
}



void sub_02058444(void) {
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = (*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1);
    sub_02037B38(0x1e, *((u32*)_021D41C8));
    sub_020374E4();
    sub_020582F4(sub_02058608, 0);
}



void sub_02058478(void) {
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = (*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1);
    sub_0203769C((*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1), *((u32*)_021D41C8));
    sub_02057E50();
    sub_02037AC0(0x1e);
    sub_02037AC0(0x1e);
    sub_020582F4(sub_02058444, 0x14);
}



void sub_020584BC(void) {
    sub_02037B38(0x62);
    sub_02057180();
    Heap_Alloc(0xf, r0);
    sub_02056D7C(*((u32*)(*((u32*)_021D41C8) + 0x14)), 0);
    sub_02057F80();
    sub_02037AC0(0x5c);
    sub_020582F4(sub_02058518, 0);
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = (*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1);
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = 0x1e;
    sub_02037AC0(0x62, *((u32*)_021D41C8));
}



void sub_02058518(void) {
    sub_0203769C();
    sub_02034638();
    sub_02037B38(0x5c);
    sub_02056E60();
    sub_0205701C(0);
    // add r0, sp, #0xc
    // strb r1, [r0]
    // add r1, sp, #0xc
    sub_020376E0(0x5e, 1);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    sub_0200FBDC(0);
    sub_0200FBDC(1);
    sub_020582F4(sub_020586EC, 0);
}



void sub_0205857C(void) {
    // str r0, [sp]
    sub_02037454(0);
    sub_0203769C();
    // ldr r1, [sp]
    sub_02037B5C(r1);
    // add r1, #0xd2
    Heap_Free(*((u32*)(*((u32*)_021D41C8) + 0)), *((u32*)(*((u32*)_021D41C8) + 0x14)));
    // str r7, [r0, r5]
    StartMapSceneScript(*((u32*)(*((u32*)_021D41C8) + 0x14)), 0x0000238E, 0);
    // ldr r0, [sp]
    // str r0, [sp]
    sub_02037454((r0 + 1));
    // ldr r1, [sp]
    sub_020399FC(4, *((u32*)(*((u32*)(*((u32*)_021D41C8) + 0x14)) + 8)));
}



void sub_02058608(void) {
    sub_02057C94();
    // add r0, #0x3f
    // strb r1, [r0]
    // add r0, sp, #0
    // strb r1, [r0]
    // add r1, sp, #0
    sub_020376E0(0x5e, 1);
    sub_020582F4(sub_020586EC, 0);
    sub_0205857C();
}



void sub_02058640(void) {
    SaveArray_Party_Alloc(0xb);
    *((u32*)(*((u32*)_021D41C8) + 0x40)) = r0;
    Party_Copy(r4, *((u32*)(*((u32*)_021D41C8) + 0x40)), *((u32*)_021D41C8));
    sub_020582F4(sub_02058870, 3);
    // add r0, sp, #0
    // strb r1, [r0]
    // add r1, sp, #0
    sub_020376E0(0x5e, 3);
    sub_020582F4(sub_02058608, 0);
}



void sub_02058690(void) {
    // bx r3
    // _02058698: .word sub_020582F4
    // _0205869C: .word sub_02058608
}



void sub_020586A0(void) {
    sub_02037958();
    sub_0203769C();
    sub_02057F18();
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = (*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1);
    sub_02057F58((*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1), *((u32*)_021D41C8));
    sub_02059538(*((u32*)(*((u32*)_021D41C8) + 0x14)), sub_02058640);
    sub_020582F4(sub_02058690, 0);
}



void sub_020586EC(void) {
    // add r0, #0x3f
    sub_020582F4(sub_020586A0, 5);
    // add r0, sp, #0
    // strb r1, [r0]
    // add r1, sp, #0
    sub_020376E0(0x5e, 0);
    sub_0205857C();
}



void sub_02058720(void) {
}



void sub_02058740(void) {
    // cmp r0, #0
    // beq _0205875A
    // beq _02058756
    // bne _0205875A
    // nop
    // _02058760: .word _021D41C8
    // _02058764: .word sub_020586EC
    // _02058768: .word sub_02058608
}



void sub_0205876C(void) {
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = (*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1);
    sub_0203993C((*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1), *((u32*)_021D41C8));
    // add r0, sp, #0
    sub_02039980();
    // add r1, sp, #0
    sub_02051598(*((u32*)(*((u32*)_021D41C8) + 0x14)), *((u32*)(*((u32*)_021D41C8) + 0x40)), r4);
    sub_020515FC(r4);
    Heap_Free(*((u32*)(*((u32*)_021D41C8) + 0x40)));
    *((u32*)(*((u32*)_021D41C8) + 0x40)) = 0;
    sub_02058098(*((u32*)_021D41C8), 0);
}



void sub_020587E8(void) {
    sub_02036010();
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = (*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1);
    sub_02037AC0(4, *((u32*)_021D41C8));
    sub_02037B38(4);
    sub_020582F4(sub_0205876C, 0);
}



void sub_0205882C(void) {
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = (*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1);
    sub_02035FD8((*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1), *((u32*)_021D41C8));
    sub_020582F4(sub_020587E8, 0x78);
}



void sub_02058854(void) {
    sub_02037B38(3);
    sub_020582F4(sub_0205882C, 2);
}



void sub_02058870(void) {
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = (*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1);
    sub_02056EA0(0, *((u32*)_021D41C8));
    sub_02037AC0(3);
    sub_020582F4(sub_02058854, 0);
}



void sub_020588A0(void) {
    sub_02037E38();
    sub_020582F4(sub_020588B4, 2);
}



void sub_020588B4(void) {
    sub_02035664();
    sub_020582F4(sub_0205836C, 0xa);
}



void sub_020588CC(void) {
    // add r0, r1, r0
    *((u8*)(r0 + 0x10)) = 1;
}



void sub_020588DC(void) {
}



void sub_020588F8(void) {
    sub_0203769C();
    sub_02037B38(0x5f);
    sub_02036FD8(0x58, *((u32*)(*((u32*)_021D41C8) + (r4 << 2))), 0x0000066C);
    sub_020582F4(sub_02058930, 0);
}



void sub_02058930(void) {
    sub_02037454();
    // add r0, r0, r4
    sub_02037454(*((u8*)(*((u32*)_021D41C8) + 0x10)));
    sub_02037AC0(0x61);
    sub_020582F4(sub_020589D8, 0);
}



void sub_0205896C(void) {
    sub_02036010();
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = (*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1);
    sub_02037AC0(5, *((u32*)_021D41C8));
    sub_02037B38(5);
    sub_020582F4(sub_020589F4, 0);
}



void sub_020589B0(void) {
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = (*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1);
    sub_02035FE4((*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1), *((u32*)_021D41C8));
    sub_020582F4(sub_0205896C, 0x78);
}



void sub_020589D8(void) {
    sub_02037B38(0x61);
    sub_020582F4(sub_020589B0, 2);
}



void sub_020589F4(void) {
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = (*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1);
    sub_02037AC0(0x62, *((u32*)_021D41C8));
    // add r0, #0x3e
    sub_020582F4(sub_0205838C, 0x1e);
    sub_020582F4(sub_020584BC, 0x1e);
}



void sub_02058A38(void) {
    sub_02037B38(0x5b);
    sub_020398D4(0, 0);
    sub_02056EA0(1);
    sub_020582F4(sub_02058A78, 5);
}



void sub_02058A60(void) {
    sub_02056EA0(1);
    sub_020582F4(sub_02058A78, 5);
}



void sub_02058A78(void) {
    *((u16*)(*((u32*)_021D41C8) + 0x38)) = (*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1);
    sub_02037E9C((*((u16*)(*((u32*)_021D41C8) + 0x38)) - 1), *((u32*)_021D41C8));
    sub_020582F4(sub_02058098, 0);
}



void sub_02058AA0(void) {
    // cmp r0, #0
    // bne _02058AAC
    // beq _02058ACC
    // beq _02058ACC
    // beq _02058ACC
    // beq _02058ACC
    // bne _02058AD0
    // _02058AD4: .word _021D41C8
    // _02058AD8: .word sub_02058870
    // _02058ADC: .word sub_02058854
    // _02058AE0: .word sub_0205882C
    // _02058AE4: .word sub_020587E8
    // _02058AE8: .word sub_0205876C
}


