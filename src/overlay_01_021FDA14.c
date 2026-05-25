/* Decompiled from asm/overlay_01_021FDA14.s */
#include "global.h"

void ov01_021FDA14(void) {
}




void ov01_021FDA30(void) {
}




void ov01_021FDA40(void) {
}




void ov01_021FDA5C(void) {
}




void ov01_021FDA74(void) {
    MapObject_GetFieldSystem();
    // str r0, [sp, #8]
    ov01_021F146C(r5);
    // str r0, [sp, #0xc]
    ov01_021F1450(1);
    // str r0, [sp, #0x10]
    // add r1, sp, #0x18
    // str r5, [sp, #0x14]
    MapObject_CopyPositionVector(r5);
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r2, sp, #0x18
    ov01_021F1620(ov01_02208F88, r4);
}




void ov01_021FDAC0(void) {
    // add r2, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r4]
    // add r2, sp, #0
    // add r1, sp, #0
}




void ov01_021FDB34(void) {
}




void ov01_021FDB44(void) {
    // add r1, r1, r0
    // neg r0, r0
    // neg r0, r0
    // add r2, sp, #0
    // add r1, sp, #0
}




void ov01_021FDBCC(void) {
    // add r1, sp, #0xc
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0
    // add r1, sp, #0
    // add r1, #0x28
}




void ov01_021FDC7C(void) {
    // add r2, sp, #8
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r1, sp, #0x20
    MapObject_CopyFacingVector(r1, ov01_02208FC8);
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #4]
    MapObject_GetID(r6);
    MapObject_GetSpriteID(r6);
    MapObject_GetFacingDirection(r6);
    // add r1, r1, r0
    // ldr r0, [sp, #0x28]
    // sub r7, r1, r0
    // ldr r7, [sp, #0x28]
    // ldr r7, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    _s32_div_f(((2 << 0xa) << 1), 6);
    // neg r0, r0
    // str r0, [sp]
    MapObject_GetID(r6);
    PlayerAvatar_GetMapObject(*((u32*)(*((u32*)(r5 + 0x14)) + 0x40)));
    MapObject_GetSpriteID();
    // str r0, [sp]
    MapObject_CopyPositionVector(r6, r4);
    sub_0206121C(*((u32*)(r5 + 0x14)), r4);
    // ldr r1, [sp, #4]
    // add r1, r2, r1
    // str r1, [r4]
    // sub r1, r7, r1
    // add r1, r2, r1
    *((u32*)(r4 + 8)) = (7 << 0xc);
    // add r0, sp, #8
    // sub r0, r2, r0
    *((u32*)(r4 + 4)) = *((u32*)(*((u32*)(r5 + 0x10)) + (*((u32*)(r5 + 0x10)) << 2)));
    // ldr r0, [sp]
    // add r0, r1, r0
    *((u32*)(r4 + 4)) = *((u32*)(*((u32*)(r5 + 0x10)) + (*((u32*)(r5 + 0x10)) << 2)));
}




void ov01_021FDD48(void) {
    // add r2, sp, #0
    // str r0, [sp]
    // add r1, sp, #0x28
    // add r1, sp, #0
    // add r2, sp, #0x28
}




void ov01_021FDD94(void) {
    // add r6, #0x10
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [sp]
    // add r1, sp, #0x28
    // add r1, sp, #0
    // add r2, sp, #0x28
}




void ov01_021FDE08(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r3, #0x50
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    sub_0206121C(*((u32*)(r0 + 4)), r1, r1, r0);
    // sub r1, r2, r1
    *((u32*)(r4 + 8)) = (7 << 0xc);
    *((u32*)(r4 + 4)) = 0;
    // add r0, sp, #0
    // sub r0, r2, r0
    *((u32*)(r4 + 4)) = *((u32*)(*((u32*)r5) + (*((u32*)r5) << 2)));
}




void ov01_021FDE64(void) {
    ov01_021F1468();
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    ov01_021F1450(r5, 1);
    // str r0, [sp, #0x10]
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r6, [sp, #0x3c]
    // add r0, sp, #8
    // str r0, [sp]
    // ldr r0, [sp, #0x5c]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x58]
    ov01_021F1620(r5, ov01_02208F9C, r7);
}




void ov01_021FDEAC(void) {
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r4]
    // add r1, #0x50
    // add r1, sp, #0
    // add r1, sp, #0
}




void ov01_021FDF14(void) {
}




void ov01_021FDF20(void) {
    // add r2, r2, r0
    // neg r0, r0
    // neg r0, r0
    // add r1, sp, #0
    // add r1, sp, #0
}




void ov01_021FDF64(void) {
}




void ov01_021FDF88(void) {
    MapObject_GetFieldSystem();
    // str r0, [sp, #8]
    ov01_021F146C(r5);
    // str r0, [sp, #0xc]
    ov01_021F1450(1);
    // str r0, [sp, #0x10]
    // add r1, sp, #0x18
    // str r5, [sp, #0x14]
    MapObject_CopyPositionVector(r5);
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r2, sp, #0x18
    ov01_021F1620(ov01_02208F74, r4);
}




void ov01_021FDFD4(void) {
    sub_02068D98();
    // add r2, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    sub_02068D90(r5, r4, r0);
    *((u32*)(r4 + 0x10)) = r0;
    MapObject_GetID(*((u32*)(r4 + 0x20)));
    // str r0, [r4]
    MapObject_GetMapID(*((u32*)(r4 + 0x20)));
    *((u32*)(r4 + 4)) = r0;
    MapObject_GetSpriteID(*((u32*)(r4 + 0x20)));
    *((u32*)(r4 + 8)) = r0;
    *((u32*)(r4 + 0x28)) = (1 << 0xc);
    *((u32*)(r4 + 0x2c)) = (1 << 0xc);
    *((u32*)(r4 + 0x30)) = (1 << 0xc);
    *((u32*)(r4 + 0x34)) = 0x40;
    *((u32*)(r4 + 0x34)) = 0;
    // add r2, sp, #0
    ov01_021FDC7C(r4, *((u32*)(r4 + 0x20)));
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // add r1, sp, #0
    sub_02068DA8(r5);
    ov01_021FE190(r5, r4);
}




void ov01_021FE058(void) {
    MapObject_GetSpriteID(*((u32*)(r1 + 0x20)));
    sub_0205F0A8(r6, *((u32*)r4), *((u32*)(r4 + 4)));
    MapObject_CheckFlag24(r6);
    ov01_021F1640(r5);
    // add r1, r1, r0
    *((u32*)(r4 + 0x28)) = *((u32*)(r4 + 0x28));
    *((u32*)(r4 + 0x28)) = (0x12 << 8);
    // neg r0, r0
    *((u32*)(r4 + 0x34)) = *((u32*)(r4 + 0x34));
    *((u32*)(r4 + 0x28)) = (0xe << 8);
    // neg r0, r0
    *((u32*)(r4 + 0x34)) = *((u32*)(r4 + 0x34));
    // add r2, sp, #0
    ov01_021FDC7C(r4, r6);
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // add r1, sp, #0
    sub_02068DA8(r5);
    ov01_021FE190(r5, r4);
}




void ov01_021FE0EC(void) {
    // add r1, sp, #0
    // ldr r1, [sp, #8]
    // sub r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
    // add r1, #0x28
}




void ov01_021FE190(void) {
    // add r2, sp, #0
    // str r0, [sp]
    // add r3, sp, #0
    // add r1, sp, #0x28
    // add r1, sp, #0
    // add r2, sp, #0x28
}



