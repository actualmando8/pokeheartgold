/* Decompiled from asm/overlay_43.s */
#include "global.h"

void PalPad_Init(void) {
    /* Original at 0x02229EE0 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02229FA4 ; =FS_OVERLAY_ID(OVY_42)\n    mov r1, #2\n    bl HandleLoadOverlay\n    mov r2, #7\n    mov r0, #3\n    mov r1, #0x33\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    ldr r1, _02229FA8 ; =0x000005A4\n    add r0, r5, #0\n    mov r2, #0x33\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _02229FA8 ; =0x000005A4\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    mov r1, #0x9f\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #0x68\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    mov r2, #0x33\n    bl ov43_0222A290\n    mov r1, #0x85\n    lsl r1, r1, #2\n    add r0, r4, #4\n    add r1, r4, r1\n    mov r2, #0x33\n    bl ov43_0222A48C\n    mov r1, #0xa\n    lsl r1, r1, #6\n    add r0, r4, r1\n    sub r1, #0x6c\n    add r1, r4, r1\n    add r2, r4, #4\n    mov r3, #0x33\n    bl ov43_0222AE5C\n    mov r1, #0xb\n    lsl r1, r1, #6\n    add r0, r4, r1\n    sub r1, #0xac\n    add r1, r4, r1\n    add r2, r4, #4\n    mov r3, #0x33\n    bl ov43_0222B5A8\n    mov r0, #0xf\n    mov r1, #0x85\n    lsl r0, r0, #6\n    lsl r1, r1, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, #4\n    mov r3, #0x33\n    bl ov43_0222CBAC\n    mov r0, #0xf3\n    mov r1, #0x85\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, #4\n    mov r3, #0x33\n    bl ov43_0222CD90\n    ldr r0, _02229FAC ; =0x00000408\n    mov r1, #0x85\n    lsl r1, r1, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, #4\n    mov r3, #0x33\n    bl ov43_0222D134\n    ldr r0, _02229FB0 ; =ov43_0222A148\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _02229FA4: .word FS_OVERLAY_ID(OVY_42)\n    _02229FA8: .word 0x000005A4\n    _02229FAC: .word 0x00000408\n    _02229FB0: .word ov43_0222A148"
    );
    #endif
}

void PalPad_Main(void) {
    /* Original at 0x02229FB4 */
    /* Requires manual decompilation - 110 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _02229FCC\n    cmp r0, #1\n    beq _0222A084\n    b _0222A098\n    ldr r0, [r4]\n    cmp r0, #5\n    bhi _0222A064\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02229FDE: ; jump table\n    mov r1, #0xa\n    lsl r1, r1, #6\n    add r0, r4, r1\n    sub r1, #0x6c\n    add r1, r4, r1\n    add r2, r4, #4\n    mov r3, #0x33\n    bl ov43_0222AE64\n    add r6, r0, #0\n    b _0222A064\n    mov r1, #0xb\n    lsl r1, r1, #6\n    add r0, r4, r1\n    sub r1, #0xac\n    add r1, r4, r1\n    add r2, r4, #4\n    mov r3, #0x33\n    bl ov43_0222B5D0\n    add r6, r0, #0\n    b _0222A064\n    mov r0, #0x33\n    str r0, [sp]\n    mov r0, #0xf\n    mov r2, #0x85\n    lsl r0, r0, #6\n    lsl r2, r2, #2\n    add r0, r4, r0\n    add r1, r4, #0\n    add r2, r4, r2\n    add r3, r4, #4\n    bl ov43_0222CBB4\n    add r6, r0, #0\n    b _0222A064\n    mov r0, #0xf3\n    mov r1, #0x85\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, #4\n    bl ov43_0222CD98\n    add r6, r0, #0\n    b _0222A064\n    ldr r0, _0222A0A4 ; =0x00000408\n    mov r1, #0x85\n    lsl r1, r1, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, #4\n    mov r3, #0x33\n    bl ov43_0222D15C\n    add r6, r0, #0\n    b _0222A064\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    cmp r6, #1\n    bne _0222A098\n    ldr r0, _0222A0A8 ; =0x0000021D\n    ldrb r1, [r4, r0]\n    str r1, [r4]\n    add r1, r0, #1\n    ldrb r1, [r4, r1]\n    sub r0, r0, #1\n    strb r1, [r4, r0]\n    mov r0, #0x5a\n    mov r1, #4\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    mov r0, #1\n    str r0, [r5]\n    b _0222A098\n    mov r0, #0x5a\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bgt _0222A098\n    mov r0, #0\n    str r0, [r5]\n    add r0, r4, #4\n    bl ov43_0222A500\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _0222A0A4: .word 0x00000408\n    _0222A0A8: .word 0x0000021D"
    );
    #endif
}

void PalPad_Exit(void) {
    /* Original at 0x0222A0AC */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    mov r1, #0xa\n    lsl r1, r1, #6\n    add r0, r4, r1\n    sub r1, #0x6c\n    add r1, r4, r1\n    add r2, r4, #4\n    bl ov43_0222B098\n    mov r1, #0xb\n    lsl r1, r1, #6\n    add r0, r4, r1\n    sub r1, #0xac\n    add r1, r4, r1\n    add r2, r4, #4\n    bl ov43_0222B93C\n    mov r0, #0xf\n    mov r1, #0x85\n    lsl r0, r0, #6\n    lsl r1, r1, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, #4\n    bl ov43_0222CD34\n    mov r0, #0xf3\n    mov r1, #0x85\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, #4\n    bl ov43_0222CE0C\n    ldr r0, _0222A140 ; =0x00000408\n    mov r1, #0x85\n    lsl r1, r1, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, #4\n    bl ov43_0222D228\n    add r0, r4, #4\n    bl ov43_0222A520\n    mov r1, #0x85\n    lsl r1, r1, #2\n    add r0, r4, r1\n    add r1, #0x68\n    ldr r1, [r4, r1]\n    bl ov43_0222A2F0\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0x33\n    bl Heap_Destroy\n    ldr r0, _0222A144 ; =FS_OVERLAY_ID(OVY_42)\n    bl UnloadOverlayByID\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _0222A140: .word 0x00000408\n    _0222A144: .word FS_OVERLAY_ID(OVY_42)"
    );
    #endif
}

void ov43_0222A148(void) {
    ov43_0222A50C();
}

void ov43_0222A154(void) {
    /* Original at 0x0222A154 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #0x85\n    add r5, r0, #0\n    lsl r1, r1, #2\n    add r0, r5, #4\n    add r1, r5, r1\n    add r2, r4, #0\n    bl ov43_0222A48C\n    mov r1, #0xa\n    lsl r1, r1, #6\n    add r0, r5, r1\n    sub r1, #0x6c\n    add r1, r5, r1\n    add r2, r5, #4\n    add r3, r4, #0\n    bl ov43_0222B0A0\n    mov r1, #0xb\n    lsl r1, r1, #6\n    add r0, r5, r1\n    sub r1, #0xac\n    add r1, r5, r1\n    add r2, r5, #4\n    add r3, r4, #0\n    bl ov43_0222B944\n    mov r0, #0xf\n    mov r1, #0x85\n    lsl r0, r0, #6\n    lsl r1, r1, #2\n    add r0, r5, r0\n    add r1, r5, r1\n    add r2, r5, #4\n    add r3, r4, #0\n    bl ov43_0222CD3C\n    mov r0, #0xf3\n    mov r1, #0x85\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    add r0, r5, r0\n    add r1, r5, r1\n    add r2, r5, #4\n    add r3, r4, #0\n    bl ov43_0222CE48\n    ldr r0, _0222A1D4 ; =0x00000408\n    mov r1, #0x85\n    lsl r1, r1, #2\n    add r0, r5, r0\n    add r1, r5, r1\n    add r2, r5, #4\n    add r3, r4, #0\n    bl ov43_0222D584\n    ldr r0, _0222A1D8 ; =ov43_0222A148\n    add r1, r5, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    pop {r3, r4, r5, pc}\n    _0222A1D4: .word 0x00000408\n    _0222A1D8: .word ov43_0222A148"
    );
    #endif
}

void ov43_0222A1DC(void) {
    /* Original at 0x0222A1DC */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    mov r1, #0xa\n    lsl r1, r1, #6\n    add r0, r4, r1\n    sub r1, #0x6c\n    add r1, r4, r1\n    add r2, r4, #4\n    bl ov43_0222B1D8\n    mov r1, #0xb\n    lsl r1, r1, #6\n    add r0, r4, r1\n    sub r1, #0xac\n    add r1, r4, r1\n    add r2, r4, #4\n    bl ov43_0222BAB8\n    mov r0, #0xf\n    mov r1, #0x85\n    lsl r0, r0, #6\n    lsl r1, r1, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, #4\n    bl ov43_0222CD40\n    mov r0, #0xf3\n    mov r1, #0x85\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, #4\n    bl ov43_0222D008\n    ldr r0, _0222A248 ; =0x00000408\n    mov r1, #0x85\n    lsl r1, r1, #2\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, #4\n    bl ov43_0222D610\n    add r0, r4, #4\n    bl ov43_0222A520\n    pop {r4, pc}\n    _0222A248: .word 0x00000408"
    );
    #endif
}

void ov43_0222A24C(void) {
    /* Original at 0x0222A24C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl InitWindow\n    add r0, sp, #0x18\n    ldrb r1, [r0, #0x10]\n    add r2, r6, #0\n    add r3, r7, #0\n    str r1, [sp]\n    ldrb r1, [r0, #0x14]\n    str r1, [sp, #4]\n    ldrb r1, [r0, #0x18]\n    str r1, [sp, #8]\n    ldrb r1, [r0, #0x1c]\n    str r1, [sp, #0xc]\n    ldrh r0, [r0, #0x20]\n    add r1, r4, #0\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl AddWindowParameterized\n    add r1, sp, #0x3c\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl FillWindowPixelBuffer\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222A290(void) {
    /* Original at 0x0222A290 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r6, r2, #0\n    str r0, [r5, #4]\n    mov r0, #0x80\n    add r1, r6, #0\n    bl String_New\n    str r0, [r5, #0x58]\n    mov r0, #0x80\n    add r1, r6, #0\n    bl String_New\n    str r0, [r5, #0x5c]\n    ldr r0, [r4, #4]\n    bl MenuInputStateMgr_GetState\n    str r0, [r5]\n    ldr r0, [r5, #4]\n    bl Save_PlayerData_GetOptionsAddr\n    add r4, r0, #0\n    bl Options_GetTextFrameDelay\n    strb r0, [r5, #0xc]\n    add r0, r4, #0\n    bl Options_GetFrame\n    strb r0, [r5, #0xd]\n    add r0, r4, #0\n    bl Options_GetButtonMode\n    cmp r0, #1\n    beq _0222A2DC\n    mov r0, #1\n    b _0222A2DE\n    mov r0, #0\n    strb r0, [r5, #0xe]\n    mov r0, #1\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov43_0222A2F0(void) {
    /* Original at 0x0222A2F0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0\n    add r4, r1, #0\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldr r0, [r4, #4]\n    ldr r1, [r5]\n    bl MenuInputStateMgr_SetState\n    ldr r0, [r5, #0x58]\n    bl String_Delete\n    ldr r0, [r5, #0x5c]\n    bl String_Delete\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov43_0222A318(void) {
    /* Original at 0x0222A318 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "strb r1, [r0, #9]\n    strb r2, [r0, #0xa]\n    bx lr"
    );
    #endif
}

void ov43_0222A320(void) {
    /* Original at 0x0222A320 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222A330 ; =gSystem\n    ldr r2, [r1, #0x48]\n    ldr r1, _0222A334 ; =0x00000CF3\n    tst r1, r2\n    beq _0222A32E\n    mov r1, #0\n    str r1, [r0]\n    bx lr\n    _0222A330: .word gSystem\n    _0222A334: .word 0x00000CF3"
    );
    #endif
}

void ov43_0222A338(void) {
    /* Original at 0x0222A338 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r1, #0\n    beq _0222A348\n    ldr r0, [r5, #0x58]\n    bl String_Copy\n    cmp r4, #0\n    beq _0222A354\n    ldr r0, [r5, #0x5c]\n    add r1, r4, #0\n    bl String_Copy\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov43_0222A358(void) {
    /* Original at 0x0222A358 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    str r0, [sp]\n    ldr r0, [r0, #4]\n    add r6, r1, #0\n    str r2, [sp, #4]\n    bl sub_0202C6F4\n    add r5, r0, #0\n    bl sub_0202C08C\n    bl DWC_CreateFriendKey\n    str r0, [sp, #0x10]\n    str r1, [sp, #0xc]\n    mov r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0202C2DC\n    cmp r0, #0\n    bne _0222A404\n    add r0, r6, #0\n    add r1, sp, #0x1c\n    bl String_atoi\n    add r7, r0, #0\n    ldr r0, [sp, #0x1c]\n    add r6, r1, #0\n    cmp r0, #1\n    bne _0222A3FE\n    ldr r0, [sp, #0xc]\n    eor r1, r0\n    ldr r0, [sp, #0x10]\n    eor r0, r7\n    orr r0, r1\n    beq _0222A3FE\n    add r0, r5, #0\n    bl sub_0202C08C\n    add r1, r7, #0\n    add r2, r6, #0\n    bl DWC_CheckFriendKey\n    cmp r0, #0\n    bne _0222A3BA\n    add sp, #0x20\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    add r1, r7, #0\n    ldr r0, [r0, #4]\n    add r2, r6, #0\n    add r3, sp, #0x18\n    bl sub_0203A128\n    cmp r0, #0\n    bne _0222A3D2\n    add sp, #0x20\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0202C23C\n    add r1, r7, #0\n    add r2, r6, #0\n    bl DWC_CreateFriendKeyToken\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0202C270\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #8\n    mov r3, #2\n    bl sub_0202C190\n    add sp, #0x20\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add sp, #0x20\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    cmp r4, #0x20\n    blt _0222A378\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222A414(void) {
    /* Original at 0x0222A414 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x60]\n    mov r1, #1\n    str r1, [r0, #0x64]\n    bx lr"
    );
    #endif
}

void ov43_0222A41C(void) {
    /* Original at 0x0222A41C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "strb r1, [r0, #0xb]\n    bx lr"
    );
    #endif
}

void ov43_0222A420(void) {
    /* Original at 0x0222A420 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, #0x10\n    mov r1, #0\n    mov r2, #0x48\n    bl memset\n    ldr r0, [r5, #4]\n    bl sub_0202C6F4\n    mov r4, #0\n    add r6, r5, #0\n    add r7, r5, #0\n    str r0, [sp]\n    str r4, [r5, #0x10]\n    add r6, #0x14\n    add r7, #0x10\n    ldr r0, [sp]\n    add r1, r4, #0\n    bl sub_0202C2DC\n    cmp r0, #1\n    bne _0222A482\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    add r0, r5, r0\n    strb r4, [r0, #0x18]\n    ldr r0, [sp]\n    mov r2, #8\n    bl sub_0202C090\n    cmp r0, #2\n    bne _0222A46C\n    ldr r0, [r5, #0x10]\n    add r1, r5, r0\n    add r1, #0x38\n    mov r0, #0xff\n    b _0222A47A\n    ldr r1, [r6]\n    ldr r0, [r5, #0x14]\n    add r1, r1, #1\n    str r1, [r6]\n    ldr r1, [r5, #0x10]\n    add r1, r5, r1\n    add r1, #0x38\n    strb r0, [r1]\n    ldr r0, [r7]\n    add r0, r0, #1\n    str r0, [r7]\n    add r4, r4, #1\n    cmp r4, #0x20\n    blt _0222A442\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222A48C(void) {
    /* Original at 0x0222A48C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    ldr r0, _0222A4FC ; =gSystem + 0x60\n    mov r1, #1\n    add r4, r2, #0\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    mov r0, #0x55\n    add r1, r4, #0\n    bl NARC_New\n    str r0, [r5, #0x58]\n    bl ov43_0222A550\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov43_0222A570\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov43_0222A690\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov43_0222A87C\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov43_0222A8C0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov43_0222AC28\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov43_0222A998\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #1\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetAutoScrollParam\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    pop {r4, r5, r6, pc}\n    nop\n    _0222A4FC: .word gSystem + 0x60"
    );
    #endif
}

void ov43_0222A500(void) {
    SpriteList_RenderAndAnimateSprites();
}

void ov43_0222A50C(void) {
    /* Original at 0x0222A50C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    bl DoScheduledBgGpuUpdates\n    bl GF_RunVramTransferTasks\n    bl OamManager_ApplyAndResetBuffers\n    pop {r3, pc}"
    );
    #endif
}

void ov43_0222A520(void) {
    /* Original at 0x0222A520 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov43_0222ACDC\n    add r0, r4, #0\n    bl ov43_0222A9D8\n    add r0, r4, #0\n    bl ov43_0222A960\n    add r0, r4, #0\n    bl ov43_0222A8A8\n    add r0, r4, #0\n    bl ov43_0222A81C\n    add r0, r4, #0\n    bl ov43_0222A66C\n    ldr r0, [r4, #0x58]\n    bl NARC_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov43_0222A550(void) {
    GfGfx_SetBanks(5);
}

void ov43_0222A570(void) {
    /* Original at 0x0222A570 */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r7, r1, #0\n    add r5, r0, #0\n    add r0, r7, #0\n    bl BgConfig_Alloc\n    add r3, sp, #0x10\n    ldr r4, _0222A664 ; =ov43_0222EDC8\n    str r0, [r5]\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r6, _0222A668 ; =ov43_0222EFFC\n    mov r4, #0\n    lsl r1, r4, #0x18\n    ldr r0, [r5]\n    lsr r1, r1, #0x18\n    add r2, r6, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    mov r1, #0x20\n    mov r2, #0\n    add r3, r7, #0\n    bl BG_ClearCharDataRange\n    lsl r1, r4, #0x18\n    ldr r0, [r5]\n    lsr r1, r1, #0x18\n    bl BgClearTilemapBufferAndCommit\n    add r4, r4, #1\n    add r6, #0x1c\n    cmp r4, #7\n    blt _0222A598\n    mov r0, #0x16\n    lsl r0, r0, #4\n    str r0, [sp]\n    str r7, [sp, #4]\n    mov r2, #0\n    ldr r0, [r5, #0x58]\n    mov r1, #5\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0xa0\n    str r0, [sp]\n    str r7, [sp, #4]\n    mov r1, #4\n    ldr r0, [r5, #0x58]\n    add r2, r1, #0\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r7, [sp, #0xc]\n    ldr r0, [r5, #0x58]\n    ldr r2, [r5]\n    mov r1, #7\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r7, [sp, #0xc]\n    ldr r0, [r5, #0x58]\n    ldr r2, [r5]\n    mov r1, #7\n    mov r3, #2\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r7, [sp, #0xc]\n    mov r1, #6\n    ldr r0, [r5, #0x58]\n    ldr r2, [r5]\n    add r3, r1, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r7, [sp, #0xc]\n    ldr r0, [r5, #0x58]\n    ldr r2, [r5]\n    mov r1, #0xa\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r7, [sp, #0xc]\n    ldr r0, [r5, #0x58]\n    ldr r2, [r5]\n    mov r1, #8\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222A664: .word ov43_0222EDC8\n    _0222A668: .word ov43_0222EFFC"
    );
    #endif
}

void ov43_0222A66C(void) {
    /* Original at 0x0222A66C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #0\n    lsl r1, r4, #0x18\n    ldr r0, [r5]\n    lsr r1, r1, #0x18\n    bl FreeBgTilemapBuffer\n    add r4, r4, #1\n    cmp r4, #7\n    blt _0222A672\n    ldr r0, [r5]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r5]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov43_0222A690(void) {
    /* Original at 0x0222A690 */
    /* Requires manual decompilation - 175 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    add r7, r1, #0\n    add r6, r0, #0\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0x10\n    add r1, r7, #0\n    bl GF_CreateVramTransferManager\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x1e\n    str r3, [sp, #0xc]\n    add r2, r0, #0\n    str r7, [sp, #0x10]\n    bl OamManager_Create\n    ldr r4, _0222A814 ; =ov43_0222EDD8\n    add r3, sp, #0x2c\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    mov r1, #0x10\n    add r0, r2, #0\n    add r2, r1, #0\n    str r7, [sp, #0x38]\n    bl ObjCharTransfer_InitEx\n    mov r0, #0x40\n    add r1, r7, #0\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    add r1, r6, #0\n    mov r0, #0x40\n    add r1, #0xbc\n    add r2, r7, #0\n    bl G2dRenderer_Init\n    str r0, [r6, #4]\n    add r0, r6, #0\n    add r3, r6, #0\n    ldr r1, _0222A818 ; =ov43_0222F0FC\n    add r0, #8\n    mov r2, #1\n    add r3, #0xbc\n    bl sub_0200B27C\n    mov r4, #0\n    add r5, r6, #0\n    mov r0, #0x40\n    add r1, r4, #0\n    add r2, r7, #0\n    bl Create2DGfxResObjMan\n    mov r1, #0x79\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0222A706\n    mov r0, #0x64\n    str r0, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    str r7, [sp, #8]\n    add r0, r1, #0\n    ldr r0, [r6, r0]\n    ldr r1, [r6, #0x58]\n    add r3, r2, #0\n    bl AddCharResObjFromOpenNarc\n    add r1, r6, #0\n    add r1, #0xac\n    str r0, [r1]\n    mov r0, #0x64\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #5\n    str r0, [sp, #8]\n    mov r0, #0x7a\n    str r7, [sp, #0xc]\n    lsl r0, r0, #2\n    mov r2, #0\n    ldr r0, [r6, r0]\n    ldr r1, [r6, #0x58]\n    add r3, r2, #0\n    bl AddPlttResObjFromOpenNarc\n    add r1, r6, #0\n    add r1, #0xb0\n    str r0, [r1]\n    mov r0, #0x64\n    str r0, [sp]\n    mov r2, #2\n    str r2, [sp, #4]\n    mov r0, #0x7b\n    str r7, [sp, #8]\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    ldr r1, [r6, #0x58]\n    mov r3, #1\n    bl AddCellOrAnimResObjFromOpenNarc\n    add r1, r6, #0\n    add r1, #0xb4\n    str r0, [r1]\n    mov r0, #0x64\n    str r0, [sp]\n    mov r2, #3\n    str r2, [sp, #4]\n    mov r0, #0x1f\n    str r7, [sp, #8]\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    ldr r1, [r6, #0x58]\n    mov r3, #1\n    bl AddCellOrAnimResObjFromOpenNarc\n    add r1, r6, #0\n    add r1, #0xb8\n    str r0, [r1]\n    add r0, r6, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    bl sub_0200ADA4\n    cmp r0, #0\n    bne _0222A7AC\n    bl GF_AssertFail\n    add r0, r6, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    bl sub_0200B00C\n    cmp r0, #0\n    bne _0222A7BE\n    bl GF_AssertFail\n    add r0, r6, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    bl sub_0200A740\n    add r0, r6, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    bl sub_0200A740\n    mov r1, #0x64\n    add r0, r1, #0\n    mov r3, #0x79\n    str r1, [sp]\n    sub r0, #0x65\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    lsl r3, r3, #2\n    ldr r2, [r6, r3]\n    str r2, [sp, #0x14]\n    add r2, r3, #4\n    ldr r2, [r6, r2]\n    str r2, [sp, #0x18]\n    add r2, r3, #0\n    add r2, #8\n    ldr r2, [r6, r2]\n    add r3, #0xc\n    str r2, [sp, #0x1c]\n    ldr r2, [r6, r3]\n    add r6, #0x88\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r6, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl CreateSpriteResourcesHeader\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    _0222A814: .word ov43_0222EDD8\n    _0222A818: .word ov43_0222F0FC"
    );
    #endif
}

void ov43_0222A81C(void) {
    /* Original at 0x0222A81C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    bl sub_0200AEB0\n    add r0, r7, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    bl sub_0200B0A8\n    mov r6, #0x79\n    mov r4, #0\n    add r5, r7, #0\n    lsl r6, r6, #2\n    add r1, r5, #0\n    add r1, #0xac\n    ldr r0, [r5, r6]\n    ldr r1, [r1]\n    bl DestroySingle2DGfxResObj\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0222A83A\n    mov r6, #0x79\n    mov r5, #0\n    add r4, r7, #0\n    lsl r6, r6, #2\n    ldr r0, [r4, r6]\n    bl Destroy2DGfxResObjMan\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #4\n    blt _0222A856\n    ldr r0, [r7, #4]\n    bl SpriteList_Delete\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    bl OamManager_Free\n    bl GF_DestroyVramTransferManager\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222A87C(void) {
    /* Original at 0x0222A87C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl MessageFormat_New\n    str r0, [r5, #0x50]\n    ldr r2, _0222A8A4 ; =0x0000030B\n    mov r0, #0\n    mov r1, #0x1b\n    add r3, r4, #0\n    bl NewMsgDataFromNarc\n    str r0, [r5, #0x54]\n    mov r0, #4\n    add r1, r4, #0\n    bl FontID_Alloc\n    pop {r3, r4, r5, pc}\n    nop\n    _0222A8A4: .word 0x0000030B"
    );
    #endif
}

void ov43_0222A8A8(void) {
    /* Original at 0x0222A8A8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #4\n    bl FontID_Release\n    ldr r0, [r4, #0x54]\n    bl DestroyMsgData\n    ldr r0, [r4, #0x50]\n    bl MessageFormat_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov43_0222A8C0(void) {
    /* Original at 0x0222A8C0 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r6, r1, #0\n    mov r1, #0x16\n    add r5, r0, #0\n    mov r0, #0\n    lsl r1, r1, #4\n    add r4, r2, #0\n    bl LoadFontPal1\n    mov r1, #7\n    mov r0, #4\n    lsl r1, r1, #6\n    add r2, r4, #0\n    bl LoadFontPal1\n    ldrb r0, [r6, #0xd]\n    mov r1, #1\n    mov r2, #0x46\n    str r0, [sp]\n    str r4, [sp, #4]\n    ldr r0, [r5]\n    mov r3, #0xc\n    bl LoadUserFrameGfx2\n    add r0, r5, #0\n    add r0, #0x64\n    bl InitWindow\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    mov r0, #0x64\n    str r0, [sp, #0x10]\n    add r1, r5, #0\n    mov r2, #1\n    ldr r0, [r5]\n    add r1, #0x64\n    add r3, r2, #0\n    bl AddWindowParameterized\n    mov r0, #0x80\n    add r1, r4, #0\n    bl String_New\n    str r0, [r5, #0x74]\n    mov r0, #0x80\n    add r1, r4, #0\n    bl String_New\n    str r0, [r5, #0x78]\n    mov r0, #0x80\n    add r1, r4, #0\n    bl String_New\n    str r0, [r5, #0x7c]\n    mov r0, #0x80\n    add r1, r4, #0\n    bl String_New\n    add r1, r5, #0\n    add r1, #0x80\n    str r0, [r1]\n    add r0, r4, #0\n    mov r1, #0\n    bl TouchscreenListMenuSpawner_Create\n    str r0, [r5, #0x5c]\n    add r0, r4, #0\n    bl YesNoPrompt_Create\n    str r0, [r5, #0x60]\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov43_0222A960(void) {
    /* Original at 0x0222A960 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x60]\n    bl YesNoPrompt_Destroy\n    ldr r0, [r4, #0x5c]\n    bl TouchscreenListMenuSpawner_Destroy\n    ldr r0, [r4, #0x7c]\n    bl String_Delete\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    bl String_Delete\n    ldr r0, [r4, #0x74]\n    bl String_Delete\n    ldr r0, [r4, #0x78]\n    bl String_Delete\n    add r4, #0x64\n    add r0, r4, #0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov43_0222A998(void) {
    /* Original at 0x0222A998 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r1, [sp, #8]\n    mov r1, #0x82\n    lsl r1, r1, #2\n    ldr r4, _0222A9D4 ; =ov43_0222F0C0\n    str r0, [sp, #4]\n    mov r7, #0\n    add r6, r0, r1\n    add r5, r0, #0\n    ldr r0, [sp, #8]\n    mov r2, #1\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldrb r1, [r4]\n    ldr r0, [r0, #0x58]\n    add r3, r6, #0\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    mov r1, #2\n    lsl r1, r1, #8\n    str r0, [r5, r1]\n    add r7, r7, #1\n    add r6, r6, #4\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r7, #2\n    blt _0222A9AC\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0222A9D4: .word ov43_0222F0C0"
    );
    #endif
}

void ov43_0222A9D8(void) {
    Heap_Free(0, 2);
}

void ov43_0222A9F4(void) {
    /* Original at 0x0222A9F4 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    add r6, r2, #0\n    bl TextPrinterCheckActive\n    cmp r0, #1\n    bne _0222AA22\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    add r0, r5, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x54]\n    ldr r2, [r5, #0x78]\n    add r1, r6, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #0x50]\n    ldr r1, [r5, #0x74]\n    ldr r2, [r5, #0x78]\n    bl StringExpandPlaceholders\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _0222AA6C ; =0x000F0200\n    mov r3, #0\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r2, [r5, #0x74]\n    add r0, r4, #0\n    mov r1, #1\n    bl AddTextPrinterParameterizedWithColor\n    add r5, #0x84\n    str r0, [r5]\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _0222AA6C: .word 0x000F0200"
    );
    #endif
}

void ov43_0222AA70(void) {
    /* Original at 0x0222AA70 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #1\n    bne _0222AA98\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    add r0, r4, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    add r4, #0x64\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    pop {r4, pc}"
    );
    #endif
}

void ov43_0222AAA4(void) {
    /* Original at 0x0222AAA4 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r6, r2, #0\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0222AB18 ; =0x05F5E100\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r3, #0\n    bl _ll_udiv\n    add r2, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    ldr r0, [r5, #0x50]\n    mov r3, #4\n    bl BufferIntegerAsString\n    ldr r2, _0222AB1C ; =0x00002710\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r3, #0\n    bl _ll_udiv\n    ldr r2, _0222AB1C ; =0x00002710\n    mov r3, #0\n    bl _ull_mod\n    mov r1, #2\n    add r2, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x50]\n    mov r3, #4\n    bl BufferIntegerAsString\n    ldr r2, _0222AB1C ; =0x00002710\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r3, #0\n    bl _ull_mod\n    add r2, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x50]\n    mov r1, #3\n    mov r3, #4\n    bl BufferIntegerAsString\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _0222AB18: .word 0x05F5E100\n    _0222AB1C: .word 0x00002710"
    );
    #endif
}

void ov43_0222AB20(void) {
    /* Original at 0x0222AB20 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    add r5, r3, #0\n    add r0, r1, #0\n    add r6, r2, #0\n    bl sub_0202C6F4\n    add r7, r0, #0\n    add r0, r5, #0\n    bl PlayerProfile_New\n    add r5, r0, #0\n    add r0, r7, #0\n    add r1, r6, #0\n    bl sub_0202C254\n    add r1, r0, #0\n    add r0, r5, #0\n    bl Save_Profile_PlayerName_Set\n    ldr r0, [r4, #0x50]\n    mov r1, #0\n    add r2, r5, #0\n    bl BufferPlayersName\n    add r0, r5, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222AB5C(void) {
    /* Original at 0x0222AB5C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r0, r3, #0\n    add r7, r2, #0\n    bl PlayerProfile_New\n    add r4, r0, #0\n    add r0, r6, #0\n    bl sub_0202C6F4\n    add r1, r7, #0\n    bl sub_0202C298\n    add r1, r0, #0\n    add r0, r4, #0\n    bl Save_Profile_PlayerName_Set\n    ldr r0, [r5, #0x50]\n    mov r1, #0\n    add r2, r4, #0\n    bl BufferPlayersName\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222AB94(void) {
    /* Original at 0x0222AB94 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r2, #0\n    add r0, r1, #0\n    bl sub_0202C6F4\n    add r1, r4, #0\n    mov r2, #6\n    add r7, r0, #0\n    mov r6, #1\n    bl sub_0202C090\n    add r2, r0, #0\n    bne _0222ABB4\n    mov r6, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r1, #2\n    ldr r0, [r5, #0x50]\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    add r0, r7, #0\n    add r1, r4, #0\n    mov r2, #4\n    bl sub_0202C090\n    mov r1, #0\n    add r2, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x50]\n    mov r3, #4\n    bl BufferIntegerAsString\n    add r0, r7, #0\n    add r1, r4, #0\n    mov r2, #5\n    bl sub_0202C090\n    add r2, r0, #0\n    ldr r0, [r5, #0x50]\n    mov r1, #1\n    bl BufferMonthNameAbbr\n    add r0, r6, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222ABFC(void) {
    BufferIntegerAsString(0, 1, 4);
}

void ov43_0222AC18(void) {
    /* Original at 0x0222AC18 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0222AC24 ; =BufferWiFiPlazaActivityName\n    add r2, r1, #0\n    ldr r0, [r0, #0x50]\n    mov r1, #0\n    bx r3\n    nop\n    _0222AC24: .word BufferWiFiPlazaActivityName"
    );
    #endif
}

void ov43_0222AC28(void) {
    /* Original at 0x0222AC28 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    ldr r5, [sp]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r4, _0222ACD0 ; =ov43_0222F14C\n    add r0, r5, #0\n    str r0, [sp, #0xc]\n    add r0, #0x88\n    str r1, [sp, #4]\n    add r7, r4, #0\n    mov r6, #5\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    ldr r0, [r0, #4]\n    str r0, [r4]\n    ldr r0, [sp, #0xc]\n    str r0, [r4, #4]\n    ldr r0, [sp, #4]\n    str r0, [r4, #0x2c]\n    add r0, r7, #0\n    bl Sprite_CreateAffine\n    mov r1, #0x7d\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [sp, #8]\n    add r4, #0x30\n    add r0, r0, #1\n    add r7, #0x30\n    add r5, r5, #4\n    add r6, r6, #2\n    str r0, [sp, #8]\n    cmp r0, #2\n    blt _0222AC44\n    ldr r0, [sp]\n    ldr r1, _0222ACD4 ; =ov43_0222F160\n    ldr r0, [r0, #4]\n    str r0, [r1, #0x4c]\n    ldr r0, [sp]\n    add r0, #0x88\n    str r0, [r1, #0x50]\n    ldr r0, [sp, #4]\n    str r0, [r1, #0x78]\n    ldr r0, _0222ACD8 ; =ov43_0222F1AC\n    bl Sprite_CreateAffine\n    mov r2, #0x7f\n    ldr r1, [sp]\n    lsl r2, r2, #2\n    str r0, [r1, r2]\n    add r0, r1, #0\n    ldr r0, [r0, r2]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r1, #0x7f\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222ACD0: .word ov43_0222F14C\n    _0222ACD4: .word ov43_0222F160\n    _0222ACD8: .word ov43_0222F1AC"
    );
    #endif
}

void ov43_0222ACDC(void) {
    /* Original at 0x0222ACDC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Sprite_Delete\n    mov r6, #0x7d\n    mov r4, #0\n    lsl r6, r6, #2\n    ldr r0, [r5, r6]\n    bl Sprite_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _0222ACF0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov43_0222AD00(void) {
    Sprite_SetDrawFlag(0, 0x7d);
}

void ov43_0222AD20(void) {
    Sprite_SetAnimActiveFlag(0, 0x7d);
}

void ov43_0222AD40(void) {
    /* Original at 0x0222AD40 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    lsl r2, r1, #0x19\n    lsr r6, r2, #0x18\n    cmp r1, #2\n    blo _0222AD52\n    sub r1, r1, #2\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    mov r2, #0x7d\n    lsl r2, r2, #2\n    lsl r4, r1, #2\n    add r5, r0, r2\n    ldr r0, [r5, r4]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    add r1, r6, #5\n    ldr r0, [r5, r4]\n    add r1, r1, r7\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5, r4]\n    bl Sprite_ResetAnimCtrlState\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222AD74(void) {
    /* Original at 0x0222AD74 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r2, #0xff\n    beq _0222AD8A\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r2, #0\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov43_0222AD98(void) {
    /* Original at 0x0222AD98 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r4, r2, #0\n    bl Sprite_SetPriority\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl Sprite_SetDrawPriority\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov43_0222ADB8(void) {
    /* Original at 0x0222ADB8 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r0, sp, #4\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    ldr r0, [r4]\n    mov r1, #0x19\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0xa\n    str r0, [sp, #0xc]\n    mov r0, #0xd\n    str r0, [sp, #0x10]\n    add r0, sp, #4\n    strb r1, [r0, #0x10]\n    mov r1, #9\n    strb r1, [r0, #0x11]\n    ldrb r1, [r0, #0x12]\n    mov r2, #0xf\n    bic r1, r2\n    ldr r2, [r5]\n    lsl r2, r2, #0x18\n    lsr r3, r2, #0x18\n    mov r2, #0xf\n    and r2, r3\n    orr r1, r2\n    strb r1, [r0, #0x12]\n    ldrb r1, [r0, #0x12]\n    mov r2, #0xf0\n    bic r1, r2\n    lsl r2, r6, #0x18\n    lsr r2, r2, #0x18\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x18\n    orr r1, r2\n    strb r1, [r0, #0x12]\n    mov r1, #0\n    strb r1, [r0, #0x13]\n    ldr r0, [r4, #0x60]\n    add r1, sp, #4\n    bl YesNoPrompt_InitFromTemplate\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #4\n    mov r1, #8\n    mov r2, #0\n    mov r3, #0x3d\n    bl StartBrightnessTransition\n    add sp, #0x18\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov43_0222AE2C(void) {
    /* Original at 0x0222AE2C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x60]\n    bl YesNoPrompt_HandleInput\n    add r6, r0, #0\n    sub r0, r6, #1\n    cmp r0, #1\n    bhi _0222AE58\n    ldr r0, [r4, #0x60]\n    bl YesNoPrompt_IsInTouchMode\n    str r0, [r5]\n    ldr r0, [r4, #0x60]\n    bl YesNoPrompt_Reset\n    mov r0, #0\n    mov r1, #0x3d\n    mov r2, #1\n    bl SetBlendBrightness\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov43_0222AE5C(void) {
    ov43_0222B0A0();
}

void ov43_0222AE64(void) {
    /* Original at 0x0222AE64 */
    /* Requires manual decompilation - 235 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r1, #0\n    add r7, r3, #0\n    ldrb r3, [r4, #8]\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r3, #0xb\n    bhi _0222AEF0\n    add r3, r3, r3\n    add r3, pc\n    ldrh r3, [r3, #6]\n    lsl r3, r3, #0x10\n    asr r3, r3, #0x10\n    add pc, r3\n    _0222AE82: ; jump table\n    bl ov43_0222B1FC\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0\n    mov r1, #0x11\n    add r2, r1, #0\n    add r3, r0, #0\n    str r7, [sp, #8]\n    bl BeginNormalPaletteFade\n    mov r0, #1\n    strb r0, [r4, #8]\n    b _0222B08A\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0222AEF0\n    mov r0, #3\n    strb r0, [r4, #8]\n    b _0222B08A\n    bl ov43_0222B1FC\n    mov r0, #3\n    strb r0, [r4, #8]\n    b _0222B08A\n    bl ov43_0222B374\n    str r0, [sp, #0x10]\n    cmp r0, #0\n    beq _0222AEF0\n    mov r0, #2\n    str r0, [r5, #4]\n    mov r0, #4\n    strb r0, [r4, #8]\n    b _0222B08A\n    ldr r3, [r5, #4]\n    sub r2, r3, #1\n    str r2, [r5, #4]\n    cmp r3, #0\n    beq _0222AEF2\n    b _0222B08A\n    mov r2, #0\n    str r2, [r5, #4]\n    bl ov43_0222B574\n    cmp r0, #1\n    bne _0222AF24\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov43_0222B440\n    ldr r0, [r5]\n    cmp r0, #3\n    beq _0222AF10\n    cmp r0, #1\n    bne _0222AF16\n    mov r0, #5\n    strb r0, [r4, #8]\n    b _0222B08A\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov43_0222B458\n    add sp, #0x14\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r5]\n    cmp r0, #1\n    bne _0222B01C\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x3a\n    add r3, r7, #0\n    bl ov43_0222B4BC\n    mov r0, #0xb\n    strb r0, [r4, #8]\n    b _0222B08A\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0\n    mov r1, #0x10\n    str r7, [sp, #8]\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldrb r0, [r4, #8]\n    add r0, r0, #1\n    strb r0, [r4, #8]\n    b _0222B08A\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0222B01C\n    add sp, #0x14\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    bl ov43_0222B1FC\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0\n    mov r1, #0x11\n    add r2, r1, #0\n    add r3, r0, #0\n    str r7, [sp, #8]\n    bl BeginNormalPaletteFade\n    mov r0, #8\n    strb r0, [r4, #8]\n    b _0222B08A\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0222B08A\n    add r0, r7, #0\n    bl PlayerProfile_New\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x58]\n    bl String_cstr\n    add r1, r0, #0\n    ldr r0, [sp, #0xc]\n    bl Save_Profile_PlayerName_Set\n    ldr r0, [r6, #0x50]\n    ldr r2, [sp, #0xc]\n    mov r1, #0\n    bl BufferPlayersName\n    ldr r0, [sp, #0xc]\n    bl Heap_Free\n    ldr r0, [r4, #0x5c]\n    add r1, sp, #0x10\n    bl String_atoi\n    add r3, r0, #0\n    ldr r0, [sp, #0x10]\n    add r2, r1, #0\n    cmp r0, #0\n    beq _0222AFE2\n    add r0, r6, #0\n    add r1, r3, #0\n    bl ov43_0222AAA4\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x37\n    add r3, r7, #0\n    bl ov43_0222B4BC\n    mov r0, #9\n    strb r0, [r4, #8]\n    b _0222B08A\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x38\n    add r3, r7, #0\n    bl ov43_0222B4BC\n    mov r0, #0xb\n    strb r0, [r4, #8]\n    b _0222B08A\n    bl ov43_0222B534\n    cmp r0, #0\n    beq _0222B08A\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0\n    bl ov43_0222ADB8\n    mov r0, #0xa\n    strb r0, [r4, #8]\n    b _0222B08A\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov43_0222AE2C\n    cmp r0, #1\n    beq _0222B01E\n    cmp r0, #2\n    beq _0222B04C\n    b _0222B08A\n    ldr r1, [r4, #0x5c]\n    ldr r2, [r4, #0x58]\n    add r0, r4, #0\n    bl ov43_0222A358\n    add r2, r0, #0\n    bne _0222B038\n    add r0, r5, #0\n    bl ov43_0222B55C\n    mov r0, #3\n    strb r0, [r4, #8]\n    b _0222B08A\n    ldr r3, _0222B090 ; =ov43_0222F0C8\n    add r0, r5, #0\n    ldrb r2, [r3, r2]\n    add r1, r6, #0\n    add r3, r7, #0\n    bl ov43_0222B4BC\n    mov r0, #0xb\n    strb r0, [r4, #8]\n    b _0222B08A\n    add r0, r5, #0\n    bl ov43_0222B55C\n    mov r0, #3\n    strb r0, [r4, #8]\n    b _0222B08A\n    bl ov43_0222B534\n    cmp r0, #0\n    beq _0222B08A\n    ldr r0, _0222B094 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    bne _0222B078\n    mov r0, #2\n    tst r0, r1\n    bne _0222B078\n    bl System_GetTouchNew\n    cmp r0, #0\n    beq _0222B08A\n    add r0, r5, #0\n    bl ov43_0222B55C\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov43_0222B408\n    mov r0, #3\n    strb r0, [r4, #8]\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0222B090: .word ov43_0222F0C8\n    _0222B094: .word gSystem"
    );
    #endif
}

void ov43_0222B098(void) {
    ov43_0222B1D8();
}

void ov43_0222B0A0(void) {
    /* Original at 0x0222B0A0 */
    /* Requires manual decompilation - 135 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    str r0, [sp, #0x14]\n    add r0, #8\n    add r5, r1, #0\n    str r2, [sp, #0x24]\n    str r3, [sp, #0x18]\n    bl InitWindow\n    mov r3, #4\n    ldr r1, [sp, #0x14]\n    str r3, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0x14\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x24]\n    add r1, #8\n    ldr r0, [r0]\n    mov r2, #3\n    bl AddWindowParameterized\n    ldr r0, [sp, #0x14]\n    add r0, #0x20\n    bl InitWindow\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    mov r0, #0xac\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x14]\n    ldr r0, [r0]\n    add r1, #0x20\n    mov r2, #1\n    mov r3, #2\n    bl AddWindowParameterized\n    ldr r0, [sp, #0x14]\n    mov r1, #0\n    add r0, #8\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x14]\n    mov r1, #0\n    add r0, #0x20\n    bl FillWindowPixelBuffer\n    ldr r1, [sp, #0x18]\n    mov r0, #0x80\n    bl String_New\n    ldr r1, [sp, #0x14]\n    str r0, [r1, #0x3c]\n    ldr r0, [r5, #4]\n    bl Save_PlayerData_GetOptionsAddr\n    bl Options_GetTextFrameDelay\n    ldr r1, [sp, #0x14]\n    str r0, [r1, #0x38]\n    ldr r1, [sp, #0x18]\n    mov r0, #0x80\n    bl String_New\n    add r4, r0, #0\n    ldr r1, [sp, #0x18]\n    mov r0, #0x80\n    bl String_New\n    str r0, [sp, #0x1c]\n    ldr r0, [r5, #4]\n    bl Save_PlayerData_GetProfile\n    add r2, r0, #0\n    ldr r0, [sp, #0x24]\n    mov r1, #0\n    ldr r0, [r0, #0x50]\n    bl BufferPlayersName\n    ldr r0, [sp, #0x14]\n    mov r7, #0\n    str r0, [sp, #0x20]\n    add r0, #8\n    mov r5, #8\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x24]\n    ldr r2, [sp, #0x1c]\n    ldr r0, [r0, #0x54]\n    add r1, r7, #1\n    bl ReadMsgDataIntoString\n    ldr r0, [sp, #0x24]\n    ldr r2, [sp, #0x1c]\n    ldr r0, [r0, #0x50]\n    add r1, r4, #0\n    bl StringExpandPlaceholders\n    mov r0, #4\n    add r1, r4, #0\n    mov r2, #0\n    bl FontID_String_GetWidth\n    mov ip, r0\n    str r5, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0222B1D4 ; =0x00010F00\n    mov r3, #0xc0\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r6, ip\n    str r0, [sp, #0xc]\n    sub r3, r3, r6\n    ldr r0, [sp, #0x20]\n    mov r1, #4\n    add r2, r4, #0\n    lsr r3, r3, #1\n    bl AddTextPrinterParameterizedWithColor\n    add r7, r7, #1\n    add r5, #0x28\n    cmp r7, #4\n    blt _0222B160\n    add r0, r4, #0\n    bl String_Delete\n    ldr r0, [sp, #0x1c]\n    bl String_Delete\n    ldr r0, [sp, #0x18]\n    ldr r3, [sp, #0x14]\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    mov r1, #0xb\n    ldr r0, [r0, #0x58]\n    mov r2, #1\n    add r3, #0x1c\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    ldr r1, [sp, #0x14]\n    str r0, [r1, #0x18]\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222B1D4: .word 0x00010F00"
    );
    #endif
}

void ov43_0222B1D8(void) {
    /* Original at 0x0222B1D8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x3c]\n    bl String_Delete\n    add r0, r4, #0\n    add r0, #8\n    bl RemoveWindow\n    add r0, r4, #0\n    add r0, #0x20\n    bl RemoveWindow\n    ldr r0, [r4, #0x18]\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov43_0222B1FC(void) {
    /* Original at 0x0222B1FC */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r2, #0\n    add r1, r4, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r1, #0x64\n    mov r2, #0\n    bl ov43_0222A9F4\n    add r0, r5, #0\n    add r0, #8\n    bl ScheduleWindowCopyToVram\n    ldr r2, [r5, #0x1c]\n    mov r3, #0\n    str r3, [sp]\n    ldrh r0, [r2]\n    mov r1, #2\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldrh r0, [r2, #2]\n    add r2, #0xc\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    bl LoadRectToBgTilemapRect\n    mov r2, #0\n    ldr r0, [r4]\n    mov r1, #2\n    add r3, r2, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r4]\n    mov r1, #2\n    mov r2, #3\n    mov r3, #0\n    bl ScheduleSetBgPosText\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov43_0222AD74\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov43_0222AD98\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov43_0222B3A4\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov43_0222B278(void) {
    /* Original at 0x0222B278 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0222B314 ; =gSystem\n    add r4, r2, #0\n    ldr r3, [r0, #0x48]\n    ldr r0, _0222B318 ; =0x00000CF3\n    mov r2, #0\n    tst r0, r3\n    beq _0222B28C\n    str r2, [r1]\n    ldr r6, _0222B314 ; =gSystem\n    mov r0, #1\n    ldr r1, [r6, #0x48]\n    add r3, r1, #0\n    tst r3, r0\n    beq _0222B2AA\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov43_0222B3C4\n    ldr r0, _0222B31C ; =0x000005DD\n    bl PlaySE\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r3, #2\n    tst r1, r3\n    beq _0222B2BE\n    ldr r0, _0222B31C ; =0x000005DD\n    bl PlaySE\n    mov r0, #3\n    str r0, [r5]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r1, [r6, #0x4c]\n    mov r3, #0x40\n    tst r3, r1\n    beq _0222B2DC\n    ldr r1, [r5]\n    cmp r1, #0\n    beq _0222B2D4\n    sub r1, r1, #1\n    str r1, [r5]\n    add r2, r0, #0\n    b _0222B2F6\n    mov r1, #3\n    str r1, [r5]\n    add r2, r0, #0\n    b _0222B2F6\n    mov r3, #0x80\n    tst r1, r3\n    beq _0222B2F6\n    ldr r1, [r5]\n    cmp r1, #3\n    bhs _0222B2F0\n    add r1, r1, #1\n    str r1, [r5]\n    add r2, r0, #0\n    b _0222B2F6\n    mov r1, #0\n    str r1, [r5]\n    add r2, r0, #0\n    cmp r2, #1\n    bne _0222B310\n    ldr r0, _0222B320 ; =0x000005E5\n    bl PlaySE\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov43_0222B3A4\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _0222B314: .word gSystem\n    _0222B318: .word 0x00000CF3\n    _0222B31C: .word 0x000005DD\n    _0222B320: .word 0x000005E5"
    );
    #endif
}

void ov43_0222B324(void) {
    /* Original at 0x0222B324 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0222B36C ; =ov43_0222EE1A\n    add r6, r1, #0\n    add r4, r2, #0\n    add r7, r3, #0\n    bl TouchscreenHitbox_FindHitboxAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0222B340\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #1\n    str r1, [r7]\n    str r1, [r6]\n    str r0, [r5]\n    ldr r0, _0222B370 ; =0x000005DD\n    bl PlaySE\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov43_0222B3C4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov43_0222B3A4\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222B36C: .word ov43_0222EE1A\n    _0222B370: .word 0x000005DD"
    );
    #endif
}

void ov43_0222B374(void) {
    /* Original at 0x0222B374 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    mov r3, #0\n    str r3, [sp]\n    add r3, sp, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ov43_0222B324\n    ldr r1, [sp]\n    cmp r1, #0\n    beq _0222B396\n    mov r1, #1\n    add sp, #4\n    str r1, [r4]\n    pop {r3, r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov43_0222B278\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov43_0222B3A4(void) {
    /* Original at 0x0222B3A4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    ldr r3, [r2]\n    mov r2, #0x28\n    mul r2, r3\n    mov r0, #0x7f\n    add r2, #0x30\n    lsl r0, r0, #2\n    lsl r2, r2, #0x10\n    ldr r0, [r1, r0]\n    ldr r3, _0222B3C0 ; =Sprite_SetPositionXY\n    mov r1, #0x80\n    asr r2, r2, #0x10\n    bx r3\n    nop\n    _0222B3C0: .word Sprite_SetPositionXY"
    );
    #endif
}

void ov43_0222B3C4(void) {
    /* Original at 0x0222B3C4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    mov r5, #4\n    ldr r0, [r7]\n    cmp r0, r4\n    bne _0222B3DA\n    mov r1, #9\n    b _0222B3DC\n    mov r1, #2\n    mov r0, #0x1c\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r1, #2\n    lsl r3, r5, #0x18\n    ldr r0, [r6]\n    add r2, r1, #0\n    lsr r3, r3, #0x18\n    bl BgTilemapRectChangePalette\n    add r4, r4, #1\n    add r5, r5, #5\n    cmp r4, #4\n    blt _0222B3D0\n    ldr r0, [r6]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222B408(void) {
    /* Original at 0x0222B408 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    mov r6, #0\n    mov r4, #4\n    mov r7, #2\n    mov r0, #0x1c\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    lsl r3, r4, #0x18\n    ldr r0, [r5]\n    add r1, r7, #0\n    add r2, r7, #0\n    lsr r3, r3, #0x18\n    bl BgTilemapRectChangePalette\n    ldr r0, [r5]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add r6, r6, #1\n    add r4, r4, #5\n    cmp r6, #4\n    blt _0222B414\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222B440(void) {
    /* Original at 0x0222B440 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r0, r1, #0\n    ldr r2, [r2]\n    ldr r1, _0222B450 ; =ov43_0222F0CC\n    ldr r3, _0222B454 ; =ov43_0222A318\n    ldrb r1, [r1, r2]\n    mov r2, #0\n    bx r3\n    _0222B450: .word ov43_0222F0CC\n    _0222B454: .word ov43_0222A318"
    );
    #endif
}

void ov43_0222B458(void) {
    /* Original at 0x0222B458 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov43_0222AA70\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r0, [r4]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r0, [r4]\n    mov r1, #3\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    add r5, #8\n    add r0, r5, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xff\n    bl ov43_0222AD74\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov43_0222B4BC(void) {
    /* Original at 0x0222B4BC */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0x80\n    add r1, r3, #0\n    add r7, r2, #0\n    bl String_New\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #0x20\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r0, [r4, #0x54]\n    add r1, r7, #0\n    add r2, r6, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r4, #0x50]\n    ldr r1, [r5, #0x3c]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, [r5, #0x38]\n    mov r1, #1\n    str r0, [sp, #4]\n    ldr r0, _0222B530 ; =0x00010200\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    add r0, r5, #0\n    ldr r2, [r5, #0x3c]\n    add r0, #0x20\n    bl AddTextPrinterParameterizedWithColor\n    str r0, [r5, #0x34]\n    add r0, r5, #0\n    add r0, #0x20\n    mov r1, #1\n    mov r2, #0x46\n    mov r3, #0xc\n    bl DrawFrameAndWindow2\n    add r5, #0x20\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222B530: .word 0x00010200"
    );
    #endif
}

void ov43_0222B534(void) {
    /* Original at 0x0222B534 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, [r0, #0x34]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222B556\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    bl TextFlags_GetIsTouchSpeedingUpPrint\n    str r0, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov43_0222B55C(void) {
    /* Original at 0x0222B55C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x20\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r4, #0x20\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    pop {r4, pc}"
    );
    #endif
}

void ov43_0222B574(void) {
    /* Original at 0x0222B574 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, [r0]\n    cmp r0, #1\n    bne _0222B59E\n    ldr r0, [r1, #4]\n    bl sub_0202C6F4\n    add r5, r0, #0\n    mov r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0202C2DC\n    cmp r0, #0\n    bne _0222B596\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r4, r4, #1\n    cmp r4, #0x20\n    blt _0222B586\n    b _0222B5A2\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov43_0222B5A8(void) {
    /* Original at 0x0222B5A8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #4]\n    add r6, r2, #0\n    add r7, r3, #0\n    bl Save_PlayerData_GetOptionsAddr\n    bl Options_GetTextFrameDelay\n    add r1, r5, #0\n    add r1, #0xe0\n    str r0, [r1]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov43_0222B944\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222B5D0(void) {
    /* Original at 0x0222B5D0 */
    /* Requires manual decompilation - 356 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r1, #0\n    ldrb r5, [r4, #8]\n    add r6, r0, #0\n    add r7, r2, #0\n    str r3, [sp, #0xc]\n    cmp r5, #0x17\n    bls _0222B5E4\n    b _0222B932\n    add r5, r5, r5\n    add r5, pc\n    ldrh r5, [r5, #6]\n    lsl r5, r5, #0x10\n    asr r5, r5, #0x10\n    add pc, r5\n    _0222B5F0: ; jump table\n    mov r0, #0\n    strh r0, [r6]\n    strh r0, [r6, #2]\n    strh r0, [r6, #4]\n    strh r0, [r6, #6]\n    add r0, r4, #0\n    bl ov43_0222A420\n    ldr r3, [sp, #0xc]\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov43_0222BB20\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0222B932\n    bl ov43_0222BFA4\n    cmp r0, #4\n    bhi _0222B70A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222B656: ; jump table\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r2, #2\n    bl ov43_0222C53C\n    b _0222B932\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r2, #3\n    bl ov43_0222C53C\n    b _0222B932\n    mov r0, #0x17\n    strb r0, [r4, #8]\n    b _0222B932\n    mov r0, #4\n    add r6, #0xf4\n    str r0, [r6]\n    mov r0, #5\n    strb r0, [r4, #8]\n    b _0222B932\n    bl ov43_0222BFD4\n    mov r0, #4\n    strb r0, [r4, #8]\n    b _0222B932\n    bl ov43_0222C024\n    cmp r0, #1\n    bne _0222B70A\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0222B932\n    add r2, r6, #0\n    add r2, #0xf4\n    add r1, r6, #0\n    ldr r2, [r2]\n    add r1, #0xf4\n    sub r3, r2, #1\n    add r2, r6, #0\n    ldr r1, [r1]\n    add r2, #0xf4\n    str r3, [r2]\n    cmp r1, #0\n    bgt _0222B70A\n    add r1, r6, #0\n    mov r2, #0\n    add r1, #0xf4\n    str r2, [r1]\n    bl ov43_0222C620\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222A41C\n    ldr r3, [sp, #0xc]\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov43_0222C148\n    mov r0, #6\n    strb r0, [r4, #8]\n    b _0222B932\n    bl ov43_0222C228\n    strb r0, [r4, #8]\n    b _0222B932\n    mov r0, #4\n    add r6, #0xf4\n    str r0, [r6]\n    mov r0, #8\n    strb r0, [r4, #8]\n    b _0222B932\n    add r3, r6, #0\n    add r3, #0xf4\n    ldr r3, [r3]\n    sub r5, r3, #1\n    add r3, r6, #0\n    add r3, #0xf4\n    add r6, #0xf4\n    str r5, [r3]\n    ldr r3, [r6]\n    cmp r3, #0\n    ble _0222B70C\n    b _0222B932\n    bl ov43_0222BBB8\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0\n    bl ov43_0222A318\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0xb\n    ldrsb r2, [r4, r1]\n    asr r0, r2, #2\n    lsr r0, r0, #0x1d\n    add r0, r2, r0\n    asr r0, r0, #3\n    strh r0, [r6]\n    ldrsb r0, [r4, r1]\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1d\n    sub r1, r1, r2\n    mov r0, #0x1d\n    ror r1, r0\n    add r0, r2, r1\n    strh r0, [r6, #4]\n    mov r0, #1\n    strb r0, [r4, #8]\n    b _0222B932\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r3, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #0x10\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    add r0, r6, #0\n    bl ov43_0222C620\n    add r5, r0, #0\n    ldr r0, [r4, #4]\n    bl sub_0202C6F4\n    add r1, r4, r5\n    ldrb r1, [r1, #0x18]\n    bl sub_0202C254\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222A414\n    mov r0, #0xb\n    strb r0, [r4, #8]\n    b _0222B932\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0222B818\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov43_0222BBB8\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #4\n    bl ov43_0222A318\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov43_0222C620\n    add r5, r0, #0\n    ldr r0, [r4, #4]\n    bl sub_0202C6F4\n    add r1, r4, r5\n    ldrb r1, [r1, #0x18]\n    ldr r2, [r4, #0x58]\n    bl sub_0202C270\n    ldr r3, [sp, #0xc]\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov43_0222BB20\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    mov r1, #0x11\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0xe\n    strb r0, [r4, #8]\n    b _0222B932\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0222B818\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0222B932\n    bl ov43_0222C32C\n    mov r0, #0x10\n    strb r0, [r4, #8]\n    b _0222B932\n    bl ov43_0222C358\n    cmp r0, #1\n    bne _0222B818\n    mov r0, #0x11\n    strb r0, [r4, #8]\n    b _0222B932\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov43_0222AE2C\n    cmp r0, #1\n    beq _0222B81A\n    cmp r0, #2\n    beq _0222B826\n    b _0222B932\n    add r0, r6, #0\n    bl ov43_0222C600\n    mov r0, #0x12\n    strb r0, [r4, #8]\n    b _0222B932\n    add r0, r6, #0\n    bl ov43_0222C600\n    add r0, r7, #0\n    mov r1, #1\n    bl ov43_0222AD00\n    mov r2, #4\n    add r0, r6, #0\n    ldrsh r2, [r6, r2]\n    add r0, #8\n    add r1, r7, #0\n    mov r3, #0\n    bl ov43_0222C890\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0222B932\n    add r1, r7, #0\n    bl ov43_0222C65C\n    mov r0, #0x13\n    strb r0, [r4, #8]\n    b _0222B932\n    add r1, r7, #0\n    bl ov43_0222C714\n    cmp r0, #1\n    bne _0222B932\n    ldr r0, [r4, #4]\n    bl sub_0202C6F4\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    bl ov43_0222C620\n    str r0, [sp, #0x14]\n    add r5, r4, #0\n    ldr r1, [sp, #0x14]\n    add r5, #0x18\n    ldrb r1, [r5, r1]\n    ldr r0, [sp, #0x10]\n    bl sub_0202C338\n    ldr r0, [r4, #4]\n    bl Save_Frontier_GetStatic\n    ldr r1, [sp, #0x14]\n    ldrb r1, [r5, r1]\n    bl sub_020311AC\n    add r0, r4, #0\n    bl ov43_0222A420\n    mov r0, #4\n    ldrsh r0, [r6, r0]\n    mov r3, #0\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [sp, #0xc]\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    ldrsh r3, [r6, r3]\n    add r0, r6, #0\n    add r2, r7, #0\n    bl ov43_0222C378\n    add r0, r7, #0\n    mov r1, #1\n    bl ov43_0222AD00\n    mov r0, #0x14\n    strb r0, [r4, #8]\n    b _0222B932\n    add r1, r7, #0\n    bl ov43_0222C750\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0222B932\n    bl ov43_0222C2B0\n    cmp r0, #1\n    bne _0222B8D4\n    mov r0, #0x16\n    strb r0, [r4, #8]\n    b _0222B932\n    add r0, r7, #0\n    mov r1, #1\n    bl ov43_0222AD00\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0222B932\n    bl ov43_0222C5D8\n    cmp r0, #0\n    beq _0222B932\n    ldr r0, _0222B938 ; =gSystem\n    ldr r0, [r0, #0x48]\n    cmp r0, #0\n    bne _0222B8FA\n    bl System_GetTouchNew\n    cmp r0, #0\n    beq _0222B932\n    add r0, r7, #0\n    mov r1, #1\n    bl ov43_0222AD00\n    mov r2, #4\n    add r0, r6, #0\n    ldrsh r2, [r6, r2]\n    add r0, #8\n    add r1, r7, #0\n    mov r3, #0\n    bl ov43_0222C890\n    mov r0, #2\n    strb r0, [r4, #8]\n    add r0, r6, #0\n    bl ov43_0222C600\n    b _0222B932\n    bl ov43_0222BBB8\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #2\n    bl ov43_0222A318\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222B938: .word gSystem"
    );
    #endif
}

void ov43_0222B93C(void) {
    ov43_0222BAB8();
}

void ov43_0222B944(void) {
    /* Original at 0x0222B944 */
    /* Requires manual decompilation - 166 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x5c\n    str r0, [sp, #0x18]\n    ldr r4, [sp, #0x18]\n    mov r0, #0\n    ldr r5, _0222BA9C ; =ov43_0222ED74\n    ldr r6, _0222BAA0 ; =ov43_0222EE08\n    add r7, r2, #0\n    str r3, [sp, #0x1c]\n    str r0, [sp, #0x28]\n    add r4, #8\n    ldr r0, [sp, #0x1c]\n    add r1, r7, #0\n    str r0, [sp]\n    ldrh r3, [r5]\n    add r0, r4, #0\n    add r2, r6, #0\n    bl ov43_0222C788\n    ldr r0, [sp, #0x28]\n    add r5, r5, #2\n    add r0, r0, #1\n    add r6, r6, #6\n    add r4, #0x38\n    str r0, [sp, #0x28]\n    cmp r0, #3\n    blt _0222B95A\n    ldr r0, [r7, #4]\n    ldr r3, [sp, #0x1c]\n    mov r1, #0\n    mov r2, #0x10\n    bl ov42_02227060\n    ldr r1, [sp, #0x18]\n    ldr r3, [sp, #0x1c]\n    add r1, #0xb4\n    str r0, [r1]\n    ldr r0, [sp, #0x18]\n    mov r1, #1\n    add r0, #0xb4\n    ldr r0, [r0]\n    mov r2, #2\n    bl ov42_02227228\n    mov r3, #0x15\n    ldr r1, [sp, #0x18]\n    str r3, [sp]\n    mov r0, #9\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    ldr r0, _0222BAA4 ; =0x0000014F\n    add r1, #0xb8\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r7]\n    mov r2, #1\n    bl ov43_0222A24C\n    ldr r0, [r7, #0x54]\n    mov r1, #7\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0222BAA8 ; =0x00010F00\n    mov r1, #4\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x18]\n    add r2, r4, #0\n    add r0, #0xb8\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #0\n    str r0, [sp, #0x20]\n    ldr r0, _0222BAAC ; =ov43_0222EEE0\n    ldr r6, [sp, #0x18]\n    str r0, [sp, #0x24]\n    ldr r1, [sp, #0x1c]\n    mov r0, #4\n    bl ListMenuItems_New\n    add r1, r6, #0\n    add r1, #0xe4\n    ldr r5, [sp, #0x24]\n    str r0, [r1]\n    mov r4, #0\n    add r0, r6, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    ldr r1, [r7, #0x54]\n    ldr r2, [r5]\n    ldr r3, [r5, #4]\n    bl ListMenuItems_AppendFromMsgData\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, #4\n    blt _0222BA06\n    ldr r0, [sp, #0x24]\n    add r6, r6, #4\n    add r0, #0x20\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x20]\n    add r0, r0, #1\n    str r0, [sp, #0x20]\n    cmp r0, #2\n    blt _0222B9F4\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    ldr r0, _0222BAB0 ; =0x00000161\n    ldr r1, [sp, #0x18]\n    str r0, [sp, #0x10]\n    mov r0, #0xf\n    str r0, [sp, #0x14]\n    ldr r0, [r7]\n    add r1, #0xc8\n    mov r2, #1\n    mov r3, #2\n    bl ov43_0222A24C\n    ldr r1, [sp, #0x1c]\n    mov r0, #0x80\n    bl String_New\n    ldr r1, [sp, #0x18]\n    ldr r4, _0222BAB4 ; =ov43_0222EEB0\n    add r1, #0xd8\n    str r0, [r1]\n    add r3, sp, #0x2c\n    mov r2, #6\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0222BA6A\n    ldr r0, [r7, #4]\n    add r7, #0x88\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x1c]\n    str r7, [sp, #0x30]\n    str r0, [sp, #0x58]\n    add r0, sp, #0x2c\n    bl Sprite_CreateAffine\n    ldr r1, [sp, #0x18]\n    add r1, #0xf8\n    str r0, [r1]\n    ldr r0, [sp, #0x18]\n    mov r1, #0\n    add r0, #0xf8\n    str r0, [sp, #0x18]\n    ldr r0, [r0]\n    bl Sprite_SetDrawFlag\n    add sp, #0x5c\n    pop {r4, r5, r6, r7, pc}\n    _0222BA9C: .word ov43_0222ED74\n    _0222BAA0: .word ov43_0222EE08\n    _0222BAA4: .word 0x0000014F\n    _0222BAA8: .word 0x00010F00\n    _0222BAAC: .word ov43_0222EEE0\n    _0222BAB0: .word 0x00000161\n    _0222BAB4: .word ov43_0222EEB0"
    );
    #endif
}

void ov43_0222BAB8(void) {
    /* Original at 0x0222BAB8 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    add r7, r2, #0\n    bl Sprite_Delete\n    add r0, r5, #0\n    add r0, #0xc8\n    bl RemoveWindow\n    add r0, r5, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    bl String_Delete\n    mov r6, #0\n    add r4, r5, #0\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    bl ListMenuItems_Delete\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #2\n    blt _0222BADC\n    add r0, r5, #0\n    add r0, #0xb8\n    bl RemoveWindow\n    add r0, r5, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    bl ov42_02227274\n    add r0, r5, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    bl ov42_02227114\n    mov r4, #0\n    add r5, #8\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov43_0222C7EC\n    add r4, r4, #1\n    add r5, #0x38\n    cmp r4, #3\n    blt _0222BB0E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222BB20(void) {
    /* Original at 0x0222BB20 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r4, r2, #0\n    add r7, r1, #0\n    add r1, r4, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r1, #0x64\n    mov r2, #5\n    add r6, r3, #0\n    bl ov43_0222A9F4\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xe\n    str r1, [sp]\n    mov r1, #4\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    mov r1, #3\n    str r1, [sp, #0xc]\n    mov r1, #0\n    str r1, [sp, #0x10]\n    ldrh r2, [r0]\n    mov r3, #0x14\n    lsl r2, r2, #0x15\n    lsr r2, r2, #0x18\n    str r2, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r2, #0x11\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r4]\n    bl CopyToBgTilemapRect\n    add r0, r5, #0\n    add r0, #0xb8\n    bl ScheduleWindowCopyToVram\n    ldr r0, [r4]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r4, #0\n    mov r1, #1\n    bl ov43_0222AD00\n    mov r0, #4\n    ldrsh r0, [r5, r0]\n    mov r3, #0\n    add r1, r7, #0\n    str r0, [sp]\n    str r3, [sp, #4]\n    str r6, [sp, #8]\n    ldrsh r3, [r5, r3]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov43_0222C378\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov43_0222AD74\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x10\n    bl ov43_0222AD98\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222BBB8(void) {
    /* Original at 0x0222BBB8 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r4, r2, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov43_0222AA70\n    add r0, r5, #0\n    add r0, #0xb8\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r7, #2\n    mov r6, #0\n    add r5, #8\n    lsl r7, r7, #8\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r4, r7\n    bl ov43_0222C9A4\n    add r6, r6, #1\n    add r5, #0x38\n    cmp r6, #3\n    blt _0222BBD6\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xff\n    bl ov43_0222AD74\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #9\n    bl ov43_0222AD98\n    add r0, r4, #0\n    mov r1, #0\n    bl ov43_0222AD00\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xe\n    str r1, [sp]\n    mov r1, #4\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    mov r2, #0x11\n    str r2, [sp, #0xc]\n    mov r1, #0\n    str r1, [sp, #0x10]\n    ldrh r3, [r0]\n    lsl r3, r3, #0x15\n    lsr r3, r3, #0x18\n    str r3, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r3, #0x14\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r4]\n    bl CopyToBgTilemapRect\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r2, #0x10\n    add r1, r0, #0\n    str r2, [sp]\n    mov r3, #4\n    str r3, [sp, #4]\n    add r1, #0xc\n    str r1, [sp, #8]\n    str r2, [sp, #0xc]\n    str r3, [sp, #0x10]\n    ldrh r1, [r0]\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #0\n    add r3, r1, #0\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r4]\n    bl CopyToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222BC78(void) {
    /* Original at 0x0222BC78 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r3, #0\n    bne _0222BC9C\n    ldr r0, _0222BD14 ; =0x000005DD\n    bl PlaySE\n    mov r2, #4\n    add r0, r5, #0\n    ldrsh r2, [r5, r2]\n    add r0, #8\n    add r1, r4, #0\n    mov r3, #1\n    bl ov43_0222C890\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    cmp r3, #5\n    bne _0222BCEA\n    mov r0, #4\n    ldrsh r2, [r5, r0]\n    cmp r2, #8\n    bne _0222BCC2\n    ldr r0, _0222BD14 ; =0x000005DD\n    bl PlaySE\n    mov r2, #4\n    add r0, r5, #0\n    ldrsh r2, [r5, r2]\n    add r0, #8\n    add r1, r4, #0\n    mov r3, #1\n    bl ov43_0222C890\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    ldrsh r3, [r5, r0]\n    ldr r1, [r1, #0x10]\n    lsl r3, r3, #3\n    add r2, r2, r3\n    cmp r1, r2\n    bls _0222BD10\n    ldr r0, _0222BD14 ; =0x000005DD\n    bl PlaySE\n    mov r2, #4\n    add r0, r5, #0\n    ldrsh r2, [r5, r2]\n    add r0, #8\n    add r1, r4, #0\n    mov r3, #1\n    bl ov43_0222C890\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    cmp r3, #1\n    bne _0222BCFC\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    bl ov43_0222AD40\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    cmp r3, #2\n    bne _0222BD0E\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov43_0222AD40\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222BD14: .word 0x000005DD"
    );
    #endif
}

void ov43_0222BD18(void) {
    /* Original at 0x0222BD18 */
    /* Requires manual decompilation - 223 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0222BEE0 ; =gSystem\n    add r6, r1, #0\n    ldr r1, [r0, #0x48]\n    ldr r0, _0222BEE4 ; =0x00000CF3\n    add r7, r2, #0\n    tst r0, r1\n    beq _0222BD30\n    mov r0, #0\n    str r0, [r6]\n    ldr r0, _0222BEE0 ; =gSystem\n    mov r2, #1\n    ldr r1, [r0, #0x48]\n    tst r2, r1\n    beq _0222BD4A\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    mov r3, #5\n    bl ov43_0222BC78\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r2, #2\n    tst r1, r2\n    beq _0222BD72\n    mov r0, #8\n    strh r0, [r5, #4]\n    mov r2, #4\n    add r0, r5, #0\n    ldrsh r2, [r5, r2]\n    add r0, #8\n    add r1, r7, #0\n    bl ov43_0222C844\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    mov r3, #0\n    bl ov43_0222BC78\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r1, #4\n    ldrsh r1, [r5, r1]\n    mov r4, #0\n    lsl r2, r1, #0x10\n    lsr r2, r2, #0x10\n    str r2, [sp, #8]\n    add r2, r4, #0\n    str r2, [sp, #4]\n    ldr r2, [r0, #0x4c]\n    mov r0, #0x40\n    tst r0, r2\n    beq _0222BDBA\n    cmp r1, #8\n    bne _0222BDA0\n    mov r0, #6\n    ldrsh r0, [r5, r0]\n    mov r4, #1\n    add r1, r4, #0\n    strh r0, [r5, #4]\n    add r0, r7, #0\n    bl ov43_0222AD00\n    b _0222BE62\n    cmp r1, #4\n    bge _0222BDB0\n    cmp r1, #0\n    ble _0222BE62\n    sub r0, r1, #1\n    strh r0, [r5, #4]\n    mov r4, #1\n    b _0222BE62\n    ble _0222BE62\n    sub r0, r1, #1\n    strh r0, [r5, #4]\n    mov r4, #1\n    b _0222BE62\n    mov r0, #0x80\n    tst r0, r2\n    beq _0222BDEC\n    cmp r1, #3\n    beq _0222BDC8\n    cmp r1, #7\n    bne _0222BDD0\n    mov r0, #8\n    strh r0, [r5, #4]\n    mov r4, #1\n    b _0222BE62\n    cmp r1, #4\n    bge _0222BDE0\n    cmp r1, #3\n    bge _0222BE62\n    add r0, r1, #1\n    strh r0, [r5, #4]\n    mov r4, #1\n    b _0222BE62\n    cmp r1, #7\n    bge _0222BE62\n    add r0, r1, #1\n    strh r0, [r5, #4]\n    mov r4, #1\n    b _0222BE62\n    mov r0, #0x20\n    tst r0, r2\n    beq _0222BE12\n    cmp r1, #8\n    beq _0222BE62\n    cmp r1, #4\n    bge _0222BE0A\n    add r0, r1, #4\n    mov r4, #1\n    strh r0, [r5, #4]\n    add r0, r4, #0\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp]\n    b _0222BE62\n    sub r0, r1, #4\n    strh r0, [r5, #4]\n    mov r4, #1\n    b _0222BE62\n    mov r3, #0x10\n    add r0, r2, #0\n    tst r0, r3\n    beq _0222BE38\n    cmp r1, #8\n    beq _0222BE62\n    cmp r1, #4\n    bge _0222BE2A\n    add r0, r1, #4\n    strh r0, [r5, #4]\n    mov r4, #1\n    b _0222BE62\n    sub r0, r1, #4\n    mov r4, #1\n    strh r0, [r5, #4]\n    add r0, r4, #0\n    str r0, [sp, #4]\n    str r0, [sp]\n    b _0222BE62\n    ldrb r0, [r6, #0xe]\n    cmp r0, #0\n    beq _0222BE62\n    beq _0222BE50\n    lsl r1, r3, #5\n    tst r1, r2\n    beq _0222BE50\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r4, #0\n    str r0, [sp]\n    b _0222BE62\n    cmp r0, #0\n    beq _0222BE62\n    mov r0, #1\n    lsl r0, r0, #8\n    tst r0, r2\n    beq _0222BE62\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    cmp r0, #1\n    bne _0222BEBC\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _0222BE96\n    mov r0, #0\n    ldrsh r1, [r5, r0]\n    mov r3, #2\n    strh r1, [r5, #2]\n    ldrsh r0, [r5, r0]\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    strh r0, [r5]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov43_0222BC78\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    ldrsh r1, [r5, r0]\n    strh r1, [r5, #2]\n    ldrsh r1, [r5, r0]\n    sub r1, r1, #1\n    strh r1, [r5]\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    bge _0222BEAC\n    add r0, r0, #4\n    strh r0, [r5]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    mov r3, #1\n    bl ov43_0222BC78\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    cmp r4, #1\n    bne _0222BED8\n    ldr r0, _0222BEE8 ; =0x000005E5\n    bl PlaySE\n    mov r2, #4\n    add r0, r5, #0\n    ldrsh r2, [r5, r2]\n    add r0, #8\n    add r1, r7, #0\n    bl ov43_0222C844\n    ldr r0, [sp, #8]\n    strh r0, [r5, #6]\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222BEE0: .word gSystem\n    _0222BEE4: .word 0x00000CF3\n    _0222BEE8: .word 0x000005E5"
    );
    #endif
}

void ov43_0222BEEC(void) {
    /* Original at 0x0222BEEC */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0222BF9C ; =ov43_0222EF60\n    add r7, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl TouchscreenHitbox_FindHitboxAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0222BF08\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #8\n    bhi _0222BF34\n    mov r1, #1\n    str r1, [r6]\n    strh r0, [r5, #4]\n    ldr r0, _0222BFA0 ; =0x000005E5\n    bl PlaySE\n    mov r2, #4\n    add r0, r5, #0\n    ldrsh r2, [r5, r2]\n    add r0, #8\n    add r1, r4, #0\n    bl ov43_0222C844\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r4, #0\n    mov r3, #5\n    bl ov43_0222BC78\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #9\n    beq _0222BF4C\n    cmp r0, #0xa\n    bne _0222BF40\n    mov r1, #1\n    b _0222BF4C\n    mov r1, #0\n    ldrsh r1, [r5, r1]\n    sub r0, #0xb\n    sub r0, r0, r1\n    lsl r0, r0, #0x18\n    asr r1, r0, #0x18\n    cmp r1, #0\n    bne _0222BF54\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    str r0, [r6]\n    mov r0, #0\n    ldrsh r2, [r5, r0]\n    strh r2, [r5, #2]\n    ldrsh r2, [r5, r0]\n    add r2, r2, r1\n    strh r2, [r5]\n    cmp r1, #0\n    ldrsh r0, [r5, r0]\n    blt _0222BF86\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    strh r0, [r5]\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r4, #0\n    mov r3, #2\n    bl ov43_0222BC78\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #0\n    bge _0222BF8E\n    add r0, r0, #4\n    strh r0, [r5]\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r4, #0\n    mov r3, #1\n    bl ov43_0222BC78\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222BF9C: .word ov43_0222EF60\n    _0222BFA0: .word 0x000005E5"
    );
    #endif
}

void ov43_0222BFA4(void) {
    /* Original at 0x0222BFA4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    mov r3, #0\n    str r3, [sp]\n    add r3, sp, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ov43_0222BEEC\n    ldr r1, [sp]\n    cmp r1, #0\n    beq _0222BFC6\n    mov r1, #1\n    add sp, #4\n    str r1, [r4]\n    pop {r3, r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov43_0222BD18\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov43_0222BFD4(void) {
    /* Original at 0x0222BFD4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, #0xb2\n    ldrh r0, [r0]\n    add r4, r2, #0\n    cmp r0, #2\n    bne _0222BFE8\n    mov r2, #2\n    b _0222BFEA\n    mov r2, #1\n    mov r0, #4\n    ldrsh r0, [r5, r0]\n    str r0, [sp]\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    mov r3, #0\n    ldrsh r3, [r5, r3]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov43_0222C378\n    add r5, #8\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0xa\n    bl ov43_0222C844\n    add r0, r4, #0\n    mov r1, #0\n    bl ov43_0222AD20\n    ldr r0, _0222C020 ; =0x000005E1\n    bl PlaySE\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _0222C020: .word 0x000005E1"
    );
    #endif
}

void ov43_0222C024(void) {
    /* Original at 0x0222C024 */
    /* Requires manual decompilation - 135 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    mov r0, #0xb0\n    ldrsh r0, [r5, r0]\n    str r1, [sp, #0xc]\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r0, #8\n    blt _0222C0B4\n    mov r2, #0\n    ldr r0, [r4]\n    mov r1, #2\n    add r3, r2, #0\n    bl ScheduleSetBgPosText\n    mov r2, #0\n    ldr r0, [r4]\n    mov r1, #3\n    add r3, r2, #0\n    bl ScheduleSetBgPosText\n    ldr r3, _0222C140 ; =ov43_0222F0FC\n    add r2, sp, #0x10\n    add r7, r2, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r4, #0\n    add r0, #8\n    add r1, r7, #0\n    bl GF_SetG2dRendererSurface\n    add r0, r5, #0\n    add r0, #0xb2\n    ldrh r0, [r0]\n    cmp r0, #2\n    bne _0222C076\n    mov r2, #2\n    b _0222C078\n    mov r2, #1\n    mov r0, #0x38\n    add r1, r5, #0\n    mul r0, r2\n    mov r2, #2\n    add r1, #8\n    lsl r2, r2, #8\n    add r0, r1, r0\n    add r1, r4, #0\n    add r2, r4, r2\n    bl ov43_0222C9A4\n    mov r0, #4\n    ldrsh r0, [r5, r0]\n    mov r3, #0\n    ldr r1, [sp, #0xc]\n    str r0, [sp]\n    str r3, [sp, #4]\n    str r6, [sp, #8]\n    ldrsh r3, [r5, r3]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov43_0222C378\n    add r0, r4, #0\n    mov r1, #1\n    bl ov43_0222AD20\n    add sp, #0x20\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r1, r0, #8\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    asr r6, r0, #3\n    add r0, r5, #0\n    add r0, #0xb2\n    ldrh r0, [r0]\n    cmp r0, #2\n    bne _0222C0CA\n    neg r6, r6\n    ldr r0, [r4]\n    mov r1, #2\n    mov r2, #0\n    add r3, r6, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r4]\n    mov r1, #3\n    mov r2, #0\n    add r3, r6, #0\n    bl ScheduleSetBgPosText\n    ldr r3, _0222C140 ; =ov43_0222F0FC\n    add r2, sp, #0x10\n    add r7, r2, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r1, [sp, #0x10]\n    lsl r0, r6, #0xc\n    add r0, r1, r0\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    add r0, #8\n    add r1, r7, #0\n    bl GF_SetG2dRendererSurface\n    mov r0, #0xb0\n    ldrsh r3, [r5, r0]\n    mov r0, #0x1f\n    lsr r2, r3, #0x1f\n    lsl r1, r3, #0x1f\n    sub r1, r1, r2\n    ror r1, r0\n    add r0, r2, r1\n    beq _0222C130\n    add r2, r3, r2\n    asr r0, r2, #1\n    lsl r1, r0, #2\n    ldr r0, _0222C144 ; =ov43_0222F0EC\n    ldr r6, [r0, r1]\n    cmp r6, #0\n    beq _0222C130\n    mov r2, #0\n    mov r3, #2\n    ldrsh r2, [r5, r2]\n    ldrsh r3, [r5, r3]\n    add r0, r5, #0\n    add r1, r4, #0\n    blx r6\n    mov r0, #0xb0\n    ldrsh r0, [r5, r0]\n    add r5, #0xb0\n    add r0, r0, #1\n    strh r0, [r5]\n    mov r0, #0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222C140: .word ov43_0222F0FC\n    _0222C144: .word ov43_0222F0EC"
    );
    #endif
}

void ov43_0222C148(void) {
    /* Original at 0x0222C148 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r5, r1, #0\n    add r6, r0, #0\n    ldr r0, [r5, #4]\n    add r4, r2, #0\n    str r3, [sp, #0x18]\n    bl sub_0202C6F4\n    str r0, [sp, #0x1c]\n    add r0, r6, #0\n    bl ov43_0222C620\n    str r0, [sp, #0x20]\n    add r7, r5, #0\n    ldr r1, [sp, #0x20]\n    add r7, #0x18\n    ldrb r1, [r7, r1]\n    ldr r0, [sp, #0x1c]\n    mov r2, #8\n    bl sub_0202C090\n    str r0, [sp, #0x24]\n    add r0, sp, #0x28\n    mov r1, #0\n    mov r2, #0x18\n    bl MI_CpuFill8\n    ldr r1, _0222C220 ; =ov43_0222ED9C\n    add r0, sp, #0x28\n    ldrh r2, [r1, #4]\n    strh r2, [r0]\n    ldrh r2, [r1, #6]\n    strh r2, [r0, #2]\n    ldrh r2, [r1, #8]\n    strh r2, [r0, #4]\n    ldrh r2, [r1, #0xa]\n    strh r2, [r0, #6]\n    ldrh r2, [r1, #0xc]\n    ldrh r1, [r1, #0xe]\n    strh r2, [r0, #8]\n    strh r1, [r0, #0xa]\n    ldr r0, [sp, #0x24]\n    cmp r0, #2\n    bne _0222C1AC\n    add r0, r6, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    str r0, [sp, #0x34]\n    b _0222C1B4\n    add r0, r6, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    str r0, [sp, #0x34]\n    ldr r0, [r4]\n    mov r1, #4\n    str r0, [sp, #0x38]\n    add r0, sp, #0x28\n    strb r1, [r0, #0x14]\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #0x11\n    str r0, [sp, #4]\n    mov r1, #0\n    ldr r0, _0222C224 ; =ov43_0222C630\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r0, #1\n    str r0, [sp, #0x14]\n    ldr r2, [r5]\n    ldr r0, [r4, #0x5c]\n    lsl r2, r2, #0x18\n    add r1, sp, #0x28\n    lsr r2, r2, #0x18\n    mov r3, #0xd\n    bl TouchscreenListMenu_CreateWithCallback\n    add r1, r6, #0\n    add r1, #0xec\n    str r0, [r1]\n    ldr r2, [sp, #0x20]\n    ldr r1, [r5, #4]\n    ldrb r2, [r7, r2]\n    ldr r3, [sp, #0x18]\n    add r0, r4, #0\n    bl ov43_0222AB20\n    ldr r3, [sp, #0x18]\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r2, #0xc\n    bl ov43_0222C550\n    add r0, r4, #0\n    mov r1, #0\n    bl ov43_0222AD00\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #4\n    mov r1, #8\n    mov r2, #0\n    mov r3, #0x3d\n    bl StartBrightnessTransition\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222C220: .word ov43_0222ED9C\n    _0222C224: .word ov43_0222C630"
    );
    #endif
}

void ov43_0222C228(void) {
    /* Original at 0x0222C228 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    add r6, r2, #0\n    bl ov43_0222C5D8\n    cmp r0, #0\n    bne _0222C23C\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    bl TouchscreenListMenu_HandleInput\n    add r4, r0, #0\n    cmp r4, #3\n    beq _0222C25E\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _0222C25E\n    add r0, r0, #1\n    cmp r4, r0\n    bne _0222C268\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    mov r1, #1\n    bl ov43_0222AD00\n    mov r4, #2\n    add r0, r5, #0\n    bl ov43_0222C600\n    add r0, r5, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    bl TouchscreenListMenu_WasLastInputTouch\n    str r0, [r7]\n    add r0, r5, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    bl TouchscreenListMenu_Destroy\n    cmp r4, #2\n    bne _0222C2A0\n    add r0, r6, #0\n    mov r1, #1\n    bl ov43_0222AD00\n    mov r2, #4\n    add r0, r5, #0\n    ldrsh r2, [r5, r2]\n    add r0, #8\n    add r1, r6, #0\n    mov r3, #0\n    bl ov43_0222C890\n    mov r0, #0\n    mov r1, #0x3d\n    mov r2, #1\n    bl SetBlendBrightness\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222C2B0(void) {
    /* Original at 0x0222C2B0 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r1, #0\n    str r0, [sp]\n    ldr r0, [r5, #4]\n    add r4, r2, #0\n    str r3, [sp, #4]\n    bl sub_0202C6F4\n    str r0, [sp, #0x1c]\n    ldr r0, [sp]\n    bl ov43_0222C620\n    add r6, r5, #0\n    add r7, r0, #0\n    add r6, #0x18\n    ldrb r1, [r6, r7]\n    ldr r0, [sp, #0x1c]\n    bl sub_0202C23C\n    bl DWC_GetFriendKey\n    str r1, [sp, #0x10]\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    mov r2, #0\n    eor r0, r2\n    ldr r2, [sp, #0x14]\n    mov r1, #0\n    eor r1, r2\n    orr r0, r1\n    beq _0222C2F6\n    mov r0, #0x3c\n    str r0, [sp, #8]\n    b _0222C2FA\n    mov r0, #0x42\n    str r0, [sp, #8]\n    ldr r0, _0222C328 ; =0x000005DD\n    bl PlaySE\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    bl ov43_0222AAA4\n    ldrb r2, [r6, r7]\n    ldr r1, [r5, #4]\n    ldr r3, [sp, #4]\n    add r0, r4, #0\n    bl ov43_0222AB20\n    ldr r0, [sp]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #4]\n    add r1, r4, #0\n    bl ov43_0222C550\n    mov r0, #1\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222C328: .word 0x000005DD"
    );
    #endif
}

void ov43_0222C32C(void) {
    /* Original at 0x0222C32C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl ov43_0222C620\n    add r2, r0, #0\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    ldr r1, [r5, #4]\n    add r0, r4, #0\n    add r3, r6, #0\n    bl ov43_0222AB20\n    add r0, r7, #0\n    add r1, r4, #0\n    mov r2, #0x39\n    add r3, r6, #0\n    bl ov43_0222C550\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222C358(void) {
    /* Original at 0x0222C358 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl ov43_0222C5D8\n    cmp r0, #0\n    bne _0222C36A\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov43_0222ADB8\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov43_0222C378(void) {
    /* Original at 0x0222C378 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r1, [sp, #0x10]\n    ldr r1, [sp, #0x34]\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r1, #0\n    bne _0222C398\n    ldr r1, [sp, #0x30]\n    strh r7, [r5]\n    strh r1, [r5, #4]\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov43_0222C3E8\n    ldr r1, [sp, #0x34]\n    add r4, r5, #0\n    mov r0, #0x38\n    mul r0, r1\n    mov r2, #2\n    lsl r2, r2, #8\n    add r4, #8\n    str r0, [sp, #0x14]\n    add r0, r4, r0\n    add r1, r6, #0\n    add r2, r6, r2\n    bl ov43_0222C7F8\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r6, r0\n    str r0, [sp]\n    ldr r0, [sp, #0x10]\n    add r5, #0xb4\n    add r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x38]\n    str r7, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x10]\n    ldr r3, [r5]\n    add r0, r4, r0\n    add r2, r6, #0\n    bl ov43_0222C918\n    ldr r0, [sp, #0x14]\n    ldr r2, [sp, #0x30]\n    add r0, r4, r0\n    add r1, r6, #0\n    bl ov43_0222C844\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222C3E8(void) {
    /* Original at 0x0222C3E8 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x1c\n    mov r0, #0x83\n    add r5, r1, #0\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r4, r2, #0\n    mov r2, #0x10\n    add r1, r0, #0\n    str r2, [sp]\n    mov r3, #4\n    str r3, [sp, #4]\n    add r1, #0xc\n    str r1, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    str r3, [sp, #0x10]\n    ldrh r3, [r0]\n    lsl r3, r3, #0x15\n    lsr r3, r3, #0x18\n    str r3, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    add r3, r1, #0\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r5]\n    bl CopyToBgTilemapRect\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #4\n    str r1, [sp]\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    lsl r2, r4, #2\n    str r1, [sp, #8]\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #0xc]\n    mov r1, #8\n    str r1, [sp, #0x10]\n    ldrh r1, [r0]\n    add r2, #0x10\n    lsl r2, r2, #0x18\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #0\n    lsr r2, r2, #0x18\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r5]\n    add r3, r1, #0\n    bl CopyToBgTilemapRect\n    ldr r0, [r5]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov43_0222C46C(void) {
    /* Original at 0x0222C46C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    mov r0, #0x83\n    add r4, r1, #0\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #4\n    str r1, [sp]\n    lsl r2, r3, #2\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    add r2, #0x10\n    str r1, [sp, #8]\n    lsl r1, r2, #0x18\n    lsr r2, r1, #0x18\n    str r2, [sp, #0xc]\n    mov r1, #8\n    str r1, [sp, #0x10]\n    ldrh r1, [r0]\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #0\n    add r3, r1, #0\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r4]\n    bl CopyToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov43_0222C4B8(void) {
    /* Original at 0x0222C4B8 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x1c\n    mov r0, #0x83\n    add r5, r1, #0\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r4, r2, #0\n    mov r2, #0x10\n    add r1, r0, #0\n    str r2, [sp]\n    mov r3, #4\n    str r3, [sp, #4]\n    add r1, #0xc\n    str r1, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    str r3, [sp, #0x10]\n    ldrh r3, [r0]\n    lsl r3, r3, #0x15\n    lsr r3, r3, #0x18\n    str r3, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    add r3, r1, #0\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r5]\n    bl CopyToBgTilemapRect\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #4\n    str r1, [sp]\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    lsl r2, r4, #2\n    str r1, [sp, #8]\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #0xc]\n    mov r1, #8\n    str r1, [sp, #0x10]\n    ldrh r1, [r0]\n    add r2, #0x10\n    lsl r2, r2, #0x18\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #0\n    lsr r2, r2, #0x18\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r5]\n    add r3, r1, #0\n    bl CopyToBgTilemapRect\n    ldr r0, [r5]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov43_0222C53C(void) {
    /* Original at 0x0222C53C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #3\n    strb r3, [r1, #8]\n    add r1, r0, #0\n    add r1, #0xb2\n    strh r2, [r1]\n    mov r1, #0\n    add r0, #0xb0\n    strh r1, [r0]\n    bx lr"
    );
    #endif
}

void ov43_0222C550(void) {
    /* Original at 0x0222C550 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r3, #0\n    add r0, #0xc8\n    mov r1, #0xf\n    add r7, r2, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x80\n    add r1, r6, #0\n    bl String_New\n    add r6, r0, #0\n    ldr r0, [r4, #0x54]\n    add r1, r7, #0\n    add r2, r6, #0\n    bl ReadMsgDataIntoString\n    add r1, r5, #0\n    add r1, #0xd8\n    ldr r0, [r4, #0x50]\n    ldr r1, [r1]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r3, #0\n    add r0, r5, #0\n    add r2, r5, #0\n    str r3, [sp]\n    add r0, #0xe0\n    ldr r0, [r0]\n    add r2, #0xd8\n    str r0, [sp, #4]\n    ldr r0, _0222C5D4 ; =0x00010200\n    mov r1, #1\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    add r0, r5, #0\n    ldr r2, [r2]\n    add r0, #0xc8\n    bl AddTextPrinterParameterizedWithColor\n    add r1, r5, #0\n    add r1, #0xdc\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0xc8\n    mov r1, #1\n    mov r2, #0x46\n    mov r3, #0xc\n    bl DrawFrameAndWindow2\n    add r5, #0xc8\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222C5D4: .word 0x00010200"
    );
    #endif
}

void ov43_0222C5D8(void) {
    /* Original at 0x0222C5D8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r0, #0xdc\n    ldr r0, [r0]\n    add r4, r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222C5FC\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    bl TextFlags_GetIsTouchSpeedingUpPrint\n    str r0, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov43_0222C600(void) {
    /* Original at 0x0222C600 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0xc8\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    add r0, #0xc8\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r4, #0xb8\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    pop {r4, pc}"
    );
    #endif
}

void ov43_0222C620(void) {
    /* Original at 0x0222C620 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    ldrsh r1, [r0, r1]\n    lsl r2, r1, #3\n    mov r1, #4\n    ldrsh r0, [r0, r1]\n    add r0, r2, r0\n    bx lr"
    );
    #endif
}

void ov43_0222C630(void) {
    /* Original at 0x0222C630 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r3, #1\n    bne _0222C63E\n    ldr r0, _0222C658 ; =0x000005DC\n    bl PlaySE\n    pop {r3, pc}\n    cmp r3, #2\n    bne _0222C64A\n    ldr r0, _0222C658 ; =0x000005DC\n    bl PlaySE\n    pop {r3, pc}\n    cmp r3, #3\n    bne _0222C654\n    ldr r0, _0222C658 ; =0x000005DC\n    bl PlaySE\n    pop {r3, pc}\n    nop\n    _0222C658: .word 0x000005DC"
    );
    #endif
}

void ov43_0222C65C(void) {
    /* Original at 0x0222C65C */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, #0xf8\n    add r4, r1, #0\n    ldr r0, [r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xff\n    bl ov43_0222AD74\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    mov r1, #4\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0xfc\n    str r1, [r0]\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #4\n    ldrsh r1, [r5, r0]\n    mov r0, #0xa\n    add r5, #0xf8\n    add r3, r1, #0\n    mul r3, r0\n    ldr r0, _0222C700 ; =ov43_0222EFA0\n    ldrsh r0, [r0, r3]\n    lsl r2, r0, #3\n    ldr r0, _0222C704 ; =ov43_0222EFA2\n    str r2, [sp]\n    ldrsh r0, [r0, r3]\n    lsl r1, r0, #3\n    add r1, #0xfc\n    lsl r0, r2, #0xc\n    str r0, [sp]\n    str r1, [sp, #4]\n    lsl r0, r1, #0xc\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldr r1, _0222C708 ; =0x0400004A\n    ldr r0, _0222C70C ; =0xFFFFC0FF\n    ldrh r2, [r1]\n    and r2, r0\n    mov r0, #7\n    lsl r0, r0, #8\n    orr r2, r0\n    strh r2, [r1]\n    ldrh r3, [r1]\n    mov r2, #0x3f\n    sub r0, #0xd8\n    bic r3, r2\n    mov r2, #0x1f\n    orr r3, r2\n    mov r2, #0x20\n    orr r3, r2\n    strh r3, [r1]\n    lsl r4, r2, #0x15\n    ldr r3, [r4]\n    ldr r1, _0222C710 ; =0xFFFF1FFF\n    and r3, r1\n    lsl r1, r2, #0xa\n    orr r1, r3\n    str r1, [r4]\n    bl PlaySE\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _0222C700: .word ov43_0222EFA0\n    _0222C704: .word ov43_0222EFA2\n    _0222C708: .word 0x0400004A\n    _0222C70C: .word 0xFFFFC0FF\n    _0222C710: .word 0xFFFF1FFF"
    );
    #endif
}

void ov43_0222C714(void) {
    /* Original at 0x0222C714 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    bl Sprite_IsAnimated\n    cmp r0, #0\n    bne _0222C728\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    bl Sprite_GetAnimationFrame\n    add r1, r4, #0\n    add r1, #0xfc\n    ldr r1, [r1]\n    sub r1, r0, r1\n    cmp r1, #2\n    blo _0222C748\n    add r4, #0xfc\n    str r0, [r4]\n    ldr r0, _0222C74C ; =0x00000628\n    bl PlaySE\n    mov r0, #0\n    pop {r4, pc}\n    _0222C74C: .word 0x00000628"
    );
    #endif
}

void ov43_0222C750(void) {
    /* Original at 0x0222C750 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r2]\n    ldr r0, _0222C784 ; =0xFFFF1FFF\n    and r0, r1\n    str r0, [r2]\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r5, #0xf8\n    ldr r0, [r5]\n    mov r1, #0\n    bl Sprite_SetAnimActiveFlag\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0xff\n    bl ov43_0222AD74\n    pop {r3, r4, r5, pc}\n    _0222C784: .word 0xFFFF1FFF"
    );
    #endif
}

void ov43_0222C788(void) {
    /* Original at 0x0222C788 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r2, #0\n    add r5, r0, #0\n    ldrh r0, [r4]\n    add r6, r1, #0\n    add r7, r3, #0\n    strh r0, [r5]\n    ldrh r0, [r4, #2]\n    strh r0, [r5, #2]\n    ldrh r0, [r4, #4]\n    strh r0, [r5, #4]\n    add r0, r5, #0\n    add r0, #8\n    bl InitWindow\n    mov r0, #2\n    ldrsh r1, [r4, r0]\n    cmp r1, #0\n    bge _0222C7B2\n    neg r1, r1\n    mov r0, #0\n    ldrsh r3, [r4, r0]\n    cmp r3, #0\n    bge _0222C7BC\n    neg r3, r3\n    add r0, r1, #4\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x1a\n    str r0, [sp, #4]\n    mov r0, #0x11\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    add r3, r3, #4\n    str r0, [sp, #0x10]\n    add r5, #8\n    lsl r3, r3, #0x18\n    ldr r0, [r6]\n    add r1, r5, #0\n    mov r2, #3\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222C7EC(void) {
    RemoveWindow();
}

void ov43_0222C7F8(void) {
    /* Original at 0x0222C7F8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    mov r1, #2\n    ldrsh r5, [r0, r1]\n    cmp r5, #0\n    bge _0222C808\n    neg r5, r5\n    mov r1, #0\n    ldrsh r3, [r0, r1]\n    cmp r3, #0\n    bge _0222C812\n    neg r3, r3\n    lsl r0, r5, #0x18\n    ldr r2, [r2, #8]\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldrh r0, [r2]\n    lsl r3, r3, #0x18\n    mov r1, #2\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldrh r0, [r2, #2]\n    add r2, #0xc\n    lsr r3, r3, #0x18\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    bl LoadRectToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov43_0222C844(void) {
    /* Original at 0x0222C844 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    cmp r2, #0xa\n    bne _0222C858\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xff\n    bl ov43_0222AD74\n    pop {r4, pc}\n    ldr r1, _0222C88C ; =ov43_0222EFA0\n    mov r0, #0xa\n    add r3, r2, #0\n    mul r3, r0\n    add r2, r1, r3\n    ldrsh r1, [r1, r3]\n    mov r3, #2\n    ldrsh r2, [r2, r3]\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    add r1, r1, #7\n    add r2, r2, #2\n    lsl r1, r1, #0x13\n    lsl r2, r2, #0x13\n    ldr r0, [r4, r0]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl Sprite_SetPositionXY\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0xff\n    bl ov43_0222AD74\n    pop {r4, pc}\n    nop\n    _0222C88C: .word ov43_0222EFA0"
    );
    #endif
}

void ov43_0222C890(void) {
    /* Original at 0x0222C890 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    ldr r5, _0222C914 ; =ov43_0222EFA0\n    add r7, r0, #0\n    str r1, [sp, #0xc]\n    str r2, [sp, #0x10]\n    str r3, [sp, #0x14]\n    mov r4, #0\n    ldr r0, [sp, #0x14]\n    cmp r0, #1\n    bne _0222C8B0\n    ldr r0, [sp, #0x10]\n    cmp r0, r4\n    bne _0222C8B0\n    ldrb r0, [r5, #8]\n    b _0222C8B2\n    ldrb r0, [r5, #7]\n    mov r1, #2\n    ldrsh r3, [r7, r1]\n    cmp r3, #0\n    bge _0222C8BC\n    neg r3, r3\n    mov r1, #0\n    ldrsh r2, [r7, r1]\n    cmp r2, #0\n    bge _0222C8C6\n    neg r2, r2\n    ldrb r1, [r5, #4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r1, [sp]\n    ldrb r1, [r5, #5]\n    mov r6, #0\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    ldrsh r6, [r5, r6]\n    ldr r0, [sp, #0xc]\n    ldrb r1, [r5, #6]\n    add r2, r6, r2\n    mov r6, #2\n    ldrsh r6, [r5, r6]\n    lsl r2, r2, #0x18\n    ldr r0, [r0]\n    add r3, r6, r3\n    lsl r3, r3, #0x18\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl BgTilemapRectChangePalette\n    add r4, r4, #1\n    add r5, #0xa\n    cmp r4, #9\n    blt _0222C8A0\n    ldr r0, [sp, #0xc]\n    mov r1, #2\n    ldr r0, [r0]\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [sp, #0xc]\n    mov r1, #0\n    ldr r0, [r0]\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222C914: .word ov43_0222EFA0"
    );
    #endif
}

void ov43_0222C918(void) {
    /* Original at 0x0222C918 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r6, r0, #0\n    ldr r0, [sp, #0x30]\n    add r7, r2, #0\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x34]\n    str r3, [sp, #0x10]\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x3c]\n    str r0, [sp, #0x3c]\n    ldr r0, [r1, #4]\n    bl sub_0202C6F4\n    str r0, [sp, #0x14]\n    add r0, r6, #0\n    add r0, #8\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r6, #0\n    add r1, r7, #0\n    bl ov43_0222CA30\n    ldr r0, [sp, #0x38]\n    ldr r1, [sp, #0x34]\n    lsl r0, r0, #3\n    str r0, [sp, #0x18]\n    mov r4, #0\n    add r5, r1, r0\n    ldr r0, [sp, #0x34]\n    ldr r1, [r0]\n    ldr r0, [sp, #0x18]\n    add r0, r0, r4\n    cmp r1, r0\n    bls _0222C97C\n    ldr r0, [sp, #0x14]\n    str r4, [sp]\n    str r0, [sp, #4]\n    ldrb r0, [r5, #8]\n    ldr r1, [sp, #0x10]\n    ldr r3, [sp, #0x30]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x3c]\n    add r2, r7, #0\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    bl ov43_0222CA50\n    b _0222C988\n    ldr r2, [sp, #0x30]\n    add r0, r6, #0\n    add r1, r7, #0\n    add r3, r4, #0\n    bl ov43_0222CB34\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #8\n    blt _0222C954\n    ldr r0, [r7]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add r6, #8\n    add r0, r6, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222C9A4(void) {
    /* Original at 0x0222C9A4 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov43_0222CA30\n    add r0, r5, #0\n    add r0, #8\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #2\n    ldrsh r1, [r5, r0]\n    cmp r1, #0\n    bge _0222C9C2\n    neg r1, r1\n    mov r0, #0\n    ldrsh r3, [r5, r0]\n    cmp r3, #0\n    bge _0222C9CC\n    neg r3, r3\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldrb r0, [r5, #4]\n    lsl r3, r3, #0x18\n    mov r2, #0\n    str r0, [sp, #4]\n    ldrb r0, [r5, #5]\n    mov r1, #2\n    lsr r3, r3, #0x18\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r0, [r4]\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #2\n    ldrsh r1, [r5, r0]\n    cmp r1, #0\n    bge _0222C9FC\n    neg r1, r1\n    mov r0, #0\n    ldrsh r3, [r5, r0]\n    cmp r3, #0\n    bge _0222CA06\n    neg r3, r3\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldrb r0, [r5, #4]\n    lsl r3, r3, #0x18\n    mov r2, #0\n    str r0, [sp, #4]\n    ldrb r0, [r5, #5]\n    mov r1, #3\n    lsr r3, r3, #0x18\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r0, [r4]\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov43_0222CA30(void) {
    ov42_0222740C(0);
}

void ov43_0222CA50(void) {
    /* Original at 0x0222CA50 */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    ldr r0, [sp, #0x48]\n    add r6, r2, #0\n    str r0, [sp, #0x18]\n    str r1, [sp, #0x10]\n    ldr r0, [sp, #0x44]\n    ldr r1, [sp, #0x18]\n    mov r2, #7\n    str r3, [sp, #0x14]\n    ldr r4, [sp, #0x40]\n    bl sub_0202C090\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x44]\n    ldr r1, [sp, #0x18]\n    mov r2, #8\n    bl sub_0202C090\n    add r7, r0, #0\n    cmp r7, #2\n    bne _0222CA8C\n    ldr r2, [sp, #0x14]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r3, r4, #0\n    bl ov43_0222CB34\n    b _0222CAD0\n    mov r0, #0xa\n    add r6, r4, #0\n    mul r6, r0\n    ldr r2, _0222CB28 ; =ov43_0222EFA0\n    mov r1, #0\n    ldrsh r1, [r5, r1]\n    ldrsh r2, [r2, r6]\n    add r0, #0xfc\n    add r1, r1, r2\n    lsl r2, r1, #3\n    add r2, #8\n    add r1, sp, #0x20\n    strh r2, [r1]\n    mov r2, #2\n    ldrsh r3, [r5, r2]\n    ldr r2, _0222CB2C ; =ov43_0222EFA2\n    ldrsh r2, [r2, r6]\n    add r2, r3, r2\n    lsl r2, r2, #3\n    add r0, r2, r0\n    strh r0, [r1, #2]\n    mov r0, #8\n    strh r0, [r1, #4]\n    mov r0, #1\n    strh r0, [r1, #6]\n    ldr r0, [sp, #0x10]\n    ldr r2, [sp, #0x1c]\n    ldr r3, [sp, #0x4c]\n    add r1, sp, #0x20\n    bl ov42_022272BC\n    lsl r1, r4, #2\n    add r1, r5, r1\n    str r0, [r1, #0x18]\n    ldr r1, [sp, #0x4c]\n    mov r0, #0x80\n    bl String_New\n    add r6, r0, #0\n    ldr r0, [sp, #0x44]\n    ldr r1, [sp, #0x18]\n    bl sub_0202C254\n    add r1, r0, #0\n    add r0, r6, #0\n    bl CopyU16ArrayToString\n    add r3, r4, #0\n    mov r0, #0xa\n    mul r3, r0\n    ldr r0, _0222CB2C ; =ov43_0222EFA2\n    ldr r4, _0222CB28 ; =ov43_0222EFA0\n    ldrsh r0, [r0, r3]\n    ldrsh r3, [r4, r3]\n    lsl r1, r7, #2\n    lsl r0, r0, #3\n    sub r0, #0x18\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0222CB30 ; =ov43_0222ED94\n    add r5, #8\n    ldr r0, [r0, r1]\n    mov r1, #4\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r2, r6, #0\n    lsl r3, r3, #3\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222CB28: .word ov43_0222EFA0\n    _0222CB2C: .word ov43_0222EFA2\n    _0222CB30: .word ov43_0222ED94"
    );
    #endif
}

void ov43_0222CB34(void) {
    /* Original at 0x0222CB34 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x1c\n    add r4, r1, #0\n    add r1, r3, #0\n    mov r3, #2\n    ldrsh r5, [r0, r3]\n    cmp r5, #0\n    bge _0222CB46\n    neg r5, r5\n    mov r3, #0\n    ldrsh r6, [r0, r3]\n    cmp r6, #0\n    bge _0222CB50\n    neg r6, r6\n    ldr r0, [r2, #0xc]\n    add r3, r1, #0\n    mov r1, #3\n    str r1, [sp]\n    mov r1, #4\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    mov r1, #0\n    mov r2, #0xa\n    str r1, [sp, #0xc]\n    mul r3, r2\n    str r1, [sp, #0x10]\n    ldrh r1, [r0]\n    ldr r2, _0222CBA4 ; =ov43_0222EFA0\n    ldrsh r2, [r2, r3]\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    add r2, r2, r6\n    ldr r6, _0222CBA8 ; =ov43_0222EFA2\n    ldrh r0, [r0, #2]\n    ldrsh r3, [r6, r3]\n    lsl r2, r2, #0x18\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    add r3, r3, r5\n    str r0, [sp, #0x18]\n    lsl r3, r3, #0x18\n    ldr r0, [r4]\n    mov r1, #2\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl CopyToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}\n    _0222CBA4: .word ov43_0222EFA0\n    _0222CBA8: .word ov43_0222EFA2"
    );
    #endif
}

void ov43_0222CBAC(void) {
    ov43_0222CD3C();
}

void ov43_0222CBB4(void) {
    /* Original at 0x0222CBB4 */
    /* Requires manual decompilation - 158 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r2, #0\n    add r7, r1, #0\n    ldrb r1, [r5, #8]\n    add r4, r0, #0\n    ldr r6, [sp, #0x30]\n    cmp r1, #6\n    bls _0222CBC8\n    b _0222CD26\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0222CBD4: ; jump table\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov43_0222CD44\n    str r0, [r4, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #4]\n    bl Save_PlayerData_GetOptionsAddr\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0xc\n    add r2, sp, #8\n    bl sub_02085400\n    str r0, [r4, #8]\n    add r0, r7, #0\n    bl ov43_0222A1DC\n    ldr r0, _0222CD2C ; =gOverlayTemplate_NamingScreen\n    ldr r1, [r4, #4]\n    add r2, r6, #0\n    bl OverlayManager_New\n    str r0, [r4]\n    mov r0, #1\n    strb r0, [r5, #8]\n    b _0222CD26\n    ldr r0, [r4]\n    bl OverlayManager_Run\n    cmp r0, #0\n    beq _0222CD26\n    ldr r0, [r4]\n    bl OverlayManager_Delete\n    ldr r0, [r4, #4]\n    ldr r0, [r0, #0x14]\n    cmp r0, #0\n    bne _0222CC54\n    ldr r0, _0222CD30 ; =_02102620\n    ldr r1, [r4, #8]\n    add r2, r6, #0\n    bl OverlayManager_New\n    str r0, [r4]\n    mov r0, #2\n    strb r0, [r5, #8]\n    b _0222CD26\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov43_0222A318\n    mov r0, #3\n    strb r0, [r5, #8]\n    b _0222CD26\n    ldr r0, [r4]\n    bl OverlayManager_Run\n    cmp r0, #0\n    beq _0222CD26\n    ldr r0, [r4]\n    bl OverlayManager_Delete\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    ldr r1, [r1, #0x18]\n    ldr r2, [r2, #0x1c]\n    add r0, r5, #0\n    bl ov43_0222A338\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #7\n    bl ov43_0222A318\n    mov r0, #3\n    strb r0, [r5, #8]\n    b _0222CD26\n    ldr r0, [r4, #4]\n    bl NamingScreen_DeleteArgs\n    ldr r0, [r4, #8]\n    bl sub_02085438\n    add r0, r7, #0\n    add r1, r6, #0\n    bl ov43_0222A154\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov43_0222CD44\n    str r0, [r4, #4]\n    add r0, r7, #0\n    bl ov43_0222A1DC\n    ldr r0, _0222CD2C ; =gOverlayTemplate_NamingScreen\n    ldr r1, [r4, #4]\n    add r2, r6, #0\n    bl OverlayManager_New\n    str r0, [r4]\n    mov r0, #5\n    strb r0, [r5, #8]\n    b _0222CD26\n    ldr r0, [r4]\n    bl OverlayManager_Run\n    cmp r0, #0\n    beq _0222CD26\n    ldr r0, [r4]\n    bl OverlayManager_Delete\n    ldr r0, [r4, #4]\n    ldr r0, [r0, #0x14]\n    cmp r0, #0\n    bne _0222CD02\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0xc\n    bl ov43_0222A318\n    ldr r1, [r4, #4]\n    add r0, r5, #0\n    ldr r1, [r1, #0x18]\n    mov r2, #0\n    bl ov43_0222A338\n    mov r0, #6\n    strb r0, [r5, #8]\n    b _0222CD26\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0xd\n    bl ov43_0222A318\n    mov r0, #6\n    strb r0, [r5, #8]\n    b _0222CD26\n    ldr r0, [r4, #4]\n    bl NamingScreen_DeleteArgs\n    add r0, r7, #0\n    add r1, r6, #0\n    bl ov43_0222A154\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222CD2C: .word gOverlayTemplate_NamingScreen\n    _0222CD30: .word _02102620"
    );
    #endif
}

void ov43_0222CD34(void) {
    ov43_0222CD40();
}

void ov43_0222CD3C(void) {
    /* Original at 0x0222CD3C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov43_0222CD40(void) {
    /* Original at 0x0222CD40 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov43_0222CD44(void) {
    /* Original at 0x0222CD44 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r1, #0\n    ldr r0, [r5, #4]\n    add r4, r2, #0\n    bl Save_PlayerData_GetOptionsAddr\n    str r0, [sp]\n    mov r2, #0\n    mov r1, #7\n    str r2, [sp, #4]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl NamingScreen_CreateArgs\n    add r4, r0, #0\n    ldr r0, [r5, #0x64]\n    cmp r0, #1\n    bne _0222CD88\n    ldr r0, [r5, #0x60]\n    ldrh r0, [r0]\n    bl sub_02020B78\n    cmp r0, #0\n    ldr r0, [r4, #0x18]\n    bne _0222CD80\n    ldr r1, [r5, #0x60]\n    bl CopyU16ArrayToString\n    b _0222CD84\n    bl String_SetEmpty\n    mov r0, #0\n    str r0, [r5, #0x64]\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov43_0222CD90(void) {
    ov43_0222CE48();
}

void ov43_0222CD98(void) {
    /* Original at 0x0222CD98 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    ldrb r3, [r4, #8]\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r3, #0\n    beq _0222CDB0\n    cmp r3, #1\n    beq _0222CDBA\n    cmp r3, #2\n    beq _0222CDDC\n    b _0222CE04\n    bl ov43_0222D028\n    mov r0, #1\n    strb r0, [r4, #8]\n    b _0222CE04\n    bl ov43_0222CE14\n    cmp r0, #0\n    beq _0222CE04\n    ldr r0, _0222CE08 ; =0x000005DD\n    bl PlaySE\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #1\n    bl ov43_0222D0F8\n    mov r0, #4\n    str r0, [r5, #0x38]\n    mov r0, #2\n    strb r0, [r4, #8]\n    b _0222CE04\n    ldr r1, [r5, #0x38]\n    sub r1, r1, #1\n    str r1, [r5, #0x38]\n    cmp r1, #0\n    bgt _0222CE04\n    add r1, r6, #0\n    mov r2, #0\n    bl ov43_0222D0F8\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #2\n    bl ov43_0222A318\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov43_0222D090\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _0222CE08: .word 0x000005DD"
    );
    #endif
}

void ov43_0222CE0C(void) {
    ov43_0222D008();
}

void ov43_0222CE14(void) {
    /* Original at 0x0222CE14 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _0222CE40 ; =ov43_0222ED7A\n    add r4, r1, #0\n    bl TouchscreenHitbox_FindHitboxAtTouchNew\n    cmp r0, #0\n    bne _0222CE28\n    mov r0, #1\n    str r0, [r4]\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov43_0222A320\n    ldr r0, _0222CE44 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _0222CE3C\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _0222CE40: .word ov43_0222ED7A\n    _0222CE44: .word gSystem"
    );
    #endif
}

void ov43_0222CE48(void) {
    /* Original at 0x0222CE48 */
    /* Requires manual decompilation - 192 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    str r1, [sp, #0x14]\n    add r4, r2, #0\n    add r7, r3, #0\n    bl InitWindow\n    mov r1, #0xb\n    str r1, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, r5, #0\n    mov r2, #3\n    mov r3, #4\n    bl AddWindowParameterized\n    add r0, r5, #0\n    add r0, #0x10\n    bl InitWindow\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0xe\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    mov r0, #0xc1\n    str r0, [sp, #0x10]\n    add r1, r5, #0\n    ldr r0, [r4]\n    add r1, #0x10\n    mov r2, #3\n    mov r3, #9\n    bl AddWindowParameterized\n    add r0, r5, #0\n    add r0, #0x20\n    bl InitWindow\n    mov r3, #0x15\n    add r1, r5, #0\n    str r3, [sp]\n    mov r0, #9\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    mov r0, #0xdd\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, #0x20\n    mov r2, #3\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x10\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x20\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x80\n    add r1, r7, #0\n    bl String_New\n    add r6, r0, #0\n    mov r0, #0x80\n    add r1, r7, #0\n    bl String_New\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x14]\n    ldr r0, [r0, #4]\n    bl sub_0202C6F4\n    bl sub_0202C08C\n    bl DWC_CreateFriendKey\n    str r1, [sp, #0x1c]\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x1c]\n    mov r2, #0\n    eor r0, r2\n    ldr r2, [sp, #0x24]\n    mov r1, #0\n    eor r1, r2\n    orr r0, r1\n    ldr r0, [r4, #0x54]\n    beq _0222CF86\n    mov r1, #0x35\n    add r2, r6, #0\n    bl ReadMsgDataIntoString\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidthMultiline\n    mov r1, #0xc0\n    sub r0, r1, r0\n    mov r1, #0\n    lsr r3, r0, #1\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0222CFFC ; =0x00010200\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r1, [sp, #0x24]\n    ldr r2, [sp, #0x1c]\n    add r0, r4, #0\n    bl ov43_0222AAA4\n    ldr r0, [r4, #0x54]\n    ldr r2, [sp, #0x20]\n    mov r1, #0x34\n    bl ReadMsgDataIntoString\n    ldr r0, [r4, #0x50]\n    ldr r2, [sp, #0x20]\n    add r1, r6, #0\n    bl StringExpandPlaceholders\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0222D000 ; =0x000F0200\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x10\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    b _0222CFB4\n    mov r1, #0x36\n    add r2, r6, #0\n    bl ReadMsgDataIntoString\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidthMultiline\n    mov r1, #0xc0\n    sub r0, r1, r0\n    mov r1, #0\n    lsr r3, r0, #1\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0222CFFC ; =0x00010200\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [r4, #0x54]\n    mov r1, #0x33\n    add r2, r6, #0\n    bl ReadMsgDataIntoString\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0222D004 ; =0x00010F00\n    mov r1, #4\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x20\n    add r2, r6, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, [sp, #0x20]\n    bl String_Delete\n    str r7, [sp]\n    add r3, r5, #0\n    ldr r0, [r4, #0x58]\n    mov r1, #0xe\n    mov r2, #1\n    add r3, #0x34\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    str r0, [r5, #0x30]\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222CFFC: .word 0x00010200\n    _0222D000: .word 0x000F0200\n    _0222D004: .word 0x00010F00"
    );
    #endif
}

void ov43_0222D008(void) {
    /* Original at 0x0222D008 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl RemoveWindow\n    add r0, r4, #0\n    add r0, #0x10\n    bl RemoveWindow\n    add r0, r4, #0\n    add r0, #0x20\n    bl RemoveWindow\n    ldr r0, [r4, #0x30]\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov43_0222D028(void) {
    /* Original at 0x0222D028 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r1, #4]\n    add r4, r2, #0\n    bl Save_PlayerData_GetProfile\n    add r2, r0, #0\n    ldr r0, [r4, #0x50]\n    mov r1, #0\n    bl BufferPlayersName\n    add r1, r4, #0\n    add r0, r4, #0\n    add r1, #0x64\n    mov r2, #0x32\n    bl ov43_0222A9F4\n    ldr r2, [r5, #0x34]\n    mov r3, #0\n    str r3, [sp]\n    ldrh r0, [r2]\n    mov r1, #2\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldrh r0, [r2, #2]\n    add r2, #0xc\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    bl LoadRectToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add r0, #0x10\n    bl ScheduleWindowCopyToVram\n    add r5, #0x20\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov43_0222D090(void) {
    /* Original at 0x0222D090 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov43_0222AA70\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r0, [r4]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #0\n    add r0, #0x10\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r5, #0x20\n    add r0, r5, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r0, [r4]\n    mov r1, #3\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov43_0222D0F8(void) {
    /* Original at 0x0222D0F8 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    ldr r3, _0222D130 ; =_0222ED5C\n    add r4, r1, #0\n    ldrb r5, [r3, #1]\n    ldrb r3, [r3, #2]\n    add r1, sp, #0xc\n    strb r5, [r1]\n    strb r3, [r1, #1]\n    mov r1, #0xe\n    str r1, [sp]\n    mov r1, #4\n    str r1, [sp, #4]\n    add r0, sp, #0xc\n    ldrb r0, [r0, r2]\n    mov r1, #2\n    mov r2, #0x11\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    mov r3, #0x14\n    bl BgTilemapRectChangePalette\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0222D130: .word _0222ED5C"
    );
    #endif
}

void ov43_0222D134(void) {
    /* Original at 0x0222D134 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #4]\n    add r6, r2, #0\n    add r7, r3, #0\n    bl Save_VarsFlags_Get\n    mov r1, #2\n    mov r2, #0x1b\n    bl Save_VarsFlags_FlypointFlagAction\n    str r0, [r5, #0x10]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov43_0222D584\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222D15C(void) {
    /* Original at 0x0222D15C */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    ldrb r5, [r6, #8]\n    add r4, r0, #0\n    add r7, r2, #0\n    str r3, [sp]\n    cmp r5, #6\n    bhi _0222D220\n    add r5, r5, r5\n    add r5, pc\n    ldrh r5, [r5, #6]\n    lsl r5, r5, #0x10\n    asr r5, r5, #0x10\n    add pc, r5\n    _0222D178: ; jump table\n    mov r0, #0\n    strh r0, [r4, #0xe]\n    strh r0, [r4]\n    ldr r3, [sp]\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov43_0222D654\n    mov r0, #2\n    strb r0, [r6, #8]\n    b _0222D220\n    bl ov43_0222D47C\n    strb r0, [r6, #8]\n    b _0222D220\n    bl ov43_0222D4C4\n    ldr r3, [sp]\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov43_0222D508\n    mov r0, #4\n    strb r0, [r6, #8]\n    b _0222D220\n    bl ov43_0222D508\n    cmp r0, #1\n    bne _0222D220\n    mov r0, #2\n    strb r0, [r6, #8]\n    b _0222D220\n    ldrh r0, [r4, #0xe]\n    cmp r0, #0\n    beq _0222D1DC\n    ldrh r0, [r4, #0xc]\n    sub r0, r0, #1\n    strh r0, [r4, #0xc]\n    ldrh r0, [r4, #0xc]\n    cmp r0, #0\n    bne _0222D220\n    ldr r1, [r4, #8]\n    add r0, r6, #0\n    bl ov43_0222DCC4\n    cmp r0, #0\n    beq _0222D206\n    ldr r0, _0222D224 ; =0x000005E5\n    bl PlaySE\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov43_0222D87C\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #1\n    bl ov43_0222A318\n    mov r0, #1\n    strh r0, [r4, #0xe]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #2\n    strb r0, [r6, #8]\n    b _0222D220\n    add r1, r7, #0\n    bl ov43_0222D778\n    add r0, r6, #0\n    mov r1, #1\n    mov r2, #9\n    bl ov43_0222A318\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222D224: .word 0x000005E5"
    );
    #endif
}

void ov43_0222D228(void) {
    ov43_0222D610();
}

void ov43_0222D230(void) {
    /* Original at 0x0222D230 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x10]\n    cmp r0, #1\n    bne _0222D23A\n    mov r0, #8\n    b _0222D23C\n    mov r0, #3\n    sub r0, r0, #1\n    cmp r1, r0\n    bne _0222D246\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov43_0222D24C(void) {
    /* Original at 0x0222D24C */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r2, #0\n    cmp r3, #5\n    bhi _0222D2F2\n    add r1, r3, r3\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0222D262: ; jump table\n    mov r1, #0\n    ldrsh r1, [r4, r1]\n    bl ov43_0222D230\n    cmp r0, #0\n    beq _0222D2F2\n    ldr r0, _0222D2F8 ; =0x000005DD\n    bl PlaySE\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    ldr r0, _0222D2F8 ; =0x000005DD\n    bl PlaySE\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    mov r2, #0\n    ldrsh r2, [r4, r2]\n    add r1, r5, #0\n    bl ov43_0222DB28\n    mov r2, #0\n    ldrsh r2, [r4, r2]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov43_0222DB94\n    mov r0, #2\n    str r0, [r4, #8]\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    mov r2, #0\n    ldrsh r2, [r4, r2]\n    add r1, r5, #0\n    bl ov43_0222DB28\n    mov r2, #0\n    ldrsh r2, [r4, r2]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov43_0222DB94\n    mov r0, #3\n    str r0, [r4, #8]\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #4\n    strh r0, [r4, #0xc]\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #1\n    bl ov43_0222AD40\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    mov r2, #1\n    str r2, [r4, #8]\n    mov r0, #4\n    strh r0, [r4, #0xc]\n    add r0, r5, #0\n    mov r1, #3\n    bl ov43_0222AD40\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    nop\n    _0222D2F8: .word 0x000005DD"
    );
    #endif
}

void ov43_0222D2FC(void) {
    /* Original at 0x0222D2FC */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0222D3B0 ; =gSystem\n    add r4, r1, #0\n    ldr r1, [r0, #0x48]\n    ldr r0, _0222D3B4 ; =0x00000CF3\n    add r6, r2, #0\n    tst r0, r1\n    beq _0222D312\n    mov r0, #0\n    str r0, [r4]\n    ldr r1, _0222D3B0 ; =gSystem\n    mov r0, #3\n    ldr r2, [r1, #0x48]\n    tst r0, r2\n    beq _0222D32A\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #1\n    bl ov43_0222D24C\n    pop {r4, r5, r6, pc}\n    ldr r0, [r1, #0x4c]\n    mov r2, #0x20\n    add r1, r0, #0\n    tst r1, r2\n    bne _0222D340\n    ldrb r1, [r4, #0xe]\n    cmp r1, #0\n    beq _0222D358\n    lsl r2, r2, #4\n    tst r2, r0\n    beq _0222D358\n    mov r1, #0\n    add r0, r5, #0\n    mvn r1, r1\n    bl ov43_0222ED18\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #2\n    bl ov43_0222D24C\n    pop {r4, r5, r6, pc}\n    mov r2, #0x10\n    add r3, r0, #0\n    tst r3, r2\n    bne _0222D36A\n    cmp r1, #0\n    beq _0222D380\n    add r2, #0xf0\n    tst r0, r2\n    beq _0222D380\n    add r0, r5, #0\n    mov r1, #1\n    bl ov43_0222ED18\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #3\n    bl ov43_0222D24C\n    pop {r4, r5, r6, pc}\n    ldr r0, _0222D3B0 ; =gSystem\n    ldr r1, [r0, #0x44]\n    mov r0, #0x40\n    tst r0, r1\n    beq _0222D398\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #4\n    bl ov43_0222D24C\n    pop {r4, r5, r6, pc}\n    mov r0, #0x80\n    tst r0, r1\n    beq _0222D3AC\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #5\n    bl ov43_0222D24C\n    pop {r4, r5, r6, pc}\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    _0222D3B0: .word gSystem\n    _0222D3B4: .word 0x00000CF3"
    );
    #endif
}

void ov43_0222D3B8(void) {
    /* Original at 0x0222D3B8 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    add r7, r1, #0\n    add r6, r3, #0\n    str r2, [sp]\n    cmp r0, #0\n    beq _0222D3D0\n    ldr r0, _0222D474 ; =ov43_0222EE84\n    bl TouchscreenHitbox_FindHitboxAtTouchNew\n    b _0222D3D6\n    ldr r0, _0222D478 ; =ov43_0222EE42\n    bl TouchscreenHitbox_FindHitboxAtTouchNew\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0222D3E4\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #0\n    bne _0222D3FA\n    mov r0, #1\n    str r0, [r6]\n    ldr r2, [sp]\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r3, #4\n    bl ov43_0222D24C\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #1\n    bne _0222D410\n    mov r0, #1\n    str r0, [r6]\n    ldr r2, [sp]\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r3, #5\n    bl ov43_0222D24C\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r1, r4, #2\n    lsl r1, r1, #0x10\n    add r0, r5, #0\n    asr r1, r1, #0x10\n    bl ov43_0222D230\n    cmp r0, #0\n    beq _0222D434\n    sub r0, r4, #2\n    strh r0, [r5]\n    mov r3, #1\n    ldr r2, [sp]\n    add r0, r5, #0\n    add r1, r7, #0\n    str r3, [r6]\n    bl ov43_0222D24C\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    ldrsh r0, [r5, r0]\n    sub r1, r4, #2\n    sub r0, r1, r0\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    bne _0222D446\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    str r0, [r6]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov43_0222ED18\n    cmp r4, #0\n    blt _0222D464\n    ldr r2, [sp]\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r3, #3\n    bl ov43_0222D24C\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, [sp]\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r3, #2\n    bl ov43_0222D24C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222D474: .word ov43_0222EE84\n    _0222D478: .word ov43_0222EE42"
    );
    #endif
}

void ov43_0222D47C(void) {
    /* Original at 0x0222D47C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r1, #0\n    ldr r1, _0222D4C0 ; =gSystem\n    add r6, r2, #0\n    ldr r2, [r1, #0x44]\n    add r5, r0, #0\n    mov r0, #0\n    mov r1, #0xc0\n    str r0, [sp]\n    tst r1, r2\n    bne _0222D496\n    strh r0, [r5, #0xe]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    add r3, sp, #0\n    bl ov43_0222D3B8\n    ldr r1, [sp]\n    cmp r1, #0\n    beq _0222D4B0\n    mov r1, #1\n    add sp, #4\n    str r1, [r4]\n    pop {r3, r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov43_0222D2FC\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0222D4C0: .word gSystem"
    );
    #endif
}

void ov43_0222D4C4(void) {
    /* Original at 0x0222D4C4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r1, #0\n    add r5, r0, #0\n    add r4, r2, #0\n    mov r1, #0\n    str r1, [r5, #4]\n    add r0, r4, #0\n    add r6, r3, #0\n    bl ov43_0222AD20\n    ldr r0, [r5, #8]\n    cmp r0, #2\n    bne _0222D4E4\n    mov r3, #2\n    b _0222D4E6\n    mov r3, #1\n    mov r0, #0\n    ldrsh r0, [r5, r0]\n    add r1, r7, #0\n    add r2, r4, #0\n    str r0, [sp]\n    add r0, r5, #0\n    str r6, [sp, #4]\n    bl ov43_0222DAE8\n    ldr r0, _0222D504 ; =0x000005E1\n    bl PlaySE\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222D504: .word 0x000005E1"
    );
    #endif
}

void ov43_0222D508(void) {
    /* Original at 0x0222D508 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r7, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r0, #4\n    ble _0222D55C\n    mov r2, #0\n    ldr r0, [r4]\n    mov r1, #2\n    add r3, r2, #0\n    bl ScheduleSetBgPosText\n    mov r2, #0\n    ldr r0, [r4]\n    mov r1, #3\n    add r3, r2, #0\n    bl ScheduleSetBgPosText\n    mov r3, #0\n    ldrsh r0, [r5, r3]\n    add r1, r7, #0\n    add r2, r4, #0\n    str r0, [sp]\n    add r0, r5, #0\n    str r6, [sp, #4]\n    bl ov43_0222DAE8\n    add r0, r4, #0\n    mov r1, #1\n    bl ov43_0222AD20\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0xff\n    bl ov43_0222DB94\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r1, r0, #8\n    asr r0, r1, #1\n    lsr r0, r0, #0x1e\n    add r0, r1, r0\n    asr r3, r0, #2\n    ldr r0, [r5, #8]\n    cmp r0, #2\n    bne _0222D56E\n    neg r3, r3\n    ldr r0, [r4]\n    mov r1, #3\n    mov r2, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r5, #4]\n    add r0, r0, #1\n    str r0, [r5, #4]\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222D584(void) {
    /* Original at 0x0222D584 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r7, r0, #0\n    str r2, [sp, #8]\n    add r1, r2, #0\n    add r0, #0xf8\n    add r2, r3, #0\n    str r3, [sp, #0xc]\n    bl ov43_0222DD40\n    ldr r1, [sp, #8]\n    add r0, r7, #0\n    bl ov43_0222DDA0\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, _0222D600 ; =ov43_0222EDAC\n    add r7, #0x14\n    str r0, [sp, #0x14]\n    ldr r0, _0222D604 ; =ov43_0222EE08\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    ldr r3, [sp, #0x14]\n    str r0, [sp]\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #0x10]\n    ldr r3, [r3]\n    add r0, r7, #0\n    bl ov43_0222DDF0\n    ldr r4, _0222D608 ; =ov43_0222F10C\n    ldr r5, _0222D60C ; =ov43_0222F0D0\n    mov r6, #0\n    ldr r0, [r4]\n    ldr r1, [sp, #8]\n    str r0, [sp]\n    ldr r0, [sp, #0xc]\n    add r2, r6, #0\n    str r0, [sp, #4]\n    ldrb r3, [r5]\n    add r0, r7, #0\n    bl ov43_0222DE14\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #1\n    cmp r6, #8\n    blt _0222D5C6\n    ldr r0, [sp, #0x14]\n    add r7, #0x4c\n    add r0, r0, #4\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    add r0, r0, #6\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, #3\n    blt _0222D5AE\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _0222D600: .word ov43_0222EDAC\n    _0222D604: .word ov43_0222EE08\n    _0222D608: .word ov43_0222F10C\n    _0222D60C: .word ov43_0222F0D0"
    );
    #endif
}

void ov43_0222D610(void) {
    /* Original at 0x0222D610 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    mov r6, #0\n    add r5, r0, #0\n    str r0, [sp]\n    str r2, [sp, #4]\n    add r5, #0x14\n    add r7, r6, #0\n    add r4, r7, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov43_0222DED0\n    add r4, r4, #1\n    cmp r4, #8\n    blt _0222D622\n    add r0, r5, #0\n    bl ov43_0222DE10\n    add r6, r6, #1\n    add r5, #0x4c\n    cmp r6, #3\n    blt _0222D620\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    bl ov43_0222DDD0\n    ldr r0, [sp]\n    add r0, #0xf8\n    str r0, [sp]\n    bl ov43_0222DD88\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222D654(void) {
    /* Original at 0x0222D654 */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r1, #0\n    add r4, r2, #0\n    mov r2, #0xb\n    ldrsb r2, [r6, r2]\n    add r5, r0, #0\n    ldr r1, [r6, #4]\n    add r2, r6, r2\n    ldrb r2, [r2, #0x18]\n    add r0, r4, #0\n    add r7, r3, #0\n    bl ov43_0222AB20\n    mov r1, #0x4a\n    lsl r1, r1, #2\n    add r0, r4, #0\n    add r1, r5, r1\n    mov r2, #0xd\n    bl ov43_0222A9F4\n    mov r0, #0x45\n    lsl r0, r0, #2\n    ldr r2, [r5, r0]\n    mov r3, #0\n    str r3, [sp]\n    ldrh r0, [r2]\n    mov r1, #5\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldrh r0, [r2, #2]\n    add r2, #0xc\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    bl LoadRectToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #5\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    add r0, #0xfc\n    mov r1, #0\n    ldr r2, [r0]\n    add r3, r1, #0\n    str r1, [sp]\n    ldrh r0, [r2]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldrh r0, [r2, #2]\n    add r2, #0xc\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    bl LoadRectToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldr r2, [r5, r0]\n    mov r3, #0\n    str r3, [sp]\n    ldrh r0, [r2]\n    mov r1, #2\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldrh r0, [r2, #2]\n    add r2, #0xc\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    bl LoadRectToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl ov43_0222D8B8\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov43_0222AD98\n    mov r3, #0\n    ldrsh r0, [r5, r3]\n    add r1, r6, #0\n    add r2, r4, #0\n    str r0, [sp]\n    add r0, r5, #0\n    str r7, [sp, #4]\n    bl ov43_0222DAE8\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0xff\n    bl ov43_0222DB94\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xf4\n    mov r2, #0x18\n    bl Sprite_SetPositionXY\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov43_0222AD40\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xf4\n    mov r2, #0x88\n    bl Sprite_SetPositionXY\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0\n    bl ov43_0222AD40\n    add r0, r4, #0\n    mov r1, #1\n    bl ov43_0222AD00\n    mov r0, #2\n    mov r1, #0\n    bl SetBgPriority\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222D778(void) {
    /* Original at 0x0222D778 */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl ov43_0222AD00\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #8\n    mov r2, #0x62\n    bl Sprite_SetPositionXY\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov43_0222AD40\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0xf8\n    mov r2, #0x62\n    bl Sprite_SetPositionXY\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov43_0222AD40\n    add r4, r7, #0\n    mov r6, #0\n    add r4, #0x14\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov43_0222DF90\n    add r6, r6, #1\n    add r4, #0x4c\n    cmp r6, #3\n    blt _0222D7BE\n    add r0, r7, #0\n    add r1, r5, #0\n    bl ov43_0222DC7C\n    add r0, r7, #0\n    add r1, r5, #0\n    bl ov43_0222DB84\n    add r0, r7, #0\n    bl ov43_0222DACC\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r0, [r5]\n    mov r1, #5\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r0, [r5]\n    mov r1, #4\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r0, [r5]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r5]\n    mov r1, #5\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [r5]\n    mov r1, #4\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [r5]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0x43\n    lsl r0, r0, #2\n    mov r1, #0\n    ldr r2, [r7, r0]\n    add r3, r1, #0\n    str r1, [sp]\n    ldrh r0, [r2]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldrh r0, [r2, #2]\n    add r2, #0xc\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    bl LoadRectToBgTilemapRect\n    ldr r0, [r5]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    bl ov43_0222AA70\n    mov r0, #2\n    add r1, r0, #0\n    bl SetBgPriority\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222D87C(void) {
    /* Original at 0x0222D87C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r7, #0\n    add r6, r1, #0\n    mov r4, #0\n    add r5, #0x14\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov43_0222DF90\n    add r4, r4, #1\n    add r5, #0x4c\n    cmp r4, #3\n    blt _0222D888\n    mov r0, #0x46\n    lsl r0, r0, #2\n    mov r5, #0\n    add r4, r7, r0\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #5\n    ble _0222D8A0\n    add r0, r6, #0\n    bl ov43_0222AA70\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222D8B8(void) {
    /* Original at 0x0222D8B8 */
    /* Requires manual decompilation - 239 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r5, r1, #0\n    add r7, r0, #0\n    ldr r0, [r5, #4]\n    str r2, [sp, #0x18]\n    str r3, [sp, #0x1c]\n    bl sub_0202C6F4\n    mov r1, #0xb\n    ldrsb r1, [r5, r1]\n    mov r2, #8\n    str r0, [sp, #0x24]\n    add r1, r5, r1\n    ldrb r1, [r1, #0x18]\n    bl sub_0202C090\n    str r0, [sp, #0x20]\n    mov r0, #0x46\n    lsl r0, r0, #2\n    mov r6, #0\n    add r4, r7, r0\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, #8\n    blo _0222D8E4\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x18]\n    mov r3, #2\n    add r2, r5, r2\n    add r2, #0x38\n    ldrb r2, [r2]\n    ldr r0, [r0, #0x50]\n    add r2, r2, #1\n    bl BufferIntegerAsString\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    ldr r0, [sp, #0x18]\n    ldr r2, [r5, #0x14]\n    ldr r0, [r0, #0x50]\n    mov r3, #2\n    bl BufferIntegerAsString\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0222DAC0 ; =0x000F0200\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    mov r0, #0x46\n    lsl r0, r0, #2\n    add r0, r7, r0\n    add r1, r5, #0\n    mov r3, #0x12\n    bl ov43_0222ECD4\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    bne _0222D94A\n    ldr r4, _0222DAC4 ; =0x00050600\n    b _0222D956\n    cmp r0, #1\n    bne _0222D954\n    mov r4, #0xc1\n    lsl r4, r4, #0xa\n    b _0222D956\n    ldr r4, _0222DAC8 ; =0x00010200\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x18]\n    ldr r1, [r5, #4]\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    ldr r3, [sp, #0x1c]\n    bl ov43_0222AB20\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldr r2, [sp, #0x18]\n    add r0, r7, r0\n    add r1, r5, #0\n    mov r3, #0x11\n    str r4, [sp, #8]\n    bl ov43_0222ECD4\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0222DAC0 ; =0x000F0200\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    add r0, r7, r0\n    add r1, r5, #0\n    mov r3, #0xf\n    bl ov43_0222ECD4\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x18]\n    ldr r1, [r5, #4]\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    ldr r3, [sp, #0x1c]\n    bl ov43_0222AB5C\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0222DAC8 ; =0x00010200\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    mov r0, #0x52\n    lsl r0, r0, #2\n    add r0, r7, r0\n    add r1, r5, #0\n    mov r3, #0x10\n    bl ov43_0222ECD4\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0222DAC0 ; =0x000F0200\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    mov r0, #0x62\n    lsl r0, r0, #2\n    add r0, r7, r0\n    add r1, r5, #0\n    mov r3, #0x1b\n    bl ov43_0222ECD4\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x18]\n    ldr r1, [r5, #4]\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl ov43_0222AB94\n    cmp r0, #0\n    beq _0222DA0E\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0222DAC8 ; =0x00010200\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    mov r0, #0x56\n    lsl r0, r0, #2\n    add r0, r7, r0\n    add r1, r5, #0\n    mov r3, #0x1c\n    bl ov43_0222ECD4\n    mov r1, #0xb\n    ldrsb r1, [r5, r1]\n    ldr r0, [sp, #0x24]\n    mov r2, #7\n    add r1, r5, r1\n    ldrb r1, [r1, #0x18]\n    bl sub_0202C090\n    add r1, r0, #0\n    ldr r0, [sp, #0x20]\n    mov r2, #1\n    bl GetUnionRoomAvatarAttrBySprite\n    mov r1, #2\n    add r2, sp, #0x28\n    bl sub_02070D84\n    mov r1, #0x32\n    ldr r0, [sp, #0x1c]\n    lsl r1, r1, #6\n    bl Heap_Alloc\n    mov r3, #0\n    add r4, r0, #0\n    str r3, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldr r0, [sp, #0x28]\n    ldr r1, [sp, #0x3c]\n    ldr r2, [sp, #0x1c]\n    bl sub_020141C4\n    mov r0, #0x50\n    str r0, [sp]\n    mov r2, #0\n    str r0, [sp, #4]\n    str r2, [sp, #8]\n    str r2, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    add r0, r7, r0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl BlitBitmapRectToWindow\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0x20\n    str r0, [sp]\n    ldr r0, [sp, #0x1c]\n    mov r3, #0x1e\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    ldr r1, [sp, #0x30]\n    mov r2, #4\n    lsl r3, r3, #4\n    bl GfGfxLoader_GXLoadPal\n    mov r1, #4\n    mov r0, #0xa\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0xf\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x18]\n    add r2, r1, #0\n    ldr r0, [r0]\n    add r3, r1, #0\n    bl BgTilemapRectChangePalette\n    mov r0, #0x46\n    lsl r0, r0, #2\n    mov r4, #0\n    add r5, r7, r0\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #8\n    blo _0222DAAC\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222DAC0: .word 0x000F0200\n    _0222DAC4: .word 0x00050600\n    _0222DAC8: .word 0x00010200"
    );
    #endif
}

void ov43_0222DACC(void) {
    ClearWindowTilemapAndScheduleTransfer(0x46, 0);
}

void ov43_0222DAE8(void) {
    /* Original at 0x0222DAE8 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r7, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bne _0222DB00\n    ldr r2, [sp, #0x20]\n    add r1, r4, #0\n    strh r2, [r5]\n    bl ov43_0222DB28\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r5, r0\n    str r0, [sp]\n    ldr r0, [r5, #0x10]\n    add r5, #0x14\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    ldr r3, [sp, #0x20]\n    str r0, [sp, #8]\n    mov r0, #0x4c\n    mul r0, r6\n    add r0, r5, r0\n    add r1, r7, #0\n    add r2, r4, #0\n    bl ov43_0222DF4C\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222DB28(void) {
    /* Original at 0x0222DB28 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, [r0, #0x10]\n    add r5, r1, #0\n    cmp r0, #1\n    bne _0222DB4A\n    lsl r1, r2, #5\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    add r1, #0x10\n    lsl r1, r1, #0x10\n    ldr r0, [r5, r0]\n    asr r1, r1, #0x10\n    mov r2, #0xb0\n    mov r4, #2\n    bl Sprite_SetPositionXY\n    b _0222DB78\n    cmp r2, #2\n    bne _0222DB60\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0xf0\n    mov r2, #0xb0\n    mov r4, #2\n    bl Sprite_SetPositionXY\n    b _0222DB78\n    mov r1, #0x70\n    mul r1, r2\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    add r1, #0x38\n    lsl r1, r1, #0x10\n    ldr r0, [r5, r0]\n    asr r1, r1, #0x10\n    mov r2, #0xb0\n    mov r4, #1\n    bl Sprite_SetPositionXY\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    bl ov43_0222AD74\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov43_0222DB84(void) {
    /* Original at 0x0222DB84 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0222DB90 ; =ov43_0222AD74\n    add r0, r1, #0\n    mov r1, #0\n    mov r2, #0xff\n    bx r3\n    nop\n    _0222DB90: .word ov43_0222AD74"
    );
    #endif
}

void ov43_0222DB94(void) {
    /* Original at 0x0222DB94 */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x1c\n    add r6, r0, #0\n    ldr r0, [r6, #0x10]\n    add r5, r1, #0\n    add r4, r2, #0\n    cmp r0, #1\n    bne _0222DBDC\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x20\n    str r1, [sp]\n    mov r1, #4\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    mov r1, #0xc\n    str r1, [sp, #0x10]\n    ldrh r1, [r0]\n    mov r3, #0x14\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #2\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r5]\n    bl CopyToBgTilemapRect\n    b _0222DC10\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x20\n    str r1, [sp]\n    mov r1, #4\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    mov r3, #0x14\n    str r3, [sp, #0x10]\n    ldrh r1, [r0]\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #2\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r5]\n    bl CopyToBgTilemapRect\n    cmp r4, #0xff\n    bne _0222DC20\n    ldr r0, [r5]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0x83\n    ldr r1, [r6, #0x10]\n    lsl r0, r0, #2\n    ldr r3, [r5, r0]\n    ldr r2, _0222DC70 ; =ov43_0222EDB8\n    lsl r0, r1, #3\n    add r2, r2, r0\n    ldr r6, _0222DC74 ; =ov43_0222EDF8\n    ldrb r2, [r4, r2]\n    add r0, r6, r0\n    ldrb r0, [r4, r0]\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    add r0, r3, #0\n    add r0, #0xc\n    str r0, [sp, #8]\n    ldr r0, _0222DC78 ; =ov43_0222F0C4\n    str r2, [sp, #0xc]\n    ldrb r0, [r0, r1]\n    mov r1, #2\n    str r0, [sp, #0x10]\n    ldrh r0, [r3]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    ldrh r0, [r3, #2]\n    mov r3, #0x14\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r5]\n    bl CopyToBgTilemapRect\n    ldr r0, [r5]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}\n    _0222DC70: .word ov43_0222EDB8\n    _0222DC74: .word ov43_0222EDF8\n    _0222DC78: .word ov43_0222F0C4"
    );
    #endif
}

void ov43_0222DC7C(void) {
    /* Original at 0x0222DC7C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    mov r0, #0x83\n    add r4, r1, #0\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x20\n    str r1, [sp]\n    mov r1, #4\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    mov r1, #0x1c\n    str r1, [sp, #0x10]\n    ldrh r1, [r0]\n    mov r3, #0x14\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r1, #2\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r4]\n    bl CopyToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov43_0222DCC4(void) {
    /* Original at 0x0222DCC4 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r7, r1, #0\n    bl sub_0202C6F4\n    add r6, r0, #0\n    mov r0, #0xb\n    ldrsb r4, [r5, r0]\n    cmp r7, #0\n    bne _0222DD0A\n    ldr r1, [r5, #0x10]\n    mov r7, #0\n    sub r0, r1, #1\n    beq _0222DD3A\n    sub r4, r4, #1\n    bpl _0222DCE8\n    add r4, r4, r1\n    add r1, r5, r4\n    ldrb r1, [r1, #0x18]\n    add r0, r6, #0\n    mov r2, #8\n    bl sub_0202C090\n    cmp r0, #2\n    beq _0222DCFE\n    strb r4, [r5, #0xb]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r5, #0x10]\n    add r7, r7, #1\n    sub r0, r1, #1\n    cmp r7, r0\n    blo _0222DCE2\n    b _0222DD3A\n    ldr r1, [r5, #0x10]\n    mov r7, #0\n    sub r0, r1, #1\n    beq _0222DD3A\n    add r0, r4, #1\n    bl _u32_div_f\n    add r4, r1, #0\n    add r1, r5, r4\n    ldrb r1, [r1, #0x18]\n    add r0, r6, #0\n    mov r2, #8\n    bl sub_0202C090\n    cmp r0, #2\n    beq _0222DD30\n    strb r4, [r5, #0xb]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r5, #0x10]\n    add r7, r7, #1\n    sub r0, r1, #1\n    cmp r7, r0\n    blo _0222DD12\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222DD40(void) {
    /* Original at 0x0222DD40 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r1, #0\n    ldr r1, _0222DD84 ; =_0222ED5C\n    str r2, [sp, #4]\n    ldrh r2, [r1, #0x2e]\n    add r5, r0, #0\n    add r0, sp, #8\n    strh r2, [r0]\n    ldrh r2, [r1, #0x30]\n    add r4, sp, #8\n    mov r6, #0\n    strh r2, [r0, #2]\n    ldrh r2, [r1, #0x32]\n    ldrh r1, [r1, #0x34]\n    strh r2, [r0, #4]\n    strh r1, [r0, #6]\n    ldr r0, [sp, #4]\n    mov r2, #1\n    str r0, [sp]\n    ldrh r1, [r4]\n    ldr r0, [r7, #0x58]\n    add r3, r5, #4\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    str r0, [r5]\n    add r6, r6, #1\n    add r5, #8\n    add r4, r4, #2\n    cmp r6, #4\n    blt _0222DD62\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222DD84: .word _0222ED5C"
    );
    #endif
}

void ov43_0222DD88(void) {
    Heap_Free(0);
}

void ov43_0222DDA0(void) {
    /* Original at 0x0222DDA0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    mov r1, #0x46\n    lsl r1, r1, #2\n    ldr r4, _0222DDCC ; =ov43_0222EF20\n    mov r6, #0\n    add r5, r0, r1\n    ldr r0, [r7]\n    add r1, r5, #0\n    add r2, r4, #0\n    bl AddWindow\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r6, r6, #1\n    add r4, #8\n    add r5, #0x10\n    cmp r6, #8\n    blt _0222DDAE\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222DDCC: .word ov43_0222EF20"
    );
    #endif
}

void ov43_0222DDD0(void) {
    /* Original at 0x0222DDD0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x46\n    lsl r1, r1, #2\n    mov r4, #0\n    add r5, r0, r1\n    add r0, r5, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #8\n    blt _0222DDDA\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov43_0222DDF0(void) {
    /* Original at 0x0222DDF0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r1, [r2]\n    strh r1, [r0]\n    ldrh r1, [r2, #2]\n    strh r1, [r0, #2]\n    ldrh r1, [r2, #4]\n    mov r2, #0\n    strh r1, [r0, #4]\n    str r3, [r0, #8]\n    add r1, r2, #0\n    str r1, [r0, #0xc]\n    str r1, [r0, #0x2c]\n    add r2, r2, #1\n    add r0, r0, #4\n    cmp r2, #8\n    blt _0222DE02\n    bx lr"
    );
    #endif
}

void ov43_0222DE10(void) {
    /* Original at 0x0222DE10 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov43_0222DE14(void) {
    /* Original at 0x0222DE14 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    str r1, [sp, #0x18]\n    add r1, r3, #0\n    str r0, [sp, #0x14]\n    lsl r1, r1, #0x18\n    ldr r0, [sp, #0x44]\n    lsr r1, r1, #0x18\n    str r3, [sp, #0x1c]\n    lsl r4, r2, #2\n    bl AllocWindows\n    ldr r1, [sp, #0x14]\n    add r7, r1, r4\n    str r0, [r7, #0xc]\n    ldr r0, [sp, #0x1c]\n    str r0, [r7, #0x2c]\n    add r0, r1, #0\n    ldr r0, [r0, #8]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x20]\n    mov r0, #0\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0\n    bls _0222DECA\n    ldr r4, [sp, #0x24]\n    ldr r5, [sp, #0x40]\n    ldr r0, [r7, #0xc]\n    add r0, r0, r4\n    bl InitWindow\n    ldr r1, [sp, #0x14]\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    cmp r0, #0\n    bge _0222DE62\n    neg r0, r0\n    ldr r2, [sp, #0x14]\n    mov r1, #0\n    ldrsh r6, [r2, r1]\n    cmp r6, #0\n    bge _0222DE6E\n    neg r6, r6\n    ldrb r1, [r5, #1]\n    mov r2, #3\n    add r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldrb r0, [r5, #2]\n    str r0, [sp, #4]\n    ldrb r0, [r5, #3]\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x20]\n    str r0, [sp, #0x10]\n    ldrb r3, [r5]\n    ldr r0, [sp, #0x18]\n    ldr r1, [r7, #0xc]\n    add r3, r3, r6\n    lsl r3, r3, #0x18\n    ldr r0, [r0]\n    add r1, r1, r4\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r7, #0xc]\n    mov r1, #0\n    add r0, r0, r4\n    bl FillWindowPixelBuffer\n    ldrb r1, [r5, #2]\n    ldrb r0, [r5, #3]\n    add r4, #0x10\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp, #0x20]\n    add r5, r5, #4\n    add r0, r0, r2\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x24]\n    add r1, r0, #1\n    ldr r0, [sp, #0x1c]\n    str r1, [sp, #0x24]\n    cmp r1, r0\n    blo _0222DE4E\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222DED0(void) {
    /* Original at 0x0222DED0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    lsl r4, r1, #2\n    add r0, r5, r4\n    ldr r0, [r0, #0xc]\n    cmp r0, #0\n    beq _0222DEF4\n    add r6, r5, #0\n    add r6, #0x2c\n    ldr r1, [r6, r4]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl WindowArray_Delete\n    mov r1, #0\n    add r0, r5, r4\n    str r1, [r0, #0xc]\n    str r1, [r6, r4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov43_0222DEF8(void) {
    /* Original at 0x0222DEF8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    lsl r1, r1, #2\n    add r5, r0, r1\n    ldr r0, [r5, #0x2c]\n    mov r6, #0\n    cmp r0, #0\n    bls _0222DF1A\n    add r4, r6, #0\n    ldr r0, [r5, #0xc]\n    add r0, r0, r4\n    bl ScheduleWindowCopyToVram\n    ldr r0, [r5, #0x2c]\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, r0\n    blo _0222DF08\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov43_0222DF1C(void) {
    /* Original at 0x0222DF1C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    lsl r1, r1, #2\n    add r5, r0, r1\n    ldr r0, [r5, #0x2c]\n    mov r6, #0\n    cmp r0, #0\n    bls _0222DF4A\n    add r4, r6, #0\n    add r7, r6, #0\n    ldr r0, [r5, #0xc]\n    add r0, r0, r4\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, [r5, #0xc]\n    add r1, r7, #0\n    add r0, r0, r4\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x2c]\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, r0\n    blo _0222DF2E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222DF4C(void) {
    /* Original at 0x0222DF4C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r2, #0\n    add r7, r1, #0\n    add r1, r5, #0\n    add r6, r0, #0\n    add r4, r3, #0\n    bl ov43_0222DF90\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0\n    beq _0222DF74\n    add r2, r5, #0\n    lsl r5, r4, #2\n    ldr r4, _0222DF88 ; =ov43_0222F12C\n    ldr r3, [sp, #0x20]\n    ldr r4, [r4, r5]\n    add r0, r6, #0\n    add r1, r7, #0\n    blx r4\n    pop {r3, r4, r5, r6, r7, pc}\n    add r2, r5, #0\n    lsl r5, r4, #2\n    ldr r4, _0222DF8C ; =_0222F0E0\n    ldr r3, [sp, #0x20]\n    ldr r4, [r4, r5]\n    add r0, r6, #0\n    add r1, r7, #0\n    blx r4\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222DF88: .word ov43_0222F12C\n    _0222DF8C: .word _0222F0E0"
    );
    #endif
}

void ov43_0222DF90(void) {
    /* Original at 0x0222DF90 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov43_0222DF1C\n    add r4, r4, #1\n    cmp r4, #8\n    blt _0222DF98\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov43_0222EC14\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov43_0222DFB0(void) {
    /* Original at 0x0222DFB0 */
    /* Requires manual decompilation - 144 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r5, r1, #0\n    str r0, [sp, #0x20]\n    ldr r0, [r5, #4]\n    add r4, r2, #0\n    bl sub_0202C6F4\n    str r0, [sp, #0x28]\n    mov r1, #0\n    str r4, [sp]\n    mov r0, #0x13\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, _0222E0E4 ; =0x00010200\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #0x7c]\n    add r2, r1, #0\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    add r3, r5, #0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    str r1, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r6, #0\n    str r6, [sp, #0x24]\n    ldr r0, [sp, #0x24]\n    str r4, [sp]\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    add r0, r6, #0\n    add r0, #0x14\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, _0222E0E4 ; =0x00010200\n    str r7, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #0x7c]\n    mov r1, #0\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    mov r2, #2\n    str r0, [sp, #0x18]\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    add r3, r5, #0\n    bl ov43_0222EC58\n    mov r1, #0xb\n    ldrsb r1, [r5, r1]\n    ldr r0, [sp, #0x28]\n    add r2, r6, #1\n    add r1, r5, r1\n    ldrb r1, [r1, #0x18]\n    bl sub_0202C090\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x16\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, _0222E0E4 ; =0x00010200\n    str r7, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #0x7c]\n    mov r1, #0\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    mov r2, #2\n    str r0, [sp, #0x18]\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    add r3, r5, #0\n    bl ov43_0222EC58\n    ldr r0, [sp, #0x24]\n    add r6, r6, #1\n    add r0, #0x18\n    str r0, [sp, #0x24]\n    cmp r6, #2\n    blo _0222DFEE\n    str r4, [sp]\n    mov r0, #0x17\n    str r0, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    ldr r0, _0222E0E4 ; =0x00010200\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #0x7c]\n    mov r2, #1\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    add r3, r5, #0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    str r1, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r1, #0xb\n    ldrsb r1, [r5, r1]\n    ldr r0, [sp, #0x28]\n    mov r2, #3\n    add r1, r5, r1\n    ldrb r1, [r1, #0x18]\n    bl sub_0202C090\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    ldr r0, _0222E0E4 ; =0x00010200\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #0x7c]\n    add r4, #0x80\n    str r0, [sp, #0x14]\n    ldr r0, [r4]\n    mov r2, #3\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    add r3, r5, #0\n    str r1, [sp, #0x1c]\n    bl ov43_0222EC58\n    ldr r0, [sp, #0x20]\n    mov r1, #0\n    bl ov43_0222DEF8\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    _0222E0E4: .word 0x00010200"
    );
    #endif
}

void ov43_0222E0E8(void) {
    /* Original at 0x0222E0E8 */
    /* Requires manual decompilation - 143 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r1, #0\n    add r6, r0, #0\n    ldr r0, [r5, #4]\n    add r4, r2, #0\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    str r4, [sp]\n    mov r0, #0x1d\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    ldr r0, _0222E21C ; =0x00010200\n    str r2, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #0x7c]\n    mov r1, #2\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    add r3, r5, #0\n    str r0, [sp, #0x18]\n    add r0, r6, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    add r0, r7, #0\n    mov r1, #0x64\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    str r4, [sp]\n    add r0, #0x22\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r1, _0222E21C ; =0x00010200\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, [r4, #0x7c]\n    mov r2, #1\n    str r1, [sp, #0x14]\n    add r1, r4, #0\n    add r1, #0x80\n    ldr r1, [r1]\n    add r3, r5, #0\n    str r1, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    add r0, r6, #0\n    mov r1, #2\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    add r0, r7, #0\n    mov r1, #0x71\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x25\n    str r0, [sp, #4]\n    mov r0, #0x70\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, _0222E21C ; =0x00010200\n    mov r2, #1\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #0x7c]\n    mov r1, #2\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    add r3, r5, #0\n    str r0, [sp, #0x18]\n    str r2, [sp, #0x1c]\n    add r0, r6, #0\n    bl ov43_0222EC58\n    str r4, [sp]\n    mov r0, #0x24\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r1, #0x18\n    str r1, [sp, #0xc]\n    ldr r1, _0222E21C ; =0x00010200\n    mov r2, #1\n    str r1, [sp, #0x10]\n    ldr r1, [r4, #0x7c]\n    add r3, r5, #0\n    str r1, [sp, #0x14]\n    add r1, r4, #0\n    add r1, #0x80\n    ldr r1, [r1]\n    str r1, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    add r0, r6, #0\n    mov r1, #2\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    add r0, r7, #0\n    mov r1, #0x70\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x25\n    str r0, [sp, #4]\n    mov r0, #0x70\n    str r0, [sp, #8]\n    mov r0, #0x18\n    str r0, [sp, #0xc]\n    ldr r0, _0222E21C ; =0x00010200\n    mov r2, #1\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #0x7c]\n    add r4, #0x80\n    str r0, [sp, #0x14]\n    ldr r0, [r4]\n    mov r1, #2\n    str r0, [sp, #0x18]\n    add r0, r6, #0\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    add r0, r6, #0\n    mov r1, #2\n    bl ov43_0222DEF8\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222E21C: .word 0x00010200"
    );
    #endif
}

void ov43_0222E220(void) {
    /* Original at 0x0222E220 */
    /* Requires manual decompilation - 416 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r1, #0\n    str r0, [sp, #0x20]\n    ldr r0, [r5, #4]\n    add r6, r3, #0\n    add r4, r2, #0\n    bl Save_Frontier_GetStatic\n    str r0, [sp, #0x24]\n    mov r0, #0x80\n    add r1, r6, #0\n    bl String_New\n    add r7, r0, #0\n    mov r0, #0x80\n    add r1, r6, #0\n    bl String_New\n    add r6, r0, #0\n    str r4, [sp]\n    mov r0, #0x1e\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    ldr r0, _0222E5B0 ; =0x00010200\n    str r2, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    str r2, [sp, #0x1c]\n    mov r1, #3\n    add r3, r5, #0\n    bl ov43_0222EC58\n    str r4, [sp]\n    mov r0, #0x26\n    str r0, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    ldr r0, _0222E5B0 ; =0x00010200\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    str r1, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r1, #3\n    mov r2, #1\n    add r3, r5, #0\n    bl ov43_0222EC58\n    str r4, [sp]\n    mov r0, #0x28\n    str r0, [sp, #4]\n    mov r0, #0xd0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, _0222E5B0 ; =0x00010200\n    mov r1, #3\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    mov r0, #2\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r2, #1\n    add r3, r5, #0\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x66\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    cmp r0, #0\n    bne _0222E2C8\n    mov r0, #0x22\n    b _0222E2CA\n    mov r0, #0x23\n    str r4, [sp]\n    str r0, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    ldr r0, _0222E5B0 ; =0x00010200\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    str r1, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r1, #3\n    mov r2, #2\n    add r3, r5, #0\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x73\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x25\n    str r0, [sp, #4]\n    mov r0, #0x70\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, _0222E5B0 ; =0x00010200\n    mov r1, #3\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r2, #2\n    add r3, r5, #0\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x75\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x2b\n    str r0, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    ldr r0, _0222E5B0 ; =0x00010200\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    str r1, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r1, #3\n    mov r2, #2\n    add r3, r5, #0\n    bl ov43_0222EC58\n    str r4, [sp]\n    mov r0, #0x24\n    str r0, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, _0222E5B0 ; =0x00010200\n    mov r2, #2\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    str r1, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r1, #3\n    add r3, r5, #0\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x72\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x25\n    str r0, [sp, #4]\n    mov r0, #0x70\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, _0222E5B0 ; =0x00010200\n    mov r1, #3\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r2, #2\n    add r3, r5, #0\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x74\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x2b\n    str r0, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, _0222E5B0 ; =0x00010200\n    mov r2, #2\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    str r1, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r1, #3\n    add r3, r5, #0\n    bl ov43_0222EC58\n    str r4, [sp]\n    mov r0, #0x27\n    str r0, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    ldr r0, _0222E5B0 ; =0x00010200\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    str r1, [sp, #0x1c]\n    mov r1, #3\n    ldr r0, [sp, #0x20]\n    add r2, r1, #0\n    add r3, r5, #0\n    bl ov43_0222EC58\n    mov r1, #3\n    str r4, [sp]\n    mov r0, #0x28\n    str r0, [sp, #4]\n    mov r0, #0xd0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, _0222E5B0 ; =0x00010200\n    add r2, r1, #0\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    mov r0, #2\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    add r3, r5, #0\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x68\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    cmp r0, #0\n    bne _0222E460\n    mov r0, #0x22\n    b _0222E462\n    mov r0, #0x23\n    str r4, [sp]\n    str r0, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    ldr r0, _0222E5B0 ; =0x00010200\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    str r1, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r1, #3\n    mov r2, #4\n    add r3, r5, #0\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x77\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x25\n    str r0, [sp, #4]\n    mov r0, #0x70\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, _0222E5B0 ; =0x00010200\n    mov r1, #3\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r2, #4\n    add r3, r5, #0\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x79\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x2b\n    str r0, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    ldr r0, _0222E5B0 ; =0x00010200\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    str r1, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r1, #3\n    mov r2, #4\n    add r3, r5, #0\n    bl ov43_0222EC58\n    str r4, [sp]\n    mov r0, #0x24\n    str r0, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, _0222E5B0 ; =0x00010200\n    mov r2, #4\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    str r1, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r1, #3\n    add r3, r5, #0\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x76\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x25\n    str r0, [sp, #4]\n    mov r0, #0x70\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, _0222E5B0 ; =0x00010200\n    mov r1, #3\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r2, #4\n    add r3, r5, #0\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x78\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x2b\n    str r0, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, _0222E5B0 ; =0x00010200\n    mov r2, #4\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    str r1, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r1, #3\n    add r3, r5, #0\n    bl ov43_0222EC58\n    ldr r0, [sp, #0x20]\n    mov r1, #3\n    bl ov43_0222DEF8\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222E5B0: .word 0x00010200"
    );
    #endif
}

void ov43_0222E5B4(void) {
    /* Original at 0x0222E5B4 */
    /* Requires manual decompilation - 212 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r1, #0\n    str r0, [sp, #0x20]\n    ldr r0, [r5, #4]\n    add r6, r3, #0\n    add r4, r2, #0\n    bl Save_Frontier_GetStatic\n    str r0, [sp, #0x24]\n    mov r0, #0x80\n    add r1, r6, #0\n    bl String_New\n    add r7, r0, #0\n    mov r0, #0x80\n    add r1, r6, #0\n    bl String_New\n    add r6, r0, #0\n    str r4, [sp]\n    mov r0, #0x1f\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    ldr r0, _0222E788 ; =0x00010200\n    str r2, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    str r2, [sp, #0x1c]\n    mov r1, #4\n    add r3, r5, #0\n    bl ov43_0222EC58\n    str r4, [sp]\n    mov r0, #0x29\n    str r0, [sp, #4]\n    mov r0, #0x68\n    str r0, [sp, #8]\n    mov r0, #0x14\n    str r0, [sp, #0xc]\n    ldr r0, _0222E788 ; =0x00010200\n    mov r2, #0\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    mov r1, #4\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x6c\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    cmp r0, #0\n    bne _0222E638\n    mov r0, #0x22\n    b _0222E63A\n    mov r0, #0x23\n    str r4, [sp]\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    mov r0, #0x30\n    str r0, [sp, #0xc]\n    ldr r0, _0222E788 ; =0x00010200\n    mov r1, #4\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x87\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x2d\n    str r0, [sp, #4]\n    mov r0, #0x70\n    str r0, [sp, #8]\n    mov r0, #0x30\n    str r0, [sp, #0xc]\n    ldr r0, _0222E788 ; =0x00010200\n    mov r1, #4\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r2, #0\n    add r3, r5, #0\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x88\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x2c\n    str r0, [sp, #4]\n    mov r0, #0xa8\n    str r0, [sp, #8]\n    mov r0, #0x30\n    str r0, [sp, #0xc]\n    ldr r0, _0222E788 ; =0x00010200\n    mov r2, #0\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    str r2, [sp, #0x1c]\n    mov r1, #4\n    add r3, r5, #0\n    bl ov43_0222EC58\n    str r4, [sp]\n    mov r0, #0x24\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    mov r0, #0x48\n    str r0, [sp, #0xc]\n    ldr r0, _0222E788 ; =0x00010200\n    mov r1, #4\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x86\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x2d\n    str r0, [sp, #4]\n    mov r0, #0x70\n    str r0, [sp, #8]\n    mov r0, #0x48\n    str r0, [sp, #0xc]\n    ldr r0, _0222E788 ; =0x00010200\n    mov r1, #4\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r2, #0\n    add r3, r5, #0\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x8a\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x2c\n    str r0, [sp, #4]\n    mov r0, #0xa8\n    str r0, [sp, #8]\n    mov r0, #0x48\n    str r0, [sp, #0xc]\n    ldr r0, _0222E788 ; =0x00010200\n    mov r2, #0\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    mov r1, #4\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    ldr r0, [sp, #0x20]\n    mov r1, #4\n    bl ov43_0222DEF8\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222E788: .word 0x00010200"
    );
    #endif
}

void ov43_0222E78C(void) {
    /* Original at 0x0222E78C */
    /* Requires manual decompilation - 167 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r5, r1, #0\n    str r0, [sp, #0x20]\n    ldr r0, [r5, #4]\n    str r3, [sp, #0x24]\n    add r4, r2, #0\n    bl Save_Frontier_GetStatic\n    str r0, [sp, #0x28]\n    ldr r1, [sp, #0x24]\n    mov r0, #0x80\n    bl String_New\n    add r7, r0, #0\n    ldr r1, [sp, #0x24]\n    mov r0, #0x80\n    bl String_New\n    add r6, r0, #0\n    str r4, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    ldr r0, _0222E900 ; =0x00010200\n    str r2, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    mov r1, #5\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x28]\n    mov r1, #0x7c\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    ldr r1, [sp, #0x24]\n    bl GetSpeciesName\n    str r0, [sp, #0x2c]\n    mov r0, #0x18\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0222E900 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x20]\n    str r1, [sp, #0xc]\n    ldr r0, [r0, #0x20]\n    ldr r2, [sp, #0x2c]\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x2c]\n    bl String_Delete\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x28]\n    mov r1, #0x6a\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    cmp r0, #0\n    bne _0222E826\n    mov r0, #0x22\n    b _0222E828\n    mov r0, #0x23\n    str r4, [sp]\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    mov r0, #0x30\n    str r0, [sp, #0xc]\n    ldr r0, _0222E900 ; =0x00010200\n    mov r1, #5\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x28]\n    mov r1, #0x7b\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x25\n    str r0, [sp, #4]\n    mov r0, #0x70\n    str r0, [sp, #8]\n    mov r0, #0x30\n    str r0, [sp, #0xc]\n    ldr r0, _0222E900 ; =0x00010200\n    mov r1, #5\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r2, #0\n    add r3, r5, #0\n    bl ov43_0222EC58\n    str r4, [sp]\n    mov r0, #0x24\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    mov r0, #0x48\n    str r0, [sp, #0xc]\n    ldr r0, _0222E900 ; =0x00010200\n    mov r1, #5\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x28]\n    mov r1, #0x7a\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x25\n    str r0, [sp, #4]\n    mov r0, #0x70\n    str r0, [sp, #8]\n    mov r0, #0x48\n    str r0, [sp, #0xc]\n    ldr r0, _0222E900 ; =0x00010200\n    mov r1, #5\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r2, #0\n    add r3, r5, #0\n    bl ov43_0222EC58\n    ldr r0, [sp, #0x20]\n    mov r1, #5\n    bl ov43_0222DEF8\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222E900: .word 0x00010200"
    );
    #endif
}

void ov43_0222E904(void) {
    /* Original at 0x0222E904 */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r1, #0\n    str r0, [sp, #0x20]\n    ldr r0, [r5, #4]\n    add r6, r3, #0\n    add r4, r2, #0\n    bl Save_Frontier_GetStatic\n    str r0, [sp, #0x24]\n    mov r0, #0x80\n    add r1, r6, #0\n    bl String_New\n    add r7, r0, #0\n    mov r0, #0x80\n    add r1, r6, #0\n    bl String_New\n    add r6, r0, #0\n    str r4, [sp]\n    mov r0, #0x21\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    ldr r0, _0222EA3C ; =0x00010200\n    str r2, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    mov r1, #6\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x6e\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    cmp r0, #0\n    bne _0222E964\n    mov r0, #0x22\n    b _0222E966\n    mov r0, #0x23\n    str r4, [sp]\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    mov r0, #0x18\n    str r0, [sp, #0xc]\n    ldr r0, _0222EA3C ; =0x00010200\n    mov r1, #6\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x8f\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x2e\n    str r0, [sp, #4]\n    mov r0, #0x70\n    str r0, [sp, #8]\n    mov r0, #0x18\n    str r0, [sp, #0xc]\n    ldr r0, _0222EA3C ; =0x00010200\n    mov r1, #6\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r2, #0\n    add r3, r5, #0\n    bl ov43_0222EC58\n    str r4, [sp]\n    mov r0, #0x24\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    mov r0, #0x30\n    str r0, [sp, #0xc]\n    ldr r0, _0222EA3C ; =0x00010200\n    mov r1, #6\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r2, [r5, r2]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x8e\n    add r2, r5, r2\n    ldrb r2, [r2, #0x18]\n    bl FrontierSave_GetStat\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x2e\n    str r0, [sp, #4]\n    mov r0, #0x70\n    str r0, [sp, #8]\n    mov r0, #0x30\n    str r0, [sp, #0xc]\n    ldr r0, _0222EA3C ; =0x00010200\n    mov r1, #6\n    str r0, [sp, #0x10]\n    str r7, [sp, #0x14]\n    str r6, [sp, #0x18]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r2, #0\n    add r3, r5, #0\n    bl ov43_0222EC58\n    ldr r0, [sp, #0x20]\n    mov r1, #6\n    bl ov43_0222DEF8\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222EA3C: .word 0x00010200"
    );
    #endif
}

void ov43_0222EA40(void) {
    /* Original at 0x0222EA40 */
    /* Requires manual decompilation - 180 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r1, #0\n    str r0, [sp, #0x20]\n    ldr r0, [r5, #4]\n    add r4, r2, #0\n    add r7, r3, #0\n    bl Save_Frontier_GetStatic\n    ldr r0, [r5, #4]\n    bl sub_0202C6F4\n    str r0, [sp, #0x24]\n    mov r0, #0x80\n    add r1, r7, #0\n    bl String_New\n    add r6, r0, #0\n    mov r0, #0x80\n    add r1, r7, #0\n    bl String_New\n    add r7, r0, #0\n    str r4, [sp]\n    mov r0, #0x2f\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    ldr r0, _0222EBD4 ; =0x00010200\n    str r2, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r6, [sp, #0x14]\n    str r7, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    mov r1, #1\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    add r0, r4, #0\n    mov r1, #0\n    bl ov43_0222AC18\n    str r4, [sp]\n    mov r0, #0x30\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    mov r0, #0x18\n    str r0, [sp, #0xc]\n    ldr r0, _0222EBD4 ; =0x00010200\n    mov r1, #1\n    str r0, [sp, #0x10]\n    str r6, [sp, #0x14]\n    str r7, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r1, #0xb\n    ldrsb r1, [r5, r1]\n    ldr r0, [sp, #0x24]\n    mov r2, #0xa\n    add r1, r5, r1\n    ldrb r1, [r1, #0x18]\n    bl sub_0202C090\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x31\n    str r0, [sp, #4]\n    mov r0, #0x78\n    str r0, [sp, #8]\n    mov r0, #0x18\n    str r0, [sp, #0xc]\n    ldr r0, _0222EBD4 ; =0x00010200\n    mov r2, #0\n    str r0, [sp, #0x10]\n    str r6, [sp, #0x14]\n    str r7, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    mov r1, #1\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    add r0, r4, #0\n    mov r1, #1\n    bl ov43_0222AC18\n    str r4, [sp]\n    mov r0, #0x30\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, _0222EBD4 ; =0x00010200\n    mov r1, #1\n    str r0, [sp, #0x10]\n    str r6, [sp, #0x14]\n    str r7, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r2, #0xb\n    ldrsb r1, [r5, r2]\n    ldr r0, [sp, #0x24]\n    add r1, r5, r1\n    ldrb r1, [r1, #0x18]\n    bl sub_0202C090\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x31\n    str r0, [sp, #4]\n    mov r0, #0x78\n    str r0, [sp, #8]\n    mov r0, #0x30\n    str r0, [sp, #0xc]\n    ldr r0, _0222EBD4 ; =0x00010200\n    mov r2, #0\n    str r0, [sp, #0x10]\n    str r6, [sp, #0x14]\n    str r7, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    mov r1, #1\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    add r0, r4, #0\n    mov r1, #2\n    bl ov43_0222AC18\n    str r4, [sp]\n    mov r0, #0x30\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    mov r0, #0x48\n    str r0, [sp, #0xc]\n    ldr r0, _0222EBD4 ; =0x00010200\n    mov r1, #1\n    str r0, [sp, #0x10]\n    str r6, [sp, #0x14]\n    str r7, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    mov r1, #0xb\n    ldrsb r1, [r5, r1]\n    ldr r0, [sp, #0x24]\n    mov r2, #0xc\n    add r1, r5, r1\n    ldrb r1, [r1, #0x18]\n    bl sub_0202C090\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov43_0222ABFC\n    str r4, [sp]\n    mov r0, #0x31\n    str r0, [sp, #4]\n    mov r0, #0x78\n    str r0, [sp, #8]\n    mov r0, #0x48\n    str r0, [sp, #0xc]\n    ldr r0, _0222EBD4 ; =0x00010200\n    mov r2, #0\n    str r0, [sp, #0x10]\n    str r6, [sp, #0x14]\n    str r7, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    mov r1, #1\n    add r3, r5, #0\n    str r2, [sp, #0x1c]\n    bl ov43_0222EC58\n    ldr r0, [sp, #0x20]\n    mov r1, #1\n    bl ov43_0222DEF8\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r7, #0\n    bl String_Delete\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222EBD4: .word 0x00010200"
    );
    #endif
}

void ov43_0222EBD8(void) {
    /* Original at 0x0222EBD8 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x20\n    add r3, r1, #0\n    str r2, [sp]\n    mov r1, #0xe\n    str r1, [sp, #4]\n    mov r4, #0\n    str r4, [sp, #8]\n    ldr r1, _0222EC10 ; =0x00010200\n    str r4, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, [r2, #0x7c]\n    add r2, #0x80\n    str r1, [sp, #0x14]\n    ldr r1, [r2]\n    add r5, r0, #0\n    str r1, [sp, #0x18]\n    mov r1, #7\n    add r2, r4, #0\n    str r4, [sp, #0x1c]\n    bl ov43_0222EC58\n    add r0, r5, #0\n    mov r1, #7\n    bl ov43_0222DEF8\n    add sp, #0x20\n    pop {r3, r4, r5, pc}\n    _0222EC10: .word 0x00010200"
    );
    #endif
}

void ov43_0222EC14(void) {
    /* Original at 0x0222EC14 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #2\n    ldrsh r2, [r1, r0]\n    cmp r2, #0\n    bge _0222EC24\n    neg r2, r2\n    mov r0, #0\n    ldrsh r3, [r1, r0]\n    cmp r3, #0\n    bge _0222EC2E\n    neg r3, r3\n    lsl r0, r2, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    lsl r3, r3, #0x18\n    str r0, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    ldr r0, [r4]\n    mov r1, #3\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov43_0222EC58(void) {
    /* Original at 0x0222EC58 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    ldr r6, [sp, #0x30]\n    add r7, r0, #0\n    str r1, [sp, #0x10]\n    str r2, [sp, #0x14]\n    ldr r0, [r6, #0x54]\n    ldr r1, [sp, #0x34]\n    ldr r2, [sp, #0x48]\n    ldr r4, [sp, #0x44]\n    ldr r5, [sp, #0x38]\n    bl ReadMsgDataIntoString\n    ldr r0, [r6, #0x50]\n    ldr r2, [sp, #0x48]\n    add r1, r4, #0\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x4c]\n    cmp r0, #1\n    beq _0222EC88\n    cmp r0, #2\n    beq _0222EC9A\n    b _0222ECA6\n    mov r0, #1\n    add r1, r4, #0\n    mov r2, #0\n    bl FontID_String_GetWidth\n    add r0, r0, #1\n    lsr r0, r0, #1\n    sub r5, r5, r0\n    b _0222ECA6\n    mov r0, #1\n    add r1, r4, #0\n    mov r2, #0\n    bl FontID_String_GetWidth\n    sub r5, r5, r0\n    ldr r0, [sp, #0x3c]\n    add r2, r4, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x40]\n    add r3, r5, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    lsl r0, r0, #2\n    add r0, r7, r0\n    ldr r1, [r0, #0xc]\n    ldr r0, [sp, #0x14]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #1\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov43_0222ECD4(void) {
    /* Original at 0x0222ECD4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r2, #0\n    add r2, #0x80\n    add r5, r0, #0\n    ldr r0, [r4, #0x54]\n    ldr r2, [r2]\n    add r1, r3, #0\n    bl ReadMsgDataIntoString\n    add r2, r4, #0\n    add r2, #0x80\n    ldr r0, [r4, #0x50]\n    ldr r1, [r4, #0x7c]\n    ldr r2, [r2]\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x24]\n    ldr r3, [sp, #0x20]\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    mov r1, #1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x7c]\n    add r0, r5, #0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov43_0222ED18(void) {
    /* Original at 0x0222ED18 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    cmp r0, #1\n    bne _0222ED26\n    mov r2, #8\n    b _0222ED28\n    mov r2, #3\n    cmp r1, #0\n    ble _0222ED40\n    mov r0, #0\n    ldrsh r3, [r4, r0]\n    strh r3, [r4, #2]\n    ldrsh r0, [r4, r0]\n    add r0, r0, r1\n    add r1, r2, #0\n    bl _s32_div_f\n    strh r1, [r4]\n    pop {r4, pc}\n    bge _0222ED58\n    mov r0, #0\n    ldrsh r3, [r4, r0]\n    strh r3, [r4, #2]\n    ldrsh r3, [r4, r0]\n    add r1, r3, r1\n    strh r1, [r4]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bge _0222ED58\n    add r0, r0, r2\n    strh r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}
