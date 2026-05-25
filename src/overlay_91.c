/* Decompiled from asm/overlay_91.s */
#include "global.h"

void ov91_0225C540(void) {
    OverlayManager_GetArgs();
    Heap_Create(3, 0x6a, (3 << 0x11));
    OverlayManager_CreateAndGetData(r4, 0x88, 0x6a);
    memset(0, 0x88);
    // str r5, [sp]
    // add r1, #0x39
    // add r5, #0x38
    // ldrb r1, [r1]
    // ldrb r3, [r5]
    // add r0, #8
    ov90_02258800(r4, r5, *((u32*)(r5 + 0x34)));
    ov91_0225CBE4(r4, 0x6a);
}



void ov91_0225C58C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x28
    // add r6, r0, #0
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r0, r6, #0
    // bl OverlayManager_GetArgs
    // add r6, r0, #0
    // add r0, r4, #0
    // add r0, #8
    // bl ov90_02258B54
    // cmp r0, #1
    // bne _0225C60A
    // ldr r0, [r4, #0x78]
    // cmp r0, #0
    // beq _0225C5BE
    // cmp r0, #1
    // beq _0225C5D8
    // cmp r0, #2
    // beq _0225C5EC
    // b _0225C5FA
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _0225C5CA
    // bl sub_0200FB70
    // mov r0, #0
    // bl sub_0200FC20
    // ldr r0, [r4, #0x78]
    // add r0, r0, #1
    // str r0, [r4, #0x78]
    // b _0225C604
    // add r0, r4, #0
    // add r0, #8
    // bl ov90_02258B98
    // cmp r0, #1
    // bne _0225C604
    // ldr r0, [r4, #0x78]
    // add r0, r0, #1
    // str r0, [r4, #0x78]
    // b _0225C604
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov91_0225CC4C
    // add sp, #0x28
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // bl GF_AssertFail
    // add sp, #0x28
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add sp, #0x28
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, [r5]
    // cmp r0, #0xf
    // bhi _0225C67E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225C61C: ; jump table
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #0x6a
    // bl ov90_02258914
    // str r0, [r4]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // ldr r0, [r4]
    // bl ov90_022589BC
    // cmp r0, #1
    // bne _0225C67E
    // ldr r0, [r4]
    // bl ov90_022589CC
    // str r0, [r4, #0x70]
    // ldr r0, [r4]
    // bl ov90_02258938
    // mov r0, #0
    // str r0, [r4]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // ldr r0, _0225C940 ; =gSystem
    // ldr r1, [r0, #0x44]
    // mov r0, #1
    // tst r0, r1
    // beq _0225C680
    // b _0225C9E6
    // ldr r0, _0225C944 ; =ov91_0225CB58
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // mov r2, #0
    // str r2, [r4, #0x38]
    // str r2, [r4, #0x3c]
    // add r0, r4, #0
    // add r1, r4, #0
    // str r2, [r4, #0x40]
    // add r0, #0x84
    // strb r2, [r0]
    // add r1, #0x84
    // strb r2, [r1, #1]
    // strb r2, [r1, #2]
    // strb r2, [r1, #3]
    // mov r0, #0x20
    // mov r1, #0x6a
    // bl GF_CreateVramTransferManager
    // add r0, r4, #0
    // bl ov91_02261B2C
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x80
    // str r1, [r0]
    // bl sub_020347A0
    // str r0, [r4, #0x74]
    // cmp r0, #1
    // bhi _0225C6C8
    // bl GF_AssertFail
    // bl sub_0203769C
    // add r1, r4, #0
    // add r1, #0x44
    // strh r0, [r1]
    // add r1, r4, #0
    // add r1, #0x44
    // add r0, r4, #0
    // ldrh r1, [r1]
    // add r0, #8
    // bl ov90_0225886C
    // add r1, r4, #0
    // add r1, #0x46
    // strh r0, [r1]
    // add r0, r4, #0
    // add r0, #0x44
    // ldrh r0, [r0]
    // cmp r0, #0
    // bne _0225C706
    // mov r1, #0x4b
    // add r3, r4, #0
    // ldr r2, [r4, #0x74]
    // mov r0, #0x6a
    // lsl r1, r1, #4
    // add r3, #0x48
    // bl ov91_0225CCC4
    // str r0, [r4, #0x30]
    // mov r0, #1
    // str r0, [r4, #0x7c]
    // add r0, r4, #0
    // add r0, #0x48
    // str r0, [sp]
    // add r3, r4, #0
    // add r3, #0x46
    // mov r1, #0x4b
    // ldrh r3, [r3]
    // ldr r2, [r4, #0x74]
    // mov r0, #0x6a
    // lsl r1, r1, #4
    // bl ov91_0225CDF4
    // str r0, [r4, #0x34]
    // bl sub_0203A880
    // add r6, #0x38
    // ldrb r0, [r6]
    // cmp r0, #0
    // beq _0225C732
    // mov r0, #0x6a
    // bl ov00_021E69A8
    // ldr r0, [r4, #0x70]
    // cmp r0, #0
    // beq _0225C742
    // cmp r0, #1
    // beq _0225C74C
    // cmp r0, #2
    // beq _0225C758
    // b _0225C764
    // mov r1, #0
    // add r0, sp, #0xc
    // strb r1, [r0, #8]
    // strb r1, [r0, #9]
    // b _0225C768
    // mov r1, #0
    // add r0, sp, #0xc
    // strb r1, [r0, #8]
    // mov r1, #1
    // strb r1, [r0, #9]
    // b _0225C768
    // mov r1, #1
    // add r0, sp, #0xc
    // strb r1, [r0, #8]
    // mov r1, #0
    // strb r1, [r0, #9]
    // b _0225C768
    // bl GF_AssertFail
    // ldr r0, [r4, #0x34]
    // add r1, sp, #0x14
    // bl ov91_0225D3C4
    // mov r0, #1
    // bl sub_02037AC0
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // mov r0, #1
    // bl sub_02037B38
    // cmp r0, #0
    // beq _0225C7CE
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x6a
    // mov r1, #0x1b
    // str r0, [sp, #8]
    // ldr r3, _0225C948 ; =0x0000FFFF
    // mov r0, #0
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ov91_0225CEB4
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0225C7CE
    // add r4, #0x44
    // ldrh r0, [r4]
    // cmp r0, #0
    // bne _0225C7D8
    // mov r1, #0
    // mov r0, #0x16
    // add r2, r1, #0
    // bl sub_02037030
    // cmp r0, #0
    // bne _0225C7D0
    // b _0225C9E6
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ov91_0225CEB4
    // ldr r0, [r4, #0x38]
    // cmp r0, #0
    // beq _0225C8DC
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ov91_0225CEB4
    // cmp r0, #0
    // bne _0225C8DC
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // ldr r0, [r4, #0x3c]
    // cmp r0, #0
    // beq _0225C82E
    // ldr r0, [r4, #0x34]
    // bl ov91_0225D37C
    // str r0, [sp, #0x10]
    // mov r0, #0x19
    // add r1, sp, #0x10
    // mov r2, #4
    // bl sub_02037030
    // cmp r0, #0
    // beq _0225C8DC
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // add r0, r4, #0
    // add r0, #0x44
    // ldrh r0, [r0]
    // cmp r0, #0
    // bne _0225C878
    // ldr r0, [r4, #0x30]
    // bl ov91_0225CCF4
    // add r5, r0, #0
    // ldr r0, [r4, #0x30]
    // bl ov91_0225CD5C
    // cmp r0, #0
    // beq _0225C868
    // ldr r0, [r4, #0x30]
    // bl ov91_0225CD6C
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #0x1b
    // add r2, sp, #0xc
    // mov r3, #4
    // bl ov91_0225CCA8
    // cmp r0, #1
    // bne _0225C868
    // ldr r0, [r4, #0x30]
    // bl ov91_0225CD64
    // cmp r5, #0
    // bne _0225C878
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0x17
    // add r3, r2, #0
    // bl ov91_0225CCA8
    // ldr r0, [r4, #0x34]
    // bl ov91_0225D1DC
    // add r0, r4, #0
    // bl ov91_0225CB64
    // add r0, r4, #0
    // bl ov91_0225CB98
    // b _0225C9E6
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ov91_0225D078
    // add r0, r4, #0
    // add r0, #0x44
    // ldrh r0, [r0]
    // cmp r0, #0
    // bne _0225C8C6
    // ldr r0, [r4, #0x30]
    // bl ov91_0225CDAC
    // cmp r0, #1
    // bne _0225C8DC
    // ldr r0, [r4, #0x30]
    // add r1, sp, #0x18
    // bl ov91_0225CDC4
    // mov r0, #0x1a
    // add r1, sp, #0x18
    // mov r2, #0x10
    // bl sub_02037030
    // cmp r0, #0
    // beq _0225C8DC
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ov91_0225D078
    // ldr r0, [r4, #0x40]
    // cmp r0, #1
    // beq _0225C8DE
    // b _0225C9E6
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ov91_0225D078
    // cmp r0, #0
    // bne _0225C9E6
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x6a
    // mov r1, #0x1a
    // str r0, [sp, #8]
    // ldr r3, _0225C948 ; =0x0000FFFF
    // mov r0, #0
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ov91_0225D078
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ov91_0225D078
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0225C9E6
    // mov r0, #3
    // bl sub_02037AC0
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // _0225C940: .word gSystem
    // _0225C944: .word ov91_0225CB58
    // _0225C948: .word 0x0000FFFF
    // mov r0, #3
    // bl sub_02037B38
    // cmp r0, #0
    // bne _0225C95C
    // add sp, #0x28
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r6, #0x38
    // ldrb r0, [r6]
    // cmp r0, #0
    // beq _0225C968
    // bl ov00_021E6A4C
    // add r0, r4, #0
    // add r0, #0x44
    // ldrh r0, [r0]
    // cmp r0, #0
    // bne _0225C97C
    // ldr r0, [r4, #0x30]
    // bl ov91_0225CCEC
    // mov r0, #0
    // str r0, [r4, #0x30]
    // ldr r0, [r4, #0x34]
    // bl ov91_0225CE80
    // mov r0, #0
    // str r0, [r4, #0x34]
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl GF_DestroyVramTransferManager
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // ldrb r1, [r4, #0x10]
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov90_02258AA8
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #8
    // add r1, #0x18
    // mov r2, #0x6a
    // bl ov90_022589E0
    // str r0, [r4, #4]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225C9E6
    // ldr r0, [r4, #4]
    // bl ov90_02258AA0
    // cmp r0, #1
    // bne _0225C9E6
    // ldr r0, [r4, #4]
    // bl ov90_02258AA4
    // add r6, r0, #0
    // ldr r0, [r4, #4]
    // bl ov90_02258A04
    // mov r0, #0
    // str r0, [r4, #4]
    // cmp r6, #0
    // bne _0225C9E4
    // add sp, #0x28
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // str r0, [r5]
    // mov r0, #0
    // add sp, #0x28
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void ov91_0225C9EC(void) {
    OverlayManager_GetData();
    OverlayManager_GetArgs(r5);
    // add r0, #8
    ov90_02258B54(r6);
    ov91_0225CC38(r6);
    OverlayManager_FreeData(r5);
    Heap_Destroy(0x6a);
    sub_020398D4(0, 1);
    sub_02037AC0(4);
    // str r0, [r4]
    sub_02037B38(4);
    sub_02037454();
    sub_020347A0();
}



void ov91_0225CA64(void) {
}



void ov91_0225CA6C(void) {
}



void ov91_0225CA74(void) {
}



void ov91_0225CA90(void) {
}



void ov91_0225CA9C(void) {
    // add r0, #8
    ov90_0225886C(r2);
    ov91_0225CD84(*((u32*)(r5 + 0x30)), r4, r0);
}



void ov91_0225CABC(void) {
    ov91_0225D368(*((u32*)(r0 + 0x34)));
    *((u32*)(r5 + 0x40)) = 1;
    *((u32*)(r5 + 0x18)) = *((u32*)r4);
}



void ov91_0225CAE0(void) {
}



void ov91_0225CAEC(void) {
    // add r0, #8
    ov90_0225886C(r2);
    ov91_0225D3B4(*((u32*)(r5 + 0x34)), r6, r0);
    // add r1, #0x84
    // ldrb r0, [r1, r4]
    // strb r0, [r1, r4]
    // add r0, #0x44
    // ldrh r0, [r0]
    // add r4, r5, r0
    // add r4, #0x84
    // ldrb r4, [r4]
    *((u32*)(r5 + 0x7c)) = (*((u32*)(r5 + 0x7c)) + 1);
    sub_02037030(0x1d, 0, 0, *((u32*)(r5 + 0x74)));
}



void ov91_0225CB50(void) {
    // add r0, #0x80
    // str r1, [r0]
}



void ov91_0225CB58(void) {
}



void ov91_0225CB64(void) {
    // add r1, sp, #0
    ov91_0225D32C(*((u32*)(r0 + 0x34)));
    // add r4, sp, #0
    ov91_0225CCA8(r5, 0x18, r4, 0x14);
    ov91_0225D32C(*((u32*)(r5 + 0x34)), r4);
}



void ov91_0225CB98(void) {
    ov91_0225D2E8(*((u32*)(r0 + 0x34)));
    _s32_div_f(0x1e);
    // add r0, #0x80
    ov91_0225D37C(*((u32*)(r4 + 0x34)));
    // str r0, [sp]
    // add r2, sp, #0
    ov91_0225CCA8(r4, 0x1c, 4);
    GF_AssertFail();
    // add r4, #0x80
    // str r0, [r4]
}



void ov91_0225CBE4(void) {
    // str r1, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    GfGfxLoader_LoadFromNarc_GetSizeOut(0xd4, 0, 0, r1);
    *((u32*)(r7 + 0x4c)) = r0;
    // ldr r0, [sp, #8]
    _u32_div_f(0x18);
    *((u32*)(r7 + 0x48)) = r0;
    // add r6, #8
    ov90_022588CC(r7, 0);
    *((u32*)(r5 + 0x50)) = r0;
    ov90_022588A4(r6, r4);
    *((u32*)(r5 + 0x60)) = r0;
}



void ov91_0225CC38(void) {
}



void ov91_0225CC4C(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    ov90_02258938(*((u32*)r5));
    // str r0, [r5]
    // add r0, #0x44
    // ldrh r0, [r0]
    ov91_0225CCEC(*((u32*)(r5 + 0x30)));
    ov91_0225CE80(*((u32*)(r5 + 0x34)));
    GF_DestroyVramTransferManager();
    // add r4, #0x38
    // ldrb r0, [r4]
    ov00_021E6A4C();
    ov90_02258A04(*((u32*)(r5 + 4)));
    *((u32*)(r5 + 4)) = 0;
}



void ov91_0225CCA8(void) {
}



void ov91_0225CCC4(void) {
}



void ov91_0225CCEC(void) {
}



void ov91_0225CCF4(void) {
    // str r1, [r0]
    // add r1, #0x36
    // ldrb r4, [r1]
    // mul r5, r4
    // add r6, r6, r5
    // add r6, #0x18
    // add r2, #0x36
    // strb r1, [r2]
    // add r0, #0x37
    // strb r1, [r0]
}



void ov91_0225CD5C(void) {
    // add r0, #0x37
    // ldrb r0, [r0]
}



void ov91_0225CD64(void) {
    // add r0, #0x37
    // strb r1, [r0]
}



void ov91_0225CD6C(void) {
    // add r0, #0x36
    // ldrb r0, [r0]
}



void ov91_0225CD74(void) {
    *((u16*)(r0 + 0x34)) = (*((u16*)(r0 + 0x34)) + 1);
}



void ov91_0225CD84(void) {
    // push {r3, r4}
    // ldr r3, _0225CDA8 ; =0x0001869F
    // cmp r1, r3
    // bls _0225CD8E
    // add r1, r3, #0
    // mov r3, #1
    // lsl r3, r2
    // ldr r4, [r0, #0x1c]
    // tst r4, r3
    // bne _0225CDA4
    // lsl r2, r2, #2
    // add r2, r0, r2
    // str r1, [r2, #0xc]
    // ldr r1, [r0, #0x1c]
    // orr r1, r3
    // str r1, [r0, #0x1c]
    // pop {r3, r4}
    // bx lr
    // _0225CDA8: .word 0x0001869F
    // TODO: decompile
}



void ov91_0225CDAC(void) {
}



void ov91_0225CDC4(void) {
    // add r2, #0xc
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
}



void ov91_0225CDD4(void) {
    // lsl r1, r2
    // tst r1, r4
}



void ov91_0225CDF4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // ldr r1, _0225CE64 ; =0x000087E8
    // add r5, r0, #0
    // add r7, r2, #0
    // str r3, [sp]
    // bl Heap_Alloc
    // ldr r2, _0225CE64 ; =0x000087E8
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // mov r0, #1
    // str r0, [r4, #4]
    // mov r0, #0
    // str r0, [r4, #8]
    // str r6, [r4, #0xc]
    // ldr r0, [sp]
    // str r7, [r4, #0x10]
    // str r0, [r4, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r0, _0225CE68 ; =0x0000877C
    // str r1, [r4, r0]
    // ldr r1, _0225CE6C ; =0x000019CC
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov91_0225DC3C
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov91_0225F508
    // ldr r0, _0225CE70 ; =0x0000878C
    // ldr r1, _0225CE74 ; =0x00001AB4
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r5, #0
    // bl ov91_0225F0C0
    // ldr r0, _0225CE78 ; =0x000087CC
    // add r0, r4, r0
    // bl ov91_0225F388
    // ldr r0, _0225CE7C ; =ov91_022627C0
    // mov r1, #8
    // mov r2, #4
    // bl sub_020210D8
    // cmp r0, #1
    // beq _0225CE5E
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225CE64: .word 0x000087E8
    // _0225CE68: .word 0x0000877C
    // _0225CE6C: .word 0x000019CC
    // _0225CE70: .word 0x0000878C
    // _0225CE74: .word 0x00001AB4
    // _0225CE78: .word 0x000087CC
    // _0225CE7C: .word ov91_022627C0
    // TODO: decompile
}



void ov91_0225CE80(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02021238
    // cmp r0, #1
    // beq _0225CE90
    // bl GF_AssertFail
    // ldr r0, _0225CEAC ; =0x0000878C
    // ldr r1, _0225CEB0 ; =0x00001AB4
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_0225F1E8
    // add r0, r4, #0
    // bl ov91_0225F66C
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // nop
    // _0225CEAC: .word 0x0000878C
    // _0225CEB0: .word 0x00001AB4
    // TODO: decompile
}



void ov91_0225CEB4(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // ldr r0, _0225D054 ; =0x00001F38
    // add r6, r1, #0
    // ldr r0, [r4, r0]
    // mov r5, #1
    // cmp r0, #4
    // blo _0225CEE6
    // ldr r0, _0225D058 ; =0x00008785
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _0225CED2
    // add r1, r5, #0
    // sub r1, #0x79
    // b _0225CED4
    // mov r1, #0x78
    // ldr r2, _0225D05C ; =0x000019CC
    // add r0, r4, r2
    // add r2, r2, #2
    // ldrh r2, [r4, r2]
    // add r1, r2, r1
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // bl ov91_0225DD50
    // ldr r1, _0225D060 ; =0x00001AB4
    // add r0, r4, r1
    // sub r1, #0xe8
    // add r1, r4, r1
    // bl ov91_0225DBC0
    // ldr r0, _0225D064 ; =0x00001F74
    // ldr r1, _0225D05C ; =0x000019CC
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_022601F4
    // ldr r0, _0225D064 ; =0x00001F74
    // ldr r1, _0225D05C ; =0x000019CC
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_02260218
    // ldr r0, _0225D054 ; =0x00001F38
    // ldr r1, [r4, r0]
    // cmp r1, #8
    // bls _0225CF14
    // b _0225D036
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225CF20: ; jump table
    // ldr r0, _0225D068 ; =0x0000878C
    // add r0, r4, r0
    // bl ov91_0225F23C
    // ldr r0, _0225D054 ; =0x00001F38
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // b _0225D036
    // ldr r0, _0225D068 ; =0x0000878C
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov91_0225F25C
    // cmp r0, #1
    // bne _0225D036
    // ldr r0, _0225D054 ; =0x00001F38
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // mov r0, #2
    // bl sub_02037AC0
    // b _0225D036
    // mov r0, #2
    // bl sub_02037B38
    // cmp r0, #0
    // beq _0225D036
    // ldr r0, _0225D054 ; =0x00001F38
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // mov r1, #0x41
    // add r0, #8
    // str r1, [r4, r0]
    // b _0225D036
    // add r1, r0, #0
    // add r1, #8
    // ldr r1, [r4, r1]
    // sub r2, r1, #1
    // add r1, r0, #0
    // add r1, #8
    // str r2, [r4, r1]
    // add r0, #8
    // ldr r0, [r4, r0]
    // cmp r0, #0x32
    // bne _0225CF98
    // ldr r0, _0225D06C ; =0x00000619
    // bl PlaySE
    // mov r0, #0x7d
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // cmp r0, #0x14
    // bne _0225CFA8
    // ldr r0, _0225D070 ; =0x0000063D
    // bl PlaySE
    // ldr r0, _0225D064 ; =0x00001F74
    // mov r1, #1
    // add r0, r4, r0
    // lsl r1, r1, #0xc
    // bl ov91_0226031C
    // mov r0, #0x7d
    // lsl r0, r0, #6
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // bne _0225D036
    // ldr r1, _0225D060 ; =0x00001AB4
    // sub r0, #8
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_0225DB7C
    // ldr r0, _0225D054 ; =0x00001F38
    // mov r1, #4
    // str r1, [r4, r0]
    // b _0225D036
    // cmp r6, #1
    // bne _0225D036
    // mov r1, #5
    // str r1, [r4, r0]
    // b _0225D036
    // ldr r1, _0225D060 ; =0x00001AB4
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_0225DB18
    // ldr r0, _0225D074 ; =0x000005DD
    // bl PlaySE
    // ldr r0, _0225D054 ; =0x00001F38
    // mov r1, #6
    // str r1, [r4, r0]
    // b _0225D036
    // ldr r1, _0225D060 ; =0x00001AB4
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_0225DB44
    // cmp r0, #0
    // bne _0225D036
    // ldr r0, _0225D054 ; =0x00001F38
    // mov r1, #7
    // str r1, [r4, r0]
    // b _0225D036
    // ldr r1, _0225D060 ; =0x00001AB4
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_0225DBAC
    // cmp r0, #0
    // bne _0225D036
    // ldr r0, _0225D054 ; =0x00001F38
    // mov r1, #8
    // str r1, [r4, r0]
    // b _0225D036
    // ldr r1, _0225D060 ; =0x00001AB4
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_0225DB5C
    // ldr r0, _0225D05C ; =0x000019CC
    // mov r1, #1
    // add r0, r4, r0
    // bl ov91_0225DD20
    // mov r5, #0
    // ldr r0, _0225D064 ; =0x00001F74
    // ldr r1, _0225D05C ; =0x000019CC
    // ldr r2, [r4]
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_022601AC
    // ldr r1, _0225D060 ; =0x00001AB4
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov91_0225F7A8
    // add r0, r5, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _0225D054: .word 0x00001F38
    // _0225D058: .word 0x00008785
    // _0225D05C: .word 0x000019CC
    // _0225D060: .word 0x00001AB4
    // _0225D064: .word 0x00001F74
    // _0225D068: .word 0x0000878C
    // _0225D06C: .word 0x00000619
    // _0225D070: .word 0x0000063D
    // _0225D074: .word 0x000005DD
    // TODO: decompile
}



void ov91_0225D078(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // ldr r1, _0225D1B8 ; =0x00001F54
    // add r4, r0, #0
    // ldr r2, [r4, r1]
    // mov r6, #1
    // cmp r2, #3
    // bhi _0225D158
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _0225D094: ; jump table
    // bl ov91_0225E6B0
    // add r0, r4, #0
    // bl ov91_0225EE9C
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0x18
    // add r1, r0, #0
    // sub r1, #0x26
    // mov r2, #0
    // mov r3, #0x3f
    // bl StartBrightnessTransition
    // ldr r0, _0225D1BC ; =0x00001AB4
    // add r0, r4, r0
    // bl ov91_0225DBE4
    // ldr r0, _0225D1C0 ; =0x000021A4
    // ldr r0, [r4, r0]
    // bl ov90_02258CB0
    // ldr r0, _0225D1C4 ; =0x000087E4
    // add r0, r4, r0
    // bl ov91_02261B10
    // ldr r0, _0225D1C8 ; =0x0000862C
    // add r0, r4, r0
    // bl ov91_02261890
    // ldr r0, _0225D1B8 ; =0x00001F54
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // b _0225D158
    // ldr r0, _0225D1BC ; =0x00001AB4
    // add r5, r6, #0
    // add r0, r4, r0
    // bl ov91_0225DBF4
    // cmp r0, #0
    // bne _0225D0F2
    // mov r5, #0
    // add r0, r4, #0
    // bl ov91_0225E40C
    // add r0, r4, #0
    // bl ov91_0225E648
    // add r0, r4, #0
    // bl ov91_0225E6D0
    // cmp r0, #1
    // bne _0225D10A
    // mov r5, #0
    // ldr r0, _0225D1BC ; =0x00001AB4
    // add r0, r4, r0
    // bl ov91_0225DC24
    // cmp r0, #0
    // bne _0225D118
    // mov r5, #0
    // mov r0, #2
    // bl IsBrightnessTransitionActive
    // cmp r0, #0
    // bne _0225D124
    // mov r5, #0
    // cmp r5, #1
    // bne _0225D158
    // cmp r7, #1
    // bne _0225D158
    // ldr r0, _0225D1CC ; =0x00001F58
    // mov r1, #0
    // str r1, [r4, r0]
    // sub r1, r0, #4
    // ldr r1, [r4, r1]
    // sub r0, r0, #4
    // add r1, r1, #1
    // str r1, [r4, r0]
    // b _0225D158
    // add r0, r1, #4
    // ldr r0, [r4, r0]
    // add r2, r0, #1
    // add r0, r1, #4
    // str r2, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0x40
    // blo _0225D158
    // ldr r0, [r4, r1]
    // add r0, r0, #1
    // str r0, [r4, r1]
    // b _0225D158
    // mov r6, #0
    // ldr r0, _0225D1D0 ; =0x00008785
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _0225D166
    // mov r2, #0x77
    // mvn r2, r2
    // b _0225D168
    // mov r2, #0x78
    // ldr r1, _0225D1D4 ; =0x000019CC
    // add r0, r4, r1
    // add r1, r1, #2
    // ldrh r1, [r4, r1]
    // add r1, r1, r2
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // bl ov91_0225DD50
    // ldr r0, _0225D1D8 ; =0x00001F74
    // ldr r1, _0225D1D4 ; =0x000019CC
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_022601C8
    // ldr r0, _0225D1D8 ; =0x00001F74
    // ldr r1, _0225D1D4 ; =0x000019CC
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_022601F4
    // ldr r0, _0225D1D8 ; =0x00001F74
    // ldr r1, _0225D1D4 ; =0x000019CC
    // ldr r2, [r4]
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_022601AC
    // ldr r1, _0225D1BC ; =0x00001AB4
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov91_0225F7A8
    // ldr r0, _0225D1C8 ; =0x0000862C
    // add r0, r4, r0
    // bl ov91_02261928
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225D1B8: .word 0x00001F54
    // _0225D1BC: .word 0x00001AB4
    // _0225D1C0: .word 0x000021A4
    // _0225D1C4: .word 0x000087E4
    // _0225D1C8: .word 0x0000862C
    // _0225D1CC: .word 0x00001F58
    // _0225D1D0: .word 0x00008785
    // _0225D1D4: .word 0x000019CC
    // _0225D1D8: .word 0x00001F74
    // TODO: decompile
}



void ov91_0225D1DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r2, [r4]
    // cmp r2, #2
    // bhs _0225D202
    // ldr r0, _0225D2A8 ; =ov91_02261C44
    // lsl r1, r2, #2
    // ldr r1, [r0, r1]
    // ldr r0, [r4, #8]
    // cmp r1, r0
    // bhi _0225D202
    // add r0, r2, #1
    // str r0, [r4]
    // cmp r0, #1
    // bne _0225D202
    // ldr r0, _0225D2AC ; =0x000087E4
    // add r0, r4, r0
    // bl ov91_022619E8
    // ldr r0, _0225D2B0 ; =0x000086EC
    // mov r1, #1
    // add r0, r4, r0
    // mov r2, #0
    // bl sub_02021280
    // add r0, r4, #0
    // bl ov91_0225EA7C
    // ldr r0, _0225D2B4 ; =0x00008730
    // add r0, r4, r0
    // bl ov91_0225EF70
    // cmp r0, #0
    // bne _0225D22A
    // ldr r1, _0225D2B4 ; =0x00008730
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov91_0225F008
    // ldr r0, _0225D2B8 ; =0x000087CC
    // ldr r1, [r4, #0x10]
    // add r0, r4, r0
    // bl ov91_0225F3E8
    // cmp r0, #1
    // bne _0225D258
    // ldr r0, _0225D2B8 ; =0x000087CC
    // add r0, r4, r0
    // bl ov91_0225F3E4
    // add r1, r0, #0
    // ldr r0, _0225D2BC ; =0x0000FFFF
    // cmp r1, r0
    // beq _0225D250
    // ldr r0, _0225D2C0 ; =0x00001F74
    // add r0, r4, r0
    // bl ov91_02260370
    // ldr r0, _0225D2B8 ; =0x000087CC
    // add r0, r4, r0
    // bl ov91_0225F3D4
    // add r0, r4, #0
    // bl ov91_0225E40C
    // ldr r1, _0225D2C4 ; =0x000019CC
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov91_0225DCC4
    // ldr r1, _0225D2C8 ; =0x00001AB4
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov91_0225F74C
    // add r0, r4, #0
    // bl ov91_0225E62C
    // ldr r0, _0225D2AC ; =0x000087E4
    // ldr r1, _0225D2CC ; =0x00001C54
    // ldr r2, _0225D2C0 ; =0x00001F74
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, r2
    // bl ov91_02261A00
    // ldr r0, [r4, #4]
    // cmp r0, #1
    // bne _0225D294
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #8]
    // cmp r0, r1
    // blt _0225D2A2
    // str r1, [r4, #8]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0225D2A8: .word ov91_02261C44
    // _0225D2AC: .word 0x000087E4
    // _0225D2B0: .word 0x000086EC
    // _0225D2B4: .word 0x00008730
    // _0225D2B8: .word 0x000087CC
    // _0225D2BC: .word 0x0000FFFF
    // _0225D2C0: .word 0x00001F74
    // _0225D2C4: .word 0x000019CC
    // _0225D2C8: .word 0x00001AB4
    // _0225D2CC: .word 0x00001C54
    // TODO: decompile
}



void ov91_0225D2D0(void) {
    // push {r3, lr}
    // ldr r1, _0225D2E4 ; =0x00001AB4
    // ldr r0, [r0, r1]
    // bl DoScheduledBgGpuUpdates
    // bl GF_RunVramTransferTasks
    // bl OamManager_ApplyAndResetBuffers
    // pop {r3, pc}
    // _0225D2E4: .word 0x00001AB4
    // TODO: decompile
}



void ov91_0225D2E8(void) {
    // ldr r0, [r0, #8]
    // bx lr
    // TODO: decompile
}



void ov91_0225D2EC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x28
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrh r0, [r4]
    // ldr r1, [r5, #0x14]
    // cmp r1, r0
    // beq _0225D324
    // add r0, r4, #0
    // add r1, sp, #0
    // bl ov91_0225E294
    // add r0, r5, #0
    // add r1, sp, #0
    // mov r2, #2
    // bl ov91_0225E2E4
    // ldrh r0, [r4, #2]
    // cmp r0, #0
    // beq _0225D324
    // mov r2, #0x12
    // ldr r0, _0225D328 ; =0x00001E38
    // ldrh r1, [r4]
    // ldrsb r2, [r4, r2]
    // ldr r3, [r5]
    // add r0, r5, r0
    // bl ov91_0225D694
    // add sp, #0x28
    // pop {r3, r4, r5, pc}
    // _0225D328: .word 0x00001E38
    // TODO: decompile
}



void ov91_0225D32C(void) {
    // add r0, #0x4c
    // ldrb r0, [r0]
    // mul r4, r0
    // add r0, #0x50
    // add r0, r0, r4
    ov91_0225E23C(r0, 0, r0);
    // add r5, #0x4c
    // add r0, r5, r4
    ov91_0225E400();
    // add r3, #0x44
}



void ov91_0225D368(void) {
    // add r3, r1, #0
    // ldr r1, _0225D378 ; =0x000086DC
    // add r2, r0, r1
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // bx lr
    // _0225D378: .word 0x000086DC
    // TODO: decompile
}



void ov91_0225D37C(void) {
    // ldr r0, [r0, #0x18]
    // bx lr
    // TODO: decompile
}



void ov91_0225D380(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r4, _0225D3B0 ; =0x00008780
    // add r3, r0, #0
    // ldrh r2, [r3, r4]
    // add r0, r4, #2
    // strh r2, [r3, r0]
    // strh r1, [r3, r4]
    // ldrh r0, [r3, r4]
    // add r2, r4, #4
    // sub r1, r4, #4
    // str r0, [sp]
    // add r0, r4, #0
    // sub r0, #0x50
    // add r4, r4, #2
    // add r0, r3, r0
    // ldr r1, [r3, r1]
    // add r2, r3, r2
    // ldrh r3, [r3, r4]
    // bl ov91_0225EED0
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _0225D3B0: .word 0x00008780
    // TODO: decompile
}



void ov91_0225D3B4(void) {
    // ldr r3, _0225D3BC ; =0x000087CC
    // add r0, r0, r3
    // ldr r3, _0225D3C0 ; =ov91_0225F3A0
    // bx r3
    // _0225D3BC: .word 0x000087CC
    // _0225D3C0: .word ov91_0225F3A0
    // TODO: decompile
}



void ov91_0225D3C4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r1]
    // ldr r2, _0225D404 ; =0x00008784
    // strb r0, [r4, r2]
    // ldrb r3, [r1, #1]
    // add r0, r2, #1
    // strb r3, [r4, r0]
    // ldrb r3, [r1, #2]
    // add r0, r2, #2
    // strb r3, [r4, r0]
    // ldrb r1, [r1, #3]
    // add r0, r2, #3
    // strb r1, [r4, r0]
    // mov r1, #1
    // add r0, r2, #4
    // str r1, [r4, r0]
    // add r1, r2, #0
    // add r0, r2, #0
    // sub r1, #8
    // sub r0, #0x54
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // add r2, r4, r2
    // bl ov91_0225EEBC
    // ldr r1, _0225D408 ; =0x00008730
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov91_0225F008
    // pop {r4, pc}
    // _0225D404: .word 0x00008784
    // _0225D408: .word 0x00008730
    // TODO: decompile
}



void ov91_0225D40C(void) {
    // ldr r4, [sp, #0x18]
    // str r3, [sp]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(r3, (r4 << 0xc));
    // sub r0, r7, r6
    // add r2, r2, r7
    // adc r1, r3
    // orr r2, r1
    // sub r2, r0, r2
    // asr r1, r2, #0x1f
    // orr r1, r0
    // add r0, r0, r7
    // adc r1, r3
    // orr r0, r1
    // mul r1, r4
    FX_Div((((r0 >> 0xc) << 0xd) >> 0xc), (r4 << 0xc), (r0 >> 0xc), 0);
    // str r6, [r5]
    // ldr r1, [sp]
    *((u32*)(r5 + 4)) = r6;
    *((u32*)(r5 + 8)) = r1;
    *((u32*)(r5 + 0xc)) = r0;
    *((u32*)(r5 + 0x10)) = 0;
    *((u32*)(r5 + 0x14)) = r4;
}



void ov91_0225D46C(void) {
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(*((u32*)(r0 + 8)), (*((u32*)(r0 + 0x10)) << 0xc));
    // add r2, r0, r2
    // adc r1, r3
    // orr r4, r0
    // mul r2, r6
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(*((u32*)(r5 + 0xc)), (r6 << 0xc), 0);
    // add r0, r0, r2
    // adc r1, r3
    // orr r0, r1
    FX_Div((r0 >> 0xc), ((2 << 0xa) << 2), (2 << 0xa), 0);
    // add r0, r4, r0
    // add r0, r1, r0
    // str r0, [r5]
    *((u32*)(r5 + 0x10)) = (*((u32*)(r5 + 0x10)) + 1);
    *((u32*)(r5 + 0x10)) = *((u32*)(r5 + 0x14));
}



void ov91_0225D4D4(void) {
    // push {r3, r4}
    // lsl r4, r0, #5
    // lsl r0, r2, #3
    // ldr r2, _0225D4F8 ; =ov91_02261F8C
    // lsl r1, r1, #7
    // add r2, r2, r1
    // add r2, r4, r2
    // ldr r2, [r0, r2]
    // str r2, [r3]
    // ldr r2, _0225D4FC ; =ov91_02261F90
    // add r1, r2, r1
    // add r1, r4, r1
    // ldr r1, [r0, r1]
    // ldr r0, [sp, #8]
    // str r1, [r0]
    // pop {r3, r4}
    // bx lr
    // nop
    // _0225D4F8: .word ov91_02261F8C
    // _0225D4FC: .word ov91_02261F90
    // TODO: decompile
}



void ov91_0225D500(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x28
    // add r5, r0, #0
    // ldr r0, [r5, #0x14]
    // add r4, r3, #0
    // add r3, sp, #0
    // strh r0, [r3]
    // mov r0, #0
    // strh r0, [r3, #2]
    // sub r3, r1, r4
    // lsr r1, r3, #0x1f
    // add r1, r3, r1
    // asr r1, r1, #1
    // lsl r1, r1, #0x10
    // asr r1, r1, #4
    // str r1, [sp, #4]
    // add r1, sp, #0x28
    // ldrh r1, [r1, #0x10]
    // sub r2, r2, r1
    // lsr r1, r2, #0x1f
    // add r1, r2, r1
    // asr r1, r1, #1
    // lsl r1, r1, #0x10
    // asr r1, r1, #4
    // str r0, [sp, #8]
    // add r0, sp, #4
    // str r1, [sp, #0xc]
    // bl VEC_Mag
    // ldr r1, _0225D5F8 ; =0x0001E200
    // cmp r0, r1
    // ble _0225D582
    // add r0, sp, #4
    // add r1, r0, #0
    // bl VEC_Normalize
    // ldr r0, [sp, #4]
    // ldr r2, _0225D5F8 ; =0x0001E200
    // asr r1, r0, #0x1f
    // mov r3, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    // ldr r2, _0225D5F8 ; =0x0001E200
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // str r1, [sp, #0xc]
    // mov r0, #0x26
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // add r0, sp, #4
    // bl VEC_Mag
    // ldr r2, _0225D5FC ; =0x0000099A
    // asr r1, r0, #0x1f
    // mov r3, #0
    // str r0, [sp, #0x10]
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // add r0, sp, #4
    // str r1, [sp, #0x10]
    // add r1, r0, #0
    // bl VEC_Normalize
    // lsl r0, r4, #0x10
    // add r2, sp, #0x28
    // mov r1, #0x10
    // ldrsh r1, [r2, r1]
    // asr r0, r0, #0x10
    // add r2, sp, #0x14
    // bl ov91_02260400
    // mov r0, #0
    // str r0, [sp, #0x18]
    // add r2, sp, #0
    // add r0, sp, #0x14
    // ldrh r2, [r2]
    // ldr r3, [r5, #0x10]
    // add r1, r0, #0
    // bl ov91_0226045C
    // add r2, sp, #0
    // add r0, sp, #4
    // ldrh r2, [r2]
    // ldr r3, [r5, #0x10]
    // add r1, r0, #0
    // bl ov91_0226045C
    // mov r0, #0
    // str r0, [sp, #0x24]
    // ldr r2, [sp, #0x3c]
    // add r0, r5, #0
    // add r1, sp, #0
    // bl ov91_0225E2E4
    // add sp, #0x28
    // pop {r3, r4, r5, pc}
    // nop
    // _0225D5F8: .word 0x0001E200
    // _0225D5FC: .word 0x0000099A
    // TODO: decompile
}



void ov91_0225D600(void) {
    // ldr r1, [r0, #0x1c]
    // cmp r1, #3
    // blt _0225D60A
    // mov r1, #2
    // b _0225D60E
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // lsl r2, r1, #2
    // ldr r1, _0225D624 ; =ov91_02261C34
    // ldr r0, [r0]
    // ldr r1, [r1, r2]
    // cmp r0, #2
    // bne _0225D61E
    // lsl r0, r1, #1
    // add r1, r1, r0
    // add r0, r1, #0
    // bx lr
    // nop
    // _0225D624: .word ov91_02261C34
    // TODO: decompile
}



void ov91_0225D628(void) {
    // ldr r7, [sp, #0x58]
    // str r0, [sp, #0x14]
    // add r0, r6, r0
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r0, sp, #0x14
    *((u16*)((1 << 0xc) + 0x20)) = 0;
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r4, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r7, [sp, #0x40]
    // ldr r0, [sp, #0x10]
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0xc]
    // add r1, sp, #0x14
    // str r7, [sp, #8]
    ov91_0225D6B8(r0, r1);
    // add r5, #0x40
}



void ov91_0225D67C(void) {
}



void ov91_0225D694(void) {
}



void ov91_0225D6A0(void) {
}



void ov91_0225D6B8(void) {
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // ldr r6, [sp, #4]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // str r3, [sp, #8]
    // str r0, [sp, #0x2c]
    // add r0, sp, #0xc
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x28]
    // add r3, sp, #0x10
    ov91_0225D4D4();
    // ldr r0, [sp, #0x10]
    *((u32*)(r5 + 8)) = (r0 << 0xc);
    // ldr r0, [sp, #0xc]
    // add r3, #8
    *((u32*)(r5 + 0xc)) = ((r0 << 0xc) << 0xc);
    // ldmia r3!, {r0, r1}
    // add r2, #0x18
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    Sprite_CreateAffine(r5, r6, r5);
    // str r0, [r4]
    Sprite_SetAnimCtrlSeq(2);
    Sprite_SetDrawFlag(*((u32*)r4), 0);
    Sprite_SetAnimActiveFlag(*((u32*)r4), 1);
    Sprite_SetAnimSpeed(*((u32*)r4), (6 << 0xa));
    *((u32*)(r4 + 0xc)) = 0;
    // add r6, #0xc
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #4]
    *((u32*)(0 + 0x3c)) = 1;
    // ldr r0, [sp, #4]
    *((u32*)(0 + 0x3c)) = 0;
}



void ov91_0225D750(void) {
}



void ov91_0225D768(void) {
    // str r0, [sp]
    // ldr r5, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // str r4, [sp, #0x10]
    // str r0, [sp, #0x14]
    Sprite_GetDrawFlag(*((u32*)r5));
    // str r6, [sp, #0x14]
    // str r0, [sp, #0x10]
    Sprite_GetDrawPriority(*((u32*)r5));
    Sprite_SetDrawPriority(*((u32*)r5), (r0 + 1));
    // ldr r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    GF_AssertFail((r7 + 1));
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r0, #8
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r0, #0xb
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [r0, r5]
    Sprite_SetAnimCtrlSeq((*((u32*)((*((u32*)(2 + 0x3c)) + 2) + 0x3c)) + 5));
    // ldr r0, [sp]
    // add r0, r0, r5
    *((u32*)(r0 + 0xc)) = 0;
    // ldr r0, [sp]
    // ldr r0, [r0, r5]
    Sprite_SetDrawFlag(1);
    // ldr r0, [sp]
    // ldr r1, [sp, #0x14]
    ov91_0225D884();
    // ldr r0, [sp]
    // ldr r0, [r0, r5]
    Sprite_SetDrawPriority(0);
    // ldr r0, [sp]
    // ldr r0, [r0, r5]
    Sprite_SetPaletteOverride(r4);
}



void ov91_0225D84C(void) {
    Sprite_GetDrawFlag(*((u32*)r0));
    *((u32*)(r5 + 0xc)) = (*((u32*)(r5 + 0xc)) + 1);
    ov91_0225D8E0(r6, r4);
    ov91_0225D884(r6, r4);
}



void ov91_0225D884(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r1, #0
    // add r5, r0, #0
    // lsl r4, r6, #2
    // add r0, r5, r4
    // ldr r0, [r0, #0xc]
    // ldr r2, _0225D8DC ; =0xFFFF0000
    // lsl r0, r0, #0xc
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x10
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r0, r0, r2
    // adc r1, r3
    // lsl r1, r1, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // lsl r1, r2, #5
    // bl FX_Div
    // add r2, r0, #0
    // mov r0, #0xc
    // mul r0, r6
    // add r6, r5, r0
    // add r6, #0x18
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // add r7, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // add r1, r7, #0
    // str r0, [r3]
    // ldr r0, [sp, #4]
    // add r0, r0, r2
    // str r0, [sp, #4]
    // ldr r0, [r5, r4]
    // bl Sprite_SetMatrix
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0225D8DC: .word 0xFFFF0000
    // TODO: decompile
}



void ov91_0225D8E0(void) {
    // ldr r3, _0225D8EC ; =Sprite_SetDrawFlag
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #0
    // bx r3
    // nop
    // _0225D8EC: .word Sprite_SetDrawFlag
    // TODO: decompile
}



void ov91_0225D8F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x58]
    // add r5, r2, #0
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x58]
    // ldr r4, [sp, #0x60]
    // ldr r2, [sp, #0x14]
    // str r3, [sp, #0x1c]
    // mov r1, #0x1c
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _0225D908
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1c
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #5
    // str r0, [sp, #0xc]
    // mov r0, #0xa
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // ldr r0, [r0]
    // add r1, #0xc
    // mov r2, #1
    // mov r3, #2
    // bl AddWindowParameterized
    // mov r0, #0xe0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // mov r2, #0
    // add r0, #0xc
    // mov r1, #0xf
    // add r3, r2, #0
    // bl FillWindowPixelRect
    // mov r0, #0x80
    // add r1, r4, #0
    // bl String_New
    // add r6, r0, #0
    // ldr r0, [sp, #0x18]
    // mov r1, #0
    // ldr r0, [r0, #8]
    // add r2, r6, #0
    // bl ReadMsgDataIntoString
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0225DAF8 ; =0x0001020F
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // add r3, r1, #0
    // add r0, #0xc
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x18]
    // str r4, [sp, #0xc]
    // ldr r0, [sp, #0x5c]
    // ldr r2, [r2]
    // mov r1, #0x12
    // mov r3, #2
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x18]
    // str r4, [sp, #0xc]
    // ldr r0, [sp, #0x5c]
    // ldr r2, [r2]
    // add r1, #0x12
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0x80
    // str r0, [sp]
    // mov r2, #0
    // ldr r0, [sp, #0x5c]
    // mov r1, #0x13
    // add r3, r2, #0
    // str r4, [sp, #4]
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // add r0, sp, #0x30
    // bl InitWindow
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // mov r2, #2
    // str r2, [sp, #8]
    // mov r0, #5
    // str r0, [sp, #0xc]
    // add r0, #0xfb
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0x30
    // ldr r0, [r0]
    // bl AddWindowParameterized
    // mov r0, #1
    // lsl r0, r0, #8
    // str r0, [sp, #0x28]
    // mov r0, #0x80
    // add r1, r4, #0
    // bl String_New
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // mov r4, #0
    // cmp r0, #0
    // bls _0225DAD2
    // ldr r0, [sp, #0x58]
    // ldr r1, _0225DAFC ; =ov91_02261DAC
    // lsl r0, r0, #7
    // add r1, r1, r0
    // ldr r0, [sp, #0x1c]
    // lsl r0, r0, #5
    // add r6, r1, r0
    // ldr r0, [sp, #0x58]
    // cmp r4, r0
    // beq _0225DAC6
    // add r0, r6, #0
    // sub r0, #0x20
    // ldr r0, [r0]
    // mov r1, #2
    // str r0, [sp, #0x2c]
    // add r0, r6, #0
    // sub r0, #0x1c
    // ldr r7, [r0]
    // mov r0, #0xa
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // sub r2, r2, #1
    // sub r3, r7, #1
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [r0]
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl BgTilemapRectChangePalette
    // add r0, sp, #0x30
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x18]
    // cmp r0, #1
    // bne _0225DA5C
    // ldr r0, _0225DB00 ; =0x0005060F
    // str r0, [sp, #0x20]
    // b _0225DA60
    // ldr r0, _0225DAF8 ; =0x0001020F
    // str r0, [sp, #0x20]
    // ldr r0, [r5, #8]
    // ldr r1, [sp, #0x24]
    // bl PlayerName_FlatToString
    // ldr r1, [sp, #0x2c]
    // add r0, sp, #0x30
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl SetWindowX
    // lsl r1, r7, #0x18
    // add r0, sp, #0x30
    // lsr r1, r1, #0x18
    // bl SetWindowY
    // add r0, sp, #0x30
    // ldrh r1, [r0, #0xa]
    // ldr r0, _0225DB04 ; =0xFFFF8000
    // and r0, r1
    // ldr r1, [sp, #0x28]
    // lsl r1, r1, #0x10
    // lsr r2, r1, #0x10
    // ldr r1, _0225DB08 ; =0x00007FFF
    // and r1, r2
    // orr r1, r0
    // add r0, sp, #0x30
    // strh r1, [r0, #0xa]
    // mov r0, #0
    // ldr r1, [sp, #0x24]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r7, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // mov r3, #0x40
    // str r0, [sp, #8]
    // mov r0, #0
    // sub r3, r3, r7
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x24]
    // add r0, sp, #0x30
    // mov r1, #0
    // lsr r3, r3, #1
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x28]
    // add r0, #0x10
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // add r4, r4, #1
    // add r6, #8
    // add r5, r5, #4
    // cmp r4, r0
    // blo _0225DA0E
    // ldr r0, [sp, #0x24]
    // bl String_Delete
    // add r0, sp, #0x30
    // bl RemoveWindow
    // ldr r0, [sp, #0x14]
    // mov r1, #0
    // str r1, [r0, #4]
    // mov r0, #2
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225DAF8: .word 0x0001020F
    // _0225DAFC: .word ov91_02261DAC
    // _0225DB00: .word 0x0005060F
    // _0225DB04: .word 0xFFFF8000
    // _0225DB08: .word 0x00007FFF
    // TODO: decompile
}



void ov91_0225DB0C(void) {
}



void ov91_0225DB18(void) {
    // add r0, #0xc
    DrawFrameAndWindow1(0, 1, 4);
    GfGfx_EngineATogglePlanes(2, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    // ldr r0, [r4, r0]
    ov90_02258C8C((0x6f << 4));
}



void ov91_0225DB44(void) {
}



void ov91_0225DB5C(void) {
}



void ov91_0225DB7C(void) {
    // push {r4, lr}
    // mov r0, #0x13
    // add r4, r1, #0
    // lsl r0, r0, #6
    // add r0, r4, r0
    // mov r1, #1
    // bl ov91_02260298
    // ldr r0, _0225DBA8 ; =0x0000066C
    // mov r1, #0x2d
    // add r0, r4, r0
    // lsl r1, r1, #0xe
    // bl sub_02018198
    // mov r0, #0x13
    // lsl r0, r0, #6
    // add r0, r4, r0
    // mov r1, #1
    // bl ov91_02260334
    // pop {r4, pc}
    // nop
    // _0225DBA8: .word 0x0000066C
    // TODO: decompile
}



void ov91_0225DBAC(void) {
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
}



void ov91_0225DBC0(void) {
    // mov r2, #0x13
    // lsl r2, r2, #6
    // ldr r3, _0225DBCC ; =ov91_022601C8
    // add r0, r0, r2
    // bx r3
    // nop
    // _0225DBCC: .word ov91_022601C8
    // TODO: decompile
}



void ov91_0225DBD0(void) {
    // str r2, [r0, r1]
    // str r2, [r0, r1]
}



void ov91_0225DBE0(void) {
    // bx lr
    // TODO: decompile
}



void ov91_0225DBE4(void) {
    // mov r1, #0x13
    // lsl r1, r1, #6
    // add r0, r0, r1
    // ldr r3, _0225DBF0 ; =ov91_02260298
    // mov r1, #5
    // bx r3
    // _0225DBF0: .word ov91_02260298
    // TODO: decompile
}



void ov91_0225DBF4(void) {
    // push {r3, lr}
    // ldr r1, _0225DC1C ; =0x000004A4
    // ldr r2, [r0, r1]
    // add r2, r2, #1
    // str r2, [r0, r1]
    // ldr r1, [r0, r1]
    // cmp r1, #0x3c
    // blo _0225DC18
    // ldr r1, _0225DC20 ; =0x000006BC
    // add r0, r0, r1
    // mov r1, #2
    // lsl r1, r1, #0xc
    // bl sub_0201815C
    // cmp r0, #1
    // bne _0225DC18
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // _0225DC1C: .word 0x000004A4
    // _0225DC20: .word 0x000006BC
    // TODO: decompile
}



void ov91_0225DC24(void) {
}



void ov91_0225DC3C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // mov r0, #0
    // strh r0, [r4, #6]
    // ldr r1, _0225DCB4 ; =0x00007FFF
    // add r0, r4, #0
    // bl ov91_0225DD50
    // ldr r1, _0225DCB8 ; =0x00000E38
    // add r0, r4, #0
    // bl ov91_0225DD24
    // mov r0, #0
    // strb r0, [r4]
    // mov r0, #1
    // strb r0, [r4, #1]
    // mov r1, #0x32
    // add r0, r4, #0
    // add r2, sp, #0
    // lsl r1, r1, #0xe
    // add r0, #0x94
    // str r1, [r0]
    // add r0, r4, #0
    // mov r1, #0x7b
    // add r0, #0x98
    // str r1, [r0]
    // mov r0, #5
    // lsl r0, r0, #0x10
    // ldr r5, _0225DCBC ; =ov91_02261C28
    // str r0, [r4, #8]
    // ldmia r5!, {r0, r1}
    // add r3, r2, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r2]
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x9c
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // ldr r1, _0225DCC0 ; =0x000009C4
    // str r0, [r2]
    // add r0, r4, #0
    // bl ov91_0225E09C
    // add r3, sp, #0
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0xd8
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r4, #0xe4
    // str r0, [r4]
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0225DCB4: .word 0x00007FFF
    // _0225DCB8: .word 0x00000E38
    // _0225DCBC: .word ov91_02261C28
    // _0225DCC0: .word 0x000009C4
    // TODO: decompile
}



void ov91_0225DCC4(void) {
    // push {r3, r4, r5, lr}
    // add r3, r0, #0
    // ldr r0, [r3]
    // add r4, r1, #0
    // cmp r0, #1
    // bne _0225DCD4
    // mov r0, #0
    // b _0225DCD6
    // mov r0, #1
    // strb r0, [r4, #1]
    // ldr r1, [r3, #8]
    // ldr r2, [r3, #0xc]
    // ldr r3, [r3]
    // add r0, r4, #0
    // lsl r5, r3, #2
    // ldr r3, _0225DD1C ; =ov91_02261C58
    // ldr r3, [r3, r5]
    // blx r3
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov91_0225DD24
    // ldrh r1, [r4, #4]
    // add r0, r4, #0
    // bl ov91_0225E044
    // str r0, [r4, #8]
    // ldrh r1, [r4, #4]
    // add r0, r4, #0
    // bl ov91_0225E070
    // add r1, r4, #0
    // add r1, #0xe4
    // str r0, [r1]
    // ldrh r2, [r4, #2]
    // ldrh r1, [r4, #6]
    // add r0, r4, #0
    // add r1, r2, r1
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // bl ov91_0225DD50
    // pop {r3, r4, r5, pc}
    // nop
    // _0225DD1C: .word ov91_02261C58
    // TODO: decompile
}



void ov91_0225DD20(void) {
}



void ov91_0225DD24(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r5, r1, #0
    // add r0, #0xc
    // strh r5, [r4, #4]
    // bl MTX_Identity33_
    // asr r0, r5, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // ldr r3, _0225DD4C ; =FX_SinCosTable_
    // add r2, r2, #1
    // lsl r2, r2, #1
    // add r4, #0xc
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, r4, #0
    // bl MTX_RotX33_
    // pop {r3, r4, r5, pc}
    // _0225DD4C: .word FX_SinCosTable_
    // TODO: decompile
}



void ov91_0225DD50(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r4, r1, #0
    // add r0, #0x54
    // strh r4, [r5, #2]
    // bl MTX_Identity33_
    // add r0, r5, #0
    // add r0, #0x30
    // bl MTX_Identity33_
    // asr r0, r4, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // ldr r3, _0225DE84 ; =FX_SinCosTable_
    // add r2, r2, #1
    // lsl r2, r2, #1
    // add r0, r5, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, #0x30
    // bl MTX_RotY33_
    // add r0, r5, #0
    // add r1, r5, #0
    // add r2, r5, #0
    // add r0, #0xc
    // add r1, #0x30
    // add r2, #0x54
    // bl MTX_Concat33
    // add r1, r5, #0
    // add r2, r5, #0
    // ldr r0, _0225DE88 ; =ov91_02261C4C
    // add r1, #0x54
    // add r2, #0x78
    // bl MTX_MultVec33
    // mov r0, #0
    // add r1, r5, #0
    // add r2, r5, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #8]
    // add r1, #0x54
    // neg r0, r0
    // str r0, [sp, #0x10]
    // add r0, sp, #8
    // add r2, #0x84
    // bl MTX_MultVec33
    // add r0, r5, #0
    // add r0, #0xb8
    // ldr r1, [r0]
    // add r0, r5, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0xbc
    // ldr r0, [r0]
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // add r0, #0xa4
    // ldr r1, [r0]
    // mov r0, #5
    // lsl r0, r0, #0x10
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // add r0, sp, #8
    // add r1, r5, #0
    // add r1, #0x30
    // add r2, r0, #0
    // bl MTX_MultVec33
    // add r1, r5, #0
    // add r1, #0x84
    // add r0, sp, #8
    // add r2, r1, #0
    // bl VEC_Add
    // add r0, r5, #0
    // add r2, r5, #0
    // add r0, #0x80
    // add r2, #0x8c
    // ldr r0, [r0]
    // ldr r2, [r2]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // add r2, r5, #0
    // add r2, #0x84
    // str r0, [sp, #4]
    // ldr r2, [r2]
    // ldr r0, [r5, #0x78]
    // add r6, r1, #0
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // str r0, [sp]
    // add r4, r1, #0
    // add r2, r5, #0
    // add r2, #0x88
    // ldr r0, [r5, #0x7c]
    // ldr r2, [r2]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // add r2, r1, #0
    // mov r3, #2
    // add r7, r0, #0
    // ldr r1, [sp, #4]
    // mov r0, #0
    // lsl r3, r3, #0xa
    // add r1, r1, r3
    // adc r6, r0
    // lsl r3, r6, #0x14
    // lsr r1, r1, #0xc
    // orr r1, r3
    // mov r3, #2
    // ldr r6, [sp]
    // lsl r3, r3, #0xa
    // add r3, r6, r3
    // adc r4, r0
    // lsl r4, r4, #0x14
    // lsr r3, r3, #0xc
    // orr r3, r4
    // mov r4, #2
    // lsl r4, r4, #0xa
    // add r4, r7, r4
    // adc r2, r0
    // lsl r0, r2, #0x14
    // lsr r2, r4, #0xc
    // orr r2, r0
    // add r0, r3, r2
    // add r1, r1, r0
    // add r0, r5, #0
    // add r0, #0x90
    // str r1, [r0]
    // add r0, r5, #0
    // add r1, r5, #0
    // add r5, #0xd8
    // add r0, #0x9c
    // add r1, #0x30
    // add r2, r5, #0
    // bl MTX_MultVec33
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0225DE84: .word FX_SinCosTable_
    // _0225DE88: .word ov91_02261C4C
    // TODO: decompile
}



void ov91_0225DE8C(void) {
    // ldrb r0, [r4]
    // add r0, sp, #0x28
    // str r0, [sp]
    // add r0, sp, #0xc
    // str r0, [sp, #4]
    // add r3, #0x90
    // add r2, #0x78
    ov91_02261208(r1, r2, r0, *((u32*)r0));
    // add r0, #0x84
    // add r2, sp, #0x1c
    VEC_Subtract(r4, r6);
    // add r0, sp, #0x1c
    VEC_Mag();
    // ldr r0, [sp, #0xc]
    // add r0, #0x94
    // add r2, #0x98
    // sub r0, r0, r6
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(*((u32*)r4), *((u8*)(r4 + 1)), *((u32*)r4));
    // add r2, r0, r2
    // adc r1, r3
    // orr r5, r0
    // add r0, sp, #0x1c
    // add r1, sp, #0x10
    VEC_Normalize((r1 << 0x14), (2 << 0xa), 0);
    // asr r0, r5, #0x1f
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #8]
    // asr r1, r0, #0x1f
    _ll_mul(r5);
    // add r0, r2, r0
    // adc r1, r3
    // orr r0, r1
    // str r0, [r7]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #8]
    // asr r1, r0, #0x1f
    _ll_mul(((2 << 0xa) >> 0xc), (r1 << 0x14), r5, 0);
    // add r0, r2, r0
    // adc r1, r3
    // orr r0, r1
    *((u32*)(r7 + 4)) = ((2 << 0xa) >> 0xc);
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #8]
    // asr r1, r0, #0x1f
    _ll_mul(((2 << 0xa) >> 0xc), (r1 << 0x14), r5, 0);
    // add r2, r0, r2
    // adc r1, r3
    // orr r1, r0
    *((u32*)(r7 + 8)) = ((2 << 0xa) >> 0xc);
    // sub r1, r6, r5
}



void ov91_0225DFB0(void) {
    // ldrb r0, [r5]
    // add r1, #0xdc
    // add r1, #0xe4
    // add r1, r2, r1
    // add r0, #0xd8
    // str r0, [sp, #0xc]
    // add r0, #0xe0
    // add r2, sp, #0x18
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #8]
    // str r1, [sp, #4]
    // add r0, sp, #0xc
    // add r1, sp, #0
    VEC_Subtract(*((u32*)(r1 + 8)), 0, *((u32*)r0));
    // add r0, sp, #0x18
    VEC_Mag();
    // add r0, #0xdc
    // sub r0, r1, r0
    // asr r1, r0, #0xc
    // add r0, #0xd0
    // mul r0, r1
    // add r1, #0xe4
    // asr r1, r1, #0xc
    _s32_div_f(*((u32*)r5), *((u32*)r5));
    // add r5, #0xcc
    // sub r0, r1, r0
}



void ov91_0225E044(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // mul r0, r1
    // ldr r1, _0225E06C ; =0x0000FFFF
    // bl _s32_div_f
    // mov r1, #0x5a
    // sub r2, r1, r0
    // add r0, r4, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // mul r0, r2
    // bl _s32_div_f
    // add r4, #0xb0
    // ldr r1, [r4]
    // add r0, r0, r1
    // pop {r4, pc}
    // _0225E06C: .word 0x0000FFFF
    // TODO: decompile
}



void ov91_0225E070(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // mul r0, r1
    // ldr r1, _0225E098 ; =0x0000FFFF
    // bl _s32_div_f
    // add r1, r4, #0
    // add r1, #0xc4
    // ldr r1, [r1]
    // mul r1, r0
    // add r0, r1, #0
    // mov r1, #0x5a
    // bl _s32_div_f
    // add r4, #0xc0
    // ldr r1, [r4]
    // add r0, r0, r1
    // pop {r4, pc}
    // _0225E098: .word 0x0000FFFF
    // TODO: decompile
}



void ov91_0225E09C(void) {
    // add r0, #0xa8
    // str r1, [r0]
    // asr r6, r1, #0x1f
    _ll_mul(r1, r6, (0x1e << 0xc), 0);
    // add r2, r0, r2
    // adc r1, r3
    // orr r1, r0
    // add r0, #0xac
    // str r1, [r0]
    _ll_mul(r4, r6, (0x32 << 0xc), 0);
    // add r2, r0, r2
    // adc r1, r3
    // orr r1, r0
    // add r0, #0xb0
    // str r1, [r0]
    _ll_mul(r4, r6, (5 << 0x10), 0);
    // add r2, r0, r2
    // adc r1, r3
    // orr r7, r0
    // add r0, #0xb4
    // str r7, [r0]
    // add r0, #0xb8
    // str r3, [r0]
    _ll_mul(r4, r6, (0x37 << 0xc), 0);
    // add r0, r2, r0
    // adc r1, r3
    // orr r0, r1
    // add r1, #0xbc
    // str r0, [r1]
    _ll_mul(r4, r6, (0x96 << 0xc), 0);
    // add r0, r2, r0
    // adc r1, r3
    // orr r0, r1
    // add r1, #0xc0
    // str r0, [r1]
    _ll_mul(r4, r6, (0xf << 0xe), 0);
    // add r0, r2, r0
    // adc r1, r3
    // orr r0, r1
    // add r1, #0xc4
    // str r0, [r1]
    // add r0, #0xc8
    // str r7, [r0]
    _ll_mul(r4, r6, (0x1e << 0xe), 0);
    // add r2, r0, r2
    // adc r1, r3
    // orr r1, r0
    // add r0, #0xcc
    // str r1, [r0]
    // add r0, #0xcc
    // add r0, #0xc8
    // sub r1, r1, r0
    // add r0, #0xd0
    // str r1, [r0]
    _ll_mul(r4, r6, (6 << 0xa), 0);
    // add r2, r0, r2
    // adc r1, r3
    // orr r1, r0
    // add r5, #0xd4
    // str r1, [r5]
}



void ov91_0225E1E0(void) {
}



void ov91_0225E1E4(void) {
    // add r0, #0xa4
    // str r1, [r0]
}



void ov91_0225E1EC(void) {
    // ldr r0, _0225E1F0 ; =0x00000E38
    // bx lr
    // _0225E1F0: .word 0x00000E38
    // TODO: decompile
}



void ov91_0225E1F4(void) {
    // ldr r0, _0225E1F8 ; =0x00003FFF
    // bx lr
    // _0225E1F8: .word 0x00003FFF
    // TODO: decompile
}



void ov91_0225E1FC(void) {
    // push {r3, lr}
    // ldr r0, _0225E22C ; =0x000002EE
    // sub r0, r1, r0
    // mov r1, #0x32
    // bl _u32_div_f
    // ldr r0, _0225E230 ; =0x0000638E
    // mul r0, r1
    // mov r1, #0x32
    // bl _s32_div_f
    // ldr r1, _0225E234 ; =0x000031C7
    // cmp r0, r1
    // ble _0225E220
    // bl _s32_div_f
    // ldr r0, _0225E234 ; =0x000031C7
    // sub r0, r0, r1
    // ldr r1, _0225E238 ; =0x00000E38
    // add r0, r0, r1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // pop {r3, pc}
    // nop
    // _0225E22C: .word 0x000002EE
    // _0225E230: .word 0x0000638E
    // _0225E234: .word 0x000031C7
    // _0225E238: .word 0x00000E38
    // TODO: decompile
}



void ov91_0225E23C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldrh r0, [r5]
    // add r4, r1, #0
    // ldr r2, _0225E290 ; =0x0000028F
    // strh r0, [r4]
    // ldrh r0, [r5, #2]
    // mov r3, #0
    // strh r0, [r4, #2]
    // ldr r0, [r5, #4]
    // strh r0, [r4, #4]
    // ldr r0, [r5, #8]
    // strh r0, [r4, #6]
    // ldr r0, [r5, #0xc]
    // strh r0, [r4, #8]
    // ldr r0, [r5, #0x10]
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // strh r1, [r4, #0x10]
    // ldr r0, [r5, #0x14]
    // asr r0, r0, #0xc
    // strh r0, [r4, #0xa]
    // ldr r0, [r5, #0x18]
    // asr r0, r0, #0xc
    // strh r0, [r4, #0xc]
    // ldr r0, [r5, #0x1c]
    // asr r0, r0, #0xc
    // strh r0, [r4, #0xe]
    // ldr r0, [r5, #0x20]
    // strb r0, [r4, #0x12]
    // ldr r0, [r5, #0x24]
    // strb r0, [r4, #0x13]
    // pop {r3, r4, r5, pc}
    // _0225E290: .word 0x0000028F
    // TODO: decompile
}



void ov91_0225E294(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldrh r0, [r5]
    // add r4, r1, #0
    // ldr r1, _0225E2E0 ; =0x0000028F
    // strh r0, [r4]
    // ldrh r0, [r5, #2]
    // strh r0, [r4, #2]
    // mov r0, #4
    // ldrsh r0, [r5, r0]
    // str r0, [r4, #4]
    // mov r0, #6
    // ldrsh r0, [r5, r0]
    // str r0, [r4, #8]
    // mov r0, #8
    // ldrsh r0, [r5, r0]
    // str r0, [r4, #0xc]
    // mov r0, #0x10
    // ldrsh r0, [r5, r0]
    // bl FX_Div
    // str r0, [r4, #0x10]
    // mov r0, #0xa
    // ldrsh r0, [r5, r0]
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x14]
    // mov r0, #0xc
    // ldrsh r0, [r5, r0]
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x18]
    // mov r0, #0xe
    // ldrsh r0, [r5, r0]
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x1c]
    // ldrb r0, [r5, #0x13]
    // str r0, [r4, #0x24]
    // pop {r3, r4, r5, pc}
    // nop
    // _0225E2E0: .word 0x0000028F
    // TODO: decompile
}



void ov91_0225E2E4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // add r6, r1, #0
    // str r2, [sp]
    // mov r1, #0
    // add r2, r4, #0
    // add r0, r2, #0
    // add r0, #0x4c
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _0225E34C
    // mov r0, #0x44
    // add r5, r1, #0
    // mul r5, r0
    // add r3, r4, r5
    // add r7, r6, #0
    // add r3, #0x50
    // mov r2, #5
    // ldmia r7!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0225E30A
    // add r1, r4, r5
    // ldr r0, [sp]
    // add r1, #0x4c
    // add r2, r4, r5
    // add r6, #0x14
    // strb r0, [r1]
    // ldmia r6!, {r0, r1}
    // add r2, #0x78
    // stmia r2!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #0
    // str r0, [r2]
    // add r0, r4, r5
    // add r0, #0x4e
    // strh r1, [r0]
    // add r0, r4, r5
    // add r0, #0x88
    // str r1, [r0]
    // ldr r0, _0225E3F0 ; =0x00001AB4
    // add r1, r4, #0
    // add r1, #0x4c
    // ldr r2, [r4, #0x10]
    // ldr r3, [r4, #0x14]
    // add r0, r4, r0
    // add r1, r1, r5
    // bl ov91_02260728
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // add r1, r1, #1
    // add r2, #0x44
    // cmp r1, #0x60
    // blt _0225E2F2
    // ldr r0, [sp]
    // cmp r0, #1
    // bne _0225E3EA
    // mov r0, #0
    // add r2, r4, #0
    // add r1, r2, #0
    // add r1, #0x4c
    // ldrb r1, [r1]
    // cmp r1, #2
    // beq _0225E36C
    // cmp r1, #5
    // bne _0225E3DE
    // add r5, r0, #0
    // add r0, r4, #0
    // str r0, [sp, #8]
    // add r0, #0x4c
    // mov r1, #0x44
    // str r0, [sp, #8]
    // mul r5, r1
    // ldr r0, _0225E3F0 ; =0x00001AB4
    // ldr r1, [sp, #8]
    // add r0, r4, r0
    // add r1, r1, r5
    // bl ov91_02260754
    // add r0, r4, #0
    // str r0, [sp, #4]
    // add r0, #0x4c
    // str r0, [sp, #4]
    // add r0, r0, r5
    // bl ov91_0225E400
    // add r2, r4, r5
    // mov ip, r6
    // add r2, #0x50
    // mov r7, #5
    // mov r3, ip
    // ldmia r3!, {r0, r1}
    // mov ip, r3
    // stmia r2!, {r0, r1}
    // sub r7, r7, #1
    // bne _0225E39C
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add r2, r4, r5
    // add r6, #0x14
    // strb r1, [r0, r5]
    // ldmia r6!, {r0, r1}
    // add r2, #0x78
    // stmia r2!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #0
    // str r0, [r2]
    // add r0, r4, r5
    // add r0, #0x4e
    // strh r1, [r0]
    // add r0, r4, r5
    // add r0, #0x88
    // str r1, [r0]
    // ldr r0, _0225E3F0 ; =0x00001AB4
    // ldr r1, [sp, #8]
    // ldr r2, [r4, #0x10]
    // ldr r3, [r4, #0x14]
    // add r0, r4, r0
    // add r1, r1, r5
    // bl ov91_02260728
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // add r0, r0, #1
    // add r2, #0x44
    // cmp r0, #0x60
    // blt _0225E35E
    // bl GF_AssertFail
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0225E3F0: .word 0x00001AB4
    // TODO: decompile
}



void ov91_0225E3F4(void) {
}



void ov91_0225E400(void) {
}



void ov91_0225E40C(void) {
    // add r4, #0x4c
    // add r0, #0x4c
    // ldrb r0, [r0]
    // add r1, #0xff
    ov91_0225E45C(r0, r0);
    ov91_0225E8BC(r4, r5);
    ov91_0225E9F4(r4, r5);
    // add r6, #0x44
    // add r4, #0x44
}



void ov91_0225E45C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r4, r1, #0
    // ldrb r7, [r4]
    // add r5, r0, #0
    // cmp r7, #1
    // beq _0225E470
    // cmp r7, #2
    // beq _0225E470
    // b _0225E5FA
    // ldr r0, [r4, #0x30]
    // add r1, sp, #0x14
    // str r0, [sp, #4]
    // add r0, r4, #0
    // bl ov91_0225E728
    // ldrb r0, [r4]
    // cmp r0, #1
    // bne _0225E496
    // ldr r0, _0225E600 ; =0x000019CC
    // add r1, r4, #0
    // add r0, r5, r0
    // add r1, #0x2c
    // add r2, sp, #0x14
    // add r3, sp, #8
    // bl ov91_0225DE8C
    // add r6, r0, #0
    // b _0225E498
    // mov r6, #0
    // add r0, r4, #0
    // add r1, sp, #0x14
    // bl ov91_0225EA54
    // cmp r6, #3
    // beq _0225E4A8
    // cmp r6, #1
    // bne _0225E4B0
    // add r0, r4, #0
    // add r1, sp, #8
    // bl ov91_0225EA54
    // ldrh r0, [r4, #2]
    // add r0, r0, #1
    // strh r0, [r4, #2]
    // cmp r6, #1
    // bne _0225E544
    // add r0, r5, #0
    // bl ov91_0225D600
    // ldr r1, [r5, #0x18]
    // add r1, r1, r0
    // ldr r0, _0225E604 ; =0x0001869F
    // str r1, [r5, #0x18]
    // cmp r1, r0
    // ble _0225E4CE
    // str r0, [r5, #0x18]
    // ldr r0, [r5, #0x1c]
    // cmp r0, #0
    // beq _0225E4DA
    // cmp r0, #1
    // beq _0225E4E8
    // b _0225E4F6
    // ldr r0, _0225E608 ; =0x00000582
    // bl PlaySE
    // ldr r0, _0225E60C ; =0x00000583
    // bl PlaySE
    // b _0225E502
    // ldr r0, _0225E608 ; =0x00000582
    // bl PlaySE
    // ldr r0, _0225E610 ; =0x00000584
    // bl PlaySE
    // b _0225E502
    // ldr r0, _0225E608 ; =0x00000582
    // bl PlaySE
    // ldr r0, _0225E614 ; =0x00000585
    // bl PlaySE
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov91_0225E9E4
    // ldr r0, _0225E618 ; =0x00001E38
    // ldr r1, [r5, #0x14]
    // ldr r2, [r5, #0x1c]
    // ldr r3, [r5]
    // add r0, r5, r0
    // bl ov91_0225D694
    // ldr r0, [r5, #0x1c]
    // cmp r0, #0x63
    // bge _0225E522
    // add r0, r0, #1
    // str r0, [r5, #0x1c]
    // ldr r2, [r5, #0x1c]
    // ldr r0, _0225E61C ; =0x0000862C
    // cmp r2, #3
    // ldr r1, _0225E620 ; =0x00001AB4
    // bne _0225E538
    // add r0, r5, r0
    // add r1, r5, r1
    // bl ov91_02261808
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, r0
    // add r1, r5, r1
    // bl ov91_022618B0
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _0225E600 ; =0x000019CC
    // add r1, r4, #0
    // add r0, r5, r0
    // add r1, #0x2c
    // mov r6, #0
    // bl ov91_0225DFB0
    // cmp r0, #1
    // bne _0225E56E
    // mov r6, #1
    // cmp r7, #1
    // bne _0225E562
    // ldr r0, _0225E624 ; =0x00000722
    // bl PlaySE
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #1
    // bl ov91_0225E7C4
    // b _0225E5E6
    // ldr r1, [r4, #0x30]
    // ldr r0, _0225E628 ; =0xFFFCE000
    // cmp r1, r0
    // bgt _0225E5BE
    // add r0, r4, #0
    // bl ov91_0225E990
    // cmp r0, #0
    // bne _0225E5A4
    // ldr r1, _0225E628 ; =0xFFFCE000
    // ldr r0, [sp, #4]
    // mov r6, #1
    // cmp r0, r1
    // bgt _0225E598
    // ldr r3, [r5, #0x1c]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov91_0225E3F4
    // b _0225E5E6
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0
    // bl ov91_0225E7C4
    // b _0225E5E6
    // mov r0, #1
    // ldr r1, [r4, #0x30]
    // lsl r0, r0, #0xa
    // cmp r1, r0
    // bgt _0225E5E6
    // ldr r3, [r5, #0x1c]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // mov r6, #1
    // bl ov91_0225E3F4
    // b _0225E5E6
    // add r0, r4, #0
    // bl ov91_0225E9C0
    // cmp r0, #1
    // bne _0225E5E6
    // add r0, r4, #0
    // add r0, #0x2c
    // mov r6, #1
    // add r1, sp, #0x14
    // add r2, r0, #0
    // bl VEC_Subtract
    // mov r0, #0
    // add r2, r6, #0
    // str r0, [sp]
    // add r0, r4, #0
    // add r1, r5, #0
    // lsl r3, r2, #0xa
    // bl ov91_0225E7E8
    // cmp r6, #1
    // bne _0225E5FA
    // cmp r7, #1
    // bne _0225E5FA
    // mov r0, #0
    // str r0, [r5, #0x1c]
    // ldr r0, _0225E61C ; =0x0000862C
    // add r0, r5, r0
    // bl ov91_02261890
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225E600: .word 0x000019CC
    // _0225E604: .word 0x0001869F
    // _0225E608: .word 0x00000582
    // _0225E60C: .word 0x00000583
    // _0225E610: .word 0x00000584
    // _0225E614: .word 0x00000585
    // _0225E618: .word 0x00001E38
    // _0225E61C: .word 0x0000862C
    // _0225E620: .word 0x00001AB4
    // _0225E624: .word 0x00000722
    // _0225E628: .word 0xFFFCE000
    // TODO: decompile
}



void ov91_0225E62C(void) {
}



void ov91_0225E648(void) {
    // add r5, #0x4c
    // add r0, #0x4d
    // ldrb r0, [r0]
    // add r1, #0x4c
    // strb r0, [r1]
    ov91_0225E67C(r0, r0);
    // add r4, #0x44
    // add r5, #0x44
}



void ov91_0225E67C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #1]
    // add r4, r1, #0
    // cmp r0, #0
    // beq _0225E6AA
    // ldrb r0, [r5]
    // cmp r0, #3
    // bne _0225E69A
    // ldrh r0, [r5, #6]
    // cmp r0, #1
    // bne _0225E69A
    // mov r0, #4
    // strb r0, [r5]
    // b _0225E6A0
    // add r0, r5, #0
    // bl ov91_0225E400
    // ldr r0, _0225E6AC ; =0x00001AB4
    // add r1, r5, #0
    // add r0, r4, r0
    // bl ov91_02260754
    // pop {r3, r4, r5, pc}
    // _0225E6AC: .word 0x00001AB4
    // TODO: decompile
}



void ov91_0225E6B0(void) {
    // add r1, #0x4c
    // ldrb r1, [r1]
    // add r1, #0x4c
    // strb r2, [r1]
    // add r0, #0x44
}



void ov91_0225E6D0(void) {
    // add r1, #0x4c
    // ldrb r1, [r1]
    // add r0, #0x44
}



void ov91_0225E6F8(void) {
    // asr r1, r0, #0x1f
    _ll_mul((*((u16*)(r0 + 2)) << 0xc), (0x67 << 4), 0);
    // add r2, r0, r2
    // adc r1, r3
    // orr r1, r0
    // sub r0, r4, r1
    // bpl _0225E724
}



void ov91_0225E728(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov91_0225E6F8
    // add r7, r0, #0
    // ldr r0, [r5, #8]
    // asr r6, r7, #0x1f
    // asr r1, r0, #0x1f
    // add r2, r7, #0
    // add r3, r6, #0
    // bl _ll_mul
    // add r2, r0, #0
    // mov r0, #2
    // mov r3, #0
    // lsl r0, r0, #0xa
    // add r0, r2, r0
    // adc r1, r3
    // lsl r1, r1, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // str r0, [r4]
    // ldr r0, [r5, #0xc]
    // add r2, r7, #0
    // asr r1, r0, #0x1f
    // add r3, r6, #0
    // bl _ll_mul
    // add r2, r0, #0
    // mov r0, #2
    // mov r3, #0
    // lsl r0, r0, #0xa
    // add r0, r2, r0
    // adc r1, r3
    // ldr r2, _0225E7BC ; =0xFFFFECCC
    // lsl r1, r1, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // str r0, [r4, #4]
    // ldrh r0, [r5, #2]
    // asr r3, r2, #0xd
    // lsl r0, r0, #0xc
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r3, #2
    // add r2, r0, #0
    // lsl r3, r3, #0xa
    // add r3, r2, r3
    // ldr r2, _0225E7C0 ; =0x00000000
    // ldr r0, [r4, #4]
    // adc r1, r2
    // lsr r2, r3, #0xc
    // lsl r1, r1, #0x14
    // orr r2, r1
    // add r0, r0, r2
    // str r0, [r4, #4]
    // ldr r0, [r5, #0x10]
    // add r2, r7, #0
    // asr r1, r0, #0x1f
    // add r3, r6, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // str r1, [r4, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225E7BC: .word 0xFFFFECCC
    // _0225E7C0: .word 0x00000000
    // TODO: decompile
}



void ov91_0225E7C4(void) {
}



void ov91_0225E7E8(void) {
    // neg r0, r0
    *((u32*)(r0 + 8)) = *((u32*)(r0 + 8));
    // neg r0, r0
    *((u32*)(r0 + 0x10)) = *((u32*)(r0 + 0x10));
    // ldr r0, [sp, #0x20]
    MTRandom(*((u32*)(r0 + 0x10)));
    // neg r0, r2
    // neg r6, r3
    // asr r0, r2, #0x1f
    // orr r0, r3
    // add r2, r6, r2
    // adc r0, r3
    // orr r2, r0
    // and r0, r1
    // neg r0, r2
    *((u32*)(r5 + 8)) = 1;
    *((u32*)(r5 + 8)) = ((2 << 0xa) >> 0xc);
    // asr r0, r3, #0x1f
    // orr r0, r2
    // add r2, r6, r2
    // adc r0, r3
    // orr r2, r0
    // and r0, r1
    // neg r0, r2
    *((u32*)(r5 + 0x10)) = 1;
    *((u32*)(r5 + 0x10)) = ((2 << 0xa) >> 0xc);
    // asr r3, r4, #0x1f
    // asr r1, r0, #0x1f
    _ll_mul(*((u32*)(r5 + 0x14)), r0, r4, 0);
    // add r2, r0, r2
    // adc r1, r3
    // orr r1, r0
    *((u32*)(r5 + 0x14)) = ((2 << 0xa) >> 0xc);
    *((u16*)(r5 + 2)) = 0;
    // strb r0, [r5]
    // add r1, sp, #0
    ov91_0225E728(r5, ((2 << 0xa) >> 0xc), (2 << 0xa), 0);
    // add r1, sp, #0
    ov91_0225EA54(r5);
    *((u16*)(r5 + 2)) = (*((u16*)(r5 + 2)) + 1);
}



void ov91_0225E8BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r4, r1, #0
    // ldrb r1, [r5]
    // mov r6, #0
    // cmp r1, #5
    // bne _0225E980
    // add r1, sp, #4
    // ldr r7, [r5, #0x30]
    // bl ov91_0225E728
    // add r0, r5, #0
    // add r1, sp, #4
    // bl ov91_0225EA54
    // ldrh r0, [r5, #2]
    // add r1, r5, #0
    // add r1, #0x2c
    // add r0, r0, #1
    // strh r0, [r5, #2]
    // ldr r0, _0225E984 ; =0x000019CC
    // add r0, r4, r0
    // bl ov91_0225DFB0
    // cmp r0, #1
    // bne _0225E8FE
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #1
    // bl ov91_0225E7C4
    // b _0225E964
    // ldr r1, [r5, #0x30]
    // ldr r0, _0225E988 ; =0xFFFCE000
    // cmp r1, r0
    // bgt _0225E93E
    // add r0, r5, #0
    // bl ov91_0225E990
    // cmp r0, #0
    // bne _0225E926
    // ldr r0, _0225E988 ; =0xFFFCE000
    // cmp r7, r0
    // bgt _0225E91A
    // mov r6, #1
    // b _0225E930
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov91_0225E7C4
    // b _0225E930
    // ldr r1, [r5, #0x30]
    // ldr r0, _0225E98C ; =0xFFF9C000
    // cmp r1, r0
    // bgt _0225E930
    // mov r6, #1
    // mov r0, #2
    // ldr r1, [r5, #0x14]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // bgt _0225E964
    // mov r6, #1
    // b _0225E964
    // add r0, r5, #0
    // bl ov91_0225E9C0
    // cmp r0, #1
    // bne _0225E964
    // add r0, r5, #0
    // add r0, #0x2c
    // add r1, sp, #4
    // add r2, r0, #0
    // bl VEC_Subtract
    // add r0, r6, #0
    // mov r2, #1
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r3, r2, #0xa
    // bl ov91_0225E7E8
    // mov r0, #1
    // ldr r1, [r5, #0x14]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // bgt _0225E970
    // mov r6, #1
    // cmp r6, #1
    // bne _0225E980
    // ldr r3, [r4, #0x1c]
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0
    // bl ov91_0225E3F4
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225E984: .word 0x000019CC
    // _0225E988: .word 0xFFFCE000
    // _0225E98C: .word 0xFFF9C000
    // TODO: decompile
}



void ov91_0225E990(void) {
    // ldr r1, [r0, #0x40]
    // mov r0, #0x2f
    // lsl r0, r0, #0xe
    // cmp r1, r0
    // blt _0225E9A6
    // mov r0, #0xf
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // bgt _0225E9A6
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov91_0225E9AC(void) {
    // ldr r1, [r0, #0x40]
    // mov r0, #0x1e
    // lsl r0, r0, #0xe
    // cmp r1, r0
    // bgt _0225E9BA
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov91_0225E9C0(void) {
    *((u32*)(1 + 0x3c)) = 1;
}



void ov91_0225E9E4(void) {
    // strb r2, [r0]
    *((u16*)(r0 + 0x38)) = 8;
    *((u16*)(r0 + 0x3a)) = *((u32*)(r1 + 0x1c));
}



void ov91_0225E9F4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // add r6, r1, #0
    // add r1, sp, #0xc
    // add r5, r0, #0
    // bl ov91_0225E728
    // ldr r0, _0225EA50 ; =0x000019CC
    // add r1, r5, #0
    // add r0, r6, r0
    // add r1, #0x2c
    // add r2, sp, #0xc
    // add r3, sp, #0
    // bl ov91_0225DE8C
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, sp, #0xc
    // bl ov91_0225EA54
    // cmp r4, #3
    // beq _0225EA24
    // cmp r4, #1
    // bne _0225EA2C
    // add r0, r5, #0
    // add r1, sp, #0
    // bl ov91_0225EA54
    // ldrh r0, [r5, #2]
    // add r0, r0, #1
    // strh r0, [r5, #2]
    // mov r0, #0x38
    // ldrsh r1, [r5, r0]
    // sub r1, r1, #1
    // strh r1, [r5, #0x38]
    // ldrsh r0, [r5, r0]
    // cmp r0, #0
    // bgt _0225EA4C
    // ldrh r3, [r5, #0x3a]
    // add r0, r6, #0
    // add r1, r5, #0
    // mov r2, #1
    // bl ov91_0225E3F4
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // _0225EA50: .word 0x000019CC
    // TODO: decompile
}



void ov91_0225EA54(void) {
    // add r0, #0x2c
    VEC_Add(r0);
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #8]
    // add r0, sp, #0
    VEC_Mag(*((u32*)(r4 + 0x34)));
    *((u32*)(r4 + 0x40)) = r0;
}



void ov91_0225EA7C(void) {
    // push {r3, lr}
    // ldr r1, _0225EA94 ; =gSystem + 0x40
    // ldrh r1, [r1, #0x26]
    // cmp r1, #0
    // bne _0225EA8C
    // bl ov91_0225EA98
    // pop {r3, pc}
    // bl ov91_0225EC7C
    // pop {r3, pc}
    // nop
    // _0225EA94: .word gSystem + 0x40
    // TODO: decompile
}



void ov91_0225EA98(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x30
    // add r5, r0, #0
    // ldr r0, [r5, #0x20]
    // mov r4, #0
    // cmp r0, #0
    // bne _0225EAB0
    // ldr r0, [r5, #0x48]
    // add sp, #0x30
    // add r0, r0, #1
    // str r0, [r5, #0x48]
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r0, #0x20
    // add r1, sp, #4
    // bl ov91_0225EE48
    // cmp r0, #0
    // bne _0225EAC2
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r0, #0x20
    // add r1, sp, #0
    // bl ov91_0225EE64
    // cmp r0, #0
    // bne _0225EAD4
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r0, #0x20
    // bl ov91_0225EE88
    // add r6, r0, #0
    // cmp r6, #2
    // bge _0225EAE4
    // b _0225EC44
    // ldr r0, [r5, #0x14]
    // add r1, sp, #0
    // strh r0, [r1, #8]
    // mov r3, #0
    // strh r3, [r1, #0xa]
    // mov r0, #4
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r1, r3]
    // add r1, r6, #0
    // sub r0, r2, r0
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // asr r0, r0, #4
    // str r0, [sp, #0xc]
    // add r1, sp, #0
    // mov r0, #6
    // ldrsh r2, [r1, r0]
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // add r1, r6, #0
    // sub r0, r2, r0
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // asr r0, r0, #4
    // str r0, [sp, #0x14]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // add r0, sp, #0xc
    // bl VEC_Mag
    // mov r1, #2
    // lsl r1, r1, #0xe
    // cmp r0, r1
    // bge _0225EB74
    // cmp r0, #0
    // beq _0225EB70
    // add r0, sp, #0xc
    // add r1, r0, #0
    // bl VEC_Normalize
    // ldr r3, [sp, #0xc]
    // asr r1, r3, #0x1f
    // lsr r0, r3, #0x11
    // lsl r2, r1, #0xf
    // orr r2, r0
    // mov r0, #2
    // lsl r3, r3, #0xf
    // mov r1, #0
    // lsl r0, r0, #0xa
    // add r3, r3, r0
    // adc r2, r1
    // lsl r2, r2, #0x14
    // lsr r3, r3, #0xc
    // orr r3, r2
    // ldr r2, [sp, #0x14]
    // str r3, [sp, #0xc]
    // asr r3, r2, #0x1f
    // lsr r6, r2, #0x11
    // lsl r3, r3, #0xf
    // orr r3, r6
    // lsl r2, r2, #0xf
    // add r2, r2, r0
    // adc r3, r1
    // lsl r0, r3, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // str r1, [sp, #0x14]
    // b _0225EBBC
    // mov r4, #1
    // b _0225EBBC
    // ldr r1, _0225EC6C ; =0x0001E200
    // cmp r0, r1
    // ble _0225EBBC
    // add r0, sp, #0xc
    // add r1, r0, #0
    // bl VEC_Normalize
    // ldr r0, [sp, #0xc]
    // ldr r2, _0225EC6C ; =0x0001E200
    // asr r1, r0, #0x1f
    // mov r3, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #0xc]
    // ldr r2, _0225EC6C ; =0x0001E200
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // str r1, [sp, #0x14]
    // cmp r4, #0
    // bne _0225EC46
    // mov r0, #0x26
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x10]
    // add r0, sp, #0xc
    // bl VEC_Mag
    // ldr r2, _0225EC70 ; =0x0000099A
    // asr r1, r0, #0x1f
    // mov r3, #0
    // str r0, [sp, #0x18]
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // add r0, sp, #0xc
    // str r1, [sp, #0x18]
    // add r1, r0, #0
    // bl VEC_Normalize
    // add r2, sp, #0
    // mov r0, #0
    // mov r1, #2
    // ldrsh r0, [r2, r0]
    // ldrsh r1, [r2, r1]
    // add r2, sp, #0x1c
    // bl ov91_02260400
    // mov r0, #0
    // str r0, [sp, #0x20]
    // add r2, sp, #0
    // add r0, sp, #0x1c
    // ldrh r2, [r2, #8]
    // ldr r3, [r5, #0x10]
    // add r1, r0, #0
    // bl ov91_0226045C
    // add r2, sp, #0
    // add r0, sp, #0xc
    // ldrh r2, [r2, #8]
    // ldr r3, [r5, #0x10]
    // add r1, r0, #0
    // bl ov91_0226045C
    // ldr r0, [r5, #0x1c]
    // cmp r0, #5
    // blt _0225EC2E
    // mov r0, #1
    // str r0, [sp, #0x2c]
    // b _0225EC32
    // mov r0, #0
    // str r0, [sp, #0x2c]
    // add r0, r5, #0
    // add r1, sp, #8
    // mov r2, #1
    // bl ov91_0225E2E4
    // ldr r0, _0225EC74 ; =0x0000064F
    // bl PlaySE
    // b _0225EC46
    // mov r4, #1
    // cmp r4, #1
    // bne _0225EC5C
    // add r3, sp, #0
    // mov r1, #0
    // mov r2, #2
    // ldr r0, _0225EC78 ; =0x0000854C
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, r5, r0
    // bl ov91_02260E88
    // add r0, r5, #0
    // bl ov91_0225EE9C
    // mov r0, #0
    // str r0, [r5, #0x48]
    // add sp, #0x30
    // pop {r4, r5, r6, pc}
    // nop
    // _0225EC6C: .word 0x0001E200
    // _0225EC70: .word 0x0000099A
    // _0225EC74: .word 0x0000064F
    // _0225EC78: .word 0x0000854C
    // TODO: decompile
}



void ov91_0225EC7C(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r1, [r4, #0x20]
    // cmp r1, #0
    // bne _0225ECA4
    // bl ov91_0225ED6C
    // cmp r0, #1
    // bne _0225ECA4
    // mov r0, #1
    // str r0, [r4, #0x20]
    // ldr r0, _0225ED5C ; =0x00008544
    // add r0, r4, r0
    // bl ov91_02260CB4
    // ldr r0, _0225ED60 ; =0x000021A8
    // add r0, r4, r0
    // bl ov91_022614D4
    // ldr r0, [r4, #0x20]
    // cmp r0, #1
    // bne _0225ED56
    // ldr r1, _0225ED64 ; =0x000086EC
    // ldrh r0, [r4, r1]
    // cmp r0, #1
    // bne _0225ECDA
    // add r0, r1, #2
    // ldrh r0, [r4, r0]
    // add r2, sp, #0
    // mov r3, sp
    // strh r0, [r2]
    // add r0, r1, #4
    // ldrh r0, [r4, r0]
    // sub r3, r3, #4
    // add r4, #0x20
    // strh r0, [r2, #2]
    // ldrh r1, [r2]
    // add r0, r4, #0
    // strh r1, [r3]
    // ldrh r1, [r2, #2]
    // strh r1, [r3, #2]
    // ldr r1, [r3]
    // bl ov91_0225EDC8
    // add sp, #4
    // pop {r3, r4, pc}
    // cmp r0, #2
    // blo _0225ED34
    // add r0, r1, #2
    // ldrh r0, [r4, r0]
    // add r2, sp, #0
    // mov r3, sp
    // strh r0, [r2]
    // add r0, r1, #4
    // ldrh r0, [r4, r0]
    // sub r3, r3, #4
    // strh r0, [r2, #2]
    // ldrh r1, [r2]
    // add r0, r4, #0
    // add r0, #0x20
    // strh r1, [r3]
    // ldrh r1, [r2, #2]
    // strh r1, [r3, #2]
    // ldr r1, [r3]
    // bl ov91_0225EDC8
    // ldr r0, _0225ED64 ; =0x000086EC
    // ldrh r1, [r4, r0]
    // sub r1, r1, #1
    // lsl r1, r1, #3
    // add r3, r4, r1
    // add r1, r0, #2
    // ldrh r2, [r3, r1]
    // add r1, sp, #0
    // add r0, r0, #4
    // strh r2, [r1]
    // ldrh r0, [r3, r0]
    // mov r3, sp
    // sub r3, r3, #4
    // strh r0, [r1, #2]
    // ldrh r2, [r1]
    // add r4, #0x20
    // add r0, r4, #0
    // strh r2, [r3]
    // ldrh r1, [r1, #2]
    // strh r1, [r3, #2]
    // ldr r1, [r3]
    // bl ov91_0225EDC8
    // add sp, #4
    // pop {r3, r4, pc}
    // ldr r0, _0225ED68 ; =gSystem + 0x40
    // mov r3, sp
    // ldrh r2, [r0, #0x20]
    // add r1, sp, #0
    // sub r3, r3, #4
    // strh r2, [r1]
    // ldrh r0, [r0, #0x22]
    // add r4, #0x20
    // strh r0, [r1, #2]
    // ldrh r2, [r1]
    // add r0, r4, #0
    // strh r2, [r3]
    // ldrh r1, [r1, #2]
    // strh r1, [r3, #2]
    // ldr r1, [r3]
    // bl ov91_0225EDC8
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _0225ED5C: .word 0x00008544
    // _0225ED60: .word 0x000021A8
    // _0225ED64: .word 0x000086EC
    // _0225ED68: .word gSystem + 0x40
    // TODO: decompile
}



void ov91_0225ED6C(void) {
    // push {r3, lr}
    // ldr r0, [r0, #0x48]
    // cmp r0, #2
    // bhs _0225ED78
    // mov r0, #0
    // pop {r3, pc}
    // ldr r1, _0225EDA8 ; =gSystem + 0x40
    // mov r0, #0x80
    // ldrh r2, [r1, #0x20]
    // ldrh r1, [r1, #0x22]
    // sub r3, r0, r2
    // sub r0, #0xe0
    // sub r2, r0, r1
    // add r1, r3, #0
    // add r0, r2, #0
    // mul r1, r3
    // mul r0, r2
    // add r0, r1, r0
    // lsl r0, r0, #0xc
    // bl FX_Sqrt
    // asr r1, r0, #0xc
    // ldr r0, _0225EDAC ; =0x0000011E
    // cmp r1, r0
    // bgt _0225EDA2
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _0225EDA8: .word gSystem + 0x40
    // _0225EDAC: .word 0x0000011E
    // TODO: decompile
}



void ov91_0225EDB0(void) {
}



void ov91_0225EDC8(void) {
    // sub r2, r2, r3
    // ror r2, r1
    // add r2, r3, r2
    // add r1, sp, #0
    ov91_0225EE18(*((u16*)(r0 + 0x24)), ((*((u16*)(r0 + 0x26)) + 1) << 0x1d), ((*((u16*)(r0 + 0x26)) + 1) >> 0x1f));
    // add r2, r4, r0
    // add r0, sp, #0x10
    *((u16*)(r2 + 4)) = *((u16*)((*((u16*)(r4 + 0x26)) << 2) + 4));
    *((u16*)(r2 + 6)) = *((u16*)((*((u16*)(r4 + 0x26)) << 2) + 6));
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u16*)(r4 + 0x26)) = 0x1d;
}



void ov91_0225EE18(void) {
    // add r3, r0, r2
    // strh r2, [r1]
    *((u16*)(r1 + 2)) = *((u16*)(*((u16*)(r0 + 0x24)) + 6));
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    *((u16*)(0 + 0x24)) = 0x1d;
}



void ov91_0225EE48(void) {
    // add r2, r0, r2
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = *((u16*)((*((u16*)(r0 + 0x24)) << 2) + 6));
}



void ov91_0225EE64(void) {
    // bpl _0225EE76
    // add r2, #8
    // add r2, r0, r2
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = *((u16*)(((*((u16*)(r0 + 0x26)) - 1) << 2) + 6));
}



void ov91_0225EE88(void) {
    // sub r0, r0, r1
    // add r0, r0, r2
    // sub r0, r2, r1
}



void ov91_0225EE9C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [r4, #0x20]
    // add r0, r4, #0
    // add r0, #0x20
    // bl ov91_0225EDB0
    // ldr r0, _0225EEB8 ; =0x00008544
    // add r0, r4, r0
    // bl ov91_02260D00
    // pop {r4, pc}
    // nop
    // _0225EEB8: .word 0x00008544
    // TODO: decompile
}



void ov91_0225EEBC(void) {
}



void ov91_0225EED0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x30
    // add r6, r2, #0
    // add r4, r1, #0
    // add r5, r0, #0
    // add r2, r3, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // add r3, sp, #0x18
    // bl ov91_0225F05C
    // add r2, sp, #0x30
    // ldrh r2, [r2, #0x10]
    // add r0, r4, #0
    // add r1, r6, #0
    // add r3, sp, #0
    // bl ov91_0225F05C
    // add r2, r5, #0
    // add r3, sp, #0x18
    // add r2, #0x18
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r3, sp, #0x18
    // add r2, r5, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r1, [sp]
    // ldr r0, [sp, #0x18]
    // sub r0, r1, r0
    // str r0, [r5, #0x30]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x20]
    // sub r0, r1, r0
    // str r0, [r5, #0x38]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x28]
    // sub r0, r1, r0
    // str r0, [r5, #0x40]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x2c]
    // sub r0, r1, r0
    // str r0, [r5, #0x44]
    // ldr r2, [sp, #4]
    // ldr r0, _0225EF6C ; =0x0000FFFF
    // ldr r3, [sp, #0x1c]
    // add r0, r2, r0
    // sub r1, r0, r3
    // sub r0, r2, r3
    // cmp r0, r1
    // bge _0225EF4A
    // str r0, [r5, #0x34]
    // b _0225EF4C
    // str r1, [r5, #0x34]
    // ldr r2, [sp, #0xc]
    // ldr r0, _0225EF6C ; =0x0000FFFF
    // ldr r3, [sp, #0x24]
    // add r0, r2, r0
    // sub r1, r0, r3
    // sub r0, r2, r3
    // cmp r0, r1
    // bge _0225EF60
    // str r0, [r5, #0x3c]
    // b _0225EF62
    // str r1, [r5, #0x3c]
    // mov r0, #0
    // str r0, [r5, #0x48]
    // add sp, #0x30
    // pop {r4, r5, r6, pc}
    // nop
    // _0225EF6C: .word 0x0000FFFF
    // TODO: decompile
}



void ov91_0225EF70(void) {
    *((u32*)(1 + 0x48)) = (*((u32*)(r0 + 0x48)) + 1);
    // mul r2, r1
    // asr r1, r2, #3
    // add r1, r2, r1
    // asr r1, r1, #4
    // add r1, r3, r1
    // str r1, [r0]
    // mul r3, r1
    // asr r1, r3, #3
    // add r1, r3, r1
    // asr r1, r1, #4
    // add r1, r4, r1
    *((u32*)(1 + 4)) = (*((u32*)(1 + 0x48)) >> 0x1c);
    // mul r3, r1
    // asr r1, r3, #3
    // add r1, r3, r1
    // asr r1, r1, #4
    // add r1, r4, r1
    *((u32*)(1 + 8)) = (*((u32*)(1 + 0x48)) >> 0x1c);
    // mul r3, r1
    // asr r1, r3, #3
    // add r1, r3, r1
    // asr r1, r1, #4
    // add r1, r4, r1
    *((u32*)(1 + 0xc)) = (*((u32*)(1 + 0x48)) >> 0x1c);
    // mul r3, r1
    // asr r1, r3, #3
    // add r1, r3, r1
    // asr r1, r1, #4
    // add r1, r4, r1
    *((u32*)(1 + 0x10)) = (*((u32*)(1 + 0x48)) >> 0x1c);
    // mul r3, r1
    // asr r1, r3, #3
    // add r1, r3, r1
    // asr r1, r1, #4
    // add r1, r4, r1
    *((u32*)(1 + 0x14)) = (*((u32*)(1 + 0x48)) >> 0x1c);
}



void ov91_0225F008(void) {
}



void ov91_0225F010(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, [r4, #4]
    // add r5, r0, #0
    // ldr r0, _0225F054 ; =0x000019CC
    // lsl r1, r1, #0x10
    // add r0, r5, r0
    // lsr r1, r1, #0x10
    // bl ov91_0225E1E0
    // ldr r0, _0225F058 ; =0x00001AB4
    // ldr r1, [r4, #8]
    // add r0, r5, r0
    // bl ov91_0226137C
    // ldr r1, [r4, #0xc]
    // ldr r0, _0225F058 ; =0x00001AB4
    // lsl r1, r1, #0x10
    // add r0, r5, r0
    // lsr r1, r1, #0x10
    // bl ov91_02261384
    // ldr r0, _0225F054 ; =0x000019CC
    // ldr r1, [r4, #0x10]
    // add r0, r5, r0
    // bl ov91_0225E1E4
    // ldr r0, _0225F054 ; =0x000019CC
    // ldr r1, [r4, #0x14]
    // add r0, r5, r0
    // bl ov91_0225E09C
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F054: .word 0x000019CC
    // _0225F058: .word 0x00001AB4
    // TODO: decompile
}



void ov91_0225F05C(void) {
    GF_AssertFail(*((u32*)r0));
    // mul r0, r6
    // add r3, r1, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    *((u32*)(r4 + 4)) = ((*((u32*)(r4 + 4)) << 0x10) >> 0x10);
    *((u32*)(r4 + 0xc)) = ((*((u32*)(r4 + 0xc)) << 0x10) >> 0x10);
    // ldrb r0, [r7]
    // sub r2, r0, r1
    // bpl _0225F0A6
    // mul r0, r2
    // add r0, r1, r0
    *((u32*)(r4 + 0x14)) = *((u32*)(0x18 + 0x14));
    // neg r0, r0
    *((u32*)(r4 + 4)) = *((u32*)(r4 + 4));
}



void ov91_0225F0C0(void) {
    memset(0, 0x40);
    NARC_New(0xc8, r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // add r1, #0xd0
    // ldr r0, [r4, r1]
    AddCharResObjFromOpenNarc(2, r0, 0x15, 0);
    // str r0, [r5]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // add r1, #0xd4
    // ldr r0, [r4, r1]
    AddPlttResObjFromOpenNarc(2, r7, 0x14, 0);
    *((u32*)(r5 + 4)) = r0;
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // add r1, #0xd8
    // ldr r0, [r4, r1]
    AddCellOrAnimResObjFromOpenNarc(2, r7, 0x16, 0);
    *((u32*)(r5 + 8)) = r0;
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // add r1, #0xdc
    // ldr r0, [r4, r1]
    AddCellOrAnimResObjFromOpenNarc(3, r7, 0x17, 0);
    *((u32*)(r5 + 0xc)) = r0;
    sub_0200AE18(*((u32*)r5));
    GF_AssertFail();
    sub_0200B00C(*((u32*)(r5 + 4)));
    GF_AssertFail();
    sub_0200A740(*((u32*)r5));
    sub_0200A740(*((u32*)(r5 + 4)));
    // str r1, [sp]
    // sub r0, #0x79
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0xd0
    // ldr r2, [r4, r2]
    // str r2, [sp, #0x14]
    // add r2, #0xd4
    // ldr r2, [r4, r2]
    // str r2, [sp, #0x18]
    // add r2, #0xd8
    // ldr r2, [r4, r2]
    // str r2, [sp, #0x1c]
    // add r2, #0xdc
    // ldr r2, [r4, r2]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, #0x10
    CreateSpriteResourcesHeader(r5, 0x78, 0x78, 0x78);
    // str r0, [sp, #0x2c]
    // add r0, #0x10
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // add r0, sp, #0x2c
    // str r6, [sp, #0x48]
    Sprite_Create(2);
    *((u32*)(r5 + 0x34)) = r0;
    Sprite_SetDrawFlag(0);
    NARC_Delete(r7);
}



void ov91_0225F1E8(void) {
    Sprite_Delete(*((u32*)(r0 + 0x34)));
    sub_0200AEB0(*((u32*)r5));
    sub_0200B0A8(*((u32*)(r5 + 4)));
    // ldr r0, [r4, r0]
    DestroySingle2DGfxResObj((0x52 << 2), *((u32*)r5));
    // ldr r0, [r4, r0]
    DestroySingle2DGfxResObj((0x53 << 2), *((u32*)(r5 + 4)));
    // ldr r0, [r4, r0]
    DestroySingle2DGfxResObj((0x15 << 4), *((u32*)(r5 + 8)));
    // ldr r0, [r4, r0]
    DestroySingle2DGfxResObj((0x55 << 2), *((u32*)(r5 + 0xc)));
    memset(r5, 0, 0x40);
}



void ov91_0225F23C(void) {
    // add r2, r0, #0
    // mov r1, #1
    // add r2, #0x38
    // strb r1, [r2]
    // add r2, r0, #0
    // mov r3, #0
    // add r2, #0x3a
    // strb r3, [r2]
    // add r2, r0, #0
    // add r2, #0x39
    // strb r3, [r2]
    // ldr r3, _0225F258 ; =Sprite_SetDrawFlag
    // ldr r0, [r0, #0x34]
    // bx r3
    // _0225F258: .word Sprite_SetDrawFlag
    // TODO: decompile
}



void ov91_0225F25C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r4, r0, #0
    // add r0, #0x3a
    // ldrb r0, [r0]
    // add r5, r1, #0
    // cmp r0, #3
    // bhi _0225F36A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225F278: ; jump table
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl Sprite_SetAnimationFrame
    // ldr r0, _0225F37C ; =0x00008544
    // add r0, r5, r0
    // bl ov91_02260CB4
    // ldr r0, _0225F37C ; =0x00008544
    // mov r1, #0x80
    // add r0, r5, r0
    // mov r2, #0xb1
    // bl ov91_02260CE0
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x3b
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x3a
    // ldrb r0, [r0]
    // add r4, #0x3a
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0225F36A
    // mov r1, #2
    // ldr r0, [r4, #0x34]
    // lsl r1, r1, #0xc
    // bl Sprite_UpdateAnim
    // ldr r0, [r4, #0x34]
    // bl Sprite_GetAnimationFrame
    // add r6, r0, #0
    // cmp r6, #0xa
    // beq _0225F2CE
    // cmp r6, #0xb
    // beq _0225F2FA
    // b _0225F32E
    // add r0, r4, #0
    // add r0, #0x3b
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _0225F32E
    // mov r0, #0x40
    // str r0, [sp]
    // mov r0, #2
    // mov r1, #0x80
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r2, #0x60
    // add r3, r1, #0
    // bl ov91_0225D500
    // ldr r0, _0225F380 ; =0x0000064F
    // bl PlaySE
    // mov r0, #1
    // add r4, #0x3b
    // strb r0, [r4]
    // b _0225F32E
    // add r0, r4, #0
    // add r0, #0x39
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x39
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x39
    // ldrb r0, [r0]
    // cmp r0, #2
    // blo _0225F31A
    // mov r0, #3
    // add r4, #0x3a
    // strb r0, [r4]
    // b _0225F326
    // add r0, r4, #0
    // mov r1, #2
    // add r0, #0x3a
    // strb r1, [r0]
    // mov r0, #0x10
    // str r0, [r4, #0x3c]
    // ldr r0, _0225F37C ; =0x00008544
    // add r0, r5, r0
    // bl ov91_02260D00
    // ldr r2, _0225F384 ; =ov91_02261C84
    // lsl r3, r6, #1
    // ldr r0, _0225F37C ; =0x00008544
    // ldrsh r2, [r2, r3]
    // add r0, r5, r0
    // mov r1, #0x80
    // bl ov91_02260CE0
    // b _0225F36A
    // ldr r0, [r4, #0x3c]
    // sub r0, r0, #1
    // str r0, [r4, #0x3c]
    // cmp r0, #0
    // bgt _0225F36A
    // mov r0, #0
    // add r4, #0x3a
    // strb r0, [r4]
    // b _0225F36A
    // add r0, r5, #0
    // bl ov91_0225E6D0
    // cmp r0, #0
    // bne _0225F36A
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add sp, #8
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // bl ov91_0225E40C
    // add r0, r5, #0
    // bl ov91_0225E62C
    // mov r0, #0
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _0225F37C: .word 0x00008544
    // _0225F380: .word 0x0000064F
    // _0225F384: .word ov91_02261C84
    // TODO: decompile
}



void ov91_0225F388(void) {
    // add r3, r0, #0
    // mov r2, #0x18
    // mov r1, #0
    // strb r1, [r3]
    // add r3, r3, #1
    // sub r2, r2, #1
    // bne _0225F38E
    // ldr r1, _0225F39C ; =0x0000FFFF
    // str r1, [r0, #0x14]
    // bx lr
    // _0225F39C: .word 0x0000FFFF
    // TODO: decompile
}



void ov91_0225F3A0(void) {
    // push {r3, r4}
    // lsl r3, r2, #2
    // str r1, [r0, r3]
    // mov r3, #1
    // ldr r4, [r0, #0x10]
    // lsl r3, r2
    // orr r3, r4
    // str r3, [r0, #0x10]
    // cmp r1, #0
    // beq _0225F3CC
    // ldr r4, [r0, #0x14]
    // ldr r3, _0225F3D0 ; =0x0000FFFF
    // cmp r4, r3
    // beq _0225F3CA
    // lsl r3, r4, #2
    // ldr r3, [r0, r3]
    // cmp r3, r1
    // bhs _0225F3CC
    // str r2, [r0, #0x14]
    // pop {r3, r4}
    // bx lr
    // str r2, [r0, #0x14]
    // pop {r3, r4}
    // bx lr
    // _0225F3D0: .word 0x0000FFFF
    // TODO: decompile
}



void ov91_0225F3D4(void) {
    // mov r1, #0
    // str r1, [r0, #0x10]
    // ldr r1, _0225F3E0 ; =0x0000FFFF
    // str r1, [r0, #0x14]
    // bx lr
    // nop
    // _0225F3E0: .word 0x0000FFFF
    // TODO: decompile
}



void ov91_0225F3E4(void) {
    // ldr r0, [r0, #0x14]
    // bx lr
    // TODO: decompile
}



void ov91_0225F3E8(void) {
    // lsl r2, r3
    // tst r2, r5
}



void ov91_0225F414(void) {
}



void ov91_0225F434(void) {
    // push {r3, lr}
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _0225F4A4 ; =0x04000008
    // mov r1, #3
    // ldrh r2, [r0]
    // bic r2, r1
    // mov r1, #2
    // orr r1, r2
    // strh r1, [r0]
    // add r0, #0x58
    // ldrh r2, [r0]
    // ldr r1, _0225F4A8 ; =0xFFFFCFFD
    // and r2, r1
    // strh r2, [r0]
    // ldrh r3, [r0]
    // add r2, r1, #2
    // and r3, r2
    // mov r2, #0x10
    // orr r2, r3
    // strh r2, [r0]
    // ldrh r3, [r0]
    // ldr r2, _0225F4AC ; =0x0000CFFB
    // and r2, r3
    // strh r2, [r0]
    // add r2, r1, #2
    // ldrh r3, [r0]
    // add r1, r1, #2
    // and r3, r2
    // mov r2, #8
    // orr r2, r3
    // strh r2, [r0]
    // ldrh r2, [r0]
    // and r2, r1
    // mov r1, #0x20
    // orr r1, r2
    // strh r1, [r0]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl G3X_SetFog
    // mov r1, #0
    // ldr r0, _0225F4B0 ; =0x00006B5A
    // ldr r2, _0225F4B4 ; =0x00007FFF
    // mov r3, #0x3f
    // str r1, [sp]
    // bl G3X_SetClearColor
    // ldr r1, _0225F4B8 ; =0xBFFF0000
    // ldr r0, _0225F4BC ; =0x04000580
    // str r1, [r0]
    // pop {r3, pc}
    // _0225F4A4: .word 0x04000008
    // _0225F4A8: .word 0xFFFFCFFD
    // _0225F4AC: .word 0x0000CFFB
    // _0225F4B0: .word 0x00006B5A
    // _0225F4B4: .word 0x00007FFF
    // _0225F4B8: .word 0xBFFF0000
    // _0225F4BC: .word 0x04000580
    // TODO: decompile
}



void ov91_0225F4C0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #4
    // str r0, [sp]
    // ldr r0, _0225F4F4 ; =ov91_0225F434
    // add r6, r1, #0
    // add r7, r2, #0
    // add r4, r3, #0
    // mov r1, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #1
    // add r3, r1, #0
    // bl GF_3DVramMan_Create
    // str r0, [r5, #0x18]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // add r3, r4, #0
    // bl ov91_0225FD2C
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225F4F4: .word ov91_0225F434
    // TODO: decompile
}



void ov91_0225F4F8(void) {
}



void ov91_0225F508(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, _0225F638 ; =0x000086CC
    // mov r2, #0x20
    // add r0, r5, r0
    // add r4, r1, #0
    // bl HeapExp_FndInitAllocator
    // bl ov91_0225F414
    // ldr r0, _0225F63C ; =0x00001AB4
    // ldr r1, [r5, #0x10]
    // ldr r2, [r5, #0x14]
    // add r0, r5, r0
    // add r3, r4, #0
    // bl ov91_0225F4C0
    // ldr r0, _0225F63C ; =0x00001AB4
    // add r1, r4, #0
    // add r0, r5, r0
    // bl ov91_0225F878
    // ldr r0, _0225F63C ; =0x00001AB4
    // add r1, r4, #0
    // add r0, r5, r0
    // bl ov91_0225FA9C
    // ldr r0, _0225F63C ; =0x00001AB4
    // add r1, r4, #0
    // add r0, r5, r0
    // bl ov91_0225FCD8
    // mov r0, #0xbd
    // add r1, r4, #0
    // bl NARC_New
    // add r6, r0, #0
    // ldr r0, _0225F63C ; =0x00001AB4
    // add r1, r6, #0
    // add r0, r5, r0
    // add r2, r4, #0
    // bl ov91_0225FB80
    // ldr r0, [r5, #0x14]
    // ldr r1, _0225F63C ; =0x00001AB4
    // str r0, [sp]
    // ldr r0, _0225F638 ; =0x000086CC
    // str r4, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp, #8]
    // ldr r0, _0225F640 ; =0x00001C54
    // ldr r3, [r5, #0x10]
    // add r0, r5, r0
    // add r1, r5, r1
    // add r2, r6, #0
    // bl ov91_02260F50
    // ldr r0, _0225F644 ; =0x00001F74
    // ldr r3, _0225F638 ; =0x000086CC
    // add r0, r5, r0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r5, r3
    // bl ov91_0225FF00
    // ldr r0, _0225F63C ; =0x00001AB4
    // add r1, r6, #0
    // add r0, r5, r0
    // add r2, r4, #0
    // bl ov91_022604F4
    // ldr r0, _0225F63C ; =0x00001AB4
    // ldr r1, _0225F648 ; =0x00008544
    // ldr r2, [r5, #0x14]
    // add r0, r5, r0
    // add r1, r5, r1
    // add r3, r4, #0
    // bl ov91_02260C48
    // ldr r0, _0225F63C ; =0x00001AB4
    // ldr r1, _0225F64C ; =0x0000854C
    // ldr r2, [r5, #0x14]
    // add r0, r5, r0
    // add r1, r5, r1
    // add r3, r4, #0
    // bl ov91_02260D14
    // ldr r0, _0225F63C ; =0x00001AB4
    // ldr r2, [r5, #0x14]
    // add r0, r5, r0
    // add r1, r6, #0
    // add r3, r4, #0
    // bl ov91_0225FDE0
    // ldr r0, [r5, #0x14]
    // ldr r1, _0225F63C ; =0x00001AB4
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r4, [sp, #8]
    // ldr r2, _0225F650 ; =0x0000877C
    // ldr r0, _0225F654 ; =0x00001F38
    // ldr r2, [r5, r2]
    // ldr r3, [r5, #0x10]
    // add r0, r5, r0
    // add r1, r5, r1
    // bl ov91_0225D8F0
    // ldr r0, _0225F63C ; =0x00001AB4
    // ldr r1, [r5, #0x10]
    // ldr r2, [r5, #0x14]
    // add r0, r5, r0
    // add r3, r4, #0
    // bl ov91_0225DBD0
    // str r4, [sp]
    // ldr r0, _0225F658 ; =0x00001E38
    // ldr r1, _0225F63C ; =0x00001AB4
    // ldr r2, [r5, #0x10]
    // ldr r3, [r5, #0x14]
    // add r0, r5, r0
    // add r1, r5, r1
    // bl ov91_0225D628
    // ldr r1, [r5, #0x14]
    // ldr r0, _0225F65C ; =0x000021A8
    // lsl r1, r1, #0x18
    // add r0, r5, r0
    // lsr r1, r1, #0x18
    // bl ov91_022613AC
    // ldr r0, _0225F660 ; =0x0000862C
    // ldr r1, _0225F63C ; =0x00001AB4
    // add r0, r5, r0
    // add r1, r5, r1
    // add r2, r6, #0
    // add r3, r4, #0
    // bl ov91_02261580
    // add r0, r6, #0
    // bl NARC_Delete
    // ldr r0, _0225F664 ; =0x00001AD0
    // add r1, r4, #0
    // ldr r0, [r5, r0]
    // bl ov90_02258BD4
    // ldr r1, _0225F668 ; =0x000021A4
    // str r0, [r5, r1]
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0225F638: .word 0x000086CC
    // _0225F63C: .word 0x00001AB4
    // _0225F640: .word 0x00001C54
    // _0225F644: .word 0x00001F74
    // _0225F648: .word 0x00008544
    // _0225F64C: .word 0x0000854C
    // _0225F650: .word 0x0000877C
    // _0225F654: .word 0x00001F38
    // _0225F658: .word 0x00001E38
    // _0225F65C: .word 0x000021A8
    // _0225F660: .word 0x0000862C
    // _0225F664: .word 0x00001AD0
    // _0225F668: .word 0x000021A4
    // TODO: decompile
}



void ov91_0225F66C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0225F71C ; =0x0000862C
    // ldr r1, _0225F720 ; =0x00001AB4
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_02261790
    // ldr r0, _0225F724 ; =0x00001E38
    // ldr r1, _0225F720 ; =0x00001AB4
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_0225D67C
    // ldr r0, _0225F720 ; =0x00001AB4
    // ldr r1, [r4, #0x10]
    // add r0, r4, r0
    // bl ov91_0225DBE0
    // ldr r0, _0225F728 ; =0x00001F38
    // ldr r1, _0225F720 ; =0x00001AB4
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_0225DB0C
    // ldr r0, _0225F720 ; =0x00001AB4
    // add r0, r4, r0
    // bl ov91_0225FEFC
    // ldr r0, _0225F720 ; =0x00001AB4
    // ldr r1, _0225F72C ; =0x0000854C
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_02260D80
    // ldr r0, _0225F730 ; =0x00008544
    // add r0, r4, r0
    // bl ov91_02260CA8
    // ldr r0, _0225F720 ; =0x00001AB4
    // add r0, r4, r0
    // bl ov91_0226066C
    // ldr r0, _0225F734 ; =0x00001F74
    // ldr r1, _0225F738 ; =0x000086CC
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov91_022600FC
    // ldr r0, _0225F73C ; =0x00001C54
    // ldr r1, _0225F720 ; =0x00001AB4
    // ldr r2, _0225F738 ; =0x000086CC
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, r2
    // bl ov91_02261070
    // ldr r0, _0225F720 ; =0x00001AB4
    // add r0, r4, r0
    // bl ov91_0225FC84
    // ldr r0, _0225F740 ; =0x000021A4
    // ldr r0, [r4, r0]
    // bl ov90_02258C38
    // ldr r0, _0225F720 ; =0x00001AB4
    // add r0, r4, r0
    // bl ov91_0225FA60
    // ldr r0, _0225F720 ; =0x00001AB4
    // add r0, r4, r0
    // bl ov91_0225FB48
    // ldr r0, _0225F720 ; =0x00001AB4
    // add r0, r4, r0
    // bl ov91_0225FD0C
    // ldr r0, _0225F720 ; =0x00001AB4
    // add r0, r4, r0
    // bl ov91_0225F4F8
    // ldr r0, _0225F744 ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // ldr r0, _0225F748 ; =0x04001050
    // strh r1, [r0]
    // pop {r4, pc}
    // nop
    // _0225F71C: .word 0x0000862C
    // _0225F720: .word 0x00001AB4
    // _0225F724: .word 0x00001E38
    // _0225F728: .word 0x00001F38
    // _0225F72C: .word 0x0000854C
    // _0225F730: .word 0x00008544
    // _0225F734: .word 0x00001F74
    // _0225F738: .word 0x000086CC
    // _0225F73C: .word 0x00001C54
    // _0225F740: .word 0x000021A4
    // _0225F744: .word 0x04000050
    // _0225F748: .word 0x04001050
    // TODO: decompile
}



void ov91_0225F74C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #0x13
    // ldr r1, _0225F798 ; =0x000019CC
    // lsl r0, r0, #6
    // ldr r2, [r5]
    // add r0, r4, r0
    // add r1, r5, r1
    // bl ov91_0226014C
    // mov r0, #0x13
    // ldr r1, _0225F798 ; =0x000019CC
    // lsl r0, r0, #6
    // ldr r2, [r5]
    // add r0, r4, r0
    // add r1, r5, r1
    // bl ov91_022601AC
    // ldr r0, _0225F79C ; =0x00006A90
    // add r0, r4, r0
    // bl ov91_02260CC8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov91_0225F7A8
    // ldr r0, _0225F7A0 ; =0x000006F4
    // add r1, r4, #0
    // add r0, r4, r0
    // bl ov91_022613C8
    // ldr r0, _0225F7A4 ; =0x00006B78
    // add r0, r4, r0
    // bl ov91_02261928
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F798: .word 0x000019CC
    // _0225F79C: .word 0x00006A90
    // _0225F7A0: .word 0x000006F4
    // _0225F7A4: .word 0x00006B78
    // TODO: decompile
}



void ov91_0225F7A8(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, _0225F868 ; =0x00006A98
    // add r4, r1, #0
    // add r0, r4, r0
    // bl ov91_02260D98
    // mov r0, #0xe1
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov91_0225D6A0
    // bl Thunk_G3X_Reset
    // add r0, r4, #0
    // bl ov91_0225FDD8
    // mov r0, #0
    // ldr r2, _0225F86C ; =0xFFFFF000
    // add r1, r0, #0
    // add r3, r0, #0
    // bl NNS_G3dGlbLightVector
    // ldr r1, _0225F870 ; =0x00007FFF
    // mov r0, #0
    // bl NNS_G3dGlbLightColor
    // ldr r0, _0225F870 ; =0x00007FFF
    // mov r2, #0
    // add r1, r0, #0
    // bl NNS_G3dGlbMaterialColorDiffAmb
    // ldr r0, _0225F870 ; =0x00007FFF
    // mov r2, #0
    // add r1, r0, #0
    // bl NNS_G3dGlbMaterialColorSpecEmi
    // mov r1, #0
    // mov r0, #0x11
    // add r2, r1, #0
    // bl NNS_G3dGeBufferOP_N
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ov91_022610A8
    // mov r2, #1
    // mov r0, #0x12
    // add r1, sp, #8
    // str r2, [sp, #8]
    // bl NNS_G3dGeBufferOP_N
    // mov r1, #0
    // mov r0, #0x11
    // add r2, r1, #0
    // bl NNS_G3dGeBufferOP_N
    // mov r0, #0x13
    // ldr r1, _0225F874 ; =0x000019CC
    // lsl r0, r0, #6
    // add r0, r4, r0
    // add r1, r5, r1
    // bl ov91_0226023C
    // mov r2, #1
    // mov r0, #0x12
    // add r1, sp, #4
    // str r2, [sp, #4]
    // bl NNS_G3dGeBufferOP_N
    // mov r1, #0
    // mov r0, #0x11
    // add r2, r1, #0
    // bl NNS_G3dGeBufferOP_N
    // ldr r1, [r5, #0x10]
    // add r0, r4, #0
    // bl ov91_0226078C
    // mov r2, #1
    // mov r0, #0x12
    // add r1, sp, #0
    // str r2, [sp]
    // bl NNS_G3dGeBufferOP_N
    // mov r0, #0
    // add r1, r0, #0
    // bl RequestSwap3DBuffers
    // ldr r0, [r4, #0x1c]
    // bl SpriteList_RenderAndAnimateSprites
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0225F868: .word 0x00006A98
    // _0225F86C: .word 0xFFFFF000
    // _0225F870: .word 0x00007FFF
    // _0225F874: .word 0x000019CC
    // TODO: decompile
}



void ov91_0225F878(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0xc0
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl BgConfig_Alloc
    // add r3, sp, #0xb0
    // ldr r6, _0225FA44 ; =ov91_02261C74
    // str r0, [r5]
    // add r2, r3, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r6, _0225FA48 ; =ov91_02261C9C
    // add r3, sp, #0x94
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #1
    // str r0, [r3]
    // ldr r0, [r5]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #1
    // mov r1, #0x20
    // mov r2, #0
    // add r3, r4, #0
    // bl BG_ClearCharDataRange
    // ldr r0, [r5]
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r6, _0225FA4C ; =ov91_02261CB8
    // add r3, sp, #0x78
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #2
    // str r0, [r3]
    // ldr r0, [r5]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #2
    // mov r1, #0x20
    // mov r2, #0
    // add r3, r4, #0
    // bl BG_ClearCharDataRange
    // ldr r0, [r5]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r6, _0225FA50 ; =ov91_02261CD4
    // add r3, sp, #0x5c
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #4
    // str r0, [r3]
    // ldr r0, [r5]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // add r3, r4, #0
    // bl BG_ClearCharDataRange
    // ldr r0, [r5]
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r6, _0225FA54 ; =ov91_02261CF0
    // add r3, sp, #0x40
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #5
    // str r0, [r3]
    // ldr r0, [r5]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #5
    // mov r1, #0x20
    // mov r2, #0
    // add r3, r4, #0
    // bl BG_ClearCharDataRange
    // ldr r0, [r5]
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // ldr r6, _0225FA58 ; =ov91_02261D0C
    // add r3, sp, #0x24
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #6
    // str r0, [r3]
    // ldr r0, [r5]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #6
    // mov r1, #0x20
    // mov r2, #0
    // add r3, r4, #0
    // bl BG_ClearCharDataRange
    // ldr r0, [r5]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r6, _0225FA5C ; =ov91_02261D28
    // add r3, sp, #8
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #7
    // str r0, [r3]
    // ldr r0, [r5]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #7
    // mov r1, #0x20
    // mov r2, #0
    // add r3, r4, #0
    // bl BG_ClearCharDataRange
    // ldr r0, [r5]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0
    // mov r1, #0xa0
    // add r2, r4, #0
    // bl LoadFontPal1
    // mov r0, #0
    // str r0, [sp]
    // str r4, [sp, #4]
    // mov r1, #1
    // ldr r0, [r5]
    // add r2, r1, #0
    // mov r3, #4
    // bl LoadUserFrameGfx1
    // add sp, #0xc0
    // pop {r4, r5, r6, pc}
    // _0225FA44: .word ov91_02261C74
    // _0225FA48: .word ov91_02261C9C
    // _0225FA4C: .word ov91_02261CB8
    // _0225FA50: .word ov91_02261CD4
    // _0225FA54: .word ov91_02261CF0
    // _0225FA58: .word ov91_02261D0C
    // _0225FA5C: .word ov91_02261D28
    // TODO: decompile
}



void ov91_0225FA60(void) {
}



void ov91_0225FA9C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r7, r0, #0
    // add r6, r1, #0
    // bl NNS_G2dInitOamManagerModule
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x7e
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #0x1f
    // str r3, [sp, #0xc]
    // add r2, r0, #0
    // str r6, [sp, #0x10]
    // bl OamManager_Create
    // ldr r4, _0225FB40 ; =ov91_02261C64
    // add r3, sp, #0x14
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r1, _0225FB44 ; =0x00200010
    // add r0, r2, #0
    // add r2, r1, #0
    // str r6, [sp, #0x20]
    // bl ObjCharTransfer_InitEx
    // mov r0, #0x10
    // add r1, r6, #0
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // ldr r1, _0225FB44 ; =0x00200010
    // mov r0, #1
    // bl G2dRenderer_SetObjCharTransferReservedRegion
    // mov r0, #1
    // bl G2dRenderer_SetPlttTransferReservedRegion
    // add r1, r7, #0
    // mov r0, #0x80
    // add r1, #0x20
    // add r2, r6, #0
    // bl G2dRenderer_Init
    // str r0, [r7, #0x1c]
    // add r0, r7, #0
    // mov r2, #2
    // add r0, #0x20
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // mov r4, #0
    // add r5, r7, #0
    // mov r0, #0x10
    // add r1, r4, #0
    // add r2, r6, #0
    // bl Create2DGfxResObjMan
    // mov r1, #0x52
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _0225FB16
    // mov r0, #8
    // add r1, r6, #0
    // bl FontSystem_NewInit
    // mov r1, #0x63
    // lsl r1, r1, #2
    // str r0, [r7, r1]
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _0225FB40: .word ov91_02261C64
    // _0225FB44: .word 0x00200010
    // TODO: decompile
}



void ov91_0225FB48(void) {
    // ldr r0, [r5, r0]
    sub_020135AC((0x63 << 2));
    SpriteList_Delete(*((u32*)(r5 + 0x1c)));
    // ldr r0, [r5, r6]
    Destroy2DGfxResObjMan();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    OamManager_Free();
}



void ov91_0225FB80(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // add r2, #0x80
    // ldr r0, [r5, r2]
    AddCharResObjFromOpenNarc(1, 2, 0);
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // add r1, #0x84
    // ldr r0, [r5, r1]
    AddPlttResObjFromOpenNarc(8, r6, 3, 0);
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // add r1, #0x88
    // ldr r0, [r5, r1]
    AddCellOrAnimResObjFromOpenNarc(2, r6, 1, 0);
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // add r1, #0x8c
    // ldr r0, [r5, r1]
    AddCellOrAnimResObjFromOpenNarc(3, r6, 0, 0);
    // str r0, [r5, r1]
    // sub r1, #0xc
    // ldr r0, [r5, r1]
    sub_0200AE18((0x62 << 2));
    GF_AssertFail();
    // ldr r0, [r5, r0]
    sub_0200B00C((6 << 6));
    GF_AssertFail();
    // ldr r0, [r5, r0]
    sub_0200A740((0x5f << 2));
    // ldr r0, [r5, r0]
    sub_0200A740((6 << 6));
    // str r1, [sp]
    // sub r0, #0xc9
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0x80
    // ldr r2, [r5, r2]
    // str r2, [sp, #0x14]
    // add r2, #0x84
    // ldr r2, [r5, r2]
    // str r2, [sp, #0x18]
    // add r2, #0x88
    // ldr r2, [r5, r2]
    // str r2, [sp, #0x1c]
    // add r2, #0x8c
    // ldr r2, [r5, r2]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, #0x90
    // add r0, r5, r0
    CreateSpriteResourcesHeader(0xc8, 0xc8, 0xc8, 0xc8);
}



void ov91_0225FC84(void) {
    // ldr r0, [r4, r0]
    sub_0200AEB0((0x5f << 2));
    // ldr r0, [r4, r0]
    sub_0200B0A8((6 << 6));
    // ldr r0, [r4, r1]
    // add r1, #0x34
    // ldr r1, [r4, r1]
    DestroySingle2DGfxResObj((0x52 << 2));
    // ldr r0, [r4, r1]
    // add r1, #0x34
    // ldr r1, [r4, r1]
    DestroySingle2DGfxResObj((0x53 << 2));
    // ldr r0, [r4, r1]
    // add r1, #0x34
    // ldr r1, [r4, r1]
    DestroySingle2DGfxResObj((0x15 << 4));
    // ldr r0, [r4, r1]
    // add r1, #0x34
    // ldr r1, [r4, r1]
    DestroySingle2DGfxResObj((0x55 << 2));
}



void ov91_0225FCD8(void) {
}



void ov91_0225FD0C(void) {
}



void ov91_0225FD2C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // add r0, r3, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bl Camera_New
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r0, #0
    // add r2, r1, #4
    // str r0, [r5, r2]
    // add r2, r1, #0
    // add r2, #8
    // str r0, [r5, r2]
    // add r2, r1, #0
    // add r2, #0xc
    // str r0, [r5, r2]
    // ldr r3, _0225FDB8 ; =0x0000F112
    // add r2, sp, #0xc
    // strh r3, [r2]
    // ldr r3, _0225FDBC ; =ov91_02261D5C
    // lsl r4, r4, #3
    // lsl r6, r6, #1
    // add r3, r3, r4
    // ldrh r3, [r6, r3]
    // strh r3, [r2, #2]
    // strh r0, [r2, #4]
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // ldr r3, _0225FDC0 ; =0x00000FA4
    // str r0, [sp, #8]
    // add r0, r1, #4
    // ldr r1, _0225FDC4 ; =0x001D9000
    // add r0, r5, r0
    // add r2, sp, #0xc
    // bl Camera_Init_FromTargetDistanceAndAngle
    // mov r1, #0
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x1c]
    // mov r1, #0x19
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, sp, #0x14
    // bl Camera_SetLookAtCamUp
    // mov r0, #0x19
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl Camera_SetStaticPtr
    // mov r0, #0x32
    // lsl r0, r0, #0xe
    // lsr r2, r0, #0xb
    // mov r1, #0xfa
    // ldr r2, [r5, r2]
    // lsl r1, r1, #0xe
    // bl Camera_SetPerspectiveClippingPlane
    // add sp, #0x20
    // pop {r4, r5, r6, pc}
    // nop
    // _0225FDB8: .word 0x0000F112
    // _0225FDBC: .word ov91_02261D5C
    // _0225FDC0: .word 0x00000FA4
    // _0225FDC4: .word 0x001D9000
    // TODO: decompile
}



void ov91_0225FDC8(void) {
    // mov r1, #0x19
    // lsl r1, r1, #4
    // ldr r3, _0225FDD4 ; =Camera_Delete
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _0225FDD4: .word Camera_Delete
    // TODO: decompile
}



void ov91_0225FDD8(void) {
}



void ov91_0225FDE0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r4, r3, #0
    // str r0, [sp, #8]
    // add r6, r1, #0
    // str r4, [sp, #0xc]
    // add r7, r2, #0
    // ldr r2, [r5]
    // add r0, r6, #0
    // mov r1, #0xc
    // mov r3, #4
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldr r2, [r5]
    // add r0, r6, #0
    // mov r1, #0xe
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldr r2, [r5]
    // add r0, r6, #0
    // mov r1, #0xf
    // mov r3, #6
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldr r2, [r5]
    // add r0, r6, #0
    // mov r1, #0x10
    // mov r3, #5
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldr r2, [r5]
    // add r0, r6, #0
    // mov r1, #0x11
    // mov r3, #4
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #6
    // lsl r0, r0, #6
    // str r0, [sp]
    // add r0, r6, #0
    // mov r1, #0xd
    // mov r2, #4
    // mov r3, #0
    // str r4, [sp, #4]
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r0, #0x20
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0225FEF8 ; =ov91_02261BEC
    // mov r2, #0
    // ldrb r0, [r0, r7]
    // mov r1, #7
    // add r3, r2, #0
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // bl BgTilemapRectChangePalette
    // mov r0, #0x20
    // str r0, [sp]
    // lsl r4, r7, #1
    // str r0, [sp, #4]
    // add r0, r4, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r2, #0
    // ldr r0, [r5]
    // mov r1, #6
    // add r3, r2, #0
    // bl BgTilemapRectChangePalette
    // mov r0, #0x20
    // str r0, [sp]
    // mov r2, #0
    // add r4, r4, #1
    // str r0, [sp, #4]
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // mov r1, #5
    // add r3, r2, #0
    // bl BgTilemapRectChangePalette
    // mov r0, #0x20
    // str r0, [sp]
    // str r0, [sp, #4]
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r2, #0
    // ldr r0, [r5]
    // mov r1, #4
    // add r3, r2, #0
    // bl BgTilemapRectChangePalette
    // ldr r0, [r5]
    // mov r1, #4
    // bl BgCommitTilemapBufferToVram
    // ldr r0, [r5]
    // mov r1, #5
    // bl BgCommitTilemapBufferToVram
    // ldr r0, [r5]
    // mov r1, #6
    // bl BgCommitTilemapBufferToVram
    // ldr r0, [r5]
    // mov r1, #7
    // bl BgCommitTilemapBufferToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225FEF8: .word ov91_02261BEC
    // TODO: decompile
}



void ov91_0225FEFC(void) {
    // bx lr
    // TODO: decompile
}



void ov91_0225FF00(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // str r2, [sp, #0x10]
    // mov r2, #0x23
    // str r1, [sp, #0xc]
    // mov r1, #0
    // lsl r2, r2, #4
    // str r0, [sp, #8]
    // str r3, [sp, #0x14]
    // bl memset
    // mov r1, #0x5a
    // ldr r0, [sp, #8]
    // lsl r1, r1, #2
    // ldr r6, _022600E4 ; =ov91_02261C04
    // mov r7, #0
    // add r4, r0, r1
    // add r5, r0, #0
    // ldrh r2, [r6]
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // add r0, r4, #0
    // bl sub_02018030
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_020181B0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_020182A0
    // mov r1, #0
    // ldr r2, _022600E8 ; =0xFFEDE000
    // add r0, r5, #0
    // add r3, r1, #0
    // bl sub_020182A8
    // mov r1, #6
    // lsl r1, r1, #0xa
    // add r0, r5, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl sub_020182C4
    // add r7, r7, #1
    // add r6, r6, #2
    // add r4, #0x10
    // add r5, #0x78
    // cmp r7, #3
    // blt _0225FF24
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, _022600EC ; =ov91_02261C1C
    // mov r1, #0x66
    // str r0, [sp, #0x28]
    // ldr r0, _022600F0 ; =ov91_0226274C
    // lsl r1, r1, #2
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #8]
    // ldr r6, [sp, #8]
    // add r0, r0, r1
    // str r0, [sp, #0x20]
    // ldr r0, _022600F4 ; =ov91_022621AC
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // mov r2, #0x5a
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #8]
    // lsl r2, r2, #2
    // add r2, r1, r2
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x24]
    // ldr r3, [sp, #0x28]
    // ldrb r1, [r1]
    // ldrh r3, [r3]
    // ldr r0, [sp, #0x20]
    // lsl r1, r1, #4
    // add r1, r2, r1
    // ldr r2, [sp, #0xc]
    // bl sub_020180BC
    // ldr r0, [sp, #0x20]
    // mov r1, #0
    // bl sub_02018198
    // ldr r0, [sp, #0x24]
    // mov r5, #0
    // ldrb r0, [r0]
    // lsl r1, r0, #4
    // ldr r0, [sp, #8]
    // add r1, r0, r1
    // mov r0, #0x17
    // lsl r0, r0, #4
    // ldr r4, [r1, r0]
    // cmp r4, #0
    // beq _0225FFC8
    // add r4, #0x40
    // b _0225FFCA
    // add r4, r5, #0
    // cmp r4, #0
    // bne _0225FFD2
    // mov r7, #1
    // b _0225FFE4
    // mov r7, #0
    // b _0225FFE4
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // add r1, r5, #0
    // bl NNS_G3dAnmObjDisableID
    // add r5, r5, #1
    // cmp r7, #0
    // bne _02260004
    // cmp r4, #0
    // beq _02260000
    // ldrb r0, [r4, #1]
    // cmp r5, r0
    // bhs _02260000
    // ldrh r0, [r4, #6]
    // add r1, r4, r0
    // ldrh r0, [r1, #2]
    // add r1, r1, r0
    // lsl r0, r5, #4
    // add r0, r1, r0
    // b _02260006
    // mov r0, #0
    // b _02260006
    // mov r0, #0
    // cmp r0, #0
    // bne _0225FFD6
    // ldr r5, [sp, #0x1c]
    // mov r7, #0
    // cmp r4, #0
    // beq _0226001E
    // add r0, r4, #0
    // add r1, r5, #0
    // bl NNS_G3dGetResDictIdxByName
    // add r1, r0, #0
    // b _02260022
    // mov r1, #0
    // mvn r1, r1
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // beq _02260034
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // bl NNS_G3dAnmObjEnableID
    // add r7, r7, #1
    // add r5, #0x10
    // cmp r7, #0xf
    // blt _0226000E
    // ldr r0, [sp, #0x28]
    // add r6, #0x14
    // add r0, r0, #2
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // add r0, r0, #1
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r0, #0x14
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r0, #0xf0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #6
    // blt _0225FF82
    // ldr r0, _022600F8 ; =_02261BE8
    // mov r4, #0x85
    // ldrb r5, [r0]
    // ldr r0, [sp, #0x10]
    // lsl r4, r4, #2
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // add r2, r4, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #8]
    // sub r2, #0xac
    // add r2, r1, r2
    // lsl r1, r5, #4
    // add r1, r2, r1
    // ldr r2, [sp, #0xc]
    // add r0, r0, r4
    // mov r3, #0x20
    // bl sub_020180BC
    // mov r0, #0x78
    // add r1, r5, #0
    // mul r1, r0
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // ldr r1, [sp, #8]
    // add r1, r1, r4
    // bl sub_020181D4
    // add r2, r4, #0
    // ldr r0, [sp, #8]
    // mov r1, #4
    // add r2, #0x18
    // strh r1, [r0, r2]
    // mov r1, #0
    // add r2, r2, #2
    // strh r1, [r0, r2]
    // bl ov91_02260334
    // ldr r0, [sp, #8]
    // add r2, r4, #0
    // ldr r1, [sp, #8]
    // sub r2, #0x2c
    // add r0, #0x78
    // add r1, r1, r2
    // bl sub_020181D4
    // add r1, r4, #0
    // ldr r0, [sp, #8]
    // sub r1, #0x2c
    // add r0, r0, r1
    // mov r1, #0
    // bl sub_02018198
    // ldr r0, [sp, #8]
    // mov r1, #1
    // add r0, #0x78
    // bl sub_020182A0
    // ldr r0, [sp, #8]
    // mov r2, #4
    // sub r1, r4, #4
    // strh r2, [r0, r1]
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022600E4: .word ov91_02261C04
    // _022600E8: .word 0xFFEDE000
    // _022600EC: .word ov91_02261C1C
    // _022600F0: .word ov91_0226274C
    // _022600F4: .word ov91_022621AC
    // _022600F8: .word _02261BE8
    // TODO: decompile
}



void ov91_022600FC(void) {
    // add r5, r7, r0
    sub_02018068(r5);
    // add r5, #0x10
    // add r4, r7, r0
    sub_020180F8((r4 + 1), r6);
    // add r4, #0x14
    // add r0, r7, r0
    sub_020180F8((0x85 << 2), r6);
    memset(r7, 0, (0x23 << 4));
}



void ov91_0226014C(void) {
    ov91_022601C8();
    ov91_022601F4(r5, r6);
    ov91_02260218(r5, r6);
    ov91_02260298(r5, 1);
    ov91_02260254(r5, *((u16*)(r6 + 4)));
    ov91_02260334(r5, 1);
    ov91_02260298(r5, 3);
    ov91_02260334(r5, 0);
    ov91_0226031C(r5, (1 << 0xc));
}



void ov91_022601AC(void) {
    // add r0, r4, r0
    sub_02018124((0x66 << 2), (1 << 0xc));
    ov91_02260378(r4);
}



void ov91_022601C8(void) {
    // add r1, #0xd8
    // add r2, #0xdc
    // add r3, #0xe0
    sub_020182A8(r0, *((u32*)r1), *((u32*)r1), *((u32*)r1));
    // add r5, #0x78
}



void ov91_022601F4(void) {
    sub_020182E0(r0, ((*((u16*)(r1 + 2)) << 0x10) >> 0x10), 1);
    // add r5, #0x78
}



void ov91_02260218(void) {
    // add r0, #0xd4
    sub_020182C4(r0, *((u32*)r1), *((u32*)r1), *((u32*)r1));
    // add r5, #0x78
}



void ov91_0226023C(void) {
}



void ov91_02260254(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02260290 ; =0x0000F222
    // add r4, r1, #0
    // bl GF_DegreeToSinCosIdx
    // add r1, r0, #0
    // ldr r0, _02260294 ; =0x00000E38
    // sub r2, r4, r0
    // mov r0, #0x5a
    // mul r0, r2
    // bl _u32_div_f
    // mov r1, #0x2d
    // lsl r1, r1, #0xe
    // mul r1, r0
    // add r0, r1, #0
    // mov r1, #0x5a
    // bl _s32_div_f
    // mov r1, #0x2d
    // lsl r1, r1, #0xe
    // sub r1, r1, r0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl sub_02018198
    // pop {r3, r4, r5, pc}
    // nop
    // _02260290: .word 0x0000F222
    // _02260294: .word 0x00000E38
    // TODO: decompile
}



void ov91_02260298(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // cmp r4, #6
    // blo _022602A6
    // bl GF_AssertFail
    // mov r2, #0x21
    // lsl r2, r2, #4
    // ldrh r1, [r5, r2]
    // cmp r1, r4
    // beq _02260314
    // ldr r0, _02260318 ; =ov91_0226274C
    // sub r2, #0x78
    // ldrb r3, [r0, r1]
    // mov r0, #0x78
    // mul r0, r3
    // add r3, r5, r2
    // mov r2, #0x14
    // mul r2, r1
    // add r0, r5, r0
    // add r1, r3, r2
    // bl sub_020181E0
    // mov r0, #0x66
    // lsl r0, r0, #2
    // add r6, r5, r0
    // mov r0, #0x14
    // add r7, r4, #0
    // mul r7, r0
    // ldr r0, _02260318 ; =ov91_0226274C
    // ldrb r1, [r0, r4]
    // mov r0, #0x78
    // mul r0, r1
    // str r0, [sp]
    // add r0, r5, r0
    // add r1, r6, r7
    // bl sub_020181D4
    // add r0, r6, r7
    // mov r1, #0
    // bl sub_02018198
    // mov r0, #0x21
    // lsl r0, r0, #4
    // ldrh r1, [r5, r0]
    // ldr r0, _02260318 ; =ov91_0226274C
    // ldrb r1, [r0, r1]
    // mov r0, #0x78
    // mul r0, r1
    // add r0, r5, r0
    // mov r1, #0
    // bl sub_020182A0
    // ldr r0, [sp]
    // mov r1, #1
    // add r0, r5, r0
    // bl sub_020182A0
    // mov r0, #0x21
    // lsl r0, r0, #4
    // strh r4, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02260318: .word ov91_0226274C
    // TODO: decompile
}



void ov91_0226031C(void) {
    // mov r2, #0x66
    // lsl r2, r2, #2
    // add r3, r0, r2
    // add r2, #0x78
    // ldrh r2, [r0, r2]
    // mov r0, #0x14
    // mul r0, r2
    // add r0, r3, r0
    // ldr r3, _02260330 ; =sub_0201815C
    // bx r3
    // _02260330: .word sub_0201815C
    // TODO: decompile
}



void ov91_02260334(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, _02260360 ; =0x00000212
    // add r5, r0, #0
    // ldrh r2, [r5, r1]
    // cmp r2, r4
    // beq _0226035C
    // cmp r4, #1
    // bne _02260350
    // sub r1, #0x7a
    // add r1, r5, r1
    // bl sub_020181D4
    // b _02260358
    // sub r1, #0x7a
    // add r1, r5, r1
    // bl sub_020181E0
    // ldr r0, _02260360 ; =0x00000212
    // strh r4, [r5, r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _02260360: .word 0x00000212
    // TODO: decompile
}



void ov91_02260364(void) {
    // ldr r2, _0226036C ; =0x0000022E
    // strh r1, [r0, r2]
    // bx lr
    // nop
    // _0226036C: .word 0x0000022E
    // TODO: decompile
}



void ov91_02260370(void) {
    // strh r1, [r0, r2]
}



void ov91_02260378(void) {
    // push {r3, r4, r5, lr}
    // ldr r2, _022603F4 ; =0x0000022E
    // add r3, r0, #0
    // ldrh r0, [r3, r2]
    // cmp r0, #1
    // bne _022603AA
    // sub r0, r2, #6
    // mov r1, #2
    // ldr r0, [r3, r0]
    // lsl r1, r1, #0xc
    // add r4, r0, r1
    // mov r0, #0xa
    // lsl r0, r0, #0xe
    // cmp r4, r0
    // bge _022603A2
    // sub r0, r2, #6
    // ldr r0, [r3, r0]
    // add r1, r0, r1
    // sub r0, r2, #6
    // str r1, [r3, r0]
    // b _022603E4
    // lsr r1, r1, #1
    // sub r0, r2, #6
    // str r1, [r3, r0]
    // b _022603E4
    // sub r0, r2, #2
    // ldrh r0, [r3, r0]
    // cmp r0, #4
    // bne _022603B6
    // mov r0, #0
    // b _022603B8
    // add r0, r0, #1
    // lsl r2, r0, #1
    // ldr r0, _022603F8 ; =ov91_02261C12
    // mov r4, #0x8a
    // ldrb r0, [r0, r2]
    // lsl r4, r4, #2
    // ldr r5, [r3, r4]
    // lsl r1, r0, #0xc
    // cmp r5, r1
    // bge _022603CE
    // str r1, [r3, r4]
    // b _022603E4
    // mov r0, #2
    // lsl r0, r0, #0xc
    // add r0, r5, r0
    // ldr r5, _022603FC ; =ov91_02261C13
    // ldrb r2, [r5, r2]
    // lsl r2, r2, #0xc
    // cmp r0, r2
    // bge _022603E2
    // str r0, [r3, r4]
    // b _022603E4
    // str r1, [r3, r4]
    // mov r1, #0x85
    // lsl r1, r1, #2
    // add r0, r3, r1
    // add r1, #0x14
    // ldr r1, [r3, r1]
    // bl sub_02018198
    // pop {r3, r4, r5, pc}
    // _022603F4: .word 0x0000022E
    // _022603F8: .word ov91_02261C12
    // _022603FC: .word ov91_02261C13
    // TODO: decompile
}



void ov91_02260400(void) {
    // push {r3, r4}
    // mov r3, #0xff
    // sub r0, r3, r0
    // mov r3, #0x96
    // lsl r3, r3, #4
    // add r4, r0, #0
    // mul r4, r3
    // lsl r0, r3, #7
    // sub r0, r4, r0
    // add r4, r1, #0
    // str r0, [r2]
    // mul r4, r3
    // lsl r0, r3, #7
    // sub r1, r4, r0
    // ldr r0, _02260428 ; =0xFFED4000
    // sub r0, r0, r1
    // str r0, [r2, #8]
    // pop {r3, r4}
    // bx lr
    // nop
    // _02260428: .word 0xFFED4000
    // TODO: decompile
}



void ov91_0226042C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r1, #0x4b
    // ldr r0, [r5]
    // lsl r1, r1, #0xc
    // add r0, r0, r1
    // lsr r1, r1, #7
    // bl _s32_div_f
    // mov r1, #0xff
    // sub r0, r1, r0
    // strh r0, [r4]
    // ldr r1, [r5, #8]
    // ldr r0, _02260458 ; =0xFFF1F000
    // sub r0, r0, r1
    // mov r1, #0x96
    // lsl r1, r1, #4
    // bl _s32_div_f
    // strh r0, [r4, #2]
    // pop {r3, r4, r5, pc}
    // _02260458: .word 0xFFF1F000
    // TODO: decompile
}



void ov91_0226045C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r6, r0, #0
    // add r0, sp, #0
    // add r7, r1, #0
    // add r5, r2, #0
    // add r4, r3, #0
    // bl MTX_Identity33_
    // ldr r0, _0226049C ; =ov91_02261D3C
    // lsl r2, r4, #3
    // lsl r1, r5, #1
    // add r0, r0, r2
    // ldrh r0, [r1, r0]
    // ldr r3, _022604A0 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    // bl MTX_RotY33_
    // add r0, r6, #0
    // add r1, sp, #0
    // add r2, r7, #0
    // bl MTX_MultVec33
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _0226049C: .word ov91_02261D3C
    // _022604A0: .word FX_SinCosTable_
    // TODO: decompile
}



void ov91_022604A4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r6, r0, #0
    // add r0, sp, #0
    // add r7, r1, #0
    // add r5, r2, #0
    // add r4, r3, #0
    // bl MTX_Identity33_
    // ldr r0, _022604EC ; =ov91_02261D3C
    // lsl r2, r4, #3
    // lsl r1, r5, #1
    // add r0, r0, r2
    // ldrh r0, [r1, r0]
    // ldr r3, _022604F0 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    // bl MTX_RotY33_
    // add r0, sp, #0
    // add r1, r0, #0
    // bl MTX_Inverse33
    // add r0, r6, #0
    // add r1, sp, #0
    // add r2, r7, #0
    // bl MTX_MultVec33
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _022604EC: .word ov91_02261D3C
    // _022604F0: .word FX_SinCosTable_
    // TODO: decompile
}



void ov91_022604F4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp, #0x30]
    // ldr r0, _0226064C ; =0x000006FC
    // ldr r4, _02260650 ; =ov91_02261BF0
    // str r1, [sp, #0x2c]
    // add r7, r2, #0
    // add r6, r5, r0
    // ldrb r2, [r4]
    // ldr r1, [sp, #0x2c]
    // add r0, r6, #0
    // add r3, r7, #0
    // bl sub_02018030
    // ldr r0, [sp, #0x30]
    // add r4, r4, #1
    // add r0, r0, #1
    // add r6, #0x10
    // str r0, [sp, #0x30]
    // cmp r0, #5
    // blt _02260508
    // ldr r0, _02260654 ; =0x0000074C
    // ldr r1, [sp, #0x2c]
    // add r0, r5, r0
    // mov r2, #0x2e
    // add r3, r7, #0
    // bl sub_02018030
    // ldr r0, _02260658 ; =0x00000754
    // mov r2, #0x1f
    // ldr r0, [r5, r0]
    // mov r1, #0
    // lsl r2, r2, #0x10
    // bl NNSi_G3dModifyPolygonAttrMask
    // mov r1, #0x64
    // str r1, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // add r1, #0xe4
    // ldr r0, [r5, r1]
    // ldr r1, [sp, #0x2c]
    // mov r2, #7
    // mov r3, #0
    // bl AddCharResObjFromOpenNarc
    // ldr r1, _0226065C ; =0x0000075C
    // mov r2, #4
    // str r0, [r5, r1]
    // mov r1, #0x64
    // str r1, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r7, [sp, #0xc]
    // add r1, #0xe8
    // ldr r0, [r5, r1]
    // ldr r1, [sp, #0x2c]
    // mov r3, #0
    // bl AddPlttResObjFromOpenNarc
    // mov r1, #0x76
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r1, #0x64
    // str r1, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // add r1, #0xec
    // ldr r0, [r5, r1]
    // ldr r1, [sp, #0x2c]
    // mov r2, #6
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // ldr r1, _02260660 ; =0x00000764
    // mov r2, #5
    // str r0, [r5, r1]
    // mov r1, #0x64
    // str r1, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // add r1, #0xf0
    // ldr r0, [r5, r1]
    // ldr r1, [sp, #0x2c]
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // ldr r1, _02260664 ; =0x00000768
    // str r0, [r5, r1]
    // sub r1, #0xc
    // ldr r0, [r5, r1]
    // bl sub_0200AE18
    // cmp r0, #0
    // bne _022605C2
    // bl GF_AssertFail
    // mov r0, #0x76
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl sub_0200B00C
    // cmp r0, #0
    // bne _022605D4
    // bl GF_AssertFail
    // ldr r0, _0226065C ; =0x0000075C
    // ldr r0, [r5, r0]
    // bl sub_0200A740
    // mov r0, #0x76
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl sub_0200A740
    // mov r1, #0x64
    // add r0, r1, #0
    // add r2, r1, #0
    // str r1, [sp]
    // sub r0, #0x65
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0xe4
    // ldr r2, [r5, r2]
    // add r3, r1, #0
    // str r2, [sp, #0x14]
    // add r2, r1, #0
    // add r2, #0xe8
    // ldr r2, [r5, r2]
    // str r2, [sp, #0x18]
    // add r2, r1, #0
    // add r2, #0xec
    // ldr r2, [r5, r2]
    // str r2, [sp, #0x1c]
    // add r2, r1, #0
    // add r2, #0xf0
    // ldr r2, [r5, r2]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r0, _02260668 ; =0x0000076C
    // add r2, r1, #0
    // add r0, r5, r0
    // bl CreateSpriteResourcesHeader
    // mov r0, #0x79
    // lsl r0, r0, #4
    // mov r6, #0
    // add r4, r5, r0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl ov91_022607C4
    // mov r0, #0x42
    // lsl r0, r0, #2
    // add r6, r6, #1
    // add r4, r4, r0
    // cmp r6, #0x60
    // blt _02260630
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0226064C: .word 0x000006FC
    // _02260650: .word ov91_02261BF0
    // _02260654: .word 0x0000074C
    // _02260658: .word 0x00000754
    // _0226065C: .word 0x0000075C
    // _02260660: .word 0x00000764
    // _02260664: .word 0x00000768
    // _02260668: .word 0x0000076C
    // TODO: decompile
}



void ov91_0226066C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0x79
    // lsl r0, r0, #4
    // mov r7, #0x42
    // mov r6, #0
    // add r4, r5, r0
    // lsl r7, r7, #2
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov91_02260830
    // add r6, r6, #1
    // add r4, r4, r7
    // cmp r6, #0x60
    // blt _0226067C
    // ldr r0, _02260714 ; =0x0000075C
    // ldr r0, [r5, r0]
    // bl sub_0200AEB0
    // mov r0, #0x76
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl sub_0200B0A8
    // mov r0, #0x52
    // ldr r1, _02260714 ; =0x0000075C
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // bl DestroySingle2DGfxResObj
    // mov r0, #0x53
    // mov r1, #0x76
    // lsl r0, r0, #2
    // lsl r1, r1, #4
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // bl DestroySingle2DGfxResObj
    // mov r0, #0x15
    // ldr r1, _02260718 ; =0x00000764
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // bl DestroySingle2DGfxResObj
    // mov r0, #0x55
    // ldr r1, _0226071C ; =0x00000768
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // bl DestroySingle2DGfxResObj
    // ldr r0, _02260720 ; =0x000006FC
    // mov r6, #0
    // add r4, r5, r0
    // add r0, r4, #0
    // bl sub_02018068
    // add r6, r6, #1
    // add r4, #0x10
    // cmp r6, #5
    // blt _022606DE
    // ldr r0, _02260724 ; =0x0000074C
    // add r0, r5, r0
    // bl sub_02018068
    // ldr r0, _02260720 ; =0x000006FC
    // mov r1, #0
    // add r0, r5, r0
    // mov r2, #0x94
    // bl memset
    // mov r0, #0x79
    // lsl r0, r0, #4
    // mov r2, #0x63
    // add r0, r5, r0
    // mov r1, #0
    // lsl r2, r2, #8
    // bl memset
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02260714: .word 0x0000075C
    // _02260718: .word 0x00000764
    // _0226071C: .word 0x00000768
    // _02260720: .word 0x000006FC
    // _02260724: .word 0x0000074C
    // TODO: decompile
}



void ov91_02260728(void) {
    ov91_02260A50();
    ov91_02260848(r5, r0, r4, r7);
    ov91_02260884(r5, r4);
}



void ov91_02260754(void) {
    // push {r4, r5, r6, lr}
    // mov r3, #0x42
    // ldr r4, _02260788 ; =0x00000888
    // mov r2, #0
    // add r6, r0, #0
    // lsl r3, r3, #2
    // ldr r5, [r6, r4]
    // cmp r5, r1
    // bne _0226077A
    // mov r1, #0x79
    // lsl r1, r1, #4
    // add r1, r0, r1
    // mov r0, #0x42
    // lsl r0, r0, #2
    // mul r0, r2
    // add r0, r1, r0
    // bl ov91_02260A2C
    // pop {r4, r5, r6, pc}
    // add r2, r2, #1
    // add r6, r6, r3
    // cmp r2, #0x60
    // blt _02260760
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // _02260788: .word 0x00000888
    // TODO: decompile
}



void ov91_0226078C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // mov r0, #0x79
    // lsl r0, r0, #4
    // str r1, [sp]
    // mov r6, #0
    // add r4, r7, #0
    // add r5, r7, r0
    // ldr r0, _022607C0 ; =0x00000888
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _022607AE
    // ldr r2, [sp]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov91_022608A8
    // mov r0, #0x42
    // lsl r0, r0, #2
    // add r6, r6, #1
    // add r4, r4, r0
    // add r5, r5, r0
    // cmp r6, #0x60
    // blt _0226079C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022607C0: .word 0x00000888
    // TODO: decompile
}



void ov91_022607C4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x30
    // add r5, r0, #0
    // add r3, sp, #0
    // mov r0, #0
    // add r4, r1, #0
    // add r6, r3, #0
    // add r1, r0, #0
    // stmia r6!, {r0, r1}
    // stmia r6!, {r0, r1}
    // stmia r6!, {r0, r1}
    // stmia r6!, {r0, r1}
    // stmia r6!, {r0, r1}
    // stmia r6!, {r0, r1}
    // ldr r0, [r5, #0x1c]
    // str r0, [sp]
    // ldr r0, _02260828 ; =0x0000076C
    // str r2, [sp, #0x2c]
    // add r0, r5, r0
    // str r0, [sp, #4]
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // mov r0, #0x20
    // str r0, [sp, #0x24]
    // mov r0, #2
    // str r0, [sp, #0x28]
    // add r0, r3, #0
    // bl Sprite_CreateAffine
    // mov r1, #0
    // str r0, [r4]
    // bl Sprite_SetDrawFlag
    // ldr r1, _0226082C ; =0x0000074C
    // add r0, r4, #0
    // add r0, #0x7c
    // add r1, r5, r1
    // bl sub_020181B0
    // add r4, #0x7c
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_020182A0
    // add sp, #0x30
    // pop {r4, r5, r6, pc}
    // nop
    // _02260828: .word 0x0000076C
    // _0226082C: .word 0x0000074C
    // TODO: decompile
}



void ov91_02260830(void) {
    Sprite_Delete(*((u32*)r1));
    memset(r4, 0, (0x42 << 2));
}



void ov91_02260848(void) {
    // add r0, #0xf8
    // str r4, [r0]
    // add r0, #0xf4
    // str r1, [r0]
    // strh r1, [r5, r0]
    Sprite_SetPaletteOverride(*((u32*)r1), *((u16*)(r2 + 4)));
    ov91_02260A88(r5, r4, r6);
    Sprite_SetDrawFlag(*((u32*)r5), 1);
}



void ov91_02260884(void) {
    // add r0, #0xf8
    // str r2, [r0]
    // strh r1, [r4, r0]
    Sprite_SetDrawFlag(*((u32*)r1), 0);
    ov91_02260AF8(r4, r5);
}



void ov91_022608A8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r1, r5, #0
    // add r1, #0xf4
    // ldr r1, [r1]
    // cmp r1, #1
    // bne _022608CE
    // add r1, r5, #0
    // add r1, #0xf8
    // ldr r1, [r1]
    // bl ov91_02260A88
    // cmp r0, #0
    // bne _022608CE
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov91_02260AF8
    // add r0, r5, #0
    // add r0, #0xf4
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02260940
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r1, _02260944 ; =0x000006FC
    // ldr r0, [r0]
    // add r1, r4, r1
    // bl ov91_02260B48
    // add r1, r5, #0
    // add r1, #0xf8
    // ldr r1, [r1]
    // ldr r0, [r0, #8]
    // ldrb r1, [r1]
    // cmp r1, #5
    // bne _022608FC
    // ldr r1, _02260948 ; =0x00007FFF
    // bl NNS_G3dMdlSetMdlAmbAll
    // b _02260902
    // ldr r1, _0226094C ; =0x00004A52
    // bl NNS_G3dMdlSetMdlAmbAll
    // add r0, r5, #0
    // bl ov91_02260B5C
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r3, [r0]
    // add r0, r5, #4
    // ldr r1, [r3, #0x2c]
    // ldr r2, [r3, #0x30]
    // ldr r3, [r3, #0x34]
    // bl sub_020182A8
    // add r0, r5, #4
    // bl sub_020181EC
    // add r0, r5, #0
    // add r0, #0x7c
    // bl sub_020182A4
    // cmp r0, #1
    // bne _02260940
    // add r0, r5, #0
    // bl ov91_02260950
    // add r0, r5, #0
    // add r0, #0x7c
    // bl sub_020181EC
    // add r0, r5, #0
    // bl ov91_02260A10
    // pop {r3, r4, r5, pc}
    // nop
    // _02260944: .word 0x000006FC
    // _02260948: .word 0x00007FFF
    // _0226094C: .word 0x00004A52
    // TODO: decompile
}



void ov91_02260950(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // bl ov91_0225E9AC
    // cmp r0, #1
    // bne _02260966
    // ldr r4, _02260A08 ; =0xFFED4000
    // b _0226097A
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // bl ov91_0225E990
    // cmp r0, #0
    // bne _02260978
    // ldr r4, _02260A0C ; =0xFFFCD000
    // b _0226097A
    // ldr r4, _02260A08 ; =0xFFED4000
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r3, [r0]
    // add r0, r5, #0
    // ldr r1, [r3, #0x2c]
    // ldr r3, [r3, #0x34]
    // add r0, #0x7c
    // add r2, r4, #0
    // bl sub_020182A8
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // mov r2, #0
    // ldr r0, [r0, #0x30]
    // sub r4, r0, r4
    // asr r6, r4, #0x1f
    // lsr r1, r4, #0x14
    // lsl r0, r6, #0xc
    // orr r0, r1
    // mov r1, #2
    // lsl r3, r4, #0xc
    // lsl r1, r1, #0xa
    // add r3, r3, r1
    // adc r0, r2
    // lsl r1, r0, #0x14
    // lsr r0, r3, #0xc
    // orr r0, r1
    // mov r1, #0x4b
    // lsl r1, r1, #0xe
    // bl FX_Div
    // mov r7, #1
    // add r3, r0, #0
    // lsl r7, r7, #0xc
    // add r1, r3, r7
    // add r5, #0x7c
    // add r0, r5, #0
    // add r2, r1, #0
    // add r3, r3, r7
    // bl sub_020182C4
    // lsr r0, r4, #0x10
    // lsl r3, r6, #0x10
    // orr r3, r0
    // lsl r2, r4, #0x10
    // mov r1, #0
    // lsr r0, r7, #1
    // add r0, r2, r0
    // adc r3, r1
    // lsl r1, r3, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // mov r1, #0x4b
    // lsl r1, r1, #0xe
    // bl FX_Div
    // asr r1, r0, #0xc
    // mov r0, #0x18
    // sub r0, r0, r1
    // str r0, [sp]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // str r0, [sp, #4]
    // bl NNS_G3dGlbPolygonAttr
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02260A08: .word 0xFFED4000
    // _02260A0C: .word 0xFFFCD000
    // TODO: decompile
}



void ov91_02260A10(void) {
}



void ov91_02260A2C(void) {
}



void ov91_02260A50(void) {
    // push {r3, r4, r5, lr}
    // mov r2, #0x42
    // ldr r3, _02260A84 ; =0x00000888
    // mov r1, #0
    // add r5, r0, #0
    // lsl r2, r2, #2
    // ldr r4, [r5, r3]
    // cmp r4, #0
    // bne _02260A72
    // mov r2, #0x79
    // lsl r2, r2, #4
    // add r2, r0, r2
    // mov r0, #0x42
    // lsl r0, r0, #2
    // mul r0, r1
    // add r0, r2, r0
    // pop {r3, r4, r5, pc}
    // add r1, r1, #1
    // add r5, r5, r2
    // cmp r1, #0x60
    // blt _02260A5C
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02260A84: .word 0x00000888
    // TODO: decompile
}



void ov91_02260A88(void) {
    // add r0, #0xf8
    // add r5, sp, #4
    // add r6, #0x2c
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // add r2, #0xf8
    ov91_022604A4(r5, r5, *((u16*)(*((u32*)r0) + 4)), r2);
    // add r0, sp, #4
    // add r1, sp, #0
    ov91_0226042C();
    // add r1, sp, #0
    // ldrsh r0, [r1, r2]
    // str r0, [sp, #4]
    // ldrsh r1, [r1, r0]
    // add r0, r1, r0
    // str r2, [sp, #0xc]
    // str r0, [sp, #8]
    // add r1, sp, #4
    Sprite_SetMatrix(*((u32*)r4), (r1 << 0xc), 0);
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    // ldrsh r0, [r1, r0]
}



void ov91_02260AF8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0xf4
    // str r1, [r0]
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r1, _02260B44 ; =0x000006FC
    // ldr r0, [r0]
    // add r1, r4, r1
    // bl ov91_02260B48
    // add r1, r0, #0
    // add r0, r5, #4
    // bl sub_020181B0
    // add r0, r5, #4
    // mov r1, #1
    // bl sub_020182A0
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02260B42
    // add r5, #0x7c
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_020182A0
    // pop {r3, r4, r5, pc}
    // _02260B44: .word 0x000006FC
    // TODO: decompile
}



void ov91_02260B48(void) {
    // add r0, r1, r0
}



void ov91_02260B5C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0x41
    // lsl r0, r0, #2
    // ldrsh r1, [r5, r0]
    // sub r1, r1, #1
    // strh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // cmp r0, #0
    // bge _02260BFA
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // bl ov91_0225E6F8
    // add r6, r0, #0
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r1, [r0]
    // ldr r0, [r1, #0x10]
    // ldr r1, [r1, #8]
    // bl FX_Atan2Idx
    // asr r0, r0, #4
    // lsl r4, r0, #1
    // ldr r1, _02260C3C ; =0x0001E200
    // lsl r0, r6, #9
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // lsr r6, r0, #4
    // asr r7, r6, #0x1f
    // ldr r0, _02260C40 ; =FX_SinCosTable_
    // lsl r1, r4, #1
    // ldrsh r0, [r0, r1]
    // add r2, r6, #0
    // add r3, r7, #0
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r0, r0, r2
    // adc r1, r3
    // lsl r1, r1, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // asr r1, r0, #0xc
    // lsr r0, r2, #2
    // add r1, r1, r0
    // lsr r0, r2, #3
    // strh r1, [r5, r0]
    // add r0, r4, #1
    // lsl r1, r0, #1
    // ldr r0, _02260C40 ; =FX_SinCosTable_
    // add r2, r6, #0
    // ldrsh r0, [r0, r1]
    // add r3, r7, #0
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r4, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r4, #0xc
    // orr r1, r0
    // asr r1, r1, #0xc
    // lsr r0, r2, #2
    // add r1, r1, r0
    // ldr r0, _02260C44 ; =0x00000102
    // strh r1, [r5, r0]
    // mov r1, #8
    // add r0, r1, #0
    // add r0, #0xfc
    // strh r1, [r5, r0]
    // add r0, r5, #0
    // add r0, #0xfc
    // ldrh r2, [r0]
    // mov r0, #1
    // lsl r0, r0, #8
    // ldrh r1, [r5, r0]
    // add r0, r0, #2
    // add r2, r2, r1
    // add r1, r5, #0
    // add r1, #0xfc
    // strh r2, [r1]
    // add r1, r5, #0
    // add r1, #0xfe
    // ldrh r1, [r1]
    // ldrh r0, [r5, r0]
    // mov r2, #0
    // add r1, r1, r0
    // add r0, r5, #0
    // add r0, #0xfe
    // strh r1, [r0]
    // add r1, r5, #0
    // add r1, #0xfc
    // ldrh r1, [r1]
    // add r0, r5, #4
    // bl sub_020182E0
    // add r0, r5, #4
    // add r5, #0xfe
    // ldrh r1, [r5]
    // mov r2, #2
    // bl sub_020182E0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02260C3C: .word 0x0001E200
    // _02260C40: .word FX_SinCosTable_
    // _02260C44: .word 0x00000102
    // TODO: decompile
}



void ov91_02260C48(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r6, r0, #0
    // add r7, sp, #0
    // add r4, r2, #0
    // mov r0, #0
    // add r5, r1, #0
    // add r2, r7, #0
    // add r1, r0, #0
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r6, #0x1c]
    // str r0, [sp]
    // ldr r0, _02260CA4 ; =0x0000076C
    // str r3, [sp, #0x2c]
    // add r0, r6, r0
    // str r0, [sp, #4]
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // mov r0, #0x20
    // str r0, [sp, #0x24]
    // mov r0, #2
    // str r0, [sp, #0x28]
    // add r0, r7, #0
    // bl Sprite_CreateAffine
    // str r0, [r5, #4]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r5, #4]
    // add r1, r4, #0
    // bl Sprite_SetPaletteOverride
    // mov r0, #0
    // str r0, [r5]
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02260CA4: .word 0x0000076C
    // TODO: decompile
}



void ov91_02260CA8(void) {
}



void ov91_02260CB4(void) {
}



void ov91_02260CC8(void) {
}



void ov91_02260CE0(void) {
}



void ov91_02260D00(void) {
}



void ov91_02260D14(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // mov r4, #0
    // add r7, r0, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // add r2, sp, #0
    // add r0, r4, #0
    // add r1, r4, #0
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r7, #0x1c]
    // str r0, [sp]
    // ldr r0, _02260D7C ; =0x0000076C
    // str r3, [sp, #0x2c]
    // add r0, r7, r0
    // str r0, [sp, #4]
    // mov r0, #9
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // mov r0, #0x20
    // str r0, [sp, #0x24]
    // mov r0, #2
    // str r0, [sp, #0x28]
    // add r7, r4, #0
    // add r0, sp, #0
    // bl Sprite_CreateAffine
    // str r0, [r5, #4]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r5, #4]
    // mov r1, #1
    // bl Sprite_SetAffineOverwriteMode
    // ldr r0, [r5, #4]
    // add r1, r6, #0
    // bl Sprite_SetPaletteOverride
    // str r7, [r5]
    // add r4, r4, #1
    // add r5, #0x1c
    // cmp r4, #8
    // blt _02260D50
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _02260D7C: .word 0x0000076C
    // TODO: decompile
}



void ov91_02260D80(void) {
}



void ov91_02260D98(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // mov r4, #0
    // add r6, sp, #0x10
    // add r7, sp, #0xc
    // ldr r0, [r5]
    // cmp r0, #1
    // bne _02260E78
    // ldr r0, [r5, #0x14]
    // cmp r0, #0x10
    // bge _02260DC4
    // mov r1, #0x7d
    // str r1, [sp]
    // str r6, [sp, #4]
    // mov r1, #0x10
    // mov r2, #8
    // mov r3, #0xbe
    // str r7, [sp, #8]
    // bl ov91_02260EE0
    // b _02260DF2
    // cmp r0, #0x1a
    // bge _02260DDE
    // mov r1, #0x8c
    // str r1, [sp]
    // str r6, [sp, #4]
    // sub r0, #0x10
    // mov r1, #0xa
    // mov r2, #4
    // mov r3, #0xb6
    // str r7, [sp, #8]
    // bl ov91_02260EE0
    // b _02260DF2
    // mov r1, #0xa0
    // str r1, [sp]
    // str r6, [sp, #4]
    // sub r0, #0x1a
    // mov r1, #6
    // mov r2, #3
    // mov r3, #0xb4
    // str r7, [sp, #8]
    // bl ov91_02260EE0
    // ldr r0, [r5, #0x14]
    // add r1, r0, #1
    // lsl r0, r1, #1
    // str r1, [r5, #0x14]
    // add r1, r1, r0
    // asr r0, r1, #4
    // lsr r0, r0, #0x1b
    // add r0, r1, r0
    // asr r1, r0, #5
    // mov r0, #9
    // sub r0, r0, r1
    // mov r1, #0xa
    // lsl r0, r0, #0xc
    // lsl r1, r1, #0xc
    // bl FX_Div
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #4]
    // add r1, sp, #0x14
    // bl Sprite_SetAffineScale
    // ldr r0, [r5, #0x18]
    // ldr r1, [r5, #8]
    // cmp r0, #0
    // beq _02260E2E
    // ldr r0, [sp, #0x10]
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // b _02260E34
    // ldr r0, [sp, #0x10]
    // lsl r0, r0, #0xc
    // sub r0, r1, r0
    // str r0, [r5, #8]
    // ldr r0, [sp, #0xc]
    // ldr r1, [r5, #0xc]
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [r5, #0xc]
    // add r1, r5, #0
    // ldr r0, [r5, #4]
    // add r1, #8
    // bl Sprite_SetMatrix
    // ldr r1, [r5, #8]
    // ldr r0, _02260E84 ; =0xFFFE0000
    // cmp r1, r0
    // blt _02260E6C
    // mov r0, #0x12
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // bgt _02260E6C
    // mov r0, #0x1e
    // ldr r1, [r5, #0xc]
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // blt _02260E6C
    // mov r0, #0x2e
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // ble _02260E78
    // mov r0, #0
    // str r0, [r5]
    // ldr r0, [r5, #4]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r4, r4, #1
    // add r5, #0x1c
    // cmp r4, #8
    // blt _02260DA4
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _02260E84: .word 0xFFFE0000
    // TODO: decompile
}



void ov91_02260E88(void) {
    // mul r4, r3
    // add r4, r0, r4
    // add r6, #0x1c
    *((u32*)(0x1c + 0x18)) = 0;
    *((u32*)(0x1c + 8)) = (r1 << 0xc);
    // add r0, r1, r0
    *((u32*)(0x1c + 0xc)) = (2 << 0x14);
    // add r1, #8
    Sprite_SetMatrix(*((u32*)(0x1c + 4)), 0x1c, (0 + 1));
    // str r1, [r4]
    Sprite_SetDrawFlag(*((u32*)(r4 + 4)), 1);
    *((u32*)(r4 + 0x14)) = 0;
}



void ov91_02260EE0(void) {
    // ldr r2, [sp, #0x10]
    // sub r2, r2, r5
    // mul r2, r0
    _s32_div_f(r2);
    // add r0, r5, r0
    // asr r0, r0, #0x10
    GF_CosDegNoWrap((((r0 << 0x10) << 0x10) >> 0x10));
    // asr r4, r5, #0x1f
    // asr r1, r0, #0x1f
    _ll_mul((r4 << 0xc), r4);
    // add r2, r0, r2
    // adc r1, r3
    // orr r1, r0
    // ldr r0, [sp, #0x14]
    // asr r1, r1, #0xc
    // str r1, [r0]
    GF_SinDegNoWrap(r6, ((2 << 0xa) >> 0xc), (2 << 0xa), 0);
    // asr r1, r0, #0x1f
    _ll_mul(r5, r4);
    // add r2, r0, r2
    // adc r1, r3
    // orr r1, r0
    // ldr r0, [sp, #0x18]
    // asr r1, r1, #0xc
    // str r1, [r0]
}



void ov91_02260F50(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x40]
    // mov r1, #0x5a
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0xc]
    // lsl r1, r1, #2
    // add r6, r0, r1
    // sub r2, r3, #1
    // add r5, r0, #0
    // lsl r0, r2, #1
    // str r0, [sp, #0x14]
    // ldr r1, _0226105C ; =ov91_02261D64
    // lsl r0, r2, #3
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x38]
    // ldr r7, [sp, #0x3c]
    // lsl r0, r0, #1
    // mov r4, #0
    // str r0, [sp, #0x1c]
    // cmp r4, #0
    // bne _02260F86
    // mov r2, #0x24
    // b _02260F94
    // cmp r4, #1
    // bne _02260F8E
    // mov r2, #0x25
    // b _02260F94
    // ldr r1, _02261060 ; =ov91_02261C0A
    // ldr r0, [sp, #0x14]
    // ldrh r2, [r1, r0]
    // ldr r1, [sp, #0xc]
    // add r0, r6, #0
    // add r3, r7, #0
    // bl sub_02018030
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_020181B0
    // mov r1, #0
    // ldr r2, _02261064 ; =0xFFF9E000
    // add r0, r5, #0
    // add r3, r1, #0
    // bl sub_020182A8
    // mov r1, #6
    // lsl r1, r1, #0xa
    // add r0, r5, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl sub_020182C4
    // cmp r4, #1
    // bne _02260FCC
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_020182A0
    // cmp r4, #1
    // bhi _02260FE0
    // ldr r2, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    // add r0, r5, #0
    // ldrh r1, [r2, r1]
    // mov r2, #1
    // bl sub_020182E0
    // b _02260FF0
    // mov r0, #0xb4
    // bl GF_DegreeToSinCosIdxNoWrap
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #1
    // bl sub_020182E0
    // add r4, r4, #1
    // add r6, #0x10
    // add r5, #0x78
    // cmp r4, #3
    // blt _02260F7E
    // mov r0, #0
    // str r0, [sp, #0x10]
    // mov r1, #0x66
    // ldr r0, [sp, #8]
    // lsl r1, r1, #2
    // add r5, r0, r1
    // sub r1, #0x30
    // add r0, r0, r1
    // ldr r6, _02261068 ; =ov91_02261BF8
    // ldr r4, _0226106C ; =ov91_02261BFE
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x40]
    // str r7, [sp]
    // str r0, [sp, #4]
    // ldrh r1, [r4]
    // ldrh r3, [r6]
    // add r0, r5, #0
    // lsl r2, r1, #4
    // ldr r1, [sp, #0x20]
    // add r1, r1, r2
    // ldr r2, [sp, #0xc]
    // bl sub_020180BC
    // ldrh r1, [r4]
    // mov r0, #0x78
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, [sp, #8]
    // add r1, r5, #0
    // add r0, r0, r2
    // bl sub_020181D4
    // ldr r0, [sp, #0x10]
    // add r6, r6, #2
    // add r0, r0, #1
    // add r4, r4, #2
    // add r5, #0x14
    // str r0, [sp, #0x10]
    // cmp r0, #3
    // blt _02261010
    // mov r2, #1
    // mov r1, #0x75
    // ldr r0, [sp, #8]
    // lsl r2, r2, #0xc
    // lsl r1, r1, #2
    // str r2, [r0, r1]
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0226105C: .word ov91_02261D64
    // _02261060: .word ov91_02261C0A
    // _02261064: .word 0xFFF9E000
    // _02261068: .word ov91_02261BF8
    // _0226106C: .word ov91_02261BFE
    // TODO: decompile
}



void ov91_02261070(void) {
    // add r5, r7, r0
    sub_020180F8(r5, r2);
    // add r5, #0x14
    // add r5, r7, r0
    sub_02018068(r5);
    // add r5, #0x10
}



void ov91_022610A8(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x66
    // add r4, r0, #0
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, #0x3c
    // ldr r1, [r4, r1]
    // bl sub_02018124
    // mov r0, #0x76
    // lsl r0, r0, #2
    // ldrb r1, [r4, r0]
    // cmp r1, #0
    // beq _022611B4
    // add r1, r0, #1
    // ldrb r1, [r4, r1]
    // cmp r1, #0
    // beq _022610D6
    // cmp r1, #1
    // beq _02261128
    // cmp r1, #2
    // beq _0226116C
    // b _02261194
    // add r1, r0, #0
    // add r1, #8
    // add r2, r0, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // add r3, r2, r1
    // mov r2, #0x33
    // lsl r2, r2, #0xc
    // cmp r3, r2
    // bge _022610F2
    // add r2, r0, #4
    // ldr r2, [r4, r2]
    // add r1, r2, r1
    // b _022610F4
    // mov r1, #0
    // add r0, r0, #4
    // str r1, [r4, r0]
    // mov r1, #0x1e
    // lsl r1, r1, #4
    // add r0, r1, #0
    // ldr r2, [r4, r1]
    // sub r0, #0x46
    // add r3, r2, r0
    // ldr r0, _022611C8 ; =0x000024CD
    // cmp r3, r0
    // bgt _02261114
    // add r0, r1, #0
    // sub r0, #0x46
    // add r0, r2, r0
    // str r0, [r4, r1]
    // b _02261198
    // str r0, [r4, r1]
    // mov r2, #0x18
    // sub r0, r1, #6
    // strh r2, [r4, r0]
    // sub r0, r1, #7
    // ldrb r0, [r4, r0]
    // add r2, r0, #1
    // sub r0, r1, #7
    // strb r2, [r4, r0]
    // b _02261198
    // add r1, r0, #0
    // add r1, #8
    // add r2, r0, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // add r3, r2, r1
    // mov r2, #0x33
    // lsl r2, r2, #0xc
    // cmp r3, r2
    // bge _02261144
    // add r2, r0, #4
    // ldr r2, [r4, r2]
    // add r1, r2, r1
    // b _02261146
    // mov r1, #0
    // add r0, r0, #4
    // str r1, [r4, r0]
    // ldr r1, _022611CC ; =0x000001DA
    // ldrsh r0, [r4, r1]
    // sub r0, r0, #1
    // strh r0, [r4, r1]
    // ldrsh r0, [r4, r1]
    // cmp r0, #0
    // bgt _02261198
    // sub r0, r1, #1
    // ldrb r0, [r4, r0]
    // add r2, r0, #1
    // sub r0, r1, #1
    // strb r2, [r4, r0]
    // mov r2, #0x33
    // lsl r2, r2, #0xc
    // add r0, r1, #2
    // str r2, [r4, r0]
    // b _02261198
    // add r1, r0, #4
    // mov r2, #1
    // ldr r1, [r4, r1]
    // lsl r2, r2, #0xc
    // add r3, r1, r2
    // mov r1, #0x19
    // lsl r1, r1, #0xe
    // cmp r3, r1
    // bge _0226118A
    // add r1, r0, #4
    // ldr r1, [r4, r1]
    // add r0, r0, #4
    // add r1, r1, r2
    // str r1, [r4, r0]
    // b _02261198
    // mov r1, #0x33
    // lsl r1, r1, #0xc
    // add r0, r0, #4
    // str r1, [r4, r0]
    // b _02261198
    // bl GF_AssertFail
    // mov r1, #0x6b
    // lsl r1, r1, #2
    // add r0, r4, r1
    // add r1, #0x30
    // ldr r1, [r4, r1]
    // bl sub_02018198
    // mov r1, #7
    // lsl r1, r1, #6
    // add r0, r4, r1
    // add r1, #0x1c
    // ldr r1, [r4, r1]
    // bl sub_02018198
    // mov r5, #0
    // add r0, r4, #0
    // bl sub_020181EC
    // add r5, r5, #1
    // add r4, #0x78
    // cmp r5, #3
    // blt _022611B6
    // pop {r3, r4, r5, pc}
    // nop
    // _022611C8: .word 0x000024CD
    // _022611CC: .word 0x000001DA
    // TODO: decompile
}



void ov91_022611D0(void) {
    sub_020182A0(0);
    // add r0, #0x78
    sub_020182A0(r4, 1);
    // str r3, [r4, r0]
    // str r2, [r4, r1]
    // strb r2, [r4, r1]
    // strb r3, [r4, r0]
}



void ov91_02261200(void) {
    // str r1, [r0, r2]
}



void ov91_02261208(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x50
    // add r4, r0, #0
    // ldr r0, [sp, #0x68]
    // ldr r6, [r2]
    // str r0, [sp, #0x68]
    // ldr r0, [r2, #4]
    // ldr r7, [r2, #8]
    // str r0, [sp, #0x2c]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0x30]
    // asr r0, r6, #0x1f
    // str r0, [sp, #0x34]
    // add r5, r1, #0
    // asr r0, r7, #0x1f
    // str r0, [sp, #0x38]
    // ldr r2, [r4]
    // str r3, [sp]
    // ldr r1, [sp, #0x34]
    // add r0, r6, #0
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // ldr r2, [r4, #4]
    // str r0, [sp, #0x3c]
    // str r1, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x30]
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // ldr r2, [r4, #8]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x40]
    // ldr r1, [sp, #0x38]
    // add r0, r7, #0
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // ldr r2, [r5, #8]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x44]
    // ldr r1, [sp, #0x38]
    // add r0, r7, #0
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // ldr r2, [r5]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x48]
    // ldr r1, [sp, #0x34]
    // add r0, r6, #0
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // ldr r2, [r5, #4]
    // str r0, [sp, #0x4c]
    // add r6, r1, #0
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x30]
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // mov ip, r0
    // mov r7, #2
    // str r1, [sp, #8]
    // ldr r0, [sp, #0x3c]
    // lsl r7, r7, #0xa
    // mov r1, #0
    // add r2, r0, r7
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x20]
    // adc r0, r1
    // str r0, [sp, #0x28]
    // lsl r0, r0, #0x14
    // lsr r2, r2, #0xc
    // orr r2, r0
    // ldr r0, [sp, #0x40]
    // add r0, r0, r7
    // adc r3, r1
    // str r3, [sp, #0x20]
    // lsl r3, r3, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r3
    // add r2, r2, r0
    // ldr r0, [sp, #0x44]
    // ldr r3, [sp, #0x18]
    // add r0, r0, r7
    // adc r3, r1
    // str r3, [sp, #0x18]
    // lsl r3, r3, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r3
    // add r2, r2, r0
    // ldr r0, [sp]
    // sub r0, r0, r2
    // ldr r2, [sp, #0x48]
    // add r3, r2, r7
    // ldr r2, [sp, #0x10]
    // adc r2, r1
    // str r2, [sp, #0x10]
    // lsl r2, r2, #0x14
    // lsr r3, r3, #0xc
    // orr r3, r2
    // ldr r2, [sp, #0x4c]
    // add r2, r2, r7
    // adc r6, r1
    // lsl r6, r6, #0x14
    // lsr r2, r2, #0xc
    // orr r2, r6
    // mov r6, ip
    // add r7, r6, r7
    // ldr r6, [sp, #8]
    // adc r6, r1
    // str r6, [sp, #8]
    // lsl r1, r6, #0x14
    // lsr r6, r7, #0xc
    // orr r6, r1
    // add r1, r2, r6
    // add r1, r3, r1
    // bl FX_Div
    // add r6, r0, #0
    // ldr r0, [r5]
    // asr r7, r6, #0x1f
    // asr r1, r0, #0x1f
    // add r2, r6, #0
    // add r3, r7, #0
    // bl _ll_mul
    // mov r3, #2
    // add r2, r0, #0
    // lsl r3, r3, #0xa
    // add r3, r2, r3
    // ldr r2, _02261378 ; =0x00000000
    // ldr r0, [r4]
    // adc r1, r2
    // lsr r2, r3, #0xc
    // lsl r1, r1, #0x14
    // orr r2, r1
    // add r1, r0, r2
    // ldr r0, [sp, #0x68]
    // add r2, r6, #0
    // str r1, [r0]
    // ldr r0, [r5, #4]
    // add r3, r7, #0
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r3, #2
    // add r2, r0, #0
    // lsl r3, r3, #0xa
    // add r3, r2, r3
    // ldr r2, _02261378 ; =0x00000000
    // ldr r0, [r4, #4]
    // adc r1, r2
    // lsr r2, r3, #0xc
    // lsl r1, r1, #0x14
    // orr r2, r1
    // add r1, r0, r2
    // ldr r0, [sp, #0x68]
    // add r2, r6, #0
    // str r1, [r0, #4]
    // ldr r0, [r5, #8]
    // add r3, r7, #0
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r3, #2
    // ldr r2, [r4, #8]
    // mov r4, #0
    // lsl r3, r3, #0xa
    // add r3, r0, r3
    // adc r1, r4
    // lsl r0, r1, #0x14
    // lsr r1, r3, #0xc
    // orr r1, r0
    // ldr r0, [sp, #0x68]
    // add r1, r2, r1
    // str r1, [r0]
    // ldr r0, [sp, #0x6c]
    // str r6, [r0]
    // add sp, #0x50
    // pop {r3, r4, r5, r6, r7, pc}
    // _02261378: .word 0x00000000
    // TODO: decompile
}



void ov91_0226137C(void) {
    // str r1, [r0, r2]
}



void ov91_02261384(void) {
    // ldr r1, [r5, r1]
    // add r0, sp, #0
    Camera_GetAngle((0x19 << 4));
    // add r0, sp, #0
    // strh r4, [r0]
    // ldr r1, [r5, r1]
    // add r0, sp, #0
    Camera_SetAnglePos((0x19 << 4));
}



void ov91_022613AC(void) {
}



void ov91_022613C8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldrh r0, [r4]
    // add r5, r1, #0
    // cmp r0, #3
    // bhi _022614CA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022613E2: ; jump table
    // mov r1, #4
    // ldrsh r1, [r4, r1]
    // ldrb r2, [r4, #6]
    // add r0, r5, #0
    // sub r1, r1, #1
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // bl ov91_022614FC
    // ldrh r0, [r4]
    // add r0, r0, #1
    // strh r0, [r4]
    // mov r0, #0
    // strh r0, [r4, #2]
    // mov r0, #2
    // ldrsh r0, [r4, r0]
    // cmp r0, #0x10
    // blt _0226143E
    // mov r0, #3
    // strh r0, [r4]
    // mov r0, #0
    // strh r0, [r4, #2]
    // mov r1, #4
    // ldrsh r1, [r4, r1]
    // ldrb r2, [r4, #6]
    // add r0, r5, #0
    // bl ov91_022614FC
    // mov r0, #0x10
    // str r0, [sp]
    // mov r1, #4
    // ldrsh r2, [r4, r1]
    // mov r3, #1
    // add r1, r3, #0
    // lsl r1, r2
    // ldr r0, _022614D0 ; =0x04001050
    // mov r2, #8
    // mov r3, #0
    // bl G2x_SetBlendAlpha_
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // add r0, r0, #1
    // strh r0, [r4, #2]
    // mov r0, #4
    // ldrsh r2, [r4, r0]
    // sub r5, r2, #2
    // sub r6, r2, #1
    // cmp r2, #0
    // bge _02261450
    // add r2, r2, #3
    // cmp r5, #0
    // bge _02261456
    // add r5, r5, #3
    // cmp r6, #0
    // bge _0226145C
    // add r6, r6, #3
    // mov r0, #2
    // ldrsh r0, [r4, r0]
    // mov r4, #1
    // lsl r1, r0, #4
    // asr r0, r1, #3
    // lsr r0, r0, #0x1c
    // add r0, r1, r0
    // asr r1, r0, #4
    // mov r0, #0x10
    // sub r3, r0, r1
    // add r1, r4, #0
    // lsl r1, r2
    // add r2, r4, #0
    // sub r0, r0, r3
    // str r0, [sp]
    // lsl r2, r5
    // lsl r4, r6
    // orr r4, r2
    // mov r2, #8
    // ldr r0, _022614D0 ; =0x04001050
    // orr r2, r4
    // bl G2x_SetBlendAlpha_
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #2
    // ldrsh r1, [r4, r0]
    // cmp r1, #8
    // blt _022614A2
    // mov r1, #0
    // ldr r0, _022614D0 ; =0x04001050
    // strh r1, [r4]
    // strh r1, [r0]
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // add r1, r1, #1
    // strh r1, [r4, #2]
    // ldrsh r0, [r4, r0]
    // mov r5, #1
    // lsl r1, r0, #4
    // asr r0, r1, #2
    // lsr r0, r0, #0x1d
    // add r0, r1, r0
    // asr r3, r0, #3
    // mov r0, #0x10
    // sub r0, r0, r3
    // str r0, [sp]
    // mov r1, #4
    // ldrsh r2, [r4, r1]
    // add r1, r5, #0
    // ldr r0, _022614D0 ; =0x04001050
    // lsl r1, r2
    // mov r2, #8
    // bl G2x_SetBlendAlpha_
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _022614D0: .word 0x04001050
    // TODO: decompile
}



void ov91_022614D4(void) {
    *((u8*)(r0 + 7)) = (*((u8*)(r0 + 7)) + 1);
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    _s32_div_f((4 + 1), 3);
    *((u16*)(r4 + 4)) = r1;
    *((u8*)(r4 + 7)) = 0;
}



void ov91_022614FC(void) {
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // sub r5, r0, r4
    // bpl _0226151E
    // sub r1, r1, r4
    SetBgPriority(((((r5 + 3) + 4) << 0x18) >> 0x18), ((2 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r6), (((r5 + 4) << 0x18) >> 0x18), 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r6), (((r5 + 4) << 0x18) >> 0x18), 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)r6), (((r5 + 4) << 0x18) >> 0x18));
}



void ov91_02261580(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x7c
    // add r5, r0, #0
    // add r6, r3, #0
    // add r0, #0x9c
    // add r4, r1, #0
    // str r6, [r0]
    // mov r1, #0x8c
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r7, r2, #0
    // str r6, [sp, #8]
    // add r1, #0xbc
    // ldr r0, [r4, r1]
    // add r1, r7, #0
    // mov r2, #0xa
    // mov r3, #0
    // bl AddCharResObjFromOpenNarc
    // str r0, [r5]
    // mov r1, #0x8c
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // add r1, #0xc0
    // ldr r0, [r4, r1]
    // add r1, r7, #0
    // mov r2, #0xb
    // mov r3, #0
    // bl AddPlttResObjFromOpenNarc
    // str r0, [r5, #4]
    // mov r1, #0x8c
    // str r1, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // add r1, #0xc4
    // ldr r0, [r4, r1]
    // add r1, r7, #0
    // mov r2, #9
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // str r0, [r5, #8]
    // mov r1, #0x8c
    // str r1, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // add r1, #0xc8
    // ldr r0, [r4, r1]
    // add r1, r7, #0
    // mov r2, #8
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // str r0, [r5, #0xc]
    // ldr r0, [r5]
    // bl sub_0200AE18
    // cmp r0, #0
    // bne _02261608
    // bl GF_AssertFail
    // ldr r0, [r5, #4]
    // bl sub_0200B00C
    // cmp r0, #0
    // bne _02261616
    // bl GF_AssertFail
    // ldr r0, [r5]
    // bl sub_0200A740
    // ldr r0, [r5, #4]
    // bl sub_0200A740
    // mov r1, #0x8c
    // add r0, r1, #0
    // add r2, r1, #0
    // str r1, [sp]
    // sub r0, #0x8d
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0xbc
    // ldr r2, [r4, r2]
    // add r3, r1, #0
    // str r2, [sp, #0x14]
    // add r2, r1, #0
    // add r2, #0xc0
    // ldr r2, [r4, r2]
    // str r2, [sp, #0x18]
    // add r2, r1, #0
    // add r2, #0xc4
    // ldr r2, [r4, r2]
    // str r2, [sp, #0x1c]
    // add r2, r1, #0
    // add r2, #0xc8
    // ldr r2, [r4, r2]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r5, #0
    // add r0, #0x10
    // add r2, r1, #0
    // bl CreateSpriteResourcesHeader
    // ldr r0, [r4, #0x1c]
    // str r0, [sp, #0x5c]
    // add r0, r5, #0
    // add r0, #0x10
    // str r0, [sp, #0x60]
    // ldr r0, _0226178C ; =0xFFFC0000
    // str r6, [sp, #0x78]
    // str r0, [sp, #0x64]
    // mov r0, #3
    // lsl r0, r0, #0x10
    // str r0, [sp, #0x68]
    // mov r0, #1
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x74]
    // add r0, sp, #0x5c
    // bl Sprite_Create
    // mov r1, #0
    // str r0, [r5, #0x34]
    // bl Sprite_SetDrawFlag
    // mov r0, #0x10
    // add r1, r6, #0
    // bl String_New
    // str r0, [r5, #0x5c]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, r5, #0
    // ldr r0, [r4]
    // add r1, #0x38
    // mov r2, #3
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // add r0, r5, #0
    // add r0, #0x38
    // add r1, r6, #0
    // bl sub_02013910
    // mov r1, #1
    // str r0, [r5, #0x4c]
    // bl sub_02013948
    // mov r1, #1
    // add r3, r5, #0
    // add r2, r1, #0
    // add r3, #0x50
    // bl sub_02021AC8
    // cmp r0, #1
    // beq _022616D2
    // bl GF_AssertFail
    // mov r1, #0x96
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // add r1, #0xb6
    // ldr r0, [r4, r1]
    // mov r1, #0x10
    // mov r2, #7
    // mov r3, #0
    // bl AddPlttResObjFromNarc
    // str r0, [r5, #0x60]
    // bl sub_0200B00C
    // cmp r0, #0
    // bne _022616FA
    // bl GF_AssertFail
    // ldr r0, [r5, #0x60]
    // bl sub_0200A740
    // mov r0, #0x63
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // str r0, [sp, #0x2c]
    // add r0, r5, #0
    // add r0, #0x38
    // str r0, [sp, #0x30]
    // ldr r0, [r4, #0x1c]
    // str r0, [sp, #0x34]
    // ldr r0, [r5, #0x60]
    // bl SpriteTransfer_GetPaletteProxy
    // str r0, [sp, #0x38]
    // ldr r0, [r5, #0x34]
    // str r0, [sp, #0x3c]
    // ldr r0, [r5, #0x54]
    // str r0, [sp, #0x40]
    // mov r0, #6
    // mvn r0, r0
    // str r0, [sp, #0x44]
    // add r0, r0, #2
    // str r0, [sp, #0x48]
    // mov r0, #0
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // mov r0, #1
    // str r0, [sp, #0x54]
    // str r6, [sp, #0x58]
    // ldr r1, [r5, #0x4c]
    // add r0, sp, #0x2c
    // bl TextOBJ_Create
    // mov r1, #0
    // str r0, [r5, #0x48]
    // bl TextOBJ_SetSpritesDrawFlag
    // add r0, r5, #0
    // add r0, #0x38
    // bl RemoveWindow
    // mov r2, #8
    // add r0, r5, #0
    // mov r3, #9
    // str r2, [sp]
    // ldr r1, _0226178C ; =0xFFFC0000
    // add r0, #0x64
    // lsl r2, r2, #0xe
    // lsl r3, r3, #0xe
    // bl ov91_0225D40C
    // mov r0, #4
    // mov r1, #3
    // lsl r1, r1, #0x10
    // str r0, [sp]
    // add r0, r5, #0
    // add r0, #0x7c
    // add r2, r1, #0
    // lsr r3, r1, #2
    // bl ov91_0225D40C
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0x94
    // strh r1, [r0]
    // mov r0, #4
    // add r5, #0x96
    // strh r0, [r5]
    // add sp, #0x7c
    // pop {r4, r5, r6, r7, pc}
    // _0226178C: .word 0xFFFC0000
    // TODO: decompile
}



void ov91_02261790(void) {
    TextOBJ_Destroy(*((u32*)(r0 + 0x48)));
    sub_0200B0A8(*((u32*)(r5 + 0x60)));
    // ldr r0, [r4, r0]
    DestroySingle2DGfxResObj((0x53 << 2), *((u32*)(r5 + 0x60)));
    // add r0, #0x50
    sub_02021B5C(r5);
    sub_02013938(*((u32*)(r5 + 0x4c)));
    String_Delete(*((u32*)(r5 + 0x5c)));
    Sprite_Delete(*((u32*)(r5 + 0x34)));
    sub_0200AEB0(*((u32*)r5));
    sub_0200B0A8(*((u32*)(r5 + 4)));
    // ldr r0, [r4, r0]
    DestroySingle2DGfxResObj((0x52 << 2), *((u32*)r5));
    // ldr r0, [r4, r0]
    DestroySingle2DGfxResObj((0x53 << 2), *((u32*)(r5 + 4)));
    // ldr r0, [r4, r0]
    DestroySingle2DGfxResObj((0x15 << 4), *((u32*)(r5 + 8)));
    // ldr r0, [r4, r0]
    DestroySingle2DGfxResObj((0x55 << 2), *((u32*)(r5 + 0xc)));
}



void ov91_02261808(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #1
    // add r4, r1, #0
    // str r0, [sp]
    // add r1, r2, #0
    // mov r2, #2
    // ldr r0, [r5, #0x5c]
    // add r3, r2, #0
    // bl String16_FormatInteger
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, r5, #0
    // ldr r0, [r4]
    // add r1, #0x38
    // mov r2, #3
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0226188C ; =0x000F0E00
    // add r3, r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, #0
    // ldr r2, [r5, #0x5c]
    // add r0, #0x38
    // bl AddTextPrinterParameterizedWithColor
    // add r3, r5, #0
    // add r3, #0x9c
    // add r2, r5, #0
    // ldr r0, [r5, #0x48]
    // ldr r1, [r5, #0x4c]
    // ldr r3, [r3]
    // add r2, #0x38
    // bl TextOBJ_CopyFromBGWindow
    // add r0, r5, #0
    // add r0, #0x38
    // bl RemoveWindow
    // ldr r0, [r5, #0x48]
    // mov r1, #1
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // add r0, r5, #0
    // mov r1, #1
    // add r0, #0x98
    // strh r1, [r0]
    // mov r0, #0
    // add r5, #0x9a
    // strh r0, [r5]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0226188C: .word 0x000F0E00
    // TODO: decompile
}



void ov91_02261890(void) {
    // add r1, #0x98
    // ldrh r1, [r1]
    // add r1, #0x9a
    // strh r2, [r1]
    // add r0, #0x98
    // strh r1, [r0]
}



void ov91_022618B0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r0, #0x98
    // ldrh r0, [r0]
    // add r4, r1, #0
    // cmp r0, #3
    // beq _0226191E
    // mov r0, #1
    // str r0, [sp]
    // add r1, r2, #0
    // mov r2, #2
    // ldr r0, [r5, #0x5c]
    // add r3, r2, #0
    // bl String16_FormatInteger
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, r5, #0
    // ldr r0, [r4]
    // add r1, #0x38
    // mov r2, #3
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02261924 ; =0x000F0E00
    // add r3, r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, #0
    // ldr r2, [r5, #0x5c]
    // add r0, #0x38
    // bl AddTextPrinterParameterizedWithColor
    // add r3, r5, #0
    // add r3, #0x9c
    // add r2, r5, #0
    // ldr r0, [r5, #0x48]
    // ldr r1, [r5, #0x4c]
    // ldr r3, [r3]
    // add r2, #0x38
    // bl TextOBJ_CopyFromBGWindow
    // add r0, r5, #0
    // add r0, #0x38
    // bl RemoveWindow
    // mov r0, #0
    // add r5, #0x96
    // strh r0, [r5]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _02261924: .word 0x000F0E00
    // TODO: decompile
}



void ov91_02261928(void) {
    // add r0, #0x98
    // ldrh r0, [r0]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02261942: ; jump table
    // ldrsh r0, [r4, r0]
    // add r0, #0x94
    // strh r1, [r0]
    // add r0, #0x98
    // strh r1, [r0]
    // ldrsh r0, [r4, r0]
    // add r0, #0x9a
    // strh r1, [r0]
    // ldrsh r0, [r4, r0]
    // add r0, #0x94
    // strh r1, [r0]
    // add r0, #0x98
    // strh r1, [r0]
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r0 + 0x48)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x34)), 0);
    // ldrsh r0, [r4, r1]
    // add r0, #0x96
    // strh r2, [r0]
    // ldrsh r1, [r4, r1]
    // add r0, #0x8c
    // str r1, [r0]
    // add r0, #0x7c
    ov91_0225D46C(r4, 0x96, (r0 + 1));
    // ldrsh r0, [r4, r0]
    *((u32*)(r4 + 0x74)) = 0x94;
    // add r0, #0x64
    ov91_0225D46C(r4);
    // add r1, sp, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    Sprite_SetMatrix(*((u32*)(r4 + 0x34)));
    sub_02013728(*((u32*)(r4 + 0x48)));
}



void ov91_022619E8(void) {
    // mov r2, #0
    // strh r2, [r0]
    // mov r1, #1
    // strb r1, [r0, #2]
    // strb r2, [r0, #3]
    // ldr r3, _022619F8 ; =PlaySE
    // ldr r0, _022619FC ; =0x00000586
    // bx r3
    // _022619F8: .word PlaySE
    // _022619FC: .word 0x00000586
    // TODO: decompile
}



void ov91_02261A00(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldrb r0, [r4, #2]
    // add r5, r1, #0
    // add r6, r2, #0
    // cmp r0, #0
    // beq _02261B08
    // ldrh r0, [r4]
    // cmp r0, #5
    // bhi _02261B08
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02261A22: ; jump table
    // mov r0, #3
    // ldrsb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, #3]
    // ldrsb r1, [r4, r0]
    // mov r0, #0x19
    // lsl r0, r0, #0xc
    // mul r0, r1
    // mov r1, #0x3a
    // bl _s32_div_f
    // mov r1, #1
    // add r2, r0, #0
    // lsl r1, r1, #0xc
    // add r0, r5, #0
    // add r1, r2, r1
    // bl ov91_02261200
    // mov r0, #3
    // ldrsb r1, [r4, r0]
    // mov r0, #0x96
    // mul r0, r1
    // mov r1, #0x3a
    // bl _s32_div_f
    // add r2, r0, #0
    // mov r0, #7
    // add r1, r0, #0
    // add r1, #0xf9
    // add r1, r2, r1
    // bl GF_SndHandleSetTempoRatio
    // mov r0, #3
    // ldrsb r0, [r4, r0]
    // cmp r0, #0xc
    // bne _02261A7C
    // ldr r0, _02261B0C ; =0x00000587
    // bl PlaySE
    // mov r0, #3
    // ldrsb r0, [r4, r0]
    // cmp r0, #0x3a
    // blt _02261B08
    // ldrh r0, [r4]
    // add sp, #4
    // add r0, r0, #1
    // strh r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #4
    // mov r1, #0x10
    // mov r2, #0
    // mov r3, #0x3f
    // bl StartBrightnessTransition
    // ldrh r0, [r4]
    // add sp, #4
    // add r0, r0, #1
    // strh r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #1
    // bl IsBrightnessTransitionActive
    // cmp r0, #1
    // bne _02261B08
    // add r0, r5, #0
    // bl ov91_022611D0
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl ov91_02261200
    // add r0, r6, #0
    // mov r1, #1
    // bl ov91_02260364
    // ldrh r0, [r4]
    // add sp, #4
    // add r0, r0, #1
    // strh r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0xe
    // mov r1, #0
    // mov r2, #0x10
    // mov r3, #0x3f
    // bl StartBrightnessTransition
    // ldrh r0, [r4]
    // add sp, #4
    // add r0, r0, #1
    // strh r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #1
    // bl IsBrightnessTransitionActive
    // cmp r0, #1
    // bne _02261B08
    // ldrh r0, [r4]
    // add sp, #4
    // add r0, r0, #1
    // strh r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0
    // strb r0, [r4, #2]
    // strh r0, [r4]
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _02261B0C: .word 0x00000587
    // TODO: decompile
}



void ov91_02261B10(void) {
    // mov r0, #7
    // add r1, r0, #0
    // ldr r3, _02261B1C ; =GF_SndHandleSetTempoRatio
    // add r1, #0xf9
    // bx r3
    // nop
    // _02261B1C: .word GF_SndHandleSetTempoRatio
    // TODO: decompile
}



void ov91_02261B20(void) {
    // ldr r0, _02261B24 ; =ov91_02262754
    // bx lr
    // _02261B24: .word ov91_02262754
    // TODO: decompile
}



u8 ov91_02261B28(void) {
}



void ov91_02261B2C(void) {
}



u8 ov91_02261B48(void) {
}



void ov91_02261B4C(void) {
}



void ov91_02261B58(void) {
}



void ov91_02261B64(void) {
    ov91_0225CA90(r3, r2, r0);
    sub_0203769C();
    ov91_0225CA74(r6, r4, r5);
}



void ov91_02261B8C(void) {
}



void ov91_02261B9C(void) {
}



void ov91_02261BAC(void) {
}



void ov91_02261BBC(void) {
}



void ov91_02261BC8(void) {
}



u8 ov91_02261BD8(void) {
}



u8 ov91_02261BDC(void) {
}



u8 ov91_02261BE0(void) {
}



u8 ov91_02261BE4(void) {
}


