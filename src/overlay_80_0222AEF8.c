/* Decompiled from asm/overlay_80_0222AEF8.s */
#include "global.h"

void ov80_0222AEF8(void) {
}




void ov80_0222AF10(void) {
    Save_PlayerData_GetProfile(*((u32*)(r0 + 0x000006FC)));
    // add r1, r4, r1
    sub_02037030(0x22, 0x0000072C, 0x2c);
}




void ov80_0222AF3C(void) {
}




void ov80_0222AF54(void) {
    // add r1, r0, r1
    // strh r2, [r4]
    sub_02037030(0x23, 0x0000072C, 0x2c, (0 + 1));
}




void ov80_0222AF84(void) {
    // strb r1, [r4, r0]
}




void ov80_0222AFB8(void) {
    // add r1, r0, r1
    // strh r3, [r5]
    sub_02037030(0x24, 0x0000072C, 0x2c, *((u16*)(r0 + (0x9a << 2))));
}




void ov80_0222AFEC(void) {
    // strb r1, [r4, r0]
    // strh r1, [r4, r0]
}




void ov80_0222B024(void) {
}




void ov80_0222B048(void) {
    // strb r1, [r4, r0]
    sub_0203769C((0xd9 << 4), (*((u8*)(r3 + (0xd9 << 4))) + 1));
    // strb r1, [r4, r0]
}




void ov80_0222B070(void) {
    SizeOfStructPokemon();
    SaveArray_Party_Get(*((u32*)(r5 + 0x000006FC)));
    Party_GetMonByIndex(*((u8*)(r5 + (0x26 << 4))));
    // add r1, r5, r1
    MI_CpuCopy8(0x00000784, r4);
    // add r1, r5, r1
    sub_02036FD8(0x26, 0x00000784, (2 << 8));
}




void ov80_0222B0B8(void) {
    // strb r1, [r4, r0]
    sub_0203769C((0xd9 << 4), (*((u8*)(r3 + (0xd9 << 4))) + 1));
    SizeOfStructPokemon();
    MI_CpuCopy8(r6, *((u32*)(r4 + 0x00000D8C)), r0);
}




void ov80_0222B0E8(void) {
}




void ov80_0222B108(void) {
    // add r4, r5, r0
    // sub r0, #0xc
    Save_PlayerData_GetProfile(*((u32*)(r0 + 0x00000504)));
    *((u16*)(r4 + 2)) = *((u16*)(r5 + 8));
    *((u16*)(r4 + 4)) = *((u16*)(r5 + 0xc));
    *((u16*)(r4 + 6)) = *((u16*)(r5 + 0xe));
    sub_02037030(0x16, r4, 0x3c);
}




void ov80_0222B140(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000702, (*((u8*)(r3 + 0x00000702)) + 1));
    // strh r1, [r4, r0]
    // strh r2, [r4, r1]
    // strh r1, [r4, r0]
}




void ov80_0222B174(void) {
    // add r1, r0, r1
    // strh r2, [r4]
    sub_02037030(0x17, 0x00000504, 0x3c, (0 + 1));
}




void ov80_0222B1A4(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000702, (*((u8*)(r3 + 0x00000702)) + 1));
    sub_0203769C();
    *((u16*)(r4 + 0x18)) = *((u16*)r5);
}




void ov80_0222B1DC(void) {
    // add r1, r0, r1
    // strh r3, [r6]
    // add r3, r0, r5
    *((u16*)(0x00000504 + 0xc)) = *((u8*)(*((u16*)(r0 + 0x00000584)) + (0x59 << 4)));
    // add r2, #0x18
    // strh r6, [r2]
    *((u16*)(0x00000504 + 0xc)) = (*((u32*)(r0 + 0x00000598)) >> 0x10);
    sub_02037030(0x18, 0x00000504, 0x3c, (0 + 1));
}




void ov80_0222B24C(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000702, (*((u8*)(r3 + 0x00000702)) + 1));
    sub_0203769C();
    // strh r1, [r6, r0]
    // add r1, r4, r6
    // strb r2, [r1, r0]
    // add r5, #0x18
    // str r0, [r4, r2]
    // str r0, [r4, r6]
}




void ov80_0222B2C4(void) {
    // add r1, r0, r1
    // strh r3, [r6]
    // add r3, r0, r5
    *((u16*)(0x00000504 + 8)) = *((u8*)(*((u16*)(r0 + 0x000003D2)) + 0x000003DA));
    // add r2, #0x10
    // strh r6, [r2]
    *((u16*)(0x00000504 + 8)) = (*((u32*)(r0 + (0x3e << 4))) >> 0x10);
    sub_02037030(0x19, 0x00000504, 0x3c, (0 + 1));
}




void ov80_0222B334(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000702, (*((u8*)(r3 + 0x00000702)) + 1));
    sub_0203769C();
    // strh r1, [r6, r0]
    // add r1, r4, r6
    // strb r2, [r1, r0]
    // add r5, #0x10
    // str r0, [r4, r2]
    // str r0, [r4, r6]
}




void ov80_0222B3B0(void) {
}




void ov80_0222B3D4(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000702, (*((u8*)(r3 + 0x00000702)) + 1));
    // strb r1, [r4, r0]
}




void ov80_0222B3FC(void) {
}




void ov80_0222B420(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000702, (*((u8*)(r3 + 0x00000702)) + 1));
    // strb r1, [r4, r0]
}




void ov80_0222B448(void) {
    // add r0, r5, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    ov80_02236DD4(*((u8*)(r0 + 4)));
    // str r0, [sp, #8]
    // add r7, sp, #0x10
    // add r6, sp, #0x14
    // ldr r1, [sp, #8]
    Party_GetMonByIndex(*((u32*)(r5 + 0x000004D4)));
    // str r0, [sp, #0xc]
    GetMonData(0x47, 0);
    // strb r0, [r7]
    // ldr r0, [sp, #0xc]
    GetMonData(0, 0);
    // stmia r6!, {r0}
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r2, [sp]
    // strh r1, [r2]
    // ldr r0, [sp, #4]
    // add r0, r0, r4
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r3, sp, #0x10
    // ldr r1, [sp]
    // add r2, r1, r2
    // strh r1, [r2]
    // ldr r0, [sp, #4]
    // add r0, r0, r4
    // ldr r5, [sp]
    // ldr r2, [sp]
    // add r5, r5, r6
    // add r2, r2, r0
    // add r1, sp, #0x14
    // add r0, r5, r0
    // strh r5, [r2]
    // strh r5, [r0]
    // ldr r1, [sp]
    sub_02037030(0x1c, (*((u8*)(0 + 1)) + 4), 0x3c, (0 + 1));
}




void ov80_0222B52C(void) {
    // str r2, [sp]
    // strb r1, [r4, r0]
    sub_0203769C(0x00000702, (*((u8*)(r3 + 0x00000702)) + 1));
    ov80_02236DD4(*((u8*)(r4 + 4)));
    // ldr r5, [sp]
    // strh r2, [r6, r1]
    // add r7, r7, r0
    // ldr r1, [sp]
    // add r5, r1, r2
    // add r2, r4, r6
    // strb r3, [r2, r1]
    // add r2, r7, r0
    // ldr r3, [sp]
    // add r5, r3, r2
    // add r3, r3, r6
    // add r6, r3, r2
    // str r7, [r4, r3]
    // str r3, [r4, r2]
}




void ov80_0222B5C8(void) {
    sub_02030E08(*((u32*)(r0 + 4)));
    // strh r1, [r5, r0]
    // strh r1, [r5, r0]
    Save_Frontier_GetStatic(*((u32*)(r5 + 4)), *((u16*)(r5 + 0x16)));
    sub_0205C1F0(*((u8*)(r5 + 0x10)));
    sub_0205C1F0(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    FrontierSave_GetStat(r4, r6, r0);
    // strh r0, [r5, r1]
    // sub r1, #0x16
    // add r1, r5, r1
    sub_02037030(0x2a, 0x000003D6, 0x28);
}




void ov80_0222B628(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000A1A, (*((u8*)(r3 + 0x00000A1A)) + 1));
    // strh r1, [r4, r0]
    // strh r2, [r4, r1]
    // strh r1, [r4, r0]
}




void ov80_0222B65C(void) {
    // strh r1, [r3, r0]
    // add r1, r4, r1
}




void ov80_0222B690(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000A1A, (*((u8*)(r3 + 0x00000A1A)) + 1));
    sub_0203769C();
    *((u16*)(r4 + 0x30)) = *((u16*)r5);
}




void ov80_0222B6C8(void) {
    // strh r1, [r4, r0]
    sub_0203769C((0xf << 6), *((u8*)(r0 + 0x00000A18)));
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strh r0, [r4, r1]
    // add r1, r4, r1
    sub_02037030(0x2c, (0x000003C2 - 2), 0x28);
}




void ov80_0222B740(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000A1A, (*((u8*)(r3 + 0x00000A1A)) + 1));
    // strb r1, [r4, r0]
    sub_0203769C(0x00000A19, *((u16*)r5));
    // strb r2, [r4, r0]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strh r2, [r0]
    // strb r1, [r4, r0]
    // strh r1, [r0]
    // strb r2, [r4, r0]
}




void ov80_0222B7E4(void) {
    // strh r2, [r5, r1]
    // add r2, r3, r5
    // strh r2, [r4, r1]
    // add r1, #0x10
    // add r6, #8
    // strh r4, [r1, r7]
    // strh r4, [r1, r6]
    // add r1, r3, r1
}




void ov80_0222B860(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000A1A, (*((u8*)(r3 + 0x00000A1A)) + 1));
    sub_0203769C();
    // strh r1, [r6, r0]
    // add r1, r4, r6
    // strb r2, [r1, r0]
    // add r5, #0x10
    // str r0, [r4, r2]
    // str r0, [r4, r6]
}




void ov80_0222B8D8(void) {
}




void ov80_0222B8F8(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000A1A, (*((u8*)(r3 + 0x00000A1A)) + 1));
    // strb r1, [r4, r0]
}




void ov80_0222B920(void) {
}




void ov80_0222B940(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000A1A, (*((u8*)(r3 + 0x00000A1A)) + 1));
    // strb r1, [r4, r0]
}




void ov80_0222B968(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // add r0, r7, r0
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r1, r1, r5
    // ldr r0, [sp]
    // add r5, r5, r6
    // add r1, r7, r1
}




void ov80_0222B9CC(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    // strb r2, [r0, r1]
    sub_0203769C(r3, 0x00000A1A, (*((u8*)(r3 + 0x00000A1A)) + 1));
    // ldr r0, [sp, #4]
    ov80_02237B24(*((u8*)(r0 + 0x10)), 0);
    // str r0, [sp, #8]
    SizeOfStructPokemon();
    AllocMonZeroed(0xb);
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // add r0, r0, r4
    MI_CpuCopy8(r0, r5);
    // ldr r0, [sp, #4]
    Party_AddMon(*((u32*)(r0 + 0x28)), r6);
    // ldr r0, [sp, #8]
    // add r4, r4, r5
    Heap_Free(r6);
    sub_0203769C();
    // ldr r0, [sp, #4]
    Party_SwapSlots(*((u32*)(r0 + 0x28)), 0, 2);
    // ldr r0, [sp, #4]
    Party_SwapSlots(*((u32*)(r0 + 0x28)), 1, 3);
}




void ov80_0222BA5C(void) {
}




void ov80_0222BA7C(void) {
    sub_02030FA0(*((u32*)(r0 + 4)));
    // strh r0, [r4, r1]
    // add r1, r4, r1
    // strh r2, [r4, r0]
    sub_02037030(0x41, (0x00000426 - 2), 0x28);
}




void ov80_0222BAB0(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000A7C, (*((u8*)(r3 + 0x00000A7C)) + 1));
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
}




void ov80_0222BAE0(void) {
    // add r0, #0x78
    // strh r0, [r4, r2]
    // add r1, r1, r2
    sub_02037030(0x42, r0, 0x28, (0 + 1));
}




void ov80_0222BB18(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000A7C, (*((u8*)(r3 + 0x00000A7C)) + 1));
    sub_0203769C();
    // add r0, #0x78
    // strh r1, [r0]
}




void ov80_0222BB54(void) {
    // strh r2, [r5, r1]
    // add r2, r3, r5
    // strh r2, [r4, r1]
    // add r1, #0x10
    // add r6, #8
    // strh r4, [r1, r7]
    // strh r4, [r1, r6]
    // add r1, r3, r1
    sub_02037030(0x43, 0x00000424, 0x28, r0);
}




void ov80_0222BBD0(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000A7C, (*((u8*)(r3 + 0x00000A7C)) + 1));
    sub_0203769C();
    // strh r1, [r6, r0]
    // add r1, r4, r6
    // strb r2, [r1, r0]
    // add r5, #0x10
    // str r0, [r4, r2]
    // str r0, [r4, r6]
}




void ov80_0222BC48(void) {
}




void ov80_0222BC6C(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000A7C, (*((u8*)(r3 + 0x00000A7C)) + 1));
    // strb r1, [r4, r0]
}




void ov80_0222BC94(void) {
}




void ov80_0222BCB8(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000A7C, (*((u8*)(r3 + 0x00000A7C)) + 1));
    // strb r1, [r4, r0]
}




void ov80_0222BCE0(void) {
    BattleArcade_GetMonCount(*((u8*)(r0 + 0x10)), 0);
    // str r0, [sp]
    SizeOfStructPokemon();
    // ldr r0, [sp]
    // add r0, r7, r0
    // str r0, [sp, #4]
    Party_GetMonByIndex(*((u32*)(r7 + 0x70)), 0);
    // ldr r1, [sp, #4]
    // add r1, r1, r5
    MI_CpuCopy8(r6);
    // ldr r0, [sp]
    // add r5, r5, r6
    // add r1, r7, r1
    sub_02036FD8(0x46, 0x00000474, (2 << 8));
}




void ov80_0222BD44(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    // strb r2, [r0, r1]
    sub_0203769C(r3, 0x00000A7C, (*((u8*)(r3 + 0x00000A7C)) + 1));
    // ldr r0, [sp, #4]
    BattleArcade_GetMonCount(*((u8*)(r0 + 0x10)), 0);
    // str r0, [sp, #8]
    SizeOfStructPokemon();
    AllocMonZeroed(0xb);
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // add r0, r0, r4
    MI_CpuCopy8(r0, r5);
    // ldr r0, [sp, #4]
    Party_AddMon(*((u32*)(r0 + 0x70)), r6);
    // ldr r0, [sp, #8]
    // add r4, r4, r5
    Heap_Free(r6);
    sub_0203769C();
    // ldr r0, [sp, #4]
    Party_SwapSlots(*((u32*)(r0 + 0x70)), 0, 2);
    // ldr r0, [sp, #4]
    Party_SwapSlots(*((u32*)(r0 + 0x70)), 1, 3);
}




void ov80_0222BDD4(void) {
}



