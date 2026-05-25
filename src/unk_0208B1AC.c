/* Decompiled from asm/unk_0208B1AC.s */
#include "global.h"

void sub_0208B1AC(void) {
    /* Original at 0x0208B1AC */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    add r4, r0, #0\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0x20\n    mov r1, #0x13\n    bl GF_CreateVramTransferManager\n    mov r0, #0x13\n    bl SpriteSystem_Alloc\n    mov r1, #0xff\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    bl SpriteManager_New\n    mov r7, #1\n    lsl r7, r7, #0xa\n    add r2, sp, #0x24\n    ldr r3, _0208B24C ; =_02103A50\n    str r0, [r4, r7]\n    ldmia r3!, {r0, r1}\n    add r6, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    ldr r5, _0208B250 ; =_02103A3C\n    stmia r2!, {r0, r1}\n    add r3, sp, #0x10\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    add r1, r6, #0\n    str r0, [r3]\n    sub r0, r7, #4\n    ldr r0, [r4, r0]\n    mov r3, #0x20\n    bl SpriteSystem_Init\n    sub r1, r7, #4\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x73\n    bl SpriteSystem_InitSprites\n    ldr r3, _0208B254 ; =_02103A2C\n    add r2, sp, #0\n    mov r1, #7\n    ldrh r0, [r3]\n    add r3, r3, #2\n    strh r0, [r2]\n    add r2, r2, #2\n    sub r1, r1, #1\n    bne _0208B22A\n    mov r1, #0xff\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    add r2, sp, #0\n    bl sub_0200D294\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0208B24C: .word _02103A50\n    _0208B250: .word _02103A3C\n    _0208B254: .word _02103A2C"
    );
    #endif
}

void sub_0208B258(void) {
    void *r4;
    r1 = 0xff;
    r4 = r0 + 0;
    /* lsl r1, r1, #2 */
    /* ldr r0, [r4, r1] */
    r1 = (0xff + 4) + 4;
    /* ldr r1, [r4, r1] */
    SpriteSystem_DestroySpriteManager();
    r0 = 0xff;
    /* lsl r0, r0, #2 */
    /* ldr r0, [r4, r0] */
    SpriteSystem_Free(0xff);
}

void sub_0208B278(void) {
    /* Original at 0x0208B278 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0208B2B0 ; =0x00000458\n    mov r1, #1\n    ldr r0, [r4, r0]\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    ldr r0, _0208B2B4 ; =0x0000045C\n    mov r1, #1\n    ldr r0, [r4, r0]\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    ldr r0, _0208B2B8 ; =0x00000504\n    mov r1, #1\n    ldr r0, [r4, r0]\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    ldr r0, _0208B2BC ; =0x00000508\n    mov r1, #1\n    ldr r0, [r4, r0]\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    pop {r4, pc}\n    nop\n    _0208B2B0: .word 0x00000458\n    _0208B2B4: .word 0x0000045C\n    _0208B2B8: .word 0x00000504\n    _0208B2BC: .word 0x00000508"
    );
    #endif
}

void sub_0208B2C0(void) {
    /* Original at 0x0208B2C0 */
    /* Requires manual decompilation - 123 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r6, _0208B3C4 ; =_02103A70\n    ldr r7, _0208B3C8 ; =0x00000404\n    add r5, r0, #0\n    mov r4, #0\n    mov r0, #0xff\n    mov r1, #1\n    lsl r0, r0, #2\n    lsl r1, r1, #0xa\n    mov r2, #0x28\n    mul r2, r4\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r6, r2\n    bl SpriteSystem_CreateSpriteFromResourceHeader\n    lsl r1, r4, #2\n    add r1, r5, r1\n    str r0, [r1, r7]\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x73\n    blo _0208B2CA\n    add r0, r5, #0\n    bl sub_0208B55C\n    ldr r0, _0208B3CC ; =0x0000042C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B3D0 ; =0x000004A8\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B3D4 ; =0x000004AC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0x4b\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B3D8 ; =0x000004B4\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B3DC ; =0x000004B8\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B3E0 ; =0x000004BC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0x13\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B3E4 ; =0x000004C4\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B3E8 ; =0x000004C8\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B3EC ; =0x000004CC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0x4d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x51\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B3F0 ; =0x00000514\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B3F4 ; =0x00000518\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B3F8 ; =0x0000051C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0x52\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r5, #0\n    bl sub_0208B714\n    add r0, r5, #0\n    bl sub_0208B74C\n    ldr r0, _0208B3FC ; =0x00000524\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0208B3C4: .word _02103A70\n    _0208B3C8: .word 0x00000404\n    _0208B3CC: .word 0x0000042C\n    _0208B3D0: .word 0x000004A8\n    _0208B3D4: .word 0x000004AC\n    _0208B3D8: .word 0x000004B4\n    _0208B3DC: .word 0x000004B8\n    _0208B3E0: .word 0x000004BC\n    _0208B3E4: .word 0x000004C4\n    _0208B3E8: .word 0x000004C8\n    _0208B3EC: .word 0x000004CC\n    _0208B3F0: .word 0x00000514\n    _0208B3F4: .word 0x00000518\n    _0208B3F8: .word 0x0000051C\n    _0208B3FC: .word 0x00000524"
    );
    #endif
}

void sub_0208B400(void) {
    /* Original at 0x0208B400 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    ldrb r0, [r1, #0x11]\n    cmp r0, #2\n    beq _0208B430\n    ldrb r0, [r1, #0x14]\n    ldr r1, _0208B43C ; =_021105B0\n    ldr r2, _0208B440 ; =_021105B0 + 1\n    lsl r3, r0, #1\n    ldr r0, _0208B444 ; =0x00000428\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r0, [r4, r0]\n    bl Sprite_SetPositionXY\n    ldr r0, _0208B444 ; =0x00000428\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, pc}\n    ldr r0, _0208B444 ; =0x00000428\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    pop {r4, pc}\n    _0208B43C: .word _021105B0\n    _0208B440: .word _021105B0 + 1\n    _0208B444: .word 0x00000428"
    );
    #endif
}

void sub_0208B448(void) {
    /* Original at 0x0208B448 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, _0208B480 ; =0x00000404\n    mov r5, #0\n    add r4, r7, r0\n    add r6, r5, #0\n    lsl r0, r5, #2\n    ldr r0, [r4, r0]\n    add r1, r6, #0\n    bl Sprite_SetDrawFlag\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #8\n    blo _0208B454\n    ldr r0, _0208B484 ; =0x00000458\n    mov r1, #0\n    ldr r0, [r7, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B488 ; =0x0000045C\n    mov r1, #0\n    ldr r0, [r7, r0]\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0208B480: .word 0x00000404\n    _0208B484: .word 0x00000458\n    _0208B488: .word 0x0000045C"
    );
    #endif
}

void sub_0208B48C(void) {
    /* Original at 0x0208B48C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, _0208B4E4 ; =0x00000243\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r3, r0, #0x1a\n    bne _0208B4A0\n    mov r3, #0x19\n    b _0208B4A2\n    add r3, #0x18\n    mov r0, #0\n    mov r1, #0xff\n    str r0, [sp]\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0xa2\n    bl SpriteSystem_ReplaceCharResObj\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    mov r1, #0xff\n    ldr r3, _0208B4E4 ; =0x00000243\n    str r0, [sp, #4]\n    ldrb r3, [r4, r3]\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    lsl r3, r3, #0x18\n    ldr r1, [r4, r1]\n    lsr r4, r3, #0x1a\n    ldr r3, _0208B4E8 ; =_02104C68\n    mov r2, #0xa2\n    ldrb r3, [r3, r4]\n    add r3, #0x31\n    bl SpriteSystem_ReplacePlttResObj\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _0208B4E4: .word 0x00000243\n    _0208B4E8: .word _02104C68"
    );
    #endif
}

void sub_0208B4EC(void) {
    /* Original at 0x0208B4EC */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    lsl r0, r0, #4\n    lsr r0, r0, #4\n    cmp r0, #7\n    bne _0208B514\n    ldr r0, _0208B554 ; =0x00000454\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B558 ; =0x00000524\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    pop {r4, pc}\n    cmp r0, #0\n    ldr r0, _0208B558 ; =0x00000524\n    beq _0208B540\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B554 ; =0x00000454\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    mov r1, #0xa\n    lsl r1, r1, #6\n    ldr r0, _0208B554 ; =0x00000454\n    ldr r1, [r4, r1]\n    ldr r0, [r4, r0]\n    lsl r1, r1, #4\n    lsr r1, r1, #4\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, pc}\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B554 ; =0x00000454\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    pop {r4, pc}\n    _0208B554: .word 0x00000454\n    _0208B558: .word 0x00000524"
    );
    #endif
}

void sub_0208B55C(void) {
    /* Original at 0x0208B55C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_0208BA60\n    mov r6, #0x99\n    mov r4, #0\n    mov r7, #3\n    lsl r6, r6, #2\n    lsl r0, r4, #1\n    add r0, r5, r0\n    ldrh r0, [r0, r6]\n    cmp r0, #0\n    beq _0208B596\n    add r1, r7, #0\n    bl GetMoveAttr\n    add r3, r0, #0\n    add r1, r4, #0\n    add r1, #0xd\n    add r2, r4, #5\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl sub_0208BA88\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #4\n    blo _0208B56C\n    add r0, r5, #0\n    bl sub_0208BE70\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0208B5A8(void) {
    /* Original at 0x0208B5A8 */
    /* Requires manual decompilation - 158 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r6, _0208B6FC ; =0x00000404\n    add r5, r0, #0\n    mov r4, #0xb\n    mov r7, #0\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, r6]\n    add r1, r7, #0\n    bl thunk_Sprite_SetDrawFlag\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x13\n    bls _0208B5B2\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    lsl r0, r0, #3\n    lsr r0, r0, #0x1f\n    beq _0208B5D6\n    b _0208B6F8\n    ldr r0, _0208B700 ; =0x000007BC\n    ldrsb r0, [r5, r0]\n    cmp r0, #0\n    beq _0208B5E4\n    cmp r0, #1\n    beq _0208B634\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x43\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl thunk_Sprite_SetDrawFlag\n    mov r0, #9\n    lsl r0, r0, #6\n    ldrb r1, [r5, r0]\n    add r0, r0, #1\n    ldrb r0, [r5, r0]\n    cmp r1, r0\n    bne _0208B60E\n    mov r0, #0x43\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x6c\n    mov r2, #0x30\n    bl Sprite_SetPositionXY\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x43\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x5b\n    mov r2, #0x30\n    bl Sprite_SetPositionXY\n    ldr r0, _0208B704 ; =0x00000434\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetDrawFlag\n    ldr r0, _0208B704 ; =0x00000434\n    mov r1, #0x7d\n    ldr r0, [r5, r0]\n    mov r2, #0x30\n    bl Sprite_SetPositionXY\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r7, #0x99\n    mov r4, #0\n    lsl r7, r7, #2\n    lsl r0, r4, #1\n    add r0, r5, r0\n    ldrh r0, [r0, r7]\n    cmp r0, #0\n    beq _0208B684\n    mov r1, #3\n    bl GetMoveAttr\n    add r3, r0, #0\n    add r1, r4, #0\n    add r1, #0xd\n    add r2, r4, #5\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl sub_0208BA88\n    lsl r0, r4, #2\n    add r6, r5, r0\n    ldr r0, _0208B708 ; =0x00000438\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl thunk_Sprite_SetDrawFlag\n    ldr r0, _0208B708 ; =0x00000438\n    lsl r2, r4, #5\n    add r2, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r6, r0]\n    mov r1, #0x18\n    asr r2, r2, #0x10\n    bl Sprite_SetPositionXY\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #4\n    blo _0208B63A\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldrh r0, [r0, #0x18]\n    cmp r0, #0\n    beq _0208B6C8\n    mov r1, #3\n    bl GetMoveAttr\n    add r3, r0, #0\n    lsl r3, r3, #0x18\n    add r0, r5, #0\n    mov r1, #0x11\n    mov r2, #9\n    lsr r3, r3, #0x18\n    bl sub_0208BA88\n    ldr r0, _0208B70C ; =0x00000448\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetDrawFlag\n    ldr r0, _0208B70C ; =0x00000448\n    mov r1, #0x18\n    ldr r0, [r5, r0]\n    mov r2, #0xa0\n    bl Sprite_SetPositionXY\n    b _0208B6D2\n    ldr r0, _0208B70C ; =0x00000448\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetDrawFlag\n    mov r0, #0x43\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0xc8\n    mov r2, #0x18\n    bl Sprite_SetPositionXY\n    ldr r0, _0208B704 ; =0x00000434\n    mov r1, #0xea\n    ldr r0, [r5, r0]\n    mov r2, #0x18\n    bl Sprite_SetPositionXY\n    ldr r0, _0208B710 ; =0x0000044C\n    mov r1, #0xe8\n    ldr r0, [r5, r0]\n    mov r2, #0x28\n    bl Sprite_SetPositionXY\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0208B6FC: .word 0x00000404\n    _0208B700: .word 0x000007BC\n    _0208B704: .word 0x00000434\n    _0208B708: .word 0x00000438\n    _0208B70C: .word 0x00000448\n    _0208B710: .word 0x0000044C"
    );
    #endif
}

void sub_0208B714(void) {
    /* Original at 0x0208B714 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r7, #0x15\n    mov r6, #0\n    add r4, r5, #0\n    lsl r7, r7, #6\n    ldr r0, [r4, r7]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #0x19\n    blt _0208B720\n    mov r4, #0\n    ldr r6, _0208B748 ; =0x000005A4\n    add r7, r4, #0\n    ldr r0, [r5, r6]\n    add r1, r7, #0\n    bl Sprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #5\n    blt _0208B736\n    pop {r3, r4, r5, r6, r7, pc}\n    _0208B748: .word 0x000005A4"
    );
    #endif
}

void sub_0208B74C(void) {
    /* Original at 0x0208B74C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r7, _0208B77C ; =0x000005B8\n    add r5, r0, #0\n    mov r4, #0\n    mov r6, #6\n    ldr r0, _0208B77C ; =0x000005B8\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208B77C ; =0x000005B8\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, [r5, r7]\n    sub r1, r6, r4\n    bl Sprite_SetDrawPriority\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _0208B756\n    pop {r3, r4, r5, r6, r7, pc}\n    _0208B77C: .word 0x000005B8"
    );
    #endif
}

void sub_0208B780(void) {
    /* Original at 0x0208B780 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r0, #0\n    ldr r0, [sp, #0x2c]\n    add r5, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    str r0, [sp]\n    ldr r3, [sp, #0x28]\n    add r0, sp, #8\n    bl sub_0208B85C\n    str r0, [sp, #4]\n    lsl r0, r5, #2\n    mov r6, #0\n    add r4, sp, #8\n    add r5, r7, r0\n    ldrb r0, [r4]\n    cmp r0, #0\n    bne _0208B7B2\n    ldr r0, [r5]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    b _0208B808\n    cmp r0, #1\n    bne _0208B7C8\n    ldr r0, [r5]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    b _0208B808\n    cmp r0, #2\n    bne _0208B7DE\n    ldr r0, [r5]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5]\n    mov r1, #0\n    bl Sprite_SetAnimCtrlSeq\n    b _0208B808\n    cmp r0, #3\n    bne _0208B7F4\n    ldr r0, [r5]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    b _0208B808\n    cmp r0, #4\n    bne _0208B808\n    ldr r0, [r5]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5]\n    mov r1, #2\n    bl Sprite_SetAnimCtrlSeq\n    add r6, r6, #1\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r6, #5\n    blt _0208B7A2\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    bne _0208B828\n    ldr r0, [sp, #0x30]\n    mov r1, #0\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    bl Sprite_SetDrawFlag\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    ble _0208B842\n    ldr r0, [sp, #0x30]\n    mov r1, #1\n    lsl r4, r0, #2\n    ldr r0, [r7, r4]\n    bl Sprite_SetDrawFlag\n    ldr r0, [r7, r4]\n    mov r1, #4\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    bge _0208B858\n    ldr r0, [sp, #0x30]\n    mov r1, #1\n    lsl r4, r0, #2\n    ldr r0, [r7, r4]\n    bl Sprite_SetDrawFlag\n    ldr r0, [r7, r4]\n    mov r1, #5\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0208B85C(void) {
    /* Original at 0x0208B85C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    add r3, r3, #2\n    mov r4, #0\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    mov r5, #1\n    add r6, r4, #0\n    cmp r4, r1\n    ble _0208B872\n    strb r6, [r0, r4]\n    b _0208B87C\n    cmp r4, r2\n    ble _0208B87A\n    strb r5, [r0, r4]\n    b _0208B87C\n    strb r3, [r0, r4]\n    add r4, r4, #1\n    cmp r4, #5\n    blt _0208B86A\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    ble _0208B88E\n    mov r0, #1\n    pop {r3, r4, r5, r6}\n    bx lr\n    bge _0208B894\n    mov r0, #1\n    b _0208B896\n    mov r0, #0\n    neg r0, r0\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void sub_0208B89C(void) {
    /* Original at 0x0208B89C */
    /* Requires manual decompilation - 137 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x30\n    ldr r1, _0208B9C0 ; =0x000007BC\n    add r5, r0, #0\n    ldrsb r1, [r5, r1]\n    cmp r1, #2\n    beq _0208B8AC\n    b _0208B9B6\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    ldr r1, [r1, #0x34]\n    cmp r1, #0\n    beq _0208B9B6\n    bl sub_0208A520\n    add r4, r0, #0\n    add r0, sp, #0x14\n    mov r1, #0\n    mov r2, #5\n    bl MI_CpuFill8\n    add r1, sp, #0x18\n    add r0, r4, #0\n    add r1, #2\n    bl CalcBoxMonPokeathlonPerformance\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r2, [r5, r0]\n    ldrb r0, [r2, #0x11]\n    cmp r0, #1\n    bne _0208B8E8\n    ldr r0, [r2]\n    ldrb r2, [r2, #0x14]\n    add r1, sp, #0x14\n    bl Party_GetMonAprijuiceModifiers\n    add r0, sp, #0xc\n    add r1, r4, #0\n    add r2, sp, #0x14\n    mov r3, #0x13\n    bl CalcBoxmonPokeathlonStars\n    add r3, sp, #0xc\n    ldrb r0, [r3, #6]\n    mov r1, #0x4f\n    str r0, [sp]\n    mov r0, #0xc\n    ldrsb r0, [r3, r0]\n    str r0, [sp, #4]\n    mov r0, #0x68\n    str r0, [sp, #8]\n    ldrh r2, [r3, #0x1e]\n    ldrh r3, [r3]\n    ldr r0, _0208B9C4 ; =0x00000404\n    lsl r2, r2, #0x1a\n    lsl r3, r3, #0x11\n    add r0, r5, r0\n    lsr r2, r2, #0x1d\n    lsr r3, r3, #0x1d\n    bl sub_0208B780\n    add r3, sp, #0xc\n    ldrb r0, [r3, #2]\n    mov r1, #0x54\n    str r0, [sp]\n    mov r0, #8\n    ldrsb r0, [r3, r0]\n    str r0, [sp, #4]\n    mov r0, #0x69\n    str r0, [sp, #8]\n    ldrh r2, [r3, #0xe]\n    ldrh r3, [r3]\n    ldr r0, _0208B9C4 ; =0x00000404\n    lsl r2, r2, #0x1a\n    lsl r3, r3, #0x1d\n    add r0, r5, r0\n    lsr r2, r2, #0x1d\n    lsr r3, r3, #0x1d\n    bl sub_0208B780\n    add r3, sp, #0xc\n    ldrb r0, [r3, #4]\n    mov r1, #0x59\n    str r0, [sp]\n    mov r0, #0xa\n    ldrsb r0, [r3, r0]\n    str r0, [sp, #4]\n    mov r0, #0x6a\n    str r0, [sp, #8]\n    ldrh r2, [r3, #0x16]\n    ldrh r3, [r3]\n    ldr r0, _0208B9C4 ; =0x00000404\n    lsl r2, r2, #0x1a\n    lsl r3, r3, #0x17\n    add r0, r5, r0\n    lsr r2, r2, #0x1d\n    lsr r3, r3, #0x1d\n    bl sub_0208B780\n    add r3, sp, #0xc\n    ldrb r0, [r3, #3]\n    mov r1, #0x5e\n    str r0, [sp]\n    mov r0, #9\n    ldrsb r0, [r3, r0]\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    ldrh r2, [r3, #0x12]\n    ldrh r3, [r3]\n    ldr r0, _0208B9C4 ; =0x00000404\n    lsl r2, r2, #0x1a\n    lsl r3, r3, #0x1a\n    add r0, r5, r0\n    lsr r2, r2, #0x1d\n    lsr r3, r3, #0x1d\n    bl sub_0208B780\n    add r3, sp, #0xc\n    ldrb r0, [r3, #5]\n    mov r1, #0x63\n    str r0, [sp]\n    mov r0, #0xb\n    ldrsb r0, [r3, r0]\n    str r0, [sp, #4]\n    mov r0, #0x6c\n    str r0, [sp, #8]\n    ldrh r2, [r3, #0x1a]\n    ldrh r3, [r3]\n    ldr r0, _0208B9C4 ; =0x00000404\n    lsl r2, r2, #0x1a\n    lsl r3, r3, #0x14\n    add r0, r5, r0\n    lsr r2, r2, #0x1d\n    lsr r3, r3, #0x1d\n    bl sub_0208B780\n    add sp, #0x30\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl sub_0208B714\n    add sp, #0x30\n    pop {r3, r4, r5, pc}\n    _0208B9C0: .word 0x000007BC\n    _0208B9C4: .word 0x00000404"
    );
    #endif
}

void sub_0208B9C8(void) {
    /* Original at 0x0208B9C8 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0208BA50 ; =0x000007BC\n    ldrsb r0, [r5, r0]\n    cmp r0, #0\n    bne _0208BA36\n    ldr r0, _0208BA54 ; =0x00000299\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    beq _0208B9FE\n    ldr r0, _0208BA58 ; =0x000005CC\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    mov r4, #0\n    ldr r6, _0208BA5C ; =0x000005B8\n    add r7, r4, #0\n    ldr r0, [r5, r6]\n    add r1, r7, #0\n    bl Sprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #5\n    blt _0208B9EC\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r7, #0xa5\n    mov r6, #0\n    add r4, r5, #0\n    lsl r7, r7, #2\n    add r0, r5, r6\n    ldrb r0, [r0, r7]\n    cmp r0, #0\n    ldr r0, _0208BA5C ; =0x000005B8\n    beq _0208BA1A\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    b _0208BA22\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #5\n    blt _0208BA06\n    ldr r0, _0208BA58 ; =0x000005CC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r4, #0\n    ldr r6, _0208BA5C ; =0x000005B8\n    add r7, r4, #0\n    ldr r0, [r5, r6]\n    add r1, r7, #0\n    bl Sprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _0208BA3C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0208BA50: .word 0x000007BC\n    _0208BA54: .word 0x00000299\n    _0208BA58: .word 0x000005CC\n    _0208BA5C: .word 0x000005B8"
    );
    #endif
}

void sub_0208BA60(void) {
    /* Original at 0x0208BA60 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r3, #9\n    add r4, r0, #0\n    lsl r3, r3, #6\n    ldrb r3, [r4, r3]\n    mov r1, #0xb\n    mov r2, #3\n    bl sub_0208BA88\n    ldr r3, _0208BA84 ; =0x00000241\n    add r0, r4, #0\n    ldrb r3, [r4, r3]\n    mov r1, #0xc\n    mov r2, #4\n    bl sub_0208BA88\n    pop {r4, pc}\n    nop\n    _0208BA84: .word 0x00000241"
    );
    #endif
}

void sub_0208BA88(void) {
    /* Original at 0x0208BA88 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r3, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_020776B4\n    str r0, [sp, #8]\n    add r0, r7, #0\n    bl sub_02077678\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r1, #0xff\n    str r6, [sp, #4]\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    ldr r2, [sp, #8]\n    bl SpriteSystem_ReplaceCharResObj\n    add r0, r7, #0\n    bl sub_0207769C\n    add r2, r0, #0\n    lsl r0, r4, #2\n    add r1, r5, r0\n    ldr r0, _0208BAD4 ; =0x00000404\n    ldr r0, [r1, r0]\n    add r1, r2, #3\n    bl thunk_Sprite_SetPaletteOverride\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0208BAD4: .word 0x00000404"
    );
    #endif
}

void sub_0208BAD8(void) {
    /* Original at 0x0208BAD8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r0, r1, #0\n    ldrb r0, [r0]\n    str r1, [sp]\n    str r2, [sp, #4]\n    lsl r0, r0, #5\n    add r0, #0x10\n    lsl r0, r0, #0x10\n    add r4, r3, #0\n    asr r7, r0, #0x10\n    mov r6, #0\n    ldr r0, _0208BB20 ; =0x00000438\n    ldr r1, [sp, #4]\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    bl Sprite_GetPositionXY\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    cmp r7, r0\n    bne _0208BB0E\n    ldr r0, [sp]\n    add sp, #8\n    strb r6, [r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #1\n    lsl r0, r0, #0x10\n    asr r6, r0, #0x10\n    add r5, r5, #4\n    cmp r6, #4\n    blt _0208BAF2\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0208BB20: .word 0x00000438"
    );
    #endif
}

void sub_0208BB24(void) {
    /* Original at 0x0208BB24 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r4, lr}\n    sub sp, #8\n    add r2, sp, #4\n    add r1, sp, #0x14\n    add r2, #2\n    add r3, sp, #4\n    add r4, r0, #0\n    bl sub_0208BAD8\n    add r2, sp, #0\n    add r0, r4, #0\n    add r1, sp, #0x18\n    add r2, #2\n    add r3, sp, #0\n    bl sub_0208BAD8\n    add r0, sp, #0x10\n    ldrb r0, [r0, #4]\n    add r3, sp, #0\n    mov r2, #0\n    add r0, #0xd\n    lsl r0, r0, #2\n    add r1, r4, r0\n    ldr r0, _0208BB88 ; =0x00000404\n    ldrsh r2, [r3, r2]\n    ldr r0, [r1, r0]\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    bl Sprite_SetPositionXY\n    add r0, sp, #0x10\n    ldrb r0, [r0, #8]\n    add r3, sp, #0\n    mov r2, #4\n    add r0, #0xd\n    lsl r0, r0, #2\n    add r1, r4, r0\n    ldr r0, _0208BB88 ; =0x00000404\n    ldrsh r2, [r3, r2]\n    ldr r0, [r1, r0]\n    mov r1, #6\n    ldrsh r1, [r3, r1]\n    bl Sprite_SetPositionXY\n    add sp, #8\n    pop {r4}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    _0208BB88: .word 0x00000404"
    );
    #endif
}

void sub_0208BB8C(void) {
    /* Original at 0x0208BB8C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r0, r1, #0\n    mov r1, #1\n    bl GetMoveAttr\n    add r4, r0, #0\n    bl sub_02077830\n    add r6, r0, #0\n    add r0, r4, #0\n    bl sub_02077800\n    add r3, r0, #0\n    mov r0, #1\n    mov r1, #0xff\n    str r0, [sp]\n    mov r0, #0xa\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl SpriteSystem_ReplaceCharResObj\n    add r0, r4, #0\n    bl sub_02077818\n    add r1, r0, #0\n    ldr r0, _0208BBD8 ; =0x0000044C\n    add r1, r1, #3\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetPaletteOverride\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0208BBD8: .word 0x0000044C"
    );
    #endif
}

void sub_0208BBDC(void) {
    /* Original at 0x0208BBDC */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0208BC70 ; =0x000007BD\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x1c\n    lsr r2, r0, #0x1c\n    cmp r2, #4\n    beq _0208BBF2\n    cmp r2, #5\n    beq _0208BC2E\n    b _0208BC52\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldrb r0, [r0, #0x12]\n    cmp r0, #2\n    ldr r0, _0208BC74 ; =0x00000428\n    bne _0208BC12\n    lsl r2, r2, #5\n    add r2, #0x28\n    lsl r2, r2, #0x10\n    ldr r0, [r4, r0]\n    mov r1, #0x44\n    asr r2, r2, #0x10\n    bl Sprite_SetPositionXY\n    b _0208BC22\n    lsl r2, r2, #5\n    add r2, #0x18\n    lsl r2, r2, #0x10\n    ldr r0, [r4, r0]\n    mov r1, #0x44\n    asr r2, r2, #0x10\n    bl Sprite_SetPositionXY\n    ldr r0, _0208BC74 ; =0x00000428\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, pc}\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldrb r0, [r0, #0x12]\n    cmp r0, #2\n    bne _0208BC6E\n    ldr r0, _0208BC74 ; =0x00000428\n    mov r1, #0xdc\n    ldr r0, [r4, r0]\n    mov r2, #0xb0\n    bl Sprite_SetPositionXY\n    ldr r0, _0208BC74 ; =0x00000428\n    mov r1, #3\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, pc}\n    ldr r0, _0208BC74 ; =0x00000428\n    lsl r2, r2, #5\n    add r2, #0x18\n    lsl r2, r2, #0x10\n    ldr r0, [r4, r0]\n    mov r1, #0x44\n    asr r2, r2, #0x10\n    bl Sprite_SetPositionXY\n    ldr r0, _0208BC74 ; =0x00000428\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, pc}\n    _0208BC70: .word 0x000007BD\n    _0208BC74: .word 0x00000428"
    );
    #endif
}

void sub_0208BC78(void) {
    /* Original at 0x0208BC78 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, _0208BCAC ; =0x00000428\n    add r1, sp, #0\n    ldr r0, [r4, r0]\n    add r1, #2\n    add r2, sp, #0\n    bl Sprite_GetPositionXY\n    ldr r0, _0208BCB0 ; =0x0000042C\n    add r3, sp, #0\n    mov r1, #2\n    mov r2, #0\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    ldr r0, [r4, r0]\n    bl Sprite_SetPositionXY\n    ldr r0, _0208BCB0 ; =0x0000042C\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    add sp, #4\n    pop {r3, r4, pc}\n    _0208BCAC: .word 0x00000428\n    _0208BCB0: .word 0x0000042C"
    );
    #endif
}

void sub_0208BCB4(void) {
    /* Original at 0x0208BCB4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0208BCD0 ; =0x0000042C\n    mov r1, #0x44\n    ldr r0, [r4, r0]\n    mov r2, #0xa8\n    bl Sprite_SetPositionXY\n    ldr r0, _0208BCD0 ; =0x0000042C\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, pc}\n    _0208BCD0: .word 0x0000042C"
    );
    #endif
}

void sub_0208BCD4(void) {
    /* Original at 0x0208BCD4 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r2, #0x1f\n    lsl r2, r2, #6\n    mov r1, #0\n    strb r1, [r0, r2]\n    add r3, r2, #3\n    strb r1, [r0, r3]\n    add r3, r2, #2\n    strb r1, [r0, r3]\n    ldr r3, _0208BD30 ; =0x0000027A\n    ldrb r3, [r0, r3]\n    cmp r3, #0\n    bne _0208BCF4\n    add r2, r2, #1\n    strb r1, [r0, r2]\n    b _0208BD0A\n    cmp r3, #0xff\n    bne _0208BD00\n    mov r3, #0xc\n    add r1, r2, #1\n    strb r3, [r0, r1]\n    b _0208BD0A\n    mov r1, #0xc\n    mul r1, r3\n    asr r3, r1, #8\n    add r1, r2, #1\n    strb r3, [r0, r1]\n    ldr r7, _0208BD34 ; =0x00000404\n    add r5, r0, #0\n    mov r4, #0x1d\n    add r5, #0x74\n    add r6, r7, #0\n    ldr r0, [r5, r7]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, r6]\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x28\n    bls _0208BD14\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0208BD30: .word 0x0000027A\n    _0208BD34: .word 0x00000404"
    );
    #endif
}

void sub_0208BD38(void) {
    /* Original at 0x0208BD38 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    mov r7, #1\n    mov r0, #0x9f\n    lsl r0, r0, #2\n    ldrh r1, [r6, r0]\n    add r0, r7, #0\n    lsl r0, r4\n    tst r0, r1\n    beq _0208BD5E\n    mov r0, #0x46\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    bl Sprite_SetAnimCtrlSeq\n    b _0208BD6A\n    mov r0, #0x46\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetAnimCtrlSeq\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blo _0208BD42\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldr r0, [r6, r0]\n    lsl r1, r0, #2\n    lsr r1, r1, #0x1f\n    cmp r1, #1\n    bne _0208BD92\n    lsl r0, r0, #3\n    lsr r0, r0, #0x1f\n    bne _0208BD92\n    ldr r0, _0208BDC0 ; =0x000004D4\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl thunk_Sprite_SetDrawFlag\n    b _0208BD9C\n    ldr r0, _0208BDC0 ; =0x000004D4\n    mov r1, #0\n    ldr r0, [r6, r0]\n    bl thunk_Sprite_SetDrawFlag\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldr r0, [r6, r0]\n    lsr r0, r0, #0x1e\n    cmp r0, #2\n    ldr r0, _0208BDC4 ; =0x000004D8\n    bne _0208BDB4\n    ldr r0, [r6, r0]\n    mov r1, #1\n    bl thunk_Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl thunk_Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0208BDC0: .word 0x000004D4\n    _0208BDC4: .word 0x000004D8"
    );
    #endif
}

void sub_0208BDC8(void) {
    /* Original at 0x0208BDC8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r7, _0208BDF8 ; =0x000007BE\n    add r5, r0, #0\n    mov r4, #0\n    mov r6, #1\n    add r0, r6, #0\n    ldrb r1, [r5, r7]\n    lsl r0, r4\n    tst r0, r1\n    beq _0208BDEA\n    lsl r0, r4, #2\n    add r1, r5, r0\n    ldr r0, _0208BDFC ; =0x000004A8\n    ldr r0, [r1, r0]\n    add r1, r6, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #5\n    blo _0208BDD2\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0208BDF8: .word 0x000007BE\n    _0208BDFC: .word 0x000004A8"
    );
    #endif
}

void sub_0208BE00(void) {
    /* Original at 0x0208BE00 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    lsl r0, r2, #2\n    add r4, r1, #0\n    add r1, r5, r0\n    ldr r0, _0208BE6C ; =0x00000404\n    ldr r0, [r1, r0]\n    bl Sprite_GetImageProxy\n    mov r1, #2\n    bl NNS_G2dGetImageLocation\n    add r6, r0, #0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldrb r0, [r0, #0x11]\n    cmp r0, #2\n    bne _0208BE30\n    add r0, r4, #0\n    bl Boxmon_GetIconNaix\n    b _0208BE36\n    add r0, r4, #0\n    bl Pokemon_GetIconNaix\n    add r1, r0, #0\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x14\n    mov r2, #0\n    add r3, sp, #4\n    bl GfGfxLoader_GetCharData\n    add r4, r0, #0\n    ldr r0, [sp, #4]\n    mov r1, #2\n    ldr r0, [r0, #0x14]\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    ldr r0, [sp, #4]\n    mov r2, #2\n    ldr r0, [r0, #0x14]\n    add r1, r6, #0\n    lsl r2, r2, #8\n    bl GXS_LoadOBJ\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0208BE6C: .word 0x00000404"
    );
    #endif
}

void sub_0208BE70(void) {
    /* Original at 0x0208BE70 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0208A520\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0x13\n    bl sub_0208BE00\n    mov r2, #0x8f\n    lsl r2, r2, #2\n    add r1, r2, #0\n    ldrh r0, [r4, r2]\n    add r2, #0x44\n    add r1, #0x42\n    ldr r2, [r4, r2]\n    ldrh r1, [r4, r1]\n    lsl r2, r2, #3\n    lsr r2, r2, #0x1f\n    bl GetMonIconPaletteEx\n    add r1, r0, #0\n    mov r0, #0x45\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    add r1, #0xc\n    bl thunk_Sprite_SetPaletteOverride\n    mov r1, #0x8f\n    lsl r1, r1, #2\n    ldrh r0, [r4, r1]\n    add r1, #0x42\n    ldrh r1, [r4, r1]\n    mov r2, #0x1c\n    bl GetMonBaseStat_HandleAlternateForm\n    add r2, r0, #0\n    mov r0, #0x45\n    lsl r0, r0, #4\n    mov r1, #1\n    ldr r0, [r4, r0]\n    eor r1, r2\n    bl Sprite_SetFlipMode\n    pop {r4, pc}"
    );
    #endif
}

void sub_0208BECC(void) {
    /* Original at 0x0208BECC */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    bl sub_0208A520\n    add r7, r0, #0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r1, [r6, r0]\n    ldrb r0, [r1, #0x11]\n    cmp r0, #0\n    beq _0208BEEC\n    cmp r0, #1\n    beq _0208BEF8\n    cmp r0, #2\n    beq _0208BEF2\n    b _0208BEFC\n    mov r0, #1\n    str r0, [sp]\n    b _0208BEFC\n    mov r0, #0\n    str r0, [sp]\n    b _0208BEFC\n    ldrb r0, [r1, #0x13]\n    str r0, [sp]\n    ldr r0, [sp]\n    mov r4, #0\n    cmp r0, #0\n    ble _0208BF7A\n    add r5, r6, #0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r1, [r6, r0]\n    ldrb r0, [r1, #0x11]\n    cmp r0, #0\n    beq _0208BF1C\n    cmp r0, #1\n    beq _0208BF4A\n    cmp r0, #2\n    beq _0208BF36\n    b _0208BF64\n    add r0, r6, #0\n    bl sub_0208A520\n    add r7, r0, #0\n    bl Pokemon_GetIconPalette\n    add r1, r0, #0\n    ldr r0, _0208BF98 ; =0x00000528\n    add r1, #0xc\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetPaletteOverride\n    b _0208BF64\n    add r0, r7, #0\n    bl Boxmon_GetIconPalette\n    add r1, r0, #0\n    ldr r0, _0208BF98 ; =0x00000528\n    add r1, #0xc\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetPaletteOverride\n    b _0208BF64\n    ldr r0, [r1]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    add r7, r0, #0\n    bl Pokemon_GetIconPalette\n    add r1, r0, #0\n    ldr r0, _0208BF98 ; =0x00000528\n    add r1, #0xc\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetPaletteOverride\n    add r2, r4, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, #0x49\n    bl sub_0208BE00\n    ldr r0, [sp]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r0\n    blt _0208BF06\n    cmp r4, #6\n    bge _0208BF96\n    lsl r0, r4, #2\n    add r5, r6, r0\n    ldr r6, _0208BF98 ; =0x00000528\n    mov r7, #0\n    ldr r0, [r5, r6]\n    add r1, r7, #0\n    bl thunk_Sprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _0208BF86\n    pop {r3, r4, r5, r6, r7, pc}\n    _0208BF98: .word 0x00000528"
    );
    #endif
}

void sub_0208BF9C(void) {
    /* Original at 0x0208BF9C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldrb r0, [r0, #0x11]\n    cmp r0, #2\n    bne _0208BFC4\n    ldr r0, _0208BFC8 ; =0x00000528\n    mov r1, #0xd7\n    ldr r0, [r4, r0]\n    mov r2, #0x50\n    bl Sprite_SetPositionXY\n    ldr r0, _0208BFCC ; =0x0000052C\n    mov r1, #0xd7\n    ldr r0, [r4, r0]\n    mov r2, #0x50\n    bl Sprite_SetPositionXY\n    pop {r4, pc}\n    nop\n    _0208BFC8: .word 0x00000528\n    _0208BFCC: .word 0x0000052C"
    );
    #endif
}

void sub_0208BFD0(void) {
    /* Original at 0x0208BFD0 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x8b\n    add r5, r0, #0\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    ldrb r1, [r1, #0x11]\n    cmp r1, #2\n    bne _0208C058\n    bl sub_0208A520\n    add r4, r0, #0\n    ldr r0, _0208C05C ; =0x000007D4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    ldr r0, _0208C060 ; =0x00000528\n    bne _0208C020\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl thunk_Sprite_SetDrawFlag\n    ldr r0, _0208C064 ; =0x0000052C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetDrawFlag\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x49\n    bl sub_0208BE00\n    add r0, r4, #0\n    bl Boxmon_GetIconPalette\n    add r1, r0, #0\n    ldr r0, _0208C060 ; =0x00000528\n    add r1, #0xc\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetPaletteOverride\n    b _0208C04E\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl thunk_Sprite_SetDrawFlag\n    ldr r0, _0208C064 ; =0x0000052C\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetDrawFlag\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x4a\n    bl sub_0208BE00\n    add r0, r4, #0\n    bl Boxmon_GetIconPalette\n    add r1, r0, #0\n    ldr r0, _0208C064 ; =0x0000052C\n    add r1, #0xc\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetPaletteOverride\n    ldr r1, _0208C05C ; =0x000007D4\n    mov r0, #1\n    ldr r2, [r5, r1]\n    eor r0, r2\n    str r0, [r5, r1]\n    pop {r3, r4, r5, pc}\n    nop\n    _0208C05C: .word 0x000007D4\n    _0208C060: .word 0x00000528\n    _0208C064: .word 0x0000052C"
    );
    #endif
}

void sub_0208C068(void) {
    /* Original at 0x0208C068 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0208C0A0 ; =0x000007BC\n    ldrsb r0, [r4, r0]\n    cmp r0, #1\n    bne _0208C084\n    mov r0, #0x45\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0xa0\n    mov r2, #0x10\n    bl Sprite_SetPositionXY\n    b _0208C092\n    mov r0, #0x45\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x20\n    mov r2, #0x44\n    bl Sprite_SetPositionXY\n    mov r0, #0x45\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl thunk_Sprite_SetDrawFlag\n    pop {r4, pc}\n    _0208C0A0: .word 0x000007BC"
    );
    #endif
}

void sub_0208C0A4(void) {
    /* Original at 0x0208C0A4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    cmp r4, r1\n    ble _0208C0CA\n    add r0, #0x2c\n    sub r1, r4, r1\n    mul r1, r0\n    lsl r0, r1, #0x10\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    bl _u32_div_f\n    lsr r0, r0, #0x10\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    sub r0, r4, r0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    pop {r4, pc}\n    add r0, #0x2c\n    sub r1, r1, r4\n    mul r1, r0\n    lsl r0, r1, #0x10\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    bl _u32_div_f\n    lsr r0, r0, #0x10\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add r0, r4, r0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void sub_0208C0E8(void) {
    /* Original at 0x0208C0E8 */
    /* Requires manual decompilation - 117 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _0208C1EC ; =0x00000275\n    mov r1, #0x58\n    ldrb r0, [r4, r0]\n    add r2, r1, #0\n    bl sub_0208C0A4\n    add r5, r0, #0\n    ldr r0, _0208C1EC ; =0x00000275\n    mov r1, #0x31\n    ldrb r0, [r4, r0]\n    mov r2, #0x49\n    bl sub_0208C0A4\n    add r2, r0, #0\n    mov r0, #0x13\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    add r1, r5, #0\n    bl Sprite_SetPositionXY\n    ldr r0, _0208C1F0 ; =0x00000276\n    mov r1, #0x6e\n    ldrb r0, [r4, r0]\n    mov r2, #0x58\n    bl sub_0208C0A4\n    add r5, r0, #0\n    ldr r0, _0208C1F0 ; =0x00000276\n    mov r1, #0x41\n    ldrb r0, [r4, r0]\n    mov r2, #0x49\n    bl sub_0208C0A4\n    add r2, r0, #0\n    ldr r0, _0208C1F4 ; =0x000004C4\n    add r1, r5, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetPositionXY\n    ldr r0, _0208C1F8 ; =0x00000277\n    mov r1, #0x67\n    ldrb r0, [r4, r0]\n    mov r2, #0x58\n    bl sub_0208C0A4\n    add r5, r0, #0\n    ldr r0, _0208C1F8 ; =0x00000277\n    mov r1, #0x5c\n    ldrb r0, [r4, r0]\n    mov r2, #0x49\n    bl sub_0208C0A4\n    add r2, r0, #0\n    ldr r0, _0208C1FC ; =0x000004C8\n    add r1, r5, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetPositionXY\n    mov r0, #0x9e\n    lsl r0, r0, #2\n    ldrb r0, [r4, r0]\n    mov r1, #0x48\n    mov r2, #0x57\n    bl sub_0208C0A4\n    add r5, r0, #0\n    mov r0, #0x9e\n    lsl r0, r0, #2\n    ldrb r0, [r4, r0]\n    mov r1, #0x5c\n    mov r2, #0x49\n    bl sub_0208C0A4\n    add r2, r0, #0\n    ldr r0, _0208C200 ; =0x000004CC\n    add r1, r5, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetPositionXY\n    ldr r0, _0208C204 ; =0x00000279\n    mov r1, #0x41\n    ldrb r0, [r4, r0]\n    mov r2, #0x57\n    bl sub_0208C0A4\n    add r5, r0, #0\n    ldr r0, _0208C204 ; =0x00000279\n    mov r1, #0x41\n    ldrb r0, [r4, r0]\n    mov r2, #0x49\n    bl sub_0208C0A4\n    add r2, r0, #0\n    mov r0, #0x4d\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    add r1, r5, #0\n    bl Sprite_SetPositionXY\n    mov r0, #0x13\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208C1F4 ; =0x000004C4\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208C1FC ; =0x000004C8\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208C200 ; =0x000004CC\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0x4d\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    nop\n    _0208C1EC: .word 0x00000275\n    _0208C1F0: .word 0x00000276\n    _0208C1F4: .word 0x000004C4\n    _0208C1F8: .word 0x00000277\n    _0208C1FC: .word 0x000004C8\n    _0208C200: .word 0x000004CC\n    _0208C204: .word 0x00000279"
    );
    #endif
}

void sub_0208C208(void) {
    /* Original at 0x0208C208 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x13\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208C244 ; =0x000004C4\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208C248 ; =0x000004C8\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208C24C ; =0x000004CC\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0x4d\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    pop {r4, pc}\n    _0208C244: .word 0x000004C4\n    _0208C248: .word 0x000004C8\n    _0208C24C: .word 0x000004CC"
    );
    #endif
}

void sub_0208C250(void) {
    /* Original at 0x0208C250 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #1\n    add r4, r2, #0\n    bl GetRibbonAttr\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0xff\n    add r0, #0x19\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x27\n    bl SpriteSystem_ReplaceCharResObj\n    add r0, r6, #0\n    mov r1, #2\n    bl GetRibbonAttr\n    add r4, #0x36\n    add r2, r0, #0\n    lsl r0, r4, #2\n    add r1, r5, r0\n    ldr r0, _0208C29C ; =0x00000404\n    ldr r0, [r1, r0]\n    add r1, r2, #7\n    bl thunk_Sprite_SetPaletteOverride\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0208C29C: .word 0x00000404"
    );
    #endif
}

void sub_0208C2A0(void) {
    /* Original at 0x0208C2A0 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r6, _0208C30C ; =0x00000404\n    add r5, r0, #0\n    mov r4, #0x36\n    mov r7, #0\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, r6]\n    add r1, r7, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x42\n    bls _0208C2AA\n    ldr r0, _0208C310 ; =0x000007BC\n    ldrsb r0, [r5, r0]\n    cmp r0, #2\n    bne _0208C30A\n    ldr r7, _0208C314 ; =0x000004DC\n    ldr r6, _0208C318 ; =0x000007C6\n    mov r4, #0\n    ldrb r0, [r5, r6]\n    cmp r4, r0\n    bge _0208C2F6\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, r7]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl sub_0208ACDC\n    lsl r2, r4, #0x18\n    add r1, r0, #0\n    add r0, r5, #0\n    lsr r2, r2, #0x18\n    bl sub_0208C250\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #9\n    blo _0208C2CE\n    ldr r0, _0208C31C ; =0x0000050C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, r4, r5, r6, r7, pc}\n    _0208C30C: .word 0x00000404\n    _0208C310: .word 0x000007BC\n    _0208C314: .word 0x000004DC\n    _0208C318: .word 0x000007C6\n    _0208C31C: .word 0x0000050C"
    );
    #endif
}

void sub_0208C320(void) {
    /* Original at 0x0208C320 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r7, _0208C378 ; =0x000007C5\n    add r5, r0, #0\n    mov r4, #0\n    add r6, r7, #1\n    ldrb r1, [r5, r7]\n    lsl r0, r1, #3\n    add r0, r1, r0\n    add r1, r4, r0\n    ldrb r0, [r5, r6]\n    cmp r1, r0\n    bge _0208C35E\n    lsl r0, r4, #2\n    add r1, r5, r0\n    ldr r0, _0208C37C ; =0x000004DC\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl sub_0208ACDC\n    lsl r2, r4, #0x18\n    add r1, r0, #0\n    add r0, r5, #0\n    lsr r2, r2, #0x18\n    bl sub_0208C250\n    b _0208C36C\n    lsl r0, r4, #2\n    add r1, r5, r0\n    ldr r0, _0208C37C ; =0x000004DC\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #9\n    blo _0208C32A\n    pop {r3, r4, r5, r6, r7, pc}\n    _0208C378: .word 0x000007C5\n    _0208C37C: .word 0x000004DC"
    );
    #endif
}

void sub_0208C380(void) {
    /* Original at 0x0208C380 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0208C3BC ; =0x000007C4\n    mov r1, #3\n    ldrb r6, [r5, r0]\n    add r0, r6, #0\n    bl _s32_div_f\n    add r4, r1, #0\n    add r0, r6, #0\n    mov r1, #3\n    bl _s32_div_f\n    add r2, r0, #0\n    mov r3, #0x28\n    mov r0, #5\n    lsl r1, r4, #5\n    mul r3, r2\n    lsl r0, r0, #8\n    add r1, #0x20\n    add r3, #0x18\n    lsl r1, r1, #0x10\n    lsl r2, r3, #0x10\n    ldr r0, [r5, r0]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl Sprite_SetPositionXY\n    pop {r4, r5, r6, pc}\n    nop\n    _0208C3BC: .word 0x000007C4"
    );
    #endif
}

void sub_0208C3C0(void) {
    /* Original at 0x0208C3C0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0208C3E0 ; =0x0000050C\n    ldr r0, [r4, r0]\n    bl Sprite_GetDrawFlag\n    cmp r0, #1\n    bne _0208C3DC\n    ldr r0, _0208C3E0 ; =0x0000050C\n    mov r1, #1\n    ldr r0, [r4, r0]\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    pop {r4, pc}\n    nop\n    _0208C3E0: .word 0x0000050C"
    );
    #endif
}
