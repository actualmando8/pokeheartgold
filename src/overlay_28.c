/* Decompiled from asm/overlay_28.s */
#include "global.h"

void ov28_0225D520(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r7, r1, #0
    // mov r0, #3
    // str r2, [sp]
    // mov r1, #8
    // lsl r2, r0, #0xf
    // str r3, [sp, #4]
    // bl Heap_Create
    // ldr r0, _0225D5E4 ; =0x04001050
    // mov r1, #0
    // strh r1, [r0]
    // mov r1, #0xd
    // ldr r0, _0225D5E8 ; =ov28_0225DC2C
    // lsl r1, r1, #6
    // mov r2, #0xa
    // mov r3, #8
    // bl CreateSysTaskAndEnvironment
    // add r6, r0, #0
    // bl SysTask_GetData
    // add r4, r0, #0
    // str r5, [r4, #0x10]
    // ldr r0, [sp]
    // str r7, [r4, #0x14]
    // str r0, [r4, #0x18]
    // ldr r0, [sp, #4]
    // mov r1, #0
    // str r0, [r4, #0x1c]
    // mov r0, #0xcf
    // str r6, [r4, #0x20]
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r0, [r4, #0x18]
    // bl ov01_021E7F54
    // mov r1, #0xcd
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // cmp r0, #1
    // bne _0225D5A6
    // ldr r0, [r4, #0x18]
    // add r1, sp, #8
    // bl FieldSystem_GetFacingObject
    // ldr r0, [sp, #8]
    // bl MapObject_GetScriptID
    // bl ov01_021F6BD0
    // cmp r0, #1
    // beq _0225D59E
    // ldr r0, [sp, #8]
    // bl MapObject_GetSpriteID
    // bl ov01_021F6BB0
    // cmp r0, #1
    // bne _0225D5A6
    // mov r0, #0xcd
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #0xfd
    // mov r1, #8
    // bl NARC_New
    // add r7, r0, #0
    // bl ov28_0225D628
    // add r0, r5, #0
    // bl ov28_0225D650
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov28_0225D6FC
    // add r0, r4, #0
    // bl ov28_0225D764
    // add r0, r4, #0
    // bl ov28_0225D7E0
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov28_0225D898
    // add r0, r7, #0
    // bl NARC_Delete
    // add r0, r6, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0225D5E4: .word 0x04001050
    // _0225D5E8: .word ov28_0225DC2C
    // TODO: decompile
}


void ov28_0225D5EC(void) {
    SysTask_GetData(r1);
    DowsingMchn_FreeHiddenItemLocs();
    ov28_0225D8D0(r4);
    ov28_0225D878(r4);
    ov28_0225D7C4(r4);
    ov28_0225D6E0(*((u32*)(r4 + 0x10)));
    DestroySysTaskAndEnvironment(r5);
    Heap_Destroy(8);
}


u8 ov28_0225D624(void) {
    return 1;
}


void ov28_0225D628(void) {
    // push {r3, lr}
    // mov r0, #0x80
    // bl GX_SetBankForSubBG
    // mov r0, #1
    // lsl r0, r0, #8
    // bl GX_SetBankForSubOBJ
    // ldr r2, _0225D648 ; =0x04001000
    // ldr r0, _0225D64C ; =0xFFCFFFEF
    // ldr r1, [r2]
    // and r1, r0
    // mov r0, #0x10
    // orr r0, r1
    // str r0, [r2]
    // pop {r3, pc}
    // _0225D648: .word 0x04001000
    // _0225D64C: .word 0xFFCFFFEF
    // TODO: decompile
}


void ov28_0225D650(void) {
    // push {r4, r5, lr}
    // sub sp, #0x54
    // add r4, r0, #0
    // mov r0, #0
    // bl GXS_SetGraphicsMode
    // ldr r5, _0225D6D4 ; =ov28_0225EAC0
    // add r3, sp, #0x38
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
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #8
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0225D6D8 ; =ov28_0225EADC
    // add r3, sp, #0x1c
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
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r5, _0225D6DC ; =ov28_0225EAF8
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #6
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add sp, #0x54
    // pop {r4, r5, pc}
    // _0225D6D4: .word ov28_0225EAC0
    // _0225D6D8: .word ov28_0225EADC
    // _0225D6DC: .word ov28_0225EAF8
    // TODO: decompile
}


void ov28_0225D6E0(void) {
    FreeBgTilemapBuffer(6);
    FreeBgTilemapBuffer(r4, 5);
    FreeBgTilemapBuffer(r4, 4);
}


void ov28_0225D6FC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // add r4, r1, #0
    // ldr r2, [r5, #0x10]
    // add r0, r4, #0
    // mov r1, #2
    // mov r3, #5
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #0x10]
    // add r0, r4, #0
    // mov r3, #5
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #0x10]
    // add r0, r4, #0
    // mov r3, #6
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #4
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov28_0225D764(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xc4
    // mov r3, #8
    // bl NewMsgDataFromNarc
    // mov r1, #0x11
    // add r4, r0, #0
    // bl NewString_ReadMsgData
    // mov r1, #0x69
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0x12
    // bl NewString_ReadMsgData
    // mov r1, #0x1a
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0x16
    // bl NewString_ReadMsgData
    // mov r1, #0x6a
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0x17
    // bl NewString_ReadMsgData
    // mov r1, #0x6b
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0x15
    // bl NewString_ReadMsgData
    // mov r1, #0x1b
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r4, #0
    // bl DestroyMsgData
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov28_0225D7C4(void) {
    String_Delete(0, 0x1a);
}


void ov28_0225D7E0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r0, #0
    // mov r0, #4
    // mov r1, #8
    // bl FontID_Alloc
    // mov r0, #0
    // str r0, [sp, #0x10]
    // mov r0, #0x6d
    // lsl r0, r0, #2
    // ldr r6, _0225D86C ; =ov28_0225EB52
    // add r4, r7, r0
    // add r5, r7, #0
    // ldr r0, [r7, #0x10]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl AddWindow
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0225D870 ; =0x000F0100
    // mov r2, #0x1a
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // lsl r2, r2, #4
    // ldr r2, [r5, r2]
    // add r0, r4, #0
    // mov r1, #4
    // mov r3, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl CopyWindowPixelsToVram_TextMode
    // ldr r0, [sp, #0x10]
    // add r6, #8
    // add r0, r0, #1
    // add r4, #0x10
    // add r5, r5, #4
    // str r0, [sp, #0x10]
    // cmp r0, #5
    // blo _0225D7FC
    // mov r0, #0x6d
    // lsl r0, r0, #2
    // add r2, r7, r0
    // mov r0, #0xcd
    // lsl r0, r0, #2
    // ldr r1, [r7, r0]
    // ldr r0, _0225D874 ; =ov28_0225EB7C
    // ldrb r0, [r0, r1]
    // lsl r0, r0, #4
    // add r0, r2, r0
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // add r0, r7, r0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0225D86C: .word ov28_0225EB52
    // _0225D870: .word 0x000F0100
    // _0225D874: .word ov28_0225EB7C
    // TODO: decompile
}


void ov28_0225D878(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x6d
    // lsl r1, r1, #2
    // mov r4, #0
    // add r5, r0, r1
    // add r0, r5, #0
    // bl RemoveWindow
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #5
    // blo _0225D882
    // mov r0, #4
    // bl FontID_Release
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov28_0225D898(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #8
    // add r1, r5, #0
    // add r1, #0x28
    // add r2, r0, #0
    // bl G2dRenderer_Init
    // str r0, [r5, #0x24]
    // add r0, r5, #0
    // mov r2, #1
    // add r0, #0x28
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // add r0, r5, #0
    // bl ov28_0225D8EC
    // add r0, r5, #0
    // bl ov28_0225DA74
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov28_0225DB8C
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov28_0225D8D0(void) {
    ov28_0225DBFC();
    ov28_0225DB54(r4);
    ov28_0225D910(r4);
    SpriteList_Delete(*((u32*)(r4 + 0x24)));
}


void ov28_0225D8EC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r6, #0x15
    // add r5, r0, #0
    // mov r4, #0
    // mov r7, #2
    // lsl r6, r6, #4
    // add r0, r7, #0
    // add r1, r4, #0
    // mov r2, #8
    // bl Create2DGfxResObjMan
    // str r0, [r5, r6]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blo _0225D8F8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov28_0225D910(void) {
    Destroy2DGfxResObjMan(0, 0x15);
}


void ov28_0225D92C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [sp, #0x30]
    // add r6, r2, #0
    // str r0, [sp]
    // mov r0, #2
    // add r4, r1, #0
    // str r0, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // add r2, r3, #0
    // ldr r0, [r4]
    // add r1, r6, #0
    // mov r3, #1
    // bl AddCharResObjFromOpenNarc
    // str r0, [r5]
    // bl sub_0200ADA4
    // ldr r0, [r5]
    // bl sub_0200A740
    // ldr r0, [sp, #0x34]
    // ldr r2, [sp, #0x20]
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // add r1, r6, #0
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #4]
    // mov r3, #0
    // bl AddPlttResObjFromOpenNarc
    // str r0, [r5, #4]
    // bl sub_0200B00C
    // ldr r0, [r5, #4]
    // bl sub_0200A740
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x24]
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // ldr r0, [r4, #8]
    // add r1, r6, #0
    // mov r3, #1
    // bl AddCellOrAnimResObjFromOpenNarc
    // str r0, [r5, #8]
    // ldr r0, [sp, #0x3c]
    // ldr r2, [sp, #0x28]
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // ldr r0, [r4, #0xc]
    // add r1, r6, #0
    // mov r3, #1
    // bl AddCellOrAnimResObjFromOpenNarc
    // str r0, [r5, #0xc]
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov28_0225D9BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // add r7, r2, #0
    // add r6, r3, #0
    // bl GF2DGfxResObj_GetResID
    // str r0, [sp, #0x2c]
    // ldr r0, [r5, #4]
    // bl GF2DGfxResObj_GetResID
    // str r0, [sp, #0x30]
    // ldr r0, [r5, #8]
    // bl GF2DGfxResObj_GetResID
    // str r0, [sp, #0x34]
    // ldr r0, [r5, #0xc]
    // bl GF2DGfxResObj_GetResID
    // str r0, [sp]
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r6, [sp, #0x10]
    // ldr r1, [r4]
    // ldr r2, [sp, #0x30]
    // str r1, [sp, #0x14]
    // ldr r1, [r4, #4]
    // ldr r3, [sp, #0x34]
    // str r1, [sp, #0x18]
    // ldr r1, [r4, #8]
    // str r1, [sp, #0x1c]
    // ldr r1, [r4, #0xc]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    // add r0, r7, #0
    // bl CreateSpriteResourcesHeader
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov28_0225DA1C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x30
    // add r5, r3, #0
    // ldr r3, [r0, #0x24]
    // lsl r6, r1, #2
    // str r3, [sp]
    // str r2, [sp, #4]
    // ldrb r2, [r5]
    // lsl r2, r2, #0xc
    // str r2, [sp, #8]
    // ldrb r2, [r5, #1]
    // lsl r3, r2, #0xc
    // mov r2, #1
    // lsl r2, r2, #0x14
    // add r3, r3, r2
    // lsr r2, r2, #8
    // str r3, [sp, #0xc]
    // mov r3, #0
    // str r3, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // add r2, sp, #0
    // strh r3, [r2, #0x20]
    // ldrb r2, [r5, #2]
    // str r2, [sp, #0x24]
    // mov r2, #2
    // str r2, [sp, #0x28]
    // mov r2, #8
    // str r2, [sp, #0x2c]
    // mov r2, #6
    // lsl r2, r2, #6
    // add r4, r0, r2
    // add r0, sp, #0
    // bl Sprite_CreateAffine
    // str r0, [r4, r6]
    // ldrb r1, [r5, #3]
    // ldr r0, [r4, r6]
    // bl Sprite_SetAnimCtrlSeq
    // add sp, #0x30
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov28_0225DA74(void) {
    // push {r4, r5, lr}
    // sub sp, #0x44
    // add r5, r0, #0
    // mov r0, #0xe
    // mov r1, #8
    // bl NARC_New
    // add r4, r0, #0
    // mov r0, #7
    // str r0, [sp]
    // mov r0, #0x44
    // str r0, [sp, #4]
    // mov r0, #0x45
    // str r0, [sp, #8]
    // mov r0, #4
    // ldr r1, _0225DB40 ; =0x000001F2
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // add r0, r1, #0
    // str r1, [sp, #0x1c]
    // sub r0, #0x92
    // sub r1, #0xa2
    // add r0, r5, r0
    // add r1, r5, r1
    // add r2, r4, #0
    // mov r3, #0x46
    // bl ov28_0225D92C
    // add r0, r4, #0
    // bl NARC_Delete
    // mov r1, #0x16
    // lsl r1, r1, #4
    // add r0, r5, r1
    // sub r1, #0x10
    // add r1, r5, r1
    // add r2, sp, #0x20
    // mov r3, #1
    // bl ov28_0225D9BC
    // ldr r3, _0225DB44 ; =ov28_0225EA9A
    // add r0, r5, #0
    // mov r1, #0
    // add r2, sp, #0x20
    // bl ov28_0225DA1C
    // ldr r3, _0225DB48 ; =ov28_0225EA9E
    // add r0, r5, #0
    // mov r1, #1
    // add r2, sp, #0x20
    // bl ov28_0225DA1C
    // ldr r3, _0225DB4C ; =ov28_0225EAA2
    // add r0, r5, #0
    // mov r1, #2
    // add r2, sp, #0x20
    // bl ov28_0225DA1C
    // ldr r3, _0225DB50 ; =ov28_0225EAA6
    // add r0, r5, #0
    // mov r1, #3
    // add r2, sp, #0x20
    // bl ov28_0225DA1C
    // ldr r0, [r5, #0x18]
    // bl FieldSystem_GetPlayerAvatar
    // bl PlayerAvatar_CheckRunningShoesLock
    // cmp r0, #0
    // bne _0225DB22
    // mov r0, #0x61
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #3
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x62
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0xb
    // bl Sprite_SetAnimCtrlSeq
    // add sp, #0x44
    // pop {r4, r5, pc}
    // mov r0, #0x61
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #4
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x62
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #7
    // bl Sprite_SetAnimCtrlSeq
    // add sp, #0x44
    // pop {r4, r5, pc}
    // nop
    // _0225DB40: .word 0x000001F2
    // _0225DB44: .word ov28_0225EA9A
    // _0225DB48: .word ov28_0225EA9E
    // _0225DB4C: .word ov28_0225EAA2
    // _0225DB50: .word ov28_0225EAA6
    // TODO: decompile
}


void ov28_0225DB54(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl Sprite_Delete
    // mov r0, #0x61
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Sprite_Delete
    // mov r0, #0x62
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Sprite_Delete
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_0200AEB0
    // mov r0, #0x59
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl sub_0200B0A8
    // pop {r4, pc}
    // TODO: decompile
}


void ov28_0225DB8C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x48
    // add r5, r0, #0
    // add r2, r1, #0
    // add r1, sp, #0x20
    // mov r0, #0
    // strb r0, [r1]
    // strb r0, [r1, #1]
    // strb r0, [r1, #2]
    // strb r0, [r1, #3]
    // mov r0, #7
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // mov r0, #6
    // str r0, [sp, #8]
    // mov r0, #9
    // ldr r1, _0225DBF8 ; =0x000001F3
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // add r0, r1, #0
    // str r1, [sp, #0x1c]
    // sub r0, #0x83
    // sub r1, #0xa3
    // add r0, r5, r0
    // add r1, r5, r1
    // mov r3, #4
    // bl ov28_0225D92C
    // mov r1, #0x17
    // lsl r1, r1, #4
    // add r0, r5, r1
    // sub r1, #0x20
    // add r1, r5, r1
    // add r2, sp, #0x24
    // mov r3, #2
    // bl ov28_0225D9BC
    // mov r4, #0
    // add r6, sp, #0x24
    // add r7, sp, #0x20
    // add r0, r5, #0
    // add r1, r4, #4
    // add r2, r6, #0
    // add r3, r7, #0
    // bl ov28_0225DA1C
    // add r4, r4, #1
    // cmp r4, #4
    // blo _0225DBE2
    // add sp, #0x48
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225DBF8: .word 0x000001F3
    // TODO: decompile
}


void ov28_0225DBFC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // mov r6, #0x19
    // mov r4, #0
    // add r5, r7, #0
    // lsl r6, r6, #4
    // ldr r0, [r5, r6]
    // bl Sprite_Delete
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blo _0225DC08
    // mov r0, #0x17
    // lsl r0, r0, #4
    // ldr r0, [r7, r0]
    // bl sub_0200AEB0
    // mov r0, #0x5d
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // bl sub_0200B0A8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov28_0225DC2C(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #0x18]
    // add r1, r0, #0
    // add r1, #0xd2
    // ldrb r1, [r1]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1f
    // beq _0225DC56
    // bl FieldSystem_IsPlayerMovementAllowed
    // cmp r0, #0
    // beq _0225DC56
    // ldr r2, [r4, #0x18]
    // add r0, r2, #0
    // add r0, #0xd2
    // ldrb r1, [r0]
    // mov r0, #0x80
    // add r2, #0xd2
    // bic r1, r0
    // strb r1, [r2]
    // mov r0, #0xcf
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0225DC76
    // ldr r0, _0225DD1C ; =ov28_0225EA88
    // bl TouchscreenHitbox_FindHitboxAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0225DC76
    // mov r0, #0xcf
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r0, [r4, #0x18]
    // bl FieldSystem_TaskIsRunning
    // cmp r0, #1
    // beq _0225DC98
    // ldr r0, _0225DD1C ; =ov28_0225EA88
    // bl TouchscreenHitbox_FindHitboxAtTouchHeld
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0225DC98
    // mov r0, #0xcf
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0225DCD0
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl ov28_0225E31C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov28_0225E578
    // mov r2, #0x93
    // lsl r2, r2, #2
    // ldrh r1, [r4, r2]
    // ldr r0, _0225DD20 ; =0xFFFF7FFF
    // and r0, r1
    // strh r0, [r4, r2]
    // add r0, r2, #0
    // mov r1, #0
    // add r0, #0xec
    // strh r1, [r4, r0]
    // add r0, r2, #0
    // add r0, #0xee
    // strh r1, [r4, r0]
    // add r2, #0xf0
    // ldr r0, _0225DD24 ; =0x0000093D
    // str r1, [r4, r2]
    // bl StopSE
    // b _0225DCF6
    // cmp r0, #1
    // bne _0225DCF6
    // add r0, r4, #0
    // bl ov28_0225E7D4
    // add r0, r4, #0
    // bl ov28_0225E1A4
    // add r0, r4, #0
    // mov r1, #1
    // bl ov28_0225E31C
    // add r0, r4, #0
    // mov r1, #1
    // bl ov28_0225E578
    // add r0, r4, #0
    // bl ov28_0225E730
    // add r0, r4, #0
    // bl ov28_0225E3BC
    // add r0, r4, #0
    // bl ov28_0225E43C
    // add r0, r4, #0
    // bl ov28_0225E900
    // add r0, r4, #0
    // bl ov28_0225E938
    // add r0, r4, #0
    // bl ov28_0225E9E0
    // ldr r0, [r4, #0x24]
    // bl SpriteList_RenderAndAnimateSprites
    // pop {r4, pc}
    // _0225DD1C: .word ov28_0225EA88
    // _0225DD20: .word 0xFFFF7FFF
    // _0225DD24: .word 0x0000093D
    // TODO: decompile
}


void DowsingMchn_GetHiddenItemLocs(void) {
    AllocAndFetchNearbyHiddenItems(0x81, 8);
}


void DowsingMchn_FreeHiddenItemLocs(void) {
    Heap_Free(0x81, 0x81, 0);
}


void ov28_0225DD58(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // bl DowsingMchn_GetHiddenItemLocs
    // mov r0, #0x83
    // mov r4, #0
    // lsl r0, r0, #2
    // str r4, [r5, r0]
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r6, r0, r4
    // ldrb r0, [r6, #4]
    // cmp r0, #0xff
    // beq _0225DDF6
    // mov r0, #0x83
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _0225DDBA
    // mov r0, #0
    // ldrsh r0, [r6, r0]
    // str r0, [sp, #4]
    // bl abs
    // add r7, r0, #0
    // mov r0, #2
    // ldrsh r0, [r6, r0]
    // bl abs
    // add r0, r7, r0
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // mov r0, #0x82
    // ldr r1, [sp, #4]
    // lsl r0, r0, #2
    // strh r1, [r5, r0]
    // sub r0, r0, #4
    // ldr r0, [r5, r0]
    // add r1, r0, r4
    // mov r0, #2
    // ldrsh r1, [r1, r0]
    // ldr r0, _0225DE00 ; =0x0000020A
    // strh r1, [r5, r0]
    // mov r1, #1
    // add r0, r0, #2
    // str r1, [r5, r0]
    // b _0225DDF2
    // mov r0, #0
    // ldrsh r0, [r6, r0]
    // str r0, [sp]
    // bl abs
    // str r0, [sp, #8]
    // mov r0, #2
    // ldrsh r0, [r6, r0]
    // bl abs
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // cmp r7, r0
    // bls _0225DDF2
    // add r7, r0, #0
    // mov r0, #0x82
    // ldr r1, [sp]
    // lsl r0, r0, #2
    // strh r1, [r5, r0]
    // sub r0, r0, #4
    // ldr r0, [r5, r0]
    // add r1, r0, r4
    // mov r0, #2
    // ldrsh r1, [r1, r0]
    // ldr r0, _0225DE00 ; =0x0000020A
    // strh r1, [r5, r0]
    // add r4, r4, #6
    // b _0225DD6A
    // add r0, r5, #0
    // bl DowsingMchn_FreeHiddenItemLocs
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0225DE00: .word 0x0000020A
    // TODO: decompile
}


void ov28_0225DE04(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // mov r2, #0x11
    // asr r1, r0, #0x1f
    // lsl r2, r2, #0xe
    // mov r3, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // mov r0, #0x15
    // lsl r0, r0, #0xe
    // add r0, r1, r0
    // str r0, [r5]
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // mov r2, #0x11
    // asr r1, r0, #0x1f
    // lsl r2, r2, #0xe
    // mov r3, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // mov r0, #0x59
    // lsl r0, r0, #0xe
    // add r0, r1, r0
    // str r0, [r5, #4]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov28_0225DE64(void) {
    // add r2, r0, #0
    // sub r1, #0x64
    // ldr r3, _0225DE74 ; =FX_Atan2Idx
    // sub r2, #0x54
    // lsl r0, r1, #0xc
    // lsl r1, r2, #0xc
    // bx r3
    // nop
    // _0225DE74: .word FX_Atan2Idx
    // TODO: decompile
}


void ov28_0225DE78(void) {
    // ldr r3, _0225DE84 ; =FX_Atan2Idx
    // add r2, r0, #0
    // lsl r0, r1, #0xc
    // lsl r1, r2, #0xc
    // bx r3
    // nop
    // _0225DE84: .word FX_Atan2Idx
    // TODO: decompile
}


void ov28_0225DE88(void) {
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // mul r0, r1
    // lsr r0, r0, #0x10
    // bx lr
    // TODO: decompile
}


void ov28_0225DE98(void) {
    _u32_div_f(6);
}


void ov28_0225DEB0(void) {
    // push {r4, lr}
    // mov r1, #0x85
    // add r4, r0, #0
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // bl ov28_0225DE64
    // bl ov28_0225DE88
    // mov r1, #0x22
    // lsl r1, r1, #4
    // add r2, r1, #0
    // sub r2, #0xf4
    // add r3, r0, r2
    // add r2, r1, #0
    // str r0, [r4, r1]
    // add r2, #0xc
    // str r3, [r4, r2]
    // add r3, r0, #0
    // add r2, r1, #0
    // add r3, #0x78
    // add r2, #0x18
    // str r3, [r4, r2]
    // add r2, r1, #0
    // add r0, #0xd8
    // add r2, #0x24
    // str r0, [r4, r2]
    // add r0, r1, #0
    // add r0, #0x2c
    // ldrh r2, [r4, r0]
    // ldr r0, _0225DF00 ; =0xFFFF8000
    // add r1, #0x2c
    // and r2, r0
    // mov r0, #6
    // orr r0, r2
    // strh r0, [r4, r1]
    // pop {r4, pc}
    // nop
    // _0225DF00: .word 0xFFFF8000
    // TODO: decompile
}


void ov28_0225DF04(void) {
    // ldr r2, [r0]
    // ldr r3, [r0, #4]
    // lsl r1, r2, #1
    // add r1, r2, r1
    // add r1, r3, r1
    // lsr r1, r1, #2
    // str r1, [r0, #8]
    // bx lr
    // TODO: decompile
}


void ov28_0225DF14(void) {
    // push {r4, r5, r6, lr}
    // mov r1, #0x85
    // add r5, r0, #0
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl ov28_0225DE64
    // bl ov28_0225DE88
    // mov r1, #0x82
    // lsl r1, r1, #2
    // add r4, r0, #0
    // ldrsh r0, [r5, r1]
    // add r1, r1, #2
    // ldrsh r1, [r5, r1]
    // bl ov28_0225DE78
    // bl ov28_0225DE88
    // lsl r1, r4, #1
    // add r1, r4, r1
    // add r1, r0, r1
    // lsr r2, r1, #2
    // mov r1, #0x22
    // add r3, r4, #0
    // lsl r1, r1, #4
    // add r6, r0, #0
    // add r3, #0x1e
    // str r2, [r5, r1]
    // lsl r2, r3, #1
    // add r6, #0x78
    // add r2, r3, r2
    // add r2, r6, r2
    // add r6, r0, #0
    // lsr r3, r2, #2
    // add r2, r1, #0
    // add r2, #0xc
    // str r3, [r5, r2]
    // add r3, r4, #0
    // sub r3, #0x24
    // lsl r2, r3, #1
    // sub r6, #0x87
    // add r2, r3, r2
    // add r2, r6, r2
    // lsr r3, r2, #2
    // add r2, r1, #0
    // add r2, #0x18
    // add r4, #0x5a
    // str r3, [r5, r2]
    // lsl r2, r4, #1
    // add r0, #0x5a
    // add r2, r4, r2
    // add r0, r0, r2
    // lsr r2, r0, #2
    // add r0, r1, #0
    // add r0, #0x24
    // str r2, [r5, r0]
    // add r0, r1, #0
    // add r0, #0x2c
    // ldrh r2, [r5, r0]
    // ldr r0, _0225DFA0 ; =0xFFFF8000
    // add r1, #0x2c
    // and r2, r0
    // mov r0, #4
    // orr r0, r2
    // strh r0, [r5, r1]
    // pop {r4, r5, r6, pc}
    // nop
    // _0225DFA0: .word 0xFFFF8000
    // TODO: decompile
}


void ov28_0225DFA4(void) {
    _u32_div_f(3);
}


void ov28_0225DFBC(void) {
    // push {r4, r5, r6, lr}
    // mov r1, #0x85
    // add r5, r0, #0
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl ov28_0225DE64
    // bl ov28_0225DE88
    // mov r1, #0x82
    // lsl r1, r1, #2
    // add r4, r0, #0
    // ldrsh r0, [r5, r1]
    // add r1, r1, #2
    // ldrsh r1, [r5, r1]
    // bl ov28_0225DE78
    // bl ov28_0225DE88
    // add r6, r0, #0
    // lsl r0, r4, #1
    // add r0, r6, r0
    // mov r1, #3
    // bl _u32_div_f
    // mov r1, #0x22
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r4, #0
    // add r1, r6, #0
    // add r0, #0x1e
    // add r1, #0x87
    // lsl r0, r0, #1
    // add r0, r1, r0
    // mov r1, #3
    // bl _u32_div_f
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r4, #0
    // add r1, r6, #0
    // sub r0, #0x24
    // sub r1, #0x78
    // lsl r0, r0, #1
    // add r0, r1, r0
    // mov r1, #3
    // bl _u32_div_f
    // mov r1, #0x8e
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r4, #0x5a
    // add r6, #0x3c
    // lsl r0, r4, #1
    // add r0, r6, r0
    // mov r1, #3
    // bl _u32_div_f
    // mov r1, #0x91
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r1, #0
    // add r0, #8
    // ldrh r2, [r5, r0]
    // ldr r0, _0225E050 ; =0xFFFF8000
    // add r1, #8
    // and r2, r0
    // mov r0, #3
    // orr r0, r2
    // strh r0, [r5, r1]
    // pop {r4, r5, r6, pc}
    // _0225E050: .word 0xFFFF8000
    // TODO: decompile
}


void ov28_0225E054(void) {
    // ldr r2, [r0, #4]
    // ldr r1, [r0]
    // add r1, r2, r1
    // lsr r1, r1, #1
    // str r1, [r0, #8]
    // bx lr
    // TODO: decompile
}


void ov28_0225E060(void) {
    // push {r4, r5, r6, lr}
    // mov r1, #0x85
    // add r5, r0, #0
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl ov28_0225DE64
    // bl ov28_0225DE88
    // mov r1, #0x82
    // lsl r1, r1, #2
    // add r4, r0, #0
    // ldrsh r0, [r5, r1]
    // add r1, r1, #2
    // ldrsh r1, [r5, r1]
    // bl ov28_0225DE78
    // bl ov28_0225DE88
    // add r6, r0, #0
    // add r0, r4, r6
    // mov r1, #3
    // bl _u32_div_f
    // mov r1, #0x22
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r6, #0
    // add r0, #0x3c
    // add r0, r0, r4
    // lsr r2, r0, #1
    // add r0, r1, #0
    // add r0, #0xc
    // str r2, [r5, r0]
    // add r0, r6, #0
    // sub r0, #0x48
    // add r0, r0, r4
    // lsr r2, r0, #1
    // add r0, r1, #0
    // add r0, #0x18
    // add r4, #0x5a
    // add r6, #0x2d
    // str r2, [r5, r0]
    // add r0, r4, r6
    // lsr r2, r0, #1
    // add r0, r1, #0
    // add r0, #0x24
    // str r2, [r5, r0]
    // add r0, r1, #0
    // add r0, #0x2c
    // ldrh r2, [r5, r0]
    // ldr r0, _0225E0D8 ; =0xFFFF8000
    // add r1, #0x2c
    // and r2, r0
    // mov r0, #2
    // orr r0, r2
    // strh r0, [r5, r1]
    // pop {r4, r5, r6, pc}
    // _0225E0D8: .word 0xFFFF8000
    // TODO: decompile
}


void ov28_0225E0DC(void) {
    _u32_div_f(3);
}


void ov28_0225E0F4(void) {
    // push {r4, r5, r6, lr}
    // mov r1, #0x82
    // add r5, r0, #0
    // lsl r1, r1, #2
    // ldrsh r0, [r5, r1]
    // lsl r6, r0, #3
    // add r0, r1, #2
    // ldrsh r0, [r5, r0]
    // add r6, #0x54
    // lsl r4, r0, #3
    // add r0, r1, #0
    // add r0, #0xc
    // add r1, #0x10
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r4, #0x64
    // sub r0, r6, r0
    // sub r1, r4, r1
    // bl ov28_0225DE78
    // bl ov28_0225DE88
    // mov r1, #0x22
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r1, #0
    // sub r0, #0xc
    // add r2, r6, #0
    // sub r1, #8
    // ldr r0, [r5, r0]
    // add r2, #0xa
    // sub r0, r2, r0
    // add r2, r4, #0
    // ldr r1, [r5, r1]
    // add r2, #0xc
    // sub r1, r2, r1
    // bl ov28_0225DE78
    // bl ov28_0225DE88
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r1, #0
    // sub r0, #0x18
    // add r2, r6, #0
    // sub r1, #0x14
    // ldr r0, [r5, r0]
    // sub r2, #0xc
    // sub r0, r2, r0
    // ldr r1, [r5, r1]
    // sub r2, r4, #4
    // sub r1, r2, r1
    // bl ov28_0225DE78
    // bl ov28_0225DE88
    // mov r1, #0x8e
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r1, #0
    // sub r0, #0x24
    // sub r1, #0x20
    // ldr r0, [r5, r0]
    // sub r6, #8
    // ldr r1, [r5, r1]
    // sub r4, #8
    // sub r0, r6, r0
    // sub r1, r4, r1
    // bl ov28_0225DE78
    // bl ov28_0225DE88
    // mov r1, #0x91
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r1, #0
    // add r0, #8
    // ldrh r2, [r5, r0]
    // ldr r0, _0225E1A0 ; =0xFFFF8000
    // add r1, #8
    // and r2, r0
    // mov r0, #3
    // orr r0, r2
    // strh r0, [r5, r1]
    // pop {r4, r5, r6, pc}
    // _0225E1A0: .word 0xFFFF8000
    // TODO: decompile
}


void ov28_0225E1A4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r0, #0
    // bl ov28_0225DD58
    // mov r0, #0x83
    // lsl r0, r0, #2
    // ldr r1, [r6, r0]
    // cmp r1, #0
    // bne _0225E1C8
    // add r0, r6, #0
    // bl ov28_0225DEB0
    // mov r0, #0x21
    // mov r1, #0
    // lsl r0, r0, #4
    // str r1, [r6, r0]
    // b _0225E236
    // sub r0, r0, #4
    // ldrsh r0, [r6, r0]
    // bl abs
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // ldr r0, _0225E310 ; =0x0000020A
    // ldrsh r0, [r6, r0]
    // bl abs
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // cmp r4, #8
    // bgt _0225E1F8
    // cmp r0, #8
    // bgt _0225E1F8
    // add r0, r6, #0
    // bl ov28_0225E0F4
    // mov r0, #0x21
    // mov r1, #4
    // lsl r0, r0, #4
    // str r1, [r6, r0]
    // b _0225E236
    // cmp r4, #0xc
    // bgt _0225E210
    // cmp r0, #0xc
    // bgt _0225E210
    // add r0, r6, #0
    // bl ov28_0225E060
    // mov r0, #0x21
    // mov r1, #3
    // lsl r0, r0, #4
    // str r1, [r6, r0]
    // b _0225E236
    // cmp r4, #0x11
    // bgt _0225E228
    // cmp r0, #0x11
    // bgt _0225E228
    // add r0, r6, #0
    // bl ov28_0225DFBC
    // mov r0, #0x21
    // mov r1, #2
    // lsl r0, r0, #4
    // str r1, [r6, r0]
    // b _0225E236
    // add r0, r6, #0
    // bl ov28_0225DF14
    // mov r0, #0x21
    // mov r1, #1
    // lsl r0, r0, #4
    // str r1, [r6, r0]
    // mov r1, #0x93
    // lsl r1, r1, #2
    // ldrh r0, [r6, r1]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x1f
    // bne _0225E27E
    // mov r2, #0x22
    // lsl r2, r2, #4
    // mov r0, #0
    // add r1, r6, #0
    // sub r3, r2, #4
    // add r4, r2, #0
    // add r5, r2, #4
    // ldr r7, [r1, r2]
    // add r0, r0, #1
    // str r7, [r1, r3]
    // ldr r7, [r1, r4]
    // str r7, [r1, r5]
    // add r1, #0xc
    // cmp r0, #4
    // blo _0225E250
    // mov r1, #0x93
    // lsl r1, r1, #2
    // ldrh r2, [r6, r1]
    // mov r0, #2
    // lsl r0, r0, #0xe
    // orr r0, r2
    // strh r0, [r6, r1]
    // ldrh r2, [r6, r1]
    // ldr r0, _0225E314 ; =0xFFFF8000
    // add sp, #8
    // and r2, r0
    // mov r0, #1
    // orr r0, r2
    // strh r0, [r6, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // sub r1, #0x30
    // str r0, [sp]
    // add r0, r6, r1
    // add r4, r6, #0
    // str r0, [sp, #4]
    // mov r0, #0x22
    // lsl r0, r0, #4
    // mov r1, #0x5a
    // ldr r0, [r4, r0]
    // lsl r1, r1, #2
    // bl _u32_div_f
    // mov r0, #0x22
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // sub r0, r0, #4
    // mov r1, #0x5a
    // ldr r0, [r4, r0]
    // lsl r1, r1, #2
    // bl _u32_div_f
    // mov r0, #0x87
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r5, [r4, r0]
    // add r0, r0, #4
    // ldr r7, [r4, r0]
    // sub r0, r7, r5
    // bl abs
    // cmp r0, #0xb4
    // blt _0225E2EA
    // cmp r7, r5
    // bls _0225E2D6
    // mov r0, #0x87
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // sub r0, #0xb4
    // add r1, r1, r0
    // mov r0, #0x87
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // b _0225E2EA
    // cmp r7, r5
    // bhs _0225E2EA
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // sub r0, #0xb8
    // add r1, r1, r0
    // mov r0, #0x22
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // mov r1, #0x21
    // lsl r1, r1, #4
    // ldr r1, [r6, r1]
    // ldr r0, [sp, #4]
    // lsl r2, r1, #2
    // ldr r1, _0225E318 ; =ov28_0225EAAC
    // ldr r1, [r1, r2]
    // blx r1
    // ldr r0, [sp, #4]
    // add r4, #0xc
    // add r0, #0xc
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, r0, #1
    // str r0, [sp]
    // cmp r0, #4
    // blo _0225E28A
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225E310: .word 0x0000020A
    // _0225E314: .word 0xFFFF8000
    // _0225E318: .word ov28_0225EAAC
    // TODO: decompile
}


void ov28_0225E31C(void) {
    // push {r3, r4}
    // cmp r1, #0
    // blt _0225E356
    // mov r2, #0x21
    // lsl r2, r2, #4
    // ldr r4, [r0, r2]
    // ldr r3, _0225E368 ; =ov28_0225EB84
    // ldrb r3, [r3, r4]
    // mul r3, r1
    // add r1, r2, #0
    // add r1, #0x3e
    // ldrsh r1, [r0, r1]
    // add r3, r1, r3
    // add r1, r2, #0
    // add r1, #0x3e
    // strh r3, [r0, r1]
    // ldr r1, [r0, r2]
    // lsl r3, r1, #1
    // ldr r1, _0225E36C ; =ov28_0225EA90
    // ldrb r3, [r1, r3]
    // add r1, r2, #0
    // add r1, #0x3e
    // ldrsh r1, [r0, r1]
    // cmp r1, r3
    // ble _0225E362
    // add r2, #0x3e
    // strh r3, [r0, r2]
    // pop {r3, r4}
    // bx lr
    // ldr r1, _0225E370 ; =0x0000024E
    // ldrsh r2, [r0, r1]
    // cmp r2, #0
    // ble _0225E362
    // sub r2, r2, #1
    // strh r2, [r0, r1]
    // pop {r3, r4}
    // bx lr
    // nop
    // _0225E368: .word ov28_0225EB84
    // _0225E36C: .word ov28_0225EA90
    // _0225E370: .word 0x0000024E
    // TODO: decompile
}


void ov28_0225E374(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r0, #0x21
    // lsl r0, r0, #4
    // add r4, r1, #0
    // ldr r1, [r5, r0]
    // add r6, r2, #0
    // lsl r2, r1, #1
    // ldr r1, _0225E3B4 ; =ov28_0225EA90
    // ldrb r2, [r1, r2]
    // add r1, r0, #0
    // add r1, #0x3e
    // ldrsh r1, [r5, r1]
    // cmp r1, r2
    // ble _0225E396
    // add r0, #0x3e
    // strh r2, [r5, r0]
    // ldr r0, _0225E3B8 ; =0x0000024E
    // mov r1, #0xa
    // ldrsh r0, [r5, r0]
    // bl _s32_div_f
    // mov r1, #1
    // and r0, r1
    // strh r0, [r4]
    // ldr r0, _0225E3B8 ; =0x0000024E
    // mov r1, #0x14
    // ldrsh r0, [r5, r0]
    // bl _s32_div_f
    // strh r0, [r6]
    // pop {r4, r5, r6, pc}
    // _0225E3B4: .word ov28_0225EA90
    // _0225E3B8: .word 0x0000024E
    // TODO: decompile
}


void ov28_0225E3BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r1, _0225E420 ; =0x0000024E
    // add r5, r0, #0
    // ldrsh r1, [r5, r1]
    // cmp r1, #0
    // bne _0225E3E2
    // mov r4, #0
    // mov r6, #0x19
    // add r7, r4, #0
    // lsl r6, r6, #4
    // ldr r0, [r5, r6]
    // add r1, r7, #0
    // bl Sprite_SetDrawFlag
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blo _0225E3D0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // bl ov28_0225E374
    // mov r7, #0x19
    // mov r4, #0
    // add r6, sp, #0
    // lsl r7, r7, #4
    // mov r0, #0x19
    // ldrh r1, [r6]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r1, r1, #1
    // bl Sprite_SetPalIndexRespectVramOffset
    // mov r0, #0x19
    // lsl r0, r0, #4
    // ldrh r1, [r6, #2]
    // ldr r0, [r5, r0]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r5, r7]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blo _0225E3F4
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225E420: .word 0x0000024E
    // TODO: decompile
}


void ov28_0225E424(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // lsl r0, r1, #0x10
    // lsr r0, r0, #0x10
    // bl GF_DegreeToSinCosIdx
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #2
    // bl Sprite_SetRotationAndAffineType
    // pop {r4, pc}
    // TODO: decompile
}


void ov28_0225E43C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x93
    // lsl r0, r0, #2
    // ldrh r1, [r5, r0]
    // lsl r2, r1, #0x11
    // lsr r4, r2, #0x11
    // beq _0225E50E
    // ldr r2, _0225E514 ; =0xFFFF8000
    // lsr r3, r2, #0x10
    // add r3, r4, r3
    // lsl r3, r3, #0x10
    // and r1, r2
    // lsr r3, r3, #0x10
    // lsr r2, r2, #0x11
    // and r2, r3
    // orr r1, r2
    // strh r1, [r5, r0]
    // ldrh r1, [r5, r0]
    // lsl r1, r1, #0x11
    // lsr r1, r1, #0x11
    // bne _0225E4B0
    // mov r6, #0
    // add r4, r5, #0
    // add r7, sp, #4
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // sub r0, r0, #4
    // str r1, [r5, r0]
    // mov r1, #0x87
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r0, r7, #0
    // bl ov28_0225DE04
    // mov r0, #0x19
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // add r1, r7, #0
    // bl Sprite_SetMatrix
    // mov r0, #0x19
    // mov r1, #0x87
    // lsl r0, r0, #4
    // lsl r1, r1, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r5, r1]
    // bl ov28_0225E424
    // add r6, r6, #1
    // add r5, #0xc
    // add r4, r4, #4
    // cmp r6, #4
    // blo _0225E470
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // sub r0, #0x30
    // str r1, [sp]
    // add r4, r5, #0
    // add r6, r5, #0
    // add r7, r5, r0
    // mov r0, #0x89
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // sub r0, #8
    // str r1, [r4, r0]
    // mov r1, #0x87
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r0, sp, #4
    // bl ov28_0225DE04
    // mov r0, #0x19
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // add r1, sp, #4
    // bl Sprite_SetMatrix
    // mov r0, #0x19
    // mov r1, #0x87
    // lsl r0, r0, #4
    // lsl r1, r1, #2
    // ldr r0, [r6, r0]
    // ldr r1, [r4, r1]
    // bl ov28_0225E424
    // mov r1, #0x21
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r7, #0
    // lsl r2, r1, #2
    // ldr r1, _0225E518 ; =ov28_0225EAAC
    // ldr r1, [r1, r2]
    // blx r1
    // ldr r0, [sp]
    // add r4, #0xc
    // add r0, r0, #1
    // add r6, r6, #4
    // add r7, #0xc
    // str r0, [sp]
    // cmp r0, #4
    // blo _0225E4BC
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225E514: .word 0xFFFF8000
    // _0225E518: .word ov28_0225EAAC
    // TODO: decompile
}


void ov28_0225E51C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r0, #0x21
    // lsl r0, r0, #4
    // add r4, r2, #0
    // ldr r2, [r5, r0]
    // cmp r2, #4
    // bne _0225E566
    // sub r0, #8
    // ldrsh r0, [r5, r0]
    // add r0, r0, #7
    // sub r0, r0, r1
    // bl abs
    // add r6, r0, #0
    // ldr r0, _0225E570 ; =0x0000020A
    // ldrsh r0, [r5, r0]
    // add r0, r0, #7
    // sub r0, r0, r4
    // bl abs
    // add r1, r6, r0
    // mov r0, #0x10
    // sub r1, r0, r1
    // cmp r1, #5
    // bge _0225E554
    // mov r1, #5
    // b _0225E55A
    // cmp r1, #0x10
    // ble _0225E55A
    // add r1, r0, #0
    // mov r0, #0xa
    // mul r0, r1
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r4, r5, r6, pc}
    // ldr r0, _0225E574 ; =ov28_0225EA91
    // lsl r1, r2, #1
    // ldrb r0, [r0, r1]
    // pop {r4, r5, r6, pc}
    // nop
    // _0225E570: .word 0x0000020A
    // _0225E574: .word ov28_0225EA91
    // TODO: decompile
}


void ov28_0225E578(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // add r6, r0, #0
    // str r1, [sp, #0x10]
    // cmp r1, #1
    // bne _0225E5A2
    // mov r1, #0x85
    // lsl r1, r1, #2
    // ldr r0, [r6, r1]
    // lsr r0, r0, #3
    // sub r0, r0, #3
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #0x30]
    // add r0, r1, #4
    // ldr r0, [r6, r0]
    // lsr r0, r0, #3
    // sub r0, r0, #5
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #0x24]
    // ldr r0, _0225E724 ; =ov28_0225EB14
    // mov r7, #0
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // add r4, r6, #0
    // sub r0, r0, #3
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x30]
    // add r0, r0, #3
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // sub r0, r0, #3
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // add r0, r0, #3
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x24]
    // mov r5, #0
    // sub r0, r0, r7
    // str r0, [sp, #0x18]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x14]
    // add r0, r7, #5
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x3c]
    // mov r0, #1
    // add r1, r0, #0
    // ldr r0, [sp, #0x34]
    // lsl r1, r5
    // ldrh r0, [r0]
    // tst r0, r1
    // beq _0225E5E8
    // b _0225E6F6
    // ldr r0, [sp, #0x10]
    // cmp r0, #1
    // bne _0225E67E
    // ldr r0, [sp, #0x2c]
    // cmp r5, r0
    // blt _0225E658
    // ldr r0, [sp, #0x28]
    // cmp r5, r0
    // bgt _0225E658
    // ldr r0, [sp, #0x20]
    // cmp r7, r0
    // blt _0225E658
    // ldr r0, [sp, #0x1c]
    // cmp r7, r0
    // bgt _0225E658
    // ldr r0, [sp, #0x30]
    // sub r0, r0, r5
    // bl abs
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x18]
    // bl abs
    // ldr r1, [sp, #0x38]
    // add r0, r1, r0
    // cmp r0, #4
    // bgt _0225E658
    // lsl r1, r5, #0x10
    // ldr r2, [sp, #0x14]
    // add r0, r6, #0
    // lsr r1, r1, #0x10
    // bl ov28_0225E51C
    // add r2, r0, #0
    // mov r0, #0x25
    // add r3, r4, r5
    // lsl r0, r0, #4
    // ldrb r0, [r3, r0]
    // cmp r0, r2
    // bhs _0225E650
    // mov r0, #0x25
    // lsl r0, r0, #4
    // ldrb r1, [r3, r0]
    // add r1, #0xa
    // strb r1, [r3, r0]
    // ldrb r0, [r3, r0]
    // cmp r0, r2
    // bls _0225E6A2
    // mov r0, #0x25
    // lsl r0, r0, #4
    // strb r2, [r3, r0]
    // b _0225E6A2
    // mov r0, #0x25
    // lsl r0, r0, #4
    // strb r2, [r3, r0]
    // b _0225E6A2
    // mov r0, #0x25
    // add r3, r4, r5
    // lsl r0, r0, #4
    // ldrb r0, [r3, r0]
    // cmp r0, #2
    // blo _0225E674
    // mov r0, #0x25
    // lsl r0, r0, #4
    // ldrb r0, [r3, r0]
    // sub r1, r0, #2
    // mov r0, #0x25
    // lsl r0, r0, #4
    // strb r1, [r3, r0]
    // b _0225E6A2
    // mov r0, #0x25
    // mov r1, #0
    // lsl r0, r0, #4
    // strb r1, [r3, r0]
    // b _0225E6A2
    // mov r0, #0x25
    // add r3, r4, r5
    // lsl r0, r0, #4
    // ldrb r0, [r3, r0]
    // cmp r0, #2
    // blo _0225E69A
    // mov r0, #0x25
    // lsl r0, r0, #4
    // ldrb r0, [r3, r0]
    // sub r1, r0, #2
    // mov r0, #0x25
    // lsl r0, r0, #4
    // strb r1, [r3, r0]
    // b _0225E6A2
    // mov r0, #0x25
    // mov r1, #0
    // lsl r0, r0, #4
    // strb r1, [r3, r0]
    // mov r0, #0x25
    // lsl r0, r0, #4
    // ldrb r0, [r3, r0]
    // cmp r0, #0
    // bne _0225E6CC
    // ldr r0, [sp, #0x3c]
    // add r3, r5, #3
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x11
    // str r0, [sp, #0xc]
    // lsl r3, r3, #0x18
    // ldr r0, [r6, #0x10]
    // ldr r2, _0225E728 ; =0x00001001
    // mov r1, #6
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // b _0225E6F6
    // mov r1, #0xa
    // bl _s32_div_f
    // add r2, r0, #0
    // ldr r0, [sp, #0x3c]
    // lsl r3, r2, #1
    // str r0, [sp]
    // mov r0, #1
    // ldr r2, _0225E72C ; =ov28_0225EB32
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x11
    // ldrh r2, [r2, r3]
    // add r3, r5, #3
    // str r0, [sp, #0xc]
    // lsl r3, r3, #0x18
    // ldr r0, [r6, #0x10]
    // mov r1, #6
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // cmp r5, #0xf
    // bge _0225E702
    // b _0225E5D8
    // ldr r0, [sp, #0x34]
    // add r4, #0xf
    // add r0, r0, #2
    // str r0, [sp, #0x34]
    // add r0, r7, #1
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // cmp r7, #0xf
    // bge _0225E716
    // b _0225E5C2
    // ldr r0, [r6, #0x10]
    // mov r1, #6
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225E724: .word ov28_0225EB14
    // _0225E728: .word 0x00001001
    // _0225E72C: .word ov28_0225EB32
    // TODO: decompile
}


void ov28_0225E730(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r5, r0, #0
    // bl ov28_0225E374
    // add r0, sp, #0
    // ldrh r1, [r0, #2]
    // ldrh r0, [r0]
    // mov r2, #0x21
    // lsl r2, r2, #4
    // lsl r0, r0, #1
    // add r0, r1, r0
    // lsl r1, r0, #6
    // mov r0, #0xf
    // lsl r0, r0, #6
    // sub r0, r1, r0
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // ldr r0, [r5, r2]
    // cmp r0, #4
    // bne _0225E798
    // add r1, r2, #0
    // add r1, #8
    // ldr r1, [r5, r1]
    // add r0, r2, #4
    // lsr r1, r1, #3
    // ldr r0, [r5, r0]
    // sub r2, #8
    // sub r6, r1, #5
    // ldrsh r1, [r5, r2]
    // lsr r0, r0, #3
    // sub r0, r0, #3
    // add r1, r1, #7
    // sub r0, r1, r0
    // bl abs
    // add r7, r0, #0
    // ldr r0, _0225E7C8 ; =0x0000020A
    // ldrsh r0, [r5, r0]
    // add r0, r0, #7
    // sub r0, r0, r6
    // bl abs
    // add r1, r7, r0
    // mov r0, #0x10
    // sub r0, r0, r1
    // lsl r0, r0, #6
    // add r0, r4, r0
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // mov r0, #0xce
    // lsl r0, r0, #2
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // bne _0225E7AA
    // ldr r0, _0225E7CC ; =0x0000093D
    // add r1, r4, #0
    // bl PlaySE_SetPitch
    // mov r0, #0xce
    // lsl r0, r0, #2
    // ldrh r1, [r5, r0]
    // cmp r1, #0xa
    // bne _0225E7B8
    // mov r1, #0
    // b _0225E7BA
    // add r1, r1, #1
    // strh r1, [r5, r0]
    // ldr r0, _0225E7D0 ; =0x0000033A
    // ldrsh r1, [r5, r0]
    // cmp r1, r4
    // beq _0225E7C6
    // strh r4, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225E7C8: .word 0x0000020A
    // _0225E7CC: .word 0x0000093D
    // _0225E7D0: .word 0x0000033A
    // TODO: decompile
}


void ov28_0225E7D4(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // add r0, sp, #4
    // add r1, sp, #0
    // bl System_GetTouchHeldCoords
    // mov r1, #0x85
    // lsl r1, r1, #2
    // ldr r0, [sp, #4]
    // ldr r2, [r4, r1]
    // cmp r2, r0
    // bne _0225E7F8
    // add r1, r1, #4
    // ldr r2, [r4, r1]
    // ldr r1, [sp]
    // cmp r2, r1
    // beq _0225E80A
    // mov r1, #0x85
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r2, [sp]
    // add r0, r1, #4
    // str r2, [r4, r0]
    // add sp, #8
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #1
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void ov28_0225E810(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x18]
    // add r1, r0, #0
    // add r1, #0xd2
    // ldrb r1, [r1]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x1f
    // cmp r1, #1
    // bne _0225E828
    // mov r4, #4
    // b _0225E890
    // bl FieldSystem_IsPlayerMovementAllowed
    // cmp r0, #0
    // ldr r0, [r5, #0x18]
    // bne _0225E860
    // bl FieldSystem_GetPlayerAvatar
    // bl PlayerAvatar_GetMapObject
    // add r4, r0, #0
    // bl MapObject_GetSpriteID
    // sub r0, #0xbc
    // cmp r0, #1
    // bhi _0225E858
    // add r0, r4, #0
    // bl sub_0205F330
    // cmp r0, #1
    // bne _0225E854
    // mov r4, #3
    // b _0225E890
    // mov r4, #4
    // b _0225E890
    // mov r0, #0xcd
    // lsl r0, r0, #2
    // ldr r4, [r5, r0]
    // b _0225E890
    // bl ov01_021E7F54
    // add r4, r0, #0
    // cmp r4, #1
    // bne _0225E890
    // ldr r0, [r5, #0x18]
    // add r1, sp, #0
    // bl FieldSystem_GetFacingObject
    // ldr r0, [sp]
    // bl MapObject_GetScriptID
    // bl ov01_021F6BD0
    // cmp r0, #1
    // beq _0225E88E
    // ldr r0, [sp]
    // bl MapObject_GetSpriteID
    // bl ov01_021F6BB0
    // cmp r0, #1
    // bne _0225E890
    // mov r4, #0
    // mov r1, #0xcd
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // cmp r4, r0
    // beq _0225E8B0
    // mov r0, #0x6d
    // lsl r0, r0, #2
    // str r4, [r5, r1]
    // add r2, r5, r0
    // ldr r1, [r5, r1]
    // ldr r0, _0225E8B4 ; =ov28_0225EB7C
    // ldrb r0, [r0, r1]
    // lsl r0, r0, #4
    // add r0, r2, r0
    // bl ScheduleWindowCopyToVram
    // pop {r3, r4, r5, pc}
    // nop
    // _0225E8B4: .word ov28_0225EB7C
    // TODO: decompile
}


void ov28_0225E8B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // str r2, [sp]
    // add r6, r3, #0
    // bl TouchscreenHitbox_TouchHeldIsIn
    // add r4, r0, #0
    // add r0, r5, #0
    // bl Sprite_GetAnimationNumber
    // add r7, r0, #0
    // cmp r4, #1
    // bne _0225E8E6
    // bl System_GetTouchNew
    // cmp r0, #0
    // beq _0225E8E6
    // add r0, r5, #0
    // add r1, r6, #0
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r4, #1
    // bne _0225E8F2
    // cmp r7, r6
    // bne _0225E8F2
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov28_0225E900(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x18]
    // bl sub_0203DF8C
    // cmp r0, #1
    // bne _0225E914
    // add r0, r4, #0
    // bl ov28_0225E810
    // mov r1, #6
    // lsl r1, r1, #6
    // ldr r0, _0225E930 ; =_0225EA7C
    // ldr r1, [r4, r1]
    // mov r2, #5
    // mov r3, #6
    // bl ov28_0225E8B8
    // cmp r0, #0
    // beq _0225E92E
    // ldr r0, _0225E934 ; =gSystem
    // mov r1, #1
    // str r1, [r0, #0x5c]
    // pop {r4, pc}
    // _0225E930: .word _0225EA7C
    // _0225E934: .word gSystem
    // TODO: decompile
}


void ov28_0225E938(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x18]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetState
    // cmp r0, #1
    // beq _0225E952
    // add r0, r5, #0
    // bl ov28_0225EA58
    // cmp r0, #1
    // bne _0225E96C
    // mov r0, #0x61
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x62
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // pop {r4, r5, r6, pc}
    // mov r0, #0x61
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0x62
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, _0225E9DC ; =ov28_0225EA84
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #1
    // bne _0225E9DA
    // ldr r0, [r5, #0x18]
    // bl FieldSystem_GetPlayerAvatar
    // add r6, r0, #0
    // bl PlayerAvatar_CheckRunningShoesLock
    // add r4, r0, #0
    // bne _0225E9B8
    // mov r0, #0x61
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #4
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x62
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #7
    // bl Sprite_SetAnimCtrlSeq
    // b _0225E9D0
    // mov r0, #0x61
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #3
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x62
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0xb
    // bl Sprite_SetAnimCtrlSeq
    // mov r1, #1
    // add r0, r6, #0
    // eor r1, r4
    // bl PlayerAvatar_SetRunningShoesLock
    // pop {r4, r5, r6, pc}
    // _0225E9DC: .word ov28_0225EA84
    // TODO: decompile
}


void ov28_0225E9E0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov28_0225EA58
    // cmp r0, #1
    // bne _0225EA10
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0x63
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #8
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x63
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // pop {r4, pc}
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x63
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r1, #0x63
    // lsl r1, r1, #2
    // ldr r0, _0225EA54 ; =ov28_0225EA80
    // ldr r1, [r4, r1]
    // mov r2, #8
    // mov r3, #9
    // bl ov28_0225E8B8
    // cmp r0, #0
    // beq _0225EA50
    // ldr r0, [r4, #0x18]
    // mov r1, #0xb
    // add r0, #0xd0
    // strh r1, [r0]
    // mov r0, #0x43
    // ldr r1, [r4, #0x18]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // mov r1, #1
    // bl MenuInputStateMgr_SetState
    // pop {r4, pc}
    // nop
    // _0225EA54: .word ov28_0225EA80
    // TODO: decompile
}


void ov28_0225EA58(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x18]
    // bl FieldSystem_TaskIsRunning
    // cmp r0, #1
    // bne _0225EA76
    // ldr r0, [r4, #0x18]
    // add r0, #0xd2
    // ldrb r0, [r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _0225EA76
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}

