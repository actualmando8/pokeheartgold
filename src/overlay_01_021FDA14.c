/* Decompiled from asm/overlay_01_021FDA14.s */
#include "global.h"

void ov01_021FDA14(void) {
    ov01_021F1430(4, 0, 0);
    ov01_021FDA40();
}


void ov01_021FDA30(void) {
    ov01_021FDA5C();
    ov01_021F1448(r4);
}


void ov01_021FDA40(void) {
    ov01_021F18D4(2, 0x23);
    ov01_021F18D4(0xd, 0x69);
}


void ov01_021FDA5C(void) {
    ov01_021F18FC(2);
    ov01_021F18FC(0xd);
}


void ov01_021FDA74(void) {
    // push {r4, r5, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // add r4, r1, #0
    // bl MapObject_GetFieldSystem
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl ov01_021F146C
    // mov r1, #1
    // str r0, [sp, #0xc]
    // bl ov01_021F1450
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // add r1, sp, #0x18
    // str r5, [sp, #0x14]
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // mov r1, #2
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, _021FDABC ; =ov01_02208F88
    // add r2, sp, #0x18
    // add r3, r4, #0
    // bl ov01_021F1620
    // add sp, #0x24
    // pop {r4, r5, pc}
    // nop
    // _021FDABC: .word ov01_02208F88
    // TODO: decompile
}


void ov01_021FDAC0(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // bl sub_02068D98
    // add r2, r4, #0
    // add r3, r0, #0
    // add r2, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r5, #0
    // bl sub_02068D90
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #0x20]
    // bl MapObject_GetID
    // str r0, [r4]
    // ldr r0, [r4, #0x20]
    // bl MapObject_GetMapID
    // str r0, [r4, #4]
    // ldr r0, [r4, #0x20]
    // bl MapObject_GetSpriteID
    // str r0, [r4, #8]
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // str r0, [r4, #0x30]
    // mov r0, #0x40
    // str r0, [r4, #0x34]
    // ldr r0, [r4, #0x10]
    // cmp r0, #2
    // bne _021FDB12
    // mov r0, #0
    // str r0, [r4, #0x34]
    // ldr r1, [r4, #0x20]
    // add r0, r4, #0
    // add r2, sp, #0
    // bl ov01_021FDC7C
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DA8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FDD48
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}


void ov01_021FDB34(void) {
    sub_02023DA4();
}


void ov01_021FDB44(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldr r6, [r4, #0x20]
    // add r5, r0, #0
    // add r0, r6, #0
    // bl MapObject_GetSpriteID
    // ldr r1, [r4, #8]
    // cmp r1, r0
    // bne _021FDB72
    // ldr r1, [r4]
    // ldr r2, [r4, #4]
    // add r0, r6, #0
    // bl sub_0205F0A8
    // cmp r0, #0
    // beq _021FDB72
    // add r0, r6, #0
    // bl MapObject_CheckFlag24
    // cmp r0, #0
    // bne _021FDB7C
    // add r0, r5, #0
    // bl ov01_021F1640
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // ldr r1, [r4, #0x28]
    // ldr r0, [r4, #0x34]
    // add r1, r1, r0
    // mov r0, #0x12
    // lsl r0, r0, #8
    // str r1, [r4, #0x28]
    // cmp r1, r0
    // blt _021FDB96
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #0x34]
    // neg r0, r0
    // str r0, [r4, #0x34]
    // b _021FDBA6
    // mov r0, #0xe
    // lsl r0, r0, #8
    // cmp r1, r0
    // bgt _021FDBA6
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #0x34]
    // neg r0, r0
    // str r0, [r4, #0x34]
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, sp, #0
    // bl ov01_021FDC7C
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DA8
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // bne _021FDBC6
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FDD48
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FDBCC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r1, #0
    // ldr r6, [r5, #0x20]
    // add r7, r0, #0
    // add r0, r6, #0
    // mov r4, #0
    // bl MapObject_GetSpriteID
    // ldr r1, [r5, #8]
    // cmp r1, r0
    // bne _021FDBFC
    // ldr r1, [r5]
    // ldr r2, [r5, #4]
    // add r0, r6, #0
    // bl sub_0205F0A8
    // cmp r0, #0
    // beq _021FDBFC
    // add r0, r6, #0
    // bl MapObject_CheckFlag24
    // cmp r0, #0
    // bne _021FDC06
    // add r0, r7, #0
    // bl ov01_021F1640
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // beq _021FDC78
    // ldr r0, [r5, #0x20]
    // add r1, sp, #0xc
    // bl MapObject_CopyFacingVector
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // beq _021FDC1C
    // mov r4, #1
    // add r0, r6, #0
    // bl MapObject_CheckVisible
    // cmp r0, #1
    // bne _021FDC28
    // mov r4, #1
    // cmp r4, #0
    // ldr r0, [r5, #0x24]
    // beq _021FDC36
    // mov r1, #0
    // bl sub_02023EA4
    // b _021FDC3C
    // mov r1, #1
    // bl sub_02023EA4
    // add r0, r7, #0
    // add r1, sp, #0
    // bl sub_02068DB8
    // ldr r0, [r5, #0x24]
    // add r1, sp, #0
    // bl sub_02023E50
    // add r1, r5, #0
    // ldr r0, [r5, #0x24]
    // add r1, #0x28
    // bl sub_02023E78
    // ldr r0, [r5, #0x20]
    // bl ov01_021F72DC
    // add r4, r0, #0
    // bl sub_02023EF4
    // add r1, r0, #0
    // ldr r0, [r5, #0x24]
    // bl sub_02023EE0
    // add r0, r4, #0
    // bl sub_02023F30
    // add r1, r0, #0
    // ldr r0, [r5, #0x24]
    // bl sub_02023F1C
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FDC7C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // ldr r3, _021FDD44 ; =ov01_02208FC8
    // add r4, r2, #0
    // add r2, sp, #8
    // add r5, r0, #0
    // add r6, r1, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r6, #0
    // add r1, sp, #0x20
    // bl MapObject_CopyFacingVector
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // bl MapObject_GetID
    // cmp r0, #0xff
    // bne _021FDCD2
    // add r0, r6, #0
    // bl MapObject_GetSpriteID
    // cmp r0, #0xbc
    // bne _021FDCD2
    // add r0, r6, #0
    // bl MapObject_GetFacingDirection
    // mov r1, #2
    // lsl r1, r1, #0xa
    // cmp r0, #1
    // bne _021FDCCE
    // lsl r0, r1, #1
    // add r1, r1, r0
    // ldr r0, [sp, #0x28]
    // sub r7, r1, r0
    // b _021FDCD4
    // ldr r7, [sp, #0x28]
    // b _021FDCD4
    // ldr r7, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // mov r1, #6
    // bl _s32_div_f
    // neg r0, r0
    // str r0, [sp]
    // add r0, r6, #0
    // bl MapObject_GetID
    // cmp r0, #0xfd
    // bne _021FDCFE
    // ldr r0, [r5, #0x14]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetMapObject
    // bl MapObject_GetSpriteID
    // cmp r0, #0xbc
    // bne _021FDCFE
    // mov r0, #0
    // str r0, [sp]
    // add r0, r6, #0
    // add r1, r4, #0
    // bl MapObject_CopyPositionVector
    // ldr r0, [r5, #0x14]
    // add r1, r4, #0
    // bl sub_0206121C
    // ldr r2, [r4]
    // ldr r1, [sp, #4]
    // add r1, r2, r1
    // str r1, [r4]
    // mov r1, #7
    // lsl r1, r1, #0xc
    // ldr r2, [r4, #8]
    // sub r1, r7, r1
    // add r1, r2, r1
    // str r1, [r4, #8]
    // cmp r0, #0
    // bne _021FDD2A
    // mov r0, #0
    // b _021FDD36
    // ldr r0, [r5, #0x10]
    // ldr r2, [r4, #4]
    // lsl r1, r0, #2
    // add r0, sp, #8
    // ldr r0, [r0, r1]
    // sub r0, r2, r0
    // str r0, [r4, #4]
    // ldr r1, [r4, #4]
    // ldr r0, [sp]
    // add r0, r1, r0
    // str r0, [r4, #4]
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _021FDD44: .word ov01_02208FC8
    // TODO: decompile
}


void ov01_021FDD48(void) {
    // push {r4, r5, lr}
    // sub sp, #0x34
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x20]
    // bl MapObject_GetManager
    // ldr r1, [r4, #8]
    // add r2, sp, #0
    // bl ov01_021F9744
    // cmp r0, #0
    // beq _021FDD8E
    // ldr r0, [r4, #0x20]
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021FDD8E
    // ldr r0, [r4, #0x18]
    // mov r1, #2
    // bl ov01_021F18F0
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, sp, #0x28
    // bl sub_02068DB8
    // ldr r0, [r4, #0x18]
    // add r1, sp, #0
    // add r2, sp, #0x28
    // bl ov01_021F16EC
    // str r0, [r4, #0x24]
    // mov r0, #1
    // str r0, [r4, #0xc]
    // add sp, #0x34
    // pop {r4, r5, pc}
    // TODO: decompile
}


void ov01_021FDD94(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x34
    // add r4, r1, #0
    // add r6, r4, #0
    // add r5, r0, #0
    // add r6, #0x10
    // add r3, sp, #0
    // mov r2, #5
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021FDDA4
    // ldr r0, [r4, #8]
    // mov r1, #2
    // bl ov01_021F18F0
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, sp, #0x28
    // bl sub_02068DB8
    // ldr r0, [r4, #8]
    // add r1, sp, #0
    // add r2, sp, #0x28
    // bl ov01_021F16EC
    // str r0, [r4, #0x3c]
    // ldr r5, [r4, #0x38]
    // add r0, r5, #0
    // bl sub_02023EF4
    // add r1, r0, #0
    // ldr r0, [r4, #0x3c]
    // bl sub_02023EE0
    // add r0, r5, #0
    // bl sub_02023F70
    // add r1, r0, #0
    // ldr r0, [r4, #0x3c]
    // bl sub_02023F40
    // add r0, r5, #0
    // bl sub_02023F30
    // add r1, r0, #0
    // ldr r0, [r4, #0x3c]
    // bl sub_02023F1C
    // ldr r0, [r4, #0x3c]
    // mov r1, #0
    // bl sub_02023F04
    // ldr r0, [r4, #0x3c]
    // bl sub_02023FC0
    // add sp, #0x34
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FDE08(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // ldr r3, _021FDE60 ; =ov01_02208FB0
    // add r5, r0, #0
    // add r4, r1, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // add r3, r5, #0
    // stmia r2!, {r0, r1}
    // add r3, #0x50
    // ldmia r3!, {r0, r1}
    // add r2, r4, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r1, r4, #0
    // str r0, [r2]
    // ldr r0, [r5, #4]
    // bl sub_0206121C
    // mov r1, #7
    // ldr r2, [r4, #8]
    // lsl r1, r1, #0xc
    // sub r1, r2, r1
    // str r1, [r4, #8]
    // cmp r0, #0
    // bne _021FDE4C
    // mov r0, #0
    // add sp, #0x18
    // str r0, [r4, #4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5]
    // ldr r2, [r4, #4]
    // lsl r1, r0, #2
    // add r0, sp, #0
    // ldr r0, [r0, r1]
    // sub r0, r2, r0
    // str r0, [r4, #4]
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // nop
    // _021FDE60: .word ov01_02208FB0
    // TODO: decompile
}


void ov01_021FDE64(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov01_021F1468
    // str r0, [sp, #8]
    // add r0, r5, #0
    // mov r1, #1
    // str r5, [sp, #0xc]
    // bl ov01_021F1450
    // str r0, [sp, #0x10]
    // add r3, sp, #0x14
    // mov r2, #5
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021FDE86
    // str r6, [sp, #0x3c]
    // add r0, sp, #8
    // str r0, [sp]
    // ldr r0, [sp, #0x5c]
    // ldr r1, _021FDEA8 ; =ov01_02208F9C
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x58]
    // add r0, r5, #0
    // add r2, r7, #0
    // bl ov01_021F1620
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FDEA8: .word ov01_02208F9C
    // TODO: decompile
}


void ov01_021FDEAC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02068D98
    // add r6, r0, #0
    // add r3, r4, #4
    // mov r2, #7
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021FDEBE
    // add r0, r5, #0
    // bl sub_02068D90
    // str r0, [r4]
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x40]
    // str r0, [r4, #0x44]
    // str r0, [r4, #0x48]
    // mov r0, #0x40
    // str r0, [r4, #0x4c]
    // ldr r0, [r4]
    // cmp r0, #2
    // bne _021FDEE6
    // mov r0, #0
    // str r0, [r4, #0x4c]
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x50
    // bl sub_02068DB8
    // add r0, r4, #0
    // add r1, sp, #0
    // bl ov01_021FDE08
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DA8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FDD94
    // add r0, r5, #0
    // bl sub_02068D18
    // mov r0, #1
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FDF14(void) {
    sub_02023DA4();
}


void ov01_021FDF20(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r2, [r1, #0x40]
    // ldr r0, [r1, #0x4c]
    // add r2, r2, r0
    // mov r0, #0x12
    // lsl r0, r0, #8
    // str r2, [r1, #0x40]
    // cmp r2, r0
    // blt _021FDF40
    // str r0, [r1, #0x40]
    // ldr r0, [r1, #0x4c]
    // neg r0, r0
    // str r0, [r1, #0x4c]
    // b _021FDF50
    // mov r0, #0xe
    // lsl r0, r0, #8
    // cmp r2, r0
    // bgt _021FDF50
    // str r0, [r1, #0x40]
    // ldr r0, [r1, #0x4c]
    // neg r0, r0
    // str r0, [r1, #0x4c]
    // add r0, r1, #0
    // add r1, sp, #0
    // bl ov01_021FDE08
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_02068DA8
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov01_021FDF64(void) {
    sub_02068DB8();
    sub_02023E50(*((u32*)(r4 + 0x3c)));
    sub_02023E78(*((u32*)(r4 + 0x3c)), r4);
}


void ov01_021FDF88(void) {
    // push {r4, r5, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // add r4, r1, #0
    // bl MapObject_GetFieldSystem
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl ov01_021F146C
    // mov r1, #1
    // str r0, [sp, #0xc]
    // bl ov01_021F1450
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // add r1, sp, #0x18
    // str r5, [sp, #0x14]
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // mov r1, #2
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, _021FDFD0 ; =ov01_02208F74
    // add r2, sp, #0x18
    // add r3, r4, #0
    // bl ov01_021F1620
    // add sp, #0x24
    // pop {r4, r5, pc}
    // nop
    // _021FDFD0: .word ov01_02208F74
    // TODO: decompile
}


void ov01_021FDFD4(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // bl sub_02068D98
    // add r2, r4, #0
    // add r3, r0, #0
    // add r2, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r5, #0
    // bl sub_02068D90
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #0x20]
    // bl MapObject_GetID
    // str r0, [r4]
    // ldr r0, [r4, #0x20]
    // bl MapObject_GetMapID
    // str r0, [r4, #4]
    // ldr r0, [r4, #0x20]
    // bl MapObject_GetSpriteID
    // str r0, [r4, #8]
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // str r0, [r4, #0x30]
    // mov r0, #0x40
    // str r0, [r4, #0x34]
    // ldr r0, [r4, #0x10]
    // cmp r0, #2
    // beq _021FE026
    // cmp r0, #5
    // bne _021FE02A
    // mov r0, #0
    // str r0, [r4, #0x34]
    // ldr r1, [r4, #0x20]
    // add r0, r4, #0
    // add r2, sp, #0
    // bl ov01_021FDC7C
    // ldr r1, [sp, #4]
    // ldr r0, _021FE054 ; =0x00000514
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DA8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FE190
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _021FE054: .word 0x00000514
    // TODO: decompile
}


void ov01_021FE058(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldr r6, [r4, #0x20]
    // add r5, r0, #0
    // add r0, r6, #0
    // bl MapObject_GetSpriteID
    // ldr r1, [r4, #8]
    // cmp r1, r0
    // bne _021FE086
    // ldr r1, [r4]
    // ldr r2, [r4, #4]
    // add r0, r6, #0
    // bl sub_0205F0A8
    // cmp r0, #0
    // beq _021FE086
    // add r0, r6, #0
    // bl MapObject_CheckFlag24
    // cmp r0, #0
    // bne _021FE090
    // add r0, r5, #0
    // bl ov01_021F1640
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // ldr r1, [r4, #0x28]
    // ldr r0, [r4, #0x34]
    // add r1, r1, r0
    // mov r0, #0x12
    // lsl r0, r0, #8
    // str r1, [r4, #0x28]
    // cmp r1, r0
    // blt _021FE0AA
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #0x34]
    // neg r0, r0
    // str r0, [r4, #0x34]
    // b _021FE0BA
    // mov r0, #0xe
    // lsl r0, r0, #8
    // cmp r1, r0
    // bgt _021FE0BA
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #0x34]
    // neg r0, r0
    // str r0, [r4, #0x34]
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, sp, #0
    // bl ov01_021FDC7C
    // ldr r1, [sp, #4]
    // ldr r0, _021FE0E8 ; =0x00000514
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DA8
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // bne _021FE0E2
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FE190
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021FE0E8: .word 0x00000514
    // TODO: decompile
}


void ov01_021FE0EC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // ldr r4, [r5, #0x20]
    // add r6, r0, #0
    // add r0, r4, #0
    // bl MapObject_GetSpriteID
    // ldr r1, [r5, #8]
    // cmp r1, r0
    // bne _021FE11A
    // ldr r1, [r5]
    // ldr r2, [r5, #4]
    // add r0, r4, #0
    // bl sub_0205F0A8
    // cmp r0, #0
    // beq _021FE11A
    // add r0, r4, #0
    // bl MapObject_CheckFlag24
    // cmp r0, #0
    // bne _021FE124
    // add r0, r6, #0
    // bl ov01_021F1640
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // beq _021FE18A
    // add r0, r4, #0
    // bl MapObject_CheckVisible
    // cmp r0, #1
    // ldr r0, [r5, #0x24]
    // bne _021FE13E
    // mov r1, #0
    // bl sub_02023EA4
    // b _021FE144
    // mov r1, #1
    // bl sub_02023EA4
    // add r0, r6, #0
    // add r1, sp, #0
    // bl sub_02068DB8
    // mov r0, #1
    // ldr r1, [sp, #8]
    // lsl r0, r0, #0xc
    // sub r0, r1, r0
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x24]
    // add r1, sp, #0
    // bl sub_02023E50
    // add r1, r5, #0
    // ldr r0, [r5, #0x24]
    // add r1, #0x28
    // bl sub_02023E78
    // ldr r0, [r5, #0x20]
    // bl ov01_021F72DC
    // add r4, r0, #0
    // bl sub_02023EF4
    // add r1, r0, #0
    // ldr r0, [r5, #0x24]
    // bl sub_02023EE0
    // add r0, r4, #0
    // bl sub_02023F30
    // add r1, r0, #0
    // ldr r0, [r5, #0x24]
    // bl sub_02023F1C
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FE190(void) {
    // push {r4, r5, lr}
    // sub sp, #0x34
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x20]
    // bl MapObject_GetManager
    // ldr r1, [r4, #8]
    // add r2, sp, #0
    // bl ov01_021F9744
    // cmp r0, #0
    // beq _021FE1FA
    // ldr r0, [r4, #0x20]
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021FE1FA
    // ldr r0, [r4, #0x10]
    // cmp r0, #2
    // ldr r0, [r4, #0x18]
    // bhi _021FE1C4
    // mov r1, #2
    // bl ov01_021F18F0
    // b _021FE1CA
    // mov r1, #0xd
    // bl ov01_021F18F0
    // str r0, [sp]
    // ldr r0, [r4, #0x20]
    // bl ov01_0220553C
    // cmp r0, #0
    // beq _021FE1E2
    // ldr r1, [r4, #0x20]
    // ldr r2, [r4, #0x24]
    // mov r0, #1
    // add r3, sp, #0
    // bl ov01_02205870
    // add r0, r5, #0
    // add r1, sp, #0x28
    // bl sub_02068DB8
    // ldr r0, [r4, #0x18]
    // add r1, sp, #0
    // add r2, sp, #0x28
    // bl ov01_021F16EC
    // str r0, [r4, #0x24]
    // mov r0, #1
    // str r0, [r4, #0xc]
    // add sp, #0x34
    // pop {r4, r5, pc}
    // TODO: decompile
}

