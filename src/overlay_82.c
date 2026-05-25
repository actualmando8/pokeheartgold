/* Decompiled from asm/overlay_82.s */
#include "global.h"

void ov82_0223DD60(void) {
    /* Original at 0x0223DD60 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    add r6, r1, #0\n    ldr r0, _0223DE1C ; =FS_OVERLAY_ID(OVY_80)\n    mov r1, #2\n    bl HandleLoadOverlay\n    bl ov82_0223E9B0\n    mov r2, #2\n    mov r0, #3\n    mov r1, #0x69\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    mov r1, #0xa1\n    add r0, r4, #0\n    lsl r1, r1, #2\n    mov r2, #0x69\n    bl OverlayManager_CreateAndGetData\n    mov r2, #0xa1\n    mov r1, #0\n    lsl r2, r2, #2\n    add r5, r0, #0\n    bl memset\n    mov r0, #0x69\n    bl BgConfig_Alloc\n    str r0, [r5, #0x48]\n    add r0, r4, #0\n    str r4, [r5]\n    bl OverlayManager_GetArgs\n    add r4, r0, #0\n    add r0, r5, #0\n    ldr r1, [r4]\n    add r0, #0xa0\n    str r1, [r0]\n    ldrb r0, [r4, #4]\n    add r1, r4, #6\n    strb r0, [r5, #9]\n    mov r0, #0x21\n    lsl r0, r0, #4\n    str r1, [r5, r0]\n    add r0, r5, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    bl Save_PlayerData_GetOptionsAddr\n    add r1, r5, #0\n    add r1, #0x9c\n    str r0, [r1]\n    mov r1, #0x85\n    ldr r0, [r4, #0xc]\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r2, [r4, #8]\n    add r0, r1, #4\n    str r2, [r5, r0]\n    add r0, r1, #0\n    ldr r2, [r4, #0x14]\n    add r0, #8\n    str r2, [r5, r0]\n    ldrh r0, [r4, #0x18]\n    add r1, #0x68\n    add r0, r0, #1\n    strh r0, [r5, #0x1c]\n    ldrb r0, [r4, #5]\n    strb r0, [r5, #0xd]\n    mov r0, #0xff\n    strb r0, [r5, r1]\n    strb r0, [r5, #0x18]\n    mov r0, #0x75\n    strb r0, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov82_0223E9E8\n    ldrb r0, [r5, #9]\n    bl ov80_0223792C\n    cmp r0, #1\n    bne _0223DE0E\n    add r0, r5, #0\n    bl sub_02096910\n    mov r0, #0\n    str r0, [r6]\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _0223DE1C: .word FS_OVERLAY_ID(OVY_80)"
    );
    #endif
}

void ov82_0223DE20(void) {
    /* Original at 0x0223DE20 */
    /* Requires manual decompilation - 140 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldrb r1, [r4, #0x18]\n    cmp r1, #0xff\n    beq _0223DE4A\n    ldr r1, [r5]\n    cmp r1, #2\n    bne _0223DE4A\n    ldrh r1, [r4, #0x10]\n    cmp r1, #0\n    bne _0223DE4A\n    bl ov82_0223F834\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #3\n    bl ov82_0223F2F8\n    ldr r0, [r5]\n    cmp r0, #6\n    bls _0223DE52\n    b _0223DF68\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223DE5E: ; jump table\n    add r0, r4, #0\n    bl ov82_0223E2A4\n    cmp r0, #1\n    bne _0223DE82\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0\n    bl ov82_0223F2F8\n    b _0223DE86\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov82_0223DFBC\n    cmp r0, #1\n    bne _0223DF68\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #2\n    bl ov82_0223F2F8\n    b _0223DF68\n    add r0, r4, #0\n    bl ov82_0223E2EC\n    cmp r0, #1\n    bne _0223DF68\n    ldrb r0, [r4, #0x17]\n    cmp r0, #1\n    bne _0223DEB8\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #3\n    bl ov82_0223F2F8\n    b _0223DF68\n    ldrb r0, [r4, #0xb]\n    cmp r0, #1\n    bne _0223DECC\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl ov82_0223F2F8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r4, #9]\n    bl ov80_0223792C\n    cmp r0, #1\n    bne _0223DEE2\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #4\n    bl ov82_0223F2F8\n    b _0223DF68\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #5\n    bl ov82_0223F2F8\n    b _0223DF68\n    add r0, r4, #0\n    bl ov82_0223E5D4\n    cmp r0, #1\n    bne _0223DF68\n    ldrb r0, [r4, #0x19]\n    cmp r0, #1\n    bne _0223DF0E\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #2\n    bl ov82_0223F2F8\n    b _0223DF68\n    ldrb r0, [r4, #9]\n    bl ov80_0223792C\n    cmp r0, #1\n    bne _0223DF24\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #4\n    bl ov82_0223F2F8\n    b _0223DF68\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #5\n    bl ov82_0223F2F8\n    b _0223DF68\n    add r0, r4, #0\n    bl ov82_0223E7E8\n    cmp r0, #1\n    bne _0223DF68\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #5\n    bl ov82_0223F2F8\n    b _0223DF68\n    add r0, r4, #0\n    bl ov82_0223E820\n    cmp r0, #1\n    bne _0223DF68\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov82_0223E888\n    cmp r0, #1\n    bne _0223DF68\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #4\n    bl ov82_0223F2F8\n    add r4, #0xa8\n    ldr r0, [r4]\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov82_0223DF74(void) {
    /* Original at 0x0223DF74 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl OverlayManager_GetData\n    mov r1, #0x21\n    lsl r1, r1, #4\n    ldrb r2, [r0, #0xd]\n    ldr r1, [r0, r1]\n    strh r2, [r1]\n    bl ov82_0223E8C4\n    add r0, r4, #0\n    bl OverlayManager_FreeData\n    ldr r2, _0223DFB4 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0x69\n    bl Heap_Destroy\n    ldr r0, _0223DFB8 ; =FS_OVERLAY_ID(OVY_80)\n    bl UnloadOverlayByID\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0223DFB4: .word 0x04000304\n    _0223DFB8: .word FS_OVERLAY_ID(OVY_80)"
    );
    #endif
}

void ov82_0223DFBC(void) {
    /* Original at 0x0223DFBC */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #3\n    bhi _0223E068\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223DFD4: ; jump table\n    ldrh r0, [r4, #0x12]\n    cmp r0, #0\n    bne _0223DFF6\n    ldrb r0, [r4, #9]\n    bl ov80_0223792C\n    cmp r0, #1\n    bne _0223DFF6\n    bl sub_02037BEC\n    mov r0, #0x70\n    bl sub_02037AC0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E068\n    ldrh r0, [r4, #0x12]\n    cmp r0, #0\n    bne _0223E028\n    ldrb r0, [r4, #9]\n    bl ov80_0223792C\n    cmp r0, #1\n    bne _0223E028\n    mov r0, #0x70\n    bl sub_02037B38\n    cmp r0, #1\n    bne _0223E068\n    bl sub_02037BEC\n    mov r0, #1\n    strh r0, [r4, #0x12]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E068\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E068\n    bl ov82_0223E070\n    add r0, r4, #0\n    bl ov82_0223E0B0\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x69\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #1\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E068\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0223E068\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov82_0223E070(void) {
    /* Original at 0x0223E070 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r1, #0\n    str r1, [sp]\n    add r4, r0, #0\n    str r1, [sp, #4]\n    add r1, r4, #0\n    add r1, #0x6c\n    mov r2, #1\n    mov r3, #2\n    bl ov82_0223F040\n    add r1, r4, #0\n    add r0, r4, #0\n    add r1, #0x6c\n    bl ov82_0223F134\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r2, #0\n    add r0, r4, #0\n    add r4, #0x5c\n    str r2, [sp, #8]\n    add r1, r4, #0\n    add r3, r2, #0\n    str r2, [sp, #0xc]\n    bl ov82_0223EFCC\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov82_0223E0B0(void) {
    /* Original at 0x0223E0B0 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r0, #0x7c\n    bl GetWindowX\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    add r0, #0x7c\n    bl GetWindowY\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    add r0, r5, #0\n    add r0, #0x7c\n    bl GetWindowWidth\n    add r0, r0, #2\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r5, #0\n    add r0, #0x7c\n    bl GetWindowHeight\n    add r0, r0, #2\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    add r0, #0x7c\n    bl GetWindowBgId\n    str r0, [sp, #0x14]\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0xf\n    mov r2, #0\n    str r0, [sp, #8]\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x7c\n    add r3, r2, #0\n    str r2, [sp, #0xc]\n    bl ov82_0223F1AC\n    add r0, r5, #0\n    mov r1, #4\n    bl ov82_0223EECC\n    str r6, [sp]\n    str r4, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x48]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    add r3, r7, #0\n    bl ov82_0223E140\n    ldr r0, [r5, #0x48]\n    ldr r1, [sp, #0x14]\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov82_0223E140(void) {
    /* Original at 0x0223E140 */
    /* Requires manual decompilation - 169 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    str r1, [sp, #0x14]\n    str r2, [sp, #0x18]\n    ldr r5, [sp, #0x4c]\n    add r6, r3, #0\n    str r6, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    str r2, [sp, #8]\n    lsl r2, r5, #0x18\n    lsr r2, r2, #0x18\n    str r2, [sp, #0xc]\n    add r2, sp, #0x30\n    ldrh r2, [r2, #0x18]\n    ldr r3, [sp, #0x18]\n    str r0, [sp, #0x10]\n    bl FillBgTilemapRect\n    add r1, sp, #0x30\n    ldrh r4, [r1, #0x18]\n    ldrb r7, [r1, #0x10]\n    ldr r0, [sp, #0x18]\n    add r2, r4, #2\n    add r0, r0, r7\n    sub r0, r0, #1\n    str r0, [sp, #0x20]\n    ldr r3, [sp, #0x20]\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    str r6, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, sp, #0x30\n    ldrb r0, [r0, #0x14]\n    add r2, r4, #6\n    lsl r2, r2, #0x10\n    str r0, [sp, #0x28]\n    add r0, r6, r0\n    sub r0, r0, #1\n    str r0, [sp, #0x24]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    ldr r3, [sp, #0x18]\n    lsr r2, r2, #0x10\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x24]\n    add r2, r4, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    ldr r3, [sp, #0x20]\n    add r2, #8\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    sub r0, r7, #2\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x18]\n    add r2, r4, #1\n    add r7, r0, #1\n    ldr r0, [sp, #0x1c]\n    lsl r2, r2, #0x10\n    lsl r0, r0, #0x18\n    lsl r3, r7, #0x18\n    str r6, [sp]\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x24]\n    add r2, r4, #7\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x1c]\n    lsl r2, r2, #0x10\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    lsl r3, r7, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x28]\n    add r6, r6, #1\n    sub r7, r0, #2\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    add r2, r4, #3\n    lsl r2, r2, #0x10\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    ldr r3, [sp, #0x18]\n    lsr r2, r2, #0x10\n    bl FillBgTilemapRect\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    ldr r3, [sp, #0x20]\n    add r2, r4, #5\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov82_0223E2A4(void) {
    /* Original at 0x0223E2A4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #8]\n    cmp r0, #0\n    bne _0223E2E8\n    ldr r0, [r4, #4]\n    bl OverlayManager_Run\n    cmp r0, #1\n    bne _0223E2E8\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    ldrb r1, [r0, #0x14]\n    mov r0, #0x83\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    bl Heap_Free\n    ldr r0, [r4, #4]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4, #4]\n    add r0, r4, #0\n    bl ov82_0223E974\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov82_0223E2EC(void) {
    /* Original at 0x0223E2EC */
    /* Requires manual decompilation - 307 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #7\n    bhi _0223E33A\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223E304: ; jump table\n    mov r0, #0\n    strb r0, [r4, #0xb]\n    mov r0, #1\n    strb r0, [r4, #8]\n    b _0223E5B6\n    ldr r1, _0223E5BC ; =gSystem\n    ldr r1, [r1, #0x48]\n    bl ov82_0223F300\n    add r0, r4, #0\n    bl ov82_0223F53C\n    cmp r0, #0\n    bne _0223E33C\n    add r0, r4, #0\n    bl ov82_0223F488\n    cmp r0, #0\n    bne _0223E33C\n    b _0223E5B6\n    ldrb r0, [r4, #0xd]\n    bl ov80_02237920\n    cmp r0, #0xfe\n    bne _0223E36E\n    ldr r0, _0223E5C0 ; =0x000005DD\n    bl PlaySE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x69\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #1\n    strh r0, [r4, #0x10]\n    mov r0, #7\n    strb r0, [r4, #8]\n    b _0223E5B6\n    add r0, r4, #0\n    bl ov82_0223F6E4\n    cmp r0, #1\n    ldrb r0, [r4, #0xd]\n    bne _0223E38E\n    bl ov80_02237920\n    cmp r0, #9\n    beq _0223E3C2\n    ldr r0, _0223E5C4 ; =0x000005F3\n    bl PlaySE\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    bl ov82_0223F6C4\n    mov r1, #0x86\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    bl sub_02030BD0\n    cmp r0, #0xa\n    blo _0223E3AC\n    ldr r0, _0223E5C4 ; =0x000005F3\n    bl PlaySE\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r4, #0xd]\n    bl ov80_02237920\n    cmp r0, #9\n    bne _0223E3C2\n    ldr r0, _0223E5C4 ; =0x000005F3\n    bl PlaySE\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, _0223E5C0 ; =0x000005DD\n    bl PlaySE\n    ldrb r0, [r4, #9]\n    bl ov80_0223792C\n    cmp r0, #0\n    bne _0223E3E4\n    ldrb r1, [r4, #0xd]\n    ldr r0, [r4, #0x48]\n    mov r2, #1\n    bl ov82_0223F5E0\n    ldr r0, [r4, #0x48]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0\n    strh r0, [r4, #0x14]\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0223E5B6\n    mov r0, #0x14\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #0x14]\n    ldrsh r0, [r4, r0]\n    neg r0, r0\n    bl ov82_0223F948\n    mov r0, #0x14\n    ldrsh r0, [r4, r0]\n    cmp r0, #8\n    bne _0223E45C\n    ldrb r0, [r4, #9]\n    bl ov80_0223792C\n    cmp r0, #0\n    bne _0223E41C\n    add r0, r4, #0\n    bl ov82_0223F84C\n    mov r0, #3\n    strb r0, [r4, #8]\n    b _0223E5B6\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0x4c\n    bl ov82_0223FD78\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    bl ov82_0223EF7C\n    strb r0, [r4, #0xa]\n    ldrb r0, [r4, #0xd]\n    add sp, #0x18\n    strb r0, [r4, #0x1a]\n    mov r0, #1\n    strb r0, [r4, #0x17]\n    pop {r3, r4, r5, pc}\n    add r0, #0x8c\n    ldr r0, [r0]\n    bl ov82_0223FE18\n    cmp r0, #0\n    beq _0223E45C\n    cmp r0, #1\n    beq _0223E45E\n    cmp r0, #2\n    beq _0223E49E\n    b _0223E5B6\n    add r0, r4, #0\n    bl ov82_0223F834\n    add r0, r4, #0\n    bl ov82_0223F6CC\n    cmp r0, #1\n    bne _0223E482\n    add r0, r4, #0\n    bl ov82_0223F6E4\n    cmp r0, #0\n    bne _0223E482\n    ldrb r0, [r4, #0xd]\n    strb r0, [r4, #0x1f]\n    mov r0, #5\n    strb r0, [r4, #8]\n    b _0223E5B6\n    ldr r0, _0223E5C8 ; =0x000005DC\n    mov r1, #0\n    bl StopSE\n    ldr r0, _0223E5CC ; =0x00000623\n    bl PlaySE\n    ldrb r0, [r4, #0x1f]\n    cmp r0, #0x75\n    beq _0223E498\n    strb r0, [r4, #0xd]\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov82_0223F834\n    mov r0, #4\n    strb r0, [r4, #8]\n    b _0223E5B6\n    mov r0, #0x14\n    ldrsh r1, [r4, r0]\n    sub r1, r1, #1\n    strh r1, [r4, #0x14]\n    ldrsh r0, [r4, r0]\n    neg r0, r0\n    bl ov82_0223F948\n    mov r0, #0x14\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bgt _0223E5B6\n    add r0, r4, #0\n    bl ov82_0223F8E4\n    ldrb r0, [r4, #0x1e]\n    cmp r0, #1\n    bne _0223E4D4\n    mov r0, #0\n    strb r0, [r4, #8]\n    b _0223E5B6\n    cmp r0, #0\n    bne _0223E4DE\n    mov r0, #1\n    strb r0, [r4, #8]\n    b _0223E5B6\n    bl GF_AssertFail\n    b _0223E5B6\n    add r0, #0x9c\n    ldr r0, [r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0x4c\n    bl ov82_0223FD78\n    add r0, r4, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    bl Save_PlayerData_GetOptionsAddr\n    bl Options_GetTextFrameDelay\n    mov r3, #1\n    str r3, [sp]\n    str r0, [sp, #4]\n    add r1, r4, #0\n    str r3, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    str r3, [sp, #0x14]\n    add r0, r4, #0\n    add r1, #0x4c\n    mov r2, #0x20\n    bl ov82_0223EF1C\n    strb r0, [r4, #0xa]\n    add r0, r4, #0\n    add r0, #0x4c\n    bl CopyWindowToVram\n    mov r0, #6\n    strb r0, [r4, #8]\n    b _0223E5B6\n    ldrb r0, [r4, #0xa]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0223E5B6\n    mov r0, #1\n    strb r0, [r4, #0x1e]\n    add r0, r4, #0\n    bl ov82_0223F90C\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov82_0223FCFC\n    ldr r0, [r4, #0x48]\n    mov r1, #0x13\n    mov r2, #0\n    bl ov82_0223F5E0\n    ldr r1, [r4, #0x48]\n    add r0, r4, #0\n    bl ov82_0223F580\n    mov r0, #0x13\n    strb r0, [r4, #0xd]\n    add r0, r4, #0\n    bl ov82_0223F558\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov82_0223F570\n    add r2, r0, #0\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r5, #0\n    bl ov82_0223FCBC\n    mov r0, #4\n    strb r0, [r4, #8]\n    b _0223E5B6\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0223E5B6\n    add r0, r4, #0\n    bl ov82_0223F224\n    add r0, r4, #0\n    bl ov82_0223E8C4\n    add r1, r4, #0\n    add r1, #0xa4\n    ldr r0, _0223E5D0 ; =gOverlayTemplate_PokemonSummary\n    ldr r1, [r1]\n    mov r2, #0x69\n    bl OverlayManager_New\n    str r0, [r4, #4]\n    mov r0, #1\n    add sp, #0x18\n    strb r0, [r4, #0xb]\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    _0223E5BC: .word gSystem\n    _0223E5C0: .word 0x000005DD\n    _0223E5C4: .word 0x000005F3\n    _0223E5C8: .word 0x000005DC\n    _0223E5CC: .word 0x00000623\n    _0223E5D0: .word gOverlayTemplate_PokemonSummary"
    );
    #endif
}

void ov82_0223E5D4(void) {
    /* Original at 0x0223E5D4 */
    /* Requires manual decompilation - 222 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #9\n    bhi _0223E632\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223E5EA: ; jump table\n    ldrb r0, [r4, #0x1a]\n    bl ov82_0223F6C4\n    add r2, r0, #0\n    add r0, r4, #0\n    mov r1, #5\n    bl ov82_0223F6E8\n    cmp r0, #1\n    bne _0223E632\n    mov r0, #0\n    strb r0, [r4, #0x1b]\n    strb r0, [r4, #0x1a]\n    strb r0, [r4, #0x17]\n    mov r0, #1\n    strb r0, [r4, #8]\n    b _0223E7D6\n    ldrb r0, [r4, #0x1b]\n    cmp r0, #0\n    beq _0223E62C\n    sub r0, r0, #1\n    strb r0, [r4, #0x1b]\n    b _0223E7D6\n    ldrb r0, [r4, #0x16]\n    cmp r0, #2\n    bhs _0223E634\n    b _0223E7D6\n    mov r0, #0\n    strb r0, [r4, #0x16]\n    ldrb r0, [r4, #0x18]\n    cmp r0, #0x14\n    bhs _0223E652\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0223E64C\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0223E7D6\n    mov r0, #3\n    strb r0, [r4, #8]\n    b _0223E7D6\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0223E660\n    mov r0, #3\n    strb r0, [r4, #8]\n    b _0223E7D6\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0223E7D6\n    mov r0, #0\n    bl ov82_0223F948\n    mov r1, #0\n    mov r0, #0x82\n    strh r1, [r4, #0x14]\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov82_0223FCB0\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0x4c\n    bl ov82_0223FD78\n    ldr r0, [r4, #0x24]\n    mov r1, #0\n    bl ov80_0222A7CC\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #1\n    bl ov82_0223EF7C\n    strb r0, [r4, #0xa]\n    mov r0, #0xa\n    mov r1, #0x9f\n    strb r0, [r4, #0x1b]\n    lsl r1, r1, #2\n    ldrb r1, [r4, r1]\n    ldr r0, [r4, #0x48]\n    mov r2, #2\n    bl ov82_0223F5E0\n    ldr r0, [r4, #0x48]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #4\n    strb r0, [r4, #8]\n    b _0223E7D6\n    ldr r1, _0223E7DC ; =0x0000027D\n    ldrb r2, [r4, r1]\n    cmp r2, #0\n    beq _0223E73A\n    cmp r2, #1\n    bne _0223E6D8\n    sub r0, r1, #1\n    ldrb r0, [r4, r0]\n    strb r0, [r4, #0xd]\n    mov r0, #1\n    pop {r4, pc}\n    bl ov82_0223F90C\n    mov r1, #0x9f\n    lsl r1, r1, #2\n    ldrb r1, [r4, r1]\n    ldr r0, [r4, #0x48]\n    mov r2, #0\n    bl ov82_0223F5E0\n    ldr r0, [r4, #0x48]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0x9f\n    mov r2, #0xff\n    lsl r0, r0, #2\n    strb r2, [r4, r0]\n    mov r1, #0\n    add r0, r0, #1\n    strb r1, [r4, r0]\n    strb r2, [r4, #0x18]\n    mov r0, #1\n    strb r0, [r4, #0x19]\n    pop {r4, pc}\n    ldrb r1, [r4, #0xd]\n    ldr r0, [r4, #0x48]\n    mov r2, #1\n    bl ov82_0223F5E0\n    ldr r0, [r4, #0x48]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r4, #0\n    bl ov82_0223F84C\n    mov r0, #5\n    strb r0, [r4, #8]\n    b _0223E7D6\n    add r0, #0x8c\n    ldr r0, [r0]\n    bl ov82_0223FE18\n    cmp r0, #0\n    beq _0223E7D6\n    cmp r0, #1\n    beq _0223E73C\n    cmp r0, #2\n    beq _0223E756\n    b _0223E7D6\n    ldr r0, _0223E7E0 ; =0x000005DC\n    mov r1, #0\n    bl StopSE\n    ldr r0, _0223E7E4 ; =0x00000623\n    bl PlaySE\n    add r0, r4, #0\n    bl ov82_0223F834\n    mov r0, #6\n    strb r0, [r4, #8]\n    b _0223E7D6\n    add r0, r4, #0\n    bl ov82_0223F834\n    mov r0, #7\n    strb r0, [r4, #8]\n    b _0223E7D6\n    mov r1, #6\n    mov r2, #1\n    bl ov82_0223F6E8\n    cmp r0, #1\n    bne _0223E7D6\n    mov r0, #1\n    pop {r4, pc}\n    mov r1, #0x14\n    ldrsh r2, [r4, r1]\n    cmp r2, #0\n    ble _0223E788\n    sub r0, r2, #1\n    strh r0, [r4, #0x14]\n    ldrsh r0, [r4, r1]\n    neg r0, r0\n    bl ov82_0223F948\n    b _0223E7D6\n    mov r1, #6\n    mov r2, #2\n    bl ov82_0223F6E8\n    cmp r0, #1\n    bne _0223E7D6\n    add r0, r4, #0\n    bl ov82_0223F8E4\n    mov r0, #0x9f\n    mov r1, #0xff\n    lsl r0, r0, #2\n    strb r1, [r4, r0]\n    strb r1, [r4, #0x18]\n    mov r0, #1\n    strb r0, [r4, #0x19]\n    pop {r4, pc}\n    bl sub_02037BEC\n    mov r0, #0x68\n    bl sub_02037AC0\n    mov r0, #9\n    strb r0, [r4, #8]\n    b _0223E7D6\n    mov r0, #0x68\n    bl sub_02037B38\n    cmp r0, #1\n    bne _0223E7D6\n    bl sub_02037BEC\n    mov r0, #0x69\n    bl sub_020379A0\n    mov r0, #0xff\n    strb r0, [r4, #0x18]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0223E7DC: .word 0x0000027D\n    _0223E7E0: .word 0x000005DC\n    _0223E7E4: .word 0x00000623"
    );
    #endif
}

void ov82_0223E7E8(void) {
    /* Original at 0x0223E7E8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #8]\n    cmp r0, #0\n    beq _0223E7F8\n    cmp r0, #1\n    beq _0223E80A\n    b _0223E81C\n    bl sub_02037BEC\n    mov r0, #0x68\n    bl sub_02037AC0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E81C\n    mov r0, #0x68\n    bl sub_02037B38\n    cmp r0, #1\n    bne _0223E81C\n    bl sub_02037BEC\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov82_0223E820(void) {
    /* Original at 0x0223E820 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #0\n    beq _0223E836\n    cmp r1, #1\n    beq _0223E842\n    cmp r1, #2\n    beq _0223E872\n    b _0223E880\n    mov r0, #0xa\n    strb r0, [r4, #0x1b]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E880\n    ldrb r1, [r4, #0x1b]\n    sub r1, r1, #1\n    strb r1, [r4, #0x1b]\n    ldrb r1, [r4, #0x1b]\n    cmp r1, #0\n    bne _0223E880\n    bl ov82_0223F90C\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x69\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E880\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0223E880\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov82_0223E888(void) {
    /* Original at 0x0223E888 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #0\n    beq _0223E898\n    cmp r1, #1\n    beq _0223E8BA\n    b _0223E8BE\n    bl ov82_0223F834\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov82_0223FCB0\n    add r0, r4, #0\n    add r0, #0x4c\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E8BE\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov82_0223E8C4(void) {
    /* Original at 0x0223E8C4 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    beq _0223E8D6\n    bl ov82_0223FC9C\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    beq _0223E8E4\n    bl ov82_0223FC9C\n    add r0, r6, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    bl ov82_0223FDC0\n    bl sub_0203A914\n    add r0, r6, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    mov r1, #2\n    bl PaletteData_FreeBuffers\n    add r0, r6, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    mov r1, #0\n    bl PaletteData_FreeBuffers\n    add r0, r6, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    bl PaletteData_Free\n    add r0, r6, #0\n    mov r1, #0\n    add r0, #0x94\n    str r1, [r0]\n    add r0, r6, #0\n    add r0, #0xa8\n    bl ov82_0223FBBC\n    ldr r0, [r6, #0x20]\n    bl DestroyMsgData\n    ldr r0, [r6, #0x24]\n    bl MessageFormat_Delete\n    ldr r0, [r6, #0x28]\n    bl String_Delete\n    ldr r0, [r6, #0x2c]\n    bl String_Delete\n    add r0, r6, #0\n    add r0, #0x98\n    ldr r0, [r0]\n    bl MessagePrinter_Delete\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x30]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _0223E94A\n    add r0, r6, #0\n    add r0, #0x4c\n    bl ov82_0223FD5C\n    ldr r0, [r6, #0x48]\n    bl ov82_0223EBB8\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    bl NARC_Delete\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov82_0223E974(void) {
    /* Original at 0x0223E974 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov82_0223E9B0\n    mov r0, #0x69\n    bl BgConfig_Alloc\n    str r0, [r4, #0x48]\n    add r0, r4, #0\n    bl ov82_0223E9E8\n    ldrb r0, [r4, #0xd]\n    bl ov80_02237920\n    cmp r0, #0xfe\n    bne _0223E9AE\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #2\n    bl ov82_0223FCFC\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x80\n    mov r2, #0xa8\n    bl ov82_0223FCBC\n    pop {r4, pc}"
    );
    #endif
}

void ov82_0223E9B0(void) {
    /* Original at 0x0223E9B0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetHBlankIntrCB\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _0223E9E0 ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _0223E9E4 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    pop {r3, pc}\n    _0223E9E0: .word 0xFFFFE0FF\n    _0223E9E4: .word 0x04001000"
    );
    #endif
}

void ov82_0223E9E8(void) {
    /* Original at 0x0223E9E8 */
    /* Requires manual decompilation - 139 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0xb7\n    mov r1, #0x69\n    bl NARC_New\n    mov r1, #0x22\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov82_0223EB3C\n    add r0, r5, #0\n    bl ov82_0223EB9C\n    ldr r2, _0223EB2C ; =0x000001B9\n    mov r0, #1\n    mov r1, #0x1b\n    mov r3, #0x69\n    bl NewMsgDataFromNarc\n    str r0, [r5, #0x20]\n    mov r0, #0x69\n    bl MessageFormat_New\n    str r0, [r5, #0x24]\n    mov r0, #0x96\n    lsl r0, r0, #2\n    mov r1, #0x69\n    bl String_New\n    str r0, [r5, #0x28]\n    mov r0, #0x96\n    lsl r0, r0, #2\n    mov r1, #0x69\n    bl String_New\n    str r0, [r5, #0x2c]\n    mov r6, #0\n    add r4, r5, #0\n    mov r7, #0x20\n    add r0, r7, #0\n    mov r1, #0x69\n    bl String_New\n    str r0, [r4, #0x30]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #2\n    blt _0223EA3C\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x69\n    bl LoadFontPal0\n    mov r1, #6\n    mov r0, #0\n    lsl r1, r1, #6\n    mov r2, #0x69\n    bl LoadFontPal1\n    mov r0, #4\n    mov r1, #0x40\n    mov r2, #0x69\n    bl LoadFontPal0\n    mov r0, #0xf\n    mov r1, #0xe\n    mov r2, #0\n    mov r3, #0x69\n    bl MessagePrinter_New\n    add r1, r5, #0\n    add r1, #0x98\n    str r0, [r1]\n    add r1, r5, #0\n    ldr r0, [r5, #0x48]\n    add r1, #0x4c\n    bl ov82_0223FD2C\n    ldr r1, [r5, #0x48]\n    add r0, r5, #0\n    bl ov82_0223F580\n    ldr r2, _0223EB30 ; =0x04000304\n    ldr r0, _0223EB34 ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    bl GfGfx_BothDispOn\n    add r0, r5, #0\n    bl ov82_0223F558\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov82_0223F570\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0xa8\n    mov r2, #1\n    add r3, r4, #0\n    str r1, [sp, #4]\n    bl ov82_0223FC48\n    mov r1, #0x81\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r3, #0xa0\n    mov r1, #1\n    str r3, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0xa8\n    add r2, r1, #0\n    bl ov82_0223FC48\n    mov r1, #0x82\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r1, #0xc\n    ldr r0, [r5, r1]\n    mov r1, #0\n    bl Party_GetMonByIndex\n    add r1, r0, #0\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ov82_0223FD18\n    bl sub_02037474\n    cmp r0, #0\n    beq _0223EB12\n    mov r0, #1\n    mov r1, #0x10\n    bl G2dRenderer_SetObjCharTransferReservedRegion\n    mov r0, #1\n    bl G2dRenderer_SetPlttTransferReservedRegion\n    bl sub_0203A880\n    mov r0, #0x69\n    bl ov82_0223FDB8\n    add r1, r5, #0\n    add r1, #0x8c\n    str r0, [r1]\n    ldr r0, _0223EB38 ; =ov82_0223EC0C\n    add r1, r5, #0\n    bl Main_SetVBlankIntrCB\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223EB2C: .word 0x000001B9\n    _0223EB30: .word 0x04000304\n    _0223EB34: .word 0xFFFF7FFF\n    _0223EB38: .word ov82_0223EC0C"
    );
    #endif
}

void ov82_0223EB3C(void) {
    /* Original at 0x0223EB3C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov82_0223EC48\n    ldr r0, [r4, #0x48]\n    bl ov82_0223EC68\n    add r0, r4, #0\n    bl ov82_0223ED94\n    mov r0, #0x69\n    bl PaletteData_Init\n    add r1, r4, #0\n    add r1, #0x94\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0x94\n    mov r1, #2\n    ldr r0, [r0]\n    lsl r2, r1, #8\n    mov r3, #0x69\n    bl PaletteData_AllocBuffers\n    add r0, r4, #0\n    add r0, #0x94\n    mov r2, #2\n    ldr r0, [r0]\n    mov r1, #0\n    lsl r2, r2, #8\n    mov r3, #0x69\n    bl PaletteData_AllocBuffers\n    add r0, r4, #0\n    mov r1, #3\n    bl ov82_0223EDF0\n    bl ov82_0223EE38\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    mov r1, #5\n    bl ov82_0223EE6C\n    pop {r4, pc}"
    );
    #endif
}

void ov82_0223EB9C(void) {
    /* Original at 0x0223EB9C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x85\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Party_GetMonByIndex\n    add r4, #0xa8\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov82_0223F95C\n    pop {r4, pc}"
    );
    #endif
}

void ov82_0223EBB8(void) {
    /* Original at 0x0223EBB8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    add r4, r0, #0\n    ldr r1, [r2]\n    ldr r0, _0223EC08 ; =0xFFFF1FFF\n    and r0, r1\n    str r0, [r2]\n    mov r0, #0x1f\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x1f\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r4, #0\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #0\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}\n    _0223EC08: .word 0xFFFF1FFF"
    );
    #endif
}

void ov82_0223EC0C(void) {
    /* Original at 0x0223EC0C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _0223EC3E\n    add r0, r4, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0223EC24\n    bl PaletteData_PushTransparentBuffers\n    ldr r0, [r4, #0x48]\n    bl DoScheduledBgGpuUpdates\n    bl GF_RunVramTransferTasks\n    bl OamManager_ApplyAndResetBuffers\n    ldr r3, _0223EC40 ; =0x027E0000\n    ldr r1, _0223EC44 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    _0223EC40: .word 0x027E0000\n    _0223EC44: .word 0x00003FF8"
    );
    #endif
}

void ov82_0223EC48(void) {
    GfGfx_SetBanks(5);
}

void ov82_0223EC68(void) {
    /* Original at 0x0223EC68 */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x9c\n    ldr r5, _0223ED78 ; =ov82_0223FE28\n    add r3, sp, #0x8c\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _0223ED7C ; =ov82_0223FE54\n    add r3, sp, #0x70\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x69\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223ED80 ; =ov82_0223FE70\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x69\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223ED84 ; =ov82_0223FE8C\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223ED88 ; =ov82_0223FEA8\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r3]\n    add r0, r4, #0\n    mov r1, #5\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223ED8C ; =ov82_0223FE38\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r1, _0223ED90 ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #1\n    strh r2, [r1]\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x9c\n    pop {r4, r5, pc}\n    _0223ED78: .word ov82_0223FE28\n    _0223ED7C: .word ov82_0223FE54\n    _0223ED80: .word ov82_0223FE70\n    _0223ED84: .word ov82_0223FE8C\n    _0223ED88: .word ov82_0223FEA8\n    _0223ED8C: .word ov82_0223FE38\n    _0223ED90: .word 0x04000008"
    );
    #endif
}

void ov82_0223ED94(void) {
    /* Original at 0x0223ED94 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldrb r0, [r0, #9]\n    bl ov80_0223792C\n    cmp r0, #0\n    beq _0223EDEA\n    mov r0, #1\n    lsl r0, r0, #0x1a\n    ldr r1, [r0]\n    ldr r3, _0223EDEC ; =0xFFFF1FFF\n    add r4, r0, #0\n    and r1, r3\n    str r1, [r0]\n    add r4, #0x48\n    ldrh r5, [r4]\n    mov r1, #0x3f\n    mov r2, #0x1f\n    bic r5, r1\n    orr r5, r2\n    strh r5, [r4]\n    add r4, r0, #0\n    add r4, #0x4a\n    ldrh r5, [r4]\n    bic r5, r1\n    orr r2, r5\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r4]\n    mov r2, #0xf\n    add r1, r0, #0\n    lsl r2, r2, #0xc\n    add r1, #0x40\n    strh r2, [r1]\n    add r1, r0, #0\n    mov r4, #0x10\n    add r1, #0x44\n    strh r4, [r1]\n    ldr r1, [r0]\n    add r2, r1, #0\n    and r2, r3\n    lsl r1, r4, #9\n    orr r1, r2\n    str r1, [r0]\n    pop {r3, r4, r5, pc}\n    _0223EDEC: .word 0xFFFF1FFF"
    );
    #endif
}

void ov82_0223EDF0(void) {
    /* Original at 0x0223EDF0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r4, r1, #0\n    mov r0, #0x69\n    str r0, [sp, #0xc]\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x48]\n    mov r1, #0x17\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x69\n    str r0, [sp, #0xc]\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x48]\n    mov r1, #0x18\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov82_0223EE38(void) {
    /* Original at 0x0223EE38 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r0, #0xb7\n    mov r1, #0x99\n    add r2, sp, #0\n    mov r3, #0x69\n    bl GfGfxLoader_GetPlttData\n    add r4, r0, #0\n    ldr r0, [sp]\n    mov r1, #0xc0\n    ldr r0, [r0, #0xc]\n    bl DC_FlushRange\n    ldr r0, [sp]\n    mov r1, #0\n    ldr r0, [r0, #0xc]\n    mov r2, #0xc0\n    bl GX_LoadBGPltt\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov82_0223EE6C(void) {
    /* Original at 0x0223EE6C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r4, r1, #0\n    mov r0, #0x69\n    str r0, [sp, #0xc]\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x48]\n    mov r1, #0x81\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x69\n    str r0, [sp, #0xc]\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x48]\n    mov r1, #0x82\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x69\n    str r0, [sp, #4]\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0xbe\n    mov r2, #4\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov82_0223EECC(void) {
    /* Original at 0x0223EECC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r5, r0, #0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x69\n    bl BG_ClearCharDataRange\n    mov r1, #1\n    str r1, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0x69\n    str r0, [sp, #0xc]\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x48]\n    mov r1, #0x85\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r3, #0x20\n    str r3, [sp]\n    mov r0, #0x69\n    str r0, [sp, #4]\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0xc0\n    mov r2, #4\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov82_0223EF1C(void) {
    /* Original at 0x0223EF1C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r1, sp, #0x38\n    ldrb r1, [r1]\n    add r5, r0, #0\n    add r0, r4, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x20]\n    ldr r2, [r5, #0x2c]\n    add r1, r6, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    ldr r2, [r5, #0x2c]\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x28]\n    add r2, sp, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    add r3, r7, #0\n    str r0, [sp, #4]\n    add r0, sp, #0x38\n    ldrb r1, [r0]\n    ldrb r0, [r2, #0x18]\n    ldrb r2, [r2, #0x1c]\n    lsl r0, r0, #0x18\n    lsl r2, r2, #0x18\n    lsr r0, r0, #8\n    lsr r2, r2, #0x10\n    orr r0, r2\n    orr r0, r1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r1, sp, #0x3c\n    ldrb r1, [r1]\n    ldr r2, [r5, #0x28]\n    add r0, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov82_0223EF7C(void) {
    /* Original at 0x0223EF7C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    mov r3, #1\n    add r4, r1, #0\n    str r3, [sp]\n    mov r1, #0\n    str r1, [sp, #4]\n    str r3, [sp, #8]\n    mov r1, #2\n    str r1, [sp, #0xc]\n    mov r1, #0xf\n    str r1, [sp, #0x10]\n    add r5, r0, #0\n    add r1, r5, #0\n    str r2, [sp, #0x14]\n    add r1, #0x4c\n    add r2, r4, #0\n    bl ov82_0223EF1C\n    add r5, #0x4c\n    add r4, r0, #0\n    add r0, r5, #0\n    bl CopyWindowToVram\n    add r0, r4, #0\n    add sp, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov82_0223EFB4(void) {
    BufferIntegerAsString(0, 1, 2);
}

void ov82_0223EFCC(void) {
    /* Original at 0x0223EFCC */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r1, #0\n    mov r1, #0x85\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    bl Party_GetMonByIndex\n    mov r1, #0xb3\n    add r2, sp, #0x10\n    bl GetMonData\n    add r1, sp, #0x30\n    ldrb r1, [r1, #0x18]\n    add r0, r5, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0xb\n    mov r1, #0x69\n    bl String_New\n    add r1, sp, #0x10\n    add r6, r0, #0\n    bl CopyU16ArrayToString\n    str r4, [sp]\n    mov r4, #0\n    str r4, [sp, #4]\n    add r2, sp, #0x30\n    ldrb r0, [r2, #0x10]\n    ldrb r3, [r2, #0x14]\n    ldrb r1, [r2, #0x18]\n    lsl r0, r0, #0x18\n    lsl r3, r3, #0x18\n    lsr r0, r0, #8\n    lsr r3, r3, #0x10\n    orr r0, r3\n    orr r0, r1\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldrb r1, [r2, #0x1c]\n    add r0, r5, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, #0\n    bl CopyWindowToVram\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov82_0223F040(void) {
    /* Original at 0x0223F040 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    str r1, [sp, #0x10]\n    add r0, r1, #0\n    add r1, sp, #0x30\n    ldrb r1, [r1, #0x10]\n    add r4, r2, #0\n    add r6, r3, #0\n    bl FillWindowPixelBuffer\n    ldr r2, _0223F108 ; =0x000002DF\n    mov r0, #1\n    mov r1, #0x1b\n    mov r3, #0x69\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0x24]\n    mov r0, #0xb\n    mov r1, #0x69\n    bl String_New\n    add r5, r0, #0\n    mov r0, #0\n    lsl r2, r4, #0x18\n    lsr r3, r2, #8\n    lsl r2, r6, #0x18\n    lsr r2, r2, #0x10\n    str r0, [sp, #0x28]\n    str r0, [sp, #0x20]\n    mov r0, #0x10\n    add r1, sp, #0x30\n    str r0, [sp, #0x14]\n    ldrb r0, [r1, #0x10]\n    orr r2, r3\n    orr r0, r2\n    str r0, [sp, #0x1c]\n    ldrb r0, [r1, #0x14]\n    str r0, [sp, #0x18]\n    mov r4, #0\n    mov r6, #1\n    ldr r0, [sp, #0x20]\n    add r7, r4, r0\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    bl ov80_02237920\n    cmp r0, #0xfe\n    beq _0223F0D4\n    add r0, r5, #0\n    bl String_SetEmpty\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    bl ov80_02237920\n    add r1, r0, #0\n    ldr r0, [sp, #0x24]\n    add r2, r5, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x1c]\n    add r2, r5, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    add r3, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r4, r4, #1\n    add r6, #0x40\n    cmp r4, #4\n    blt _0223F090\n    ldr r0, [sp, #0x20]\n    add r0, r0, #4\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x14]\n    add r0, #0x24\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x28]\n    add r0, r0, #1\n    str r0, [sp, #0x28]\n    cmp r0, #5\n    blt _0223F08C\n    add r0, r5, #0\n    bl String_Delete\n    ldr r0, [sp, #0x24]\n    bl DestroyMsgData\n    ldr r0, [sp, #0x10]\n    bl CopyWindowToVram\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    _0223F108: .word 0x000002DF"
    );
    #endif
}

void ov82_0223F10C(void) {
    /* Original at 0x0223F10C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    str r4, [sp]\n    str r3, [sp, #4]\n    ldr r1, [sp, #0x18]\n    add r0, #0x98\n    str r1, [sp, #8]\n    add r1, r2, #0\n    ldr r0, [r0]\n    mov r2, #2\n    mov r3, #0\n    bl PrintUIntOnWindow\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov82_0223F134(void) {
    /* Original at 0x0223F134 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp, #0x10]\n    str r0, [sp, #0xc]\n    mov r0, #4\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r4, #0\n    mov r5, #0x12\n    ldr r0, [sp, #0xc]\n    add r7, r4, r0\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    bl ov80_02237920\n    cmp r0, #0xfe\n    beq _0223F18A\n    cmp r0, #9\n    beq _0223F18A\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    bl ov82_0223F6C4\n    mov r1, #0x86\n    lsl r1, r1, #2\n    ldr r1, [r6, r1]\n    bl sub_02030BD0\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    cmp r2, #0xa\n    bls _0223F17C\n    mov r2, #0xa\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #4]\n    str r0, [sp]\n    add r0, r6, #0\n    add r3, r5, #0\n    bl ov82_0223F10C\n    add r4, r4, #1\n    add r5, #0x40\n    cmp r4, #4\n    blt _0223F14A\n    ldr r0, [sp, #0xc]\n    add r0, r0, #4\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    add r0, #0x24\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x10]\n    add r0, r0, #1\n    str r0, [sp, #0x10]\n    cmp r0, #5\n    blt _0223F146\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov82_0223F1AC(void) {
    /* Original at 0x0223F1AC */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r1, #0\n    add r1, sp, #0x18\n    ldrb r1, [r1, #0x18]\n    add r0, r5, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    bl FillWindowPixelBuffer\n    ldr r2, _0223F220 ; =0x000001B9\n    mov r0, #1\n    mov r1, #0x1b\n    mov r3, #0x69\n    bl NewMsgDataFromNarc\n    mov r1, #0x25\n    str r0, [sp, #0x10]\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    str r4, [sp]\n    mov r4, #0\n    str r4, [sp, #4]\n    add r2, sp, #0x18\n    ldrb r0, [r2, #0x10]\n    ldrb r3, [r2, #0x14]\n    ldrb r1, [r2, #0x18]\n    lsl r0, r0, #0x18\n    lsl r3, r3, #0x18\n    lsr r0, r0, #8\n    lsr r3, r3, #0x10\n    orr r0, r3\n    orr r0, r1\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldrb r1, [r2, #0x1c]\n    add r0, r5, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, [sp, #0x10]\n    bl DestroyMsgData\n    add r0, r5, #0\n    bl CopyWindowToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223F220: .word 0x000001B9"
    );
    #endif
}

void ov82_0223F224(void) {
    /* Original at 0x0223F224 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x69\n    mov r1, #0x3c\n    bl Heap_Alloc\n    add r1, r4, #0\n    add r1, #0xa4\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    mov r1, #0\n    mov r2, #0x3c\n    bl memset\n    mov r0, #0x85\n    add r1, r4, #0\n    lsl r0, r0, #2\n    add r1, #0xa4\n    ldr r2, [r4, r0]\n    ldr r1, [r1]\n    str r2, [r1]\n    add r2, r4, #0\n    add r2, #0xa4\n    ldr r2, [r2]\n    mov r1, #1\n    strb r1, [r2, #0x11]\n    add r2, r4, #0\n    add r2, #0x9c\n    ldr r3, [r2]\n    add r2, r4, #0\n    add r2, #0xa4\n    ldr r2, [r2]\n    str r3, [r2, #4]\n    add r2, r4, #0\n    add r2, #0xa4\n    ldr r2, [r2]\n    strb r1, [r2, #0x12]\n    ldr r0, [r4, r0]\n    bl Party_GetCount\n    add r1, r4, #0\n    add r1, #0xa4\n    ldr r1, [r1]\n    strb r0, [r1, #0x13]\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    mov r1, #0\n    strb r1, [r0, #0x14]\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    strh r1, [r0, #0x18]\n    add r0, r4, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    bl SaveArray_IsNatDexEnabled\n    add r1, r4, #0\n    add r1, #0xa4\n    ldr r1, [r1]\n    str r0, [r1, #0x1c]\n    add r0, r4, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    bl sub_02088288\n    add r1, r4, #0\n    add r1, #0xa4\n    ldr r1, [r1]\n    str r0, [r1, #0x2c]\n    add r0, r4, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    bl Save_SpecialRibbons_Get\n    add r1, r4, #0\n    add r1, #0xa4\n    ldr r1, [r1]\n    str r0, [r1, #0x20]\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    mov r1, #0\n    str r1, [r0, #0x34]\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    ldr r1, _0223F2F4 ; =_0223FE20\n    bl sub_02089D40\n    add r0, r4, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    bl Save_PlayerData_GetProfile\n    add r4, #0xa4\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl sub_0208AD34\n    pop {r4, pc}\n    _0223F2F4: .word _0223FE20"
    );
    #endif
}

void ov82_0223F2F8(void) {
    ((u8*)r0)[8] = 0;
    *(u32*)r1 = r2;
}

void ov82_0223F300(void) {
    /* Original at 0x0223F300 */
    /* Requires manual decompilation - 179 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0223F480 ; =gSystem\n    add r4, r0, #0\n    ldr r2, [r1, #0x48]\n    mov r1, #0x20\n    mov r0, #0\n    tst r1, r2\n    beq _0223F34A\n    ldrb r0, [r4, #0xd]\n    bl ov80_02237920\n    cmp r0, #0xfe\n    beq _0223F31E\n    ldrb r0, [r4, #0xd]\n    strb r0, [r4, #0xc]\n    ldrb r0, [r4, #0xd]\n    mov r1, #0x1e\n    lsr r3, r0, #0x1f\n    lsl r2, r0, #0x1e\n    sub r2, r2, r3\n    ror r2, r1\n    add r1, r3, r2\n    bne _0223F334\n    add r0, r0, #3\n    strb r0, [r4, #0xd]\n    b _0223F348\n    bl ov80_02237920\n    cmp r0, #0xfe\n    bne _0223F342\n    mov r0, #0x10\n    strb r0, [r4, #0xd]\n    b _0223F348\n    ldrb r0, [r4, #0xd]\n    sub r0, r0, #1\n    strb r0, [r4, #0xd]\n    mov r0, #1\n    ldr r1, _0223F480 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #0x10\n    tst r1, r2\n    beq _0223F390\n    ldrb r0, [r4, #0xd]\n    bl ov80_02237920\n    cmp r0, #0xfe\n    beq _0223F362\n    ldrb r0, [r4, #0xd]\n    strb r0, [r4, #0xc]\n    ldrb r0, [r4, #0xd]\n    mov r1, #0x1e\n    lsr r3, r0, #0x1f\n    lsl r2, r0, #0x1e\n    sub r2, r2, r3\n    ror r2, r1\n    add r1, r3, r2\n    cmp r1, #3\n    bne _0223F37A\n    sub r0, r0, #3\n    strb r0, [r4, #0xd]\n    b _0223F38E\n    bl ov80_02237920\n    cmp r0, #0xfe\n    bne _0223F388\n    mov r0, #0x13\n    strb r0, [r4, #0xd]\n    b _0223F38E\n    ldrb r0, [r4, #0xd]\n    add r0, r0, #1\n    strb r0, [r4, #0xd]\n    mov r0, #1\n    ldr r1, _0223F480 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #0x40\n    tst r1, r2\n    beq _0223F3FC\n    ldrb r0, [r4, #0xd]\n    bl ov80_02237920\n    cmp r0, #0xfe\n    beq _0223F3A8\n    ldrb r0, [r4, #0xd]\n    strb r0, [r4, #0xc]\n    ldrb r0, [r4, #0xd]\n    cmp r0, #4\n    bhs _0223F3B4\n    add r0, #0x10\n    strb r0, [r4, #0xd]\n    b _0223F3FA\n    bl ov80_02237920\n    cmp r0, #0xfe\n    bne _0223F3F4\n    ldrb r0, [r4, #0xc]\n    cmp r0, #0x10\n    bne _0223F3C8\n    mov r0, #0xd\n    strb r0, [r4, #0xd]\n    b _0223F3FA\n    cmp r0, #0x13\n    bne _0223F3D2\n    mov r0, #0xe\n    strb r0, [r4, #0xd]\n    b _0223F3FA\n    cmp r0, #0xd\n    beq _0223F3DA\n    cmp r0, #1\n    bne _0223F3E0\n    mov r0, #0xd\n    strb r0, [r4, #0xd]\n    b _0223F3FA\n    cmp r0, #0xe\n    beq _0223F3E8\n    cmp r0, #2\n    bne _0223F3EE\n    mov r0, #0xe\n    strb r0, [r4, #0xd]\n    b _0223F3FA\n    mov r0, #0xd\n    strb r0, [r4, #0xd]\n    b _0223F3FA\n    ldrb r0, [r4, #0xd]\n    sub r0, r0, #4\n    strb r0, [r4, #0xd]\n    mov r0, #1\n    ldr r1, _0223F480 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #0x80\n    tst r1, r2\n    beq _0223F424\n    ldrb r0, [r4, #0xd]\n    bl ov80_02237920\n    cmp r0, #0xfe\n    beq _0223F414\n    ldrb r0, [r4, #0xd]\n    strb r0, [r4, #0xc]\n    ldrb r0, [r4, #0xd]\n    cmp r0, #0x10\n    blo _0223F41E\n    sub r0, #0x10\n    b _0223F420\n    add r0, r0, #4\n    strb r0, [r4, #0xd]\n    mov r0, #1\n    cmp r0, #1\n    bne _0223F44A\n    ldr r0, _0223F484 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov82_0223F558\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov82_0223F570\n    add r2, r0, #0\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r5, #0\n    bl ov82_0223FCBC\n    ldrb r0, [r4, #0xd]\n    bl ov80_02237920\n    cmp r0, #0xfe\n    bne _0223F470\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #2\n    bl ov82_0223FCFC\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x80\n    mov r2, #0xa8\n    bl ov82_0223FCBC\n    pop {r3, r4, r5, pc}\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov82_0223FCFC\n    pop {r3, r4, r5, pc}\n    nop\n    _0223F480: .word gSystem\n    _0223F484: .word 0x000005DC"
    );
    #endif
}

void ov82_0223F488(void) {
    /* Original at 0x0223F488 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    ldr r0, _0223F538 ; =gSystem + 0x40\n    ldrh r1, [r0, #0x24]\n    cmp r1, #0\n    beq _0223F532\n    ldrh r4, [r0, #0x20]\n    ldrh r5, [r0, #0x22]\n    mov r7, #0\n    mov r3, #3\n    add r2, r3, #0\n    add r2, #0x23\n    mov r1, #0\n    mov r6, #1\n    add r0, r6, #0\n    add r0, #0x3f\n    cmp r6, r4\n    bgt _0223F522\n    cmp r4, r0\n    bgt _0223F522\n    cmp r3, r5\n    bgt _0223F522\n    cmp r5, r2\n    bgt _0223F522\n    lsl r0, r7, #2\n    add r1, r1, r0\n    ldr r0, [sp]\n    strb r1, [r0, #0xd]\n    bl ov82_0223F558\n    add r4, r0, #0\n    ldr r0, [sp]\n    bl ov82_0223F570\n    add r2, r0, #0\n    mov r1, #0x81\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    add r1, r4, #0\n    bl ov82_0223FCBC\n    ldr r0, [sp]\n    ldrb r0, [r0, #0xd]\n    bl ov80_02237920\n    cmp r0, #0xfe\n    bne _0223F508\n    mov r1, #0x81\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #2\n    bl ov82_0223FCFC\n    mov r1, #0x81\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #0x80\n    mov r2, #0xa8\n    bl ov82_0223FCBC\n    b _0223F516\n    mov r1, #0x81\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #1\n    bl ov82_0223FCFC\n    ldr r1, [sp]\n    mov r0, #1\n    add r1, #0x90\n    strb r0, [r1]\n    str r1, [sp]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r1, #1\n    add r6, #0x40\n    cmp r1, #4\n    blt _0223F4A4\n    add r7, r7, #1\n    add r3, #0x24\n    cmp r7, #5\n    blt _0223F49C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223F538: .word gSystem + 0x40"
    );
    #endif
}

void ov82_0223F53C(void) {
    /* Original at 0x0223F53C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0223F554 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #1\n    tst r2, r1\n    beq _0223F550\n    mov r2, #0\n    add r0, #0x90\n    strb r2, [r0]\n    add r0, r1, #0\n    bx lr\n    mov r0, #0\n    bx lr\n    _0223F554: .word gSystem"
    );
    #endif
}

void ov82_0223F558(void) {
    /* Original at 0x0223F558 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0xd]\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    lsl r0, r0, #6\n    add r0, #0x20\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bx lr"
    );
    #endif
}

void ov82_0223F570(void) {
    /* Original at 0x0223F570 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0xd]\n    lsr r1, r0, #2\n    mov r0, #0x24\n    mul r0, r1\n    add r0, #0x10\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bx lr"
    );
    #endif
}

void ov82_0223F580(void) {
    /* Original at 0x0223F580 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    bl ov82_0223F6E4\n    cmp r0, #1\n    bne _0223F5A6\n    mov r4, #0\n    mov r6, #3\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    add r2, r6, #0\n    bl ov82_0223F5E0\n    add r4, r4, #1\n    cmp r4, #0x11\n    blt _0223F592\n    b _0223F5D6\n    mov r7, #0x86\n    mov r4, #0\n    lsl r7, r7, #2\n    lsl r0, r4, #0x18\n    ldr r1, [r6, r7]\n    lsr r0, r0, #0x18\n    bl sub_02030BD0\n    cmp r0, #0xa\n    blo _0223F5C6\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    mov r2, #3\n    bl ov82_0223F5E0\n    add r4, r4, #1\n    cmp r4, #0x11\n    blt _0223F5AC\n    add r0, r5, #0\n    mov r1, #0x13\n    mov r2, #3\n    bl ov82_0223F5E0\n    add r0, r5, #0\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov82_0223F5E0(void) {
    /* Original at 0x0223F5E0 */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r0, #0\n    add r4, r1, #0\n    add r5, r2, #0\n    bne _0223F5F0\n    mov r1, #0\n    b _0223F602\n    cmp r5, #1\n    bne _0223F5F8\n    mov r1, #5\n    b _0223F602\n    cmp r5, #2\n    bne _0223F600\n    mov r1, #4\n    b _0223F602\n    mov r1, #3\n    lsr r3, r4, #0x1f\n    lsl r2, r4, #0x1e\n    sub r2, r2, r3\n    mov r0, #0x1e\n    ror r2, r0\n    add r0, r3, r2\n    lsl r0, r0, #3\n    str r0, [sp, #0xc]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r2, r4, #0x1d\n    mov ip, r0\n    sub r2, r2, r3\n    mov r0, #0x1d\n    ror r2, r0\n    add r6, r3, r2\n    cmp r6, #4\n    bge _0223F62A\n    mov r2, #5\n    b _0223F62C\n    mov r2, #4\n    cmp r4, #4\n    bhs _0223F634\n    mov r3, #0\n    b _0223F64E\n    cmp r4, #8\n    bhs _0223F63C\n    mov r3, #5\n    b _0223F64E\n    cmp r4, #0xc\n    bhs _0223F644\n    mov r3, #9\n    b _0223F64E\n    cmp r4, #0x10\n    bhs _0223F64C\n    mov r3, #0xe\n    b _0223F64E\n    mov r3, #0x12\n    mov r0, #8\n    str r0, [sp]\n    str r2, [sp, #4]\n    str r1, [sp, #8]\n    add r0, r7, #0\n    mov r1, #3\n    mov r2, ip\n    bl BgTilemapRectChangePalette\n    cmp r5, #0\n    bne _0223F6C0\n    ldr r0, [sp, #0xc]\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    cmp r6, #4\n    bge _0223F672\n    mov r1, #2\n    b _0223F674\n    mov r1, #3\n    cmp r4, #4\n    bhs _0223F67C\n    mov r3, #2\n    b _0223F696\n    cmp r4, #8\n    bhs _0223F684\n    mov r3, #6\n    b _0223F696\n    cmp r4, #0xc\n    bhs _0223F68C\n    mov r3, #0xb\n    b _0223F696\n    cmp r4, #0x10\n    bhs _0223F694\n    mov r3, #0xf\n    b _0223F696\n    mov r3, #0x14\n    cmp r4, #9\n    bhs _0223F6AE\n    mov r0, #1\n    str r0, [sp]\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r7, #0\n    mov r1, #3\n    bl BgTilemapRectChangePalette\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    str r0, [sp]\n    str r1, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    add r0, r7, #0\n    mov r1, #3\n    bl BgTilemapRectChangePalette\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov82_0223F6C4(void) {
    /* Original at 0x0223F6C4 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0x11\n    blo _0223F6CA\n    mov r0, #0x11\n    bx lr"
    );
    #endif
}

void ov82_0223F6CC(void) {
    /* Original at 0x0223F6CC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #9]\n    cmp r1, #0\n    bne _0223F6E0\n    ldrh r0, [r0, #0x1c]\n    cmp r0, #0x32\n    beq _0223F6DC\n    cmp r0, #0xaa\n    bne _0223F6E0\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov82_0223F6E4(void) {
    /* Original at 0x0223F6E4 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0x1e]\n    bx lr"
    );
    #endif
}

void ov82_0223F6E8(void) {
    /* Original at 0x0223F6E8 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #9]\n    add r4, r1, #0\n    add r7, r2, #0\n    bl ov80_0223792C\n    cmp r0, #0\n    bne _0223F6FE\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #4\n    beq _0223F70C\n    cmp r4, #5\n    beq _0223F718\n    cmp r4, #6\n    beq _0223F726\n    b _0223F732\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r6, #0x27\n    bl ov82_0223F74C\n    b _0223F732\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    mov r6, #0x28\n    bl ov82_0223F770\n    b _0223F732\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    mov r6, #0x29\n    bl ov82_0223F808\n    mov r1, #0x89\n    lsl r1, r1, #2\n    add r0, r6, #0\n    add r1, r5, r1\n    mov r2, #0x2c\n    bl sub_02037030\n    cmp r0, #1\n    bne _0223F748\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov82_0223F74C(void) {
    Save_PlayerData_GetProfile(0x89);
}

void ov82_0223F764(void) {
    sub_0203769C();
}

void ov82_0223F770(void) {
    /* Original at 0x0223F770 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x89\n    lsl r0, r0, #2\n    strh r1, [r5, r0]\n    add r4, r2, #0\n    add r0, r0, #2\n    strh r4, [r5, r0]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0223F790\n    ldrb r0, [r5, #0x18]\n    cmp r0, #0xff\n    bne _0223F790\n    strb r4, [r5, #0x18]\n    ldrb r1, [r5, #0x18]\n    mov r0, #0x8a\n    lsl r0, r0, #2\n    strh r1, [r5, r0]\n    sub r0, #0x14\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Party_GetMonByIndex\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _0223F7B0 ; =0x0000022A\n    strh r0, [r5, r1]\n    pop {r3, r4, r5, pc}\n    _0223F7B0: .word 0x0000022A"
    );
    #endif
}

void ov82_0223F7B4(void) {
    /* Original at 0x0223F7B4 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    add r6, r0, #0\n    ldrb r0, [r4, #0x16]\n    add r5, r2, #0\n    add r0, r0, #1\n    strb r0, [r4, #0x16]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _0223F804\n    ldrh r1, [r5, #2]\n    mov r0, #0x9f\n    lsl r0, r0, #2\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0223F7F6\n    ldrb r0, [r4, #0x18]\n    cmp r0, #0xff\n    beq _0223F7EA\n    mov r0, #0x9f\n    mov r1, #0\n    lsl r0, r0, #2\n    strb r1, [r4, r0]\n    b _0223F7FA\n    mov r0, #0x9f\n    lsl r0, r0, #2\n    ldrb r0, [r4, r0]\n    add r0, #0x14\n    strb r0, [r4, #0x18]\n    b _0223F7FA\n    ldrh r0, [r5, #4]\n    strb r0, [r4, #0x18]\n    mov r0, #0x87\n    lsl r0, r0, #2\n    ldrh r1, [r5, #6]\n    ldr r0, [r4, r0]\n    strh r1, [r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov82_0223F808(void) {
    /* Original at 0x0223F808 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0x89\n    lsl r3, r3, #2\n    strh r1, [r0, r3]\n    add r1, r3, #2\n    strh r2, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov82_0223F814(void) {
    sub_0203769C();
}

void ov82_0223F834(void) {
    YesNoPrompt_Reset(0);
}

void ov82_0223F84C(void) {
    /* Original at 0x0223F84C */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov82_0223FCB0\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0x4c\n    bl ov82_0223FD78\n    ldrb r0, [r4, #0xd]\n    bl ov80_02237920\n    add r2, r0, #0\n    ldr r0, [r4, #0x24]\n    mov r1, #0\n    bl BufferTypeName\n    ldrb r0, [r4, #0xd]\n    bl ov82_0223F6C4\n    mov r1, #0x86\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    bl sub_02030BD0\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    cmp r2, #0xa\n    bls _0223F89C\n    mov r2, #0xa\n    add r0, r4, #0\n    mov r1, #1\n    bl ov82_0223EFB4\n    add r0, r4, #0\n    bl ov82_0223F6E4\n    cmp r0, #1\n    bne _0223F8B2\n    mov r1, #0x1f\n    b _0223F8B4\n    mov r1, #0x18\n    add r0, r4, #0\n    mov r2, #1\n    bl ov82_0223EF7C\n    strb r0, [r4, #0xa]\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov82_0223FCFC\n    add r2, r4, #0\n    add r0, r4, #0\n    add r2, #0x90\n    add r0, #0x8c\n    ldrb r2, [r2]\n    ldr r0, [r0]\n    ldr r1, [r4, #0x48]\n    bl ov82_0223FDC8\n    mov r0, #1\n    strb r0, [r4, #0xf]\n    pop {r4, pc}"
    );
    #endif
}

void ov82_0223F8E4(void) {
    /* Original at 0x0223F8E4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov82_0223F90C\n    ldrb r1, [r4, #0xd]\n    ldr r0, [r4, #0x48]\n    mov r2, #0\n    bl ov82_0223F5E0\n    ldr r0, [r4, #0x48]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov82_0223FCFC\n    pop {r4, pc}"
    );
    #endif
}

void ov82_0223F90C(void) {
    /* Original at 0x0223F90C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov82_0223FCB0\n    add r0, r4, #0\n    add r0, #0x4c\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r2, #0\n    add r0, r4, #0\n    add r4, #0x5c\n    str r2, [sp, #8]\n    add r1, r4, #0\n    add r3, r2, #0\n    str r2, [sp, #0xc]\n    bl ov82_0223EFCC\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov82_0223F948(void) {
    /* Original at 0x0223F948 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0223F954 ; =G2x_SetBlendBrightness_\n    add r2, r0, #0\n    ldr r0, _0223F958 ; =0x04000050\n    mov r1, #0x1e\n    bx r3\n    nop\n    _0223F954: .word G2x_SetBlendBrightness_\n    _0223F958: .word 0x04000050"
    );
    #endif
}

void ov82_0223F95C(void) {
    /* Original at 0x0223F95C */
    /* Requires manual decompilation - 190 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    str r1, [sp, #0x14]\n    bl ov82_0223FC14\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x80\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x20\n    str r3, [sp, #0xc]\n    mov r2, #0x69\n    str r2, [sp, #0x10]\n    add r2, r0, #0\n    bl OamManager_Create\n    mov r0, #2\n    add r1, r5, #4\n    mov r2, #0x69\n    bl G2dRenderer_Init\n    ldr r4, _0223FB04 ; =ov82_0223FEEC\n    str r0, [r5]\n    mov r7, #0\n    add r6, r5, #0\n    ldrb r0, [r4]\n    add r1, r7, #0\n    mov r2, #0x69\n    bl Create2DGfxResObjMan\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    add r7, r7, #1\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r7, #4\n    blt _0223F996\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #1\n    str r3, [sp, #4]\n    mov r0, #0x69\n    str r0, [sp, #8]\n    add r0, #0xc3\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0xc\n    bl AddCharResObjFromNarc\n    mov r1, #0x4f\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x69\n    str r0, [sp, #0xc]\n    add r0, #0xc7\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x36\n    bl AddPlttResObjFromNarc\n    mov r1, #5\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x69\n    str r0, [sp, #8]\n    add r0, #0xcb\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0xe\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x51\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x69\n    str r0, [sp, #8]\n    add r0, #0xcf\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0xd\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x52\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0x14\n    mov r1, #0x69\n    bl NARC_New\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    bl Pokemon_GetIconNaix\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x69\n    str r0, [sp, #8]\n    add r0, #0xc3\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #0x18]\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0x53\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    bl sub_02074490\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0x69\n    str r0, [sp, #0xc]\n    add r0, #0xc7\n    ldr r0, [r5, r0]\n    mov r1, #0x14\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    mov r1, #0x15\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    bl sub_02074498\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x69\n    str r0, [sp, #8]\n    add r0, #0xcb\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #0x18]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x55\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    bl sub_020744A4\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x69\n    str r0, [sp, #8]\n    add r0, #0xcf\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #0x18]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x56\n    lsl r1, r1, #2\n    add r7, r1, #0\n    add r6, r1, #0\n    str r0, [r5, r1]\n    mov r4, #0\n    sub r7, #0x1c\n    sub r6, #0x18\n    ldr r0, [r5, r7]\n    bl sub_0200ACF0\n    ldr r0, [r5, r6]\n    bl sub_0200AF94\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #2\n    blt _0223FAD4\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, [sp, #0x18]\n    bl NARC_Delete\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223FB04: .word ov82_0223FEEC"
    );
    #endif
}

void ov82_0223FB08(void) {
    /* Original at 0x0223FB08 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x80\n    add r5, r0, #0\n    mov r0, #0\n    str r1, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    add r4, r3, #0\n    str r0, [sp, #8]\n    mov r3, #0\n    str r3, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    add r6, r2, #0\n    ldr r2, [r5, r0]\n    str r2, [sp, #0x14]\n    add r2, r0, #4\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x18]\n    add r2, r0, #0\n    add r2, #8\n    ldr r2, [r5, r2]\n    add r0, #0xc\n    str r2, [sp, #0x1c]\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    str r0, [sp, #0x20]\n    str r3, [sp, #0x24]\n    str r3, [sp, #0x28]\n    add r0, sp, #0x5c\n    add r3, r1, #0\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [sp, #0x2c]\n    add r0, sp, #0x5c\n    str r0, [sp, #0x30]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r1, [sp, #0x34]\n    str r1, [sp, #0x38]\n    str r1, [sp, #0x3c]\n    str r0, [sp, #0x40]\n    str r0, [sp, #0x44]\n    str r0, [sp, #0x48]\n    add r0, sp, #0x2c\n    strh r1, [r0, #0x20]\n    str r4, [sp, #0x50]\n    add r0, sp, #0x80\n    ldrb r0, [r0, #0x10]\n    cmp r0, #0\n    bne _0223FB7C\n    mov r0, #1\n    str r0, [sp, #0x54]\n    b _0223FB80\n    mov r0, #2\n    str r0, [sp, #0x54]\n    mov r0, #0x69\n    str r0, [sp, #0x58]\n    add r0, sp, #0x80\n    ldrb r0, [r0, #0x10]\n    cmp r0, #1\n    bne _0223FB96\n    mov r0, #3\n    ldr r1, [sp, #0x38]\n    lsl r0, r0, #0x12\n    add r0, r1, r0\n    str r0, [sp, #0x38]\n    add r0, sp, #0x2c\n    bl Sprite_CreateAffine\n    mov r1, #1\n    add r4, r0, #0\n    bl Sprite_SetAnimActiveFlag\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl Sprite_SetAnimSpeed\n    add r0, r4, #0\n    add r1, r6, #0\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #0\n    add sp, #0x80\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov82_0223FBBC(void) {
    /* Original at 0x0223FBBC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r7, #5\n    add r5, r0, #0\n    mov r4, #0\n    lsl r7, r7, #6\n    lsl r0, r4, #4\n    add r6, r5, r0\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl sub_0200AEB0\n    ldr r0, [r6, r7]\n    bl sub_0200B0A8\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #2\n    blo _0223FBC6\n    mov r6, #0x4b\n    mov r4, #0\n    lsl r6, r6, #2\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, r6]\n    bl Destroy2DGfxResObjMan\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _0223FBEA\n    ldr r0, [r5]\n    bl SpriteList_Delete\n    bl OamManager_Free\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov82_0223FC14(void) {
    /* Original at 0x0223FC14 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _0223FC44 ; =ov82_0223FEF0\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    mov r1, #0x10\n    add r0, r2, #0\n    add r2, r1, #0\n    bl ObjCharTransfer_InitEx\n    mov r0, #4\n    mov r1, #0x69\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    add sp, #0x10\n    pop {r4, pc}\n    _0223FC44: .word ov82_0223FEF0"
    );
    #endif
}

void ov82_0223FC48(void) {
    /* Original at 0x0223FC48 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    add r7, r1, #0\n    mov r0, #0x69\n    mov r1, #0x14\n    str r2, [sp, #4]\n    add r5, r3, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r2, r4, #0\n    mov r1, #0x14\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _0223FC64\n    ldr r0, [sp, #0x2c]\n    mov r3, #0\n    str r0, [r4, #0xc]\n    ldr r2, [sp, #4]\n    str r3, [sp]\n    add r0, r6, #0\n    add r1, r7, #0\n    bl ov82_0223FB08\n    str r0, [r4, #0x10]\n    lsl r0, r5, #0xc\n    str r0, [sp, #8]\n    add r0, sp, #0x18\n    ldrh r0, [r0, #0x10]\n    add r1, sp, #8\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x10]\n    bl Sprite_SetMatrix\n    add r0, r4, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

u32 ov82_0223FC9C(void) {
    Sprite_Delete(*((u32*)(r0 + 0x10)));
    Heap_Free(r4);
    return 0;
}

void ov82_0223FCB0(void) {
    Sprite_SetDrawFlag();
}

void ov82_0223FCBC(void) {
    /* Original at 0x0223FCBC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r5, #0xc]\n    add r6, r2, #0\n    cmp r1, #0\n    beq _0223FCD4\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x10]\n    bl Sprite_TryChangeAnimSeq\n    ldr r0, [r5, #0x10]\n    bl Sprite_GetMatrixPtr\n    add r3, r0, #0\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    add r7, r2, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, r7, #0\n    str r0, [r2]\n    lsl r0, r4, #0xc\n    str r0, [sp]\n    lsl r0, r6, #0xc\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x10]\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov82_0223FCFC(void) {
    /* Original at 0x0223FCFC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r1, #1\n    ldr r0, [r5, #0x10]\n    lsl r1, r1, #0xc\n    bl Sprite_SetAnimSpeed\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    bl Sprite_TryChangeAnimSeq\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov82_0223FD18(void) {
    Pokemon_GetIconPalette(r1);
    Sprite_SetPalOffsetRespectVramOffset(*((u32*)(r4 + 0x10)), r0);
}

void ov82_0223FD2C(void) {
    /* Original at 0x0223FD2C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    mov r4, #0\n    ldr r2, _0223FD58 ; =ov82_0223FF00\n    lsl r6, r4, #4\n    lsl r3, r4, #3\n    add r0, r7, #0\n    add r1, r5, r6\n    add r2, r2, r3\n    bl AddWindow\n    add r0, r5, r6\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _0223FD34\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223FD58: .word ov82_0223FF00"
    );
    #endif
}

void ov82_0223FD5C(void) {
    RemoveWindow(0);
}

void ov82_0223FD78(void) {
    /* Original at 0x0223FD78 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r4, r0, #0\n    bl GetWindowBgId\n    add r1, r0, #0\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x69\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r2, _0223FDB4 ; =0x000003D9\n    mov r3, #0xa\n    bl LoadUserFrameGfx2\n    add r0, r4, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r2, _0223FDB4 ; =0x000003D9\n    add r0, r4, #0\n    mov r1, #0\n    mov r3, #0xa\n    bl DrawFrameAndWindow2\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _0223FDB4: .word 0x000003D9"
    );
    #endif
}

void ov82_0223FDB8(void) {
    YesNoPrompt_Create();
}

void ov82_0223FDC0(void) {
    YesNoPrompt_Destroy();
}

void ov82_0223FDC8(void) {
    /* Original at 0x0223FDC8 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    mov r0, #0x6d\n    mov r2, #0\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    str r5, [sp]\n    str r2, [sp, #4]\n    mov r1, #0x18\n    add r0, sp, #0\n    strb r1, [r0, #0x10]\n    mov r1, #0xa\n    strb r1, [r0, #0x11]\n    ldrb r1, [r0, #0x12]\n    mov r3, #0xf\n    bic r1, r3\n    mov r3, #0xf\n    and r3, r4\n    orr r1, r3\n    strb r1, [r0, #0x12]\n    ldrb r3, [r0, #0x12]\n    mov r1, #0xf0\n    bic r3, r1\n    strb r3, [r0, #0x12]\n    strb r2, [r0, #0x13]\n    add r0, r6, #0\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov82_0223FE18(void) {
    YesNoPrompt_HandleInput();
}
