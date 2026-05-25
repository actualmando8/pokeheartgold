/* Decompiled from asm/overlay_01_021F3D38.s */
#include "global.h"

void ov01_021F3D38(void) {
    Heap_Alloc(0, 0x14, 0x14);
}


void ov01_021F3D50(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r1, [r4, #0x13]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1f
    // beq _021F3D60
    // bl RemoveWindow
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F3D68(void) {
    ((u8*)r0)[0x12] = r1;
    ((u16*)r0)[0x10] = r2;
}


void ov01_021F3D70(void) {
    // ldrb r3, [r0, #0x13]
    // mov r2, #0x7f
    // bic r3, r2
    // mov r2, #0x7f
    // and r1, r2
    // orr r1, r3
    // strb r1, [r0, #0x13]
    // bx lr
    // TODO: decompile
}


void ov01_021F3D80(void) {
    // bx lr
    // TODO: decompile
}


void ov01_021F3D84(void) {
    // ldrb r0, [r0, #0x12]
    // bx lr
    // TODO: decompile
}


void ov01_021F3D88(void) {
    // ldrb r0, [r0, #0x13]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x19
    // bne _021F3D94
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_021F3D98(void) {
    // push {r4, lr}
    // ldr r4, [r0, #0x68]
    // ldrb r1, [r4, #0x13]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x19
    // cmp r1, #4
    // bhi _021F3DFA
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F3DB2: ; jump table
    // bl ov01_021F3E10
    // ldrb r1, [r4, #0x13]
    // mov r0, #0x7f
    // bic r1, r0
    // strb r1, [r4, #0x13]
    // pop {r4, pc}
    // bl ov01_021F3EE0
    // cmp r0, #1
    // bne _021F3DFA
    // ldrb r1, [r4, #0x13]
    // mov r0, #0x7f
    // bic r1, r0
    // strb r1, [r4, #0x13]
    // pop {r4, pc}
    // bl ov01_021F3EA0
    // cmp r0, #1
    // bne _021F3DFA
    // ldrb r1, [r4, #0x13]
    // mov r0, #0x7f
    // bic r1, r0
    // strb r1, [r4, #0x13]
    // pop {r4, pc}
    // bl ov01_021F3E4C
    // ldrb r1, [r4, #0x13]
    // mov r0, #0x7f
    // bic r1, r0
    // strb r1, [r4, #0x13]
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F3DFC(void) {
    ov01_021F3D70(*((u32*)(r0 + 0x68)));
    ov01_021F3D98(r4);
}


void ov01_021F3E10(void) {
    // push {r4, lr}
    // mov r1, #3
    // add r4, r0, #0
    // add r3, r1, #0
    // ldr r0, [r4, #8]
    // add r2, r1, #0
    // sub r3, #0x33
    // bl BgSetPosTextAndCommit
    // ldr r1, [r4, #0x68]
    // ldrb r0, [r1, #0x13]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _021F3E40
    // ldrb r2, [r1, #0x12]
    // ldr r0, [r4, #8]
    // mov r3, #3
    // bl sub_0205B63C
    // ldr r2, [r4, #0x68]
    // mov r0, #0x80
    // ldrb r1, [r2, #0x13]
    // orr r0, r1
    // strb r0, [r2, #0x13]
    // ldr r0, [r4, #0x68]
    // ldrb r1, [r0, #0x12]
    // ldrh r2, [r0, #0x10]
    // bl sub_0205B6A0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F3E4C(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r0, [r4, #0x68]
    // ldrb r1, [r0, #0x13]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1f
    // beq _021F3E9A
    // bl RemoveWindow
    // mov r0, #0x12
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #6
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // mov r2, #0
    // ldr r0, [r4, #8]
    // mov r1, #3
    // add r3, r2, #0
    // bl FillBgTilemapRect
    // ldr r0, [r4, #8]
    // mov r1, #3
    // bl BgCommitTilemapBufferToVram
    // mov r1, #3
    // ldr r0, [r4, #8]
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // ldr r2, [r4, #0x68]
    // mov r0, #0x80
    // ldrb r1, [r2, #0x13]
    // bic r1, r0
    // strb r1, [r2, #0x13]
    // add sp, #0x10
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F3EA0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // mov r1, #3
    // bl Bg_GetYpos
    // cmp r0, #0
    // bne _021F3EB4
    // mov r0, #1
    // pop {r4, pc}
    // mov r1, #0x2f
    // mvn r1, r1
    // cmp r0, r1
    // ble _021F3EC0
    // cmp r0, #0
    // blt _021F3ECE
    // mov r1, #3
    // add r3, r1, #0
    // ldr r0, [r4, #8]
    // add r2, r1, #0
    // sub r3, #0x33
    // bl BgSetPosTextAndCommit
    // ldr r0, [r4, #8]
    // mov r1, #3
    // mov r2, #4
    // mov r3, #0x10
    // bl BgSetPosTextAndCommit
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F3EE0(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // mov r1, #3
    // bl Bg_GetYpos
    // mov r1, #0x2f
    // mvn r1, r1
    // cmp r0, r1
    // bne _021F3F2C
    // mov r0, #0x12
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #6
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // mov r2, #0
    // ldr r0, [r4, #8]
    // mov r1, #3
    // add r3, r2, #0
    // bl FillBgTilemapRect
    // ldr r0, [r4, #8]
    // mov r1, #3
    // bl BgCommitTilemapBufferToVram
    // mov r1, #3
    // ldr r0, [r4, #8]
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // add sp, #0x10
    // mov r0, #1
    // pop {r4, pc}
    // ble _021F3F32
    // cmp r0, #0
    // blt _021F3F3E
    // mov r1, #3
    // ldr r0, [r4, #8]
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r4, #8]
    // mov r1, #3
    // mov r2, #5
    // mov r3, #0x10
    // bl BgSetPosTextAndCommit
    // mov r0, #0
    // add sp, #0x10
    // pop {r4, pc}
    // TODO: decompile
}

