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
    *((u32*)sp) = r1;
    *((u32*)sp) = *((u32*)sp);
    *((u32*)sp) = (*((u32*)sp) + r2);
    *((u32*)(sp + 0xc)) = r6;
    *((u32*)(sp + 4)) = (*((u32*)sp) + (*((u32*)sp) + r2));
    *((u32*)(sp + 8)) = ((r7 + *((u32*)sp)) + ((*((u32*)sp) + (*((u32*)sp) + r2)) + r4));
}





void sub_02013728(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 0xc)) = r6;
    *((u32*)sp) = (*((u32*)sp) + r2);
    *((u32*)(sp + 4)) = (*((u32*)sp) + (*((u32*)sp) + r2));
    *((u32*)(sp + 8)) = ((r7 + r0) + ((*((u32*)sp) + (*((u32*)sp) + r2)) + r4));
}





void sub_02013794(void) {
    *((u32*)r4) = r0;
    *((u32*)r6) = r0;
}





void TextOBJ_SetSpritesDrawFlag(void) {
}





void sub_020137F0(void) {
}





void sub_02013820(void) {
}





void TextOBJ_SetPaletteNum(void) {
}





void sub_02013880(void) {
}





void sub_020138B0(void) {
}





void sub_020138E0(void) {
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
    *((u32*)(sp + 4)) = r2;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r5;
}





void sub_02013A50(void) {
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 0x24)) = *((u32*)(sp + 0x24));
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = *((u32*)sp);
}





void sub_02013AC0(void) {
    *((u8*)r0) = r1;
}





void sub_02013AD0(void) {
}





/* Address: 0x02013AF8
 * Searches a table of byte pairs for matching values.
 */
u32 sub_02013AF8(u32 a1, u32 a2) {
    u32 i;
    
    for (i = 0; i < 0xC; i++) {
        u8 lo = *((u8*)(_020F5F2C + i * 2));
        u8 hi = *((u8*)(_020F5F2C + i * 2 + 1));
        if (lo <= a1 && hi <= a2)
            return i;
    }
    
    return 0xC;
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
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0x14)) = r1;
    *((u32*)(sp + 0x30)) = *((u32*)(sp + 0x30));
    *((u32*)(sp + 0x34)) = *((u32*)(sp + 0x34));
    // and r7, r0
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x30));
    *((u32*)sp) = r7;
    *((u32*)(sp + 4)) = r6;
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x30));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x34));
}





void sub_02013CD0(void) {
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = *((u32*)(sp + 0x34));
    *((u32*)(sp + 4)) = r7;
    // and r0, r1
}





void sub_02013D88(void) {
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r1;
    // and r5, r0
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)sp) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 4)) = r5;
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x30));
}





void sub_02013DE0(void) {
    *((u32*)sp) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 4)) = (r0 + r5);
}





void sub_02013E24(void) {
    // and r0, r1
}





void sub_02013E78(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(r1 + r5)) = *((u32*)sp);
}





void sub_02013ECC(void) {
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




