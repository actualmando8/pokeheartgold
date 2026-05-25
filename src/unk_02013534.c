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
    // ldr r0, [sp]
    // str r0, [sp]
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
    // add r4, #0xc
}





void sub_02013728(void) {
    // str r1, [sp]
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
    // add r4, #0xc
}





void sub_02013794(void) {
    // str r0, [r4]
    // str r0, [r6]
}





void TextOBJ_SetSpritesDrawFlag(void) {
    // add r4, #0xc
}





void sub_020137F0(void) {
    // add r4, #0xc
}





void sub_02013820(void) {
    // add r4, #0xc
}





void TextOBJ_SetPaletteNum(void) {
    // add r4, #0xc
}





void sub_02013880(void) {
    // add r4, #0xc
}





void sub_020138B0(void) {
    // add r4, #0xc
}





void sub_020138E0(void) {
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
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r3, [sp, #0xc]
    // str r5, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
}





void sub_02013A50(void) {
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // add r0, r7, r0
    // str r2, [sp]
    // str r3, [sp, #4]
    // ldr r1, [sp]
    // ldr r0, [sp, #0x20]
    // add r0, r1, r0
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // add r0, r4, r0
    // ldr r0, [sp, #4]
    // add r2, r2, r0
    // ldr r0, [sp, #0x24]
    // add r0, r0, r1
    // add r1, r1, r2
    // ldr r2, [sp, #8]
    // ldr r0, [sp]
    // add r5, r5, r7
}





void sub_02013AC0(void) {
    // strb r1, [r0]
}





void sub_02013AD0(void) {
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
    sub_02013F78(r2);
    sub_02013FC0(*((u32*)(r6 + 0x10)));
    sub_02013AF8(*((u32*)(r5 + 8)), *((u32*)(r5 + 0xc)));
    *((u32*)(r4 + 8)) = r0;
    // str r0, [r4]
    *((u32*)(r4 + 4)) = *((u32*)r5);
    // sub r2, r2, r0
    // sub r6, r0, r3
    *((u32*)(r5 + 0x1c)) = *((u32*)(r5 + 0xc));
    *((u32*)(r5 + 0x18)) = *((u32*)(r5 + 8));
    *((u32*)(r5 + 0x10)) = *((u32*)r5);
    // add r0, r0, r1
    *((u32*)(r5 + 0x14)) = *((u32*)(r5 + 4));
    // add r0, #0x20
    GF_AssertFail(*((u8*)r5), *((u8*)(_020F5F2C + (*((u32*)(r4 + 8)) << 1))), (*((u32*)(r4 + 8)) << 1), *((u8*)(_020F5F2D + (*((u32*)(r4 + 8)) << 1))));
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, r2, r0
    // str r0, [r5]
    *((u32*)(r5 + 0xc)) = r6;
    // add r0, #0x20
    // add r3, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r5, #0x20
    // strb r0, [r5]
}





void sub_02013BD4(void) {
    // str r1, [sp]
    GF_AssertFail();
    // ldr r0, [sp]
    GF_AssertFail();
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    // str r4, [sp, #4]
    // str r4, [sp, #8]
    // str r7, [sp, #0xc]
    // add r0, sp, #0x24
    // strb r4, [r0]
    // ldr r0, [sp]
    // str r4, [sp, #0x2c]
    // str r7, [sp, #0x30]
    // add r7, sp, #4
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp]
    sub_02013AF8();
    // add r0, r0, r1
    // ldr r1, [sp, #4]
    // add r1, r1, r0
    // str r1, [sp, #0x28]
    // ldr r1, [sp, #0x10]
    // sub r1, r1, r0
    // str r1, [sp, #0x34]
    // str r0, [sp, #0x10]
    sub_02013B24(r7, r6, r5);
    // add r2, sp, #0x28
    // add r3, sp, #4
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
}





void sub_02013C5C(void) {
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // and r7, r0
    ObjCharTransfer_GetBlockSizeFromMode(*((u32*)0x04001000), *((u32*)0x04001000));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    NNS_G2dInitImageProxy(r5);
    // str r7, [sp]
    // ldr r0, [sp, #0x30]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x34]
    // ldr r3, [sp, #0x18]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    sub_02013CD0(r4, r5);
    // ldr r0, [sp, #0x14]
    // add r5, #0x24
}





void sub_02013CD0(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x34]
    Heap_AllocAtEnd(*((u8*)(_020F5F2D + (*((u32*)(r1 + 8)) << 1))), (r3 << 5));
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // str r7, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    sub_02013A50(*((u32*)(r6 + 4)), *((u32*)r6));
    DC_FlushRange(r7, r4);
    // ldr r0, [sp, #0x30]
    // ldr r6, [sp, #0x2c]
    GX_LoadOBJ(r7, r6, r4);
    *((u32*)(r5 + 4)) = r6;
    // ldr r6, [sp, #0x2c]
    GXS_LoadOBJ(r7, r6, r4);
    *((u32*)(r5 + 8)) = r6;
    // and r0, r1
    *((u32*)(r5 + 0x20)) = 0x00300010;
    *((u32*)(r5 + 0xc)) = 0x0000FFFF;
    *((u32*)(r5 + 0x10)) = 0x0000FFFF;
    *((u32*)(r5 + 0x14)) = 3;
    *((u32*)(r5 + 0x18)) = 0;
    *((u32*)(r5 + 0x1c)) = 1;
    // ldr r0, [sp, #0x28]
    *((u32*)(r5 + 0x20)) = 1;
    Heap_Free(r7, *((u32*)0x04001000));
    // ldr r0, [sp, #0x2c]
    // add r0, r0, r4
}





void sub_02013D88(void) {
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r7, [sp, #0x30]
    // and r5, r0
    ObjCharTransfer_GetBlockSizeFromMode(*((u32*)0x04001000), *((u32*)0x04001000));
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // str r0, [sp]
    // str r5, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r7, [sp, #8]
    sub_02013DE0(*((u32*)(r6 + 0xc)), 0);
}





void sub_02013DE0(void) {
    // ldr r3, [sp, #0x20]
    // add r0, r0, r5
    // str r3, [sp]
    // str r0, [sp, #4]
    sub_02013A50(r0, *((u8*)(_020F5F2C + (*((u32*)(r1 + 8)) << 1))), *((u8*)(_020F5F2D + (*((u32*)(r1 + 8)) << 1))), *((u32*)r1));
    // add r0, r5, r0
}





void sub_02013E24(void) {
    // and r0, r1
    ObjCharTransfer_GetBlockSizeFromMode(0x00300010, *((u32*)0x04001000));
    // add r7, r1, r5
    // add r3, r3, r5
}





void sub_02013E78(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp]
    // str r0, [r1, r5]
    // add r7, #0x24
    // add r0, r0, r5
    // add r0, r0, r5
    // ldr r0, [sp, #4]
    // add r5, #0xc
}





void sub_02013ECC(void) {
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
}





void sub_02013F78(void) {
}





void sub_02013F94(void) {
}





void sub_02013FA8(void) {
}





void sub_02013FC0(void) {
}





void sub_02013FD0(void) {
}




