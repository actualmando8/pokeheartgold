/* Decompiled from asm/unk_02087284.s */
#include "global.h"

void sub_02087284(void) {
    /* Original at 0x02087284 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r4, lr}\n    ldr r4, [sp, #0xc]\n    mov r1, #0x42\n    add r0, r4, #0\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    ldr r1, [sp, #8]\n    mov r3, #0\n    str r1, [r0, #0x10]\n    ldr r1, [sp, #0x10]\n    str r4, [r0, #0x14]\n    str r1, [r0, #0x18]\n    ldr r1, [sp, #0x14]\n    mov r2, #0xf\n    str r1, [r0, #0x1c]\n    ldr r1, [sp, #0x18]\n    str r1, [r0, #0x20]\n    ldr r1, [sp, #0x1c]\n    str r1, [r0, #4]\n    ldr r1, [sp, #0x20]\n    str r1, [r0, #8]\n    ldr r1, [sp, #0x24]\n    str r1, [r0, #0xc]\n    add r1, r0, #0\n    add r1, #0xe4\n    str r3, [r1]\n    add r1, r0, #0\n    add r1, #0xfc\n    str r2, [r1]\n    add r1, r2, #0\n    add r1, #0xf1\n    str r2, [r0, r1]\n    add r1, r0, #0\n    add r1, #0xf4\n    str r3, [r1]\n    add r1, r0, #0\n    add r1, #0xf0\n    str r3, [r1]\n    pop {r4}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void sub_020872DC(void) {
    /* Original at 0x020872DC */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    mov r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    bl _fflt\n    add r1, r4, #0\n    bl _fsub\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl _fflt\n    add r1, r6, #0\n    bl _fsub\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #8]\n    add r1, r0, #0\n    bl _fmul\n    add r4, r0, #0\n    ldr r0, [sp, #0xc]\n    add r1, r0, #0\n    bl _fmul\n    add r1, r0, #0\n    add r0, r4, #0\n    bl _fadd\n    mov r1, #0\n    add r4, r0, #0\n    bl _fgr\n    ldr r0, _020873D0 ; =0x45800000\n    bls _02087344\n    add r1, r4, #0\n    bl _fmul\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02087352\n    add r1, r4, #0\n    bl _fmul\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    bl FX_Sqrt\n    bl _fflt\n    ldr r1, _020873D0 ; =0x45800000\n    bl _fdiv\n    ldr r1, [sp, #0x30]\n    add r4, r0, #0\n    bl _fls\n    blo _0208738A\n    add r1, sp, #0x18\n    mov r0, #0x1c\n    ldrsh r0, [r1, r0]\n    bl _fflt\n    add r1, r4, #0\n    bl _fgr\n    bhi _0208738A\n    mov r0, #0\n    add r1, r4, #0\n    bl _feq\n    bne _02087390\n    add sp, #0x18\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0x30]\n    bl _fmul\n    add r1, r4, #0\n    bl _fdiv\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0x30]\n    bl _fmul\n    add r1, r4, #0\n    bl _fdiv\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp]\n    bl _fadd\n    ldr r1, [sp, #0x28]\n    str r0, [r1]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #4]\n    bl _fadd\n    ldr r1, [sp, #0x2c]\n    str r0, [r1]\n    mov r0, #1\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    nop\n    _020873D0: .word 0x45800000"
    );
    #endif
}

void sub_020873D4(void) {
    /* Original at 0x020873D4 */
    /* Requires manual decompilation - 266 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x50\n    add r6, r1, #0\n    add r0, r6, #0\n    add r0, #0xf0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _020873E6\n    b _02087632\n    ldr r0, [r6, #0x10]\n    mov r4, #0\n    str r4, [sp, #0x1c]\n    cmp r0, #0\n    bgt _020873F2\n    b _02087632\n    add r0, r6, #0\n    mov r7, #0x3f\n    str r0, [sp, #0x30]\n    add r0, #0xec\n    add r5, r6, #0\n    lsl r7, r7, #0x18\n    str r0, [sp, #0x30]\n    cmp r4, #0\n    beq _02087410\n    mov r0, #0x18\n    ldrsh r0, [r5, r0]\n    strh r0, [r5, #0x28]\n    mov r0, #0x1a\n    ldrsh r0, [r5, r0]\n    strh r0, [r5, #0x2a]\n    ldr r0, [r5, #0x24]\n    ldr r3, [r6, #0x20]\n    add r1, sp, #0x4c\n    add r2, sp, #0x48\n    bl ManagedSprite_GetPositionFxXYWithSubscreenOffset\n    ldr r0, [sp, #0x4c]\n    bl _fflt\n    ldr r1, _02087638 ; =0x45800000\n    bl _fdiv\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x48]\n    bl _fflt\n    ldr r1, _02087638 ; =0x45800000\n    bl _fdiv\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x1c]\n    sub r0, r4, r0\n    bl _fflt\n    add r1, r0, #0\n    add r0, r7, #0\n    bl _fmul\n    add r1, r0, #0\n    mov r0, #0x41\n    lsl r0, r0, #0x18\n    bl _fsub\n    mov r1, #1\n    lsl r1, r1, #0x1e\n    bl _fdiv\n    add r1, sp, #0x44\n    str r1, [sp]\n    add r1, sp, #0x40\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    mov r1, #0x2a\n    ldrsh r0, [r5, r0]\n    ldrsh r1, [r5, r1]\n    ldr r2, [sp, #0x20]\n    ldr r3, [sp, #0x24]\n    bl sub_020872DC\n    cmp r0, #0\n    beq _020874EE\n    ldr r0, [r5, #0x2c]\n    cmp r0, #0\n    bne _020874EE\n    ldr r0, [sp, #0x40]\n    mov r1, #0\n    bl _fgr\n    ldr r0, _02087638 ; =0x45800000\n    bls _020874A0\n    ldr r1, [sp, #0x40]\n    bl _fmul\n    add r1, r0, #0\n    add r0, r7, #0\n    bl _fadd\n    str r0, [sp, #0x14]\n    b _020874AE\n    ldr r1, [sp, #0x40]\n    bl _fmul\n    add r1, r7, #0\n    bl _fsub\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x44]\n    mov r1, #0\n    bl _fgr\n    ldr r0, _02087638 ; =0x45800000\n    bls _020874CA\n    ldr r1, [sp, #0x44]\n    bl _fmul\n    add r1, r0, #0\n    add r0, r7, #0\n    bl _fadd\n    b _020874D6\n    ldr r1, [sp, #0x44]\n    bl _fmul\n    add r1, r7, #0\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x14]\n    bl _ffix\n    add r2, r0, #0\n    ldr r0, [r5, #0x24]\n    ldr r1, [sp, #0x28]\n    bl ManagedSprite_AddSpritePrecisePositionXY\n    b _02087626\n    ldr r0, [r5, #0x2c]\n    cmp r0, #0\n    beq _020874FA\n    cmp r0, #1\n    beq _020875CA\n    b _02087620\n    add r1, sp, #0x3c\n    ldr r0, [r5, #0x24]\n    ldr r3, [r6, #0x20]\n    add r1, #2\n    add r2, sp, #0x3c\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    add r0, r6, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    str r0, [sp, #0x18]\n    cmp r0, #0xff\n    bne _0208758E\n    add r0, r6, #0\n    add r0, #0xe8\n    str r4, [r0]\n    mov r0, #0x28\n    add r2, sp, #0x3c\n    mov r1, #2\n    ldrsh r0, [r6, r0]\n    ldrsh r1, [r2, r1]\n    sub r0, r0, r1\n    cmp r0, #0\n    ble _0208753C\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    add r0, r7, #0\n    bl _fadd\n    str r0, [sp, #0x10]\n    b _0208754A\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r7, #0\n    bl _fsub\n    str r0, [sp, #0x10]\n    mov r0, #0x2a\n    add r2, sp, #0x3c\n    mov r1, #0\n    ldrsh r0, [r6, r0]\n    ldrsh r1, [r2, r1]\n    sub r0, r0, r1\n    cmp r0, #0\n    ble _0208756A\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    add r0, r7, #0\n    bl _fadd\n    b _02087576\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r7, #0\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x10]\n    bl _ffix\n    add r1, r0, #0\n    ldr r0, [sp, #0x2c]\n    bl FX_Atan2Idx\n    str r0, [r5, #0x30]\n    b _020875AC\n    mov r0, #0x2d\n    ldr r1, [r6, #0x10]\n    lsl r0, r0, #4\n    bl _s32_div_f\n    ldr r1, [sp, #0x18]\n    add r2, r6, #0\n    lsl r1, r1, #4\n    add r2, #0xec\n    add r1, r6, r1\n    ldr r2, [r2]\n    ldr r1, [r1, #0x30]\n    mul r2, r0\n    sub r0, r1, r2\n    str r0, [r5, #0x30]\n    mov r1, #0x2d\n    ldr r0, [r5, #0x30]\n    lsl r1, r1, #4\n    bl _s32_div_f\n    ldr r0, [sp, #0x30]\n    str r1, [r5, #0x30]\n    ldr r0, [r0]\n    add r1, r0, #1\n    ldr r0, [sp, #0x30]\n    str r1, [r0]\n    ldr r0, [r5, #0x2c]\n    add r0, r0, #1\n    str r0, [r5, #0x2c]\n    b _02087620\n    ldr r0, [r5, #0x30]\n    mov r1, #0x2d\n    add r0, r0, #4\n    lsl r1, r1, #4\n    str r0, [r5, #0x30]\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x10\n    str r1, [r5, #0x30]\n    bl GF_SinDeg\n    mov r1, #0x28\n    ldrsh r1, [r6, r1]\n    lsl r1, r1, #0xc\n    str r1, [sp, #0x34]\n    add r1, r6, #0\n    add r1, #0xfc\n    ldr r1, [r1]\n    mul r0, r1\n    str r0, [sp, #0x38]\n    ldr r0, [r5, #0x30]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_CosDeg\n    mov r1, #0x2a\n    ldrsh r1, [r6, r1]\n    ldr r2, [sp, #0x34]\n    lsl r3, r1, #0xc\n    mov r1, #1\n    lsl r1, r1, #8\n    ldr r1, [r6, r1]\n    mul r0, r1\n    ldr r1, [sp, #0x38]\n    mov ip, r0\n    add r1, r2, r1\n    mov r2, ip\n    add r2, r3, r2\n    ldr r0, [r5, #0x24]\n    ldr r3, [r6, #0x20]\n    bl ManagedSprite_SetPositionFxXYWithSubscreenOffset\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #1\n    str r0, [sp, #0x1c]\n    ldr r0, [r6, #0x10]\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, r0\n    bge _02087632\n    b _02087400\n    add sp, #0x50\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02087638: .word 0x45800000"
    );
    #endif
}

void sub_0208763C(void) {
    /* Original at 0x0208763C */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r6, r1, #0\n    ldr r1, [r0, #4]\n    ldr r5, [r0, #8]\n    str r1, [sp, #0x18]\n    ldr r1, _020876A4 ; =0x000056CF\n    ldr r7, [r0, #0xc]\n    ldr r4, [r0]\n    add r0, r5, #0\n    bl SpriteManager_UnloadPlttObjById\n    ldr r1, _020876A8 ; =0x000056D0\n    add r0, r5, #0\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _020876AC ; =_02102814\n    lsl r1, r6, #2\n    ldr r6, [r0, r1]\n    str r4, [sp]\n    str r6, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, _020876A4 ; =0x000056CF\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    mov r1, #2\n    add r3, r5, #0\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    str r4, [sp]\n    str r6, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _020876A8 ; =0x000056D0\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    mov r1, #3\n    add r3, r5, #0\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _020876A4: .word 0x000056CF\n    _020876A8: .word 0x000056D0\n    _020876AC: .word _02102814"
    );
    #endif
}

void sub_020876B0(void) {
    /* Original at 0x020876B0 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r2, r1, #0\n    ldr r3, [r0, #0x18]\n    ldr r1, _020877AC ; =0x000056CE\n    ldr r7, [r0, #4]\n    add r5, r3, r1\n    ldr r6, [r0, #8]\n    ldr r1, [r0, #0xc]\n    ldr r4, [r0]\n    cmp r3, #1\n    ldr r0, [r0, #0x1c]\n    bne _02087726\n    cmp r0, #0\n    str r4, [sp]\n    bne _020876F2\n    ldr r0, _020877B0 ; =_02102814\n    lsl r2, r2, #2\n    ldr r0, [r0, r2]\n    add r2, r7, #0\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    add r0, r1, #0\n    mov r1, #2\n    add r3, r6, #0\n    str r5, [sp, #0x14]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    b _0208770E\n    mov r0, #0x60\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    add r0, r1, #0\n    mov r1, #2\n    add r2, r7, #0\n    add r3, r6, #0\n    str r5, [sp, #0x14]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    mov r3, #0x5f\n    str r5, [sp, #8]\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    b _02087784\n    cmp r0, #0\n    str r4, [sp]\n    bne _02087750\n    ldr r0, _020877B0 ; =_02102814\n    lsl r2, r2, #2\n    ldr r0, [r0, r2]\n    add r2, r7, #0\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    add r0, r1, #0\n    mov r1, #3\n    add r3, r6, #0\n    str r5, [sp, #0x14]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    b _0208776E\n    mov r0, #0x60\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    add r0, r1, #0\n    mov r1, #3\n    add r2, r7, #0\n    add r3, r6, #0\n    str r5, [sp, #0x14]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    mov r3, #0x5f\n    str r5, [sp, #8]\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    mov r3, #0x5d\n    str r5, [sp, #4]\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    mov r3, #0x5e\n    str r5, [sp, #4]\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _020877AC: .word 0x000056CE\n    _020877B0: .word _02102814"
    );
    #endif
}

void sub_020877B4(void) {
    /* Original at 0x020877B4 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    ldr r7, [r5, #8]\n    str r0, [sp]\n    mov r1, #0x80\n    add r0, sp, #4\n    strh r1, [r0]\n    mov r1, #0x60\n    strh r1, [r0, #2]\n    mov r6, #0\n    strh r6, [r0, #4]\n    strh r6, [r0, #6]\n    str r6, [sp, #0xc]\n    ldr r0, [r5, #0x18]\n    str r0, [sp, #0x14]\n    str r6, [sp, #0x30]\n    str r6, [sp, #0x34]\n    str r6, [sp, #0x10]\n    ldr r1, [r5, #0x18]\n    ldr r0, _0208782C ; =0x000056CE\n    add r1, r1, r0\n    str r1, [sp, #0x18]\n    ldr r1, [r5, #0x18]\n    add r1, r1, r0\n    str r1, [sp, #0x1c]\n    ldr r1, [r5, #0x18]\n    add r1, r1, r0\n    str r1, [sp, #0x20]\n    ldr r1, [r5, #0x18]\n    add r0, r1, r0\n    str r0, [sp, #0x24]\n    sub r0, r6, #1\n    str r0, [sp, #0x28]\n    str r0, [sp, #0x2c]\n    ldr r0, [r5, #0x10]\n    cmp r0, #0\n    ble _02087828\n    add r4, r5, #0\n    ldr r0, [sp]\n    add r1, r7, #0\n    add r2, sp, #4\n    bl SpriteSystem_NewSprite\n    str r0, [r4, #0x24]\n    bl ManagedSprite_TickFrame\n    ldr r0, [r4, #0x24]\n    mov r1, #0x80\n    mov r2, #0x60\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5, #0x10]\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, r0\n    blt _02087804\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    _0208782C: .word 0x000056CE"
    );
    #endif
}

void sub_02087830(void) {
    /* Original at 0x02087830 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    mov r6, #0\n    cmp r0, #0\n    ble _02087872\n    ldr r7, _02087874 ; =0x000056CE\n    add r4, r5, #0\n    ldr r2, [r5, #0x18]\n    ldr r1, _02087874 ; =0x000056CE\n    ldr r0, [r5, #8]\n    add r1, r2, r1\n    bl SpriteManager_UnloadCharObjById\n    ldr r2, [r5, #0x18]\n    ldr r1, _02087874 ; =0x000056CE\n    ldr r0, [r5, #8]\n    add r1, r2, r1\n    bl SpriteManager_UnloadCellObjById\n    ldr r1, [r5, #0x18]\n    ldr r0, [r5, #8]\n    add r1, r1, r7\n    bl SpriteManager_UnloadAnimObjById\n    ldr r0, [r4, #0x24]\n    bl Sprite_DeleteAndFreeResources\n    ldr r0, [r5, #0x10]\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, r0\n    blt _02087840\n    pop {r3, r4, r5, r6, r7, pc}\n    _02087874: .word 0x000056CE"
    );
    #endif
}

void sub_02087878(void) {
    /* Original at 0x02087878 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r5, #0x14]\n    mov r0, #0xbf\n    bl NARC_New\n    str r0, [r5]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_020876B0\n    add r0, r5, #0\n    bl sub_020877B4\n    mov r2, #1\n    ldr r0, _020878AC ; =sub_020873D4\n    add r1, r5, #0\n    lsl r2, r2, #0xc\n    bl SysTask_CreateOnVBlankQueue\n    add r5, #0xf4\n    str r0, [r5]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _020878AC: .word sub_020873D4"
    );
    #endif
}

void sub_020878B0(void) {
    /* add r0, #0xf0 */
    *(u32*)r0 = r1;
    r0 = 1;
}

void sub_020878B8(void) {
    /* Original at 0x020878B8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    strh r1, [r0, #0x28]\n    add r1, r0, #0\n    strh r2, [r0, #0x2a]\n    mov r2, #0xff\n    add r1, #0xe8\n    str r2, [r1]\n    add r1, r0, #0\n    mov r3, #0\n    add r1, #0xec\n    str r3, [r1]\n    ldr r1, [r0, #0x10]\n    cmp r1, #0\n    ble _020878E4\n    add r4, r0, #0\n    add r2, r3, #0\n    str r2, [r4, #0x2c]\n    ldr r1, [r0, #0x10]\n    add r3, r3, #1\n    add r4, #0x10\n    cmp r3, r1\n    blt _020878D8\n    mov r0, #1\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_020878EC(void) {
    /* Original at 0x020878EC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_02087930\n    cmp r0, #0\n    bne _02087900\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    strh r4, [r5, #0x28]\n    add r0, r5, #0\n    strh r6, [r5, #0x2a]\n    mov r1, #0xff\n    add r0, #0xe8\n    str r1, [r0]\n    add r0, r5, #0\n    mov r2, #0\n    add r0, #0xec\n    str r2, [r0]\n    ldr r0, [r5, #0x10]\n    cmp r0, #0\n    ble _0208792A\n    add r3, r5, #0\n    add r1, r2, #0\n    str r1, [r3, #0x2c]\n    ldr r0, [r5, #0x10]\n    add r2, r2, #1\n    add r3, #0x10\n    cmp r2, r0\n    blt _0208791E\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02087930(void) {
    /* Original at 0x02087930 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0x28\n    ldrsh r3, [r0, r3]\n    cmp r3, r1\n    bne _02087944\n    mov r1, #0x2a\n    ldrsh r0, [r0, r1]\n    cmp r0, r2\n    bne _02087944\n    mov r0, #0\n    bx lr\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void sub_02087948(void) {
    /* Original at 0x02087948 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    str r2, [sp]\n    mov r1, #0xff\n    add r0, #0xe8\n    str r1, [r0]\n    add r0, r5, #0\n    mov r7, #0\n    add r0, #0xec\n    str r7, [r0]\n    ldr r0, [r5, #0x10]\n    cmp r0, #0\n    ble _02087982\n    add r4, r5, #0\n    strh r6, [r4, #0x28]\n    ldr r0, [sp]\n    add r1, r6, #0\n    strh r0, [r4, #0x2a]\n    ldr r0, [r4, #0x24]\n    ldr r2, [sp]\n    ldr r3, [r5, #0x20]\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, [r5, #0x10]\n    add r7, r7, #1\n    add r4, #0x10\n    cmp r7, r0\n    blt _02087966\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02087988(void) {
    /* Original at 0x02087988 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    cmp r1, #0\n    beq _0208799C\n    cmp r1, #1\n    beq _020879B0\n    b _020879C6\n    mov r1, #0\n    bl sub_020878B0\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    add r4, #0xe4\n    add r0, r0, #1\n    str r0, [r4]\n    b _020879DA\n    add r0, #0xf4\n    ldr r0, [r0]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    add r4, #0xe4\n    add r0, r0, #1\n    str r0, [r4]\n    b _020879DA\n    bl sub_02087830\n    ldr r0, [r4]\n    bl NARC_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void sub_020879E0(void) {
    /* Original at 0x020879E0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #0x10]\n    add r7, r1, #0\n    mov r4, #0\n    cmp r0, #0\n    ble _02087A02\n    add r5, r6, #0\n    ldr r0, [r5, #0x24]\n    add r1, r7, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r6, #0x10]\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, r0\n    blt _020879F0\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02087A08(void) {
    /* Original at 0x02087A08 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    beq _02087A1E\n    cmp r2, #0\n    beq _02087A1E\n    add r3, r0, #0\n    add r3, #0xfc\n    str r1, [r3]\n    mov r1, #1\n    lsl r1, r1, #8\n    str r2, [r0, r1]\n    bx lr\n    add r1, r0, #0\n    mov r2, #0xf\n    add r1, #0xfc\n    str r2, [r1]\n    add r1, r2, #0\n    add r1, #0xf1\n    str r2, [r0, r1]\n    bx lr"
    );
    #endif
}

void sub_02087A30(void) {
    /* Original at 0x02087A30 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #0x10]\n    mov r4, #0\n    cmp r0, #0\n    ble _02087A52\n    add r5, r6, #0\n    mov r7, #1\n    ldr r0, [r5, #0x24]\n    add r1, r7, #0\n    bl ManagedSprite_SetAnim\n    ldr r0, [r6, #0x10]\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, r0\n    blt _02087A40\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02087A54(void) {
    /* Original at 0x02087A54 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #0x10]\n    mov r4, #0\n    cmp r0, #0\n    ble _02087A76\n    add r5, r6, #0\n    add r7, r4, #0\n    ldr r0, [r5, #0x24]\n    add r1, r7, #0\n    bl ManagedSprite_SetAnim\n    ldr r0, [r6, #0x10]\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, r0\n    blt _02087A64\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}
