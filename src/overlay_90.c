/* Decompiled from asm/overlay_90.s */
#include "global.h"

void ov90_02258800(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // add r2, r6, #0
    // mov r1, #0x10
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _02258812
    // bl sub_020347A0
    // strb r0, [r6, #8]
    // bl sub_0203769C
    // mov r5, #0
    // add r7, r0, #0
    // add r4, r5, #0
    // add r0, r4, #0
    // bl sub_02034818
    // cmp r0, #0
    // beq _02258840
    // cmp r7, r4
    // bne _0225883A
    // strb r5, [r6, #9]
    // add r0, r6, r5
    // strb r4, [r0, #4]
    // add r5, r5, #1
    // add r4, r4, #1
    // cmp r4, #4
    // blt _0225882A
    // ldrb r0, [r6, #8]
    // cmp r5, r0
    // beq _02258850
    // bl GF_AssertFail
    // ldr r0, [sp]
    // cmp r0, #0
    // bne _0225885A
    // mov r0, #1
    // strb r0, [r6, #0xb]
    // ldr r0, [sp, #4]
    // str r0, [r6]
    // ldr r0, [sp, #8]
    // strb r0, [r6, #0xa]
    // ldr r0, [sp, #0x20]
    // str r0, [r6, #0xc]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_0225886C(void) {
    // ldrb r2, [r0, #8]
    // mov r3, #0
    // cmp r2, #0
    // ble _02258888
    // add r2, r0, r3
    // ldrb r2, [r2, #4]
    // cmp r1, r2
    // bne _02258880
    // add r0, r3, #0
    // bx lr
    // ldrb r2, [r0, #8]
    // add r3, r3, #1
    // cmp r3, r2
    // blt _02258874
    // mov r0, #4
    // bx lr
    // TODO: decompile
}


void ov90_0225888C(void) {
    GF_AssertFail();
}


void ov90_022588A4(void) {
    // push {r3, lr}
    // cmp r1, #4
    // blo _022588B4
    // blo _022588B0
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // ldr r2, [r0, #0xc]
    // add r0, r2, r1
    // ldrb r1, [r0, #4]
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // bne _022588C6
    // mov r0, #0
    // pop {r3, pc}
    // add r0, r2, r1
    // ldrb r0, [r0, #8]
    // pop {r3, pc}
    // TODO: decompile
}


void ov90_022588CC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // cmp r4, #4
    // blo _022588E0
    // blo _022588DC
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrb r2, [r5, #0xb]
    // cmp r2, #1
    // bne _02258900
    // bl ov90_0225886C
    // ldrb r1, [r5, #9]
    // cmp r0, r1
    // bne _022588F8
    // ldr r0, [r5]
    // bl Save_PlayerData_GetProfile
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl sub_02034818
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // bne _0225890A
    // bl GF_AssertFail
    // ldr r1, [r5, #0xc]
    // lsl r0, r4, #2
    // add r0, r1, r0
    // ldr r0, [r0, #0x20]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov90_02258914(void) {
    ov90_02259588();
}


void ov90_02258920(void) {
    ov90_02259588();
}


void ov90_0225892C(void) {
    ov90_02259588();
}


void ov90_02258938(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _022589B8 ; =0x000005EC
    // ldr r0, [r5, r0]
    // bl SysTask_Destroy
    // mov r0, #0x5f
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl SysTask_Destroy
    // mov r0, #0xb9
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov90_0225A108
    // mov r0, #0x73
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov90_0225A340
    // ldrb r0, [r5, #0x10]
    // mov r6, #0
    // cmp r0, #0
    // ble _02258980
    // mov r0, #0x81
    // lsl r0, r0, #2
    // add r4, r5, r0
    // add r0, r4, #0
    // bl ov90_02259EAC
    // ldrb r0, [r5, #0x10]
    // add r6, r6, #1
    // add r4, #0x38
    // cmp r6, r0
    // blt _02258970
    // add r0, r5, #0
    // add r0, #0x4c
    // bl ov90_02259434
    // add r0, r5, #0
    // bl ov90_02259784
    // add r0, r5, #0
    // add r0, #0x3c
    // bl ov90_022591D4
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl ov90_02258E10
    // add r0, r5, #0
    // add r0, #0x84
    // bl ov90_02259158
    // add r0, r5, #0
    // add r0, #0x30
    // bl ov90_02259084
    // add r0, r5, #0
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // _022589B8: .word 0x000005EC
    // TODO: decompile
}


void ov90_022589BC(void) {
    // ldrb r0, [r0]
    // cmp r0, #0x10
    // blo _022589C6
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov90_022589CC(void) {
    GF_AssertFail();
}


void ov90_022589E0(void) {
    ov90_0225A6B4();
}


void ov90_022589EC(void) {
    ov90_0225A6B4();
}


void ov90_022589F8(void) {
    ov90_0225A6B4();
}


void ov90_02258A04(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _02258A90 ; =0x00000644
    // ldr r0, [r5, r0]
    // bl SysTask_Destroy
    // ldr r0, _02258A94 ; =0x00000648
    // ldr r0, [r5, r0]
    // bl SysTask_Destroy
    // mov r0, #0xcf
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov90_0225A108
    // ldrb r0, [r5, #0x14]
    // mov r6, #0
    // cmp r0, #0
    // ble _02258A40
    // mov r0, #0x97
    // lsl r0, r0, #2
    // add r4, r5, r0
    // add r0, r4, #0
    // bl ov90_02259EAC
    // ldrb r0, [r5, #0x14]
    // add r6, r6, #1
    // add r4, #0x38
    // cmp r6, r0
    // blt _02258A30
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov90_0225B380
    // add r0, r5, #0
    // bl ov90_0225A960
    // add r0, r5, #0
    // add r0, #0x68
    // bl ov90_02259434
    // add r0, r5, #0
    // add r0, #0x58
    // bl ov90_022591D4
    // mov r0, #0x73
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov90_02258E10
    // add r0, r5, #0
    // add r0, #0xa0
    // bl ov90_02259158
    // add r0, r5, #0
    // add r0, #0x4c
    // bl ov90_02259084
    // ldr r0, _02258A98 ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // ldr r0, _02258A9C ; =0x04001050
    // strh r1, [r0]
    // bl GF_DestroyVramTransferManager
    // add r0, r5, #0
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // _02258A90: .word 0x00000644
    // _02258A94: .word 0x00000648
    // _02258A98: .word 0x04000050
    // _02258A9C: .word 0x04001050
    // TODO: decompile
}


void ov90_02258AA0(void) {
    // ldrb r0, [r0, #6]
    // bx lr
    // TODO: decompile
}


void ov90_02258AA4(void) {
    // ldrb r0, [r0, #8]
    // bx lr
    // TODO: decompile
}


void ov90_02258AA8(void) {
    // push {r3, r4, r5, r6, r7}
    // sub sp, #4
    // add r5, r0, #0
    // mov r7, #0
    // mov ip, r1
    // add r0, r1, #0
    // beq _02258AE8
    // add r3, r5, #0
    // add r2, r7, #0
    // cmp r7, #0
    // ble _02258ADA
    // add r0, sp, #0
    // add r4, r0, r7
    // sub r0, r4, #1
    // ldrb r1, [r0]
    // ldr r0, [r3]
    // lsl r6, r1, #2
    // ldr r6, [r5, r6]
    // cmp r0, r6
    // bls _02258ADA
    // sub r2, r2, #1
    // strb r1, [r4]
    // sub r4, r4, #1
    // cmp r2, #0
    // bgt _02258AC2
    // add r0, sp, #0
    // strb r7, [r0, r2]
    // add r7, r7, #1
    // mov r0, ip
    // add r3, r3, #4
    // cmp r7, r0
    // blo _02258AB8
    // mov r0, ip
    // mov r4, #0
    // cmp r0, #0
    // bls _02258B1E
    // add r3, sp, #0
    // add r2, r4, #0
    // cmp r4, #0
    // ble _02258B0E
    // sub r0, r3, #1
    // ldrb r1, [r0]
    // ldrb r0, [r3]
    // lsl r6, r1, #2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r6, [r5, r6]
    // cmp r0, r6
    // bne _02258B0E
    // add r0, r5, r1
    // ldrb r2, [r0, #0x10]
    // ldrb r0, [r3]
    // add r4, r4, #1
    // add r3, r3, #1
    // add r0, r5, r0
    // strb r2, [r0, #0x10]
    // mov r0, ip
    // cmp r4, r0
    // blo _02258AF2
    // add sp, #4
    // pop {r3, r4, r5, r6, r7}
    // bx lr
    // TODO: decompile
}


void ov90_02258B24(void) {
    ((u8*)r0)[6] = r1;
    ((u8*)r0)[7] = 1;
}


void ov90_02258B2C(void) {
    ov90_0225B53C(0x7a);
}


void ov90_02258B44(void) {
    // mov r2, #0x7a
    // lsl r2, r2, #2
    // ldr r3, _02258B50 ; =ov90_0225B594
    // add r0, r0, r2
    // bx r3
    // nop
    // _02258B50: .word ov90_0225B594
    // TODO: decompile
}


void ov90_02258B54(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r4, #0
    // cmp r0, #0
    // beq _02258B94
    // bl sub_02037454
    // ldrb r1, [r5, #8]
    // cmp r1, r0
    // beq _02258B6C
    // mov r4, #1
    // bl sub_02039264
    // cmp r0, #1
    // bne _02258B76
    // mov r4, #1
    // bl sub_020390C4
    // cmp r0, #2
    // blt _02258B80
    // mov r4, #1
    // cmp r4, #1
    // bne _02258B8A
    // ldr r0, [r5, #0xc]
    // mov r1, #1
    // str r1, [r0, #0x1c]
    // ldr r0, [r5, #0xc]
    // ldr r0, [r0, #0x1c]
    // cmp r0, #1
    // bne _02258B94
    // mov r4, #1
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov90_02258B98(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // bne _02258BA6
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // ldr r0, [r0, #0x1c]
    // cmp r0, #1
    // beq _02258BB2
    // bl GF_AssertFail
    // bl sub_02034420
    // cmp r0, #1
    // bne _02258BC4
    // bl sub_020343E4
    // bl sub_0203986C
    // b _02258BD0
    // bl sub_020392A0
    // cmp r0, #1
    // bne _02258BD0
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov90_02258BD4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r1, #0
    // mov r1, #0x73
    // add r6, r0, #0
    // add r0, r5, #0
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // mov r2, #0x73
    // add r4, r0, #0
    // mov r1, #0
    // lsl r2, r2, #2
    // bl memset
    // str r6, [r4, #8]
    // mov r0, #0xc8
    // add r1, r5, #0
    // bl NARC_New
    // str r0, [r4, #0xc]
    // add r0, r4, #0
    // add r0, #0x10
    // mov r1, #1
    // add r2, r5, #0
    // bl ov90_02258DD0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, _02258C34 ; =0x00001388
    // mov r2, #3
    // str r0, [sp, #0xc]
    // str r5, [sp, #0x10]
    // add r0, r4, #0
    // ldr r1, [r4, #0xc]
    // add r0, #0x10
    // add r3, r2, #0
    // bl ov90_02258E54
    // str r0, [r4, #0x28]
    // add r0, r4, #0
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02258C34: .word 0x00001388
    // TODO: decompile
}


void ov90_02258C38(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x2c]
    // cmp r0, #0
    // beq _02258C4A
    // bl SysTask_Destroy
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // ldr r0, [r4, #0x30]
    // cmp r0, #0
    // beq _02258C54
    // bl Sprite_Delete
    // add r0, r4, #0
    // add r0, #0x34
    // bl ov90_0225BD08
    // add r0, r4, #0
    // add r0, #0x10
    // bl ov90_02258E10
    // ldr r0, [r4, #0xc]
    // bl NARC_Delete
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void ov90_02258C74(void) {
    // push {r3, lr}
    // ldr r0, [r0, #0x14]
    // ldr r1, _02258C88 ; =0x00001388
    // bl SpriteResourceCollection_Find
    // mov r1, #1
    // bl SpriteTransfer_GetPlttOffset
    // pop {r3, pc}
    // nop
    // _02258C88: .word 0x00001388
    // TODO: decompile
}


void ov90_02258C8C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x2c]
    // cmp r0, #0
    // beq _02258C9A
    // bl GF_AssertFail
    // ldr r0, _02258CAC ; =ov90_0225BEE0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #0x2c]
    // mov r0, #1
    // strh r0, [r4, #4]
    // pop {r4, pc}
    // _02258CAC: .word ov90_0225BEE0
    // TODO: decompile
}


void ov90_02258CB0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x2c]
    // cmp r0, #0
    // beq _02258CBE
    // bl GF_AssertFail
    // ldr r0, _02258CD8 ; =ov90_0225C06C
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #0x2c]
    // mov r0, #1
    // strh r0, [r4, #4]
    // ldr r0, _02258CDC ; =0x000005F1
    // bl PlaySE
    // pop {r4, pc}
    // nop
    // _02258CD8: .word ov90_0225C06C
    // _02258CDC: .word 0x000005F1
    // TODO: decompile
}


void ov90_02258CE0(void) {
    // ldrh r0, [r0, #4]
    // cmp r0, #0
    // bne _02258CEA
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov90_02258CF0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r4, [sp, #0x18]
    // add r5, r0, #0
    // add r7, r2, #0
    // add r0, r3, #0
    // add r6, r1, #0
    // lsl r2, r4, #0xc
    // str r3, [sp]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // add r2, r0, #0
    // sub r0, r7, r6
    // mov r7, #2
    // mov r3, #0
    // lsl r7, r7, #0xa
    // add r2, r2, r7
    // adc r1, r3
    // lsl r1, r1, #0x14
    // lsr r2, r2, #0xc
    // orr r2, r1
    // sub r2, r0, r2
    // asr r1, r2, #0x1f
    // lsr r0, r2, #0x13
    // lsl r1, r1, #0xd
    // orr r1, r0
    // lsl r0, r2, #0xd
    // add r0, r0, r7
    // adc r1, r3
    // lsl r1, r1, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // add r1, r4, #0
    // mul r1, r4
    // lsl r1, r1, #0xc
    // bl FX_Div
    // str r6, [r5]
    // ldr r1, [sp]
    // str r6, [r5, #4]
    // str r1, [r5, #8]
    // str r0, [r5, #0xc]
    // str r4, [r5, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_02258D4C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x10]
    // add r4, r1, #0
    // cmp r4, r0
    // blt _02258D5E
    // add r4, r0, #0
    // mov r7, #1
    // b _02258D60
    // mov r7, #0
    // ldr r0, [r5, #8]
    // lsl r2, r4, #0xc
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsr r6, r2, #0xc
    // lsl r0, r1, #0x14
    // add r2, r4, #0
    // orr r6, r0
    // ldr r0, [r5, #0xc]
    // mul r2, r4
    // lsl r2, r2, #0xc
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r0, r0, r2
    // adc r1, r3
    // lsl r1, r1, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // lsl r1, r2, #2
    // bl FX_Div
    // ldr r1, [r5, #4]
    // add r0, r6, r0
    // add r0, r1, r0
    // str r0, [r5]
    // add r0, r7, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_02258DB0(void) {
    // push {r3, r4}
    // ldr r2, [r0, #8]
    // add r0, #0xc
    // lsr r4, r2, #1
    // mov r3, #0
    // cmp r4, #0
    // ble _02258DCC
    // ldrh r2, [r0]
    // add r3, r3, #1
    // add r2, r2, r1
    // strh r2, [r0]
    // add r0, r0, #2
    // cmp r3, r4
    // blt _02258DBE
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov90_02258DD0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // add r6, r1, #0
    // add r7, r2, #0
    // mov r4, #0
    // add r5, r0, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl Create2DGfxResObjMan
    // add r4, r4, #1
    // stmia r5!, {r0}
    // cmp r4, #4
    // blt _02258DDC
    // mov r0, #0x38
    // add r4, r6, #0
    // mul r4, r0
    // add r0, r7, #0
    // add r1, r4, #0
    // bl Heap_Alloc
    // ldr r1, [sp]
    // add r2, r4, #0
    // str r0, [r1, #0x10]
    // mov r1, #0
    // bl memset
    // ldr r0, [sp]
    // str r6, [r0, #0x14]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_02258E10(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x14]
    // mov r6, #0
    // cmp r0, #0
    // bls _02258E38
    // add r4, r6, #0
    // ldr r1, [r5, #0x10]
    // ldr r0, [r1, r4]
    // cmp r0, #1
    // bne _02258E2E
    // add r0, r5, #0
    // add r1, r1, r4
    // bl ov90_02258FB8
    // ldr r0, [r5, #0x14]
    // add r6, r6, #1
    // add r4, #0x38
    // cmp r6, r0
    // blo _02258E1E
    // mov r6, #0
    // add r4, r5, #0
    // ldr r0, [r4]
    // bl Destroy2DGfxResObjMan
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #4
    // blt _02258E3C
    // ldr r0, [r5, #0x10]
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov90_02258E54(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // ldr r6, [r5, #0x14]
    // mov r4, #0
    // str r1, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // add r7, r3, #0
    // add r1, r4, #0
    // cmp r6, #0
    // bls _02258E84
    // ldr r3, [r5, #0x10]
    // add r2, r3, #0
    // ldr r0, [r2]
    // cmp r0, #0
    // bne _02258E7C
    // mov r0, #0x38
    // mul r0, r1
    // add r4, r3, r0
    // b _02258E84
    // add r1, r1, #1
    // add r2, #0x38
    // cmp r1, r6
    // blo _02258E6E
    // cmp r4, #0
    // bne _02258E8C
    // bl GF_AssertFail
    // ldr r0, [sp, #0x38]
    // str r7, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x3c]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x40]
    // ldr r3, [sp, #0x1c]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x44]
    // add r1, r4, #0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x48]
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // bl ov90_02258EE0
    // add r0, r4, #0
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_02258EB4(void) {
    // push {r3, lr}
    // sub sp, #0x20
    // add r0, #0x14
    // str r0, [sp, #4]
    // lsl r0, r2, #0xc
    // str r0, [sp, #8]
    // lsl r0, r3, #0xc
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // add r0, sp, #0x18
    // ldrh r0, [r0, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0
    // bl Sprite_Create
    // add sp, #0x20
    // pop {r3, pc}
    // TODO: decompile
}


void ov90_02258EE0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // str r2, [sp, #0x2c]
    // str r3, [sp, #0x30]
    // cmp r0, #0
    // beq _02258EF6
    // bl GF_AssertFail
    // mov r0, #1
    // ldr r7, [sp, #0x58]
    // str r0, [r4]
    // str r7, [sp]
    // ldr r6, [sp, #0x5c]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r0, [r5]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x4c]
    // mov r3, #0
    // bl AddCharResObjFromOpenNarc
    // str r0, [r4, #4]
    // str r7, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x48]
    // ldr r1, [sp, #0x2c]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r0, [r5, #4]
    // ldr r2, [sp, #0x30]
    // mov r3, #0
    // bl AddPlttResObjFromOpenNarc
    // str r0, [r4, #8]
    // str r7, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r0, [r5, #8]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x50]
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // str r0, [r4, #0xc]
    // str r7, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r0, [r5, #0xc]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x54]
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #4]
    // bl sub_0200ADA4
    // cmp r0, #0
    // bne _02258F66
    // bl GF_AssertFail
    // ldr r0, [r4, #4]
    // bl sub_0200A740
    // ldr r0, [r4, #8]
    // bl sub_0200B00C
    // cmp r0, #0
    // bne _02258F7A
    // bl GF_AssertFail
    // ldr r0, [r4, #8]
    // bl sub_0200A740
    // mov r0, #0
    // str r7, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r1, #1
    // str r1, [sp, #0x10]
    // ldr r1, [r5]
    // add r4, #0x14
    // str r1, [sp, #0x14]
    // ldr r1, [r5, #4]
    // add r2, r7, #0
    // str r1, [sp, #0x18]
    // ldr r1, [r5, #8]
    // add r3, r7, #0
    // str r1, [sp, #0x1c]
    // ldr r1, [r5, #0xc]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl CreateSpriteResourcesHeader
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_02258FB8(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // cmp r0, #1
    // beq _02258FC8
    // bl GF_AssertFail
    // mov r0, #0
    // str r0, [r4]
    // ldr r0, [r4, #4]
    // bl sub_0200AEB0
    // ldr r0, [r4, #8]
    // bl sub_0200B0A8
    // mov r6, #0
    // ldr r0, [r5]
    // ldr r1, [r4, #4]
    // bl DestroySingle2DGfxResObj
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r6, #4
    // blt _02258FDA
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov90_02258FF0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [sp, #0x18]
    // add r6, r2, #0
    // str r0, [sp, #0x18]
    // add r0, r1, #0
    // str r3, [sp]
    // bl SetBothScreensModesAndDisable
    // ldr r0, [sp, #0x18]
    // bl BgConfig_Alloc
    // str r0, [r5]
    // ldr r0, [sp]
    // str r6, [r5, #4]
    // str r0, [r5, #8]
    // ldr r0, _02259080 ; =gSystem + 0x60
    // mov r1, #0
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // ldr r0, [sp]
    // mov r7, #0
    // cmp r0, #0
    // bls _0225907C
    // add r4, r6, #0
    // ldr r1, [r4]
    // ldr r0, [r5]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // add r2, r6, #4
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4]
    // ldr r3, [sp, #0x18]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // mov r1, #0x20
    // mov r2, #0
    // bl BG_ClearCharDataRange
    // ldr r1, [r4]
    // ldr r0, [r5]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl BgClearTilemapBufferAndCommit
    // ldr r1, [r4]
    // mov r2, #0
    // lsl r1, r1, #0x18
    // ldr r0, [r5]
    // lsr r1, r1, #0x18
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // ldr r1, [r4]
    // ldr r0, [r5]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // mov r2, #3
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [sp]
    // add r7, r7, #1
    // add r6, #0x20
    // add r4, #0x20
    // cmp r7, r0
    // blo _02259024
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02259080: .word gSystem + 0x60
    // TODO: decompile
}


void ov90_02259084(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r1, #3
    // ldr r0, [r5]
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r5, #8]
    // mov r6, #0
    // cmp r0, #0
    // bls _022590B6
    // add r4, r6, #0
    // ldr r1, [r5, #4]
    // ldr r0, [r5]
    // ldr r1, [r1, r4]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl FreeBgTilemapBuffer
    // ldr r0, [r5, #8]
    // add r6, r6, #1
    // add r4, #0x20
    // cmp r6, r0
    // blo _0225909E
    // ldr r0, [r5]
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov90_022590C0(void) {
    DoScheduledBgGpuUpdates();
}


void ov90_022590CC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r5, r0, #0
    // str r1, [sp, #0x14]
    // add r6, r2, #0
    // str r3, [sp, #0x18]
    // bl NNS_G2dInitOamManagerModule
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x7e
    // str r1, [sp, #4]
    // ldr r4, [sp, #0x40]
    // str r0, [sp, #8]
    // mov r3, #0x1f
    // str r3, [sp, #0xc]
    // add r2, r0, #0
    // str r4, [sp, #0x10]
    // bl OamManager_Create
    // ldr r3, _02259154 ; =ov90_0225C294
    // add r2, sp, #0x1c
    // add r7, r2, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r1, #0x10
    // add r0, r7, #0
    // add r2, r1, #0
    // str r6, [sp, #0x1c]
    // str r4, [sp, #0x28]
    // bl ObjCharTransfer_InitEx
    // ldr r0, [sp, #0x18]
    // add r1, r4, #0
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // mov r0, #1
    // mov r1, #0x10
    // bl G2dRenderer_SetObjCharTransferReservedRegion
    // mov r0, #1
    // bl G2dRenderer_SetPlttTransferReservedRegion
    // ldr r0, [sp, #0x14]
    // add r1, r5, #4
    // add r2, r4, #0
    // bl G2dRenderer_Init
    // str r0, [r5]
    // bl sub_0203A880
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02259154: .word ov90_0225C294
    // TODO: decompile
}


void ov90_02259158(void) {
    SpriteList_Delete();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    OamManager_Free();
}


void ov90_02259170(void) {
    SpriteList_RenderAndAnimateSprites();
}


void ov90_0225917C(void) {
    OamManager_ApplyAndResetBuffers();
}


void ov90_02259184(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xec
    // add r3, r4, #0
    // bl NewMsgDataFromNarc
    // str r0, [r5]
    // mov r0, #8
    // mov r1, #0x40
    // add r2, r4, #0
    // bl MessageFormat_New_Custom
    // str r0, [r5, #4]
    // mov r0, #0x80
    // add r1, r4, #0
    // bl String_New
    // str r0, [r5, #8]
    // mov r0, #0x80
    // add r1, r4, #0
    // bl String_New
    // mov r1, #6
    // str r0, [r5, #0xc]
    // mov r0, #0
    // lsl r1, r1, #6
    // add r2, r4, #0
    // bl LoadFontPal1
    // mov r1, #6
    // mov r0, #4
    // lsl r1, r1, #6
    // add r2, r4, #0
    // bl LoadFontPal1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov90_022591D4(void) {
    String_Delete(*((u32*)(r0 + 0xc)));
    String_Delete(*((u32*)(r4 + 8)));
    MessageFormat_Delete(*((u32*)(r4 + 4)));
    DestroyMsgData();
}


void ov90_022591F4(void) {
    MessageFormat_ResetBuffers();
}


void ov90_02259200(void) {
    // ldr r3, _0225920C ; =BufferPlayersName
    // add r2, r1, #0
    // ldr r0, [r0, #4]
    // mov r1, #0
    // bx r3
    // nop
    // _0225920C: .word BufferPlayersName
    // TODO: decompile
}


void ov90_02259210(void) {
    // ldr r3, _0225921C ; =BufferCountryName
    // add r2, r1, #0
    // ldr r0, [r0, #4]
    // mov r1, #0
    // bx r3
    // nop
    // _0225921C: .word BufferCountryName
    // TODO: decompile
}


void ov90_02259220(void) {
    BufferCityName(0);
}


void ov90_02259234(void) {
    BufferIntegerAsString(0, 1);
}


void ov90_02259250(void) {
    BufferIntegerAsString(0, 1, 2);
}


void ov90_0225926C(void) {
    // ldr r3, _02259278 ; =BufferWiFiPlazaInstrumentName
    // add r2, r1, #0
    // ldr r0, [r0, #4]
    // mov r1, #1
    // bx r3
    // nop
    // _02259278: .word BufferWiFiPlazaInstrumentName
    // TODO: decompile
}


void ov90_0225927C(void) {
    // ldr r3, _02259288 ; =BufferWiFiPlazaActivityName
    // add r2, r1, #0
    // ldr r0, [r0, #4]
    // mov r1, #0
    // bx r3
    // nop
    // _02259288: .word BufferWiFiPlazaActivityName
    // TODO: decompile
}


void ov90_0225928C(void) {
    ReadMsgDataIntoString(r2, *((u32*)(r0 + 0xc)));
    StringExpandPlaceholders(*((u32*)(r5 + 4)), r4, *((u32*)(r5 + 0xc)));
}


void ov90_022592A8(void) {
    ov90_02259350();
}


void ov90_022592C4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r6, r2, #0
    // ldr r0, [r5]
    // ldr r2, [r5, #0xc]
    // add r4, r3, #0
    // bl ReadMsgDataIntoString
    // ldr r0, [r5, #4]
    // ldr r1, [r5, #8]
    // ldr r2, [r5, #0xc]
    // bl StringExpandPlaceholders
    // mov r0, #0
    // ldr r1, [r5, #8]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // sub r3, r4, r0
    // bpl _022592F0
    // mov r3, #0
    // add r0, sp, #0x10
    // ldrb r0, [r0, #0x10]
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02259310 ; =0x000F0E00
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, [r5, #8]
    // add r0, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _02259310: .word 0x000F0E00
    // TODO: decompile
}


void ov90_02259314(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r6, r2, #0
    // ldr r0, [r5]
    // ldr r2, [r5, #0xc]
    // add r4, r3, #0
    // bl ReadMsgDataIntoString
    // ldr r0, [r5, #4]
    // ldr r2, [r5, #0xc]
    // add r1, r4, #0
    // bl StringExpandPlaceholders
    // mov r3, #0
    // ldr r0, [sp, #0x20]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0225934C ; =0x0001020F
    // mov r1, #1
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r2, r4, #0
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _0225934C: .word 0x0001020F
    // TODO: decompile
}


void ov90_02259350(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r4, r2, #0
    // ldr r0, [r5]
    // ldr r2, [r5, #0xc]
    // add r6, r3, #0
    // bl ReadMsgDataIntoString
    // ldr r0, [r5, #4]
    // ldr r1, [r5, #8]
    // ldr r2, [r5, #0xc]
    // bl StringExpandPlaceholders
    // add r0, sp, #0x10
    // ldrb r0, [r0, #0x10]
    // mov r1, #0
    // add r3, r6, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, [r5, #8]
    // add r0, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov90_0225938C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x30]
    // add r7, r1, #0
    // str r0, [sp, #0x30]
    // add r0, r2, #0
    // str r3, [sp, #0x18]
    // bl Save_PlayerData_GetOptionsAddr
    // bl Options_GetFrame
    // add r4, r0, #0
    // mov r0, #1
    // bl TextFlags_BeginAutoScroll
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // mov r1, #2
    // str r0, [sp, #4]
    // ldr r0, [r7]
    // mov r2, #1
    // mov r3, #0xd
    // bl LoadUserFrameGfx2
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // mov r1, #4
    // str r0, [sp, #4]
    // ldr r0, [r7]
    // mov r2, #1
    // mov r3, #0xd
    // bl LoadUserFrameGfx2
    // ldr r4, [sp, #0x14]
    // mov r6, #0
    // add r5, r4, #0
    // cmp r6, #0
    // bne _022593E8
    // mov r2, #2
    // mov r0, #0x13
    // b _022593EC
    // mov r2, #4
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xc
    // str r0, [sp, #0xc]
    // mov r0, #0x1f
    // str r0, [sp, #0x10]
    // lsl r2, r2, #0x18
    // ldr r0, [r7]
    // add r1, r4, #0
    // lsr r2, r2, #0x18
    // mov r3, #2
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, [sp, #0x30]
    // mov r0, #0x80
    // bl String_New
    // str r0, [r5, #0x24]
    // add r6, r6, #1
    // add r4, #0x10
    // add r5, r5, #4
    // cmp r6, #2
    // blt _022593DE
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r1, [r0, #0x34]
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_02259434(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // mov r4, #0
    // add r5, r7, #0
    // add r6, r7, #0
    // add r0, r7, #0
    // add r1, r4, #0
    // bl ov90_022594FC
    // ldr r0, [r5, #0x24]
    // bl String_Delete
    // add r0, r6, #0
    // bl RemoveWindow
    // add r4, r4, #1
    // add r5, r5, #4
    // add r6, #0x10
    // cmp r4, #2
    // blt _0225943E
    // bl TextFlags_EndAutoScroll
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_02259464(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // str r1, [sp, #4]
    // add r4, r2, #0
    // add r6, r3, #0
    // cmp r0, #1
    // bne _0225948A
    // ldr r2, _022594F8 ; =ov90_0225C34C
    // mov r1, #0
    // ldrh r0, [r2]
    // cmp r4, r0
    // bne _02259482
    // ldrh r4, [r2, #2]
    // add r1, r1, #1
    // add r2, r2, #4
    // cmp r1, #0x14
    // blo _0225947A
    // add r0, r5, #0
    // str r0, [sp, #8]
    // add r0, #0x20
    // str r0, [sp, #8]
    // lsl r0, r6, #1
    // ldr r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldrh r0, [r1, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // beq _022594B4
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldrh r0, [r1, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl RemoveTextPrinter
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov90_02259570
    // lsl r7, r6, #4
    // add r0, r5, r7
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r0, #1
    // lsl r3, r6, #2
    // str r0, [sp]
    // add r3, r5, r3
    // ldr r0, [sp, #4]
    // ldr r3, [r3, #0x24]
    // add r1, r4, #0
    // add r2, r5, r7
    // bl ov90_02259314
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0xc]
    // mov r3, #0xd
    // strh r0, [r2, r1]
    // mov r1, #1
    // add r0, r5, r7
    // add r2, r1, #0
    // bl DrawFrameAndWindow2
    // add r0, r5, r7
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022594F8: .word ov90_0225C34C
    // TODO: decompile
}


void ov90_022594FC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov90_02259570
    // add r6, r5, #0
    // add r6, #0x20
    // lsl r7, r4, #1
    // ldrh r0, [r6, r7]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // beq _02259524
    // ldrh r0, [r6, r7]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl RemoveTextPrinter
    // lsl r4, r4, #4
    // add r0, r5, r4
    // mov r1, #1
    // bl ClearFrameAndWindow2
    // add r0, r5, r4
    // bl ClearWindowTilemapAndScheduleTransfer
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_02259538(void) {
    TextPrinterCheckActive(0, 1);
}


void ov90_02259554(void) {
    WaitingIcon_New(1);
}


void ov90_02259570(void) {
    sub_0200F478(0);
}


void ov90_02259588(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // mov r1, #0x12
    // add r6, r0, #0
    // add r5, r2, #0
    // mov r0, #0x13
    // lsl r1, r1, #6
    // mov r2, #0
    // bl Sound_SetSceneAndPlayBGM
    // ldr r1, _022596A0 ; =0x000005F4
    // add r0, r5, #0
    // bl Heap_Alloc
    // ldr r2, _022596A0 ; =0x000005F4
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // add r2, r4, #0
    // add r2, #8
    // mov r1, #0x10
    // ldrb r0, [r6]
    // add r6, r6, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _022595B4
    // ldr r3, _022596A4 ; =0x04000050
    // strh r7, [r4, #4]
    // mov r1, #0
    // strh r1, [r3]
    // ldr r0, _022596A8 ; =0x04001050
    // sub r3, #0x50
    // strh r1, [r0]
    // ldr r2, [r3]
    // ldr r1, _022596AC ; =0xFFFF1FFF
    // sub r0, #0x50
    // and r2, r1
    // str r2, [r3]
    // ldr r2, [r0]
    // and r1, r2
    // str r1, [r0]
    // ldr r0, _022596B0 ; =ov90_0225C2CC
    // bl GfGfx_SetBanks
    // add r0, r4, #0
    // strh r5, [r4, #2]
    // bl ov90_0225C178
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x18
    // add r1, #8
    // bl ov90_0225A204
    // add r0, r4, #0
    // ldr r1, _022596B4 ; =ov90_0225C2A4
    // ldr r2, _022596B8 ; =ov90_0225C39C
    // add r0, #0x30
    // mov r3, #5
    // str r5, [sp]
    // bl ov90_02258FF0
    // add r0, r4, #0
    // mov r2, #1
    // add r0, #0x84
    // mov r1, #0x10
    // add r3, r2, #0
    // str r5, [sp]
    // bl ov90_022590CC
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #1
    // add r2, r5, #0
    // bl ov90_02258DD0
    // add r0, r4, #0
    // add r0, #0x3c
    // add r1, r5, #0
    // bl ov90_02259184
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov90_022596C8
    // add r0, r4, #0
    // ldrb r1, [r4, #0x11]
    // add r0, #8
    // bl ov90_0225888C
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #8
    // bl ov90_022588A4
    // str r5, [sp]
    // add r3, r0, #0
    // add r0, r4, #0
    // add r1, r4, #0
    // ldr r2, [r4, #8]
    // add r0, #0x4c
    // add r1, #0x30
    // bl ov90_0225938C
    // ldr r0, _022596BC ; =ov90_02259794
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r1, _022596C0 ; =0x000005EC
    // mov r2, #0
    // str r0, [r4, r1]
    // ldr r0, _022596C4 ; =ov90_02259B18
    // add r1, r4, #0
    // bl SysTask_CreateOnVWaitQueue
    // mov r1, #0x5f
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldrb r0, [r4, #0x12]
    // cmp r0, #0
    // beq _02259688
    // add r0, r5, #0
    // bl ov00_021E69A8
    // ldr r0, [r4, #8]
    // bl Save_GameStats_Get
    // ldrb r1, [r4, #0x13]
    // cmp r1, #0
    // beq _0225969A
    // mov r1, #0x27
    // bl GameStats_AddScore
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022596A0: .word 0x000005F4
    // _022596A4: .word 0x04000050
    // _022596A8: .word 0x04001050
    // _022596AC: .word 0xFFFF1FFF
    // _022596B0: .word ov90_0225C2CC
    // _022596B4: .word ov90_0225C2A4
    // _022596B8: .word ov90_0225C39C
    // _022596BC: .word ov90_02259794
    // _022596C0: .word 0x000005EC
    // _022596C4: .word ov90_02259B18
    // TODO: decompile
}


void ov90_022596C8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0xc8
    // add r4, r1, #0
    // bl NARC_New
    // mov r1, #0x12
    // lsl r1, r1, #4
    // str r1, [sp]
    // mov r2, #0
    // mov r1, #4
    // add r3, r2, #0
    // add r6, r0, #0
    // str r4, [sp, #4]
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldr r2, [r5, #0x30]
    // add r0, r6, #0
    // mov r1, #6
    // mov r3, #1
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r3, #2
    // lsl r3, r3, #8
    // add r0, r6, #0
    // mov r1, #9
    // mov r2, #0
    // add r3, r5, r3
    // str r4, [sp]
    // bl GfGfxLoader_GetScrnDataFromOpenNarc
    // mov r1, #0x7f
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldr r2, [r5, #0x30]
    // add r0, r6, #0
    // mov r1, #8
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldrh r1, [r5, #4]
    // add r0, r6, #0
    // add r2, r4, #0
    // bl ov90_0225A65C
    // mov r0, #0xc
    // str r0, [sp]
    // mov r0, #0xd
    // str r0, [sp, #4]
    // mov r0, #0xe
    // str r0, [sp, #8]
    // ldr r0, _02259780 ; =0x00001388
    // add r1, r6, #0
    // str r0, [sp, #0xc]
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r2, #0xb
    // mov r3, #5
    // str r4, [sp, #0x10]
    // bl ov90_02258E54
    // mov r1, #0x72
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r1, #4
    // str r6, [sp]
    // str r4, [sp, #4]
    // add r1, r5, #0
    // add r2, r5, #0
    // ldrh r3, [r5, #4]
    // add r0, r5, r0
    // add r1, #0x30
    // add r2, #0x3c
    // bl ov90_0225A2B0
    // add r0, r6, #0
    // bl NARC_Delete
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _02259780: .word 0x00001388
    // TODO: decompile
}


void ov90_02259784(void) {
    // mov r1, #0x7f
    // lsl r1, r1, #2
    // ldr r3, _02259790 ; =Heap_Free
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _02259790: .word Heap_Free
    // TODO: decompile
}


void ov90_02259794(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r4, r1, #0
    // ldrb r0, [r4]
    // cmp r0, #0x10
    // bls _022597A2
    // b _02259AF2
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022597AE: ; jump table
    // mov r0, #6
    // mov r1, #1
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldrh r0, [r4, #2]
    // ldr r3, _02259AD8 ; =0x0000FFFF
    // add r2, r1, #0
    // str r0, [sp, #8]
    // mov r0, #3
    // bl BeginNormalPaletteFade
    // mov r0, #0x73
    // lsl r0, r0, #2
    // add r1, r4, #0
    // ldrh r2, [r4, #2]
    // add r0, r4, r0
    // add r1, #0x30
    // bl ov90_0225A350
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02259AF2
    // mov r0, #0x73
    // lsl r0, r0, #2
    // add r1, r4, #0
    // add r0, r4, r0
    // add r1, #0x30
    // bl ov90_0225A428
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _022598AA
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02259AF2
    // mov r0, #0x73
    // lsl r0, r0, #2
    // add r1, r4, #0
    // add r0, r4, r0
    // add r1, #0x30
    // bl ov90_0225A428
    // cmp r0, #1
    // bne _022598AA
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02259AF2
    // add r0, r4, #0
    // add r1, r4, #0
    // mov r2, #0
    // add r0, #0x4c
    // add r1, #0x3c
    // add r3, r2, #0
    // bl ov90_02259464
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02259AF2
    // add r0, r4, #0
    // add r0, #0x4c
    // mov r1, #0
    // bl ov90_02259538
    // cmp r0, #0
    // beq _022598AA
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r0, #0x40
    // strb r0, [r4, #1]
    // b _02259AF2
    // ldrb r0, [r4, #1]
    // cmp r0, #0
    // beq _022598AA
    // sub r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4, #1]
    // cmp r0, #0
    // bne _022598AA
    // add r0, r4, #0
    // add r0, #0x4c
    // mov r1, #0
    // bl ov90_022594FC
    // mov r0, #0x73
    // lsl r0, r0, #2
    // add r1, r4, #0
    // add r0, r4, r0
    // add r1, #0x30
    // bl ov90_0225A3E0
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02259AF2
    // mov r0, #0x73
    // lsl r0, r0, #2
    // add r1, r4, #0
    // add r0, r4, r0
    // add r1, #0x30
    // bl ov90_0225A544
    // cmp r0, #1
    // beq _022598AC
    // b _02259AF2
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02259AF2
    // mov r0, #0xb9
    // lsl r0, r0, #2
    // add r1, r4, #0
    // ldrh r2, [r4, #2]
    // add r0, r4, r0
    // add r1, #0x30
    // bl ov90_0225A088
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #8
    // add r1, #0x18
    // bl ov90_0225A258
    // ldrb r1, [r4, #0x10]
    // mov r6, #0
    // str r0, [sp, #0x1c]
    // cmp r1, #0
    // ble _02259986
    // mov r0, #0x81
    // lsl r0, r0, #2
    // add r5, r4, r0
    // add r0, r4, #0
    // str r0, [sp, #0x20]
    // add r0, #0x30
    // str r0, [sp, #0x20]
    // add r0, r4, #0
    // str r0, [sp, #0x24]
    // add r0, #0x84
    // str r0, [sp, #0x24]
    // add r0, r4, #0
    // str r0, [sp, #0x28]
    // add r0, #8
    // str r0, [sp, #0x28]
    // add r0, r4, #0
    // str r0, [sp, #0x2c]
    // add r0, #0x3c
    // str r4, [sp, #0x18]
    // add r7, r6, #0
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x20]
    // mov r3, #2
    // str r0, [sp]
    // str r6, [sp, #4]
    // ldrb r0, [r4, #0x11]
    // lsl r3, r3, #8
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0xc]
    // mov r0, #0x72
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // str r0, [sp, #0x10]
    // ldrh r0, [r4, #2]
    // str r0, [sp, #0x14]
    // ldrh r2, [r4, #4]
    // ldr r3, [r4, r3]
    // add r0, r5, #0
    // bl ov90_02259BCC
    // ldr r0, [sp, #0x28]
    // add r1, r6, #0
    // bl ov90_0225888C
    // add r1, r0, #0
    // ldr r0, [sp, #0x28]
    // bl ov90_022588A4
    // mov r1, #0
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [r2, #0x20]
    // add r0, r5, #0
    // mov r3, #8
    // bl ov90_02259D50
    // add r3, r4, r6
    // ldrb r0, [r3, #0x1c]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // ldrb r3, [r3, #0x18]
    // add r0, r5, #0
    // bl ov90_02259DAC
    // mov r1, #7
    // lsl r2, r7, #0x10
    // add r0, r5, #0
    // mvn r1, r1
    // asr r2, r2, #0x10
    // bl ov90_02259EE0
    // ldr r0, [sp, #0x18]
    // ldrb r1, [r4, #0x10]
    // add r0, r0, #4
    // add r6, r6, #1
    // add r5, #0x38
    // str r0, [sp, #0x18]
    // add r7, r7, #3
    // cmp r6, r1
    // blt _02259904
    // mov r6, #0
    // cmp r1, #0
    // ble _022599AE
    // mov r0, #0x81
    // lsl r0, r0, #2
    // add r7, r4, #0
    // add r5, r4, r0
    // add r7, #0x30
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov90_02259E8C
    // add r0, r5, #0
    // bl ov90_02259EA0
    // ldrb r0, [r4, #0x10]
    // add r6, r6, #1
    // add r5, #0x38
    // cmp r6, r0
    // blt _02259996
    // mov r0, #0x5c
    // strb r0, [r4, #1]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02259AF2
    // add r0, r4, #0
    // bl ov90_02259B68
    // cmp r0, #1
    // bne _022599EA
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02259AF2
    // ldrb r0, [r4, #1]
    // sub r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4, #1]
    // cmp r0, #0
    // bne _022599EA
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r0, #0x81
    // bl sub_02037AC0
    // ldrb r0, [r4, #0x12]
    // cmp r0, #0
    // bne _022599EC
    // b _02259AF2
    // bl ov00_021E6A4C
    // b _02259AF2
    // mov r0, #0x81
    // bl sub_02037B38
    // cmp r0, #0
    // beq _02259AF2
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02259AF2
    // ldrb r0, [r4, #0x10]
    // mov r7, #0
    // cmp r0, #0
    // ble _02259A2A
    // mov r0, #0x81
    // lsl r0, r0, #2
    // add r6, r7, #0
    // add r5, r4, r0
    // lsl r1, r6, #0x10
    // add r0, r5, #0
    // asr r1, r1, #0x10
    // bl ov90_02259F44
    // ldrb r0, [r4, #0x10]
    // add r7, r7, #1
    // add r6, r6, #3
    // add r5, #0x38
    // cmp r7, r0
    // blt _02259A14
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r0, #8
    // strb r0, [r4, #1]
    // b _02259AF2
    // ldrb r0, [r4, #1]
    // sub r0, r0, #1
    // strb r0, [r4, #1]
    // add r0, r4, #0
    // bl ov90_02259B68
    // ldrb r0, [r4, #1]
    // cmp r0, #0
    // bne _02259AF2
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02259AF2
    // mov r0, #6
    // str r0, [sp]
    // mov r2, #1
    // str r2, [sp, #4]
    // ldrh r0, [r4, #2]
    // mov r1, #0
    // add r3, r1, #0
    // str r0, [sp, #8]
    // mov r0, #3
    // bl BeginNormalPaletteFade
    // add r0, r4, #0
    // bl ov90_02259B68
    // ldrb r0, [r4, #0x11]
    // cmp r0, #0
    // bne _02259AAE
    // ldrh r0, [r4, #4]
    // cmp r0, #0
    // beq _02259A82
    // cmp r0, #1
    // beq _02259A8E
    // cmp r0, #2
    // beq _02259A9A
    // b _02259AA4
    // ldr r0, _02259ADC ; =ov90_0225C1E8
    // mov r1, #3
    // bl ov90_02259B38
    // str r0, [sp, #0x30]
    // b _02259AA4
    // ldr r0, _02259AE0 ; =_0225C1E0
    // mov r1, #2
    // bl ov90_02259B38
    // str r0, [sp, #0x30]
    // b _02259AA4
    // ldr r0, _02259AE4 ; =ov90_0225C1E4
    // mov r1, #3
    // bl ov90_02259B38
    // str r0, [sp, #0x30]
    // mov r0, #0x1a
    // add r1, sp, #0x30
    // mov r2, #4
    // bl sub_02037030
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02259AF2
    // add r0, r4, #0
    // bl ov90_02259B68
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _02259AF2
    // mov r0, #0xb9
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov90_0225A108
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02259AF2
    // nop
    // _02259AD8: .word 0x0000FFFF
    // _02259ADC: .word ov90_0225C1E8
    // _02259AE0: .word _0225C1E0
    // _02259AE4: .word ov90_0225C1E4
    // ldrb r1, [r4, #7]
    // cmp r1, #1
    // bne _02259AF2
    // add r0, r0, #1
    // strb r0, [r4]
    // add r0, r4, #0
    // add r0, #0x84
    // bl ov90_02259170
    // ldr r0, [r4, #0x30]
    // mov r1, #3
    // mov r2, #4
    // mov r3, #2
    // bl ScheduleSetBgPosText
    // ldr r0, [r4, #0x30]
    // mov r1, #5
    // mov r2, #4
    // mov r3, #2
    // bl ScheduleSetBgPosText
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_02259B18(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // add r0, #0x30
    // bl ov90_022590C0
    // add r0, r4, #0
    // add r0, #0x84
    // bl ov90_0225917C
    // mov r0, #0xb9
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov90_0225A198
    // pop {r4, pc}
    // TODO: decompile
}


void ov90_02259B38(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl MTRandom
    // mov r1, #0x64
    // bl _u32_div_f
    // mov r3, #0
    // add r0, r3, #0
    // cmp r4, #0
    // bls _02259B5E
    // ldrb r2, [r5, r0]
    // add r3, r3, r2
    // cmp r3, r1
    // bhi _02259B64
    // add r0, r0, #1
    // cmp r0, r4
    // blo _02259B50
    // bl GF_AssertFail
    // sub r0, r4, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov90_02259B68(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldrb r0, [r7, #0x10]
    // cmp r0, #0
    // ble _02259BC6
    // mov r0, #0x81
    // lsl r0, r0, #2
    // add r6, r7, r0
    // add r4, r7, #0
    // add r5, r6, #0
    // mov r0, #0x85
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02259BB0
    // add r0, r6, #0
    // bl ov90_02259F7C
    // str r0, [sp, #8]
    // mov r0, #0xb9
    // lsl r0, r0, #2
    // add r0, r7, r0
    // add r1, r5, #0
    // bl ov90_0225A134
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // bne _02259BB4
    // mov r0, #0
    // str r0, [sp]
    // b _02259BB4
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldrb r1, [r7, #0x10]
    // add r0, r0, #1
    // add r4, #0x38
    // add r6, #0x38
    // add r5, #0x38
    // str r0, [sp, #4]
    // cmp r0, r1
    // blt _02259B86
    // ldr r0, [sp]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_02259BCC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r5, r0, #0
    // ldr r0, [sp, #0x48]
    // add r6, r3, #0
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x54]
    // str r1, [sp, #0x1c]
    // ldr r4, [sp, #0x4c]
    // str r0, [sp, #0x54]
    // cmp r2, #0
    // beq _02259BEC
    // cmp r2, #1
    // beq _02259BFA
    // cmp r2, #2
    // bne _02259C10
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x50]
    // add r1, r4, #0
    // bl ov90_0225A050
    // add r7, r0, #0
    // b _02259C12
    // ldr r0, [sp, #0x50]
    // cmp r0, r4
    // bls _02259C04
    // add r7, r4, #1
    // b _02259C12
    // cmp r0, r4
    // bne _02259C0C
    // mov r7, #0
    // b _02259C12
    // add r7, r4, #0
    // b _02259C12
    // add r7, r4, #0
    // mov r0, #1
    // mov r1, #2
    // bl SetBgPriority
    // mov r0, #0
    // mov r1, #1
    // bl SetBgPriority
    // ldr r1, [sp, #0x1c]
    // mov r0, #0xc
    // add r2, r1, #0
    // mul r2, r0
    // str r2, [sp, #0x2c]
    // ldr r2, _02259D38 ; =ov90_0225C310
    // ldr r1, [sp, #0x2c]
    // mov r3, #5
    // add r1, r2, r1
    // ldrb r1, [r7, r1]
    // mov r2, #0
    // str r1, [sp, #0x28]
    // add r1, r1, #1
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // str r1, [sp]
    // mov r1, #0x1a
    // str r1, [sp, #4]
    // mov r1, #4
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // mov r0, #0x68
    // add r1, r4, #0
    // mul r1, r0
    // ldr r0, _02259D3C ; =0x00000201
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x48]
    // add r1, r5, #0
    // ldr r0, [r0]
    // bl AddWindowParameterized
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r0, #0xc
    // str r0, [sp, #8]
    // mov r2, #0
    // ldr r1, _02259D40 ; =ov90_0225C314
    // ldr r0, [sp, #0x2c]
    // str r2, [sp, #0xc]
    // add r0, r1, r0
    // ldrb r0, [r4, r0]
    // ldr r3, [sp, #0x28]
    // mov r1, #1
    // str r0, [sp, #0x10]
    // ldrh r0, [r6]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x14]
    // ldrh r0, [r6, #2]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x48]
    // ldr r0, [r0]
    // bl CopyToBgTilemapRect
    // ldr r0, [sp, #0x28]
    // ldr r1, _02259D44 ; =ov90_0225C318
    // lsl r0, r0, #3
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x2c]
    // ldr r2, _02259D48 ; =ov90_0225C274
    // add r0, r1, r0
    // ldrb r0, [r7, r0]
    // ldr r3, _02259D4C ; =ov90_0225C276
    // ldr r1, [sp, #0x54]
    // lsl r6, r0, #2
    // ldrsh r2, [r2, r6]
    // str r0, [sp, #0x24]
    // mov r0, #0
    // ldrsh r6, [r3, r6]
    // str r0, [sp]
    // ldr r0, [sp, #0x5c]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #4]
    // add r3, r6, r3
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [sp, #0x58]
    // ldr r1, [r1]
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl ov90_02258EB4
    // ldr r1, [sp, #0x24]
    // str r0, [r5, #0x10]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r5, #0x10]
    // add r1, r4, #0
    // bl Sprite_SetPalOffset
    // ldr r0, [r5, #0x10]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r5, #0x10]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x5c]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x54]
    // add r3, #0x15
    // str r3, [sp, #0x20]
    // lsl r3, r3, #0x18
    // ldr r0, [sp, #0x58]
    // ldr r1, [r1]
    // mov r2, #0x18
    // lsr r3, r3, #0x18
    // bl ov90_02258EB4
    // str r0, [r5, #0x14]
    // mov r1, #0
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r5, #0x14]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // strb r4, [r5, #0x1a]
    // ldr r0, [sp, #0x1c]
    // strb r7, [r5, #0x1b]
    // strh r0, [r5, #0x18]
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _02259D38: .word ov90_0225C310
    // _02259D3C: .word 0x00000201
    // _02259D40: .word ov90_0225C314
    // _02259D44: .word ov90_0225C318
    // _02259D48: .word ov90_0225C274
    // _02259D4C: .word ov90_0225C276
    // TODO: decompile
}


void ov90_02259D50(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r2, #0
    // add r4, r3, #0
    // bl ov90_02259200
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #8
    // cmp r0, #1
    // bne _02259D8A
    // mov r0, #0x10
    // ldrsh r0, [r1, r0]
    // lsl r3, r4, #0x18
    // mov r1, #0xa
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, _02259DA8 ; =0x00050600
    // add r2, r6, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // lsr r3, r3, #0x18
    // bl ov90_02259350
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // mov r0, #0x10
    // ldrsh r0, [r1, r0]
    // lsl r3, r4, #0x18
    // mov r1, #0xa
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // add r0, r5, #0
    // add r2, r6, #0
    // lsr r3, r3, #0x18
    // bl ov90_022592A8
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _02259DA8: .word 0x00050600
    // TODO: decompile
}


void ov90_02259DAC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r6, r0, #0
    // add r5, r1, #0
    // add r4, r3, #0
    // cmp r2, #0
    // beq _02259DE8
    // cmp r4, #0
    // beq _02259E14
    // add r0, r5, #0
    // bl ov90_022591F4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov90_02259210
    // mov r0, #0x10
    // str r0, [sp]
    // add r4, sp, #8
    // mov r3, #0x14
    // ldrsh r3, [r4, r3]
    // add r0, r5, #0
    // mov r1, #0xb
    // lsl r3, r3, #0x18
    // add r2, r6, #0
    // lsr r3, r3, #0x18
    // bl ov90_022592A8
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // cmp r4, #0
    // beq _02259E14
    // add r0, r5, #0
    // bl ov90_022591F4
    // ldr r2, [sp, #0x18]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov90_02259220
    // mov r0, #0x10
    // str r0, [sp]
    // add r4, sp, #8
    // mov r3, #0x14
    // ldrsh r3, [r4, r3]
    // add r0, r5, #0
    // mov r1, #0xc
    // lsl r3, r3, #0x18
    // add r2, r6, #0
    // lsr r3, r3, #0x18
    // bl ov90_022592A8
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov90_02259E18(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x14)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x14)), (r4 + 4));
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x14)), 1);
}


void ov90_02259E38(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r1, #0
    // add r1, r2, #0
    // add r6, r0, #0
    // ldr r2, [sp, #0x1c]
    // add r0, r5, #0
    // add r4, r3, #0
    // bl ov90_02259234
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #8
    // cmp r0, #5
    // bne _02259E70
    // mov r0, #0x10
    // ldrsh r0, [r1, r0]
    // lsl r3, r4, #0x18
    // mov r1, #0xe
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // add r0, r5, #0
    // add r2, r6, #0
    // lsr r3, r3, #0x18
    // bl ov90_022592C4
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0x10
    // ldrsh r0, [r1, r0]
    // lsl r3, r4, #0x18
    // mov r1, #0xd
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // add r0, r5, #0
    // add r2, r6, #0
    // lsr r3, r3, #0x18
    // bl ov90_022592C4
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov90_02259E8C(void) {
    ScheduleWindowCopyToVram();
    ScheduleBgTilemapBufferTransfer(1);
}


void ov90_02259EA0(void) {
    Sprite_SetDrawFlag();
}


void ov90_02259EAC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // beq _02259EBE
    // bl Sprite_Delete
    // mov r0, #0
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // beq _02259ECC
    // bl Sprite_Delete
    // mov r0, #0
    // str r0, [r4, #0x14]
    // add r0, r4, #0
    // bl WindowIsInUse
    // cmp r0, #1
    // bne _02259EDC
    // add r0, r4, #0
    // bl RemoveWindow
    // pop {r4, pc}
    // TODO: decompile
}


void ov90_02259EE0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r2, #0
    // cmp r1, #0
    // ble _02259EFC
    // lsl r0, r1, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _02259F0A
    // lsl r0, r1, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // add r2, r0, #0
    // mov r0, #8
    // str r0, [sp]
    // add r0, r5, #0
    // mov r3, #7
    // ldr r1, _02259F3C ; =0xFFF01000
    // add r0, #0x1c
    // lsl r3, r3, #0xe
    // bl ov90_02258CF0
    // mov r0, #0
    // strh r0, [r5, #0x30]
    // ldr r0, _02259F40 ; =0x0000057E
    // strh r4, [r5, #0x32]
    // str r0, [r5, #0x34]
    // ldr r1, [r5, #0x1c]
    // add r0, r5, #0
    // asr r1, r1, #0xc
    // neg r1, r1
    // bl ov90_02259FC8
    // pop {r3, r4, r5, pc}
    // nop
    // _02259F3C: .word 0xFFF01000
    // _02259F40: .word 0x0000057E
    // TODO: decompile
}


void ov90_02259F44(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #8
    // str r0, [sp]
    // add r4, r1, #0
    // add r0, r5, #0
    // ldr r1, [r5, #0x1c]
    // ldr r2, _02259F74 ; =0xFFF01000
    // add r0, #0x1c
    // mov r3, #0
    // bl ov90_02258CF0
    // mov r0, #0
    // strh r0, [r5, #0x30]
    // ldr r0, _02259F78 ; =0x0000057F
    // strh r4, [r5, #0x32]
    // str r0, [r5, #0x34]
    // ldr r1, [r5, #0x1c]
    // add r0, r5, #0
    // asr r1, r1, #0xc
    // neg r1, r1
    // bl ov90_02259FC8
    // pop {r3, r4, r5, pc}
    // _02259F74: .word 0xFFF01000
    // _02259F78: .word 0x0000057F
    // TODO: decompile
}


void ov90_02259F7C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x32
    // ldrsh r0, [r5, r0]
    // cmp r0, #0
    // bgt _02259FBE
    // mov r0, #0x30
    // ldrsh r0, [r5, r0]
    // cmp r0, #0
    // bne _02259F9A
    // ldr r0, [r5, #0x34]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl PlaySE
    // mov r1, #0x30
    // ldrsh r0, [r5, r1]
    // add r0, r0, #1
    // strh r0, [r5, #0x30]
    // ldrsh r1, [r5, r1]
    // add r0, r5, #0
    // add r0, #0x1c
    // bl ov90_02258D4C
    // ldr r1, [r5, #0x1c]
    // add r4, r0, #0
    // asr r1, r1, #0xc
    // add r0, r5, #0
    // neg r1, r1
    // bl ov90_02259FC8
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // sub r0, r0, #1
    // strh r0, [r5, #0x32]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov90_02259FC8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldrh r0, [r5, #0x18]
    // add r4, r1, #0
    // ldrb r2, [r5, #0x1b]
    // sub r1, r0, #1
    // mov r0, #0xc
    // add r3, r1, #0
    // mul r3, r0
    // ldr r0, _0225A040 ; =ov90_0225C324
    // ldr r6, _0225A044 ; =ov90_0225C31C
    // add r0, r0, r3
    // ldrb r0, [r2, r0]
    // add r3, r6, r3
    // ldrb r2, [r2, r3]
    // lsl r1, r0, #2
    // ldr r0, _0225A048 ; =ov90_0225C276
    // lsl r2, r2, #3
    // ldrsh r0, [r0, r1]
    // add r0, r0, r2
    // ldr r2, _0225A04C ; =ov90_0225C274
    // lsl r0, r0, #0x18
    // ldrsh r1, [r2, r1]
    // lsr r0, r0, #0x18
    // lsl r0, r0, #0xc
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // add r1, r1, r4
    // lsl r1, r1, #0xc
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x10]
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // ldrh r0, [r5, #0x18]
    // add r4, #0x18
    // sub r1, r0, #1
    // add r2, r1, #0
    // mov r0, #0xc
    // mul r2, r0
    // add r0, r6, #0
    // ldrb r1, [r5, #0x1b]
    // add r0, r0, r2
    // ldrb r0, [r1, r0]
    // lsl r0, r0, #3
    // add r0, #0x15
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // lsl r0, r4, #0xc
    // str r0, [sp]
    // lsl r0, r1, #0xc
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x14]
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _0225A040: .word ov90_0225C324
    // _0225A044: .word ov90_0225C31C
    // _0225A048: .word ov90_0225C276
    // _0225A04C: .word ov90_0225C274
    // TODO: decompile
}


void ov90_0225A050(void) {
    // push {r4, r5, r6, r7}
    // add r5, r0, #0
    // ldr r4, _0225A080 ; =0x00000000
    // beq _0225A076
    // ldr r7, _0225A084 ; =ov90_0225C284
    // lsl r6, r5, #2
    // add r7, r7, r6
    // sub r6, r7, #4
    // ldrb r6, [r6]
    // cmp r1, r6
    // bne _0225A068
    // add r3, r4, #0
    // cmp r2, r6
    // bne _0225A06E
    // add r0, r4, #0
    // add r4, r4, #1
    // add r7, r7, #1
    // cmp r4, r5
    // blo _0225A05E
    // sub r0, r3, r0
    // bpl _0225A07C
    // add r0, r0, r5
    // pop {r4, r5, r6, r7}
    // bx lr
    // _0225A080: .word 0x00000000
    // _0225A084: .word ov90_0225C284
    // TODO: decompile
}


void ov90_0225A088(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #0xc1
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // add r4, r1, #0
    // str r2, [sp]
    // cmp r0, #0
    // beq _0225A09E
    // bl GF_AssertFail
    // mov r1, #0
    // str r4, [r6]
    // add r3, r1, #0
    // ldr r0, [r4]
    // add r2, r1, #0
    // sub r3, #0xff
    // bl BgSetPosTextAndCommit
    // ldr r0, [r6]
    // mov r2, #0
    // add r3, r2, #0
    // ldr r0, [r0]
    // mov r1, #1
    // sub r3, #0xff
    // bl BgSetPosTextAndCommit
    // mov r7, #6
    // mov r4, #0
    // add r5, r6, #4
    // lsl r7, r7, #6
    // mov r2, #6
    // ldr r0, _0225A100 ; =0x0000FF01
    // add r1, r5, #0
    // lsl r2, r2, #6
    // bl MIi_CpuClear16
    // add r4, r4, #1
    // add r5, r5, r7
    // cmp r4, #2
    // blt _0225A0C6
    // mov r2, #0x61
    // lsl r2, r2, #2
    // ldr r0, [sp]
    // add r1, r6, #4
    // add r2, r6, r2
    // bl sub_02014A08
    // mov r1, #0xc1
    // lsl r1, r1, #2
    // str r0, [r6, r1]
    // ldr r0, [r6, r1]
    // mov r1, #0
    // bl sub_02014A78
    // ldr r0, _0225A104 ; =ov90_0225A1B8
    // add r1, r6, #0
    // bl Main_SetHBlankIntrCB
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225A100: .word 0x0000FF01
    // _0225A104: .word ov90_0225A1B8
    // TODO: decompile
}


void ov90_0225A108(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xc1
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0225A130
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetHBlankIntrCB
    // mov r0, #0xc1
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl sub_02014A38
    // mov r0, #0xc1
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // pop {r4, pc}
    // TODO: decompile
}


void ov90_0225A134(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // mov r1, #0xc1
    // lsl r1, r1, #2
    // str r0, [sp]
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // bne _0225A148
    // bl GF_AssertFail
    // mov r1, #0xc1
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // bl sub_02014A4C
    // ldr r1, _0225A194 ; =ov90_0225C31C
    // add r5, r0, #0
    // mov r6, #0
    // mov r7, #0xc
    // ldrh r0, [r4, #0x18]
    // sub r3, r6, #1
    // add r2, r0, #0
    // mul r2, r7
    // ldrb r0, [r4, #0x1b]
    // add r2, r1, r2
    // add r0, r0, r2
    // sub r0, #0xc
    // ldrb r0, [r0]
    // lsl r0, r0, #3
    // add r2, r3, r0
    // bpl _0225A176
    // add r2, #0xc0
    // ldr r0, [r4, #0x1c]
    // lsl r2, r2, #1
    // asr r0, r0, #0xc
    // add r6, r6, #1
    // strh r0, [r5, r2]
    // cmp r6, #0x30
    // blt _0225A15C
    // mov r1, #0xc1
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #1
    // bl sub_02014A78
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225A194: .word ov90_0225C31C
    // TODO: decompile
}


void ov90_0225A198(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xc1
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0225A1B6
    // bl sub_02014A8C
    // mov r0, #0xc1
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_02014A78
    // pop {r4, pc}
    // TODO: decompile
}


void ov90_0225A1B8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _0225A1FC ; =0x04000006
    // ldrh r4, [r0]
    // cmp r4, #0xc0
    // bge _0225A1F8
    // mov r0, #0xc1
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl sub_02014A60
    // add r6, r0, #0
    // ldr r0, _0225A200 ; =0x04000004
    // ldrh r1, [r0]
    // mov r0, #2
    // tst r0, r1
    // beq _0225A1F8
    // lsl r4, r4, #1
    // ldr r0, [r5]
    // mov r1, #0
    // ldrsh r3, [r6, r4]
    // ldr r0, [r0]
    // add r2, r1, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r5]
    // ldrsh r3, [r6, r4]
    // ldr r0, [r0]
    // mov r1, #1
    // mov r2, #0
    // bl BgSetPosTextAndCommit
    // pop {r4, r5, r6, pc}
    // nop
    // _0225A1FC: .word 0x04000006
    // _0225A200: .word 0x04000004
    // TODO: decompile
}


void ov90_0225A204(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r1, #0
    // str r0, [sp]
    // ldrb r0, [r5, #8]
    // mov r4, #0
    // cmp r0, #0
    // ble _0225A252
    // ldr r6, [sp]
    // add r1, r5, r4
    // ldrb r1, [r1, #4]
    // add r0, r5, #0
    // bl ov90_022588CC
    // str r0, [r6, #8]
    // cmp r0, #0
    // bne _0225A22A
    // bl GF_AssertFail
    // add r0, r5, r4
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r7, r0, r4
    // ldr r0, [sp, #4]
    // ldrb r0, [r0, #4]
    // bl sub_020348A8
    // ldr r1, [sp]
    // strb r0, [r1, r4]
    // ldr r0, [sp, #4]
    // ldrb r0, [r0, #4]
    // bl sub_020348CC
    // strb r0, [r7, #4]
    // ldrb r0, [r5, #8]
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, r0
    // blt _0225A216
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_0225A258(void) {
    // push {r3, r4, r5, r6}
    // ldrb r4, [r0, #8]
    // mov r3, #0
    // add r2, r3, #0
    // sub r4, r4, #1
    // cmp r4, #0
    // ble _0225A286
    // mov r5, #1
    // add r4, r1, r2
    // ldrb r6, [r4, #1]
    // ldrb r4, [r1, r2]
    // cmp r4, r6
    // bne _0225A27A
    // cmp r4, #0
    // beq _0225A27A
    // cmp r6, #0
    // bne _0225A27C
    // add r3, r5, #0
    // ldrb r4, [r0, #8]
    // add r2, r2, #1
    // sub r4, r4, #1
    // cmp r2, r4
    // blt _0225A268
    // add r0, r3, #0
    // pop {r3, r4, r5, r6}
    // bx lr
    // TODO: decompile
}


void ov90_0225A28C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r1, #3
    // bl _u32_div_f
    // add r4, r1, #0
    // add r0, r5, #0
    // mov r1, #3
    // bl _u32_div_f
    // add r1, r4, #1
    // cmp r1, #3
    // bhs _0225A2A8
    // add r4, r1, #0
    // lsl r1, r0, #1
    // add r0, r0, r1
    // add r0, r0, r4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov90_0225A2B0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0xb
    // str r0, [sp]
    // mov r0, #0x14
    // str r0, [sp, #4]
    // mov r0, #0xa
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // ldr r0, _0225A33C ; =0x00000201
    // add r4, r1, #0
    // str r0, [sp, #0x10]
    // add r7, r2, #0
    // add r6, r3, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // mov r2, #1
    // mov r3, #6
    // bl AddWindowParameterized
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, [sp, #0x2c]
    // mov r0, #0x80
    // bl String_New
    // str r0, [r5, #0x14]
    // add r0, r7, #0
    // add r1, r6, #0
    // bl ov90_0225927C
    // ldr r1, [r5, #0x14]
    // add r0, r7, #0
    // mov r2, #0x10
    // bl ov90_0225928C
    // mov r0, #1
    // mov r1, #0
    // str r6, [r5, #0x10]
    // bl GfGfx_EngineATogglePlanes
    // mov r3, #0
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // ldr r2, [r4]
    // mov r1, #7
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r3, #0
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // ldr r2, [r4]
    // mov r1, #0xa
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0225A33C: .word 0x00000201
    // TODO: decompile
}


void ov90_0225A340(void) {
    RemoveWindow();
    String_Delete(*((u32*)(r4 + 0x14)));
}


void ov90_0225A350(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // strh r0, [r5, #0x2c]
    // strh r0, [r5, #0x2e]
    // ldr r0, [r5, #0x10]
    // add r4, r1, #0
    // add r7, r2, #0
    // lsl r6, r0, #2
    // ldr r1, _0225A3D0 ; =ov90_0225C258
    // ldr r2, _0225A3D4 ; =ov90_0225C228
    // ldr r3, _0225A3D8 ; =ov90_0225C21C
    // mov r0, #0x10
    // str r0, [sp]
    // add r0, r5, #0
    // ldr r1, [r1, r6]
    // ldr r2, [r2, r6]
    // ldr r3, [r3, r6]
    // add r0, #0x18
    // bl ov90_02258CF0
    // ldr r2, [r5, #0x18]
    // add r0, r5, #0
    // add r1, r4, #0
    // asr r2, r2, #0xc
    // bl ov90_0225A5BC
    // mov r0, #2
    // add r1, r7, #0
    // bl FontID_Alloc
    // ldr r1, [r5, #0x14]
    // mov r0, #2
    // mov r2, #0
    // bl FontID_String_GetWidth
    // mov r2, #0
    // str r2, [sp]
    // add r3, r0, #0
    // str r2, [sp, #4]
    // ldr r0, [r5, #0x10]
    // lsr r4, r3, #1
    // lsl r1, r0, #2
    // ldr r0, _0225A3DC ; =ov90_0225C210
    // mov r3, #0x50
    // ldr r0, [r0, r1]
    // mov r1, #2
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r2, [r5, #0x14]
    // add r0, r5, #0
    // sub r3, r3, r4
    // bl AddTextPrinterParameterizedWithColor
    // mov r0, #2
    // bl FontID_Release
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225A3D0: .word ov90_0225C258
    // _0225A3D4: .word ov90_0225C228
    // _0225A3D8: .word ov90_0225C21C
    // _0225A3DC: .word ov90_0225C210
    // TODO: decompile
}


void ov90_0225A3E0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // mov r0, #0
    // strh r0, [r5, #0x2c]
    // strh r0, [r5, #0x2e]
    // ldr r0, [r5, #0x10]
    // add r4, r1, #0
    // lsl r3, r0, #2
    // ldr r1, _0225A41C ; =ov90_0225C228
    // ldr r2, _0225A420 ; =ov90_0225C1F8
    // mov r0, #8
    // str r0, [sp]
    // add r0, r5, #0
    // ldr r6, _0225A424 ; =ov90_0225C204
    // ldr r1, [r1, r3]
    // ldr r2, [r2, r3]
    // ldr r3, [r6, r3]
    // add r0, #0x18
    // bl ov90_02258CF0
    // ldr r2, [r5, #0x18]
    // add r0, r5, #0
    // add r1, r4, #0
    // asr r2, r2, #0xc
    // bl ov90_0225A60C
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0225A41C: .word ov90_0225C228
    // _0225A420: .word ov90_0225C1F8
    // _0225A424: .word ov90_0225C204
    // TODO: decompile
}


void ov90_0225A428(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #0x2e
    // ldrsh r0, [r4, r0]
    // add r5, r1, #0
    // cmp r0, #3
    // bhi _0225A528
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225A444: ; jump table
    // mov r1, #0x2c
    // ldrsh r1, [r4, r1]
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov90_02258D4C
    // ldr r2, [r4, #0x18]
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // asr r2, r2, #0xc
    // bl ov90_0225A60C
    // mov r0, #0x2c
    // ldrsh r0, [r4, r0]
    // add r0, r0, #1
    // strh r0, [r4, #0x2c]
    // cmp r6, #1
    // bne _0225A528
    // ldr r0, _0225A530 ; =0x00000581
    // bl PlaySE
    // ldr r0, [r4, #0x10]
    // ldr r1, _0225A534 ; =ov90_0225C228
    // lsl r3, r0, #2
    // ldr r2, _0225A538 ; =ov90_0225C234
    // mov r0, #4
    // str r0, [sp]
    // add r0, r4, #0
    // ldr r5, _0225A53C ; =ov90_0225C240
    // ldr r1, [r1, r3]
    // ldr r2, [r2, r3]
    // ldr r3, [r5, r3]
    // add r0, #0x18
    // bl ov90_02258CF0
    // mov r0, #0x2e
    // ldrsh r0, [r4, r0]
    // add r0, r0, #1
    // strh r0, [r4, #0x2e]
    // mov r0, #0
    // strh r0, [r4, #0x2c]
    // b _0225A528
    // mov r1, #0x2c
    // ldrsh r1, [r4, r1]
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov90_02258D4C
    // ldr r2, [r4, #0x18]
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // asr r2, r2, #0xc
    // bl ov90_0225A60C
    // mov r0, #0x2c
    // ldrsh r0, [r4, r0]
    // add r0, r0, #1
    // strh r0, [r4, #0x2c]
    // cmp r6, #1
    // bne _0225A528
    // ldr r0, [r4, #0x10]
    // ldr r1, _0225A538 ; =ov90_0225C234
    // lsl r3, r0, #2
    // ldr r2, _0225A534 ; =ov90_0225C228
    // mov r0, #4
    // str r0, [sp]
    // add r0, r4, #0
    // ldr r5, _0225A540 ; =ov90_0225C24C
    // ldr r1, [r1, r3]
    // ldr r2, [r2, r3]
    // ldr r3, [r5, r3]
    // add r0, #0x18
    // bl ov90_02258CF0
    // mov r0, #0x2e
    // ldrsh r0, [r4, r0]
    // add r0, r0, #1
    // strh r0, [r4, #0x2e]
    // mov r0, #0
    // strh r0, [r4, #0x2c]
    // b _0225A528
    // mov r1, #0x2c
    // ldrsh r1, [r4, r1]
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov90_02258D4C
    // ldr r2, [r4, #0x18]
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // asr r2, r2, #0xc
    // bl ov90_0225A60C
    // mov r0, #0x2c
    // ldrsh r0, [r4, r0]
    // add r0, r0, #1
    // strh r0, [r4, #0x2c]
    // cmp r6, #1
    // bne _0225A528
    // mov r0, #0x2e
    // ldrsh r0, [r4, r0]
    // add r0, r0, #1
    // strh r0, [r4, #0x2e]
    // b _0225A528
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0225A530: .word 0x00000581
    // _0225A534: .word ov90_0225C228
    // _0225A538: .word ov90_0225C234
    // _0225A53C: .word ov90_0225C240
    // _0225A540: .word ov90_0225C24C
    // TODO: decompile
}


void ov90_0225A544(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // mov r1, #0x2e
    // ldrsh r1, [r5, r1]
    // cmp r1, #0
    // beq _0225A558
    // cmp r1, #1
    // beq _0225A586
    // b _0225A5B8
    // mov r1, #0x2c
    // ldrsh r1, [r5, r1]
    // add r0, #0x18
    // bl ov90_02258D4C
    // ldr r2, [r5, #0x18]
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // asr r2, r2, #0xc
    // bl ov90_0225A60C
    // mov r0, #0x2c
    // ldrsh r0, [r5, r0]
    // add r0, r0, #1
    // strh r0, [r5, #0x2c]
    // cmp r6, #1
    // bne _0225A5B8
    // mov r0, #0x2e
    // ldrsh r0, [r5, r0]
    // add r0, r0, #1
    // strh r0, [r5, #0x2e]
    // b _0225A5B8
    // bl ClearWindowTilemapAndCopyToVram
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov90_0225A5BC
    // ldr r0, [r4]
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4]
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov90_0225A5BC(void) {
    // push {r3, r4, r5, lr}
    // ldr r0, [r0, #0x10]
    // add r5, r1, #0
    // add r4, r2, #0
    // cmp r0, #0
    // beq _0225A5D2
    // cmp r0, #1
    // beq _0225A5D2
    // cmp r0, #2
    // beq _0225A5EC
    // b _0225A606
    // mov r1, #0
    // ldr r0, [r5]
    // add r2, r1, #0
    // add r3, r4, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r5]
    // mov r1, #1
    // mov r2, #0
    // add r3, r4, #0
    // bl BgSetPosTextAndCommit
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5]
    // mov r1, #0
    // mov r2, #3
    // add r3, r4, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r5]
    // mov r1, #1
    // mov r2, #3
    // add r3, r4, #0
    // bl BgSetPosTextAndCommit
    // pop {r3, r4, r5, pc}
    // bl GF_AssertFail
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov90_0225A60C(void) {
    // push {r3, r4, r5, lr}
    // ldr r0, [r0, #0x10]
    // add r5, r1, #0
    // add r4, r2, #0
    // cmp r0, #0
    // beq _0225A622
    // cmp r0, #1
    // beq _0225A622
    // cmp r0, #2
    // beq _0225A63C
    // b _0225A656
    // mov r1, #0
    // ldr r0, [r5]
    // add r2, r1, #0
    // add r3, r4, #0
    // bl ScheduleSetBgPosText
    // ldr r0, [r5]
    // mov r1, #1
    // mov r2, #0
    // add r3, r4, #0
    // bl ScheduleSetBgPosText
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5]
    // mov r1, #0
    // mov r2, #3
    // add r3, r4, #0
    // bl ScheduleSetBgPosText
    // ldr r0, [r5]
    // mov r1, #1
    // mov r2, #3
    // add r3, r4, #0
    // bl ScheduleSetBgPosText
    // pop {r3, r4, r5, pc}
    // bl GF_AssertFail
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov90_0225A65C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // add r5, r2, #0
    // cmp r1, #0
    // beq _0225A672
    // cmp r1, #1
    // beq _0225A676
    // cmp r1, #2
    // beq _0225A67A
    // b _0225A67E
    // mov r0, #1
    // b _0225A680
    // mov r0, #2
    // b _0225A680
    // mov r0, #0
    // b _0225A680
    // mov r0, #1
    // lsl r4, r0, #5
    // mov r0, #0xa0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #5
    // mov r2, #0
    // add r3, r4, #0
    // str r5, [sp, #8]
    // bl GfGfxLoader_GXLoadPalWithSrcOffsetFromOpenNarc
    // mov r0, #0xa0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #5
    // mov r2, #4
    // add r3, r4, #0
    // str r5, [sp, #8]
    // bl GfGfxLoader_GXLoadPalWithSrcOffsetFromOpenNarc
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov90_0225A6B4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r1, #0
    // add r5, r3, #0
    // add r6, r0, #0
    // ldr r1, _0225A820 ; =0x00000664
    // add r0, r5, #0
    // str r2, [sp, #4]
    // bl Heap_Alloc
    // ldr r2, _0225A820 ; =0x00000664
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // add r2, r4, #0
    // add r2, #0x1c
    // mov r1, #0x18
    // ldrb r0, [r7]
    // add r7, r7, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _0225A6D8
    // add r2, r4, #0
    // add r2, #0xc
    // mov r1, #0x10
    // ldrb r0, [r6]
    // add r6, r6, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _0225A6EA
    // ldr r0, [sp, #4]
    // strb r0, [r4, #7]
    // add r0, r4, #0
    // bl ov90_0225C15C
    // ldr r3, _0225A824 ; =0x04000050
    // mov r1, #0
    // strh r1, [r3]
    // ldr r0, _0225A828 ; =0x04001050
    // sub r3, #0x50
    // strh r1, [r0]
    // ldr r2, [r3]
    // ldr r1, _0225A82C ; =0xFFFF1FFF
    // sub r0, #0x50
    // and r2, r1
    // str r2, [r3]
    // ldr r2, [r0]
    // and r1, r2
    // str r1, [r0]
    // ldr r0, _0225A830 ; =ov90_0225C2F4
    // bl GfGfx_SetBanks
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x34
    // add r1, #0xc
    // strh r5, [r4, #2]
    // bl ov90_0225A204
    // mov r0, #0x10
    // add r1, r5, #0
    // bl GF_CreateVramTransferManager
    // add r0, r4, #0
    // ldr r1, _0225A834 ; =ov90_0225C264
    // ldr r2, _0225A838 ; =ov90_0225C43C
    // add r0, #0x4c
    // mov r3, #6
    // str r5, [sp]
    // bl ov90_02258FF0
    // add r0, r4, #0
    // mov r2, #2
    // add r0, #0xa0
    // mov r1, #0x20
    // add r3, r2, #0
    // str r5, [sp]
    // bl ov90_022590CC
    // mov r0, #0x73
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #2
    // add r2, r5, #0
    // bl ov90_02258DD0
    // add r0, r4, #0
    // add r0, #0x58
    // add r1, r5, #0
    // bl ov90_02259184
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov90_0225A850
    // add r0, r4, #0
    // ldrb r1, [r4, #0x15]
    // add r0, #0xc
    // bl ov90_0225888C
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xc
    // bl ov90_022588A4
    // str r5, [sp]
    // add r3, r0, #0
    // add r0, r4, #0
    // add r1, r4, #0
    // ldr r2, [r4, #0xc]
    // add r0, #0x68
    // add r1, #0x4c
    // bl ov90_0225938C
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // add r1, r4, #0
    // ldrb r2, [r4, #0x16]
    // add r0, r4, r0
    // add r1, #0x4c
    // add r3, r5, #0
    // bl ov90_0225B340
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0xc
    // add r1, #0x34
    // bl ov90_0225A258
    // strb r0, [r4, #5]
    // ldrb r0, [r4, #7]
    // cmp r0, #0
    // beq _0225A7CE
    // cmp r0, #1
    // beq _0225A7CE
    // cmp r0, #2
    // beq _0225A7DE
    // b _0225A7EE
    // ldr r0, _0225A83C ; =ov90_0225A980
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r1, _0225A840 ; =0x00000644
    // str r0, [r4, r1]
    // b _0225A800
    // ldr r0, _0225A844 ; =ov90_0225AE4C
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r1, _0225A840 ; =0x00000644
    // str r0, [r4, r1]
    // b _0225A800
    // bl GF_AssertFail
    // ldr r0, _0225A83C ; =ov90_0225A980
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r1, _0225A840 ; =0x00000644
    // str r0, [r4, r1]
    // ldr r0, _0225A848 ; =ov90_0225B230
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnVWaitQueue
    // ldr r1, _0225A84C ; =0x00000648
    // str r0, [r4, r1]
    // ldrb r0, [r4, #0x16]
    // cmp r0, #0
    // beq _0225A81A
    // add r0, r5, #0
    // bl ov00_021E69A8
    // add r0, r4, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225A820: .word 0x00000664
    // _0225A824: .word 0x04000050
    // _0225A828: .word 0x04001050
    // _0225A82C: .word 0xFFFF1FFF
    // _0225A830: .word ov90_0225C2F4
    // _0225A834: .word ov90_0225C264
    // _0225A838: .word ov90_0225C43C
    // _0225A83C: .word ov90_0225A980
    // _0225A840: .word 0x00000644
    // _0225A844: .word ov90_0225AE4C
    // _0225A848: .word ov90_0225B230
    // _0225A84C: .word 0x00000648
    // TODO: decompile
}


void ov90_0225A850(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0xc8
    // add r4, r1, #0
    // bl NARC_New
    // mov r1, #0x12
    // lsl r1, r1, #4
    // str r1, [sp]
    // mov r2, #0
    // mov r1, #4
    // add r3, r2, #0
    // add r6, r0, #0
    // str r4, [sp, #4]
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r0, #0x12
    // lsl r0, r0, #4
    // str r0, [sp]
    // mov r1, #4
    // add r0, r6, #0
    // add r2, r1, #0
    // mov r3, #0
    // str r4, [sp, #4]
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldr r2, [r5, #0x4c]
    // add r0, r6, #0
    // mov r1, #6
    // mov r3, #1
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r1, #0
    // mov r0, #1
    // str r1, [sp]
    // lsl r0, r0, #0xe
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r4, [sp, #0xc]
    // ldr r2, [r5, #0x4c]
    // add r0, r6, #0
    // mov r1, #6
    // mov r3, #5
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r3, #0x96
    // lsl r3, r3, #2
    // add r0, r6, #0
    // mov r1, #9
    // mov r2, #0
    // add r3, r5, r3
    // str r4, [sp]
    // bl GfGfxLoader_GetScrnDataFromOpenNarc
    // mov r1, #0x95
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldr r2, [r5, #0x4c]
    // add r0, r6, #0
    // mov r1, #8
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldr r2, [r5, #0x4c]
    // add r0, r6, #0
    // mov r1, #8
    // mov r3, #5
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldrb r1, [r5, #7]
    // add r0, r6, #0
    // add r2, r4, #0
    // bl ov90_0225A65C
    // mov r0, #0xc
    // str r0, [sp]
    // mov r0, #0xd
    // str r0, [sp, #4]
    // mov r0, #0xe
    // str r0, [sp, #8]
    // ldr r0, _0225A95C ; =0x00001388
    // add r1, r6, #0
    // str r0, [sp, #0xc]
    // mov r0, #0x73
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r2, #0xb
    // mov r3, #5
    // str r4, [sp, #0x10]
    // bl ov90_02258E54
    // mov r1, #0x79
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov90_0225B254
    // mov r3, #0x82
    // lsl r3, r3, #2
    // add r0, r5, r3
    // add r1, r5, #0
    // add r2, r5, #0
    // sub r3, #0x3c
    // str r6, [sp]
    // add r1, #0x4c
    // add r2, #0xa0
    // add r3, r5, r3
    // str r4, [sp, #4]
    // bl ov90_0225B59C
    // add r0, r6, #0
    // bl NARC_Delete
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0225A95C: .word 0x00001388
    // TODO: decompile
}


void ov90_0225A960(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x82
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov90_0225B690
    // mov r0, #0x95
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // add r0, r4, #0
    // bl ov90_0225B330
    // pop {r4, pc}
    // TODO: decompile
}


void ov90_0225A980(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldrb r1, [r4, #4]
    // cmp r1, #0x17
    // bhi _0225AA8A
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225A998: ; jump table
    // ldr r0, [r4, #0x18]
    // ldr r1, [r0]
    // ldr r0, _0225ACA8 ; =0x0000064C
    // str r1, [r4, r0]
    // ldrb r0, [r4, #0x17]
    // cmp r0, #1
    // bne _0225A9DC
    // mov r0, #0
    // strb r0, [r4, #9]
    // b _0225AA1A
    // add r0, r4, #0
    // bl ov90_0225BA14
    // ldrb r2, [r4, #0x15]
    // add r1, r4, r2
    // add r1, #0x2c
    // ldrb r1, [r1]
    // cmp r1, #0
    // bne _0225AA0A
    // lsl r1, r2, #2
    // add r1, r4, r1
    // ldr r1, [r1, #0x1c]
    // cmp r1, r0
    // bls _0225AA0A
    // ldr r0, [r4, #0x18]
    // ldr r0, [r0]
    // bl ov90_0225A28C
    // ldr r1, [r4, #0x18]
    // str r0, [r1]
    // mov r0, #1
    // strb r0, [r4, #9]
    // b _0225AA0E
    // mov r0, #0
    // strb r0, [r4, #9]
    // ldrb r0, [r4, #0x15]
    // cmp r0, #0
    // bne _0225AA1A
    // add r0, r4, #0
    // bl ov90_0225BA38
    // mov r0, #6
    // mov r1, #1
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldrh r0, [r4, #2]
    // ldr r3, _0225ACAC ; =0x0000FFFF
    // add r2, r1, #0
    // str r0, [sp, #8]
    // mov r0, #3
    // bl BeginNormalPaletteFade
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0225AA8A
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x68
    // add r1, #0x58
    // mov r2, #1
    // mov r3, #0
    // bl ov90_02259464
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // add r0, r4, #0
    // add r0, #0x68
    // mov r1, #0
    // bl ov90_02259538
    // cmp r0, #0
    // beq _0225AA8A
    // mov r0, #0x40
    // strh r0, [r4]
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _0225AA8A
    // sub r0, r0, #1
    // strh r0, [r4]
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _0225AA8C
    // b _0225AE1C
    // add r0, r4, #0
    // add r0, #0x68
    // mov r1, #0
    // mov r5, #1
    // bl ov90_022594FC
    // mov r0, #0xcf
    // lsl r0, r0, #2
    // add r1, r4, #0
    // ldrh r2, [r4, #2]
    // add r0, r4, r0
    // add r1, #0x4c
    // bl ov90_0225A088
    // add r0, r4, #0
    // bl ov90_0225BA14
    // ldrb r6, [r4, #0x14]
    // add r2, r0, #0
    // mov r1, #0
    // cmp r6, #0
    // ble _0225AACC
    // add r3, r4, #0
    // add r7, r1, #0
    // ldr r0, [r3, #0x1c]
    // cmp r0, r2
    // bls _0225AAC4
    // add r5, r7, #0
    // add r1, r1, #1
    // add r3, r3, #4
    // cmp r1, r6
    // blt _0225AABC
    // cmp r5, #1
    // bne _0225AADC
    // ldr r0, _0225ACB0 ; =0x00000652
    // mov r1, #0x10
    // strh r1, [r4, r0]
    // mov r0, #0x16
    // strb r0, [r4, #4]
    // b _0225AE1C
    // ldrb r0, [r4, #4]
    // mov r1, #4
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // mov r0, #0x65
    // lsl r0, r0, #4
    // strh r1, [r4, r0]
    // b _0225AE1C
    // mov r7, #0x65
    // mov r1, #0
    // mov r6, #1
    // lsl r7, r7, #4
    // ldrh r0, [r4, r7]
    // sub r0, r0, #1
    // strh r0, [r4, r7]
    // ldrb r3, [r4, #0x14]
    // mov r0, #0
    // cmp r3, #0
    // ble _0225AB1A
    // mov r2, #0x65
    // lsl r2, r2, #4
    // ldrh r2, [r4, r2]
    // add r5, r4, r0
    // add r5, #0x2c
    // ldrb r5, [r5]
    // cmp r2, r5
    // bne _0225AB14
    // add r1, r6, #0
    // add r0, r0, #1
    // cmp r0, r3
    // blt _0225AB08
    // cmp r1, #0
    // beq _0225AAF4
    // mov r1, #0x65
    // lsl r1, r1, #4
    // ldrh r0, [r4, r1]
    // cmp r0, #3
    // bhi _0225AB4C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225AB34: ; jump table
    // mov r2, #0x10
    // add r0, r1, #2
    // strh r2, [r4, r0]
    // b _0225AB50
    // mov r2, #0x20
    // add r0, r1, #2
    // strh r2, [r4, r0]
    // b _0225AB50
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl ov90_0225B8F0
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // ldr r0, _0225ACB0 ; =0x00000652
    // ldrh r1, [r4, r0]
    // sub r1, r1, #1
    // strh r1, [r4, r0]
    // add r0, r4, #0
    // bl ov90_0225B8F0
    // ldr r0, _0225ACB0 ; =0x00000652
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // bne _0225ABFC
    // ldrb r0, [r4, #0x14]
    // mov r5, #0
    // cmp r0, #0
    // ble _0225ABB2
    // mov r6, #0x65
    // add r7, r5, #0
    // lsl r6, r6, #4
    // add r1, r4, r5
    // add r1, #0x2c
    // ldrb r2, [r1]
    // ldrh r1, [r4, r6]
    // add r0, r7, #0
    // cmp r1, r2
    // bne _0225AB94
    // mov r0, #1
    // b _0225AB9E
    // cmp r1, #1
    // bne _0225AB9E
    // cmp r2, #0
    // bne _0225AB9E
    // mov r0, #1
    // cmp r0, #0
    // beq _0225ABAA
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov90_0225B7FC
    // ldrb r0, [r4, #0x14]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _0225AB82
    // mov r0, #0x65
    // lsl r0, r0, #4
    // ldrh r0, [r4, r0]
    // cmp r0, #1
    // bls _0225ABC2
    // mov r0, #5
    // strb r0, [r4, #4]
    // b _0225AE1C
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // add r0, r4, #0
    // bl ov90_0225B8F0
    // cmp r0, #0
    // beq _0225ABFC
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // add r0, r1, #1
    // strb r0, [r4, #4]
    // add r0, r4, #0
    // bl ov90_0225B274
    // mov r0, #0x1e
    // strh r0, [r4]
    // b _0225AE1C
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _0225ABF6
    // sub r0, r0, #1
    // strh r0, [r4]
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _0225ABFE
    // b _0225AE1C
    // mov r0, #0xa
    // strb r0, [r4, #4]
    // mov r0, #0
    // strh r0, [r4]
    // b _0225AE1C
    // ldrb r1, [r4, #0x15]
    // add r0, r4, r1
    // add r0, #0x2c
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _0225AC18
    // mov r5, #0x11
    // b _0225AC1A
    // mov r5, #0x12
    // lsl r1, r1, #2
    // add r1, r4, r1
    // add r0, r4, #0
    // ldr r1, [r1, #0x3c]
    // add r0, #0x58
    // bl ov90_02259200
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x68
    // add r1, #0x58
    // add r2, r5, #0
    // mov r3, #0
    // bl ov90_02259464
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // add r0, r4, #0
    // add r0, #0x68
    // mov r1, #0
    // bl ov90_02259538
    // cmp r0, #0
    // beq _0225AD06
    // add r0, r4, #0
    // bl ov90_0225B978
    // cmp r0, #1
    // bne _0225AD06
    // ldrb r0, [r4, #0x17]
    // cmp r0, #1
    // bne _0225AC68
    // mov r0, #0x66
    // strh r0, [r4]
    // mov r0, #0xe
    // strb r0, [r4, #4]
    // b _0225AE1C
    // mov r0, #0x66
    // strh r0, [r4]
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _0225AC80
    // sub r0, r0, #1
    // strh r0, [r4]
    // b _0225AE1C
    // ldrb r0, [r4, #9]
    // cmp r0, #0
    // beq _0225ACB4
    // ldr r1, [r4, #0x18]
    // add r0, r4, #0
    // ldr r1, [r1]
    // add r0, #0x58
    // bl ov90_0225926C
    // ldr r0, _0225ACA8 ; =0x0000064C
    // ldr r1, [r4, r0]
    // ldr r0, [r4, #0x18]
    // ldr r0, [r0]
    // cmp r1, r0
    // bne _0225ACA2
    // mov r5, #0x13
    // b _0225ACB6
    // mov r5, #2
    // b _0225ACB6
    // nop
    // _0225ACA8: .word 0x0000064C
    // _0225ACAC: .word 0x0000FFFF
    // _0225ACB0: .word 0x00000652
    // mov r5, #9
    // ldrb r1, [r4, #0x15]
    // add r0, r4, #0
    // add r0, #0x58
    // lsl r1, r1, #2
    // add r1, r4, r1
    // ldr r1, [r1, #0x3c]
    // bl ov90_02259200
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x68
    // add r1, #0x58
    // add r2, r5, #0
    // mov r3, #0
    // bl ov90_02259464
    // mov r0, #0xd
    // strb r0, [r4, #4]
    // b _0225AE1C
    // add r0, r4, #0
    // add r0, #0x68
    // mov r1, #0
    // bl ov90_02259538
    // cmp r0, #0
    // beq _0225AD06
    // mov r0, #0x66
    // strh r0, [r4]
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _0225AD06
    // sub r0, r0, #1
    // strh r0, [r4]
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _0225AD08
    // b _0225AE1C
    // add r0, r4, #0
    // add r0, #0x68
    // mov r1, #0
    // bl ov90_022594FC
    // mov r0, #0x1e
    // strh r0, [r4]
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _0225AD2A
    // sub r0, r0, #1
    // strh r0, [r4]
    // b _0225AE1C
    // mov r0, #0x82
    // bl sub_02037AC0
    // ldrb r0, [r4, #0x16]
    // cmp r0, #0
    // beq _0225AD3A
    // bl ov00_021E6A4C
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // mov r0, #0x82
    // bl sub_02037B38
    // cmp r0, #0
    // beq _0225AE1C
    // ldrb r0, [r4, #0x17]
    // cmp r0, #0
    // beq _0225AD58
    // mov r0, #0x13
    // strb r0, [r4, #4]
    // b _0225AE1C
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r1, #0
    // ldrh r0, [r4, #2]
    // add r2, r1, #0
    // add r3, r1, #0
    // str r0, [sp, #8]
    // mov r0, #3
    // bl BeginNormalPaletteFade
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0225AE1C
    // mov r0, #0x15
    // strb r0, [r4, #4]
    // b _0225AE1C
    // add r0, r4, #0
    // bl ov90_0225B9A8
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // ldrh r0, [r4, #2]
    // add r1, r4, #0
    // add r2, r4, #0
    // str r0, [sp]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldrb r3, [r4, #7]
    // add r0, r4, r0
    // add r1, #0x68
    // add r2, #0x58
    // bl ov90_0225B38C
    // cmp r0, #0
    // beq _0225AE1C
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov90_0225B538
    // strb r0, [r4, #8]
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // mov r0, #0xcf
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov90_0225A108
    // mov r0, #1
    // strb r0, [r4, #6]
    // b _0225AE1C
    // ldr r0, _0225AE48 ; =0x00000652
    // ldrh r1, [r4, r0]
    // sub r1, r1, #1
    // strh r1, [r4, r0]
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // bne _0225AE1C
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225AE1C
    // ldrb r0, [r4, #0x14]
    // mov r5, #0
    // cmp r0, #0
    // ble _0225AE18
    // sub r1, r0, #1
    // add r0, r4, r5
    // add r0, #0x2c
    // strb r1, [r0]
    // add r2, r4, r5
    // add r2, #0x2c
    // ldrb r2, [r2]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov90_0225B7FC
    // ldrb r0, [r4, #0x14]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _0225ADFA
    // mov r0, #7
    // strb r0, [r4, #4]
    // add r0, r4, #0
    // bl ov90_0225B2A8
    // add r0, r4, #0
    // add r0, #0xa0
    // bl ov90_02259170
    // ldr r0, [r4, #0x4c]
    // mov r1, #3
    // mov r2, #4
    // mov r3, #2
    // bl ScheduleSetBgPosText
    // ldr r0, [r4, #0x4c]
    // mov r1, #5
    // mov r2, #4
    // mov r3, #2
    // bl ScheduleSetBgPosText
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0225AE48: .word 0x00000652
    // TODO: decompile
}


void ov90_0225AE4C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r4, r1, #0
    // ldrb r0, [r4, #4]
    // cmp r0, #0x14
    // bhi _0225AF36
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225AE64: ; jump table
    // ldrb r0, [r4, #0x17]
    // cmp r0, #1
    // bne _0225AE9A
    // mov r0, #0
    // strb r0, [r4, #9]
    // b _0225AEC0
    // ldr r0, [r4, #0x30]
    // cmp r0, #0xa
    // blo _0225AEB0
    // ldr r0, [r4, #0x18]
    // ldr r0, [r0]
    // bl ov90_0225A28C
    // ldr r1, [r4, #0x18]
    // str r0, [r1]
    // mov r0, #1
    // b _0225AEB2
    // mov r0, #0
    // strb r0, [r4, #9]
    // ldrb r0, [r4, #0x15]
    // cmp r0, #0
    // bne _0225AEC0
    // add r0, r4, #0
    // bl ov90_0225BAA0
    // mov r0, #6
    // mov r1, #1
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldrh r0, [r4, #2]
    // ldr r3, _0225B1C4 ; =0x0000FFFF
    // add r2, r1, #0
    // str r0, [sp, #8]
    // mov r0, #3
    // bl BeginNormalPaletteFade
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0225AF36
    // ldrb r0, [r4, #4]
    // mov r1, #4
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // mov r0, #0x65
    // lsl r0, r0, #4
    // strh r1, [r4, r0]
    // b _0225B204
    // add r0, r4, #0
    // add r0, #0x68
    // add r1, #0x58
    // mov r2, #1
    // mov r3, #0
    // bl ov90_02259464
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // add r0, r4, #0
    // add r0, #0x68
    // mov r1, #0
    // bl ov90_02259538
    // cmp r0, #0
    // beq _0225AF36
    // mov r0, #0x66
    // strh r0, [r4]
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _0225AF36
    // sub r0, r0, #1
    // strh r0, [r4]
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _0225AF38
    // b _0225B204
    // add r0, r4, #0
    // add r0, #0x68
    // mov r1, #0
    // bl ov90_022594FC
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // mov r0, #0xcf
    // lsl r0, r0, #2
    // ldrh r2, [r4, #2]
    // add r0, r4, r0
    // add r1, #0x4c
    // bl ov90_0225A088
    // ldrb r1, [r4, #0x14]
    // mov r6, #0
    // cmp r1, #0
    // ble _0225B020
    // mov r0, #0x97
    // lsl r0, r0, #2
    // add r5, r4, r0
    // add r0, r4, #0
    // str r0, [sp, #0x1c]
    // add r0, #0x4c
    // str r0, [sp, #0x1c]
    // add r0, r4, #0
    // str r0, [sp, #0x20]
    // add r0, #0xa0
    // str r0, [sp, #0x20]
    // add r0, r4, #0
    // str r0, [sp, #0x24]
    // add r0, #0xc
    // str r0, [sp, #0x24]
    // add r0, r4, #0
    // str r0, [sp, #0x28]
    // add r0, #0x58
    // str r4, [sp, #0x18]
    // add r7, r6, #0
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // mov r3, #0x96
    // str r0, [sp]
    // str r6, [sp, #4]
    // ldrb r0, [r4, #0x15]
    // lsl r3, r3, #2
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0xc]
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // str r0, [sp, #0x10]
    // ldrh r0, [r4, #2]
    // str r0, [sp, #0x14]
    // ldrb r2, [r4, #7]
    // ldr r3, [r4, r3]
    // add r0, r5, #0
    // bl ov90_02259BCC
    // ldr r0, [sp, #0x24]
    // add r1, r6, #0
    // bl ov90_0225888C
    // add r1, r0, #0
    // ldr r0, [sp, #0x24]
    // bl ov90_022588A4
    // mov r1, #0
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // ldr r1, [sp, #0x28]
    // ldr r2, [r2, #0x3c]
    // add r0, r5, #0
    // mov r3, #8
    // bl ov90_02259D50
    // add r0, r4, r6
    // add r0, #0x38
    // ldrb r0, [r0]
    // add r3, r4, r6
    // add r3, #0x34
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // ldrb r2, [r4, #5]
    // ldrb r3, [r3]
    // ldr r1, [sp, #0x28]
    // add r0, r5, #0
    // bl ov90_02259DAC
    // ldr r1, [sp, #0x1c]
    // add r0, r5, #0
    // bl ov90_02259E8C
    // add r0, r5, #0
    // bl ov90_02259EA0
    // mov r1, #7
    // lsl r2, r7, #0x10
    // add r0, r5, #0
    // mvn r1, r1
    // asr r2, r2, #0x10
    // bl ov90_02259EE0
    // ldr r0, [sp, #0x18]
    // ldrb r1, [r4, #0x14]
    // add r0, r0, #4
    // add r6, r6, #1
    // add r5, #0x38
    // str r0, [sp, #0x18]
    // add r7, r7, #3
    // cmp r6, r1
    // blt _0225AF8A
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // mov r0, #0x10
    // strh r0, [r4]
    // b _0225B204
    // add r0, r4, #0
    // bl ov90_0225B8F0
    // cmp r0, #1
    // bne _0225B0BE
    // ldrh r0, [r4]
    // sub r0, r0, #1
    // strh r0, [r4]
    // ldrh r0, [r4]
    // cmp r0, #0
    // bne _0225B0BE
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r1, [r4, #0x30]
    // add r0, r4, r0
    // bl ov90_0225B6B0
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // mov r0, #0x82
    // lsl r0, r0, #2
    // add r0, r4, r0
    // add r1, #0x4c
    // bl ov90_0225B6C4
    // cmp r0, #1
    // bne _0225B0BE
    // ldrb r0, [r4, #9]
    // cmp r0, #1
    // bne _0225B072
    // add r0, r4, #0
    // bl ov90_0225B954
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // add r0, r4, #0
    // ldr r1, [r4, #0x30]
    // add r0, #0x58
    // bl ov90_02259250
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x68
    // add r1, #0x58
    // mov r2, #7
    // mov r3, #0
    // bl ov90_02259464
    // mov r0, #0x66
    // strh r0, [r4]
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // add r0, r4, #0
    // add r0, #0x68
    // mov r1, #0
    // bl ov90_02259538
    // cmp r0, #1
    // bne _0225B0BE
    // ldrh r0, [r4]
    // cmp r0, #0
    // bne _0225B0D8
    // add r0, r4, #0
    // bl ov90_0225B978
    // cmp r0, #1
    // beq _0225B0C0
    // b _0225B204
    // ldrb r0, [r4, #0x17]
    // cmp r0, #1
    // bne _0225B0D0
    // mov r0, #0x66
    // strh r0, [r4]
    // mov r0, #0xc
    // strb r0, [r4, #4]
    // b _0225B204
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // sub r0, r0, #1
    // strh r0, [r4]
    // b _0225B204
    // ldrb r0, [r4, #9]
    // cmp r0, #0
    // beq _0225B0E8
    // mov r2, #8
    // b _0225B0EA
    // mov r2, #9
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x68
    // add r1, #0x58
    // mov r3, #0
    // bl ov90_02259464
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // add r0, r4, #0
    // add r0, #0x68
    // mov r1, #0
    // bl ov90_02259538
    // cmp r0, #0
    // beq _0225B204
    // mov r0, #0x66
    // strh r0, [r4]
    // ldrb r0, [r4, #9]
    // cmp r0, #0
    // beq _0225B11E
    // mov r0, #0xd
    // strb r0, [r4, #4]
    // b _0225B204
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _0225B204
    // sub r0, r0, #1
    // strh r0, [r4]
    // ldrh r0, [r4]
    // cmp r0, #0
    // bne _0225B204
    // mov r0, #0xe
    // strb r0, [r4, #4]
    // b _0225B204
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _0225B146
    // sub r0, r0, #1
    // strh r0, [r4]
    // ldrh r0, [r4]
    // cmp r0, #0
    // bne _0225B204
    // mov r0, #0xe
    // strb r0, [r4, #4]
    // b _0225B204
    // ldrb r0, [r4, #0x16]
    // cmp r0, #0
    // beq _0225B15C
    // bl ov00_021E6A4C
    // mov r0, #0x82
    // bl sub_02037AC0
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // mov r0, #0x82
    // bl sub_02037B38
    // cmp r0, #0
    // beq _0225B204
    // ldrb r0, [r4, #0x17]
    // cmp r0, #0
    // beq _0225B180
    // mov r0, #0x12
    // strb r0, [r4, #4]
    // b _0225B204
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r1, #0
    // ldrh r0, [r4, #2]
    // add r2, r1, #0
    // add r3, r1, #0
    // str r0, [sp, #8]
    // mov r0, #3
    // bl BeginNormalPaletteFade
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0225B204
    // mov r0, #0x14
    // strb r0, [r4, #4]
    // b _0225B204
    // add r0, r4, #0
    // bl ov90_0225B9A8
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // _0225B1C4: .word 0x0000FFFF
    // ldrh r0, [r4, #2]
    // add r2, r4, #0
    // add r1, #0x68
    // str r0, [sp]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldrb r3, [r4, #7]
    // add r0, r4, r0
    // add r2, #0x58
    // bl ov90_0225B38C
    // cmp r0, #0
    // beq _0225B204
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov90_0225B538
    // strb r0, [r4, #8]
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0225B204
    // mov r0, #0xcf
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov90_0225A108
    // mov r0, #1
    // strb r0, [r4, #6]
    // add r0, r4, #0
    // bl ov90_0225B2A8
    // add r0, r4, #0
    // add r0, #0xa0
    // bl ov90_02259170
    // ldr r0, [r4, #0x4c]
    // mov r1, #3
    // mov r2, #4
    // mov r3, #2
    // bl ScheduleSetBgPosText
    // ldr r0, [r4, #0x4c]
    // mov r1, #5
    // mov r2, #4
    // mov r3, #2
    // bl ScheduleSetBgPosText
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_0225B230(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl GF_RunVramTransferTasks
    // add r0, r4, #0
    // add r0, #0x4c
    // bl ov90_022590C0
    // add r0, r4, #0
    // add r0, #0xa0
    // bl ov90_0225917C
    // mov r0, #0xcf
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov90_0225A198
    // pop {r4, pc}
    // TODO: decompile
}


void ov90_0225B254(void) {
    GfGfxLoader_GetPlttDataFromOpenNarc(5);
}


void ov90_0225B274(void) {
    // push {r3, lr}
    // ldr r1, _0225B2A4 ; =0x0000065E
    // mov r2, #1
    // strh r2, [r0, r1]
    // ldrb r3, [r0, #0x14]
    // mov r2, #0
    // cmp r3, #0
    // ble _0225B2A0
    // add r1, r0, r2
    // add r1, #0x2c
    // ldrb r1, [r1]
    // cmp r1, #0
    // bne _0225B29A
    // ldrb r1, [r0, #0x15]
    // cmp r1, r2
    // bne _0225B29A
    // bl ov90_0225B954
    // pop {r3, pc}
    // add r2, r2, #1
    // cmp r2, r3
    // blt _0225B284
    // pop {r3, pc}
    // nop
    // _0225B2A4: .word 0x0000065E
    // TODO: decompile
}


void ov90_0225B2A8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _0225B320 ; =0x0000065E
    // ldrh r1, [r5, r0]
    // cmp r1, #0
    // beq _0225B31E
    // sub r0, r0, #2
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // beq _0225B2C0
    // cmp r0, #8
    // bne _0225B30A
    // ldrb r0, [r5, #0x14]
    // mov r6, #0
    // cmp r0, #0
    // ble _0225B30A
    // ldr r4, _0225B324 ; =ov90_0225C1EC
    // ldr r7, _0225B328 ; =0x0000065C
    // add r0, r5, r6
    // add r0, #0x2c
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _0225B300
    // ldr r0, _0225B32C ; =0x00000658
    // ldrb r3, [r4]
    // ldr r0, [r5, r0]
    // ldr r2, [r0, #0xc]
    // ldrh r0, [r5, r7]
    // lsl r1, r3, #5
    // cmp r0, #0
    // bne _0225B2EA
    // add r0, r3, #3
    // b _0225B2EC
    // add r0, r3, #7
    // lsl r0, r0, #5
    // add r2, r2, r0
    // mov r0, #0xf
    // mov r3, #0x20
    // bl GF_CreateNewVramTransferTask
    // cmp r0, #0
    // bne _0225B300
    // bl GF_AssertFail
    // ldrb r0, [r5, #0x14]
    // add r6, r6, #1
    // add r4, r4, #1
    // cmp r6, r0
    // blt _0225B2CC
    // ldr r3, _0225B328 ; =0x0000065C
    // ldrh r0, [r5, r3]
    // add r0, r0, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1c
    // sub r1, r1, r2
    // mov r0, #0x1c
    // ror r1, r0
    // add r0, r2, r1
    // strh r0, [r5, r3]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225B320: .word 0x0000065E
    // _0225B324: .word ov90_0225C1EC
    // _0225B328: .word 0x0000065C
    // _0225B32C: .word 0x00000658
    // TODO: decompile
}


void ov90_0225B330(void) {
    // ldr r1, _0225B338 ; =0x00000654
    // ldr r3, _0225B33C ; =Heap_Free
    // ldr r0, [r0, r1]
    // bx r3
    // _0225B338: .word 0x00000654
    // _0225B33C: .word Heap_Free
    // TODO: decompile
}


void ov90_0225B340(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r6, r2, #0
    // mov r1, #0
    // mov r2, #0x20
    // add r5, r0, #0
    // add r7, r3, #0
    // bl memset
    // ldr r0, [r4]
    // str r0, [r5, #8]
    // mov r0, #4
    // str r0, [r5, #0xc]
    // mov r0, #0x8b
    // str r0, [r5, #0x10]
    // mov r0, #2
    // str r0, [r5, #0x14]
    // mov r0, #0x18
    // strb r0, [r5, #0x18]
    // mov r0, #8
    // strb r0, [r5, #0x19]
    // mov r0, #0
    // strb r0, [r5, #0x1b]
    // add r0, r7, #0
    // bl YesNoPrompt_Create
    // str r0, [r5, #4]
    // strb r6, [r5, #1]
    // mov r0, #1
    // strb r0, [r5, #0x1d]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_0225B380(void) {
    YesNoPrompt_Destroy();
}


void ov90_0225B38C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldrb r0, [r4]
    // add r5, r1, #0
    // add r6, r2, #0
    // cmp r0, #0xc
    // bhi _0225B42C
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225B3A8: ; jump table
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0
    // mov r2, #1
    // ldr r5, [sp, #0x20]
    // str r2, [sp, #4]
    // add r1, r0, #0
    // add r3, r0, #0
    // str r5, [sp, #8]
    // bl BeginNormalPaletteFade
    // ldr r1, [sp, #0x20]
    // mov r0, #0
    // bl sub_0203A948
    // ldrb r0, [r4, #1]
    // cmp r0, #0
    // beq _0225B3EC
    // add r0, r5, #0
    // bl ov00_021E69A8
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0225B530
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0225B42C
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0225B530
    // add r0, r6, #0
    // add r1, r3, #0
    // bl ov90_0225927C
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #3
    // mov r3, #1
    // bl ov90_02259464
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0225B530
    // add r0, r5, #0
    // mov r1, #1
    // bl ov90_02259538
    // cmp r0, #1
    // beq _0225B42E
    // b _0225B530
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0225B530
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // add r1, #8
    // bl YesNoPrompt_InitFromTemplate
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0225B530
    // ldr r0, [r4, #4]
    // bl YesNoPrompt_HandleInput
    // sub r1, r0, #1
    // cmp r1, #1
    // bhi _0225B530
    // cmp r0, #1
    // bne _0225B464
    // mov r1, #0
    // mov r0, #0x16
    // add r2, r1, #0
    // bl sub_02037030
    // b _0225B472
    // cmp r0, #2
    // bne _0225B472
    // mov r1, #0
    // mov r0, #0x17
    // add r2, r1, #0
    // bl sub_02037030
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0xf
    // mov r3, #1
    // bl ov90_02259464
    // add r0, r5, #0
    // mov r1, #1
    // bl ov90_02259554
    // ldr r0, [r4, #4]
    // bl YesNoPrompt_Reset
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0225B530
    // ldrb r1, [r4, #0x1e]
    // cmp r1, #0
    // beq _0225B530
    // ldrb r1, [r4, #0x1f]
    // cmp r1, #0
    // beq _0225B4A6
    // mov r0, #0xa
    // strb r0, [r4]
    // b _0225B530
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0225B530
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #6
    // mov r3, #1
    // bl ov90_02259464
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0225B530
    // add r0, r5, #0
    // mov r1, #1
    // bl ov90_02259538
    // cmp r0, #1
    // bne _0225B530
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r0, #0x66
    // strh r0, [r4, #2]
    // b _0225B530
    // ldrh r0, [r4, #2]
    // sub r0, r0, #1
    // strh r0, [r4, #2]
    // ldrh r0, [r4, #2]
    // cmp r0, #0
    // bne _0225B530
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0225B530
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // mov r1, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // add r2, r1, #0
    // str r0, [sp, #8]
    // mov r0, #4
    // add r3, r1, #0
    // bl BeginNormalPaletteFade
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0225B530
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0225B530
    // bl sub_0203A914
    // ldrb r0, [r4, #1]
    // cmp r0, #0
    // beq _0225B522
    // bl ov00_021E6A4C
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0225B530
    // add sp, #0xc
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov90_0225B538(void) {
    // ldrb r0, [r0, #0x1f]
    // bx lr
    // TODO: decompile
}


void ov90_0225B53C(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // add r0, r3, #0
    // mov r3, #1
    // lsl r3, r1
    // ldrb r1, [r4, #0x1c]
    // tst r1, r3
    // bne _0225B55A
    // cmp r2, #0
    // bne _0225B554
    // mov r1, #0
    // strb r1, [r4, #0x1d]
    // ldrb r1, [r4, #0x1c]
    // orr r1, r3
    // strb r1, [r4, #0x1c]
    // ldrb r3, [r4, #0x1c]
    // mov r2, #0
    // add r1, r2, #0
    // mov r5, #1
    // add r6, r5, #0
    // lsl r6, r1
    // tst r6, r3
    // beq _0225B56C
    // add r2, r2, #1
    // add r1, r1, #1
    // cmp r1, #4
    // blt _0225B562
    // cmp r2, r0
    // bne _0225B592
    // ldrb r0, [r4, #0x1d]
    // cmp r0, #0
    // beq _0225B588
    // mov r1, #0
    // mov r0, #0x18
    // add r2, r1, #0
    // bl sub_02037030
    // pop {r4, r5, r6, pc}
    // mov r1, #0
    // mov r0, #0x19
    // add r2, r1, #0
    // bl sub_02037030
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov90_0225B594(void) {
    ((u8*)r0)[0x1e] = 1;
    ((u8*)r0)[0x1f] = r1;
}


void ov90_0225B59C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r1, #0
    // ldr r1, [sp, #0x44]
    // str r2, [sp, #0x14]
    // str r1, [sp, #0x44]
    // mov r1, #0
    // mov r2, #0x4c
    // add r7, r0, #0
    // add r6, r3, #0
    // ldr r4, [sp, #0x40]
    // bl memset
    // mov r0, #0x20
    // str r0, [sp]
    // ldr r0, [sp, #0x44]
    // mov r3, #7
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0x18
    // mov r2, #0
    // lsl r3, r3, #6
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r0, #0x8b
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x44]
    // mov r1, #0x19
    // str r0, [sp, #0xc]
    // ldr r2, [r5]
    // add r0, r4, #0
    // mov r3, #2
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // ldr r0, [sp, #0x44]
    // mov r1, #0x1a
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #0
    // add r3, r7, #4
    // bl GfGfxLoader_GetScrnDataFromOpenNarc
    // str r0, [r7]
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0x11
    // str r0, [sp, #4]
    // mov r0, #0x12
    // str r0, [sp, #8]
    // ldr r0, _0225B68C ; =0x00001389
    // add r1, r4, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x44]
    // mov r2, #0xf
    // str r0, [sp, #0x10]
    // add r0, r6, #0
    // mov r3, #1
    // bl ov90_02258E54
    // str r0, [r7, #0x44]
    // mov r0, #0x28
    // str r0, [sp, #0x20]
    // mov r0, #0
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // mov r4, #0x4a
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // mov r6, #0
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // lsl r2, r4, #0x10
    // add r0, r6, r0
    // lsl r0, r0, #2
    // add r5, r7, r0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x44]
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [r7, #0x44]
    // ldr r1, [r1]
    // ldr r3, [sp, #0x24]
    // asr r2, r2, #0x10
    // bl ov90_02258EB4
    // str r0, [r5, #8]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r5, #8]
    // ldr r1, [sp, #0x18]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r5, #8]
    // mov r1, #0
    // bl Sprite_SetPriority
    // add r6, r6, #1
    // add r4, #0x18
    // cmp r6, #5
    // blt _0225B630
    // ldr r0, [sp, #0x20]
    // add r0, #0x24
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r0, r0, #5
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #3
    // blt _0225B624
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225B68C: .word 0x00001389
    // TODO: decompile
}


void ov90_0225B690(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r5, #8]
    // bl Sprite_Delete
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0xf
    // blt _0225B698
    // ldr r0, [r6]
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov90_0225B6B0(void) {
    // add r2, r0, #0
    // add r2, #0x4b
    // strb r1, [r2]
    // add r1, r0, #0
    // mov r2, #0
    // add r1, #0x48
    // strb r2, [r1]
    // add r0, #0x4a
    // strb r2, [r0]
    // bx lr
    // TODO: decompile
}


void ov90_0225B6C4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // add r0, #0x48
    // ldrb r0, [r0]
    // add r5, r1, #0
    // cmp r0, #3
    // bls _0225B6D6
    // b _0225B7F2
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225B6E2: ; jump table
    // ldr r0, [r4, #4]
    // mov r1, #0x8b
    // bl ov90_02258DB0
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x14
    // str r0, [sp, #8]
    // ldr r2, [r4, #4]
    // ldr r0, [r5]
    // mov r1, #2
    // add r2, #0xc
    // bl LoadRectToBgTilemapRect
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x14
    // str r0, [sp, #4]
    // mov r0, #0xe
    // str r0, [sp, #8]
    // mov r2, #0
    // ldr r0, [r5]
    // mov r1, #2
    // add r3, r2, #0
    // bl BgTilemapRectChangePalette
    // ldr r0, [r5]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r4, #0
    // add r0, #0x48
    // ldrb r0, [r0]
    // add r4, #0x48
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0225B7F2
    // add r0, r4, #0
    // add r0, #0x4a
    // ldrb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x4b
    // ldrb r0, [r0]
    // cmp r1, r0
    // bne _0225B750
    // mov r0, #3
    // add r4, #0x48
    // strb r0, [r4]
    // b _0225B7F2
    // ldr r0, _0225B7F8 ; =0x00000594
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0x4a
    // ldrb r0, [r0]
    // mov r1, #0xf
    // bl _s32_div_f
    // lsl r0, r1, #2
    // add r0, r4, r0
    // ldr r0, [r0, #8]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #8
    // add r0, #0x49
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x48
    // ldrb r0, [r0]
    // add r4, #0x48
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0225B7F2
    // add r0, r4, #0
    // add r0, #0x49
    // ldrb r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x49
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x49
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _0225B7F2
    // add r0, r4, #0
    // add r0, #0x4a
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x4a
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x4a
    // ldrb r5, [r0]
    // mov r1, #0xf
    // add r0, r5, #0
    // bl _s32_div_f
    // cmp r1, #0
    // bne _0225B7E4
    // add r0, r4, #0
    // add r0, #0x4b
    // ldrb r0, [r0]
    // cmp r5, r0
    // beq _0225B7E4
    // mov r6, #0
    // add r5, r4, #0
    // add r7, r6, #0
    // ldr r0, [r5, #8]
    // add r1, r7, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r5, #8]
    // mov r1, #2
    // bl Sprite_SetAnimCtrlSeq
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #0xf
    // blt _0225B7CC
    // mov r0, #1
    // add r4, #0x48
    // strb r0, [r4]
    // b _0225B7F2
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0225B7F8: .word 0x00000594
    // TODO: decompile
}


void ov90_0225B7FC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r6, r1, #0
    // add r5, r0, #0
    // mov r0, #0x38
    // add r4, r6, #0
    // mul r4, r0
    // add r0, r5, #0
    // add r0, #0x4c
    // str r0, [sp]
    // str r6, [sp, #4]
    // ldrb r0, [r5, #0x15]
    // mov r3, #0x97
    // lsl r3, r3, #2
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0xa0
    // str r0, [sp, #0xc]
    // add r0, r3, #0
    // sub r0, #0x78
    // ldr r0, [r5, r0]
    // add r7, r5, r3
    // str r0, [sp, #0x10]
    // ldrh r0, [r5, #2]
    // str r2, [sp, #0x18]
    // sub r3, r3, #4
    // str r0, [sp, #0x14]
    // ldrb r1, [r5, #0x14]
    // ldrb r2, [r5, #7]
    // ldr r3, [r5, r3]
    // add r0, r7, r4
    // bl ov90_02259BCC
    // add r0, r5, #0
    // add r0, #0xc
    // add r1, r6, #0
    // bl ov90_0225888C
    // add r1, r0, #0
    // add r0, r5, #0
    // add r0, #0xc
    // bl ov90_022588A4
    // lsl r1, r6, #2
    // str r1, [sp, #0x1c]
    // mov r1, #0
    // str r1, [sp]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #4]
    // add r2, r5, r2
    // add r1, r5, #0
    // ldr r2, [r2, #0x3c]
    // add r0, r7, r4
    // add r1, #0x58
    // mov r3, #8
    // bl ov90_02259D50
    // add r0, r5, r6
    // add r0, #0x38
    // ldrb r0, [r0]
    // add r3, r5, r6
    // add r1, r5, #0
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // add r3, #0x34
    // ldrb r2, [r5, #5]
    // ldrb r3, [r3]
    // add r0, r7, r4
    // add r1, #0x58
    // bl ov90_02259DAC
    // ldrb r0, [r5, #7]
    // cmp r0, #0
    // bne _0225B896
    // mov r1, #5
    // b _0225B898
    // mov r1, #6
    // ldr r3, [sp, #0x18]
    // mov r0, #0
    // add r6, r3, #1
    // mov r3, #4
    // sub r3, r3, r6
    // lsl r6, r3, #1
    // ldr r3, _0225B8EC ; =ov90_0225C1F0
    // ldr r2, [sp, #0x1c]
    // str r0, [sp]
    // ldrsh r6, [r3, r6]
    // mov r3, #0xb0
    // str r1, [sp, #4]
    // add r2, r5, r2
    // sub r3, r3, r6
    // add r1, r5, #0
    // lsl r3, r3, #0x10
    // ldr r2, [r2, #0x1c]
    // add r0, r7, r4
    // add r1, #0x58
    // asr r3, r3, #0x10
    // bl ov90_02259E38
    // add r5, #0x4c
    // add r0, r7, r4
    // add r1, r5, #0
    // bl ov90_02259E8C
    // ldr r1, [sp, #0x18]
    // add r0, r7, r4
    // bl ov90_02259E18
    // ldr r1, [sp, #0x18]
    // add r0, r7, r4
    // lsl r2, r1, #1
    // ldr r1, _0225B8EC ; =ov90_0225C1F0
    // ldrsh r1, [r1, r2]
    // mov r2, #0
    // bl ov90_02259EE0
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225B8EC: .word ov90_0225C1F0
    // TODO: decompile
}


void ov90_0225B8F0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldrb r0, [r7, #0x14]
    // cmp r0, #0
    // ble _0225B94E
    // mov r0, #0x97
    // lsl r0, r0, #2
    // add r6, r7, r0
    // add r4, r7, #0
    // add r5, r6, #0
    // mov r0, #0x9b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0225B938
    // add r0, r6, #0
    // bl ov90_02259F7C
    // str r0, [sp, #8]
    // mov r0, #0xcf
    // lsl r0, r0, #2
    // add r0, r7, r0
    // add r1, r5, #0
    // bl ov90_0225A134
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // bne _0225B93C
    // mov r0, #0
    // str r0, [sp]
    // b _0225B93C
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldrb r1, [r7, #0x14]
    // add r0, r0, #1
    // add r4, #0x38
    // add r6, #0x38
    // add r5, #0x38
    // str r0, [sp, #4]
    // cmp r0, r1
    // blt _0225B90E
    // ldr r0, [sp]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_0225B954(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x66
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0225B970
    // ldr r0, _0225B974 ; =0x000004BF
    // bl PlayFanfare
    // mov r0, #0x66
    // mov r1, #1
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _0225B974: .word 0x000004BF
    // TODO: decompile
}


void ov90_0225B978(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x66
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _0225B996
    // bl IsFanfarePlaying
    // cmp r0, #0
    // bne _0225B996
    // mov r0, #0x66
    // mov r1, #0
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // mov r0, #0x66
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // beq _0225B9A4
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov90_0225B9A8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // bl sub_0202C6F4
    // add r4, r0, #0
    // ldrb r0, [r5, #0x14]
    // mov r6, #0
    // cmp r0, #0
    // ble _0225BA12
    // add r7, sp, #0
    // add r0, r5, r6
    // ldrb r0, [r0, #0x10]
    // bl sub_0203484C
    // add r1, r0, #0
    // ldr r0, [r5, #0xc]
    // add r2, r7, #0
    // bl sub_0203A084
    // cmp r0, #0
    // beq _0225B9D8
    // cmp r0, #1
    // bne _0225BA0A
    // ldrb r0, [r5, #7]
    // cmp r0, #0
    // beq _0225B9E8
    // cmp r0, #1
    // beq _0225B9F4
    // cmp r0, #2
    // beq _0225BA00
    // b _0225BA0A
    // ldr r1, [sp]
    // add r0, r4, #0
    // mov r2, #1
    // bl sub_0202C554
    // b _0225BA0A
    // ldr r1, [sp]
    // add r0, r4, #0
    // mov r2, #1
    // bl sub_0202C584
    // b _0225BA0A
    // ldr r1, [sp]
    // add r0, r4, #0
    // mov r2, #1
    // bl sub_0202C5B4
    // ldrb r0, [r5, #0x14]
    // add r6, r6, #1
    // cmp r6, r0
    // blt _0225B9BE
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov90_0225BA14(void) {
    GF_AssertFail(0, 0, 0);
}


void ov90_0225BA38(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x1c
    // add r1, sp, #0xc
    // mov r4, #0
    // str r4, [r1]
    // str r4, [r1, #4]
    // str r4, [r1, #8]
    // add r5, r0, #0
    // str r4, [r1, #0xc]
    // bl ov90_0225BA14
    // ldrb r2, [r5, #0x14]
    // add r1, r4, #0
    // cmp r2, #0
    // ble _0225BA7E
    // add r2, r5, #0
    // add r3, sp, #0xc
    // add r6, r5, r1
    // add r6, #0x2c
    // ldrb r6, [r6]
    // cmp r6, #0
    // bne _0225BA74
    // ldr r6, [r2, #0x1c]
    // cmp r0, r6
    // beq _0225BA74
    // ldr r6, [r5, #0x18]
    // add r4, r4, #1
    // add r6, r6, r1
    // ldrb r6, [r6, #4]
    // stmia r3!, {r6}
    // ldrb r6, [r5, #0x14]
    // add r1, r1, #1
    // add r2, r2, #4
    // cmp r1, r6
    // blt _0225BA5A
    // cmp r4, #0
    // beq _0225BA9C
    // ldr r0, [sp, #0x10]
    // add r2, r4, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x18]
    // ldrb r1, [r5, #7]
    // ldr r0, [r0, #0x30]
    // ldr r3, [sp, #0xc]
    // bl ov45_0222ACB8
    // add sp, #0x1c
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov90_0225BAA0(void) {
    // push {lr}
    // sub sp, #0xc
    // add r1, r0, #0
    // ldrb r2, [r1, #0x14]
    // cmp r2, #0
    // beq _0225BACA
    // ldr r0, [r1, #0x30]
    // cmp r0, #0xa
    // blo _0225BACA
    // ldr r3, [r1, #0x18]
    // ldrb r0, [r3, #5]
    // str r0, [sp]
    // ldrb r0, [r3, #6]
    // str r0, [sp, #4]
    // ldrb r0, [r3, #7]
    // str r0, [sp, #8]
    // ldr r0, [r3, #0x30]
    // ldrb r1, [r1, #7]
    // ldrb r3, [r3, #4]
    // bl ov45_0222ACB8
    // add sp, #0xc
    // pop {pc}
    // TODO: decompile
}


void ov90_0225BAD0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r0, #0
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // add r0, #0xc
    // mov r1, #0
    // mov r2, #0xc0
    // str r3, [sp, #0x10]
    // bl memset
    // add r0, r7, #0
    // add r0, #0xcc
    // mov r1, #0
    // mov r2, #0xc0
    // bl memset
    // mov r6, #0
    // strh r6, [r7, #8]
    // mov r0, #0x63
    // strh r6, [r7, #0xa]
    // lsl r0, r0, #2
    // ldr r4, _0225BBC4 ; =ov90_0225C2B4
    // str r6, [r7, r0]
    // add r5, r7, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r2, [r4]
    // ldr r3, [r4, #4]
    // lsl r2, r2, #4
    // lsl r3, r3, #4
    // ldr r0, [sp, #8]
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // bl ov90_02258EB4
    // str r0, [r5]
    // mov r1, #5
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r5]
    // mov r1, #0
    // bl Sprite_SetPriority
    // add r6, r6, #1
    // add r4, #0xc
    // add r5, r5, #4
    // cmp r6, #2
    // blt _0225BB02
    // mov r3, #1
    // lsl r3, r3, #0x1a
    // ldr r1, [r3]
    // mov r0, #0xe
    // lsl r0, r0, #0xc
    // and r1, r0
    // ldr r4, [r3]
    // ldr r2, _0225BBC8 ; =0xFFFF1FFF
    // lsr r1, r1, #0xd
    // and r4, r2
    // mov r2, #1
    // bic r1, r2
    // lsl r1, r1, #0xd
    // orr r1, r4
    // add r2, r3, #0
    // str r1, [r3]
    // add r2, #0x48
    // ldrh r4, [r2]
    // mov r1, #0x3f
    // bic r4, r1
    // mov r1, #0x1f
    // orr r4, r1
    // mov r1, #0x20
    // orr r4, r1
    // strh r4, [r2]
    // add r2, r3, #0
    // mov r4, #0
    // add r2, #0x40
    // strh r4, [r2]
    // add r2, r3, #0
    // add r2, #0x44
    // strh r4, [r2]
    // add r2, r3, #0
    // add r2, #0x4a
    // ldrb r4, [r2]
    // mov r2, #0x19
    // lsl r2, r2, #4
    // strb r4, [r7, r2]
    // ldr r3, [r3]
    // and r0, r3
    // lsr r3, r0, #0xd
    // mov r0, #2
    // and r3, r0
    // add r0, r2, #4
    // str r3, [r7, r0]
    // add r0, r2, #1
    // ldrb r3, [r7, r0]
    // mov r0, #0x1f
    // bic r3, r0
    // mov r0, #0xf
    // orr r3, r0
    // add r0, r2, #1
    // strb r3, [r7, r0]
    // ldrb r0, [r7, r0]
    // orr r1, r0
    // add r0, r2, #1
    // strb r1, [r7, r0]
    // ldr r0, _0225BBCC ; =ov90_0225BE08
    // add r1, r7, #0
    // bl Main_SetHBlankIntrCB
    // ldr r0, [r7, #4]
    // mov r1, #2
    // bl Sprite_SetFlipMode
    // add r0, r7, #0
    // bl ov90_0225BD84
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0225BBC4: .word ov90_0225C2B4
    // _0225BBC8: .word 0xFFFF1FFF
    // _0225BBCC: .word ov90_0225BE08
    // TODO: decompile
}


void ov90_0225BBD0(void) {
    // push {r4, lr}
    // mov r1, #8
    // ldrsh r2, [r0, r1]
    // mov r4, #0
    // add r2, r2, #1
    // strh r2, [r0, #8]
    // ldrsh r2, [r0, r1]
    // cmp r2, #8
    // blt _0225BBE6
    // strh r1, [r0, #8]
    // mov r4, #1
    // mov r1, #1
    // bl ov90_0225BC28
    // add r0, r4, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov90_0225BBF0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #8
    // ldrsh r2, [r5, r0]
    // mov r1, #0
    // add r4, r1, #0
    // sub r2, r2, #1
    // strh r2, [r5, #8]
    // ldrsh r0, [r5, r0]
    // cmp r0, #0
    // bgt _0225BC18
    // mov r4, #1
    // strh r4, [r5, #8]
    // ldr r0, [r5]
    // bl Sprite_SetDrawFlag
    // ldr r0, [r5, #4]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r1, #0
    // add r0, r5, #0
    // mvn r1, r1
    // bl ov90_0225BC28
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov90_0225BC28(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // str r0, [sp]
    // ldr r2, [sp]
    // mov r0, #8
    // ldrsh r2, [r2, r0]
    // mov r3, #0x17
    // add r4, r2, #0
    // mul r4, r3
    // asr r2, r4, #2
    // lsr r2, r2, #0x1d
    // add r2, r4, r2
    // asr r4, r2, #3
    // ldr r2, [sp]
    // strh r4, [r2, #0xa]
    // ldrsh r0, [r2, r0]
    // add r0, r0, r1
    // cmp r0, #8
    // bgt _0225BC62
    // cmp r0, #0
    // blt _0225BC62
    // add r1, r0, #0
    // mul r1, r3
    // asr r0, r1, #2
    // lsr r0, r0, #0x1d
    // add r0, r1, r0
    // asr r0, r0, #3
    // str r0, [sp, #4]
    // b _0225BC6A
    // ldr r0, [sp]
    // mov r1, #0xa
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r7, _0225BD04 ; =ov90_0225C2B4
    // ldr r4, [sp]
    // mov r6, #0
    // lsl r5, r0, #0xc
    // add r3, r7, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #8
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // cmp r6, #0
    // str r0, [r2]
    // bne _0225BCB6
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // ble _0225BC9C
    // add r0, r5, #0
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0225BCAA
    // add r0, r5, #0
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [sp, #0xc]
    // sub r0, r1, r0
    // str r0, [sp, #0xc]
    // b _0225BCE6
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // ble _0225BCCE
    // add r0, r5, #0
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0225BCDC
    // add r0, r5, #0
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r0, [r4]
    // add r1, sp, #8
    // bl Sprite_SetMatrix
    // add r6, r6, #1
    // add r7, #0xc
    // add r4, r4, #4
    // cmp r6, #2
    // blt _0225BC74
    // ldr r0, [sp]
    // bl ov90_0225BD84
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0225BD04: .word ov90_0225C2B4
    // TODO: decompile
}


void ov90_0225BD08(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #0x63
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // beq _0225BD22
    // bl SysTask_Destroy
    // mov r0, #0x63
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r6, r0]
    // mov r4, #0
    // add r5, r6, #0
    // add r7, r4, #0
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _0225BD34
    // bl Sprite_Delete
    // str r7, [r5]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #2
    // blt _0225BD28
    // bl HBlankInterruptDisable
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _0225BD7C ; =0xFFFF1FFF
    // add r3, r1, #0
    // and r3, r0
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldr r1, [r6, r0]
    // sub r0, r0, #4
    // lsl r1, r1, #0xd
    // orr r1, r3
    // str r1, [r2]
    // add r2, #0x4a
    // ldrh r2, [r2]
    // mov r1, #0x3f
    // ldrb r0, [r6, r0]
    // bic r2, r1
    // lsl r1, r0, #0x1b
    // lsr r1, r1, #0x1b
    // lsl r0, r0, #0x1a
    // orr r1, r2
    // lsr r0, r0, #0x1f
    // beq _0225BD74
    // mov r0, #0x20
    // orr r1, r0
    // ldr r0, _0225BD80 ; =0x0400004A
    // strh r1, [r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225BD7C: .word 0xFFFF1FFF
    // _0225BD80: .word 0x0400004A
    // TODO: decompile
}


void ov90_0225BD84(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // add r0, #0xcc
    // mov r1, #0
    // mov r2, #0xc0
    // bl memset
    // mov r0, #0xa
    // ldrsh r2, [r4, r0]
    // mov r0, #0x17
    // mov r1, #0
    // sub r0, r0, r2
    // cmp r0, #0
    // ble _0225BDC0
    // ldr r7, _0225BDDC ; =0x00000115
    // mov r0, #1
    // mov r2, #0x79
    // mov r5, #0xa
    // mov r6, #0x17
    // add r3, r4, r1
    // strb r0, [r3, r7]
    // sub r3, r2, r1
    // add r3, r4, r3
    // add r3, #0xcc
    // strb r0, [r3]
    // ldrsh r3, [r4, r5]
    // add r1, r1, #1
    // sub r3, r6, r3
    // cmp r1, r3
    // blt _0225BDAA
    // mov r0, #0x63
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0225BDDA
    // ldr r0, _0225BDE0 ; =ov90_0225BDE4
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnVWaitQueue
    // mov r1, #0x63
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225BDDC: .word 0x00000115
    // _0225BDE0: .word ov90_0225BDE4
    // TODO: decompile
}


void ov90_0225BDE4(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // add r0, #0xc
    // add r1, #0xcc
    // mov r2, #0xc0
    // bl memcpy
    // mov r0, #0x63
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl SysTask_Destroy
    // mov r0, #0x63
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // pop {r4, pc}
    // TODO: decompile
}


void ov90_0225BE08(void) {
    // push {r4, r5}
    // ldr r1, _0225BED0 ; =0x04000006
    // ldrh r2, [r1]
    // add r2, r2, #1
    // lsr r4, r2, #0x1f
    // lsl r3, r2, #0x18
    // sub r3, r3, r4
    // mov r2, #0x18
    // ror r3, r2
    // add r2, r4, r3
    // cmp r2, #0xc0
    // bge _0225BECA
    // sub r3, r1, #6
    // ldr r4, [r3]
    // mov r3, #0xe
    // lsl r3, r3, #0xc
    // and r3, r4
    // sub r4, r1, #2
    // ldrh r5, [r4]
    // mov r4, #2
    // lsr r3, r3, #0xd
    // tst r4, r5
    // beq _0225BECA
    // cmp r2, #0x49
    // blt _0225BE3E
    // cmp r2, #0x79
    // ble _0225BE6A
    // ldr r1, _0225BED4 ; =0x0400004A
    // mov r4, #0x3f
    // ldrh r1, [r1]
    // bic r1, r4
    // mov r4, #0x19
    // lsl r4, r4, #4
    // ldrb r4, [r0, r4]
    // lsl r5, r4, #0x1b
    // lsr r5, r5, #0x1b
    // lsl r4, r4, #0x1a
    // orr r1, r5
    // lsr r4, r4, #0x1f
    // beq _0225BE5C
    // mov r4, #0x20
    // orr r1, r4
    // ldr r4, _0225BED4 ; =0x0400004A
    // strh r1, [r4]
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldr r1, [r0, r1]
    // orr r3, r1
    // b _0225BE98
    // add r1, #0x44
    // ldrh r1, [r1]
    // mov r4, #0x3f
    // bic r1, r4
    // ldr r4, _0225BED8 ; =0x00000191
    // ldrb r4, [r0, r4]
    // lsl r5, r4, #0x1b
    // lsr r5, r5, #0x1b
    // lsl r4, r4, #0x1a
    // orr r1, r5
    // lsr r4, r4, #0x1f
    // beq _0225BE86
    // mov r4, #0x20
    // orr r1, r4
    // ldr r4, _0225BED4 ; =0x0400004A
    // strh r1, [r4]
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldr r4, [r0, r1]
    // mov r1, #2
    // orr r1, r4
    // mvn r1, r1
    // and r3, r1
    // add r0, r0, r2
    // ldrb r0, [r0, #0xc]
    // cmp r0, #1
    // ldr r0, _0225BEDC ; =0xFFFF1FFF
    // bne _0225BEB8
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // and r1, r0
    // mov r0, #1
    // orr r0, r3
    // lsl r0, r0, #0xd
    // orr r0, r1
    // str r0, [r2]
    // pop {r4, r5}
    // bx lr
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // and r1, r0
    // mov r0, #1
    // bic r3, r0
    // lsl r0, r3, #0xd
    // orr r0, r1
    // str r0, [r2]
    // pop {r4, r5}
    // bx lr
    // nop
    // _0225BED0: .word 0x04000006
    // _0225BED4: .word 0x0400004A
    // _0225BED8: .word 0x00000191
    // _0225BEDC: .word 0xFFFF1FFF
    // TODO: decompile
}


void ov90_0225BEE0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r4, r1, #0
    // ldrh r0, [r4, #4]
    // cmp r0, #5
    // bhi _0225BF44
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225BEF8: ; jump table
    // add r0, r4, #0
    // ldr r1, [r4, #0x28]
    // ldr r2, [r4, #8]
    // ldr r3, [r4]
    // add r0, #0x34
    // bl ov90_0225BAD0
    // mov r0, #0x40
    // str r0, [sp]
    // ldr r0, [r4]
    // mov r2, #0x80
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x28]
    // ldr r1, [r4, #8]
    // mov r3, #0x61
    // bl ov90_02258EB4
    // str r0, [r4, #0x30]
    // mov r1, #0
    // bl Sprite_SetPriority
    // ldrh r0, [r4, #4]
    // add sp, #8
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x34
    // bl ov90_0225BBD0
    // cmp r0, #1
    // beq _0225BF46
    // b _0225C05E
    // ldrh r0, [r4, #4]
    // add sp, #8
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // mov r0, #0
    // strh r0, [r4, #6]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0x30]
    // bl Sprite_GetAnimationFrame
    // add r6, r0, #0
    // mov r1, #2
    // ldr r0, [r4, #0x30]
    // lsl r1, r1, #0xc
    // bl Sprite_UpdateAnim
    // ldr r0, [r4, #0x30]
    // bl Sprite_GetAnimationFrame
    // add r5, r0, #0
    // cmp r6, r5
    // beq _0225BFC8
    // cmp r5, #0xf
    // bhi _0225BFC8
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225BF82: ; jump table
    // ldr r0, _0225C064 ; =0x000005DD
    // bl PlaySE
    // b _0225BFC8
    // ldr r0, _0225C064 ; =0x000005DD
    // bl PlaySE
    // b _0225BFC8
    // ldr r0, _0225C064 ; =0x000005DD
    // bl PlaySE
    // b _0225BFC8
    // ldr r0, _0225C064 ; =0x000005DD
    // bl PlaySE
    // b _0225BFC8
    // ldr r0, _0225C068 ; =0x00000642
    // bl PlaySE
    // cmp r5, #0xf
    // bne _0225BFFC
    // mov r0, #6
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bne _0225BFDE
    // ldr r0, [r4, #0x30]
    // mov r1, #0
    // bl Sprite_SetPalOffsetRespectVramOffset
    // b _0225BFEA
    // cmp r0, #4
    // bne _0225BFEA
    // ldr r0, [r4, #0x30]
    // mov r1, #1
    // bl Sprite_SetPalOffsetRespectVramOffset
    // mov r0, #6
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #6]
    // ldrsh r0, [r4, r0]
    // cmp r0, #8
    // blt _0225BFFC
    // mov r0, #0
    // strh r0, [r4, #6]
    // ldr r0, [r4, #0x30]
    // bl Sprite_IsAnimated
    // cmp r0, #0
    // bne _0225C05E
    // ldrh r0, [r4, #4]
    // mov r1, #0
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // ldr r0, [r4, #0x30]
    // bl Sprite_SetPalOffsetRespectVramOffset
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x34
    // bl ov90_0225BBF0
    // cmp r0, #1
    // bne _0225C05E
    // ldr r0, [r4, #0x30]
    // bl Sprite_Delete
    // mov r1, #0
    // str r1, [r4, #0x30]
    // ldrh r0, [r4, #4]
    // add sp, #8
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // strh r1, [r4, #6]
    // pop {r4, r5, r6, pc}
    // mov r0, #6
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #6]
    // ldrsh r0, [r4, r0]
    // cmp r0, #2
    // blt _0225C05E
    // mov r0, #0
    // strh r0, [r4, #4]
    // add r0, r4, #0
    // add r0, #0x34
    // bl ov90_0225BD08
    // ldr r0, [r4, #0x2c]
    // bl SysTask_Destroy
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _0225C064: .word 0x000005DD
    // _0225C068: .word 0x00000642
    // TODO: decompile
}


void ov90_0225C06C(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r1, #0
    // ldrh r0, [r4, #4]
    // cmp r0, #5
    // bhi _0225C14C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225C084: ; jump table
    // add r0, r4, #0
    // ldr r1, [r4, #0x28]
    // ldr r2, [r4, #8]
    // ldr r3, [r4]
    // add r0, #0x34
    // bl ov90_0225BAD0
    // mov r0, #0x40
    // str r0, [sp]
    // ldr r0, [r4]
    // mov r2, #0x80
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x28]
    // ldr r1, [r4, #8]
    // mov r3, #0x61
    // bl ov90_02258EB4
    // str r0, [r4, #0x30]
    // mov r1, #1
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0x30]
    // mov r1, #0
    // bl Sprite_SetPriority
    // ldrh r0, [r4, #4]
    // add sp, #8
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // pop {r4, pc}
    // add r0, r4, #0
    // add r0, #0x34
    // bl ov90_0225BBD0
    // cmp r0, #1
    // bne _0225C14C
    // ldr r0, [r4, #0x30]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // ldrh r0, [r4, #4]
    // add sp, #8
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // mov r0, #0
    // strh r0, [r4, #6]
    // pop {r4, pc}
    // mov r0, #6
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #6]
    // ldrsh r0, [r4, r0]
    // cmp r0, #0x32
    // blt _0225C14C
    // ldrh r0, [r4, #4]
    // add sp, #8
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // pop {r4, pc}
    // add r0, r4, #0
    // add r0, #0x34
    // bl ov90_0225BBF0
    // cmp r0, #1
    // bne _0225C14C
    // ldr r0, [r4, #0x30]
    // bl Sprite_Delete
    // mov r0, #0
    // str r0, [r4, #0x30]
    // strh r0, [r4, #6]
    // ldrh r0, [r4, #4]
    // add sp, #8
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // pop {r4, pc}
    // mov r0, #6
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #6]
    // ldrsh r0, [r4, r0]
    // cmp r0, #2
    // blt _0225C14C
    // mov r0, #0
    // strh r0, [r4, #4]
    // add r0, r4, #0
    // add r0, #0x34
    // bl ov90_0225BD08
    // ldr r0, [r4, #0x2c]
    // bl SysTask_Destroy
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void ov90_0225C150(void) {
    // ldr r0, _0225C154 ; =ov90_0225C4FC
    // bx lr
    // _0225C154: .word ov90_0225C4FC
    // TODO: decompile
}


u8 ov90_0225C158(void) {
    return 5;
}


void ov90_0225C15C(void) {
    ov90_0225C150();
    ov90_0225C158();
    sub_0203410C(r4, r0, r5);
}


void ov90_0225C178(void) {
    ov90_0225C150();
    ov90_0225C158();
    sub_0203410C(r4, r0, r5);
}


u8 ov90_0225C194(void) {
    return 0;
}


u8 ov90_0225C198(void) {
    return 4;
}


void ov90_0225C19C(void) {
    ov90_02258B24();
}


void ov90_0225C1A8(void) {
    // add r1, r0, #0
    // add r0, r3, #0
    // ldr r3, _0225C1B4 ; =ov90_02258B2C
    // mov r2, #1
    // bx r3
    // nop
    // _0225C1B4: .word ov90_02258B2C
    // TODO: decompile
}


void ov90_0225C1B8(void) {
    // add r1, r0, #0
    // add r0, r3, #0
    // ldr r3, _0225C1C4 ; =ov90_02258B2C
    // mov r2, #0
    // bx r3
    // nop
    // _0225C1C4: .word ov90_02258B2C
    // TODO: decompile
}


void ov90_0225C1C8(void) {
    ov90_02258B44();
}


void ov90_0225C1D4(void) {
    ov90_02258B44();
}

