/* Decompiled from asm/overlay_80_02235438.s */
#include "global.h"

u32 FrtCmd_091(void) {
    FrontierScriptContext_ReadHalfWord();
    GF_GetCurrentPlayingBGM();
    StopBGM(0);
    return 0;
}

void FrtCmd_132(void) {
    /* Original at 0x0223544C */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, [r7]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r5, r0, #0\n    add r0, r7, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r6, r0, #0\n    add r0, r7, #0\n    bl FrontierScript_ReadVar\n    str r0, [sp]\n    add r0, r7, #0\n    bl FrontierScript_ReadVarPtr\n    add r4, r0, #0\n    ldr r0, [r7]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    cmp r6, #0x3b\n    bgt _022354CC\n    add r1, r6, #0\n    sub r1, #0x21\n    bmi _022354C6\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02235490: ; jump table\n    cmp r6, #2\n    beq _022354D2\n    b _0223557A\n    cmp r6, #0x64\n    beq _0223556A\n    b _0223557A\n    bl ResetSystem\n    b _0223557E\n    bl FrontierFieldSystem_AwardTowerBattlePoints\n    strh r0, [r4]\n    ldr r0, [r5, #8]\n    bl Save_GameStats_Get\n    ldrh r2, [r4]\n    mov r1, #0x45\n    bl GameStats_Add\n    b _0223557E\n    ldr r1, [sp]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov80_0223558C\n    strh r0, [r4]\n    b _0223557E\n    bl FrontierFieldSystem_GetFrontierBattleNumber\n    strh r0, [r4]\n    b _0223557E\n    bl ov80_022358C4\n    strh r0, [r4]\n    b _0223557E\n    bl FrontierFieldSystem_0204AC7C\n    strh r0, [r4]\n    b _0223557E\n    bl ov80_022358E8\n    strh r0, [r4]\n    b _0223557E\n    bl FrontierFieldSystem_GetBattleTowerMode\n    strh r0, [r4]\n    b _0223557E\n    ldr r1, [r5, #8]\n    bl ov80_022357B4\n    b _0223557E\n    ldr r1, [sp]\n    bl ov80_02235898\n    strh r0, [r4]\n    b _0223557E\n    ldr r1, [sp]\n    bl ov80_022358B0\n    b _0223557E\n    ldr r1, [r5, #8]\n    bl FrontierFieldSystem_0204AD04\n    b _0223557E\n    ldr r1, [r5, #8]\n    bl FrontierFieldSystem_0204AE20\n    b _0223557E\n    bl FrontierFieldSystem_0204AF2C\n    b _0223557E\n    ldr r1, _02235584 ; =0x00000884\n    mov r2, #0x46\n    add r0, r0, r1\n    mov r1, #0\n    bl MI_CpuFill8\n    b _0223557E\n    ldr r1, _02235588 ; =0x000008D6\n    mov r2, #1\n    strb r2, [r0, r1]\n    b _0223557E\n    cmp r0, #0\n    bne _02235574\n    mov r0, #1\n    strh r0, [r4]\n    b _0223557E\n    mov r0, #0\n    strh r0, [r4]\n    b _0223557E\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02235584: .word 0x00000884\n    _02235588: .word 0x000008D6"
    );
    #endif
}

void ov80_0223558C(void) {
    /* Original at 0x0223558C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #2\n    bne _02235598\n    ldrb r0, [r0, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1d\n    bx lr\n    cmp r1, #1\n    bne _022355BE\n    ldrb r1, [r0, #0xf]\n    cmp r1, #2\n    bne _022355B0\n    ldrb r0, [r0, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1d\n    lsl r1, r0, #1\n    ldr r0, _022355CC ; =ov80_0223C034\n    ldrh r0, [r0, r1]\n    bx lr\n    ldrb r0, [r0, #0x12]\n    cmp r0, #0\n    beq _022355BA\n    mov r0, #0x61\n    bx lr\n    mov r0, #0\n    bx lr\n    ldrb r0, [r0, #0x11]\n    cmp r0, #0\n    beq _022355C8\n    mov r0, #0x61\n    bx lr\n    mov r0, #0\n    bx lr\n    _022355CC: .word ov80_0223C034"
    );
    #endif
}

void FrtCmd_133(void) {
    /* Original at 0x022355D0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r1, [r5, #0x1c]\n    add r0, r1, #1\n    str r0, [r5, #0x1c]\n    ldr r0, [r5]\n    ldrb r6, [r1]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r4, r0, #0\n    bne _022355F4\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldrb r0, [r4, #0xf]\n    bl ov80_02236B18\n    lsl r1, r6, #4\n    add r1, r6, r1\n    add r2, r0, #0\n    add r4, #0x90\n    lsl r1, r1, #4\n    add r0, r5, #0\n    add r1, r4, r1\n    bl ov80_0222F458\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void FrtCmd_134(void) {
    /* Original at 0x02235610 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    bl FrontierFieldSystem_Free\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void FrtCmd_135(void) {
    /* Original at 0x02235624 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r6, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r1, r6, #0\n    add r4, r0, #0\n    bl ov80_0223690C\n    add r6, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #4\n    str r6, [r4, r0]\n    ldr r1, _0223566C ; =0x0000045D\n    mov r0, #5\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, [r5]\n    ldr r1, _02235670 ; =gOverlayTemplate_Battle\n    ldr r0, [r0]\n    add r2, r6, #0\n    bl Frontier_LaunchApplication\n    mov r0, #1\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _0223566C: .word 0x0000045D\n    _02235670: .word gOverlayTemplate_Battle"
    );
    #endif
}

void FrtCmd_136(void) {
    /* Original at 0x02235674 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    add r6, r0, #0\n    mov r0, #0x8d\n    lsl r0, r0, #4\n    ldr r5, [r4, r0]\n    ldr r0, [r5, #0x14]\n    bl IsBattleResultWin\n    ldr r1, _022356A8 ; =0x000008CC\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    strh r0, [r6]\n    add r0, r5, #0\n    bl BattleSetup_Delete\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _022356A8: .word 0x000008CC"
    );
    #endif
}

void FrtCmd_137(void) {
    /* Original at 0x022356AC */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    add r7, r0, #0\n    add r0, r4, #0\n    bl FrontierScript_ReadVarPtr\n    add r5, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r4, r0, #0\n    cmp r6, #2\n    bne _022356E6\n    add r1, r7, #0\n    bl ov80_02236ABC\n    b _022356EA\n    bl GF_AssertFail\n    bl sub_0203769C\n    ldr r1, _0223570C ; =0x0000083E\n    add r1, r4, r1\n    bl sub_02037C0C\n    cmp r0, #1\n    bne _02235700\n    mov r0, #1\n    strh r0, [r5]\n    b _02235708\n    mov r0, #0\n    strh r0, [r5]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223570C: .word 0x0000083E"
    );
    #endif
}

void FrtCmd_138(void) {
    /* Original at 0x02235710 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r1, r5, #0\n    add r1, #0x78\n    strh r4, [r1]\n    add r1, r5, #0\n    add r1, #0x7a\n    strh r0, [r1]\n    ldr r1, _02235738 ; =ov80_0223573C\n    add r0, r5, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _02235738: .word ov80_0223573C"
    );
    #endif
}

void ov80_0223573C(void) {
    /* Original at 0x0223573C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0x7a\n    ldrh r0, [r0]\n    str r0, [sp]\n    add r0, r5, #0\n    add r5, #0x78\n    ldrh r3, [r5]\n    ldr r2, [r4, #8]\n    bl ov80_02235774\n    cmp r0, #1\n    bne _02235770\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_02235774(void) {
    /* Original at 0x02235774 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    add r6, r1, #0\n    add r5, r3, #0\n    bl sub_0203769C\n    mov r1, #1\n    sub r0, r1, r0\n    bl sub_02037C44\n    add r7, r0, #0\n    bne _02235790\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, sp, #8\n    ldrh r1, [r1, #0x10]\n    add r0, r4, #0\n    bl ov80_0222BE24\n    add r4, r0, #0\n    cmp r5, #2\n    bne _022357AC\n    add r0, r6, #0\n    add r1, r7, #0\n    bl ov80_02236AD8\n    strh r0, [r4]\n    b _022357B0\n    bl GF_AssertFail\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}
