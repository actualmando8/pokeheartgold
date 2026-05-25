/* Decompiled from asm/overlay_80_0223A00C.s */
#include "global.h"

void ov80_0223A00C(void) {
    // str r3, [sp]
    CreateSysTaskAndEnvironment(ov80_0223A144, (0x5a << 2), (0xfa << 2), 0x65);
    SysTask_GetData();
    *((u32*)(r0 + 0x10)) = r5;
    // ldr r0, [sp]
    *((u32*)(r0 + 0x14)) = r7;
    *((u32*)(r0 + 0x18)) = r0;
    // ldr r0, [sp, #0x18]
    // add r1, sp, #8
    *((u32*)(r0 + 0x1c)) = r0;
    // ldr r0, [sp, #0x1c]
    *((u32*)(r0 + 0x20)) = r0;
    // ldrsh r0, [r1, r0]
    *((u16*)(r0 + 0x28)) = 0x18;
    // ldrsh r0, [r1, r0]
    *((u16*)(r0 + 0x2a)) = 0x1c;
    NARC_New(0x6d, 0x65);
    *((u32*)(r4 + 0x24)) = r0;
    // strh r0, [r1]
    // add r0, #0x2c
    // strb r1, [r0]
    BgGetCharPtr(1, (r6 - 1));
    MIi_CpuClear32(0, r0, (2 << 0xe));
    ScheduleSetBgPosText(r5, 1, 0, 0);
    ScheduleSetBgPosText(r5, 1, 3, 0);
    // add r1, #0x2c
    // add r1, r3, r1
    ov80_0223A938(r4, (0xc * *((u8*)r4)), *((u8*)r4), ov80_0223DB98);
    SysTask_CreateOnVWaitQueue(ov80_0223A0EC, r4, 1);
    *((u32*)(r4 + 0x34)) = r0;
}




void ov80_0223A0C0(void) {
    // ldr r0, [r5, r0]
}




void ov80_0223A0EC(void) {
    // and r3, r2
    // and r6, r2
    // strh r5, [r6]
    *((u16*)(0x04000040 + 4)) = ((*((u8*)(r1 + (0x00000151 - 2))) << 8) | *((u8*)(r1 + 0x00000151)));
    // and r3, r2
    *((u16*)(0x04000040 + 2)) = (*((u8*)(r1 + (0x00000151 + 3))) | (*((u8*)(r1 + (0x00000151 + 1))) << 8));
    // and r0, r2
    *((u16*)(0x04000040 + 6)) = ((*((u8*)(r1 + (0x00000151 + 2))) << 8) | *((u8*)(r1 + (0x00000151 + 4))));
}




void ov80_0223A144(void) {
    // add r3, #0x2c
    // add r2, r2, r3
    ov80_0223A174(r1, 0x65, ov80_0223DB98, (0xc * *((u8*)r1)));
    ov80_0223A0C0(r4, r5);
}




void ov80_0223A174(void) {
    // add r2, r1, r1
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0223A194: ; jump table
    Heap_Alloc(r1, 0x94, (*((u16*)(r2 + 6)) << 0x10));
    *((u32*)(r4 + 0xc)) = r0;
    memset(0, 0x94);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + 0x1c)), 2, *((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x18)));
    // lsl r2, r1
    // str r0, [r4, r3]
    FontSystem_NewInit(4, 0x65, 1, (0x59 << 2));
    *((u32*)(r4 + 0x30)) = r0;
    NewMsgDataFromNarc(1, 0x1b, 0x000002D9, r6);
    // str r0, [sp, #0x20]
    NewString_ReadMsgData(*((u32*)r7));
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldrsh r0, [r4, r0]
    // ldr r2, [sp, #0x24]
    // add r1, #0x7c
    // add r0, #0x74
    // str r0, [sp, #0xc]
    // ldrsh r0, [r4, r0]
    // add r0, #0x58
    // str r0, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    ov80_0223A62C(r4, r5, 0);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r5 + 0x7c)), 0);
    // ldr r0, [sp, #0x24]
    String_Delete();
    // ldr r0, [sp, #0x20]
    DestroyMsgData();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + 0x1c)), 2, *((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x18)));
    // str r0, [r4, r3]
    // lsl r1, r2
    // str r1, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x18)), *((u32*)(r4 + 0x24)), *((u8*)(r7 + 5)));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x18)), *((u32*)(r4 + 0x24)), *((u8*)(r7 + 6)));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x18)), *((u32*)(r4 + 0x24)), *((u8*)(r7 + 7)));
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_BlendPalette(*((u32*)(r4 + 0x1c)), 2, ((*((u32*)(r4 + (0x16 << 4))) << 0x14) >> 0x10), 0x10);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + 0x1c)), 2, *((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x18)));
    // lsl r1, r3
    // str r1, [r4, r7]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x18)), *((u32*)(r4 + 0x24)), 0xcc);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x18)), *((u32*)(r4 + 0x24)), 0xcd);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x18)), *((u32*)(r4 + 0x24)), 0xce);
    SpriteSystem_NewSprite(*((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x18)), ov80_0223DB30);
    // add r1, #0x90
    // str r0, [r1]
    // add r0, #0x90
    ManagedSprite_SetDrawFlag(*((u32*)r5), 0);
    // add r0, #0x90
    Sprite_TickFrame(*((u32*)*((u32*)r5)));
    // ldrsh r0, [r4, r0]
    _fflt((0x2a << 0xc));
    _fadd((0x3f << 0x18), r0);
    // str r0, [sp, #0x1c]
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    // str r0, [sp, #0x1c]
    // ldrsh r0, [r4, r0]
    _fflt((0x28 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r0, [sp, #0x1c]
    _ffix();
    // add r5, #0x14
    // str r6, [sp]
    // add r2, r7, r2
    // add r3, r3, r5
    ov80_0223A78C(r4, r5, (0x12 << 0xe), r0);
    // str r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0x00007FFF);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
    // str r0, [r4]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r6, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0x00007FFF);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
    // str r0, [r4]
    ov80_0223AA80((*((u32*)r4) + 1), 0);
    // str r0, [r4]
    // str r0, [r4]
    *((u32*)(r5 + 0x78)) = 0xa;
    *((u32*)(r5 + 0x78)) = (*((u32*)(r5 + 0x78)) - 1);
    // bpl _0223A4FC
    // add r5, #0x14
    ov80_0223A834(r5);
    // str r0, [r4]
    // str r0, [r4]
    // add r2, r4, r2
    ov80_0223AB94((r1 + 1), r5, (0x56 << 2));
    // str r0, [r4]
    *((u32*)(r5 + 0x78)) = 0xa;
    // str r0, [r4]
    *((u32*)(r5 + 0x78)) = (*((u32*)(r5 + 0x78)) - 1);
    // bpl _0223A4FC
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r6, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0x00007FFF);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
    // str r0, [sp]
    // eor r2, r3
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x1c)), 2, ((0x00003FFF << 0x10) >> 0x10), 0xe);
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_BlendPalette(*((u32*)(r4 + 0x1c)), 2, ((*((u32*)(r4 + (0x16 << 4))) << 0x14) >> 0x10), 0x10);
    // mvn r0, r0
    SetBlendBrightness(0xd, 0x2c, 1);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r5 + 0x7c)), 1);
    // str r0, [r4]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r6, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0x00007FFF);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
    *((u32*)(r5 + 0x78)) = 0x1a;
    // str r0, [r4]
    *((u32*)(r5 + 0x78)) = (*((u32*)(r5 + 0x78)) - 1);
    // bpl _0223A620
    // str r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0x00007FFF);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
    // str r0, [r4]
    sub_0200FBF4(1, 0x00007FFF);
    // strh r0, [r1]
    // add r0, #0x7c
    ov80_0223A748(r5, *((u32*)(r4 + 0x20)));
    sub_020135AC(*((u32*)(r4 + 0x30)));
    // add r0, #0x90
    Sprite_DeleteAndFreeResources(*((u32*)r5));
    // add r5, #0x14
    ov80_0223A81C(r5);
}




void ov80_0223A62C(void) {
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // ldr r6, [sp, #0x9c]
    // ldr r4, [sp, #0xa8]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    // add r2, sp, #0x2c
    // add r3, sp, #0x28
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x3c
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // add r1, sp, #0x3c
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x90]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldr r2, [sp, #0x18]
    // add r0, sp, #0x3c
    // str r3, [sp, #0x14]
    // add r2, sp, #0x3c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, sp, #0x3c
    // add r3, sp, #0x30
    // ldr r0, [sp, #0xa4]
    // ldr r1, [sp, #0x2c]
    // add r0, r1, r0
    // asr r0, r0, #1
    // sub r6, r6, r0
    // str r0, [sp, #0x4c]
    // add r0, sp, #0x3c
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x98]
    // str r0, [sp, #0x58]
    // ldr r0, [sp, #0x34]
    // str r1, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // ldr r0, [sp, #0xa0]
    // str r6, [sp, #0x64]
    // sub r0, #8
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x74]
    // str r0, [sp, #0x78]
    // add r0, sp, #0x4c
    // str r1, [sp, #0x6c]
    // ldr r1, [sp, #0x94]
    // ldr r2, [sp, #0xa0]
    // sub r2, #8
    // add r0, sp, #0x3c
    // str r7, [r5]
    // add r3, sp, #0x30
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x2c]
}




void ov80_0223A748(void) {
}




void ov80_0223A75C(void) {
    // asr r1, r4, #2
    // add r1, r4, r1
    // asr r5, r1, #3
    // str r4, [r6]
    // str r5, [r7]
}




void ov80_0223A78C(void) {
    // mov ip, r2
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // mov r0, ip
    // asr r1, r0, #0xc
    // add r0, sp, #0
    // strh r1, [r0]
    // asr r1, r6, #0xc
    *((u16*)(*((u32*)ov80_0223DB64) + 2)) = r1;
    // strh r6, [r4]
    *((u16*)(r1 + 2)) = 0;
    // add r5, #0x14
    // add r2, sp, #0
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x14)), *((u32*)(r0 + 0x18)), ov80_0223DB64);
    *((u32*)(r4 + 4)) = r0;
    ManagedSprite_SetDrawFlag(0);
    Sprite_SetAffineOverwriteMode(*((u32*)*((u32*)(r4 + 4))), 2);
    Sprite_SetAnimCtrlSeq(*((u32*)*((u32*)(r4 + 4))), 1);
    ov80_0223A8C4(r5, (2 << 0xc), ((2 << 0xc) >> 1), 6);
    ov80_0223A8C4(r5, (1 << 0xc), (1 << 0xc), 6);
    // add r5, #0x14
}




void ov80_0223A81C(void) {
}




void ov80_0223A834(void) {
    // str r0, [sp]
    // ldrsh r0, [r7, r1]
    // str r0, [sp]
    // ldrsh r0, [r7, r0]
    // strh r0, [r7]
    // ldr r0, [sp]
    // ldrsh r0, [r7, r0]
    // strh r0, [r7]
    // ldrsh r0, [r7, r1]
    // str r0, [sp, #4]
    // ldrsh r0, [r7, r0]
    // add r6, #0x14
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    // add r1, sp, #0xc
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r6, #0x14
    // str r0, [sp, #4]
    // ldrsh r1, [r7, r0]
    // ldr r0, [sp, #4]
    // add r4, #0x14
    // ldr r0, [sp]
}




void ov80_0223A8C4(void) {
    // str r1, [r0]
    // sub r1, r2, r1
}




void ov80_0223A8D4(void) {
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // add r0, r0, r2
    // adc r1, r3
    // add r0, r0, r1
    // str r0, [r4]
}




void ov80_0223A91C(void) {
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // add r2, sp, #0
    // str r1, [sp]
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}




void ov80_0223A938(void) {
    // and r1, r0
    // str r0, [r3]
    // add r2, #0x48
    // strh r1, [r2]
    // and r1, r6
    // strh r1, [r2]
    // add r1, #0x4a
    // strh r0, [r1]
    // add r1, #0x40
    // strh r0, [r1]
    // add r1, #0x44
    // strh r0, [r1]
    // add r1, #0x42
    // strh r0, [r1]
    // add r3, #0x46
    // strh r0, [r3]
    // str r0, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r0 + 0x1c)), 0x6d, *((u8*)(r1 + 8)), 0x65);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + 0x24)), *((u8*)(r4 + 9)), *((u32*)(r5 + 0x10)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x24)), *((u8*)(r4 + 0xa)), *((u32*)(r5 + 0x10)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r5 + 0x10)), 1, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x10)), 1);
    // add r2, sp, #0x10
    GfGfxLoader_GetPlttData(0x6d, *((u8*)(r4 + 8)), 0x65);
    // ldr r0, [sp, #0x10]
    // add r1, #0x40
    // add r2, #0xe0
    MIi_CpuCopy16(*((u32*)(r0 + 0xc)), r5, r7);
    Heap_Free(r4);
    SysTask_CreateOnMainQueue(ov80_0223AA4C, r5, 0x0000044C);
    // str r0, [r5, r1]
}




void ov80_0223AA4C(void) {
    // bmi _0223AA7E
    // str r0, [sp]
    // add r2, #0x40
    // add r1, r2, r1
}




void ov80_0223AA80(void) {
    // add r4, r0, r1
    MI_CpuFill8(r4, 0, 0x14);
    // str r0, [r4]
    *((u32*)(r4 + 4)) = (5 << 0xc);
    SysTask_CreateOnMainQueue(ov80_0223AAD0, r4, (0xfa << 2));
    // str r0, [r4]
    *((u32*)(r4 + 4)) = (0x72 << 8);
    SysTask_CreateOnMainQueue(ov80_0223AB34, r4, (0xfa << 2));
}




void ov80_0223AAD0(void) {
    // sub r2, r2, r0
    // str r2, [r1]
    // add r0, r2, r0
    // str r0, [r1]
    // asr r2, r2, #8
    // asr r2, r2, #8
    // asr r2, r2, #8
    // asr r0, r0, #8
}




void ov80_0223AB34(void) {
    // add r2, r2, r0
    // str r2, [r1]
    // sub r0, r2, r0
    // str r0, [r1]
    // asr r2, r2, #8
    // asr r2, r2, #8
    // asr r2, r2, #8
    // asr r0, r0, #8
}




void ov80_0223AB94(void) {
    // ldrsh r2, [r3, r1]
    // add r1, #0xd8
    // add r1, r2, r1
    // ldrsh r2, [r3, r2]
    // add r0, #0x90
    // add r2, #0x50
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // add r5, #0x90
    // str r0, [r4]
    // sub r1, r1, r0
    // str r1, [r4]
    // str r0, [r4]
    // ldrsh r2, [r3, r2]
    // add r5, #0x90
    // add r2, #0x50
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
}



