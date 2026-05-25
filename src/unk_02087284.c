/* Decompiled from asm/unk_02087284.s */
#include "global.h"

void sub_02087284(void) {
    /* Original at 0x02087284 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}
    push {r4, lr}
    ldr r4, [sp, #0xc]
    mov r1, #0x42
    add r0, r4, #0
    lsl r1, r1, #2
    bl Heap_Alloc
    ldr r1, [sp, #8]
    mov r3, #0
    str r1, [r0, #0x10]
    ldr r1, [sp, #0x10]
    str r4, [r0, #0x14]
    str r1, [r0, #0x18]
    ldr r1, [sp, #0x14]
    mov r2, #0xf
    str r1, [r0, #0x1c]
    ldr r1, [sp, #0x18]
    str r1, [r0, #0x20]
    ldr r1, [sp, #0x1c]
    str r1, [r0, #4]
    ldr r1, [sp, #0x20]
    str r1, [r0, #8]
    ldr r1, [sp, #0x24]
    str r1, [r0, #0xc]
    add r1, r0, #0
    add r1, #0xe4
    str r3, [r1]
    add r1, r0, #0
    add r1, #0xfc
    str r2, [r1]
    add r1, r2, #0
    add r1, #0xf1
    str r2, [r0, r1]
    add r1, r0, #0
    add r1, #0xf4
    str r3, [r1]
    add r1, r0, #0
    add r1, #0xf0
    str r3, [r1]
    pop {r4}
    pop {r3}
    add sp, #0x10
    bx r3"
    );
    #endif
}

void sub_020872DC(void) {
    /* Original at 0x020872DC */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    sub sp, #0x18
    add r5, r1, #0
    mov r1, #0
    add r4, r2, #0
    add r6, r3, #0
    str r1, [sp]
    str r1, [sp, #4]
    bl _fflt
    add r1, r4, #0
    bl _fsub
    str r0, [sp, #8]
    add r0, r5, #0
    bl _fflt
    add r1, r6, #0
    bl _fsub
    str r0, [sp, #0xc]
    mov r0, #0
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    ldr r0, [sp, #8]
    add r1, r0, #0
    bl _fmul
    add r4, r0, #0
    ldr r0, [sp, #0xc]
    add r1, r0, #0
    bl _fmul
    add r1, r0, #0
    add r0, r4, #0
    bl _fadd
    mov r1, #0
    add r4, r0, #0
    bl _fgr
    ldr r0, _020873D0 ; =0x45800000
    bls _02087344
    add r1, r4, #0
    bl _fmul
    add r1, r0, #0
    mov r0, #0x3f
    lsl r0, r0, #0x18
    bl _fadd
    b _02087352
    add r1, r4, #0
    bl _fmul
    mov r1, #0x3f
    lsl r1, r1, #0x18
    bl _fsub
    bl _ffix
    bl FX_Sqrt
    bl _fflt
    ldr r1, _020873D0 ; =0x45800000
    bl _fdiv
    ldr r1, [sp, #0x30]
    add r4, r0, #0
    bl _fls
    blo _0208738A
    add r1, sp, #0x18
    mov r0, #0x1c
    ldrsh r0, [r1, r0]
    bl _fflt
    add r1, r4, #0
    bl _fgr
    bhi _0208738A
    mov r0, #0
    add r1, r4, #0
    bl _feq
    bne _02087390
    add sp, #0x18
    mov r0, #0
    pop {r4, r5, r6, pc}
    ldr r0, [sp, #8]
    ldr r1, [sp, #0x30]
    bl _fmul
    add r1, r4, #0
    bl _fdiv
    str r0, [sp, #0x10]
    ldr r0, [sp, #0xc]
    ldr r1, [sp, #0x30]
    bl _fmul
    add r1, r4, #0
    bl _fdiv
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x10]
    ldr r1, [sp]
    bl _fadd
    ldr r1, [sp, #0x28]
    str r0, [r1]
    ldr r0, [sp, #0x14]
    ldr r1, [sp, #4]
    bl _fadd
    ldr r1, [sp, #0x2c]
    str r0, [r1]
    mov r0, #1
    add sp, #0x18
    pop {r4, r5, r6, pc}
    nop
    _020873D0: .word 0x45800000"
    );
    #endif
}

void sub_020873D4(void) {
    /* Original at 0x020873D4 */
    /* Requires manual decompilation - 266 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    sub sp, #0x50
    add r6, r1, #0
    add r0, r6, #0
    add r0, #0xf0
    ldr r0, [r0]
    cmp r0, #0
    bne _020873E6
    b _02087632
    ldr r0, [r6, #0x10]
    mov r4, #0
    str r4, [sp, #0x1c]
    cmp r0, #0
    bgt _020873F2
    b _02087632
    add r0, r6, #0
    mov r7, #0x3f
    str r0, [sp, #0x30]
    add r0, #0xec
    add r5, r6, #0
    lsl r7, r7, #0x18
    str r0, [sp, #0x30]
    cmp r4, #0
    beq _02087410
    mov r0, #0x18
    ldrsh r0, [r5, r0]
    strh r0, [r5, #0x28]
    mov r0, #0x1a
    ldrsh r0, [r5, r0]
    strh r0, [r5, #0x2a]
    ldr r0, [r5, #0x24]
    ldr r3, [r6, #0x20]
    add r1, sp, #0x4c
    add r2, sp, #0x48
    bl ManagedSprite_GetPositionFxXYWithSubscreenOffset
    ldr r0, [sp, #0x4c]
    bl _fflt
    ldr r1, _02087638 ; =0x45800000
    bl _fdiv
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x48]
    bl _fflt
    ldr r1, _02087638 ; =0x45800000
    bl _fdiv
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x1c]
    sub r0, r4, r0
    bl _fflt
    add r1, r0, #0
    add r0, r7, #0
    bl _fmul
    add r1, r0, #0
    mov r0, #0x41
    lsl r0, r0, #0x18
    bl _fsub
    mov r1, #1
    lsl r1, r1, #0x1e
    bl _fdiv
    add r1, sp, #0x44
    str r1, [sp]
    add r1, sp, #0x40
    str r1, [sp, #4]
    str r0, [sp, #8]
    mov r0, #0x10
    str r0, [sp, #0xc]
    mov r0, #0x28
    mov r1, #0x2a
    ldrsh r0, [r5, r0]
    ldrsh r1, [r5, r1]
    ldr r2, [sp, #0x20]
    ldr r3, [sp, #0x24]
    bl sub_020872DC
    cmp r0, #0
    beq _020874EE
    ldr r0, [r5, #0x2c]
    cmp r0, #0
    bne _020874EE
    ldr r0, [sp, #0x40]
    mov r1, #0
    bl _fgr
    ldr r0, _02087638 ; =0x45800000
    bls _020874A0
    ldr r1, [sp, #0x40]
    bl _fmul
    add r1, r0, #0
    add r0, r7, #0
    bl _fadd
    str r0, [sp, #0x14]
    b _020874AE
    ldr r1, [sp, #0x40]
    bl _fmul
    add r1, r7, #0
    bl _fsub
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x44]
    mov r1, #0
    bl _fgr
    ldr r0, _02087638 ; =0x45800000
    bls _020874CA
    ldr r1, [sp, #0x44]
    bl _fmul
    add r1, r0, #0
    add r0, r7, #0
    bl _fadd
    b _020874D6
    ldr r1, [sp, #0x44]
    bl _fmul
    add r1, r7, #0
    bl _fsub
    bl _ffix
    str r0, [sp, #0x28]
    ldr r0, [sp, #0x14]
    bl _ffix
    add r2, r0, #0
    ldr r0, [r5, #0x24]
    ldr r1, [sp, #0x28]
    bl ManagedSprite_AddSpritePrecisePositionXY
    b _02087626
    ldr r0, [r5, #0x2c]
    cmp r0, #0
    beq _020874FA
    cmp r0, #1
    beq _020875CA
    b _02087620
    add r1, sp, #0x3c
    ldr r0, [r5, #0x24]
    ldr r3, [r6, #0x20]
    add r1, #2
    add r2, sp, #0x3c
    bl ManagedSprite_GetPositionXYWithSubscreenOffset
    add r0, r6, #0
    add r0, #0xe8
    ldr r0, [r0]
    str r0, [sp, #0x18]
    cmp r0, #0xff
    bne _0208758E
    add r0, r6, #0
    add r0, #0xe8
    str r4, [r0]
    mov r0, #0x28
    add r2, sp, #0x3c
    mov r1, #2
    ldrsh r0, [r6, r0]
    ldrsh r1, [r2, r1]
    sub r0, r0, r1
    cmp r0, #0
    ble _0208753C
    lsl r0, r0, #0xc
    bl _fflt
    add r1, r0, #0
    add r0, r7, #0
    bl _fadd
    str r0, [sp, #0x10]
    b _0208754A
    lsl r0, r0, #0xc
    bl _fflt
    add r1, r7, #0
    bl _fsub
    str r0, [sp, #0x10]
    mov r0, #0x2a
    add r2, sp, #0x3c
    mov r1, #0
    ldrsh r0, [r6, r0]
    ldrsh r1, [r2, r1]
    sub r0, r0, r1
    cmp r0, #0
    ble _0208756A
    lsl r0, r0, #0xc
    bl _fflt
    add r1, r0, #0
    add r0, r7, #0
    bl _fadd
    b _02087576
    lsl r0, r0, #0xc
    bl _fflt
    add r1, r7, #0
    bl _fsub
    bl _ffix
    str r0, [sp, #0x2c]
    ldr r0, [sp, #0x10]
    bl _ffix
    add r1, r0, #0
    ldr r0, [sp, #0x2c]
    bl FX_Atan2Idx
    str r0, [r5, #0x30]
    b _020875AC
    mov r0, #0x2d
    ldr r1, [r6, #0x10]
    lsl r0, r0, #4
    bl _s32_div_f
    ldr r1, [sp, #0x18]
    add r2, r6, #0
    lsl r1, r1, #4
    add r2, #0xec
    add r1, r6, r1
    ldr r2, [r2]
    ldr r1, [r1, #0x30]
    mul r2, r0
    sub r0, r1, r2
    str r0, [r5, #0x30]
    mov r1, #0x2d
    ldr r0, [r5, #0x30]
    lsl r1, r1, #4
    bl _s32_div_f
    ldr r0, [sp, #0x30]
    str r1, [r5, #0x30]
    ldr r0, [r0]
    add r1, r0, #1
    ldr r0, [sp, #0x30]
    str r1, [r0]
    ldr r0, [r5, #0x2c]
    add r0, r0, #1
    str r0, [r5, #0x2c]
    b _02087620
    ldr r0, [r5, #0x30]
    mov r1, #0x2d
    add r0, r0, #4
    lsl r1, r1, #4
    str r0, [r5, #0x30]
    bl _s32_div_f
    lsl r0, r1, #0x10
    lsr r0, r0, #0x10
    str r1, [r5, #0x30]
    bl GF_SinDeg
    mov r1, #0x28
    ldrsh r1, [r6, r1]
    lsl r1, r1, #0xc
    str r1, [sp, #0x34]
    add r1, r6, #0
    add r1, #0xfc
    ldr r1, [r1]
    mul r0, r1
    str r0, [sp, #0x38]
    ldr r0, [r5, #0x30]
    lsl r0, r0, #0x10
    lsr r0, r0, #0x10
    bl GF_CosDeg
    mov r1, #0x2a
    ldrsh r1, [r6, r1]
    ldr r2, [sp, #0x34]
    lsl r3, r1, #0xc
    mov r1, #1
    lsl r1, r1, #8
    ldr r1, [r6, r1]
    mul r0, r1
    ldr r1, [sp, #0x38]
    mov ip, r0
    add r1, r2, r1
    mov r2, ip
    add r2, r3, r2
    ldr r0, [r5, #0x24]
    ldr r3, [r6, #0x20]
    bl ManagedSprite_SetPositionFxXYWithSubscreenOffset
    ldr r0, [sp, #0x1c]
    add r0, r0, #1
    str r0, [sp, #0x1c]
    ldr r0, [r6, #0x10]
    add r4, r4, #1
    add r5, #0x10
    cmp r4, r0
    bge _02087632
    b _02087400
    add sp, #0x50
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _02087638: .word 0x45800000"
    );
    #endif
}

void sub_0208763C(void) {
    /* Original at 0x0208763C */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}
    sub sp, #0x1c
    add r6, r1, #0
    ldr r1, [r0, #4]
    ldr r5, [r0, #8]
    str r1, [sp, #0x18]
    ldr r1, _020876A4 ; =0x000056CF
    ldr r7, [r0, #0xc]
    ldr r4, [r0]
    add r0, r5, #0
    bl SpriteManager_UnloadPlttObjById
    ldr r1, _020876A8 ; =0x000056D0
    add r0, r5, #0
    bl SpriteManager_UnloadPlttObjById
    ldr r0, _020876AC ; =_02102814
    lsl r1, r6, #2
    ldr r6, [r0, r1]
    str r4, [sp]
    str r6, [sp, #4]
    mov r0, #0
    str r0, [sp, #8]
    mov r0, #1
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    ldr r0, _020876A4 ; =0x000056CF
    ldr r2, [sp, #0x18]
    str r0, [sp, #0x14]
    add r0, r7, #0
    mov r1, #2
    add r3, r5, #0
    bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    str r4, [sp]
    str r6, [sp, #4]
    mov r0, #0
    str r0, [sp, #8]
    mov r0, #1
    str r0, [sp, #0xc]
    mov r0, #2
    str r0, [sp, #0x10]
    ldr r0, _020876A8 ; =0x000056D0
    ldr r2, [sp, #0x18]
    str r0, [sp, #0x14]
    add r0, r7, #0
    mov r1, #3
    add r3, r5, #0
    bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    add sp, #0x1c
    pop {r4, r5, r6, r7, pc}
    _020876A4: .word 0x000056CF
    _020876A8: .word 0x000056D0
    _020876AC: .word _02102814"
    );
    #endif
}

void sub_020876B0(void) {
    /* Original at 0x020876B0 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    sub sp, #0x18
    add r2, r1, #0
    ldr r3, [r0, #0x18]
    ldr r1, _020877AC ; =0x000056CE
    ldr r7, [r0, #4]
    add r5, r3, r1
    ldr r6, [r0, #8]
    ldr r1, [r0, #0xc]
    ldr r4, [r0]
    cmp r3, #1
    ldr r0, [r0, #0x1c]
    bne _02087726
    cmp r0, #0
    str r4, [sp]
    bne _020876F2
    ldr r0, _020877B0 ; =_02102814
    lsl r2, r2, #2
    ldr r0, [r0, r2]
    add r2, r7, #0
    str r0, [sp, #4]
    mov r0, #0
    str r0, [sp, #8]
    mov r0, #1
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    add r0, r1, #0
    mov r1, #2
    add r3, r6, #0
    str r5, [sp, #0x14]
    bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    b _0208770E
    mov r0, #0x60
    str r0, [sp, #4]
    mov r0, #0
    str r0, [sp, #8]
    mov r0, #1
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    add r0, r1, #0
    mov r1, #2
    add r2, r7, #0
    add r3, r6, #0
    str r5, [sp, #0x14]
    bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    mov r0, #0
    str r0, [sp]
    mov r0, #1
    str r0, [sp, #4]
    add r0, r7, #0
    add r1, r6, #0
    add r2, r4, #0
    mov r3, #0x5f
    str r5, [sp, #8]
    bl SpriteSystem_LoadCharResObjFromOpenNarc
    b _02087784
    cmp r0, #0
    str r4, [sp]
    bne _02087750
    ldr r0, _020877B0 ; =_02102814
    lsl r2, r2, #2
    ldr r0, [r0, r2]
    add r2, r7, #0
    str r0, [sp, #4]
    mov r0, #0
    str r0, [sp, #8]
    mov r0, #1
    str r0, [sp, #0xc]
    mov r0, #2
    str r0, [sp, #0x10]
    add r0, r1, #0
    mov r1, #3
    add r3, r6, #0
    str r5, [sp, #0x14]
    bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    b _0208776E
    mov r0, #0x60
    str r0, [sp, #4]
    mov r0, #0
    str r0, [sp, #8]
    mov r0, #1
    str r0, [sp, #0xc]
    mov r0, #2
    str r0, [sp, #0x10]
    add r0, r1, #0
    mov r1, #3
    add r2, r7, #0
    add r3, r6, #0
    str r5, [sp, #0x14]
    bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    mov r0, #0
    str r0, [sp]
    mov r0, #2
    str r0, [sp, #4]
    add r0, r7, #0
    add r1, r6, #0
    add r2, r4, #0
    mov r3, #0x5f
    str r5, [sp, #8]
    bl SpriteSystem_LoadCharResObjFromOpenNarc
    mov r0, #0
    str r0, [sp]
    add r0, r7, #0
    add r1, r6, #0
    add r2, r4, #0
    mov r3, #0x5d
    str r5, [sp, #4]
    bl SpriteSystem_LoadCellResObjFromOpenNarc
    mov r0, #0
    str r0, [sp]
    add r0, r7, #0
    add r1, r6, #0
    add r2, r4, #0
    mov r3, #0x5e
    str r5, [sp, #4]
    bl SpriteSystem_LoadAnimResObjFromOpenNarc
    add sp, #0x18
    pop {r3, r4, r5, r6, r7, pc}
    _020877AC: .word 0x000056CE
    _020877B0: .word _02102814"
    );
    #endif
}

void sub_020877B4(void) {
    /* Original at 0x020877B4 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    sub sp, #0x38
    add r5, r0, #0
    ldr r0, [r5, #4]
    ldr r7, [r5, #8]
    str r0, [sp]
    mov r1, #0x80
    add r0, sp, #4
    strh r1, [r0]
    mov r1, #0x60
    strh r1, [r0, #2]
    mov r6, #0
    strh r6, [r0, #4]
    strh r6, [r0, #6]
    str r6, [sp, #0xc]
    ldr r0, [r5, #0x18]
    str r0, [sp, #0x14]
    str r6, [sp, #0x30]
    str r6, [sp, #0x34]
    str r6, [sp, #0x10]
    ldr r1, [r5, #0x18]
    ldr r0, _0208782C ; =0x000056CE
    add r1, r1, r0
    str r1, [sp, #0x18]
    ldr r1, [r5, #0x18]
    add r1, r1, r0
    str r1, [sp, #0x1c]
    ldr r1, [r5, #0x18]
    add r1, r1, r0
    str r1, [sp, #0x20]
    ldr r1, [r5, #0x18]
    add r0, r1, r0
    str r0, [sp, #0x24]
    sub r0, r6, #1
    str r0, [sp, #0x28]
    str r0, [sp, #0x2c]
    ldr r0, [r5, #0x10]
    cmp r0, #0
    ble _02087828
    add r4, r5, #0
    ldr r0, [sp]
    add r1, r7, #0
    add r2, sp, #4
    bl SpriteSystem_NewSprite
    str r0, [r4, #0x24]
    bl ManagedSprite_TickFrame
    ldr r0, [r4, #0x24]
    mov r1, #0x80
    mov r2, #0x60
    bl ManagedSprite_SetPositionXY
    ldr r0, [r5, #0x10]
    add r6, r6, #1
    add r4, #0x10
    cmp r6, r0
    blt _02087804
    add sp, #0x38
    pop {r3, r4, r5, r6, r7, pc}
    _0208782C: .word 0x000056CE"
    );
    #endif
}

void sub_02087830(void) {
    /* Original at 0x02087830 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r5, r0, #0
    ldr r0, [r5, #0x10]
    mov r6, #0
    cmp r0, #0
    ble _02087872
    ldr r7, _02087874 ; =0x000056CE
    add r4, r5, #0
    ldr r2, [r5, #0x18]
    ldr r1, _02087874 ; =0x000056CE
    ldr r0, [r5, #8]
    add r1, r2, r1
    bl SpriteManager_UnloadCharObjById
    ldr r2, [r5, #0x18]
    ldr r1, _02087874 ; =0x000056CE
    ldr r0, [r5, #8]
    add r1, r2, r1
    bl SpriteManager_UnloadCellObjById
    ldr r1, [r5, #0x18]
    ldr r0, [r5, #8]
    add r1, r1, r7
    bl SpriteManager_UnloadAnimObjById
    ldr r0, [r4, #0x24]
    bl Sprite_DeleteAndFreeResources
    ldr r0, [r5, #0x10]
    add r6, r6, #1
    add r4, #0x10
    cmp r6, r0
    blt _02087840
    pop {r3, r4, r5, r6, r7, pc}
    _02087874: .word 0x000056CE"
    );
    #endif
}

void sub_02087878(void) {
    /* Original at 0x02087878 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    add r5, r0, #0
    add r4, r1, #0
    ldr r1, [r5, #0x14]
    mov r0, #0xbf
    bl NARC_New
    str r0, [r5]
    add r0, r5, #0
    add r1, r4, #0
    bl sub_020876B0
    add r0, r5, #0
    bl sub_020877B4
    mov r2, #1
    ldr r0, _020878AC ; =sub_020873D4
    add r1, r5, #0
    lsl r2, r2, #0xc
    bl SysTask_CreateOnVBlankQueue
    add r5, #0xf4
    str r0, [r5]
    mov r0, #1
    pop {r3, r4, r5, pc}
    nop
    _020878AC: .word sub_020873D4"
    );
    #endif
}

void sub_020878B0(void) {
    /* Original at 0x020878B0 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xf0
    str r1, [r0]
    mov r0, #1
    bx lr"
    );
    #endif
}

void sub_020878B8(void) {
    /* Original at 0x020878B8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}
    strh r1, [r0, #0x28]
    add r1, r0, #0
    strh r2, [r0, #0x2a]
    mov r2, #0xff
    add r1, #0xe8
    str r2, [r1]
    add r1, r0, #0
    mov r3, #0
    add r1, #0xec
    str r3, [r1]
    ldr r1, [r0, #0x10]
    cmp r1, #0
    ble _020878E4
    add r4, r0, #0
    add r2, r3, #0
    str r2, [r4, #0x2c]
    ldr r1, [r0, #0x10]
    add r3, r3, #1
    add r4, #0x10
    cmp r3, r1
    blt _020878D8
    mov r0, #1
    pop {r3, r4}
    bx lr"
    );
    #endif
}

void sub_020878EC(void) {
    /* Original at 0x020878EC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    add r5, r0, #0
    add r4, r1, #0
    add r6, r2, #0
    bl sub_02087930
    cmp r0, #0
    bne _02087900
    mov r0, #0
    pop {r4, r5, r6, pc}
    strh r4, [r5, #0x28]
    add r0, r5, #0
    strh r6, [r5, #0x2a]
    mov r1, #0xff
    add r0, #0xe8
    str r1, [r0]
    add r0, r5, #0
    mov r2, #0
    add r0, #0xec
    str r2, [r0]
    ldr r0, [r5, #0x10]
    cmp r0, #0
    ble _0208792A
    add r3, r5, #0
    add r1, r2, #0
    str r1, [r3, #0x2c]
    ldr r0, [r5, #0x10]
    add r2, r2, #1
    add r3, #0x10
    cmp r2, r0
    blt _0208791E
    mov r0, #1
    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02087930(void) {
    /* Original at 0x02087930 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0x28
    ldrsh r3, [r0, r3]
    cmp r3, r1
    bne _02087944
    mov r1, #0x2a
    ldrsh r0, [r0, r1]
    cmp r0, r2
    bne _02087944
    mov r0, #0
    bx lr
    mov r0, #1
    bx lr"
    );
    #endif
}

void sub_02087948(void) {
    /* Original at 0x02087948 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r5, r0, #0
    add r6, r1, #0
    str r2, [sp]
    mov r1, #0xff
    add r0, #0xe8
    str r1, [r0]
    add r0, r5, #0
    mov r7, #0
    add r0, #0xec
    str r7, [r0]
    ldr r0, [r5, #0x10]
    cmp r0, #0
    ble _02087982
    add r4, r5, #0
    strh r6, [r4, #0x28]
    ldr r0, [sp]
    add r1, r6, #0
    strh r0, [r4, #0x2a]
    ldr r0, [r4, #0x24]
    ldr r2, [sp]
    ldr r3, [r5, #0x20]
    bl ManagedSprite_SetPositionXYWithSubscreenOffset
    ldr r0, [r5, #0x10]
    add r7, r7, #1
    add r4, #0x10
    cmp r7, r0
    blt _02087966
    mov r0, #1
    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02087988(void) {
    /* Original at 0x02087988 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    add r1, r4, #0
    add r1, #0xe4
    ldr r1, [r1]
    cmp r1, #0
    beq _0208799C
    cmp r1, #1
    beq _020879B0
    b _020879C6
    mov r1, #0
    bl sub_020878B0
    add r0, r4, #0
    add r0, #0xe4
    ldr r0, [r0]
    add r4, #0xe4
    add r0, r0, #1
    str r0, [r4]
    b _020879DA
    add r0, #0xf4
    ldr r0, [r0]
    bl SysTask_Destroy
    add r0, r4, #0
    add r0, #0xe4
    ldr r0, [r0]
    add r4, #0xe4
    add r0, r0, #1
    str r0, [r4]
    b _020879DA
    bl sub_02087830
    ldr r0, [r4]
    bl NARC_Delete
    add r0, r4, #0
    bl Heap_Free
    mov r0, #0
    pop {r4, pc}
    mov r0, #1
    pop {r4, pc}"
    );
    #endif
}

void sub_020879E0(void) {
    /* Original at 0x020879E0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r6, r0, #0
    ldr r0, [r6, #0x10]
    add r7, r1, #0
    mov r4, #0
    cmp r0, #0
    ble _02087A02
    add r5, r6, #0
    ldr r0, [r5, #0x24]
    add r1, r7, #0
    bl ManagedSprite_SetDrawFlag
    ldr r0, [r6, #0x10]
    add r4, r4, #1
    add r5, #0x10
    cmp r4, r0
    blt _020879F0
    mov r0, #1
    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02087A08(void) {
    /* Original at 0x02087A08 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0
    beq _02087A1E
    cmp r2, #0
    beq _02087A1E
    add r3, r0, #0
    add r3, #0xfc
    str r1, [r3]
    mov r1, #1
    lsl r1, r1, #8
    str r2, [r0, r1]
    bx lr
    add r1, r0, #0
    mov r2, #0xf
    add r1, #0xfc
    str r2, [r1]
    add r1, r2, #0
    add r1, #0xf1
    str r2, [r0, r1]
    bx lr"
    );
    #endif
}

void sub_02087A30(void) {
    /* Original at 0x02087A30 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r6, r0, #0
    ldr r0, [r6, #0x10]
    mov r4, #0
    cmp r0, #0
    ble _02087A52
    add r5, r6, #0
    mov r7, #1
    ldr r0, [r5, #0x24]
    add r1, r7, #0
    bl ManagedSprite_SetAnim
    ldr r0, [r6, #0x10]
    add r4, r4, #1
    add r5, #0x10
    cmp r4, r0
    blt _02087A40
    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02087A54(void) {
    /* Original at 0x02087A54 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r6, r0, #0
    ldr r0, [r6, #0x10]
    mov r4, #0
    cmp r0, #0
    ble _02087A76
    add r5, r6, #0
    add r7, r4, #0
    ldr r0, [r5, #0x24]
    add r1, r7, #0
    bl ManagedSprite_SetAnim
    ldr r0, [r6, #0x10]
    add r4, r4, #1
    add r5, #0x10
    cmp r4, r0
    blt _02087A64
    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}
