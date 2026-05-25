/* Decompiled from asm/unk_02032844.s */
#include "global.h"

void sub_02032844(void) {
    // str r0, [r2, r1]
}




void sub_02032858(void) {
    // sub r2, #9
    // add r1, #0x20
    // str r0, [r3, r1]
}




void sub_02032874(void) {
    sub_02032844(3);
    WM_SetParentParameter(sub_020328A4, *((u32*)(_021D4124 + 4)));
    sub_02032858();
    sub_02032844(9);
}




void sub_020328A4(void) {
}




void sub_020328C8(void) {
    WMi_GetStatusAddress(1, *((u32*)(_021D4124 + 4)));
    // add r0, r4, r0
    DC_InvalidateRange((0x66 << 2), 4);
    // str r1, [r4, r0]
    // add r0, r4, r0
    DC_FlushRange((0x66 << 2), 4);
    WM_StartParent(sub_02032934);
    sub_02032858();
    // strh r3, [r0, r1]
    // strh r0, [r2, r1]
}




void sub_02032934(void) {
    // lsl r1, r0
    sub_02032858(*((u16*)(r0 + 2)), 1);
    sub_02032844(9);
    // strb r1, [r2, r0]
    sub_02033264(*((u8*)(*((u32*)(_021D4124 + 4)) + (0x00001343 - 1))), *((u8*)(*((u32*)(_021D4124 + 4)) + 0x00001343)), *((u32*)(_021D4124 + 4)));
    sub_0203993C(*((u8*)(*((u32*)(_021D4124 + 4)) + 0x00001334)), *((u32*)(_021D4124 + 4)));
    // add r1, #0x15
    memcmp(_0210F8FC, r5, 3);
    WM_Disconnect(0, *((u16*)(r5 + 0x10)));
    sub_02032858();
    sub_02032844(9);
    // strh r2, [r3, r0]
    // blx r1
    // mvn r3, r4
    // and r3, r6
    // strh r3, [r0, r1]
    // sub r1, #0xa
    // blx r1
    sub_02032A40(*((u16*)(r5 + 0x10)), *((u32*)(*((u32*)(_021D4124 + 4)) + 0x0000132E)), _021D4124, *((u32*)(_021D4124 + 4)));
    sub_02032844(9);
}




void sub_02032A40(void) {
    sub_02032844(4, *((u32*)(_021D4124 + 4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, r4, r3
    // sub r3, #0xe0
    // add r3, r4, r3
    WM_StartMP(sub_02032AB0, ((*((u32*)(*((u32*)(_021D4124 + 4)) + (0x00001304 + 4))) << 0x10) >> 0x10), 0x00001020);
    sub_02032858();
}




void sub_02032AB0(void) {
    sub_02032858(*((u16*)(r0 + 2)), *((u16*)(r0 + 2)));
    sub_02032844(9);
    // sub r0, #0xa
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02032ADA: ; jump table
    sub_02032844(4, *((u32*)(*((u32*)(_021D4124 + 4)) + 0x00001314)), *((u32*)(_021D4124 + 4)));
}




void sub_02032B0C(void) {
    sub_02032844(3);
    WM_EndMP(sub_02032B30);
    sub_02032858();
}




void sub_02032B30(void) {
}




void sub_02032B50(void) {
    WM_EndParent(sub_02032B6C);
    sub_02032858();
}




void sub_02032B6C(void) {
}




void sub_02032B84(void) {
    // str r3, [r0, r1]
    // str r0, [r2, r1]
    sub_02032844(2, (0x00001308 - 4), *((u32*)(_021D4124 + 4)), (2 << 8));
    // strh r0, [r3, r1]
    // add r0, #0x96
    // strh r6, [r3, r0]
    // add r0, #0x94
    // strh r6, [r3, r0]
    // add r0, #0x92
    // strh r4, [r3, r0]
    // add r0, #0xbe
    // str r5, [r3, r0]
    // add r3, #0xaa
    // str r0, [r4, r3]
    // add r3, #0xb6
    // strh r7, [r4, r3]
    // add r3, #0x8e
    // strh r0, [r4, r3]
    // add r1, #0xb8
    // strh r0, [r2, r1]
    sub_02032C84(1, 0x00001256, *((u32*)(_021D4124 + 4)), 0x00001256);
    sub_02032844(9);
}




void sub_02032C1C(void) {
    sub_02032844(2);
    // str r5, [r2, r0]
    // add r2, #0xc
    // strh r6, [r3, r2]
    // sub r3, #0x1c
    // strh r2, [r5, r3]
    // add r3, #0xe
    // strh r2, [r5, r3]
    // sub r2, #0x14
    // strh r5, [r3, r2]
    // sub r2, #0x16
    // strh r5, [r3, r2]
    // sub r0, #0x18
    // strh r2, [r1, r0]
    sub_02032C84((0x13 << 8), *((u32*)(_021D4124 + 4)), *((u16*)r4), *((u32*)(_021D4124 + 4)));
    sub_02032844(9);
}




void sub_02032C84(void) {
    WM_GetAllowedChannel();
    sub_02032858(3);
    sub_02039AD8(1);
    sub_02032858(0x16);
    sub_02039AD8(1);
    // sub r7, #0x28
    // sub r0, #0x28
    // strh r6, [r4, r7]
    // strh r3, [r4, r6]
    // lsl r6, r4
    // tst r4, r6
    // sub r0, #0x28
    // strh r2, [r3, r0]
    WM_GetDispersionScanPeriod(0x0000130C, _021D4124, 1, 1);
    _s32_div_f(3);
    // strh r0, [r3, r1]
    // sub r0, #0xc6
    // add r4, r3, r0
    // str r4, [r3, r0]
    // add r1, r2, r1
    WM_StartScan(sub_02032D4C, (0x000012E6 - 6), *((u32*)(_021D4124 + 4)), *((u32*)(_021D4124 + 4)));
    sub_02032858();
}




void sub_02032D4C(void) {
    sub_02032858(*((u16*)(r0 + 2)));
    sub_02032844(9);
    // strh r1, [r2, r0]
    sub_02032E48((0x00001310 - 2), 0, *((u32*)(_021D4124 + 4)));
    sub_02032844(9);
    // sub r0, #0xf0
    // add r0, r2, r0
    DC_InvalidateRange(0xc0);
    // add r1, #0x48
    // blx r2
    // add r4, #0x43
    // and r1, r2
    // sub r1, #0xe0
    // add r0, r0, r1
    // blx r2
    sub_02032E48(*((u16*)(*((u32*)(_021D4124 + 4)) + 0x0000130E)), *((u32*)(_021D4124 + 4)), *((u32*)(*((u32*)(_021D4124 + 4)) + (0x13 << 8))));
    sub_02032844(9);
    sub_02032C84();
    sub_02032844(9);
}




void sub_02032E24(void) {
}




void sub_02032E48(void) {
    WM_EndScan(sub_02032E64);
    sub_02032858();
}




void sub_02032E64(void) {
    sub_02032858(*((u16*)(r0 + 2)));
    sub_02032844(1);
    sub_02032E9C(*((u16*)(*((u32*)(_021D4124 + 4)) + 0x0000130E)), *((u32*)(_021D4124 + 4)));
    sub_02032844(9);
}




void sub_02032E9C(void) {
    sub_02032844(3, *((u32*)(_021D4124 + 4)));
    // add r1, sp, #4
    // add r1, #1
    MI_CpuCopy8(_0210F8FC, 3);
    sub_0203993C();
    // add r1, sp, #4
    // strb r0, [r1]
    // str r0, [sp]
    // add r1, r2, r1
    // add r2, sp, #4
    WM_StartConnectEx(sub_02032F0C, 0x00001220, *((u32*)(_021D4124 + 4)), 1);
    sub_02032858();
}




void sub_02032F0C(void) {
    sub_02032858(*((u16*)(r0 + 2)));
    sub_02032844(9);
    sub_02032844(9);
    sub_02039918();
    sub_02032844(9);
    sub_02032844(8);
    sub_02032844(9);
    sub_02032858(0x14, *((u32*)(_021D4124 + 4)));
    sub_02032844(9);
    sub_02032844(4);
    sub_02032FCC();
    sub_02032844(3);
    // strh r2, [r1, r0]
    sub_02032858(0x14, *((u32*)(_021D4124 + 4)), *((u16*)(r4 + 0xa)));
    sub_02032844(9);
    sub_02032844(9);
}




void sub_02032FCC(void) {
    // add r1, r4, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r3, #0xe0
    // add r3, r4, r3
    WM_StartMP(sub_0203301C, ((*((u32*)(*((u32*)(_021D4124 + 4)) + (0x00001304 + 4))) << 0x10) >> 0x10), 0x00001020);
    sub_02032858();
}




void sub_0203301C(void) {
    sub_02032858(*((u16*)(r0 + 2)), *((u16*)(r0 + 2)));
    sub_02032844(9);
    // sub r0, #0xa
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02033052: ; jump table
    sub_02032844(4, *((u32*)(*((u32*)(_021D4124 + 4)) + 0x00001314)), *((u32*)(_021D4124 + 4)));
}




void sub_02033080(void) {
    sub_02032844(3);
    WM_EndMP(sub_020330A4);
    sub_02032858();
}




void sub_020330A4(void) {
}




void sub_020330C8(void) {
    sub_02032844(3);
    WM_Disconnect(sub_020330F0, 0);
    sub_02032858();
    sub_02033830();
}




void sub_020330F0(void) {
}




void sub_02033108(void) {
    sub_02032844(3);
    WM_Reset(sub_0203312C);
    sub_02032858();
}




void sub_0203312C(void) {
}




void sub_0203314C(void) {
    // add r0, r1, r0
    DC_FlushRange((0x3d << 6), *((u32*)(*((u32*)(_021D4124 + 4)) + 0x00001304)), 0x00001304);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    WM_SetMPDataToPortEx(sub_020331A4, r7, r5, r6);
}




void sub_020331A4(void) {
    // blx r2
}




void sub_020331CC(void) {
    sub_02032858(*((u16*)(r0 + 2)), r0);
    // blx r3
    // blx r3
}




void sub_02033214(void) {
}




void sub_02033234(void) {
    *((u32*)(*((u32*)(_021D4124 + 4)) + 8)) = r0;
}




void sub_02033240(void) {
    // str r0, [r3]
    *((u16*)(*((u32*)(_021D4124 + 4)) + 4)) = r1;
}




void sub_02033250(void) {
    // ldrh r0, [r1, r0]
    // nop
    // _0203325C: .word _021D4124
    // _02033260: .word 0x0000132E
}




void sub_02033264(void) {
    // tst r0, r1
}




void sub_02033298(void) {
    // ldr r0, [r1, r0]
    // nop
    // _020332A4: .word _021D4124
    // _020332A8: .word 0x00001310
}




void sub_020332AC(void) {
    // ldr r0, [r1, r0]
    // nop
    // _020332B8: .word _021D4124
    // _020332BC: .word 0x00001330
}




void sub_020332C0(void) {
    // add r0, sp, #0
    OS_GetMacAddress();
    // add r0, sp, #0
    // add r0, r0, r3
    // add r0, r1, r0
    // add r1, r2, r0
    // str r1, [r0, r2]
    // add r1, r5, r1
    // str r1, [r0, r2]
    // strh r4, [r1, r0]
    // strh r4, [r1, r0]
    sub_02032844(3, *((u32*)(_021D4124 + 4)), 0x00001338, _021D4124);
    sub_0203335C(1);
    sub_02032858(0x18);
    sub_02032844(9);
    sub_02039AD8(1);
    sub_02032858(0);
    sub_02032844(9);
}




void sub_0203335C(void) {
    WM_GetAllowedChannel();
    sub_02032858(3, (2 << 0xe));
    sub_02032844(9);
    sub_02039AD8(1);
    sub_02032858(0x16);
    sub_02032844(9);
    sub_02039AD8(1);
    // lsl r2, r1
    // tst r1, r0
    // lsl r3, r1
    // tst r1, r0
    sub_02033454(sub_020333D8, (((r4 + 1) << 0x10) >> 0x10), 1, 1);
}




void sub_020333D8(void) {
    sub_02032858(*((u16*)(r0 + 2)), *((u16*)(r0 + 2)));
    sub_02032844(9);
    sub_02039AD8(1);
    // strh r5, [r0, r3]
    // lsl r4, r0
    // strh r4, [r2, r0]
    // lsl r4, r2
    // strh r4, [r0, r2]
    sub_0203335C((((*((u16*)(r0 + 8)) + 1) << 0x10) >> 0x10), *((u16*)(r0 + 8)), (0x0000133E + 2), 0x0000133E);
    sub_02032844(7);
    sub_02032844(9);
}




void sub_02033454(void) {
}




void sub_02033468(void) {
    sub_02032844(1);
    sub_02033494(*((u16*)(*((u32*)(_021D4124 + 4)) + (0x4d << 6))), *((u32*)(_021D4124 + 4)));
    // strh r0, [r3, r1]
}




void sub_02033494(void) {
    // lsl r5, r2
    // tst r5, r4
    // asr r0, r0, #0x10
    // asr r2, r2, #0x10
    // add r1, r7, r1
    // str r1, [r0, r2]
    // tst r0, r1
    // asr r0, r0, #0x10
    // asr r3, r0, #0x10
}




void sub_02033528(void) {
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(_021D4124 + 4)) = r0;
    // str r4, [r0, r2]
    // str r4, [r5, r0]
    // add r0, #0x10
    // str r4, [r5, r0]
    // add r0, #0x24
    // strh r4, [r5, r0]
    // add r0, #0x26
    // strh r6, [r5, r0]
    // add r0, #0x28
    // str r4, [r5, r0]
    // add r0, #8
    // str r4, [r5, r0]
    // str r4, [r0]
    *((u16*)(*((u32*)(_021D4124 + 4)) + 4)) = 0;
    // add r0, #0x14
    // str r4, [r5, r0]
    // add r0, #0x2c
    // strb r6, [r5, r0]
    // add r0, #0x2d
    // strb r4, [r5, r0]
    // add r2, #0x3a
    // strb r4, [r0, r2]
    sub_020335D4(r1, 0x00001308, _021D4124);
}




void sub_020335B4(void) {
}




void sub_020335BC(void) {
}




void sub_020335D4(void) {
    sub_02032844(3);
    // add r0, #0x40
    WM_Initialize(*((u32*)(_021D4124 + 4)), sub_02033620, 2);
    // add r0, #0x40
    WM_InitializeForListening(*((u32*)(_021D4124 + 4)), sub_02033620, 2, 0);
    sub_02032858();
    sub_02032844(0xa);
}




void sub_02033620(void) {
    sub_02032858(*((u16*)(r0 + 2)));
    sub_02032844(0xa);
    sub_02039AD8(5);
    WM_SetIndCallback(sub_020335BC);
    sub_02032858();
    sub_02032844(0xa);
    sub_02039AD8(5);
    sub_02032844(1);
}




void sub_02033664(void) {
}




void sub_02033668(void) {
    sub_0203993C();
    sub_020340C4();
    // str r2, [sp]
    WM_SetLifeTime(sub_02033664, 0x0000FFFF, 0x64, 5);
    // str r0, [r2, r1]
    // str r3, [r2, r0]
    // add r1, #0xc
    // str r5, [r0, r1]
    sub_02032844(3, 0x00001308, *((u32*)(_021D4124 + 4)), 0xe0);
    *((u16*)(*((u32*)(_021D4124 + 4)) + 0xc)) = r6;
    *((u16*)(*((u32*)(_021D4124 + 4)) + 0x32)) = r7;
    // add r0, sp, #8
    *((u16*)(*((u32*)(_021D4124 + 4)) + 0x18)) = *((u16*)(*((u32*)(_021D4124 + 4)) + 0x10));
    *((u16*)(*((u32*)(_021D4124 + 4)) + 0x34)) = 0xc0;
    *((u16*)(*((u32*)(_021D4124 + 4)) + 0x36)) = 0xc;
    *((u16*)(*((u32*)(_021D4124 + 4)) + 0x36)) = 0x26;
    *((u16*)(*((u32*)(_021D4124 + 4)) + 0x34)) = 0x64;
    *((u16*)(*((u32*)(_021D4124 + 4)) + 0x36)) = 0xc;
    *((u16*)(*((u32*)(_021D4124 + 4)) + 0x10)) = r4;
    *((u16*)(*((u32*)(_021D4124 + 4)) + 0x16)) = 0;
    *((u16*)(*((u32*)(_021D4124 + 4)) + 0x12)) = 0;
    // ldr r2, [sp, #0x1c]
    *((u16*)(*((u32*)(_021D4124 + 4)) + 0xe)) = *((u32*)(_021D4124 + 4));
    *((u16*)(*((u32*)(_021D4124 + 4)) + 0x14)) = 1;
    sub_02032874(1, *((u32*)(_021D4124 + 4)), *((u32*)(_021D4124 + 4)));
}




void sub_0203373C(void) {
    sub_0203993C();
    sub_020340C4();
    // str r2, [sp]
    WM_SetLifeTime(sub_02033664, 0x0000FFFF, 0x64, 5);
    // str r3, [r0, r1]
    // str r6, [r3, r0]
    // add r1, #0xc
    // str r5, [r0, r1]
    sub_02032844(3, 0x00001308, _021D4124, *((u32*)(_021D4124 + 4)));
    // add r1, r2, r1
    MI_CpuCopy8(r4, 0x00001220, 0xc0);
    // add r0, r1, r0
    DC_FlushRange(0x00001220, 0xc0);
    DC_WaitWriteBufferEmpty();
    sub_02032E9C();
}




void sub_020337D0(void) {
    // str r0, [r3, r2]
    WM_SetPortCallback(((r1 << 0x10) >> 0x10), sub_020331CC, 0, *((u32*)(_021D4124 + 4)));
    sub_02032844(9);
}




void sub_02033800(void) {
    // tst r0, r1
}




void sub_02033830(void) {
    sub_02033108(*((u32*)(*((u32*)(_021D4124 + 4)) + 0x00001310)), *((u32*)(_021D4124 + 4)));
    sub_02032844(0xa);
}




void sub_02033858(void) {
    sub_02032844(3, *((u32*)(_021D4124 + 4)));
    sub_02033830();
    sub_02032844(3);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0203389C: ; jump table
    sub_02033080((*((u16*)(*((u32*)(*((u32*)(_021D4124 + 4)) + 0x00001314)) + 6)) << 0x10), *((u32*)(_021D4124 + 4)));
    sub_02033830();
    sub_02032B0C();
    sub_02033830();
}




void sub_020338D0(void) {
    sub_02032844(3);
    WM_End(sub_02033214);
    sub_02032844(9);
}




void sub_020338F4(void) {
    // ldrh r0, [r1, r0]
    // nop
    // _02033900: .word _021D4124
    // _02033904: .word 0x0000132C
}




void sub_02033908(void) {
    // strb r0, [r2, r1]
}




void sub_02033920(void) {
    // ldr r0, [r1, r0]
    // cmp r0, #1
    // bne _02033930
    // _02033934: .word _021D4124
    // _02033938: .word 0x00001310
}




void sub_0203393C(void) {
    // ldr r0, [r1, r0]
    // cmp r0, #3
    // bne _0203394C
    // _02033950: .word _021D4124
    // _02033954: .word 0x00001310
}




void sub_02033958(void) {
    // ldr r0, [r1, r0]
    // cmp r0, #9
    // bne _02033968
    // _0203396C: .word _021D4124
    // _02033970: .word 0x00001310
}




void sub_02033974(void) {
    // ldr r0, [r1, r0]
    // cmp r0, #0xa
    // bne _02033984
    // _02033988: .word _021D4124
    // _0203398C: .word 0x00001310
}




void sub_02033990(void) {
    // cmp r1, #0
    // beq _020339A8
    // ldr r0, [r1, r0]
    // cmp r0, #2
    // bne _020339A4
    // _020339AC: .word _021D4124
    // _020339B0: .word 0x00001310
}




void sub_020339B4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    WM_SetGameInfo(0, r0, ((r1 << 0x10) >> 0x10), r2);
}




void sub_020339F0(void) {
    // strb r2, [r1, r0]
}




void sub_02033A0C(void) {
    // strb r4, [r3, r0]
    // sub r0, #0x34
    WM_SetEntry(sub_020339F0, r0, *((u32*)(_021D4124 + 4)), *((u32*)(_021D4124 + 4)));
}




void sub_02033A44(void) {
    // cmp r1, #0
    // beq _02033A5C
    // ldrb r0, [r1, r0]
    // cmp r0, #6
    // blo _02033A58
    // _02033A60: .word _021D4124
    // _02033A64: .word 0x00001345
}




void sub_02033A68(void) {
    // strb r2, [r1, r0]
}




void sub_02033A7C(void) {
    // str r0, [r2, r1]
}




void sub_02033A90(void) {
    // str r0, [r2, r1]
}




void sub_02033AA4(void) {
    // strb r0, [r2, r1]
}




void sub_02033AB8(void) {
    // ldrb r0, [r1, r0]
    // nop
    // _02033AC4: .word _021D4124
    // _02033AC8: .word 0x00001342
}




void sub_02033ACC(void) {
    // strb r0, [r2, r1]
}



