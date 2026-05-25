/* Decompiled from asm/overlay_01_021FFC0C.s */
#include "global.h"

void ov01_021FFC0C(void) {
    ov01_021F1430(4, 0, 0);
    ov01_021FFC38();
}


void ov01_021FFC28(void) {
    ov01_021FFC80();
    ov01_021F1448(r4);
}


void ov01_021FFC38(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r1, #8
    // mov r2, #0x7b
    // bl ov01_021F18D4
    // ldr r0, [r4]
    // mov r1, #8
    // mov r2, #0x93
    // bl ov01_021F1908
    // ldr r0, [r4]
    // mov r1, #9
    // mov r2, #0x16
    // mov r3, #1
    // bl ov01_021F1930
    // mov r0, #9
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021FFC7C ; =ov01_02209258
    // mov r2, #8
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // mov r1, #0xa
    // add r3, r2, #0
    // bl ov01_021F1758
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _021FFC7C: .word ov01_02209258
    // TODO: decompile
}


void ov01_021FFC80(void) {
    ov01_021F18FC(8);
    ov01_021F1924(8);
    ov01_021F1970(9);
    ov01_021F18C8(0xa);
}


void ov01_021FFCA8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02068D98
    // add r3, r4, #0
    // add r6, r0, #0
    // add r3, #0x18
    // mov r2, #4
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021FFCBC
    // ldr r0, [r6]
    // str r0, [r3]
    // ldr r0, [r4, #0x30]
    // bl MapObject_GetSpriteID
    // str r0, [r4, #4]
    // ldr r0, [r4, #0x30]
    // bl MapObject_GetID
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x30]
    // bl MapObject_GetMapID
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #0x18]
    // lsl r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #0x20]
    // lsl r0, r0, #0x10
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x30]
    // bl MapObject_GetPositionVectorYCoord
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x24]
    // add r1, sp, #0
    // bl sub_0206121C
    // str r0, [r4, #0x14]
    // mov r0, #0x1e
    // ldr r1, [sp]
    // lsl r0, r0, #0xa
    // add r0, r1, r0
    // str r0, [sp]
    // mov r0, #2
    // ldr r1, [sp, #4]
    // lsl r0, r0, #0xe
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // mov r0, #0xd
    // ldr r1, [sp, #8]
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DA8
    // ldr r0, [r4, #0x28]
    // mov r1, #0xa
    // add r2, sp, #0
    // bl ov01_021F1740
    // str r0, [r4, #0x3c]
    // mov r1, #2
    // ldr r0, [r4, #0x30]
    // lsl r1, r1, #8
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // bne _021FFD46
    // ldr r0, [r4, #0x3c]
    // mov r1, #0
    // bl sub_02023EA4
    // add r0, r5, #0
    // bl sub_02068D90
    // cmp r0, #0
    // bne _021FFD5E
    // mov r1, #2
    // ldr r0, [r4, #0x3c]
    // lsl r1, r1, #0xc
    // bl sub_02023F1C
    // mov r0, #2
    // str r0, [r4]
    // mov r0, #1
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FFD64(void) {
    sub_02023DA4();
}


void ov01_021FFD70(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r1, #0
    // ldr r7, [r5, #0x30]
    // ldr r1, [r5, #4]
    // add r6, r0, #0
    // ldr r2, [r5, #8]
    // ldr r3, [r5, #0xc]
    // add r0, r7, #0
    // bl sub_0205F0F8
    // cmp r0, #0
    // bne _021FFD94
    // add r0, r6, #0
    // bl ov01_021F1640
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #2
    // add r0, r7, #0
    // lsl r1, r1, #8
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // ldr r0, [r5, #0x3c]
    // bne _021FFDAC
    // mov r1, #0
    // bl sub_02023EA4
    // b _021FFDB2
    // mov r1, #1
    // bl sub_02023EA4
    // ldr r0, [r5, #0x14]
    // cmp r0, #0
    // bne _021FFDEA
    // add r0, r6, #0
    // add r1, sp, #0xc
    // bl sub_02068DB8
    // ldr r0, [r5, #0x18]
    // add r1, sp, #0
    // lsl r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r5, #0x20]
    // lsl r0, r0, #0x10
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x24]
    // bl sub_0206121C
    // str r0, [r5, #0x14]
    // cmp r0, #1
    // bne _021FFDEA
    // ldr r0, [sp, #4]
    // add r1, sp, #0xc
    // str r0, [sp, #0x10]
    // add r0, r6, #0
    // bl sub_02068DA8
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _021FFDFC
    // cmp r0, #1
    // beq _021FFE20
    // cmp r0, #2
    // beq _021FFE36
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #1
    // ldr r0, [r5, #0x3c]
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // ldr r0, [r5, #0x3c]
    // bl sub_02023F70
    // asr r1, r0, #0xb
    // lsr r1, r1, #0x14
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // cmp r0, #2
    // blt _021FFE92
    // mov r0, #1
    // add sp, #0x18
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #2
    // ldr r0, [r5, #0x3c]
    // lsl r1, r1, #0xc
    // bl sub_02023F1C
    // ldr r0, [r5, #0x3c]
    // mov r1, #0
    // bl sub_02023F04
    // mov r0, #2
    // str r0, [r5]
    // ldr r1, [r5, #4]
    // ldr r2, [r5, #8]
    // ldr r3, [r5, #0xc]
    // add r0, r7, #0
    // bl sub_0205F0F8
    // cmp r0, #0
    // bne _021FFE50
    // add r0, r6, #0
    // bl ov01_021F1640
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // bl MapObject_GetXCoord
    // add r4, r0, #0
    // add r0, r7, #0
    // bl MapObject_GetZCoord
    // ldr r1, [r5, #0x18]
    // cmp r1, r4
    // bne _021FFE6A
    // ldr r1, [r5, #0x20]
    // cmp r1, r0
    // beq _021FFE74
    // add r0, r6, #0
    // bl ov01_021F1640
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x38
    // ldrsb r1, [r5, r0]
    // sub r0, #0x39
    // cmp r1, r0
    // beq _021FFE92
    // add r0, r7, #0
    // bl MapObject_GetFacingDirection
    // mov r1, #0x38
    // ldrsb r1, [r5, r1]
    // cmp r1, r0
    // beq _021FFE92
    // add r0, r6, #0
    // bl ov01_021F1640
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FFE98(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x30]
    // ldr r1, [r4, #8]
    // ldr r2, [r4, #0xc]
    // bl sub_0205F0A8
    // cmp r0, #0
    // bne _021FFEB8
    // add r0, r5, #0
    // bl ov01_021F1640
    // add sp, #0xc
    // pop {r4, r5, pc}
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DB8
    // ldr r0, [r4, #0x3c]
    // add r1, sp, #0
    // bl sub_02023E50
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}

