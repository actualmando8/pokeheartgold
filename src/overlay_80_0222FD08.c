/* Decompiled from asm/overlay_80_0222FD08.s */
#include "global.h"

void ov80_0222FD08(void) {
    // str r3, [sp]
    Heap_Alloc(0xb, 0x00000708);
    // str r0, [r1]
    MI_CpuFill8(0, 0x00000708);
    sub_0203094C(r4);
    // str r0, [r5, r1]
    // str r4, [r5, r0]
    // str r0, [r5]
    SaveArray_Party_Alloc(0xb, _0223DD40);
    // str r0, [r5, r1]
    SaveArray_Party_Alloc(0xb, 0x000004D4);
    // str r0, [r5, r1]
    // add r1, #0x1c
    sub_02030AE8(r4, 0x000004D8);
    *((u8*)(*((u32*)_0223DD40) + 4)) = r7;
    // ldr r0, [sp]
    *((u8*)(*((u32*)_0223DD40) + 5)) = _0223DD40;
    *((u8*)(*((u32*)_0223DD40) + 6)) = 0;
    sub_02030940(r5, *((u32*)_0223DD40));
    Save_VarsFlags_Get(*((u32*)(*((u32*)_0223DD40) + 0x000004F8)), *((u32*)_0223DD40), *((u8*)(*((u32*)_0223DD40) + 4)));
    Save_VarsFlags_GetVar4052();
    // add r2, r3, r2
    sub_02030AD4(r4, 0xa, (((*((u8*)(r2 + 5)) << 2) << 0x18) >> 0x18), 0);
    Save_Frontier_GetStatic(*((u32*)(*((u32*)_0223DD40) + 0x000004F8)));
    sub_0205BFF0(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205BFF0(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C268();
    FrontierSave_GetStat(r4, r6, r0);
    *((u16*)(r5 + 0xc)) = r0;
    Save_Frontier_GetStatic(*((u32*)(*((u32*)_0223DD40) + 0x000004F8)));
    sub_0205C048(*((u8*)(r4 + 5)), *((u8*)(r4 + 4)));
    sub_0205C048(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C268();
    FrontierSave_GetStat(r6, r7, r0);
    *((u16*)(*((u32*)_0223DD40) + 0xc)) = 0;
    *((u16*)(*((u32*)_0223DD40) + 8)) = 0;
    *((u32*)(*((u32*)_0223DD40) + 0x10)) = 0;
    sub_02030A24(r5, 1, 0, 0);
    *((u8*)(*((u32*)_0223DD40) + 4)) = r0;
    sub_02030A24(r5, 0, 0, 0);
    *((u8*)(r4 + 5)) = r0;
    sub_02030A24(r5, 2, 0, 0);
    *((u8*)(r4 + 6)) = r0;
    Save_Frontier_GetStatic(*((u32*)(*((u32*)_0223DD40) + 0x000004F8)));
    sub_0205BFF0(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205BFF0(*((u8*)(r4 + 5)), *((u8*)(r4 + 4)));
    sub_0205C268();
    FrontierSave_GetStat(r6, r7, r0);
    *((u16*)(r5 + 0xc)) = r0;
    Save_Frontier_GetStatic(*((u32*)(*((u32*)_0223DD40) + 0x000004F8)));
    sub_0205C048(*((u8*)(r4 + 5)), *((u8*)(r4 + 4)));
    sub_0205C048(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C268();
    FrontierSave_GetStat(r6, r7, r0);
    *((u16*)(r4 + 8)) = r0;
    _s32_div_f(*((u16*)(*((u32*)_0223DD40) + 0xc)), 7);
    *((u16*)(r4 + 0xe)) = r0;
    ov80_02237254(*((u8*)(r4 + 4)));
    ov80_0222A840(*((u32*)(*((u32*)_0223DD40) + 0x000004F8)), *((u32*)_0223DD40));
}





void ov80_0222FEEC(void) {
}





void ov80_0222FF00(void) {
    ov80_022372B4();
    // add r2, #0x18
    ov80_02236BE4(*((u8*)(r4 + 4)), r0, r4, 0xe);
    ov80_022372B4(r4);
    // add r1, r4, r3
    // str r1, [sp]
    // add r1, #8
    // add r1, r4, r1
    // str r1, [sp, #4]
    // sub r2, #0xc
    // add r3, #0x20
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r2, r4, r2
    // add r3, r4, r3
    ov80_02236E24(*((u8*)(r4 + 5)), (0x26 << 4), (0x26 << 4));
    ov80_022300D4(r4, 4, 0);
    ov80_022300D4(r4, 5, 0);
    // str r0, [sp, #0x18]
    // mov ip, r0
    // add r5, sp, #0x34
    // add r2, r3, r0
    // ldmia r2!, {r0, r1}
    // stmia r7!, {r0, r1}
    // mov r0, ip
    // add r3, #0x38
    // add r5, #0x38
    // mov ip, r0
    ov80_02237254(*((u8*)(r4 + 4)), r4);
    // add r0, r4, r0
    // add r1, sp, #0x28
    // add r3, sp, #0x1c
    // add r0, #0x38
    // strh r6, [r1]
    // add r2, #0x38
    // strh r6, [r3]
    ov80_022372B4(r4, (r1 + 2), r4, (r3 + 2));
    // add r1, r4, r3
    // str r1, [sp]
    // add r1, #8
    // add r1, r4, r1
    // str r1, [sp, #4]
    // sub r1, #0x10
    // sub r2, #0xc
    // add r3, #0x20
    // str r1, [sp, #8]
    // add r1, sp, #0x28
    // str r1, [sp, #0xc]
    // add r1, sp, #0x1c
    // str r1, [sp, #0x10]
    // add r2, r4, r2
    // add r3, r4, r3
    ov80_02236E24(*((u8*)(r4 + 5)), (0x59 << 4), (0x59 << 4));
    ov80_022300D4(r4, 4, 1);
    ov80_022300D4(r4, 5, 1);
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r6, sp, #0x34
    // add r3, r5, r0
    // add r2, r6, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0x14]
    // add r5, #0x38
    // add r6, #0x38
    // str r0, [sp, #0x14]
    ov80_02236DF8(*((u8*)(r4 + 4)), 1);
    // add r3, sp, #0x34
    // add r1, r4, r2
    // str r1, [sp]
    // add r1, #0x1e
    // add r1, r4, r1
    // str r1, [sp, #4]
    // add r1, #8
    // add r1, r4, r1
    // add r2, #0xe
    // str r1, [sp, #8]
    // add r1, r4, r2
    // str r1, [sp, #0xc]
    // ldr r1, [sp, #0x18]
    // str r1, [sp, #0x10]
    // add r1, r4, r1
    ov80_02236E90(*((u16*)((*((u8*)(r4 + 6)) << 1) + 0x18)), *((u8*)(r4 + 5)));
    // add r6, r4, r0
    AllocMonZeroed(0xb);
    ov80_02237120(r4);
    ov80_0222A140(r6, r5, r0);
    ov80_0222A3BC(*((u32*)(r4 + 0x000004F8)), *((u32*)(r4 + 0x000004D4)), r5);
    Heap_Free(r5);
    // add r6, #0x38
    Party_GetMonByIndex(*((u32*)(r4 + 0x000004D4)), 0);
}





void ov80_022300D4(void) {
    LCRandom();
    _s32_div_f(6);
    // add r1, r4, r0
    // str r1, [sp, #0x5c]
    // str r3, [sp, #0x20]
    // add r6, sp, #0xa4
    // str r1, [sp, #0x1c]
    // add r1, #0xc
    // add r1, r4, r1
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x18]
    // add r1, #0x14
    // add r1, r4, r1
    // str r1, [sp, #0x28]
    // ldr r3, [sp, #0x28]
    // str r1, [sp, #0x2c]
    // add r0, #0x2c
    // str r1, [sp, #0x14]
    // add r1, r4, r0
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x30]
    // ldr r3, [sp, #0x30]
    // ldmia r3!, {r0, r1}
    // str r3, [sp, #0x30]
    // stmia r6!, {r0, r1}
    // add r1, r4, r0
    // str r1, [sp, #0x34]
    // ldr r3, [sp, #0x34]
    // str r1, [sp, #0x38]
    // ldr r3, [sp, #0x20]
    // ldr r1, [sp, #0x5c]
    // strh r6, [r1, r3]
    // add r1, #0xc
    // add r1, r4, r1
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x24]
    // strb r3, [r1, r5]
    // add r1, #0x14
    // add r7, r4, r1
    // str r1, [sp, #0x60]
    // ldr r3, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    // add r0, #0x2c
    // str r5, [r3, r1]
    // add r1, r4, r0
    // add r6, r1, r0
    // ldr r3, [sp, #0x10]
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r3, [sp, #0x10]
    // ldr r3, [sp, #0x1c]
    // ldr r1, [sp, #0x34]
    // ldr r0, [sp, #0x38]
    // strh r3, [r1, r0]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x3c]
    // add r3, sp, #0xa4
    // strb r1, [r0, r2]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x60]
    // str r1, [r7, r0]
    // ldmia r3!, {r0, r1}
    // stmia r6!, {r0, r1}
    // add r1, r4, r0
    // str r1, [sp, #0x64]
    // str r3, [sp, #0x40]
    // add r6, sp, #0x6c
    // str r1, [sp, #8]
    // add r1, #0xc
    // add r1, r4, r1
    // str r1, [sp, #0x44]
    // str r1, [sp, #4]
    // add r1, #0x14
    // add r1, r4, r1
    // str r1, [sp, #0x48]
    // ldr r3, [sp, #0x48]
    // str r1, [sp, #0x4c]
    // add r0, #0x2c
    // str r1, [sp]
    // add r1, r4, r0
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x50]
    // ldr r3, [sp, #0x50]
    // ldmia r3!, {r0, r1}
    // str r3, [sp, #0x50]
    // stmia r6!, {r0, r1}
    // add r0, r4, r3
    // str r0, [sp, #0x54]
    // ldr r1, [sp, #0x54]
    // str r0, [sp, #0x58]
    // ldr r1, [sp, #0x40]
    // ldr r0, [sp, #0x64]
    // strh r6, [r0, r1]
    // add r0, #0xc
    // add r0, r4, r0
    // mov ip, r0
    // ldr r0, [sp, #0x44]
    // strb r1, [r0, r5]
    // add r0, #0x14
    // add r7, r4, r0
    // str r0, [sp, #0x68]
    // ldr r1, [sp, #0x48]
    // ldr r0, [sp, #0x4c]
    // add r3, #0x2c
    // str r5, [r1, r0]
    // add r1, r4, r3
    // add r5, r1, r0
    // ldr r3, [sp, #0xc]
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r3, [sp, #0xc]
    // ldr r3, [sp, #8]
    // ldr r1, [sp, #0x54]
    // ldr r0, [sp, #0x58]
    // strh r3, [r1, r0]
    // ldr r1, [sp, #4]
    // mov r0, ip
    // strb r1, [r0, r2]
    // ldr r1, [sp]
    // ldr r0, [sp, #0x68]
    // add r3, sp, #0x6c
    // str r1, [r7, r0]
    // ldmia r3!, {r0, r1}
    // stmia r5!, {r0, r1}
}





void ov80_02230270(void) {
    ov80_02236DD4(*((u8*)(r0 + 4)));
    sub_02030A24(*((u32*)(r5 + 0x000004F4)), 3, ((0 << 0x18) >> 0x18), 0);
    *((u16*)(r6 + 0x18)) = r0;
    // add r0, sp, #0x28
    // add r6, sp, #0x40
    // str r0, [sp, #0x14]
    // add r7, sp, #0x20
    // str r5, [sp, #0x10]
    sub_02030A24(*((u32*)(r5 + 0x000004F4)), 4, ((0 << 0x18) >> 0x18), 0);
    // strh r0, [r6]
    sub_02030A24(*((u32*)(r5 + 0x000004F4)), 6, ((r4 << 0x18) >> 0x18), 0);
    // ldr r1, [sp, #0x14]
    // str r0, [r1]
    sub_02030A24(*((u32*)(r5 + 0x000004F4)), 5, ((r4 << 0x18) >> 0x18), 0);
    // strb r0, [r7]
    // ldr r1, [sp, #0x10]
    // strh r2, [r1, r0]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x4c
    // add r1, sp, #0x40
    // add r2, sp, #0x20
    // add r3, sp, #0x28
    ov80_0222A52C(0xcd, *((u16*)r6));
    AllocMonZeroed(0xb);
    // add r4, sp, #0x4c
    ov80_02237120(r5);
    ov80_0222A140(r4, r6, r0);
    ov80_0222A3BC(*((u32*)(r5 + 0x000004F8)), *((u32*)(r5 + 0x000004D4)), r6);
    // add r4, #0x38
    Heap_Free(r6);
    // add r0, sp, #0x28
    // add r6, sp, #0x40
    // str r0, [sp, #0x1c]
    // add r7, sp, #0x20
    // str r5, [sp, #0x18]
    sub_02030A24(*((u32*)(r5 + 0x000004F4)), 7, ((0 << 0x18) >> 0x18), 0);
    // strh r0, [r6]
    sub_02030A24(*((u32*)(r5 + 0x000004F4)), 9, ((r4 << 0x18) >> 0x18), 0);
    // ldr r1, [sp, #0x1c]
    // str r0, [r1]
    sub_02030A24(*((u32*)(r5 + 0x000004F4)), 8, ((r4 << 0x18) >> 0x18), 0);
    // strb r0, [r7]
    // ldr r1, [sp, #0x18]
    // strh r2, [r1, r0]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x4c
    // add r1, sp, #0x40
    // add r2, sp, #0x20
    // add r3, sp, #0x28
    ov80_0222A52C(0xcd, *((u16*)r6));
    AllocMonZeroed(0xb);
    // add r4, sp, #0x4c
    ov80_02237120(r5);
    ov80_0222A140(r4, r6, r0);
    ov80_0222A3BC(*((u32*)(r5 + 0x000004F8)), *((u32*)(r5 + 0x000004D8)), r6);
    // add r4, #0x38
    Heap_Free(r6);
}





void ov80_02230424(void) {
    Heap_Free(*((u32*)(r0 + 0x000004D4)));
    Heap_Free(*((u32*)(r4 + 0x000004D8)));
    MI_CpuFill8(r4, 0, 0x00000708);
    Heap_Free(r4);
}





void ov80_02230460(void) {
    ov80_02230484(r1, ((0 << 0x18) >> 0x18));
    // strh r0, [r5, r7]
}





void ov80_02230484(void) {
}





void ov80_0223049C(void) {
    sub_02030AE8(*((u32*)(r0 + 0x000004F8)));
    // str r0, [sp]
    Save_Frontier_GetStatic(*((u32*)(r5 + 0x000004F8)));
    ov80_02236DD4(*((u8*)(r5 + 4)));
    ov80_02236DF8(*((u8*)(r5 + 4)), 1);
    // add r0, sp, #4
    // add r3, sp, #0xc
    *((u8*)(r0 + 8)) = *((u8*)(r5 + 5));
    sub_02030978(*((u32*)(r5 + 0x000004F4)), 0, 0);
    // add r0, sp, #4
    *((u8*)(r0 + 8)) = *((u8*)(r5 + 4));
    // add r3, sp, #0xc
    sub_02030978(*((u32*)(r5 + 0x000004F4)), 1, 0);
    sub_02030964(*((u32*)(r5 + 0x000004F4)), 1);
    // add r0, sp, #4
    *((u8*)(r0 + 8)) = *((u8*)(r5 + 6));
    // add r3, sp, #0xc
    sub_02030978(*((u32*)(r5 + 0x000004F4)), 2, 0);
    sub_0205C048(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C048(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C268();
    sub_02031108(r4, r7, r0, *((u16*)(r5 + 8)));
    sub_0205BFF0(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205BFF0(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C268();
    sub_02031108(r4, r7, r0, *((u16*)(r5 + 0xc)));
    sub_0205C01C(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C01C(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C268();
    FrontierSave_GetStat(r4, r6, r0);
    sub_0205C01C(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C01C(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C268();
    sub_0203126C(r4, r7, r0, *((u16*)(r5 + 0xc)));
    sub_0205C01C(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C01C(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C268();
    FrontierSave_GetStat(r4, r7, r0);
    sub_0205C074(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C074(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C268();
    sub_0203126C(r4, r6, r0, *((u16*)(r5 + 8)));
    sub_0205C074(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C074(*((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    sub_0205C268();
    sub_02031108(r4, r6, r0, *((u16*)(r5 + 8)));
    // add r0, sp, #4
    *((u8*)(r0 + 8)) = *((u8*)(r5 + 0xa));
    // ldr r0, [sp]
    // add r2, r3, r2
    // add r3, sp, #0xc
    sub_02030AA4(0xa, (((*((u8*)(r5 + 5)) << 2) << 0x18) >> 0x18), *((u8*)(r5 + 4)));
    sub_0205C268(0x68);
    sub_02031108(r4, r6, r0, *((u8*)(r5 + 0xa)));
    // add r6, sp, #4
    // add r0, r5, r0
    // strh r0, [r6]
    // add r3, sp, #4
    sub_02030978(*((u32*)(r5 + 0x000004F4)), 3, ((0 << 0x18) >> 0x18));
    Party_GetCount(*((u32*)(r5 + 0x000004D4)));
    Party_GetMonByIndex(*((u32*)(r5 + 0x000004D4)), 0x00000000);
    // add r1, r5, r0
    // add r0, sp, #4
    // strh r1, [r0]
    // add r3, sp, #4
    sub_02030978(*((u32*)(r5 + 0x000004F4)), 4, ((r4 << 0x18) >> 0x18));
    GetMonData(r6, 0x47, 0);
    // add r1, sp, #4
    *((u8*)(r1 + 8)) = r0;
    // add r3, sp, #0xc
    sub_02030978(*((u32*)(r5 + 0x000004F4)), 5, ((r4 << 0x18) >> 0x18));
    GetMonData(r6, 0, 0);
    // str r0, [sp, #0x10]
    // add r3, sp, #0x10
    sub_02030978(*((u32*)(r5 + 0x000004F4)), 6, ((r4 << 0x18) >> 0x18));
    Party_GetCount(*((u32*)(r5 + 0x000004D8)));
    Party_GetMonByIndex(*((u32*)(r5 + 0x000004D8)), 0x00000000);
    // add r1, r5, r0
    // add r0, sp, #4
    // strh r1, [r0]
    // add r3, sp, #4
    sub_02030978(*((u32*)(r5 + 0x000004F4)), 7, ((r4 << 0x18) >> 0x18));
    GetMonData(r6, 0x47, 0);
    // add r1, sp, #4
    *((u8*)(r1 + 8)) = r0;
    // add r3, sp, #0xc
    sub_02030978(*((u32*)(r5 + 0x000004F4)), 8, ((r4 << 0x18) >> 0x18));
    GetMonData(r6, 0, 0);
    // str r0, [sp, #0x10]
    // add r3, sp, #0x10
    sub_02030978(*((u32*)(r5 + 0x000004F4)), 9, ((r4 << 0x18) >> 0x18));
}





void ov80_02230784(void) {
}





void ov80_02230790(void) {
}





void ov80_02230794(void) {
    // add r1, r4, r3
    // add r1, r2, r1
    // add r0, sp, #0
    // add r0, sp, #0
}





void ov80_022307C8(void) {
}





void ov80_022307D4(void) {
    *((u8*)(r0 + 0xa)) = 1;
    *((u16*)(r0 + 0xe)) = (*((u16*)(r0 + 0xe)) + 1);
    *((u8*)(r0 + 6)) = 0;
}





void ov80_022307F0(void) {
    ov80_02236DD4(*((u8*)(r0 + 4)));
    // str r0, [sp, #4]
    ov80_02236DF8(*((u8*)(r5 + 4)), 1);
    // str r0, [sp]
    SaveArray_Party_Init(*((u32*)(r5 + 0x000004D4)));
    AllocMonZeroed(0xb);
    // ldr r0, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp, #8]
    ov80_02237120(r5);
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    ov80_0222A140(*((u16*)(r4 + 0x000004DC)), r6, r0);
    ov80_0222A3BC(*((u32*)(r5 + 0x000004F8)), *((u32*)(r5 + 0x000004D4)), r6);
    // add r1, r5, r0
    // strh r1, [r4, r0]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // add r4, r5, r0
    ov80_02237120(r5, *((u16*)(r1 + (0x95 << 2))));
    ov80_0222A140(r4, r6, r0);
    ov80_0222A3BC(*((u32*)(r5 + 0x000004F8)), *((u32*)(r5 + 0x000004D8)), r6);
    // ldr r0, [sp]
    // add r4, #0x38
    Heap_Free(r6);
}





void ov80_022308C4(void) {
    // add r2, sp, #0x3c
    // add r3, sp, #0x2c
    // strh r0, [r2]
    // strh r0, [r3]
    ov80_02236DF8(*((u8*)(r0 + 4)), 1, (r2 + 2), (r3 + 2));
    // str r0, [sp, #0x1c]
    Party_GetCount(*((u32*)(r5 + 0x000004D4)));
    // str r0, [sp, #0x20]
    // add r6, sp, #0x3c
    // add r4, sp, #0x2c
    Party_GetMonByIndex(*((u32*)(r5 + 0x000004D4)), 0);
    // str r0, [sp, #0x24]
    GetMonData(5, 0);
    // strh r0, [r6]
    // ldr r0, [sp, #0x24]
    GetMonData(6, 0);
    // strh r0, [r4]
    // ldr r0, [sp, #0x20]
    Party_GetCount(*((u32*)(r5 + 0x000004D8)));
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // str r5, [sp, #0x18]
    // add r0, sp, #0x3c
    // add r6, r0, r1
    // add r0, sp, #0x2c
    // add r4, r0, r1
    Party_GetMonByIndex(*((u32*)(r5 + 0x000004D8)), 0);
    // str r0, [sp, #0x28]
    GetMonData(5, 0);
    // strh r0, [r6]
    // ldr r0, [sp, #0x28]
    GetMonData(6, 0);
    // strh r0, [r4]
    // ldr r1, [sp, #0x18]
    // strh r2, [r1, r0]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r0, r5, r0
    ov80_02236C2C(*((u16*)((*((u8*)(r5 + 6)) << 1) + 0x18)), *((u8*)(r5 + 5)), *((u16*)(r1 + 0x000003D2)));
    // ldr r3, [sp, #0x20]
    // add r2, r5, r1
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x14]
    // add r1, #8
    // str r0, [sp, #0xc]
    // add r0, r5, r1
    // str r0, [sp, #0x10]
    // add r2, r3, r2
    // ldr r3, [sp, #0x1c]
    // add r0, sp, #0x3c
    // add r1, sp, #0x2c
    ov80_02236C9C(0, 0x000003D2, 0xb);
    // add r0, r5, r2
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x10
    // sub r1, #0xe
    // add r0, r5, r0
    // add r1, r5, r1
    // add r2, r5, r2
    ov80_0222A52C((0x3e << 4), (0x3e << 4), ((0x3e << 4) - 6), 0);
}





void ov80_022309F8(void) {
    Party_GetMonByIndex(*((u32*)(r0 + (0x000004DC - 4))), *((u16*)(r0 + (0x000004DC + 2))));
    // add r1, #8
    Party_SafeCopyMonToSlot_ResetAprijuiceModifiers(*((u32*)(r4 + 0x000004D4)), *((u16*)(r4 + 0x000004D4)), r0);
    // add r2, r4, r0
    // add r1, #0xa
    // add r0, r4, r0
    // strh r2, [r0, r1]
    ov80_02230AE4(r4, 0x000004DE, *((u16*)(r2 + (0x95 << 2))));
    Save_GameStats_Get(*((u32*)(r4 + 0x000004F8)));
    GameStats_Inc(0x41);
}





void ov80_02230A60(void) {
    ov80_02236DD4(*((u8*)(r0 + 4)));
    ov80_02236DF8(*((u8*)(r4 + 4)), 1);
    SaveArray_Party_Init(*((u32*)(r4 + 0x000004D8)));
    AllocMonZeroed(0xb);
    // str r0, [sp]
    // add r5, r4, r0
    ov80_02237120(r4);
    ov80_0222A140(r5, r7, r0);
    ov80_0222A3BC(*((u32*)(r4 + 0x000004F8)), *((u32*)(r4 + 0x000004D8)), r7);
    // ldr r0, [sp]
    // add r5, #0x38
    // str r0, [sp]
    Heap_Free(r7);
    Party_GetMonByIndex(*((u32*)(r4 + 0x000004D8)), 0);
}





void ov80_02230AE4(void) {
    *((u16*)(r0 + 8)) = (*((u16*)(r0 + 8)) + 1);
}





void ov80_02230AF8(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02230B0A: ; jump table
}





void ov80_02230B4C(void) {
    // cmp r3, #1
    // bhi _02230B62
    // cmp r2, #8
    // blo _02230B5C
    // b _02230B6E
    // ldrb r1, [r1, r2]
    // b _02230B6E
    // cmp r2, #8
    // blo _02230B6A
    // b _02230B6E
    // ldrb r1, [r1, r2]
    // cmp r3, #0
    // bne _02230B7E
    // cmp r0, #0x15
    // beq _02230B7C
    // cmp r0, #0x31
    // bne _02230B7E
    // nop
    // _02230B84: .word ov80_0223BDD4
    // _02230B88: .word ov80_0223BDE0
}




