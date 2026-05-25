/* Decompiled from asm/unk_0203DB6C.s */
#include "global.h"

void sub_0203DB6C(void) {
    // bx lr
    // TODO: decompile
}




void sub_0203DB70(void) {
    // bx lr
    // TODO: decompile
}




u8 sub_0203DB74(void) {
}




u8 _GetCoordsOfFacingTile(void) {
    // str r0, [r4]
    // str r0, [r5]
    // add r0, r7, r7
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0203DBA8: ; jump table
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r4]
}




s32 sub_0203DBD4(void) {
}




void FieldSystem_GetFacingObject(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0203DC2C: ; jump table
    // ldr r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // str r0, [r6]
}




BOOL sub_0203DC64(void) {
}




u16 GetInteractedBackgroundEventScript(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r1, sp, #0xc
    // add r2, sp, #8
    _GetCoordsOfFacingTile();
    // ldr r0, [sp, #4]
    // ldr r4, [sp]
    // ldr r1, [sp, #0xc]
    // ldr r1, [sp, #8]
    BgEventIsUncollectedHiddenItem(r6, r4);
    // ldr r0, [sp]
    BgEventDirectionIsCompatibleWithPlayerFacing(r6, r5);
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // add r4, #0x14
    // add r5, #0x14
}




s32 BgEventIsUncollectedHiddenItem(void) {
    // ldrh r0, [r1]
}




s32 BgEventDirectionIsCompatibleWithPlayerFacing(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0203DD60: ; jump table
}




u16 sub_0203DDA4(void) {
    PlayerAvatar_GetFacingDirection(*((u32*)(r0 + 0x40)));
    // add r1, sp, #4
    // add r2, sp, #0
    _GetCoordsOfFacingTile(r5);
    // ldr r2, [sp, #4]
    // ldr r3, [sp]
    // add r1, #0x14
}




u16 sub_0203DE04(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    PlayerAvatar_GetXCoord(*((u32*)(r0 + 0x40)));
    // ldr r0, [sp]
    PlayerAvatar_GetZCoord(*((u32*)(r0 + 0x40)));
    // ldr r0, [sp, #8]
    // ldr r5, [sp, #4]
    // add r0, r1, r0
    // add r0, r1, r0
    // ldr r0, [sp]
    FieldSystem_VarGet(*((u16*)(r5 + 8)), *((u16*)(r5 + 0xe)));
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r5, #0x10
}



