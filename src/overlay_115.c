/* Decompiled from asm/overlay_115.s */
#include "global.h"

void ov115_0225F020(void) {
    /* Original at 0x0225F020 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r6, #0\n    strh r6, [r5]\n    add r4, r5, #0\n    ldr r7, [sp, #0x28]\n    str r1, [sp, #8]\n    str r2, [sp, #0xc]\n    str r3, [sp, #0x10]\n    strh r6, [r5, #2]\n    add r4, #0x14\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r3, r7, #0\n    bl ov01_021F0718\n    str r0, [r5, #4]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #4]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    cmp r6, #3\n    beq _0225F07E\n    ldr r0, [r5, #4]\n    mov r1, #2\n    bl Sprite_SetAffineOverwriteMode\n    ldr r0, [r5, #4]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    mov r1, #2\n    lsl r1, r1, #0xc\n    add r0, r4, #0\n    lsr r2, r1, #1\n    mov r3, #6\n    bl ov01_021EFE70\n    b _0225F08C\n    mov r1, #1\n    lsl r1, r1, #0xc\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #6\n    bl ov01_021EFE70\n    add r6, r6, #1\n    add r5, r5, #4\n    add r4, #0x14\n    cmp r6, #4\n    blt _0225F038\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov115_0225F09C(void) {
    Sprite_Delete(0);
}

void ov115_0225F0B4(void) {
    /* Original at 0x0225F0B4 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r1, [sp]\n    mov r0, #2\n    ldrsh r1, [r1, r0]\n    cmp r1, #4\n    bge _0225F0EE\n    ldr r2, [sp]\n    mov r1, #0\n    str r1, [sp, #4]\n    ldrsh r1, [r2, r1]\n    sub r2, r1, #1\n    ldr r1, [sp]\n    strh r2, [r1]\n    add r2, r1, #0\n    ldr r1, [sp, #4]\n    ldrsh r1, [r2, r1]\n    cmp r1, #0\n    bgt _0225F0EE\n    ldr r1, [sp]\n    mov r2, #3\n    strh r2, [r1]\n    ldrsh r0, [r1, r0]\n    add r1, r0, #1\n    ldr r0, [sp]\n    strh r1, [r0, #2]\n    ldr r0, [sp]\n    mov r1, #2\n    ldrsh r0, [r0, r1]\n    mov r4, #0\n    cmp r0, #0\n    ble _0225F150\n    ldr r7, [sp]\n    ldr r6, [sp]\n    add r7, #0x14\n    add r5, r6, #0\n    add r0, r7, #0\n    bl ov01_021EFE80\n    ldr r1, [r6, #0x14]\n    str r0, [sp, #8]\n    add r0, sp, #0xc\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov01_021F074C\n    ldr r0, [r5, #4]\n    add r1, sp, #0xc\n    bl Sprite_SetAffineScale\n    ldr r0, [r5, #4]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    bne _0225F132\n    mov r0, #0\n    str r0, [sp, #4]\n    b _0225F13E\n    cmp r4, #3\n    beq _0225F13E\n    ldr r0, [r5, #4]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r1, [sp]\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    add r4, r4, #1\n    add r7, #0x14\n    add r6, #0x14\n    add r5, r5, #4\n    cmp r4, r0\n    blt _0225F102\n    ldr r0, [sp, #4]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov115_0225F158(void) {
    /* Original at 0x0225F158 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    str r0, [sp]\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xbd\n    add r3, r5, #0\n    bl NewMsgDataFromNarc\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MessageFormat_New\n    add r4, r0, #0\n    mov r0, #0x80\n    add r1, r5, #0\n    bl String_New\n    add r7, r0, #0\n    mov r0, #0x80\n    add r1, r5, #0\n    bl String_New\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #0\n    add r2, r5, #0\n    bl ReadMsgDataIntoString\n    ldr r2, [sp]\n    add r0, r4, #0\n    mov r1, #0\n    bl BufferTrainerName\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl StringExpandPlaceholders\n    add r0, r6, #0\n    bl DestroyMsgData\n    add r0, r4, #0\n    bl MessageFormat_Delete\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov115_0225F1BC(void) {
    /* Original at 0x0225F1BC */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    str r0, [sp]\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xbd\n    add r3, r5, #0\n    bl NewMsgDataFromNarc\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MessageFormat_New\n    add r4, r0, #0\n    mov r0, #0x80\n    add r1, r5, #0\n    bl String_New\n    add r7, r0, #0\n    mov r0, #0x80\n    add r1, r5, #0\n    bl String_New\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #0\n    add r2, r5, #0\n    bl ReadMsgDataIntoString\n    ldr r2, [sp]\n    add r0, r4, #0\n    mov r1, #0\n    bl BufferRivalsName\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl StringExpandPlaceholders\n    add r0, r6, #0\n    bl DestroyMsgData\n    add r0, r4, #0\n    bl MessageFormat_Delete\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov115_0225F220(void) {
    /* Original at 0x0225F220 */
    /* Requires manual decompilation - 544 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    add r7, r1, #0\n    ldr r1, [r5]\n    add r6, r2, #0\n    ldr r4, [r5, #0xc]\n    cmp r1, #0xf\n    bls _0225F234\n    b _0225F6BC\n    add r2, r1, r1\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0225F240: ; jump table\n    mov r1, #0xa6\n    add r0, r7, #0\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    mov r2, #0xa6\n    str r0, [r5, #0xc]\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    ldr r4, [r5, #0xc]\n    mov r0, #0x20\n    str r0, [sp]\n    str r7, [sp, #4]\n    ldr r0, [r5, #0x20]\n    mov r1, #0x10\n    mov r2, #0\n    mov r3, #0x40\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    mov r2, #2\n    str r2, [sp, #8]\n    mov r1, #0x9f\n    lsl r1, r1, #2\n    str r2, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x10]\n    add r1, r4, r1\n    ldr r0, [r0, #8]\n    mov r3, #0\n    bl AddWindowParameterized\n    mov r0, #0x9f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldrh r0, [r6, #8]\n    cmp r0, #0x17\n    bne _0225F2D4\n    ldr r0, [r5, #0x10]\n    add r1, r7, #0\n    ldr r0, [r0, #0xc]\n    bl ov115_0225F1BC\n    str r0, [sp, #0x14]\n    b _0225F2DE\n    ldr r0, [r6, #4]\n    add r1, r7, #0\n    bl ov115_0225F158\n    str r0, [sp, #0x14]\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, _0225F62C ; =0x00010200\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x9f\n    lsl r0, r0, #2\n    ldr r2, [sp, #0x14]\n    add r0, r4, r0\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    add r0, r4, #0\n    add r0, #0x44\n    mov r1, #8\n    mov r2, #3\n    bl ov01_021F05C4\n    mov r0, #1\n    str r0, [sp]\n    ldrb r0, [r6, #0xd]\n    mov r2, #6\n    add r1, r4, #0\n    str r0, [sp, #4]\n    ldrb r0, [r6, #0xe]\n    lsl r2, r2, #6\n    add r1, #0x44\n    str r0, [sp, #8]\n    ldrb r0, [r6, #0xf]\n    add r2, r4, r2\n    str r0, [sp, #0xc]\n    ldr r0, _0225F630 ; =0x000927C0\n    str r0, [sp, #0x10]\n    ldrb r3, [r6, #0xc]\n    ldr r0, [r5, #0x20]\n    bl ov01_021F0614\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x3c\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0x3e\n    str r0, [sp, #0xc]\n    ldr r0, _0225F634 ; =0x000927C1\n    mov r2, #0x6d\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    lsl r2, r2, #2\n    ldr r0, [r5, #0x20]\n    add r1, #0x44\n    add r2, r4, r2\n    mov r3, #0x3b\n    bl ov01_021F0614\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #6\n    str r0, [sp, #4]\n    add r0, r4, #0\n    lsl r1, r1, #6\n    mov r2, #0x11\n    mov r3, #0x42\n    add r0, #0x44\n    add r1, r4, r1\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0xc\n    bl ov01_021F0718\n    mov r1, #0x7a\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x4a\n    mov r2, #0x7b\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    lsl r2, r2, #2\n    add r0, r4, r2\n    add r1, r4, #0\n    sub r2, #0x38\n    mov r3, #0x12\n    add r1, #0x44\n    add r2, r4, r2\n    lsl r3, r3, #0xe\n    str r7, [sp, #4]\n    bl ov115_0225F020\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldrb r2, [r6, #0xc]\n    ldr r0, [r4, r0]\n    add r1, r7, #0\n    mov r3, #0xe\n    bl ov115_02260254\n    bl ov01_021F0B44\n    str r0, [r4, #0x40]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225F6BC\n    mov r0, #1\n    mov r1, #0x10\n    str r0, [sp]\n    add r2, r1, #0\n    add r3, r5, #4\n    bl ov01_021EFCF8\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225F6BC\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _0225F458\n    add r0, r1, #1\n    str r0, [r5]\n    b _0225F6BC\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x10]\n    ldr r0, [r0, #8]\n    str r0, [sp, #8]\n    mov r0, #3\n    str r0, [sp, #0xc]\n    ldrb r1, [r6, #0x12]\n    ldrb r2, [r6, #0x11]\n    ldrb r3, [r6, #0x10]\n    ldr r0, [r5, #0x20]\n    bl ov01_021F0454\n    mov r0, #0xa3\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0x1f\n    str r0, [sp, #4]\n    mov r0, #0x17\n    str r0, [sp, #8]\n    ldr r1, [r4, #0x40]\n    add r0, r5, #0\n    mov r2, #6\n    mov r3, #8\n    bl ov01_021F0B78\n    mov r0, #2\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #3\n    mov r1, #1\n    bl SetBgPriority\n    mov r0, #0\n    mov r1, #2\n    bl SetBgPriority\n    mov r0, #8\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225F6BC\n    bl ov01_021EFE30\n    cmp r0, #0\n    bne _0225F45A\n    b _0225F6BC\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r0, [r4, #0x40]\n    bl ov01_021F0B5C\n    mov r0, #0xa5\n    mov r1, #0xa\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _0225F6BC\n    mov r0, #0xa5\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bge _0225F55E\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov115_0225F0B4\n    cmp r0, #1\n    bne _0225F55E\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225F6BC\n    mov r0, #4\n    str r0, [sp]\n    mov r1, #0x11\n    ldr r2, [r6]\n    ldr r3, _0225F638 ; =0xFFFC0000\n    add r0, r4, #0\n    lsl r1, r1, #0x10\n    bl ov01_021EFEC8\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetPriority\n    mov r2, #0x42\n    ldr r1, [r4]\n    add r0, sp, #0x1c\n    lsl r2, r2, #0xc\n    mov r3, #0\n    bl ov01_021F074C\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0x1c\n    bl Sprite_SetMatrix\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225F6BC\n    add r0, r4, #0\n    bl ov01_021EFF28\n    mov r2, #0x42\n    add r6, r0, #0\n    ldr r1, [r4]\n    add r0, sp, #0x1c\n    lsl r2, r2, #0xc\n    mov r3, #0\n    bl ov01_021F074C\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0x1c\n    bl Sprite_SetMatrix\n    cmp r6, #1\n    bne _0225F55E\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225F6BC\n    add r0, r4, #0\n    add r0, #0x18\n    mov r1, #0\n    mov r2, #0x10\n    mov r3, #3\n    bl ov01_021EFE34\n    mov r0, #0xa5\n    mov r1, #0xa\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225F6BC\n    mov r0, #0xa5\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bge _0225F55E\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov01_021EFE44\n    str r0, [sp, #0x18]\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov01_021F0DC8\n    ldr r0, [sp, #0x18]\n    cmp r0, #1\n    beq _0225F560\n    b _0225F6BC\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldrb r2, [r6, #0xc]\n    ldr r0, [r4, r0]\n    add r1, r7, #0\n    bl ov115_02260254\n    mov r0, #0xd\n    mvn r0, r0\n    mov r1, #0x21\n    mov r2, #1\n    bl SetBlendBrightness\n    ldr r3, [r4]\n    ldr r0, [r5, #0x10]\n    asr r3, r3, #0xc\n    sub r3, #0x5c\n    ldr r0, [r0, #8]\n    mov r1, #2\n    mov r2, #0\n    neg r3, r3\n    bl ScheduleSetBgPosText\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225F6BC\n    add r0, r4, #0\n    add r0, #0x18\n    mov r1, #0x10\n    mov r2, #0\n    mov r3, #3\n    bl ov01_021EFE34\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225F6BC\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov01_021EFE44\n    add r6, r0, #0\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov01_021F0DC8\n    cmp r6, #1\n    bne _0225F6BC\n    ldr r0, [r5]\n    mov r1, #0x1a\n    add r0, r0, #1\n    str r0, [r5]\n    mov r0, #0xa5\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _0225F6BC\n    mov r0, #0xa5\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bge _0225F6BC\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225F6BC\n    mov r0, #0xf\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r3, _0225F63C ; =0x00007FFF\n    mov r0, #3\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225F6BC\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0225F6BC\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225F6BC\n    ldr r1, _0225F63C ; =0x00007FFF\n    b _0225F640\n    nop\n    _0225F62C: .word 0x00010200\n    _0225F630: .word 0x000927C0\n    _0225F634: .word 0x000927C1\n    _0225F638: .word 0xFFFC0000\n    _0225F63C: .word 0x00007FFF\n    mov r0, #1\n    bl sub_0200FBF4\n    ldr r1, [r5, #0x14]\n    cmp r1, #0\n    beq _0225F650\n    mov r0, #1\n    str r0, [r1]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov115_0225F09C\n    mov r1, #6\n    add r0, r4, #0\n    lsl r1, r1, #6\n    add r0, #0x44\n    add r1, r4, r1\n    bl ov01_021F06EC\n    mov r1, #0x6d\n    add r0, r4, #0\n    lsl r1, r1, #2\n    add r0, #0x44\n    add r1, r4, r1\n    bl ov01_021F06EC\n    add r0, r4, #0\n    add r0, #0x44\n    bl ov01_021F05F4\n    mov r0, #0x9f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _0225F700 ; =0xFFFF1FFF\n    and r0, r1\n    str r0, [r2]\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #1\n    bl SetBlendBrightness\n    ldr r0, [r5, #0x10]\n    mov r2, #0\n    ldr r0, [r0, #8]\n    mov r1, #2\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    add sp, #0x28\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r3, #0xa3\n    lsl r3, r3, #2\n    ldr r0, [r4, r3]\n    cmp r0, #1\n    bne _0225F6EC\n    ldr r0, [r5, #0x10]\n    add r3, r3, #4\n    ldr r0, [r0, #8]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    mov r2, #0\n    bl ScheduleSetBgPosText\n    mov r3, #0x29\n    lsl r3, r3, #4\n    ldr r0, [r4, r3]\n    add r0, #0x1e\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x17\n    sub r1, r1, r2\n    mov r0, #0x17\n    ror r1, r0\n    add r0, r2, r1\n    str r0, [r4, r3]\n    ldr r0, [r5]\n    cmp r0, #0xf\n    beq _0225F6F8\n    ldr r0, [r4, #0x44]\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225F700: .word 0xFFFF1FFF"
    );
    #endif
}

void ov115_0225F704(void) {
    /* Original at 0x0225F704 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F724 ; =ov115_022603B0\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F720\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F724: .word ov115_022603B0"
    );
    #endif
}

void ov115_0225F728(void) {
    /* Original at 0x0225F728 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F748 ; =ov115_022603C4\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F744\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F748: .word ov115_022603C4"
    );
    #endif
}

void ov115_0225F74C(void) {
    /* Original at 0x0225F74C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F76C ; =ov115_022603D8\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F768\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F76C: .word ov115_022603D8"
    );
    #endif
}

void ov115_0225F770(void) {
    /* Original at 0x0225F770 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F790 ; =ov115_022603EC\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F78C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F790: .word ov115_022603EC"
    );
    #endif
}

void ov115_0225F794(void) {
    /* Original at 0x0225F794 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F7B4 ; =ov115_02260400\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F7B0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F7B4: .word ov115_02260400"
    );
    #endif
}

void ov115_0225F7B8(void) {
    /* Original at 0x0225F7B8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F7D8 ; =ov115_02260414\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F7D4\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F7D8: .word ov115_02260414"
    );
    #endif
}

void ov115_0225F7DC(void) {
    /* Original at 0x0225F7DC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F7FC ; =ov115_02260428\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F7F8\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F7FC: .word ov115_02260428"
    );
    #endif
}

void ov115_0225F800(void) {
    /* Original at 0x0225F800 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F820 ; =ov115_0226043C\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F81C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F820: .word ov115_0226043C"
    );
    #endif
}

void ov115_0225F824(void) {
    /* Original at 0x0225F824 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F844 ; =ov115_02260450\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F840\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F844: .word ov115_02260450"
    );
    #endif
}

void ov115_0225F848(void) {
    /* Original at 0x0225F848 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F868 ; =ov115_02260464\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F864\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F868: .word ov115_02260464"
    );
    #endif
}

void ov115_0225F86C(void) {
    /* Original at 0x0225F86C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F88C ; =ov115_02260478\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F888\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F88C: .word ov115_02260478"
    );
    #endif
}

void ov115_0225F890(void) {
    /* Original at 0x0225F890 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F8B0 ; =ov115_0226048C\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F8AC\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F8B0: .word ov115_0226048C"
    );
    #endif
}

void ov115_0225F8B4(void) {
    /* Original at 0x0225F8B4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F8D4 ; =ov115_022604A0\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F8D0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F8D4: .word ov115_022604A0"
    );
    #endif
}

void ov115_0225F8D8(void) {
    /* Original at 0x0225F8D8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F8F8 ; =ov115_022604B4\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F8F4\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F8F8: .word ov115_022604B4"
    );
    #endif
}

void ov115_0225F8FC(void) {
    /* Original at 0x0225F8FC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F91C ; =ov115_022604C8\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F918\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F91C: .word ov115_022604C8"
    );
    #endif
}

void ov115_0225F920(void) {
    /* Original at 0x0225F920 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F940 ; =ov115_022604DC\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F93C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F940: .word ov115_022604DC"
    );
    #endif
}

void ov115_0225F944(void) {
    /* Original at 0x0225F944 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0225F964 ; =_02260374\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F220\n    cmp r0, #1\n    bne _0225F960\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F964: .word _02260374"
    );
    #endif
}

void ov115_0225F968(void) {
    /* Original at 0x0225F968 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0, #0xc]\n    bl Save_PlayerData_GetProfile\n    bl PlayerProfile_GetTrainerGender\n    pop {r3, pc}"
    );
    #endif
}

void ov115_0225F978(void) {
    /* Original at 0x0225F978 */
    /* Requires manual decompilation - 997 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    add r6, r0, #0\n    ldr r0, [r6]\n    str r1, [sp, #0x14]\n    str r2, [sp, #0x18]\n    ldr r4, [r6, #0xc]\n    cmp r0, #0xe\n    bls _0225F98E\n    bl _0226021C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225F99A: ; jump table\n    add r0, r1, #0\n    mov r1, #0xc5\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    mov r2, #0xc5\n    str r0, [r6, #0xc]\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    ldr r4, [r6, #0xc]\n    mov r1, #0xa\n    add r0, r4, #0\n    add r0, #0x5c\n    mov r2, #4\n    bl ov01_021F05C4\n    ldr r0, [r6, #0x10]\n    bl ov115_0225F968\n    cmp r0, #0\n    bne _0225FA16\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0xd0\n    str r0, [sp, #4]\n    mov r0, #0xd1\n    str r0, [sp, #8]\n    mov r2, #0xd2\n    str r2, [sp, #0xc]\n    ldr r0, _0225FD58 ; =0x000927C0\n    add r1, r4, #0\n    str r0, [sp, #0x10]\n    add r2, #0xc6\n    ldr r0, [r6, #0x20]\n    add r1, #0x5c\n    add r2, r4, r2\n    mov r3, #0xcf\n    bl ov01_021F0614\n    mov r0, #0xc1\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r1, #0xcf\n    b _0225FA44\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0xd4\n    str r0, [sp, #4]\n    mov r0, #0xd5\n    str r0, [sp, #8]\n    mov r2, #0xd6\n    str r2, [sp, #0xc]\n    ldr r0, _0225FD58 ; =0x000927C0\n    add r1, r4, #0\n    str r0, [sp, #0x10]\n    add r2, #0xc2\n    ldr r0, [r6, #0x20]\n    add r1, #0x5c\n    add r2, r4, r2\n    mov r3, #0xd3\n    bl ov01_021F0614\n    mov r0, #0xc1\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r1, #0xd3\n    add r0, r0, #4\n    str r1, [r4, r0]\n    ldr r0, [sp, #0x18]\n    mov r2, #0x73\n    ldrh r3, [r0]\n    mov r0, #1\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, r3, #1\n    str r0, [sp, #4]\n    add r0, r3, #2\n    str r0, [sp, #8]\n    add r0, r3, #3\n    str r0, [sp, #0xc]\n    ldr r0, _0225FD5C ; =0x000927C1\n    lsl r2, r2, #2\n    str r0, [sp, #0x10]\n    ldr r0, [r6, #0x20]\n    add r1, #0x5c\n    add r2, r4, r2\n    bl ov01_021F0614\n    mov r0, #0xc\n    str r0, [sp]\n    mov r0, #0x30\n    str r0, [sp, #4]\n    mov r0, #0x31\n    str r0, [sp, #8]\n    mov r0, #0x32\n    str r0, [sp, #0xc]\n    ldr r0, _0225FD60 ; =0x000927C2\n    mov r2, #2\n    str r0, [sp, #0x10]\n    ldr r3, [sp, #0x18]\n    add r1, r4, #0\n    lsl r2, r2, #8\n    ldrb r3, [r3, #2]\n    ldr r0, [r6, #0x20]\n    add r1, #0x5c\n    add r2, r4, r2\n    bl ov01_021F0614\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x3c\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0x3e\n    str r0, [sp, #0xc]\n    ldr r0, _0225FD64 ; =0x000927C3\n    mov r2, #0x8d\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    lsl r2, r2, #2\n    ldr r0, [r6, #0x20]\n    add r1, #0x5c\n    add r2, r4, r2\n    mov r3, #0x3b\n    bl ov01_021F0614\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _0226021C\n    mov r1, #2\n    lsl r1, r1, #0xc\n    add r0, sp, #0x2c\n    add r2, r1, #0\n    mov r3, #0\n    bl ov01_021F074C\n    mov r0, #0x66\n    lsl r0, r0, #2\n    add r0, r4, r0\n    str r0, [sp, #0x1c]\n    str r0, [sp, #0x24]\n    add r0, r4, #0\n    str r0, [sp, #0x28]\n    add r0, #0x5c\n    mov r7, #0\n    add r5, r4, #0\n    str r0, [sp, #0x28]\n    cmp r7, #3\n    bge _0225FAF6\n    mov r0, #0\n    ldr r1, [sp, #0x1c]\n    str r0, [sp, #0x20]\n    b _0225FB06\n    sub r1, r7, #1\n    mov r0, #0x34\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp, #0x24]\n    add r1, r0, r2\n    mov r0, #1\n    str r0, [sp, #0x20]\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r2, #0\n    ldr r0, [sp, #0x28]\n    add r3, r2, #0\n    bl ov01_021F0718\n    mov r1, #0x9a\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x9a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #0x20]\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x9a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetPriority\n    ldr r0, [sp, #0x1c]\n    add r7, r7, #1\n    add r0, #0x34\n    add r5, r5, #4\n    str r0, [sp, #0x1c]\n    cmp r7, #4\n    blt _0225FAEA\n    mov r2, #0x9a\n    mov r0, #0\n    lsl r2, r2, #2\n    str r0, [sp]\n    ldr r0, [r4, r2]\n    add r2, #0xa0\n    ldr r1, [sp, #0x14]\n    ldr r2, [r4, r2]\n    mov r3, #0xe\n    bl ov115_02260254\n    mov r0, #0\n    str r0, [sp]\n    ldr r2, [sp, #0x18]\n    mov r0, #0x9b\n    lsl r0, r0, #2\n    ldrh r2, [r2]\n    ldr r0, [r4, r0]\n    ldr r1, [sp, #0x14]\n    mov r3, #0xe\n    bl ov115_02260254\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #6\n    lsl r0, r0, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    mov r2, #0x29\n    add r1, r4, #0\n    mov r3, #2\n    lsl r2, r2, #4\n    str r0, [sp, #4]\n    add r0, r4, r2\n    sub r2, #0x5c\n    add r1, #0x5c\n    add r2, r4, r2\n    lsl r3, r3, #0x12\n    bl ov115_0225F020\n    ldr r0, [r6, #0x10]\n    bl ov01_021F0DDC\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _0226021C\n    mov r1, #0x10\n    mov r0, #1\n    add r2, r1, #0\n    add r3, r6, #4\n    str r0, [sp]\n    bl ov01_021EFCF8\n    mov r0, #0\n    str r0, [r6, #8]\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _0226021C\n    ldr r0, [r6, #8]\n    add r0, r0, #1\n    str r0, [r6, #8]\n    cmp r0, #8\n    bne _0225FBD6\n    bl ov01_021F0E74\n    ldr r0, [r6, #4]\n    cmp r0, #0\n    beq _0225FBEC\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _0226021C\n    bl ov01_021F0E90\n    cmp r0, #1\n    beq _0225FBEE\n    b _0226021C\n    ldr r0, [r6, #0x20]\n    mov r1, #0x97\n    bl ov01_021F0F08\n    mov r0, #8\n    str r0, [sp]\n    ldr r0, _0225FD68 ; =0x04000050\n    mov r1, #1\n    mov r2, #0x1e\n    mov r3, #0\n    bl G2x_SetBlendAlpha_\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _0226021C\n    mov r0, #6\n    mov r2, #0xe\n    mov r3, #5\n    str r0, [sp]\n    ldr r1, _0225FD6C ; =0xFFF80000\n    add r0, r4, #0\n    lsl r2, r2, #0xe\n    lsl r3, r3, #0x10\n    bl ov01_021EFEC8\n    mov r2, #0x17\n    ldr r1, [r4]\n    add r0, sp, #0x38\n    lsl r2, r2, #0xe\n    mov r3, #0\n    bl ov01_021F074C\n    mov r0, #0x9a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    mov r0, #1\n    ldr r1, [sp, #0x3c]\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    str r1, [sp, #0x3c]\n    ldr r1, [sp, #0x38]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    str r0, [sp, #0x38]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    mov r0, #0x9a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r1, #6\n    add r0, r4, #0\n    mov r2, #0x32\n    str r1, [sp]\n    ldr r3, _0225FD70 ; =0xFFFB0000\n    add r0, #0x30\n    lsl r1, r1, #0x12\n    lsl r2, r2, #0xe\n    bl ov01_021EFEC8\n    mov r2, #0x17\n    ldr r1, [r4, #0x30]\n    add r0, sp, #0x38\n    lsl r2, r2, #0xe\n    mov r3, #0\n    bl ov01_021F074C\n    mov r0, #0x9b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    mov r0, #1\n    ldr r1, [sp, #0x3c]\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    str r1, [sp, #0x3c]\n    ldr r1, [sp, #0x38]\n    lsl r0, r0, #2\n    sub r0, r1, r0\n    str r0, [sp, #0x38]\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    mov r0, #0x9b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x20\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    mov r1, #0x10\n    str r0, [sp, #4]\n    ldr r0, [r6, #0x20]\n    mov r2, #0\n    mov r3, #0x40\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0xd\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    mov r2, #2\n    str r2, [sp, #8]\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r2, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [r6, #0x10]\n    add r1, r4, r1\n    ldr r0, [r0, #8]\n    mov r3, #0x15\n    bl AddWindowParameterized\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x14]\n    ldrh r0, [r0, #6]\n    bl ov115_0225F158\n    mov r1, #0\n    add r5, r0, #0\n    str r1, [sp]\n    ldr r0, _0225FD74 ; =0x00010200\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r2, r5, #0\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl String_Delete\n    mov r0, #3\n    str r0, [r6, #4]\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _0226021C\n    _0225FD58: .word 0x000927C0\n    _0225FD5C: .word 0x000927C1\n    _0225FD60: .word 0x000927C2\n    _0225FD64: .word 0x000927C3\n    _0225FD68: .word 0x04000050\n    _0225FD6C: .word 0xFFF80000\n    _0225FD70: .word 0xFFFB0000\n    _0225FD74: .word 0x00010200\n    ldr r0, [r6, #4]\n    cmp r0, #0\n    ble _0225FD9C\n    sub r0, r0, #1\n    str r0, [r6, #4]\n    bne _0225FDA6\n    mov r0, #3\n    bl ov01_021F0FB8\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    b _0225FDA6\n    mov r0, #0x29\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ov115_0225F0B4\n    add r0, r4, #0\n    bl ov01_021EFF28\n    mov r2, #0x17\n    ldr r1, [r4]\n    add r0, sp, #0x38\n    lsl r2, r2, #0xe\n    mov r3, #0\n    bl ov01_021F074C\n    add r5, sp, #0x38\n    mov r2, #0x9e\n    lsl r2, r2, #2\n    add r3, r4, r2\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    sub r2, #0x10\n    str r0, [r3]\n    ldr r0, [r4, r2]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    mov r0, #1\n    ldr r1, [sp, #0x3c]\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    str r1, [sp, #0x3c]\n    ldr r1, [sp, #0x38]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    str r0, [sp, #0x38]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    add r0, r4, #0\n    add r0, #0x30\n    bl ov01_021EFF28\n    mov r2, #0x17\n    add r7, r0, #0\n    ldr r1, [r4, #0x30]\n    add r0, sp, #0x38\n    lsl r2, r2, #0xe\n    mov r3, #0\n    bl ov01_021F074C\n    add r5, sp, #0x38\n    mov r2, #0xa1\n    lsl r2, r2, #2\n    add r3, r4, r2\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    sub r2, #0x18\n    str r0, [r3]\n    ldr r0, [r4, r2]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    mov r0, #1\n    ldr r1, [sp, #0x3c]\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    str r1, [sp, #0x3c]\n    ldr r1, [sp, #0x38]\n    lsl r0, r0, #2\n    sub r0, r1, r0\n    str r0, [sp, #0x38]\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    cmp r7, #1\n    bne _0225FF3C\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _0226021C\n    mov r0, #0x29\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ov115_0225F0B4\n    add r5, r0, #0\n    bl ov01_021F1044\n    cmp r5, #0\n    beq _0225FF3C\n    cmp r0, #0\n    beq _0225FF3C\n    add r0, r4, #0\n    add r0, #0x48\n    mov r1, #0\n    mov r2, #0x10\n    mov r3, #3\n    bl ov01_021EFE34\n    bl ov01_021F1060\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _0226021C\n    add r0, r4, #0\n    add r0, #0x48\n    bl ov01_021EFE44\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0x48\n    bl ov01_021F0DC8\n    cmp r5, #1\n    bne _0225FF3C\n    mov r3, #0\n    mov r2, #0x9a\n    str r3, [sp]\n    lsl r2, r2, #2\n    ldr r0, [r4, r2]\n    add r2, #0xa0\n    ldr r1, [sp, #0x14]\n    ldr r2, [r4, r2]\n    bl ov115_02260254\n    mov r3, #0\n    mov r0, #0x9b\n    ldr r2, [sp, #0x18]\n    str r3, [sp]\n    lsl r0, r0, #2\n    ldrh r2, [r2]\n    ldr r0, [r4, r0]\n    ldr r1, [sp, #0x14]\n    bl ov115_02260254\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0x27\n    lsl r0, r0, #4\n    mov r1, #2\n    ldr r0, [r4, r0]\n    lsl r1, r1, #0xc\n    bl Sprite_SetAnimSpeed\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    mov r1, #2\n    ldr r0, [r4, r0]\n    lsl r1, r1, #0xc\n    bl Sprite_SetAnimSpeed\n    ldr r0, [r6, #0x20]\n    mov r1, #0x98\n    bl ov01_021F0F08\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _0226021C\n    add r0, r4, #0\n    add r0, #0x48\n    mov r1, #0x10\n    mov r2, #0\n    mov r3, #6\n    bl ov01_021EFE34\n    mov r0, #4\n    bl ov01_021F0FB8\n    mov r0, #0\n    mov r1, #1\n    bl SetBgPriority\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _0226021C\n    add r0, r4, #0\n    add r0, #0x48\n    bl ov01_021EFE44\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0x48\n    bl ov01_021F0DC8\n    cmp r5, #1\n    beq _0225FF3E\n    b _0226021C\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    mov r0, #8\n    str r0, [r6, #4]\n    b _0226021C\n    ldr r0, [r6, #4]\n    cmp r0, #0\n    ble _0225FF56\n    sub r0, r0, #1\n    str r0, [r6, #4]\n    b _0226021C\n    add r0, r2, #0\n    ldrb r0, [r0, #3]\n    mov r1, #0\n    ldr r2, _02260248 ; =0xFFFFE000\n    str r0, [sp]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl ov01_021EFEC8\n    ldr r0, [sp, #0x18]\n    mov r1, #0\n    ldrb r0, [r0, #3]\n    ldr r2, _02260248 ; =0xFFFFE000\n    add r3, r1, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov01_021EFEC8\n    mov r0, #0\n    str r0, [r6, #4]\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _0226021C\n    ldr r0, [r6, #4]\n    add r0, r0, #1\n    str r0, [r6, #4]\n    add r0, r4, #0\n    bl ov01_021EFF28\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov01_021EFF28\n    ldr r1, [r6, #4]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    add r0, sp, #0x38\n    bne _0225FFD0\n    mov r2, #0x9e\n    lsl r2, r2, #2\n    ldr r3, [r4, r2]\n    ldr r1, [r4]\n    add r2, r2, #4\n    add r1, r3, r1\n    ldr r3, [r4, r2]\n    ldr r2, [r4, #0x18]\n    add r2, r3, r2\n    mov r3, #0\n    bl ov01_021F074C\n    b _0225FFE8\n    mov r2, #0x9e\n    lsl r2, r2, #2\n    ldr r3, [r4, r2]\n    ldr r1, [r4]\n    add r2, r2, #4\n    sub r1, r3, r1\n    ldr r3, [r4, r2]\n    ldr r2, [r4, #0x18]\n    sub r2, r3, r2\n    mov r3, #0\n    bl ov01_021F074C\n    cmp r5, #0\n    beq _0225FFFC\n    mov r0, #0x9e\n    lsl r0, r0, #2\n    add r3, sp, #0x38\n    add r2, r4, r0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    mov r0, #0x9a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    mov r0, #1\n    ldr r1, [sp, #0x3c]\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    str r1, [sp, #0x3c]\n    ldr r1, [sp, #0x38]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    str r0, [sp, #0x38]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    ldr r1, [r6, #4]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    add r0, sp, #0x38\n    bne _02260058\n    mov r2, #0xa1\n    lsl r2, r2, #2\n    ldr r3, [r4, r2]\n    ldr r1, [r4]\n    add r2, r2, #4\n    sub r1, r3, r1\n    ldr r3, [r4, r2]\n    ldr r2, [r4, #0x18]\n    sub r2, r3, r2\n    mov r3, #0\n    bl ov01_021F074C\n    b _02260070\n    mov r2, #0xa1\n    lsl r2, r2, #2\n    ldr r3, [r4, r2]\n    ldr r1, [r4]\n    add r2, r2, #4\n    add r1, r3, r1\n    ldr r3, [r4, r2]\n    ldr r2, [r4, #0x18]\n    add r2, r3, r2\n    mov r3, #0\n    bl ov01_021F074C\n    cmp r5, #0\n    beq _02260084\n    mov r0, #0xa1\n    lsl r0, r0, #2\n    add r3, sp, #0x38\n    add r2, r4, r0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    mov r0, #0x9b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    mov r0, #1\n    ldr r1, [sp, #0x3c]\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    str r1, [sp, #0x3c]\n    ldr r1, [sp, #0x38]\n    lsl r0, r0, #2\n    sub r0, r1, r0\n    str r0, [sp, #0x38]\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    cmp r5, #0\n    bne _022600B4\n    b _0226021C\n    ldr r0, [r6]\n    mov r1, #0\n    add r0, r0, #1\n    str r0, [r6]\n    mov r0, #4\n    bl GfGfx_EngineATogglePlanes\n    mov r2, #3\n    mov r0, #0x10\n    lsl r2, r2, #0x12\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0\n    lsr r3, r2, #3\n    bl ov01_021EFEC8\n    mov r0, #0x10\n    mov r2, #3\n    str r0, [sp]\n    add r0, r4, #0\n    lsl r2, r2, #0x12\n    add r0, #0x18\n    mov r1, #0\n    lsr r3, r2, #3\n    bl ov01_021EFEC8\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r3, _0226024C ; =0x00007FFF\n    mov r0, #3\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    b _0226021C\n    add r0, r4, #0\n    bl ov01_021EFF28\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov01_021EFF28\n    mov r2, #0x9e\n    lsl r2, r2, #2\n    ldr r3, [r4, r2]\n    ldr r1, [r4]\n    add r2, r2, #4\n    sub r1, r3, r1\n    ldr r3, [r4, r2]\n    ldr r2, [r4, #0x18]\n    add r0, sp, #0x38\n    sub r2, r3, r2\n    mov r3, #0\n    bl ov01_021F074C\n    mov r0, #0x9a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    mov r0, #1\n    ldr r1, [sp, #0x3c]\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    str r1, [sp, #0x3c]\n    ldr r1, [sp, #0x38]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    str r0, [sp, #0x38]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    mov r2, #0xa1\n    lsl r2, r2, #2\n    ldr r3, [r4, r2]\n    ldr r1, [r4]\n    add r2, r2, #4\n    add r1, r3, r1\n    ldr r3, [r4, r2]\n    ldr r2, [r4, #0x18]\n    add r0, sp, #0x38\n    add r2, r3, r2\n    mov r3, #0\n    bl ov01_021F074C\n    mov r0, #0x9b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    mov r0, #1\n    ldr r1, [sp, #0x3c]\n    lsl r0, r0, #0xe\n    add r1, r1, r0\n    str r1, [sp, #0x3c]\n    ldr r1, [sp, #0x38]\n    lsl r0, r0, #2\n    sub r0, r1, r0\n    str r0, [sp, #0x38]\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, sp, #0x38\n    bl Sprite_SetMatrix\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0226021C\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _0226021C\n    ldr r1, _0226024C ; =0x00007FFF\n    mov r0, #1\n    bl sub_0200FBF4\n    ldr r1, [r6, #0x14]\n    cmp r1, #0\n    beq _022601BA\n    mov r0, #1\n    str r0, [r1]\n    mov r0, #0x29\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ov115_0225F09C\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r7, #0x9a\n    mov r6, #0\n    add r5, r4, #0\n    lsl r7, r7, #2\n    ldr r0, [r5, r7]\n    bl Sprite_Delete\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, #4\n    blt _022601D6\n    mov r0, #0x66\n    lsl r0, r0, #2\n    add r7, r4, #0\n    mov r6, #0\n    add r5, r4, r0\n    add r7, #0x5c\n    add r0, r7, #0\n    add r1, r5, #0\n    bl ov01_021F06EC\n    add r6, r6, #1\n    add r5, #0x34\n    cmp r6, #4\n    blt _022601F0\n    add r4, #0x5c\n    add r0, r4, #0\n    bl ov01_021F05F4\n    bl ov01_021F1060\n    bl ov01_021F0EC0\n    ldr r0, _02260250 ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    add sp, #0x44\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r6]\n    cmp r0, #0xe\n    beq _02260242\n    ldr r0, [r4, #0x5c]\n    bl SpriteList_RenderAndAnimateSprites\n    ldr r0, [r6]\n    cmp r0, #4\n    ble _02260242\n    bl Thunk_G3X_Reset\n    bl ov01_021F1008\n    bl ov01_021F0EAC\n    mov r0, #0\n    add r1, r0, #0\n    bl RequestSwap3DBuffers\n    mov r0, #0\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    _02260248: .word 0xFFFFE000\n    _0226024C: .word 0x00007FFF\n    _02260250: .word 0x04000050"
    );
    #endif
}

void ov115_02260254(void) {
    /* Original at 0x02260254 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r7, r0, #0\n    add r6, r2, #0\n    add r0, r5, #0\n    mov r1, #0x20\n    str r3, [sp, #4]\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r0, #0x6d\n    add r1, r6, #0\n    add r2, sp, #8\n    add r3, r5, #0\n    bl GfGfxLoader_GetPlttData\n    add r5, r0, #0\n    add r0, sp, #0x10\n    ldrh r0, [r0, #0x10]\n    add r1, r4, #0\n    mov r2, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    ldr r3, [sp, #4]\n    ldr r0, [r0, #0xc]\n    bl BlendPalette\n    add r0, r7, #0\n    bl Sprite_GetPaletteProxy\n    add r6, r0, #0\n    add r0, r4, #0\n    mov r1, #0x20\n    bl DC_FlushRange\n    add r0, r6, #0\n    mov r1, #1\n    bl NNS_G2dGetImagePaletteLocation\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0x20\n    bl GX_LoadOBJPltt\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r5, #0\n    bl Heap_Free\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov115_022602C0(void) {
    /* Original at 0x022602C0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _022602E0 ; =ov115_02260388\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F978\n    cmp r0, #1\n    bne _022602DC\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _022602E0: .word ov115_02260388"
    );
    #endif
}

void ov115_022602E4(void) {
    /* Original at 0x022602E4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _02260304 ; =ov115_02260390\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F978\n    cmp r0, #1\n    bne _02260300\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _02260304: .word ov115_02260390"
    );
    #endif
}

void ov115_02260308(void) {
    /* Original at 0x02260308 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _02260328 ; =ov115_02260398\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F978\n    cmp r0, #1\n    bne _02260324\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _02260328: .word ov115_02260398"
    );
    #endif
}

void ov115_0226032C(void) {
    /* Original at 0x0226032C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _0226034C ; =ov115_022603A0\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F978\n    cmp r0, #1\n    bne _02260348\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _0226034C: .word ov115_022603A0"
    );
    #endif
}

void ov115_02260350(void) {
    /* Original at 0x02260350 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r2, _02260370 ; =ov115_022603A8\n    add r0, r4, #0\n    mov r1, #4\n    bl ov115_0225F978\n    cmp r0, #1\n    bne _0226036C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EFCDC\n    pop {r3, r4, r5, pc}\n    nop\n    _02260370: .word ov115_022603A8"
    );
    #endif
}
