/* Decompiled from asm/overlay_45_thumb.s */
#include "global.h"

void ov45_02229EE0(void) {
    /* Original at 0x02229EE0 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _02229F68 ; =FS_OVERLAY_ID(OVY_42)\n    mov r1, #2\n    bl HandleLoadOverlay\n    bl LoadDwcOverlay\n    bl LoadOVY38\n    mov r0, #3\n    bl sub_02039FD8\n    mov r2, #5\n    mov r0, #3\n    mov r1, #0x6f\n    lsl r2, r2, #0xc\n    bl Heap_Create\n    add r0, r4, #0\n    mov r1, #0x10\n    mov r2, #0x6f\n    bl OverlayManager_CreateAndGetData\n    add r5, r0, #0\n    add r2, r5, #0\n    mov r1, #0x10\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02229F18\n    add r0, r4, #0\n    bl OverlayManager_GetArgs\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    mov r1, #0x6f\n    str r0, [r5]\n    bl ov45_02229FF4\n    str r0, [r5, #4]\n    mov r0, #0x6f\n    str r0, [sp]\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #4]\n    ldr r2, [r4]\n    ldr r3, [r5, #4]\n    bl ov45_0222CD1C\n    str r0, [r5, #8]\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    ldr r0, _02229F6C ; =ov45_02229FE0\n    add r1, r5, #0\n    mov r2, #0\n    bl SysTask_CreateOnVWaitQueue\n    str r0, [r5, #0xc]\n    ldr r0, [r5, #8]\n    bl ov45_0222CD84\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _02229F68: .word FS_OVERLAY_ID(OVY_42)\n    _02229F6C: .word ov45_02229FE0"
    );
    #endif
}

void ov45_02229F70(void) {
    /* Original at 0x02229F70 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    bl OverlayManager_GetData\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    bl ov45_0222CD90\n    add r4, r0, #0\n    ldr r0, [r5, #4]\n    bl ov45_0222A15C\n    cmp r4, #1\n    bne _02229F8E\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_02229F94(void) {
    /* Original at 0x02229F94 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    bl SysTask_Destroy\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    ldr r0, [r4, #8]\n    bl ov45_0222CD68\n    ldr r0, [r4, #4]\n    bl ov45_0222A0F0\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0x6f\n    bl Heap_Destroy\n    ldr r0, _02229FDC ; =FS_OVERLAY_ID(OVY_42)\n    bl UnloadOverlayByID\n    bl UnloadOVY38\n    bl UnloadDwcOverlay\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _02229FDC: .word FS_OVERLAY_ID(OVY_42)"
    );
    #endif
}

void ov45_02229FE0(void) {
    /* Original at 0x02229FE0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #8]\n    bl ov45_0222CDC0\n    ldr r0, [r4, #4]\n    bl ov45_0222A1F8\n    pop {r4, pc}"
    );
    #endif
}

void ov45_02229FF4(void) {
    /* Original at 0x02229FF4 */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r7, r1, #0\n    mov r1, #0x53\n    add r5, r0, #0\n    add r0, r7, #0\n    lsl r1, r1, #4\n    bl Heap_Alloc\n    mov r2, #0x53\n    mov r1, #0\n    lsl r2, r2, #4\n    add r4, r0, #0\n    bl memset\n    ldr r0, _0222A0CC ; =0x00000528\n    str r5, [r4]\n    str r7, [r4, r0]\n    ldr r0, _0222A0D0 ; =ov45_0222B2B4\n    mov r2, #0x94\n    str r0, [sp, #4]\n    ldr r0, _0222A0D4 ; =ov45_0222B470\n    add r3, sp, #4\n    str r0, [sp, #8]\n    ldr r0, _0222A0D8 ; =ov45_0222B530\n    str r0, [sp, #0xc]\n    ldr r0, _0222A0DC ; =ov45_0222B5A0\n    str r0, [sp, #0x10]\n    ldr r0, _0222A0E0 ; =ov45_0222B75C\n    str r0, [sp, #0x14]\n    str r4, [sp]\n    ldr r1, [r4]\n    add r0, r7, #0\n    bl ov45_0222E5D4\n    add r0, r7, #0\n    bl ov45_0222D860\n    str r0, [r4, #4]\n    mov r6, #0\n    add r5, r4, #0\n    add r0, r7, #0\n    bl PlayerProfile_New\n    add r1, r5, #0\n    add r1, #0xe8\n    add r6, r6, #1\n    add r5, r5, #4\n    str r0, [r1]\n    cmp r6, #4\n    blt _0222A046\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r1, [r4]\n    add r0, r4, r0\n    add r2, r7, #0\n    bl ov45_0222B8A0\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl ov45_0222BD40\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov45_0222BD30\n    ldr r0, _0222A0E4 ; =ov45_02254AC4\n    mov r1, #8\n    add r2, r4, #0\n    bl ov45_0222EE20\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov45_0222BC3C\n    mov r0, #0x83\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov45_0222C388\n    mov r0, #0xeb\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov45_0222C8AC\n    mov r0, #0xf9\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, r7, #0\n    bl ov45_0222C978\n    ldr r0, _0222A0E8 ; =0x000004BC\n    ldr r1, [r4]\n    add r0, r4, r0\n    bl ov45_0222CB44\n    ldr r0, _0222A0EC ; =0x00000508\n    add r1, r7, #0\n    add r0, r4, r0\n    bl ov45_0222BCC8\n    add r0, r4, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222A0CC: .word 0x00000528\n    _0222A0D0: .word ov45_0222B2B4\n    _0222A0D4: .word ov45_0222B470\n    _0222A0D8: .word ov45_0222B530\n    _0222A0DC: .word ov45_0222B5A0\n    _0222A0E0: .word ov45_0222B75C\n    _0222A0E4: .word ov45_02254AC4\n    _0222A0E8: .word 0x000004BC\n    _0222A0EC: .word 0x00000508"
    );
    #endif
}

void ov45_0222A0F0(void) {
    /* Original at 0x0222A0F0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r6, r0, #0\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    add r0, r6, r0\n    add r1, sp, #0\n    bl ov45_0222AB0C\n    ldr r0, [r6]\n    bl sub_020318E8\n    ldr r1, [sp]\n    add r4, r0, #0\n    bl sub_020318FC\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl sub_02031900\n    ldr r0, _0222A158 ; =0x00000508\n    add r0, r6, r0\n    bl ov45_0222BCD8\n    mov r0, #0xf9\n    lsl r0, r0, #2\n    add r0, r6, r0\n    bl ov45_0222C994\n    bl ov45_0222EE80\n    ldr r0, [r6, #4]\n    bl ov45_0222D890\n    mov r4, #0\n    add r5, r6, #0\n    add r0, r5, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    bl Heap_Free\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0222A138\n    bl ov45_0222E688\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0222A158: .word 0x00000508"
    );
    #endif
}

void ov45_0222A15C(void) {
    /* Original at 0x0222A15C */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl ov45_0222D8A4\n    add r0, sp, #0\n    bl ov45_0222ECB8\n    add r1, sp, #0\n    add r0, r1, #0\n    ldmia r0!, {r2, r3}\n    add r0, r4, #0\n    add r0, #0xd8\n    stmia r0!, {r2, r3}\n    add r0, r4, #0\n    add r0, #0xd4\n    bl ov45_0222D500\n    add r0, r4, #0\n    bl ov45_0222B840\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl ov45_0222BE5C\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov45_0222BD30\n    add r0, r4, #0\n    add r0, #0xf8\n    bl ov45_0222BB58\n    mov r2, #0x7f\n    lsl r2, r2, #2\n    ldr r3, _0222A1EC ; =0x0000049C\n    add r0, r4, r2\n    add r1, r4, #0\n    add r2, #0x10\n    add r1, #0xf8\n    add r2, r4, r2\n    add r3, r4, r3\n    bl ov45_0222BB60\n    mov r0, #0x3a\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ov45_0222BCB8\n    mov r0, #0x83\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov45_0222C3B0\n    ldr r0, _0222A1EC ; =0x0000049C\n    add r0, r4, r0\n    bl ov45_0222CAA0\n    ldr r0, _0222A1F0 ; =0x000004BC\n    add r0, r4, r0\n    bl ov45_0222CCDC\n    cmp r0, #1\n    bne _0222A1E8\n    ldr r0, _0222A1F4 ; =0x0000052C\n    mov r1, #1\n    str r1, [r4, r0]\n    add sp, #8\n    pop {r4, pc}\n    _0222A1EC: .word 0x0000049C\n    _0222A1F0: .word 0x000004BC\n    _0222A1F4: .word 0x0000052C"
    );
    #endif
}

void ov45_0222A1F8(void) {
    /* Original at 0x0222A1F8 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov45_0222A1FC(void) {
    /* Original at 0x0222A1FC */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222A204 ; =0x0000052C\n    ldr r0, [r0, r1]\n    bx lr\n    nop\n    _0222A204: .word 0x0000052C"
    );
    #endif
}

void ov45_0222A208(void) {
    ov45_0222E9BC();
}

void ov45_0222A210(void) {
    /* Original at 0x0222A210 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    bx lr"
    );
    #endif
}

void ov45_0222A214(void) {
    ov45_0222B79C(0x42);
}

void ov45_0222A22C(void) {
    /* Original at 0x0222A22C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xd4\n    bx lr"
    );
    #endif
}

void ov45_0222A230(void) {
    /* Original at 0x0222A230 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r2, #1\n    add r3, r2, #0\n    lsl r3, r1\n    add r1, r0, #0\n    add r1, #0xf8\n    ldr r1, [r1]\n    tst r1, r3\n    beq _0222A256\n    add r1, r0, #0\n    add r1, #0xf8\n    ldr r4, [r1]\n    mvn r1, r3\n    and r1, r4\n    add r0, #0xf8\n    str r1, [r0]\n    add r0, r2, #0\n    pop {r3, r4}\n    bx lr\n    mov r0, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov45_0222A25C(void) {
    /* Original at 0x0222A25C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r2, #1\n    add r3, r2, #0\n    lsl r3, r1\n    add r1, r0, #0\n    add r1, #0xfc\n    ldr r1, [r1]\n    tst r1, r3\n    beq _0222A282\n    add r1, r0, #0\n    add r1, #0xfc\n    ldr r4, [r1]\n    mvn r1, r3\n    and r1, r4\n    add r0, #0xfc\n    str r1, [r0]\n    add r0, r2, #0\n    pop {r3, r4}\n    bx lr\n    mov r0, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov45_0222A288(void) {
    /* Original at 0x0222A288 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #1\n    lsl r2, r2, #8\n    ldr r3, [r0, r2]\n    mov r0, #1\n    add r2, r0, #0\n    lsl r2, r1\n    add r1, r3, #0\n    tst r1, r2\n    bne _0222A29C\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov45_0222A2A0(void) {
    /* Original at 0x0222A2A0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r4, #1\n    add r5, r4, #0\n    lsl r5, r1\n    mov r1, #0x41\n    lsl r1, r1, #2\n    ldr r3, [r0, r1]\n    add r2, r3, #0\n    tst r2, r5\n    beq _0222A2C0\n    mvn r2, r5\n    and r2, r3\n    str r2, [r0, r1]\n    add r0, r4, #0\n    pop {r4, r5}\n    bx lr\n    mov r0, #0\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov45_0222A2C8(void) {
    /* Original at 0x0222A2C8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov45_0222A2CC(void) {
    /* Original at 0x0222A2CC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    bne _0222A2D6\n    bl GF_AssertFail\n    mov r0, #4\n    bl ov45_0222ECDC\n    pop {r3, pc}"
    );
    #endif
}

void ov45_0222A2E0(void) {
    GF_AssertFail();
}

void ov45_0222A2F8(void) {
    GF_AssertFail();
}

void ov45_0222A310(void) {
    /* Original at 0x0222A310 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0222A320 ; =0x0000020B\n    mov r1, #0xf0\n    ldrb r3, [r0, r2]\n    bic r3, r1\n    mov r1, #0x10\n    orr r1, r3\n    strb r1, [r0, r2]\n    bx lr\n    _0222A320: .word 0x0000020B"
    );
    #endif
}

void ov45_0222A324(void) {
    /* Original at 0x0222A324 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x7f\n    lsl r1, r1, #2\n    ldrb r0, [r0, r1]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    bx lr"
    );
    #endif
}

void ov45_0222A330(void) {
    /* Original at 0x0222A330 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x7f\n    lsl r1, r1, #2\n    ldrb r0, [r0, r1]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bx lr"
    );
    #endif
}

void ov45_0222A33C(void) {
    /* Original at 0x0222A33C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x7f\n    lsl r1, r1, #2\n    ldrb r2, [r0, r1]\n    lsl r2, r2, #0x1e\n    lsr r2, r2, #0x1f\n    cmp r2, #1\n    bne _0222A356\n    add r1, r1, #4\n    ldrsh r0, [r0, r1]\n    cmp r0, #0\n    bgt _0222A356\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov45_0222A35C(void) {
    /* Original at 0x0222A35C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x81\n    lsl r1, r1, #2\n    ldrsh r2, [r0, r1]\n    cmp r2, #0\n    bgt _0222A370\n    sub r1, #8\n    ldrb r0, [r0, r1]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1e\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov45_0222A374(void) {
    /* Original at 0x0222A374 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x7f\n    lsl r1, r1, #2\n    ldrb r2, [r0, r1]\n    lsl r2, r2, #0x1b\n    lsr r2, r2, #0x1f\n    cmp r2, #1\n    bne _0222A38E\n    add r1, #0xa\n    ldrsh r0, [r0, r1]\n    cmp r0, #0\n    bgt _0222A38E\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov45_0222A394(void) {
    /* Original at 0x0222A394 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x7f\n    lsl r1, r1, #2\n    ldrb r0, [r0, r1]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1e\n    bx lr"
    );
    #endif
}

void ov45_0222A3A0(void) {
    /* Original at 0x0222A3A0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #8]\n    cmp r1, #1\n    bne _0222A3B2\n    ldr r1, _0222A3B8 ; =0x00000202\n    ldrsh r0, [r0, r1]\n    cmp r0, #0\n    bgt _0222A3B2\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _0222A3B8: .word 0x00000202"
    );
    #endif
}

void ov45_0222A3BC(void) {
    /* Original at 0x0222A3BC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222A3D0 ; =0x00000202\n    ldrsh r2, [r0, r1]\n    cmp r2, #0\n    bgt _0222A3CA\n    sub r1, r1, #5\n    ldrb r0, [r0, r1]\n    bx lr\n    mov r0, #1\n    bx lr\n    nop\n    _0222A3D0: .word 0x00000202"
    );
    #endif
}

void ov45_0222A3D4(void) {
    /* Original at 0x0222A3D4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222A3E8 ; =0x00000202\n    ldrsh r2, [r0, r1]\n    cmp r2, #0\n    bgt _0222A3E2\n    sub r1, r1, #4\n    ldrb r0, [r0, r1]\n    bx lr\n    mov r0, #7\n    bx lr\n    nop\n    _0222A3E8: .word 0x00000202"
    );
    #endif
}

void ov45_0222A3EC(void) {
    /* Original at 0x0222A3EC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222A400 ; =0x00000202\n    ldrsh r2, [r0, r1]\n    cmp r2, #0\n    bgt _0222A3FA\n    sub r1, r1, #3\n    ldrb r0, [r0, r1]\n    bx lr\n    mov r0, #0xb\n    bx lr\n    nop\n    _0222A400: .word 0x00000202"
    );
    #endif
}

void ov45_0222A404(void) {
    /* Original at 0x0222A404 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x3a\n    lsl r1, r1, #4\n    ldr r3, _0222A410 ; =ov45_0222BCA0\n    add r0, r0, r1\n    bx r3\n    nop\n    _0222A410: .word ov45_0222BCA0"
    );
    #endif
}

void ov45_0222A414(void) {
    /* Original at 0x0222A414 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x3a\n    lsl r1, r1, #4\n    ldr r3, _0222A420 ; =ov45_0222BCA8\n    add r0, r0, r1\n    bx r3\n    nop\n    _0222A420: .word ov45_0222BCA8"
    );
    #endif
}

void ov45_0222A424(void) {
    /* Original at 0x0222A424 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222A42C ; =0x0000050C\n    ldr r0, [r0, r1]\n    bx lr\n    nop\n    _0222A42C: .word 0x0000050C"
    );
    #endif
}

void ov45_0222A430(void) {
    /* Original at 0x0222A430 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0222A438 ; =0x0000050C\n    str r1, [r0, r2]\n    bx lr\n    nop\n    _0222A438: .word 0x0000050C"
    );
    #endif
}

void ov45_0222A43C(void) {
    /* Original at 0x0222A43C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x3e\n    add r2, r0, #0\n    lsl r1, r1, #4\n    add r1, r2, r1\n    ldr r3, _0222A44C ; =MIi_CpuClear32\n    mov r0, #0\n    mov r2, #4\n    bx r3\n    _0222A44C: .word MIi_CpuClear32"
    );
    #endif
}

void ov45_0222A450(void) {
    /* Original at 0x0222A450 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    cmp r4, #4\n    blo _0222A460\n    bl GF_AssertFail\n    add r0, r6, #0\n    bl ov45_0222EC68\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    bne _0222A474\n    bl GF_AssertFail\n    mov r0, #0x3e\n    add r1, r5, r4\n    lsl r0, r0, #4\n    strb r6, [r1, r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222A480(void) {
    ov45_0222E9E0();
    ov45_0222A450(r5, r0, r4);
}

void ov45_0222A498(void) {
    /* Original at 0x0222A498 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x3e\n    lsl r2, r2, #4\n    add r0, r0, r2\n    ldr r3, _0222A4A4 ; =MI_CpuCopy8\n    mov r2, #4\n    bx r3\n    _0222A4A4: .word MI_CpuCopy8"
    );
    #endif
}

void ov45_0222A4A8(void) {
    /* Original at 0x0222A4A8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x3a\n    lsl r1, r1, #4\n    ldr r3, _0222A4B4 ; =ov45_0222BD24\n    add r0, r0, r1\n    bx r3\n    nop\n    _0222A4B4: .word ov45_0222BD24"
    );
    #endif
}

void ov45_0222A4B8(void) {
    /* Original at 0x0222A4B8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x3a\n    lsl r1, r1, #4\n    ldr r3, _0222A4C4 ; =ov45_0222BD2C\n    add r0, r0, r1\n    bx r3\n    nop\n    _0222A4C4: .word ov45_0222BD2C"
    );
    #endif
}

void ov45_0222A4C8(void) {
    /* Original at 0x0222A4C8 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x82\n    lsl r2, r2, #2\n    strb r1, [r0, r2]\n    bx lr"
    );
    #endif
}

void ov45_0222A4D0(void) {
    /* Original at 0x0222A4D0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    ldrb r1, [r4, r0]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1f\n    cmp r1, #1\n    bne _0222A500\n    add r0, #0xa\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bgt _0222A500\n    ldr r1, _0222A518 ; =0x00000481\n    mov r0, #0x15\n    mov r2, #0\n    bl Sound_SetSceneAndPlayBGM\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov45_0222BC84\n    pop {r4, pc}\n    ldr r1, _0222A51C ; =0x0000047F\n    mov r0, #0x15\n    mov r2, #0\n    bl Sound_SetSceneAndPlayBGM\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov45_0222BC84\n    pop {r4, pc}\n    nop\n    _0222A518: .word 0x00000481\n    _0222A51C: .word 0x0000047F"
    );
    #endif
}

void ov45_0222A520(void) {
    ov45_0222BC84();
}

void ov45_0222A53C(void) {
    ov45_0222E9E0();
    ov45_0222EC68();
}

void ov45_0222A548(void) {
    ov45_0222E9E0();
}

void ov45_0222A550(void) {
    ov45_0222EC10(0, 0, 1);
}

void ov45_0222A578(void) {
    /* Original at 0x0222A578 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r4, r0, #0\n    cmp r5, #0x14\n    blo _0222A588\n    bl GF_AssertFail\n    add r0, sp, #0\n    bl ov45_0222EC10\n    ldr r1, [sp, #4]\n    lsl r0, r5, #2\n    ldr r5, [r1, r0]\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _0222A5A2\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    bl ov45_0222E9E0\n    cmp r5, r0\n    bne _0222A5B4\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    add sp, #8\n    add r0, r4, r0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov45_0222EA2C\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222A5C0(void) {
    /* Original at 0x0222A5C0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r1, [r4]\n    add r0, r4, r0\n    bl ov45_0222BADC\n    cmp r0, #0\n    bne _0222A5DA\n    ldr r0, _0222A5E4 ; =0x0000052C\n    mov r1, #1\n    str r1, [r4, r0]\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    add r0, r4, r0\n    pop {r4, pc}\n    nop\n    _0222A5E4: .word 0x0000052C"
    );
    #endif
}

void ov45_0222A5E8(void) {
    /* Original at 0x0222A5E8 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    cmp r5, #0xf\n    blt _0222A5F6\n    bl GF_AssertFail\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r1, [r4]\n    add r0, r4, r0\n    bl ov45_0222BADC\n    cmp r0, #0\n    bne _0222A60E\n    ldr r0, _0222A6F8 ; =0x0000052C\n    mov r1, #1\n    str r1, [r4, r0]\n    pop {r3, r4, r5, pc}\n    ldr r0, _0222A6FC ; =0x0000016B\n    ldrb r0, [r4, r0]\n    cmp r0, r5\n    beq _0222A6F6\n    cmp r5, #9\n    beq _0222A64E\n    add r0, r4, #0\n    bl ov45_0222AFF8\n    cmp r0, #1\n    bne _0222A64E\n    add r0, r4, #0\n    bl ov45_0222B00C\n    cmp r0, #0\n    bne _0222A644\n    mov r0, #0x71\n    lsl r0, r0, #2\n    ldrh r0, [r4, r0]\n    bl ov45_0222EC90\n    mov r1, #0x71\n    lsl r1, r1, #2\n    ldrh r1, [r4, r1]\n    add r0, r4, #0\n    bl ov45_0222BE28\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl ov45_0222BD5C\n    ldr r0, _0222A6FC ; =0x0000016B\n    ldrb r0, [r4, r0]\n    cmp r0, #8\n    bhi _0222A6E2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222A662: ; jump table\n    ldr r0, _0222A700 ; =0x000004BC\n    mov r1, #0x10\n    add r2, r1, #0\n    add r0, r4, r0\n    sub r2, #0x11\n    bl ov45_0222CB74\n    b _0222A6E2\n    ldr r0, _0222A700 ; =0x000004BC\n    mov r1, #0x11\n    add r2, r1, #0\n    add r0, r4, r0\n    sub r2, #0x12\n    bl ov45_0222CB74\n    b _0222A6E2\n    ldr r0, _0222A700 ; =0x000004BC\n    mov r1, #0x12\n    add r2, r1, #0\n    add r0, r4, r0\n    sub r2, #0x13\n    bl ov45_0222CB74\n    b _0222A6E2\n    ldr r0, _0222A700 ; =0x000004BC\n    mov r1, #0x13\n    add r2, r1, #0\n    add r0, r4, r0\n    sub r2, #0x14\n    bl ov45_0222CB74\n    b _0222A6E2\n    ldr r0, _0222A700 ; =0x000004BC\n    mov r1, #0x14\n    add r2, r1, #0\n    add r0, r4, r0\n    sub r2, #0x15\n    bl ov45_0222CB74\n    b _0222A6E2\n    ldr r0, _0222A700 ; =0x000004BC\n    mov r1, #0x15\n    add r2, r1, #0\n    add r0, r4, r0\n    sub r2, #0x16\n    bl ov45_0222CB74\n    b _0222A6E2\n    ldr r0, _0222A700 ; =0x000004BC\n    mov r1, #0x16\n    add r2, r1, #0\n    add r0, r4, r0\n    sub r2, #0x17\n    bl ov45_0222CB74\n    ldr r0, _0222A6FC ; =0x0000016B\n    strb r5, [r4, r0]\n    sub r0, #0x63\n    ldr r1, [r4]\n    add r0, r4, r0\n    bl ov45_0222BAC4\n    add r0, r4, #0\n    bl ov45_0222BA3C\n    pop {r3, r4, r5, pc}\n    _0222A6F8: .word 0x0000052C\n    _0222A6FC: .word 0x0000016B\n    _0222A700: .word 0x000004BC"
    );
    #endif
}

void ov45_0222A704(void) {
    /* Original at 0x0222A704 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0x18\n    blt _0222A714\n    bl GF_AssertFail\n    ldr r0, _0222A728 ; =0x000004BC\n    add r1, r4, #0\n    add r0, r5, r0\n    add r2, r6, #0\n    bl ov45_0222CB74\n    add r0, r5, #0\n    bl ov45_0222BA3C\n    pop {r4, r5, r6, pc}\n    _0222A728: .word 0x000004BC"
    );
    #endif
}

void ov45_0222A72C(void) {
    /* Original at 0x0222A72C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x1b\n    blo _0222A73A\n    bl GF_AssertFail\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r1, [r5]\n    add r0, r5, r0\n    bl ov45_0222BADC\n    cmp r0, #0\n    bne _0222A752\n    ldr r0, _0222A768 ; =0x0000052C\n    mov r1, #1\n    str r1, [r5, r0]\n    pop {r3, r4, r5, pc}\n    ldr r0, _0222A76C ; =0x00000169\n    strb r4, [r5, r0]\n    sub r0, #0x61\n    ldr r1, [r5]\n    add r0, r5, r0\n    bl ov45_0222BAC4\n    add r0, r5, #0\n    bl ov45_0222BA3C\n    pop {r3, r4, r5, pc}\n    _0222A768: .word 0x0000052C\n    _0222A76C: .word 0x00000169"
    );
    #endif
}

void ov45_0222A770(void) {
    /* Original at 0x0222A770 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0x12\n    blt _0222A780\n    bl GF_AssertFail\n    cmp r6, #0x12\n    blt _0222A788\n    bl GF_AssertFail\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r1, [r5]\n    add r0, r5, r0\n    bl ov45_0222BADC\n    cmp r0, #0\n    bne _0222A7A0\n    ldr r0, _0222A7D8 ; =0x0000052C\n    mov r1, #1\n    str r1, [r5, r0]\n    pop {r4, r5, r6, pc}\n    cmp r4, #0x12\n    bge _0222A7D6\n    cmp r6, #0x12\n    bge _0222A7D6\n    cmp r4, #0\n    bne _0222A7BA\n    mov r0, #0x1b\n    lsl r0, r0, #4\n    strh r6, [r5, r0]\n    mov r1, #0\n    add r0, r0, #2\n    strh r1, [r5, r0]\n    b _0222A7C4\n    mov r0, #0x1b\n    lsl r0, r0, #4\n    strh r4, [r5, r0]\n    add r0, r0, #2\n    strh r6, [r5, r0]\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r1, [r5]\n    add r0, r5, r0\n    bl ov45_0222BAC4\n    add r0, r5, #0\n    bl ov45_0222BA3C\n    pop {r4, r5, r6, pc}\n    _0222A7D8: .word 0x0000052C"
    );
    #endif
}

void ov45_0222A7DC(void) {
    /* Original at 0x0222A7DC */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    cmp r4, #3\n    blo _0222A7EC\n    bl GF_AssertFail\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r1, [r5]\n    add r0, r5, r0\n    bl ov45_0222BADC\n    cmp r0, #0\n    bne _0222A804\n    ldr r0, _0222A840 ; =0x0000052C\n    mov r1, #1\n    str r1, [r5, r0]\n    pop {r4, r5, r6, pc}\n    cmp r4, #3\n    bhs _0222A83E\n    mov r0, #0x6d\n    lsl r0, r0, #2\n    str r6, [r5, r0]\n    add r1, r0, #4\n    str r4, [r5, r1]\n    add r1, r0, #0\n    add r1, #0x57\n    ldrb r2, [r5, r1]\n    mov r1, #0xf\n    add r0, #0x57\n    bic r2, r1\n    mov r1, #1\n    orr r1, r2\n    strb r1, [r5, r0]\n    add r0, r5, #0\n    mov r1, #6\n    bl ov45_0222B118\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r1, [r5]\n    add r0, r5, r0\n    bl ov45_0222BAC4\n    add r0, r5, #0\n    bl ov45_0222BA3C\n    pop {r4, r5, r6, pc}\n    _0222A840: .word 0x0000052C"
    );
    #endif
}

void ov45_0222A844(void) {
    /* Original at 0x0222A844 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, #8\n    mov r1, #8\n    add r7, r2, #0\n    bl ov45_0222B28C\n    mov r6, #0\n    cmp r0, #1\n    bne _0222A8A0\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #8\n    bl Save_Profile_PlayerName_Set\n    mov r0, #0x20\n    add r1, r7, #0\n    bl String_New\n    str r0, [sp]\n    mov r0, #0x20\n    add r1, r7, #0\n    bl String_New\n    str r0, [sp, #4]\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl PlayerName_FlatToString\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    add r0, r6, #0\n    bl FontID_String_AllCharsValid\n    cmp r0, #0\n    bne _0222A892\n    mov r6, #1\n    ldr r0, [sp]\n    bl String_Delete\n    ldr r0, [sp, #4]\n    bl String_Delete\n    b _0222A8A2\n    mov r6, #1\n    cmp r6, #0\n    beq _0222A8D0\n    ldr r2, _0222A91C ; =0x00000309\n    mov r0, #1\n    mov r1, #0x1b\n    add r3, r7, #0\n    bl NewMsgDataFromNarc\n    mov r1, #0x40\n    add r6, r0, #0\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    add r0, r4, #0\n    add r1, r7, #0\n    bl PlayerName_StringToFlat\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl DestroyMsgData\n    add r0, r5, #0\n    bl ov45_0222A9A0\n    add r1, r0, #0\n    add r0, r4, #0\n    bl PlayerProfile_SetTrainerID\n    add r0, r5, #0\n    bl ov45_0222A9CC\n    add r1, r0, #0\n    add r0, r4, #0\n    bl PlayerProfile_SetTrainerGender\n    add r0, r5, #0\n    bl ov45_0222AA5C\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl PlayerProfile_SetAvatar\n    add r0, r5, #0\n    bl ov45_0222AA10\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl PlayerProfile_SetLanguage\n    add r0, r4, #0\n    bl PlayerProfile_SetGameClearFlag\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222A91C: .word 0x00000309"
    );
    #endif
}

void ov45_0222A920(void) {
    /* Original at 0x0222A920 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x43\n    ldrb r0, [r0]\n    cmp r0, #0xe\n    blo _0222A92A\n    mov r0, #0xe\n    bx lr"
    );
    #endif
}

void ov45_0222A92C(void) {
    /* Original at 0x0222A92C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0xc\n    blo _0222A93A\n    bl GF_AssertFail\n    mov r1, #0\n    add r2, r1, #0\n    add r0, r5, r2\n    add r0, #0x4c\n    ldrb r0, [r0]\n    cmp r0, #0x18\n    bhs _0222A94A\n    add r1, r1, #1\n    sub r0, r1, #1\n    cmp r0, r4\n    bne _0222A958\n    add r0, r5, r2\n    add r0, #0x4c\n    ldrb r0, [r0]\n    pop {r3, r4, r5, pc}\n    add r2, r2, #1\n    cmp r2, #0xc\n    blt _0222A93E\n    mov r0, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222A964(void) {
    /* Original at 0x0222A964 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0xc\n    blo _0222A972\n    bl GF_AssertFail\n    mov r1, #0\n    add r2, r1, #0\n    add r0, r5, r2\n    add r0, #0x4c\n    ldrb r0, [r0]\n    cmp r0, #0x18\n    bhs _0222A982\n    add r1, r1, #1\n    sub r0, r1, #1\n    cmp r0, r4\n    bne _0222A990\n    lsl r0, r2, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x58]\n    pop {r3, r4, r5, pc}\n    add r2, r2, #1\n    cmp r2, #0xc\n    blt _0222A976\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222A99C(void) {
    /* Original at 0x0222A99C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov45_0222A9A0(void) {
    /* Original at 0x0222A9A0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    bx lr"
    );
    #endif
}

void ov45_0222A9A4(void) {
    /* Original at 0x0222A9A4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov45_0222AA5C\n    ldr r3, _0222A9C4 ; =ov45_02254A84\n    mov r2, #0\n    ldrh r1, [r3]\n    cmp r0, r1\n    bne _0222A9B8\n    add r0, r2, #0\n    pop {r3, pc}\n    add r2, r2, #1\n    add r3, r3, #4\n    cmp r2, #0x10\n    blt _0222A9AE\n    mov r0, #0x18\n    pop {r3, pc}\n    _0222A9C4: .word ov45_02254A84"
    );
    #endif
}

void ov45_0222A9C8(void) {
    /* Original at 0x0222A9C8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x1c]\n    bx lr"
    );
    #endif
}

void ov45_0222A9CC(void) {
    /* Original at 0x0222A9CC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x38\n    ldrb r0, [r0]\n    cmp r0, #2\n    blo _0222AA00\n    ldrh r0, [r5, #0x3a]\n    bl ov45_0222CD04\n    ldr r1, _0222AA08 ; =0x0000FFFF\n    cmp r0, r1\n    beq _0222A9FC\n    ldrh r3, [r5, #0x3a]\n    ldr r2, _0222AA0C ; =ov45_02254A84\n    mov r1, #0\n    ldrh r0, [r2]\n    cmp r3, r0\n    bne _0222A9F2\n    add r4, r0, #0\n    add r1, r1, #1\n    add r2, r2, #4\n    cmp r1, #0x10\n    blo _0222A9EA\n    b _0222AA02\n    mov r4, #1\n    b _0222AA02\n    add r4, r0, #0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222AA08: .word 0x0000FFFF\n    _0222AA0C: .word ov45_02254A84"
    );
    #endif
}

void ov45_0222AA10(void) {
    ov45_0222AA28(2);
}

void ov45_0222AA28(void) {
    /* Original at 0x0222AA28 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x39\n    ldrb r0, [r0]\n    cmp r0, #7\n    bhi _0222AA50\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222AA3C: ; jump table\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov45_0222AA54(void) {
    /* Original at 0x0222AA54 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x39\n    ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void ov45_0222AA5C(void) {
    /* Original at 0x0222AA5C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #0x3a]\n    bl ov45_0222CD04\n    ldr r1, _0222AA80 ; =0x0000FFFF\n    cmp r0, r1\n    bne _0222AA7C\n    add r0, r4, #0\n    bl ov45_0222A9CC\n    cmp r0, #0\n    bne _0222AA7A\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #6\n    pop {r4, pc}\n    nop\n    _0222AA80: .word 0x0000FFFF"
    );
    #endif
}

void ov45_0222AA84(void) {
    /* Original at 0x0222AA84 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #0x3c]\n    cmp r0, #0xea\n    blo _0222AA92\n    mov r0, #0\n    pop {r4, pc}\n    add r1, r4, #0\n    add r1, #0x3e\n    ldrb r1, [r1]\n    bl ov45_0222D79C\n    cmp r0, #0\n    bne _0222AAA4\n    mov r0, #0\n    pop {r4, pc}\n    ldrh r0, [r4, #0x3c]\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222AAA8(void) {
    ov45_0222D79C(0);
}

void ov45_0222AAC8(void) {
    /* Original at 0x0222AAC8 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x41\n    ldrb r0, [r0]\n    cmp r0, #0xff\n    bne _0222AAD4\n    mov r0, #0\n    bx lr\n    cmp r0, #0x1b\n    blo _0222AADA\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov45_0222AADC(void) {
    /* Original at 0x0222AADC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x41\n    ldrb r0, [r0]\n    cmp r0, #0xff\n    beq _0222AAE8\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov45_0222AAEC(void) {
    GF_AssertFail(0);
}

void ov45_0222AB0C(void) {
    /* Original at 0x0222AB0C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0x8c\n    add r0, #0x90\n    ldr r2, [r2]\n    ldr r0, [r0]\n    str r2, [r1]\n    str r0, [r1, #4]\n    bx lr"
    );
    #endif
}

void ov45_0222AB1C(void) {
    /* Original at 0x0222AB1C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222AB24 ; =0x00000508\n    ldr r0, [r0, r1]\n    bx lr\n    nop\n    _0222AB24: .word 0x00000508"
    );
    #endif
}

void ov45_0222AB28(void) {
    /* Original at 0x0222AB28 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xf3\n    lsl r2, r2, #2\n    ldr r3, _0222AB34 ; =ov45_0222C95C\n    add r0, r0, r2\n    bx r3\n    nop\n    _0222AB34: .word ov45_0222C95C"
    );
    #endif
}

void ov45_0222AB38(void) {
    /* Original at 0x0222AB38 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xf3\n    lsl r2, r2, #2\n    add r0, r0, r2\n    ldr r3, _0222AB44 ; =MI_CpuCopy8\n    mov r2, #0x14\n    bx r3\n    _0222AB44: .word MI_CpuCopy8"
    );
    #endif
}

void ov45_0222AB48(void) {
    /* Original at 0x0222AB48 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xf9\n    lsl r2, r2, #2\n    ldr r3, _0222AB54 ; =ov45_0222C9D0\n    add r0, r0, r2\n    bx r3\n    nop\n    _0222AB54: .word ov45_0222C9D0"
    );
    #endif
}

void ov45_0222AB58(void) {
    /* Original at 0x0222AB58 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xf9\n    lsl r2, r2, #2\n    ldr r3, _0222AB64 ; =ov45_0222C9EC\n    add r0, r0, r2\n    bx r3\n    nop\n    _0222AB64: .word ov45_0222C9EC"
    );
    #endif
}

void ov45_0222AB68(void) {
    ov45_0222EC3C();
}

void ov45_0222AB78(void) {
    /* Original at 0x0222AB78 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r0, r1, #0\n    bl ov45_0222ECA4\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222AB8E\n    bl ov45_0222EC68\n    add r1, r0, #0\n    add r0, r1, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov45_0222AB94(void) {
    /* Original at 0x0222AB94 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r2, #0\n    add r0, sp, #0\n    mov r2, #0\n    str r2, [r0]\n    str r2, [r0, #4]\n    str r2, [r0, #8]\n    str r2, [r0, #0xc]\n    str r2, [r0, #0x10]\n    add r0, sp, #0\n    strb r2, [r0, #0x11]\n    add r0, r1, #0\n    bl ov45_0222EC90\n    str r0, [sp]\n    add r0, r4, #0\n    bl ov45_0222EC90\n    str r0, [sp, #4]\n    mov r1, #2\n    add r0, sp, #0\n    strb r1, [r0, #0x10]\n    mov r0, #4\n    add r1, sp, #0\n    mov r2, #0x14\n    bl ov45_0222EEF0\n    add sp, #0x14\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov45_0222ABD0(void) {
    /* Original at 0x0222ABD0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r1, #0\n    add r1, sp, #0\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    str r0, [r1, #0xc]\n    str r0, [r1, #0x10]\n    mov r1, #1\n    add r0, sp, #0\n    strb r1, [r0, #0x11]\n    add r0, r2, #0\n    add r4, r3, #0\n    bl ov45_0222EC90\n    str r0, [sp]\n    add r0, r5, #0\n    bl ov45_0222EC90\n    str r0, [sp, #4]\n    mov r1, #2\n    add r0, sp, #0\n    strb r1, [r0, #0x10]\n    strb r4, [r0, #0x12]\n    mov r0, #4\n    add r1, sp, #0\n    mov r2, #0x14\n    bl ov45_0222EEF0\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov45_0222AC14(void) {
    /* Original at 0x0222AC14 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r4, r1, #0\n    add r1, sp, #0\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    str r0, [r1, #0xc]\n    add r5, r2, #0\n    str r0, [r1, #0x10]\n    cmp r4, #6\n    bhi _0222ACB4\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222AC3A: ; jump table\n    mov r1, #2\n    b _0222AC5C\n    mov r1, #3\n    b _0222AC5C\n    mov r1, #4\n    b _0222AC5C\n    mov r1, #5\n    b _0222AC5C"
    );
    #endif
}

void ov45_0222AC58(void) {
    /* Original at 0x0222AC58 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "add sp, #0x14\n    pop {r4, r5, pc}\n    add r0, sp, #0\n    strb r1, [r0, #0x11]\n    add r0, r3, #0\n    bl ov45_0222EC90\n    str r0, [sp]\n    ldr r0, [sp, #0x20]\n    bl ov45_0222EC90\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    bl ov45_0222EC90\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x28]\n    bl ov45_0222EC90\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    strb r5, [r0, #0x10]\n    ldrb r1, [r0, #0x13]\n    mov r2, #0x7f\n    bic r1, r2\n    lsl r2, r4, #0x18\n    lsr r3, r2, #0x18\n    mov r2, #0x7f\n    and r2, r3\n    orr r1, r2\n    strb r1, [r0, #0x13]\n    ldrb r1, [r0, #0x13]\n    mov r2, #0x80\n    bic r1, r2\n    ldr r2, [sp, #0x2c]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    lsl r2, r2, #0x1f\n    lsr r2, r2, #0x18\n    orr r1, r2\n    strb r1, [r0, #0x13]\n    mov r0, #4\n    add r1, sp, #0\n    mov r2, #0x14\n    bl ov45_0222EEF0\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov45_0222ACB8(void) {
    /* Original at 0x0222ACB8 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r1, #0\n    add r1, sp, #0\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    str r0, [r1, #0xc]\n    add r4, r2, #0\n    str r0, [r1, #0x10]\n    cmp r5, #0\n    beq _0222ACDA\n    cmp r5, #1\n    beq _0222ACDA\n    cmp r5, #2\n    bne _0222AD28\n    mov r1, #8\n    add r0, sp, #0\n    strb r1, [r0, #0x11]\n    add r0, r3, #0\n    bl ov45_0222EC90\n    str r0, [sp]\n    ldr r0, [sp, #0x20]\n    bl ov45_0222EC90\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    bl ov45_0222EC90\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x28]\n    bl ov45_0222EC90\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    strb r4, [r0, #0x10]\n    ldrb r1, [r0, #0x13]\n    mov r2, #0x7f\n    bic r1, r2\n    lsl r2, r5, #0x18\n    lsr r3, r2, #0x18\n    mov r2, #0x7f\n    and r2, r3\n    orr r1, r2\n    strb r1, [r0, #0x13]\n    ldrb r2, [r0, #0x13]\n    mov r1, #0x80\n    bic r2, r1\n    strb r2, [r0, #0x13]\n    mov r0, #4\n    add r1, sp, #0\n    mov r2, #0x14\n    bl ov45_0222EEF0\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov45_0222AD2C(void) {
    ov45_0222ECDC();
}

void ov45_0222AD3C(void) {
    ov45_0222ECDC();
}

void ov45_0222AD4C(void) {
    ov45_0222ECDC();
}

void ov45_0222AD58(void) {
    GF_AssertFail(0x7a);
}

void ov45_0222AD70(void) {
    ov45_0222EEF0();
}

void ov45_0222AD80(void) {
    /* Original at 0x0222AD80 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x83\n    lsl r2, r2, #2\n    ldr r3, _0222AD8C ; =ov45_0222C4E4\n    add r0, r0, r2\n    bx r3\n    nop\n    _0222AD8C: .word ov45_0222C4E4"
    );
    #endif
}

void ov45_0222AD90(void) {
    /* Original at 0x0222AD90 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x83\n    lsl r2, r2, #2\n    ldr r3, _0222AD9C ; =ov45_0222C4FC\n    add r0, r0, r2\n    bx r3\n    nop\n    _0222AD9C: .word ov45_0222C4FC"
    );
    #endif
}

void ov45_0222ADA0(void) {
    /* Original at 0x0222ADA0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0x4b\n    lsl r0, r0, #4\n    bx lr"
    );
    #endif
}

void ov45_0222ADA8(void) {
    /* Original at 0x0222ADA8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x83\n    lsl r2, r2, #2\n    ldr r3, _0222ADB4 ; =ov45_0222C5B4\n    add r0, r0, r2\n    bx r3\n    nop\n    _0222ADB4: .word ov45_0222C5B4"
    );
    #endif
}

void ov45_0222ADB8(void) {
    /* Original at 0x0222ADB8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0x83\n    lsl r3, r3, #2\n    add r0, r0, r3\n    ldr r3, _0222ADC4 ; =ov45_0222C408\n    bx r3\n    nop\n    _0222ADC4: .word ov45_0222C408"
    );
    #endif
}

void ov45_0222ADC8(void) {
    /* Original at 0x0222ADC8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x83\n    lsl r2, r2, #2\n    ldr r3, _0222ADD4 ; =ov45_0222C480\n    add r0, r0, r2\n    bx r3\n    nop\n    _0222ADD4: .word ov45_0222C480"
    );
    #endif
}

void ov45_0222ADD8(void) {
    /* Original at 0x0222ADD8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x83\n    lsl r2, r2, #2\n    ldr r3, _0222ADE4 ; =ov45_0222C514\n    add r0, r0, r2\n    bx r3\n    nop\n    _0222ADE4: .word ov45_0222C514"
    );
    #endif
}

void ov45_0222ADE8(void) {
    /* Original at 0x0222ADE8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x83\n    lsl r2, r2, #2\n    ldr r3, _0222ADF4 ; =ov45_0222C54C\n    add r0, r0, r2\n    bx r3\n    nop\n    _0222ADF4: .word ov45_0222C54C"
    );
    #endif
}

void ov45_0222ADF8(void) {
    /* Original at 0x0222ADF8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x83\n    lsl r2, r2, #2\n    ldr r3, _0222AE04 ; =ov45_0222C580\n    add r0, r0, r2\n    bx r3\n    nop\n    _0222AE04: .word ov45_0222C580"
    );
    #endif
}

void ov45_0222AE08(void) {
    /* Original at 0x0222AE08 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    mov r1, #3\n    add r4, r2, #0\n    bl _u32_div_f\n    str r0, [r5]\n    add r0, r6, #0\n    mov r1, #3\n    bl _u32_div_f\n    str r1, [r4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222AE24(void) {
    /* Original at 0x0222AE24 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0x83\n    lsl r3, r3, #2\n    add r0, r0, r3\n    ldr r3, _0222AE30 ; =ov45_0222C5E8\n    bx r3\n    nop\n    _0222AE30: .word ov45_0222C5E8"
    );
    #endif
}

void ov45_0222AE34(void) {
    /* Original at 0x0222AE34 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x83\n    lsl r2, r2, #2\n    ldr r3, _0222AE40 ; =ov45_0222C658\n    add r0, r0, r2\n    bx r3\n    nop\n    _0222AE40: .word ov45_0222C658"
    );
    #endif
}

void ov45_0222AE44(void) {
    ov45_0222EEF0();
}

void ov45_0222AE54(void) {
    ov45_0222EEF0();
}

void ov45_0222AE64(void) {
    /* Original at 0x0222AE64 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #7\n    lsl r1, r1, #6\n    ldr r3, _0222AE70 ; =ov45_0222BD4C\n    add r0, r0, r1\n    bx r3\n    nop\n    _0222AE70: .word ov45_0222BD4C"
    );
    #endif
}

void ov45_0222AE74(void) {
    /* Original at 0x0222AE74 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r2, _0222AED4 ; =0x000001CA\n    add r5, r0, #0\n    ldrb r2, [r5, r2]\n    add r4, r1, #0\n    cmp r2, #0\n    beq _0222AE86\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    bl ov45_0222A578\n    bl ov45_0222A920\n    cmp r0, #1\n    beq _0222AE96\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #0x71\n    lsl r0, r0, #2\n    strh r4, [r5, r0]\n    mov r2, #1\n    add r1, r0, #2\n    strb r2, [r5, r1]\n    add r1, r0, #6\n    sub r0, r0, #4\n    strb r2, [r5, r1]\n    add r0, r5, r0\n    mov r1, #0\n    bl ov45_0222BE00\n    add r0, r4, #0\n    bl ov45_0222EC90\n    mov r2, #0x1e\n    lsl r2, r2, #4\n    add r1, r0, #0\n    mov r0, #0\n    add r2, r5, r2\n    mov r3, #4\n    bl ov45_0222EF4C\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r5, r0\n    bl ov45_0222BE48\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _0222AED4: .word 0x000001CA"
    );
    #endif
}

void ov45_0222AED8(void) {
    /* Original at 0x0222AED8 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, _0222AF78 ; =0x000001CA\n    add r4, r0, #0\n    ldrb r2, [r4, r3]\n    mov r0, #0\n    cmp r2, #1\n    bne _0222AEF2\n    sub r3, r3, #4\n    ldrb r3, [r4, r3]\n    cmp r3, #2\n    beq _0222AF00\n    mov r0, #1\n    b _0222AF00\n    cmp r2, #2\n    bne _0222AF00\n    sub r3, r3, #4\n    ldrb r3, [r4, r3]\n    cmp r3, #3\n    beq _0222AF00\n    mov r0, #1\n    cmp r0, #0\n    beq _0222AF18\n    mov r0, #0x71\n    lsl r0, r0, #2\n    ldrh r0, [r4, r0]\n    bl ov45_0222EC90\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov45_0222BE28\n    pop {r4, pc}\n    cmp r2, #1\n    beq _0222AF22\n    cmp r2, #2\n    beq _0222AF2A\n    b _0222AF32\n    ldr r0, _0222AF7C ; =0x000001C6\n    mov r2, #3\n    strb r2, [r4, r0]\n    b _0222AF46\n    ldr r0, _0222AF7C ; =0x000001C6\n    mov r2, #2\n    strb r2, [r4, r0]\n    b _0222AF46\n    mov r0, #0x71\n    lsl r0, r0, #2\n    ldrh r0, [r4, r0]\n    bl ov45_0222EC90\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov45_0222BE28\n    pop {r4, pc}\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl ov45_0222BE00\n    mov r0, #0x71\n    lsl r0, r0, #2\n    ldrh r0, [r4, r0]\n    bl ov45_0222EC90\n    mov r2, #0x1e\n    lsl r2, r2, #4\n    add r1, r0, #0\n    mov r0, #2\n    add r2, r4, r2\n    mov r3, #4\n    bl ov45_0222EF4C\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl ov45_0222BE48\n    pop {r4, pc}\n    nop\n    _0222AF78: .word 0x000001CA\n    _0222AF7C: .word 0x000001C6"
    );
    #endif
}

void ov45_0222AF80(void) {
    /* Original at 0x0222AF80 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0222AFC0 ; =0x000001C6\n    add r4, r0, #0\n    ldrb r0, [r4, r1]\n    cmp r0, #0\n    beq _0222AFBE\n    add r0, r1, #4\n    ldrb r0, [r4, r0]\n    cmp r0, #1\n    bne _0222AFBE\n    add r0, r1, #0\n    mov r2, #0\n    add r0, #0x1c\n    strh r2, [r4, r0]\n    sub r0, r1, #2\n    ldrh r0, [r4, r0]\n    bl ov45_0222EC90\n    mov r2, #0x1e\n    lsl r2, r2, #4\n    add r1, r0, #0\n    mov r0, #3\n    add r2, r4, r2\n    mov r3, #4\n    bl ov45_0222EF4C\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl ov45_0222BD4C\n    pop {r4, pc}\n    _0222AFC0: .word 0x000001C6"
    );
    #endif
}

void ov45_0222AFC4(void) {
    /* Original at 0x0222AFC4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222AFF4 ; =0x000001C6\n    ldrb r1, [r4, r0]\n    cmp r1, #0\n    beq _0222AFF0\n    sub r0, r0, #2\n    ldrh r0, [r4, r0]\n    bl ov45_0222EC90\n    ldr r2, _0222AFF4 ; =0x000001C6\n    add r1, r0, #0\n    mov r3, #4\n    add r0, r2, #0\n    strb r3, [r4, r2]\n    add r0, #0x1c\n    add r2, #0x1a\n    strh r3, [r4, r0]\n    mov r0, #2\n    add r2, r4, r2\n    bl ov45_0222EF4C\n    pop {r4, pc}\n    nop\n    _0222AFF4: .word 0x000001C6"
    );
    #endif
}

void ov45_0222AFF8(void) {
    /* Original at 0x0222AFF8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222B008 ; =0x000001CA\n    ldrb r0, [r0, r1]\n    cmp r0, #0\n    beq _0222B004\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _0222B008: .word 0x000001CA"
    );
    #endif
}

void ov45_0222B00C(void) {
    /* Original at 0x0222B00C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222B01C ; =0x000001CA\n    ldrb r0, [r0, r1]\n    cmp r0, #2\n    bne _0222B018\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _0222B01C: .word 0x000001CA"
    );
    #endif
}

void ov45_0222B020(void) {
    /* Original at 0x0222B020 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x71\n    lsl r1, r1, #2\n    ldrh r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov45_0222B028(void) {
    /* Original at 0x0222B028 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222B030 ; =0x000001CB\n    ldrb r0, [r0, r1]\n    bx lr\n    nop\n    _0222B030: .word 0x000001CB"
    );
    #endif
}

void ov45_0222B034(void) {
    /* Original at 0x0222B034 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222B03C ; =0x000001C6\n    ldrb r0, [r0, r1]\n    bx lr\n    nop\n    _0222B03C: .word 0x000001C6"
    );
    #endif
}

void ov45_0222B040(void) {
    /* Original at 0x0222B040 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x72\n    lsl r1, r1, #2\n    ldrh r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov45_0222B048(void) {
    /* Original at 0x0222B048 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x14\n    blo _0222B056\n    bl GF_AssertFail\n    mov r0, #0x73\n    add r1, r5, r4\n    lsl r0, r0, #2\n    ldrb r0, [r1, r0]\n    cmp r0, #6\n    blo _0222B066\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222B06C(void) {
    /* Original at 0x0222B06C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _0222B090 ; =0x000001C6\n    ldrb r2, [r0, r1]\n    cmp r2, #4\n    bne _0222B07A\n    mov r0, #1\n    pop {r3, pc}\n    sub r1, r1, #6\n    add r0, r0, r1\n    bl ov45_0222BE74\n    cmp r0, #0\n    bne _0222B08A\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _0222B090: .word 0x000001C6"
    );
    #endif
}

void ov45_0222B094(void) {
    /* Original at 0x0222B094 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #7\n    lsl r1, r1, #6\n    ldr r3, _0222B0A0 ; =ov45_0222BE94\n    add r0, r0, r1\n    bx r3\n    nop\n    _0222B0A0: .word ov45_0222BE94"
    );
    #endif
}

void ov45_0222B0A4(void) {
    /* Original at 0x0222B0A4 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222B0AC ; =0x000001C7\n    mov r2, #1\n    strb r2, [r0, r1]\n    bx lr\n    _0222B0AC: .word 0x000001C7"
    );
    #endif
}

void ov45_0222B0B0(void) {
    /* Original at 0x0222B0B0 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222B0B8 ; =0x000001C7\n    ldrb r0, [r0, r1]\n    bx lr\n    nop\n    _0222B0B8: .word 0x000001C7"
    );
    #endif
}

void ov45_0222B0BC(void) {
    /* Original at 0x0222B0BC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov45_0222AFF8\n    cmp r0, #1\n    bne _0222B0D6\n    mov r1, #7\n    lsl r1, r1, #6\n    add r0, r4, r1\n    add r1, r1, #4\n    ldrh r1, [r4, r1]\n    bl ov45_0222BDCC\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222B0D8(void) {
    /* Original at 0x0222B0D8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #7\n    lsl r2, r2, #6\n    ldr r3, _0222B0E4 ; =ov45_0222BDCC\n    add r0, r0, r2\n    bx r3\n    nop\n    _0222B0E4: .word ov45_0222BDCC"
    );
    #endif
}

void ov45_0222B0E8(void) {
    /* Original at 0x0222B0E8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #7\n    lsl r2, r2, #6\n    ldr r3, _0222B0F4 ; =ov45_0222BD94\n    add r0, r0, r2\n    bx r3\n    nop\n    _0222B0F4: .word ov45_0222BD94"
    );
    #endif
}

void ov45_0222B0F8(void) {
    /* Original at 0x0222B0F8 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    bl Save_GameStats_Get\n    mov r1, #0x2f\n    bl GameStats_Inc\n    pop {r3, pc}"
    );
    #endif
}

void ov45_0222B108(void) {
    /* Original at 0x0222B108 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    bl Save_GameStats_Get\n    mov r1, #0x77\n    bl GameStats_Inc\n    pop {r3, pc}"
    );
    #endif
}

void ov45_0222B118(void) {
    GF_AssertFail(0xe9, 1);
}

void ov45_0222B134(void) {
    /* Original at 0x0222B134 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    mov r6, #0xe9\n    add r5, r0, #0\n    add r7, r4, #0\n    lsl r6, r6, #2\n    add r0, r5, r4\n    ldrb r0, [r0, r6]\n    cmp r0, #0\n    bne _0222B1A8\n    cmp r4, #7\n    bhi _0222B19E\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222B158: ; jump table\n    add r0, r5, #0\n    bl ov45_0222A394\n    cmp r0, #1\n    bne _0222B176\n    add r0, r7, #0\n    b _0222B1A0\n    mov r0, #1\n    b _0222B1A0\n    add r0, r5, #0\n    bl ov45_0222A330\n    cmp r0, #1\n    bne _0222B188\n    mov r0, #0\n    b _0222B1A0\n    mov r0, #1\n    b _0222B1A0\n    add r0, r5, #0\n    bl ov45_0222A3A0\n    cmp r0, #1\n    bne _0222B19A\n    mov r0, #0\n    b _0222B1A0\n    mov r0, #1\n    b _0222B1A0\n    mov r0, #1\n    cmp r0, #1\n    bne _0222B1A8\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    cmp r4, #8\n    blt _0222B140\n    mov r0, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222B1B4(void) {
    /* Original at 0x0222B1B4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #0xeb\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov45_0222C900\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov45_0222A53C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov45_0222AB28\n    cmp r0, #1\n    bne _0222B1D8\n    add r5, r5, #2\n    add r0, r5, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222B1DC(void) {
    /* Original at 0x0222B1DC */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222B1E4 ; =0x0000049C\n    ldr r3, _0222B1E8 ; =ov45_0222CB40\n    add r0, r0, r1\n    bx r3\n    _0222B1E4: .word 0x0000049C\n    _0222B1E8: .word ov45_0222CB40"
    );
    #endif
}

void ov45_0222B1EC(void) {
    /* Original at 0x0222B1EC */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222B1F4 ; =0x0000049C\n    ldr r3, _0222B1F8 ; =ov45_0222CB3C\n    add r0, r0, r1\n    bx r3\n    _0222B1F4: .word 0x0000049C\n    _0222B1F8: .word ov45_0222CB3C"
    );
    #endif
}

void ov45_0222B1FC(void) {
    /* Original at 0x0222B1FC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    ldr r1, _0222B218 ; =0x00000524\n    mov r2, #1\n    str r2, [r0, r1]\n    sub r1, #0x14\n    add r2, r0, r1\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    bx lr\n    nop\n    _0222B218: .word 0x00000524"
    );
    #endif
}

void ov45_0222B21C(void) {
    /* Original at 0x0222B21C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    ldr r1, _0222B240 ; =0x00000524\n    ldr r2, [r0, r1]\n    cmp r2, #1\n    bne _0222B23A\n    sub r1, #0x14\n    add r2, r0, r1\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _0222B240: .word 0x00000524"
    );
    #endif
}

void ov45_0222B244(void) {
    /* Original at 0x0222B244 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222B268 ; =0x000004B8\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222B254\n    bl GF_AssertFail\n    ldr r0, [r4]\n    bl Save_PlayerData_GetProfile\n    ldr r1, _0222B26C ; =0x00000528\n    ldr r1, [r4, r1]\n    bl sub_02078DD8\n    ldr r1, _0222B268 ; =0x000004B8\n    str r0, [r4, r1]\n    pop {r4, pc}\n    _0222B268: .word 0x000004B8\n    _0222B26C: .word 0x00000528"
    );
    #endif
}

void ov45_0222B270(void) {
    sub_02078E28(0);
}

void ov45_0222B28C(void) {
    /* Original at 0x0222B28C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r4, #0\n    cmp r1, #0\n    bls _0222B2AA\n    ldr r2, _0222B2B0 ; =0x0000FFFF\n    ldrh r3, [r0]\n    cmp r3, r2\n    bne _0222B2A2\n    mov r0, #1\n    pop {r3, r4}\n    bx lr\n    add r4, r4, #1\n    add r0, r0, #2\n    cmp r4, r1\n    blo _0222B296\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    _0222B2B0: .word 0x0000FFFF"
    );
    #endif
}

void ov45_0222B2B4(void) {
    /* Original at 0x0222B2B4 */
    /* Requires manual decompilation - 190 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r4, r2, #0\n    str r1, [sp]\n    cmp r3, #0\n    beq _0222B38A\n    ldr r2, _0222B460 ; =0x00000508\n    mov r1, #0x42\n    add r0, r4, r2\n    add r2, #0x20\n    lsl r1, r1, #2\n    ldr r2, [r4, r2]\n    add r1, r4, r1\n    bl ov45_0222BCE4\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r1, [r4]\n    add r0, r4, r0\n    bl ov45_0222BADC\n    cmp r0, #0\n    bne _0222B2EA\n    ldr r0, _0222B464 ; =0x0000052C\n    mov r1, #1\n    str r1, [r4, r0]\n    add r0, r5, #0\n    bl ov45_0222EC68\n    mov r2, #0x16\n    lsl r2, r2, #4\n    add r1, r0, #0\n    ldrb r2, [r4, r2]\n    ldr r0, [r4, #4]\n    mov r3, #3\n    bl ov45_0222D8C8\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    str r5, [r4, r0]\n    add r0, r5, #0\n    add r1, sp, #0xc\n    bl ov45_0222EA4C\n    mov r0, #5\n    lsl r0, r0, #6\n    add r0, r4, r0\n    add r1, sp, #0xc\n    bl ov45_0222D500\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov45_0222AA84\n    add r6, r0, #0\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov45_0222AAA8\n    add r7, r0, #0\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov45_0222AA28\n    cmp r6, #0\n    beq _0222B364\n    cmp r0, #1\n    bne _0222B364\n    mov r2, #5\n    ldr r3, _0222B468 ; =0x00000528\n    lsl r2, r2, #6\n    lsl r0, r6, #0x10\n    lsl r1, r7, #0x18\n    ldr r2, [r4, r2]\n    ldr r3, [r4, r3]\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x18\n    bl ov45_02230F94\n    mov r1, #0x51\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    str r0, [r4, r1]\n    b _0222B376\n    mov r0, #0x51\n    mov r1, #0xc\n    lsl r0, r0, #2\n    strb r1, [r4, r0]\n    add r1, r0, #1\n    mov r2, #0\n    strb r2, [r4, r1]\n    add r0, r0, #2\n    strb r2, [r4, r0]\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r1, [r4]\n    add r0, r4, r0\n    bl ov45_0222BAC4\n    add r0, r4, #0\n    bl ov45_0222BA3C\n    b _0222B3CE\n    bl ov45_0222EA78\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov45_0222EC68\n    add r7, r0, #0\n    ldr r0, [sp]\n    bl ov45_0222A9CC\n    add r2, r0, #0\n    ldr r0, [r4, #4]\n    add r1, r7, #0\n    mov r3, #0\n    bl ov45_0222D8C8\n    cmp r6, r5\n    bne _0222B3B6\n    ldr r0, [r4, #4]\n    add r1, r7, #0\n    bl ov45_0222D8F0\n    ldr r0, _0222B46C ; =0x000004BC\n    mov r2, #0\n    add r0, r4, r0\n    add r1, r5, #0\n    mvn r2, r2\n    bl ov45_0222CBD0\n    cmp r0, #0\n    beq _0222B3CE\n    add r0, r4, #0\n    bl ov45_0222BA3C\n    add r0, r5, #0\n    bl ov45_0222EC68\n    add r6, r0, #0\n    add r0, r4, #0\n    add r0, #0xf8\n    ldr r1, [r0]\n    mov r0, #1\n    lsl r0, r6\n    orr r1, r0\n    add r0, r4, #0\n    add r0, #0xf8\n    str r1, [r0]\n    add r0, r5, #0\n    bl ov45_0222F484\n    cmp r0, #1\n    bne _0222B43E\n    mov r0, #0xf3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, r6, #0\n    mov r2, #1\n    bl ov45_0222C944\n    str r6, [sp, #8]\n    mov r2, #0xf3\n    lsl r2, r2, #2\n    ldr r0, [r4, #4]\n    add r1, sp, #8\n    add r2, r4, r2\n    bl ov45_0222DC08\n    add r0, r5, #0\n    bl ov45_0222F4AC\n    add r3, r0, #0\n    beq _0222B42C\n    mov r0, #0xf9\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, r6, #0\n    mov r2, #1\n    bl ov45_0222C9A0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0xf9\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, r6, #0\n    mov r2, #0\n    bl ov45_0222C9A0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0xf3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, r6, #0\n    mov r2, #0\n    bl ov45_0222C944\n    mov r0, #0xf9\n    lsl r0, r0, #2\n    mov r2, #0\n    add r0, r4, r0\n    add r1, r6, #0\n    add r3, r2, #0\n    bl ov45_0222C9A0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0222B460: .word 0x00000508\n    _0222B464: .word 0x0000052C\n    _0222B468: .word 0x00000528\n    _0222B46C: .word 0x000004BC"
    );
    #endif
}

void ov45_0222B470(void) {
    /* Original at 0x0222B470 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    bl ov45_0222E9E0\n    cmp r6, r0\n    beq _0222B528\n    add r0, r6, #0\n    bl ov45_0222EC68\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov45_0222AFF8\n    cmp r0, #1\n    bne _0222B4A4\n    add r0, r5, #0\n    bl ov45_0222B020\n    cmp r4, r0\n    bne _0222B4A4\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r5, r0\n    bl ov45_0222BD5C\n    ldr r0, [r5, #4]\n    add r1, r4, #0\n    bl ov45_0222D8D4\n    cmp r0, #0\n    beq _0222B4C2\n    add r0, r6, #0\n    bl ov45_0222EAD4\n    bl ov45_0222EC68\n    add r1, r0, #0\n    ldr r0, [r5, #4]\n    bl ov45_0222D8F0\n    mov r0, #0xf3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov45_0222C944\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r5, r0\n    add r1, r4, #0\n    bl ov45_0222BDE8\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r5, r0\n    add r1, r4, #0\n    bl ov45_0222BDB0\n    ldr r0, _0222B52C ; =0x000004BC\n    mov r2, #0\n    add r0, r5, r0\n    add r1, r6, #0\n    mvn r2, r2\n    bl ov45_0222CBD0\n    cmp r0, #0\n    beq _0222B500\n    add r0, r5, #0\n    bl ov45_0222BA3C\n    mov r0, #0xf9\n    lsl r0, r0, #2\n    mov r2, #0\n    add r0, r5, r0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl ov45_0222C9A0\n    add r0, r6, #0\n    bl ov45_0222EC68\n    add r1, r5, #0\n    add r1, #0xfc\n    ldr r2, [r1]\n    mov r1, #1\n    lsl r1, r0\n    add r0, r2, #0\n    orr r0, r1\n    add r5, #0xfc\n    str r0, [r5]\n    pop {r4, r5, r6, pc}\n    nop\n    _0222B52C: .word 0x000004BC"
    );
    #endif
}

void ov45_0222B530(void) {
    /* Original at 0x0222B530 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl ov45_0222EC68\n    mov r1, #0x41\n    add r6, r0, #0\n    lsl r1, r1, #2\n    mov r2, #1\n    ldr r0, [r4, r1]\n    lsl r2, r6\n    orr r0, r2\n    str r0, [r4, r1]\n    add r0, r5, #0\n    bl ov45_0222A920\n    cmp r0, #8\n    bhi _0222B57E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222B560: ; jump table\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r4, r0\n    add r1, r6, #0\n    bl ov45_0222BDE8\n    add r0, r5, #0\n    bl ov45_0222AADC\n    cmp r0, #1\n    bne _0222B59C\n    add r0, r5, #0\n    bl ov45_0222AAC8\n    add r1, r0, #0\n    mov r0, #0xeb\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r2, r6, #0\n    bl ov45_0222C8C8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222B5A0(void) {
    /* Original at 0x0222B5A0 */
    /* Requires manual decompilation - 192 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, sp, #0\n    mov r6, #0\n    bl ov45_022320C4\n    add r0, r4, #0\n    add r0, #0xd4\n    add r1, sp, #0\n    bl ov45_0222D500\n    add r0, sp, #0\n    ldmia r0!, {r2, r3}\n    add r0, r4, #0\n    add r0, #0xd8\n    stmia r0!, {r2, r3}\n    cmp r5, #0x13\n    bls _0222B5CA\n    b _0222B73A\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222B5D6: ; jump table\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0xd4\n    bl ov45_0222D8BC\n    add r0, r4, #0\n    add r0, #0xd8\n    ldmia r0!, {r2, r3}\n    add r0, r4, #0\n    mov r1, #0x7f\n    add r0, #0xe0\n    stmia r0!, {r2, r3}\n    lsl r1, r1, #2\n    ldrb r3, [r4, r1]\n    mov r0, #1\n    mov r2, #1\n    bic r3, r0\n    add r0, r3, #0\n    orr r0, r2\n    strb r0, [r4, r1]\n    add r0, r2, #0\n    add r0, #0xff\n    ldr r0, [r4, r0]\n    orr r0, r2\n    add r2, #0xff\n    str r0, [r4, r2]\n    b _0222B73A\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    bne _0222B64A\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    mov r6, #1\n    add r0, r1, #0\n    str r6, [r4, #8]\n    add r0, #0xd6\n    mov r7, #0\n    strh r1, [r4, r0]\n    ldr r0, _0222B74C ; =0x000001FD\n    strb r5, [r4, r0]\n    sub r0, #0xfd\n    ldr r1, [r4, r0]\n    mov r0, #2\n    orr r1, r0\n    add r0, #0xfe\n    str r1, [r4, r0]\n    b _0222B73A\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    bne _0222B672\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    mov r6, #1\n    add r0, r1, #0\n    str r6, [r4, #8]\n    add r0, #0xd6\n    mov r7, #0\n    strh r1, [r4, r0]\n    ldr r0, _0222B750 ; =0x000001FE\n    strb r5, [r4, r0]\n    sub r0, #0xfe\n    ldr r1, [r4, r0]\n    mov r0, #4\n    orr r1, r0\n    add r0, #0xfc\n    str r1, [r4, r0]\n    b _0222B73A\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    bne _0222B69A\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    mov r6, #1\n    add r0, r1, #0\n    str r6, [r4, #8]\n    add r0, #0xd6\n    mov r7, #0\n    strh r1, [r4, r0]\n    ldr r0, _0222B754 ; =0x000001FF\n    strb r5, [r4, r0]\n    sub r0, #0xff\n    ldr r1, [r4, r0]\n    mov r0, #8\n    orr r1, r0\n    add r0, #0xf8\n    str r1, [r4, r0]\n    b _0222B73A\n    mov r6, #1\n    mov r0, #6\n    add r7, r6, #0\n    bl ov45_0222ECDC\n    add r5, r0, #0\n    mov r0, #7\n    bl ov45_0222ECDC\n    add r2, r0, #0\n    ldr r0, _0222B758 ; =0x0000049C\n    add r1, r5, #0\n    add r0, r4, r0\n    bl ov45_0222CA7C\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    add r0, r1, #0\n    add r0, #0xd8\n    strh r1, [r4, r0]\n    b _0222B73A\n    mov r1, #0x7f\n    lsl r1, r1, #2\n    ldrb r2, [r4, r1]\n    mov r0, #0xc\n    bic r2, r0\n    mov r0, #8\n    orr r2, r0\n    add r0, #0xf8\n    strb r2, [r4, r1]\n    ldr r1, [r4, r0]\n    mov r0, #0x20\n    orr r1, r0\n    add r0, #0xe0\n    str r1, [r4, r0]\n    b _0222B73A\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    add r0, r1, #0\n    add r0, #0xda\n    mov r6, #1\n    mov r7, #2\n    strh r1, [r4, r0]\n    b _0222B73A\n    mov r1, #0x7f\n    lsl r1, r1, #2\n    ldrb r2, [r4, r1]\n    mov r0, #0x80\n    mov r6, #1\n    orr r2, r0\n    strb r2, [r4, r1]\n    mov r1, #0xe1\n    lsl r1, r1, #2\n    lsl r0, r0, #2\n    mov r7, #4\n    strh r1, [r4, r0]\n    b _0222B73A\n    mov r1, #0x7f\n    lsl r1, r1, #2\n    ldrb r2, [r4, r1]\n    mov r0, #0x60\n    bic r2, r0\n    mov r0, #0x20\n    orr r2, r0\n    add r0, #0xe0\n    strb r2, [r4, r1]\n    ldr r1, [r4, r0]\n    mov r0, #0x10\n    orr r1, r0\n    add r0, #0xf0\n    str r1, [r4, r0]\n    cmp r6, #0\n    beq _0222B746\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov45_0222C370\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222B74C: .word 0x000001FD\n    _0222B750: .word 0x000001FE\n    _0222B754: .word 0x000001FF\n    _0222B758: .word 0x0000049C"
    );
    #endif
}

void ov45_0222B75C(void) {
    /* Original at 0x0222B75C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x42\n    add r4, r2, #0\n    add r6, r1, #0\n    lsl r0, r0, #2\n    ldr r1, [r4]\n    add r0, r4, r0\n    bl ov45_0222BADC\n    cmp r0, #0\n    bne _0222B77C\n    ldr r0, _0222B798 ; =0x0000052C\n    mov r1, #1\n    str r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    mov r0, #0x42\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov45_0222BB00\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r1, [r4]\n    add r0, r4, r0\n    bl ov45_0222BAC4\n    pop {r4, r5, r6, pc}\n    _0222B798: .word 0x0000052C"
    );
    #endif
}

void ov45_0222B79C(void) {
    /* Original at 0x0222B79C */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0xc8\n    bl memset\n    add r0, sp, #4\n    bl ov45_0222EC10\n    add r4, #0x20\n    add r0, r4, #0\n    bl ov45_0222AA84\n    add r6, r0, #0\n    add r0, r4, #0\n    bl ov45_0222AAA8\n    add r2, r0, #0\n    lsl r1, r6, #0x10\n    lsl r2, r2, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl ov45_0222D638\n    mov r6, #0\n    add r4, r6, #0\n    ldr r0, [sp, #8]\n    mov r1, #0\n    ldr r0, [r0, r4]\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222B80A\n    bl ov45_0222EA2C\n    str r0, [sp]\n    bl ov45_0222AA84\n    add r7, r0, #0\n    ldr r0, [sp]\n    bl ov45_0222AAA8\n    add r2, r0, #0\n    lsl r1, r7, #0x10\n    lsl r2, r2, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl ov45_0222D638\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #0x14\n    blt _0222B7DA\n    mov r4, #0\n    mov r7, #1\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl ov45_0222EDC4\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl ov45_0222EDF0\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r3, r7, #0\n    bl ov45_0222D638\n    add r4, r4, #1\n    cmp r4, #0x14\n    blt _0222B816\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222B840(void) {
    /* Original at 0x0222B840 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    ldrb r0, [r4, r0]\n    lsl r1, r0, #0x1f\n    lsr r1, r1, #0x1f\n    cmp r1, #1\n    bne _0222B89E\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _0222B89E\n    bl ov45_0222E96C\n    cmp r0, #2\n    bne _0222B89E\n    add r0, r4, #0\n    bl ov45_0222AD4C\n    add r2, r4, #0\n    add r2, #0xe0\n    ldr r3, [r2]\n    add r2, r4, #0\n    add r2, #0xe4\n    mov r1, #0\n    ldr r2, [r2]\n    add r5, r0, r3\n    adc r1, r2\n    add r0, r4, #0\n    add r0, #0xd8\n    ldr r3, [r0]\n    add r0, r4, #0\n    add r0, #0xdc\n    ldr r2, [r0]\n    sub r0, r5, r3\n    sbc r1, r2\n    bge _0222B89E\n    mov r1, #0x7f\n    lsl r1, r1, #2\n    ldrb r2, [r4, r1]\n    mov r0, #0x80\n    orr r2, r0\n    strb r2, [r4, r1]\n    mov r1, #0xe1\n    lsl r1, r1, #2\n    lsl r0, r0, #2\n    strh r1, [r4, r0]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222B8A0(void) {
    /* Original at 0x0222B8A0 */
    /* Requires manual decompilation - 181 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    str r1, [sp]\n    add r0, r1, #0\n    add r4, r2, #0\n    bl Save_PlayerData_GetProfile\n    str r0, [sp, #0x18]\n    ldr r0, [sp]\n    bl SaveArray_Party_Get\n    str r0, [sp, #0x14]\n    ldr r0, [sp]\n    bl Save_Pokedex_Get\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    bl Save_WiFiHistory_Get\n    str r0, [sp, #0x10]\n    ldr r0, [sp]\n    bl Save_SysInfo_RTC_Get\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x18]\n    add r1, r4, #0\n    bl PlayerProfile_GetPlayerName_NewString\n    add r1, r5, #0\n    add r4, r0, #0\n    add r1, #0x28\n    mov r2, #8\n    bl CopyStringToU16Array\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #8\n    bl CopyStringToU16Array\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r5, #0x20]\n    ldr r0, [sp, #0x18]\n    bl PlayerProfile_GetTrainerID\n    str r0, [r5, #0x24]\n    ldr r0, [sp, #0x14]\n    bl Party_GetCount\n    str r0, [sp, #4]\n    mov r4, #0\n    add r6, r5, #0\n    ldr r0, [sp, #4]\n    cmp r4, r0\n    bge _0222B950\n    ldr r0, [sp, #0x14]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #5\n    mov r2, #0\n    add r7, r0, #0\n    bl GetMonData\n    add r1, r6, #0\n    add r1, #0x40\n    strh r0, [r1]\n    add r0, r7, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    add r1, r5, r4\n    add r1, #0x4c\n    strb r0, [r1]\n    add r0, r7, #0\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetMonData\n    add r1, r5, r4\n    add r1, #0x52\n    strb r0, [r1]\n    b _0222B958\n    add r1, r6, #0\n    ldr r0, _0222BA38 ; =0x000001EF\n    add r1, #0x40\n    strh r0, [r1]\n    add r4, r4, #1\n    add r6, r6, #2\n    cmp r4, #6\n    blt _0222B910\n    ldr r0, [sp, #0x18]\n    bl PlayerProfile_GetTrainerGender\n    add r1, r5, #0\n    add r1, #0x58\n    strb r0, [r1]\n    ldr r0, [sp, #0x18]\n    bl PlayerProfile_GetLanguage\n    add r1, r5, #0\n    add r1, #0x59\n    strb r0, [r1]\n    ldr r0, [sp, #0x18]\n    bl PlayerProfile_GetAvatar\n    add r1, r5, #0\n    add r1, #0x5a\n    strh r0, [r1]\n    add r0, r5, #0\n    add r0, #0x5a\n    ldrh r0, [r0]\n    bl ov45_0222CCE4\n    add r1, r5, #0\n    add r1, #0x5a\n    strh r0, [r1]\n    ldr r0, [sp, #0x10]\n    bl WifiHistory_GetPlayerCountry\n    add r1, r5, #0\n    add r1, #0x5c\n    strh r0, [r1]\n    ldr r0, [sp, #0x10]\n    bl WiFiHistory_GetPlayerRegion\n    add r1, r5, #0\n    add r1, #0x5e\n    strb r0, [r1]\n    ldr r0, [sp, #0xc]\n    bl Pokedex_GetNatDexFlag\n    add r1, r5, #0\n    add r1, #0x5f\n    strb r0, [r1]\n    ldr r0, [sp, #0x18]\n    bl PlayerProfile_GetGameClearFlag\n    add r1, r5, #0\n    add r1, #0x60\n    strb r0, [r1]\n    add r0, r5, #0\n    mov r1, #0xff\n    add r0, #0x61\n    strb r1, [r0]\n    add r1, r5, #0\n    mov r0, #0\n    add r1, #0x63\n    strb r0, [r1]\n    add r1, r5, #0\n    mov r2, #GAME_VERSION\n    add r1, #0x62\n    strb r2, [r1]\n    ldr r1, [sp, #8]\n    add r4, r5, #0\n    add r1, #0x24\n    str r1, [sp, #8]\n    ldmia r1!, {r2, r3}\n    str r1, [sp, #8]\n    add r1, r5, #0\n    add r1, #0x64\n    stmia r1!, {r2, r3}\n    mov r3, #0x18\n    add r2, r3, #0\n    sub r2, #0x19\n    add r1, r5, r0\n    add r1, #0x6c\n    strb r3, [r1]\n    str r2, [r4, #0x78]\n    add r0, r0, #1\n    add r4, r4, #4\n    cmp r0, #0xc\n    blt _0222B9F4\n    mov r2, #0\n    add r3, r5, #0\n    add r1, r2, #0\n    add r0, r3, #0\n    add r0, #0xa8\n    add r2, r2, #1\n    add r3, r3, #2\n    strh r1, [r0]\n    cmp r2, #2\n    blt _0222BA0A\n    mov r1, #0\n    add r0, r5, #0\n    mvn r1, r1\n    add r0, #0xac\n    str r1, [r0]\n    add r0, r5, #0\n    mov r1, #3\n    add r0, #0xb0\n    str r1, [r0]\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl ov45_0222BAC4\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222BA38: .word 0x000001EF"
    );
    #endif
}

void ov45_0222BA3C(void) {
    /* Original at 0x0222BA3C */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r1, [r5]\n    add r0, r5, r0\n    bl ov45_0222BADC\n    cmp r0, #0\n    bne _0222BA58\n    ldr r0, _0222BABC ; =0x0000052C\n    mov r1, #1\n    str r1, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r7, _0222BAC0 ; =0x000004BC\n    mov r4, #0\n    add r6, r5, #0\n    add r0, r5, r7\n    add r1, r4, #0\n    bl ov45_0222CC50\n    mov r1, #0x5d\n    add r2, r5, r4\n    lsl r1, r1, #2\n    strb r0, [r2, r1]\n    add r0, r5, r7\n    add r1, r4, #0\n    bl ov45_0222CC7C\n    mov r1, #6\n    lsl r1, r1, #6\n    str r0, [r6, r1]\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #0xc\n    blt _0222BA5E\n    sub r1, #0x68\n    add r0, r5, r1\n    add r1, #0x18\n    add r1, r5, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov45_0222E9F8\n    mov r1, #0x42\n    lsl r1, r1, #2\n    add r0, r5, r1\n    add r1, #0x28\n    add r1, r5, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r1, [r5]\n    add r0, r5, r0\n    bl ov45_0222BAC4\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222BABC: .word 0x0000052C\n    _0222BAC0: .word 0x000004BC"
    );
    #endif
}

void ov45_0222BAC4(void) {
    SaveArray_CalcCRC16(0x94);
}

void ov45_0222BADC(void) {
    /* Original at 0x0222BADC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    add r1, r4, #0\n    add r1, #0x20\n    mov r2, #0x94\n    bl SaveArray_CalcCRC16\n    add r4, #0xb4\n    ldr r1, [r4]\n    cmp r0, r1\n    beq _0222BAFC\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222BB00(void) {
    /* Original at 0x0222BB00 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r3, r5, #0\n    add r7, r2, #0\n    add r6, r4, #0\n    add r3, #0x20\n    mov r2, #0x12\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0222BB10\n    ldr r0, [r6]\n    cmp r7, #0x94\n    str r0, [r3]\n    bhi _0222BB2E\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x20\n    add r2, r7, #0\n    bl MI_CpuCopy8\n    b _0222BB3A\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x20\n    mov r2, #0x94\n    bl MI_CpuCopy8\n    add r4, #8\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x10\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    add r0, r5, #0\n    add r5, #0x28\n    add r1, r5, #0\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222BB58(void) {
    /* Original at 0x0222BB58 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    str r1, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov45_0222BB60(void) {
    /* Original at 0x0222BB60 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #4\n    add r6, r2, #0\n    ldrsh r2, [r5, r1]\n    add r7, r3, #0\n    sub r0, r2, #1\n    bmi _0222BB8C\n    strh r0, [r5, #4]\n    ldrsh r1, [r5, r1]\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    cmp r1, r0\n    bne _0222BBA6\n    mov r0, #0\n    mov r1, #0x7f\n    bl GF_SndStartFadeOutBGM\n    mov r0, #1\n    strb r0, [r5, #0xe]\n    b _0222BBA6\n    cmp r2, #0\n    bne _0222BBA6\n    ldrb r2, [r5]\n    mov r0, #2\n    orr r0, r2\n    strb r0, [r5]\n    ldr r2, [r4, #8]\n    mov r0, #0x80\n    orr r0, r2\n    str r0, [r4, #8]\n    ldrsh r0, [r5, r1]\n    sub r0, r0, #1\n    strh r0, [r5, #4]\n    mov r0, #6\n    ldrsh r2, [r5, r0]\n    sub r1, r2, #1\n    bmi _0222BBB2\n    strh r1, [r5, #6]\n    b _0222BBCC\n    cmp r2, #0\n    bne _0222BBCC\n    ldr r2, [r4, #8]\n    mov r1, #4\n    orr r2, r1\n    mov r1, #8\n    orr r2, r1\n    mov r1, #2\n    orr r1, r2\n    str r1, [r4, #8]\n    ldrsh r0, [r5, r0]\n    sub r0, r0, #1\n    strh r0, [r5, #6]\n    mov r0, #8\n    ldrsh r2, [r5, r0]\n    sub r1, r2, #1\n    bmi _0222BBD8\n    strh r1, [r5, #8]\n    b _0222BBFC\n    cmp r2, #0\n    bne _0222BBFC\n    ldrb r1, [r5]\n    mov r2, #0xc\n    bic r1, r2\n    mov r2, #4\n    orr r1, r2\n    strb r1, [r5]\n    ldr r2, [r4, #8]\n    mov r1, #0x20\n    orr r1, r2\n    str r1, [r4, #8]\n    ldrsh r0, [r5, r0]\n    sub r0, r0, #1\n    strh r0, [r5, #8]\n    add r0, r7, #0\n    bl ov45_0222CA8C\n    mov r0, #0xa\n    ldrsh r1, [r5, r0]\n    sub r0, r1, #1\n    bmi _0222BC08\n    strh r0, [r5, #0xa]\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r1, #0\n    bne _0222BC36\n    add r0, r6, #0\n    bl ov45_0222C3A8\n    ldrb r0, [r5, #0xc]\n    cmp r0, #0\n    bne _0222BC1E\n    ldr r0, _0222BC38 ; =0x00000481\n    bl PlayBGM\n    ldrb r1, [r5]\n    mov r0, #0x10\n    orr r0, r1\n    strb r0, [r5]\n    ldr r1, [r4, #8]\n    mov r0, #0x40\n    orr r0, r1\n    str r0, [r4, #8]\n    mov r0, #0xa\n    ldrsh r0, [r5, r0]\n    sub r0, r0, #1\n    strh r0, [r5, #0xa]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222BC38: .word 0x00000481"
    );
    #endif
}

void ov45_0222BC3C(void) {
    /* Original at 0x0222BC3C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r2, [r0]\n    mov r1, #1\n    bic r2, r1\n    strb r2, [r0]\n    ldrb r2, [r0]\n    mov r1, #2\n    bic r2, r1\n    strb r2, [r0]\n    ldrb r2, [r0]\n    mov r1, #0xc\n    bic r2, r1\n    strb r2, [r0]\n    ldrb r2, [r0]\n    mov r1, #0x10\n    bic r2, r1\n    strb r2, [r0]\n    ldrb r2, [r0]\n    mov r1, #0x60\n    bic r2, r1\n    strb r2, [r0]\n    ldrb r2, [r0]\n    mov r1, #0x80\n    bic r2, r1\n    strb r2, [r0]\n    mov r1, #1\n    strb r1, [r0, #1]\n    mov r1, #7\n    strb r1, [r0, #2]\n    mov r1, #0xb\n    strb r1, [r0, #3]\n    sub r1, #0xc\n    strh r1, [r0, #4]\n    strh r1, [r0, #6]\n    strh r1, [r0, #8]\n    strh r1, [r0, #0xa]\n    bx lr"
    );
    #endif
}

void ov45_0222BC84(void) {
    /* Original at 0x0222BC84 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrb r0, [r0, #0xd]\n    cmp r0, #1\n    bne _0222BC96\n    mov r0, #7\n    mov r1, #0x2a\n    bl GF_SndHandleSetPlayerVolume\n    pop {r3, pc}\n    mov r0, #7\n    mov r1, #0x7f\n    bl GF_SndHandleSetPlayerVolume\n    pop {r3, pc}"
    );
    #endif
}

void ov45_0222BCA0(void) {
    /* Original at 0x0222BCA0 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xe1\n    lsl r1, r1, #2\n    strh r1, [r0]\n    bx lr"
    );
    #endif
}

void ov45_0222BCA8(void) {
    /* Original at 0x0222BCA8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    ldrsh r0, [r0, r1]\n    cmp r0, #0\n    ble _0222BCB2\n    mov r1, #1\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov45_0222BCB8(void) {
    /* Original at 0x0222BCB8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    ldrsh r1, [r0, r1]\n    cmp r1, #0\n    ble _0222BCC4\n    sub r1, r1, #1\n    strh r1, [r0]\n    bx lr"
    );
    #endif
}

void ov45_0222BCC8(void) {
    PlayerProfile_New();
}

void ov45_0222BCD8(void) {
    Heap_Free();
}

void ov45_0222BCE4(void) {
    /* Original at 0x0222BCE4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r7, #0\n    mov r1, #0x94\n    bl Heap_Alloc\n    add r6, r0, #0\n    add r0, r4, #0\n    add r0, #0x20\n    add r1, r6, #0\n    mov r2, #0x94\n    bl MIi_CpuCopyFast\n    add r4, #0x10\n    add r1, r6, #0\n    add r0, r4, #0\n    add r1, #8\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    ldr r1, [r5]\n    add r0, r6, #0\n    add r2, r7, #0\n    bl ov45_0222A844\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222BD24(void) {
    /* Original at 0x0222BD24 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    strb r1, [r0, #2]\n    bx lr"
    );
    #endif
}

void ov45_0222BD2C(void) {
    /* Original at 0x0222BD2C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #2]\n    bx lr"
    );
    #endif
}

void ov45_0222BD30(void) {
    /* Original at 0x0222BD30 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x14\n    mov r1, #0\n    strb r1, [r0]\n    add r0, r0, #1\n    sub r2, r2, #1\n    bne _0222BD34\n    bx lr"
    );
    #endif
}

void ov45_0222BD40(void) {
    memset();
}

void ov45_0222BD4C(void) {
    /* Original at 0x0222BD4C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    strh r1, [r0, #4]\n    strb r1, [r0, #6]\n    ldr r3, _0222BD58 ; =ov45_0222BE54\n    strb r1, [r0, #0xa]\n    bx r3\n    _0222BD58: .word ov45_0222BE54"
    );
    #endif
}

void ov45_0222BD5C(void) {
    ov45_0222BE54(0, 0, 4);
}

void ov45_0222BD74(void) {
    GF_AssertFail(0, 1);
}

void ov45_0222BD94(void) {
    GF_AssertFail(1);
}

void ov45_0222BDB0(void) {
    GF_AssertFail(1);
}

void ov45_0222BDCC(void) {
    GF_AssertFail();
}

void ov45_0222BDE8(void) {
    GF_AssertFail(0);
}

void ov45_0222BE00(void) {
    /* Original at 0x0222BE00 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r2, [r0, #6]\n    strh r2, [r0, #0x22]\n    strh r1, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void ov45_0222BE08(void) {
    ov45_0222EF4C(1, 2, 4);
}

void ov45_0222BE28(void) {
    ov45_0222EF4C(2, 4);
}

void ov45_0222BE48(void) {
    /* Original at 0x0222BE48 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    strh r1, [r0, #0x24]\n    mov r1, #0\n    strh r1, [r0, #0x26]\n    bx lr"
    );
    #endif
}

void ov45_0222BE54(void) {
    /* Original at 0x0222BE54 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    strh r1, [r0, #0x24]\n    strh r1, [r0, #0x26]\n    bx lr"
    );
    #endif
}

void ov45_0222BE5C(void) {
    /* Original at 0x0222BE5C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r1, [r0, #0x24]\n    cmp r1, #1\n    bne _0222BE72\n    mov r1, #0x26\n    ldrsh r1, [r0, r1]\n    add r2, r1, #1\n    mov r1, #0xe1\n    lsl r1, r1, #2\n    cmp r2, r1\n    bgt _0222BE72\n    strh r2, [r0, #0x26]\n    bx lr"
    );
    #endif
}

void ov45_0222BE74(void) {
    /* Original at 0x0222BE74 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r1, [r0, #0x24]\n    cmp r1, #0\n    bne _0222BE7E\n    mov r0, #1\n    bx lr\n    mov r1, #0x26\n    ldrsh r1, [r0, r1]\n    mov r0, #0xe1\n    lsl r0, r0, #2\n    cmp r1, r0\n    bge _0222BE8E\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov45_0222BE94(void) {
    /* Original at 0x0222BE94 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x26\n    ldrsh r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov45_0222BE9C(void) {
    /* Original at 0x0222BE9C */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    ldrb r0, [r1, #0x10]\n    str r1, [sp]\n    cmp r0, #2\n    bne _0222BF0E\n    mov r7, #0\n    add r4, r1, #0\n    add r5, r6, #0\n    ldr r0, [r4]\n    bl ov45_0222EC68\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0222BF0E\n    add r0, r6, #0\n    bl ov45_0222A578\n    add r1, r5, #0\n    ldr r2, _0222BF14 ; =0x00000528\n    add r1, #0xe8\n    ldr r1, [r1]\n    ldr r2, [r6, r2]\n    bl ov45_0222A844\n    add r7, r7, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r7, #2\n    blt _0222BEB0\n    add r0, r6, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    ldr r0, [r0]\n    bl ov45_0222EC68\n    add r1, sp, #4\n    strh r0, [r1, #8]\n    ldr r0, [sp]\n    ldr r0, [r0, #4]\n    bl ov45_0222EC68\n    add r1, sp, #4\n    strh r0, [r1, #0xa]\n    ldr r0, [r6, #4]\n    add r1, sp, #4\n    bl ov45_0222D940\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222BF14: .word 0x00000528"
    );
    #endif
}

void ov45_0222BF18(void) {
    /* Original at 0x0222BF18 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    ldrb r0, [r1, #0x10]\n    str r1, [sp]\n    cmp r0, #2\n    bne _0222BF90\n    mov r7, #0\n    add r4, r1, #0\n    add r5, r6, #0\n    ldr r0, [r4]\n    bl ov45_0222EC68\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0222BF90\n    add r0, r6, #0\n    bl ov45_0222A578\n    add r1, r5, #0\n    ldr r2, _0222BF94 ; =0x00000528\n    add r1, #0xe8\n    ldr r1, [r1]\n    ldr r2, [r6, r2]\n    bl ov45_0222A844\n    add r7, r7, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r7, #2\n    blt _0222BF2C\n    add r0, r6, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r0, #0xec\n    ldr r0, [r0]\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    ldr r0, [r0]\n    bl ov45_0222EC68\n    add r1, sp, #4\n    strh r0, [r1, #8]\n    ldr r0, [sp]\n    ldr r0, [r0, #4]\n    bl ov45_0222EC68\n    add r1, sp, #4\n    strh r0, [r1, #0xa]\n    ldr r0, [sp]\n    add r1, sp, #4\n    ldrb r0, [r0, #0x12]\n    str r0, [sp, #0x10]\n    ldr r0, [r6, #4]\n    bl ov45_0222D990\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0222BF94: .word 0x00000528"
    );
    #endif
}

void ov45_0222BF98(void) {
    /* Original at 0x0222BF98 */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r6, r0, #0\n    ldrb r0, [r1, #0x10]\n    str r1, [sp]\n    cmp r0, #4\n    bhi _0222BFAA\n    cmp r0, #0\n    bne _0222BFAC\n    b _0222C0C2\n    add r0, r1, #0\n    ldrb r0, [r0, #0x13]\n    add r5, sp, #0x30\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0222C010\n    add r0, r1, #0\n    mov r7, #0\n    str r0, [sp, #4]\n    add r4, r6, #0\n    ldr r0, [sp]\n    ldrb r0, [r0, #0x10]\n    cmp r7, r0\n    bge _0222BFFA\n    ldr r0, [sp, #4]\n    ldr r0, [r0]\n    bl ov45_0222EC68\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0222C0C2\n    add r0, r6, #0\n    bl ov45_0222A578\n    add r1, r4, #0\n    ldr r2, _0222C0C8 ; =0x00000528\n    add r1, #0xe8\n    ldr r1, [r1]\n    ldr r2, [r6, r2]\n    bl ov45_0222A844\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    str r0, [r5]\n    b _0222BFFE\n    mov r0, #0\n    str r0, [r5]\n    ldr r0, [sp, #4]\n    add r7, r7, #1\n    add r0, r0, #4\n    str r0, [sp, #4]\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r7, #4\n    blt _0222BFC2\n    b _0222C060\n    add r0, r1, #0\n    mov r7, #0\n    str r0, [sp, #8]\n    add r4, r6, #0\n    cmp r7, #0\n    bne _0222C04C\n    ldr r0, [sp, #8]\n    ldr r0, [r0]\n    bl ov45_0222EC68\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0222C0C2\n    add r0, r6, #0\n    bl ov45_0222A578\n    add r1, r4, #0\n    ldr r2, _0222C0C8 ; =0x00000528\n    add r1, #0xe8\n    ldr r1, [r1]\n    ldr r2, [r6, r2]\n    bl ov45_0222A844\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    str r0, [r5]\n    b _0222C050\n    mov r0, #0\n    str r0, [r5]\n    ldr r0, [sp, #8]\n    add r7, r7, #1\n    add r0, r0, #4\n    str r0, [sp, #8]\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r7, #4\n    blt _0222C018\n    ldr r0, [sp]\n    ldrb r0, [r0, #0x13]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x19\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    ldrb r0, [r0, #0x10]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x34]\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x38]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x3c]\n    str r0, [sp, #0x20]\n    ldr r0, [sp]\n    ldr r0, [r0]\n    bl ov45_0222EC68\n    add r1, sp, #0xc\n    strh r0, [r1, #0x18]\n    ldr r0, [sp]\n    ldr r0, [r0, #4]\n    bl ov45_0222EC68\n    add r1, sp, #0xc\n    strh r0, [r1, #0x1a]\n    ldr r0, [sp]\n    ldr r0, [r0, #8]\n    bl ov45_0222EC68\n    add r1, sp, #0xc\n    strh r0, [r1, #0x1c]\n    ldr r0, [sp]\n    ldr r0, [r0, #0xc]\n    bl ov45_0222EC68\n    add r1, sp, #0xc\n    strh r0, [r1, #0x1e]\n    ldr r0, [sp]\n    add r1, sp, #0xc\n    ldrb r0, [r0, #0x13]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    str r0, [sp, #0x2c]\n    ldr r0, [r6, #4]\n    bl ov45_0222D9EC\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222C0C8: .word 0x00000528"
    );
    #endif
}

void ov45_0222C0CC(void) {
    /* Original at 0x0222C0CC */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r5, r0, #0\n    ldrb r0, [r4, #0x10]\n    cmp r0, #8\n    bhi _0222C128\n    cmp r0, #0\n    beq _0222C128\n    ldr r0, [r4]\n    bl ov45_0222EC68\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0222C128\n    add r0, r5, #0\n    bl ov45_0222A578\n    add r1, r5, #0\n    ldr r2, _0222C12C ; =0x00000528\n    add r1, #0xe8\n    ldr r1, [r1]\n    ldr r2, [r5, r2]\n    bl ov45_0222A844\n    ldrb r0, [r4, #0x13]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x19\n    str r0, [sp]\n    ldrb r0, [r4, #0x10]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    bl ov45_0222EC68\n    add r1, sp, #0\n    strh r0, [r1, #0xc]\n    ldr r0, [r5, #4]\n    add r1, sp, #0\n    bl ov45_0222DA80\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0222C12C: .word 0x00000528"
    );
    #endif
}

void ov45_0222C130(void) {
    /* Original at 0x0222C130 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    str r0, [sp]\n    ldrb r0, [r1, #0x10]\n    str r1, [sp, #4]\n    cmp r0, #4\n    bhi _0222C1E2\n    cmp r0, #0\n    beq _0222C1E2\n    ldr r4, [sp]\n    mov r7, #0\n    add r6, r1, #0\n    add r5, sp, #0x24\n    ldr r0, [sp, #4]\n    ldrb r0, [r0, #0x10]\n    cmp r7, r0\n    bge _0222C182\n    ldr r0, [r6]\n    bl ov45_0222EC68\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0222C1E2\n    ldr r0, [sp]\n    bl ov45_0222A578\n    add r1, r4, #0\n    add r1, #0xe8\n    ldr r3, [sp]\n    ldr r2, _0222C1E8 ; =0x00000528\n    ldr r1, [r1]\n    ldr r2, [r3, r2]\n    bl ov45_0222A844\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    str r0, [r5]\n    b _0222C186\n    mov r0, #0\n    str r0, [r5]\n    add r7, r7, #1\n    add r6, r6, #4\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r7, #4\n    blt _0222C14A\n    ldr r0, [sp, #4]\n    ldrb r0, [r0, #0x10]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x24]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x28]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x2c]\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #4]\n    ldr r0, [r0]\n    bl ov45_0222EC68\n    add r1, sp, #8\n    strh r0, [r1, #0x14]\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #4]\n    bl ov45_0222EC68\n    add r1, sp, #8\n    strh r0, [r1, #0x16]\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #8]\n    bl ov45_0222EC68\n    add r1, sp, #8\n    strh r0, [r1, #0x18]\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #0xc]\n    bl ov45_0222EC68\n    add r1, sp, #8\n    strh r0, [r1, #0x1a]\n    ldr r0, [sp]\n    add r1, sp, #8\n    ldr r0, [r0, #4]\n    bl ov45_0222DAE0\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222C1E8: .word 0x00000528"
    );
    #endif
}

void ov45_0222C1EC(void) {
    /* Original at 0x0222C1EC */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    str r0, [sp]\n    ldrb r0, [r1, #0x10]\n    str r1, [sp, #4]\n    cmp r0, #4\n    bhi _0222C29E\n    cmp r0, #0\n    beq _0222C29E\n    ldr r4, [sp]\n    mov r7, #0\n    add r6, r1, #0\n    add r5, sp, #0x24\n    ldr r0, [sp, #4]\n    ldrb r0, [r0, #0x10]\n    cmp r7, r0\n    bge _0222C23E\n    ldr r0, [r6]\n    bl ov45_0222EC68\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0222C29E\n    ldr r0, [sp]\n    bl ov45_0222A578\n    add r1, r4, #0\n    add r1, #0xe8\n    ldr r3, [sp]\n    ldr r2, _0222C2A4 ; =0x00000528\n    ldr r1, [r1]\n    ldr r2, [r3, r2]\n    bl ov45_0222A844\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    str r0, [r5]\n    b _0222C242\n    mov r0, #0\n    str r0, [r5]\n    add r7, r7, #1\n    add r6, r6, #4\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r7, #4\n    blt _0222C206\n    ldr r0, [sp, #4]\n    ldrb r0, [r0, #0x10]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x24]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x28]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x2c]\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #4]\n    ldr r0, [r0]\n    bl ov45_0222EC68\n    add r1, sp, #8\n    strh r0, [r1, #0x14]\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #4]\n    bl ov45_0222EC68\n    add r1, sp, #8\n    strh r0, [r1, #0x16]\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #8]\n    bl ov45_0222EC68\n    add r1, sp, #8\n    strh r0, [r1, #0x18]\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #0xc]\n    bl ov45_0222EC68\n    add r1, sp, #8\n    strh r0, [r1, #0x1a]\n    ldr r0, [sp]\n    add r1, sp, #8\n    ldr r0, [r0, #4]\n    bl ov45_0222DB3C\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222C2A4: .word 0x00000528"
    );
    #endif
}

void ov45_0222C2A8(void) {
    /* Original at 0x0222C2A8 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    str r0, [sp]\n    ldrb r0, [r1, #0x10]\n    str r1, [sp, #4]\n    cmp r0, #4\n    bhi _0222C364\n    cmp r0, #0\n    beq _0222C364\n    ldr r4, [sp]\n    mov r7, #0\n    add r6, r1, #0\n    add r5, sp, #0x28\n    ldr r0, [sp, #4]\n    ldrb r0, [r0, #0x10]\n    cmp r7, r0\n    bge _0222C2FA\n    ldr r0, [r6]\n    bl ov45_0222EC68\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0222C364\n    ldr r0, [sp]\n    bl ov45_0222A578\n    add r1, r4, #0\n    add r1, #0xe8\n    ldr r3, [sp]\n    ldr r2, _0222C368 ; =0x00000528\n    ldr r1, [r1]\n    ldr r2, [r3, r2]\n    bl ov45_0222A844\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r0, [r0]\n    str r0, [r5]\n    b _0222C2FE\n    mov r0, #0\n    str r0, [r5]\n    add r7, r7, #1\n    add r6, r6, #4\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r7, #4\n    blt _0222C2C2\n    ldr r0, [sp, #4]\n    ldrb r0, [r0, #0x13]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x19\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    ldrb r0, [r0, #0x10]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x28]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x2c]\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x34]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #4]\n    ldr r0, [r0]\n    bl ov45_0222EC68\n    add r1, sp, #8\n    strh r0, [r1, #0x18]\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #4]\n    bl ov45_0222EC68\n    add r1, sp, #8\n    strh r0, [r1, #0x1a]\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #8]\n    bl ov45_0222EC68\n    add r1, sp, #8\n    strh r0, [r1, #0x1c]\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #0xc]\n    bl ov45_0222EC68\n    add r1, sp, #8\n    strh r0, [r1, #0x1e]\n    ldr r0, [sp]\n    add r1, sp, #8\n    ldr r0, [r0, #4]\n    bl ov45_0222DC64\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222C368: .word 0x00000528"
    );
    #endif
}

void ov45_0222C36C(void) {
    /* Original at 0x0222C36C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov45_0222C370(void) {
    ov45_0222DB98();
}

void ov45_0222C388(void) {
    /* Original at 0x0222C388 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #0x65\n    add r4, r0, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    mov r0, #0\n    add r4, #0x50\n    mvn r0, r0\n    add r1, r4, #0\n    mov r2, #0x6c\n    bl MIi_CpuClear32\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222C3A8(void) {
    /* Original at 0x0222C3A8 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov45_0222C3B0(void) {
    /* Original at 0x0222C3B0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _0222C3FA\n    ldr r3, _0222C400 ; =ov45_02254A3C\n    mov r2, #0\n    add r4, r0, #0\n    mov r1, #1\n    mov r6, #2\n    ldr r7, [r0, #4]\n    ldr r5, [r3]\n    cmp r7, r5\n    bne _0222C3CC\n    str r1, [r4, #0x2c]\n    ldr r5, [r4, #0x2c]\n    cmp r5, #1\n    bne _0222C3E4\n    ldr r5, [r4, #8]\n    add r7, r5, #1\n    mov r5, #0x4b\n    lsl r5, r5, #4\n    cmp r7, r5\n    bgt _0222C3E2\n    str r7, [r4, #8]\n    b _0222C3E4\n    str r6, [r4, #0x2c]\n    add r2, r2, #1\n    add r3, r3, #4\n    add r4, r4, #4\n    cmp r2, #9\n    blt _0222C3C2\n    ldr r1, [r0, #4]\n    add r2, r1, #1\n    ldr r1, _0222C404 ; =0x000010E0\n    cmp r2, r1\n    bgt _0222C3FA\n    str r2, [r0, #4]\n    pop {r4, r5, r6, r7}\n    bx lr\n    nop\n    _0222C400: .word ov45_02254A3C\n    _0222C404: .word 0x000010E0"
    );
    #endif
}

void ov45_0222C408(void) {
    /* Original at 0x0222C408 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    str r1, [sp]\n    add r7, r2, #0\n    bl ov45_0222C5B4\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0222C476\n    mov r5, #0\n    str r5, [sp, #4]\n    ldr r1, [sp, #4]\n    add r0, r6, #0\n    bl ov45_0222C4E4\n    cmp r0, #2\n    beq _0222C46A\n    mov r4, #0\n    add r0, r6, #0\n    add r1, r4, r5\n    add r2, r7, #0\n    bl ov45_0222C61C\n    cmp r0, #0\n    bne _0222C464\n    add r0, r6, #0\n    add r1, r4, r5\n    bl ov45_0222C4B4\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0222C464\n    ldr r0, [sp, #4]\n    mov r1, #0xc\n    mul r1, r0\n    add r1, r6, r1\n    lsl r0, r4, #2\n    add r1, r1, r0\n    ldr r0, [sp]\n    add sp, #8\n    str r0, [r1, #0x50]\n    add r0, r4, r5\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    cmp r4, #3\n    blt _0222C430\n    ldr r0, [sp, #4]\n    add r5, r5, #3\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #9\n    blt _0222C422\n    mov r0, #0\n    mvn r0, r0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222C480(void) {
    /* Original at 0x0222C480 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl ov45_0222C5B4\n    mov r1, #0\n    add r6, r0, #0\n    mvn r1, r1\n    cmp r6, r1\n    beq _0222C4B2\n    mov r1, #3\n    bl _u32_div_f\n    add r4, r0, #0\n    add r0, r6, #0\n    mov r1, #3\n    bl _u32_div_f\n    mov r2, #0xc\n    mul r2, r4\n    mov r0, #0\n    add r2, r5, r2\n    lsl r1, r1, #2\n    mvn r0, r0\n    add r1, r2, r1\n    str r0, [r1, #0x50]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222C4B4(void) {
    /* Original at 0x0222C4B4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x1b\n    blo _0222C4C2\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #3\n    bl _u32_div_f\n    add r6, r0, #0\n    add r0, r4, #0\n    mov r1, #3\n    bl _u32_div_f\n    mov r0, #0xc\n    mul r0, r6\n    add r2, r5, r0\n    lsl r0, r1, #2\n    add r0, r2, r0\n    ldr r0, [r0, #0x50]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222C4E4(void) {
    GF_AssertFail();
}

void ov45_0222C4FC(void) {
    GF_AssertFail();
}

void ov45_0222C514(void) {
    /* Original at 0x0222C514 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl ov45_0222C5B4\n    mov r1, #0\n    add r6, r0, #0\n    mvn r1, r1\n    cmp r6, r1\n    beq _0222C548\n    mov r1, #3\n    bl _u32_div_f\n    add r4, r0, #0\n    add r0, r6, #0\n    mov r1, #3\n    bl _u32_div_f\n    mov r2, #0xc\n    mul r2, r4\n    add r2, r5, r2\n    lsl r1, r1, #2\n    add r2, r2, r1\n    mov r1, #0x4a\n    mov r0, #1\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222C54C(void) {
    /* Original at 0x0222C54C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x1b\n    blo _0222C55A\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #3\n    bl _u32_div_f\n    add r6, r0, #0\n    add r0, r4, #0\n    mov r1, #3\n    bl _u32_div_f\n    mov r0, #0xc\n    mul r0, r6\n    add r2, r5, r0\n    lsl r0, r1, #2\n    add r1, r2, r0\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222C580(void) {
    /* Original at 0x0222C580 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x1b\n    blo _0222C58E\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #3\n    bl _u32_div_f\n    add r6, r0, #0\n    add r0, r4, #0\n    mov r1, #3\n    bl _u32_div_f\n    mov r2, #0xc\n    mul r2, r6\n    add r2, r5, r2\n    lsl r1, r1, #2\n    add r2, r2, r1\n    mov r1, #0x4a\n    mov r0, #0\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222C5B4(void) {
    /* Original at 0x0222C5B4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    mov r4, #0\n    add r3, r4, #0\n    add r5, r3, #0\n    add r6, r0, #0\n    ldr r2, [r6, #0x50]\n    cmp r1, r2\n    bne _0222C5CE\n    lsl r0, r4, #1\n    add r0, r4, r0\n    add r0, r5, r0\n    pop {r3, r4, r5, r6}\n    bx lr\n    add r5, r5, #1\n    add r6, r6, #4\n    cmp r5, #3\n    blt _0222C5BE\n    add r4, r4, #1\n    add r0, #0xc\n    cmp r4, #9\n    blt _0222C5BA\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void ov45_0222C5E8(void) {
    /* Original at 0x0222C5E8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0x1b\n    blo _0222C5F8\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #3\n    bl _u32_div_f\n    add r7, r0, #0\n    add r0, r4, #0\n    mov r1, #3\n    bl _u32_div_f\n    mov r2, #0xc\n    mul r2, r7\n    add r2, r5, r2\n    lsl r1, r1, #2\n    add r1, r2, r1\n    add r0, r6, #1\n    add r1, #0xbc\n    str r0, [r1]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222C61C(void) {
    /* Original at 0x0222C61C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0x1b\n    blo _0222C62C\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #3\n    bl _u32_div_f\n    add r7, r0, #0\n    add r0, r4, #0\n    mov r1, #3\n    bl _u32_div_f\n    mov r0, #0xc\n    mul r0, r7\n    add r2, r5, r0\n    lsl r0, r1, #2\n    add r0, r2, r0\n    add r0, #0xbc\n    ldr r0, [r0]\n    cmp r0, r6\n    bhi _0222C654\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222C658(void) {
    /* Original at 0x0222C658 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x1b\n    blo _0222C666\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #3\n    bl _u32_div_f\n    add r6, r0, #0\n    add r0, r4, #0\n    mov r1, #3\n    bl _u32_div_f\n    mov r0, #0xc\n    mul r0, r6\n    add r2, r5, r0\n    lsl r0, r1, #2\n    add r0, r2, r0\n    add r0, #0xbc\n    ldr r0, [r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222C688(void) {
    /* Original at 0x0222C688 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    str r1, [sp]\n    add r5, r3, #0\n    bl ov45_0222EC68\n    add r6, r0, #0\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r1, [r5]\n    add r0, r5, r0\n    bl ov45_0222BADC\n    cmp r0, #0\n    bne _0222C6AC\n    ldr r0, _0222C734 ; =0x0000052C\n    mov r1, #1\n    str r1, [r5, r0]\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov45_0222A920\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov45_0222AFF8\n    cmp r4, #1\n    bne _0222C6E2\n    mov r1, #0\n    mvn r1, r1\n    cmp r6, r1\n    beq _0222C6E2\n    ldr r1, [sp]\n    ldrh r1, [r1, #2]\n    cmp r1, #1\n    bne _0222C6E2\n    cmp r0, #1\n    beq _0222C6E2\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov45_0222B048\n    cmp r0, #0\n    bne _0222C6EE\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r2, #0\n    bl ov45_0222BE08\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r2, #1\n    bl ov45_0222BE08\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r5, r0\n    add r1, r6, #0\n    bl ov45_0222BD74\n    cmp r0, #0\n    bne _0222C70C\n    mov r1, #1\n    b _0222C70E\n    mov r1, #0\n    ldr r0, _0222C738 ; =0x000001CB\n    mov r2, #2\n    strb r1, [r5, r0]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    strh r6, [r5, r0]\n    add r1, r0, #2\n    strb r2, [r5, r1]\n    add r1, r0, #6\n    strb r2, [r5, r1]\n    add r1, r0, #3\n    sub r0, r0, #4\n    mov r2, #0\n    add r0, r5, r0\n    strb r2, [r5, r1]\n    bl ov45_0222BE48\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222C734: .word 0x0000052C\n    _0222C738: .word 0x000001CB"
    );
    #endif
}

void ov45_0222C73C(void) {
    /* Original at 0x0222C73C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r3, #0\n    bl ov45_0222EC68\n    ldr r2, _0222C790 ; =0x000001CA\n    add r1, r0, #0\n    ldrb r0, [r4, r2]\n    cmp r0, #0\n    beq _0222C78E\n    sub r0, r2, #6\n    ldrh r0, [r4, r0]\n    cmp r0, r1\n    bne _0222C78E\n    ldrh r0, [r5]\n    cmp r0, #1\n    bne _0222C77C\n    sub r2, #0xa\n    add r0, r4, r2\n    bl ov45_0222BD74\n    cmp r0, #0\n    bne _0222C76E\n    mov r1, #1\n    b _0222C770\n    mov r1, #0\n    ldr r0, _0222C794 ; =0x000001CB\n    strb r1, [r4, r0]\n    ldr r0, _0222C798 ; =0x000001C6\n    mov r1, #2\n    strb r1, [r4, r0]\n    b _0222C784\n    sub r2, #0xa\n    add r0, r4, r2\n    bl ov45_0222BD4C\n    mov r0, #7\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl ov45_0222BE54\n    pop {r3, r4, r5, pc}\n    _0222C790: .word 0x000001CA\n    _0222C794: .word 0x000001CB\n    _0222C798: .word 0x000001C6"
    );
    #endif
}

void ov45_0222C79C(void) {
    /* Original at 0x0222C79C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r1, _0222C7F8 ; =0x000001CA\n    add r4, r3, #0\n    ldrb r1, [r4, r1]\n    cmp r1, #0\n    beq _0222C7F4\n    bl ov45_0222EC68\n    mov r1, #0x71\n    lsl r1, r1, #2\n    ldrh r2, [r4, r1]\n    cmp r2, r0\n    bne _0222C7E4\n    ldrh r0, [r5, #2]\n    ldr r2, _0222C7FC ; =0x0000FFFE\n    add r2, r0, r2\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    cmp r2, #1\n    bhi _0222C7DA\n    add r2, r1, #2\n    strb r0, [r4, r2]\n    ldrh r2, [r5]\n    add r0, r1, #4\n    strh r2, [r4, r0]\n    sub r0, r1, #4\n    add r0, r4, r0\n    bl ov45_0222BE54\n    pop {r3, r4, r5, pc}\n    sub r0, r1, #4\n    add r0, r4, r0\n    bl ov45_0222BD5C\n    pop {r3, r4, r5, pc}\n    mov r2, #0\n    mvn r2, r2\n    cmp r0, r2\n    bne _0222C7F4\n    sub r0, r1, #4\n    add r0, r4, r0\n    bl ov45_0222BD5C\n    pop {r3, r4, r5, pc}\n    nop\n    _0222C7F8: .word 0x000001CA\n    _0222C7FC: .word 0x0000FFFE"
    );
    #endif
}

void ov45_0222C800(void) {
    /* Original at 0x0222C800 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0222C824 ; =0x000001C6\n    add r4, r3, #0\n    ldrb r1, [r4, r1]\n    cmp r1, #0\n    beq _0222C822\n    bl ov45_0222EC68\n    mov r1, #0x71\n    lsl r1, r1, #2\n    ldrh r2, [r4, r1]\n    cmp r2, r0\n    bne _0222C822\n    sub r0, r1, #4\n    add r0, r4, r0\n    bl ov45_0222BD4C\n    pop {r4, pc}\n    _0222C824: .word 0x000001C6"
    );
    #endif
}

void ov45_0222C828(void) {
    /* Original at 0x0222C828 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrb r2, [r1, #0x11]\n    add r0, r3, #0\n    lsl r3, r2, #2\n    ldr r2, _0222C838 ; =ov45_02254A60\n    ldr r2, [r2, r3]\n    blx r2\n    pop {r3, pc}\n    _0222C838: .word ov45_02254A60"
    );
    #endif
}

void ov45_0222C83C(void) {
    ov45_0222EC68(0x7a, 0, 1);
}

void ov45_0222C858(void) {
    /* Original at 0x0222C858 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r3, #0\n    bl ov45_0222EC68\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _0222C888\n    mov r7, #0x83\n    mov r4, #0\n    lsl r7, r7, #2\n    add r0, r5, r7\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov45_0222C408\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0222C888\n    add r4, r4, #1\n    cmp r4, #3\n    blt _0222C870\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222C88C(void) {
    /* Original at 0x0222C88C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r3, #0\n    bl ov45_0222EC68\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0222C8A8\n    mov r0, #0x83\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov45_0222C514\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222C8AC(void) {
    memset(0x64, 0, 0, 0x20);
}

void ov45_0222C8C8(void) {
    /* Original at 0x0222C8C8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    cmp r4, #0x14\n    blo _0222C8D8\n    bl GF_AssertFail\n    cmp r6, #0x1b\n    blo _0222C8E0\n    bl GF_AssertFail\n    add r7, r5, #0\n    add r7, #0xc\n    ldrb r0, [r7, r4]\n    cmp r0, #0\n    bne _0222C8FC\n    add r0, r6, #0\n    mov r1, #3\n    bl _u32_div_f\n    ldrb r1, [r5, r0]\n    asr r1, r1, #1\n    strb r1, [r5, r0]\n    mov r0, #1\n    strb r0, [r7, r4]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222C900(void) {
    /* Original at 0x0222C900 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r5, #0\n    add r4, r0, #0\n    add r1, r5, #0\n    ldrb r0, [r4, r1]\n    add r1, r1, #1\n    add r5, r5, r0\n    cmp r1, #9\n    blt _0222C908\n    bl MTRandom\n    add r1, r5, #0\n    bl _u32_div_f\n    mov r3, #0\n    add r0, r3, #0\n    cmp r3, r1\n    bhi _0222C932\n    ldrb r2, [r4, r0]\n    add r2, r3, r2\n    cmp r2, r1\n    bls _0222C932\n    lsl r1, r0, #1\n    add r0, r0, r1\n    pop {r3, r4, r5, pc}\n    ldrb r2, [r4, r0]\n    add r0, r0, #1\n    add r3, r3, r2\n    cmp r0, #9\n    blt _0222C920\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222C944(void) {
    GF_AssertFail();
}

void ov45_0222C95C(void) {
    GF_AssertFail(0);
}

void ov45_0222C978(void) {
    /* Original at 0x0222C978 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #0\n    mov r2, #0xb8\n    add r5, r0, #0\n    bl MI_CpuFill8\n    add r0, r4, #0\n    bl WallpaperPasswordBank_Create\n    add r5, #0xb4\n    str r0, [r5]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222C994(void) {
    WallpaperPasswordBank_Delete();
}

void ov45_0222C9A0(void) {
    /* Original at 0x0222C9A0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r4, #0x14\n    blo _0222C9B2\n    bl GF_AssertFail\n    cmp r4, #0x14\n    bhs _0222C9CE\n    strb r6, [r5, r4]\n    cmp r6, #1\n    bne _0222C9CE\n    add r0, r5, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    add r5, #0x14\n    lsl r2, r4, #3\n    add r1, r7, #0\n    add r2, r5, r2\n    bl ov45_0222CA10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222C9D0(void) {
    GF_AssertFail(0);
}

void ov45_0222C9EC(void) {
    /* Original at 0x0222C9EC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x14\n    blo _0222C9FA\n    bl GF_AssertFail\n    cmp r4, #0x14\n    bhs _0222CA0C\n    ldrb r0, [r5, r4]\n    cmp r0, #0\n    beq _0222CA0C\n    add r5, #0x14\n    lsl r0, r4, #3\n    add r0, r5, r0\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222CA10(void) {
    /* Original at 0x0222CA10 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r6, r0, #0\n    add r5, r2, #0\n    bl WallpaperPasswordBank_GetCount\n    add r7, r0, #0\n    str r4, [sp, #8]\n    add r0, sp, #8\n    ldrb r4, [r0]\n    ldrb r0, [r0, #3]\n    add r1, r7, #0\n    str r0, [sp]\n    add r0, r0, r4\n    bl _u32_div_f\n    add r0, r6, #0\n    bl WallpaperPasswordBank_GetWordAtIndex\n    strh r0, [r5]\n    add r0, sp, #8\n    ldrb r0, [r0, #1]\n    add r1, r7, #0\n    str r0, [sp, #4]\n    add r0, r4, r0\n    bl _u32_div_f\n    add r0, r6, #0\n    bl WallpaperPasswordBank_GetWordAtIndex\n    strh r0, [r5, #2]\n    add r0, sp, #8\n    ldrb r4, [r0, #2]\n    ldr r0, [sp, #4]\n    add r1, r7, #0\n    add r0, r0, r4\n    bl _u32_div_f\n    add r0, r6, #0\n    bl WallpaperPasswordBank_GetWordAtIndex\n    strh r0, [r5, #4]\n    ldr r0, [sp]\n    add r1, r7, #0\n    add r0, r4, r0\n    bl _u32_div_f\n    add r0, r6, #0\n    bl WallpaperPasswordBank_GetWordAtIndex\n    strh r0, [r5, #6]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222CA7C(void) {
    /* Original at 0x0222CA7C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    str r3, [r0]\n    sub r2, r2, r1\n    mov r1, #0x1e\n    str r3, [r0, #0xc]\n    mul r1, r2\n    str r1, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov45_0222CA8C(void) {
    /* Original at 0x0222CA8C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    str r1, [r0]\n    mov r1, #0\n    str r1, [r0, #0xc]\n    ldr r3, _0222CA9C ; =ov45_0222ECB8\n    add r0, r0, #4\n    bx r3\n    nop\n    _0222CA9C: .word ov45_0222ECB8"
    );
    #endif
}

void ov45_0222CAA0(void) {
    /* Original at 0x0222CAA0 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0222CB32\n    add r0, sp, #0\n    bl ov45_0222ECB8\n    ldr r3, [sp]\n    ldr r0, [r4, #4]\n    ldr r1, [sp, #4]\n    ldr r2, [r4, #8]\n    sub r0, r3, r0\n    sbc r1, r2\n    mov r2, #0x1e\n    mov r3, #0\n    bl _ll_mul\n    ldr r2, [r4, #0xc]\n    asr r3, r2, #0x1f\n    sub r2, r2, r0\n    sbc r3, r1\n    bge _0222CAD2\n    str r0, [r4, #0xc]\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    cmp r1, r0\n    bge _0222CB12\n    add r0, r1, #1\n    str r0, [r4, #0xc]\n    ldr r1, [r4, #0x10]\n    lsl r0, r0, #8\n    bl _s32_div_f\n    mov r2, #0\n    ldr r5, _0222CB38 ; =_02254A28\n    add r3, r2, #0\n    ldrh r1, [r5, #2]\n    add r2, r2, r1\n    cmp r2, r0\n    blo _0222CB08\n    ldr r0, _0222CB38 ; =_02254A28\n    lsl r1, r3, #2\n    ldrh r1, [r0, r1]\n    ldr r0, [r4, #0x14]\n    cmp r0, r1\n    beq _0222CB2C\n    str r1, [r4, #0x14]\n    mov r0, #0\n    str r0, [r4, #0x18]\n    b _0222CB2C\n    add r3, r3, #1\n    add r5, r5, #4\n    cmp r3, #5\n    blo _0222CAEC\n    b _0222CB2C\n    ldr r0, [r4, #0x14]\n    cmp r0, #5\n    beq _0222CB20\n    mov r0, #5\n    str r0, [r4, #0x14]\n    mov r0, #0\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #0x18]\n    cmp r0, #0x78\n    blo _0222CB2C\n    mov r0, #0\n    str r0, [r4, #0x14]\n    str r0, [r4]\n    ldr r0, [r4, #0x18]\n    add r0, r0, #1\n    str r0, [r4, #0x18]\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _0222CB38: .word _02254A28"
    );
    #endif
}

void ov45_0222CB3C(void) {
    /* Original at 0x0222CB3C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x18]\n    bx lr"
    );
    #endif
}

void ov45_0222CB40(void) {
    /* Original at 0x0222CB40 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void ov45_0222CB44(void) {
    /* Original at 0x0222CB44 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r4, #0x18\n    add r3, r4, #0\n    mov r5, #0\n    add r6, r0, #0\n    sub r3, #0x19\n    add r2, r0, r5\n    add r2, #0x34\n    strb r4, [r2]\n    add r5, r5, #1\n    stmia r6!, {r3}\n    cmp r5, #0xd\n    blt _0222CB50\n    add r2, r0, #0\n    mov r3, #0\n    add r2, #0x41\n    strb r3, [r2]\n    add r2, r0, #0\n    add r2, #0x42\n    strb r3, [r2]\n    str r1, [r0, #0x44]\n    bl ov45_0222CCA4\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222CB74(void) {
    /* Original at 0x0222CB74 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ov45_0222CCB8\n    add r0, r5, #0\n    add r0, #0x42\n    ldrb r0, [r0]\n    mov r1, #0xd\n    add r0, r0, #1\n    bl _s32_div_f\n    add r0, r5, #0\n    add r0, #0x41\n    ldrb r0, [r0]\n    cmp r1, r0\n    bne _0222CB9E\n    add r0, r5, #0\n    bl ov45_0222CC00\n    add r0, r5, #0\n    add r0, #0x42\n    ldrb r0, [r0]\n    mov r1, #0xd\n    add r0, r5, r0\n    add r0, #0x34\n    strb r4, [r0]\n    add r0, r5, #0\n    add r0, #0x42\n    ldrb r0, [r0]\n    lsl r0, r0, #2\n    str r6, [r5, r0]\n    add r0, r5, #0\n    add r0, #0x42\n    ldrb r0, [r0]\n    add r0, r0, #1\n    bl _s32_div_f\n    add r0, r5, #0\n    add r0, #0x42\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov45_0222CCA4\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222CBD0(void) {
    /* Original at 0x0222CBD0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    mov r6, #0\n    bl ov45_0222CCB8\n    add r2, r6, #0\n    add r3, r7, #0\n    mov r0, #1\n    ldr r1, [r3]\n    cmp r5, r1\n    bne _0222CBEE\n    str r4, [r3]\n    add r6, r0, #0\n    add r2, r2, #1\n    add r3, r3, #4\n    cmp r2, #0xd\n    blt _0222CBE4\n    add r0, r7, #0\n    bl ov45_0222CCA4\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222CC00(void) {
    /* Original at 0x0222CC00 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov45_0222CCB8\n    add r0, r5, #0\n    add r0, #0x41\n    ldrb r2, [r0]\n    add r0, r5, #0\n    add r0, #0x42\n    ldrb r0, [r0]\n    cmp r0, r2\n    bne _0222CC1C\n    mov r0, #0x18\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r0, #0x34\n    ldrb r4, [r0, r2]\n    mov r1, #0x18\n    strb r1, [r0, r2]\n    add r0, r5, #0\n    add r0, #0x42\n    ldrb r0, [r0]\n    sub r1, #0x19\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    add r0, #0x41\n    ldrb r0, [r0]\n    mov r1, #0xd\n    add r0, r0, #1\n    bl _s32_div_f\n    add r0, r5, #0\n    add r0, #0x41\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov45_0222CCA4\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222CC50(void) {
    /* Original at 0x0222CC50 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0xc\n    blo _0222CC5E\n    bl GF_AssertFail\n    add r0, r5, #0\n    bl ov45_0222CCB8\n    add r0, r5, #0\n    add r0, #0x42\n    ldrb r1, [r0]\n    add r0, r4, #1\n    sub r0, r1, r0\n    bpl _0222CC72\n    add r0, #0xd\n    add r0, r5, r0\n    add r0, #0x34\n    ldrb r0, [r0]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222CC7C(void) {
    /* Original at 0x0222CC7C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0xc\n    blo _0222CC8A\n    bl GF_AssertFail\n    add r0, r5, #0\n    bl ov45_0222CCB8\n    add r0, r5, #0\n    add r0, #0x42\n    ldrb r1, [r0]\n    add r0, r4, #1\n    sub r0, r1, r0\n    bpl _0222CC9E\n    add r0, #0xd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222CCA4(void) {
    SaveArray_CalcCRC16(0x44);
}

void ov45_0222CCB8(void) {
    /* Original at 0x0222CCB8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x44]\n    add r1, r4, #0\n    mov r2, #0x44\n    bl SaveArray_CalcCRC16\n    add r1, r4, #0\n    add r1, #0x48\n    ldrh r1, [r1]\n    cmp r0, r1\n    beq _0222CCDA\n    bl GF_AssertFail\n    mov r0, #1\n    add r4, #0x4a\n    strh r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222CCDC(void) {
    /* Original at 0x0222CCDC */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x4a\n    ldrh r0, [r0]\n    bx lr"
    );
    #endif
}

void ov45_0222CCE4(void) {
    /* Original at 0x0222CCE4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0222CD00 ; =ov45_02254A84\n    mov r2, #0\n    ldrh r1, [r3]\n    cmp r0, r1\n    bne _0222CCF2\n    add r0, r2, #0\n    bx lr\n    add r2, r2, #1\n    add r3, r3, #4\n    cmp r2, #0x10\n    blt _0222CCE8\n    mov r0, #0x10\n    bx lr\n    nop\n    _0222CD00: .word ov45_02254A84"
    );
    #endif
}

void ov45_0222CD04(void) {
    /* Original at 0x0222CD04 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0x10\n    bhs _0222CD10\n    lsl r1, r0, #2\n    ldr r0, _0222CD14 ; =ov45_02254A84\n    ldrh r0, [r0, r1]\n    bx lr\n    ldr r0, _0222CD18 ; =0x0000FFFF\n    bx lr\n    _0222CD14: .word ov45_02254A84\n    _0222CD18: .word 0x0000FFFF"
    );
    #endif
}

void ov45_0222CD1C(void) {
    /* Original at 0x0222CD1C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r6, [sp, #0x20]\n    add r5, r0, #0\n    add r7, r1, #0\n    add r0, r6, #0\n    mov r1, #0x48\n    str r2, [sp]\n    str r3, [sp, #4]\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x48\n    add r4, r0, #0\n    bl memset\n    ldr r0, [sp, #4]\n    str r0, [r4, #0x3c]\n    ldr r0, [sp]\n    str r7, [r4, #0x40]\n    str r0, [r4, #0x44]\n    add r0, r4, #0\n    add r0, #0x39\n    strb r5, [r0]\n    strh r6, [r4, #0x3a]\n    mov r5, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov45_0222CDE4\n    add r5, r5, #1\n    cmp r5, #0xd\n    blt _0222CD50\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222CD68(void) {
    /* Original at 0x0222CD68 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov45_0222CE0C\n    add r4, r4, #1\n    cmp r4, #0xd\n    blt _0222CD6E\n    add r0, r5, #0\n    bl Heap_Free\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222CD84(void) {
    ov45_0222CE2C();
}

void ov45_0222CD90(void) {
    /* Original at 0x0222CD90 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r5, #0\n    cmp r0, #0\n    beq _0222CDBA\n    bl OverlayManager_Run\n    cmp r0, #0\n    beq _0222CDBA\n    ldr r0, [r4]\n    bl OverlayManager_Delete\n    add r0, r5, #0\n    str r0, [r4]\n    add r0, r4, #0\n    add r4, #0x38\n    ldrb r1, [r4]\n    bl ov45_0222CE54\n    add r5, r0, #0\n    add r0, r5, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222CDC0(void) {
    /* Original at 0x0222CDC0 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov45_0222CDC4(void) {
    /* Original at 0x0222CDC4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    add r6, r2, #0\n    cmp r0, #0\n    beq _0222CDD6\n    bl GF_AssertFail\n    ldrh r2, [r5, #0x3a]\n    ldr r1, [r4]\n    add r0, r6, #0\n    bl OverlayManager_New\n    str r0, [r5]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222CDE4(void) {
    /* Original at 0x0222CDE4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0xd\n    blo _0222CDF4\n    bl GF_AssertFail\n    lsl r3, r4, #2\n    add r1, r5, #4\n    ldr r4, _0222CE08 ; =ov45_02254E88\n    add r1, r1, r3\n    ldr r3, [r4, r3]\n    add r0, r5, #0\n    add r2, r6, #0\n    blx r3\n    pop {r4, r5, r6, pc}\n    nop\n    _0222CE08: .word ov45_02254E88"
    );
    #endif
}

void ov45_0222CE0C(void) {
    GF_AssertFail();
}

void ov45_0222CE2C(void) {
    /* Original at 0x0222CE2C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0xd\n    blo _0222CE3A\n    bl GF_AssertFail\n    ldr r2, _0222CE50 ; =ov45_02254E54\n    lsl r3, r4, #2\n    add r1, r5, #4\n    ldr r2, [r2, r3]\n    add r0, r5, #0\n    add r1, r1, r3\n    blx r2\n    add r5, #0x38\n    strb r4, [r5]\n    pop {r3, r4, r5, pc}\n    nop\n    _0222CE50: .word ov45_02254E54"
    );
    #endif
}

void ov45_0222CE54(void) {
    /* Original at 0x0222CE54 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    cmp r5, #0xd\n    blo _0222CE62\n    bl GF_AssertFail\n    ldr r2, _0222CE74 ; =ov45_02254EBC\n    lsl r3, r5, #2\n    add r1, r4, #4\n    ldr r2, [r2, r3]\n    add r0, r4, #0\n    add r1, r1, r3\n    blx r2\n    pop {r3, r4, r5, pc}\n    nop\n    _0222CE74: .word ov45_02254EBC"
    );
    #endif
}

void ov45_0222CE78(void) {
    PlayerProfile_New(0);
}

void ov45_0222CE94(void) {
    Heap_Free(0);
}

void ov45_0222CEB0(void) {
    /* Original at 0x0222CEB0 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    add r6, r0, #0\n    add r0, r7, #0\n    str r2, [sp]\n    bl ov45_0222A5C0\n    bl ov45_0222AAC8\n    add r1, r6, #0\n    str r0, [r6]\n    add r0, r7, #0\n    add r1, #8\n    bl ov45_0222AB38\n    add r0, r7, #0\n    add r1, r6, #4\n    bl ov45_0222A498\n    str r7, [r6, #0x30]\n    mov r4, #0\n    str r4, [r6, #0x1c]\n    add r5, r6, #0\n    add r1, r6, r4\n    ldrb r1, [r1, #4]\n    add r0, r7, #0\n    bl ov45_0222A578\n    cmp r0, #0\n    beq _0222CEF4\n    ldr r1, [r5, #0x20]\n    ldr r2, [sp]\n    bl ov45_0222A844\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0222CEDE\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222CF00(void) {
    /* Original at 0x0222CF00 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    add r0, r2, #0\n    mov r1, #0x20\n    bl Heap_Alloc\n    str r0, [r5]\n    mov r1, #0\n    mov r2, #0x20\n    bl memset\n    ldr r1, [r5]\n    ldr r0, [r4, #0x40]\n    str r0, [r1]\n    ldr r0, [r4, #0x3c]\n    str r0, [r1, #0x1c]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222CF24(void) {
    /* Original at 0x0222CF24 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    bne _0222CF32\n    bl GF_AssertFail\n    ldr r0, [r4]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222CF40(void) {
    /* Original at 0x0222CF40 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    ldr r4, [r6]\n    ldr r0, [r5, #0x3c]\n    bl ov45_0222AD2C\n    str r0, [r4, #4]\n    ldr r0, [r5, #0x3c]\n    bl ov45_0222AD3C\n    str r0, [r4, #8]\n    ldr r2, _0222CF64 ; =ov45_02254B94\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov45_0222CDC4\n    pop {r4, r5, r6, pc}\n    _0222CF64: .word ov45_02254B94"
    );
    #endif
}

void ov45_0222CF68(void) {
    /* Original at 0x0222CF68 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, [r1]\n    ldr r1, [r1, #0x18]\n    cmp r1, #0xa\n    bhi _0222CFEC\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0222CF7E: ; jump table\n    mov r1, #9\n    bl ov45_0222CE2C\n    b _0222CFF0\n    mov r1, #1\n    bl ov45_0222CE2C\n    b _0222CFF0\n    mov r1, #2\n    bl ov45_0222CE2C\n    b _0222CFF0\n    mov r1, #3\n    bl ov45_0222CE2C\n    b _0222CFF0\n    mov r1, #4\n    bl ov45_0222CE2C\n    b _0222CFF0\n    mov r1, #6\n    bl ov45_0222CE2C\n    b _0222CFF0\n    mov r1, #7\n    bl ov45_0222CE2C\n    b _0222CFF0\n    mov r1, #8\n    bl ov45_0222CE2C\n    b _0222CFF0\n    mov r1, #0xa\n    bl ov45_0222CE2C\n    b _0222CFF0\n    mov r1, #0xb\n    bl ov45_0222CE2C\n    b _0222CFF0\n    mov r1, #0xc\n    bl ov45_0222CE2C\n    b _0222CFF0\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov45_0222CFF4(void) {
    /* Original at 0x0222CFF4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r2, #0\n    mov r1, #0x10\n    bl Heap_Alloc\n    str r0, [r4]\n    mov r2, #0x10\n    mov r1, #0\n    strb r1, [r0]\n    add r0, r0, #1\n    sub r2, r2, #1\n    bne _0222D008\n    ldr r1, [r4]\n    ldr r0, [r5, #0x40]\n    str r0, [r1, #4]\n    ldr r0, [r5, #0x3c]\n    str r0, [r1, #0xc]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222D01C(void) {
    Heap_Free();
}

void ov45_0222D028(void) {
    /* Original at 0x0222D028 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    ldr r4, [r6]\n    ldr r0, [r5, #0x3c]\n    bl ov45_0222A214\n    str r0, [r4]\n    ldr r0, [r5, #0x3c]\n    bl ov45_0222A22C\n    ldr r0, [r0]\n    ldr r2, _0222D050 ; =ov45_02254B84\n    str r0, [r4, #8]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov45_0222CDC4\n    pop {r4, r5, r6, pc}\n    nop\n    _0222D050: .word ov45_02254B84"
    );
    #endif
}

void ov45_0222D054(void) {
    /* Original at 0x0222D054 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x3c]\n    bl ov45_0222A33C\n    cmp r0, #0\n    beq _0222D06C\n    add r0, r4, #0\n    mov r1, #0xa\n    bl ov45_0222CE2C\n    b _0222D074\n    add r0, r4, #0\n    mov r1, #0\n    bl ov45_0222CE2C\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222D078(void) {
    /* Original at 0x0222D078 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    add r0, r2, #0\n    mov r1, #0xc\n    bl Heap_Alloc\n    str r0, [r5]\n    mov r1, #0\n    strb r1, [r0]\n    strb r1, [r0, #1]\n    strb r1, [r0, #2]\n    strb r1, [r0, #3]\n    strb r1, [r0, #4]\n    strb r1, [r0, #5]\n    strb r1, [r0, #6]\n    strb r1, [r0, #7]\n    strb r1, [r0, #8]\n    strb r1, [r0, #9]\n    strb r1, [r0, #0xa]\n    strb r1, [r0, #0xb]\n    ldr r5, [r5]\n    ldr r0, [r4, #0x3c]\n    bl ov45_0222A210\n    str r0, [r5]\n    ldr r0, [r4, #0x3c]\n    bl ov45_0222A22C\n    str r0, [r5, #4]\n    ldr r0, [r4, #0x3c]\n    str r0, [r5, #8]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222D0BC(void) {
    Heap_Free();
}

void ov45_0222D0C8(void) {
    /* Original at 0x0222D0C8 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0222D0D0 ; =ov45_0222CDC4\n    ldr r2, _0222D0D4 ; =ov45_02254B74\n    bx r3\n    nop\n    _0222D0D0: .word ov45_0222CDC4\n    _0222D0D4: .word ov45_02254B74"
    );
    #endif
}

void ov45_0222D0D8(void) {
    /* Original at 0x0222D0D8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x3c]\n    bl ov45_0222A33C\n    cmp r0, #0\n    beq _0222D0F0\n    add r0, r4, #0\n    mov r1, #0xa\n    bl ov45_0222CE2C\n    b _0222D0F8\n    add r0, r4, #0\n    mov r1, #0\n    bl ov45_0222CE2C\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222D0FC(void) {
    /* Original at 0x0222D0FC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r2, #0\n    mov r1, #0x14\n    bl Heap_Alloc\n    str r0, [r4]\n    mov r2, #0x14\n    mov r1, #0\n    strb r1, [r0]\n    add r0, r0, #1\n    sub r2, r2, #1\n    bne _0222D110\n    ldr r1, [r4]\n    ldr r0, [r5, #0x40]\n    str r0, [r1]\n    ldr r0, [r5, #0x3c]\n    str r0, [r1, #4]\n    add r0, r5, #0\n    add r0, #0x39\n    ldrb r0, [r0]\n    str r0, [r1, #8]\n    ldr r0, [r5, #0x44]\n    str r0, [r1, #0xc]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222D130(void) {
    Heap_Free();
}

void ov45_0222D13C(void) {
    /* Original at 0x0222D13C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0222D144 ; =ov45_0222CDC4\n    ldr r2, _0222D148 ; =ov45_02254B64\n    bx r3\n    nop\n    _0222D144: .word ov45_0222CDC4\n    _0222D148: .word ov45_02254B64"
    );
    #endif
}

void ov45_0222D14C(void) {
    ov45_0222CE2C(0, 1, 0);
}

void ov45_0222D164(void) {
    /* Original at 0x0222D164 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r6, #0\n    mov r1, #0x3c\n    bl Heap_Alloc\n    str r0, [r4]\n    mov r1, #0\n    mov r2, #0x3c\n    bl memset\n    ldr r0, [r4]\n    mov r2, #0\n    add r1, r0, #0\n    add r1, #0x38\n    strb r2, [r1]\n    add r1, r0, #0\n    mov r2, #1\n    add r1, #0x39\n    strb r2, [r1]\n    ldr r1, [r5, #0x40]\n    str r1, [r0, #0x34]\n    add r1, r6, #0\n    bl ov45_0222CE78\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222D19C(void) {
    /* Original at 0x0222D19C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl ov45_0222CE94\n    ldr r0, [r4]\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222D1B0(void) {
    /* Original at 0x0222D1B0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, _0222D1D4 ; =FS_OVERLAY_ID(OVY_90)\n    mov r1, #2\n    bl HandleLoadOverlay\n    ldrh r2, [r5, #0x3a]\n    ldr r0, [r4]\n    ldr r1, [r5, #0x3c]\n    bl ov45_0222CEB0\n    ldr r2, _0222D1D8 ; =ov45_02254B54\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov45_0222CDC4\n    pop {r3, r4, r5, pc}\n    _0222D1D4: .word FS_OVERLAY_ID(OVY_90)\n    _0222D1D8: .word ov45_02254B54"
    );
    #endif
}

void ov45_0222D1DC(void) {
    /* Original at 0x0222D1DC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _0222D208 ; =FS_OVERLAY_ID(OVY_90)\n    add r5, r1, #0\n    bl UnloadOverlayByID\n    ldr r5, [r5]\n    ldr r0, [r4, #0x3c]\n    ldr r1, [r5, #0x1c]\n    bl ov45_0222A430\n    ldr r0, [r4, #0x3c]\n    ldr r1, [r5]\n    bl ov45_0222A72C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov45_0222CE2C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222D208: .word FS_OVERLAY_ID(OVY_90)"
    );
    #endif
}

void ov45_0222D20C(void) {
    /* Original at 0x0222D20C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r6, #0\n    mov r1, #0x40\n    bl Heap_Alloc\n    str r0, [r4]\n    mov r1, #0\n    mov r2, #0x40\n    bl memset\n    ldr r0, [r4]\n    mov r1, #0\n    str r1, [r0, #0x3c]\n    mov r1, #1\n    str r1, [r0, #0x38]\n    ldr r1, [r5, #0x40]\n    str r1, [r0, #0x34]\n    add r1, r6, #0\n    bl ov45_0222CE78\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222D23C(void) {
    /* Original at 0x0222D23C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl ov45_0222CE94\n    ldr r0, [r4]\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222D250(void) {
    /* Original at 0x0222D250 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, _0222D274 ; =FS_OVERLAY_ID(OVY_90)\n    mov r1, #2\n    bl HandleLoadOverlay\n    ldrh r2, [r5, #0x3a]\n    ldr r0, [r4]\n    ldr r1, [r5, #0x3c]\n    bl ov45_0222CEB0\n    ldr r2, _0222D278 ; =ov45_02254BA4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov45_0222CDC4\n    pop {r3, r4, r5, pc}\n    _0222D274: .word FS_OVERLAY_ID(OVY_90)\n    _0222D278: .word ov45_02254BA4"
    );
    #endif
}

void ov45_0222D27C(void) {
    /* Original at 0x0222D27C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _0222D2A8 ; =FS_OVERLAY_ID(OVY_90)\n    add r5, r1, #0\n    bl UnloadOverlayByID\n    ldr r5, [r5]\n    ldr r0, [r4, #0x3c]\n    ldr r1, [r5, #0x1c]\n    bl ov45_0222A430\n    ldr r0, [r4, #0x3c]\n    ldr r1, [r5]\n    bl ov45_0222A72C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov45_0222CE2C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222D2A8: .word FS_OVERLAY_ID(OVY_90)"
    );
    #endif
}

void ov45_0222D2AC(void) {
    /* Original at 0x0222D2AC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r6, #0\n    mov r1, #0x3c\n    bl Heap_Alloc\n    str r0, [r4]\n    mov r1, #0\n    mov r2, #0x3c\n    bl memset\n    ldr r0, [r4]\n    mov r2, #0\n    add r1, r0, #0\n    add r1, #0x38\n    strb r2, [r1]\n    add r1, r0, #0\n    mov r2, #1\n    add r1, #0x39\n    strb r2, [r1]\n    ldr r1, [r5, #0x40]\n    str r1, [r0, #0x34]\n    add r1, r6, #0\n    bl ov45_0222CE78\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222D2E4(void) {
    /* Original at 0x0222D2E4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl ov45_0222CE94\n    ldr r0, [r4]\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222D2F8(void) {
    /* Original at 0x0222D2F8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, _0222D31C ; =FS_OVERLAY_ID(OVY_90)\n    mov r1, #2\n    bl HandleLoadOverlay\n    ldrh r2, [r5, #0x3a]\n    ldr r0, [r4]\n    ldr r1, [r5, #0x3c]\n    bl ov45_0222CEB0\n    ldr r2, _0222D320 ; =ov45_02254B34\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov45_0222CDC4\n    pop {r3, r4, r5, pc}\n    _0222D31C: .word FS_OVERLAY_ID(OVY_90)\n    _0222D320: .word ov45_02254B34"
    );
    #endif
}

void ov45_0222D324(void) {
    /* Original at 0x0222D324 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _0222D350 ; =FS_OVERLAY_ID(OVY_90)\n    add r5, r1, #0\n    bl UnloadOverlayByID\n    ldr r5, [r5]\n    ldr r0, [r4, #0x3c]\n    ldr r1, [r5, #0x1c]\n    bl ov45_0222A430\n    ldr r0, [r4, #0x3c]\n    ldr r1, [r5]\n    bl ov45_0222A72C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov45_0222CE2C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222D350: .word FS_OVERLAY_ID(OVY_90)"
    );
    #endif
}

void ov45_0222D354(void) {
    /* Original at 0x0222D354 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r2, #0\n    mov r1, #8\n    bl Heap_Alloc\n    str r0, [r4]\n    mov r1, #0\n    strb r1, [r0]\n    strb r1, [r0, #1]\n    strb r1, [r0, #2]\n    strb r1, [r0, #3]\n    strb r1, [r0, #4]\n    strb r1, [r0, #5]\n    strb r1, [r0, #6]\n    strb r1, [r0, #7]\n    ldr r1, [r5, #0x3c]\n    ldr r0, [r4]\n    str r1, [r0]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222D380(void) {
    Heap_Free();
}

void ov45_0222D38C(void) {
    /* Original at 0x0222D38C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x3c]\n    bl ov45_0222A33C\n    cmp r0, #0\n    beq _0222D3A4\n    add r0, r4, #0\n    mov r1, #0xa\n    bl ov45_0222CE2C\n    b _0222D3AC\n    add r0, r4, #0\n    mov r1, #0\n    bl ov45_0222CE2C\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222D3B0(void) {
    /* Original at 0x0222D3B0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r1]\n    mov r3, #0\n    strb r3, [r2, #4]\n    ldr r3, _0222D3BC ; =ov45_0222CDC4\n    ldr r2, _0222D3C0 ; =ov45_02254B24\n    bx r3\n    _0222D3BC: .word ov45_0222CDC4\n    _0222D3C0: .word ov45_02254B24"
    );
    #endif
}

void ov45_0222D3C4(void) {
    /* Original at 0x0222D3C4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r1]\n    mov r3, #1\n    strb r3, [r2, #4]\n    ldr r3, _0222D3D0 ; =ov45_0222CDC4\n    ldr r2, _0222D3D4 ; =ov45_02254B14\n    bx r3\n    _0222D3D0: .word ov45_0222CDC4\n    _0222D3D4: .word ov45_02254B14"
    );
    #endif
}

void ov45_0222D3D8(void) {
    /* Original at 0x0222D3D8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r2, #0\n    mov r1, #0xc\n    bl Heap_Alloc\n    str r0, [r4]\n    mov r1, #0\n    strb r1, [r0]\n    strb r1, [r0, #1]\n    strb r1, [r0, #2]\n    strb r1, [r0, #3]\n    strb r1, [r0, #4]\n    strb r1, [r0, #5]\n    strb r1, [r0, #6]\n    strb r1, [r0, #7]\n    strb r1, [r0, #8]\n    strb r1, [r0, #9]\n    strb r1, [r0, #0xa]\n    strb r1, [r0, #0xb]\n    ldr r1, [r4]\n    ldr r0, [r5, #0x40]\n    str r0, [r1]\n    ldr r0, [r5, #0x3c]\n    str r0, [r1, #4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222D410(void) {
    Heap_Free();
}

void ov45_0222D41C(void) {
    ov45_0222D434();
}

void ov45_0222D428(void) {
    ov45_0222D434();
}

void ov45_0222D434(void) {
    /* Original at 0x0222D434 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r1]\n    str r2, [r3, #8]\n    ldr r3, _0222D440 ; =ov45_0222CDC4\n    ldr r2, _0222D444 ; =ov45_02254B04\n    bx r3\n    nop\n    _0222D440: .word ov45_0222CDC4\n    _0222D444: .word ov45_02254B04"
    );
    #endif
}

u8 ov45_0222D448(void) {
    return 1;
}

void ov45_0222D44C(void) {
    /* Original at 0x0222D44C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r2, #0\n    mov r1, #0xc\n    bl Heap_Alloc\n    str r0, [r4]\n    mov r2, #0\n    strb r2, [r0]\n    strb r2, [r0, #1]\n    strb r2, [r0, #2]\n    strb r2, [r0, #3]\n    strb r2, [r0, #4]\n    strb r2, [r0, #5]\n    strb r2, [r0, #6]\n    strb r2, [r0, #7]\n    strb r2, [r0, #8]\n    strb r2, [r0, #9]\n    strb r2, [r0, #0xa]\n    strb r2, [r0, #0xb]\n    ldr r1, [r4]\n    ldr r0, [r5, #0x40]\n    str r0, [r1]\n    ldr r0, [r5, #0x3c]\n    str r0, [r1, #4]\n    str r2, [r1, #8]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222D484(void) {
    /* Original at 0x0222D484 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r2, #0\n    mov r1, #0xc\n    bl Heap_Alloc\n    str r0, [r4]\n    mov r1, #0\n    strb r1, [r0]\n    strb r1, [r0, #1]\n    strb r1, [r0, #2]\n    strb r1, [r0, #3]\n    strb r1, [r0, #4]\n    strb r1, [r0, #5]\n    strb r1, [r0, #6]\n    strb r1, [r0, #7]\n    strb r1, [r0, #8]\n    strb r1, [r0, #9]\n    strb r1, [r0, #0xa]\n    strb r1, [r0, #0xb]\n    ldr r1, [r4]\n    ldr r0, [r5, #0x40]\n    str r0, [r1]\n    ldr r0, [r5, #0x3c]\n    str r0, [r1, #4]\n    mov r0, #1\n    str r0, [r1, #8]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222D4C0(void) {
    Heap_Free();
}

void ov45_0222D4CC(void) {
    /* Original at 0x0222D4CC */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0222D4D4 ; =ov45_0222CDC4\n    ldr r2, _0222D4D8 ; =ov45_02254B44\n    bx r3\n    nop\n    _0222D4D4: .word ov45_0222CDC4\n    _0222D4D8: .word ov45_02254B44"
    );
    #endif
}

void ov45_0222D4DC(void) {
    /* Original at 0x0222D4DC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x3c]\n    bl ov45_0222A33C\n    cmp r0, #0\n    beq _0222D4F4\n    add r0, r4, #0\n    mov r1, #0xa\n    bl ov45_0222CE2C\n    b _0222D4FC\n    add r0, r4, #0\n    mov r1, #0\n    bl ov45_0222CE2C\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222D500(void) {
    RTC_ConvertSecondToDateTime();
}

void ov45_0222D524(void) {
    /* Original at 0x0222D524 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r0, [r0]\n    add r4, r2, #0\n    str r0, [sp, #4]\n    ldr r0, [r1]\n    str r0, [sp]\n    add r0, sp, #0\n    ldrb r2, [r0, #6]\n    ldrb r1, [r0, #2]\n    add r1, r2, r1\n    strb r1, [r0, #6]\n    ldrb r0, [r0, #6]\n    mov r1, #0x3c\n    bl _s32_div_f\n    add r1, sp, #0\n    ldrb r2, [r1, #5]\n    add r0, r2, r0\n    strb r0, [r1, #5]\n    ldrb r0, [r1, #6]\n    mov r1, #0x3c\n    bl _s32_div_f\n    strb r1, [r4, #2]\n    add r0, sp, #0\n    ldrb r2, [r0, #5]\n    ldrb r1, [r0, #1]\n    add r1, r2, r1\n    strb r1, [r0, #5]\n    ldrb r0, [r0, #5]\n    mov r1, #0x3c\n    bl _s32_div_f\n    add r1, sp, #0\n    ldrb r2, [r1, #4]\n    add r0, r2, r0\n    strb r0, [r1, #4]\n    ldrb r0, [r1, #5]\n    mov r1, #0x3c\n    bl _s32_div_f\n    strb r1, [r4, #1]\n    add r0, sp, #0\n    ldrb r2, [r0, #4]\n    ldrb r1, [r0]\n    add r1, r2, r1\n    strb r1, [r0, #4]\n    ldrb r0, [r0, #4]\n    mov r1, #0x18\n    bl _s32_div_f\n    strb r1, [r4]\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222D594(void) {
    /* Original at 0x0222D594 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    ldr r0, [r0]\n    add r4, r2, #0\n    str r0, [sp, #4]\n    ldr r0, [r1]\n    add r1, sp, #0\n    str r0, [sp]\n    ldrb r5, [r1, #2]\n    mov r0, #6\n    ldrsb r1, [r1, r0]\n    lsl r0, r5, #0x18\n    asr r0, r0, #0x18\n    sub r0, r1, r0\n    bpl _0222D5CE\n    neg r0, r0\n    mov r1, #0x3c\n    bl _s32_div_f\n    add r2, sp, #0\n    ldrb r3, [r2, #6]\n    add r0, r0, #1\n    mov r1, #0x3c\n    mul r1, r0\n    add r1, r3, r1\n    strb r1, [r2, #6]\n    ldrb r1, [r2, #5]\n    sub r0, r1, r0\n    strb r0, [r2, #5]\n    add r1, sp, #0\n    ldrb r0, [r1, #6]\n    sub r0, r0, r5\n    strb r0, [r4, #2]\n    ldrb r5, [r1, #1]\n    mov r0, #5\n    ldrsb r1, [r1, r0]\n    lsl r0, r5, #0x18\n    asr r0, r0, #0x18\n    sub r0, r1, r0\n    bpl _0222D600\n    neg r0, r0\n    mov r1, #0x3c\n    bl _s32_div_f\n    add r2, sp, #0\n    ldrb r3, [r2, #5]\n    add r0, r0, #1\n    mov r1, #0x3c\n    mul r1, r0\n    add r1, r3, r1\n    strb r1, [r2, #5]\n    ldrb r1, [r2, #4]\n    sub r0, r1, r0\n    strb r0, [r2, #4]\n    add r1, sp, #0\n    ldrb r0, [r1, #5]\n    sub r0, r0, r5\n    strb r0, [r4, #1]\n    mov r0, #4\n    ldrsb r2, [r1, r0]\n    mov r0, #0\n    ldrsb r0, [r1, r0]\n    sub r0, r2, r0\n    bpl _0222D62A\n    neg r0, r0\n    mov r1, #0x18\n    bl _s32_div_f\n    add r1, sp, #0\n    add r2, r0, #1\n    mov r0, #0x18\n    ldrb r3, [r1, #4]\n    mul r0, r2\n    add r0, r3, r0\n    strb r0, [r1, #4]\n    add r0, sp, #0\n    ldrb r1, [r0, #4]\n    ldrb r0, [r0]\n    sub r0, r1, r0\n    strb r0, [r4]\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222D638(void) {
    /* Original at 0x0222D638 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    str r0, [sp]\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r5, #0\n    beq _0222D6AE\n    add r0, r5, #0\n    bl LocationGmmDatRegionCountGetByCountryMsgNo\n    cmp r4, r0\n    bhi _0222D6AE\n    mov r1, #0\n    ldr r2, [sp]\n    add r0, r1, #0\n    mov r7, #1\n    ldrb r3, [r2, #3]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x1c\n    bne _0222D664\n    add r1, r7, #0\n    b _0222D676\n    ldrh r3, [r2]\n    cmp r5, r3\n    bne _0222D676\n    ldrb r3, [r2, #2]\n    cmp r4, r3\n    bne _0222D676\n    cmp r6, #1\n    beq _0222D6AE\n    mov r1, #1\n    cmp r1, #0\n    beq _0222D6A6\n    lsl r2, r0, #2\n    ldr r0, [sp]\n    ldr r1, [sp]\n    add r0, r0, r2\n    strh r5, [r1, r2]\n    strb r4, [r0, #2]\n    ldrb r3, [r0, #3]\n    mov r1, #0xf\n    bic r3, r1\n    lsl r1, r6, #0x18\n    lsr r2, r1, #0x18\n    mov r1, #0xf\n    and r1, r2\n    orr r1, r3\n    strb r1, [r0, #3]\n    ldrb r2, [r0, #3]\n    mov r1, #0xf0\n    bic r2, r1\n    mov r1, #0x10\n    orr r1, r2\n    strb r1, [r0, #3]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r0, #1\n    add r2, r2, #4\n    cmp r0, #0x32\n    blt _0222D658\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222D6B0(void) {
    /* Original at 0x0222D6B0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    cmp r5, #0x32\n    blo _0222D6BE\n    bl GF_AssertFail\n    lsl r0, r5, #2\n    add r4, r4, r0\n    ldrb r0, [r4, #3]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    beq _0222D6D0\n    bl GF_AssertFail\n    ldrh r0, [r4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222D6D4(void) {
    /* Original at 0x0222D6D4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x32\n    blo _0222D6E2\n    bl GF_AssertFail\n    lsl r4, r4, #2\n    add r0, r5, r4\n    ldrb r0, [r0, #3]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    beq _0222D6F4\n    bl GF_AssertFail\n    add r0, r5, r4\n    ldrb r0, [r0, #2]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222D6FC(void) {
    /* Original at 0x0222D6FC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    cmp r5, #0x32\n    blo _0222D70A\n    bl GF_AssertFail\n    lsl r0, r5, #2\n    add r4, r4, r0\n    ldrb r0, [r4, #3]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    beq _0222D71C\n    bl GF_AssertFail\n    ldrb r0, [r4, #3]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222D724(void) {
    GF_AssertFail();
}

void ov45_0222D740(void) {
    /* Original at 0x0222D740 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl NNS_G3dGetMdlSet\n    cmp r0, #0\n    beq _0222D76A\n    add r2, r0, #0\n    add r2, #8\n    beq _0222D75E\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _0222D75E\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _0222D760\n    mov r1, #0\n    cmp r1, #0\n    beq _0222D76A\n    ldr r1, [r1]\n    add r4, r0, r1\n    b _0222D76C\n    mov r4, #0\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x40\n    bl NNSi_G3dModifyMatFlag\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x80\n    bl NNSi_G3dModifyMatFlag\n    mov r2, #2\n    add r0, r4, #0\n    mov r1, #0\n    lsl r2, r2, #8\n    bl NNSi_G3dModifyMatFlag\n    mov r2, #1\n    add r0, r4, #0\n    mov r1, #0\n    lsl r2, r2, #0xa\n    bl NNSi_G3dModifyMatFlag\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222D79C(void) {
    /* Original at 0x0222D79C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl LocationGmmDatRegionCountGetByCountryMsgNo\n    cmp r0, #0\n    bne _0222D7B0\n    cmp r4, #0\n    bne _0222D7B0\n    mov r0, #1\n    pop {r4, pc}\n    cmp r4, #1\n    blo _0222D7BC\n    cmp r4, r0\n    bhi _0222D7BC\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222D7C0(void) {
    /* Original at 0x0222D7C0 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222D7C8 ; =ov45_02254BB4\n    ldrb r0, [r1, r0]\n    bx lr\n    nop\n    _0222D7C8: .word ov45_02254BB4"
    );
    #endif
}

void ov45_0222D7CC(void) {
    /* Original at 0x0222D7CC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov00_021E6A70\n    cmp r0, #0xb\n    beq _0222D7DE\n    cmp r5, #0x19\n    bne _0222D7EA\n    cmp r4, #2\n    beq _0222D7E6\n    mov r0, #0xe\n    pop {r3, r4, r5, pc}\n    mov r0, #0xb\n    pop {r3, r4, r5, pc}\n    cmp r5, #0x1a\n    bne _0222D7F2\n    mov r0, #0xd\n    pop {r3, r4, r5, pc}\n    cmp r0, #0\n    bge _0222D7F8\n    mov r0, #0xb\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222D7FC(void) {
    /* Original at 0x0222D7FC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov00_021E6A70\n    cmp r4, #0x19\n    bne _0222D80C\n    mov r0, #0xb\n    b _0222D812\n    cmp r4, #0x1a\n    bne _0222D812\n    mov r0, #0xc\n    cmp r0, #0xb\n    bhi _0222D83E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222D822: ; jump table\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222D844(void) {
    /* Original at 0x0222D844 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_020393C8\n    cmp r0, #0\n    bne _0222D856\n    bl sub_020397FC\n    cmp r0, #0\n    beq _0222D85A\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov45_0222D860(void) {
    /* Original at 0x0222D860 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x23\n    lsl r1, r1, #4\n    add r5, r0, #0\n    bl Heap_Alloc\n    mov r2, #0x23\n    add r4, r0, #0\n    mov r1, #0\n    lsl r2, r2, #4\n    bl memset\n    add r0, r4, #0\n    add r0, #8\n    bl ov45_0222DE1C\n    add r0, r4, #0\n    add r0, #0x5c\n    add r1, r5, #0\n    bl ov45_0222DF78\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222D890(void) {
    ov45_0222DFD0();
    Heap_Free(r4);
}

void ov45_0222D8A4(void) {
    ov45_0222E000();
    ov45_0222DEA4(r4, 0);
}

void ov45_0222D8BC(void) {
    /* Original at 0x0222D8BC */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r1]\n    str r1, [r0]\n    mov r1, #1\n    str r1, [r0, #4]\n    bx lr"
    );
    #endif
}

void ov45_0222D8C8(void) {
    ov45_0222DE58();
}

void ov45_0222D8D4(void) {
    ov45_0222DF14();
    ov45_0222DE74(r5, r4);
}

void ov45_0222D8F0(void) {
    /* Original at 0x0222D8F0 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    str r0, [sp]\n    str r1, [sp, #4]\n    mov r5, #0\n    add r4, #8\n    mov r6, #2\n    mov r7, #2\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov45_0222DF38\n    add r2, r0, #0\n    tst r0, r7\n    beq _0222D91A\n    add r0, r4, #0\n    add r1, r5, #0\n    bic r2, r6\n    bl ov45_0222DE8C\n    add r5, r5, #1\n    cmp r5, #0x14\n    blt _0222D902\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    add r0, #8\n    bl ov45_0222DF38\n    add r3, r0, #0\n    ldr r0, [sp]\n    mov r2, #2\n    add r0, #8\n    ldr r1, [sp, #4]\n    orr r2, r3\n    str r0, [sp]\n    bl ov45_0222DE8C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222D940(void) {
    /* Original at 0x0222D940 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, #0x5c\n    mov r1, #8\n    bl ov45_0222E04C\n    add r6, r0, #0\n    beq _0222D98C\n    ldr r1, [r4]\n    str r1, [sp]\n    ldr r1, [r4, #4]\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    str r1, [sp, #0xc]\n    ldrh r2, [r4, #8]\n    add r3, r1, #0\n    str r2, [sp, #0x10]\n    ldrh r2, [r4, #0xa]\n    str r2, [sp, #0x14]\n    str r1, [sp, #0x18]\n    mov r2, #0x96\n    str r1, [sp, #0x1c]\n    lsl r2, r2, #2\n    str r2, [sp, #0x20]\n    mov r2, #8\n    str r2, [sp, #0x24]\n    add r2, r1, #0\n    str r1, [sp, #0x28]\n    bl ov45_0222E0E0\n    add r5, #0x5c\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov45_0222E0A4\n    add sp, #0x2c\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222D990(void) {
    /* Original at 0x0222D990 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x2c\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0xc]\n    cmp r0, #0x1b\n    bhs _0222D9E6\n    add r0, r5, #0\n    add r0, #0x5c\n    mov r1, #7\n    bl ov45_0222E04C\n    add r6, r0, #0\n    beq _0222D9E6\n    ldr r1, [r4]\n    mov r2, #0\n    str r1, [sp]\n    ldr r1, [r4, #4]\n    add r3, r2, #0\n    str r1, [sp, #4]\n    str r2, [sp, #8]\n    str r2, [sp, #0xc]\n    ldrh r1, [r4, #8]\n    str r1, [sp, #0x10]\n    ldrh r1, [r4, #0xa]\n    str r1, [sp, #0x14]\n    str r2, [sp, #0x18]\n    mov r1, #0x96\n    str r2, [sp, #0x1c]\n    lsl r1, r1, #2\n    str r1, [sp, #0x20]\n    mov r1, #7\n    str r1, [sp, #0x24]\n    mov r1, #1\n    str r1, [sp, #0x28]\n    ldr r1, [r4, #0xc]\n    bl ov45_0222E0E0\n    add r5, #0x5c\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov45_0222E0A4\n    add sp, #0x2c\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222D9EC(void) {
    /* Original at 0x0222D9EC */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r5, r1, #0\n    ldr r4, [r5]\n    add r6, r0, #0\n    cmp r4, #0\n    beq _0222DA02\n    cmp r4, #1\n    beq _0222DA02\n    cmp r4, #2\n    bne _0222DA76\n    ldr r0, [r5, #0x20]\n    cmp r0, #1\n    ldr r0, [r5, #4]\n    bne _0222DA16\n    cmp r0, #2\n    blo _0222DA76\n    cmp r0, #4\n    bls _0222DA1E\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #1\n    blo _0222DA76\n    cmp r0, #4\n    bhi _0222DA76\n    ldr r0, _0222DA7C ; =ov45_02254BDC\n    lsl r1, r4, #2\n    ldr r7, [r0, r1]\n    add r0, r6, #0\n    lsl r1, r7, #0x10\n    add r0, #0x5c\n    lsr r1, r1, #0x10\n    bl ov45_0222E04C\n    str r0, [sp, #0x2c]\n    cmp r0, #0\n    beq _0222DA76\n    ldr r1, [r5, #8]\n    str r1, [sp]\n    ldr r1, [r5, #0xc]\n    str r1, [sp, #4]\n    ldr r1, [r5, #0x10]\n    str r1, [sp, #8]\n    ldr r1, [r5, #0x14]\n    str r1, [sp, #0xc]\n    ldrh r1, [r5, #0x18]\n    str r1, [sp, #0x10]\n    ldrh r1, [r5, #0x1a]\n    str r1, [sp, #0x14]\n    ldrh r1, [r5, #0x1c]\n    str r1, [sp, #0x18]\n    ldrh r1, [r5, #0x1e]\n    str r1, [sp, #0x1c]\n    mov r1, #0xe1\n    lsl r1, r1, #2\n    str r1, [sp, #0x20]\n    str r7, [sp, #0x24]\n    mov r1, #2\n    str r1, [sp, #0x28]\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #0x20]\n    add r1, r4, #0\n    bl ov45_0222E0E0\n    add r6, #0x5c\n    ldr r1, [sp, #0x2c]\n    add r0, r6, #0\n    bl ov45_0222E0A4\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222DA7C: .word ov45_02254BDC"
    );
    #endif
}

void ov45_0222DA80(void) {
    /* Original at 0x0222DA80 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x2c\n    add r4, r1, #0\n    ldr r1, [r4]\n    add r5, r0, #0\n    cmp r1, #3\n    beq _0222DA92\n    cmp r1, #4\n    bne _0222DADA\n    add r1, r1, #5\n    add r0, r5, #0\n    lsl r1, r1, #0x10\n    add r0, #0x5c\n    lsr r1, r1, #0x10\n    bl ov45_0222E04C\n    add r6, r0, #0\n    beq _0222DADA\n    ldr r1, [r4]\n    ldr r2, [r4, #8]\n    mov r3, #0\n    str r2, [sp]\n    str r3, [sp, #4]\n    str r3, [sp, #8]\n    str r3, [sp, #0xc]\n    ldrh r2, [r4, #0xc]\n    str r2, [sp, #0x10]\n    str r3, [sp, #0x14]\n    str r3, [sp, #0x18]\n    mov r2, #0xe1\n    str r3, [sp, #0x1c]\n    lsl r2, r2, #2\n    str r2, [sp, #0x20]\n    add r2, r1, #5\n    str r2, [sp, #0x24]\n    mov r2, #3\n    str r2, [sp, #0x28]\n    ldr r2, [r4, #4]\n    bl ov45_0222E0E0\n    add r5, #0x5c\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov45_0222E0A4\n    add sp, #0x2c\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222DAE0(void) {
    /* Original at 0x0222DAE0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, #0x5c\n    mov r1, #0xc\n    bl ov45_0222E04C\n    add r6, r0, #0\n    beq _0222DB34\n    ldr r1, [r4, #4]\n    mov r2, #0\n    str r1, [sp]\n    ldr r1, [r4, #8]\n    add r3, r2, #0\n    str r1, [sp, #4]\n    ldr r1, [r4, #0xc]\n    str r1, [sp, #8]\n    ldr r1, [r4, #0x10]\n    str r1, [sp, #0xc]\n    ldrh r1, [r4, #0x14]\n    str r1, [sp, #0x10]\n    ldrh r1, [r4, #0x16]\n    str r1, [sp, #0x14]\n    ldrh r1, [r4, #0x18]\n    str r1, [sp, #0x18]\n    ldrh r1, [r4, #0x1a]\n    str r1, [sp, #0x1c]\n    ldr r1, _0222DB38 ; =0x000001C2\n    str r1, [sp, #0x20]\n    mov r1, #0xc\n    str r1, [sp, #0x24]\n    mov r1, #4\n    str r1, [sp, #0x28]\n    ldr r1, [r4]\n    bl ov45_0222E0E0\n    add r5, #0x5c\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov45_0222E0A4\n    add sp, #0x2c\n    pop {r3, r4, r5, r6, pc}\n    _0222DB38: .word 0x000001C2"
    );
    #endif
}

void ov45_0222DB3C(void) {
    /* Original at 0x0222DB3C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, #0x5c\n    mov r1, #0xd\n    bl ov45_0222E04C\n    add r6, r0, #0\n    beq _0222DB90\n    ldr r1, [r4, #4]\n    mov r2, #0\n    str r1, [sp]\n    ldr r1, [r4, #8]\n    add r3, r2, #0\n    str r1, [sp, #4]\n    ldr r1, [r4, #0xc]\n    str r1, [sp, #8]\n    ldr r1, [r4, #0x10]\n    str r1, [sp, #0xc]\n    ldrh r1, [r4, #0x14]\n    str r1, [sp, #0x10]\n    ldrh r1, [r4, #0x16]\n    str r1, [sp, #0x14]\n    ldrh r1, [r4, #0x18]\n    str r1, [sp, #0x18]\n    ldrh r1, [r4, #0x1a]\n    str r1, [sp, #0x1c]\n    ldr r1, _0222DB94 ; =0x000001C2\n    str r1, [sp, #0x20]\n    mov r1, #0xd\n    str r1, [sp, #0x24]\n    mov r1, #5\n    str r1, [sp, #0x28]\n    ldr r1, [r4]\n    bl ov45_0222E0E0\n    add r5, #0x5c\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov45_0222E0A4\n    add sp, #0x2c\n    pop {r3, r4, r5, r6, pc}\n    _0222DB94: .word 0x000001C2"
    );
    #endif
}

void ov45_0222DB98(void) {
    /* Original at 0x0222DB98 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x2c\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #4\n    bhi _0222DC02\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222DBB2: ; jump table\n    add sp, #0x2c\n    pop {r3, r4, r5, r6, pc}\n    add r0, r5, #0\n    add r0, #0x5c\n    mov r1, #0xe\n    bl ov45_0222E04C\n    add r6, r0, #0\n    beq _0222DC02\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    str r3, [sp, #8]\n    str r3, [sp, #0xc]\n    str r3, [sp, #0x10]\n    str r3, [sp, #0x14]\n    str r3, [sp, #0x18]\n    mov r1, #0xe1\n    str r3, [sp, #0x1c]\n    lsl r1, r1, #2\n    str r1, [sp, #0x20]\n    mov r1, #0xe\n    str r1, [sp, #0x24]\n    mov r1, #6\n    str r1, [sp, #0x28]\n    ldr r1, [r4]\n    ldr r2, [r4, #4]\n    ldr r1, [r1]\n    bl ov45_0222E0E0\n    add r5, #0x5c\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov45_0222E0A4\n    add sp, #0x2c\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222DC08(void) {
    /* Original at 0x0222DC08 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x2c\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0x14\n    bhs _0222DC5A\n    ldrb r0, [r2, r0]\n    cmp r0, #0\n    beq _0222DC5A\n    add r0, r5, #0\n    add r0, #0x5c\n    mov r1, #1\n    bl ov45_0222E04C\n    add r6, r0, #0\n    beq _0222DC5A\n    mov r2, #0\n    str r2, [sp]\n    str r2, [sp, #4]\n    str r2, [sp, #8]\n    str r2, [sp, #0xc]\n    str r2, [sp, #0x10]\n    str r2, [sp, #0x14]\n    str r2, [sp, #0x18]\n    ldr r1, _0222DC60 ; =0x00000708\n    str r2, [sp, #0x1c]\n    str r1, [sp, #0x20]\n    mov r1, #1\n    str r1, [sp, #0x24]\n    mov r1, #7\n    str r1, [sp, #0x28]\n    ldr r1, [r4]\n    add r3, r2, #0\n    bl ov45_0222E0E0\n    add r5, #0x5c\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov45_0222E0A4\n    add sp, #0x2c\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0222DC60: .word 0x00000708"
    );
    #endif
}

void ov45_0222DC64(void) {
    /* Original at 0x0222DC64 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0222DC7A\n    cmp r0, #1\n    beq _0222DC7A\n    cmp r0, #2\n    bne _0222DCDA\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    bl ov45_0222E5B4\n    cmp r0, #0\n    beq _0222DCDA\n    ldr r7, [r4]\n    ldr r0, _0222DCE0 ; =ov45_02254BC8\n    ldrb r6, [r0, r7]\n    add r0, r5, #0\n    add r0, #0x5c\n    add r1, r6, #0\n    bl ov45_0222E04C\n    str r0, [sp, #0x2c]\n    cmp r0, #0\n    beq _0222DCDA\n    ldr r1, [r4, #8]\n    mov r3, #0\n    str r1, [sp]\n    ldr r1, [r4, #0xc]\n    str r1, [sp, #4]\n    ldr r1, [r4, #0x10]\n    str r1, [sp, #8]\n    ldr r1, [r4, #0x14]\n    str r1, [sp, #0xc]\n    ldrh r1, [r4, #0x18]\n    str r1, [sp, #0x10]\n    ldrh r1, [r4, #0x1a]\n    str r1, [sp, #0x14]\n    ldrh r1, [r4, #0x1c]\n    str r1, [sp, #0x18]\n    ldrh r1, [r4, #0x1e]\n    str r1, [sp, #0x1c]\n    ldr r1, _0222DCE4 ; =0x000001C2\n    str r1, [sp, #0x20]\n    str r6, [sp, #0x24]\n    mov r1, #8\n    str r1, [sp, #0x28]\n    ldr r2, [r4, #4]\n    add r1, r7, #0\n    bl ov45_0222E0E0\n    add r5, #0x5c\n    ldr r1, [sp, #0x2c]\n    add r0, r5, #0\n    bl ov45_0222E0A4\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222DCE0: .word ov45_02254BC8\n    _0222DCE4: .word 0x000001C2"
    );
    #endif
}

void ov45_0222DCE8(void) {
    ov45_0222E03C();
}

void ov45_0222DCF4(void) {
    /* Original at 0x0222DCF4 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0]\n    str r2, [r1]\n    ldr r0, [r0, #4]\n    bx lr"
    );
    #endif
}

void ov45_0222DCFC(void) {
    ov45_0222DECC();
}

void ov45_0222DD08(void) {
    ov45_0222DEE0();
}

void ov45_0222DD14(void) {
    ov45_0222DEF4();
}

void ov45_0222DD20(void) {
    ov45_0222DF14();
}

void ov45_0222DD2C(void) {
    ov45_0222DF58();
}

void ov45_0222DD38(void) {
    ov45_0222DF50();
}

void ov45_0222DD44(void) {
    /* Original at 0x0222DD44 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x8a\n    lsl r1, r1, #2\n    ldr r2, [r0, r1]\n    sub r1, #0x2c\n    add r0, r0, r1\n    cmp r2, r0\n    beq _0222DD56\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov45_0222DD5C(void) {
    /* Original at 0x0222DD5C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov45_0222DD44\n    cmp r0, #0\n    bne _0222DD6C\n    bl GF_AssertFail\n    mov r0, #0x8a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldrb r0, [r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222DD78(void) {
    /* Original at 0x0222DD78 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    str r1, [sp, #8]\n    add r5, r3, #0\n    bl ov45_0222DD44\n    cmp r0, #0\n    bne _0222DD8E\n    bl GF_AssertFail\n    mov r2, #0x8a\n    lsl r2, r2, #2\n    ldr r4, [r4, r2]\n    ldr r3, [sp, #0x28]\n    mov r0, #1\n    mov r1, #0x1b\n    add r2, #0xcd\n    bl NewMsgDataFromNarc\n    add r7, r0, #0\n    ldr r0, [sp, #0x28]\n    bl MessageFormat_New\n    ldrb r6, [r4]\n    str r0, [sp, #0xc]\n    cmp r6, #9\n    bhs _0222DDCA\n    ldr r0, [sp, #0x28]\n    str r5, [sp]\n    str r0, [sp, #4]\n    add r0, r4, #0\n    ldr r4, _0222DDE0 ; =ov45_02254C0C\n    lsl r5, r6, #2\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #0xc]\n    ldr r4, [r4, r5]\n    add r3, r7, #0\n    blx r4\n    add r4, r0, #0\n    b _0222DDCC\n    mov r4, #0\n    add r0, r7, #0\n    bl DestroyMsgData\n    ldr r0, [sp, #0xc]\n    bl MessageFormat_Delete\n    add r0, r4, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222DDE0: .word ov45_02254C0C"
    );
    #endif
}

void ov45_0222DDE4(void) {
    /* Original at 0x0222DDE4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    bl ov45_0222DD44\n    cmp r0, #0\n    bne _0222DDF6\n    bl GF_AssertFail\n    mov r0, #0x8a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldrb r2, [r0]\n    cmp r2, #9\n    bhs _0222DE0E\n    lsl r3, r2, #2\n    ldr r2, _0222DE18 ; =ov45_02254BE8\n    add r1, r4, #0\n    ldr r2, [r2, r3]\n    blx r2\n    pop {r3, r4, r5, pc}\n    bl GF_AssertFail\n    mov r0, #0x14\n    pop {r3, r4, r5, pc}\n    nop\n    _0222DE18: .word ov45_02254BE8"
    );
    #endif
}

void ov45_0222DE1C(void) {
    ov45_0222DE3C(0, 2);
}

void ov45_0222DE3C(void) {
    GF_AssertFail();
}

void ov45_0222DE58(void) {
    ov45_0222DE3C();
    ov45_0222DEA4(r5, 1);
    ov45_0222DEB8(r5, r4);
}

void ov45_0222DE74(void) {
    ov45_0222DE3C(2, 0);
    ov45_0222DEA4(r4, 2);
}

void ov45_0222DE8C(void) {
    GF_AssertFail();
}

void ov45_0222DEA4(void) {
    GF_AssertFail();
}

void ov45_0222DEB8(void) {
    GF_AssertFail();
}

void ov45_0222DECC(void) {
    ov45_0222DEE0();
}

void ov45_0222DEE0(void) {
    GF_AssertFail();
}

void ov45_0222DEF4(void) {
    GF_AssertFail(0, 1);
}

void ov45_0222DF14(void) {
    /* Original at 0x0222DF14 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    cmp r5, #0x14\n    blo _0222DF22\n    bl GF_AssertFail\n    lsl r0, r5, #2\n    add r0, r4, r0\n    ldrh r1, [r0, #2]\n    mov r0, #2\n    tst r0, r1\n    beq _0222DF32\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222DF38(void) {
    GF_AssertFail();
}

void ov45_0222DF50(void) {
    /* Original at 0x0222DF50 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x50\n    ldrh r0, [r0]\n    bx lr"
    );
    #endif
}

void ov45_0222DF58(void) {
    GF_AssertFail(0, 1);
}

void ov45_0222DF78(void) {
    /* Original at 0x0222DF78 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    mov r2, #0x75\n    add r6, r1, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    str r0, [sp]\n    bl memset\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    mov r7, #8\n    str r0, [sp, #4]\n    ldr r5, [sp, #4]\n    mov r4, #0\n    add r0, r7, #0\n    add r1, r6, #0\n    bl String_New\n    str r0, [r5, #0x10]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0222DF98\n    ldr r0, [sp, #4]\n    add r0, #0x34\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    str r0, [sp, #8]\n    cmp r0, #8\n    blt _0222DF94\n    mov r2, #0x1a\n    lsl r2, r2, #4\n    ldr r0, [sp]\n    add r1, r2, #0\n    add r3, r0, r2\n    add r1, #0x2c\n    str r3, [r0, r1]\n    add r2, #0x30\n    str r3, [r0, r2]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222DFD0(void) {
    /* Original at 0x0222DFD0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    mov r7, #0\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x10]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0222DFDC\n    add r7, r7, #1\n    add r6, #0x34\n    cmp r7, #8\n    blt _0222DFD8\n    mov r2, #0x75\n    ldr r0, [sp]\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222E000(void) {
    /* Original at 0x0222E000 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0x73\n    lsl r0, r0, #2\n    ldr r1, [r6, r0]\n    sub r0, #0x2c\n    add r4, r6, r0\n    cmp r1, r4\n    beq _0222E038\n    mov r7, #0\n    ldr r5, [r1, #0x2c]\n    mov r0, #0x2a\n    strh r7, [r1, #0x28]\n    ldrsh r0, [r1, r0]\n    sub r0, r0, #1\n    cmp r0, #0\n    ble _0222E02C\n    mov r0, #0x2a\n    ldrsh r0, [r1, r0]\n    sub r0, r0, #1\n    strh r0, [r1, #0x2a]\n    b _0222E032\n    add r0, r6, #0\n    bl ov45_0222E0CC\n    add r1, r5, #0\n    cmp r5, r4\n    bne _0222E014\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222E03C(void) {
    /* Original at 0x0222E03C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x73\n    lsl r1, r1, #2\n    ldr r3, _0222E048 ; =ov45_0222E0CC\n    ldr r1, [r0, r1]\n    bx r3\n    nop\n    _0222E048: .word ov45_0222E0CC"
    );
    #endif
}

void ov45_0222E04C(void) {
    /* Original at 0x0222E04C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r4, #0\n    add r3, r4, #0\n    add r5, r0, #0\n    ldr r2, [r5, #0x2c]\n    cmp r2, #0\n    bne _0222E062\n    mov r2, #0x34\n    mul r2, r3\n    add r4, r0, r2\n    b _0222E06A\n    add r3, r3, #1\n    add r5, #0x34\n    cmp r3, #8\n    blt _0222E054\n    cmp r4, #0\n    bne _0222E08E\n    mov r2, #0\n    add r5, r0, #0\n    ldrh r3, [r5, #0x28]\n    cmp r3, r1\n    blo _0222E086\n    mov r1, #0x34\n    mul r1, r2\n    add r4, r0, r1\n    add r1, r4, #0\n    bl ov45_0222E0CC\n    b _0222E08E\n    add r2, r2, #1\n    add r5, #0x34\n    cmp r2, #8\n    blt _0222E072\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222E094(void) {
    /* Original at 0x0222E094 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #0x2c]\n    str r2, [r1, #0x2c]\n    str r0, [r1, #0x30]\n    str r1, [r0, #0x2c]\n    ldr r0, [r1, #0x2c]\n    str r1, [r0, #0x30]\n    bx lr"
    );
    #endif
}

void ov45_0222E0A4(void) {
    /* Original at 0x0222E0A4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #0x1d\n    lsl r2, r2, #4\n    ldr r3, [r0, r2]\n    sub r2, #0x30\n    add r2, r0, r2\n    cmp r3, r2\n    beq _0222E0C2\n    ldrh r4, [r1, #0x28]\n    ldrh r0, [r3, #0x28]\n    cmp r0, r4\n    blo _0222E0C2\n    ldr r3, [r3, #0x30]\n    cmp r3, r2\n    bne _0222E0B6\n    add r0, r3, #0\n    bl ov45_0222E094\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0222E0CC(void) {
    /* Original at 0x0222E0CC */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r1, #0x2c]\n    ldr r0, [r1, #0x30]\n    str r2, [r0, #0x2c]\n    ldr r2, [r1, #0x30]\n    ldr r0, [r1, #0x2c]\n    str r2, [r0, #0x30]\n    mov r0, #0\n    str r0, [r1, #0x30]\n    str r0, [r1, #0x2c]\n    bx lr"
    );
    #endif
}

void ov45_0222E0E0(void) {
    /* Original at 0x0222E0E0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [sp, #0x40]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r0, #9\n    blo _0222E0F4\n    bl GF_AssertFail\n    ldr r0, [sp, #0x40]\n    strb r0, [r5]\n    ldr r0, [sp, #0x38]\n    strh r0, [r5, #0x2a]\n    ldr r0, [sp, #0x3c]\n    strh r0, [r5, #0x28]\n    str r4, [r5, #4]\n    str r6, [r5, #8]\n    str r7, [r5, #0xc]\n    add r0, sp, #8\n    ldrh r1, [r0, #0x20]\n    strh r1, [r5, #0x20]\n    ldrh r1, [r0, #0x24]\n    strh r1, [r5, #0x22]\n    ldrh r1, [r0, #0x28]\n    strh r1, [r5, #0x24]\n    ldrh r0, [r0, #0x2c]\n    strh r0, [r5, #0x26]\n    ldr r0, [sp, #0x18]\n    cmp r0, #0\n    beq _0222E124\n    ldr r1, [r5, #0x10]\n    bl PlayerName_FlatToString\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0\n    beq _0222E130\n    ldr r1, [r5, #0x14]\n    bl PlayerName_FlatToString\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    beq _0222E13C\n    ldr r1, [r5, #0x18]\n    bl PlayerName_FlatToString\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    beq _0222E148\n    ldr r1, [r5, #0x1c]\n    bl PlayerName_FlatToString\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222E14C(void) {
    /* Original at 0x0222E14C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _0222E19C ; =gGameLanguage\n    add r6, r2, #0\n    ldrb r4, [r0]\n    mov r0, #1\n    str r0, [sp]\n    str r4, [sp, #4]\n    mov r1, #0\n    add r7, r3, #0\n    ldr r2, [r5, #0x10]\n    add r0, r6, #0\n    add r3, r1, #0\n    bl BufferString\n    mov r1, #1\n    str r1, [sp]\n    str r4, [sp, #4]\n    ldr r2, [r5, #0x14]\n    add r0, r6, #0\n    mov r3, #0\n    bl BufferString\n    add r0, r7, #0\n    mov r1, #7\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r1, [sp, #0x20]\n    add r0, r6, #0\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222E19C: .word gGameLanguage"
    );
    #endif
}

void ov45_0222E1A0(void) {
    /* Original at 0x0222E1A0 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _0222E1FC ; =gGameLanguage\n    add r6, r2, #0\n    ldrb r4, [r0]\n    mov r0, #1\n    str r0, [sp]\n    str r4, [sp, #4]\n    mov r1, #0\n    add r7, r3, #0\n    ldr r2, [r5, #0x10]\n    add r0, r6, #0\n    add r3, r1, #0\n    bl BufferString\n    mov r1, #1\n    str r1, [sp]\n    str r4, [sp, #4]\n    ldr r2, [r5, #0x14]\n    add r0, r6, #0\n    mov r3, #0\n    bl BufferString\n    ldr r2, [r5, #4]\n    add r0, r6, #0\n    mov r1, #2\n    bl BufferWiFiPlazaInstrumentName\n    add r0, r7, #0\n    mov r1, #8\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r1, [sp, #0x20]\n    add r0, r6, #0\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222E1FC: .word gGameLanguage"
    );
    #endif
}

void ov45_0222E200(void) {
    /* Original at 0x0222E200 */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r2, #0\n    ldr r2, [r5, #4]\n    add r0, r4, #0\n    mov r1, #0\n    add r7, r3, #0\n    bl BufferWiFiPlazaActivityName\n    ldr r0, [r5, #0xc]\n    cmp r0, #1\n    bne _0222E2EE\n    ldr r0, [r5, #8]\n    cmp r0, #2\n    beq _0222E266\n    cmp r0, #3\n    beq _0222E22A\n    cmp r0, #4\n    beq _0222E290\n    b _0222E2DE\n    ldr r0, _0222E338 ; =gGameLanguage\n    mov r1, #1\n    ldrb r6, [r0]\n    str r1, [sp]\n    add r0, r4, #0\n    str r6, [sp, #4]\n    ldr r2, [r5, #0x10]\n    mov r3, #0\n    bl BufferString\n    mov r0, #1\n    str r0, [sp]\n    str r6, [sp, #4]\n    ldr r2, [r5, #0x14]\n    add r0, r4, #0\n    mov r1, #2\n    mov r3, #0\n    bl BufferString\n    mov r0, #1\n    str r0, [sp]\n    str r6, [sp, #4]\n    ldr r2, [r5, #0x18]\n    add r0, r4, #0\n    mov r1, #3\n    mov r3, #0\n    bl BufferString\n    mov r1, #0x12\n    b _0222E2E4\n    ldr r0, _0222E338 ; =gGameLanguage\n    mov r1, #1\n    ldrb r6, [r0]\n    str r1, [sp]\n    add r0, r4, #0\n    str r6, [sp, #4]\n    ldr r2, [r5, #0x10]\n    mov r3, #0\n    bl BufferString\n    mov r0, #1\n    str r0, [sp]\n    str r6, [sp, #4]\n    ldr r2, [r5, #0x14]\n    add r0, r4, #0\n    mov r1, #2\n    mov r3, #0\n    bl BufferString\n    mov r1, #0x13\n    b _0222E2E4\n    ldr r0, _0222E338 ; =gGameLanguage\n    mov r1, #1\n    ldrb r6, [r0]\n    str r1, [sp]\n    add r0, r4, #0\n    str r6, [sp, #4]\n    ldr r2, [r5, #0x10]\n    mov r3, #0\n    bl BufferString\n    mov r0, #1\n    str r0, [sp]\n    str r6, [sp, #4]\n    ldr r2, [r5, #0x14]\n    add r0, r4, #0\n    mov r1, #2\n    mov r3, #0\n    bl BufferString\n    mov r0, #1\n    str r0, [sp]\n    str r6, [sp, #4]\n    ldr r2, [r5, #0x18]\n    add r0, r4, #0\n    mov r1, #3\n    mov r3, #0\n    bl BufferString\n    mov r0, #1\n    str r0, [sp]\n    str r6, [sp, #4]\n    ldr r2, [r5, #0x1c]\n    add r0, r4, #0\n    mov r1, #4\n    mov r3, #0\n    bl BufferString\n    mov r1, #6\n    b _0222E2E4\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    b _0222E320\n    ldr r0, _0222E338 ; =gGameLanguage\n    mov r1, #1\n    ldrb r0, [r0]\n    str r1, [sp]\n    mov r3, #0\n    str r0, [sp, #4]\n    ldr r2, [r5, #0x10]\n    add r0, r4, #0\n    bl BufferString\n    mov r3, #1\n    str r3, [sp]\n    str r3, [sp, #4]\n    ldr r5, [r5, #8]\n    mov r2, #4\n    add r0, r4, #0\n    mov r1, #2\n    sub r2, r2, r5\n    bl BufferIntegerAsString\n    add r0, r7, #0\n    mov r1, #5\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r1, [sp, #0x20]\n    add r0, r4, #0\n    add r2, r5, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    bl String_Delete\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222E338: .word gGameLanguage"
    );
    #endif
}

void ov45_0222E33C(void) {
    /* Original at 0x0222E33C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r2, #0\n    ldr r2, [r5, #4]\n    add r0, r4, #0\n    mov r1, #0\n    add r6, r3, #0\n    bl BufferWiFiPlazaActivityName\n    ldr r0, _0222E398 ; =gGameLanguage\n    mov r1, #1\n    ldrb r0, [r0]\n    str r1, [sp]\n    mov r3, #0\n    str r0, [sp, #4]\n    ldr r2, [r5, #0x10]\n    add r0, r4, #0\n    bl BufferString\n    mov r3, #1\n    str r3, [sp]\n    str r3, [sp, #4]\n    ldr r5, [r5, #8]\n    mov r2, #8\n    add r0, r4, #0\n    mov r1, #2\n    sub r2, r2, r5\n    bl BufferIntegerAsString\n    add r0, r6, #0\n    mov r1, #9\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r1, [sp, #0x18]\n    add r0, r4, #0\n    add r2, r5, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    bl String_Delete\n    mov r0, #1\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0222E398: .word gGameLanguage"
    );
    #endif
}

void ov45_0222E39C(void) {
    /* Original at 0x0222E39C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    ldr r1, [r6, #4]\n    add r7, r2, #0\n    mov r4, #0\n    str r3, [sp, #8]\n    cmp r1, #0\n    bls _0222E3D4\n    ldr r0, _0222E410 ; =gGameLanguage\n    add r5, r6, #0\n    ldrb r0, [r0]\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [sp, #0xc]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    ldr r2, [r5, #0x10]\n    add r0, r7, #0\n    mov r3, #0\n    bl BufferString\n    ldr r1, [r6, #4]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r1\n    blo _0222E3B6\n    ldrb r0, [r6]\n    cmp r0, #4\n    bne _0222E3E4\n    add r0, r7, #0\n    mov r2, #5\n    bl BufferWiFiPlazaActivityName\n    b _0222E3EC\n    add r0, r7, #0\n    mov r2, #6\n    bl BufferWiFiPlazaActivityName\n    ldr r2, [r6, #4]\n    mov r1, #0xe\n    ldr r0, [sp, #8]\n    sub r1, r1, r2\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r1, [sp, #0x28]\n    add r0, r7, #0\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #1\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222E410: .word gGameLanguage"
    );
    #endif
}

void ov45_0222E414(void) {
    /* Original at 0x0222E414 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, [r0, #8]\n    add r4, r2, #0\n    add r5, r3, #0\n    cmp r0, #4\n    bhi _0222E464\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222E42C: ; jump table\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl BufferWiFiPlazaEventName\n    mov r1, #0xf\n    b _0222E468\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    bl BufferWiFiPlazaEventName\n    mov r1, #0x14\n    b _0222E468\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #2\n    bl BufferWiFiPlazaEventName\n    mov r1, #0x10\n    b _0222E468\n    mov r1, #0x11\n    b _0222E468\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r1, [sp, #0x10]\n    add r0, r4, #0\n    add r2, r5, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    bl String_Delete\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222E484(void) {
    /* Original at 0x0222E484 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0, #4]\n    cmp r0, #0x14\n    blo _0222E490\n    mov r0, #0\n    pop {r3, pc}\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _0222E49A\n    mov r0, #0\n    pop {r3, pc}\n    ldr r2, [sp, #8]\n    add r0, r3, #0\n    mov r1, #0x15\n    bl ReadMsgDataIntoString\n    mov r0, #1\n    pop {r3, pc}"
    );
    #endif
}

void ov45_0222E4A8(void) {
    /* Original at 0x0222E4A8 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    ldr r0, [r6, #4]\n    ldr r1, [r6, #8]\n    add r7, r2, #0\n    str r3, [sp, #8]\n    bl ov45_0222E5B4\n    cmp r0, #0\n    bne _0222E4C4\n    add sp, #0x10\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, [r6, #4]\n    add r0, r7, #0\n    mov r1, #0\n    bl BufferWiFiPlazaActivityName\n    ldr r1, [r6, #8]\n    mov r4, #0\n    cmp r1, #0\n    bls _0222E4FC\n    ldr r0, _0222E534 ; =gGameLanguage\n    add r5, r6, #0\n    ldrb r0, [r0]\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [sp, #0xc]\n    add r1, r4, #1\n    str r0, [sp, #4]\n    ldr r2, [r5, #0x10]\n    add r0, r7, #0\n    mov r3, #0\n    bl BufferString\n    ldr r1, [r6, #8]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r1\n    blo _0222E4DE\n    ldr r0, [r6, #4]\n    cmp r0, #1\n    bhi _0222E510\n    lsl r2, r1, #1\n    ldr r1, _0222E538 ; =ov45_02254BCA\n    ldr r0, [sp, #8]\n    ldrh r1, [r1, r2]\n    bl NewString_ReadMsgData\n    b _0222E51C\n    lsl r2, r1, #1\n    ldr r1, _0222E53C ; =ov45_02254BD2\n    ldr r0, [sp, #8]\n    ldrh r1, [r1, r2]\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r1, [sp, #0x28]\n    add r0, r7, #0\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #1\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222E534: .word gGameLanguage\n    _0222E538: .word ov45_02254BCA\n    _0222E53C: .word ov45_02254BD2"
    );
    #endif
}

void ov45_0222E540(void) {
    /* Original at 0x0222E540 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #2\n    blo _0222E548\n    mov r0, #0x14\n    bx lr\n    lsl r1, r1, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void ov45_0222E550(void) {
    /* Original at 0x0222E550 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #2\n    blo _0222E558\n    mov r0, #0x14\n    bx lr\n    lsl r1, r1, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void ov45_0222E560(void) {
    /* Original at 0x0222E560 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #8]\n    cmp r2, r1\n    bhi _0222E56A\n    mov r0, #0x14\n    bx lr\n    lsl r1, r1, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void ov45_0222E574(void) {
    /* Original at 0x0222E574 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #1\n    blo _0222E57C\n    mov r0, #0x14\n    bx lr\n    lsl r1, r1, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void ov45_0222E584(void) {
    /* Original at 0x0222E584 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #4]\n    cmp r2, r1\n    bhi _0222E58E\n    mov r0, #0x14\n    bx lr\n    lsl r1, r1, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #0x20]\n    bx lr"
    );
    #endif
}

u8 ov45_0222E598(void) {
    return 0x14;
}

u8 ov45_0222E59C(void) {
    return 0x14;
}

void ov45_0222E5A0(void) {
    /* Original at 0x0222E5A0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #8]\n    cmp r2, r1\n    bhi _0222E5AA\n    mov r0, #0x14\n    bx lr\n    lsl r1, r1, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void ov45_0222E5B4(void) {
    /* Original at 0x0222E5B4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #1\n    bhi _0222E5C4\n    cmp r1, #1\n    blo _0222E5C0\n    cmp r1, #4\n    bls _0222E5D0\n    mov r0, #0\n    bx lr\n    cmp r1, #2\n    blo _0222E5CC\n    cmp r1, #4\n    bls _0222E5D0\n    mov r0, #0\n    bx lr\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov45_0222E5D4(void) {
    /* Original at 0x0222E5D4 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0222E67C ; =_022577C0\n    add r6, r1, #0\n    ldr r0, [r0]\n    add r7, r2, #0\n    add r4, r3, #0\n    cmp r0, #0\n    beq _0222E5EA\n    bl GF_AssertFail\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    cmp r7, r0\n    blo _0222E5F6\n    bl GF_AssertFail\n    ldr r1, _0222E680 ; =0x00000988\n    add r0, r5, #0\n    bl Heap_Alloc\n    ldr r1, _0222E67C ; =_022577C0\n    ldr r2, _0222E680 ; =0x00000988\n    str r0, [r1]\n    mov r1, #0\n    bl memset\n    ldr r0, _0222E67C ; =_022577C0\n    ldr r0, [r0]\n    str r6, [r0]\n    add r0, r6, #0\n    bl sub_0202C6F4\n    ldr r1, _0222E67C ; =_022577C0\n    ldr r1, [r1]\n    str r0, [r1, #4]\n    add r0, r6, #0\n    bl Save_WiFiHistory_Get\n    ldr r6, _0222E67C ; =_022577C0\n    ldr r1, [r6]\n    str r0, [r1, #8]\n    ldr r3, [r6]\n    ldmia r4!, {r0, r1}\n    add r2, r3, #0\n    add r2, #0xc\n    stmia r2!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r4]\n    add r1, r7, #0\n    str r0, [r2]\n    ldr r0, [sp, #0x18]\n    add r2, r5, #0\n    str r0, [r3, #0x20]\n    ldr r0, [r6]\n    bl ov45_0222F848\n    add r0, r6, #0\n    ldr r0, [r0]\n    mov r1, #0x14\n    mov r2, #8\n    add r3, r5, #0\n    bl ov45_0222F9B8\n    add r0, r6, #0\n    ldr r0, [r0]\n    bl ov45_02230144\n    add r0, r6, #0\n    ldr r1, [r0]\n    mov r0, #0x6a\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0x80\n    add r2, r5, #0\n    bl ov45_022303E4\n    add r0, r6, #0\n    ldr r1, [r0]\n    ldr r0, _0222E684 ; =0x00000984\n    mov r2, #0\n    str r2, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222E67C: .word _022577C0\n    _0222E680: .word 0x00000988\n    _0222E684: .word 0x00000984"
    );
    #endif
}

void ov45_0222E688(void) {
    /* Original at 0x0222E688 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222E6C4 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222E696\n    bl GF_AssertFail\n    ldr r0, _0222E6C4 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x6a\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl ov45_022303FC\n    ldr r0, _0222E6C4 ; =_022577C0\n    ldr r0, [r0]\n    bl ov45_0222FA10\n    ldr r0, _0222E6C4 ; =_022577C0\n    ldr r0, [r0]\n    bl ov45_0222F878\n    ldr r0, _0222E6C4 ; =_022577C0\n    ldr r0, [r0]\n    bl Heap_Free\n    ldr r0, _0222E6C4 ; =_022577C0\n    mov r1, #0\n    str r1, [r0]\n    pop {r3, pc}\n    _0222E6C4: .word _022577C0"
    );
    #endif
}

void ov45_0222E6C8(void) {
    /* Original at 0x0222E6C8 */
    /* Requires manual decompilation - 110 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222E7C4 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222E6D6\n    mov r0, #0\n    pop {r3, pc}\n    bl ov45_02231514\n    cmp r0, #0xa\n    bhi _0222E744\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222E6EA: ; jump table\n    ldr r0, _0222E7C4 ; =_022577C0\n    mov r2, #0\n    ldr r1, [r0]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    strb r2, [r1, r0]\n    b _0222E744\n    ldr r0, _0222E7C4 ; =_022577C0\n    mov r2, #1\n    ldr r1, [r0]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    strb r2, [r1, r0]\n    b _0222E744\n    ldr r0, _0222E7C4 ; =_022577C0\n    mov r2, #2\n    ldr r1, [r0]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    strb r2, [r1, r0]\n    b _0222E744\n    ldr r0, _0222E7C4 ; =_022577C0\n    mov r2, #3\n    ldr r1, [r0]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    strb r2, [r1, r0]\n    b _0222E744\n    ldr r0, _0222E7C4 ; =_022577C0\n    mov r2, #4\n    ldr r1, [r0]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    strb r2, [r1, r0]\n    ldr r0, _0222E7C4 ; =_022577C0\n    mov r1, #0x4b\n    ldr r0, [r0]\n    lsl r1, r1, #2\n    ldrb r1, [r0, r1]\n    cmp r1, #2\n    bne _0222E7BC\n    bl ov45_022302E4\n    ldr r0, _0222E7C4 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x67\n    lsl r0, r0, #2\n    add r0, r1, r0\n    bl ov45_022320C4\n    bl ov45_022321E0\n    cmp r0, #3\n    bhi _0222E7BC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222E778: ; jump table\n    ldr r1, _0222E7C4 ; =_022577C0\n    ldr r0, _0222E7C8 ; =0x0000012E\n    ldr r2, [r1]\n    mov r3, #0\n    strb r3, [r2, r0]\n    ldr r1, [r1]\n    mov r2, #4\n    sub r0, r0, #1\n    strb r2, [r1, r0]\n    b _0222E7BC\n    ldr r0, _0222E7C4 ; =_022577C0\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _0222E7C8 ; =0x0000012E\n    strb r2, [r1, r0]\n    b _0222E7BC\n    ldr r0, _0222E7C4 ; =_022577C0\n    ldr r2, [r0]\n    ldr r0, _0222E7C8 ; =0x0000012E\n    ldrb r1, [r2, r0]\n    cmp r1, #3\n    beq _0222E7BC\n    mov r1, #2\n    strb r1, [r2, r0]\n    b _0222E7BC\n    ldr r0, _0222E7C4 ; =_022577C0\n    mov r2, #4\n    ldr r1, [r0]\n    ldr r0, _0222E7C8 ; =0x0000012E\n    strb r2, [r1, r0]\n    bl ov45_0222E96C\n    pop {r3, pc}\n    nop\n    _0222E7C4: .word _022577C0\n    _0222E7C8: .word 0x0000012E"
    );
    #endif
}

void ov45_0222E7CC(void) {
    /* Original at 0x0222E7CC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222E7F4 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222E7DA\n    bl GF_AssertFail\n    ldr r0, _0222E7F4 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222E7F8 ; =0x00000984\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _0222E7EC\n    bl ov45_02233220\n    pop {r3, pc}\n    bl ov45_022331E8\n    pop {r3, pc}\n    nop\n    _0222E7F4: .word _022577C0\n    _0222E7F8: .word 0x00000984"
    );
    #endif
}

void ov45_0222E7FC(void) {
    ov45_02233204();
}

void ov45_0222E804(void) {
    ov45_0222E810();
}

void ov45_0222E810(void) {
    /* Original at 0x0222E810 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x50\n    add r5, r0, #0\n    ldr r0, _0222E8A0 ; =_022577C0\n    add r4, r1, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222E824\n    bl GF_AssertFail\n    ldr r0, _0222E8A4 ; =ov45_0222FC44\n    str r0, [sp, #0xc]\n    ldr r0, _0222E8A8 ; =ov45_0222FCE0\n    str r0, [sp, #0x10]\n    ldr r0, _0222E8AC ; =ov45_0222FD50\n    str r0, [sp, #0x14]\n    ldr r0, _0222E8B0 ; =ov45_0222FDD4\n    str r0, [sp, #0x18]\n    ldr r0, _0222E8B4 ; =ov45_0222FDD8\n    str r0, [sp, #0x1c]\n    ldr r0, _0222E8B8 ; =ov45_0222FE84\n    str r0, [sp, #0x20]\n    ldr r0, _0222E8BC ; =ov45_0222FEC4\n    str r0, [sp, #0x24]\n    ldr r0, _0222E8C0 ; =ov45_0222FF40\n    str r0, [sp, #0x28]\n    ldr r0, _0222E8C4 ; =ov45_0222FF7C\n    str r0, [sp, #0x2c]\n    ldr r0, _0222E8C8 ; =ov45_02230008\n    str r0, [sp, #0x30]\n    ldr r0, _0222E8CC ; =ov45_02230050\n    str r0, [sp, #0x34]\n    ldr r0, _0222E8D0 ; =ov45_02230064\n    str r0, [sp, #0x38]\n    ldr r0, _0222E8D4 ; =ov45_02230090\n    str r0, [sp, #0x3c]\n    ldr r0, _0222E8D8 ; =ov45_022300B0\n    str r0, [sp, #0x40]\n    ldr r0, _0222E8DC ; =ov45_022300DC\n    str r0, [sp, #0x44]\n    ldr r0, _0222E8E0 ; =ov45_02230108\n    str r0, [sp, #0x48]\n    ldr r0, _0222E8E4 ; =ov45_02230130\n    str r0, [sp, #0x4c]\n    ldr r0, _0222E8A0 ; =_022577C0\n    ldr r0, [r0]\n    ldr r0, [r0, #4]\n    bl sub_0202C08C\n    str r0, [sp]\n    ldr r0, _0222E8A0 ; =_022577C0\n    str r5, [sp, #4]\n    ldr r0, [r0]\n    ldr r1, _0222E8E8 ; =ov45_02254F14\n    ldr r0, [r0, #0x28]\n    add r2, r4, #0\n    str r0, [sp, #8]\n    ldr r0, _0222E8EC ; =ov45_02254F04\n    add r3, sp, #0xc\n    bl ov45_022310C0\n    ldr r2, _0222E8A0 ; =_022577C0\n    ldr r1, _0222E8F0 ; =0x00000984\n    ldr r3, [r2]\n    str r0, [r3, r1]\n    ldr r0, [r2]\n    ldr r0, [r0, r1]\n    bl ov45_0222F74C\n    add sp, #0x50\n    pop {r3, r4, r5, pc}\n    nop\n    _0222E8A0: .word _022577C0\n    _0222E8A4: .word ov45_0222FC44\n    _0222E8A8: .word ov45_0222FCE0\n    _0222E8AC: .word ov45_0222FD50\n    _0222E8B0: .word ov45_0222FDD4\n    _0222E8B4: .word ov45_0222FDD8\n    _0222E8B8: .word ov45_0222FE84\n    _0222E8BC: .word ov45_0222FEC4\n    _0222E8C0: .word ov45_0222FF40\n    _0222E8C4: .word ov45_0222FF7C\n    _0222E8C8: .word ov45_02230008\n    _0222E8CC: .word ov45_02230050\n    _0222E8D0: .word ov45_02230064\n    _0222E8D4: .word ov45_02230090\n    _0222E8D8: .word ov45_022300B0\n    _0222E8DC: .word ov45_022300DC\n    _0222E8E0: .word ov45_02230108\n    _0222E8E4: .word ov45_02230130\n    _0222E8E8: .word ov45_02254F14\n    _0222E8EC: .word ov45_02254F04\n    _0222E8F0: .word 0x00000984"
    );
    #endif
}

void ov45_0222E8F4(void) {
    /* Original at 0x0222E8F4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222E918 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222E902\n    bl GF_AssertFail\n    ldr r0, _0222E918 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldrb r0, [r1, r0]\n    cmp r0, #2\n    bne _0222E914\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _0222E918: .word _022577C0"
    );
    #endif
}

void ov45_0222E91C(void) {
    /* Original at 0x0222E91C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222E940 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222E92A\n    bl GF_AssertFail\n    bl ov45_0222F78C\n    bl ov45_02231490\n    bl ov45_0222F74C\n    cmp r0, #0\n    bne _0222E93E\n    bl GF_AssertFail\n    pop {r3, pc}\n    _0222E940: .word _022577C0"
    );
    #endif
}

void ov45_0222E944(void) {
    /* Original at 0x0222E944 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222E968 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222E952\n    bl GF_AssertFail\n    ldr r0, _0222E968 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _0222E964\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _0222E968: .word _022577C0"
    );
    #endif
}

void ov45_0222E96C(void) {
    /* Original at 0x0222E96C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222E9B0 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222E97A\n    bl GF_AssertFail\n    ldr r0, _0222E9B0 ; =_022577C0\n    ldr r1, _0222E9B4 ; =0x0000012D\n    ldr r0, [r0]\n    ldrb r2, [r0, r1]\n    cmp r2, #4\n    beq _0222E992\n    add r1, r1, #1\n    ldrb r1, [r0, r1]\n    cmp r1, #4\n    bne _0222E992\n    mov r0, #4\n    pop {r3, pc}\n    ldr r2, _0222E9B8 ; =0x00000133\n    ldrb r1, [r0, r2]\n    cmp r1, #0\n    beq _0222E99E\n    mov r0, #4\n    pop {r3, pc}\n    sub r1, r2, #1\n    ldrb r1, [r0, r1]\n    cmp r1, #0\n    beq _0222E9AA\n    mov r0, #4\n    pop {r3, pc}\n    sub r1, r2, #7\n    ldrb r0, [r0, r1]\n    pop {r3, pc}\n    _0222E9B0: .word _022577C0\n    _0222E9B4: .word 0x0000012D\n    _0222E9B8: .word 0x00000133"
    );
    #endif
}

void ov45_0222E9BC(void) {
    /* Original at 0x0222E9BC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222E9D8 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222E9CA\n    bl GF_AssertFail\n    ldr r0, _0222E9D8 ; =_022577C0\n    ldr r1, _0222E9DC ; =0x00000131\n    ldr r3, [r0]\n    mov r2, #0\n    ldrb r0, [r3, r1]\n    strb r2, [r3, r1]\n    pop {r3, pc}\n    _0222E9D8: .word _022577C0\n    _0222E9DC: .word 0x00000131"
    );
    #endif
}

void ov45_0222E9E0(void) {
    /* Original at 0x0222E9E0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222E9F4 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222E9EE\n    bl GF_AssertFail\n    bl ov45_02232580\n    pop {r3, pc}\n    _0222E9F4: .word _022577C0"
    );
    #endif
}

void ov45_0222E9F8(void) {
    /* Original at 0x0222E9F8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222EA28 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EA08\n    bl GF_AssertFail\n    bl ov45_02232580\n    add r1, r0, #0\n    ldr r0, _0222EA28 ; =_022577C0\n    add r2, r4, #0\n    ldr r0, [r0]\n    bl ov45_0222F88C\n    ldr r1, _0222EA28 ; =_022577C0\n    add r0, r4, #0\n    ldr r1, [r1]\n    mov r2, #0\n    ldr r1, [r1, #0x28]\n    bl ov45_022325B0\n    pop {r4, pc}\n    _0222EA28: .word _022577C0"
    );
    #endif
}

void ov45_0222EA2C(void) {
    /* Original at 0x0222EA2C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222EA48 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EA3C\n    bl GF_AssertFail\n    ldr r0, _0222EA48 ; =_022577C0\n    add r1, r4, #0\n    ldr r0, [r0]\n    bl ov45_0222F8D8\n    pop {r4, pc}\n    _0222EA48: .word _022577C0"
    );
    #endif
}

void ov45_0222EA4C(void) {
    /* Original at 0x0222EA4C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0222EA74 ; =_022577C0\n    add r4, r1, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EA5E\n    bl GF_AssertFail\n    ldr r0, _0222EA74 ; =_022577C0\n    add r1, r5, #0\n    ldr r0, [r0]\n    bl ov45_0222F954\n    ldr r1, [r0]\n    ldr r0, [r0, #4]\n    str r1, [r4]\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    nop\n    _0222EA74: .word _022577C0"
    );
    #endif
}

void ov45_0222EA78(void) {
    /* Original at 0x0222EA78 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp]\n    lsr r6, r0, #4\n    add r5, r0, #0\n    ldr r0, _0222EAD0 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EA92\n    bl GF_AssertFail\n    mov r4, #0\n    ldr r0, _0222EAD0 ; =_022577C0\n    add r1, r4, #0\n    ldr r0, [r0]\n    mov r2, #0\n    bl ov45_0222FB5C\n    mov r1, #0\n    add r7, r0, #0\n    mvn r1, r1\n    cmp r7, r1\n    beq _0222EAC4\n    add r1, sp, #4\n    bl ov45_0222EA4C\n    ldr r2, [sp, #4]\n    ldr r1, [sp, #8]\n    sub r0, r2, r5\n    mov ip, r1\n    mov r0, ip\n    sbc r0, r6\n    bge _0222EAC4\n    add r5, r2, #0\n    add r6, r1, #0\n    str r7, [sp]\n    add r4, r4, #1\n    cmp r4, #0x14\n    blt _0222EA94\n    ldr r0, [sp]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0222EAD0: .word _022577C0"
    );
    #endif
}

void ov45_0222EAD4(void) {
    /* Original at 0x0222EAD4 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #4]\n    lsr r7, r0, #4\n    add r6, r0, #0\n    ldr r0, _0222EB34 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EAF0\n    bl GF_AssertFail\n    mov r4, #0\n    ldr r0, _0222EB34 ; =_022577C0\n    add r1, r4, #0\n    ldr r0, [r0]\n    mov r2, #0\n    bl ov45_0222FB5C\n    mov r1, #0\n    add r5, r0, #0\n    mvn r1, r1\n    cmp r5, r1\n    beq _0222EB28\n    ldr r1, [sp]\n    cmp r5, r1\n    beq _0222EB28\n    add r1, sp, #8\n    bl ov45_0222EA4C\n    ldr r2, [sp, #8]\n    ldr r1, [sp, #0xc]\n    sub r0, r2, r6\n    mov ip, r1\n    mov r0, ip\n    sbc r0, r7\n    bge _0222EB28\n    add r6, r2, #0\n    add r7, r1, #0\n    str r5, [sp, #4]\n    add r4, r4, #1\n    cmp r4, #0x14\n    blt _0222EAF2\n    ldr r0, [sp, #4]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222EB34: .word _022577C0"
    );
    #endif
}

void ov45_0222EB38(void) {
    /* Original at 0x0222EB38 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222EB6C ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EB48\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl ov45_0222F7B0\n    bl ov45_02231C8C\n    bl ov45_0222F74C\n    cmp r0, #1\n    bne _0222EB6A\n    ldr r2, _0222EB6C ; =_022577C0\n    ldr r1, _0222EB70 ; =0x0000012D\n    ldr r3, [r2]\n    strb r4, [r3, r1]\n    ldr r2, [r2]\n    mov r3, #0\n    add r1, r1, #2\n    strb r3, [r2, r1]\n    pop {r4, pc}\n    _0222EB6C: .word _022577C0\n    _0222EB70: .word 0x0000012D"
    );
    #endif
}

void ov45_0222EB74(void) {
    GF_AssertFail();
}

void ov45_0222EB94(void) {
    /* Original at 0x0222EB94 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222EBBC ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EBA2\n    bl GF_AssertFail\n    bl ov45_02231EC0\n    bl ov45_0222F74C\n    cmp r0, #1\n    bne _0222EBB8\n    ldr r1, _0222EBBC ; =_022577C0\n    mov r3, #3\n    ldr r2, [r1]\n    ldr r1, _0222EBC0 ; =0x0000012E\n    strb r3, [r2, r1]\n    pop {r3, pc}\n    nop\n    _0222EBBC: .word _022577C0\n    _0222EBC0: .word 0x0000012E"
    );
    #endif
}

void ov45_0222EBC4(void) {
    /* Original at 0x0222EBC4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222EBE8 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EBD2\n    bl GF_AssertFail\n    ldr r0, _0222EBE8 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222EBEC ; =0x0000012E\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _0222EBE2\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _0222EBE8: .word _022577C0\n    _0222EBEC: .word 0x0000012E"
    );
    #endif
}

void ov45_0222EBF0(void) {
    /* Original at 0x0222EBF0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222EC0C ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EC00\n    bl GF_AssertFail\n    ldr r0, _0222EC0C ; =_022577C0\n    add r1, r4, #0\n    ldr r0, [r0]\n    bl ov45_0222FBD8\n    pop {r4, pc}\n    _0222EC0C: .word _022577C0"
    );
    #endif
}

void ov45_0222EC10(void) {
    /* Original at 0x0222EC10 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222EC38 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EC20\n    bl GF_AssertFail\n    ldr r1, _0222EC38 ; =_022577C0\n    mov r0, #0x47\n    ldr r2, [r1]\n    lsl r0, r0, #2\n    ldrsh r2, [r2, r0]\n    add r0, r0, #4\n    str r2, [r4]\n    ldr r1, [r1]\n    ldr r0, [r1, r0]\n    str r0, [r4, #4]\n    pop {r4, pc}\n    nop\n    _0222EC38: .word _022577C0"
    );
    #endif
}

void ov45_0222EC3C(void) {
    /* Original at 0x0222EC3C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222EC64 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EC4C\n    bl GF_AssertFail\n    ldr r1, _0222EC64 ; =_022577C0\n    mov r0, #0x49\n    ldr r2, [r1]\n    lsl r0, r0, #2\n    ldrsh r2, [r2, r0]\n    add r0, r0, #4\n    str r2, [r4]\n    ldr r1, [r1]\n    ldr r0, [r1, r0]\n    str r0, [r4, #4]\n    pop {r4, pc}\n    nop\n    _0222EC64: .word _022577C0"
    );
    #endif
}

void ov45_0222EC68(void) {
    /* Original at 0x0222EC68 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    ldr r0, _0222EC74 ; =_022577C0\n    ldr r3, _0222EC78 ; =ov45_0222FB24\n    ldr r0, [r0]\n    mov r2, #0\n    bx r3\n    _0222EC74: .word _022577C0\n    _0222EC78: .word ov45_0222FB24"
    );
    #endif
}

void ov45_0222EC7C(void) {
    /* Original at 0x0222EC7C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    ldr r0, _0222EC88 ; =_022577C0\n    ldr r3, _0222EC8C ; =ov45_0222FB24\n    ldr r0, [r0]\n    mov r2, #1\n    bx r3\n    _0222EC88: .word _022577C0\n    _0222EC8C: .word ov45_0222FB24"
    );
    #endif
}

void ov45_0222EC90(void) {
    /* Original at 0x0222EC90 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    ldr r0, _0222EC9C ; =_022577C0\n    ldr r3, _0222ECA0 ; =ov45_0222FB5C\n    ldr r0, [r0]\n    mov r2, #0\n    bx r3\n    _0222EC9C: .word _022577C0\n    _0222ECA0: .word ov45_0222FB5C"
    );
    #endif
}

void ov45_0222ECA4(void) {
    /* Original at 0x0222ECA4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    ldr r0, _0222ECB0 ; =_022577C0\n    ldr r3, _0222ECB4 ; =ov45_0222FB5C\n    ldr r0, [r0]\n    mov r2, #1\n    bx r3\n    _0222ECB0: .word _022577C0\n    _0222ECB4: .word ov45_0222FB5C"
    );
    #endif
}

void ov45_0222ECB8(void) {
    /* Original at 0x0222ECB8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222ECD8 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222ECC8\n    bl GF_AssertFail\n    ldr r0, _0222ECD8 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x67\n    lsl r0, r0, #2\n    add r0, r1, r0\n    ldmia r0!, {r2, r3}\n    stmia r4!, {r2, r3}\n    pop {r4, pc}\n    _0222ECD8: .word _022577C0"
    );
    #endif
}

void ov45_0222ECDC(void) {
    /* Original at 0x0222ECDC */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0222ED78 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222ECEC\n    bl GF_AssertFail\n    ldr r1, _0222ED78 ; =_022577C0\n    mov r0, #1\n    ldr r2, [r1]\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    ldrb r1, [r2, r1]\n    cmp r1, #2\n    beq _0222ED02\n    cmp r1, #4\n    beq _0222ED02\n    mov r0, #0\n    cmp r0, #0\n    bne _0222ED0A\n    bl GF_AssertFail\n    cmp r5, #8\n    blt _0222ED12\n    bl GF_AssertFail\n    ldr r0, _0222ED78 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x6d\n    lsl r0, r0, #2\n    add r0, r1, r0\n    cmp r5, #7\n    bhi _0222ED74\n    add r1, r5, r5\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0222ED2C: ; jump table\n    ldr r4, [r0]\n    b _0222ED74\n    ldr r4, [r0, #4]\n    b _0222ED74\n    ldrb r4, [r0, #0xc]\n    b _0222ED74\n    ldrb r4, [r0, #0xd]\n    b _0222ED74\n    ldr r0, [r0, #8]\n    mov r4, #1\n    tst r0, r4\n    bne _0222ED74\n    mov r4, #0\n    b _0222ED74\n    mov r1, #0x13\n    bl ov45_022303BC\n    add r4, r0, #0\n    b _0222ED74\n    mov r1, #0x10\n    bl ov45_022303BC\n    add r4, r0, #0\n    b _0222ED74\n    mov r1, #0x11\n    bl ov45_022303BC\n    add r4, r0, #0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0222ED78: .word _022577C0"
    );
    #endif
}

void ov45_0222ED7C(void) {
    /* Original at 0x0222ED7C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222EDA4 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222ED8A\n    bl GF_AssertFail\n    ldr r0, _0222EDA4 ; =_022577C0\n    ldr r0, [r0]\n    bl ov45_0222F7B4\n    cmp r0, #0\n    beq _0222EDA2\n    ldr r1, _0222EDA4 ; =_022577C0\n    mov r3, #1\n    ldr r2, [r1]\n    mov r1, #0x13\n    lsl r1, r1, #4\n    strb r3, [r2, r1]\n    pop {r3, pc}\n    _0222EDA4: .word _022577C0"
    );
    #endif
}

void ov45_0222EDA8(void) {
    /* Original at 0x0222EDA8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0222EDC0 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _0222EDBA\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _0222EDC0: .word _022577C0"
    );
    #endif
}

void ov45_0222EDC4(void) {
    /* Original at 0x0222EDC4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222EDEC ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EDD4\n    bl GF_AssertFail\n    cmp r4, #0x14\n    blo _0222EDDC\n    bl GF_AssertFail\n    ldr r0, _0222EDEC ; =_022577C0\n    ldr r1, [r0]\n    lsl r0, r4, #2\n    add r1, r1, r0\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    ldrh r0, [r1, r0]\n    pop {r4, pc}\n    _0222EDEC: .word _022577C0"
    );
    #endif
}

void ov45_0222EDF0(void) {
    /* Original at 0x0222EDF0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222EE18 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EE00\n    bl GF_AssertFail\n    cmp r4, #0x14\n    blo _0222EE08\n    bl GF_AssertFail\n    ldr r0, _0222EE18 ; =_022577C0\n    ldr r1, [r0]\n    lsl r0, r4, #2\n    add r1, r1, r0\n    ldr r0, _0222EE1C ; =0x00000136\n    ldrb r0, [r1, r0]\n    pop {r4, pc}\n    nop\n    _0222EE18: .word _022577C0\n    _0222EE1C: .word 0x00000136"
    );
    #endif
}

void ov45_0222EE20(void) {
    /* Original at 0x0222EE20 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0222EE4C ; =_022577C0\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r6, r2, #0\n    cmp r0, #0\n    bne _0222EE34\n    bl GF_AssertFail\n    ldr r2, _0222EE4C ; =_022577C0\n    mov r1, #0x61\n    ldr r0, [r2]\n    lsl r1, r1, #2\n    str r5, [r0, r1]\n    ldr r3, [r2]\n    add r0, r1, #4\n    str r4, [r3, r0]\n    ldr r0, [r2]\n    add r1, #8\n    str r6, [r0, r1]\n    pop {r4, r5, r6, pc}\n    _0222EE4C: .word _022577C0"
    );
    #endif
}

void ov45_0222EE50(void) {
    /* Original at 0x0222EE50 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0222EE7C ; =_022577C0\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r6, r2, #0\n    cmp r0, #0\n    bne _0222EE64\n    bl GF_AssertFail\n    ldr r2, _0222EE7C ; =_022577C0\n    mov r1, #0x19\n    ldr r0, [r2]\n    lsl r1, r1, #4\n    str r5, [r0, r1]\n    ldr r3, [r2]\n    add r0, r1, #4\n    str r4, [r3, r0]\n    ldr r0, [r2]\n    add r1, #8\n    str r6, [r0, r1]\n    pop {r4, r5, r6, pc}\n    _0222EE7C: .word _022577C0"
    );
    #endif
}

void ov45_0222EE80(void) {
    /* Original at 0x0222EE80 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222EEB4 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EE8E\n    bl GF_AssertFail\n    ldr r0, _0222EEB4 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r1, r1, r0\n    mov r0, #0\n    strb r0, [r1]\n    strb r0, [r1, #1]\n    strb r0, [r1, #2]\n    strb r0, [r1, #3]\n    strb r0, [r1, #4]\n    strb r0, [r1, #5]\n    strb r0, [r1, #6]\n    strb r0, [r1, #7]\n    strb r0, [r1, #8]\n    strb r0, [r1, #9]\n    strb r0, [r1, #0xa]\n    strb r0, [r1, #0xb]\n    pop {r3, pc}\n    _0222EEB4: .word _022577C0"
    );
    #endif
}

void ov45_0222EEB8(void) {
    /* Original at 0x0222EEB8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222EEEC ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222EEC6\n    bl GF_AssertFail\n    ldr r0, _0222EEEC ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x19\n    lsl r0, r0, #4\n    add r1, r1, r0\n    mov r0, #0\n    strb r0, [r1]\n    strb r0, [r1, #1]\n    strb r0, [r1, #2]\n    strb r0, [r1, #3]\n    strb r0, [r1, #4]\n    strb r0, [r1, #5]\n    strb r0, [r1, #6]\n    strb r0, [r1, #7]\n    strb r0, [r1, #8]\n    strb r0, [r1, #9]\n    strb r0, [r1, #0xa]\n    strb r0, [r1, #0xb]\n    pop {r3, pc}\n    _0222EEEC: .word _022577C0"
    );
    #endif
}

void ov45_0222EEF0(void) {
    /* Original at 0x0222EEF0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0222EF48 ; =_022577C0\n    add r6, r1, #0\n    ldr r0, [r0]\n    add r4, r2, #0\n    cmp r0, #0\n    bne _0222EF04\n    bl GF_AssertFail\n    ldr r0, _0222EF48 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    cmp r0, r5\n    bhi _0222EF16\n    bl GF_AssertFail\n    ldr r0, _0222EF48 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r1, [r1, r0]\n    lsl r0, r5, #3\n    add r0, r1, r0\n    ldr r0, [r0, #4]\n    cmp r4, r0\n    beq _0222EF2E\n    bl GF_AssertFail\n    mov r0, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    add r3, r4, #0\n    bl ov45_0223247C\n    bl ov45_0222F74C\n    cmp r0, #1\n    beq _0222EF46\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    _0222EF48: .word _022577C0"
    );
    #endif
}

void ov45_0222EF4C(void) {
    /* Original at 0x0222EF4C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0222EFA8 ; =_022577C0\n    add r6, r1, #0\n    ldr r0, [r0]\n    add r7, r2, #0\n    add r4, r3, #0\n    cmp r0, #0\n    bne _0222EF62\n    bl GF_AssertFail\n    ldr r0, _0222EFA8 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    cmp r0, r5\n    bhi _0222EF74\n    bl GF_AssertFail\n    ldr r0, _0222EFA8 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r1, [r1, r0]\n    lsl r0, r5, #3\n    add r0, r1, r0\n    ldr r0, [r0, #4]\n    cmp r4, r0\n    beq _0222EF8C\n    bl GF_AssertFail\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r7, #0\n    add r3, r4, #0\n    bl ov45_02232500\n    bl ov45_0222F74C\n    cmp r0, #1\n    beq _0222EFA4\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222EFA8: .word _022577C0"
    );
    #endif
}

void ov45_0222EFAC(void) {
    /* Original at 0x0222EFAC */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0222F020 ; =_022577C0\n    add r6, r1, #0\n    ldr r0, [r0]\n    add r4, r2, #0\n    cmp r0, #0\n    bne _0222EFC0\n    bl GF_AssertFail\n    ldr r0, _0222F020 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x65\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    cmp r0, r5\n    bhi _0222EFD2\n    bl GF_AssertFail\n    ldr r0, _0222F020 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r1, [r1, r0]\n    lsl r0, r5, #3\n    add r0, r1, r0\n    ldr r0, [r0, #4]\n    cmp r4, r0\n    beq _0222EFEA\n    bl GF_AssertFail\n    ldr r0, _0222F020 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222F024 ; =0x0000012D\n    ldrb r0, [r1, r0]\n    cmp r0, #4\n    bne _0222EFFA\n    bl GF_AssertFail\n    ldr r0, _0222F020 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222F024 ; =0x0000012D\n    ldrb r0, [r1, r0]\n    bl ov45_0222F7B0\n    add r1, r5, #0\n    add r2, r6, #0\n    add r3, r4, #0\n    bl ov45_0223247C\n    bl ov45_0222F74C\n    cmp r0, #1\n    beq _0222F01C\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    nop\n    _0222F020: .word _022577C0\n    _0222F024: .word 0x0000012D"
    );
    #endif
}

void ov45_0222F028(void) {
    /* Original at 0x0222F028 */
    /* Requires manual decompilation - 132 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, _0222F138 ; =_022577C0\n    add r6, r1, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F03A\n    bl GF_AssertFail\n    ldr r0, _0222F138 ; =_022577C0\n    add r1, r4, #0\n    ldr r0, [r0]\n    bl ov45_0223021C\n    cmp r0, #1\n    bne _0222F04C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, _0222F138 ; =_022577C0\n    ldr r1, _0222F13C ; =0x0000069C\n    ldr r0, [r2]\n    ldrh r3, [r0, r1]\n    cmp r3, #3\n    beq _0222F05C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r3, #0x4c\n    add r5, r4, #0\n    mul r5, r3\n    add r3, r0, r5\n    add r0, r1, #0\n    sub r0, #0xe4\n    str r4, [r3, r0]\n    ldr r0, [r2]\n    mov r7, #1\n    add r3, r0, r5\n    add r0, r1, #0\n    sub r0, #0xe0\n    str r6, [r3, r0]\n    ldr r0, [r2]\n    add r3, r0, r5\n    add r0, r1, #0\n    sub r0, #0xdc\n    str r7, [r3, r0]\n    ldr r0, [r2]\n    mov r7, #0\n    add r3, r0, r5\n    add r0, r1, #0\n    sub r0, #0xd8\n    str r7, [r3, r0]\n    ldr r2, [r2]\n    sub r1, #0xe4\n    add r0, r2, r1\n    mov r1, #0x67\n    lsl r1, r1, #2\n    add r0, r0, r5\n    add r1, r2, r1\n    bl ov45_02230378\n    ldr r0, _0222F138 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222F140 ; =0x000005B8\n    add r0, r1, r0\n    add r0, r0, r5\n    bl ov45_0223285C\n    bl ov45_0222F74C\n    cmp r0, #0\n    bne _0222F0B8\n    bl GF_AssertFail\n    ldr r1, _0222F138 ; =_022577C0\n    mov r0, #0x4c\n    add r5, r4, #0\n    mul r5, r0\n    ldr r1, [r1]\n    mov r0, #1\n    add r2, r1, r5\n    ldr r1, _0222F144 ; =0x000005FC\n    strh r0, [r2, r1]\n    bl ov45_02232580\n    ldr r1, _0222F138 ; =_022577C0\n    mov r7, #6\n    ldr r2, [r1]\n    lsl r7, r7, #8\n    add r2, r2, r5\n    str r0, [r2, r7]\n    ldr r2, [r1]\n    ldr r0, _0222F148 ; =0x00000708\n    add r3, r2, r5\n    sub r2, r7, #2\n    strh r0, [r3, r2]\n    add r2, r0, #0\n    ldr r3, [r1]\n    sub r2, #0x6c\n    strh r4, [r3, r2]\n    add r2, r0, #0\n    ldr r3, [r1]\n    mov r4, #1\n    sub r2, #0x6a\n    strb r4, [r3, r2]\n    ldr r2, [r1]\n    mov r3, #0\n    sub r0, #0x69\n    strb r3, [r2, r0]\n    ldr r4, [r1]\n    sub r0, r7, #2\n    add r1, r4, r5\n    ldrh r0, [r1, r0]\n    mov r1, #0x1e\n    bl _s32_div_f\n    add r3, r0, #0\n    add r0, r7, #0\n    sub r0, #0x18\n    add r0, r4, r0\n    add r0, r0, r5\n    add r1, r6, #0\n    mov r2, #1\n    bl ov00_021E5CEC\n    ldr r1, _0222F138 ; =_022577C0\n    ldr r0, _0222F14C ; =ov45_02230390\n    ldr r1, [r1]\n    bl ov00_021E5CD0\n    ldr r1, _0222F138 ; =_022577C0\n    ldr r0, _0222F150 ; =ov45_02230394\n    ldr r1, [r1]\n    bl ov00_021E5CA0\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222F138: .word _022577C0\n    _0222F13C: .word 0x0000069C\n    _0222F140: .word 0x000005B8\n    _0222F144: .word 0x000005FC\n    _0222F148: .word 0x00000708\n    _0222F14C: .word ov45_02230390\n    _0222F150: .word ov45_02230394"
    );
    #endif
}

void ov45_0222F154(void) {
    /* Original at 0x0222F154 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _0222F1B0 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F162\n    bl GF_AssertFail\n    ldr r0, _0222F1B0 ; =_022577C0\n    ldr r2, [r0]\n    ldr r0, _0222F1B4 ; =0x0000069C\n    ldrh r1, [r2, r0]\n    cmp r1, #3\n    beq _0222F1AC\n    add r0, r0, #2\n    ldrb r0, [r2, r0]\n    cmp r0, #0\n    beq _0222F1AC\n    bl ov45_02232CA4\n    bl ov45_0222F74C\n    cmp r0, #0\n    bne _0222F186\n    bl GF_AssertFail\n    ldr r0, _0222F1B0 ; =_022577C0\n    ldr r4, [r0]\n    bl ov45_02232580\n    ldr r1, _0222F1B4 ; =0x0000069C\n    add r2, r0, #0\n    ldrh r1, [r4, r1]\n    add r0, r4, #0\n    bl ov45_022301E0\n    cmp r0, #0\n    bne _0222F1A2\n    bl GF_AssertFail\n    ldr r0, _0222F1B0 ; =_022577C0\n    mov r2, #0\n    ldr r1, [r0]\n    ldr r0, _0222F1B8 ; =0x0000069E\n    strb r2, [r1, r0]\n    pop {r4, pc}\n    nop\n    _0222F1B0: .word _022577C0\n    _0222F1B4: .word 0x0000069C\n    _0222F1B8: .word 0x0000069E"
    );
    #endif
}

void ov45_0222F1BC(void) {
    /* Original at 0x0222F1BC */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r0, _0222F210 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F1CA\n    bl GF_AssertFail\n    ldr r4, _0222F210 ; =_022577C0\n    ldr r3, _0222F214 ; =0x0000069E\n    ldr r1, [r4]\n    ldrb r0, [r1, r3]\n    cmp r0, #0\n    beq _0222F20C\n    sub r2, r3, #2\n    ldrh r5, [r1, r2]\n    mov r2, #0x4c\n    mov r0, #1\n    add r6, r5, #0\n    mul r6, r2\n    add r5, r1, r6\n    add r1, r3, #0\n    sub r1, #0xda\n    str r0, [r5, r1]\n    add r0, r3, #0\n    ldr r1, [r4]\n    sub r0, #0xe6\n    add r4, r1, r0\n    sub r0, r3, #2\n    ldrh r0, [r1, r0]\n    add r1, r0, #0\n    mul r1, r2\n    add r0, r4, r1\n    bl ov45_02232BB0\n    bl ov45_0222F74C\n    cmp r0, #0\n    bne _0222F20C\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    nop\n    _0222F210: .word _022577C0\n    _0222F214: .word 0x0000069E"
    );
    #endif
}

void ov45_0222F218(void) {
    /* Original at 0x0222F218 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222F24C ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F226\n    bl GF_AssertFail\n    ldr r0, _0222F24C ; =_022577C0\n    ldr r1, _0222F250 ; =0x0000069C\n    ldr r3, [r0]\n    ldrh r2, [r3, r1]\n    cmp r2, #3\n    bne _0222F236\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #0x4c\n    mul r0, r2\n    add r0, r3, r0\n    sub r1, #0xd8\n    ldr r0, [r0, r1]\n    cmp r0, #1\n    bne _0222F248\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _0222F24C: .word _022577C0\n    _0222F250: .word 0x0000069C"
    );
    #endif
}

void ov45_0222F254(void) {
    GF_AssertFail();
}

void ov45_0222F274(void) {
    /* Original at 0x0222F274 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222F290 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F284\n    bl GF_AssertFail\n    ldr r0, _0222F290 ; =_022577C0\n    add r1, r4, #0\n    ldr r0, [r0]\n    bl ov45_0223021C\n    pop {r4, pc}\n    _0222F290: .word _022577C0"
    );
    #endif
}

void ov45_0222F294(void) {
    /* Original at 0x0222F294 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222F2CC ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F2A4\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl ov45_0222F274\n    cmp r0, #0\n    bne _0222F2B2\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _0222F2CC ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x4c\n    mul r0, r4\n    add r1, r1, r0\n    ldr r0, _0222F2D0 ; =0x000005C4\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _0222F2C8\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _0222F2CC: .word _022577C0\n    _0222F2D0: .word 0x000005C4"
    );
    #endif
}

void ov45_0222F2D4(void) {
    /* Original at 0x0222F2D4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222F310 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F2E4\n    bl GF_AssertFail\n    cmp r4, #3\n    blt _0222F2EC\n    bl GF_AssertFail\n    ldr r0, _0222F310 ; =_022577C0\n    add r1, r4, #0\n    ldr r0, [r0]\n    bl ov45_0223021C\n    cmp r0, #0\n    bne _0222F2FE\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _0222F310 ; =_022577C0\n    add r1, r4, #0\n    ldr r0, [r0]\n    bl ov45_022302B0\n    ldr r1, [r0, #4]\n    ldr r0, [r0, #8]\n    sub r0, r1, r0\n    pop {r4, pc}\n    _0222F310: .word _022577C0"
    );
    #endif
}

void ov45_0222F314(void) {
    /* Original at 0x0222F314 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222F34C ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F324\n    bl GF_AssertFail\n    cmp r4, #3\n    blt _0222F32C\n    bl GF_AssertFail\n    ldr r0, _0222F34C ; =_022577C0\n    add r1, r4, #0\n    ldr r0, [r0]\n    bl ov45_0223021C\n    cmp r0, #0\n    bne _0222F33E\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _0222F34C ; =_022577C0\n    add r1, r4, #0\n    ldr r0, [r0]\n    bl ov45_022302B0\n    ldr r0, [r0, #8]\n    pop {r4, pc}\n    _0222F34C: .word _022577C0"
    );
    #endif
}

void ov45_0222F350(void) {
    /* Original at 0x0222F350 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0222F3D4 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F360\n    bl GF_AssertFail\n    ldr r0, _0222F3D4 ; =_022577C0\n    add r1, r5, #0\n    ldr r0, [r0]\n    bl ov45_0223021C\n    cmp r0, #0\n    bne _0222F372\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r3, _0222F3D4 ; =_022577C0\n    ldr r2, _0222F3D8 ; =0x0000069C\n    ldr r0, [r3]\n    ldrh r1, [r0, r2]\n    cmp r1, #3\n    beq _0222F382\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r1, #0x4c\n    add r4, r5, #0\n    mul r4, r1\n    add r1, r2, #0\n    add r6, r0, r4\n    sub r1, #0xd8\n    ldr r1, [r6, r1]\n    cmp r1, #1\n    bne _0222F398\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    strh r5, [r0, r2]\n    ldr r5, [r3]\n    sub r2, #0x9e\n    add r0, r5, r4\n    ldrh r0, [r0, r2]\n    mov r1, #0x1e\n    bl _s32_div_f\n    ldr r1, _0222F3DC ; =0x000005E8\n    add r3, r0, #0\n    add r0, r5, r1\n    add r2, r5, r4\n    sub r1, #0x2c\n    ldr r1, [r2, r1]\n    add r0, r0, r4\n    mov r2, #0\n    bl ov00_021E5CEC\n    ldr r1, _0222F3D4 ; =_022577C0\n    ldr r0, _0222F3E0 ; =ov45_02230390\n    ldr r1, [r1]\n    bl ov00_021E5CD0\n    ldr r1, _0222F3D4 ; =_022577C0\n    ldr r0, _0222F3E4 ; =ov45_02230394\n    ldr r1, [r1]\n    bl ov00_021E5CA0\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _0222F3D4: .word _022577C0\n    _0222F3D8: .word 0x0000069C\n    _0222F3DC: .word 0x000005E8\n    _0222F3E0: .word ov45_02230390\n    _0222F3E4: .word ov45_02230394"
    );
    #endif
}

void ov45_0222F3E8(void) {
    /* Original at 0x0222F3E8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222F424 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F3F8\n    bl GF_AssertFail\n    cmp r4, #3\n    blt _0222F400\n    bl GF_AssertFail\n    ldr r0, _0222F424 ; =_022577C0\n    add r1, r4, #0\n    ldr r0, [r0]\n    bl ov45_0223021C\n    cmp r0, #0\n    bne _0222F412\n    ldr r0, _0222F428 ; =0x00000708\n    pop {r4, pc}\n    ldr r0, _0222F424 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x4c\n    mul r0, r4\n    add r1, r1, r0\n    ldr r0, _0222F42C ; =0x000005FE\n    ldrh r0, [r1, r0]\n    pop {r4, pc}\n    nop\n    _0222F424: .word _022577C0\n    _0222F428: .word 0x00000708\n    _0222F42C: .word 0x000005FE"
    );
    #endif
}

void ov45_0222F430(void) {
    /* Original at 0x0222F430 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222F45C ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F43E\n    bl GF_AssertFail\n    ldr r0, _0222F45C ; =_022577C0\n    ldr r1, _0222F460 ; =0x0000069C\n    ldr r3, [r0]\n    ldrh r2, [r3, r1]\n    cmp r2, #3\n    bne _0222F450\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, pc}\n    mov r0, #0x4c\n    mul r0, r2\n    add r0, r3, r0\n    sub r1, #0x9c\n    ldr r0, [r0, r1]\n    pop {r3, pc}\n    _0222F45C: .word _022577C0\n    _0222F460: .word 0x0000069C"
    );
    #endif
}

void ov45_0222F464(void) {
    GF_AssertFail();
}

void ov45_0222F484(void) {
    /* Original at 0x0222F484 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222F4A8 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F494\n    bl GF_AssertFail\n    ldr r0, _0222F4A8 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x6a\n    lsl r0, r0, #4\n    add r0, r1, r0\n    add r1, r4, #0\n    bl ov45_02230434\n    pop {r4, pc}\n    nop\n    _0222F4A8: .word _022577C0"
    );
    #endif
}

void ov45_0222F4AC(void) {
    /* Original at 0x0222F4AC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222F4D0 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F4BC\n    bl GF_AssertFail\n    ldr r0, _0222F4D0 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x6a\n    lsl r0, r0, #4\n    add r0, r1, r0\n    add r1, r4, #0\n    bl ov45_0223045C\n    pop {r4, pc}\n    nop\n    _0222F4D0: .word _022577C0"
    );
    #endif
}

void ov45_0222F4D4(void) {
    /* Original at 0x0222F4D4 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222F520 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F4E4\n    bl GF_AssertFail\n    cmp r4, #3\n    blt _0222F4EC\n    bl GF_AssertFail\n    ldr r0, _0222F520 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x26\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    cmp r0, #1\n    bne _0222F4FE\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl ov45_02232E60\n    bl ov45_0222F74C\n    cmp r0, #1\n    beq _0222F510\n    bl GF_AssertFail\n    ldr r0, _0222F520 ; =_022577C0\n    mov r2, #1\n    ldr r1, [r0]\n    mov r0, #0x26\n    lsl r0, r0, #6\n    str r2, [r1, r0]\n    pop {r4, pc}\n    nop\n    _0222F520: .word _022577C0"
    );
    #endif
}

void ov45_0222F524(void) {
    GF_AssertFail(0x26);
}

void ov45_0222F544(void) {
    /* Original at 0x0222F544 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222F608 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F554\n    bl GF_AssertFail\n    cmp r4, #0xb\n    blt _0222F55C\n    bl GF_AssertFail\n    cmp r4, #0xa\n    bhi _0222F5FE\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222F56C: ; jump table\n    ldr r0, _0222F608 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222F60C ; =0x000006A8\n    ldr r0, [r1, r0]\n    pop {r4, pc}\n    ldr r0, _0222F608 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222F610 ; =0x000006AC\n    ldr r0, [r1, r0]\n    pop {r4, pc}\n    ldr r0, _0222F608 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222F614 ; =0x00000804\n    ldr r0, [r1, r0]\n    pop {r4, pc}\n    ldr r0, _0222F608 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222F610 ; =0x000006AC\n    ldr r1, [r1, r0]\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    cmp r1, r0\n    blt _0222F5B4\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _0222F608 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222F618 ; =0x00000808\n    ldr r0, [r1, r0]\n    pop {r4, pc}\n    ldr r0, _0222F608 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222F61C ; =0x0000080C\n    ldr r0, [r1, r0]\n    pop {r4, pc}\n    ldr r0, _0222F608 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222F620 ; =0x00000964\n    ldr r0, [r1, r0]\n    pop {r4, pc}\n    ldr r0, _0222F608 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222F61C ; =0x0000080C\n    ldr r1, [r1, r0]\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    cmp r1, r0\n    blt _0222F5EA\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _0222F608 ; =_022577C0\n    sub r4, #8\n    ldr r1, [r0]\n    lsl r0, r4, #2\n    add r1, r1, r0\n    ldr r0, _0222F624 ; =0x00000974\n    ldr r0, [r1, r0]\n    pop {r4, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0222F608: .word _022577C0\n    _0222F60C: .word 0x000006A8\n    _0222F610: .word 0x000006AC\n    _0222F614: .word 0x00000804\n    _0222F618: .word 0x00000808\n    _0222F61C: .word 0x0000080C\n    _0222F620: .word 0x00000964\n    _0222F624: .word 0x00000974"
    );
    #endif
}

void ov45_0222F628(void) {
    /* Original at 0x0222F628 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222F6A4 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F638\n    bl GF_AssertFail\n    cmp r4, #8\n    blt _0222F640\n    bl GF_AssertFail\n    cmp r4, #7\n    bhi _0222F69C\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222F650: ; jump table\n    ldr r0, _0222F6A4 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x6b\n    lsl r0, r0, #4\n    add r0, r1, r0\n    pop {r4, pc}\n    ldr r0, _0222F6A4 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222F6A8 ; =0x0000078C\n    add r2, r1, r0\n    sub r1, r4, #1\n    mov r0, #0x24\n    mul r0, r1\n    add r0, r2, r0\n    pop {r4, pc}\n    ldr r0, _0222F6A4 ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x81\n    lsl r0, r0, #4\n    add r0, r1, r0\n    pop {r4, pc}\n    ldr r0, _0222F6A4 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0222F6AC ; =0x000008EC\n    add r2, r1, r0\n    sub r1, r4, #5\n    mov r0, #0x24\n    mul r0, r1\n    add r0, r2, r0\n    pop {r4, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}\n    _0222F6A4: .word _022577C0\n    _0222F6A8: .word 0x0000078C\n    _0222F6AC: .word 0x000008EC"
    );
    #endif
}

void ov45_0222F6B0(void) {
    /* Original at 0x0222F6B0 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0222F700 ; =_022577C0\n    add r4, r1, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F6C2\n    bl GF_AssertFail\n    cmp r5, #2\n    blt _0222F6CA\n    bl GF_AssertFail\n    cmp r4, #0xc\n    blo _0222F6D2\n    bl GF_AssertFail\n    cmp r5, #2\n    blt _0222F6DA\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    cmp r4, #0xc\n    blo _0222F6E2\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    cmp r5, #0\n    bne _0222F6F2\n    ldr r0, _0222F700 ; =_022577C0\n    ldr r0, [r0]\n    add r1, r0, r4\n    ldr r0, _0222F704 ; =0x000007F8\n    ldrb r0, [r1, r0]\n    pop {r3, r4, r5, pc}\n    ldr r0, _0222F700 ; =_022577C0\n    ldr r0, [r0]\n    add r1, r0, r4\n    ldr r0, _0222F708 ; =0x00000958\n    ldrb r0, [r1, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _0222F700: .word _022577C0\n    _0222F704: .word 0x000007F8\n    _0222F708: .word 0x00000958"
    );
    #endif
}

void ov45_0222F70C(void) {
    /* Original at 0x0222F70C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _0222F744 ; =_022577C0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222F71A\n    bl GF_AssertFail\n    mov r0, #0\n    add r1, r0, #0\n    bl ov00_021E5CD0\n    mov r0, #0\n    add r1, r0, #0\n    bl ov00_021E5CA0\n    ldr r2, _0222F744 ; =_022577C0\n    ldr r0, _0222F748 ; =0x0000069C\n    ldr r1, [r2]\n    mov r3, #3\n    strh r3, [r1, r0]\n    add r1, r0, #2\n    ldr r3, [r2]\n    mov r4, #0\n    strb r4, [r3, r1]\n    ldr r1, [r2]\n    add r0, r0, #3\n    strb r4, [r1, r0]\n    pop {r4, pc}\n    _0222F744: .word _022577C0\n    _0222F748: .word 0x0000069C"
    );
    #endif
}

void ov45_0222F74C(void) {
    /* Original at 0x0222F74C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r1, #1\n    cmp r0, #7\n    bhi _0222F780\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222F760: ; jump table\n    mov r1, #0\n    b _0222F786\n    bl GF_AssertFail\n    mov r1, #0\n    b _0222F786\n    mov r1, #0\n    b _0222F786\n    bl GF_AssertFail\n    mov r1, #0\n    add r0, r1, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov45_0222F78C(void) {
    /* Original at 0x0222F78C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222F7A0 ; =_022577C0\n    ldr r0, _0222F7A4 ; =0x00000133\n    ldr r2, [r1]\n    mov r3, #0\n    strb r3, [r2, r0]\n    ldr r1, [r1]\n    sub r0, r0, #1\n    strb r3, [r1, r0]\n    bx lr\n    nop\n    _0222F7A0: .word _022577C0\n    _0222F7A4: .word 0x00000133"
    );
    #endif
}

void ov45_0222F7A8(void) {
    /* Original at 0x0222F7A8 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "sub r0, r0, #1\n    bpl _0222F7AE\n    mov r0, #4\n    bx lr"
    );
    #endif
}

void ov45_0222F7B0(void) {
    /* Original at 0x0222F7B0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r0, #1\n    bx lr"
    );
    #endif
}

void ov45_0222F7B4(void) {
    /* Original at 0x0222F7B4 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp, #4]\n    ldr r0, [r0, #8]\n    bl WifiHistory_GetPlayerCountry\n    add r4, r0, #0\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #8]\n    bl WiFiHistory_GetPlayerRegion\n    cmp r4, #0\n    bne _0222F7D4\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r7, _0222F840 ; =0x00000136\n    ldr r2, [sp, #4]\n    mov r1, #0\n    sub r3, r7, #2\n    add r5, r7, #1\n    ldrb r6, [r2, r5]\n    cmp r6, #0\n    beq _0222F7FE\n    ldrh r6, [r2, r3]\n    cmp r4, r6\n    bne _0222F7F6\n    ldrb r6, [r2, r7]\n    cmp r0, r6\n    bne _0222F7F6\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r1, #1\n    add r2, r2, #4\n    cmp r1, #0x14\n    blt _0222F7DE\n    cmp r1, #0x14\n    blt _0222F80C\n    bl GF_AssertFail\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r2, r1, #2\n    ldr r1, [sp, #4]\n    mov r3, #0x4d\n    add r2, r1, r2\n    lsl r3, r3, #2\n    strh r4, [r2, r3]\n    add r1, r3, #2\n    strb r0, [r2, r1]\n    mov r1, #1\n    add r0, r3, #3\n    strb r1, [r2, r0]\n    mov r0, #0x50\n    str r0, [sp]\n    ldr r2, _0222F844 ; =ov45_02254EF0\n    ldr r4, [sp, #4]\n    ldr r2, [r2]\n    sub r0, #0x51\n    mov r1, #0\n    add r3, r4, r3\n    bl ov45_022322A4\n    bl ov45_0222F74C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222F840: .word 0x00000136\n    _0222F844: .word ov45_02254EF0"
    );
    #endif
}

void ov45_0222F848(void) {
    /* Original at 0x0222F848 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r0, #0x14\n    add r4, r5, #0\n    mul r4, r0\n    add r0, r2, #0\n    add r1, r4, #0\n    bl Heap_Alloc\n    ldr r1, _0222F874 ; =_022577C0\n    ldr r2, [r1]\n    str r0, [r2, #0x24]\n    ldr r0, [r1]\n    mov r1, #0\n    ldr r0, [r0, #0x24]\n    add r2, r4, #0\n    bl memset\n    ldr r0, _0222F874 ; =_022577C0\n    ldr r0, [r0]\n    str r5, [r0, #0x28]\n    pop {r3, r4, r5, pc}\n    _0222F874: .word _022577C0"
    );
    #endif
}

void ov45_0222F878(void) {
    /* Original at 0x0222F878 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0222F884 ; =_022577C0\n    ldr r3, _0222F888 ; =Heap_Free\n    ldr r0, [r0]\n    ldr r0, [r0, #0x24]\n    bx r3\n    nop\n    _0222F884: .word _022577C0\n    _0222F888: .word Heap_Free"
    );
    #endif
}

void ov45_0222F88C(void) {
    ov45_0222F898();
}

void ov45_0222F898(void) {
    /* Original at 0x0222F898 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r2, [sp]\n    mov r2, #0\n    add r4, r0, #0\n    add r6, r3, #0\n    bl ov45_0222FB24\n    add r7, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r7, r0\n    bne _0222F8B4\n    bl GF_AssertFail\n    ldr r2, [r4, #0x28]\n    ldr r5, [r4, #0x24]\n    add r4, r2, #0\n    mul r4, r7\n    cmp r2, r6\n    bls _0222F8CA\n    add r0, r5, r4\n    mov r1, #0\n    bl memset\n    b _0222F8CC\n    add r6, r2, #0\n    ldr r1, [sp]\n    add r0, r5, r4\n    add r2, r6, #0\n    bl memcpy\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222F8D8(void) {
    /* Original at 0x0222F8D8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    add r5, r0, #0\n    bl ov45_0222FB24\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0222F8F0\n    bl GF_AssertFail\n    ldr r0, [r5, #0x28]\n    ldr r2, [r5, #0x24]\n    add r1, r0, #0\n    mul r1, r4\n    add r0, r2, r1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222F8FC(void) {
    /* Original at 0x0222F8FC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    add r5, r0, #0\n    bl ov45_0222FB24\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0222F914\n    bl GF_AssertFail\n    ldr r2, [r5, #0x28]\n    ldr r1, [r5, #0x24]\n    add r0, r2, #0\n    mul r0, r4\n    add r0, r1, r0\n    mov r1, #0\n    bl memset\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222F928(void) {
    /* Original at 0x0222F928 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    mov r2, #0\n    add r5, r0, #0\n    bl ov45_0222FB24\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    bne _0222F942\n    bl GF_AssertFail\n    mov r0, #0xc\n    mul r0, r6\n    add r2, r5, r0\n    ldmia r4!, {r0, r1}\n    add r2, #0x2c\n    stmia r2!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r2]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0222F954(void) {
    /* Original at 0x0222F954 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    add r5, r0, #0\n    bl ov45_0222FB24\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0222F96C\n    bl GF_AssertFail\n    mov r0, #0xc\n    add r5, #0x2c\n    mul r0, r4\n    add r0, r5, r0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222F978(void) {
    /* Original at 0x0222F978 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    add r5, r0, #0\n    bl ov45_0222FB24\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0222F990\n    bl GF_AssertFail\n    mov r0, #0xc\n    add r1, r4, #0\n    mul r1, r0\n    add r5, #0x2c\n    mov r0, #0\n    add r2, r5, r1\n    strb r0, [r5, r1]\n    strb r0, [r2, #1]\n    strb r0, [r2, #2]\n    strb r0, [r2, #3]\n    strb r0, [r2, #4]\n    strb r0, [r2, #5]\n    strb r0, [r2, #6]\n    strb r0, [r2, #7]\n    strb r0, [r2, #8]\n    strb r0, [r2, #9]\n    strb r0, [r2, #0xa]\n    strb r0, [r2, #0xb]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222F9B8(void) {
    /* Original at 0x0222F9B8 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    str r1, [sp]\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    mov r4, #0\n    add r5, r7, #0\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222F9D6\n    bl GF_AssertFail\n    cmp r4, #0\n    bne _0222F9DE\n    ldr r6, [sp]\n    b _0222F9E0\n    ldr r6, [sp, #4]\n    mov r0, #0x47\n    mov r1, #0\n    lsl r0, r0, #2\n    strh r1, [r5, r0]\n    ldr r0, [sp, #8]\n    lsl r1, r6, #2\n    bl Heap_Alloc\n    mov r1, #0x12\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    sub r0, r1, #2\n    strh r6, [r5, r0]\n    add r0, r7, #0\n    add r1, r4, #0\n    bl ov45_0222FA40\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, #2\n    blt _0222F9C8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222FA10(void) {
    /* Original at 0x0222FA10 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    mov r7, #0x12\n    add r5, r0, #0\n    add r6, r4, #0\n    lsl r7, r7, #4\n    ldr r0, [r5, r7]\n    cmp r0, #0\n    bne _0222FA26\n    bl GF_AssertFail\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    mov r0, #0x12\n    lsl r0, r0, #4\n    str r6, [r5, r0]\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, #2\n    blt _0222FA1C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov45_0222FA40(void) {
    /* Original at 0x0222FA40 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    lsl r2, r1, #3\n    add r0, r0, r2\n    mov r2, #0x47\n    mov r1, #0\n    lsl r2, r2, #2\n    strh r1, [r0, r2]\n    add r2, r2, #2\n    ldrh r2, [r0, r2]\n    cmp r2, #0\n    ble _0222FA6E\n    mov r2, #0x12\n    lsl r2, r2, #4\n    add r6, r1, #0\n    sub r5, r1, #1\n    sub r3, r2, #2\n    ldr r4, [r0, r2]\n    add r1, r1, #1\n    str r5, [r4, r6]\n    ldrh r4, [r0, r3]\n    add r6, r6, #4\n    cmp r1, r4\n    blt _0222FA60\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void ov45_0222FA74(void) {
    /* Original at 0x0222FA74 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    str r1, [sp]\n    add r4, r2, #0\n    bl ov45_0222FB24\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0222FAF0\n    ldr r0, _0222FAF4 ; =0x0000011E\n    lsl r4, r4, #3\n    add r5, r7, r0\n    sub r0, r0, #2\n    add r1, r7, r0\n    add r0, r1, r4\n    str r0, [sp, #4]\n    ldrsh r1, [r1, r4]\n    ldrh r0, [r5, r4]\n    cmp r1, r0\n    blt _0222FAA4\n    bl GF_AssertFail\n    ldr r1, [sp, #4]\n    mov r0, #0\n    ldrh r2, [r5, r4]\n    ldrsh r1, [r1, r0]\n    cmp r1, r2\n    bge _0222FAF0\n    cmp r2, #0\n    ble _0222FAD4\n    mov r1, #0x12\n    add r2, r7, r4\n    lsl r1, r1, #4\n    ldr r1, [r2, r1]\n    ldr r3, _0222FAF4 ; =0x0000011E\n    sub r5, r0, #1\n    ldr r6, [r1]\n    cmp r6, r5\n    bne _0222FACA\n    str r0, [sp, #8]\n    b _0222FAD4\n    ldrh r6, [r2, r3]\n    add r0, r0, #1\n    add r1, r1, #4\n    cmp r0, r6\n    blt _0222FAC0\n    mov r0, #0x12\n    add r1, r7, r4\n    lsl r0, r0, #4\n    ldr r2, [r1, r0]\n    ldr r0, [sp, #8]\n    lsl r1, r0, #2\n    ldr r0, [sp]\n    str r0, [r2, r1]\n    ldr r0, [sp, #4]\n    mov r1, #0\n    ldrsh r0, [r0, r1]\n    add r1, r0, #1\n    ldr r0, [sp, #4]\n    strh r1, [r0]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0222FAF4: .word 0x0000011E"
    );
    #endif
}

void ov45_0222FAF8(void) {
    /* Original at 0x0222FAF8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    bl ov45_0222FB24\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222FB22\n    lsl r2, r4, #3\n    mov r3, #0x12\n    add r4, r5, r2\n    lsl r3, r3, #4\n    ldr r4, [r4, r3]\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    sub r0, r3, #4\n    add r1, r5, r0\n    ldrsh r0, [r1, r2]\n    sub r0, r0, #1\n    strh r0, [r1, r2]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_0222FB24(void) {
    /* Original at 0x0222FB24 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    lsl r2, r2, #3\n    add r0, r0, r2\n    ldr r2, _0222FB58 ; =0x0000011E\n    mov r3, #0\n    ldrh r4, [r0, r2]\n    cmp r4, #0\n    ble _0222FB50\n    add r2, r2, #2\n    ldr r5, [r0, r2]\n    ldr r2, _0222FB58 ; =0x0000011E\n    ldr r4, [r5]\n    cmp r1, r4\n    bne _0222FB46\n    add r0, r3, #0\n    pop {r4, r5}\n    bx lr\n    ldrh r4, [r0, r2]\n    add r3, r3, #1\n    add r5, r5, #4\n    cmp r3, r4\n    blt _0222FB3A\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5}\n    bx lr\n    _0222FB58: .word 0x0000011E"
    );
    #endif
}

void ov45_0222FB5C(void) {
    /* Original at 0x0222FB5C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    lsl r6, r2, #3\n    add r4, r1, #0\n    ldr r0, _0222FB80 ; =0x0000011E\n    add r1, r5, r6\n    ldrh r0, [r1, r0]\n    cmp r4, r0\n    blt _0222FB72\n    bl GF_AssertFail\n    mov r0, #0x12\n    add r1, r5, r6\n    lsl r0, r0, #4\n    ldr r1, [r1, r0]\n    lsl r0, r4, #2\n    ldr r0, [r1, r0]\n    pop {r4, r5, r6, pc}\n    _0222FB80: .word 0x0000011E"
    );
    #endif
}

void ov45_0222FB84(void) {
    /* Original at 0x0222FB84 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    bl ov45_0222F7B0\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov45_0222FA40\n    ldr r0, _0222FBD4 ; =0x0000011E\n    mov r4, #0\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    ble _0222FBD2\n    add r6, r5, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov45_0222FB5C\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0222FBC6\n    ldr r0, [r6, #0x34]\n    cmp r7, r0\n    bne _0222FBC6\n    add r0, r5, #0\n    mov r2, #1\n    bl ov45_0222FA74\n    ldr r0, _0222FBD4 ; =0x0000011E\n    add r4, r4, #1\n    ldrh r0, [r5, r0]\n    add r6, #0xc\n    cmp r4, r0\n    blt _0222FBA4\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222FBD4: .word 0x0000011E"
    );
    #endif
}

void ov45_0222FBD8(void) {
    /* Original at 0x0222FBD8 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    str r1, [sp]\n    cmp r1, #4\n    blt _0222FBE8\n    bl GF_AssertFail\n    ldr r0, [sp]\n    bl ov45_0222F7B0\n    str r0, [sp, #4]\n    ldr r0, _0222FC3C ; =0x0000011E\n    mov r7, #0\n    ldrh r0, [r6, r0]\n    add r4, r7, #0\n    cmp r0, #0\n    ble _0222FC26\n    add r5, r6, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov45_0222FB5C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222FC1A\n    ldr r1, [r5, #0x34]\n    ldr r0, [sp, #4]\n    cmp r0, r1\n    bne _0222FC1A\n    add r7, r7, #1\n    ldr r0, _0222FC3C ; =0x0000011E\n    add r4, r4, #1\n    ldrh r0, [r6, r0]\n    add r5, #0xc\n    cmp r4, r0\n    blt _0222FBFE\n    ldr r1, _0222FC40 ; =ov45_02254C30\n    ldr r0, [sp]\n    ldrb r0, [r1, r0]\n    cmp r0, r7\n    ble _0222FC36\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222FC3C: .word 0x0000011E\n    _0222FC40: .word ov45_02254C30"
    );
    #endif
}

void ov45_0222FC44(void) {
    /* Original at 0x0222FC44 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    cmp r1, #0\n    bne _0222FC84\n    ldr r0, _0222FCD0 ; =_022577C0\n    mov r3, #1\n    ldr r2, [r0]\n    ldr r1, _0222FCD4 ; =0x000005B4\n    lsl r3, r3, #0xa\n    str r3, [r2, r1]\n    ldr r2, [r0]\n    mov r0, #0x6d\n    lsl r0, r0, #2\n    add r0, r2, r0\n    add r1, r2, r1\n    bl ov45_02232170\n    bl ov45_0222F74C\n    cmp r0, #0\n    bne _0222FC72\n    bl GF_AssertFail\n    ldr r2, _0222FCD8 ; =ov45_02254EF0\n    mov r0, #0\n    mov r1, #0\n    ldr r2, [r2]\n    mvn r0, r0\n    add r3, r1, #0\n    bl ov45_02232304\n    pop {r3, r4, r5, pc}\n    ldr r0, _0222FCD0 ; =_022577C0\n    ldr r4, [r0]\n    add r0, r1, #0\n    bl ov45_0222F7A8\n    ldr r1, _0222FCDC ; =0x0000012D\n    ldrb r2, [r4, r1]\n    cmp r2, r0\n    bne _0222FCC4\n    cmp r5, #1\n    bne _0222FCBC\n    mov r2, #1\n    add r0, r1, #2\n    strb r2, [r4, r0]\n    ldr r0, _0222FCD0 ; =_022577C0\n    ldr r0, [r0]\n    ldrb r1, [r0, r1]\n    bl ov45_0222FB84\n    bl ov45_02232580\n    add r1, r0, #0\n    ldr r0, _0222FCD0 ; =_022577C0\n    mov r2, #1\n    ldr r0, [r0]\n    bl ov45_0222FA74\n    pop {r3, r4, r5, pc}\n    mov r2, #2\n    add r0, r1, #2\n    strb r2, [r4, r0]\n    pop {r3, r4, r5, pc}\n    bl GF_AssertFail\n    bl ov45_0222EB94\n    pop {r3, r4, r5, pc}\n    nop\n    _0222FCD0: .word _022577C0\n    _0222FCD4: .word 0x000005B4\n    _0222FCD8: .word ov45_02254EF0\n    _0222FCDC: .word 0x0000012D"
    );
    #endif
}

void ov45_0222FCE0(void) {
    /* Original at 0x0222FCE0 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    str r3, [sp]\n    bl ov45_02232580\n    cmp r5, r0\n    bne _0222FD04\n    ldr r0, _0222FD4C ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x67\n    lsl r0, r0, #2\n    add r0, r1, r0\n    bl ov45_022320C4\n    mov r4, #1\n    b _0222FD06\n    mov r4, #0\n    ldr r0, _0222FD4C ; =_022577C0\n    add r1, r5, #0\n    ldr r0, [r0]\n    mov r2, #0\n    bl ov45_0222FA74\n    ldr r0, _0222FD4C ; =_022577C0\n    ldr r3, [sp]\n    ldr r0, [r0]\n    add r1, r5, #0\n    add r2, r7, #0\n    bl ov45_0222F898\n    ldr r0, _0222FD4C ; =_022577C0\n    add r1, r5, #0\n    ldr r0, [r0]\n    add r2, r6, #0\n    bl ov45_0222F928\n    ldr r0, _0222FD4C ; =_022577C0\n    add r1, r5, #0\n    ldr r6, [r0]\n    add r0, r6, #0\n    bl ov45_0222F8D8\n    add r3, r4, #0\n    ldr r4, _0222FD4C ; =_022577C0\n    add r1, r0, #0\n    ldr r4, [r4]\n    ldr r2, [r6, #0x20]\n    ldr r4, [r4, #0xc]\n    add r0, r5, #0\n    blx r4\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222FD4C: .word _022577C0"
    );
    #endif
}

void ov45_0222FD50(void) {
    /* Original at 0x0222FD50 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0222FDCC ; =_022577C0\n    add r1, r5, #0\n    ldr r0, [r0]\n    mov r2, #0\n    bl ov45_0222FB24\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222FDC8\n    mov r6, #0\n    ldr r7, _0222FDCC ; =_022577C0\n    add r4, r6, #0\n    ldr r1, [r7]\n    mov r0, #6\n    add r2, r1, r4\n    lsl r0, r0, #8\n    ldr r0, [r2, r0]\n    cmp r5, r0\n    bne _0222FD88\n    ldr r2, _0222FDD0 ; =0x000005B8\n    add r0, r5, #0\n    add r1, r1, r2\n    add r1, r1, r4\n    bl ov45_02230008\n    add r6, r6, #1\n    add r4, #0x4c\n    cmp r6, #3\n    blt _0222FD6E\n    ldr r0, _0222FDCC ; =_022577C0\n    ldr r2, [r0]\n    add r0, r5, #0\n    ldr r1, [r2, #0x20]\n    ldr r2, [r2, #0x10]\n    blx r2\n    ldr r0, _0222FDCC ; =_022577C0\n    add r1, r5, #0\n    ldr r0, [r0]\n    bl ov45_0222F978\n    ldr r0, _0222FDCC ; =_022577C0\n    add r1, r5, #0\n    ldr r0, [r0]\n    bl ov45_0222F8FC\n    ldr r0, _0222FDCC ; =_022577C0\n    add r1, r5, #0\n    ldr r0, [r0]\n    mov r2, #0\n    bl ov45_0222FAF8\n    ldr r0, _0222FDCC ; =_022577C0\n    add r1, r5, #0\n    ldr r0, [r0]\n    mov r2, #1\n    bl ov45_0222FAF8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222FDCC: .word _022577C0\n    _0222FDD0: .word 0x000005B8"
    );
    #endif
}

void ov45_0222FDD4(void) {
    /* Original at 0x0222FDD4 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov45_0222FDD8(void) {
    /* Original at 0x0222FDD8 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, _0222FE7C ; =_022577C0\n    add r4, r1, #0\n    add r5, r2, #0\n    ldr r0, [r0]\n    add r1, r7, #0\n    mov r2, #0\n    str r3, [sp]\n    bl ov45_0222FB24\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222FE78\n    cmp r4, #5\n    bhi _0222FE78\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222FE06: ; jump table\n    mov r1, #0\n    b _0222FE32\n    add r0, r4, #0\n    bl ov45_0222F7A8\n    ldr r1, _0222FE7C ; =_022577C0\n    ldr r2, [r1]\n    ldr r1, _0222FE80 ; =0x0000012D\n    ldrb r1, [r2, r1]\n    cmp r1, r0\n    bne _0222FE78\n    mov r1, #1\n    b _0222FE32\n    mov r1, #0\n    b _0222FE32\n    _0222FE30: ; 0x0222FE30 unreachable\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r1, #0\n    mov r0, #0xc\n    mul r4, r0\n    ldr r0, _0222FE7C ; =_022577C0\n    mov r1, #0x62\n    ldr r0, [r0]\n    lsl r1, r1, #2\n    add r0, r0, r4\n    ldr r2, [r0, r1]\n    cmp r2, r5\n    bls _0222FE78\n    sub r1, r1, #4\n    ldr r0, [r0, r1]\n    lsl r5, r5, #3\n    add r0, r0, r5\n    ldr r1, [r0, #4]\n    ldr r0, [sp, #0x18]\n    cmp r1, r0\n    bls _0222FE5C\n    bl GF_AssertFail\n    ldr r0, _0222FE7C ; =_022577C0\n    mov r3, #0x61\n    ldr r0, [r0]\n    lsl r3, r3, #2\n    add r6, r0, r4\n    ldr r4, [r6, r3]\n    add r3, #8\n    add r2, r4, r5\n    ldr r1, [sp]\n    ldr r2, [r2, #4]\n    ldr r3, [r6, r3]\n    ldr r4, [r4, r5]\n    add r0, r7, #0\n    blx r4\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222FE7C: .word _022577C0\n    _0222FE80: .word 0x0000012D"
    );
    #endif
}

void ov45_0222FE84(void) {
    /* Original at 0x0222FE84 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _0222FEBC ; =ov45_02254EF0\n    ldr r0, [sp, #8]\n    ldr r1, [r1]\n    bl strcmp\n    cmp r0, #0\n    bne _0222FEB8\n    ldr r0, _0222FEC0 ; =_022577C0\n    mov r2, #0x50\n    ldr r1, [r0]\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    add r0, r1, r0\n    ldr r1, [sp, #0xc]\n    bl memcpy\n    ldr r0, _0222FEC0 ; =_022577C0\n    ldr r2, [r0]\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldrb r1, [r2, r0]\n    cmp r1, #0\n    beq _0222FEB8\n    mov r1, #0\n    strb r1, [r2, r0]\n    pop {r3, pc}\n    nop\n    _0222FEBC: .word ov45_02254EF0\n    _0222FEC0: .word _022577C0"
    );
    #endif
}

void ov45_0222FEC4(void) {
    /* Original at 0x0222FEC4 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0222FF38 ; =_022577C0\n    add r7, r1, #0\n    ldr r0, [r0]\n    add r1, r5, #0\n    mov r2, #0\n    bl ov45_0222FB24\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222FF36\n    ldr r0, _0222FF38 ; =_022577C0\n    ldr r1, _0222FF3C ; =0x0000012D\n    ldr r0, [r0]\n    ldrb r1, [r0, r1]\n    cmp r1, #4\n    beq _0222FF2A\n    add r1, r5, #0\n    bl ov45_0222F954\n    ldr r4, [r0, #8]\n    ldr r0, _0222FF38 ; =_022577C0\n    ldr r6, [r7, #8]\n    ldr r1, [r0]\n    ldr r0, _0222FF3C ; =0x0000012D\n    ldrb r0, [r1, r0]\n    bl ov45_0222F7B0\n    cmp r4, #5\n    bne _0222FF16\n    cmp r6, r0\n    bne _0222FF16\n    ldr r0, _0222FF38 ; =_022577C0\n    add r1, r5, #0\n    ldr r0, [r0]\n    mov r2, #1\n    bl ov45_0222FA74\n    b _0222FF2A\n    cmp r4, r0\n    bne _0222FF2A\n    cmp r6, r0\n    beq _0222FF2A\n    ldr r0, _0222FF38 ; =_022577C0\n    add r1, r5, #0\n    ldr r0, [r0]\n    mov r2, #1\n    bl ov45_0222FAF8\n    ldr r0, _0222FF38 ; =_022577C0\n    add r1, r5, #0\n    ldr r0, [r0]\n    add r2, r7, #0\n    bl ov45_0222F928\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222FF38: .word _022577C0\n    _0222FF3C: .word 0x0000012D"
    );
    #endif
}

void ov45_0222FF40(void) {
    /* Original at 0x0222FF40 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0222FF78 ; =_022577C0\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r1, r5, #0\n    mov r2, #0\n    bl ov45_0222FB24\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222FF74\n    ldr r0, _0222FF78 ; =_022577C0\n    add r1, r5, #0\n    ldr r0, [r0]\n    add r2, r4, #0\n    bl ov45_0222F88C\n    ldr r0, _0222FF78 ; =_022577C0\n    add r1, r4, #0\n    ldr r3, [r0]\n    add r0, r5, #0\n    ldr r2, [r3, #0x20]\n    ldr r3, [r3, #0x14]\n    blx r3\n    pop {r3, r4, r5, pc}\n    nop\n    _0222FF78: .word _022577C0"
    );
    #endif
}

void ov45_0222FF7C(void) {
    /* Original at 0x0222FF7C */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _0222FFFC ; =_022577C0\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r1, r5, #0\n    mov r2, #0\n    bl ov45_0222FB24\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222FFF8\n    bl ov45_0222E9E0\n    cmp r0, r5\n    beq _0222FFEA\n    ldr r0, _0222FFFC ; =_022577C0\n    ldr r2, _02230000 ; =0x0000069E\n    ldr r1, [r0]\n    ldrb r0, [r1, r2]\n    cmp r0, #0\n    beq _0222FFEA\n    sub r0, r2, #2\n    ldrh r0, [r1, r0]\n    ldr r3, [r4]\n    cmp r0, r3\n    bne _0222FFEA\n    sub r2, #0xe6\n    add r2, r1, r2\n    mov r1, #0x4c\n    mul r1, r0\n    add r0, r2, r1\n    add r1, sp, #8\n    bl ov45_02230384\n    add r0, r4, #0\n    add r1, sp, #0\n    bl ov45_02230384\n    ldr r3, [sp, #8]\n    ldr r2, [sp, #0xc]\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    sub r0, r3, r0\n    sbc r2, r1\n    blt _0222FFF8\n    ldr r0, _0222FFFC ; =_022577C0\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _02230004 ; =0x0000069F\n    strb r2, [r1, r0]\n    bl ov45_0222F154\n    ldr r0, _0222FFFC ; =_022577C0\n    ldr r1, [r4]\n    ldr r0, [r0]\n    add r2, r5, #0\n    add r3, r4, #0\n    bl ov45_02230164\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0222FFFC: .word _022577C0\n    _02230000: .word 0x0000069E\n    _02230004: .word 0x0000069F"
    );
    #endif
}

void ov45_02230008(void) {
    /* Original at 0x02230008 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02230048 ; =_022577C0\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r1, r5, #0\n    mov r2, #0\n    bl ov45_0222FB24\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _02230046\n    ldr r0, _02230048 ; =_022577C0\n    ldr r1, [r4]\n    ldr r0, [r0]\n    add r2, r5, #0\n    bl ov45_022301E0\n    ldr r1, _02230048 ; =_022577C0\n    ldr r2, [r4]\n    ldr r5, [r1]\n    ldr r1, _0223004C ; =0x0000069C\n    ldrh r3, [r5, r1]\n    cmp r3, r2\n    bne _02230046\n    cmp r0, #1\n    bne _02230046\n    mov r2, #1\n    add r0, r1, #3\n    strb r2, [r5, r0]\n    pop {r3, r4, r5, pc}\n    _02230048: .word _022577C0\n    _0223004C: .word 0x0000069C"
    );
    #endif
}

void ov45_02230050(void) {
    /* Original at 0x02230050 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02230060 ; =_022577C0\n    ldr r2, [r1]\n    ldr r1, [r2, #0x20]\n    ldr r2, [r2, #0x18]\n    blx r2\n    pop {r3, pc}\n    nop\n    _02230060: .word _022577C0"
    );
    #endif
}

void ov45_02230064(void) {
    /* Original at 0x02230064 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    beq _02230076\n    ldr r0, _02230088 ; =_022577C0\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _0223008C ; =0x00000133\n    strb r2, [r1, r0]\n    pop {r3, pc}\n    ldr r0, _02230088 ; =_022577C0\n    ldr r3, [r0]\n    add r0, r1, #0\n    add r1, r2, #0\n    ldr r2, [r3, #0x20]\n    ldr r3, [r3, #0x1c]\n    blx r3\n    pop {r3, pc}\n    nop\n    _02230088: .word _022577C0\n    _0223008C: .word 0x00000133"
    );
    #endif
}

void ov45_02230090(void) {
    /* Original at 0x02230090 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0\n    bne _02230098\n    mov r0, #1\n    bx lr\n    ldr r0, _022300A8 ; =_022577C0\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _022300AC ; =0x00000132\n    strb r2, [r1, r0]\n    mov r0, #0\n    bx lr\n    nop\n    _022300A8: .word _022577C0\n    _022300AC: .word 0x00000132"
    );
    #endif
}

void ov45_022300B0(void) {
    /* Original at 0x022300B0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    bne _022300C6\n    ldr r0, _022300D4 ; =_022577C0\n    ldr r3, [r0]\n    mov r0, #0x6a\n    lsl r0, r0, #4\n    add r0, r3, r0\n    bl ov45_0223040C\n    pop {r3, pc}\n    ldr r0, _022300D4 ; =_022577C0\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _022300D8 ; =0x00000132\n    strb r2, [r1, r0]\n    pop {r3, pc}\n    nop\n    _022300D4: .word _022577C0\n    _022300D8: .word 0x00000132"
    );
    #endif
}

void ov45_022300DC(void) {
    /* Original at 0x022300DC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    bne _022300F0\n    ldr r0, _022300FC ; =_022577C0\n    ldr r2, [r0]\n    ldr r0, _02230100 ; =0x000006A8\n    add r0, r2, r0\n    bl ov45_0223048C\n    pop {r3, pc}\n    ldr r0, _022300FC ; =_022577C0\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _02230104 ; =0x00000132\n    strb r2, [r1, r0]\n    pop {r3, pc}\n    _022300FC: .word _022577C0\n    _02230100: .word 0x000006A8\n    _02230104: .word 0x00000132"
    );
    #endif
}

void ov45_02230108(void) {
    /* Original at 0x02230108 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0223012C ; =_022577C0\n    ldr r1, [r0]\n    mov r0, #0x26\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    cmp r0, #1\n    beq _0223011C\n    bl GF_AssertFail\n    ldr r0, _0223012C ; =_022577C0\n    mov r2, #2\n    ldr r1, [r0]\n    mov r0, #0x26\n    lsl r0, r0, #6\n    str r2, [r1, r0]\n    pop {r3, pc}\n    nop\n    _0223012C: .word _022577C0"
    );
    #endif
}

void ov45_02230130(void) {
    /* Original at 0x02230130 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0223013C ; =_022577C0\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _02230140 ; =0x00000131\n    strb r2, [r1, r0]\n    bx lr\n    _0223013C: .word _022577C0\n    _02230140: .word 0x00000131"
    );
    #endif
}

void ov45_02230144(void) {
    memset(0, 3, 0xe4);
}

void ov45_02230164(void) {
    /* Original at 0x02230164 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r7, r3, #0\n    str r2, [sp]\n    cmp r6, #3\n    blt _02230176\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov45_0223021C\n    cmp r0, #1\n    bne _02230194\n    mov r0, #0x4c\n    mul r0, r6\n    add r1, r5, r0\n    mov r0, #6\n    lsl r0, r0, #8\n    ldr r1, [r1, r0]\n    ldr r0, [sp]\n    cmp r0, r1\n    bne _022301D2\n    mov r0, #0x4c\n    add r4, r6, #0\n    mul r4, r0\n    ldr r0, _022301D4 ; =0x000005B8\n    add r1, r5, r4\n    add r3, r1, r0\n    mov r2, #8\n    ldmia r7!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _022301A2\n    ldr r0, [r7]\n    str r0, [r3]\n    ldr r0, _022301D8 ; =0x000005FC\n    add r2, r5, r0\n    ldrh r1, [r2, r4]\n    cmp r1, #0\n    bne _022301D2\n    mov r1, #1\n    strh r1, [r2, r4]\n    add r1, r0, #4\n    ldr r0, [sp]\n    add r2, r5, r4\n    str r0, [r2, r1]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov45_0223023C\n    ldr r1, _022301DC ; =0x000005FE\n    add r2, r5, r4\n    strh r0, [r2, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    _022301D4: .word 0x000005B8\n    _022301D8: .word 0x000005FC\n    _022301DC: .word 0x000005FE"
    );
    #endif
}

void ov45_022301E0(void) {
    /* Original at 0x022301E0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #3\n    blt _022301F0\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov45_0223021C\n    cmp r0, #1\n    bne _02230216\n    mov r0, #0x4c\n    mul r0, r4\n    add r2, r5, r0\n    mov r0, #6\n    lsl r0, r0, #8\n    ldr r1, [r2, r0]\n    cmp r6, r1\n    bne _02230216\n    mov r1, #0\n    sub r0, r0, #4\n    strh r1, [r2, r0]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_0223021C(void) {
    GF_AssertFail(0x4c);
}

void ov45_0223023C(void) {
    /* Original at 0x0223023C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r5, r1, #0\n    bl ov45_0223021C\n    cmp r0, #0\n    bne _02230252\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov45_022302B0\n    add r1, sp, #0\n    bl ov45_02230384\n    mov r1, #0x67\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r2, [r4, r1]\n    ldr r3, [sp]\n    ldr r1, [sp, #4]\n    sub r0, r0, r3\n    sbc r2, r1\n    mov r3, #0\n    mov r1, #0x1e\n    sub r1, r1, r0\n    sbc r3, r2\n    bge _02230282\n    mov r0, #0x1e\n    mov r2, #0\n    b _02230294\n    mov r1, #0\n    mov r3, #0\n    sub r1, r0, r1\n    mov ip, r2\n    mov r1, ip\n    sbc r1, r3\n    bge _02230294\n    mov r0, #0\n    add r2, r0, #0\n    mov r1, #0x3c\n    mov r3, #0\n    sub r0, r1, r0\n    mov ip, r3\n    mov r1, ip\n    sbc r1, r2\n    mov r2, #0x1e\n    bl _ll_mul\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_022302B0(void) {
    /* Original at 0x022302B0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    cmp r6, #3\n    blt _022302BE\n    bl GF_AssertFail\n    mov r0, #0x4c\n    add r4, r6, #0\n    mul r4, r0\n    ldr r0, _022302DC ; =0x000005FC\n    add r1, r5, r4\n    ldrh r0, [r1, r0]\n    cmp r0, #1\n    beq _022302D2\n    bl GF_AssertFail\n    ldr r0, _022302E0 ; =0x000005B8\n    add r0, r5, r0\n    add r0, r0, r4\n    pop {r4, r5, r6, pc}\n    nop\n    _022302DC: .word 0x000005FC\n    _022302E0: .word 0x000005B8"
    );
    #endif
}

void ov45_022302E4(void) {
    /* Original at 0x022302E4 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, _02230364 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _02230368 ; =0x0000069E\n    ldrb r0, [r1, r0]\n    cmp r0, #1\n    bne _0223031E\n    bl ov00_021E7144\n    add r4, r0, #0\n    cmp r4, #4\n    bls _02230300\n    bl GF_AssertFail\n    ldr r0, _02230364 ; =_022577C0\n    ldr r1, [r0]\n    ldr r0, _0223036C ; =0x000005B8\n    add r2, r1, r0\n    add r0, #0xe4\n    ldrh r1, [r1, r0]\n    mov r0, #0x4c\n    mul r0, r1\n    add r0, r2, r0\n    ldr r1, [r0, #8]\n    cmp r1, r4\n    beq _0223031E\n    str r4, [r0, #8]\n    bl ov45_02232BB0\n    mov r4, #0\n    ldr r6, _02230364 ; =_022577C0\n    ldr r7, _02230370 ; =0x000005FC\n    add r5, r4, #0\n    ldr r0, [r6]\n    add r0, r0, r5\n    ldrh r1, [r0, r7]\n    cmp r1, #1\n    bne _0223035A\n    ldr r1, _02230374 ; =0x000005FE\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _02230342\n    ldr r1, _02230374 ; =0x000005FE\n    ldrh r1, [r0, r1]\n    sub r2, r1, #1\n    ldr r1, _02230374 ; =0x000005FE\n    strh r2, [r0, r1]\n    ldr r0, [r6]\n    add r1, r4, #0\n    bl ov45_0223023C\n    ldr r1, [r6]\n    ldr r2, _02230374 ; =0x000005FE\n    add r1, r1, r5\n    ldrh r2, [r1, r2]\n    cmp r0, r2\n    bhs _0223035A\n    ldr r2, _02230374 ; =0x000005FE\n    strh r0, [r1, r2]\n    add r4, r4, #1\n    add r5, #0x4c\n    cmp r4, #3\n    blt _02230326\n    pop {r3, r4, r5, r6, r7, pc}\n    _02230364: .word _022577C0\n    _02230368: .word 0x0000069E\n    _0223036C: .word 0x000005B8\n    _02230370: .word 0x000005FC\n    _02230374: .word 0x000005FE"
    );
    #endif
}

void ov45_02230378(void) {
    /* Original at 0x02230378 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r1]\n    ldr r1, [r1, #4]\n    str r2, [r0, #0x10]\n    str r1, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void ov45_02230384(void) {
    /* Original at 0x02230384 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #0x10]\n    ldr r0, [r0, #0x14]\n    str r2, [r1]\n    str r0, [r1, #4]\n    bx lr"
    );
    #endif
}

void ov45_02230390(void) {
    /* Original at 0x02230390 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov45_02230394(void) {
    /* Original at 0x02230394 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _022303B4 ; =0x0000069E\n    ldrb r1, [r1, r2]\n    cmp r1, #1\n    bne _022303A4\n    bl ov45_0222F154\n    pop {r3, pc}\n    cmp r0, #0\n    bne _022303B2\n    ldr r0, _022303B8 ; =_022577C0\n    mov r3, #1\n    ldr r1, [r0]\n    add r0, r2, #1\n    strb r3, [r1, r0]\n    pop {r3, pc}\n    _022303B4: .word 0x0000069E\n    _022303B8: .word _022577C0"
    );
    #endif
}

void ov45_022303BC(void) {
    /* Original at 0x022303BC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldrh r2, [r0, #0xe]\n    mov r3, #0\n    add r4, r3, #0\n    cmp r2, #0\n    ble _022303DC\n    add r5, r0, #0\n    ldr r2, [r5, #0x14]\n    cmp r1, r2\n    bne _022303D2\n    ldr r3, [r5, #0x10]\n    ldrh r2, [r0, #0xe]\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, r2\n    blt _022303CA\n    add r0, r3, #0\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov45_022303E4(void) {
    Heap_Alloc(0);
}

void ov45_022303FC(void) {
    Heap_Free();
}

void ov45_0223040C(void) {
    /* Original at 0x0223040C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #4]\n    add r4, r2, #0\n    add r6, r1, #0\n    cmp r4, r0\n    blo _0223041E\n    bl GF_AssertFail\n    ldrh r0, [r5, #4]\n    cmp r4, r0\n    blo _02230426\n    add r4, r0, #0\n    ldr r1, [r5]\n    add r0, r6, #0\n    lsl r2, r4, #3\n    bl MIi_CpuCopy32\n    strh r4, [r5, #6]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_02230434(void) {
    /* Original at 0x02230434 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldrh r2, [r0, #6]\n    mov r3, #0\n    cmp r2, #0\n    ble _02230456\n    ldr r4, [r0]\n    ldr r2, [r4]\n    cmp r1, r2\n    bne _0223044C\n    mov r0, #1\n    pop {r3, r4}\n    bx lr\n    ldrh r2, [r0, #6]\n    add r3, r3, #1\n    add r4, #8\n    cmp r3, r2\n    blt _02230440\n    mov r0, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov45_0223045C(void) {
    /* Original at 0x0223045C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldrh r2, [r0, #6]\n    mov r3, #0\n    cmp r2, #0\n    ble _02230484\n    ldr r5, [r0]\n    add r4, r5, #0\n    ldr r2, [r4]\n    cmp r1, r2\n    bne _0223047A\n    lsl r0, r3, #3\n    add r0, r5, r0\n    ldr r0, [r0, #4]\n    pop {r4, r5}\n    bx lr\n    ldrh r2, [r0, #6]\n    add r3, r3, #1\n    add r4, #8\n    cmp r3, r2\n    blt _0223046A\n    mov r0, #0\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov45_0223048C(void) {
    memcpy();
}

void ov45_02230498(void) {
    /* Original at 0x02230498 */
    /* Requires manual decompilation - 180 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r7, r2, #0\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    add r0, r7, #0\n    mov r1, #0x30\n    str r3, [sp, #0xc]\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x30\n    add r4, r0, #0\n    bl memset\n    ldr r2, [sp, #4]\n    mov r1, #0x90\n    add r0, r7, #0\n    mul r1, r2\n    bl Heap_Alloc\n    str r0, [r4, #0x10]\n    ldr r0, [sp, #4]\n    mov r6, #0\n    str r0, [r4, #0x14]\n    cmp r0, #0\n    bls _022304E2\n    add r5, r6, #0\n    ldr r0, [r4, #0x10]\n    add r0, r0, r5\n    bl ov45_02230AB4\n    ldr r0, [r4, #0x14]\n    add r6, r6, #1\n    add r5, #0x90\n    cmp r6, r0\n    blo _022304D0\n    mov r0, #1\n    add r1, r7, #0\n    bl GF2dGfxRawResMan_Create\n    str r0, [r4]\n    mov r0, #2\n    add r1, r7, #0\n    bl GF2dGfxRawResMan_Create\n    str r0, [r4, #4]\n    mov r0, #0x14\n    add r1, r7, #0\n    bl GF3dGfxRawResMan_Create\n    str r0, [r4, #8]\n    mov r0, #1\n    add r1, r7, #0\n    bl sub_02023738\n    ldr r0, [sp, #4]\n    str r7, [sp, #0x24]\n    str r0, [sp, #0x20]\n    add r0, sp, #0x20\n    bl sub_020237EC\n    str r0, [r4, #0xc]\n    mov r0, #0x51\n    add r1, r7, #0\n    bl NARC_New\n    str r0, [sp, #0x18]\n    mov r0, #0xd1\n    add r1, r7, #0\n    bl NARC_New\n    mov r2, #0\n    ldr r3, [sp, #0xc]\n    str r2, [sp]\n    mov r1, #0x7f\n    str r0, [sp, #0x14]\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r1, r5, #0\n    mov r2, #0x7f\n    bl GF2dGfxRawResMan_AllocObj\n    add r0, r5, #0\n    bl ov45_0222D740\n    add r0, r5, #0\n    bl NNS_G3dGetMdlSet\n    cmp r0, #0\n    beq _02230572\n    add r2, r0, #0\n    add r2, #8\n    beq _02230566\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _02230566\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _02230568\n    mov r1, #0\n    cmp r1, #0\n    beq _02230572\n    ldr r1, [r1]\n    add r0, r0, r1\n    b _02230574\n    mov r0, #0\n    mov r1, #0\n    bl NNS_G3dMdlGetMdlLightEnableFlag\n    mov r6, #0\n    ldr r5, _02230630 ; =ov45_02254C38\n    str r0, [r4, #0x2c]\n    add r7, r6, #0\n    str r7, [sp]\n    ldrh r1, [r5]\n    ldr r0, [sp, #0x18]\n    ldr r3, [sp, #0xc]\n    add r2, r7, #0\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r1, r0, #0\n    ldrh r2, [r5]\n    ldr r0, [r4, #4]\n    bl GF2dGfxRawResMan_AllocObj\n    add r6, r6, #1\n    add r5, r5, #2\n    cmp r6, #2\n    blt _02230582\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    bne _022305AE\n    mov r0, #1\n    str r0, [sp, #0x10]\n    b _022305B2\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r5, _02230634 ; =ov45_02254C48\n    mov r7, #0\n    ldr r0, [sp, #0x10]\n    cmp r0, r7\n    beq _02230608\n    ldrh r0, [r5, #2]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x1f\n    bne _022305C8\n    mov r6, #1\n    b _022305CA\n    mov r6, #0\n    mov r0, #0\n    str r0, [sp]\n    ldrh r1, [r5, #2]\n    ldr r0, [sp, #0x18]\n    ldr r3, [sp, #0xc]\n    lsl r1, r1, #0x11\n    lsr r1, r1, #0x11\n    mov r2, #0\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r1, r0, #0\n    ldr r0, [sp, #0xc]\n    add r3, r6, #0\n    str r0, [sp]\n    ldrh r2, [r5, #2]\n    ldr r0, [r4, #8]\n    lsl r2, r2, #0x11\n    lsr r2, r2, #0x11\n    bl GF3dGfxRawResMan_AllocObj\n    str r0, [sp, #0x1c]\n    cmp r6, #1\n    bne _02230608\n    bl GF3dGfxRawResObj_AllocVramAndGetKeys\n    ldr r0, [sp, #0x1c]\n    bl GF3dGfxRawResObj_LoadTex\n    ldr r0, [sp, #0x1c]\n    bl GF3dGfxRawResObj_FreeVramAndSecondaryHeader\n    add r7, r7, #1\n    add r5, r5, #4\n    cmp r7, #0x14\n    blt _022305B6\n    add r0, r4, #0\n    ldr r1, [sp, #0x14]\n    ldr r3, [sp, #0xc]\n    add r0, #0x18\n    mov r2, #0x80\n    bl ov45_022309E8\n    ldr r0, [sp, #0x18]\n    bl NARC_Delete\n    ldr r0, [sp, #0x14]\n    bl NARC_Delete\n    add r0, r4, #0\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _02230630: .word ov45_02254C38\n    _02230634: .word ov45_02254C48"
    );
    #endif
}

void ov45_02230638(void) {
    /* Original at 0x02230638 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x18\n    bl ov45_02230A44\n    ldr r0, [r4, #8]\n    bl GF3dGfxRawResMan_FreeAllObjs\n    ldr r0, [r4]\n    bl GF2dGfxRawResMan_FreeAllObjs\n    ldr r0, [r4, #4]\n    bl GF2dGfxRawResMan_FreeAllObjs\n    ldr r0, [r4, #0xc]\n    bl sub_02023874\n    bl sub_02023778\n    ldr r0, [r4, #8]\n    bl GF3dGfxRawResMan_Destroy\n    ldr r0, [r4]\n    bl GF2dGfxRawResObj_Destroy\n    ldr r0, [r4, #4]\n    bl GF2dGfxRawResObj_Destroy\n    ldr r0, [r4, #0x10]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov45_02230680(void) {
    /* Original at 0x02230680 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x14]\n    mov r6, #0\n    cmp r0, #0\n    bls _022306B0\n    add r4, r6, #0\n    ldr r0, [r5, #0x10]\n    add r0, r0, r4\n    bl ov45_02230ACC\n    ldr r0, [r5, #0x10]\n    add r0, r0, r4\n    bl ov45_02230CB0\n    ldr r0, [r5, #0x10]\n    add r0, r0, r4\n    bl ov45_02230DF4\n    ldr r0, [r5, #0x14]\n    add r6, r6, #1\n    add r4, #0x90\n    cmp r6, r0\n    blo _0223068E\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_022306B4(void) {
    /* Original at 0x022306B4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl sub_020237B0\n    add r0, r5, #0\n    add r0, #0x18\n    bl ov45_02230A58\n    cmp r0, #0\n    beq _022306F0\n    ldr r0, [r5, #0x14]\n    mov r6, #0\n    cmp r0, #0\n    bls _022306F0\n    add r4, r6, #0\n    ldr r0, [r5, #0x10]\n    add r0, r0, r4\n    bl ov45_02230AA4\n    cmp r0, #1\n    bne _022306E6\n    ldr r0, [r5, #0x10]\n    add r0, r0, r4\n    bl ov45_02230AC0\n    ldr r0, [r5, #0x14]\n    add r6, r6, #1\n    add r4, #0x90\n    cmp r6, r0\n    blo _022306D2\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_022306F4(void) {
    sub_02023910();
}

void ov45_02230700(void) {
    ov45_02230A4C();
}

void ov45_0223070C(void) {
    /* Original at 0x0223070C */
    /* Requires manual decompilation - 163 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x98\n    add r5, r0, #0\n    add r7, r1, #0\n    bl ov45_02230A6C\n    add r4, r0, #0\n    str r7, [r4, #4]\n    add r1, sp, #0x34\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    ldr r3, _02230874 ; =ov45_02254C3C\n    str r0, [r1, #8]\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x28\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    mov r1, #7\n    str r0, [r2]\n    add r0, r7, #0\n    bl ov42_02228188\n    bl ov45_0223099C\n    add r6, r0, #0\n    ldr r0, [r5]\n    mov r1, #0x7f\n    bl GF2dGfxRawResMan_GetObjById\n    bl GF2dGfxRawResObj_GetData\n    ldrh r1, [r6, #2]\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #8]\n    lsl r1, r1, #0x11\n    lsr r1, r1, #0x11\n    bl GF3dGfxRawResMan_GetObjById\n    str r0, [sp, #0x18]\n    bl GF3dGfxRawResObj_GetTex\n    str r0, [sp, #0x10]\n    ldrh r0, [r6, #2]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _02230770\n    ldr r1, _02230878 ; =0x00000119\n    b _02230774\n    mov r1, #0x46\n    lsl r1, r1, #2\n    ldr r0, [r5, #4]\n    bl GF2dGfxRawResMan_GetObjById\n    bl GF2dGfxRawResObj_GetData\n    add r1, sp, #0x40\n    bl sub_02026E18\n    ldrh r0, [r6, #2]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _022307A0\n    add r0, sp, #0x40\n    str r0, [sp]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    ldr r3, _0223087C ; =ov45_02254C98\n    add r0, sp, #0x70\n    bl sub_02023E2C\n    b _022307CE\n    ldr r0, [sp, #0x18]\n    bl GF3dGfxRawResObj_GetTexKey\n    add r6, r0, #0\n    ldr r0, [sp, #0x18]\n    bl GF3dGfxRawResObj_GetTex4x4Key\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x18]\n    bl GF3dGfxRawResObj_GetPlttKey\n    add r1, sp, #0x40\n    str r1, [sp]\n    ldr r1, [sp, #0x1c]\n    str r6, [sp, #4]\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    ldr r3, _0223087C ; =ov45_02254C98\n    add r0, sp, #0x70\n    bl sub_02023E04\n    add r0, r7, #0\n    bl ov42_022282DC\n    add r1, sp, #0x20\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r2, [r1]\n    add r0, sp, #0x24\n    strh r2, [r1, #4]\n    ldrh r2, [r1, #2]\n    strh r2, [r1, #6]\n    add r1, sp, #0x34\n    bl ov49_02258800\n    mov r0, #1\n    ldr r1, [sp, #0x3c]\n    lsl r0, r0, #0x10\n    add r0, r1, r0\n    str r0, [sp, #0x3c]\n    ldr r0, [r5, #0xc]\n    add r3, sp, #0x34\n    str r0, [sp, #0x50]\n    add r0, sp, #0x70\n    str r0, [sp, #0x54]\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x58\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r3, sp, #0x28\n    str r0, [r2]\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x64\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, sp, #0x50\n    bl sub_02023D44\n    ldr r1, _02230880 ; =ov45_02230E64\n    add r2, r4, #0\n    str r0, [r4, #8]\n    bl sub_02023FE4\n    add r0, r5, #0\n    add r1, r4, #0\n    add r0, #0x18\n    add r1, #0xc\n    bl ov45_02230A5C\n    mov r2, #2\n    lsl r2, r2, #0xc\n    add r0, r4, #0\n    ldr r6, [sp, #0x3c]\n    lsl r3, r2, #2\n    ldr r1, [sp, #0x34]\n    add r0, #0xc\n    sub r3, r6, r3\n    bl sub_020182A8\n    ldrb r1, [r4]\n    mov r0, #0xf\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r4]\n    ldrb r1, [r4]\n    mov r0, #0xc0\n    bic r1, r0\n    mov r0, #0x40\n    orr r0, r1\n    strb r0, [r4]\n    ldrb r1, [r4]\n    mov r0, #0x30\n    bic r1, r0\n    strb r1, [r4]\n    add r0, r4, #0\n    ldr r1, [r5, #0x2c]\n    add r0, #0x8c\n    str r1, [r0]\n    add r0, r4, #0\n    add sp, #0x98\n    pop {r3, r4, r5, r6, r7, pc}\n    _02230874: .word ov45_02254C3C\n    _02230878: .word 0x00000119\n    _0223087C: .word ov45_02254C98\n    _02230880: .word ov45_02230E64"
    );
    #endif
}

void ov45_02230884(void) {
    /* Original at 0x02230884 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    bl sub_02023DA4\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x90\n    bl memset\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0223089C(void) {
    /* Original at 0x0223089C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r3, [r0]\n    mov r2, #0xf\n    lsl r1, r1, #0x18\n    bic r3, r2\n    lsr r2, r1, #0x18\n    mov r1, #0xf\n    and r1, r2\n    orr r1, r3\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void ov45_022308B0(void) {
    /* Original at 0x022308B0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x8c\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov45_022308B8(void) {
    /* Original at 0x022308B8 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1e\n    bx lr"
    );
    #endif
}

void ov45_022308C0(void) {
    /* Original at 0x022308C0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r0, r1, #0\n    add r1, sp, #0\n    bl ov49_02258800\n    mov r0, #1\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0x10\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl ov45_022308E4\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov45_022308E4(void) {
    /* Original at 0x022308E4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    add r4, r1, #0\n    bl sub_02023E50\n    mov r2, #2\n    ldr r1, [r4]\n    lsl r2, r2, #0xc\n    add r5, #0xc\n    ldr r4, [r4, #8]\n    lsl r3, r2, #2\n    add r0, r5, #0\n    sub r3, r4, r3\n    bl sub_020182A8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov45_02230908(void) {
    sub_02023E68();
}

void ov45_02230920(void) {
    /* Original at 0x02230920 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #1\n    bl ov45_022309C4\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    bl sub_02023EE0\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl sub_02023F40\n    pop {r4, pc}"
    );
    #endif
}

void ov45_0223093C(void) {
    /* Original at 0x0223093C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldrb r3, [r0, #1]\n    mov r2, #1\n    lsl r1, r1, #0x18\n    bic r3, r2\n    add r2, r3, #0\n    mov r4, #1\n    orr r2, r4\n    strb r2, [r0, #1]\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x19\n    ldrb r2, [r0, #1]\n    mov r3, #0xfe\n    lsr r1, r1, #0x18\n    bic r2, r3\n    orr r1, r2\n    strb r1, [r0, #1]\n    mov r1, #0\n    strb r1, [r0, #2]\n    strb r4, [r0, #3]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov45_02230968(void) {
    /* Original at 0x02230968 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r2, [r0, #1]\n    mov r1, #1\n    bic r2, r1\n    strb r2, [r0, #1]\n    bx lr"
    );
    #endif
}

void ov45_02230974(void) {
    /* Original at 0x02230974 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "strb r1, [r0, #3]\n    bx lr"
    );
    #endif
}

void ov45_02230978(void) {
    /* Original at 0x02230978 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1e\n    ldrb r2, [r0]\n    mov r3, #0xc0\n    lsr r1, r1, #0x18\n    bic r2, r3\n    orr r1, r2\n    ldr r3, _02230990 ; =ov45_02230E28\n    strb r1, [r0]\n    bx r3\n    nop\n    _02230990: .word ov45_02230E28"
    );
    #endif
}

void ov45_02230994(void) {
    /* Original at 0x02230994 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1e\n    bx lr"
    );
    #endif
}

void ov45_0223099C(void) {
    /* Original at 0x0223099C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, _022309C0 ; =ov45_02254C48\n    mov r2, #0\n    ldrh r1, [r3]\n    cmp r0, r1\n    bne _022309B0\n    ldr r1, _022309C0 ; =ov45_02254C48\n    lsl r0, r2, #2\n    add r0, r1, r0\n    pop {r3, pc}\n    add r2, r2, #1\n    add r3, r3, #4\n    cmp r2, #0x14\n    blt _022309A2\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}\n    _022309C0: .word ov45_02254C48"
    );
    #endif
}

void ov45_022309C4(void) {
    /* Original at 0x022309C4 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0\n    bne _022309CA\n    add r1, r1, #4\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov45_022309D0(void) {
    _u32_div_f();
}

void ov45_022309E8(void) {
    /* Original at 0x022309E8 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    add r0, sp, #0\n    bl ov49_02258830\n    ldr r0, [sp]\n    str r0, [r4]\n    bl NNS_G3dGetMdlSet\n    str r0, [r4, #4]\n    cmp r0, #0\n    beq _02230A22\n    add r2, r0, #0\n    add r2, #8\n    beq _02230A16\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _02230A16\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _02230A18\n    mov r1, #0\n    cmp r1, #0\n    beq _02230A22\n    ldr r1, [r1]\n    add r0, r0, r1\n    b _02230A24\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    bl NNS_G3dGetTex\n    str r0, [r4, #0xc]\n    ldr r0, [r4]\n    ldr r1, [r4, #0xc]\n    bl GF3dRender_BindModelSet\n    ldr r0, [r4, #8]\n    mov r1, #0x14\n    bl NNS_G3dMdlSetMdlPolygonIDAll\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov45_02230A44(void) {
    sub_02018068();
}

void ov45_02230A4C(void) {
    NNS_G3dMdlSetMdlAlphaAll();
}

void ov45_02230A58(void) {
    /* Original at 0x02230A58 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov45_02230A5C(void) {
    /* Original at 0x02230A5C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02230A68 ; =sub_020181B0\n    add r2, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    bx r3\n    nop\n    _02230A68: .word sub_020181B0"
    );
    #endif
}

void ov45_02230A6C(void) {
    /* Original at 0x02230A6C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x14]\n    mov r6, #0\n    cmp r0, #0\n    bls _02230A9A\n    add r4, r6, #0\n    ldr r0, [r5, #0x10]\n    add r0, r0, r4\n    bl ov45_02230AA4\n    cmp r0, #0\n    bne _02230A90\n    mov r0, #0x90\n    ldr r1, [r5, #0x10]\n    mul r0, r6\n    add r0, r1, r0\n    pop {r4, r5, r6, pc}\n    ldr r0, [r5, #0x14]\n    add r6, r6, #1\n    add r4, #0x90\n    cmp r6, r0\n    blo _02230A7A\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_02230AA4(void) {
    /* Original at 0x02230AA4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    cmp r0, #0\n    beq _02230AAE\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov45_02230AB4(void) {
    memset();
}

void ov45_02230AC0(void) {
    sub_020181EC();
}

void ov45_02230ACC(void) {
    /* Original at 0x02230ACC */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldrb r0, [r5]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    beq _02230B5C\n    ldr r0, [r5, #4]\n    mov r1, #5\n    bl ov42_02228188\n    add r4, r0, #0\n    ldr r0, [r5, #4]\n    mov r1, #8\n    bl ov42_02228188\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #0x86\n    ldrh r0, [r0]\n    cmp r0, r6\n    bhi _02230B02\n    add r0, r5, #0\n    add r0, #0x84\n    ldrb r0, [r0]\n    cmp r0, r4\n    beq _02230B2E\n    add r0, r5, #0\n    add r0, #0x84\n    ldrb r0, [r0]\n    bl ov45_02230DC4\n    cmp r0, #1\n    bne _02230B28\n    ldr r0, [r5, #8]\n    bl sub_02023EF4\n    add r1, r5, #0\n    add r1, #0x85\n    strb r0, [r1]\n    ldr r0, [r5, #8]\n    bl sub_02023F70\n    add r1, r5, #0\n    add r1, #0x88\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0x84\n    strb r4, [r0]\n    ldr r1, _02230B60 ; =ov45_02254F28\n    add r0, r5, #0\n    lsl r2, r4, #2\n    add r0, #0x86\n    strh r6, [r0]\n    ldr r1, [r1, r2]\n    add r0, r5, #0\n    blx r1\n    ldr r0, [r5, #4]\n    bl ov42_022282F4\n    add r2, sp, #0\n    strh r0, [r2]\n    lsr r0, r0, #0x10\n    strh r0, [r2, #2]\n    ldrh r0, [r2]\n    add r1, sp, #4\n    strh r0, [r2, #4]\n    ldrh r0, [r2, #2]\n    strh r0, [r2, #6]\n    add r0, r5, #0\n    bl ov45_022308C0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _02230B60: .word ov45_02254F28"
    );
    #endif
}

void ov45_02230B64(void) {
    /* Original at 0x02230B64 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    mov r1, #6\n    bl ov42_02228188\n    add r1, r0, #0\n    mov r0, #1\n    bl ov45_022309C4\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    bl sub_02023EE0\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl sub_02023F40\n    pop {r4, pc}"
    );
    #endif
}

void ov45_02230B8C(void) {
    /* Original at 0x02230B8C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    mov r1, #6\n    bl ov42_02228188\n    add r1, r0, #0\n    mov r0, #1\n    bl ov45_022309C4\n    add r4, r0, #0\n    ldr r0, [r5, #4]\n    mov r1, #9\n    bl ov42_02228188\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    ldr r0, [r5, #4]\n    mov r1, #8\n    bl ov42_02228188\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    add r0, r6, #0\n    mov r2, #8\n    bl ov45_022309D0\n    add r6, r0, #0\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    add r0, #0x85\n    ldrb r0, [r0]\n    cmp r0, r4\n    ldr r0, [r5, #8]\n    bne _02230BEC\n    mov r1, #0\n    bl sub_02023F40\n    ldr r0, [r5, #8]\n    add r5, #0x88\n    ldr r1, [r5]\n    add r1, r6, r1\n    bl sub_02023F04\n    pop {r4, r5, r6, pc}\n    mov r1, #0\n    bl sub_02023F40\n    ldr r0, [r5, #8]\n    add r1, r6, #0\n    bl sub_02023F04\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_02230BFC(void) {
    /* Original at 0x02230BFC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    mov r1, #8\n    bl ov42_02228188\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #4\n    bhs _02230C1C\n    mov r1, #1\n    ldr r0, [r4, #8]\n    lsl r1, r1, #0xe\n    bl sub_02023F40\n    pop {r4, pc}\n    ldr r0, [r4, #4]\n    mov r1, #6\n    bl ov42_02228188\n    add r1, r0, #0\n    mov r0, #1\n    bl ov45_022309C4\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    bl sub_02023EE0\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl sub_02023F40\n    pop {r4, pc}"
    );
    #endif
}

void ov45_02230C40(void) {
    /* Original at 0x02230C40 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    mov r1, #6\n    bl ov42_02228188\n    add r1, r0, #0\n    mov r0, #0\n    bl ov45_022309C4\n    add r4, r0, #0\n    ldr r0, [r5, #4]\n    mov r1, #9\n    bl ov42_02228188\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    ldr r0, [r5, #4]\n    mov r1, #8\n    bl ov42_02228188\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    add r0, r6, #0\n    mov r2, #4\n    bl ov45_022309D0\n    add r6, r0, #0\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    bl sub_02023EE0\n    add r0, r5, #0\n    add r0, #0x85\n    ldrb r0, [r0]\n    cmp r0, r4\n    ldr r0, [r5, #8]\n    bne _02230CA0\n    mov r1, #0\n    bl sub_02023F40\n    ldr r0, [r5, #8]\n    add r5, #0x88\n    ldr r1, [r5]\n    add r1, r6, r1\n    bl sub_02023F04\n    pop {r4, r5, r6, pc}\n    mov r1, #0\n    bl sub_02023F40\n    ldr r0, [r5, #8]\n    add r1, r6, #0\n    bl sub_02023F04\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov45_02230CB0(void) {
    /* Original at 0x02230CB0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrb r1, [r0]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    bne _02230CD0\n    ldrb r1, [r0, #1]\n    lsl r2, r1, #0x1f\n    lsr r2, r2, #0x1f\n    cmp r2, #1\n    bne _02230CD0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x19\n    lsl r2, r1, #2\n    ldr r1, _02230CD4 ; =ov45_02254F1C\n    ldr r1, [r1, r2]\n    blx r1\n    pop {r3, pc}\n    nop\n    _02230CD4: .word ov45_02254F1C"
    );
    #endif
}

void ov45_02230CD8(void) {
    /* Original at 0x02230CD8 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r3, [r4, #2]\n    mov r0, #0x1e\n    lsr r2, r3, #0x1f\n    lsl r1, r3, #0x1e\n    sub r1, r1, r2\n    ror r1, r0\n    add r0, r2, r1\n    bne _02230D08\n    ldr r1, _02230D1C ; =ov45_02254C34\n    lsr r2, r3, #2\n    ldrb r1, [r1, r2]\n    mov r0, #1\n    bl ov45_022309C4\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    bl sub_02023EE0\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl sub_02023F40\n    ldrb r1, [r4, #3]\n    ldrb r0, [r4, #2]\n    add r0, r0, r1\n    cmp r0, #0x10\n    bge _02230D16\n    strb r0, [r4, #2]\n    pop {r4, pc}\n    mov r0, #0\n    strb r0, [r4, #2]\n    pop {r4, pc}\n    _02230D1C: .word ov45_02254C34"
    );
    #endif
}

void ov45_02230D20(void) {
    /* Original at 0x02230D20 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #2]\n    cmp r0, #0\n    bne _02230D5A\n    ldr r0, [r4, #4]\n    mov r1, #6\n    bl ov42_02228188\n    ldr r0, [r4, #4]\n    mov r1, #6\n    bl ov42_02228188\n    add r1, r0, #0\n    mov r0, #1\n    bl ov45_022309C4\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    bl sub_02023EE0\n    mov r1, #1\n    ldr r0, [r4, #8]\n    lsl r1, r1, #0xe\n    bl sub_02023F40\n    ldrb r0, [r4, #2]\n    add r0, r0, #1\n    strb r0, [r4, #2]\n    pop {r4, pc}"
    );
    #endif
}

void ov45_02230D5C(void) {
    /* Original at 0x02230D5C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #2]\n    cmp r0, #0\n    bne _02230D8A\n    ldr r0, [r4, #4]\n    mov r1, #6\n    bl ov42_02228188\n    add r1, r0, #0\n    mov r0, #1\n    bl ov45_022309C4\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    bl sub_02023EE0\n    mov r1, #1\n    ldr r0, [r4, #8]\n    lsl r1, r1, #0xe\n    bl sub_02023F40\n    b _02230DB0\n    cmp r0, #4\n    bne _02230DB0\n    ldr r0, [r4, #4]\n    mov r1, #6\n    bl ov42_02228188\n    add r1, r0, #0\n    mov r0, #1\n    bl ov45_022309C4\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    bl sub_02023EE0\n    mov r1, #3\n    ldr r0, [r4, #8]\n    lsl r1, r1, #0xe\n    bl sub_02023F40\n    ldrb r0, [r4, #2]\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1d\n    sub r1, r1, r2\n    mov r0, #0x1d\n    ror r1, r0\n    add r0, r2, r1\n    strb r0, [r4, #2]\n    pop {r4, pc}"
    );
    #endif
}

void ov45_02230DC4(void) {
    /* Original at 0x02230DC4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0xb\n    bhi _02230DF0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02230DD4: ; jump table\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov45_02230DF4(void) {
    /* Original at 0x02230DF4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov45_02230AA4\n    cmp r0, #0\n    beq _02230E24\n    ldr r0, [r4, #8]\n    bl ov45_02230E78\n    cmp r0, #0\n    ldrb r1, [r4]\n    bne _02230E18\n    mov r0, #0x30\n    bic r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    strb r0, [r4]\n    b _02230E1E\n    mov r0, #0x30\n    bic r1, r0\n    strb r1, [r4]\n    add r0, r4, #0\n    bl ov45_02230E28\n    pop {r4, pc}"
    );
    #endif
}

void ov45_02230E28(void) {
    /* Original at 0x02230E28 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4]\n    lsl r1, r0, #0x1a\n    lsr r1, r1, #0x1e\n    bne _02230E50\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1e\n    cmp r0, #1\n    bne _02230E50\n    ldr r0, [r4, #8]\n    mov r1, #1\n    bl sub_02023EA4\n    add r4, #0xc\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_020182A0\n    pop {r4, pc}\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl sub_02023EA4\n    add r4, #0xc\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_020182A0\n    pop {r4, pc}"
    );
    #endif
}

void ov45_02230E64(void) {
    /* Original at 0x02230E64 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl sub_02023FDC\n    add r4, #0x8c\n    ldr r1, [r4]\n    bl NNS_G3dMdlSetMdlLightEnableFlagAll\n    pop {r4, pc}"
    );
    #endif
}

void ov45_02230E78(void) {
    /* Original at 0x02230E78 */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x44\n    add r5, r0, #0\n    bl sub_02023F90\n    cmp r0, #0\n    beq _02230E8C\n    add r4, r0, #0\n    add r4, #0x14\n    b _02230E8E\n    mov r4, #0\n    add r0, r5, #0\n    bl sub_02023E68\n    add r3, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x38\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, sp, #0\n    str r0, [r2]\n    mov r0, #0x1e\n    ldrsh r0, [r4, r0]\n    strh r0, [r1, #0x24]\n    mov r0, #0x20\n    ldrsh r2, [r4, r0]\n    strh r2, [r1, #0x26]\n    ldrsh r0, [r4, r0]\n    strh r0, [r1, #0x28]\n    ldr r0, [r4, #0x24]\n    asr r0, r0, #0xc\n    str r0, [sp, #0x2c]\n    ldr r0, [r4, #0x24]\n    asr r0, r0, #0xc\n    str r0, [sp, #0x30]\n    ldr r0, [r4, #0x24]\n    asr r0, r0, #0xc\n    str r0, [sp, #0x34]\n    mov r0, #0x18\n    ldrsh r0, [r4, r0]\n    ldr r2, [r4, #0x24]\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r3, #2\n    mov r6, #0\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    adc r1, r6\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    ldr r2, [sp, #0x38]\n    orr r1, r0\n    add r0, r2, r1\n    str r0, [sp, #0x38]\n    mov r0, #0x1a\n    ldrsh r0, [r4, r0]\n    ldr r2, [r4, #0x24]\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r3, #2\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    adc r1, r6\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    ldr r2, [sp, #0x3c]\n    orr r1, r0\n    add r0, r2, r1\n    str r0, [sp, #0x3c]\n    mov r0, #0x1c\n    ldrsh r0, [r4, r0]\n    ldr r2, [r4, #0x24]\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r3, #2\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    adc r1, r6\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    ldr r2, [sp, #0x40]\n    orr r1, r0\n    add r0, r2, r1\n    str r0, [sp, #0x40]\n    mov r0, #0x20\n    ldrsh r0, [r4, r0]\n    ldr r2, [r4, #0x24]\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r3, #2\n    add r4, r6, #0\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    adc r1, r4\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    ldr r2, [sp, #0x40]\n    orr r1, r0\n    sub r0, r2, r1\n    str r0, [sp, #0x40]\n    add r0, sp, #0\n    bl MTX_Identity33_\n    ldr r1, _02230F8C ; =NNS_G3dGlb + 0xBC\n    add r0, sp, #0\n    bl MI_Copy36B\n    ldr r1, _02230F90 ; =NNS_G3dGlb + 0x80\n    mov r0, #0xa4\n    ldr r2, [r1, #0x7c]\n    bic r2, r0\n    add r0, r5, #0\n    str r2, [r1, #0x7c]\n    bl sub_02023E94\n    bl NNS_G3dGlbSetBaseScale\n    add r0, sp, #0x38\n    add r1, sp, #0x24\n    bl sub_0201FA34\n    cmp r0, #0\n    bne _02230F84\n    add sp, #0x44\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #1\n    add sp, #0x44\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02230F8C: .word NNS_G3dGlb + 0xBC\n    _02230F90: .word NNS_G3dGlb + 0x80"
    );
    #endif
}

void ov45_02230F94(void) {
    /* Original at 0x02230F94 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r3, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0x62\n    add r1, r7, #0\n    bl NARC_New\n    add r1, sp, #0xc\n    str r1, [sp]\n    add r1, r7, #0\n    mov r2, #0xdb\n    mov r3, #3\n    add r4, r0, #0\n    bl ov45_02231018\n    add r0, sp, #8\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    add r3, r6, #0\n    bl ov45_02231018\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp, #8]\n    sub r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    mov r0, #0x18\n    mul r0, r1\n    ldr r1, _02231014 ; =0x0000FFFF\n    bl _s32_div_f\n    cmp r0, #0\n    bge _02230FE2\n    add r0, #0x18\n    cmp r0, #0x18\n    blt _02230FEE\n    mov r1, #0x18\n    bl _s32_div_f\n    add r0, r1, #0\n    add r2, sp, #4\n    mov r1, #0\n    str r1, [r2]\n    add r1, sp, #4\n    strb r0, [r1]\n    add r0, r2, #0\n    add r1, sp, #0x30\n    bl ov45_0222D524\n    add r0, r4, #0\n    bl NARC_Delete\n    ldr r0, [sp, #4]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    nop\n    _02231014: .word 0x0000FFFF"
    );
    #endif
}

void ov45_02231018(void) {
    /* Original at 0x02231018 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r1, [sp, #0xc]\n    str r3, [sp, #0x10]\n    mov r7, #0\n    add r5, r2, #0\n    str r7, [sp]\n    add r1, sp, #0x18\n    str r1, [sp, #4]\n    ldr r3, [sp, #0xc]\n    mov r1, #0x12\n    add r2, r7, #0\n    str r0, [sp, #8]\n    ldr r4, [sp, #0x30]\n    bl GfGfxLoader_LoadFromOpenNarc_GetSizeOut\n    add r6, r0, #0\n    ldr r0, [sp, #0x18]\n    mov r1, #6\n    bl _u32_div_f\n    cmp r5, r0\n    blt _0223104A\n    bl GF_AssertFail\n    mov r0, #6\n    add r1, r5, #0\n    mul r1, r0\n    ldrh r0, [r6, r1]\n    cmp r0, #2\n    beq _02231060\n    add r1, r6, r1\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    mov r7, #1\n    str r0, [r4]\n    add r0, r6, #0\n    bl Heap_Free\n    cmp r7, #0\n    bne _022310AC\n    add r0, r5, #0\n    bl LocationGmmDatIndexGetByCountryMsgNo\n    bl LocationGmmDatGetEarthPlaceDatId\n    mov r2, #0\n    add r1, r0, #0\n    str r2, [sp]\n    add r0, sp, #0x14\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    ldr r3, [sp, #0xc]\n    bl GfGfxLoader_LoadFromOpenNarc_GetSizeOut\n    add r5, r0, #0\n    ldr r0, [sp, #0x14]\n    lsr r1, r0, #2\n    ldr r0, [sp, #0x10]\n    cmp r0, r1\n    bge _0223109C\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    b _022310A4\n    bl GF_AssertFail\n    mov r0, #2\n    ldrsh r0, [r5, r0]\n    str r0, [r4]\n    add r0, r5, #0\n    bl Heap_Free\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}
