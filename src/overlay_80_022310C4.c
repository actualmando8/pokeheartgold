/* Decompiled from asm/overlay_80_022310C4.s */
#include "global.h"

void ov80_022310C4(void) {
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    Heap_Alloc(0xb, 0x00000D98);
    // str r0, [r1]
    MI_CpuFill8(0, 0x00000D98);
    // ldr r0, [sp, #4]
    sub_02030B04(ov80_0223DD44);
    // str r0, [r4, r1]
    // ldr r0, [sp, #4]
    // str r0, [r4, r1]
    // str r0, [r4]
    SaveArray_Party_Alloc(0xb, ov80_0223DD44);
    // str r0, [r4, r1]
    AllocMonZeroed(0xb, (0x99 << 2));
    // str r0, [r4, r1]
    // ldr r0, [sp, #4]
    sub_02030C5C(0x000006F8, 0x00000D8C);
    // str r0, [sp, #0xc]
    *((u8*)(*((u32*)ov80_0223DD44) + 4)) = r6;
    ov80_0223787C(*((u8*)(*((u32*)ov80_0223DD44) + 4)));
    *((u8*)(*((u32*)ov80_0223DD44) + 5)) = 0;
    sub_02030AF8(r4, 0);
    Save_VarsFlags_Get(*((u32*)(*((u32*)ov80_0223DD44) + 0x000006FC)), *((u32*)ov80_0223DD44), *((u8*)(*((u32*)ov80_0223DD44) + 4)));
    Save_VarsFlags_GetVar4052();
    // ldr r0, [sp, #0xc]
    // str r3, [sp]
    sub_02030CA0(5, 0);
    Save_Frontier_GetStatic(*((u32*)(*((u32*)ov80_0223DD44) + 0x000006FC)), *((u32*)ov80_0223DD44));
    sub_0205C0CC(*((u8*)(*((u32*)ov80_0223DD44) + 4)));
    sub_0205C0CC(*((u8*)(*((u32*)ov80_0223DD44) + 4)));
    sub_0205C268();
    FrontierSave_GetStat(r4, r5, r0);
    *((u16*)(*((u32*)ov80_0223DD44) + 8)) = r0;
    *((u16*)(*((u32*)ov80_0223DD44) + 8)) = 0;
    ov80_02231930(*((u32*)(*((u32*)ov80_0223DD44) + 0x000006FC)), *((u8*)(*((u32*)ov80_0223DD44) + 4)), ((0 << 0x18) >> 0x18), 0);
    // ldr r0, [sp, #8]
    // strb r0, [r3, r1]
    // add r0, sp, #0x20
    // strb r2, [r3, r0]
    // str r1, [sp]
    sub_02030B88((((r4 + 1) << 0x10) >> 0x10), 0, 0, 0);
    *((u8*)(r5 + 4)) = r0;
    ov80_0223787C(*((u8*)(r5 + 4)));
    // str r2, [sp]
    sub_02030B88(r4, 1, 0, 0);
    *((u8*)(r5 + 5)) = r0;
    Save_Frontier_GetStatic(*((u32*)(*((u32*)ov80_0223DD44) + 0x000006FC)), *((u32*)ov80_0223DD44));
    sub_0205C0CC(*((u8*)(*((u32*)ov80_0223DD44) + 4)));
    // str r0, [sp, #0x10]
    sub_0205C0CC(*((u8*)(r5 + 4)));
    sub_0205C268();
    // ldr r1, [sp, #0x10]
    FrontierSave_GetStat(r7, r0);
    *((u16*)(*((u32*)ov80_0223DD44) + 8)) = r0;
    // str r7, [sp]
    sub_02030B88(r4, 3, ((0 << 0x18) >> 0x18), 0);
    // add r2, r1, r5
    // strb r0, [r2, r1]
    // str r7, [sp]
    sub_02030B88(r4, 2, ((0 << 0x18) >> 0x18), 0);
    // add r1, r2, r1
    *((u16*)((r5 << 1) + 0x18)) = r0;
    // str r0, [sp]
    sub_02030B88(r4, 4, ((0 << 0x18) >> 0x18), 0);
    // add r2, r7, r1
    // strh r0, [r2, r1]
    SaveArray_Party_Get(*((u32*)(*((u32*)ov80_0223DD44) + 0x000006FC)), (0x9a << 2));
    // add r2, r4, r5
    Party_GetMonByIndex(*((u8*)(r2 + (0x26 << 4))));
    GetMonData(6, 0);
    // add r2, r4, r1
    // strh r0, [r2, r1]
    *((u32*)(*((u32*)ov80_0223DD44) + 0x10)) = 0;
    _s32_div_f(*((u16*)(*((u32*)ov80_0223DD44) + 8)), 0xa);
    *((u16*)(r4 + 0xa)) = r0;
    // add r1, r1, r6
    sub_02030BF4(((0 << 0x18) >> 0x18), *((u32*)ov80_0223DD44), 9);
    // add r7, sp, #0x14
    // str r7, [sp]
    // add r3, sp, #0x14
    // ldr r0, [sp, #4]
    // add r3, #2
    ov80_022318D0(((r5 + 1) << 0x10), *((u8*)(*((u32*)ov80_0223DD44) + 4)), ((0 << 0x18) >> 0x18));
    // add r6, r1, r3
    // add r1, r3, r1
    // add r1, r6, r1
    sub_02030BF4(((r4 << 0x18) >> 0x18), (*((u8*)(*((u32*)r5) + 4)) << 3), ((r0 << 0x18) >> 0x18), *((u8*)(*((u32*)r5) + 4)));
    ov80_0223792C(*((u8*)(*((u32*)ov80_0223DD44) + 4)));
    ov80_0222A840(*((u32*)(*((u32*)ov80_0223DD44) + 0x000006FC)), *((u32*)ov80_0223DD44));
}





void ov80_022313C0(void) {
}





void ov80_022313C8(void) {
    // add r1, #0xf
    // add r1, r5, r1
    // add r2, r2, r3
    // add r1, r1, r2
    sub_02030BD0(*((u8*)(r0 + 0x000006F5)), 0x000006F5, *((u8*)(r0 + 4)), (*((u8*)(r0 + 4)) << 3));
    ov80_02231A14(r5);
    *((u8*)(r5 + 7)) = r0;
    // add r0, #0x18
    // str r0, [sp]
    ov80_022372D8(*((u8*)(r5 + 0x000006F5)), r6, r7, *((u8*)(r5 + 5)));
    // str r0, [sp]
    // add r0, #0x18
    // str r0, [sp, #4]
    ov80_02237334(*((u8*)(r5 + 4)), r6, *((u16*)(r5 + 0xa)), r7);
    // add r6, #0x18
    // str r0, [sp, #0xc]
    // add r0, r1, r0
    ov80_0223793C(r5, *((u16*)(r5 + ((*((u8*)(r5 + 5)) << 0x19) >> 0x17))));
    // ldr r0, [sp, #0xc]
    Party_GetMonByIndex(*((u32*)(r5 + (0x99 << 2))), 0);
    GetMonData(5, 0);
    // str r0, [sp]
    // add r0, r5, r0
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    ov80_02237448(1, *((u8*)(r5 + 0x000006F4)), r7, *((u8*)(r5 + 5)));
}





void ov80_022314A0(void) {
    Heap_Free(*((u32*)(r0 + (0x99 << 2))));
    Heap_Free(*((u32*)(r4 + 0x00000D8C)));
    MI_CpuFill8(r4, 0, 0x00000D98);
    Heap_Free(r4);
}





void ov80_022314DC(void) {
    ov80_02231518(r1, 0);
    // strh r0, [r4, r1]
    // strb r2, [r4, r0]
    ov80_02237920(((*((u16*)(r4 + 0x000006F2)) << 0x18) >> 0x18), 0x000006F2, *((u16*)(r4 + 0x000006F2)));
    // strb r0, [r4, r1]
    // strb r2, [r4, r0]
}





void ov80_02231518(void) {
    // ldrh r0, [r0, #6]
    // bx lr
    // TODO: decompile
}





void ov80_0223151C(void) {
    sub_0205C0F4(*((u8*)(r0 + 4)));
    sub_0205C11C(*((u8*)(r5 + 4)));
    // str r0, [sp, #0x10]
    sub_0205C0F4(*((u8*)(r5 + 4)));
    sub_0205C268();
    // str r0, [sp, #0x14]
    sub_0205C144(r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x1c
    // str r0, [sp, #8]
    // add r0, sp, #0x18
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    sub_020313C4(*((u32*)(r5 + 0x000006FC)), r7);
    // strh r0, [r4]
    // strh r0, [r4]
}





void ov80_0223157C(void) {
    sub_02030C5C(*((u32*)(r0 + 0x000006FC)));
    // str r0, [sp, #4]
    Save_Frontier_GetStatic(*((u32*)(r5 + 0x000006FC)));
    // str r0, [sp, #0xc]
    // add r0, sp, #0x14
    *((u8*)(r0 + 8)) = *((u8*)(r5 + 4));
    // add r0, sp, #0x1c
    // str r0, [sp]
    sub_02030B30(*((u32*)(r5 + 0x000006F8)), 0, 0, 0);
    sub_02030B1C(*((u32*)(r5 + 0x000006F8)), 1);
    SaveArray_Party_Get(*((u32*)(r5 + 0x000006FC)));
    Party_GetMonByIndex(*((u8*)(r5 + (0x26 << 4))));
    // str r0, [sp, #8]
    GetMonData(5, 0);
    sub_0205C11C(*((u8*)(r5 + 4)));
    sub_0205C11C(*((u8*)(r5 + 4)));
    sub_0205C268();
    // ldr r0, [sp, #0xc]
    FrontierSave_GetStat(r7, r0);
    // add r0, sp, #0x14
    *((u8*)(r0 + 8)) = *((u8*)(r5 + 5));
    // add r0, sp, #0x1c
    // str r0, [sp]
    sub_02030B30(*((u32*)(r5 + 0x000006F8)), 1, 0, 0);
    sub_0205C0CC(*((u8*)(r5 + 4)));
    // str r0, [sp, #0x10]
    sub_0205C0CC(*((u8*)(r5 + 4)));
    sub_0205C268();
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    sub_02031108(r0, *((u16*)(r5 + 8)));
    sub_0205C0F4(*((u8*)(r5 + 4)));
    sub_0205C0F4(r4);
    sub_0205C268();
    // ldr r0, [sp, #0xc]
    sub_02031108(r6, r0, *((u16*)(r5 + 8)));
    sub_0205C0F4(r4);
    sub_0205C0F4(r4);
    sub_0205C268();
    // ldr r0, [sp, #0xc]
    sub_02031108(r6, r0, *((u16*)(r5 + 8)));
    sub_0205C0F4(r4);
    sub_0205C0F4(r4);
    sub_0205C268();
    // ldr r0, [sp, #0xc]
    sub_0203126C(r6, r0, *((u16*)(r5 + 8)));
    // add r0, sp, #0x14
    *((u8*)(r0 + 8)) = *((u8*)(r5 + 6));
    // add r0, sp, #0x1c
    // str r0, [sp]
    // ldr r0, [sp, #4]
    sub_02030C6C(5, *((u8*)(r5 + 4)), 0);
    sub_0205C268(0x6a);
    // ldr r0, [sp, #0xc]
    sub_02031108(0x6a, r0, *((u8*)(r5 + 6)));
    // add r6, sp, #0x14
    // add r7, sp, #0x14
    // add r0, r5, r0
    // strh r0, [r7]
    // str r6, [sp]
    sub_02030B30(*((u32*)(r5 + 0x000006F8)), 2, ((0 << 0x18) >> 0x18), 0);
    // add r6, sp, #0x1c
    // add r7, sp, #0x14
    // add r1, r5, r4
    *((u8*)(r7 + 8)) = *((u8*)(r1 + (0x26 << 4)));
    // str r6, [sp]
    sub_02030B30(*((u32*)(r5 + 0x000006F8)), 3, ((0 << 0x18) >> 0x18), 0);
    // add r6, r5, r0
    // add r7, sp, #0x14
    // add r1, r2, r1
    // add r1, r6, r1
    sub_02030BD0(((0 << 0x18) >> 0x18), (*((u8*)(r5 + 4)) << 3), *((u8*)(r5 + 4)));
    *((u8*)(r7 + 8)) = r0;
    ov80_02231930(*((u32*)(r5 + 0x000006FC)), *((u8*)(r5 + 4)), ((r4 << 0x18) >> 0x18), *((u8*)(r7 + 8)));
    // add r6, sp, #0x14
    // add r7, sp, #0x14
    // add r1, r5, r0
    // strh r0, [r7]
    // str r6, [sp]
    sub_02030B30(*((u32*)(r5 + 0x000006F8)), 4, ((0 << 0x18) >> 0x18), 0);
    sub_0205C11C(*((u8*)(r5 + 4)));
    sub_0205C11C(*((u8*)(r5 + 4)));
    sub_0205C268();
    // ldr r0, [sp, #8]
    GetMonData(5, 0);
    // ldr r0, [sp, #0xc]
    sub_02031108(r4, r5, ((r0 << 0x10) >> 0x10));
}





void ov80_022317C0(void) {
}





void ov80_022317CC(void) {
    // ldrb r0, [r0, #5]
    // bx lr
    // TODO: decompile
}





void ov80_022317D0(void) {
    // add r0, sp, #0
    // add r1, r1, r3
    // add r1, r2, r1
    // add r0, sp, #0
}





void ov80_02231804(void) {
    // add r2, r4, r0
    // add r0, r1, r0
    // add r0, r2, r0
    sub_02030C34((*((u8*)(r0 + 4)) << 3), *((u8*)(r0 + 4)));
    ov80_0223157C(r4, 1);
}





void ov80_02231828(void) {
    *((u8*)(r0 + 6)) = 1;
    *((u16*)(r0 + 0xa)) = (*((u16*)(r0 + 0xa)) + 1);
    *((u8*)(r0 + 5)) = 0;
}





void ov80_02231844(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02231856: ; jump table
}





void ov80_02231888(void) {
    // ldrb r3, [r0, #4]
    // ldrh r2, [r0, #0xa]
    // cmp r3, #1
    // bhi _0223189E
    // cmp r2, #0x12
    // blo _02231898
    // mov r1, #0xc
    // b _022318AA
    // ldr r1, _022318C8 ; =ov80_0223BDFC
    // ldrb r1, [r1, r2]
    // b _022318AA
    // cmp r2, #0x12
    // blo _022318A6
    // mov r1, #0x17
    // b _022318AA
    // ldr r1, _022318CC ; =ov80_0223BE10
    // ldrb r1, [r1, r2]
    // cmp r3, #0
    // bne _022318BC
    // ldrh r0, [r0, #8]
    // cmp r0, #0x32
    // beq _022318B8
    // cmp r0, #0xaa
    // bne _022318C2
    // mov r1, #0x14
    // b _022318C2
    // cmp r3, #2
    // bne _022318C2
    // mov r1, #0xc
    // add r0, r1, #0
    // bx lr
    // nop
    // _022318C8: .word ov80_0223BDFC
    // _022318CC: .word ov80_0223BE10
    // TODO: decompile
}





void ov80_022318D0(void) {
    // ldr r4, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // and r0, r1
    // strh r0, [r6]
    // asr r0, r1, #4
    // strh r0, [r4]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
}





void ov80_02231930(void) {
    // add r3, sp, #0xc
    // str r3, [sp]
    // add r3, sp, #0xc
    // add r3, #2
    // str r0, [sp, #4]
    // add r0, sp, #0xc
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // and r0, r2
    // lsl r1, r0
    // ldr r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
}





void ov80_022319B0(void) {
    // add r6, r5, r0
    // add r1, r2, r1
    // add r1, r6, r1
    sub_02030BD0(((0 << 0x18) >> 0x18), (*((u8*)(r0 + 4)) << 3), *((u8*)(r0 + 4)));
    // add r6, r5, r0
    // add r1, r2, r1
    // add r1, r6, r1
    sub_02030BF4(((0 << 0x18) >> 0x18), (*((u8*)(r5 + 4)) << 3), 9);
}





void ov80_02231A04(void) {
}





void ov80_02231A14(void) {
    // add r1, #0xf
    // add r3, r6, r1
    // add r1, r2, r1
    // add r1, r3, r1
    sub_02030BD0(*((u8*)(r0 + 0x000006F5)), (*((u8*)(r0 + 4)) << 3), *((u8*)(r0 + 4)));
    ov80_022379C8(r6);
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    _fflt((((*((u8*)(r6 + 4)) << 0x10) >> 0x10) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // add r1, r5, r1
    // sub r0, r0, r1
    // str r0, [sp, #8]
    _fflt(r5, (r5 << 1));
    _fdiv(0x45800000);
    _f2d();
    _dmul(0, 0x40140000, r0, r1);
    _d2f();
    // ldr r0, [sp, #4]
    _fflt();
    _fdiv(r5);
    _f2d();
    _dls(0, 0x3FF00000);
    _fflt(r4);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    _fflt(((r0 * r4) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    _fflt();
    _fdiv(0x45800000);
    _fdiv(r5);
    // str r0, [sp]
    // add r7, r6, r0
    _f2d(0);
    _dadd(0, 0x3FF00000);
    _d2f();
    // add r1, r2, r1
    // add r1, r7, r1
    sub_02030BD0(((r4 << 0x18) >> 0x18), (*((u8*)(r6 + 4)) << 3), *((u8*)(r6 + 4)));
    _f2d(r5);
    _dadd(0, 0x3FF00000);
    _d2f();
    _f2d(r0);
    _dneq(0, 0, r0, r1);
    _f2d(r5);
    _dsub(0, 0x3FF00000);
    _d2f();
    _f2d(r0);
    _dmul(0, 0x3FE00000);
    _d2f();
    // ldr r0, [sp, #8]
    _fflt();
    _fdiv(0x45800000);
    // ldr r1, [sp]
    _fadd();
    _fadd(r4, r0);
    _ffix();
    _ffix(r5);
    _fflt();
    _fneq(r5, r0);
    // ldr r0, [sp, #4]
}




