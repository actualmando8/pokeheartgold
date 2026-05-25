/* Decompiled from asm/unk_0202FBCC.s */
#include "global.h"

void sub_0202FBCC(void) {
    // ldr r0, _0202FBD0 ; =0x00001D50
    // bx lr
    // _0202FBD0: .word 0x00001D50
    // TODO: decompile
}




void sub_0202FBD4(void) {
}




void sub_0202FBF0(void) {
    Heap_Free(*((u32*)_021D2AF8));
    // str r1, [r0]
    sub_0202711C(r5, r4, r6, 0);
    // str r0, [r1]
    sub_0202FBD4(_021D2AF8);
}




void sub_0202FC24(void) {
    GF_AssertFail(*((u32*)_021D2AF8));
    Heap_Free(*((u32*)_021D2AF8));
    // str r1, [r0]
}




void sub_0202FC48(void) {
    // ldr r0, _0202FC58 ; =_021D2AF8
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0202FC54
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _0202FC58: .word _021D2AF8
    // TODO: decompile
}




void sub_0202FC5C(void) {
}




void sub_0202FC74(void) {
}




void sub_0202FC90(void) {
    Heap_Free(*((u32*)_021D2AF8));
    // str r1, [r0]
    // ldr r3, [sp, #0x18]
    sub_0202711C(r5, r7, r4);
    // str r0, [r1]
    // str r0, [r4]
    // add r0, #0xe8
    // eor r3, r2
    // add r2, r2, r3
    sub_02030258(1, 0x00001C64, *((u16*)(1 + 0x00001C64)), (0x0000FFFF << 0x10));
    sub_02030154(r5, *((u32*)_021D2AF8));
    // str r0, [r4]
    sub_0203018C(r5, *((u32*)_021D2AF8));
    // str r0, [r4]
    sub_020304F0(r6, r5);
    // str r0, [r4]
}




void sub_0202FD28(void) {
    sub_0202711C();
    // str r1, [r5]
    Heap_Free(3);
    // add r0, #0xe8
    // eor r3, r2
    // add r2, r2, r3
    sub_02030258(0, 0x00001C64, *((u16*)(0 + 0x00001C64)), (0x0000FFFF << 0x10));
    sub_02030154(r6, r4);
    // str r0, [r5]
    Heap_Free(r4);
    sub_0203018C(r6, r4);
    // str r0, [r5]
    Heap_Free(r4);
    // str r0, [r5]
    Heap_Free(r4);
}




void sub_0202FDA4(void) {
    // strh r0, [r4]
    // strh r0, [r4]
}




void sub_0202FE14(void) {
    // ldr r6, [sp, #0x18]
    // mov ip, r1
    // add r4, #0xe8
    // add r5, #0x84
    // str r1, [sp]
    // mov r3, ip
    sub_0202FF08(3, *((u32*)_021D2AF8), *((u32*)_021D2AF8));
    // add r0, #0x48
    // strh r1, [r0]
    SaveArray_CalcCRC16(r7, r5, 0x58);
    // add r5, #0x60
    // strh r0, [r5]
    // strh r0, [r4, r2]
    SaveArray_CalcCRC16(r7, r4, (0x00001C62 + 2));
    // strh r0, [r4, r1]
    // eor r3, r2
    // add r2, r2, r3
    sub_02030250(r4, 0x00001C64, *((u16*)(r4 + 0x00001C64)), (0x0000FFFF << 0x10));
    // ldr r0, [sp, #0x1c]
    // strh r1, [r0]
    // strh r0, [r6]
    // ldr r3, [sp, #0x1c]
    sub_0202FDA4((*((u16*)r6) + 1), *((u32*)_021D2AF8), r3);
}




void sub_0202FEB8(void) {
    // sub r3, #0xe
    // add r3, r3, r3
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _0202FED2: ; jump table
    // str r0, [r1]
    // str r0, [r2]
    // str r0, [r1]
    // str r0, [r2]
}




void sub_0202FF08(void) {
    // str r3, [sp, #8]
    // str r2, [sp, #4]
    // str r0, [sp]
    // add r2, sp, #0x1c
    // strb r0, [r2]
    // add r0, sp, #0x18
    // strb r2, [r0]
    *((u8*)(*((u8*)_020F68C8) + 1)) = *((u8*)(_020F68C4 + 1));
    *((u8*)(*((u8*)_020F68C8) + 2)) = *((u8*)(_020F68C4 + 2));
    *((u8*)(*((u8*)_020F68C8) + 3)) = *((u8*)(_020F68C4 + 3));
    MI_CpuFill8(r1, 0, 0x64, (_020F68C8 + 1));
    // ldr r0, [sp, #8]
    // add r1, sp, #0x28
    // add r2, sp, #0x24
    sub_0202FEB8();
    // ldr r0, [sp, #4]
    // tst r0, r3
    // tst r0, r1
    // ldr r0, [sp, #4]
    // add r1, #0xc4
    // ldr r0, [sp, #4]
    // add r1, #0xc4
    // ldr r5, [sp, #0x28]
    // mov ip, r0
    // add r0, sp, #0x18
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // and r0, r4
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // and r6, r1
    // tst r1, r4
    // ldr r1, [sp, #0x10]
    // add r4, #0xb4
    // ldr r0, [sp, #4]
    // add r1, sp, #0x1c
    // add r4, r1, r4
    // mov r1, ip
    // tst r0, r1
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // mov r6, ip
    // mov r0, ip
    // eor r6, r1
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #4]
    // add r1, r0, r1
    // add r4, r1, r0
    // strh r0, [r3]
    // add r0, #0x30
    // add r0, r7, r2
    *((u8*)((*((u8*)*((u32*)(*((u32*)1) + (0x4d << 2)))) << 0x18) + 0x18)) = ((*((u8*)*((u32*)(*((u32*)1) + (0x4d << 2)))) << 0x18) >> 0x1b);
    // ldr r0, [sp, #0x24]
    // add r4, #0x70
    // ldr r0, [sp, #0x14]
    // ldr r5, [sp, #0x28]
    // str r0, [sp, #0x14]
    // mov r0, ip
    // mov ip, r0
    // ldr r0, [sp, #8]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02030060: ; jump table
    // ldr r0, [sp]
    sub_020291E8((*((u16*)((((*((u8*)*((u32*)(*((u32*)1) + (0x4d << 2)))) << 0x18) + 1) + 1) + 6)) << 0x10), 0, (0 + 1), (r7 + 2));
    // add r3, #0x28
    // strh r1, [r3]
    // ldr r0, [sp]
    sub_020291E8((r0 + 2), 1, (0x10 - 1), (r7 + 2));
    // add r3, #0x28
    // strh r1, [r3]
    // ldr r0, [sp]
    sub_020291E8((r0 + 2), 2, (0x10 - 1), (r7 + 2));
    // add r3, #0x28
    // strh r1, [r3]
    // ldr r0, [sp]
    sub_020291E8((r0 + 2), 3, (0x10 - 1), (r7 + 2));
    // add r3, #0x28
    // strh r1, [r3]
    // ldr r0, [sp]
    sub_020291E8((r0 + 2), 4, (0x10 - 1), (r7 + 2));
    // add r3, #0x28
    // strh r1, [r3]
    // ldr r0, [sp]
    sub_020291E8((r0 + 2), 5, (0x10 - 1), (r7 + 2));
    // add r3, #0x28
    // strh r1, [r3]
    sub_0202925C((r0 + 2), *((u16*)r0), (0x10 - 1), (r7 + 2));
    // add r3, #0x28
    // strh r1, [r3]
    // ldr r0, [sp, #0x40]
    *((u16*)(r7 + 0x24)) = (r0 + 2);
    // ldr r0, [sp, #8]
    // add r7, #0x26
    // strb r0, [r7]
}




void sub_02030154(void) {
    // add r4, #0xe8
    // add r5, #0x84
    Save_CheckExtraChunksExist();
    // add r5, #0x48
}




void sub_0203018C(void) {
    // add r4, #0xe8
    // add r5, #0x84
    // add r1, #0x48
    SaveArray_CalcCRC16(0, r1, 0x58);
    // add r5, #0x60
    SaveArray_CalcCRC16(r6, r4, 0x00001C64);
    // mov ip, r0
    // add r0, r4, r0
    // str r0, [sp]
    // add r7, #0x45
    // add r6, #0x1c
    // ldr r4, [sp]
    // add r4, #0x70
    // ldr r2, [sp]
    // add r1, r2, r1
    // str r1, [sp]
    // mov r1, ip
    // mov ip, r1
}




void sub_02030250(void) {
}




void sub_02030258(void) {
}




void sub_02030260(void) {
    // add r0, r3, r0
    // add r1, r0, r1
    // strb r2, [r1, r0]
}




u8 sub_0203027C(void) {
    GF_AssertFail(*((u32*)_021D2AF8));
    // add r0, r1, r0
    // add r1, r0, r4
}




void sub_020302A4(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // add r1, #0xe8
    // str r0, [r1]
    // ldr r0, [sp]
    // add r7, #0xe8
    // ldr r1, [sp]
    *((u32*)(*((u32*)_021D2AF8) + 4)) = *((u32*)(*((u32*)_021D2AF8) + 0x14));
    // add r1, #0xe8
    // str r2, [r1]
    // ldr r1, [sp]
    // add r1, #0xec
    // str r2, [r1]
    // ldr r1, [sp]
    // add r2, #8
    // add r1, #0xf0
    // str r2, [r1]
    // ldr r1, [sp]
    // add r2, #0xc
    // add r1, #0xf4
    // str r2, [r1]
    // ldr r1, [sp]
    // add r2, #0x10
    // add r1, #0xf8
    // str r2, [r1]
    // ldr r1, [sp]
    // add r2, #0x14
    // add r1, #0xfc
    // str r2, [r1]
    // ldr r1, [sp]
    // add r2, #0x18
    // sub r1, #0x4c
    // str r2, [r7, r1]
    // ldr r1, [sp]
    // add r2, #0x1c
    // sub r1, #0x48
    // str r2, [r7, r1]
    // ldr r1, [sp]
    // add r2, #0x24
    // sub r1, #0x44
    // str r2, [r7, r1]
    // ldr r1, [sp]
    // add r2, #0x28
    // sub r1, #0x40
    // str r2, [r7, r1]
    // ldr r1, [sp]
    // add r2, #0x2c
    // sub r1, #0x3c
    // str r2, [r7, r1]
    // ldr r1, [sp]
    // add r2, #0x40
    // sub r1, #0x28
    // str r2, [r7, r1]
    // ldr r1, [sp]
    // add r2, #0x44
    // sub r1, #0x24
    // str r2, [r7, r1]
    // ldr r1, [sp]
    // add r2, #0x48
    // sub r1, #0x20
    // str r2, [r7, r1]
    // ldr r1, [sp]
    // add r2, #0x50
    // sub r1, #0x1c
    // str r2, [r7, r1]
    // ldr r1, [sp]
    // add r2, #0x64
    // sub r1, #8
    // strh r2, [r7, r1]
    // ldr r1, [sp]
    // add r2, #0x67
    // ldr r4, [sp]
    // strh r2, [r7, r1]
    // ldr r1, [sp]
    // add r2, #0x68
    // str r1, [r7, r0]
    // str r0, [sp, #8]
    // str r7, [sp, #4]
    // ldr r2, [sp, #8]
    // ldr r6, [sp, #4]
    *((u32*)(*((u32*)_021D2AF8) + 8)) = *((u32*)(r4 + 0x18));
    // add r2, #0x28
    // add r6, #0x18
    // mov ip, r0
    // ldmia r2!, {r0, r1}
    // stmia r6!, {r0, r1}
    // mov r0, ip
    // mov ip, r0
    // str r0, [r6]
    // sub r1, #0x68
    // sub r1, #0x68
    // str r0, [r5, r1]
    // sub r1, #0x6c
    // str r2, [r5, r1]
    // ldr r1, [sp]
    // add r2, r1, r3
    // add r1, #0x1c
    // add r1, r7, r3
    // sub r0, #0x54
    // strb r2, [r1, r0]
    // ldr r0, [sp, #8]
    // add r0, #0x34
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, #0x34
    // str r0, [sp, #4]
    // ldr r4, [sp]
    // add r0, r7, r0
    // str r0, [sp, #0xc]
    // add r6, r7, r0
    // ldr r1, [sp, #0xc]
    sub_020306DC(*((u32*)((r4 + 4) + 4)), (0x1a << 4), *((u8*)(*((u32*)(r4 + (0x1a << 4))) + (0x1a << 4))), (0 + 1));
    // add r0, #0xf8
    PlayerProfile_Copy(*((u32*)r4), r6);
    sub_02006EFC(*((u32*)(r4 + (0x46 << 2))));
    // add r2, r7, r5
    // strb r0, [r2, r1]
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // add r6, #0x20
    // ldr r0, [sp]
    // add r1, r7, r1
    Options_Copy(*((u32*)((0xa9 << 2) + (0x13 << 4))), 0x00001C60);
}




void sub_0203049C(void) {
    // add r2, r2, r0
    // str r1, [r2, r0]
}




void sub_020304B4(void) {
    // add r4, #0xe8
    // add r1, #0x2c
}




void sub_020304F0(void) {
    // str r1, [sp]
    // str r0, [sp, #0x14]
    // add r0, #0xe8
    // add r1, #0xe8
    // str r0, [sp, #0x14]
    // str r0, [r6]
    // ldr r0, [sp, #0x14]
    // add r0, #0xe8
    // str r1, [r6, r0]
    // ldr r1, [sp, #0x14]
    // add r1, #0xec
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // add r1, #0xf0
    // add r1, #8
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // add r1, #0xf4
    // add r1, #0xc
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // add r1, #0xf8
    // add r1, #0x10
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // add r1, #0xfc
    // add r1, #0x14
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // sub r2, #0x4c
    // add r1, #0x18
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // sub r2, #0x48
    // add r1, #0x1c
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // sub r2, #0x44
    // add r1, #0x24
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // sub r2, #0x40
    // add r1, #0x28
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // sub r2, #0x28
    // add r1, #0x40
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // sub r2, #0x24
    // add r1, #0x44
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // sub r2, #0x20
    // add r1, #0x48
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // sub r2, #0x1c
    // add r1, #0x50
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // sub r2, #8
    // add r1, #0x64
    // strh r2, [r6, r1]
    *((u32*)(r0 + 0x14)) = 0;
    // add r0, #0x2c
    // str r1, [r6, r0]
    // ldr r0, [sp]
    Save_Pokedex_Get((0x53 << 2), 0, *((u16*)((0x53 << 2) + (0x53 << 2))));
    Pokedex_Copy(*((u32*)(r6 + (0x11 << 4))));
    // ldr r5, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #8]
    // add r0, r0, r1
    // str r6, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    *((u32*)(r6 + 0x18)) = *((u32*)(r5 + 8));
    // add r3, #0x18
    // add r2, #0x28
    // mov ip, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, ip
    // mov ip, r0
    // str r0, [r2]
    // add r0, #0x68
    // str r2, [r4, r0]
    // add r0, #0x20
    // add r1, #0x8c
    // str r0, [r4, r1]
    // ldr r0, [sp, #8]
    sub_02030724(*((u32*)(r5 + (0x45 << 2))), *((u32*)(r6 + 4)), *((u32*)(r5 + (0x45 << 2))));
    // add r1, #0xf8
    // ldr r0, [sp, #4]
    PlayerProfile_Copy(*((u32*)r4));
    // ldr r0, [sp, #0x14]
    // add r1, r0, r7
    // add r1, r6, r7
    // add r0, #0x70
    // strb r2, [r1, r0]
    // ldr r0, [sp, #0x10]
    // add r0, #0x34
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0x34
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, #0x20
    // str r0, [sp, #4]
    // ldr r0, [sp]
    Save_PlayerData_GetOptionsAddr((0x53 << 2), (0xa9 << 2), *((u8*)(r1 + (0x53 << 2))));
    Options_Copy(*((u32*)(r6 + (0x13 << 4))));
    // ldr r2, [sp, #0x14]
    // and r0, r3
    // strh r0, [r1]
    // and r0, r3
    // strh r0, [r2]
}




void sub_020306DC(void) {
    // strh r0, [r6]
    // add r5, #0x70
}




void sub_02030724(void) {
    // str r1, [sp]
    // add r0, sp, #4
    // strb r1, [r0]
    // ldr r0, [sp]
    // add r2, sp, #4
    // ldr r0, [sp]
    // add r5, #0x70
}




void sub_0203077C(void) {
    GF_AssertFail(*((u32*)_021D2AF8));
    Heap_Alloc(r4, 0x64);
    // add r0, #0x84
    MIi_CpuCopy32(*((u32*)_021D2AF8), r0, 0x64);
}




void sub_020307AC(void) {
    GF_AssertFail(*((u32*)_021D2AF8));
    Heap_Alloc(r4, 0x80);
    MIi_CpuCopy32((*((u32*)_021D2AF8) + 4), r0, 0x80);
}




void sub_020307DC(void) {
}




void sub_020307F8(void) {
}




void sub_02030814(void) {
    GF_AssertFail(*((u32*)_021D2AF8));
    // add r1, #0x84
    MI_CpuCopy8(r6, *((u32*)_021D2AF8), 0x64);
    // add r1, #0xe8
    MI_CpuCopy8(r7, *((u32*)_021D2AF8), 0x00001C68);
    MI_CpuCopy8(r5, (*((u32*)_021D2AF8) + 4), 0x80);
    // add r0, #0xe8
    // sub r1, #0xe8
    // eor r2, r3
    // add r2, r3, r2
    sub_02030258(*((u32*)_021D2AF8), 0x00001D4C, (0x0000FFFF << 0x10), *((u16*)(*((u32*)_021D2AF8) + 0x00001D4C)));
    // ldr r1, [sp, #0x18]
    sub_020304F0(r4);
}




void sub_0203088C(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _020308A2: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    GF_AssertFail(0, 0);
    // add r0, r4, r5
    // add r4, #0x26
    // add r4, #0x27
    GF_AssertFail(*((u8*)r4), 0);
}




void sub_02030920(void) {
}




void sub_02030938(void) {
}




void sub_02030940(void) {
}




void sub_0203094C(void) {
}




void sub_0203095C(void) {
    // ldrb r0, [r0]
}




void sub_02030964(void) {
    // strb r1, [r0]
}




void sub_02030978(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0203098A: ; jump table
    // and r1, r2
    // strb r1, [r0]
    // strb r1, [r0]
    // add r0, r0, r1
    // add r0, r0, r1
    // add r0, r0, r2
    // add r0, #0x28
    // strb r1, [r0]
    // add r0, r0, r1
    // add r0, r0, r1
    // add r0, r0, r2
    // add r0, #0x44
    // strb r1, [r0]
    // add r0, r0, r1
}




void sub_02030A24(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02030A34: ; jump table
    // add r0, r0, r1
    // add r0, r0, r1
    // add r0, r0, r2
    // add r0, #0x28
    // add r0, r0, r1
    // add r0, r0, r1
    // add r0, r0, r2
    // add r0, #0x44
    // add r0, r0, r1
}



