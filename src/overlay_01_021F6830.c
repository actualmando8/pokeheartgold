/* Decompiled from asm/overlay_01_021F6830.s */
#include "global.h"

void ov01_021F6830(void) {
}



void ov01_021F6840(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F6860 ; =FS_OVERLAY_ID(OVY_27)
    // mov r1, #2
    // bl HandleLoadOverlay
    // add r1, r4, #0
    // ldr r0, [r4, #8]
    // add r1, #0xd0
    // add r2, r4, #0
    // mov r3, #0
    // bl ov30_0225D520
    // add r4, #0xd4
    // str r0, [r4]
    // pop {r4, pc}
    // _021F6860: .word FS_OVERLAY_ID(OVY_27)
    // TODO: decompile
}



void ov01_021F6864(void) {
    // add r1, r0, #0
    // ldr r0, [r1, #8]
    // add r1, #0xd4
    // ldr r3, _021F6870 ; =ov30_0225D64C
    // ldr r1, [r1]
    // bx r3
    // _021F6870: .word ov30_0225D64C
    // TODO: decompile
}



void ov01_021F6874(void) {
    // push {r3, lr}
    // ldr r0, [r0, #8]
    // bl ov30_0225D6FC
    // cmp r0, #0
    // beq _021F688A
    // ldr r0, _021F6890 ; =FS_OVERLAY_ID(OVY_27)
    // bl UnloadOverlayByID
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _021F6890: .word FS_OVERLAY_ID(OVY_27)
    // TODO: decompile
}



void ov01_021F6894(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F68B4 ; =FS_OVERLAY_ID(OVY_27)
    // mov r1, #2
    // bl HandleLoadOverlay
    // add r1, r4, #0
    // ldr r0, [r4, #8]
    // add r1, #0xd0
    // add r2, r4, #0
    // bl ov01_021F68DC
    // add r4, #0xd8
    // str r0, [r4]
    // pop {r4, pc}
    // nop
    // _021F68B4: .word FS_OVERLAY_ID(OVY_27)
    // TODO: decompile
}



void ov01_021F68B8(void) {
}



void ov01_021F68C0(void) {
    // push {r3, lr}
    // bl ov01_021F6930
    // cmp r0, #0
    // beq _021F68D4
    // ldr r0, _021F68D8 ; =FS_OVERLAY_ID(OVY_27)
    // bl UnloadOverlayByID
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // _021F68D8: .word FS_OVERLAY_ID(OVY_27)
    // TODO: decompile
}



void ov01_021F68DC(void) {
    // push {r3, r4, r5, lr}
    // ldr r0, _021F6908 ; =ov01_021F69C0
    // add r5, r2, #0
    // mov r1, #0x10
    // mov r2, #0xa
    // mov r3, #4
    // bl CreateSysTaskAndEnvironment
    // add r4, r0, #0
    // bl SysTask_GetData
    // ldr r1, [r5, #0x1c]
    // strb r1, [r0]
    // mov r1, #0
    // strb r1, [r0, #1]
    // str r1, [r0, #4]
    // strb r1, [r0, #2]
    // str r5, [r0, #8]
    // str r1, [r0, #0xc]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021F6908: .word ov01_021F69C0
    // TODO: decompile
}



void ov01_021F690C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // bl SysTask_GetData
    // add r2, r0, #0
    // ldr r1, [r2, #4]
    // ldrb r2, [r2]
    // ldr r0, [r4, #8]
    // lsl r3, r2, #4
    // ldr r2, _021F692C ; =ov01_02206C60 + 4
    // ldr r2, [r2, r3]
    // blx r2
    // pop {r4, pc}
    // nop
    // _021F692C: .word ov01_02206C60 + 4
    // TODO: decompile
}



void ov01_021F6930(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // bl SysTask_GetData
    // add r4, r0, #0
    // ldrb r1, [r4]
    // ldr r0, [r5, #8]
    // lsl r2, r1, #4
    // ldr r1, _021F6964 ; =ov01_02206C60 + 8
    // ldr r1, [r1, r2]
    // blx r1
    // cmp r0, #1
    // bne _021F6960
    // add r0, r4, #0
    // bl ov01_021F69A4
    // add r5, #0xd8
    // ldr r0, [r5]
    // bl DestroySysTaskAndEnvironment
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _021F6964: .word ov01_02206C60 + 8
    // TODO: decompile
}



void ov01_021F6968(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // ldrb r0, [r4]
    // lsl r1, r0, #4
    // ldr r0, _021F699C ; =ov01_02206C60 + 12
    // ldr r0, [r0, r1]
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _021F6982
    // mov r1, #2
    // bl HandleLoadOverlay
    // ldrb r5, [r4]
    // ldr r2, [r4, #8]
    // ldr r3, [r4, #0xc]
    // lsl r6, r5, #4
    // ldr r5, _021F69A0 ; =ov01_02206C60
    // add r1, r2, #0
    // ldr r0, [r2, #8]
    // ldr r5, [r5, r6]
    // add r1, #0xd0
    // blx r5
    // str r0, [r4, #4]
    // pop {r4, r5, r6, pc}
    // nop
    // _021F699C: .word ov01_02206C60 + 12
    // _021F69A0: .word ov01_02206C60
    // TODO: decompile
}



void ov01_021F69A4(void) {
}



void ov01_021F69C0(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldrb r0, [r4, #1]
    // cmp r0, #7
    // bhi _021F6A8E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F69D8: ; jump table
    // add r0, r4, #0
    // bl ov01_021F6968
    // mov r0, #1
    // add sp, #0xc
    // strb r0, [r4, #1]
    // pop {r3, r4, pc}
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #4
    // add r2, r1, #0
    // add r3, r1, #0
    // str r0, [sp, #8]
    // bl BeginNormalPaletteFade
    // mov r0, #3
    // add sp, #0xc
    // strb r0, [r4, #1]
    // pop {r3, r4, pc}
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _021F6A8E
    // mov r0, #4
    // add sp, #0xc
    // strb r0, [r4, #1]
    // pop {r3, r4, pc}
    // ldrb r2, [r4]
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #4]
    // lsl r3, r2, #4
    // ldr r2, _021F6A94 ; =ov01_02206C60 + 4
    // ldr r0, [r0, #8]
    // ldr r2, [r2, r3]
    // blx r2
    // mov r0, #5
    // add sp, #0xc
    // strb r0, [r4, #1]
    // pop {r3, r4, pc}
    // ldrb r1, [r4]
    // ldr r0, [r4, #8]
    // lsl r2, r1, #4
    // ldr r1, _021F6A98 ; =ov01_02206C60 + 8
    // ldr r0, [r0, #8]
    // ldr r1, [r1, r2]
    // blx r1
    // cmp r0, #1
    // bne _021F6A8E
    // add r0, r4, #0
    // bl ov01_021F69A4
    // ldrb r0, [r4, #2]
    // add sp, #0xc
    // strb r0, [r4]
    // mov r0, #6
    // strb r0, [r4, #1]
    // pop {r3, r4, pc}
    // add r0, r4, #0
    // bl ov01_021F6968
    // mov r0, #2
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #4
    // add r2, r1, #0
    // mov r3, #0
    // str r0, [sp, #8]
    // bl BeginNormalPaletteFade
    // mov r0, #7
    // add sp, #0xc
    // strb r0, [r4, #1]
    // pop {r3, r4, pc}
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _021F6A8E
    // mov r0, #1
    // strb r0, [r4, #1]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _021F6A94: .word ov01_02206C60 + 4
    // _021F6A98: .word ov01_02206C60 + 8
    // TODO: decompile
}



void ov01_021F6A9C(void) {
}



void ov01_021F6ABC(void) {
    // add r0, #0xd8
    // str r3, [sp]
    SysTask_GetData(*((u32*)r0));
    SysTask_GetData(*((u32*)(r0 + 4)));
    ov01_021F6B00(r5);
    GF_AssertFail();
    // ldr r0, [sp]
    // str r7, [r4]
    *((u32*)(r4 + 4)) = r0;
}



void ov01_021F6AEC(void) {
}



void ov01_021F6B00(void) {
}



void ov01_021F6B10(void) {
}



void ov01_021F6B20(void) {
}



void ov01_021F6B34(void) {
}



void ov01_021F6B50(void) {
}



void ov01_021F6B64(void) {
    // add r0, #0xd8
    SysTask_GetData(*((u32*)r0));
    GF_AssertFail();
    ov27_0225A2EC(*((u32*)(r4 + 4)), r5);
}



void ov01_021F6B88(void) {
}



void ov01_021F6BA0(void) {
}



u8 ov01_021F6BAC(void) {
}



void ov01_021F6BB0(void) {
    // ldr r3, _021F6BCC ; =ov01_02206C08
    // mov r2, #0
    // ldrh r1, [r3]
    // cmp r0, r1
    // bne _021F6BBE
    // mov r0, #1
    // bx lr
    // add r2, r2, #1
    // add r3, r3, #2
    // cmp r2, #0x2b
    // blo _021F6BB4
    // mov r0, #0
    // bx lr
    // nop
    // _021F6BCC: .word ov01_02206C08
    // TODO: decompile
}



void ov01_021F6BD0(void) {
    // ldr r1, _021F6C18 ; =0x00001B58
    // cmp r0, r1
    // blt _021F6BE0
    // ldr r1, _021F6C1C ; =0x0000225F
    // cmp r0, r1
    // bgt _021F6BE0
    // mov r0, #1
    // bx lr
    // mov r1, #0xaf
    // lsl r1, r1, #4
    // cmp r0, r1
    // blt _021F6BF2
    // add r1, #0xc7
    // cmp r0, r1
    // bgt _021F6BF2
    // mov r0, #1
    // bx lr
    // ldr r1, _021F6C20 ; =0x00002710
    // cmp r0, r1
    // blt _021F6C02
    // add r1, #0x63
    // cmp r0, r1
    // bgt _021F6C02
    // mov r0, #1
    // bx lr
    // ldr r1, _021F6C24 ; =0x00002774
    // cmp r0, r1
    // blt _021F6C12
    // add r1, #0x31
    // cmp r0, r1
    // bgt _021F6C12
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _021F6C18: .word 0x00001B58
    // _021F6C1C: .word 0x0000225F
    // _021F6C20: .word 0x00002710
    // _021F6C24: .word 0x00002774
    // TODO: decompile
}



void ov01_021F6C28(void) {
    ov01_021F6B00(*((u32*)(r0 + 0x30)));
    ov01_021F6B10(*((u32*)(r5 + 0x30)));
}



void ov01_021F6C4C(void) {
    ov01_021F6B00(*((u32*)(r0 + 0x30)));
    ov01_021F6B10(*((u32*)(r5 + 0x30)));
    // add r5, #0x90
    ov01_021F6ABC(*((u32*)(r5 + 0x30)), 3, 3, r5);
}



void ov01_021F6C7C(void) {
    ov01_021F6B00(*((u32*)(r0 + 0x30)));
    ov01_021F6AEC(*((u32*)(r5 + 0x30)));
}



void ov01_021F6CA0(void) {
    // add r1, #0x98
    // ldrh r1, [r1]
    ov01_021F6A9C(*((u32*)(r0 + 0x30)), 3, 0);
    // add r0, #0x98
    // ldrh r0, [r0]
    // add r4, #0x98
    // strh r0, [r4]
    ov01_021F6C4C((r4 + 1));
    // add r0, #0x98
    // ldrh r0, [r0]
    // add r4, #0x98
    // strh r0, [r4]
    ov01_021F6C7C((r4 + 1));
    // add r4, #0x98
    // strh r0, [r4]
}


