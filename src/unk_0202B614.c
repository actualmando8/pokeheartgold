/* Decompiled from asm/unk_0202B614.s */
#include "global.h"

void sub_0202B614(void) {
    // ldr r1, _0202B628 ; =0x00001234
    // cmp r0, r1
    // beq _0202B620
    // ldr r1, _0202B62C ; =0x00002345
    // cmp r0, r1
    // bne _0202B624
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _0202B628: .word 0x00001234
    // _0202B62C: .word 0x00002345
    // TODO: decompile
}




void sub_0202B630(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // ldr r1, [sp]
    // mvn r0, r0
    // ldr r0, [sp, #4]
    // strb r0, [r5]
    // ldr r0, [sp]
    // strb r0, [r6]
    // strb r4, [r7]
}




void sub_0202B684(void) {
    // mov r1, #MON_DATA_SPECIES
    // mov r1, #MON_DATA_NICKNAME
    // add r2, #0xa
    // mov r1, #MON_DATA_PERSONALITY
    // str r0, [r5]
    // mov r1, #MON_DATA_OT_ID
    // mov r1, #MON_DATA_FORM
    // add r1, #0x33
    // strb r0, [r1]
    // add r0, #0x31
    // strb r6, [r0]
    // add r0, #0x32
    // strb r7, [r0]
    // add r1, sp, #8
    // ldrsb r0, [r1, r0]
    // add r5, #0x30
    // strb r0, [r5]
}




void sub_0202B6E8(void) {
    // add r1, sp, #4
    // add r2, sp, #4
    // add r1, #2
    // add r2, #1
    // add r3, sp, #4
    // add r3, sp, #4
    // ldrsb r0, [r3, r0]
    // str r0, [sp]
}




void sub_0202B718(void) {
}




void sub_0202B730(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xa
    // add r5, #0x33
}




void sub_0202B770(void) {
    // strb r1, [r0]
    *((u8*)(r0 + 1)) = r2;
    *((u8*)(r0 + 2)) = r3;
    // add r1, sp
    *((u8*)(r0 + 3)) = *((u8*)(0xFFFFFFF0 + 0x10));
}




void sub_0202B784(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // lsl r2, r1
    // mvn r2, r2
    // and r2, r3
    // str r2, [r5, r0]
    // lsl r2, r1
    // str r1, [r5, r0]
}




void sub_0202B7C8(void) {
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // lsr r2, r1
    // and r0, r2
}




void sub_0202B808(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // lsl r2, r1
    // mvn r2, r2
    // and r2, r3
    // str r2, [r5, r0]
    // lsl r2, r1
    // str r1, [r5, r0]
}




void sub_0202B848(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // lsr r1, r0
    // and r0, r1
}




void sub_0202B870(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // lsl r2, r1
    // mvn r2, r2
    // and r2, r3
    // str r2, [r5, r0]
    // lsl r2, r1
    // str r1, [r5, r0]
}




void sub_0202B8B4(void) {
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // lsr r0, r1
}




void sub_0202B8D8(void) {
}




void sub_0202B8FC(void) {
    // cmp r0, #0x3d
    // bhs _0202B904
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void sub_0202B908(void) {
    // add r5, #0x28
}




void Save_FashionData_Init(void) {
    // str r0, [sp]
    memset(r0, 0, 0x74);
    // str r6, [r5]
    // add r5, #0x74
    // ldr r0, [sp]
    // add r4, r0, r1
    memset((r4 + 1), 0, 0x98);
    // str r7, [r5, r0]
    // add r4, #0x98
    // add r5, #0x98
    // ldr r0, [sp]
    // add r0, r0, r1
    sub_0202B908(0x000004FC, 0x000007F4);
}




void Save_FashionData_sizeof(void) {
    // ldr r0, _0202B990 ; =0x00000834
    // bx lr
    // _0202B990: .word 0x00000834
    // TODO: decompile
}




u8 sub_0202B994(void) {
}




void sub_0202B998(void) {
    Heap_Alloc(0x74);
    memset(0, 0x74);
    // str r0, [r4]
}




void sub_0202B9B8(void) {
    // add r0, r5, r4
}




void Save_FashionData_GetFashionCase(void) {
    // add r0, r0, r1
}




void sub_0202B9EC(void) {
    // add r0, r5, r0
}




void sub_0202BA08(void) {
    GF_AssertFail();
    // add r1, r5, r0
    // add r0, r1, r0
    sub_0202BEA4((0x98 * r4));
}




void sub_0202BA2C(void) {
    // add r0, r6, r5
    // add r0, r6, r5
}




void sub_0202BA5C(void) {
}




void sub_0202BA70(void) {
    // sub r5, #0x3d
    // add r4, #0x20
}




void sub_0202BAB0(void) {
    // add r5, #0x28
}




void FashionCase_CountAccessories(void) {
}




void FashionCase_CountWallpapers(void) {
}




void FashionCase_GiveFashionItem(void) {
    // add r0, r0, r6
    // add r0, #0x20
    // add r0, r0, r6
    // sub r4, #0x3d
    // add r5, #0x20
}




void sub_0202BB7C(void) {
    // sub r0, r0, r6
    // sub r4, #0x3d
    // add r5, #0x20
}




void FashionCase_GiveContestBackground(void) {
    // add r0, #0x28
    // add r0, #0x28
    // add r5, #0x28
}




void sub_0202BC10(void) {
    sub_0202B614(*((u32*)r0));
    GF_AssertFail();
}




void sub_0202BC38(void) {
    sub_0202B614(*((u32*)r0));
    GF_AssertFail();
    // str r0, [r4]
    // add r4, #0x71
    // strb r0, [r4]
}




void sub_0202BC60(void) {
    sub_0202B614(*((u32*)r0));
    GF_AssertFail();
    memset(r4, 0, 0x74);
    // str r0, [r4]
}




void sub_0202BC88(void) {
}




void sub_0202BCAC(void) {
    // add r1, sp, #0xc
    // strh r0, [r1]
    // add r1, sp, #0xc
    // ldrsh r1, [r1, r0]
    // add r0, #0xfc
    // add r0, sp, #0xc
    // ldrsh r0, [r0, r1]
    // add r1, #0xfa
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // mvn r0, r0
    // lsl r0, r6
    // str r0, [sp, #4]
    // tst r0, r1
    // str r0, [sp]
    // add r3, sp, #0xc
    // ldrsh r2, [r3, r2]
    // ldr r3, [sp, #8]
    // add r1, #0x48
    // add r0, r1, r0
    // ldr r0, [sp, #4]
}




void sub_0202BD60(void) {
    // add r5, #0x70
    // strb r4, [r5]
}




void sub_0202BD7C(void) {
    // add r0, #0x40
    // add r5, #0x40
}




void sub_0202BDA8(void) {
}




void sub_0202BDC8(void) {
}




void sub_0202BDEC(void) {
    // lsl r0, r4
    // and r0, r1
}




void sub_0202BE14(void) {
}




void sub_0202BE2C(void) {
    // lsl r0, r4
    // tst r0, r1
    // add r5, #0x48
    // add r0, r5, r0
}




void sub_0202BE60(void) {
}




void sub_0202BE80(void) {
    // add r4, #0x70
}




void sub_0202BE98(void) {
}




void sub_0202BEA4(void) {
    sub_0202B614(*((u32*)r0));
    GF_AssertFail();
}




void sub_0202BECC(void) {
    // add r2, #0x20
}




void sub_0202BEDC(void) {
    // ldrsb r0, [r0, r1]
}




void sub_0202BEE4(void) {
    // add r0, #0x31
}




void sub_0202BEEC(void) {
    // add r0, #0x32
}




void sub_0202BEF4(void) {
}




void sub_0202BEFC(void) {
    // ldrb r0, [r0]
}




void sub_0202BF00(void) {
    // ldrb r0, [r0, #1]
    // bx lr
    // TODO: decompile
}




void sub_0202BF04(void) {
    // ldrb r0, [r0, #2]
    // bx lr
    // TODO: decompile
}




void sub_0202BF08(void) {
    // ldrsb r0, [r0, r1]
}




void sub_0202BF10(void) {
    // str r0, [sp]
    sub_0202BC10(r1);
    // add r0, sp, #4
    MATHi_CRC32InitTableRev(0xEDB88320);
    // add r0, sp, #4
    MATH_CalcCRC32(r4, 0x74);
    sub_0202B9B8(r7, 0);
    // add r0, sp, #4
    MATHi_CRC32InitTableRev(0xEDB88320);
    // add r0, sp, #4
    MATH_CalcCRC32(r4, 0x74);
    // str r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp]
}




void sub_0202BF80(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // add r1, r4, r7
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp]
}




void Save_FashionData_Get(void) {
}



