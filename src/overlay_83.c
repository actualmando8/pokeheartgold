/* Decompiled from asm/overlay_83.s */
#include "global.h"

void ov83_0223DD60(void) {
    /* Original at 0x0223DD60 */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _0223DE40 ; =FS_OVERLAY_ID(OVY_80)\n    mov r1, #2\n    bl HandleLoadOverlay\n    bl ov83_0223F1C8\n    mov r0, #3\n    mov r1, #0x6b\n    lsl r2, r0, #0x10\n    bl Heap_Create\n    ldr r1, _0223DE44 ; =0x0000086C\n    add r0, r4, #0\n    mov r2, #0x6b\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _0223DE44 ; =0x0000086C\n    mov r1, #0\n    add r5, r0, #0\n    bl memset\n    mov r0, #0x6b\n    bl BgConfig_Alloc\n    str r0, [r5, #0x4c]\n    add r0, r4, #0\n    str r4, [r5]\n    bl OverlayManager_GetArgs\n    add r4, r0, #0\n    ldr r1, [r4]\n    ldr r0, _0223DE48 ; =0x0000050C\n    str r1, [r5, r0]\n    ldr r0, [r5, r0]\n    bl sub_02030CC8\n    mov r1, #0x51\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    sub r0, r1, #4\n    ldr r0, [r5, r0]\n    bl sub_02030E08\n    ldr r1, _0223DE4C ; =0x00000514\n    add r2, r4, #0\n    str r0, [r5, r1]\n    ldrb r0, [r4, #4]\n    add r2, #0x20\n    sub r1, #8\n    strb r0, [r5, #9]\n    mov r0, #0x7a\n    lsl r0, r0, #4\n    str r2, [r5, r0]\n    ldr r0, [r5, r1]\n    bl Save_PlayerData_GetOptionsAddr\n    ldr r1, _0223DE50 ; =0x00000508\n    str r0, [r5, r1]\n    ldr r2, [r4, #0x18]\n    ldr r0, _0223DE54 ; =0x000007A4\n    str r2, [r5, r0]\n    mov r2, #0xff\n    strb r2, [r5, #0x12]\n    ldrh r2, [r4, #0x28]\n    add r0, #0x5e\n    strh r2, [r5, r0]\n    add r0, r1, #4\n    ldr r0, [r5, r0]\n    bl Save_Frontier_GetStatic\n    str r0, [r5, #4]\n    ldr r0, _0223DE58 ; =0x000007FF\n    mov r3, #0\n    mov r2, #1\n    add r1, r5, r3\n    add r3, r3, #1\n    strb r2, [r1, r0]\n    cmp r3, #3\n    blt _0223DDF8\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _0223DE10\n    mov r0, #3\n    b _0223DE12\n    mov r0, #4\n    strb r0, [r5, #0x14]\n    mov r0, #4\n    strb r0, [r5, #0x15]\n    ldrb r0, [r5, #0x15]\n    sub r0, r0, #1\n    strb r0, [r5, #0xc]\n    ldr r0, _0223DE5C ; =0x00000868\n    add r0, r5, r0\n    bl ov83_022477E4\n    add r0, r5, #0\n    bl ov83_0223F200\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _0223DE3C\n    add r0, r5, #0\n    bl sub_02096910\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _0223DE40: .word FS_OVERLAY_ID(OVY_80)\n    _0223DE44: .word 0x0000086C\n    _0223DE48: .word 0x0000050C\n    _0223DE4C: .word 0x00000514\n    _0223DE50: .word 0x00000508\n    _0223DE54: .word 0x000007A4\n    _0223DE58: .word 0x000007FF\n    _0223DE5C: .word 0x00000868"
    );
    #endif
}

void ov83_0223DE60(void) {
    /* Original at 0x0223DE60 */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, _0223DFAC ; =0x000007FE\n    add r4, r0, #0\n    ldrb r2, [r4, r1]\n    cmp r2, #1\n    bne _0223DEC6\n    ldr r2, [r5]\n    cmp r2, #1\n    bne _0223DEEC\n    mov r2, #0\n    strb r2, [r4, r1]\n    bl ov83_022412A0\n    ldr r0, _0223DFB0 ; =0x0000075C\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0223DE94\n    bl ov83_0224753C\n    ldrb r1, [r4, #0xe]\n    mov r0, #4\n    bic r1, r0\n    strb r1, [r4, #0xe]\n    ldr r0, _0223DFB4 ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    ldr r0, [r4, #0x24]\n    mov r1, #0\n    bl ov80_0222A7CC\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #3\n    bl ov83_02240DA8\n    b _0223DEEC\n    ldrb r0, [r4, #0x12]\n    cmp r0, #0xff\n    beq _0223DEEC\n    ldr r0, [r5]\n    cmp r0, #1\n    beq _0223DED6\n    cmp r0, #3\n    bne _0223DEEC\n    ldr r0, _0223DFAC ; =0x000007FE\n    mov r1, #0\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    bl ov83_022412A0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #2\n    bl ov83_02240DA8\n    ldr r0, [r5]\n    cmp r0, #4\n    bhi _0223DF9A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223DEFE: ; jump table\n    add r0, r4, #0\n    bl ov83_0223E008\n    cmp r0, #1\n    bne _0223DF9A\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl ov83_02240DA8\n    b _0223DF9A\n    add r0, r4, #0\n    bl ov83_0223E14C\n    cmp r0, #1\n    bne _0223DF9A\n    ldrb r0, [r4, #0xe]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0223DF3E\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #2\n    bl ov83_02240DA8\n    b _0223DF9A\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _0223DF54\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #3\n    bl ov83_02240DA8\n    b _0223DF9A\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #4\n    bl ov83_02240DA8\n    b _0223DF9A\n    add r0, r4, #0\n    bl ov83_0223EEA0\n    cmp r0, #1\n    bne _0223DF9A\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl ov83_02240DA8\n    b _0223DF9A\n    add r0, r4, #0\n    bl ov83_0223EFA4\n    cmp r0, #1\n    bne _0223DF9A\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #4\n    bl ov83_02240DA8\n    b _0223DF9A\n    add r0, r4, #0\n    bl ov83_0223F010\n    cmp r0, #1\n    bne _0223DF9A\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov83_02241B30\n    ldr r0, _0223DFB8 ; =0x00000518\n    ldr r0, [r4, r0]\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0223DFAC: .word 0x000007FE\n    _0223DFB0: .word 0x0000075C\n    _0223DFB4: .word 0x00000508\n    _0223DFB8: .word 0x00000518"
    );
    #endif
}

void ov83_0223DFBC(void) {
    /* Original at 0x0223DFBC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    mov r0, #0x7a\n    lsl r0, r0, #4\n    ldrb r1, [r4, #0xd]\n    ldr r0, [r4, r0]\n    strh r1, [r0]\n    ldr r0, _0223E000 ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    bl GF_DestroyVramTransferManager\n    add r0, r4, #0\n    bl ov83_0223F058\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0x6b\n    bl Heap_Destroy\n    ldr r0, _0223E004 ; =FS_OVERLAY_ID(OVY_80)\n    bl UnloadOverlayByID\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _0223E000: .word 0x04000050\n    _0223E004: .word FS_OVERLAY_ID(OVY_80)"
    );
    #endif
}

void ov83_0223E008(void) {
    /* Original at 0x0223E008 */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldrb r0, [r4, #8]\n    cmp r0, #4\n    bhi _0223E104\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223E020: ; jump table\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _0223E03E\n    bl sub_02037BEC\n    mov r0, #0xd7\n    bl sub_02037AC0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E104\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _0223E066\n    mov r0, #0xd7\n    bl sub_02037B38\n    cmp r0, #1\n    bne _0223E104\n    bl sub_02037BEC\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E104\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E104\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _0223E08E\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl ov83_02241368\n    cmp r0, #1\n    bne _0223E104\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E104\n    add r0, r4, #0\n    bl ov83_0223E10C\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #1\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E104\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _0223E0EE\n    ldrb r0, [r4, #0xf]\n    cmp r0, #2\n    blo _0223E104\n    mov r0, #0\n    strb r0, [r4, #0xf]\n    add r0, r4, #0\n    bl ov83_0223E10C\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #1\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E104\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223E104\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0223E104\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov83_0223E10C(void) {
    /* Original at 0x0223E10C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r5, #0\n    add r4, #0x50\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov83_0224153C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov83_02241770\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x80\n    bl ov83_02240080\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x70\n    bl ov83_02240170\n    add r0, r5, #0\n    bl ov83_02240290\n    bl GfGfx_BothDispOn\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_0223E14C(void) {
    /* Original at 0x0223E14C */
    /* Requires manual decompilation - 1342 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #0x16\n    bls _0223E15C\n    bl _0223EE86\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223E168: ; jump table\n    ldrb r1, [r4, #0xe]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1e\n    cmp r1, #1\n    bne _0223E1C2\n    bl ov83_02240348\n    ldr r0, _0223E4F0 ; =0x00000778\n    mov r1, #0xcc\n    ldr r0, [r4, r0]\n    mov r2, #0x64\n    bl ov83_02247630\n    mov r0, #2\n    strb r0, [r4, #8]\n    ldrb r1, [r4, #0xe]\n    mov r0, #0x60\n    add sp, #4\n    bic r1, r0\n    strb r1, [r4, #0xe]\n    mov r0, #0\n    pop {r3, r4, r5, r6, pc}\n    cmp r1, #2\n    bne _0223E1E8\n    bl ov83_02240384\n    ldr r0, _0223E4F0 ; =0x00000778\n    mov r1, #0xd3\n    ldr r0, [r4, r0]\n    mov r2, #0x6a\n    bl ov83_02247630\n    mov r0, #8\n    strb r0, [r4, #8]\n    ldrb r1, [r4, #0xe]\n    mov r0, #0x60\n    add sp, #4\n    bic r1, r0\n    strb r1, [r4, #0xe]\n    mov r0, #0\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, _0223E4F4 ; =0x00000838\n    ldr r0, [r4, r0]\n    bl ov83_02247AD4\n    cmp r0, #4\n    bhi _0223E20A\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223E200: ; jump table\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    beq _0223E236\n    bl _0223EE86\n    add r0, r4, #0\n    bl ov83_022402F4\n    add r0, r4, #0\n    bl ov83_02240300\n    mov r0, #1\n    strb r0, [r4, #8]\n    bl _0223EE86\n    ldr r0, _0223E4F8 ; =0x000005DC\n    bl PlaySE\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldrb r1, [r4, #0xd]\n    ldrb r0, [r4, #0x15]\n    cmp r1, r0\n    beq _0223E2FA\n    ldr r0, _0223E4F4 ; =0x00000838\n    ldr r0, [r4, r0]\n    bl ov83_02247B04\n    ldrb r2, [r4, #0xd]\n    add r0, r4, #0\n    mov r1, #4\n    bl ov83_02242AB4\n    bl _0223EE86\n    mov r0, #0x21\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl TouchscreenListMenu_HandleInput\n    ldr r1, _0223E4F8 ; =0x000005DC\n    add r5, r0, #0\n    bl ov83_022477B0\n    add r0, r4, #0\n    bl ov83_02242DAC\n    cmp r5, #5\n    bhi _0223E27A\n    bhs _0223E2AA\n    cmp r5, #0\n    beq _0223E296\n    bl _0223EE86\n    cmp r5, #0xb\n    bhi _0223E284\n    beq _0223E2BE\n    bl _0223EE86\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    blo _0223E2FA\n    beq _0223E2BE\n    add r0, r0, #1\n    cmp r5, r0\n    bl _0223EE86\n    add r0, r4, #0\n    bl ov83_02240334\n    add r0, r4, #0\n    bl ov83_02240348\n    mov r0, #2\n    strb r0, [r4, #8]\n    bl _0223EE86\n    add r0, r4, #0\n    bl ov83_02240334\n    add r0, r4, #0\n    bl ov83_02240384\n    mov r0, #8\n    strb r0, [r4, #8]\n    bl _0223EE86\n    add r0, r4, #0\n    bl ov83_02240334\n    add r0, r4, #0\n    bl ov83_02240290\n    mov r0, #0\n    strb r0, [r4, #8]\n    bl _0223EE86\n    mov r0, #0x21\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl TouchscreenListMenu_HandleInput\n    ldr r1, _0223E4F8 ; =0x000005DC\n    add r5, r0, #0\n    bl ov83_022477B0\n    add r0, r4, #0\n    bl ov83_02242DFC\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    bhi _0223E322\n    blo _0223E2F6\n    b _0223E418\n    cmp r5, #0xb\n    bls _0223E2FE\n    bl _0223EE86\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223E30A: ; jump table\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bl _0223EE86\n    add r0, r4, #0\n    strb r5, [r4, #0x13]\n    bl ov83_0224037C\n    ldr r0, _0223E4FC ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    ldr r0, _0223E500 ; =0x0000050C\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r2, #0\n    bl ov83_0224777C\n    ldr r1, _0223E504 ; =0x00000848\n    ldr r2, [r4, r1]\n    mov r1, #0xc\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, _0223E508 ; =ov83_02247F4C\n    ldr r1, [r1, r3]\n    cmp r0, r1\n    bhs _0223E378\n    add r0, r4, #0\n    mov r1, #0x21\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    mov r0, #7\n    strb r0, [r4, #8]\n    bl _0223EE86\n    lsl r3, r2, #1\n    ldr r2, _0223E50C ; =ov83_02247D18\n    mov r1, #0\n    ldrh r2, [r2, r3]\n    add r0, r4, #0\n    mov r3, #3\n    str r1, [sp]\n    bl ov83_02240C48\n    add r0, r4, #0\n    mov r1, #0x37\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    add r0, r4, #0\n    bl ov83_02240514\n    mov r0, #3\n    strb r0, [r4, #8]\n    bl _0223EE86\n    ldr r0, _0223E500 ; =0x0000050C\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r2, #0\n    bl ov83_0224777C\n    add r6, r0, #0\n    cmp r6, #3\n    bne _0223E3C8\n    ldr r0, _0223E4F8 ; =0x000005DC\n    mov r1, #0\n    bl StopSE\n    ldr r0, _0223E510 ; =0x000005F3\n    bl PlaySE\n    bl _0223EE86\n    strb r5, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_0224037C\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    add r5, r0, #0\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    bl FrontierSave_GetStat\n    mov r1, #0\n    ldr r2, _0223E514 ; =ov83_02247D48\n    lsl r3, r6, #1\n    ldrh r2, [r2, r3]\n    add r0, r4, #0\n    mov r3, #4\n    str r1, [sp]\n    bl ov83_02240C48\n    add r0, r4, #0\n    mov r1, #0x26\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    add r0, r4, #0\n    bl ov83_02240514\n    mov r0, #4\n    strb r0, [r4, #8]\n    bl _0223EE86\n    add r0, r4, #0\n    bl ov83_0224037C\n    add r0, r4, #0\n    bl ov83_02240300\n    mov r0, #1\n    strb r0, [r4, #8]\n    bl _0223EE86\n    ldr r0, _0223E518 ; =0x0000084C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _0223E442\n    cmp r0, #2\n    bne _0223E43E\n    b _0223E5F2\n    bl _0223EE86\n    ldr r0, _0223E518 ; =0x0000084C\n    add r0, r4, r0\n    bl ov83_022478B4\n    ldrb r0, [r4, #0x14]\n    ldrb r1, [r4, #0xd]\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _0223E51C ; =0x000007A4\n    ldr r0, [r4, r0]\n    bl Party_GetMonByIndex\n    add r5, r0, #0\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    add r6, r0, #0\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r4, #4]\n    add r1, r6, #0\n    bl FrontierSave_GetStat\n    add r6, r0, #0\n    ldr r0, _0223E500 ; =0x0000050C\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r2, #0\n    bl ov83_0224777C\n    ldr r1, _0223E504 ; =0x00000848\n    mov r2, #0xc\n    ldr r1, [r4, r1]\n    add r3, r1, #0\n    mul r3, r2\n    ldr r2, _0223E508 ; =ov83_02247F4C\n    ldr r2, [r2, r3]\n    cmp r0, r2\n    bhs _0223E4C0\n    ldr r0, _0223E4FC ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    add r0, r4, #0\n    mov r1, #0x21\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    mov r0, #7\n    strb r0, [r4, #8]\n    bl _0223EE86\n    ldr r0, _0223E50C ; =ov83_02247D18\n    lsl r2, r1, #1\n    ldrh r0, [r0, r2]\n    cmp r6, r0\n    bhs _0223E520\n    ldr r0, _0223E4FC ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    add r0, r4, #0\n    mov r1, #0x20\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    mov r0, #7\n    strb r0, [r4, #8]\n    bl _0223EE86\n    _0223E4F0: .word 0x00000778\n    _0223E4F4: .word 0x00000838\n    _0223E4F8: .word 0x000005DC\n    _0223E4FC: .word 0x00000508\n    _0223E500: .word 0x0000050C\n    _0223E504: .word 0x00000848\n    _0223E508: .word ov83_02247F4C\n    _0223E50C: .word ov83_02247D18\n    _0223E510: .word 0x000005F3\n    _0223E514: .word ov83_02247D48\n    _0223E518: .word 0x0000084C\n    _0223E51C: .word 0x000007A4\n    cmp r1, #0\n    bne _0223E552\n    add r0, r5, #0\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0xa4\n    mov r2, #0\n    bl GetMonData\n    cmp r6, r0\n    bne _0223E5AC\n    add r0, r4, #0\n    mov r1, #0x25\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    mov r0, #7\n    strb r0, [r4, #8]\n    bl _0223EE86\n    cmp r1, #1\n    bne _0223E574\n    add r0, r5, #0\n    bl ov83_022412DC\n    cmp r0, #0\n    bne _0223E5AC\n    add r0, r4, #0\n    mov r1, #0x25\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    mov r0, #7\n    strb r0, [r4, #8]\n    bl _0223EE86\n    add r0, r5, #0\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0xa4\n    mov r2, #0\n    bl GetMonData\n    cmp r6, r0\n    bne _0223E5AC\n    add r0, r5, #0\n    bl ov83_022412DC\n    cmp r0, #0\n    bne _0223E5AC\n    add r0, r4, #0\n    mov r1, #0x25\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    mov r0, #7\n    strb r0, [r4, #8]\n    bl _0223EE86\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _0223E5E4\n    ldrb r2, [r4, #0x13]\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, #4]\n    sub r2, r2, #1\n    lsl r3, r2, #1\n    ldr r2, _0223E8D8 ; =ov83_02247D18\n    ldrh r2, [r2, r3]\n    bl ov80_02237FA4\n    add r1, r4, #0\n    add r0, r4, #0\n    add r1, #0x50\n    bl ov83_02241770\n    ldrb r1, [r4, #0xd]\n    ldrb r2, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_022415F4\n    mov r0, #0x13\n    strb r0, [r4, #8]\n    bl _0223EE86\n    ldrb r1, [r4, #0xe]\n    mov r0, #2\n    add sp, #4\n    orr r0, r1\n    strb r0, [r4, #0xe]\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, _0223E8DC ; =0x0000084C\n    add r0, r4, r0\n    bl ov83_022478B4\n    add r0, r4, #0\n    bl ov83_02240348\n    mov r0, #2\n    strb r0, [r4, #8]\n    bl _0223EE86\n    ldr r0, _0223E8DC ; =0x0000084C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _0223E61C\n    cmp r0, #2\n    beq _0223E6A6\n    bl _0223EE86\n    ldr r0, _0223E8DC ; =0x0000084C\n    add r0, r4, r0\n    bl ov83_022478B4\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    add r5, r0, #0\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    bl FrontierSave_GetStat\n    add r5, r0, #0\n    ldr r0, _0223E8E0 ; =0x0000050C\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r2, #0\n    bl ov83_0224777C\n    lsl r1, r0, #1\n    ldr r0, _0223E8E4 ; =ov83_02247D48\n    ldrh r0, [r0, r1]\n    cmp r5, r0\n    bhs _0223E67E\n    ldr r0, _0223E8E8 ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    add r0, r4, #0\n    mov r1, #0x29\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    mov r0, #7\n    strb r0, [r4, #8]\n    bl _0223EE86\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _0223E698\n    ldrb r1, [r4, #0xd]\n    add r0, r4, #0\n    mov r2, #4\n    bl ov83_02241BC4\n    mov r0, #5\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldrb r1, [r4, #0xe]\n    mov r0, #2\n    add sp, #4\n    orr r0, r1\n    strb r0, [r4, #0xe]\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, _0223E8DC ; =0x0000084C\n    add r0, r4, r0\n    bl ov83_022478B4\n    add r0, r4, #0\n    bl ov83_02240348\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldrb r1, [r4, #0xd]\n    ldrb r2, [r4, #0x13]\n    bl ov83_02240FAC\n    cmp r0, #1\n    bne _0223E754\n    mov r0, #6\n    strb r0, [r4, #8]\n    b _0223EE86\n    bl ov83_02247CF0\n    cmp r0, #1\n    bne _0223E754\n    ldr r0, _0223E8EC ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov83_02240348\n    ldr r0, _0223E8F0 ; =0x00000778\n    mov r1, #0xcc\n    ldr r0, [r4, r0]\n    mov r2, #0x64\n    bl ov83_02247630\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0223EE86\n    bl ov83_02247CF0\n    cmp r0, #1\n    bne _0223E754\n    ldr r0, _0223E8EC ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02241354\n    add r0, r4, #0\n    bl ov83_02240348\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldr r2, _0223E8F4 ; =0x00000868\n    mov r0, #2\n    mov r1, #0\n    add r2, r4, r2\n    bl ov83_022477EC\n    mov r0, #0x21\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl TouchscreenListMenu_HandleInput\n    ldr r1, _0223E8EC ; =0x000005DC\n    add r5, r0, #0\n    bl ov83_022477B0\n    add r0, r4, #0\n    bl ov83_02242E88\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    bhi _0223E756\n    bhs _0223E75C\n    cmp r5, #8\n    bhi _0223E754\n    cmp r5, #6\n    blo _0223E754\n    beq _0223E76E\n    cmp r5, #7\n    beq _0223E784\n    cmp r5, #8\n    beq _0223E7C0\n    b _0223EE86\n    add r0, r0, #1\n    cmp r5, r0\n    b _0223EE86\n    add r0, r4, #0\n    bl ov83_022403B8\n    add r0, r4, #0\n    bl ov83_02240300\n    mov r0, #1\n    strb r0, [r4, #8]\n    b _0223EE86\n    add r0, r4, #0\n    strb r5, [r4, #0x13]\n    bl ov83_022403B8\n    add r0, r4, #0\n    mov r1, #6\n    bl ov83_022403C0\n    mov r0, #9\n    strb r0, [r4, #8]\n    b _0223EE86\n    add r0, r4, #0\n    strb r5, [r4, #0x13]\n    bl ov83_022403B8\n    ldr r0, _0223E8E0 ; =0x0000050C\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r2, #1\n    bl ov83_0224777C\n    cmp r0, #1\n    bne _0223E7B2\n    add r0, r4, #0\n    mov r1, #0x36\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    mov r0, #0xf\n    strb r0, [r4, #8]\n    add sp, #4\n    mov r0, #0\n    pop {r3, r4, r5, r6, pc}\n    add r0, r4, #0\n    mov r1, #7\n    bl ov83_022403C0\n    mov r0, #9\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldr r0, _0223E8E0 ; =0x0000050C\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r2, #1\n    bl ov83_0224777C\n    add r6, r0, #0\n    cmp r6, #3\n    bne _0223E7E2\n    ldr r0, _0223E8EC ; =0x000005DC\n    mov r1, #0\n    bl StopSE\n    ldr r0, _0223E8F8 ; =0x000005F3\n    bl PlaySE\n    b _0223EE86\n    add r0, r4, #0\n    strb r5, [r4, #0x13]\n    bl ov83_022403B8\n    mov r1, #0\n    ldr r2, _0223E8FC ; =ov83_02247D4E\n    lsl r3, r6, #1\n    ldrh r2, [r2, r3]\n    add r0, r4, #0\n    mov r3, #4\n    str r1, [sp]\n    bl ov83_02240C48\n    add r0, r4, #0\n    mov r1, #0x26\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    add r0, r4, #0\n    bl ov83_02240514\n    mov r0, #0xc\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldr r0, _0223E900 ; =0x0000085C\n    ldr r0, [r4, r0]\n    bl ov83_02247BC4\n    add r5, r0, #0\n    mov r0, #2\n    mvn r0, r0\n    cmp r5, r0\n    bhi _0223E84A\n    bhs _0223E8AE\n    cmp r5, #8\n    bhi _0223E852\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223E838: ; jump table\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    beq _0223E8B6\n    b _0223EE86\n    ldr r0, _0223E904 ; =0x00000862\n    mov r1, #6\n    ldrsh r2, [r4, r0]\n    mul r1, r2\n    add r2, r5, r1\n    sub r1, r0, #2\n    strb r2, [r4, r1]\n    sub r0, r0, #1\n    ldrb r1, [r4, r1]\n    ldrb r0, [r4, r0]\n    cmp r1, r0\n    bhs _0223E916\n    ldr r0, _0223E908 ; =0x000005DD\n    bl PlaySE\n    lsl r1, r5, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    bl ov83_02242F18\n    mov r0, #0xa\n    strb r0, [r4, #8]\n    b _0223EE86\n    mov r0, #0x5e\n    lsl r0, r0, #4\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #6\n    bl ov83_02242F18\n    mov r0, #0xa\n    strb r0, [r4, #8]\n    b _0223EE86\n    mov r0, #0x5e\n    lsl r0, r0, #4\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #7\n    bl ov83_02242F18\n    mov r0, #0xa\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldr r0, _0223E8EC ; =0x000005DC\n    bl PlaySE\n    b _0223EE86\n    ldr r0, _0223E908 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #8\n    bl ov83_02242F18\n    mov r0, #0xa\n    strb r0, [r4, #8]\n    b _0223EE86\n    bl ov83_02242F2C\n    cmp r0, #1\n    beq _0223E916\n    ldr r0, _0223E90C ; =0x00000864\n    b _0223E910\n    nop\n    _0223E8D8: .word ov83_02247D18\n    _0223E8DC: .word 0x0000084C\n    _0223E8E0: .word 0x0000050C\n    _0223E8E4: .word ov83_02247D48\n    _0223E8E8: .word 0x00000508\n    _0223E8EC: .word 0x000005DC\n    _0223E8F0: .word 0x00000778\n    _0223E8F4: .word 0x00000868\n    _0223E8F8: .word 0x000005F3\n    _0223E8FC: .word ov83_02247D4E\n    _0223E900: .word 0x0000085C\n    _0223E904: .word 0x00000862\n    _0223E908: .word 0x000005DD\n    _0223E90C: .word 0x00000864\n    ldrh r1, [r4, r0]\n    cmp r1, #8\n    bls _0223E918\n    b _0223EE86\n    add r2, r1, r1\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0223E924: ; jump table\n    add r0, r4, #0\n    bl ov83_022428A8\n    ldr r0, _0223EC84 ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    mov r1, #0x86\n    lsl r1, r1, #4\n    ldrb r1, [r4, r1]\n    ldrb r2, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02240EC4\n    add r2, r0, #0\n    mov r1, #0\n    add r0, r4, #0\n    mov r3, #3\n    str r1, [sp]\n    bl ov83_02240C48\n    add r0, r4, #0\n    mov r1, #0x37\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    add r0, r4, #0\n    bl ov83_02240514\n    mov r0, #0xb\n    strb r0, [r4, #8]\n    b _0223EE86\n    sub r1, r0, #2\n    ldrsh r1, [r4, r1]\n    sub r2, r1, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsh r1, [r4, r1]\n    cmp r1, #0\n    bge _0223E9A2\n    sub r0, r0, #3\n    ldrb r0, [r4, r0]\n    mov r1, #6\n    sub r0, r0, #1\n    bl _s32_div_f\n    ldr r1, _0223EC88 ; =0x00000862\n    strh r0, [r4, r1]\n    add r0, r4, #0\n    bl ov83_02240664\n    add r0, r4, #0\n    bl ov83_02240748\n    add r0, r4, #0\n    bl ov83_022407FC\n    ldr r0, _0223EC8C ; =0x0000085C\n    ldr r0, [r4, r0]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov83_022408E0\n    mov r0, #9\n    strb r0, [r4, #8]\n    b _0223EE86\n    sub r1, r0, #2\n    ldrsh r1, [r4, r1]\n    add r2, r1, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    sub r0, r0, #3\n    ldrb r0, [r4, r0]\n    mov r1, #6\n    sub r0, r0, #1\n    bl _s32_div_f\n    ldr r1, _0223EC88 ; =0x00000862\n    ldrsh r2, [r4, r1]\n    cmp r0, r2\n    bge _0223E9EC\n    mov r0, #0\n    strh r0, [r4, r1]\n    add r0, r4, #0\n    bl ov83_02240664\n    add r0, r4, #0\n    bl ov83_02240748\n    add r0, r4, #0\n    bl ov83_022407FC\n    ldr r0, _0223EC8C ; =0x0000085C\n    ldr r0, [r4, r0]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov83_022408E0\n    mov r0, #9\n    strb r0, [r4, #8]\n    b _0223EE86\n    add r0, r4, #0\n    bl ov83_0224042C\n    add r0, r4, #0\n    bl ov83_02240384\n    mov r0, #8\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldr r0, _0223EC90 ; =0x0000084C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _0223EA3A\n    cmp r0, #2\n    bne _0223EA38\n    b _0223EB7E\n    b _0223EE86\n    ldr r0, _0223EC90 ; =0x0000084C\n    add r0, r4, r0\n    bl ov83_022478B4\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    add r5, r0, #0\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    bl FrontierSave_GetStat\n    mov r1, #0x86\n    lsl r1, r1, #4\n    add r5, r0, #0\n    ldrb r1, [r4, r1]\n    ldrb r2, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02240EC4\n    cmp r5, r0\n    bhs _0223EA96\n    ldr r0, _0223EC84 ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    add r0, r4, #0\n    mov r1, #0x20\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    mov r0, #0x10\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldr r0, _0223EC94 ; =0x00000804\n    mov r1, #6\n    ldr r5, [r4, r0]\n    mov r2, #0\n    add r0, r5, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _0223EB36\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _0223EB0A\n    add r0, r4, #0\n    bl ov83_0224042C\n    ldr r0, _0223EC84 ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    mov r1, #0x86\n    lsl r1, r1, #4\n    ldrb r1, [r4, r1]\n    ldrb r2, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02240EC4\n    add r2, r0, #0\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, #4]\n    bl ov80_02237FA4\n    add r1, r4, #0\n    add r0, r4, #0\n    add r1, #0x50\n    bl ov83_02241770\n    mov r1, #0x86\n    lsl r1, r1, #4\n    ldrb r1, [r4, r1]\n    ldrb r2, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02240F48\n    add r2, r0, #0\n    ldrb r1, [r4, #0xd]\n    add r0, r4, #0\n    bl ov83_022416A0\n    mov r0, #0x13\n    strb r0, [r4, #8]\n    b _0223EE86\n    mov r1, #0x86\n    lsl r1, r1, #4\n    ldrb r1, [r4, r1]\n    ldrb r2, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02240F48\n    strh r0, [r4, #0x10]\n    add r0, r4, #0\n    bl ov83_0224042C\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02241354\n    ldrb r1, [r4, #0xe]\n    mov r0, #2\n    add sp, #4\n    orr r0, r1\n    strb r0, [r4, #0xe]\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    add r0, r5, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov83_02240C60\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    add r2, r0, #0\n    ldr r0, [r4, #0x24]\n    mov r1, #1\n    bl BufferItemNameWithIndefArticle\n    ldr r0, _0223EC84 ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    add r0, r4, #0\n    mov r1, #0x3c\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    mov r0, #0x11\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldr r0, _0223EC90 ; =0x0000084C\n    add r0, r4, r0\n    bl ov83_022478B4\n    add r0, r4, #0\n    bl ov83_0224175C\n    mov r0, #9\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldr r0, _0223EC90 ; =0x0000084C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _0223EBA4\n    cmp r0, #2\n    beq _0223EC2C\n    b _0223EE86\n    ldr r0, _0223EC90 ; =0x0000084C\n    add r0, r4, r0\n    bl ov83_022478B4\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    add r5, r0, #0\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    bl FrontierSave_GetStat\n    add r5, r0, #0\n    ldr r0, _0223EC98 ; =0x0000050C\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r2, #1\n    bl ov83_0224777C\n    lsl r1, r0, #1\n    ldr r0, _0223EC9C ; =ov83_02247D4E\n    ldrh r0, [r0, r1]\n    cmp r5, r0\n    bhs _0223EC04\n    ldr r0, _0223EC84 ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    add r0, r4, #0\n    mov r1, #0x29\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    mov r0, #0xf\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _0223EC1E\n    ldrb r1, [r4, #0xd]\n    add r0, r4, #0\n    mov r2, #8\n    bl ov83_02241BC4\n    mov r0, #0xd\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldrb r1, [r4, #0xe]\n    mov r0, #2\n    add sp, #4\n    orr r0, r1\n    strb r0, [r4, #0xe]\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, _0223EC90 ; =0x0000084C\n    add r0, r4, r0\n    bl ov83_022478B4\n    add r0, r4, #0\n    bl ov83_02240384\n    mov r0, #8\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldrb r1, [r4, #0xd]\n    ldrb r2, [r4, #0x13]\n    bl ov83_02240FAC\n    cmp r0, #1\n    bne _0223ED10\n    mov r0, #0xe\n    strb r0, [r4, #8]\n    b _0223EE86\n    bl ov83_02247CF0\n    cmp r0, #1\n    bne _0223ED10\n    ldr r0, _0223ECA0 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov83_02240384\n    ldr r0, _0223ECA4 ; =0x00000778\n    mov r1, #0xd3\n    ldr r0, [r4, r0]\n    mov r2, #0x6a\n    bl ov83_02247630\n    mov r0, #8\n    strb r0, [r4, #8]\n    b _0223EE86\n    bl ov83_02247CF0\n    cmp r0, #1\n    bne _0223ED10\n    ldr r0, _0223ECA0 ; =0x000005DC\n    b _0223ECA8\n    _0223EC84: .word 0x00000508\n    _0223EC88: .word 0x00000862\n    _0223EC8C: .word 0x0000085C\n    _0223EC90: .word 0x0000084C\n    _0223EC94: .word 0x00000804\n    _0223EC98: .word 0x0000050C\n    _0223EC9C: .word ov83_02247D4E\n    _0223ECA0: .word 0x000005DC\n    _0223ECA4: .word 0x00000778\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02241354\n    add r0, r4, #0\n    bl ov83_02240384\n    mov r0, #8\n    strb r0, [r4, #8]\n    b _0223EE86\n    bl ov83_02247CF0\n    cmp r0, #1\n    bne _0223ED10\n    ldr r0, _0223EE8C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov83_0224175C\n    mov r0, #9\n    strb r0, [r4, #8]\n    b _0223EE86\n    bl ov83_02247CF0\n    cmp r0, #1\n    bne _0223ED10\n    ldr r0, _0223EE8C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x3d\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r4, #0xa]\n    add r0, r4, #0\n    bl ov83_02240514\n    mov r0, #0x12\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldr r0, _0223EE90 ; =0x0000084C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _0223ED12\n    cmp r0, #2\n    beq _0223EDAE\n    b _0223EE86\n    ldr r0, _0223EE90 ; =0x0000084C\n    add r0, r4, r0\n    bl ov83_022478B4\n    add r0, r4, #0\n    bl ov83_02240664\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _0223ED82\n    add r0, r4, #0\n    bl ov83_0224042C\n    ldr r0, _0223EE94 ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    mov r1, #0x86\n    lsl r1, r1, #4\n    ldrb r1, [r4, r1]\n    ldrb r2, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02240EC4\n    add r2, r0, #0\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, #4]\n    bl ov80_02237FA4\n    add r1, r4, #0\n    add r0, r4, #0\n    add r1, #0x50\n    bl ov83_02241770\n    mov r1, #0x86\n    lsl r1, r1, #4\n    ldrb r1, [r4, r1]\n    ldrb r2, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02240F48\n    add r2, r0, #0\n    ldrb r1, [r4, #0xd]\n    add r0, r4, #0\n    bl ov83_022416A0\n    mov r0, #0x13\n    strb r0, [r4, #8]\n    b _0223EE86\n    mov r1, #0x86\n    lsl r1, r1, #4\n    ldrb r1, [r4, r1]\n    ldrb r2, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02240F48\n    strh r0, [r4, #0x10]\n    add r0, r4, #0\n    bl ov83_0224042C\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02241354\n    ldrb r1, [r4, #0xe]\n    mov r0, #2\n    add sp, #4\n    orr r0, r1\n    strb r0, [r4, #0xe]\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, _0223EE90 ; =0x0000084C\n    add r0, r4, r0\n    bl ov83_022478B4\n    add r0, r4, #0\n    bl ov83_0224175C\n    mov r0, #9\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldr r2, _0223EE98 ; =0x00000868\n    mov r0, #2\n    mov r1, #0\n    add r2, r4, r2\n    bl ov83_022477EC\n    ldrb r1, [r4, #0xd]\n    ldrb r2, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02240FAC\n    cmp r0, #1\n    bne _0223EE86\n    mov r0, #0x14\n    strb r0, [r4, #8]\n    b _0223EE86\n    bl ov83_02247CF0\n    cmp r0, #1\n    bne _0223EE86\n    ldr r0, _0223EE8C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02241354\n    add r0, r4, #0\n    bl ov83_02240290\n    mov r0, #0\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldr r1, _0223EE9C ; =gSystem\n    ldr r3, [r1, #0x48]\n    mov r1, #0x20\n    add r2, r3, #0\n    tst r2, r1\n    beq _0223EE18\n    sub r1, #0x21\n    bl ov83_02241208\n    b _0223EE86\n    mov r1, #0x10\n    tst r1, r3\n    beq _0223EE26\n    mov r1, #1\n    bl ov83_02241208\n    b _0223EE86\n    bl ov83_02247CF0\n    cmp r0, #1\n    bne _0223EE86\n    ldr r0, _0223EE8C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov83_02241B18\n    add r0, r4, #0\n    bl ov83_02240300\n    mov r0, #1\n    strb r0, [r4, #8]\n    b _0223EE86\n    ldr r1, _0223EE9C ; =gSystem\n    ldr r3, [r1, #0x48]\n    mov r1, #0x20\n    add r2, r3, #0\n    tst r2, r1\n    beq _0223EE5A\n    sub r1, #0x21\n    bl ov83_02241254\n    b _0223EE86\n    mov r1, #0x10\n    tst r1, r3\n    beq _0223EE68\n    mov r1, #1\n    bl ov83_02241254\n    b _0223EE86\n    bl ov83_02247CF0\n    cmp r0, #1\n    bne _0223EE86\n    ldr r0, _0223EE8C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov83_02241B18\n    add r0, r4, #0\n    bl ov83_02240300\n    mov r0, #1\n    strb r0, [r4, #8]\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _0223EE8C: .word 0x000005DC\n    _0223EE90: .word 0x0000084C\n    _0223EE94: .word 0x00000508\n    _0223EE98: .word 0x00000868\n    _0223EE9C: .word gSystem"
    );
    #endif
}

void ov83_0223EEA0(void) {
    /* Original at 0x0223EEA0 */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #4\n    bhi _0223EF96\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223EEB6: ; jump table\n    ldrb r1, [r4, #0xe]\n    mov r0, #0x60\n    ldr r2, _0223EF9C ; =0x00000868\n    bic r1, r0\n    strb r1, [r4, #0xe]\n    mov r0, #2\n    mov r1, #0\n    add r2, r4, r2\n    bl ov83_022477EC\n    ldrb r2, [r4, #0xd]\n    add r0, r4, #0\n    mov r1, #0xb\n    bl ov83_02241368\n    cmp r0, #1\n    bne _0223EF96\n    ldrb r1, [r4, #0xe]\n    mov r0, #2\n    bic r1, r0\n    strb r1, [r4, #0xe]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223EF96\n    ldrb r1, [r4, #0x12]\n    cmp r1, #0xff\n    beq _0223EF96\n    mov r1, #0\n    strb r1, [r4, #0xf]\n    ldrb r2, [r4, #0x13]\n    cmp r2, #4\n    beq _0223EF06\n    cmp r2, #8\n    bne _0223EF10\n    ldrb r1, [r4, #0x12]\n    add r0, r4, #0\n    bl ov83_02241BC4\n    b _0223EF16\n    ldrb r1, [r4, #0x12]\n    bl ov83_022418E8\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223EF96\n    ldrb r0, [r4, #0x15]\n    ldrb r1, [r4, #0x12]\n    bl ov83_0224776C\n    add r1, r0, #0\n    ldrb r2, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02240FAC\n    cmp r0, #1\n    bne _0223EF96\n    mov r0, #0x1e\n    strb r0, [r4, #0xb]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223EF96\n    ldrb r0, [r4, #0xb]\n    sub r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldrb r0, [r4, #0xb]\n    cmp r0, #0\n    bne _0223EF96\n    bl sub_02037BEC\n    mov r0, #0x82\n    bl sub_02037AC0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223EF96\n    mov r0, #0x82\n    bl sub_02037B38\n    cmp r0, #1\n    bne _0223EF96\n    bl sub_02037BEC\n    mov r0, #0x6b\n    bl sub_020379A0\n    mov r0, #0xff\n    strb r0, [r4, #0x12]\n    ldrb r0, [r4, #0xe]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1e\n    bne _0223EF8C\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02241354\n    add r0, r4, #0\n    bl ov83_02240290\n    ldr r0, _0223EFA0 ; =0x000007FE\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0223EF9C: .word 0x00000868\n    _0223EFA0: .word 0x000007FE"
    );
    #endif
}

void ov83_0223EFA4(void) {
    /* Original at 0x0223EFA4 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #0\n    beq _0223EFB8\n    cmp r1, #1\n    beq _0223EFD0\n    cmp r1, #2\n    beq _0223EFF2\n    b _0223F00C\n    mov r1, #0xd\n    mov r2, #0\n    bl ov83_02241368\n    cmp r0, #1\n    bne _0223F00C\n    mov r0, #0x1e\n    strb r0, [r4, #0xb]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223F00C\n    ldrb r0, [r4, #0xb]\n    cmp r0, #0\n    beq _0223EFDA\n    sub r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldrb r0, [r4, #0xb]\n    cmp r0, #0\n    bne _0223F00C\n    bl sub_02037BEC\n    mov r0, #0x83\n    bl sub_02037AC0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223F00C\n    mov r0, #0x83\n    bl sub_02037B38\n    cmp r0, #1\n    bne _0223F00C\n    bl sub_02037BEC\n    add r4, #0xb0\n    add r0, r4, #0\n    bl ov83_02241354\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov83_0223F010(void) {
    /* Original at 0x0223F010 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldrb r0, [r4, #8]\n    cmp r0, #0\n    beq _0223F022\n    cmp r0, #1\n    beq _0223F042\n    b _0223F050\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0223F050\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0223F050\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov83_0223F058(void) {
    /* Original at 0x0223F058 */
    /* Requires manual decompilation - 137 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0223F18C ; =0x0000084C\n    add r0, r5, r0\n    bl ov83_02247858\n    ldr r0, _0223F190 ; =0x0000083C\n    ldr r0, [r5, r0]\n    bl ov83_02247CC4\n    ldr r0, _0223F194 ; =0x00000838\n    ldr r0, [r5, r0]\n    bl ov83_02247A18\n    ldr r0, _0223F198 ; =0x00000734\n    ldr r0, [r5, r0]\n    bl ov83_0224753C\n    ldr r0, _0223F19C ; =0x00000738\n    ldr r0, [r5, r0]\n    bl ov83_0224753C\n    ldr r0, _0223F1A0 ; =0x00000778\n    ldr r0, [r5, r0]\n    bl ov83_0224753C\n    mov r0, #0x76\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ov83_0224753C\n    ldr r0, _0223F1A4 ; =0x00000764\n    ldr r0, [r5, r0]\n    bl ov83_0224753C\n    ldr r0, _0223F1A8 ; =0x0000077C\n    ldr r0, [r5, r0]\n    bl ov83_0224753C\n    mov r0, #0x1e\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl ov83_0224753C\n    ldr r0, _0223F1AC ; =0x0000079C\n    ldr r0, [r5, r0]\n    bl ov83_0224753C\n    ldrb r0, [r5, #9]\n    mov r1, #1\n    bl ov80_02237B24\n    add r7, r0, #0\n    mov r6, #0\n    cmp r7, #0\n    ble _0223F0EA\n    add r4, r5, #0\n    ldr r0, _0223F1B0 ; =0x0000073C\n    ldr r0, [r4, r0]\n    bl ov83_0224753C\n    ldr r0, _0223F1B4 ; =0x0000074C\n    ldr r0, [r4, r0]\n    bl ov83_0224753C\n    ldr r0, _0223F1B8 ; =0x00000768\n    ldr r0, [r4, r0]\n    bl ov83_0224753C\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r7\n    blt _0223F0CA\n    ldr r7, _0223F1BC ; =0x00000784\n    mov r6, #0\n    add r4, r5, #0\n    ldr r0, [r4, r7]\n    bl ov83_0224753C\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #6\n    blt _0223F0F0\n    bl sub_0203A914\n    mov r0, #5\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    mov r1, #2\n    bl PaletteData_FreeBuffers\n    mov r0, #5\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl PaletteData_FreeBuffers\n    mov r0, #5\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    bl PaletteData_Free\n    mov r0, #5\n    mov r1, #0\n    lsl r0, r0, #8\n    str r1, [r5, r0]\n    add r0, #0x18\n    add r0, r5, r0\n    bl ov83_022471FC\n    ldr r0, [r5, #0x20]\n    bl DestroyMsgData\n    ldr r0, [r5, #0x1c]\n    bl DestroyMsgData\n    ldr r0, [r5, #0x24]\n    bl MessageFormat_Delete\n    ldr r0, [r5, #0x28]\n    bl String_Delete\n    ldr r0, [r5, #0x2c]\n    bl String_Delete\n    ldr r0, _0223F1C0 ; =0x00000504\n    ldr r0, [r5, r0]\n    bl MessagePrinter_Delete\n    mov r0, #4\n    bl FontID_Release\n    mov r6, #0\n    add r4, r5, #0\n    ldr r0, [r4, #0x30]\n    bl String_Delete\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #3\n    blt _0223F164\n    add r0, r5, #0\n    add r0, #0x50\n    mov r1, #0\n    bl ov83_0224791C\n    ldr r0, [r5, #0x4c]\n    bl ov83_0223F734\n    ldr r0, _0223F1C4 ; =0x000007A8\n    ldr r0, [r5, r0]\n    bl NARC_Delete\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223F18C: .word 0x0000084C\n    _0223F190: .word 0x0000083C\n    _0223F194: .word 0x00000838\n    _0223F198: .word 0x00000734\n    _0223F19C: .word 0x00000738\n    _0223F1A0: .word 0x00000778\n    _0223F1A4: .word 0x00000764\n    _0223F1A8: .word 0x0000077C\n    _0223F1AC: .word 0x0000079C\n    _0223F1B0: .word 0x0000073C\n    _0223F1B4: .word 0x0000074C\n    _0223F1B8: .word 0x00000768\n    _0223F1BC: .word 0x00000784\n    _0223F1C0: .word 0x00000504\n    _0223F1C4: .word 0x000007A8"
    );
    #endif
}

void ov83_0223F1C8(void) {
    /* Original at 0x0223F1C8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetHBlankIntrCB\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _0223F1F8 ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _0223F1FC ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    pop {r3, pc}\n    _0223F1F8: .word 0xFFFFE0FF\n    _0223F1FC: .word 0x04001000"
    );
    #endif
}

void ov83_0223F200(void) {
    /* Original at 0x0223F200 */
    /* Requires manual decompilation - 503 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r5, r0, #0\n    mov r0, #0xb7\n    mov r1, #0x6b\n    bl NARC_New\n    ldr r1, _0223F594 ; =0x000007A8\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov83_0223F690\n    add r0, r5, #0\n    bl ov83_0223F70C\n    mov r0, #4\n    mov r1, #0x6b\n    bl FontID_Alloc\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0x1f\n    mov r3, #0x6b\n    bl NewMsgDataFromNarc\n    str r0, [r5, #0x20]\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xdd\n    mov r3, #0x6b\n    bl NewMsgDataFromNarc\n    str r0, [r5, #0x1c]\n    mov r0, #0x6b\n    bl MessageFormat_New\n    str r0, [r5, #0x24]\n    mov r0, #0x96\n    lsl r0, r0, #2\n    mov r1, #0x6b\n    bl String_New\n    str r0, [r5, #0x28]\n    mov r0, #0x96\n    lsl r0, r0, #2\n    mov r1, #0x6b\n    bl String_New\n    str r0, [r5, #0x2c]\n    mov r6, #0\n    add r4, r5, #0\n    mov r7, #0x20\n    add r0, r7, #0\n    mov r1, #0x6b\n    bl String_New\n    str r0, [r4, #0x30]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #3\n    blt _0223F268\n    mov r1, #7\n    mov r0, #0\n    lsl r1, r1, #6\n    mov r2, #0x6b\n    bl LoadFontPal0\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x6b\n    bl LoadFontPal1\n    mov r0, #1\n    mov r1, #2\n    mov r2, #0\n    mov r3, #0x6b\n    bl MessagePrinter_New\n    ldr r1, _0223F598 ; =0x00000504\n    mov r2, #0\n    str r0, [r5, r1]\n    add r1, r5, #0\n    ldr r0, [r5, #0x4c]\n    add r1, #0x50\n    bl ov83_022478D4\n    add r0, sp, #0x30\n    add r1, sp, #0x34\n    add r3, sp, #0x30\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, #2\n    add r2, sp, #0x34\n    add r3, #2\n    bl ov83_02240F7C\n    mov r1, #0\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0xa0\n    str r0, [sp, #4]\n    mov r0, #0xa\n    str r0, [sp, #8]\n    ldr r0, _0223F59C ; =0x00000518\n    str r1, [sp, #0xc]\n    add r0, r5, r0\n    add r2, r1, #0\n    add r3, r1, #0\n    str r1, [sp, #0x10]\n    bl ov83_02247454\n    ldr r1, _0223F5A0 ; =0x00000734\n    str r0, [r5, r1]\n    mov r1, #0\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #0xa0\n    str r0, [sp, #4]\n    mov r0, #0x7c\n    str r0, [sp, #8]\n    ldr r0, _0223F59C ; =0x00000518\n    str r1, [sp, #0xc]\n    add r0, r5, r0\n    add r2, r1, #0\n    add r3, r1, #0\n    str r1, [sp, #0x10]\n    bl ov83_02247454\n    ldr r1, _0223F5A4 ; =0x00000738\n    str r0, [r5, r1]\n    sub r0, r1, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ov83_0224755C\n    ldr r0, _0223F5A4 ; =0x00000738\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ov83_0224755C\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _0223F32C\n    mov r0, #0x48\n    mov r7, #0x40\n    str r0, [sp, #0x18]\n    b _0223F332\n    mov r0, #0x28\n    mov r7, #0x20\n    str r0, [sp, #0x18]\n    ldrb r0, [r5, #9]\n    mov r1, #1\n    bl ov80_02237B24\n    mov r6, #0\n    str r0, [sp, #0x14]\n    cmp r0, #0\n    bgt _0223F344\n    b _0223F45C\n    add r4, r5, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x18]\n    mov r1, #1\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #0x3e\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, _0223F59C ; =0x00000518\n    add r2, r1, #0\n    add r0, r5, r0\n    add r3, r1, #0\n    bl ov83_02247454\n    ldr r1, _0223F5A8 ; =0x0000074C\n    str r0, [r4, r1]\n    add r0, r1, #0\n    add r0, #0x58\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    str r0, [sp, #0x1c]\n    bl GetMonData\n    cmp r0, #0\n    bne _0223F394\n    ldr r0, _0223F5A8 ; =0x0000074C\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ov83_0224755C\n    ldr r0, [sp, #0x1c]\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x1c]\n    mov r1, #0xa4\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x24]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x10\n    mov r2, #0x30\n    bl CalculateHpBarColor\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov83_022411B0\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x24]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x10\n    mov r2, #0x30\n    bl CalculateHpBarColor\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov83_022411DC\n    mov r1, #0\n    str r0, [sp]\n    lsl r0, r7, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #0x4e\n    str r0, [sp, #8]\n    mov r0, #3\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, _0223F59C ; =0x00000518\n    add r2, r1, #0\n    add r0, r5, r0\n    add r3, r1, #0\n    bl ov83_02247454\n    ldr r1, _0223F5AC ; =0x00000768\n    mov r2, #0xa\n    str r0, [r4, r1]\n    ldr r0, [sp, #0x28]\n    add r1, r6, #0\n    str r0, [sp]\n    lsl r0, r7, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #0x3a\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, _0223F59C ; =0x00000518\n    add r1, #0xa\n    add r0, r5, r0\n    mov r3, #5\n    bl ov83_02247454\n    ldr r1, _0223F5B0 ; =0x0000073C\n    str r0, [r4, r1]\n    add r0, r1, #0\n    add r0, #0x68\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    add r1, r0, #0\n    ldr r0, _0223F5B0 ; =0x0000073C\n    ldr r0, [r4, r0]\n    bl ov83_022475EC\n    ldr r0, [sp, #0x18]\n    add r6, r6, #1\n    add r0, #0x40\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    add r4, r4, #4\n    add r7, #0x40\n    cmp r6, r0\n    bge _0223F45C\n    b _0223F346\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #0xa0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, _0223F59C ; =0x00000518\n    str r1, [sp, #0x10]\n    mov r1, #3\n    add r0, r5, r0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov83_022474C4\n    ldr r1, _0223F5B4 ; =0x0000079C\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #0\n    bl ov83_0224755C\n    mov r4, #0\n    add r6, r5, #0\n    add r7, r4, #0\n    add r1, sp, #0x2c\n    add r0, r4, #0\n    add r1, #2\n    add r2, sp, #0x2c\n    bl ov83_02242894\n    str r7, [sp]\n    add r1, sp, #0x2c\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    mov r3, #4\n    str r0, [sp, #4]\n    mov r0, #0\n    ldrsh r0, [r1, r0]\n    add r1, r4, #4\n    add r2, r1, #0\n    str r0, [sp, #8]\n    ldr r0, _0223F59C ; =0x00000518\n    str r7, [sp, #0xc]\n    add r0, r5, r0\n    str r7, [sp, #0x10]\n    bl ov83_02247454\n    ldr r1, _0223F5B8 ; =0x00000784\n    str r0, [r6, r1]\n    add r0, r1, #0\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl ov83_0224755C\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #6\n    blt _0223F48C\n    add r0, r5, #0\n    add r1, sp, #0x3c\n    add r2, sp, #0x38\n    mov r3, #0\n    bl ov83_02240E70\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [sp, #0x3c]\n    mov r1, #0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x38]\n    add r2, r1, #0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, _0223F59C ; =0x00000518\n    add r3, r1, #0\n    add r0, r5, r0\n    str r1, [sp, #0x10]\n    bl ov83_02247454\n    mov r1, #0x76\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    ldr r1, [sp, #0x3c]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    str r1, [sp, #4]\n    ldr r1, [sp, #0x38]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    str r1, [sp, #8]\n    mov r1, #0\n    str r0, [sp, #0xc]\n    ldr r0, _0223F59C ; =0x00000518\n    add r2, r1, #0\n    add r0, r5, r0\n    add r3, r1, #0\n    str r1, [sp, #0x10]\n    bl ov83_02247454\n    ldr r1, _0223F5BC ; =0x00000764\n    str r0, [r5, r1]\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _0223F548\n    ldr r0, _0223F5BC ; =0x00000764\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ov83_0224755C\n    mov r0, #0xb\n    str r0, [sp]\n    mov r0, #0x14\n    str r0, [sp, #4]\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, _0223F59C ; =0x00000518\n    str r1, [sp, #0xc]\n    add r0, r5, r0\n    add r2, r1, #0\n    add r3, r1, #0\n    str r1, [sp, #0x10]\n    bl ov83_02247454\n    ldr r1, _0223F5C0 ; =0x00000778\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #0\n    bl ov83_0224755C\n    mov r1, #0\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #0x14\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, _0223F59C ; =0x00000518\n    add r2, r1, #0\n    add r0, r5, r0\n    add r3, r1, #0\n    str r1, [sp, #0x10]\n    bl ov83_02247454\n    ldr r1, _0223F5C4 ; =0x0000077C\n    b _0223F5C8\n    nop\n    _0223F594: .word 0x000007A8\n    _0223F598: .word 0x00000504\n    _0223F59C: .word 0x00000518\n    _0223F5A0: .word 0x00000734\n    _0223F5A4: .word 0x00000738\n    _0223F5A8: .word 0x0000074C\n    _0223F5AC: .word 0x00000768\n    _0223F5B0: .word 0x0000073C\n    _0223F5B4: .word 0x0000079C\n    _0223F5B8: .word 0x00000784\n    _0223F5BC: .word 0x00000764\n    _0223F5C0: .word 0x00000778\n    _0223F5C4: .word 0x0000077C\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #0\n    bl ov83_0224755C\n    add r0, r5, #0\n    bl ov83_02241E18\n    add r0, r5, #0\n    bl ov83_02241FF0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov83_022421E0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x30\n    str r0, [sp, #4]\n    mov r0, #0x28\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, _0223F67C ; =0x00000518\n    str r1, [sp, #0x10]\n    mov r1, #2\n    add r0, r5, r0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov83_022474C4\n    mov r3, #0x1e\n    lsl r3, r3, #6\n    add r2, r3, #0\n    str r0, [r5, r3]\n    add r1, r3, #0\n    add r2, #0x8c\n    ldr r0, [r5, r3]\n    add r1, #0x88\n    add r3, #0x94\n    ldrh r2, [r5, r2]\n    ldr r1, [r5, r1]\n    ldr r3, [r5, r3]\n    bl ov83_02247668\n    ldrb r2, [r5, #0x14]\n    add r0, r5, #0\n    mov r1, #1\n    bl ov83_02247A24\n    ldr r1, _0223F680 ; =0x00000838\n    str r0, [r5, r1]\n    ldr r1, _0223F67C ; =0x00000518\n    ldr r0, [r5, r1]\n    sub r1, #0x18\n    ldr r1, [r5, r1]\n    bl ov83_02247CB8\n    ldr r1, _0223F684 ; =0x0000083C\n    str r0, [r5, r1]\n    add r1, #0x10\n    add r0, r5, r1\n    bl ov83_02247844\n    bl sub_02037474\n    cmp r0, #0\n    beq _0223F660\n    mov r0, #1\n    mov r1, #0x10\n    bl G2dRenderer_SetObjCharTransferReservedRegion\n    mov r0, #1\n    bl G2dRenderer_SetPlttTransferReservedRegion\n    bl sub_0203A880\n    mov r0, #0xa\n    str r0, [sp]\n    ldr r0, _0223F688 ; =0x04000050\n    mov r1, #0\n    mov r2, #0xe\n    mov r3, #6\n    bl G2x_SetBlendAlpha_\n    ldr r0, _0223F68C ; =ov83_0223F7A0\n    add r1, r5, #0\n    bl Main_SetVBlankIntrCB\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223F67C: .word 0x00000518\n    _0223F680: .word 0x00000838\n    _0223F684: .word 0x0000083C\n    _0223F688: .word 0x04000050\n    _0223F68C: .word ov83_0223F7A0"
    );
    #endif
}

void ov83_0223F690(void) {
    /* Original at 0x0223F690 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _0223F700 ; =0x04000304\n    add r4, r0, #0\n    ldrh r1, [r2]\n    ldr r0, _0223F704 ; =0xFFFF7FFF\n    and r0, r1\n    strh r0, [r2]\n    bl ov83_0223F7E4\n    ldr r0, [r4, #0x4c]\n    bl ov83_0223F804\n    mov r0, #0x6b\n    bl PaletteData_Init\n    mov r1, #5\n    lsl r1, r1, #8\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #2\n    lsl r2, r1, #8\n    mov r3, #0x6b\n    bl PaletteData_AllocBuffers\n    mov r0, #5\n    lsl r0, r0, #8\n    mov r2, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    lsl r2, r2, #8\n    mov r3, #0x6b\n    bl PaletteData_AllocBuffers\n    add r0, r4, #0\n    mov r1, #3\n    bl ov83_0223FA00\n    bl ov83_0223FA74\n    add r0, r4, #0\n    mov r1, #2\n    bl ov83_0223FAA8\n    bl ov83_0223FAF0\n    ldr r2, _0223F708 ; =0x00000868\n    mov r0, #2\n    mov r1, #0\n    add r2, r4, r2\n    bl ov83_022477EC\n    add r0, r4, #0\n    mov r1, #4\n    bl ov83_0223FBEC\n    pop {r4, pc}\n    _0223F700: .word 0x04000304\n    _0223F704: .word 0xFFFF7FFF\n    _0223F708: .word 0x00000868"
    );
    #endif
}

void ov83_0223F70C(void) {
    /* Original at 0x0223F70C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    add r2, r0, #0\n    ldr r1, _0223F72C ; =0x000007A4\n    ldr r0, _0223F730 ; =0x00000518\n    lsl r2, r2, #0x18\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    lsr r2, r2, #0x18\n    bl ov83_02246E08\n    pop {r4, pc}\n    nop\n    _0223F72C: .word 0x000007A4\n    _0223F730: .word 0x00000518"
    );
    #endif
}

void ov83_0223F734(void) {
    /* Original at 0x0223F734 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x1f\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x1f\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r4, #0\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #0\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    bl Heap_Free\n    ldr r2, _0223F79C ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    pop {r4, pc}\n    nop\n    _0223F79C: .word 0x04000304"
    );
    #endif
}

void ov83_0223F7A0(void) {
    /* Original at 0x0223F7A0 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #5\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0223F7B2\n    bl PaletteData_PushTransparentBuffers\n    ldr r0, [r4, #0x4c]\n    bl DoScheduledBgGpuUpdates\n    ldr r0, _0223F7D8 ; =0x00000868\n    add r0, r4, r0\n    bl ov83_0224780C\n    bl GF_RunVramTransferTasks\n    bl OamManager_ApplyAndResetBuffers\n    ldr r3, _0223F7DC ; =0x027E0000\n    ldr r1, _0223F7E0 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    nop\n    _0223F7D8: .word 0x00000868\n    _0223F7DC: .word 0x027E0000\n    _0223F7E0: .word 0x00003FF8"
    );
    #endif
}

void ov83_0223F7E4(void) {
    GfGfx_SetBanks(5);
}

void ov83_0223F804(void) {
    /* Original at 0x0223F804 */
    /* Requires manual decompilation - 217 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0xf0\n    ldr r5, _0223F9D8 ; =ov83_02247D38\n    add r3, sp, #0xe0\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _0223F9DC ; =ov83_02247DA0\n    add r3, sp, #0xc4\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x6b\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223F9E0 ; =ov83_02247DBC\n    add r3, sp, #0xa8\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x6b\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223F9E4 ; =ov83_02247DF4\n    add r3, sp, #0x8c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #2\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x6b\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223F9E8 ; =ov83_02247E10\n    add r3, sp, #0x70\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #3\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x6b\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223F9EC ; =ov83_02247E2C\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223F9F0 ; =ov83_02247E48\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #5\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x6b\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223F9F4 ; =ov83_02247D84\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r3]\n    add r0, r4, #0\n    mov r1, #6\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #6\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x6b\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #6\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223F9F8 ; =ov83_02247DD8\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #7\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #7\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x6b\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    ldr r1, _0223F9FC ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    strh r2, [r1]\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0xf0\n    pop {r3, r4, r5, pc}\n    _0223F9D8: .word ov83_02247D38\n    _0223F9DC: .word ov83_02247DA0\n    _0223F9E0: .word ov83_02247DBC\n    _0223F9E4: .word ov83_02247DF4\n    _0223F9E8: .word ov83_02247E10\n    _0223F9EC: .word ov83_02247E2C\n    _0223F9F0: .word ov83_02247E48\n    _0223F9F4: .word ov83_02247D84\n    _0223F9F8: .word ov83_02247DD8\n    _0223F9FC: .word 0x04000008"
    );
    #endif
}

void ov83_0223FA00(void) {
    /* Original at 0x0223FA00 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r4, r1, #0\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    ldr r0, _0223FA70 ; =0x000007A8\n    ldr r2, [r5, #0x4c]\n    ldr r0, [r5, r0]\n    mov r1, #0x22\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _0223FA4E\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    ldr r0, _0223FA70 ; =0x000007A8\n    ldr r2, [r5, #0x4c]\n    ldr r0, [r5, r0]\n    mov r1, #0x23\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    ldr r0, _0223FA70 ; =0x000007A8\n    ldr r2, [r5, #0x4c]\n    ldr r0, [r5, r0]\n    mov r1, #0x24\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0223FA70: .word 0x000007A8"
    );
    #endif
}

void ov83_0223FA74(void) {
    /* Original at 0x0223FA74 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r0, #0xb7\n    mov r1, #0x9c\n    add r2, sp, #0\n    mov r3, #0x6b\n    bl GfGfxLoader_GetPlttData\n    add r4, r0, #0\n    ldr r0, [sp]\n    mov r1, #0xe0\n    ldr r0, [r0, #0xc]\n    bl DC_FlushRange\n    ldr r0, [sp]\n    mov r1, #0\n    ldr r0, [r0, #0xc]\n    mov r2, #0xe0\n    bl GX_LoadBGPltt\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov83_0223FAA8(void) {
    /* Original at 0x0223FAA8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r4, r1, #0\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    ldr r0, _0223FAEC ; =0x000007A8\n    ldr r2, [r5, #0x4c]\n    ldr r0, [r5, r0]\n    mov r1, #0x22\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    ldr r0, _0223FAEC ; =0x000007A8\n    ldr r2, [r5, #0x4c]\n    ldr r0, [r5, r0]\n    mov r1, #0x2a\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0223FAEC: .word 0x000007A8"
    );
    #endif
}

void ov83_0223FAF0(void) {
    /* Original at 0x0223FAF0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r0, #0xb7\n    mov r1, #0x9c\n    add r2, sp, #0\n    mov r3, #0x6b\n    bl GfGfxLoader_GetPlttData\n    add r4, r0, #0\n    ldr r0, [sp]\n    mov r1, #0x80\n    ldr r0, [r0, #0xc]\n    bl DC_FlushRange\n    ldr r0, [sp]\n    mov r1, #0\n    ldr r0, [r0, #0xc]\n    mov r2, #0x80\n    bl GX_LoadBGPltt\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov83_0223FB24(void) {
    /* Original at 0x0223FB24 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r4, r1, #0\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    ldr r0, _0223FB68 ; =0x000007A8\n    ldr r2, [r5, #0x4c]\n    ldr r0, [r5, r0]\n    mov r1, #0x22\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    ldr r0, _0223FB68 ; =0x000007A8\n    ldr r2, [r5, #0x4c]\n    ldr r0, [r5, r0]\n    mov r1, #0x2b\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0223FB68: .word 0x000007A8"
    );
    #endif
}

void ov83_0223FB6C(void) {
    /* Original at 0x0223FB6C */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    ldr r0, _0223FBE8 ; =0x000007A8\n    ldr r2, [r4, #0x4c]\n    ldr r0, [r4, r0]\n    mov r1, #0x22\n    mov r3, #2\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    ldr r0, _0223FBE8 ; =0x000007A8\n    ldr r2, [r4, #0x4c]\n    ldr r0, [r4, r0]\n    mov r1, #0x26\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    ldr r0, _0223FBE8 ; =0x000007A8\n    ldr r2, [r4, #0x4c]\n    ldr r0, [r4, r0]\n    mov r1, #0x28\n    mov r3, #6\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    ldr r0, _0223FBE8 ; =0x000007A8\n    ldr r2, [r4, #0x4c]\n    ldr r0, [r4, r0]\n    mov r1, #0x29\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _0223FBE8: .word 0x000007A8"
    );
    #endif
}

void ov83_0223FBEC(void) {
    /* Original at 0x0223FBEC */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r4, r1, #0\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    ldr r0, _0223FC44 ; =0x000007A8\n    ldr r2, [r5, #0x4c]\n    ldr r0, [r5, r0]\n    mov r1, #0x28\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    ldr r0, _0223FC44 ; =0x000007A8\n    ldr r2, [r5, #0x4c]\n    ldr r0, [r5, r0]\n    mov r1, #0x93\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x6b\n    str r0, [sp, #4]\n    ldr r0, _0223FC44 ; =0x000007A8\n    mov r1, #0xbe\n    ldr r0, [r5, r0]\n    mov r2, #4\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0223FC44: .word 0x000007A8"
    );
    #endif
}

void ov83_0223FC48(void) {
    /* Original at 0x0223FC48 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r1, sp, #0x38\n    ldrb r1, [r1]\n    add r5, r0, #0\n    add r0, r4, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x20]\n    ldr r2, [r5, #0x2c]\n    add r1, r6, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    ldr r2, [r5, #0x2c]\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x28]\n    add r2, sp, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    add r3, r7, #0\n    str r0, [sp, #4]\n    add r0, sp, #0x38\n    ldrb r1, [r0]\n    ldrb r0, [r2, #0x18]\n    ldrb r2, [r2, #0x1c]\n    lsl r0, r0, #0x18\n    lsl r2, r2, #0x18\n    lsr r0, r0, #8\n    lsr r2, r2, #0x10\n    orr r0, r2\n    orr r0, r1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r1, sp, #0x3c\n    ldrb r1, [r1]\n    ldr r2, [r5, #0x28]\n    add r0, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_0223FCB4(void) {
    /* Original at 0x0223FCB4 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    add r1, r2, #0\n    ldr r0, [r5, #0x20]\n    ldr r2, [r5, #0x2c]\n    add r6, r3, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    ldr r2, [r5, #0x2c]\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x20]\n    add r2, sp, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    add r3, r6, #0\n    str r0, [sp, #4]\n    add r0, sp, #0x30\n    ldrb r1, [r0]\n    ldrb r0, [r2, #0x18]\n    ldrb r2, [r2, #0x1c]\n    lsl r0, r0, #0x18\n    lsl r2, r2, #0x18\n    lsr r0, r0, #8\n    lsr r2, r2, #0x10\n    orr r0, r2\n    orr r0, r1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r1, sp, #0x34\n    ldrb r1, [r1]\n    ldr r2, [r5, #0x28]\n    add r0, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov83_0223FD14(void) {
    /* Original at 0x0223FD14 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    mov r3, #1\n    add r4, r1, #0\n    str r3, [sp]\n    mov r1, #0xff\n    str r1, [sp, #4]\n    str r3, [sp, #8]\n    mov r1, #2\n    str r1, [sp, #0xc]\n    mov r1, #0xf\n    str r1, [sp, #0x10]\n    add r5, r0, #0\n    add r1, r5, #0\n    str r2, [sp, #0x14]\n    add r1, #0xb0\n    add r2, r4, #0\n    bl ov83_0223FC48\n    add r5, #0xb0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #0\n    add sp, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_0223FD4C(void) {
    /* Original at 0x0223FD4C */
    /* Requires manual decompilation - 200 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r6, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    add r2, r0, #0\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl BufferItemName\n    mov r0, #8\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x46\n    mov r3, #1\n    bl ov83_0223FF20\n    mov r0, #8\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x47\n    mov r3, #0x40\n    bl ov83_0223FF20\n    add r0, r6, #0\n    bl GetMonNature\n    add r2, r0, #0\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl BufferNatureName\n    mov r0, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x48\n    mov r3, #1\n    bl ov83_0223FF20\n    mov r0, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x49\n    mov r3, #0x40\n    bl ov83_0223FF20\n    add r0, r6, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    add r2, r0, #0\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl BufferAbilityName\n    mov r0, #0x28\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x4a\n    mov r3, #1\n    bl ov83_0223FF20\n    mov r0, #0x28\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x4b\n    mov r3, #0x40\n    bl ov83_0223FF20\n    add r0, r6, #0\n    mov r1, #0xa5\n    mov r2, #0\n    bl GetMonData\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0\n    mov r3, #3\n    bl ov83_02240C48\n    mov r0, #0x38\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x4c\n    mov r3, #1\n    bl ov83_0223FF20\n    mov r3, #0x38\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x4d\n    str r3, [sp]\n    bl ov83_0223FF20\n    add r0, r6, #0\n    mov r1, #0xa6\n    mov r2, #0\n    bl GetMonData\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0\n    mov r3, #3\n    bl ov83_02240C48\n    mov r0, #0x38\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x4e\n    mov r3, #0x58\n    bl ov83_0223FF20\n    mov r0, #0x38\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x4f\n    mov r3, #0x90\n    bl ov83_0223FF20\n    add r0, r6, #0\n    mov r1, #0xa8\n    mov r2, #0\n    bl GetMonData\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0\n    mov r3, #3\n    bl ov83_02240C48\n    mov r0, #0x48\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x50\n    mov r3, #1\n    bl ov83_0223FF20\n    mov r0, #0x48\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x51\n    mov r3, #0x38\n    bl ov83_0223FF20\n    add r0, r6, #0\n    mov r1, #0xa9\n    mov r2, #0\n    bl GetMonData\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0\n    mov r3, #3\n    bl ov83_02240C48\n    mov r0, #0x48\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x52\n    mov r3, #0x58\n    bl ov83_0223FF20\n    mov r0, #0x48\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x53\n    mov r3, #0x90\n    bl ov83_0223FF20\n    add r0, r6, #0\n    mov r1, #0xa7\n    mov r2, #0\n    bl GetMonData\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0\n    mov r3, #3\n    bl ov83_02240C48\n    mov r0, #0x58\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x54\n    mov r3, #1\n    bl ov83_0223FF20\n    mov r0, #0x58\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x55\n    mov r3, #0x38\n    bl ov83_0223FF20\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov83_0223FF20(void) {
    /* Original at 0x0223FF20 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, sp, #0x10\n    ldrh r4, [r4, #0x10]\n    str r4, [sp]\n    mov r4, #0xff\n    str r4, [sp, #4]\n    mov r4, #1\n    str r4, [sp, #8]\n    mov r4, #2\n    str r4, [sp, #0xc]\n    mov r4, #0\n    str r4, [sp, #0x10]\n    str r4, [sp, #0x14]\n    bl ov83_0223FCB4\n    add sp, #0x18\n    pop {r4, pc}"
    );
    #endif
}

void ov83_0223FF44(void) {
    /* Original at 0x0223FF44 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    add r4, r2, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x64\n    str r0, [sp]\n    str r4, [sp, #4]\n    mov r0, #0x36\n    str r0, [sp, #8]\n    mov r0, #0x3a\n    str r0, [sp, #0xc]\n    mov r0, #0x42\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r2, #0\n    mov r3, #0x60\n    bl ov83_0223FFD8\n    mov r0, #0x64\n    str r0, [sp]\n    str r4, [sp, #4]\n    mov r0, #0x37\n    str r0, [sp, #8]\n    mov r0, #0x3b\n    str r0, [sp, #0xc]\n    mov r0, #0x43\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r2, #1\n    mov r3, #0x61\n    bl ov83_0223FFD8\n    mov r0, #0x64\n    str r0, [sp]\n    str r4, [sp, #4]\n    mov r0, #0x38\n    str r0, [sp, #8]\n    mov r0, #0x3c\n    str r0, [sp, #0xc]\n    mov r0, #0x44\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r2, #2\n    mov r3, #0x62\n    bl ov83_0223FFD8\n    mov r0, #0x64\n    str r0, [sp]\n    str r4, [sp, #4]\n    mov r0, #0x39\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    mov r0, #0x45\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r2, #3\n    mov r3, #0x63\n    bl ov83_0223FFD8\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov83_0223FFD8(void) {
    /* Original at 0x0223FFD8 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    add r6, r1, #0\n    add r5, r2, #0\n    ldr r0, [sp, #0x34]\n    ldr r1, [sp, #0x38]\n    mov r2, #0\n    add r7, r3, #0\n    bl GetMonData\n    add r2, r0, #0\n    ldr r0, [r4, #0x24]\n    add r1, r5, #0\n    bl BufferMoveName\n    mov r3, #0x18\n    add r0, r5, #0\n    mul r0, r3\n    add r0, #0xc\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    str r5, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov83_0223FCB4\n    strb r0, [r4, #0xa]\n    ldr r0, [sp, #0x34]\n    ldr r1, [sp, #0x3c]\n    mov r2, #0\n    bl GetMonData\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #4\n    mov r3, #3\n    bl ov83_02240C48\n    ldr r0, [sp, #0x34]\n    ldr r1, [sp, #0x40]\n    mov r2, #0\n    bl GetMonData\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #5\n    mov r3, #3\n    bl ov83_02240C48\n    str r5, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    ldr r2, [sp, #0x30]\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r3, #0x60\n    bl ov83_0223FCB4\n    strb r0, [r4, #0xa]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_02240080(void) {
    /* Original at 0x02240080 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    add r5, r0, #0\n    add r0, r7, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldrb r0, [r5, #9]\n    mov r1, #1\n    bl ov80_02237B24\n    add r6, r0, #0\n    mov r4, #0\n    cmp r6, #0\n    ble _022400B2\n    lsl r2, r4, #0x18\n    add r0, r5, #0\n    add r1, r7, #0\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl ov83_022400BC\n    add r4, r4, #1\n    cmp r4, r6\n    blt _0224009E\n    add r0, r7, #0\n    bl ScheduleWindowCopyToVram\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_022400BC(void) {
    /* Original at 0x022400BC */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, _02240168 ; =0x000007A4\n    add r4, r2, #0\n    add r6, r1, #0\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    add r7, r3, #0\n    bl Party_GetMonByIndex\n    str r0, [sp, #0xc]\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _022400E2\n    mov r0, #0x24\n    b _022400E4\n    mov r0, #4\n    cmp r7, #0\n    bne _0224010A\n    lsl r1, r4, #6\n    add r2, r0, r1\n    lsl r2, r2, #0x10\n    lsr r7, r2, #0x10\n    add r2, r0, #0\n    add r2, #0x18\n    add r2, r2, r1\n    add r0, #0x20\n    lsl r2, r2, #0x10\n    add r0, r0, r1\n    lsr r2, r2, #0x10\n    lsl r0, r0, #0x10\n    str r2, [sp, #0x10]\n    lsr r0, r0, #0x10\n    mov r4, #1\n    str r0, [sp, #0x14]\n    b _02240116\n    mov r0, #0x1c\n    str r0, [sp, #0x10]\n    mov r0, #0x24\n    mov r7, #4\n    mov r4, #0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0xc]\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    str r6, [sp]\n    add r1, r0, #0\n    str r7, [sp, #4]\n    ldr r0, _0224016C ; =0x00000504\n    str r4, [sp, #8]\n    ldr r0, [r5, r0]\n    mov r2, #3\n    mov r3, #1\n    bl PrintUIntOnWindow\n    str r4, [sp]\n    ldr r0, _0224016C ; =0x00000504\n    ldr r3, [sp, #0x10]\n    ldr r0, [r5, r0]\n    mov r1, #0\n    add r2, r6, #0\n    bl sub_0200CDAC\n    ldr r0, [sp, #0xc]\n    mov r1, #0xa4\n    mov r2, #0\n    bl GetMonData\n    str r6, [sp]\n    add r1, r0, #0\n    ldr r0, [sp, #0x14]\n    mov r2, #3\n    str r0, [sp, #4]\n    ldr r0, _0224016C ; =0x00000504\n    str r4, [sp, #8]\n    ldr r0, [r5, r0]\n    mov r3, #0\n    bl PrintUIntOnWindow\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _02240168: .word 0x000007A4\n    _0224016C: .word 0x00000504"
    );
    #endif
}

void ov83_02240170(void) {
    /* Original at 0x02240170 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #9]\n    add r6, r1, #0\n    mov r1, #1\n    bl ov80_02237B24\n    add r7, r0, #0\n    mov r4, #0\n    cmp r7, #0\n    ble _0224019A\n    lsl r2, r4, #0x18\n    add r0, r5, #0\n    add r1, r6, #0\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl ov83_022401A4\n    add r4, r4, #1\n    cmp r4, r7\n    blt _02240186\n    add r0, r6, #0\n    bl ScheduleWindowCopyToVram\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_022401A4(void) {
    /* Original at 0x022401A4 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    str r3, [sp, #0x14]\n    ldrb r0, [r5, #9]\n    str r1, [sp, #0x10]\n    add r6, r2, #0\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _022401C0\n    mov r4, #0x28\n    mov r7, #0x50\n    b _022401C4\n    mov r4, #8\n    mov r7, #0x30\n    ldr r0, _02240230 ; =0x000007A4\n    add r1, r6, #0\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    bne _022401E0\n    lsl r0, r6, #6\n    add r6, r4, r0\n    mov r4, #1\n    add r7, r7, r0\n    b _022401E6\n    mov r6, #4\n    mov r4, #0\n    mov r7, #0x30\n    ldr r0, [sp, #0x18]\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x10]\n    mov r1, #1\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldr r0, _02240234 ; =0x00000504\n    str r4, [sp, #0xc]\n    ldr r0, [r5, r0]\n    mov r3, #3\n    bl sub_0200CE7C\n    ldr r0, [sp, #0x18]\n    mov r1, #0x6f\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0\n    lsl r0, r0, #0x18\n    str r1, [sp]\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r1, [sp, #0x10]\n    add r0, r5, #0\n    add r2, r7, #0\n    add r3, r4, #0\n    bl ov83_02240D64\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02240230: .word 0x000007A4\n    _02240234: .word 0x00000504"
    );
    #endif
}

void ov83_02240238(void) {
    /* Original at 0x02240238 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldrb r0, [r5, #9]\n    add r6, r1, #0\n    add r4, r2, #0\n    add r7, r3, #0\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02240252\n    mov r1, #0x24\n    b _02240254\n    mov r1, #4\n    lsl r0, r4, #6\n    add r4, r1, r0\n    mov r0, #0x18\n    str r0, [sp]\n    mov r0, #9\n    mov r1, #0\n    lsl r2, r4, #0x10\n    str r0, [sp, #4]\n    add r0, r6, #0\n    lsr r2, r2, #0x10\n    add r3, r1, #0\n    bl FillWindowPixelRect\n    str r6, [sp]\n    str r4, [sp, #4]\n    mov r3, #1\n    ldr r0, _0224028C ; =0x00000504\n    str r3, [sp, #8]\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    mov r2, #3\n    bl PrintUIntOnWindow\n    add r0, r6, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0224028C: .word 0x00000504"
    );
    #endif
}

void ov83_02240290(void) {
    /* Original at 0x02240290 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    mov r1, #5\n    str r1, [sp]\n    mov r1, #0xff\n    str r1, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r1, #2\n    add r4, r0, #0\n    str r1, [sp, #0xc]\n    mov r3, #0\n    str r3, [sp, #0x10]\n    add r1, r4, #0\n    str r3, [sp, #0x14]\n    add r1, #0x60\n    mov r2, #6\n    bl ov83_0223FC48\n    strb r0, [r4, #0xa]\n    ldr r0, _022402F0 ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02247944\n    mov r3, #1\n    add r1, r4, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    add r1, #0xc0\n    mov r2, #5\n    str r3, [sp, #0x14]\n    bl ov83_0223FC48\n    strb r0, [r4, #0xa]\n    add sp, #0x18\n    pop {r4, pc}\n    _022402F0: .word 0x00000508"
    );
    #endif
}

void ov83_022402F4(void) {
    ov83_02241354();
}

void ov83_02240300(void) {
    /* Original at 0x02240300 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0224032C ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    mov r1, #1\n    ldr r0, _02240330 ; =0x00000848\n    mvn r1, r1\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov83_02242BAC\n    add r0, r4, #0\n    bl ov83_02242DAC\n    pop {r4, pc}\n    _0224032C: .word 0x00000508\n    _02240330: .word 0x00000848"
    );
    #endif
}

void ov83_02240334(void) {
    ov83_02241354();
    ov83_02242D5C(r4);
}

void ov83_02240348(void) {
    /* Original at 0x02240348 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02240374 ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    mov r1, #1\n    ldr r0, _02240378 ; =0x00000848\n    mvn r1, r1\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov83_02242BF0\n    add r0, r4, #0\n    bl ov83_02242DFC\n    pop {r4, pc}\n    _02240374: .word 0x00000508\n    _02240378: .word 0x00000848"
    );
    #endif
}

void ov83_0224037C(void) {
    ov83_02242D5C();
}

void ov83_02240384(void) {
    /* Original at 0x02240384 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _022403B0 ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    mov r1, #1\n    ldr r0, _022403B4 ; =0x00000848\n    mvn r1, r1\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov83_02242CAC\n    add r0, r4, #0\n    bl ov83_02242E88\n    pop {r4, pc}\n    _022403B0: .word 0x00000508\n    _022403B4: .word 0x00000848"
    );
    #endif
}

void ov83_022403B8(void) {
    ov83_02242D5C();
}

void ov83_022403C0(void) {
    /* Original at 0x022403C0 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldrb r1, [r5, #0xe]\n    mov r0, #8\n    orr r0, r1\n    strb r0, [r5, #0xe]\n    add r0, r5, #0\n    add r0, #0xb0\n    bl ov83_02241354\n    add r0, r5, #0\n    add r0, #0xb0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #0\n    add r0, #0xe0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #0\n    bl ov83_0223FB6C\n    ldr r2, _02240428 ; =0x00000868\n    mov r0, #2\n    mov r1, #1\n    add r2, r5, r2\n    bl ov83_022477EC\n    ldr r2, _02240428 ; =0x00000868\n    mov r0, #6\n    mov r1, #1\n    add r2, r5, r2\n    bl ov83_022477EC\n    ldr r2, _02240428 ; =0x00000868\n    mov r0, #7\n    mov r1, #1\n    add r2, r5, r2\n    bl ov83_022477EC\n    mov r0, #0x86\n    mov r1, #0\n    lsl r0, r0, #4\n    strb r1, [r5, r0]\n    add r0, r0, #2\n    strh r1, [r5, r0]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov83_02240B54\n    pop {r3, r4, r5, pc}\n    nop\n    _02240428: .word 0x00000868"
    );
    #endif
}

void ov83_0224042C(void) {
    /* Original at 0x0224042C */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0xe]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _022404F8\n    add r6, r5, #0\n    mov r4, #0\n    add r6, #0x50\n    add r0, r4, #0\n    add r0, #0x30\n    lsl r0, r0, #4\n    add r0, r6, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r4, r4, #1\n    cmp r4, #6\n    blo _02240440\n    mov r0, #0x3b\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0xf\n    lsl r0, r0, #6\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #1\n    lsl r0, r0, #0xa\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0x41\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r2, _022404FC ; =0x00000868\n    mov r0, #2\n    mov r1, #0\n    add r2, r5, r2\n    bl ov83_022477EC\n    ldr r2, _022404FC ; =0x00000868\n    mov r0, #6\n    mov r1, #0\n    add r2, r5, r2\n    bl ov83_022477EC\n    ldr r2, _022404FC ; =0x00000868\n    mov r0, #7\n    mov r1, #0\n    add r2, r5, r2\n    bl ov83_022477EC\n    ldr r0, _02240500 ; =0x0000085C\n    ldr r0, [r5, r0]\n    bl ov83_02247A18\n    ldr r0, _02240504 ; =0x000004DC\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    ldr r0, _02240508 ; =0x0000077C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ov83_0224755C\n    ldr r0, _0224050C ; =0x0000079C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ov83_0224755C\n    ldr r7, _02240510 ; =0x00000784\n    mov r6, #0\n    add r4, r5, #0\n    ldr r0, [r4, r7]\n    mov r1, #0\n    bl ov83_0224755C\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #6\n    blo _022404D2\n    mov r0, #0x1e\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #0x30\n    mov r2, #0x28\n    bl ov83_0224759C\n    ldrb r1, [r5, #0xe]\n    mov r0, #8\n    bic r1, r0\n    strb r1, [r5, #0xe]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022404FC: .word 0x00000868\n    _02240500: .word 0x0000085C\n    _02240504: .word 0x000004DC\n    _02240508: .word 0x0000077C\n    _0224050C: .word 0x0000079C\n    _02240510: .word 0x00000784"
    );
    #endif
}

void ov83_02240514(void) {
    /* Original at 0x02240514 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    ldr r0, _02240520 ; =0x0000084C\n    ldr r3, _02240524 ; =ov83_02247864\n    add r0, r1, r0\n    ldr r1, [r1, #0x4c]\n    bx r3\n    _02240520: .word 0x0000084C\n    _02240524: .word ov83_02247864"
    );
    #endif
}

void ov83_02240528(void) {
    /* Original at 0x02240528 */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    add r4, r1, #0\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #1\n    lsl r0, r0, #0xa\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x41\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    cmp r4, #6\n    ldr r0, _02240658 ; =0x00010200\n    bne _02240574\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r2, #0x6a\n    bl ov83_022479E4\n    b _0224058C\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r2, #0x6b\n    bl ov83_022479E4\n    ldr r0, _0224065C ; =0x0000050C\n    ldr r0, [r5, r0]\n    bl Save_PlayerData_GetProfile\n    add r6, r0, #0\n    mov r0, #8\n    mov r1, #0x6b\n    bl String_New\n    add r4, r0, #0\n    add r0, r6, #0\n    bl PlayerProfile_GetNamePtr\n    add r1, r0, #0\n    add r0, r4, #0\n    bl CopyU16ArrayToString\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerGender\n    cmp r0, #0\n    bne _022405BC\n    ldr r0, _02240660 ; =0x00070800\n    b _022405C0\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    mov r2, #0\n    str r2, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    lsl r0, r0, #0xa\n    add r0, r5, r0\n    add r1, r4, #0\n    add r3, r2, #0\n    str r2, [sp, #8]\n    bl ov83_02247998\n    add r0, r4, #0\n    bl String_Delete\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    add r4, r0, #0\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r5, #4]\n    add r1, r4, #0\n    bl FrontierSave_GetStat\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0\n    mov r3, #4\n    bl ov83_02240C48\n    mov r0, #0x41\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02240658 ; =0x00010200\n    mov r1, #0x41\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    lsl r1, r1, #4\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #2\n    bl ov83_02241DD8\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #1\n    lsl r0, r0, #0xa\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x41\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02240658: .word 0x00010200\n    _0224065C: .word 0x0000050C\n    _02240660: .word 0x00070800"
    );
    #endif
}

void ov83_02240664(void) {
    /* Original at 0x02240664 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    ldr r0, _02240738 ; =0x00000862\n    add r4, r5, #0\n    ldrsh r1, [r5, r0]\n    mov r0, #6\n    mov r6, #0\n    mul r0, r1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x18]\n    lsl r0, r0, #3\n    str r0, [sp, #0x14]\n    add r4, #0x50\n    add r0, r6, #0\n    add r0, #0x30\n    lsl r0, r0, #4\n    str r0, [sp, #0x1c]\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x18]\n    add r1, r0, r6\n    ldr r0, _0224073C ; =0x00000861\n    ldrb r0, [r5, r0]\n    cmp r1, r0\n    bge _02240722\n    add r0, r6, #0\n    add r0, #0x30\n    lsl r0, r0, #4\n    str r0, [sp, #0x20]\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02240740 ; =0x00010200\n    ldr r2, _02240744 ; =0x000004DC\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r3, [r5, r2]\n    ldr r2, [sp, #0x14]\n    ldr r0, [sp, #0x20]\n    add r2, r2, r3\n    lsl r7, r6, #3\n    ldr r2, [r7, r2]\n    add r0, r4, r0\n    mov r1, #0\n    mov r3, #4\n    bl AddTextPrinterParameterizedWithColor\n    ldr r1, _02240744 ; =0x000004DC\n    add r0, r5, #0\n    ldr r2, [r5, r1]\n    ldr r1, [sp, #0x14]\n    add r1, r1, r2\n    add r1, r7, r1\n    ldr r1, [r1, #4]\n    ldrb r2, [r5, #0x13]\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    bl ov83_02240EC4\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0\n    mov r3, #2\n    bl ov83_02240C48\n    ldr r0, [sp, #0x20]\n    add r0, r4, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, r0, #4\n    str r0, [sp]\n    mov r0, #0x14\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, _02240740 ; =0x00010200\n    ldr r1, [sp, #0x20]\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r4, r1\n    mov r3, #0x68\n    bl ov83_02241DD8\n    ldr r0, [sp, #0x1c]\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    add r0, r6, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    cmp r6, #6\n    blo _02240682\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _02240738: .word 0x00000862\n    _0224073C: .word 0x00000861\n    _02240740: .word 0x00010200\n    _02240744: .word 0x000004DC"
    );
    #endif
}

void ov83_02240748(void) {
    /* Original at 0x02240748 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _022407E8 ; =0x00000862\n    mov r4, #0\n    ldrsh r1, [r5, r0]\n    mov r0, #6\n    str r4, [sp, #4]\n    mul r0, r1\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    lsl r0, r7, #3\n    add r6, r5, #0\n    str r0, [sp]\n    ldr r0, _022407EC ; =0x00000861\n    ldrb r0, [r5, r0]\n    cmp r7, r0\n    bhs _022407C8\n    ldr r1, _022407F0 ; =0x000004DC\n    add r0, r5, #0\n    ldr r2, [r5, r1]\n    ldr r1, [sp]\n    add r2, r1, r2\n    ldr r1, [sp, #4]\n    add r1, r1, r2\n    ldr r1, [r1, #4]\n    ldrb r2, [r5, #0x13]\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    bl ov83_02240F48\n    str r0, [sp, #8]\n    ldr r0, _022407F4 ; =0x00000518\n    ldr r2, [sp, #8]\n    add r0, r5, r0\n    add r1, r4, #4\n    bl ov83_02247264\n    ldr r0, _022407F4 ; =0x00000518\n    ldr r2, [sp, #8]\n    add r0, r5, r0\n    add r1, r4, #4\n    bl ov83_022472A0\n    add r1, sp, #0xc\n    add r0, r4, #0\n    add r1, #2\n    add r2, sp, #0xc\n    bl ov83_02242894\n    ldr r0, _022407F8 ; =0x00000784\n    add r1, sp, #0xc\n    add r2, sp, #0xc\n    ldrh r1, [r1, #2]\n    ldrh r2, [r2]\n    ldr r0, [r6, r0]\n    bl ov83_02247568\n    ldr r0, _022407F8 ; =0x00000784\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl ov83_0224755C\n    b _022407D2\n    ldr r0, _022407F8 ; =0x00000784\n    mov r1, #0\n    ldr r0, [r6, r0]\n    bl ov83_0224755C\n    ldr r0, [sp, #4]\n    add r4, r4, #1\n    add r0, #8\n    add r7, r7, #1\n    add r6, r6, #4\n    str r0, [sp, #4]\n    cmp r4, #6\n    blo _02240764\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022407E8: .word 0x00000862\n    _022407EC: .word 0x00000861\n    _022407F0: .word 0x000004DC\n    _022407F4: .word 0x00000518\n    _022407F8: .word 0x00000784"
    );
    #endif
}

void ov83_022407FC(void) {
    /* Original at 0x022407FC */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    ldr r2, _02240880 ; =0x00000862\n    str r1, [sp]\n    ldrsh r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #1\n    add r2, r2, #1\n    bl ov83_02240C48\n    ldr r0, _02240884 ; =0x00000861\n    mov r1, #6\n    ldrb r0, [r4, r0]\n    sub r0, r0, #1\n    bl _s32_div_f\n    add r2, r0, #0\n    mov r0, #0\n    mov r1, #1\n    str r0, [sp]\n    add r0, r4, #0\n    add r2, r2, #1\n    add r3, r1, #0\n    bl ov83_02240C48\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl GetWindowWidth\n    lsl r1, r0, #3\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02240888 ; =0x00010200\n    mov r1, #0x3d\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    lsl r1, r1, #4\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r3, #0x67\n    bl ov83_02241DD8\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r3, r4, pc}\n    nop\n    _02240880: .word 0x00000862\n    _02240884: .word 0x00000861\n    _02240888: .word 0x00010200"
    );
    #endif
}

void ov83_0224088C(void) {
    /* Original at 0x0224088C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0x3e\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x3e\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _022408DC ; =0x00010200\n    lsl r5, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0x3e\n    lsr r3, r5, #0x1f\n    lsl r0, r0, #4\n    add r3, r5, r3\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x69\n    asr r3, r3, #1\n    bl ov83_022479E4\n    mov r0, #0x3e\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _022408DC: .word 0x00010200"
    );
    #endif
}

void ov83_022408E0(void) {
    /* Original at 0x022408E0 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x42\n    lsl r0, r0, #4\n    add r4, r1, #0\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r1, _02240970 ; =0x00000862\n    mov r0, #6\n    ldrsh r2, [r5, r1]\n    sub r1, #0xc6\n    mul r0, r2\n    add r0, r4, r0\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    ldr r0, [r5, r1]\n    mov r1, #0\n    bl ov83_0224755C\n    cmp r4, #6\n    bhs _02240960\n    ldr r0, _02240974 ; =0x00000861\n    ldrb r0, [r5, r0]\n    cmp r6, r0\n    bge _02240960\n    ldrb r2, [r5, #0x13]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov83_02240F48\n    add r4, r0, #0\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02240978 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x42\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x1c]\n    add r0, r5, r0\n    add r2, r4, #0\n    bl ov83_022479E4\n    ldr r0, _0224097C ; =0x00000518\n    mov r1, #3\n    add r0, r5, r0\n    add r2, r4, #0\n    bl ov83_02247264\n    ldr r0, _0224097C ; =0x00000518\n    mov r1, #3\n    add r0, r5, r0\n    add r2, r4, #0\n    bl ov83_022472A0\n    ldr r0, _02240980 ; =0x0000079C\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl ov83_0224755C\n    mov r0, #0x42\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _02240970: .word 0x00000862\n    _02240974: .word 0x00000861\n    _02240978: .word 0x00010200\n    _0224097C: .word 0x00000518\n    _02240980: .word 0x0000079C"
    );
    #endif
}

void ov83_02240984(void) {
    /* Original at 0x02240984 */
    /* Requires manual decompilation - 206 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0x43\n    lsl r0, r0, #4\n    mov r6, #0x3e\n    add r4, r5, r0\n    mov r7, #0\n    add r0, r4, #0\n    add r1, r7, #0\n    bl FillWindowPixelBuffer\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, #0x45\n    bls _02240994\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02240B34 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x45\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r2, #0x58\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02240B34 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x49\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r2, #0x46\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02240B34 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x47\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r2, #0x59\n    bl ov83_022479E4\n    mov r1, #0\n    ldr r2, _02240B38 ; =0x00000818\n    str r1, [sp]\n    ldrh r2, [r5, r2]\n    add r0, r5, #0\n    mov r3, #3\n    bl ov83_02240C48\n    mov r0, #0\n    str r0, [sp]\n    ldr r2, _02240B3C ; =0x0000081A\n    add r0, r5, #0\n    ldrh r2, [r5, r2]\n    mov r1, #1\n    mov r3, #3\n    bl ov83_02240C48\n    mov r0, #0x12\n    lsl r0, r0, #6\n    add r0, r5, r0\n    bl GetWindowWidth\n    lsl r1, r0, #3\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02240B34 ; =0x00010200\n    mov r1, #0x12\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    lsl r1, r1, #6\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x5f\n    bl ov83_02241DD8\n    ldr r0, _02240B40 ; =0x00000804\n    ldr r0, [r5, r0]\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl BufferBoxMonNickname\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _02240B34 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #0x43\n    lsl r1, r1, #4\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x5b\n    bl ov83_02241DD8\n    ldr r0, _02240B44 ; =0x0000080E\n    ldrb r0, [r5, r0]\n    lsl r1, r0, #0x18\n    lsr r1, r1, #0x1f\n    bne _02240AC2\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x19\n    bne _02240AA2\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02240B48 ; =0x00050600\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x11\n    lsl r0, r0, #6\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r2, #0x56\n    bl ov83_022479E4\n    b _02240AC2\n    cmp r0, #1\n    bne _02240AC2\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xc1\n    str r3, [sp, #4]\n    lsl r0, r0, #0xa\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x11\n    lsl r0, r0, #6\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r2, #0x57\n    bl ov83_022479E4\n    mov r1, #0\n    ldr r2, _02240B4C ; =0x0000080F\n    str r1, [sp]\n    ldrb r2, [r5, r2]\n    add r0, r5, #0\n    mov r3, #3\n    bl ov83_02240C48\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _02240B34 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #0x46\n    lsl r1, r1, #4\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x5e\n    bl ov83_02241DD8\n    ldr r2, _02240B50 ; =0x00000812\n    ldr r0, [r5, #0x24]\n    ldrh r2, [r5, r2]\n    mov r1, #0\n    bl BufferItemName\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _02240B34 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #0x4a\n    lsl r1, r1, #4\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x47\n    bl ov83_02241DD8\n    mov r0, #0x43\n    lsl r0, r0, #4\n    mov r4, #0x3e\n    add r5, r5, r0\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0x45\n    bls _02240B22\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02240B34: .word 0x00010200\n    _02240B38: .word 0x00000818\n    _02240B3C: .word 0x0000081A\n    _02240B40: .word 0x00000804\n    _02240B44: .word 0x0000080E\n    _02240B48: .word 0x00050600\n    _02240B4C: .word 0x0000080F\n    _02240B50: .word 0x00000812"
    );
    #endif
}

void ov83_02240B54(void) {
    /* Original at 0x02240B54 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xde\n    mov r3, #0x6b\n    bl NewMsgDataFromNarc\n    add r7, r0, #0\n    ldr r0, _02240C28 ; =0x0000050C\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    mov r2, #1\n    bl ov83_0224777C\n    ldr r1, [sp]\n    cmp r1, #6\n    bne _02240B8A\n    sub r0, r0, #1\n    lsl r1, r0, #1\n    ldr r0, _02240C2C ; =ov83_02247D12\n    ldr r6, _02240C30 ; =ov83_02247F88\n    ldrh r1, [r0, r1]\n    ldr r0, _02240C34 ; =0x00000861\n    strb r1, [r5, r0]\n    b _02240B98\n    sub r0, r0, #1\n    lsl r1, r0, #1\n    ldr r0, _02240C38 ; =ov83_02247D24\n    ldr r6, _02240C3C ; =ov83_02247EE0\n    ldrh r1, [r0, r1]\n    ldr r0, _02240C34 ; =0x00000861\n    strb r1, [r5, r0]\n    ldr r0, _02240C34 ; =0x00000861\n    mov r1, #0x6b\n    ldrb r0, [r5, r0]\n    bl ListMenuItems_New\n    ldr r1, _02240C40 ; =0x000004DC\n    mov r4, #0\n    str r0, [r5, r1]\n    ldr r0, _02240C34 ; =0x00000861\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    ble _02240BCE\n    ldr r0, _02240C40 ; =0x000004DC\n    lsl r2, r4, #1\n    ldrh r2, [r6, r2]\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    add r3, r4, #0\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, _02240C34 ; =0x00000861\n    ldrb r0, [r5, r0]\n    cmp r4, r0\n    blt _02240BB0\n    add r0, r7, #0\n    bl DestroyMsgData\n    add r0, r5, #0\n    bl ov83_02247B7C\n    ldr r1, _02240C44 ; =0x0000085C\n    str r0, [r5, r1]\n    sub r1, #0xe0\n    ldr r0, [r5, r1]\n    mov r1, #1\n    bl ov83_0224755C\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl ov83_02240528\n    add r0, r5, #0\n    bl ov83_02240664\n    add r0, r5, #0\n    bl ov83_02240748\n    add r0, r5, #0\n    bl ov83_022407FC\n    add r0, r5, #0\n    bl ov83_0224088C\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_022408E0\n    add r0, r5, #0\n    bl ov83_02240984\n    mov r0, #0x1e\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #0x30\n    mov r2, #0x48\n    bl ov83_0224759C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02240C28: .word 0x0000050C\n    _02240C2C: .word ov83_02247D12\n    _02240C30: .word ov83_02247F88\n    _02240C34: .word 0x00000861\n    _02240C38: .word ov83_02247D24\n    _02240C3C: .word ov83_02247EE0\n    _02240C40: .word 0x000004DC\n    _02240C44: .word 0x0000085C"
    );
    #endif
}

void ov83_02240C48(void) {
    BufferIntegerAsString(1);
}

void ov83_02240C60(void) {
    BufferBoxMonNickname();
}

void ov83_02240C6C(void) {
    /* Original at 0x02240C6C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02240C88 ; =0x0000050C\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    bl Save_PlayerData_GetProfile\n    add r2, r0, #0\n    ldr r0, [r5, #0x24]\n    add r1, r4, #0\n    bl BufferPlayersName\n    pop {r3, r4, r5, pc}\n    nop\n    _02240C88: .word 0x0000050C"
    );
    #endif
}

void ov83_02240C8C(void) {
    /* Original at 0x02240C8C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r1, #0\n    ldr r1, _02240CF4 ; =0x0000050C\n    str r2, [sp, #0x10]\n    ldr r0, [r0, r1]\n    add r6, r3, #0\n    bl Save_PlayerData_GetProfile\n    add r7, r0, #0\n    mov r0, #8\n    mov r1, #0x6b\n    bl String_New\n    add r4, r0, #0\n    add r0, r7, #0\n    bl PlayerProfile_GetNamePtr\n    add r1, r0, #0\n    add r0, r4, #0\n    bl CopyU16ArrayToString\n    add r0, r7, #0\n    bl PlayerProfile_GetTrainerGender\n    cmp r0, #0\n    bne _02240CC6\n    ldr r1, _02240CF8 ; =0x00070800\n    b _02240CCA\n    mov r1, #0xc1\n    lsl r1, r1, #0xa\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r1, sp, #0x18\n    ldrb r1, [r1, #0x10]\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02240CF4: .word 0x0000050C\n    _02240CF8: .word 0x00070800"
    );
    #endif
}

void ov83_02240CFC(void) {
    /* Original at 0x02240CFC */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    add r7, r1, #0\n    str r2, [sp, #0x18]\n    add r6, r3, #0\n    bl sub_0203769C\n    mov r1, #1\n    eor r0, r1\n    bl sub_02034818\n    str r0, [sp, #0x1c]\n    bl PlayerProfile_GetTrainerGender\n    cmp r0, #0\n    bne _02240D22\n    ldr r4, _02240D60 ; =0x00070800\n    b _02240D26\n    mov r4, #0xc1\n    lsl r4, r4, #0xa\n    ldr r0, [r5, #0x24]\n    ldr r2, [sp, #0x1c]\n    mov r1, #0\n    bl BufferPlayersName\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    lsr r0, r4, #0x10\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    lsr r0, r4, #8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r3, [sp, #0x18]\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r2, #1\n    bl ov83_0223FCB4\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _02240D60: .word 0x00070800"
    );
    #endif
}

void ov83_02240D64(void) {
    /* Original at 0x02240D64 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r7, r2, #0\n    add r2, r3, #0\n    add r3, sp, #0x20\n    ldrb r3, [r3, #0x14]\n    cmp r3, #0\n    bne _02240D7E\n    mov r3, #0x56\n    mov r4, #7\n    mov r5, #8\n    mov r6, #0\n    b _02240D8A\n    cmp r3, #1\n    bne _02240DA4\n    mov r3, #0x57\n    mov r4, #3\n    mov r5, #4\n    mov r6, #0\n    str r2, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    str r4, [sp, #8]\n    str r5, [sp, #0xc]\n    str r6, [sp, #0x10]\n    add r2, sp, #0x20\n    ldrb r2, [r2, #0x10]\n    str r2, [sp, #0x14]\n    add r2, r3, #0\n    add r3, r7, #0\n    bl ov83_0223FCB4\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_02240DA8(void) {
    /* Original at 0x02240DA8 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    strb r3, [r0, #8]\n    str r2, [r1]\n    bx lr"
    );
    #endif
}

void ov83_02240DB0(void) {
    /* Original at 0x02240DB0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02240DDC ; =0x000005DC\n    bl PlaySE\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _02240DCE\n    ldrb r2, [r4, #0xd]\n    add r0, r4, #0\n    mov r1, #0xc\n    bl ov83_02241368\n    ldrb r1, [r4, #0xd]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov83_02240DE0\n    pop {r4, pc}\n    nop\n    _02240DDC: .word 0x000005DC"
    );
    #endif
}

void ov83_02240DE0(void) {
    /* Original at 0x02240DE0 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r7, r1, #0\n    add r6, r2, #0\n    bne _02240DF8\n    mov r0, #0x76\n    lsl r0, r0, #4\n    ldr r4, [r5, r0]\n    mov r2, #1\n    mov r1, #0\n    b _02240E00\n    ldr r0, _02240E6C ; =0x00000764\n    mov r2, #2\n    ldr r4, [r5, r0]\n    mov r1, #0x11\n    ldrb r0, [r5, #0x15]\n    cmp r7, r0\n    blo _02240E26\n    add r0, r4, #0\n    bl ov83_022475D4\n    add r0, r4, #0\n    mov r1, #0xe0\n    mov r2, #0xa0\n    bl ov83_02247568\n    cmp r6, #0\n    bne _02240E68\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_02242844\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r1, r2, #0\n    bl ov83_022475D4\n    add r0, r5, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    add r3, r7, #0\n    bl ov83_02240E70\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    bl ov83_02247568\n    cmp r6, #0\n    bne _02240E68\n    ldrb r1, [r5, #0xc]\n    ldrb r0, [r5, #0x15]\n    cmp r1, r0\n    blo _02240E60\n    add r0, r5, #0\n    mov r1, #1\n    bl ov83_02242844\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_02242814\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02240E6C: .word 0x00000764"
    );
    #endif
}

void ov83_02240E70(void) {
    /* Original at 0x02240E70 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldrb r0, [r0, #9]\n    add r5, r1, #0\n    add r6, r2, #0\n    add r4, r3, #0\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _02240EA6\n    cmp r4, #0\n    bne _02240E8C\n    mov r0, #0x28\n    str r0, [r5]\n    b _02240EBE\n    cmp r4, #1\n    bne _02240E96\n    mov r0, #0x68\n    str r0, [r5]\n    b _02240EBE\n    cmp r4, #2\n    bne _02240EA0\n    mov r0, #0xa8\n    str r0, [r5]\n    b _02240EBE\n    mov r0, #0xe8\n    str r0, [r5]\n    b _02240EBE\n    cmp r4, #0\n    bne _02240EB0\n    mov r0, #0x48\n    str r0, [r5]\n    b _02240EBE\n    cmp r4, #1\n    bne _02240EBA\n    mov r0, #0x88\n    str r0, [r5]\n    b _02240EBE\n    mov r0, #0xc8\n    str r0, [r5]\n    mov r0, #0x58\n    str r0, [r6]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov83_02240EC4(void) {
    /* Original at 0x02240EC4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r0, #0\n    ldr r0, _02240EEC ; =0x0000050C\n    add r5, r1, #0\n    add r4, r2, #0\n    ldrb r1, [r3, #9]\n    ldr r0, [r3, r0]\n    mov r2, #1\n    bl ov83_0224777C\n    cmp r4, #6\n    bne _02240EE4\n    ldr r0, _02240EF0 ; =ov83_02247FC8\n    lsl r1, r5, #1\n    ldrh r0, [r0, r1]\n    pop {r3, r4, r5, pc}\n    ldr r0, _02240EF4 ; =ov83_02247F16\n    lsl r1, r5, #1\n    ldrh r0, [r0, r1]\n    pop {r3, r4, r5, pc}\n    _02240EEC: .word 0x0000050C\n    _02240EF0: .word ov83_02247FC8\n    _02240EF4: .word ov83_02247F16"
    );
    #endif
}

void ov83_02240EF8(void) {
    /* Original at 0x02240EF8 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, _02240F38 ; =ov83_02247EE0\n    mov r2, #0\n    ldrh r1, [r3]\n    cmp r0, r1\n    bne _02240F0C\n    ldr r0, _02240F3C ; =ov83_02247F16\n    lsl r1, r2, #1\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    add r2, r2, #1\n    add r3, r3, #2\n    cmp r2, #0x1b\n    blo _02240EFE\n    ldr r2, _02240F40 ; =ov83_02247F88\n    mov r3, #0\n    ldrh r1, [r2]\n    cmp r0, r1\n    bne _02240F26\n    ldr r0, _02240F44 ; =ov83_02247FC8\n    lsl r1, r3, #1\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    add r3, r3, #1\n    add r2, r2, #2\n    cmp r3, #0x20\n    blo _02240F18\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _02240F38: .word ov83_02247EE0\n    _02240F3C: .word ov83_02247F16\n    _02240F40: .word ov83_02247F88\n    _02240F44: .word ov83_02247FC8"
    );
    #endif
}

void ov83_02240F48(void) {
    /* Original at 0x02240F48 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r0, #0\n    ldr r0, _02240F70 ; =0x0000050C\n    add r5, r1, #0\n    add r4, r2, #0\n    ldrb r1, [r3, #9]\n    ldr r0, [r3, r0]\n    mov r2, #1\n    bl ov83_0224777C\n    cmp r4, #6\n    bne _02240F68\n    ldr r0, _02240F74 ; =ov83_02247F88\n    lsl r1, r5, #1\n    ldrh r0, [r0, r1]\n    pop {r3, r4, r5, pc}\n    ldr r0, _02240F78 ; =ov83_02247EE0\n    lsl r1, r5, #1\n    ldrh r0, [r0, r1]\n    pop {r3, r4, r5, pc}\n    _02240F70: .word 0x0000050C\n    _02240F74: .word ov83_02247F88\n    _02240F78: .word ov83_02247EE0"
    );
    #endif
}

void ov83_02240F7C(void) {
    /* Original at 0x02240F7C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldrb r0, [r0, #9]\n    add r5, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    ldr r4, [sp, #0x18]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02240F9E\n    mov r0, #0x28\n    strh r0, [r5]\n    mov r0, #0\n    strh r0, [r6]\n    strh r0, [r7]\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    strh r1, [r5]\n    strh r1, [r6]\n    mov r0, #0x80\n    strh r0, [r7]\n    strh r1, [r4]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_02240FAC(void) {
    /* Original at 0x02240FAC */
    /* Requires manual decompilation - 221 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r4, r0, #0\n    ldrb r0, [r4, #0x14]\n    add r6, r2, #0\n    bl ov83_02247768\n    add r5, r0, #0\n    ldr r0, _0224119C ; =0x000007A4\n    add r1, r5, #0\n    ldr r0, [r4, r0]\n    bl Party_GetMonByIndex\n    str r0, [sp, #0x14]\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x14]\n    mov r1, #0xa4\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    ldr r0, [sp, #0x1c]\n    lsl r1, r7, #0x10\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x10\n    mov r2, #0x30\n    bl CalculateHpBarColor\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov83_022411B0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    lsl r1, r7, #0x10\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x10\n    mov r2, #0x30\n    bl CalculateHpBarColor\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov83_022411DC\n    add r7, r0, #0\n    cmp r6, #0xa\n    bls _02241018\n    b _02241196\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02241024: ; jump table\n    ldrb r1, [r4, #0xe]\n    mov r0, #4\n    add sp, #0x20\n    bic r1, r0\n    strb r1, [r4, #0xe]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r1, [r4, #0xe]\n    lsl r0, r1, #0x1d\n    lsr r0, r0, #0x1f\n    bne _0224108E\n    mov r0, #4\n    orr r0, r1\n    strb r0, [r4, #0xe]\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02241064\n    mov r1, #0x40\n    b _02241066\n    mov r1, #0x20\n    mov r0, #8\n    str r0, [sp]\n    lsl r0, r5, #6\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r1, #0\n    mov r0, #0x3e\n    str r0, [sp, #8]\n    ldr r0, _022411A0 ; =0x00000518\n    str r1, [sp, #0xc]\n    add r0, r4, r0\n    add r2, r1, #0\n    add r3, r1, #0\n    str r1, [sp, #0x10]\n    bl ov83_02247454\n    ldr r1, _022411A4 ; =0x0000075C\n    str r0, [r4, r1]\n    ldr r0, _022411A4 ; =0x0000075C\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _022410AC\n    bl ov83_02247624\n    cmp r0, #0\n    bne _022410AC\n    ldr r0, _022411A4 ; =0x0000075C\n    ldr r0, [r4, r0]\n    bl ov83_0224753C\n    ldr r0, _022411A4 ; =0x0000075C\n    mov r1, #0\n    str r1, [r4, r0]\n    ldr r0, _022411A4 ; =0x0000075C\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _02241196\n    ldr r0, [sp, #0x14]\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r3, r0, #0\n    add r0, r4, #0\n    add r1, #0x80\n    add r2, r5, #0\n    bl ov83_02240238\n    ldrb r0, [r4, #0xd]\n    cmp r0, r5\n    bne _022410E0\n    add r0, r4, #0\n    bl ov83_02241E18\n    add r0, r4, #0\n    mov r1, #0\n    bl ov83_022421E0\n    lsl r5, r5, #2\n    ldr r0, _022411A8 ; =0x00000768\n    add r1, r4, r5\n    ldr r0, [r1, r0]\n    add r1, r7, #0\n    bl ov83_022475D4\n    ldr r0, _022411AC ; =0x0000073C\n    add r1, r4, r5\n    ldr r0, [r1, r0]\n    ldr r1, [sp, #0x18]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov83_02247600\n    ldrb r1, [r4, #0xe]\n    mov r0, #4\n    add sp, #0x20\n    bic r1, r0\n    strb r1, [r4, #0xe]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r1, [r4, #0xe]\n    lsl r0, r1, #0x1d\n    lsr r0, r0, #0x1f\n    bne _02241152\n    mov r0, #4\n    orr r0, r1\n    strb r0, [r4, #0xe]\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02241128\n    mov r1, #0x40\n    b _0224112A\n    mov r1, #0x20\n    mov r0, #0x10\n    str r0, [sp]\n    lsl r0, r5, #6\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r1, #0\n    mov r0, #0x3e\n    str r0, [sp, #8]\n    ldr r0, _022411A0 ; =0x00000518\n    str r1, [sp, #0xc]\n    add r0, r4, r0\n    add r2, r1, #0\n    add r3, r1, #0\n    str r1, [sp, #0x10]\n    bl ov83_02247454\n    ldr r1, _022411A4 ; =0x0000075C\n    str r0, [r4, r1]\n    ldr r0, _022411A4 ; =0x0000075C\n    ldr r0, [r4, r0]\n    bl ov83_02247624\n    cmp r0, #0\n    bne _02241196\n    ldr r0, _022411A4 ; =0x0000075C\n    ldr r0, [r4, r0]\n    bl ov83_0224753C\n    ldr r0, _022411A4 ; =0x0000075C\n    mov r1, #0\n    str r1, [r4, r0]\n    ldrb r1, [r4, #0xe]\n    mov r0, #4\n    add sp, #0x20\n    bic r1, r0\n    strb r1, [r4, #0xe]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r1, [r4, #0xe]\n    mov r0, #4\n    add sp, #0x20\n    bic r1, r0\n    strb r1, [r4, #0xe]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r1, [r4, #0xe]\n    mov r0, #4\n    add sp, #0x20\n    bic r1, r0\n    strb r1, [r4, #0xe]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224119C: .word 0x000007A4\n    _022411A0: .word 0x00000518\n    _022411A4: .word 0x0000075C\n    _022411A8: .word 0x00000768\n    _022411AC: .word 0x0000073C"
    );
    #endif
}

void ov83_022411B0(void) {
    /* Original at 0x022411B0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #4\n    bhi _022411D8\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022411C0: ; jump table\n    mov r0, #1\n    bx lr\n    mov r0, #2\n    bx lr\n    mov r0, #3\n    bx lr\n    mov r0, #4\n    bx lr"
    );
    #endif
}

void ov83_022411DC(void) {
    /* Original at 0x022411DC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #4\n    bhi _02241204\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022411EC: ; jump table\n    mov r0, #0xf\n    bx lr\n    mov r0, #0xf\n    bx lr\n    mov r0, #0xe\n    bx lr\n    mov r0, #0xd\n    bx lr"
    );
    #endif
}

void ov83_02241208(void) {
    /* Original at 0x02241208 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xd\n    ldrsb r0, [r4, r0]\n    add r0, r0, r1\n    lsl r0, r0, #0x18\n    asr r1, r0, #0x18\n    ldrb r0, [r4, #0x14]\n    bpl _02241222\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    asr r1, r0, #0x18\n    b _02241228\n    cmp r1, r0\n    blt _02241228\n    mov r1, #0\n    strb r1, [r4, #0xd]\n    add r0, r4, #0\n    bl ov83_02240DB0\n    ldrb r0, [r4, #0x14]\n    ldrb r1, [r4, #0xd]\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _02241250 ; =0x000007A4\n    ldr r0, [r4, r0]\n    bl Party_GetMonByIndex\n    add r2, r0, #0\n    add r0, r4, #0\n    add r4, #0x90\n    add r1, r4, #0\n    bl ov83_0223FD4C\n    pop {r4, pc}\n    _02241250: .word 0x000007A4"
    );
    #endif
}

void ov83_02241254(void) {
    /* Original at 0x02241254 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xd\n    ldrsb r0, [r4, r0]\n    add r0, r0, r1\n    lsl r0, r0, #0x18\n    asr r1, r0, #0x18\n    ldrb r0, [r4, #0x14]\n    bpl _0224126E\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    asr r1, r0, #0x18\n    b _02241274\n    cmp r1, r0\n    blt _02241274\n    mov r1, #0\n    strb r1, [r4, #0xd]\n    add r0, r4, #0\n    bl ov83_02240DB0\n    ldrb r0, [r4, #0x14]\n    ldrb r1, [r4, #0xd]\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _0224129C ; =0x000007A4\n    ldr r0, [r4, r0]\n    bl Party_GetMonByIndex\n    add r2, r0, #0\n    add r0, r4, #0\n    add r4, #0x90\n    add r1, r4, #0\n    bl ov83_0223FF44\n    pop {r4, pc}\n    _0224129C: .word 0x000007A4"
    );
    #endif
}

void ov83_022412A0(void) {
    /* Original at 0x022412A0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov83_02241730\n    add r0, r4, #0\n    bl ov83_0224042C\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02241354\n    add r0, r4, #0\n    bl ov83_02241B18\n    ldr r2, _022412D4 ; =0x00000868\n    mov r0, #2\n    mov r1, #0\n    add r2, r4, r2\n    bl ov83_022477EC\n    ldr r0, _022412D8 ; =0x00000778\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ov83_0224755C\n    pop {r4, pc}\n    _022412D4: .word 0x00000868\n    _022412D8: .word 0x00000778"
    );
    #endif
}

void ov83_022412DC(void) {
    /* Original at 0x022412DC */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r4, #0\n    add r5, r0, #0\n    mov r1, #0x3a\n    add r2, r4, #0\n    bl GetMonData\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0x42\n    add r2, r4, #0\n    bl GetMonData\n    cmp r6, r0\n    beq _022412FC\n    mov r4, #1\n    add r0, r5, #0\n    mov r1, #0x3b\n    mov r2, #0\n    bl GetMonData\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0x43\n    mov r2, #0\n    bl GetMonData\n    cmp r6, r0\n    beq _02241318\n    mov r4, #1\n    add r0, r5, #0\n    mov r1, #0x3c\n    mov r2, #0\n    bl GetMonData\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0x44\n    mov r2, #0\n    bl GetMonData\n    cmp r6, r0\n    beq _02241334\n    mov r4, #1\n    add r0, r5, #0\n    mov r1, #0x3d\n    mov r2, #0\n    bl GetMonData\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0x45\n    mov r2, #0\n    bl GetMonData\n    cmp r6, r0\n    beq _02241350\n    mov r4, #1\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov83_02241354(void) {
    ClearFrameAndWindow2(1);
    ClearWindowTilemapAndScheduleTransfer(r4);
}

void ov83_02241368(void) {
    /* Original at 0x02241368 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r1, #0\n    sub r3, #0xa\n    add r5, r0, #0\n    cmp r3, #3\n    bhi _022413A6\n    add r3, r3, r3\n    add r3, pc\n    ldrh r3, [r3, #6]\n    lsl r3, r3, #0x10\n    asr r3, r3, #0x10\n    add pc, r3\n    _02241380: ; jump table\n    mov r4, #0x31\n    bl ov83_022413C4\n    b _022413A6\n    mov r4, #0x32\n    bl ov83_0224143C\n    b _022413A6\n    mov r4, #0x33\n    bl ov83_022414CC\n    b _022413A6\n    mov r4, #0x34\n    bl ov83_02241504\n    ldr r1, _022413C0 ; =0x000007AC\n    add r0, r4, #0\n    add r1, r5, r1\n    mov r2, #0x28\n    bl sub_02037030\n    cmp r0, #1\n    bne _022413BA\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _022413C0: .word 0x000007AC"
    );
    #endif
}

void ov83_022413C4(void) {
    /* Original at 0x022413C4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _02241400 ; =0x0000050C\n    add r4, r1, #0\n    ldr r0, [r6, r0]\n    bl Save_PlayerData_GetProfile\n    ldr r1, _02241404 ; =0x000007AC\n    strh r4, [r6, r1]\n    bl PlayerProfile_GetTrainerGender\n    ldr r1, _02241408 ; =0x000007AE\n    mov r4, #0\n    strh r0, [r6, r1]\n    add r5, r6, #4\n    sub r7, r1, #2\n    ldr r0, _02241400 ; =0x0000050C\n    ldrb r1, [r6, #9]\n    lsl r2, r4, #0x18\n    ldr r0, [r6, r0]\n    lsr r2, r2, #0x18\n    bl ov83_0224777C\n    strh r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #3\n    blt _022413E4\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02241400: .word 0x0000050C\n    _02241404: .word 0x000007AC\n    _02241408: .word 0x000007AE"
    );
    #endif
}

void ov83_0224140C(void) {
    /* Original at 0x0224140C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    add r5, r0, #0\n    ldrb r0, [r4, #0xf]\n    add r6, r2, #0\n    add r0, r0, #1\n    strb r0, [r4, #0xf]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _02241436\n    ldr r0, _02241438 ; =0x000007FF\n    mov r3, #0\n    add r5, r6, #4\n    ldrh r2, [r5]\n    add r1, r4, r3\n    add r3, r3, #1\n    add r5, r5, #2\n    strb r2, [r1, r0]\n    cmp r3, #3\n    blt _02241428\n    pop {r4, r5, r6, pc}\n    _02241438: .word 0x000007FF"
    );
    #endif
}

void ov83_0224143C(void) {
    /* Original at 0x0224143C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02241470 ; =0x000007AC\n    add r4, r2, #0\n    strh r1, [r5, r0]\n    add r0, r0, #2\n    strh r4, [r5, r0]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0224145A\n    ldrb r0, [r5, #0x12]\n    cmp r0, #0xff\n    bne _0224145A\n    strb r4, [r5, #0x12]\n    ldrb r1, [r5, #0x12]\n    mov r0, #0x7b\n    lsl r0, r0, #4\n    strh r1, [r5, r0]\n    ldrh r2, [r5, #0x10]\n    add r1, r0, #4\n    add r0, r0, #6\n    strh r2, [r5, r1]\n    ldrb r1, [r5, #0x13]\n    strh r1, [r5, r0]\n    pop {r3, r4, r5, pc}\n    _02241470: .word 0x000007AC"
    );
    #endif
}

void ov83_02241474(void) {
    /* Original at 0x02241474 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    add r6, r0, #0\n    ldrb r0, [r4, #0xf]\n    add r5, r2, #0\n    add r0, r0, #1\n    strb r0, [r4, #0xf]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _022414C4\n    ldrh r1, [r5, #2]\n    ldr r0, _022414C8 ; =0x000007FD\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _022414B8\n    ldrb r0, [r4, #0x12]\n    cmp r0, #0xff\n    ldr r0, _022414C8 ; =0x000007FD\n    beq _022414A6\n    mov r1, #0\n    strb r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    ldrb r1, [r4, r0]\n    ldrb r0, [r4, #0x15]\n    add r0, r1, r0\n    strb r0, [r4, #0x12]\n    ldrh r0, [r5, #8]\n    strh r0, [r4, #0x10]\n    ldrh r0, [r5, #0xa]\n    strb r0, [r4, #0x13]\n    pop {r4, r5, r6, pc}\n    ldrh r0, [r5, #4]\n    strb r0, [r4, #0x12]\n    ldrh r0, [r5, #8]\n    strh r0, [r4, #0x10]\n    ldrh r0, [r5, #0xa]\n    strb r0, [r4, #0x13]\n    pop {r4, r5, r6, pc}\n    nop\n    _022414C8: .word 0x000007FD"
    );
    #endif
}

void ov83_022414CC(void) {
    /* Original at 0x022414CC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _022414D8 ; =0x000007AC\n    strh r1, [r0, r2]\n    ldrb r3, [r0, #0xd]\n    add r1, r2, #2\n    strh r3, [r0, r1]\n    bx lr\n    _022414D8: .word 0x000007AC"
    );
    #endif
}

void ov83_022414DC(void) {
    /* Original at 0x022414DC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r2, #0\n    add r4, r3, #0\n    bl sub_0203769C\n    cmp r5, r0\n    beq _022414FC\n    ldrh r0, [r6, #2]\n    ldr r1, _02241500 ; =0x000007FC\n    mov r2, #1\n    strb r0, [r4, r1]\n    ldrb r1, [r4, r1]\n    add r0, r4, #0\n    bl ov83_02240DE0\n    pop {r4, r5, r6, pc}\n    nop\n    _02241500: .word 0x000007FC"
    );
    #endif
}

void ov83_02241504(void) {
    /* Original at 0x02241504 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0224150C ; =0x000007AC\n    mov r2, #1\n    strh r2, [r0, r1]\n    bx lr\n    _0224150C: .word 0x000007AC"
    );
    #endif
}

void ov83_02241510(void) {
    sub_0203769C();
}

void ov83_0224152C(void) {
    UseItemOnPokemon();
}

void ov83_0224153C(void) {
    /* Original at 0x0224153C */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r1, sp, #4\n    str r1, [sp]\n    add r1, sp, #8\n    add r3, sp, #4\n    add r5, r0, #0\n    add r1, #2\n    add r2, sp, #8\n    add r3, #2\n    bl ov83_02240F7C\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02241580\n    mov r0, #0\n    str r0, [sp]\n    add r3, sp, #4\n    ldrh r2, [r3, #6]\n    ldrh r3, [r3, #4]\n    add r0, r5, #0\n    add r2, r2, #4\n    add r3, r3, #1\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x10\n    add r1, r4, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x10\n    bl ov83_02240C8C\n    b _022415E8\n    bl sub_0203769C\n    cmp r0, #0\n    add r2, sp, #4\n    bne _022415BA\n    ldrh r0, [r2, #4]\n    add r1, r4, #0\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r3, r0, #0x10\n    mov r0, #0\n    str r0, [sp]\n    ldrh r2, [r2, #6]\n    add r0, r5, #0\n    bl ov83_02240C8C\n    mov r0, #0\n    str r0, [sp]\n    add r3, sp, #4\n    ldrh r2, [r3, #2]\n    ldrh r3, [r3]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r3, #1\n    lsl r3, r3, #0x10\n    lsr r3, r3, #0x10\n    bl ov83_02240CFC\n    b _022415E8\n    ldrh r0, [r2, #4]\n    add r1, r4, #0\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r3, r0, #0x10\n    mov r0, #0\n    str r0, [sp]\n    ldrh r2, [r2, #6]\n    add r0, r5, #0\n    bl ov83_02240CFC\n    mov r0, #0\n    str r0, [sp]\n    add r3, sp, #4\n    ldrh r2, [r3, #2]\n    ldrh r3, [r3]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r3, #1\n    lsl r3, r3, #0x10\n    lsr r3, r3, #0x10\n    bl ov83_02240C8C\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov83_022415F4(void) {
    /* Original at 0x022415F4 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x14]\n    add r4, r2, #0\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _0224168C ; =0x000007A4\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    add r6, r0, #0\n    ldr r0, _02241690 ; =0x0000050C\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    mov r2, #0\n    bl ov83_0224777C\n    add r0, r6, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_02240C60\n    ldr r0, _02241694 ; =0x00000508\n    ldr r0, [r5, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    sub r1, r4, #1\n    lsl r2, r1, #1\n    ldr r1, _02241698 ; =_02247D0C\n    add r0, r5, #0\n    ldrh r1, [r1, r2]\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r5, #0xa]\n    cmp r4, #1\n    beq _0224165A\n    cmp r4, #2\n    beq _02241664\n    cmp r4, #3\n    beq _0224166E\n    b _02241680\n    add r0, r6, #0\n    mov r1, #0x18\n    bl ov83_0224152C\n    b _02241684\n    add r0, r6, #0\n    mov r1, #0x29\n    bl ov83_0224152C\n    b _02241684\n    add r0, r6, #0\n    mov r1, #0x18\n    bl ov83_0224152C\n    add r0, r6, #0\n    mov r1, #0x29\n    bl ov83_0224152C\n    b _02241684\n    bl GF_AssertFail\n    ldr r0, _0224169C ; =0x000005EC\n    bl PlaySE\n    pop {r4, r5, r6, pc}\n    _0224168C: .word 0x000007A4\n    _02241690: .word 0x0000050C\n    _02241694: .word 0x00000508\n    _02241698: .word _02247D0C\n    _0224169C: .word 0x000005EC"
    );
    #endif
}

void ov83_022416A0(void) {
    /* Original at 0x022416A0 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x14]\n    add r4, r1, #0\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _02241724 ; =0x000007A4\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    mov r1, #6\n    add r2, sp, #0x18\n    add r6, r0, #0\n    bl SetMonData\n    ldrb r0, [r5, #0xd]\n    cmp r0, r4\n    bne _022416D6\n    add r0, r5, #0\n    bl ov83_02241E18\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_022421E0\n    ldrb r0, [r5, #0x14]\n    add r1, r4, #0\n    bl ov83_02247768\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _02241728 ; =0x0000074C\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov83_0224755C\n    add r0, r6, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_02240C60\n    add r2, sp, #0x10\n    ldrh r2, [r2, #8]\n    ldr r0, [r5, #0x24]\n    mov r1, #1\n    bl BufferItemName\n    add r0, r5, #0\n    mov r1, #0x3b\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r5, #0xa]\n    ldr r0, _0224172C ; =0x00000623\n    bl PlaySE\n    pop {r4, r5, r6}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    nop\n    _02241724: .word 0x000007A4\n    _02241728: .word 0x0000074C\n    _0224172C: .word 0x00000623"
    );
    #endif
}

void ov83_02241730(void) {
    /* Original at 0x02241730 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xe]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0224174E\n    mov r0, #0x21\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl TouchscreenListMenu_DestroyButtons\n    add r0, r4, #0\n    bl ov83_02242D5C\n    ldr r0, _02241758 ; =0x0000084C\n    add r0, r4, r0\n    bl ov83_022478B4\n    pop {r4, pc}\n    _02241758: .word 0x0000084C"
    );
    #endif
}

void ov83_0224175C(void) {
    ov83_02241354();
    ov83_022429E4(r4);
}

void ov83_02241770(void) {
    /* Original at 0x02241770 */
    /* Requires manual decompilation - 161 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r4, r1, #0\n    add r1, sp, #0x1c\n    str r1, [sp]\n    add r1, sp, #0x20\n    add r3, sp, #0x1c\n    add r5, r0, #0\n    add r1, #2\n    add r2, sp, #0x20\n    add r3, #2\n    bl ov83_02240F7C\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02241806\n    add r1, sp, #0x1c\n    ldrh r0, [r1, #6]\n    add r0, #0x48\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    ldrh r0, [r1, #4]\n    mov r1, #0\n    add r2, r7, #0\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    mov r0, #0x30\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r3, r6, #0\n    bl FillWindowPixelRect\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    str r0, [sp, #0x18]\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r5, #4]\n    ldr r1, [sp, #0x18]\n    bl FrontierSave_GetStat\n    mov r1, #0\n    add r2, r0, #0\n    str r1, [sp]\n    add r0, r5, #0\n    mov r3, #4\n    bl ov83_02240C48\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r2, #2\n    str r2, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r7, #0\n    bl ov83_0223FCB4\n    strb r0, [r5, #0xa]\n    b _022418D4\n    mov r0, #0x30\n    str r0, [sp]\n    mov r0, #0x10\n    mov r1, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x40\n    add r3, r1, #0\n    bl FillWindowPixelRect\n    mov r0, #0x30\n    str r0, [sp]\n    mov r0, #0x10\n    mov r1, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0xc0\n    add r3, r1, #0\n    bl FillWindowPixelRect\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0224185A\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    add r6, r0, #0\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r5, #4]\n    add r1, r6, #0\n    bl FrontierSave_GetStat\n    add r6, r0, #0\n    ldr r0, _022418E0 ; =0x00000802\n    ldrh r7, [r5, r0]\n    b _0224187C\n    ldr r0, _022418E0 ; =0x00000802\n    ldrh r6, [r5, r0]\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    add r7, r0, #0\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r5, #4]\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    add r7, r0, #0\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r6, #0\n    mov r3, #4\n    str r1, [sp]\n    bl ov83_02240C48\n    mov r0, #0x70\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _022418E4 ; =0x00010200\n    add r1, r4, #0\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    mov r3, #2\n    bl ov83_02241DD8\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r7, #0\n    mov r3, #4\n    str r1, [sp]\n    bl ov83_02240C48\n    mov r0, #0xf0\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _022418E4 ; =0x00010200\n    add r1, r4, #0\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    mov r3, #3\n    bl ov83_02241DD8\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022418E0: .word 0x00000802\n    _022418E4: .word 0x00010200"
    );
    #endif
}

void ov83_022418E8(void) {
    /* Original at 0x022418E8 */
    /* Requires manual decompilation - 139 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, _02241A4C ; =0x000005E3\n    add r7, r1, #0\n    add r5, r2, #0\n    bl PlaySE\n    ldrb r0, [r4, #0x15]\n    add r1, r7, #0\n    str r0, [sp]\n    bl ov83_0224776C\n    str r0, [sp, #4]\n    cmp r5, #0xa\n    bhi _02241940\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02241914: ; jump table\n    sub r0, r5, #1\n    lsl r1, r0, #1\n    ldr r0, _02241A50 ; =ov83_02247D18\n    ldrh r6, [r0, r1]\n    b _02241940\n    ldrh r0, [r4, #0x10]\n    bl ov83_02240EF8\n    add r6, r0, #0\n    b _02241940\n    mov r6, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02241974\n    ldr r0, [sp]\n    cmp r7, r0\n    bhs _02241962\n    add r0, r4, #0\n    mov r1, #5\n    bl ov83_02240C6C\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, #4]\n    add r2, r6, #0\n    bl ov80_02237FA4\n    b _0224199E\n    ldr r0, [r4, #0x24]\n    mov r1, #5\n    bl ov83_022477C4\n    ldr r0, _02241A54 ; =0x00000802\n    ldrh r1, [r4, r0]\n    sub r1, r1, r6\n    strh r1, [r4, r0]\n    b _0224199E\n    ldr r0, [sp]\n    cmp r7, r0\n    bhs _0224198C\n    ldr r0, [r4, #0x24]\n    mov r1, #5\n    bl ov83_022477C4\n    ldr r0, _02241A54 ; =0x00000802\n    ldrh r1, [r4, r0]\n    sub r1, r1, r6\n    strh r1, [r4, r0]\n    b _0224199E\n    add r0, r4, #0\n    mov r1, #5\n    bl ov83_02240C6C\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, #4]\n    add r2, r6, #0\n    bl ov80_02237FA4\n    add r1, r4, #0\n    add r0, r4, #0\n    add r1, #0x50\n    bl ov83_02241770\n    add r0, r4, #0\n    bl ov83_02241730\n    add r0, r4, #0\n    bl ov83_02241B18\n    add r0, r4, #0\n    bl ov83_0224042C\n    ldr r2, _02241A58 ; =0x00000868\n    mov r0, #2\n    mov r1, #0\n    add r2, r4, r2\n    bl ov83_022477EC\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02241354\n    cmp r5, #0xa\n    bhi _02241A48\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022419DE: ; jump table\n    ldr r0, _02241A5C ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    add r2, r5, #0\n    bl ov83_022415F4\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02241A5C ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    ldrh r2, [r4, #0x10]\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov83_022416A0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov83_02241A60\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov83_02241ABC\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02241A4C: .word 0x000005E3\n    _02241A50: .word ov83_02247D18\n    _02241A54: .word 0x00000802\n    _02241A58: .word 0x00000868\n    _02241A5C: .word 0x00000508"
    );
    #endif
}

void ov83_02241A60(void) {
    /* Original at 0x02241A60 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #2\n    bl ov83_0223FAA8\n    add r0, r5, #0\n    add r0, #0xb0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #0\n    add r0, #0xa0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #5\n    lsl r0, r0, #6\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldrb r0, [r5, #0x14]\n    add r1, r4, #0\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _02241AB4 ; =0x000007A4\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    add r1, r5, #0\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, #0x90\n    bl ov83_0223FD4C\n    ldr r2, _02241AB8 ; =0x00000868\n    mov r0, #2\n    mov r1, #1\n    add r2, r5, r2\n    bl ov83_022477EC\n    pop {r3, r4, r5, pc}\n    nop\n    _02241AB4: .word 0x000007A4\n    _02241AB8: .word 0x00000868"
    );
    #endif
}

void ov83_02241ABC(void) {
    /* Original at 0x02241ABC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #2\n    bl ov83_0223FB24\n    add r0, r5, #0\n    add r0, #0xb0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #0\n    add r0, #0xa0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #5\n    lsl r0, r0, #6\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldrb r0, [r5, #0x14]\n    add r1, r4, #0\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _02241B10 ; =0x000007A4\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    add r1, r5, #0\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, #0x90\n    bl ov83_0223FF44\n    ldr r2, _02241B14 ; =0x00000868\n    mov r0, #2\n    mov r1, #1\n    add r2, r5, r2\n    bl ov83_022477EC\n    pop {r3, r4, r5, pc}\n    nop\n    _02241B10: .word 0x000007A4\n    _02241B14: .word 0x00000868"
    );
    #endif
}

void ov83_02241B18(void) {
    /* Original at 0x02241B18 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _02241B28 ; =0x00000868\n    add r3, r0, #0\n    add r2, r3, r2\n    ldr r3, _02241B2C ; =ov83_022477EC\n    mov r0, #2\n    mov r1, #0\n    bx r3\n    nop\n    _02241B28: .word 0x00000868\n    _02241B2C: .word ov83_022477EC"
    );
    #endif
}

void ov83_02241B30(void) {
    /* Original at 0x02241B30 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    ldrb r0, [r6, #9]\n    mov r1, #1\n    bl ov80_02237B24\n    mov r4, #0\n    str r0, [sp]\n    cmp r0, #0\n    ble _02241BB8\n    add r5, r6, #0\n    ldr r0, _02241BBC ; =0x000007A4\n    add r1, r4, #0\n    ldr r0, [r6, r0]\n    bl Party_GetMonByIndex\n    str r0, [sp, #4]\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    ldr r0, [sp, #4]\n    mov r1, #0xa4\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    lsl r0, r7, #0x10\n    lsl r1, r1, #0x10\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x10\n    bl ov80_0222A43C\n    add r1, r0, #0\n    ldr r0, _02241BC0 ; =0x0000073C\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _02241BAE\n    bl ov83_02247600\n    ldrb r0, [r6, #0x14]\n    ldrb r1, [r6, #0xd]\n    bl ov83_02247768\n    cmp r4, r0\n    bne _02241B98\n    ldrb r1, [r6, #0xd]\n    ldrb r0, [r6, #0x15]\n    cmp r1, r0\n    blo _02241BA4\n    ldr r0, _02241BC0 ; =0x0000073C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ov83_0224760C\n    b _02241BAE\n    ldr r0, _02241BC0 ; =0x0000073C\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl ov83_0224760C\n    ldr r0, [sp]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r0\n    blt _02241B48\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02241BBC: .word 0x000007A4\n    _02241BC0: .word 0x0000073C"
    );
    #endif
}

void ov83_02241BC4(void) {
    /* Original at 0x02241BC4 */
    /* Requires manual decompilation - 231 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    str r2, [sp]\n    ldrb r0, [r5, #9]\n    add r6, r1, #0\n    mov r1, #0\n    bl ov80_02237B24\n    ldr r0, [sp]\n    cmp r0, #4\n    beq _02241BE0\n    mov r0, #1\n    b _02241BE2\n    mov r0, #0\n    ldrb r7, [r5, #0x15]\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r7, #0\n    add r1, r6, #0\n    bl ov83_0224776C\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02241CC4\n    cmp r6, r7\n    bhs _02241C92\n    add r0, r5, #0\n    mov r1, #5\n    bl ov83_02240C6C\n    ldr r0, _02241DC4 ; =0x0000050C\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    bl ov83_0224777C\n    add r2, r0, #0\n    mov r0, #6\n    add r6, r4, #0\n    mul r6, r0\n    ldr r3, _02241DC8 ; =ov83_02247D48\n    lsl r2, r2, #1\n    add r3, r3, r6\n    ldrb r1, [r5, #9]\n    ldrh r2, [r2, r3]\n    ldr r0, [r5, #4]\n    bl ov80_02237FA4\n    ldr r0, _02241DC4 ; =0x0000050C\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    bl ov83_0224777C\n    add r7, r0, #0\n    ldr r0, _02241DC4 ; =0x0000050C\n    ldr r0, [r5, r0]\n    bl Save_Frontier_GetStatic\n    str r0, [sp, #4]\n    ldrb r0, [r5, #9]\n    add r1, r4, #0\n    bl sub_0205C174\n    str r0, [sp, #8]\n    ldrb r0, [r5, #9]\n    add r1, r4, #0\n    bl sub_0205C174\n    bl sub_0205C268\n    add r3, r7, #1\n    add r2, r0, #0\n    lsl r3, r3, #0x10\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    lsr r3, r3, #0x10\n    bl sub_02031108\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    beq _02241C72\n    b _02241D8C\n    ldr r0, [sp]\n    ldrb r1, [r5, #0xe]\n    cmp r0, #4\n    bne _02241C86\n    mov r0, #0x60\n    bic r1, r0\n    mov r0, #0x20\n    orr r0, r1\n    strb r0, [r5, #0xe]\n    b _02241D8C\n    mov r0, #0x60\n    bic r1, r0\n    mov r0, #0x40\n    orr r0, r1\n    strb r0, [r5, #0xe]\n    b _02241D8C\n    ldr r0, [r5, #0x24]\n    mov r1, #5\n    bl ov83_022477C4\n    ldr r0, _02241DCC ; =0x000007FF\n    add r6, r4, #0\n    add r1, r5, r0\n    ldrb r7, [r1, r4]\n    mov r0, #6\n    mul r6, r0\n    ldr r0, _02241DCC ; =0x000007FF\n    ldr r2, _02241DC8 ; =ov83_02247D48\n    add r0, r0, #3\n    lsl r3, r7, #1\n    add r2, r2, r6\n    ldrh r0, [r5, r0]\n    ldrh r2, [r3, r2]\n    sub r0, r0, r2\n    ldr r2, _02241DCC ; =0x000007FF\n    add r2, r2, #3\n    strh r0, [r5, r2]\n    ldrb r0, [r1, r4]\n    add r0, r0, #1\n    strb r0, [r1, r4]\n    b _02241D8C\n    cmp r6, r7\n    bhs _02241CFA\n    ldr r0, [r5, #0x24]\n    mov r1, #5\n    bl ov83_022477C4\n    ldr r0, _02241DCC ; =0x000007FF\n    add r6, r4, #0\n    add r1, r5, r0\n    ldrb r7, [r1, r4]\n    mov r0, #6\n    mul r6, r0\n    ldr r0, _02241DCC ; =0x000007FF\n    ldr r2, _02241DC8 ; =ov83_02247D48\n    add r0, r0, #3\n    lsl r3, r7, #1\n    add r2, r2, r6\n    ldrh r0, [r5, r0]\n    ldrh r2, [r3, r2]\n    sub r0, r0, r2\n    ldr r2, _02241DCC ; =0x000007FF\n    add r2, r2, #3\n    strh r0, [r5, r2]\n    ldrb r0, [r1, r4]\n    add r0, r0, #1\n    strb r0, [r1, r4]\n    b _02241D8C\n    add r0, r5, #0\n    mov r1, #5\n    bl ov83_02240C6C\n    ldr r0, _02241DC4 ; =0x0000050C\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    bl ov83_0224777C\n    add r2, r0, #0\n    mov r0, #6\n    add r6, r4, #0\n    mul r6, r0\n    ldr r3, _02241DC8 ; =ov83_02247D48\n    lsl r2, r2, #1\n    add r3, r3, r6\n    ldrb r1, [r5, #9]\n    ldrh r2, [r2, r3]\n    ldr r0, [r5, #4]\n    bl ov80_02237FA4\n    ldr r0, _02241DC4 ; =0x0000050C\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    bl ov83_0224777C\n    add r7, r0, #0\n    ldr r0, _02241DC4 ; =0x0000050C\n    ldr r0, [r5, r0]\n    bl Save_Frontier_GetStatic\n    str r0, [sp, #0xc]\n    ldrb r0, [r5, #9]\n    add r1, r4, #0\n    bl sub_0205C174\n    str r0, [sp, #0x10]\n    ldrb r0, [r5, #9]\n    add r1, r4, #0\n    bl sub_0205C174\n    bl sub_0205C268\n    add r3, r7, #1\n    add r2, r0, #0\n    lsl r3, r3, #0x10\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    lsr r3, r3, #0x10\n    bl sub_02031108\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _02241D8C\n    ldr r0, [sp]\n    ldrb r1, [r5, #0xe]\n    cmp r0, #4\n    bne _02241D82\n    mov r0, #0x60\n    bic r1, r0\n    mov r0, #0x20\n    orr r0, r1\n    strb r0, [r5, #0xe]\n    b _02241D8C\n    mov r0, #0x60\n    bic r1, r0\n    mov r0, #0x40\n    orr r0, r1\n    strb r0, [r5, #0xe]\n    add r0, r5, #0\n    bl ov83_02241730\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x50\n    bl ov83_02241770\n    ldr r0, _02241DD0 ; =0x00000508\n    ldr r0, [r5, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0xb0\n    bl ov83_02247944\n    ldr r1, _02241DD4 ; =ov83_02247D5A\n    lsl r2, r7, #1\n    add r1, r1, r6\n    ldrh r1, [r2, r1]\n    add r0, r5, #0\n    mov r2, #1\n    bl ov83_0223FD14\n    strb r0, [r5, #0xa]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02241DC4: .word 0x0000050C\n    _02241DC8: .word ov83_02247D48\n    _02241DCC: .word 0x000007FF\n    _02241DD0: .word 0x00000508\n    _02241DD4: .word ov83_02247D5A"
    );
    #endif
}

void ov83_02241DD8(void) {
    /* Original at 0x02241DD8 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r2, #0\n    add r1, r3, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x28]\n    ldr r2, [sp, #0x20]\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    ldr r3, [sp, #0x24]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #8]\n    ldr r1, [r5, #0x28]\n    add r0, r4, #0\n    bl ov83_02247998\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov83_02241E18(void) {
    /* Original at 0x02241E18 */
    /* Requires manual decompilation - 193 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldrb r0, [r5, #0x14]\n    ldrb r1, [r5, #0xd]\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _02241FA8 ; =0x000007A4\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    add r6, r0, #0\n    bl AcquireMonLock\n    str r0, [sp, #4]\n    ldr r0, _02241FAC ; =0x00000804\n    str r6, [r5, r0]\n    add r0, r6, #0\n    bl Mon_GetBoxMon\n    ldr r1, _02241FB0 ; =0x00000808\n    mov r2, #0\n    str r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #5\n    bl GetMonData\n    ldr r1, _02241FB4 ; =0x0000080C\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa1\n    bl GetMonData\n    ldr r1, _02241FB8 ; =0x0000080F\n    mov r2, #0\n    strb r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa\n    bl GetMonData\n    mov r1, #0x81\n    lsl r1, r1, #4\n    strb r0, [r5, r1]\n    add r0, r6, #0\n    bl GetMonNature\n    ldr r1, _02241FBC ; =0x00000811\n    mov r2, #0\n    strb r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #6\n    bl GetMonData\n    ldr r1, _02241FC0 ; =0x00000812\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa3\n    bl GetMonData\n    ldr r1, _02241FC4 ; =0x00000818\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa4\n    bl GetMonData\n    ldr r1, _02241FC8 ; =0x0000081A\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa5\n    bl GetMonData\n    ldr r1, _02241FCC ; =0x0000081C\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa8\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _02241FD0 ; =0x0000081E\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa6\n    bl GetMonData\n    mov r1, #0x82\n    lsl r1, r1, #4\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa9\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _02241FD4 ; =0x00000822\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa7\n    bl GetMonData\n    ldr r1, _02241FD8 ; =0x00000824\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0x70\n    bl GetMonData\n    ldr r1, _02241FDC ; =0x00000826\n    strb r0, [r5, r1]\n    mov r1, #0\n    add r0, r6, #0\n    add r2, r1, #0\n    bl GetMonData\n    ldr r1, _02241FE0 ; =0x00000814\n    mov r2, #0\n    str r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xb0\n    bl GetMonData\n    cmp r0, #1\n    ldr r1, _02241FE4 ; =0x0000080E\n    bne _02241F24\n    ldrb r2, [r5, r1]\n    mov r0, #0x80\n    bic r2, r0\n    strb r2, [r5, r1]\n    b _02241F2C\n    ldrb r2, [r5, r1]\n    mov r0, #0x80\n    orr r0, r2\n    strb r0, [r5, r1]\n    add r0, r6, #0\n    bl GetMonGender\n    ldr r3, _02241FE4 ; =0x0000080E\n    mov r2, #0x7f\n    ldrb r1, [r5, r3]\n    mov r4, #0\n    bic r1, r2\n    mov r2, #0x7f\n    and r0, r2\n    orr r0, r1\n    strb r0, [r5, r3]\n    lsl r0, r4, #1\n    add r0, r5, r0\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, r6, #0\n    add r1, #0x36\n    mov r2, #0\n    bl GetMonData\n    ldr r2, [sp]\n    ldr r1, _02241FE8 ; =0x00000828\n    add r7, r5, r4\n    strh r0, [r2, r1]\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x3a\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x83\n    lsl r1, r1, #4\n    strb r0, [r7, r1]\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x3e\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    lsl r1, r1, #0x18\n    ldr r2, [sp]\n    ldr r0, _02241FE8 ; =0x00000828\n    lsr r1, r1, #0x18\n    ldrh r0, [r2, r0]\n    bl GetMoveMaxPP\n    ldr r1, _02241FEC ; =0x00000834\n    strb r0, [r7, r1]\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #4\n    blo _02241F44\n    ldr r1, [sp, #4]\n    add r0, r6, #0\n    bl ReleaseMonLock\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02241FA8: .word 0x000007A4\n    _02241FAC: .word 0x00000804\n    _02241FB0: .word 0x00000808\n    _02241FB4: .word 0x0000080C\n    _02241FB8: .word 0x0000080F\n    _02241FBC: .word 0x00000811\n    _02241FC0: .word 0x00000812\n    _02241FC4: .word 0x00000818\n    _02241FC8: .word 0x0000081A\n    _02241FCC: .word 0x0000081C\n    _02241FD0: .word 0x0000081E\n    _02241FD4: .word 0x00000822\n    _02241FD8: .word 0x00000824\n    _02241FDC: .word 0x00000826\n    _02241FE0: .word 0x00000814\n    _02241FE4: .word 0x0000080E\n    _02241FE8: .word 0x00000828\n    _02241FEC: .word 0x00000834"
    );
    #endif
}

void ov83_02241FF0(void) {
    /* Original at 0x02241FF0 */
    /* Requires manual decompilation - 217 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0x19\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x1b\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x1d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x21\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x23\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x25\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x27\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x29\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x2b\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _022421DC ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x58\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _022421DC ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x1b\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x4a\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _022421DC ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x1d\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x48\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _022421DC ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x46\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _022421DC ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x21\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x59\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _022421DC ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x23\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x4c\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _022421DC ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x50\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _022421DC ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x4e\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _022421DC ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x29\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x52\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _022421DC ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x2b\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x54\n    bl ov83_022479E4\n    mov r0, #0x19\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x1b\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x1d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x21\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x23\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x25\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x27\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x29\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x2b\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _022421DC: .word 0x00010200"
    );
    #endif
}

void ov83_022421E0(void) {
    /* Original at 0x022421E0 */
    /* Requires manual decompilation - 688 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r4, r0, #0\n    mov r0, #0x17\n    lsl r0, r0, #4\n    str r1, [sp, #0x14]\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #6\n    lsl r0, r0, #6\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x22\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #9\n    lsl r0, r0, #6\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x26\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0xa\n    lsl r0, r0, #6\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0xb\n    lsl r0, r0, #6\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x31\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x33\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0xd\n    lsl r0, r0, #6\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0224262C ; =0x00000804\n    ldr r0, [r4, r0]\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, [r4, #0x24]\n    mov r1, #0\n    bl BufferBoxMonNickname\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _02242630 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #0x17\n    lsl r1, r1, #4\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r3, #0x5b\n    bl ov83_02241DD8\n    ldr r0, _02242634 ; =0x0000080E\n    ldrb r0, [r4, r0]\n    lsl r1, r0, #0x18\n    lsr r1, r1, #0x1f\n    bne _02242354\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x19\n    bne _02242334\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02242638 ; =0x00050600\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x56\n    bl ov83_022479E4\n    b _02242354\n    cmp r0, #1\n    bne _02242354\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xc1\n    str r3, [sp, #4]\n    lsl r0, r0, #0xa\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x57\n    bl ov83_022479E4\n    mov r1, #0\n    ldr r2, _0224263C ; =0x0000080F\n    str r1, [sp]\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #3\n    bl ov83_02240C48\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _02242630 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #0x1a\n    lsl r1, r1, #4\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r3, #0x5e\n    bl ov83_02241DD8\n    mov r2, #0x81\n    lsl r2, r2, #4\n    ldrb r2, [r4, r2]\n    ldr r0, [r4, #0x24]\n    mov r1, #0\n    bl BufferAbilityName\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _02242630 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #7\n    lsl r1, r1, #6\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r3, #0x4b\n    bl ov83_02241DD8\n    ldr r2, _02242640 ; =0x00000811\n    ldr r0, [r4, #0x24]\n    ldrb r2, [r4, r2]\n    mov r1, #0\n    bl BufferNatureName\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _02242630 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #0x1e\n    lsl r1, r1, #4\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r3, #0x49\n    bl ov83_02241DD8\n    ldr r2, _02242644 ; =0x00000812\n    ldr r0, [r4, #0x24]\n    ldrh r2, [r4, r2]\n    mov r1, #0\n    bl BufferItemName\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _02242630 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #2\n    lsl r1, r1, #8\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r3, #0x47\n    bl ov83_02241DD8\n    mov r1, #0\n    ldr r2, _02242648 ; =0x00000818\n    str r1, [sp]\n    ldrh r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #3\n    bl ov83_02240C48\n    mov r0, #0\n    str r0, [sp]\n    ldr r2, _0224264C ; =0x0000081A\n    add r0, r4, #0\n    ldrh r2, [r4, r2]\n    mov r1, #1\n    mov r3, #3\n    bl ov83_02240C48\n    mov r0, #0x22\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02242630 ; =0x00010200\n    mov r1, #0x22\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    lsl r1, r1, #4\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r3, #0x5f\n    bl ov83_02241DD8\n    mov r1, #0\n    ldr r2, _02242650 ; =0x0000081C\n    str r1, [sp]\n    ldrh r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #3\n    bl ov83_02240C48\n    mov r0, #9\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02242630 ; =0x00010200\n    mov r1, #9\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    lsl r1, r1, #6\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r3, #0x4d\n    bl ov83_02241DD8\n    mov r1, #0\n    ldr r2, _02242654 ; =0x0000081E\n    str r1, [sp]\n    ldrh r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #3\n    bl ov83_02240C48\n    mov r0, #0x26\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02242630 ; =0x00010200\n    mov r1, #0x26\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    lsl r1, r1, #4\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r3, #0x51\n    bl ov83_02241DD8\n    mov r1, #0\n    mov r2, #0x82\n    str r1, [sp]\n    lsl r2, r2, #4\n    ldrh r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #3\n    bl ov83_02240C48\n    mov r0, #0xa\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02242630 ; =0x00010200\n    mov r1, #0xa\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    lsl r1, r1, #6\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r3, #0x4f\n    bl ov83_02241DD8\n    mov r1, #0\n    ldr r2, _02242658 ; =0x00000822\n    str r1, [sp]\n    ldrh r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #3\n    bl ov83_02240C48\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02242630 ; =0x00010200\n    mov r1, #0x2a\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    lsl r1, r1, #4\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r3, #0x53\n    bl ov83_02241DD8\n    mov r1, #0\n    ldr r2, _0224265C ; =0x00000824\n    str r1, [sp]\n    ldrh r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #3\n    bl ov83_02240C48\n    mov r0, #0xb\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02242630 ; =0x00010200\n    mov r1, #0xb\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    lsl r1, r1, #6\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r3, #0x55\n    bl ov83_02241DD8\n    add r6, r4, #0\n    mov r5, #0\n    str r4, [sp, #0x1c]\n    add r6, #0x50\n    ldr r3, [sp, #0x1c]\n    ldr r2, _02242660 ; =0x00000828\n    ldr r0, [r4, #0x24]\n    ldrh r2, [r3, r2]\n    add r1, r5, #0\n    bl BufferMoveName\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02242630 ; =0x00010200\n    add r1, r5, #0\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    add r1, #0x28\n    lsl r1, r1, #4\n    add r3, r5, #0\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    add r1, r6, r1\n    add r3, #0x60\n    bl ov83_02241DD8\n    ldr r1, [sp, #0x1c]\n    ldr r0, _02242660 ; =0x00000828\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    bne _022425F2\n    add r0, r5, #0\n    add r0, #0x2c\n    lsl r7, r0, #4\n    add r0, r6, r7\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02242630 ; =0x00010200\n    lsl r3, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r6, r7\n    lsr r7, r3, #0x1f\n    add r7, r3, r7\n    ldr r1, [r4, #0x20]\n    mov r2, #0x66\n    asr r3, r7, #1\n    bl ov83_022479E4\n    b _02242712\n    ldr r0, [r4, #0x20]\n    mov r1, #0x5a\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x28]\n    mov r0, #0\n    ldr r1, [sp, #0x28]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0xf\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x24]\n    add r0, r5, #0\n    add r0, #0x2c\n    lsl r7, r0, #4\n    add r0, r6, r7\n    bl GetWindowWidth\n    lsl r1, r0, #3\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    lsl r0, r0, #0xf\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x20]\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _02242630 ; =0x00010200\n    b _02242664\n    _0224262C: .word 0x00000804\n    _02242630: .word 0x00010200\n    _02242634: .word 0x0000080E\n    _02242638: .word 0x00050600\n    _0224263C: .word 0x0000080F\n    _02242640: .word 0x00000811\n    _02242644: .word 0x00000812\n    _02242648: .word 0x00000818\n    _0224264C: .word 0x0000081A\n    _02242650: .word 0x0000081C\n    _02242654: .word 0x0000081E\n    _02242658: .word 0x00000822\n    _0224265C: .word 0x00000824\n    _02242660: .word 0x00000828\n    ldr r1, [sp, #0x28]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r2, [sp, #0x20]\n    add r0, r6, r7\n    mov r3, #0\n    bl ov83_02247998\n    ldr r0, [sp, #0x28]\n    bl String_Delete\n    add r0, r4, r5\n    str r0, [sp, #0x18]\n    mov r0, #0\n    mov r2, #0x83\n    str r0, [sp]\n    ldr r3, [sp, #0x18]\n    lsl r2, r2, #4\n    ldrb r2, [r3, r2]\n    add r0, r4, #0\n    mov r1, #0\n    mov r3, #2\n    bl ov83_02240C48\n    ldr r0, [r4, #0x20]\n    mov r1, #0x65\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x2c]\n    ldr r0, [r4, #0x24]\n    ldr r1, [r4, #0x28]\n    ldr r2, [sp, #0x2c]\n    bl StringExpandPlaceholders\n    mov r0, #0\n    ldr r1, [r4, #0x28]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov ip, r0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0224280C ; =0x00010200\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r3, [sp, #0x20]\n    ldr r2, [sp, #0x24]\n    ldr r1, [r4, #0x28]\n    sub r2, r3, r2\n    mov r3, ip\n    sub r2, r2, r3\n    add r0, r6, r7\n    mov r3, #0\n    bl ov83_02247998\n    ldr r0, [sp, #0x2c]\n    bl String_Delete\n    mov r0, #0\n    str r0, [sp]\n    ldr r3, [sp, #0x18]\n    ldr r2, _02242810 ; =0x00000834\n    add r0, r4, #0\n    ldrb r2, [r3, r2]\n    mov r1, #0\n    mov r3, #2\n    bl ov83_02240C48\n    ldr r1, [sp, #0x20]\n    ldr r0, [sp, #0x24]\n    mov r3, #0x65\n    add r0, r1, r0\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _0224280C ; =0x00010200\n    add r1, r6, r7\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    bl ov83_02241DD8\n    ldr r0, [sp, #0x1c]\n    add r5, r5, #1\n    add r0, r0, #2\n    str r0, [sp, #0x1c]\n    cmp r5, #4\n    bhs _02242720\n    b _02242586\n    ldr r0, [sp, #0x14]\n    cmp r0, #1\n    bne _02242740\n    mov r0, #0x17\n    lsl r0, r0, #4\n    mov r5, #0x12\n    add r4, r4, r0\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #0x2f\n    bls _0224272E\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x17\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #6\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x22\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #9\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x26\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0xa\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0xb\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #3\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x31\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x32\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x33\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0xd\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224280C: .word 0x00010200\n    _02242810: .word 0x00000834"
    );
    #endif
}

void ov83_02242814(void) {
    /* Original at 0x02242814 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    bl ov83_02241E18\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov83_022421E0\n    mov r3, #0x1e\n    lsl r3, r3, #6\n    add r2, r3, #0\n    add r1, r3, #0\n    add r2, #0x8c\n    ldr r0, [r4, r3]\n    add r1, #0x88\n    add r3, #0x94\n    ldrh r2, [r4, r2]\n    ldr r1, [r4, r1]\n    ldr r3, [r4, r3]\n    bl ov83_02247668\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_02242844(void) {
    /* Original at 0x02242844 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    cmp r1, #1\n    bne _02242870\n    mov r0, #0x17\n    lsl r0, r0, #4\n    mov r4, #0x12\n    add r5, r6, r0\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0x2f\n    bls _02242854\n    mov r0, #0x1e\n    lsl r0, r0, #6\n    ldr r0, [r6, r0]\n    mov r1, #1\n    bl ov83_0224755C\n    pop {r4, r5, r6, pc}\n    mov r0, #0x17\n    lsl r0, r0, #4\n    mov r5, #0x12\n    add r4, r6, r0\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #0x2f\n    bls _02242878\n    mov r0, #0x1e\n    lsl r0, r0, #6\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl ov83_0224755C\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov83_02242894(void) {
    /* Original at 0x02242894 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "lsl r3, r0, #0x1f\n    lsr r3, r3, #0x18\n    add r3, #0x14\n    strh r3, [r1]\n    lsr r1, r0, #1\n    mov r0, #0x28\n    mul r0, r1\n    add r0, #0x38\n    strh r0, [r2]\n    bx lr"
    );
    #endif
}

void ov83_022428A8(void) {
    /* Original at 0x022428A8 */
    /* Requires manual decompilation - 136 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r6, r0, #0\n    str r0, [sp, #0x14]\n    add r0, #0x50\n    add r7, r1, #0\n    mov r4, #0\n    add r5, r6, #0\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    add r0, #0x30\n    lsl r1, r0, #4\n    ldr r0, [sp, #0x14]\n    add r0, r0, r1\n    bl ClearWindowTilemapAndScheduleTransfer\n    cmp r4, r7\n    ldr r0, _022429CC ; =0x00000784\n    beq _022428D8\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ov83_0224755C\n    b _022428E2\n    ldr r0, [r5, r0]\n    mov r1, #0x44\n    mov r2, #0x4c\n    bl ov83_02247568\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blo _022428BA\n    ldr r0, _022429D0 ; =0x0000077C\n    mov r1, #0\n    ldr r0, [r6, r0]\n    bl ov83_0224755C\n    mov r0, #0x6b\n    str r0, [sp]\n    ldr r0, _022429D4 ; =0x000007A8\n    mov r1, #0x27\n    ldr r0, [r6, r0]\n    mov r2, #1\n    add r3, sp, #0x18\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    mov r3, #0\n    add r4, r0, #0\n    str r3, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    ldr r2, [sp, #0x18]\n    ldr r0, [r6, #0x4c]\n    mov r1, #2\n    add r2, #0xc\n    bl LoadRectToBgTilemapRect\n    ldr r0, [r6, #0x4c]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0x3b\n    lsl r0, r0, #4\n    add r0, r6, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0xf\n    lsl r0, r0, #6\n    add r0, r6, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _022429D8 ; =0x00000862\n    ldr r2, _022429DC ; =0x000004DC\n    ldrsh r1, [r6, r0]\n    mov r0, #6\n    mul r0, r1\n    mov r1, #0\n    add r0, r0, r7\n    lsl r4, r0, #3\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _022429E0 ; =0x00010200\n    add r3, r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r2, [r6, r2]\n    mov r0, #0x3b\n    lsl r0, r0, #4\n    ldr r2, [r2, r4]\n    add r0, r6, r0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r1, _022429DC ; =0x000004DC\n    ldrb r2, [r6, #0x13]\n    ldr r1, [r6, r1]\n    add r0, r6, #0\n    add r1, r1, r4\n    ldr r1, [r1, #4]\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    bl ov83_02240EC4\n    add r2, r0, #0\n    mov r1, #0\n    add r0, r6, #0\n    mov r3, #2\n    str r1, [sp]\n    bl ov83_02240C48\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _022429E0 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #0xf\n    lsl r1, r1, #6\n    ldr r2, [r6, #0x20]\n    add r0, r6, #0\n    add r1, r6, r1\n    mov r3, #0x68\n    bl ov83_02241DD8\n    mov r0, #0x3b\n    lsl r0, r0, #4\n    add r0, r6, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0xf\n    lsl r0, r0, #6\n    add r0, r6, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022429CC: .word 0x00000784\n    _022429D0: .word 0x0000077C\n    _022429D4: .word 0x000007A8\n    _022429D8: .word 0x00000862\n    _022429DC: .word 0x000004DC\n    _022429E0: .word 0x00010200"
    );
    #endif
}

void ov83_022429E4(void) {
    /* Original at 0x022429E4 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    mov r0, #0x3b\n    lsl r0, r0, #4\n    add r0, r6, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0xf\n    lsl r0, r0, #6\n    add r0, r6, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0x6b\n    str r0, [sp]\n    ldr r0, _02242AA0 ; =0x000007A8\n    mov r1, #0x26\n    ldr r0, [r6, r0]\n    mov r2, #1\n    add r3, sp, #0x10\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    mov r3, #0\n    add r4, r0, #0\n    str r3, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    ldr r2, [sp, #0x10]\n    ldr r0, [r6, #0x4c]\n    mov r1, #2\n    add r2, #0xc\n    bl LoadRectToBgTilemapRect\n    ldr r0, [r6, #0x4c]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r4, #0\n    bl Heap_Free\n    ldr r0, _02242AA4 ; =0x00000862\n    mov r4, #0\n    ldrsh r1, [r6, r0]\n    mov r0, #6\n    add r5, r6, #0\n    add r7, r1, #0\n    mul r7, r0\n    add r1, sp, #0xc\n    add r0, r4, #0\n    add r1, #2\n    add r2, sp, #0xc\n    bl ov83_02242894\n    ldr r0, _02242AA8 ; =0x00000784\n    add r1, sp, #0xc\n    add r2, sp, #0xc\n    ldrh r1, [r1, #2]\n    ldrh r2, [r2]\n    ldr r0, [r5, r0]\n    bl ov83_02247568\n    ldr r0, _02242AAC ; =0x00000861\n    add r1, r7, r4\n    ldrb r0, [r6, r0]\n    cmp r1, r0\n    bhs _02242A76\n    ldr r0, _02242AA8 ; =0x00000784\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl ov83_0224755C\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blo _02242A46\n    ldr r0, _02242AB0 ; =0x0000077C\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl ov83_0224755C\n    add r0, r6, #0\n    bl ov83_02240664\n    add r0, r6, #0\n    bl ov83_022407FC\n    add r0, r6, #0\n    bl ov83_0224088C\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02242AA0: .word 0x000007A8\n    _02242AA4: .word 0x00000862\n    _02242AA8: .word 0x00000784\n    _02242AAC: .word 0x00000861\n    _02242AB0: .word 0x0000077C"
    );
    #endif
}

void ov83_02242AB4(void) {
    ov83_02240DB0();
}

void ov83_02242AC0(void) {
    /* Original at 0x02242AC0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02242ADC ; =0x0000077C\n    add r4, r3, #0\n    ldr r0, [r5, r0]\n    bl ov83_02247568\n    ldr r0, _02242ADC ; =0x0000077C\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl ov83_022475D4\n    pop {r3, r4, r5, pc}\n    nop\n    _02242ADC: .word 0x0000077C"
    );
    #endif
}

void ov83_02242AE0(void) {
    ov83_022408E0();
}

void ov83_02242AEC(void) {
    /* Original at 0x02242AEC */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    add r0, sp, #4\n    add r4, r1, #0\n    add r0, #2\n    add r1, sp, #4\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov83_02247988\n    ldr r0, _02242B9C ; =_02247D0C\n    add r1, sp, #4\n    ldrh r2, [r0, #0x1e]\n    add r3, sp, #8\n    strh r2, [r1, #0x1c]\n    ldrh r2, [r0, #0x20]\n    strh r2, [r1, #0x1e]\n    ldrh r2, [r0, #0x22]\n    strh r2, [r1, #0x20]\n    ldrh r2, [r0, #0x24]\n    strh r2, [r1, #0x22]\n    ldrh r2, [r0, #0x26]\n    ldrh r0, [r0, #0x28]\n    strh r2, [r1, #0x24]\n    strh r0, [r1, #0x26]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #0x22]\n    ldrh r2, [r1]\n    add r0, r0, r2\n    sub r0, #0x1b\n    strh r0, [r1, #0x24]\n    strh r2, [r1, #0x26]\n    ldrh r0, [r1, #0x1c]\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #0x1e]\n    strh r0, [r1, #6]\n    ldrh r0, [r1, #0x20]\n    strh r0, [r1, #8]\n    ldrh r0, [r1, #0x22]\n    strh r0, [r1, #0xa]\n    ldrh r0, [r1, #0x24]\n    strh r0, [r1, #0xc]\n    ldrh r0, [r1, #0x26]\n    strh r0, [r1, #0xe]\n    ldr r0, _02242BA0 ; =0x00000844\n    ldr r2, [r5, r0]\n    sub r0, #8\n    str r2, [sp, #0x14]\n    ldr r2, [r5, #0x4c]\n    str r2, [sp, #0x18]\n    strb r4, [r1, #0x18]\n    add r1, sp, #0x30\n    ldrb r1, [r1, #0x10]\n    add r2, r6, #0\n    str r1, [sp]\n    add r1, r3, #0\n    ldr r0, [r5, r0]\n    add r3, r7, #0\n    bl ov83_02247CCC\n    mov r1, #0x21\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    ldrb r1, [r5, #0xe]\n    mov r0, #0x10\n    orr r0, r1\n    strb r0, [r5, #0xe]\n    ldrb r0, [r5, #9]\n    mov r1, #1\n    bl ov80_02237B24\n    add r4, r0, #0\n    ldr r0, _02242BA4 ; =0x0000073C\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #1\n    bl ov83_0224773C\n    ldr r0, _02242BA8 ; =0x0000074C\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #1\n    bl ov83_0224773C\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02242B9C: .word _02247D0C\n    _02242BA0: .word 0x00000844\n    _02242BA4: .word 0x0000073C\n    _02242BA8: .word 0x0000074C"
    );
    #endif
}

void ov83_02242BAC(void) {
    /* Original at 0x02242BAC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #3\n    mov r1, #0x6b\n    bl ListMenuItems_New\n    ldr r1, _02242BE8 ; =0x00000844\n    ldr r5, _02242BEC ; =ov83_02247D6C\n    str r0, [r6, r1]\n    mov r4, #0\n    add r7, r1, #0\n    ldr r0, [r6, r7]\n    ldr r1, [r6, #0x20]\n    ldr r2, [r5]\n    ldr r3, [r5, #4]\n    bl ListMenuItems_AppendFromMsgData\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, #3\n    blo _02242BC2\n    mov r0, #0xd\n    str r0, [sp]\n    add r0, r6, #0\n    mov r1, #3\n    mov r2, #0x11\n    mov r3, #8\n    bl ov83_02242AEC\n    pop {r3, r4, r5, r6, r7, pc}\n    _02242BE8: .word 0x00000844\n    _02242BEC: .word ov83_02247D6C"
    );
    #endif
}

void ov83_02242BF0(void) {
    /* Original at 0x02242BF0 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    mov r0, #5\n    mov r1, #0x6b\n    bl ListMenuItems_New\n    ldr r1, _02242C9C ; =0x00000844\n    mov r2, #0\n    str r0, [r4, r1]\n    ldr r0, _02242CA0 ; =0x0000050C\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, r0]\n    bl ov83_0224777C\n    mov r5, #0\n    add r7, r0, #0\n    add r6, r5, #0\n    mov r0, #0xc\n    add r1, r6, #0\n    mul r1, r0\n    ldr r0, _02242CA4 ; =ov83_02247F4C\n    add r2, r0, r1\n    ldr r3, [r2, #8]\n    cmp r3, #4\n    bhi _02242C6A\n    add r0, r3, r3\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02242C2E: ; jump table\n    ldr r0, [r2]\n    cmp r7, r0\n    blo _02242C7C\n    ldr r0, _02242C9C ; =0x00000844\n    ldr r1, [r4, #0x20]\n    ldr r0, [r4, r0]\n    ldr r2, [r2, #4]\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    b _02242C7C\n    cmp r7, #3\n    beq _02242C7C\n    ldr r0, _02242C9C ; =0x00000844\n    ldr r1, [r4, #0x20]\n    ldr r0, [r4, r0]\n    ldr r2, [r2, #4]\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    b _02242C7C\n    ldr r0, _02242C9C ; =0x00000844\n    ldr r1, [r4, #0x20]\n    ldr r0, [r4, r0]\n    ldr r2, [r2, #4]\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    add r0, r6, #1\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    cmp r6, #5\n    blo _02242C12\n    ldr r3, _02242CA8 ; =ov83_02248008\n    mov r0, #0xd\n    ldrb r3, [r3, r5]\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0x11\n    bl ov83_02242AEC\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02242C9C: .word 0x00000844\n    _02242CA0: .word 0x0000050C\n    _02242CA4: .word ov83_02247F4C\n    _02242CA8: .word ov83_02248008"
    );
    #endif
}

void ov83_02242CAC(void) {
    /* Original at 0x02242CAC */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #4\n    mov r1, #0x6b\n    bl ListMenuItems_New\n    ldr r1, _02242D4C ; =0x00000844\n    mov r2, #1\n    str r0, [r5, r1]\n    ldr r0, _02242D50 ; =0x0000050C\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    bl ov83_0224777C\n    mov r4, #0\n    add r7, r0, #0\n    add r6, r4, #0\n    mov r0, #0xc\n    add r1, r6, #0\n    mul r1, r0\n    ldr r0, _02242D54 ; =ov83_02247EB0\n    add r2, r0, r1\n    ldr r3, [r2, #8]\n    cmp r3, #6\n    beq _02242CE8\n    cmp r3, #7\n    beq _02242CE8\n    cmp r3, #8\n    beq _02242D02\n    b _02242D1A\n    ldr r0, [r2]\n    cmp r7, r0\n    blo _02242D2C\n    ldr r0, _02242D4C ; =0x00000844\n    ldr r1, [r5, #0x20]\n    ldr r0, [r5, r0]\n    ldr r2, [r2, #4]\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    b _02242D2C\n    cmp r7, #3\n    beq _02242D2C\n    ldr r0, _02242D4C ; =0x00000844\n    ldr r1, [r5, #0x20]\n    ldr r0, [r5, r0]\n    ldr r2, [r2, #4]\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    b _02242D2C\n    ldr r0, _02242D4C ; =0x00000844\n    ldr r1, [r5, #0x20]\n    ldr r0, [r5, r0]\n    ldr r2, [r2, #4]\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #1\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    cmp r6, #4\n    blo _02242CCE\n    ldr r3, _02242D58 ; =ov83_02248008\n    mov r0, #0xd\n    ldrb r3, [r3, r4]\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x11\n    bl ov83_02242AEC\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02242D4C: .word 0x00000844\n    _02242D50: .word 0x0000050C\n    _02242D54: .word ov83_02247EB0\n    _02242D58: .word ov83_02248008"
    );
    #endif
}

void ov83_02242D5C(void) {
    /* Original at 0x02242D5C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #9]\n    mov r1, #1\n    bl ov80_02237B24\n    add r4, r0, #0\n    ldr r0, _02242DA0 ; =0x0000073C\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    bl ov83_0224773C\n    ldr r0, _02242DA4 ; =0x0000074C\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    bl ov83_0224773C\n    mov r0, #0x21\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl ov83_02247CE8\n    ldr r0, _02242DA8 ; =0x00000844\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    ldrb r1, [r5, #0xe]\n    mov r0, #0x10\n    bic r1, r0\n    strb r1, [r5, #0xe]\n    pop {r3, r4, r5, pc}\n    nop\n    _02242DA0: .word 0x0000073C\n    _02242DA4: .word 0x0000074C\n    _02242DA8: .word 0x00000844"
    );
    #endif
}

void ov83_02242DAC(void) {
    /* Original at 0x02242DAC */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    mov r1, #0x21\n    add r4, r0, #0\n    lsl r1, r1, #6\n    ldr r2, [r4, r1]\n    add r1, #8\n    add r2, #0x24\n    ldrb r2, [r2]\n    ldr r1, [r4, r1]\n    cmp r1, r2\n    beq _02242DF4\n    mov r3, #1\n    str r3, [sp]\n    mov r1, #0xff\n    str r1, [sp, #4]\n    lsl r5, r2, #1\n    ldr r2, _02242DF8 ; =ov83_02247D1E\n    str r3, [sp, #8]\n    mov r1, #2\n    str r1, [sp, #0xc]\n    mov r1, #0xf\n    str r1, [sp, #0x10]\n    add r1, r4, #0\n    ldrh r2, [r2, r5]\n    add r1, #0xb0\n    str r3, [sp, #0x14]\n    bl ov83_0223FC48\n    mov r0, #0x21\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    add r0, #8\n    add r1, #0x24\n    ldrb r1, [r1]\n    str r1, [r4, r0]\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    _02242DF8: .word ov83_02247D1E"
    );
    #endif
}

void ov83_02242DFC(void) {
    /* Original at 0x02242DFC */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #0x21\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    add r1, #0x24\n    ldrb r2, [r1]\n    add r1, r0, #0\n    add r1, #8\n    ldr r1, [r4, r1]\n    cmp r1, r2\n    beq _02242E80\n    add r0, r0, #4\n    ldr r1, [r4, r0]\n    lsl r0, r2, #3\n    add r0, r1, r0\n    ldr r1, [r0, #4]\n    cmp r1, #4\n    beq _02242E2E\n    mov r0, #1\n    mvn r0, r0\n    cmp r1, r0\n    beq _02242E4E\n    b _02242E52\n    ldr r0, _02242E84 ; =0x0000050C\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r2, #0\n    bl ov83_0224777C\n    cmp r0, #3\n    bne _02242E42\n    mov r2, #0x1b\n    b _02242E54\n    cmp r0, #1\n    bne _02242E4A\n    mov r2, #0x19\n    b _02242E54\n    mov r2, #0x1a\n    b _02242E54\n    mov r2, #0x1c\n    b _02242E54\n    mov r2, #0x18\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    add r1, r4, #0\n    str r3, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    add r1, #0xb0\n    str r3, [sp, #0x14]\n    bl ov83_0223FC48\n    mov r0, #0x21\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    add r0, #8\n    add r1, #0x24\n    ldrb r1, [r1]\n    str r1, [r4, r0]\n    add sp, #0x18\n    pop {r4, pc}\n    _02242E84: .word 0x0000050C"
    );
    #endif
}

void ov83_02242E88(void) {
    /* Original at 0x02242E88 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #0x21\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    add r1, #0x24\n    ldrb r2, [r1]\n    add r1, r0, #0\n    add r1, #8\n    ldr r1, [r4, r1]\n    cmp r1, r2\n    beq _02242F10\n    add r0, r0, #4\n    ldr r1, [r4, r0]\n    lsl r0, r2, #3\n    add r0, r1, r0\n    ldr r0, [r0, #4]\n    cmp r0, #6\n    beq _02242EBA\n    cmp r0, #7\n    beq _02242EBE\n    cmp r0, #8\n    beq _02242EC2\n    b _02242EE2\n    mov r2, #0x30\n    b _02242EE4\n    mov r2, #0x31\n    b _02242EE4\n    ldr r0, _02242F14 ; =0x0000050C\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r2, #1\n    bl ov83_0224777C\n    cmp r0, #3\n    bne _02242ED6\n    mov r2, #0x34\n    b _02242EE4\n    cmp r0, #1\n    bne _02242EDE\n    mov r2, #0x32\n    b _02242EE4\n    mov r2, #0x33\n    b _02242EE4\n    mov r2, #0x35\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    add r1, r4, #0\n    str r3, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    add r1, #0xb0\n    str r3, [sp, #0x14]\n    bl ov83_0223FC48\n    mov r0, #0x21\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    add r0, #8\n    add r1, #0x24\n    ldrb r1, [r1]\n    str r1, [r4, r0]\n    add sp, #0x18\n    pop {r4, pc}\n    _02242F14: .word 0x0000050C"
    );
    #endif
}

void ov83_02242F18(void) {
    /* Original at 0x02242F18 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _02242F28 ; =0x00000864\n    mov r3, #0\n    strh r1, [r0, r2]\n    add r1, r2, #2\n    strb r3, [r0, r1]\n    add r1, r2, #3\n    strb r3, [r0, r1]\n    bx lr\n    _02242F28: .word 0x00000864"
    );
    #endif
}

void ov83_02242F2C(void) {
    /* Original at 0x02242F2C */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    ldr r1, _02242FD8 ; =0x00000864\n    add r4, r0, #0\n    ldrh r0, [r4, r1]\n    ldr r2, _02242FDC ; =ov83_02247E64\n    lsl r0, r0, #2\n    add r3, r2, r0\n    add r0, r1, #2\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _02242F4E\n    cmp r0, #1\n    beq _02242F78\n    cmp r0, #2\n    beq _02242FBA\n    b _02242FD0\n    ldrb r0, [r3, #2]\n    mov r1, #2\n    str r0, [sp]\n    ldrb r0, [r3, #3]\n    str r0, [sp, #4]\n    mov r0, #6\n    str r0, [sp, #8]\n    ldrb r2, [r3]\n    ldrb r3, [r3, #1]\n    ldr r0, [r4, #0x4c]\n    bl BgTilemapRectChangePalette\n    ldr r0, [r4, #0x4c]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, _02242FE0 ; =0x00000866\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _02242FD0\n    add r0, r1, #3\n    ldrb r0, [r4, r0]\n    add r2, r0, #1\n    add r0, r1, #3\n    strb r2, [r4, r0]\n    ldrb r0, [r4, r0]\n    cmp r0, #4\n    bne _02242FD0\n    ldrb r0, [r3, #2]\n    mov r1, #2\n    str r0, [sp]\n    ldrb r0, [r3, #3]\n    str r0, [sp, #4]\n    mov r0, #5\n    str r0, [sp, #8]\n    ldrb r2, [r3]\n    ldrb r3, [r3, #1]\n    ldr r0, [r4, #0x4c]\n    bl BgTilemapRectChangePalette\n    ldr r0, [r4, #0x4c]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, _02242FE4 ; =0x00000867\n    mov r1, #0\n    strb r1, [r4, r0]\n    sub r1, r0, #1\n    ldrb r1, [r4, r1]\n    sub r0, r0, #1\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _02242FD0\n    add r0, r1, #3\n    ldrb r0, [r4, r0]\n    add r2, r0, #1\n    add r0, r1, #3\n    strb r2, [r4, r0]\n    ldrb r0, [r4, r0]\n    cmp r0, #2\n    bne _02242FD0\n    add sp, #0xc\n    mov r0, #0\n    pop {r3, r4, pc}\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _02242FD8: .word 0x00000864\n    _02242FDC: .word ov83_02247E64\n    _02242FE0: .word 0x00000866\n    _02242FE4: .word 0x00000867"
    );
    #endif
}

void ov83_02242FE8(void) {
    /* Original at 0x02242FE8 */
    /* Requires manual decompilation - 123 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _022430F0 ; =FS_OVERLAY_ID(OVY_80)\n    mov r1, #2\n    bl HandleLoadOverlay\n    bl ov83_02243F9C\n    mov r0, #3\n    mov r1, #0x6b\n    lsl r2, r0, #0x10\n    bl Heap_Create\n    ldr r1, _022430F4 ; =0x00000614\n    add r0, r4, #0\n    mov r2, #0x6b\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _022430F4 ; =0x00000614\n    mov r1, #0\n    add r5, r0, #0\n    bl memset\n    mov r0, #0x6b\n    bl BgConfig_Alloc\n    str r0, [r5, #0x4c]\n    add r0, r4, #0\n    str r4, [r5]\n    bl OverlayManager_GetArgs\n    add r4, r0, #0\n    mov r0, #0xaf\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    ldr r0, [r5, r0]\n    bl sub_02030CC8\n    mov r1, #0xb\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    sub r0, r1, #4\n    ldr r0, [r5, r0]\n    bl sub_02030E08\n    mov r1, #0xb1\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldrb r0, [r4, #4]\n    add r2, r4, #0\n    add r2, #0x20\n    strb r0, [r5, #9]\n    ldr r0, _022430F8 ; =0x00000548\n    sub r1, #8\n    str r2, [r5, r0]\n    ldr r0, [r5, r1]\n    bl Save_PlayerData_GetOptionsAddr\n    mov r1, #0xae\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r3, r4, #0\n    ldr r2, [r4, #0x1c]\n    ldr r0, _022430FC ; =0x0000055C\n    add r3, #8\n    str r2, [r5, r0]\n    add r2, r0, #0\n    sub r2, #0x10\n    str r3, [r5, r2]\n    add r3, r4, #0\n    add r2, r0, #0\n    add r3, #0xc\n    sub r2, #0xc\n    str r3, [r5, r2]\n    add r3, r4, #0\n    add r2, r0, #0\n    add r3, #0x10\n    sub r2, #8\n    str r3, [r5, r2]\n    add r3, r4, #0\n    sub r2, r0, #4\n    add r3, #0x14\n    str r3, [r5, r2]\n    mov r2, #0xff\n    strb r2, [r5, #0x11]\n    ldrh r2, [r4, #0x28]\n    add r0, #0x5e\n    strh r2, [r5, r0]\n    add r0, r1, #4\n    ldr r0, [r5, r0]\n    bl Save_Frontier_GetStatic\n    str r0, [r5, #4]\n    ldr r0, _02243100 ; =0x000005B7\n    mov r3, #0\n    mov r2, #1\n    add r1, r5, r3\n    add r3, r3, #1\n    strb r2, [r1, r0]\n    cmp r3, #3\n    blt _022430AA\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _022430C2\n    mov r0, #3\n    b _022430C4\n    mov r0, #4\n    strb r0, [r5, #0x14]\n    mov r0, #4\n    strb r0, [r5, #0x15]\n    ldrb r0, [r5, #0x15]\n    mov r1, #0\n    sub r0, r0, #1\n    strb r0, [r5, #0xc]\n    ldr r0, _02243104 ; =0x000005B4\n    strb r1, [r5, r0]\n    add r0, r5, #0\n    bl ov83_02243FD4\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _022430EC\n    add r0, r5, #0\n    bl sub_02096910\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _022430F0: .word FS_OVERLAY_ID(OVY_80)\n    _022430F4: .word 0x00000614\n    _022430F8: .word 0x00000548\n    _022430FC: .word 0x0000055C\n    _02243100: .word 0x000005B7\n    _02243104: .word 0x000005B4"
    );
    #endif
}

void ov83_02243108(void) {
    /* Original at 0x02243108 */
    /* Requires manual decompilation - 144 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, _02243260 ; =0x000005B6\n    add r4, r0, #0\n    ldrb r2, [r4, r1]\n    cmp r2, #1\n    bne _02243176\n    ldr r2, [r5]\n    cmp r2, #1\n    bne _022431A2\n    mov r2, #0\n    strb r2, [r4, r1]\n    bl ov83_02245074\n    add r0, r4, #0\n    bl ov83_022459A0\n    ldr r0, _02243264 ; =0x00000504\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02243142\n    bl ov83_0224753C\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #0xae\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02247944\n    ldr r0, [r4, #0x24]\n    mov r1, #0\n    bl ov80_0222A7CC\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r4, #0xa]\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #3\n    bl ov83_02244CD4\n    b _022431A2\n    ldrb r0, [r4, #0x11]\n    cmp r0, #0xff\n    beq _022431A2\n    ldr r0, [r5]\n    cmp r0, #1\n    beq _02243186\n    cmp r0, #3\n    bne _022431A2\n    ldr r0, _02243260 ; =0x000005B6\n    mov r1, #0\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    bl ov83_02245074\n    add r0, r4, #0\n    bl ov83_022459A0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #2\n    bl ov83_02244CD4\n    ldr r0, [r5]\n    cmp r0, #4\n    bhi _0224324C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022431B4: ; jump table\n    add r0, r4, #0\n    bl ov83_022432B4\n    cmp r0, #1\n    bne _0224324C\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl ov83_02244CD4\n    b _0224324C\n    add r0, r4, #0\n    bl ov83_022433F8\n    cmp r0, #1\n    bne _0224324C\n    ldrb r0, [r4, #0x10]\n    cmp r0, #1\n    bne _022431F0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #2\n    bl ov83_02244CD4\n    b _0224324C\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _02243206\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #3\n    bl ov83_02244CD4\n    b _0224324C\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #4\n    bl ov83_02244CD4\n    b _0224324C\n    add r0, r4, #0\n    bl ov83_02243C88\n    cmp r0, #1\n    bne _0224324C\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl ov83_02244CD4\n    b _0224324C\n    add r0, r4, #0\n    bl ov83_02243D7C\n    cmp r0, #1\n    bne _0224324C\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #4\n    bl ov83_02244CD4\n    b _0224324C\n    add r0, r4, #0\n    bl ov83_02243DE8\n    cmp r0, #1\n    bne _0224324C\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov83_022459AC\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _02243260: .word 0x000005B6\n    _02243264: .word 0x00000504"
    );
    #endif
}

void ov83_02243268(void) {
    /* Original at 0x02243268 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, _022432A8 ; =0x00000548\n    ldrb r1, [r4, #0xd]\n    ldr r0, [r4, r0]\n    strh r1, [r0]\n    ldr r0, _022432AC ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    bl GF_DestroyVramTransferManager\n    add r0, r4, #0\n    bl ov83_02243E30\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0x6b\n    bl Heap_Destroy\n    ldr r0, _022432B0 ; =FS_OVERLAY_ID(OVY_80)\n    bl UnloadOverlayByID\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _022432A8: .word 0x00000548\n    _022432AC: .word 0x04000050\n    _022432B0: .word FS_OVERLAY_ID(OVY_80)"
    );
    #endif
}

void ov83_022432B4(void) {
    /* Original at 0x022432B4 */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldrb r0, [r4, #8]\n    cmp r0, #4\n    bhi _022433B0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022432CC: ; jump table\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _022432EA\n    bl sub_02037BEC\n    mov r0, #0xd8\n    bl sub_02037AC0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _022433B0\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _02243312\n    mov r0, #0xd8\n    bl sub_02037B38\n    cmp r0, #1\n    bne _022433B0\n    bl sub_02037BEC\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _022433B0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _022433B0\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _0224333A\n    add r0, r4, #0\n    mov r1, #0x14\n    mov r2, #0\n    bl ov83_022450A8\n    cmp r0, #1\n    bne _022433B0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _022433B0\n    add r0, r4, #0\n    bl ov83_022433B8\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #1\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _022433B0\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _0224339A\n    ldrb r0, [r4, #0x17]\n    cmp r0, #2\n    blo _022433B0\n    mov r0, #0\n    strb r0, [r4, #0x17]\n    add r0, r4, #0\n    bl ov83_022433B8\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #1\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _022433B0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _022433B0\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _022433B0\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov83_022433B8(void) {
    /* Original at 0x022433B8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r5, #0\n    add r4, #0x50\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov83_02245584\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov83_022453DC\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x80\n    bl ov83_022448E4\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x70\n    bl ov83_022449D4\n    add r0, r5, #0\n    bl ov83_02244BEC\n    bl GfGfx_BothDispOn\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_022433F8(void) {
    /* Original at 0x022433F8 */
    /* Requires manual decompilation - 883 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #0x12\n    bhi _022434BA\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0224340E: ; jump table\n    mov r0, #0\n    strb r0, [r4, #0xb]\n    mov r0, #1\n    strb r0, [r4, #8]\n    ldrb r0, [r4, #0xf]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1b\n    cmp r0, #1\n    bne _02243456\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02245094\n    add r0, r4, #0\n    bl ov83_02244BEC\n    b _02243484\n    cmp r0, #2\n    bne _0224347C\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02245094\n    add r0, r4, #0\n    bl ov83_02244C9C\n    mov r0, #0x15\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    mov r1, #0xc8\n    mov r2, #0x69\n    bl ov83_02247630\n    mov r0, #6\n    strb r0, [r4, #8]\n    b _02243484\n    cmp r0, #3\n    bne _02243484\n    mov r0, #0xe\n    strb r0, [r4, #8]\n    ldrb r1, [r4, #0xf]\n    mov r0, #0xf8\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    b _02243C7A\n    mov r0, #0x5f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov83_02247AD4\n    cmp r0, #4\n    bhi _022434B2\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022434A8: ; jump table\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    beq _022434D8\n    b _02243C7A\n    add r0, r4, #0\n    bl ov83_02244C4C\n    add r0, r4, #0\n    bl ov83_02244C58\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldr r0, _022437F0 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldrb r1, [r4, #0xd]\n    ldrb r0, [r4, #0x15]\n    cmp r1, r0\n    beq _0224351A\n    mov r0, #0x5f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov83_02247B04\n    ldrb r2, [r4, #0xd]\n    add r0, r4, #0\n    mov r1, #4\n    bl ov83_022469D8\n    b _02243C7A\n    ldr r0, _022437F4 ; =0x000005F8\n    ldr r0, [r4, r0]\n    bl TouchscreenListMenu_HandleInput\n    ldr r1, _022437F0 ; =0x000005DC\n    add r5, r0, #0\n    bl ov83_022477B0\n    add r0, r4, #0\n    bl ov83_02246CC0\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    bhi _02243536\n    bhs _0224360C\n    cmp r5, #6\n    bls _0224351C\n    b _02243C7A\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02243528: ; jump table\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    b _02243C7A\n    strb r5, [r4, #0x13]\n    ldrb r0, [r4, #0x14]\n    ldrb r1, [r4, #0xd]\n    bl ov83_02247768\n    ldr r1, _022437F8 ; =0x0000054C\n    ldr r1, [r4, r1]\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _02243584\n    add r0, r4, #0\n    bl ov83_02244C88\n    add r0, r4, #0\n    bl ov83_022453C0\n    mov r1, #0\n    add r0, r4, #0\n    mov r2, #1\n    mov r3, #4\n    str r1, [sp]\n    bl ov83_02244A98\n    add r0, r4, #0\n    mov r1, #0x10\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r4, #0xa]\n    add r0, r4, #0\n    bl ov83_02244A74\n    mov r0, #3\n    strb r0, [r4, #8]\n    b _02243C7A\n    add r0, r4, #0\n    bl ov83_02244C88\n    ldrb r0, [r4, #0x14]\n    ldrb r1, [r4, #0xd]\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _022437FC ; =0x0000055C\n    ldr r0, [r4, r0]\n    bl Party_GetMonByIndex\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov83_022453C0\n    add r0, r5, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov83_02244AB0\n    add r0, r4, #0\n    mov r1, #0x14\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r4, #0xa]\n    mov r0, #0x10\n    strb r0, [r4, #8]\n    b _02243C7A\n    add r0, r4, #0\n    strb r5, [r4, #0x13]\n    bl ov83_02244C88\n    add r0, r4, #0\n    bl ov83_022453C0\n    mov r2, #0x17\n    lsl r2, r2, #6\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov83_02244AB0\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r4, #0xa]\n    add r0, r4, #0\n    bl ov83_02244A88\n    mov r0, #4\n    strb r0, [r4, #8]\n    b _02243C7A\n    add r0, r4, #0\n    bl ov83_02244C88\n    add r0, r4, #0\n    bl ov83_02244C9C\n    mov r0, #6\n    strb r0, [r4, #8]\n    b _02243C7A\n    add r0, r4, #0\n    bl ov83_02244C88\n    add r0, r4, #0\n    bl ov83_02244BEC\n    mov r0, #0\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldr r0, _02243800 ; =0x00000604\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _02243630\n    cmp r0, #2\n    beq _022436B8\n    b _02243C7A\n    ldr r0, _02243800 ; =0x00000604\n    add r0, r4, r0\n    bl ov83_022478B4\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02245094\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    add r5, r0, #0\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    bl FrontierSave_GetStat\n    cmp r0, #1\n    bhs _02243678\n    add r0, r4, #0\n    bl ov83_022453C0\n    add r0, r4, #0\n    mov r1, #0x1c\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r4, #0xa]\n    mov r0, #0x10\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _022436B2\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, #4]\n    mov r2, #1\n    bl ov80_02237FA4\n    add r1, r4, #0\n    add r0, r4, #0\n    add r1, #0x50\n    bl ov83_022453DC\n    ldrb r1, [r4, #0xd]\n    add r0, r4, #0\n    bl ov83_02245748\n    add r0, r4, #0\n    bl ov83_02246988\n    add r0, r4, #0\n    mov r1, #0\n    bl ov83_02246114\n    mov r0, #0xb\n    strb r0, [r4, #8]\n    b _02243C7A\n    mov r0, #1\n    strb r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}\n    ldr r0, _02243800 ; =0x00000604\n    add r0, r4, r0\n    bl ov83_022478B4\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02245094\n    add r0, r4, #0\n    bl ov83_02244C58\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldr r0, _022437F4 ; =0x000005F8\n    ldr r0, [r4, r0]\n    bl TouchscreenListMenu_HandleInput\n    ldr r1, _022437F0 ; =0x000005DC\n    add r5, r0, #0\n    bl ov83_022477B0\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    bhi _02243700\n    bhs _02243706\n    cmp r5, #2\n    bhi _022436FE\n    cmp r5, #0\n    beq _02243720\n    cmp r5, #1\n    beq _0224377C\n    cmp r5, #2\n    beq _02243706\n    b _02243C7A\n    add r0, r0, #1\n    cmp r5, r0\n    b _02243C7A\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02245094\n    add r0, r4, #0\n    bl ov83_02244A90\n    add r0, r4, #0\n    bl ov83_02244C58\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    add r5, r0, #0\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    bl FrontierSave_GetStat\n    add r0, r4, #0\n    bl ov83_02244A90\n    ldrb r0, [r4, #0x14]\n    ldrb r1, [r4, #0xd]\n    bl ov83_02247768\n    mov r1, #0x55\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    ldrb r0, [r1, r0]\n    cmp r0, #1\n    bne _0224376E\n    add r0, r4, #0\n    bl ov83_022453C0\n    add r0, r4, #0\n    mov r1, #0x1d\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r4, #0xa]\n    mov r0, #0x10\n    strb r0, [r4, #8]\n    b _02243C7A\n    add r0, r4, #0\n    mov r1, #1\n    bl ov83_02245554\n    mov r0, #5\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    add r5, r0, #0\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    bl FrontierSave_GetStat\n    add r0, r4, #0\n    bl ov83_02244A90\n    ldrb r0, [r4, #0x14]\n    ldrb r1, [r4, #0xd]\n    bl ov83_02247768\n    mov r1, #0x55\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    ldrb r0, [r1, r0]\n    cmp r0, #2\n    bne _022437CA\n    add r0, r4, #0\n    bl ov83_022453C0\n    add r0, r4, #0\n    mov r1, #0x1e\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r4, #0xa]\n    mov r0, #0x10\n    strb r0, [r4, #8]\n    b _02243C7A\n    add r0, r4, #0\n    mov r1, #2\n    bl ov83_02245554\n    mov r0, #5\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldr r0, _02243800 ; =0x00000604\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _022437EA\n    cmp r0, #2\n    beq _02243892\n    b _02243C7A\n    ldr r0, _02243800 ; =0x00000604\n    b _02243804\n    nop\n    _022437F0: .word 0x000005DC\n    _022437F4: .word 0x000005F8\n    _022437F8: .word 0x0000054C\n    _022437FC: .word 0x0000055C\n    _02243800: .word 0x00000604\n    add r0, r4, r0\n    bl ov83_022478B4\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    add r5, r0, #0\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    bl FrontierSave_GetStat\n    add r5, r0, #0\n    ldrb r0, [r4, #0xe]\n    bl ov83_02245068\n    cmp r5, r0\n    bhs _0224384C\n    add r0, r4, #0\n    bl ov83_022453C0\n    add r0, r4, #0\n    mov r1, #0x1c\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r4, #0xa]\n    mov r0, #0x10\n    strb r0, [r4, #8]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r4, #0xe]\n    strb r0, [r4, #0x12]\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _0224388C\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02245094\n    ldrb r0, [r4, #0xe]\n    bl ov83_02245068\n    add r2, r0, #0\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, #4]\n    bl ov80_02237FA4\n    add r1, r4, #0\n    add r0, r4, #0\n    add r1, #0x50\n    bl ov83_022453DC\n    ldrb r1, [r4, #0xd]\n    ldrb r2, [r4, #0xe]\n    add r0, r4, #0\n    bl ov83_02245838\n    mov r0, #0xc\n    strb r0, [r4, #8]\n    b _02243C7A\n    mov r0, #1\n    strb r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}\n    ldr r0, _02243BA8 ; =0x00000604\n    add r0, r4, r0\n    bl ov83_022478B4\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02245094\n    add r0, r4, #0\n    bl ov83_02244C58\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldr r0, _02243BAC ; =0x000005F8\n    ldr r0, [r4, r0]\n    bl TouchscreenListMenu_HandleInput\n    ldr r1, _02243BB0 ; =0x000005DC\n    add r5, r0, #0\n    bl ov83_022477B0\n    add r0, r4, #0\n    bl ov83_02246D40\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    bhi _022438E2\n    bhs _022438E8\n    cmp r5, #5\n    bhi _022438E0\n    cmp r5, #3\n    blo _022438E0\n    beq _02243902\n    cmp r5, #4\n    beq _0224394E\n    cmp r5, #5\n    beq _022439C0\n    b _02243C7A\n    add r0, r0, #1\n    cmp r5, r0\n    b _02243C7A\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02245094\n    add r0, r4, #0\n    bl ov83_02244CCC\n    add r0, r4, #0\n    bl ov83_02244C58\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _02243C7A\n    strb r5, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02244CCC\n    ldrb r0, [r4, #0x14]\n    ldrb r1, [r4, #0xd]\n    bl ov83_02247768\n    ldr r1, _02243BB4 ; =0x00000554\n    ldr r1, [r4, r1]\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _02243948\n    add r0, r4, #0\n    bl ov83_022453C0\n    mov r1, #0\n    add r0, r4, #0\n    mov r2, #2\n    mov r3, #4\n    str r1, [sp]\n    bl ov83_02244A98\n    add r0, r4, #0\n    mov r1, #0x2b\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r4, #0xa]\n    add r0, r4, #0\n    bl ov83_02244A74\n    mov r0, #7\n    strb r0, [r4, #8]\n    b _02243C7A\n    mov r0, #0x11\n    strb r0, [r4, #8]\n    b _02243C7A\n    add r0, r4, #0\n    strb r5, [r4, #0x13]\n    bl ov83_02244CCC\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r2, #2\n    bl ov83_0224777C\n    cmp r0, #1\n    bne _0224397C\n    add r0, r4, #0\n    mov r1, #0x2a\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r4, #0xa]\n    mov r0, #0xf\n    strb r0, [r4, #8]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r4, #0x14]\n    ldrb r1, [r4, #0xd]\n    bl ov83_02247768\n    ldr r1, _02243BB8 ; =0x00000558\n    ldr r1, [r4, r1]\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _022439BA\n    add r0, r4, #0\n    bl ov83_022453C0\n    mov r1, #0\n    add r0, r4, #0\n    mov r2, #5\n    mov r3, #4\n    str r1, [sp]\n    bl ov83_02244A98\n    add r0, r4, #0\n    mov r1, #0x4f\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r4, #0xa]\n    add r0, r4, #0\n    bl ov83_02244A74\n    mov r0, #8\n    strb r0, [r4, #8]\n    b _02243C7A\n    mov r0, #0x12\n    strb r0, [r4, #8]\n    b _02243C7A\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r2, #2\n    bl ov83_0224777C\n    cmp r0, #2\n    bne _022439EC\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02245094\n    add r0, r4, #0\n    bl ov83_02244CCC\n    add r0, r4, #0\n    bl ov83_02244C58\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _02243C7A\n    strb r5, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02244CCC\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    add r5, r0, #0\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    bl FrontierSave_GetStat\n    mov r1, #0\n    add r0, r4, #0\n    mov r2, #0x32\n    mov r3, #4\n    str r1, [sp]\n    bl ov83_02244A98\n    add r0, r4, #0\n    mov r1, #0x5b\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r4, #0xa]\n    add r0, r4, #0\n    bl ov83_02244A74\n    mov r0, #9\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldr r0, _02243BA8 ; =0x00000604\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _02243A48\n    cmp r0, #2\n    beq _02243A62\n    b _02243C7A\n    ldr r0, _02243BA8 ; =0x00000604\n    add r0, r4, r0\n    bl ov83_022478B4\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x2e\n    bl ov83_02245A40\n    cmp r0, #1\n    bne _02243A86\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, _02243BA8 ; =0x00000604\n    add r0, r4, r0\n    bl ov83_022478B4\n    add r0, r4, #0\n    bl ov83_02244C9C\n    mov r0, #6\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldr r0, _02243BA8 ; =0x00000604\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _02243A88\n    cmp r0, #2\n    beq _02243AA2\n    b _02243C7A\n    ldr r0, _02243BA8 ; =0x00000604\n    add r0, r4, r0\n    bl ov83_022478B4\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0x52\n    bl ov83_02245A40\n    cmp r0, #1\n    bne _02243AC6\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, _02243BA8 ; =0x00000604\n    add r0, r4, r0\n    bl ov83_022478B4\n    add r0, r4, #0\n    bl ov83_02244C9C\n    mov r0, #6\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldr r0, _02243BA8 ; =0x00000604\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _02243AC8\n    cmp r0, #2\n    beq _02243B46\n    b _02243C7A\n    ldr r0, _02243BA8 ; =0x00000604\n    add r0, r4, r0\n    bl ov83_022478B4\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    add r5, r0, #0\n    ldrb r0, [r4, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    bl FrontierSave_GetStat\n    add r5, r0, #0\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, r0]\n    mov r2, #2\n    bl ov83_0224777C\n    cmp r5, #0x32\n    bhs _02243B26\n    mov r0, #0xae\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02247944\n    add r0, r4, #0\n    mov r1, #0x52\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r4, #0xa]\n    mov r0, #0xf\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02243B40\n    ldrb r1, [r4, #0xd]\n    add r0, r4, #0\n    mov r2, #5\n    bl ov83_02245ACC\n    mov r0, #0xa\n    strb r0, [r4, #8]\n    b _02243C7A\n    mov r0, #1\n    strb r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}\n    ldr r0, _02243BA8 ; =0x00000604\n    add r0, r4, r0\n    bl ov83_022478B4\n    add r0, r4, #0\n    bl ov83_02244C9C\n    mov r0, #6\n    strb r0, [r4, #8]\n    b _02243C7A\n    bl ov83_02247CF0\n    cmp r0, #1\n    beq _02243B64\n    b _02243C7A\n    add r0, r4, #0\n    bl ov83_02244C9C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov83_02246114\n    mov r0, #0x15\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    mov r1, #0xc8\n    mov r2, #0x69\n    bl ov83_02247630\n    mov r0, #6\n    strb r0, [r4, #8]\n    b _02243C7A\n    add r1, r4, #0\n    add r1, #0x80\n    bl ov83_022448E4\n    mov r0, #0xc\n    strb r0, [r4, #8]\n    ldrb r1, [r4, #0xd]\n    ldrb r2, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02244E24\n    cmp r0, #1\n    bne _02243C7A\n    mov r0, #0x10\n    strb r0, [r4, #8]\n    b _02243C7A\n    nop\n    _02243BA8: .word 0x00000604\n    _02243BAC: .word 0x000005F8\n    _02243BB0: .word 0x000005DC\n    _02243BB4: .word 0x00000554\n    _02243BB8: .word 0x00000558\n    ldrb r1, [r4, #0xd]\n    ldrb r2, [r4, #0x13]\n    bl ov83_02244E24\n    cmp r0, #1\n    bne _02243C7A\n    mov r0, #0xe\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldrb r0, [r4, #0x13]\n    cmp r0, #3\n    bne _02243BDA\n    mov r0, #0x11\n    strb r0, [r4, #8]\n    b _02243C7A\n    mov r0, #0x12\n    strb r0, [r4, #8]\n    b _02243C7A\n    bl ov83_02247CF0\n    cmp r0, #1\n    bne _02243C7A\n    ldr r0, _02243C80 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov83_02244C9C\n    mov r0, #6\n    strb r0, [r4, #8]\n    b _02243C7A\n    bl ov83_02247CF0\n    cmp r0, #1\n    bne _02243C7A\n    ldr r0, _02243C80 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02245094\n    add r0, r4, #0\n    bl ov83_02244BEC\n    mov r0, #0\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldr r0, _02243C84 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0x20\n    tst r0, r1\n    bne _02243C7A\n    mov r0, #0x10\n    tst r0, r1\n    bne _02243C7A\n    bl ov83_02247CF0\n    cmp r0, #1\n    bne _02243C7A\n    ldr r0, _02243C80 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov83_022459A0\n    add r0, r4, #0\n    bl ov83_02244C58\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _02243C7A\n    ldr r0, _02243C84 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0x20\n    tst r0, r1\n    bne _02243C7A\n    mov r0, #0x10\n    tst r0, r1\n    bne _02243C7A\n    bl ov83_02247CF0\n    cmp r0, #1\n    bne _02243C7A\n    ldr r0, _02243C80 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov83_022459A0\n    add r0, r4, #0\n    bl ov83_02244C58\n    mov r0, #2\n    strb r0, [r4, #8]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02243C80: .word 0x000005DC\n    _02243C84: .word gSystem"
    );
    #endif
}

void ov83_02243C88(void) {
    /* Original at 0x02243C88 */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #5\n    bhi _02243D74\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02243C9E: ; jump table\n    ldrb r2, [r4, #0xf]\n    mov r1, #0xf8\n    bic r2, r1\n    mov r1, #8\n    orr r1, r2\n    strb r1, [r4, #0xf]\n    ldrb r2, [r4, #0xd]\n    mov r1, #0x15\n    bl ov83_022450A8\n    cmp r0, #1\n    bne _02243D74\n    mov r0, #0\n    strb r0, [r4, #0x10]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _02243D74\n    ldrb r1, [r4, #0x11]\n    cmp r1, #0xff\n    beq _02243D74\n    mov r1, #0\n    strb r1, [r4, #0x17]\n    ldrb r2, [r4, #0x13]\n    ldrb r1, [r4, #0x11]\n    cmp r2, #5\n    bne _02243CE8\n    mov r2, #5\n    bl ov83_02245ACC\n    b _02243CEC\n    bl ov83_0224563C\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _02243D74\n    ldrb r0, [r4, #0x15]\n    ldrb r1, [r4, #0x11]\n    bl ov83_0224776C\n    add r1, r0, #0\n    ldrb r2, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02244E24\n    cmp r0, #1\n    bne _02243D74\n    mov r0, #0x1e\n    strb r0, [r4, #0x16]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _02243D74\n    ldrb r0, [r4, #0x16]\n    sub r0, r0, #1\n    strb r0, [r4, #0x16]\n    ldrb r0, [r4, #0x16]\n    cmp r0, #0\n    bne _02243D74\n    bl sub_02037BEC\n    mov r0, #0x85\n    bl sub_02037AC0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _02243D74\n    mov r0, #0x85\n    bl sub_02037B38\n    cmp r0, #1\n    bne _02243D74\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _02243D74\n    ldrb r0, [r4, #0x15]\n    ldrb r1, [r4, #0x11]\n    bl ov83_0224776C\n    add r1, r0, #0\n    ldrb r2, [r4, #0x13]\n    add r0, r4, #0\n    bl ov83_02244F60\n    cmp r0, #1\n    bne _02243D74\n    bl sub_02037BEC\n    mov r0, #0x6b\n    bl sub_020379A0\n    mov r0, #0xff\n    strb r0, [r4, #0x11]\n    ldr r0, _02243D78 ; =0x000005B6\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _02243D78: .word 0x000005B6"
    );
    #endif
}

void ov83_02243D7C(void) {
    /* Original at 0x02243D7C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #8]\n    cmp r1, #0\n    beq _02243D90\n    cmp r1, #1\n    beq _02243DA8\n    cmp r1, #2\n    beq _02243DCA\n    b _02243DE4\n    mov r1, #0x17\n    mov r2, #0\n    bl ov83_022450A8\n    cmp r0, #1\n    bne _02243DE4\n    mov r0, #0x1e\n    strb r0, [r4, #0x16]\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _02243DE4\n    ldrb r0, [r4, #0x16]\n    cmp r0, #0\n    beq _02243DB2\n    sub r0, r0, #1\n    strb r0, [r4, #0x16]\n    ldrb r0, [r4, #0x16]\n    cmp r0, #0\n    bne _02243DE4\n    bl sub_02037BEC\n    mov r0, #0x86\n    bl sub_02037AC0\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _02243DE4\n    mov r0, #0x86\n    bl sub_02037B38\n    cmp r0, #1\n    bne _02243DE4\n    bl sub_02037BEC\n    add r4, #0xc0\n    add r0, r4, #0\n    bl ov83_02245094\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov83_02243DE8(void) {
    /* Original at 0x02243DE8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldrb r0, [r4, #8]\n    cmp r0, #0\n    beq _02243DFA\n    cmp r0, #1\n    beq _02243E1A\n    b _02243E28\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _02243E28\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _02243E28\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov83_02243E30(void) {
    /* Original at 0x02243E30 */
    /* Requires manual decompilation - 148 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r1, _02243F80 ; =0x00000604\n    str r0, [sp]\n    add r0, r0, r1\n    bl ov83_02247858\n    ldr r1, _02243F84 ; =0x000005F4\n    ldr r0, [sp]\n    ldr r0, [r0, r1]\n    bl ov83_02247CC4\n    mov r1, #0x5f\n    ldr r0, [sp]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    bl ov83_02247A18\n    ldr r1, _02243F88 ; =0x00000508\n    ldr r0, [sp]\n    ldr r0, [r0, r1]\n    bl ov83_0224753C\n    ldr r1, _02243F8C ; =0x0000050C\n    ldr r0, [sp]\n    ldr r0, [r0, r1]\n    bl ov83_0224753C\n    mov r1, #0x15\n    ldr r0, [sp]\n    lsl r1, r1, #6\n    ldr r0, [r0, r1]\n    bl ov83_0224753C\n    ldr r1, _02243F90 ; =0x00000544\n    ldr r0, [sp]\n    ldr r0, [r0, r1]\n    bl ov83_0224753C\n    mov r0, #0\n    mov r6, #0x52\n    ldr r7, [sp]\n    str r0, [sp, #4]\n    lsl r6, r6, #4\n    mov r4, #0\n    add r5, r7, #0\n    ldr r0, [r5, r6]\n    bl ov83_0224753C\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _02243E8C\n    ldr r0, [sp, #4]\n    add r7, #8\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #4\n    blt _02243E88\n    ldr r0, [sp]\n    mov r1, #1\n    ldrb r0, [r0, #9]\n    bl ov80_02237B58\n    add r6, r0, #0\n    mov r5, #0\n    cmp r6, #0\n    ble _02243EDC\n    mov r7, #0x51\n    ldr r4, [sp]\n    lsl r7, r7, #4\n    ldr r0, _02243F94 ; =0x000004F4\n    ldr r0, [r4, r0]\n    bl ov83_0224753C\n    ldr r0, _02243F98 ; =0x000004E4\n    ldr r0, [r4, r0]\n    bl ov83_0224753C\n    ldr r0, [r4, r7]\n    bl ov83_0224753C\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, r6\n    blt _02243EBE\n    bl sub_0203A914\n    mov r1, #0x2b\n    ldr r0, [sp]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    mov r1, #2\n    bl PaletteData_FreeBuffers\n    mov r1, #0x2b\n    ldr r0, [sp]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl PaletteData_FreeBuffers\n    mov r1, #0x2b\n    ldr r0, [sp]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    bl PaletteData_Free\n    mov r1, #0x2b\n    ldr r0, [sp]\n    mov r2, #0\n    lsl r1, r1, #4\n    str r2, [r0, r1]\n    add r1, #0x18\n    add r0, r0, r1\n    bl ov83_022471FC\n    ldr r0, [sp]\n    ldr r0, [r0, #0x20]\n    bl DestroyMsgData\n    ldr r0, [sp]\n    ldr r0, [r0, #0x24]\n    bl MessageFormat_Delete\n    ldr r0, [sp]\n    ldr r0, [r0, #0x28]\n    bl String_Delete\n    ldr r0, [sp]\n    ldr r0, [r0, #0x2c]\n    bl String_Delete\n    mov r1, #0xad\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    bl MessagePrinter_Delete\n    mov r0, #4\n    bl FontID_Release\n    ldr r4, [sp]\n    mov r5, #0\n    ldr r0, [r4, #0x30]\n    bl String_Delete\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #3\n    blt _02243F50\n    ldr r0, [sp]\n    mov r1, #1\n    add r0, #0x50\n    bl ov83_0224791C\n    ldr r0, [sp]\n    ldr r0, [r0, #0x4c]\n    bl ov83_0224442C\n    mov r1, #0x56\n    ldr r0, [sp]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    bl NARC_Delete\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02243F80: .word 0x00000604\n    _02243F84: .word 0x000005F4\n    _02243F88: .word 0x00000508\n    _02243F8C: .word 0x0000050C\n    _02243F90: .word 0x00000544\n    _02243F94: .word 0x000004F4\n    _02243F98: .word 0x000004E4"
    );
    #endif
}

void ov83_02243F9C(void) {
    /* Original at 0x02243F9C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetHBlankIntrCB\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _02243FCC ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _02243FD0 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    pop {r3, pc}\n    _02243FCC: .word 0xFFFFE0FF\n    _02243FD0: .word 0x04001000"
    );
    #endif
}

void ov83_02243FD4(void) {
    /* Original at 0x02243FD4 */
    /* Requires manual decompilation - 419 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r5, r0, #0\n    mov r0, #0xb7\n    mov r1, #0x6b\n    bl NARC_New\n    mov r1, #0x56\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov83_02244394\n    add r0, r5, #0\n    bl ov83_02244408\n    mov r0, #4\n    mov r1, #0x6b\n    bl FontID_Alloc\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0x21\n    mov r3, #0x6b\n    bl NewMsgDataFromNarc\n    str r0, [r5, #0x20]\n    mov r0, #0x6b\n    bl MessageFormat_New\n    str r0, [r5, #0x24]\n    mov r0, #0x96\n    lsl r0, r0, #2\n    mov r1, #0x6b\n    bl String_New\n    str r0, [r5, #0x28]\n    mov r0, #0x96\n    lsl r0, r0, #2\n    mov r1, #0x6b\n    bl String_New\n    str r0, [r5, #0x2c]\n    mov r6, #0\n    add r4, r5, #0\n    mov r7, #0x20\n    add r0, r7, #0\n    mov r1, #0x6b\n    bl String_New\n    str r0, [r4, #0x30]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #3\n    blt _02244030\n    mov r1, #7\n    mov r0, #0\n    lsl r1, r1, #6\n    mov r2, #0x6b\n    bl LoadFontPal0\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x6b\n    bl LoadFontPal1\n    mov r0, #1\n    mov r1, #2\n    mov r2, #0\n    mov r3, #0x6b\n    bl MessagePrinter_New\n    mov r1, #0xad\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r1, r5, #0\n    ldr r0, [r5, #0x4c]\n    add r1, #0x50\n    mov r2, #1\n    bl ov83_022478D4\n    add r0, sp, #0x28\n    add r1, sp, #0x2c\n    add r3, sp, #0x28\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, #2\n    add r2, sp, #0x2c\n    add r3, #2\n    bl ov83_02244DF4\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _0224409E\n    mov r0, #0x3c\n    mov r7, #0x40\n    str r0, [sp, #0x1c]\n    b _022440A4\n    mov r0, #0x1c\n    mov r7, #0x20\n    str r0, [sp, #0x1c]\n    ldrb r0, [r5, #9]\n    mov r1, #1\n    bl ov80_02237B58\n    mov r6, #0\n    str r0, [sp, #0x18]\n    cmp r0, #0\n    ble _022441AC\n    add r4, r5, #0\n    mov r0, #7\n    str r0, [sp]\n    ldr r0, [sp, #0x1c]\n    mov r1, #0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #0x3e\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov83_02247454\n    ldr r1, _02244370 ; =0x000004F4\n    str r0, [r4, r1]\n    mov r1, #0\n    mov r0, #0xf\n    str r0, [sp]\n    lsl r0, r7, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #0x4e\n    str r0, [sp, #8]\n    mov r0, #3\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov83_02247454\n    mov r1, #0x51\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    mov r0, #1\n    str r0, [sp]\n    lsl r0, r7, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #0x3a\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    add r1, r6, #0\n    add r0, r5, r0\n    add r1, #0xa\n    mov r2, #0xa\n    mov r3, #5\n    bl ov83_02247454\n    ldr r1, _02244374 ; =0x000004E4\n    str r0, [r4, r1]\n    add r0, r1, #0\n    add r0, #0x78\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    add r1, r0, #0\n    ldr r0, _02244374 ; =0x000004E4\n    ldr r0, [r4, r0]\n    bl ov83_022475EC\n    ldr r0, _02244378 ; =0x0000054C\n    ldr r0, [r5, r0]\n    ldrb r0, [r0, r6]\n    cmp r0, #0\n    ldr r0, _02244370 ; =0x000004F4\n    bne _0224417C\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov83_0224755C\n    ldr r0, _02244374 ; =0x000004E4\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ov83_0224755C\n    mov r0, #0x51\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov83_0224755C\n    b _0224419A\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov83_0224755C\n    ldr r0, _02244374 ; =0x000004E4\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ov83_0224755C\n    mov r0, #0x51\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov83_0224755C\n    ldr r0, [sp, #0x1c]\n    add r6, r6, #1\n    add r0, #0x40\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x18]\n    add r4, r4, #4\n    add r7, #0x40\n    cmp r6, r0\n    blt _022440B6\n    add r0, r5, #0\n    add r1, sp, #0x34\n    add r2, sp, #0x30\n    mov r3, #0\n    bl ov83_02244DA0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [sp, #0x34]\n    mov r1, #0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    add r2, r1, #0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r3, r1, #0\n    str r1, [sp, #0x10]\n    bl ov83_02247454\n    ldr r1, _0224437C ; =0x00000508\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    ldr r1, [sp, #0x34]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    str r1, [sp, #4]\n    ldr r1, [sp, #0x30]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    str r1, [sp, #8]\n    mov r1, #0\n    str r0, [sp, #0xc]\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r2, r1, #0\n    add r3, r1, #0\n    str r1, [sp, #0x10]\n    bl ov83_02247454\n    ldr r1, _02244380 ; =0x0000050C\n    str r0, [r5, r1]\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02244226\n    ldr r0, _02244380 ; =0x0000050C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ov83_0224755C\n    mov r0, #0\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x20]\n    str r5, [sp, #0x24]\n    mov r7, #0\n    ldr r4, [sp, #0x24]\n    add r6, r7, #0\n    add r0, r5, #0\n    add r1, sp, #0x34\n    add r2, sp, #0x30\n    bl ov83_02245CE8\n    mov r0, #0xc\n    str r0, [sp]\n    ldr r1, [sp, #0x34]\n    ldr r0, [sp, #0x20]\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r1, #0\n    ldr r0, [sp, #0x30]\n    add r2, r1, #0\n    add r0, r0, r6\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r3, r1, #0\n    bl ov83_02247454\n    mov r1, #0x52\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r1, #0\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov83_0224755C\n    add r7, r7, #1\n    add r6, #0xc\n    add r4, r4, #4\n    cmp r7, #2\n    blt _02244234\n    ldr r0, [sp, #0x20]\n    add r0, #0x40\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x24]\n    add r0, #8\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x14]\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    cmp r0, #4\n    blt _0224422E\n    add r0, r5, #0\n    bl ov83_02245C80\n    mov r1, #0\n    mov r0, #0xb\n    str r0, [sp]\n    mov r0, #0x14\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    str r1, [sp, #0xc]\n    add r0, r5, r0\n    add r2, r1, #0\n    add r3, r1, #0\n    str r1, [sp, #0x10]\n    bl ov83_02247454\n    mov r1, #0x15\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #0\n    bl ov83_0224755C\n    add r0, r5, #0\n    bl ov83_02245D48\n    add r0, r5, #0\n    bl ov83_02245F24\n    add r0, r5, #0\n    mov r1, #1\n    bl ov83_02246114\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x30\n    str r0, [sp, #4]\n    mov r0, #0x28\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r0, #0xb2\n    str r1, [sp, #0x10]\n    mov r1, #2\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov83_022474C4\n    ldr r1, _02244384 ; =0x00000544\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov83_02246988\n    ldrb r2, [r5, #0x14]\n    add r0, r5, #0\n    mov r1, #1\n    bl ov83_02247A7C\n    mov r1, #0x5f\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r1, #0xb2\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    sub r1, #0x18\n    ldr r1, [r5, r1]\n    bl ov83_02247CB8\n    ldr r1, _02244388 ; =0x000005F4\n    str r0, [r5, r1]\n    add r1, #0x10\n    add r0, r5, r1\n    bl ov83_02247844\n    bl sub_02037474\n    cmp r0, #0\n    beq _02244354\n    mov r0, #1\n    mov r1, #0x10\n    bl G2dRenderer_SetObjCharTransferReservedRegion\n    mov r0, #1\n    bl G2dRenderer_SetPlttTransferReservedRegion\n    bl sub_0203A880\n    mov r0, #0xa\n    str r0, [sp]\n    ldr r0, _0224438C ; =0x04000050\n    mov r1, #0\n    mov r2, #0xe\n    mov r3, #6\n    bl G2x_SetBlendAlpha_\n    ldr r0, _02244390 ; =ov83_02244488\n    add r1, r5, #0\n    bl Main_SetVBlankIntrCB\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    _02244370: .word 0x000004F4\n    _02244374: .word 0x000004E4\n    _02244378: .word 0x0000054C\n    _0224437C: .word 0x00000508\n    _02244380: .word 0x0000050C\n    _02244384: .word 0x00000544\n    _02244388: .word 0x000005F4\n    _0224438C: .word 0x04000050\n    _02244390: .word ov83_02244488"
    );
    #endif
}

void ov83_02244394(void) {
    /* Original at 0x02244394 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _02244400 ; =0x04000304\n    add r4, r0, #0\n    ldrh r1, [r2]\n    ldr r0, _02244404 ; =0xFFFF7FFF\n    and r0, r1\n    strh r0, [r2]\n    bl ov83_022444C0\n    ldr r0, [r4, #0x4c]\n    bl ov83_022444E0\n    mov r0, #0x6b\n    bl PaletteData_Init\n    mov r1, #0x2b\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #2\n    lsl r2, r1, #8\n    mov r3, #0x6b\n    bl PaletteData_AllocBuffers\n    mov r2, #0x2b\n    lsl r2, r2, #4\n    ldr r0, [r4, r2]\n    mov r1, #0\n    sub r2, #0xb0\n    mov r3, #0x6b\n    bl PaletteData_AllocBuffers\n    add r0, r4, #0\n    mov r1, #3\n    bl ov83_0224465C\n    bl ov83_022446D0\n    add r0, r4, #0\n    mov r1, #2\n    bl ov83_02244704\n    bl ov83_0224474C\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    mov r1, #4\n    bl ov83_02244780\n    pop {r4, pc}\n    nop\n    _02244400: .word 0x04000304\n    _02244404: .word 0xFFFF7FFF"
    );
    #endif
}

void ov83_02244408(void) {
    /* Original at 0x02244408 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    add r2, r0, #0\n    ldr r1, _02244428 ; =0x0000055C\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    lsl r2, r2, #0x18\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    lsr r2, r2, #0x18\n    bl ov83_02246E08\n    pop {r4, pc}\n    _02244428: .word 0x0000055C"
    );
    #endif
}

void ov83_0224442C(void) {
    /* Original at 0x0224442C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x1f\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x1f\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r4, #0\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #0\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    bl Heap_Free\n    ldr r2, _02244484 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    pop {r4, pc}\n    nop\n    _02244484: .word 0x04000304"
    );
    #endif
}

void ov83_02244488(void) {
    /* Original at 0x02244488 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2b\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0224449A\n    bl PaletteData_PushTransparentBuffers\n    ldr r0, [r4, #0x4c]\n    bl DoScheduledBgGpuUpdates\n    bl GF_RunVramTransferTasks\n    bl OamManager_ApplyAndResetBuffers\n    ldr r3, _022444B8 ; =0x027E0000\n    ldr r1, _022444BC ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    nop\n    _022444B8: .word 0x027E0000\n    _022444BC: .word 0x00003FF8"
    );
    #endif
}

void ov83_022444C0(void) {
    GfGfx_SetBanks(5);
}

void ov83_022444E0(void) {
    /* Original at 0x022444E0 */
    /* Requires manual decompilation - 163 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0xb8\n    ldr r5, _0224463C ; =ov83_02248044\n    add r3, sp, #0xa8\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _02244640 ; =ov83_02248068\n    add r3, sp, #0x8c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x6b\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02244644 ; =ov83_02248084\n    add r3, sp, #0x70\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x6b\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02244648 ; =ov83_022480A0\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #2\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x6b\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0224464C ; =ov83_022480BC\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #3\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x6b\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02244650 ; =ov83_022480D8\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02244654 ; =ov83_022480F4\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #5\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x6b\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r1, _02244658 ; =0x04000008\n    mov r0, #3\n    ldrh r2, [r1]\n    bic r2, r0\n    strh r2, [r1]\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0xb8\n    pop {r3, r4, r5, pc}\n    _0224463C: .word ov83_02248044\n    _02244640: .word ov83_02248068\n    _02244644: .word ov83_02248084\n    _02244648: .word ov83_022480A0\n    _0224464C: .word ov83_022480BC\n    _02244650: .word ov83_022480D8\n    _02244654: .word ov83_022480F4\n    _02244658: .word 0x04000008"
    );
    #endif
}

void ov83_0224465C(void) {
    /* Original at 0x0224465C */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r4, r1, #0\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    mov r0, #0x56\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #0x30\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _022446AE\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    mov r0, #0x56\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #0x2c\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    mov r0, #0x56\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #0x2d\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_022446D0(void) {
    /* Original at 0x022446D0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r0, #0xb7\n    mov r1, #0x9d\n    add r2, sp, #0\n    mov r3, #0x6b\n    bl GfGfxLoader_GetPlttData\n    add r4, r0, #0\n    ldr r0, [sp]\n    mov r1, #0x80\n    ldr r0, [r0, #0xc]\n    bl DC_FlushRange\n    ldr r0, [sp]\n    mov r1, #0\n    ldr r0, [r0, #0xc]\n    mov r2, #0x80\n    bl GX_LoadBGPltt\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov83_02244704(void) {
    /* Original at 0x02244704 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r4, r1, #0\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    mov r0, #0x56\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #0x30\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    mov r0, #0x56\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #0x2e\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_0224474C(void) {
    /* Original at 0x0224474C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r0, #0xb7\n    mov r1, #0x9d\n    add r2, sp, #0\n    mov r3, #0x6b\n    bl GfGfxLoader_GetPlttData\n    add r4, r0, #0\n    ldr r0, [sp]\n    mov r1, #0x80\n    ldr r0, [r0, #0xc]\n    bl DC_FlushRange\n    ldr r0, [sp]\n    mov r1, #0\n    ldr r0, [r0, #0xc]\n    mov r2, #0x80\n    bl GX_LoadBGPltt\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov83_02244780(void) {
    /* Original at 0x02244780 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r4, r1, #0\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    mov r0, #0x56\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #0x28\n    add r3, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    mov r0, #0x56\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x4c]\n    mov r1, #0x93\n    add r3, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x6b\n    str r0, [sp, #4]\n    mov r0, #0x56\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0xbe\n    mov r2, #4\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_022447E0(void) {
    /* Original at 0x022447E0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r1, sp, #0x38\n    ldrb r1, [r1]\n    add r5, r0, #0\n    add r0, r4, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x20]\n    ldr r2, [r5, #0x2c]\n    add r1, r6, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    ldr r2, [r5, #0x2c]\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x28]\n    add r2, sp, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    add r3, r7, #0\n    str r0, [sp, #4]\n    add r0, sp, #0x38\n    ldrb r1, [r0]\n    ldrb r0, [r2, #0x18]\n    ldrb r2, [r2, #0x1c]\n    lsl r0, r0, #0x18\n    lsl r2, r2, #0x18\n    lsr r0, r0, #8\n    lsr r2, r2, #0x10\n    orr r0, r2\n    orr r0, r1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r1, sp, #0x3c\n    ldrb r1, [r1]\n    ldr r2, [r5, #0x28]\n    add r0, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_0224484C(void) {
    /* Original at 0x0224484C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    add r1, r2, #0\n    ldr r0, [r5, #0x20]\n    ldr r2, [r5, #0x2c]\n    add r6, r3, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    ldr r2, [r5, #0x2c]\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x20]\n    add r2, sp, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    add r3, r6, #0\n    str r0, [sp, #4]\n    add r0, sp, #0x30\n    ldrb r1, [r0]\n    ldrb r0, [r2, #0x18]\n    ldrb r2, [r2, #0x1c]\n    lsl r0, r0, #0x18\n    lsl r2, r2, #0x18\n    lsr r0, r0, #8\n    lsr r2, r2, #0x10\n    orr r0, r2\n    orr r0, r1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r1, sp, #0x34\n    ldrb r1, [r1]\n    ldr r2, [r5, #0x28]\n    add r0, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov83_022448AC(void) {
    /* Original at 0x022448AC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    mov r3, #1\n    add r4, r1, #0\n    str r3, [sp]\n    mov r1, #0xff\n    str r1, [sp, #4]\n    str r3, [sp, #8]\n    mov r1, #2\n    str r1, [sp, #0xc]\n    mov r1, #0xf\n    str r1, [sp, #0x10]\n    add r5, r0, #0\n    add r1, r5, #0\n    str r2, [sp, #0x14]\n    add r1, #0xc0\n    add r2, r4, #0\n    bl ov83_022447E0\n    add r5, #0xc0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #0\n    add sp, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_022448E4(void) {
    /* Original at 0x022448E4 */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02244902\n    mov r6, #0x24\n    b _02244904\n    mov r6, #4\n    ldrb r0, [r5, #9]\n    mov r1, #1\n    bl ov80_02237B58\n    mov r7, #0\n    str r0, [sp, #0xc]\n    cmp r0, #0\n    ble _022449C0\n    add r0, r6, #0\n    str r0, [sp, #0x14]\n    add r0, #0x18\n    str r0, [sp, #0x14]\n    add r0, r6, #0\n    str r0, [sp, #0x10]\n    add r0, #0x20\n    str r0, [sp, #0x10]\n    ldr r0, _022449CC ; =0x0000054C\n    ldr r0, [r5, r0]\n    ldrb r0, [r0, r7]\n    cmp r0, #0\n    bne _02244946\n    mov r0, #0x40\n    str r0, [sp]\n    mov r0, #0x10\n    lsl r2, r6, #0x10\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0\n    lsr r2, r2, #0x10\n    mov r3, #1\n    bl FillWindowPixelRect\n    b _022449AA\n    ldr r0, _022449D0 ; =0x0000055C\n    add r1, r7, #0\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    mov r1, #0xa3\n    mov r2, #0\n    str r0, [sp, #0x18]\n    bl GetMonData\n    str r4, [sp]\n    add r1, r0, #0\n    str r6, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0xad\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r2, #3\n    mov r3, #1\n    bl PrintUIntOnWindow\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0xad\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r3, [sp, #0x14]\n    mov r1, #0\n    add r2, r4, #0\n    bl sub_0200CDAC\n    ldr r0, [sp, #0x18]\n    mov r1, #0xa4\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    ldr r0, [sp, #0x10]\n    str r4, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0xad\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r2, #3\n    mov r3, #0\n    bl PrintUIntOnWindow\n    ldr r0, [sp, #0x14]\n    add r7, r7, #1\n    add r0, #0x40\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    add r6, #0x40\n    add r0, #0x40\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    cmp r7, r0\n    blt _02244924\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022449CC: .word 0x0000054C\n    _022449D0: .word 0x0000055C"
    );
    #endif
}

void ov83_022449D4(void) {
    /* Original at 0x022449D4 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    str r1, [sp, #0x10]\n    add r0, r1, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _022449F4\n    mov r4, #0x28\n    mov r6, #0x50\n    b _022449F8\n    mov r4, #8\n    mov r6, #0x30\n    ldrb r0, [r5, #9]\n    mov r1, #1\n    bl ov80_02237B58\n    mov r7, #0\n    str r0, [sp, #0x14]\n    cmp r0, #0\n    ble _02244A66\n    ldr r0, _02244A70 ; =0x0000055C\n    add r1, r7, #0\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    mov r1, #0xa1\n    mov r2, #0\n    str r0, [sp, #0x18]\n    bl GetMonData\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x10]\n    mov r1, #1\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #0xad\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r3, #3\n    bl sub_0200CE7C\n    ldr r0, [sp, #0x18]\n    mov r1, #0x6f\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0\n    lsl r0, r0, #0x18\n    str r1, [sp]\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r1, [sp, #0x10]\n    add r0, r5, #0\n    add r2, r6, #0\n    mov r3, #1\n    bl ov83_02244BA8\n    ldr r0, [sp, #0x14]\n    add r7, r7, #1\n    add r4, #0x40\n    add r6, #0x40\n    cmp r7, r0\n    blt _02244A08\n    ldr r0, [sp, #0x10]\n    bl ScheduleWindowCopyToVram\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _02244A70: .word 0x0000055C"
    );
    #endif
}

void ov83_02244A74(void) {
    /* Original at 0x02244A74 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    ldr r0, _02244A80 ; =0x00000604\n    ldr r3, _02244A84 ; =ov83_02247864\n    add r0, r1, r0\n    ldr r1, [r1, #0x4c]\n    bx r3\n    _02244A80: .word 0x00000604\n    _02244A84: .word ov83_02247864"
    );
    #endif
}

void ov83_02244A88(void) {
    ov83_02246C2C();
}

void ov83_02244A90(void) {
    ov83_02246C70();
}

void ov83_02244A98(void) {
    BufferIntegerAsString(1);
}

void ov83_02244AB0(void) {
    BufferBoxMonSpeciesName();
}

void ov83_02244ABC(void) {
    /* Original at 0x02244ABC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    bl Save_PlayerData_GetProfile\n    add r2, r0, #0\n    ldr r0, [r5, #0x24]\n    add r1, r4, #0\n    bl BufferPlayersName\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_02244AD8(void) {
    /* Original at 0x02244AD8 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r1, #0\n    mov r1, #0xaf\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    str r2, [sp, #0x10]\n    add r5, r3, #0\n    bl Save_PlayerData_GetProfile\n    add r6, r0, #0\n    mov r0, #8\n    mov r1, #0x6b\n    bl String_New\n    add r4, r0, #0\n    add r0, r6, #0\n    bl PlayerProfile_GetNamePtr\n    add r1, r0, #0\n    add r0, r4, #0\n    bl CopyU16ArrayToString\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerGender\n    cmp r0, #0\n    bne _02244B14\n    ldr r1, _02244B3C ; =0x00070800\n    b _02244B18\n    mov r1, #0xc1\n    lsl r1, r1, #0xa\n    str r5, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r1, sp, #0x18\n    ldrb r1, [r1, #0x10]\n    ldr r3, [sp, #0x10]\n    add r0, r7, #0\n    add r2, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02244B3C: .word 0x00070800"
    );
    #endif
}

void ov83_02244B40(void) {
    /* Original at 0x02244B40 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    add r7, r1, #0\n    str r2, [sp, #0x18]\n    add r6, r3, #0\n    bl sub_0203769C\n    mov r1, #1\n    eor r0, r1\n    bl sub_02034818\n    str r0, [sp, #0x1c]\n    bl PlayerProfile_GetTrainerGender\n    cmp r0, #0\n    bne _02244B66\n    ldr r4, _02244BA4 ; =0x00070800\n    b _02244B6A\n    mov r4, #0xc1\n    lsl r4, r4, #0xa\n    ldr r0, [r5, #0x24]\n    ldr r2, [sp, #0x1c]\n    mov r1, #0\n    bl BufferPlayersName\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    lsr r0, r4, #0x10\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    lsr r0, r4, #8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r3, [sp, #0x18]\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r2, #1\n    bl ov83_0224484C\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _02244BA4: .word 0x00070800"
    );
    #endif
}

void ov83_02244BA8(void) {
    /* Original at 0x02244BA8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r7, r2, #0\n    add r2, r3, #0\n    add r3, sp, #0x20\n    ldrb r3, [r3, #0x14]\n    cmp r3, #0\n    bne _02244BC2\n    mov r3, #0x40\n    mov r4, #7\n    mov r5, #8\n    mov r6, #0\n    b _02244BCE\n    cmp r3, #1\n    bne _02244BE8\n    mov r3, #0x41\n    mov r4, #3\n    mov r5, #4\n    mov r6, #0\n    str r2, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    str r4, [sp, #8]\n    str r5, [sp, #0xc]\n    str r6, [sp, #0x10]\n    add r2, sp, #0x20\n    ldrb r2, [r2, #0x10]\n    str r2, [sp, #0x14]\n    add r2, r3, #0\n    add r3, r7, #0\n    bl ov83_0224484C\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_02244BEC(void) {
    /* Original at 0x02244BEC */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    mov r2, #5\n    str r2, [sp]\n    mov r1, #0xff\n    str r1, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r1, #2\n    add r4, r0, #0\n    str r1, [sp, #0xc]\n    mov r3, #0\n    str r3, [sp, #0x10]\n    add r1, r4, #0\n    str r3, [sp, #0x14]\n    add r1, #0x60\n    bl ov83_022447E0\n    strb r0, [r4, #0xa]\n    mov r0, #0xae\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xd0\n    bl ov83_02247944\n    mov r3, #1\n    add r1, r4, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    add r1, #0xd0\n    mov r2, #4\n    str r3, [sp, #0x14]\n    bl ov83_022447E0\n    strb r0, [r4, #0xa]\n    add sp, #0x18\n    pop {r4, pc}"
    );
    #endif
}

void ov83_02244C4C(void) {
    ov83_02245094();
}

void ov83_02244C58(void) {
    /* Original at 0x02244C58 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xae\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02247944\n    mov r1, #1\n    mov r0, #6\n    mvn r1, r1\n    lsl r0, r0, #8\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov83_02246AA4\n    add r0, r4, #0\n    bl ov83_02246CC0\n    pop {r4, pc}"
    );
    #endif
}

void ov83_02244C88(void) {
    ov83_02245094();
    ov83_02246C70(r4);
}

void ov83_02244C9C(void) {
    /* Original at 0x02244C9C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xae\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02247944\n    mov r1, #1\n    mov r0, #6\n    mvn r1, r1\n    lsl r0, r0, #8\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov83_02246B6C\n    add r0, r4, #0\n    bl ov83_02246D40\n    pop {r4, pc}"
    );
    #endif
}

void ov83_02244CCC(void) {
    ov83_02246C70();
}

void ov83_02244CD4(void) {
    /* Original at 0x02244CD4 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    strb r3, [r0, #8]\n    str r2, [r1]\n    bx lr"
    );
    #endif
}

void ov83_02244CDC(void) {
    /* Original at 0x02244CDC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02244D08 ; =0x000005DC\n    bl PlaySE\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _02244CFA\n    ldrb r2, [r4, #0xd]\n    add r0, r4, #0\n    mov r1, #0x16\n    bl ov83_022450A8\n    ldrb r1, [r4, #0xd]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov83_02244D0C\n    pop {r4, pc}\n    nop\n    _02244D08: .word 0x000005DC"
    );
    #endif
}

void ov83_02244D0C(void) {
    /* Original at 0x02244D0C */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r7, r1, #0\n    add r6, r2, #0\n    bne _02244D22\n    ldr r0, _02244D98 ; =0x00000508\n    mov r2, #1\n    ldr r4, [r5, r0]\n    mov r1, #0\n    b _02244D2A\n    ldr r0, _02244D9C ; =0x0000050C\n    mov r2, #2\n    ldr r4, [r5, r0]\n    mov r1, #0x11\n    ldrb r0, [r5, #0x15]\n    cmp r7, r0\n    blo _02244D50\n    add r0, r4, #0\n    bl ov83_022475D4\n    add r0, r4, #0\n    mov r1, #0xe0\n    mov r2, #0xa0\n    bl ov83_02247568\n    cmp r6, #0\n    bne _02244D92\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_02246938\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r1, r2, #0\n    bl ov83_022475D4\n    add r0, r5, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    add r3, r7, #0\n    bl ov83_02244DA0\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    bl ov83_02247568\n    cmp r6, #0\n    bne _02244D92\n    ldrb r1, [r5, #0xc]\n    ldrb r0, [r5, #0x15]\n    cmp r1, r0\n    blo _02244D8A\n    add r0, r5, #0\n    mov r1, #1\n    bl ov83_02246938\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_0224691C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02244D98: .word 0x00000508\n    _02244D9C: .word 0x0000050C"
    );
    #endif
}

void ov83_02244DA0(void) {
    /* Original at 0x02244DA0 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldrb r0, [r0, #9]\n    add r5, r1, #0\n    add r6, r2, #0\n    add r4, r3, #0\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _02244DD6\n    cmp r4, #0\n    bne _02244DBC\n    mov r0, #0x28\n    str r0, [r5]\n    b _02244DEE\n    cmp r4, #1\n    bne _02244DC6\n    mov r0, #0x68\n    str r0, [r5]\n    b _02244DEE\n    cmp r4, #2\n    bne _02244DD0\n    mov r0, #0xa8\n    str r0, [r5]\n    b _02244DEE\n    mov r0, #0xe8\n    str r0, [r5]\n    b _02244DEE\n    cmp r4, #0\n    bne _02244DE0\n    mov r0, #0x48\n    str r0, [r5]\n    b _02244DEE\n    cmp r4, #1\n    bne _02244DEA\n    mov r0, #0x88\n    str r0, [r5]\n    b _02244DEE\n    mov r0, #0xc8\n    str r0, [r5]\n    mov r0, #0x58\n    str r0, [r6]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov83_02244DF4(void) {
    /* Original at 0x02244DF4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldrb r0, [r0, #9]\n    add r5, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    ldr r4, [sp, #0x18]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02244E16\n    mov r0, #0x28\n    strh r0, [r5]\n    mov r0, #0\n    strh r0, [r6]\n    strh r0, [r7]\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    strh r1, [r5]\n    strh r1, [r6]\n    mov r0, #0x80\n    strh r0, [r7]\n    strh r1, [r4]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_02244E24(void) {
    /* Original at 0x02244E24 */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldrb r0, [r4, #0x14]\n    add r5, r2, #0\n    bl ov83_02247768\n    add r6, r0, #0\n    ldr r0, _02244F58 ; =0x0000055C\n    add r1, r6, #0\n    ldr r0, [r4, r0]\n    bl Party_GetMonByIndex\n    cmp r5, #5\n    bls _02244E44\n    b _02244F52\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02244E50: ; jump table\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    add sp, #0x14\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldrb r1, [r4, #0xf]\n    lsl r0, r1, #0x1f\n    lsr r0, r0, #0x1f\n    bne _02244EC0\n    mov r0, #1\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r4, #0xf]\n    ldrb r0, [r4, #0x12]\n    cmp r0, #1\n    bne _02244E86\n    mov r5, #9\n    b _02244E88\n    mov r5, #0xa\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02244E96\n    mov r1, #0x50\n    b _02244E98\n    mov r1, #0x30\n    lsl r0, r6, #6\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    str r5, [sp]\n    asr r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r1, #0\n    mov r0, #0x32\n    str r0, [sp, #8]\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    str r1, [sp, #0xc]\n    add r0, r4, r0\n    add r2, r1, #0\n    add r3, r1, #0\n    str r1, [sp, #0x10]\n    bl ov83_02247454\n    ldr r1, _02244F5C ; =0x00000504\n    str r0, [r4, r1]\n    ldr r0, _02244F5C ; =0x00000504\n    ldr r0, [r4, r0]\n    bl ov83_02247624\n    cmp r0, #0\n    bne _02244F52\n    ldr r0, _02244F5C ; =0x00000504\n    ldr r0, [r4, r0]\n    bl ov83_0224753C\n    ldr r0, _02244F5C ; =0x00000504\n    mov r1, #0\n    str r1, [r4, r0]\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    add sp, #0x14\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02244F08\n    add r0, r4, #0\n    mov r1, #0\n    bl ov83_02246114\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    add sp, #0x14\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    add sp, #0x14\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02244F36\n    add r0, r4, #0\n    mov r1, #0\n    bl ov83_02246114\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    add sp, #0x14\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    add sp, #0x14\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    add sp, #0x14\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _02244F58: .word 0x0000055C\n    _02244F5C: .word 0x00000504"
    );
    #endif
}

void ov83_02244F60(void) {
    /* Original at 0x02244F60 */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0x14]\n    add r6, r2, #0\n    ldrb r5, [r4, #0x15]\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _02245064 ; =0x0000055C\n    ldr r0, [r4, r0]\n    bl Party_GetMonByIndex\n    cmp r6, #5\n    bhi _02245060\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02244F88: ; jump table\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldrb r0, [r4, #0xf]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    bne _02244FB0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov83_02246114\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _02244FF0\n    bl sub_0203769C\n    cmp r0, #0\n    ldrb r0, [r4, #0x11]\n    bne _02244FE0\n    cmp r0, r5\n    blo _02244FF0\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    cmp r0, r5\n    bhs _02244FF0\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldrb r1, [r4, #0xf]\n    lsl r0, r1, #0x1f\n    lsr r0, r0, #0x1f\n    bne _02245060\n    mov r0, #0xf8\n    bic r1, r0\n    mov r0, #0x18\n    orr r0, r1\n    strb r0, [r4, #0xf]\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldrb r0, [r4, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _02245042\n    bl sub_0203769C\n    cmp r0, #0\n    ldrb r0, [r4, #0x11]\n    bne _02245032\n    cmp r0, r5\n    blo _02245042\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    cmp r0, r5\n    bhs _02245042\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldrb r1, [r4, #0xf]\n    lsl r0, r1, #0x1f\n    lsr r0, r0, #0x1f\n    bne _02245060\n    mov r0, #0xf8\n    bic r1, r0\n    mov r0, #0x18\n    orr r0, r1\n    strb r0, [r4, #0xf]\n    ldrb r1, [r4, #0xf]\n    mov r0, #1\n    bic r1, r0\n    strb r1, [r4, #0xf]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _02245064: .word 0x0000055C"
    );
    #endif
}

void ov83_02245068(void) {
    /* Original at 0x02245068 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #1\n    bne _02245070\n    mov r0, #1\n    bx lr\n    mov r0, #0xf\n    bx lr"
    );
    #endif
}

void ov83_02245074(void) {
    /* Original at 0x02245074 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov83_02245390\n    add r0, r4, #0\n    add r0, #0xc0\n    bl ov83_02245094\n    mov r0, #0x15\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov83_0224755C\n    pop {r4, pc}"
    );
    #endif
}

void ov83_02245094(void) {
    ClearFrameAndWindow2(1);
    ClearWindowTilemapAndScheduleTransfer(r4);
}

void ov83_022450A8(void) {
    /* Original at 0x022450A8 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r1, #0\n    sub r3, #0x14\n    add r5, r0, #0\n    cmp r3, #3\n    bhi _022450E6\n    add r3, r3, r3\n    add r3, pc\n    ldrh r3, [r3, #6]\n    lsl r3, r3, #0x10\n    asr r3, r3, #0x10\n    add pc, r3\n    _022450C0: ; jump table\n    mov r4, #0x35\n    bl ov83_02245104\n    b _022450E6\n    mov r4, #0x36\n    bl ov83_0224517C\n    b _022450E6\n    mov r4, #0x37\n    bl ov83_02245210\n    b _022450E6\n    mov r4, #0x38\n    bl ov83_02245248\n    ldr r1, _02245100 ; =0x00000564\n    add r0, r4, #0\n    add r1, r5, r1\n    mov r2, #0x28\n    bl sub_02037030\n    cmp r0, #1\n    bne _022450FA\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02245100: .word 0x00000564"
    );
    #endif
}

void ov83_02245104(void) {
    /* Original at 0x02245104 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    add r4, r1, #0\n    bl Save_PlayerData_GetProfile\n    ldr r1, _02245144 ; =0x00000564\n    strh r4, [r6, r1]\n    bl PlayerProfile_GetTrainerGender\n    ldr r1, _02245148 ; =0x00000566\n    mov r4, #0\n    strh r0, [r6, r1]\n    add r5, r6, #4\n    sub r7, r1, #2\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    lsl r2, r4, #0x18\n    ldrb r1, [r6, #9]\n    ldr r0, [r6, r0]\n    lsr r2, r2, #0x18\n    bl ov83_0224777C\n    strh r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #3\n    blt _02245126\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02245144: .word 0x00000564\n    _02245148: .word 0x00000566"
    );
    #endif
}

void ov83_0224514C(void) {
    /* Original at 0x0224514C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    add r5, r0, #0\n    ldrb r0, [r4, #0x17]\n    add r6, r2, #0\n    add r0, r0, #1\n    strb r0, [r4, #0x17]\n    bl sub_0203769C\n    cmp r5, r0\n    beq _02245176\n    ldr r0, _02245178 ; =0x000005B7\n    mov r3, #0\n    add r5, r6, #4\n    ldrh r2, [r5]\n    add r1, r4, r3\n    add r3, r3, #1\n    add r5, r5, #2\n    strb r2, [r1, r0]\n    cmp r3, #3\n    blt _02245168\n    pop {r4, r5, r6, pc}\n    _02245178: .word 0x000005B7"
    );
    #endif
}

void ov83_0224517C(void) {
    /* Original at 0x0224517C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _022451B0 ; =0x00000564\n    add r4, r2, #0\n    strh r1, [r5, r0]\n    add r0, r0, #2\n    strh r4, [r5, r0]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0224519A\n    ldrb r0, [r5, #0x11]\n    cmp r0, #0xff\n    bne _0224519A\n    strb r4, [r5, #0x11]\n    ldrb r1, [r5, #0x11]\n    ldr r0, _022451B4 ; =0x00000568\n    strh r1, [r5, r0]\n    ldrb r2, [r5, #0x12]\n    add r1, r0, #4\n    add r0, r0, #6\n    strh r2, [r5, r1]\n    ldrb r1, [r5, #0x13]\n    strh r1, [r5, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _022451B0: .word 0x00000564\n    _022451B4: .word 0x00000568"
    );
    #endif
}

void ov83_022451B8(void) {
    /* Original at 0x022451B8 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    add r6, r0, #0\n    ldrb r0, [r4, #0x17]\n    add r5, r2, #0\n    add r0, r0, #1\n    strb r0, [r4, #0x17]\n    bl sub_0203769C\n    cmp r6, r0\n    beq _02245208\n    ldrh r1, [r5, #2]\n    ldr r0, _0224520C ; =0x000005B5\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _022451FC\n    ldrb r0, [r4, #0x11]\n    cmp r0, #0xff\n    ldr r0, _0224520C ; =0x000005B5\n    beq _022451EA\n    mov r1, #0\n    strb r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    ldrb r1, [r4, r0]\n    ldrb r0, [r4, #0x15]\n    add r0, r1, r0\n    strb r0, [r4, #0x11]\n    ldrh r0, [r5, #8]\n    strb r0, [r4, #0x12]\n    ldrh r0, [r5, #0xa]\n    strb r0, [r4, #0x13]\n    pop {r4, r5, r6, pc}\n    ldrh r0, [r5, #4]\n    strb r0, [r4, #0x11]\n    ldrh r0, [r5, #8]\n    strb r0, [r4, #0x12]\n    ldrh r0, [r5, #0xa]\n    strb r0, [r4, #0x13]\n    pop {r4, r5, r6, pc}\n    nop\n    _0224520C: .word 0x000005B5"
    );
    #endif
}

void ov83_02245210(void) {
    /* Original at 0x02245210 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0224521C ; =0x00000564\n    strh r1, [r0, r2]\n    ldrb r3, [r0, #0xd]\n    add r1, r2, #2\n    strh r3, [r0, r1]\n    bx lr\n    _0224521C: .word 0x00000564"
    );
    #endif
}

void ov83_02245220(void) {
    /* Original at 0x02245220 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r2, #0\n    add r4, r3, #0\n    bl sub_0203769C\n    cmp r5, r0\n    beq _02245240\n    ldrh r0, [r6, #2]\n    ldr r1, _02245244 ; =0x000005B4\n    mov r2, #1\n    strb r0, [r4, r1]\n    ldrb r1, [r4, r1]\n    add r0, r4, #0\n    bl ov83_02244D0C\n    pop {r4, r5, r6, pc}\n    nop\n    _02245244: .word 0x000005B4"
    );
    #endif
}

void ov83_02245248(void) {
    /* Original at 0x02245248 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02245250 ; =0x00000564\n    mov r2, #1\n    strh r2, [r0, r1]\n    bx lr\n    _02245250: .word 0x00000564"
    );
    #endif
}

void ov83_02245254(void) {
    sub_0203769C();
}

void ov83_02245270(void) {
    ov83_02247768(1);
}

void ov83_02245288(void) {
    /* Original at 0x02245288 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xae\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0xc0\n    bl ov83_02247944\n    ldrb r0, [r5, #0x14]\n    add r1, r4, #0\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _022452F8 ; =0x0000055C\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_02244AB0\n    add r0, r5, #0\n    mov r1, #0x2f\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r5, #0xa]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov83_02245270\n    add r0, r5, #0\n    bl ov83_02245C80\n    ldrb r0, [r5, #0xd]\n    cmp r0, r4\n    bne _022452F0\n    add r0, r5, #0\n    bl ov83_02245D48\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_02246114\n    ldr r0, _022452FC ; =0x00000623\n    bl PlaySE\n    pop {r3, r4, r5, pc}\n    _022452F8: .word 0x0000055C\n    _022452FC: .word 0x00000623"
    );
    #endif
}

void ov83_02245300(void) {
    ov83_02247768(1);
}

void ov83_02245318(void) {
    /* Original at 0x02245318 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xae\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0xc0\n    bl ov83_02247944\n    ldrb r0, [r5, #0x14]\n    add r1, r4, #0\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _02245388 ; =0x0000055C\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_02244AB0\n    add r0, r5, #0\n    mov r1, #0x53\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r5, #0xa]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov83_02245300\n    add r0, r5, #0\n    bl ov83_02245C80\n    ldrb r0, [r5, #0xd]\n    cmp r0, r4\n    bne _02245380\n    add r0, r5, #0\n    bl ov83_02245D48\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_02246114\n    ldr r0, _0224538C ; =0x00000623\n    bl PlaySE\n    pop {r3, r4, r5, pc}\n    _02245388: .word 0x0000055C\n    _0224538C: .word 0x00000623"
    );
    #endif
}

void ov83_02245390(void) {
    /* Original at 0x02245390 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xf]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _022453AC\n    ldr r0, _022453B8 ; =0x000005F8\n    ldr r0, [r4, r0]\n    bl TouchscreenListMenu_DestroyButtons\n    add r0, r4, #0\n    bl ov83_02246C70\n    ldr r0, _022453BC ; =0x00000604\n    add r0, r4, r0\n    bl ov83_022478B4\n    pop {r4, pc}\n    nop\n    _022453B8: .word 0x000005F8\n    _022453BC: .word 0x00000604"
    );
    #endif
}

void ov83_022453C0(void) {
    /* Original at 0x022453C0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xae\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    add r4, #0xc0\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov83_02247944\n    pop {r4, pc}"
    );
    #endif
}

void ov83_022453DC(void) {
    /* Original at 0x022453DC */
    /* Requires manual decompilation - 161 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r4, r1, #0\n    add r1, sp, #0x1c\n    str r1, [sp]\n    add r1, sp, #0x20\n    add r3, sp, #0x1c\n    add r5, r0, #0\n    add r1, #2\n    add r2, sp, #0x20\n    add r3, #2\n    bl ov83_02244DF4\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02245472\n    add r1, sp, #0x1c\n    ldrh r0, [r1, #6]\n    add r0, #0x48\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    ldrh r0, [r1, #4]\n    mov r1, #0\n    add r2, r7, #0\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    mov r0, #0x30\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r3, r6, #0\n    bl FillWindowPixelRect\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    str r0, [sp, #0x18]\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r5, #4]\n    ldr r1, [sp, #0x18]\n    bl FrontierSave_GetStat\n    mov r1, #0\n    add r2, r0, #0\n    str r1, [sp]\n    add r0, r5, #0\n    mov r3, #4\n    bl ov83_02244A98\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r2, #2\n    str r2, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r7, #0\n    bl ov83_0224484C\n    strb r0, [r5, #0xa]\n    b _02245540\n    mov r0, #0x30\n    str r0, [sp]\n    mov r0, #0x10\n    mov r1, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x40\n    add r3, r1, #0\n    bl FillWindowPixelRect\n    mov r0, #0x30\n    str r0, [sp]\n    mov r0, #0x10\n    mov r1, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0xc0\n    add r3, r1, #0\n    bl FillWindowPixelRect\n    bl sub_0203769C\n    cmp r0, #0\n    bne _022454C6\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    add r6, r0, #0\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r5, #4]\n    add r1, r6, #0\n    bl FrontierSave_GetStat\n    add r6, r0, #0\n    ldr r0, _0224554C ; =0x000005BA\n    ldrh r7, [r5, r0]\n    b _022454E8\n    ldr r0, _0224554C ; =0x000005BA\n    ldrh r6, [r5, r0]\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    add r7, r0, #0\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r5, #4]\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    add r7, r0, #0\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r6, #0\n    mov r3, #4\n    str r1, [sp]\n    bl ov83_02244A98\n    mov r0, #0x70\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02245550 ; =0x00010200\n    add r1, r4, #0\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    mov r3, #2\n    bl ov83_02245D08\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r7, #0\n    mov r3, #4\n    str r1, [sp]\n    bl ov83_02244A98\n    mov r0, #0xf0\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02245550 ; =0x00010200\n    add r1, r4, #0\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    mov r3, #3\n    bl ov83_02245D08\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0224554C: .word 0x000005BA\n    _02245550: .word 0x00010200"
    );
    #endif
}

void ov83_02245554(void) {
    /* Original at 0x02245554 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov83_02245068\n    add r2, r0, #0\n    mov r1, #0\n    add r0, r5, #0\n    mov r3, #4\n    str r1, [sp]\n    bl ov83_02244A98\n    add r0, r5, #0\n    mov r1, #0x19\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r5, #0xa]\n    add r0, r5, #0\n    bl ov83_02244A74\n    strb r4, [r5, #0xe]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_02245584(void) {
    /* Original at 0x02245584 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r1, sp, #4\n    str r1, [sp]\n    add r1, sp, #8\n    add r3, sp, #4\n    add r5, r0, #0\n    add r1, #2\n    add r2, sp, #8\n    add r3, #2\n    bl ov83_02244DF4\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _022455C8\n    mov r0, #0\n    str r0, [sp]\n    add r3, sp, #4\n    ldrh r2, [r3, #6]\n    ldrh r3, [r3, #4]\n    add r0, r5, #0\n    add r2, r2, #4\n    add r3, r3, #1\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x10\n    add r1, r4, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x10\n    bl ov83_02244AD8\n    b _02245630\n    bl sub_0203769C\n    cmp r0, #0\n    add r2, sp, #4\n    bne _02245602\n    ldrh r0, [r2, #4]\n    add r1, r4, #0\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r3, r0, #0x10\n    mov r0, #0\n    str r0, [sp]\n    ldrh r2, [r2, #6]\n    add r0, r5, #0\n    bl ov83_02244AD8\n    mov r0, #0\n    str r0, [sp]\n    add r3, sp, #4\n    ldrh r2, [r3, #2]\n    ldrh r3, [r3]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r3, #1\n    lsl r3, r3, #0x10\n    lsr r3, r3, #0x10\n    bl ov83_02244B40\n    b _02245630\n    ldrh r0, [r2, #4]\n    add r1, r4, #0\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r3, r0, #0x10\n    mov r0, #0\n    str r0, [sp]\n    ldrh r2, [r2, #6]\n    add r0, r5, #0\n    bl ov83_02244B40\n    mov r0, #0\n    str r0, [sp]\n    add r3, sp, #4\n    ldrh r2, [r3, #2]\n    ldrh r3, [r3]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r3, #1\n    lsl r3, r3, #0x10\n    lsr r3, r3, #0x10\n    bl ov83_02244AD8\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov83_0224563C(void) {
    /* Original at 0x0224563C */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, _02245740 ; =0x000005E3\n    add r7, r1, #0\n    add r6, r2, #0\n    bl PlaySE\n    ldrb r0, [r4, #0x15]\n    add r1, r7, #0\n    str r0, [sp]\n    bl ov83_0224776C\n    str r0, [sp, #4]\n    cmp r6, #4\n    bhi _02245686\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02245668: ; jump table\n    mov r5, #1\n    b _02245686\n    ldrb r0, [r4, #0x12]\n    bl ov83_02245068\n    add r5, r0, #0\n    b _02245686\n    mov r5, #2\n    b _02245686\n    mov r5, #5\n    bl sub_0203769C\n    cmp r0, #0\n    bne _022456BA\n    ldr r0, [sp]\n    cmp r7, r0\n    bhs _022456A8\n    add r0, r4, #0\n    mov r1, #5\n    bl ov83_02244ABC\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, #4]\n    add r2, r5, #0\n    bl ov80_02237FA4\n    b _022456E4\n    ldr r0, [r4, #0x24]\n    mov r1, #5\n    bl ov83_022477C4\n    ldr r0, _02245744 ; =0x000005BA\n    ldrh r1, [r4, r0]\n    sub r1, r1, r5\n    strh r1, [r4, r0]\n    b _022456E4\n    ldr r0, [sp]\n    cmp r7, r0\n    bhs _022456D2\n    ldr r0, [r4, #0x24]\n    mov r1, #5\n    bl ov83_022477C4\n    ldr r0, _02245744 ; =0x000005BA\n    ldrh r1, [r4, r0]\n    sub r1, r1, r5\n    strh r1, [r4, r0]\n    b _022456E4\n    add r0, r4, #0\n    mov r1, #5\n    bl ov83_02244ABC\n    ldrb r1, [r4, #9]\n    ldr r0, [r4, #4]\n    add r2, r5, #0\n    bl ov80_02237FA4\n    add r1, r4, #0\n    add r0, r4, #0\n    add r1, #0x50\n    bl ov83_022453DC\n    add r0, r4, #0\n    bl ov83_02245390\n    cmp r6, #4\n    bhi _0224573C\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02245704: ; jump table\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov83_02245824\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r2, [r4, #0x12]\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov83_02245838\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov83_02245288\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov83_02245318\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02245740: .word 0x000005E3\n    _02245744: .word 0x000005BA"
    );
    #endif
}

void ov83_02245748(void) {
    /* Original at 0x02245748 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x14]\n    add r4, r1, #0\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _02245810 ; =0x0000055C\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    add r6, r0, #0\n    mov r0, #0xae\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0xc0\n    bl ov83_02247944\n    add r0, r6, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_02244AB0\n    add r0, r5, #0\n    mov r1, #0x14\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r5, #0xa]\n    ldrb r0, [r5, #0x14]\n    add r1, r4, #0\n    bl ov83_02247768\n    ldr r1, _02245814 ; =0x0000054C\n    mov r2, #1\n    ldr r1, [r5, r1]\n    strb r2, [r1, r0]\n    ldrb r0, [r5, #0x14]\n    add r1, r4, #0\n    bl ov83_02247768\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _02245818 ; =0x000004F4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ov83_0224755C\n    ldrb r0, [r5, #0x14]\n    add r1, r4, #0\n    bl ov83_02247768\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _0224581C ; =0x000004E4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov83_0224755C\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x70\n    bl ov83_022449D4\n    ldrb r0, [r5, #0xd]\n    cmp r0, r4\n    bne _022457F0\n    add r0, r5, #0\n    bl ov83_02245D48\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_02246114\n    add r0, r5, #0\n    bl ov83_02246988\n    ldrb r0, [r5, #0x14]\n    add r1, r4, #0\n    bl ov83_02247768\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x51\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov83_0224755C\n    ldr r0, _02245820 ; =0x00000623\n    bl PlaySE\n    pop {r4, r5, r6, pc}\n    _02245810: .word 0x0000055C\n    _02245814: .word 0x0000054C\n    _02245818: .word 0x000004F4\n    _0224581C: .word 0x000004E4\n    _02245820: .word 0x00000623"
    );
    #endif
}

void ov83_02245824(void) {
    ov83_02245748();
    ov83_022448E4(r4, r4);
}

void ov83_02245838(void) {
    /* Original at 0x02245838 */
    /* Requires manual decompilation - 146 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0xae\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r6, r1, #0\n    add r7, r2, #0\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0xc0\n    bl ov83_02247944\n    ldrb r0, [r5, #0x14]\n    add r1, r6, #0\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _02245994 ; =0x0000055C\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    add r4, r0, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_02244AB0\n    cmp r7, #1\n    bne _0224588E\n    add r0, r5, #0\n    mov r1, #0x1f\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r5, #0xa]\n    ldr r0, _02245998 ; =0x00000632\n    bl PlaySE\n    b _022458A0\n    add r0, r5, #0\n    mov r1, #0x20\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r5, #0xa]\n    ldr r0, _0224599C ; =0x00000633\n    bl PlaySE\n    ldrb r0, [r5, #0x14]\n    add r1, r6, #0\n    bl ov83_02247768\n    mov r1, #0x55\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    ldrb r0, [r5, #0x14]\n    bne _022458C6\n    add r1, r6, #0\n    bl ov83_02247768\n    mov r1, #0x55\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    strb r7, [r1, r0]\n    b _022458D6\n    add r1, r6, #0\n    bl ov83_02247768\n    mov r1, #0x55\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0\n    strb r2, [r1, r0]\n    ldrb r0, [r5, #0x14]\n    add r1, r6, #0\n    bl ov83_02247768\n    mov r1, #0x55\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _0224590E\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x32\n    bl GetMonExpBySpeciesAndLevel\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #8\n    add r2, sp, #0\n    bl SetMonData\n    add r0, r4, #0\n    bl CalcMonLevelAndStats\n    b _02245968\n    ldrb r0, [r5, #0x14]\n    add r1, r6, #0\n    bl ov83_02247768\n    mov r1, #0x55\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    ldrb r0, [r1, r0]\n    cmp r0, #1\n    bne _02245946\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x37\n    bl GetMonExpBySpeciesAndLevel\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #8\n    add r2, sp, #0\n    bl SetMonData\n    add r0, r4, #0\n    bl CalcMonLevelAndStats\n    b _02245968\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x2d\n    bl GetMonExpBySpeciesAndLevel\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #8\n    add r2, sp, #0\n    bl SetMonData\n    add r0, r4, #0\n    bl CalcMonLevelAndStats\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x80\n    bl ov83_022448E4\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x70\n    bl ov83_022449D4\n    ldrb r0, [r5, #0xd]\n    cmp r0, r6\n    bne _02245990\n    add r0, r5, #0\n    bl ov83_02245D48\n    add r0, r5, #0\n    mov r1, #0\n    bl ov83_02246114\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02245994: .word 0x0000055C\n    _02245998: .word 0x00000632\n    _0224599C: .word 0x00000633"
    );
    #endif
}

void ov83_022459A0(void) {
    GfGfx_EngineATogglePlanes();
}

void ov83_022459AC(void) {
    /* Original at 0x022459AC */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    ldrb r0, [r6, #9]\n    mov r1, #1\n    bl ov80_02237B24\n    mov r4, #0\n    str r0, [sp]\n    cmp r0, #0\n    ble _02245A34\n    add r5, r6, #0\n    ldr r0, _02245A38 ; =0x0000055C\n    add r1, r4, #0\n    ldr r0, [r6, r0]\n    bl Party_GetMonByIndex\n    str r0, [sp, #4]\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    ldr r0, [sp, #4]\n    mov r1, #0xa4\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    lsl r0, r7, #0x10\n    lsl r1, r1, #0x10\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x10\n    bl ov80_0222A43C\n    add r1, r0, #0\n    ldr r0, _02245A3C ; =0x000004E4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _02245A2A\n    bl ov83_02247600\n    ldrb r0, [r6, #0x14]\n    ldrb r1, [r6, #0xd]\n    bl ov83_02247768\n    cmp r4, r0\n    bne _02245A14\n    ldrb r1, [r6, #0xd]\n    ldrb r0, [r6, #0x15]\n    cmp r1, r0\n    blo _02245A20\n    ldr r0, _02245A3C ; =0x000004E4\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ov83_0224760C\n    b _02245A2A\n    ldr r0, _02245A3C ; =0x000004E4\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl ov83_0224760C\n    ldr r0, [sp]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r0\n    blt _022459C4\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02245A38: .word 0x0000055C\n    _02245A3C: .word 0x000004E4"
    );
    #endif
}

void ov83_02245A40(void) {
    /* Original at 0x02245A40 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #9]\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_0205C1F0\n    add r7, r0, #0\n    ldrb r0, [r5, #9]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r0, [r5, #4]\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    cmp r0, r4\n    bhs _02245A82\n    add r0, r5, #0\n    bl ov83_022453C0\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r5, #0xa]\n    mov r0, #0x10\n    strb r0, [r5, #8]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02245AC6\n    add r0, r5, #0\n    add r0, #0xc0\n    bl ov83_02245094\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, #4]\n    add r2, r4, #0\n    bl ov80_02237FA4\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x50\n    bl ov83_022453DC\n    cmp r4, #2\n    bne _02245AB6\n    ldrb r1, [r5, #0xd]\n    add r0, r5, #0\n    bl ov83_02245288\n    b _02245ABE\n    ldrb r1, [r5, #0xd]\n    add r0, r5, #0\n    bl ov83_02245318\n    mov r0, #0xd\n    strb r0, [r5, #8]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    strb r0, [r5, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_02245ACC(void) {
    /* Original at 0x02245ACC */
    /* Requires manual decompilation - 185 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldrb r0, [r5, #9]\n    add r4, r1, #0\n    mov r1, #0\n    add r7, r2, #0\n    bl ov80_02237B24\n    cmp r7, #5\n    bne _02245AE6\n    mov r6, #2\n    b _02245AEA\n    bl GF_AssertFail\n    ldrb r7, [r5, #0x15]\n    add r1, r4, #0\n    add r0, r7, #0\n    bl ov83_0224776C\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02245B9A\n    cmp r4, r7\n    bhs _02245B7A\n    add r0, r5, #0\n    mov r1, #5\n    bl ov83_02244ABC\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    add r2, r6, #0\n    bl ov83_0224777C\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, #4]\n    mov r2, #0x32\n    bl ov80_02237FA4\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    add r2, r6, #0\n    bl ov83_0224777C\n    add r4, r0, #0\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    ldrb r0, [r5, #9]\n    add r1, r6, #0\n    bl sub_0205C174\n    str r0, [sp]\n    ldrb r0, [r5, #9]\n    add r1, r6, #0\n    bl sub_0205C174\n    bl sub_0205C268\n    add r3, r4, #1\n    lsl r3, r3, #0x10\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r0, r7, #0\n    lsr r3, r3, #0x10\n    bl sub_02031108\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _02245C36\n    ldrb r1, [r5, #0xf]\n    mov r0, #0xf8\n    bic r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    strb r0, [r5, #0xf]\n    b _02245C36\n    ldr r0, [r5, #0x24]\n    mov r1, #5\n    bl ov83_022477C4\n    ldr r1, _02245C78 ; =0x000005B7\n    add r2, r1, #3\n    add r0, r5, r1\n    ldrh r2, [r5, r2]\n    ldrb r4, [r0, r6]\n    add r1, r1, #3\n    sub r2, #0x32\n    strh r2, [r5, r1]\n    ldrb r1, [r0, r6]\n    add r1, r1, #1\n    strb r1, [r0, r6]\n    b _02245C36\n    cmp r4, r7\n    bhs _02245BBE\n    ldr r0, [r5, #0x24]\n    mov r1, #5\n    bl ov83_022477C4\n    ldr r1, _02245C78 ; =0x000005B7\n    add r2, r1, #3\n    add r0, r5, r1\n    ldrh r2, [r5, r2]\n    ldrb r4, [r0, r6]\n    add r1, r1, #3\n    sub r2, #0x32\n    strh r2, [r5, r1]\n    ldrb r1, [r0, r6]\n    add r1, r1, #1\n    strb r1, [r0, r6]\n    b _02245C36\n    add r0, r5, #0\n    mov r1, #5\n    bl ov83_02244ABC\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    add r2, r6, #0\n    bl ov83_0224777C\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, #4]\n    mov r2, #0x32\n    bl ov80_02237FA4\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    add r2, r6, #0\n    bl ov83_0224777C\n    add r4, r0, #0\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    ldrb r0, [r5, #9]\n    add r1, r6, #0\n    bl sub_0205C174\n    str r0, [sp, #4]\n    ldrb r0, [r5, #9]\n    add r1, r6, #0\n    bl sub_0205C174\n    bl sub_0205C268\n    add r3, r4, #1\n    lsl r3, r3, #0x10\n    add r2, r0, #0\n    ldr r1, [sp, #4]\n    add r0, r7, #0\n    lsr r3, r3, #0x10\n    bl sub_02031108\n    ldrb r0, [r5, #9]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _02245C36\n    ldrb r1, [r5, #0xf]\n    mov r0, #0xf8\n    bic r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    strb r0, [r5, #0xf]\n    add r0, r5, #0\n    bl ov83_02245390\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x50\n    bl ov83_022453DC\n    mov r0, #0xae\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Options_GetFrame\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0xc0\n    bl ov83_02247944\n    mov r1, #6\n    add r3, r6, #0\n    mul r3, r1\n    ldr r1, _02245C7C ; =ov83_02248054\n    lsl r2, r4, #1\n    add r1, r1, r3\n    ldrh r1, [r2, r1]\n    add r0, r5, #0\n    mov r2, #1\n    bl ov83_022448AC\n    strb r0, [r5, #0xa]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02245C78: .word 0x000005B7\n    _02245C7C: .word ov83_02248054"
    );
    #endif
}

void ov83_02245C80(void) {
    /* Original at 0x02245C80 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldrb r0, [r6, #9]\n    mov r1, #1\n    bl ov80_02237B58\n    add r5, r0, #0\n    mov r4, #0\n    cmp r5, #0\n    ble _02245CA4\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    bl ov83_02245CA8\n    add r4, r4, #1\n    cmp r4, r5\n    blt _02245C94\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov83_02245CA8(void) {
    /* Original at 0x02245CA8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02245CE0 ; =0x00000554\n    add r4, r1, #0\n    ldr r1, [r5, r0]\n    ldrb r1, [r1, r4]\n    cmp r1, #1\n    bne _02245CC6\n    lsl r1, r4, #3\n    add r1, r5, r1\n    sub r0, #0x34\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov83_0224755C\n    ldr r0, _02245CE4 ; =0x00000558\n    ldr r1, [r5, r0]\n    ldrb r1, [r1, r4]\n    cmp r1, #1\n    bne _02245CDE\n    lsl r1, r4, #3\n    add r1, r5, r1\n    sub r0, #0x34\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov83_0224755C\n    pop {r3, r4, r5, pc}\n    _02245CE0: .word 0x00000554\n    _02245CE4: .word 0x00000558"
    );
    #endif
}

void ov83_02245CE8(void) {
    ov80_02237D8C(0x3c, 0x40, 0x60);
}

void ov83_02245D08(void) {
    /* Original at 0x02245D08 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r2, #0\n    add r1, r3, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x28]\n    ldr r2, [sp, #0x20]\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    ldr r3, [sp, #0x24]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #8]\n    ldr r1, [r5, #0x28]\n    add r0, r4, #0\n    bl ov83_02247998\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov83_02245D48(void) {
    /* Original at 0x02245D48 */
    /* Requires manual decompilation - 195 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldrb r0, [r5, #0x14]\n    ldrb r1, [r5, #0xd]\n    bl ov83_02247768\n    add r1, r0, #0\n    ldr r0, _02245EDC ; =0x0000055C\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    add r6, r0, #0\n    bl AcquireMonLock\n    str r0, [sp, #4]\n    ldr r0, _02245EE0 ; =0x000005BC\n    str r6, [r5, r0]\n    add r0, r6, #0\n    bl Mon_GetBoxMon\n    mov r1, #0x17\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _02245EE4 ; =0x000005C4\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa1\n    bl GetMonData\n    ldr r1, _02245EE8 ; =0x000005C7\n    mov r2, #0\n    strb r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa\n    bl GetMonData\n    ldr r1, _02245EEC ; =0x000005C8\n    strb r0, [r5, r1]\n    add r0, r6, #0\n    bl GetMonNature\n    ldr r1, _02245EF0 ; =0x000005C9\n    mov r2, #0\n    strb r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #6\n    bl GetMonData\n    ldr r1, _02245EF4 ; =0x000005CA\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa3\n    bl GetMonData\n    mov r1, #0x5d\n    lsl r1, r1, #4\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa4\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _02245EF8 ; =0x000005D2\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa5\n    bl GetMonData\n    ldr r1, _02245EFC ; =0x000005D4\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa8\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _02245F00 ; =0x000005D6\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa6\n    bl GetMonData\n    ldr r1, _02245F04 ; =0x000005D8\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa9\n    bl GetMonData\n    ldr r1, _02245F08 ; =0x000005DA\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xa7\n    bl GetMonData\n    ldr r1, _02245F0C ; =0x000005DC\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0x70\n    bl GetMonData\n    ldr r1, _02245F10 ; =0x000005DE\n    strb r0, [r5, r1]\n    mov r1, #0\n    add r0, r6, #0\n    add r2, r1, #0\n    bl GetMonData\n    ldr r1, _02245F14 ; =0x000005CC\n    mov r2, #0\n    str r0, [r5, r1]\n    add r0, r6, #0\n    mov r1, #0xb0\n    bl GetMonData\n    cmp r0, #1\n    ldr r1, _02245F18 ; =0x000005C6\n    bne _02245E54\n    ldrb r2, [r5, r1]\n    mov r0, #0x80\n    bic r2, r0\n    strb r2, [r5, r1]\n    b _02245E5C\n    ldrb r2, [r5, r1]\n    mov r0, #0x80\n    orr r0, r2\n    strb r0, [r5, r1]\n    add r0, r6, #0\n    bl GetMonGender\n    ldr r3, _02245F18 ; =0x000005C6\n    mov r2, #0x7f\n    ldrb r1, [r5, r3]\n    mov r4, #0\n    bic r1, r2\n    mov r2, #0x7f\n    and r0, r2\n    orr r0, r1\n    strb r0, [r5, r3]\n    lsl r0, r4, #1\n    add r0, r5, r0\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, r6, #0\n    add r1, #0x36\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x5e\n    ldr r2, [sp]\n    lsl r1, r1, #4\n    strh r0, [r2, r1]\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x3a\n    mov r2, #0\n    add r7, r5, r4\n    bl GetMonData\n    ldr r1, _02245F1C ; =0x000005E8\n    mov r2, #0\n    strb r0, [r7, r1]\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x3e\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    mov r0, #0x5e\n    lsl r1, r1, #0x18\n    ldr r2, [sp]\n    lsl r0, r0, #4\n    ldrh r0, [r2, r0]\n    lsr r1, r1, #0x18\n    bl GetMoveMaxPP\n    ldr r1, _02245F20 ; =0x000005EC\n    strb r0, [r7, r1]\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #4\n    blo _02245E74\n    ldr r1, [sp, #4]\n    add r0, r6, #0\n    bl ReleaseMonLock\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02245EDC: .word 0x0000055C\n    _02245EE0: .word 0x000005BC\n    _02245EE4: .word 0x000005C4\n    _02245EE8: .word 0x000005C7\n    _02245EEC: .word 0x000005C8\n    _02245EF0: .word 0x000005C9\n    _02245EF4: .word 0x000005CA\n    _02245EF8: .word 0x000005D2\n    _02245EFC: .word 0x000005D4\n    _02245F00: .word 0x000005D6\n    _02245F04: .word 0x000005D8\n    _02245F08: .word 0x000005DA\n    _02245F0C: .word 0x000005DC\n    _02245F10: .word 0x000005DE\n    _02245F14: .word 0x000005CC\n    _02245F18: .word 0x000005C6\n    _02245F1C: .word 0x000005E8\n    _02245F20: .word 0x000005EC"
    );
    #endif
}

void ov83_02245F24(void) {
    /* Original at 0x02245F24 */
    /* Requires manual decompilation - 217 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0x13\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x15\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x17\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x19\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x1b\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x1d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x21\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x23\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x25\n    lsl r0, r0, #4\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02246110 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x42\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02246110 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x15\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x34\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02246110 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x17\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x32\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02246110 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x30\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02246110 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x1b\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x43\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02246110 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x1d\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x36\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02246110 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x3a\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02246110 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x21\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x38\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02246110 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x23\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x3c\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02246110 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldr r1, [r4, #0x20]\n    add r0, r4, r0\n    mov r2, #0x3e\n    bl ov83_022479E4\n    mov r0, #0x13\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x15\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x17\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x19\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x1b\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x1d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x21\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x23\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x25\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _02246110: .word 0x00010200"
    );
    #endif
}

void ov83_02246114(void) {
    /* Original at 0x02246114 */
    /* Requires manual decompilation - 907 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    mov r0, #0xaf\n    str r1, [sp, #0x14]\n    lsl r0, r0, #2\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    mov r2, #2\n    bl ov83_0224777C\n    add r6, r0, #0\n    ldrb r0, [r5, #0x14]\n    ldrb r1, [r5, #0xd]\n    bl ov83_02247768\n    add r4, r0, #0\n    mov r0, #0x11\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x12\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #5\n    lsl r0, r0, #6\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x16\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #6\n    lsl r0, r0, #6\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x22\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #9\n    lsl r0, r0, #6\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x26\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x27\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _02246538 ; =0x000005C6\n    ldrb r0, [r5, r0]\n    lsl r1, r0, #0x18\n    lsr r1, r1, #0x1f\n    bne _0224621E\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x19\n    bne _022461FE\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _0224653C ; =0x00050600\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r2, #0x40\n    bl ov83_022479E4\n    b _0224621E\n    cmp r0, #1\n    bne _0224621E\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xc1\n    str r3, [sp, #4]\n    lsl r0, r0, #0xa\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r2, #0x41\n    bl ov83_022479E4\n    mov r1, #0\n    ldr r2, _02246540 ; =0x000005C7\n    str r1, [sp]\n    ldrb r2, [r5, r2]\n    add r0, r5, #0\n    mov r3, #3\n    bl ov83_02244A98\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _02246544 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #5\n    lsl r1, r1, #6\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x48\n    bl ov83_02245D08\n    ldr r0, _02246548 ; =0x0000054C\n    ldr r1, [r5, r0]\n    ldrb r1, [r1, r4]\n    cmp r1, #0\n    beq _022462D8\n    add r0, #0x70\n    ldr r0, [r5, r0]\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl BufferBoxMonSpeciesName\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _02246544 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #0x11\n    lsl r1, r1, #4\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x45\n    bl ov83_02245D08\n    mov r1, #0\n    mov r2, #0x5d\n    str r1, [sp]\n    lsl r2, r2, #4\n    ldrh r2, [r5, r2]\n    add r0, r5, #0\n    mov r3, #3\n    bl ov83_02244A98\n    mov r0, #0\n    str r0, [sp]\n    ldr r2, _0224654C ; =0x000005D2\n    add r0, r5, #0\n    ldrh r2, [r5, r2]\n    mov r1, #1\n    mov r3, #3\n    bl ov83_02244A98\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r5, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02246544 ; =0x00010200\n    mov r1, #7\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    lsl r1, r1, #6\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x4e\n    bl ov83_02245D08\n    b _0224631C\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02246544 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x11\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r2, #0x4b\n    bl ov83_022479E4\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r5, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02246544 ; =0x00010200\n    mov r2, #0x4d\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #7\n    lsl r0, r0, #6\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    lsl r3, r3, #3\n    bl ov83_022479E4\n    ldr r2, _02246550 ; =0x00000554\n    ldr r0, [r5, r2]\n    ldrb r0, [r0, r4]\n    cmp r0, #0\n    bne _02246328\n    b _022464D2\n    add r2, #0x74\n    ldrb r2, [r5, r2]\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl BufferAbilityName\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _02246544 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #0x16\n    lsl r1, r1, #4\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x35\n    bl ov83_02245D08\n    ldr r2, _02246554 ; =0x000005C9\n    ldr r0, [r5, #0x24]\n    ldrb r2, [r5, r2]\n    mov r1, #0\n    bl BufferNatureName\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _02246544 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #6\n    lsl r1, r1, #6\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x33\n    bl ov83_02245D08\n    ldr r2, _02246558 ; =0x000005CA\n    ldr r0, [r5, #0x24]\n    ldrh r2, [r5, r2]\n    mov r1, #0\n    bl BufferItemName\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _02246544 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #0x1a\n    lsl r1, r1, #4\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x31\n    bl ov83_02245D08\n    mov r1, #0\n    ldr r2, _0224655C ; =0x000005D4\n    str r1, [sp]\n    ldrh r2, [r5, r2]\n    add r0, r5, #0\n    mov r3, #3\n    bl ov83_02244A98\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02246544 ; =0x00010200\n    mov r1, #0x1e\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    lsl r1, r1, #4\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x37\n    bl ov83_02245D08\n    mov r1, #0\n    ldr r2, _02246560 ; =0x000005D6\n    str r1, [sp]\n    ldrh r2, [r5, r2]\n    add r0, r5, #0\n    mov r3, #3\n    bl ov83_02244A98\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02246544 ; =0x00010200\n    mov r1, #1\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    lsl r1, r1, #9\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x3b\n    bl ov83_02245D08\n    mov r1, #0\n    ldr r2, _02246564 ; =0x000005D8\n    str r1, [sp]\n    ldrh r2, [r5, r2]\n    add r0, r5, #0\n    mov r3, #3\n    bl ov83_02244A98\n    mov r0, #0x22\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02246544 ; =0x00010200\n    mov r1, #0x22\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    lsl r1, r1, #4\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x39\n    bl ov83_02245D08\n    mov r1, #0\n    ldr r2, _02246568 ; =0x000005DA\n    str r1, [sp]\n    ldrh r2, [r5, r2]\n    add r0, r5, #0\n    mov r3, #3\n    bl ov83_02244A98\n    mov r0, #9\n    lsl r0, r0, #6\n    add r0, r5, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02246544 ; =0x00010200\n    mov r1, #9\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    lsl r1, r1, #6\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x3d\n    bl ov83_02245D08\n    mov r1, #0\n    ldr r2, _0224656C ; =0x000005DC\n    str r1, [sp]\n    ldrh r2, [r5, r2]\n    add r0, r5, #0\n    mov r3, #3\n    bl ov83_02244A98\n    mov r0, #0x26\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02246544 ; =0x00010200\n    mov r1, #0x26\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    lsl r1, r1, #4\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r3, #0x3f\n    bl ov83_02245D08\n    b _0224662C\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02246544 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r2, #0x4b\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02246544 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r2, #0x4b\n    bl ov83_022479E4\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02246544 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r2, #0x4b\n    bl ov83_022479E4\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02246544 ; =0x00010200\n    b _02246570\n    nop\n    _02246538: .word 0x000005C6\n    _0224653C: .word 0x00050600\n    _02246540: .word 0x000005C7\n    _02246544: .word 0x00010200\n    _02246548: .word 0x0000054C\n    _0224654C: .word 0x000005D2\n    _02246550: .word 0x00000554\n    _02246554: .word 0x000005C9\n    _02246558: .word 0x000005CA\n    _0224655C: .word 0x000005D4\n    _02246560: .word 0x000005D6\n    _02246564: .word 0x000005D8\n    _02246568: .word 0x000005DA\n    _0224656C: .word 0x000005DC\n    mov r2, #0x4a\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    lsl r3, r3, #3\n    bl ov83_022479E4\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0224690C ; =0x00010200\n    mov r2, #0x4a\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    lsl r0, r0, #9\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    lsl r3, r3, #3\n    bl ov83_022479E4\n    mov r0, #0x22\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0224690C ; =0x00010200\n    mov r2, #0x4a\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    lsl r3, r3, #3\n    bl ov83_022479E4\n    mov r0, #9\n    lsl r0, r0, #6\n    add r0, r5, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0224690C ; =0x00010200\n    mov r2, #0x4a\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #9\n    lsl r0, r0, #6\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    lsl r3, r3, #3\n    bl ov83_022479E4\n    mov r0, #0x26\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0224690C ; =0x00010200\n    mov r2, #0x4a\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #0x26\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    lsl r3, r3, #3\n    bl ov83_022479E4\n    cmp r6, #1\n    bne _0224664C\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _0224690C ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r2, #0x4c\n    bl ov83_022479E4\n    b _02246864\n    ldr r0, _02246910 ; =0x00000558\n    ldr r0, [r5, r0]\n    ldrb r0, [r0, r4]\n    cmp r0, #0\n    bne _02246722\n    mov r0, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x20]\n    mov r2, #0x4b\n    lsl r4, r0, #4\n    str r4, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _0224690C ; =0x00010200\n    mov r3, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    bl ov83_022479E4\n    ldr r0, [r5, #0x20]\n    mov r1, #0x44\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    mov r0, #0\n    add r1, r7, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x17\n    lsr r6, r0, #0x18\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0224690C ; =0x00010200\n    add r1, r7, #0\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    add r0, r5, r0\n    mov r2, #0x78\n    add r3, r4, #0\n    bl ov83_02247998\n    add r0, r7, #0\n    bl String_Delete\n    ldr r0, [r5, #0x20]\n    mov r1, #0x49\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    mov r0, #0\n    add r1, r7, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0224690C ; =0x00010200\n    mov r2, #0x78\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    sub r2, r2, r6\n    sub r2, r2, r3\n    add r0, r5, r0\n    add r1, r7, #0\n    add r3, r4, #0\n    bl ov83_02247998\n    add r0, r7, #0\n    bl String_Delete\n    add r6, #0x78\n    str r4, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _0224690C ; =0x00010200\n    mov r2, #0x49\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    add r3, r6, #0\n    bl ov83_022479E4\n    ldr r0, [sp, #0x20]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x20]\n    cmp r0, #4\n    blo _0224665A\n    b _02246864\n    mov r4, #0\n    lsl r0, r4, #1\n    mov r2, #0x5e\n    add r7, r5, r0\n    lsl r2, r2, #4\n    ldrh r2, [r7, r2]\n    ldr r0, [r5, #0x24]\n    add r1, r4, #0\n    bl BufferMoveName\n    mov r0, #0\n    mov r1, #0x27\n    lsl r1, r1, #4\n    add r3, r4, #0\n    lsl r6, r4, #4\n    str r0, [sp]\n    str r6, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _0224690C ; =0x00010200\n    add r1, r5, r1\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    add r3, #0x54\n    bl ov83_02245D08\n    mov r0, #0x5e\n    lsl r0, r0, #4\n    ldrh r0, [r7, r0]\n    cmp r0, #0\n    bne _02246784\n    str r6, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _0224690C ; =0x00010200\n    mov r2, #0x5a\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldr r1, [r5, #0x20]\n    add r0, r5, r0\n    mov r3, #0x78\n    bl ov83_022479E4\n    b _02246858\n    ldr r0, [r5, #0x20]\n    mov r1, #0x44\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    mov r0, #0\n    add r1, r7, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x17\n    lsr r6, r0, #0x18\n    lsl r0, r4, #4\n    str r0, [sp, #0x1c]\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0224690C ; =0x00010200\n    ldr r3, [sp, #0x1c]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    add r0, r5, r0\n    add r1, r7, #0\n    mov r2, #0x78\n    bl ov83_02247998\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r5, r4\n    str r0, [sp, #0x18]\n    mov r0, #0\n    str r0, [sp]\n    ldr r3, [sp, #0x18]\n    ldr r2, _02246914 ; =0x000005E8\n    add r0, r5, #0\n    ldrb r2, [r3, r2]\n    mov r1, #0\n    mov r3, #2\n    bl ov83_02244A98\n    ldr r0, [r5, #0x20]\n    mov r1, #0x59\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    add r2, r7, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    ldr r1, [r5, #0x28]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0224690C ; =0x00010200\n    mov r3, #0x78\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #0x27\n    sub r3, r3, r6\n    lsl r0, r0, #4\n    sub r2, r3, r2\n    ldr r1, [r5, #0x28]\n    ldr r3, [sp, #0x1c]\n    add r0, r5, r0\n    bl ov83_02247998\n    add r0, r7, #0\n    bl String_Delete\n    mov r0, #0\n    str r0, [sp]\n    ldr r3, [sp, #0x18]\n    ldr r2, _02246918 ; =0x000005EC\n    add r0, r5, #0\n    ldrb r2, [r3, r2]\n    mov r1, #0\n    mov r3, #2\n    bl ov83_02244A98\n    add r6, #0x78\n    mov r1, #0x27\n    lsl r1, r1, #4\n    ldr r0, [sp, #0x1c]\n    str r6, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, _0224690C ; =0x00010200\n    add r1, r5, r1\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r2, [r5, #0x20]\n    add r0, r5, #0\n    mov r3, #0x59\n    bl ov83_02245D08\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    bhs _02246864\n    b _02246724\n    ldr r0, [sp, #0x14]\n    cmp r0, #1\n    bne _02246884\n    mov r4, #0xc\n    add r5, #0x50\n    lsl r0, r4, #4\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #0x22\n    bls _0224686E\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0x11\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x12\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #5\n    lsl r0, r0, #6\n    add r0, r5, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x16\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #6\n    lsl r0, r0, #6\n    add r0, r5, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r5, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x22\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #9\n    lsl r0, r0, #6\n    add r0, r5, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x26\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x27\n    lsl r0, r0, #4\n    add r0, r5, r0\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0224690C: .word 0x00010200\n    _02246910: .word 0x00000558\n    _02246914: .word 0x000005E8\n    _02246918: .word 0x000005EC"
    );
    #endif
}

void ov83_0224691C(void) {
    ov83_02245D48();
    ov83_02246114(r5, r4);
    ov83_02246988(r5);
}

void ov83_02246938(void) {
    /* Original at 0x02246938 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    cmp r1, #1\n    bne _02246962\n    mov r0, #0x11\n    lsl r0, r0, #4\n    mov r4, #0xc\n    add r5, r6, r0\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0x22\n    bls _02246948\n    ldr r0, _02246984 ; =0x00000544\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl ov83_0224755C\n    pop {r4, r5, r6, pc}\n    mov r0, #0x11\n    lsl r0, r0, #4\n    mov r5, #0xc\n    add r4, r6, r0\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #0x22\n    bls _0224696A\n    ldr r0, _02246984 ; =0x00000544\n    mov r1, #0\n    ldr r0, [r6, r0]\n    bl ov83_0224755C\n    pop {r4, r5, r6, pc}\n    _02246984: .word 0x00000544"
    );
    #endif
}

void ov83_02246988(void) {
    /* Original at 0x02246988 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0x14]\n    ldrb r1, [r4, #0xd]\n    bl ov83_02247768\n    ldr r3, _022469D4 ; =0x0000054C\n    ldr r1, [r4, r3]\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _022469B6\n    add r0, r3, #0\n    add r1, r3, #0\n    sub r0, #8\n    add r1, #0x74\n    add r3, #0x80\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r3, [r4, r3]\n    mov r2, #0\n    bl ov83_02247668\n    pop {r4, pc}\n    add r2, r3, #0\n    add r0, r3, #0\n    add r1, r3, #0\n    add r2, #0x78\n    sub r0, #8\n    add r1, #0x74\n    add r3, #0x80\n    ldrh r2, [r4, r2]\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r3, [r4, r3]\n    bl ov83_02247668\n    pop {r4, pc}\n    nop\n    _022469D4: .word 0x0000054C"
    );
    #endif
}

void ov83_022469D8(void) {
    ov83_02244CDC();
}

void ov83_022469E4(void) {
    /* Original at 0x022469E4 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    add r0, sp, #4\n    add r4, r1, #0\n    add r0, #2\n    add r1, sp, #4\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov83_02247988\n    ldr r0, _02246A90 ; =ov83_02248018\n    add r1, sp, #4\n    ldrh r2, [r0]\n    add r3, sp, #8\n    strh r2, [r1, #0x1c]\n    ldrh r2, [r0, #2]\n    strh r2, [r1, #0x1e]\n    ldrh r2, [r0, #4]\n    strh r2, [r1, #0x20]\n    ldrh r2, [r0, #6]\n    strh r2, [r1, #0x22]\n    ldrh r2, [r0, #8]\n    ldrh r0, [r0, #0xa]\n    strh r2, [r1, #0x24]\n    strh r0, [r1, #0x26]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #0x22]\n    ldrh r2, [r1]\n    add r0, r0, r2\n    sub r0, #0x1b\n    strh r0, [r1, #0x24]\n    strh r2, [r1, #0x26]\n    ldrh r0, [r1, #0x1c]\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #0x1e]\n    strh r0, [r1, #6]\n    ldrh r0, [r1, #0x20]\n    strh r0, [r1, #8]\n    ldrh r0, [r1, #0x22]\n    strh r0, [r1, #0xa]\n    ldrh r0, [r1, #0x24]\n    strh r0, [r1, #0xc]\n    ldrh r0, [r1, #0x26]\n    strh r0, [r1, #0xe]\n    ldr r0, _02246A94 ; =0x000005FC\n    ldr r2, [r5, r0]\n    sub r0, #8\n    str r2, [sp, #0x14]\n    ldr r2, [r5, #0x4c]\n    str r2, [sp, #0x18]\n    strb r4, [r1, #0x18]\n    add r1, sp, #0x30\n    ldrb r1, [r1, #0x10]\n    add r2, r6, #0\n    str r1, [sp]\n    add r1, r3, #0\n    ldr r0, [r5, r0]\n    add r3, r7, #0\n    bl ov83_02247CCC\n    ldr r1, _02246A98 ; =0x000005F8\n    str r0, [r5, r1]\n    ldrb r1, [r5, #0xf]\n    mov r0, #4\n    orr r0, r1\n    strb r0, [r5, #0xf]\n    ldrb r0, [r5, #9]\n    mov r1, #1\n    bl ov80_02237B24\n    add r4, r0, #0\n    ldr r0, _02246A9C ; =0x000004E4\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #1\n    bl ov83_0224773C\n    ldr r0, _02246AA0 ; =0x000004F4\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #1\n    bl ov83_0224773C\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    _02246A90: .word ov83_02248018\n    _02246A94: .word 0x000005FC\n    _02246A98: .word 0x000005F8\n    _02246A9C: .word 0x000004E4\n    _02246AA0: .word 0x000004F4"
    );
    #endif
}

void ov83_02246AA4(void) {
    /* Original at 0x02246AA4 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #4\n    mov r1, #0x6b\n    mov r4, #0\n    bl ListMenuItems_New\n    ldr r1, _02246B5C ; =0x000005FC\n    mov r2, #2\n    str r0, [r5, r1]\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    bl ov83_0224777C\n    add r7, r0, #0\n    ldrb r0, [r5, #0x14]\n    ldrb r1, [r5, #0xd]\n    bl ov83_02247768\n    add r6, r0, #0\n    ldr r0, _02246B60 ; =0x0000054C\n    ldr r1, [r5, r0]\n    ldrb r1, [r1, r6]\n    cmp r1, #0\n    bne _02246AEE\n    add r0, #0xb0\n    ldr r0, [r5, r0]\n    ldr r1, [r5, #0x20]\n    mov r2, #8\n    add r3, r4, #0\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, _02246B5C ; =0x000005FC\n    ldr r1, [r5, #0x20]\n    ldr r0, [r5, r0]\n    mov r2, #9\n    mov r3, #1\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, _02246B64 ; =0x00000554\n    ldr r1, [r5, r0]\n    ldrb r1, [r1, r6]\n    cmp r1, #0\n    beq _02246B1A\n    add r0, r0, #4\n    ldr r0, [r5, r0]\n    ldrb r0, [r0, r6]\n    cmp r0, #0\n    beq _02246B1A\n    cmp r7, #2\n    beq _02246B2E\n    ldr r0, _02246B5C ; =0x000005FC\n    ldr r1, [r5, #0x20]\n    ldr r0, [r5, r0]\n    mov r2, #0xa\n    mov r3, #2\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, _02246B5C ; =0x000005FC\n    mov r2, #0xb\n    add r3, r2, #0\n    ldr r0, [r5, r0]\n    ldr r1, [r5, #0x20]\n    sub r3, #0xd\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r3, r0, #0x10\n    lsl r1, r3, #0x18\n    ldr r4, _02246B68 ; =ov83_02248010\n    mov r0, #0xd\n    str r0, [sp]\n    ldrb r3, [r4, r3]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    mov r2, #0x11\n    bl ov83_022469E4\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02246B5C: .word 0x000005FC\n    _02246B60: .word 0x0000054C\n    _02246B64: .word 0x00000554\n    _02246B68: .word ov83_02248010"
    );
    #endif
}

void ov83_02246B6C(void) {
    /* Original at 0x02246B6C */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #4\n    mov r1, #0x6b\n    mov r4, #0\n    bl ListMenuItems_New\n    ldr r1, _02246C1C ; =0x000005FC\n    mov r2, #2\n    str r0, [r5, r1]\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    bl ov83_0224777C\n    add r6, r0, #0\n    ldrb r0, [r5, #0x14]\n    ldrb r1, [r5, #0xd]\n    bl ov83_02247768\n    add r7, r0, #0\n    ldr r0, _02246C20 ; =0x00000554\n    ldr r1, [r5, r0]\n    ldrb r1, [r1, r7]\n    cmp r1, #0\n    bne _02246BB6\n    add r0, #0xa8\n    ldr r0, [r5, r0]\n    ldr r1, [r5, #0x20]\n    mov r2, #0x21\n    mov r3, #3\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r6, #1\n    beq _02246BD8\n    ldr r0, _02246C24 ; =0x00000558\n    ldr r1, [r5, r0]\n    ldrb r1, [r1, r7]\n    cmp r1, #0\n    bne _02246BD8\n    add r0, #0xa4\n    ldr r0, [r5, r0]\n    ldr r1, [r5, #0x20]\n    mov r2, #0x22\n    mov r3, #4\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r6, #2\n    beq _02246BF0\n    ldr r0, _02246C1C ; =0x000005FC\n    ldr r1, [r5, #0x20]\n    ldr r0, [r5, r0]\n    mov r2, #0x23\n    mov r3, #5\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, _02246C1C ; =0x000005FC\n    mov r2, #0x24\n    add r3, r2, #0\n    ldr r0, [r5, r0]\n    ldr r1, [r5, #0x20]\n    sub r3, #0x26\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r3, r0, #0x10\n    lsl r1, r3, #0x18\n    ldr r4, _02246C28 ; =ov83_02248010\n    mov r0, #0xd\n    str r0, [sp]\n    ldrb r3, [r4, r3]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    mov r2, #0x11\n    bl ov83_022469E4\n    pop {r3, r4, r5, r6, r7, pc}\n    _02246C1C: .word 0x000005FC\n    _02246C20: .word 0x00000554\n    _02246C24: .word 0x00000558\n    _02246C28: .word ov83_02248010"
    );
    #endif
}

void ov83_02246C2C(void) {
    /* Original at 0x02246C2C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    mov r0, #3\n    mov r1, #0x6b\n    bl ListMenuItems_New\n    ldr r1, _02246C6C ; =0x000005FC\n    mov r4, #0\n    str r0, [r5, r1]\n    add r6, r1, #0\n    add r2, r4, #0\n    ldr r0, [r5, r6]\n    ldr r1, [r5, #0x20]\n    add r2, #0x16\n    add r3, r4, #0\n    bl ListMenuItems_AppendFromMsgData\n    add r4, r4, #1\n    cmp r4, #3\n    blo _02246C42\n    mov r0, #0xd\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #0x11\n    mov r3, #8\n    bl ov83_022469E4\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02246C6C: .word 0x000005FC"
    );
    #endif
}

void ov83_02246C70(void) {
    /* Original at 0x02246C70 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #9]\n    mov r1, #1\n    bl ov80_02237B24\n    add r4, r0, #0\n    ldr r0, _02246CB0 ; =0x000004E4\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    bl ov83_0224773C\n    ldr r0, _02246CB4 ; =0x000004F4\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    bl ov83_0224773C\n    ldr r0, _02246CB8 ; =0x000005F8\n    ldr r0, [r5, r0]\n    bl ov83_02247CE8\n    ldr r0, _02246CBC ; =0x000005FC\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    ldrb r1, [r5, #0xf]\n    mov r0, #4\n    bic r1, r0\n    strb r1, [r5, #0xf]\n    pop {r3, r4, r5, pc}\n    _02246CB0: .word 0x000004E4\n    _02246CB4: .word 0x000004F4\n    _02246CB8: .word 0x000005F8\n    _02246CBC: .word 0x000005FC"
    );
    #endif
}

void ov83_02246CC0(void) {
    /* Original at 0x02246CC0 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    ldr r1, _02246D3C ; =0x000005F8\n    add r4, r0, #0\n    ldr r0, [r4, r1]\n    add r3, r1, #0\n    add r0, #0x24\n    add r3, #8\n    ldrb r0, [r0]\n    ldr r3, [r4, r3]\n    cmp r3, r0\n    beq _02246D36\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    lsl r0, r0, #3\n    add r0, r1, r0\n    ldr r1, [r0, #4]\n    cmp r1, #2\n    bhi _02246CF4\n    cmp r1, #0\n    beq _02246CFE\n    cmp r1, #1\n    beq _02246D02\n    cmp r1, #2\n    beq _02246D06\n    b _02246D0C\n    mov r0, #1\n    mvn r0, r0\n    cmp r1, r0\n    beq _02246D0A\n    b _02246D0C\n    mov r2, #0xc\n    b _02246D0C\n    mov r2, #0xd\n    b _02246D0C\n    mov r2, #0xe\n    b _02246D0C\n    mov r2, #0xf\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    add r1, r4, #0\n    str r3, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    add r1, #0xc0\n    str r3, [sp, #0x14]\n    bl ov83_022447E0\n    ldr r0, _02246D3C ; =0x000005F8\n    ldr r1, [r4, r0]\n    add r0, #8\n    add r1, #0x24\n    ldrb r1, [r1]\n    str r1, [r4, r0]\n    add sp, #0x18\n    pop {r4, pc}\n    nop\n    _02246D3C: .word 0x000005F8"
    );
    #endif
}

void ov83_02246D40(void) {
    /* Original at 0x02246D40 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    mov r0, #6\n    lsl r0, r0, #8\n    ldr r1, [r5, r0]\n    sub r0, #8\n    ldr r0, [r5, r0]\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r1, r0\n    beq _02246DEA\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldrb r1, [r5, #9]\n    ldr r0, [r5, r0]\n    mov r2, #2\n    bl ov83_0224777C\n    cmp r0, #1\n    beq _02246D6E\n    mov r1, #1\n    b _02246D70\n    mov r1, #0\n    ldr r2, _02246DF0 ; =0x000005FC\n    ldr r0, [r5, r2]\n    sub r2, r2, #4\n    ldr r2, [r5, r2]\n    add r2, #0x24\n    ldrb r2, [r2]\n    lsl r2, r2, #3\n    add r0, r0, r2\n    ldr r2, [r0, #4]\n    cmp r2, #5\n    bhi _02246D96\n    cmp r2, #3\n    blo _02246DBE\n    beq _02246DA0\n    cmp r2, #4\n    beq _02246DA8\n    cmp r2, #5\n    beq _02246DB0\n    b _02246DBE\n    mov r0, #1\n    mvn r0, r0\n    cmp r2, r0\n    beq _02246DB8\n    b _02246DBE\n    ldr r0, _02246DF4 ; =ov83_02248024\n    lsl r1, r1, #1\n    ldrh r4, [r0, r1]\n    b _02246DBE\n    ldr r0, _02246DF8 ; =ov83_02248028\n    lsl r1, r1, #1\n    ldrh r4, [r0, r1]\n    b _02246DBE\n    ldr r0, _02246DFC ; =ov83_0224802C\n    lsl r1, r1, #1\n    ldrh r4, [r0, r1]\n    b _02246DBE\n    ldr r0, _02246E00 ; =ov83_02248030\n    lsl r1, r1, #1\n    ldrh r4, [r0, r1]\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    add r1, r5, #0\n    str r3, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0xf\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    add r1, #0xc0\n    add r2, r4, #0\n    str r3, [sp, #0x14]\n    bl ov83_022447E0\n    ldr r0, _02246E04 ; =0x000005F8\n    ldr r1, [r5, r0]\n    add r0, #8\n    add r1, #0x24\n    ldrb r1, [r1]\n    str r1, [r5, r0]\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    nop\n    _02246DF0: .word 0x000005FC\n    _02246DF4: .word ov83_02248024\n    _02246DF8: .word ov83_02248028\n    _02246DFC: .word ov83_0224802C\n    _02246E00: .word ov83_02248030\n    _02246E04: .word 0x000005F8"
    );
    #endif
}

void ov83_02246E08(void) {
    /* Original at 0x02246E08 */
    /* Requires manual decompilation - 373 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    str r1, [sp, #0x14]\n    mov r0, #0x20\n    mov r1, #0x6b\n    str r2, [sp, #0x18]\n    bl GF_CreateVramTransferManager\n    bl ov83_022472DC\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x80\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x20\n    str r3, [sp, #0xc]\n    mov r2, #0x6b\n    str r2, [sp, #0x10]\n    add r2, r0, #0\n    bl OamManager_Create\n    mov r0, #0x28\n    add r1, r5, #4\n    mov r2, #0x6b\n    bl G2dRenderer_Init\n    ldr r4, _02247148 ; =ov83_02248178\n    str r0, [r5]\n    mov r7, #0\n    add r6, r5, #0\n    ldrb r0, [r4]\n    add r1, r7, #0\n    mov r2, #0x6b\n    bl Create2DGfxResObjMan\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    add r7, r7, #1\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r7, #4\n    blt _02246E4C\n    add r0, r5, #0\n    bl ov83_022473BC\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #1\n    str r3, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xc1\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0xf\n    bl AddCharResObjFromNarc\n    mov r1, #0x4f\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    add r0, #0xc5\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x37\n    bl AddPlttResObjFromNarc\n    mov r1, #5\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xc9\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x11\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x51\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xcd\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x10\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x52\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0x12\n    mov r1, #0x6b\n    bl NARC_New\n    add r6, r5, #0\n    add r7, r0, #0\n    mov r4, #4\n    add r6, #0x40\n    mov r0, #0\n    mov r1, #1\n    bl GetItemIndexMapping\n    add r2, r0, #0\n    str r4, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xc1\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0x4f\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    mov r0, #0\n    mov r1, #2\n    bl GetItemIndexMapping\n    add r2, r0, #0\n    str r4, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    add r0, #0xc5\n    ldr r0, [r5, r0]\n    mov r1, #0x12\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    mov r1, #5\n    lsl r1, r1, #6\n    str r0, [r6, r1]\n    add r4, r4, #1\n    add r6, #0x10\n    cmp r4, #9\n    ble _02246EFC\n    bl GetItemIconCell\n    add r2, r0, #0\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xc9\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x61\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    bl GetItemIconAnim\n    add r2, r0, #0\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xcd\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0\n    mov r1, #2\n    bl GetItemIndexMapping\n    add r2, r0, #0\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    add r0, #0xc5\n    ldr r0, [r5, r0]\n    mov r1, #0x12\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    mov r1, #0x17\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r7, #0\n    bl NARC_Delete\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xc1\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x24\n    mov r3, #1\n    bl AddCharResObjFromNarc\n    mov r1, #0x5b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xc9\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x26\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x5d\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #3\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xcd\n    ldr r0, [r5, r0]\n    mov r1, #0xb8\n    mov r2, #0x25\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov83_02247314\n    mov r0, #0x14\n    mov r1, #0x6b\n    bl NARC_New\n    add r7, r0, #0\n    bl sub_02074490\n    add r2, r0, #0\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    add r0, #0xc5\n    ldr r0, [r5, r0]\n    mov r1, #0x14\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    mov r1, #0x1e\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    bl sub_02074498\n    add r2, r0, #0\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xc9\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x79\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    bl sub_020744A4\n    add r2, r0, #0\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xcd\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x7a\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r4, #0\n    add r6, r5, #0\n    cmp r4, #3\n    bne _022470CC\n    ldr r0, [sp, #0x18]\n    cmp r0, #0\n    bne _022470C2\n    ldr r0, [sp, #0x14]\n    mov r1, #0\n    bl Party_GetMonByIndex\n    b _022470D4\n    ldr r0, [sp, #0x14]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    b _022470D4\n    ldr r0, [sp, #0x14]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    bl Pokemon_GetIconNaix\n    add r2, r0, #0\n    add r0, r4, #0\n    add r0, #0xa\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xc1\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0x77\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    add r4, r4, #1\n    add r6, #0x10\n    cmp r4, #4\n    blt _022470AE\n    add r0, r7, #0\n    bl NARC_Delete\n    mov r7, #0x4f\n    mov r6, #0\n    add r4, r5, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    bl sub_0200ACF0\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, #0xe\n    blt _02247110\n    mov r6, #5\n    mov r4, #0\n    lsl r6, r6, #6\n    ldr r0, [r5, r6]\n    bl sub_0200AF94\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0xb\n    blt _02247124\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02247148: .word ov83_02248178"
    );
    #endif
}

void ov83_0224714C(void) {
    /* Original at 0x0224714C */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x80\n    add r4, r0, #0\n    mov r0, #0\n    str r3, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r5, #0\n    ldr r0, [sp, #0x98]\n    str r5, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldr r6, [r4, r0]\n    str r6, [sp, #0x14]\n    add r6, r0, #4\n    ldr r6, [r4, r6]\n    str r6, [sp, #0x18]\n    add r6, r0, #0\n    add r6, #8\n    ldr r6, [r4, r6]\n    add r0, #0xc\n    str r6, [sp, #0x1c]\n    ldr r0, [r4, r0]\n    str r0, [sp, #0x20]\n    str r5, [sp, #0x24]\n    str r5, [sp, #0x28]\n    add r0, sp, #0x5c\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r4]\n    add r1, r5, #0\n    str r0, [sp, #0x2c]\n    add r0, sp, #0x5c\n    str r0, [sp, #0x30]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r1, [sp, #0x34]\n    str r1, [sp, #0x38]\n    str r1, [sp, #0x3c]\n    str r0, [sp, #0x40]\n    str r0, [sp, #0x44]\n    str r0, [sp, #0x48]\n    add r0, sp, #0x2c\n    strh r1, [r0, #0x20]\n    ldr r0, [sp, #0x94]\n    str r0, [sp, #0x50]\n    add r0, sp, #0x80\n    ldrb r0, [r0, #0x1c]\n    cmp r0, #0\n    bne _022471BA\n    mov r0, #1\n    str r0, [sp, #0x54]\n    b _022471BE\n    mov r0, #2\n    str r0, [sp, #0x54]\n    mov r0, #0x6b\n    str r0, [sp, #0x58]\n    add r0, sp, #0x80\n    ldrb r0, [r0, #0x1c]\n    cmp r0, #1\n    bne _022471D4\n    mov r0, #3\n    ldr r1, [sp, #0x38]\n    lsl r0, r0, #0x12\n    add r0, r1, r0\n    str r0, [sp, #0x38]\n    add r0, sp, #0x2c\n    bl Sprite_CreateAffine\n    mov r1, #1\n    add r4, r0, #0\n    bl Sprite_SetAnimActiveFlag\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl Sprite_SetAnimSpeed\n    ldr r1, [sp, #0x90]\n    add r0, r4, #0\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #0\n    add sp, #0x80\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov83_022471FC(void) {
    /* Original at 0x022471FC */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r6, #0x4f\n    add r5, r0, #0\n    mov r4, #0\n    lsl r6, r6, #2\n    lsl r0, r4, #4\n    add r0, r5, r0\n    ldr r0, [r0, r6]\n    bl sub_0200AEB0\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #0xe\n    blo _02247206\n    mov r6, #5\n    mov r4, #0\n    lsl r6, r6, #6\n    lsl r0, r4, #4\n    add r0, r5, r0\n    ldr r0, [r0, r6]\n    bl sub_0200B0A8\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #0xb\n    blo _02247220\n    mov r6, #0x4b\n    mov r4, #0\n    lsl r6, r6, #2\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, r6]\n    bl Destroy2DGfxResObjMan\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _0224723A\n    ldr r0, [r5]\n    bl SpriteList_Delete\n    bl OamManager_Free\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov83_02247264(void) {
    /* Original at 0x02247264 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r6, r2, #0\n    bl SpriteResourceCollection_Find\n    add r4, r0, #0\n    add r0, r6, #0\n    mov r1, #1\n    bl GetItemIndexMapping\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x6b\n    str r0, [sp, #4]\n    add r0, #0xc1\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    mov r2, #0x12\n    bl ReplaceCharResObjFromNarc\n    add r0, r4, #0\n    bl sub_0200AE8C\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov83_022472A0(void) {
    /* Original at 0x022472A0 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r6, r2, #0\n    bl SpriteResourceCollection_Find\n    add r4, r0, #0\n    add r0, r6, #0\n    mov r1, #2\n    bl GetItemIndexMapping\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x6b\n    str r0, [sp, #4]\n    add r0, #0xc5\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    mov r2, #0x12\n    bl ReplacePlttResObjFromNarc\n    add r0, r4, #0\n    bl sub_0200B084\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov83_022472DC(void) {
    /* Original at 0x022472DC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _0224730C ; =ov83_0224817C\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    ldr r2, _02247310 ; =0x00100010\n    mov r1, #0x10\n    bl ObjCharTransfer_InitEx\n    mov r0, #0x20\n    mov r1, #0x6b\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    add sp, #0x10\n    pop {r4, pc}\n    _0224730C: .word ov83_0224817C\n    _02247310: .word 0x00100010"
    );
    #endif
}

void ov83_02247314(void) {
    /* Original at 0x02247314 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x15\n    mov r1, #0x6b\n    bl NARC_New\n    add r4, r0, #0\n    bl sub_0207CA9C\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xc1\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0x53\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    bl sub_0207CAA0\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    add r0, #0xc5\n    ldr r0, [r5, r0]\n    mov r1, #0x15\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    mov r1, #0x15\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    bl sub_0207CAA4\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xc9\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x55\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    bl sub_0207CAA8\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xcd\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x56\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_022473BC(void) {
    /* Original at 0x022473BC */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #8\n    mov r1, #0x6b\n    bl NARC_New\n    add r4, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xc1\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    mov r2, #0x4c\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0x57\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x6b\n    str r0, [sp, #0xc]\n    add r0, #0xc5\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    mov r2, #0x4b\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    mov r1, #0x16\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xc9\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    mov r2, #0x4d\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x59\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    add r0, #0xcd\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    mov r2, #0x4e\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_02247454(void) {
    /* Original at 0x02247454 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0x6b\n    mov r1, #8\n    add r7, r2, #0\n    str r3, [sp, #0x10]\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    strb r1, [r4]\n    strb r1, [r4, #1]\n    strb r1, [r4, #2]\n    strb r1, [r4, #3]\n    strb r1, [r4, #4]\n    strb r1, [r4, #5]\n    strb r1, [r4, #6]\n    strb r1, [r4, #7]\n    add r0, sp, #0x28\n    mov r2, #0x14\n    ldrsh r2, [r0, r2]\n    ldr r3, [sp, #0x10]\n    strh r2, [r4]\n    mov r2, #0x18\n    ldrsh r0, [r0, r2]\n    add r2, r7, #0\n    strh r0, [r4, #2]\n    ldr r0, [sp, #0x38]\n    str r0, [sp]\n    ldr r0, [sp, #0x44]\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov83_0224714C\n    str r0, [r4, #4]\n    add r1, sp, #0x28\n    mov r0, #0x14\n    ldrsh r0, [r1, r0]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x14]\n    mov r0, #0x18\n    ldrsh r0, [r1, r0]\n    add r1, sp, #0x14\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #4]\n    bl Sprite_SetMatrix\n    add r0, r4, #0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_022474C4(void) {
    /* Original at 0x022474C4 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0x6b\n    mov r1, #8\n    add r7, r2, #0\n    str r3, [sp, #0x10]\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    strb r1, [r4]\n    strb r1, [r4, #1]\n    strb r1, [r4, #2]\n    strb r1, [r4, #3]\n    strb r1, [r4, #4]\n    strb r1, [r4, #5]\n    strb r1, [r4, #6]\n    strb r1, [r4, #7]\n    add r0, sp, #0x28\n    mov r2, #0x14\n    ldrsh r2, [r0, r2]\n    ldr r3, [sp, #0x10]\n    strh r2, [r4]\n    mov r2, #0x18\n    ldrsh r0, [r0, r2]\n    add r2, r7, #0\n    strh r0, [r4, #2]\n    ldr r0, [sp, #0x38]\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r0, [sp, #0x44]\n    add r1, r6, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    bl ov83_0224714C\n    str r0, [r4, #4]\n    add r1, sp, #0x28\n    mov r0, #0x14\n    ldrsh r0, [r1, r0]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x14]\n    mov r0, #0x18\n    ldrsh r1, [r1, r0]\n    lsl r0, r0, #0xf\n    lsl r1, r1, #0xc\n    add r0, r1, r0\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #4]\n    add r1, sp, #0x14\n    bl Sprite_SetMatrix\n    add r0, r4, #0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_0224753C(void) {
    /* Original at 0x0224753C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _0224754A\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #4]\n    bl Sprite_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov83_0224755C(void) {
    Sprite_SetDrawFlag();
}

void ov83_02247568(void) {
    /* Original at 0x02247568 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r4, r1, #0\n    add r6, r2, #0\n    bl Sprite_GetMatrixPtr\n    add r3, r0, #0\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    add r7, r2, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, r7, #0\n    str r0, [r2]\n    lsl r0, r4, #0xc\n    str r0, [sp]\n    lsl r0, r6, #0xc\n    str r0, [sp, #4]\n    ldr r0, [r5, #4]\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_0224759C(void) {
    /* Original at 0x0224759C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r4, r1, #0\n    add r6, r2, #0\n    bl Sprite_GetMatrixPtr\n    add r3, r0, #0\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    add r7, r2, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    lsl r1, r6, #0xc\n    str r0, [r2]\n    lsl r0, r4, #0xc\n    str r0, [sp]\n    mov r0, #3\n    lsl r0, r0, #0x12\n    add r0, r1, r0\n    str r0, [sp, #4]\n    ldr r0, [r5, #4]\n    add r1, r7, #0\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_022475D4(void) {
    /* Original at 0x022475D4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r4, r1, #0\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    ldr r0, [r5, #4]\n    add r1, r4, #0\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_022475EC(void) {
    /* Original at 0x022475EC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl Pokemon_GetIconPalette\n    add r1, r0, #0\n    ldr r0, [r4, #4]\n    bl Sprite_SetPalOffsetRespectVramOffset\n    pop {r4, pc}"
    );
    #endif
}

void ov83_02247600(void) {
    ov80_0222A3D4();
}

void ov83_0224760C(void) {
    ov80_0222A400(0, 2);
}

void ov83_02247624(void) {
    Sprite_IsAnimated();
}

void ov83_02247630(void) {
    /* Original at 0x02247630 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    mov r1, #0xb\n    bl ov83_022475D4\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov83_02247568\n    add r0, r5, #0\n    mov r1, #1\n    bl ov83_0224755C\n    ldr r0, _02247660 ; =0x000005E3\n    bl PlaySE\n    ldr r0, _02247664 ; =0x00000655\n    bl PlaySE\n    pop {r4, r5, r6, pc}\n    nop\n    _02247660: .word 0x000005E3\n    _02247664: .word 0x00000655"
    );
    #endif
}

void ov83_02247668(void) {
    /* Original at 0x02247668 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r7, r3, #0\n    add r6, r2, #0\n    ldr r3, _02247738 ; =ov83_0224818C\n    add r2, sp, #0x20\n    add r5, r0, #0\n    str r1, [sp, #0x14]\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r1, #0x32\n    mov r0, #0x6b\n    lsl r1, r1, #6\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    cmp r6, #0\n    beq _022476C0\n    ldr r1, [sp, #0x14]\n    add r0, sp, #0x30\n    mov r2, #2\n    mov r3, #0\n    bl GetBoxmonSpriteCharAndPlttNarcIds\n    str r4, [sp]\n    str r7, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    str r6, [sp, #0x10]\n    add r1, sp, #0x1c\n    ldrh r0, [r1, #0x14]\n    ldrh r1, [r1, #0x16]\n    mov r2, #0x6b\n    add r3, sp, #0x20\n    bl sub_02014510\n    add r0, sp, #0x1c\n    ldrh r7, [r0, #0x14]\n    ldrh r6, [r0, #0x18]\n    b _022476EA\n    mov r0, #0x6b\n    str r0, [sp]\n    mov r0, #0xb8\n    mov r1, #0x27\n    mov r2, #1\n    add r3, sp, #0x1c\n    bl GfGfxLoader_GetCharData\n    add r6, r0, #0\n    ldr r0, [sp, #0x1c]\n    mov r2, #0x32\n    ldr r0, [r0, #0x14]\n    add r1, r4, #0\n    lsl r2, r2, #6\n    bl MIi_CpuCopy32\n    add r0, r6, #0\n    bl Heap_Free\n    mov r7, #0xb8\n    mov r6, #0x3d\n    ldr r0, [r5, #4]\n    bl Sprite_GetImageProxy\n    mov r1, #2\n    bl NNS_G2dGetImageLocation\n    mov r1, #0x32\n    str r0, [sp, #0x18]\n    add r0, r4, #0\n    lsl r1, r1, #6\n    bl DC_FlushRange\n    mov r2, #0x32\n    ldr r1, [sp, #0x18]\n    add r0, r4, #0\n    lsl r2, r2, #6\n    bl GXS_LoadOBJ\n    ldr r0, [r5, #4]\n    bl Sprite_GetPaletteProxy\n    mov r1, #2\n    bl NNS_G2dGetImagePaletteLocation\n    add r3, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x6b\n    str r0, [sp, #4]\n    add r0, r7, #0\n    add r1, r6, #0\n    mov r2, #5\n    bl GfGfxLoader_GXLoadPal\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    _02247738: .word ov83_0224818C"
    );
    #endif
}

void ov83_0224773C(void) {
    /* Original at 0x0224773C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    cmp r2, #1\n    bne _0224774A\n    mov r7, #1\n    b _0224774C\n    mov r7, #0\n    mov r4, #0\n    cmp r6, #0\n    bls _02247764\n    ldr r0, [r5]\n    add r1, r7, #0\n    ldr r0, [r0, #4]\n    bl Sprite_SetOamMode\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r6\n    blo _02247752\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_02247768(void) {
    /* Original at 0x02247768 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov83_0224776C(void) {
    /* Original at 0x0224776C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, r0\n    blo _02247776\n    sub r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov83_0224777C(void) {
    /* Original at 0x0224777C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl Save_Frontier_GetStatic\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0205C174\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0205C174\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_022477B0(void) {
    PlaySE(0);
}

void ov83_022477C4(void) {
    /* Original at 0x022477C4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_0203769C\n    mov r1, #1\n    eor r0, r1\n    bl sub_02034818\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl BufferPlayersName\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_022477E4(void) {
    /* Original at 0x022477E4 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov83_022477EC(void) {
    /* Original at 0x022477EC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    lsl r5, r0, #2\n    add r0, r1, #1\n    add r4, r0, #0\n    mov r0, #0xf\n    add r1, r0, #0\n    lsl r1, r5\n    sub r0, #0x10\n    ldr r3, [r2]\n    eor r0, r1\n    lsl r4, r5\n    and r0, r3\n    orr r0, r4\n    str r0, [r2]\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov83_0224780C(void) {
    /* Original at 0x0224780C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r4, #0\n    mov r6, #0xf\n    ldr r1, [r5]\n    lsl r0, r4, #2\n    lsr r1, r0\n    add r0, r1, #0\n    and r0, r6\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    beq _02247832\n    sub r1, r1, #1\n    lsl r0, r4, #0x18\n    lsl r1, r1, #0x18\n    lsr r0, r0, #0x18\n    lsr r1, r1, #0x18\n    bl ToggleBgLayer\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #7\n    bls _02247814\n    add r0, r5, #0\n    bl ov83_022477E4\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov83_02247844(void) {
    YesNoPrompt_Create(0, 0x6b);
}

void ov83_02247858(void) {
    YesNoPrompt_Destroy();
}

void ov83_02247864(void) {
    /* Original at 0x02247864 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    add r5, r1, #0\n    add r0, sp, #0\n    add r0, #2\n    add r1, sp, #0\n    str r5, [r4, #8]\n    bl ov83_02247988\n    mov r0, #0\n    str r5, [sp, #4]\n    str r0, [sp, #8]\n    add r2, sp, #0\n    ldrh r1, [r2, #2]\n    str r1, [sp, #0xc]\n    mov r1, #0xb\n    str r1, [sp, #0x10]\n    mov r1, #0x19\n    strb r1, [r2, #0x14]\n    mov r1, #0xa\n    strb r1, [r2, #0x15]\n    ldrb r3, [r2, #0x16]\n    mov r1, #0xf\n    bic r3, r1\n    strb r3, [r2, #0x16]\n    ldrb r3, [r2, #0x16]\n    mov r1, #0xf0\n    bic r3, r1\n    strb r3, [r2, #0x16]\n    strb r0, [r2, #0x17]\n    ldr r0, [r4]\n    add r1, sp, #4\n    bl YesNoPrompt_InitFromTemplate\n    mov r0, #1\n    str r0, [r4, #4]\n    add sp, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov83_022478B4(void) {
    /* Original at 0x022478B4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _022478D0\n    ldr r0, [r4]\n    bl YesNoPrompt_Reset\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl BgCommitTilemapBufferToVram\n    mov r0, #0\n    str r0, [r4, #4]\n    pop {r4, pc}"
    );
    #endif
}

void ov83_022478D4(void) {
    /* Original at 0x022478D4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    add r5, r1, #0\n    ldr r0, _02247914 ; =ov83_0224819C\n    lsl r1, r2, #3\n    ldr r0, [r0, r1]\n    mov r4, #0\n    str r0, [sp, #4]\n    ldr r0, _02247918 ; =ov83_0224819C + 4\n    ldr r7, [r0, r1]\n    cmp r7, #0\n    bls _02247910\n    ldr r2, [sp, #4]\n    lsl r6, r4, #4\n    lsl r3, r4, #3\n    ldr r0, [sp]\n    add r1, r5, r6\n    add r2, r2, r3\n    bl AddWindow\n    add r0, r5, r6\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, r7\n    blo _022478EE\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02247914: .word ov83_0224819C\n    _02247918: .word ov83_0224819C + 4"
    );
    #endif
}

void ov83_0224791C(void) {
    /* Original at 0x0224791C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _02247940 ; =ov83_0224819C + 4\n    lsl r1, r1, #3\n    ldr r5, [r0, r1]\n    mov r4, #0\n    cmp r5, #0\n    bls _0224793E\n    lsl r0, r4, #4\n    add r0, r6, r0\n    bl RemoveWindow\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, r5\n    blo _0224792C\n    pop {r4, r5, r6, pc}\n    _02247940: .word ov83_0224819C + 4"
    );
    #endif
}

void ov83_02247944(void) {
    /* Original at 0x02247944 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r4, r0, #0\n    bl GetWindowBgId\n    add r1, r0, #0\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x6b\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r2, _02247984 ; =0x000003D9\n    mov r3, #0xa\n    bl LoadUserFrameGfx2\n    add r0, r4, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r2, _02247984 ; =0x000003D9\n    add r0, r4, #0\n    mov r1, #1\n    mov r3, #0xa\n    bl DrawFrameAndWindow2\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _02247984: .word 0x000003D9"
    );
    #endif
}

void ov83_02247988(void) {
    /* Original at 0x02247988 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xf0\n    strh r2, [r1]\n    ldr r1, _02247994 ; =0x000002E9\n    strh r1, [r0]\n    bx lr\n    nop\n    _02247994: .word 0x000002E9"
    );
    #endif
}

void ov83_02247998(void) {
    /* Original at 0x02247998 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    ldr r0, [sp, #0x30]\n    add r7, r1, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    cmp r0, #1\n    bne _022479B6\n    ldr r0, [sp, #0x28]\n    mov r2, #0\n    bl FontID_String_GetWidth\n    sub r5, r5, r0\n    b _022479C6\n    cmp r0, #2\n    bne _022479C6\n    ldr r0, [sp, #0x28]\n    mov r2, #0\n    bl FontID_String_GetWidth\n    lsr r0, r0, #1\n    sub r5, r5, r0\n    str r4, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    ldr r1, [sp, #0x28]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    add r2, r7, #0\n    add r3, r5, #0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov83_022479E4(void) {
    /* Original at 0x022479E4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    add r6, r3, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r0, [sp, #0x24]\n    ldr r3, [sp, #0x20]\n    str r0, [sp]\n    ldr r0, [sp, #0x28]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl ov83_02247998\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov83_02247A18(void) {
    GridInputHandler_Free();
}

void ov83_02247A20(void) {
    /* Original at 0x02247A20 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov83_02247A24(void) {
    /* Original at 0x02247A24 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    add r3, r0, #0\n    cmp r2, #3\n    bne _02247A4A\n    mov r0, #1\n    str r0, [sp]\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    ldr r0, _02247A68 ; =ov83_02248530\n    ldr r1, _02247A6C ; =ov83_022485A8\n    ldr r2, _02247A70 ; =ov83_02248500\n    bl GridInputHandler_Create\n    add sp, #0xc\n    pop {pc}\n    mov r0, #1\n    str r0, [sp]\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    ldr r0, _02247A74 ; =ov83_02248558\n    ldr r1, _02247A78 ; =ov83_022485E8\n    ldr r2, _02247A70 ; =ov83_02248500\n    bl GridInputHandler_Create\n    add sp, #0xc\n    pop {pc}\n    nop\n    _02247A68: .word ov83_02248530\n    _02247A6C: .word ov83_022485A8\n    _02247A70: .word ov83_02248500\n    _02247A74: .word ov83_02248558\n    _02247A78: .word ov83_022485E8"
    );
    #endif
}

void ov83_02247A7C(void) {
    /* Original at 0x02247A7C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    add r3, r0, #0\n    cmp r2, #3\n    bne _02247AA2\n    mov r0, #1\n    str r0, [sp]\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    ldr r0, _02247AC0 ; =ov83_02248530\n    ldr r1, _02247AC4 ; =ov83_022485A8\n    ldr r2, _02247AC8 ; =ov83_02248510\n    bl GridInputHandler_Create\n    add sp, #0xc\n    pop {pc}\n    mov r0, #1\n    str r0, [sp]\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    ldr r0, _02247ACC ; =ov83_02248558\n    ldr r1, _02247AD0 ; =ov83_022485E8\n    ldr r2, _02247AC8 ; =ov83_02248510\n    bl GridInputHandler_Create\n    add sp, #0xc\n    pop {pc}\n    nop\n    _02247AC0: .word ov83_02248530\n    _02247AC4: .word ov83_022485A8\n    _02247AC8: .word ov83_02248510\n    _02247ACC: .word ov83_02248558\n    _02247AD0: .word ov83_022485E8"
    );
    #endif
}

void ov83_02247AD4(void) {
    /* Original at 0x02247AD4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl GridInputHandler_HandleInput_NoHold\n    add r1, r0, #4\n    cmp r1, #3\n    bhi _02247AF6\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02247AEC: ; jump table\n    pop {r3, pc}\n    lsl r1, r0, #2\n    ldr r0, _02247B00 ; =ov83_02248544\n    ldr r0, [r0, r1]\n    pop {r3, pc}\n    nop\n    _02247B00: .word ov83_02248544"
    );
    #endif
}

void ov83_02247B04(void) {
    GridInputHandler_GetNextInput();
    GridInputHandler_SetNextLastUnk0FInputs(r4, 0, r0, r0);
}

void ov83_02247B1C(void) {
    /* Original at 0x02247B1C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02247B2C ; =ov83_02248544\n    lsl r1, r1, #2\n    lsl r2, r2, #2\n    ldr r1, [r3, r1]\n    ldr r2, [r3, r2]\n    ldr r3, _02247B30 ; =ov83_02242AB4\n    bx r3\n    nop\n    _02247B2C: .word ov83_02248544\n    _02247B30: .word ov83_02242AB4"
    );
    #endif
}

void ov83_02247B34(void) {
    /* Original at 0x02247B34 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02247B44 ; =ov83_02248544\n    lsl r1, r1, #2\n    lsl r2, r2, #2\n    ldr r1, [r3, r1]\n    ldr r2, [r3, r2]\n    ldr r3, _02247B48 ; =ov83_02242AB4\n    bx r3\n    nop\n    _02247B44: .word ov83_02248544\n    _02247B48: .word ov83_02242AB4"
    );
    #endif
}

void ov83_02247B4C(void) {
    /* Original at 0x02247B4C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02247B5C ; =ov83_02248544\n    lsl r1, r1, #2\n    lsl r2, r2, #2\n    ldr r1, [r3, r1]\n    ldr r2, [r3, r2]\n    ldr r3, _02247B60 ; =ov83_022469D8\n    bx r3\n    nop\n    _02247B5C: .word ov83_02248544\n    _02247B60: .word ov83_022469D8"
    );
    #endif
}

void ov83_02247B64(void) {
    /* Original at 0x02247B64 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02247B74 ; =ov83_02248544\n    lsl r1, r1, #2\n    lsl r2, r2, #2\n    ldr r1, [r3, r1]\n    ldr r2, [r3, r2]\n    ldr r3, _02247B78 ; =ov83_022469D8\n    bx r3\n    nop\n    _02247B74: .word ov83_02248544\n    _02247B78: .word ov83_022469D8"
    );
    #endif
}

void ov83_02247B7C(void) {
    /* Original at 0x02247B7C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x6b\n    str r0, [sp, #8]\n    ldr r0, _02247BB8 ; =ov83_022485C8\n    ldr r1, _02247BBC ; =ov83_02248610\n    ldr r2, _02247BC0 ; =ov83_02248520\n    add r3, r4, #0\n    bl GridInputHandler_Create\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #0x40\n    mov r2, #0x34\n    mov r3, #3\n    bl ov83_02242AC0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov83_02242AE0\n    add r0, r5, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _02247BB8: .word ov83_022485C8\n    _02247BBC: .word ov83_02248610\n    _02247BC0: .word ov83_02248520"
    );
    #endif
}

void ov83_02247BC4(void) {
    /* Original at 0x02247BC4 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl GridInputHandler_HandleInput_NoHold\n    add r1, r0, #4\n    cmp r1, #3\n    bhi _02247C28\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02247BDE: ; jump table\n    pop {r4, pc}\n    ldr r0, _02247C4C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0x20\n    tst r0, r1\n    beq _02247C08\n    add r0, r4, #0\n    bl GridInputHandler_GetNextInput\n    cmp r0, #0\n    beq _02247C04\n    cmp r0, #2\n    beq _02247C04\n    cmp r0, #4\n    bne _02247C08\n    mov r0, #6\n    pop {r4, pc}\n    ldr r0, _02247C4C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0x10\n    tst r0, r1\n    beq _02247C30\n    add r0, r4, #0\n    bl GridInputHandler_GetNextInput\n    cmp r0, #1\n    beq _02247C24\n    cmp r0, #3\n    beq _02247C24\n    cmp r0, #5\n    bne _02247C30\n    mov r0, #7\n    pop {r4, pc}\n    lsl r1, r0, #2\n    ldr r0, _02247C50 ; =ov83_0224858C\n    ldr r0, [r0, r1]\n    pop {r4, pc}\n    ldr r0, _02247C54 ; =ov83_022484F4\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    cmp r0, #0\n    bne _02247C3E\n    mov r0, #6\n    pop {r4, pc}\n    cmp r0, #1\n    bne _02247C46\n    mov r0, #7\n    pop {r4, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, pc}\n    _02247C4C: .word gSystem\n    _02247C50: .word ov83_0224858C\n    _02247C54: .word ov83_022484F4"
    );
    #endif
}

void ov83_02247C58(void) {
    /* Original at 0x02247C58 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    ldr r1, _02247C7C ; =ov83_02248610\n    lsl r3, r4, #3\n    ldr r2, _02247C80 ; =ov83_02248611\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r3, _02247C84 ; =ov83_02248570\n    lsl r6, r4, #2\n    ldr r3, [r3, r6]\n    add r5, r0, #0\n    bl ov83_02242AC0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov83_02242AE0\n    pop {r4, r5, r6, pc}\n    _02247C7C: .word ov83_02248610\n    _02247C80: .word ov83_02248611\n    _02247C84: .word ov83_02248570"
    );
    #endif
}

void ov83_02247C88(void) {
    /* Original at 0x02247C88 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    ldr r1, _02247CAC ; =ov83_02248610\n    lsl r3, r4, #3\n    ldr r2, _02247CB0 ; =ov83_02248611\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r3, _02247CB4 ; =ov83_02248570\n    lsl r6, r4, #2\n    ldr r3, [r3, r6]\n    add r5, r0, #0\n    bl ov83_02242AC0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov83_02242AE0\n    pop {r4, r5, r6, pc}\n    _02247CAC: .word ov83_02248610\n    _02247CB0: .word ov83_02248611\n    _02247CB4: .word ov83_02248570"
    );
    #endif
}

void ov83_02247CB8(void) {
    TouchscreenListMenuSpawner_Create();
}

void ov83_02247CC4(void) {
    TouchscreenListMenuSpawner_Destroy();
}

void ov83_02247CCC(void) {
    TouchscreenListMenu_Create(0);
}

void ov83_02247CE8(void) {
    TouchscreenListMenu_Destroy();
}

void ov83_02247CF0(void) {
    System_GetTouchNew(1, 3);
}
