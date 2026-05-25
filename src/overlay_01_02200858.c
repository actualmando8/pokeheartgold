/* Decompiled from asm/overlay_01_02200858.s */
#include "global.h"

void ov01_02200858(void) {
}



void ov01_02200874(void) {
}



void ov01_02200884(void) {
    // str r2, [sp]
    ov01_021F19F4(*((u32*)r0), (r0 + 4), 0, 0x55);
    // add r0, #0x18
    sub_02069978(r4, (r4 + 4));
}



void ov01_022008A8(void) {
}



void ov01_022008B4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x20
    // add r2, sp, #8
    // mov r1, #0
    // str r1, [r2]
    // str r1, [r2, #4]
    // add r5, r0, #0
    // str r1, [r2, #8]
    // bl PlayerAvatar_GetMapObject
    // add r4, r0, #0
    // bl ov01_021F146C
    // add r6, r0, #0
    // mov r1, #3
    // str r6, [sp, #0x14]
    // bl ov01_021F1450
    // str r0, [sp, #0x18]
    // add r0, r4, #0
    // mov r1, #2
    // str r5, [sp, #0x1c]
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, _022008FC ; =ov01_02209340
    // add r0, r6, #0
    // add r2, sp, #8
    // mov r3, #0
    // bl ov01_021F1620
    // add sp, #0x20
    // pop {r4, r5, r6, pc}
    // nop
    // _022008FC: .word ov01_02209340
    // TODO: decompile
}



u32 ov01_02200900(void) {
    sub_02068D98();
    // ldmia r3!, {r0, r1}
    // add r2, #0x24
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    PlayerAvatar_GetMapObject(*((u32*)(r0 + 8)), r5, r0);
    // mvn r1, r1
    *((u32*)(r5 + 4)) = 0;
    MapObject_GetID(0);
    *((u32*)(r5 + 0x14)) = r0;
    MapObject_GetMapID(r4);
    *((u32*)(r5 + 0x18)) = r0;
}



void ov01_02200938(void) {
    // bx lr
    // TODO: decompile
}



u32 ov01_0220093C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    PlayerAvatar_GetMapObject(*((u32*)(r1 + 0x2c)));
    sub_0205F0A8(*((u32*)(r5 + 0x14)), *((u32*)(r5 + 0x18)));
    // ldr r0, [sp]
    ov01_021F1640();
    sub_0205F504(r6);
    *((u8*)(r5 + 8)) = r0;
    ov01_02200AB0(*((u8*)(r5 + 8)));
    *((u32*)(r5 + 4)) = r0;
    // str r0, [r5]
    // ldr r0, [sp, #4]
    PlayerAvatar_GetFacingDirection((0 - 1));
    *((u32*)(r5 + 0x1c)) = 0;
    *((u32*)(r5 + 0x20)) = 0;
    // str r0, [r5]
    *((u32*)(r5 + 0x1c)) = 0;
    *((u32*)(r5 + 0x20)) = 0;
    MapObject_GetXCoord(r6);
    GetDeltaXByFacingDirection(*((u32*)(r5 + 4)));
    MapObject_GetZCoord(r6);
    // str r0, [sp, #8]
    GetDeltaYByFacingDirection(*((u32*)(r5 + 4)));
    // ldr r1, [sp, #8]
    // add r0, r4, r7
    // add r1, r1, r2
    // add r2, sp, #0xc
    sub_020611C8(r0);
    // add r1, sp, #0x18
    MapObject_CopyPositionVector(r6);
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0xc
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    sub_02068DA8();
    *((u32*)(r5 + 0x1c)) = (*((u32*)(r5 + 0x1c)) + 1);
    *((u32*)(r5 + 0x1c)) = 0;
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u32*)(r5 + 0x20)) = 0x1f;
}



void ov01_02200A08(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // add r3, r1, #0
    // add r6, r0, #0
    // ldr r0, [r3]
    // cmp r0, #1
    // beq _02200AA4
    // mov r0, #0
    // ldr r1, [r3, #4]
    // mvn r0, r0
    // cmp r1, r0
    // beq _02200AA4
    // ldr r5, _02200AA8 ; =ov01_02209334
    // add r4, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldr r0, [r5]
    // mov r7, #0x18
    // str r0, [r4]
    // ldr r1, [r3, #4]
    // ldr r4, _02200AAC ; =ov01_02209354
    // add r0, r1, #0
    // mul r0, r7
    // add r0, r4, r0
    // ldr r5, [r3, #0x28]
    // ldr r4, [r3, #0x20]
    // mov r3, #0xc
    // mul r3, r4
    // mov r2, #0
    // add r5, #0x18
    // add r4, r0, r3
    // cmp r1, #3
    // bhi _02200A6A
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02200A56: ; jump table
    // mov r2, #0xb4
    // b _02200A6A
    // add r2, r7, #0
    // add r2, #0xf6
    // b _02200A6A
    // mov r2, #0x5a
    // mov r1, #0
    // lsl r2, r2, #0x10
    // add r0, sp, #0x18
    // lsr r2, r2, #0x10
    // add r3, r1, #0
    // bl sub_02020DA4
    // add r0, r6, #0
    // add r1, sp, #0xc
    // bl sub_02068DB8
    // ldr r1, [sp, #0xc]
    // ldr r0, [r4]
    // add r2, sp, #0
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r3, sp, #0x18
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r0, [r4, #8]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // add r1, sp, #0xc
    // bl sub_020699AC
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // _02200AA8: .word ov01_02209334
    // _02200AAC: .word ov01_02209354
    // TODO: decompile
}



u32 ov01_02200AB0(void) {
    sub_0205B730();
    sub_0205B73C(r4);
    sub_0205B724(r4);
    sub_0205B718(r4);
    // mvn r0, r0
}


