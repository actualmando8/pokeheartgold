/* Decompiled from asm/overlay_01_021FB878.s */
#include "global.h"

void ov01_021FB878(void) {
    /* Original at 0x021FB878 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r1, #0x14]\n    ldr r3, _021FB884 ; =Heap_Realloc\n    add r1, r1, r2\n    sub r1, r1, r0\n    bx r3\n    nop\n    _021FB884: .word Heap_Realloc"
    );
    #endif
}

void ov01_021FB888(void) {
    /* Original at 0x021FB888 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _021FB8F8 ; =0x000008C4\n    add r5, r0, #0\n    mov r0, #4\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r0, #4\n    mov r1, #0x10\n    bl Heap_AllocAtEnd\n    ldr r1, _021FB8FC ; =0x000008B8\n    mov r2, #0\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    str r5, [r0]\n    ldr r0, [r4, r1]\n    sub r1, #8\n    str r2, [r0, #4]\n    add r0, r4, r1\n    mov r1, #0x2a\n    add r2, r5, #0\n    bl ReadWholeNarcMemberByIdPair\n    ldr r0, _021FB900 ; =0x000008B6\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _021FB8D8\n    mov r0, #0x6b\n    mov r1, #4\n    bl NARC_New\n    mov r1, #0x23\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    mov r0, #0x28\n    mov r1, #4\n    bl NARC_New\n    b _021FB8EE\n    mov r0, #0x6c\n    mov r1, #4\n    bl NARC_New\n    mov r1, #0x23\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    mov r0, #0x94\n    mov r1, #4\n    bl NARC_New\n    ldr r1, _021FB8FC ; =0x000008B8\n    ldr r1, [r4, r1]\n    str r0, [r1, #8]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _021FB8F8: .word 0x000008C4\n    _021FB8FC: .word 0x000008B8\n    _021FB900: .word 0x000008B6"
    );
    #endif
}

void ov01_021FB904(void) {
    /* Original at 0x021FB904 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x23\n    lsl r1, r1, #6\n    ldr r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov01_021FB90C(void) {
    /* Original at 0x021FB90C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bne _021FB918\n    bl GF_AssertFail\n    add r2, r4, #4\n    lsl r1, r5, #2\n    ldr r0, [r2, r1]\n    cmp r0, #0\n    bne _021FB930\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _021FB92C\n    bl GF_AssertFail\n    add r0, r4, #4\n    pop {r3, r4, r5, pc}\n    add r0, r2, r1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FB934(void) {
    GF_AssertFail();
}

void ov01_021FB944(void) {
    /* Original at 0x021FB944 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x23\n    ldr r1, [r5]\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    bl NARC_Delete\n    ldr r1, [r5]\n    ldr r0, _021FB9BC ; =0x000008AC\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _021FB962\n    bl ov01_021EA7E0\n    mov r6, #0\n    ldr r7, _021FB9C0 ; =0x00000226\n    add r4, r6, #0\n    ldr r0, [r5]\n    add r0, r0, r4\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    beq _021FB976\n    bl Heap_Free\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r7\n    blt _021FB968\n    ldr r1, [r5]\n    ldr r0, _021FB9C4 ; =0x000008BC\n    ldr r0, [r1, r0]\n    bl Heap_Free\n    ldr r1, [r5]\n    ldr r0, _021FB9C8 ; =0x0000089C\n    ldr r0, [r1, r0]\n    bl Heap_Free\n    ldr r1, [r5]\n    ldr r0, _021FB9C8 ; =0x0000089C\n    mov r2, #0\n    str r2, [r1, r0]\n    ldr r1, [r5]\n    add r0, r0, #4\n    ldr r0, [r1, r0]\n    bl Heap_Free\n    mov r0, #0x8a\n    ldr r1, [r5]\n    mov r2, #0\n    lsl r0, r0, #4\n    str r2, [r1, r0]\n    ldr r0, [r5]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FB9BC: .word 0x000008AC\n    _021FB9C0: .word 0x00000226\n    _021FB9C4: .word 0x000008BC\n    _021FB9C8: .word 0x0000089C"
    );
    #endif
}

void ov01_021FB9CC(void) {
    GF_AssertFail();
}

void ov01_021FB9E0(void) {
    GF_AssertFail();
}

void ov01_021FB9F4(void) {
    /* Original at 0x021FB9F4 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021FB9FC ; =0x000008AC\n    ldr r0, [r0, r1]\n    bx lr\n    nop\n    _021FB9FC: .word 0x000008AC"
    );
    #endif
}

void ov01_021FBA00(void) {
    /* Original at 0x021FBA00 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021FBA10 ; =0x000008B7\n    ldrb r0, [r0, r1]\n    cmp r0, #0\n    beq _021FBA0C\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _021FBA10: .word 0x000008B7"
    );
    #endif
}

void ov01_021FBA14(void) {
    /* Original at 0x021FBA14 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021FBA38 ; =0x000008B7\n    ldrb r0, [r0, r1]\n    cmp r0, #0\n    beq _021FBA26\n    cmp r0, #1\n    beq _021FBA2A\n    cmp r0, #2\n    beq _021FBA2E\n    b _021FBA32\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    mov r0, #3\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _021FBA38: .word 0x000008B7"
    );
    #endif
}

void ov01_021FBA3C(void) {
    /* Original at 0x021FBA3C */
    /* Requires manual decompilation - 280 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x13c\n    str r1, [sp, #0xc]\n    add r5, r0, #0\n    ldr r1, _021FBC94 ; =0x000008B8\n    ldr r0, [sp, #0x150]\n    ldr r6, [r5, r1]\n    sub r1, #8\n    str r2, [sp, #0x10]\n    str r0, [sp, #0x150]\n    ldrh r1, [r5, r1]\n    mov r0, #0x2b\n    mov r2, #4\n    add r4, r3, #0\n    bl AllocAndReadWholeNarcMemberByIdPair\n    ldr r1, _021FBC98 ; =0x000008BC\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    ldrh r1, [r0]\n    ldr r0, _021FBC9C ; =0x00000226\n    strh r1, [r6, #0xc]\n    cmp r1, r0\n    blo _021FBA70\n    bl GF_AssertFail\n    ldr r1, _021FBCA0 ; =0x000008B2\n    mov r0, #0x2c\n    ldrh r1, [r5, r1]\n    mov r2, #4\n    bl AllocAndReadWholeNarcMemberByIdPair\n    ldr r1, _021FBCA4 ; =0x0000089C\n    mov r2, #4\n    str r0, [r5, r1]\n    add r1, #0x14\n    ldrh r1, [r5, r1]\n    mov r0, #0x46\n    bl AllocAndReadWholeNarcMemberByIdPair\n    mov r1, #0x8a\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    sub r0, r1, #4\n    ldr r0, [r5, r0]\n    bl NNS_G3dGetTex\n    ldr r1, _021FBCA8 ; =0x000008A4\n    str r0, [r5, r1]\n    ldrh r0, [r6, #0xc]\n    cmp r0, #0\n    beq _021FBAB2\n    sub r0, r1, #4\n    ldr r0, [r5, r0]\n    bl NNS_G3dGetTex\n    ldr r1, _021FBCAC ; =0x000008A8\n    str r0, [r5, r1]\n    b _021FBAB8\n    mov r2, #0\n    add r0, r1, #4\n    str r2, [r5, r0]\n    ldr r0, _021FBCA8 ; =0x000008A4\n    ldr r0, [r5, r0]\n    bl GF3dRender_AllocAndLoadTexResources\n    cmp r0, #0\n    bne _021FBAC8\n    bl GF_AssertFail\n    ldr r1, _021FBCA4 ; =0x0000089C\n    ldr r0, [r5, r1]\n    add r1, #8\n    ldr r1, [r5, r1]\n    bl ov01_021FB878\n    ldr r0, _021FBCAC ; =0x000008A8\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _021FBAF6\n    bl GF3dRender_AllocAndLoadTexResources\n    cmp r0, #0\n    bne _021FBAE8\n    bl GF_AssertFail\n    mov r1, #0x8a\n    lsl r1, r1, #4\n    ldr r0, [r5, r1]\n    add r1, #8\n    ldr r1, [r5, r1]\n    bl ov01_021FB878\n    ldr r0, _021FBCB0 ; =0x000008B4\n    ldrh r1, [r5, r0]\n    ldr r0, _021FBCB4 ; =0x0000FFFF\n    cmp r1, r0\n    beq _021FBB06\n    add r0, r4, #0\n    bl ov01_0220463C\n    mov r2, #0\n    ldr r0, _021FBC9C ; =0x00000226\n    add r3, r5, #0\n    add r1, r2, #0\n    add r2, r2, #1\n    str r1, [r3, #4]\n    add r3, r3, #4\n    cmp r2, r0\n    blt _021FBB0E\n    ldr r0, _021FBCB8 ; =0x000008AC\n    str r1, [r5, r0]\n    ldr r0, [sp, #0x10]\n    bl ov01_021E8B9C\n    str r0, [sp, #0x1c]\n    mov r0, #0\n    str r0, [sp, #0x20]\n    ldrh r0, [r6, #0xc]\n    cmp r0, #0\n    ble _021FBBEC\n    ldr r0, [sp, #0x20]\n    str r0, [sp, #0x18]\n    ldr r0, _021FBC98 ; =0x000008BC\n    ldr r1, [r5, r0]\n    ldr r0, [sp, #0x18]\n    add r0, r1, r0\n    ldrh r4, [r0, #2]\n    lsl r0, r4, #2\n    add r0, r5, r0\n    str r0, [sp, #0x14]\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    beq _021FBB4C\n    bl GF_AssertFail\n    lsl r0, r4, #2\n    add r7, r5, r0\n    ldr r0, [r6, #8]\n    add r1, r4, #0\n    mov r2, #4\n    bl NARC_AllocAndReadWholeMember\n    str r0, [r7, #4]\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    add r2, sp, #0x24\n    bl NARC_ReadWholeMember\n    ldr r1, _021FBCAC ; =0x000008A8\n    ldr r0, [r7, #4]\n    ldr r1, [r5, r1]\n    bl GF3dRender_BindModelSet\n    cmp r0, #0\n    bne _021FBB7C\n    bl GF_AssertFail\n    add r0, sp, #0x24\n    ldrb r0, [r0, #3]\n    cmp r0, #0\n    bne _021FBBDA\n    ldr r0, [sp, #0xc]\n    add r1, r4, #0\n    bl ov01_022040A4\n    add r7, r0, #0\n    ldr r0, [sp, #0x1c]\n    cmp r4, r0\n    bge _021FBBDA\n    ldr r0, [sp, #0x14]\n    ldr r0, [r0, #4]\n    bl NNS_G3dGetMdlSet\n    cmp r0, #0\n    beq _021FBBC0\n    add r1, r0, #0\n    add r1, #8\n    beq _021FBBB4\n    ldrb r2, [r0, #9]\n    cmp r2, #0\n    bls _021FBBB4\n    ldrh r2, [r0, #0xe]\n    add r1, r1, r2\n    add r1, r1, #4\n    b _021FBBB6\n    mov r1, #0\n    cmp r1, #0\n    beq _021FBBC0\n    ldr r1, [r1]\n    add r1, r0, r1\n    b _021FBBC2\n    mov r1, #0\n    add r0, sp, #0x24\n    str r0, [sp]\n    ldr r0, [sp, #0x10]\n    ldr r3, _021FBCAC ; =0x000008A8\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x150]\n    add r2, r7, #0\n    str r0, [sp, #8]\n    ldr r3, [r5, r3]\n    add r0, r4, #0\n    bl ov01_021E8F3C\n    ldr r0, [sp, #0x18]\n    ldrh r1, [r6, #0xc]\n    add r0, r0, #2\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    add r0, r0, #1\n    str r0, [sp, #0x20]\n    cmp r0, r1\n    blt _021FBB32\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    bne _021FBC2C\n    ldr r0, [r6, #8]\n    mov r1, #0\n    mov r2, #4\n    bl NARC_AllocAndReadWholeMember\n    str r0, [r5, #4]\n    ldr r0, [sp, #0xc]\n    mov r1, #0\n    bl ov01_022040A4\n    ldr r0, [r5, #4]\n    bl NNS_G3dGetTex\n    add r4, r0, #0\n    beq _021FBC2C\n    bl GF3dRender_AllocAndLoadTexResources\n    cmp r0, #0\n    bne _021FBC1C\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    add r1, r4, #0\n    bl GF3dRender_BindModelSet\n    cmp r0, #0\n    bne _021FBC2C\n    bl GF_AssertFail\n    ldr r0, [r6, #8]\n    bl NARC_Delete\n    ldr r2, _021FBCBC ; =0x04000060\n    ldr r0, _021FBCC0 ; =0xFFFFCFFF\n    ldrh r1, [r2]\n    and r1, r0\n    mov r0, #0x20\n    orr r0, r1\n    strh r0, [r2]\n    ldr r0, _021FBCC4 ; =0x000008B7\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    bne _021FBC50\n    ldr r0, _021FBCC8 ; =ov01_02208BA0\n    bl G3X_SetEdgeColorTable\n    b _021FBC56\n    ldr r0, _021FBCCC ; =ov01_02208BB0\n    bl G3X_SetEdgeColorTable\n    bl ov01_021EA724\n    ldr r1, _021FBCB8 ; =0x000008AC\n    str r0, [r5, r1]\n    add r1, #0xa\n    ldrb r0, [r5, r1]\n    cmp r0, #0\n    add r0, sp, #0x3c\n    beq _021FBC70\n    ldr r1, _021FBCD0 ; =ov01_02209A88\n    bl sprintf\n    b _021FBC76\n    ldr r1, _021FBCD4 ; =ov01_02209AB4\n    bl sprintf\n    ldr r1, _021FBCB8 ; =0x000008AC\n    add r0, sp, #0x3c\n    ldr r1, [r5, r1]\n    bl ov01_021EA73C\n    ldr r0, _021FBC94 ; =0x000008B8\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    ldr r0, _021FBC94 ; =0x000008B8\n    mov r1, #0\n    str r1, [r5, r0]\n    add sp, #0x13c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021FBC94: .word 0x000008B8\n    _021FBC98: .word 0x000008BC\n    _021FBC9C: .word 0x00000226\n    _021FBCA0: .word 0x000008B2\n    _021FBCA4: .word 0x0000089C\n    _021FBCA8: .word 0x000008A4\n    _021FBCAC: .word 0x000008A8\n    _021FBCB0: .word 0x000008B4\n    _021FBCB4: .word 0x0000FFFF\n    _021FBCB8: .word 0x000008AC\n    _021FBCBC: .word 0x04000060\n    _021FBCC0: .word 0xFFFFCFFF\n    _021FBCC4: .word 0x000008B7\n    _021FBCC8: .word ov01_02208BA0\n    _021FBCCC: .word ov01_02208BB0\n    _021FBCD0: .word ov01_02209A88\n    _021FBCD4: .word ov01_02209AB4"
    );
    #endif
}

void Field3dModel_LoadFromFilesystem(void) {
    /* Original at 0x021FBCD8 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r5, #0\n    add r4, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    str r5, [sp]\n    add r2, r5, #0\n    bl GfGfxLoader_LoadFromNarc\n    str r0, [r4]\n    bl NNS_G3dGetMdlSet\n    str r0, [r4, #4]\n    cmp r0, #0\n    beq _021FBD16\n    add r2, r0, #0\n    add r2, #8\n    beq _021FBD0A\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _021FBD0A\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _021FBD0C\n    mov r1, #0\n    cmp r1, #0\n    beq _021FBD16\n    ldr r1, [r1]\n    add r0, r0, r1\n    b _021FBD18\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    bl NNS_G3dGetTex\n    str r0, [r4, #0xc]\n    cmp r0, #0\n    beq _021FBD32\n    mov r2, #1\n    ldr r0, _021FBD34 ; =ov01_021FBD8C\n    add r1, r4, #0\n    lsl r2, r2, #0xa\n    bl SysTask_CreateOnVWaitQueue\n    pop {r3, r4, r5, pc}\n    _021FBD34: .word ov01_021FBD8C"
    );
    #endif
}

void ov01_021FBD38(void) {
    /* Original at 0x021FBD38 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    str r1, [r4]\n    bl NNS_G3dGetMdlSet\n    str r0, [r4, #4]\n    cmp r0, #0\n    beq _021FBD6A\n    add r2, r0, #0\n    add r2, #8\n    beq _021FBD5E\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _021FBD5E\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _021FBD60\n    mov r1, #0\n    cmp r1, #0\n    beq _021FBD6A\n    ldr r1, [r1]\n    add r0, r0, r1\n    b _021FBD6C\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    bl NNS_G3dGetTex\n    str r0, [r4, #0xc]\n    cmp r0, #0\n    beq _021FBD86\n    mov r2, #1\n    ldr r0, _021FBD88 ; =ov01_021FBD8C\n    add r1, r4, #0\n    lsl r2, r2, #0xa\n    bl SysTask_CreateOnVWaitQueue\n    pop {r4, pc}\n    _021FBD88: .word ov01_021FBD8C"
    );
    #endif
}

void ov01_021FBD8C(void) {
    GF3dRender_AllocAndLoadTexResources(*((u32*)(r1 + 0xc)));
    GF3dRender_BindModelSet(*((u32*)(r4 + 0xc)));
    SysTask_Destroy(r5);
}

void Field3dModel_Unload(void) {
    /* Original at 0x021FBDA8 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _021FBDD8\n    add r1, sp, #4\n    add r2, sp, #0\n    bl NNS_G3dTexReleaseTexKey\n    ldr r1, _021FBDF4 ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r0, [sp, #4]\n    ldr r1, [r1]\n    blx r1\n    ldr r1, _021FBDF4 ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r0, [sp]\n    ldr r1, [r1]\n    blx r1\n    ldr r0, [r4, #0xc]\n    bl NNS_G3dPlttReleasePlttKey\n    ldr r1, _021FBDF8 ; =NNS_GfdDefaultFuncFreePlttVram\n    ldr r1, [r1]\n    blx r1\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021FBDE2\n    bl Heap_Free\n    mov r1, #0x10\n    mov r0, #0\n    strb r0, [r4]\n    add r4, r4, #1\n    sub r1, r1, #1\n    bne _021FBDE6\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _021FBDF4: .word NNS_GfdDefaultFuncFreeTexVram\n    _021FBDF8: .word NNS_GfdDefaultFuncFreePlttVram"
    );
    #endif
}

void ov01_021FBDFC(void) {
    /* Original at 0x021FBDFC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _021FBE2C\n    add r1, sp, #4\n    add r2, sp, #0\n    bl NNS_G3dTexReleaseTexKey\n    ldr r1, _021FBE3C ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r0, [sp, #4]\n    ldr r1, [r1]\n    blx r1\n    ldr r1, _021FBE3C ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r0, [sp]\n    ldr r1, [r1]\n    blx r1\n    ldr r0, [r4, #0xc]\n    bl NNS_G3dPlttReleasePlttKey\n    ldr r1, _021FBE40 ; =NNS_GfdDefaultFuncFreePlttVram\n    ldr r1, [r1]\n    blx r1\n    mov r1, #0x10\n    mov r0, #0\n    strb r0, [r4]\n    add r4, r4, #1\n    sub r1, r1, #1\n    bne _021FBE30\n    add sp, #8\n    pop {r4, pc}\n    _021FBE3C: .word NNS_GfdDefaultFuncFreeTexVram\n    _021FBE40: .word NNS_GfdDefaultFuncFreePlttVram"
    );
    #endif
}

void Field3dModelAnimation_LoadFromFilesystem(void) {
    /* Original at 0x021FBE44 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r1, #0\n    mov r6, #0\n    add r1, r3, #0\n    add r5, r0, #0\n    add r0, r2, #0\n    ldr r3, [sp, #0x18]\n    add r2, r6, #0\n    str r6, [sp]\n    bl GfGfxLoader_LoadFromNarc\n    add r2, r0, #0\n    ldr r3, [sp, #0x1c]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FC030\n    add r0, r6, #0\n    str r0, [r5, #0x10]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FBE70(void) {
    ov01_021FC030();
}

void Field3dModelAnimation_Unload(void) {
    /* Original at 0x021FBE80 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021FBE9E\n    add r0, r1, #0\n    ldr r1, [r4, #8]\n    bl NNS_G3dFreeAnmObj\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    bne _021FBE9E\n    ldr r0, [r4]\n    bl Heap_Free\n    mov r1, #0x14\n    mov r0, #0\n    strb r0, [r4]\n    add r4, r4, #1\n    sub r1, r1, #1\n    bne _021FBEA2\n    pop {r4, pc}"
    );
    #endif
}

void Field3dModelAnimation_FrameAdvanceAndLoop(void) {
    /* Original at 0x021FBEAC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    ldr r0, [r0, #8]\n    ldrh r0, [r0, #4]\n    lsl r2, r0, #0xc\n    cmp r1, #0\n    ble _021FBECA\n    ldr r0, [r4, #0xc]\n    add r0, r0, r1\n    add r1, r2, #0\n    bl _s32_div_f\n    str r1, [r4, #0xc]\n    b _021FBEDC\n    ldr r0, [r4, #0xc]\n    add r3, r4, #0\n    add r3, #0xc\n    add r0, r0, r1\n    str r0, [r4, #0xc]\n    bpl _021FBEDC\n    ldr r0, [r3]\n    add r0, r0, r2\n    str r0, [r3]\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #8]\n    str r1, [r0]\n    pop {r4, pc}"
    );
    #endif
}

void Field3dModelAnimation_FrameAdvanceAndCheck(void) {
    /* Original at 0x021FBEE4 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r2, [r0, #8]\n    ldr r3, [r0, #0xc]\n    ldr r2, [r2, #8]\n    ldrh r2, [r2, #4]\n    lsl r4, r2, #0xc\n    mov r2, #0\n    cmp r1, #0\n    ble _021FBF06\n    add r1, r3, r1\n    cmp r1, r4\n    bge _021FBF00\n    str r1, [r0, #0xc]\n    b _021FBF12\n    str r4, [r0, #0xc]\n    mov r2, #1\n    b _021FBF12\n    add r1, r3, r1\n    bmi _021FBF0E\n    str r1, [r0, #0xc]\n    b _021FBF12\n    str r2, [r0, #0xc]\n    mov r2, #1\n    ldr r1, [r0, #0xc]\n    ldr r0, [r0, #8]\n    str r1, [r0]\n    add r0, r2, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void Field3dModelAnimation_FrameSet(void) {
    /* Original at 0x021FBF20 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0xc]\n    ldr r0, [r0, #8]\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021FBF28(void) {
    /* Original at 0x021FBF28 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void Field3dObject_InitFromModel(void) {
    /* Original at 0x021FBF2C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r1, #0\n    mov r2, #0x78\n    add r4, r0, #0\n    bl memset\n    ldr r1, [r5, #8]\n    add r0, r4, #0\n    bl NNS_G3dRenderObjInit\n    mov r0, #1\n    str r0, [r4, #0x6c]\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x60]\n    str r0, [r4, #0x64]\n    str r0, [r4, #0x68]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void Field3dObject_AddAnimation(void) {
    NNS_G3dRenderObjAddAnmObj();
}

void Field3dObject_RemoveAnimation(void) {
    NNS_G3dRenderObjRemoveAnmObj();
}

void Field3dObject_Draw(void) {
    /* Original at 0x021FBF68 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x48\n    add r4, r0, #0\n    ldr r0, [r4, #0x6c]\n    cmp r0, #0\n    beq _021FBFFC\n    add r0, sp, #0x24\n    bl MTX_Identity33_\n    add r0, r4, #0\n    add r0, #0x70\n    ldrh r0, [r0]\n    ldr r3, _021FC000 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotX33_\n    add r1, sp, #0x24\n    add r0, sp, #0\n    add r2, r1, #0\n    bl MTX_Concat33\n    add r0, r4, #0\n    add r0, #0x74\n    ldrh r0, [r0]\n    ldr r3, _021FC000 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotZ33_\n    add r1, sp, #0x24\n    add r0, sp, #0\n    add r2, r1, #0\n    bl MTX_Concat33\n    add r0, r4, #0\n    add r0, #0x72\n    ldrh r0, [r0]\n    ldr r3, _021FC000 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotY33_\n    add r1, sp, #0x24\n    add r0, sp, #0\n    add r2, r1, #0\n    bl MTX_Concat33\n    add r1, r4, #0\n    add r0, r4, #0\n    add r4, #0x60\n    add r1, #0x54\n    add r2, sp, #0x24\n    add r3, r4, #0\n    bl GF3dRender_DrawModel\n    add sp, #0x48\n    pop {r4, pc}\n    _021FC000: .word FX_SinCosTable_"
    );
    #endif
}

void Field3dObject_SetActiveFlag(void) {
    ((u32*)r0)[0x6c] = r1;
}

void Field3dObject_GetActiveFlag(void) {
    /* Original at 0x021FC008 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x6c]\n    bx lr"
    );
    #endif
}

void Field3dObject_SetPosEx(void) {
    ((u32*)r0)[0x54] = r1;
    ((u32*)r0)[0x58] = r2;
    ((u32*)r0)[0x5c] = r3;
}

void Field3dObject_SetPos(void) {
    /* Original at 0x021FC014 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    add r2, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x54\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    bx lr"
    );
    #endif
}

void Field3dObject_SetXRotation(void) {
    /* Original at 0x021FC024 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r2, r2, #1\n    add r0, r0, r2\n    add r0, #0x70\n    strh r1, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021FC030(void) {
    /* Original at 0x021FC030 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    str r2, [r5]\n    add r0, r2, #0\n    mov r1, #0\n    add r6, r3, #0\n    bl NNS_G3dGetAnmByIdx\n    str r0, [r5, #4]\n    ldr r1, [r5, #4]\n    ldr r2, [r4, #8]\n    add r0, r6, #0\n    bl NNS_G3dAllocAnmObj\n    str r0, [r5, #8]\n    ldr r1, [r5, #4]\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    bl NNS_G3dAnmObjInit\n    pop {r4, r5, r6, pc}"
    );
    #endif
}
