/* Decompiled from asm/overlay_109.s */
#include "global.h"

BOOL PhotoAlbum_Init(void) {
    ov109_021E5A20(*((u32*)r1));
    Heap_Create(3, 0x60, (2 << 0x10));
    OverlayManager_CreateAndGetData(r6, (0x7d << 2), 0x60);
    MI_CpuFill8(0, (0x7d << 2));
    // str r0, [r4]
    OverlayManager_GetArgs(r6);
    *((u32*)(r4 + 0x10)) = r0;
    ov109_021E5A70(r4);
    // str r0, [r5]
    OverlayManager_GetData((*((u32*)r5) + 1));
    ov109_021E5B60();
}




BOOL PhotoAlbum_Main(void) {
    OverlayManager_GetData();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E5984: ; jump table
    ov109_021E5BAC((*((u16*)(*((u32*)r4) + 6)) << 0x10));
    // str r0, [r4]
    ov109_021E5C40();
    // str r0, [r4]
    ov109_021E5C48();
    // str r0, [r4]
    ov109_021E5C68();
    // str r0, [r4]
    ov109_021E5C88();
    // str r0, [r4]
    ov109_021E5C90();
    // str r0, [r4]
    ov109_021E5C98();
    // str r0, [r4]
    ov109_021E5CAC();
    // str r0, [r4]
    ov109_021E5BF4();
    // str r0, [r4]
    // add r5, #0x94
    SpriteSystem_DrawSprites(*((u32*)r5));
}




BOOL PhotoAlbum_Exit(void) {
    OverlayManager_GetData();
    ov109_021E5B98();
    ov109_021E5A20(0);
    ov109_021E5B40(r4);
    OverlayManager_FreeData(r5);
    Heap_Destroy(0x60);
}




void ov109_021E5A20(void) {
    // push {r3, lr}
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _021E5A68 ; =0xFFFFE0FF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _021E5A6C ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // mov r0, #0
    // add r1, r0, #0
    // bl sub_0200FBF4
    // mov r0, #1
    // mov r1, #0
    // bl sub_0200FBF4
    // mov r0, #0
    // bl sub_0200FBDC
    // mov r0, #1
    // bl sub_0200FBDC
    // pop {r3, pc}
    // _021E5A68: .word 0xFFFFE0FF
    // _021E5A6C: .word 0x04001000
    // TODO: decompile
}




void ov109_021E5A70(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x10]
    // ldr r0, [r0, #8]
    // bl MenuInputStateMgr_GetState
    // str r0, [r5, #0xc]
    // ldr r0, [r5, #0x10]
    // ldr r0, [r0, #0xc]
    // bl Save_PlayerData_GetOptionsAddr
    // add r4, r0, #0
    // bl Options_GetTextFrameDelay
    // add r1, r5, #0
    // add r1, #0x22
    // strb r0, [r1]
    // add r0, r4, #0
    // bl Options_GetFrame
    // add r1, r5, #0
    // add r1, #0x23
    // strb r0, [r1]
    // ldr r0, [r5, #0x10]
    // mov r1, #0xc
    // ldrb r6, [r0, #2]
    // add r0, r6, #0
    // bl _s32_div_f
    // ldr r0, _021E5B3C ; =ov109_021E7890
    // ldrb r4, [r0, r1]
    // add r0, r6, #0
    // mov r1, #0xc
    // bl _s32_div_f
    // strb r0, [r5, #0x19]
    // lsr r2, r4, #0x1f
    // lsl r1, r4, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // strb r0, [r5, #0x1b]
    // lsr r0, r4, #2
    // strb r0, [r5, #0x1c]
    // ldr r0, [r5, #0x10]
    // ldr r0, [r0, #0xc]
    // bl Save_PhotoAlbum_Get
    // mov r1, #0x7b
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // ldr r1, [r5]
    // bl PhotoAlbum_LoadAllInUsePhotos
    // add r1, r5, #0
    // add r1, #0xc8
    // str r0, [r1]
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl PhotoAlbum_GetNumSaved
    // add r1, r5, #0
    // add r1, #0xc4
    // strb r0, [r1]
    // add r0, r5, #0
    // add r0, #0xc4
    // ldrb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xc5
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xc5
    // ldrb r0, [r0]
    // mov r1, #0xc
    // bl _s32_div_f
    // strb r0, [r5, #0x1a]
    // add r0, r5, #0
    // add r0, #0xc5
    // ldrb r0, [r0]
    // mov r1, #0xc
    // bl _s32_div_f
    // cmp r1, #0
    // beq _021E5B26
    // ldrb r0, [r5, #0x1a]
    // add r0, r0, #1
    // strb r0, [r5, #0x1a]
    // add r0, r5, #0
    // add r0, #0xc5
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021E5B34
    // mov r0, #1
    // strb r0, [r5, #0x1a]
    // add r0, r5, #0
    // bl ov109_021E5D08
    // pop {r4, r5, r6, pc}
    // _021E5B3C: .word ov109_021E7890
    // TODO: decompile
}




void ov109_021E5B40(void) {
}




void ov109_021E5B60(void) {
    ov109_021E5CB4(*((u32*)(r0 + 4)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov109_021E5EC8((*((u32*)(r4 + 4)) + 1));
    sub_020210BC();
    sub_02021148(4);
    *((u32*)(r4 + 4)) = 0;
}




u32 ov109_021E5B98(void) {
}




void ov109_021E5BAC(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    IsPaletteFadeFinished((*((u32*)(r4 + 4)) + 1));
    *((u32*)(r4 + 4)) = 0;
}




void ov109_021E5BF4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    IsPaletteFadeFinished((*((u32*)(r4 + 4)) + 1));
    *((u32*)(r4 + 4)) = 0;
}




void ov109_021E5C40(void) {
}




void ov109_021E5C48(void) {
}




void ov109_021E5C68(void) {
}




void ov109_021E5C88(void) {
}




void ov109_021E5C90(void) {
}




void ov109_021E5C98(void) {
}




void ov109_021E5CAC(void) {
}




void ov109_021E5CB4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov109_021E694C
    // add r0, r4, #0
    // bl ov109_021E6B5C
    // add r0, r4, #0
    // bl ov109_021E6C9C
    // add r0, r4, #0
    // bl ov109_021E6D84
    // add r0, r4, #0
    // bl ov109_021E6E9C
    // ldr r0, _021E5CE0 ; =ov109_021E685C
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // pop {r4, pc}
    // nop
    // _021E5CE0: .word ov109_021E685C
    // TODO: decompile
}




void ov109_021E5CE4(void) {
}




void ov109_021E5D08(void) {
    // add r0, #0xc4
    // ldrb r1, [r0]
    // add r0, #0xc5
    // strb r1, [r0]
    // add r0, #0xcc
    MI_CpuFill8(r0, 0, (0x12 << 4));
    // add r0, #0xc5
    // ldrb r0, [r0]
    // add r0, #0xcc
    // add r1, r0, r3
    // strb r2, [r0, r3]
    // add r3, #0xc8
    // mul r3, r5
    // add r3, r6, r3
    *((u32*)(r1 + 4)) = 0;
    // add r1, #0xc5
    // ldrb r1, [r1]
}




void ov109_021E5D5C(void) {
    // add r0, #0xc5
    // ldrb r0, [r0]
    // add r1, r5, r1
    // add r1, #0xd0
    // ldr r0, [r5, r6]
    PhotoAlbum_SetPhotoAtIndex(*((u32*)(0 << 3)), 0);
    // add r0, #0xc5
    // ldrb r0, [r0]
    // add r0, #0xc4
    // ldrb r0, [r0]
    // ldr r0, [r5, r6]
    PhotoAlbum_DeletePhotoByIndex(r5, (((r4 + 1) << 0x18) >> 0x18));
    // add r0, #0xc4
    // ldrb r0, [r0]
}




void ov109_021E5DB8(void) {
    // add r4, #0xcc
    // add r0, r4, r6
    // add r1, sp, #0
    MI_CpuCopy8(8);
    // add r5, #0xcc
    // add r0, r5, r7
    // add r1, r4, r6
    MI_CpuCopy8(8);
    // add r0, sp, #0
    // add r1, r5, r7
    MI_CpuCopy8(8);
}




void ov109_021E5DEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r0, #0xc5
    // ldrb r0, [r0]
    // add r7, r1, #0
    // sub r1, r0, #1
    // add r0, r5, #0
    // add r0, #0xc5
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xc5
    // ldrb r0, [r0]
    // cmp r7, r0
    // bhs _021E5E32
    // add r4, r7, #0
    // cmp r7, r0
    // bhs _021E5E32
    // add r6, r5, #0
    // add r6, #0xcc
    // add r0, r4, #1
    // lsl r0, r0, #3
    // lsl r1, r4, #3
    // add r0, r6, r0
    // add r1, r6, r1
    // mov r2, #8
    // bl MI_CpuCopy8
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #0
    // add r0, #0xc5
    // ldrb r0, [r0]
    // cmp r4, r0
    // blo _021E5E12
    // add r1, r5, #0
    // add r1, #0xcc
    // lsl r0, r0, #3
    // add r0, r1, r0
    // mov r1, #0
    // mov r2, #8
    // bl MI_CpuFill8
    // add r0, r5, #0
    // add r0, #0xc5
    // ldrb r0, [r0]
    // mov r1, #0xc
    // bl _s32_div_f
    // strb r0, [r5, #0x1a]
    // add r0, r5, #0
    // add r0, #0xc5
    // ldrb r0, [r0]
    // mov r1, #0xc
    // bl _s32_div_f
    // cmp r1, #0
    // beq _021E5E66
    // ldrb r0, [r5, #0x1a]
    // add r0, r0, #1
    // strb r0, [r5, #0x1a]
    // add r0, r5, #0
    // add r0, #0xc5
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021E5E74
    // mov r0, #1
    // strb r0, [r5, #0x1a]
    // add r0, r5, #0
    // add r0, #0xc5
    // ldrb r0, [r0]
    // cmp r7, r0
    // blo _021E5EC0
    // cmp r0, #0
    // bne _021E5E8E
    // mov r0, #3
    // strb r0, [r5, #0x1b]
    // strb r0, [r5, #0x1c]
    // mov r0, #0
    // strb r0, [r5, #0x19]
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r7, #0
    // beq _021E5E98
    // sub r0, r7, #1
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // add r0, r7, #0
    // mov r1, #0xc
    // bl _s32_div_f
    // strb r0, [r5, #0x19]
    // add r0, r7, #0
    // mov r1, #0xc
    // bl _s32_div_f
    // ldr r0, _021E5EC4 ; =ov109_021E7890
    // ldrb r3, [r0, r1]
    // mov r0, #0x1e
    // lsr r2, r3, #0x1f
    // lsl r1, r3, #0x1e
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // strb r0, [r5, #0x1b]
    // lsr r0, r3, #2
    // strb r0, [r5, #0x1c]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E5EC4: .word ov109_021E7890
    // TODO: decompile
}




void ov109_021E5EC8(void) {
}




void ov109_021E5F10(void) {
    // str r1, [sp]
    // add r1, sp, #0
    ov109_021E5FFC(1, ((*((u8*)(r0 + 0x18)) << 0x1f) >> 0x1f));
    // ldr r1, [sp]
    ov109_021E6058(r4);
}




void ov109_021E5F40(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // cmp r1, #0xc
    // beq _021E5F52
    // cmp r1, #0xd
    // beq _021E5F6A
    // cmp r1, #0xe
    // beq _021E5F86
    // b _021E5FA6
    // ldr r0, [r5, #0x10]
    // mov r1, #0
    // strb r1, [r0, #1]
    // ldr r0, _021E5FF4 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #1
    // bl ov109_021E7388
    // mov r0, #8
    // pop {r3, r4, r5, pc}
    // ldrb r1, [r5, #0x19]
    // cmp r1, #0
    // bne _021E5F74
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r1, #2
    // bl ov109_021E7584
    // mov r0, #0x92
    // lsl r0, r0, #4
    // bl PlaySE
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // ldrb r1, [r5, #0x1a]
    // ldrb r2, [r5, #0x19]
    // sub r1, r1, #1
    // cmp r2, r1
    // bne _021E5F94
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r1, #3
    // bl ov109_021E7584
    // mov r0, #0x92
    // lsl r0, r0, #4
    // bl PlaySE
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // ldr r0, _021E5FF8 ; =_021E7884
    // ldrb r2, [r0, r1]
    // ldrb r1, [r5, #0x19]
    // mov r0, #0xc
    // mul r0, r1
    // add r0, r2, r0
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #0
    // add r0, #0xc5
    // ldrb r0, [r0]
    // cmp r4, r0
    // blo _021E5FC4
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // strb r4, [r5, #0x1f]
    // ldrb r0, [r5, #0x1b]
    // strb r0, [r5, #0x1d]
    // ldrb r0, [r5, #0x1c]
    // strb r0, [r5, #0x1e]
    // ldr r0, _021E5FF4 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // bl ov109_021E75C8
    // lsl r1, r4, #3
    // add r1, r5, r1
    // add r1, #0xd0
    // ldr r1, [r1]
    // add r0, r5, #0
    // bl ov109_021E7248
    // add r0, r5, #0
    // mov r1, #1
    // bl ov109_021E74D4
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // _021E5FF4: .word 0x000005DC
    // _021E5FF8: .word _021E7884
    // TODO: decompile
}




void ov109_021E5FFC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _021E6050 ; =ov109_021E7A18
    // add r6, r1, #0
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _021E6016
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // bne _021E6022
    // add r0, r5, #0
    // bl ov109_021E75B4
    // mov r3, #1
    // str r3, [r6]
    // cmp r4, #0xc
    // bhs _021E6044
    // mov r0, #3
    // and r0, r4
    // strb r0, [r5, #0x1b]
    // lsr r0, r4, #2
    // strb r0, [r5, #0x1c]
    // ldrb r1, [r5, #0x1b]
    // ldrb r2, [r5, #0x1c]
    // add r0, r5, #0
    // bl ov109_021E7474
    // ldr r0, _021E6054 ; =0x000005DC
    // bl PlaySE
    // lsl r1, r4, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov109_021E5F40
    // pop {r4, r5, r6, pc}
    // _021E6050: .word ov109_021E7A18
    // _021E6054: .word 0x000005DC
    // TODO: decompile
}




void ov109_021E6058(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #1
    // bne _021E6070
    // ldr r1, _021E61B4 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #0xf3
    // tst r1, r2
    // beq _021E6070
    // bl ov109_021E75B4
    // ldr r0, _021E61B4 ; =gSystem
    // mov r1, #1
    // ldr r0, [r0, #0x48]
    // tst r1, r0
    // beq _021E6096
    // ldrb r0, [r4, #0x1c]
    // ldrb r1, [r4, #0x1b]
    // cmp r0, #3
    // blo _021E6086
    // mov r1, #0xc
    // b _021E608E
    // lsl r0, r0, #2
    // add r0, r1, r0
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // add r0, r4, #0
    // bl ov109_021E5F40
    // pop {r4, pc}
    // mov r1, #2
    // tst r1, r0
    // beq _021E60A6
    // add r0, r4, #0
    // mov r1, #0xc
    // bl ov109_021E5F40
    // pop {r4, pc}
    // mov r1, #0x20
    // tst r1, r0
    // beq _021E60F6
    // ldrb r0, [r4, #0x1c]
    // ldrb r1, [r4, #0x1b]
    // cmp r0, #3
    // blo _021E60B8
    // mov r0, #0xc
    // b _021E60C0
    // lsl r0, r0, #2
    // add r0, r1, r0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #0xc
    // bne _021E60C8
    // mov r0, #1
    // pop {r4, pc}
    // cmp r1, #0
    // beq _021E60E6
    // ldr r0, _021E61B8 ; =0x000005DC
    // bl PlaySE
    // ldrb r0, [r4, #0x1b]
    // mov r3, #1
    // sub r0, r0, #1
    // strb r0, [r4, #0x1b]
    // ldrb r1, [r4, #0x1b]
    // ldrb r2, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov109_021E7474
    // b _021E61B0
    // ldrb r0, [r4, #0x19]
    // cmp r0, #0
    // beq _021E61B0
    // add r0, r4, #0
    // mov r1, #0xd
    // bl ov109_021E5F40
    // pop {r4, pc}
    // mov r1, #0x10
    // tst r1, r0
    // beq _021E614A
    // ldrb r0, [r4, #0x1c]
    // ldrb r1, [r4, #0x1b]
    // cmp r0, #3
    // blo _021E6108
    // mov r0, #0xc
    // b _021E6110
    // lsl r0, r0, #2
    // add r0, r1, r0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #0xc
    // bne _021E6118
    // mov r0, #1
    // pop {r4, pc}
    // cmp r1, #3
    // bhs _021E6136
    // ldr r0, _021E61B8 ; =0x000005DC
    // bl PlaySE
    // ldrb r0, [r4, #0x1b]
    // mov r3, #1
    // add r0, r0, #1
    // strb r0, [r4, #0x1b]
    // ldrb r1, [r4, #0x1b]
    // ldrb r2, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov109_021E7474
    // b _021E61B0
    // ldrb r0, [r4, #0x1a]
    // ldrb r1, [r4, #0x19]
    // sub r0, r0, #1
    // cmp r1, r0
    // bge _021E61B0
    // add r0, r4, #0
    // mov r1, #0xe
    // bl ov109_021E5F40
    // pop {r4, pc}
    // mov r1, #0x40
    // tst r1, r0
    // beq _021E6186
    // ldrb r0, [r4, #0x1c]
    // cmp r0, #4
    // bne _021E6160
    // ldrb r0, [r4, #0x1b]
    // cmp r0, #3
    // bhs _021E6160
    // mov r0, #3
    // strb r0, [r4, #0x1b]
    // ldr r0, _021E61B8 ; =0x000005DC
    // bl PlaySE
    // ldrb r0, [r4, #0x1c]
    // mov r3, #1
    // add r0, r0, #3
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // strb r0, [r4, #0x1c]
    // ldrb r1, [r4, #0x1b]
    // ldrb r2, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov109_021E7474
    // b _021E61B0
    // mov r1, #0x80
    // tst r0, r1
    // beq _021E61B0
    // ldr r0, _021E61B8 ; =0x000005DC
    // bl PlaySE
    // ldrb r0, [r4, #0x1c]
    // mov r3, #1
    // add r0, r0, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // strb r0, [r4, #0x1c]
    // ldrb r1, [r4, #0x1b]
    // ldrb r2, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov109_021E7474
    // mov r0, #1
    // pop {r4, pc}
    // _021E61B4: .word gSystem
    // _021E61B8: .word 0x000005DC
    // TODO: decompile
}




void ov109_021E61BC(void) {
    // str r1, [sp]
    // add r1, sp, #0
    ov109_021E638C(0);
    // ldr r1, [sp]
    ov109_021E63E8(r4);
}




void ov109_021E61DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrh r1, [r4, #8]
    // cmp r1, #0
    // beq _021E61EC
    // cmp r1, #1
    // beq _021E6220
    // b _021E624C
    // ldrh r2, [r4, #0xa]
    // add r1, r2, #1
    // strh r1, [r4, #0xa]
    // cmp r2, #0xf
    // bhs _021E61FA
    // mov r0, #0
    // pop {r4, pc}
    // ldrb r3, [r4, #0x19]
    // mov r1, #3
    // add r2, r1, #0
    // bl ov109_021E70C4
    // add r3, r4, #0
    // add r3, #0x22
    // ldrb r3, [r3]
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0
    // bl ov109_021E73F8
    // mov r0, #0
    // strh r0, [r4, #0xa]
    // ldrh r0, [r4, #8]
    // add r0, r0, #1
    // strh r0, [r4, #8]
    // b _021E6282
    // ldrh r1, [r4, #0xa]
    // add r0, r1, #1
    // strh r0, [r4, #0xa]
    // cmp r1, #0x1e
    // bhs _021E622E
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // beq _021E6240
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0
    // strh r0, [r4, #0xa]
    // ldrh r0, [r4, #8]
    // add r0, r0, #1
    // strh r0, [r4, #8]
    // b _021E6282
    // mov r1, #0
    // add r0, #0x20
    // strb r1, [r0]
    // ldr r0, _021E6288 ; =0x000005DC
    // bl PlaySE
    // ldrb r1, [r4, #0x1b]
    // ldrb r2, [r4, #0x1c]
    // add r0, r4, #0
    // mov r3, #1
    // bl ov109_021E7474
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov109_021E73F8
    // ldr r0, [r4, #0x14]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #0
    // strh r0, [r4, #0xa]
    // strh r0, [r4, #8]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _021E6288: .word 0x000005DC
    // TODO: decompile
}




void ov109_021E628C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // cmp r1, #0xc
    // beq _021E629E
    // cmp r1, #0xd
    // beq _021E62D0
    // cmp r1, #0xe
    // beq _021E62EC
    // b _021E630C
    // ldr r0, _021E6384 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0
    // bl ov109_021E7248
    // add r0, r5, #0
    // mov r1, #0
    // bl ov109_021E74D4
    // add r0, r5, #0
    // bl ov109_021E77D4
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov109_021E73F8
    // mov r0, #0
    // add r5, #0x20
    // strb r0, [r5]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldrb r1, [r5, #0x19]
    // cmp r1, #0
    // bne _021E62DA
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // mov r1, #2
    // bl ov109_021E7584
    // mov r0, #0x92
    // lsl r0, r0, #4
    // bl PlaySE
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // ldrb r1, [r5, #0x1a]
    // ldrb r2, [r5, #0x19]
    // sub r1, r1, #1
    // cmp r2, r1
    // bne _021E62FA
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // mov r1, #3
    // bl ov109_021E7584
    // mov r0, #0x92
    // lsl r0, r0, #4
    // bl PlaySE
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // ldr r0, _021E6388 ; =_021E7884
    // ldrb r2, [r0, r1]
    // ldrb r1, [r5, #0x19]
    // mov r0, #0xc
    // mul r0, r1
    // add r0, r2, r0
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #0
    // add r0, #0xc5
    // ldrb r0, [r0]
    // cmp r4, r0
    // blo _021E632A
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // ldr r0, _021E6384 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0
    // bl ov109_021E74D4
    // add r0, r5, #0
    // mov r1, #0
    // bl ov109_021E7248
    // ldrb r1, [r5, #0x1f]
    // cmp r4, r1
    // beq _021E636C
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov109_021E5DB8
    // ldrb r1, [r5, #0x1f]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov109_021E71BC
    // ldrb r1, [r5, #0x1b]
    // ldrb r2, [r5, #0x1c]
    // add r0, r5, #0
    // mov r3, #0
    // bl ov109_021E7474
    // mov r0, #0
    // strh r0, [r5, #0xa]
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, r5, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov109_021E73F8
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6384: .word 0x000005DC
    // _021E6388: .word _021E7884
    // TODO: decompile
}




void ov109_021E638C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _021E63E0 ; =ov109_021E7A18
    // add r6, r1, #0
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _021E63A6
    // mov r0, #5
    // pop {r4, r5, r6, pc}
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // bne _021E63B2
    // add r0, r5, #0
    // bl ov109_021E75B4
    // mov r3, #1
    // str r3, [r6]
    // cmp r4, #0xc
    // bhs _021E63D4
    // mov r0, #3
    // and r0, r4
    // strb r0, [r5, #0x1b]
    // lsr r0, r4, #2
    // strb r0, [r5, #0x1c]
    // ldrb r1, [r5, #0x1b]
    // ldrb r2, [r5, #0x1c]
    // add r0, r5, #0
    // bl ov109_021E7474
    // ldr r0, _021E63E4 ; =0x000005DC
    // bl PlaySE
    // lsl r1, r4, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov109_021E628C
    // pop {r4, r5, r6, pc}
    // _021E63E0: .word ov109_021E7A18
    // _021E63E4: .word 0x000005DC
    // TODO: decompile
}




void ov109_021E63E8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #1
    // bne _021E6400
    // ldr r1, _021E6564 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #0xf3
    // tst r1, r2
    // beq _021E6400
    // bl ov109_021E75B4
    // ldr r0, _021E6564 ; =gSystem
    // mov r1, #1
    // ldr r0, [r0, #0x48]
    // tst r1, r0
    // beq _021E6426
    // ldrb r0, [r4, #0x1c]
    // ldrb r1, [r4, #0x1b]
    // cmp r0, #3
    // blo _021E6416
    // mov r1, #0xc
    // b _021E641E
    // lsl r0, r0, #2
    // add r0, r1, r0
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // add r0, r4, #0
    // bl ov109_021E628C
    // pop {r4, pc}
    // mov r1, #2
    // tst r1, r0
    // beq _021E6436
    // add r0, r4, #0
    // mov r1, #0xc
    // bl ov109_021E628C
    // pop {r4, pc}
    // mov r1, #0x20
    // tst r1, r0
    // beq _021E6496
    // ldrb r0, [r4, #0x1c]
    // ldrb r1, [r4, #0x1b]
    // cmp r0, #3
    // blo _021E6448
    // mov r0, #0xc
    // b _021E6450
    // lsl r0, r0, #2
    // add r0, r1, r0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #0xc
    // bne _021E6458
    // mov r0, #1
    // pop {r4, pc}
    // cmp r1, #0
    // beq _021E6476
    // ldr r0, _021E6568 ; =0x000005DC
    // bl PlaySE
    // ldrb r0, [r4, #0x1b]
    // mov r3, #1
    // sub r0, r0, #1
    // strb r0, [r4, #0x1b]
    // ldrb r1, [r4, #0x1b]
    // ldrb r2, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov109_021E7474
    // b _021E6560
    // ldrb r0, [r4, #0x19]
    // cmp r0, #0
    // beq _021E6560
    // add r0, r1, #3
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // strb r0, [r4, #0x1b]
    // add r0, r4, #0
    // mov r1, #0xd
    // bl ov109_021E628C
    // pop {r4, pc}
    // mov r1, #0x10
    // tst r1, r0
    // beq _021E64FA
    // ldrb r1, [r4, #0x1c]
    // ldrb r0, [r4, #0x1b]
    // cmp r1, #3
    // blo _021E64A8
    // mov r1, #0xc
    // b _021E64B0
    // lsl r1, r1, #2
    // add r1, r0, r1
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // cmp r1, #0xc
    // bne _021E64B8
    // mov r0, #1
    // pop {r4, pc}
    // cmp r0, #3
    // bhs _021E64D6
    // ldr r0, _021E6568 ; =0x000005DC
    // bl PlaySE
    // ldrb r0, [r4, #0x1b]
    // mov r3, #1
    // add r0, r0, #1
    // strb r0, [r4, #0x1b]
    // ldrb r1, [r4, #0x1b]
    // ldrb r2, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov109_021E7474
    // b _021E6560
    // ldrb r1, [r4, #0x1a]
    // ldrb r2, [r4, #0x19]
    // sub r1, r1, #1
    // cmp r2, r1
    // bge _021E6560
    // add r0, r0, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // strb r0, [r4, #0x1b]
    // add r0, r4, #0
    // mov r1, #0xe
    // bl ov109_021E628C
    // pop {r4, pc}
    // mov r1, #0x40
    // tst r1, r0
    // beq _021E6536
    // ldrb r0, [r4, #0x1c]
    // cmp r0, #4
    // bne _021E6510
    // ldrb r0, [r4, #0x1b]
    // cmp r0, #3
    // bhs _021E6510
    // mov r0, #3
    // strb r0, [r4, #0x1b]
    // ldr r0, _021E6568 ; =0x000005DC
    // bl PlaySE
    // ldrb r0, [r4, #0x1c]
    // mov r3, #1
    // add r0, r0, #3
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // strb r0, [r4, #0x1c]
    // ldrb r1, [r4, #0x1b]
    // ldrb r2, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov109_021E7474
    // b _021E6560
    // mov r1, #0x80
    // tst r0, r1
    // beq _021E6560
    // ldr r0, _021E6568 ; =0x000005DC
    // bl PlaySE
    // ldrb r0, [r4, #0x1c]
    // mov r3, #1
    // add r0, r0, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // strb r0, [r4, #0x1c]
    // ldrb r1, [r4, #0x1b]
    // ldrb r2, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov109_021E7474
    // mov r0, #5
    // pop {r4, pc}
    // _021E6564: .word gSystem
    // _021E6568: .word 0x000005DC
    // TODO: decompile
}




void ov109_021E656C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrh r1, [r4, #8]
    // cmp r1, #0
    // beq _021E6580
    // cmp r1, #1
    // beq _021E65DC
    // cmp r1, #2
    // beq _021E6634
    // b _021E66BC
    // ldrb r1, [r4, #0x1b]
    // ldrb r2, [r4, #0x1c]
    // mov r3, #0
    // bl ov109_021E7474
    // add r0, r4, #0
    // mov r1, #0
    // bl ov109_021E74D4
    // add r0, r4, #0
    // mov r1, #1
    // bl ov109_021E68B8
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl ov109_021E691C
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov109_021E6F7C
    // ldrb r3, [r4, #0x19]
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #1
    // bl ov109_021E70C4
    // ldrb r3, [r4, #0x19]
    // add r0, r4, #0
    // mov r1, #3
    // sub r3, r3, #1
    // lsl r3, r3, #0x18
    // mov r2, #1
    // lsr r3, r3, #0x18
    // bl ov109_021E70C4
    // ldrb r1, [r4, #0x18]
    // mov r0, #0xf0
    // bic r1, r0
    // strb r1, [r4, #0x18]
    // ldrh r0, [r4, #8]
    // add r0, r0, #1
    // strh r0, [r4, #8]
    // b _021E66BC
    // ldrb r3, [r4, #0x18]
    // mov r2, #0xf0
    // add r1, r3, #0
    // bic r1, r2
    // lsl r2, r3, #0x18
    // lsr r2, r2, #0x1c
    // add r2, r2, #1
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // lsl r2, r2, #0x1c
    // lsr r2, r2, #0x18
    // orr r1, r2
    // strb r1, [r4, #0x18]
    // ldrb r1, [r4, #0x18]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1c
    // lsl r2, r1, #2
    // ldr r1, _021E66C0 ; =ov109_021E78DC
    // ldr r1, [r1, r2]
    // bl ov109_021E691C
    // ldrb r0, [r4, #0x18]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // cmp r0, #4
    // blo _021E66BC
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #1
    // bl ov109_021E6F7C
    // ldrb r3, [r4, #0x19]
    // mov r1, #2
    // add r0, r4, #0
    // sub r3, r3, #1
    // lsl r3, r3, #0x18
    // add r2, r1, #0
    // lsr r3, r3, #0x18
    // bl ov109_021E70C4
    // ldrh r0, [r4, #8]
    // add r0, r0, #1
    // strh r0, [r4, #8]
    // b _021E66BC
    // ldrb r3, [r4, #0x18]
    // mov r2, #0xf0
    // add r1, r3, #0
    // bic r1, r2
    // lsl r2, r3, #0x18
    // lsr r2, r2, #0x1c
    // sub r2, r2, #1
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // lsl r2, r2, #0x1c
    // lsr r2, r2, #0x18
    // orr r1, r2
    // strb r1, [r4, #0x18]
    // ldrb r1, [r4, #0x18]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1c
    // lsl r2, r1, #2
    // ldr r1, _021E66C0 ; =ov109_021E78DC
    // ldr r1, [r1, r2]
    // bl ov109_021E691C
    // ldrb r0, [r4, #0x18]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // bne _021E66BC
    // ldrb r3, [r4, #0x19]
    // add r0, r4, #0
    // mov r1, #3
    // sub r3, r3, #1
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl ov109_021E70C4
    // add r0, r4, #0
    // mov r1, #0
    // bl ov109_021E68B8
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl ov109_021E691C
    // ldrb r0, [r4, #0x19]
    // mov r3, #1
    // sub r0, r0, #1
    // strb r0, [r4, #0x19]
    // ldrb r1, [r4, #0x1b]
    // ldrb r2, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov109_021E7474
    // add r0, r4, #0
    // bl ov109_021E7524
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _021E66B4
    // add r0, r4, #0
    // mov r1, #1
    // bl ov109_021E74D4
    // mov r0, #0
    // strh r0, [r4, #8]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _021E66C0: .word ov109_021E78DC
    // TODO: decompile
}




void ov109_021E66C4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrh r1, [r4, #8]
    // cmp r1, #0
    // beq _021E66D8
    // cmp r1, #1
    // beq _021E6734
    // cmp r1, #2
    // beq _021E678C
    // b _021E6814
    // ldrb r1, [r4, #0x1b]
    // ldrb r2, [r4, #0x1c]
    // mov r3, #0
    // bl ov109_021E7474
    // add r0, r4, #0
    // mov r1, #0
    // bl ov109_021E74D4
    // add r0, r4, #0
    // mov r1, #1
    // bl ov109_021E68B8
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl ov109_021E691C
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #1
    // bl ov109_021E6F7C
    // mov r1, #2
    // ldrb r3, [r4, #0x19]
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov109_021E70C4
    // ldrb r3, [r4, #0x19]
    // add r0, r4, #0
    // mov r1, #3
    // add r3, r3, #1
    // lsl r3, r3, #0x18
    // mov r2, #2
    // lsr r3, r3, #0x18
    // bl ov109_021E70C4
    // ldrb r1, [r4, #0x18]
    // mov r0, #0xf0
    // bic r1, r0
    // strb r1, [r4, #0x18]
    // ldrh r0, [r4, #8]
    // add r0, r0, #1
    // strh r0, [r4, #8]
    // b _021E6814
    // ldrb r3, [r4, #0x18]
    // mov r2, #0xf0
    // add r1, r3, #0
    // bic r1, r2
    // lsl r2, r3, #0x18
    // lsr r2, r2, #0x1c
    // add r2, r2, #1
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // lsl r2, r2, #0x1c
    // lsr r2, r2, #0x18
    // orr r1, r2
    // strb r1, [r4, #0x18]
    // ldrb r1, [r4, #0x18]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1c
    // lsl r2, r1, #2
    // ldr r1, _021E6818 ; =ov109_021E78DC
    // ldr r1, [r1, r2]
    // bl ov109_021E691C
    // ldrb r0, [r4, #0x18]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // cmp r0, #4
    // blo _021E6814
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov109_021E6F7C
    // ldrb r3, [r4, #0x19]
    // add r0, r4, #0
    // mov r1, #2
    // add r3, r3, #1
    // lsl r3, r3, #0x18
    // mov r2, #1
    // lsr r3, r3, #0x18
    // bl ov109_021E70C4
    // ldrh r0, [r4, #8]
    // add r0, r0, #1
    // strh r0, [r4, #8]
    // b _021E6814
    // ldrb r3, [r4, #0x18]
    // mov r2, #0xf0
    // add r1, r3, #0
    // bic r1, r2
    // lsl r2, r3, #0x18
    // lsr r2, r2, #0x1c
    // sub r2, r2, #1
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // lsl r2, r2, #0x1c
    // lsr r2, r2, #0x18
    // orr r1, r2
    // strb r1, [r4, #0x18]
    // ldrb r1, [r4, #0x18]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1c
    // lsl r2, r1, #2
    // ldr r1, _021E6818 ; =ov109_021E78DC
    // ldr r1, [r1, r2]
    // bl ov109_021E691C
    // ldrb r0, [r4, #0x18]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // bne _021E6814
    // ldrb r3, [r4, #0x19]
    // add r0, r4, #0
    // mov r1, #3
    // add r3, r3, #1
    // lsl r3, r3, #0x18
    // mov r2, #1
    // lsr r3, r3, #0x18
    // bl ov109_021E70C4
    // add r0, r4, #0
    // mov r1, #0
    // bl ov109_021E68B8
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl ov109_021E691C
    // ldrb r0, [r4, #0x19]
    // mov r3, #1
    // add r0, r0, #1
    // strb r0, [r4, #0x19]
    // ldrb r1, [r4, #0x1b]
    // ldrb r2, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov109_021E7474
    // add r0, r4, #0
    // bl ov109_021E7524
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _021E680C
    // add r0, r4, #0
    // mov r1, #1
    // bl ov109_021E74D4
    // mov r0, #0
    // strh r0, [r4, #8]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _021E6818: .word ov109_021E78DC
    // TODO: decompile
}




void ov109_021E681C(void) {
}




void ov109_021E682C(void) {
    ov109_021E76F0(*((u16*)(r0 + 8)));
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    ov109_021E7748((*((u16*)(r4 + 8)) + 1));
    *((u16*)(r4 + 8)) = 0;
}




void ov109_021E685C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _021E686C
    // bl SpriteSystem_TransferOam
    // add r0, r4, #0
    // bl ov109_021E6898
    // add r0, r4, #0
    // bl ov109_021E68D4
    // bl NNS_GfdDoVramTransfer
    // ldr r0, [r4, #0x14]
    // bl DoScheduledBgGpuUpdates
    // ldr r3, _021E6890 ; =0x027E0000
    // ldr r1, _021E6894 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // _021E6890: .word 0x027E0000
    // _021E6894: .word 0x00003FF8
    // TODO: decompile
}




void ov109_021E6898(void) {
    ToggleBgLayer(2, ((*((u8*)(r0 + 0x18)) << 0x1c) >> 0x1f));
    // bic r1, r0
    *((u8*)(r4 + 0x18)) = *((u8*)(r4 + 0x18));
}




void ov109_021E68B8(void) {
    // bic r3, r2
    // orr r1, r3
    *((u8*)(r0 + 0x18)) = ((((r1 << 0x18) >> 0x18) << 0x1f) >> 0x1c);
    // orr r1, r2
    *((u8*)(r0 + 0x18)) = 4;
}




void ov109_021E68D4(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FX_Inv((1 << 0xc));
    // str r0, [sp, #0x10]
    // ldr r0, [r4, r0]
    FX_Inv((0x1f << 4));
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r2, sp, #4
    SetBgAffine(*((u32*)(r4 + 0x14)), 2, 0x80);
    // bic r1, r0
    *((u8*)(r4 + 0x18)) = *((u8*)(r4 + 0x18));
}




void ov109_021E691C(void) {
    // str r1, [r0, r2]
    // orr r1, r2
    *((u8*)(r0 + 0x18)) = 2;
}




void ov109_021E692C(void) {
}




void ov109_021E694C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xd4
    // add r4, r0, #0
    // bl ov109_021E692C
    // ldr r0, [r4]
    // bl BgConfig_Alloc
    // add r3, sp, #0xc4
    // ldr r5, _021E6AD4 ; =ov109_021E78B8
    // str r0, [r4, #0x14]
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r2, _021E6AD8 ; =0x04000304
    // ldr r0, _021E6ADC ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // ldr r5, _021E6AE0 ; =ov109_021E7944
    // add r3, sp, #0xa8
    // and r0, r1
    // strh r0, [r2]
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
    // ldr r0, [r4, #0x14]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x14]
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E6AE4 ; =ov109_021E797C
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #7
    // str r0, [r3]
    // ldr r0, [r4, #0x14]
    // mov r3, #2
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x14]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E6AE8 ; =ov109_021E7998
    // add r3, sp, #0x70
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
    // ldr r0, [r4, #0x14]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x14]
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E6AEC ; =ov109_021E790C
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r3]
    // mov r1, #0
    // ldr r0, [r4, #0x14]
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x14]
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E6AF0 ; =ov109_021E7928
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // ldr r0, [r4, #0x14]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x14]
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E6AF4 ; =ov109_021E7960
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // ldr r0, [r4, #0x14]
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x14]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E6AF8 ; =ov109_021E79B4
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // ldr r0, [r4, #0x14]
    // mov r3, #2
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0x14]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r3, [r4]
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // bl BG_ClearCharDataRange
    // ldr r3, [r4]
    // mov r0, #6
    // mov r1, #0x20
    // mov r2, #0
    // bl BG_ClearCharDataRange
    // mov r0, #0
    // ldr r3, [r4]
    // mov r1, #0x20
    // add r2, r0, #0
    // bl BG_ClearCharDataRange
    // ldr r3, [r4]
    // mov r0, #3
    // mov r1, #0x40
    // mov r2, #0
    // bl BG_ClearCharDataRange
    // mov r2, #0
    // ldr r0, [r4, #0x14]
    // mov r1, #7
    // sub r3, r2, #4
    // bl BgSetPosTextAndCommit
    // add sp, #0xd4
    // pop {r4, r5, pc}
    // _021E6AD4: .word ov109_021E78B8
    // _021E6AD8: .word 0x04000304
    // _021E6ADC: .word 0xFFFF7FFF
    // _021E6AE0: .word ov109_021E7944
    // _021E6AE4: .word ov109_021E797C
    // _021E6AE8: .word ov109_021E7998
    // _021E6AEC: .word ov109_021E790C
    // _021E6AF0: .word ov109_021E7928
    // _021E6AF4: .word ov109_021E7960
    // _021E6AF8: .word ov109_021E79B4
    // TODO: decompile
}




void ov109_021E6AFC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r2, #0
    // ldr r0, [r4, #0x14]
    // mov r1, #7
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r4, #0x14]
    // mov r1, #3
    // bl FreeBgTilemapBuffer
    // ldr r0, [r4, #0x14]
    // mov r1, #2
    // bl FreeBgTilemapBuffer
    // ldr r0, [r4, #0x14]
    // mov r1, #1
    // bl FreeBgTilemapBuffer
    // ldr r0, [r4, #0x14]
    // mov r1, #0
    // bl FreeBgTilemapBuffer
    // ldr r0, [r4, #0x14]
    // mov r1, #6
    // bl FreeBgTilemapBuffer
    // ldr r0, [r4, #0x14]
    // mov r1, #7
    // bl FreeBgTilemapBuffer
    // ldr r0, [r4, #0x14]
    // mov r1, #4
    // bl FreeBgTilemapBuffer
    // ldr r0, [r4, #0x14]
    // bl Heap_Free
    // ldr r2, _021E6B58 ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // pop {r4, pc}
    // nop
    // _021E6B58: .word 0x04000304
    // TODO: decompile
}




void ov109_021E6B5C(void) {
    NARC_New(0xab, *((u32*)r0));
    // str r2, [sp]
    // str r1, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(4, 0, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r4, 4, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 9, *((u32*)(r5 + 0x14)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 5, *((u32*)(r5 + 0x14)), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0xa, *((u32*)(r5 + 0x14)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 5, *((u32*)(r5 + 0x14)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 6, *((u32*)(r5 + 0x14)), 3);
    // str r0, [sp]
    // add r3, #0xac
    GfGfxLoader_GetScrnDataFromOpenNarc(r4, 8, 0, r5);
    // add r1, #0xb0
    // str r0, [r1]
    // str r0, [sp]
    // add r3, #0xb4
    GfGfxLoader_GetScrnDataFromOpenNarc(r4, 8, 0, r5);
    // add r1, #0xb8
    // str r0, [r1]
    // str r0, [sp]
    // add r3, #0xbc
    GfGfxLoader_GetScrnDataFromOpenNarc(r4, 7, 0, r5);
    // add r1, #0xc0
    // str r0, [r1]
    NARC_Delete(r4, r5);
    LoadFontPal1(0, (6 << 6), *((u32*)r5));
    // add r0, #0x23
    // ldrb r0, [r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)(r5 + 0x14)), 0, 1, 0xd);
}




void ov109_021E6C7C(void) {
}




void ov109_021E6C9C(void) {
    FontID_Alloc(4, *((u32*)r0));
    NewMsgDataFromNarc(0, 0x1b, 0, *((u32*)r5));
    *((u32*)(r5 + 0x24)) = r0;
    MessageFormat_New_Custom(6, 0x16, *((u32*)r5));
    *((u32*)(r5 + 0x28)) = r0;
    String_New(0x80, *((u32*)r5));
    *((u32*)(r5 + 0x2c)) = r0;
    NewString_ReadMsgData(*((u32*)(r5 + 0x24)), 0);
    *((u32*)(r5 + 0x30)) = r0;
    NewString_ReadMsgData(*((u32*)(r5 + 0x24)), (0 + 5));
    *((u32*)(r6 + 0x34)) = r0;
    // add r1, #0xa
    NewString_ReadMsgData(*((u32*)(r5 + 0x24)), 0);
    *((u32*)(r6 + 0x48)) = r0;
    ListMenuItems_New(4, *((u32*)r5));
    // add r1, #0x88
    // str r0, [r1]
    // add r0, #0x88
    ListMenuItems_AppendFromMsgData(*((u32*)r5), *((u32*)(r5 + 0x24)), (0 + 1), 0);
}




void ov109_021E6D2C(void) {
    // add r0, #0x88
    ListMenuItems_Delete(*((u32*)r0));
    // add r0, #0x88
    // str r4, [r0]
    String_Delete(*((u32*)(r6 + 0x48)));
    String_Delete(*((u32*)(r6 + 0x34)));
    String_Delete(*((u32*)(r6 + 0x30)));
    String_Delete(*((u32*)(r6 + 0x2c)));
    MessageFormat_Delete(*((u32*)(r6 + 0x28)));
    DestroyMsgData(*((u32*)(r6 + 0x24)));
    FontID_Release(4);
}




void ov109_021E6D84(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r7, #0
    // ldr r4, _021E6DB8 ; =ov109_021E78F4
    // mov r6, #0
    // add r5, #0x50
    // ldr r0, [r7, #0x14]
    // add r1, r5, #0
    // add r2, r4, #0
    // bl AddWindow
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r6, r6, #1
    // add r4, #8
    // add r5, #0x10
    // cmp r6, #3
    // blt _021E6D90
    // ldr r0, [r7]
    // bl YesNoPrompt_Create
    // add r7, #0x8c
    // str r0, [r7]
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E6DB8: .word ov109_021E78F4
    // TODO: decompile
}




void ov109_021E6DBC(void) {
    // add r5, #0x50
    ClearWindowTilemapAndCopyToVram(r0);
    RemoveWindow(r5);
    // add r5, #0x10
    // add r6, #0x8c
    YesNoPrompt_Destroy(*((u32*)r6));
}




void ov109_021E6DE4(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r1, [r4]
    // mov r0, #0x20
    // bl GF_CreateVramTransferManager
    // ldr r0, [r4]
    // bl SpriteSystem_Alloc
    // add r1, r4, #0
    // add r1, #0x90
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // ldr r1, _021E6E58 ; =ov109_021E79D0
    // ldr r2, _021E6E5C ; =ov109_021E78C8
    // mov r3, #3
    // bl SpriteSystem_Init
    // ldr r0, [r4]
    // bl thunk_ClearMainOAM
    // ldr r0, [r4]
    // bl thunk_ClearSubOAM
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // bl SpriteManager_New
    // add r1, r4, #0
    // add r1, #0x94
    // str r0, [r1]
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x90
    // add r1, #0x94
    // ldr r0, [r0]
    // ldr r1, [r1]
    // mov r2, #5
    // bl SpriteSystem_InitSprites
    // mov r0, #1
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x90
    // add r4, #0x94
    // ldr r0, [r0]
    // ldr r1, [r4]
    // ldr r2, _021E6E60 ; =ov109_021E78A8
    // mov r3, #2
    // bl sub_0200D2A4
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E6E58: .word ov109_021E79D0
    // _021E6E5C: .word ov109_021E78C8
    // _021E6E60: .word ov109_021E78A8
    // TODO: decompile
}




void ov109_021E6E64(void) {
}




void ov109_021E6E9C(void) {
}




void ov109_021E6EC0(void) {
}




void ov109_021E6EE4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r4, _021E6F5C ; =ov109_021E7A58
    // mov r7, #0
    // add r5, r6, #0
    // add r0, r6, #0
    // add r1, r6, #0
    // add r0, #0x90
    // add r1, #0x94
    // ldr r0, [r0]
    // ldr r1, [r1]
    // add r2, r4, #0
    // bl SpriteSystem_CreateSpriteFromResourceHeader
    // add r1, r5, #0
    // add r1, #0x98
    // str r0, [r1]
    // add r0, r5, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // add r0, r5, #0
    // add r0, #0x98
    // mov r1, #1
    // ldr r0, [r0]
    // lsl r1, r1, #0xc
    // bl Sprite_SetAnimSpeed
    // add r7, r7, #1
    // add r4, #0x28
    // add r5, r5, #4
    // cmp r7, #5
    // blt _021E6EEE
    // add r0, r6, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // mov r1, #0
    // bl Sprite_SetAnimActiveFlag
    // add r0, r6, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r0, r6, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // mov r1, #2
    // bl Sprite_SetPriority
    // add r6, #0xa8
    // ldr r0, [r6]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E6F5C: .word ov109_021E7A58
    // TODO: decompile
}




void ov109_021E6F60(void) {
}




void ov109_021E6F7C(void) {
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x14)), 2);
    // add r0, #0xbc
    // add r1, r4, r1
    // asr r2, r1, #1
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldrh r1, [r0]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(r5 + 0x14)), 2, ((r2 << 0x1c) >> 0x18), 0);
}




void ov109_021E6FD4(void) {
    // add r2, #0xbc
    // str r5, [sp]
    // str r5, [sp, #4]
    // add r5, #0xc
    // str r5, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldrh r3, [r2]
    // str r3, [sp, #0x14]
    // str r2, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(r0 + 0x14)), ((r1 << 0x18) >> 0x18), 0x1c, 0xf);
}




void ov109_021E7030(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // mov r0, #0xc
    // mul r0, r2
    // str r3, [sp, #8]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // str r1, [sp, #4]
    // add r0, r0, #2
    // str r0, [sp, #0xc]
    // ldr r4, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r1, r4, #0
    // cmp r1, r0
    // bge _021E70AA
    // ldr r1, _021E70C0 ; =_021E7884
    // ldr r0, [sp, #0x14]
    // add r1, r1, r0
    // add r0, r4, #0
    // add r6, r1, r0
    // ldr r0, [sp, #0x18]
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldrb r1, [r6]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // add r0, r5, #0
    // add r0, #0xc5
    // ldrb r0, [r0]
    // cmp r1, r0
    // str r7, [sp]
    // bhs _021E7092
    // lsl r1, r1, #3
    // add r1, r5, r1
    // add r1, #0xd0
    // lsl r3, r4, #0x18
    // ldr r1, [r1]
    // ldr r2, [sp, #4]
    // add r0, r5, #0
    // lsr r3, r3, #0x18
    // bl ov109_021E7178
    // b _021E70A0
    // lsl r3, r4, #0x18
    // ldr r2, [sp, #4]
    // add r0, r5, #0
    // mov r1, #0
    // lsr r3, r3, #0x18
    // bl ov109_021E7178
    // ldr r0, [sp, #0xc]
    // add r4, r4, #1
    // add r6, r6, #1
    // cmp r4, r0
    // blt _021E7066
    // ldr r0, [sp, #0x14]
    // add r0, r0, #4
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #3
    // blt _021E704C
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021E70C0: .word _021E7884
    // TODO: decompile
}




void ov109_021E70C4(void) {
    // tst r2, r6
    ov109_021E7030(r3, 0);
    ov109_021E6FD4(r5, r4, 1, r7);
    // tst r0, r3
    ov109_021E7030(r5, r4, r7, 2);
    ov109_021E6FD4(r5, r4, 2, r7);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x14)), ((r4 << 0x18) >> 0x18));
}




void ov109_021E7114(void) {
    // str r2, [sp, #0x1c]
    // str r3, [sp, #0x20]
    // add r0, #0xb4
    _s32_div_f(r1, 6);
    _s32_div_f(r6, 6);
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // add r1, r7, r1
    // str r1, [sp, #0xc]
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // ldrh r0, [r4]
    // add r3, sp, #0x28
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    CopyToBgTilemapRect(*((u32*)(r5 + 0x14)), (r0 << 2), *((u8*)(r3 + 0x10)));
}




void ov109_021E7178(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, _021E71B8 ; =0x00000000
    // beq _021E718C
    // ldrb r1, [r4, #4]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x19
    // add r1, r1, #1
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // add r4, sp, #0
    // ldrb r5, [r4, #0x10]
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // lsl r4, r5, #2
    // add r4, r5, r4
    // add r4, r4, #1
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x18
    // mov r5, #6
    // str r4, [sp]
    // lsl r4, r3, #0x17
    // mul r5, r3
    // lsr r4, r4, #0x18
    // add r3, r5, #4
    // add r3, r4, r3
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl ov109_021E7114
    // pop {r3, r4, r5, pc}
    // nop
    // _021E71B8: .word 0x00000000
    // TODO: decompile
}




void ov109_021E71BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0xc
    // add r7, r2, #0
    // bl _s32_div_f
    // ldrb r1, [r4, #0x19]
    // cmp r0, r1
    // bne _021E71FE
    // add r0, r5, #0
    // mov r1, #0xc
    // bl _s32_div_f
    // ldr r0, _021E7244 ; =ov109_021E7890
    // mov r2, #3
    // ldrb r3, [r0, r1]
    // mov r1, #0
    // lsl r0, r3, #0x16
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // lsr r6, r3, #0x1f
    // lsl r5, r3, #0x1e
    // sub r5, r5, r6
    // mov r3, #0x1e
    // ror r5, r3
    // add r3, r6, r5
    // lsl r3, r3, #0x18
    // add r0, r4, #0
    // lsr r3, r3, #0x18
    // bl ov109_021E7178
    // add r0, r7, #0
    // mov r1, #0xc
    // bl _s32_div_f
    // ldrb r1, [r4, #0x19]
    // cmp r0, r1
    // bne _021E7238
    // add r0, r7, #0
    // mov r1, #0xc
    // bl _s32_div_f
    // ldr r0, _021E7244 ; =ov109_021E7890
    // mov r2, #3
    // ldrb r5, [r0, r1]
    // mov r1, #0
    // lsl r0, r5, #0x16
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // lsr r3, r5, #0x1f
    // lsl r6, r5, #0x1e
    // sub r6, r6, r3
    // mov r5, #0x1e
    // ror r6, r5
    // add r3, r3, r6
    // lsl r3, r3, #0x18
    // add r0, r4, #0
    // lsr r3, r3, #0x18
    // bl ov109_021E7178
    // ldr r0, [r4, #0x14]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E7244: .word ov109_021E7890
    // TODO: decompile
}




void ov109_021E7248(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5, #0x14]
    // add r4, r1, #0
    // mov r1, #6
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, [r5, #0x14]
    // mov r1, #7
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r5, #0
    // add r0, #0x70
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x14]
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r5, #0x14]
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // cmp r4, #0
    // bne _021E728A
    // add r5, #0x70
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x10]
    // ldr r0, [r0, #0xc]
    // bl Save_PlayerData_GetProfile
    // add r2, r0, #0
    // ldr r0, [r5, #0x28]
    // mov r1, #0
    // bl BufferPlayersName
    // ldrh r0, [r4, #0x32]
    // ldr r1, [r5]
    // ldr r2, [r5, #0x2c]
    // bl MapID_GetLandmarkName
    // mov r0, #0
    // str r0, [sp]
    // mov r3, #2
    // str r3, [sp, #4]
    // ldr r0, [r5, #0x28]
    // ldr r2, [r5, #0x2c]
    // mov r1, #1
    // bl BufferString
    // add r1, r4, #0
    // ldr r0, [r5, #0x2c]
    // add r1, #0x18
    // bl CopyU16ArrayToString
    // mov r0, #0
    // mov r1, #2
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [r5, #0x28]
    // ldr r2, [r5, #0x2c]
    // add r3, r1, #0
    // bl BufferString
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r2, [r4, #0x38]
    // ldr r0, [r5, #0x28]
    // lsr r2, r2, #0x18
    // lsl r2, r2, #0x18
    // lsr r3, r2, #0x18
    // mov r2, #0x7d
    // lsl r2, r2, #4
    // add r2, r3, r2
    // mov r1, #3
    // mov r3, #4
    // bl BufferIntegerAsString
    // mov r3, #2
    // str r3, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r2, [r4, #0x38]
    // ldr r0, [r5, #0x28]
    // lsr r2, r2, #0x10
    // lsl r2, r2, #0x18
    // mov r1, #4
    // lsr r2, r2, #0x18
    // bl BufferIntegerAsString
    // mov r3, #2
    // str r3, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r2, [r4, #0x38]
    // ldr r0, [r5, #0x28]
    // lsr r2, r2, #8
    // lsl r2, r2, #0x18
    // mov r1, #5
    // lsr r2, r2, #0x18
    // bl BufferIntegerAsString
    // add r0, r4, #0
    // bl ov109_021E7850
    // cmp r0, #1
    // ldr r0, [r5, #0x28]
    // bls _021E733A
    // ldr r1, [r5, #0x2c]
    // ldr r2, [r5, #0x4c]
    // bl StringExpandPlaceholders
    // b _021E7342
    // ldr r1, [r5, #0x2c]
    // ldr r2, [r5, #0x48]
    // bl StringExpandPlaceholders
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021E7384 ; =0x00030200
    // add r3, r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, #0
    // ldr r2, [r5, #0x2c]
    // add r0, #0x70
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // add r0, #0x70
    // bl ScheduleWindowCopyToVram
    // mov r0, #8
    // str r0, [sp]
    // ldrb r1, [r4, #4]
    // add r0, r5, #0
    // mov r2, #7
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x19
    // add r1, r1, #1
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // mov r3, #0xd
    // bl ov109_021E7114
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _021E7384: .word 0x00030200
    // TODO: decompile
}




void ov109_021E7388(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // add r5, r1, #0
    // add r0, #0x50
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // cmp r5, #0
    // beq _021E73B2
    // add r0, r4, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // mov r1, #9
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r4, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // bl Sprite_ResetAnimCtrlState
    // ldr r1, [r4, #0x30]
    // mov r0, #4
    // mov r2, #0
    // bl FontID_String_GetWidth
    // mov r1, #0
    // add r3, r0, #0
    // mov r5, #0x40
    // sub r3, r5, r3
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021E73F4 ; =0x00010500
    // lsr r3, r3, #1
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r4, #0
    // ldr r2, [r4, #0x30]
    // add r0, #0x50
    // mov r1, #4
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // add r0, #0x50
    // bl ScheduleWindowCopyToVram
    // ldr r0, [r4, #0x14]
    // mov r1, #1
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _021E73F4: .word 0x00010500
    // TODO: decompile
}




void ov109_021E73F8(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r3, #0
    // cmp r2, #0
    // beq _021E7412
    // mov r1, #1
    // add r0, #0x60
    // add r2, r1, #0
    // mov r3, #0xd
    // bl DrawFrameAndWindow2
    // add r0, r5, #0
    // add r0, #0x60
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // cmp r6, #0
    // bne _021E7440
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021E7470 ; =0x0001020F
    // lsl r2, r4, #2
    // str r0, [sp, #8]
    // add r0, r5, #0
    // str r1, [sp, #0xc]
    // add r2, r5, r2
    // ldr r2, [r2, #0x34]
    // add r0, #0x60
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // b _021E7462
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, _021E7470 ; =0x0001020F
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // lsl r2, r4, #2
    // add r0, r5, #0
    // str r1, [sp, #0xc]
    // add r2, r5, r2
    // ldr r2, [r2, #0x34]
    // add r0, #0x60
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r1, r5, #0
    // add r1, #0x21
    // strb r0, [r1]
    // add r5, #0x60
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _021E7470: .word 0x0001020F
    // TODO: decompile
}




void ov109_021E7474(void) {
    // add r0, #0x98
    Sprite_SetDrawFlag(*((u32*)r0), r3);
    // add r0, #0x98
    Sprite_SetAnimationFrame(*((u32*)r5), 1);
    // mul r1, r0
    // add r1, #0x1c
    // add r0, r1, r0
    // asr r7, r0, #0x10
    // mul r0, r6
    // add r0, #8
    // asr r4, r0, #0x10
    // add r0, #0x98
    Sprite_SetAnimationFrame(*((u32*)r5), 0);
    // add r5, #0x98
    Sprite_SetPositionXY(*((u32*)r5), r7, r4);
}




void ov109_021E74D4(void) {
    _s32_div_f(*((u8*)(r0 + 0x1f)), 0xc);
    // add r0, #0x9c
    // mul r2, r1
    // add r2, #0x1c
    // add r1, r2, r1
    // mul r2, r3
    // add r2, #8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    Sprite_SetPositionXY(*((u32*)r5), (((*((u8*)(r5 + 0x1d)) >> 1) << 3) << 0x10), (0x28 << 0x10), *((u8*)(r5 + 0x1e)));
    // add r5, #0x9c
    Sprite_SetDrawFlag(*((u32*)r5), r4);
}




void ov109_021E7524(void) {
    // add r0, #0xa0
    Sprite_SetAnimActiveFlag(*((u32*)r0), 0);
    // add r0, #0xa4
    Sprite_SetAnimActiveFlag(*((u32*)r4), 0);
    // add r0, #0xa0
    Sprite_SetAnimCtrlSeq(*((u32*)r4), 2);
    // add r0, #0xa0
    Sprite_SetAnimCtrlSeq(*((u32*)r4), 0);
    // add r4, #0xa4
    Sprite_SetAnimCtrlSeq(*((u32*)r4), 5);
    // add r4, #0xa4
    Sprite_SetAnimCtrlSeq(*((u32*)r4), 3);
}




void ov109_021E7584(void) {
    // add r5, #0x98
    // ldr r0, [r5, r4]
    Sprite_ResetAnimCtrlState();
    // ldr r0, [r5, r4]
    Sprite_SetAnimActiveFlag(1);
    // ldr r0, [r5, r4]
    Sprite_SetAnimCtrlSeq(1);
    Sprite_SetAnimCtrlSeq(4);
}




void ov109_021E75B4(void) {
    *((u32*)(r0 + 0xc)) = 0;
}




void ov109_021E75C8(void) {
    // push {r3, r4, lr}
    // sub sp, #0x24
    // add r4, r0, #0
    // add r0, sp, #0xc
    // mov r1, #0
    // mov r2, #0x18
    // bl MI_CpuFill8
    // ldr r0, _021E763C ; =ov109_021E789C
    // add r2, sp, #0xc
    // ldrh r3, [r0]
    // add r1, sp, #0xc
    // strh r3, [r2]
    // ldrh r3, [r0, #2]
    // strh r3, [r2, #2]
    // ldrh r3, [r0, #4]
    // strh r3, [r2, #4]
    // ldrh r3, [r0, #6]
    // strh r3, [r2, #6]
    // ldrh r3, [r0, #8]
    // ldrh r0, [r0, #0xa]
    // strh r3, [r2, #8]
    // strh r0, [r2, #0xa]
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // mov r3, #0x18
    // str r0, [sp, #0x18]
    // ldr r0, [r4, #0x14]
    // str r0, [sp, #0x1c]
    // mov r0, #4
    // strb r0, [r2, #0x14]
    // mov r0, #0xb
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // ldr r2, [r4, #0xc]
    // add r0, #0x80
    // lsl r2, r2, #0x18
    // ldr r0, [r0]
    // lsr r2, r2, #0x18
    // bl TouchscreenListMenu_Create
    // add r1, r4, #0
    // add r1, #0x84
    // str r0, [r1]
    // ldrb r1, [r4, #0x1b]
    // ldrb r2, [r4, #0x1c]
    // add r0, r4, #0
    // mov r3, #0
    // bl ov109_021E7474
    // add sp, #0x24
    // pop {r3, r4, pc}
    // nop
    // _021E763C: .word ov109_021E789C
    // TODO: decompile
}




void ov109_021E7640(void) {
    // add r0, #0x84
    TouchscreenListMenu_HandleInput(*((u32*)r0));
    // mvn r0, r0
    // add r0, #0x84
    TouchscreenListMenu_WasLastInputTouch(*((u32*)r5));
    // add r0, #0x84
    TouchscreenListMenu_Destroy(*((u32*)r5));
    ov109_021E75B4(r5);
    *((u8*)(*((u32*)(r5 + 0x10)) + 1)) = 1;
    *((u8*)(*((u32*)(r5 + 0x10)) + 2)) = *((u8*)(r5 + 0x1f));
    ov109_021E73F8(r5, 4, 0, 0);
    // add r5, #0x20
    // strb r0, [r5]
    ov109_021E7474(r5, *((u8*)(r5 + 0x1b)), *((u8*)(r5 + 0x1c)), 1);
    ov109_021E73F8(r5, 2, 0, 0);
    // add r5, #0x20
    // strb r0, [r5]
    ov109_021E7248(r5, 0);
    ov109_021E74D4(r5, 0);
    ov109_021E7474(r5, *((u8*)(r5 + 0x1b)), *((u8*)(r5 + 0x1c)), 1);
}




void ov109_021E76F0(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    *((u8*)(0xe + 0x10)) = 0x19;
    *((u8*)(0xe + 0x11)) = 0x10;
    // bic r1, r3
    // add r4, #0x8c
    // and r3, r5
    // orr r1, r3
    *((u8*)(0xe + 0x12)) = *((u8*)(0xe + 0x12));
    // bic r3, r1
    // orr r1, r2
    *((u8*)(0xe + 0x12)) = *((u8*)(0xe + 0x12));
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(*((u32*)r4), *((u8*)(0xe + 0x12)), 0x10, *((u8*)(0xe + 0x12)));
}




void ov109_021E7748(void) {
    // add r0, #0x8c
    YesNoPrompt_HandleInput(*((u32*)r0));
    ov109_021E5DEC(r5, *((u8*)(r5 + 0x1f)));
    // add r0, #0x8c
    YesNoPrompt_IsInTouchMode(*((u32*)r5));
    *((u32*)(r5 + 0xc)) = r0;
    // add r0, #0x8c
    YesNoPrompt_Reset(*((u32*)r5), *((u32*)(r5 + 0xc)));
    ov109_021E74D4(r5, 0);
    ov109_021E70C4(r5, 3, 3, *((u8*)(r5 + 0x19)));
    ov109_021E7524(r5);
    ov109_021E7474(r5, *((u8*)(r5 + 0x1b)), *((u8*)(r5 + 0x1c)), 1);
    ov109_021E7248(r5, 0);
    ov109_021E73F8(r5, 0, 0, 0);
    // add r5, #0x20
    // strb r0, [r5]
}




void ov109_021E77D4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r1, #8
    // bl Heap_AllocAtEnd
    // mov r1, #0
    // mov r2, #8
    // add r5, r0, #0
    // bl MI_CpuFill8
    // ldr r0, _021E780C ; =ov109_021E7810
    // add r1, r5, #0
    // mov r2, #0
    // str r4, [r5]
    // bl SysTask_CreateOnMainQueue
    // add r0, r4, #0
    // mov r1, #1
    // bl ov109_021E7388
    // ldrb r1, [r4, #0x18]
    // mov r0, #1
    // bic r1, r0
    // mov r0, #1
    // orr r0, r1
    // strb r0, [r4, #0x18]
    // pop {r3, r4, r5, pc}
    // _021E780C: .word ov109_021E7810
    // TODO: decompile
}




void ov109_021E7810(void) {
    // add r0, #0xa8
    Sprite_IsAnimated(*((u32*)*((u32*)r1)));
    ov109_021E7388(*((u32*)r4), 0);
    // bic r1, r0
    *((u8*)(*((u32*)r4) + 0x18)) = *((u8*)(*((u32*)r4) + 0x18));
    MI_CpuFill8(r4, 0, 8);
    Heap_Free(r4);
    SysTask_Destroy(r5);
}




void ov109_021E7850(void) {
    // push {r3, r4}
    // mov r1, #0
    // ldr r3, _021E7880 ; =0x000001ED
    // add r2, r1, #0
    // lsl r4, r2, #2
    // add r4, r0, r4
    // add r4, #0x6c
    // ldrh r4, [r4]
    // cmp r4, #0
    // ble _021E786E
    // cmp r4, r3
    // bgt _021E786E
    // add r1, r1, #1
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // add r2, r2, #1
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // cmp r2, #6
    // blo _021E7858
    // add r0, r1, #0
    // pop {r3, r4}
    // bx lr
    // nop
    // _021E7880: .word 0x000001ED
    // TODO: decompile
}



