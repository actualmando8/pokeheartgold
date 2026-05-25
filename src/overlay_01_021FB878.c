/* Decompiled from asm/overlay_01_021FB878.s */
#include "global.h"

void ov01_021FB878(void) {
    // add r1, r1, r2
    // sub r1, r1, r0
}




void ov01_021FB888(void) {
    Heap_Alloc(4, 0x000008C4);
    Heap_AllocAtEnd(4, 0x10);
    // str r0, [r4, r1]
    // str r5, [r0]
    // sub r1, #8
    *((u32*)(*((u32*)(r4 + 0x000008B8)) + 4)) = 0;
    // add r0, r4, r1
    ReadWholeNarcMemberByIdPair(*((u32*)(r4 + 0x000008B8)), 0x2a, r5);
    NARC_New(0x6b, 4);
    // str r0, [r4, r1]
    NARC_New(0x28, 4);
    NARC_New(0x6c, 4);
    // str r0, [r4, r1]
    NARC_New(0x94, 4);
    *((u32*)(*((u32*)(r4 + 0x000008B8)) + 8)) = r0;
}




void ov01_021FB904(void) {
    // ldr r0, [r0, r1]
}




void ov01_021FB90C(void) {
    // add r0, r2, r1
}




void ov01_021FB934(void) {
}




void ov01_021FB944(void) {
    NARC_Delete(*((u32*)(*((u32*)r0) + (0x23 << 6))), *((u32*)r0));
    ov01_021EA7E0(*((u32*)(*((u32*)r5) + 0x000008AC)), *((u32*)r5));
    // add r0, r0, r4
    Heap_Free(*((u32*)(*((u32*)r5) + 4)));
    Heap_Free(*((u32*)(*((u32*)r5) + 0x000008BC)), *((u32*)r5));
    Heap_Free(*((u32*)(*((u32*)r5) + 0x0000089C)), *((u32*)r5));
    // str r2, [r1, r0]
    Heap_Free(*((u32*)(*((u32*)r5) + (0x0000089C + 4))), *((u32*)r5), 0);
    // str r2, [r1, r0]
    Heap_Free(*((u32*)r5), *((u32*)r5), 0);
    // str r0, [r5]
}




void ov01_021FB9CC(void) {
}




void ov01_021FB9E0(void) {
}




void ov01_021FB9F4(void) {
    // ldr r0, [r0, r1]
    // nop
    // _021FB9FC: .word 0x000008AC
}




void ov01_021FBA00(void) {
    // ldrb r0, [r0, r1]
    // cmp r0, #0
    // beq _021FBA0C
    // _021FBA10: .word 0x000008B7
}




void ov01_021FBA14(void) {
    // ldrb r0, [r0, r1]
    // cmp r0, #0
    // beq _021FBA26
    // cmp r0, #1
    // beq _021FBA2A
    // cmp r0, #2
    // beq _021FBA2E
    // b _021FBA32
    // nop
    // _021FBA38: .word 0x000008B7
}




void ov01_021FBA3C(void) {
    // str r1, [sp, #0xc]
    // ldr r0, [sp, #0x150]
    // sub r1, #8
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x150]
    AllocAndReadWholeNarcMemberByIdPair(0x2b, *((u16*)(r0 + 0x000008B8)), 4);
    // str r0, [r5, r1]
    *((u16*)(r6 + 0xc)) = *((u16*)*((u32*)(r5 + 0x000008BC)));
    GF_AssertFail(0x00000226, *((u16*)*((u32*)(r5 + 0x000008BC))));
    AllocAndReadWholeNarcMemberByIdPair(0x2c, *((u16*)(r5 + 0x000008B2)), 4);
    // str r0, [r5, r1]
    // add r1, #0x14
    AllocAndReadWholeNarcMemberByIdPair(0x46, *((u16*)(r5 + 0x0000089C)), 4);
    // str r0, [r5, r1]
    NNS_G3dGetTex(*((u32*)(r5 + ((0x8a << 4) - 4))), (0x8a << 4));
    // str r0, [r5, r1]
    NNS_G3dGetTex(*((u32*)(r5 + (0x000008A4 - 4))), 0x000008A4);
    // str r0, [r5, r1]
    // str r2, [r5, r0]
    GF3dRender_AllocAndLoadTexResources(*((u32*)(r5 + 0x000008A4)), 0x000008A8, 0);
    GF_AssertFail();
    // add r1, #8
    ov01_021FB878(*((u32*)(r5 + 0x0000089C)), *((u32*)(r5 + 0x0000089C)));
    GF3dRender_AllocAndLoadTexResources(*((u32*)(r5 + 0x000008A8)));
    GF_AssertFail();
    // add r1, #8
    ov01_021FB878(*((u32*)(r5 + (0x8a << 4))), *((u32*)(r5 + (0x8a << 4))));
    ov01_0220463C(r4, *((u16*)(r5 + 0x000008B4)));
    *((u32*)(r5 + 4)) = 0;
    // str r1, [r5, r0]
    // ldr r0, [sp, #0x10]
    ov01_021E8B9C(0x000008AC, 0, (0 + 1), (r5 + 4));
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // add r0, r1, r0
    // add r0, r5, r0
    // str r0, [sp, #0x14]
    GF_AssertFail(*((u32*)((*((u16*)(0x000008BC + 2)) << 2) + 4)), *((u32*)(r5 + 0x000008BC)));
    // add r7, r5, r0
    NARC_AllocAndReadWholeMember(*((u32*)(r6 + 8)), r4, 4);
    *((u32*)(r7 + 4)) = r0;
    // add r2, sp, #0x24
    NARC_ReadWholeMember(*((u32*)(r5 + (0x23 << 6))), r4);
    GF3dRender_BindModelSet(*((u32*)(r7 + 4)), *((u32*)(r5 + 0x000008A8)));
    GF_AssertFail();
    // add r0, sp, #0x24
    // ldr r0, [sp, #0xc]
    ov01_022040A4(*((u8*)(r0 + 3)), r4);
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    NNS_G3dGetMdlSet(*((u32*)(r0 + 4)));
    // add r1, #8
    // add r1, r1, r2
    // add r1, r0, r1
    // add r0, sp, #0x24
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x150]
    // str r0, [sp, #8]
    ov01_021E8F3C(r4, 0, r7, *((u32*)(r5 + 0x000008A8)));
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    NARC_AllocAndReadWholeMember(*((u32*)(r6 + 8)), 0, 4);
    *((u32*)(r5 + 4)) = r0;
    // ldr r0, [sp, #0xc]
    ov01_022040A4(0);
    NNS_G3dGetTex(*((u32*)(r5 + 4)));
    GF3dRender_AllocAndLoadTexResources();
    GF_AssertFail();
    GF3dRender_BindModelSet(*((u32*)(r5 + 4)), r4);
    GF_AssertFail();
    NARC_Delete(*((u32*)(r6 + 8)));
    // and r1, r0
    // strh r0, [r2]
    G3X_SetEdgeColorTable(ov01_02208BA0, *((u16*)0x04000060), 0x04000060);
    G3X_SetEdgeColorTable(ov01_02208BB0);
    ov01_021EA724();
    // str r0, [r5, r1]
    // add r1, #0xa
    // add r0, sp, #0x3c
    sprintf(*((u8*)(r5 + 0x000008AC)), ov01_02209A88);
    sprintf(ov01_02209AB4);
    // add r0, sp, #0x3c
    ov01_021EA73C(*((u32*)(r5 + 0x000008AC)));
    Heap_Free(*((u32*)(r5 + 0x000008B8)));
    // str r1, [r5, r0]
}




void Field3dModel_LoadFromFilesystem(void) {
    // str r5, [sp]
    GfGfxLoader_LoadFromNarc(r1, r2, 0);
    // str r0, [r4]
    NNS_G3dGetMdlSet();
    *((u32*)(r4 + 4)) = r0;
    // add r2, #8
    // add r1, r2, r1
    // add r0, r0, r1
    *((u32*)(r4 + 8)) = 0;
    NNS_G3dGetTex(*((u32*)r4), *((u32*)0), r0);
    *((u32*)(r4 + 0xc)) = r0;
    SysTask_CreateOnVWaitQueue(ov01_021FBD8C, r4, (1 << 0xa));
}




void ov01_021FBD38(void) {
    // str r1, [r4]
    NNS_G3dGetMdlSet(r1);
    *((u32*)(r4 + 4)) = r0;
    // add r2, #8
    // add r1, r2, r1
    // add r0, r0, r1
    *((u32*)(r4 + 8)) = 0;
    NNS_G3dGetTex(*((u32*)r4), *((u32*)0), r0);
    *((u32*)(r4 + 0xc)) = r0;
    SysTask_CreateOnVWaitQueue(ov01_021FBD8C, r4, (1 << 0xa));
}




void ov01_021FBD8C(void) {
}




void Field3dModel_Unload(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    NNS_G3dTexReleaseTexKey(*((u32*)(r0 + 0xc)));
    // ldr r0, [sp, #4]
    // blx r1
    // ldr r0, [sp]
    // blx r1
    NNS_G3dPlttReleasePlttKey(*((u32*)(r4 + 0xc)), *((u32*)NNS_GfdDefaultFuncFreeTexVram));
    // blx r1
    Heap_Free(*((u32*)r4), *((u32*)NNS_GfdDefaultFuncFreePlttVram));
    // strb r0, [r4]
}




void ov01_021FBDFC(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    NNS_G3dTexReleaseTexKey(*((u32*)(r0 + 0xc)));
    // ldr r0, [sp, #4]
    // blx r1
    // ldr r0, [sp]
    // blx r1
    NNS_G3dPlttReleasePlttKey(*((u32*)(r4 + 0xc)), *((u32*)NNS_GfdDefaultFuncFreeTexVram));
    // blx r1
    // strb r0, [r4]
}




void Field3dModelAnimation_LoadFromFilesystem(void) {
    // ldr r3, [sp, #0x18]
    // str r6, [sp]
    // ldr r3, [sp, #0x1c]
}




void ov01_021FBE70(void) {
}




void Field3dModelAnimation_Unload(void) {
    // strb r0, [r4]
}




void Field3dModelAnimation_FrameAdvanceAndLoop(void) {
    // add r0, r0, r1
    // add r3, #0xc
    // add r0, r0, r1
    // bpl _021FBEDC
    // add r0, r0, r2
    // str r0, [r3]
    // str r1, [r0]
}




void Field3dModelAnimation_FrameAdvanceAndCheck(void) {
    // add r1, r3, r1
    // add r1, r3, r1
    // bmi _021FBF0E
    // str r1, [r0]
}




void Field3dModelAnimation_FrameSet(void) {
    // str r1, [r0]
}




void ov01_021FBF28(void) {
}




void Field3dObject_InitFromModel(void) {
}




void Field3dObject_AddAnimation(void) {
}




void Field3dObject_RemoveAnimation(void) {
}




void Field3dObject_Draw(void) {
    // add r0, sp, #0x24
    MTX_Identity33_(*((u32*)(r0 + 0x6c)));
    // add r0, #0x70
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotX33_(*((u16*)r4), ((*((u16*)r4) << 1) << 1), (((*((u16*)r4) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0x24
    // add r0, sp, #0
    MTX_Concat33(r1);
    // add r0, #0x74
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotZ33_(*((u16*)r4), ((*((u16*)r4) << 1) << 1), (((*((u16*)r4) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0x24
    // add r0, sp, #0
    MTX_Concat33(r1);
    // add r0, #0x72
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotY33_(*((u16*)r4), ((*((u16*)r4) << 1) << 1), (((*((u16*)r4) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0x24
    // add r0, sp, #0
    MTX_Concat33(r1);
    // add r4, #0x60
    // add r1, #0x54
    // add r2, sp, #0x24
    GF3dRender_DrawModel(r4, r4, r4);
}




void Field3dObject_SetActiveFlag(void) {
}




void Field3dObject_GetActiveFlag(void) {
}




void Field3dObject_SetPosEx(void) {
}




void Field3dObject_SetPos(void) {
    // ldmia r3!, {r0, r1}
    // add r2, #0x54
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}




void Field3dObject_SetXRotation(void) {
    // add r0, r0, r2
    // add r0, #0x70
    // strh r1, [r0]
}




void ov01_021FC030(void) {
}



