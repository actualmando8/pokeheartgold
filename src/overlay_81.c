/* Decompiled from asm/overlay_81.s */
#include "global.h"

void ov81_0223DD60(void) {
    /* Original at 0x0223DD60 */
    /* Requires manual decompilation - 138 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r6, r1, #0\n    ldr r0, _0223DE90 ; =FS_OVERLAY_ID(OVY_80)\n    mov r1, #2\n    bl HandleLoadOverlay\n    bl ov81_02240D2C\n    mov r0, #3\n    mov r1, #0x64\n    lsl r2, r0, #0x10\n    bl Heap_Create\n    ldr r1, _0223DE94 ; =0x0000048C\n    add r0, r5, #0\n    mov r2, #0x64\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _0223DE94 ; =0x0000048C\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    mov r2, #2\n    mov r1, #0\n    ldr r0, _0223DE98 ; =ov81_02242BC8\n    str r2, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x64\n    add r3, r1, #0\n    bl GF_3DVramMan_Create\n    mov r1, #0x69\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0x64\n    bl BgConfig_Alloc\n    str r0, [r4, #0x4c]\n    str r5, [r4]\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    mov r3, #0x6f\n    mov r2, #0xf\n    ldr r1, [r0]\n    lsl r3, r3, #2\n    str r1, [r4, r3]\n    ldrb r1, [r0, #4]\n    lsl r2, r2, #6\n    strb r1, [r4, #9]\n    ldrb r1, [r0, #5]\n    strb r1, [r4, #0xa]\n    ldrb r1, [r0, #6]\n    strb r1, [r4, #0xb]\n    ldr r1, [r0, #8]\n    str r1, [r4, r2]\n    ldr r5, [r0, #0xc]\n    add r1, r2, #4\n    str r5, [r4, r1]\n    add r0, #0x10\n    add r2, #0x14\n    str r0, [r4, r2]\n    ldr r0, [r4, r3]\n    bl Save_PlayerData_GetOptionsAddr\n    mov r1, #0x6e\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #8\n    str r0, [r4, #0x14]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02240F08\n    cmp r0, #1\n    bne _0223DE10\n    mov r0, #6\n    strb r0, [r4, #0x12]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02243240\n    ldr r1, _0223DE9C ; =0x00000464\n    str r0, [r4, r1]\n    b _0223DE4C\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223DE34\n    mov r0, #2\n    strb r0, [r4, #0x12]\n    mov r0, #3\n    strb r0, [r4, #0x1a]\n    mov r0, #6\n    strb r0, [r4, #0x1b]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_022432DC\n    ldr r1, _0223DE9C ; =0x00000464\n    str r0, [r4, r1]\n    b _0223DE4C\n    mov r0, #3\n    strb r0, [r4, #0x12]\n    mov r0, #4\n    strb r0, [r4, #0x1a]\n    mov r0, #5\n    strb r0, [r4, #0x1b]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_022432AC\n    ldr r1, _0223DE9C ; =0x00000464\n    str r0, [r4, r1]\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223DE5A\n    mov r1, #2\n    b _0223DE5C\n    mov r1, #3\n    ldr r0, _0223DEA0 ; =0x0000047C\n    str r1, [r4, r0]\n    ldr r0, _0223DEA4 ; =0x0000046C\n    add r0, r4, r0\n    bl ov81_02241BB8\n    add r0, r4, #0\n    bl ov81_02240D64\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223DE84\n    add r0, r4, #0\n    bl sub_02096910\n    mov r0, #0\n    str r0, [r6]\n    mov r0, #1\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _0223DE90: .word FS_OVERLAY_ID(OVY_80)\n    _0223DE94: .word 0x0000048C\n    _0223DE98: .word ov81_02242BC8\n    _0223DE9C: .word 0x00000464\n    _0223DEA0: .word 0x0000047C\n    _0223DEA4: .word 0x0000046C"
    );
    #endif
}

void ov81_0223DEA8(void) {
    /* Original at 0x0223DEA8 */
    /* Requires manual decompilation - 360 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, _0223E1A0 ; =0x00000458\n    add r4, r0, #0\n    ldrh r1, [r4, r1]\n    cmp r1, #1\n    bne _0223DEF0\n    ldr r1, [r5]\n    cmp r1, #9\n    bhi _0223DEF0\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223DECC: ; jump table\n    ldrb r1, [r4, #0x13]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1f\n    bne _0223DEF0\n    add r1, r5, #0\n    mov r2, #0xb\n    bl ov81_022404AC\n    add r0, r4, #0\n    bl ov81_02242514\n    ldr r0, [r5]\n    cmp r0, #0xe\n    bhi _0223DF94\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223DF08: ; jump table\n    add r0, r4, #0\n    bl ov81_0223E318\n    cmp r0, #1\n    bne _0223DF94\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_0223EC88\n    cmp r0, #1\n    bne _0223DF52\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl ov81_022404AC\n    b _0223DF56\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov81_0223E520\n    cmp r0, #1\n    bne _0223DF94\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02240F08\n    cmp r0, #1\n    bne _0223DF78\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #3\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #6\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_02241144\n    add r0, r4, #0\n    bl ov81_0223ECE4\n    cmp r0, #1\n    beq _0223DF96\n    b _0223E218\n    ldrb r0, [r4, #0x13]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0223DFAC\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #2\n    bl ov81_022404AC\n    b _0223E218\n    ldrb r0, [r4, #9]\n    bl ov81_02240F18\n    ldrb r1, [r4, #0x11]\n    cmp r1, r0\n    bne _0223DFC4\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #4\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_02240F28\n    cmp r0, #1\n    bne _0223DFDA\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xd\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #3\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_02241144\n    add r0, r4, #0\n    bl ov81_0223F1A4\n    cmp r0, #1\n    bne _0223E0D6\n    ldrb r0, [r4, #9]\n    bl ov81_02240F18\n    ldrb r1, [r4, #0x11]\n    cmp r1, r0\n    bne _0223E00E\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xd\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #5\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_0223F314\n    cmp r0, #1\n    bne _0223E0D6\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #3\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_0223F38C\n    cmp r0, #1\n    bne _0223E0D6\n    ldrb r0, [r4, #0x13]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0223E050\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #2\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_02240F28\n    cmp r0, #1\n    bne _0223E06E\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02240F38\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #7\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xa\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_0223F6A8\n    cmp r0, #1\n    bne _0223E0D6\n    add r0, r4, #0\n    bl ov81_02240F28\n    cmp r0, #1\n    bne _0223E0A2\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02240F38\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #6\n    bl ov81_022404AC\n    b _0223E218\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223E0C0\n    ldrb r1, [r4, #0x13]\n    mov r0, #8\n    mov r2, #0xb\n    bic r1, r0\n    strb r1, [r4, #0x13]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xd\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_0223F770\n    cmp r0, #1\n    beq _0223E0D8\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_02240F28\n    cmp r0, #1\n    bne _0223E0F6\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02240F38\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #9\n    bl ov81_022404AC\n    b _0223E218\n    ldrb r0, [r4, #0x11]\n    cmp r0, #0\n    bne _0223E108\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xa\n    bl ov81_022404AC\n    b _0223E218\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223E11E\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xb\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xd\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_0223FBAC\n    cmp r0, #1\n    bne _0223E218\n    add r0, r4, #0\n    bl ov81_02240F28\n    cmp r0, #1\n    bne _0223E152\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02240F38\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #8\n    bl ov81_022404AC\n    b _0223E218\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223E170\n    ldrb r1, [r4, #0x13]\n    mov r0, #8\n    mov r2, #0xb\n    bic r1, r0\n    strb r1, [r4, #0x13]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xd\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_0223FC74\n    cmp r0, #1\n    bne _0223E218\n    ldrb r0, [r4, #0x11]\n    cmp r0, #0\n    bne _0223E1A4\n    add r0, r4, #0\n    bl ov81_0223E8BC\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #6\n    bl ov81_022404AC\n    b _0223E218\n    nop\n    _0223E1A0: .word 0x00000458\n    add r0, r4, #0\n    bl ov81_0223EA98\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #8\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_02240008\n    cmp r0, #1\n    bne _0223E218\n    ldr r0, _0223E230 ; =0x00000458\n    ldrh r0, [r4, r0]\n    cmp r0, #1\n    bne _0223E1D4\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xe\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xc\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_02240048\n    cmp r0, #1\n    bne _0223E218\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xd\n    bl ov81_022404AC\n    b _0223E218\n    add r0, r4, #0\n    bl ov81_02240088\n    cmp r0, #1\n    bne _0223E218\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov81_022400D0\n    cmp r0, #1\n    bne _0223E218\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xc\n    bl ov81_022404AC\n    mov r0, #0x71\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov81_02242C48\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0223E230: .word 0x00000458"
    );
    #endif
}

void ov81_0223E234(void) {
    /* Original at 0x0223E234 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl PaletteData_GetSelectedBuffersBitmask\n    cmp r0, #0\n    beq _0223E260\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl PaletteData_ScheduleFadeTaskEndIfNoSelectedBuffers\n    ldr r0, _0223E308 ; =0x00000478\n    mov r1, #0xff\n    str r1, [r4, r0]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02240F08\n    cmp r0, #1\n    bne _0223E29A\n    ldrb r0, [r4, #9]\n    mov r7, #0\n    bl ov81_02240F18\n    cmp r0, #0\n    ble _0223E2CE\n    add r6, r4, #0\n    add r5, r7, #0\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r1, [r6, r0]\n    add r0, #0xc\n    ldr r0, [r4, r0]\n    add r6, r6, #2\n    strh r1, [r0, r5]\n    ldrb r0, [r4, #9]\n    add r5, r5, #2\n    add r7, r7, #1\n    bl ov81_02240F18\n    cmp r7, r0\n    blt _0223E27C\n    b _0223E2CE\n    mov r7, #0xf2\n    lsl r7, r7, #2\n    mov r6, #0\n    add r0, r7, #0\n    add r3, r4, #0\n    add r5, r6, #0\n    add r0, #0xc\n    ldrh r2, [r3, r7]\n    ldr r1, [r4, r0]\n    add r6, r6, #1\n    strh r2, [r1, r5]\n    add r3, r3, #2\n    add r5, r5, #2\n    cmp r6, #2\n    blt _0223E2A8\n    ldrb r0, [r4, #0x13]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1f\n    bne _0223E2CE\n    mov r0, #0xf5\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    mov r2, #0xff\n    strh r2, [r1]\n    ldr r0, [r4, r0]\n    strh r2, [r0, #2]\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldr r0, _0223E30C ; =0x0000046C\n    ldr r0, [r4, r0]\n    bl ov81_02241BC8\n    ldr r0, _0223E310 ; =0x00000464\n    ldr r0, [r4, r0]\n    bl ov81_02243220\n    add r0, r4, #0\n    bl ov81_02240BB0\n    ldr r0, [sp]\n    bl OverlayManager_FreeData\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0x64\n    bl Heap_Destroy\n    ldr r0, _0223E314 ; =FS_OVERLAY_ID(OVY_80)\n    bl UnloadOverlayByID\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223E308: .word 0x00000478\n    _0223E30C: .word 0x0000046C\n    _0223E310: .word 0x00000464\n    _0223E314: .word FS_OVERLAY_ID(OVY_80)"
    );
    #endif
}

void ov81_0223E318(void) {
    /* Original at 0x0223E318 */
    /* Requires manual decompilation - 223 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #6\n    bhi _0223E3EE\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223E330: ; jump table\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223E352\n    bl sub_02037BEC\n    mov r0, #0xed\n    bl sub_02037AC0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E508\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223E37A\n    mov r0, #0xed\n    bl sub_02037B38\n    cmp r0, #1\n    bne _0223E3EE\n    bl sub_02037BEC\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E508\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E508\n    ldrb r0, [r4, #0x12]\n    mov r6, #0\n    cmp r0, #0\n    ble _0223E3AA\n    mov r7, #0x36\n    add r5, r4, #0\n    lsl r7, r7, #4\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ov81_02242F30\n    ldr r0, [r5, r7]\n    bl ov81_02242F60\n    ldrb r0, [r4, #0x12]\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, r0\n    blt _0223E390\n    mov r3, #0x42\n    ldr r0, [r4, #0x4c]\n    mov r1, #6\n    mov r2, #0\n    lsl r3, r3, #2\n    bl BgSetPosTextAndCommit\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #6\n    mov r2, #1\n    bl Pokepic_SetAttr\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #1\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E508\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _0223E3F0\n    b _0223E508\n    ldr r0, _0223E510 ; =0x00000611\n    bl PlaySE\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E508\n    bl ov81_022404B4\n    cmp r0, #1\n    bne _0223E508\n    ldr r0, _0223E510 ; =0x00000611\n    mov r1, #0\n    bl StopSE\n    ldr r0, _0223E514 ; =0x00000678\n    bl PlaySE\n    ldrb r0, [r4, #0x12]\n    mov r6, #0\n    cmp r0, #0\n    ble _0223E438\n    mov r7, #0x36\n    add r5, r4, #0\n    lsl r7, r7, #4\n    ldr r0, [r5, r7]\n    mov r1, #4\n    bl ov81_02242F94\n    ldrb r0, [r4, #0x12]\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, r0\n    blt _0223E426\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02240658\n    mov r0, #8\n    str r0, [r4, #0x14]\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E508\n    mov r0, #0xe\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl ov81_02242DD8\n    cmp r0, #1\n    beq _0223E508\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E508\n    ldrb r0, [r4, #0x19]\n    cmp r0, #0\n    bne _0223E4E2\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02240F08\n    cmp r0, #1\n    bne _0223E4A8\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #6\n    mov r2, #0\n    bl Pokepic_SetAttr\n    ldr r0, _0223E518 ; =0x0000FFFF\n    mov r1, #0x10\n    str r0, [sp]\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r2, #0\n    mov r3, #1\n    bl Pokepic_StartPaletteFadeAll\n    b _0223E4E2\n    ldr r0, _0223E51C ; =0x0000047C\n    mov r6, #0\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bls _0223E4CE\n    ldr r7, _0223E51C ; =0x0000047C\n    add r5, r4, #0\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #6\n    mov r2, #0\n    bl Pokepic_SetAttr\n    ldr r0, [r4, r7]\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, r0\n    blo _0223E4B6\n    ldr r0, _0223E518 ; =0x0000FFFF\n    mov r1, #0x10\n    str r0, [sp]\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r2, #0\n    mov r3, #1\n    bl Pokepic_StartPaletteFadeAll\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Pokepic_ResumePaletteFade\n    ldrb r0, [r4, #0x19]\n    add r0, r0, #1\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #0x19]\n    cmp r0, #2\n    blo _0223E508\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    add r0, r4, #0\n    bl ov81_02241398\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223E510: .word 0x00000611\n    _0223E514: .word 0x00000678\n    _0223E518: .word 0x0000FFFF\n    _0223E51C: .word 0x0000047C"
    );
    #endif
}

void ov81_0223E520(void) {
    /* Original at 0x0223E520 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #0\n    beq _0223E532\n    cmp r1, #1\n    beq _0223E59E\n    b _0223E5AC\n    mov r1, #0\n    bl ov81_02240F08\n    cmp r0, #1\n    bne _0223E544\n    add r0, r4, #0\n    bl ov81_0223E5B4\n    b _0223E54A\n    add r0, r4, #0\n    bl ov81_0223E8BC\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223E56C\n    mov r2, #0\n    add r1, r4, #0\n    add r0, r4, #0\n    add r1, #0x60\n    add r3, r2, #0\n    str r2, [sp]\n    bl ov81_0224093C\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    ldrb r0, [r4, #0x13]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0223E58E\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #1\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldrb r1, [r4, #0x13]\n    mov r0, #0x10\n    orr r0, r1\n    strb r0, [r4, #0x13]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E5AC\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0223E5AC\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov81_0223E5B4(void) {
    /* Original at 0x0223E5B4 */
    /* Requires manual decompilation - 311 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    ldrb r0, [r5, #9]\n    bl ov80_02236DD4\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    mov r1, #0\n    bl ov81_02240F38\n    add r0, r5, #0\n    bl ov81_02241524\n    ldr r1, _0223E864 ; =0x00000464\n    add r2, sp, #0x28\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r3, sp, #0x24\n    bl ov81_02243228\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, [sp, #0x28]\n    mov r2, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    add r3, r1, #0\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov81_02242D18\n    mov r1, #0xe2\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r1, #0xdc\n    ldr r0, [r5, r1]\n    mov r1, #6\n    add r2, sp, #0x28\n    add r3, sp, #0x24\n    bl ov81_02243228\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, [sp, #0x28]\n    mov r2, #3\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    add r3, r1, #0\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov81_02242D18\n    mov r1, #0xe3\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r5, #0\n    add r1, sp, #0x28\n    add r2, sp, #0x24\n    bl ov81_02241CA0\n    mov r2, #0\n    str r2, [sp]\n    ldr r0, [sp, #0x28]\n    mov r1, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    add r3, r2, #0\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov81_02242CBC\n    mov r1, #0x39\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov81_02241F50\n    add r0, r5, #0\n    bl ov81_02241FEC\n    add r0, r5, #0\n    bl ov81_022420B4\n    add r0, r5, #0\n    bl ov81_0224218C\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x50\n    str r0, [sp, #4]\n    mov r0, #0xc\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #4\n    add r3, r2, #0\n    bl ov81_02242D18\n    mov r1, #0xe5\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x50\n    str r0, [sp, #4]\n    mov r0, #0xc\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #5\n    add r3, r2, #0\n    bl ov81_02242D18\n    mov r2, #0xe6\n    lsl r2, r2, #2\n    add r1, r2, #0\n    str r0, [r5, r2]\n    add r1, #0x28\n    add r2, #0xd0\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    add r0, r5, #0\n    mov r3, #6\n    bl ov81_02242218\n    ldr r1, _0223E868 ; =0x00000468\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    mov r2, #6\n    bl ov81_02242300\n    ldr r0, _0223E86C ; =0x00000474\n    mov r1, #0\n    ldr r0, [r5, r0]\n    mov r2, #7\n    add r3, r1, #0\n    bl sub_020196E8\n    mov r2, #0\n    add r1, r5, #0\n    str r2, [sp]\n    add r0, r5, #0\n    add r1, #0x50\n    add r3, r2, #0\n    bl ov81_022408C4\n    ldrb r0, [r5, #0x11]\n    mov r6, #0\n    cmp r0, #0\n    ble _0223E740\n    mov r7, #0x36\n    add r4, r5, #0\n    lsl r7, r7, #4\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r0, [r4, r0]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov81_02242F48\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r0, [r4, r0]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ov81_02242FB0\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r0, [r4, r0]\n    mov r1, #1\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, r7]\n    bl ov81_02242F94\n    ldrb r0, [r5, #0x11]\n    add r6, r6, #1\n    add r4, r4, #2\n    cmp r6, r0\n    blt _0223E6FA\n    mov r0, #0x6e\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0xc0\n    bl ov81_02243028\n    ldrb r2, [r5, #0x11]\n    add r0, r5, #0\n    mov r1, #0\n    add r2, r2, #1\n    bl ov81_022408A0\n    add r0, r5, #0\n    mov r1, #0\n    bl ov81_0224086C\n    strb r0, [r5, #0x10]\n    ldrb r0, [r5, #0x13]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0223E85A\n    add r0, r5, #0\n    bl ov81_02241D0C\n    str r0, [sp, #0x1c]\n    ldrb r0, [r5, #0x11]\n    mov r6, #0\n    cmp r0, #0\n    ble _0223E79E\n    mov r7, #0x6b\n    add r4, r5, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    mov r1, #6\n    mov r2, #0\n    bl Pokepic_SetAttr\n    ldrb r0, [r5, #0x11]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r0\n    blt _0223E78A\n    ldr r0, [sp, #0x1c]\n    mov r2, #0\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #6\n    bl Pokepic_SetAttr\n    ldr r2, _0223E868 ; =0x00000468\n    ldr r1, [sp, #0x1c]\n    ldr r2, [r5, r2]\n    add r0, r5, #0\n    mov r3, #0\n    bl ov81_02241E68\n    add r0, r5, #0\n    bl ov81_02241FEC\n    ldr r1, _0223E870 ; =0x0000047C\n    ldr r0, [sp, #0x1c]\n    ldr r1, [r5, r1]\n    add r2, sp, #0x28\n    add r3, sp, #0x24\n    bl ov81_02241C84\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #0x28]\n    ldr r2, [sp, #0x24]\n    bl ov81_02242D94\n    add r0, r5, #0\n    mov r1, #0xff\n    bl ov81_02240658\n    add r0, r5, #0\n    bl ov81_02241450\n    ldrb r0, [r5, #0x18]\n    cmp r0, #0\n    beq _0223E860\n    ldr r0, [sp, #0x18]\n    mov r4, #0\n    cmp r0, #0\n    ble _0223E860\n    add r7, r5, #0\n    add r6, r5, #0\n    add r7, #0x50\n    add r0, r4, #5\n    lsl r0, r0, #4\n    str r0, [sp, #0x20]\n    add r0, r7, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldrb r0, [r5, #0x18]\n    cmp r4, r0\n    bge _0223E844\n    mov r0, #0xf\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, _0223E874 ; =0x0000045A\n    ldr r1, [sp, #0x20]\n    ldrh r0, [r6, r0]\n    mov r2, #0\n    add r1, r7, r1\n    str r0, [sp, #0x10]\n    ldr r0, _0223E878 ; =0x0000045E\n    add r3, r2, #0\n    ldrh r0, [r6, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl ov81_02240AD8\n    ldr r0, [sp, #0x20]\n    add r0, r7, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, [sp, #0x18]\n    add r4, r4, #1\n    add r6, r6, #2\n    cmp r4, r0\n    blt _0223E804\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov81_022414E0\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    _0223E864: .word 0x00000464\n    _0223E868: .word 0x00000468\n    _0223E86C: .word 0x00000474\n    _0223E870: .word 0x0000047C\n    _0223E874: .word 0x0000045A\n    _0223E878: .word 0x0000045E"
    );
    #endif
}

void ov81_0223E87C(void) {
    /* Original at 0x0223E87C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldrb r0, [r6, #0x12]\n    mov r4, #0\n    cmp r0, #0\n    ble _0223E8AE\n    mov r7, #0x36\n    add r5, r6, #0\n    lsl r7, r7, #4\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov81_022412C4\n    mov r1, #0x36\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    ldr r0, [r5, r7]\n    mov r1, #1\n    bl ov81_02242EB8\n    ldrb r0, [r6, #0x12]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r0\n    blt _0223E88E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_0223E8B0(void) {
    ov81_02241DDC();
}

void ov81_0223E8BC(void) {
    /* Original at 0x0223E8BC */
    /* Requires manual decompilation - 205 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    mov r1, #0\n    add r5, r0, #0\n    bl ov81_02240F38\n    ldr r1, _0223EA88 ; =0x00000464\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov81_02243370\n    ldr r1, _0223EA88 ; =0x00000464\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov81_0224185C\n    ldr r1, _0223EA88 ; =0x00000464\n    add r2, sp, #0x10\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r3, sp, #0xc\n    bl ov81_02243228\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, [sp, #0x10]\n    mov r2, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    add r3, r1, #0\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov81_02242D18\n    mov r1, #0xe2\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r2, #0\n    lsr r0, r1, #1\n    str r2, [sp]\n    str r2, [sp, #4]\n    add r0, r5, r0\n    mov r1, #1\n    add r3, r2, #0\n    str r2, [sp, #8]\n    bl ov81_02242CBC\n    mov r1, #0x39\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov81_02241D38\n    ldr r0, _0223EA88 ; =0x00000464\n    mov r1, #4\n    ldr r0, [r5, r0]\n    add r2, sp, #0x10\n    add r3, sp, #0xc\n    bl ov81_02243228\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, [sp, #0x10]\n    mov r2, #3\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    add r3, r1, #0\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov81_02242D18\n    mov r1, #0xe3\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov81_02241F50\n    add r0, r5, #0\n    mov r1, #0\n    bl ov81_02242058\n    add r0, r5, #0\n    bl ov81_022420B4\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x50\n    str r0, [sp, #4]\n    mov r0, #0xc\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #4\n    add r3, r2, #0\n    bl ov81_02242D18\n    mov r1, #0xe5\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x50\n    str r0, [sp, #4]\n    mov r0, #0xc\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #5\n    add r3, r2, #0\n    bl ov81_02242D18\n    mov r2, #0xe6\n    lsl r2, r2, #2\n    add r1, r2, #0\n    str r0, [r5, r2]\n    add r1, #0x28\n    add r2, #0xd0\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    add r0, r5, #0\n    mov r3, #4\n    bl ov81_02242218\n    mov r1, #0xf\n    lsl r1, r1, #6\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov81_022423D0\n    ldr r0, _0223EA8C ; =0x00000474\n    mov r1, #0\n    ldr r0, [r5, r0]\n    mov r2, #7\n    add r3, r1, #0\n    bl sub_020196E8\n    mov r2, #0\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x50\n    add r3, r2, #0\n    str r2, [sp]\n    bl ov81_022408C4\n    mov r0, #0x6e\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0xc0\n    bl ov81_02243028\n    add r0, r5, #0\n    mov r1, #9\n    bl ov81_0224086C\n    strb r0, [r5, #0x10]\n    ldrb r0, [r5, #0x13]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0223EA70\n    ldr r0, _0223EA90 ; =0x0000047C\n    mov r6, #0\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    bls _0223EA38\n    add r4, r5, #0\n    add r7, r0, #0\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #6\n    mov r2, #0\n    bl Pokepic_SetAttr\n    ldr r1, [r5, r7]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r1\n    blo _0223EA20\n    ldr r0, _0223EA94 ; =0x00000468\n    add r2, sp, #0x10\n    ldr r0, [r5, r0]\n    add r3, sp, #0xc\n    bl ov81_02241C84\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0xc]\n    bl ov81_02242D94\n    add r0, r5, #0\n    mov r1, #0xff\n    bl ov81_02240658\n    add r0, r5, #0\n    bl ov81_0224174C\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ov81_02242E08\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov81_022417B4\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ov81_02242E08\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223EA88: .word 0x00000464\n    _0223EA8C: .word 0x00000474\n    _0223EA90: .word 0x0000047C\n    _0223EA94: .word 0x00000468"
    );
    #endif
}

void ov81_0223EA98(void) {
    /* Original at 0x0223EA98 */
    /* Requires manual decompilation - 145 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    ldr r1, _0223EBD8 ; =0x00000464\n    add r4, r0, #0\n    ldr r1, [r4, r1]\n    bl ov81_02243398\n    ldr r1, _0223EBD8 ; =0x00000464\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov81_02241A98\n    ldr r0, _0223EBD8 ; =0x00000464\n    mov r1, #0\n    ldr r0, [r4, r0]\n    add r2, sp, #0x10\n    add r3, sp, #0xc\n    bl ov81_02243228\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, [sp, #0x10]\n    mov r2, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    add r3, r1, #0\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov81_02242D18\n    mov r1, #0xe2\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #0\n    add r0, #0xe0\n    add r1, #0xf4\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    add r2, sp, #0x10\n    add r3, sp, #0xc\n    bl ov81_02241C84\n    mov r2, #0\n    str r2, [sp]\n    ldr r0, [sp, #0x10]\n    mov r1, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    add r3, r2, #0\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov81_02242CBC\n    mov r1, #0x39\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r1, #0xd4\n    ldr r0, [r4, r1]\n    mov r1, #6\n    add r2, sp, #0x10\n    add r3, sp, #0xc\n    bl ov81_02243228\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, [sp, #0x10]\n    mov r2, #3\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    add r3, r1, #0\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov81_02242D18\n    mov r1, #0xe3\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov81_02241F50\n    add r0, r4, #0\n    mov r1, #1\n    bl ov81_02242058\n    add r0, r4, #0\n    bl ov81_022420B4\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x50\n    str r0, [sp, #4]\n    mov r0, #0xc\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #4\n    add r3, r2, #0\n    bl ov81_02242D18\n    mov r1, #0xe5\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x50\n    str r0, [sp, #4]\n    mov r0, #0xc\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #5\n    add r3, r2, #0\n    bl ov81_02242D18\n    mov r1, #0xe6\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r1, #0x2c\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #0\n    mov r3, #4\n    bl ov81_02242218\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02242420\n    ldr r0, _0223EBDC ; =0x00000474\n    mov r1, #0\n    ldr r0, [r4, r0]\n    mov r2, #7\n    add r3, r1, #0\n    bl sub_020196E8\n    mov r2, #0\n    add r1, r4, #0\n    add r0, r4, #0\n    add r1, #0x50\n    add r3, r2, #0\n    str r2, [sp]\n    bl ov81_022408C4\n    ldr r0, _0223EBE0 ; =0x00000468\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov81_022419E0\n    add sp, #0x14\n    pop {r3, r4, pc}\n    nop\n    _0223EBD8: .word 0x00000464\n    _0223EBDC: .word 0x00000474\n    _0223EBE0: .word 0x00000468"
    );
    #endif
}

void ov81_0223EBE4(void) {
    /* Original at 0x0223EBE4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x12]\n    mov r6, #0\n    cmp r0, #0\n    ble _0223EC40\n    mov r7, #0x36\n    add r4, r5, #0\n    lsl r7, r7, #4\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov81_022412C4\n    mov r1, #0x36\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r4, r7]\n    mov r1, #1\n    bl ov81_02242EB8\n    ldrb r0, [r5, #0x13]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    bne _0223EC36\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov81_02242F48\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242FB0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242F94\n    ldrb r0, [r5, #0x12]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r0\n    blt _0223EBF6\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_0223EC44(void) {
    /* Original at 0x0223EC44 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r1, #1\n    add r6, r0, #0\n    bl ov81_02241DDC\n    ldr r0, _0223EC84 ; =0x0000047C\n    mov r4, #0\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    bls _0223EC80\n    ldr r7, _0223EC84 ; =0x0000047C\n    add r5, r6, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r4, #0\n    mov r3, #1\n    bl ov81_02241E68\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #6\n    mov r2, #1\n    bl Pokepic_SetAttr\n    ldr r0, [r6, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r0\n    blo _0223EC5C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223EC84: .word 0x0000047C"
    );
    #endif
}

void ov81_0223EC88(void) {
    /* Original at 0x0223EC88 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #8]\n    cmp r0, #0\n    bne _0223ECDA\n    ldr r0, [r4, #4]\n    bl OverlayManager_Run\n    cmp r0, #1\n    bne _0223ECDA\n    mov r1, #7\n    lsl r1, r1, #6\n    ldr r0, [r4, r1]\n    ldrb r2, [r0, #0x14]\n    mov r0, #0xf6\n    lsl r0, r0, #2\n    str r2, [r4, r0]\n    ldr r2, [r4, r1]\n    add r0, #0x90\n    ldrb r2, [r2, #0x14]\n    str r2, [r4, r0]\n    ldr r0, [r4, r1]\n    bl Heap_Free\n    ldr r0, [r4, #4]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4, #4]\n    add r0, r4, #0\n    bl ov81_02240CD4\n    ldrb r1, [r4, #0x13]\n    mov r0, #0x40\n    bic r1, r0\n    strb r1, [r4, #0x13]\n    ldr r0, _0223ECE0 ; =0x00000478\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0223ECE0: .word 0x00000478"
    );
    #endif
}

void ov81_0223ECE4(void) {
    /* Original at 0x0223ECE4 */
    /* Requires manual decompilation - 254 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #8\n    bhi _0223ED5A\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223ECFC: ; jump table\n    mov r0, #1\n    strb r0, [r4, #8]\n    ldrb r1, [r4, #0x13]\n    mov r0, #2\n    bic r1, r0\n    strb r1, [r4, #0x13]\n    b _0223EF42\n    ldr r0, _0223EF48 ; =0x00000464\n    ldr r0, [r4, r0]\n    bl GridInputHandler_HandleInput_NoHold\n    add r5, r0, #0\n    mov r0, #2\n    mvn r0, r0\n    cmp r5, r0\n    bhi _0223ED52\n    bhs _0223EDDA\n    cmp r5, #8\n    bhi _0223ED5A\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223ED40: ; jump table\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    beq _0223EE12\n    b _0223EF42\n    ldr r0, _0223EF4C ; =0x000005DC\n    bl PlaySE\n    ldr r0, _0223EF50 ; =0x00000468\n    str r5, [r4, r0]\n    add r0, r4, #0\n    bl ov81_02241C0C\n    mov r2, #0xf\n    lsl r2, r2, #6\n    ldr r1, [r4, r2]\n    add r2, #0xa8\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #6\n    bl ov81_02242218\n    ldr r1, _0223EF50 ; =0x00000468\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    mov r2, #6\n    bl ov81_02242300\n    add r0, r4, #0\n    bl ov81_02241450\n    b _0223EF42\n    ldr r0, _0223EF4C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xc\n    mov r3, #6\n    bl ov81_022425C4\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0223EF42\n    ldr r0, _0223EF4C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x12\n    mov r2, #0xc\n    mov r3, #7\n    bl ov81_022425C4\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0223EF42\n    ldr r0, _0223EF4C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0xf\n    mov r3, #8\n    bl ov81_022425C4\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0223EF42\n    ldr r0, _0223EF4C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov81_02241C0C\n    ldr r0, _0223EF48 ; =0x00000464\n    ldr r0, [r4, r0]\n    bl GridInputHandler_GetNextInput\n    mov r1, #0xf\n    lsl r1, r1, #6\n    add r2, r0, #0\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r3, #6\n    bl ov81_02242218\n    ldr r0, _0223EF48 ; =0x00000464\n    ldr r0, [r4, r0]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #6\n    bl ov81_02242300\n    b _0223EF42\n    ldr r0, _0223EF48 ; =0x00000464\n    ldr r0, [r4, r0]\n    bl GridInputHandler_GetNextInput\n    cmp r0, #6\n    blo _0223EE30\n    ldr r0, _0223EF4C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov81_022414E0\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    ldrb r0, [r4, #0x11]\n    cmp r0, #0\n    bne _0223EE38\n    b _0223EF42\n    ldr r0, _0223EF4C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov81_0223EF5C\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223EE58\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov81_02240FA4\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    bl ov81_022425EC\n    b _0223EF42\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0223EF42\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl PaletteData_GetSelectedBuffersBitmask\n    cmp r0, #0\n    beq _0223EE8C\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl PaletteData_ScheduleFadeTaskEndIfNoSelectedBuffers\n    ldr r0, _0223EF54 ; =0x00000478\n    mov r1, #0xff\n    str r1, [r4, r0]\n    b _0223EF42\n    add r0, r4, #0\n    bl ov81_02240E78\n    add r0, r4, #0\n    bl ov81_02240BB0\n    mov r1, #7\n    lsl r1, r1, #6\n    ldr r0, _0223EF58 ; =gOverlayTemplate_PokemonSummary\n    ldr r1, [r4, r1]\n    mov r2, #0x64\n    bl OverlayManager_New\n    str r0, [r4, #4]\n    ldrb r1, [r4, #0x13]\n    mov r0, #2\n    add sp, #0xc\n    orr r0, r1\n    strb r0, [r4, #0x13]\n    mov r0, #1\n    pop {r4, r5, pc}\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _0223EF42\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0223EF42\n    mov r0, #1\n    strb r0, [r4, #8]\n    b _0223EF42\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldrb r1, [r4, #0x13]\n    mov r0, #0x40\n    orr r0, r1\n    strb r0, [r4, #0x13]\n    mov r0, #3\n    strb r0, [r4, #8]\n    b _0223EF42\n    bl ov81_022414E0\n    ldr r0, _0223EF50 ; =0x00000468\n    ldr r0, [r4, r0]\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov81_02242F40\n    cmp r0, #0\n    bne _0223EF18\n    add r0, r4, #0\n    bl ov81_0223F038\n    b _0223EF1E\n    add r0, r4, #0\n    bl ov81_0223F0BC\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223EF32\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov81_02240FA4\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    bl ov81_022414E0\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0223EF48: .word 0x00000464\n    _0223EF4C: .word 0x000005DC\n    _0223EF50: .word 0x00000468\n    _0223EF54: .word 0x00000478\n    _0223EF58: .word gOverlayTemplate_PokemonSummary"
    );
    #endif
}

void ov81_0223EF5C(void) {
    /* Original at 0x0223EF5C */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0x11]\n    mov r2, #1\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #6\n    bl Pokepic_SetAttr\n    ldrb r0, [r4, #0x11]\n    add r1, r4, #0\n    add r1, #0x50\n    add r0, r0, #2\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldrb r0, [r4, #0x11]\n    add r1, r4, #0\n    add r1, #0x50\n    add r0, r0, #2\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl ScheduleWindowCopyToVram\n    ldrb r0, [r4, #0x11]\n    mov r1, #0\n    sub r0, r0, #1\n    strb r0, [r4, #0x11]\n    ldrb r2, [r4, #0x11]\n    add r0, r4, #0\n    add r2, r2, #1\n    bl ov81_022408A0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    ldrb r0, [r4, #0x11]\n    lsl r0, r0, #1\n    add r1, r4, r0\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r1, [r1, r0]\n    sub r0, #0x68\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r0, [r1, r0]\n    bl ov81_02242F54\n    ldrb r0, [r4, #0x11]\n    lsl r0, r0, #1\n    add r1, r4, r0\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r1, [r1, r0]\n    sub r0, #0x68\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov81_02242FB0\n    ldrb r0, [r4, #0x11]\n    lsl r0, r0, #1\n    add r1, r4, r0\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r1, [r1, r0]\n    sub r0, #0x68\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ov81_02242F94\n    ldrb r0, [r4, #0x11]\n    mov r2, #0\n    lsl r0, r0, #1\n    add r1, r4, r0\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    strh r2, [r1, r0]\n    add r0, r4, #0\n    bl ov81_02241C0C\n    add r0, r4, #0\n    bl ov81_02241FEC\n    add r0, r4, #0\n    bl ov81_0224218C\n    ldr r0, _0223F034 ; =0x00000464\n    ldr r0, [r4, r0]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #6\n    bl ov81_02242300\n    pop {r4, pc}\n    nop\n    _0223F034: .word 0x00000464"
    );
    #endif
}

void ov81_0223F038(void) {
    /* Original at 0x0223F038 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _0223F0B8 ; =0x00000468\n    ldr r0, [r4, r0]\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov81_02242F48\n    ldr r0, _0223F0B8 ; =0x00000468\n    ldr r0, [r4, r0]\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ov81_02242FB0\n    ldr r0, _0223F0B8 ; =0x00000468\n    ldr r0, [r4, r0]\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov81_02242F94\n    ldrb r1, [r4, #0x11]\n    ldr r0, _0223F0B8 ; =0x00000468\n    ldr r2, [r4, r0]\n    lsl r1, r1, #1\n    add r1, r4, r1\n    sub r0, #0xa0\n    strh r2, [r1, r0]\n    ldrb r0, [r4, #0x11]\n    add r0, r0, #1\n    strb r0, [r4, #0x11]\n    ldrb r0, [r4, #9]\n    ldrb r5, [r4, #0x11]\n    bl ov81_02240F18\n    cmp r5, r0\n    beq _0223F0AA\n    add r0, r4, #0\n    mov r1, #0\n    add r2, r5, #1\n    bl ov81_022408A0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    add r0, r4, #0\n    bl ov81_02241FEC\n    add r0, r4, #0\n    bl ov81_0224218C\n    pop {r3, r4, r5, pc}\n    _0223F0B8: .word 0x00000468"
    );
    #endif
}

void ov81_0223F0BC(void) {
    /* Original at 0x0223F0BC */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0223F1A0 ; =0x00000468\n    ldr r0, [r5, r0]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov81_02242F54\n    ldr r0, _0223F1A0 ; =0x00000468\n    ldr r0, [r5, r0]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov81_02242FB0\n    ldr r0, _0223F1A0 ; =0x00000468\n    ldr r0, [r5, r0]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ov81_02242F94\n    ldrb r0, [r5, #0x11]\n    cmp r0, #2\n    blo _0223F130\n    mov r2, #0xf2\n    lsl r2, r2, #2\n    add r0, r2, #0\n    add r0, #0xa0\n    ldrh r1, [r5, r2]\n    ldr r0, [r5, r0]\n    cmp r1, r0\n    bne _0223F130\n    add r0, r2, #2\n    ldrh r0, [r5, r0]\n    mov r1, #0\n    add r3, r1, #0\n    strh r0, [r5, r2]\n    ldrh r2, [r5, r2]\n    add r0, r5, #0\n    bl ov81_02241E68\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #6\n    mov r2, #0\n    bl Pokepic_SetAttr\n    ldrb r0, [r5, #0x11]\n    mov r2, #0\n    sub r0, r0, #1\n    strb r0, [r5, #0x11]\n    ldrb r0, [r5, #0x11]\n    lsl r0, r0, #1\n    add r1, r5, r0\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    strh r2, [r1, r0]\n    ldrb r0, [r5, #9]\n    bl ov81_02240F18\n    add r7, r0, #0\n    mov r4, #0\n    cmp r7, #0\n    ble _0223F168\n    add r6, r5, #0\n    add r6, #0x50\n    add r0, r4, #2\n    lsl r0, r0, #4\n    add r0, r6, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r4, r4, #1\n    cmp r4, r7\n    blt _0223F156\n    ldrb r2, [r5, #0x11]\n    add r0, r5, #0\n    mov r1, #0\n    add r2, r2, #1\n    bl ov81_022408A0\n    add r0, r5, #0\n    mov r1, #0\n    bl ov81_0224086C\n    strb r0, [r5, #0x10]\n    add r0, r5, #0\n    bl ov81_02241C0C\n    add r0, r5, #0\n    bl ov81_02241FEC\n    add r0, r5, #0\n    bl ov81_0224218C\n    ldr r1, _0223F1A0 ; =0x00000468\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    mov r2, #6\n    bl ov81_02242300\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223F1A0: .word 0x00000468"
    );
    #endif
}

void ov81_0223F1A4(void) {
    /* Original at 0x0223F1A4 */
    /* Requires manual decompilation - 153 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #9]\n    bl ov80_02236DD4\n    add r2, r0, #0\n    ldrb r0, [r4, #8]\n    cmp r0, #7\n    bhi _0223F254\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223F1C2: ; jump table\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223F30C\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223F30C\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223F30C\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223F30C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_022408A0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    ldr r0, _0223F310 ; =0x0000046C\n    ldr r1, [r4, #0x4c]\n    ldr r0, [r4, r0]\n    bl ov81_02241BD0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov81_02242694\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223F30C\n    ldr r0, _0223F310 ; =0x0000046C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _0223F256\n    cmp r0, #2\n    beq _0223F26E\n    b _0223F30C\n    ldr r0, _0223F310 ; =0x0000046C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02242694\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223F30C\n    ldr r0, _0223F310 ; =0x0000046C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02242694\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    ldrb r0, [r4, #0x11]\n    mov r2, #0\n    sub r0, r0, #1\n    strb r0, [r4, #0x11]\n    ldrb r0, [r4, #0x11]\n    lsl r0, r0, #1\n    add r1, r4, r0\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    strh r2, [r1, r0]\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223F2BE\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov81_02240FA4\n    mov r0, #1\n    pop {r4, pc}\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #0\n    bne _0223F2D0\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov81_02240FA4\n    cmp r0, #1\n    bne _0223F30C\n    add r0, r4, #0\n    mov r1, #2\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    bl sub_02037BEC\n    mov r0, #0xa4\n    bl sub_02037AC0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223F30C\n    mov r0, #0xa4\n    bl sub_02037B38\n    cmp r0, #1\n    bne _0223F30C\n    bl sub_02037BEC\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _0223F310: .word 0x0000046C"
    );
    #endif
}

void ov81_0223F314(void) {
    ov81_0223F320();
}

void ov81_0223F320(void) {
    /* Original at 0x0223F320 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #9]\n    bl ov80_02236DD4\n    ldr r0, _0223F388 ; =0x00000468\n    ldr r0, [r4, r0]\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov81_02242F54\n    ldr r0, _0223F388 ; =0x00000468\n    ldr r0, [r4, r0]\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov81_02242FB0\n    ldr r0, _0223F388 ; =0x00000468\n    ldr r0, [r4, r0]\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ov81_02242F94\n    ldrb r2, [r4, #0x11]\n    add r0, r4, #0\n    mov r1, #0\n    add r2, r2, #1\n    bl ov81_022408A0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    add r0, r4, #0\n    bl ov81_02241FEC\n    add r0, r4, #0\n    bl ov81_0224218C\n    pop {r4, pc}\n    _0223F388: .word 0x00000468"
    );
    #endif
}

void ov81_0223F38C(void) {
    /* Original at 0x0223F38C */
    /* Requires manual decompilation - 304 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #9\n    bhi _0223F408\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223F3A4: ; jump table\n    mov r1, #0\n    bl ov81_02240F38\n    mov r0, #1\n    strb r0, [r4, #8]\n    ldrb r1, [r4, #0x13]\n    mov r0, #2\n    bic r1, r0\n    strb r1, [r4, #0x13]\n    b _0223F666\n    ldr r0, _0223F66C ; =0x00000464\n    ldr r0, [r4, r0]\n    bl GridInputHandler_HandleInput_NoHold\n    add r5, r0, #0\n    mov r0, #2\n    mvn r0, r0\n    cmp r5, r0\n    bhi _0223F3FE\n    bhs _0223F4DC\n    cmp r5, #6\n    bhi _0223F408\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223F3F0: ; jump table\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    bne _0223F408\n    b _0223F548\n    b _0223F666\n    ldr r0, _0223F670 ; =0x000005DC\n    bl PlaySE\n    ldr r2, _0223F674 ; =0x00000468\n    add r0, r4, #0\n    add r1, r2, #0\n    str r5, [r4, r2]\n    sub r1, #0xa8\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #4\n    bl ov81_02242218\n    add r0, r4, #0\n    bl ov81_02241D38\n    ldr r0, _0223F678 ; =0x00000474\n    mov r1, #0\n    ldr r0, [r4, r0]\n    mov r2, #7\n    add r3, r1, #0\n    bl sub_020196E8\n    add r0, r4, #0\n    bl ov81_0224174C\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov81_02242E08\n    b _0223F666\n    ldr r0, _0223F670 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xc\n    mov r3, #7\n    bl ov81_022425C4\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0223F666\n    ldr r0, _0223F670 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x12\n    mov r2, #0xc\n    mov r3, #8\n    bl ov81_022425C4\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0223F666\n    ldr r0, _0223F670 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0xf\n    mov r3, #9\n    bl ov81_022425C4\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0223F666\n    ldr r0, _0223F670 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0xe5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0xe6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    add r0, r4, #0\n    add r0, #0xd0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _0223F678 ; =0x00000474\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl sub_0201980C\n    add r0, r4, #0\n    bl ov81_02241D38\n    add r0, r4, #0\n    mov r1, #0x17\n    mov r2, #0xf\n    mov r3, #6\n    bl ov81_022425D8\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0223F666\n    ldr r0, _0223F670 ; =0x000005DC\n    bl PlaySE\n    ldr r0, _0223F66C ; =0x00000464\n    ldr r0, [r4, r0]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    cmp r2, #3\n    bne _0223F51C\n    mov r0, #0xe5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0xe6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    add r0, r4, #0\n    add r0, #0xd0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _0223F678 ; =0x00000474\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl sub_0201980C\n    b _0223F540\n    mov r1, #0xf\n    lsl r1, r1, #6\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r3, #3\n    bl ov81_02242218\n    add r0, r4, #0\n    add r0, #0xd0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0223F678 ; =0x00000474\n    mov r1, #0\n    ldr r0, [r4, r0]\n    mov r2, #7\n    add r3, r1, #0\n    bl sub_020196E8\n    add r0, r4, #0\n    bl ov81_02241D38\n    b _0223F666\n    ldr r0, _0223F66C ; =0x00000464\n    ldr r0, [r4, r0]\n    bl GridInputHandler_GetNextInput\n    cmp r0, #4\n    ldr r0, _0223F670 ; =0x000005DC\n    blo _0223F56E\n    bl PlaySE\n    add r0, r4, #0\n    bl ov81_022417B4\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242E08\n    b _0223F666\n    bl PlaySE\n    add r0, r4, #0\n    bl ov81_02241840\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov81_02242E08\n    add r0, r4, #0\n    mov r1, #1\n    bl ov81_02240F38\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    bl ov81_022425EC\n    b _0223F666\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0223F666\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl PaletteData_GetSelectedBuffersBitmask\n    cmp r0, #0\n    beq _0223F5C0\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl PaletteData_ScheduleFadeTaskEndIfNoSelectedBuffers\n    ldr r0, _0223F67C ; =0x00000478\n    mov r1, #0xff\n    str r1, [r4, r0]\n    b _0223F666\n    add r0, r4, #0\n    bl ov81_02240E78\n    add r0, r4, #0\n    bl ov81_02240BB0\n    mov r1, #7\n    lsl r1, r1, #6\n    ldr r0, _0223F680 ; =gOverlayTemplate_PokemonSummary\n    ldr r1, [r4, r1]\n    mov r2, #0x64\n    bl OverlayManager_New\n    str r0, [r4, #4]\n    ldrb r1, [r4, #0x13]\n    mov r0, #2\n    add sp, #0xc\n    orr r0, r1\n    strb r0, [r4, #0x13]\n    mov r0, #1\n    pop {r4, r5, pc}\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _0223F666\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0223F666\n    mov r0, #1\n    strb r0, [r4, #8]\n    b _0223F666\n    bl ov81_02241840\n    add r0, r4, #0\n    mov r1, #1\n    bl ov81_02240F38\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldrb r1, [r4, #0x13]\n    mov r0, #0x40\n    orr r0, r1\n    strb r0, [r4, #0x13]\n    mov r0, #3\n    strb r0, [r4, #8]\n    b _0223F666\n    bl ov81_0223F684\n    add r0, r4, #0\n    bl ov81_022417B4\n    add r0, r4, #0\n    bl ov81_02241840\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    bl ov81_022417B4\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242E08\n    mov r0, #1\n    strb r0, [r4, #8]\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0223F66C: .word 0x00000464\n    _0223F670: .word 0x000005DC\n    _0223F674: .word 0x00000468\n    _0223F678: .word 0x00000474\n    _0223F67C: .word 0x00000478\n    _0223F680: .word gOverlayTemplate_PokemonSummary"
    );
    #endif
}

void ov81_0223F684(void) {
    /* Original at 0x0223F684 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r2, [r0, #0x11]\n    ldr r1, _0223F6A4 ; =0x00000468\n    ldr r3, [r0, r1]\n    lsl r2, r2, #1\n    add r2, r0, r2\n    sub r1, #0xa0\n    strh r3, [r2, r1]\n    ldrb r1, [r0, #0x11]\n    add r1, r1, #1\n    strb r1, [r0, #0x11]\n    ldrb r2, [r0, #0x13]\n    mov r1, #4\n    orr r1, r2\n    strb r1, [r0, #0x13]\n    bx lr\n    nop\n    _0223F6A4: .word 0x00000468"
    );
    #endif
}

void ov81_0223F6A8(void) {
    /* Original at 0x0223F6A8 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #0\n    beq _0223F6BC\n    cmp r1, #1\n    beq _0223F6DE\n    cmp r1, #2\n    beq _0223F746\n    b _0223F74A\n    mov r1, #0xa\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    ldr r0, _0223F750 ; =0x0000046C\n    ldr r1, [r4, #0x4c]\n    ldr r0, [r4, r0]\n    bl ov81_02241BD0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov81_02242694\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223F74A\n    ldr r0, _0223F750 ; =0x0000046C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _0223F6F0\n    cmp r0, #2\n    beq _0223F71C\n    b _0223F74A\n    ldr r0, _0223F750 ; =0x0000046C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02242694\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223F714\n    add r0, r4, #0\n    mov r1, #2\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223F74A\n    ldr r0, _0223F750 ; =0x0000046C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02242694\n    add r0, r4, #0\n    bl ov81_0223F754\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242E08\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223F74A\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0223F750: .word 0x0000046C"
    );
    #endif
}

void ov81_0223F754(void) {
    /* Original at 0x0223F754 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov81_02241804\n    add r0, r4, #0\n    mov r1, #1\n    bl ov81_02240F38\n    add r0, r4, #0\n    mov r1, #9\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    pop {r4, pc}"
    );
    #endif
}

void ov81_0223F770(void) {
    /* Original at 0x0223F770 */
    /* Requires manual decompilation - 391 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #8\n    bhi _0223F7FC\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223F786: ; jump table\n    mov r0, #0x6e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov81_02243028\n    add r0, r4, #0\n    mov r1, #0xd\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    mov r0, #1\n    strb r0, [r4, #8]\n    b _0223FB38\n    ldr r0, _0223FB10 ; =0x00000464\n    ldr r0, [r4, r0]\n    bl GridInputHandler_HandleInput_NoHold\n    add r5, r0, #0\n    mov r0, #2\n    mvn r0, r0\n    cmp r5, r0\n    bhi _0223F7F2\n    blo _0223F7D2\n    b _0223F956\n    cmp r5, #7\n    bhi _0223F7FC\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223F7E2: ; jump table\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    bne _0223F7FC\n    b _0223FA02\n    b _0223FB38\n    ldr r0, _0223FB14 ; =0x000005DC\n    bl PlaySE\n    ldr r2, _0223FB18 ; =0x00000468\n    add r0, r4, #0\n    add r1, r2, #0\n    str r5, [r4, r2]\n    sub r1, #0xa4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #4\n    bl ov81_02242218\n    ldr r0, _0223FB1C ; =0x00000474\n    mov r1, #0\n    ldr r0, [r4, r0]\n    mov r2, #7\n    add r3, r1, #0\n    bl sub_020196E8\n    add r0, r4, #0\n    bl ov81_02241D94\n    ldr r1, _0223FB18 ; =0x00000468\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    bl ov81_022424AC\n    add r0, r4, #0\n    bl ov81_02241980\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov81_02242E08\n    b _0223FB38\n    ldr r0, _0223FB14 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0xe5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0xe6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r0, [r4, r0]\n    mov r2, #1\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #6\n    bl Pokepic_SetAttr\n    add r0, r4, #0\n    add r0, #0xd0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r0, [r4, r0]\n    add r1, r4, #0\n    add r1, #0x50\n    add r0, r0, #2\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _0223FB1C ; =0x00000474\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl sub_0201980C\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xf\n    mov r3, #5\n    bl ov81_022425D8\n    mov r0, #4\n    strb r0, [r4, #8]\n    b _0223FB38\n    ldr r0, _0223FB14 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0xe5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0xe6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r0, [r4, r0]\n    mov r2, #1\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #6\n    bl Pokepic_SetAttr\n    add r0, r4, #0\n    add r0, #0xd0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r0, [r4, r0]\n    add r1, r4, #0\n    add r1, #0x50\n    add r0, r0, #2\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _0223FB1C ; =0x00000474\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl sub_0201980C\n    add r0, r4, #0\n    mov r1, #0x17\n    mov r2, #0xf\n    mov r3, #6\n    bl ov81_022425D8\n    mov r0, #4\n    strb r0, [r4, #8]\n    b _0223FB38\n    ldr r0, _0223FB14 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xf\n    mov r3, #7\n    bl ov81_022425C4\n    mov r0, #4\n    strb r0, [r4, #8]\n    b _0223FB38\n    ldr r0, _0223FB14 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x12\n    mov r2, #0xf\n    mov r3, #8\n    bl ov81_022425C4\n    mov r0, #4\n    strb r0, [r4, #8]\n    b _0223FB38\n    ldr r0, _0223FB14 ; =0x000005DC\n    bl PlaySE\n    ldr r0, _0223FB10 ; =0x00000464\n    ldr r0, [r4, r0]\n    bl GridInputHandler_GetNextInput\n    add r5, r0, #0\n    sub r0, r5, #4\n    cmp r0, #1\n    bhi _0223F9C4\n    mov r0, #0xe5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0xe6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r0, [r4, r0]\n    mov r2, #1\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #6\n    bl Pokepic_SetAttr\n    add r0, r4, #0\n    add r0, #0xd0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r0, [r4, r0]\n    add r1, r4, #0\n    add r1, #0x50\n    add r0, r0, #2\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _0223FB1C ; =0x00000474\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl sub_0201980C\n    b _0223FB38\n    cmp r5, #6\n    beq _0223FA5A\n    cmp r5, #7\n    beq _0223FA5A\n    mov r1, #0xf1\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    add r2, r5, #0\n    mov r3, #4\n    bl ov81_02242218\n    add r0, r4, #0\n    add r0, #0xd0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0223FB1C ; =0x00000474\n    mov r1, #0\n    ldr r0, [r4, r0]\n    mov r2, #7\n    add r3, r1, #0\n    bl sub_020196E8\n    add r0, r4, #0\n    bl ov81_02241D94\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov81_022424AC\n    b _0223FB38\n    ldr r0, _0223FB10 ; =0x00000464\n    ldr r0, [r4, r0]\n    bl GridInputHandler_GetNextInput\n    cmp r0, #6\n    ldr r0, _0223FB14 ; =0x000005DC\n    blo _0223FA28\n    bl PlaySE\n    add r0, r4, #0\n    bl ov81_022419E0\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242E08\n    b _0223FB38\n    bl PlaySE\n    add r0, r4, #0\n    bl ov81_02241A7C\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov81_02242E08\n    add r0, r4, #0\n    mov r1, #1\n    bl ov81_02240F38\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, _0223FB20 ; =0x0000046C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _0223FA5C\n    cmp r0, #2\n    beq _0223FA8E\n    b _0223FB38\n    ldr r0, _0223FB20 ; =0x0000046C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02242694\n    add r0, r4, #0\n    bl ov81_0223FB64\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223FA86\n    add r0, r4, #0\n    mov r1, #2\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223FB38\n    ldr r0, _0223FB20 ; =0x0000046C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02242694\n    add r0, r4, #0\n    bl ov81_0223FB88\n    add r0, r4, #0\n    bl ov81_02241A38\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242E08\n    mov r0, #1\n    strb r0, [r4, #8]\n    b _0223FB38\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    bl ov81_022425EC\n    b _0223FB38\n    bl ov81_02241A7C\n    add r0, r4, #0\n    bl ov81_0223FB3C\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    bl ov81_02241A7C\n    add r0, r4, #0\n    mov r1, #1\n    bl ov81_02240F38\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    bl ov81_022419E0\n    add r0, r4, #0\n    bl ov81_02241A7C\n    ldr r0, _0223FB20 ; =0x0000046C\n    ldr r1, [r4, #0x4c]\n    ldr r0, [r4, r0]\n    bl ov81_02241BD0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov81_02242694\n    add r0, r4, #0\n    mov r1, #0xe\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0223FB38\n    _0223FB10: .word 0x00000464\n    _0223FB14: .word 0x000005DC\n    _0223FB18: .word 0x00000468\n    _0223FB1C: .word 0x00000474\n    _0223FB20: .word 0x0000046C\n    bl ov81_022419E0\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242E08\n    mov r0, #1\n    strb r0, [r4, #8]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov81_0223FB3C(void) {
    /* Original at 0x0223FB3C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r2, [r0, #0x13]\n    mov r1, #4\n    mov r3, #0xf2\n    bic r2, r1\n    strb r2, [r0, #0x13]\n    ldrb r1, [r0, #0x11]\n    lsl r3, r3, #2\n    add r2, r3, #0\n    sub r1, r1, #1\n    strb r1, [r0, #0x11]\n    mov r1, #0\n    strh r1, [r0, r3]\n    add r2, #0xa0\n    add r3, #0x9c\n    str r1, [r0, r2]\n    ldr r0, [r0, r3]\n    ldr r3, _0223FB60 ; =GridInputHandler_SetNextInput\n    bx r3\n    _0223FB60: .word GridInputHandler_SetNextInput"
    );
    #endif
}

void ov81_0223FB64(void) {
    /* Original at 0x0223FB64 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r2, [r0, #0x13]\n    mov r1, #8\n    orr r1, r2\n    strb r1, [r0, #0x13]\n    ldrb r2, [r0, #0x11]\n    ldr r1, _0223FB84 ; =0x00000468\n    ldr r3, [r0, r1]\n    lsl r2, r2, #1\n    add r2, r0, r2\n    sub r1, #0xa0\n    strh r3, [r2, r1]\n    ldrb r1, [r0, #0x11]\n    add r1, r1, #1\n    strb r1, [r0, #0x11]\n    bx lr\n    nop\n    _0223FB84: .word 0x00000468"
    );
    #endif
}

void ov81_0223FB88(void) {
    /* Original at 0x0223FB88 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x6e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov81_02243028\n    add r0, r4, #0\n    mov r1, #0xd\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    pop {r4, pc}"
    );
    #endif
}

void ov81_0223FBAC(void) {
    /* Original at 0x0223FBAC */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #0\n    beq _0223FBC0\n    cmp r1, #1\n    beq _0223FBE2\n    cmp r1, #2\n    beq _0223FC52\n    b _0223FC56\n    mov r1, #0xa\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    ldr r0, _0223FC5C ; =0x0000046C\n    ldr r1, [r4, #0x4c]\n    ldr r0, [r4, r0]\n    bl ov81_02241BD0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov81_02242694\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223FC56\n    ldr r0, _0223FC5C ; =0x0000046C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _0223FBF4\n    cmp r0, #2\n    beq _0223FC28\n    b _0223FC56\n    ldr r0, _0223FC5C ; =0x0000046C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02242694\n    ldrb r1, [r4, #0x13]\n    mov r0, #8\n    bic r1, r0\n    strb r1, [r4, #0x13]\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223FC20\n    add r0, r4, #0\n    mov r1, #2\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223FC56\n    ldr r0, _0223FC5C ; =0x0000046C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_02242694\n    add r0, r4, #0\n    bl ov81_0223FC60\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242E08\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223FC56\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0223FC5C: .word 0x0000046C"
    );
    #endif
}

void ov81_0223FC60(void) {
    /* Original at 0x0223FC60 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov81_02241A38\n    add r0, r4, #0\n    mov r1, #1\n    bl ov81_02240F38\n    pop {r4, pc}"
    );
    #endif
}

void ov81_0223FC74(void) {
    /* Original at 0x0223FC74 */
    /* Requires manual decompilation - 390 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #9]\n    bl ov80_02236DD4\n    ldrb r0, [r4, #8]\n    cmp r0, #6\n    bhi _0223FD48\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223FC90: ; jump table\n    ldrb r1, [r4, #0x13]\n    mov r0, #0x20\n    orr r0, r1\n    strb r0, [r4, #0x13]\n    add r0, r4, #0\n    add r0, #0x60\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    add r0, #0xa0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    add r0, #0x50\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0x50\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #0\n    add r0, #0x70\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    add r0, #0x80\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    add r0, #0x90\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    add r0, #0xd0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _0223FFF0 ; =0x00000474\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl sub_0201980C\n    add r0, r4, #0\n    add r0, #0xc0\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0x50\n    bl ov81_0224300C\n    ldr r0, _0223FFF4 ; =0x0000FFFF\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r2, #0x10\n    add r3, r1, #0\n    bl Pokepic_StartPaletteFadeAll\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223FFEC\n    ldrb r0, [r4, #0x19]\n    add r0, r0, #1\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #0x19]\n    cmp r0, #2\n    bhs _0223FD4A\n    b _0223FFEC\n    ldr r0, _0223FFF8 ; =0x0000047C\n    mov r6, #0\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bls _0223FD6C\n    ldr r7, _0223FFF8 ; =0x0000047C\n    add r5, r4, #0\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Pokepic_Delete\n    ldr r0, [r4, r7]\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, r0\n    blo _0223FD58\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov81_02242D74\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov81_02242D74\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov81_02242D74\n    mov r0, #0xe5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov81_02242D74\n    mov r0, #0xe6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov81_02242D74\n    add r0, r4, #0\n    bl ov81_02241FC0\n    add r0, r4, #0\n    bl ov81_02242170\n    mov r0, #0xe\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    mov r1, #2\n    bl ov81_02242DE4\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223FFEC\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Pokepic_ResumePaletteFade\n    mov r0, #0xe\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl ov81_02242DD8\n    cmp r0, #1\n    beq _0223FEB4\n    mov r0, #0xe\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    add r0, r4, #0\n    mov r1, #6\n    bl ov81_02240728\n    add r0, r4, #0\n    mov r1, #2\n    bl ov81_022406E0\n    ldr r0, [r4, #0x4c]\n    ldr r3, [r4, #0xc]\n    mov r1, #6\n    mov r2, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, _0223FFFC ; =0x00000611\n    bl PlaySE\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223FFEC\n    add r0, r4, #0\n    bl ov81_02240564\n    cmp r0, #1\n    bne _0223FEB4\n    ldr r0, _0223FFFC ; =0x00000611\n    mov r1, #0\n    bl StopSE\n    ldr r0, _02240000 ; =0x00000678\n    bl PlaySE\n    mov r0, #8\n    str r0, [r4, #0x14]\n    ldrb r0, [r4, #0x12]\n    mov r6, #0\n    cmp r0, #0\n    ble _0223FE5A\n    add r5, r4, #0\n    add r7, r6, #0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ov81_02242EA4\n    mov r1, #0x36\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    str r7, [r5, r0]\n    ldrb r0, [r4, #0x12]\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, r0\n    blt _0223FE3C\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223FE74\n    ldrb r0, [r4, #0x12]\n    cmp r0, #2\n    bne _0223FE70\n    mov r0, #4\n    strb r0, [r4, #0x12]\n    b _0223FE74\n    mov r0, #2\n    strb r0, [r4, #0x12]\n    add r0, r4, #0\n    bl ov81_0223EBE4\n    ldrb r0, [r4, #0x12]\n    mov r6, #0\n    cmp r0, #0\n    ble _0223FE98\n    mov r7, #0x36\n    add r5, r4, #0\n    lsl r7, r7, #4\n    ldr r0, [r5, r7]\n    bl ov81_02242F60\n    ldrb r0, [r4, #0x12]\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, r0\n    blt _0223FE88\n    ldr r0, _0223FFFC ; =0x00000611\n    bl PlaySE\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223FFEC\n    add r0, r4, #0\n    bl ov81_022404B4\n    cmp r0, #1\n    beq _0223FEB6\n    b _0223FFEC\n    ldr r0, _0223FFFC ; =0x00000611\n    mov r1, #0\n    bl StopSE\n    ldr r0, _02240000 ; =0x00000678\n    bl PlaySE\n    ldrb r0, [r4, #0x12]\n    mov r6, #0\n    cmp r0, #0\n    ble _0223FEE4\n    mov r7, #0x36\n    add r5, r4, #0\n    lsl r7, r7, #4\n    ldr r0, [r5, r7]\n    mov r1, #4\n    bl ov81_02242F94\n    ldrb r0, [r4, #0x12]\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, r0\n    blt _0223FED2\n    mov r0, #8\n    str r0, [r4, #0x14]\n    mov r0, #0xe\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    mov r0, #0xe\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov81_02242DE4\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223FFEC\n    mov r0, #0xe\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl ov81_02242DD8\n    cmp r0, #1\n    beq _0223FFEC\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223FFEC\n    ldrb r0, [r4, #0x19]\n    cmp r0, #0\n    bne _0223FFAA\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldrb r0, [r4, #0x13]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    ldr r0, _0223FFF8 ; =0x0000047C\n    bne _0223FF60\n    ldr r0, [r4, r0]\n    mov r5, #0\n    cmp r0, #0\n    bls _0223FF96\n    ldr r6, _0223FFF8 ; =0x0000047C\n    mov r7, #1\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r5, #0\n    add r3, r7, #0\n    bl ov81_02241E68\n    ldr r0, [r4, r6]\n    add r5, r5, #1\n    cmp r5, r0\n    blo _0223FF4A\n    b _0223FF96\n    ldr r0, [r4, r0]\n    mov r5, #0\n    cmp r0, #0\n    bls _0223FF96\n    ldr r7, _0223FFF8 ; =0x0000047C\n    add r6, r7, #0\n    sub r6, #0xb4\n    ldrh r0, [r4, r6]\n    cmp r5, r0\n    bne _0223FF82\n    mov r2, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    add r3, r2, #0\n    bl ov81_02241EDC\n    b _0223FF8E\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r5, #0\n    mov r3, #1\n    bl ov81_02241E68\n    ldr r0, [r4, r7]\n    add r5, r5, #1\n    cmp r5, r0\n    blo _0223FF6E\n    ldr r0, _0223FFF4 ; =0x0000FFFF\n    mov r1, #0x10\n    str r0, [sp]\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r2, #0\n    mov r3, #1\n    bl Pokepic_StartPaletteFadeAll\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Pokepic_ResumePaletteFade\n    ldrb r0, [r4, #0x19]\n    add r0, r0, #1\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #0x19]\n    cmp r0, #0x15\n    blo _0223FFEC\n    add r0, r4, #0\n    bl ov81_02241398\n    ldrb r1, [r4, #0x13]\n    mov r0, #0x20\n    bic r1, r0\n    strb r1, [r4, #0x13]\n    ldrb r0, [r4, #9]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0223FFE4\n    ldr r0, _02240004 ; =0x00000463\n    mov r1, #1\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    bl ov81_02241144\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223FFF0: .word 0x00000474\n    _0223FFF4: .word 0x0000FFFF\n    _0223FFF8: .word 0x0000047C\n    _0223FFFC: .word 0x00000611\n    _02240000: .word 0x00000678\n    _02240004: .word 0x00000463"
    );
    #endif
}

void ov81_02240008(void) {
    /* Original at 0x02240008 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #0\n    beq _02240018\n    cmp r1, #1\n    beq _02240030\n    b _02240040\n    ldrb r2, [r4, #0x13]\n    mov r1, #0xa\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x1f\n    bl ov81_02240FA4\n    cmp r0, #1\n    bne _02240040\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _02240040\n    ldr r0, _02240044 ; =0x00000462\n    ldrb r1, [r4, r0]\n    cmp r1, #2\n    blo _02240040\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _02240044: .word 0x00000462"
    );
    #endif
}

void ov81_02240048(void) {
    /* Original at 0x02240048 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #0\n    beq _02240058\n    cmp r1, #1\n    beq _02240072\n    b _02240084\n    mov r1, #0xf\n    bl ov81_0224086C\n    strb r0, [r4, #0x10]\n    bl sub_02037BEC\n    mov r0, #0xa5\n    bl sub_02037AC0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _02240084\n    mov r0, #0xa5\n    bl sub_02037B38\n    cmp r0, #1\n    bne _02240084\n    bl sub_02037BEC\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov81_02240088(void) {
    /* Original at 0x02240088 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldrb r0, [r4, #8]\n    cmp r0, #0\n    beq _0224009A\n    cmp r0, #1\n    beq _022400BA\n    b _022400C8\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _022400C8\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _022400C8\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov81_022400D0(void) {
    /* Original at 0x022400D0 */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    ldrb r0, [r4, #8]\n    cmp r0, #0\n    beq _022400E2\n    cmp r0, #1\n    beq _022401AC\n    b _022401C0\n    mov r0, #0xdf\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02240114\n    mov r0, #0x5f\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Delete2dMenu\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov81_022413E0\n    mov r0, #0xdf\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov81_02242FC8\n    mov r0, #0xdf\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, [r4, #0x20]\n    mov r1, #0\n    bl ov80_0222A7CC\n    mov r1, #0xf\n    lsl r1, r1, #6\n    ldr r0, [r4, r1]\n    add r1, #8\n    ldrh r1, [r4, r1]\n    add r1, r1, #2\n    bl Party_GetMonByIndex\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov81_022408B8\n    mov r1, #0xf1\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, r1, #6\n    ldrh r1, [r4, r1]\n    bl Party_GetMonByIndex\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    add r0, r4, #0\n    mov r1, #2\n    bl ov81_022408B8\n    mov r0, #0x6e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov81_02243028\n    mov r0, #0x6f\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Save_PlayerData_GetOptionsAddr\n    bl Options_GetTextFrameDelay\n    mov r3, #1\n    str r3, [sp]\n    str r0, [sp, #4]\n    add r1, r4, #0\n    str r3, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    str r3, [sp, #0x14]\n    add r0, r4, #0\n    add r1, #0xc0\n    mov r2, #0x10\n    bl ov81_0224080C\n    strb r0, [r4, #0x10]\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x50\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _022401C0\n    ldrb r0, [r4, #0x10]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _022401C0\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    add sp, #0x18\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    add sp, #0x18\n    pop {r4, pc}"
    );
    #endif
}

void ov81_022401C8(void) {
    /* Original at 0x022401C8 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _02240204\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl PokepicManager_HandleLoadImgAndOrPltt\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _022401EA\n    bl PaletteData_PushTransparentBuffers\n    ldr r0, [r4, #0x4c]\n    bl DoScheduledBgGpuUpdates\n    bl GF_RunVramTransferTasks\n    bl OamManager_ApplyAndResetBuffers\n    ldr r3, _02240208 ; =0x027E0000\n    ldr r1, _0224020C ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    nop\n    _02240208: .word 0x027E0000\n    _0224020C: .word 0x00003FF8"
    );
    #endif
}

void ov81_02240210(void) {
    GfGfx_SetBanks(5);
}

void ov81_02240230(void) {
    /* Original at 0x02240230 */
    /* Requires manual decompilation - 172 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xd4\n    ldr r5, _0224039C ; =ov81_02243480\n    add r3, sp, #0xc4\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _022403A0 ; =ov81_022434A8\n    add r3, sp, #0xa8\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x64\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _022403A4 ; =ov81_022434C4\n    add r3, sp, #0x8c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _022403A8 ; =ov81_022434FC\n    add r3, sp, #0x70\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _022403AC ; =ov81_02243518\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x64\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _022403B0 ; =ov81_022434E0\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #5\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x64\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _022403B4 ; =ov81_02243534\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #6\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #6\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _022403B8 ; =ov81_02243550\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #7\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    ldr r1, _022403BC ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #1\n    strh r2, [r1]\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0xd4\n    pop {r4, r5, pc}\n    _0224039C: .word ov81_02243480\n    _022403A0: .word ov81_022434A8\n    _022403A4: .word ov81_022434C4\n    _022403A8: .word ov81_022434FC\n    _022403AC: .word ov81_02243518\n    _022403B0: .word ov81_022434E0\n    _022403B4: .word ov81_02243534\n    _022403B8: .word ov81_02243550\n    _022403BC: .word 0x04000008"
    );
    #endif
}

void ov81_022403C0(void) {
    /* Original at 0x022403C0 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov81_02240210\n    ldr r0, [r4, #0x4c]\n    bl ov81_02240230\n    mov r0, #0x64\n    bl PaletteData_Init\n    mov r1, #0x1a\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #2\n    lsl r2, r1, #8\n    mov r3, #0x64\n    bl PaletteData_AllocBuffers\n    mov r2, #0x1a\n    lsl r2, r2, #4\n    ldr r0, [r4, r2]\n    mov r1, #0\n    add r2, #0x60\n    mov r3, #0x64\n    bl PaletteData_AllocBuffers\n    bl ov81_02240770\n    add r0, r4, #0\n    mov r1, #6\n    bl ov81_02240728\n    add r0, r4, #0\n    mov r1, #3\n    bl ov81_02240698\n    add r0, r4, #0\n    mov r1, #2\n    bl ov81_022406E0\n    ldrb r0, [r4, #0x13]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1f\n    beq _02240426\n    ldr r0, [r4, #0x4c]\n    ldr r3, [r4, #0xc]\n    mov r1, #6\n    mov r2, #0\n    bl BgSetPosTextAndCommit\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #8\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    mov r1, #7\n    bl ov81_022407A8\n    pop {r4, pc}"
    );
    #endif
}

void ov81_02240448(void) {
    /* Original at 0x02240448 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x71\n    lsl r1, r1, #2\n    ldr r3, _02240454 ; =ov81_0224276C\n    add r0, r0, r1\n    bx r3\n    nop\n    _02240454: .word ov81_0224276C"
    );
    #endif
}

void ov81_02240458(void) {
    /* Original at 0x02240458 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x1f\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x1f\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r4, #0\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov81_022404AC(void) {
    /* Original at 0x022404AC */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    strb r3, [r0, #8]\n    str r2, [r1]\n    bx lr"
    );
    #endif
}

void ov81_022404B4(void) {
    /* Original at 0x022404B4 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x4c]\n    mov r1, #6\n    mov r2, #1\n    mov r3, #8\n    bl BgSetPosTextAndCommit\n    ldr r0, [r5, #0x4c]\n    mov r1, #6\n    bl Bg_GetXpos\n    str r0, [r5, #0xc]\n    ldrb r0, [r5, #0x12]\n    mov r6, #0\n    cmp r0, #0\n    ble _0224054A\n    add r4, r5, #0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov81_02242F30\n    add r7, r0, #0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov81_02242F8C\n    ldr r2, [r7]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    sub r1, #8\n    cmp r1, r0\n    bgt _0224052E\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov81_02242F8C\n    add r7, r0, #0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov81_02242F90\n    add r2, r0, #0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    add r1, r7, #0\n    bl ov81_02242F10\n    mov r0, #1\n    str r0, [sp]\n    b _02240540\n    mov r1, #0x36\n    lsl r1, r1, #4\n    mov r2, #7\n    ldr r1, [r4, r1]\n    add r0, sp, #4\n    mvn r2, r2\n    mov r3, #0\n    bl ov81_02242EC4\n    ldrb r0, [r5, #0x12]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r0\n    blt _022404DE\n    add r0, r5, #0\n    bl ov81_022405F0\n    ldr r0, [sp]\n    cmp r0, #1\n    bne _0224055C\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_02240564(void) {
    /* Original at 0x02240564 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    ldr r0, [r6, #0x4c]\n    mov r1, #6\n    mov r2, #1\n    mov r3, #8\n    mov r4, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r6, #0x4c]\n    mov r1, #6\n    bl Bg_GetXpos\n    str r0, [r6, #0xc]\n    ldrb r0, [r6, #0x12]\n    add r7, r4, #0\n    cmp r0, #0\n    ble _022405D6\n    add r5, r6, #0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ov81_02242F30\n    ldr r1, [r0]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r1, r0, #0xc\n    mov r0, #0x17\n    sub r1, #8\n    mvn r0, r0\n    cmp r1, r0\n    bge _022405BA\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ov81_02242EB8\n    add r4, r4, #1\n    b _022405CC\n    mov r1, #0x36\n    lsl r1, r1, #4\n    mov r2, #7\n    ldr r1, [r5, r1]\n    add r0, sp, #0\n    mvn r2, r2\n    mov r3, #0\n    bl ov81_02242EC4\n    ldrb r0, [r6, #0x12]\n    add r7, r7, #1\n    add r5, r5, #4\n    cmp r7, r0\n    blt _0224058C\n    add r0, r6, #0\n    bl ov81_022405F0\n    ldrb r0, [r6, #0x12]\n    cmp r4, r0\n    bne _022405E8\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_022405F0(void) {
    /* Original at 0x022405F0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r1, [r4, #0x14]\n    mov r0, #3\n    tst r0, r1\n    bne _0224061E\n    lsr r0, r1, #2\n    cmp r0, #4\n    blo _02240608\n    mov r0, #0\n    str r0, [r4, #0x14]\n    mov r3, #0x20\n    str r3, [sp]\n    ldr r2, [r4, #0x14]\n    add r0, r4, #0\n    lsr r2, r2, #2\n    add r2, r2, #2\n    lsl r2, r2, #0x18\n    mov r1, #7\n    lsr r2, r2, #0x18\n    bl ov81_02240628\n    ldr r0, [r4, #0x14]\n    add r0, r0, #1\n    str r0, [r4, #0x14]\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov81_02240628(void) {
    /* Original at 0x02240628 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    str r3, [sp]\n    add r0, sp, #8\n    ldrb r0, [r0, #0x10]\n    add r4, r1, #0\n    lsl r1, r4, #0x18\n    str r0, [sp, #4]\n    str r2, [sp, #8]\n    mov r2, #0\n    ldr r0, [r5, #0x4c]\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    lsl r1, r4, #0x18\n    ldr r0, [r5, #0x4c]\n    lsr r1, r1, #0x18\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov81_02240658(void) {
    /* Original at 0x02240658 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #5\n    bhi _02240688\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224066C: ; jump table\n    mov r1, #1\n    b _0224068A\n    mov r1, #2\n    b _0224068A\n    mov r1, #1\n    b _0224068A\n    mov r1, #2\n    b _0224068A\n    mov r1, #4\n    add r0, r4, #0\n    bl ov81_02241340\n    mov r1, #0xe\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    pop {r4, pc}"
    );
    #endif
}

void ov81_02240698(void) {
    /* Original at 0x02240698 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r4, r1, #0\n    mov r0, #0x64\n    str r0, [sp, #0xc]\n    mov r0, #0xf7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #0x81\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x64\n    str r0, [sp, #0xc]\n    mov r0, #0xf7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #0x82\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov81_022406E0(void) {
    /* Original at 0x022406E0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r4, r1, #0\n    mov r0, #0x64\n    str r0, [sp, #0xc]\n    mov r0, #0xf7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #0x92\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x64\n    str r0, [sp, #0xc]\n    mov r0, #0xf7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #0x91\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov81_02240728(void) {
    /* Original at 0x02240728 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r4, r1, #0\n    mov r0, #0x64\n    str r0, [sp, #0xc]\n    mov r0, #0xf7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #4\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x64\n    str r0, [sp, #0xc]\n    mov r0, #0xf7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #8\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov81_02240770(void) {
    /* Original at 0x02240770 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r0, #0xb7\n    mov r1, #0xc1\n    add r2, sp, #0\n    mov r3, #0x64\n    bl GfGfxLoader_GetPlttData\n    add r4, r0, #0\n    ldr r0, [sp]\n    mov r1, #0x16\n    ldr r0, [r0, #0xc]\n    lsl r1, r1, #4\n    bl DC_FlushRange\n    ldr r0, [sp]\n    mov r2, #0x16\n    ldr r0, [r0, #0xc]\n    mov r1, #0\n    lsl r2, r2, #4\n    bl GX_LoadBGPltt\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov81_022407A8(void) {
    /* Original at 0x022407A8 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r4, r1, #0\n    mov r0, #0x64\n    str r0, [sp, #0xc]\n    mov r0, #0xf7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #4\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x64\n    str r0, [sp, #0xc]\n    mov r0, #0xf7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #7\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0x16\n    lsl r0, r0, #4\n    str r0, [sp]\n    mov r0, #0x64\n    str r0, [sp, #4]\n    mov r0, #0xf7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x95\n    mov r2, #4\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov81_0224080C(void) {
    /* Original at 0x0224080C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r1, sp, #0x38\n    ldrb r1, [r1]\n    add r5, r0, #0\n    add r0, r4, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x1c]\n    ldr r2, [r5, #0x28]\n    add r1, r6, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #0x20]\n    ldr r1, [r5, #0x24]\n    ldr r2, [r5, #0x28]\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x28]\n    add r2, sp, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    add r3, r7, #0\n    str r0, [sp, #4]\n    add r0, sp, #0x38\n    ldrb r1, [r0]\n    ldrb r0, [r2, #0x18]\n    ldrb r2, [r2, #0x1c]\n    lsl r0, r0, #0x18\n    lsl r2, r2, #0x18\n    lsr r0, r0, #8\n    lsr r2, r2, #0x10\n    orr r0, r2\n    orr r0, r1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r1, sp, #0x3c\n    ldrb r1, [r1]\n    ldr r2, [r5, #0x24]\n    add r0, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_0224086C(void) {
    /* Original at 0x0224086C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    mov r3, #1\n    add r2, r1, #0\n    str r3, [sp]\n    mov r1, #0xff\n    str r1, [sp, #4]\n    str r3, [sp, #8]\n    mov r1, #2\n    str r1, [sp, #0xc]\n    mov r1, #0xf\n    str r1, [sp, #0x10]\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0xc0\n    str r3, [sp, #0x14]\n    bl ov81_0224080C\n    add r4, #0xc0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add sp, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov81_022408A0(void) {
    BufferIntegerAsString(0, 1);
}

void ov81_022408B8(void) {
    BufferBoxMonSpeciesName();
}

void ov81_022408C4(void) {
    /* Original at 0x022408C4 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r1, #0\n    mov r1, #0x6f\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    str r2, [sp, #0x10]\n    add r6, r3, #0\n    bl Save_PlayerData_GetProfile\n    add r7, r0, #0\n    mov r0, #8\n    mov r1, #0x64\n    bl String_New\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r7, #0\n    bl PlayerProfile_GetNamePtr\n    add r1, r0, #0\n    add r0, r4, #0\n    bl CopyU16ArrayToString\n    add r0, r7, #0\n    bl PlayerProfile_GetTrainerGender\n    cmp r0, #0\n    bne _02240908\n    ldr r1, _02240938 ; =0x00070800\n    b _0224090C\n    mov r1, #0xc1\n    lsl r1, r1, #0xa\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r1, sp, #0x18\n    ldrb r1, [r1, #0x10]\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02240938: .word 0x00070800"
    );
    #endif
}

void ov81_0224093C(void) {
    /* Original at 0x0224093C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r1, #0\n    str r2, [sp, #0x10]\n    add r6, r3, #0\n    bl sub_0203769C\n    mov r1, #1\n    sub r0, r1, r0\n    bl sub_02034818\n    add r7, r0, #0\n    mov r0, #8\n    mov r1, #0x64\n    bl String_New\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r7, #0\n    add r1, r4, #0\n    bl PlayerName_FlatToString\n    add r0, r7, #0\n    bl PlayerProfile_GetTrainerGender\n    cmp r0, #0\n    bne _0224097C\n    ldr r1, _022409AC ; =0x00070800\n    b _02240980\n    mov r1, #0xc1\n    lsl r1, r1, #0xa\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r1, sp, #0x18\n    ldrb r1, [r1, #0x10]\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022409AC: .word 0x00070800"
    );
    #endif
}

void ov81_022409B0(void) {
    /* Original at 0x022409B0 */
    /* Requires manual decompilation - 127 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r4, r1, #0\n    add r1, sp, #0x28\n    ldrb r1, [r1, #0x1c]\n    add r5, r0, #0\n    add r0, r4, #0\n    add r6, r2, #0\n    str r3, [sp, #0x10]\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x4c]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    add r7, r0, #0\n    mov r0, #0xb\n    mov r1, #0x64\n    bl String_New\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #0x1c]\n    mov r1, #0x1c\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x1c]\n    add r0, r7, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, [r5, #0x20]\n    mov r1, #0\n    bl BufferBoxMonSpeciesName\n    ldr r0, [r5, #0x20]\n    ldr r1, [sp, #0x18]\n    ldr r2, [sp, #0x1c]\n    bl StringExpandPlaceholders\n    add r0, sp, #0x48\n    ldrb r6, [r0]\n    ldr r0, [sp, #0x38]\n    add r2, sp, #0x28\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldrb r0, [r2, #0x14]\n    ldrb r1, [r2, #0x1c]\n    ldrb r2, [r2, #0x18]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #8\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x10\n    orr r0, r2\n    orr r0, r1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r2, [sp, #0x18]\n    ldr r3, [sp, #0x10]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x1c]\n    bl String_Delete\n    ldr r0, [sp, #0x18]\n    bl String_Delete\n    add r0, r7, #0\n    mov r1, #0xb0\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #1\n    bne _02240AC8\n    add r0, r7, #0\n    bl GetMonGender\n    add r7, r0, #0\n    add r0, r4, #0\n    bl GetWindowWidth\n    sub r0, r0, #1\n    lsl r0, r0, #3\n    sub r0, r0, #4\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x14]\n    cmp r7, #0\n    bne _02240A96\n    ldr r0, [r5, #0x1c]\n    mov r1, #0x1a\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r0, [sp, #0x38]\n    add r1, r6, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02240AD4 ; =0x00070800\n    add r2, r5, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r3, [sp, #0x14]\n    add r0, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl String_Delete\n    b _02240AC8\n    cmp r7, #1\n    bne _02240AC8\n    ldr r0, [r5, #0x1c]\n    mov r1, #0x1b\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r0, [sp, #0x38]\n    add r1, r6, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r3, [sp, #0x14]\n    add r0, r4, #0\n    add r2, r5, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02240AD4: .word 0x00070800"
    );
    #endif
}

void ov81_02240AD8(void) {
    /* Original at 0x02240AD8 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r1, #0\n    add r1, sp, #0x28\n    ldrb r1, [r1, #0x18]\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    str r2, [sp, #0x14]\n    add r6, r3, #0\n    bl FillWindowPixelBuffer\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xed\n    mov r3, #0x64\n    bl NewMsgDataFromNarc\n    add r1, sp, #0x28\n    ldrh r1, [r1, #0x20]\n    add r7, r0, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r7, #0\n    bl DestroyMsgData\n    add r2, sp, #0x28\n    ldrb r0, [r2, #0x1c]\n    ldr r3, [sp, #0x14]\n    str r0, [sp, #0x1c]\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldrb r0, [r2, #0x10]\n    ldrb r1, [r2, #0x18]\n    ldrb r2, [r2, #0x14]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #8\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x10\n    orr r0, r2\n    orr r0, r1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x1c]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl GetWindowWidth\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x20]\n    add r0, sp, #0x4c\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02240B58\n    mov r0, #0x1a\n    str r0, [sp, #0x18]\n    b _02240B5C\n    mov r0, #0x1b\n    str r0, [sp, #0x18]\n    add r0, sp, #0x4c\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02240B68\n    ldr r7, _02240BAC ; =0x00070800\n    b _02240B6C\n    mov r7, #0xc1\n    lsl r7, r7, #0xa\n    add r0, r4, #0\n    bl String_SetEmpty\n    add r0, sp, #0x4c\n    ldrb r0, [r0]\n    cmp r0, #2\n    beq _02240BA0\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x18]\n    ldr r0, [r0, #0x1c]\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r3, [sp, #0x20]\n    ldr r1, [sp, #0x1c]\n    add r0, r5, #0\n    add r2, r4, #0\n    lsl r3, r3, #3\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02240BAC: .word 0x00070800"
    );
    #endif
}

void ov81_02240BB0(void) {
    /* Original at 0x02240BB0 */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl ov81_0224275C\n    ldrb r0, [r5, #0x12]\n    mov r6, #0\n    cmp r0, #0\n    ble _02240BE0\n    mov r7, #0x36\n    add r4, r5, #0\n    lsl r7, r7, #4\n    ldr r0, [r4, r7]\n    cmp r0, #0\n    beq _02240BD6\n    bl ov81_02242EA4\n    mov r1, #0x36\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldrb r0, [r5, #0x12]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r0\n    blt _02240BC6\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ov81_02242D74\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ov81_02242D74\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ov81_02242D74\n    mov r0, #0xe5\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ov81_02242D74\n    mov r0, #0xe6\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ov81_02242D74\n    add r0, r5, #0\n    bl ov81_02241364\n    add r0, r5, #0\n    bl ov81_02241FC0\n    add r0, r5, #0\n    bl ov81_02242170\n    bl sub_0203A914\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #2\n    bl PaletteData_FreeBuffers\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl PaletteData_FreeBuffers\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl PaletteData_Free\n    mov r0, #0x1a\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r5, r0]\n    add r0, #0x24\n    add r0, r5, r0\n    bl ov81_02242B38\n    mov r7, #0x6b\n    mov r6, #0\n    add r4, r5, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    cmp r0, #0\n    beq _02240C6C\n    bl Pokepic_Delete\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #3\n    blt _02240C62\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl PokepicManager_Delete\n    ldr r0, [r5, #0x1c]\n    bl DestroyMsgData\n    ldr r0, [r5, #0x20]\n    bl MessageFormat_Delete\n    ldr r0, [r5, #0x24]\n    bl String_Delete\n    ldr r0, [r5, #0x28]\n    bl String_Delete\n    mov r6, #0\n    add r4, r5, #0\n    ldr r0, [r4, #0x2c]\n    bl String_Delete\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #4\n    blt _02240C9A\n    mov r0, #4\n    bl FontID_Release\n    add r0, r5, #0\n    add r0, #0x50\n    bl ov81_0224300C\n    ldr r0, [r5, #0x4c]\n    bl ov81_02240458\n    mov r0, #0xf7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl NARC_Delete\n    mov r0, #0x69\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl GF_3DVramMan_Delete\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_02240CD4(void) {
    /* Original at 0x02240CD4 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl ov81_02240D2C\n    mov r2, #2\n    mov r1, #0\n    ldr r0, _02240D24 ; =ov81_02242BC8\n    str r2, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x64\n    add r3, r1, #0\n    bl GF_3DVramMan_Create\n    mov r1, #0x69\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0x64\n    bl BgConfig_Alloc\n    str r0, [r4, #0x4c]\n    add r0, r4, #0\n    bl ov81_02240D64\n    add r1, r4, #0\n    ldr r0, [r4, #0x4c]\n    add r1, #0x50\n    bl ov81_02242FDC\n    ldr r0, _02240D28 ; =0x0000047C\n    ldr r0, [r4, r0]\n    cmp r0, #2\n    bne _02240D1E\n    add r4, #0x70\n    add r0, r4, #0\n    bl ov81_022430E8\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _02240D24: .word ov81_02242BC8\n    _02240D28: .word 0x0000047C"
    );
    #endif
}

void ov81_02240D2C(void) {
    /* Original at 0x02240D2C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetHBlankIntrCB\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _02240D5C ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _02240D60 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    pop {r3, pc}\n    _02240D5C: .word 0xFFFFE0FF\n    _02240D60: .word 0x04001000"
    );
    #endif
}

void ov81_02240D64(void) {
    /* Original at 0x02240D64 */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0xb7\n    mov r1, #0x64\n    bl NARC_New\n    mov r1, #0xf7\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov81_022403C0\n    add r0, r5, #0\n    bl ov81_02240448\n    mov r0, #4\n    mov r1, #0x64\n    bl FontID_Alloc\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xc2\n    mov r3, #0x64\n    bl NewMsgDataFromNarc\n    str r0, [r5, #0x1c]\n    mov r0, #0x64\n    bl MessageFormat_New\n    str r0, [r5, #0x20]\n    mov r0, #0x32\n    lsl r0, r0, #4\n    mov r1, #0x64\n    bl String_New\n    str r0, [r5, #0x24]\n    mov r0, #0x32\n    lsl r0, r0, #4\n    mov r1, #0x64\n    bl String_New\n    str r0, [r5, #0x28]\n    mov r6, #0\n    add r4, r5, #0\n    mov r7, #0x40\n    add r0, r7, #0\n    mov r1, #0x64\n    bl String_New\n    str r0, [r4, #0x2c]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #4\n    blt _02240DBE\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x64\n    bl LoadFontPal0\n    mov r1, #0x1a\n    mov r0, #4\n    lsl r1, r1, #4\n    mov r2, #0x64\n    bl LoadFontPal0\n    mov r1, #6\n    mov r0, #0\n    lsl r1, r1, #6\n    mov r2, #0x64\n    bl LoadFontPal1\n    mov r1, #6\n    mov r0, #4\n    lsl r1, r1, #6\n    mov r2, #0x64\n    bl LoadFontPal1\n    mov r0, #0x64\n    bl PokepicManager_Create\n    mov r1, #0x6a\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    bl sub_02037474\n    cmp r0, #0\n    beq _02240E26\n    mov r0, #1\n    mov r1, #0x10\n    bl G2dRenderer_SetObjCharTransferReservedRegion\n    mov r0, #1\n    bl G2dRenderer_SetPlttTransferReservedRegion\n    bl sub_0203A880\n    add r0, r5, #0\n    mov r1, #0\n    bl ov81_02240F08\n    cmp r0, #1\n    bne _02240E40\n    add r0, r5, #0\n    bl ov81_0223E87C\n    add r0, r5, #0\n    bl ov81_0223E8B0\n    b _02240E4C\n    add r0, r5, #0\n    bl ov81_0223EBE4\n    add r0, r5, #0\n    bl ov81_0223EC44\n    add r0, r5, #0\n    bl ov81_02242500\n    mov r1, #0xf7\n    lsl r1, r1, #2\n    ldr r0, [r5, #0x4c]\n    ldr r1, [r5, r1]\n    bl ov81_02243100\n    add r0, r5, #0\n    bl ov81_0224271C\n    bl GfGfx_BothDispOn\n    ldr r0, _02240E74 ; =ov81_022401C8\n    add r1, r5, #0\n    bl Main_SetVBlankIntrCB\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02240E74: .word ov81_022401C8"
    );
    #endif
}

void ov81_02240E78(void) {
    /* Original at 0x02240E78 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x64\n    mov r1, #0x3c\n    bl Heap_Alloc\n    mov r1, #7\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #0\n    mov r2, #0x3c\n    bl memset\n    mov r1, #0xf\n    mov r2, #7\n    lsl r1, r1, #6\n    lsl r2, r2, #6\n    ldr r3, [r4, r1]\n    ldr r0, [r4, r2]\n    add r1, #0xa8\n    str r3, [r0]\n    add r0, r2, #0\n    sub r0, #8\n    ldr r3, [r4, r0]\n    ldr r0, [r4, r2]\n    str r3, [r0, #4]\n    ldr r0, [r4, r2]\n    mov r3, #1\n    strb r3, [r0, #0x11]\n    ldr r0, [r4, r2]\n    strb r3, [r0, #0x12]\n    ldrb r3, [r4, #0x12]\n    ldr r0, [r4, r2]\n    strb r3, [r0, #0x13]\n    ldr r1, [r4, r1]\n    ldr r0, [r4, r2]\n    strb r1, [r0, #0x14]\n    ldr r0, [r4, r2]\n    mov r1, #0\n    strh r1, [r0, #0x18]\n    sub r0, r2, #4\n    ldr r0, [r4, r0]\n    bl SaveArray_IsNatDexEnabled\n    mov r1, #7\n    lsl r1, r1, #6\n    ldr r2, [r4, r1]\n    str r0, [r2, #0x1c]\n    ldr r0, [r4, r1]\n    mov r2, #0\n    str r2, [r0, #0x2c]\n    ldr r0, [r4, r1]\n    str r2, [r0, #0x34]\n    ldr r0, [r4, r1]\n    ldr r1, _02240F04 ; =_02243458\n    bl sub_02089D40\n    mov r0, #0x6f\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Save_PlayerData_GetProfile\n    add r1, r0, #0\n    mov r0, #7\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl sub_0208AD34\n    pop {r4, pc}\n    _02240F04: .word _02243458"
    );
    #endif
}

void ov81_02240F08(void) {
    /* Original at 0x02240F08 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0xb]\n    cmp r0, r1\n    bne _02240F12\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov81_02240F18(void) {
    /* Original at 0x02240F18 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0\n    beq _02240F20\n    cmp r0, #1\n    bne _02240F24\n    mov r0, #3\n    bx lr\n    mov r0, #2\n    bx lr"
    );
    #endif
}

void ov81_02240F28(void) {
    /* Original at 0x02240F28 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0x13]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _02240F34\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov81_02240F38(void) {
    /* Original at 0x02240F38 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r3, [r0, #0x13]\n    mov r2, #1\n    bic r3, r2\n    mov r2, #1\n    and r1, r2\n    orr r1, r3\n    strb r1, [r0, #0x13]\n    bx lr"
    );
    #endif
}

void ov81_02240F48(void) {
    /* Original at 0x02240F48 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    lsl r4, r1, #2\n    ldr r1, [sp, #0x20]\n    mov r7, #0x6b\n    lsl r7, r7, #2\n    str r1, [sp]\n    mov r1, #0\n    str r1, [sp, #4]\n    sub r1, r7, #4\n    add r5, r0, r7\n    ldr r0, [r0, r1]\n    mov r1, #0\n    add r6, r2, #0\n    bl ov81_02242C80\n    str r0, [r5, r4]\n    ldr r0, [r5, r4]\n    mov r1, #6\n    mov r2, #0\n    bl Pokepic_SetAttr\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    add r0, r6, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    add r0, r7, #0\n    mov r2, #0x1c\n    bl GetMonBaseStat_HandleAlternateForm\n    cmp r0, #0\n    bne _02240FA0\n    ldr r0, [r5, r4]\n    ldr r1, [sp, #0x24]\n    bl ov81_02242CB0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_02240FA4(void) {
    /* Original at 0x02240FA4 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #9]\n    add r4, r1, #0\n    add r7, r2, #0\n    bl ov80_02237254\n    cmp r0, #0\n    bne _02240FBA\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #7\n    beq _02240FC8\n    cmp r4, #8\n    beq _02240FD4\n    cmp r4, #0xa\n    beq _02240FE2\n    b _02240FEE\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r6, #0x1d\n    bl ov81_02241008\n    b _02240FEE\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    mov r6, #0x1e\n    bl ov81_0224102C\n    b _02240FEE\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    mov r6, #0x20\n    bl ov81_02241218\n    mov r1, #0x3e\n    lsl r1, r1, #4\n    add r0, r6, #0\n    add r1, r5, r1\n    mov r2, #0x3c\n    bl sub_02037030\n    cmp r0, #1\n    bne _02241004\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_02241008(void) {
    Save_PlayerData_GetProfile(0x3e, 0x6f);
}

void ov81_02241020(void) {
    sub_0203769C();
}

void ov81_0224102C(void) {
    /* Original at 0x0224102C */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r1, #0\n    mov r0, #0x3e\n    str r1, [sp]\n    add r2, r5, #0\n    add r4, r1, #0\n    lsl r0, r0, #4\n    add r1, r1, #1\n    strh r4, [r2, r0]\n    add r2, r2, #2\n    cmp r1, #0x3c\n    blt _0224103C\n    ldrb r1, [r5, #0x11]\n    mov r0, #0x3e\n    lsl r0, r0, #4\n    strh r1, [r5, r0]\n    ldr r0, [sp]\n    add r0, r0, #1\n    str r0, [sp]\n    ldrb r0, [r5, #0x11]\n    cmp r0, #0\n    ble _0224108C\n    ldr r0, [sp]\n    add r7, r5, #0\n    lsl r0, r0, #1\n    add r6, r5, r0\n    mov r1, #0xf2\n    mov r0, #0xf\n    lsl r1, r1, #2\n    lsl r0, r0, #6\n    ldrh r1, [r7, r1]\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x3e\n    lsl r1, r1, #4\n    strh r0, [r6, r1]\n    ldrb r0, [r5, #0x11]\n    add r4, r4, #1\n    add r7, r7, #2\n    add r6, r6, #2\n    cmp r4, r0\n    blt _02241062\n    ldr r1, [sp]\n    mov r7, #0\n    add r1, r1, r0\n    cmp r0, #0\n    ble _022410C6\n    lsl r0, r1, #1\n    add r6, r5, #0\n    add r4, r5, r0\n    mov r1, #0xf2\n    mov r0, #0xf\n    lsl r1, r1, #2\n    lsl r0, r0, #6\n    ldrh r1, [r6, r1]\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    mov r1, #0x6f\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x3e\n    lsl r1, r1, #4\n    strh r0, [r4, r1]\n    ldrb r0, [r5, #0x11]\n    add r7, r7, #1\n    add r6, r6, #2\n    add r4, r4, #2\n    cmp r7, r0\n    blt _0224109C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_022410C8(void) {
    /* Original at 0x022410C8 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r3, #0\n    add r7, r0, #0\n    ldrb r0, [r5, #9]\n    add r6, r2, #0\n    mov r4, #0\n    bl ov80_02236DD4\n    bl sub_0203769C\n    cmp r7, r0\n    beq _0224112C\n    ldrh r0, [r6]\n    add r4, r4, #1\n    strb r0, [r5, #0x18]\n    ldrb r3, [r5, #0x18]\n    mov r0, #0\n    cmp r3, #0\n    ble _02241106\n    lsl r1, r4, #1\n    ldr r7, _02241130 ; =0x0000045A\n    add r1, r6, r1\n    add r2, r5, #0\n    ldrh r3, [r1]\n    add r0, r0, #1\n    add r1, r1, #2\n    strh r3, [r2, r7]\n    ldrb r3, [r5, #0x18]\n    add r2, r2, #2\n    cmp r0, r3\n    blt _022410F6\n    add r1, r4, r3\n    mov r0, #0\n    cmp r3, #0\n    ble _02241126\n    lsl r1, r1, #1\n    add r3, r6, r1\n    ldr r1, _02241134 ; =0x0000045E\n    add r4, r5, #0\n    ldrh r2, [r3]\n    add r0, r0, #1\n    add r3, r3, #2\n    strh r2, [r4, r1]\n    ldrb r2, [r5, #0x18]\n    add r4, r4, #2\n    cmp r0, r2\n    blt _02241116\n    ldr r0, _02241138 ; =0x00000463\n    mov r1, #1\n    strb r1, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02241130: .word 0x0000045A\n    _02241134: .word 0x0000045E\n    _02241138: .word 0x00000463"
    );
    #endif
}

void ov81_0224113C(void) {
    GF_AssertFail();
}

void ov81_02241144(void) {
    /* Original at 0x02241144 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r7, r0, #0\n    ldrb r0, [r7, #9]\n    bl ov80_02236DD4\n    str r0, [sp, #0x18]\n    ldrb r0, [r7, #0x13]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _02241180\n    add r0, r7, #0\n    add r0, #0x60\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r7, #0\n    add r0, #0xa0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r7, #0xb0\n    add r0, r7, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0224120C ; =0x00000463\n    ldrb r0, [r7, r0]\n    cmp r0, #1\n    bne _02241200\n    ldr r0, [sp, #0x18]\n    mov r4, #0\n    cmp r0, #0\n    ble _022411E8\n    add r6, r7, #0\n    add r5, r7, #0\n    add r6, #0x50\n    add r0, r4, #5\n    lsl r0, r0, #4\n    str r0, [sp, #0x1c]\n    add r0, r6, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldrb r0, [r7, #0x18]\n    cmp r4, r0\n    bge _022411D6\n    mov r0, #0xf\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, _02241210 ; =0x0000045A\n    ldr r1, [sp, #0x1c]\n    ldrh r0, [r5, r0]\n    mov r2, #0\n    add r1, r6, r1\n    str r0, [sp, #0x10]\n    ldr r0, _02241214 ; =0x0000045E\n    add r3, r2, #0\n    ldrh r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    bl ov81_02240AD8\n    ldr r0, [sp, #0x1c]\n    add r0, r6, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, [sp, #0x18]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, r0\n    blt _02241196\n    mov r2, #0\n    add r1, r7, #0\n    add r0, r7, #0\n    add r1, #0x60\n    add r3, r2, #0\n    str r2, [sp]\n    bl ov81_0224093C\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _0224120C ; =0x00000463\n    mov r1, #0\n    strb r1, [r7, r0]\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224120C: .word 0x00000463\n    _02241210: .word 0x0000045A\n    _02241214: .word 0x0000045E"
    );
    #endif
}

void ov81_02241218(void) {
    /* Original at 0x02241218 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0x3e\n    lsl r3, r3, #4\n    strh r1, [r0, r3]\n    add r1, r3, #2\n    strh r2, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0x18\n    ldrh r2, [r0, r1]\n    add r1, r3, #4\n    strh r2, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0x16\n    ldrh r2, [r0, r1]\n    add r1, r3, #6\n    strh r2, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov81_02241238(void) {
    /* Original at 0x02241238 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _022412BC ; =0x00000462\n    add r4, r3, #0\n    ldrb r1, [r4, r0]\n    add r5, r2, #0\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _022412BA\n    ldrh r0, [r5, #2]\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    ldr r0, _022412C0 ; =0x00000458\n    strh r1, [r4, r0]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02241294\n    ldrb r0, [r4, #0x13]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _02241274\n    ldr r0, _022412C0 ; =0x00000458\n    mov r1, #0\n    strh r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    ldr r1, _022412C0 ; =0x00000458\n    ldrh r0, [r4, r1]\n    cmp r0, #1\n    bne _022412BA\n    ldrh r0, [r5, #4]\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    add r0, r1, #0\n    sub r0, #0x90\n    strh r2, [r4, r0]\n    ldrh r0, [r5, #6]\n    sub r1, #0x8e\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    strh r0, [r4, r1]\n    pop {r4, r5, r6, pc}\n    ldr r1, _022412C0 ; =0x00000458\n    ldrh r0, [r4, r1]\n    cmp r0, #1\n    bne _022412BA\n    ldrb r2, [r4, #0x13]\n    mov r0, #8\n    bic r2, r0\n    strb r2, [r4, #0x13]\n    ldrh r0, [r5, #4]\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    add r0, r1, #0\n    sub r0, #0x90\n    strh r2, [r4, r0]\n    ldrh r0, [r5, #6]\n    sub r1, #0x8e\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    strh r0, [r4, r1]\n    pop {r4, r5, r6, pc}\n    _022412BC: .word 0x00000462\n    _022412C0: .word 0x00000458"
    );
    #endif
}

void ov81_022412C4(void) {
    /* Original at 0x022412C4 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #0\n    add r5, r0, #0\n    bl ov81_02240F08\n    cmp r0, #1\n    bne _022412E0\n    ldr r0, _02241320 ; =ov81_02243490\n    lsl r2, r4, #2\n    ldrh r1, [r0, r2]\n    ldr r0, _02241324 ; =ov81_02243492\n    ldrh r2, [r0, r2]\n    b _02241312\n    ldrb r0, [r5, #9]\n    bl ov80_02237254\n    cmp r0, #0\n    bne _022412F6\n    ldr r0, _02241328 ; =ov81_02243464\n    lsl r2, r4, #2\n    ldrh r1, [r0, r2]\n    ldr r0, _0224132C ; =ov81_02243466\n    ldrh r2, [r0, r2]\n    b _02241312\n    ldrb r0, [r5, #0x12]\n    cmp r0, #2\n    bne _02241308\n    ldr r0, _02241330 ; =ov81_0224345C\n    lsl r2, r4, #2\n    ldrh r1, [r0, r2]\n    ldr r0, _02241334 ; =ov81_0224345E\n    ldrh r2, [r0, r2]\n    b _02241312\n    ldr r0, _02241338 ; =ov81_02243470\n    lsl r2, r4, #2\n    ldrh r1, [r0, r2]\n    ldr r0, _0224133C ; =ov81_02243472\n    ldrh r2, [r0, r2]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r3, #0x64\n    bl ov81_02242E50\n    pop {r3, r4, r5, pc}\n    _02241320: .word ov81_02243490\n    _02241324: .word ov81_02243492\n    _02241328: .word ov81_02243464\n    _0224132C: .word ov81_02243466\n    _02241330: .word ov81_0224345C\n    _02241334: .word ov81_0224345E\n    _02241338: .word ov81_02243470\n    _0224133C: .word ov81_02243472"
    );
    #endif
}

void ov81_02241340(void) {
    /* Original at 0x02241340 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    add r2, r1, #0\n    mov r1, #0xa\n    str r1, [sp]\n    mov r1, #0x80\n    str r1, [sp, #4]\n    mov r1, #0x7c\n    str r1, [sp, #8]\n    mov r1, #0x71\n    lsl r1, r1, #2\n    add r0, r0, r1\n    mov r1, #1\n    mov r3, #2\n    bl ov81_02242CBC\n    add sp, #0xc\n    pop {pc}"
    );
    #endif
}

void ov81_02241364(void) {
    /* Original at 0x02241364 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xe\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0224137E\n    bl ov81_02242D74\n    mov r0, #0xe\n    mov r1, #0\n    lsl r0, r0, #6\n    str r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02241394\n    bl ov81_02242D74\n    mov r0, #0xe1\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov81_02241398(void) {
    /* Original at 0x02241398 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #1\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x64\n    bl BG_ClearCharDataRange\n    ldr r0, [r4, #0x4c]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    add r1, r4, #0\n    ldr r0, [r4, #0x4c]\n    add r1, #0x50\n    bl ov81_02242FDC\n    ldr r0, _022413DC ; =0x0000047C\n    ldr r0, [r4, r0]\n    cmp r0, #2\n    bne _022413D2\n    add r4, #0x70\n    add r0, r4, #0\n    bl ov81_022430E8\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    pop {r4, pc}\n    _022413DC: .word 0x0000047C"
    );
    #endif
}

void ov81_022413E0(void) {
    /* Original at 0x022413E0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #1\n    bl sub_0200E5D4\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    pop {r4, pc}"
    );
    #endif
}

void ov81_022413F4(void) {
    /* Original at 0x022413F4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, _02241418 ; =0x00000464\n    add r2, sp, #4\n    ldr r0, [r4, r0]\n    add r3, sp, #0\n    bl ov81_02243228\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    bl ov81_02242DAC\n    add sp, #8\n    pop {r4, pc}\n    _02241418: .word 0x00000464"
    );
    #endif
}

void ov81_0224141C(void) {
    /* Original at 0x0224141C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, _0224144C ; =0x00000464\n    add r2, sp, #4\n    ldr r0, [r4, r0]\n    add r3, sp, #0\n    bl ov81_02243228\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #3\n    bl ov81_02242DE4\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    bl ov81_02242DAC\n    add sp, #8\n    pop {r4, pc}\n    _0224144C: .word 0x00000464"
    );
    #endif
}

void ov81_02241450(void) {
    /* Original at 0x02241450 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0xf7\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldr r0, [r4, #0x4c]\n    ldr r1, [r4, r1]\n    mov r2, #0\n    bl ov81_02243140\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x13\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _022414D8 ; =0x00000468\n    ldr r0, [r4, r0]\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov81_02242F40\n    cmp r0, #0\n    bne _02241498\n    mov r0, #0x11\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    b _022414A2\n    mov r0, #0x12\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _022414DC ; =0x00000464\n    mov r1, #6\n    ldr r0, [r4, r0]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    mov r1, #6\n    bl ov81_0224141C\n    ldr r0, _022414DC ; =0x00000464\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ov81_02243270\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov81_02242E08\n    pop {r4, pc}\n    _022414D8: .word 0x00000468\n    _022414DC: .word 0x00000464"
    );
    #endif
}

void ov81_022414E0(void) {
    /* Original at 0x022414E0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x4c]\n    mov r1, #0\n    bl ov81_022431E0\n    ldr r1, _02241520 ; =0x00000464\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, _02241520 ; =0x00000464\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ov81_02243270\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242E08\n    pop {r4, pc}\n    _02241520: .word 0x00000464"
    );
    #endif
}

void ov81_02241524(void) {
    /* Original at 0x02241524 */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r4, r0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    mov r0, #0x11\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    mov r0, #0x12\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    mov r0, #0x13\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _0224164C ; =0x000F0E02\n    lsl r5, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    lsr r3, r5, #0x1f\n    add r0, #0xfe\n    add r3, r5, r3\n    ldr r1, [r4, #0x1c]\n    add r0, r4, r0\n    mov r2, #5\n    asr r3, r3, #1\n    bl ov81_022430B4\n    mov r0, #0x11\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _0224164C ; =0x000F0E02\n    lsl r5, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0x11\n    lsr r3, r5, #0x1f\n    lsl r0, r0, #4\n    add r3, r5, r3\n    ldr r1, [r4, #0x1c]\n    add r0, r4, r0\n    mov r2, #6\n    asr r3, r3, #1\n    bl ov81_022430B4\n    mov r0, #0x12\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _0224164C ; =0x000F0E02\n    lsl r5, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0x12\n    lsr r3, r5, #0x1f\n    lsl r0, r0, #4\n    add r3, r5, r3\n    ldr r1, [r4, #0x1c]\n    add r0, r4, r0\n    mov r2, #8\n    asr r3, r3, #1\n    bl ov81_022430B4\n    mov r0, #0x13\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _0224164C ; =0x000F0E02\n    lsl r5, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0x13\n    lsr r3, r5, #0x1f\n    lsl r0, r0, #4\n    add r3, r5, r3\n    ldr r1, [r4, #0x1c]\n    add r0, r4, r0\n    mov r2, #7\n    asr r3, r3, #1\n    bl ov81_022430B4\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x11\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x12\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x13\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0224164C: .word 0x000F0E02"
    );
    #endif
}

void ov81_02241650(void) {
    /* Original at 0x02241650 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _022416C8 ; =0x00000464\n    add r2, sp, #4\n    ldr r0, [r5, r0]\n    add r3, sp, #0\n    add r4, r1, #0\n    bl ov81_02243228\n    cmp r4, #3\n    bne _0224169E\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #6\n    bl ov81_02242DE4\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    bl ov81_02242DAC\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    bl ov81_02242DAC\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _022416C8: .word 0x00000464"
    );
    #endif
}

void ov81_022416CC(void) {
    /* Original at 0x022416CC */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _02241748 ; =0x00000464\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    add r2, sp, #4\n    add r3, sp, #0\n    bl ov81_02243228\n    sub r0, r4, #4\n    cmp r0, #1\n    bhi _0224171C\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #6\n    bl ov81_02242DE4\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    bl ov81_02242DAC\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    bl ov81_02242DAC\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _02241748: .word 0x00000464"
    );
    #endif
}

void ov81_0224174C(void) {
    /* Original at 0x0224174C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x4c]\n    mov r1, #3\n    bl ov81_022431E0\n    mov r1, #0xf7\n    lsl r1, r1, #2\n    ldr r0, [r4, #0x4c]\n    ldr r1, [r4, r1]\n    mov r2, #0\n    bl ov81_02243140\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #5\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x13\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _022417B0 ; =0x00000464\n    mov r1, #4\n    ldr r0, [r4, r0]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    mov r1, #4\n    bl ov81_0224141C\n    ldr r0, _022417B0 ; =0x00000464\n    ldrb r2, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov81_02243314\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    pop {r4, pc}\n    _022417B0: .word 0x00000464"
    );
    #endif
}

void ov81_022417B4(void) {
    /* Original at 0x022417B4 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x4c]\n    mov r1, #0\n    bl ov81_022431E0\n    mov r1, #0xf7\n    lsl r1, r1, #2\n    ldr r0, [r4, #0x4c]\n    ldr r1, [r4, r1]\n    mov r2, #3\n    bl ov81_02243140\n    add r0, r4, #0\n    add r0, #0xf0\n    bl ScheduleWindowCopyToVram\n    ldr r1, _02241800 ; =0x00000464\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, _02241800 ; =0x00000464\n    ldrb r2, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02243314\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    pop {r4, pc}\n    _02241800: .word 0x00000464"
    );
    #endif
}

void ov81_02241804(void) {
    /* Original at 0x02241804 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0224183C ; =0x00000464\n    ldr r0, [r5, r0]\n    bl GridInputHandler_GetNextInput\n    mov r1, #0xf7\n    lsl r1, r1, #2\n    add r4, r0, #0\n    ldr r0, [r5, #0x4c]\n    ldr r1, [r5, r1]\n    mov r2, #3\n    bl ov81_02243140\n    add r0, r5, #0\n    add r0, #0xf0\n    bl ScheduleWindowCopyToVram\n    cmp r4, #3\n    bne _02241838\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    pop {r3, r4, r5, pc}\n    nop\n    _0224183C: .word 0x00000464"
    );
    #endif
}

void ov81_02241840(void) {
    /* Original at 0x02241840 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x4c]\n    mov r1, #3\n    bl ov81_022431E0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    pop {r4, pc}"
    );
    #endif
}

void ov81_0224185C(void) {
    /* Original at 0x0224185C */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r4, r0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    mov r0, #5\n    lsl r0, r0, #6\n    add r0, r4, r0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    mov r0, #0x13\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0xf0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _0224197C ; =0x000F0E02\n    lsl r5, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    lsr r3, r5, #0x1f\n    add r0, #0xfe\n    add r3, r5, r3\n    ldr r1, [r4, #0x1c]\n    add r0, r4, r0\n    mov r2, #0x14\n    asr r3, r3, #1\n    bl ov81_022430B4\n    mov r0, #5\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _0224197C ; =0x000F0E02\n    lsl r5, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #5\n    lsr r3, r5, #0x1f\n    lsl r0, r0, #6\n    add r3, r5, r3\n    ldr r1, [r4, #0x1c]\n    add r0, r4, r0\n    mov r2, #0x15\n    asr r3, r3, #1\n    bl ov81_022430B4\n    mov r0, #0x13\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _0224197C ; =0x000F0E02\n    lsl r5, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0x13\n    lsr r3, r5, #0x1f\n    lsl r0, r0, #4\n    add r3, r5, r3\n    ldr r1, [r4, #0x1c]\n    add r0, r4, r0\n    mov r2, #0x16\n    asr r3, r3, #1\n    bl ov81_022430B4\n    add r0, r4, #0\n    add r0, #0xf0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _0224197C ; =0x000F0E02\n    lsl r5, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    lsr r3, r5, #0x1f\n    add r0, r4, #0\n    add r3, r5, r3\n    ldr r1, [r4, #0x1c]\n    add r0, #0xf0\n    mov r2, #0x13\n    asr r3, r3, #1\n    bl ov81_022430B4\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #5\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x13\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    add r4, #0xf0\n    add r0, r4, #0\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0224197C: .word 0x000F0E02"
    );
    #endif
}

void ov81_02241980(void) {
    /* Original at 0x02241980 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x4c]\n    mov r1, #2\n    bl ov81_022431E0\n    mov r1, #0xf7\n    lsl r1, r1, #2\n    ldr r0, [r4, #0x4c]\n    ldr r1, [r4, r1]\n    mov r2, #1\n    bl ov81_02243140\n    mov r0, #0x15\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x16\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _022419DC ; =0x00000464\n    mov r1, #6\n    ldr r0, [r4, r0]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    mov r1, #6\n    bl ov81_0224141C\n    ldr r0, _022419DC ; =0x00000464\n    ldrb r2, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov81_022433FC\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    pop {r4, pc}\n    nop\n    _022419DC: .word 0x00000464"
    );
    #endif
}

void ov81_022419E0(void) {
    /* Original at 0x022419E0 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x4c]\n    mov r1, #1\n    bl ov81_022431E0\n    mov r1, #0xf7\n    lsl r1, r1, #2\n    ldr r0, [r4, #0x4c]\n    ldr r1, [r4, r1]\n    mov r2, #2\n    bl ov81_02243140\n    add r0, r4, #0\n    add r0, #0xe0\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #0\n    add r0, #0xf0\n    bl ScheduleWindowCopyToVram\n    ldr r1, _02241A34 ; =0x00000464\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, _02241A34 ; =0x00000464\n    ldrb r2, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_022433FC\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    pop {r4, pc}\n    _02241A34: .word 0x00000464"
    );
    #endif
}

void ov81_02241A38(void) {
    /* Original at 0x02241A38 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02241A78 ; =0x00000464\n    ldr r0, [r5, r0]\n    bl GridInputHandler_GetNextInput\n    mov r1, #0xf7\n    lsl r1, r1, #2\n    add r4, r0, #0\n    ldr r0, [r5, #0x4c]\n    ldr r1, [r5, r1]\n    mov r2, #2\n    bl ov81_02243140\n    add r0, r5, #0\n    add r0, #0xe0\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add r0, #0xf0\n    bl ScheduleWindowCopyToVram\n    cmp r4, #4\n    blo _02241A74\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    pop {r3, r4, r5, pc}\n    nop\n    _02241A78: .word 0x00000464"
    );
    #endif
}

void ov81_02241A7C(void) {
    /* Original at 0x02241A7C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x4c]\n    mov r1, #2\n    bl ov81_022431E0\n    mov r0, #0xe3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    pop {r4, pc}"
    );
    #endif
}

void ov81_02241A98(void) {
    /* Original at 0x02241A98 */
    /* Requires manual decompilation - 127 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0x15\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    mov r0, #0x16\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0xe0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0xf0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    mov r0, #0x15\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _02241BB4 ; =0x000F0E02\n    lsl r5, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0x15\n    lsr r3, r5, #0x1f\n    lsl r0, r0, #4\n    add r3, r5, r3\n    ldr r1, [r4, #0x1c]\n    add r0, r4, r0\n    mov r2, #0x19\n    asr r3, r3, #1\n    bl ov81_022430B4\n    mov r0, #0x16\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _02241BB4 ; =0x000F0E02\n    lsl r5, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0x16\n    lsr r3, r5, #0x1f\n    lsl r0, r0, #4\n    add r3, r5, r3\n    ldr r1, [r4, #0x1c]\n    add r0, r4, r0\n    mov r2, #0x16\n    asr r3, r3, #1\n    bl ov81_022430B4\n    add r0, r4, #0\n    add r0, #0xe0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _02241BB4 ; =0x000F0E02\n    lsl r5, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    lsr r3, r5, #0x1f\n    add r0, r4, #0\n    add r3, r5, r3\n    ldr r1, [r4, #0x1c]\n    add r0, #0xe0\n    mov r2, #0x17\n    asr r3, r3, #1\n    bl ov81_022430B4\n    add r0, r4, #0\n    add r0, #0xf0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _02241BB4 ; =0x000F0E02\n    lsl r5, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    lsr r3, r5, #0x1f\n    add r0, r4, #0\n    add r3, r5, r3\n    ldr r1, [r4, #0x1c]\n    add r0, #0xf0\n    mov r2, #0x18\n    asr r3, r3, #1\n    bl ov81_022430B4\n    mov r0, #0x15\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x16\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    add r0, r4, #0\n    add r0, #0xe0\n    bl CopyWindowPixelsToVram_TextMode\n    add r4, #0xf0\n    add r0, r4, #0\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _02241BB4: .word 0x000F0E02"
    );
    #endif
}

void ov81_02241BB8(void) {
    YesNoPrompt_Create();
}

void ov81_02241BC8(void) {
    YesNoPrompt_Destroy();
}

void ov81_02241BD0(void) {
    /* Original at 0x02241BD0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x14\n    str r1, [sp]\n    mov r1, #4\n    str r1, [sp, #4]\n    mov r1, #0xe\n    lsl r1, r1, #6\n    str r1, [sp, #8]\n    mov r1, #0xe\n    str r1, [sp, #0xc]\n    mov r1, #0x19\n    add r2, sp, #0\n    strb r1, [r2, #0x10]\n    mov r1, #0xa\n    strb r1, [r2, #0x11]\n    ldrb r3, [r2, #0x12]\n    mov r1, #0xf\n    bic r3, r1\n    strb r3, [r2, #0x12]\n    ldrb r3, [r2, #0x12]\n    mov r1, #0xf0\n    bic r3, r1\n    strb r3, [r2, #0x12]\n    mov r1, #0\n    strb r1, [r2, #0x13]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    add sp, #0x14\n    pop {pc}"
    );
    #endif
}

void ov81_02241C0C(void) {
    /* Original at 0x02241C0C */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _02241C80 ; =0x00000464\n    ldr r0, [r4, r0]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    cmp r2, #6\n    bhs _02241C7C\n    ldrb r1, [r4, #0x11]\n    mov r0, #0\n    cmp r1, #0\n    ble _02241C3E\n    mov r3, #0xf2\n    lsl r3, r3, #2\n    lsl r5, r0, #1\n    add r5, r4, r5\n    ldrh r5, [r5, r3]\n    cmp r2, r5\n    beq _02241C3E\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, r1\n    blt _02241C2A\n    cmp r1, #0\n    beq _02241C5A\n    cmp r0, r1\n    beq _02241C5A\n    lsl r0, r1, #2\n    add r1, r4, r0\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #6\n    mov r2, #1\n    bl Pokepic_SetAttr\n    b _02241C76\n    add r0, r4, #0\n    mov r3, #0\n    bl ov81_02241E68\n    ldrb r0, [r4, #0x11]\n    mov r2, #0\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #6\n    bl Pokepic_SetAttr\n    add r0, r4, #0\n    bl ov81_02241CEC\n    pop {r3, r4, r5, pc}\n    nop\n    _02241C80: .word 0x00000464"
    );
    #endif
}

void ov81_02241C84(void) {
    /* Original at 0x02241C84 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #3\n    bne _02241C90\n    mov r1, #0x50\n    mul r1, r0\n    add r1, #0x30\n    b _02241C96\n    mov r1, #0x70\n    mul r1, r0\n    add r1, #0x48\n    str r1, [r2]\n    mov r0, #0x90\n    str r0, [r3]\n    bx lr"
    );
    #endif
}

void ov81_02241CA0(void) {
    /* Original at 0x02241CA0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _02241CE4 ; =0x00000464\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    add r7, r2, #0\n    bl GridInputHandler_GetNextInput\n    cmp r0, #6\n    bhs _02241CE2\n    ldrb r2, [r5, #0x11]\n    mov r1, #0\n    cmp r2, #0\n    ble _02241CD4\n    mov r3, #0xf2\n    lsl r3, r3, #2\n    lsl r6, r1, #1\n    add r6, r5, r6\n    ldrh r6, [r6, r3]\n    cmp r0, r6\n    beq _02241CD4\n    add r1, r1, #1\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    cmp r1, r2\n    blt _02241CC0\n    add r0, r1, #0\n    ldr r1, _02241CE8 ; =0x0000047C\n    add r2, r4, #0\n    ldr r1, [r5, r1]\n    add r3, r7, #0\n    bl ov81_02241C84\n    pop {r3, r4, r5, r6, r7, pc}\n    _02241CE4: .word 0x00000464\n    _02241CE8: .word 0x0000047C"
    );
    #endif
}

void ov81_02241CEC(void) {
    /* Original at 0x02241CEC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r1, sp, #4\n    add r2, sp, #0\n    add r4, r0, #0\n    bl ov81_02241CA0\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    bl ov81_02242D94\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov81_02241D0C(void) {
    /* Original at 0x02241D0C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r1, _02241D34 ; =0x00000468\n    mov r3, #0\n    ldr r5, [r0, r1]\n    add r4, r0, #0\n    sub r1, #0xa0\n    ldrh r2, [r4, r1]\n    cmp r5, r2\n    bne _02241D24\n    add r0, r3, #0\n    pop {r4, r5}\n    bx lr\n    add r3, r3, #1\n    add r4, r4, #2\n    cmp r3, #3\n    blo _02241D18\n    ldrb r0, [r0, #0x11]\n    pop {r4, r5}\n    bx lr\n    nop\n    _02241D34: .word 0x00000468"
    );
    #endif
}

void ov81_02241D38(void) {
    /* Original at 0x02241D38 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _02241D8C ; =0x00000464\n    ldr r0, [r5, r0]\n    bl GridInputHandler_GetNextInput\n    add r4, r0, #0\n    cmp r4, #4\n    bhs _02241D88\n    cmp r4, #3\n    bne _02241D60\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    ldr r1, _02241D90 ; =0x0000047C\n    add r0, r4, #0\n    ldr r1, [r5, r1]\n    add r2, sp, #4\n    add r3, sp, #0\n    bl ov81_02241C84\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    bl ov81_02242D94\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _02241D8C: .word 0x00000464\n    _02241D90: .word 0x0000047C"
    );
    #endif
}

void ov81_02241D94(void) {
    /* Original at 0x02241D94 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02241DD8 ; =0x00000464\n    ldr r0, [r5, r0]\n    bl GridInputHandler_GetNextInput\n    add r4, r0, #0\n    cmp r4, #6\n    bhs _02241DD4\n    cmp r4, #4\n    blo _02241DB8\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    pop {r3, r4, r5, pc}\n    mov r0, #0x39\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    mov r1, #0xf2\n    lsl r1, r1, #2\n    ldrh r1, [r5, r1]\n    add r0, r5, #0\n    add r2, r4, #0\n    mov r3, #0\n    bl ov81_02241EDC\n    pop {r3, r4, r5, pc}\n    nop\n    _02241DD8: .word 0x00000464"
    );
    #endif
}

void ov81_02241DDC(void) {
    /* Original at 0x02241DDC */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r0, _02241E64 ; =0x0000047C\n    str r1, [sp, #8]\n    ldr r1, [r5, r0]\n    cmp r1, #3\n    bne _02241DF6\n    mov r0, #0x30\n    str r0, [sp, #0x10]\n    mov r0, #0x50\n    str r0, [sp, #0xc]\n    b _02241DFE\n    mov r0, #0x48\n    str r0, [sp, #0x10]\n    mov r0, #0x70\n    str r0, [sp, #0xc]\n    mov r4, #0\n    cmp r1, #0\n    bls _02241E5E\n    str r4, [sp, #0x14]\n    str r5, [sp, #0x18]\n    add r7, r5, #0\n    mov r2, #0xf2\n    mov r0, #0xf\n    lsl r0, r0, #6\n    ldr r1, [sp, #0x18]\n    lsl r2, r2, #2\n    ldrh r1, [r1, r2]\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    add r2, r0, #0\n    mov r0, #0x90\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    lsl r1, r4, #0x18\n    str r0, [sp, #4]\n    ldr r6, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    add r3, r6, r3\n    bl ov81_02240F48\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    mov r1, #6\n    mov r2, #1\n    bl Pokepic_SetAttr\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #0xc]\n    add r4, r4, #1\n    add r0, r1, r0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    add r7, r7, #4\n    add r0, r0, #2\n    str r0, [sp, #0x18]\n    ldr r0, _02241E64 ; =0x0000047C\n    ldr r0, [r5, r0]\n    cmp r4, r0\n    blo _02241E0A\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02241E64: .word 0x0000047C"
    );
    #endif
}

void ov81_02241E68(void) {
    /* Original at 0x02241E68 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r5, r0, #0\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r7, r2, #0\n    add r6, r3, #0\n    bl Pokepic_Delete\n    ldr r0, _02241ED8 ; =0x0000047C\n    ldr r1, [r5, r0]\n    cmp r1, #3\n    bne _02241EB0\n    sub r0, #0xbc\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    bl Party_GetMonByIndex\n    mov r3, #0x50\n    add r2, r0, #0\n    mov r0, #0x90\n    str r0, [sp]\n    lsl r1, r4, #0x18\n    mul r3, r4\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    add r3, #0x30\n    str r6, [sp, #4]\n    bl ov81_02240F48\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, #0xbc\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    bl Party_GetMonByIndex\n    mov r3, #0x70\n    add r2, r0, #0\n    mov r0, #0x90\n    str r0, [sp]\n    lsl r1, r4, #0x18\n    mul r3, r4\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    add r3, #0x48\n    str r6, [sp, #4]\n    bl ov81_02240F48\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02241ED8: .word 0x0000047C"
    );
    #endif
}

void ov81_02241EDC(void) {
    /* Original at 0x02241EDC */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r5, r0, #0\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r7, r2, #0\n    add r6, r3, #0\n    bl Pokepic_Delete\n    ldr r0, _02241F4C ; =0x0000047C\n    ldr r1, [r5, r0]\n    cmp r1, #3\n    bne _02241F24\n    sub r0, #0xb8\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    bl Party_GetMonByIndex\n    mov r3, #0x50\n    add r2, r0, #0\n    mov r0, #0x90\n    str r0, [sp]\n    lsl r1, r4, #0x18\n    mul r3, r4\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    add r3, #0x30\n    str r6, [sp, #4]\n    bl ov81_02240F48\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, #0xb8\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    bl Party_GetMonByIndex\n    mov r3, #0x70\n    add r2, r0, #0\n    mov r0, #0x90\n    str r0, [sp]\n    lsl r1, r4, #0x18\n    mul r3, r4\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    add r3, #0x48\n    str r6, [sp, #4]\n    bl ov81_02240F48\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02241F4C: .word 0x0000047C"
    );
    #endif
}

void ov81_02241F50(void) {
    /* Original at 0x02241F50 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r0, #0\n    ldr r0, _02241FBC ; =0x0000047C\n    ldr r1, [r7, r0]\n    cmp r1, #3\n    bne _02241F68\n    mov r0, #0x30\n    str r0, [sp, #0x10]\n    mov r0, #0x50\n    str r0, [sp, #0xc]\n    b _02241F70\n    mov r0, #0x48\n    str r0, [sp, #0x10]\n    mov r0, #0x70\n    str r0, [sp, #0xc]\n    mov r4, #0\n    cmp r1, #0\n    bls _02241FB8\n    add r6, r4, #0\n    add r5, r7, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x10]\n    mov r1, #1\n    add r0, r0, r6\n    str r0, [sp, #4]\n    mov r0, #0x90\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r7, r0\n    mov r2, #3\n    add r3, r1, #0\n    bl ov81_02242CBC\n    mov r1, #0xe7\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    ldr r0, [sp, #0xc]\n    add r4, r4, #1\n    add r6, r6, r0\n    ldr r0, _02241FBC ; =0x0000047C\n    add r5, r5, #4\n    ldr r0, [r7, r0]\n    cmp r4, r0\n    blo _02241F7A\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02241FBC: .word 0x0000047C"
    );
    #endif
}

void ov81_02241FC0(void) {
    /* Original at 0x02241FC0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _02241FE8 ; =0x0000047C\n    mov r4, #0\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    bls _02241FE6\n    ldr r7, _02241FE8 ; =0x0000047C\n    add r5, r6, #0\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ov81_02242D74\n    ldr r0, [r6, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r0\n    blo _02241FD2\n    pop {r3, r4, r5, r6, r7, pc}\n    _02241FE8: .word 0x0000047C"
    );
    #endif
}

void ov81_02241FEC(void) {
    /* Original at 0x02241FEC */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _02242054 ; =0x0000047C\n    mov r4, #0\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    bls _02242052\n    mov r7, #0xe7\n    add r5, r6, #0\n    lsl r7, r7, #2\n    ldrb r0, [r6, #0x11]\n    cmp r4, r0\n    bne _0224201C\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl ov81_02242DFC\n    ldr r0, [r5, r7]\n    mov r1, #1\n    bl ov81_02242D88\n    b _02242046\n    cmp r4, r0\n    bhs _0224203A\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #2\n    bl ov81_02242DFC\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    b _02242046\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    ldr r0, _02242054 ; =0x0000047C\n    add r4, r4, #1\n    ldr r0, [r6, r0]\n    add r5, r5, #4\n    cmp r4, r0\n    blo _02242000\n    pop {r3, r4, r5, r6, r7, pc}\n    _02242054: .word 0x0000047C"
    );
    #endif
}

void ov81_02242058(void) {
    /* Original at 0x02242058 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _022420AC ; =0x0000047C\n    add r7, r1, #0\n    ldr r0, [r6, r0]\n    mov r4, #0\n    cmp r0, #0\n    bls _022420A8\n    add r5, r6, #0\n    ldr r0, _022420B0 ; =0x00000468\n    ldr r0, [r6, r0]\n    cmp r4, r0\n    bne _02242084\n    cmp r7, #1\n    bne _02242084\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl ov81_02242DFC\n    b _02242090\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #2\n    bl ov81_02242DFC\n    mov r0, #0xe7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    ldr r0, _022420AC ; =0x0000047C\n    add r4, r4, #1\n    ldr r0, [r6, r0]\n    add r5, r5, #4\n    cmp r4, r0\n    blo _0224206A\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022420AC: .word 0x0000047C\n    _022420B0: .word 0x00000468"
    );
    #endif
}

void ov81_022420B4(void) {
    /* Original at 0x022420B4 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _0224216C ; =0x0000047C\n    ldr r0, [r5, r0]\n    cmp r0, #3\n    bne _022420CA\n    mov r0, #0x50\n    mov r7, #0x10\n    str r0, [sp, #0xc]\n    b _022420D0\n    mov r0, #0x70\n    mov r7, #0x28\n    str r0, [sp, #0xc]\n    mov r6, #0\n    add r4, r6, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0xc]\n    add r2, r6, #0\n    add r1, r0, #0\n    mul r1, r4\n    add r0, r7, r1\n    str r0, [sp, #4]\n    mov r0, #0xb0\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #2\n    mov r3, #0\n    bl ov81_02242CBC\n    lsl r1, r4, #2\n    add r2, r5, r1\n    mov r1, #0xea\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    add r0, r6, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #3\n    blo _022420D4\n    add r0, r1, #0\n    add r0, #0xd4\n    ldr r1, [r5, r0]\n    cmp r1, #2\n    bne _02242124\n    sub r0, #0xcc\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r6, #0\n    cmp r4, #6\n    bhs _02242166\n    lsl r0, r4, #2\n    add r7, r5, r0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #3\n    add r2, r6, #0\n    mov r3, #0\n    bl ov81_02242D18\n    mov r1, #0xea\n    lsl r1, r1, #2\n    str r0, [r7, r1]\n    add r0, r1, #0\n    ldr r0, [r7, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    add r0, r6, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #6\n    blo _0224212A\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224216C: .word 0x0000047C"
    );
    #endif
}

void ov81_02242170(void) {
    ov81_02242D74(0, 0xea);
}

void ov81_0224218C(void) {
    /* Original at 0x0224218C */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    mov r7, #0xea\n    add r5, r0, #0\n    mov r4, #3\n    lsl r7, r7, #2\n    sub r0, r4, #3\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    ldrb r0, [r5, #0x11]\n    cmp r1, r0\n    bhs _022421F8\n    lsl r0, r1, #1\n    add r1, r5, r0\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r0, [r1, r0]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov81_02242F30\n    add r6, r0, #0\n    add r3, sp, #0\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    str r0, [r3]\n    mov r0, #1\n    ldr r1, [sp]\n    lsl r0, r0, #0xe\n    sub r0, r1, r0\n    str r0, [sp]\n    mov r0, #1\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #4]\n    lsl r0, r4, #2\n    add r6, r5, r0\n    mov r0, #0xea\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    add r1, r2, #0\n    bl ov81_02242DCC\n    ldr r0, [r6, r7]\n    mov r1, #1\n    bl ov81_02242D88\n    b _02242208\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0xea\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ov81_02242D88\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #6\n    blo _02242198\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_02242218(void) {
    /* Original at 0x02242218 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r6, r2, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r6, r3\n    bhs _022422FA\n    add r0, r4, #0\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #5\n    mov r2, #0\n    str r0, [sp, #0x1c]\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x18]\n    ldr r2, [sp, #0x18]\n    add r0, r7, #0\n    mov r1, #0\n    bl GetMonIconNaixEx\n    add r1, r0, #0\n    mov r0, #0x64\n    str r0, [sp]\n    mov r0, #0x14\n    mov r2, #0\n    add r3, sp, #0x24\n    bl GfGfxLoader_GetCharData\n    str r0, [sp, #0x20]\n    mov r0, #0x12\n    lsl r0, r0, #6\n    ldr r1, [r5, r0]\n    mov r2, #2\n    lsl r1, r1, #2\n    add r1, r5, r1\n    sub r0, #0xec\n    ldr r0, [r1, r0]\n    ldr r1, [sp, #0x24]\n    lsl r2, r2, #8\n    ldr r1, [r1, #0x14]\n    mov r3, #2\n    bl ov81_02242E14\n    ldr r0, [sp, #0x20]\n    bl Heap_Free\n    ldr r1, [sp, #0x18]\n    add r0, r7, #0\n    mov r2, #0\n    bl GetMonIconPaletteEx\n    add r1, r0, #0\n    mov r0, #0x12\n    lsl r0, r0, #6\n    ldr r2, [r5, r0]\n    sub r0, #0xec\n    lsl r2, r2, #2\n    add r2, r5, r2\n    ldr r0, [r2, r0]\n    bl ov81_02242E08\n    mov r0, #0x12\n    lsl r0, r0, #6\n    ldr r1, [r5, r0]\n    sub r0, #0xec\n    lsl r1, r1, #2\n    add r1, r5, r1\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov81_02242D88\n    mov r1, #0x12\n    lsl r1, r1, #6\n    ldr r2, [r5, r1]\n    mov r0, #1\n    eor r0, r2\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    sub r1, #0xec\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl ov81_02242D88\n    mov r1, #0\n    lsl r2, r6, #0x18\n    str r1, [sp]\n    mov r0, #0xf\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    str r1, [sp, #0x10]\n    add r5, #0xd0\n    add r1, r5, #0\n    lsr r2, r2, #0x18\n    mov r3, #4\n    str r4, [sp, #0x14]\n    bl ov81_022409B0\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_02242300(void) {
    /* Original at 0x02242300 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r6, r1, #0\n    add r5, r0, #0\n    cmp r6, r2\n    bhs _022423C8\n    mov r4, #0\n    str r4, [sp, #0x18]\n    ldrb r0, [r5, #0x11]\n    cmp r0, #0\n    ble _02242364\n    add r7, r5, #0\n    add r7, #0x50\n    lsl r0, r4, #1\n    add r1, r5, r0\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r2, [r1, r0]\n    cmp r6, r2\n    bne _0224232C\n    mov r0, #1\n    str r0, [sp, #0x18]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xf\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0xf\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r1, r4, #2\n    lsl r1, r1, #4\n    lsl r2, r2, #0x18\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r1, r7, r1\n    lsr r2, r2, #0x18\n    mov r3, #4\n    bl ov81_022409B0\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldrb r0, [r5, #0x11]\n    cmp r4, r0\n    blt _0224231A\n    ldr r0, [sp, #0x18]\n    cmp r0, #0\n    bne _0224239C\n    mov r2, #0\n    str r2, [sp]\n    mov r1, #0xf\n    str r1, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    str r2, [sp, #0x10]\n    lsl r0, r1, #6\n    add r2, r5, #0\n    add r1, r4, #2\n    ldr r0, [r5, r0]\n    add r2, #0x50\n    lsl r1, r1, #4\n    add r1, r2, r1\n    lsl r2, r6, #0x18\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    lsr r2, r2, #0x18\n    mov r3, #4\n    bl ov81_022409B0\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, _022423CC ; =0x0000047C\n    ldr r0, [r5, r0]\n    cmp r4, r0\n    bhs _022423C8\n    add r6, r5, #0\n    add r6, #0x50\n    add r0, r4, #2\n    lsl r7, r0, #4\n    add r0, r6, r7\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r6, r7\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, _022423CC ; =0x0000047C\n    ldr r0, [r5, r0]\n    cmp r4, r0\n    blo _022423A8\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _022423CC: .word 0x0000047C"
    );
    #endif
}

void ov81_022423D0(void) {
    /* Original at 0x022423D0 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, _0224241C ; =0x0000047C\n    add r7, r1, #0\n    ldr r0, [r5, r0]\n    mov r4, #0\n    cmp r0, #0\n    bls _02242416\n    add r6, r5, #0\n    add r6, #0x50\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xf\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r4, #2\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    lsl r1, r1, #4\n    lsl r2, r4, #0x18\n    add r0, r5, #0\n    add r1, r6, r1\n    lsr r2, r2, #0x18\n    mov r3, #4\n    str r7, [sp, #0x14]\n    bl ov81_022409B0\n    ldr r0, _0224241C ; =0x0000047C\n    add r4, r4, #1\n    ldr r0, [r5, r0]\n    cmp r4, r0\n    blo _022423E6\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224241C: .word 0x0000047C"
    );
    #endif
}

void ov81_02242420(void) {
    /* Original at 0x02242420 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, _022424A8 ; =0x0000047C\n    mov r4, #0\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bls _022424A4\n    add r6, r5, #0\n    lsl r0, r1, #0x18\n    add r6, #0x50\n    lsr r7, r0, #0x18\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldrh r0, [r5, r0]\n    cmp r0, r4\n    bne _0224246E\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xf\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0xf1\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #2\n    lsl r1, r1, #4\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r1, r6, r1\n    add r2, r7, #0\n    mov r3, #4\n    bl ov81_022409B0\n    b _0224249A\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xf\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0xf\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r1, r4, #2\n    lsl r1, r1, #4\n    lsl r2, r4, #0x18\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r1, r6, r1\n    lsr r2, r2, #0x18\n    mov r3, #4\n    bl ov81_022409B0\n    ldr r0, _022424A8 ; =0x0000047C\n    add r4, r4, #1\n    ldr r0, [r5, r0]\n    cmp r4, r0\n    blo _02242438\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _022424A8: .word 0x0000047C"
    );
    #endif
}

void ov81_022424AC(void) {
    /* Original at 0x022424AC */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    mov r6, #0xf2\n    lsl r6, r6, #2\n    add r2, r1, #0\n    ldrh r1, [r0, r6]\n    add r1, r1, #2\n    cmp r2, #4\n    blo _022424CC\n    add r0, #0x50\n    lsl r1, r1, #4\n    add r0, r0, r1\n    bl ClearWindowTilemapAndScheduleTransfer\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    lsl r4, r1, #4\n    mov r1, #0\n    str r1, [sp]\n    mov r3, #0xf\n    str r3, [sp, #4]\n    mov r3, #2\n    str r3, [sp, #8]\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    sub r1, r6, #4\n    add r5, r0, #0\n    ldr r1, [r0, r1]\n    lsl r2, r2, #0x18\n    add r5, #0x50\n    str r1, [sp, #0x14]\n    add r1, r5, r4\n    lsr r2, r2, #0x18\n    mov r3, #4\n    bl ov81_022409B0\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov81_02242500(void) {
    PaletteData_LoadPaletteSlotFromHardware(0x1a, 2, 0);
}

void ov81_02242514(void) {
    /* Original at 0x02242514 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02242580\n    ldr r1, _02242584 ; =0x00000478\n    ldr r1, [r4, r1]\n    cmp r1, #0xff\n    beq _02242580\n    bl PaletteData_GetSelectedBuffersBitmask\n    cmp r0, #0\n    bne _02242580\n    ldr r0, _02242584 ; =0x00000478\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0224255A\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, _02242588 ; =0x0000FFFF\n    mov r1, #4\n    str r0, [sp, #8]\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r2, #8\n    mov r3, #2\n    bl PaletteData_BeginPaletteFade\n    b _02242576\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _02242588 ; =0x0000FFFF\n    mov r1, #4\n    str r0, [sp, #8]\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r2, #8\n    mov r3, #2\n    bl PaletteData_BeginPaletteFade\n    ldr r1, _02242584 ; =0x00000478\n    mov r0, #1\n    ldr r2, [r4, r1]\n    eor r0, r2\n    str r0, [r4, r1]\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _02242584: .word 0x00000478\n    _02242588: .word 0x0000FFFF"
    );
    #endif
}

void ov81_0224258C(void) {
    /* Original at 0x0224258C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, _022425BC ; =0x00000484\n    strb r1, [r0, r4]\n    add r1, r4, #1\n    strb r2, [r0, r1]\n    ldr r2, _022425C0 ; =0xFFFFFFF8\n    add r1, r4, #2\n    strb r3, [r0, r1]\n    add r2, sp\n    ldrb r3, [r2, #0x10]\n    add r1, r4, #3\n    strb r3, [r0, r1]\n    ldrb r2, [r2, #0x14]\n    add r1, r4, #7\n    strb r2, [r0, r1]\n    mov r2, #0\n    add r1, r4, #4\n    strb r2, [r0, r1]\n    add r1, r4, #5\n    strb r2, [r0, r1]\n    add r1, r4, #6\n    strb r2, [r0, r1]\n    pop {r3, r4}\n    bx lr\n    _022425BC: .word 0x00000484\n    _022425C0: .word 0xFFFFFFF8"
    );
    #endif
}

void ov81_022425C4(void) {
    ov81_0224258C();
}

void ov81_022425D8(void) {
    ov81_0224258C();
}

void ov81_022425EC(void) {
    /* Original at 0x022425EC */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    ldr r3, _0224268C ; =0x00000489\n    add r4, r0, #0\n    ldrb r0, [r4, r3]\n    cmp r0, #0\n    bne _02242656\n    add r0, r3, #1\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    bne _02242624\n    sub r0, r3, #3\n    ldrb r0, [r4, r0]\n    sub r2, r3, #5\n    mov r1, #5\n    str r0, [sp]\n    sub r0, r3, #2\n    ldrb r0, [r4, r0]\n    sub r3, r3, #4\n    str r0, [sp, #4]\n    mov r0, #0xa\n    str r0, [sp, #8]\n    ldrb r2, [r4, r2]\n    ldrb r3, [r4, r3]\n    ldr r0, [r4, #0x4c]\n    bl BgTilemapRectChangePalette\n    b _02242644\n    sub r0, r3, #3\n    ldrb r0, [r4, r0]\n    sub r2, r3, #5\n    mov r1, #5\n    str r0, [sp]\n    sub r0, r3, #2\n    ldrb r0, [r4, r0]\n    sub r3, r3, #4\n    str r0, [sp, #4]\n    mov r0, #9\n    str r0, [sp, #8]\n    ldrb r2, [r4, r2]\n    ldrb r3, [r4, r3]\n    ldr r0, [r4, #0x4c]\n    bl BgTilemapRectChangePalette\n    ldr r0, [r4, #0x4c]\n    mov r1, #5\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r1, _02242690 ; =0x0000048A\n    mov r0, #1\n    ldrb r2, [r4, r1]\n    eor r0, r2\n    strb r0, [r4, r1]\n    ldr r1, _0224268C ; =0x00000489\n    ldrb r0, [r4, r1]\n    add r0, r0, #1\n    strb r0, [r4, r1]\n    ldrb r0, [r4, r1]\n    cmp r0, #2\n    bne _02242684\n    sub r0, r1, #1\n    ldrb r0, [r4, r0]\n    add r2, r0, #1\n    sub r0, r1, #1\n    strb r2, [r4, r0]\n    ldrb r0, [r4, r0]\n    cmp r0, #4\n    bne _02242680\n    add r0, r1, #2\n    ldrb r0, [r4, r0]\n    add sp, #0xc\n    strb r0, [r4, #8]\n    mov r0, #0\n    pop {r3, r4, pc}\n    mov r0, #0\n    strb r0, [r4, r1]\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0224268C: .word 0x00000489\n    _02242690: .word 0x0000048A"
    );
    #endif
}

void ov81_02242694(void) {
    /* Original at 0x02242694 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    cmp r1, #1\n    bne _022426D2\n    mov r0, #0xa\n    str r0, [sp]\n    ldr r0, _022426FC ; =0x04001050\n    mov r1, #0\n    mov r2, #0xf\n    mov r3, #6\n    bl G2x_SetBlendAlpha_\n    ldrb r0, [r5, #0x12]\n    mov r6, #0\n    cmp r0, #0\n    bls _022426FA\n    mov r7, #0x36\n    add r4, r5, #0\n    lsl r7, r7, #4\n    ldr r0, [r4, r7]\n    cmp r0, #0\n    beq _022426C6\n    mov r1, #1\n    bl ov81_02242FBC\n    ldrb r0, [r5, #0x12]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r0\n    blo _022426BA\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02242700 ; =0x04000050\n    mov r6, #0\n    strh r6, [r0]\n    ldrb r0, [r5, #0x12]\n    cmp r0, #0\n    bls _022426FA\n    mov r7, #0x36\n    add r4, r5, #0\n    lsl r7, r7, #4\n    ldr r0, [r4, r7]\n    cmp r0, #0\n    beq _022426F0\n    mov r1, #0\n    bl ov81_02242FBC\n    ldrb r0, [r5, #0x12]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r0\n    blo _022426E4\n    pop {r3, r4, r5, r6, r7, pc}\n    _022426FC: .word 0x04001050\n    _02242700: .word 0x04000050"
    );
    #endif
}

void ov81_02242704(void) {
    ov80_02237254();
}

void ov81_02242710(void) {
    ov80_02237254();
}

void ov81_0224271C(void) {
    /* Original at 0x0224271C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4, #0x4c]\n    mov r1, #2\n    mov r2, #1\n    mov r3, #0x64\n    bl sub_0201956C\n    ldr r1, _02242758 ; =0x00000474\n    mov r2, #4\n    str r0, [r4, r1]\n    str r2, [sp]\n    ldr r0, [r4, r1]\n    mov r1, #0\n    mov r3, #0x12\n    bl sub_020195F4\n    mov r0, #1\n    ldr r2, _02242758 ; =0x00000474\n    str r0, [sp]\n    ldr r0, [r4, r2]\n    sub r2, #0x98\n    ldr r2, [r4, r2]\n    mov r1, #0\n    mov r3, #0x90\n    bl sub_020196B8\n    add sp, #4\n    pop {r3, r4, pc}\n    _02242758: .word 0x00000474"
    );
    #endif
}

void ov81_0224275C(void) {
    /* Original at 0x0224275C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02242764 ; =0x00000474\n    ldr r3, _02242768 ; =sub_020195C0\n    ldr r0, [r0, r1]\n    bx r3\n    _02242764: .word 0x00000474\n    _02242768: .word sub_020195C0"
    );
    #endif
}

void ov81_0224276C(void) {
    /* Original at 0x0224276C */
    /* Requires manual decompilation - 368 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    bl ov81_02242B90\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x80\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x20\n    str r3, [sp, #0xc]\n    mov r2, #0x64\n    str r2, [sp, #0x10]\n    add r2, r0, #0\n    bl OamManager_Create\n    mov r0, #0x20\n    add r1, r5, #4\n    mov r2, #0x64\n    bl G2dRenderer_Init\n    mov r2, #2\n    str r0, [r5]\n    add r0, r5, #4\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    ldr r4, _02242A88 ; =ov81_02243594\n    mov r7, #0\n    add r6, r5, #0\n    ldrb r0, [r4]\n    add r1, r7, #0\n    mov r2, #0x64\n    bl Create2DGfxResObjMan\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    add r7, r7, #1\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r7, #4\n    blt _022427B0\n    mov r3, #1\n    str r3, [sp]\n    str r3, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xc8\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x28\n    bl AddCharResObjFromNarc\n    mov r1, #0x53\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0x64\n    str r0, [sp, #0xc]\n    add r0, #0xcc\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x3e\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    mov r1, #0x15\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xd0\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x29\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x55\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xd4\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x2a\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x56\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    mov r3, #1\n    str r3, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xc8\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x2b\n    bl AddCharResObjFromNarc\n    mov r1, #0x57\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x64\n    str r0, [sp, #0xc]\n    add r0, #0xcc\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x3f\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    mov r1, #0x16\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xd0\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x2c\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x59\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xd4\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x2d\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xc8\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r3, #1\n    bl AddCharResObjFromNarc\n    mov r1, #0x4f\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    mov r0, #0x64\n    str r0, [sp, #0xc]\n    add r0, #0xcc\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x34\n    bl AddPlttResObjFromNarc\n    mov r1, #5\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r2, #2\n    str r2, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xd0\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x51\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xd4\n    mov r2, #1\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    add r3, r2, #0\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x52\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xc8\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x2b\n    mov r3, #1\n    bl AddCharResObjFromNarc\n    mov r1, #0x5b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x64\n    str r0, [sp, #0xc]\n    add r0, #0xcc\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x3f\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    mov r1, #0x17\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xd0\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x2c\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x5d\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #3\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xd4\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x2d\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r4, #0\n    add r6, r5, #0\n    mov r7, #2\n    add r0, r4, #4\n    str r0, [sp]\n    str r7, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xc8\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x2e\n    mov r3, #1\n    bl AddCharResObjFromNarc\n    mov r1, #0x5f\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    bl sub_02074490\n    add r2, r0, #0\n    add r0, r4, #4\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0x64\n    str r0, [sp, #0xc]\n    add r0, #0xcc\n    ldr r0, [r5, r0]\n    mov r1, #0x14\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    mov r1, #6\n    lsl r1, r1, #6\n    str r0, [r6, r1]\n    add r0, r4, #4\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xd0\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x2f\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x61\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    add r0, r4, #4\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    add r0, #0xd4\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x30\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    add r4, r4, #1\n    add r6, #0x10\n    cmp r4, #2\n    blt _022429C8\n    add r7, r1, #0\n    add r6, r1, #0\n    mov r4, #0\n    sub r7, #0x4c\n    sub r6, #0x48\n    ldr r0, [r5, r7]\n    bl sub_0200ACF0\n    ldr r0, [r5, r6]\n    bl sub_0200AF94\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #6\n    blt _02242A60\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02242A88: .word ov81_02243594"
    );
    #endif
}

void ov81_02242A8C(void) {
    /* Original at 0x02242A8C */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x80\n    add r5, r0, #0\n    mov r0, #0\n    str r1, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    add r4, r3, #0\n    str r0, [sp, #8]\n    mov r3, #0\n    ldr r0, [sp, #0x90]\n    str r3, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    add r6, r2, #0\n    ldr r2, [r5, r0]\n    str r2, [sp, #0x14]\n    add r2, r0, #4\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x18]\n    add r2, r0, #0\n    add r2, #8\n    ldr r2, [r5, r2]\n    add r0, #0xc\n    str r2, [sp, #0x1c]\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    str r0, [sp, #0x20]\n    str r3, [sp, #0x24]\n    str r3, [sp, #0x28]\n    add r0, sp, #0x5c\n    add r3, r1, #0\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [sp, #0x2c]\n    add r0, sp, #0x5c\n    str r0, [sp, #0x30]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r1, [sp, #0x34]\n    str r1, [sp, #0x38]\n    str r1, [sp, #0x3c]\n    str r0, [sp, #0x40]\n    str r0, [sp, #0x44]\n    str r0, [sp, #0x48]\n    add r0, sp, #0x2c\n    strh r1, [r0, #0x20]\n    str r4, [sp, #0x50]\n    add r0, sp, #0x80\n    ldrb r0, [r0, #0x14]\n    cmp r0, #0\n    bne _02242B00\n    mov r0, #1\n    str r0, [sp, #0x54]\n    b _02242B04\n    mov r0, #2\n    str r0, [sp, #0x54]\n    mov r0, #0x64\n    str r0, [sp, #0x58]\n    add r0, sp, #0x80\n    ldrb r0, [r0, #0x14]\n    cmp r0, #1\n    bne _02242B1A\n    mov r0, #2\n    ldr r1, [sp, #0x38]\n    lsl r0, r0, #0x14\n    add r0, r1, r0\n    str r0, [sp, #0x38]\n    add r0, sp, #0x2c\n    bl Sprite_CreateAffine\n    add r4, r0, #0\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    add r0, r4, #0\n    add r1, r6, #0\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #0\n    add sp, #0x80\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov81_02242B38(void) {
    /* Original at 0x02242B38 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r7, #5\n    add r5, r0, #0\n    mov r4, #0\n    lsl r7, r7, #6\n    lsl r0, r4, #4\n    add r6, r5, r0\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl sub_0200AEB0\n    ldr r0, [r6, r7]\n    bl sub_0200B0A8\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #6\n    blo _02242B42\n    mov r6, #0x4b\n    mov r4, #0\n    lsl r6, r6, #2\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, r6]\n    bl Destroy2DGfxResObjMan\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _02242B66\n    ldr r0, [r5]\n    bl SpriteList_Delete\n    bl OamManager_Free\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_02242B90(void) {
    /* Original at 0x02242B90 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _02242BC0 ; =ov81_02243598\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r1, _02242BC4 ; =0x00100010\n    add r0, r2, #0\n    add r2, r1, #0\n    bl ObjCharTransfer_InitEx\n    mov r0, #8\n    mov r1, #0x64\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    add sp, #0x10\n    pop {r4, pc}\n    _02242BC0: .word ov81_02243598\n    _02242BC4: .word 0x00100010"
    );
    #endif
}

void ov81_02242BC8(void) {
    /* Original at 0x02242BC8 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _02242C30 ; =0x04000008\n    mov r1, #3\n    ldrh r2, [r0]\n    bic r2, r1\n    strh r2, [r0]\n    add r0, #0x58\n    ldrh r2, [r0]\n    ldr r1, _02242C34 ; =0xFFFFCFFD\n    and r2, r1\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrh r3, [r0]\n    add r1, r1, #2\n    and r3, r2\n    mov r2, #0x10\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r3, [r0]\n    ldr r2, _02242C38 ; =0x0000CFFB\n    and r3, r2\n    strh r3, [r0]\n    ldrh r3, [r0]\n    sub r2, #0x1c\n    and r3, r1\n    mov r1, #8\n    orr r1, r3\n    strh r1, [r0]\n    ldrh r1, [r0]\n    and r1, r2\n    strh r1, [r0]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl G3X_SetFog\n    mov r0, #0\n    ldr r2, _02242C3C ; =0x00007FFF\n    add r1, r0, #0\n    mov r3, #0x3f\n    str r0, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _02242C40 ; =0xBFFF0000\n    ldr r0, _02242C44 ; =0x04000580\n    str r1, [r0]\n    pop {r3, pc}\n    _02242C30: .word 0x04000008\n    _02242C34: .word 0xFFFFCFFD\n    _02242C38: .word 0x0000CFFB\n    _02242C3C: .word 0x00007FFF\n    _02242C40: .word 0xBFFF0000\n    _02242C44: .word 0x04000580"
    );
    #endif
}

void ov81_02242C48(void) {
    /* Original at 0x02242C48 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl Thunk_G3X_Reset\n    ldr r2, _02242C78 ; =0x04000440\n    mov r3, #0\n    add r1, r2, #0\n    str r3, [r2]\n    add r1, #0x14\n    str r3, [r1]\n    mov r0, #2\n    str r0, [r2]\n    str r3, [r1]\n    bl NNS_G3dGlbFlushP\n    bl NNS_G2dSetupSoftwareSpriteCamera\n    add r0, r4, #0\n    bl PokepicManager_DrawAll\n    ldr r0, _02242C7C ; =0x04000540\n    mov r1, #1\n    str r1, [r0]\n    pop {r4, pc}\n    _02242C78: .word 0x04000440\n    _02242C7C: .word 0x04000540"
    );
    #endif
}

void ov81_02242C80(void) {
    /* Original at 0x02242C80 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    add r4, r1, #0\n    add r1, r2, #0\n    add r0, sp, #0x10\n    mov r2, #2\n    add r6, r3, #0\n    bl GetPokemonSpriteCharAndPlttNarcIds\n    ldr r0, [sp, #0x34]\n    ldr r3, [sp, #0x30]\n    str r0, [sp]\n    str r4, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r1, sp, #0x10\n    add r2, r6, #0\n    bl PokepicManager_CreatePokepic\n    add sp, #0x20\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov81_02242CB0(void) {
    Pokepic_SetAttr();
}

void ov81_02242CBC(void) {
    /* Original at 0x02242CBC */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r7, r1, #0\n    mov r0, #0x64\n    mov r1, #0xc\n    str r2, [sp, #8]\n    add r5, r3, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    strb r1, [r4]\n    strb r1, [r4, #1]\n    strb r1, [r4, #2]\n    strb r1, [r4, #3]\n    strb r1, [r4, #4]\n    strb r1, [r4, #5]\n    strb r1, [r4, #6]\n    strb r1, [r4, #7]\n    strb r1, [r4, #8]\n    strb r1, [r4, #9]\n    strb r1, [r4, #0xa]\n    ldr r0, [sp, #0x24]\n    strb r1, [r4, #0xb]\n    str r0, [r4]\n    ldr r0, [sp, #0x28]\n    ldr r2, [sp, #8]\n    str r0, [r4, #4]\n    str r5, [sp]\n    str r1, [sp, #4]\n    ldr r3, [sp, #0x20]\n    add r0, r6, #0\n    add r1, r7, #0\n    bl ov81_02242A8C\n    str r0, [r4, #8]\n    ldr r1, [sp, #0x24]\n    ldr r2, [sp, #0x28]\n    add r0, r4, #0\n    bl ov81_02242D94\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_02242D18(void) {
    /* Original at 0x02242D18 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r7, r1, #0\n    mov r0, #0x64\n    mov r1, #0xc\n    str r2, [sp, #8]\n    add r5, r3, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r0, #0\n    strb r0, [r4]\n    strb r0, [r4, #1]\n    strb r0, [r4, #2]\n    strb r0, [r4, #3]\n    strb r0, [r4, #4]\n    strb r0, [r4, #5]\n    strb r0, [r4, #6]\n    strb r0, [r4, #7]\n    strb r0, [r4, #8]\n    strb r0, [r4, #9]\n    strb r0, [r4, #0xa]\n    strb r0, [r4, #0xb]\n    ldr r0, [sp, #0x24]\n    ldr r2, [sp, #8]\n    str r0, [r4]\n    ldr r0, [sp, #0x28]\n    ldr r3, [sp, #0x20]\n    str r0, [r4, #4]\n    str r5, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r1, r7, #0\n    bl ov81_02242A8C\n    str r0, [r4, #8]\n    ldr r1, [sp, #0x24]\n    ldr r2, [sp, #0x28]\n    add r0, r4, #0\n    bl ov81_02242DAC\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_02242D74(void) {
    /* Original at 0x02242D74 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    bl Sprite_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov81_02242D88(void) {
    Sprite_SetDrawFlag();
}

void ov81_02242D94(void) {
    Sprite_SetMatrix();
}

void ov81_02242DAC(void) {
    Sprite_SetMatrix(2);
}

void ov81_02242DCC(void) {
    Sprite_SetMatrix();
}

void ov81_02242DD8(void) {
    Sprite_IsAnimated();
}

void ov81_02242DE4(void) {
    /* Original at 0x02242DE4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    add r4, r1, #0\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov81_02242DFC(void) {
    Sprite_SetPaletteOverride();
}

void ov81_02242E08(void) {
    Sprite_SetPalIndexRespectVramOffset();
}

void ov81_02242E14(void) {
    /* Original at 0x02242E14 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, [r0, #8]\n    add r6, r3, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    bl Sprite_GetImageProxy\n    add r1, r6, #0\n    bl NNS_G2dGetImageLocation\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl DC_FlushRange\n    cmp r6, #1\n    bne _02242E42\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r4, #0\n    bl GX_LoadOBJ\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r4, #0\n    bl GXS_LoadOBJ\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_02242E50(void) {
    /* Original at 0x02242E50 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r0, #0\n    add r5, r1, #0\n    add r0, r3, #0\n    mov r1, #0x10\n    add r6, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r2, r4, #0\n    mov r1, #0x10\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02242E6A\n    mov r1, #0\n    strh r1, [r4]\n    str r5, [r4, #4]\n    str r6, [r4, #8]\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r7, #0\n    add r2, r1, #0\n    mov r3, #0xa\n    bl ov81_02242A8C\n    str r0, [r4, #0xc]\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov81_02242F10\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    bl Sprite_SetPaletteOverride\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_02242EA4(void) {
    /* Original at 0x02242EA4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    bl Sprite_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov81_02242EB8(void) {
    Sprite_SetDrawFlag();
}

void ov81_02242EC4(void) {
    /* Original at 0x02242EC4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0xc]\n    add r6, r2, #0\n    add r7, r3, #0\n    bl Sprite_GetMatrixPtr\n    add r3, r0, #0\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    mov ip, r2\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r1, [sp]\n    lsl r0, r6, #0xc\n    add r0, r1, r0\n    str r0, [sp]\n    ldr r1, [sp, #4]\n    lsl r0, r7, #0xc\n    add r0, r1, r0\n    str r0, [sp, #4]\n    ldr r0, [r4, #0xc]\n    mov r1, ip\n    bl Sprite_SetMatrix\n    ldr r0, [r4, #0xc]\n    bl Sprite_GetMatrixPtr\n    add r2, r0, #0\n    ldmia r2!, {r0, r1}\n    stmia r5!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r5]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_02242F10(void) {
    Sprite_SetMatrix(2);
}

void ov81_02242F30(void) {
    Sprite_GetMatrixPtr();
}

void ov81_02242F3C(void) {
    /* Original at 0x02242F3C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "strh r1, [r0]\n    bx lr"
    );
    #endif
}

void ov81_02242F40(void) {
    /* Original at 0x02242F40 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx lr"
    );
    #endif
}

void ov81_02242F48(void) {
    ov81_02242F3C();
}

void ov81_02242F54(void) {
    ov81_02242F3C();
}

void ov81_02242F60(void) {
    /* Original at 0x02242F60 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov81_02242F30\n    ldr r2, [r0]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r1, r1, #0xc\n    add r1, #0xf8\n    lsl r1, r1, #0xc\n    str r1, [sp]\n    ldr r0, [r0, #4]\n    add r1, sp, #0\n    str r0, [sp, #4]\n    ldr r0, [r4, #0xc]\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov81_02242F8C(void) {
    /* Original at 0x02242F8C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    bx lr"
    );
    #endif
}

void ov81_02242F90(void) {
    /* Original at 0x02242F90 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov81_02242F94(void) {
    /* Original at 0x02242F94 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r1, #1\n    ldr r0, [r5, #0xc]\n    lsl r1, r1, #0xc\n    bl Sprite_SetAnimSpeed\n    ldr r0, [r5, #0xc]\n    add r1, r4, #0\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov81_02242FB0(void) {
    Sprite_SetPaletteOverride();
}

void ov81_02242FBC(void) {
    Sprite_SetOamMode();
}

void ov81_02242FC8(void) {
    /* Original at 0x02242FC8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    bl Sprite_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov81_02242FDC(void) {
    /* Original at 0x02242FDC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    mov r4, #0\n    ldr r2, _02243008 ; =ov81_022435A8\n    lsl r6, r4, #4\n    lsl r3, r4, #3\n    add r0, r7, #0\n    add r1, r5, r6\n    add r2, r2, r3\n    bl AddWindow\n    add r0, r5, r6\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #0x12\n    blo _02242FE4\n    pop {r3, r4, r5, r6, r7, pc}\n    _02243008: .word ov81_022435A8"
    );
    #endif
}

void ov81_0224300C(void) {
    RemoveWindow(0);
}

void ov81_02243028(void) {
    /* Original at 0x02243028 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r4, r0, #0\n    bl GetWindowBgId\n    add r1, r0, #0\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x64\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r2, _02243064 ; =0x000003E2\n    mov r3, #0xb\n    bl LoadUserFrameGfx2\n    add r0, r4, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r2, _02243064 ; =0x000003E2\n    add r0, r4, #0\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow2\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _02243064: .word 0x000003E2"
    );
    #endif
}

void ov81_02243068(void) {
    /* Original at 0x02243068 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    ldr r0, [sp, #0x30]\n    add r7, r1, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    cmp r0, #1\n    bne _02243086\n    ldr r0, [sp, #0x28]\n    mov r2, #0\n    bl FontID_String_GetWidth\n    sub r5, r5, r0\n    b _02243096\n    cmp r0, #2\n    bne _02243096\n    ldr r0, [sp, #0x28]\n    mov r2, #0\n    bl FontID_String_GetWidth\n    lsr r0, r0, #1\n    sub r5, r5, r0\n    str r4, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    ldr r1, [sp, #0x28]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    add r2, r7, #0\n    add r3, r5, #0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov81_022430B4(void) {
    /* Original at 0x022430B4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    add r6, r3, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r0, [sp, #0x24]\n    ldr r3, [sp, #0x20]\n    str r0, [sp]\n    ldr r0, [sp, #0x28]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl ov81_02243068\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov81_022430E8(void) {
    /* Original at 0x022430E8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #4\n    bl SetWindowX\n    add r4, #0x10\n    add r0, r4, #0\n    mov r1, #0x12\n    bl SetWindowX\n    pop {r4, pc}"
    );
    #endif
}

void ov81_02243100(void) {
    /* Original at 0x02243100 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r2, r0, #0\n    ldr r0, _0224313C ; =0x000003D9\n    add r4, r1, #0\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x64\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #0x86\n    mov r3, #5\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0x40\n    mov r1, #0xc2\n    str r0, [sp]\n    mov r0, #0x64\n    add r3, r1, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #4\n    add r3, #0x5e\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    add sp, #0x10\n    pop {r4, pc}\n    _0224313C: .word 0x000003D9"
    );
    #endif
}

void ov81_02243140(void) {
    /* Original at 0x02243140 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r7, r0, #0\n    add r4, r2, #0\n    mov r0, #0x64\n    str r0, [sp]\n    add r0, r1, #0\n    add r1, r4, #0\n    add r1, #0x87\n    mov r2, #1\n    add r3, sp, #0x24\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    str r0, [sp, #0x20]\n    cmp r4, #0\n    bne _0224316A\n    mov r0, #0xb\n    str r0, [sp, #0x10]\n    mov r0, #7\n    str r0, [sp, #0x18]\n    b _02243172\n    mov r0, #0xe\n    str r0, [sp, #0x10]\n    mov r0, #4\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x24]\n    str r0, [sp, #0x1c]\n    add r0, #0xc\n    str r0, [sp, #0x1c]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    cmp r0, #0\n    bls _022431D2\n    ldr r1, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    mov r4, #0\n    add r2, r1, r0\n    lsl r1, r0, #6\n    ldr r0, [sp, #0x1c]\n    add r5, r0, r1\n    lsl r0, r2, #0x18\n    lsr r6, r0, #0x18\n    str r6, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #9\n    str r0, [sp, #0xc]\n    lsl r2, r4, #1\n    ldrh r3, [r5, r2]\n    ldr r2, _022431DC ; =0x000003D9\n    add r0, r7, #0\n    add r2, r3, r2\n    lsl r2, r2, #0x10\n    mov r1, #5\n    lsr r2, r2, #0x10\n    add r3, r4, #0\n    bl FillBgTilemapRect\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #0x20\n    blo _02243196\n    ldr r0, [sp, #0x14]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    str r1, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    cmp r1, r0\n    blo _02243184\n    ldr r0, [sp, #0x20]\n    bl Heap_Free\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _022431DC: .word 0x000003D9"
    );
    #endif
}

void ov81_022431E0(void) {
    /* Original at 0x022431E0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    cmp r1, #0\n    bne _022431F0\n    mov r0, #0xb\n    mov r1, #7\n    b _022431F4\n    mov r0, #0xe\n    mov r1, #4\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #9\n    mov r2, #0\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #5\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    add r0, r4, #0\n    mov r1, #5\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov81_02243220(void) {
    GridInputHandler_Free();
}

void ov81_02243228(void) {
    GridInputHandler_GetDpadBox();
}

void ov81_0224323C(void) {
    /* Original at 0x0224323C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov81_02243240(void) {
    /* Original at 0x02243240 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    ldr r0, _02243264 ; =ov81_022436F0\n    ldr r1, _02243268 ; =ov81_02243808\n    ldr r2, _0224326C ; =ov81_02243658\n    bl GridInputHandler_Create\n    add sp, #0xc\n    pop {pc}\n    nop\n    _02243264: .word ov81_022436F0\n    _02243268: .word ov81_02243808\n    _0224326C: .word ov81_02243658"
    );
    #endif
}

void ov81_02243270(void) {
    /* Original at 0x02243270 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #1\n    bne _0224327E\n    bl GridInputHandler_SetAllEnabled\n    pop {r4, pc}\n    mov r1, #6\n    bl GridInputHandler_ClearEnabledFlag\n    add r0, r4, #0\n    mov r1, #7\n    bl GridInputHandler_ClearEnabledFlag\n    add r0, r4, #0\n    mov r1, #8\n    bl GridInputHandler_ClearEnabledFlag\n    pop {r4, pc}"
    );
    #endif
}

void ov81_02243298(void) {
    /* Original at 0x02243298 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #6\n    blt _022432A4\n    bl ov81_0224141C\n    pop {r3, pc}\n    bl ov81_022413F4\n    pop {r3, pc}"
    );
    #endif
}

void ov81_022432AC(void) {
    /* Original at 0x022432AC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    ldr r0, _022432D0 ; =ov81_02243668\n    ldr r1, _022432D4 ; =ov81_02243750\n    ldr r2, _022432D8 ; =ov81_02243648\n    bl GridInputHandler_Create\n    add sp, #0xc\n    pop {pc}\n    nop\n    _022432D0: .word ov81_02243668\n    _022432D4: .word ov81_02243750\n    _022432D8: .word ov81_02243648"
    );
    #endif
}

void ov81_022432DC(void) {
    /* Original at 0x022432DC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    ldr r0, _02243308 ; =ov81_02243688\n    ldr r1, _0224330C ; =ov81_02243718\n    ldr r2, _02243310 ; =ov81_02243648\n    bl GridInputHandler_Create\n    mov r1, #2\n    add r4, r0, #0\n    bl GridInputHandler_ClearEnabledFlag\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _02243308: .word ov81_02243688\n    _0224330C: .word ov81_02243718\n    _02243310: .word ov81_02243648"
    );
    #endif
}

void ov81_02243314(void) {
    /* Original at 0x02243314 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r1, #1\n    bne _0224332C\n    bl GridInputHandler_SetAllEnabled\n    add r0, r5, #0\n    mov r1, #3\n    bl GridInputHandler_ClearEnabledFlag\n    b _02243348\n    bl GridInputHandler_SetAllEnabled\n    add r0, r5, #0\n    mov r1, #4\n    bl GridInputHandler_ClearEnabledFlag\n    add r0, r5, #0\n    mov r1, #5\n    bl GridInputHandler_ClearEnabledFlag\n    add r0, r5, #0\n    mov r1, #6\n    bl GridInputHandler_ClearEnabledFlag\n    add r0, r4, #0\n    bl ov81_02242704\n    cmp r0, #1\n    bne _0224335A\n    add r0, r5, #0\n    mov r1, #2\n    bl GridInputHandler_ClearEnabledFlag\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov81_0224335C(void) {
    /* Original at 0x0224335C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #4\n    blt _02243368\n    bl ov81_0224141C\n    pop {r3, pc}\n    bl ov81_02241650\n    pop {r3, pc}"
    );
    #endif
}

void ov81_02243370(void) {
    /* Original at 0x02243370 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl ov81_02243220\n    add r0, r4, #0\n    bl ov81_02242710\n    cmp r0, #1\n    bne _0224338E\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_022432DC\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0\n    bl ov81_022432AC\n    pop {r4, pc}"
    );
    #endif
}

void ov81_02243398(void) {
    /* Original at 0x02243398 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r0, r1, #0\n    bl ov81_02243220\n    add r0, r4, #0\n    bl ov81_02242710\n    cmp r0, #1\n    bne _022433CA\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    ldr r0, _022433E8 ; =ov81_022436CC\n    ldr r1, _022433EC ; =ov81_02243788\n    ldr r2, _022433F0 ; =ov81_02243638\n    add r3, r4, #0\n    bl GridInputHandler_Create\n    add sp, #0xc\n    pop {r3, r4, pc}\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x64\n    str r0, [sp, #8]\n    ldr r0, _022433F4 ; =ov81_022436A8\n    ldr r1, _022433F8 ; =ov81_022437C8\n    ldr r2, _022433F0 ; =ov81_02243638\n    add r3, r4, #0\n    bl GridInputHandler_Create\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _022433E8: .word ov81_022436CC\n    _022433EC: .word ov81_02243788\n    _022433F0: .word ov81_02243638\n    _022433F4: .word ov81_022436A8\n    _022433F8: .word ov81_022437C8"
    );
    #endif
}

void ov81_022433FC(void) {
    /* Original at 0x022433FC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r1, #1\n    bne _0224341C\n    bl GridInputHandler_SetAllEnabled\n    add r0, r5, #0\n    mov r1, #4\n    bl GridInputHandler_ClearEnabledFlag\n    add r0, r5, #0\n    mov r1, #5\n    bl GridInputHandler_ClearEnabledFlag\n    b _02243430\n    bl GridInputHandler_SetAllEnabled\n    add r0, r5, #0\n    mov r1, #6\n    bl GridInputHandler_ClearEnabledFlag\n    add r0, r5, #0\n    mov r1, #7\n    bl GridInputHandler_ClearEnabledFlag\n    add r0, r4, #0\n    bl ov81_02242704\n    cmp r0, #0\n    bne _02243442\n    add r0, r5, #0\n    mov r1, #3\n    bl GridInputHandler_ClearEnabledFlag\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov81_02243444(void) {
    /* Original at 0x02243444 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #6\n    blt _02243450\n    bl ov81_0224141C\n    pop {r3, pc}\n    bl ov81_022416CC\n    pop {r3, pc}"
    );
    #endif
}
