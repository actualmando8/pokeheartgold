/* Decompiled from asm/overlay_12_0226ADE0.s */
#include "global.h"

void ov12_0226ADE0(void) {
    NARC_New(8, 5);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 2, r5, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r5, r4, r6, (0x55 << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r5, r4, r6, 0x00000155);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r5, r4, r6, 0x00000156);
    NARC_Delete(r6);
}




void ov12_0226AE78(void) {
    SpriteManager_UnloadCharObjById(0x00004FBF);
    SpriteManager_UnloadPlttObjById(r4, 0x00004E45);
    SpriteManager_UnloadCellObjById(r4, 0x00004FB8);
    SpriteManager_UnloadAnimObjById(r4, 0x00004FAD);
}




void ov12_0226AEAC(void) {
}




void ov12_0226AEC8(void) {
}




void ov12_0226AEE0(void) {
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x3c]
    // str r2, [sp, #0x18]
    // str r0, [sp, #0x3c]
    // str r3, [sp, #0x1c]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x1c]
    // str r1, [sp]
    // ldr r3, [sp, #0x38]
    // add r5, #0x1c
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // ldr r3, [sp, #0x18]
    // str r1, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x10]
    // add r1, r7, r1
    // add r5, #0x30
}




void ov12_0226AF48(void) {
    // add r0, #0x30
}




void ov12_0226AF6C(void) {
    // add r5, #0x1c
    // add r6, #0x18
    // add r5, #0x30
}




void ov12_0226AFA4(void) {
    // add r0, #0x30
}




void ov12_0226AFC8(void) {
    // add r5, #0x30
}




void ov12_0226AFEC(void) {
    GF_AssertFail(*((u32*)(r0 + 4)), 1);
    MI_CpuFill8(r5, 0, 0x1c);
    // ldr r1, [sp, #0x18]
    SpriteSystem_NewSprite(r7, ov12_0226EB38);
    // str r0, [r5]
    // ldrsh r2, [r2, r3]
    ManagedSprite_SetPositionXY(*((u32*)r5), (0x16 << 4), ov12_0226EB28, (r4 << 1));
    Sprite_SetAnimCtrlSeq(*((u32*)*((u32*)r5)), 8);
    // ldrsh r2, [r2, r3]
    // mvn r1, r1
    ManagedSprite_SetPositionXY(0x5f, ov12_0226EB20, (r4 << 1));
    Sprite_SetAnimCtrlSeq(*((u32*)*((u32*)r5)), 7);
    Sprite_TickFrame(*((u32*)*((u32*)r5)));
    *((u32*)(r5 + 0xc)) = r6;
    *((u32*)(r5 + 0x10)) = r4;
    *((u8*)(r5 + 0x1a)) = 0;
    SysTask_CreateOnMainQueue(ov12_0226B098, r5, (0x7d << 2));
    *((u32*)(r5 + 4)) = r0;
    PlaySE(0x00000711);
}




void ov12_0226B098(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)r1), *((u8*)(r1 + 0x1a)));
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    *((u32*)(r4 + 0x14)) = (2 << 8);
    *((u8*)(r4 + 0x1a)) = (*((u8*)(r4 + 0x1a)) + 1);
    // sub r1, r1, r0
    *((u32*)(r4 + 0x14)) = *((u32*)(r4 + 0x14));
    *((u32*)(r4 + 0x14)) = (0xe << 0xc);
    *((u8*)(r4 + 0x1a)) = (*((u8*)(r4 + 0x1a)) + 1);
    // ldrsh r2, [r2, r3]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r4), (*((u32*)(r4 + 0x14)) << 8), ov12_0226EB28, (*((u32*)(r4 + 0x10)) << 1));
    // add r1, r1, r0
    *((u32*)(r4 + 0x14)) = r1;
    *((u32*)(r4 + 0x14)) = (2 << 0xc);
    *((u8*)(r4 + 0x1a)) = (*((u8*)(r4 + 0x1a)) + 1);
    // ldrsh r2, [r2, r3]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r4), (*((u32*)(r4 + 0x14)) << 8), ov12_0226EB20, (*((u32*)(r4 + 0x10)) << 1));
    SysTask_Destroy();
    *((u32*)(r4 + 4)) = 0;
}




void ov12_0226B144(void) {
    GF_AssertFail(*((u32*)(r0 + 4)));
    *((u8*)(r5 + 0x1a)) = 0;
    *((u32*)(r5 + 8)) = r4;
    *((u8*)(r5 + 0x1b)) = 4;
    SysTask_CreateOnMainQueue(ov12_0226B180, r5, (0x7d << 2));
    *((u32*)(r5 + 4)) = r0;
}




void ov12_0226B180(void) {
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)r1));
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    *((u32*)(r4 + 0x14)) = (r1 << 8);
    *((u16*)(r4 + 0x18)) = (2 << 0xb);
    // ldrsh r0, [r4, r0]
    // asr r3, r0, #8
    // sub r0, r0, r3
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 0x3f);
    *((u8*)(r4 + 0x1a)) = (*((u8*)(r4 + 0x1a)) + 1);
    *((u8*)(r4 + 0x1b)) = (*((u8*)(r4 + 0x1b)) - 1);
    // ldrsh r0, [r4, r0]
    // asr r1, r0, #8
    // sub r0, r0, r1
    // strh r1, [r0]
    ManagedSprite_SetOamMode(*((u32*)r4), 1);
    *((u8*)(r4 + 0x1a)) = (*((u8*)(r4 + 0x1a)) + 1);
    // sub r1, r1, r0
    *((u32*)(r4 + 0x14)) = *((u32*)(r4 + 0x14));
    // ldrsh r2, [r2, r3]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r4), (*((u32*)(r4 + 0x14)) << 8), ov12_0226EB28, (*((u32*)(r4 + 0x10)) << 1));
    // add r1, r1, r0
    *((u32*)(r4 + 0x14)) = r1;
    // ldrsh r2, [r2, r3]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r4), (r1 << 8), ov12_0226EB20, (*((u32*)(r4 + 0x10)) << 1));
    // ldrsh r2, [r4, r1]
    // add r0, #0xe8
    // sub r0, r2, r0
    *((u16*)(r4 + 0x18)) = 0x18;
    // ldrsh r0, [r4, r1]
    *((u16*)(r4 + 0x18)) = 0;
    thunk_Sprite_SetDrawFlag(*((u32*)*((u32*)r4)), 0);
    *((u8*)(r4 + 0x1a)) = (*((u8*)(r4 + 0x1a)) + 1);
    // ldrsh r0, [r4, r0]
    // asr r1, r0, #8
    // sub r0, r0, r1
    // strh r1, [r0]
    BattleSystem_SetDefaultBlend(0x04000052, (r1 | (0x10 << 8)));
    SysTask_Destroy(r5);
    *((u32*)(r4 + 4)) = 0;
}




void ov12_0226B29C(void) {
    // str r3, [sp]
    // ldr r4, [sp, #0x1c]
    GF_AssertFail(*((u32*)(r0 + 4)), 1);
    MI_CpuFill8(r5, 0, 0x30);
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x28]
    SpriteSystem_NewSprite(ov12_0226EB6C);
    // str r0, [r5]
    // ldr r2, [sp, #0x18]
    // ldrsh r2, [r2, r3]
    ManagedSprite_SetPositionXY(*((u32*)r5), (0x45 << 2), ov12_0226EB30, (r2 << 1));
    // ldr r2, [sp, #0x18]
    // mvn r1, r1
    // ldrsh r2, [r2, r3]
    ManagedSprite_SetPositionXY(0x13, ov12_0226EB18, (r2 << 1));
    // ldr r1, [sp, #0x20]
    Sprite_SetAnimCtrlSeq(*((u32*)*((u32*)r5)));
    Sprite_TickFrame(*((u32*)*((u32*)r5)));
    *((u32*)(r5 + 8)) = r6;
    // add r0, #0x2d
    // strb r4, [r0]
    // ldr r0, [sp, #0x18]
    *((u32*)(r5 + 0xc)) = r5;
    // ldr r0, [sp, #0x20]
    ov12_0226B8C4(r5);
    // add r1, #0x2e
    // strb r0, [r1]
    // ldr r0, [sp, #0x20]
    *((u32*)(r5 + 0x14)) = r7;
    *((u16*)(r5 + 0x2a)) = 0x00000712;
    // add r0, #0xa2
    *((u32*)(r5 + 0x20)) = (r4 << 4);
    // add r0, #0x9c
    // sub r0, r0, r1
    *((u32*)(r5 + 0x20)) = 0x5e;
    // sub r0, r0, r1
    *((u32*)(r5 + 0x24)) = 0x64;
    // add r0, #0x2c
    // strb r1, [r0]
    // ldr r0, [sp]
    // add r0, r4, r0
    *((u16*)(r5 + 0x28)) = ((r4 << 1) + 5);
    SysTask_CreateOnMainQueue(ov12_0226B3B0, r5, 0x000001F5);
    *((u32*)(r5 + 4)) = r0;
    *((u16*)(r5 + 0x28)) = r1;
    SysTask_CreateOnMainQueue(ov12_0226B5B0, r5);
    *((u32*)(r5 + 4)) = r0;
}




void ov12_0226B3B0(void) {
    // add r0, #0x2c
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0226B3CE: ; jump table
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)r1));
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    *((u32*)(r4 + 0x1c)) = (2 << 8);
    // add r0, #0x2c
    // add r0, #0x2c
    // strb r1, [r0]
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x28)) = (0x28 - 1);
    // sub r1, r1, r0
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 0x1c));
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x24)) << 8);
    PlaySE(*((u16*)(r4 + 0x2a)), *((u32*)(r4 + 0x1c)));
    // add r0, #0x2c
    // add r0, #0x2c
    // strb r1, [r0]
    // ldrsh r2, [r2, r3]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r4), (*((u32*)(r4 + 0x1c)) << 8), ov12_0226EB30, (*((u32*)(r4 + 0xc)) << 1));
    // add r1, r1, r0
    *((u32*)(r4 + 0x1c)) = r1;
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x24)) << 8);
    // add r0, #0x2c
    // add r0, #0x2c
    // strb r1, [r0]
    // ldrsh r2, [r2, r3]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r4), (*((u32*)(r4 + 0x1c)) << 8), ov12_0226EB18, (*((u32*)(r4 + 0xc)) << 1));
    Sprite_TickFrame(*((u32*)*((u32*)r4)));
    // ldrsb r0, [r1, r0]
    // strb r0, [r1]
    // add r0, #0x2c
    // add r0, #0x2c
    // strb r1, [r0]
    // ldrsb r0, [r1, r0]
    Sprite_TickFrame(*((u32*)*((u32*)r4)), *((u32*)(r4 + 0x14)));
    Sprite_SetAnimationFrame(*((u32*)*((u32*)r4)), 1);
    Sprite_SetAnimationFrame(*((u32*)r0), 1);
    *((u16*)(r4 + 0x28)) = 0;
    // add r0, #0x2c
    // add r0, #0x2c
    // strb r1, [r0]
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 0x28)) = ((*((u8*)r4) + 1) + 1);
    // ldrsh r0, [r4, r0]
    // add r1, #0x2e
    Sprite_SetAnimCtrlSeq(*((u32*)*((u32*)r4)), *((u8*)r4));
    *((u16*)(r4 + 0x28)) = 0;
    // add r0, #0x2c
    // add r0, #0x2c
    // strb r1, [r0]
    // add r1, r1, r0
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 0x1c));
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x20)) << 8);
    // add r0, #0x2c
    // add r0, #0x2c
    // strb r1, [r0]
    // ldrsh r2, [r2, r3]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r4), (*((u32*)(r4 + 0x1c)) << 8), ov12_0226EB30, (*((u32*)(r4 + 0xc)) << 1));
    // sub r1, r1, r0
    *((u32*)(r4 + 0x1c)) = r1;
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x20)) << 8);
    // add r0, #0x2c
    // add r0, #0x2c
    // strb r1, [r0]
    // ldrsh r2, [r2, r3]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r4), (*((u32*)(r4 + 0x1c)) << 8), ov12_0226EB18, (*((u32*)(r4 + 0xc)) << 1));
    Sprite_TickFrame(*((u32*)*((u32*)r4)));
    Sprite_SetAnimationFrame(*((u32*)*((u32*)r4)), 0);
    SysTask_Destroy(r5);
    *((u32*)(r4 + 4)) = 0;
}




void ov12_0226B5B0(void) {
    // add r1, #0x2c
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)r1), *((u8*)r1));
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    *((u32*)(r4 + 0x1c)) = (2 << 8);
    Sprite_SetAnimationFrame(*((u32*)*((u32*)r4)), 0);
    // add r0, #0x2c
    // add r0, #0x2c
    // strb r1, [r0]
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x28)) = (0x28 - 1);
    // sub r1, r1, r0
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 0x1c));
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x20)) << 8);
    // add r0, #0x2c
    // add r0, #0x2c
    // strb r1, [r0]
    // ldrsh r2, [r2, r3]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r4), (*((u32*)(r4 + 0x1c)) << 8), ov12_0226EB30, (*((u32*)(r4 + 0xc)) << 1));
    // add r1, r1, r0
    *((u32*)(r4 + 0x1c)) = r1;
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x20)) << 8);
    // add r0, #0x2c
    // add r0, #0x2c
    // strb r1, [r0]
    // ldrsh r2, [r2, r3]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r4), (*((u32*)(r4 + 0x1c)) << 8), ov12_0226EB18, (*((u32*)(r4 + 0xc)) << 1));
    SysTask_Destroy();
    *((u32*)(r4 + 4)) = 0;
}




void ov12_0226B694(void) {
    GF_AssertFail(*((u32*)(r0 + 4)));
    // add r0, #0x2c
    // strb r1, [r0]
    *((u32*)(r5 + 0x18)) = r4;
    // add r0, r6, r0
    *((u16*)(r5 + 0x28)) = (r6 << 1);
    // add r0, #0x2f
    // strb r1, [r0]
    SysTask_CreateOnMainQueue(ov12_0226B6F8, r5, 0x000001F5);
    *((u32*)(r5 + 4)) = r0;
    *((u16*)(r5 + 0x28)) = r1;
    // add r0, #0x2f
    // strb r1, [r0]
    SysTask_CreateOnMainQueue(ov12_0226B82C, r5);
    *((u32*)(r5 + 4)) = r0;
}




void ov12_0226B6F8(void) {
    // ldrsh r1, [r1, r0]
    // add r0, #0x2c
    // strb r1, [r0]
    // add r0, #0x2c
    ManagedSprite_GetOamMode(*((u32*)r1), 0x64);
    ManagedSprite_SetOamMode(*((u32*)r4), 1);
    // add r0, #0x2c
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)r4));
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    *((u32*)(r4 + 0x1c)) = (2 << 8);
    // add r0, #0x2c
    // add r0, #0x2c
    // strb r1, [r0]
    // add r0, #0x2f
    // add r0, #0x2f
    // add r4, #0x2f
    // strb r0, [r4]
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x28)) = (0x28 - 1);
    // sub r1, r1, r0
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 0x1c));
    // ldrsh r2, [r2, r3]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r4), (*((u32*)(r4 + 0x1c)) << 8), ov12_0226EB30, (*((u32*)(r4 + 0xc)) << 1));
    // add r1, r1, r0
    *((u32*)(r4 + 0x1c)) = r1;
    // ldrsh r2, [r2, r3]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r4), (r1 << 8), ov12_0226EB18, (*((u32*)(r4 + 0xc)) << 1));
    // add r0, #0x2c
    // add r0, #0x2c
    // strb r1, [r0]
    Sprite_TickFrame(*((u32*)*((u32*)r4)), (*((u8*)r4) + 1));
    thunk_Sprite_SetDrawFlag(*((u32*)*((u32*)r4)), 0);
    SysTask_Destroy(r5);
    *((u32*)(r4 + 4)) = 0;
}




void ov12_0226B82C(void) {
    // ldrsh r0, [r1, r0]
    // add r0, #0x2c
    // strb r1, [r0]
    // add r0, #0x2c
    // add r0, #0x2c
    // add r4, #0x2c
    // strb r0, [r4]
}




void ov12_0226B884(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0226B894: ; jump table
}




void ov12_0226B8C4(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0226B8D4: ; jump table
}



