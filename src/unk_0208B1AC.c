/* Decompiled from asm/unk_0208B1AC.s */
#include "global.h"

void sub_0208B1AC(void) {
    /* Original at 0x0208B1AC */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}
    sub sp, #0x44
    add r4, r0, #0
    mov r0, #0x10
    mov r1, #1
    bl GfGfx_EngineATogglePlanes
    mov r0, #0x10
    mov r1, #1
    bl GfGfx_EngineBTogglePlanes
    mov r0, #0x20
    mov r1, #0x13
    bl GF_CreateVramTransferManager
    mov r0, #0x13
    bl SpriteSystem_Alloc
    mov r1, #0xff
    lsl r1, r1, #2
    str r0, [r4, r1]
    ldr r0, [r4, r1]
    bl SpriteManager_New
    mov r7, #1
    lsl r7, r7, #0xa
    add r2, sp, #0x24
    ldr r3, _0208B24C ; =_02103A50
    str r0, [r4, r7]
    ldmia r3!, {r0, r1}
    add r6, r2, #0
    stmia r2!, {r0, r1}
    ldmia r3!, {r0, r1}
    stmia r2!, {r0, r1}
    ldmia r3!, {r0, r1}
    stmia r2!, {r0, r1}
    ldmia r3!, {r0, r1}
    ldr r5, _0208B250 ; =_02103A3C
    stmia r2!, {r0, r1}
    add r3, sp, #0x10
    ldmia r5!, {r0, r1}
    add r2, r3, #0
    stmia r3!, {r0, r1}
    ldmia r5!, {r0, r1}
    stmia r3!, {r0, r1}
    ldr r0, [r5]
    add r1, r6, #0
    str r0, [r3]
    sub r0, r7, #4
    ldr r0, [r4, r0]
    mov r3, #0x20
    bl SpriteSystem_Init
    sub r1, r7, #4
    ldr r0, [r4, r1]
    add r1, r1, #4
    ldr r1, [r4, r1]
    mov r2, #0x73
    bl SpriteSystem_InitSprites
    ldr r3, _0208B254 ; =_02103A2C
    add r2, sp, #0
    mov r1, #7
    ldrh r0, [r3]
    add r3, r3, #2
    strh r0, [r2]
    add r2, r2, #2
    sub r1, r1, #1
    bne _0208B22A
    mov r1, #0xff
    lsl r1, r1, #2
    ldr r0, [r4, r1]
    add r1, r1, #4
    ldr r1, [r4, r1]
    add r2, sp, #0
    bl sub_0200D294
    add sp, #0x44
    pop {r4, r5, r6, r7, pc}
    nop
    _0208B24C: .word _02103A50
    _0208B250: .word _02103A3C
    _0208B254: .word _02103A2C"
    );
    #endif
}

void sub_0208B258(void) {
    /* Original at 0x0208B258 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    mov r1, #0xff
    add r4, r0, #0
    lsl r1, r1, #2
    ldr r0, [r4, r1]
    add r1, r1, #4
    ldr r1, [r4, r1]
    bl SpriteSystem_DestroySpriteManager
    mov r0, #0xff
    lsl r0, r0, #2
    ldr r0, [r4, r0]
    bl SpriteSystem_Free
    pop {r4, pc}"
    );
    #endif
}

void sub_0208B278(void) {
    /* Original at 0x0208B278 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    ldr r0, _0208B2B0 ; =0x00000458
    mov r1, #1
    ldr r0, [r4, r0]
    lsl r1, r1, #0xc
    bl Sprite_UpdateAnim
    ldr r0, _0208B2B4 ; =0x0000045C
    mov r1, #1
    ldr r0, [r4, r0]
    lsl r1, r1, #0xc
    bl Sprite_UpdateAnim
    ldr r0, _0208B2B8 ; =0x00000504
    mov r1, #1
    ldr r0, [r4, r0]
    lsl r1, r1, #0xc
    bl Sprite_UpdateAnim
    ldr r0, _0208B2BC ; =0x00000508
    mov r1, #1
    ldr r0, [r4, r0]
    lsl r1, r1, #0xc
    bl Sprite_UpdateAnim
    pop {r4, pc}
    nop
    _0208B2B0: .word 0x00000458
    _0208B2B4: .word 0x0000045C
    _0208B2B8: .word 0x00000504
    _0208B2BC: .word 0x00000508"
    );
    #endif
}

void sub_0208B2C0(void) {
    /* Original at 0x0208B2C0 */
    /* Requires manual decompilation - 123 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    ldr r6, _0208B3C4 ; =_02103A70
    ldr r7, _0208B3C8 ; =0x00000404
    add r5, r0, #0
    mov r4, #0
    mov r0, #0xff
    mov r1, #1
    lsl r0, r0, #2
    lsl r1, r1, #0xa
    mov r2, #0x28
    mul r2, r4
    ldr r0, [r5, r0]
    ldr r1, [r5, r1]
    add r2, r6, r2
    bl SpriteSystem_CreateSpriteFromResourceHeader
    lsl r1, r4, #2
    add r1, r5, r1
    str r0, [r1, r7]
    add r0, r4, #1
    lsl r0, r0, #0x10
    lsr r4, r0, #0x10
    cmp r4, #0x73
    blo _0208B2CA
    add r0, r5, #0
    bl sub_0208B55C
    ldr r0, _0208B3CC ; =0x0000042C
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208B3D0 ; =0x000004A8
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208B3D4 ; =0x000004AC
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    mov r0, #0x4b
    lsl r0, r0, #4
    ldr r0, [r5, r0]
    mov r1, #0
    bl Sprite_SetDrawFlag
    ldr r0, _0208B3D8 ; =0x000004B4
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208B3DC ; =0x000004B8
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208B3E0 ; =0x000004BC
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    mov r0, #0x13
    lsl r0, r0, #6
    ldr r0, [r5, r0]
    mov r1, #0
    bl Sprite_SetDrawFlag
    ldr r0, _0208B3E4 ; =0x000004C4
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208B3E8 ; =0x000004C8
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208B3EC ; =0x000004CC
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    mov r0, #0x4d
    lsl r0, r0, #4
    ldr r0, [r5, r0]
    mov r1, #0
    bl Sprite_SetDrawFlag
    mov r0, #0x51
    lsl r0, r0, #4
    ldr r0, [r5, r0]
    mov r1, #0
    bl Sprite_SetDrawFlag
    ldr r0, _0208B3F0 ; =0x00000514
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208B3F4 ; =0x00000518
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208B3F8 ; =0x0000051C
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    mov r0, #0x52
    lsl r0, r0, #4
    ldr r0, [r5, r0]
    mov r1, #0
    bl Sprite_SetDrawFlag
    add r0, r5, #0
    bl sub_0208B714
    add r0, r5, #0
    bl sub_0208B74C
    ldr r0, _0208B3FC ; =0x00000524
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _0208B3C4: .word _02103A70
    _0208B3C8: .word 0x00000404
    _0208B3CC: .word 0x0000042C
    _0208B3D0: .word 0x000004A8
    _0208B3D4: .word 0x000004AC
    _0208B3D8: .word 0x000004B4
    _0208B3DC: .word 0x000004B8
    _0208B3E0: .word 0x000004BC
    _0208B3E4: .word 0x000004C4
    _0208B3E8: .word 0x000004C8
    _0208B3EC: .word 0x000004CC
    _0208B3F0: .word 0x00000514
    _0208B3F4: .word 0x00000518
    _0208B3F8: .word 0x0000051C
    _0208B3FC: .word 0x00000524"
    );
    #endif
}

void sub_0208B400(void) {
    /* Original at 0x0208B400 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    mov r0, #0x8b
    lsl r0, r0, #2
    ldr r1, [r4, r0]
    ldrb r0, [r1, #0x11]
    cmp r0, #2
    beq _0208B430
    ldrb r0, [r1, #0x14]
    ldr r1, _0208B43C ; =_021105B0
    ldr r2, _0208B440 ; =_021105B0 + 1
    lsl r3, r0, #1
    ldr r0, _0208B444 ; =0x00000428
    ldrb r1, [r1, r3]
    ldrb r2, [r2, r3]
    ldr r0, [r4, r0]
    bl Sprite_SetPositionXY
    ldr r0, _0208B444 ; =0x00000428
    mov r1, #2
    ldr r0, [r4, r0]
    bl Sprite_SetAnimCtrlSeq
    pop {r4, pc}
    ldr r0, _0208B444 ; =0x00000428
    mov r1, #0
    ldr r0, [r4, r0]
    bl Sprite_SetDrawFlag
    pop {r4, pc}
    _0208B43C: .word _021105B0
    _0208B440: .word _021105B0 + 1
    _0208B444: .word 0x00000428"
    );
    #endif
}

void sub_0208B448(void) {
    /* Original at 0x0208B448 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r7, r0, #0
    ldr r0, _0208B480 ; =0x00000404
    mov r5, #0
    add r4, r7, r0
    add r6, r5, #0
    lsl r0, r5, #2
    ldr r0, [r4, r0]
    add r1, r6, #0
    bl Sprite_SetDrawFlag
    add r0, r5, #1
    lsl r0, r0, #0x18
    lsr r5, r0, #0x18
    cmp r5, #8
    blo _0208B454
    ldr r0, _0208B484 ; =0x00000458
    mov r1, #0
    ldr r0, [r7, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208B488 ; =0x0000045C
    mov r1, #0
    ldr r0, [r7, r0]
    bl Sprite_SetDrawFlag
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _0208B480: .word 0x00000404
    _0208B484: .word 0x00000458
    _0208B488: .word 0x0000045C"
    );
    #endif
}

void sub_0208B48C(void) {
    /* Original at 0x0208B48C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    sub sp, #8
    add r4, r0, #0
    ldr r0, _0208B4E4 ; =0x00000243
    ldrb r0, [r4, r0]
    lsl r0, r0, #0x18
    lsr r3, r0, #0x1a
    bne _0208B4A0
    mov r3, #0x19
    b _0208B4A2
    add r3, #0x18
    mov r0, #0
    mov r1, #0xff
    str r0, [sp]
    lsl r1, r1, #2
    str r0, [sp, #4]
    ldr r0, [r4, r1]
    add r1, r1, #4
    ldr r1, [r4, r1]
    mov r2, #0xa2
    bl SpriteSystem_ReplaceCharResObj
    mov r0, #0
    str r0, [sp]
    mov r0, #6
    mov r1, #0xff
    ldr r3, _0208B4E4 ; =0x00000243
    str r0, [sp, #4]
    ldrb r3, [r4, r3]
    lsl r1, r1, #2
    ldr r0, [r4, r1]
    add r1, r1, #4
    lsl r3, r3, #0x18
    ldr r1, [r4, r1]
    lsr r4, r3, #0x1a
    ldr r3, _0208B4E8 ; =_02104C68
    mov r2, #0xa2
    ldrb r3, [r3, r4]
    add r3, #0x31
    bl SpriteSystem_ReplacePlttResObj
    add sp, #8
    pop {r4, pc}
    nop
    _0208B4E4: .word 0x00000243
    _0208B4E8: .word _02104C68"
    );
    #endif
}

void sub_0208B4EC(void) {
    /* Original at 0x0208B4EC */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    mov r0, #0xa
    lsl r0, r0, #6
    ldr r0, [r4, r0]
    lsl r0, r0, #4
    lsr r0, r0, #4
    cmp r0, #7
    bne _0208B514
    ldr r0, _0208B554 ; =0x00000454
    mov r1, #0
    ldr r0, [r4, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208B558 ; =0x00000524
    mov r1, #0
    ldr r0, [r4, r0]
    bl Sprite_SetDrawFlag
    pop {r4, pc}
    cmp r0, #0
    ldr r0, _0208B558 ; =0x00000524
    beq _0208B540
    ldr r0, [r4, r0]
    mov r1, #0
    bl Sprite_SetDrawFlag
    ldr r0, _0208B554 ; =0x00000454
    mov r1, #1
    ldr r0, [r4, r0]
    bl Sprite_SetDrawFlag
    mov r1, #0xa
    lsl r1, r1, #6
    ldr r0, _0208B554 ; =0x00000454
    ldr r1, [r4, r1]
    ldr r0, [r4, r0]
    lsl r1, r1, #4
    lsr r1, r1, #4
    bl Sprite_SetAnimCtrlSeq
    pop {r4, pc}
    ldr r0, [r4, r0]
    mov r1, #1
    bl Sprite_SetDrawFlag
    ldr r0, _0208B554 ; =0x00000454
    mov r1, #0
    ldr r0, [r4, r0]
    bl Sprite_SetDrawFlag
    pop {r4, pc}
    _0208B554: .word 0x00000454
    _0208B558: .word 0x00000524"
    );
    #endif
}

void sub_0208B55C(void) {
    /* Original at 0x0208B55C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r5, r0, #0
    bl sub_0208BA60
    mov r6, #0x99
    mov r4, #0
    mov r7, #3
    lsl r6, r6, #2
    lsl r0, r4, #1
    add r0, r5, r0
    ldrh r0, [r0, r6]
    cmp r0, #0
    beq _0208B596
    add r1, r7, #0
    bl GetMoveAttr
    add r3, r0, #0
    add r1, r4, #0
    add r1, #0xd
    add r2, r4, #5
    lsl r1, r1, #0x18
    lsl r2, r2, #0x18
    lsl r3, r3, #0x18
    add r0, r5, #0
    lsr r1, r1, #0x18
    lsr r2, r2, #0x18
    lsr r3, r3, #0x18
    bl sub_0208BA88
    add r0, r4, #1
    lsl r0, r0, #0x10
    lsr r4, r0, #0x10
    cmp r4, #4
    blo _0208B56C
    add r0, r5, #0
    bl sub_0208BE70
    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0208B5A8(void) {
    /* Original at 0x0208B5A8 */
    /* Requires manual decompilation - 158 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    ldr r6, _0208B6FC ; =0x00000404
    add r5, r0, #0
    mov r4, #0xb
    mov r7, #0
    lsl r0, r4, #2
    add r0, r5, r0
    ldr r0, [r0, r6]
    add r1, r7, #0
    bl thunk_Sprite_SetDrawFlag
    add r0, r4, #1
    lsl r0, r0, #0x10
    lsr r4, r0, #0x10
    cmp r4, #0x13
    bls _0208B5B2
    mov r0, #0xa
    lsl r0, r0, #6
    ldr r0, [r5, r0]
    lsl r0, r0, #3
    lsr r0, r0, #0x1f
    beq _0208B5D6
    b _0208B6F8
    ldr r0, _0208B700 ; =0x000007BC
    ldrsb r0, [r5, r0]
    cmp r0, #0
    beq _0208B5E4
    cmp r0, #1
    beq _0208B634
    pop {r3, r4, r5, r6, r7, pc}
    mov r0, #0x43
    lsl r0, r0, #4
    ldr r0, [r5, r0]
    mov r1, #1
    bl thunk_Sprite_SetDrawFlag
    mov r0, #9
    lsl r0, r0, #6
    ldrb r1, [r5, r0]
    add r0, r0, #1
    ldrb r0, [r5, r0]
    cmp r1, r0
    bne _0208B60E
    mov r0, #0x43
    lsl r0, r0, #4
    ldr r0, [r5, r0]
    mov r1, #0x6c
    mov r2, #0x30
    bl Sprite_SetPositionXY
    pop {r3, r4, r5, r6, r7, pc}
    mov r0, #0x43
    lsl r0, r0, #4
    ldr r0, [r5, r0]
    mov r1, #0x5b
    mov r2, #0x30
    bl Sprite_SetPositionXY
    ldr r0, _0208B704 ; =0x00000434
    mov r1, #1
    ldr r0, [r5, r0]
    bl thunk_Sprite_SetDrawFlag
    ldr r0, _0208B704 ; =0x00000434
    mov r1, #0x7d
    ldr r0, [r5, r0]
    mov r2, #0x30
    bl Sprite_SetPositionXY
    pop {r3, r4, r5, r6, r7, pc}
    mov r7, #0x99
    mov r4, #0
    lsl r7, r7, #2
    lsl r0, r4, #1
    add r0, r5, r0
    ldrh r0, [r0, r7]
    cmp r0, #0
    beq _0208B684
    mov r1, #3
    bl GetMoveAttr
    add r3, r0, #0
    add r1, r4, #0
    add r1, #0xd
    add r2, r4, #5
    lsl r1, r1, #0x18
    lsl r2, r2, #0x18
    lsl r3, r3, #0x18
    add r0, r5, #0
    lsr r1, r1, #0x18
    lsr r2, r2, #0x18
    lsr r3, r3, #0x18
    bl sub_0208BA88
    lsl r0, r4, #2
    add r6, r5, r0
    ldr r0, _0208B708 ; =0x00000438
    mov r1, #1
    ldr r0, [r6, r0]
    bl thunk_Sprite_SetDrawFlag
    ldr r0, _0208B708 ; =0x00000438
    lsl r2, r4, #5
    add r2, #0x10
    lsl r2, r2, #0x10
    ldr r0, [r6, r0]
    mov r1, #0x18
    asr r2, r2, #0x10
    bl Sprite_SetPositionXY
    add r0, r4, #1
    lsl r0, r0, #0x10
    lsr r4, r0, #0x10
    cmp r4, #4
    blo _0208B63A
    mov r0, #0x8b
    lsl r0, r0, #2
    ldr r0, [r5, r0]
    ldrh r0, [r0, #0x18]
    cmp r0, #0
    beq _0208B6C8
    mov r1, #3
    bl GetMoveAttr
    add r3, r0, #0
    lsl r3, r3, #0x18
    add r0, r5, #0
    mov r1, #0x11
    mov r2, #9
    lsr r3, r3, #0x18
    bl sub_0208BA88
    ldr r0, _0208B70C ; =0x00000448
    mov r1, #1
    ldr r0, [r5, r0]
    bl thunk_Sprite_SetDrawFlag
    ldr r0, _0208B70C ; =0x00000448
    mov r1, #0x18
    ldr r0, [r5, r0]
    mov r2, #0xa0
    bl Sprite_SetPositionXY
    b _0208B6D2
    ldr r0, _0208B70C ; =0x00000448
    mov r1, #0
    ldr r0, [r5, r0]
    bl thunk_Sprite_SetDrawFlag
    mov r0, #0x43
    lsl r0, r0, #4
    ldr r0, [r5, r0]
    mov r1, #0xc8
    mov r2, #0x18
    bl Sprite_SetPositionXY
    ldr r0, _0208B704 ; =0x00000434
    mov r1, #0xea
    ldr r0, [r5, r0]
    mov r2, #0x18
    bl Sprite_SetPositionXY
    ldr r0, _0208B710 ; =0x0000044C
    mov r1, #0xe8
    ldr r0, [r5, r0]
    mov r2, #0x28
    bl Sprite_SetPositionXY
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _0208B6FC: .word 0x00000404
    _0208B700: .word 0x000007BC
    _0208B704: .word 0x00000434
    _0208B708: .word 0x00000438
    _0208B70C: .word 0x00000448
    _0208B710: .word 0x0000044C"
    );
    #endif
}

void sub_0208B714(void) {
    /* Original at 0x0208B714 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r5, r0, #0
    mov r7, #0x15
    mov r6, #0
    add r4, r5, #0
    lsl r7, r7, #6
    ldr r0, [r4, r7]
    mov r1, #0
    bl Sprite_SetDrawFlag
    add r6, r6, #1
    add r4, r4, #4
    cmp r6, #0x19
    blt _0208B720
    mov r4, #0
    ldr r6, _0208B748 ; =0x000005A4
    add r7, r4, #0
    ldr r0, [r5, r6]
    add r1, r7, #0
    bl Sprite_SetDrawFlag
    add r4, r4, #1
    add r5, r5, #4
    cmp r4, #5
    blt _0208B736
    pop {r3, r4, r5, r6, r7, pc}
    _0208B748: .word 0x000005A4"
    );
    #endif
}

void sub_0208B74C(void) {
    /* Original at 0x0208B74C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    ldr r7, _0208B77C ; =0x000005B8
    add r5, r0, #0
    mov r4, #0
    mov r6, #6
    ldr r0, _0208B77C ; =0x000005B8
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208B77C ; =0x000005B8
    mov r1, #1
    ldr r0, [r5, r0]
    bl Sprite_SetAnimActiveFlag
    ldr r0, [r5, r7]
    sub r1, r6, r4
    bl Sprite_SetDrawPriority
    add r4, r4, #1
    add r5, r5, #4
    cmp r4, #6
    blt _0208B756
    pop {r3, r4, r5, r6, r7, pc}
    _0208B77C: .word 0x000005B8"
    );
    #endif
}

void sub_0208B780(void) {
    /* Original at 0x0208B780 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    sub sp, #0x10
    add r7, r0, #0
    ldr r0, [sp, #0x2c]
    add r5, r1, #0
    add r1, r2, #0
    add r2, r3, #0
    str r0, [sp]
    ldr r3, [sp, #0x28]
    add r0, sp, #8
    bl sub_0208B85C
    str r0, [sp, #4]
    lsl r0, r5, #2
    mov r6, #0
    add r4, sp, #8
    add r5, r7, r0
    ldrb r0, [r4]
    cmp r0, #0
    bne _0208B7B2
    ldr r0, [r5]
    mov r1, #0
    bl Sprite_SetDrawFlag
    b _0208B808
    cmp r0, #1
    bne _0208B7C8
    ldr r0, [r5]
    mov r1, #1
    bl Sprite_SetDrawFlag
    ldr r0, [r5]
    mov r1, #3
    bl Sprite_SetAnimCtrlSeq
    b _0208B808
    cmp r0, #2
    bne _0208B7DE
    ldr r0, [r5]
    mov r1, #1
    bl Sprite_SetDrawFlag
    ldr r0, [r5]
    mov r1, #0
    bl Sprite_SetAnimCtrlSeq
    b _0208B808
    cmp r0, #3
    bne _0208B7F4
    ldr r0, [r5]
    mov r1, #1
    bl Sprite_SetDrawFlag
    ldr r0, [r5]
    mov r1, #1
    bl Sprite_SetAnimCtrlSeq
    b _0208B808
    cmp r0, #4
    bne _0208B808
    ldr r0, [r5]
    mov r1, #1
    bl Sprite_SetDrawFlag
    ldr r0, [r5]
    mov r1, #2
    bl Sprite_SetAnimCtrlSeq
    add r6, r6, #1
    add r4, r4, #1
    add r5, r5, #4
    cmp r6, #5
    blt _0208B7A2
    ldr r0, [sp, #4]
    cmp r0, #0
    bne _0208B828
    ldr r0, [sp, #0x30]
    mov r1, #0
    lsl r0, r0, #2
    ldr r0, [r7, r0]
    bl Sprite_SetDrawFlag
    add sp, #0x10
    pop {r3, r4, r5, r6, r7, pc}
    ble _0208B842
    ldr r0, [sp, #0x30]
    mov r1, #1
    lsl r4, r0, #2
    ldr r0, [r7, r4]
    bl Sprite_SetDrawFlag
    ldr r0, [r7, r4]
    mov r1, #4
    bl Sprite_SetAnimCtrlSeq
    add sp, #0x10
    pop {r3, r4, r5, r6, r7, pc}
    bge _0208B858
    ldr r0, [sp, #0x30]
    mov r1, #1
    lsl r4, r0, #2
    ldr r0, [r7, r4]
    bl Sprite_SetDrawFlag
    ldr r0, [r7, r4]
    mov r1, #5
    bl Sprite_SetAnimCtrlSeq
    add sp, #0x10
    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0208B85C(void) {
    /* Original at 0x0208B85C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}
    add r3, r3, #2
    mov r4, #0
    lsl r3, r3, #0x18
    lsr r3, r3, #0x18
    mov r5, #1
    add r6, r4, #0
    cmp r4, r1
    ble _0208B872
    strb r6, [r0, r4]
    b _0208B87C
    cmp r4, r2
    ble _0208B87A
    strb r5, [r0, r4]
    b _0208B87C
    strb r3, [r0, r4]
    add r4, r4, #1
    cmp r4, #5
    blt _0208B86A
    ldr r0, [sp, #0x10]
    cmp r0, #0
    ble _0208B88E
    mov r0, #1
    pop {r3, r4, r5, r6}
    bx lr
    bge _0208B894
    mov r0, #1
    b _0208B896
    mov r0, #0
    neg r0, r0
    pop {r3, r4, r5, r6}
    bx lr"
    );
    #endif
}

void sub_0208B89C(void) {
    /* Original at 0x0208B89C */
    /* Requires manual decompilation - 137 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    sub sp, #0x30
    ldr r1, _0208B9C0 ; =0x000007BC
    add r5, r0, #0
    ldrsb r1, [r5, r1]
    cmp r1, #2
    beq _0208B8AC
    b _0208B9B6
    mov r1, #0x8b
    lsl r1, r1, #2
    ldr r1, [r5, r1]
    ldr r1, [r1, #0x34]
    cmp r1, #0
    beq _0208B9B6
    bl sub_0208A520
    add r4, r0, #0
    add r0, sp, #0x14
    mov r1, #0
    mov r2, #5
    bl MI_CpuFill8
    add r1, sp, #0x18
    add r0, r4, #0
    add r1, #2
    bl CalcBoxMonPokeathlonPerformance
    mov r0, #0x8b
    lsl r0, r0, #2
    ldr r2, [r5, r0]
    ldrb r0, [r2, #0x11]
    cmp r0, #1
    bne _0208B8E8
    ldr r0, [r2]
    ldrb r2, [r2, #0x14]
    add r1, sp, #0x14
    bl Party_GetMonAprijuiceModifiers
    add r0, sp, #0xc
    add r1, r4, #0
    add r2, sp, #0x14
    mov r3, #0x13
    bl CalcBoxmonPokeathlonStars
    add r3, sp, #0xc
    ldrb r0, [r3, #6]
    mov r1, #0x4f
    str r0, [sp]
    mov r0, #0xc
    ldrsb r0, [r3, r0]
    str r0, [sp, #4]
    mov r0, #0x68
    str r0, [sp, #8]
    ldrh r2, [r3, #0x1e]
    ldrh r3, [r3]
    ldr r0, _0208B9C4 ; =0x00000404
    lsl r2, r2, #0x1a
    lsl r3, r3, #0x11
    add r0, r5, r0
    lsr r2, r2, #0x1d
    lsr r3, r3, #0x1d
    bl sub_0208B780
    add r3, sp, #0xc
    ldrb r0, [r3, #2]
    mov r1, #0x54
    str r0, [sp]
    mov r0, #8
    ldrsb r0, [r3, r0]
    str r0, [sp, #4]
    mov r0, #0x69
    str r0, [sp, #8]
    ldrh r2, [r3, #0xe]
    ldrh r3, [r3]
    ldr r0, _0208B9C4 ; =0x00000404
    lsl r2, r2, #0x1a
    lsl r3, r3, #0x1d
    add r0, r5, r0
    lsr r2, r2, #0x1d
    lsr r3, r3, #0x1d
    bl sub_0208B780
    add r3, sp, #0xc
    ldrb r0, [r3, #4]
    mov r1, #0x59
    str r0, [sp]
    mov r0, #0xa
    ldrsb r0, [r3, r0]
    str r0, [sp, #4]
    mov r0, #0x6a
    str r0, [sp, #8]
    ldrh r2, [r3, #0x16]
    ldrh r3, [r3]
    ldr r0, _0208B9C4 ; =0x00000404
    lsl r2, r2, #0x1a
    lsl r3, r3, #0x17
    add r0, r5, r0
    lsr r2, r2, #0x1d
    lsr r3, r3, #0x1d
    bl sub_0208B780
    add r3, sp, #0xc
    ldrb r0, [r3, #3]
    mov r1, #0x5e
    str r0, [sp]
    mov r0, #9
    ldrsb r0, [r3, r0]
    str r0, [sp, #4]
    mov r0, #0x6b
    str r0, [sp, #8]
    ldrh r2, [r3, #0x12]
    ldrh r3, [r3]
    ldr r0, _0208B9C4 ; =0x00000404
    lsl r2, r2, #0x1a
    lsl r3, r3, #0x1a
    add r0, r5, r0
    lsr r2, r2, #0x1d
    lsr r3, r3, #0x1d
    bl sub_0208B780
    add r3, sp, #0xc
    ldrb r0, [r3, #5]
    mov r1, #0x63
    str r0, [sp]
    mov r0, #0xb
    ldrsb r0, [r3, r0]
    str r0, [sp, #4]
    mov r0, #0x6c
    str r0, [sp, #8]
    ldrh r2, [r3, #0x1a]
    ldrh r3, [r3]
    ldr r0, _0208B9C4 ; =0x00000404
    lsl r2, r2, #0x1a
    lsl r3, r3, #0x14
    add r0, r5, r0
    lsr r2, r2, #0x1d
    lsr r3, r3, #0x1d
    bl sub_0208B780
    add sp, #0x30
    pop {r3, r4, r5, pc}
    add r0, r5, #0
    bl sub_0208B714
    add sp, #0x30
    pop {r3, r4, r5, pc}
    _0208B9C0: .word 0x000007BC
    _0208B9C4: .word 0x00000404"
    );
    #endif
}

void sub_0208B9C8(void) {
    /* Original at 0x0208B9C8 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r5, r0, #0
    ldr r0, _0208BA50 ; =0x000007BC
    ldrsb r0, [r5, r0]
    cmp r0, #0
    bne _0208BA36
    ldr r0, _0208BA54 ; =0x00000299
    ldrb r0, [r5, r0]
    cmp r0, #0
    beq _0208B9FE
    ldr r0, _0208BA58 ; =0x000005CC
    mov r1, #1
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    mov r4, #0
    ldr r6, _0208BA5C ; =0x000005B8
    add r7, r4, #0
    ldr r0, [r5, r6]
    add r1, r7, #0
    bl Sprite_SetDrawFlag
    add r4, r4, #1
    add r5, r5, #4
    cmp r4, #5
    blt _0208B9EC
    pop {r3, r4, r5, r6, r7, pc}
    mov r7, #0xa5
    mov r6, #0
    add r4, r5, #0
    lsl r7, r7, #2
    add r0, r5, r6
    ldrb r0, [r0, r7]
    cmp r0, #0
    ldr r0, _0208BA5C ; =0x000005B8
    beq _0208BA1A
    ldr r0, [r4, r0]
    mov r1, #1
    bl Sprite_SetDrawFlag
    b _0208BA22
    ldr r0, [r4, r0]
    mov r1, #0
    bl Sprite_SetDrawFlag
    add r6, r6, #1
    add r4, r4, #4
    cmp r6, #5
    blt _0208BA06
    ldr r0, _0208BA58 ; =0x000005CC
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetDrawFlag
    pop {r3, r4, r5, r6, r7, pc}
    mov r4, #0
    ldr r6, _0208BA5C ; =0x000005B8
    add r7, r4, #0
    ldr r0, [r5, r6]
    add r1, r7, #0
    bl Sprite_SetDrawFlag
    add r4, r4, #1
    add r5, r5, #4
    cmp r4, #6
    blt _0208BA3C
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _0208BA50: .word 0x000007BC
    _0208BA54: .word 0x00000299
    _0208BA58: .word 0x000005CC
    _0208BA5C: .word 0x000005B8"
    );
    #endif
}

void sub_0208BA60(void) {
    /* Original at 0x0208BA60 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    mov r3, #9
    add r4, r0, #0
    lsl r3, r3, #6
    ldrb r3, [r4, r3]
    mov r1, #0xb
    mov r2, #3
    bl sub_0208BA88
    ldr r3, _0208BA84 ; =0x00000241
    add r0, r4, #0
    ldrb r3, [r4, r3]
    mov r1, #0xc
    mov r2, #4
    bl sub_0208BA88
    pop {r4, pc}
    nop
    _0208BA84: .word 0x00000241"
    );
    #endif
}

void sub_0208BA88(void) {
    /* Original at 0x0208BA88 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}
    sub sp, #0xc
    add r7, r3, #0
    add r5, r0, #0
    add r4, r1, #0
    add r6, r2, #0
    bl sub_020776B4
    str r0, [sp, #8]
    add r0, r7, #0
    bl sub_02077678
    add r3, r0, #0
    mov r0, #1
    str r0, [sp]
    mov r1, #0xff
    str r6, [sp, #4]
    lsl r1, r1, #2
    ldr r0, [r5, r1]
    add r1, r1, #4
    ldr r1, [r5, r1]
    ldr r2, [sp, #8]
    bl SpriteSystem_ReplaceCharResObj
    add r0, r7, #0
    bl sub_0207769C
    add r2, r0, #0
    lsl r0, r4, #2
    add r1, r5, r0
    ldr r0, _0208BAD4 ; =0x00000404
    ldr r0, [r1, r0]
    add r1, r2, #3
    bl thunk_Sprite_SetPaletteOverride
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    nop
    _0208BAD4: .word 0x00000404"
    );
    #endif
}

void sub_0208BAD8(void) {
    /* Original at 0x0208BAD8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    sub sp, #8
    add r5, r0, #0
    add r0, r1, #0
    ldrb r0, [r0]
    str r1, [sp]
    str r2, [sp, #4]
    lsl r0, r0, #5
    add r0, #0x10
    lsl r0, r0, #0x10
    add r4, r3, #0
    asr r7, r0, #0x10
    mov r6, #0
    ldr r0, _0208BB20 ; =0x00000438
    ldr r1, [sp, #4]
    ldr r0, [r5, r0]
    add r2, r4, #0
    bl Sprite_GetPositionXY
    mov r0, #0
    ldrsh r0, [r4, r0]
    cmp r7, r0
    bne _0208BB0E
    ldr r0, [sp]
    add sp, #8
    strb r6, [r0]
    pop {r3, r4, r5, r6, r7, pc}
    add r0, r6, #1
    lsl r0, r0, #0x10
    asr r6, r0, #0x10
    add r5, r5, #4
    cmp r6, #4
    blt _0208BAF2
    add sp, #8
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _0208BB20: .word 0x00000438"
    );
    #endif
}

void sub_0208BB24(void) {
    /* Original at 0x0208BB24 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}
    push {r4, lr}
    sub sp, #8
    add r2, sp, #4
    add r1, sp, #0x14
    add r2, #2
    add r3, sp, #4
    add r4, r0, #0
    bl sub_0208BAD8
    add r2, sp, #0
    add r0, r4, #0
    add r1, sp, #0x18
    add r2, #2
    add r3, sp, #0
    bl sub_0208BAD8
    add r0, sp, #0x10
    ldrb r0, [r0, #4]
    add r3, sp, #0
    mov r2, #0
    add r0, #0xd
    lsl r0, r0, #2
    add r1, r4, r0
    ldr r0, _0208BB88 ; =0x00000404
    ldrsh r2, [r3, r2]
    ldr r0, [r1, r0]
    mov r1, #2
    ldrsh r1, [r3, r1]
    bl Sprite_SetPositionXY
    add r0, sp, #0x10
    ldrb r0, [r0, #8]
    add r3, sp, #0
    mov r2, #4
    add r0, #0xd
    lsl r0, r0, #2
    add r1, r4, r0
    ldr r0, _0208BB88 ; =0x00000404
    ldrsh r2, [r3, r2]
    ldr r0, [r1, r0]
    mov r1, #6
    ldrsh r1, [r3, r1]
    bl Sprite_SetPositionXY
    add sp, #8
    pop {r4}
    pop {r3}
    add sp, #0x10
    bx r3
    _0208BB88: .word 0x00000404"
    );
    #endif
}

void sub_0208BB8C(void) {
    /* Original at 0x0208BB8C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    sub sp, #8
    add r5, r0, #0
    add r0, r1, #0
    mov r1, #1
    bl GetMoveAttr
    add r4, r0, #0
    bl sub_02077830
    add r6, r0, #0
    add r0, r4, #0
    bl sub_02077800
    add r3, r0, #0
    mov r0, #1
    mov r1, #0xff
    str r0, [sp]
    mov r0, #0xa
    lsl r1, r1, #2
    str r0, [sp, #4]
    ldr r0, [r5, r1]
    add r1, r1, #4
    ldr r1, [r5, r1]
    add r2, r6, #0
    bl SpriteSystem_ReplaceCharResObj
    add r0, r4, #0
    bl sub_02077818
    add r1, r0, #0
    ldr r0, _0208BBD8 ; =0x0000044C
    add r1, r1, #3
    ldr r0, [r5, r0]
    bl thunk_Sprite_SetPaletteOverride
    add sp, #8
    pop {r4, r5, r6, pc}
    _0208BBD8: .word 0x0000044C"
    );
    #endif
}

void sub_0208BBDC(void) {
    /* Original at 0x0208BBDC */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    ldr r0, _0208BC70 ; =0x000007BD
    ldrb r0, [r4, r0]
    lsl r0, r0, #0x1c
    lsr r2, r0, #0x1c
    cmp r2, #4
    beq _0208BBF2
    cmp r2, #5
    beq _0208BC2E
    b _0208BC52
    mov r0, #0x8b
    lsl r0, r0, #2
    ldr r0, [r4, r0]
    ldrb r0, [r0, #0x12]
    cmp r0, #2
    ldr r0, _0208BC74 ; =0x00000428
    bne _0208BC12
    lsl r2, r2, #5
    add r2, #0x28
    lsl r2, r2, #0x10
    ldr r0, [r4, r0]
    mov r1, #0x44
    asr r2, r2, #0x10
    bl Sprite_SetPositionXY
    b _0208BC22
    lsl r2, r2, #5
    add r2, #0x18
    lsl r2, r2, #0x10
    ldr r0, [r4, r0]
    mov r1, #0x44
    asr r2, r2, #0x10
    bl Sprite_SetPositionXY
    ldr r0, _0208BC74 ; =0x00000428
    mov r1, #0
    ldr r0, [r4, r0]
    bl Sprite_SetAnimCtrlSeq
    pop {r4, pc}
    mov r0, #0x8b
    lsl r0, r0, #2
    ldr r0, [r4, r0]
    ldrb r0, [r0, #0x12]
    cmp r0, #2
    bne _0208BC6E
    ldr r0, _0208BC74 ; =0x00000428
    mov r1, #0xdc
    ldr r0, [r4, r0]
    mov r2, #0xb0
    bl Sprite_SetPositionXY
    ldr r0, _0208BC74 ; =0x00000428
    mov r1, #3
    ldr r0, [r4, r0]
    bl Sprite_SetAnimCtrlSeq
    pop {r4, pc}
    ldr r0, _0208BC74 ; =0x00000428
    lsl r2, r2, #5
    add r2, #0x18
    lsl r2, r2, #0x10
    ldr r0, [r4, r0]
    mov r1, #0x44
    asr r2, r2, #0x10
    bl Sprite_SetPositionXY
    ldr r0, _0208BC74 ; =0x00000428
    mov r1, #0
    ldr r0, [r4, r0]
    bl Sprite_SetAnimCtrlSeq
    pop {r4, pc}
    _0208BC70: .word 0x000007BD
    _0208BC74: .word 0x00000428"
    );
    #endif
}

void sub_0208BC78(void) {
    /* Original at 0x0208BC78 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}
    sub sp, #4
    add r4, r0, #0
    ldr r0, _0208BCAC ; =0x00000428
    add r1, sp, #0
    ldr r0, [r4, r0]
    add r1, #2
    add r2, sp, #0
    bl Sprite_GetPositionXY
    ldr r0, _0208BCB0 ; =0x0000042C
    add r3, sp, #0
    mov r1, #2
    mov r2, #0
    ldrsh r1, [r3, r1]
    ldrsh r2, [r3, r2]
    ldr r0, [r4, r0]
    bl Sprite_SetPositionXY
    ldr r0, _0208BCB0 ; =0x0000042C
    mov r1, #1
    ldr r0, [r4, r0]
    bl Sprite_SetDrawFlag
    add sp, #4
    pop {r3, r4, pc}
    _0208BCAC: .word 0x00000428
    _0208BCB0: .word 0x0000042C"
    );
    #endif
}

void sub_0208BCB4(void) {
    /* Original at 0x0208BCB4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    ldr r0, _0208BCD0 ; =0x0000042C
    mov r1, #0x44
    ldr r0, [r4, r0]
    mov r2, #0xa8
    bl Sprite_SetPositionXY
    ldr r0, _0208BCD0 ; =0x0000042C
    mov r1, #0
    ldr r0, [r4, r0]
    bl Sprite_SetAnimCtrlSeq
    pop {r4, pc}
    _0208BCD0: .word 0x0000042C"
    );
    #endif
}

void sub_0208BCD4(void) {
    /* Original at 0x0208BCD4 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    mov r2, #0x1f
    lsl r2, r2, #6
    mov r1, #0
    strb r1, [r0, r2]
    add r3, r2, #3
    strb r1, [r0, r3]
    add r3, r2, #2
    strb r1, [r0, r3]
    ldr r3, _0208BD30 ; =0x0000027A
    ldrb r3, [r0, r3]
    cmp r3, #0
    bne _0208BCF4
    add r2, r2, #1
    strb r1, [r0, r2]
    b _0208BD0A
    cmp r3, #0xff
    bne _0208BD00
    mov r3, #0xc
    add r1, r2, #1
    strb r3, [r0, r1]
    b _0208BD0A
    mov r1, #0xc
    mul r1, r3
    asr r3, r1, #8
    add r1, r2, #1
    strb r3, [r0, r1]
    ldr r7, _0208BD34 ; =0x00000404
    add r5, r0, #0
    mov r4, #0x1d
    add r5, #0x74
    add r6, r7, #0
    ldr r0, [r5, r7]
    mov r1, #0
    bl Sprite_SetDrawFlag
    ldr r0, [r5, r6]
    mov r1, #0
    bl Sprite_SetAnimationFrame
    add r4, r4, #1
    add r5, r5, #4
    cmp r4, #0x28
    bls _0208BD14
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _0208BD30: .word 0x0000027A
    _0208BD34: .word 0x00000404"
    );
    #endif
}

void sub_0208BD38(void) {
    /* Original at 0x0208BD38 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r6, r0, #0
    mov r4, #0
    add r5, r6, #0
    mov r7, #1
    mov r0, #0x9f
    lsl r0, r0, #2
    ldrh r1, [r6, r0]
    add r0, r7, #0
    lsl r0, r4
    tst r0, r1
    beq _0208BD5E
    mov r0, #0x46
    lsl r0, r0, #4
    ldr r0, [r5, r0]
    add r1, r7, #0
    bl Sprite_SetAnimCtrlSeq
    b _0208BD6A
    mov r0, #0x46
    lsl r0, r0, #4
    ldr r0, [r5, r0]
    mov r1, #0
    bl Sprite_SetAnimCtrlSeq
    add r4, r4, #1
    add r5, r5, #4
    cmp r4, #6
    blo _0208BD42
    mov r0, #0xa
    lsl r0, r0, #6
    ldr r0, [r6, r0]
    lsl r1, r0, #2
    lsr r1, r1, #0x1f
    cmp r1, #1
    bne _0208BD92
    lsl r0, r0, #3
    lsr r0, r0, #0x1f
    bne _0208BD92
    ldr r0, _0208BDC0 ; =0x000004D4
    mov r1, #1
    ldr r0, [r6, r0]
    bl thunk_Sprite_SetDrawFlag
    b _0208BD9C
    ldr r0, _0208BDC0 ; =0x000004D4
    mov r1, #0
    ldr r0, [r6, r0]
    bl thunk_Sprite_SetDrawFlag
    mov r0, #0xa
    lsl r0, r0, #6
    ldr r0, [r6, r0]
    lsr r0, r0, #0x1e
    cmp r0, #2
    ldr r0, _0208BDC4 ; =0x000004D8
    bne _0208BDB4
    ldr r0, [r6, r0]
    mov r1, #1
    bl thunk_Sprite_SetDrawFlag
    pop {r3, r4, r5, r6, r7, pc}
    ldr r0, [r6, r0]
    mov r1, #0
    bl thunk_Sprite_SetDrawFlag
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _0208BDC0: .word 0x000004D4
    _0208BDC4: .word 0x000004D8"
    );
    #endif
}

void sub_0208BDC8(void) {
    /* Original at 0x0208BDC8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    ldr r7, _0208BDF8 ; =0x000007BE
    add r5, r0, #0
    mov r4, #0
    mov r6, #1
    add r0, r6, #0
    ldrb r1, [r5, r7]
    lsl r0, r4
    tst r0, r1
    beq _0208BDEA
    lsl r0, r4, #2
    add r1, r5, r0
    ldr r0, _0208BDFC ; =0x000004A8
    ldr r0, [r1, r0]
    add r1, r6, #0
    bl Sprite_SetDrawFlag
    add r0, r4, #1
    lsl r0, r0, #0x18
    lsr r4, r0, #0x18
    cmp r4, #5
    blo _0208BDD2
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _0208BDF8: .word 0x000007BE
    _0208BDFC: .word 0x000004A8"
    );
    #endif
}

void sub_0208BE00(void) {
    /* Original at 0x0208BE00 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    sub sp, #8
    add r5, r0, #0
    lsl r0, r2, #2
    add r4, r1, #0
    add r1, r5, r0
    ldr r0, _0208BE6C ; =0x00000404
    ldr r0, [r1, r0]
    bl Sprite_GetImageProxy
    mov r1, #2
    bl NNS_G2dGetImageLocation
    add r6, r0, #0
    mov r0, #0x8b
    lsl r0, r0, #2
    ldr r0, [r5, r0]
    ldrb r0, [r0, #0x11]
    cmp r0, #2
    bne _0208BE30
    add r0, r4, #0
    bl Boxmon_GetIconNaix
    b _0208BE36
    add r0, r4, #0
    bl Pokemon_GetIconNaix
    add r1, r0, #0
    mov r0, #0x13
    str r0, [sp]
    mov r0, #0x14
    mov r2, #0
    add r3, sp, #4
    bl GfGfxLoader_GetCharData
    add r4, r0, #0
    ldr r0, [sp, #4]
    mov r1, #2
    ldr r0, [r0, #0x14]
    lsl r1, r1, #8
    bl DC_FlushRange
    ldr r0, [sp, #4]
    mov r2, #2
    ldr r0, [r0, #0x14]
    add r1, r6, #0
    lsl r2, r2, #8
    bl GXS_LoadOBJ
    add r0, r4, #0
    bl Heap_Free
    add sp, #8
    pop {r4, r5, r6, pc}
    _0208BE6C: .word 0x00000404"
    );
    #endif
}

void sub_0208BE70(void) {
    /* Original at 0x0208BE70 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    bl sub_0208A520
    add r1, r0, #0
    add r0, r4, #0
    mov r2, #0x13
    bl sub_0208BE00
    mov r2, #0x8f
    lsl r2, r2, #2
    add r1, r2, #0
    ldrh r0, [r4, r2]
    add r2, #0x44
    add r1, #0x42
    ldr r2, [r4, r2]
    ldrh r1, [r4, r1]
    lsl r2, r2, #3
    lsr r2, r2, #0x1f
    bl GetMonIconPaletteEx
    add r1, r0, #0
    mov r0, #0x45
    lsl r0, r0, #4
    ldr r0, [r4, r0]
    add r1, #0xc
    bl thunk_Sprite_SetPaletteOverride
    mov r1, #0x8f
    lsl r1, r1, #2
    ldrh r0, [r4, r1]
    add r1, #0x42
    ldrh r1, [r4, r1]
    mov r2, #0x1c
    bl GetMonBaseStat_HandleAlternateForm
    add r2, r0, #0
    mov r0, #0x45
    lsl r0, r0, #4
    mov r1, #1
    ldr r0, [r4, r0]
    eor r1, r2
    bl Sprite_SetFlipMode
    pop {r4, pc}"
    );
    #endif
}

void sub_0208BECC(void) {
    /* Original at 0x0208BECC */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r6, r0, #0
    bl sub_0208A520
    add r7, r0, #0
    mov r0, #0x8b
    lsl r0, r0, #2
    ldr r1, [r6, r0]
    ldrb r0, [r1, #0x11]
    cmp r0, #0
    beq _0208BEEC
    cmp r0, #1
    beq _0208BEF8
    cmp r0, #2
    beq _0208BEF2
    b _0208BEFC
    mov r0, #1
    str r0, [sp]
    b _0208BEFC
    mov r0, #0
    str r0, [sp]
    b _0208BEFC
    ldrb r0, [r1, #0x13]
    str r0, [sp]
    ldr r0, [sp]
    mov r4, #0
    cmp r0, #0
    ble _0208BF7A
    add r5, r6, #0
    mov r0, #0x8b
    lsl r0, r0, #2
    ldr r1, [r6, r0]
    ldrb r0, [r1, #0x11]
    cmp r0, #0
    beq _0208BF1C
    cmp r0, #1
    beq _0208BF4A
    cmp r0, #2
    beq _0208BF36
    b _0208BF64
    add r0, r6, #0
    bl sub_0208A520
    add r7, r0, #0
    bl Pokemon_GetIconPalette
    add r1, r0, #0
    ldr r0, _0208BF98 ; =0x00000528
    add r1, #0xc
    ldr r0, [r5, r0]
    bl thunk_Sprite_SetPaletteOverride
    b _0208BF64
    add r0, r7, #0
    bl Boxmon_GetIconPalette
    add r1, r0, #0
    ldr r0, _0208BF98 ; =0x00000528
    add r1, #0xc
    ldr r0, [r5, r0]
    bl thunk_Sprite_SetPaletteOverride
    b _0208BF64
    ldr r0, [r1]
    add r1, r4, #0
    bl Party_GetMonByIndex
    add r7, r0, #0
    bl Pokemon_GetIconPalette
    add r1, r0, #0
    ldr r0, _0208BF98 ; =0x00000528
    add r1, #0xc
    ldr r0, [r5, r0]
    bl thunk_Sprite_SetPaletteOverride
    add r2, r4, #0
    add r0, r6, #0
    add r1, r7, #0
    add r2, #0x49
    bl sub_0208BE00
    ldr r0, [sp]
    add r4, r4, #1
    add r5, r5, #4
    cmp r4, r0
    blt _0208BF06
    cmp r4, #6
    bge _0208BF96
    lsl r0, r4, #2
    add r5, r6, r0
    ldr r6, _0208BF98 ; =0x00000528
    mov r7, #0
    ldr r0, [r5, r6]
    add r1, r7, #0
    bl thunk_Sprite_SetDrawFlag
    add r4, r4, #1
    add r5, r5, #4
    cmp r4, #6
    blt _0208BF86
    pop {r3, r4, r5, r6, r7, pc}
    _0208BF98: .word 0x00000528"
    );
    #endif
}

void sub_0208BF9C(void) {
    /* Original at 0x0208BF9C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    mov r0, #0x8b
    lsl r0, r0, #2
    ldr r0, [r4, r0]
    ldrb r0, [r0, #0x11]
    cmp r0, #2
    bne _0208BFC4
    ldr r0, _0208BFC8 ; =0x00000528
    mov r1, #0xd7
    ldr r0, [r4, r0]
    mov r2, #0x50
    bl Sprite_SetPositionXY
    ldr r0, _0208BFCC ; =0x0000052C
    mov r1, #0xd7
    ldr r0, [r4, r0]
    mov r2, #0x50
    bl Sprite_SetPositionXY
    pop {r4, pc}
    nop
    _0208BFC8: .word 0x00000528
    _0208BFCC: .word 0x0000052C"
    );
    #endif
}

void sub_0208BFD0(void) {
    /* Original at 0x0208BFD0 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    mov r1, #0x8b
    add r5, r0, #0
    lsl r1, r1, #2
    ldr r1, [r5, r1]
    ldrb r1, [r1, #0x11]
    cmp r1, #2
    bne _0208C058
    bl sub_0208A520
    add r4, r0, #0
    ldr r0, _0208C05C ; =0x000007D4
    ldr r0, [r5, r0]
    cmp r0, #0
    ldr r0, _0208C060 ; =0x00000528
    bne _0208C020
    ldr r0, [r5, r0]
    mov r1, #1
    bl thunk_Sprite_SetDrawFlag
    ldr r0, _0208C064 ; =0x0000052C
    mov r1, #0
    ldr r0, [r5, r0]
    bl thunk_Sprite_SetDrawFlag
    add r0, r5, #0
    add r1, r4, #0
    mov r2, #0x49
    bl sub_0208BE00
    add r0, r4, #0
    bl Boxmon_GetIconPalette
    add r1, r0, #0
    ldr r0, _0208C060 ; =0x00000528
    add r1, #0xc
    ldr r0, [r5, r0]
    bl thunk_Sprite_SetPaletteOverride
    b _0208C04E
    ldr r0, [r5, r0]
    mov r1, #0
    bl thunk_Sprite_SetDrawFlag
    ldr r0, _0208C064 ; =0x0000052C
    mov r1, #1
    ldr r0, [r5, r0]
    bl thunk_Sprite_SetDrawFlag
    add r0, r5, #0
    add r1, r4, #0
    mov r2, #0x4a
    bl sub_0208BE00
    add r0, r4, #0
    bl Boxmon_GetIconPalette
    add r1, r0, #0
    ldr r0, _0208C064 ; =0x0000052C
    add r1, #0xc
    ldr r0, [r5, r0]
    bl thunk_Sprite_SetPaletteOverride
    ldr r1, _0208C05C ; =0x000007D4
    mov r0, #1
    ldr r2, [r5, r1]
    eor r0, r2
    str r0, [r5, r1]
    pop {r3, r4, r5, pc}
    nop
    _0208C05C: .word 0x000007D4
    _0208C060: .word 0x00000528
    _0208C064: .word 0x0000052C"
    );
    #endif
}

void sub_0208C068(void) {
    /* Original at 0x0208C068 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    ldr r0, _0208C0A0 ; =0x000007BC
    ldrsb r0, [r4, r0]
    cmp r0, #1
    bne _0208C084
    mov r0, #0x45
    lsl r0, r0, #4
    ldr r0, [r4, r0]
    mov r1, #0xa0
    mov r2, #0x10
    bl Sprite_SetPositionXY
    b _0208C092
    mov r0, #0x45
    lsl r0, r0, #4
    ldr r0, [r4, r0]
    mov r1, #0x20
    mov r2, #0x44
    bl Sprite_SetPositionXY
    mov r0, #0x45
    lsl r0, r0, #4
    ldr r0, [r4, r0]
    mov r1, #1
    bl thunk_Sprite_SetDrawFlag
    pop {r4, pc}
    _0208C0A0: .word 0x000007BC"
    );
    #endif
}

void sub_0208C0A4(void) {
    /* Original at 0x0208C0A4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r2, #0
    cmp r4, r1
    ble _0208C0CA
    add r0, #0x2c
    sub r1, r4, r1
    mul r1, r0
    lsl r0, r1, #0x10
    mov r1, #0x4b
    lsl r1, r1, #2
    bl _u32_div_f
    lsr r0, r0, #0x10
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    sub r0, r4, r0
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    pop {r4, pc}
    add r0, #0x2c
    sub r1, r1, r4
    mul r1, r0
    lsl r0, r1, #0x10
    mov r1, #0x4b
    lsl r1, r1, #2
    bl _u32_div_f
    lsr r0, r0, #0x10
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add r0, r4, r0
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    pop {r4, pc}"
    );
    #endif
}

void sub_0208C0E8(void) {
    /* Original at 0x0208C0E8 */
    /* Requires manual decompilation - 117 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    add r4, r0, #0
    ldr r0, _0208C1EC ; =0x00000275
    mov r1, #0x58
    ldrb r0, [r4, r0]
    add r2, r1, #0
    bl sub_0208C0A4
    add r5, r0, #0
    ldr r0, _0208C1EC ; =0x00000275
    mov r1, #0x31
    ldrb r0, [r4, r0]
    mov r2, #0x49
    bl sub_0208C0A4
    add r2, r0, #0
    mov r0, #0x13
    lsl r0, r0, #6
    ldr r0, [r4, r0]
    add r1, r5, #0
    bl Sprite_SetPositionXY
    ldr r0, _0208C1F0 ; =0x00000276
    mov r1, #0x6e
    ldrb r0, [r4, r0]
    mov r2, #0x58
    bl sub_0208C0A4
    add r5, r0, #0
    ldr r0, _0208C1F0 ; =0x00000276
    mov r1, #0x41
    ldrb r0, [r4, r0]
    mov r2, #0x49
    bl sub_0208C0A4
    add r2, r0, #0
    ldr r0, _0208C1F4 ; =0x000004C4
    add r1, r5, #0
    ldr r0, [r4, r0]
    bl Sprite_SetPositionXY
    ldr r0, _0208C1F8 ; =0x00000277
    mov r1, #0x67
    ldrb r0, [r4, r0]
    mov r2, #0x58
    bl sub_0208C0A4
    add r5, r0, #0
    ldr r0, _0208C1F8 ; =0x00000277
    mov r1, #0x5c
    ldrb r0, [r4, r0]
    mov r2, #0x49
    bl sub_0208C0A4
    add r2, r0, #0
    ldr r0, _0208C1FC ; =0x000004C8
    add r1, r5, #0
    ldr r0, [r4, r0]
    bl Sprite_SetPositionXY
    mov r0, #0x9e
    lsl r0, r0, #2
    ldrb r0, [r4, r0]
    mov r1, #0x48
    mov r2, #0x57
    bl sub_0208C0A4
    add r5, r0, #0
    mov r0, #0x9e
    lsl r0, r0, #2
    ldrb r0, [r4, r0]
    mov r1, #0x5c
    mov r2, #0x49
    bl sub_0208C0A4
    add r2, r0, #0
    ldr r0, _0208C200 ; =0x000004CC
    add r1, r5, #0
    ldr r0, [r4, r0]
    bl Sprite_SetPositionXY
    ldr r0, _0208C204 ; =0x00000279
    mov r1, #0x41
    ldrb r0, [r4, r0]
    mov r2, #0x57
    bl sub_0208C0A4
    add r5, r0, #0
    ldr r0, _0208C204 ; =0x00000279
    mov r1, #0x41
    ldrb r0, [r4, r0]
    mov r2, #0x49
    bl sub_0208C0A4
    add r2, r0, #0
    mov r0, #0x4d
    lsl r0, r0, #4
    ldr r0, [r4, r0]
    add r1, r5, #0
    bl Sprite_SetPositionXY
    mov r0, #0x13
    lsl r0, r0, #6
    ldr r0, [r4, r0]
    mov r1, #1
    bl Sprite_SetDrawFlag
    ldr r0, _0208C1F4 ; =0x000004C4
    mov r1, #1
    ldr r0, [r4, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208C1FC ; =0x000004C8
    mov r1, #1
    ldr r0, [r4, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208C200 ; =0x000004CC
    mov r1, #1
    ldr r0, [r4, r0]
    bl Sprite_SetDrawFlag
    mov r0, #0x4d
    lsl r0, r0, #4
    ldr r0, [r4, r0]
    mov r1, #1
    bl Sprite_SetDrawFlag
    pop {r3, r4, r5, pc}
    nop
    _0208C1EC: .word 0x00000275
    _0208C1F0: .word 0x00000276
    _0208C1F4: .word 0x000004C4
    _0208C1F8: .word 0x00000277
    _0208C1FC: .word 0x000004C8
    _0208C200: .word 0x000004CC
    _0208C204: .word 0x00000279"
    );
    #endif
}

void sub_0208C208(void) {
    /* Original at 0x0208C208 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    mov r0, #0x13
    lsl r0, r0, #6
    ldr r0, [r4, r0]
    mov r1, #0
    bl Sprite_SetDrawFlag
    ldr r0, _0208C244 ; =0x000004C4
    mov r1, #0
    ldr r0, [r4, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208C248 ; =0x000004C8
    mov r1, #0
    ldr r0, [r4, r0]
    bl Sprite_SetDrawFlag
    ldr r0, _0208C24C ; =0x000004CC
    mov r1, #0
    ldr r0, [r4, r0]
    bl Sprite_SetDrawFlag
    mov r0, #0x4d
    lsl r0, r0, #4
    ldr r0, [r4, r0]
    mov r1, #0
    bl Sprite_SetDrawFlag
    pop {r4, pc}
    _0208C244: .word 0x000004C4
    _0208C248: .word 0x000004C8
    _0208C24C: .word 0x000004CC"
    );
    #endif
}

void sub_0208C250(void) {
    /* Original at 0x0208C250 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    sub sp, #8
    add r6, r1, #0
    add r5, r0, #0
    add r0, r6, #0
    mov r1, #1
    add r4, r2, #0
    bl GetRibbonAttr
    add r3, r0, #0
    mov r0, #0
    str r0, [sp]
    add r0, r4, #0
    mov r1, #0xff
    add r0, #0x19
    lsl r1, r1, #2
    str r0, [sp, #4]
    ldr r0, [r5, r1]
    add r1, r1, #4
    ldr r1, [r5, r1]
    mov r2, #0x27
    bl SpriteSystem_ReplaceCharResObj
    add r0, r6, #0
    mov r1, #2
    bl GetRibbonAttr
    add r4, #0x36
    add r2, r0, #0
    lsl r0, r4, #2
    add r1, r5, r0
    ldr r0, _0208C29C ; =0x00000404
    ldr r0, [r1, r0]
    add r1, r2, #7
    bl thunk_Sprite_SetPaletteOverride
    add sp, #8
    pop {r4, r5, r6, pc}
    _0208C29C: .word 0x00000404"
    );
    #endif
}

void sub_0208C2A0(void) {
    /* Original at 0x0208C2A0 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    ldr r6, _0208C30C ; =0x00000404
    add r5, r0, #0
    mov r4, #0x36
    mov r7, #0
    lsl r0, r4, #2
    add r0, r5, r0
    ldr r0, [r0, r6]
    add r1, r7, #0
    bl Sprite_SetDrawFlag
    add r0, r4, #1
    lsl r0, r0, #0x10
    lsr r4, r0, #0x10
    cmp r4, #0x42
    bls _0208C2AA
    ldr r0, _0208C310 ; =0x000007BC
    ldrsb r0, [r5, r0]
    cmp r0, #2
    bne _0208C30A
    ldr r7, _0208C314 ; =0x000004DC
    ldr r6, _0208C318 ; =0x000007C6
    mov r4, #0
    ldrb r0, [r5, r6]
    cmp r4, r0
    bge _0208C2F6
    lsl r0, r4, #2
    add r0, r5, r0
    ldr r0, [r0, r7]
    mov r1, #1
    bl Sprite_SetDrawFlag
    lsl r1, r4, #0x18
    add r0, r5, #0
    lsr r1, r1, #0x18
    bl sub_0208ACDC
    lsl r2, r4, #0x18
    add r1, r0, #0
    add r0, r5, #0
    lsr r2, r2, #0x18
    bl sub_0208C250
    add r0, r4, #1
    lsl r0, r0, #0x10
    lsr r4, r0, #0x10
    cmp r4, #9
    blo _0208C2CE
    ldr r0, _0208C31C ; =0x0000050C
    mov r1, #0
    ldr r0, [r5, r0]
    bl Sprite_SetAnimCtrlSeq
    pop {r3, r4, r5, r6, r7, pc}
    _0208C30C: .word 0x00000404
    _0208C310: .word 0x000007BC
    _0208C314: .word 0x000004DC
    _0208C318: .word 0x000007C6
    _0208C31C: .word 0x0000050C"
    );
    #endif
}

void sub_0208C320(void) {
    /* Original at 0x0208C320 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    ldr r7, _0208C378 ; =0x000007C5
    add r5, r0, #0
    mov r4, #0
    add r6, r7, #1
    ldrb r1, [r5, r7]
    lsl r0, r1, #3
    add r0, r1, r0
    add r1, r4, r0
    ldrb r0, [r5, r6]
    cmp r1, r0
    bge _0208C35E
    lsl r0, r4, #2
    add r1, r5, r0
    ldr r0, _0208C37C ; =0x000004DC
    ldr r0, [r1, r0]
    mov r1, #1
    bl Sprite_SetDrawFlag
    lsl r1, r4, #0x18
    add r0, r5, #0
    lsr r1, r1, #0x18
    bl sub_0208ACDC
    lsl r2, r4, #0x18
    add r1, r0, #0
    add r0, r5, #0
    lsr r2, r2, #0x18
    bl sub_0208C250
    b _0208C36C
    lsl r0, r4, #2
    add r1, r5, r0
    ldr r0, _0208C37C ; =0x000004DC
    ldr r0, [r1, r0]
    mov r1, #0
    bl Sprite_SetDrawFlag
    add r0, r4, #1
    lsl r0, r0, #0x10
    lsr r4, r0, #0x10
    cmp r4, #9
    blo _0208C32A
    pop {r3, r4, r5, r6, r7, pc}
    _0208C378: .word 0x000007C5
    _0208C37C: .word 0x000004DC"
    );
    #endif
}

void sub_0208C380(void) {
    /* Original at 0x0208C380 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    add r5, r0, #0
    ldr r0, _0208C3BC ; =0x000007C4
    mov r1, #3
    ldrb r6, [r5, r0]
    add r0, r6, #0
    bl _s32_div_f
    add r4, r1, #0
    add r0, r6, #0
    mov r1, #3
    bl _s32_div_f
    add r2, r0, #0
    mov r3, #0x28
    mov r0, #5
    lsl r1, r4, #5
    mul r3, r2
    lsl r0, r0, #8
    add r1, #0x20
    add r3, #0x18
    lsl r1, r1, #0x10
    lsl r2, r3, #0x10
    ldr r0, [r5, r0]
    asr r1, r1, #0x10
    asr r2, r2, #0x10
    bl Sprite_SetPositionXY
    pop {r4, r5, r6, pc}
    nop
    _0208C3BC: .word 0x000007C4"
    );
    #endif
}

void sub_0208C3C0(void) {
    /* Original at 0x0208C3C0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    ldr r0, _0208C3E0 ; =0x0000050C
    ldr r0, [r4, r0]
    bl Sprite_GetDrawFlag
    cmp r0, #1
    bne _0208C3DC
    ldr r0, _0208C3E0 ; =0x0000050C
    mov r1, #1
    ldr r0, [r4, r0]
    lsl r1, r1, #0xc
    bl Sprite_UpdateAnim
    pop {r4, pc}
    nop
    _0208C3E0: .word 0x0000050C"
    );
    #endif
}
