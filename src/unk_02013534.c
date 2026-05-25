/* Decompiled from asm/unk_02013534.s */
#include "global.h"

UnkStruct_02013534 * FontSystem_NewInit(void) {
    // str r0, [sp, #4]
    Heap_Alloc(r1, 0x68);
    // str r0, [sp, #8]
    GF_AssertFail();
    // ldr r4, [sp, #8]
    // ldr r5, [sp, #8]
    // add r4, #0x30
    // str r7, [sp]
    GfGfxLoader_GetCellBank(0x23, 0, 0, r4);
    // str r0, [r5]
    GF_AssertFail();
    // ldr r0, [sp, #4]
    // mul r4, r1
    Heap_Alloc(r7, r0);
    // ldr r1, [sp, #8]
    *((u32*)(r1 + 0x60)) = r0;
    GF_AssertFail();
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #8]
    *((u32*)(r0 + 0x64)) = r1;
    memset(*((u32*)(r0 + 0x60)), 0, r4);
    // ldr r0, [sp, #8]
}




void sub_020135AC(void) {
    GF_AssertFail();
    Heap_Free(*((u32*)r6));
    Heap_Free(*((u32*)(r6 + 0x60)));
    Heap_Free(r6);
}




TextOBJ * sub_020135D8(void) {
    GF_AssertFail();
    sub_02013AD0(*((u32*)r5));
    GF_AssertFail();
    // add r3, sp, #8
    *((u32*)(r4 + 8)) = *((u32*)(r5 + 0x10));
    *((u32*)(r4 + 0xc)) = *((u32*)(r5 + 0x18));
    *((u32*)(r4 + 0x10)) = *((u32*)(r5 + 0x1c));
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    sub_02013BD4(*((u8*)(*((u32*)(r5 + 4)) + 7)), *((u8*)(*((u32*)(r5 + 4)) + 8)), *((u32*)(r5 + 0x2c)));
    // mul r1, r6
    Heap_AllocAtEnd(*((u32*)(r5 + 0x2c)), 0x24);
    // mul r1, r6
    Heap_Alloc(*((u32*)(r5 + 0x2c)), 0xc);
    // str r0, [r4]
    *((u32*)(r4 + 4)) = r6;
    // add r1, sp, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_02013C5C(*((u32*)(r5 + 4)), r7, *((u32*)(r5 + 0x14)));
    // add r1, sp, #8
    sub_02013E78(r5, r7, r4);
    Heap_Free(r7);
    // add r0, sp, #8
    sub_02013FA8();
}




void FontOAM_Delete(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)r4));
    sub_02013ECC(r4);
    Heap_Free(*((u32*)r4));
    sub_02013AC0(r4);
}




int sub_02013688(void) {
    // add r3, sp, #0
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    sub_02013BD4(*((u8*)(r0 + 7)), *((u8*)(r0 + 8)));
    // add r0, sp, #0
    sub_02013E24(r4);
    // add r0, sp, #0
    sub_02013FA8();
}




void sub_020136B4(void) {
    // str r1, [sp]
    GF_AssertFail();
    // ldr r0, [sp]
    *((u32*)(r5 + 0xc)) = r0;
    *((u32*)(r5 + 0x10)) = r7;
    // str r0, [sp]
    Sprite_GetMatrixPtr(*((u32*)(r5 + 8)));
    // ldr r1, [sp]
    // add r1, r1, r2
    // str r1, [sp]
    // add r7, r7, r0
    // str r6, [sp, #0xc]
    // add r0, r0, r4
    // ldr r0, [sp]
    // add r0, r0, r1
    // str r0, [sp, #4]
    // add r1, sp, #4
    // add r0, r0, r4
    // add r0, r7, r0
    // str r0, [sp, #8]
    // ldr r0, [r0, r4]
    Sprite_SetMatrix(*((u32*)r5), (*((u32*)(*((u32*)r5) + 4)) << 0xc), *((u32*)r0));
    // add r4, #0xc
}




void sub_02013728(void) {
    GF_AssertFail();
    // str r1, [sp]
    Sprite_GetMatrixPtr(*((u32*)(r5 + 8)), *((u32*)(r5 + 0x10)));
    // ldr r1, [sp]
    // str r6, [sp, #0xc]
    // add r7, r7, r0
    // add r1, r1, r2
    // str r1, [sp]
    // add r0, r0, r4
    // ldr r0, [sp]
    // add r0, r0, r1
    // str r0, [sp, #4]
    // add r1, sp, #4
    // add r0, r0, r4
    // add r0, r7, r0
    // str r0, [sp, #8]
    // ldr r0, [r0, r4]
    Sprite_SetMatrix(*((u32*)r5), (*((u32*)(*((u32*)r5) + 4)) << 0xc), *((u32*)r0));
    // add r4, #0xc
}




void sub_02013794(void) {
    GF_AssertFail();
    GF_AssertFail();
    GF_AssertFail();
    // str r0, [r4]
    // str r0, [r6]
}




void TextOBJ_SetSpritesDrawFlag(void) {
    GF_AssertFail();
    // ldr r0, [r0, r4]
    Sprite_SetDrawFlag(*((u32*)r5), r7);
    // add r4, #0xc
}




void sub_020137F0(void) {
    GF_AssertFail();
    // ldr r0, [r0, r4]
    Sprite_SetPriority(*((u32*)r5), r7);
    // add r4, #0xc
}




void sub_02013820(void) {
    GF_AssertFail();
    // ldr r0, [r0, r4]
    Sprite_SetDrawPriority(*((u32*)r5), r7);
    // add r4, #0xc
}




void TextOBJ_SetPaletteNum(void) {
    GF_AssertFail();
    // ldr r0, [r0, r4]
    Sprite_SetPaletteOverride(*((u32*)r5), r7);
    // add r4, #0xc
}




void sub_02013880(void) {
    GF_AssertFail();
    // ldr r0, [r0, r4]
    Sprite_SetPalIndexRespectVramOffset(*((u32*)r5), r7);
    // add r4, #0xc
}




void sub_020138B0(void) {
    GF_AssertFail();
    // ldr r0, [r0, r4]
    Sprite_SetPalOffset(*((u32*)r5), r7);
    // add r4, #0xc
}




void sub_020138E0(void) {
    GF_AssertFail();
    // ldr r0, [r0, r4]
    Sprite_SetPalOffsetRespectVramOffset(*((u32*)r5), r7);
    // add r4, #0xc
}




void sub_02013910(void) {
}




void sub_02013938(void) {
}




void sub_02013948(void) {
}




TextOBJ * TextOBJ_Create(void) {
    GF_AssertFail();
    sub_02013AD0(*((u32*)r5));
    GF_AssertFail();
    *((u32*)(r4 + 8)) = *((u32*)(r5 + 0x10));
    *((u32*)(r4 + 0xc)) = *((u32*)(r5 + 0x18));
    *((u32*)(r4 + 0x10)) = *((u32*)(r5 + 0x1c));
    // mul r1, r2
    Heap_AllocAtEnd(*((u32*)(r5 + 0x2c)), 0x24, *((u32*)(r6 + 0x14)));
    // mul r1, r2
    Heap_Alloc(*((u32*)(r5 + 0x2c)), 0xc, *((u32*)(r6 + 0x14)));
    // str r0, [r4]
    *((u32*)(r4 + 4)) = *((u32*)(r6 + 0x14));
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_02013C5C(*((u32*)(r5 + 4)), r6, r7, *((u32*)(r5 + 0x14)));
    sub_02013E78(r5, r6, r7, r4);
    Heap_Free(r7);
}




void TextOBJ_Destroy(void) {
}




void TextOBJ_CopyFromBGWindow(void) {
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    Sprite_GetVramType(*((u32*)*((u32*)r0)));
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    sub_02013948(r7);
    Heap_AllocAtEnd(r5, r0);
    memset(0, r6);
    // ldr r0, [sp, #4]
    // ldr r3, [sp, #0xc]
    // str r5, [sp]
    sub_02013D88(r4, r7);
    DC_FlushRange(r4, r6);
    // ldr r0, [sp, #8]
    Sprite_GetImageProxy();
    // ldr r1, [sp, #0xc]
    NNS_G2dGetImageLocation(1);
    GX_LoadOBJ(r4, r0, r6);
    NNS_G2dGetImageLocation(2);
    GXS_LoadOBJ(r4, r0, r6);
    Heap_Free(r4);
}




void sub_02013A50(void) {
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // add r0, r7, r0
    // str r2, [sp]
    // str r3, [sp, #4]
    GF_AssertFail(r3, *((u8*)(r0 + 7)));
    // ldr r1, [sp]
    // ldr r0, [sp, #0x20]
    // add r0, r1, r0
    GF_AssertFail(*((u8*)(r6 + 8)));
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // add r0, r4, r0
    // mul r2, r0
    // ldr r0, [sp, #4]
    // add r2, r2, r0
    // ldr r0, [sp, #0x24]
    // add r0, r0, r1
    // add r1, r1, r2
    // ldr r2, [sp, #8]
    memcpy((r7 << 5), *((u32*)(r6 + 0xc)), (*((u8*)(r6 + 7)) << 5));
    // ldr r0, [sp]
    // add r5, r5, r7
}




void sub_02013AC0(void) {
    // strb r1, [r0]
}




void sub_02013AD0(void) {
    // mul r0, r2
    // add r0, r1, r0
    // add r3, #0x14
}




void sub_02013AF8(void) {
    // push {r3, r4}
    // ldr r4, _02013B20 ; =_020F5F2C
    // mov r3, #0
    // ldrb r2, [r4]
    // cmp r2, r0
    // bgt _02013B10
    // ldrb r2, [r4, #1]
    // cmp r2, r1
    // bgt _02013B10
    // add r0, r3, #0
    // pop {r3, r4}
    // bx lr
    // add r3, r3, #1
    // add r4, r4, #2
    // cmp r3, #0xc
    // blt _02013AFE
    // mov r0, #0xc
    // pop {r3, r4}
    // bx lr
    // nop
    // _02013B20: .word _020F5F2C
    // TODO: decompile
}




void sub_02013B24(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // add r0, r2, #0
    // bl sub_02013F78
    // ldr r1, [r6, #0x10]
    // add r4, r0, #0
    // bl sub_02013FC0
    // ldr r0, [r5, #8]
    // ldr r1, [r5, #0xc]
    // bl sub_02013AF8
    // str r0, [r4, #8]
    // ldr r0, [r5, #4]
    // ldr r1, _02013BCC ; =_020F5F2C
    // str r0, [r4]
    // ldr r0, [r5]
    // ldr r6, _02013BD0 ; =_020F5F2D
    // str r0, [r4, #4]
    // ldr r0, [r4, #8]
    // ldr r2, [r5, #8]
    // lsl r3, r0, #1
    // ldrb r0, [r1, r3]
    // ldrb r3, [r6, r3]
    // sub r2, r2, r0
    // ldr r0, [r5, #0xc]
    // sub r6, r0, r3
    // cmp r2, #0
    // ble _02013B8C
    // str r0, [r5, #0x1c]
    // str r2, [r5, #0x18]
    // ldr r0, [r5]
    // str r0, [r5, #0x10]
    // ldr r2, [r4, #8]
    // ldr r0, [r5, #4]
    // lsl r2, r2, #1
    // ldrb r1, [r1, r2]
    // add r0, r0, r1
    // str r0, [r5, #0x14]
    // add r0, r5, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02013B84
    // bl GF_AssertFail
    // add r0, r5, #0
    // mov r1, #1
    // add r0, #0x20
    // strb r1, [r0]
    // cmp r6, #0
    // ble _02013BA2
    // ldr r0, [r4, #8]
    // ldr r2, [r5]
    // lsl r1, r0, #1
    // ldr r0, _02013BD0 ; =_020F5F2D
    // ldrb r0, [r0, r1]
    // add r0, r2, r0
    // str r0, [r5]
    // str r6, [r5, #0xc]
    // b _02013BC6
    // add r0, r5, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02013BC2
    // add r3, r5, #0
    // add r3, #0x10
    // add r2, r5, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, #0
    // add r5, #0x20
    // strb r0, [r5]
    // b _02013BC6
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _02013BCC: .word _020F5F2C
    // _02013BD0: .word _020F5F2D
    // TODO: decompile
}




void sub_02013BD4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r7, r0, #0
    // str r1, [sp]
    // add r5, r2, #0
    // add r6, r3, #0
    // cmp r7, #0
    // bne _02013BE8
    // bl GF_AssertFail
    // ldr r0, [sp]
    // cmp r0, #0
    // bne _02013BF2
    // bl GF_AssertFail
    // ldr r0, [sp]
    // mov r4, #0
    // str r0, [sp, #0x10]
    // str r4, [sp, #4]
    // str r4, [sp, #8]
    // str r7, [sp, #0xc]
    // add r0, sp, #0x24
    // strb r4, [r0]
    // ldr r0, [sp]
    // str r4, [sp, #0x2c]
    // str r7, [sp, #0x30]
    // cmp r0, #0
    // beq _02013C50
    // add r7, sp, #4
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp]
    // bl sub_02013AF8
    // lsl r1, r0, #1
    // ldr r0, _02013C58 ; =_020F5F2C
    // add r0, r0, r1
    // ldrb r0, [r0, #1]
    // ldr r1, [sp, #4]
    // add r1, r1, r0
    // str r1, [sp, #0x28]
    // ldr r1, [sp, #0x10]
    // sub r1, r1, r0
    // str r1, [sp, #0x34]
    // str r0, [sp, #0x10]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // add r4, r4, #1
    // bl sub_02013B24
    // cmp r0, #0
    // beq _02013C2C
    // add r2, sp, #0x28
    // add r3, sp, #4
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // cmp r0, #0
    // bne _02013C0E
    // add r0, r4, #0
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02013C58: .word _020F5F2C
    // TODO: decompile
}




void sub_02013C5C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // add r5, r2, #0
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // add r6, r3, #0
    // cmp r0, #1
    // bne _02013C7E
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r1, [r0]
    // b _02013C82
    // ldr r0, _02013CC8 ; =0x04001000
    // ldr r1, [r0]
    // ldr r0, _02013CCC ; =0x00300010
    // add r7, r1, #0
    // and r7, r0
    // add r0, r7, #0
    // bl ObjCharTransfer_GetBlockSizeFromMode
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // ldr r4, [r0, #0xc]
    // cmp r4, r0
    // beq _02013CC2
    // add r0, r5, #0
    // bl NNS_G2dInitImageProxy
    // str r7, [sp]
    // ldr r0, [sp, #0x30]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x34]
    // ldr r3, [sp, #0x18]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r1, r4, #0
    // add r2, r5, #0
    // bl sub_02013CD0
    // add r6, r0, #0
    // ldr r4, [r4, #0xc]
    // ldr r0, [sp, #0x14]
    // add r5, #0x24
    // cmp r4, r0
    // bne _02013C98
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02013CC8: .word 0x04001000
    // _02013CCC: .word 0x00300010
    // TODO: decompile
}




void sub_02013CD0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r6, r1, #0
    // str r0, [sp, #8]
    // ldr r0, [r6, #8]
    // add r5, r2, #0
    // lsl r1, r0, #1
    // ldr r0, _02013D74 ; =_020F5F2C
    // ldrb r0, [r0, r1]
    // str r0, [sp, #0x10]
    // ldr r0, _02013D78 ; =_020F5F2D
    // ldrb r0, [r0, r1]
    // ldr r1, [sp, #0x10]
    // add r4, r1, #0
    // mul r4, r0
    // str r0, [sp, #0xc]
    // cmp r4, r3
    // bge _02013CF6
    // add r4, r3, #0
    // lsl r4, r4, #5
    // ldr r0, [sp, #0x34]
    // add r1, r4, #0
    // bl Heap_AllocAtEnd
    // add r7, r0, #0
    // ldr r0, [r6, #4]
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // str r7, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    // ldr r3, [r6]
    // bl sub_02013A50
    // add r0, r7, #0
    // add r1, r4, #0
    // bl DC_FlushRange
    // ldr r0, [sp, #0x30]
    // cmp r0, #1
    // bne _02013D38
    // ldr r6, [sp, #0x2c]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl GX_LoadOBJ
    // mov r0, #1
    // str r6, [r5, #4]
    // lsl r0, r0, #0x1a
    // ldr r1, [r0]
    // b _02013D4A
    // ldr r6, [sp, #0x2c]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl GXS_LoadOBJ
    // ldr r0, _02013D7C ; =0x04001000
    // str r6, [r5, #8]
    // ldr r1, [r0]
    // ldr r0, _02013D80 ; =0x00300010
    // and r0, r1
    // str r0, [r5, #0x20]
    // ldr r0, _02013D84 ; =0x0000FFFF
    // str r0, [r5, #0xc]
    // str r0, [r5, #0x10]
    // mov r0, #3
    // str r0, [r5, #0x14]
    // mov r0, #0
    // str r0, [r5, #0x18]
    // mov r0, #1
    // str r0, [r5, #0x1c]
    // ldr r0, [sp, #0x28]
    // str r0, [r5, #0x20]
    // add r0, r7, #0
    // bl Heap_Free
    // ldr r0, [sp, #0x2c]
    // add r0, r0, r4
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02013D74: .word _020F5F2C
    // _02013D78: .word _020F5F2D
    // _02013D7C: .word 0x04001000
    // _02013D80: .word 0x00300010
    // _02013D84: .word 0x0000FFFF
    // TODO: decompile
}




void sub_02013D88(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r6, r2, #0
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r7, [sp, #0x30]
    // cmp r3, #1
    // bne _02013DA0
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r1, [r0]
    // b _02013DA4
    // ldr r0, _02013DD8 ; =0x04001000
    // ldr r1, [r0]
    // ldr r0, _02013DDC ; =0x00300010
    // add r5, r1, #0
    // and r5, r0
    // add r0, r5, #0
    // bl ObjCharTransfer_GetBlockSizeFromMode
    // ldr r4, [r6, #0xc]
    // str r0, [sp, #0x14]
    // mov r3, #0
    // cmp r4, r6
    // beq _02013DD4
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // str r0, [sp]
    // str r5, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r7, [sp, #8]
    // add r1, r4, #0
    // bl sub_02013DE0
    // ldr r4, [r4, #0xc]
    // add r3, r0, #0
    // cmp r4, r6
    // bne _02013DBA
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _02013DD8: .word 0x04001000
    // _02013DDC: .word 0x00300010
    // TODO: decompile
}




void sub_02013DE0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r1, #0
    // ldr r1, [r6, #8]
    // add r7, r0, #0
    // add r0, r2, #0
    // lsl r2, r1, #1
    // ldr r1, _02013E1C ; =_020F5F2C
    // add r5, r3, #0
    // ldrb r1, [r1, r2]
    // ldr r3, _02013E20 ; =_020F5F2D
    // ldrb r2, [r3, r2]
    // add r4, r1, #0
    // ldr r3, [sp, #0x20]
    // mul r4, r2
    // cmp r4, r3
    // bge _02013E04
    // add r4, r3, #0
    // ldr r3, [r6, #4]
    // add r0, r0, r5
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r3, [r6]
    // add r0, r7, #0
    // bl sub_02013A50
    // lsl r0, r4, #5
    // add r0, r5, r0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02013E1C: .word _020F5F2C
    // _02013E20: .word _020F5F2D
    // TODO: decompile
}




void sub_02013E24(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // cmp r1, #1
    // bne _02013E34
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r1, [r0]
    // b _02013E38
    // ldr r0, _02013E6C ; =0x04001000
    // ldr r1, [r0]
    // ldr r0, _02013E70 ; =0x00300010
    // and r0, r1
    // bl ObjCharTransfer_GetBlockSizeFromMode
    // ldr r2, [r4, #0xc]
    // mov r3, #0
    // cmp r2, r4
    // beq _02013E66
    // ldr r1, _02013E74 ; =_020F5F2C
    // ldr r5, [r2, #8]
    // lsl r5, r5, #1
    // add r7, r1, r5
    // ldrb r6, [r1, r5]
    // ldrb r5, [r7, #1]
    // mul r5, r6
    // cmp r5, r0
    // bge _02013E5C
    // add r5, r0, #0
    // ldr r2, [r2, #0xc]
    // lsl r5, r5, #5
    // add r3, r3, r5
    // cmp r2, r4
    // bne _02013E4A
    // add r0, r3, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02013E6C: .word 0x04001000
    // _02013E70: .word 0x00300010
    // _02013E74: .word _020F5F2C
    // TODO: decompile
}




void sub_02013E78(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp]
    sub_02013EF0(r1, *((u32*)(r1 + 0xc)), r2);
    // str r0, [r1, r5]
    // ldr r0, [r0, r5]
    GF_AssertFail(*((u32*)r6), *((u32*)r6));
    // add r7, #0x24
    // add r0, r0, r5
    *((u32*)(*((u32*)r6) + 4)) = (*((u32*)r4) << 3);
    // add r0, r0, r5
    *((u32*)(*((u32*)r6) + 8)) = (*((u32*)(r4 + 4)) << 3);
    // ldr r0, [sp, #4]
    // add r5, #0xc
}




void sub_02013ECC(void) {
    // ldr r0, [r0, r4]
    Sprite_Delete(*((u32*)r0));
    // add r4, #0xc
}




void sub_02013EF0(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r1, r2, r1
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x20
    // strb r2, [r1]
    // str r1, [sp, #0x24]
    // add r1, sp, #0
    // str r1, [sp, #0x28]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // str r1, [sp, #0x40]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    Sprite_GetMatrixPtr(*((u32*)(r0 + 0x10)), *((u32*)(r0 + 0x2c)), *((u32*)(r0 + 0x20)));
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x2c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, r2, r1
    // ldr r0, [sp, #0x2c]
    // add r0, r0, r1
    // str r0, [sp, #0x2c]
    // add r1, r2, r1
    // ldr r0, [sp, #0x30]
    // add r0, r0, r1
    // str r0, [sp, #0x30]
    // add r0, sp, #0x24
    Sprite_Create(*((u32*)r0), ((*((u32*)(r4 + 4)) << 3) << 0xc), *((u32*)(r5 + 0x1c)), r0);
}




void sub_02013F78(void) {
    Heap_AllocAtEnd(0x14);
    GF_AssertFail();
    *((u32*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 0x10)) = 0;
}




void sub_02013F94(void) {
    GF_AssertFail();
    Heap_Free(r4);
}




void sub_02013FA8(void) {
}




void sub_02013FC0(void) {
}




void sub_02013FD0(void) {
}



