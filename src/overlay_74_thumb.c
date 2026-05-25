/* Decompiled from asm/overlay_74_thumb.s */
#include "global.h"

/* Address: 0x02228C84
 * Searches an array for a matching value.
 */
u32 ov74_02228C84(u32 a1, u32 a2) {
    u32 i;
    u16 count = *((u16*)(ov74_0223BD68 + 2));
    
    if (a1 == count)
        return *((u16*)ov74_0223BD68);
    
    for (i = 0; i < 0x123; i++) {
        u16 v = *((u16*)(ov74_0223BD68 + i * 4));
        if (v == a1)
            return i;
    }
    
    return 0x3F;
}




void ov74_IntToWstring5(void) {
    *((u16*)r5) = (r0 + 0x30);
}




void ov74_02228D20(void) {
    *((u16*)r5) = r0;
}




void ov74_02228D64(void) {
    // add r3, sp, #0x20
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, sp, #0x20
    GfGfx_SetBanks((5 - 1), _0223B330);
    // add r0, sp, #0x10
    SetBothScreensModesAndDisable();
    // str r1, [sp]
    ov74_02235308(*((u32*)(r4 + 4)), 0, 1, (0xf << 0xc));
    // str r0, [sp]
    ov74_02235308(*((u32*)(r4 + 4)), 1, 1, (0x3e << 0xa));
    // str r0, [sp]
    ov74_02235308(*((u32*)(r4 + 4)), 4, 1, (0x1e << 0xa));
    // str r0, [sp]
    ov74_02235308(*((u32*)(r4 + 4)), 5, 1, (7 << 0xc));
    ResetAllTextPrinters();
    LoadFontPal0(0, 0, *((u32*)r4));
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(r4 + 4)), 0, 1, 1);
    Options_GetFrame(*((u32*)(r4 + 0x14)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)(r4 + 4)), 0, 0xa, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0x8f
    GfGfxLoader_GXLoadPal(0x71, 0, 0, 0x71);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x71, 1, *((u32*)(r4 + 4)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x71, 2, *((u32*)(r4 + 4)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r4 + 4)), 1, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 4)), 1);
    ov74_02228E98(r4);
}




void ov74_02228E98(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
}




void ov74_02228F14(void) {
    *((u32*)sp) = (r0 + 0x18);
    *((u32*)(sp + 4)) = (r0 + 0x18);
    *((u32*)sp) = (sp + 8);
}




void ov74_02228F8C(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = (((r0 + 0x48) + 0x48) + 0x48);
    *((u32*)(r4 + ((r1 + 0x28) + 0x48))) = (r2 + ((((r0 + 0x48) + 0x48) + 0x48) + 0x48));
    *((u32*)sp) = (r2 + ((((r0 + 0x48) + 0x48) + 0x48) + 0x48));
    *((u32*)(sp + 4)) = (r2 + ((((r0 + 0x48) + 0x48) + 0x48) + 0x48));
    *((u32*)sp) = ((((r2 + ((((r0 + 0x48) + 0x48) + 0x48) + 0x48)) + 0x9c) + 0x9c) + 0x9c);
    *((u32*)(r4 + ((((r1 + 0x28) + 0x48) + 0x18) + 0x9c))) = (r2 + (((((r2 + ((((r0 + 0x48) + 0x48) + 0x48) + 0x48)) + 0x9c) + 0x9c) + 0x9c) + 0x9c));
    *((u32*)sp) = (r2 + (((((r2 + ((((r0 + 0x48) + 0x48) + 0x48) + 0x48)) + 0x9c) + 0x9c) + 0x9c) + 0x9c));
    *((u32*)(sp + 4)) = (r2 + (((((r2 + ((((r0 + 0x48) + 0x48) + 0x48) + 0x48)) + 0x9c) + 0x9c) + 0x9c) + 0x9c));
    *((u32*)sp) = (r2 + (((((r2 + ((((r0 + 0x48) + 0x48) + 0x48) + 0x48)) + 0x9c) + 0x9c) + 0x9c) + 0x9c));
    *((u32*)(r4 + ((((r1 + 0x28) + 0x48) + 0x18) + 0x9c))) = (r2 + (((((r2 + ((((r0 + 0x48) + 0x48) + 0x48) + 0x48)) + 0x9c) + 0x9c) + 0x9c) + 0x9c));
}




void ov74_02229084(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(r5 + (((r0 + 0xf0) + 0xf0) + 0xf0))) = r4;
    *((u32*)sp) = (((r0 + 0xf0) + 0xf0) + 0xf0);
    *((u32*)(sp + 4)) = (r1 + 0x38);
    *((u32*)sp) = (((r0 + 0xf0) + 0xf0) + 0xf0);
    *((u32*)(((r1 + 0x38) + 0xf0) + 0xf8)) = (((r0 + 0xf0) + 0xf0) + 0xf0);
    *((u32*)sp) = r2;
    // sub r2, #0x47
    *((u32*)(sp + 8)) = (sp + 0x10);
    *((u32*)(sp + 0xc)) = (sp + 0x10);
    *((u32*)sp) = (sp + 0x10);
    *((u32*)(sp + 4)) = (sp + 0x10);
    *((u32*)sp) = (sp + 0x10);
    *((u32*)(sp + 4)) = (sp + 0x1c);
    *((u32*)((sp + 0x10) + 0xfc)) = (sp + 0x1c);
    *((u32*)sp) = *((u32*)(sp + 0x18));
    // sub r2, #0x48
}




void ov74_02229190(void) {
}




void ov74_02229200(void) {
    *((u32*)r4) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r2)) = r0;
    // sub r0, #8
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + (r1 + 8))) = r0;
    *((u32*)(r4 + ((r1 + 8) + 0x10))) = r0;
    *((u32*)(r4 + (r2 + 0xc))) = r0;
}




void ov74_02229294(void) {
    // add r1, pc
    // add pc, r1
    *((u32*)r5) = r0;
    *((u32*)(r0 + 0x98)) = ((s32)((r1 + r1)) >> 0x10);
    *((u32*)sp) = (r0 + 0x98);
    *((u32*)(r4 + (((s32)((r1 + r1)) >> 0x10) + 0x48))) = (r0 + 0x98);
    *((u32*)(r4 + (r0 + 0x98))) = (((s32)((r1 + r1)) >> 0x10) + 0x48);
    *((u32*)(r4 + (((s32)((r1 + r1)) >> 0x10) + 0x48))) = (r0 + 0x98);
    // strb r2, [r4, r1]
}




void ov74_02229450(void) {
    Heap_Destroy(0x59);
    RegisterMainOverlay(FS_OVERLAY_ID, gApplication_TitleScreen);
    OverlayManager_FreeData(r4);
    Heap_Destroy(0x53);
}




void ov74_0222947C(void) {
    // strh r2, [r5, r1]
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)((r5 + r0) + r2)) = *((u32*)(sp + 4));
    // strh r1, [r4, r0]
    // strb r1, [r4, r3]
    // strb r1, [r4, r3]
    // strb r3, [r4, r1]
    // strb r3, [r4, r1]
    // strb r2, [r4, r0]
    // strb r1, [r4, r0]
    // strh r3, [r4, r2]
    // strh r1, [r4, r2]
    // strh r1, [r4, r2]
    // strb r1, [r4, r0]
    *((u32*)((r5 + r0) + ((r5 + r0) + *((u32*)(sp + 0xc))))) = (sp + 0x10);
}




void ov74_022295C8(void) {
    *((u32*)(r0 + r2)) = r1;
}




void ov74_022295D0(void) {
    *((u32*)(r0 + r1)) = r3;
    *((u32*)r5) = r0;
    *((u32*)r5) = r0;
    *((u32*)r5) = r0;
}




void ov74_0222962C(void) {
    // sub r0, r1, r0
    *((u32*)(r4 + ((s32)((r0 + r0)) >> 0x10))) = r1;
    *((u32*)(r4 + r5)) = r1;
    *((u32*)(r4 + ((s32)((r0 + r0)) >> 0x10))) = (r4 + r1);
    *((u32*)(r4 + r5)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(r4 + (r4 + r1))) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + r5)) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + (((s32)((r0 + r0)) >> 0x10) + 0x28))) = (r4 + r1);
    *((u32*)(r4 + r5)) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + r5)) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + (((s32)((r0 + r0)) >> 0x10) + 0x28))) = (r4 + r5);
    *((u32*)(r4 + r5)) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)sp) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + (((s32)((r0 + r0)) >> 0x10) + 0x28))) = ((r4 + r5) + 0x48);
    *((u32*)(r4 + (((s32)((r0 + r0)) >> 0x10) + 0x28))) = ((r4 + r5) + 0x48);
    *((u32*)(r4 + r5)) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + r5)) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + r5)) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + (((s32)((r0 + r0)) >> 0x10) + 0x28))) = (r4 + r5);
    *((u32*)(r4 + r5)) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + (((s32)((r0 + r0)) >> 0x10) + 0x28))) = (r4 + r5);
    *((u32*)sp) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + (((s32)((r0 + r0)) >> 0x10) + 0x28))) = ((r4 + r5) + 0x48);
    *((u32*)sp) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + r5)) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + r5)) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + (((s32)((r0 + r0)) >> 0x10) + 0x28))) = (r4 + r5);
    *((u32*)(r4 + r5)) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + (((s32)((r0 + r0)) >> 0x10) + 0x28))) = (r4 + r5);
    *((u32*)sp) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + (((s32)((r0 + r0)) >> 0x10) + 0x28))) = (r4 + r5);
    *((u32*)sp) = (((s32)((r0 + r0)) >> 0x10) + 0x28);
    *((u32*)(r4 + ((r4 + r5) + 0x48))) = ((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28);
    *((u32*)(r4 + r5)) = ((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28);
    *((u32*)(r4 + r5)) = ((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28);
    *((u32*)(r4 + ((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28))) = ((r4 + r5) + 0x48);
    *((u32*)(r4 + ((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28))) = ((r4 + r5) + 0x48);
    *((u32*)(r4 + r5)) = ((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28);
    *((u32*)(r4 + r5)) = ((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28);
    *((u32*)(r4 + ((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28))) = ((r4 + r5) + 0x48);
    *((u32*)(r4 + r5)) = ((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28);
    *((u32*)(r4 + ((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28))) = ((r4 + r5) + 0x48);
    *((u32*)(r4 + ((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28))) = ((r4 + r5) + 0x48);
    *((u32*)(r4 + r5)) = ((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28);
    *((u32*)(r4 + (((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8))) = ((r4 + r5) + 0x48);
    *((u32*)(r4 + r5)) = (((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8);
    *((u32*)(r4 + ((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8))) = ((r4 + r5) + 0x48);
    *((u32*)(r4 + r5)) = ((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8);
    *((u32*)(r4 + (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8))) = ((r4 + r5) + 0x48);
    *((u32*)(r4 + r5)) = (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8);
    *((u32*)(r4 + (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8))) = ((r4 + r5) + 0x48);
    *((u32*)(r4 + (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8))) = ((r4 + r5) + 0x48);
    *((u32*)(r4 + r5)) = (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8);
    *((u32*)(r4 + (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8))) = ((r4 + r5) + 0x48);
    *((u32*)(r4 + (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8))) = ((r4 + r5) + 0x48);
    *((u32*)(r4 + r5)) = (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8);
    *((u32*)sp) = (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8);
    *((u32*)(r4 + (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8))) = (((r4 + r5) + 0x48) + 0x48);
    *((u32*)(r4 + (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8))) = (((r4 + r5) + 0x48) + 0x48);
    *((u32*)(r4 + r5)) = (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8);
    *((u32*)(r4 + r5)) = (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8);
    *((u32*)sp) = (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8);
    *((u32*)(r4 + (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8))) = ((((r4 + r5) + 0x48) + 0x48) + 0x48);
    *((u32*)(r4 + r5)) = (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8);
    *((u32*)(r4 + (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8))) = ((((r4 + r5) + 0x48) + 0x48) + 0x48);
    *((u32*)(r4 + (((((((s32)((r0 + r0)) >> 0x10) + 0x28) + 0x28) + 0xe8) + 0xe8) + 0xe8))) = ((((r4 + r5) + 0x48) + 0x48) + 0x48);
}




void ov74_02229B68(void) {
    *((u32*)r1) = r0;
    *((u32*)r0) = r4;
}




void ov74_02229BC0(void) {
    *((u32*)(*((u32*)ov74_0223D0A4) + 0x20)) = r0;
    *((u16*)(*((u32*)ov74_0223D0A4) + 0x24)) = r1;
}




void ov74_02229BD0(void) {
    // strb r3, [r2, r0]
}




void ov74_02229C0C(void) {
}




void ov74_02229C44(void) {
    sub_02034DB8();
    ov74_02229BC0(ov74_02229C5C, 0);
}




void ov74_02229C5C(void) {
}




void ov74_02229C60(void) {
}




void ov74_02229C80(void) {
    // strb r2, [r1, r0]
}




void ov74_02229CB4(void) {
}




void ov74_02229CB8(void) {
    // blx r1
}




void ov74_02229CE0(void) {
    sub_02037474();
    sub_02038114(r4, r6);
    ov74_02229B68(r5);
    ov74_02229BC0(ov74_02229BD0, 0);
}




void ov74_02229D0C(void) {
    // bx r3
}




void ov74_02229D1C(void) {
    sub_02037474();
    ov74_0222CD7C();
    OverlayManager_GetArgs();
    sub_02038148(*((u32*)(r0 + 8)), r4);
    ov74_02229B68(r5);
    ov74_02229BC0(ov74_02229C44, 0);
}




void ov74_02229D50(void) {
    *((u8*)(r1 + 0x27)) = r0;
}




void ov74_02229D6C(void) {
}




void ov74_02229DA0(void) {
    // strb r1, [r2, r0]
}




void ov74_02229DBC(void) {
}




void ov74_02229DCC(void) {
}




void ov74_02229DD4(void) {
}




void ov74_02229DE0(void) {
    // strb r2, [r1, r0]
}




void ov74_02229DF8(void) {
    *((u32*)r0) = r1;
}




void ov74_02229E14(void) {
    // bx r3
}




void ov74_02229E28(void) {
    *((u32*)(r4 + r1)) = (r0 + 0x18);
    *((u32*)(r4 + (r0 + 0x18))) = r1;
}




void ov74_02229E60(void) {
}




void ov74_02229E68(void) {
}




void ov74_02229F04(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}




void ov74_02229F28(void) {
    *((u32*)sp) = r1;
    *((u32*)(r4 + r1)) = ~(r0);
}




void ov74_02229F60(void) {
}




void ov74_02229F78(void) {
}




void ov74_02229F90(void) {
    *((u32*)(r4 + (r0 + 0x48))) = (r1 + 0x18);
    *((u32*)(r4 + 0x84)) = (r0 + 0x48);
}




void ov74_02229FF4(void) {
}




void ov74_0222A078(void) {
}




void ov74_0222A0E4(void) {
}




void ov74_0222A130(void) {
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + (r0 + 0xdc))) = r1;
}




void ov74_0222A174(void) {
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    // strb r0, [r5, r1]
    // sub r1, #8
    // strb r0, [r5, r1]
    *((u32*)((r5 + 0xdc) + r1)) = (sp + 8);
    *((u32*)(*((u32*)(sp + 4)) + (r1 + 0x4c))) = (r2 + 0x4e);
    *((u32*)(*((u32*)(sp + 4)) + (r1 + 0x4c))) = (r2 + 0x4e);
}




void ov74_0222A240(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x10)) = r1;
    *((u32*)sp) = ~(r5);
}




void ov74_0222A2A4(void) {
}




void ov74_0222A2E0(void) {
    *((u32*)(r5 + r0)) = r1;
    *((u32*)sp) = (r0 + 0x38);
    *((u32*)(sp + 4)) = (r0 + 0x38);
    *((u32*)(sp + 8)) = (r0 + 0x38);
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x10)) = (r0 + 0x38);
    *((u32*)sp) = r2;
}




void ov74_0222A35C(void) {
    *((u32*)(r4 + r0)) = r1;
    *((u32*)sp) = (r0 + 0x38);
    *((u32*)(sp + 4)) = (r0 + 0x38);
    *((u32*)(sp + 8)) = (r0 + 0x38);
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x10)) = (r0 + 0x38);
    *((u32*)sp) = (r0 + 0x38);
}




void ov74_0222A3CC(void) {
    *((u32*)(r4 + r0)) = r1;
    *((u32*)sp) = (r0 + 0x38);
    *((u32*)(sp + 4)) = (r0 + 0x38);
    *((u32*)(sp + 8)) = (r0 + 0x38);
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x10)) = (r0 + 0x38);
    *((u32*)sp) = (r0 + 0x38);
}




void ov74_0222A43C(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x10)) = r1;
    *((u32*)sp) = r0;
}




void ov74_0222A494(void) {
}




void ov74_0222A4CC(void) {
}




void ov74_0222A504(void) {
}




void ov74_0222A538(void) {
    ov74_022365FC(*((u32*)(ov74_0223D0A8 + 0x10)));
    *((u32*)(ov74_0223D0A8 + 0x10)) = 0x2b;
}




void ov74_0222A560(void) {
    *((u32*)(r4 + (r0 + 0x48))) = (r1 + 0x18);
    *((u32*)(r4 + (r0 + 0x48))) = (r1 + 0x18);
}




u32 ov74_0222A5AC(void) {
}




void ov74_0222A5CC(void) {
    *((u32*)(r5 + r0)) = r1;
    *((u32*)sp) = (r0 + 0x28);
    *((u32*)(sp + 4)) = (r0 + 0x28);
    *((u32*)(sp + 8)) = (r0 + 0x28);
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x10)) = (r0 + 0x28);
    *((u32*)sp) = (r0 + 0x28);
}




void ov74_0222A650(void) {
    *((u32*)(r4 + r1)) = r2;
}




void ov74_0222A688(void) {
    *((u32*)(r4 + r1)) = r2;
}




void ov74_0222A6C0(void) {
    *((u32*)(r4 + r0)) = r1;
}




void ov74_0222A6F8(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // mov ip, r2
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, sp, #0
    *((u8*)(*((u32*)_0223B3A0) + 0x12)) = (r2 >> 0xb);
    *((u8*)(*((u32*)_0223B3A0) + 0x13)) = (r3 >> 0xe);
    // mov r2, ip
    InitBgFromTemplate(r0, ((r1 << 0x18) >> 0x18), 0);
    BgClearTilemapBufferAndCommit(r7, ((r4 << 0x18) >> 0x18));
}




void ov74_0222A744(void) {
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    ov74_0222A6F8(r4, 0, (0xf << 0xc), 0);
    ov74_0222A6F8(r4, 1, (0x3e << 0xa), (1 << 0xf));
    ov74_0222A6F8(r4, 4, (0xe << 0xa), 0);
    ov74_0222A6F8(r4, 5, (0x1e << 0xa), (1 << 0xe));
}




void ov74_0222A7A0(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
}




void ov74_0222A81C(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = (r3 + 0x8f);
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
}




void ov74_0222A89C(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    OverlayManager_GetData();
    ListMenuItems_Delete(*((u32*)(r0 + 0x7c)));
    ListMenuItems_New(r7, 0x54);
    *((u32*)(r4 + 0x7c)) = r0;
    NewMsgDataFromNarc(0, 0x1b, 0xf7, 0x54);
    *((u32*)(r4 + 0x10)) = r0;
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x7c)), *((u32*)(r4 + 0x10)), *((u32*)r5), *((u32*)(r5 + 4)));
    // add r5, #8
    DestroyMsgData(*((u32*)(r4 + 0x10)));
    // add r2, sp, #8
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [sp, #8]
    // add r0, sp, #8
    *((u16*)(*((u32*)(r4 + 0x7c)) + 0x12)) = r7;
    *((u16*)(*((u32*)(r4 + 0x7c)) + 0x10)) = *((u16*)(*((u32*)(r4 + 0x7c)) + 0x12));
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    DestroyListMenu(*((u32*)(r4 + 0x78)), 0, 0, ov74_0223C270);
    // add r0, sp, #8
    ListMenuInit(0, 0, 0x54);
    *((u32*)(r4 + 0x78)) = r0;
    // ldr r2, [sp, #0x40]
    // mvn r0, r0
    // add r4, #0x18
    // ldr r0, [sp]
    ov74_0222AA18(0, r4);
}




void ov74_0222A94C(void) {
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)(sp + 0x20)) = r2;
    *((u32*)(sp + 0x1c)) = r0;
    *((u32*)(sp + 0x18)) = r0;
    *((u32*)(sp + 0x24)) = r2;
    *((u32*)(sp + 0x28)) = r1;
    *((u32*)((sp + 0x24) + r6)) = r3;
    *((u32*)((sp + 0x24) + r6)) = r3;
    *((u32*)((sp + 0x24) + r6)) = r3;
    *((u32*)sp) = (sp + 0x24);
    *((u32*)(sp + 4)) = (sp + 0x24);
    *((u32*)(sp + 8)) = (sp + 0x24);
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x10)) = (sp + 0x24);
    *((u32*)sp) = *((u32*)(sp + 0x20));
}




void ov74_0222AA18(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r3;
}




void ov74_0222AAAC(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r1;
}




void ov74_0222AB0C(void) {
    // blx r6
    *((u32*)r5) = ~(r0);
    // blx r4
    *((u32*)r5) = ~(r0);
}




void ov74_0222AB70(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u16*)r0) = r1;
    *((u32*)sp) = (r0 + 0x18);
    *((u32*)(sp + 4)) = (r0 + 0x18);
    *((u32*)(sp + 8)) = (r0 + 0x18);
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x10)) = (r0 + 0x18);
}




void ov74_0222AC1C(void) {
    *((u32*)((((s32)((r0 + r0)) >> 0x10) + 0x8c) + 0x84)) = (r4 + (r4 + r1));
    *((u32*)r5) = ((((s32)((r0 + r0)) >> 0x10) + 0x8c) + 0x84);
    *((u32*)(r4 + ((((s32)((r0 + r0)) >> 0x10) + 0x8c) + 0x84))) = (r4 + (r4 + r1));
    *((u32*)(r4 + ((((s32)((r0 + r0)) >> 0x10) + 0x8c) + 0x84))) = (r4 + (r4 + r1));
    *((u32*)r5) = ((((s32)((r0 + r0)) >> 0x10) + 0x8c) + 0x84);
    *((u32*)r5) = (r4 + (r4 + ((((s32)((r0 + r0)) >> 0x10) + 0x8c) + 0x84)));
}




void ov74_0222ACD8(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r1;
    *((u32*)sp) = ~(r0);
    *((u32*)(sp + 4)) = ~(r0);
    *((u32*)(sp + 0x1c)) = r6;
    *((u32*)sp) = r4;
}




void ov74_0222AD6C(void) {
}




void ov74_0222ADBC(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
}




void ov74_0222AE3C(void) {
}




void ov74_0222AE6C(void) {
    *((u32*)r4) = r0;
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r0)) = r1;
}




void ov74_0222AF28(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = r1;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = (r1 + 0xd8);
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = ((r1 + 0xd8) + 0xdc);
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = (((r1 + 0xd8) + 0xdc) + 0xe0);
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = ((((r1 + 0xd8) + 0xdc) + 0xe0) + 0xe4);
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = (((((r1 + 0xd8) + 0xdc) + 0xe0) + 0xe4) + 0xd8);
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = ((((((r1 + 0xd8) + 0xdc) + 0xe0) + 0xe4) + 0xd8) + 0xdc);
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = (((((((r1 + 0xd8) + 0xdc) + 0xe0) + 0xe4) + 0xd8) + 0xdc) + 0xe0);
    *((u32*)sp) = ((((((((r1 + 0xd8) + 0xdc) + 0xe0) + 0xe4) + 0xd8) + 0xdc) + 0xe0) + 0xe4);
    *((u32*)(sp + 4)) = ~(r0);
    *((u32*)(sp + 8)) = ~(r0);
    *((u32*)(sp + 0xc)) = ~(r0);
    *((u32*)(sp + 0x10)) = ~(r0);
    *((u32*)(sp + 0x14)) = r3;
    *((u32*)(sp + 0x18)) = r3;
    *((u32*)(sp + 0x1c)) = (r3 + 8);
    *((u32*)(sp + 0x20)) = r2;
    *((u32*)(sp + 0x24)) = ~(r0);
    *((u32*)(sp + 0x28)) = ~(r0);
    *((u32*)sp) = ((((((((r1 + 0xd8) + 0xdc) + 0xe0) + 0xe4) + 0xd8) + 0xdc) + 0xe0) + 0xe4);
    *((u32*)(sp + 4)) = ~((~(r0) + 0x10));
    *((u32*)(sp + 8)) = ~((~(r0) + 0x10));
    *((u32*)(sp + 0xc)) = ~((~(r0) + 0x10));
    *((u32*)(sp + 0x10)) = ~((~(r0) + 0x10));
    *((u32*)(sp + 0x14)) = (r3 + 8);
    *((u32*)(sp + 0x18)) = (r3 + 8);
    *((u32*)(sp + 0x1c)) = ((r3 + 8) + 8);
    *((u32*)(sp + 0x20)) = r2;
    *((u32*)(sp + 0x24)) = ~((~(r0) + 0x10));
    *((u32*)(sp + 0x28)) = ~((~(r0) + 0x10));
}




void ov74_0222B0C8(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = ((r0 + 0x10) + r2);
    *((u32*)(sp + 0x10)) = r2;
    *((u32*)(sp + 0x14)) = r3;
    *((u32*)(sp + 0x18)) = r3;
    *((u32*)(sp + 0x1c)) = r3;
    *((u32*)(sp + 8)) = (sp + 0);
    *((u32*)(sp + 0x24)) = (sp + 0);
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x28)) = r1;
    *((u32*)(sp + 0x2c)) = (sp + 0);
    *((u32*)(sp + 0xc)) = (r2 + (sp + 0));
}




void ov74_0222B144(void) {
    *((u32*)(r4 + r1)) = r0;
    *((u32*)r0) = r1;
}




void ov74_0222B19C(void) {
    *((u32*)(r4 + r1)) = r0;
    *((u32*)r0) = r1;
}




void ov74_0222B1F4(void) {
}




void ov74_0222B20C(void) {
}




void ov74_0222B224(void) {
    *((u32*)sp) = r0;
}




void ov74_0222B288(void) {
    *((u32*)(r1 + 0x94)) = r0;
}




void ov74_0222B2C4(void) {
    *((u32*)(r1 + 0x94)) = r0;
    *((u32*)(((r0 + 0x94) + 0x94) + 0x94)) = r7;
}




void ov74_0222B30C(void) {
    *((u32*)(r5 + r1)) = r0;
}




void ov74_0222B344(void) {
    *((u32*)((r0 + 0x94) + 0x94)) = r6;
}




void ov74_0222B374(void) {
    *((u32*)(r5 + r0)) = r6;
}




void ov74_0222B3A4(void) {
    // str r0, [sp]
    // add r0, #0x88
    // add r7, sp, #0x64
    // str r0, [sp]
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0x98
    // str r2, [r0]
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, #0xa4
    // str r1, [r0]
    // add r0, #0xa8
    // str r1, [r0]
    // sub r1, r1, r2
    // ror r1, r0
    // add r1, r2, r1
    // add r0, #0xb4
    // str r1, [r0]
    // add r0, #0xbc
    // str r1, [r0]
    // add r0, #0x8c
    // str r1, [r0]
    _s32_div_f(0, 0xa, (0 >> 0x1f), _0223B3BC);
    _fflt(((r0 + 4) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // add r1, #0xa4
    // str r0, [r1]
    LCRandom(r5);
    _s32_div_f(5);
    // add r0, r4, r0
    // add r1, r0, r1
    // add r0, #0xb8
    // str r1, [r0]
    LCRandom(r5);
    _s32_div_f(5);
    // add r0, #0xfa
    // add r1, r0, r1
    // add r0, #0xb8
    // str r1, [r0]
    LCRandom(r5);
    _s32_div_f(5);
    // add r0, #0xf0
    // add r1, r0, r1
    // add r0, #0xb8
    // str r1, [r0]
    LCRandom(r5);
    _s32_div_f(5);
    // add r0, #0xe6
    // add r1, r0, r1
    // add r0, #0xb8
    // str r1, [r0]
    LCRandom(r5);
    _s32_div_f(5);
    // add r0, #0xdc
    // add r1, r0, r1
    // add r0, #0xb8
    // str r1, [r0]
    // add r6, sp, #0x10
    // add r3, sp, #0x64
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, #0xb8
    // str r1, [r0]
    // add r0, #0xb8
    // add r0, r1, r0
    // asr r0, r0, #1
    _dflt(((*((u32*)r5) + 1) >> 0x1f), (*((u32*)r5) + 1), (0xa - 1));
    _dmul(0x66666666, 0x3FE66666, r0, r1);
    _dfix();
    // add r1, #0xb8
    // str r0, [r1]
    // add r0, #0xb8
    // add r0, #0xb8
    // str r1, [r0]
    // add r0, #0xc0
    // str r1, [r0]
    // add r0, #0xc0
    // add r0, #0xc8
    // str r1, [r0]
    // add r0, #0xc0
    // add r0, #0xcc
    // str r1, [r0]
    // add r0, #0x94
    Sprite_GetMatrixPtr(*((u32*)r5), *((u32*)r5));
    // ldmia r3!, {r0, r1}
    // add r2, sp, #4
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    LCRandom(*((u32*)r0), r0);
    _s32_div_f(0xe0);
    // add r1, #0x10
    LCRandom();
    _s32_div_f(0xe0);
    // add r1, #0x10
    _fflt((r1 << 0xc));
    _fadd((0x3f << 0x18), r0);
    LCRandom();
    _s32_div_f(0xe0);
    // add r1, #0x10
    _fflt((r1 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x94
    // add r1, sp, #4
    Sprite_SetMatrix(*((u32*)r5));
    // add r0, #0x94
    Sprite_SetDrawFlag(*((u32*)r5), 0);
    // ldr r1, [sp]
    SysTask_CreateOnMainQueue(ov74_0222BA48, 6);
    // add r1, #0xd0
    // str r0, [r1]
    // ldr r0, [sp]
    // add r0, #0x4c
    // add r5, #0x4c
    // str r0, [sp]
}




void ov74_0222B5F8(void) {
    *((u32*)(r1 + 0x98)) = (r0 + 0x94);
    *((u32*)((r1 + 0x98) + 0x9c)) = (r0 + 0x94);
    *((u32*)(((r1 + 0x98) + 0x9c) + 0xa4)) = (r0 + 0x94);
    *((u32*)((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8)) = (r0 + 0x94);
    *((u32*)(((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4)) = (r0 + 0x94);
    *((u32*)((((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4) + 0xbc)) = (r0 + 0x94);
    *((u32*)(((((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4) + 0xbc) + 0x8c)) = (r0 + 0x94);
    *((u32*)((((((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4) + 0xbc) + 0x8c) + 0x90)) = (r0 + 0x94);
    *((u32*)((r0 + 0x94) + 0xb8)) = (((((((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4) + 0xbc) + 0x8c) + 0x90) + 0xf);
    *((u32*)(((r0 + 0x94) + 0xb8) + 0xb8)) = ((((((((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4) + 0xbc) + 0x8c) + 0x90) + 0xf) + 0xa);
    *((u32*)((((r0 + 0x94) + 0xb8) + 0xb8) + 0xb8)) = (((((((((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4) + 0xbc) + 0x8c) + 0x90) + 0xf) + 0xa) + 0xa);
    *((u32*)(((((r0 + 0x94) + 0xb8) + 0xb8) + 0xb8) + 0xb8)) = (((((((((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4) + 0xbc) + 0x8c) + 0x90) + 0xf) + 0xa) + 0xa);
    *((u32*)((((((((((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4) + 0xbc) + 0x8c) + 0x90) + 0xf) + 0xa) + 0xa) + 0xb8)) = (((((r0 + 0x94) + 0xb8) + 0xb8) + 0xb8) + 0xb8);
    *((u32*)(((((((r0 + 0x94) + 0xb8) + 0xb8) + 0xb8) + 0xb8) + 0xc0) + 0xc8)) = ((((((((((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4) + 0xbc) + 0x8c) + 0x90) + 0xf) + 0xa) + 0xa) + 0xb8);
    *((u32*)(((((((((r0 + 0x94) + 0xb8) + 0xb8) + 0xb8) + 0xb8) + 0xc0) + 0xc8) + 0xc0) + 0xcc)) = ((((((((((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4) + 0xbc) + 0x8c) + 0x90) + 0xf) + 0xa) + 0xa) + 0xb8);
    *((u32*)sp) = ((((((((((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4) + 0xbc) + 0x8c) + 0x90) + 0xf) + 0xa) + 0xa) + 0xb8);
    // sub r1, r1, r2
    // ror r1, r0
    *((u32*)(sp + 4)) = ((((((((((((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4) + 0xbc) + 0x8c) + 0x90) + 0xf) + 0xa) + 0xa) + 0xb8) + 0x98) + *((u32*)sp));
    *((u32*)(sp + 8)) = (((((((((((((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4) + 0xbc) + 0x8c) + 0x90) + 0xf) + 0xa) + 0xa) + 0xb8) + 0x98) + 0x9c) + *((u32*)sp));
    *((u32*)((sp + 4) + 0xd0)) = ((((((((((((((((((r1 + 0x98) + 0x9c) + 0xa4) + 0xa8) + 0xb4) + 0xbc) + 0x8c) + 0x90) + 0xf) + 0xa) + 0xa) + 0xb8) + 0x98) + 0x9c) + *((u32*)sp)) + 0x94) + 0x94) + 0x94);
}




void ov74_0222B760(void) {
    // add r6, r5, r0
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r1, [r5, r0]
    // add r0, #8
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    LCRandom(0x0000184C, 0, (0 >> 0x1f));
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r1, [r5, r0]
    _s32_div_f(r4, 0x1e, (r0 >> 0x1f));
    _fflt(((r0 + 4) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    LCRandom((0x62 << 6), 5);
    _s32_div_f(0xa);
    // add r1, #0x46
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    LCRandom((0x62 << 6), 5);
    _s32_div_f(0xa);
    // add r1, #0x3c
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    LCRandom((0x62 << 6), 5);
    _s32_div_f(5);
    // add r1, #0x32
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    LCRandom((0x62 << 6), 5);
    _s32_div_f(0xa);
    // add r1, #0x28
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    LCRandom((0x62 << 6), 5);
    _s32_div_f(0xa);
    // add r1, #0x1e
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    LCRandom((0x62 << 6), 5);
    _s32_div_f(5);
    // add r1, #0x14
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    LCRandom((0x62 << 6), 5);
    _s32_div_f(5);
    // add r1, #0xa
    // str r1, [r5, r0]
    // add r0, #8
    // str r1, [r5, r0]
    // add r0, #0xc
    // str r1, [r5, r0]
    Sprite_GetMatrixPtr(*((u32*)(r5 + 0x00001854)), *((u32*)(r5 + (0x62 << 6))));
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    Sprite_SetMatrix(*((u32*)(r5 + 0x00001854)), r2, r0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00001854)), 1);
    SysTask_CreateOnMainQueue(ov74_0222BA48, r6, 6);
    // str r0, [r5, r1]
    // add r5, #0x4c
    // add r6, #0x4c
}




void ov74_0222B950(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0x14)) = r0;
    // ldrsh r0, [r1, r0]
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 8));
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0xc));
    *((u32*)*((u32*)(sp + 0x28))) = *((u32*)(sp + 0x10));
    *((u32*)*((u32*)(sp + 0x2c))) = *((u32*)(sp + 0x14));
}




void ov74_0222BA48(void) {
    Sprite_SetAnimationFrame(*((u32*)(r1 + 0xc)), 0);
    *((u32*)(r5 + 0x30)) = (*((u32*)(r5 + 0x30)) - 1);
    Sprite_SetDrawFlag((*((u32*)(r5 + 0x30)) - 1), 1);
    Sprite_GetMatrixPtr(*((u32*)(r5 + 0xc)));
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x18
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x18]
    _fflt(*((u32*)r0), r0);
    _fdiv(0x45800000);
    // ldr r0, [sp, #0x1c]
    _fflt();
    _fdiv(0x45800000);
    _fflt(*((u32*)(r5 + 0x1c)));
    _fdiv(0x45800000);
    _fflt(*((u32*)(r5 + 0x20)));
    _fdiv(0x45800000);
    _ffix();
    // add r1, sp, #0x14
    // str r1, [sp]
    // add r1, sp, #0x10
    // str r1, [sp, #4]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov74_0222B950((*((u32*)(r5 + 0x10)) << 4), (*((u32*)(r5 + 0x14)) << 4), r6, r7);
    // ldr r0, [sp, #0x14]
    _fgr(*((u32*)(r5 + 0x24)), 0);
    // ldr r1, [sp, #0x14]
    _fmul(0x45800000);
    _fadd((0x3f << 0x18), r0);
    // ldr r1, [sp, #0x14]
    _fmul();
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    _fgr(0);
    // ldr r1, [sp, #0x10]
    _fmul(0x45800000);
    _fadd((0x3f << 0x18), r0);
    // ldr r1, [sp, #0x10]
    _fmul();
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x18
    Sprite_SetMatrix(*((u32*)(r5 + 0xc)));
    // ldr r0, [sp, #0x18]
    // sub r0, r1, r0
    _fflt((*((u32*)(r5 + 0x24)) << 0xc), *((u32*)(r5 + 0x10)));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    // ldr r0, [sp, #0x1c]
    // sub r0, r1, r0
    _fflt((r0 << 0xc), *((u32*)(r5 + 0x14)));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    _ffix(r4);
    FX_Atan2Idx(r6, r0);
    *((u32*)(r5 + 0x28)) = r0;
    *((u32*)(r5 + 0x24)) = (*((u32*)(r5 + 0x24)) + 1);
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
    *((u32*)(r5 + 8)) = 1;
    // add r0, #8
    *((u32*)(r5 + 0x28)) = *((u32*)(r5 + 0x28));
    // add r0, #8
    *((u32*)(r5 + 0x34)) = *((u32*)(r5 + 0x34));
    _s32_div_f(*((u32*)(r5 + 0x34)), (0x5a << 2));
    *((u32*)(r5 + 0x34)) = r1;
    GF_CosDeg(((r1 << 0x10) >> 0x10));
    // asr r0, r0, #0xc
    *((u32*)(r5 + 0x40)) = (r0 * *((u32*)(r5 + 0x38)));
    GF_SinDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x38)));
    // add r0, r2, r0
    // str r0, [sp, #0x18]
    GF_CosDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x40)), *((u32*)(r5 + 0x10)));
    // add r0, r2, r0
    // str r0, [sp, #0x1c]
    // add r0, #8
    *((u32*)(r5 + 0x34)) = *((u32*)(r5 + 0x34));
    _s32_div_f(*((u32*)(r5 + 0x34)), (0x5a << 2), *((u32*)(r5 + 0x14)));
    *((u32*)(r5 + 0x34)) = r1;
    GF_SinDeg(((r1 << 0x10) >> 0x10));
    // asr r0, r0, #0xc
    *((u32*)(r5 + 0x44)) = (r0 * *((u32*)(r5 + 0x38)));
    GF_SinDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x38)));
    // add r0, r2, r0
    // str r0, [sp, #0x18]
    GF_CosDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x40)), *((u32*)(r5 + 0x10)));
    // add r0, r2, r0
    // str r0, [sp, #0x1c]
    // add r0, #8
    *((u32*)(r5 + 0x34)) = *((u32*)(r5 + 0x34));
    _s32_div_f(*((u32*)(r5 + 0x34)), (0x5a << 2), *((u32*)(r5 + 0x14)));
    *((u32*)(r5 + 0x34)) = r1;
    GF_SinDeg(((r1 << 0x10) >> 0x10));
    // asr r0, r0, #0xc
    *((u32*)(r5 + 0x44)) = (r0 * *((u32*)(r5 + 0x38)));
    GF_SinDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x38)));
    // mvn r0, r0
    // add r0, r3, r0
    // str r0, [sp, #0x18]
    GF_CosDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x40)), (*((u32*)(r5 + 0x40)) * r0), *((u32*)(r5 + 0x10)));
    // mvn r0, r0
    // add r0, r3, r0
    // str r0, [sp, #0x1c]
    // add r0, #8
    *((u32*)(r5 + 0x34)) = *((u32*)(r5 + 0x34));
    _s32_div_f(*((u32*)(r5 + 0x34)), (0x5a << 2), (*((u32*)(r5 + 0x44)) * r0), *((u32*)(r5 + 0x14)));
    *((u32*)(r5 + 0x34)) = r1;
    GF_CosDeg(((r1 << 0x10) >> 0x10));
    // asr r0, r0, #0xc
    *((u32*)(r5 + 0x40)) = (r0 * *((u32*)(r5 + 0x38)));
    GF_SinDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x38)));
    // mvn r0, r0
    // add r0, r3, r0
    // str r0, [sp, #0x18]
    GF_CosDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x40)), (*((u32*)(r5 + 0x40)) * r0), *((u32*)(r5 + 0x10)));
    // mvn r0, r0
    // add r0, r3, r0
    // str r0, [sp, #0x1c]
    // add r0, r1, r0
    *((u32*)(r5 + 0x38)) = *((u32*)(r5 + 0x3c));
    *((u32*)(r5 + 0x40)) = *((u32*)(r5 + 0x38));
    *((u32*)(r5 + 0x44)) = *((u32*)(r5 + 0x38));
    GF_SinDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x38)), (*((u32*)(r5 + 0x44)) * r0), *((u32*)(r5 + 0x14)));
    // add r0, r2, r0
    // str r0, [sp, #0x18]
    GF_CosDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x40)), *((u32*)(r5 + 0x10)));
    // add r0, r2, r0
    // str r0, [sp, #0x1c]
    // add r0, r1, r0
    *((u32*)(r5 + 0x38)) = *((u32*)(r5 + 0x3c));
    *((u32*)(r5 + 0x40)) = *((u32*)(r5 + 0x38));
    *((u32*)(r5 + 0x44)) = *((u32*)(r5 + 0x38));
    GF_SinDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x38)), *((u32*)(r5 + 0x14)));
    // mvn r0, r0
    // add r0, r3, r0
    // str r0, [sp, #0x18]
    GF_CosDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x40)), (*((u32*)(r5 + 0x40)) * r0), *((u32*)(r5 + 0x10)));
    // mvn r0, r0
    // add r0, r3, r0
    // str r0, [sp, #0x1c]
    *((u32*)(r5 + 4)) = 0xa;
    // add r0, r1, r0
    *((u32*)(r5 + 0x1c)) = (2 << 0xa);
    // ldr r0, [sp, #0x18]
    _fflt((2 << 0xa), *((u32*)(r5 + 0x1c)), (*((u32*)(r5 + 0x44)) * r0), *((u32*)(r5 + 0x14)));
    _fdiv(0x45800000);
    // ldr r0, [sp, #0x1c]
    _fflt();
    _fdiv(0x45800000);
    _fflt(*((u32*)(r5 + 0x1c)));
    _fdiv(0x45800000);
    // add r1, sp, #0x14
    // str r1, [sp]
    // add r1, sp, #0x10
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov74_0222B950((*((u32*)(r5 + 0x10)) << 4), (*((u32*)(r5 + 0x14)) << 4), r4, r6);
    // ldr r0, [sp, #0x14]
    _fgr(0);
    // ldr r1, [sp, #0x14]
    _fmul(0x45800000);
    _fadd((0x3f << 0x18), r0);
    // ldr r1, [sp, #0x14]
    _fmul();
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    _fgr(0);
    // ldr r1, [sp, #0x10]
    _fmul(0x45800000);
    _fadd((0x3f << 0x18), r0);
    // ldr r1, [sp, #0x10]
    _fmul();
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x18
    Sprite_SetMatrix(*((u32*)(r5 + 0xc)));
    *((u32*)(r5 + 8)) = 1;
    _s32_div_f(*((u32*)(r5 + 0x28)), (0x5a << 2));
    *((u32*)(r5 + 0x28)) = r1;
    // add r1, sp, #0x18
    Sprite_SetMatrix(*((u32*)(r5 + 0xc)));
}




void ov74_0222BED8(void) {
    // ldrsb r2, [r3, r2]
}




void ov74_0222BEF0(void) {
    // ldrsb r2, [r3, r2]
}




void ov74_0222BF08(void) {
}




void ov74_0222BF18(void) {
}




void ov74_0222BF2C(void) {
    // ldrsb r1, [r0, r1]
    // sub r1, r1, r2
    // bpl _0222BF64
    // ldrsb r1, [r0, r3]
    // sub r2, r1, r2
    // sub r1, #0x18
    // sub r3, #0x18
    // ldrsb r1, [r0, r1]
}




void ov74_0222BFA0(void) {
    // ldrsb r1, [r0, r1]
    // sub r1, r1, r2
    // bpl _0222BFD8
    // ldrsb r1, [r0, r3]
    // sub r2, r1, r2
    // sub r1, #0x18
    // sub r3, #0x18
    // ldrsb r1, [r0, r1]
}




void ov74_0222C014(void) {
}




void ov74_0222C04C(void) {
    // add r1, pc
    // add pc, r1
    *((u32*)r4) = r0;
    *((u32*)r4) = r0;
    *((u32*)r4) = r0;
    *((u32*)r4) = r0;
    *((u32*)r4) = r0;
    *((u32*)r4) = r0;
    // sub r2, r2, r1
    *((u32*)r4) = r0;
    *((u32*)r4) = r0;
    *((u32*)r4) = r0;
    *((u32*)r4) = r0;
    *((u32*)(((r2 + 0x90) + 0x4c) + (((r2 + 0x90) + 0x4c) + (((s32)((r1 + r1)) >> 0x10) + 0x4c)))) = ((r2 + 0x90) + 0x4c);
}




void ov74_0222C2EC(void) {
    *((u32*)(r4 + ((s32)((r3 + r3)) >> 0x10))) = r5;
    *((u32*)r5) = ((s32)((r3 + r3)) >> 0x10);
    *((u32*)((r1 + 0x8c) + 0x80)) = ((s32)((r3 + r3)) >> 0x10);
    *((u32*)r5) = (((s32)((r3 + r3)) >> 0x10) + 0x80);
    *((u32*)sp) = ((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58);
    *((u32*)(sp + 4)) = ((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58);
    *((u32*)(sp + 8)) = ((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58);
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x10)) = ((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58);
    *((u32*)r5) = ((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58);
    // sub r0, #0x2e
    *((u32*)r5) = ((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58);
    *((u32*)(r4 + ((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58))) = (((((r1 + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18);
    *((u32*)(r6 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58))) = (r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58));
    *((u32*)r5) = (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58);
    *((u32*)r5) = (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58);
    *((u32*)(r4 + ((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18))) = ~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18));
    *((u32*)r5) = ((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18);
    *((u8*)((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) = ~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18)));
    *((u32*)r5) = ((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda);
    // sub r0, #0x2d
    *((u32*)r5) = ((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda);
    *((u32*)(r4 + (~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18))) = ((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda);
    *((u32*)(((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80)) = ~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda));
    *((u32*)sp) = (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58);
    *((u32*)(sp + 4)) = (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58);
    *((u32*)(sp + 8)) = (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58);
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x10)) = (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58);
    *((u32*)r5) = (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58);
    *((u32*)(r4 + (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58))) = ((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18);
    *((u32*)r5) = (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58);
    *((u32*)(r4 + (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58))) = (((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18);
    *((u32*)r5) = (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58);
    *((u32*)r5) = (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58);
    *((u32*)(r4 + (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58))) = ~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18));
    *((u32*)r5) = (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58);
    *((u32*)r5) = (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58);
    *((u32*)(r4 + ~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18))))) = (r2 + 0x8c);
    *((u32*)r5) = (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58);
    *((u32*)r5) = (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58);
    *((u32*)(r4 + (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58))) = ~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)));
    *((u32*)r5) = (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58);
    *((u32*)r5) = (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58);
    *((u32*)(r4 + (~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58))) = ~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18))));
    *((u8*)(((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda)) = ~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18))));
    *((u32*)r5) = (((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda);
    *((u32*)(r4 + (((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda))) = (~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18);
    *((u32*)r5) = (((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda);
    *((u32*)(r4 + (((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda))) = (~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18);
    *((u8*)(((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda)) = (~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18);
    *((u32*)r5) = (((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda);
    *((u8*)((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda)) = ((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18);
    *((u32*)r5) = ((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda);
    *((u32*)(r4 + ((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda))) = (((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18);
    *((u32*)r5) = ((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda);
    *((u32*)r5) = (((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58);
    *((u32*)(r4 + (((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58))) = ((~((((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18)) + 0x18) + 0x18);
    *((u32*)r5) = ((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58);
    *((u32*)r5) = ((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58);
    *((u32*)(r4 + ((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58))) = (((~((((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18)) + 0x18) + 0x18) + 0x18);
    *((u32*)(((((~((((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18)) + 0x18) + 0x18) + 0x18) + 0x8c) + 0x80)) = ((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c);
    *((u32*)r5) = (((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80);
    *((u32*)sp) = ((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58);
    *((u32*)(sp + 4)) = ((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58);
    *((u32*)(sp + 8)) = ((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58);
    *((u32*)(sp + 0xc)) = (r2 + 0x8c);
    *((u32*)(sp + 0x10)) = ((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58);
    *((u32*)r5) = ((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58);
    *((u32*)r5) = ((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58);
    *((u32*)(r4 + ((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58))) = (((((((((~((((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18)) + 0x18) + 0x18) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18);
    *((u32*)r5) = ((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58);
    *((u32*)(r4 + ((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58))) = (((((((((~((((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18)) + 0x18) + 0x18) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18);
    *((u32*)r5) = ((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58);
    *((u32*)(r4 + ((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58))) = (((((((((~((((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18)) + 0x18) + 0x18) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18);
    *((u32*)r5) = ((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58);
    *((u8*)((((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58) + 0xda) + 0xda)) = ~((~((((((((((~((((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18)) + 0x18) + 0x18) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)) + 0x18));
    *((u32*)r5) = ((((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58) + 0xda) + 0xda);
    *((u32*)(r4 + ((((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58) + 0xda) + 0xda))) = (~((~((((((((((~((((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18)) + 0x18) + 0x18) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)) + 0x18)) + 0x18);
    *((u32*)(r4 + ((((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58) + 0xda) + 0xda))) = (~((~((((((((((~((((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18)) + 0x18) + 0x18) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)) + 0x18)) + 0x18);
    *((u32*)r5) = ((((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58) + 0xda) + 0xda);
    *((u32*)r5) = (((((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58) + 0xda) + 0xda) + 0x80);
    *((u32*)r5) = ((((((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58) + 0xda) + 0xda) + 0x80) + 0x48);
    *((u32*)r5) = (((((((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58) + 0xda) + 0xda) + 0x80) + 0x48) + 0x58);
    *((u32*)r5) = (((((((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58) + 0xda) + 0xda) + 0x80) + 0x48) + 0x58);
    *((u32*)((((((((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58) + 0xda) + 0xda) + 0x80) + 0x48) + 0x58) + 0x80)) = (~((~((((((((((~((((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18)) + 0x18) + 0x18) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)) + 0x18)) + 0x18);
    *((u32*)(r4 + ((((((((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58) + 0xda) + 0xda) + 0x80) + 0x48) + 0x58) + 0x80))) = (~((~((((((((((~((((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18)) + 0x18) + 0x18) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)) + 0x18)) + 0x18);
    *((u32*)(r4 + (~((~((((((((((~((((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18)) + 0x18) + 0x18) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)) + 0x18)) + 0x18))) = ((((((((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58) + 0xda) + 0xda) + 0x80) + 0x48) + 0x58) + 0x80);
    *((u32*)(r4 + ((((((((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58) + 0xda) + 0xda) + 0x80) + 0x48) + 0x58) + 0x80))) = (~((~((((((((((~((((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18)) + 0x18) + 0x18) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)) + 0x18)) + 0x18);
    *((u8*)((((((((((((((((((((((((((~(((((((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58) + 0x18) + 0xda) + 0xda)) + 0x58) + 0xda) + 0xda) + 0xda) + 0xda) + 0x58) + 0xda) + 0xda) + 0x58) + 0x58) + 0x84) + 0x8c) + 0x80) + 0x58) + 0xda) + 0xda) + 0x80) + 0x48) + 0x58) + 0x80) + 0xda) + 0xda) + 0xdc) + 0xe0) + 0xda) + 0xda)) = (((~((~((((((((((~((((~(~(~((((((((~(~(((r4 + (((((s32)((r3 + r3)) >> 0x10) + 0x80) + 0x58) + 0x58)) + 0x18))) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)))) + 0x18) + 0x18) + 0x18)) + 0x18) + 0x18) + 0x18) + 0x8c) + 0x80) + 0x58) + 0x58) + 0x18) + 0x18)) + 0x18)) + 0x18) + 0xdc) + 0xdc);
    // blx r1
}




void ov74_0222CD7C(void) {
}




void ov74_0222CD88(void) {
    *((u32*)r1) = r0;
}




void ov74_0222CD94(void) {
    OverlayManager_GetData();
    RegisterMainOverlay(FS_OVERLAY_ID, gApplication_TitleScreen);
    RegisterMainOverlay(FS_OVERLAY_ID, _0223B410);
    RegisterMainOverlay(FS_OVERLAY_ID, _0223B420);
    Heap_Destroy(0x59);
    OverlayManager_FreeData(r5);
    Heap_Destroy(0x54);
    sub_0201A4B0(0);
    ov74_02236034(0);
}




void ov74_0222CE10(void) {
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r0)) = r1;
}




void ov74_0222CE6C(void) {
}




void ov74_0222CEC0(void) {
    sub_02034DE0();
    Heap_Free(*((u32*)(ov74_0223D0A8 + 4)));
    sub_0203A914();
    *((u32*)(ov74_0223D0A8 + 4)) = 0;
}




void ov74_0222CEE0(void) {
    // sub r0, r1, r0
    // sub r0, #0x25
    // sub r0, #0x28
}




void ov74_0222CFFC(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}




void ov74_0222D024(void) {
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r1)) = r2;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r0)) = r2;
    // sub r1, #8
    *((u32*)(r4 + r1)) = r0;
}




void ov74_0222D098(void) {
    *((u32*)(r4 + r1)) = r0;
    *((u32*)sp) = r1;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(r4 + r1)) = r0;
}




void ov74_0222D0EC(void) {
}




void ov74_0222D104(void) {
}




void ov74_0222D11C(void) {
    // str r3, [sp]
    ListMenuItems_Delete(*((u32*)(r0 + 0x00002BCC)));
    DestroyListMenu(*((u32*)(r5 + 0x00002BC8)), 0, 0);
    ListMenuItems_New(r7, 0x55);
    // str r0, [r5, r1]
    NewMsgDataFromNarc(0, 0x1b, 0xf7, 0x55);
    // str r0, [r5, r1]
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x00002BCC)), *((u32*)(r5 + 0x00002A04)), *((u32*)r4), *((u32*)(r4 + 4)));
    // add r4, #8
    DestroyMsgData(*((u32*)(r5 + 0x00002A04)));
    // add r3, sp, #4
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [sp, #4]
    // add r0, sp, #4
    *((u16*)(*((u32*)(r5 + 0x00002BCC)) + 0x10)) = r7;
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x38]
    ListMenuInit(r3, 0, ((r3 << 0x10) >> 0x10), 0x55);
    // str r0, [r5, r1]
}




void ov74_0222D1D4(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r3;
}




void ov74_0222D248(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
}




void ov74_0222D2D4(void) {
}




void ov74_0222D308(void) {
}




void ov74_0222D358(void) {
    *((u32*)(r4 + r1)) = (r4 + (r4 + r0));
    *((u32*)(r4 + (((r1 + 0x20) + 0x20) + 0x20))) = (r4 + (r4 + r0));
}




void ov74_0222D414(void) {
}




void ov74_0222D448(void) {
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r0)) = r1;
}




u8 ov74_0222D490(void) {
}




void ov74_0222D494(void) {
    // sub r1, #0xc
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r4;
    *((u32*)(sp + 0xc)) = r3;
}




void ov74_0222D4E4(void) {
    // sub r2, #0xc
    // sub r0, #0x20
    *((u32*)sp) = (r4 + r2);
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r5;
    *((u32*)(sp + 0xc)) = (r4 + r2);
}




void ov74_0222D55C(void) {
    // sub r1, #0xc
    *((u32*)sp) = (sp + 8);
    *((u32*)(sp + 4)) = (sp + 8);
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = (sp + 8);
}




void ov74_0222D5C4(void) {
    // sub r1, #0xc
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r4;
    *((u32*)(sp + 0xc)) = r3;
}




void ov74_0222D614(void) {
    // sub r0, #0xc
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r5;
    *((u32*)(sp + 0xc)) = r3;
    *((u32*)sp) = (r3 + r1);
    *((u32*)(sp + 4)) = r0;
}




void ov74_0222D690(void) {
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)(sp + 0x18)) = r2;
    // sub r0, #0xc
    *((u32*)((sp + 0x14) + r1)) = r0;
    *((u32*)((sp + 0x14) + r1)) = r0;
    *((u32*)((sp + 0x14) + r1)) = r0;
    // sub r0, r0, r1
    *((u32*)sp) = (r1 + r0);
    *((u32*)(sp + 4)) = (r1 + r0);
    // sub r0, r1, r0
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)sp) = r0;
}




void ov74_0222D774(void) {
}




void ov74_0222D78C(void) {
}




void ov74_0222D7A4(void) {
    *((u32*)sp) = (r5 + r0);
}




void ov74_0222D7D0(void) {
}




void ov74_0222D7F0(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)r4) = r0;
    *((u32*)(r5 + r0)) = r6;
}




void ov74_0222D824(void) {
    *((u32*)(sp + 0x14)) = r2;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x30)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x1c)) = r5;
    *((u32*)(sp + 0x1c)) = (*((u32*)(sp + 0x1c)) + 0x10);
    *((u32*)(sp + 0x30)) = *((u32*)(sp + 0x30));
    *((u32*)(sp + 0x2c)) = *((u32*)(sp + 0x30));
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x30));
    *((u32*)(sp + 0x24)) = r5;
    *((u32*)(sp + 0x20)) = r5;
    *((u32*)(*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x14)))) = *((u32*)(sp + 0x2c));
    *((u32*)sp) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x28)) = *((u32*)(sp + 0x14));
    // blx r3
    *((u32*)sp) = ~(*((u32*)(sp + 0x14)));
    *((u32*)(sp + 4)) = ~(*((u32*)(sp + 0x14)));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x28));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x28));
    *((u32*)(sp + 0x2c)) = (*((u32*)(sp + 0x2c)) + *((u32*)(sp + 0x28)));
    *((u32*)(sp + 0x24)) = (*((u32*)(sp + 0x24)) + 0x10);
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x18));
}




void ov74_0222D9E0(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r0)) = r7;
    *((u32*)(r5 + r0)) = (r0 + r3);
    // blx r3
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r3;
}




void ov74_0222DAF8(void) {
}




void ov74_0222DB30(void) {
    *((u32*)sp) = r2;
}




void ov74_0222DB70(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
}




void ov74_0222DC60(void) {
    // blx r6
    *((u32*)r5) = ~(r0);
    *((u32*)r5) = r4;
    *((u32*)~(r0)) = r4;
    // blx r4
    *((u32*)r5) = ~(r0);
}




void ov74_0222DCD4(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0xc)) = r4;
    *((u32*)(sp + 8)) = r0;
    *((u32*)sp) = (*((u32*)(sp + 0xc)) + 0xa);
    *((u32*)(r5 + (r0 + r4))) = (*((u32*)(sp + 0xc)) + 0xa);
    *((u32*)sp) = *((u32*)(sp + 8));
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 8));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0xc));
    *((u32*)(sp + 0x10)) = (*((u32*)(sp + 0x10)) + 0x19);
}




void ov74_0222DDFC(void) {
    *((u32*)(r4 + r1)) = r0;
    *((u32*)r4) = r0;
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + (r0 + 0x7c))) = r1;
}




void ov74_0222DE68(void) {
    sub_02014AA0();
    sub_02014A60(*((u32*)(r4 + (3 << 0xa))));
    sub_02014AB0(0x04000010, 8, 1);
}




void ov74_0222DE8C(void) {
    *((u32*)((r0 + r4) + r5)) = r1;
    // sub r0, #0xc
    *((u32*)((r0 + r4) + r0)) = r2;
    // sub r0, #8
    // sub r5, #0x14
    *((u32*)((r0 + r4) + r0)) = r3;
    *((u32*)((r0 + r4) + r1)) = r0;
    *((u32*)((r0 + r4) + r1)) = r0;
    *((u32*)((r0 + r4) + r0)) = r1;
}




void ov74_0222DEF0(void) {
    *((u32*)((r0 + r1) + r0)) = r1;
    *((u32*)((r0 + r1) + r0)) = r1;
}




void ov74_0222DF2C(void) {
    // sub r1, #8
    // sub r1, #8
    *((u32*)((r0 + r1) + r1)) = (r2 + r1);
    *((u32*)((r0 + r1) + r1)) = ((r2 + r1) + r1);
    // sub r1, #8
    *((u32*)((r0 + r1) + r0)) = ((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc);
    // sub r1, #8
    *((u32*)((r0 + r1) + (((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb)))) = ((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc);
    *((u32*)((r0 + r1) + r0)) = ((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc);
    // sub r1, #8
    // sub r2, r2, r1
    // sub r1, #8
    *((u32*)((r0 + r1) + (((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb)))) = ((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc);
    *((u32*)((r0 + r1) + (((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc) + (((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))))) = ((s32)((((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc) + (((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb)))) >> 1);
    *((u32*)((r0 + r1) + r0)) = (((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc) + (((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb)));
    // sub r2, #8
    *((u32*)((r0 + r1) + ((s32)((((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc) + (((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb)))) >> 1))) = r3;
    *((u32*)((r0 + r1) + r0)) = (((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc) + (((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb)));
    // bpl _0222DFEA
    // sub r6, r1, r0
    // sub r1, r0, r1
    // sub r6, r6, r0
}




void ov74_0222E03C(void) {
    *((u32*)(r4 + r0)) = r1;
}




void ov74_0222E060(void) {
    // sub r0, #0xc
    // strb r1, [r2, r0]
    // sub r0, #0xc
    // strb r1, [r2, r0]
    *((u32*)(r4 + r0)) = (r4 + (r4 + r1));
}




void ov74_0222E0D4(void) {
    *((u32*)(r5 + r1)) = r2;
    *((u32*)(r5 + r1)) = r2;
    // and r1, r0
    *((u32*)(r5 + r1)) = r0;
    // sub r1, #0x64
    *((u32*)r7) = r0;
    *((u32*)(r5 + (r5 + r1))) = (r5 + r0);
}




void ov74_0222E1F4(void) {
    // add r1, pc
    // add pc, r1
    *((u32*)(r4 + r0)) = ((s32)((r1 + r1)) >> 0x10);
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r0;
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r0;
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r0;
    // sub r1, #0xc
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r0;
    // sub r1, #0x14
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r0;
    // sub r1, #0x18
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r0;
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r0;
    *((u32*)r5) = r0;
    *((u32*)r5) = r0;
    *((u32*)sp) = ((s32)((r1 + r1)) >> 0x10);
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    // sub r2, #0x41
    *((u32*)r5) = r0;
    *((u32*)(r4 + r0)) = r6;
    *((u32*)(r4 + r3)) = r0;
    // sub r1, #0x10
    *((u32*)r5) = r0;
    *((u32*)r5) = r0;
    *((u32*)r5) = (r4 + (r4 + r0));
    *((u32*)r5) = (r4 + (r4 + r0));
    *((u32*)r5) = (r4 + (r4 + r0));
    *((u32*)r5) = (r4 + (r4 + r0));
    *((u32*)r5) = (r4 + (r4 + (r4 + (r4 + r0))));
    *((u32*)r5) = (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0)))))));
    *((u32*)r5) = (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0)))))));
    *((u32*)r5) = (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0))))))))));
    *((u32*)(r4 + (r4 + (r4 + ((r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0)))))))))) + 0x90))))) = (r4 + (r4 + (r4 + (r4 + ((s32)((r1 + r1)) >> 0x10)))));
    *((u32*)(r4 + (r4 + (r4 + ((r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0)))))))))) + 0x90))))) = r6;
    *((u32*)r5) = (r4 + (r4 + (r4 + (r4 + ((r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0)))))))))) + 0x90)))));
    *((u32*)(r4 + (r4 + (r4 + (r4 + (r4 + ((r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0)))))))))) + 0x90))))))) = (r4 + (r4 + (r4 + (r4 + (r4 + ((s32)((r1 + r1)) >> 0x10))))));
    *((u32*)r5) = (r4 + ((r4 + (r4 + (r4 + (r4 + ((r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0)))))))))) + 0x90))))) + 0x90));
    *((u32*)r5) = (r4 + ((r4 + (r4 + (r4 + (r4 + ((r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0)))))))))) + 0x90))))) + 0x90));
    *((u32*)r5) = (r4 + ((r4 + (r4 + (r4 + (r4 + ((r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0)))))))))) + 0x90))))) + 0x90));
    *((u32*)r5) = (r4 + (r4 + (r4 + (r4 + ((r4 + (r4 + (r4 + (r4 + ((r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0)))))))))) + 0x90))))) + 0x90)))));
    *((u32*)r5) = (r4 + (r4 + (r4 + (r4 + ((r4 + (r4 + (r4 + (r4 + ((r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0)))))))))) + 0x90))))) + 0x90)))));
    // blx r1
}




void ov74_0222E7EC(void) {
    // sub r0, #0xc
    // strb r1, [r5, r0]
    *((u8*)((((r0 + 0xe0) + 0x90) + 0xde) + 0xde)) = (r4 + (r5 + r1));
    *((u8*)((((((r0 + 0xe0) + 0x90) + 0xde) + 0xde) + 0xde) + 0xde)) = (r4 + (r5 + r1));
}




void ov74_0222E85C(void) {
    *((u32*)((r2 + 8) + 0xc)) = r0;
}




void ov74_0222E898(void) {
}




void ov74_0222E8B4(void) {
    *((u32*)(sp + 0x10)) = r1;
    *((u32*)(sp + 0x24)) = r0;
    *((u32*)(r4 + *((u32*)(sp + 0x24)))) = r1;
    *((u32*)(r4 + (*((u32*)(sp + 0x24)) + 0x14))) = r1;
    *((u32*)(r4 + r1)) = (*((u32*)(sp + 0x24)) + 0x14);
    *((u32*)(r5 + (r1 + 0x34))) = r2;
    // sub r1, #0x20
    *((u32*)(r4 + (r1 + 0x34))) = ((*((u32*)(sp + 0x24)) + 0x14) + 0x34);
    *((u32*)(sp + 0x24)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0x38)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0x3c)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0x40)) = (*((u32*)(sp + 0x24)) + 8);
    *((u32*)(sp + 0x44)) = (*((u32*)(sp + 0x24)) + 8);
    *((u32*)(sp + 0x28)) = (sp + 0x38);
    *((u32*)(sp + 0x2c)) = (sp + 0x38);
    *((u32*)(sp + 0x30)) = (sp + 0x38);
    *((u32*)(sp + 0x34)) = (sp + 0x38);
    *((u32*)(sp + 0x1c)) = (sp + 0x38);
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 0x18)) = (sp + 0x28);
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x18));
    *((u32*)sp) = r5;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x18));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x18));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x18));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x10));
    *((u32*)sp) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x20));
    *((u32*)sp) = r5;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x18));
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x14));
}




void ov74_0222EA88(void) {
    *((u32*)(r5 + r0)) = r2;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r3;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r3;
}




void ov74_0222EB28(void) {
    *((u32*)(r5 + r0)) = r6;
    *((u32*)r4) = r0;
}




void ov74_0222EB44(void) {
    *((u32*)sp) = r0;
}




void ov74_0222EC08(void) {
    *((u32*)(r4 + r0)) = r6;
    *((u32*)r4) = r5;
    *((u32*)(r4 + r0)) = r7;
    *((u32*)(r4 + (r0 + 0xc))) = r2;
}




void ov74_0222EC60(void) {
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r1)) = r2;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r0)) = r2;
    // sub r1, #8
    *((u32*)(r4 + r1)) = r0;
}




void ov74_0222ECD4(void) {
}




void ov74_0222ECEC(void) {
}




void ov74_0222ED04(void) {
    // str r3, [sp]
    ListMenuItems_Delete(*((u32*)(r0 + (0xaf << 6))));
    DestroyListMenu(*((u32*)(r5 + 0x00002BBC)), 0, 0);
    ListMenuItems_New(r7, 0x55);
    // str r0, [r5, r1]
    NewMsgDataFromNarc(0, 0x1b, 0xf7, 0x55);
    // str r0, [r5, r1]
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + (0xaf << 6))), *((u32*)(r5 + 0x00002A04)), *((u32*)r4), *((u32*)(r4 + 4)));
    // add r4, #8
    DestroyMsgData(*((u32*)(r5 + 0x00002A04)));
    // add r3, sp, #4
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [sp, #4]
    // add r0, sp, #4
    *((u16*)(*((u32*)(r5 + (0xaf << 6))) + 0x10)) = r7;
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x38]
    ListMenuInit(r3, 0, ((r3 << 0x10) >> 0x10), 0x55);
    // str r0, [r5, r1]
}




void ov74_0222EDC0(void) {
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r0)) = r1;
}




u8 ov74_0222EE08(void) {
}




void ov74_0222EE0C(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r4;
    *((u32*)(sp + 0xc)) = r3;
}




void ov74_0222EE58(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r5;
    *((u32*)(sp + 0xc)) = r3;
}




void ov74_0222EEB0(void) {
    *((u32*)sp) = (sp + 8);
    *((u32*)(sp + 4)) = (sp + 8);
    *((u32*)sp) = *((u32*)(sp + 8));
    *((u32*)(sp + 4)) = r1;
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = (sp + 8);
}




void ov74_0222EF18(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r4;
    *((u32*)(sp + 0xc)) = r3;
}




u8 ov74_0222EF64(void) {
}




void ov74_0222EF68(void) {
    *((u32*)(sp + 0x18)) = r1;
    *((u32*)(sp + 0x14)) = r2;
    *((u32*)(sp + 0x20)) = r0;
    *((u32*)(sp + 0x1c)) = r1;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)sp) = r0;
}




void ov74_0222EFF0(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)r4) = r0;
    *((u32*)(r5 + r0)) = r6;
}




void ov74_0222F024(void) {
    *((u32*)(sp + 0x14)) = r2;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x2c)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x1c)) = r5;
    *((u32*)(sp + 0x1c)) = (*((u32*)(sp + 0x1c)) + 0x10);
    *((u32*)(sp + 0x2c)) = *((u32*)(sp + 0x2c));
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x2c));
    *((u32*)(sp + 0x24)) = r5;
    *((u32*)(sp + 0x20)) = r5;
    *((u32*)(*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x14)))) = (r7 + 0x30);
    *((u32*)sp) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x28)) = *((u32*)(sp + 0x14));
    // blx r3
    *((u32*)(sp + 0x30)) = *((u32*)(sp + 0x14));
    *((u32*)sp) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x28));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x28));
    *((u32*)(sp + 0x24)) = (*((u32*)(sp + 0x24)) + 0x10);
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x18));
}




void ov74_0222F1BC(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r0)) = r7;
    *((u32*)(r5 + r0)) = (r0 + r3);
    // blx r3
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r3;
}




void ov74_0222F2D4(void) {
    *((u32*)sp) = r2;
}




void ov74_0222F314(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
}




void ov74_0222F404(void) {
    // blx r6
    *((u32*)r5) = ~(r0);
    *((u32*)r5) = r4;
    *((u32*)~(r0)) = r4;
    // blx r4
    *((u32*)r5) = ~(r0);
}




void ov74_0222F478(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0xc)) = r4;
    *((u32*)(sp + 8)) = r0;
    *((u32*)sp) = (*((u32*)(sp + 0xc)) + 0xa);
    *((u32*)(r5 + (r0 + r4))) = (*((u32*)(sp + 0xc)) + 0xa);
    *((u32*)sp) = *((u32*)(sp + 8));
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 8));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0xc));
    *((u32*)(sp + 0x10)) = (*((u32*)(sp + 0x10)) + 0x19);
}




void ov74_0222F598(void) {
    *((u32*)(r4 + r1)) = r0;
    *((u32*)r4) = r0;
    *((u32*)(r4 + r0)) = r1;
}




void ov74_0222F600(void) {
    sub_02014AA0();
    sub_02014A60(*((u32*)(r4 + (3 << 0xa))));
    sub_02014AB0(0x04000010, 8, 1);
}




void ov74_0222F624(void) {
    *((u32*)((r0 + r4) + r5)) = r1;
    // sub r0, #0xc
    *((u32*)((r0 + r4) + r0)) = r2;
    // sub r0, #8
    // sub r5, #0x14
    *((u32*)((r0 + r4) + r0)) = r3;
    *((u32*)((r0 + r4) + r1)) = r0;
    *((u32*)((r0 + r4) + r1)) = r0;
    *((u32*)((r0 + r4) + r0)) = r1;
}




void ov74_0222F688(void) {
    *((u32*)((r0 + r1) + r0)) = r1;
    *((u32*)((r0 + r1) + r0)) = r1;
}




void ov74_0222F6C4(void) {
    // sub r1, #8
    // sub r1, #8
    *((u32*)((r0 + r1) + r1)) = (r2 + r1);
    *((u32*)((r0 + r1) + r1)) = ((r2 + r1) + r1);
    // sub r1, #8
    *((u32*)((r0 + r1) + r0)) = ((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc);
    // sub r1, #8
    *((u32*)((r0 + r1) + (((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb)))) = ((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc);
    *((u32*)((r0 + r1) + r0)) = ((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc);
    // sub r1, #8
    // sub r2, r2, r1
    // sub r1, #8
    *((u32*)((r0 + r1) + (((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb)))) = ((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc);
    *((u32*)((r0 + r1) + (((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc) + (((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))))) = ((s32)((((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc) + (((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb)))) >> 1);
    *((u32*)((r0 + r1) + r0)) = (((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc) + (((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb)));
    // sub r2, #8
    *((u32*)((r0 + r1) + ((s32)((((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc) + (((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb)))) >> 1))) = r3;
    *((u32*)((r0 + r1) + r0)) = (((s32)((((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb))) >> 0xc) + (((r2 + r1) + r1) + ((s32)(((r2 + r1) + r1)) >> 0xb)));
    // bpl _0222F782
    // sub r6, r1, r0
    // sub r1, r0, r1
    // sub r6, r6, r0
}




void ov74_0222F7D4(void) {
    // add r1, pc
    // add pc, r1
    *((u32*)(r4 + r0)) = ((s32)((r1 + r1)) >> 0x10);
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r0;
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r0;
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r0;
    // sub r1, #0xc
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r0;
    *((u32*)r5) = r0;
    *((u32*)r5) = r0;
    *((u32*)sp) = ((s32)((r1 + r1)) >> 0x10);
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)r5) = r0;
    *((u32*)(r4 + r3)) = r0;
    // sub r1, #0x10
    *((u32*)r5) = r0;
    *((u32*)r5) = r0;
    *((u32*)r5) = (r4 + (r4 + r0));
    *((u32*)r5) = (r4 + (r4 + r0));
    *((u32*)r5) = (r4 + (r4 + r0));
    *((u32*)r5) = (r4 + (r4 + r0));
    *((u32*)r5) = (r4 + (r4 + (r4 + (r4 + r0))));
    *((u32*)r5) = (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0)))))));
    *((u32*)r5) = (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0)))))))));
    *((u32*)r5) = (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0))))))))))));
    *((u32*)r5) = (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0))))))))))));
    // blx r1
}




void ov74_0222FB8C(void) {
    *((u32*)sp) = r0;
}




void ov74_0222FC50(void) {
    *((u32*)(r4 + r0)) = r6;
    *((u32*)r4) = r5;
    *((u32*)(r4 + r0)) = r7;
}




void ov74_0222FCA4(void) {
}




void ov74_0222FCC4(void) {
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
}









void ov74_0222FE4C(void) {
}




void ov74_0222FE5C(void) {
}




void ov74_0222FE68(void) {
}




void ov74_0222FE78(void) {
}




void ov74_0222FEA0(void) {
}




void ov74_0222FEC8(void) {
    *((u16*)(r0 + 0x62)) = r3;
    *((u16*)((r0 + 0x62) + 0x62)) = r2;
    // and r1, r2
    *((u16*)(((r0 + 0x62) + 0x62) + 0x62)) = ((((r1 + 0x62) + 0x62) + 0x62) + 0x62);
}




void ov74_0222FF28(void) {
    *((u8*)(r0 + 0x60)) = r1;
    *((u16*)(r1 + 0x62)) = (r0 + 0x60);
    *((u8*)(((r0 + 0x60) + 0x62) + 0x61)) = (r1 + 0x62);
    *((u8*)(r4 + 0x64)) = (((r0 + 0x60) + 0x62) + 0x61);
}




void ov74_0222FF68(void) {
}




void ov74_0222FF80(void) {
}




void ov74_0222FFAC(void) {
    // mov ip, r2
    // sub r5, r5, r6
    // ror r5, r4
    // lsl r6, r5
    // mov r0, ip
    // sub r1, r1, r2
    // ror r1, r0
}




void ov74_0222FFFC(void) {
}




void ov74_02230018(void) {
}




void ov74_02230030(void) {
}




void ov74_02230070(void) {
}




void ov74_022300A8(void) {
    *((u8*)((r0 + 0x61) + 0x61)) = r1;
    *((u8*)(((r0 + 0x61) + 0x61) + 0x64)) = r1;
}




void ov74_02230110(void) {
}




void ov74_02230138(void) {
    *((u8*)((r0 + 0x60) + 0x60)) = r1;
    *((u32*)(sp + 4)) = (((r0 + 0x60) + 0x60) + 0xa);
    *((u32*)(sp + 8)) = (((r0 + 0x60) + 0x60) + 0xa);
    *((u16*)(sp + 0)) = ((((r0 + 0x60) + 0x60) + 0xa) + 0xa);
    *((u32*)(((r4 + 0x60) + 0x14) + (((r4 + 0x60) + 0x14) + (sp + 0)))) = *((u32*)(sp + 8));
}




void ov74_0223026C(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u16*)(sp + 4)) = r0;
    *((u32*)(r7 + r1)) = *((u32*)(sp + 0xc));
    *((u16*)r3) = (r7 + r1);
    *((u16*)((r7 + r1) + 0x1c)) = (r7 + r1);
    *((u8*)((r7 + r1) + 0x36)) = *((u32*)sp);
}




void ov74_0223030C(void) {
}




void ov74_02230320(void) {
    // strb r2, [r0, r1]
}




void ov74_02230404(void) {
    // strb r1, [r0, r2]
}




void ov74_02230478(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}




void ov74_02230520(void) {
    // strb r1, [r0, r2]
}




void ov74_02230590(void) {
    ov74_02231070(7);
    ov74_0222FE78();
    ov74_02231094();
    ov74_02231154();
    ov74_02231638(((*((u8*)(r0 + 0x000001C3)) << 0x18) >> 0x1c), 0x000001C3);
    ov74_0222FE4C();
    ov74_02231070(3);
    ov74_02231448();
    ov74_0222FE4C();
}




void ov74_022305E4(void) {
}




void ov74_02230674(void) {
    *((u8*)(r0 + 0x60)) = r1;
}




void ov74_022306C8(void) {
}




void ov74_02230714(void) {
}




void ov74_0223078C(void) {
}




void ov74_02230818(void) {
    // and r0, r1
    // and r1, r0
}




void ov74_022308E0(void) {
}




void ov74_02230964(void) {
}




void ov74_02230988(void) {
}




void ov74_022309AC(void) {
}




void ov74_022309F0(void) {
}




void ov74_02230A14(void) {
    WM_SetIndCallback(ov74_0222FFFC);
    ov74_02231070(4);
}




void ov74_02230A34(void) {
}




void ov74_02230A4C(void) {
}




void ov74_02230A74(void) {
}




void ov74_02230A7C(void) {
}




void ov74_02230A84(void) {
    // and r1, r0
    // sub r0, r0, r1
    *((u8*)r4) = r1;
    // and r0, r3
    // and r1, r0
    // and r1, r3
    // and r1, r3
    *((u32*)((r0 + 0xc0) + 0x44)) = (r1 + 0xf1);
    *((u16*)(r5 + 0x48)) = r6;
    *((u16*)((r5 + 0x48) + 0x60)) = r6;
}




void ov74_02230BB4(void) {
    // sub r5, r1, r0
    *((u32*)sp) = r0;
}




void ov74_02230C10(void) {
    // lsl r1, r0
    *((u32*)sp) = (r5 + r6);
    // strb r0, [r5, r6]
    *((u32*)sp) = (r5 + r6);
}




void ov74_02230CCC(void) {
}




void ov74_02230CEC(void) {
    // strh r1, [r4, r0]
}




void ov74_02230D18(void) {
}




void ov74_02230D28(void) {
}




void ov74_02230D6C(void) {
}




void ov74_02230D80(void) {
}




void ov74_02230DB8(void) {
    ov74_02231094();
    ov74_02231064();
    ov74_02231154();
}




void ov74_02230DF4(void) {
    // and r4, r5
    // strb r3, [r0, r2]
    // strh r2, [r0, r1]
}




void ov74_02230E44(void) {
}




void ov74_02230E7C(void) {
}




void ov74_02230E94(void) {
}




void ov74_02230EB4(void) {
    *((u32*)r5) = (r4 + 8);
}




void ov74_02230EE8(void) {
}




void ov74_02230F14(void) {
    *((u32*)r0) = r5;
}




void ov74_02230F40(void) {
}




void ov74_02230F6C(void) {
}




void ov74_02230F98(void) {
}




void ov74_02230FD4(void) {
}




void ov74_02231008(void) {
}




void ov74_02231048(void) {
}




void ov74_02231054(void) {
}




void ov74_0223105C(void) {
}




void ov74_02231064(void) {
}




void ov74_02231070(void) {
}




void ov74_0223107C(void) {
}




void ov74_02231088(void) {
}




void ov74_02231094(void) {
}




void ov74_022310A0(void) {
}




void ov74_022310AC(void) {
}




void ov74_022310B8(void) {
}




void ov74_022310C4(void) {
}




void ov74_022310D0(void) {
}




void ov74_022310DC(void) {
}




void ov74_022310E8(void) {
}




void ov74_022310F4(void) {
}




void ov74_02231100(void) {
}




void ov74_0223110C(void) {
}




void ov74_02231118(void) {
}




void ov74_02231124(void) {
}




void ov74_02231130(void) {
}




void ov74_0223113C(void) {
}




void ov74_02231148(void) {
}




void ov74_02231154(void) {
}




void ov74_0223115C(void) {
}




void ov74_02231164(void) {
    // strh r1, [r4, r0]
}




void ov74_02231184(void) {
}




void ov74_02231194(void) {
}




void ov74_022311A0(void) {
}




void ov74_022311AC(void) {
}




void ov74_022311BC(void) {
}




void ov74_022311CC(void) {
}




u8 ov74_022311D8(void) {
}




void ov74_022311DC(void) {
}




void ov74_022311E8(void) {
}




void ov74_022311F4(void) {
    *((u32*)sp) = r2;
    *((u8*)(sp + 0)) = (r0 + r2);
}




void ov74_02231214(void) {
    *((u16*)(sp + 0)) = r2;
    *((u8*)(sp + 0)) = (sp + 0);
    // ldrsh r0, [r1, r0]
}




void ov74_02231238(void) {
    *((u32*)r5) = r1;
    *((u32*)r4) = r1;
}




u8 ov74_02231260(void) {
}




void ov74_02231264(void) {
}




void ov74_0223127C(void) {
    // add r3, r5, r3
    // add r3, r6, r4
    // eor r5, r6
    // stmia r2!, {r5}
}




void ov74_022312C0(void) {
    *((u32*)sp) = r3;
    *((u32*)r5) = r1;
    // and r0, r1
    *((u32*)r5) = r1;
    // and r0, r1
    *((u32*)r5) = r0;
    *((u32*)r5) = r0;
    // and r1, r2
    // and r1, r2
    // and r0, r1
}




void ov74_022313F0(void) {
    // sub r1, #0x10
}




void ov74_02231424(void) {
}




void ov74_02231448(void) {
}




void ov74_0223144C(void) {
}




void ov74_02231450(void) {
}




void ov74_02231454(void) {
}




void ov74_02231458(void) {
}




void ov74_0223145C(void) {
}




void ov74_02231460(void) {
    *((u32*)sp) = r4;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
}




void ov74_022314A0(void) {
    WM_Enable(ov74_02230030);
    ov74_02231448();
}




void ov74_022314BC(void) {
    WM_Disable(ov74_02230070);
    ov74_02231448();
    OS_Terminate();
}




void ov74_022314DC(void) {
    *((u32*)sp) = r0;
}




void ov74_02231508(void) {
    *((u32*)r5) = r4;
}




void ov74_02231544(void) {
    WM_StartParent(ov74_02230138);
    ov74_02231448();
}




void ov74_02231560(void) {
    ov74_022310C4();
    WM_StartScan(ov74_02230404, r0);
    ov74_02231448();
}




void ov74_02231584(void) {
}




void ov74_0223161C(void) {
    WM_EndScan(ov74_02230590);
    ov74_02231448();
}




void ov74_02231638(void) {
    *((u32*)sp) = r0;
}




void ov74_02231670(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}




void ov74_022316E8(void) {
    WM_PowerOn(ov74_02230964);
    ov74_02231448();
}




void ov74_02231704(void) {
    WM_PowerOff(ov74_02230988);
    ov74_02231448();
    OS_Terminate();
}




void ov74_02231724(void) {
    WM_Reset(ov74_022309AC);
    ov74_02231448();
    OS_Terminate();
}




void ov74_02231744(void) {
    WM_End(ov74_022309F0);
    ov74_02231448();
    OS_Terminate();
}




void ov74_02231764(void) {
}




void ov74_02231790(void) {
    // mov r0, #VERSION_RUBY
    *((u32*)r4) = ((s32)((r0 + r0)) >> 0x10);
    // mov r0, #VERSION_SAPPHIRE
    *((u32*)r4) = ((s32)((r0 + r0)) >> 0x10);
    // mov r0, #VERSION_LEAFGREEN
    *((u32*)r4) = ((s32)((r0 + r0)) >> 0x10);
    // mov r0, #VERSION_FIRERED
    *((u32*)r4) = ((s32)((r0 + r0)) >> 0x10);
    // mov r0, #VERSION_EMERALD
    *((u32*)r4) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)r4) = ~(((s32)((r0 + r0)) >> 0x10));
}




void ov74_022317D8(void) {
    // add r1, pc
    // add pc, r1
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
}




void ov74_02231930(void) {
}




void ov74_0223195C(void) {
    *((u32*)sp) = r0;
    *((u16*)(sp + 4)) = (r5 + 0xc);
}




void ov74_022319F8(void) {
    // sub r1, r1, r0
}




void ov74_02231A1C(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0x18)) = ~(r0);
    *((u32*)(sp + 0x14)) = ~(r0);
    *((u32*)(sp + 0x14)) = ~(r0);
    *((u32*)(sp + 0x1c)) = ~(r0);
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x18));
    *((u32*)sp) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 4)) = r7;
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x20));
    *((u32*)sp) = ~(*((u32*)(sp + 0x18)));
    *((u32*)(sp + 4)) = r7;
    *((u32*)(sp + 8)) = ~(*((u32*)(sp + 0x18)));
    *((u32*)(sp + 0xc)) = ~(*((u32*)(sp + 0x18)));
    *((u32*)sp) = ~(*((u32*)(sp + 0x18)));
    *((u32*)(sp + 4)) = r7;
    *((u32*)(sp + 8)) = ~(*((u32*)(sp + 0x18)));
    *((u32*)(sp + 0xc)) = ~(*((u32*)(sp + 0x18)));
}




void ov74_02231BC0(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_Init(r3, r3);
    ObjPlttTransfer_Init(0x14, 0x4c);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}




void ov74_02231BF0(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r3;
    *((u32*)(sp + 0x10)) = r2;
    *((u32*)(r5 + r7)) = (r0 + 0x2c);
    *((u32*)sp) = (r0 + 0x2c);
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = (r0 + 0x2c);
    *((u32*)(r6 + (r1 + 0x2c))) = (r0 + 0x2c);
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = (r0 + 0x2c);
    *((u32*)(sp + 8)) = (r0 + 0x2c);
    // sub r1, #0x14
    *((u32*)(sp + 0xc)) = (r0 + 0x2c);
    *((u32*)(r6 + (r1 + 0x2c))) = (r0 + 0x2c);
    *((u32*)sp) = (r0 + 0x2c);
    *((u32*)(sp + 4)) = (r0 + 0x2c);
    // sub r1, #0x14
    *((u32*)(sp + 8)) = (r0 + 0x2c);
    *((u32*)(r6 + (r1 + 0x2c))) = (r0 + 0x2c);
    *((u32*)sp) = (r0 + 0x2c);
    *((u32*)(sp + 4)) = (r0 + 0x2c);
    // sub r1, #0x14
    *((u32*)(sp + 8)) = (r0 + 0x2c);
    *((u32*)(r6 + (r1 + 0x2c))) = (r0 + 0x2c);
    // sub r1, #0xc
    *((u32*)sp) = (r0 + 0x2c);
    *((u32*)(sp + 4)) = (r0 + 0x2c);
}




void ov74_02231CFC(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r2;
    *((u32*)(sp + 8)) = r2;
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)(sp + 0x10)) = r1;
    *((u32*)(sp + 0x14)) = r2;
    *((u32*)(sp + 0x18)) = r2;
    *((u32*)(sp + 0x1c)) = (r2 + 8);
    *((u32*)(sp + 0x20)) = ((r2 + 8) + 0xc);
    *((u32*)(sp + 0x24)) = r1;
    *((u32*)(sp + 0x28)) = r1;
}




void ov74_02231D48(void) {
    *((u32*)r0) = r2;
}




void ov74_02231D70(void) {
}




void ov74_02231D94(void) {
}




void ov74_02231DB8(void) {
}




void ov74_02231DDC(void) {
    // sub r5, r2, r4
    *((u8*)r0) = *((u32*)(sp + 8));
    // sub r3, r1, r5
}




void ov74_02231E00(void) {
}




void ov74_02231E38(void) {
}




void ov74_02231E54(void) {
    // and r0, r3
    // and r2, r4
    // and r0, r3
    // and r3, r4
}




void ov74_02231EC4(void) {
}




void ov74_02231F30(void) {
    *((u32*)sp) = r2;
    *((u32*)(r2 + r1)) = (*((u32*)(sp + 4)) + 0x64);
}




void ov74_02231FB0(void) {
}




void ov74_02231FF4(void) {
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)(sp + 0xc)) = r7;
    *((u32*)(sp + 0x1c)) = ((r0 + r1) + *((u32*)(sp + 0xc)));
    *((u32*)(sp + 0x18)) = ((r0 + r1) + *((u32*)(sp + 0xc)));
    *((u32*)sp) = *((u32*)(sp + 0x1c));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x10));
    *((u32*)sp) = ((*((u32*)(sp + 0x1c)) + *((u32*)(sp + 0x18))) + *((u32*)(sp + 0xc)));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 0xc)) = (*((u32*)(sp + 0xc)) + 0x50);
    *((u32*)(r6 + *((u32*)(sp + 0x10)))) = *((u32*)(sp + 0x18));
}




void ov74_02232154(void) {
    *((u32*)(sp + 8)) = (sp + 0x14);
    *((u32*)(sp + 0xc)) = r4;
    *((u32*)(sp + 0x10)) = (sp + 0x14);
    *((u32*)(sp + 4)) = *((u32*)(sp + 8));
    *((u32*)sp) = *((u32*)(sp + 8));
    *((u32*)(sp + 0x1c)) = *((u32*)(sp + 8));
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 4));
    *((u32*)(r5 + r1)) = (sp + 0x14);
    *((u32*)(sp + 0x1c)) = (*((u32*)(sp + 0x1c)) + (sp + 0x14));
    *((u32*)(sp + 0x20)) = (*((u32*)(sp + 0x20)) + (*((u32*)(sp + 0x1c)) + (sp + 0x14)));
    *((u32*)(r5 + *((u32*)(sp + 0x20)))) = (sp + 0x14);
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 8)) = (*((u32*)(sp + 8)) + 0x18);
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0xc));
}




void ov74_02232284(void) {
    *((u32*)(sp + 8)) = (sp + 0);
    *((u32*)(sp + 0xc)) = (sp + 0);
    *((u32*)(sp + 0x24)) = (sp + 0);
}




void ov74_022322D8(void) {
    *((u32*)sp) = r0;
    *((u32*)sp) = (r6 + r0);
    *((u32*)(r6 + r1)) = (r6 + r0);
    // sub r1, #8
    *((u32*)sp) = r3;
    *((u32*)sp) = (r6 + r1);
    *((u32*)(r6 + r1)) = (r6 + r1);
    // sub r1, #0x1c
    *((u32*)sp) = r3;
    *((u32*)sp) = (r6 + r1);
    *((u32*)(r6 + r1)) = (r6 + r1);
    // sub r1, #0x24
    // strb r0, [r6, r1]
    *((u32*)sp) = (r6 + r1);
    *((u32*)(r5 + r1)) = (r6 + r1);
    *((u32*)(r5 + (r6 + r1))) = ~(r1);
    *((u32*)(r5 + (r6 + r1))) = ~(r1);
    *((u32*)(r6 + (r6 + r1))) = ~(r1);
}




void ov74_02232398(void) {
}




void ov74_022323D0(void) {
}




void ov74_02232424(void) {
}




void ov74_02232474(void) {
}




void ov74_022324A0(void) {
    // add r0, r4, r0
    // str r0, [sp]
    // ldr r1, [sp]
    // str r0, [sp, #4]
    Sprite_GetDrawFlag(*((u32*)(r1 + (0xc * r1))));
    // mvn r5, r5
    // add r3, #0xc
    // mvn r0, r0
    ov74_02232398(r4, r6, (0 + 1), r4);
    ov74_022323D0(r4, r6);
    ov74_02232424(r4, r6);
    ov74_02232474(r4, r6);
    // mvn r0, r0
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    Sprite_GetMatrixPtr(*((u32*)((0 - 1) + (0xf3 << 2))), (0 - 1), *((u32*)(r4 + (0xf3 << 2))), r4);
    // add r5, r4, r0
    Sprite_SetMatrix(*((u32*)(r5 + (r5 * 0xc))), r0);
    Sprite_GetMatrixPtr(*((u32*)(r5 + r7)));
    // add r2, sp, #8
    // ldmia r3!, {r0, r1}
    // mov ip, r2
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #8]
    // sub r0, r0, r1
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // sub r0, r0, r1
    // str r0, [sp, #0xc]
    // mov r1, ip
    Sprite_SetMatrix(*((u32*)(r5 + r7)), ((2 << 0xe) >> 1), r0);
    Sprite_SetDrawFlag(*((u32*)(r5 + r7)), 1);
    // add r3, r4, r7
    // str r6, [r3, r1]
    // str r2, [r3, r0]
    // add r0, #0x44
    // add r1, #0x44
    // str r0, [r4, r1]
    // add r3, #0xc
    // add r1, r4, r6
    Sprite_SetDrawFlag(*((u32*)((0xf3 << 2) + (0xf2 << 2))), 0, *((u32*)(r4 + 0x0000E884)));
    // mvn r2, r2
    // add r0, r4, r6
    // str r2, [r0, r1]
    // add r0, #0x44
    // add r1, #0x44
    // str r0, [r4, r1]
}




void ov74_0223262C(void) {
}




void ov74_02232678(void) {
    // add r3, sp, #0x14
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, r5, r0
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x34]
    PmAgbCartridge_GetLanguage(0xa0, 0, (4 - 1));
    // add r1, r1, r0
    // add r0, r4, r0
    // add r0, r1, r0
    // add r1, sp, #0
    ConvertRSStringToDPStringInternational((r4 << 3), *((u32*)(r5 + 0x0000E880)), 9, r0);
    // add r0, sp, #0
    // str r0, [sp, #0x4c]
    // add r1, sp, #0x14
    ov74_02231A1C(r5, 1);
}




void ov74_02232700(void) {
    *((u16*)(r3 + 0xd6)) = ((r6 + 0x80) + 0x60);
}




void ov74_02232758(void) {
    // add r3, sp, #0x2c
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // str r1, [sp, #0x3c]
    // str r1, [sp, #0x50]
    // str r1, [sp, #0x54]
    // str r1, [sp, #0x4c]
    // add r0, r5, r0
    // str r1, [sp, #0x58]
    // str r0, [sp, #0x2c]
    // str r1, [sp, #0x60]
    // str r1, [sp, #0x44]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x48]
    // add r1, sp, #0x2c
    // str r2, [sp, #0x40]
    ov74_02231A1C(r0, 0x90, 4);
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r1, sp, #0x2c
    ov74_02231A1C(r5, 6);
    ov74_02232700(r5, r4);
    // ldr r0, [sp, #0x2c]
    CopyWindowToVram();
    // add r2, sp, #0x1c
    // add r2, #2
    AGB_GetBoxMonData(r4, 2);
    AGB_GetBoxMonData(r4, 3, 0);
    // add r0, sp, #0x1c
    // add r0, #2
    // add r1, sp, #8
    ConvertRSStringToDPStringInternational(0xb, r0);
    // add r0, sp, #8
    // str r0, [sp, #0x64]
    // mvn r0, r0
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r1, sp, #0x2c
    ov74_02231A1C(r5, 6);
    String_New(0x40, 0x4c);
    NewMsgDataFromNarc(1, 0x1b, 0xed, 0x4c);
    AGB_GetBoxMonData(r4, 0xb, 0);
    TranslateAgbSpecies();
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    ReadMsgDataIntoString(r7, r6);
    // mvn r0, r0
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r1, sp, #0x2c
    // str r6, [sp, #0x68]
    ov74_02231A1C(r5, 6);
    DestroyMsgData(r7);
    String_Delete(r6);
    AGB_GetBoxMonData(r4, 0xc, 0);
    UpConvertItemId_Gen3to4(((r0 << 0x10) >> 0x10));
    String_New(0x40, 0x4c);
    GetItemNameIntoString(((r7 << 0x10) >> 0x10), 0x4c);
    // mvn r0, r0
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r1, sp, #0x2c
    // str r6, [sp, #0x68]
    ov74_02231A1C(r5, 6);
    String_Delete(r6);
    ov74_02234A0C(r4);
    String_New(0xa, 0x4c);
    // str r3, [sp]
    String16_FormatInteger(r6, 3, 1);
    // mvn r0, r0
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r1, sp, #0x2c
    // str r4, [sp, #0x68]
    ov74_02231A1C(r5, 2);
    String_Delete(r4);
    // ldr r0, [sp, #4]
    PlayCry(((r0 << 0x10) >> 0x10), 0);
}




void ov74_02232910(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)r4) = r0;
}




void ov74_02232940(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)r4) = r0;
}




void ov74_02232974(void) {
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
}




void ov74_02232A48(void) {
    // add r3, sp, #0x10
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0x10
    GfGfx_SetBanks((5 - 1));
    ov74_02232974(*((u32*)(r4 + 0x20)));
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    ResetAllTextPrinters();
    LoadFontPal0(0, (0x1e << 4), 0x4c);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x71, 0x17, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x71, 0x1a, *((u32*)(r4 + 0x20)), 2);
    FontID_Alloc(2, 0x4c);
}




void ov74_02232AC8(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
}




void ov74_02232B18(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    // sub r1, #0x6c
    *((u32*)(r4 + r1)) = (r4 + (r4 + r0));
    // sub r1, #0x64
    *((u32*)(r4 + r1)) = (r4 + (r4 + r0));
    // sub r1, #0x60
    *((u32*)(r4 + r1)) = (r4 + (r4 + r0));
    // sub r1, #0x5c
    *((u32*)(r4 + r1)) = r3;
    // sub r1, #0x58
    *((u32*)(r4 + r1)) = r3;
    // sub r3, #0x48
    *((u32*)(r4 + r3)) = r1;
    // sub r3, #0x44
    *((u32*)(r4 + r3)) = (r4 + (r4 + r0));
    // sub r3, #0x4c
    *((u32*)(r4 + r3)) = (r4 + (r4 + r0));
    // sub r2, #0x40
    *((u32*)(r4 + (r4 + (r4 + r0)))) = r3;
    // sub r2, #0x3c
    *((u32*)(r4 + (r4 + (r4 + r0)))) = r3;
    // sub r2, #0x34
    *((u32*)(r4 + (r4 + (r4 + r0)))) = r1;
    // sub r0, #0x30
    *((u32*)(r4 + (r4 + r0))) = r1;
}




void ov74_02232BD4(void) {
    *((u32*)(sp + 0x10)) = (sp + 0x1c);
    *((u32*)(sp + 0x24)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 0x28)) = *((u32*)(sp + 0x10));
    *((u32*)(((r4 + 0xc) + 0xc) + r1)) = (sp + 0x1c);
    *((u32*)(sp + 0x14)) = (sp + 0x1c);
    *((u32*)(sp + 0x18)) = (sp + 0x1c);
    *((u32*)sp) = r7;
    *((u32*)(sp + 4)) = (sp + 0x1c);
    *((u32*)(sp + 0x10)) = (*((u32*)(sp + 0x10)) + 0x28);
    *((u32*)sp) = (*((u32*)(sp + 0x10)) + 0x28);
    *((u32*)(sp + 4)) = (*((u32*)(sp + 0x10)) + 0x28);
    *((u32*)(sp + 8)) = (*((u32*)(sp + 0x10)) + 0x28);
    *((u32*)(sp + 0xc)) = (*((u32*)(sp + 0x10)) + 0x28);
    *((u32*)sp) = (*((u32*)(sp + 0x10)) + 0x28);
    *((u32*)(sp + 4)) = (*((u32*)(sp + 0x10)) + 0x28);
    *((u32*)(sp + 8)) = (*((u32*)(sp + 0x10)) + 0x28);
    *((u32*)sp) = *((u32*)(sp + 0x18));
    *((u32*)(sp + 4)) = (*((u32*)(sp + 0x10)) + 0x28);
    *((u32*)sp) = (*((u32*)(sp + 0x10)) + 0x28);
    *((u32*)(sp + 4)) = (*((u32*)(sp + 0x10)) + 0x28);
    *((u32*)(r6 + *((u32*)(sp + 0x18)))) = (*((u32*)(sp + 0x10)) + 0x28);
    // sub r1, #0x34
}




void ov74_02232DA4(void) {
}




void ov74_02232DC4(void) {
    *((u32*)(r4 + (r6 + r0))) = r3;
    *((u32*)(r4 + r1)) = r2;
    *((u32*)(r6 + (r6 + r0))) = r1;
}




void ov74_02232E3C(void) {
}




void ov74_02232F5C(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)(sp + 4)) = r3;
}




void ov74_02232F9C(void) {
    *((u32*)sp) = (sp + 8);
    *((u32*)(sp + 4)) = r0;
    *((u32*)(r5 + (sp + 8))) = r0;
    // sub r1, #0x34
    *((u32*)(r5 + (r0 + 0xc))) = r4;
}




void ov74_02233024(void) {
    // blx r0
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r3 + r1)) = r0;
}




void ov74_02233060(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 4)) = r6;
    *((u32*)(sp + 4)) = *((u32*)(sp + 4));
}




void ov74_022330D0(void) {
    *((u32*)(r5 + r1)) = r0;
    // sub r1, #0x34
    *((u32*)(r5 + (r0 + 0x10))) = r2;
}




void ov74_02233134(void) {
    *((u32*)(r5 + r1)) = r0;
    // sub r1, #0x34
    *((u32*)(r5 + (r0 + 0x10))) = r2;
}




void ov74_0223319C(void) {
    *((u32*)(r5 + ~(r1))) = r0;
    // sub r1, #0x34
    *((u32*)(r5 + (r0 + 0x10))) = r4;
}




void ov74_02233230(void) {
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)r0) = (r4 + r0);
}









void ov74_022338D4(void) {
    OverlayManager_GetData();
    String_Delete(*((u32*)(r0 + 0x00012608)));
    String_Delete(*((u32*)(r4 + 0x0001260C)));
    Heap_Free(*((u32*)(r4 + 0x20)));
    RegisterMainOverlay(FS_OVERLAY_ID, gApplication_TitleScreen);
    OverlayManager_FreeData(r5);
    Heap_Destroy(0x4c);
    ov74_02236034(0);
}




void PmAgbCartridgeHasFlash(void) {
}




void PmAgbCartridgeGetOffsets(void) {
    *((u32*)(ov74_0223D33C + 8)) = r0;
    IdentifyPmAgbCartridge(sPmAgbRomCodeMappings, 0x1e);
    *((u32*)(sPmAgbRomHeader + 0x20)) = (0x89 << 4);
    *((u32*)(sPmAgbRomHeader + 0x24)) = (0xeb << 6);
    *((u32*)(ov74_0223D33C + 0x68)) = 0x00001220;
    *((u32*)(sPmAgbRomHeader + 0x30)) = 9;
    CTRDG_CpuCopy32(0x08000100, sPmAgbRomHeader, 0xfc);
    PmAgbCartridgeHasFlash();
}




void PmAgbCartridgeUnlinkSpec(void) {
    *((u32*)r0) = r1;
}




void PmAgbCartridge_GetVersionInternal(void) {
}




void PmAgbCartridge_GetLanguage(void) {
}




void IdentifyPmAgbCartridge(void) {
    *((u32*)r0) = r1;
    *((u32*)r0) = (r5 + r0);
    // neg r0, r2
}




void ov74_02233A88(void) {
}




void ov74_02233AB8(void) {
}




void ov74_02233ACC(void) {
    // sub r0, r1, r0
}




void ov74_02233B04(void) {
}




void ov74_02233B58(void) {
    *((u32*)(sp + 4)) = r6;
    *((u32*)r1) = r6;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = (r1 + r7);
    *((u32*)*((u32*)sp)) = r1;
    // lsl r0, r1
}




void ov74_02233C08(void) {
    *((u32*)r4) = *((u32*)sp);
    *((u32*)r5) = *((u32*)(sp + 4));
    *((u32*)r4) = *((u32*)(sp + 4));
    *((u32*)r5) = *((u32*)(sp + 4));
    *((u32*)r4) = *((u32*)sp);
    *((u32*)r5) = *((u32*)(sp + 4));
    *((u32*)r4) = *((u32*)(sp + 4));
    *((u32*)r5) = *((u32*)(sp + 4));
    *((u32*)r4) = *((u32*)(sp + 4));
    *((u32*)r5) = *((u32*)(sp + 4));
    *((u32*)r5) = *((u32*)(sp + 4));
    *((u32*)r4) = *((u32*)sp);
    *((u32*)r5) = *((u32*)sp);
    *((u32*)r5) = *((u32*)sp);
    *((u32*)r4) = *((u32*)sp);
    *((u32*)r5) = *((u32*)sp);
    *((u32*)r4) = *((u32*)sp);
    *((u32*)r5) = *((u32*)sp);
}




void ov74_02233CE4(void) {
    // lsl r1, r0
    *((u32*)sp) = (r4 + r0);
}




void ov74_02233DBC(void) {
    *((u32*)(r5 + r0)) = r1;
    // sub r1, #8
    // strh r6, [r5, r1]
    *((u32*)(r5 + r0)) = r1;
    // strh r0, [r5, r1]
}




void ov74_02233E50(void) {
    *((u32*)(ov74_0223D33C + 4)) = (*((u32*)(ov74_0223D33C + 4)) + 1);
    *((u32*)(ov74_0223D33C + 4)) = 0;
    *((u32*)(ov74_0223D33C + 0x14)) = 0;
    *((u32*)(ov74_0223D33C + 0x14)) = 2;
    *((u32*)(ov74_0223D33C + 0x14)) = 3;
    *((u32*)(ov74_0223D33C + 0x14)) = 4;
}




void ov74_02233E8C(void) {
    *((u32*)(sPmAgbCartridgeSpec + 4)) = 1;
    *((u32*)(ov74_0223D33C + 0x10)) = (*((u32*)(ov74_0223D33C + 0x10)) + 1);
    ov74_02233DBC(0, *((u32*)(sPmAgbCartridgeSpec + 4)), (*((u32*)(ov74_0223D33C + 0x10)) + 1));
}




void ov74_02233ED4(void) {
}




void ov74_02233F14(void) {
}




void ov74_02233F4C(void) {
}




void ov74_02233F5C(void) {
}




void ov74_02233F68(void) {
}




void ov74_02233F84(void) {
}




void ov74_02233F8C(void) {
}




void ov74_02234468(void) {
    // add r4, #0x20
    // eor r2, r1
    // str r2, [r4]
    // eor r1, r2
    // stmia r4!, {r1}
}




void ov74_02234488(void) {
    // add r4, #0x20
    // eor r2, r1
    // str r2, [r4]
    // eor r1, r2
    // stmia r4!, {r1}
}




void ov74_022344A8(void) {
    *((u32*)sp) = r0;
}




void AGB_GetBoxMonData(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 0xc)) = r4;
    *((u32*)(sp + 8)) = r4;
    *((u32*)(sp + 4)) = r4;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 4)) = r0;
    // strb r0, [r7, r4]
    // strb r0, [r7, r4]
    // strb r0, [r7, r4]
    // strb r0, [r7, r4]
    // sub r0, #0xd
    // sub r1, #0x11
}




void ov74_022348B0(void) {
    *((u32*)sp) = r0;
    // and r1, r2
    *((u16*)r7) = (r1 + (r4 + r2));
}




void TranslateAgbSpecies(void) {
    // ldrh r0, [r0, r1]
}




void ov74_02234A0C(void) {
}




void AGB_GetBoxMonAbility(void) {
}




void MigrateBoxMon(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    // lsl r1, r7
    *((u32*)(sp + 8)) = r0;
    // and r0, r1
    // lsr r0, r7
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 8)) = r0;
    // and r0, r3
    // and r0, r3
    // and r0, r3
    // and r2, r7
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 8)) = ((((((((((r1 + 0xd) + 0x36) + 0x3e) + 0x42) + 0x3a) + 0x4e) + 0x52) + 0x56) + 0x5a) + 0x5e);
    *((u32*)(sp + 8)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 8)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 8)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 8)) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)(sp + 8)) = (sp + 0x24);
    *((u32*)(sp + 8)) = (sp + 0x24);
    *((u32*)(sp + 8)) = (sp + 0x24);
    *((u32*)(sp + 8)) = (sp + 0x24);
    *((u32*)(sp + 8)) = (sp + 0x24);
    *((u32*)(sp + 8)) = (sp + 0x24);
    *((u32*)(sp + 8)) = (sp + 0x24);
}




void ov74_0223512C(void) {
    *((u32*)r1) = r0;
}




void ov74_02235138(void) {
    // bx r3
}




void ov74_0223514C(void) {
}




void ov74_022351FC(void) {
    CTRDG_Init();
    CTRDG_IsAgbCartridge();
    CTRDG_GetAgbMakerCode(0);
    ov74_0223514C(0, 0x00003130);
}




void ov74_02235230(void) {
}




void ov74_02235258(void) {
    ov74_022351FC();
    ov74_02235230(0);
    CTRDG_Enable(1);
    CTRDG_CpuCopy16(0x08100100, r5, r4);
    CTRDG_Enable(0);
    CTRDG_IsExisting();
}




void ov74_022352A0(void) {
    // stmia r6!, {r0, r1, r2, r3}
    // stmia r6!, {r0, r1, r2, r3}
    // stmia r6!, {r0, r1}
    *((u32*)(ov74_0223D454 + 4)) = 1;
    *((u32*)(ov74_0223D454 + 8)) = r0;
}




void ov74_022352D0(void) {
}




void ov74_02235308(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, sp, #0
    *((u8*)(*((u32*)_0223B720) + 0x10)) = r2;
    // add r0, r2, r2
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223533A: ; jump table
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // add r0, sp, #0
    *((u8*)((2 << 0xc) + 0x12)) = (r3 >> 0xb);
    // ldr r1, [sp, #0x30]
    // add r2, sp, #0
    *((u8*)((2 << 0xc) + 0x13)) = ((r3 >> 0xb) >> 0xe);
    InitBgFromTemplate(r0, ((r1 << 0x18) >> 0x18), 0);
    BgClearTilemapBufferAndCommit(r7, ((r4 << 0x18) >> 0x18));
}




void ov74_02235390(void) {
    *((u32*)(ov74_0223D454 + 0x10)) = r0;
}




void ov74_0223539C(void) {
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)r4) = r6;
}




void ov74_022353FC(void) {
}




void ov74_02235414(void) {
    *((u8*)(*((u32*)(sp + 0x1c)) + 0x48)) = r1;
    *((u32*)r5) = r2;
}




void ov74_02235464(void) {
}




void ov74_0223546C(void) {
}




void ov74_02235474(void) {
}




void ov74_0223547C(void) {
    *((u32*)(sp + 0x10)) = ~(~(r0));
    *((u32*)sp) = ~(~(r0));
    *((u32*)(sp + 4)) = ~(~(r0));
    *((u32*)(sp + 8)) = ~(~(r0));
    *((u32*)(sp + 0xc)) = ~(~(r0));
    // sub r3, r0, r7
    *((u32*)sp) = ~(~(r0));
    *((u32*)(sp + 4)) = ~(~(r0));
    *((u32*)(sp + 8)) = ~(~(r0));
    *((u32*)(sp + 0xc)) = ~(~(r0));
}




void ov74_02235568(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r2;
    *((u32*)(sp + 8)) = r2;
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x10)) = r2;
}




void ov74_02235634(void) {
    // mul r0, r1
}




void ov74_0223563C(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [sp, #0xc]
    ObjCharTransfer_InitEx(r3, 0x10, 0x10);
    ObjPlttTransfer_Init(0x1e, *((u32*)(ov74_0223D454 + 8)));
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}




void ov74_0223567C(void) {
}




void ov74_02235690(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r3;
    *((u32*)(sp + 0x10)) = r2;
    *((u32*)(r5 + r7)) = r0;
}




void ov74_02235708(void) {
}




void ov74_02235728(void) {
    // mov ip, r1
    *((u32*)(sp + 0x2c)) = r2;
    *((u32*)(sp + 0x30)) = r3;
    *((u32*)(sp + 0x34)) = r0;
    *((u32*)(sp + 0x34)) = r0;
    // mov r0, ip
    *((u32*)sp) = *((u32*)(sp + 0x54));
    *((u32*)(sp + 4)) = r7;
    *((u32*)(sp + 8)) = r0;
    // mov r2, ip
    *((u32*)((r5 + ~(r1)) + ~(r1))) = r0;
    *((u32*)sp) = *((u32*)(sp + 0x54));
    *((u32*)(sp + 4)) = r7;
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x2c));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x2c));
    *((u32*)((r5 + ~(~(r1))) + ~(~(r1)))) = *((u32*)(sp + 0x2c));
    *((u32*)sp) = *((u32*)(sp + 0x54));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x30));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x30));
    *((u32*)((r5 + *((u32*)(sp + 0x30))) + ~(~(~(r1))))) = *((u32*)(sp + 0x30));
    *((u32*)sp) = *((u32*)(sp + 0x54));
    *((u32*)(sp + 4)) = ~(*((u32*)(sp + 0x30)));
    *((u32*)(sp + 8)) = ~(*((u32*)(sp + 0x30)));
    *((u32*)((r5 + ~(~(~(r1)))) + ~(~(~(r1))))) = ~(*((u32*)(sp + 0x30)));
    *((u32*)sp) = *((u32*)(sp + 0x54));
    *((u32*)(sp + 4)) = ~(~(*((u32*)(sp + 0x30))));
    *((u32*)(sp + 8)) = ~(~(*((u32*)(sp + 0x30))));
    *((u32*)(sp + 0xc)) = ~(~(*((u32*)(sp + 0x30))));
    *((u32*)(sp + 0x10)) = ~(~(*((u32*)(sp + 0x30))));
    *((u32*)(sp + 0x14)) = (r5 + r6);
    *((u32*)(sp + 0x18)) = (r5 + r6);
    *((u32*)(sp + 0x1c)) = ((r5 + r6) + 8);
    *((u32*)(sp + 0x20)) = (((r5 + r6) + 8) + 0xc);
    *((u32*)(sp + 0x24)) = ~(~(*((u32*)(sp + 0x30))));
    *((u32*)(sp + 0x28)) = ~(~(*((u32*)(sp + 0x30))));
}




void ov74_0223589C(void) {
}




void ov74_022358BC(void) {
}




void ov74_022358C8(void) {
    *((u32*)(r4 + r0)) = (r2 + r1);
}




void ov74_02235930(void) {
    *((u32*)sp) = r4;
    *((u32*)(sp + 4)) = ((r1 + r4) + r4);
    *((u32*)(sp + 0x10)) = (r1 + r4);
    *((u32*)(sp + 0x14)) = ((r1 + r4) + r4);
    *((u32*)(sp + 0x18)) = ((r1 + r4) + r4);
    *((u32*)(sp + 0x1c)) = ((r1 + r4) + r4);
    *((u32*)(sp + 8)) = r2;
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x24)) = r2;
    *((u32*)(sp + 0x28)) = r2;
    *((u32*)(sp + 0x2c)) = r0;
    *((u32*)(sp + 0xc)) = (*((u32*)(sp + 0xc)) + r0);
}




void ov74_022359BC(void) {
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r5 + r7)) = r6;
    *((u32*)r0) = r1;
}




void ov74_02235A68(void) {
    // sub r0, #0xa
    // lsl r1, r0
}




void ov74_02235A74(void) {
    // blx r1
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r3 + r1)) = r0;
}




void ov74_02235AC4(void) {
    *((u8*)(sp + 0)) = r1;
}




void ov74_02235B14(void) {
    *((u32*)(sp + 0x20)) = r0;
    *((u32*)(sp + 0x24)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x40));
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0x14)) = r3;
    *((u32*)(sp + 0x18)) = r0;
    *((u32*)(sp + 0x1c)) = r5;
    *((u32*)sp) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x20));
}




void ov74_02235BD0(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(r4 + r1)) = r0;
}




void ov74_02235C10(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(r5 + r2)) = r0;
    *((u32*)sp) = (r5 + r1);
    // sub r1, #0xc
    *((u32*)(sp + 4)) = (r5 + (r5 + r1));
    *((u32*)sp) = (r5 + ((r5 + (r5 + r1)) + 0xc));
    *((u32*)(sp + 4)) = (r5 + (r5 + ((r5 + (r5 + r1)) + 0xc)));
    // sub r2, #0x1a
    *((u32*)sp) = (r5 + ((r5 + (r5 + ((r5 + (r5 + r1)) + 0xc))) + 0xc));
    *((u32*)(sp + 4)) = (r5 + (r5 + ((r5 + (r5 + ((r5 + (r5 + r1)) + 0xc))) + 0xc)));
    // sub r2, #0x1a
}




void ov74_02235CE4(void) {
    *((u32*)sp) = ((s32)((r1 + r1)) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((r1 + r1)) >> 0x10);
    *((u32*)sp) = r3;
    *((u32*)(r5 + r1)) = ((s32)((r1 + r1)) >> 0x10);
}




void ov74_02235DA4(void) {
}




void ov74_02235DC4(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)sp) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x10));
    *((u32*)*((u32*)(sp + 0x10))) = r5;
    *((u32*)(((s32)((r4 + r4)) >> 0x10) + (sp + 0x14))) = (*((u32*)(sp + 0x14)) + 0xc);
}




void ov74_02235ED0(void) {
    *((u32*)sp) = r2;
    // eor r0, r1
    *((u16*)(sp + 4)) = (sp + 4);
}




void ov74_02235F58(void) {
    *((u32*)sp) = r2;
    *((u8*)(sp + 4)) = r2;
    // eor r0, r2
    *((u16*)(sp + 4)) = (sp + 4);
}




void ov74_02235FF8(void) {
}




void ov74_02236010(void) {
    // and r0, r1
}




void ov74_02236034(void) {
    *((u16*)r1) = r0;
    *((u16*)r1) = r0;
}




void ov74_02236070(void) {
}




void ov74_02236074(void) {
    *((u16*)r1) = r0;
    *((u16*)r1) = r0;
}




void ov74_022360A0(void) {
    *((u32*)(ov74_0223D454 + 0x18)) = r0;
    *((u32*)(ov74_0223D454 + 0x14)) = 0;
}




void ov74_022360B0(void) {
}




void ov74_02236128(void) {
    *((u32*)(ov74_0223D454 + 0x14)) = 1;
}




void ov74_02236140(void) {
    Save_Cancel(*((u32*)(ov74_0223D454 + 0x18)));
    *((u32*)(ov74_0223D454 + 0x14)) = 3;
    sub_0201A738(4, 3);
}




void ov74_0223615C(void) {
}




void ov74_02236168(void) {
    // blx r2
    *((u32*)(r0 + r1)) = r4;
    // blx r2
}




void ov74_022361B8(void) {
    // sub r2, #9
    *((u32*)(r3 + r1)) = r0;
}




void ov74_022361D4(void) {
    // strh r0, [r2, r1]
    // strh r0, [r4, r2]
    // strh r0, [r2, r1]
    // blx r1
    // strh r3, [r2, r0]
    // blx r1
}




void ov74_02236258(void) {
    // sub r1, #0x10
    // lsl r0, r1
    // strh r4, [r3, r0]
    // strh r3, [r1, r0]
    // strh r1, [r2, r0]
    // strh r3, [r1, r0]
    // sub r1, #0xc6
    *((u32*)(r3 + r0)) = (r3 + r1);
    // strb r3, [r4, r1]
}




void ov74_02236354(void) {
    // blx r1
    // blx r1
    // blx r3
    *((u32*)(r2 + (r1 + r0))) = r3;
    // sub r0, #0x14
    // strb r5, [r3, r1]
    // sub r2, #0xf
    // strh r2, [r3, r0]
    // blx r1
    // strh r2, [r1, r0]
    // blx r1
}




void ov74_0223648C(void) {
    WM_EndScan(ov74_022364A8);
    ov74_022361B8();
}




void ov74_022364A8(void) {
}




void ov74_022364C0(void) {
    // blx r1
}




void ov74_022364F0(void) {
}




void ov74_02236514(void) {
    // blx r1
}




void ov74_0223653C(void) {
    ov74_02236168(3);
    WM_Initialize(*((u32*)ov74_0223E2FC), ov74_02236570, 2);
    ov74_022361B8();
    ov74_02236168(0xa);
}




void ov74_02236570(void) {
    ov74_022361B8(*((u16*)(r0 + 2)));
    ov74_02236168(0xa);
    WM_SetIndCallback(ov74_02236514);
    ov74_022361B8();
    ov74_02236168(0xa);
    ov74_02236168(1);
    ov74_022361D4();
}




void ov74_022365AC(void) {
    // blx r1
}




void ov74_022365FC(void) {
    ov74_022365AC(*((u32*)(*((u32*)ov74_0223E2FC) + 0x00001150)), *((u32*)ov74_0223E2FC));
    ov74_02236620();
}




void ov74_02236620(void) {
    ov74_02236168(3);
    WM_Reset(ov74_02236644);
    ov74_022361B8();
}




void ov74_02236644(void) {
    // blx r1
}




void ov74_02236680(void) {
    *((u32*)r4) = (r2 + 0x1f);
    *((u32*)((r2 + 0x1f) + r3)) = r0;
    // strh r6, [r5, r2]
    *((u32*)(r5 + (((r2 + 0x1f) + 8) + 0x28))) = r7;
    // strh r0, [r5, r2]
    // strh r0, [r5, r2]
    *((u32*)(r5 + ((((((r2 + 0x1f) + 8) + 0x28) + 0xc) + 0xe) + 0x2c))) = r1;
    // strh r1, [r5, r2]
    // sub r1, #0x11
    *((u32*)(r5 + (((((((r2 + 0x1f) + 8) + 0x28) + 0xc) + 0xe) + 0x2c) + 0x26))) = r0;
    *((u32*)(r0 + (r3 + 0x1c))) = r1;
}




void ov74_022366E8(void) {
    *((u32*)(r2 + r1)) = r4;
    // strh r4, [r1, r2]
    // strh r5, [r4, r1]
    *((u32*)(r1 + (r0 + 8))) = r4;
    // strh r0, [r4, r2]
    // strh r0, [r3, r1]
    *((u32*)(r3 + (r1 + 8))) = (r0 + 8);
    // sub r3, #0x24
    // strb r6, [r1, r2]
}




void ov74_02236768(void) {
    *((u32*)(r3 + r0)) = r1;
    // blx r1
    *((u32*)((r2 + r1) + r0)) = r2;
    *((u32*)(r2 + r0)) = r3;
    // sub r1, #0xc
    // blx r1
    // strb r1, [r5, r3]
    // sub r0, #0x24
    // sub r1, #8
    // sub r2, #0x20
    // sub r2, r2, r3
    // sub r2, #8
    // strh r2, [r3, r0]
    // blx r1
}




void ov74_022368A4(void) {
}




void ov74_022368D4(void) {
    // sub r0, #0x16
    *((u16*)(sp + 0)) = r2;
    // eor r0, r2
    *((u16*)(sp + 0)) = r0;
    // sub r2, #0x18
    // sub r1, #0x18
}




void ov74_02236980(void) {
}




void ov74_02236988(void) {
    // sub r0, #0x68
}




void ov74_022369A8(void) {
    *((u32*)((r1 + 0x24) + 0x20)) = r0;
}




void ov74_022369C8(void) {
}




void ov74_022369D8(void) {
    // neg r0, r0
    *((u32*)(r4 + r2)) = *((u32*)sp);
    // neg r1, r0
    *((u32*)(r4 + *((u32*)sp))) = *((u32*)(sp + 4));
    *((u32*)(r4 + (*((u32*)sp) + 8))) = *((u32*)(sp + 4));
    *((u32*)(r4 + (*((u32*)sp) + 8))) = *((u32*)(sp + 4));
    *((u32*)(r4 + (r2 + 0x10))) = *((u32*)(sp + 4));
}




void ov74_02236A2C(void) {
}




void ov74_02236A54(void) {
    *((u32*)r3) = r4;
    *((u32*)(r0 + r3)) = r2;
    *((u32*)r1) = r0;
}




void ov74_02236A78(void) {
    *((u32*)(r0 + r1)) = r3;
    *((u32*)r4) = r0;
    *((u32*)r4) = *((u32*)(sp + 0x10));
}




void ov74_02236AAC(void) {
    *((u32*)r0) = r2;
}




void ov74_02236ABC(void) {
    *((u32*)(ov74_0223E304 + 4)) = 1;
}




void ov74_02236AC8(void) {
}




void ov74_02236AE0(void) {
    // blx r0
    *((u32*)r5) = r0;
    // sub r0, r0, r3
    *((u32*)r5) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)r5) = ((s32)((r0 + r0)) >> 0x10);
    *((u32*)r5) = (r4 + ((s32)((r0 + r0)) >> 0x10));
    *((u32*)(r4 + (r4 + ((s32)((r0 + r0)) >> 0x10)))) = r1;
    *((u32*)r5) = (r4 + ((s32)((r0 + r0)) >> 0x10));
    *((u32*)r5) = (r4 + ((s32)((r0 + r0)) >> 0x10));
    *((u32*)r5) = (r4 + ((s32)((r0 + r0)) >> 0x10));
    *((u32*)(r4 + (r4 + ((s32)((r0 + r0)) >> 0x10)))) = r1;
    *((u32*)r5) = (r4 + ((s32)((r0 + r0)) >> 0x10));
    *((u32*)r5) = (r4 + ((s32)((r0 + r0)) >> 0x10));
    *((u32*)r5) = (r4 + ((s32)((r0 + r0)) >> 0x10));
    *((u32*)(r4 + (r4 + ((s32)((r0 + r0)) >> 0x10)))) = r1;
    *((u32*)r5) = (r4 + ((s32)((r0 + r0)) >> 0x10));
    *((u32*)r5) = (r4 + ((s32)((r0 + r0)) >> 0x10));
    *((u32*)r5) = (r4 + ((s32)((r0 + r0)) >> 0x10));
    *((u32*)sp) = (r3 + 0xc);
    *((u32*)r5) = (r4 + ((s32)((r0 + r0)) >> 0x10));
    *((u32*)r5) = (r4 + ((s32)((r0 + r0)) >> 0x10));
    *((u32*)r5) = (r4 + (r4 + ((s32)((r0 + r0)) >> 0x10)));
    *((u32*)sp) = ((r3 + 0xc) + 0xd);
    *((u32*)r5) = (r4 + (r4 + ((s32)((r0 + r0)) >> 0x10)));
    *((u32*)r5) = (r4 + (r4 + ((s32)((r0 + r0)) >> 0x10)));
    *((u32*)r5) = (r4 + (r4 + ((s32)((r0 + r0)) >> 0x10)));
    *((u32*)(r4 + (r4 + (r4 + ((s32)((r0 + r0)) >> 0x10))))) = (r4 + r1);
    *((u32*)sp) = (((r3 + 0xc) + 0xd) + 0xc);
    *((u32*)(r4 + (r4 + (r4 + r1)))) = (r4 + (r4 + r1));
    *((u32*)r5) = (r4 + (r4 + r1));
    *((u32*)sp) = ((((r3 + 0xc) + 0xd) + 0xc) + 0xd);
    *((u32*)sp) = (((((r3 + 0xc) + 0xd) + 0xc) + 0xd) + 0xd);
    *((u32*)r5) = (r4 + (r4 + r1));
    *((u32*)(r4 + (r4 + (r4 + r1)))) = (r4 + (r4 + r1));
    *((u32*)(r4 + (r4 + (r4 + r1)))) = (r4 + (r4 + r1));
    *((u32*)sp) = (((((r3 + 0xc) + 0xd) + 0xc) + 0xd) + 0xd);
    *((u32*)r5) = (r4 + (r4 + r1));
    *((u32*)r5) = (r4 + (r4 + r1));
    *((u32*)(r4 + (r4 + (r4 + r1)))) = (r4 + (r4 + r1));
    *((u32*)(r4 + (r4 + r1))) = (r4 + (r4 + r1));
    *((u32*)r5) = (r4 + (r4 + r1));
    *((u32*)r5) = (r4 + (r4 + r1));
    *((u32*)(r4 + (r4 + (r4 + r1)))) = (r4 + (r4 + r1));
    *((u32*)r5) = (r4 + (r4 + r1));
    *((u32*)(r4 + (r4 + (r4 + r1)))) = (r4 + (r4 + r1));
}




void ov74_02236F30(void) {
    // b _02236F3A
}




void ov74_02236F44(void) {
}




void ov74_02236F80(void) {
}




void ConvertRSStringToDPStringInternational(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r2;
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 8));
    *((u16*)*((u32*)(sp + 4))) = *((u32*)(sp + 8));
    // strh r2, [r0, r1]
    *((u16*)*((u32*)(sp + 4))) = *((u32*)(sp + 4));
    *((u16*)*((u32*)(sp + 4))) = *((u32*)(sp + 4));
    *((u16*)*((u32*)(sp + 4))) = *((u32*)(sp + 4));
    *((u16*)*((u32*)(sp + 4))) = *((u32*)(sp + 4));
    // strh r2, [r0, r1]
}



