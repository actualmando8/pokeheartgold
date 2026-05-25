/* Decompiled from asm/overlay_80_02239AF8.s */
#include "global.h"

void ov80_02239AF8(void) {
    // add r0, sp, #0x20
    // str r3, [sp, #0x18]
    GF_AssertFail(*((u16*)(r0 + 0x10)));
    // add r1, sp, #0x20
    // add r4, r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r7, r5, *((u32*)(r4 + 0x14)));
    // str r5, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(1, 2, r6, r7);
    // str r0, [sp]
    // str r3, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r7, r5, *((u32*)(r4 + 0x1c)));
    // str r0, [sp]
    // str r3, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r7, r5, *((u32*)(r4 + 0x20)));
}



void ov80_02239B7C(void) {
    GF_AssertFail();
    // add r4, r1, r0
    SpriteManager_UnloadCharObjById(r5, *((u32*)(r4 + 0x14)));
    SpriteManager_UnloadPlttObjById(r5, *((u32*)(r4 + 0x18)));
    SpriteManager_UnloadCellObjById(r5, *((u32*)(r4 + 0x1c)));
    SpriteManager_UnloadAnimObjById(r5, *((u32*)(r4 + 0x20)));
}



void ov80_02239BB8(void) {
    GF_AssertFail();
    // add r2, r3, r2
    SpriteSystem_NewSprite(r5, r6, (0x34 * r4), ov80_0223DA54);
    Sprite_TickFrame(*((u32*)r0));
}



void ov80_02239BE8(void) {
}


