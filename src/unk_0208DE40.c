/* Decompiled from asm/unk_0208DE40.s */
#include "global.h"

void sub_0208DE40(void) {
    /* Original at 0x0208DE40 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    bl NNS_G3dInit\n    bl G3X_Init\n    bl G3X_InitMtxStack\n    ldr r0, _0208DEC0 ; =0x04000060\n    ldr r1, _0208DEC4 ; =0xFFFFCFFD\n    ldrh r2, [r0]\n    ldr r3, _0208DEC8 ; =0x0000CFFB\n    and r2, r1\n    strh r2, [r0]\n    ldrh r2, [r0]\n    and r2, r3\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrh r4, [r0]\n    add r1, r1, #2\n    sub r3, #0x1c\n    and r4, r2\n    mov r2, #8\n    orr r2, r4\n    strh r2, [r0]\n    ldrh r2, [r0]\n    and r2, r1\n    mov r1, #0x10\n    orr r1, r2\n    strh r1, [r0]\n    ldrh r1, [r0]\n    and r1, r3\n    strh r1, [r0]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl G3X_SetFog\n    mov r0, #0\n    ldr r2, _0208DECC ; =0x00007FFF\n    add r1, r0, #0\n    mov r3, #0x3f\n    str r0, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _0208DED0 ; =0x04000540\n    mov r0, #0\n    str r0, [r1]\n    ldr r0, _0208DED4 ; =0xBFFF0000\n    str r0, [r1, #0x40]\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r1, _0208DED8 ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #2\n    orr r0, r2\n    strh r0, [r1]\n    add sp, #4\n    pop {r3, r4, pc}\n    _0208DEC0: .word 0x04000060\n    _0208DEC4: .word 0xFFFFCFFD\n    _0208DEC8: .word 0x0000CFFB\n    _0208DECC: .word 0x00007FFF\n    _0208DED0: .word 0x04000540\n    _0208DED4: .word 0xBFFF0000\n    _0208DED8: .word 0x04000008"
    );
    #endif
}

void sub_0208DEDC(void) {
    /* Original at 0x0208DEDC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl NNS_G2dSetupSoftwareSpriteCamera\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl PokepicManager_DrawAll\n    ldr r0, _0208DEF8 ; =0x04000540\n    mov r1, #1\n    str r1, [r0]\n    pop {r4, pc}\n    nop\n    _0208DEF8: .word 0x04000540"
    );
    #endif
}

void sub_0208DEFC(void) {
    /* Original at 0x0208DEFC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Camera_Delete\n    mov r0, #0xb3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl sub_02017088\n    mov r0, #0xb3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_02016F2C\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl PokepicManager_Delete\n    pop {r4, pc}"
    );
    #endif
}

void sub_0208DF2C(void) {
    /* Original at 0x0208DF2C */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    ldr r3, _0208DF94 ; =_02104EA4\n    add r4, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x10\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, sp, #8\n    str r0, [r2]\n    mov r0, #0\n    strh r0, [r1]\n    strh r0, [r1, #2]\n    strh r0, [r1, #4]\n    strh r0, [r1, #6]\n    mov r0, #0x13\n    bl Camera_New\n    mov r1, #0xa7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r2, #1\n    str r2, [sp]\n    ldr r0, [r4, r1]\n    lsl r1, r2, #0x10\n    str r0, [sp, #4]\n    ldr r3, _0208DF98 ; =0x000005C1\n    add r0, sp, #0x10\n    add r2, sp, #8\n    bl Camera_Init_FromPosDistanceAndAngle\n    mov r2, #0xa7\n    lsl r2, r2, #2\n    mov r1, #0x19\n    ldr r2, [r4, r2]\n    mov r0, #0\n    lsl r1, r1, #0xe\n    bl Camera_SetPerspectiveClippingPlane\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Camera_ClearFixedTarget\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Camera_SetStaticPtr\n    add sp, #0x1c\n    pop {r3, r4, pc}\n    nop\n    _0208DF94: .word _02104EA4\n    _0208DF98: .word 0x000005C1"
    );
    #endif
}

void sub_0208DF9C(void) {
    /* Original at 0x0208DF9C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    cmp r2, #0xff\n    bne _0208DFB2\n    ldrh r2, [r0]\n    strh r2, [r1]\n    ldrh r2, [r0, #2]\n    strh r2, [r1, #2]\n    ldrh r0, [r0, #4]\n    strh r0, [r1, #4]\n    pop {r4, r5}\n    bx lr\n    cmp r2, #0\n    bne _0208DFC6\n    ldrh r2, [r0, #6]\n    strh r2, [r1]\n    ldrh r2, [r0, #8]\n    strh r2, [r1, #2]\n    ldrh r0, [r0, #0xa]\n    strh r0, [r1, #4]\n    pop {r4, r5}\n    bx lr\n    mov r3, #6\n    ldrsh r5, [r0, r3]\n    mov r3, #0xc\n    ldrsh r3, [r0, r3]\n    add r4, r3, #0\n    mul r4, r2\n    add r3, r5, r4\n    strh r3, [r1]\n    mov r3, #8\n    ldrsh r5, [r0, r3]\n    mov r3, #0xe\n    ldrsh r3, [r0, r3]\n    add r4, r3, #0\n    mul r4, r2\n    add r3, r5, r4\n    strh r3, [r1, #2]\n    mov r3, #0xa\n    ldrsh r4, [r0, r3]\n    mov r3, #0x10\n    ldrsh r0, [r0, r3]\n    mul r2, r0\n    add r0, r4, r2\n    strh r0, [r1, #4]\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void sub_0208DFF8(void) {
    /* Original at 0x0208DFF8 */
    /* Requires manual decompilation - 140 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0\n    ldrsh r1, [r4, r0]\n    ldrsh r0, [r5, r0]\n    add r6, r2, #0\n    sub r7, r1, r0\n    add r0, r7, #0\n    bl _fflt\n    ldr r1, _0208E16C ; =0x45800000\n    bl _fdiv\n    ldr r1, _0208E170 ; =0x40800000\n    bl _fdiv\n    mov r1, #0\n    bl _fgr\n    bls _0208E04C\n    add r0, r7, #0\n    bl _fflt\n    ldr r1, _0208E16C ; =0x45800000\n    bl _fdiv\n    ldr r1, _0208E170 ; =0x40800000\n    bl _fdiv\n    add r1, r0, #0\n    ldr r0, _0208E16C ; =0x45800000\n    bl _fmul\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    b _0208E072\n    add r0, r7, #0\n    bl _fflt\n    ldr r1, _0208E16C ; =0x45800000\n    bl _fdiv\n    ldr r1, _0208E170 ; =0x40800000\n    bl _fdiv\n    add r1, r0, #0\n    ldr r0, _0208E16C ; =0x45800000\n    bl _fmul\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    strh r0, [r6]\n    mov r0, #2\n    ldrsh r1, [r4, r0]\n    ldrsh r0, [r5, r0]\n    sub r7, r1, r0\n    add r0, r7, #0\n    bl _fflt\n    ldr r1, _0208E16C ; =0x45800000\n    bl _fdiv\n    ldr r1, _0208E170 ; =0x40800000\n    bl _fdiv\n    mov r1, #0\n    bl _fgr\n    bls _0208E0C4\n    add r0, r7, #0\n    bl _fflt\n    ldr r1, _0208E16C ; =0x45800000\n    bl _fdiv\n    ldr r1, _0208E170 ; =0x40800000\n    bl _fdiv\n    add r1, r0, #0\n    ldr r0, _0208E16C ; =0x45800000\n    bl _fmul\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    b _0208E0EA\n    add r0, r7, #0\n    bl _fflt\n    ldr r1, _0208E16C ; =0x45800000\n    bl _fdiv\n    ldr r1, _0208E170 ; =0x40800000\n    bl _fdiv\n    add r1, r0, #0\n    ldr r0, _0208E16C ; =0x45800000\n    bl _fmul\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    strh r0, [r6, #2]\n    mov r0, #4\n    ldrsh r1, [r4, r0]\n    ldrsh r0, [r5, r0]\n    sub r4, r1, r0\n    add r0, r4, #0\n    bl _fflt\n    ldr r1, _0208E16C ; =0x45800000\n    bl _fdiv\n    ldr r1, _0208E170 ; =0x40800000\n    bl _fdiv\n    mov r1, #0\n    bl _fgr\n    bls _0208E13C\n    add r0, r4, #0\n    bl _fflt\n    ldr r1, _0208E16C ; =0x45800000\n    bl _fdiv\n    ldr r1, _0208E170 ; =0x40800000\n    bl _fdiv\n    add r1, r0, #0\n    ldr r0, _0208E16C ; =0x45800000\n    bl _fmul\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    bl _ffix\n    b _0208E162\n    add r0, r4, #0\n    bl _fflt\n    ldr r1, _0208E16C ; =0x45800000\n    bl _fdiv\n    ldr r1, _0208E170 ; =0x40800000\n    bl _fdiv\n    add r1, r0, #0\n    ldr r0, _0208E16C ; =0x45800000\n    bl _fmul\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    strh r0, [r6, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0208E16C: .word 0x45800000\n    _0208E170: .word 0x40800000"
    );
    #endif
}

void sub_0208E174(void) {
    /* Original at 0x0208E174 */
    /* Requires manual decompilation - 236 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    ldr r2, _0208E33C ; =0x00000275\n    add r5, r0, #0\n    mov r1, #0xe6\n    lsl r1, r1, #2\n    ldrb r2, [r5, r2]\n    ldr r0, _0208E340 ; =_02104EB0\n    add r1, r5, r1\n    bl sub_0208DF9C\n    ldr r2, _0208E344 ; =0x00000276\n    ldr r1, _0208E348 ; =0x0000039E\n    ldrb r2, [r5, r2]\n    ldr r0, _0208E34C ; =_02104EC2\n    add r1, r5, r1\n    bl sub_0208DF9C\n    ldr r2, _0208E350 ; =0x00000277\n    ldr r1, _0208E354 ; =0x000003AA\n    ldrb r2, [r5, r2]\n    ldr r0, _0208E358 ; =_02104ED4\n    add r1, r5, r1\n    bl sub_0208DF9C\n    mov r1, #0xe9\n    lsl r1, r1, #2\n    ldr r0, _0208E35C ; =_02104EE6\n    add r1, r5, r1\n    mov r2, #0\n    bl sub_0208DF9C\n    ldr r2, _0208E360 ; =0x00000279\n    mov r1, #0x3b\n    lsl r1, r1, #4\n    ldrb r2, [r5, r2]\n    ldr r0, _0208E364 ; =_02104EF8\n    add r1, r5, r1\n    bl sub_0208DF9C\n    ldr r2, _0208E33C ; =0x00000275\n    ldr r1, _0208E368 ; =0x000003B6\n    ldrb r2, [r5, r2]\n    ldr r0, _0208E36C ; =_02104F0A\n    add r1, r5, r1\n    bl sub_0208DF9C\n    ldr r1, _0208E370 ; =0x000003C2\n    ldr r0, _0208E374 ; =_02104F1C\n    add r1, r5, r1\n    mov r2, #0\n    bl sub_0208DF9C\n    mov r2, #0x9e\n    lsl r2, r2, #2\n    mov r1, #0xef\n    lsl r1, r1, #2\n    ldrb r2, [r5, r2]\n    ldr r0, _0208E378 ; =_02104F2E\n    add r1, r5, r1\n    bl sub_0208DF9C\n    ldr r2, _0208E360 ; =0x00000279\n    mov r1, #0xf2\n    lsl r1, r1, #2\n    ldrb r2, [r5, r2]\n    ldr r0, _0208E37C ; =_02104F40\n    add r1, r5, r1\n    bl sub_0208DF9C\n    ldr r1, _0208E380 ; =0x000003CE\n    ldr r0, _0208E384 ; =_02104F52\n    add r1, r5, r1\n    mov r2, #0\n    bl sub_0208DF9C\n    ldr r2, _0208E350 ; =0x00000277\n    ldr r1, _0208E388 ; =0x000003DA\n    ldrb r2, [r5, r2]\n    ldr r0, _0208E38C ; =_02104F64\n    add r1, r5, r1\n    bl sub_0208DF9C\n    mov r2, #0x9e\n    lsl r2, r2, #2\n    mov r1, #0xf5\n    lsl r1, r1, #2\n    ldrb r2, [r5, r2]\n    ldr r0, _0208E390 ; =_02104F76\n    add r1, r5, r1\n    bl sub_0208DF9C\n    mov r1, #0x3e\n    lsl r1, r1, #4\n    ldr r0, _0208E394 ; =_02104F88\n    add r1, r5, r1\n    mov r2, #0\n    bl sub_0208DF9C\n    ldr r2, _0208E344 ; =0x00000276\n    ldr r1, _0208E398 ; =0x000003E6\n    ldrb r2, [r5, r2]\n    ldr r0, _0208E39C ; =_02104F9A\n    add r1, r5, r1\n    bl sub_0208DF9C\n    ldr r2, _0208E350 ; =0x00000277\n    ldr r1, _0208E3A0 ; =0x000003F2\n    ldrb r2, [r5, r2]\n    ldr r0, _0208E3A4 ; =_02104FAC\n    add r1, r5, r1\n    bl sub_0208DF9C\n    mov r2, #0x9e\n    lsl r2, r2, #2\n    mov r1, #0xfb\n    lsl r1, r1, #2\n    ldrb r2, [r5, r2]\n    ldr r0, _0208E3A8 ; =_02104FBE\n    add r1, r5, r1\n    bl sub_0208DF9C\n    mov r0, #0\n    str r0, [sp, #0x24]\n    mov r0, #0xce\n    lsl r0, r0, #2\n    add r1, r5, r0\n    str r1, [sp, #0x20]\n    add r1, r0, #0\n    add r1, #0x60\n    add r1, r5, r1\n    str r1, [sp, #0x1c]\n    add r1, r0, #0\n    sub r1, #0x60\n    add r1, r5, r1\n    str r1, [sp, #0x18]\n    add r1, r0, #6\n    add r1, r5, r1\n    str r1, [sp, #0x14]\n    add r1, r0, #0\n    add r1, #0x66\n    add r1, r5, r1\n    str r1, [sp, #0x10]\n    add r1, r0, #0\n    sub r1, #0x5a\n    add r1, r5, r1\n    str r1, [sp, #0xc]\n    add r1, r0, #0\n    add r1, #0xc\n    add r1, r5, r1\n    str r1, [sp, #8]\n    add r1, r0, #0\n    add r1, #0x6c\n    add r1, r5, r1\n    str r1, [sp, #4]\n    add r1, r0, #0\n    sub r1, #0x54\n    add r1, r5, r1\n    str r1, [sp]\n    add r1, r0, #0\n    add r1, #0x12\n    add r7, r5, r1\n    add r1, r0, #0\n    add r1, #0x72\n    sub r0, #0x4e\n    add r6, r5, r1\n    add r4, r5, r0\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x1c]\n    ldr r2, [sp, #0x20]\n    bl sub_0208DFF8\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0x14]\n    bl sub_0208DFF8\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    ldr r2, [sp, #8]\n    bl sub_0208DFF8\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl sub_0208DFF8\n    ldr r0, [sp, #0x20]\n    add r7, #0x18\n    add r0, #0x18\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x1c]\n    add r6, #0x18\n    add r0, #0x18\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x18]\n    add r4, #0x18\n    add r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    add r0, #0x18\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    add r0, #0x18\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    add r0, #0x18\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    add r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    add r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    add r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    add r0, r0, #1\n    str r0, [sp, #0x24]\n    cmp r0, #4\n    blo _0208E2C2\n    mov r0, #0xfe\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _0208E33C: .word 0x00000275\n    _0208E340: .word _02104EB0\n    _0208E344: .word 0x00000276\n    _0208E348: .word 0x0000039E\n    _0208E34C: .word _02104EC2\n    _0208E350: .word 0x00000277\n    _0208E354: .word 0x000003AA\n    _0208E358: .word _02104ED4\n    _0208E35C: .word _02104EE6\n    _0208E360: .word 0x00000279\n    _0208E364: .word _02104EF8\n    _0208E368: .word 0x000003B6\n    _0208E36C: .word _02104F0A\n    _0208E370: .word 0x000003C2\n    _0208E374: .word _02104F1C\n    _0208E378: .word _02104F2E\n    _0208E37C: .word _02104F40\n    _0208E380: .word 0x000003CE\n    _0208E384: .word _02104F52\n    _0208E388: .word 0x000003DA\n    _0208E38C: .word _02104F64\n    _0208E390: .word _02104F76\n    _0208E394: .word _02104F88\n    _0208E398: .word 0x000003E6\n    _0208E39C: .word _02104F9A\n    _0208E3A0: .word 0x000003F2\n    _0208E3A4: .word _02104FAC\n    _0208E3A8: .word _02104FBE"
    );
    #endif
}

void sub_0208E3AC(void) {
    /* Original at 0x0208E3AC */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x20\n    add r4, r0, #0\n    mov r0, #0x13\n    bl PokepicManager_Create\n    mov r1, #0x2a\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl sub_0208A520\n    add r1, r0, #0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldrb r0, [r0, #0x11]\n    cmp r0, #2\n    add r0, sp, #0x10\n    bne _0208E3DE\n    mov r2, #2\n    mov r3, #0\n    bl GetBoxmonSpriteCharAndPlttNarcIds\n    b _0208E3E4\n    mov r2, #2\n    bl GetPokemonSpriteCharAndPlttNarcIds\n    mov r2, #0xa9\n    lsl r2, r2, #2\n    ldr r0, _0208E440 ; =0x000007B8\n    add r1, r4, r2\n    sub r2, #0x68\n    ldrh r2, [r4, r2]\n    ldr r0, [r4, r0]\n    mov r3, #1\n    bl NARC_ReadPokepicAnimScript\n    mov r1, #0xb5\n    lsl r1, r1, #2\n    mov r2, #0\n    str r2, [r4, r1]\n    add r0, r1, #0\n    str r2, [sp]\n    sub r0, #0x30\n    str r2, [sp, #4]\n    add r0, r4, r0\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    sub r1, #0x34\n    ldr r0, [r4, r1]\n    add r1, sp, #0x10\n    mov r2, #0xd0\n    mov r3, #0x68\n    bl PokepicManager_CreatePokepic\n    mov r1, #0x2d\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #6\n    mov r2, #1\n    bl Pokepic_SetAttr\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x23\n    mov r2, #0\n    bl Pokepic_SetAttr\n    add sp, #0x20\n    pop {r4, pc}\n    nop\n    _0208E440: .word 0x000007B8"
    );
    #endif
}

void sub_0208E444(void) {
    /* Original at 0x0208E444 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    mov r2, #0xa\n    add r4, r0, #0\n    lsl r2, r2, #6\n    ldr r0, [r4, r2]\n    lsl r0, r0, #3\n    lsr r0, r0, #0x1f\n    beq _0208E47C\n    mov r0, #2\n    str r0, [sp]\n    add r0, r2, #0\n    add r0, #0x54\n    ldr r0, [r4, r0]\n    add r1, r2, #0\n    str r0, [sp, #4]\n    mov r3, #0\n    ldr r0, _0208E4B0 ; =0x000007B8\n    str r3, [sp, #8]\n    add r1, #0x4c\n    add r2, #0x50\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    bl sub_0207294C\n    add sp, #0xc\n    pop {r3, r4, pc}\n    add r2, #0x50\n    ldr r0, [r4, r2]\n    mov r1, #1\n    bl Pokepic_StartAnim\n    mov r3, #0xb5\n    lsl r3, r3, #2\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, [r4, r3]\n    add r1, r3, #0\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    sub r2, r3, #4\n    ldr r0, _0208E4B0 ; =0x000007B8\n    sub r3, #0x98\n    sub r1, #8\n    ldrh r3, [r4, r3]\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    bl sub_0207294C\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0208E4B0: .word 0x000007B8"
    );
    #endif
}

void sub_0208E4B4(void) {
    /* Original at 0x0208E4B4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xb3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl sub_02017088\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl PokepicManager_Delete\n    add r0, r4, #0\n    bl sub_0208E3AC\n    add r0, r4, #0\n    bl sub_0208E444\n    pop {r4, pc}"
    );
    #endif
}

void sub_0208E4DC(void) {
    /* Original at 0x0208E4DC */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _0208E538 ; =0x000007BF\n    ldrb r1, [r0, r1]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    cmp r1, #0xf\n    bne _0208E4F0\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, pc}\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    ldrb r0, [r0, #0x11]\n    cmp r0, #2\n    beq _0208E512\n    ldr r0, _0208E53C ; =_02104FFC\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0208E534\n    lsl r1, r0, #2\n    ldr r0, _0208E540 ; =_02104FD0\n    ldrb r0, [r0, r1]\n    pop {r3, pc}\n    ldr r0, _0208E53C ; =_02104FFC\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    cmp r0, #4\n    blt _0208E526\n    cmp r0, #9\n    bgt _0208E526\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, pc}\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0208E534\n    lsl r1, r0, #2\n    ldr r0, _0208E540 ; =_02104FD0\n    ldrb r0, [r0, r1]\n    pop {r3, pc}\n    nop\n    _0208E538: .word 0x000007BF\n    _0208E53C: .word _02104FFC\n    _0208E540: .word _02104FD0"
    );
    #endif
}

void sub_0208E544(void) {
    sub_0208E4DC(0xff, 0);
}
