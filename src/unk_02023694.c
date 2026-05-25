/* Decompiled from asm/unk_02023694.s */
#include "global.h"

void sub_02023694(void) {
    // strb r2, [r0]
    *((u8*)(r0 + 1)) = 0;
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // add r1, #0xd0
    // str r2, [r1]
    // add r1, #0xd4
    // str r2, [r1]
    // add r1, #0xd8
    // str r2, [r1]
    // add r1, #0xdc
    // str r2, [r1]
    *((u8*)(r0 + 3)) = 0;
}



void sub_020236BC(void) {
    *((u32*)(r0 + 0x28)) = 0;
    *((u32*)(r0 + 0x2c)) = 0;
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
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    *((u32*)(r0 + 0xc)) = (1 << 0xc);
    *((u32*)(r0 + 0x10)) = (1 << 0xc);
    *((u32*)(r0 + 0x14)) = (1 << 0xc);
    *((u32*)(r0 + 0x18)) = 0;
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
    *((u32*)(r0 + 0x20)) = 0;
}



void sub_02023738(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _02023774 ; =_021D2208
    // add r4, r1, #0
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0202374A
    // bl GF_AssertFail
    // mov r1, #0xe0
    // add r0, r4, #0
    // mul r1, r6
    // bl Heap_Alloc
    // ldr r7, _02023774 ; =_021D2208
    // mov r4, #0
    // str r0, [r7]
    // str r6, [r7, #4]
    // cmp r6, #0
    // ble _02023772
    // add r5, r4, #0
    // ldr r0, [r7]
    // add r0, r0, r5
    // bl sub_02023694
    // add r4, r4, #1
    // add r5, #0xe0
    // cmp r4, r6
    // blt _02023762
    // pop {r3, r4, r5, r6, r7, pc}
    // _02023774: .word _021D2208
    // TODO: decompile
}



void sub_02023778(void) {
    // push {r4, r5, r6, lr}
    // ldr r6, _020237AC ; =_021D2208
    // mov r4, #0
    // ldr r0, [r6, #4]
    // cmp r0, #0
    // ble _02023798
    // add r5, r4, #0
    // ldr r0, [r6]
    // add r0, r0, r5
    // bl sub_02023874
    // ldr r0, [r6, #4]
    // add r4, r4, #1
    // add r5, #0xe0
    // cmp r4, r0
    // blt _02023786
    // ldr r0, _020237AC ; =_021D2208
    // ldr r0, [r0]
    // bl Heap_Free
    // ldr r0, _020237AC ; =_021D2208
    // mov r1, #0
    // str r1, [r0]
    // str r1, [r0, #4]
    // pop {r4, r5, r6, pc}
    // nop
    // _020237AC: .word _021D2208
    // TODO: decompile
}



void sub_020237B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r6, _020237E8 ; =_021D2208
    // mov r4, #0
    // ldr r0, [r6, #4]
    // cmp r0, #0
    // ble _020237E4
    // add r5, r4, #0
    // mov r7, #2
    // ldr r0, [r6]
    // add r0, r0, r5
    // ldrb r1, [r0, #1]
    // cmp r1, #1
    // bne _020237CE
    // bl sub_02023950
    // ldr r0, [r6]
    // add r1, r0, r5
    // ldrb r0, [r1, #3]
    // cmp r0, #1
    // bne _020237DA
    // strb r7, [r1, #3]
    // ldr r0, [r6, #4]
    // add r4, r4, #1
    // add r5, #0xe0
    // cmp r4, r0
    // blt _020237C0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _020237E8: .word _021D2208
    // TODO: decompile
}



void sub_020237EC(void) {
    sub_0202391C();
    GF_AssertFail();
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = 1;
    // mul r1, r2
    Heap_Alloc(*((u32*)(r5 + 4)), 0xc4, *((u32*)r5));
    *((u32*)(r4 + 4)) = r0;
    *((u32*)(r4 + 8)) = *((u32*)r5);
    // add r0, #0xc
    sub_020236BC(r4);
    // add r1, #0xc
    // add r0, #0xc8
    // str r1, [r0]
    // add r0, #0xcc
    // str r1, [r0]
    Heap_Alloc(*((u32*)(r5 + 4)), (*((u32*)r5) << 2));
    // add r1, #0xd0
    // str r0, [r1]
    sub_02024248(r4, r4);
    Heap_Alloc(*((u32*)(r5 + 4)), 0x10);
    // add r1, #0xd8
    // str r0, [r1]
    // add r0, #0xd8
    HeapExp_FndInitAllocator(*((u32*)r4), *((u32*)(r5 + 4)), 4);
    sub_0202068C(*((u32*)r5), *((u32*)(r5 + 4)));
    // add r1, #0xdc
    // str r0, [r1]
}



void sub_02023874(void) {
    GF_AssertFail();
    // ldrb r1, [r4]
    sub_020238BC(0);
    Heap_Free(*((u32*)(r4 + 4)));
    // add r0, #0xd0
    Heap_Free(*((u32*)r4));
    // add r0, #0xd8
    Heap_Free(*((u32*)r4));
    // add r0, #0xdc
    sub_020206C8(*((u32*)r4));
    sub_02023694(r4);
}



void sub_020238BC(void) {
    GF_AssertFail();
    // ldrb r1, [r0]
    // add r1, #0xc8
    // add r4, #0xc
    // add r0, #0xbc
    sub_02023DA4(*((u32*)0), *((u32*)0));
}



void sub_020238F8(void) {
}



void sub_02023910(void) {
    *((u8*)(r0 + 3)) = 0;
}



void sub_0202391C(void) {
    // push {r3, r4}
    // ldr r0, _0202394C ; =_021D2208
    // mov r1, #0
    // ldr r3, [r0, #4]
    // cmp r3, #0
    // ble _02023944
    // ldr r4, [r0]
    // add r2, r4, #0
    // ldrb r0, [r2]
    // cmp r0, #0
    // bne _0202393C
    // mov r0, #0xe0
    // mul r0, r1
    // add r0, r4, r0
    // pop {r3, r4}
    // bx lr
    // add r1, r1, #1
    // add r2, #0xe0
    // cmp r1, r3
    // blt _0202392C
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // nop
    // _0202394C: .word _021D2208
    // TODO: decompile
}



void sub_02023950(void) {
    GF_AssertFail();
    // add r0, sp, #0
    MTX_Identity33_();
    // add r0, #0xc8
    // add r5, #0xc
    // add r6, sp, #0
    // add r0, #0x24
    // ldrb r0, [r0]
    // blx r2
    sub_020243FC(*((u32*)r5), *((u32*)(*((u32*)r5) + 0x1c)), *((u32*)(*((u32*)r5) + 0x20)));
    // add r0, #0xb4
    // ldrb r0, [r0]
    sub_02023FEC(r4);
    sub_02023FC0(r4);
    // add r0, #0x30
    // add r3, #0xc
    GF3dRender_DrawModel(r4, r4, r6, r4);
    sub_0202441C(r4);
    // add r4, #0xbc
}



void sub_020239D0(void) {
    sub_02023C04(*((u32*)(r0 + 0x28)), r0);
    sub_02023C20(r5, r4);
    sub_02023C9C(r6, r5, r4);
    // add r0, #0xb4
    // ldrb r0, [r0]
    // add r6, #0xc
    sub_020242E4(r6, r5);
    // add r0, #0xb4
    // strb r1, [r0]
    *((u32*)(r5 + 0x2c)) = *((u32*)(r4 + 8));
    // add r0, #0xb6
    // strh r1, [r0]
    // add r5, #0xb8
    // str r1, [r5]
}



void sub_02023A20(void) {
    sub_02023C04(*((u32*)(r0 + 0x28)), r0);
    // add r0, #0xb4
    // ldrb r0, [r0]
    // add r0, #0x94
    // add r1, #0x98
    // add r2, #0x9c
    sub_02023B70(r5, r5, r5);
    // add r0, #0x94
    // str r1, [r0]
    // add r0, #0x98
    // str r1, [r0]
    // add r0, #0x9c
    // str r1, [r0]
    sub_02023CF0(r5, r4);
    sub_02023D24(r5, r4);
    // add r0, #0xb4
    // ldrb r0, [r0]
    // add r6, #0xc
    sub_020242E4(r6, r5);
    // add r0, #0xb4
    // strb r1, [r0]
    *((u32*)(r5 + 0x2c)) = *((u32*)(r4 + 8));
    // add r0, #0xb6
    // strh r1, [r0]
    // add r5, #0xb8
    // str r1, [r5]
}



void sub_02023AA0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl NNS_G3dTexGetRequiredSize
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl NNS_G3dTex4x4GetRequiredSize
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl NNS_G3dPlttGetRequiredSize
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // beq _02023ADE
    // ldr r3, _02023B30 ; =NNS_GfdDefaultFuncAllocTexVram
    // mov r1, #0
    // ldr r3, [r3]
    // add r2, r1, #0
    // blx r3
    // str r0, [r4]
    // cmp r0, #0
    // bne _02023AE2
    // bl GF_AssertFail
    // b _02023AE2
    // mov r0, #0
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // beq _02023AFE
    // ldr r3, _02023B30 ; =NNS_GfdDefaultFuncAllocTexVram
    // mov r1, #1
    // ldr r3, [r3]
    // mov r2, #0
    // blx r3
    // str r0, [r6]
    // cmp r0, #0
    // bne _02023B02
    // bl GF_AssertFail
    // b _02023B02
    // mov r0, #0
    // str r0, [r6]
    // ldr r0, [sp]
    // cmp r0, #0
    // beq _02023B26
    // ldr r3, _02023B34 ; =NNS_GfdDefaultFuncAllocPlttVram
    // mov r1, #2
    // ldrh r2, [r5, #0x20]
    // lsl r1, r1, #0xe
    // ldr r3, [r3]
    // and r1, r2
    // mov r2, #0
    // blx r3
    // str r0, [r7]
    // cmp r0, #0
    // bne _02023B2A
    // bl GF_AssertFail
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [r7]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02023B30: .word NNS_GfdDefaultFuncAllocTexVram
    // _02023B34: .word NNS_GfdDefaultFuncAllocPlttVram
    // TODO: decompile
}



void sub_02023B38(void) {
}



void sub_02023B4C(void) {
    NNS_G3dTexSetTexKey(*((u32*)r2), *((u32*)r3));
    // ldr r1, [sp, #0x10]
    NNS_G3dPlttSetPlttKey(r5, *((u32*)r1));
    NNS_G3dBindMdlSet(r4, r5);
}



void sub_02023B70(void) {
    // push {r3, r4, r5, lr}
    // ldr r0, [r0]
    // add r5, r1, #0
    // add r4, r2, #0
    // cmp r0, #0
    // beq _02023B82
    // ldr r1, _02023B9C ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r1, [r1]
    // blx r1
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _02023B8E
    // ldr r1, _02023B9C ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r1, [r1]
    // blx r1
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _02023B9A
    // ldr r1, _02023BA0 ; =NNS_GfdDefaultFuncFreePlttVram
    // ldr r1, [r1]
    // blx r1
    // pop {r3, r4, r5, pc}
    // _02023B9C: .word NNS_GfdDefaultFuncFreeTexVram
    // _02023BA0: .word NNS_GfdDefaultFuncFreePlttVram
    // TODO: decompile
}



void sub_02023BA4(void) {
    NNS_G3dTexGetRequiredSize(0);
    // str r0, [sp]
    NNS_G3dTex4x4GetRequiredSize(r4);
    // str r0, [sp, #4]
    NNS_G3dPlttGetRequiredSize(r4);
    NNS_G3dTexGetRequiredSize(r5);
    NNS_G3dTex4x4GetRequiredSize(r5);
    NNS_G3dPlttGetRequiredSize(r5);
    // ldr r1, [sp]
    // ldr r1, [sp, #4]
}



void sub_02023C04(void) {
}



void sub_02023C20(void) {
    // add r0, #0x8c
    // add r1, #0x88
    // add r2, #0x8c
    sub_02024328(r1, r0, r0);
    // add r1, #0x84
    // str r0, [r1]
    // add r1, #0x88
    // add r0, #0x30
    NNS_G3dRenderObjInit(r5, *((u32*)r5));
    // add r0, #0xb4
    // ldrb r0, [r0]
    // add r1, #0x8c
    sub_02023BA4(r4, *((u32*)r5));
    // add r0, #0xb4
    // ldrb r0, [r0]
    // add r0, #0x94
    // add r1, #0x98
    // add r2, #0x9c
    sub_02023B70(r5, r5, r5);
    // add r0, #0x8c
    // add r5, #0x9c
    // add r1, #0x94
    // add r2, #0x98
    sub_02023AA0(*((u32*)r5), r5, r5, r5);
}



void sub_02023C9C(void) {
    sub_02024374(r2);
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
    sub_020206E0(*((u32*)r6), r5, *((u32*)r5), *((u32*)r5));
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
    sub_02024280(*((u32*)r0));
    *((u32*)(r0 + 0x28)) = r6;
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
    sub_02024380(r0, *((u32*)(r5 + 4)), r0, r5);
}



void sub_02023DA4(void) {
    GF_AssertFail();
    // add r0, #0xb4
    // ldrb r0, [r0]
    GF_AssertFail(r5);
    // add r0, #0xb4
    // ldrb r0, [r0]
    sub_02024308(r5);
    // add r0, #0xb4
    // ldrb r0, [r0]
    // add r0, #0x94
    // add r1, #0x98
    // add r2, #0x9c
    sub_02023B70(r5, r5, r5);
    sub_02023C04(r4, r5);
    sub_020242AC(r4, r5);
    *((u8*)(r4 + 3)) = 1;
}



void sub_02023E04(void) {
    // str r1, [r4]
    *((u32*)(r0 + 4)) = r2;
    *((u32*)(r0 + 8)) = r3;
    // ldr r3, [sp, #8]
    // add r2, #0xc
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0xc]
    *((u32*)(r0 + 0x1c)) = r0;
    // ldr r0, [sp, #0x10]
    *((u32*)(r0 + 0x20)) = r0;
    // ldr r0, [sp, #0x14]
    *((u32*)(r0 + 0x24)) = r0;
}



void sub_02023E2C(void) {
    // str r1, [r4]
    *((u32*)(r0 + 4)) = r2;
    *((u32*)(r0 + 8)) = r3;
    // ldr r3, [sp, #8]
    // add r2, #0xc
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    *((u32*)(r0 + 0x1c)) = 0;
    *((u32*)(r0 + 0x20)) = 0;
    *((u32*)(r0 + 0x24)) = 0;
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
    GF_AssertFail();
    sub_02024380(r5, r4);
}



void sub_02023EE0(void) {
}



void sub_02023EF4(void) {
}



void sub_02023F04(void) {
    GF_AssertFail();
    sub_020243A4(r5, r4);
}



void sub_02023F1C(void) {
}



void sub_02023F30(void) {
}



void sub_02023F40(void) {
    GF_AssertFail();
    // add r1, #0xb6
    // ldrh r1, [r1]
    sub_02024394(r5, r5);
    // add r1, #0xb8
    // str r0, [r1]
    // add r0, #0xb8
    // add r5, #0xb8
    // add r0, r0, r4
    // str r0, [r5]
}



void sub_02023F70(void) {
    GF_AssertFail();
    // add r1, #0xb6
    // ldrh r1, [r1]
    sub_02024394(r4, r4);
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
    sub_02026DE0(((*((u32*)r0) << 4) >> 0x10));
    // add r2, sp, #0
    // strb r0, [r2]
    *((u8*)(r2 + 1)) = (r0 >> 8);
    // ldrb r0, [r2]
    // add r1, #0x90
    *((u8*)(r2 + 2)) = (r0 >> 8);
    *((u8*)(r2 + 3)) = *((u8*)(r2 + 1));
    // add r0, #0x88
    sub_0202403C(*((u32*)r4), *((u32*)r4), *((u8*)(r2 + 2)));
    // add r2, sp, #0
    // add r0, #0x88
    // add r4, #0x90
    sub_02024140(*((u32*)r4), *((u32*)r4), *((u8*)(r2 + 3)));
}



void sub_0202403C(void) {
    // add r6, r0, r3
    // ldrh r0, [r6]
    // add r4, r6, r0
    // add r0, #0x3c
    // add r3, #0x3d
    // ldrb r3, [r3]
    // add r1, #0x42
    // ldrh r1, [r1]
    // add r3, r0, r1
    // ldrh r0, [r0, r1]
    // mul r1, r2
    // add r0, r3, r1
    // add r1, r4, r0
    // ldrh r0, [r4, r0]
    // mul r1, r5
    // add r1, r2, r1
    // tst r0, r2
    sub_020240C4(0, 0, ((*((u32*)0) << 0x10) >> 0x10), (r1 + 4));
}



void sub_020240C4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, r1, #0
    // ldrh r0, [r0]
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp, #8]
    // add r0, r1, #0
    // ldrb r0, [r0, #2]
    // mov r6, #0
    // cmp r0, #0
    // ble _02024136
    // add r7, r5, #4
    // ldr r0, [sp, #8]
    // cmp r5, #0
    // ldrb r0, [r0, r6]
    // beq _0202410E
    // cmp r7, #0
    // beq _02024102
    // ldrb r1, [r5, #5]
    // cmp r0, r1
    // bhs _02024102
    // ldrh r1, [r5, #0xa]
    // add r2, r7, r1
    // ldrh r1, [r7, r1]
    // add r2, r2, #4
    // mul r0, r1
    // add r0, r2, r0
    // b _02024104
    // mov r0, #0
    // cmp r0, #0
    // beq _0202410E
    // ldr r0, [r0]
    // add r4, r5, r0
    // b _02024110
    // mov r4, #0
    // ldr r0, [r4, #0x14]
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // ldr r0, [sp, #4]
    // add r1, r1, r0
    // ldr r0, _0202413C ; =0x0000FFFF
    // cmp r1, r0
    // bls _02024124
    // bl GF_AssertFail
    // ldr r1, [r4, #0x14]
    // ldr r0, [sp, #4]
    // add r6, r6, #1
    // add r0, r1, r0
    // str r0, [r4, #0x14]
    // ldr r0, [sp]
    // ldrb r0, [r0, #2]
    // cmp r6, r0
    // blt _020240E2
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0202413C: .word 0x0000FFFF
    // TODO: decompile
}



void sub_02024140(void) {
    // add r6, r0, r3
    // add r4, r6, r0
    // add r0, r1, r0
    // add r3, r0, r1
    // ldrh r0, [r0, r1]
    // mul r1, r2
    // add r0, r3, r1
    // ldrh r7, [r0]
    // tst r0, r1
    // add r1, r4, r0
    // ldrh r0, [r4, r0]
    // mul r1, r5
    // add r1, r2, r1
    // tst r0, r2
    sub_020241CC(0, 0, (r7 >> 1), (*((u32*)(r0 + 8)) + 4));
}



void sub_020241CC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, r1, #0
    // ldrh r0, [r0]
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp, #8]
    // add r0, r1, #0
    // ldrb r0, [r0, #2]
    // mov r6, #0
    // cmp r0, #0
    // bls _0202423E
    // add r7, r5, #4
    // ldr r0, [sp, #8]
    // cmp r5, #0
    // ldrb r0, [r0, r6]
    // beq _02024216
    // cmp r7, #0
    // beq _0202420A
    // ldrb r1, [r5, #5]
    // cmp r0, r1
    // bhs _0202420A
    // ldrh r1, [r5, #0xa]
    // add r2, r7, r1
    // ldrh r1, [r7, r1]
    // add r2, r2, #4
    // mul r0, r1
    // add r0, r2, r0
    // b _0202420C
    // mov r0, #0
    // cmp r0, #0
    // beq _02024216
    // ldr r0, [r0]
    // add r4, r5, r0
    // b _02024218
    // mov r4, #0
    // ldrh r1, [r4, #0x1c]
    // ldr r0, _02024244 ; =0x00001FFF
    // and r1, r0
    // ldr r0, [sp, #4]
    // add r1, r1, r0
    // ldr r0, _02024244 ; =0x00001FFF
    // cmp r1, r0
    // bls _0202422C
    // bl GF_AssertFail
    // ldrh r1, [r4, #0x1c]
    // ldr r0, [sp, #4]
    // add r6, r6, #1
    // add r0, r1, r0
    // strh r0, [r4, #0x1c]
    // ldr r0, [sp]
    // ldrb r0, [r0, #2]
    // cmp r6, r0
    // blo _020241EA
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02024244: .word 0x00001FFF
    // TODO: decompile
}



void sub_02024248(void) {
    // add r0, r0, r4
    sub_020236BC(*((u32*)(r0 + 4)));
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
    // ldr r2, [r2, r1]
    // add r1, #0xd4
    // add r0, #0xd4
    // str r1, [r0]
}



void sub_020242AC(void) {
    // add r0, #0xd4
    sub_020236BC(r1);
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
    sub_0202443C(0);
    NNS_G3dGetMdlSet();
    // add r1, #8
    // add r0, r1, r0
    // add r0, r4, r0
    // str r0, [r6]
    NNS_G3dGetTex(r7, r0);
    // str r0, [r5]
}



void sub_02024374(void) {
}



void sub_02024380(void) {
    sub_020239D0(*((u32*)(r1 + 0x1c)));
    sub_02023A20();
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
    sub_02023B4C(*((u32*)r0), *((u32*)r0), r0, r0);
}



void sub_0202441C(void) {
}



void sub_0202443C(void) {
    // cmp r1, #0
    // beq _02024446
    // cmp r1, #1
    // beq _0202444A
    // b _0202444E
    // ldr r0, [r0]
    // bx lr
    // ldr r0, [r0, #4]
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void sub_02024454(void) {
    // mul r2, r1
    // add r0, r0, r2
}


