/* Decompiled from asm/overlay_48.s */
#include "global.h"

void ov48_02258800(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r4, r0, #0
    // bl OverlayManager_GetArgs
    // mov r2, #5
    // add r5, r0, #0
    // mov r0, #3
    // mov r1, #0x70
    // lsl r2, r2, #0x10
    // bl Heap_Create
    // ldr r1, _0225890C ; =0x0000C724
    // add r0, r4, #0
    // mov r2, #0x70
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _0225890C ; =0x0000C724
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // ldr r0, [r5, #4]
    // bl Save_WiFiHistory_Get
    // str r0, [r4, #0xc]
    // ldr r0, [r5, #4]
    // bl Save_PlayerData_GetOptionsAddr
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #0xc]
    // bl WifiHistory_GetPlayerCountry
    // str r0, [r4, #0x14]
    // ldr r0, [r4, #0xc]
    // bl WiFiHistory_GetPlayerRegion
    // str r0, [r4, #0x18]
    // ldr r0, [r5, #8]
    // add r1, r5, #0
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov48_022593F4
    // add r0, r4, #0
    // ldr r1, [r4, #0x10]
    // add r0, #0x20
    // mov r2, #0x70
    // bl ov48_02259464
    // mov r0, #0x5e
    // lsl r0, r0, #2
    // add r1, r4, #0
    // add r0, r4, r0
    // add r1, #0x20
    // mov r2, #0x70
    // bl ov48_02259824
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0x70
    // bl ov48_0225B068
    // mov r0, #0x70
    // str r0, [sp, #4]
    // mov r2, sp
    // ldr r1, [r4, #4]
    // ldr r0, [r4, #8]
    // sub r2, r2, #4
    // str r1, [r2]
    // str r0, [r2, #4]
    // mov r0, #0x89
    // ldr r3, [r2]
    // lsl r0, r0, #2
    // add r2, r4, #0
    // ldr r1, [r5]
    // add r0, r4, r0
    // add r2, #0x20
    // bl ov48_022598EC
    // add r3, r4, #4
    // ldr r0, _02258910 ; =0x0000C3CC
    // ldmia r3!, {r1, r2}
    // add r0, r4, r0
    // mov r3, #0x70
    // bl ov48_02259BC0
    // ldr r0, _02258914 ; =0x0000C3E0
    // mov r2, #0x5a
    // add r1, r4, #0
    // lsl r2, r2, #2
    // add r0, r4, r0
    // add r1, #0x20
    // add r2, r4, r2
    // mov r3, #0x70
    // bl ov48_02259D00
    // mov r2, #0x70
    // str r2, [sp]
    // mov r0, #0xc7
    // lsl r0, r0, #8
    // add r1, r4, #0
    // add r2, #0xf8
    // ldr r3, [r5, #4]
    // add r0, r4, r0
    // add r1, #0x20
    // add r2, r4, r2
    // bl ov48_02259EAC
    // ldr r0, _02258918 ; =0x0000C40C
    // mov r2, #0x5a
    // add r1, r4, #0
    // lsl r2, r2, #2
    // add r0, r4, r0
    // add r1, #0x20
    // add r2, r4, r2
    // mov r3, #0x70
    // bl ov48_0225A00C
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov48_02259130
    // ldr r0, _0225891C ; =ov48_02259090
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _0225890C: .word 0x0000C724
    // _02258910: .word 0x0000C3CC
    // _02258914: .word 0x0000C3E0
    // _02258918: .word 0x0000C40C
    // _0225891C: .word ov48_02259090
    // TODO: decompile
}



void ov48_02258920(void) {
    OverlayManager_GetData();
    OverlayManager_GetArgs(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02258948: ; jump table
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    ov45_0222A520(*((u32*)(r5 + 0xc)), 1);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
    // str r0, [r4]
    ov48_02258F64(r7);
    ov48_02259030(r7);
    ov45_0222A330(*((u32*)(r5 + 0xc)));
    ov45_0222A4A8(*((u32*)(r5 + 0xc)));
    ov45_0222D844();
    // str r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
    ov48_02259050(r7);
}



void ov48_022589FC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // ldr r0, _02258A74 ; =0x0000C40C
    // add r1, r4, #0
    // add r0, r4, r0
    // add r1, #0x20
    // bl ov48_0225A108
    // mov r0, #0xc7
    // lsl r0, r0, #8
    // add r0, r4, r0
    // bl ov48_02259F14
    // ldr r0, _02258A78 ; =0x0000C3E0
    // add r0, r4, r0
    // bl ov48_02259D94
    // ldr r0, _02258A7C ; =0x0000C3CC
    // add r0, r4, r0
    // bl ov48_02259C38
    // mov r0, #0x5e
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov48_02259868
    // mov r0, #0x89
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov48_02259984
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov48_0225B0A4
    // add r4, #0x20
    // add r0, r4, #0
    // bl ov48_022594A8
    // add r0, r5, #0
    // bl OverlayManager_FreeData
    // mov r0, #0x70
    // bl Heap_Destroy
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _02258A74: .word 0x0000C40C
    // _02258A78: .word 0x0000C3E0
    // _02258A7C: .word 0x0000C3CC
    // TODO: decompile
}



void ov48_02258A80(void) {
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    NARC_New(0x62, r2);
    // str r2, [r5]
    // str r2, [sp]
    // add r1, sp, #0x2c
    // str r1, [sp, #4]
    // ldr r3, [sp, #0x10]
    // str r0, [sp, #0x24]
    GfGfxLoader_LoadFromOpenNarc_GetSizeOut(0x12, 0);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x2c]
    _u32_div_f(6);
    // ldr r0, [sp, #0x20]
    // ldrh r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    ov48_02258B7C(r5, *((u32*)r5), 2, 4);
    // str r0, [r5]
    // ldr r0, [sp, #0x20]
    Heap_Free((*((u32*)r5) + 1));
    LocationGmmDatCountGet();
    // str r0, [sp, #0x18]
    LocationGmmDatGetEarthPlaceDatId(r7);
    // str r0, [sp]
    // add r0, sp, #0x28
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x10]
    GfGfxLoader_LoadFromOpenNarc_GetSizeOut(0, r0, 0);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    LocationGmmDatGetCountryMsgNo(r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    ov48_02258B7C(r5, *((u32*)r5), 0, 2);
    // str r0, [r5]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    Heap_Free((*((u32*)r5) + 1));
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x24]
    NARC_Delete();
}



void ov48_02258B7C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // ldr r5, _02258BF0 ; =ov48_0225B1EC
    // add r7, r2, #0
    // add r6, r3, #0
    // add r4, r0, #0
    // mov ip, r1
    // add r3, sp, #0xc
    // mov r2, #4
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02258B8E
    // ldr r0, [r5]
    // mov r1, #0x30
    // str r0, [r3]
    // mov r0, ip
    // add r5, r0, #0
    // mul r5, r1
    // add r0, r4, r5
    // strh r7, [r0, #4]
    // strh r6, [r0, #6]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    // add r1, sp, #0
    // str r7, [sp]
    // str r6, [sp, #4]
    // bl ov48_02258C6C
    // add r3, r4, r5
    // add r6, sp, #0xc
    // add r3, #8
    // mov r2, #4
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02258BC0
    // ldr r0, [r6]
    // str r0, [r3]
    // ldr r0, [sp, #0x50]
    // cmp r0, #0
    // beq _02258BE0
    // add r2, sp, #0x38
    // ldrh r1, [r2, #0x10]
    // ldrh r2, [r2, #0x14]
    // bl ov48_02259A68
    // add r1, r4, r5
    // strh r0, [r1, #0x2c]
    // add r0, sp, #0x38
    // ldrh r2, [r0, #0x10]
    // add r1, r4, r5
    // strh r2, [r1, #0x2e]
    // ldrh r0, [r0, #0x14]
    // strh r0, [r1, #0x30]
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _02258BF0: .word ov48_0225B1EC
    // TODO: decompile
}



void ov48_02258BF4(void) {
    // push {r4, r5, lr}
    // sub sp, #0x24
    // add r4, r1, #0
    // ldr r1, [r4, #4]
    // ldr r3, _02258C68 ; =FX_SinCosTable_
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // asr r1, r1, #4
    // lsl r2, r1, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r5, r0, #0
    // bl MTX_RotY33_
    // ldr r0, [r4]
    // ldr r3, _02258C68 ; =FX_SinCosTable_
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    // bl MTX_RotX33_
    // add r0, r5, #0
    // add r1, sp, #0
    // add r2, r5, #0
    // bl MTX_Concat33
    // ldr r0, [r4, #8]
    // ldr r3, _02258C68 ; =FX_SinCosTable_
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    // bl MTX_RotZ33_
    // add r0, r5, #0
    // add r1, sp, #0
    // add r2, r5, #0
    // bl MTX_Concat33
    // add sp, #0x24
    // pop {r4, r5, pc}
    // nop
    // _02258C68: .word FX_SinCosTable_
    // TODO: decompile
}



void ov48_02258C6C(void) {
    // push {r4, r5, lr}
    // sub sp, #0x24
    // add r4, r1, #0
    // ldr r1, [r4]
    // ldr r3, _02258CE0 ; =FX_SinCosTable_
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // asr r1, r1, #4
    // lsl r2, r1, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r5, r0, #0
    // bl MTX_RotY33_
    // ldr r0, [r4, #4]
    // ldr r3, _02258CE0 ; =FX_SinCosTable_
    // neg r0, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    // bl MTX_RotX33_
    // add r0, r5, #0
    // add r1, sp, #0
    // add r2, r5, #0
    // bl MTX_Concat33
    // ldr r0, [r4, #8]
    // ldr r3, _02258CE0 ; =FX_SinCosTable_
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // add r1, r2, #1
    // lsl r1, r1, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    // bl MTX_RotZ33_
    // add r0, r5, #0
    // add r1, sp, #0
    // add r2, r5, #0
    // bl MTX_Concat33
    // add sp, #0x24
    // pop {r4, r5, pc}
    // _02258CE0: .word FX_SinCosTable_
    // TODO: decompile
}



void ov48_02258CE4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov lr, r0
    // ldr r0, _02258D4C ; =gSystem + 0x40
    // mov ip, r1
    // ldrh r5, [r0, #0x20]
    // mov r1, #0
    // add r7, r2, #0
    // add r6, r3, #0
    // ldr r0, _02258D50 ; =0x0000FFFF
    // add r2, r1, #0
    // add r3, r1, #0
    // add r4, r1, #0
    // cmp r5, r0
    // beq _02258D14
    // mov r0, lr
    // sub r3, r5, r0
    // bpl _02258D0E
    // sub r0, r1, #1
    // eor r3, r0
    // mov r1, #0x10
    // b _02258D14
    // cmp r3, #0
    // ble _02258D14
    // mov r1, #0x20
    // str r1, [r7]
    // mov r1, #0x3f
    // add r0, r3, #0
    // and r0, r1
    // str r0, [r6]
    // ldr r0, _02258D4C ; =gSystem + 0x40
    // ldrh r3, [r0, #0x22]
    // ldr r0, _02258D50 ; =0x0000FFFF
    // cmp r3, r0
    // beq _02258D3C
    // mov r0, ip
    // sub r4, r3, r0
    // bpl _02258D36
    // sub r1, #0x40
    // eor r4, r1
    // mov r2, #0x80
    // b _02258D3C
    // cmp r4, #0
    // ble _02258D3C
    // mov r2, #0x40
    // ldr r0, [sp, #0x18]
    // add r1, r4, #0
    // str r2, [r0]
    // mov r0, #0x3f
    // and r1, r0
    // ldr r0, [sp, #0x1c]
    // str r1, [r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // _02258D4C: .word gSystem + 0x40
    // _02258D50: .word 0x0000FFFF
    // TODO: decompile
}



void ov48_02258D54(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #0x5e
    // lsl r0, r0, #2
    // str r1, [sp]
    // add r0, r4, r0
    // add r1, sp, #0xc
    // add r7, r2, #0
    // bl ov48_022598CC
    // ldr r0, _02258EF4 ; =0x0000C3E0
    // mov r1, #0
    // add r0, r4, r0
    // bl ov48_02259E5C
    // add r6, r0, #0
    // ldr r0, _02258EF4 ; =0x0000C3E0
    // mov r1, #1
    // add r0, r4, r0
    // bl ov48_02259E5C
    // str r0, [sp, #4]
    // ldr r0, _02258EF4 ; =0x0000C3E0
    // mov r1, #2
    // add r0, r4, r0
    // bl ov48_02259E5C
    // add r5, r0, #0
    // ldr r0, _02258EF8 ; =0x0000C3CC
    // add r0, r4, r0
    // bl ov48_02259CFC
    // ldr r2, [sp, #0x10]
    // add r1, r0, #0
    // lsl r2, r2, #0x10
    // ldr r0, [sp, #0xc]
    // asr r2, r2, #0x10
    // mov ip, r2
    // lsl r0, r0, #0x10
    // ldr r2, [sp]
    // mov r3, #1
    // asr r0, r0, #0x10
    // tst r2, r3
    // bne _02258DB8
    // add r2, r6, #0
    // tst r2, r3
    // beq _02258DCC
    // ldr r0, [r4, #4]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _02258DC6
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r1, #0
    // bne _02258DF4
    // ldr r1, [sp, #4]
    // cmp r1, #0
    // bne _02258DDA
    // cmp r5, #0
    // beq _02258DEE
    // ldr r2, [sp, #4]
    // mov r1, #0x55
    // mul r1, r2
    // lsl r1, r1, #0x10
    // lsr r3, r1, #0x10
    // mov r1, #0x55
    // mul r1, r5
    // lsl r1, r1, #0x10
    // lsr r5, r1, #0x10
    // b _02258E16
    // lsl r3, r3, #9
    // add r5, r3, #0
    // b _02258E16
    // ldr r1, [sp, #4]
    // cmp r1, #0
    // bne _02258DFE
    // cmp r5, #0
    // beq _02258E12
    // ldr r2, [sp, #4]
    // mov r1, #0xa
    // mul r1, r2
    // lsl r1, r1, #0x10
    // lsr r3, r1, #0x10
    // mov r1, #0xa
    // mul r1, r5
    // lsl r1, r1, #0x10
    // lsr r5, r1, #0x10
    // b _02258E16
    // mov r3, #0x20
    // add r5, r3, #0
    // mov r2, #0x20
    // add r1, r7, #0
    // tst r1, r2
    // bne _02258E24
    // add r1, r6, #0
    // tst r1, r2
    // beq _02258E44
    // ldr r1, [r4, #4]
    // lsl r1, r1, #0x1f
    // lsr r1, r1, #0x1f
    // cmp r1, #1
    // bne _02258E36
    // ldr r1, [sp, #0x10]
    // add r1, r1, r3
    // str r1, [sp, #0x10]
    // b _02258E44
    // ldr r2, _02258EFC ; =0xFFFFD820
    // mov r1, ip
    // cmp r1, r2
    // bge _02258E44
    // ldr r1, [sp, #0x10]
    // add r1, r1, r3
    // str r1, [sp, #0x10]
    // mov r2, #0x10
    // add r1, r7, #0
    // tst r1, r2
    // bne _02258E52
    // add r1, r6, #0
    // tst r1, r2
    // beq _02258E72
    // ldr r1, [r4, #4]
    // lsl r1, r1, #0x1f
    // lsr r1, r1, #0x1f
    // cmp r1, #1
    // bne _02258E64
    // ldr r1, [sp, #0x10]
    // sub r1, r1, r3
    // str r1, [sp, #0x10]
    // b _02258E72
    // ldr r2, _02258F00 ; =0xFFFFCC80
    // mov r1, ip
    // cmp r1, r2
    // ble _02258E72
    // ldr r1, [sp, #0x10]
    // sub r1, r1, r3
    // str r1, [sp, #0x10]
    // mov r1, #0x40
    // add r2, r7, #0
    // tst r2, r1
    // bne _02258E7E
    // tst r1, r6
    // beq _02258EAA
    // ldr r1, [r4, #4]
    // lsl r1, r1, #0x1f
    // lsr r1, r1, #0x1f
    // cmp r1, #1
    // bne _02258E9E
    // mov r1, #0x3e
    // add r2, r0, r5
    // lsl r1, r1, #8
    // cmp r2, r1
    // bge _02258E9A
    // ldr r1, [sp, #0xc]
    // add r1, r1, r5
    // str r1, [sp, #0xc]
    // b _02258EAA
    // str r1, [sp, #0xc]
    // b _02258EAA
    // ldr r1, _02258F04 ; =0x00002020
    // cmp r0, r1
    // bge _02258EAA
    // ldr r1, [sp, #0xc]
    // add r1, r1, r5
    // str r1, [sp, #0xc]
    // mov r1, #0x80
    // add r2, r7, #0
    // tst r2, r1
    // bne _02258EB6
    // tst r1, r6
    // beq _02258EE2
    // ldr r1, [r4, #4]
    // lsl r1, r1, #0x1f
    // lsr r1, r1, #0x1f
    // cmp r1, #1
    // bne _02258ED4
    // sub r1, r0, r5
    // ldr r0, _02258F08 ; =0xFFFFC200
    // cmp r1, r0
    // ble _02258ED0
    // ldr r0, [sp, #0xc]
    // sub r0, r0, r5
    // str r0, [sp, #0xc]
    // b _02258EE2
    // str r0, [sp, #0xc]
    // b _02258EE2
    // mov r1, #0x13
    // lsl r1, r1, #8
    // cmp r0, r1
    // ble _02258EE2
    // ldr r0, [sp, #0xc]
    // sub r0, r0, r5
    // str r0, [sp, #0xc]
    // mov r0, #0x5e
    // lsl r0, r0, #2
    // add r0, r4, r0
    // add r1, sp, #0xc
    // bl ov48_022598DC
    // mov r0, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _02258EF4: .word 0x0000C3E0
    // _02258EF8: .word 0x0000C3CC
    // _02258EFC: .word 0xFFFFD820
    // _02258F00: .word 0xFFFFCC80
    // _02258F04: .word 0x00002020
    // _02258F08: .word 0xFFFFC200
    // TODO: decompile
}



void ov48_02258F0C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // blt _02258F20
    // ldr r1, _02258F60 ; =0x0000FFFF
    // bl _s32_div_f
    // str r1, [r4]
    // b _02258F36
    // bge _02258F24
    // neg r0, r0
    // ldr r1, _02258F60 ; =0x0000FFFF
    // bl _s32_div_f
    // add r1, r0, #1
    // ldr r0, _02258F60 ; =0x0000FFFF
    // ldr r2, [r4]
    // mul r0, r1
    // add r0, r2, r0
    // str r0, [r4]
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // blt _02258F46
    // ldr r1, _02258F60 ; =0x0000FFFF
    // bl _s32_div_f
    // str r1, [r4, #4]
    // pop {r4, pc}
    // bge _02258F4A
    // neg r0, r0
    // ldr r1, _02258F60 ; =0x0000FFFF
    // bl _s32_div_f
    // add r1, r0, #1
    // ldr r0, _02258F60 ; =0x0000FFFF
    // ldr r2, [r4, #4]
    // mul r0, r1
    // add r0, r2, r0
    // str r0, [r4, #4]
    // pop {r4, pc}
    // nop
    // _02258F60: .word 0x0000FFFF
    // TODO: decompile
}



void ov48_02258F64(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrh r1, [r4]
    // cmp r1, #3
    // bhi _0225901C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02258F7A: ; jump table
    // bl ov48_0225909C
    // cmp r0, #0
    // beq _02259020
    // cmp r0, #1
    // beq _02258F94
    // cmp r0, #2
    // beq _02258FA2
    // b _02259020
    // ldr r0, _02259024 ; =0x0000C3CC
    // add r0, r4, r0
    // bl ov48_02259C4C
    // mov r0, #1
    // strh r0, [r4]
    // b _02259020
    // mov r0, #2
    // strh r0, [r4]
    // b _02259020
    // ldr r0, _02259024 ; =0x0000C3CC
    // mov r1, #0x89
    // lsl r1, r1, #2
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov48_02259C78
    // cmp r0, #1
    // bne _02259020
    // mov r0, #0
    // strh r0, [r4]
    // b _02259020
    // mov r0, #0xc7
    // lsl r0, r0, #8
    // add r0, r4, r0
    // bl ov48_02259F48
    // ldr r0, _02259028 ; =0x0000C40C
    // add r0, r4, r0
    // bl ov48_0225A1D0
    // ldr r0, _0225902C ; =0x0000C3E0
    // add r0, r4, r0
    // bl ov48_02259E78
    // ldrh r0, [r4]
    // add r0, r0, #1
    // strh r0, [r4]
    // b _02259020
    // mov r0, #0xc7
    // lsl r0, r0, #8
    // add r0, r4, r0
    // bl ov48_02259F8C
    // cmp r0, #0
    // beq _02259020
    // cmp r0, #1
    // beq _02259018
    // cmp r0, #2
    // bne _02259018
    // ldr r0, _02259028 ; =0x0000C40C
    // add r0, r4, r0
    // bl ov48_0225A1EC
    // mov r0, #0xc7
    // lsl r0, r0, #8
    // add r0, r4, r0
    // bl ov48_02259FEC
    // ldr r0, _0225902C ; =0x0000C3E0
    // add r0, r4, r0
    // bl ov48_02259E90
    // mov r0, #0
    // strh r0, [r4]
    // b _02259020
    // mov r0, #1
    // pop {r4, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r4, pc}
    // _02259024: .word 0x0000C3CC
    // _02259028: .word 0x0000C40C
    // _0225902C: .word 0x0000C3E0
    // TODO: decompile
}



void ov48_02259030(void) {
}



void ov48_02259050(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl Thunk_G3X_Reset
    // ldr r0, _0225908C ; =0x0000C3CC
    // add r0, r4, r0
    // bl ov48_02259C44
    // mov r0, #0x5e
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov48_02259874
    // mov r1, #0x89
    // lsl r1, r1, #2
    // add r0, r4, r1
    // sub r1, #0xac
    // add r1, r4, r1
    // bl ov48_022599A0
    // add r4, #0x20
    // add r0, r4, #0
    // bl ov48_022594D0
    // mov r0, #0
    // mov r1, #1
    // bl RequestSwap3DBuffers
    // pop {r4, pc}
    // nop
    // _0225908C: .word 0x0000C3CC
    // TODO: decompile
}



void ov48_02259090(void) {
}



void ov48_0225909C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, _0225911C ; =0x0000C3E0
    // add r0, r5, r0
    // bl ov48_02259DA0
    // ldr r0, _0225911C ; =0x0000C3E0
    // ldr r1, [r5, r0]
    // mov r0, #2
    // tst r1, r0
    // beq _022590C0
    // ldr r0, _02259120 ; =0x000005DD
    // bl PlaySE
    // add sp, #0xc
    // mov r0, #2
    // pop {r4, r5, pc}
    // ldr r2, _02259124 ; =gSystem
    // lsl r0, r0, #9
    // ldr r1, [r2, #0x48]
    // tst r0, r1
    // beq _0225910C
    // add r0, r5, #0
    // add r1, sp, #0
    // bl ov48_02259188
    // cmp r0, #1
    // bne _02259116
    // ldr r0, _02259128 ; =0x0000C40C
    // add r1, sp, #0
    // add r0, r5, r0
    // bl ov48_0225A244
    // cmp r0, #0
    // bne _02259116
    // ldr r0, _02259128 ; =0x0000C40C
    // add r1, sp, #0
    // add r0, r5, r0
    // bl ov48_0225A20C
    // cmp r0, #0
    // beq _02259116
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    // lsl r1, r1, #0x18
    // lsl r2, r2, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // bl ov48_022593B4
    // ldr r0, _0225912C ; =0x000005D6
    // bl PlaySE
    // b _02259116
    // ldr r2, [r2, #0x44]
    // add r0, r5, #0
    // bl ov48_02258D54
    // add r4, r0, #0
    // add r0, r4, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0225911C: .word 0x0000C3E0
    // _02259120: .word 0x000005DD
    // _02259124: .word gSystem
    // _02259128: .word 0x0000C40C
    // _0225912C: .word 0x000005D6
    // TODO: decompile
}



void ov48_02259130(void) {
    ov48_022593B4(((*((u32*)(r0 + 0x14)) << 0x18) >> 0x18), ((*((u32*)(r0 + 0x18)) << 0x18) >> 0x18));
    ov48_0225B13C(*((u32*)r4));
    ov45_0222D6B0(*((u32*)r4), ((r0 << 0x18) >> 0x18));
    ov45_0222D6D4(*((u32*)r4), ((r6 << 0x18) >> 0x18));
    ov48_022593B4(r5, ((r7 << 0x18) >> 0x18), ((r0 << 0x18) >> 0x18));
    GF_AssertFail();
}



void ov48_02259188(void) {
    ov48_022591D8();
    // add r0, r5, r0
    ov48_02259BBC((0x89 << 2));
    // add r2, #0x1c
    ov48_0225932C(r5, r6, *((u32*)r5));
    // str r0, [r4]
    // add r0, r5, r0
    ov48_02259B84((0x89 << 2), r6);
    *((u32*)(r4 + 4)) = r0;
    // add r0, r5, r0
    ov48_02259BA0((0x89 << 2), r6);
    *((u32*)(r4 + 8)) = r0;
}



void ov48_022591D8(void) {
    // add r0, r5, r0
    ov48_02259BBC((0x89 << 2));
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    // add r1, sp, #0x28
    ov48_022598CC((0x5e << 2));
    // ldr r1, [sp, #0x28]
    // sub r0, #0x80
    // asr r0, r0, #0x10
    // add r1, #0x80
    // str r0, [sp, #4]
    // asr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // sub r1, #0x80
    // asr r6, r1, #0x10
    // add r1, #0x80
    // asr r1, r1, #0x10
    // str r1, [sp, #0x18]
    // sub r2, r1, r6
    // bpl _02259224
    // neg r2, r2
    // asr r6, r0, #0x10
    // str r6, [sp, #0x18]
    // sub r0, r6, r0
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, r6, r0
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // sub r6, #0x80
    // add r0, #0x80
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // sub r0, #0x80
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0x80
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // str r6, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, r5, r0
    // add r1, sp, #0x1c
    ov48_02259B3C((0x89 << 2), (1 << 8), 0);
    // add r0, r5, r0
    ov48_02259B68((0x89 << 2), r4);
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #4]
    // ldr r2, [sp]
    // ldr r1, [sp, #0x20]
    // ldr r2, [sp, #0x18]
    // ldr r2, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // add r0, sp, #0x28
    ov48_02258F0C();
    // add r0, sp, #0x1c
    ov48_02258F0C();
    // add r0, sp, #0x28
    // add r1, sp, #0x1c
    ov48_022592E0();
    // str r4, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
}



void ov48_022592E0(void) {
    // push {r3, r4, r5, lr}
    // ldr r3, [r0]
    // ldr r2, [r1]
    // sub r4, r3, r2
    // bpl _022592EC
    // neg r4, r4
    // ldr r2, [r0, #4]
    // ldr r0, [r1, #4]
    // sub r5, r2, r0
    // bpl _022592F6
    // neg r5, r5
    // mov r0, #0xb4
    // bl GF_DegreeToSinCosIdxNoWrap
    // cmp r4, r0
    // ble _02259304
    // ldr r0, _02259328 ; =0x0000FFFF
    // sub r4, r0, r4
    // mov r0, #0xb4
    // bl GF_DegreeToSinCosIdxNoWrap
    // cmp r5, r0
    // ble _02259312
    // ldr r0, _02259328 ; =0x0000FFFF
    // sub r5, r0, r5
    // add r1, r4, #0
    // add r0, r5, #0
    // mul r1, r4
    // mul r0, r5
    // add r0, r1, r0
    // lsl r0, r0, #0xc
    // bl FX_Sqrt
    // asr r0, r0, #0xc
    // pop {r3, r4, r5, pc}
    // nop
    // _02259328: .word 0x0000FFFF
    // TODO: decompile
}



void ov48_0225932C(void) {
    // push {r0, r1, r2, r3}
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r0, sp, #0x30
    // ldrb r0, [r0, #8]
    // add r7, r1, #0
    // mov r1, #0xdb
    // sub r4, r0, #4
    // mov r0, #0x89
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r2, #3
    // bl ov48_02259B10
    // add r6, r0, #0
    // mov r0, #0x89
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov48_02259BBC
    // cmp r6, r0
    // blo _0225935E
    // bl GF_AssertFail
    // mov r0, #0x89
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, sp, #0xc
    // add r2, r6, #0
    // bl ov48_02259B3C
    // mov r0, #0x89
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, sp, #0
    // add r2, r7, #0
    // bl ov48_02259B3C
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // mov r0, #0x18
    // mul r0, r1
    // ldr r1, _022593B0 ; =0x0000FFFF
    // bl _s32_div_f
    // add r4, r4, r0
    // bpl _02259394
    // add r4, #0x18
    // cmp r4, #0x18
    // blt _022593A2
    // add r0, r4, #0
    // mov r1, #0x18
    // bl _s32_div_f
    // add r4, r1, #0
    // add r0, r4, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7}
    // pop {r3}
    // add sp, #0x10
    // bx r3
    // nop
    // _022593B0: .word 0x0000FFFF
    // TODO: decompile
}



void ov48_022593B4(void) {
    // add r0, r4, r0
    // add r3, sp, #0xc
    ov48_02259AD0((0x89 << 2));
    // add r0, r4, r0
    // add r1, sp, #0
    ov48_022598CC((0x5e << 2));
    // ldr r0, [sp, #8]
    // add r1, sp, #0xc
    // str r0, [sp, #0x14]
    // add r0, r4, r0
    ov48_022598DC((0x5e << 2));
}



void ov48_022593F4(void) {
    // push {r4, r5, r6, r7}
    // ldr r4, [r0, #4]
    // mov r2, #2
    // bic r4, r2
    // mov r3, #1
    // bic r4, r3
    // ldr r3, _02259460 ; =gGameLanguage
    // str r4, [r0, #4]
    // ldrb r3, [r3]
    // cmp r3, #1
    // ldr r3, [r0, #4]
    // bne _02259414
    // mov r2, #2
    // orr r2, r3
    // str r2, [r0, #4]
    // b _02259418
    // bic r3, r2
    // str r3, [r0, #4]
    // ldr r2, [r0, #4]
    // lsl r3, r2, #0x1e
    // lsr r3, r3, #0x1f
    // cmp r3, #1
    // bne _02259452
    // mov r3, #0
    // add r4, r3, #0
    // mov r5, #1
    // mov r6, #1
    // ldr r2, [r1]
    // add r7, r2, r4
    // ldrb r7, [r7, #3]
    // lsl r7, r7, #0x18
    // lsr r7, r7, #0x1c
    // cmp r7, #1
    // bne _02259446
    // ldrh r2, [r2, r4]
    // cmp r2, #0x67
    // beq _02259446
    // ldr r2, [r0, #4]
    // bic r2, r5
    // orr r2, r6
    // str r2, [r0, #4]
    // add r3, r3, #1
    // add r4, r4, #4
    // cmp r3, #0x32
    // blt _0225942A
    // pop {r4, r5, r6, r7}
    // bx lr
    // mov r1, #1
    // bic r2, r1
    // mov r1, #1
    // orr r1, r2
    // str r1, [r0, #4]
    // pop {r4, r5, r6, r7}
    // bx lr
    // _02259460: .word gGameLanguage
    // TODO: decompile
}



void ov48_02259464(void) {
    // push {r4, r5, r6, lr}
    // add r4, r2, #0
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #0xc0
    // add r1, r4, #0
    // bl NARC_New
    // mov r1, #0x51
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0x40
    // add r1, r4, #0
    // bl GF_CreateVramTransferManager
    // ldr r0, _022594A4 ; =ov48_0225B210
    // bl GfGfx_SetBanks
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov48_022594F0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov48_02259688
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov48_02259750
    // pop {r4, r5, r6, pc}
    // _022594A4: .word ov48_0225B210
    // TODO: decompile
}



void ov48_022594A8(void) {
    // ldr r0, [r4, r0]
    NARC_Delete((0x51 << 2));
    GF_DestroyVramTransferManager();
    ov48_02259650(r4);
    ov48_02259724(r4);
    ov48_02259788(r4);
}



void ov48_022594D0(void) {
}



void ov48_022594DC(void) {
}



void ov48_022594F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, _0225963C ; =ov48_0225B190
    // add r7, r2, #0
    // str r1, [sp, #0x10]
    // bl SetBothScreensModesAndDisable
    // add r0, r7, #0
    // bl BgConfig_Alloc
    // str r0, [r5]
    // ldr r0, _02259640 ; =gSystem + 0x60
    // mov r1, #1
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // mov r0, #0
    // ldr r6, _02259644 ; =ov48_0225B2A4
    // ldr r4, _02259648 ; =ov48_0225B1B0
    // str r0, [sp, #0x14]
    // ldr r1, [r4]
    // ldr r0, [r5]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // add r2, r6, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4]
    // mov r1, #0x20
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // mov r2, #0
    // add r3, r7, #0
    // bl BG_ClearCharDataRange
    // ldr r1, [r4]
    // ldr r0, [r5]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [sp, #0x14]
    // add r6, #0x1c
    // add r0, r0, #1
    // add r4, r4, #4
    // str r0, [sp, #0x14]
    // cmp r0, #5
    // blt _0225951A
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0x51
    // str r7, [sp, #4]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #5
    // mov r2, #4
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x51
    // str r7, [sp, #0xc]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r2, [r5]
    // mov r1, #0xb
    // mov r3, #4
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x51
    // str r7, [sp, #0xc]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r2, [r5]
    // mov r1, #0xc
    // mov r3, #4
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x51
    // str r7, [sp, #0xc]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r2, [r5]
    // mov r1, #4
    // mov r3, #6
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x51
    // str r7, [sp, #0xc]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r2, [r5]
    // mov r1, #0x12
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r7, #0
    // bl LoadFontPal1
    // mov r1, #0x16
    // mov r0, #4
    // lsl r1, r1, #4
    // add r2, r7, #0
    // bl LoadFontPal1
    // mov r3, #0
    // str r3, [sp]
    // str r7, [sp, #4]
    // ldr r0, [r5]
    // mov r1, #1
    // mov r2, #0x1f
    // bl LoadUserFrameGfx1
    // mov r3, #0
    // str r3, [sp]
    // str r7, [sp, #4]
    // ldr r0, [r5]
    // mov r1, #1
    // mov r2, #0x1f
    // bl LoadUserFrameGfx1
    // ldr r0, [sp, #0x10]
    // bl Options_GetFrame
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // str r4, [sp]
    // str r7, [sp, #4]
    // mov r2, #0xa
    // ldr r0, [r5]
    // mov r1, #4
    // add r3, r2, #0
    // bl LoadUserFrameGfx2
    // str r4, [sp]
    // str r7, [sp, #4]
    // mov r1, #1
    // ldr r0, [r5]
    // add r2, r1, #0
    // mov r3, #2
    // bl LoadUserFrameGfx2
    // ldr r1, _0225964C ; =0x000072CA
    // mov r0, #0
    // bl BG_SetMaskColor
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225963C: .word ov48_0225B190
    // _02259640: .word gSystem + 0x60
    // _02259644: .word ov48_0225B2A4
    // _02259648: .word ov48_0225B1B0
    // _0225964C: .word 0x000072CA
    // TODO: decompile
}



void ov48_02259650(void) {
    // push {r4, r5, r6, lr}
    // ldr r5, _02259680 ; =ov48_0225B1B0
    // add r6, r0, #0
    // mov r4, #0
    // ldr r1, [r5]
    // ldr r0, [r6]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl FreeBgTilemapBuffer
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #5
    // blt _02259658
    // ldr r0, [r6]
    // bl Heap_Free
    // ldr r0, _02259684 ; =gSystem + 0x60
    // mov r1, #0
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // pop {r4, r5, r6, pc}
    // nop
    // _02259680: .word ov48_0225B1B0
    // _02259684: .word gSystem + 0x60
    // TODO: decompile
}



void ov48_02259688(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
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
    // mov r1, #0x10
    // ldr r0, _02259720 ; =ov48_0225B1A0
    // add r2, r1, #0
    // bl ObjCharTransfer_InitEx
    // mov r0, #0x20
    // add r1, r6, #0
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // mov r0, #1
    // mov r1, #0x10
    // bl G2dRenderer_SetObjCharTransferReservedRegion
    // mov r0, #1
    // bl G2dRenderer_SetPlttTransferReservedRegion
    // add r1, r5, #0
    // mov r0, #0x20
    // add r1, #8
    // add r2, r6, #0
    // bl G2dRenderer_Init
    // str r0, [r5, #4]
    // add r0, r5, #0
    // mov r2, #1
    // add r0, #8
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // mov r7, #0x13
    // mov r4, #0
    // lsl r7, r7, #4
    // mov r0, #0x20
    // add r1, r4, #0
    // add r2, r6, #0
    // bl Create2DGfxResObjMan
    // str r0, [r5, r7]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _022596F4
    // bl sub_0203A880
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02259720: .word ov48_0225B1A0
    // TODO: decompile
}



void ov48_02259724(void) {
    SpriteList_Delete(*((u32*)(r0 + 4)));
    // ldr r0, [r5, r6]
    Destroy2DGfxResObjMan();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    OamManager_Free();
}



void ov48_02259750(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #4
    // str r0, [sp]
    // ldr r0, _02259780 ; =ov48_02259798
    // mov r2, #2
    // str r0, [sp, #4]
    // add r0, r1, #0
    // mov r1, #0
    // add r3, r1, #0
    // bl GF_3DVramMan_Create
    // mov r1, #5
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // mov r0, #0
    // ldr r3, _02259784 ; =0xFFFFF001
    // add r1, r0, #0
    // add r2, r0, #0
    // bl NNS_G3dGlbLightVector
    // add sp, #8
    // pop {r4, pc}
    // _02259780: .word ov48_02259798
    // _02259784: .word 0xFFFFF001
    // TODO: decompile
}



void ov48_02259788(void) {
    // mov r1, #5
    // lsl r1, r1, #6
    // ldr r3, _02259794 ; =GF_3DVramMan_Delete
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _02259794: .word GF_3DVramMan_Delete
    // TODO: decompile
}



void ov48_02259798(void) {
    // push {r3, lr}
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _02259808 ; =0x04000008
    // mov r1, #3
    // ldrh r2, [r0]
    // bic r2, r1
    // mov r1, #1
    // orr r1, r2
    // strh r1, [r0]
    // add r0, #0x58
    // ldrh r2, [r0]
    // ldr r1, _0225980C ; =0xFFFFCFFD
    // and r2, r1
    // strh r2, [r0]
    // ldrh r3, [r0]
    // add r2, r1, #2
    // and r3, r2
    // mov r2, #0x10
    // orr r2, r3
    // strh r2, [r0]
    // ldrh r3, [r0]
    // ldr r2, _02259810 ; =0x0000CFFB
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
    // ldr r0, _02259814 ; =0x00006B5A
    // ldr r2, _02259818 ; =0x00007FFF
    // mov r3, #0x3f
    // str r1, [sp]
    // bl G3X_SetClearColor
    // ldr r1, _0225981C ; =0xBFFF0000
    // ldr r0, _02259820 ; =0x04000580
    // str r1, [r0]
    // pop {r3, pc}
    // _02259808: .word 0x04000008
    // _0225980C: .word 0xFFFFCFFD
    // _02259810: .word 0x0000CFFB
    // _02259814: .word 0x00006B5A
    // _02259818: .word 0x00007FFF
    // _0225981C: .word 0xBFFF0000
    // _02259820: .word 0x04000580
    // TODO: decompile
}



void ov48_02259824(void) {
    // str r2, [r4]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    *((u32*)(r0 + 0xc)) = (1 << 0xc);
    *((u32*)(r0 + 0x10)) = (1 << 0xc);
    *((u32*)(r0 + 0x14)) = (1 << 0xc);
    *((u32*)(r0 + 0x18)) = (0x69 << 6);
    *((u32*)(r0 + 0x1c)) = (0x1f << 0xa);
    *((u32*)(r0 + 0x20)) = 0;
    // ldr r1, [r1, r2]
    // add r0, #0x9c
    sub_02018030(r0, 3, r2);
    // add r4, #0x9c
    // add r0, #0x24
    sub_020181B0(r4, r4);
}



void ov48_02259868(void) {
}



void ov48_02259874(void) {
}



void ov48_022598AC(void) {
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}



void ov48_022598BC(void) {
    // add r2, r0, #0
    // ldr r3, _022598C8 ; =ov48_02258BF4
    // add r2, #0x18
    // add r0, r1, #0
    // add r1, r2, #0
    // bx r3
    // _022598C8: .word ov48_02258BF4
    // TODO: decompile
}



void ov48_022598CC(void) {
    // add r2, #0x18
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}



void ov48_022598DC(void) {
    // ldmia r3!, {r0, r1}
    // add r2, #0x18
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}



void ov48_022598EC(void) {
    // push {r0, r1, r2, r3}
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r2, [sp, #4]
    // ldr r2, [sp, #0x34]
    // str r0, [sp]
    // str r2, [sp, #0x34]
    // bl ov48_02258A80
    // ldr r1, _02259974 ; =0x0000C178
    // ldr r0, [sp]
    // ldr r4, _02259978 ; =ov48_0225B178
    // add r5, r0, r1
    // ldr r1, _0225997C ; =0x0000C010
    // mov r7, #0
    // add r6, r0, r1
    // mov r1, #0x51
    // ldr r2, [sp, #4]
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // ldr r2, [r4]
    // ldr r3, [sp, #0x34]
    // add r0, r5, #0
    // bl sub_02018030
    // add r0, r6, #0
    // add r1, r5, #0
    // bl sub_020181B0
    // add r7, r7, #1
    // add r4, r4, #4
    // add r5, #0x10
    // add r6, #0x78
    // cmp r7, #3
    // blt _0225990C
    // ldr r0, [sp, #0x2c]
    // ldr r2, _02259980 ; =0x0000C004
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // bne _0225995A
    // mov r3, #3
    // ldr r0, [sp]
    // lsl r3, r3, #8
    // str r3, [r0, r2]
    // add r1, r2, #4
    // str r3, [r0, r1]
    // mov r1, #1
    // lsl r1, r1, #0xc
    // add r2, #8
    // str r1, [r0, r2]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7}
    // pop {r3}
    // add sp, #0x10
    // bx r3
    // mov r3, #1
    // ldr r0, [sp]
    // lsl r3, r3, #0xc
    // str r3, [r0, r2]
    // add r1, r2, #4
    // str r3, [r0, r1]
    // add r2, #8
    // str r3, [r0, r2]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7}
    // pop {r3}
    // add sp, #0x10
    // bx r3
    // _02259974: .word 0x0000C178
    // _02259978: .word ov48_0225B178
    // _0225997C: .word 0x0000C010
    // _02259980: .word 0x0000C004
    // TODO: decompile
}



void ov48_02259984(void) {
}



void ov48_022599A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x58
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r1, sp, #4
    // bl ov48_022598AC
    // add r0, r4, #0
    // add r1, sp, #0x10
    // bl ov48_022598BC
    // ldr r0, _02259A54 ; =0x0000C010
    // ldr r7, _02259A58 ; =0x0000019A
    // mov r6, #0
    // add r4, r5, r0
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #0xc]
    // add r0, r4, #0
    // bl sub_020182A8
    // cmp r6, #2
    // ldr r1, _02259A5C ; =0x0000C004
    // bne _022599E6
    // ldr r3, _02259A60 ; =0x0000C00C
    // ldr r2, _02259A64 ; =0x0000C008
    // ldr r3, [r5, r3]
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // add r0, r4, #0
    // add r3, r3, r7
    // bl sub_020182C4
    // b _022599F6
    // ldr r2, _02259A64 ; =0x0000C008
    // ldr r3, _02259A60 ; =0x0000C00C
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // ldr r3, [r5, r3]
    // add r0, r4, #0
    // bl sub_020182C4
    // add r6, r6, #1
    // add r4, #0x78
    // cmp r6, #3
    // blt _022599C0
    // add r0, sp, #0x34
    // bl MTX_Identity33_
    // mov r0, #0xc1
    // lsl r0, r0, #8
    // add r0, r5, r0
    // add r1, sp, #0x34
    // bl sub_02018288
    // ldr r0, [r5]
    // mov r7, #0
    // cmp r0, #0
    // bls _02259A50
    // ldr r0, _02259A54 ; =0x0000C010
    // add r6, r5, #0
    // add r0, r5, r0
    // add r6, #8
    // add r4, r5, #0
    // str r0, [sp]
    // add r0, r6, #0
    // add r1, sp, #0x10
    // add r2, sp, #0x34
    // bl MTX_Concat33
    // ldrh r2, [r4, #0x2c]
    // cmp r2, #3
    // beq _02259A44
    // mov r0, #0x78
    // add r1, r2, #0
    // mul r1, r0
    // ldr r0, [sp]
    // add r0, r0, r1
    // add r1, sp, #0x34
    // bl sub_02018288
    // ldr r0, [r5]
    // add r7, r7, #1
    // add r6, #0x30
    // add r4, #0x30
    // cmp r7, r0
    // blo _02259A24
    // add sp, #0x58
    // pop {r3, r4, r5, r6, r7, pc}
    // _02259A54: .word 0x0000C010
    // _02259A58: .word 0x0000019A
    // _02259A5C: .word 0x0000C004
    // _02259A60: .word 0x0000C00C
    // _02259A64: .word 0x0000C008
    // TODO: decompile
}



void ov48_02259A68(void) {
    // str r2, [sp]
    ov45_0222D724(r0, ((0 << 0x18) >> 0x18));
    ov45_0222D6FC(r5, ((r4 << 0x18) >> 0x18));
    // str r0, [sp, #4]
    ov45_0222D6B0(r5, ((r4 << 0x18) >> 0x18));
    ov45_0222D6D4(r5, ((r4 << 0x18) >> 0x18));
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
}



void ov48_02259AD0(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    ov48_02259BBC();
    // ldr r2, [sp]
    ov48_02259B10(r5, r7);
    ov48_02259B68(r5, r0);
    // ldr r1, [sp, #4]
    ov48_02259B3C(r5, r7);
}



void ov48_02259B10(void) {
    // add r0, #0x30
}



void ov48_02259B3C(void) {
    GF_AssertFail(*((u32*)r0));
    // mul r0, r6
    // add r1, r5, r0
    // ldrsh r0, [r1, r0]
    // str r0, [r4]
    // ldrsh r0, [r1, r0]
    *((u32*)(r4 + 4)) = 6;
    *((u32*)(r4 + 8)) = 0;
}



void ov48_02259B68(void) {
}



void ov48_02259B84(void) {
}



void ov48_02259BA0(void) {
}



void ov48_02259BBC(void) {
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}



void ov48_02259BC0(void) {
    // push {r0, r1, r2, r3}
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // add r0, r3, #0
    // bl Camera_New
    // str r0, [r4]
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, [r4]
    // ldr r1, _02259C2C ; =ov48_0225B16C
    // str r0, [sp, #4]
    // ldr r0, _02259C30 ; =ov48_0225B184
    // ldr r2, _02259C34 ; =0x000005C1
    // bl Camera_Init_FromTargetAndPos
    // mov r1, #0x19
    // ldr r2, [r4]
    // mov r0, #0
    // lsl r1, r1, #0xe
    // bl Camera_SetPerspectiveClippingPlane
    // ldr r1, [r4]
    // mov r0, #0
    // bl Camera_ApplyPerspectiveType
    // ldr r0, [r4]
    // bl Camera_SetStaticPtr
    // ldr r0, [sp, #0x14]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // bne _02259C0E
    // mov r0, #1
    // strh r0, [r4, #0x10]
    // mov r0, #5
    // lsl r0, r0, #0x10
    // b _02259C16
    // mov r0, #0
    // strh r0, [r4, #0x10]
    // mov r0, #0x4a
    // lsl r0, r0, #0xe
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #0xc]
    // ldr r1, [r4]
    // bl Camera_SetDistance
    // add sp, #8
    // pop {r4}
    // pop {r3}
    // add sp, #0x10
    // bx r3
    // nop
    // _02259C2C: .word ov48_0225B16C
    // _02259C30: .word ov48_0225B184
    // _02259C34: .word 0x000005C1
    // TODO: decompile
}



void ov48_02259C38(void) {
}



void ov48_02259C44(void) {
}



void ov48_02259C4C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrh r0, [r4, #0x10]
    // cmp r0, #0
    // bne _02259C62
    // mov r0, #1
    // strh r0, [r4, #0x10]
    // ldr r0, _02259C74 ; =0x000005D5
    // bl PlaySE
    // b _02259C6C
    // mov r0, #0
    // strh r0, [r4, #0x10]
    // ldr r0, _02259C74 ; =0x000005D5
    // bl PlaySE
    // mov r0, #1
    // strh r0, [r4, #0x12]
    // pop {r4, pc}
    // nop
    // _02259C74: .word 0x000005D5
    // TODO: decompile
}



void ov48_02259C78(void) {
    // push {r3, lr}
    // add r2, r0, #0
    // ldrh r0, [r2, #0x12]
    // cmp r0, #0
    // bne _02259C86
    // mov r0, #1
    // pop {r3, pc}
    // ldrh r0, [r2, #0x10]
    // cmp r0, #0
    // beq _02259CBE
    // cmp r0, #1
    // bne _02259CEA
    // mov r0, #0x16
    // ldr r3, [r2, #0xc]
    // lsl r0, r0, #0xe
    // cmp r3, r0
    // ble _02259CB2
    // mov r0, #2
    // lsl r0, r0, #0xe
    // sub r0, r3, r0
    // str r0, [r2, #0xc]
    // ldr r0, _02259CF8 ; =0x0000C004
    // ldr r3, [r1, r0]
    // sub r3, #0x80
    // str r3, [r1, r0]
    // ldr r3, [r1, r0]
    // add r0, r0, #4
    // str r3, [r1, r0]
    // b _02259CEA
    // mov r0, #5
    // lsl r0, r0, #0x10
    // str r0, [r2, #0xc]
    // mov r0, #0
    // strh r0, [r2, #0x12]
    // b _02259CEA
    // mov r0, #0x12
    // ldr r3, [r2, #0xc]
    // lsl r0, r0, #0x10
    // cmp r3, r0
    // bge _02259CE0
    // mov r0, #2
    // lsl r0, r0, #0xe
    // add r0, r3, r0
    // str r0, [r2, #0xc]
    // ldr r0, _02259CF8 ; =0x0000C004
    // ldr r3, [r1, r0]
    // add r3, #0x80
    // str r3, [r1, r0]
    // ldr r3, [r1, r0]
    // add r0, r0, #4
    // str r3, [r1, r0]
    // b _02259CEA
    // mov r0, #0x4a
    // lsl r0, r0, #0xe
    // str r0, [r2, #0xc]
    // mov r0, #0
    // strh r0, [r2, #0x12]
    // ldr r0, [r2, #0xc]
    // ldr r1, [r2]
    // bl Camera_SetDistance
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _02259CF8: .word 0x0000C004
    // TODO: decompile
}



void ov48_02259CFC(void) {
    // ldrh r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}



void ov48_02259D00(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r4, r1, #0
    // add r6, r2, #0
    // mov r1, #0
    // mov r2, #0x2c
    // add r5, r0, #0
    // add r7, r3, #0
    // bl memset
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r2, #1
    // add r1, r5, #0
    // str r2, [sp, #0xc]
    // mov r0, #0x28
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // add r1, #0x1c
    // mov r3, #0x19
    // bl AddWindowParameterized
    // add r0, r5, #0
    // add r0, #0x1c
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // add r0, r6, #0
    // mov r1, #1
    // bl ov48_0225B0C4
    // add r4, r0, #0
    // mov r0, #2
    // add r1, r7, #0
    // bl FontID_Alloc
    // mov r0, #2
    // add r1, r4, #0
    // mov r2, #0
    // mov r3, #0x30
    // bl FontID_String_GetCenterAlignmentX
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02259D90 ; =0x0002010F
    // add r2, r4, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // str r1, [sp, #0xc]
    // add r0, #0x1c
    // mov r1, #2
    // bl AddTextPrinterParameterizedWithColor
    // mov r0, #2
    // bl FontID_Release
    // add r5, #0x1c
    // mov r1, #0
    // add r0, r5, #0
    // mov r2, #0x1f
    // add r3, r1, #0
    // bl DrawFrameAndWindow1
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02259D90: .word 0x0002010F
    // TODO: decompile
}



void ov48_02259D94(void) {
}



void ov48_02259DA0(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [r4]
    // ldr r0, _02259E58 ; =gSystem + 0x40
    // ldrh r1, [r0, #0x24]
    // cmp r1, #0
    // beq _02259DE8
    // ldrh r1, [r0, #0x20]
    // cmp r1, #0xc8
    // blo _02259DCE
    // cmp r1, #0xf8
    // bhi _02259DCE
    // ldrh r0, [r0, #0x22]
    // cmp r0, #0xa8
    // blo _02259DCE
    // cmp r0, #0xb8
    // bhi _02259DCE
    // mov r0, #2
    // add sp, #0x18
    // str r0, [r4]
    // pop {r4, pc}
    // mov r0, #0
    // str r0, [r4, #4]
    // str r0, [r4, #0x10]
    // str r0, [r4, #0x14]
    // str r0, [r4, #0x18]
    // str r0, [r4]
    // ldr r0, _02259E58 ; =gSystem + 0x40
    // ldrh r1, [r0, #0x20]
    // str r1, [r4, #8]
    // ldrh r0, [r0, #0x22]
    // str r0, [r4, #0xc]
    // mov r0, #4
    // str r0, [r4, #0x18]
    // ldr r0, _02259E58 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x26]
    // cmp r0, #0
    // beq _02259E40
    // ldr r1, [r4, #4]
    // cmp r1, #0
    // beq _02259DFE
    // cmp r1, #1
    // beq _02259E0E
    // add sp, #0x18
    // pop {r4, pc}
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // bne _02259E0A
    // add r0, r1, #1
    // str r0, [r4, #4]
    // b _02259E0E
    // sub r0, r0, #1
    // str r0, [r4, #0x18]
    // add r0, sp, #0xc
    // str r0, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #0xc]
    // add r2, sp, #0x14
    // add r3, sp, #0x10
    // bl ov48_02258CE4
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // orr r0, r1
    // str r0, [r4]
    // ldr r0, [sp, #0x10]
    // str r0, [r4, #0x10]
    // ldr r0, [sp, #8]
    // add sp, #0x18
    // str r0, [r4, #0x14]
    // ldr r0, _02259E58 ; =gSystem + 0x40
    // ldrh r1, [r0, #0x20]
    // str r1, [r4, #8]
    // ldrh r0, [r0, #0x22]
    // str r0, [r4, #0xc]
    // pop {r4, pc}
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // beq _02259E4A
    // mov r0, #1
    // str r0, [r4]
    // mov r0, #0
    // str r0, [r4, #4]
    // str r0, [r4, #0x10]
    // str r0, [r4, #0x14]
    // str r0, [r4, #0x18]
    // add sp, #0x18
    // pop {r4, pc}
    // _02259E58: .word gSystem + 0x40
    // TODO: decompile
}



void ov48_02259E5C(void) {
    // cmp r1, #0
    // beq _02259E6A
    // cmp r1, #1
    // beq _02259E6E
    // cmp r1, #2
    // beq _02259E72
    // bx lr
    // ldr r0, [r0]
    // bx lr
    // ldr r0, [r0, #0x10]
    // bx lr
    // ldr r0, [r0, #0x14]
    // bx lr
    // TODO: decompile
}



void ov48_02259E78(void) {
}



void ov48_02259E90(void) {
}



void ov48_02259EAC(void) {
    memset(0, 0x2c);
    Save_PlayerData_GetOptionsAddr(r7);
    Options_GetTextFrameDelay();
    *((u32*)(r5 + 8)) = r0;
    // ldr r1, [sp, #0x28]
    String_New(0x80);
    *((u32*)(r5 + 0xc)) = r0;
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x10
    AddWindowParameterized(*((u32*)r4), r5, 1, 2);
    // add r0, #0x10
    FillWindowPixelBuffer(r5, 0xf);
    ov48_0225B0D4(r6, 5, *((u32*)(r5 + 0xc)));
    // ldr r0, [sp, #0x28]
    YesNoPrompt_Create();
    *((u32*)(r5 + 0x20)) = r0;
}



void ov48_02259F14(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 4)) << 0x18) >> 0x18));
    RemoveTextPrinter(((*((u32*)(r4 + 4)) << 0x18) >> 0x18));
    String_Delete(*((u32*)(r4 + 0xc)));
    YesNoPrompt_Destroy(*((u32*)(r4 + 0x20)));
    // add r4, #0x10
    RemoveWindow(r4);
}



void ov48_02259F48(void) {
    // add r0, #0x10
    FillWindowPixelBuffer(0xf);
    // add r0, #0x10
    DrawFrameAndWindow2(r4, 1, 1, 2);
    // add r0, #0x10
    ScheduleWindowCopyToVram(r4);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0x10
    AddTextPrinterParameterized(r4, 1, *((u32*)(r4 + 0xc)), 0);
    *((u32*)(r4 + 4)) = r0;
    // str r0, [r4]
}



void ov48_02259F8C(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _02259F9E
    // cmp r0, #1
    // beq _02259FD8
    // b _02259FE0
    // ldr r0, [r5, #4]
    // mov r4, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _02259FE0
    // ldr r3, _02259FE8 ; =ov48_0225B1C4
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // add r0, r5, #0
    // add r0, #0x10
    // bl GetWindowBgConfig
    // str r0, [sp]
    // ldr r0, [r5, #0x20]
    // add r1, sp, #0
    // bl YesNoPrompt_InitFromTemplate
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _02259FE0
    // ldr r0, [r5, #0x20]
    // bl YesNoPrompt_HandleInput
    // add r4, r0, #0
    // add r0, r4, #0
    // add sp, #0x14
    // pop {r4, r5, pc}
    // nop
    // _02259FE8: .word ov48_0225B1C4
    // TODO: decompile
}



void ov48_02259FEC(void) {
}



void ov48_0225A00C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // str r1, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // mov r2, #0
    // add r1, r0, #0
    // str r0, [sp, #0x14]
    // str r3, [sp, #0x20]
    // str r2, [r1]
    // bl ov48_0225A288
    // ldr r5, [sp, #0x14]
    // ldr r4, _0225A100 ; =_0225B164
    // ldr r6, _0225A104 ; =ov48_0225B268
    // mov r7, #0
    // add r5, #0xa0
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldrb r3, [r4]
    // add r0, r5, #0
    // add r2, r6, #0
    // bl ov48_0225A894
    // add r7, r7, #1
    // add r4, r4, #1
    // add r6, #0xc
    // add r5, #0x28
    // cmp r7, #5
    // blt _0225A02C
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r2, #4
    // str r2, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // mov r0, #0x28
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // mov r3, #0x6a
    // ldr r1, [sp, #0x14]
    // lsl r3, r3, #2
    // add r1, r1, r3
    // ldr r0, [r0]
    // mov r3, #2
    // bl AddWindowParameterized
    // mov r1, #0x6a
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #2
    // add r0, r0, r1
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x1c]
    // mov r1, #0
    // bl ov48_0225B0C4
    // mov r3, #0
    // add r2, r0, #0
    // str r3, [sp]
    // mov r1, #0xff
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x14]
    // add r1, #0xa9
    // add r0, r0, r1
    // mov r1, #1
    // str r3, [sp, #8]
    // bl AddTextPrinterParameterized
    // mov r1, #0x6a
    // mov r2, #0xa
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #2
    // add r0, r0, r1
    // mov r1, #0
    // add r3, r2, #0
    // bl DrawFrameAndWindow2
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x20]
    // bl ov48_0225A6DC
    // ldr r0, [sp, #0x20]
    // mov r1, #0x51
    // str r0, [sp]
    // ldr r3, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #0x13
    // mov r2, #0
    // add r3, #0x98
    // bl GfGfxLoader_GetScrnDataFromOpenNarc
    // ldr r1, [sp, #0x14]
    // mov r3, #0xb9
    // add r1, #0x94
    // str r0, [r1]
    // mov r1, #0x6e
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #2
    // add r0, r0, r1
    // ldr r2, [sp, #0x14]
    // lsl r3, r3, #2
    // add r2, r2, r3
    // ldr r1, [sp, #0x18]
    // ldr r3, [sp, #0x20]
    // bl ov48_0225AAAC
    // mov r1, #0xb9
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #2
    // add r0, r0, r1
    // bl ov48_0225A5C4
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0225A100: .word _0225B164
    // _0225A104: .word ov48_0225B268
    // TODO: decompile
}



void ov48_0225A108(void) {
    // add r0, r5, r0
    ov48_0225A634((0xb9 << 2));
    // add r0, r5, r0
    ov48_0225AC34((0x6e << 2), r4);
    // add r0, #0x94
    Heap_Free(*((u32*)r5));
    ov48_0225A768(r5);
    // add r0, r5, r0
    RemoveWindow((0x6a << 2));
    ov48_0225A294(r5);
    // add r5, #0xa0
    ov48_0225A928(r5);
    // add r5, #0x28
}



void ov48_0225A158(void) {
    // add r3, r3, r3
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _0225A170: ; jump table
    ov48_0225A338(r2, (*((u16*)(*((u32*)r0) + 6)) << 0x10));
    // add r0, r4, r0
    // add r1, r4, r1
    ov48_0225AD54((0x6e << 2), (0xb9 << 2));
    ov48_0225A354();
    // str r0, [r4]
    ov48_0225A41C(2, r5);
    // str r0, [r4]
    ov48_0225A428(0);
    ov48_0225A430(r4, r5);
    // str r0, [r4]
    ov48_0225A430(4, r5);
    // str r0, [r4]
}



void ov48_0225A1D0(void) {
    // add r0, r4, r0
    ClearFrameAndWindow2((0x6a << 2), 1);
    // add r0, r4, r0
    ClearWindowTilemapAndScheduleTransfer((0x6a << 2));
}



void ov48_0225A1EC(void) {
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x6a << 2));
    // add r0, r4, r0
    DrawFrameAndWindow2((0x6a << 2), 1, 0xa, 0xa);
}



void ov48_0225A20C(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0225A220: ; jump table
    // str r2, [r0]
    // str r1, [r0]
    ov48_0225A2A0(0, 3, 1);
}



void ov48_0225A244(void) {
    // add r7, sp, #0
    ov48_0225A30C(r0, r7, 0);
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #8]
}



void ov48_0225A288(void) {
}



void ov48_0225A294(void) {
}



void ov48_0225A2A0(void) {
    // sub r2, r2, r3
    // ror r2, r1
    // add r2, r3, r2
    ov48_0225A2EC(*((u16*)(r0 + 0x34)), ((*((u16*)(r0 + 0x36)) + 1) << 0x1e), ((*((u16*)(r0 + 0x36)) + 1) >> 0x1f));
    // mul r0, r1
    // add r0, r5, r0
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u16*)(r5 + 0x36)) = 0x1e;
    *((u32*)(r5 + 0x38)) = (*((u32*)(r5 + 0x38)) + 1);
}



void ov48_0225A2EC(void) {
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    *((u16*)(r0 + 0x34)) = 0x1e;
    *((u32*)(r0 + 0x38)) = (*((u32*)(r0 + 0x38)) - 1);
}



void ov48_0225A30C(void) {
    // sub r2, r1, r2
    // bpl _0225A322
    // mul r1, r2
    // add r0, r0, r1
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}



void ov48_0225A338(void) {
}



void ov48_0225A354(void) {
    // str r1, [sp]
    // add r0, #0x40
    memset(0, 0x48);
    *((u16*)(r5 + 0x3c)) = 0;
    *((u16*)(r5 + 0x3e)) = 0;
    // add r4, #0xa0
    ov48_0225AA50(r5);
    // add r4, #0x28
    // add r0, r5, r0
    ov48_0225ACAC((0x6e << 2));
    // str r0, [sp, #8]
    // add r0, #0xa0
    // str r0, [sp, #8]
    // mvn r7, r7
    // str r0, [sp, #0xc]
    // add r0, #0x3e
    // str r7, [sp, #0x10]
    // str r0, [sp, #0xc]
    // sub r4, r0, r6
    // add r1, sp, #0x14
    ov48_0225A30C(r5, 0);
    // ldr r0, [sp, #0x14]
    ov48_0225B038();
    // str r0, [sp, #4]
    // mul r1, r0
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    ov48_0225AA38(r4, 1);
    // ldr r3, [sp]
    // add r2, sp, #0x14
    ov48_0225A790(r5, r4);
    // add r1, r5, r0
    // ldr r0, [sp, #4]
    // add r1, #0x88
    // str r0, [r1]
    // ldr r2, [sp, #0x14]
    // add r0, r5, r0
    ov48_0225ACD8((0x6e << 2), ((r4 << 0x18) >> 0x18), ((r2 << 0x18) >> 0x18), ((r7 << 0x18) >> 0x18));
    // ldr r0, [sp, #0xc]
    // ldrh r0, [r0]
    // ldr r0, [sp, #0xc]
    // strh r1, [r0]
    // ldr r7, [sp, #0x14]
    // add r1, r5, r0
    // add r1, #0x88
    // ldr r7, [sp, #0x10]
    // str r0, [r1]
}



void ov48_0225A41C(void) {
}



void ov48_0225A428(void) {
    *((u16*)(r0 + 0x3c)) = (*((u16*)(r0 + 0x3c)) >> 1);
}



void ov48_0225A430(void) {
}



void ov48_0225A43C(void) {
    // str r0, [sp]
    _s32_div_f(*((u16*)(r0 + 0x3c)), r2);
    // ldr r0, [sp]
    _s32_div_f(r4);
    ov48_0225A4B4(r5, r0);
    // mul r0, r4
    *((u16*)(r5 + 0x3c)) = (*((u16*)(r5 + 0x3c)) + 1);
    ov48_0225A4C0(r5, 0, r6);
    // add r0, r5, r0
    ov48_0225AD38((0x6e << 2));
    // add r0, r5, r0
    ov48_0225A668((0xb9 << 2), 0, 0);
}



void ov48_0225A4B4(void) {
    // add r0, r0, r1
    // add r0, #0x40
    // strb r2, [r0]
}



void ov48_0225A4C0(void) {
    // str r2, [sp]
    // add r0, r5, r2
    // add r0, #0x40
    // ldrb r0, [r0]
    // add r0, #0x41
    // ldrsb r4, [r0, r2]
    // add r6, r0, r2
    // sub r7, r0, r1
    _u32_div_f(r7, 6, (r1 << 2));
    // str r0, [sp, #0xc]
    _u32_div_f(r7, 6);
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    // add r0, r5, r0
    // add r0, #0x88
    // str r0, [sp, #8]
    ov48_0225A858(r5);
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    ov48_0225A868(r5, r0);
    // ldr r2, [sp]
    ov48_0225A57C(r5, r7);
    // add r0, r5, r0
    // asr r1, r1, #0x10
    ov48_0225A668((0xb9 << 2), (r7 << 0x13), 0x90);
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    ov48_0225A834(r5);
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    ov48_0225A868(r5, r0);
    // ldr r0, [sp, #8]
    // add r5, #0xa0
    // mul r1, r0
    // add r0, r5, r1
    // ldr r2, [sp]
    ov48_0225AA5C(r7);
    // ldrsb r1, [r6, r0]
    // strb r1, [r6]
}



void ov48_0225A57C(void) {
    // add r0, #0x98
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r2, #0xc
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldrh r1, [r0]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r2), 6, 0, ((r1 << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 6);
}



void ov48_0225A5C4(void) {
    // push {r4, r5, r6, lr}
    // ldr r1, _0225A624 ; =0x04001000
    // ldr r2, _0225A628 ; =0xFFFF1FFF
    // ldr r3, [r1]
    // add r5, r1, #0
    // and r3, r2
    // mov r2, #6
    // lsl r2, r2, #0xc
    // orr r2, r3
    // str r2, [r1]
    // add r5, #0x4a
    // ldrh r6, [r5]
    // mov r3, #0x3f
    // mov r2, #0x1f
    // bic r6, r3
    // orr r2, r6
    // strh r2, [r5]
    // add r1, #0x48
    // ldrh r5, [r1]
    // mov r2, #0xf
    // add r4, r0, #0
    // bic r5, r3
    // add r3, r5, #0
    // orr r3, r2
    // strh r3, [r1]
    // ldrh r5, [r1]
    // ldr r3, _0225A62C ; =0xFFFFC0FF
    // lsl r2, r2, #8
    // and r3, r5
    // orr r2, r3
    // strh r2, [r1]
    // mov r1, #0
    // add r2, r1, #0
    // bl ov48_0225A650
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov48_0225A668
    // ldr r0, _0225A630 ; =ov48_0225A680
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnVWaitQueue
    // str r0, [r4, #0xc]
    // pop {r4, r5, r6, pc}
    // nop
    // _0225A624: .word 0x04001000
    // _0225A628: .word 0xFFFF1FFF
    // _0225A62C: .word 0xFFFFC0FF
    // _0225A630: .word ov48_0225A680
    // TODO: decompile
}



void ov48_0225A634(void) {
}



void ov48_0225A650(void) {
    // strh r3, [r0]
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 6)) = 0;
}



void ov48_0225A668(void) {
    *((u16*)(r0 + 2)) = 1;
    *((u16*)(r0 + 8)) = 0;
    *((u16*)(r0 + 0xa)) = 0;
}



void ov48_0225A680(void) {
    // push {r4, r5}
    // mov r4, #0
    // ldrsh r0, [r1, r4]
    // cmp r0, #0
    // beq _0225A6A8
    // mov r0, #6
    // ldrsh r2, [r1, r0]
    // mov r0, #4
    // ldrsh r5, [r1, r0]
    // ldr r0, _0225A6D4 ; =0x04001040
    // mov r3, #0xff
    // strh r3, [r0]
    // lsl r2, r2, #0x18
    // lsl r5, r5, #8
    // lsl r3, r3, #8
    // and r3, r5
    // lsr r2, r2, #0x18
    // orr r2, r3
    // strh r2, [r0, #4]
    // strh r4, [r1]
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // cmp r0, #0
    // beq _0225A6D0
    // mov r0, #0xa
    // ldrsh r2, [r1, r0]
    // mov r0, #8
    // ldrsh r4, [r1, r0]
    // ldr r0, _0225A6D8 ; =0x04001042
    // mov r3, #0xff
    // strh r3, [r0]
    // lsl r2, r2, #0x18
    // lsl r4, r4, #8
    // lsl r3, r3, #8
    // and r3, r4
    // lsr r2, r2, #0x18
    // orr r2, r3
    // strh r2, [r0, #4]
    // mov r0, #0
    // strh r0, [r1, #2]
    // pop {r4, r5}
    // bx lr
    // _0225A6D4: .word 0x04001040
    // _0225A6D8: .word 0x04001042
    // TODO: decompile
}



void ov48_0225A6DC(void) {
    // str r1, [sp, #0x18]
    // add r1, #0xd4
    // str r0, [sp, #0x14]
    // add r5, r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    AddWindowParameterized(*((u32*)((0x94 << 0x10) >> 0x10)), r5, 5, 0);
    // add r6, #0xa2
    FillWindowPixelBuffer(r5, 0);
    CopyWindowToVram(r5);
    // add r5, #0x10
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // add r1, r1, r2
    AddWindowParameterized(*((u32*)0x94), 5, 0);
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    FillWindowPixelBuffer(0);
}



void ov48_0225A768(void) {
    // add r5, r6, r0
    RemoveWindow(r5);
    // add r5, #0x10
    // add r0, r6, r0
    RemoveWindow((0x66 << 2));
}



void ov48_0225A790(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // cmp r4, #3
    // blo _0225A7A4
    // bl GF_AssertFail
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // add r5, r5, r0
    // lsl r4, r4, #4
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r6]
    // bl ov48_0225B038
    // str r0, [sp, #0x10]
    // add r0, r7, #0
    // mov r1, #2
    // bl ov48_0225B0C4
    // mov r3, #0
    // add r2, r0, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // lsl r1, r0, #2
    // ldr r0, _0225A82C ; =ov48_0225B1D8
    // ldr r0, [r0, r1]
    // mov r1, #1
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r4
    // bl AddTextPrinterParameterizedWithColor
    // ldr r1, [r6, #4]
    // add r0, r7, #0
    // bl ov48_0225B0E0
    // add r2, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0225A830 ; =0x00010200
    // mov r3, #0
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r4
    // mov r1, #1
    // bl AddTextPrinterParameterizedWithColor
    // ldr r1, [r6, #4]
    // ldr r2, [r6, #8]
    // add r0, r7, #0
    // bl ov48_0225B108
    // add r2, r0, #0
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0225A830 ; =0x00010200
    // mov r3, #0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // mov r1, #1
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0225A82C: .word ov48_0225B1D8
    // _0225A830: .word 0x00010200
    // TODO: decompile
}



void ov48_0225A834(void) {
    GF_AssertFail();
    // add r1, r5, r0
    // ldr r1, [r1, r0]
    // mul r0, r6
    // add r0, r1, r0
}



void ov48_0225A858(void) {
    // ldr r2, [r0, r2]
    // mul r0, r1
    // add r0, r2, r0
}



void ov48_0225A868(void) {
    // add r2, r0, r2
    // add r0, r2, r0
    GetWindowBaseTile((r1 << 4), (0x5a << 2));
    // mul r1, r3
    // add r0, r0, r1
    GF_CreateNewVramTransferTask(0x15, ((r0 << 0x10) >> 0xb), r4, (0x1b << 5));
}



void ov48_0225A894(void) {
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x28]
    // str r2, [sp, #8]
    // str r1, [sp, #0x28]
    memset(0, 0x28);
    // ldr r0, [sp, #8]
    *((u16*)(r7 + 2)) = r4;
    *((u16*)(r7 + 0x18)) = *((u16*)(r0 + 4));
    // str r0, [sp, #0xc]
    // ldr r4, [sp, #8]
    // add r6, #0x10
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #4]
    // str r0, [sp]
    // ldr r0, [r1, r0]
    // ldrh r1, [r4]
    GfGfxLoader_GetScrnDataFromOpenNarc((0x51 << 2), 0, r7);
    *((u32*)(r5 + 8)) = r0;
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0x24
    // strb r1, [r0]
    // ldr r0, [sp, #8]
    // add r0, #0x26
    // strb r1, [r0]
    // ldr r0, [sp, #4]
    // ldr r0, [r0, r1]
    // ldr r1, [sp, #8]
    // ldr r3, [sp, #0x28]
    // add r2, #0x20
    GfGfxLoader_GetPlttDataFromOpenNarc(r7, *((u16*)((0x51 << 2) + 6)), r7);
    *((u32*)(r7 + 0x1c)) = r0;
}



void ov48_0225A928(void) {
    Heap_Free(*((u32*)(r0 + 8)));
    // add r0, #0x24
    // ldrb r0, [r0]
    Heap_Free(*((u32*)(r6 + 0x1c)));
}



void ov48_0225A95C(void) {
    // ldrh r4, [r5]
    // mul r0, r4
    _s32_div_f(*((u16*)(r0 + 0x18)), *((u16*)(r0 + 2)));
    // str r0, [sp, #0x20]
    // add r0, #0x24
    // ldrb r0, [r0]
    // mul r0, r4
    _s32_div_f(r5, r6);
    // str r0, [sp, #0x1c]
    _s32_div_f((r4 + 1), r6);
    // strh r1, [r5]
    // ldr r0, [sp, #0x20]
    *((u16*)(r5 + 0x1a)) = *((u16*)(r5 + 0x18));
    // add r0, r5, r6
    // add r0, r5, r0
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldrh r1, [r0]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r7), 6, 0, ((0 << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)r7), 6);
    // add r0, #0x24
    // ldrb r0, [r0]
    // add r0, #0x25
    // ldrb r1, [r0]
    // ldr r0, [sp, #0x1c]
    // add r1, #0x25
    // strb r0, [r1]
    // add r1, #0x26
    // ldrb r1, [r1]
    // add r5, #0x25
    // ldrb r2, [r5]
    // add r2, r3, r2
    GF_CreateNewVramTransferTask(0x1f, (r5 << 5), (*((u32*)(r5 + 0x20)) << 5), 0x20);
    GF_AssertFail();
}



void ov48_0225AA38(void) {
}



void ov48_0225AA50(void) {
}



void ov48_0225AA5C(void) {
    // add r0, r0, r2
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r2, #0xc
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldrh r1, [r0]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r2), 6, 0, ((r1 << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 6);
}



void ov48_0225AAAC(void) {
    // str r0, [sp, #0x2c]
    // str r2, [sp, #0x30]
    // add r2, sp, #0x44
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0x2c]
    // str r3, [sp, #0x34]
    memset(0, 0, (0x4b << 2));
    // ldr r0, [sp, #0x2c]
    *((u16*)(r0 + 0x30)) = 2;
    *((u16*)(r0 + 0x32)) = 0x80;
    // ldr r3, [sp, #0x34]
    // str r0, [sp, #0x44]
    // add r0, sp, #0x64
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x58]
    // str r3, [sp, #0x60]
    // str r2, [sp, #0x5c]
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // ldr r2, [sp, #0x34]
    // add r0, #0xf4
    // str r2, [sp, #0xc]
    // add r1, #0xc4
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    AddPlttResObjFromOpenNarc(0x40, 0x80, 0x14, 0);
    // ldr r1, [sp, #0x2c]
    *((u32*)(r1 + 0x70)) = r0;
    sub_0200B00C();
    GF_AssertFail();
    // ldr r0, [sp, #0x2c]
    sub_0200A740(*((u32*)(r0 + 0x70)));
    // str r0, [sp, #0x40]
    // ldr r4, [sp, #0x2c]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x38]
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #8]
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // ldr r2, [sp, #0x40]
    AddCharResObjFromOpenNarc((0x13 << 4), (0x51 << 2), 0);
    *((u32*)(r4 + 0x6c)) = r0;
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #8]
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // ldr r2, [sp, #0x3c]
    AddCellOrAnimResObjFromOpenNarc((0x4e << 2), (0x51 << 2), 0);
    *((u32*)(r4 + 0x74)) = r0;
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #8]
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // ldr r2, [sp, #0x38]
    AddCellOrAnimResObjFromOpenNarc((0x4f << 2), (0x51 << 2), 0);
    *((u32*)(r4 + 0x78)) = r0;
    sub_0200ADA4(*((u32*)(r4 + 0x6c)));
    GF_AssertFail();
    sub_0200A740(*((u32*)(r4 + 0x6c)));
    // str r6, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [r5, r0]
    // str r0, [sp, #0x14]
    // ldr r0, [r5, r0]
    // str r0, [sp, #0x18]
    // ldr r0, [r5, r0]
    // str r0, [sp, #0x1c]
    // ldr r0, [r5, r0]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x64
    CreateSpriteResourcesHeader(0, r6, 0, r6);
    // add r0, sp, #0x44
    Sprite_Create();
    *((u32*)(r7 + 0x3c)) = r0;
    Sprite_SetAnimActiveFlag(1);
    Sprite_SetAnimSpeed(*((u32*)(r7 + 0x3c)), (1 << 0xc));
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x3c]
    // add r4, #0x10
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x2c]
    ov48_0225AD38((((r0 + 3) + 3) + 3));
    // ldr r0, [sp, #0x30]
    ov48_0225A668(0, 0);
}



void ov48_0225AC34(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, _0225ACA8 ; =0x000005D8
    // mov r1, #0
    // bl StopSE
    // mov r0, #0
    // ldr r7, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [r0, #0x3c]
    // bl Sprite_Delete
    // ldr r0, [r7, #0x6c]
    // bl sub_0200AEB0
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // bne _0225AC72
    // ldr r0, [r7, #0x70]
    // bl sub_0200B0A8
    // mov r0, #0x4d
    // ldr r1, [sp, #4]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldr r1, [r7, #0x70]
    // bl DestroySingle2DGfxResObj
    // ldr r5, [sp, #4]
    // mov r4, #0
    // add r6, r7, #0
    // cmp r4, #1
    // beq _0225AC88
    // mov r0, #0x13
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r1, [r6, #0x6c]
    // bl DestroySingle2DGfxResObj
    // add r4, r4, #1
    // add r6, r6, #4
    // add r5, r5, #4
    // cmp r4, #4
    // blt _0225AC78
    // ldr r0, [sp]
    // add r7, #0x10
    // add r0, r0, #4
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // str r0, [sp, #8]
    // cmp r0, #0xc
    // blt _0225AC4A
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0225ACA8: .word 0x000005D8
    // TODO: decompile
}



void ov48_0225ACAC(void) {
    // add r1, #0x34
    // strb r3, [r1]
    // add r2, #0x34
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 0;
    // add r1, #0x38
    // strb r3, [r1]
    // add r2, #0x38
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 0;
    *((u16*)(r0 + 0x30)) = 2;
    *((u16*)(r0 + 0x32)) = 0x80;
}



void ov48_0225ACD8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r0, r5, r4
    // add r6, r5, #0
    // str r3, [sp]
    // mov r1, #1
    // add r0, #0x34
    // strb r1, [r0]
    // add r6, #0x38
    // add r0, r2, #0
    // bl ov48_0225B050
    // strb r0, [r6, r4]
    // lsl r7, r4, #4
    // ldrb r2, [r6, r4]
    // mov r1, #0x30
    // ldr r3, _0225AD34 ; =ov48_0225B330
    // mul r1, r2
    // add r1, r3, r1
    // add r0, r5, r7
    // add r1, r1, r7
    // bl ov48_0225AE3C
    // ldr r0, [sp]
    // cmp r0, #0x18
    // bhs _0225AD30
    // bl ov48_0225B050
    // ldrb r1, [r6, r4]
    // cmp r0, r1
    // bne _0225AD30
    // cmp r4, #2
    // bhs _0225AD30
    // add r0, r4, #1
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #1
    // bl ov48_0225AE5C
    // add r0, r5, r7
    // mov r1, #1
    // bl ov48_0225AE58
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225AD34: .word ov48_0225B330
    // TODO: decompile
}



void ov48_0225AD38(void) {
}



void ov48_0225AD54(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // mov r1, #0x32
    // ldrsh r2, [r5, r1]
    // cmp r2, #0
    // ble _0225AD82
    // sub r2, r2, #1
    // strh r2, [r5, #0x32]
    // ldrsh r1, [r5, r1]
    // cmp r1, #0
    // bne _0225ADB6
    // mov r1, #0x30
    // ldrsh r1, [r5, r1]
    // add r2, r4, #0
    // bl ov48_0225ADBC
    // cmp r0, #1
    // bne _0225ADB6
    // ldr r0, _0225ADB8 ; =0x000005D8
    // bl PlaySE
    // pop {r3, r4, r5, pc}
    // mov r1, #0x30
    // ldrsh r1, [r5, r1]
    // add r2, r4, #0
    // bl ov48_0225ADF8
    // cmp r0, #1
    // bne _0225ADB6
    // mov r1, #0x30
    // ldrsh r0, [r5, r1]
    // sub r0, r0, #1
    // bmi _0225ADA6
    // strh r0, [r5, #0x30]
    // ldrsh r1, [r5, r1]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov48_0225ADBC
    // pop {r3, r4, r5, pc}
    // ldr r0, _0225ADB8 ; =0x000005D8
    // mov r1, #0
    // bl StopSE
    // mov r0, #2
    // strh r0, [r5, #0x30]
    // mov r0, #0x80
    // strh r0, [r5, #0x32]
    // pop {r3, r4, r5, pc}
    // _0225ADB8: .word 0x000005D8
    // TODO: decompile
}



void ov48_0225ADBC(void) {
    // add r0, r5, r4
    // add r0, #0x34
    // ldrb r0, [r0]
    // add r0, r5, r0
    ov48_0225AEA8((r1 << 4), r2);
    // add r0, r5, r4
    // add r0, #0x38
    // ldrb r0, [r0]
    // add r0, r5, r0
    Sprite_SetDrawFlag(*((u32*)((r0 << 2) + 0x3c)), 1);
    ov48_0225B010(r5, r4);
}



void ov48_0225ADF8(void) {
    // add r0, r5, r4
    // add r0, #0x34
    // ldrb r0, [r0]
    // add r0, r5, r0
    ov48_0225AE60((r1 << 4), r2);
    ov48_0225B010(r5, r4);
    // add r0, r5, r4
    // add r0, #0x38
    // ldrb r0, [r0]
    // add r0, r5, r0
    Sprite_SetDrawFlag(*((u32*)((r0 << 2) + 0x3c)), 0);
}



void ov48_0225AE3C(void) {
    *((u32*)(r0 + 0xc)) = r1;
    // ldrsh r2, [r1, r3]
    // strh r2, [r0]
    // ldrsh r1, [r1, r2]
    // add r1, #0x10
    *((u16*)(r0 + 2)) = r1;
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 6)) = 0;
    *((u16*)(r0 + 8)) = 0;
    *((u16*)(r0 + 0xa)) = 0;
}



void ov48_0225AE58(void) {
}



void ov48_0225AE5C(void) {
}



void ov48_0225AE60(void) {
    // ldrsh r3, [r5, r1]
    // ldrsh r1, [r2, r1]
    ov48_0225AEDC(1, 8, *((u32*)(r0 + 0xc)));
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 4)) = (4 + 1);
    // ldrsh r0, [r5, r0]
    // ldrsh r0, [r1, r0]
    *((u16*)(r5 + 6)) = 0;
    *((u16*)(r5 + 6)) = (6 + 1);
    ov48_0225AFB4(r5, r4, (6 + 1));
}



void ov48_0225AEA8(void) {
}



void ov48_0225AEC4(void) {
    // ldrsh r2, [r0, r2]
    // str r2, [r1]
    // ldrsh r0, [r0, r2]
    // add r0, r3, r0
    *((u32*)(r1 + 4)) = (2 << 0x13);
}



void ov48_0225AEDC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldrh r0, [r5, #0xa]
    // ldr r2, [r5, #0xc]
    // cmp r0, #0
    // bne _0225AEF4
    // mov r0, #6
    // ldrsh r0, [r2, r0]
    // sub r0, #0x10
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // b _0225AEF8
    // mov r0, #6
    // ldrsh r7, [r2, r0]
    // ldrh r0, [r5, #8]
    // cmp r0, #0
    // bne _0225AF0A
    // mov r0, #2
    // ldrsh r0, [r2, r0]
    // add r0, #0x10
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // b _0225AF0E
    // mov r0, #2
    // ldrsh r4, [r2, r0]
    // mov r0, #0
    // ldrsh r6, [r2, r0]
    // mov r0, #4
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r2, r0]
    // sub r0, r0, r6
    // mul r0, r1
    // mov r1, #8
    // ldrsh r1, [r2, r1]
    // bl _s32_div_f
    // add r0, r6, r0
    // strh r0, [r5]
    // mov r0, #4
    // ldrsh r1, [r5, r0]
    // sub r0, r7, r4
    // ldr r2, [r5, #0xc]
    // mul r0, r1
    // mov r1, #8
    // ldrsh r1, [r2, r1]
    // bl _s32_div_f
    // add r0, r4, r0
    // strh r0, [r5, #2]
    // mov r0, #6
    // ldrsh r1, [r5, r0]
    // ldr r0, _0225AFAC ; =0x0000FFFF
    // ldr r4, [r5, #0xc]
    // mul r0, r1
    // mov r1, #0xc
    // ldrsh r1, [r4, r1]
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // asr r0, r0, #4
    // lsl r1, r0, #2
    // ldr r0, _0225AFB0 ; =FX_SinCosTable_
    // ldrsh r6, [r0, r1]
    // mov r0, #0xa
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // ble _0225AF76
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0225AF84
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    // add r2, r6, #0
    // bl _ll_mul
    // mov r3, #2
    // mov r4, #0
    // lsl r3, r3, #0xa
    // add r3, r0, r3
    // adc r1, r4
    // lsl r0, r1, #0x14
    // lsr r1, r3, #0xc
    // orr r1, r0
    // ldrsh r2, [r5, r4]
    // asr r0, r1, #0xc
    // add r0, r2, r0
    // strh r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225AFAC: .word 0x0000FFFF
    // _0225AFB0: .word FX_SinCosTable_
    // TODO: decompile
}



void ov48_0225AFB4(void) {
    ov48_0225A650(r1, 0, 0);
    // ldrsh r1, [r1, r0]
    // ldrsh r2, [r5, r0]
    // sub r0, #0x10
    // add r2, #0x20
    // asr r2, r2, #0x10
    ov48_0225A650(r4, *((u32*)(r5 + 0xc)), (*((u32*)(r5 + 0xc)) << 0x10));
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r5, r0]
    // sub r0, #0x10
    // sub r1, #0x20
    // asr r1, r1, #0x10
    ov48_0225A650(r4, (r2 << 0x10));
}



void ov48_0225B010(void) {
    // add r0, r5, r0
    // add r1, sp, #0
    ov48_0225AEC4((r1 << 4));
    // add r0, r5, r4
    // add r0, #0x38
    // ldrb r0, [r0]
    // add r1, sp, #0
    // add r0, r5, r0
    Sprite_SetMatrix(*((u32*)((r0 << 2) + 0x3c)));
}



void ov48_0225B038(void) {
}



void ov48_0225B050(void) {
}



void ov48_0225B068(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225B0A0 ; =0x00000321
    // mov r0, #0
    // mov r1, #0x1b
    // add r3, r4, #0
    // bl NewMsgDataFromNarc
    // str r0, [r5]
    // mov r0, #8
    // mov r1, #0x40
    // add r2, r4, #0
    // bl MessageFormat_New_Custom
    // str r0, [r5, #4]
    // mov r0, #0x80
    // add r1, r4, #0
    // bl String_New
    // str r0, [r5, #8]
    // mov r0, #0x80
    // add r1, r4, #0
    // bl String_New
    // str r0, [r5, #0xc]
    // pop {r3, r4, r5, pc}
    // nop
    // _0225B0A0: .word 0x00000321
    // TODO: decompile
}



void ov48_0225B0A4(void) {
}



void ov48_0225B0C4(void) {
}



void ov48_0225B0D4(void) {
}



void ov48_0225B0E0(void) {
}



void ov48_0225B108(void) {
}



void ov48_0225B13C(void) {
    ov45_0222D724(r0, ((0 << 0x18) >> 0x18));
}


