/* Decompiled from asm/overlay_01_021FE590.s */
#include "global.h"

void ov01_021FE590(void) {
    ov01_021F1430(0xc, 0);
}


void ov01_021FE5A4(void) {
    ov01_021FE61C();
    ov01_021F1448(r4);
}


void ov01_021FE5B4(void) {
    // ldr r1, [r0]
    // add r1, r1, #1
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021FE5BC(void) {
    GF_AssertFail();
}


void ov01_021FE5CC(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _021FE614
    // mov r0, #1
    // str r0, [r4, #4]
    // ldr r0, [r4, #8]
    // mov r1, #0xb
    // mov r2, #0x80
    // bl ov01_021F18D4
    // ldr r0, [r4, #8]
    // mov r1, #0xb
    // mov r2, #0x95
    // bl ov01_021F1908
    // ldr r0, [r4, #8]
    // mov r1, #0xc
    // mov r2, #0x1a
    // mov r3, #1
    // bl ov01_021F1930
    // mov r0, #0xc
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021FE618 ; =ov01_022090AC
    // mov r2, #0xb
    // str r0, [sp, #8]
    // ldr r0, [r4, #8]
    // mov r1, #0xd
    // add r3, r2, #0
    // bl ov01_021F1758
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _021FE618: .word ov01_022090AC
    // TODO: decompile
}


void ov01_021FE61C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // cmp r0, #1
    // bne _021FE64A
    // mov r0, #0
    // str r0, [r4, #4]
    // ldr r0, [r4, #8]
    // mov r1, #0xb
    // bl ov01_021F18FC
    // ldr r0, [r4, #8]
    // mov r1, #0xb
    // bl ov01_021F1924
    // ldr r0, [r4, #8]
    // mov r1, #0xc
    // bl ov01_021F1970
    // ldr r0, [r4, #8]
    // mov r1, #0xd
    // bl ov01_021F18C8
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FE64C(void) {
    ov01_021FE5CC();
}


void ov01_021FE65C(void) {
    ov01_021FE61C();
}


void ov01_021FE66C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // bl ov01_021F146C
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, sp, #0x14
    // bl ov01_021F93AC
    // mov r0, #2
    // ldr r1, [sp, #0x1c]
    // lsl r0, r0, #0xe
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // add r0, r4, #0
    // mov r1, #0x10
    // str r4, [sp, #8]
    // bl ov01_021F1450
    // str r0, [sp, #0xc]
    // add r0, sp, #8
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r1, _021FE6B0 ; =ov01_02209084
    // add r0, r4, #0
    // add r2, sp, #0x14
    // mov r3, #0
    // bl ov01_021F1620
    // add sp, #0x20
    // pop {r3, r4, r5, pc}
    // nop
    // _021FE6B0: .word ov01_02209084
    // TODO: decompile
}


void ov01_021FE6B4(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02068D98
    // add r3, r0, #0
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0xc
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [r4, #0x10]
    // bl ov01_021FE64C
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DB8
    // ldr r0, [r4, #0xc]
    // mov r1, #0xd
    // add r2, sp, #0
    // bl ov01_021F1740
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #0x10]
    // bl ov01_021FE5B4
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}


void ov01_021FE6F4(void) {
    sub_02023DA4(*((u32*)(r1 + 0x18)));
    ov01_021FE5BC(*((u32*)(r4 + 0x10)));
    ov01_021FE65C(*((u32*)(r4 + 0x10)));
}


void ov01_021FE70C(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // ldr r5, _021FE764 ; =ov01_02209098
    // add r2, r0, #0
    // add r4, r1, #0
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r3]
    // ldr r0, [r4, #8]
    // cmp r0, #1
    // bne _021FE748
    // mov r1, #0
    // str r1, [r4, #8]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // cmp r0, #5
    // blt _021FE742
    // add r0, r2, #0
    // bl ov01_021F1640
    // add sp, #0x14
    // pop {r4, r5, pc}
    // ldr r0, [r4, #0x18]
    // bl sub_02023F1C
    // ldr r1, [r4, #4]
    // ldr r0, [r4, #0x18]
    // lsl r2, r1, #2
    // add r1, sp, #0
    // ldr r1, [r1, r2]
    // bl sub_02023F04
    // cmp r0, #1
    // bne _021FE75E
    // mov r0, #1
    // str r0, [r4, #8]
    // add sp, #0x14
    // pop {r4, r5, pc}
    // nop
    // _021FE764: .word ov01_02209098
    // TODO: decompile
}


void ov01_021FE768(void) {
    sub_02068DB8();
    sub_02023E50(*((u32*)(r4 + 0x18)));
}

