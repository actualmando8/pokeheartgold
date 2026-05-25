/* Decompiled from asm/overlay_01_021FD1B8.s */
#include "global.h"

void ov01_021FD1B8(void) {
}



void ov01_021FD1CC(void) {
    ov01_021FD21C();
    ov01_021F1448(*((u32*)(r4 + 8)));
    ov01_021F1448(r4);
}



void ov01_021FD1E8(void) {
    // str r1, [r5]
    // str r2, [sp]
    ov01_021F19F4(r3, (r0 + 4), 0, r2);
    // add r0, #0x18
    sub_02069978(r5, (r5 + 4));
}



void ov01_021FD20C(void) {
    // ldr r1, _021FD214 ; =0x0000FFFF
    // ldr r3, _021FD218 ; =sub_02069784
    // stmia r0!, {r1}
    // bx r3
    // _021FD214: .word 0x0000FFFF
    // _021FD218: .word sub_02069784
    // TODO: decompile
}



void ov01_021FD21C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r6, [r0, #4]
    // mov r4, #0
    // ldr r5, [r0, #8]
    // cmp r6, #0
    // bls _021FD23E
    // ldr r7, _021FD240 ; =0x0000FFFF
    // ldr r0, [r5]
    // cmp r0, r7
    // beq _021FD236
    // add r0, r5, #0
    // bl ov01_021FD20C
    // add r4, r4, #1
    // add r5, #0x6c
    // cmp r4, r6
    // blo _021FD22A
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FD240: .word 0x0000FFFF
    // TODO: decompile
}



void * ov01_021FD244(void) {
    // add r0, #0x6c
}



void ov01_021FD258(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // mov r1, #0x14
    // add r6, r0, #0
    // bl ov01_021F1450
    // add r4, r0, #0
    // cmp r5, #0
    // bne _021FD26E
    // bl GF_AssertFail
    // mov r1, #0x6c
    // mov r2, #0
    // add r0, r6, #0
    // mul r1, r5
    // add r3, r2, #0
    // str r5, [r4, #4]
    // bl ov01_021F1430
    // ldr r1, _021FD28C ; =0x0000FFFF
    // str r0, [r4, #8]
    // str r1, [r0]
    // add r0, #0x6c
    // sub r5, r5, #1
    // bne _021FD282
    // pop {r4, r5, r6, pc}
    // _021FD28C: .word 0x0000FFFF
    // TODO: decompile
}



void ov01_021FD290(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // mov r1, #0x14
    // add r5, r0, #0
    // add r6, r2, #0
    // bl ov01_021F1450
    // add r1, r4, #0
    // add r7, r0, #0
    // bl ov01_021FD244
    // cmp r0, #0
    // bne _021FD2C6
    // ldr r1, _021FD2C8 ; =0x0000FFFF
    // add r0, r7, #0
    // bl ov01_021FD244
    // cmp r0, #0
    // bne _021FD2BC
    // bl GF_AssertFail
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r4, #0
    // add r2, r6, #0
    // add r3, r5, #0
    // bl ov01_021FD1E8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FD2C8: .word 0x0000FFFF
    // TODO: decompile
}



void * ov01_021FD2CC(void) {
    ov01_021F1450(0x14);
    ov01_021FD244(r4);
    GF_AssertFail();
    // add r4, #0x18
}



void ov01_021FD2EC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r6, r1, #0
    // bl ov01_021F146C
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetSpriteID
    // str r0, [sp, #8]
    // add r0, r5, #0
    // mov r1, #2
    // str r4, [sp, #0xc]
    // str r5, [sp, #0x10]
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, _021FD324 ; =ov01_02208E1C
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #0
    // bl ov01_021F1620
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _021FD324: .word ov01_02208E1C
    // TODO: decompile
}



u32 ov01_021FD328(void) {
    sub_02068D98();
    // ldmia r3!, {r0, r1}
    // add r2, #0x1c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    MapObject_GetID(*((u32*)(r4 + 0x24)), r4, r0);
    *((u32*)(r4 + 4)) = r0;
    ov01_021FD2CC(*((u32*)(r4 + 0x20)), *((u32*)(r4 + 0x1c)));
    *((u32*)(r4 + 0x18)) = r0;
    MapObject_CheckFlag25(*((u32*)(r4 + 0x24)));
    sub_0205F544(*((u32*)(r4 + 0x24)));
    MapObject_GetMapID();
    *((u32*)(r4 + 8)) = r0;
    // add r4, #0xc
    sub_02068DB8(r5, r4);
}



void ov01_021FD378(void) {
    // bx lr
    // TODO: decompile
}



void ov01_021FD37C(void) {
    sub_0205F0A8(*((u32*)(r1 + 0x24)), *((u32*)(r1 + 4)), *((u32*)(r1 + 8)));
    ov01_021F1640(r5);
    // add r1, sp, #0xc
    MapObject_CopyPositionVector(r6);
    // add r1, sp, #0
    MapObject_CopyFacingVector(r6);
    // ldr r1, [sp]
    // ldr r2, [sp, #0xc]
    // add r0, r1, r0
    // add r0, r2, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #0x10]
    // add r0, r1, r0
    // add r0, r2, r0
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0x14]
    // add r0, r1, r0
    // add r0, r2, r0
    // str r0, [sp, #0x14]
    // add r1, sp, #0xc
    sub_02068DA8(r5);
}



void ov01_021FD3E0(void) {
}



void ov01_021FD3F8(void) {
    // push {r4, r5, r6, lr}
    // mov r5, #0xc
    // add r1, r5, #0
    // add r6, r0, #0
    // ldr r4, _021FD418 ; =ov01_02208E30
    // bl ov01_021FD258
    // ldr r1, [r4]
    // ldr r2, [r4, #4]
    // add r0, r6, #0
    // bl ov01_021FD290
    // add r4, #8
    // sub r5, r5, #1
    // bne _021FD406
    // pop {r4, r5, r6, pc}
    // _021FD418: .word ov01_02208E30
    // TODO: decompile
}


