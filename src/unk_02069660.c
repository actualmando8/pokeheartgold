/* Decompiled from asm/unk_02069660.s */
#include "global.h"

void sub_02069660(void) {
    /* Original at 0x02069660 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x14\n    mov r1, #0\n    strb r1, [r0]\n    add r0, r0, #1\n    sub r2, r2, #1\n    bne _02069664\n    bx lr"
    );
    #endif
}

void sub_02069670(void) {
    /* Original at 0x02069670 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_02069660\n    str r4, [r5, #4]\n    mov r0, #0\n    str r0, [r5]\n    add r0, r4, #0\n    bl NNS_G3dGetMdlSet\n    str r0, [r5, #8]\n    cmp r0, #0\n    beq _020696B6\n    add r2, r0, #0\n    add r2, #8\n    beq _020696AA\n    ldrb r1, [r0, #9]\n    cmp r6, r1\n    bhs _020696AA\n    ldrh r3, [r0, #0xe]\n    add r1, r2, r3\n    ldrh r2, [r2, r3]\n    add r1, r1, #4\n    add r3, r2, #0\n    mul r3, r6\n    add r1, r1, r3\n    b _020696AC\n    mov r1, #0\n    cmp r1, #0\n    beq _020696B6\n    ldr r1, [r1]\n    add r0, r0, r1\n    b _020696B8\n    mov r0, #0\n    str r0, [r5, #0xc]\n    add r0, r4, #0\n    bl NNS_G3dGetTex\n    str r0, [r5, #0x10]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020696C4(void) {
    /* Original at 0x020696C4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [sp, #0x14]\n    add r4, r1, #0\n    add r1, r3, #0\n    str r0, [sp]\n    add r0, r2, #0\n    ldr r3, [sp, #0x10]\n    mov r2, #0\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    bl sub_02069670\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020696E8(void) {
    GF3dRender_AllocAndLoadTexResources(*((u32*)(r0 + 0x10)));
    NNS_G3dBindMdlSet(*((u32*)(r4 + 8)), *((u32*)(r4 + 0x10)));
}

void sub_02069700(void) {
    sub_020696E8(r1);
    SysTask_Destroy(r4);
}

void sub_02069714(void) {
    /* Original at 0x02069714 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r1, r0, #0\n    ldr r0, _0206972C ; =sub_02069700\n    ldr r2, _02069730 ; =0x0000FFFF\n    bl SysTask_CreateOnVBlankQueue\n    cmp r0, #0\n    bne _02069728\n    bl GF_AssertFail\n    pop {r3, pc}\n    nop\n    _0206972C: .word sub_02069700\n    _02069730: .word 0x0000FFFF"
    );
    #endif
}

void sub_02069734(void) {
    Heap_Free();
}

void sub_02069744(void) {
    /* Original at 0x02069744 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    beq _02069778\n    add r1, sp, #4\n    add r2, sp, #0\n    bl NNS_G3dTexReleaseTexKey\n    ldr r1, _0206977C ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r0, [sp, #4]\n    ldr r1, [r1]\n    blx r1\n    ldr r1, _0206977C ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r0, [sp]\n    ldr r1, [r1]\n    blx r1\n    ldr r0, [r4, #0x10]\n    bl NNS_G3dPlttReleasePlttKey\n    ldr r1, _02069780 ; =NNS_GfdDefaultFuncFreePlttVram\n    ldr r1, [r1]\n    blx r1\n    mov r0, #0\n    str r0, [r4, #0x10]\n    add sp, #8\n    pop {r4, pc}\n    _0206977C: .word NNS_GfdDefaultFuncFreeTexVram\n    _02069780: .word NNS_GfdDefaultFuncFreePlttVram"
    );
    #endif
}

void sub_02069784(void) {
    sub_02069744();
    sub_02069734(r4);
    sub_02069660(r4);
}
