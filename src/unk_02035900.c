/* Decompiled from asm/unk_02035900.s */
#include "global.h"

void sub_02035900(void) {
    *((u8*)(_021D4140 + 1)) = 0;
    sub_0203993C(_021D4140);
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    sub_020379A0(0xf);
    Heap_Alloc(0xf, (0x6e << 4));
    // and r3, r1
    // sub r1, r1, r3
    *((u32*)(_021D4140 + 4)) = r0;
    // add r0, r1, r0
    *((u32*)(_021D4140 + 8)) = r0;
    MI_CpuFill8(r4, (0x1b << 6), r0);
    sub_0203993C();
    sub_02034044();
    // add r2, #0x40
    // str r2, [r1, r0]
    // add r5, #0x40
    // str r5, [r1, r0]
    // str r5, [r0, r3]
    // add r0, #0x1d
    // strb r5, [r3, r0]
    // add r0, #0x1e
    // strb r5, [r3, r0]
    Heap_Alloc(0xf, (*((u32*)(*((u32*)(_021D4140 + 8)) + (0x69 << 4))) << 1), *((u32*)(_021D4140 + 8)), *((u32*)(_021D4140 + 8)));
    // str r0, [r3, r1]
    Heap_Alloc(0xf, *((u32*)(*((u32*)(_021D4140 + 8)) + (0x69 << 4))), *((u32*)(_021D4140 + 8)), *((u32*)(_021D4140 + 8)));
    // str r0, [r3, r1]
    Heap_Alloc(0xf, *((u32*)(*((u32*)(_021D4140 + 8)) + 0x0000068C)), *((u32*)(_021D4140 + 8)), *((u32*)(_021D4140 + 8)));
    // str r0, [r3, r1]
    Heap_Alloc(0xf, *((u32*)(*((u32*)(_021D4140 + 8)) + 0x0000068C)), *((u32*)(_021D4140 + 8)), *((u32*)(_021D4140 + 8)));
    // str r0, [r2, r1]
    sub_0203993C(0x00000488, *((u32*)(_021D4140 + 8)));
    // add r0, r3, r2
    // sub r2, #0xe8
    // add r2, r3, r2
    sub_02033F44(_021D4140, 0x64, (0x16 << 6), *((u32*)(_021D4140 + 8)));
    // add r0, r3, r2
    // sub r2, #0x90
    // add r2, r3, r2
    sub_02033F44(_021D4140, (0x32 << 4), (0x5a << 4), *((u32*)(_021D4140 + 8)));
    // add r0, r3, r2
    // sub r2, #0xe8
    // add r2, r3, r2
    sub_02033F44(_021D4140, 0x14, (0x16 << 6), *((u32*)(_021D4140 + 8)));
    // add r0, r3, r2
    // sub r2, #0x90
    // add r1, #0xee
    // add r2, r3, r2
    sub_02033F44(_021D4140, r5, (0x5a << 4), *((u32*)(_021D4140 + 8)));
    GF_AssertFail(*((u32*)(r1 + 8)));
    // strh r0, [r3, r1]
    // add r1, #0x12
    // add r3, r3, r0
    // strb r5, [r3, r1]
    sub_02035DA4((0 + 1), 0x00000694, _021D4140, *((u32*)(_021D4140 + 8)));
    // add r0, r1, r0
    sub_0203778C(0x0000062C, *((u32*)(_021D4140 + 8)));
    SysTask_CreateOnVBlankQueue(sub_020360EC, 0, 0);
    // str r0, [r2, r1]
    // strb r2, [r1, r0]
}




void sub_02035AE0(void) {
    sub_0203993C();
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    // strb r1, [r0, r2]
    // add r2, #0x2c
    // strb r1, [r4, r0]
    MI_CpuFill8(*((u32*)(*((u32*)(_021D4140 + 8)) + 0x0000048C)), 0, *((u32*)(*((u32*)(_021D4140 + 8)) + (0x66 << 4))), *((u32*)(_021D4140 + 8)));
    // add r0, r1, r0
    MI_CpuFill8(0x0000051C, 0, 0x60);
    _s32_div_f(*((u32*)(*((u32*)(_021D4140 + 8)) + 0x0000068C)), r7);
    // str r0, [sp, #4]
    // add r0, r1, r0
    // add r0, r0, r5
    // add r1, r1, r6
    sub_02033AE0(0x0000051C, *((u32*)(*((u32*)(_021D4140 + 8)) + 0x0000048C)), r0);
    // ldr r0, [sp, #4]
    // add r6, r6, r4
    // add r5, #0xc
    // str r0, [sp, #4]
    MI_CpuFill8(*((u32*)(*((u32*)(_021D4140 + 8)) + 0x00000488)), 0, *((u32*)(*((u32*)(_021D4140 + 8)) + 0x0000068C)), *((u32*)(_021D4140 + 8)));
    // add r0, r1, r0
    MI_CpuFill8((0x4b << 4), 0, 0x60);
    // str r0, [sp]
    // add r0, r1, r0
    // add r0, r0, r5
    // add r1, r1, r6
    sub_02033AE0((0x4b << 4), *((u32*)(*((u32*)(_021D4140 + 8)) + 0x00000488)), r4);
    // ldr r0, [sp]
    // add r6, r6, r4
    // add r5, #0xc
    // str r0, [sp]
    // add r0, r1, r0
    MI_CpuFill8((0xc2 << 2), 0, (6 << 6));
    // add r0, r2, r0
    // add r1, r2, r1
    sub_02033AE0((0x51 << 4), (0xc2 << 2), (6 << 6));
    // add r0, #0x80
    // add r2, #0x92
    MI_CpuFill8(*((u32*)(_021D4140 + 8)), 0xee, 0xee);
    // add r0, r1, r0
    // add r2, #0x92
    MI_CpuFill8((5 << 6), 0xee, 0xee);
    // add r0, r0, r2
    // sub r2, #0xf8
    MI_CpuFill8(*((u32*)(_021D4140 + 8)), 0, (2 << 8));
    // add r0, r1, r0
    // add r1, r1, r2
    // sub r2, #0xf8
    sub_02033AE0(0x00000498, *((u32*)(_021D4140 + 8)), (2 << 8));
    MI_CpuFill8(*((u32*)(_021D4140 + 8)), 0xee, 0x26);
    // add r0, #0x40
    MI_CpuFill8(*((u32*)(_021D4140 + 8)), 0xee, 0x26);
    // strb r2, [r1]
    // add r1, #0x40
    // strb r2, [r1]
    MI_CpuFill8(*((u32*)(*((u32*)(_021D4140 + 8)) + (0x49 << 4))), 0, (*((u32*)(*((u32*)(_021D4140 + 8)) + (0x69 << 4))) << 1), *((u32*)(_021D4140 + 8)));
    // add r0, r3, r1
    // sub r1, #0x14
    sub_02033AE0(_021D4140, *((u32*)(*((u32*)(_021D4140 + 8)) + 0x000004A4)), (*((u32*)(*((u32*)(_021D4140 + 8)) + (0x69 << 4))) << 1), *((u32*)(_021D4140 + 8)));
    // mov ip, r2
    // strb r2, [r3, r1]
    // strb r2, [r3, r1]
    // add r4, r3, r2
    // strb r6, [r4, r3]
    // add r5, r3, r2
    // strb r3, [r5, r4]
    // mov r3, ip
    // add r4, r4, r3
    // strh r6, [r4, r3]
    // add r5, r3, r1
    // strb r4, [r5, r3]
    // add r5, r3, r1
    // strh r4, [r5, r3]
    // add r4, r3, r1
    // str r6, [r4, r3]
    // add r4, r3, r1
    // str r6, [r4, r3]
    // add r1, #0xc
    // add r4, r3, r7
    // str r6, [r4, r3]
    // mov r3, ip
    // mov ip, r3
    // str r6, [r2, r0]
    // sub r3, #0x3e
    // strb r2, [r4, r3]
    // sub r3, #0x40
    // strh r2, [r4, r3]
    // sub r2, #0x44
    // str r6, [r3, r2]
    // sub r2, #0x48
    // str r6, [r3, r2]
    // add r3, #0x4a
    // strb r2, [r4, r3]
    // add r3, #0x4b
    // strb r2, [r4, r3]
    // strb r6, [r1]
    // sub r0, #0xe8
    // add r0, r1, r0
    sub_02033F70(0x00000668, *((u32*)(_021D4140 + 8)), 1, 0x00000668);
    // add r0, r1, r0
    sub_02033F70((0x5a << 4), *((u32*)(_021D4140 + 8)));
    // strb r2, [r1, r0]
}




void sub_02035DA4(void) {
    // strb r4, [r0, r1]
    // strb r4, [r3, r0]
    // sub r1, #0x4b
    // str r3, [r0, r1]
    sub_02035AE0(*((u32*)(_021D4140 + 8)), 0x000006AF, _021D4140, 1);
    // strb r1, [r0]
    *((u8*)(_0210F900 + 1)) = 4;
}




void sub_02035DD8(void) {
}




void sub_02035DE0(void) {
    // add r0, r0, r5
    // strb r1, [r0, r3]
    // add r6, r2, r5
    // add r2, #8
    // strb r0, [r6, r2]
    // add r0, r2, r0
    // sub r3, #0x2a
    // str r1, [r0, r3]
    sub_0203993C((r0 << 2), 0, *((u32*)(_021D4140 + 8)), 0x00000696);
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    _s32_div_f(*((u32*)(*((u32*)(r4 + 8)) + 0x0000068C)), (r0 + 1));
    // str r0, [sp]
    // add r0, r6, r1
    // sub r1, #0x28
    // ldr r2, [sp]
    // add r0, r0, r4
    // add r1, r1, r7
    sub_02033AE0(0xc, *((u32*)(r6 + (0x4b << 4))));
    // add r0, r2, r1
    // sub r1, #0x90
    // ldr r2, [sp]
    // add r0, r0, r4
    // add r1, r1, r7
    sub_02033AE0(_021D4140, *((u32*)(*((u32*)(_021D4140 + 8)) + 0x0000051C)), *((u32*)(_021D4140 + 8)));
    // add r0, r0, r4
    // strb r1, [r0, r2]
    // add r1, r0, r4
    // strh r5, [r1, r0]
    // add r5, r1, r4
    // str r0, [r5, r1]
    // sub r2, #0xa
    // add r1, r1, r4
    // str r0, [r1, r2]
}




void sub_02035E9C(void) {
    sub_020373B4(((1 << 0x10) >> 0x10));
    // add r0, r0, r5
    sub_02035DE0(r5);
}




void sub_02035ED0(void) {
}




void sub_02035ED8(void) {
    // str r3, [sp]
    sub_0203993C();
    sub_02034044();
    // ldr r2, [sp]
    sub_02034EF0(r5, r6);
    sub_02033A90(sub_02035ED0);
    sub_02035900(r5, r7);
}




void sub_02035F14(void) {
    sub_0203993C();
    sub_02034044();
    sub_02034F64(r5, r6);
    sub_02035900(r5, r7);
    *((u8*)(_0210F900 + 1)) = 4;
}




void sub_02035F4C(void) {
    sub_0203769C();
    // strb r1, [r2, r0]
    // strb r4, [r2, r0]
    sub_02035DD8(0x000006AD, *((u8*)(*((u32*)(_021D4140 + 8)) + 0x000006AD)), *((u32*)(_021D4140 + 8)));
    sub_02037594();
}




void sub_02035FA8(void) {
    // strb r0, [r3, r1]
    // strb r1, [r3, r0]
}




void sub_02035FD8(void) {
}




void sub_02035FE4(void) {
}




void sub_02035FF0(void) {
    // ldr r0, _02036008 ; =_021D4140
    // ldr r1, [r0, #8]
    // ldr r0, _0203600C ; =0x000006AD
    // ldrb r0, [r1, r0]
    // cmp r0, #2
    // bne _02036000
    // mov r0, #1
    // bx lr
    // cmp r0, #3
    // bne _02036006
    // mov r0, #0
    // bx lr
    // _02036008: .word _021D4140
    // _0203600C: .word 0x000006AD
    // TODO: decompile
}




void sub_02036010(void) {
}




void sub_02036024(void) {
    sub_0203993C(*((u32*)(_021D4140 + 8)));
    sub_02034044();
    ov00_021E6CB8();
    sub_0203507C();
    sub_020379F8();
    sub_020343E4();
    *((u8*)(_021D4140 + 1)) = 0;
    SysTask_Destroy(*((u32*)(*((u32*)(_021D4140 + 8)) + 0x0000057C)), *((u32*)(_021D4140 + 8)));
    // str r3, [r2, r0]
    // sub r0, #0xec
    Heap_Free(*((u32*)(*((u32*)(_021D4140 + 8)) + 0x0000057C)), *((u32*)(_021D4140 + 8)), *((u32*)(_021D4140 + 8)), 0);
    Heap_Free(*((u32*)(*((u32*)(_021D4140 + 8)) + 0x00000494)), *((u32*)(_021D4140 + 8)));
    Heap_Free(*((u32*)(*((u32*)(_021D4140 + 8)) + 0x0000048C)), *((u32*)(_021D4140 + 8)));
    Heap_Free(*((u32*)(*((u32*)(_021D4140 + 8)) + 0x00000488)), *((u32*)(_021D4140 + 8)));
    // add r0, r1, r0
    sub_02033F90((0x5a << 4), *((u32*)(_021D4140 + 8)));
    // add r0, r1, r0
    sub_02033F90((0x16 << 6), *((u32*)(_021D4140 + 8)));
    Heap_Free(*((u32*)(_021D4140 + 4)));
    *((u32*)(_021D4140 + 8)) = 0;
    *((u32*)(_021D4140 + 4)) = 0;
}




void sub_020360E4(void) {
}




void sub_020360EC(void) {
    sub_02036AD8(*((u8*)(_021D4140 + 1)));
    sub_0203769C();
    sub_020373B4(0);
    sub_02036508();
    *((u8*)(_021D4140 + 1)) = 0;
}




void sub_0203611C(void) {
}




BOOL sub_02036144(void) {
    sub_0203817C();
    // strb r4, [r0, r1]
    *((u8*)(_021D4140 + 1)) = 0;
    sub_02035F4C(0, (0x000006B9 + 3), 0x000006B9, _021D4140);
    // and r1, r3
    // strh r1, [r0, r2]
    sub_02036BE4(*((u32*)(_021D4140 + 8)), (0x00007FFF | *((u16*)(*((u32*)(_021D4140 + 8)) + 0x0000065C))), 0x0000065C, *((u32*)(gSystem + 0x44)));
    sub_02036298();
    // and r0, r2
    // strh r0, [r3, r1]
    sub_02035FF0((2 << 0xe), 0x0000065C, *((u16*)(*((u32*)(_021D4140 + 8)) + 0x0000065C)), *((u32*)(_021D4140 + 8)));
    sub_020372E4();
    sub_0203769C();
    sub_020373B4(0);
    sub_0203993C();
    sub_02034084();
    sub_0203667C();
    sub_0203769C();
    sub_02035FF0();
    sub_02037334();
    *((u8*)(_021D4140 + 1)) = 1;
    sub_020355C8(*((u16*)(*((u32*)(_021D4140 + 8)) + 0x00000694)), *((u32*)(_021D4140 + 8)));
    sub_0203769C();
    sub_02035E9C();
    sub_0203611C();
    sub_020355C8(0);
    sub_02039A00(0);
    sub_02037ADC();
}




void sub_0203622C(void) {
}




void sub_0203624C(void) {
    *((u8*)(_021D4140 + 1)) = 0;
    // strb r1, [r2, r0]
    sub_02035DA4(0x000006AD, 1, *((u32*)(_021D4140 + 8)));
    *((u8*)(_021D4140 + 1)) = r4;
}




void sub_02036274(void) {
    *((u8*)(_021D4140 + 1)) = 0;
    sub_02035DA4(*((u32*)(_021D4140 + 8)), 0);
    sub_02034E2C();
    *((u8*)(_021D4140 + 1)) = r4;
}




void sub_02036298(void) {
    sub_0203993C();
    sub_02034084();
    // sub r1, #0x52
    sub_02036630(*((u32*)(_021D4140 + 8)), *((u32*)(*((u32*)(_021D4140 + 8)) + 0x000006B6)), *((u8*)(*((u32*)(_021D4140 + 8)) + 0x000006B6)));
    sub_02036E60(*((u32*)(_021D4140 + 8)));
    *((u8*)(_0210F900 + 1)) = 2;
    sub_02036E60(_0210F900, *((u8*)(_0210F900 + 1)));
    *((u8*)(_0210F900 + 1)) = 2;
    sub_02036FA8(_0210F900, 2);
    ov00_021E60E8(*((u32*)(_021D4140 + 8)), 0x26);
    sub_0203993C();
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    sub_020373B4(((0 << 0x10) >> 0x10));
    // add r0, r0, r5
    // str r2, [r0, r1]
    *((u8*)(_0210F900 + 1)) = 4;
    sub_0203993C(_0210F900, 4, (*((u32*)(*((u32*)(r7 + 8)) + 0x0000066C)) + 1));
    sub_02034044();
    // sub r1, #0x52
    // sub r2, #0x4e
    sub_02036E60(*((u32*)(_021D4140 + 8)), *((u8*)(_0210F900 + 1)), 0x000006B6);
    *((u8*)(_0210F900 + 1)) = 2;
    sub_02036E60(_0210F900, *((u8*)(_0210F900 + 1)));
    *((u8*)(_0210F900 + 1)) = 2;
    sub_02036FA8(_0210F900, 2);
    ov00_021E5F84(*((u32*)(_021D4140 + 8)), 0x26);
    *((u8*)(_0210F900 + 1)) = 4;
    // str r1, [r2, r0]
    sub_02033298(0x00000668, (*((u32*)(*((u32*)(_021D4140 + 8)) + 0x00000668)) + 1), *((u32*)(_021D4140 + 8)));
    sub_0203769C();
    sub_020373B4();
    // add r0, #0x47
    // add r0, r2, r0
    sub_02036E60((*((u8*)(*((u32*)(_021D4140 + 8)) + 0x00000668)) << 6), *((u32*)(*((u32*)(_021D4140 + 8)) + 0x00000668)), *((u32*)(_021D4140 + 8)));
    // sub r0, r0, r1
    // add r0, r2, r0
    sub_02036E60((1 << 6), *((u8*)(*((u32*)(_021D4140 + 8)) + 0x000006AF)), *((u32*)(_021D4140 + 8)));
    *((u8*)(_0210F900 + 1)) = 0;
    sub_02036AD8(_0210F900, 0);
}




void sub_02036438(void) {
    // str r0, [sp]
    sub_0203993C();
    sub_0203772C(((r0 << 0x10) >> 0x10));
    // str r0, [sp, #0xc]
    sub_0203993C();
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r6, [sp, #4]
    // add r0, r1, r0
    // add r0, r0, r6
    sub_02033C28((0x4b << 4), *((u32*)(_021D4140 + 8)));
    // ldr r0, [sp, #4]
    sub_020373B4(((r0 << 0x10) >> 0x10));
    // add r0, r5, r0
    // add r1, r4, r0
    // add r1, #0x80
    // strb r0, [r1]
    // add r0, r5, r0
    // add r1, r4, r0
    // add r1, #0x80
    // strb r0, [r1]
    // ldr r2, [sp, #0xc]
    // add r0, r1, r0
    // add r1, #0x80
    // add r1, r1, r5
    // add r0, r0, r6
    // add r1, r1, r4
    sub_02033B4C((0x4b << 4), *((u32*)(_021D4140 + 8)));
    // add r0, r5, r0
    // add r0, r4, r0
    // add r0, #0x80
    // ldr r0, [sp, #0xc]
    // add r6, #0xc
    // add r4, r4, r0
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r1, [sp, #4]
    // ldr r0, [sp, #8]
}




void sub_02036508(void) {
    sub_0203993C(*((u32*)(_021D4140 + 8)));
    sub_02034044();
    sub_0203993C();
    sub_0203772C(((r0 << 0x10) >> 0x10));
    sub_0203993C();
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    // strb r1, [r0]
    sub_02035FF0(_0210F900, (*((u8*)_0210F900) + 1));
    sub_02036438(*((u8*)(*((u32*)(_021D4140 + 8)) + (0x6b << 4))), *((u32*)(_021D4140 + 8)));
    // strb r1, [r0]
    sub_02033298(_021D4140, 1);
    // add r3, #0x80
    // add r0, r3, r2
    sub_02033800(*((u8*)(*((u32*)(_021D4140 + 8)) + (0x6b << 4))), 0xc0, 0xe, sub_02036ABC);
    // strb r1, [r0]
    // strb r4, [r7]
    sub_020373B4(((0 << 0x10) >> 0x10), *((u8*)_0210F900));
    // add r0, r0, r5
    // str r2, [r0, r1]
    // add r4, #0x80
    // add r1, r4, r3
    sub_020367B0(0, *((u8*)(*((u32*)(_021D4140 + 8)) + (0x6b << 4))), 0xc0, (*((u8*)(*((u32*)(_021D4140 + 8)) + (0x6b << 4))) * 0xc0));
    // sub r0, r0, r2
    // strb r0, [r3, r1]
    sub_02033298(1, (0x6b << 4), *((u8*)(*((u32*)(_021D4140 + 8)) + (0x6b << 4))), *((u32*)(_021D4140 + 8)));
    // strb r1, [r0]
}




void sub_02036630(void) {
    sub_0203993C();
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    sub_020373B4(((1 << 0x10) >> 0x10));
    // add r1, r0, r5
}




void sub_0203667C(void) {
    sub_0203993C();
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    sub_0203993C();
    sub_02034044();
    sub_020373B4(0);
    sub_02036630(*((u32*)(*((u32*)(_021D4140 + 8)) + 0x00000664)), *((u32*)(_021D4140 + 8)));
    sub_02035FF0(*((u8*)_0210F900));
    sub_02036438(0);
    // strb r1, [r0]
    sub_02035FF0(*((u8*)_0210F900), 2);
    sub_02036438(0);
    // strb r1, [r0]
    // add r0, #0x80
    ov00_021E602C(*((u32*)(_021D4140 + 8)), 0xc0);
    // strb r1, [r0]
    sub_020373B4(((0 << 0x10) >> 0x10), 4);
    // add r0, r0, r5
    // str r2, [r0, r1]
    sub_02033298(*((u32*)(r7 + 8)), 0x0000066C, (*((u32*)(*((u32*)(r7 + 8)) + 0x0000066C)) + 1));
    sub_02036630(*((u8*)_0210F900));
    sub_02035FF0();
    // add r2, #0x80
    // add r0, r2, r0
    sub_02036F30((0xc0 * *((u8*)(*((u32*)(_021D4140 + 8)) + (0x6b << 4)))), *((u8*)(*((u32*)(_021D4140 + 8)) + (0x6b << 4))), *((u32*)(_021D4140 + 8)));
    // add r2, #0x80
    // sub r1, r0, r1
    // add r0, r2, r0
    sub_02036F30((0xc0 * *((u8*)(*((u32*)(_021D4140 + 8)) + (0x6b << 4)))), *((u8*)(*((u32*)(_021D4140 + 8)) + (0x6b << 4))), *((u32*)(_021D4140 + 8)));
    // strb r1, [r0]
    sub_02036508(_0210F900, 0);
}




void sub_020367A8(void) {
}




void sub_020367B0(void) {
    // str r1, [r2, r0]
    sub_02035FF0(*((u8*)r1), (*((u32*)(*((u32*)(_021D4140 + 8)) + 0x00000668)) - 1), *((u32*)(_021D4140 + 8)));
    sub_02035FF0();
    // tst r1, r2
    // strb r2, [r0, r1]
    sub_02035FF0(*((u32*)(_021D4140 + 8)), 0x000006B2, 0);
    sub_0203993C();
    sub_0203772C(((r0 << 0x10) >> 0x10));
    sub_0203993C();
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    // str r0, [sp, #4]
    // str r0, [sp]
    // lsl r2, r4
    // mvn r2, r2
    // and r2, r0
    // lsl r2, r4
    // strh r2, [r1, r0]
    // add r5, r5, r6
    // add r5, r5, r6
    // add r1, r3, r4
    // tst r0, r2
    // add r5, r5, r6
    // add r0, r3, r0
    // ldr r2, [sp]
    // add r0, r0, r7
    // add r3, r4, r3
    sub_02033AF0(0x0000051C, (r5 + 1), *((u8*)r5), 0x0000054C);
    // ldr r0, [sp]
    // add r5, r5, r0
    // add r2, r0, r4
    // strb r1, [r2, r0]
    // ldr r0, [sp, #4]
    // add r7, #0xc
    // strh r3, [r2, r0]
    // strh r2, [r3, r0]
    // add r2, r3, r2
    // strh r2, [r4, r0]
    // add r0, r0, r3
    // add r3, #0xbc
    sub_02033AF0(*((u32*)(_021D4140 + 8)), (r5 + 4), *((u8*)(r5 + 3)), 0x000004A4);
}




void sub_02036904(void) {
}




void sub_0203690C(void) {
    // add r1, r0, r2
    // str r6, [r1, r0]
    // add r2, #0x32
    // add r0, r0, r2
    // tst r1, r2
    // strb r1, [r0, r5]
    sub_02035FF0(*((u32*)(_021D4140 + 8)), 0, *((u8*)r1), _021D4140);
    sub_0203993C();
    sub_0203772C(((r0 << 0x10) >> 0x10));
    sub_0203993C();
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    // tst r0, r1
    // add r1, r0, r3
    // add r0, r1, r0
    // add r3, #0xf5
    sub_02033AF0((0xc * r5), r4, r6, (0x4b << 4));
    // add r1, r1, r0
    // strb r0, [r1, r5]
    sub_02036D14(r4, r5);
    // tst r0, r1
    // add r1, r0, r3
    // add r0, r1, r0
    // add r3, #0x92
    sub_02033AF0((0xc * r5), (r4 + 1), 0xb, 0x0000051C);
}




void sub_020369CC(void) {
    // add r1, r0, r2
    // str r6, [r1, r0]
    // add r2, #0x32
    // add r0, r0, r2
    // tst r1, r2
    // strb r1, [r0, r5]
    sub_02035FF0(*((u32*)(_021D4140 + 8)), 0, *((u8*)r1), _021D4140);
    sub_0203993C();
    sub_0203772C(((r0 << 0x10) >> 0x10));
    sub_0203993C();
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    // lsl r3, r5
    // mvn r3, r3
    // and r0, r3
    // lsl r3, r5
    // strh r0, [r1, r2]
    // add r3, r1, r5
    // tst r0, r2
    // add r1, r1, r3
    // add r0, r1, r0
    // add r3, #0xcb
    sub_02033AF0((0xc * r5), (r4 + 1), (r6 - 1), 0x0000051C);
    // add r1, r0, r5
    // strb r2, [r1, r0]
}




void sub_02036AA0(void) {
}




void sub_02036ABC(void) {
}




void sub_02036AD8(void) {
    sub_0203993C(*((u32*)(_021D4140 + 8)));
    sub_02034044();
    sub_0203993C();
    sub_0203772C(((r0 << 0x10) >> 0x10));
    sub_0203993C();
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    sub_02033298();
    sub_0203769C();
    sub_020373B4();
    sub_0203769C();
    sub_0203769C(*((u8*)(_0210F900 + 1)), *((u8*)(_0210F900 + 1)));
    *((u8*)(_0210F900 + 1)) = (*((u8*)(_0210F900 + 1)) + 1);
    // add r0, r1, r0
    sub_02033800((*((u8*)(*((u32*)(_021D4140 + 8)) + 0x000006AF)) << 6), ((r4 << 0x10) >> 0x10), 0xe, sub_02036AA0);
    *((u8*)(_0210F900 + 1)) = (*((u8*)(_0210F900 + 1)) - 1);
    // sub r0, r0, r3
    // strb r0, [r4, r1]
    // sub r0, #0x47
    // sub r1, #0x47
    // str r0, [r2, r1]
    sub_02033250((*((u32*)(*((u32*)(_021D4140 + 8)) + 0x000006AF)) + 1), 0x000006AF, *((u32*)(_021D4140 + 8)), *((u8*)(*((u32*)(_021D4140 + 8)) + 0x000006AF)));
    // tst r0, r1
    *((u8*)(_0210F900 + 1)) = (*((u8*)(_0210F900 + 1)) + 1);
    sub_02036AA0(1, (*((u8*)(_0210F900 + 1)) + 1));
    // add r1, r2, r1
    sub_0203690C(0, (*((u8*)(*((u32*)(_021D4140 + 8)) + 0x000006AF)) << 6), ((r4 << 0x10) >> 0x10));
    // sub r0, r0, r3
    // strb r0, [r4, r1]
    // sub r0, #0x47
    // sub r1, #0x47
    // str r0, [r2, r1]
}




void sub_02036BE4(void) {
    // tst r3, r1
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // ldrsb r0, [r5, r0]
    // strb r1, [r5, r0]
    // ldrsb r0, [r1, r0]
    // strh r6, [r1, r0]
    // sub r0, #0x34
    // add r6, r5, r0
    // sub r2, #0x34
    _ll_mul(*((u32*)(0 + 8)), *((u32*)(0 + 0xc)), *((u32*)(*((u32*)(_021D4140 + 8)) + (0x66 << 4))), *((u32*)(0 + 4)));
    // add r0, r0, r3
    // adc r1, r2
    // str r0, [r5, r2]
    *((u32*)(r6 + 4)) = *((u32*)(r6 + 0x14));
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02036CA2: ; jump table
    // add r6, r5, r0
    _ll_mul(*((u32*)(r6 + 8)), *((u32*)(r6 + 0xc)), *((u32*)r6), *((u32*)(r6 + 4)));
    // add r0, r3, r0
    // adc r2, r1
    // str r0, [r5, r1]
    *((u32*)(r6 + 4)) = *((u32*)(r6 + 0x14));
    // add r0, #0x35
    // strb r2, [r5, r0]
    // add r1, #0x36
    // strh r4, [r0, r1]
    // strh r3, [r5, r1]
    // add r0, r0, r4
    // strh r0, [r2, r1]
}




void sub_02036D14(void) {
    // add r3, r2, r6
    // strh r5, [r3, r2]
    // and r7, r3
    // and r5, r7
    // add r4, r3, r2
    // strh r2, [r4, r6]
    // add r4, r3, r2
    // strh r2, [r4, r6]
    // add r4, r3, r2
    // strh r2, [r4, r6]
    // add r4, r4, r2
    // strh r2, [r4, r6]
    // asr r2, r0, #5
    // and r2, r0
    // add r1, r0, r1
    // strb r2, [r1, r0]
}




void sub_02036DA0(void) {
    sub_0203751C(0, *((u32*)(_021D4140 + 8)));
    // strb r1, [r2, r0]
    // tst r3, r2
    // add r0, #0x55
    // strb r2, [r4]
    // strb r2, [r1, r0]
    // tst r3, r2
    // add r0, #0x55
    // strb r2, [r4]
    // strb r2, [r1, r0]
    // tst r3, r2
    // add r0, #0x55
    // strb r2, [r4]
    // strb r2, [r1, r0]
    // tst r2, r3
    // add r0, #0x55
    // strb r2, [r4]
    // strb r2, [r1, r0]
    // strb r0, [r4]
}




void sub_02036E60(void) {
    sub_0203993C();
    sub_0203772C(((r0 << 0x10) >> 0x10));
    sub_0203993C();
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    // strb r0, [r4]
    sub_02035FF0(1, *((u32*)(_021D4140 + 8)));
    sub_02036DA0(r4);
    // strb r3, [r2, r0]
    // add r0, r1, r0
    sub_02033C50((0x16 << 6), *((u32*)(_021D4140 + 8)), *((u32*)(_021D4140 + 8)), 0);
    // strb r0, [r4]
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, r1, r0
    // add r1, sp, #0
    sub_02033ECC((0x16 << 6), *((u32*)(_021D4140 + 8)), 1);
    // strb r2, [r1, r0]
    sub_02035FF0(0x000006B4, *((u32*)(_021D4140 + 8)), 1);
    // strb r0, [r3, r1]
    // and r1, r2
    // strb r0, [r4]
}




void sub_02036F30(void) {
    // strb r0, [r4]
    *((u8*)(r0 + 1)) = 1;
    sub_02033250(1, *((u32*)(_021D4140 + 8)));
    // asr r1, r0, #8
    *((u8*)(r4 + 2)) = r1;
    *((u8*)(r4 + 3)) = r0;
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, r1, r0
    // add r1, sp, #0
    sub_02033ECC((0x5a << 4), *((u32*)(_021D4140 + 8)), 0);
    // strb r2, [r1, r0]
    // ldr r1, [sp, #4]
    // sub r0, r0, r1
    *((u8*)(r4 + 4)) = 0xbb;
    // strb r2, [r1, r0]
    *((u8*)(r4 + 4)) = 0xbb;
}




void sub_02036FA8(void) {
    _s32_div_f(*((u8*)(*((u32*)(_021D4140 + 8)) + (0 + 1))), *((u8*)(*((u32*)(_021D4140 + 8)) + 0x000006BB)), *((u32*)(_021D4140 + 8)));
}




void sub_02036FD8(void) {
    sub_0203769C();
    sub_020373B4();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r1, r0
    sub_02033DF0((0x16 << 6), r5, r4, r6);
    sub_0203993C(1);
    sub_02037974();
}




BOOL sub_02037030(void) {
    sub_0203769C();
    sub_020373B4();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r1, r0
    sub_02033DF0((0x16 << 6), r5, r4, r6);
    sub_0203993C(1);
    sub_02037974();
}




void sub_02037088(void) {
    sub_0203769C();
    GF_AssertFail();
    sub_020373B4(0);
    sub_02035FF0(0);
    sub_02036FD8(r5, r4, r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r1, r0
    sub_02033DF0((0x5a << 4), r5, r4, r6);
    sub_0203993C(1);
    sub_02037974();
}




void sub_02037108(void) {
    sub_0203769C();
    sub_02037974();
    sub_020373B4(0);
    sub_02035FF0(0);
    sub_02037030(r5, r4, r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r1, r0
    sub_02033DF0((0x5a << 4), r5, r4, r6);
    sub_0203993C(1);
    sub_02037974();
}




void sub_02037184(void) {
}




void sub_02037190(void) {
    // add r0, r1, r0
}




void sub_020371A8(void) {
}




void sub_020371C4(void) {
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    sub_02033BC4();
    sub_02033B68(r5);
    // ldrsh r0, [r5, r0]
    *((u8*)(r4 + 0xa)) = r0;
    // str r0, [sp, #0x10]
    sub_020341DC(r0);
    sub_02033BC4(r5, *((u32*)(_021D4140 + 8)));
    // ldr r0, [sp, #0x10]
    *((u16*)(r5 + 4)) = r0;
    sub_02033B68(r5);
    sub_02033B68(r5);
    // add r6, r6, r0
    // ldrsh r0, [r5, r0]
    // str r0, [sp, #0x10]
    *((u16*)(r4 + 8)) = r6;
    sub_02034244(r7);
    // ldr r1, [sp, #4]
    sub_02034280(r7, *((u16*)(r4 + 8)));
    *((u32*)(r4 + 4)) = r0;
    // ldr r1, [sp, #8]
    // sub r2, r6, r2
    sub_02033B4C(r5, *((u32*)r4));
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r1, r2, r1
    // ldr r2, [sp, #0xc]
    MI_CpuCopy8(*((u32*)r4), *((u32*)(r4 + 4)));
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [r4]
    // str r4, [sp]
    // ldr r0, [sp, #4]
    sub_020371A8(r7, r6, *((u32*)(r4 + 4)));
    sub_02033BC4(r5);
    // ldr r1, [sp, #8]
    sub_02033B4C(r5, r6);
    // ldr r0, [sp, #4]
    // ldr r3, [sp, #8]
    // str r4, [sp]
    sub_020371A8(r7, r6);
    // ldr r0, [sp, #0x10]
    *((u16*)(r5 + 4)) = r0;
    sub_02033BC4(r5);
}




void sub_020372E4(void) {
    // add r0, r1, r0
    sub_02033C28(0x000004A4, *((u32*)(_021D4140 + 8)));
    // add r0, r1, r0
    sub_02033BC4(0x000004A4, *((u32*)(_021D4140 + 8)));
    // add r0, r4, r2
    // sub r2, #0x10
    // add r3, r4, r3
    sub_020371C4(_021D4140, 0, *((u32*)(*((u32*)(_021D4140 + 8)) + 0x000004A4)), (0x62 << 4));
}




void sub_02037334(void) {
    sub_0203993C(*((u8*)(*((u32*)(_021D4140 + 8)) + 0x000006BA)), *((u32*)(_021D4140 + 8)));
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    // str r0, [sp]
    // add r0, r1, r0
    // add r0, r0, r5
    sub_02033C28(0x0000051C, *((u32*)(_021D4140 + 8)));
    // add r0, r1, r0
    // add r0, r0, r5
    sub_02033BC4(0x0000051C, *((u32*)(r7 + 8)));
    // add r0, r6, r0
    // add r3, r6, r3
    // add r0, r0, r5
    // add r3, r3, r5
    sub_020371C4(0x0000051C, r4, *((u32*)(*((u32*)(r7 + 8)) + 0x00000494)), (0x17 << 6));
    // ldr r0, [sp]
    // add r5, #0xc
}




BOOL sub_020373B4(void) {
    sub_0203993C(0);
    sub_02034044();
    ov00_021EE4FC(*((u8*)(*((u32*)(_021D4140 + 8)) + 0x000006B6)), *((u32*)(_021D4140 + 8)));
    // lsl r1, r4
    // tst r1, r2
    sub_02037474(0, 1, ((r0 << 0x10) >> 0x10));
    sub_02033298(0);
    sub_0203769C(0);
    sub_0203769C(1);
    sub_02033250();
    // lsl r2, r4
    // tst r0, r2
    // lsl r1, r4
    // tst r1, r2
}




void sub_02037454(void) {
}




BOOL sub_02037474(void) {
    sub_0203993C(*((u32*)(_021D4140 + 8)));
    sub_02034044();
    sub_02035650(1);
}




void sub_02037498(void) {
    // strb r0, [r2, r1]
}




void sub_020374AC(void) {
    // add r1, r1, r0
}




void sub_020374C0(void) {
    // add r3, r2, r1
    // strh r1, [r3, r2]
}




void sub_020374E4(void) {
    // strh r0, [r3, r1]
}




void sub_02037504(void) {
    // strh r1, [r2, r0]
}




void sub_0203751C(void) {
    // and r0, r1
}




void sub_0203753C(void) {
    sub_02035FF0();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r1, r0
    sub_02033DF0((0x16 << 6), r5, r4, r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r1, r0
    sub_02033DF0((0x5a << 4), r5, r4, r6);
}




void sub_02037594(void) {
    sub_02035FF0(*((u8*)(*((u32*)(_021D4140 + 8)) + 0x000006AB)), 0x000006AB, *((u32*)(_021D4140 + 8)));
    // add r1, r2, r1
    sub_020376E0(0xb, 0x000006AC, *((u32*)(_021D4140 + 8)));
    // add r1, r2, r1
    sub_02037108(0xb, 0x000006AC, 1);
    // strb r2, [r1, r0]
    // add r1, r2, r1
    sub_020376E0(0xc, (*((u32*)(_021D4140 + 8)) + 1), 2);
    sub_02035FA8(*((u8*)(*((u32*)(_021D4140 + 8)) + 0x000006AC)), *((u32*)(_021D4140 + 8)));
    // strb r2, [r1, r0]
}




void sub_02037618(void) {
    sub_0203769C();
    // strb r3, [r2, r0]
    // strb r2, [r1, r0]
}




void sub_02037640(void) {
    sub_0203769C();
    // strb r3, [r2, r0]
    // strb r2, [r1, r0]
}




void sub_02037668(void) {
    sub_0203769C();
    sub_02035FA8(*((u8*)r4), *((u32*)(_021D4140 + 8)));
    // strb r2, [r1, r0]
}




BOOL sub_0203769C(void) {
    sub_0203993C(*((u32*)(_021D4140 + 8)));
    sub_02034044();
    ov00_021E6964();
    // mvn r1, r1
    sub_020338F4(((r0 << 0x10) >> 0x10), 0);
}




void sub_020376D4(void) {
}




void sub_020376E0(void) {
}




void sub_020376EC(void) {
}




void sub_020376F8(void) {
}




void sub_02037700(void) {
    sub_020398D4(1, 1);
    sub_0203569C(1);
}




void sub_0203772C(void) {
}




void sub_0203774C(void) {
}




void sub_0203775C(void) {
}




void sub_0203776C(void) {
    // add r1, sp, #0
}




void sub_0203778C(void) {
    // add r0, sp, #0x10
    // add r1, sp, #4
    GF_RTC_CopyDateTime();
    // ldr r6, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // add r3, r1, r0
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #4]
    // add r6, r0, r6
    // ldr r2, [sp, #8]
    // adc r0, r5
    // ldr r5, [sp]
    // add r6, r5, r6
    // adc r5, r0
    // add r6, r1, r0
    // adc r1, r5
    // add r5, r2, r0
    // adc r2, r1
    // add r2, r3, r0
    // str r2, [r4]
    // adc r0, r1
    *((u32*)(r4 + 4)) = 0x00000000;
    *((u32*)(r4 + 8)) = 0x6C078965;
    *((u32*)(r4 + 0xc)) = 0x5D588B65;
    *((u32*)(r4 + 0x10)) = 0x00269EC3;
    *((u32*)(r4 + 0x14)) = 0;
}




int sub_02037824(void) {
    // add r0, r2, r0
}




void sub_0203783C(void) {
    // add r0, r1, r0
}




void sub_02037854(void) {
    // add r0, r1, r0
}




void sub_0203786C(void) {
    // strb r0, [r2, r1]
}




void sub_02037880(void) {
    // ldr r0, _0203788C ; =_021D4140
    // ldr r1, [r0, #8]
    // ldr r0, _02037890 ; =0x000006B6
    // ldrb r0, [r1, r0]
    // bx lr
    // nop
    // _0203788C: .word _021D4140
    // _02037890: .word 0x000006B6
    // TODO: decompile
}




void sub_02037894(void) {
    // add r2, r2, r1
    // strb r0, [r2, r1]
}




int sub_020378AC(void) {
    // add r2, r1, r0
}




void sub_020378CC(void) {
}




void sub_020378E4(void) {
    sub_0203993C();
    sub_02034044();
    // str r4, [r3, r1]
    // str r0, [r3, r1]
    // add r3, r3, r5
    // str r4, [r3, r1]
}




void sub_02037930(void) {
}




void sub_02037958(void) {
    // ldr r0, _0203796C ; =_021D4140
    // ldr r1, [r0, #8]
    // ldr r0, _02037970 ; =0x000006B1
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // beq _02037968
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _0203796C: .word _021D4140
    // _02037970: .word 0x000006B1
    // TODO: decompile
}




void sub_02037974(void) {
    // strb r2, [r1, r0]
}




void sub_02037988(void) {
    // strb r1, [r2, r0]
}



