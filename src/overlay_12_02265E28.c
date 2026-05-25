/* Decompiled from asm/overlay_12_02265E28.s */
#include "global.h"

void ov12_02265E28(void) {
    NARC_New(8, 5);
    BattleSystem_GetSpriteSystem(*((u32*)(r5 + 4)));
    // str r0, [sp, #0x24]
    BattleSystem_GetSpriteManager(*((u32*)(r5 + 4)));
    // str r0, [sp, #0x20]
    ov12_0223B52C(*((u32*)(r5 + 4)));
    // str r1, [sp, #0x1c]
    // sub r6, #8
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // sub r6, #8
    // str r1, [sp, #0x18]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    SpriteSystem_LoadCharResObjFromOpenNarc(0x00004E2E, 1, r4, *((u16*)(ov12_0226E0A0 + (0x00004E2D << 1))));
    BattleSystem_GetPaletteData(*((u32*)(r5 + 4)));
    // str r4, [sp]
    // add r2, r2, r3
    // ldr r2, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(2, ov12_0226E168, (*((u8*)(r5 + 9)) * 6));
    BattleSystem_GetPaletteData(*((u32*)(r5 + 4)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r2, r2, r3
    PaletteData_LoadNarc(8, *((u16*)((r7 << 1) + ov12_0226E168)), 5);
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    // ldr r3, [sp, #0x1c]
    // str r6, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(1, r4);
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    // ldr r3, [sp, #0x18]
    // str r6, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(1, r4);
    NARC_Delete(r4);
}




void ov12_02265F34(void) {
    BattleSystem_GetSpriteSystem(*((u32*)(r0 + 4)));
    BattleSystem_GetSpriteManager(*((u32*)(r4 + 4)));
    // add r2, r5, r2
    SpriteSystem_NewSprite(r5, r0, (0x34 * *((u8*)(r4 + 8))), *((u8*)(r4 + 8)));
    // str r0, [r4]
    Sprite_TickFrame(*((u32*)r0));
}




void ov12_02265F68(void) {
}




void ov12_02265F7C(void) {
    BattleSystem_GetSpriteManager(*((u32*)(r0 + 4)));
    // sub r5, #8
    SpriteManager_UnloadCharObjById(r0, 0x00004E2E);
    SpriteManager_UnloadPlttObjById(r4, 0x00004E29);
    SpriteManager_UnloadCellObjById(r4, r5);
    SpriteManager_UnloadAnimObjById(r4, r5);
}




void ov12_02265FC4(void) {
}




void ov12_02265FD4(void) {
}




void ov12_02266008(void) {
}



