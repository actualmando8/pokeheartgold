/* Decompiled from asm/overlay_41.s */
#include "global.h"

void ov41_02245EA0(void) {
    Heap_Alloc(r1, 8);
    Heap_Alloc(r7, (r5 << 3));
    // str r0, [r4]
    memset(0, r6);
    *((u32*)(r4 + 4)) = r5;
}




void ov41_02245ECC(void) {
}




void ov41_02245EE0(void) {
    ov41_0224607C(*((u32*)r0));
    GF_AssertFail();
    // str r0, [r4]
    ov41_022460A8(r5);
    *((u32*)(r4 + 4)) = r0;
}




void ov41_02245F04(void) {
}




void ov41_02245F14(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // add r6, r1, #0
    // str r2, [sp]
    // add r7, r3, #0
    // bl ov41_02245F04
    // cmp r0, #0
    // bne _02245F2E
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r1, sp, #8
    // add r2, sp, #4
    // bl ov41_02245FA8
    // ldr r0, _02245F98 ; =gSystem + 0x40
    // ldr r1, [sp, #8]
    // ldrh r2, [r0, #0x20]
    // sub r1, r2, r1
    // str r1, [r6]
    // ldrh r1, [r0, #0x22]
    // ldr r0, [sp, #4]
    // sub r1, r1, r0
    // ldr r0, [sp]
    // sub r4, r1, #4
    // str r1, [r0]
    // add r0, r1, #4
    // cmp r4, r0
    // bge _02245F92
    // cmp r4, #0
    // blt _02245F86
    // ldr r0, [r6]
    // sub r5, r0, #4
    // add r0, r0, #4
    // cmp r5, r0
    // bge _02245F86
    // cmp r5, #0
    // blt _02245F7C
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, #0
    // bl ov41_022464BC
    // cmp r0, #0
    // bne _02245F7C
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r6]
    // add r5, r5, #1
    // add r0, r0, #4
    // cmp r5, r0
    // blt _02245F62
    // ldr r0, [sp]
    // add r4, r4, #1
    // ldr r0, [r0]
    // add r0, r0, #4
    // cmp r4, r0
    // blt _02245F54
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02245F98: .word gSystem + 0x40
    // TODO: decompile
}




void ov41_02245F9C(void) {
}




void ov41_02245FA8(void) {
    sub_02015FCC(*((u32*)(r0 + 4)));
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    *((u16*)(r1 + 4)) = (r0 >> 0x10);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    // ldrsh r0, [r1, r0]
    // str r0, [r5]
    // ldrsh r0, [r1, r0]
    // str r0, [r4]
}




void ov41_02245FD8(void) {
    sub_02015FE8(*((u32*)(r0 + 4)));
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    *((u16*)(r1 + 4)) = (r0 >> 0x10);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    // ldrsh r0, [r1, r0]
    // str r0, [r5]
    // ldrsh r0, [r1, r0]
    // str r0, [r4]
}




void ov41_02246008(void) {
}




void ov41_02246014(void) {
}




void ov41_02246020(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    ov41_02245FD8();
    // ldr r0, [sp, #4]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // ldr r0, [sp]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
}




void ov41_0224607C(void) {
    // add r0, r3, r0
    // add r2, #8
}




void ov41_022460A8(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r1, sp, #0
    *((u16*)(*((u32*)(r0 + 0xc)) + 0xc)) = *((u32*)(r0 + 0x10));
    *((u16*)(*((u32*)(r0 + 0xc)) + 0xe)) = *((u32*)(r0 + 0x14));
    *((u16*)(*((u32*)(r0 + 0xc)) + 0x10)) = 0;
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    *((u16*)(*((u32*)(r0 + 0xc)) + 0x1c)) = *((u32*)(r0 + 0x1c));
    // add r0, sp, #0
    sub_02015F8C(*((u32*)(r0 + 0x1c)), *((u32*)(r0 + 0xc)), 0x1f, 0);
}




void ov41_022460DC(void) {
    sub_02015FCC(*((u32*)(r0 + 4)));
    // add r1, sp, #0
    *((u16*)(r1 + 4)) = r0;
    *((u16*)(r1 + 6)) = (r0 >> 0x10);
    *((u16*)(r1 + 0xc)) = *((u16*)(r1 + 4));
    *((u16*)(r1 + 0xe)) = *((u16*)(r1 + 6));
    sub_02015FE8(*((u32*)(r5 + 4)));
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    *((u16*)(r1 + 8)) = (r0 >> 0x10);
    *((u16*)(r1 + 0xa)) = *((u16*)(r1 + 2));
    // ldrsh r2, [r1, r0]
    // strb r2, [r4]
    // ldrsh r0, [r1, r0]
    // add r0, r2, r0
    *((u8*)(r4 + 1)) = 0xa;
    // ldrsh r2, [r1, r0]
    *((u8*)(r4 + 2)) = r2;
    // ldrsh r0, [r1, r0]
    // add r0, r2, r0
    *((u8*)(r4 + 3)) = 8;
}




void ov41_02246130(void) {
    // push {r3, lr}
    // bl ov41_022466D0
    // bl ov41_022466F0
    // bl ov41_02246778
    // ldr r0, _0224614C ; =gSystem + 0x60
    // mov r1, #1
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // pop {r3, pc}
    // nop
    // _0224614C: .word gSystem + 0x60
    // TODO: decompile
}




void ov41_02246150(void) {
    // push {r3, lr}
    // ldr r0, _0224616C ; =gSystem + 0x60
    // mov r1, #0
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // bl ov41_022467D4
    // bl ov41_022467C8
    // bl GX_ResetBankForTex
    // pop {r3, pc}
    // nop
    // _0224616C: .word gSystem + 0x60
    // TODO: decompile
}




void ov41_02246170(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r3, _022461CC ; =ov41_0224BFB4
    // add r2, sp, #0
    // add r4, r0, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, #0x1a
    // mov r1, #0xe
    // bl NARC_New
    // mov r1, #6
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // add r0, r4, #0
    // add r1, sp, #0
    // bl ov41_022467E4
    // mov r2, #0xa
    // add r0, r4, #0
    // mov r1, #0xe
    // lsl r2, r2, #0xa
    // mov r3, #0x20
    // bl ov41_02246CC0
    // add r0, r4, #0
    // bl ov41_02246A50
    // add r0, r4, #0
    // mov r1, #0xd
    // bl ov41_02246C90
    // add r0, r4, #0
    // bl ov41_02246A94
    // mov r0, #0xe
    // bl BgConfig_Alloc
    // str r0, [r4, #0x40]
    // add r0, r4, #0
    // bl ov41_022468FC
    // add sp, #0x10
    // pop {r4, pc}
    // _022461CC: .word ov41_0224BFB4
    // TODO: decompile
}




void ov41_022461D0(void) {
    ov41_02246CB0();
    ov41_02246820(r4);
    ov41_02246A20(r4);
    Heap_Free(*((u32*)(r4 + 0x40)));
    ov41_02246D2C(r4);
    ov41_02246B34(r4);
    ov41_02246A7C(r4);
    // ldr r0, [r4, r0]
    NARC_Delete((6 << 6));
    Heap_Free(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 4)) = 0;
    Heap_Free(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0x10)) = 0;
}




void ov41_0224621C(void) {
    Thunk_G3X_Reset();
    NNS_G2dSetupSoftwareSpriteCamera();
    ov41_02246830(r4);
    PokepicManager_DrawAll(*((u32*)(r4 + 0x20)));
    RequestSwap3DBuffers(0, 0);
    ov41_02246B5C(r4);
}




void ov41_02246250(void) {
}




void ov41_0224626C(void) {
}




void ov41_02246280(void) {
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x4c
    CreateSpriteResourcesHeader(0, r1, r1);
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x4c
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x80]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x84]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    Sprite_Create(0xe);
}




void ov41_022462E4(void) {
    // ldr r4, [sp, #0x1c]
    // str r4, [sp]
    // ldr r4, [sp, #0x18]
    // str r4, [sp, #4]
    // str r4, [sp, #8]
    AddCharResObjFromOpenNarc(*((u32*)(r0 + 0x48)));
    sub_0200ADA4();
}




void ov41_02246304(void) {
    // ldr r4, [sp, #0x20]
    // str r4, [sp]
    // ldr r4, [sp, #0x18]
    // str r4, [sp, #4]
    // ldr r4, [sp, #0x1c]
    // str r4, [sp, #8]
    // str r4, [sp, #0xc]
    AddPlttResObjFromOpenNarc(*((u32*)(r0 + 0x4c)));
    sub_0200B00C();
}




void ov41_02246328(void) {
}




void ov41_02246344(void) {
}




void ov41_02246360(void) {
}




void ov41_02246374(void) {
}




void ov41_02246388(void) {
}




void ov41_0224639C(void) {
}




void ov41_022463B0(void) {
}




void ov41_022463D4(void) {
}




void ov41_022463DC(void) {
    GF2dGfxRawResMan_AllocObj(*((u32*)(r0 + 0x34)));
    // add r1, r1, r5
    NNS_G2dGetUnpackedCharacterData(r6, *((u32*)(r4 + 0x38)));
    // ldr r0, [r0, r5]
}




void ov41_022463FC(void) {
    // push {r3, r4}
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r2, [r0]
    // ldr r1, _02246428 ; =0xFFFF1FFF
    // add r3, r0, #0
    // and r1, r2
    // str r1, [r0]
    // add r3, #8
    // ldrh r4, [r3]
    // mov r2, #3
    // mov r1, #1
    // bic r4, r2
    // orr r1, r4
    // add r0, #0xa
    // strh r1, [r3]
    // ldrh r1, [r0]
    // bic r1, r2
    // strh r1, [r0]
    // pop {r3, r4}
    // bx lr
    // nop
    // _02246428: .word 0xFFFF1FFF
    // TODO: decompile
}




void ov41_0224642C(void) {
    // push {r3, r4}
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r2, [r0]
    // ldr r1, _02246488 ; =0xFFFF1FFF
    // add r3, r0, #0
    // and r2, r1
    // lsr r1, r0, #0xd
    // orr r1, r2
    // str r1, [r0]
    // add r3, #0x48
    // ldrh r4, [r3]
    // mov r2, #0x3f
    // mov r1, #0x1f
    // bic r4, r2
    // orr r1, r4
    // strh r1, [r3]
    // add r3, r0, #0
    // add r3, #0x4a
    // ldrh r4, [r3]
    // mov r1, #0x12
    // bic r4, r2
    // orr r1, r4
    // strh r1, [r3]
    // add r1, r0, #0
    // ldr r2, _0224648C ; =0x00000AF6
    // add r1, #0x40
    // strh r2, [r1]
    // add r1, r0, #0
    // ldr r2, _02246490 ; =0x0000128F
    // add r1, #0x44
    // strh r2, [r1]
    // add r2, r0, #0
    // add r2, #8
    // ldrh r3, [r2]
    // mov r1, #3
    // add r0, #0xa
    // bic r3, r1
    // strh r3, [r2]
    // ldrh r2, [r0]
    // bic r2, r1
    // mov r1, #1
    // orr r1, r2
    // strh r1, [r0]
    // pop {r3, r4}
    // bx lr
    // _02246488: .word 0xFFFF1FFF
    // _0224648C: .word 0x00000AF6
    // _02246490: .word 0x0000128F
    // TODO: decompile
}




void ov41_02246494(void) {
}




void ov41_022464AC(void) {
}




void ov41_022464BC(void) {
    // ldrh r4, [r0]
    // mul r4, r5
    // add r4, r1, r4
    // sub r2, r2, r5
    // ror r2, r1
    // add r1, r5, r2
    // asr r0, r4, #2
    // add r0, r4, r0
    // asr r0, r0, #3
    // ldr r3, [r3, r0]
    // lsl r0, r2
    // lsl r1, r2
    // and r0, r3
}




void ov41_02246518(void) {
    ov41_022467E4();
    ov41_02246CC0(r5, r4, (0xa << 0xa), 0x20);
    PokepicManager_SetNeedG3IdentityFlag(*((u32*)(r5 + 0x20)), 1);
    ov41_02246C90(r5, r4);
}




void ov41_02246544(void) {
    // push {r4, r5, lr}
    // sub sp, #0x1c
    // ldr r3, _02246590 ; =ov41_0224C018
    // add r5, r0, #0
    // str r1, [r5, #0x40]
    // add r4, r2, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r1, #2
    // str r0, [r2]
    // ldr r0, [r5, #0x40]
    // bl FreeBgTilemapBuffer
    // ldr r0, [r5, #0x40]
    // mov r1, #2
    // add r2, sp, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #2
    // mov r1, #0x20
    // mov r2, #0
    // add r3, r4, #0
    // bl BG_ClearCharDataRange
    // ldr r0, [r5, #0x40]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // add sp, #0x1c
    // pop {r4, r5, pc}
    // nop
    // _02246590: .word ov41_0224C018
    // TODO: decompile
}




void ov41_02246594(void) {
}




void ov41_022465C0(void) {
}




void ov41_022465CC(void) {
}




void ov41_022465D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r0, _0224665C ; =0x04000454
    // str r3, [sp]
    // mov r1, #0
    // str r1, [r0]
    // sub r0, #0x10
    // add r6, r2, #0
    // ldr r7, [sp, #0x18]
    // str r1, [r0]
    // bl NNS_G2dSetupSoftwareSpriteCamera
    // ldr r1, _02246660 ; =0x04000470
    // lsl r0, r4, #0xc
    // str r0, [r1]
    // lsl r0, r6, #0xc
    // str r0, [r1]
    // mov r0, #0
    // str r0, [r1]
    // ldr r0, [sp]
    // ldr r1, _02246664 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r0, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r0, [r1, r0]
    // ldrsh r1, [r1, r2]
    // bl G3_RotZ
    // ldr r2, [r7, #8]
    // ldr r1, [r7, #4]
    // ldr r3, [r7]
    // ldr r0, _02246668 ; =0x0400046C
    // str r3, [r0]
    // str r1, [r0]
    // neg r1, r4
    // str r2, [r0]
    // lsl r1, r1, #0xc
    // str r1, [r0, #4]
    // neg r1, r6
    // lsl r1, r1, #0xc
    // str r1, [r0, #4]
    // mov r1, #0
    // str r1, [r0, #4]
    // sub r0, #0x28
    // str r1, [r0]
    // ldr r0, [r5, #0x1c]
    // cmp r0, #0
    // beq _02246644
    // add r0, r5, #0
    // bl ov41_02246830
    // ldr r0, [r5, #0x2c]
    // cmp r0, #0
    // beq _02246650
    // ldr r0, [r5, #0x20]
    // bl PokepicManager_DrawAll
    // ldr r0, _0224666C ; =0x04000448
    // mov r1, #1
    // str r1, [r0]
    // str r1, [r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224665C: .word 0x04000454
    // _02246660: .word 0x04000470
    // _02246664: .word FX_SinCosTable_
    // _02246668: .word 0x0400046C
    // _0224666C: .word 0x04000448
    // TODO: decompile
}




void ov41_02246670(void) {
    NARC_New(0x1a, 0xe);
    // str r0, [r4, r1]
    ov41_02246A94(r4, (6 << 6));
    BgConfig_Alloc(0xe);
    *((u32*)(r4 + 0x40)) = r0;
    ov41_022468FC(r4);
}




void ov41_02246698(void) {
    ov41_02246A20();
    Heap_Free(*((u32*)(r4 + 0x40)));
    // ldr r0, [r4, r0]
    NARC_Delete((6 << 6));
    ov41_02246B34(r4);
}




void ov41_022466B8(void) {
}




void ov41_022466C8(void) {
}




void ov41_022466D0(void) {
}




void ov41_022466F0(void) {
    // push {r3, lr}
    // bl NNS_G3dInit
    // bl G3X_InitMtxStack
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _02246764 ; =0x04000008
    // mov r1, #3
    // ldrh r2, [r0]
    // bic r2, r1
    // mov r1, #1
    // orr r1, r2
    // strh r1, [r0]
    // add r0, #0x58
    // ldrh r1, [r0]
    // ldr r2, _02246768 ; =0xFFFFCFFD
    // and r1, r2
    // strh r1, [r0]
    // ldrh r3, [r0]
    // add r1, r2, #2
    // and r3, r1
    // mov r1, #0x10
    // orr r1, r3
    // strh r1, [r0]
    // ldrh r3, [r0]
    // ldr r1, _0224676C ; =0x0000CFFB
    // and r1, r3
    // strh r1, [r0]
    // add r1, r2, #2
    // ldrh r3, [r0]
    // lsr r2, r2, #0x11
    // and r3, r1
    // mov r1, #8
    // orr r1, r3
    // strh r1, [r0]
    // mov r0, #0
    // add r1, r0, #0
    // mov r3, #0x3f
    // str r0, [sp]
    // bl G3X_SetClearColor
    // ldr r2, _02246770 ; =0x04000540
    // mov r0, #2
    // ldr r1, _02246774 ; =0xBFFF0000
    // str r0, [r2]
    // str r1, [r2, #0x40]
    // mov r1, #1
    // bl GF_3DVramMan_InitFrameTexVramManager
    // mov r0, #1
    // lsl r0, r0, #0xe
    // mov r1, #1
    // bl GF_3DVramMan_InitFramePlttVramManager
    // pop {r3, pc}
    // _02246764: .word 0x04000008
    // _02246768: .word 0xFFFFCFFD
    // _0224676C: .word 0x0000CFFB
    // _02246770: .word 0x04000540
    // _02246774: .word 0xBFFF0000
    // TODO: decompile
}




void ov41_02246778(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, _022467C0 ; =_0224BF94
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _022467C4 ; =0xFFCFFFEF
    // and r1, r0
    // mov r0, #0x10
    // orr r0, r1
    // str r0, [r2]
    // bl NNS_G2dInitOamManagerModule
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r0, #0x1f
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x13
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x10
    // pop {r4, pc}
    // _022467C0: .word _0224BF94
    // _022467C4: .word 0xFFCFFFEF
    // TODO: decompile
}




void ov41_022467C8(void) {
}




void ov41_022467D4(void) {
}




void ov41_022467E4(void) {
    sub_02015DDC(r1);
    // str r0, [r5]
    Heap_Alloc(*((u32*)(r4 + 0xc)), (0x76 << 2));
    *((u32*)(r5 + 4)) = r0;
    *((u32*)(r5 + 8)) = 0x76;
    *((u32*)(r5 + 0xc)) = 0;
    Heap_Alloc(*((u32*)(r4 + 0xc)), 0x4c);
    *((u32*)(r5 + 0x10)) = r0;
    *((u32*)(r5 + 0x14)) = 0x13;
    *((u32*)(r5 + 0x18)) = 0;
    *((u32*)(r5 + 0x1c)) = 1;
}




void ov41_02246820(void) {
}




void ov41_02246830(void) {
}




void ov41_0224683C(void) {
    // str r0, [sp, #4]
    // str r2, [sp]
    // add r7, #0xc
    GF_AssertFail(*((u32*)(r0 + 8)), *((u32*)(r0 + 0xc)));
    sub_02015EA0(r6);
    // str r0, [r1, r2]
    // str r1, [r0, r2]
    // add r4, #8
    // str r0, [r7]
    // ldr r0, [sp, #4]
    // add r6, #8
    // ldr r0, [sp]
    // str r1, [sp, #4]
}




void ov41_0224689C(void) {
    // str r0, [sp, #4]
    // str r2, [sp]
    // add r7, #0x18
    GF_AssertFail(*((u32*)(r0 + 0x14)), *((u32*)(r0 + 0x18)));
    sub_02015F1C(r6);
    // str r0, [r1, r2]
    // str r1, [r0, r2]
    // add r4, #0xc
    // str r0, [r7]
    // ldr r0, [sp, #4]
    // add r6, #0xc
    // ldr r0, [sp]
    // str r1, [sp, #4]
}




void ov41_022468FC(void) {
    // push {r4, r5, lr}
    // sub sp, #0x8c
    // ldr r5, _02246A0C ; =ov41_0224BFE0
    // add r4, r0, #0
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x70
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // ldr r0, [r4, #0x40]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #1
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0xe
    // bl BG_ClearCharDataRange
    // ldr r0, [r4, #0x40]
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02246A10 ; =ov41_0224BFFC
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // ldr r0, [r4, #0x40]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #2
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0xe
    // bl BG_ClearCharDataRange
    // ldr r0, [r4, #0x40]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02246A14 ; =ov41_0224C034
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // ldr r0, [r4, #0x40]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #3
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0xe
    // bl BG_ClearCharDataRange
    // ldr r0, [r4, #0x40]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02246A18 ; =ov41_0224BFC4
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #4
    // str r0, [r3]
    // ldr r0, [r4, #0x40]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0xe
    // bl BG_ClearCharDataRange
    // ldr r0, [r4, #0x40]
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02246A1C ; =ov41_0224C050
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #5
    // str r0, [r3]
    // ldr r0, [r4, #0x40]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #5
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0xe
    // bl BG_ClearCharDataRange
    // ldr r0, [r4, #0x40]
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // add sp, #0x8c
    // pop {r4, r5, pc}
    // nop
    // _02246A0C: .word ov41_0224BFE0
    // _02246A10: .word ov41_0224BFFC
    // _02246A14: .word ov41_0224C034
    // _02246A18: .word ov41_0224BFC4
    // _02246A1C: .word ov41_0224C050
    // TODO: decompile
}




void ov41_02246A20(void) {
}




void ov41_02246A50(void) {
    GF2dGfxRawResMan_Create(0x77, 0xe);
    *((u32*)(r4 + 0x34)) = r0;
    Heap_Alloc(0xe, (0x77 << 2));
    *((u32*)(r4 + 0x38)) = r0;
    memset(0, (0x77 << 2));
    *((u32*)(r4 + 0x3c)) = 0x77;
}




void ov41_02246A7C(void) {
}




void ov41_02246A94(void) {
    // push {r4, r5, lr}
    // sub sp, #0x24
    // ldr r5, _02246B30 ; =ov41_0224BFA4
    // add r3, sp, #0x14
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r1, #0x10
    // add r0, r2, #0
    // add r2, r1, #0
    // bl ObjCharTransfer_InitEx
    // mov r0, #5
    // mov r1, #0xe
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // bl NNS_G2dInitOamManagerModule
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x7c
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #0x1f
    // str r3, [sp, #0xc]
    // mov r2, #0xe
    // str r2, [sp, #0x10]
    // add r2, r0, #0
    // bl OamManager_Create
    // add r1, r4, #0
    // mov r0, #0x30
    // add r1, #0x58
    // mov r2, #0xe
    // bl G2dRenderer_Init
    // str r0, [r4, #0x44]
    // add r0, r4, #0
    // mov r2, #2
    // add r0, #0x58
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // mov r0, #8
    // mov r1, #0
    // mov r2, #0xe
    // bl Create2DGfxResObjMan
    // str r0, [r4, #0x48]
    // mov r0, #5
    // mov r1, #1
    // mov r2, #0xe
    // bl Create2DGfxResObjMan
    // str r0, [r4, #0x4c]
    // mov r0, #0x30
    // mov r1, #2
    // mov r2, #0xe
    // bl Create2DGfxResObjMan
    // str r0, [r4, #0x50]
    // mov r0, #0x30
    // mov r1, #3
    // mov r2, #0xe
    // bl Create2DGfxResObjMan
    // str r0, [r4, #0x54]
    // add sp, #0x24
    // pop {r4, r5, pc}
    // nop
    // _02246B30: .word ov41_0224BFA4
    // TODO: decompile
}




void ov41_02246B34(void) {
    SpriteList_Delete(*((u32*)(r0 + 0x44)));
    Destroy2DGfxResObjMan(*((u32*)(r5 + 0x48)));
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    OamManager_Free();
}




void ov41_02246B5C(void) {
}




void ov41_02246B68(void) {
    // str r0, [sp]
    // ldr r0, [r6, r0]
    GfGfxLoader_LoadFromOpenNarc((6 << 6), (0 + 1), 0, 0xe);
    // str r0, [sp, #4]
    GF_AssertFail();
    // ldr r1, [sp, #4]
    ov41_022463DC(r6, r4);
    // add r1, r1, r5
    *((u32*)(*((u32*)r7) + 4)) = r0;
    // str r1, [r0, r5]
    // add r5, #8
    // str r0, [sp]
    // ldr r0, [r6, r0]
    GfGfxLoader_LoadFromOpenNarc((6 << 6), 0, 0, 0xe);
    GF2dGfxRawResMan_AllocObj(*((u32*)(r7 + 0x14)), r0, 0);
    NNS_G2dGetUnpackedPaletteData(r4, (*((u32*)(r7 + 8)) + 4));
    // str r1, [r0]
    *((u32*)(*((u32*)(r7 + 8)) + 8)) = 3;
}




void ov41_02246BEC(void) {
    // str r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [r5, r0]
    // add r1, #0xce
    GfGfxLoader_LoadFromOpenNarc((6 << 6), 0, 0, 0xe);
    // add r2, #0x64
    ov41_022463DC(r5, r0, r6);
    // add r1, r1, r7
    *((u32*)(*((u32*)r4) + 4)) = r0;
    // str r1, [r0, r7]
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #8]
    GfGfxLoader_LoadFromOpenNarc((6 << 6), *((u32*)r5), 0, 0xe);
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    GF2dGfxRawResMan_AllocObj(*((u32*)(r4 + 0x14)));
    // ldr r1, [sp, #4]
    // mul r7, r0
    // ldr r0, [sp, #0xc]
    // add r1, r1, r7
    NNS_G2dGetUnpackedPaletteData(0xc, (*((u32*)(r4 + 8)) + 4));
    // add r0, r0, r7
    GF_AssertFail(*((u32*)(*((u32*)(r4 + 8)) + 4)));
    // str r1, [r0, r7]
    // add r1, r0, r7
    *((u32*)(*((u32*)r5) + 8)) = 1;
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void ov41_02246C90(void) {
}




void ov41_02246CB0(void) {
}




void ov41_02246CC0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, r1, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // bl PokepicManager_Create
    // str r0, [r5, #0x20]
    // ldr r3, _02246D1C ; =NNS_GfdDefaultFuncAllocTexVram
    // mov r1, #0
    // ldr r3, [r3]
    // add r0, r4, #0
    // add r2, r1, #0
    // blx r3
    // str r0, [r5, #0x24]
    // ldr r3, _02246D20 ; =NNS_GfdDefaultFuncAllocPlttVram
    // add r0, r6, #0
    // ldr r3, [r3]
    // mov r1, #0
    // mov r2, #1
    // blx r3
    // str r0, [r5, #0x28]
    // ldr r3, [r5, #0x24]
    // ldr r2, _02246D24 ; =0x7FFF0000
    // lsl r1, r3, #0x10
    // and r2, r3
    // lsr r2, r2, #0x10
    // ldr r0, [r5, #0x20]
    // lsr r1, r1, #0xd
    // lsl r2, r2, #4
    // bl PokepicManager_SetCharBaseAddrAndSize
    // ldr r3, [r5, #0x28]
    // ldr r2, _02246D28 ; =0xFFFF0000
    // lsl r1, r3, #0x10
    // and r2, r3
    // lsr r2, r2, #0x10
    // ldr r0, [r5, #0x20]
    // lsr r1, r1, #0xd
    // lsl r2, r2, #3
    // bl PokepicManager_SetPlttBaseAddrAndSize
    // mov r0, #1
    // str r0, [r5, #0x2c]
    // pop {r4, r5, r6, pc}
    // nop
    // _02246D1C: .word NNS_GfdDefaultFuncAllocTexVram
    // _02246D20: .word NNS_GfdDefaultFuncAllocPlttVram
    // _02246D24: .word 0x7FFF0000
    // _02246D28: .word 0xFFFF0000
    // TODO: decompile
}




void ov41_02246D2C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x20]
    // bl PokepicManager_Delete
    // ldr r1, _02246D4C ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r0, [r4, #0x24]
    // ldr r1, [r1]
    // blx r1
    // ldr r1, _02246D50 ; =NNS_GfdDefaultFuncFreePlttVram
    // ldr r0, [r4, #0x28]
    // ldr r1, [r1]
    // blx r1
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // _02246D4C: .word NNS_GfdDefaultFuncFreeTexVram
    // _02246D50: .word NNS_GfdDefaultFuncFreePlttVram
    // TODO: decompile
}




void ov41_02246D54(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    Heap_Alloc(r3);
    // ldr r2, [sp]
    // str r0, [r5]
    memset(0);
    GF2dGfxRawResMan_Create(r4, r7);
    *((u32*)(r5 + 0x10)) = r0;
    *((u32*)(r5 + 4)) = r4;
    // mul r4, r0
    Heap_Alloc(r7, r6);
    *((u32*)(r5 + 8)) = r0;
    memset(0, r4);
    GF2dGfxRawResMan_Create(r6, r7);
    *((u32*)(r5 + 0x14)) = r0;
    *((u32*)(r5 + 0xc)) = r6;
}




void ov41_02246DA8(void) {
    GF2dGfxRawResObj_Destroy(*((u32*)(r0 + 0x10)));
    *((u32*)(r4 + 0x10)) = 0;
    GF2dGfxRawResObj_Destroy(*((u32*)(r4 + 0x14)));
    *((u32*)(r4 + 0x14)) = 0;
    Heap_Free(*((u32*)r4));
    // str r0, [r4]
    Heap_Free(*((u32*)(r4 + 8)));
    *((u32*)(r4 + 8)) = 0;
}




void ov41_02246DE0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // mov r2, #2
    // add r5, r0, #0
    // mov r0, #3
    // mov r1, #0xd
    // lsl r2, r2, #0x10
    // bl Heap_Create
    // mov r2, #1
    // mov r0, #3
    // mov r1, #0xe
    // lsl r2, r2, #0x12
    // bl Heap_Create
    // mov r1, #0x6f
    // add r0, r5, #0
    // lsl r1, r1, #4
    // mov r2, #0xd
    // bl OverlayManager_CreateAndGetData
    // mov r2, #0x6f
    // mov r1, #0
    // lsl r2, r2, #4
    // add r4, r0, #0
    // bl memset
    // ldr r0, _02246EF0 ; =ov41_02247478
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // ldr r1, _02246EF4 ; =0x000006DC
    // str r0, [r4, r1]
    // ldr r0, [r5, #0x20]
    // cmp r0, #0
    // beq _02246E3E
    // bl MenuInputStateMgr_GetState
    // ldr r1, _02246EF8 ; =0x000006EC
    // b _02246E42
    // mov r0, #0
    // add r1, #0x10
    // str r0, [r4, r1]
    // bl sub_020210BC
    // mov r0, #4
    // bl sub_02021148
    // mov r1, #0x61
    // lsl r1, r1, #2
    // ldr r0, [r5, #8]
    // add r1, r4, r1
    // bl ov41_02248E84
    // add r0, r4, #0
    // bl ov41_02247240
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // add r0, r4, r1
    // sub r1, #0x8d
    // mov r2, #0xd
    // bl ov41_022499B4
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // mov r1, #0xd
    // bl ov41_02245EA0
    // mov r1, #0xd9
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r1, [r5]
    // add r0, r4, #0
    // mov r2, #0xa
    // mov r3, #0
    // bl ov41_02247288
    // add r0, r4, #0
    // bl ov41_02247334
    // add r0, r4, #0
    // mov r1, #0
    // bl ov41_02247480
    // add r0, r4, #0
    // bl ov41_022474D4
    // ldr r1, [r5, #0xc]
    // add r0, r4, #0
    // bl ov41_0224765C
    // ldr r0, _02246EFC ; =0x00000568
    // mov r2, #0xfd
    // add r1, r4, r0
    // str r1, [sp]
    // mov r1, #1
    // sub r0, #0xd0
    // lsl r2, r2, #2
    // str r1, [sp, #4]
    // add r1, r4, r2
    // sub r2, #0x8c
    // add r0, r4, r0
    // add r2, r4, r2
    // add r3, r4, #0
    // bl ov41_02248F18
    // mov r0, #0xd
    // bl YesNoPrompt_Create
    // ldr r1, _02246F00 ; =0x000006B8
    // str r0, [r4, r1]
    // mov r0, #0xd
    // mov r1, #1
    // bl AllocWindows
    // ldr r2, _02246F04 ; =0x000006BC
    // mov r1, #0
    // str r0, [r4, r2]
    // sub r2, #0xc
    // str r1, [r4, r2]
    // mov r0, #0x35
    // add r2, r1, #0
    // bl Sound_SetSceneAndPlayBGM
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _02246EF0: .word ov41_02247478
    // _02246EF4: .word 0x000006DC
    // _02246EF8: .word 0x000006EC
    // _02246EFC: .word 0x00000568
    // _02246F00: .word 0x000006B8
    // _02246F04: .word 0x000006BC
    // TODO: decompile
}




void ov41_02246F08(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r0, #0
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r0, r7, #0
    // mov r6, #0
    // bl OverlayManager_GetArgs
    // ldr r1, [r5]
    // cmp r1, #0xc
    // bhi _02246FD6
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02246F30: ; jump table
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r1, #0xd
    // str r1, [sp, #8]
    // mov r1, #5
    // add r2, r1, #0
    // add r3, r6, #0
    // bl BeginNormalPaletteFade
    // mov r0, #2
    // str r0, [r5]
    // b _0224712A
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _02246FD6
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224712A
    // ldr r0, [r0, #0x1c]
    // cmp r0, #1
    // bne _02246F9E
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldr r0, _02247138 ; =0x00000568
    // mov r1, #0x1b
    // add r0, r4, r0
    // mov r2, #0xd7
    // mov r3, #0x2f
    // bl ov41_0224AC40
    // mov r1, #0x6e
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224712A
    // mov r0, #6
    // str r0, [r5]
    // b _0224712A
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _02246FD6
    // ldr r0, _02247138 ; =0x00000568
    // add r0, r4, r0
    // bl ov41_0224AC80
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224712A
    // ldr r0, _0224713C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // and r1, r0
    // ldr r0, _02247140 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x24]
    // orr r0, r1
    // bne _02246FD8
    // b _0224712A
    // ldr r0, _02247138 ; =0x00000568
    // mov r1, #0x1b
    // add r0, r4, r0
    // mov r2, #0xd7
    // mov r3, #0x30
    // bl ov41_0224AC08
    // add r0, r6, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224712A
    // mov r1, #0x6b
    // lsl r1, r1, #4
    // ldr r0, [r4, r1]
    // cmp r0, #3
    // bne _0224700C
    // add r1, r1, #4
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov41_022476B8
    // mov r0, #7
    // str r0, [r5]
    // ldr r0, _02247144 ; =0x00000498
    // add r0, r4, r0
    // bl ov41_02248E44
    // add r0, r4, #0
    // bl ov41_02247D44
    // ldr r0, _02247138 ; =0x00000568
    // add r0, r4, r0
    // bl ov41_0224ABF0
    // add r0, r4, #0
    // bl ov41_02247578
    // b _0224712A
    // ldr r0, _02247148 ; =0x000006B4
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0224712A
    // add r1, r6, #0
    // str r1, [r4, r0]
    // mov r1, #8
    // str r1, [r5]
    // mov r1, #4
    // sub r0, r0, #4
    // str r1, [r4, r0]
    // ldr r1, _0224714C ; =0x0000047C
    // mov r2, #0xe
    // add r0, r4, r1
    // sub r1, #0x88
    // add r1, r4, r1
    // bl ov41_0224B4E8
    // b _0224712A
    // mov r1, #0x6b
    // lsl r1, r1, #4
    // ldr r0, [r4, r1]
    // cmp r0, #9
    // bne _0224706A
    // add r1, r1, #4
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov41_02247828
    // mov r0, #0xa
    // str r0, [r5]
    // b _0224712A
    // cmp r0, #8
    // bne _0224707E
    // mov r0, #9
    // str r0, [r5]
    // mov r0, #5
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl ov41_02247D64
    // b _0224712A
    // add r0, r4, #0
    // bl ov41_02247B7C
    // mov r1, #0x6b
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, _0224714C ; =0x0000047C
    // add r0, r4, r0
    // bl ov41_0224B50C
    // b _0224712A
    // mov r0, #0x6b
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // cmp r1, #6
    // bne _022470AA
    // mov r1, #1
    // add r0, #0x10
    // str r1, [r4, r0]
    // mov r0, #0xb
    // str r0, [r5]
    // b _0224712A
    // cmp r1, #7
    // bne _022470BA
    // add r1, r6, #0
    // add r0, #0x10
    // str r1, [r4, r0]
    // mov r0, #0xb
    // str r0, [r5]
    // b _0224712A
    // add r0, r4, #0
    // bl ov41_02247DF8
    // mov r1, #0x6b
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, _0224714C ; =0x0000047C
    // add r0, r4, r0
    // bl ov41_0224B50C
    // b _0224712A
    // ldr r0, _02247148 ; =0x000006B4
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0224712A
    // add r2, r6, #0
    // str r2, [r4, r0]
    // mov r1, #6
    // str r1, [r5]
    // sub r0, r0, #4
    // str r2, [r4, r0]
    // ldr r0, _0224714C ; =0x0000047C
    // add r0, r4, r0
    // bl ov41_0224B518
    // b _0224712A
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r1, #0xd
    // str r1, [sp, #8]
    // add r1, r6, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224712A
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0224712A
    // add r0, r6, #0
    // str r0, [r5]
    // mov r0, #0x6b
    // mov r1, #0xa
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, _0224714C ; =0x0000047C
    // mov r6, #1
    // add r0, r4, r0
    // bl ov41_0224B518
    // add r0, r4, #0
    // bl ov41_0224726C
    // add r0, r6, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02247138: .word 0x00000568
    // _0224713C: .word gSystem
    // _02247140: .word gSystem + 0x40
    // _02247144: .word 0x00000498
    // _02247148: .word 0x000006B4
    // _0224714C: .word 0x0000047C
    // TODO: decompile
}




void ov41_02247150(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r0, r6, #0
    // bl OverlayManager_GetArgs
    // add r5, r0, #0
    // mov r0, #0x1b
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _02247182
    // ldr r0, [r5, #0x10]
    // mov r1, #8
    // bl GameStats_AddScore
    // mov r1, #0xfd
    // lsl r1, r1, #2
    // ldr r0, [r5, #4]
    // ldr r2, [r5, #0x14]
    // add r1, r4, r1
    // bl ov41_022479A8
    // ldr r0, [r5, #0x18]
    // cmp r0, #0
    // beq _0224719C
    // mov r1, #0x1b
    // lsl r1, r1, #6
    // ldr r1, [r4, r1]
    // cmp r1, #1
    // bne _02247198
    // mov r1, #1
    // str r1, [r0]
    // b _0224719C
    // mov r1, #0
    // str r1, [r0]
    // ldr r0, [r5, #0x20]
    // cmp r0, #0
    // beq _022471AA
    // ldr r1, _02247230 ; =0x000006EC
    // ldr r1, [r4, r1]
    // bl MenuInputStateMgr_SetState
    // ldr r0, _02247234 ; =0x000006B8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // ldr r0, _02247238 ; =0x000006BC
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl WindowArray_Delete
    // add r0, r4, #0
    // bl ov41_022476A8
    // ldr r0, _0224723C ; =0x00000498
    // add r0, r4, r0
    // bl ov41_02248F6C
    // add r0, r4, #0
    // bl ov41_02247568
    // add r0, r4, #0
    // bl ov41_022474C4
    // add r0, r4, #0
    // bl ov41_02247310
    // add r0, r4, #0
    // bl ov41_022473F0
    // mov r0, #0xd9
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov41_02245ECC
    // mov r0, #0xd9
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // sub r0, #8
    // add r0, r4, r0
    // bl ov41_022499DC
    // add r0, r4, #0
    // bl ov41_02247274
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl sub_02021238
    // cmp r0, #1
    // beq _0224721A
    // bl GF_AssertFail
    // add r0, r6, #0
    // bl OverlayManager_FreeData
    // mov r0, #0xd
    // bl Heap_Destroy
    // mov r0, #0xe
    // bl Heap_Destroy
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // _02247230: .word 0x000006EC
    // _02247234: .word 0x000006B8
    // _02247238: .word 0x000006BC
    // _0224723C: .word 0x00000498
    // TODO: decompile
}




void ov41_02247240(void) {
}




void ov41_0224726C(void) {
}




void ov41_02247274(void) {
}




void ov41_02247288(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x30]
    // str r0, [sp, #0x24]
    // ldr r0, [r5, r1]
    // str r0, [sp, #0x28]
    // sub r0, #8
    // add r0, r5, r0
    // add r1, #0x90
    // str r0, [sp, #0x2c]
    // add r0, r5, r1
    // add r1, sp, #0x10
    ov41_02247F3C((0xd9 << 2), (0xd9 << 2));
    // add r2, sp, #0
    // add r0, r5, r0
    ov41_02247FE0((0xfd << 2), r4, 0xe);
    // add r0, r5, r0
    ov41_02247FFC((0xfd << 2), r4, 0xe);
    // add r1, sp, #0
    ov41_022495C8(r5);
    // add r0, r5, r0
    ov41_02248158((0xfd << 2));
    // add r0, r5, r0
    ov41_0224825C((0xfd << 2), 0, 0xe);
}




void ov41_02247310(void) {
    // add r0, r4, r0
    ov41_022482A8((0xfd << 2));
    // add r0, r4, r0
    ov41_022480E0((0xfd << 2));
    // add r0, r4, r0
    ov41_02247F90((0xfd << 2));
}




void ov41_02247334(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    // str r0, [sp, #0x28]
    // ldr r1, [r5, r0]
    // str r1, [sp, #0x14]
    // sub r1, #8
    // add r1, r5, r1
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // add r0, r5, r0
    // add r1, sp, #0
    ov41_02248488(((0xd9 << 2) + 4), 1);
    // add r0, r5, r0
    ov41_022487F8((0xda << 2), 0, 0);
    // add r0, r5, r0
    ov41_02248ED4((0x61 << 2), 0);
    // add r0, r5, r0
    ov41_022485DC((0xda << 2), 0, r6);
    // add r0, r5, r6
    ov41_02248EE8(0);
    // add r0, r5, r7
    ov41_022485DC(1, r0);
    // add r0, r5, r0
    ov41_02248724((0xda << 2));
}




void ov41_022473F0(void) {
    // add r0, r4, r0
    ov41_02248940((0xda << 2));
    // add r0, r4, r0
    ov41_022486F8((0xda << 2));
    // add r0, r4, r0
    ov41_022484C0((0xda << 2));
}




void ov41_02247414(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, _02247474 ; =0x04000008
    // mov r2, #3
    // ldrh r3, [r0]
    // mov r1, #1
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0]
    // ldrh r1, [r0, #2]
    // bic r1, r2
    // strh r1, [r0, #2]
    // ldrh r3, [r0, #4]
    // mov r1, #2
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0, #4]
    // ldrh r3, [r0, #6]
    // mov r1, #3
    // bic r3, r2
    // add r2, r3, #0
    // orr r2, r1
    // strh r2, [r0, #6]
    // add r3, r1, #0
    // ldr r0, [r4, #0x40]
    // add r2, r1, #0
    // sub r3, #0x13
    // bl BgSetPosTextAndCommit
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0
    // bl ov41_0224888C
    // mov r1, #0
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r2, #2
    // add r3, r1, #0
    // str r1, [sp]
    // bl ov41_022488D8
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _02247474: .word 0x04000008
    // TODO: decompile
}




void ov41_02247478(void) {
}




void ov41_02247480(void) {
    // push {r3, lr}
    // sub sp, #0x30
    // ldr r2, [r0, #0x40]
    // str r2, [sp]
    // mov r2, #0x1a
    // str r2, [sp, #4]
    // lsl r2, r1, #1
    // add r1, r2, #0
    // add r1, #0x79
    // str r1, [sp, #8]
    // mov r1, #0x85
    // str r1, [sp, #0xc]
    // mov r1, #1
    // add r2, #0x7a
    // str r2, [sp, #0x10]
    // mov r2, #0
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // mov r1, #2
    // str r1, [sp, #0x24]
    // mov r1, #0xe
    // str r1, [sp, #0x2c]
    // ldr r1, _022474C0 ; =0x000004B4
    // str r2, [sp, #0x14]
    // add r0, r0, r1
    // add r1, sp, #0
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x28]
    // bl ov41_02249C7C
    // add sp, #0x30
    // pop {r3, pc}
    // _022474C0: .word 0x000004B4
    // TODO: decompile
}




void ov41_022474C4(void) {
    // ldr r1, _022474CC ; =0x000004B4
    // ldr r3, _022474D0 ; =ov41_02249CC4
    // add r0, r0, r1
    // bx r3
    // _022474CC: .word 0x000004B4
    // _022474D0: .word ov41_02249CC4
    // TODO: decompile
}




void ov41_022474D4(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #0x4e
    // ldr r2, _02247550 ; =0x000006EC
    // lsl r0, r0, #4
    // add r0, r4, r0
    // add r1, r4, #0
    // add r2, r4, r2
    // bl ov41_0224A27C
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r2, _02247554 ; =ov41_022475B4
    // add r0, r4, r0
    // add r3, r4, #0
    // str r1, [sp]
    // bl ov41_0224A5D4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // ldr r2, _02247558 ; =ov41_022475D4
    // add r0, r4, r0
    // mov r1, #1
    // add r3, r4, #0
    // bl ov41_0224A5D4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // ldr r2, _0224755C ; =ov41_022475F4
    // add r0, r4, r0
    // mov r1, #2
    // add r3, r4, #0
    // bl ov41_0224A5D4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // ldr r2, _02247560 ; =ov41_02247628
    // add r0, r4, r0
    // mov r1, #3
    // add r3, r4, #0
    // bl ov41_0224A5D4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // ldr r2, _02247564 ; =ov41_02247598
    // add r0, r4, r0
    // mov r1, #4
    // add r3, r4, #0
    // bl ov41_0224A5D4
    // add sp, #4
    // pop {r3, r4, pc}
    // _02247550: .word 0x000006EC
    // _02247554: .word ov41_022475B4
    // _02247558: .word ov41_022475D4
    // _0224755C: .word ov41_022475F4
    // _02247560: .word ov41_02247628
    // _02247564: .word ov41_02247598
    // TODO: decompile
}




void ov41_02247568(void) {
    // add r1, r0, #0
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // ldr r3, _02247574 ; =ov41_0224A3E4
    // add r0, r1, r0
    // bx r3
    // _02247574: .word ov41_0224A3E4
    // TODO: decompile
}




void ov41_02247578(void) {
    // mov r1, #0x4e
    // lsl r1, r1, #4
    // ldr r3, _02247584 ; =ov41_0224A54C
    // add r0, r0, r1
    // bx r3
    // nop
    // _02247584: .word ov41_0224A54C
    // TODO: decompile
}




void ov41_02247588(void) {
    // mov r1, #0x4e
    // lsl r1, r1, #4
    // ldr r3, _02247594 ; =ov41_0224A580
    // add r0, r0, r1
    // bx r3
    // nop
    // _02247594: .word ov41_0224A580
    // TODO: decompile
}




void ov41_02247598(void) {
}




void ov41_022475B4(void) {
    // add r0, r4, r0
    ov41_0224894C((0xda << 2));
    // add r0, r4, r0
    ov41_02248790((0xda << 2), r0, 0);
}




void ov41_022475D4(void) {
    // add r0, r4, r0
    ov41_0224894C((0xda << 2));
    // add r0, r4, r0
    ov41_02248790((0xda << 2), r0, 1);
}




void ov41_022475F4(void) {
    // ldr r0, [r4, r0]
    // add r0, r4, r0
    ov41_0224895C((0xda << 2), 0);
    // add r0, r4, r0
    ov41_022487F8((0xda << 2), 0, r0);
    // str r1, [r4, r0]
}




void ov41_02247628(void) {
    // ldr r0, [r4, r0]
    // add r0, r4, r0
    ov41_0224895C((0xda << 2), 1);
    // add r0, r4, r0
    ov41_022487F8((0xda << 2), 1, r0);
    // str r1, [r4, r0]
}




void ov41_0224765C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x28
    // add r4, r0, #0
    // add r2, sp, #0
    // mov r0, #0
    // add r3, r1, #0
    // add r5, r2, #0
    // add r1, r0, #0
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldr r0, [r4, #0x40]
    // add r1, r2, #0
    // str r0, [sp]
    // ldr r0, [r4, #0x44]
    // mov r2, #0xf
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x48
    // str r0, [sp, #8]
    // mov r0, #0xa
    // str r0, [sp, #0x10]
    // mov r0, #6
    // str r3, [sp, #0xc]
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // str r0, [sp, #0x24]
    // ldr r0, _022476A4 ; =0x00000568
    // add r0, r4, r0
    // bl ov41_0224AA08
    // add sp, #0x28
    // pop {r3, r4, r5, pc}
    // nop
    // _022476A4: .word 0x00000568
    // TODO: decompile
}




void ov41_022476A8(void) {
    // ldr r1, _022476B0 ; =0x00000568
    // ldr r3, _022476B4 ; =ov41_0224AB40
    // add r0, r0, r1
    // bx r3
    // _022476B0: .word 0x00000568
    // _022476B4: .word ov41_0224AB40
    // TODO: decompile
}




void ov41_022476B8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r0, _022476DC ; =ov41_022476E0
    // mov r1, #0x10
    // mov r2, #0xa
    // mov r3, #0xd
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // str r5, [r0]
    // str r4, [r0, #4]
    // mov r1, #0
    // str r1, [r0, #8]
    // str r1, [r0, #0xc]
    // pop {r3, r4, r5, pc}
    // nop
    // _022476DC: .word ov41_022476E0
    // TODO: decompile
}




void ov41_022476E0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022476FA: ; jump table
    // add r0, r1, r0
    ov41_02248750((0xda << 2), 3, 0);
    GF_AssertFail();
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r0, r1, r0
    ov41_02248998((0xda << 2), *((u32*)r4));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // str r0, [sp]
    // sub r1, #0x18
    StartBrightnessTransition(8, 8, 0, 0xa);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    IsBrightnessTransitionActive(1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r0, r1, r0
    ov41_0224A5A4((0x4e << 4), 0, 8);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // mvn r1, r1
    ov41_02247A48(r4, 7, 5, 8);
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ov41_02247480(*((u32*)r4), 1);
    ScheduleSetBgPosText(*((u32*)(*((u32*)r4) + 0x40)), 1, 3, 0);
    ov41_02247AB4(*((u32*)r4));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // str r0, [sp]
    // sub r2, #0x10
    StartBrightnessTransition(8, 0, 0, 0xa);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    IsBrightnessTransitionActive(1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // str r2, [r1]
    DestroySysTaskAndEnvironment((*((u32*)(r4 + 0xc)) + 1), *((u32*)(r4 + 4)), 1);
}




void ov41_02247828(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r0, _0224784C ; =ov41_02247850
    // mov r1, #0x10
    // mov r2, #0xa
    // mov r3, #0xd
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // str r5, [r0]
    // str r4, [r0, #4]
    // mov r1, #0
    // str r1, [r0, #8]
    // str r1, [r0, #0xc]
    // pop {r3, r4, r5, pc}
    // nop
    // _0224784C: .word ov41_02247850
    // TODO: decompile
}




void ov41_02247850(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224786A: ; jump table
    // str r0, [sp]
    // sub r1, #0x18
    StartBrightnessTransition(8, 8, 0, 0xa);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    IsBrightnessTransitionActive(1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ov41_02247B5C(*((u32*)r4));
    ov41_02247414(*((u32*)r4));
    ov41_02247588(*((u32*)r4));
    ov41_02247480(*((u32*)r4), 0);
    // sub r3, #0x2b
    ScheduleSetBgPosText(*((u32*)(*((u32*)r4) + 0x40)), 1, 3, 3);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // sub r2, #0xd
    ov41_02247A48(r4, 8, 8, 8);
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r0, r1, r0
    // sub r2, #8
    ov41_0224A5A4((0x4e << 4), 0, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // str r0, [sp]
    // sub r2, #0x10
    StartBrightnessTransition(8, 0, 0, 0xa);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    IsBrightnessTransitionActive(1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r0, r1, r0
    ov41_02248750((0xda << 2), 0, 0);
    GF_AssertFail();
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r0, r1, r0
    ov41_02248998((0xda << 2), *((u32*)r4));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // str r2, [r1]
    DestroySysTaskAndEnvironment((*((u32*)(r4 + 0xc)) + 1), *((u32*)(r4 + 4)), 1);
}




void ov41_022479A8(void) {
    // str r1, [sp]
    sub_0202BC60();
    // ldr r1, [sp]
    // ldr r2, [sp]
    // add r1, #0x84
    // add r2, #0x78
    sub_0202BC88(r6, *((u32*)r1));
    PlayerProfile_GetPlayerName_NewString(r4, 0xd);
    PlayerProfile_GetTrainerGender(r4);
    sub_0202BDC8(r6, r5, r0);
    String_Delete(r5);
    // ldr r0, [sp]
    // add r7, #0x14
    sub_0202BCAC(r6, *((u32*)*((u32*)(r0 + 0x1c))), 0);
    // ldr r0, [sp]
    sub_0202BCAC(r6, *((u32*)*((u32*)(r0 + 0xc))), (r5 + 1));
    // ldr r1, [sp]
    sub_0202BD60(r6, ((*((u32*)(r1 + 0x74)) << 0x18) >> 0x18));
    sub_0202BC38(r6);
}




void ov41_02247A48(void) {
    // add r0, r3, r0
    ov41_022480F8((0xfd << 2), *((u32*)r0));
    ScheduleSetBgPosText(*((u32*)(*((u32*)r5) + 0x40)), 2, 2, r4);
    ScheduleSetBgPosText(*((u32*)(*((u32*)r5) + 0x40)), 1, 2, r4);
    ScheduleSetBgPosText(*((u32*)(*((u32*)r5) + 0x40)), 2, 5, r6);
    ScheduleSetBgPosText(*((u32*)(*((u32*)r5) + 0x40)), 1, 5, r6);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
}




void ov41_02247AB4(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // ldr r0, [r4, #0x40]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // mov r2, #0
    // ldr r0, [r4, #0x40]
    // mov r1, #3
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // mov r1, #3
    // ldr r0, [r4, #0x40]
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // add r0, sp, #0
    // mov r1, #0
    // mov r2, #0x14
    // bl MI_CpuFill8
    // ldr r0, [r4, #0x40]
    // add r3, sp, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #5
    // str r0, [sp, #0xc]
    // mov r0, #0x19
    // strb r0, [r3, #0x10]
    // mov r0, #4
    // strb r0, [r3, #0x11]
    // ldrb r0, [r3, #0x12]
    // mov r1, #0xf
    // ldr r2, _02247B54 ; =0x000006EC
    // bic r0, r1
    // ldr r1, [r4, r2]
    // sub r2, #0x34
    // lsl r1, r1, #0x18
    // lsr r5, r1, #0x18
    // mov r1, #0xf
    // and r1, r5
    // orr r0, r1
    // strb r0, [r3, #0x12]
    // ldr r0, [r4, r2]
    // add r1, sp, #0
    // bl YesNoPrompt_InitFromTemplate
    // add r0, r4, #0
    // mov r1, #1
    // bl ov41_02247D1C
    // ldr r0, _02247B58 ; =0x04000008
    // mov r2, #3
    // ldrh r3, [r0]
    // mov r1, #2
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0]
    // ldrh r3, [r0, #2]
    // mov r1, #1
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0, #2]
    // ldrh r3, [r0, #4]
    // mov r1, #3
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0, #4]
    // ldrh r1, [r0, #6]
    // bic r1, r2
    // strh r1, [r0, #6]
    // add sp, #0x14
    // pop {r4, r5, pc}
    // nop
    // _02247B54: .word 0x000006EC
    // _02247B58: .word 0x04000008
    // TODO: decompile
}




void ov41_02247B5C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02247B78 ; =0x000006B8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Reset
    // add r0, r4, #0
    // bl ov41_02247D3C
    // ldr r0, [r4, #0x40]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // pop {r4, pc}
    // _02247B78: .word 0x000006B8
    // TODO: decompile
}




void ov41_02247B7C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02247BB0 ; =0x000006B8
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_HandleInput
    // add r4, r0, #0
    // beq _02247B96
    // cmp r4, #1
    // beq _02247B9A
    // cmp r4, #2
    // beq _02247B9E
    // b _02247BA0
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // mov r4, #8
    // b _02247BA0
    // mov r4, #9
    // ldr r0, _02247BB0 ; =0x000006B8
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_IsInTouchMode
    // ldr r1, _02247BB4 ; =0x000006EC
    // str r0, [r5, r1]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _02247BB0: .word 0x000006B8
    // _02247BB4: .word 0x000006EC
    // TODO: decompile
}




void ov41_02247BB8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, _02247C70 ; =0x000006DC
    // str r1, [sp, #0x14]
    // ldr r0, [r5, r0]
    // add r7, r2, #0
    // add r4, r3, #0
    // bl Options_GetFrame
    // add r6, r0, #0
    // mov r0, #0
    // mov r1, #0xe0
    // mov r2, #0xe
    // bl LoadFontPal1
    // str r4, [sp]
    // add r0, sp, #0x20
    // ldrb r1, [r0, #0x10]
    // mov r2, #3
    // add r3, r7, #0
    // str r1, [sp, #4]
    // ldrb r0, [r0, #0x14]
    // ldr r1, _02247C74 ; =0x000006BC
    // str r0, [sp, #8]
    // mov r0, #7
    // str r0, [sp, #0xc]
    // mov r0, #0x5a
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x40]
    // ldr r1, [r5, r1]
    // bl AddWindowParameterized
    // ldr r0, _02247C74 ; =0x000006BC
    // mov r1, #0xf
    // ldr r0, [r5, r0]
    // bl FillWindowPixelBuffer
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xe
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x40]
    // mov r1, #3
    // mov r2, #0x3c
    // mov r3, #8
    // bl LoadUserFrameGfx2
    // ldr r0, _02247C74 ; =0x000006BC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // mov r2, #0x3c
    // mov r3, #8
    // bl DrawFrameAndWindow2
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xd7
    // mov r3, #0xd
    // bl NewMsgDataFromNarc
    // ldr r1, [sp, #0x14]
    // add r6, r0, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02247C78 ; =0x0001020F
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02247C74 ; =0x000006BC
    // str r3, [sp, #0xc]
    // ldr r0, [r5, r0]
    // mov r1, #1
    // add r2, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl DestroyMsgData
    // ldr r0, _02247C74 ; =0x000006BC
    // ldr r0, [r5, r0]
    // bl CopyWindowToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02247C70: .word 0x000006DC
    // _02247C74: .word 0x000006BC
    // _02247C78: .word 0x0001020F
    // TODO: decompile
}




void ov41_02247C7C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, _02247CF4 ; =0x000006BC
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xd7
    // mov r3, #0xd
    // bl NewMsgDataFromNarc
    // add r1, r4, #0
    // add r7, r0, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r0, #1
    // lsl r0, r0, #8
    // mov r1, #0xd
    // bl String_New
    // add r4, r0, #0
    // ldr r0, _02247CF8 ; =0x000006E8
    // add r1, r4, #0
    // ldr r0, [r5, r0]
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02247CFC ; =0x0001020F
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02247CF4 ; =0x000006BC
    // str r3, [sp, #0xc]
    // ldr r0, [r5, r0]
    // mov r1, #1
    // add r2, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl DestroyMsgData
    // ldr r0, _02247CF4 ; =0x000006BC
    // ldr r0, [r5, r0]
    // bl CopyWindowToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02247CF4: .word 0x000006BC
    // _02247CF8: .word 0x000006E8
    // _02247CFC: .word 0x0001020F
    // TODO: decompile
}




void ov41_02247D00(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02247D18 ; =0x000006BC
    // ldr r0, [r4, r0]
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _02247D18 ; =0x000006BC
    // ldr r0, [r4, r0]
    // bl RemoveWindow
    // pop {r4, pc}
    // nop
    // _02247D18: .word 0x000006BC
    // TODO: decompile
}




void ov41_02247D1C(void) {
}




void ov41_02247D34(void) {
}




void ov41_02247D3C(void) {
}




void ov41_02247D44(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xfd
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov41_022482B4
    // add r1, r0, #0
    // ldr r0, _02247D60 ; =0x00000568
    // add r0, r4, r0
    // bl ov41_0224AC98
    // pop {r4, pc}
    // nop
    // _02247D60: .word 0x00000568
    // TODO: decompile
}




void ov41_02247D64(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // add r0, sp, #0
    // mov r1, #0
    // mov r2, #0x14
    // bl MI_CpuFill8
    // ldr r0, [r4, #0x40]
    // add r3, sp, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #5
    // str r0, [sp, #0xc]
    // mov r0, #0x19
    // strb r0, [r3, #0x10]
    // mov r0, #4
    // strb r0, [r3, #0x11]
    // ldrb r0, [r3, #0x12]
    // mov r1, #0xf
    // ldr r2, _02247DEC ; =0x000006EC
    // bic r0, r1
    // ldr r1, [r4, r2]
    // sub r2, #0x34
    // lsl r1, r1, #0x18
    // lsr r5, r1, #0x18
    // mov r1, #0xf
    // and r1, r5
    // orr r0, r1
    // strb r0, [r3, #0x12]
    // ldr r0, [r4, r2]
    // bl YesNoPrompt_Reset
    // ldr r0, _02247DF0 ; =0x000006B8
    // add r1, sp, #0
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_InitFromTemplate
    // add r0, r4, #0
    // mov r1, #2
    // bl ov41_02247D34
    // ldr r0, _02247DF4 ; =0x04000008
    // mov r2, #3
    // ldrh r3, [r0]
    // mov r1, #2
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0]
    // ldrh r3, [r0, #2]
    // mov r1, #1
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0, #2]
    // ldrh r3, [r0, #4]
    // mov r1, #3
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0, #4]
    // ldrh r1, [r0, #6]
    // bic r1, r2
    // strh r1, [r0, #6]
    // add sp, #0x14
    // pop {r4, r5, pc}
    // nop
    // _02247DEC: .word 0x000006EC
    // _02247DF0: .word 0x000006B8
    // _02247DF4: .word 0x04000008
    // TODO: decompile
}




void ov41_02247DF8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02247E2C ; =0x000006B8
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_HandleInput
    // add r4, r0, #0
    // beq _02247E12
    // cmp r4, #1
    // beq _02247E16
    // cmp r4, #2
    // beq _02247E1A
    // b _02247E1C
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // mov r4, #6
    // b _02247E1C
    // mov r4, #7
    // ldr r0, _02247E2C ; =0x000006B8
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_IsInTouchMode
    // ldr r1, _02247E30 ; =0x000006EC
    // str r0, [r5, r1]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _02247E2C: .word 0x000006B8
    // _02247E30: .word 0x000006EC
    // TODO: decompile
}




void ov41_02247E34(void) {
    // str r1, [sp]
    // sub r0, r0, r7
    // str r3, [sp, #4]
    // ldr r4, [sp, #0x2c]
    // ldr r5, [sp, #0x30]
    _u32_div_f(r3, 3);
    // add r1, r7, r0
    // add r0, r7, r0
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r1, [sp, #0xc]
    // sub r0, r0, r6
    _u32_div_f((r0 << 1), 3);
    // add r2, r6, r0
    // ldr r1, [sp, #0x28]
    // add r0, r6, r0
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02247E7A: ; jump table
    // str r7, [r4]
    // str r6, [r5]
    // str r7, [r4]
    // str r2, [r5]
    // str r7, [r4]
    // str r0, [r5]
    // ldr r0, [sp]
    // str r7, [r4]
    // str r0, [r5]
    // ldr r0, [sp, #0xc]
    // str r0, [r4]
    // str r6, [r5]
    // ldr r0, [sp, #0xc]
    // str r0, [r4]
    // str r2, [r5]
    // ldr r1, [sp, #0xc]
    // str r1, [r4]
    // str r0, [r5]
    // ldr r0, [sp, #0xc]
    // str r0, [r4]
    // ldr r0, [sp]
    // str r0, [r5]
    // ldr r0, [sp, #8]
    // str r0, [r4]
    // str r6, [r5]
    // ldr r0, [sp, #8]
    // str r0, [r4]
    // str r2, [r5]
    // ldr r1, [sp, #8]
    // str r1, [r4]
    // str r0, [r5]
    // ldr r0, [sp, #8]
    // str r0, [r4]
    // ldr r0, [sp]
    // str r0, [r5]
    // ldr r0, [sp, #4]
    // str r0, [r4]
    // str r6, [r5]
    // ldr r0, [sp, #4]
    // str r0, [r4]
    // str r2, [r5]
    // ldr r1, [sp, #4]
    // str r1, [r4]
    // str r0, [r5]
    // ldr r0, [sp, #4]
    // str r0, [r4]
    // ldr r0, [sp]
    // str r0, [r5]
}




void ov41_02247F3C(void) {
    *((u32*)(r0 + 0x2c)) = *((u32*)r1);
    *((u32*)(r0 + 0x30)) = *((u32*)(r1 + 4));
    *((u32*)(r0 + 0x34)) = *((u32*)(r1 + 8));
    *((u32*)(r0 + 0x38)) = *((u32*)(r1 + 0xc));
    *((u32*)(r0 + 0x3c)) = *((u32*)(r1 + 0x10));
    *((u32*)(r0 + 0x40)) = *((u32*)(r1 + 0x14));
    *((u32*)(r0 + 0x44)) = *((u32*)(r1 + 0x18));
    *((u32*)(r0 + 0x74)) = 0;
    // str r0, [r4]
    *((u32*)(r0 + 0xc)) = (r0 + 4);
    *((u32*)(r0 + 0x10)) = (r0 + 4);
    // add r0, #0x14
    *((u32*)(r0 + 0x1c)) = r0;
    *((u32*)(r0 + 0x20)) = r0;
    *((u32*)(r0 + 0x24)) = 0;
    *((u32*)(r0 + 0x28)) = *((u32*)(r1 + 0x20));
    // add r1, #0x78
    ov41_022499F0(*((u32*)r0), r0, 3);
    // add r4, #0x14
    ov41_02249A50(r4);
}




void ov41_02247F90(void) {
}




void ov41_02247FAC(void) {
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // add r0, #0x78
    ov41_022495F0(r0, *((u32*)(r0 + 0x3c)), r1, r2);
    // ldr r1, [sp, #0x1c]
    // add r0, #0x78
    ov41_02249700(r4);
    // add r4, #0x78
    // ldr r2, [sp, #0x18]
    ov41_0224971C(r4, r7);
}




void ov41_02247FE0(void) {
}




void ov41_02247FFC(void) {
}




void ov41_02248020(void) {
    // ldr r3, _0224802C ; =ov41_02249A50
    // add r2, r0, #0
    // add r0, r1, #0
    // ldr r1, [r2, #0x20]
    // bx r3
    // nop
    // _0224802C: .word ov41_02249A50
    // TODO: decompile
}




void ov41_02248030(void) {
}




void ov41_02248038(void) {
}




void ov41_02248044(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r5, r0]
    // str r0, [sp, #8]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0xc]
    // ldrb r0, [r0, r1]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0
    ov41_02245EE0(*((u32*)(r0 + 0x38)));
    // ldr r1, [sp, #0x30]
    ov41_02246014();
    ov41_022499F0(*((u32*)r4), r5, 0);
    ov41_02249A50((r4 + 4));
    *((u32*)(r4 + 0x24)) = (*((u32*)(r4 + 0x24)) + 1);
}




void ov41_022480A4(void) {
    ov41_02248324(1, r2);
    *((u32*)(r4 + 0x24)) = (*((u32*)(r4 + 0x24)) + 1);
}




void ov41_022480C8(void) {
    ov41_02249A60(r1);
    *((u32*)(r4 + 0x24)) = (*((u32*)(r4 + 0x24)) - 1);
    // bpl _022480DE
    GF_AssertFail((*((u32*)(r4 + 0x24)) - 1));
}




void ov41_022480E0(void) {
}




void ov41_022480F8(void) {
}




void ov41_02248114(void) {
}




void ov41_02248120(void) {
    // neg r4, r2
    // neg r7, r1
    ov41_02249BE8((r0 + 4), r7, r4);
    // ldr r2, [sp, #0x18]
    ov41_02249BE8((r5 + 4), r6);
    // add r0, #0x14
    ov41_02249BE8(r5, r7, r4);
    // add r5, #0x14
    // ldr r2, [sp, #0x18]
    ov41_02249BE8(r5, r6);
}




void ov41_02248158(void) {
}




void ov41_02248164(void) {
    // add r6, #0x14
    ov41_02246014(*((u32*)*((u32*)(r0 + 0x1c))), r1);
    ov41_02249700(r5);
    // sub r5, #8
    ov41_02246014(*((u32*)*((u32*)(r7 + 0xc))), (r5 - 1));
    ov41_02249700(r5);
}




void ov41_022481BC(void) {
}




void ov41_022481D8(void) {
}




void ov41_022481F4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    // str r0, [sp, #4]
    ov41_02249AA8(*((u32*)(r0 + 0x1c)), r1, r2, r3);
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp, #8]
    ov41_02249AA8(*((u32*)(r5 + 0xc)), r4, r6, r7);
    // ldr r0, [sp, #8]
}




void ov41_0224825C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x86
    // str r0, [sp, #8]
    // add r0, #0x87
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // add r1, #0x88
    // str r0, [sp, #0x28]
    // str r1, [sp, #0x10]
    // add r0, #0x48
    // add r1, sp, #0
    // str r2, [sp, #0x2c]
    ov41_02249C7C(r0, (r1 << 2));
    *((u32*)(r5 + 0x74)) = r4;
}




void ov41_022482A8(void) {
}




void ov41_022482B4(void) {
    // ldr r0, [r0, #0x24]
    // bx lr
    // TODO: decompile
}




void ov41_022482B8(void) {
    // add r7, #0x14
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r1, sp, #0xc
    // add r2, sp, #8
    ov41_02248400(*((u32*)(r0 + 0x1c)));
    // neg r1, r4
    // ldr r0, [sp, #0xc]
    // neg r2, r0
    // neg r1, r5
    // ldr r0, [sp, #8]
    // neg r2, r0
    // ldr r0, [sp]
    // str r4, [r0]
    // ldr r0, [sp, #4]
    // str r5, [r0]
}




void ov41_02248324(void) {
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x14]
    // str r1, [sp, #0x10]
    // add r1, sp, #0x54
    // add r2, sp, #0x50
    ov41_02249B44(r1);
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x4c
    // add r2, sp, #0x48
    ov41_02249B94();
    // add r0, sp, #0x30
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x44
    // add r2, sp, #0x34
    // add r3, sp, #0x40
    ov41_02249BAC();
    // ldr r0, [r4, r0]
    // str r0, [sp, #0x20]
    // ldr r6, [sp, #0x54]
    // ldr r0, [sp, #0x4c]
    // ldr r7, [sp, #0x44]
    // add r1, r6, r0
    // ldr r0, [sp, #0x34]
    // sub r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x50]
    // ldr r1, [sp, #0x48]
    // str r0, [sp, #0x24]
    // add r1, r0, r1
    // ldr r0, [sp, #0x30]
    // sub r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x2c]
    // add r0, #0x78
    // str r0, [sp, #0x2c]
    // str r4, [sp]
    // add r0, sp, #0x3c
    // str r0, [sp, #4]
    // add r0, sp, #0x38
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x1c]
    // add r0, r1, r0
    // ldr r1, [sp, #0x18]
    // add r2, r6, r7
    ov41_02247E34((0x76 << 2));
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x38]
    // ldr r3, [sp, #0x20]
    ov41_02249820();
    // orr r5, r0
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r1, #0x14
    // str r1, [sp, #0xc]
    ov41_02249A50();
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    ov41_02249A50(*((u32*)(r1 + 0x20)));
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    ov41_02249A50((r1 + 4));
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    ov41_02249A50(*((u32*)(r1 + 0x10)));
}




void ov41_02248400(void) {
    // add r1, sp, #0x20
    // add r2, sp, #0x1c
    ov41_02249B94();
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    ov41_02249B44(r6);
    // add r0, sp, #4
    // str r0, [sp]
    // add r1, sp, #0x10
    // add r2, sp, #8
    // add r3, sp, #0xc
    ov41_02249BAC(r6);
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r3, [sp, #0xc]
    // add r2, r0, r1
    // sub r2, r1, r2
    // ldr r1, [sp, #0x20]
    // add r1, r0, r1
    // ldr r0, [sp, #8]
    // sub r1, r1, r0
    // ldr r0, [sp, #0x14]
    // sub r1, #0xf6
    // add r6, r0, r3
    // sub r3, r3, r6
    // ldr r6, [sp, #0x1c]
    // add r6, r0, r6
    // ldr r0, [sp, #4]
    // sub r6, r6, r0
    // sub r6, #0x8f
    // str r2, [r5]
    // neg r0, r1
    // str r0, [r5]
    // str r0, [r5]
    // str r3, [r4]
    // neg r0, r6
    // str r0, [r4]
    // str r0, [r4]
}




void ov41_02248488(void) {
}




void ov41_022484C0(void) {
    ov41_022486F8();
    // add r5, #0xc
    ov41_02248A6C(r6);
    // add r5, #0xc
    memset(r6, 0, 0x8c);
}




void ov41_022484E8(void) {
    ov41_02248EF4(r2);
    _s32_div_f(9);
    ov41_02248EF4(r2);
    _s32_div_f(9);
}




void ov41_02248584(void) {
    // str r0, [r5]
    // str r0, [r4]
    MTRandom(0x12);
    // ldr r2, [sp, #0x10]
    // sub r1, r1, r2
    _u32_div_f(0x6c);
    // add r0, r0, r1
    // str r0, [r5]
    MTRandom(*((u32*)r5));
    // ldr r2, [sp, #0x14]
    // sub r1, r1, r2
    _u32_div_f(0x7d);
    // add r0, r0, r1
    // str r0, [r4]
    // ldr r0, [sp, #0x18]
    ov41_02248EF4(*((u32*)r4));
    ov41_02248B48(r5, r4);
}




void ov41_022485DC(void) {
    // str r4, [sp, #0x40]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // str r4, [sp, #0xc]
    // ldrb r0, [r0, r4]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0xc]
    // add r0, #0x64
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x44]
    // str r0, [sp, #0xc]
    // add r0, #0x64
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x44]
    GF_AssertFail(r2, 0);
    // ldr r0, [sp, #0xc]
    // ldr r0, [r1, r0]
    // str r0, [sp, #0x30]
    // ldr r1, [r2, r1]
    // str r1, [sp, #0x34]
    GF_AssertFail((r0 << 2), (r7 << 2), *((u32*)(r5 + 0x4c)));
    // ldr r0, [sp, #0x34]
    GF_AssertFail();
    ov41_022484E8(r6, r4, *((u32*)(r5 + 4)));
    // add r0, sp, #0x28
    ov41_02245EE0();
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    ov41_022499F0(*((u32*)(r5 + 8)), r6);
    // mul r1, r6
    // add r1, r5, r1
    // add r1, r2, r1
    // str r0, [sp, #0x14]
    ov41_02249A50(*((u32*)((r7 << 4) + 0xc)), *((u32*)(0xc + 0xc)));
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    ov41_02249B94();
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // add r2, sp, #0x24
    // str r0, [sp, #4]
    // add r3, sp, #0x20
    // str r0, [sp, #8]
    ov41_02248584(r6, r4);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    ov41_02249AF4();
    // ldr r1, [sp, #0x10]
    ov41_02248B20(r5, r6, r7);
}




void ov41_022486C4(void) {
    // mul r1, r4
    // add r1, r5, r1
    // add r1, r2, r1
    ov41_02249A50(r3, (r2 << 4), *((u32*)(0xc + 0xc)));
    ov41_02248B20(r5, *((u32*)r7), r4, r6);
}




void ov41_022486F0(void) {
}




void ov41_022486F8(void) {
    // add r0, r0, r4
    ov41_02249A70(*((u32*)(r0 + 0xc)));
    // add r4, #0x10
    // add r5, #0xc
}




void ov41_02248724(void) {
    // mvn r5, r5
    ov41_02248A94();
    ov41_02246014(*((u32*)*((u32*)(r0 + 8))), r5);
}




void ov41_02248750(void) {
    // mul r2, r1
    // str r4, [sp]
    // add r2, r5, r2
    ov41_02248B84(*((u32*)r0), *((u32*)(0xc + 0x14)), r1);
    // mul r0, r6
    // str r6, [r5]
    // add r0, r5, r0
    *((u32*)(0xc + 0x14)) = r4;
    ov41_02248724(r5);
}




void ov41_02248790(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // str r2, [sp, #8]
    ov41_0224895C();
    // ldr r0, [sp, #4]
    // mul r1, r0
    // ldr r0, [sp]
    // add r6, r0, r1
    // ldr r0, [sp, #8]
    // add r0, r4, r7
    _s32_div_f(*((u32*)(r6 + 0x10)), *((u32*)(r6 + 0x10)));
    // sub r5, r7, r4
    // bpl _022487CC
    // add r5, r5, r0
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    ov41_02248ABC(*((u32*)(r6 + 0x10)), r1);
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    ov41_02248750(*((u32*)(r0 + 8)), r5);
}




void ov41_022487F8(void) {
    ov41_02248A18(0);
    // mul r0, r4
    // str r4, [r5]
    // add r0, r5, r0
    *((u32*)(0xc + 0x14)) = r6;
    ov41_02248A18(r5, 1);
    ov41_02248724(r5);
}




void ov41_02248820(void) {
}




void ov41_0224883C(void) {
}




void ov41_02248858(void) {
    // str r3, [sp]
    ov41_02248A94();
    // ldr r3, [sp]
    ov41_02249AA8(*((u32*)(r0 + 8)), r6, r7);
}




void ov41_0224888C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x81
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r1, #0x82
    // str r0, [sp, #0x2c]
    // str r1, [sp, #0x10]
    // add r0, #0x5c
    // add r1, sp, #0
    ov41_02249C7C(r0, (r1 << 1));
    *((u32*)(r5 + 0x40)) = r4;
}




void ov41_022488D8(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x81
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, #0x82
    // str r0, [sp, #0x1c]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r1, [sp, #0x2c]
    // str r0, [sp, #0x28]
    // str r7, [sp, #0x30]
    // str r1, [sp, #0x34]
    // tst r0, r2
    // tst r0, r2
    // ldr r0, [sp, #0x50]
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, #0x5c
    // add r1, sp, #8
    ov41_02249DB4(r0, 0xe, 0x70, 0);
    *((u32*)(r5 + 0x40)) = r4;
}




void ov41_02248940(void) {
}




void ov41_0224894C(void) {
}




void ov41_0224895C(void) {
    GF_AssertFail();
    // mul r0, r4
    // add r3, r5, r0
    // add r3, #0xc
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #8]
}




void ov41_02248984(void) {
    ov41_02248ABC();
    // ldr r2, [sp, #8]
    ov41_02249BE8(r4);
}




void ov41_02248998(void) {
    // ldr r0, [r0, #0x3c]
    // cmp r0, #0
    // bne _022489A2
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov41_022489A8(void) {
}




void ov41_022489E4(void) {
    ov41_02246008(*((u32*)*((u32*)(r0 + 8))), r1);
}




void ov41_02248A08(void) {
}




void ov41_02248A18(void) {
}




void ov41_02248A28(void) {
    Heap_Alloc(0xe, (r1 << 4));
    // str r0, [r5]
    *((u32*)(r5 + 4)) = r4;
    *((u32*)(r5 + 8)) = 0;
    // add r0, r0, r4
    *((u32*)(*((u32*)r5) + 8)) = *((u32*)r5);
    // add r0, r0, r4
    *((u32*)(*((u32*)r5) + 0xc)) = *((u32*)r5);
    // add r0, r0, r4
    ov41_022489E4(*((u32*)r5), 0);
    // add r4, #0x10
}




void ov41_02248A6C(void) {
}




void ov41_02248A94(void) {
    // mul r1, r2
    // add r3, r0, r1
    // add r3, #0xc
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // add r0, r1, r0
}




void ov41_02248ABC(void) {
    // mul r3, r1
    // add r4, r0, r3
    // add r4, #0xc
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp]
    // add r0, r1, r0
}




void ov41_02248AE0(void) {
}




void ov41_02248AFC(void) {
    ov41_02248ABC();
}




void ov41_02248B20(void) {
    // mul r4, r2
    // add r0, r0, r4
    ov41_02246008(r1, 0);
    ov41_02246008(r1, 1);
}




void ov41_02248B48(void) {
    _s32_div_f(9);
    _s32_div_f(r1, 3);
    _s32_div_f(r7, 3);
    // add r0, r2, r0
    // add r0, #0x10
    // str r0, [r4]
    // mul r0, r1
    // add r0, r2, r0
    // add r0, #8
    // str r0, [r5]
}




void ov41_02248B84(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // str r3, [sp]
    // ldr r0, _02248BF8 ; =ov41_02248BFC
    // mov r1, #0x30
    // mov r2, #0
    // mov r3, #0xd
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // add r4, r0, #0
    // str r5, [r4]
    // str r6, [r4, #4]
    // ldr r0, [sp]
    // str r7, [r4, #8]
    // str r0, [r4, #0xc]
    // ldr r0, [sp, #0x18]
    // add r1, r6, #0
    // str r0, [r4, #0x10]
    // mov r0, #0
    // str r0, [r4, #0x1c]
    // add r0, r5, #0
    // add r2, r7, #0
    // bl ov41_02248AE0
    // str r0, [r4, #0x20]
    // ldr r1, [sp]
    // ldr r2, [sp, #0x18]
    // add r0, r5, #0
    // bl ov41_02248AE0
    // str r0, [r4, #0x24]
    // ldr r1, [r4, #0x20]
    // add r2, r1, r0
    // mov r1, #0xc
    // mov r0, #0xd
    // mul r1, r2
    // str r2, [r4, #0x2c]
    // bl Heap_Alloc
    // str r0, [r4, #0x28]
    // cmp r0, #0
    // bne _02248BE4
    // bl GF_AssertFail
    // ldr r3, [r4, #0x2c]
    // mov r2, #0xc
    // ldr r0, [r4, #0x28]
    // mov r1, #0
    // mul r2, r3
    // bl memset
    // mov r0, #1
    // str r0, [r5, #0x3c]
    // pop {r3, r4, r5, r6, r7, pc}
    // _02248BF8: .word ov41_02248BFC
    // TODO: decompile
}




void ov41_02248BFC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02248C18: ; jump table
    // mvn r0, r0
    // str r0, [sp]
    ov41_02248984(*((u32*)r1), *((u32*)(r1 + 0xc)), *((u32*)(r1 + 0x10)), 0);
    ov41_02248A08(*((u32*)r4), *((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)), 1);
    *((u32*)(r4 + 0x14)) = 0;
    // add r1, #0x14
    // str r1, [sp]
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    ov41_022488D8(*((u32*)r4), 0x1f, 2, 5);
    ov41_02248E10(*((u32*)(r4 + 0x20)), 1);
    *((u32*)(r4 + 0x18)) = r0;
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x1c)) + 1);
    // add r5, #0x20
    // bmi _02248CA2
    // str r0, [r5]
    ov41_02248AFC(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 8)), *((u32*)(r4 + 0x20)));
    ov41_02248D64(*((u32*)(r4 + 0x28)), *((u32*)(r4 + 0x2c)));
    ov41_02248E10(*((u32*)(r4 + 0x24)), 2);
    *((u32*)(r4 + 0x18)) = r0;
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x1c)) + 1);
    // add r5, #0x24
    // bmi _02248CEE
    // str r0, [r5]
    ov41_02248AFC(*((u32*)r4), *((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)), *((u32*)(r4 + 0x24)));
    ov41_02248D64(*((u32*)(r4 + 0x28)), *((u32*)(r4 + 0x2c)));
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x1c)) + 1);
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x18)) = (*((u32*)(r4 + 0x18)) + 1);
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x1c)) + 1);
    ov41_02248A08(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 8)), 0);
    // mvn r0, r0
    // str r0, [sp]
    ov41_02248984(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 8)), 0);
    *((u32*)(*((u32*)r4) + 0x3c)) = 0;
    Heap_Free(*((u32*)(r4 + 0x28)), 0);
    DestroySysTaskAndEnvironment(r5);
    GF_AssertFail();
    ov41_02248DA4(*((u32*)(r4 + 0x28)), *((u32*)(r4 + 0x2c)));
}




void ov41_02248D64(void) {
}




void ov41_02248D7C(void) {
    // mul r1, r3
    // add r0, r0, r1
    // add r4, #0xc
}




void ov41_02248DA4(void) {
    ov41_02248DC8(r0);
    // add r5, #0xc
}




void ov41_02248DC8(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    ov41_02249B44(*((u32*)r0));
    // ldr r1, [sp]
    // add r2, r1, r0
    // str r2, [sp]
    // ldr r1, [sp, #4]
    ov41_02249AF4(*((u32*)r4));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = 0;
    *((u8*)(r4 + 2)) = 0;
    *((u8*)(r4 + 3)) = 0;
    *((u8*)(r4 + 4)) = 0;
    *((u8*)(r4 + 5)) = 0;
    *((u8*)(r4 + 6)) = 0;
    *((u8*)(r4 + 7)) = 0;
    *((u8*)(r4 + 8)) = 0;
    *((u8*)(r4 + 9)) = 0;
    *((u8*)(r4 + 0xa)) = 0;
    *((u8*)(r4 + 0xb)) = 0;
}




void ov41_02248E10(void) {
    _s32_div_f();
    // sub r0, r4, r1
    // add r0, r5, r0
    _s32_div_f(r4);
}




void ov41_02248E28(void) {
    // add r3, r0, #0
    // mov r2, #0x1c
    // mov r1, #0
    // strb r1, [r3]
    // add r3, r3, #1
    // sub r2, r2, #1
    // bne _02248E2E
    // ldr r1, _02248E40 ; =ov41_02248E80
    // str r1, [r0, #4]
    // str r1, [r0, #8]
    // str r1, [r0, #0xc]
    // bx lr
    // _02248E40: .word ov41_02248E80
    // TODO: decompile
}




void ov41_02248E44(void) {
    // push {r4, lr}
    // ldr r1, _02248E7C ; =gSystem + 0x40
    // add r4, r0, #0
    // ldrh r2, [r1, #0x24]
    // cmp r2, #0
    // beq _02248E56
    // ldr r1, [r4, #4]
    // blx r1
    // b _02248E6C
    // ldrh r1, [r1, #0x26]
    // cmp r1, #0
    // beq _02248E62
    // ldr r1, [r4, #0xc]
    // blx r1
    // b _02248E6C
    // ldrb r1, [r4, #0x18]
    // cmp r1, #0
    // beq _02248E6C
    // ldr r1, [r4, #8]
    // blx r1
    // ldr r0, _02248E7C ; =gSystem + 0x40
    // ldrh r1, [r0, #0x20]
    // strh r1, [r4, #0x14]
    // ldrh r1, [r0, #0x22]
    // strh r1, [r4, #0x16]
    // ldrh r0, [r0, #0x26]
    // strb r0, [r4, #0x18]
    // pop {r4, pc}
    // _02248E7C: .word gSystem + 0x40
    // TODO: decompile
}




void ov41_02248E80(void) {
    // bx lr
    // TODO: decompile
}




void ov41_02248E84(void) {
    sub_0202BA70(r0, 0);
    // stmia r5!, {r0}
    // str r1, [r2, r0]
    sub_0202BAB0(r6, 0, (r7 + 4), (0 + 1));
    // add r0, r7, r0
    // str r4, [r0, r5]
}




void ov41_02248ED4(void) {
}




void ov41_02248EE8(void) {
    // add r1, r0, r1
    // ldr r0, [r1, r0]
}




void ov41_02248EF4(void) {
    // ldr r3, [r0, r2]
}




void ov41_02248F18(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov41_02248E28
    // mov r0, #0xd
    // mov r1, #0x34
    // bl Heap_Alloc
    // str r0, [r5]
    // mov r1, #0
    // mov r2, #0x34
    // bl memset
    // ldr r1, [r5]
    // ldr r0, [sp, #0x18]
    // str r4, [r1, #4]
    // str r6, [r1, #8]
    // str r7, [r1]
    // str r0, [r1, #0xc]
    // ldr r0, [sp, #0x1c]
    // str r0, [r1, #0x2c]
    // ldr r0, _02248F5C ; =ov41_02248F80
    // str r0, [r5, #4]
    // ldr r0, _02248F60 ; =ov41_022490F0
    // str r0, [r5, #8]
    // ldr r0, _02248F64 ; =ov41_02249280
    // str r0, [r5, #0xc]
    // ldr r0, _02248F68 ; =ov41_02248F6C
    // str r0, [r5, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02248F5C: .word ov41_02248F80
    // _02248F60: .word ov41_022490F0
    // _02248F64: .word ov41_02249280
    // _02248F68: .word ov41_02248F6C
    // TODO: decompile
}




void ov41_02248F6C(void) {
}




void ov41_02248F80(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r4, [r5]
    // ldr r0, [r4, #4]
    // bl ov41_022481BC
    // cmp r0, #0
    // beq _02249002
    // ldr r3, [r4]
    // ldr r0, [r4, #4]
    // ldr r3, [r3, #0x38]
    // add r1, sp, #0xc
    // add r2, sp, #8
    // bl ov41_022481F4
    // add r6, r0, #0
    // beq _02248FB2
    // ldr r0, [r6, #4]
    // cmp r0, #3
    // bne _02248FB2
    // ldr r0, [r4, #0x2c]
    // cmp r0, #0
    // bne _02248FB2
    // mov r6, #0
    // cmp r6, #0
    // beq _0224903E
    // ldr r0, [r6, #4]
    // cmp r0, #0
    // bne _02248FC8
    // ldr r0, [r4, #4]
    // add r1, r6, #0
    // bl ov41_022480C8
    // mov r7, #0
    // b _02248FE4
    // add r0, r6, #0
    // bl ov41_02248030
    // ldr r0, [r6]
    // bl ov41_02249710
    // add r1, r4, #0
    // add r2, r4, #0
    // add r7, r0, #0
    // add r0, r6, #0
    // add r1, #0x24
    // add r2, #0x28
    // bl ov41_02249B44
    // ldr r0, [r4, #4]
    // bl ov41_02248158
    // ldr r0, [sp, #8]
    // add r1, r6, #0
    // str r0, [sp]
    // str r7, [sp, #4]
    // ldr r3, [sp, #0xc]
    // add r0, r4, #0
    // mov r2, #1
    // bl ov41_022493BC
    // bl ov41_0224642C
    // b _0224903E
    // ldr r0, [r4, #8]
    // bl ov41_02248820
    // cmp r0, #0
    // beq _0224903E
    // ldr r3, [r4]
    // ldr r0, [r4, #8]
    // ldr r3, [r3, #0x38]
    // add r1, sp, #0xc
    // add r2, sp, #8
    // bl ov41_02248858
    // add r6, r0, #0
    // beq _0224903E
    // bl ov41_022486F0
    // ldr r0, [r4, #8]
    // bl ov41_02248724
    // ldr r0, [sp, #8]
    // mov r2, #0
    // str r0, [sp]
    // str r2, [sp, #4]
    // ldr r3, [sp, #0xc]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov41_022493BC
    // bl ov41_0224642C
    // ldr r1, [r4, #0x10]
    // cmp r1, #0
    // beq _02249088
    // ldr r1, [r1, #4]
    // ldr r0, _0224908C ; =0x000005EB
    // cmp r1, #0
    // beq _02249056
    // cmp r1, #1
    // beq _02249060
    // cmp r1, #3
    // beq _02249072
    // b _0224907A
    // ldr r1, _02249090 ; =ov41_022490F0
    // str r1, [r5, #8]
    // ldr r1, _02249094 ; =ov41_02249280
    // str r1, [r5, #0xc]
    // b _0224907A
    // ldr r0, _02249098 ; =ov41_022490B0
    // str r0, [r5, #8]
    // ldr r0, _0224909C ; =ov41_022490AC
    // str r0, [r5, #0xc]
    // add r0, r5, #0
    // bl ov41_02249390
    // ldr r0, _022490A0 ; =0x0000067D
    // b _0224907A
    // ldr r1, _022490A4 ; =ov41_022492B0
    // str r1, [r5, #8]
    // ldr r1, _022490A8 ; =ov41_022492E0
    // str r1, [r5, #0xc]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl PlaySE
    // add r0, r4, #0
    // bl ov41_02249574
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224908C: .word 0x000005EB
    // _02249090: .word ov41_022490F0
    // _02249094: .word ov41_02249280
    // _02249098: .word ov41_022490B0
    // _0224909C: .word ov41_022490AC
    // _022490A0: .word 0x0000067D
    // _022490A4: .word ov41_022492B0
    // _022490A8: .word ov41_022492E0
    // TODO: decompile
}




void ov41_022490AC(void) {
    // bx lr
    // TODO: decompile
}




void ov41_022490B0(void) {
    GF_AssertFail(*((u32*)(*((u32*)(*((u32*)r0) + 0x10)) + 4)));
    // str r0, [sp]
    // add r0, #0x21
    // ldrb r0, [r0]
    // str r0, [sp, #4]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    ov41_02249480(r4, 4, 0x1c, 0x1e);
    ov41_02249418(r4);
}




void ov41_022490F0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x28
    // add r6, r0, #0
    // ldr r4, [r6]
    // ldr r1, [r4, #0x10]
    // cmp r1, #0
    // bne _02249100
    // b _0224926E
    // add r1, sp, #0x18
    // str r1, [sp]
    // add r1, sp, #0x24
    // add r2, sp, #0x20
    // add r3, sp, #0x1c
    // bl ov41_0224946C
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x24]
    // bl ov41_022481D8
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x24]
    // bl ov41_022481D8
    // add r5, r5, r0
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    // bl ov41_022481D8
    // add r5, r5, r0
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x20]
    // bl ov41_022481D8
    // add r0, r5, r0
    // cmp r0, #4
    // blt _022491A2
    // ldr r2, [r4]
    // ldr r0, [r4, #4]
    // ldr r1, [r4, #0x10]
    // ldr r2, [r2, #0x38]
    // bl ov41_022480A4
    // cmp r0, #0
    // bne _0224918C
    // mov r0, #0x1c
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #0xc]
    // mov r0, #0x1e
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #8]
    // ldr r0, _02249274 ; =0x00000682
    // bl PlaySE
    // ldr r0, [r4, #0xc]
    // mov r1, #0x1b
    // mov r2, #0xd7
    // mov r3, #3
    // bl ov41_0224AC08
    // ldr r0, [r4, #0x10]
    // mov r1, #4
    // ldr r0, [r0, #4]
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #8]
    // add r0, r4, #0
    // bl ov41_02249480
    // b _02249268
    // ldr r0, [r4, #4]
    // bl ov41_02248158
    // bl ov41_022463FC
    // mov r0, #0
    // str r0, [r4, #0x30]
    // ldr r0, _02249278 ; =0x000005EA
    // bl PlaySE
    // b _02249268
    // ldr r0, [r4, #0x10]
    // add r1, sp, #0x24
    // ldr r5, [r0]
    // add r0, sp, #0x18
    // str r0, [sp]
    // add r0, r6, #0
    // add r2, sp, #0x20
    // add r3, sp, #0x1c
    // bl ov41_0224942C
    // ldr r0, [r4, #8]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x24]
    // bl ov41_0224883C
    // add r6, r0, #0
    // ldr r0, [r4, #8]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x20]
    // bl ov41_0224883C
    // add r0, r6, r0
    // cmp r0, #2
    // bge _02249220
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0224920C
    // ldr r0, [r4, #0x10]
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    // bl ov41_02249B94
    // bl MTRandom
    // ldr r2, [sp, #0x14]
    // mov r1, #0x6c
    // sub r1, r1, r2
    // bl _u32_div_f
    // add r1, #0xa
    // str r1, [sp, #0xc]
    // bl MTRandom
    // ldr r2, [sp, #0x10]
    // mov r1, #0x7d
    // sub r1, r1, r2
    // bl _u32_div_f
    // add r1, #0x12
    // str r1, [sp, #8]
    // b _02249218
    // mov r0, #0x1c
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #0xc]
    // mov r0, #0x1e
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #8]
    // ldr r0, _02249274 ; =0x00000682
    // bl PlaySE
    // b _02249230
    // ldr r0, [r4, #0x10]
    // add r1, sp, #0xc
    // add r2, sp, #8
    // bl ov41_02249B44
    // ldr r0, _0224927C ; =0x000005EB
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0224924E
    // ldr r0, [r4, #0x10]
    // ldr r2, [r4, #8]
    // ldr r0, [r0, #4]
    // ldr r1, [r5]
    // ldr r2, [r2, #4]
    // bl ov41_022484E8
    // add r1, r4, #0
    // add r1, #0x21
    // strb r0, [r1]
    // ldr r0, [r4, #0x10]
    // mov r1, #4
    // ldr r0, [r0, #4]
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #8]
    // add r0, r4, #0
    // bl ov41_02249480
    // add r0, r4, #0
    // bl ov41_02249418
    // add sp, #0x28
    // pop {r4, r5, r6, pc}
    // nop
    // _02249274: .word 0x00000682
    // _02249278: .word 0x000005EA
    // _0224927C: .word 0x000005EB
    // TODO: decompile
}




void ov41_02249280(void) {
    // push {r4, lr}
    // ldr r2, [r0]
    // ldr r0, [r2, #0x10]
    // cmp r0, #0
    // beq _022492A4
    // ldr r3, _022492A8 ; =gSystem + 0x40
    // ldr r1, _022492AC ; =0x0000FFFF
    // ldrh r4, [r3, #0x20]
    // cmp r4, r1
    // beq _022492A4
    // beq _022492A4
    // ldrh r3, [r3, #0x22]
    // ldr r1, [r2, #0x14]
    // ldr r2, [r2, #0x18]
    // sub r1, r4, r1
    // sub r2, r3, r2
    // bl ov41_02249AF4
    // pop {r4, pc}
    // nop
    // _022492A8: .word gSystem + 0x40
    // _022492AC: .word 0x0000FFFF
    // TODO: decompile
}




void ov41_022492B0(void) {
    // push {r4, lr}
    // ldr r4, [r0]
    // ldr r1, [r4, #0x10]
    // cmp r1, #0
    // beq _022492DA
    // ldr r0, [r4, #4]
    // bl ov41_02248020
    // ldr r0, [r4, #4]
    // bl ov41_02248158
    // bl ov41_022463FC
    // mov r0, #0
    // str r0, [r4, #0x30]
    // ldr r0, _022492DC ; =0x000005EB
    // bl PlaySE
    // add r0, r4, #0
    // bl ov41_02249418
    // pop {r4, pc}
    // _022492DC: .word 0x000005EB
    // TODO: decompile
}




void ov41_022492E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // ldr r4, [r0]
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // beq _02249384
    // ldr r1, _02249388 ; =gSystem + 0x40
    // ldrh r2, [r1, #0x20]
    // ldr r1, _0224938C ; =0x0000FFFF
    // cmp r2, r1
    // beq _02249384
    // beq _02249384
    // add r1, sp, #8
    // str r1, [sp]
    // add r1, sp, #0x14
    // add r2, sp, #0xc
    // add r3, sp, #0x10
    // bl ov41_02249BAC
    // ldr r0, [r4, #0x10]
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    // bl ov41_02249B94
    // ldr r0, _02249388 ; =gSystem + 0x40
    // ldr r1, [r4, #0x14]
    // ldrh r2, [r0, #0x20]
    // ldr r3, [sp, #0x18]
    // sub r5, r2, r1
    // ldrh r1, [r0, #0x22]
    // ldr r0, [r4, #0x18]
    // ldr r2, [sp, #0x1c]
    // sub r6, r1, r0
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // sub r0, r2, r0
    // ldr r2, [sp, #8]
    // add r7, r6, r1
    // sub r2, r3, r2
    // ldr r3, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, r5, r3
    // str r0, [sp, #0x1c]
    // cmp r2, #0x8a
    // bgt _02249342
    // mov r0, #0x8a
    // sub r5, r0, r3
    // b _0224934C
    // add r2, r5, r0
    // cmp r2, #0xf6
    // blt _0224934C
    // mov r2, #0xf6
    // sub r5, r2, r0
    // cmp r7, #0x12
    // bgt _02249356
    // mov r0, #0x12
    // sub r6, r0, r1
    // b _02249362
    // ldr r1, [sp, #0x18]
    // add r0, r6, r1
    // cmp r0, #0x8f
    // blt _02249362
    // mov r0, #0x8f
    // sub r6, r0, r1
    // ldr r0, [sp, #4]
    // add r1, r5, #0
    // add r2, r6, #0
    // bl ov41_022495A4
    // ldr r0, [r4, #4]
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    // bl ov41_022482B8
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #4]
    // add r1, r5, r1
    // add r2, r6, r2
    // bl ov41_022495A4
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _02249388: .word gSystem + 0x40
    // _0224938C: .word 0x0000FFFF
    // TODO: decompile
}




void ov41_02249390(void) {
    GF_AssertFail(*((u32*)(*((u32*)(*((u32*)r0) + 0x10)) + 4)));
    ov41_022482A8(*((u32*)(r4 + 4)));
    ov41_0224825C(*((u32*)(r4 + 4)), *((u32*)r5), 0xe);
}




void ov41_022493BC(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    ov41_02249B44(r1);
    *((u32*)(r5 + 0x10)) = r4;
    // ldr r0, [sp, #4]
    *((u16*)(r5 + 0x1c)) = r0;
    // ldr r0, [sp]
    *((u16*)(r5 + 0x1e)) = r0;
    // add r0, #0x20
    // strb r6, [r0]
    // ldr r0, [sp, #0x20]
    *((u32*)(r5 + 0x14)) = r7;
    *((u32*)(r5 + 0x18)) = r5;
    ov41_0224895C(*((u32*)(r5 + 8)), *((u32*)(*((u32*)(r5 + 0x10)) + 4)));
    // add r1, #0x21
    // strb r0, [r1]
    // add r0, #0x21
    // strb r1, [r0]
    *((u32*)(r5 + 0x30)) = 1;
    // ldr r1, [sp, #0x24]
    ov41_02249A90(r4, 0);
}




void ov41_02249418(void) {
    *((u32*)(r0 + 0x10)) = 0;
    *((u16*)(r0 + 0x1c)) = 0;
    *((u16*)(r0 + 0x1e)) = 0;
    // add r1, #0x20
    // strb r2, [r1]
    // add r0, #0x21
    // strb r2, [r0]
}




void ov41_0224942C(void) {
    // add r1, sp, #0xc
    // add r2, sp, #8
    ov41_02249B94(*((u32*)(*((u32*)r0) + 0x10)));
    // add r1, sp, #4
    // add r2, sp, #0
    ov41_02249B44(*((u32*)(r4 + 0x10)));
    // ldr r0, [sp]
    // str r0, [r5]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // add r0, r1, r0
    // str r0, [r6]
    // ldr r0, [sp, #4]
    // str r0, [r7]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r1, r1, r0
    // ldr r0, [sp, #0x28]
    // str r1, [r0]
}




void ov41_0224946C(void) {
}




void ov41_02249480(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // str r3, [sp]
    // ldr r0, _022494F0 ; =ov41_022494F4
    // mov r1, #0x2c
    // mov r2, #0
    // mov r3, #0xd
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // add r4, r0, #0
    // ldr r0, [r5, #8]
    // add r1, sp, #8
    // str r0, [r4]
    // ldr r0, [r5, #0x10]
    // add r2, sp, #4
    // str r0, [r4, #4]
    // str r6, [r4, #0x20]
    // ldr r0, [sp]
    // str r7, [r4, #0x10]
    // str r0, [r4, #0x14]
    // ldr r0, [sp, #0x20]
    // str r0, [r4, #0x18]
    // ldr r0, [sp, #0x24]
    // str r0, [r4, #0x1c]
    // ldr r0, [r5, #8]
    // add r0, #0x3c
    // str r0, [r4, #0x24]
    // add r0, r5, #0
    // add r0, #0x30
    // str r0, [r4, #0x28]
    // ldr r0, [r5, #0x10]
    // bl ov41_02249B44
    // ldr r1, [r4, #0x10]
    // ldr r0, [sp, #8]
    // sub r0, r1, r0
    // add r1, r6, #0
    // bl _s32_div_f
    // str r0, [r4, #8]
    // ldr r1, [r4, #0x14]
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    // add r1, r6, #0
    // bl _s32_div_f
    // str r0, [r4, #0xc]
    // mov r0, #0
    // str r0, [r5, #0x30]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _022494F0: .word ov41_022494F4
    // TODO: decompile
}




void ov41_022494F4(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    ov41_02249B44(*((u32*)(r1 + 4)));
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    *((u32*)(r4 + 0x20)) = (*((u32*)(r4 + 0x20)) - 1);
    // bmi _02249532
    ov41_02249AF4(*((u32*)(r4 + 4)), *((u32*)(r4 + 0x10)), *((u32*)(r4 + 0x14)));
    ov41_022486C4(*((u32*)r4), *((u32*)(r4 + 0x18)), *((u32*)(r4 + 0x1c)), *((u32*)(r4 + 4)));
    ov41_02248724(*((u32*)r4));
    ov41_022463FC(*((u32*)*((u32*)(r4 + 0x28))));
    DestroySysTaskAndEnvironment(r5);
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ov41_02249AF4(*((u32*)(r4 + 4)));
}




void ov41_02249574(void) {
    ov41_0224AC08(*((u32*)(r0 + 0xc)), 0x1b, 0xd8, *((u32*)*((u32*)*((u32*)(r0 + 0x10)))));
    ov41_0224AC08(*((u32*)(r0 + 0xc)), 0x1b, 0xda, *((u32*)*((u32*)r3)));
}




void ov41_022495A4(void) {
    ov41_02249AF4(*((u32*)(*((u32*)r0) + 0x10)));
    // sub r1, r5, r1
    // sub r2, r6, r2
    ov41_02248114(*((u32*)(r4 + 4)), *((u32*)(r4 + 0x24)), *((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 0x24)) = r5;
    *((u32*)(r4 + 0x28)) = r6;
}




void ov41_022495C8(void) {
    // str r2, [sp]
    // ldrh r0, [r4]
    GfGfxLoader_LoadFromNarc(*((u16*)(r1 + 2)), 0, 0xe);
    ov41_022463DC(r5, r0, 0x76);
    // ldrh r1, [r4]
    UnscanPokepic(*((u32*)(r0 + 0x14)));
}




void ov41_022495F0(void) {
}




void ov41_02249604(void) {
    GetMonData(r2, 5, 0);
    sub_02070130(r4, r6, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    PokepicManager_CreatePokepic(r7, r4, 0xc0, 0x38);
    // str r0, [r5]
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    ov41_022497A0(r5);
    // ldr r1, [sp, #0x1c]
    // add r0, r1, r0
    // asr r0, r0, #1
    // ldr r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp, #0x18]
    // sub r0, r2, r0
    *((u8*)(r5 + 4)) = (r1 >> 0x1f);
    // ldr r0, [sp, #0x18]
    // add r0, #0x38
    *((u8*)(r5 + 5)) = (r1 >> 0x1f);
    // ldr r0, [sp, #0x1c]
    // sub r0, r1, r0
    *((u8*)(r5 + 6)) = (r1 >> 0x1f);
    // ldr r0, [sp, #0x1c]
    // add r0, #0xc0
    *((u8*)(r5 + 7)) = (r1 >> 0x1f);
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r3, [sp, #0x1c]
    ov41_02249978((r5 + 4), 0xc0, 0x38);
    sub_02070848(r6, 2);
    // str r2, [sp]
    // ldrh r0, [r4]
    // ldr r3, [sp, #0x38]
    GfGfxLoader_LoadFromNarc(*((u16*)(r4 + 2)), 0);
    // add r1, sp, #0x14
    // str r0, [sp, #0x10]
    NNS_G2dGetUnpackedCharacterData();
    // ldr r0, [sp, #0x14]
    // ldrh r1, [r4]
    UnscanPokepic(*((u32*)(r0 + 0x14)));
    // ldr r0, [sp, #0x3c]
    // ldr r2, [sp, #0x14]
    // ldrh r2, [r2]
    // add r3, #8
    ov41_022498E8(*((u32*)(r2 + 0x14)), (*((u16*)(r2 + 2)) << 3), (r2 << 3), r5);
    // ldr r1, [sp, #0x14]
    ov41_0224989C(*((u32*)(r1 + 0x14)), (*((u16*)(r1 + 2)) << 3));
    *((u8*)(r5 + 8)) = r0;
    *((u8*)(r5 + 9)) = *((u8*)(r5 + 8));
    *((u8*)(r5 + 0xb)) = r7;
    *((u8*)(r5 + 0xa)) = r7;
    // ldr r0, [sp, #0x10]
    Heap_Free(*((u8*)(r5 + 8)));
    *((u32*)(r5 + 0xc)) = r6;
}




void ov41_022496E8(void) {
}




void ov41_02249700(void) {
    // ldr r3, _0224970C ; =Pokepic_SetAttr
    // add r2, r1, #0
    // ldr r0, [r0]
    // mov r1, #2
    // bx r3
    // nop
    // _0224970C: .word Pokepic_SetAttr
    // TODO: decompile
}




void ov41_02249710(void) {
}




void ov41_0224971C(void) {
    // add r1, sp, #8
    // add r2, sp, #4
    ov41_022497A0();
    Pokepic_SetAttr(*((u32*)r5), 0, r4);
    Pokepic_SetAttr(*((u32*)r5), 1, r6);
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // asr r2, r0, #1
    // ldr r1, [sp, #8]
    // str r2, [sp, #4]
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp, #8]
    // str r2, [sp]
    // ldr r3, [sp, #8]
    ov41_02249978((r5 + 4), r4, r6);
}




void ov41_02249768(void) {
}




void ov41_02249774(void) {
}




void ov41_02249780(void) {
}




void ov41_022497A0(void) {
}




void ov41_022497A8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov41_02249768
    // cmp r0, #0
    // bne _022497C2
    // add sp, #0x10
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, sp, #4
    // add r2, sp, #0
    // bl ov41_02249780
    // add r0, r5, #0
    // add r1, sp, #0xc
    // add r2, sp, #8
    // bl ov41_022497A0
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // sub r1, r2, r0
    // ldr r3, [sp, #8]
    // ldr r0, [sp]
    // lsr r2, r3, #0x1f
    // add r2, r3, r2
    // asr r2, r2, #1
    // sub r0, r0, r2
    // str r0, [sp]
    // ldr r0, _0224981C ; =gSystem + 0x40
    // str r1, [sp, #4]
    // ldrh r2, [r0, #0x20]
    // mov r3, #0
    // sub r1, r2, r1
    // str r1, [r4]
    // ldrh r1, [r0, #0x22]
    // ldr r0, [sp]
    // sub r2, r1, r0
    // str r2, [r6]
    // ldr r1, [r4]
    // add r0, r7, #0
    // bl ov41_022464BC
    // cmp r0, #0
    // bne _02249816
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224981C: .word gSystem + 0x40
    // TODO: decompile
}




void ov41_02249820(void) {
    ov41_02249774();
    // add r1, sp, #4
    // add r2, sp, #0
    ov41_02249780(r5);
    // add r1, sp, #0xc
    // add r2, sp, #8
    ov41_022497A0(r5);
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    // add r0, r1, r0
    // asr r0, r0, #1
    // sub r1, r2, r0
    // ldr r3, [sp, #8]
    // str r1, [sp, #4]
    // add r2, r3, r2
    // ldr r0, [sp]
    // asr r2, r2, #1
    // sub r0, r0, r2
    // str r0, [sp]
    // sub r2, r6, r0
    // sub r1, r4, r1
    ov41_022464BC(r7, (r3 >> 0x1f), 0);
}




void ov41_02249888(void) {
    // strb r2, [r1]
    *((u8*)(r1 + 1)) = *((u8*)(r0 + 9));
    *((u8*)(r1 + 2)) = *((u8*)(r0 + 0xa));
    *((u8*)(r1 + 3)) = *((u8*)(r0 + 0xb));
}




void ov41_0224989C(void) {
    // mov ip, r0
    // add r1, r2, r4
    // sub r6, r6, r0
    // ror r6, r5
    // add r5, r0, r6
    // add r0, r1, r0
    // lsl r5, r6
    // asr r1, r0, #1
    // mov r0, ip
    // ldrsb r0, [r0, r1]
    // tst r0, r5
    // add r4, r4, r7
}




void ov41_022498E8(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // strb r0, [r1]
    *((u8*)(r3 + 1)) = 0x28;
    *((u8*)(r3 + 2)) = 0x28;
    *((u8*)(r3 + 3)) = 0x28;
    // sub r2, r2, r6
    // str r2, [sp, #8]
    // mov lr, r2
    // ldr r2, [sp, #8]
    // mov ip, r2
    // add r7, r6, r5
    // sub r4, r4, r3
    // ror r4, r2
    // add r2, r3, r4
    // lsl r2, r4
    // add r3, r7, r3
    // ldr r2, [sp]
    // asr r3, r3, #1
    // ldrsb r2, [r2, r3]
    // tst r2, r4
    // ldrb r2, [r1]
    // mov r2, lr
    // strb r2, [r1]
    // ldr r2, [sp, #8]
    // mov r2, ip
    *((u8*)(r3 + 1)) = (0xf << 0x18);
    *((u8*)(r3 + 2)) = 0;
    // sub r3, r2, r0
    *((u8*)(r3 + 3)) = *((u8*)(r3 + 1));
    // ldr r2, [sp, #4]
    // add r5, r5, r2
}




void ov41_02249978(void) {
    // ldr r4, [sp, #8]
    // sub r4, r2, r4
    // bmi _02249982
    // strb r4, [r0]
    // ldr r4, [sp, #8]
    // add r2, r2, r4
    *((u8*)(r0 + 1)) = 0xbf;
    // sub r2, r1, r3
    // bmi _0224999A
    // add r1, r1, r3
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = r1;
    *((u8*)(r0 + 3)) = 0xff;
}




void ov41_022499B4(void) {
    Heap_Alloc(r2, (r1 << 4));
    // str r0, [r5]
    GF_AssertFail();
    memset(*((u32*)r5), 0, r4);
    *((u32*)(r5 + 4)) = r6;
}




void ov41_022499DC(void) {
}




void ov41_022499F0(void) {
    GF_AssertFail(*((u32*)r0));
    GF_AssertFail(*((u32*)(r5 + 4)));
    // add r1, #0x10
    GF_AssertFail(*((u32*)*((u32*)r5)), *((u32*)r5), *((u32*)(r5 + 4)));
    // str r6, [r0, r1]
    // add r0, r0, r1
    *((u32*)(*((u32*)r5) + 4)) = r7;
    // add r0, r0, r1
}




void ov41_02249A40(void) {
    // strb r1, [r0]
}




void ov41_02249A50(void) {
}




void ov41_02249A60(void) {
}




void ov41_02249A70(void) {
    ov41_02249A60(*((u32*)(r0 + 8)));
    ov41_02249A40(r4);
}




void ov41_02249A90(void) {
    ov41_02246014(*((u32*)r0), *((u32*)(r0 + 4)));
    ov41_02249700();
}




void ov41_02249AA8(void) {
    // ldr r3, [r3, r4]
    ov41_02245F14(*((u32*)r0));
    // add r4, #0x64
    // ldr r3, [r3, r4]
    ov41_02245F14(*((u32*)r0));
    // add r4, #0x64
    // ldr r3, [r3, r4]
    ov41_02245F14(*((u32*)r0));
    // ldr r3, [r3, r4]
    ov41_022497A8();
}




void ov41_02249AF4(void) {
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov41_02245F9C(*((u32*)r0), (r1 << 0x10), (r2 << 0x10));
    // add r1, sp, #4
    // add r2, sp, #0
    ov41_022497A0(*((u32*)r0));
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // add r0, r1, r0
    // asr r1, r0, #1
    // add r0, r2, r0
    // asr r2, r0, #1
    // str r1, [sp, #4]
    // str r2, [sp]
    // add r1, r5, r1
    // add r2, r4, r2
    ov41_0224971C(r6);
}




void ov41_02249B44(void) {
    ov41_02245FA8(*((u32*)r0), *((u32*)(r0 + 4)));
    ov41_02249780(*((u32*)r0));
    // add r1, sp, #4
    // add r2, sp, #0
    ov41_022497A0(r6);
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // asr r2, r0, #1
    // ldr r1, [sp]
    // str r2, [sp, #4]
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp]
    // sub r0, r0, r2
    // str r0, [r5]
    // ldr r0, [sp]
    // sub r0, r1, r0
    // str r0, [r4]
}




void ov41_02249B94(void) {
    ov41_02245FD8(*((u32*)r0), *((u32*)(r0 + 4)));
    ov41_022497A0();
}




void ov41_02249BAC(void) {
    // ldr r4, [sp, #0x18]
    ov41_02246020(*((u32*)r0), r3);
    // str r0, [r7]
    // str r0, [r4]
    // add r1, sp, #0
    ov41_02249888(*((u32*)r5));
    // add r0, sp, #0
    // ldrb r1, [r0]
    // str r1, [r6]
    // str r1, [r7]
    // str r1, [r5]
    // str r0, [r4]
}




void ov41_02249BE8(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    ov41_02249B44(*((u32*)(r0 + 8)));
    // ldr r0, [sp, #4]
    // add r1, r0, r6
    // ldr r0, [sp]
    // str r1, [sp, #4]
    // add r2, r0, r7
    // str r2, [sp]
    ov41_02249AF4(r4);
}




void ov41_02249C20(void) {
    // add r1, sp, #0x20
    // add r2, sp, #0x1c
    ov41_02249B94();
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    ov41_02249B44(r5);
    // add r0, sp, #4
    // str r0, [sp]
    // add r1, sp, #0x10
    // add r2, sp, #8
    // add r3, sp, #0xc
    ov41_02249BAC(r5);
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [r4]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // add r1, r1, r0
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    // str r0, [r6]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [r7]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r1, r1, r0
    // ldr r0, [sp, #8]
    // sub r1, r1, r0
    // ldr r0, [sp, #0x38]
    // str r1, [r0]
}




void ov41_02249C7C(void) {
    // add r2, r0, #0
    // ldr r0, [r1]
    // str r0, [r2]
    // ldr r3, [r1, #0x14]
    // asr r0, r3, #2
    // lsr r0, r0, #0x1d
    // add r0, r3, r0
    // asr r0, r0, #3
    // str r0, [r2, #0xc]
    // ldr r3, [r1, #0x18]
    // asr r0, r3, #2
    // lsr r0, r0, #0x1d
    // add r0, r3, r0
    // asr r0, r0, #3
    // str r0, [r2, #0x10]
    // ldr r0, [r1, #0x1c]
    // ldr r3, _02249CC0 ; =ov41_02249E60
    // str r0, [r2, #0x1c]
    // ldr r0, [r1, #0x24]
    // str r0, [r2, #0x20]
    // ldr r0, [r1, #0x20]
    // str r0, [r2, #0x24]
    // ldr r0, [r1, #0x28]
    // str r0, [r2, #0x28]
    // ldr r0, [r1, #4]
    // str r0, [r2, #4]
    // ldr r0, [r1, #0x10]
    // str r0, [r2, #8]
    // add r0, r1, #0
    // add r1, r2, #0
    // add r1, #0x14
    // add r2, #0x18
    // bx r3
    // nop
    // _02249CC0: .word ov41_02249E60
    // TODO: decompile
}




void ov41_02249CC4(void) {
    BgClearTilemapBufferAndCommit(*((u32*)r0), ((*((u32*)(r0 + 0x1c)) << 0x18) >> 0x18));
    memset(r4, 0, 0x2c);
}




void ov41_02249CE0(void) {
    // str r2, [r0]
    *((u32*)(r0 + 4)) = *((u32*)(r1 + 4));
    *((u32*)(r0 + 8)) = *((u32*)(r1 + 8));
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = *((u32*)(r1 + 0xc));
}




void ov41_02249CF8(void) {
    // add r1, r0, r1
    *((u32*)(r0 + 0xc)) = r1;
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 0x10)) = 1;
    *((u32*)(r0 + 0x10)) = 0;
    // str r0, [sp]
    // add r3, sp, #0x14
    GfGfxLoader_GetScrnData(*((u32*)(*((u32*)r0) + 4)), *((u32*)(*((u32*)r0) + 8)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov41_02249F7C(*((u32*)*((u32*)r5)), *((u32*)(*((u32*)r5) + 0x1c)), *((u32*)(*((u32*)r5) + 0x14)));
    Heap_Free(r4);
}




void ov41_02249D60(void) {
    // str r0, [sp]
    // add r3, sp, #0x14
    GfGfxLoader_GetScrnData(*((u32*)(*((u32*)r0) + 4)), *((u32*)(*((u32*)r0) + 8)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov41_02249F7C(*((u32*)*((u32*)r5)), *((u32*)(*((u32*)r5) + 0x1c)), *((u32*)(*((u32*)r5) + 0x14)));
    Heap_Free(r4);
    // strb r0, [r5]
}




void ov41_02249DB4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r0, #0
    // add r5, r1, #0
    // str r2, [sp]
    // str r3, [sp, #4]
    // ldr r0, _02249E3C ; =ov41_02249F0C
    // mov r1, #0x4c
    // mov r2, #0
    // mov r3, #0xd
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // add r4, r0, #0
    // str r6, [r4]
    // add r7, r5, #0
    // add r3, r4, #4
    // mov r2, #6
    // ldmia r7!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02249DDA
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    // str r0, [r4, #0x34]
    // ldr r0, [sp]
    // str r1, [r4, #0x38]
    // bl _s32_div_f
    // str r0, [r4, #0x3c]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x20]
    // bl _s32_div_f
    // str r0, [r4, #0x40]
    // ldr r0, [r6]
    // ldr r1, [r6, #0x1c]
    // bl Bg_GetXpos
    // str r0, [r4, #0x44]
    // ldr r0, [r6]
    // ldr r1, [r6, #0x1c]
    // bl Bg_GetYpos
    // str r0, [r4, #0x48]
    // mov r0, #0x80
    // str r0, [r5, #0x28]
    // mov r0, #5
    // str r0, [r5, #0x24]
    // ldr r1, [r5, #0x14]
    // ldr r0, [sp]
    // sub r0, r1, r0
    // str r0, [r5, #0x14]
    // ldr r1, [r5, #0x18]
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    // str r0, [r5, #0x18]
    // mov r0, #0xe
    // mov r1, #0
    // str r0, [r5, #0x2c]
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov41_02249E60
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02249E3C: .word ov41_02249F0C
    // TODO: decompile
}




void ov41_02249E40(void) {
    // add r0, #0xc
    // ldrh r2, [r0]
    // add r2, r2, r1
    // strh r2, [r0]
}




void ov41_02249E60(void) {
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    // str r0, [sp, #0x18]
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    ov41_02249FFC(*((u32*)(r0 + 4)), *((u32*)(r0 + 8)), *((u32*)r0), *((u32*)(r0 + 0x1c)));
    // str r0, [sp]
    // str r0, [sp, #4]
    ov41_0224A04C(*((u32*)(r5 + 4)), *((u32*)(r5 + 0xc)), 4, (*((u32*)(r5 + 0x24)) << 5));
    // str r0, [sp]
    // add r3, sp, #0x24
    GfGfxLoader_GetScrnData(*((u32*)(r5 + 4)), *((u32*)(r5 + 0x10)), 0);
    // ldr r2, [sp, #0x24]
    // str r0, [sp, #0x20]
    // ldrh r0, [r2]
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov41_02249F7C(*((u32*)r5), *((u32*)(r5 + 0x1c)), (r0 >> 3));
    // ldr r0, [sp, #0x20]
    Heap_Free();
    // str r7, [r4]
    // ldr r0, [sp, #0x1c]
    // str r0, [r6]
}




void ov41_02249F0C(void) {
    *((u32*)(r1 + 0x38)) = (*((u32*)(r1 + 0x38)) - 1);
    // bmi _02249F40
    ScheduleSetBgPosText(*((u32*)*((u32*)r1)), ((*((u32*)(*((u32*)r1) + 0x1c)) << 0x18) >> 0x18), 2, *((u32*)(r1 + 0x3c)));
    ScheduleSetBgPosText(*((u32*)*((u32*)r4)), ((*((u32*)(*((u32*)r4) + 0x1c)) << 0x18) >> 0x18), 5, *((u32*)(r4 + 0x40)));
    ScheduleSetBgPosText(*((u32*)r1), ((*((u32*)(r1 + 0x1c)) << 0x18) >> 0x18), 0, *((u32*)(r4 + 0x44)));
    ScheduleSetBgPosText(*((u32*)*((u32*)r4)), ((*((u32*)(*((u32*)r4) + 0x1c)) << 0x18) >> 0x18), 3, *((u32*)(r4 + 0x48)));
    ov41_02249C7C(*((u32*)r4), (r4 + 4));
    // str r0, [r1]
    DestroySysTaskAndEnvironment(r5, *((u32*)(r4 + 0x34)));
}




void ov41_02249F7C(void) {
    // ldr r1, [sp, #0x3c]
    ov41_02249E40(r2);
    // ldr r1, [sp, #0x30]
    // str r0, [sp]
    // ldr r3, [sp, #0x38]
    // str r2, [sp, #4]
    // add r4, #0xc
    // str r4, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r2, [sp, #0x34]
    CopyToBgTilemapRect(r7, ((r5 << 0x18) >> 0x18), ((((r1 << 0x18) >> 0x18) << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x34]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x40]
    // ldr r3, [sp, #0x38]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r7, ((r5 << 0x18) >> 0x18), ((r2 << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(r7, ((r5 << 0x18) >> 0x18));
}




void ov41_02249FFC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r0, #0
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x14
    // add r5, r2, #0
    // add r6, r3, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // add r2, r4, #0
    // mov r1, #0x14
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _0224A018
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #4]
    // str r0, [sp]
    // add r0, r7, #0
    // mov r2, #0
    // add r3, r4, #4
    // bl GfGfxLoader_GetCharData
    // str r0, [r4, #8]
    // str r5, [r4]
    // ldr r0, [sp, #0x20]
    // str r6, [r4, #0xc]
    // str r0, [r4, #0x10]
    // ldr r0, _0224A048 ; =ov41_0224A094
    // add r1, r4, #0
    // mov r2, #0x80
    // bl SysTask_CreateOnVWaitQueue
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224A048: .word ov41_0224A094
    // TODO: decompile
}




void ov41_0224A04C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // str r1, [sp]
    // ldr r0, [sp, #0x1c]
    // mov r1, #0x14
    // add r5, r2, #0
    // add r6, r3, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // add r2, r4, #0
    // mov r1, #0x14
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _0224A066
    // ldr r1, [sp]
    // ldr r3, [sp, #0x1c]
    // add r0, r7, #0
    // add r2, r4, #0
    // bl GfGfxLoader_GetPlttData
    // str r0, [r4, #4]
    // str r5, [r4, #8]
    // ldr r0, [sp, #0x18]
    // str r6, [r4, #0xc]
    // str r0, [r4, #0x10]
    // ldr r0, _0224A090 ; =ov41_0224A0D0
    // add r1, r4, #0
    // mov r2, #0x80
    // bl SysTask_CreateOnVWaitQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224A090: .word ov41_0224A0D0
    // TODO: decompile
}




void ov41_0224A094(void) {
    DC_FlushRange(*((u32*)(*((u32*)(r1 + 4)) + 0x14)), *((u32*)(*((u32*)(r1 + 4)) + 0x10)));
    // str r0, [sp]
    BG_LoadCharTilesData(*((u32*)r4), ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18), *((u32*)(*((u32*)(r4 + 4)) + 0x14)), *((u32*)(*((u32*)(r4 + 4)) + 0x10)));
    SysTask_Destroy(r5);
    Heap_Free(*((u32*)(r4 + 8)));
    Heap_Free(r4);
}




void ov41_0224A0D0(void) {
    DC_FlushRange(*((u32*)(*((u32*)r1) + 0xc)), *((u32*)(r1 + 0x10)));
    GX_LoadBGPltt(*((u32*)(*((u32*)r4) + 0xc)), *((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)));
    GXS_LoadBGPltt(*((u32*)(*((u32*)r4) + 0xc)), *((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)));
    SysTask_Destroy(r5);
    Heap_Free(*((u32*)(r4 + 4)));
    Heap_Free(r4);
}




void ov41_0224A118(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // cmp r5, #0
    // bne _0224A126
    // bl GF_AssertFail
    // cmp r4, #0
    // bne _0224A12E
    // bl GF_AssertFail
    // ldr r0, [r4]
    // bl Sprite_CreateAffine
    // str r0, [r5]
    // cmp r0, #0
    // bne _0224A13E
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // str r0, [r5, #4]
    // ldr r0, [r4, #8]
    // str r0, [r5, #8]
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _0224A150
    // str r0, [r5, #0xc]
    // pop {r3, r4, r5, pc}
    // ldr r0, _0224A158 ; =ov41_0224A254
    // str r0, [r5, #0xc]
    // pop {r3, r4, r5, pc}
    // nop
    // _0224A158: .word ov41_0224A254
    // TODO: decompile
}




void ov41_0224A15C(void) {
    ov41_0224A118();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // add r0, sp, #0
    sub_020135D8(*((u32*)(*((u32*)r4) + 0x2c)));
    *((u32*)(r5 + 0x10)) = r0;
}




void ov41_0224A1A8(void) {
}




void ov41_0224A1C0(void) {
}




void ov41_0224A1DC(void) {
    // blx r2
}




void ov41_0224A1EC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // add r6, r2, #0
    // mov r4, #2
    // add r5, #0x20
    // cmp r4, r7
    // beq _0224A204
    // add r0, r5, #0
    // bl ov41_0224A264
    // b _0224A228
    // cmp r6, #0
    // bne _0224A216
    // add r0, r5, #0
    // bl ov41_0224A270
    // ldr r0, _0224A234 ; =0x0000067C
    // bl PlaySE
    // b _0224A228
    // cmp r6, #2
    // bne _0224A222
    // add r0, r5, #0
    // bl ov41_0224A258
    // b _0224A228
    // add r0, r5, #0
    // bl ov41_0224A270
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #3
    // ble _0224A1F8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224A234: .word 0x0000067C
    // TODO: decompile
}




void ov41_0224A238(void) {
}




void ov41_0224A254(void) {
    // bx lr
    // TODO: decompile
}




void ov41_0224A258(void) {
}




void ov41_0224A264(void) {
}




void ov41_0224A270(void) {
}




void ov41_0224A27C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r0, #0x80
    // add r4, r1, #0
    // str r2, [r0]
    // mov r0, #1
    // mov r1, #0xd
    // bl FontSystem_NewInit
    // str r0, [r5, #0x64]
    // add r0, r4, #0
    // bl ov41_0224A7F8
    // mov r0, #0x90
    // str r0, [sp]
    // mov r0, #0x28
    // str r0, [sp, #4]
    // mov r0, #0x20
    // str r0, [sp, #8]
    // add r0, r5, #0
    // mov r1, #0
    // add r2, r4, #0
    // mov r3, #0x30
    // bl ov41_0224A6C4
    // mov r0, #0x28
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x6c
    // mov r1, #0
    // mov r2, #0x30
    // mov r3, #0x98
    // bl ov41_0224A7E0
    // mov r0, #0x90
    // str r0, [sp]
    // mov r0, #0x28
    // str r0, [sp, #4]
    // mov r0, #0x20
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x10
    // mov r1, #1
    // add r2, r4, #0
    // mov r3, #8
    // bl ov41_0224A6C4
    // mov r0, #0x28
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x6c
    // mov r1, #1
    // mov r2, #8
    // mov r3, #0x98
    // bl ov41_0224A7E0
    // mov r0, #0x90
    // str r0, [sp]
    // mov r0, #0x28
    // str r0, [sp, #4]
    // mov r0, #0x2a
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x20
    // mov r1, #2
    // add r2, r4, #0
    // mov r3, #0x60
    // bl ov41_0224A6C4
    // mov r0, #0x28
    // str r0, [sp]
    // mov r0, #0x22
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x6c
    // mov r1, #2
    // mov r2, #0x60
    // mov r3, #0x9c
    // bl ov41_0224A7E0
    // mov r0, #0x90
    // str r0, [sp]
    // mov r0, #0x28
    // str r0, [sp, #4]
    // mov r0, #0x2a
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x30
    // mov r1, #3
    // add r2, r4, #0
    // mov r3, #0x88
    // bl ov41_0224A6C4
    // mov r0, #0x28
    // str r0, [sp]
    // mov r0, #0x22
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x6c
    // mov r1, #3
    // mov r2, #0x88
    // mov r3, #0x9c
    // bl ov41_0224A7E0
    // mov r0, #2
    // mov r1, #0xe
    // bl FontID_Alloc
    // mov r0, #9
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0x1b
    // mov r2, #0xd7
    // mov r3, #0
    // bl ov41_0224A928
    // add r6, r0, #0
    // str r6, [sp]
    // mov r0, #0xb8
    // str r0, [sp, #4]
    // mov r0, #0x90
    // str r0, [sp, #8]
    // mov r0, #0x48
    // str r0, [sp, #0xc]
    // mov r0, #0x2a
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // ldr r3, [r5, #0x64]
    // add r0, #0x40
    // mov r1, #4
    // add r2, r4, #0
    // bl ov41_0224A734
    // mov r0, #0x48
    // str r0, [sp]
    // mov r0, #0x22
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x6c
    // mov r1, #4
    // mov r2, #0xb8
    // mov r3, #0x9c
    // bl ov41_0224A7E0
    // add r0, r6, #0
    // bl ov41_0224A9B0
    // mov r0, #2
    // bl FontID_Release
    // mov r0, #1
    // str r0, [r5, #0x60]
    // add r0, r4, #0
    // bl ov41_0224A888
    // add r0, r5, #0
    // add r0, #0x20
    // bl ov41_0224A258
    // mov r0, #0xd
    // str r0, [sp]
    // add r0, r5, #0
    // ldr r2, _0224A3E0 ; =ov41_0224A60C
    // add r0, #0x6c
    // mov r1, #5
    // add r3, r5, #0
    // bl TouchHitboxController_Create
    // str r0, [r5, #0x68]
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _0224A3E0: .word ov41_0224A60C
    // TODO: decompile
}




void ov41_0224A3E4(void) {
    ov41_02246388(r1, 0);
    ov41_0224639C(r5, r4);
    ObjCharTransfer_ResetTransferTasksByResID(r4);
    ObjPlttTransfer_FreeTaskByID(0);
    ObjPlttTransfer_FreeTaskByID(1);
    ov41_0224A1A8(r6);
    // add r4, #0x10
    // add r0, #0x54
    sub_02021B5C(r6);
    // add r0, #0x40
    ov41_0224A1C0(r6);
    sub_020135AC(*((u32*)(r6 + 0x64)));
    TouchHitboxController_Destroy(*((u32*)(r6 + 0x68)));
    *((u32*)(r6 + 0x68)) = 0;
}




void ov41_0224A448(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x68]
    // mov r4, #0xff
    // cmp r0, #0
    // bne _0224A458
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r0, #0x84
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _0224A48C
    // add r0, r5, #0
    // add r0, #0x84
    // ldrh r0, [r0]
    // sub r1, r0, #1
    // add r0, r5, #0
    // add r0, #0x84
    // strh r1, [r0]
    // add r1, r5, #0
    // add r1, #0x84
    // ldrh r2, [r1]
    // mov r1, #1
    // add r0, r5, #0
    // eor r2, r1
    // ldr r1, _0224A4E4 ; =ov41_0224C094
    // add r0, #0x86
    // ldrb r1, [r1, r2]
    // ldrh r0, [r0]
    // add r2, r5, #0
    // bl ov41_0224A60C
    // pop {r3, r4, r5, pc}
    // ldr r0, _0224A4E8 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // add r2, r1, #0
    // tst r2, r0
    // beq _0224A49C
    // mov r4, #4
    // b _0224A4C2
    // mov r2, #0x40
    // tst r2, r1
    // beq _0224A4A6
    // mov r4, #1
    // b _0224A4C2
    // mov r2, #0x80
    // tst r2, r1
    // beq _0224A4B0
    // mov r4, #0
    // b _0224A4C2
    // mov r2, #0x20
    // tst r2, r1
    // beq _0224A4BA
    // mov r4, #2
    // b _0224A4C2
    // mov r2, #0x10
    // tst r1, r2
    // beq _0224A4C2
    // add r4, r0, #0
    // cmp r4, #0xff
    // beq _0224A4E2
    // add r0, r5, #0
    // add r0, #0x86
    // strh r4, [r0]
    // add r0, r5, #0
    // mov r1, #2
    // add r0, #0x84
    // strh r1, [r0]
    // add r0, r5, #0
    // add r0, #0x86
    // ldrh r0, [r0]
    // mov r1, #0
    // add r2, r5, #0
    // bl ov41_0224A60C
    // pop {r3, r4, r5, pc}
    // _0224A4E4: .word ov41_0224C094
    // _0224A4E8: .word gSystem
    // TODO: decompile
}




void ov41_0224A4EC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x84
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _0224A4FC
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // ldr r0, [r0]
    // cmp r0, #1
    // bne _0224A526
    // bl System_GetTouchHeld
    // cmp r0, #0
    // beq _0224A514
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, _0224A548 ; =gSystem
    // ldr r0, [r0, #0x44]
    // cmp r0, #0
    // beq _0224A542
    // add r4, #0x80
    // ldr r0, [r4]
    // mov r1, #0
    // str r1, [r0]
    // b _0224A542
    // ldr r0, _0224A548 ; =gSystem
    // ldr r0, [r0, #0x44]
    // cmp r0, #0
    // beq _0224A532
    // mov r0, #0
    // pop {r4, pc}
    // bl System_GetTouchHeld
    // cmp r0, #0
    // beq _0224A542
    // add r4, #0x80
    // ldr r0, [r4]
    // mov r1, #1
    // str r1, [r0]
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0224A548: .word gSystem
    // TODO: decompile
}




void ov41_0224A54C(void) {
    GF_AssertFail(*((u32*)(r0 + 0x68)));
    ov41_0224A4EC(r4);
    // add r0, #0x80
    ov41_0224A448(r4);
    TouchHitboxController_IsTriggered(*((u32*)(r4 + 0x68)));
}




void ov41_0224A580(void) {
}




void ov41_0224A5A4(void) {
    // str r0, [sp]
    ov41_0224A9BC(r0, r1, r2);
    // add r5, #0x10
    // ldr r0, [sp]
    // add r0, #0x40
    // str r0, [sp]
    ov41_0224A9F8(r6, r7);
}




void ov41_0224A5D4(void) {
    GF_AssertFail();
    // ldr r3, [sp, #0x18]
    // add r0, r5, r0
    ov41_0224A238((r4 << 4), r6, r7);
    // add r5, #0x40
    // ldr r3, [sp, #0x18]
    ov41_0224A238(r5, r6, r7);
}




void ov41_0224A60C(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // cmp r6, #4
    // bhi _0224A6B8
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224A624: ; jump table
    // add r0, r4, #0
    // bl ov41_0224A8B0
    // mov r1, #0x1a
    // add r0, r4, #0
    // lsl r1, r1, #6
    // mov r2, #0
    // add r3, r5, #0
    // bl ov41_0224A918
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov41_0224A1DC
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x10
    // bl ov41_0224A8B0
    // add r0, r4, #0
    // mov r1, #0x1a
    // add r0, #0x10
    // lsl r1, r1, #6
    // mov r2, #0
    // add r3, r5, #0
    // bl ov41_0224A918
    // add r4, #0x10
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov41_0224A1DC
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // bl ov41_0224A1EC
    // lsl r0, r6, #4
    // add r0, r4, r0
    // add r1, r5, #0
    // bl ov41_0224A1DC
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0x60]
    // cmp r0, #1
    // bne _0224A6BC
    // add r0, r4, #0
    // add r0, #0x40
    // bl ov41_0224A8B0
    // add r0, r4, #0
    // add r0, #0x40
    // add r1, r5, #0
    // bl ov41_0224A8D4
    // add r0, r4, #0
    // ldr r1, _0224A6C0 ; =0x000005E2
    // add r0, #0x40
    // mov r2, #0
    // add r3, r5, #0
    // bl ov41_0224A918
    // add r4, #0x40
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov41_0224A1DC
    // pop {r4, r5, r6, pc}
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // nop
    // _0224A6C0: .word 0x000005E2
    // TODO: decompile
}




void ov41_0224A6C4(void) {
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x5c
    CreateSpriteResourcesHeader(*((u32*)(r2 + 0x54)), 0, r1);
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0xa0]
    // str r1, [sp, #0x54]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x58]
    // add r0, sp, #0x2c
    // str r0, [sp, #0x80]
    // str r1, [sp, #0x8c]
    // add r1, sp, #0x80
    // str r2, [sp, #0x3c]
    // str r2, [sp, #0x84]
    // str r2, [sp, #0x88]
    ov41_0224A118(r6, 1, 0);
}




void ov41_0224A734(void) {
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x5c
    CreateSpriteResourcesHeader(*((u32*)(r2 + 0x54)), 0, r1);
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0xbc]
    // str r2, [sp, #0x58]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0xc0]
    // add r2, sp, #0x2c
    // str r2, [sp, #0x80]
    // ldr r2, [sp, #0xb8]
    // str r0, [sp, #0x38]
    // str r1, [sp, #0x50]
    // str r0, [sp, #0x3c]
    // str r1, [sp, #0x54]
    // str r0, [sp, #0x84]
    // str r0, [sp, #0x88]
    // str r0, [sp, #0x9c]
    // str r1, [sp, #0x8c]
    // str r6, [sp, #0x94]
    // str r2, [sp, #0x90]
    // str r0, [sp, #0xa0]
    SpriteResourceCollection_Find(*((u32*)(r4 + 0x4c)), 1, 0xe);
    SpriteTransfer_GetPaletteProxy(0);
    // str r0, [sp, #0x98]
    // ldr r0, [sp, #0xb8]
    sub_02013688(1, 0xd);
    // add r3, #0x14
    sub_02021AC8(1, 1, r5);
    GF_AssertFail();
    // add r1, sp, #0x80
    // str r0, [sp, #0xa4]
    ov41_0224A15C(r5);
}




void ov41_0224A7E0(void) {
    // strb r3, [r0, r1]
    // add r1, r0, r1
    // ldr r0, [sp, #4]
    *((u8*)((r1 << 2) + 2)) = r2;
    // add r0, r3, r0
    *((u8*)((r1 << 2) + 1)) = r0;
    // ldr r0, [sp]
    // add r0, r2, r0
    *((u8*)((r1 << 2) + 3)) = r0;
}




void ov41_0224A7F8(void) {
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r4, [sp, #4]
    // ldr r1, [r5, r1]
    // ldr r2, [sp, #0xc]
    ov41_022462E4(r0, (6 << 6), 0);
    // str r4, [sp]
    // ldr r1, [r5, r1]
    ov41_02246328(r5, (6 << 6), r7, 0);
    // str r4, [sp]
    // ldr r1, [r5, r1]
    ov41_02246344(r5, (6 << 6), r6, 0);
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // ldr r1, [r5, r1]
    ov41_02246304(r5, (3 << 7), 0x68, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [r5, r1]
    ov41_02246304(r5, (6 << 6), 0x78, 0);
}




void ov41_0224A888(void) {
    ov41_02246360(r0, 0);
    ov41_02246374(r5, 0);
    ov41_02246374(r5, 1);
}




void ov41_0224A8B0(void) {
    ov41_0224A270();
    ov41_0224A258();
    ov41_0224A264();
}




void ov41_0224A8D4(void) {
    sub_020136B4(*((u32*)(r0 + 0x10)), 0, 0xf);
    TextOBJ_SetPaletteNum(*((u32*)(r5 + 0x10)), 4);
    sub_020136B4(*((u32*)(r5 + 0x10)), 0, 0x13);
    sub_020136B4(*((u32*)(r5 + 0x10)), 0, 0x13);
    TextOBJ_SetPaletteNum(*((u32*)(r5 + 0x10)), 3);
}




void ov41_0224A918(void) {
}




void ov41_0224A928(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r4, r3, #0
    // mov r0, #0
    // mov r3, #0xd
    // bl NewMsgDataFromNarc
    // add r7, r0, #0
    // bne _0224A940
    // bl GF_AssertFail
    // add r0, r7, #0
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // mov r0, #0xe
    // mov r1, #1
    // bl AllocWindows
    // add r4, r0, #0
    // bl InitWindow
    // mov r0, #0
    // ldr r2, [sp, #0x28]
    // ldr r3, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [r6, #0x40]
    // add r1, r4, #0
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl AddTextWindowTopLeftCorner
    // ldr r3, [sp, #0x28]
    // mov r0, #2
    // add r1, r5, #0
    // mov r2, #0
    // lsl r3, r3, #3
    // bl FontID_String_GetCenterAlignmentX
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0224A9AC ; =0x00010203
    // add r2, r5, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #2
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl DestroyMsgData
    // add r0, r4, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224A9AC: .word 0x00010203
    // TODO: decompile
}




void ov41_0224A9B0(void) {
}




void ov41_0224A9BC(void) {
    Sprite_GetMatrixPtr(*((u32*)r0));
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    Sprite_SetMatrix(*((u32*)r5), r2, r0);
}




void ov41_0224A9F8(void) {
}




void ov41_0224AA08(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r6, r2, #0
    // mov r1, #1
    // add r5, r0, #0
    // tst r1, r6
    // beq _0224AA22
    // mov r2, #0x52
    // mov r1, #0
    // lsl r2, r2, #2
    // bl memset
    // mov r0, #2
    // tst r0, r6
    // beq _0224AA30
    // ldr r1, [r4]
    // add r0, r5, #0
    // bl ov41_0224ACA4
    // mov r0, #4
    // add r1, r6, #0
    // tst r1, r0
    // beq _0224AA54
    // mov r1, #0x1b
    // str r1, [sp]
    // str r0, [sp, #4]
    // mov r0, #0x1f
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r4]
    // add r0, #0x2c
    // mov r2, #2
    // mov r3, #0x13
    // bl ov41_0224AD0C
    // mov r0, #8
    // tst r0, r6
    // beq _0224AA6C
    // ldr r0, [r4, #0x24]
    // str r0, [sp]
    // add r0, r5, #0
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // ldr r3, [r4, #0x10]
    // add r0, #0x38
    // bl ov41_0224AED8
    // mov r0, #0x10
    // tst r0, r6
    // beq _0224AA8C
    // ldr r0, [r4]
    // str r0, [sp]
    // ldr r0, [r4, #0x20]
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x24]
    // str r0, [sp, #8]
    // add r0, r5, #0
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // ldr r3, [r4, #0x1c]
    // add r0, #0xa0
    // bl ov41_0224B118
    // mov r0, #0x20
    // tst r0, r6
    // beq _0224AB02
    // mov r0, #0x1b
    // str r0, [sp]
    // mov r2, #2
    // str r2, [sp, #4]
    // mov r0, #0x8b
    // str r0, [sp, #8]
    // mov r3, #1
    // str r3, [sp, #0xc]
    // add r0, #0xa9
    // ldr r1, [r4]
    // add r0, r5, r0
    // bl ov41_0224AD0C
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0224AB3C ; =0x0001020F
    // mov r1, #0x1b
    // str r0, [sp, #8]
    // mov r0, #0xff
    // str r0, [sp, #0xc]
    // add r0, #0x35
    // ldr r0, [r5, r0]
    // ldr r2, [r4, #0x14]
    // mov r3, #6
    // bl ov41_0224AE24
    // mov r0, #0x48
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _0224AB3C ; =0x0001020F
    // mov r1, #0x1b
    // str r0, [sp, #8]
    // mov r0, #0xff
    // str r0, [sp, #0xc]
    // add r0, #0x35
    // ldr r0, [r5, r0]
    // ldr r2, [r4, #0x14]
    // ldr r3, [r4, #0x18]
    // bl ov41_0224AE24
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // mov r2, #1
    // ldr r0, [r5, r0]
    // mov r1, #0
    // add r3, r2, #0
    // bl DrawFrameAndWindow2
    // ldr r0, [r4, #4]
    // str r0, [r5, #0x30]
    // ldr r0, [r4, #8]
    // str r0, [r5, #0x34]
    // ldr r0, [r4]
    // ldr r1, [r4, #0xc]
    // bl ov41_0224ACDC
    // ldr r0, [r4, #0xc]
    // bl Options_GetFrame
    // mov r1, #0x4f
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r0, [r4, #0xc]
    // bl Options_GetTextFrameDelay
    // mov r1, #5
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // add r0, r1, #0
    // sub r0, #8
    // ldr r0, [r5, r0]
    // sub r1, #8
    // orr r0, r6
    // str r0, [r5, r1]
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0224AB3C: .word 0x0001020F
    // TODO: decompile
}




void ov41_0224AB40(void) {
    // ldr r2, [r4, r1]
    // tst r1, r2
    ov41_0224AD7C(2);
    // ldr r2, [r4, r1]
    // bic r2, r0
    // str r2, [r4, r1]
    // ldr r1, [r4, r0]
    // tst r0, r1
    ov41_0224AD84(*((u32*)(r4 + 0x2c)), (0x4e << 2));
    // ldr r2, [r4, r1]
    // bic r2, r0
    // str r2, [r4, r1]
    // ldr r1, [r4, r0]
    // tst r0, r1
    // add r0, #0x38
    ov41_0224AFD4(r4, *((u32*)(r4 + 0x34)));
    // ldr r2, [r4, r1]
    // bic r2, r0
    // str r2, [r4, r1]
    // ldr r1, [r4, r0]
    // tst r0, r1
    // add r0, #0xa0
    ov41_0224B21C(r4, *((u32*)(r4 + 0x34)));
    // ldr r2, [r4, r1]
    // bic r2, r0
    // str r2, [r4, r1]
    // ldr r2, [r4, r0]
    // tst r1, r2
    // ldr r0, [r4, r0]
    ov41_0224AD84(((0x4e << 2) - 4), 0x20);
    // ldr r2, [r4, r1]
    // bic r2, r0
    // str r2, [r4, r1]
    memset(r4, 0, (0x52 << 2));
}




void ov41_0224ABF0(void) {
}




void ov41_0224AC08(void) {
    // ldr r1, [r5, r0]
    // tst r0, r1
    GF_AssertFail(4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov41_0224AD90(*((u32*)(r5 + 0x2c)), r4, r6, r7);
}




void ov41_0224AC40(void) {
    // ldr r1, [r5, r0]
    // tst r0, r1
    GF_AssertFail(4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [r5, r0]
    // str r1, [sp, #8]
    // add r0, r5, r0
    // str r0, [sp, #0xc]
    ov41_0224ADD8(*((u32*)(r5 + 0x2c)), r4, r6, r7);
}




void ov41_0224AC80(void) {
}




void ov41_0224AC98(void) {
}




void ov41_0224ACA4(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x2c]
    // add r1, sp, #0
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    ov41_02249C7C(0xe, 0);
}




void ov41_0224ACDC(void) {
    Options_GetFrame(r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r4, 5, 1, 1);
    LoadFontPal1(4, 0x40, 0xe);
}




void ov41_0224AD0C(void) {
    AllocWindows(0xe, 1);
    // str r0, [r5]
    InitWindow();
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x10]
    AddWindowParameterized(r7, *((u32*)r5), 5, ((r4 << 0x18) >> 0x18));
    FillWindowPixelBuffer(*((u32*)r5), 0xf);
    // ldr r0, [sp, #0x34]
    DrawFrameAndWindow2(*((u32*)r5), 0, 1, 1);
    CopyWindowToVram(*((u32*)r5));
}




void ov41_0224AD7C(void) {
}




void ov41_0224AD84(void) {
}




void ov41_0224AD90(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // mov r1, #0xf
    // add r5, r0, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x28]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r2, r6, #0
    // str r0, [sp, #4]
    // ldr r0, _0224ADD4 ; =0x0001020F
    // add r3, r7, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // bl ov41_0224AE24
    // mov r2, #1
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // add r3, r2, #0
    // bl DrawFrameAndWindow2
    // add r0, r4, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224ADD4: .word 0x0001020F
    // TODO: decompile
}




void ov41_0224ADD8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r4, r1, #0
    // mov r1, #0xf
    // add r5, r0, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x28]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r2, r6, #0
    // str r0, [sp, #4]
    // ldr r0, _0224AE20 ; =0x0001020F
    // add r3, r7, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // bl ov41_0224AE78
    // mov r2, #1
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // add r3, r2, #0
    // bl DrawFrameAndWindow2
    // add r0, r4, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0224AE20: .word 0x0001020F
    // TODO: decompile
}




void ov41_0224AE24(void) {
    NewMsgDataFromNarc(0, 0xd);
    GF_AssertFail();
    NewString_ReadMsgData(r5, r4);
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 1, r0);
    String_Delete(r4);
    DestroyMsgData(r5);
}




void ov41_0224AE78(void) {
    // ldr r4, [sp, #0x38]
    // str r3, [sp, #0x10]
    GF_AssertFail(*((u32*)r4));
    NewMsgDataFromNarc(0, r5, r6, 0xd);
    GF_AssertFail();
    // ldr r1, [sp, #0x10]
    NewString_ReadMsgData(r5);
    // str r0, [r4]
    // ldr r0, [sp, #0x2c]
    // ldr r3, [sp, #0x28]
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r7, 1, *((u32*)r4));
    DestroyMsgData(r5);
}




void ov41_0224AED8(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r3, [sp, #0x1c]
    // str r1, [sp, #0x14]
    // ldr r3, [sp, #0x80]
    // str r0, [sp, #0x18]
    ov41_0224AFF8(r2, 0xe);
    // ldr r0, [sp, #0x18]
    // add r2, sp, #0x48
    ov41_0224B0B8(r4, 0);
    // add r0, sp, #0x48
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x44]
    // ldr r7, [sp, #0x24]
    // str r5, [sp, #0x28]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x34]
    // str r1, [sp, #0x34]
    // add r0, r1, r0
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x18]
    // add r5, r0, r1
    // str r4, [sp, #0x30]
    // str r0, [sp, #0x30]
    // add r0, sp, #0x28
    Sprite_Create((0x26 << 0xc), (r7 << 2));
    *((u32*)(r5 + 0x10)) = r0;
    Sprite_SetAnimCtrlSeq(1);
    // ldr r0, [sp, #0x1c]
    // add r1, r6, r7
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x10)), 0);
    // add r4, #0x12
    // ldr r0, [sp, #0x20]
    // add r7, #0xa
    // add r0, #0x12
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
}




void ov41_0224AF8C(void) {
    // add r4, r7, r0
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x10)), 0);
    // add r4, r7, r0
    Sprite_SetAnimCtrlSeq(*((u32*)((r4 + 4) + 0x10)), 1);
    *((u32*)(r7 + 0x60)) = r5;
}




void ov41_0224AFD4(void) {
    Sprite_Delete(*((u32*)(r0 + 0x10)));
    ov41_0224B084(r6, r7);
}




void ov41_0224AFF8(void) {
    // ldr r7, [sp, #0x3c]
    // ldr r2, [sp, #0x28]
    // add r0, r7, r2
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r3, [sp, #0x10]
    AddCharResObjFromOpenNarc(*((u32*)r1), r3, 0);
    // str r0, [r5]
    sub_0200ADA4();
    sub_0200A740(*((u32*)r5));
    // ldr r2, [sp, #0x2c]
    // ldr r1, [sp, #0x10]
    // add r0, r7, r2
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    AddPlttResObjFromOpenNarc(*((u32*)(r4 + 4)), 0);
    *((u32*)(r5 + 4)) = r0;
    sub_0200B00C();
    sub_0200A740(*((u32*)(r5 + 4)));
    // ldr r2, [sp, #0x30]
    // ldr r1, [sp, #0x10]
    // add r0, r7, r2
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r4 + 8)), 0);
    // ldr r2, [sp, #0x34]
    *((u32*)(r5 + 8)) = r0;
    // add r0, r7, r2
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r1, [sp, #0x10]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r4 + 0xc)), 0);
    *((u32*)(r5 + 0xc)) = r0;
}




void ov41_0224B084(void) {
}




void ov41_0224B0B8(void) {
    GF2DGfxResObj_GetResID(*((u32*)r0));
    // str r0, [sp, #0x2c]
    GF2DGfxResObj_GetResID(*((u32*)(r5 + 4)));
    // str r0, [sp, #0x30]
    GF2DGfxResObj_GetResID(*((u32*)(r5 + 8)));
    // str r0, [sp, #0x34]
    GF2DGfxResObj_GetResID(*((u32*)(r5 + 0xc)));
    // str r0, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r6, [sp, #0x10]
    // ldr r2, [sp, #0x30]
    // str r1, [sp, #0x14]
    // ldr r3, [sp, #0x34]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    CreateSpriteResourcesHeader(r7, *((u32*)(r4 + 0xc)));
}




void ov41_0224B118(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x60
    // add r4, r1, #0
    // mov r1, #0xe5
    // str r1, [sp]
    // mov r1, #0xe6
    // str r1, [sp, #4]
    // mov r1, #0xe4
    // str r1, [sp, #8]
    // mov r1, #0xe3
    // str r1, [sp, #0xc]
    // mov r1, #2
    // str r1, [sp, #0x10]
    // ldr r1, _0224B214 ; =0x00000BB8
    // add r5, r2, #0
    // str r3, [sp, #0x18]
    // str r1, [sp, #0x14]
    // ldr r3, [sp, #0x80]
    // add r7, r0, #0
    // add r1, r5, #0
    // mov r2, #0xe
    // bl ov41_0224AFF8
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, sp, #0x3c
    // mov r3, #0
    // bl ov41_0224B0B8
    // add r0, sp, #0x3c
    // str r0, [sp, #0x20]
    // mov r2, #2
    // mov r0, #0xe
    // mov r1, #0x3a
    // str r0, [sp, #0x38]
    // lsl r1, r1, #0xc
    // lsl r0, r2, #0x14
    // mov r6, #0
    // str r4, [sp, #0x1c]
    // str r1, [sp, #0x28]
    // add r0, r1, r0
    // str r2, [sp, #0x34]
    // str r6, [sp, #0x30]
    // str r0, [sp, #0x28]
    // mov r4, #0x67
    // add r5, r7, #0
    // str r4, [sp, #0x24]
    // lsl r0, r4, #0xc
    // str r0, [sp, #0x24]
    // add r0, sp, #0x1c
    // bl Sprite_Create
    // str r0, [r5, #0x10]
    // add r6, r6, #1
    // add r4, #0x18
    // add r5, r5, #4
    // cmp r6, #2
    // blt _0224B174
    // ldr r0, [sp, #0x18]
    // mov r1, #0x1e
    // str r0, [r7, #0x1c]
    // mul r1, r0
    // str r1, [r7, #0x20]
    // ldr r1, [sp, #0x7c]
    // str r1, [r7, #0x2c]
    // str r0, [r1]
    // ldr r1, [r7, #0x2c]
    // str r0, [r1, #8]
    // add r0, r7, #0
    // mov r1, #0
    // add r0, #0x90
    // str r1, [r0]
    // add r0, r7, #0
    // bl ov41_0224B298
    // mov r0, #0xe
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // mov r0, #0xc1
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r7, #0
    // ldr r1, [sp, #0x78]
    // add r0, #0x18
    // mov r2, #0xa
    // mov r3, #8
    // bl ov41_0224AD0C
    // ldr r0, [r7, #0x18]
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // mov r3, #4
    // ldr r0, _0224B218 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xff
    // str r0, [sp, #0xc]
    // ldr r0, [r7, #0x18]
    // mov r1, #0x1b
    // mov r2, #0xd7
    // bl ov41_0224AE24
    // mov r0, #0x48
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _0224B218 ; =0x00010200
    // mov r1, #0x1b
    // str r0, [sp, #8]
    // mov r0, #0xff
    // str r0, [sp, #0xc]
    // ldr r0, [r7, #0x18]
    // mov r2, #0xd7
    // mov r3, #5
    // bl ov41_0224AE24
    // ldr r0, [r7, #0x18]
    // bl CopyWindowToVram
    // add sp, #0x60
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224B214: .word 0x00000BB8
    // _0224B218: .word 0x00010200
    // TODO: decompile
}




void ov41_0224B21C(void) {
    SysTask_Destroy(*((u32*)(r0 + 0x24)));
    SysTask_Destroy(*((u32*)(r5 + 0x28)));
    ov41_0224B084(r5, r4);
    ov41_0224AD84(*((u32*)(r5 + 0x18)));
    memset(r5, 0, 0x94);
}




void ov41_0224B250(void) {
}




void ov41_0224B270(void) {
    // push {r3, lr}
    // ldr r1, [r0, #0x2c]
    // ldr r2, [r1]
    // ldr r1, [r0, #0x1c]
    // cmp r1, r2
    // beq _0224B290
    // str r2, [r0, #0x1c]
    // cmp r2, #0xa
    // bgt _0224B290
    // add r1, r0, #0
    // add r1, #0x30
    // bl ov41_0224B374
    // ldr r0, _0224B294 ; =0x00000682
    // bl PlaySE
    // pop {r3, pc}
    // nop
    // _0224B294: .word 0x00000682
    // TODO: decompile
}




void ov41_0224B298(void) {
    // str r0, [sp]
    // mul r4, r0
    // ldr r0, [sp]
    _s32_div_f(0xa, 1);
    // str r0, [sp, #4]
    GF_AssertFail();
    // ldr r1, [sp, #4]
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x10)));
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // mul r1, r4
    // sub r0, r0, r1
    // str r0, [sp]
    _s32_div_f(r4, 0xa);
    // add r0, #0x90
    Sprite_SetPalIndexRespectVramOffset(*((u32*)(r5 + 0x10)), 1);
    // add r1, #0x90
    // str r0, [r1]
}




void ov41_0224B310(void) {
    // bmi _0224B318
    *((u32*)(r0 + 0x20)) = (*((u32*)(r0 + 0x20)) - 1);
}




void ov41_0224B31C(void) {
    // str r1, [r0]
    *((u32*)(r0 + 4)) = r1;
    // sub r1, r2, r1
    *((u32*)(r0 + 8)) = r1;
    *((u32*)(r0 + 0x10)) = r3;
    *((u32*)(r0 + 0xc)) = 0;
}




void ov41_0224B32C(void) {
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(*((u32*)(r0 + 8)), (*((u32*)(r0 + 0xc)) << 0xc));
    // add r0, r0, r2
    // adc r1, r3
    // orr r0, r1
    FX_Div((r0 >> 0xc), (*((u32*)(r4 + 0x10)) << 0xc), (2 << 0xa), 0);
    // add r0, r0, r1
    // str r0, [r4]
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x10));
}




void ov41_0224B374(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r0, [sp]
    // str r1, [sp, #4]
    // mov r1, #0x3a
    // mov r0, #2
    // lsl r1, r1, #0xc
    // lsl r0, r0, #0x14
    // ldr r4, [sp, #4]
    // str r1, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // ldr r6, [sp]
    // mov r7, #0
    // mov r5, #0x67
    // str r0, [sp, #8]
    // ldr r0, [r6, #0x10]
    // mov r1, #2
    // str r0, [r4, #4]
    // bl Sprite_SetAffineOverwriteMode
    // ldr r2, [sp, #8]
    // str r5, [sp, #0xc]
    // lsl r0, r5, #0xc
    // add r2, #0xc
    // add r3, sp, #0xc
    // str r0, [sp, #0xc]
    // ldmia r3!, {r0, r1}
    // str r2, [sp, #8]
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r7, r7, #1
    // str r0, [r2]
    // add r6, r6, #4
    // add r4, r4, #4
    // add r5, #0x18
    // cmp r7, #2
    // blt _0224B396
    // ldr r0, [sp]
    // ldr r1, [r0, #0x1c]
    // mov r0, #0xa
    // sub r0, r0, r1
    // cmp r0, #0
    // ble _0224B3F0
    // lsl r0, r0, #0xc
    // ldr r2, _0224B44C ; =0x00000266
    // asr r1, r0, #0x1f
    // mov r3, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r4, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r4, #0xc
    // orr r1, r0
    // lsl r0, r2, #1
    // add r4, r1, r0
    // b _0224B3F4
    // mov r4, #1
    // lsl r4, r4, #0xc
    // ldr r0, [sp, #4]
    // mov r2, #1
    // add r0, #0x24
    // add r1, r4, #0
    // lsl r2, r2, #0xc
    // mov r3, #0x10
    // bl ov41_0224B31C
    // mov r2, #6
    // asr r1, r4, #0x1f
    // add r0, r4, #0
    // lsl r2, r2, #0xe
    // mov r3, #0
    // bl _ll_mul
    // mov r3, #2
    // mov r2, #0
    // lsl r3, r3, #0xa
    // add r3, r0, r3
    // adc r1, r2
    // lsl r0, r1, #0x14
    // lsr r1, r3, #0xc
    // orr r1, r0
    // mov r0, #6
    // lsl r0, r0, #0xe
    // sub r4, r1, r0
    // ldr r0, [sp, #4]
    // add r1, r4, #0
    // add r0, #0x38
    // mov r3, #0x10
    // bl ov41_0224B31C
    // ldr r0, [sp, #4]
    // add r1, r4, #0
    // add r0, #0x4c
    // mov r2, #0
    // mov r3, #0x10
    // bl ov41_0224B31C
    // ldr r0, [sp, #4]
    // mov r1, #1
    // str r1, [r0]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224B44C: .word 0x00000266
    // TODO: decompile
}




void ov41_0224B450(void) {
    // add r0, #0x24
    ov41_0224B32C(r0);
    // add r0, #0x38
    ov41_0224B32C(r5);
    // add r0, #0x4c
    ov41_0224B32C(r5);
    // add r1, sp, #0xc
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    Sprite_SetAffineScale(*((u32*)(r5 + 4)));
    // add r1, sp, #0xc
    Sprite_SetAffineScale(*((u32*)(r5 + 8)));
    // add r6, #0xc
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp]
    // sub r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    Sprite_SetMatrix(*((u32*)(r5 + 4)), r3, r3);
    // add r6, #0x18
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    Sprite_SetMatrix(*((u32*)(r5 + 8)), r3, r3);
    // str r0, [r5]
}




void ov41_0224B4E8(void) {
    // stmia r0!, {r1}
    // add r3, #0x48
    // str r3, [sp]
    // add r1, #0x89
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r1, sp, #0
    // str r2, [sp, #0xc]
    ov41_02249CE0(0x10, r1);
}




void ov41_0224B50C(void) {
}




void ov41_0224B518(void) {
}




void ov41_0224B530(void) {
}




void ov41_0224B554(void) {
    // ldr r1, [r4, r0]
    // sub r0, #0x48
    // add r0, r4, r0
    ov41_0224B50C((0x26 << 4));
    // ldr r0, [r4, r0]
    ov41_0224B720(r4);
}




void ov41_0224B57C(void) {
    // ldr r1, [r4, r1]
    ov41_0224B878((0x26 << 4));
    ov41_0224B85C(r4);
    // ldr r0, [r4, r0]
    ov41_02245ECC((0x63 << 2));
    // str r1, [r4, r0]
    // sub r0, #8
    // add r0, r4, r0
    ov41_022499DC((0x63 << 2), 0);
    ov41_0224B754(r4);
    // ldr r0, [r4, r0]
    Heap_Free((0x8d << 2));
    Heap_Free(r4);
}




void ov41_0224B5C8(void) {
}




void ov41_0224B5D0(void) {
    // str r1, [r0, r2]
}




void ov41_0224B5D8(void) {
    // add r0, r5, r2
    // str r6, [sp]
    // add r1, #0xac
    // add r2, #0xb0
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    ov41_02248120((0x19 << 4), (0x19 << 4), r1);
    // ldr r0, [r5, r0]
    // sub r3, r3, r4
    BgSetPosTextAndCommit(*((u32*)(r5 + 0x40)), 2, 0, 0x88);
    // sub r3, r3, r6
    BgSetPosTextAndCommit(*((u32*)(r5 + 0x40)), 2, 3, 0x10);
    // str r4, [r5, r0]
    // str r6, [r5, r0]
}




void ov41_0224B630(void) {
    Heap_Alloc(*((u32*)(r0 + 0x68)), (0x9a << 2));
    memset(0, (0x9a << 2));
    // str r1, [r4, r0]
    AllocMonZeroed(*((u32*)(r5 + 0x68)), *((u32*)(r5 + 0x68)));
    // str r0, [r4, r1]
    // ldr r1, [r4, r1]
    sub_0202BEF4(*((u32*)r5), (0x8d << 2));
    ov41_0224B6CC(r4, r5);
    ov41_02246544(r4, *((u32*)(r5 + 0x58)), *((u32*)(r5 + 0x68)));
    // add r0, r4, r0
    ov41_022499B4((0x61 << 2), 0x15, *((u32*)(r5 + 0x68)));
    ov41_02245EA0(0x14, *((u32*)(r5 + 0x68)));
    // str r0, [r4, r1]
    ov41_0224B780(r4, r5);
    ov41_0224B848(r4, r5);
    // add r0, r4, r1
    // sub r1, #0x88
    // add r1, r4, r1
    ov41_0224B4E8((0x86 << 2), *((u32*)(r5 + 0x68)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    ov41_0224B888(r4, r5);
}




void ov41_0224B6CC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x28
    // add r4, r1, #0
    // ldr r1, [r4, #0x68]
    // add r5, r0, #0
    // mov r0, #0x1a
    // bl NARC_New
    // mov r1, #6
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // ldr r0, _0224B71C ; =0x000002CE
    // add r1, sp, #0
    // str r0, [sp]
    // mov r0, #0x76
    // str r0, [sp, #4]
    // mov r0, #0x13
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x68]
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x68]
    // add r0, r5, #0
    // bl ov41_02246518
    // ldr r3, [r4, #0x68]
    // add r0, r5, #0
    // add r1, sp, #0x10
    // add r2, r4, #0
    // bl ov41_0224B938
    // add r0, r5, #0
    // add r1, sp, #0x10
    // bl ov41_02246250
    // add r0, sp, #0x10
    // bl ov41_022463D4
    // add sp, #0x28
    // pop {r3, r4, r5, pc}
    // nop
    // _0224B71C: .word 0x000002CE
    // TODO: decompile
}




void ov41_0224B720(void) {
    // add r1, r0, r3
    // str r1, [sp]
    // sub r1, #0x14
    // ldr r2, [r0, r1]
    // sub r1, #0xc
    // ldr r1, [r0, r1]
    // add r1, r2, r1
    // sub r2, #0x10
    // ldr r4, [r0, r2]
    // sub r2, #8
    // ldr r2, [r0, r2]
    // ldrh r3, [r0, r3]
    // add r2, r4, r2
    ov41_022465D8((0x25 << 4), (0x25 << 4), ((0x25 << 4) - 4));
}




void ov41_0224B754(void) {
    ov41_0224626C();
    ov41_02246594(r4);
    // ldr r0, [r4, r0]
    ov41_022465C0(r4);
    // ldr r0, [r4, r0]
    NARC_Delete((6 << 6));
}




void ov41_0224B780(void) {
    // add r2, sp, #0x28
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // ldr r1, [r5, r0]
    // str r1, [sp, #0x40]
    // sub r1, #8
    // add r1, r5, r1
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // add r0, r5, r0
    ov41_02247F3C(((0x63 << 2) + 4), r2, r2);
    sub_0202BEE4(*((u32*)r7));
    sub_0202BEEC(*((u32*)r7));
    sub_0202BEDC(*((u32*)r7));
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r1
    // add r1, #0xa4
    // ldr r1, [r5, r1]
    // add r2, sp, #0x18
    ov41_02247FAC(*((u32*)(r7 + 0x68)), (0x19 << 4), r6);
    sub_0202BEFC(*((u32*)(r7 + 4)));
    // str r0, [sp, #0xc]
    sub_0202BF00(*((u32*)(r4 + 4)));
    // str r0, [sp, #0x10]
    sub_0202BF04(*((u32*)(r4 + 4)));
    // str r0, [sp, #0x14]
    sub_0202BF08(*((u32*)(r4 + 4)));
    // str r0, [sp]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, r5, r0
    ov41_02248044((0x19 << 4));
}




void ov41_0224B848(void) {
    // add r2, r1, #0
    // mov r1, #0x19
    // lsl r1, r1, #4
    // add r0, r0, r1
    // ldr r1, [r2, #0x5c]
    // ldr r3, _0224B858 ; =ov41_0224825C
    // ldr r2, [r2, #0x68]
    // bx r3
    // _0224B858: .word ov41_0224825C
    // TODO: decompile
}




void ov41_0224B85C(void) {
    // add r0, r4, r0
    ov41_022480E0((0x19 << 4));
    // add r0, r4, r0
    ov41_02247F90((0x19 << 4));
}




void ov41_0224B878(void) {
    // mov r1, #0x19
    // lsl r1, r1, #4
    // ldr r3, _0224B884 ; =ov41_022482A8
    // add r0, r0, r1
    // bx r3
    // nop
    // _0224B884: .word ov41_022482A8
    // TODO: decompile
}




void ov41_0224B888(void) {
    // push {r3, r4, r5, lr}
    // add r3, r1, #0
    // mov r1, #0x8f
    // add r4, r0, #0
    // mov r2, #0x48
    // lsl r1, r1, #2
    // str r2, [r4, r1]
    // mov r5, #0x38
    // add r2, r1, #4
    // str r5, [r4, r2]
    // add r2, r1, #0
    // add r2, #8
    // str r5, [r4, r2]
    // add r2, r1, #0
    // mov r5, #0x40
    // add r2, #0xc
    // str r5, [r4, r2]
    // lsl r2, r5, #6
    // add r5, r1, #0
    // add r5, #0x14
    // str r2, [r4, r5]
    // add r5, r1, #0
    // add r5, #0x18
    // str r2, [r4, r5]
    // add r5, r1, #0
    // add r5, #0x1c
    // str r2, [r4, r5]
    // mov r2, #0
    // add r1, #0x10
    // strh r2, [r4, r1]
    // ldr r1, [r3, #0x60]
    // ldr r2, [r3, #0x64]
    // bl ov41_0224B5D8
    // mov r0, #0x97
    // ldr r1, _0224B8D8 ; =0x00007FFF
    // lsl r0, r0, #2
    // strh r1, [r4, r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _0224B8D8: .word 0x00007FFF
    // TODO: decompile
}




void ov41_0224B8DC(void) {
    *((u32*)(r0 + 0x58)) = *((u32*)r1);
    *((u32*)(r0 + 0x60)) = *((u32*)(r1 + 4));
    *((u32*)(r0 + 0x64)) = *((u32*)(r1 + 8));
    *((u32*)(r0 + 0x68)) = *((u32*)(r1 + 0xc));
}




void ov41_0224B8F0(void) {
    sub_0202BE14(r1);
    // str r0, [r5]
    *((u32*)(r5 + 0x54)) = 0;
    // add r6, #0x54
    sub_0202BDEC(r7, 0);
    sub_0202BE2C(r7, r4);
    // add r1, r5, r1
    *((u32*)((*((u32*)(r5 + 0x54)) << 2) + 4)) = r0;
    // str r0, [r6]
    sub_0202BE80(r7, (*((u32*)(r5 + 0x54)) << 2));
    *((u32*)(r5 + 0x5c)) = r0;
}




void ov41_0224B938(void) {
}




void ov41_0224B958(void) {
    // str r0, [sp, #4]
    // str r0, [sp, #0x10]
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    sub_0202BEFC(*((u32*)(r2 + 4)));
    GF2dGfxRawResMan_DoesNotHaveObjWithId(*((u32*)(r4 + 0x10)), r0);
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r0, [r1, r0]
    // ldr r3, [sp, #0xc]
    GfGfxLoader_LoadFromOpenNarc((6 << 6), (r5 + 1), 0);
    GF2dGfxRawResMan_AllocObj(*((u32*)(r4 + 0x10)), r0, r5);
    // add r1, r1, r5
    NNS_G2dGetUnpackedCharacterData(r7, (*((u32*)r4) + 4));
    // ldr r0, [sp, #4]
    // str r1, [r0, r5]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [r0, r1]
    // ldr r3, [sp, #0xc]
    GfGfxLoader_LoadFromOpenNarc(1, 0, 0);
    GF2dGfxRawResMan_AllocObj(*((u32*)(r4 + 0x14)), r0, 0);
    NNS_G2dGetUnpackedPaletteData(r5, (*((u32*)(r4 + 8)) + 4));
    // ldr r0, [sp, #4]
    // str r1, [r0]
    *((u32*)(*((u32*)(r4 + 8)) + 8)) = 3;
}




void AccessoryPortrait_Init(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r2, #2
    // add r4, r0, #0
    // mov r0, #3
    // mov r1, #0xd
    // lsl r2, r2, #0x10
    // bl Heap_Create
    // mov r2, #1
    // mov r0, #3
    // mov r1, #0xe
    // lsl r2, r2, #0x12
    // bl Heap_Create
    // mov r1, #0x1a
    // add r0, r4, #0
    // lsl r1, r1, #4
    // mov r2, #0xd
    // bl OverlayManager_CreateAndGetData
    // mov r2, #0x1a
    // mov r1, #0
    // lsl r2, r2, #4
    // add r5, r0, #0
    // bl memset
    // ldr r0, _0224BAC4 ; =ov41_0224BBF0
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // add r0, r4, #0
    // bl OverlayManager_GetArgs
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // bl sub_0202B9B8
    // str r0, [r5]
    // ldr r0, [r4, #4]
    // str r0, [r5, #8]
    // ldr r0, [r4, #8]
    // str r0, [r5, #0xc]
    // bl ov41_02246130
    // ldr r0, _0224BAC8 ; =gSystem + 0x60
    // mov r1, #0
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // add r0, r5, #0
    // add r0, #0x14
    // mov r1, #0xe
    // bl ov41_02246670
    // ldr r0, [r5, #0x54]
    // str r0, [sp]
    // mov r0, #0x48
    // str r0, [sp, #4]
    // mov r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r1, [r5]
    // add r0, sp, #0
    // bl ov41_0224B530
    // str r0, [r5, #0x10]
    // add r0, r5, #0
    // bl ov41_0224BC04
    // add r0, r5, #0
    // bl ov41_0224BCA4
    // add r0, r5, #0
    // bl ov41_0224BCF0
    // add r0, r5, #0
    // bl ov41_0224BDCC
    // add r0, r5, #0
    // bl ov41_0224BE5C
    // mov r0, #1
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0224BAC4: .word ov41_0224BBF0
    // _0224BAC8: .word gSystem + 0x60
    // TODO: decompile
}




void AccessoryPortrait_Main(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // bl OverlayManager_GetData
    // add r5, r0, #0
    // bl Thunk_G3X_Reset
    // bl NNS_G2dSetupSoftwareSpriteCamera
    // ldr r0, [r5, #0x10]
    // bl ov41_0224B554
    // mov r0, #0
    // add r1, r0, #0
    // bl RequestSwap3DBuffers
    // add r5, #0x14
    // add r0, r5, #0
    // bl ov41_022466C8
    // ldr r1, [r4]
    // cmp r1, #5
    // bhi _0224BB96
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224BB08: ; jump table
    // add r0, r1, #1
    // str r0, [r4]
    // b _0224BB96
    // mov r0, #6
    // str r0, [sp]
    // mov r2, #1
    // str r2, [sp, #4]
    // mov r0, #0xd
    // str r0, [sp, #8]
    // mov r0, #0
    // mov r1, #5
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224BB96
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0224BB96
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224BB96
    // ldr r0, _0224BB9C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _0224BB5A
    // bl System_GetTouchNew
    // cmp r0, #0
    // beq _0224BB96
    // ldr r0, _0224BBA0 ; =0x000005DD
    // bl PlaySE
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224BB96
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0xd
    // str r0, [sp, #8]
    // mov r0, #0
    // mov r1, #2
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224BB96
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0224BB96
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0224BB9C: .word gSystem
    // _0224BBA0: .word 0x000005DD
    // TODO: decompile
}




BOOL AccessoryPortrait_Exit(void) {
    OverlayManager_GetData();
    ov41_0224B57C(*((u32*)(r0 + 0x10)));
    ov41_0224BD8C(r4);
    ov41_0224BE34(r4);
    // add r4, #0x14
    ov41_02246698(r4);
    ov41_02246150();
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    OverlayManager_FreeData(r5);
    Heap_Destroy(0xd);
    Heap_Destroy(0xe);
}




void ov41_0224BBF0(void) {
}




void ov41_0224BC04(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r5, r0]
    GfGfxLoader_GXLoadPalFromOpenNarc((0x65 << 2), 0x7e, 0, 0x60);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadCharDataFromOpenNarc((0x65 << 2), 0x7d, *((u32*)(r5 + 0x54)), 1);
    // str r0, [sp]
    // add r3, sp, #0x10
    GfGfxLoader_GetScrnData(0x1a, 0x80, 0);
    // ldr r2, [sp, #0x10]
    // str r3, [sp]
    // ldrh r0, [r2]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    LoadRectToBgTilemapRect(*((u32*)(r5 + 0x54)), 1, 0);
    // ldr r1, [sp, #0x10]
    // ldrh r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r5 + 0x54)), 1, 0, 0);
    Heap_Free(r4);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x54)), 1);
}




void ov41_0224BCA4(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0xef, 0, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0xef, 9, *((u32*)(r4 + 0x54)), 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0xef, 1, *((u32*)(r4 + 0x54)), 4);
}




void ov41_0224BCF0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [r4, r1]
    // add r0, #0x14
    ov41_022462E4(r0, (0x65 << 2), 0xe9, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [r4, r1]
    // add r0, #0x14
    ov41_02246304(r4, (0x65 << 2), 0xea, 0);
    // str r0, [sp]
    // ldr r1, [r4, r1]
    // add r0, #0x14
    ov41_02246328(r4, (0x65 << 2), 0xe8, 0);
    // str r0, [sp]
    // ldr r1, [r4, r1]
    // add r0, #0x14
    ov41_02246344(r4, (0x65 << 2), 0xe7, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    ov41_02246280(r4, (0xfa << 2), 0, 0x90);
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    Sprite_SetPriority(1);
}




void ov41_0224BD8C(void) {
    // add r0, #0x14
    ov41_02246360((0xfa << 2));
    // add r0, #0x14
    ov41_02246374(r4, (0xfa << 2));
    // add r0, #0x14
    ov41_02246388(r4, (0xfa << 2));
    // add r0, #0x14
    ov41_0224639C(r4, (0xfa << 2));
    // ldr r0, [r4, r0]
    Sprite_Delete((0x66 << 2));
}




void ov41_0224BDCC(void) {
    AllocWindows(0xe, 1);
    // str r0, [r4, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r1, [r4, r1]
    AddWindowParameterized(*((u32*)(r4 + 0x54)), (0x67 << 2), 3, 0);
    LoadFontPal0(0, 0xa0, 0xe);
    SetBgPriority(3, 0);
    SetBgPriority(0, 2);
    SetBgPriority(1, 1);
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x54)), 3, 3, 0);
}




void ov41_0224BE34(void) {
    // ldr r0, [r4, r0]
    ClearWindowTilemapAndCopyToVram((0x67 << 2));
    // ldr r0, [r4, r0]
    RemoveWindow((0x67 << 2));
    // ldr r0, [r4, r0]
    WindowArray_Delete((0x67 << 2), 1);
}




void ov41_0224BE5C(void) {
    // ldr r0, [r4, r0]
    FillWindowPixelBuffer((0x67 << 2), 0);
    ov41_0224BE80(r4);
    // ldr r0, [r4, r0]
    CopyWindowToVram((0x67 << 2));
}




void ov41_0224BE80(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xd7
    // mov r3, #0xd
    // bl NewMsgDataFromNarc
    // str r0, [sp, #0x10]
    // cmp r0, #0
    // bne _0224BE9C
    // bl GF_AssertFail
    // mov r0, #0xd
    // bl MessageFormat_New
    // add r6, r0, #0
    // mov r0, #0x66
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #5
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #3
    // lsl r0, r0, #0x10
    // str r0, [sp, #0x14]
    // mov r0, #9
    // lsl r0, r0, #0x10
    // str r0, [sp, #0x18]
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // mov r0, #0x66
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, sp, #0x14
    // bl Sprite_SetMatrix
    // mov r0, #0xc
    // mov r1, #0xd
    // bl String_New
    // add r7, r0, #0
    // ldr r0, [r5]
    // add r1, r7, #0
    // bl sub_0202BE60
    // mov r0, #0
    // add r1, r7, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r4, r0, #0
    // mov r0, #7
    // str r0, [sp]
    // mov r1, #0
    // lsr r3, r4, #0x1f
    // add r3, r4, r3
    // asr r4, r3, #1
    // mov r3, #0x80
    // ldr r0, _0224BF90 ; =0x00010200
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x67
    // str r1, [sp, #0xc]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r2, r7, #0
    // sub r3, r3, r4
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [r5]
    // bl sub_0202BE98
    // add r2, r0, #0
    // add r0, r6, #0
    // mov r1, #0
    // bl BufferECWord
    // mov r0, #0xc8
    // mov r1, #0xd
    // bl String_New
    // add r4, r0, #0
    // ldr r0, [sp, #0x10]
    // mov r1, #0x2d
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // add r1, r4, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r3, r0, #0
    // mov r0, #0x1b
    // str r0, [sp]
    // mov r1, #0
    // ldr r0, _0224BF90 ; =0x00010200
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x67
    // str r1, [sp, #0xc]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // lsr r5, r3, #0x1f
    // add r5, r3, r5
    // asr r5, r5, #1
    // mov r3, #0x80
    // add r2, r4, #0
    // sub r3, r3, r5
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x10]
    // bl DestroyMsgData
    // add r0, r6, #0
    // bl MessageFormat_Delete
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224BF90: .word 0x00010200
    // TODO: decompile
}



