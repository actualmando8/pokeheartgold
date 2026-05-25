/* Decompiled from asm/overlay_80_022324C4.s */
#include "global.h"

void ov80_022324C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r7, r1, #0
    // add r5, r0, #0
    // ldr r1, _02232818 ; =0x00000A28
    // mov r0, #0xb
    // add r6, r2, #0
    // str r3, [sp, #4]
    // bl Heap_Alloc
    // ldr r1, _0223281C ; =ov80_0223DD48
    // ldr r2, _02232818 ; =0x00000A28
    // str r0, [r1]
    // mov r1, #0
    // bl MI_CpuFill8
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r4, [r0]
    // add r0, r5, #0
    // bl sub_02030CC8
    // str r0, [r4, #8]
    // ldr r1, _0223281C ; =ov80_0223DD48
    // str r5, [r4, #4]
    // mov r0, #0xb
    // str r0, [r4]
    // ldr r4, [r1]
    // bl SaveArray_Party_Alloc
    // str r0, [r4, #0x28]
    // mov r0, #0xb
    // bl SaveArray_Party_Alloc
    // str r0, [r4, #0x2c]
    // mov r0, #0xa2
    // ldr r1, [sp, #0x38]
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // add r0, r5, #0
    // ldr r4, [r4, #8]
    // bl sub_02030E08
    // add r5, r0, #0
    // cmp r7, #0
    // beq _02232520
    // b _022326BA
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r1, [r0]
    // mov r0, #0
    // strb r6, [r1, #0x10]
    // strb r0, [r1, #0x11]
    // add r0, r4, #0
    // bl sub_02030CBC
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r0, [r0]
    // ldrb r2, [r0, #0x10]
    // cmp r2, #3
    // bne _02232546
    // ldr r0, [r0, #4]
    // bl Save_VarsFlags_Get
    // bl Save_VarsFlags_GetVar4052
    // b _02232552
    // mov r3, #0
    // add r0, r5, #0
    // mov r1, #9
    // str r3, [sp]
    // bl sub_02030E58
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bne _02232592
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r0, [r0]
    // ldr r0, [r0, #4]
    // bl Save_Frontier_GetStatic
    // add r5, r0, #0
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r0, [r0]
    // ldrb r0, [r0, #0x10]
    // bl sub_0205C1A0
    // add r4, r0, #0
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r0, [r0]
    // ldrb r0, [r0, #0x10]
    // bl sub_0205C1A0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl FrontierSave_GetStat
    // ldr r1, _0223281C ; =ov80_0223DD48
    // ldr r1, [r1]
    // strh r0, [r1, #0x14]
    // b _02232630
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r4, [r0]
    // mov r0, #0
    // strh r0, [r4, #0x14]
    // ldr r0, [r4, #4]
    // bl Save_Frontier_GetStatic
    // add r5, r0, #0
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r0, [r0]
    // ldrb r0, [r0, #0x10]
    // bl sub_0205C1F0
    // add r7, r0, #0
    // ldrb r0, [r4, #0x10]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r3, #0
    // bl sub_02031108
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r0, [r0]
    // ldr r0, [r0, #4]
    // bl Save_Frontier_GetStatic
    // add r4, r0, #0
    // add r0, r6, #0
    // bl sub_0205C218
    // add r5, r0, #0
    // add r0, r6, #0
    // bl sub_0205C218
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r3, #0
    // bl sub_02031108
    // ldr r4, _0223281C ; =ov80_0223DD48
    // mov r5, #0
    // ldr r0, [r4]
    // ldr r0, [r0, #4]
    // bl Save_Frontier_GetStatic
    // add r6, r0, #0
    // ldr r0, [r4]
    // lsl r1, r5, #0x18
    // ldrb r0, [r0, #0x10]
    // lsr r1, r1, #0x18
    // bl sub_0205C174
    // add r7, r0, #0
    // ldr r0, [r4]
    // lsl r1, r5, #0x18
    // ldrb r0, [r0, #0x10]
    // lsr r1, r1, #0x18
    // bl sub_0205C174
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r6, #0
    // add r1, r7, #0
    // mov r3, #1
    // bl sub_02031108
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // cmp r5, #3
    // blo _022325F2
    // ldr r0, _0223281C ; =ov80_0223DD48
    // mov r1, #7
    // ldr r5, [r0]
    // ldrh r0, [r5, #0x14]
    // bl _s32_div_f
    // strh r0, [r5, #0x16]
    // mov r0, #0
    // str r0, [r5, #0x18]
    // add r1, r5, #0
    // ldr r0, [sp, #4]
    // add r1, #0x24
    // strb r0, [r1]
    // add r1, sp, #0x20
    // add r0, r5, #0
    // ldrh r2, [r1, #0x10]
    // add r0, #0x25
    // strb r2, [r0]
    // add r0, r5, #0
    // ldrh r1, [r1, #0x14]
    // add r0, #0x26
    // strb r1, [r0]
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r0, [r0]
    // ldr r0, [r0, #4]
    // bl Save_Frontier_GetStatic
    // add r4, r0, #0
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r0, [r0]
    // ldrb r0, [r0, #0x10]
    // bl sub_0205C1F0
    // add r6, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // bl FrontierSave_GetStat
    // strh r0, [r5, #0x20]
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r0, [r0]
    // ldr r0, [r0, #4]
    // bl Save_Frontier_GetStatic
    // add r4, r0, #0
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r0, [r0]
    // ldrb r0, [r0, #0x10]
    // bl sub_0205C1F0
    // add r6, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r3, #0xa
    // bl sub_02031228
    // b _0223273E
    // ldr r0, _0223281C ; =ov80_0223DD48
    // mov r1, #0
    // ldr r5, [r0]
    // str r1, [sp]
    // add r0, r4, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl sub_02030D84
    // strb r0, [r5, #0x10]
    // mov r2, #0
    // str r2, [sp]
    // add r0, r4, #0
    // mov r1, #1
    // add r3, r2, #0
    // bl sub_02030D84
    // strb r0, [r5, #0x11]
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r6, [r0]
    // ldr r0, [r6, #4]
    // bl Save_Frontier_GetStatic
    // add r7, r0, #0
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r0, [r0]
    // ldrb r0, [r0, #0x10]
    // bl sub_0205C1A0
    // str r0, [sp, #0xc]
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1A0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r1, [sp, #0xc]
    // add r0, r7, #0
    // bl FrontierSave_GetStat
    // strh r0, [r6, #0x14]
    // ldrh r0, [r6, #0x14]
    // mov r1, #7
    // bl _s32_div_f
    // mov r5, #0
    // strh r0, [r6, #0x16]
    // ldr r7, _0223281C ; =ov80_0223DD48
    // add r6, r5, #0
    // lsl r2, r5, #0x18
    // add r0, r4, #0
    // mov r1, #7
    // lsr r2, r2, #0x18
    // add r3, r6, #0
    // str r6, [sp]
    // bl sub_02030D84
    // ldr r1, [r7]
    // add r1, r1, r5
    // add r1, #0x24
    // strb r0, [r1]
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // cmp r5, #3
    // blo _0223271C
    // ldr r6, _0223281C ; =ov80_0223DD48
    // ldr r7, _02232820 ; =0x0000036A
    // mov r4, #0
    // ldr r5, [r6]
    // ldr r0, [r5, #4]
    // bl SaveArray_Party_Get
    // add r1, r5, r4
    // add r1, #0x24
    // ldrb r1, [r1]
    // bl Party_GetMonByIndex
    // ldr r5, [r6]
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // lsl r1, r4, #1
    // add r1, r5, r1
    // strh r0, [r1, r7]
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #3
    // blo _02232744
    // ldr r0, [r5, #4]
    // bl SaveArray_Party_Get
    // str r0, [sp, #8]
    // ldr r0, _0223281C ; =ov80_0223DD48
    // mov r1, #0
    // ldr r0, [r0]
    // ldrb r0, [r0, #0x10]
    // bl ov80_02237B24
    // add r7, r0, #0
    // mov r5, #0
    // cmp r7, #0
    // ble _022327F8
    // ldr r6, _0223281C ; =ov80_0223DD48
    // ldr r1, [r6]
    // ldr r0, [sp, #8]
    // add r1, r1, r5
    // add r1, #0x24
    // ldrb r1, [r1]
    // bl Party_GetMonByIndex
    // add r1, r0, #0
    // ldr r0, [r6]
    // ldr r0, [r0, #0x28]
    // bl Party_AddMon
    // ldr r0, [r6]
    // add r1, r5, #0
    // ldr r0, [r0, #0x28]
    // bl Party_GetMonByIndex
    // mov r1, #0
    // str r1, [sp, #0x14]
    // add r4, r0, #0
    // mov r1, #6
    // add r2, sp, #0x14
    // bl SetMonData
    // add r0, r4, #0
    // mov r1, #0xa1
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0x32
    // bls _022327EE
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x32
    // bl GetMonExpBySpeciesAndLevel
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // mov r1, #8
    // add r2, sp, #0x10
    // bl SetMonData
    // add r0, r4, #0
    // bl CalcMonLevelAndStats
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // cmp r5, r7
    // blt _0223278E
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r0, [r0]
    // ldrb r0, [r0, #0x10]
    // bl ov80_02237D8C
    // cmp r0, #1
    // bne _02232810
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r0, [r0]
    // ldr r0, [r0, #4]
    // bl ov80_0222A840
    // ldr r0, _0223281C ; =ov80_0223DD48
    // ldr r0, [r0]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _02232818: .word 0x00000A28
    // _0223281C: .word ov80_0223DD48
    // _02232820: .word 0x0000036A
    // TODO: decompile
}




void ov80_02232824(void) {
    ov80_02232838();
    ov80_02232908();
}




void ov80_02232838(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r0, #0
    // ldr r0, [r7, #0x28]
    // bl Party_GetCount
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // mov r6, #0
    // str r0, [sp, #0x10]
    // cmp r0, #0
    // ble _022328A0
    // add r5, r7, #0
    // ldr r0, [r7, #0x28]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // mov r1, #0x3a
    // mov r2, #0
    // add r4, r0, #0
    // bl GetMonData
    // mov r1, #0xe5
    // lsl r1, r1, #2
    // strh r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0x3b
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _02232900 ; =0x00000396
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0x3c
    // bl GetMonData
    // mov r1, #0xe6
    // lsl r1, r1, #2
    // strh r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0x3d
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _02232904 ; =0x0000039A
    // add r6, r6, #1
    // strh r0, [r5, r1]
    // ldr r0, [sp, #0x10]
    // add r5, #8
    // cmp r6, r0
    // blt _02232852
    // add r0, r7, #0
    // bl ov80_02237ED8
    // add r1, r0, #0
    // add r2, r7, #0
    // ldrb r0, [r7, #0x10]
    // add r2, #0x30
    // mov r3, #0xe
    // bl ov80_02237ADC
    // ldrb r0, [r7, #0x10]
    // mov r1, #1
    // ldrb r4, [r7, #0x11]
    // bl ov80_02237B58
    // add r5, r0, #0
    // ldrb r0, [r7, #0x10]
    // bl ov80_02237D8C
    // mov r3, #0xa2
    // lsl r3, r3, #2
    // add r1, r7, r3
    // str r1, [sp]
    // add r1, r3, #0
    // sub r1, #0x14
    // add r1, r7, r1
    // str r1, [sp, #4]
    // add r1, r3, #0
    // sub r1, #0x10
    // add r1, r7, r1
    // lsl r0, r0, #0x18
    // add r2, r4, #7
    // str r1, [sp, #8]
    // lsr r0, r0, #0x18
    // lsl r1, r4, #1
    // lsl r2, r2, #1
    // str r0, [sp, #0xc]
    // add r1, r7, r1
    // add r2, r7, r2
    // sub r3, #0x1c
    // ldrh r1, [r1, #0x30]
    // ldrh r2, [r2, #0x30]
    // add r0, r5, #0
    // add r3, r7, r3
    // bl ov80_0222A6B8
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02232900: .word 0x00000396
    // _02232904: .word 0x0000039A
    // TODO: decompile
}




void ov80_02232908(void) {
    ov80_022329B4();
    // str r7, [sp]
    sub_02030D84(*((u32*)(r5 + 8)), 6, ((0 << 0x18) >> 0x18), 0);
    *((u16*)(r6 + 0x30)) = r0;
    // add r4, sp, #0x30
    // str r0, [sp]
    sub_02030D84(*((u32*)(r5 + 8)), 8, ((0 << 0x18) >> 0x18), 0);
    // strh r0, [r4]
    // ldrh r1, [r4]
    // strh r1, [r7, r0]
    // add r0, sp, #0x18
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x3c
    // add r1, sp, #0x30
    // add r2, sp, #0x10
    ov80_0222A52C(0xcd, 0);
    AllocMonZeroed(0xb);
    // add r4, sp, #0x3c
    ov80_02237D88(r5);
    ov80_0222A140(r4, r6, r0);
    ov80_02237E18(r5, *((u32*)(r5 + 0x2c)), r6);
    // add r4, #0x38
    Heap_Free(r6);
}




void ov80_022329B4(void) {
    Party_GetCount(*((u32*)(r0 + 0x28)));
    // str r0, [sp, #4]
    // add r7, sp, #8
    Party_GetMonByIndex(*((u32*)(r5 + 0x28)), 0);
    // str r0, [sp]
    sub_02030D84(*((u32*)(r5 + 8)), 2, ((r4 << 0x18) >> 0x18), 0);
    // add r2, sp, #8
    *((u16*)(r7 + 2)) = r0;
    // add r2, #2
    SetMonData(r6, 0xa3);
    // str r0, [sp]
    sub_02030D84(*((u32*)(r5 + 8)), 3, ((r4 << 0x18) >> 0x18), 0);
    // strb r0, [r7]
    // add r2, sp, #8
    SetMonData(r6, 0x3a);
    // str r0, [sp]
    sub_02030D84(*((u32*)(r5 + 8)), 3, ((r4 << 0x18) >> 0x18), 1);
    // strb r0, [r7]
    // add r2, sp, #8
    SetMonData(r6, 0x3b);
    // str r0, [sp]
    sub_02030D84(*((u32*)(r5 + 8)), 3, ((r4 << 0x18) >> 0x18), 2);
    // strb r0, [r7]
    // add r2, sp, #8
    SetMonData(r6, 0x3c);
    // str r0, [sp]
    sub_02030D84(*((u32*)(r5 + 8)), 3, ((r4 << 0x18) >> 0x18), 3);
    // strb r0, [r7]
    // add r2, sp, #8
    SetMonData(r6, 0x3d);
    // str r0, [sp]
    sub_02030D84(*((u32*)(r5 + 8)), 4, ((r4 << 0x18) >> 0x18), 0);
    // str r0, [sp, #0xc]
    // add r2, sp, #0xc
    SetMonData(r6, 0xa0);
    // str r0, [sp]
    sub_02030D84(*((u32*)(r5 + 8)), 5, ((r4 << 0x18) >> 0x18), 0);
    // add r2, sp, #8
    *((u16*)(r7 + 2)) = r0;
    // add r2, #2
    SetMonData(r6, 6);
    // ldr r0, [sp, #4]
}




void ov80_02232ABC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // beq _02232AE6
    // ldr r0, [r4, #0x28]
    // cmp r0, #0
    // beq _02232ACC
    // bl Heap_Free
    // ldr r0, [r4, #0x2c]
    // cmp r0, #0
    // beq _02232AD6
    // bl Heap_Free
    // ldr r2, _02232AE8 ; =0x00000A28
    // add r0, r4, #0
    // mov r1, #0
    // bl MI_CpuFill8
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // _02232AE8: .word 0x00000A28
    // TODO: decompile
}




void ov80_02232AEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r6, r1, #0
    // mov r4, #0
    // add r5, r7, #0
    // lsl r1, r4, #0x18
    // add r0, r6, #0
    // lsr r1, r1, #0x18
    // bl ov80_02232B44
    // mov r1, #0xe
    // lsl r1, r1, #6
    // strh r0, [r5, r1]
    // add r4, r4, #1
    // add r5, r5, #2
    // cmp r4, #6
    // blt _02232AF6
    // mov r3, #0
    // sub r0, r1, #4
    // add r2, r6, r3
    // ldrb r5, [r2, #8]
    // mov r4, #0x37
    // add r1, r7, r3
    // lsl r4, r4, #4
    // strb r5, [r1, r4]
    // ldrb r5, [r2, #0xc]
    // add r4, r4, #4
    // add r3, r3, #1
    // strb r5, [r1, r4]
    // mov r4, #0xde
    // lsl r4, r4, #2
    // ldrb r5, [r2, #0x10]
    // cmp r3, #4
    // strb r5, [r1, r4]
    // ldrb r2, [r2, #0x14]
    // strb r2, [r1, r0]
    // blt _02232B12
    // ldrh r1, [r6, #0x28]
    // ldr r0, _02232B40 ; =0x00000A1C
    // strh r1, [r7, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02232B40: .word 0x00000A1C
    // TODO: decompile
}




void ov80_02232B44(void) {
}




void ov80_02232B58(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // add r6, r1, #0
    // bl sub_02030E08
    // str r0, [sp, #4]
    // ldr r0, [r5, #4]
    // bl Save_Frontier_GetStatic
    // add r4, r0, #0
    // ldrb r0, [r5, #0x10]
    // mov r1, #1
    // bl ov80_02237B58
    // ldrb r1, [r5, #0x10]
    // add r0, sp, #0x10
    // strb r1, [r0, #8]
    // mov r1, #0
    // add r0, sp, #0x18
    // str r0, [sp]
    // ldr r0, [r5, #8]
    // add r2, r1, #0
    // add r3, r1, #0
    // bl sub_02030CF4
    // ldr r0, [r5, #8]
    // mov r1, #1
    // bl sub_02030CE0
    // mov r2, #0
    // ldrb r1, [r5, #0x11]
    // add r0, sp, #0x10
    // add r3, r2, #0
    // strb r1, [r0, #8]
    // add r0, sp, #0x18
    // str r0, [sp]
    // ldr r0, [r5, #8]
    // mov r1, #1
    // bl sub_02030CF4
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1A0
    // add r7, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1A0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldrh r3, [r5, #0x14]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl sub_02031108
    // cmp r6, #2
    // beq _02232CCA
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1C8
    // add r6, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1C8
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // bl FrontierSave_GetStat
    // add r6, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1C8
    // add r7, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1C8
    // bl sub_0205C268
    // add r2, r0, #0
    // ldrh r3, [r5, #0x14]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl sub_0203126C
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1C8
    // add r7, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1C8
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r7, #0
    // bl FrontierSave_GetStat
    // str r0, [sp, #0xc]
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1F0
    // add r7, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r7, #0
    // bl FrontierSave_GetStat
    // add r7, r0, #0
    // ldrh r0, [r5, #0x14]
    // cmp r0, r6
    // bne _02232C6E
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C240
    // add r6, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C240
    // bl sub_0205C268
    // lsl r3, r7, #0x10
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // lsr r3, r3, #0x10
    // bl sub_0203126C
    // b _02232C94
    // ldr r0, [sp, #0xc]
    // cmp r6, r0
    // bhs _02232C94
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C240
    // add r6, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C240
    // bl sub_0205C268
    // lsl r3, r7, #0x10
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // lsr r3, r3, #0x10
    // bl sub_02031108
    // add r0, r5, #0
    // add r0, #0x27
    // ldrb r1, [r0]
    // add r0, sp, #0x10
    // mov r3, #0
    // strb r1, [r0, #8]
    // add r0, sp, #0x18
    // str r0, [sp]
    // ldrb r2, [r5, #0x10]
    // ldr r0, [sp, #4]
    // mov r1, #9
    // bl sub_02030E18
    // ldrb r0, [r5, #0x10]
    // cmp r0, #3
    // bne _02232CCA
    // mov r0, #0x6c
    // bl sub_0205C268
    // add r3, r5, #0
    // add r3, #0x27
    // add r2, r0, #0
    // ldrb r3, [r3]
    // add r0, r4, #0
    // mov r1, #0x6c
    // bl sub_02031108
    // mov r4, #0
    // add r6, sp, #0x10
    // add r7, sp, #0x10
    // lsl r0, r4, #1
    // add r0, r5, r0
    // ldrh r0, [r0, #0x30]
    // lsl r2, r4, #0x18
    // mov r1, #6
    // strh r0, [r7]
    // str r6, [sp]
    // ldr r0, [r5, #8]
    // lsr r2, r2, #0x18
    // mov r3, #0
    // bl sub_02030CF4
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #0xe
    // blo _02232CD0
    // mov r4, #0
    // add r6, sp, #0x18
    // add r7, sp, #0x10
    // add r0, r5, r4
    // add r0, #0x24
    // ldrb r0, [r0]
    // lsl r2, r4, #0x18
    // mov r1, #7
    // strb r0, [r7, #8]
    // str r6, [sp]
    // ldr r0, [r5, #8]
    // lsr r2, r2, #0x18
    // mov r3, #0
    // bl sub_02030CF4
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #3
    // blo _02232CF8
    // ldr r0, [r5, #0x28]
    // bl Party_GetCount
    // mov r4, #0
    // str r0, [sp, #8]
    // cmp r0, #0
    // bls _02232E10
    // add r7, sp, #0x10
    // ldr r0, [r5, #0x28]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // mov r1, #0xa3
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // strh r0, [r7]
    // add r0, sp, #0x10
    // str r0, [sp]
    // lsl r2, r4, #0x18
    // ldr r0, [r5, #8]
    // mov r1, #2
    // lsr r2, r2, #0x18
    // mov r3, #0
    // bl sub_02030CF4
    // add r0, r6, #0
    // mov r1, #0x3a
    // mov r2, #0
    // bl GetMonData
    // strb r0, [r7, #8]
    // add r0, sp, #0x18
    // str r0, [sp]
    // lsl r2, r4, #0x18
    // ldr r0, [r5, #8]
    // mov r1, #3
    // lsr r2, r2, #0x18
    // mov r3, #0
    // bl sub_02030CF4
    // add r0, r6, #0
    // mov r1, #0x3b
    // mov r2, #0
    // bl GetMonData
    // strb r0, [r7, #8]
    // add r0, sp, #0x18
    // str r0, [sp]
    // lsl r2, r4, #0x18
    // ldr r0, [r5, #8]
    // mov r1, #3
    // lsr r2, r2, #0x18
    // mov r3, #1
    // bl sub_02030CF4
    // add r0, r6, #0
    // mov r1, #0x3c
    // mov r2, #0
    // bl GetMonData
    // strb r0, [r7, #8]
    // add r0, sp, #0x18
    // str r0, [sp]
    // lsl r2, r4, #0x18
    // ldr r0, [r5, #8]
    // mov r1, #3
    // lsr r2, r2, #0x18
    // mov r3, #2
    // bl sub_02030CF4
    // add r0, r6, #0
    // mov r1, #0x3d
    // mov r2, #0
    // bl GetMonData
    // strb r0, [r7, #8]
    // add r0, sp, #0x18
    // str r0, [sp]
    // mov r1, #3
    // lsl r2, r4, #0x18
    // ldr r0, [r5, #8]
    // lsr r2, r2, #0x18
    // add r3, r1, #0
    // bl sub_02030CF4
    // add r0, r6, #0
    // mov r1, #0xa0
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0x1c]
    // add r0, sp, #0x1c
    // str r0, [sp]
    // lsl r2, r4, #0x18
    // ldr r0, [r5, #8]
    // mov r1, #4
    // lsr r2, r2, #0x18
    // mov r3, #0
    // bl sub_02030CF4
    // add r0, r6, #0
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r7]
    // add r0, sp, #0x10
    // str r0, [sp]
    // lsl r2, r4, #0x18
    // ldr r0, [r5, #8]
    // mov r1, #5
    // lsr r2, r2, #0x18
    // mov r3, #0
    // bl sub_02030CF4
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, [sp, #8]
    // cmp r4, r0
    // blo _02232D2A
    // ldr r0, [r5, #0x2c]
    // bl Party_GetCount
    // add r6, r0, #0
    // ldr r4, _02232E54 ; =0x00000000
    // beq _02232E4E
    // add r7, sp, #0x10
    // ldr r0, [r5, #0x2c]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // lsl r0, r4, #1
    // add r1, r5, r0
    // mov r0, #0x9b
    // lsl r0, r0, #2
    // ldrh r1, [r1, r0]
    // add r0, sp, #0x10
    // lsl r2, r4, #0x18
    // strh r1, [r0]
    // str r7, [sp]
    // ldr r0, [r5, #8]
    // mov r1, #8
    // lsr r2, r2, #0x18
    // mov r3, #0
    // bl sub_02030CF4
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, r6
    // blo _02232E1E
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02232E54: .word 0x00000000
    // TODO: decompile
}




void ov80_02232E58(void) {
}




void ov80_02232E64(void) {
    // ldrb r0, [r0, #0x11]
    // bx lr
    // TODO: decompile
}




void ov80_02232E68(void) {
    // mul r3, r1
    // add r1, r4, r3
    // add r1, r2, r1
    // add r0, sp, #0
    ov80_02229F04(*((u16*)(((r1 << 0x18) >> 0x17) + 0x30)), 0xb, 0xcc);
    Heap_Free();
    // add r0, sp, #0
    ov80_0222A30C(((*((u16*)(r0 + 4)) << 0x18) >> 0x18));
}




void ov80_02232E9C(void) {
    Save_Frontier_GetStatic(*((u32*)(r0 + 4)));
    sub_0205C174(*((u8*)(r5 + 0x10)), ((r4 << 0x18) >> 0x18));
    sub_0205C174(*((u8*)(r5 + 0x10)), ((r4 << 0x18) >> 0x18));
    sub_0205C268();
    sub_02031108(r6, r7, r0, 1);
    ov80_02232B58(r5, 1);
}




void ov80_02232EE0(void) {
    // add r1, r0, #0
    // mov r2, #1
    // add r1, #0x27
    // strb r2, [r1]
    // ldrh r1, [r0, #0x16]
    // cmp r1, #8
    // bhs _02232EF2
    // add r1, r1, #1
    // strh r1, [r0, #0x16]
    // ldr r3, _02232EFC ; =ov80_02232B58
    // mov r1, #0
    // strb r1, [r0, #0x11]
    // bx r3
    // nop
    // _02232EFC: .word ov80_02232B58
    // TODO: decompile
}




void ov80_02232F00(void) {
}




void ov80_02232F08(void) {
    ov80_02237B58(*((u8*)(r0 + 0x10)), 1);
    ov80_02237D8C(*((u8*)(r5 + 0x10)));
    // add r1, r5, r3
    // str r1, [sp]
    // sub r1, #0x14
    // add r1, r5, r1
    // str r1, [sp, #4]
    // sub r1, #0x10
    // add r1, r5, r1
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, r5, r1
    // add r2, r5, r2
    // sub r3, #0x1c
    // add r3, r5, r3
    ov80_0222A6B8(r6, *((u16*)((r4 << 1) + 0x30)), *((u16*)(((r4 + 7) << 1) + 0x30)), (0xa2 << 2));
    ov80_02237E30(r5);
}




void ov80_02232F60(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r0, #0
    // bl sub_0203769C
    // cmp r0, #0
    // bne _02232F74
    // mov r0, #0
    // str r0, [sp]
    // b _02232F78
    // mov r0, #2
    // str r0, [sp]
    // ldrb r0, [r6, #0x10]
    // mov r1, #0
    // bl ov80_02237B24
    // add r5, r0, #0
    // ldr r0, [r6, #0x28]
    // bl Party_GetCount
    // ldr r4, [sp]
    // add r0, r4, #0
    // add r0, r5, r0
    // add r1, r4, #0
    // str r0, [sp, #4]
    // cmp r1, r0
    // bge _02232FEA
    // ldr r0, [r6, #0x28]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // ldr r1, [sp]
    // mov r2, #0
    // sub r1, r4, r1
    // lsl r1, r1, #3
    // add r5, r6, r1
    // mov r1, #0x3a
    // add r7, r0, #0
    // bl GetMonData
    // mov r1, #0xe5
    // lsl r1, r1, #2
    // strh r0, [r5, r1]
    // add r0, r7, #0
    // mov r1, #0x3b
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _02233018 ; =0x00000396
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r7, #0
    // mov r1, #0x3c
    // bl GetMonData
    // mov r1, #0xe6
    // lsl r1, r1, #2
    // strh r0, [r5, r1]
    // add r0, r7, #0
    // mov r1, #0x3d
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _0223301C ; =0x0000039A
    // add r4, r4, #1
    // strh r0, [r5, r1]
    // ldr r0, [sp, #4]
    // cmp r4, r0
    // blt _02232F96
    // ldr r0, [r6, #0x28]
    // bl ov80_02237D9C
    // mov r0, #0x37
    // lsl r0, r0, #4
    // mov r7, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // add r4, r7, #0
    // add r1, r0, #4
    // add r2, #8
    // add r3, #0xc
    // add r5, r6, r7
    // strb r4, [r5, r0]
    // strb r4, [r5, r1]
    // strb r4, [r5, r2]
    // add r7, r7, #1
    // strb r4, [r5, r3]
    // cmp r7, #4
    // blt _02233002
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02233018: .word 0x00000396
    // _0223301C: .word 0x0000039A
    // TODO: decompile
}




void ov80_02233020(void) {
    // str r0, [sp, #0x10]
    // add r1, sp, #0x18
    // strb r4, [r1]
    *((u8*)(r0 + 0x12)) = 0;
    sub_0203769C((0 + 1), (r1 + 1));
    // str r0, [sp]
    // str r0, [sp]
    ov80_02237B24(*((u8*)(r6 + 0x10)), 0);
    // str r0, [sp, #8]
    ov80_02237B58(*((u8*)(r6 + 0x10)), 1);
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r0, [sp]
    // add r0, r1, r0
    // ldr r1, [sp]
    // str r0, [sp, #0xc]
    // add r7, sp, #0x18
    // ldr r1, [sp]
    Party_GetMonByIndex(*((u32*)(r6 + 0x28)));
    GetMonData(0xac, 0);
    GetMonData(r5, 0xa3, 0);
    // str r0, [sp, #0x14]
    GetMonData(r5, 0xa4, 0);
    // ldr r1, [sp, #0x14]
    // ldrb r1, [r7]
    // strb r1, [r7]
    // ldr r1, [sp, #0x14]
    *((u8*)(r7 + 1)) = (*((u8*)(r7 + 1)) + 1);
    // ldr r0, [sp, #0x14]
    *((u8*)(r7 + 2)) = (*((u8*)(r7 + 2)) + 1);
    *((u8*)(r7 + 3)) = (*((u8*)(r7 + 3)) + 1);
    GetMonData(r5, 0xa0, 0);
    *((u8*)(r7 + 4)) = (*((u8*)(r7 + 4)) + 1);
    *((u8*)(r6 + 0x12)) = 1;
    GetMonData(r5, 0x3a, 0);
    // add r4, r4, r0
    GetMonData(r5, 0x3b, 0);
    // add r4, r4, r0
    GetMonData(r5, 0x3c, 0);
    // add r4, r4, r0
    GetMonData(r5, 0x3d, 0);
    // add r4, r4, r0
    // ldr r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r1, [sp]
    // ldr r1, [sp, #4]
    // add r3, sp, #0x18
    // add r1, r6, r0
    // ldrb r1, [r1, r2]
    *((u8*)(r3 + 8)) = (*((u8*)(r3 + 8)) + 1);
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #8]
    // ldrh r1, [r5, r0]
    // add r3, r3, r1
    // ldr r1, [sp, #8]
    // add r6, #8
    // sub r0, r3, r4
    // add r0, sp, #0x18
    *((u8*)((0xe5 << 2) + 5)) = (*((u8*)((0xe5 << 2) + 5)) + 1);
    // add r0, sp, #0x18
    *((u8*)((0xe5 << 2) + 6)) = (*((u8*)((0xe5 << 2) + 6)) + 1);
    // add r0, sp, #0x18
    *((u8*)((0xe5 << 2) + 7)) = (*((u8*)((0xe5 << 2) + 7)) + 1);
    // add r1, sp, #0x18
    // ldrb r2, [r1]
    // add r2, r2, r0
    // ldr r0, [sp, #0x10]
    // add r3, r0, r2
    // add r0, r2, r0
    // add r2, r3, r0
    // add r2, r2, r0
    // add r2, r2, r0
    // add r2, r2, r0
    // add r3, r2, r0
    // mul r0, r2
    // add r2, r3, r0
    // add r2, r2, r0
    // mul r0, r1
    // add r0, r2, r0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
}




void ov80_022331E8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // add r6, r0, #0
    // add r4, r2, #0
    // bl Save_Frontier_GetStatic
    // add r7, r0, #0
    // add r0, r5, #0
    // bl sub_0205C1F0
    // str r0, [sp]
    // add r0, r5, #0
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r0, r7, #0
    // bl FrontierSave_GetStat
    // add r1, r0, r4
    // ldr r0, _0223327C ; =0x0000270F
    // cmp r1, r0
    // ble _02233244
    // add r0, r6, #0
    // bl Save_Frontier_GetStatic
    // add r7, r0, #0
    // add r0, r5, #0
    // bl sub_0205C1F0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r1, [sp, #4]
    // ldr r3, _0223327C ; =0x0000270F
    // add r0, r7, #0
    // bl sub_02031108
    // b _0223326A
    // add r0, r6, #0
    // bl Save_Frontier_GetStatic
    // add r7, r0, #0
    // add r0, r5, #0
    // bl sub_0205C1F0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r1, [sp, #8]
    // add r0, r7, #0
    // add r3, r4, #0
    // bl sub_02031228
    // add r0, r6, #0
    // bl Save_GameStats_Get
    // mov r1, #0x42
    // add r2, r4, #0
    // bl GameStats_Add
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0223327C: .word 0x0000270F
    // TODO: decompile
}




void ov80_02233280(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02233292: ; jump table
    ov80_0222B5C8((*((u16*)(r1 + 6)) << 0x10));
    ov80_0222B65C();
    ov80_0222B6C8();
    ov80_0222B7E4();
    ov80_0222B8D8(r2);
    ov80_0222B920(r2);
    ov80_0222B968();
}




void ov80_022332D0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r6, r1, #0
    // bl FrontierSystem_GetFrontierMap
    // add r4, r0, #0
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _022332EC
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _022332FA
    // bl GF_AssertFail
    // ldrb r0, [r6, #0x10]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _02233342
    // mov r0, #0xb
    // mov r1, #1
    // bl AllocWindows
    // add r1, r5, #0
    // add r1, #0xa8
    // str r0, [r1]
    // mov r2, #1
    // add r1, r5, #0
    // str r2, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r0, _022333C8 ; =0x00000253
    // add r1, #0xa8
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // ldr r1, [r1]
    // add r3, r2, #0
    // bl AddWindowParameterized
    // add r1, r5, #0
    // add r1, #0xa8
    // ldr r0, [r4]
    // ldr r1, [r1]
    // bl ov80_022333D0
    // b _022333BA
    // mov r0, #0xb
    // mov r1, #1
    // bl AllocWindows
    // add r1, r5, #0
    // add r1, #0xa8
    // str r0, [r1]
    // mov r0, #0xb
    // mov r1, #1
    // bl AllocWindows
    // add r1, r5, #0
    // add r1, #0xac
    // str r0, [r1]
    // mov r2, #1
    // add r1, r5, #0
    // str r2, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r0, _022333C8 ; =0x00000253
    // add r1, #0xa8
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // ldr r1, [r1]
    // add r3, r2, #0
    // bl AddWindowParameterized
    // mov r2, #1
    // add r1, r5, #0
    // str r2, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r0, _022333CC ; =0x0000022B
    // add r1, #0xac
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // ldr r1, [r1]
    // mov r3, #0x15
    // bl AddWindowParameterized
    // add r1, r5, #0
    // add r1, #0xa8
    // ldr r0, [r4]
    // ldr r1, [r1]
    // bl ov80_022333D0
    // add r1, r5, #0
    // add r1, #0xac
    // ldr r0, [r4]
    // ldr r1, [r1]
    // bl ov80_022333D0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov80_02233490
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _022333C8: .word 0x00000253
    // _022333CC: .word 0x0000022B
    // TODO: decompile
}




void ov80_022333D0(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r2, _022333EC ; =0x000003D9
    // add r0, r4, #0
    // mov r1, #1
    // mov r3, #0xc
    // bl DrawFrameAndWindow1
    // add r0, r4, #0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // pop {r4, pc}
    // nop
    // _022333EC: .word 0x000003D9
    // TODO: decompile
}




void ov80_022333F0(void) {
    ov80_02237D8C(*((u8*)(r1 + 0x10)));
    // add r0, #0xa8
    GF_AssertFail(*((u32*)r5));
    // add r0, #0xa8
    sub_0200E5D4(*((u32*)r5), 0);
    WindowArray_Delete(r4, 1);
    // add r0, #0xa8
    GF_AssertFail(*((u32*)r5));
    // add r0, #0xac
    GF_AssertFail(*((u32*)r5));
    sub_0203769C();
    // add r0, #0xa8
    // add r0, #0xac
    // add r0, #0xac
    // add r0, #0xa8
    sub_0200E5D4(*((u32*)r5), 0);
    WindowArray_Delete(r4, 1);
    sub_0200E5D4(r6, 0);
    WindowArray_Delete(r6, 1);
    // add r0, #0xa8
    // str r1, [r0]
    // add r5, #0xac
    // str r1, [r5]
}




void ov80_02233490(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r4, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _022334EA
    // add r0, r4, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _022334AE
    // bl GF_AssertFail
    // ldr r0, [r5, #4]
    // bl Save_Frontier_GetStatic
    // add r6, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1F0
    // add r7, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r6, #0
    // add r1, r7, #0
    // bl FrontierSave_GetStat
    // add r6, r0, #0
    // ldr r0, [r5, #4]
    // bl Save_PlayerData_GetProfile
    // add r2, r0, #0
    // add r0, r4, #0
    // add r4, #0xa8
    // ldr r1, [r4]
    // add r3, r6, #0
    // bl ov80_02233594
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _022334F8
    // bl GF_AssertFail
    // add r0, r4, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02233506
    // bl GF_AssertFail
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0223353A
    // ldr r0, [r5, #4]
    // bl Save_Frontier_GetStatic
    // add r6, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1F0
    // add r7, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r6, #0
    // add r1, r7, #0
    // bl FrontierSave_GetStat
    // add r6, r0, #0
    // ldr r0, _02233590 ; =0x00000A1C
    // ldrh r5, [r5, r0]
    // b _02233564
    // ldr r0, _02233590 ; =0x00000A1C
    // ldrh r6, [r5, r0]
    // ldr r0, [r5, #4]
    // bl Save_Frontier_GetStatic
    // add r7, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1F0
    // str r0, [sp]
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r0, r7, #0
    // bl FrontierSave_GetStat
    // add r5, r0, #0
    // mov r0, #0
    // bl sub_02034818
    // add r1, r4, #0
    // add r1, #0xa8
    // add r2, r0, #0
    // ldr r1, [r1]
    // add r0, r4, #0
    // add r3, r6, #0
    // bl ov80_02233594
    // mov r0, #1
    // bl sub_02034818
    // add r2, r0, #0
    // add r0, r4, #0
    // add r4, #0xac
    // ldr r1, [r4]
    // add r3, r5, #0
    // bl ov80_02233594
    // pop {r3, r4, r5, r6, r7, pc}
    // _02233590: .word 0x00000A1C
    // TODO: decompile
}




void ov80_02233594(void) {
    // str r3, [sp, #0x14]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    String_New(0x14, *((u32*)(r0 + 0x34)));
    String_New(0x14, *((u32*)(r5 + 0x34)));
    NewMsgDataFromNarc(0, 0x1b, 0x1f, 0xb);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    BufferIntegerAsString(*((u32*)(r5 + 0x44)), 0, 4);
    ReadMsgDataIntoString(r7, 2, r4);
    StringExpandPlaceholders(*((u32*)(r5 + 0x44)), r6, r4);
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #8]
    AddTextPrinterParameterized(0xff, 0, r6, 0x10);
    // ldr r2, [sp, #0x10]
    BufferPlayersName(*((u32*)(r5 + 0x44)), 0);
    ReadMsgDataIntoString(r7, 0, r4);
    StringExpandPlaceholders(*((u32*)(r5 + 0x44)), r6, r4);
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #8]
    AddTextPrinterParameterized(0, r6, 0);
    String_Delete(r4);
    String_Delete(r6);
    DestroyMsgData(r7);
    // ldr r0, [sp, #0xc]
    CopyWindowToVram();
}




void ov80_02233648(void) {
    // ldrb r3, [r0, #0x10]
    // ldrh r2, [r0, #0x16]
    // cmp r3, #1
    // bhi _0223365E
    // cmp r2, #8
    // blo _02233658
    // mov r1, #7
    // b _0223366A
    // ldr r1, _02233680 ; =ov80_0223BE54
    // ldrb r1, [r1, r2]
    // b _0223366A
    // cmp r2, #8
    // blo _02233666
    // mov r1, #0x12
    // b _0223366A
    // ldr r1, _02233684 ; =ov80_0223BE60
    // ldrb r1, [r1, r2]
    // cmp r3, #0
    // bne _0223367A
    // ldrh r0, [r0, #0x14]
    // cmp r0, #0x15
    // beq _02233678
    // cmp r0, #0x31
    // bne _0223367A
    // mov r1, #0x14
    // add r0, r1, #0
    // bx lr
    // nop
    // _02233680: .word ov80_0223BE54
    // _02233684: .word ov80_0223BE60
    // TODO: decompile
}



