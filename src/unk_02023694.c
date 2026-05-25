/* Decompiled from asm/unk_02023694.s */
#include "global.h"

void sub_02023694(void) {
    // strb r2, [r0]
    // add r1, #0xd0
    // str r2, [r1]
    // add r1, #0xd4
    // str r2, [r1]
    // add r1, #0xd8
    // str r2, [r1]
    // add r1, #0xdc
    // str r2, [r1]
}




void sub_020236BC(void) {
    // add r1, #0x84
    // str r3, [r1]
    // add r1, #0x88
    // str r3, [r1]
    // add r1, #0x8c
    // str r3, [r1]
    // add r1, #0x90
    // str r3, [r1]
    // add r2, #0xa0
    // strb r3, [r2]
    // add r2, #0x94
    // str r1, [r2]
    // add r2, #0x98
    // str r1, [r2]
    // add r2, #0x9c
    // str r1, [r2]
    // add r2, #0xb0
    // str r1, [r2]
    // str r1, [r0]
    // add r2, #0xb6
    // strh r1, [r2]
    // add r2, #0xb4
    // strb r1, [r2]
    // add r2, #0xbc
    // str r1, [r2]
    // add r2, #0xc0
    // str r1, [r2]
    // add r2, #0x24
    // strb r1, [r2]
}




void sub_02023738(void) {
    GF_AssertFail(*((u32*)_021D2208));
    Heap_Alloc(r4, (0xe0 * r6));
    // str r0, [r7]
    *((u32*)(_021D2208 + 4)) = r6;
    // add r0, r0, r5
    sub_02023694(*((u32*)_021D2208));
    // add r5, #0xe0
}




void sub_02023778(void) {
    // add r0, r0, r5
    sub_02023874(*((u32*)_021D2208));
    // add r5, #0xe0
    Heap_Free(*((u32*)_021D2208));
    // str r1, [r0]
    *((u32*)(_021D2208 + 4)) = 0;
}




void sub_020237B0(void) {
    // add r0, r0, r5
    sub_02023950(*((u32*)_021D2208), *((u8*)(*((u32*)_021D2208) + 1)));
    // add r1, r0, r5
    *((u8*)(r1 + 3)) = r7;
    // add r5, #0xe0
}




void sub_020237EC(void) {
    // strb r0, [r4]
    // add r0, #0xc
    // add r1, #0xc
    // add r0, #0xc8
    // str r1, [r0]
    // add r0, #0xcc
    // str r1, [r0]
    // add r1, #0xd0
    // str r0, [r1]
    // add r1, #0xd8
    // str r0, [r1]
    // add r0, #0xd8
    // add r1, #0xdc
    // str r0, [r1]
}




void sub_02023874(void) {
    // add r0, #0xd0
    // add r0, #0xd8
    // add r0, #0xdc
}




void sub_020238BC(void) {
    // add r1, #0xc8
    // add r4, #0xc
    // add r0, #0xbc
}




void sub_020238F8(void) {
}




void sub_02023910(void) {
}




void sub_0202391C(void) {
    // add r0, r4, r0
    // add r2, #0xe0
}




void sub_02023950(void) {
    // add r0, sp, #0
    // add r0, #0xc8
    // add r5, #0xc
    // add r6, sp, #0
    // add r0, #0x24
    // blx r2
    // add r0, #0xb4
    // add r0, #0x30
    // add r3, #0xc
    // add r4, #0xbc
}




void sub_020239D0(void) {
    // add r0, #0xb4
    // add r6, #0xc
    // add r0, #0xb4
    // strb r1, [r0]
    // add r0, #0xb6
    // strh r1, [r0]
    // add r5, #0xb8
    // str r1, [r5]
}




void sub_02023A20(void) {
    // add r0, #0xb4
    // add r0, #0x94
    // add r1, #0x98
    // add r2, #0x9c
    // add r0, #0x94
    // str r1, [r0]
    // add r0, #0x98
    // str r1, [r0]
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, #0xb4
    // add r6, #0xc
    // add r0, #0xb4
    // strb r1, [r0]
    // add r0, #0xb6
    // strh r1, [r0]
    // add r5, #0xb8
    // str r1, [r5]
}




void sub_02023AA0(void) {
    NNS_G3dTexGetRequiredSize();
    // str r0, [sp, #8]
    NNS_G3dTex4x4GetRequiredSize(r5);
    // str r0, [sp, #4]
    NNS_G3dPlttGetRequiredSize(r5);
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // blx r3
    // str r0, [r4]
    GF_AssertFail(0, 0, *((u32*)NNS_GfdDefaultFuncAllocTexVram));
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // blx r3
    // str r0, [r6]
    GF_AssertFail(0, 1, 0, *((u32*)NNS_GfdDefaultFuncAllocTexVram));
    // str r0, [r6]
    // ldr r0, [sp]
    // and r1, r2
    // blx r3
    // str r0, [r7]
    GF_AssertFail(0, (2 << 0xe), 0, *((u32*)NNS_GfdDefaultFuncAllocPlttVram));
    // str r0, [r7]
}




void sub_02023B38(void) {
}




void sub_02023B4C(void) {
    // ldr r1, [sp, #0x10]
}




void sub_02023B70(void) {
    // blx r1
    // blx r1
    // blx r1
}




void sub_02023BA4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // ldr r1, [sp, #4]
}




void sub_02023C04(void) {
}




void sub_02023C20(void) {
    // add r0, #0x8c
    // add r1, #0x88
    // add r2, #0x8c
    // add r1, #0x84
    // str r0, [r1]
    // add r1, #0x88
    // add r0, #0x30
    // add r0, #0xb4
    // add r1, #0x8c
    // add r0, #0xb4
    // add r0, #0x94
    // add r1, #0x98
    // add r2, #0x9c
    // add r0, #0x8c
    // add r5, #0x9c
    // add r1, #0x94
    // add r2, #0x98
}




void sub_02023C9C(void) {
    // add r1, #0x90
    // add r3, #0xa0
    // str r0, [r1]
    // add r4, #0xc
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, #0x9c
    // str r0, [sp]
    // add r0, #0xb8
    // str r0, [sp, #4]
    // add r6, #0xdc
    // add r2, #0x90
    // add r3, #0x94
    // add r5, #0xb0
    // str r0, [r5]
}




void sub_02023CF0(void) {
}




void sub_02023D24(void) {
    // add r3, #0xc
    // add r2, #0xa0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r4, #0xb0
    // str r0, [r4]
}




void sub_02023D44(void) {
    // add r3, #8
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r3, #0x14
    // ldmia r3!, {r0, r1}
    // add r2, #0xc
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0xb6
    // strh r1, [r0]
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, #0xb4
    // strb r1, [r0]
}




void sub_02023DA4(void) {
    // add r0, #0xb4
    // add r0, #0xb4
    // add r0, #0xb4
    // add r0, #0x94
    // add r1, #0x98
    // add r2, #0x9c
}




void sub_02023E04(void) {
    // str r1, [r4]
    // ldr r3, [sp, #8]
    // add r2, #0xc
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
}




void sub_02023E2C(void) {
    // str r1, [r4]
    // ldr r3, [sp, #8]
    // add r2, #0xc
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
}




void sub_02023E50(void) {
}




void sub_02023E68(void) {
}




void sub_02023E78(void) {
}




void sub_02023E94(void) {
}




void sub_02023EA4(void) {
}




void sub_02023EB8(void) {
}




void sub_02023EC8(void) {
}




void sub_02023EE0(void) {
}




void sub_02023EF4(void) {
}




void sub_02023F04(void) {
}




void sub_02023F1C(void) {
}




void sub_02023F30(void) {
}




void sub_02023F40(void) {
    // add r1, #0xb6
    // add r1, #0xb8
    // str r0, [r1]
    // add r0, #0xb8
    // add r5, #0xb8
    // add r0, r0, r4
    // str r0, [r5]
}




void sub_02023F70(void) {
    // add r1, #0xb6
    // add r4, #0xb8
    // sub r0, r1, r0
}




void sub_02023F90(void) {
}




void sub_02023FA0(void) {
}




void sub_02023FB0(void) {
}




void sub_02023FC0(void) {
}




void sub_02023FDC(void) {
    // add r0, #0x88
}




void sub_02023FE4(void) {
}




void sub_02023FEC(void) {
    // add r1, #0xb8
    // add r0, #0xa0
    // add r2, sp, #0
    // strb r0, [r2]
    // add r1, #0x90
    // add r0, #0x88
    // add r2, sp, #0
    // add r0, #0x88
    // add r4, #0x90
}




void sub_0202403C(void) {
    // add r6, r0, r3
    // add r4, r6, r0
    // add r0, #0x3c
    // add r3, #0x3d
    // add r1, #0x42
    // add r3, r0, r1
    // add r0, r3, r1
    // add r1, r4, r0
    // add r1, r2, r1
    // tst r0, r2
}




void sub_020240C4(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r2, r7, r1
    // add r0, r2, r0
    // add r4, r5, r0
    // ldr r0, [sp, #4]
    // add r1, r1, r0
    GF_AssertFail(0x0000FFFF, ((*((u32*)(0 + 0x14)) << 0x10) >> 0x10), (r2 + 4));
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    *((u32*)(r4 + 0x14)) = r0;
    // ldr r0, [sp]
}




void sub_02024140(void) {
    // add r6, r0, r3
    // add r4, r6, r0
    // add r0, r1, r0
    // add r3, r0, r1
    // add r0, r3, r1
    // tst r0, r1
    // add r1, r4, r0
    // add r1, r2, r1
    // tst r0, r2
}




void sub_020241CC(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r2, r7, r1
    // add r0, r2, r0
    // add r4, r5, r0
    // and r1, r0
    // ldr r0, [sp, #4]
    // add r1, r1, r0
    GF_AssertFail(0x00001FFF, *((u16*)(0 + 0x1c)), (r2 + 4));
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    *((u16*)(r4 + 0x1c)) = r0;
    // ldr r0, [sp]
}




void sub_02024248(void) {
    // add r0, r0, r4
    // add r1, r0, r4
    // add r0, #0xd0
    // add r4, #0xc4
    // str r1, [r0, r6]
    // add r5, #0xd4
    // str r0, [r5]
}




void sub_02024280(void) {
    // add r1, #0xd4
    // add r1, #0xd0
    // add r1, #0xd4
    // add r0, #0xd4
    // str r1, [r0]
}




void sub_020242AC(void) {
    // add r0, #0xd4
    // add r0, #0xd4
    // add r0, #0xd4
    // str r1, [r0]
    // add r0, #0xd0
    // add r5, #0xd4
    // str r4, [r1, r0]
}




void sub_020242E4(void) {
    // add r2, #0xc0
    // add r2, #0xc0
    // str r3, [r2]
    // add r2, #0xc0
    // add r2, #0xbc
    // str r1, [r2]
    // add r2, #0xbc
    // str r0, [r2]
    // add r0, #0xc0
    // str r1, [r0]
}




void sub_02024308(void) {
    // add r1, #0xbc
    // add r1, #0xc0
    // add r1, #0xbc
    // str r2, [r1]
    // add r0, #0xbc
    // add r1, #0xc0
    // add r0, #0xc0
    // str r1, [r0]
}




void sub_02024328(void) {
    // add r1, #8
    // add r0, r1, r0
    // add r0, r4, r0
    // str r0, [r6]
    // str r0, [r5]
}




void sub_02024374(void) {
}




void sub_02024380(void) {
}




void sub_02024394(void) {
}




void sub_020243A4(void) {
}




void sub_020243C4(void) {
    // str r4, [r1]
    // add r2, r6, r2
    // str r4, [r1]
    // str r5, [r1]
    // str r2, [r1]
}




void sub_020243FC(void) {
    // add r0, #0x9c
    // str r0, [sp]
    // add r0, #0x8c
    // add r1, #0x84
    // add r2, #0x94
    // add r3, #0x98
}




void sub_0202441C(void) {
}




void sub_0202443C(void) {
    // cmp r1, #0
    // beq _02024446
    // cmp r1, #1
    // beq _0202444A
    // b _0202444E
}




void sub_02024454(void) {
    // add r0, r0, r2
}



