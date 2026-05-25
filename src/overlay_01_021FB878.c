/* Decompiled from asm/overlay_01_021FB878.s */
#include "global.h"

void ov01_021FB878(void) {
    // ldr r2, [r1, #0x14]
    // ldr r3, _021FB884 ; =Heap_Realloc
    // add r1, r1, r2
    // sub r1, r1, r0
    // bx r3
    // nop
    // _021FB884: .word Heap_Realloc
    // TODO: decompile
}


void ov01_021FB888(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _021FB8F8 ; =0x000008C4
    // add r5, r0, #0
    // mov r0, #4
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #4
    // mov r1, #0x10
    // bl Heap_AllocAtEnd
    // ldr r1, _021FB8FC ; =0x000008B8
    // mov r2, #0
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // str r5, [r0]
    // ldr r0, [r4, r1]
    // sub r1, #8
    // str r2, [r0, #4]
    // add r0, r4, r1
    // mov r1, #0x2a
    // add r2, r5, #0
    // bl ReadWholeNarcMemberByIdPair
    // ldr r0, _021FB900 ; =0x000008B6
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _021FB8D8
    // mov r0, #0x6b
    // mov r1, #4
    // bl NARC_New
    // mov r1, #0x23
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // mov r0, #0x28
    // mov r1, #4
    // bl NARC_New
    // b _021FB8EE
    // mov r0, #0x6c
    // mov r1, #4
    // bl NARC_New
    // mov r1, #0x23
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // mov r0, #0x94
    // mov r1, #4
    // bl NARC_New
    // ldr r1, _021FB8FC ; =0x000008B8
    // ldr r1, [r4, r1]
    // str r0, [r1, #8]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _021FB8F8: .word 0x000008C4
    // _021FB8FC: .word 0x000008B8
    // _021FB900: .word 0x000008B6
    // TODO: decompile
}


void ov01_021FB904(void) {
    // mov r1, #0x23
    // lsl r1, r1, #6
    // ldr r0, [r0, r1]
    // bx lr
    // TODO: decompile
}


void ov01_021FB90C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bne _021FB918
    // bl GF_AssertFail
    // add r2, r4, #4
    // lsl r1, r5, #2
    // ldr r0, [r2, r1]
    // cmp r0, #0
    // bne _021FB930
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _021FB92C
    // bl GF_AssertFail
    // add r0, r4, #4
    // pop {r3, r4, r5, pc}
    // add r0, r2, r1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021FB934(void) {
    GF_AssertFail();
}


void ov01_021FB944(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0x23
    // ldr r1, [r5]
    // lsl r0, r0, #6
    // ldr r0, [r1, r0]
    // bl NARC_Delete
    // ldr r1, [r5]
    // ldr r0, _021FB9BC ; =0x000008AC
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _021FB962
    // bl ov01_021EA7E0
    // mov r6, #0
    // ldr r7, _021FB9C0 ; =0x00000226
    // add r4, r6, #0
    // ldr r0, [r5]
    // add r0, r0, r4
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // beq _021FB976
    // bl Heap_Free
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, r7
    // blt _021FB968
    // ldr r1, [r5]
    // ldr r0, _021FB9C4 ; =0x000008BC
    // ldr r0, [r1, r0]
    // bl Heap_Free
    // ldr r1, [r5]
    // ldr r0, _021FB9C8 ; =0x0000089C
    // ldr r0, [r1, r0]
    // bl Heap_Free
    // ldr r1, [r5]
    // ldr r0, _021FB9C8 ; =0x0000089C
    // mov r2, #0
    // str r2, [r1, r0]
    // ldr r1, [r5]
    // add r0, r0, #4
    // ldr r0, [r1, r0]
    // bl Heap_Free
    // mov r0, #0x8a
    // ldr r1, [r5]
    // mov r2, #0
    // lsl r0, r0, #4
    // str r2, [r1, r0]
    // ldr r0, [r5]
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FB9BC: .word 0x000008AC
    // _021FB9C0: .word 0x00000226
    // _021FB9C4: .word 0x000008BC
    // _021FB9C8: .word 0x0000089C
    // TODO: decompile
}


void ov01_021FB9CC(void) {
    GF_AssertFail();
}


void ov01_021FB9E0(void) {
    GF_AssertFail();
}


void ov01_021FB9F4(void) {
    // ldr r1, _021FB9FC ; =0x000008AC
    // ldr r0, [r0, r1]
    // bx lr
    // nop
    // _021FB9FC: .word 0x000008AC
    // TODO: decompile
}


void ov01_021FBA00(void) {
    // ldr r1, _021FBA10 ; =0x000008B7
    // ldrb r0, [r0, r1]
    // cmp r0, #0
    // beq _021FBA0C
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _021FBA10: .word 0x000008B7
    // TODO: decompile
}


void ov01_021FBA14(void) {
    // ldr r1, _021FBA38 ; =0x000008B7
    // ldrb r0, [r0, r1]
    // cmp r0, #0
    // beq _021FBA26
    // cmp r0, #1
    // beq _021FBA2A
    // cmp r0, #2
    // beq _021FBA2E
    // b _021FBA32
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // mov r0, #3
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _021FBA38: .word 0x000008B7
    // TODO: decompile
}


void ov01_021FBA3C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x13c
    // str r1, [sp, #0xc]
    // add r5, r0, #0
    // ldr r1, _021FBC94 ; =0x000008B8
    // ldr r0, [sp, #0x150]
    // ldr r6, [r5, r1]
    // sub r1, #8
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x150]
    // ldrh r1, [r5, r1]
    // mov r0, #0x2b
    // mov r2, #4
    // add r4, r3, #0
    // bl AllocAndReadWholeNarcMemberByIdPair
    // ldr r1, _021FBC98 ; =0x000008BC
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // ldrh r1, [r0]
    // ldr r0, _021FBC9C ; =0x00000226
    // strh r1, [r6, #0xc]
    // cmp r1, r0
    // blo _021FBA70
    // bl GF_AssertFail
    // ldr r1, _021FBCA0 ; =0x000008B2
    // mov r0, #0x2c
    // ldrh r1, [r5, r1]
    // mov r2, #4
    // bl AllocAndReadWholeNarcMemberByIdPair
    // ldr r1, _021FBCA4 ; =0x0000089C
    // mov r2, #4
    // str r0, [r5, r1]
    // add r1, #0x14
    // ldrh r1, [r5, r1]
    // mov r0, #0x46
    // bl AllocAndReadWholeNarcMemberByIdPair
    // mov r1, #0x8a
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // sub r0, r1, #4
    // ldr r0, [r5, r0]
    // bl NNS_G3dGetTex
    // ldr r1, _021FBCA8 ; =0x000008A4
    // str r0, [r5, r1]
    // ldrh r0, [r6, #0xc]
    // cmp r0, #0
    // beq _021FBAB2
    // sub r0, r1, #4
    // ldr r0, [r5, r0]
    // bl NNS_G3dGetTex
    // ldr r1, _021FBCAC ; =0x000008A8
    // str r0, [r5, r1]
    // b _021FBAB8
    // mov r2, #0
    // add r0, r1, #4
    // str r2, [r5, r0]
    // ldr r0, _021FBCA8 ; =0x000008A4
    // ldr r0, [r5, r0]
    // bl GF3dRender_AllocAndLoadTexResources
    // cmp r0, #0
    // bne _021FBAC8
    // bl GF_AssertFail
    // ldr r1, _021FBCA4 ; =0x0000089C
    // ldr r0, [r5, r1]
    // add r1, #8
    // ldr r1, [r5, r1]
    // bl ov01_021FB878
    // ldr r0, _021FBCAC ; =0x000008A8
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _021FBAF6
    // bl GF3dRender_AllocAndLoadTexResources
    // cmp r0, #0
    // bne _021FBAE8
    // bl GF_AssertFail
    // mov r1, #0x8a
    // lsl r1, r1, #4
    // ldr r0, [r5, r1]
    // add r1, #8
    // ldr r1, [r5, r1]
    // bl ov01_021FB878
    // ldr r0, _021FBCB0 ; =0x000008B4
    // ldrh r1, [r5, r0]
    // ldr r0, _021FBCB4 ; =0x0000FFFF
    // cmp r1, r0
    // beq _021FBB06
    // add r0, r4, #0
    // bl ov01_0220463C
    // mov r2, #0
    // ldr r0, _021FBC9C ; =0x00000226
    // add r3, r5, #0
    // add r1, r2, #0
    // add r2, r2, #1
    // str r1, [r3, #4]
    // add r3, r3, #4
    // cmp r2, r0
    // blt _021FBB0E
    // ldr r0, _021FBCB8 ; =0x000008AC
    // str r1, [r5, r0]
    // ldr r0, [sp, #0x10]
    // bl ov01_021E8B9C
    // str r0, [sp, #0x1c]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldrh r0, [r6, #0xc]
    // cmp r0, #0
    // ble _021FBBEC
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x18]
    // ldr r0, _021FBC98 ; =0x000008BC
    // ldr r1, [r5, r0]
    // ldr r0, [sp, #0x18]
    // add r0, r1, r0
    // ldrh r4, [r0, #2]
    // lsl r0, r4, #2
    // add r0, r5, r0
    // str r0, [sp, #0x14]
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // beq _021FBB4C
    // bl GF_AssertFail
    // lsl r0, r4, #2
    // add r7, r5, r0
    // ldr r0, [r6, #8]
    // add r1, r4, #0
    // mov r2, #4
    // bl NARC_AllocAndReadWholeMember
    // str r0, [r7, #4]
    // mov r0, #0x23
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // add r2, sp, #0x24
    // bl NARC_ReadWholeMember
    // ldr r1, _021FBCAC ; =0x000008A8
    // ldr r0, [r7, #4]
    // ldr r1, [r5, r1]
    // bl GF3dRender_BindModelSet
    // cmp r0, #0
    // bne _021FBB7C
    // bl GF_AssertFail
    // add r0, sp, #0x24
    // ldrb r0, [r0, #3]
    // cmp r0, #0
    // bne _021FBBDA
    // ldr r0, [sp, #0xc]
    // add r1, r4, #0
    // bl ov01_022040A4
    // add r7, r0, #0
    // ldr r0, [sp, #0x1c]
    // cmp r4, r0
    // bge _021FBBDA
    // ldr r0, [sp, #0x14]
    // ldr r0, [r0, #4]
    // bl NNS_G3dGetMdlSet
    // cmp r0, #0
    // beq _021FBBC0
    // add r1, r0, #0
    // add r1, #8
    // beq _021FBBB4
    // ldrb r2, [r0, #9]
    // cmp r2, #0
    // bls _021FBBB4
    // ldrh r2, [r0, #0xe]
    // add r1, r1, r2
    // add r1, r1, #4
    // b _021FBBB6
    // mov r1, #0
    // cmp r1, #0
    // beq _021FBBC0
    // ldr r1, [r1]
    // add r1, r0, r1
    // b _021FBBC2
    // mov r1, #0
    // add r0, sp, #0x24
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r3, _021FBCAC ; =0x000008A8
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x150]
    // add r2, r7, #0
    // str r0, [sp, #8]
    // ldr r3, [r5, r3]
    // add r0, r4, #0
    // bl ov01_021E8F3C
    // ldr r0, [sp, #0x18]
    // ldrh r1, [r6, #0xc]
    // add r0, r0, #2
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r0, r0, #1
    // str r0, [sp, #0x20]
    // cmp r0, r1
    // blt _021FBB32
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // bne _021FBC2C
    // ldr r0, [r6, #8]
    // mov r1, #0
    // mov r2, #4
    // bl NARC_AllocAndReadWholeMember
    // str r0, [r5, #4]
    // ldr r0, [sp, #0xc]
    // mov r1, #0
    // bl ov01_022040A4
    // ldr r0, [r5, #4]
    // bl NNS_G3dGetTex
    // add r4, r0, #0
    // beq _021FBC2C
    // bl GF3dRender_AllocAndLoadTexResources
    // cmp r0, #0
    // bne _021FBC1C
    // bl GF_AssertFail
    // ldr r0, [r5, #4]
    // add r1, r4, #0
    // bl GF3dRender_BindModelSet
    // cmp r0, #0
    // bne _021FBC2C
    // bl GF_AssertFail
    // ldr r0, [r6, #8]
    // bl NARC_Delete
    // ldr r2, _021FBCBC ; =0x04000060
    // ldr r0, _021FBCC0 ; =0xFFFFCFFF
    // ldrh r1, [r2]
    // and r1, r0
    // mov r0, #0x20
    // orr r0, r1
    // strh r0, [r2]
    // ldr r0, _021FBCC4 ; =0x000008B7
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // bne _021FBC50
    // ldr r0, _021FBCC8 ; =ov01_02208BA0
    // bl G3X_SetEdgeColorTable
    // b _021FBC56
    // ldr r0, _021FBCCC ; =ov01_02208BB0
    // bl G3X_SetEdgeColorTable
    // bl ov01_021EA724
    // ldr r1, _021FBCB8 ; =0x000008AC
    // str r0, [r5, r1]
    // add r1, #0xa
    // ldrb r0, [r5, r1]
    // cmp r0, #0
    // add r0, sp, #0x3c
    // beq _021FBC70
    // ldr r1, _021FBCD0 ; =ov01_02209A88
    // bl sprintf
    // b _021FBC76
    // ldr r1, _021FBCD4 ; =ov01_02209AB4
    // bl sprintf
    // ldr r1, _021FBCB8 ; =0x000008AC
    // add r0, sp, #0x3c
    // ldr r1, [r5, r1]
    // bl ov01_021EA73C
    // ldr r0, _021FBC94 ; =0x000008B8
    // ldr r0, [r5, r0]
    // bl Heap_Free
    // ldr r0, _021FBC94 ; =0x000008B8
    // mov r1, #0
    // str r1, [r5, r0]
    // add sp, #0x13c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021FBC94: .word 0x000008B8
    // _021FBC98: .word 0x000008BC
    // _021FBC9C: .word 0x00000226
    // _021FBCA0: .word 0x000008B2
    // _021FBCA4: .word 0x0000089C
    // _021FBCA8: .word 0x000008A4
    // _021FBCAC: .word 0x000008A8
    // _021FBCB0: .word 0x000008B4
    // _021FBCB4: .word 0x0000FFFF
    // _021FBCB8: .word 0x000008AC
    // _021FBCBC: .word 0x04000060
    // _021FBCC0: .word 0xFFFFCFFF
    // _021FBCC4: .word 0x000008B7
    // _021FBCC8: .word ov01_02208BA0
    // _021FBCCC: .word ov01_02208BB0
    // _021FBCD0: .word ov01_02209A88
    // _021FBCD4: .word ov01_02209AB4
    // TODO: decompile
}


void Field3dModel_LoadFromFilesystem(void) {
    // push {r3, r4, r5, lr}
    // mov r5, #0
    // add r4, r0, #0
    // add r0, r1, #0
    // add r1, r2, #0
    // str r5, [sp]
    // add r2, r5, #0
    // bl GfGfxLoader_LoadFromNarc
    // str r0, [r4]
    // bl NNS_G3dGetMdlSet
    // str r0, [r4, #4]
    // cmp r0, #0
    // beq _021FBD16
    // add r2, r0, #0
    // add r2, #8
    // beq _021FBD0A
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bls _021FBD0A
    // ldrh r1, [r0, #0xe]
    // add r1, r2, r1
    // add r1, r1, #4
    // b _021FBD0C
    // mov r1, #0
    // cmp r1, #0
    // beq _021FBD16
    // ldr r1, [r1]
    // add r0, r0, r1
    // b _021FBD18
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r4]
    // bl NNS_G3dGetTex
    // str r0, [r4, #0xc]
    // cmp r0, #0
    // beq _021FBD32
    // mov r2, #1
    // ldr r0, _021FBD34 ; =ov01_021FBD8C
    // add r1, r4, #0
    // lsl r2, r2, #0xa
    // bl SysTask_CreateOnVWaitQueue
    // pop {r3, r4, r5, pc}
    // _021FBD34: .word ov01_021FBD8C
    // TODO: decompile
}


void ov01_021FBD38(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, r1, #0
    // str r1, [r4]
    // bl NNS_G3dGetMdlSet
    // str r0, [r4, #4]
    // cmp r0, #0
    // beq _021FBD6A
    // add r2, r0, #0
    // add r2, #8
    // beq _021FBD5E
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bls _021FBD5E
    // ldrh r1, [r0, #0xe]
    // add r1, r2, r1
    // add r1, r1, #4
    // b _021FBD60
    // mov r1, #0
    // cmp r1, #0
    // beq _021FBD6A
    // ldr r1, [r1]
    // add r0, r0, r1
    // b _021FBD6C
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r4]
    // bl NNS_G3dGetTex
    // str r0, [r4, #0xc]
    // cmp r0, #0
    // beq _021FBD86
    // mov r2, #1
    // ldr r0, _021FBD88 ; =ov01_021FBD8C
    // add r1, r4, #0
    // lsl r2, r2, #0xa
    // bl SysTask_CreateOnVWaitQueue
    // pop {r4, pc}
    // _021FBD88: .word ov01_021FBD8C
    // TODO: decompile
}


void ov01_021FBD8C(void) {
    GF3dRender_AllocAndLoadTexResources(*((u32*)(r1 + 0xc)));
    GF3dRender_BindModelSet(*((u32*)(r4 + 0xc)));
    SysTask_Destroy(r5);
}


void Field3dModel_Unload(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // beq _021FBDD8
    // add r1, sp, #4
    // add r2, sp, #0
    // bl NNS_G3dTexReleaseTexKey
    // ldr r1, _021FBDF4 ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r0, [sp, #4]
    // ldr r1, [r1]
    // blx r1
    // ldr r1, _021FBDF4 ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r0, [sp]
    // ldr r1, [r1]
    // blx r1
    // ldr r0, [r4, #0xc]
    // bl NNS_G3dPlttReleasePlttKey
    // ldr r1, _021FBDF8 ; =NNS_GfdDefaultFuncFreePlttVram
    // ldr r1, [r1]
    // blx r1
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021FBDE2
    // bl Heap_Free
    // mov r1, #0x10
    // mov r0, #0
    // strb r0, [r4]
    // add r4, r4, #1
    // sub r1, r1, #1
    // bne _021FBDE6
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _021FBDF4: .word NNS_GfdDefaultFuncFreeTexVram
    // _021FBDF8: .word NNS_GfdDefaultFuncFreePlttVram
    // TODO: decompile
}


void ov01_021FBDFC(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // beq _021FBE2C
    // add r1, sp, #4
    // add r2, sp, #0
    // bl NNS_G3dTexReleaseTexKey
    // ldr r1, _021FBE3C ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r0, [sp, #4]
    // ldr r1, [r1]
    // blx r1
    // ldr r1, _021FBE3C ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r0, [sp]
    // ldr r1, [r1]
    // blx r1
    // ldr r0, [r4, #0xc]
    // bl NNS_G3dPlttReleasePlttKey
    // ldr r1, _021FBE40 ; =NNS_GfdDefaultFuncFreePlttVram
    // ldr r1, [r1]
    // blx r1
    // mov r1, #0x10
    // mov r0, #0
    // strb r0, [r4]
    // add r4, r4, #1
    // sub r1, r1, #1
    // bne _021FBE30
    // add sp, #8
    // pop {r4, pc}
    // _021FBE3C: .word NNS_GfdDefaultFuncFreeTexVram
    // _021FBE40: .word NNS_GfdDefaultFuncFreePlttVram
    // TODO: decompile
}


void Field3dModelAnimation_LoadFromFilesystem(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r4, r1, #0
    // mov r6, #0
    // add r1, r3, #0
    // add r5, r0, #0
    // add r0, r2, #0
    // ldr r3, [sp, #0x18]
    // add r2, r6, #0
    // str r6, [sp]
    // bl GfGfxLoader_LoadFromNarc
    // add r2, r0, #0
    // ldr r3, [sp, #0x1c]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FC030
    // add r0, r6, #0
    // str r0, [r5, #0x10]
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FBE70(void) {
    ov01_021FC030();
}


void Field3dModelAnimation_Unload(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021FBE9E
    // add r0, r1, #0
    // ldr r1, [r4, #8]
    // bl NNS_G3dFreeAnmObj
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // bne _021FBE9E
    // ldr r0, [r4]
    // bl Heap_Free
    // mov r1, #0x14
    // mov r0, #0
    // strb r0, [r4]
    // add r4, r4, #1
    // sub r1, r1, #1
    // bne _021FBEA2
    // pop {r4, pc}
    // TODO: decompile
}


void Field3dModelAnimation_FrameAdvanceAndLoop(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #8]
    // ldrh r0, [r0, #4]
    // lsl r2, r0, #0xc
    // cmp r1, #0
    // ble _021FBECA
    // ldr r0, [r4, #0xc]
    // add r0, r0, r1
    // add r1, r2, #0
    // bl _s32_div_f
    // str r1, [r4, #0xc]
    // b _021FBEDC
    // ldr r0, [r4, #0xc]
    // add r3, r4, #0
    // add r3, #0xc
    // add r0, r0, r1
    // str r0, [r4, #0xc]
    // bpl _021FBEDC
    // ldr r0, [r3]
    // add r0, r0, r2
    // str r0, [r3]
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #8]
    // str r1, [r0]
    // pop {r4, pc}
    // TODO: decompile
}


void Field3dModelAnimation_FrameAdvanceAndCheck(void) {
    // push {r3, r4}
    // ldr r2, [r0, #8]
    // ldr r3, [r0, #0xc]
    // ldr r2, [r2, #8]
    // ldrh r2, [r2, #4]
    // lsl r4, r2, #0xc
    // mov r2, #0
    // cmp r1, #0
    // ble _021FBF06
    // add r1, r3, r1
    // cmp r1, r4
    // bge _021FBF00
    // str r1, [r0, #0xc]
    // b _021FBF12
    // str r4, [r0, #0xc]
    // mov r2, #1
    // b _021FBF12
    // add r1, r3, r1
    // bmi _021FBF0E
    // str r1, [r0, #0xc]
    // b _021FBF12
    // str r2, [r0, #0xc]
    // mov r2, #1
    // ldr r1, [r0, #0xc]
    // ldr r0, [r0, #8]
    // str r1, [r0]
    // add r0, r2, #0
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void Field3dModelAnimation_FrameSet(void) {
    // str r1, [r0, #0xc]
    // ldr r0, [r0, #8]
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021FBF28(void) {
    // ldr r0, [r0, #0xc]
    // bx lr
    // TODO: decompile
}


void Field3dObject_InitFromModel(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // mov r1, #0
    // mov r2, #0x78
    // add r4, r0, #0
    // bl memset
    // ldr r1, [r5, #8]
    // add r0, r4, #0
    // bl NNS_G3dRenderObjInit
    // mov r0, #1
    // str r0, [r4, #0x6c]
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x60]
    // str r0, [r4, #0x64]
    // str r0, [r4, #0x68]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void Field3dObject_AddAnimation(void) {
    NNS_G3dRenderObjAddAnmObj();
}


void Field3dObject_RemoveAnimation(void) {
    NNS_G3dRenderObjRemoveAnmObj();
}


void Field3dObject_Draw(void) {
    // push {r4, lr}
    // sub sp, #0x48
    // add r4, r0, #0
    // ldr r0, [r4, #0x6c]
    // cmp r0, #0
    // beq _021FBFFC
    // add r0, sp, #0x24
    // bl MTX_Identity33_
    // add r0, r4, #0
    // add r0, #0x70
    // ldrh r0, [r0]
    // ldr r3, _021FC000 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    // bl MTX_RotX33_
    // add r1, sp, #0x24
    // add r0, sp, #0
    // add r2, r1, #0
    // bl MTX_Concat33
    // add r0, r4, #0
    // add r0, #0x74
    // ldrh r0, [r0]
    // ldr r3, _021FC000 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    // bl MTX_RotZ33_
    // add r1, sp, #0x24
    // add r0, sp, #0
    // add r2, r1, #0
    // bl MTX_Concat33
    // add r0, r4, #0
    // add r0, #0x72
    // ldrh r0, [r0]
    // ldr r3, _021FC000 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    // bl MTX_RotY33_
    // add r1, sp, #0x24
    // add r0, sp, #0
    // add r2, r1, #0
    // bl MTX_Concat33
    // add r1, r4, #0
    // add r0, r4, #0
    // add r4, #0x60
    // add r1, #0x54
    // add r2, sp, #0x24
    // add r3, r4, #0
    // bl GF3dRender_DrawModel
    // add sp, #0x48
    // pop {r4, pc}
    // _021FC000: .word FX_SinCosTable_
    // TODO: decompile
}


void Field3dObject_SetActiveFlag(void) {
    ((u32*)r0)[0x6c] = r1;
}


void Field3dObject_GetActiveFlag(void) {
    // ldr r0, [r0, #0x6c]
    // bx lr
    // TODO: decompile
}


void Field3dObject_SetPosEx(void) {
    ((u32*)r0)[0x54] = r1;
    ((u32*)r0)[0x58] = r2;
    ((u32*)r0)[0x5c] = r3;
}


void Field3dObject_SetPos(void) {
    // add r3, r1, #0
    // add r2, r0, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x54
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // bx lr
    // TODO: decompile
}


void Field3dObject_SetXRotation(void) {
    // lsl r2, r2, #1
    // add r0, r0, r2
    // add r0, #0x70
    // strh r1, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021FC030(void) {
    NNS_G3dGetAnmByIdx(r2, 0);
    *((u32*)(r5 + 4)) = r0;
    NNS_G3dAllocAnmObj(r6, *((u32*)(r5 + 4)), *((u32*)(r4 + 8)));
    *((u32*)(r5 + 8)) = r0;
    NNS_G3dAnmObjInit(*((u32*)(r5 + 4)), *((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)));
}

