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
    PlayerAvatar_GetFacingDirection(*((u32*)(r0 + 0x40)));
    PlayerAvatar_GetXCoord(*((u32*)(r6 + 0x40)));
    // str r0, [r4]
    PlayerAvatar_GetZCoord(*((u32*)(r6 + 0x40)));
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
    PlayerAvatar_GetMapObject();
    MapObject_GetPositionVectorYCoordUInt();
    MapObject_GetPositionVectorYCoordUInt(r5);
}



void FieldSystem_GetFacingObject(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    _GetCoordsOfFacingTile();
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    GetMetatileBehavior(r5);
    sub_0205B700();
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
    MapObjectManager_GetFirstObjectWithXAndZ(*((u32*)(r5 + 0x3c)), 0);
    // str r0, [r6]
}



BOOL sub_0203DC64(void) {
    FieldSystem_GetFacingObject();
    MapObject_CheckFlag19Disabled(*((u32*)r4));
    sub_0203DBD4(*((u32*)(r5 + 0x40)), *((u32*)r4));
}



void GetInteractedBackgroundEventScript(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r1, sp, #0xc
    // add r2, sp, #8
    // add r6, r0, #0
    // bl _GetCoordsOfFacingTile
    // ldr r0, [sp, #4]
    // mov r7, #0
    // cmp r0, #0
    // ble _0203DD04
    // ldr r4, [sp]
    // add r5, r4, #0
    // ldr r1, [sp, #0xc]
    // ldr r0, [r4, #4]
    // cmp r1, r0
    // bne _0203DCF8
    // ldr r1, [sp, #8]
    // ldr r0, [r4, #8]
    // cmp r1, r0
    // bne _0203DCF8
    // ldrh r0, [r4, #2]
    // cmp r0, #2
    // bne _0203DCDE
    // add r0, r6, #0
    // add r1, r5, #0
    // bl BgEventIsUncollectedHiddenItem
    // cmp r0, #1
    // bne _0203DCF8
    // mov r0, #0x14
    // add r1, r7, #0
    // mul r1, r0
    // ldr r0, [sp]
    // add sp, #0x10
    // ldrh r0, [r0, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // add r1, r5, #0
    // bl BgEventDirectionIsCompatibleWithPlayerFacing
    // cmp r0, #1
    // bne _0203DCF8
    // mov r0, #0x14
    // add r1, r7, #0
    // mul r1, r0
    // ldr r0, [sp]
    // add sp, #0x10
    // ldrh r0, [r0, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // add r7, r7, #1
    // add r4, #0x14
    // add r5, #0x14
    // cmp r7, r0
    // blt _0203DCAE
    // ldr r0, _0203DD0C ; =0x0000FFFF
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0203DD0C: .word 0x0000FFFF
    // TODO: decompile
}



s32 BgEventIsUncollectedHiddenItem(void) {
    // ldrh r0, [r1]
    HiddenItemScriptNoToFlagId(0);
    FieldSystem_FlagCheck(r4, r0);
}



s32 BgEventDirectionIsCompatibleWithPlayerFacing(void) {
    PlayerAvatar_GetFacingDirection(*((u32*)(1 + 0x40)), *((u16*)(r1 + 0x10)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0203DD60: ; jump table
}



void sub_0203DDA4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5, #0x40]
    // add r6, r1, #0
    // add r4, r2, #0
    // bl PlayerAvatar_GetFacingDirection
    // cmp r0, #0
    // beq _0203DDBE
    // add sp, #8
    // ldr r0, _0203DE00 ; =0x0000FFFF
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r1, sp, #4
    // add r2, sp, #0
    // bl _GetCoordsOfFacingTile
    // mov r0, #0
    // cmp r4, #0
    // ble _0203DDF8
    // ldr r2, [sp, #4]
    // ldr r3, [sp]
    // add r1, r6, #0
    // ldr r5, [r1, #4]
    // cmp r2, r5
    // bne _0203DDF0
    // ldr r5, [r1, #8]
    // cmp r3, r5
    // bne _0203DDF0
    // ldrh r5, [r1, #2]
    // cmp r5, #1
    // bne _0203DDF0
    // mov r1, #0x14
    // mul r1, r0
    // add sp, #8
    // ldrh r0, [r6, r1]
    // pop {r4, r5, r6, pc}
    // add r0, r0, #1
    // add r1, #0x14
    // cmp r0, r4
    // blt _0203DDD4
    // ldr r0, _0203DE00 ; =0x0000FFFF
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _0203DE00: .word 0x0000FFFF
    // TODO: decompile
}



void sub_0203DE04(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r0, [sp]
    // ldr r0, [r0, #0x40]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // bl PlayerAvatar_GetXCoord
    // add r6, r0, #0
    // ldr r0, [sp]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetZCoord
    // add r4, r0, #0
    // ldr r0, [sp, #8]
    // mov r7, #0
    // cmp r0, #0
    // ble _0203DE68
    // ldr r5, [sp, #4]
    // ldrh r1, [r5, #2]
    // cmp r6, r1
    // blt _0203DE5E
    // ldrh r0, [r5, #6]
    // add r0, r1, r0
    // cmp r6, r0
    // bge _0203DE5E
    // ldrh r1, [r5, #4]
    // cmp r4, r1
    // blt _0203DE5E
    // ldrh r0, [r5, #8]
    // add r0, r1, r0
    // cmp r4, r0
    // bge _0203DE5E
    // ldrh r1, [r5, #0xe]
    // ldr r0, [sp]
    // bl FieldSystem_VarGet
    // ldrh r1, [r5, #0xc]
    // cmp r1, r0
    // bne _0203DE5E
    // ldr r0, [sp, #4]
    // lsl r1, r7, #4
    // add sp, #0xc
    // ldrh r0, [r0, r1]
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #8]
    // add r7, r7, #1
    // add r5, #0x10
    // cmp r7, r0
    // blt _0203DE2A
    // ldr r0, _0203DE70 ; =0x0000FFFF
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0203DE70: .word 0x0000FFFF
    // TODO: decompile
}


