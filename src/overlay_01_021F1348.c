/* Decompiled from asm/overlay_01_021F1348.s */
#include "global.h"

void ov01_021F1348(void) {
    /* Original at 0x021F1348 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    add r6, r0, #0\n    add r5, r1, #0\n    add r0, r7, #0\n    mov r1, #0x24\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x24\n    bl memset\n    str r7, [r4]\n    str r5, [r4, #4]\n    str r6, [r4, #0x10]\n    add r0, r7, #0\n    lsl r1, r5, #3\n    bl Heap_Alloc\n    str r0, [r4, #0x14]\n    add r0, r4, #0\n    bl ov01_021F14DC\n    add r0, r4, #0\n    bl ov01_021F147C\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F1384(void) {
    ov01_021F15EC();
}

void ov01_021F1390(void) {
    ov01_021F1648();
}

void ov01_021F13B0(void) {
    /* Original at 0x021F13B0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021F1588\n    cmp r0, #0\n    beq _021F13C4\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F14F4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F13D0(void) {
    ov01_021F13B0();
}

void ov01_021F13EC(void) {
    ov01_021F1610();
}

void ov01_021F13F4(void) {
    ov01_021F15FC();
    ov01_021F1538(r4);
    ov01_021F16B8(r4);
    ov01_021F1490(r4);
    Heap_Free(*((u32*)(r4 + 0x14)));
    Heap_Free(r4);
}

void ov01_021F141C(void) {
    /* Original at 0x021F141C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r2, #0\n    ldr r0, [r0]\n    bne _021F142A\n    bl Heap_Alloc\n    pop {r3, pc}\n    bl Heap_AllocAtEnd\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021F1430(void) {
    ov01_021F141C();
    memset(r4, r5);
}

void ov01_021F1448(void) {
    Heap_Free();
}

void ov01_021F1450(void) {
    /* Original at 0x021F1450 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov01_021F1588\n    cmp r0, #0\n    bne _021F1462\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}\n    ldr r0, [r0, #4]\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021F1468(void) {
    /* Original at 0x021F1468 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov01_021F146C(void) {
    MapObject_GetFieldSystem();
}

void ov01_021F1478(void) {
    /* Original at 0x021F1478 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021F147C(void) {
    ov01_021F1478();
    NARC_New(0x67, r0);
    *((u32*)(r4 + 0x18)) = r0;
}

void ov01_021F1490(void) {
    NARC_Delete();
}

void ov01_021F149C(void) {
    NARC_GetMemberSize();
}

void ov01_021F14A8(void) {
    NARC_ReadWholeMember();
}

void ov01_021F14B4(void) {
    NARC_GetMemberSize(*((u32*)(r0 + 0x18)));
    ov01_021F141C(r4, r0, r5);
    NARC_ReadWholeMember(*((u32*)(r4 + 0x18)), r6, r0);
}

void ov01_021F14DC(void) {
    ov01_021F15A0();
}

void ov01_021F14F4(void) {
    /* Original at 0x021F14F4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    bl ov01_021F15C4\n    add r1, r0, #0\n    ldr r1, [r1, #4]\n    add r0, r5, #0\n    blx r1\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov01_021F1560\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov01_021F15AC\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F151C(void) {
    /* Original at 0x021F151C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4]\n    bl ov01_021F15C4\n    add r1, r0, #0\n    ldr r0, [r4, #4]\n    ldr r1, [r1, #8]\n    blx r1\n    add r0, r4, #0\n    bl ov01_021F15A0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F1538(void) {
    /* Original at 0x021F1538 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r4, [r6, #4]\n    ldr r5, [r6, #0x14]\n    cmp r4, #0\n    beq _021F155C\n    add r0, r5, #0\n    bl ov01_021F15B4\n    cmp r0, #0\n    bne _021F1556\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov01_021F151C\n    add r5, #8\n    sub r4, r4, #1\n    bne _021F1544\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F1560(void) {
    /* Original at 0x021F1560 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r4, [r0, #4]\n    ldr r5, [r0, #0x14]\n    cmp r4, #0\n    beq _021F157E\n    add r0, r5, #0\n    bl ov01_021F15B4\n    cmp r0, #1\n    bne _021F1578\n    add r0, r5, #0\n    pop {r3, r4, r5, pc}\n    add r5, #8\n    sub r4, r4, #1\n    bne _021F156A\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F1588(void) {
    /* Original at 0x021F1588 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r0, #4]\n    ldr r0, [r0, #0x14]\n    cmp r3, #0\n    beq _021F159C\n    ldr r2, [r0]\n    cmp r2, r1\n    beq _021F159E\n    add r0, #8\n    sub r3, r3, #1\n    bne _021F1590\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021F15A0(void) {
    *(u32*)r0 = 0x17;
    ((u32*)r0)[4] = 0;
}

void ov01_021F15AC(void) {
    *(u32*)r0 = r1;
    ((u32*)r0)[4] = r2;
}

void ov01_021F15B4(void) {
    /* Original at 0x021F15B4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    cmp r0, #0x17\n    bne _021F15BE\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021F15C4(void) {
    /* Original at 0x021F15C4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _021F15E8 ; =ov01_02208C5C\n    ldr r2, [r1]\n    cmp r2, #0x17\n    beq _021F15DE\n    cmp r2, r0\n    bne _021F15D6\n    add r0, r1, #0\n    pop {r3, pc}\n    add r1, #0xc\n    ldr r2, [r1]\n    cmp r2, #0x17\n    bne _021F15CE\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _021F15E8: .word ov01_02208C5C"
    );
    #endif
}

void ov01_021F15EC(void) {
    sub_020689C8();
}

void ov01_021F15FC(void) {
    sub_020689F8(0);
}

void ov01_021F1610(void) {
    sub_02068BAC();
}

void ov01_021F1620(void) {
    /* Original at 0x021F1620 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r4, [sp, #0x10]\n    str r4, [sp]\n    ldr r4, [sp, #0x14]\n    str r4, [sp, #4]\n    ldr r0, [r0, #0x1c]\n    bl sub_02068B0C\n    add r4, r0, #0\n    bne _021F163A\n    bl GF_AssertFail\n    add r0, r4, #0\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F1640(void) {
    sub_02068B48();
}

void ov01_021F1648(void) {
    /* Original at 0x021F1648 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r2, #0\n    add r5, r1, #0\n    mov r2, #0\n    str r3, [sp]\n    mov r1, #0x24\n    add r3, r2, #0\n    add r7, r0, #0\n    bl ov01_021F1430\n    add r4, r0, #0\n    str r4, [r7, #0x20]\n    str r5, [r4]\n    ldr r0, [sp]\n    strh r6, [r4, #4]\n    strh r0, [r4, #6]\n    ldr r0, [sp, #0x20]\n    ldr r2, [sp, #0x28]\n    strh r0, [r4, #8]\n    ldr r0, [sp, #0x24]\n    ldr r3, [sp]\n    strh r0, [r4, #0xa]\n    add r0, r5, #0\n    mov r1, #0x44\n    bl ov01_021FC4C4\n    str r0, [r4, #0x10]\n    ldr r2, [sp, #0x2c]\n    ldr r3, [sp, #0x20]\n    add r0, r5, #0\n    mov r1, #0x45\n    bl ov01_021FC4C4\n    str r0, [r4, #0x14]\n    ldr r0, [sp, #0x24]\n    add r1, r5, #0\n    bl GF3dGfxRawResMan_Create\n    str r0, [r4, #0x18]\n    add r0, r7, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov01_021F17BC\n    add r0, r7, #0\n    str r6, [sp, #4]\n    bl ov01_021F1478\n    str r0, [sp, #8]\n    add r0, sp, #4\n    bl sub_020237EC\n    str r0, [r4, #0xc]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F16B8(void) {
    /* Original at 0x021F16B8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r5, [r4, #0x20]\n    cmp r5, #0\n    beq _021F16EA\n    ldr r0, [r5, #0xc]\n    bl sub_02023874\n    add r0, r5, #0\n    bl ov01_021F17F0\n    ldr r0, [r5, #0x10]\n    bl ov01_021FC520\n    ldr r0, [r5, #0x14]\n    bl ov01_021FC520\n    ldr r0, [r5, #0x18]\n    bl GF3dGfxRawResMan_Destroy\n    add r0, r5, #0\n    bl ov01_021F1448\n    mov r0, #0\n    str r0, [r4, #0x20]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F16EC(void) {
    /* Original at 0x021F16EC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x20\n    ldr r0, [r0, #0x20]\n    add r3, sp, #8\n    ldr r0, [r0, #0xc]\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    add r2, sp, #0x14\n    str r0, [r3]\n    ldr r3, _021F173C ; =ov01_02206988\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, sp, #0\n    bl sub_02023D44\n    add r4, r0, #0\n    bne _021F171C\n    bl GF_AssertFail\n    cmp r4, #0\n    beq _021F1736\n    add r0, r4, #0\n    bl sub_02023F90\n    mov r1, #1\n    bl NNS_G3dMdlSetMdlFogEnableFlagAll\n    add r0, r4, #0\n    bl sub_02023F90\n    bl ov01_021EA3B0\n    add r0, r4, #0\n    add sp, #0x20\n    pop {r4, pc}\n    _021F173C: .word ov01_02206988"
    );
    #endif
}

void ov01_021F1740(void) {
    ov01_021F18A8(*((u32*)(r0 + 0x20)));
    ov01_021F16EC(r5, r0, r4);
}

void ov01_021F1758(void) {
    /* Original at 0x021F1758 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    ldr r5, [r0, #0x20]\n    add r6, r1, #0\n    ldr r0, [r5, #0x10]\n    add r1, r2, #0\n    add r4, r3, #0\n    bl ov01_021FC5A4\n    add r7, r0, #0\n    ldr r0, [r5, #0x14]\n    add r1, r4, #0\n    bl ov01_021FC5A4\n    add r1, sp, #0xc\n    bl sub_02026E18\n    ldr r0, [r5, #0x18]\n    ldr r1, [sp, #0x30]\n    bl GF3dGfxRawResMan_GetObjById\n    add r4, r0, #0\n    bne _021F178A\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl GF3dGfxRawResObj_GetTex\n    ldr r1, [sp, #0x34]\n    cmp r1, #1\n    bne _021F1798\n    mov r4, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x38]\n    str r4, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    add r3, sp, #0xc\n    bl ov01_021F1824\n    add r4, r0, #0\n    bne _021F17B4\n    bl GF_AssertFail\n    add r0, r4, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F17BC(void) {
    /* Original at 0x021F17BC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r5, r2, #0\n    mov r1, #0x28\n    add r7, r0, #0\n    mul r1, r5\n    mov r2, #0\n    bl ov01_021F141C\n    add r4, r0, #0\n    add r0, r7, #0\n    lsl r1, r5, #3\n    mov r2, #0\n    str r4, [r6, #0x20]\n    bl ov01_021F141C\n    str r0, [r6, #0x1c]\n    mov r1, #0xf\n    str r1, [r0]\n    str r4, [r0, #4]\n    add r0, #8\n    add r4, #0x28\n    sub r5, r5, #1\n    bne _021F17E0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F17F0(void) {
    ov01_021F1448(*((u32*)(r0 + 0x1c)));
    ov01_021F1448(*((u32*)(r4 + 0x20)));
}

void ov01_021F1804(void) {
    GF_AssertFail(0xf);
}

void ov01_021F1824(void) {
    /* Original at 0x021F1824 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldrh r5, [r6, #4]\n    add r0, r1, #0\n    ldr r1, [sp, #0x1c]\n    str r2, [sp]\n    ldr r6, [r6, #0x1c]\n    add r7, r3, #0\n    str r1, [sp, #0x1c]\n    mov r4, #0\n    add r2, r5, #0\n    add r3, r6, #0\n    ldr r1, [r3]\n    cmp r1, r0\n    bne _021F1846\n    ldr r0, [r3, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r3, #8\n    sub r2, r2, #1\n    bne _021F183C\n    ldr r1, [r6]\n    cmp r1, #0xf\n    bne _021F1858\n    str r0, [r6]\n    ldr r4, [r6, #4]\n    b _021F185E\n    add r6, #8\n    sub r5, r5, #1\n    bne _021F184C\n    cmp r4, #0\n    bne _021F1866\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x28\n    bl memset\n    ldr r0, [sp]\n    add r2, r4, #0\n    str r0, [r4]\n    add r2, #0xc\n    ldmia r7!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r7!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [sp, #0x18]\n    str r0, [r4, #4]\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0\n    beq _021F18A0\n    bl GF3dGfxRawResObj_GetTexKey\n    str r0, [r4, #0x1c]\n    ldr r0, [sp, #0x1c]\n    bl GF3dGfxRawResObj_GetTex4x4Key\n    str r0, [r4, #0x20]\n    ldr r0, [sp, #0x1c]\n    bl GF3dGfxRawResObj_GetPlttKey\n    str r0, [r4, #0x24]\n    ldr r0, [sp, #0x20]\n    str r0, [r4, #8]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F18A8(void) {
    GF_AssertFail(0);
}

void ov01_021F18C8(void) {
    ov01_021F1804();
}

void ov01_021F18D4(void) {
    ov01_021FC5CC(0);
}

void ov01_021F18F0(void) {
    ov01_021FC5A4();
}

void ov01_021F18FC(void) {
    ov01_021FC588();
}

void ov01_021F1908(void) {
    ov01_021FC5CC(0);
}

void ov01_021F1924(void) {
    ov01_021FC588();
}

void ov01_021F1930(void) {
    /* Original at 0x021F1930 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r6, r1, #0\n    add r1, r2, #0\n    ldr r4, [r5, #0x20]\n    mov r2, #1\n    add r7, r3, #0\n    bl ov01_021F14B4\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl ov01_021F1478\n    str r0, [sp]\n    ldr r0, [r4, #0x18]\n    ldr r1, [sp, #4]\n    add r2, r6, #0\n    add r3, r7, #0\n    bl GF3dGfxRawResMan_AllocObjAndKeys\n    cmp r0, #0\n    bne _021F1962\n    bl GF_AssertFail\n    ldr r2, [r4, #0x18]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov01_021F197C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F1970(void) {
    GF3dGfxRawResMan_FreeObjById();
}

void ov01_021F197C(void) {
    /* Original at 0x021F197C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r2, #0\n    mov r1, #0xc\n    mov r2, #1\n    bl ov01_021F141C\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [r4]\n    str r5, [r4, #4]\n    ldr r0, _021F19AC ; =ov01_021F19B4\n    add r1, r4, #0\n    mov r2, #0xff\n    str r6, [r4, #8]\n    bl SysTask_CreateOnVBlankQueue\n    ldr r0, _021F19B0 ; =ov01_021F19D0\n    add r1, r4, #0\n    mov r2, #0xff\n    bl SysTask_CreateOnVWaitQueue\n    pop {r4, r5, r6, pc}\n    nop\n    _021F19AC: .word ov01_021F19B4\n    _021F19B0: .word ov01_021F19D0"
    );
    #endif
}

void ov01_021F19B4(void) {
    GF3dGfxRawResMan_LoadObjTexById(*((u32*)(r1 + 8)), *((u32*)(r1 + 4)));
    SysTask_Destroy(r5);
}

void ov01_021F19D0(void) {
    /* Original at 0x021F19D0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r0, #1\n    bne _021F19F0\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #4]\n    bl GF3dGfxRawResMan_FreeObjVramAndSecondaryHeaderById\n    add r0, r4, #0\n    bl ov01_021F1448\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F19F4(void) {
    /* Original at 0x021F19F4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x18]\n    add r1, r2, #0\n    str r0, [sp, #4]\n    ldr r2, [r5, #0x18]\n    add r0, r4, #0\n    bl sub_020696C4\n    add r0, r4, #0\n    bl sub_02069714\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F1A18(void) {
    sub_020697DC();
}

void ov01_021F1A34(void) {
    sub_02069894();
}

void ov01_021F1A48(void) {
    /* Original at 0x021F1A48 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r3, #0\n    ldr r0, [r4]\n    add r6, r1, #0\n    add r5, r2, #0\n    bl NNS_G3dGetTex\n    cmp r0, #0\n    beq _021F1A78\n    bl GF3dRender_ResTexIsLoaded\n    cmp r0, #0\n    bne _021F1A78\n    ldr r0, [r4]\n    ldr r1, [r0, #8]\n    bl DC_FlushRange\n    ldr r0, [r4]\n    bl NNS_G3dResDefaultSetup\n    cmp r0, #0\n    bne _021F1A78\n    bl GF_AssertFail\n    ldr r0, [r4]\n    bl NNS_G3dGetMdlSet\n    cmp r0, #0\n    beq _021F1AA2\n    add r2, r0, #0\n    add r2, #8\n    beq _021F1A96\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _021F1A96\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _021F1A98\n    mov r1, #0\n    cmp r1, #0\n    beq _021F1AA2\n    ldr r1, [r1]\n    add r0, r0, r1\n    b _021F1AA4\n    mov r0, #0\n    str r0, [r5]\n    cmp r5, #0\n    bne _021F1AAE\n    bl GF_AssertFail\n    ldr r1, [r5]\n    add r0, r6, #0\n    bl NNS_G3dRenderObjInit\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F1AB8(void) {
    /* Original at 0x021F1AB8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r3, #0\n    bl ov01_021F14B4\n    ldr r3, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    str r0, [r3]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F1A48\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F1AD4(void) {
    /* Original at 0x021F1AD4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, [r0, #0x20]\n    ldr r0, [r0, #0x18]\n    bl GF3dGfxRawResMan_GetObjById\n    add r5, r0, #0\n    ldr r4, _021F1AF8 ; =0x00000000\n    bne _021F1AE8\n    bl GF_AssertFail\n    cmp r5, #0\n    beq _021F1AF4\n    add r0, r5, #0\n    bl GF3dGfxRawResObj_GetTex\n    add r4, r0, #0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _021F1AF8: .word 0x00000000"
    );
    #endif
}
