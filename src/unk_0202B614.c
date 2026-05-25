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
    ov41_02249780();
    ov41_02249710(r4);
    // ldr r1, [sp, #4]
    GF_AssertFail((1 << 8));
    // ldr r1, [sp]
    GF_AssertFail((1 << 8));
    // mvn r0, r0
    GF_AssertFail(0x7f);
    // ldr r0, [sp, #4]
    // strb r0, [r5]
    // ldr r0, [sp]
    // strb r0, [r6]
    // strb r4, [r7]
}



void sub_0202B684(void) {
    // mov r1, #MON_DATA_SPECIES
    GetMonData(r1, 0);
    *((u16*)(r5 + 8)) = r0;
    // mov r1, #MON_DATA_NICKNAME
    // add r2, #0xa
    GetMonData(r4, r5);
    // mov r1, #MON_DATA_PERSONALITY
    GetMonData(r4, r1);
    // str r0, [r5]
    // mov r1, #MON_DATA_OT_ID
    GetMonData(r4, 0);
    *((u32*)(r5 + 4)) = r0;
    // mov r1, #MON_DATA_FORM
    GetMonData(r4, 0);
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
    sub_0202B630(r2);
    // add r3, sp, #4
    // ldrsb r0, [r3, r0]
    // str r0, [sp]
    sub_0202B684(r5, r4, *((u8*)(r3 + 2)), *((u8*)(r3 + 1)));
}



void sub_0202B718(void) {
}



void sub_0202B730(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    CreateMon(r1, *((u16*)(r0 + 8)), 0, 0);
    // add r2, #0xa
    SetMonData(r4, 0x75, r5);
    // add r5, #0x33
    SetMonData(r4, 0x70, r5);
}



void sub_0202B770(void) {
    // strb r1, [r0]
    // ldr r1, _0202B780 ; =0xFFFFFFF0
    // strb r2, [r0, #1]
    // strb r3, [r0, #2]
    // add r1, sp
    // ldrb r1, [r1, #0x10]
    // strb r1, [r0, #3]
    // bx lr
    // _0202B780: .word 0xFFFFFFF0
    // TODO: decompile
}



void sub_0202B784(void) {
    GF_AssertFail();
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // lsl r2, r1
    // ldr r3, [r5, r0]
    // mvn r2, r2
    // and r2, r3
    // str r2, [r5, r0]
    // ldr r3, [r5, r0]
    // lsl r2, r1
    // orr r1, r2
    // str r1, [r5, r0]
}



void sub_0202B7C8(void) {
    GF_AssertFail();
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // ldr r0, [r5, r0]
    // lsr r2, r1
    // and r0, r2
}



void sub_0202B808(void) {
    GF_AssertFail();
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // lsl r2, r1
    // ldr r3, [r5, r0]
    // mvn r2, r2
    // and r2, r3
    // str r2, [r5, r0]
    // ldr r3, [r5, r0]
    // lsl r2, r1
    // orr r1, r2
    // str r1, [r5, r0]
}



void sub_0202B848(void) {
    // ldr r3, [r0, r2]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // lsr r1, r0
    // and r0, r1
}



void sub_0202B870(void) {
    GF_AssertFail();
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // lsl r2, r1
    // ldr r3, [r5, r0]
    // mvn r2, r2
    // and r2, r3
    // str r2, [r5, r0]
    // ldr r3, [r5, r0]
    // lsl r2, r1
    // orr r1, r2
    // str r1, [r5, r0]
}



void sub_0202B8B4(void) {
    // ldr r0, [r0, r2]
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // lsr r0, r1
}



void sub_0202B8D8(void) {
    sub_0202B8B4(r0, ((0 << 0x18) >> 0x18));
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
    memset(0, 0x40);
    // add r5, #0x28
    sub_0202B870(r5, 0x12, ((0 << 0x18) >> 0x18));
}



void Save_FashionData_Init(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r4, #0
    // ldr r6, _0202B980 ; =0x00001234
    // str r0, [sp]
    // add r5, r0, #0
    // add r7, r4, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r2, #0x74
    // bl memset
    // str r6, [r5]
    // add r4, r4, #1
    // add r5, #0x74
    // cmp r4, #0xb
    // blt _0202B93C
    // ldr r0, [sp]
    // ldr r1, _0202B984 ; =0x000004FC
    // ldr r7, _0202B980 ; =0x00001234
    // mov r6, #0
    // add r4, r0, r1
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x98
    // bl memset
    // ldr r0, _0202B984 ; =0x000004FC
    // add r6, r6, #1
    // str r7, [r5, r0]
    // add r4, #0x98
    // add r5, #0x98
    // cmp r6, #5
    // blt _0202B95C
    // ldr r1, _0202B988 ; =0x000007F4
    // ldr r0, [sp]
    // add r0, r0, r1
    // bl sub_0202B908
    // pop {r3, r4, r5, r6, r7, pc}
    // _0202B980: .word 0x00001234
    // _0202B984: .word 0x000004FC
    // _0202B988: .word 0x000007F4
    // TODO: decompile
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
    // push {r4, lr}
    // mov r1, #0x74
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x74
    // add r4, r0, #0
    // bl memset
    // ldr r0, _0202B9B4 ; =0x00001234
    // str r0, [r4]
    // add r0, r4, #0
    // pop {r4, pc}
    // nop
    // _0202B9B4: .word 0x00001234
    // TODO: decompile
}



void sub_0202B9B8(void) {
    GF_AssertFail();
    // mul r4, r0
    // ldr r0, [r5, r4]
    sub_0202B614(0x74);
    GF_AssertFail();
    // add r0, r5, r4
}



void Save_FashionData_GetFashionCase(void) {
    // ldr r1, _0202B9E8 ; =0x000007F4
    // add r0, r0, r1
    // bx lr
    // nop
    // _0202B9E8: .word 0x000007F4
    // TODO: decompile
}



void sub_0202B9EC(void) {
    GF_AssertFail();
    // mul r0, r4
    // add r0, r5, r0
    sub_0202BC10(0x74);
}



void sub_0202BA08(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // cmp r4, #5
    // blt _0202BA16
    // bl GF_AssertFail
    // ldr r0, _0202BA28 ; =0x000004FC
    // add r1, r5, r0
    // mov r0, #0x98
    // mul r0, r4
    // add r0, r1, r0
    // bl sub_0202BEA4
    // pop {r3, r4, r5, pc}
    // nop
    // _0202BA28: .word 0x000004FC
    // TODO: decompile
}



void sub_0202BA2C(void) {
    sub_0202BA70();
    sub_0202B8FC(r7);
    // add r0, r6, r5
    // add r0, r6, r5
}



void sub_0202BA5C(void) {
}



void sub_0202BA70(void) {
    GF_AssertFail();
    sub_0202B8FC(r5);
    sub_0202B7C8(r4, ((r5 << 0x18) >> 0x18));
    GF_AssertFail();
    // sub r5, #0x3d
    // add r4, #0x20
    sub_0202B848(r4, ((((r5 << 0x18) >> 0x18) << 0x18) >> 0x18));
}



void sub_0202BAB0(void) {
    GF_AssertFail();
    // add r5, #0x28
    sub_0202B8B4(r5, ((r4 << 0x18) >> 0x18));
}



void FashionCase_CountAccessories(void) {
}



void FashionCase_CountWallpapers(void) {
    sub_0202BAB0(r0, 0);
}



void FashionCase_GiveFashionItem(void) {
    GF_AssertFail();
    sub_0202B8FC(r4);
    sub_0202B7C8(r5, ((r4 << 0x18) >> 0x18));
    // add r0, r0, r6
    sub_0202B784(r5, 9, ((r4 << 0x18) >> 0x18));
    // add r0, #0x20
    sub_0202B848(r5, ((r4 << 0x18) >> 0x18));
    // add r0, r0, r6
    GF_AssertFail((r0 << 0x18));
    // sub r4, #0x3d
    // add r5, #0x20
    sub_0202B808(r5, r6, ((((r4 << 0x18) >> 0x18) << 0x18) >> 0x18));
}



void sub_0202BB7C(void) {
    GF_AssertFail();
    sub_0202B8FC(r4);
    sub_0202B7C8(r5, ((r4 << 0x18) >> 0x18));
    // sub r0, r0, r6
    sub_0202B784(r5, 0, ((r4 << 0x18) >> 0x18));
    GF_AssertFail();
    // sub r4, #0x3d
    // add r5, #0x20
    sub_0202B808(r5, 0, ((((r4 << 0x18) >> 0x18) << 0x18) >> 0x18));
}



void FashionCase_GiveContestBackground(void) {
    GF_AssertFail();
    // add r0, #0x28
    sub_0202B8B4(r5, ((r4 << 0x18) >> 0x18));
    // add r0, #0x28
    sub_0202B8D8(r5);
    // add r5, #0x28
    sub_0202B870(r5, r0, ((r4 << 0x18) >> 0x18));
}



void sub_0202BC10(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // bl sub_0202B614
    // cmp r0, #0
    // bne _0202BC22
    // bl GF_AssertFail
    // ldr r1, [r4]
    // ldr r0, _0202BC34 ; =0x00002345
    // cmp r1, r0
    // bne _0202BC2E
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0202BC34: .word 0x00002345
    // TODO: decompile
}



void sub_0202BC38(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // bl sub_0202B614
    // cmp r0, #0
    // bne _0202BC4A
    // bl GF_AssertFail
    // ldr r0, _0202BC58 ; =0x00002345
    // str r0, [r4]
    // ldr r0, _0202BC5C ; =gGameLanguage
    // add r4, #0x71
    // ldrb r0, [r0]
    // strb r0, [r4]
    // pop {r4, pc}
    // _0202BC58: .word 0x00002345
    // _0202BC5C: .word gGameLanguage
    // TODO: decompile
}



void sub_0202BC60(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // bl sub_0202B614
    // cmp r0, #0
    // bne _0202BC72
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x74
    // bl memset
    // ldr r0, _0202BC84 ; =0x00001234
    // str r0, [r4]
    // pop {r4, pc}
    // nop
    // _0202BC84: .word 0x00001234
    // TODO: decompile
}



void sub_0202BC88(void) {
    sub_0202B614(*((u32*)r0));
    GF_AssertFail();
    sub_0202B6E8((r5 + 4), r4, r6);
}



void sub_0202BCAC(void) {
    sub_02015FCC(*((u32*)(r1 + 4)));
    // add r1, sp, #0xc
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    *((u16*)(r1 + 4)) = (r0 >> 0x10);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    sub_02015FF8(*((u32*)(r4 + 4)));
    GF_AssertFail();
    // add r1, sp, #0xc
    // ldrsh r1, [r1, r0]
    // add r0, #0xfc
    GF_AssertFail(4);
    // add r0, sp, #0xc
    // ldrsh r0, [r0, r1]
    // add r1, #0xfa
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    GF_AssertFail(6);
    // mvn r0, r0
    GF_AssertFail(0x7f);
    // lsl r0, r6
    // str r0, [sp, #4]
    // tst r0, r1
    GF_AssertFail(1, *((u32*)(r5 + 0x3c)));
    sub_0202B614(*((u32*)r5));
    GF_AssertFail();
    // str r0, [sp]
    // add r3, sp, #0xc
    // ldrsh r2, [r3, r2]
    // ldr r3, [sp, #8]
    // add r1, #0x48
    // add r0, r1, r0
    sub_0202B770((r6 << 2), ((*((u32*)r4) << 0x18) >> 0x18), ((4 << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #4]
    // orr r0, r1
    *((u32*)(r5 + 0x3c)) = r0;
}



void sub_0202BD60(void) {
    sub_0202B614(*((u32*)r0));
    GF_AssertFail();
    // add r5, #0x70
    // strb r4, [r5]
}



void sub_0202BD7C(void) {
    sub_0202B614(*((u32*)r0));
    GF_AssertFail();
    // add r0, #0x40
    MailMsg_Init(r5);
    // add r5, #0x40
    MailMsg_SetFieldI(r5, 0, r4);
}



void sub_0202BDA8(void) {
    sub_0202B614(*((u32*)r0));
    GF_AssertFail();
    memcpy(r5, r4, 0x74);
}



void sub_0202BDC8(void) {
    sub_0202B614(*((u32*)r0));
    GF_AssertFail();
    sub_0202B718((r5 + 4), r4, r6);
}



void sub_0202BDEC(void) {
    GF_AssertFail();
    sub_0202B614(*((u32*)r5));
    GF_AssertFail();
    // lsl r0, r4
    // and r0, r1
}



void sub_0202BE14(void) {
    sub_0202B614(*((u32*)r0));
    GF_AssertFail();
}



void sub_0202BE2C(void) {
    GF_AssertFail();
    // lsl r0, r4
    // tst r0, r1
    GF_AssertFail(1, *((u32*)(r5 + 0x3c)));
    sub_0202B614(*((u32*)r5));
    GF_AssertFail();
    // add r5, #0x48
    // add r0, r5, r0
}



void sub_0202BE60(void) {
    sub_0202B614(*((u32*)r0));
    GF_AssertFail();
    sub_0202BECC((r5 + 4), r4);
}



void sub_0202BE80(void) {
    sub_0202B614(*((u32*)r0));
    GF_AssertFail();
    // add r4, #0x70
    // ldrb r0, [r4]
}



void sub_0202BE98(void) {
}



void sub_0202BEA4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // bl sub_0202B614
    // cmp r0, #0
    // bne _0202BEB6
    // bl GF_AssertFail
    // ldr r1, [r4]
    // ldr r0, _0202BEC8 ; =0x00002345
    // cmp r1, r0
    // bne _0202BEC2
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0202BEC8: .word 0x00002345
    // TODO: decompile
}



void sub_0202BECC(void) {
    // add r2, r0, #0
    // ldr r3, _0202BED8 ; =CopyU16ArrayToString
    // add r2, #0x20
    // add r0, r1, #0
    // add r1, r2, #0
    // bx r3
    // _0202BED8: .word CopyU16ArrayToString
    // TODO: decompile
}



void sub_0202BEDC(void) {
    // ldrsb r0, [r0, r1]
}



void sub_0202BEE4(void) {
    // add r0, #0x31
    // ldrb r0, [r0]
}



void sub_0202BEEC(void) {
    // add r0, #0x32
    // ldrb r0, [r0]
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
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1fc
    // sub sp, #0x1fc
    // sub sp, #0xc
    // add r7, r0, #0
    // mov r0, #1
    // add r4, r1, #0
    // str r0, [sp]
    // add r0, r4, #0
    // bl sub_0202BC10
    // cmp r0, #1
    // bne _0202BF6E
    // ldr r1, _0202BF7C ; =0xEDB88320
    // add r0, sp, #4
    // bl MATHi_CRC32InitTableRev
    // add r0, sp, #4
    // add r1, r4, #0
    // mov r2, #0x74
    // bl MATH_CalcCRC32
    // add r6, r0, #0
    // mov r5, #0
    // add r0, r7, #0
    // add r1, r5, #0
    // bl sub_0202B9B8
    // add r4, r0, #0
    // ldr r1, _0202BF7C ; =0xEDB88320
    // add r0, sp, #4
    // bl MATHi_CRC32InitTableRev
    // add r0, sp, #4
    // add r1, r4, #0
    // mov r2, #0x74
    // bl MATH_CalcCRC32
    // cmp r0, r6
    // bne _0202BF66
    // mov r0, #0
    // str r0, [sp]
    // b _0202BF72
    // add r5, r5, #1
    // cmp r5, #0xb
    // blt _0202BF40
    // b _0202BF72
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp]
    // add sp, #0x1fc
    // add sp, #0x1fc
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0202BF7C: .word 0xEDB88320
    // TODO: decompile
}



void sub_0202BF80(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // ldr r0, [sp, #4]
    sub_0202BF10(r2, *((u32*)r3));
    // ldr r0, [sp]
    // add r1, r4, r7
    sub_0202B9B8(r5);
    sub_0202B9B8(r5, r4);
    sub_0202BDA8(r6, r0);
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    sub_0202BF10(r5, *((u32*)r0));
    sub_0202B9B8(r5, r6);
    sub_0202BDA8(r7);
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp]
}



void Save_FashionData_Get(void) {
}


