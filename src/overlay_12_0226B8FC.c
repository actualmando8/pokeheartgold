/* Decompiled from asm/overlay_12_0226B8FC.s */
#include "global.h"

void ov12_0226B8FC(void) {
    NARC_New(8, r3);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 3, r5, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r5, r4, r6, 0xfa);
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r5, r4, r6, 0xfb);
    // str r0, [sp]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r5, r4, r6, 0xfc);
    NARC_Delete(r6);
}



void ov12_0226B97C(void) {
    SpriteManager_UnloadCharObjById();
    SpriteManager_UnloadPlttObjById(r5, r4);
    SpriteManager_UnloadCellObjById(r5, r6);
    // ldr r1, [sp, #0x10]
    SpriteManager_UnloadAnimObjById(r5);
}



void ov12_0226B9A4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r5, r3, #0
    // mov ip, r2
    // ldr r3, _0226BA1C ; =ov12_0226EBA0
    // add r6, r0, #0
    // add r7, r1, #0
    // add r2, sp, #4
    // mov r4, #6
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r4, r4, #1
    // bne _0226B9B6
    // ldr r0, [r3]
    // mov r1, #0x18
    // str r0, [r2]
    // ldr r0, [sp, #0x50]
    // str r5, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x54]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x58]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x5c]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x60]
    // str r0, [sp, #0x30]
    // mov r0, ip
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x18
    // str r0, [sp]
    // bl MI_CpuFill8
    // ldr r5, [sp]
    // mov r4, #0
    // add r0, r6, #0
    // add r1, r7, #0
    // add r2, sp, #4
    // bl SpriteSystem_NewSprite
    // mov r1, #0
    // stmia r5!, {r0}
    // bl ManagedSprite_SetDrawFlag
    // add r4, r4, #1
    // cmp r4, #5
    // blt _0226B9EE
    // ldr r0, _0226BA20 ; =ov12_0226BB90
    // ldr r1, [sp]
    // ldr r2, _0226BA24 ; =0x00009C40
    // bl SysTask_CreateOnMainQueue
    // ldr r1, [sp]
    // str r0, [r1, #0x14]
    // add r0, r1, #0
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0226BA1C: .word ov12_0226EBA0
    // _0226BA20: .word ov12_0226BB90
    // _0226BA24: .word 0x00009C40
    // TODO: decompile
}



void ov12_0226BA28(void) {
    Sprite_DeleteAndFreeResources(*((u32*)r0));
    SysTask_Destroy(*((u32*)(r6 + 0x14)));
    Heap_Free(r6);
}



void ov12_0226BA4C(void) {
    // ldr r4, [sp, #0x24]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r0), (r1 << 0x10), (r2 << 0x10), r4);
    // ldr r2, [sp, #0x10]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r5 + 4)), (r6 << 0x10), (r2 << 0x10), r4);
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r5 + 8)), (r1 << 0x10), (r2 << 0x10), r4);
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r5 + 0xc)), (r1 << 0x10), (r2 << 0x10), r4);
    ManagedSprite_SetAnim(*((u32*)r5), 0);
    ManagedSprite_SetAnim(*((u32*)(r5 + 4)), 1);
    ManagedSprite_SetAnim(*((u32*)(r5 + 8)), 2);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0xc)), 3);
    ManagedSprite_SetDrawFlag(*((u32*)r5), 1);
}



void ov12_0226BAD4(void) {
    // ldr r4, [sp, #0x20]
    // str r4, [sp]
    // ldr r4, [sp, #0x24]
    // str r4, [sp, #4]
    // ldr r4, [sp, #0x28]
    // str r4, [sp, #8]
    // ldr r4, [sp, #0x2c]
    // str r4, [sp, #0xc]
    // ldr r4, [sp, #0x30]
    // str r4, [sp, #0x10]
    // str r4, [sp, #0x14]
    ov12_0226BA4C();
}



void ov12_0226BAFC(void) {
}



void ov12_0226BB1C(void) {
}



void ov12_0226BB40(void) {
    // ldr r3, [sp, #0x10]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r0 + 0x10)), (r1 << 0x10), (r2 << 0x10));
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x10)), r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x10)), 1);
}



void ov12_0226BB68(void) {
}



void ov12_0226BB84(void) {
}



void ov12_0226BB90(void) {
    ManagedSprite_GetDrawFlag(*((u32*)r1));
    ManagedSprite_TickFrame(*((u32*)r6));
    ManagedSprite_GetDrawFlag(*((u32*)(r6 + 0x10)));
    ManagedSprite_TickFrame(*((u32*)(r6 + 0x10)));
}


