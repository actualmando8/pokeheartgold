/* Decompiled from asm/overlay_115.s */
#include "global.h"

void ov115_0225F020(void) {
    // strh r6, [r5]
    // ldr r7, [sp, #0x28]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    *((u16*)(r0 + 2)) = 0;
    // add r4, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    ov01_021F0718(0, r7);
    *((u32*)(r5 + 4)) = r0;
    Sprite_SetDrawFlag(0);
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 4)), 1);
    Sprite_SetAffineOverwriteMode(*((u32*)(r5 + 4)), 2);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 4)), 1);
    ov01_021EFE70(r4, (2 << 0xc), ((2 << 0xc) >> 1), 6);
    ov01_021EFE70(r4, (1 << 0xc), (1 << 0xc), 6);
    // add r4, #0x14
}



void ov115_0225F09C(void) {
}



void ov115_0225F0B4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // ldrsh r1, [r1, r0]
    // ldr r2, [sp]
    // str r1, [sp, #4]
    // ldrsh r1, [r2, r1]
    // ldr r1, [sp]
    // strh r2, [r1]
    // ldr r1, [sp, #4]
    // ldrsh r1, [r2, r1]
    // ldr r1, [sp]
    // strh r2, [r1]
    // ldrsh r0, [r1, r0]
    // ldr r0, [sp]
    *((u16*)(2 + 2)) = (2 + 1);
    // ldr r0, [sp]
    // ldrsh r0, [r0, r1]
    // ldr r7, [sp]
    // ldr r6, [sp]
    // add r7, #0x14
    ov01_021EFE80(r7, 2, 3);
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    ov01_021F074C(*((u32*)(r6 + 0x14)), *((u32*)(r6 + 0x14)), *((u32*)(r6 + 0x14)));
    // add r1, sp, #0xc
    Sprite_SetAffineScale(*((u32*)(r5 + 4)));
    Sprite_SetDrawFlag(*((u32*)(r5 + 4)), 1);
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    Sprite_SetDrawFlag(*((u32*)(r5 + 4)), 0);
    // ldr r1, [sp]
    // ldrsh r0, [r1, r0]
    // add r7, #0x14
    // add r6, #0x14
    // ldr r0, [sp, #4]
}



void ov115_0225F158(void) {
    // str r0, [sp]
    NewMsgDataFromNarc(1, 0x1b, 0xbd, r1);
    MessageFormat_New(r5);
    String_New(0x80, r5);
    String_New(0x80, r5);
    ReadMsgDataIntoString(r6, 0, r0);
    // ldr r2, [sp]
    BufferTrainerName(r4, 0);
    StringExpandPlaceholders(r4, r7, r5);
    DestroyMsgData(r6);
    MessageFormat_Delete(r4);
    String_Delete(r5);
}



void ov115_0225F1BC(void) {
    // str r0, [sp]
    NewMsgDataFromNarc(1, 0x1b, 0xbd, r1);
    MessageFormat_New(r5);
    String_New(0x80, r5);
    String_New(0x80, r5);
    ReadMsgDataIntoString(r6, 0, r0);
    // ldr r2, [sp]
    BufferRivalsName(r4, 0);
    StringExpandPlaceholders(r4, r7, r5);
    DestroyMsgData(r6);
    MessageFormat_Delete(r4);
    String_Delete(r5);
}



void ov115_0225F220(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r0, #0
    // add r7, r1, #0
    // ldr r1, [r5]
    // add r6, r2, #0
    // ldr r4, [r5, #0xc]
    // cmp r1, #0xf
    // bls _0225F234
    // b _0225F6BC
    // add r2, r1, r1
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _0225F240: ; jump table
    // mov r1, #0xa6
    // add r0, r7, #0
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // mov r2, #0xa6
    // str r0, [r5, #0xc]
    // mov r1, #0
    // lsl r2, r2, #2
    // bl memset
    // ldr r4, [r5, #0xc]
    // mov r0, #0x20
    // str r0, [sp]
    // str r7, [sp, #4]
    // ldr r0, [r5, #0x20]
    // mov r1, #0x10
    // mov r2, #0
    // mov r3, #0x40
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0xa
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // mov r2, #2
    // str r2, [sp, #8]
    // mov r1, #0x9f
    // lsl r1, r1, #2
    // str r2, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x10]
    // add r1, r4, r1
    // ldr r0, [r0, #8]
    // mov r3, #0
    // bl AddWindowParameterized
    // mov r0, #0x9f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldrh r0, [r6, #8]
    // cmp r0, #0x17
    // bne _0225F2D4
    // ldr r0, [r5, #0x10]
    // add r1, r7, #0
    // ldr r0, [r0, #0xc]
    // bl ov115_0225F1BC
    // str r0, [sp, #0x14]
    // b _0225F2DE
    // ldr r0, [r6, #4]
    // add r1, r7, #0
    // bl ov115_0225F158
    // str r0, [sp, #0x14]
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, _0225F62C ; =0x00010200
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x9f
    // lsl r0, r0, #2
    // ldr r2, [sp, #0x14]
    // add r0, r4, r0
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add r0, r4, #0
    // add r0, #0x44
    // mov r1, #8
    // mov r2, #3
    // bl ov01_021F05C4
    // mov r0, #1
    // str r0, [sp]
    // ldrb r0, [r6, #0xd]
    // mov r2, #6
    // add r1, r4, #0
    // str r0, [sp, #4]
    // ldrb r0, [r6, #0xe]
    // lsl r2, r2, #6
    // add r1, #0x44
    // str r0, [sp, #8]
    // ldrb r0, [r6, #0xf]
    // add r2, r4, r2
    // str r0, [sp, #0xc]
    // ldr r0, _0225F630 ; =0x000927C0
    // str r0, [sp, #0x10]
    // ldrb r3, [r6, #0xc]
    // ldr r0, [r5, #0x20]
    // bl ov01_021F0614
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x3c
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0x3e
    // str r0, [sp, #0xc]
    // ldr r0, _0225F634 ; =0x000927C1
    // mov r2, #0x6d
    // str r0, [sp, #0x10]
    // add r1, r4, #0
    // lsl r2, r2, #2
    // ldr r0, [r5, #0x20]
    // add r1, #0x44
    // add r2, r4, r2
    // mov r3, #0x3b
    // bl ov01_021F0614
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #6
    // str r0, [sp, #4]
    // add r0, r4, #0
    // lsl r1, r1, #6
    // mov r2, #0x11
    // mov r3, #0x42
    // add r0, #0x44
    // add r1, r4, r1
    // lsl r2, r2, #0x10
    // lsl r3, r3, #0xc
    // bl ov01_021F0718
    // mov r1, #0x7a
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x4a
    // mov r2, #0x7b
    // lsl r0, r0, #0xc
    // str r0, [sp]
    // lsl r2, r2, #2
    // add r0, r4, r2
    // add r1, r4, #0
    // sub r2, #0x38
    // mov r3, #0x12
    // add r1, #0x44
    // add r2, r4, r2
    // lsl r3, r3, #0xe
    // str r7, [sp, #4]
    // bl ov115_0225F020
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldrb r2, [r6, #0xc]
    // ldr r0, [r4, r0]
    // add r1, r7, #0
    // mov r3, #0xe
    // bl ov115_02260254
    // bl ov01_021F0B44
    // str r0, [r4, #0x40]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225F6BC
    // mov r0, #1
    // mov r1, #0x10
    // str r0, [sp]
    // add r2, r1, #0
    // add r3, r5, #4
    // bl ov01_021EFCF8
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225F6BC
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _0225F458
    // add r0, r1, #1
    // str r0, [r5]
    // b _0225F6BC
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x10]
    // ldr r0, [r0, #8]
    // str r0, [sp, #8]
    // mov r0, #3
    // str r0, [sp, #0xc]
    // ldrb r1, [r6, #0x12]
    // ldrb r2, [r6, #0x11]
    // ldrb r3, [r6, #0x10]
    // ldr r0, [r5, #0x20]
    // bl ov01_021F0454
    // mov r0, #0xa3
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0x1f
    // str r0, [sp, #4]
    // mov r0, #0x17
    // str r0, [sp, #8]
    // ldr r1, [r4, #0x40]
    // add r0, r5, #0
    // mov r2, #6
    // mov r3, #8
    // bl ov01_021F0B78
    // mov r0, #2
    // mov r1, #0
    // bl SetBgPriority
    // mov r0, #3
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #0
    // mov r1, #2
    // bl SetBgPriority
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225F6BC
    // bl ov01_021EFE30
    // cmp r0, #0
    // bne _0225F45A
    // b _0225F6BC
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // ldr r0, [r4, #0x40]
    // bl ov01_021F0B5C
    // mov r0, #0xa5
    // mov r1, #0xa
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // b _0225F6BC
    // mov r0, #0xa5
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bge _0225F55E
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov115_0225F0B4
    // cmp r0, #1
    // bne _0225F55E
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225F6BC
    // mov r0, #4
    // str r0, [sp]
    // mov r1, #0x11
    // ldr r2, [r6]
    // ldr r3, _0225F638 ; =0xFFFC0000
    // add r0, r4, #0
    // lsl r1, r1, #0x10
    // bl ov01_021EFEC8
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetPriority
    // mov r2, #0x42
    // ldr r1, [r4]
    // add r0, sp, #0x1c
    // lsl r2, r2, #0xc
    // mov r3, #0
    // bl ov01_021F074C
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0x1c
    // bl Sprite_SetMatrix
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225F6BC
    // add r0, r4, #0
    // bl ov01_021EFF28
    // mov r2, #0x42
    // add r6, r0, #0
    // ldr r1, [r4]
    // add r0, sp, #0x1c
    // lsl r2, r2, #0xc
    // mov r3, #0
    // bl ov01_021F074C
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0x1c
    // bl Sprite_SetMatrix
    // cmp r6, #1
    // bne _0225F55E
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225F6BC
    // add r0, r4, #0
    // add r0, #0x18
    // mov r1, #0
    // mov r2, #0x10
    // mov r3, #3
    // bl ov01_021EFE34
    // mov r0, #0xa5
    // mov r1, #0xa
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225F6BC
    // mov r0, #0xa5
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bge _0225F55E
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov01_021EFE44
    // str r0, [sp, #0x18]
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov01_021F0DC8
    // ldr r0, [sp, #0x18]
    // cmp r0, #1
    // beq _0225F560
    // b _0225F6BC
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldrb r2, [r6, #0xc]
    // ldr r0, [r4, r0]
    // add r1, r7, #0
    // bl ov115_02260254
    // mov r0, #0xd
    // mvn r0, r0
    // mov r1, #0x21
    // mov r2, #1
    // bl SetBlendBrightness
    // ldr r3, [r4]
    // ldr r0, [r5, #0x10]
    // asr r3, r3, #0xc
    // sub r3, #0x5c
    // ldr r0, [r0, #8]
    // mov r1, #2
    // mov r2, #0
    // neg r3, r3
    // bl ScheduleSetBgPosText
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225F6BC
    // add r0, r4, #0
    // add r0, #0x18
    // mov r1, #0x10
    // mov r2, #0
    // mov r3, #3
    // bl ov01_021EFE34
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225F6BC
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov01_021EFE44
    // add r6, r0, #0
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov01_021F0DC8
    // cmp r6, #1
    // bne _0225F6BC
    // ldr r0, [r5]
    // mov r1, #0x1a
    // add r0, r0, #1
    // str r0, [r5]
    // mov r0, #0xa5
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // b _0225F6BC
    // mov r0, #0xa5
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bge _0225F6BC
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225F6BC
    // mov r0, #0xf
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #4
    // mov r1, #0
    // str r0, [sp, #8]
    // ldr r3, _0225F63C ; =0x00007FFF
    // mov r0, #3
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225F6BC
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0225F6BC
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0225F6BC
    // ldr r1, _0225F63C ; =0x00007FFF
    // b _0225F640
    // nop
    // _0225F62C: .word 0x00010200
    // _0225F630: .word 0x000927C0
    // _0225F634: .word 0x000927C1
    // _0225F638: .word 0xFFFC0000
    // _0225F63C: .word 0x00007FFF
    // mov r0, #1
    // bl sub_0200FBF4
    // ldr r1, [r5, #0x14]
    // cmp r1, #0
    // beq _0225F650
    // mov r0, #1
    // str r0, [r1]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Sprite_Delete
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov115_0225F09C
    // mov r1, #6
    // add r0, r4, #0
    // lsl r1, r1, #6
    // add r0, #0x44
    // add r1, r4, r1
    // bl ov01_021F06EC
    // mov r1, #0x6d
    // add r0, r4, #0
    // lsl r1, r1, #2
    // add r0, #0x44
    // add r1, r4, r1
    // bl ov01_021F06EC
    // add r0, r4, #0
    // add r0, #0x44
    // bl ov01_021F05F4
    // mov r0, #0x9f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl RemoveWindow
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _0225F700 ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // mov r0, #0
    // add r1, r0, #0
    // mov r2, #1
    // bl SetBlendBrightness
    // ldr r0, [r5, #0x10]
    // mov r2, #0
    // ldr r0, [r0, #8]
    // mov r1, #2
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // add sp, #0x28
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r3, #0xa3
    // lsl r3, r3, #2
    // ldr r0, [r4, r3]
    // cmp r0, #1
    // bne _0225F6EC
    // ldr r0, [r5, #0x10]
    // add r3, r3, #4
    // ldr r0, [r0, #8]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // mov r2, #0
    // bl ScheduleSetBgPosText
    // mov r3, #0x29
    // lsl r3, r3, #4
    // ldr r0, [r4, r3]
    // add r0, #0x1e
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x17
    // sub r1, r1, r2
    // mov r0, #0x17
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [r4, r3]
    // ldr r0, [r5]
    // cmp r0, #0xf
    // beq _0225F6F8
    // ldr r0, [r4, #0x44]
    // bl SpriteList_RenderAndAnimateSprites
    // mov r0, #0
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225F700: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov115_0225F704(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F724 ; =ov115_022603B0
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F720
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F724: .word ov115_022603B0
    // TODO: decompile
}



void ov115_0225F728(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F748 ; =ov115_022603C4
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F744
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F748: .word ov115_022603C4
    // TODO: decompile
}



void ov115_0225F74C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F76C ; =ov115_022603D8
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F768
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F76C: .word ov115_022603D8
    // TODO: decompile
}



void ov115_0225F770(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F790 ; =ov115_022603EC
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F78C
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F790: .word ov115_022603EC
    // TODO: decompile
}



void ov115_0225F794(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F7B4 ; =ov115_02260400
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F7B0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F7B4: .word ov115_02260400
    // TODO: decompile
}



void ov115_0225F7B8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F7D8 ; =ov115_02260414
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F7D4
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F7D8: .word ov115_02260414
    // TODO: decompile
}



void ov115_0225F7DC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F7FC ; =ov115_02260428
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F7F8
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F7FC: .word ov115_02260428
    // TODO: decompile
}



void ov115_0225F800(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F820 ; =ov115_0226043C
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F81C
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F820: .word ov115_0226043C
    // TODO: decompile
}



void ov115_0225F824(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F844 ; =ov115_02260450
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F840
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F844: .word ov115_02260450
    // TODO: decompile
}



void ov115_0225F848(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F868 ; =ov115_02260464
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F864
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F868: .word ov115_02260464
    // TODO: decompile
}



void ov115_0225F86C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F88C ; =ov115_02260478
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F888
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F88C: .word ov115_02260478
    // TODO: decompile
}



void ov115_0225F890(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F8B0 ; =ov115_0226048C
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F8AC
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F8B0: .word ov115_0226048C
    // TODO: decompile
}



void ov115_0225F8B4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F8D4 ; =ov115_022604A0
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F8D0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F8D4: .word ov115_022604A0
    // TODO: decompile
}



void ov115_0225F8D8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F8F8 ; =ov115_022604B4
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F8F4
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F8F8: .word ov115_022604B4
    // TODO: decompile
}



void ov115_0225F8FC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F91C ; =ov115_022604C8
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F918
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F91C: .word ov115_022604C8
    // TODO: decompile
}



void ov115_0225F920(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F940 ; =ov115_022604DC
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F93C
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F940: .word ov115_022604DC
    // TODO: decompile
}



void ov115_0225F944(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0225F964 ; =_02260374
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F220
    // cmp r0, #1
    // bne _0225F960
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0225F964: .word _02260374
    // TODO: decompile
}



void ov115_0225F968(void) {
}



void ov115_0225F978(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x44
    // add r6, r0, #0
    // ldr r0, [r6]
    // str r1, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r4, [r6, #0xc]
    // cmp r0, #0xe
    // bls _0225F98E
    // bl _0226021C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225F99A: ; jump table
    // add r0, r1, #0
    // mov r1, #0xc5
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // mov r2, #0xc5
    // str r0, [r6, #0xc]
    // mov r1, #0
    // lsl r2, r2, #2
    // bl memset
    // ldr r4, [r6, #0xc]
    // mov r1, #0xa
    // add r0, r4, #0
    // add r0, #0x5c
    // mov r2, #4
    // bl ov01_021F05C4
    // ldr r0, [r6, #0x10]
    // bl ov115_0225F968
    // cmp r0, #0
    // bne _0225FA16
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0xd0
    // str r0, [sp, #4]
    // mov r0, #0xd1
    // str r0, [sp, #8]
    // mov r2, #0xd2
    // str r2, [sp, #0xc]
    // ldr r0, _0225FD58 ; =0x000927C0
    // add r1, r4, #0
    // str r0, [sp, #0x10]
    // add r2, #0xc6
    // ldr r0, [r6, #0x20]
    // add r1, #0x5c
    // add r2, r4, r2
    // mov r3, #0xcf
    // bl ov01_021F0614
    // mov r0, #0xc1
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r1, #0xcf
    // b _0225FA44
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0xd4
    // str r0, [sp, #4]
    // mov r0, #0xd5
    // str r0, [sp, #8]
    // mov r2, #0xd6
    // str r2, [sp, #0xc]
    // ldr r0, _0225FD58 ; =0x000927C0
    // add r1, r4, #0
    // str r0, [sp, #0x10]
    // add r2, #0xc2
    // ldr r0, [r6, #0x20]
    // add r1, #0x5c
    // add r2, r4, r2
    // mov r3, #0xd3
    // bl ov01_021F0614
    // mov r0, #0xc1
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r1, #0xd3
    // add r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, [sp, #0x18]
    // mov r2, #0x73
    // ldrh r3, [r0]
    // mov r0, #1
    // add r1, r4, #0
    // str r0, [sp]
    // add r0, r3, #1
    // str r0, [sp, #4]
    // add r0, r3, #2
    // str r0, [sp, #8]
    // add r0, r3, #3
    // str r0, [sp, #0xc]
    // ldr r0, _0225FD5C ; =0x000927C1
    // lsl r2, r2, #2
    // str r0, [sp, #0x10]
    // ldr r0, [r6, #0x20]
    // add r1, #0x5c
    // add r2, r4, r2
    // bl ov01_021F0614
    // mov r0, #0xc
    // str r0, [sp]
    // mov r0, #0x30
    // str r0, [sp, #4]
    // mov r0, #0x31
    // str r0, [sp, #8]
    // mov r0, #0x32
    // str r0, [sp, #0xc]
    // ldr r0, _0225FD60 ; =0x000927C2
    // mov r2, #2
    // str r0, [sp, #0x10]
    // ldr r3, [sp, #0x18]
    // add r1, r4, #0
    // lsl r2, r2, #8
    // ldrb r3, [r3, #2]
    // ldr r0, [r6, #0x20]
    // add r1, #0x5c
    // add r2, r4, r2
    // bl ov01_021F0614
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x3c
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0x3e
    // str r0, [sp, #0xc]
    // ldr r0, _0225FD64 ; =0x000927C3
    // mov r2, #0x8d
    // str r0, [sp, #0x10]
    // add r1, r4, #0
    // lsl r2, r2, #2
    // ldr r0, [r6, #0x20]
    // add r1, #0x5c
    // add r2, r4, r2
    // mov r3, #0x3b
    // bl ov01_021F0614
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _0226021C
    // mov r1, #2
    // lsl r1, r1, #0xc
    // add r0, sp, #0x2c
    // add r2, r1, #0
    // mov r3, #0
    // bl ov01_021F074C
    // mov r0, #0x66
    // lsl r0, r0, #2
    // add r0, r4, r0
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x24]
    // add r0, r4, #0
    // str r0, [sp, #0x28]
    // add r0, #0x5c
    // mov r7, #0
    // add r5, r4, #0
    // str r0, [sp, #0x28]
    // cmp r7, #3
    // bge _0225FAF6
    // mov r0, #0
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // b _0225FB06
    // sub r1, r7, #1
    // mov r0, #0x34
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, [sp, #0x24]
    // add r1, r0, r2
    // mov r0, #1
    // str r0, [sp, #0x20]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r2, #0
    // ldr r0, [sp, #0x28]
    // add r3, r2, #0
    // bl ov01_021F0718
    // mov r1, #0x9a
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r1, #0
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x9a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x20]
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x9a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetPriority
    // ldr r0, [sp, #0x1c]
    // add r7, r7, #1
    // add r0, #0x34
    // add r5, r5, #4
    // str r0, [sp, #0x1c]
    // cmp r7, #4
    // blt _0225FAEA
    // mov r2, #0x9a
    // mov r0, #0
    // lsl r2, r2, #2
    // str r0, [sp]
    // ldr r0, [r4, r2]
    // add r2, #0xa0
    // ldr r1, [sp, #0x14]
    // ldr r2, [r4, r2]
    // mov r3, #0xe
    // bl ov115_02260254
    // mov r0, #0
    // str r0, [sp]
    // ldr r2, [sp, #0x18]
    // mov r0, #0x9b
    // lsl r0, r0, #2
    // ldrh r2, [r2]
    // ldr r0, [r4, r0]
    // ldr r1, [sp, #0x14]
    // mov r3, #0xe
    // bl ov115_02260254
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #6
    // lsl r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // mov r2, #0x29
    // add r1, r4, #0
    // mov r3, #2
    // lsl r2, r2, #4
    // str r0, [sp, #4]
    // add r0, r4, r2
    // sub r2, #0x5c
    // add r1, #0x5c
    // add r2, r4, r2
    // lsl r3, r3, #0x12
    // bl ov115_0225F020
    // ldr r0, [r6, #0x10]
    // bl ov01_021F0DDC
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _0226021C
    // mov r1, #0x10
    // mov r0, #1
    // add r2, r1, #0
    // add r3, r6, #4
    // str r0, [sp]
    // bl ov01_021EFCF8
    // mov r0, #0
    // str r0, [r6, #8]
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _0226021C
    // ldr r0, [r6, #8]
    // add r0, r0, #1
    // str r0, [r6, #8]
    // cmp r0, #8
    // bne _0225FBD6
    // bl ov01_021F0E74
    // ldr r0, [r6, #4]
    // cmp r0, #0
    // beq _0225FBEC
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _0226021C
    // bl ov01_021F0E90
    // cmp r0, #1
    // beq _0225FBEE
    // b _0226021C
    // ldr r0, [r6, #0x20]
    // mov r1, #0x97
    // bl ov01_021F0F08
    // mov r0, #8
    // str r0, [sp]
    // ldr r0, _0225FD68 ; =0x04000050
    // mov r1, #1
    // mov r2, #0x1e
    // mov r3, #0
    // bl G2x_SetBlendAlpha_
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _0226021C
    // mov r0, #6
    // mov r2, #0xe
    // mov r3, #5
    // str r0, [sp]
    // ldr r1, _0225FD6C ; =0xFFF80000
    // add r0, r4, #0
    // lsl r2, r2, #0xe
    // lsl r3, r3, #0x10
    // bl ov01_021EFEC8
    // mov r2, #0x17
    // ldr r1, [r4]
    // add r0, sp, #0x38
    // lsl r2, r2, #0xe
    // mov r3, #0
    // bl ov01_021F074C
    // mov r0, #0x9a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // mov r0, #1
    // ldr r1, [sp, #0x3c]
    // lsl r0, r0, #0xe
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // mov r0, #0x9a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r1, #6
    // add r0, r4, #0
    // mov r2, #0x32
    // str r1, [sp]
    // ldr r3, _0225FD70 ; =0xFFFB0000
    // add r0, #0x30
    // lsl r1, r1, #0x12
    // lsl r2, r2, #0xe
    // bl ov01_021EFEC8
    // mov r2, #0x17
    // ldr r1, [r4, #0x30]
    // add r0, sp, #0x38
    // lsl r2, r2, #0xe
    // mov r3, #0
    // bl ov01_021F074C
    // mov r0, #0x9b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // mov r0, #1
    // ldr r1, [sp, #0x3c]
    // lsl r0, r0, #0xe
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // lsl r0, r0, #2
    // sub r0, r1, r0
    // str r0, [sp, #0x38]
    // mov r0, #0x9d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // mov r0, #0x9b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0x9d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0x20
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // mov r1, #0x10
    // str r0, [sp, #4]
    // ldr r0, [r6, #0x20]
    // mov r2, #0
    // mov r3, #0x40
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0xd
    // str r0, [sp]
    // mov r0, #0xb
    // str r0, [sp, #4]
    // mov r2, #2
    // str r2, [sp, #8]
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r2, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r6, #0x10]
    // add r1, r4, r1
    // ldr r0, [r0, #8]
    // mov r3, #0x15
    // bl AddWindowParameterized
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // ldrh r0, [r0, #6]
    // bl ov115_0225F158
    // mov r1, #0
    // add r5, r0, #0
    // str r1, [sp]
    // ldr r0, _0225FD74 ; =0x00010200
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // add r0, r4, r0
    // add r2, r5, #0
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // mov r0, #3
    // str r0, [r6, #4]
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _0226021C
    // _0225FD58: .word 0x000927C0
    // _0225FD5C: .word 0x000927C1
    // _0225FD60: .word 0x000927C2
    // _0225FD64: .word 0x000927C3
    // _0225FD68: .word 0x04000050
    // _0225FD6C: .word 0xFFF80000
    // _0225FD70: .word 0xFFFB0000
    // _0225FD74: .word 0x00010200
    // ldr r0, [r6, #4]
    // cmp r0, #0
    // ble _0225FD9C
    // sub r0, r0, #1
    // str r0, [r6, #4]
    // bne _0225FDA6
    // mov r0, #3
    // bl ov01_021F0FB8
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // b _0225FDA6
    // mov r0, #0x29
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ov115_0225F0B4
    // add r0, r4, #0
    // bl ov01_021EFF28
    // mov r2, #0x17
    // ldr r1, [r4]
    // add r0, sp, #0x38
    // lsl r2, r2, #0xe
    // mov r3, #0
    // bl ov01_021F074C
    // add r5, sp, #0x38
    // mov r2, #0x9e
    // lsl r2, r2, #2
    // add r3, r4, r2
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // sub r2, #0x10
    // str r0, [r3]
    // ldr r0, [r4, r2]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // mov r0, #1
    // ldr r1, [sp, #0x3c]
    // lsl r0, r0, #0xe
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // add r0, r4, #0
    // add r0, #0x30
    // bl ov01_021EFF28
    // mov r2, #0x17
    // add r7, r0, #0
    // ldr r1, [r4, #0x30]
    // add r0, sp, #0x38
    // lsl r2, r2, #0xe
    // mov r3, #0
    // bl ov01_021F074C
    // add r5, sp, #0x38
    // mov r2, #0xa1
    // lsl r2, r2, #2
    // add r3, r4, r2
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // sub r2, #0x18
    // str r0, [r3]
    // ldr r0, [r4, r2]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // mov r0, #1
    // ldr r1, [sp, #0x3c]
    // lsl r0, r0, #0xe
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // lsl r0, r0, #2
    // sub r0, r1, r0
    // str r0, [sp, #0x38]
    // mov r0, #0x9d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // cmp r7, #1
    // bne _0225FF3C
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _0226021C
    // mov r0, #0x29
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ov115_0225F0B4
    // add r5, r0, #0
    // bl ov01_021F1044
    // cmp r5, #0
    // beq _0225FF3C
    // cmp r0, #0
    // beq _0225FF3C
    // add r0, r4, #0
    // add r0, #0x48
    // mov r1, #0
    // mov r2, #0x10
    // mov r3, #3
    // bl ov01_021EFE34
    // bl ov01_021F1060
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _0226021C
    // add r0, r4, #0
    // add r0, #0x48
    // bl ov01_021EFE44
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0x48
    // bl ov01_021F0DC8
    // cmp r5, #1
    // bne _0225FF3C
    // mov r3, #0
    // mov r2, #0x9a
    // str r3, [sp]
    // lsl r2, r2, #2
    // ldr r0, [r4, r2]
    // add r2, #0xa0
    // ldr r1, [sp, #0x14]
    // ldr r2, [r4, r2]
    // bl ov115_02260254
    // mov r3, #0
    // mov r0, #0x9b
    // ldr r2, [sp, #0x18]
    // str r3, [sp]
    // lsl r0, r0, #2
    // ldrh r2, [r2]
    // ldr r0, [r4, r0]
    // ldr r1, [sp, #0x14]
    // bl ov115_02260254
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #0x27
    // lsl r0, r0, #4
    // mov r1, #2
    // ldr r0, [r4, r0]
    // lsl r1, r1, #0xc
    // bl Sprite_SetAnimSpeed
    // mov r0, #0x9d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #0x9d
    // lsl r0, r0, #2
    // mov r1, #2
    // ldr r0, [r4, r0]
    // lsl r1, r1, #0xc
    // bl Sprite_SetAnimSpeed
    // ldr r0, [r6, #0x20]
    // mov r1, #0x98
    // bl ov01_021F0F08
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _0226021C
    // add r0, r4, #0
    // add r0, #0x48
    // mov r1, #0x10
    // mov r2, #0
    // mov r3, #6
    // bl ov01_021EFE34
    // mov r0, #4
    // bl ov01_021F0FB8
    // mov r0, #0
    // mov r1, #1
    // bl SetBgPriority
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _0226021C
    // add r0, r4, #0
    // add r0, #0x48
    // bl ov01_021EFE44
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0x48
    // bl ov01_021F0DC8
    // cmp r5, #1
    // beq _0225FF3E
    // b _0226021C
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // mov r0, #8
    // str r0, [r6, #4]
    // b _0226021C
    // ldr r0, [r6, #4]
    // cmp r0, #0
    // ble _0225FF56
    // sub r0, r0, #1
    // str r0, [r6, #4]
    // b _0226021C
    // add r0, r2, #0
    // ldrb r0, [r0, #3]
    // mov r1, #0
    // ldr r2, _02260248 ; =0xFFFFE000
    // str r0, [sp]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl ov01_021EFEC8
    // ldr r0, [sp, #0x18]
    // mov r1, #0
    // ldrb r0, [r0, #3]
    // ldr r2, _02260248 ; =0xFFFFE000
    // add r3, r1, #0
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov01_021EFEC8
    // mov r0, #0
    // str r0, [r6, #4]
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _0226021C
    // ldr r0, [r6, #4]
    // add r0, r0, #1
    // str r0, [r6, #4]
    // add r0, r4, #0
    // bl ov01_021EFF28
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov01_021EFF28
    // ldr r1, [r6, #4]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // add r0, sp, #0x38
    // bne _0225FFD0
    // mov r2, #0x9e
    // lsl r2, r2, #2
    // ldr r3, [r4, r2]
    // ldr r1, [r4]
    // add r2, r2, #4
    // add r1, r3, r1
    // ldr r3, [r4, r2]
    // ldr r2, [r4, #0x18]
    // add r2, r3, r2
    // mov r3, #0
    // bl ov01_021F074C
    // b _0225FFE8
    // mov r2, #0x9e
    // lsl r2, r2, #2
    // ldr r3, [r4, r2]
    // ldr r1, [r4]
    // add r2, r2, #4
    // sub r1, r3, r1
    // ldr r3, [r4, r2]
    // ldr r2, [r4, #0x18]
    // sub r2, r3, r2
    // mov r3, #0
    // bl ov01_021F074C
    // cmp r5, #0
    // beq _0225FFFC
    // mov r0, #0x9e
    // lsl r0, r0, #2
    // add r3, sp, #0x38
    // add r2, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // mov r0, #0x9a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // mov r0, #1
    // ldr r1, [sp, #0x3c]
    // lsl r0, r0, #0xe
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // ldr r1, [r6, #4]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // add r0, sp, #0x38
    // bne _02260058
    // mov r2, #0xa1
    // lsl r2, r2, #2
    // ldr r3, [r4, r2]
    // ldr r1, [r4]
    // add r2, r2, #4
    // sub r1, r3, r1
    // ldr r3, [r4, r2]
    // ldr r2, [r4, #0x18]
    // sub r2, r3, r2
    // mov r3, #0
    // bl ov01_021F074C
    // b _02260070
    // mov r2, #0xa1
    // lsl r2, r2, #2
    // ldr r3, [r4, r2]
    // ldr r1, [r4]
    // add r2, r2, #4
    // add r1, r3, r1
    // ldr r3, [r4, r2]
    // ldr r2, [r4, #0x18]
    // add r2, r3, r2
    // mov r3, #0
    // bl ov01_021F074C
    // cmp r5, #0
    // beq _02260084
    // mov r0, #0xa1
    // lsl r0, r0, #2
    // add r3, sp, #0x38
    // add r2, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // mov r0, #0x9b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // mov r0, #1
    // ldr r1, [sp, #0x3c]
    // lsl r0, r0, #0xe
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // lsl r0, r0, #2
    // sub r0, r1, r0
    // str r0, [sp, #0x38]
    // mov r0, #0x9d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // cmp r5, #0
    // bne _022600B4
    // b _0226021C
    // ldr r0, [r6]
    // mov r1, #0
    // add r0, r0, #1
    // str r0, [r6]
    // mov r0, #4
    // bl GfGfx_EngineATogglePlanes
    // mov r2, #3
    // mov r0, #0x10
    // lsl r2, r2, #0x12
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0
    // lsr r3, r2, #3
    // bl ov01_021EFEC8
    // mov r0, #0x10
    // mov r2, #3
    // str r0, [sp]
    // add r0, r4, #0
    // lsl r2, r2, #0x12
    // add r0, #0x18
    // mov r1, #0
    // lsr r3, r2, #3
    // bl ov01_021EFEC8
    // mov r0, #8
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #4
    // mov r1, #0
    // str r0, [sp, #8]
    // ldr r3, _0226024C ; =0x00007FFF
    // mov r0, #3
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // b _0226021C
    // add r0, r4, #0
    // bl ov01_021EFF28
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov01_021EFF28
    // mov r2, #0x9e
    // lsl r2, r2, #2
    // ldr r3, [r4, r2]
    // ldr r1, [r4]
    // add r2, r2, #4
    // sub r1, r3, r1
    // ldr r3, [r4, r2]
    // ldr r2, [r4, #0x18]
    // add r0, sp, #0x38
    // sub r2, r3, r2
    // mov r3, #0
    // bl ov01_021F074C
    // mov r0, #0x9a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // mov r0, #1
    // ldr r1, [sp, #0x3c]
    // lsl r0, r0, #0xe
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // mov r2, #0xa1
    // lsl r2, r2, #2
    // ldr r3, [r4, r2]
    // ldr r1, [r4]
    // add r2, r2, #4
    // add r1, r3, r1
    // ldr r3, [r4, r2]
    // ldr r2, [r4, #0x18]
    // add r0, sp, #0x38
    // add r2, r3, r2
    // mov r3, #0
    // bl ov01_021F074C
    // mov r0, #0x9b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // mov r0, #1
    // ldr r1, [sp, #0x3c]
    // lsl r0, r0, #0xe
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // lsl r0, r0, #2
    // sub r0, r1, r0
    // str r0, [sp, #0x38]
    // mov r0, #0x9d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0x38
    // bl Sprite_SetMatrix
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0226021C
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _0226021C
    // ldr r1, _0226024C ; =0x00007FFF
    // mov r0, #1
    // bl sub_0200FBF4
    // ldr r1, [r6, #0x14]
    // cmp r1, #0
    // beq _022601BA
    // mov r0, #1
    // str r0, [r1]
    // mov r0, #0x29
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ov115_0225F09C
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl RemoveWindow
    // mov r7, #0x9a
    // mov r6, #0
    // add r5, r4, #0
    // lsl r7, r7, #2
    // ldr r0, [r5, r7]
    // bl Sprite_Delete
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #4
    // blt _022601D6
    // mov r0, #0x66
    // lsl r0, r0, #2
    // add r7, r4, #0
    // mov r6, #0
    // add r5, r4, r0
    // add r7, #0x5c
    // add r0, r7, #0
    // add r1, r5, #0
    // bl ov01_021F06EC
    // add r6, r6, #1
    // add r5, #0x34
    // cmp r6, #4
    // blt _022601F0
    // add r4, #0x5c
    // add r0, r4, #0
    // bl ov01_021F05F4
    // bl ov01_021F1060
    // bl ov01_021F0EC0
    // ldr r0, _02260250 ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // add sp, #0x44
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r6]
    // cmp r0, #0xe
    // beq _02260242
    // ldr r0, [r4, #0x5c]
    // bl SpriteList_RenderAndAnimateSprites
    // ldr r0, [r6]
    // cmp r0, #4
    // ble _02260242
    // bl Thunk_G3X_Reset
    // bl ov01_021F1008
    // bl ov01_021F0EAC
    // mov r0, #0
    // add r1, r0, #0
    // bl RequestSwap3DBuffers
    // mov r0, #0
    // add sp, #0x44
    // pop {r4, r5, r6, r7, pc}
    // _02260248: .word 0xFFFFE000
    // _0226024C: .word 0x00007FFF
    // _02260250: .word 0x04000050
    // TODO: decompile
}



void ov115_02260254(void) {
    // str r3, [sp, #4]
    Heap_Alloc(r1, 0x20);
    // add r2, sp, #8
    GfGfxLoader_GetPlttData(0x6d, r6, r5);
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #4]
    BlendPalette(*((u32*)(*((u16*)(r0 + 0x10)) + 0xc)), r4, 0x10);
    Sprite_GetPaletteProxy(r7);
    DC_FlushRange(r4, 0x20);
    NNS_G2dGetImagePaletteLocation(r6, 1);
    GX_LoadOBJPltt(r4, r0, 0x20);
    Heap_Free(r4);
    Heap_Free(r5);
}



void ov115_022602C0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _022602E0 ; =ov115_02260388
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F978
    // cmp r0, #1
    // bne _022602DC
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _022602E0: .word ov115_02260388
    // TODO: decompile
}



void ov115_022602E4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _02260304 ; =ov115_02260390
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F978
    // cmp r0, #1
    // bne _02260300
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _02260304: .word ov115_02260390
    // TODO: decompile
}



void ov115_02260308(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _02260328 ; =ov115_02260398
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F978
    // cmp r0, #1
    // bne _02260324
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _02260328: .word ov115_02260398
    // TODO: decompile
}



void ov115_0226032C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _0226034C ; =ov115_022603A0
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F978
    // cmp r0, #1
    // bne _02260348
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _0226034C: .word ov115_022603A0
    // TODO: decompile
}



void ov115_02260350(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r2, _02260370 ; =ov115_022603A8
    // add r0, r4, #0
    // mov r1, #4
    // bl ov115_0225F978
    // cmp r0, #1
    // bne _0226036C
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021EFCDC
    // pop {r3, r4, r5, pc}
    // nop
    // _02260370: .word ov115_022603A8
    // TODO: decompile
}


