/* Decompiled from asm/overlay_18.s */
#include "global.h"

void ov18_021EE35C(void) {
    /* Original at 0x021EE35C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    mov r6, #0\n    str r2, [sp]\n    add r0, r2, #0\n    beq _021EE384\n    add r4, r7, #0\n    add r4, #0xc\n    ldr r0, [r7, #4]\n    add r1, r4, #0\n    add r2, r5, #0\n    bl AddWindow\n    ldr r0, [sp]\n    add r6, r6, #1\n    add r5, #8\n    add r4, #0x10\n    cmp r6, r0\n    blo _021EE36E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021EE388(void) {
    /* Original at 0x021EE388 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r5, #0\n    mov r6, #0\n    add r4, #0xc\n    ldr r0, [r5, #0x18]\n    cmp r0, #0\n    beq _021EE39E\n    add r0, r4, #0\n    bl RemoveWindow\n    add r6, r6, #1\n    add r5, #0x10\n    add r4, #0x10\n    cmp r6, #0x65\n    blo _021EE392\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021EE3AC(void) {
    /* Original at 0x021EE3AC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r3, #0\n    add r4, r2, #0\n    bl NewString_ReadMsgData\n    mov r1, #0x66\n    add r6, r0, #0\n    lsl r1, r1, #4\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x28]\n    add r1, r5, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    add r1, #0xc\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    ldr r2, [sp, #0x20]\n    str r0, [sp, #8]\n    lsl r0, r4, #4\n    add r0, r1, r0\n    ldr r1, _021EE3F8 ; =0x00000664\n    ldr r3, [sp, #0x24]\n    ldr r1, [r5, r1]\n    bl ov18_021F95FC\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _021EE3F8: .word 0x00000664"
    );
    #endif
}

void ov18_021EE3FC(void) {
    /* Original at 0x021EE3FC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r1, _021EE448 ; =ov18_021F9F3C\n    mov r2, #0x14\n    add r5, r0, #0\n    bl ov18_021EE35C\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov18_021EE508\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov18_021EE508\n    add r0, r5, #0\n    bl ov18_021EE5FC\n    add r0, r5, #0\n    bl ov18_021F8824\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov18_021F8838\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov18_021EE6BC\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov18_021EE8B8\n    pop {r4, r5, r6, pc}\n    _021EE448: .word ov18_021F9F3C"
    );
    #endif
}

void ov18_021EE44C(void) {
    /* Original at 0x021EE44C */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    str r0, [sp, #0x1c]\n    mov r0, #0x25\n    add r4, r1, #0\n    str r0, [sp]\n    ldr r1, _021EE4FC ; =0x00000854\n    ldr r0, [sp, #0x1c]\n    str r2, [sp, #0x20]\n    ldr r0, [r0, r1]\n    mov r1, #1\n    add r2, r1, #0\n    add r3, sp, #0x2c\n    bl GfGfxLoader_GetCharDataFromOpenNarc\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x2c]\n    lsl r6, r4, #4\n    ldr r7, [r0, #0x14]\n    ldr r4, [sp, #0x1c]\n    mov r5, #0\n    str r5, [sp, #0x24]\n    add r4, #0xc\n    add r7, #0x20\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #8\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    mov r2, #0\n    str r0, [sp, #0x18]\n    add r0, r4, r6\n    add r1, r7, #0\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    mov r2, #0\n    str r0, [sp, #0x18]\n    add r0, r4, r6\n    add r1, r7, #0\n    add r3, r2, #0\n    bl BlitBitmapRect\n    ldr r0, [sp, #0x24]\n    add r5, #8\n    add r0, r0, #1\n    str r0, [sp, #0x24]\n    cmp r0, #0xc\n    blo _021EE47C\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EE500 ; =0x000F0800\n    ldr r2, _021EE504 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x1c]\n    add r0, r4, r6\n    ldr r1, [r1, r2]\n    ldr r2, [sp, #0x20]\n    mov r3, #0x60\n    bl ov18_021F9648\n    ldr r0, [sp, #0x28]\n    bl Heap_Free\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EE4FC: .word 0x00000854\n    _021EE500: .word 0x000F0800\n    _021EE504: .word 0x0000065C"
    );
    #endif
}

void ov18_021EE508(void) {
    /* Original at 0x021EE508 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    bl ov18_021EE44C\n    add r4, #0xc\n    lsl r0, r5, #4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021EE520(void) {
    /* Original at 0x021EE520 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r5, r0, #0\n    mov r0, #0x25\n    str r0, [sp]\n    ldr r0, _021EE5E0 ; =0x00000854\n    str r1, [sp, #0x1c]\n    ldr r0, [r5, r0]\n    mov r1, #1\n    str r2, [sp, #0x20]\n    add r2, r1, #0\n    add r3, sp, #0x2c\n    bl GfGfxLoader_GetCharDataFromOpenNarc\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x2c]\n    mov r6, #0\n    ldr r7, [r0, #0x14]\n    ldr r0, [sp, #0x1c]\n    add r5, #0xc\n    lsl r0, r0, #4\n    add r5, r5, r0\n    add r0, r7, #0\n    str r0, [sp, #0x28]\n    add r0, #0x20\n    add r4, r6, #0\n    str r0, [sp, #0x28]\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #8\n    str r0, [sp, #0x10]\n    mov r1, #3\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    lsl r1, r1, #8\n    mov r2, #0\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    add r1, r7, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    mov r2, #0\n    str r0, [sp, #0x18]\n    ldr r1, [sp, #0x28]\n    add r0, r5, #0\n    add r3, r2, #0\n    bl BlitBitmapRect\n    add r6, r6, #1\n    add r4, #8\n    cmp r6, #3\n    blo _021EE556\n    ldr r0, [sp, #0x24]\n    bl Heap_Free\n    mov r0, #0xf\n    mov r1, #8\n    mov r2, #7\n    mov r3, #0x25\n    bl MessagePrinter_New\n    str r5, [sp]\n    mov r1, #0\n    str r1, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    ldr r1, [sp, #0x20]\n    add r4, r0, #0\n    mov r2, #3\n    mov r3, #2\n    bl PrintUIntOnWindow\n    add r0, r4, #0\n    bl MessagePrinter_Delete\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EE5E0: .word 0x00000854"
    );
    #endif
}

void ov18_021EE5E4(void) {
    /* Original at 0x021EE5E4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    bl ov18_021EE520\n    add r4, #0xc\n    lsl r0, r5, #4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021EE5FC(void) {
    /* Original at 0x021EE5FC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021EE62C ; =0x0000185D\n    add r4, r0, #0\n    ldr r2, _021EE630 ; =0x0000102C\n    ldrb r1, [r4, r1]\n    ldrh r2, [r4, r2]\n    add r1, r1, #2\n    bl ov18_021EE5E4\n    ldr r1, _021EE62C ; =0x0000185D\n    ldr r2, _021EE634 ; =0x0000102E\n    ldrb r1, [r4, r1]\n    ldrh r2, [r4, r2]\n    add r0, r4, #0\n    add r1, r1, #4\n    bl ov18_021EE5E4\n    ldr r1, _021EE62C ; =0x0000185D\n    mov r0, #1\n    ldrb r2, [r4, r1]\n    eor r0, r2\n    strb r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _021EE62C: .word 0x0000185D\n    _021EE630: .word 0x0000102C\n    _021EE634: .word 0x0000102E"
    );
    #endif
}

void ov18_021EE638(void) {
    /* Original at 0x021EE638 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r7, r1, #0\n    beq _021EE6A6\n    add r4, r5, #0\n    add r4, #0xc\n    lsl r6, r2, #4\n    add r0, r4, r6\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r1, _021EE6B4 ; =0x0000185C\n    add r0, r7, #0\n    ldrb r1, [r5, r1]\n    mov r2, #0x25\n    bl ov18_021E590C\n    add r7, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Pokedex_GetInternationalViewFlag\n    cmp r0, #1\n    ldr r0, _021EE6B8 ; =0x00020100\n    bne _021EE682\n    mov r3, #0\n    str r3, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    add r0, r4, r6\n    add r1, r7, #0\n    mov r2, #0x38\n    bl ov18_021F95FC\n    b _021EE696\n    mov r3, #0\n    str r3, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    add r0, r4, r6\n    add r1, r7, #0\n    mov r2, #0x2c\n    bl ov18_021F95FC\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r4, r6\n    bl ScheduleWindowCopyToVram\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    add r5, #0xc\n    lsl r0, r2, #4\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021EE6B4: .word 0x0000185C\n    _021EE6B8: .word 0x00020100"
    );
    #endif
}

void ov18_021EE6BC(void) {
    /* Original at 0x021EE6BC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #7\n    add r6, r2, #0\n    bl ov18_021EE71C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #8\n    bl ov18_021EE75C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #9\n    bl ov18_021EE7DC\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #0xa\n    bl ov18_021EE834\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021EE6EC(void) {
    /* Original at 0x021EE6EC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #0x51\n    add r6, r2, #0\n    bl ov18_021EE71C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x52\n    bl ov18_021EE75C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x53\n    bl ov18_021EE7DC\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #0x54\n    bl ov18_021EE834\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021EE71C(void) {
    /* Original at 0x021EE71C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r6, #0\n    lsl r4, r1, #4\n    add r5, #0xc\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EE754 ; =0x00020100\n    ldr r1, _021EE758 ; =0x0000065C\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r1, [r6, r1]\n    add r0, r5, r4\n    mov r2, #8\n    bl ov18_021F9648\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021EE754: .word 0x00020100\n    _021EE758: .word 0x0000065C"
    );
    #endif
}

void ov18_021EE75C(void) {
    /* Original at 0x021EE75C */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r5, #0\n    add r0, r2, #0\n    add r7, r1, #0\n    add r4, #0xc\n    lsl r6, r0, #4\n    add r0, r4, r6\n    mov r1, #0\n    str r2, [sp, #0x14]\n    bl FillWindowPixelBuffer\n    cmp r7, #0\n    beq _021EE7C6\n    ldr r0, _021EE7D0 ; =0x00001858\n    add r1, r7, #0\n    ldrb r0, [r5, r0]\n    bl Pokedex_ConvertToCurrentDexNo\n    add r2, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x66\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r0, #1\n    str r0, [sp]\n    mov r1, #0\n    str r1, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r0, _021EE7D4 ; =0x00020100\n    ldr r2, [sp, #0x14]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, _021EE7D8 ; =0x0000065C\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    mov r3, #9\n    bl ov18_021EE3AC\n    add r0, r4, r6\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, r6\n    bl ClearWindowTilemapAndScheduleTransfer\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EE7D0: .word 0x00001858\n    _021EE7D4: .word 0x00020100\n    _021EE7D8: .word 0x0000065C"
    );
    #endif
}

void ov18_021EE7DC(void) {
    /* Original at 0x021EE7DC */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    lsl r5, r2, #4\n    add r4, #0xc\n    add r6, r1, #0\n    add r0, r4, r5\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    cmp r6, #0\n    beq _021EE826\n    add r0, r6, #0\n    mov r1, #2\n    mov r2, #0x25\n    bl ov18_021E590C\n    add r6, r0, #0\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, _021EE830 ; =0x00020100\n    mov r2, #0\n    str r0, [sp, #4]\n    add r0, r4, r5\n    add r1, r6, #0\n    add r3, r2, #0\n    str r2, [sp, #8]\n    bl ov18_021F95FC\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r4, r5\n    bl ScheduleWindowCopyToVram\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    add r0, r4, r5\n    bl ClearWindowTilemapAndScheduleTransfer\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _021EE830: .word 0x00020100"
    );
    #endif
}

void ov18_021EE834(void) {
    /* Original at 0x021EE834 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r4, r6, #0\n    lsl r5, r3, #4\n    add r4, #0xc\n    add r7, r1, #0\n    add r0, r4, r5\n    mov r1, #0\n    str r2, [sp, #0xc]\n    bl FillWindowPixelBuffer\n    cmp r7, #0\n    beq _021EE8A6\n    ldr r0, [sp, #0xc]\n    lsl r0, r0, #2\n    add r1, r6, r0\n    ldr r0, _021EE8B0 ; =0x00001032\n    ldrh r0, [r1, r0]\n    cmp r0, #2\n    bne _021EE86A\n    add r0, r7, #0\n    mov r1, #2\n    mov r2, #0x25\n    bl ov18_021E595C\n    b _021EE874\n    mov r0, #0\n    mov r1, #2\n    mov r2, #0x25\n    bl ov18_021E595C\n    add r6, r0, #0\n    add r0, r4, r5\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r2, r0, #4\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, _021EE8B4 ; =0x00020100\n    add r1, r6, #0\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r0, r4, r5\n    mov r3, #0\n    bl ov18_021F95FC\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r4, r5\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, r5\n    bl ClearWindowTilemapAndScheduleTransfer\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EE8B0: .word 0x00001032\n    _021EE8B4: .word 0x00020100"
    );
    #endif
}

void ov18_021EE8B8(void) {
    /* Original at 0x021EE8B8 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, #0xcc\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #0\n    add r0, #0xec\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #0\n    add r0, #0xbc\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #0\n    add r0, #0xdc\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #0\n    add r0, #0xfc\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0x43\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0x47\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    cmp r4, #0\n    beq _021EE97C\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #0xb\n    bl ov18_021EE984\n    ldr r0, _021EE980 ; =0x0000185C\n    ldrb r0, [r5, r0]\n    cmp r0, #2\n    bne _021EE950\n    add r0, r5, #0\n    mov r1, #0xc\n    bl ov18_021EE9FC\n    add r0, r5, #0\n    mov r1, #0xe\n    bl ov18_021EEA40\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #0xd\n    bl ov18_021EEAE4\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #0xf\n    bl ov18_021EEB94\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    mov r1, #0x10\n    bl ov18_021EEBE4\n    ldr r3, _021EE980 ; =0x0000185C\n    add r0, r5, #0\n    ldrb r3, [r5, r3]\n    add r1, r4, #0\n    mov r2, #0x11\n    bl ov18_021EEC34\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x12\n    bl ov18_021EECB0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #0x13\n    bl ov18_021EED00\n    pop {r4, r5, r6, pc}\n    nop\n    _021EE980: .word 0x0000185C"
    );
    #endif
}

void ov18_021EE984(void) {
    /* Original at 0x021EE984 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    lsl r0, r2, #2\n    add r7, r1, #0\n    add r1, r6, r0\n    ldr r0, _021EE9F0 ; =0x00001032\n    ldrh r0, [r1, r0]\n    cmp r0, #2\n    bne _021EE9EC\n    add r5, r6, #0\n    add r5, #0xc\n    lsl r4, r3, #4\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r1, _021EE9F4 ; =0x0000185C\n    add r0, r7, #0\n    ldrb r1, [r6, r1]\n    mov r2, #0\n    mov r3, #0x25\n    bl ov18_021E59A8\n    add r6, r0, #0\n    add r0, r5, r4\n    bl GetWindowWidth\n    add r7, r0, #0\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidthMultiline\n    lsl r1, r7, #3\n    sub r0, r1, r0\n    lsr r2, r0, #1\n    mov r3, #0\n    ldr r0, _021EE9F8 ; =0x00020100\n    str r3, [sp]\n    str r0, [sp, #4]\n    add r0, r5, r4\n    add r1, r6, #0\n    str r3, [sp, #8]\n    bl ov18_021F95FC\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021EE9F0: .word 0x00001032\n    _021EE9F4: .word 0x0000185C\n    _021EE9F8: .word 0x00020100"
    );
    #endif
}

void ov18_021EE9FC(void) {
    /* Original at 0x021EE9FC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r6, #0\n    lsl r4, r1, #4\n    add r5, #0xc\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EEA38 ; =0x00020100\n    ldr r1, _021EEA3C ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r6, r1]\n    add r0, r5, r4\n    mov r2, #0xa\n    mov r3, #0x14\n    bl ov18_021F9648\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021EEA38: .word 0x00020100\n    _021EEA3C: .word 0x0000065C"
    );
    #endif
}

void ov18_021EEA40(void) {
    /* Original at 0x021EEA40 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r6, #0\n    lsl r4, r1, #4\n    add r5, #0xc\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EEA7C ; =0x00020100\n    ldr r1, _021EEA80 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r6, r1]\n    add r0, r5, r4\n    mov r2, #0xb\n    mov r3, #0x14\n    bl ov18_021F9648\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021EEA7C: .word 0x00020100\n    _021EEA80: .word 0x0000065C"
    );
    #endif
}

void ov18_021EEA84(void) {
    /* Original at 0x021EEA84 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    add r7, r1, #0\n    add r5, r2, #0\n    add r6, r3, #0\n    bl GetDexHeightMsgBank\n    add r2, r0, #0\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x25\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0xc]\n    cmp r5, #2\n    bne _021EEAAE\n    add r1, r7, #0\n    bl NewString_ReadMsgData\n    b _021EEAB4\n    mov r1, #0\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x30]\n    add r4, #0xc\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x34]\n    ldr r2, [sp, #0x28]\n    str r0, [sp, #8]\n    lsl r0, r6, #4\n    ldr r3, [sp, #0x2c]\n    add r0, r4, r0\n    add r1, r5, #0\n    bl ov18_021F95FC\n    add r0, r5, #0\n    bl String_Delete\n    ldr r0, [sp, #0xc]\n    bl DestroyMsgData\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021EEAE4(void) {
    /* Original at 0x021EEAE4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r5, #0\n    add r0, r3, #0\n    str r1, [sp, #0x10]\n    add r4, #0xc\n    lsl r6, r0, #4\n    add r0, r4, r6\n    mov r1, #0\n    add r7, r2, #0\n    str r3, [sp, #0x14]\n    bl FillWindowPixelBuffer\n    mov r0, #4\n    str r0, [sp]\n    mov r1, #0\n    lsl r2, r7, #2\n    add r3, r5, r2\n    ldr r0, _021EEB2C ; =0x00020100\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r2, _021EEB30 ; =0x00001032\n    ldr r1, [sp, #0x10]\n    ldrh r2, [r3, r2]\n    ldr r3, [sp, #0x14]\n    add r0, r5, #0\n    bl ov18_021EEA84\n    add r0, r4, r6\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EEB2C: .word 0x00020100\n    _021EEB30: .word 0x00001032"
    );
    #endif
}

void ov18_021EEB34(void) {
    /* Original at 0x021EEB34 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    add r7, r1, #0\n    add r5, r2, #0\n    add r6, r3, #0\n    bl GetDexWeightMsgBank\n    add r2, r0, #0\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x25\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0xc]\n    cmp r5, #2\n    bne _021EEB5E\n    add r1, r7, #0\n    bl NewString_ReadMsgData\n    b _021EEB64\n    mov r1, #0\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x30]\n    add r4, #0xc\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x34]\n    ldr r2, [sp, #0x28]\n    str r0, [sp, #8]\n    lsl r0, r6, #4\n    ldr r3, [sp, #0x2c]\n    add r0, r4, r0\n    add r1, r5, #0\n    bl ov18_021F95FC\n    add r0, r5, #0\n    bl String_Delete\n    ldr r0, [sp, #0xc]\n    bl DestroyMsgData\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021EEB94(void) {
    /* Original at 0x021EEB94 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r5, #0\n    add r0, r3, #0\n    str r1, [sp, #0x10]\n    add r4, #0xc\n    lsl r6, r0, #4\n    add r0, r4, r6\n    mov r1, #0\n    add r7, r2, #0\n    str r3, [sp, #0x14]\n    bl FillWindowPixelBuffer\n    mov r0, #4\n    str r0, [sp]\n    mov r1, #0\n    lsl r2, r7, #2\n    add r3, r5, r2\n    ldr r0, _021EEBDC ; =0x00020100\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r2, _021EEBE0 ; =0x00001032\n    ldr r1, [sp, #0x10]\n    ldrh r2, [r3, r2]\n    ldr r3, [sp, #0x14]\n    add r0, r5, #0\n    bl ov18_021EEB34\n    add r0, r4, r6\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EEBDC: .word 0x00020100\n    _021EEBE0: .word 0x00001032"
    );
    #endif
}

void ov18_021EEBE4(void) {
    /* Original at 0x021EEBE4 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r6, #0\n    lsl r4, r1, #4\n    add r5, #0xc\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _021EEC28 ; =0x0000185C\n    ldrb r0, [r6, r0]\n    bl LanguageToDexFlag\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EEC2C ; =0x00020100\n    ldr r1, _021EEC30 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r6, r1]\n    add r0, r5, r4\n    add r2, #0x7a\n    mov r3, #0x38\n    bl ov18_021F9648\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021EEC28: .word 0x0000185C\n    _021EEC2C: .word 0x00020100\n    _021EEC30: .word 0x0000065C"
    );
    #endif
}

void ov18_021EEC34(void) {
    /* Original at 0x021EEC34 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r5, #0\n    lsl r0, r6, #4\n    str r1, [sp, #0x14]\n    add r7, #0xc\n    str r0, [sp, #0x18]\n    add r0, r7, r0\n    mov r1, #0\n    add r4, r3, #0\n    bl FillWindowPixelBuffer\n    cmp r4, #1\n    bne _021EEC58\n    mov r4, #0\n    b _021EEC5A\n    mov r4, #1\n    ldr r0, _021EECA4 ; =0x00001858\n    ldr r1, [sp, #0x14]\n    ldrb r0, [r5, r0]\n    bl Pokedex_ConvertToCurrentDexNo\n    add r2, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #0x66\n    str r4, [sp, #4]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _021EECA8 ; =0x00020100\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, _021EECAC ; =0x0000065C\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    mov r3, #9\n    bl ov18_021EE3AC\n    ldr r0, [sp, #0x18]\n    add r0, r7, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021EECA4: .word 0x00001858\n    _021EECA8: .word 0x00020100\n    _021EECAC: .word 0x0000065C"
    );
    #endif
}

void ov18_021EECB0(void) {
    /* Original at 0x021EECB0 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r5, r6, #0\n    add r5, #0xc\n    lsl r4, r2, #4\n    add r7, r1, #0\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r1, _021EECF8 ; =0x0000185C\n    add r0, r7, #0\n    ldrb r1, [r6, r1]\n    mov r2, #0x25\n    bl ov18_021E590C\n    add r6, r0, #0\n    mov r2, #0\n    ldr r0, _021EECFC ; =0x00020100\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r5, r4\n    add r1, r6, #0\n    add r3, r2, #0\n    str r2, [sp, #8]\n    bl ov18_021F95FC\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021EECF8: .word 0x0000185C\n    _021EECFC: .word 0x00020100"
    );
    #endif
}

void ov18_021EED00(void) {
    /* Original at 0x021EED00 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r5, #0\n    lsl r4, r3, #4\n    add r6, #0xc\n    str r1, [sp, #0xc]\n    add r7, r2, #0\n    add r0, r6, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    lsl r0, r7, #2\n    add r1, r5, r0\n    ldr r0, _021EED64 ; =0x00001032\n    ldrh r0, [r1, r0]\n    ldr r1, _021EED68 ; =0x0000185C\n    cmp r0, #2\n    bne _021EED32\n    ldrb r1, [r5, r1]\n    ldr r0, [sp, #0xc]\n    mov r2, #0x25\n    bl ov18_021E595C\n    b _021EED3C\n    ldrb r1, [r5, r1]\n    mov r0, #0\n    mov r2, #0x25\n    bl ov18_021E595C\n    add r5, r0, #0\n    mov r3, #0\n    ldr r0, _021EED6C ; =0x00020100\n    str r3, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r0, r6, r4\n    add r1, r5, #0\n    mov r2, #0x7c\n    bl ov18_021F95FC\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r6, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EED64: .word 0x00001032\n    _021EED68: .word 0x0000185C\n    _021EED6C: .word 0x00020100"
    );
    #endif
}

void ov18_021EED70(void) {
    /* Original at 0x021EED70 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _021EEE30 ; =0x0000056C\n    add r4, r1, #0\n    add r0, r5, r0\n    add r6, r2, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _021EEE34 ; =0x0000058C\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _021EEE38 ; =0x0000055C\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _021EEE3C ; =0x0000057C\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _021EEE40 ; =0x0000059C\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _021EEE44 ; =0x000005AC\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _021EEE48 ; =0x000005BC\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _021EEE4C ; =0x000005CC\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _021EEE50 ; =0x000005DC\n    add r0, r5, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    cmp r4, #0\n    beq _021EEE2E\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #0x55\n    bl ov18_021EE984\n    ldr r0, _021EEE54 ; =0x0000185C\n    ldrb r0, [r5, r0]\n    cmp r0, #2\n    bne _021EEE02\n    add r0, r5, #0\n    mov r1, #0x56\n    bl ov18_021EE9FC\n    add r0, r5, #0\n    mov r1, #0x58\n    bl ov18_021EEA40\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #0x57\n    bl ov18_021EEAE4\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #0x59\n    bl ov18_021EEB94\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    mov r1, #0x5a\n    bl ov18_021EEBE4\n    ldr r3, _021EEE54 ; =0x0000185C\n    add r0, r5, #0\n    ldrb r3, [r5, r3]\n    add r1, r4, #0\n    mov r2, #0x5b\n    bl ov18_021EEC34\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x5c\n    bl ov18_021EECB0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #0x5d\n    bl ov18_021EED00\n    pop {r4, r5, r6, pc}\n    _021EEE30: .word 0x0000056C\n    _021EEE34: .word 0x0000058C\n    _021EEE38: .word 0x0000055C\n    _021EEE3C: .word 0x0000057C\n    _021EEE40: .word 0x0000059C\n    _021EEE44: .word 0x000005AC\n    _021EEE48: .word 0x000005BC\n    _021EEE4C: .word 0x000005CC\n    _021EEE50: .word 0x000005DC\n    _021EEE54: .word 0x0000185C"
    );
    #endif
}

void ov18_021EEE58(void) {
    /* Original at 0x021EEE58 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021EEE80 ; =ov18_021F9FDC\n    add r4, r0, #0\n    mov r2, #0x65\n    bl ov18_021EE35C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021EEED0\n    add r0, r4, #0\n    bl ov18_021EF45C\n    add r0, r4, #0\n    bl ov18_021EF528\n    add r0, r4, #0\n    bl ov18_021EEE84\n    pop {r4, pc}\n    _021EEE80: .word ov18_021F9FDC"
    );
    #endif
}

void ov18_021EEE84(void) {
    /* Original at 0x021EEE84 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r2, #0x47\n    lsl r2, r2, #2\n    ldr r0, [r4, #8]\n    mov r1, #6\n    add r2, r4, r2\n    bl sub_02019A60\n    mov r2, #0x4b\n    lsl r2, r2, #2\n    ldr r0, [r4, #8]\n    mov r1, #6\n    add r2, r4, r2\n    bl sub_02019A60\n    mov r2, #0x4f\n    lsl r2, r2, #2\n    ldr r0, [r4, #8]\n    mov r1, #6\n    add r2, r4, r2\n    bl sub_02019A60\n    mov r2, #0x47\n    lsl r2, r2, #2\n    ldr r0, [r4, #8]\n    mov r1, #7\n    add r2, r4, r2\n    bl sub_02019A60\n    mov r2, #0x4f\n    lsl r2, r2, #2\n    ldr r0, [r4, #8]\n    mov r1, #7\n    add r2, r4, r2\n    bl sub_02019A60\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021EEED0(void) {
    /* Original at 0x021EEED0 */
    /* Requires manual decompilation - 356 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    add r5, r4, #0\n    add r5, #0xc\n    add r6, r1, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    cmp r6, #0xa\n    bls _021EEEEA\n    b _021EF1CE\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EEEF6: ; jump table\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0xc\n    mov r3, #0x70\n    bl ov18_021F9648\n    mov r0, #0x16\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0xd\n    mov r3, #0x70\n    bl ov18_021F9648\n    b _021EF1CE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0xe\n    mov r3, #0x70\n    bl ov18_021F9648\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, _021EF1E0 ; =0x0000102C\n    mov r0, #0x66\n    lsl r0, r0, #4\n    ldrh r2, [r4, r2]\n    ldr r0, [r4, r0]\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r0, #0x70\n    str r0, [sp]\n    mov r0, #0x16\n    str r0, [sp, #4]\n    mov r2, #0\n    ldr r0, _021EF1D8 ; =0x00020100\n    str r2, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r1, _021EF1DC ; =0x0000065C\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    mov r3, #0xf\n    bl ov18_021EE3AC\n    b _021EF1CE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0xc\n    mov r3, #0x70\n    bl ov18_021F9648\n    mov r0, #0x16\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0x10\n    mov r3, #0x70\n    bl ov18_021F9648\n    b _021EF1CE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0xc\n    mov r3, #0x70\n    bl ov18_021F9648\n    mov r0, #0x16\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0x11\n    mov r3, #0x70\n    bl ov18_021F9648\n    b _021EF1CE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0xc\n    mov r3, #0x70\n    bl ov18_021F9648\n    mov r0, #0x16\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0x12\n    mov r3, #0x70\n    bl ov18_021F9648\n    b _021EF1CE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0xc\n    mov r3, #0x70\n    bl ov18_021F9648\n    mov r0, #0x16\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0x14\n    mov r3, #0x70\n    bl ov18_021F9648\n    b _021EF1CE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0xc\n    mov r3, #0x70\n    bl ov18_021F9648\n    mov r0, #0x16\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0x13\n    mov r3, #0x70\n    bl ov18_021F9648\n    b _021EF1CE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0xc\n    mov r3, #0x70\n    bl ov18_021F9648\n    mov r2, #0x16\n    str r2, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r3, #0x70\n    bl ov18_021F9648\n    b _021EF1CE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0xc\n    mov r3, #0x70\n    bl ov18_021F9648\n    mov r0, #0x16\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0x15\n    mov r3, #0x70\n    bl ov18_021F9648\n    b _021EF1CE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0xc\n    mov r3, #0x70\n    bl ov18_021F9648\n    mov r0, #0x16\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0x19\n    mov r3, #0x70\n    bl ov18_021F9648\n    b _021EF1CE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0x17\n    mov r3, #0x70\n    bl ov18_021F9648\n    mov r0, #0x16\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021EF1D8 ; =0x00020100\n    ldr r1, _021EF1DC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0x18\n    mov r3, #0x70\n    bl ov18_021F9648\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _021EF1D8: .word 0x00020100\n    _021EF1DC: .word 0x0000065C\n    _021EF1E0: .word 0x0000102C"
    );
    #endif
}

void ov18_021EF1E4(void) {
    /* Original at 0x021EF1E4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r6, #0\n    lsl r4, r1, #4\n    add r5, #0xc\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EF218 ; =0x00020100\n    ldr r1, _021EF21C ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r6, r1]\n    add r0, r5, r4\n    mov r2, #0x1a\n    mov r3, #0x24\n    bl ov18_021F9648\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021EF218: .word 0x00020100\n    _021EF21C: .word 0x0000065C"
    );
    #endif
}

void ov18_021EF220(void) {
    /* Original at 0x021EF220 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r6, #0\n    lsl r4, r1, #4\n    add r5, #0xc\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EF254 ; =0x00020100\n    ldr r1, _021EF258 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r6, r1]\n    add r0, r5, r4\n    mov r2, #0x1b\n    mov r3, #0x14\n    bl ov18_021F9648\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021EF254: .word 0x00020100\n    _021EF258: .word 0x0000065C"
    );
    #endif
}

void ov18_021EF25C(void) {
    /* Original at 0x021EF25C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r6, #0\n    lsl r4, r1, #4\n    add r5, #0xc\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EF290 ; =0x00020100\n    ldr r1, _021EF294 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r6, r1]\n    add r0, r5, r4\n    mov r2, #0x1c\n    mov r3, #0x14\n    bl ov18_021F9648\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021EF290: .word 0x00020100\n    _021EF294: .word 0x0000065C"
    );
    #endif
}

void ov18_021EF298(void) {
    /* Original at 0x021EF298 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r6, #0\n    lsl r4, r1, #4\n    add r5, #0xc\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EF2CC ; =0x00020100\n    ldr r1, _021EF2D0 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r6, r1]\n    add r0, r5, r4\n    mov r2, #0x1d\n    mov r3, #0x14\n    bl ov18_021F9648\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021EF2CC: .word 0x00020100\n    _021EF2D0: .word 0x0000065C"
    );
    #endif
}

void ov18_021EF2D4(void) {
    /* Original at 0x021EF2D4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r6, #0\n    lsl r4, r1, #4\n    add r5, #0xc\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EF308 ; =0x00020100\n    ldr r1, _021EF30C ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r6, r1]\n    add r0, r5, r4\n    mov r2, #0x1e\n    mov r3, #0x14\n    bl ov18_021F9648\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021EF308: .word 0x00020100\n    _021EF30C: .word 0x0000065C"
    );
    #endif
}

void ov18_021EF310(void) {
    /* Original at 0x021EF310 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r6, #0\n    lsl r4, r1, #4\n    add r5, #0xc\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EF344 ; =0x00020100\n    ldr r1, _021EF348 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r6, r1]\n    add r0, r5, r4\n    mov r2, #0x1f\n    mov r3, #0x14\n    bl ov18_021F9648\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021EF344: .word 0x00020100\n    _021EF348: .word 0x0000065C"
    );
    #endif
}

void ov18_021EF34C(void) {
    /* Original at 0x021EF34C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r6, #0\n    lsl r4, r1, #4\n    add r5, #0xc\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EF380 ; =0x00020100\n    ldr r1, _021EF384 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [r6, r1]\n    add r0, r5, r4\n    mov r2, #0x20\n    mov r3, #0x18\n    bl ov18_021F9648\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021EF380: .word 0x00020100\n    _021EF384: .word 0x0000065C"
    );
    #endif
}

void ov18_021EF388(void) {
    /* Original at 0x021EF388 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r4, r0, #0\n    str r0, [sp, #0x1c]\n    mov r0, #0x25\n    lsl r6, r1, #4\n    str r0, [sp]\n    str r2, [sp, #0x20]\n    ldr r1, _021EF450 ; =0x00000854\n    ldr r0, [sp, #0x1c]\n    mov r2, #1\n    ldr r0, [r0, r1]\n    mov r1, #4\n    add r3, sp, #0x2c\n    add r4, #0xc\n    bl GfGfxLoader_GetCharDataFromOpenNarc\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x2c]\n    mov r5, #0\n    ldr r7, [r0, #0x14]\n    str r5, [sp, #0x24]\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #8\n    str r0, [sp, #0x10]\n    mov r1, #0x31\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    lsl r1, r1, #6\n    mov r2, #0\n    str r0, [sp, #0x18]\n    add r0, r4, r6\n    add r1, r7, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r1, #0xca\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    lsl r1, r1, #4\n    mov r2, #0\n    str r0, [sp, #0x18]\n    add r0, r4, r6\n    add r1, r7, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    ldr r0, [sp, #0x24]\n    add r5, #8\n    add r0, r0, #1\n    str r0, [sp, #0x24]\n    cmp r0, #8\n    blo _021EF3B4\n    ldr r0, [sp, #0x28]\n    bl Heap_Free\n    add r0, r4, r6\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EF454 ; =0x00020100\n    lsl r5, r3, #3\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    lsr r3, r5, #0x1f\n    add r3, r5, r3\n    ldr r2, _021EF458 ; =0x0000065C\n    ldr r1, [sp, #0x1c]\n    add r0, r4, r6\n    ldr r1, [r1, r2]\n    ldr r2, [sp, #0x20]\n    asr r3, r3, #1\n    bl ov18_021F9648\n    add r0, r4, r6\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EF450: .word 0x00000854\n    _021EF454: .word 0x00020100\n    _021EF458: .word 0x0000065C"
    );
    #endif
}

void ov18_021EF45C(void) {
    /* Original at 0x021EF45C */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0\n    add r5, r0, #0\n    bl ov18_021E613C\n    mov r0, #0x53\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x57\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x5b\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x5f\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x63\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x67\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    mov r1, #0x14\n    bl ov18_021EF1E4\n    add r0, r5, #0\n    mov r1, #0x15\n    bl ov18_021EF220\n    add r0, r5, #0\n    mov r1, #0x16\n    bl ov18_021EF25C\n    add r0, r5, #0\n    mov r1, #0x17\n    bl ov18_021EF298\n    add r0, r5, #0\n    mov r1, #0x18\n    bl ov18_021EF2D4\n    add r0, r5, #0\n    mov r1, #0x19\n    bl ov18_021EF310\n    add r0, r5, #0\n    mov r1, #0x1a\n    bl ov18_021EF34C\n    add r0, r5, #0\n    mov r1, #0x11\n    mov r2, #0x23\n    bl ov18_021EF388\n    add r0, r5, #0\n    mov r1, #0x12\n    mov r2, #0x24\n    bl ov18_021EF388\n    add r0, r5, #0\n    mov r1, #0x13\n    mov r2, #0x25\n    bl ov18_021EF388\n    mov r0, #0x53\n    lsl r0, r0, #2\n    mov r4, #0x14\n    add r5, r5, r0\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0x1a\n    bls _021EF518\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021EF528(void) {
    /* Original at 0x021EF528 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r1, #0x1b\n    bl ov18_021EFBE8\n    add r0, r5, #0\n    mov r1, #0x1c\n    bl ov18_021EFC3C\n    ldr r1, _021EF5CC ; =0x00001870\n    mov r2, #0x1d\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r3, r2, #0\n    bl ov18_021EFC9C\n    ldr r1, _021EF5D0 ; =0x00001874\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    mov r2, #0x1e\n    mov r3, #0x1d\n    bl ov18_021EFC9C\n    ldr r1, _021EF5D4 ; =0x00001850\n    add r0, r5, #0\n    ldr r2, [r5, r1]\n    add r1, #0x28\n    ldr r1, [r5, r1]\n    lsl r1, r1, #2\n    ldrh r1, [r2, r1]\n    mov r2, #0x1f\n    bl ov18_021EFD00\n    ldr r1, _021EF5D4 ; =0x00001850\n    add r0, r5, #0\n    ldr r2, [r5, r1]\n    add r1, #0x2c\n    ldr r1, [r5, r1]\n    lsl r1, r1, #2\n    ldrh r1, [r2, r1]\n    mov r2, #0x20\n    bl ov18_021EFD00\n    ldr r1, _021EF5D4 ; =0x00001850\n    add r0, r5, #0\n    ldr r2, [r5, r1]\n    add r1, #0x30\n    ldr r1, [r5, r1]\n    lsl r1, r1, #2\n    add r1, r2, r1\n    ldrh r1, [r1, #2]\n    mov r2, #0x21\n    bl ov18_021EFDB4\n    ldr r1, _021EF5D4 ; =0x00001850\n    add r0, r5, #0\n    ldr r2, [r5, r1]\n    add r1, #0x34\n    ldr r1, [r5, r1]\n    lsl r1, r1, #2\n    add r1, r2, r1\n    ldrh r1, [r1, #2]\n    mov r2, #0x22\n    bl ov18_021EFDB4\n    add r0, r5, #0\n    mov r1, #0x23\n    bl ov18_021EFE70\n    mov r0, #0x6f\n    lsl r0, r0, #2\n    mov r4, #0x1b\n    add r5, r5, r0\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0x23\n    bls _021EF5BA\n    pop {r3, r4, r5, pc}\n    nop\n    _021EF5CC: .word 0x00001870\n    _021EF5D0: .word 0x00001874\n    _021EF5D4: .word 0x00001850"
    );
    #endif
}

void ov18_021EF5D8(void) {
    /* Original at 0x021EF5D8 */
    /* Requires manual decompilation - 177 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    mov r1, #0\n    add r5, r0, #0\n    bl ov18_021E613C\n    mov r0, #0x93\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x9b\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x9f\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0xa3\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0xab\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EF75C ; =0x00020100\n    ldr r1, _021EF760 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0x93\n    lsl r0, r0, #2\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0x1a\n    mov r3, #0x2c\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EF75C ; =0x00020100\n    ldr r1, _021EF760 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0x9b\n    lsl r0, r0, #2\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0x29\n    mov r3, #0x2c\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EF75C ; =0x00020100\n    ldr r1, _021EF760 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0x9f\n    lsl r0, r0, #2\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0x2a\n    mov r3, #0x2c\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EF75C ; =0x00020100\n    ldr r1, _021EF760 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0xa3\n    lsl r0, r0, #2\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0x2b\n    mov r3, #0x2c\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EF75C ; =0x00020100\n    ldr r1, _021EF760 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    mov r2, #0x2c\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    add r3, r2, #0\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EF75C ; =0x00020100\n    ldr r1, _021EF760 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0xab\n    lsl r0, r0, #2\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0x2d\n    mov r3, #0x2c\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EF75C ; =0x00020100\n    ldr r1, _021EF760 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0x2e\n    mov r3, #0x2c\n    bl ov18_021F9648\n    add r0, r5, #0\n    mov r1, #0x11\n    mov r2, #0x27\n    bl ov18_021EF388\n    add r0, r5, #0\n    mov r1, #0x13\n    mov r2, #0x28\n    bl ov18_021EF388\n    add r0, r5, #0\n    mov r1, #0x25\n    bl ov18_021EFBE8\n    mov r0, #0x93\n    lsl r0, r0, #2\n    mov r4, #0x24\n    add r5, r5, r0\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0x2b\n    bls _021EF748\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021EF75C: .word 0x00020100\n    _021EF760: .word 0x0000065C"
    );
    #endif
}

void ov18_021EF764(void) {
    /* Original at 0x021EF764 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    mov r1, #0\n    add r5, r0, #0\n    bl ov18_021E613C\n    ldr r0, _021EF834 ; =0x0000041C\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _021EF838 ; =0x0000043C\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EF83C ; =0x00020100\n    ldr r1, _021EF840 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, _021EF834 ; =0x0000041C\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0x1b\n    mov r3, #0x18\n    bl ov18_021F9648\n    mov r4, #0\n    add r0, r4, #0\n    bl ov18_021E7698\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    cmp r4, #0x1a\n    bne _021EF7B6\n    mov r6, #0x71\n    b _021EF7BA\n    add r6, r4, #0\n    add r6, #0x45\n    add r0, r7, #0\n    mov r1, #7\n    bl _s32_div_f\n    str r1, [sp, #0x10]\n    add r0, r7, #0\n    mov r1, #7\n    bl _s32_div_f\n    lsl r0, r0, #5\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EF83C ; =0x00020100\n    ldr r3, [sp, #0x10]\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, _021EF840 ; =0x0000065C\n    ldr r0, _021EF838 ; =0x0000043C\n    lsl r3, r3, #5\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    add r2, r6, #0\n    add r3, #0x18\n    bl ov18_021F9648\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x1b\n    blo _021EF7A4\n    add r0, r5, #0\n    mov r1, #0x11\n    mov r2, #0x27\n    bl ov18_021EF388\n    add r0, r5, #0\n    mov r1, #0x13\n    mov r2, #0x28\n    bl ov18_021EF388\n    add r0, r5, #0\n    mov r1, #0x42\n    bl ov18_021EFC3C\n    ldr r0, _021EF834 ; =0x0000041C\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _021EF838 ; =0x0000043C\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _021EF844 ; =0x0000042C\n    add r0, r5, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021EF834: .word 0x0000041C\n    _021EF838: .word 0x0000043C\n    _021EF83C: .word 0x00020100\n    _021EF840: .word 0x0000065C\n    _021EF844: .word 0x0000042C"
    );
    #endif
}

void ov18_021EF848(void) {
    /* Original at 0x021EF848 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    mov r1, #0\n    add r6, r0, #0\n    bl ov18_021E613C\n    mov r0, #0xb3\n    lsl r0, r0, #2\n    add r0, r6, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EF908 ; =0x00020100\n    mov r2, #0x1c\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, _021EF90C ; =0x0000065C\n    mov r0, #0xb3\n    lsl r0, r0, #2\n    ldr r1, [r6, r1]\n    add r0, r6, r0\n    add r3, r2, #0\n    bl ov18_021F9648\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r5, _021EF910 ; =ov18_021F9DE4 + 7 * 8 + 2\n    mov r7, #0x2f\n    add r4, r6, r0\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EF908 ; =0x00020100\n    add r2, r5, #0\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, _021EF90C ; =0x0000065C\n    sub r2, #0x5e\n    ldrh r2, [r2]\n    ldr r1, [r6, r1]\n    add r0, r4, #0\n    mov r3, #0x20\n    bl ov18_021F9648\n    add r7, r7, #1\n    add r4, #0x10\n    add r5, r5, #2\n    cmp r7, #0x40\n    bls _021EF88A\n    add r0, r6, #0\n    mov r1, #0x11\n    mov r2, #0x27\n    bl ov18_021EF388\n    add r0, r6, #0\n    mov r1, #0x13\n    mov r2, #0x28\n    bl ov18_021EF388\n    ldr r1, _021EF914 ; =0x00001870\n    add r0, r6, #0\n    ldr r1, [r6, r1]\n    mov r2, #0x2d\n    mov r3, #0x1d\n    bl ov18_021EFC9C\n    ldr r1, _021EF918 ; =0x00001874\n    add r0, r6, #0\n    ldr r1, [r6, r1]\n    mov r2, #0x2e\n    mov r3, #0x23\n    bl ov18_021EFC9C\n    mov r0, #0xb3\n    lsl r0, r0, #2\n    mov r4, #0x2c\n    add r5, r6, r0\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0x40\n    bls _021EF8F6\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EF908: .word 0x00020100\n    _021EF90C: .word 0x0000065C\n    _021EF910: .word ov18_021F9DE4 + 7 * 8 + 2\n    _021EF914: .word 0x00001870\n    _021EF918: .word 0x00001874"
    );
    #endif
}

void ov18_021EF91C(void) {
    /* Original at 0x021EF91C */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    mov r1, #0\n    add r5, r0, #0\n    bl ov18_021E613C\n    ldr r0, _021EF9A4 ; =0x0000044C\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EF9A8 ; =0x00020100\n    ldr r1, _021EF9AC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, _021EF9A4 ; =0x0000044C\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0x1d\n    mov r3, #0x14\n    bl ov18_021F9648\n    add r0, r5, #0\n    mov r1, #0x11\n    mov r2, #0x27\n    bl ov18_021EF388\n    add r0, r5, #0\n    mov r1, #0x13\n    mov r2, #0x28\n    bl ov18_021EF388\n    ldr r1, _021EF9B0 ; =0x00001850\n    add r0, r5, #0\n    ldr r2, [r5, r1]\n    add r1, #0x28\n    ldr r1, [r5, r1]\n    lsl r1, r1, #2\n    ldrh r1, [r2, r1]\n    mov r2, #0x45\n    bl ov18_021EFD00\n    ldr r1, _021EF9B0 ; =0x00001850\n    add r0, r5, #0\n    ldr r2, [r5, r1]\n    add r1, #0x2c\n    ldr r1, [r5, r1]\n    lsl r1, r1, #2\n    ldrh r1, [r2, r1]\n    mov r2, #0x46\n    bl ov18_021EFD00\n    ldr r0, _021EF9A4 ; =0x0000044C\n    mov r4, #0x44\n    add r5, r5, r0\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0x46\n    bls _021EF992\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _021EF9A4: .word 0x0000044C\n    _021EF9A8: .word 0x00020100\n    _021EF9AC: .word 0x0000065C\n    _021EF9B0: .word 0x00001850"
    );
    #endif
}

void ov18_021EF9B4(void) {
    /* Original at 0x021EF9B4 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    mov r1, #0\n    add r5, r0, #0\n    bl ov18_021E613C\n    ldr r0, _021EFA40 ; =0x0000047C\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EFA44 ; =0x00020100\n    ldr r1, _021EFA48 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, _021EFA40 ; =0x0000047C\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0x1e\n    mov r3, #0x18\n    bl ov18_021F9648\n    add r0, r5, #0\n    mov r1, #0x11\n    mov r2, #0x27\n    bl ov18_021EF388\n    add r0, r5, #0\n    mov r1, #0x13\n    mov r2, #0x28\n    bl ov18_021EF388\n    ldr r1, _021EFA4C ; =0x00001850\n    add r0, r5, #0\n    ldr r2, [r5, r1]\n    add r1, #0x30\n    ldr r1, [r5, r1]\n    lsl r1, r1, #2\n    add r1, r2, r1\n    ldrh r1, [r1, #2]\n    mov r2, #0x48\n    bl ov18_021EFDB4\n    ldr r1, _021EFA4C ; =0x00001850\n    add r0, r5, #0\n    ldr r2, [r5, r1]\n    add r1, #0x34\n    ldr r1, [r5, r1]\n    lsl r1, r1, #2\n    add r1, r2, r1\n    ldrh r1, [r1, #2]\n    mov r2, #0x49\n    bl ov18_021EFDB4\n    ldr r0, _021EFA40 ; =0x0000047C\n    mov r4, #0x47\n    add r5, r5, r0\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0x49\n    bls _021EFA2E\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _021EFA40: .word 0x0000047C\n    _021EFA44: .word 0x00020100\n    _021EFA48: .word 0x0000065C\n    _021EFA4C: .word 0x00001850"
    );
    #endif
}

void ov18_021EFA50(void) {
    /* Original at 0x021EFA50 */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    mov r1, #0\n    add r5, r0, #0\n    bl ov18_021E613C\n    ldr r0, _021EFB68 ; =0x000004AC\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _021EFB6C ; =0x000004CC\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _021EFB70 ; =0x000004DC\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _021EFB74 ; =0x000004EC\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _021EFB78 ; =0x000004FC\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EFB7C ; =0x00020100\n    ldr r1, _021EFB80 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, _021EFB68 ; =0x000004AC\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0x1f\n    mov r3, #0x18\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EFB7C ; =0x00020100\n    ldr r1, _021EFB80 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, _021EFB6C ; =0x000004CC\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0x41\n    mov r3, #0x1c\n    bl ov18_021F9648\n    ldr r0, _021EFB84 ; =0x00001860\n    ldr r0, [r5, r0]\n    cmp r0, #1\n    bne _021EFAF4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EFB7C ; =0x00020100\n    ldr r1, _021EFB80 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, _021EFB70 ; =0x000004DC\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0x42\n    mov r3, #0x1c\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EFB7C ; =0x00020100\n    ldr r1, _021EFB80 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, _021EFB74 ; =0x000004EC\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0x43\n    mov r3, #0x1c\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EFB7C ; =0x00020100\n    ldr r1, _021EFB80 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, _021EFB78 ; =0x000004FC\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0x44\n    mov r3, #0x1c\n    bl ov18_021F9648\n    add r0, r5, #0\n    mov r1, #0x11\n    mov r2, #0x27\n    bl ov18_021EF388\n    add r0, r5, #0\n    mov r1, #0x13\n    mov r2, #0x28\n    bl ov18_021EF388\n    add r0, r5, #0\n    mov r1, #0x4b\n    bl ov18_021EFE70\n    ldr r0, _021EFB68 ; =0x000004AC\n    mov r4, #0x4a\n    add r5, r5, r0\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0x4f\n    bls _021EFB56\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _021EFB68: .word 0x000004AC\n    _021EFB6C: .word 0x000004CC\n    _021EFB70: .word 0x000004DC\n    _021EFB74: .word 0x000004EC\n    _021EFB78: .word 0x000004FC\n    _021EFB7C: .word 0x00020100\n    _021EFB80: .word 0x0000065C\n    _021EFB84: .word 0x00001860"
    );
    #endif
}

void ov18_021EFB88(void) {
    /* Original at 0x021EFB88 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r1, #0\n    add r4, r0, #0\n    bl ov18_021E613C\n    ldr r0, _021EFBDC ; =0x0000050C\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EFBE0 ; =0x00020100\n    ldr r1, _021EFBE4 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, _021EFBDC ; =0x0000050C\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    mov r2, #0x20\n    mov r3, #0x18\n    bl ov18_021F9648\n    add r0, r4, #0\n    mov r1, #0x11\n    mov r2, #0x27\n    bl ov18_021EF388\n    add r0, r4, #0\n    mov r1, #0x13\n    mov r2, #0x28\n    bl ov18_021EF388\n    ldr r0, _021EFBDC ; =0x0000050C\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, pc}\n    _021EFBDC: .word 0x0000050C\n    _021EFBE0: .word 0x00020100\n    _021EFBE4: .word 0x0000065C"
    );
    #endif
}

void ov18_021EFBE8(void) {
    /* Original at 0x021EFBE8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r6, #0\n    lsl r4, r1, #4\n    add r5, #0xc\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, r4\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EFC30 ; =0x00020100\n    ldr r2, _021EFC34 ; =0x00001868\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, r4\n    ldr r1, _021EFC38 ; =0x0000065C\n    lsl r4, r3, #3\n    ldr r2, [r6, r2]\n    lsr r3, r4, #0x1f\n    add r3, r4, r3\n    ldr r1, [r6, r1]\n    add r2, #0x29\n    asr r3, r3, #1\n    bl ov18_021F9648\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021EFC30: .word 0x00020100\n    _021EFC34: .word 0x00001868\n    _021EFC38: .word 0x0000065C"
    );
    #endif
}

void ov18_021EFC3C(void) {
    /* Original at 0x021EFC3C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r7, r5, #0\n    lsl r6, r1, #4\n    add r7, #0xc\n    add r0, r7, r6\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _021EFC90 ; =0x0000186C\n    ldr r4, [r5, r0]\n    cmp r4, #0x1a\n    bne _021EFC5C\n    mov r4, #0x71\n    b _021EFC5E\n    add r4, #0x45\n    add r0, r7, r6\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EFC94 ; =0x00020100\n    add r2, r4, #0\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r4, r3, #3\n    str r0, [sp, #0xc]\n    ldr r1, _021EFC98 ; =0x0000065C\n    lsr r3, r4, #0x1f\n    add r3, r4, r3\n    ldr r1, [r5, r1]\n    add r0, r7, r6\n    asr r3, r3, #1\n    bl ov18_021F9648\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EFC90: .word 0x0000186C\n    _021EFC94: .word 0x00020100\n    _021EFC98: .word 0x0000065C"
    );
    #endif
}

void ov18_021EFC9C(void) {
    /* Original at 0x021EFC9C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r0, #0\n    add r5, r7, #0\n    add r5, #0xc\n    lsl r4, r2, #4\n    str r1, [sp, #0x10]\n    add r0, r5, r4\n    mov r1, #0\n    add r6, r3, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    bne _021EFCCA\n    add r0, r5, r4\n    bl GetWindowWidth\n    lsl r1, r0, #3\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r6, r0, #1\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    ldr r2, [sp, #0x10]\n    str r0, [sp, #4]\n    ldr r0, _021EFCF4 ; =0x00020100\n    lsl r3, r2, #1\n    ldr r2, _021EFCF8 ; =ov18_021F9DC0\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, _021EFCFC ; =0x0000065C\n    ldrh r2, [r2, r3]\n    ldr r1, [r7, r1]\n    add r0, r5, r4\n    add r3, r6, #0\n    bl ov18_021F9648\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021EFCF4: .word 0x00020100\n    _021EFCF8: .word ov18_021F9DC0\n    _021EFCFC: .word 0x0000065C"
    );
    #endif
}

void ov18_021EFD00(void) {
    /* Original at 0x021EFD00 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    ldr r4, _021EFDA4 ; =0x000003E7\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r1, r4\n    bne _021EFD12\n    add r4, #0xbd\n    b _021EFD26\n    ldr r0, _021EFDA8 ; =0x00002710\n    mul r0, r1\n    mov r1, #0xfe\n    bl _u32_div_f\n    add r0, r0, #5\n    mov r1, #0xa\n    bl _u32_div_f\n    add r4, r0, #0\n    add r7, r5, #0\n    lsl r0, r6, #4\n    add r7, #0xc\n    str r0, [sp, #0x14]\n    add r0, r7, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    mov r1, #0xc\n    bl _u32_div_f\n    mov r1, #0\n    add r2, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x66\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    add r0, r4, #0\n    mov r1, #0xc\n    bl _u32_div_f\n    mov r3, #2\n    add r2, r1, #0\n    mov r0, #0x66\n    str r3, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl BufferIntegerAsString\n    ldr r0, [sp, #0x14]\n    add r0, r7, r0\n    bl GetWindowWidth\n    lsl r1, r0, #3\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r0, _021EFDAC ; =0x00020100\n    ldr r1, _021EFDB0 ; =0x0000065C\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r2, r6, #0\n    mov r3, #0xaf\n    bl ov18_021EE3AC\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EFDA4: .word 0x000003E7\n    _021EFDA8: .word 0x00002710\n    _021EFDAC: .word 0x00020100\n    _021EFDB0: .word 0x0000065C"
    );
    #endif
}

void ov18_021EFDB4(void) {
    /* Original at 0x021EFDB4 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, _021EFE58 ; =0x0000270F\n    add r4, r2, #0\n    cmp r1, r0\n    bne _021EFDC6\n    ldr r6, _021EFE5C ; =0x00018696\n    b _021EFDD6\n    ldr r0, _021EFE60 ; =0x00035D2E\n    mul r0, r1\n    ldr r1, _021EFE64 ; =0x0000C350\n    add r0, r0, r1\n    lsl r1, r1, #1\n    bl _u32_div_f\n    add r6, r0, #0\n    add r7, r5, #0\n    lsl r0, r4, #4\n    add r7, #0xc\n    str r0, [sp, #0x14]\n    add r0, r7, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r6, #0\n    mov r1, #0xa\n    bl _u32_div_f\n    mov r1, #0\n    add r2, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x66\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r3, #4\n    bl BufferIntegerAsString\n    add r0, r6, #0\n    mov r1, #0xa\n    bl _u32_div_f\n    mov r0, #2\n    add r2, r1, #0\n    str r0, [sp]\n    mov r1, #1\n    mov r0, #0x66\n    str r1, [sp, #4]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    ldr r0, [sp, #0x14]\n    add r0, r7, r0\n    bl GetWindowWidth\n    lsl r1, r0, #3\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r0, _021EFE68 ; =0x00020100\n    ldr r1, _021EFE6C ; =0x0000065C\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r2, r4, #0\n    mov r3, #0x26\n    bl ov18_021EE3AC\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EFE58: .word 0x0000270F\n    _021EFE5C: .word 0x00018696\n    _021EFE60: .word 0x00035D2E\n    _021EFE64: .word 0x0000C350\n    _021EFE68: .word 0x00020100\n    _021EFE6C: .word 0x0000065C"
    );
    #endif
}

void ov18_021EFE70(void) {
    /* Original at 0x021EFE70 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r6, #0\n    lsl r4, r1, #4\n    add r5, #0xc\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, r4\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021EFEB8 ; =0x00020100\n    ldr r2, _021EFEBC ; =0x00001888\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, r4\n    ldr r1, _021EFEC0 ; =0x0000065C\n    lsl r4, r3, #3\n    ldr r2, [r6, r2]\n    lsr r3, r4, #0x1f\n    add r3, r4, r3\n    ldr r1, [r6, r1]\n    add r2, #0x41\n    asr r3, r3, #1\n    bl ov18_021F9648\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021EFEB8: .word 0x00020100\n    _021EFEBC: .word 0x00001888\n    _021EFEC0: .word 0x0000065C"
    );
    #endif
}

void ov18_021EFEC4(void) {
    /* Original at 0x021EFEC4 */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r0, #0x1c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0x2c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0x3c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0x4c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0x5c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0x6c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0x7c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    mov r1, #1\n    bl ov18_021EF1E4\n    add r0, r4, #0\n    mov r1, #2\n    bl ov18_021EF220\n    add r0, r4, #0\n    mov r1, #3\n    bl ov18_021EF25C\n    add r0, r4, #0\n    mov r1, #4\n    bl ov18_021EF298\n    add r0, r4, #0\n    mov r1, #5\n    bl ov18_021EF2D4\n    add r0, r4, #0\n    mov r1, #6\n    bl ov18_021EF310\n    add r0, r4, #0\n    mov r1, #7\n    bl ov18_021EF34C\n    add r0, r4, #0\n    mov r1, #8\n    bl ov18_021EFBE8\n    add r0, r4, #0\n    mov r1, #9\n    bl ov18_021EFC3C\n    ldr r1, _021EFFE0 ; =0x00001870\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    mov r2, #0xa\n    mov r3, #0x1d\n    bl ov18_021EFC9C\n    ldr r1, _021EFFE4 ; =0x00001874\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    mov r2, #0xb\n    mov r3, #0x1d\n    bl ov18_021EFC9C\n    ldr r1, _021EFFE8 ; =0x00001850\n    add r0, r4, #0\n    ldr r2, [r4, r1]\n    add r1, #0x28\n    ldr r1, [r4, r1]\n    lsl r1, r1, #2\n    ldrh r1, [r2, r1]\n    mov r2, #0xc\n    bl ov18_021EFD00\n    ldr r1, _021EFFE8 ; =0x00001850\n    add r0, r4, #0\n    ldr r2, [r4, r1]\n    add r1, #0x2c\n    ldr r1, [r4, r1]\n    lsl r1, r1, #2\n    ldrh r1, [r2, r1]\n    mov r2, #0xd\n    bl ov18_021EFD00\n    ldr r1, _021EFFE8 ; =0x00001850\n    add r0, r4, #0\n    ldr r2, [r4, r1]\n    add r1, #0x30\n    ldr r1, [r4, r1]\n    lsl r1, r1, #2\n    add r1, r2, r1\n    ldrh r1, [r1, #2]\n    mov r2, #0xe\n    bl ov18_021EFDB4\n    ldr r1, _021EFFE8 ; =0x00001850\n    add r0, r4, #0\n    ldr r2, [r4, r1]\n    add r1, #0x34\n    ldr r1, [r4, r1]\n    lsl r1, r1, #2\n    add r1, r2, r1\n    ldrh r1, [r1, #2]\n    mov r2, #0xf\n    bl ov18_021EFDB4\n    add r0, r4, #0\n    mov r1, #0x10\n    bl ov18_021EFE70\n    mov r5, #1\n    add r4, #0x1c\n    add r0, r4, #0\n    bl CopyWindowPixelsToVram_TextMode\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #0x10\n    bls _021EFFD0\n    pop {r3, r4, r5, pc}\n    _021EFFE0: .word 0x00001870\n    _021EFFE4: .word 0x00001874\n    _021EFFE8: .word 0x00001850"
    );
    #endif
}

void ov18_021EFFEC(void) {
    /* Original at 0x021EFFEC */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    mov r1, #0xf\n    bl sub_02019B08\n    add r0, r4, #0\n    mov r1, #0x5f\n    mov r2, #0\n    bl ov18_021EE44C\n    add r0, r4, #0\n    mov r1, #0x60\n    mov r2, #1\n    bl ov18_021EE44C\n    ldr r1, _021F0060 ; =0x0000185D\n    ldr r2, _021F0064 ; =0x0000102C\n    ldrb r1, [r4, r1]\n    ldrh r2, [r4, r2]\n    add r0, r4, #0\n    add r1, #0x61\n    bl ov18_021EE520\n    ldr r1, _021F0060 ; =0x0000185D\n    ldr r2, _021F0068 ; =0x0000102E\n    ldrb r1, [r4, r1]\n    ldrh r2, [r4, r2]\n    add r0, r4, #0\n    add r1, #0x63\n    bl ov18_021EE520\n    add r0, r4, #0\n    mov r1, #0x5f\n    bl ov18_021F006C\n    add r0, r4, #0\n    mov r1, #0x60\n    bl ov18_021F006C\n    ldr r1, _021F0060 ; =0x0000185D\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    add r1, #0x61\n    bl ov18_021F006C\n    ldr r1, _021F0060 ; =0x0000185D\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    add r1, #0x63\n    bl ov18_021F006C\n    ldr r1, _021F0060 ; =0x0000185D\n    mov r0, #1\n    ldrb r2, [r4, r1]\n    eor r0, r2\n    strb r0, [r4, r1]\n    pop {r4, pc}\n    _021F0060: .word 0x0000185D\n    _021F0064: .word 0x0000102C\n    _021F0068: .word 0x0000102E"
    );
    #endif
}

void ov18_021F006C(void) {
    /* Original at 0x021F006C */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp]\n    add r4, r1, #0\n    ldr r0, [r0, #8]\n    mov r1, #0xf\n    bl sub_02019B08\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    add r0, #0xc\n    str r0, [sp]\n    lsl r0, r4, #4\n    ldr r1, [sp]\n    str r0, [sp, #0x10]\n    add r0, r1, r0\n    bl GetWindowBaseTile\n    add r5, r0, #0\n    ldr r1, [sp]\n    ldr r0, [sp, #0x10]\n    add r0, r1, r0\n    bl GetWindowX\n    add r6, r0, #0\n    ldr r1, [sp]\n    ldr r0, [sp, #0x10]\n    add r0, r1, r0\n    bl GetWindowY\n    add r7, r0, #0\n    ldr r1, [sp]\n    ldr r0, [sp, #0x10]\n    add r0, r1, r0\n    bl GetWindowWidth\n    add r4, r0, #0\n    ldr r1, [sp]\n    ldr r0, [sp, #0x10]\n    add r0, r1, r0\n    bl GetWindowHeight\n    str r0, [sp, #4]\n    mov r0, #0\n    mov ip, r0\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    bls _021F010A\n    ldr r0, [sp, #0xc]\n    lsl r2, r6, #1\n    add r0, r0, r2\n    mov r6, #0xf\n    mov r1, ip\n    str r0, [sp, #8]\n    lsl r6, r6, #0xc\n    mov r0, #0\n    cmp r4, #0\n    bls _021F00FA\n    ldr r2, [sp, #8]\n    lsl r3, r7, #6\n    add r2, r2, r3\n    ldrh r3, [r2]\n    and r3, r6\n    add r3, r5, r3\n    add r3, r1, r3\n    add r3, r0, r3\n    strh r3, [r2]\n    add r0, r0, #1\n    add r2, r2, #2\n    cmp r0, r4\n    blo _021F00E6\n    mov r0, ip\n    add r2, r0, #1\n    ldr r0, [sp, #4]\n    add r7, r7, #1\n    add r1, r1, r4\n    mov ip, r2\n    cmp r2, r0\n    blo _021F00DA\n    ldr r1, [sp]\n    ldr r0, [sp, #0x10]\n    add r0, r1, r0\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F0118(void) {
    /* Original at 0x021F0118 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    cmp r1, #1\n    bne _021F0134\n    add r5, r0, #0\n    mov r4, #0\n    add r5, #0xc\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0x10\n    bls _021F0124\n    pop {r3, r4, r5, pc}\n    add r4, r0, #0\n    mov r5, #0\n    add r4, #0xc\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #0x10\n    bls _021F013A\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021F014C(void) {
    ClearWindowTilemapAndScheduleTransfer(0x51);
}

void ov18_021F0168(void) {
    /* Original at 0x021F0168 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r4, #0\n    mov r6, #2\n    mov r7, #0x12\n    str r6, [sp]\n    add r1, r4, #0\n    ldr r0, [r5, #8]\n    add r1, #0x11\n    add r2, r6, #0\n    add r3, r7, #0\n    bl sub_020195F4\n    add r4, r4, #1\n    cmp r4, #6\n    blo _021F0172\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F018C(void) {
    /* Original at 0x021F018C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r5, #1\n    add r7, r0, #0\n    mov r4, #0\n    lsl r5, r5, #0xc\n    add r1, r4, #0\n    ldr r0, [r7, #8]\n    add r1, #0x11\n    bl sub_02019B08\n    add r2, r0, #0\n    ldr r0, _021F01D0 ; =ov18_021F9E4C\n    lsl r1, r4, #3\n    add r0, r0, r1\n    add r0, #0x46\n    ldrh r6, [r0]\n    mov r3, #0\n    add r0, r6, r3\n    add r1, r0, #0\n    orr r1, r5\n    lsl r0, r3, #1\n    strh r1, [r2, r0]\n    add r0, r3, #1\n    lsl r0, r0, #0x10\n    lsr r3, r0, #0x10\n    cmp r3, #0x24\n    blo _021F01AE\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #6\n    blo _021F0196\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F01D0: .word ov18_021F9E4C"
    );
    #endif
}

void ov18_021F01D4(void) {
    /* Original at 0x021F01D4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r5, #1\n    add r7, r0, #0\n    mov r4, #0\n    lsl r5, r5, #0xc\n    add r1, r4, #0\n    ldr r0, [r7, #8]\n    add r1, #0x11\n    bl sub_02019B08\n    add r2, r0, #0\n    ldr r0, _021F0218 ; =ov18_021F9EBC\n    lsl r1, r4, #3\n    add r0, r0, r1\n    add r0, #0x56\n    ldrh r6, [r0]\n    mov r3, #0\n    add r0, r6, r3\n    add r1, r0, #0\n    orr r1, r5\n    lsl r0, r3, #1\n    strh r1, [r2, r0]\n    add r0, r3, #1\n    lsl r0, r0, #0x10\n    lsr r3, r0, #0x10\n    cmp r3, #0x24\n    blo _021F01F6\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #6\n    blo _021F01DE\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F0218: .word ov18_021F9EBC"
    );
    #endif
}

void ov18_021F021C(void) {
    /* Original at 0x021F021C */
    /* Requires manual decompilation - 177 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    ldr r1, _021F03A4 ; =ov18_021F9E4C\n    add r5, r0, #0\n    mov r2, #0xe\n    bl ov18_021EE35C\n    add r0, r5, #0\n    add r0, #0xc\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x2c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x4c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021F03A8 ; =0x00020100\n    ldr r1, _021F03AC ; =0x0000065C\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0xc\n    mov r2, #0x8e\n    bl ov18_021F9648\n    ldr r0, _021F03B0 ; =0x000018A2\n    mov r1, #2\n    ldrh r0, [r5, r0]\n    mov r2, #0x25\n    bl ov18_021E590C\n    add r4, r0, #0\n    mov r3, #0\n    ldr r0, _021F03A8 ; =0x00020100\n    str r3, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x2c\n    add r1, r4, #0\n    mov r2, #0x24\n    bl ov18_021F95FC\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F03B4 ; =0x00050900\n    ldr r1, _021F03AC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x4c\n    mov r2, #0x84\n    mov r3, #0x18\n    bl ov18_021F9648\n    add r0, r5, #0\n    add r0, #0xc\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add r0, #0x2c\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add r0, #0x4c\n    bl ScheduleWindowCopyToVram\n    ldr r0, _021F03B8 ; =0x00001860\n    ldr r0, [r5, r0]\n    cmp r0, #1\n    bne _021F0334\n    add r0, r5, #0\n    add r0, #0x5c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x7c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021F03BC ; =0x000F0C00\n    ldr r1, _021F03AC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x5c\n    mov r2, #0x41\n    mov r3, #0x1c\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021F03BC ; =0x000F0C00\n    ldr r1, _021F03AC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x7c\n    mov r2, #0x42\n    mov r3, #0x1c\n    bl ov18_021F9648\n    add r0, r5, #0\n    add r0, #0x5c\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add r0, #0x7c\n    bl ScheduleWindowCopyToVram\n    b _021F0364\n    add r0, r5, #0\n    add r0, #0x6c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F03B4 ; =0x00050900\n    ldr r1, _021F03AC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x6c\n    mov r2, #0x41\n    mov r3, #0x1c\n    bl ov18_021F9648\n    add r0, r5, #0\n    add r0, #0x6c\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add r0, #0x3c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F03A8 ; =0x00020100\n    ldr r1, _021F03AC ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x3c\n    mov r2, #0x80\n    mov r3, #0x38\n    bl ov18_021F9648\n    add r0, r5, #0\n    add r0, #0x3c\n    bl CopyWindowPixelsToVram_TextMode\n    add r0, r5, #0\n    bl ov18_021F03E0\n    add r0, r5, #0\n    bl ov18_021F0428\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _021F03A4: .word ov18_021F9E4C\n    _021F03A8: .word 0x00020100\n    _021F03AC: .word 0x0000065C\n    _021F03B0: .word 0x000018A2\n    _021F03B4: .word 0x00050900\n    _021F03B8: .word 0x00001860\n    _021F03BC: .word 0x000F0C00"
    );
    #endif
}

void ov18_021F03C0(void) {
    /* Original at 0x021F03C0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r6, #0\n    mov r4, #0\n    add r5, #0xc\n    add r0, r5, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0xe\n    blo _021F03CA\n    add r0, r6, #0\n    bl ov18_021EE388\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F03E0(void) {
    /* Original at 0x021F03E0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    add r0, #0x1c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F041C ; =0x00020100\n    ldr r2, _021F0420 ; =0x000018C9\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, _021F0424 ; =0x0000065C\n    ldrsb r2, [r4, r2]\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    add r0, #0x1c\n    add r2, #0x81\n    mov r3, #0x1c\n    bl ov18_021F9648\n    add r4, #0x1c\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, pc}\n    _021F041C: .word 0x00020100\n    _021F0420: .word 0x000018C9\n    _021F0424: .word 0x0000065C"
    );
    #endif
}

void ov18_021F0428(void) {
    /* Original at 0x021F0428 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r6, r5, #0\n    mov r4, #0\n    add r6, #0xc\n    add r0, r4, #0\n    add r0, #8\n    lsl r7, r0, #4\n    add r0, r6, r7\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _021F04B4 ; =0x000018CA\n    ldrsb r0, [r5, r0]\n    add r0, r0, r4\n    sub r1, r0, #2\n    bmi _021F0480\n    mov r0, #0x19\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    cmp r1, r0\n    bge _021F0480\n    add r0, r5, #0\n    bl ov18_021F04C0\n    add r3, r0, #0\n    mov r0, #0x48\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r0, _021F04B8 ; =0x000F0C00\n    add r2, r4, #0\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r1, _021F04BC ; =0x0000065C\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r2, #8\n    bl ov18_021EE3AC\n    add r0, r6, r7\n    bl CopyWindowPixelsToVram_TextMode\n    add r0, r6, r7\n    bl GetWindowX\n    str r0, [sp, #0x14]\n    add r0, r6, r7\n    bl GetWindowY\n    add r3, r0, #0\n    ldr r2, [sp, #0x14]\n    add r1, r4, #0\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [r5, #8]\n    add r1, #0x11\n    asr r2, r2, #0x18\n    asr r3, r3, #0x18\n    bl sub_020196E8\n    add r4, r4, #1\n    cmp r4, #6\n    blo _021F0434\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F04B4: .word 0x000018CA\n    _021F04B8: .word 0x000F0C00\n    _021F04BC: .word 0x0000065C"
    );
    #endif
}

void ov18_021F04C0(void) {
    /* Original at 0x021F04C0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r2, _021F0500 ; =0x000018FC\n    add r4, r0, #0\n    ldr r5, [r4, r2]\n    lsl r3, r1, #2\n    ldr r5, [r5, r3]\n    mov r3, #1\n    mvn r3, r3\n    cmp r5, r3\n    bne _021F04E4\n    sub r2, #0x34\n    ldrsb r0, [r4, r2]\n    cmp r0, #0\n    bne _021F04E0\n    mov r0, #0x86\n    pop {r3, r4, r5, pc}\n    mov r0, #0x87\n    pop {r3, r4, r5, pc}\n    bl ov18_021E8AE0\n    bl MapHeader_GetMapSec\n    add r2, r0, #0\n    mov r0, #0x66\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl BufferLandmarkName\n    mov r0, #0x85\n    pop {r3, r4, r5, pc}\n    nop\n    _021F0500: .word 0x000018FC"
    );
    #endif
}

void ov18_021F0504(void) {
    /* Original at 0x021F0504 */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    mov r4, #0\n    add r5, r0, #0\n    str r1, [sp, #0x14]\n    add r6, sp, #0x18\n    add r7, r4, #0\n    add r1, r4, #0\n    add r2, sp, #0x18\n    ldr r0, [r5, #8]\n    add r1, #0x11\n    add r2, #1\n    add r3, sp, #0x18\n    bl sub_02019B1C\n    ldrsb r0, [r6, r7]\n    cmp r0, #2\n    beq _021F0532\n    cmp r0, #0x14\n    beq _021F0532\n    add r4, r4, #1\n    cmp r4, #6\n    blo _021F0512\n    add r0, r4, #0\n    add r6, r5, #0\n    add r0, #8\n    add r6, #0xc\n    lsl r7, r0, #4\n    add r0, r6, r7\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    ldr r0, [r5, #8]\n    bge _021F0592\n    add r1, r4, #0\n    add r1, #0x11\n    mov r2, #0xa\n    mov r3, #0x14\n    bl sub_020196E8\n    ldr r0, _021F05DC ; =0x000018CA\n    ldrsb r1, [r5, r0]\n    add r0, #0x36\n    ldr r0, [r5, r0]\n    add r1, r1, #2\n    cmp r1, r0\n    bge _021F05D0\n    add r0, r5, #0\n    bl ov18_021F04C0\n    add r3, r0, #0\n    mov r0, #0x48\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r0, _021F05E0 ; =0x000F0C00\n    add r4, #8\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r1, _021F05E4 ; =0x0000065C\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    bl ov18_021EE3AC\n    b _021F05D0\n    add r1, r4, #0\n    add r1, #0x11\n    mov r2, #0xa\n    mov r3, #2\n    bl sub_020196E8\n    ldr r0, _021F05DC ; =0x000018CA\n    ldrsb r0, [r5, r0]\n    sub r1, r0, #2\n    bmi _021F05D0\n    add r0, r5, #0\n    bl ov18_021F04C0\n    add r3, r0, #0\n    mov r0, #0x48\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r0, _021F05E0 ; =0x000F0C00\n    add r4, #8\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r1, _021F05E4 ; =0x0000065C\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    bl ov18_021EE3AC\n    add r0, r6, r7\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F05DC: .word 0x000018CA\n    _021F05E0: .word 0x000F0C00\n    _021F05E4: .word 0x0000065C"
    );
    #endif
}

void ov18_021F05E8(void) {
    /* Original at 0x021F05E8 */
    /* Requires manual decompilation - 266 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    ldr r1, _021F0820 ; =ov18_021F9DE4\n    mov r2, #0xd\n    add r5, r0, #0\n    bl ov18_021EE35C\n    mov r6, #0\n    add r4, r5, #0\n    add r4, #0xc\n    add r7, r6, #0\n    add r0, r4, #0\n    add r1, r7, #0\n    bl FillWindowPixelBuffer\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, #0xd\n    blo _021F05FE\n    ldr r1, _021F0824 ; =0x000018A2\n    ldr r0, [r5]\n    ldrh r1, [r5, r1]\n    ldr r0, [r0]\n    bl Pokedex_CheckMonCaughtFlag\n    cmp r0, #0\n    beq _021F0622\n    mov r4, #2\n    b _021F0624\n    mov r4, #1\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021F0828 ; =0x00020100\n    ldr r1, _021F082C ; =0x0000065C\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0xc\n    mov r2, #0x8f\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F0828 ; =0x00020100\n    ldr r1, _021F082C ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x3c\n    mov r2, #0x88\n    mov r3, #0x30\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F0828 ; =0x00020100\n    ldr r1, _021F082C ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x4c\n    mov r2, #0xa\n    mov r3, #0x10\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F0828 ; =0x00020100\n    ldr r1, _021F082C ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x6c\n    mov r2, #0xa\n    mov r3, #0x10\n    bl ov18_021F9648\n    ldr r0, _021F0824 ; =0x000018A2\n    mov r1, #2\n    ldrh r0, [r5, r0]\n    mov r2, #0x25\n    bl ov18_021E590C\n    add r6, r0, #0\n    mov r3, #0\n    ldr r0, _021F0828 ; =0x00020100\n    str r3, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x1c\n    add r1, r6, #0\n    mov r2, #0x20\n    bl ov18_021F95FC\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, [r5]\n    mov r1, #0x25\n    ldr r0, [r0, #4]\n    bl PlayerProfile_GetPlayerName_NewString\n    add r6, r0, #0\n    mov r3, #0\n    ldr r0, _021F0828 ; =0x00020100\n    str r3, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x2c\n    add r1, r6, #0\n    mov r2, #0x20\n    bl ov18_021F95FC\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021F0828 ; =0x00020100\n    ldr r1, _021F0824 ; =0x000018A2\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldrh r1, [r5, r1]\n    add r0, r5, #0\n    add r2, r4, #0\n    mov r3, #5\n    bl ov18_021EEA84\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F0830 ; =0x00050900\n    ldr r1, _021F082C ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x8c\n    mov r2, #0x89\n    mov r3, #0x30\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F0834 ; =0x000F0500\n    ldr r1, _021F082C ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x9c\n    mov r2, #0xb\n    mov r3, #0x10\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F0834 ; =0x000F0500\n    ldr r1, _021F082C ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0xbc\n    mov r2, #0xb\n    mov r3, #0x10\n    bl ov18_021F9648\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021F0834 ; =0x000F0500\n    ldr r1, _021F0824 ; =0x000018A2\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldrh r1, [r5, r1]\n    add r0, r5, #0\n    add r2, r4, #0\n    mov r3, #0xa\n    bl ov18_021EEB34\n    ldr r0, [r5]\n    ldr r0, [r0, #4]\n    bl PlayerProfile_GetTrainerGender\n    cmp r0, #0\n    ldr r1, _021F082C ; =0x0000065C\n    bne _021F07D0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F0828 ; =0x00020100\n    mov r2, #0x8a\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x7c\n    mov r3, #0x20\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F0834 ; =0x000F0500\n    ldr r1, _021F082C ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0xcc\n    mov r2, #0x8c\n    mov r3, #0x20\n    bl ov18_021F9648\n    b _021F080A\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F0828 ; =0x00020100\n    mov r2, #0x8b\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x7c\n    mov r3, #0x20\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F0834 ; =0x000F0500\n    ldr r1, _021F082C ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0xcc\n    mov r2, #0x8d\n    mov r3, #0x20\n    bl ov18_021F9648\n    mov r4, #0\n    add r5, #0xc\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0xd\n    blo _021F080E\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F0820: .word ov18_021F9DE4\n    _021F0824: .word 0x000018A2\n    _021F0828: .word 0x00020100\n    _021F082C: .word 0x0000065C\n    _021F0830: .word 0x00050900\n    _021F0834: .word 0x000F0500"
    );
    #endif
}

void ov18_021F0838(void) {
    /* Original at 0x021F0838 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r6, #0\n    mov r4, #0\n    add r5, #0xc\n    add r0, r5, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0xd\n    blo _021F0842\n    add r0, r6, #0\n    bl ov18_021EE388\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F0858(void) {
    /* Original at 0x021F0858 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    ldr r1, _021F08D0 ; =ov18_021F9DB0\n    mov r2, #2\n    add r5, r0, #0\n    bl ov18_021EE35C\n    mov r6, #0\n    add r4, r5, #0\n    add r4, #0xc\n    add r7, r6, #0\n    add r0, r4, #0\n    add r1, r7, #0\n    bl FillWindowPixelBuffer\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, #2\n    blo _021F086E\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021F08D4 ; =0x00020100\n    ldr r1, _021F08D8 ; =0x0000065C\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0xc\n    mov r2, #0xad\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021F08DC ; =0x000F0C00\n    ldr r1, _021F08D8 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x1c\n    mov r2, #0xae\n    mov r3, #0x3c\n    bl ov18_021F9648\n    mov r4, #0\n    add r5, #0xc\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #2\n    blo _021F08BE\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F08D0: .word ov18_021F9DB0\n    _021F08D4: .word 0x00020100\n    _021F08D8: .word 0x0000065C\n    _021F08DC: .word 0x000F0C00"
    );
    #endif
}

void ov18_021F08E0(void) {
    /* Original at 0x021F08E0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r6, #0\n    mov r4, #0\n    add r5, #0xc\n    add r0, r5, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #2\n    blo _021F08EA\n    add r0, r6, #0\n    bl ov18_021EE388\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F0900(void) {
    /* Original at 0x021F0900 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021F0914 ; =ov18_021F9EBC\n    add r4, r0, #0\n    mov r2, #0x10\n    bl ov18_021EE35C\n    add r0, r4, #0\n    bl ov18_021F0928\n    pop {r4, pc}\n    _021F0914: .word ov18_021F9EBC"
    );
    #endif
}

void ov18_021F0918(void) {
    ov18_021F0D7C();
    ov18_021EE388(r4);
}

void ov18_021F0928(void) {
    ov18_021F0940();
    ov18_021F0C50(r4);
    ov18_021F0D2C(r4);
}

void ov18_021F0940(void) {
    /* Original at 0x021F0940 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r6, r5, #0\n    mov r4, #0\n    add r6, #0xc\n    add r0, r4, #0\n    add r0, #0xa\n    lsl r7, r0, #4\n    add r0, r6, r7\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _021F09C8 ; =0x000018C5\n    ldrsb r0, [r5, r0]\n    add r0, r0, r4\n    sub r1, r0, #2\n    bmi _021F0994\n    ldr r0, _021F09CC ; =0x000018C4\n    ldrsb r0, [r5, r0]\n    cmp r1, r0\n    bge _021F0994\n    add r0, r5, #0\n    bl ov18_021F09D8\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r0, _021F09D0 ; =0x000F0C00\n    add r2, r4, #0\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r1, _021F09D4 ; =0x0000065C\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r2, #0xa\n    bl ov18_021EE3AC\n    add r0, r6, r7\n    bl CopyWindowPixelsToVram_TextMode\n    add r0, r6, r7\n    bl GetWindowX\n    str r0, [sp, #0x14]\n    add r0, r6, r7\n    bl GetWindowY\n    add r3, r0, #0\n    ldr r2, [sp, #0x14]\n    add r1, r4, #0\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [r5, #8]\n    add r1, #0x11\n    asr r2, r2, #0x18\n    asr r3, r3, #0x18\n    bl sub_020196E8\n    add r4, r4, #1\n    cmp r4, #6\n    blo _021F094C\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F09C8: .word 0x000018C5\n    _021F09CC: .word 0x000018C4\n    _021F09D0: .word 0x000F0C00\n    _021F09D4: .word 0x0000065C"
    );
    #endif
}

void ov18_021F09D8(void) {
    /* Original at 0x021F09D8 */
    /* Requires manual decompilation - 198 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    ldr r2, _021F0B64 ; =0x000018A2\n    add r4, r0, #0\n    ldrh r0, [r4, r2]\n    ldr r3, _021F0B68 ; =0x0000019D\n    cmp r0, r3\n    bgt ov18_021F0A1E\n    sub r5, r3, #1\n    cmp r0, r5\n    blt _021F09FA\n    add r2, r5, #0\n    cmp r0, r2\n    beq _021F0A8C\n    cmp r0, r3\n    beq _021F0A8C\n    b _021F0B1E\n    cmp r0, #0xc9\n    bgt ov18_021F0A06\n    bge _021F0A76\n    cmp r0, #0xac\n    beq _021F0AFC\n    b _021F0B1E\n    add r5, r3, #0\n    sub r5, #0x3e\n    cmp r0, r5\n    bgt ov18_021F0A16\n    sub r3, #0x3e\n    cmp r0, r3\n    beq _021F0ADC\n    b _021F0B1E\n    sub r3, #0x1b\n    cmp r0, r3\n    beq _021F0A9C\n    b _021F0B1E\n    add r5, r3, #0\n    add r5, #0x42\n    cmp r0, r5\n    bgt ov18_021F0A5E\n    add r5, r3, #0\n    add r5, #0x42\n    cmp r0, r5\n    bge _021F0ACC\n    add r5, r3, #0\n    add r5, #8\n    cmp r0, r5\n    bgt ov18_021F0A3E\n    add r3, #8\n    cmp r0, r3\n    beq _021F0AEC\n    b _021F0B1E\n    add r2, r3, #0\n    add r2, #0xa\n    cmp r0, r2\n    bgt _021F0B1E\n    add r2, r3, #0\n    add r2, #9\n    cmp r0, r2\n    blt _021F0B1E\n    add r2, r3, #0\n    add r2, #9\n    cmp r0, r2\n    beq _021F0A7C\n    add r3, #0xa\n    cmp r0, r3\n    beq _021F0A7C\n    b _021F0B1E\n    add r5, r3, #0\n    add r5, #0x4a\n    cmp r0, r5\n    bgt ov18_021F0A6E\n    add r3, #0x4a\n    cmp r0, r3\n    beq _021F0ABC\n    b _021F0B1E\n    add r3, #0x4f\n    cmp r0, r3\n    beq _021F0AAC\n    b _021F0B1E\n    add sp, #8\n    mov r0, #0x79\n    pop {r3, r4, r5, pc}\n    ldr r0, _021F0B6C ; =0x000018A4\n    add r1, r4, r1\n    ldrb r1, [r1, r0]\n    mov r0, #0x80\n    add sp, #8\n    eor r0, r1\n    add r0, #0x74\n    pop {r3, r4, r5, pc}\n    ldr r0, _021F0B6C ; =0x000018A4\n    add r1, r4, r1\n    ldrb r1, [r1, r0]\n    mov r0, #0x80\n    add sp, #8\n    eor r0, r1\n    add r0, #0x76\n    pop {r3, r4, r5, pc}\n    add r1, r4, r1\n    add r0, r2, #2\n    ldrb r1, [r1, r0]\n    mov r0, #0x80\n    add sp, #8\n    eor r0, r1\n    add r0, #0x91\n    pop {r3, r4, r5, pc}\n    add r1, r4, r1\n    add r0, r2, #2\n    ldrb r1, [r1, r0]\n    mov r0, #0x80\n    add sp, #8\n    eor r0, r1\n    add r0, #0x95\n    pop {r3, r4, r5, pc}\n    add r1, r4, r1\n    add r0, r2, #2\n    ldrb r1, [r1, r0]\n    mov r0, #0x80\n    add sp, #8\n    eor r0, r1\n    add r0, #0x97\n    pop {r3, r4, r5, pc}\n    add r1, r4, r1\n    add r0, r2, #2\n    ldrb r1, [r1, r0]\n    mov r0, #0x80\n    add sp, #8\n    eor r0, r1\n    add r0, #0x99\n    pop {r3, r4, r5, pc}\n    add r1, r4, r1\n    add r0, r2, #2\n    ldrb r1, [r1, r0]\n    mov r0, #0x80\n    add sp, #8\n    eor r0, r1\n    add r0, #0xa0\n    pop {r3, r4, r5, pc}\n    add r1, r4, r1\n    add r0, r2, #2\n    ldrb r1, [r1, r0]\n    mov r0, #0x80\n    add sp, #8\n    eor r0, r1\n    add r0, #0xa4\n    pop {r3, r4, r5, pc}\n    add r1, r4, r1\n    add r0, r2, #2\n    ldrb r1, [r1, r0]\n    mov r0, #0x80\n    eor r0, r1\n    bne _021F0B0E\n    add sp, #8\n    mov r0, #0x72\n    pop {r3, r4, r5, pc}\n    cmp r0, #1\n    bne _021F0B18\n    add sp, #8\n    mov r0, #0x73\n    pop {r3, r4, r5, pc}\n    add sp, #8\n    mov r0, #0xa6\n    pop {r3, r4, r5, pc}\n    add r2, r4, r1\n    ldr r1, _021F0B6C ; =0x000018A4\n    ldrb r1, [r2, r1]\n    cmp r1, #1\n    bne _021F0B2E\n    add sp, #8\n    mov r0, #0x72\n    pop {r3, r4, r5, pc}\n    cmp r1, #2\n    bne _021F0B38\n    add sp, #8\n    mov r0, #0x73\n    pop {r3, r4, r5, pc}\n    mov r1, #2\n    mov r2, #0x25\n    bl ov18_021E590C\n    add r5, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r3, #2\n    mov r0, #0x66\n    str r3, [sp, #4]\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    add r2, r5, #0\n    bl BufferString\n    add r0, r5, #0\n    bl String_Delete\n    mov r0, #0x9f\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _021F0B64: .word 0x000018A2\n    _021F0B68: .word 0x0000019D\n    _021F0B6C: .word 0x000018A4"
    );
    #endif
}

void ov18_021F0B70(void) {
    /* Original at 0x021F0B70 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    mov r4, #0\n    add r5, r0, #0\n    str r1, [sp, #0x14]\n    add r6, sp, #0x18\n    sub r7, r4, #2\n    add r1, r4, #0\n    add r2, sp, #0x18\n    ldr r0, [r5, #8]\n    add r1, #0x11\n    add r2, #1\n    add r3, sp, #0x18\n    bl sub_02019B1C\n    mov r0, #0\n    ldrsb r0, [r6, r0]\n    cmp r0, r7\n    beq _021F0BA0\n    cmp r0, #0x10\n    beq _021F0BA0\n    add r4, r4, #1\n    cmp r4, #6\n    blo _021F0B7E\n    add r0, r4, #0\n    add r6, r5, #0\n    add r0, #0xa\n    add r6, #0xc\n    lsl r7, r0, #4\n    add r0, r6, r7\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    ldr r0, [r5, #8]\n    bge _021F0BFC\n    add r1, r4, #0\n    add r1, #0x11\n    mov r2, #8\n    mov r3, #0x10\n    bl sub_020196E8\n    ldr r0, _021F0C44 ; =0x000018C5\n    ldrsb r1, [r5, r0]\n    sub r0, r0, #1\n    ldrsb r0, [r5, r0]\n    add r1, r1, #2\n    cmp r1, r0\n    bge _021F0C38\n    add r0, r5, #0\n    bl ov18_021F09D8\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    add r4, #0xa\n    str r0, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    ldr r1, _021F0C48 ; =0x000F0C00\n    add r2, r4, #0\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r1, _021F0C4C ; =0x0000065C\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov18_021EE3AC\n    b _021F0C38\n    mov r2, #8\n    add r1, r4, #0\n    add r3, r2, #0\n    add r1, #0x11\n    sub r3, #0xa\n    bl sub_020196E8\n    ldr r0, _021F0C44 ; =0x000018C5\n    ldrsb r0, [r5, r0]\n    sub r1, r0, #2\n    bmi _021F0C38\n    add r0, r5, #0\n    bl ov18_021F09D8\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    add r4, #0xa\n    str r0, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    ldr r1, _021F0C48 ; =0x000F0C00\n    add r2, r4, #0\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r1, _021F0C4C ; =0x0000065C\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov18_021EE3AC\n    add r0, r6, r7\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F0C44: .word 0x000018C5\n    _021F0C48: .word 0x000F0C00\n    _021F0C4C: .word 0x0000065C"
    );
    #endif
}

void ov18_021F0C50(void) {
    /* Original at 0x021F0C50 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r0, #0xc\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x4c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x1c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021F0D18 ; =0x00020100\n    ldr r1, _021F0D1C ; =0x0000065C\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0xc\n    mov r2, #0xaa\n    bl ov18_021F9648\n    ldr r0, _021F0D20 ; =0x000018C4\n    ldrsb r0, [r5, r0]\n    cmp r0, #1\n    beq _021F0CB2\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021F0D24 ; =0x000F0C00\n    ldr r1, _021F0D1C ; =0x0000065C\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x4c\n    mov r2, #0xa8\n    bl ov18_021F9648\n    ldr r0, _021F0D28 ; =0x000018A2\n    mov r1, #2\n    ldrh r0, [r5, r0]\n    mov r2, #0x25\n    bl ov18_021E590C\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r3, #2\n    mov r0, #0x66\n    str r3, [sp, #4]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    add r2, r4, #0\n    bl BufferString\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #0x48\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _021F0D18 ; =0x00020100\n    mov r2, #1\n    str r0, [sp, #0xc]\n    ldr r1, _021F0D1C ; =0x0000065C\n    str r2, [sp, #0x10]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    mov r3, #0xa7\n    bl ov18_021EE3AC\n    add r0, r5, #0\n    add r0, #0xc\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add r0, #0x4c\n    bl ScheduleWindowCopyToVram\n    add r5, #0x1c\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _021F0D18: .word 0x00020100\n    _021F0D1C: .word 0x0000065C\n    _021F0D20: .word 0x000018C4\n    _021F0D24: .word 0x000F0C00\n    _021F0D28: .word 0x000018A2"
    );
    #endif
}

void ov18_021F0D2C(void) {
    /* Original at 0x021F0D2C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    add r0, #0x2c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r1, _021F0D70 ; =0x000018C5\n    add r0, r4, #0\n    ldrsb r1, [r4, r1]\n    bl ov18_021F09D8\n    add r3, r0, #0\n    mov r0, #0x3c\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _021F0D74 ; =0x00020100\n    mov r2, #2\n    str r0, [sp, #0xc]\n    ldr r1, _021F0D78 ; =0x0000065C\n    str r2, [sp, #0x10]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov18_021EE3AC\n    add r4, #0x2c\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r3, r4, pc}\n    nop\n    _021F0D70: .word 0x000018C5\n    _021F0D74: .word 0x00020100\n    _021F0D78: .word 0x0000065C"
    );
    #endif
}

void ov18_021F0D7C(void) {
    /* Original at 0x021F0D7C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0xc\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0x1c\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0x2c\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0x4c\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0xac\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0xbc\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0xcc\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0xdc\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0xec\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r4, #0xfc\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F0DD0(void) {
    /* Original at 0x021F0DD0 */
    /* Requires manual decompilation - 146 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    bl ov18_021F0D7C\n    add r0, r5, #0\n    add r0, #0xc\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x3c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x5c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x8c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x9c\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021F0F10 ; =0x00020100\n    ldr r1, _021F0F14 ; =0x0000065C\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0xc\n    mov r2, #0xaa\n    bl ov18_021F9648\n    ldr r0, _021F0F18 ; =0x000018A2\n    mov r1, #2\n    ldrh r0, [r5, r0]\n    mov r2, #0x25\n    bl ov18_021E590C\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r3, #2\n    mov r0, #0x66\n    str r3, [sp, #4]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    add r2, r4, #0\n    bl BufferString\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #0x48\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _021F0F10 ; =0x00020100\n    ldr r1, _021F0F14 ; =0x0000065C\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    mov r2, #3\n    mov r3, #0xa9\n    bl ov18_021EE3AC\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F0F1C ; =0x00050900\n    ldr r1, _021F0F14 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x5c\n    mov r2, #0xaa\n    mov r3, #0x18\n    bl ov18_021F9648\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F0F20 ; =0x000F0C00\n    ldr r1, _021F0F14 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x8c\n    mov r2, #0xab\n    mov r3, #0x30\n    bl ov18_021F9648\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F0F20 ; =0x000F0C00\n    ldr r1, _021F0F14 ; =0x0000065C\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    add r0, #0x9c\n    mov r2, #0xac\n    mov r3, #0x30\n    bl ov18_021F9648\n    add r0, r5, #0\n    add r0, #0xc\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add r0, #0x3c\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add r0, #0x5c\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add r0, #0x8c\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #0\n    add r0, #0x9c\n    bl ScheduleWindowCopyToVram\n    ldr r2, _021F0F24 ; =0x000018C5\n    add r0, r5, #0\n    ldrsb r2, [r5, r2]\n    mov r1, #6\n    bl ov18_021F0F68\n    ldr r2, _021F0F28 ; =0x000018C6\n    add r0, r5, #0\n    ldrsb r2, [r5, r2]\n    mov r1, #7\n    bl ov18_021F0F68\n    add sp, #0x14\n    pop {r4, r5, pc}\n    _021F0F10: .word 0x00020100\n    _021F0F14: .word 0x0000065C\n    _021F0F18: .word 0x000018A2\n    _021F0F1C: .word 0x00050900\n    _021F0F20: .word 0x000F0C00\n    _021F0F24: .word 0x000018C5\n    _021F0F28: .word 0x000018C6"
    );
    #endif
}

void ov18_021F0F2C(void) {
    /* Original at 0x021F0F2C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0xc\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0x3c\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0x5c\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0x8c\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0x9c\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0x6c\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r4, #0x7c\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F0F68(void) {
    /* Original at 0x021F0F68 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r6, r0, #0\n    add r7, r1, #0\n    add r5, r6, #0\n    add r5, #0xc\n    lsl r4, r7, #4\n    str r2, [sp, #0x14]\n    add r0, r5, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r1, [sp, #0x14]\n    add r0, r6, #0\n    bl ov18_021F09D8\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    bl GetWindowWidth\n    lsl r1, r0, #3\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _021F0FC0 ; =0x00050900\n    ldr r1, _021F0FC4 ; =0x0000065C\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r1, [r6, r1]\n    ldr r3, [sp, #0x18]\n    add r0, r6, #0\n    add r2, r7, #0\n    bl ov18_021EE3AC\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _021F0FC0: .word 0x00050900\n    _021F0FC4: .word 0x0000065C"
    );
    #endif
}

void ov18_021F0FC8(void) {
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    ov18_021F12FC(r4);
    ov18_021F1024(r4);
}

void ov18_021F0FEC(void) {
    ov18_021F1104();
    ov18_021F10C8(r4);
    ov18_021F1314(r4);
}

void ov18_021F1004(void) {
    ManagedSprite_TickFrame(0, 0x67);
}

void ov18_021F1024(void) {
    /* Original at 0x021F1024 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x4c\n    add r4, r0, #0\n    mov r0, #0x25\n    bl SpriteSystem_Alloc\n    ldr r1, _021F10B4 ; =0x00000668\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    bl SpriteManager_New\n    ldr r7, _021F10B8 ; =0x0000066C\n    add r2, sp, #0x2c\n    ldr r3, _021F10BC ; =ov18_021FA3C8\n    str r0, [r4, r7]\n    ldmia r3!, {r0, r1}\n    add r6, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    ldr r5, _021F10C0 ; =ov18_021FA36C\n    stmia r2!, {r0, r1}\n    add r3, sp, #0x18\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    add r1, r6, #0\n    str r0, [r3]\n    sub r0, r7, #4\n    ldr r0, [r4, r0]\n    mov r3, #0x20\n    bl SpriteSystem_Init\n    ldr r3, _021F10C4 ; =ov18_021FA380\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r1, r7, #4\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x78\n    bl SpriteSystem_InitSprites\n    sub r1, r7, #4\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    add r2, sp, #0\n    bl SpriteSystem_InitManagerWithCapacities\n    sub r0, r7, #4\n    ldr r0, [r4, r0]\n    bl SpriteSystem_GetRenderer\n    mov r2, #2\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    add sp, #0x4c\n    pop {r4, r5, r6, r7, pc}\n    _021F10B4: .word 0x00000668\n    _021F10B8: .word 0x0000066C\n    _021F10BC: .word ov18_021FA3C8\n    _021F10C0: .word ov18_021FA36C\n    _021F10C4: .word ov18_021FA380"
    );
    #endif
}

void ov18_021F10C8(void) {
    /* Original at 0x021F10C8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021F10E4 ; =0x00000668\n    add r4, r0, #0\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    bl SpriteSystem_FreeResourcesAndManager\n    ldr r0, _021F10E4 ; =0x00000668\n    ldr r0, [r4, r0]\n    bl SpriteSystem_Free\n    pop {r4, pc}\n    nop\n    _021F10E4: .word 0x00000668"
    );
    #endif
}

void ov18_021F10E8(void) {
    Sprite_DeleteAndFreeResources(0, 0x67);
}

void ov18_021F1104(void) {
    ov18_021F10E8(0);
}

void ov18_021F111C(void) {
    /* Original at 0x021F111C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r5, r2, #0\n    ldr r0, [r0]\n    add r4, r3, #0\n    bl Sprite_GetImageProxy\n    ldr r1, [sp, #0x10]\n    bl NNS_G2dGetImageLocation\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl DC_FlushRange\n    ldr r0, [sp, #0x10]\n    cmp r0, #1\n    bne _021F1154\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl GX_LoadOBJ\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl GXS_LoadOBJ\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F1160(void) {
    /* Original at 0x021F1160 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r2, #1\n    bne _021F1178\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetOamMode\n    pop {r3, pc}\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetOamMode\n    pop {r3, pc}"
    );
    #endif
}

void ov18_021F118C(void) {
    /* Original at 0x021F118C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    mov r2, #0x67\n    lsl r2, r2, #4\n    lsl r4, r1, #2\n    add r5, r0, r2\n    ldr r0, [r5, r4]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    ldr r0, [r5, r4]\n    add r1, r6, #0\n    bl ManagedSprite_SetAnim\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F11AC(void) {
    /* Original at 0x021F11AC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r3, _021F11BC ; =ManagedSprite_IsAnimated\n    ldr r0, [r1, r0]\n    bx r3\n    nop\n    _021F11BC: .word ManagedSprite_IsAnimated"
    );
    #endif
}

void ov18_021F11C0(void) {
    /* Original at 0x021F11C0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r2, #1\n    bne _021F11D8\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, pc}\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, pc}"
    );
    #endif
}

void ov18_021F11EC(void) {
    /* Original at 0x021F11EC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r2, r1, #0\n    add r3, r0, #0\n    ldr r0, [r2, #0x10]\n    ldr r1, _021F1218 ; =0x00000668\n    cmp r0, #1\n    bne _021F1206\n    ldr r0, [r3, r1]\n    add r1, r1, #4\n    ldr r1, [r3, r1]\n    bl SpriteSystem_NewSprite\n    pop {r3, pc}\n    ldr r0, [r3, r1]\n    add r1, r1, #4\n    ldr r1, [r3, r1]\n    mov r3, #2\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    pop {r3, pc}\n    nop\n    _021F1218: .word 0x00000668"
    );
    #endif
}

void ov18_021F121C(void) {
    /* Original at 0x021F121C */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r2, #0\n    ldr r2, [sp, #0x18]\n    add r6, r3, #0\n    cmp r2, #0\n    bne _021F125A\n    mov r2, #0x67\n    lsl r2, r2, #4\n    add r5, r0, r2\n    lsl r7, r1, #2\n    add r1, sp, #0\n    ldr r0, [r5, r7]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    add r2, sp, #0\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    mov r3, #0\n    ldrsh r2, [r2, r3]\n    add r1, r1, r4\n    lsl r1, r1, #0x10\n    add r2, r2, r6\n    lsl r2, r2, #0x10\n    ldr r0, [r5, r7]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0x67\n    lsl r2, r2, #4\n    add r5, r0, r2\n    lsl r7, r1, #2\n    add r1, sp, #0\n    mov r3, #2\n    ldr r0, [r5, r7]\n    add r1, #2\n    add r2, sp, #0\n    lsl r3, r3, #0x14\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    add r2, sp, #0\n    mov r3, #2\n    ldrsh r1, [r2, r3]\n    ldr r0, [r5, r7]\n    lsl r3, r3, #0x14\n    add r1, r1, r4\n    mov r4, #0\n    ldrsh r2, [r2, r4]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add r2, r2, r6\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F1294(void) {
    /* Original at 0x021F1294 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r4, [sp, #8]\n    cmp r4, #0\n    bne _021F12B0\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, r2, #0\n    add r2, r3, #0\n    bl ManagedSprite_SetPositionXY\n    pop {r4, pc}\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, r2, #0\n    add r2, r3, #0\n    mov r3, #2\n    lsl r3, r3, #0x14\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F12C8(void) {
    /* Original at 0x021F12C8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r4, [sp, #8]\n    cmp r4, #0\n    bne _021F12E4\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, r2, #0\n    add r2, r3, #0\n    bl ManagedSprite_GetPositionXY\n    pop {r4, pc}\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, r2, #0\n    add r2, r3, #0\n    mov r3, #2\n    lsl r3, r3, #0x14\n    bl ManagedSprite_GetPositionXYWithSubscreenOffset\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F12FC(void) {
    NARC_New(0x14, 0x25);
}

void ov18_021F1314(void) {
    /* Original at 0x021F1314 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021F131C ; =0x00000858\n    ldr r3, _021F1320 ; =NARC_Delete\n    ldr r0, [r0, r1]\n    bx r3\n    _021F131C: .word 0x00000858\n    _021F1320: .word NARC_Delete"
    );
    #endif
}

void ov18_021F1324(void) {
    /* Original at 0x021F1324 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r6, r1, #0\n    ldr r4, _021F13C4 ; =0x00000000\n    beq _021F1354\n    mov r7, #1\n    ldr r0, _021F13C8 ; =0x0000C550\n    str r7, [sp]\n    str r7, [sp, #4]\n    add r0, r4, r0\n    str r0, [sp, #8]\n    ldr r0, _021F13CC ; =0x00000668\n    ldr r1, _021F13D0 ; =0x0000066C\n    ldr r2, _021F13D4 ; =0x00000854\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    mov r3, #0x4c\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    add r4, r4, #1\n    cmp r4, r6\n    blo _021F1332\n    bl sub_02074490\n    ldr r1, _021F13D8 ; =0x00000858\n    ldr r3, _021F13CC ; =0x00000668\n    ldr r2, [r5, r1]\n    sub r1, #8\n    str r2, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #3\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, _021F13C8 ; =0x0000C550\n    str r0, [sp, #0x14]\n    ldr r2, [r5, r3]\n    add r3, r3, #4\n    ldr r0, [r5, r1]\n    ldr r3, [r5, r3]\n    mov r1, #2\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    bl sub_0207449C\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021F13C8 ; =0x0000C550\n    ldr r1, _021F13CC ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F13D8 ; =0x00000858\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    bl sub_020744A8\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021F13C8 ; =0x0000C550\n    ldr r1, _021F13CC ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F13D8 ; =0x00000858\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F13C4: .word 0x00000000\n    _021F13C8: .word 0x0000C550\n    _021F13CC: .word 0x00000668\n    _021F13D0: .word 0x0000066C\n    _021F13D4: .word 0x00000854\n    _021F13D8: .word 0x00000858"
    );
    #endif
}

void ov18_021F13DC(void) {
    /* Original at 0x021F13DC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    ldr r4, _021F1418 ; =0x00000000\n    beq _021F13F8\n    ldr r7, _021F141C ; =0x0000C550\n    ldr r0, _021F1420 ; =0x0000066C\n    add r1, r4, r7\n    ldr r0, [r5, r0]\n    bl SpriteManager_UnloadCharObjById\n    add r4, r4, #1\n    cmp r4, r6\n    blo _021F13E8\n    ldr r0, _021F1420 ; =0x0000066C\n    ldr r1, _021F141C ; =0x0000C550\n    ldr r0, [r5, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F1420 ; =0x0000066C\n    ldr r1, _021F141C ; =0x0000C550\n    ldr r0, [r5, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F1420 ; =0x0000066C\n    ldr r1, _021F141C ; =0x0000C550\n    ldr r0, [r5, r0]\n    bl SpriteManager_UnloadAnimObjById\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F1418: .word 0x00000000\n    _021F141C: .word 0x0000C550\n    _021F1420: .word 0x0000066C"
    );
    #endif
}

void ov18_021F1424(void) {
    /* Original at 0x021F1424 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x68\n    add r7, r0, #0\n    lsl r0, r1, #2\n    ldr r3, _021F147C ; =ov18_021FA3E8\n    mov r4, #0\n    add r5, r7, r0\n    add r2, sp, #0\n    mov r6, #6\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r6, r6, #1\n    bne _021F1436\n    ldr r0, [r3]\n    str r0, [r2]\n    add r6, sp, #0\n    add r3, sp, #0x34\n    mov r2, #6\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F1448\n    ldr r0, [r6]\n    ldr r1, _021F1480 ; =0x0000066C\n    str r0, [r3]\n    ldr r0, _021F1484 ; =0x0000C550\n    add r2, sp, #0x34\n    add r0, r4, r0\n    str r0, [sp, #0x48]\n    ldr r0, _021F1488 ; =0x00000668\n    ldr r1, [r7, r1]\n    ldr r0, [r7, r0]\n    bl SpriteSystem_NewSprite\n    mov r1, #0x67\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x3c\n    blo _021F1442\n    add sp, #0x68\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F147C: .word ov18_021FA3E8\n    _021F1480: .word 0x0000066C\n    _021F1484: .word 0x0000C550\n    _021F1488: .word 0x00000668"
    );
    #endif
}

void ov18_021F148C(void) {
    /* Original at 0x021F148C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    mov r1, #0\n    add r4, r3, #0\n    bl GetBattleMonIconNaixEx\n    add r1, r0, #0\n    mov r0, #0x25\n    str r0, [sp]\n    ldr r0, _021F14B0 ; =0x00000858\n    mov r2, #0\n    ldr r0, [r5, r0]\n    add r3, r4, #0\n    bl GfGfxLoader_GetCharDataFromOpenNarc\n    pop {r3, r4, r5, pc}\n    nop\n    _021F14B0: .word 0x00000858"
    );
    #endif
}

void ov18_021F14B4(void) {
    /* Original at 0x021F14B4 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _021F14F4 ; =0x0000066C\n    str r1, [sp, #4]\n    add r4, r2, #0\n    ldr r0, [r5, r0]\n    ldr r1, _021F14F8 ; =0x0000C550\n    mov r2, #1\n    add r6, r3, #0\n    bl SpriteManager_FindPlttResourceOffset\n    mov r3, #1\n    add r7, r0, #0\n    str r3, [sp]\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r3, r3, #9\n    bl ov18_021F111C\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, r7, r6\n    bl ManagedSprite_SetPaletteOverride\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F14F4: .word 0x0000066C\n    _021F14F8: .word 0x0000C550"
    );
    #endif
}

void ov18_021F14FC(void) {
    /* Original at 0x021F14FC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r3, [sp]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r3, sp, #4\n    add r5, r0, #0\n    bl ov18_021F148C\n    add r7, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0\n    bl GetBattleMonIconPaletteEx\n    ldr r1, [sp, #4]\n    add r3, r0, #0\n    ldr r1, [r1, #0x14]\n    ldr r2, [sp]\n    add r0, r5, #0\n    bl ov18_021F14B4\n    add r0, r7, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F1534(void) {
    /* Original at 0x021F1534 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r3, #0\n    add r3, sp, #0xc\n    add r5, r0, #0\n    add r7, r1, #0\n    str r2, [sp, #4]\n    bl ov18_021F148C\n    mov r3, #2\n    str r3, [sp]\n    ldr r2, [sp, #0xc]\n    str r0, [sp, #8]\n    ldr r2, [r2, #0x14]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r3, r3, #8\n    bl ov18_021F111C\n    ldr r0, _021F1590 ; =0x0000066C\n    ldr r1, _021F1594 ; =0x0000C551\n    ldr r0, [r5, r0]\n    mov r2, #2\n    bl SpriteManager_FindPlttResourceOffset\n    add r6, r0, #0\n    ldr r1, [sp, #4]\n    add r0, r7, #0\n    mov r2, #0\n    bl GetBattleMonIconPaletteEx\n    add r1, r0, #0\n    lsl r0, r4, #2\n    add r2, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r2, r0]\n    add r1, r6, r1\n    bl ManagedSprite_SetPaletteOverride\n    ldr r0, [sp, #8]\n    bl Heap_Free\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F1590: .word 0x0000066C\n    _021F1594: .word 0x0000C551"
    );
    #endif
}

void ov18_021F1598(void) {
    /* Original at 0x021F1598 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    add r6, r2, #0\n    add r7, r5, r0\n    lsl r0, r6, #2\n    str r0, [sp]\n    add r4, r1, #0\n    ldr r0, [r7, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021F1618 ; =0x00001030\n    lsl r4, r4, #2\n    add r0, r5, r0\n    ldrh r1, [r0, r4]\n    str r0, [sp, #4]\n    cmp r1, #0\n    beq _021F1614\n    ldr r0, [r5]\n    mov r2, #0\n    ldr r0, [r0]\n    bl Pokedex_GetSeenFormByIdx\n    add r2, r0, #0\n    ldr r0, [sp, #4]\n    ldrh r1, [r0, r4]\n    cmp r1, #0xac\n    bne _021F15E0\n    cmp r2, #2\n    bne _021F15DE\n    mov r2, #1\n    b _021F15E0\n    mov r2, #0\n    add r0, r5, #0\n    add r3, r6, #0\n    bl ov18_021F14FC\n    ldr r0, [sp]\n    mov r1, #1\n    ldr r0, [r7, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021F161C ; =0x00001032\n    add r1, r5, r4\n    ldrh r0, [r1, r0]\n    cmp r0, #1\n    bne _021F160A\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #1\n    bl ov18_021F1160\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0\n    bl ov18_021F1160\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F1618: .word 0x00001030\n    _021F161C: .word 0x00001032"
    );
    #endif
}

void ov18_021F1620(void) {
    /* Original at 0x021F1620 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r6, #0x67\n    add r5, r0, #0\n    add r7, r1, #0\n    mov r4, #0\n    lsl r6, r6, #4\n    ldr r1, _021F16BC ; =0x0000185E\n    add r0, r7, r4\n    ldrb r2, [r5, r1]\n    mov r1, #1\n    eor r2, r1\n    mov r1, #0x1e\n    mul r1, r2\n    add r0, r0, r1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0xe\n    add r0, r5, r0\n    ldr r0, [r0, r6]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x1e\n    blo _021F162C\n    mov r4, #0\n    ldr r1, _021F16BC ; =0x0000185E\n    add r0, r7, r4\n    ldrb r2, [r5, r1]\n    mov r1, #0x1e\n    mul r1, r2\n    add r0, r0, r1\n    ldr r1, _021F16C0 ; =0x00001859\n    lsl r0, r0, #0x10\n    ldrb r2, [r5, r1]\n    mov r1, #0xf\n    lsr r6, r0, #0x10\n    mul r1, r2\n    add r0, r5, #0\n    add r1, r4, r1\n    add r2, r6, #0\n    bl ov18_021F1598\n    add r0, r4, #0\n    mov r1, #5\n    bl _s32_div_f\n    str r1, [sp]\n    add r0, r4, #0\n    mov r1, #5\n    bl _s32_div_f\n    add r2, r0, #0\n    lsl r0, r6, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    ldr r3, [sp]\n    mov r1, #0x28\n    mul r1, r3\n    mov r3, #0x28\n    mul r3, r2\n    add r1, #0x30\n    add r3, #0x18\n    lsl r1, r1, #0x10\n    lsl r2, r3, #0x10\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x1e\n    blo _021F1656\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F16BC: .word 0x0000185E\n    _021F16C0: .word 0x00001859"
    );
    #endif
}

void ov18_021F16C4(void) {
    /* Original at 0x021F16C4 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r1, [sp]\n    add r1, r3, #1\n    add r5, r0, #0\n    lsl r0, r1, #2\n    mov r6, #0\n    add r0, r1, r0\n    str r2, [sp, #4]\n    add r7, r6, #0\n    str r0, [sp, #0xc]\n    add r4, sp, #0x14\n    ldr r1, _021F1758 ; =0x0000185E\n    ldr r0, [sp]\n    ldrb r2, [r5, r1]\n    mov r1, #0x1e\n    add r0, r0, r7\n    mul r1, r2\n    add r0, r0, r1\n    str r0, [sp, #0x10]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    str r1, [sp, #8]\n    ldr r0, [r1, r0]\n    add r1, sp, #0x14\n    add r1, #2\n    add r2, sp, #0x14\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    cmp r0, #0xe0\n    bne _021F172C\n    mov r0, #0xf\n    mvn r0, r0\n    strh r0, [r4]\n    ldr r1, _021F175C ; =0x00001859\n    mov r2, #0xf\n    ldrb r1, [r5, r1]\n    add r0, r5, #0\n    mul r2, r1\n    ldr r1, [sp, #0xc]\n    sub r1, r2, r1\n    ldr r2, [sp, #0x10]\n    add r1, r6, r1\n    bl ov18_021F1598\n    add r0, r6, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    mov r0, #0\n    ldrsh r1, [r4, r0]\n    ldr r0, [sp, #4]\n    mov r2, #0\n    add r0, r1, r0\n    strh r0, [r4]\n    mov r0, #0x67\n    ldr r1, [sp, #8]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #2\n    ldrsh r1, [r4, r1]\n    ldrsh r2, [r4, r2]\n    bl ManagedSprite_SetPositionXY\n    add r0, r7, #1\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    cmp r7, #0x1e\n    blo _021F16DC\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F1758: .word 0x0000185E\n    _021F175C: .word 0x00001859"
    );
    #endif
}

void ov18_021F1760(void) {
    /* Original at 0x021F1760 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r1, [sp]\n    add r1, r3, #5\n    add r5, r0, #0\n    lsl r0, r1, #2\n    mov r6, #0\n    add r0, r1, r0\n    str r2, [sp, #4]\n    add r7, r6, #0\n    str r0, [sp, #0xc]\n    add r4, sp, #0x14\n    ldr r1, _021F17F4 ; =0x0000185E\n    ldr r0, [sp]\n    ldrb r2, [r5, r1]\n    mov r1, #0x1e\n    add r0, r0, r7\n    mul r1, r2\n    add r0, r0, r1\n    str r0, [sp, #0x10]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    str r1, [sp, #8]\n    ldr r0, [r1, r0]\n    add r1, sp, #0x14\n    add r1, #2\n    add r2, sp, #0x14\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0\n    ldrsh r1, [r4, r0]\n    sub r0, #0x10\n    cmp r1, r0\n    bne _021F17C8\n    mov r0, #0xe0\n    strh r0, [r4]\n    ldr r1, _021F17F8 ; =0x00001859\n    mov r2, #0xf\n    ldrb r1, [r5, r1]\n    add r0, r5, #0\n    mul r2, r1\n    ldr r1, [sp, #0xc]\n    add r1, r2, r1\n    ldr r2, [sp, #0x10]\n    add r1, r6, r1\n    bl ov18_021F1598\n    add r0, r6, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    mov r0, #0\n    ldrsh r1, [r4, r0]\n    ldr r0, [sp, #4]\n    mov r2, #0\n    add r0, r1, r0\n    strh r0, [r4]\n    mov r0, #0x67\n    ldr r1, [sp, #8]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #2\n    ldrsh r1, [r4, r1]\n    ldrsh r2, [r4, r2]\n    bl ManagedSprite_SetPositionXY\n    add r0, r7, #1\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    cmp r7, #0x1e\n    blo _021F1778\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F17F4: .word 0x0000185E\n    _021F17F8: .word 0x00001859"
    );
    #endif
}

void ov18_021F17FC(void) {
    /* Original at 0x021F17FC */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F18C8 ; =0x0000C58C\n    ldr r1, _021F18CC ; =0x00000668\n    str r0, [sp, #8]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #0x4c\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F18D0 ; =0x0000C58D\n    ldr r1, _021F18CC ; =0x00000668\n    str r0, [sp, #8]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #0x4c\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #0x4b\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _021F18D4 ; =0x0000C552\n    ldr r3, _021F18CC ; =0x00000668\n    str r0, [sp, #0x14]\n    mov r0, #0x85\n    lsl r0, r0, #4\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBuffer\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #0x4b\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _021F18D8 ; =0x0000C553\n    ldr r3, _021F18CC ; =0x00000668\n    str r0, [sp, #0x14]\n    mov r0, #0x85\n    lsl r0, r0, #4\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBuffer\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021F18DC ; =0x0000C551\n    ldr r1, _021F18CC ; =0x00000668\n    str r0, [sp, #4]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #0x4d\n    bl SpriteSystem_LoadCellResObj\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021F18DC ; =0x0000C551\n    ldr r1, _021F18CC ; =0x00000668\n    str r0, [sp, #4]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #0x4e\n    bl SpriteSystem_LoadAnimResObj\n    add sp, #0x18\n    pop {r4, pc}\n    nop\n    _021F18C8: .word 0x0000C58C\n    _021F18CC: .word 0x00000668\n    _021F18D0: .word 0x0000C58D\n    _021F18D4: .word 0x0000C552\n    _021F18D8: .word 0x0000C553\n    _021F18DC: .word 0x0000C551"
    );
    #endif
}

void ov18_021F18E0(void) {
    /* Original at 0x021F18E0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F1924 ; =0x0000066C\n    ldr r1, _021F1928 ; =0x0000C58C\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F1924 ; =0x0000066C\n    ldr r1, _021F192C ; =0x0000C58D\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F1924 ; =0x0000066C\n    ldr r1, _021F1930 ; =0x0000C552\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F1924 ; =0x0000066C\n    ldr r1, _021F1934 ; =0x0000C553\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F1924 ; =0x0000066C\n    ldr r1, _021F1938 ; =0x0000C551\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F1924 ; =0x0000066C\n    ldr r1, _021F1938 ; =0x0000C551\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    pop {r4, pc}\n    nop\n    _021F1924: .word 0x0000066C\n    _021F1928: .word 0x0000C58C\n    _021F192C: .word 0x0000C58D\n    _021F1930: .word 0x0000C552\n    _021F1934: .word 0x0000C553\n    _021F1938: .word 0x0000C551"
    );
    #endif
}

void ov18_021F193C(void) {
    /* Original at 0x021F193C */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F19D8 ; =0x0000C58E\n    ldr r1, _021F19DC ; =0x00000668\n    str r0, [sp, #8]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #0x4c\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F19E0 ; =0x0000C58F\n    ldr r1, _021F19DC ; =0x00000668\n    str r0, [sp, #8]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #0x4c\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #0x4b\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _021F19E4 ; =0x0000C554\n    ldr r3, _021F19DC ; =0x00000668\n    str r0, [sp, #0x14]\n    mov r0, #0x85\n    lsl r0, r0, #4\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBuffer\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #0x4b\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _021F19E8 ; =0x0000C555\n    ldr r3, _021F19DC ; =0x00000668\n    str r0, [sp, #0x14]\n    mov r0, #0x85\n    lsl r0, r0, #4\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBuffer\n    add sp, #0x18\n    pop {r4, pc}\n    nop\n    _021F19D8: .word 0x0000C58E\n    _021F19DC: .word 0x00000668\n    _021F19E0: .word 0x0000C58F\n    _021F19E4: .word 0x0000C554\n    _021F19E8: .word 0x0000C555"
    );
    #endif
}

void ov18_021F19EC(void) {
    /* Original at 0x021F19EC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F1A1C ; =0x0000066C\n    ldr r1, _021F1A20 ; =0x0000C58E\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F1A1C ; =0x0000066C\n    ldr r1, _021F1A24 ; =0x0000C58F\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F1A1C ; =0x0000066C\n    ldr r1, _021F1A28 ; =0x0000C554\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F1A1C ; =0x0000066C\n    ldr r1, _021F1A2C ; =0x0000C555\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    pop {r4, pc}\n    nop\n    _021F1A1C: .word 0x0000066C\n    _021F1A20: .word 0x0000C58E\n    _021F1A24: .word 0x0000C58F\n    _021F1A28: .word 0x0000C554\n    _021F1A2C: .word 0x0000C555"
    );
    #endif
}

void ov18_021F1A30(void) {
    /* Original at 0x021F1A30 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    lsl r4, r1, #2\n    ldr r1, _021F1A6C ; =0x00000668\n    add r5, r0, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    mov r3, #2\n    ldr r1, [r5, r1]\n    ldr r2, _021F1A70 ; =ov18_021FABC0\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    mov r1, #0x67\n    mov r3, #2\n    add r2, r5, r4\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    add r0, r1, #0\n    sub r0, #8\n    sub r1, r1, #4\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, _021F1A74 ; =ov18_021FABF4\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    ldr r1, _021F1A78 ; =0x00000674\n    add r2, r5, r4\n    str r0, [r2, r1]\n    pop {r3, r4, r5, pc}\n    _021F1A6C: .word 0x00000668\n    _021F1A70: .word ov18_021FABC0\n    _021F1A74: .word ov18_021FABF4\n    _021F1A78: .word 0x00000674"
    );
    #endif
}

void ov18_021F1A7C(void) {
    /* Original at 0x021F1A7C */
    /* Requires manual decompilation - 148 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    str r2, [sp, #0x14]\n    str r3, [sp, #0x18]\n    ldr r3, _021F1BC0 ; =ov18_021FA328\n    add r2, sp, #0x20\n    add r5, r0, #0\n    add r4, r1, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r1, #0x32\n    mov r0, #0x25\n    lsl r1, r1, #6\n    bl Heap_AllocAtEnd\n    add r7, r0, #0\n    mov r0, #0\n    add r1, sp, #0x30\n    mov r2, #0x10\n    bl MIi_CpuClearFast\n    ldr r0, _021F1BC4 ; =0x00000147\n    cmp r4, r0\n    bne _021F1AC6\n    add r0, sp, #0x48\n    ldrb r0, [r0, #0x10]\n    cmp r0, #2\n    bne _021F1AC6\n    ldr r0, [r5]\n    mov r1, #0\n    ldr r0, [r0]\n    bl Pokedex_GetSeenSpindaPersonality\n    add r6, r0, #0\n    b _021F1AC8\n    mov r6, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    add r3, sp, #0x48\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldrb r3, [r3, #0x10]\n    ldr r2, [sp, #0x18]\n    add r0, sp, #0x30\n    add r1, r4, #0\n    bl GetMonSpriteCharAndPlttNarcIdsEx\n    str r7, [sp]\n    str r6, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, sp, #0x48\n    ldrb r0, [r0, #0x10]\n    add r1, sp, #0x20\n    mov r2, #0x25\n    str r0, [sp, #0xc]\n    str r4, [sp, #0x10]\n    ldrh r0, [r1, #0x10]\n    ldrh r1, [r1, #0x12]\n    add r3, sp, #0x20\n    bl sub_02014510\n    mov r0, #0x67\n    lsl r0, r0, #4\n    add r4, r5, r0\n    ldr r0, [sp, #0x5c]\n    lsl r6, r0, #2\n    ldr r0, [r4, r6]\n    ldr r0, [r0]\n    bl Sprite_GetImageProxy\n    mov r1, #2\n    bl NNS_G2dGetImageLocation\n    mov r1, #0x32\n    str r0, [sp, #0x1c]\n    add r0, r7, #0\n    lsl r1, r1, #6\n    bl DC_FlushRange\n    mov r2, #0x32\n    ldr r1, [sp, #0x1c]\n    add r0, r7, #0\n    lsl r2, r2, #6\n    bl GXS_LoadOBJ\n    ldr r0, [r4, r6]\n    ldr r0, [r0]\n    bl Sprite_GetPaletteProxy\n    mov r1, #2\n    bl NNS_G2dGetImagePaletteLocation\n    add r4, r0, #0\n    ldr r0, [sp, #0x60]\n    cmp r0, #0\n    bne _021F1B6E\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x25\n    str r0, [sp, #4]\n    add r1, sp, #0x20\n    ldrh r0, [r1, #0x10]\n    ldrh r1, [r1, #0x14]\n    mov r2, #5\n    add r3, r4, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0x85\n    lsl r0, r0, #4\n    lsl r2, r4, #0xf\n    ldr r0, [r5, r0]\n    mov r1, #3\n    lsr r2, r2, #0x10\n    mov r3, #0x20\n    bl PaletteData_LoadPaletteSlotFromHardware\n    b _021F1BB4\n    cmp r0, #1\n    bne _021F1B94\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    lsl r0, r4, #0xf\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0x85\n    add r2, sp, #0x20\n    lsl r0, r0, #4\n    ldrh r1, [r2, #0x10]\n    ldrh r2, [r2, #0x14]\n    ldr r0, [r5, r0]\n    mov r3, #0x25\n    bl PaletteData_LoadNarc\n    b _021F1BB4\n    lsr r1, r4, #1\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x10\n    add r1, #0x10\n    str r0, [sp]\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #0x85\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #3\n    mov r2, #2\n    mov r3, #0\n    bl PaletteData_FillPaletteInBuffer\n    add r0, r7, #0\n    bl Heap_Free\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F1BC0: .word ov18_021FA328\n    _021F1BC4: .word 0x00000147"
    );
    #endif
}

void ov18_021F1BC8(void) {
    /* Original at 0x021F1BC8 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _021F1CA8 ; =0x0000185F\n    add r4, r2, #0\n    ldrb r0, [r5, r0]\n    add r6, r1, #0\n    add r7, r3, #0\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    add r0, r4, r0\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r3, _021F1CA8 ; =0x0000185F\n    mov r1, #0xf\n    ldrb r2, [r5, r3]\n    add r0, r2, #0\n    bic r0, r1\n    lsl r1, r2, #0x1c\n    lsr r2, r1, #0x1c\n    mov r1, #1\n    eor r1, r2\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x18\n    mov r1, #0xf\n    and r1, r2\n    orr r0, r1\n    strb r0, [r5, r3]\n    ldrb r0, [r5, r3]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    add r4, r4, r0\n    cmp r6, #0\n    bne _021F1C3C\n    lsl r0, r7, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    lsl r0, r7, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r5]\n    add r1, r6, #0\n    ldr r0, [r0]\n    mov r2, #0\n    bl Pokedex_SpeciesGetLastSeenGender\n    add r7, r0, #0\n    ldr r0, [r5]\n    add r1, r6, #0\n    ldr r0, [r0]\n    mov r2, #0\n    bl Pokedex_GetSeenFormByIdx\n    add r2, r0, #0\n    cmp r6, #0xac\n    bne _021F1C88\n    cmp r2, #2\n    bne _021F1C86\n    mov r2, #1\n    add r7, r2, #0\n    b _021F1C88\n    mov r2, #0\n    mov r0, #2\n    str r0, [sp]\n    lsl r2, r2, #0x18\n    lsl r3, r7, #0x18\n    str r4, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, r6, #0\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl ov18_021F1A7C\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F1CA8: .word 0x0000185F"
    );
    #endif
}

void ov18_021F1CAC(void) {
    ov18_021F1BC8();
}

void ov18_021F1CB4(void) {
    /* Original at 0x021F1CB4 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    bl ov18_021E5900\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F1D44 ; =0x0000C599\n    ldr r1, _021F1D48 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F1D4C ; =0x00000854\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    mov r3, #0x4d\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    bl ov18_021E5908\n    str r4, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _021F1D50 ; =0x0000C55B\n    ldr r3, _021F1D48 ; =0x00000668\n    str r0, [sp, #0x14]\n    mov r0, #0x85\n    lsl r0, r0, #4\n    ldr r2, [r5, r3]\n    add r3, r3, #4\n    ldr r0, [r5, r0]\n    ldr r3, [r5, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBuffer\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F1D54 ; =0x0000C558\n    ldr r1, _021F1D48 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F1D4C ; =0x00000854\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    mov r3, #0x4e\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F1D54 ; =0x0000C558\n    ldr r1, _021F1D48 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F1D4C ; =0x00000854\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    mov r3, #0x4f\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    nop\n    _021F1D44: .word 0x0000C599\n    _021F1D48: .word 0x00000668\n    _021F1D4C: .word 0x00000854\n    _021F1D50: .word 0x0000C55B\n    _021F1D54: .word 0x0000C558"
    );
    #endif
}

void ov18_021F1D58(void) {
    /* Original at 0x021F1D58 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F1D88 ; =0x0000066C\n    ldr r1, _021F1D8C ; =0x0000C599\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F1D88 ; =0x0000066C\n    ldr r1, _021F1D90 ; =0x0000C55B\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F1D88 ; =0x0000066C\n    ldr r1, _021F1D94 ; =0x0000C558\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F1D88 ; =0x0000066C\n    ldr r1, _021F1D94 ; =0x0000C558\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    pop {r4, pc}\n    nop\n    _021F1D88: .word 0x0000066C\n    _021F1D8C: .word 0x0000C599\n    _021F1D90: .word 0x0000C55B\n    _021F1D94: .word 0x0000C558"
    );
    #endif
}

void ov18_021F1D98(void) {
    /* Original at 0x021F1D98 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r2, #0x67\n    lsl r2, r2, #4\n    add r6, r0, #0\n    add r0, r2, #0\n    lsl r4, r1, #2\n    sub r0, #8\n    sub r1, r2, #4\n    add r5, r6, r2\n    mov r3, #2\n    ldr r0, [r6, r0]\n    ldr r1, [r6, r1]\n    ldr r2, _021F1DD8 ; =ov18_021FA450\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    str r0, [r5, r4]\n    ldr r0, _021F1DDC ; =0x0000066C\n    ldr r1, _021F1DE0 ; =0x0000C55B\n    ldr r0, [r6, r0]\n    mov r2, #2\n    bl SpriteManager_FindPlttResourceOffset\n    add r1, r0, #0\n    ldr r0, [r5, r4]\n    bl ManagedSprite_SetPaletteOverride\n    ldr r0, [r5, r4]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r4, r5, r6, pc}\n    _021F1DD8: .word ov18_021FA450\n    _021F1DDC: .word 0x0000066C\n    _021F1DE0: .word 0x0000C55B"
    );
    #endif
}

void ov18_021F1DE4(void) {
    /* Original at 0x021F1DE4 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldr r0, _021F1E64 ; =0x0000185C\n    add r4, r1, #0\n    ldrb r0, [r5, r0]\n    add r6, r3, #0\n    cmp r0, #2\n    bne _021F1E1A\n    cmp r4, #0\n    beq _021F1E1A\n    lsl r0, r2, #2\n    add r2, r5, r0\n    ldr r0, _021F1E68 ; =0x00001032\n    ldrh r0, [r2, r0]\n    cmp r0, #1\n    beq _021F1E1A\n    ldr r0, _021F1E6C ; =0x000001E7\n    cmp r4, r0\n    bne _021F1E2E\n    ldr r0, [r5]\n    mov r2, #0\n    ldr r0, [r0]\n    bl Pokedex_GetSeenFormByIdx\n    cmp r0, #1\n    bne _021F1E2E\n    lsl r0, r6, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    lsl r0, r6, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #0x25\n    bl ov18_021F9694\n    add r4, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    mov r3, #0x80\n    bl ov18_021F111C\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021F1E64: .word 0x0000185C\n    _021F1E68: .word 0x00001032\n    _021F1E6C: .word 0x000001E7"
    );
    #endif
}

void ov18_021F1E70(void) {
    /* Original at 0x021F1E70 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F1F54 ; =0x0000C593\n    ldr r1, _021F1F58 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F1F5C ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x24\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F1F60 ; =0x0000C594\n    ldr r1, _021F1F58 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F1F5C ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x24\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F1F64 ; =0x0000C595\n    ldr r1, _021F1F58 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F1F5C ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x24\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F1F68 ; =0x0000C596\n    ldr r1, _021F1F58 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F1F5C ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x24\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r0, _021F1F5C ; =0x00000854\n    ldr r3, _021F1F58 ; =0x00000668\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp]\n    mov r1, #0x23\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #4\n    str r1, [sp, #0xc]\n    mov r1, #2\n    str r1, [sp, #0x10]\n    ldr r1, _021F1F6C ; =0x0000C558\n    str r1, [sp, #0x14]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F1F70 ; =0x0000C555\n    ldr r1, _021F1F58 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F1F5C ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x21\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F1F70 ; =0x0000C555\n    ldr r1, _021F1F58 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F1F5C ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x22\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add sp, #0x18\n    pop {r4, pc}\n    nop\n    _021F1F54: .word 0x0000C593\n    _021F1F58: .word 0x00000668\n    _021F1F5C: .word 0x00000854\n    _021F1F60: .word 0x0000C594\n    _021F1F64: .word 0x0000C595\n    _021F1F68: .word 0x0000C596\n    _021F1F6C: .word 0x0000C558\n    _021F1F70: .word 0x0000C555"
    );
    #endif
}

void ov18_021F1F74(void) {
    /* Original at 0x021F1F74 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F1FC0 ; =0x0000066C\n    ldr r1, _021F1FC4 ; =0x0000C593\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F1FC0 ; =0x0000066C\n    ldr r1, _021F1FC8 ; =0x0000C594\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F1FC0 ; =0x0000066C\n    ldr r1, _021F1FCC ; =0x0000C595\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F1FC0 ; =0x0000066C\n    ldr r1, _021F1FD0 ; =0x0000C596\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F1FC0 ; =0x0000066C\n    ldr r1, _021F1FD4 ; =0x0000C558\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F1FC0 ; =0x0000066C\n    ldr r1, _021F1FD8 ; =0x0000C555\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F1FC0 ; =0x0000066C\n    ldr r1, _021F1FD8 ; =0x0000C555\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    pop {r4, pc}\n    _021F1FC0: .word 0x0000066C\n    _021F1FC4: .word 0x0000C593\n    _021F1FC8: .word 0x0000C594\n    _021F1FCC: .word 0x0000C595\n    _021F1FD0: .word 0x0000C596\n    _021F1FD4: .word 0x0000C558\n    _021F1FD8: .word 0x0000C555"
    );
    #endif
}

void ov18_021F1FDC(void) {
    /* Original at 0x021F1FDC */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x34\n    ldr r6, _021F207C ; =ov18_021FA41C\n    add r4, r0, #0\n    add r2, r1, #0\n    add r5, sp, #0\n    mov r3, #6\n    ldmia r6!, {r0, r1}\n    stmia r5!, {r0, r1}\n    sub r3, r3, #1\n    bne _021F1FEA\n    ldr r0, [r6]\n    ldr r1, _021F2080 ; =0x00000668\n    str r0, [r5]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    mov r3, #2\n    lsl r5, r2, #2\n    ldr r1, [r4, r1]\n    add r2, sp, #0\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    mov r1, #0x67\n    mov r3, #2\n    add r2, r4, r5\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    ldr r0, _021F2084 ; =0x0000C595\n    add r2, sp, #0\n    str r0, [sp, #0x14]\n    add r0, r1, #0\n    sub r0, #8\n    sub r1, r1, #4\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    mov r3, #2\n    ldr r1, _021F2088 ; =0x00000678\n    add r2, r4, r5\n    str r0, [r2, r1]\n    add r2, sp, #0\n    mov r0, #0\n    ldrsh r0, [r2, r0]\n    lsl r3, r3, #0x14\n    add r0, #0x31\n    strh r0, [r2]\n    ldr r0, _021F208C ; =0x0000C594\n    add r2, sp, #0\n    str r0, [sp, #0x14]\n    add r0, r1, #0\n    sub r0, #0x10\n    sub r1, #0xc\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    bl SpriteSystem_NewSpriteWithYOffset\n    mov r3, #2\n    ldr r1, _021F2090 ; =0x00000674\n    add r2, r4, r5\n    str r0, [r2, r1]\n    ldr r0, _021F2094 ; =0x0000C596\n    add r2, sp, #0\n    str r0, [sp, #0x14]\n    add r0, r1, #0\n    sub r0, #0xc\n    sub r1, #8\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    ldr r1, _021F2098 ; =0x0000067C\n    add r2, r4, r5\n    str r0, [r2, r1]\n    add sp, #0x34\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021F207C: .word ov18_021FA41C\n    _021F2080: .word 0x00000668\n    _021F2084: .word 0x0000C595\n    _021F2088: .word 0x00000678\n    _021F208C: .word 0x0000C594\n    _021F2090: .word 0x00000674\n    _021F2094: .word 0x0000C596\n    _021F2098: .word 0x0000067C"
    );
    #endif
}

void ov18_021F209C(void) {
    /* Original at 0x021F209C */
    /* Requires manual decompilation - 154 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r1, #0\n    ldr r1, _021F21E4 ; =0x0000185C\n    add r5, r0, #0\n    ldrb r0, [r5, r1]\n    add r4, r3, #0\n    cmp r0, #2\n    bne _021F20BE\n    cmp r6, #0\n    beq _021F20BE\n    lsl r0, r2, #2\n    add r2, r5, r0\n    ldr r0, _021F21E8 ; =0x00001032\n    ldrh r0, [r2, r0]\n    cmp r0, #1\n    bne _021F20F6\n    lsl r4, r4, #2\n    mov r0, #0x67\n    add r1, r5, r4\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021F21EC ; =0x00000674\n    add r1, r5, r4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021F21F0 ; =0x00000678\n    add r1, r5, r4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021F21F4 ; =0x0000067C\n    add r1, r5, r4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r1, #3\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    bne _021F2120\n    lsl r7, r4, #2\n    mov r0, #0x67\n    add r1, r5, r7\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021F21EC ; =0x00000674\n    add r1, r5, r7\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r4, r4, #2\n    b _021F213A\n    lsl r7, r4, #2\n    ldr r0, _021F21F0 ; =0x00000678\n    add r1, r5, r7\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021F21F4 ; =0x0000067C\n    add r1, r5, r7\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021F21F8 ; =0x0000185F\n    mov r2, #0xf0\n    ldrb r3, [r5, r0]\n    add r1, r3, #0\n    bic r1, r2\n    lsl r2, r3, #0x18\n    lsr r3, r2, #0x1c\n    mov r2, #1\n    eor r2, r3\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x18\n    orr r1, r2\n    strb r1, [r5, r0]\n    ldr r0, [r5]\n    add r1, r6, #0\n    ldr r0, [r0]\n    mov r2, #0\n    bl Pokedex_GetSeenFormByIdx\n    add r7, r0, #0\n    cmp r6, #0xac\n    bne _021F2174\n    cmp r7, #2\n    bne _021F2172\n    mov r7, #1\n    b _021F2174\n    mov r7, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    mov r2, #6\n    bl GetMonBaseStat_HandleAlternateForm\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F21FC\n    lsl r0, r4, #2\n    str r0, [sp]\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add r0, r6, #0\n    add r1, r7, #0\n    mov r2, #7\n    bl GetMonBaseStat_HandleAlternateForm\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    beq _021F21B6\n    ldr r0, [sp, #4]\n    cmp r0, r2\n    bne _021F21C8\n    ldr r0, [sp]\n    add r1, r5, r0\n    ldr r0, _021F21EC ; =0x00000674\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #1\n    bl ov18_021F21FC\n    ldr r0, [sp]\n    add r1, r5, r0\n    ldr r0, _021F21EC ; =0x00000674\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F21E4: .word 0x0000185C\n    _021F21E8: .word 0x00001032\n    _021F21EC: .word 0x00000674\n    _021F21F0: .word 0x00000678\n    _021F21F4: .word 0x0000067C\n    _021F21F8: .word 0x0000185F"
    );
    #endif
}

void ov18_021F21FC(void) {
    /* Original at 0x021F21FC */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r2, #0\n    add r4, r1, #0\n    str r2, [sp, #4]\n    bl ov18_021F967C\n    add r1, r0, #0\n    mov r0, #0x25\n    str r0, [sp]\n    ldr r0, _021F2264 ; =0x00000854\n    mov r2, #1\n    ldr r0, [r5, r0]\n    add r3, sp, #8\n    bl GfGfxLoader_GetCharDataFromOpenNarc\n    add r7, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    ldr r2, [sp, #8]\n    mov r3, #6\n    ldr r2, [r2, #0x14]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r3, r3, #6\n    bl ov18_021F111C\n    ldr r0, _021F2268 ; =0x0000066C\n    ldr r1, _021F226C ; =0x0000C558\n    ldr r0, [r5, r0]\n    mov r2, #2\n    bl SpriteManager_FindPlttResourceOffset\n    add r6, r0, #0\n    ldr r0, [sp, #4]\n    bl ov18_021F9688\n    add r1, r0, #0\n    lsl r0, r4, #2\n    add r2, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r2, r0]\n    add r1, r6, r1\n    bl ManagedSprite_SetPaletteOverride\n    add r0, r7, #0\n    bl Heap_Free\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021F2264: .word 0x00000854\n    _021F2268: .word 0x0000066C\n    _021F226C: .word 0x0000C558"
    );
    #endif
}

void ov18_021F2270(void) {
    /* Original at 0x021F2270 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F22F4 ; =0x0000C597\n    ldr r1, _021F22F8 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F22FC ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x35\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r0, _021F22FC ; =0x00000854\n    ldr r3, _021F22F8 ; =0x00000668\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp]\n    mov r1, #0x38\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #1\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, _021F2300 ; =0x0000C559\n    str r1, [sp, #0x14]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #2\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F2304 ; =0x0000C556\n    ldr r1, _021F22F8 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F22FC ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x36\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F2304 ; =0x0000C556\n    ldr r1, _021F22F8 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F22FC ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x37\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add sp, #0x18\n    pop {r4, pc}\n    _021F22F4: .word 0x0000C597\n    _021F22F8: .word 0x00000668\n    _021F22FC: .word 0x00000854\n    _021F2300: .word 0x0000C559\n    _021F2304: .word 0x0000C556"
    );
    #endif
}

void ov18_021F2308(void) {
    /* Original at 0x021F2308 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F2338 ; =0x0000066C\n    ldr r1, _021F233C ; =0x0000C597\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F2338 ; =0x0000066C\n    ldr r1, _021F2340 ; =0x0000C559\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F2338 ; =0x0000066C\n    ldr r1, _021F2344 ; =0x0000C556\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F2338 ; =0x0000066C\n    ldr r1, _021F2344 ; =0x0000C556\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    pop {r4, pc}\n    nop\n    _021F2338: .word 0x0000066C\n    _021F233C: .word 0x0000C597\n    _021F2340: .word 0x0000C559\n    _021F2344: .word 0x0000C556"
    );
    #endif
}

void ov18_021F2348(void) {
    /* Original at 0x021F2348 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F23D0 ; =0x0000C598\n    ldr r1, _021F23D4 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F23D8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x35\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r0, _021F23D8 ; =0x00000854\n    ldr r3, _021F23D4 ; =0x00000668\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp]\n    mov r1, #0x38\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #1\n    str r1, [sp, #0xc]\n    mov r1, #2\n    str r1, [sp, #0x10]\n    ldr r1, _021F23DC ; =0x0000C55A\n    str r1, [sp, #0x14]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F23E0 ; =0x0000C557\n    ldr r1, _021F23D4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F23D8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x36\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F23E0 ; =0x0000C557\n    ldr r1, _021F23D4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F23D8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x37\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add sp, #0x18\n    pop {r4, pc}\n    _021F23D0: .word 0x0000C598\n    _021F23D4: .word 0x00000668\n    _021F23D8: .word 0x00000854\n    _021F23DC: .word 0x0000C55A\n    _021F23E0: .word 0x0000C557"
    );
    #endif
}

void ov18_021F23E4(void) {
    /* Original at 0x021F23E4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F2414 ; =0x0000066C\n    ldr r1, _021F2418 ; =0x0000C598\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F2414 ; =0x0000066C\n    ldr r1, _021F241C ; =0x0000C55A\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F2414 ; =0x0000066C\n    ldr r1, _021F2420 ; =0x0000C557\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F2414 ; =0x0000066C\n    ldr r1, _021F2420 ; =0x0000C557\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    pop {r4, pc}\n    nop\n    _021F2414: .word 0x0000066C\n    _021F2418: .word 0x0000C598\n    _021F241C: .word 0x0000C55A\n    _021F2420: .word 0x0000C557"
    );
    #endif
}

void ov18_021F2424(void) {
    /* Original at 0x021F2424 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r2, #0x30]\n    add r4, r1, #0\n    cmp r0, #1\n    ldr r1, _021F2464 ; =0x00000668\n    bne _021F2448\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl SpriteSystem_NewSprite\n    lsl r1, r4, #2\n    add r2, r5, r1\n    mov r1, #0x67\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    mov r3, #2\n    ldr r1, [r5, r1]\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    lsl r1, r4, #2\n    add r2, r5, r1\n    mov r1, #0x67\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    pop {r3, r4, r5, pc}\n    nop\n    _021F2464: .word 0x00000668"
    );
    #endif
}

void ov18_021F2468(void) {
    /* Original at 0x021F2468 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    ldr r4, _021F24D0 ; =ov18_021FA484\n    add r7, r0, #0\n    add r3, sp, #0\n    mov r2, #6\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F2474\n    ldr r0, [r4]\n    mov r4, #0x1b\n    add r5, r7, #0\n    str r0, [r3]\n    mov r6, #0x12\n    lsl r4, r4, #4\n    add r5, #0x48\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    sub r1, r4, r0\n    add r0, sp, #0\n    strh r1, [r0]\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, sp, #0\n    bl ov18_021F2424\n    ldr r0, _021F24D4 ; =0x0000066C\n    ldr r1, _021F24D8 ; =0x0000C55A\n    ldr r0, [r7, r0]\n    mov r2, #2\n    bl SpriteManager_FindPlttResourceOffset\n    add r1, r0, #0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetPaletteOverride\n    add r6, r6, #1\n    add r4, #0x18\n    add r5, r5, #4\n    cmp r6, #0x17\n    bls _021F248A\n    ldr r2, _021F24DC ; =ov18_021FAB24\n    add r0, r7, #0\n    mov r1, #8\n    bl ov18_021F2424\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F24D0: .word ov18_021FA484\n    _021F24D4: .word 0x0000066C\n    _021F24D8: .word 0x0000C55A\n    _021F24DC: .word ov18_021FAB24"
    );
    #endif
}

void ov18_021F24E0(void) {
    /* Original at 0x021F24E0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r1, #0\n    beq _021F24F6\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Pokedex_GetInternationalViewFlag\n    cmp r0, #0\n    bne _021F2508\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    ldr r0, _021F252C ; =0x0000185C\n    ldrb r0, [r5, r0]\n    bl LanguageToDexFlag\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F118C\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    _021F252C: .word 0x0000185C"
    );
    #endif
}

void ov18_021F2530(void) {
    /* Original at 0x021F2530 */
    /* Requires manual decompilation - 126 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r1, [sp]\n    add r6, r0, #0\n    ldr r0, [sp]\n    str r2, [sp, #4]\n    cmp r0, #0\n    beq _021F254C\n    ldr r0, [r6]\n    ldr r0, [r0]\n    bl Pokedex_GetInternationalViewFlag\n    cmp r0, #0\n    bne _021F257A\n    ldr r0, [sp, #4]\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    ldr r0, [sp, #4]\n    add r7, r0, #6\n    cmp r4, r7\n    bhs _021F263E\n    lsl r0, r4, #2\n    add r5, r6, r0\n    mov r6, #0x67\n    lsl r6, r6, #4\n    ldr r0, [r5, r6]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    add r5, r5, #4\n    cmp r4, r7\n    blo _021F2562\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    mov r7, #0\n    add r0, r0, #5\n    lsl r0, r0, #0x10\n    asr r5, r0, #0x10\n    ldr r0, [sp, #4]\n    cmp r5, r0\n    blo _021F263E\n    lsl r0, r5, #2\n    add r4, r6, r0\n    ldr r0, [sp, #4]\n    sub r0, r5, r0\n    str r0, [sp, #8]\n    bl sub_020912AC\n    bl sub_02091294\n    str r0, [sp, #0xc]\n    ldr r2, [sp, #0xc]\n    ldr r1, [sp]\n    lsl r2, r2, #0x10\n    add r0, r6, #0\n    lsr r2, r2, #0x10\n    bl ov18_021E6D10\n    cmp r0, #1\n    beq _021F25B6\n    ldr r0, [sp, #0xc]\n    cmp r0, #2\n    bne _021F2624\n    ldr r0, _021F2644 ; =0x0000185C\n    ldrb r0, [r6, r0]\n    bl LanguageToDexFlag\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #8]\n    bl sub_020912AC\n    add r2, r0, #0\n    ldr r0, [sp, #0x10]\n    cmp r2, r0\n    bne _021F25D8\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov18_021F118C\n    b _021F25E2\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r2, #6\n    bl ov18_021F118C\n    mov r0, #0x67\n    lsl r0, r0, #4\n    add r1, sp, #0x14\n    ldr r0, [r4, r0]\n    add r1, #2\n    add r2, sp, #0x14\n    bl ManagedSprite_GetPositionXY\n    mov r1, #5\n    sub r2, r1, r7\n    mov r1, #0x18\n    mul r1, r2\n    mov r0, #0x67\n    lsl r0, r0, #4\n    add r1, #0x7c\n    lsl r1, r1, #0x10\n    add r3, sp, #0x14\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r0, [r4, r0]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add r0, r7, #1\n    lsl r0, r0, #0x10\n    asr r7, r0, #0x10\n    b _021F2630\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    sub r0, r5, #1\n    lsl r0, r0, #0x10\n    asr r5, r0, #0x10\n    ldr r0, [sp, #4]\n    sub r4, r4, #4\n    cmp r5, r0\n    bhs _021F258E\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F2644: .word 0x0000185C"
    );
    #endif
}

void ov18_021F2648(void) {
    /* Original at 0x021F2648 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F26D0 ; =0x0000C590\n    ldr r1, _021F26D4 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F26D8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0xc\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r0, _021F26D8 ; =0x00000854\n    ldr r3, _021F26D4 ; =0x00000668\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp]\n    mov r1, #0xf\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #5\n    str r1, [sp, #0xc]\n    mov r1, #1\n    str r1, [sp, #0x10]\n    ldr r1, _021F26DC ; =0x0000C556\n    str r1, [sp, #0x14]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #2\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F26E0 ; =0x0000C552\n    ldr r1, _021F26D4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F26D8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0xd\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F26E0 ; =0x0000C552\n    ldr r1, _021F26D4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F26D8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0xe\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add sp, #0x18\n    pop {r4, pc}\n    nop\n    _021F26D0: .word 0x0000C590\n    _021F26D4: .word 0x00000668\n    _021F26D8: .word 0x00000854\n    _021F26DC: .word 0x0000C556\n    _021F26E0: .word 0x0000C552"
    );
    #endif
}

void ov18_021F26E4(void) {
    /* Original at 0x021F26E4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F2714 ; =0x0000066C\n    ldr r1, _021F2718 ; =0x0000C590\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F2714 ; =0x0000066C\n    ldr r1, _021F271C ; =0x0000C556\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F2714 ; =0x0000066C\n    ldr r1, _021F2720 ; =0x0000C552\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F2714 ; =0x0000066C\n    ldr r1, _021F2720 ; =0x0000C552\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    pop {r4, pc}\n    nop\n    _021F2714: .word 0x0000066C\n    _021F2718: .word 0x0000C590\n    _021F271C: .word 0x0000C556\n    _021F2720: .word 0x0000C552"
    );
    #endif
}

void ov18_021F2724(void) {
    /* Original at 0x021F2724 */
    /* Requires manual decompilation - 110 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F2800 ; =0x0000C591\n    ldr r1, _021F2804 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F2808 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x1a\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r0, _021F2808 ; =0x00000854\n    ldr r3, _021F2804 ; =0x00000668\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp]\n    mov r1, #0x20\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #1\n    str r1, [sp, #0xc]\n    mov r1, #2\n    str r1, [sp, #0x10]\n    ldr r1, _021F280C ; =0x0000C557\n    str r1, [sp, #0x14]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F2810 ; =0x0000C553\n    ldr r1, _021F2804 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F2808 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x1b\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F2810 ; =0x0000C553\n    ldr r1, _021F2804 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F2808 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x1c\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F2814 ; =0x0000C592\n    ldr r1, _021F2804 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F2808 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x1d\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F2818 ; =0x0000C554\n    ldr r1, _021F2804 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F2808 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x1e\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F2818 ; =0x0000C554\n    ldr r1, _021F2804 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F2808 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x1f\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add sp, #0x18\n    pop {r4, pc}\n    nop\n    _021F2800: .word 0x0000C591\n    _021F2804: .word 0x00000668\n    _021F2808: .word 0x00000854\n    _021F280C: .word 0x0000C557\n    _021F2810: .word 0x0000C553\n    _021F2814: .word 0x0000C592\n    _021F2818: .word 0x0000C554"
    );
    #endif
}

void ov18_021F281C(void) {
    /* Original at 0x021F281C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F2868 ; =0x0000066C\n    ldr r1, _021F286C ; =0x0000C591\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F2868 ; =0x0000066C\n    ldr r1, _021F2870 ; =0x0000C557\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F2868 ; =0x0000066C\n    ldr r1, _021F2874 ; =0x0000C553\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F2868 ; =0x0000066C\n    ldr r1, _021F2874 ; =0x0000C553\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    ldr r0, _021F2868 ; =0x0000066C\n    ldr r1, _021F2878 ; =0x0000C592\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F2868 ; =0x0000066C\n    ldr r1, _021F287C ; =0x0000C554\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F2868 ; =0x0000066C\n    ldr r1, _021F287C ; =0x0000C554\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    pop {r4, pc}\n    _021F2868: .word 0x0000066C\n    _021F286C: .word 0x0000C591\n    _021F2870: .word 0x0000C557\n    _021F2874: .word 0x0000C553\n    _021F2878: .word 0x0000C592\n    _021F287C: .word 0x0000C554"
    );
    #endif
}

void ov18_021F2880(void) {
    /* Original at 0x021F2880 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl ov18_021F2964\n    add r0, r5, #0\n    mov r1, #0x18\n    bl ov18_021F1424\n    add r0, r5, #0\n    mov r1, #0x18\n    bl ov18_021F1620\n    add r0, r5, #0\n    bl ov18_021F299C\n    ldr r0, _021F2960 ; =0x00001860\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _021F28B4\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    b _021F28BC\n    add r0, r5, #0\n    mov r1, #0\n    bl ov18_021F2AC0\n    add r0, r5, #0\n    mov r1, #5\n    bl ov18_021F2BB0\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #1\n    bl ov18_021F2C10\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov18_021F2C5C\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov18_021F2E80\n    add r0, r5, #0\n    bl ov18_021F8838\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov18_021F8824\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0xb\n    bl ov18_021F1A30\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0xb\n    mov r3, #0xa\n    bl ov18_021F1CAC\n    add r0, r5, #0\n    mov r1, #0xe\n    bl ov18_021F1FDC\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #0xe\n    bl ov18_021F209C\n    add r0, r5, #0\n    mov r1, #0xd\n    bl ov18_021F1D98\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #0xd\n    bl ov18_021F1DE4\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #9\n    bl ov18_021F2EC8\n    add r0, r5, #0\n    bl ov18_021F2468\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x12\n    bl ov18_021F2530\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #8\n    bl ov18_021F24E0\n    mov r0, #0x69\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r4, r5, r6, pc}\n    _021F2960: .word 0x00001860"
    );
    #endif
}

void ov18_021F2964(void) {
    /* Original at 0x021F2964 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0x3c\n    bl ov18_021F1324\n    add r0, r4, #0\n    bl ov18_021F2648\n    add r0, r4, #0\n    bl ov18_021F2270\n    add r0, r4, #0\n    bl ov18_021F17FC\n    add r0, r4, #0\n    bl ov18_021F1CB4\n    add r0, r4, #0\n    bl ov18_021F1E70\n    add r0, r4, #0\n    bl ov18_021F2724\n    add r0, r4, #0\n    bl ov18_021F2348\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F299C(void) {
    /* Original at 0x021F299C */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r6, _021F2A0C ; =ov18_021FA984\n    mov r7, #0\n    add r4, r5, #0\n    ldr r0, _021F2A10 ; =0x00000668\n    ldr r1, _021F2A14 ; =0x0000066C\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl SpriteSystem_NewSprite\n    mov r1, #0x67\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r7, r7, #1\n    add r6, #0x34\n    add r4, r4, #4\n    cmp r7, #7\n    bls _021F29A6\n    add r0, r1, #0\n    add r0, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021F2A18 ; =0x0000068C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r1, _021F2A10 ; =0x00000668\n    mov r3, #2\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    ldr r2, _021F2A1C ; =ov18_021FAB58\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    ldr r1, _021F2A20 ; =0x00000694\n    mov r3, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r0, #0x2c\n    sub r1, #0x28\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, _021F2A24 ; =ov18_021FAB8C\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    ldr r1, _021F2A28 ; =0x00000698\n    str r0, [r5, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F2A0C: .word ov18_021FA984\n    _021F2A10: .word 0x00000668\n    _021F2A14: .word 0x0000066C\n    _021F2A18: .word 0x0000068C\n    _021F2A1C: .word ov18_021FAB58\n    _021F2A20: .word 0x00000694\n    _021F2A24: .word ov18_021FAB8C\n    _021F2A28: .word 0x00000698"
    );
    #endif
}

void ov18_021F2A2C(void) {
    /* Original at 0x021F2A2C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    cmp r2, #1\n    bne _021F2A60\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Pokedex_GetInternationalViewFlag\n    cmp r0, #1\n    bne _021F2A60\n    lsl r5, r5, #2\n    mov r0, #0x67\n    add r1, r4, r5\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021F2A80 ; =0x00000674\n    add r1, r4, r5\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    lsl r5, r5, #2\n    mov r0, #0x67\n    add r1, r4, r5\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021F2A80 ; =0x00000674\n    add r1, r4, r5\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    nop\n    _021F2A80: .word 0x00000674"
    );
    #endif
}

void ov18_021F2A84(void) {
    /* Original at 0x021F2A84 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r2, #1\n    bne _021F2AAC\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Pokedex_GetInternationalViewFlag\n    cmp r0, #1\n    bne _021F2AAC\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021F2AC0(void) {
    /* Original at 0x021F2AC0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _021F2AF4 ; =0x00001858\n    ldrb r2, [r0, r2]\n    cmp r2, #0\n    bne _021F2ADE\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0x90\n    mov r2, #0x80\n    bl ManagedSprite_SetPositionXY\n    pop {r3, pc}\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0x70\n    mov r2, #0x80\n    bl ManagedSprite_SetPositionXY\n    pop {r3, pc}\n    nop\n    _021F2AF4: .word 0x00001858"
    );
    #endif
}

void ov18_021F2AF8(void) {
    /* Original at 0x021F2AF8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r1, #0x67\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    add r1, sp, #0\n    add r4, r2, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    add r1, sp, #0\n    mov r0, #2\n    ldrsh r2, [r1, r0]\n    add r0, r2, #0\n    sub r0, #0x10\n    cmp r5, r0\n    blo _021F2B38\n    add r2, #0x10\n    cmp r5, r2\n    bhs _021F2B38\n    mov r0, #0\n    ldrsh r1, [r1, r0]\n    add r0, r1, #0\n    sub r0, #0x10\n    cmp r4, r0\n    blo _021F2B38\n    add r1, #0x10\n    cmp r4, r1\n    bhs _021F2B38\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021F2B3C(void) {
    /* Original at 0x021F2B3C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r2, #0\n    mov r2, #0x67\n    lsl r2, r2, #4\n    add r5, r0, r2\n    lsl r4, r1, #2\n    add r1, sp, #0\n    ldr r0, [r5, r4]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    add r3, sp, #0\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    add r1, r1, r6\n    lsl r1, r1, #0x10\n    ldr r0, [r5, r4]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F2B70(void) {
    /* Original at 0x021F2B70 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r2, #0\n    mov r2, #0x67\n    lsl r2, r2, #4\n    add r5, r0, r2\n    lsl r4, r1, #2\n    add r1, sp, #0\n    ldr r0, [r5, r4]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r0, [r5, r4]\n    add r1, r6, #0\n    bl ManagedSprite_SetPositionXY\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F2B9C(void) {
    /* Original at 0x021F2B9C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021F2BAC ; =0x00001858\n    ldrb r0, [r0, r1]\n    cmp r0, #0\n    bne _021F2BA8\n    mov r0, #0x90\n    bx lr\n    mov r0, #0x70\n    bx lr\n    _021F2BAC: .word 0x00001858"
    );
    #endif
}

void ov18_021F2BB0(void) {
    /* Original at 0x021F2BB0 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r2, _021F2BF8 ; =0x0000185A\n    lsl r4, r1, #2\n    ldrb r6, [r0, r2]\n    mov r2, #0x67\n    lsl r2, r2, #4\n    add r5, r0, r2\n    add r0, r6, #0\n    mov r1, #5\n    bl _s32_div_f\n    add r7, r1, #0\n    add r0, r6, #0\n    mov r1, #5\n    bl _s32_div_f\n    add r3, r0, #0\n    mov r2, #0x28\n    add r1, r7, #0\n    mul r1, r2\n    mul r2, r3\n    add r1, #0x30\n    add r2, #0x18\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r5, r4]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5, r4]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F2BF8: .word 0x0000185A"
    );
    #endif
}

void ov18_021F2BFC(void) {
    /* Original at 0x021F2BFC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021F2C08 ; =0x00000684\n    ldr r3, _021F2C0C ; =ManagedSprite_SetDrawFlag\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bx r3\n    nop\n    _021F2C08: .word 0x00000684\n    _021F2C0C: .word ManagedSprite_SetDrawFlag"
    );
    #endif
}

void ov18_021F2C10(void) {
    /* Original at 0x021F2C10 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    ldr r2, _021F2C58 ; =0x00001859\n    add r5, r0, #0\n    ldrb r2, [r5, r2]\n    add r4, r1, #0\n    cmp r2, #0\n    bne _021F2C28\n    mov r2, #7\n    bl ov18_021F118C\n    b _021F2C2E\n    mov r2, #5\n    bl ov18_021F118C\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov18_021F8950\n    ldr r1, _021F2C58 ; =0x00001859\n    ldrb r1, [r5, r1]\n    cmp r1, r0\n    bne _021F2C4A\n    add r0, r5, #0\n    add r1, r4, #1\n    mov r2, #0xa\n    bl ov18_021F118C\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r4, #1\n    mov r2, #8\n    bl ov18_021F118C\n    pop {r4, r5, r6, pc}\n    nop\n    _021F2C58: .word 0x00001859"
    );
    #endif
}

void ov18_021F2C5C(void) {
    ov18_021F2C74(r2);
    ov18_021F118C(r5, r4, r0);
}

void ov18_021F2C74(void) {
    /* Original at 0x021F2C74 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov18_021F891C\n    ldr r3, _021F2C94 ; =ov18_021FA398\n    mov r2, #0\n    ldrh r1, [r3]\n    cmp r0, r1\n    bls _021F2C8C\n    add r2, r2, #1\n    add r3, r3, #2\n    cmp r2, #0xc\n    blo _021F2C7E\n    add r2, #0xb\n    add r0, r2, #0\n    pop {r3, pc}\n    nop\n    _021F2C94: .word ov18_021FA398"
    );
    #endif
}

void ov18_021F2C98(void) {
    ManagedSprite_GetActiveAnim(0x67);
}

void ov18_021F2CB4(void) {
    ov18_021F2C98();
}

void ov18_021F2CC0(void) {
    ov18_021F2C98();
}

void ov18_021F2CD0(void) {
    /* Original at 0x021F2CD0 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    add r6, r0, #0\n    lsl r0, r7, #2\n    add r1, r6, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r5, r2, #0\n    add r1, #2\n    add r2, sp, #0\n    add r4, r3, #0\n    bl ManagedSprite_GetPositionXY\n    add r0, r6, #0\n    add r1, r7, #0\n    bl ov18_021F2C98\n    add r2, sp, #0\n    mov r1, #2\n    ldrsh r3, [r2, r1]\n    add r1, r3, #0\n    sub r1, #0xb\n    cmp r5, r1\n    blo _021F2D20\n    add r3, #0xb\n    cmp r5, r3\n    bhi _021F2D20\n    lsr r3, r0, #1\n    mov r0, #0\n    ldrsh r1, [r2, r0]\n    sub r0, r1, r3\n    cmp r4, r0\n    blo _021F2D20\n    add r0, r1, r3\n    cmp r4, r0\n    bhi _021F2D20\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F2D24(void) {
    /* Original at 0x021F2D24 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0x67\n    add r4, r1, #0\n    lsl r0, r0, #4\n    add r7, r5, r0\n    lsl r0, r4, #2\n    str r0, [sp, #4]\n    add r1, sp, #8\n    ldr r0, [r7, r0]\n    add r1, #2\n    add r2, sp, #8\n    add r6, r3, #0\n    bl ManagedSprite_GetPositionXY\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F2CB4\n    cmp r6, r0\n    bhs _021F2D52\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F2CC0\n    cmp r6, r0\n    bls _021F2D60\n    add r6, r0, #0\n    ldr r0, [sp, #4]\n    add r2, sp, #8\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    lsl r2, r6, #0x10\n    ldr r0, [r7, r0]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F2CB4\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F2CC0\n    sub r0, r0, r7\n    str r0, [sp]\n    ldr r1, [sp, #0x20]\n    add r0, r5, #0\n    bl ov18_021F8950\n    add r4, r0, #0\n    ldr r0, [sp]\n    add r1, r4, #0\n    lsl r0, r0, #8\n    bl _u32_div_f\n    sub r1, r6, r7\n    mov r3, #0\n    lsl r2, r1, #8\n    add r6, r3, #0\n    add r7, r3, #0\n    cmp r2, r6\n    blo _021F2DC0\n    add r1, r7, r0\n    cmp r2, r1\n    bhs _021F2DC0\n    ldr r0, _021F2DD0 ; =0x00001859\n    ldrb r1, [r5, r0]\n    cmp r1, r3\n    beq _021F2DCA\n    add sp, #0xc\n    strb r3, [r5, r0]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r3, r3, #1\n    add r6, r6, r0\n    add r7, r7, r0\n    cmp r3, r4\n    bls _021F2DA6\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021F2DD0: .word 0x00001859"
    );
    #endif
}

void ov18_021F2DD4(void) {
    /* Original at 0x021F2DD4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r2, #0\n    add r5, r1, #0\n    add r7, r0, #0\n    add r1, r4, #0\n    str r3, [sp]\n    bl ov18_021F2CB4\n    add r6, r0, #0\n    add r0, r7, #0\n    add r1, r4, #0\n    bl ov18_021F2CC0\n    add r4, r0, #0\n    ldr r1, [sp]\n    add r0, r7, #0\n    bl ov18_021F8950\n    add r1, r0, #0\n    cmp r5, r1\n    beq _021F2E0E\n    sub r0, r4, r6\n    lsl r0, r0, #8\n    bl _u32_div_f\n    add r1, r0, #0\n    mul r1, r5\n    lsr r0, r1, #8\n    add r4, r6, r0\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F2E14(void) {
    /* Original at 0x021F2E14 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r5, r2, #0\n    add r1, #2\n    add r2, sp, #0\n    add r4, r3, #0\n    bl ManagedSprite_GetPositionXY\n    add r1, sp, #0\n    mov r0, #0\n    ldrsh r0, [r1, r0]\n    cmp r5, r0\n    blo _021F2E42\n    sub r0, r5, r0\n    add r1, r4, #0\n    bl _u32_div_f\n    pop {r3, r4, r5, pc}\n    sub r0, r0, r5\n    add r1, r4, #0\n    bl _u32_div_f\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021F2E4C(void) {
    /* Original at 0x021F2E4C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r2, #0\n    mov r2, #0x67\n    lsl r2, r2, #4\n    add r5, r0, r2\n    lsl r4, r1, #2\n    add r1, sp, #0\n    ldr r0, [r5, r4]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    add r2, r2, r6\n    lsl r2, r2, #0x10\n    ldr r0, [r5, r4]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F2E80(void) {
    /* Original at 0x021F2E80 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    add r1, sp, #4\n    str r2, [sp]\n    add r6, r5, r0\n    lsl r7, r4, #2\n    ldr r0, [r6, r7]\n    add r1, #2\n    add r2, sp, #4\n    bl ManagedSprite_GetPositionXY\n    ldr r1, _021F2EC4 ; =0x00001859\n    ldr r3, [sp]\n    ldrb r1, [r5, r1]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov18_021F2DD4\n    add r3, r0, #0\n    add r2, sp, #4\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    lsl r2, r3, #0x10\n    ldr r0, [r6, r7]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F2EC4: .word 0x00001859"
    );
    #endif
}

void ov18_021F2EC8(void) {
    /* Original at 0x021F2EC8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    lsl r1, r1, #2\n    add r3, r0, r1\n    ldr r1, _021F2EFC ; =0x00001032\n    ldrh r1, [r3, r1]\n    cmp r1, #2\n    bne _021F2EE8\n    lsl r1, r2, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, pc}\n    lsl r1, r2, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, pc}\n    nop\n    _021F2EFC: .word 0x00001032"
    );
    #endif
}

void ov18_021F2F00(void) {
    /* Original at 0x021F2F00 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov18_021F1104\n    add r0, r4, #0\n    mov r1, #0x3c\n    bl ov18_021F13DC\n    add r0, r4, #0\n    bl ov18_021F26E4\n    add r0, r4, #0\n    bl ov18_021F2308\n    add r0, r4, #0\n    bl ov18_021F18E0\n    add r0, r4, #0\n    bl ov18_021F1D58\n    add r0, r4, #0\n    bl ov18_021F1F74\n    add r0, r4, #0\n    bl ov18_021F281C\n    add r0, r4, #0\n    bl ov18_021F23E4\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F2F3C(void) {
    ov18_021F2F4C();
    ov18_021F32B8(r4);
}

void ov18_021F2F4C(void) {
    /* Original at 0x021F2F4C */
    /* Requires manual decompilation - 198 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r1, #0x3c\n    bl ov18_021F1324\n    add r0, r4, #0\n    bl ov18_021F2648\n    add r0, r4, #0\n    bl ov18_021F2270\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F30E0 ; =0x0000C5A0\n    ldr r1, _021F30E4 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F30E8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x48\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r0, _021F30E8 ; =0x00000854\n    ldr r3, _021F30E4 ; =0x00000668\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp]\n    mov r1, #0x4b\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #1\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, _021F30EC ; =0x0000C561\n    str r1, [sp, #0x14]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #2\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F30F0 ; =0x0000C55E\n    ldr r1, _021F30E4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F30E8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x49\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F30F0 ; =0x0000C55E\n    ldr r1, _021F30E4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F30E8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x4a\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F30F4 ; =0x0000C59F\n    ldr r1, _021F30E4 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F30E8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x48\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r0, _021F30E8 ; =0x00000854\n    ldr r3, _021F30E4 ; =0x00000668\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp]\n    mov r1, #0x4b\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #1\n    str r1, [sp, #0xc]\n    mov r1, #2\n    str r1, [sp, #0x10]\n    ldr r1, _021F30F8 ; =0x0000C560\n    str r1, [sp, #0x14]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F30FC ; =0x0000C55D\n    ldr r1, _021F30E4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F30E8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x49\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F30FC ; =0x0000C55D\n    ldr r1, _021F30E4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F30E8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x4a\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F3100 ; =0x0000C59E\n    ldr r1, _021F30E4 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F30E8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x17\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r0, _021F30E8 ; =0x00000854\n    ldr r3, _021F30E4 ; =0x00000668\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp]\n    mov r1, #0x20\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #1\n    str r1, [sp, #0xc]\n    mov r1, #2\n    str r1, [sp, #0x10]\n    ldr r1, _021F3104 ; =0x0000C55F\n    str r1, [sp, #0x14]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F3108 ; =0x0000C55C\n    ldr r1, _021F30E4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F30E8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x18\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F3108 ; =0x0000C55C\n    ldr r1, _021F30E4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F30E8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x19\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add sp, #0x18\n    pop {r4, pc}\n    nop\n    _021F30E0: .word 0x0000C5A0\n    _021F30E4: .word 0x00000668\n    _021F30E8: .word 0x00000854\n    _021F30EC: .word 0x0000C561\n    _021F30F0: .word 0x0000C55E\n    _021F30F4: .word 0x0000C59F\n    _021F30F8: .word 0x0000C560\n    _021F30FC: .word 0x0000C55D\n    _021F3100: .word 0x0000C59E\n    _021F3104: .word 0x0000C55F\n    _021F3108: .word 0x0000C55C"
    );
    #endif
}

void ov18_021F310C(void) {
    /* Original at 0x021F310C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0x3c\n    bl ov18_021F13DC\n    add r0, r4, #0\n    bl ov18_021F26E4\n    add r0, r4, #0\n    bl ov18_021F2308\n    ldr r0, _021F3174 ; =0x0000066C\n    ldr r1, _021F3178 ; =0x0000C59F\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F3174 ; =0x0000066C\n    ldr r1, _021F317C ; =0x0000C560\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F3174 ; =0x0000066C\n    ldr r1, _021F3180 ; =0x0000C55D\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F3174 ; =0x0000066C\n    ldr r1, _021F3180 ; =0x0000C55D\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    ldr r0, _021F3174 ; =0x0000066C\n    ldr r1, _021F3184 ; =0x0000C5A0\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F3174 ; =0x0000066C\n    ldr r1, _021F3188 ; =0x0000C561\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F3174 ; =0x0000066C\n    ldr r1, _021F318C ; =0x0000C55E\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F3174 ; =0x0000066C\n    ldr r1, _021F318C ; =0x0000C55E\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    pop {r4, pc}\n    _021F3174: .word 0x0000066C\n    _021F3178: .word 0x0000C59F\n    _021F317C: .word 0x0000C560\n    _021F3180: .word 0x0000C55D\n    _021F3184: .word 0x0000C5A0\n    _021F3188: .word 0x0000C561\n    _021F318C: .word 0x0000C55E"
    );
    #endif
}

void ov18_021F3190(void) {
    /* Original at 0x021F3190 */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    bl ov18_021F17FC\n    add r0, r5, #0\n    bl ov18_021F1CB4\n    add r0, r5, #0\n    bl ov18_021F1E70\n    add r0, r5, #0\n    bl ov18_021F2724\n    add r0, r5, #0\n    bl ov18_021F2348\n    ldr r1, _021F3270 ; =0x00000668\n    mov r3, #2\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    ldr r2, _021F3274 ; =ov18_021FAB58\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    mov r1, #0x72\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r0, #0xb8\n    sub r1, #0xb4\n    mov r3, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, _021F3278 ; =ov18_021FAB8C\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    ldr r1, _021F327C ; =0x00000724\n    str r0, [r5, r1]\n    add r0, r5, #0\n    mov r1, #0x2e\n    bl ov18_021F1A30\n    add r0, r5, #0\n    mov r1, #0x30\n    bl ov18_021F1D98\n    add r0, r5, #0\n    mov r1, #0x31\n    bl ov18_021F1FDC\n    ldr r4, _021F3280 ; =ov18_021FA484\n    add r3, sp, #0\n    mov r2, #6\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F3200\n    ldr r0, [r4]\n    add r4, r5, #0\n    ldr r6, _021F3284 ; =0x000004F8\n    str r0, [r3]\n    mov r7, #0x35\n    add r4, #0xd4\n    ldr r0, _021F3288 ; =0x0000047C\n    add r2, sp, #0\n    sub r1, r6, r0\n    add r0, sp, #0\n    strh r1, [r0]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov18_021F2424\n    ldr r0, _021F328C ; =0x0000066C\n    ldr r1, _021F3290 ; =0x0000C55A\n    ldr r0, [r5, r0]\n    mov r2, #2\n    bl SpriteManager_FindPlttResourceOffset\n    add r1, r0, #0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetPaletteOverride\n    add r7, r7, #1\n    add r6, #0x18\n    add r4, r4, #4\n    cmp r7, #0x3a\n    bls _021F3214\n    mov r7, #0x67\n    lsl r7, r7, #4\n    mov r4, #0x2c\n    add r5, #0xb0\n    add r6, r7, #0\n    ldr r0, [r5, r7]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r5, r6]\n    mov r1, #2\n    bl ManagedSprite_SetPriority\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x3a\n    bls _021F3252\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F3270: .word 0x00000668\n    _021F3274: .word ov18_021FAB58\n    _021F3278: .word ov18_021FAB8C\n    _021F327C: .word 0x00000724\n    _021F3280: .word ov18_021FA484\n    _021F3284: .word 0x000004F8\n    _021F3288: .word 0x0000047C\n    _021F328C: .word 0x0000066C\n    _021F3290: .word 0x0000C55A"
    );
    #endif
}

void ov18_021F3294(void) {
    ov18_021F18E0();
    ov18_021F1D58(r4);
    ov18_021F1F74(r4);
    ov18_021F281C(r4);
    ov18_021F23E4(r4);
}

void ov18_021F32B8(void) {
    /* Original at 0x021F32B8 */
    /* Requires manual decompilation - 165 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    mov r7, #0x67\n    ldr r6, _021F340C ; =ov18_021FB004\n    add r5, r0, #0\n    mov r4, #0\n    lsl r7, r7, #4\n    ldr r0, _021F3410 ; =0x00000668\n    ldr r1, _021F3414 ; =0x0000066C\n    mov r2, #0x34\n    mul r2, r4\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r6, r2\n    bl SpriteSystem_NewSprite\n    lsl r1, r4, #2\n    add r1, r5, r1\n    str r0, [r1, r7]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x19\n    bls _021F32C6\n    ldr r1, _021F3410 ; =0x00000668\n    mov r3, #2\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    ldr r2, _021F3418 ; =ov18_021FA520\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    ldr r1, _021F341C ; =0x0000071C\n    mov r2, #0\n    str r0, [r5, r1]\n    add r0, r5, #0\n    mov r1, #0x2b\n    bl ov18_021F11C0\n    ldr r1, _021F3410 ; =0x00000668\n    mov r3, #2\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    ldr r2, _021F3420 ; =ov18_021FB54C\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    ldr r1, _021F3424 ; =0x000006D8\n    mov r3, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r0, #0x70\n    sub r1, #0x6c\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, _021F3428 ; =ov18_021FB580\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    ldr r1, _021F342C ; =0x000006DC\n    mov r2, #0\n    str r0, [r5, r1]\n    add r0, r5, #0\n    mov r1, #0x1b\n    bl ov18_021F11C0\n    ldr r4, _021F3430 ; =ov18_021FA4EC\n    add r3, sp, #0\n    mov r2, #6\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F3350\n    ldr r0, [r4]\n    mov r4, #0x1c\n    str r0, [r3]\n    add r7, sp, #0\n    cmp r4, #0x1c\n    bne _021F33A2\n    mov r0, #0xe0\n    strh r0, [r7]\n    mov r0, #0x48\n    strh r0, [r7, #2]\n    ldr r0, _021F3410 ; =0x00000668\n    ldr r1, _021F3414 ; =0x0000066C\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, sp, #0\n    bl SpriteSystem_NewSprite\n    lsl r1, r4, #2\n    add r2, r5, r1\n    mov r1, #0x67\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    ldr r0, _021F3434 ; =0x0000188C\n    ldr r2, [r5, r0]\n    cmp r2, #0xe\n    bne _021F3398\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov18_021F11C0\n    b _021F33F6\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F118C\n    b _021F33F6\n    add r0, r4, #0\n    sub r0, #0x1d\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    add r0, r6, #0\n    mov r1, #5\n    bl _s32_div_f\n    mov r0, #0x30\n    mul r0, r1\n    add r0, #0x20\n    strh r0, [r7]\n    add r0, r6, #0\n    mov r1, #5\n    bl _s32_div_f\n    mov r1, #0x28\n    mul r1, r0\n    add r1, #0x38\n    strh r1, [r7, #2]\n    ldr r0, _021F3410 ; =0x00000668\n    ldr r1, _021F3414 ; =0x0000066C\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, sp, #0\n    bl SpriteSystem_NewSprite\n    lsl r1, r4, #2\n    add r2, r5, r1\n    mov r1, #0x67\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov18_021F118C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x2a\n    bls _021F3360\n    add r0, r5, #0\n    mov r1, #0x3b\n    bl ov18_021F1424\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    _021F340C: .word ov18_021FB004\n    _021F3410: .word 0x00000668\n    _021F3414: .word 0x0000066C\n    _021F3418: .word ov18_021FA520\n    _021F341C: .word 0x0000071C\n    _021F3420: .word ov18_021FB54C\n    _021F3424: .word 0x000006D8\n    _021F3428: .word ov18_021FB580\n    _021F342C: .word 0x000006DC\n    _021F3430: .word ov18_021FA4EC\n    _021F3434: .word 0x0000188C"
    );
    #endif
}

void ov18_021F3438(void) {
    ov18_021F1104();
    ov18_021F310C(r4);
}

void ov18_021F3448(void) {
    /* Original at 0x021F3448 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0x1a\n    bl ov18_021F10E8\n    add r0, r4, #0\n    mov r1, #0x1b\n    bl ov18_021F10E8\n    ldr r0, _021F3484 ; =0x0000066C\n    ldr r1, _021F3488 ; =0x0000C59E\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F3484 ; =0x0000066C\n    ldr r1, _021F348C ; =0x0000C55F\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F3484 ; =0x0000066C\n    ldr r1, _021F3490 ; =0x0000C55C\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F3484 ; =0x0000066C\n    ldr r1, _021F3490 ; =0x0000C55C\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    pop {r4, pc}\n    _021F3484: .word 0x0000066C\n    _021F3488: .word 0x0000C59E\n    _021F348C: .word 0x0000C55F\n    _021F3490: .word 0x0000C55C"
    );
    #endif
}

void ov18_021F3494(void) {
    /* Original at 0x021F3494 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021F34C0 ; =0x0000188C\n    add r4, r0, #0\n    ldr r1, [r4, r1]\n    cmp r1, #0xe\n    bne _021F34AA\n    mov r1, #0x1c\n    mov r2, #0\n    bl ov18_021F11C0\n    pop {r4, pc}\n    mov r1, #0x1c\n    mov r2, #1\n    bl ov18_021F11C0\n    ldr r2, _021F34C0 ; =0x0000188C\n    add r0, r4, #0\n    ldr r2, [r4, r2]\n    mov r1, #0x1c\n    bl ov18_021F118C\n    pop {r4, pc}\n    _021F34C0: .word 0x0000188C"
    );
    #endif
}

void ov18_021F34C4(void) {
    /* Original at 0x021F34C4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    cmp r1, #1\n    bne _021F34D4\n    mov r1, #0x1c\n    mov r2, #0\n    bl ov18_021F11C0\n    mov r4, #0x1d\n    mov r6, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov18_021F11C0\n    add r4, r4, #1\n    cmp r4, #0x2a\n    bls _021F34D8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F34EC(void) {
    /* Original at 0x021F34EC */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov18_021F3494\n    cmp r4, #1\n    bne _021F351E\n    mov r0, #0x6e\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0xe0\n    mov r2, #0x48\n    bl ManagedSprite_SetPositionXY\n    mov r4, #0x1d\n    mov r6, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov18_021F11C0\n    add r4, r4, #1\n    cmp r4, #0x2a\n    bls _021F350C\n    pop {r4, r5, r6, pc}\n    mov r0, #0x6e\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x98\n    mov r2, #0x14\n    bl ManagedSprite_SetPositionXY\n    mov r4, #0x1d\n    mov r6, #1\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov18_021F11C0\n    add r4, r4, #1\n    cmp r4, #0x2a\n    bls _021F3530\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F3544(void) {
    ov18_021F11C0(1);
}

void ov18_021F3560(void) {
    /* Original at 0x021F3560 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    cmp r3, #0\n    bne _021F35B4\n    add r1, r6, #0\n    bl ov18_021F3AD0\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #5\n    mov r3, #1\n    bl ov18_021F36D4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F3AD0\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #0xb\n    mov r3, #0\n    bl ov18_021F36D4\n    ldr r2, _021F3614 ; =0x00001850\n    add r0, r5, #0\n    ldr r3, [r5, r2]\n    lsl r2, r6, #2\n    ldrh r2, [r3, r2]\n    mov r1, #6\n    bl ov18_021F38F0\n    ldr r2, _021F3614 ; =0x00001850\n    add r0, r5, #0\n    ldr r3, [r5, r2]\n    lsl r2, r4, #2\n    ldrh r2, [r3, r2]\n    mov r1, #0xc\n    bl ov18_021F38F0\n    b _021F35FE\n    add r1, r6, #0\n    bl ov18_021F3AD0\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #5\n    mov r3, #1\n    bl ov18_021F37D4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F3AD0\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #0xb\n    mov r3, #0\n    bl ov18_021F37D4\n    ldr r2, _021F3614 ; =0x00001850\n    add r0, r5, #0\n    ldr r3, [r5, r2]\n    lsl r2, r6, #2\n    add r2, r3, r2\n    ldrh r2, [r2, #2]\n    mov r1, #6\n    bl ov18_021F39C4\n    ldr r2, _021F3614 ; =0x00001850\n    add r0, r5, #0\n    ldr r3, [r5, r2]\n    lsl r2, r4, #2\n    add r2, r3, r2\n    ldrh r2, [r2, #2]\n    mov r1, #0xc\n    bl ov18_021F39C4\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #1\n    bl ov18_021F3A64\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #3\n    bl ov18_021F3A64\n    pop {r4, r5, r6, pc}\n    _021F3614: .word 0x00001850"
    );
    #endif
}

void ov18_021F3618(void) {
    /* Original at 0x021F3618 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #3\n    bhi _021F36BE\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    ov18_021F362C: ; jump table\n    mov r1, #1\n    bl ov18_021F34EC\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F3544\n    pop {r4, pc}\n    mov r1, #0\n    bl ov18_021F34EC\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F3544\n    pop {r4, pc}\n    mov r1, #1\n    bl ov18_021F34C4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov18_021F3544\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0x43\n    bl ov18_021F118C\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0x44\n    bl ov18_021F118C\n    ldr r2, _021F36D0 ; =0x00001878\n    add r0, r4, #0\n    ldr r1, [r4, r2]\n    add r2, r2, #4\n    ldr r2, [r4, r2]\n    mov r3, #0\n    bl ov18_021F3560\n    pop {r4, pc}\n    mov r1, #1\n    bl ov18_021F34C4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov18_021F3544\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0x29\n    bl ov18_021F118C\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0x2a\n    bl ov18_021F118C\n    mov r2, #0x62\n    lsl r2, r2, #6\n    ldr r1, [r4, r2]\n    add r2, r2, #4\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #1\n    bl ov18_021F3560\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #1\n    bl ov18_021F34C4\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F3544\n    pop {r4, pc}\n    _021F36D0: .word 0x00001878"
    );
    #endif
}

void ov18_021F36D4(void) {
    /* Original at 0x021F36D4 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    lsl r6, r2, #2\n    mov r0, #0x67\n    add r4, r1, #0\n    add r1, r5, r6\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #4\n    add r1, #2\n    add r2, sp, #4\n    str r3, [sp]\n    bl ManagedSprite_GetPositionXY\n    cmp r4, #0\n    bne _021F36FE\n    add r1, sp, #4\n    mov r0, #2\n    ldrsh r4, [r1, r0]\n    b _021F370C\n    cmp r4, #0x34\n    bhs _021F3706\n    mov r4, #0x34\n    b _021F370C\n    cmp r4, #0xcc\n    bls _021F370C\n    mov r4, #0xcc\n    mov r0, #0x67\n    lsl r0, r0, #4\n    add r7, r5, r0\n    add r1, sp, #4\n    ldr r0, [r7, r6]\n    add r1, #2\n    add r2, sp, #4\n    bl ManagedSprite_GetPositionXY\n    lsl r1, r4, #0x10\n    add r3, sp, #4\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r0, [r7, r6]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, _021F37C8 ; =0x00000674\n    add r1, sp, #4\n    add r7, r5, r0\n    ldr r0, [r7, r6]\n    add r1, #2\n    add r2, sp, #4\n    bl ManagedSprite_GetPositionXY\n    add r1, r4, #0\n    sub r1, #0x14\n    lsl r1, r1, #0x10\n    add r3, sp, #4\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r0, [r7, r6]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, _021F37CC ; =0x00000678\n    add r1, r5, r6\n    ldr r0, [r1, r0]\n    add r1, r4, #0\n    sub r1, #0xc\n    lsl r1, r1, #0x10\n    add r3, sp, #4\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, _021F37D0 ; =0x0000067C\n    add r1, r5, r6\n    ldr r0, [r1, r0]\n    add r1, r4, #4\n    lsl r1, r1, #0x10\n    add r3, sp, #4\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x1a\n    add r1, r5, r6\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    add r1, r4, #0\n    add r1, #0xc\n    lsl r1, r1, #0x10\n    add r3, sp, #4\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [sp]\n    cmp r0, #1\n    bne _021F37C4\n    mov r0, #0x67\n    lsl r0, r0, #4\n    add r1, sp, #4\n    ldr r0, [r5, r0]\n    add r1, #2\n    add r2, sp, #4\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x67\n    lsl r0, r0, #4\n    lsl r1, r4, #0x10\n    add r3, sp, #4\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r0, [r5, r0]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F37C8: .word 0x00000674\n    _021F37CC: .word 0x00000678\n    _021F37D0: .word 0x0000067C"
    );
    #endif
}

void ov18_021F37D4(void) {
    /* Original at 0x021F37D4 */
    /* Requires manual decompilation - 127 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    lsl r6, r2, #2\n    mov r0, #0x67\n    add r4, r1, #0\n    add r1, r5, r6\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #4\n    add r1, #2\n    add r2, sp, #4\n    str r3, [sp]\n    bl ManagedSprite_GetPositionXY\n    cmp r4, #0\n    bne _021F37FE\n    add r1, sp, #4\n    mov r0, #2\n    ldrsh r4, [r1, r0]\n    b _021F380C\n    cmp r4, #0x34\n    bhs _021F3806\n    mov r4, #0x34\n    b _021F380C\n    cmp r4, #0xcc\n    bls _021F380C\n    mov r4, #0xcc\n    mov r0, #0x67\n    lsl r0, r0, #4\n    add r7, r5, r0\n    add r1, sp, #4\n    ldr r0, [r7, r6]\n    add r1, #2\n    add r2, sp, #4\n    bl ManagedSprite_GetPositionXY\n    lsl r1, r4, #0x10\n    add r3, sp, #4\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r0, [r7, r6]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, _021F38E0 ; =0x00000674\n    add r1, sp, #4\n    add r7, r5, r0\n    ldr r0, [r7, r6]\n    add r1, #2\n    add r2, sp, #4\n    bl ManagedSprite_GetPositionXY\n    add r1, r4, #0\n    sub r1, #0x14\n    lsl r1, r1, #0x10\n    add r3, sp, #4\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r0, [r7, r6]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, _021F38E4 ; =0x00000678\n    add r1, r5, r6\n    ldr r0, [r1, r0]\n    add r1, r4, #0\n    sub r1, #0xc\n    lsl r1, r1, #0x10\n    add r3, sp, #4\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, _021F38E8 ; =0x0000067C\n    add r1, r5, r6\n    ldr r0, [r1, r0]\n    sub r1, r4, #4\n    lsl r1, r1, #0x10\n    add r3, sp, #4\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x1a\n    add r1, r5, r6\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    add r1, r4, #4\n    lsl r1, r1, #0x10\n    add r3, sp, #4\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, _021F38EC ; =0x00000684\n    add r1, r5, r6\n    ldr r0, [r1, r0]\n    add r1, r4, #0\n    add r1, #0x14\n    lsl r1, r1, #0x10\n    add r3, sp, #4\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [sp]\n    cmp r0, #1\n    bne _021F38DA\n    mov r0, #0x67\n    lsl r0, r0, #4\n    add r1, sp, #4\n    ldr r0, [r5, r0]\n    add r1, #2\n    add r2, sp, #4\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x67\n    lsl r0, r0, #4\n    lsl r1, r4, #0x10\n    add r3, sp, #4\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r0, [r5, r0]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F38E0: .word 0x00000674\n    _021F38E4: .word 0x00000678\n    _021F38E8: .word 0x0000067C\n    _021F38EC: .word 0x00000684"
    );
    #endif
}

void ov18_021F38F0(void) {
    /* Original at 0x021F38F0 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r6, _021F39BC ; =0x000003E7\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r2, r6\n    bne _021F3900\n    add r6, #0xbd\n    b _021F3914\n    ldr r0, _021F39C0 ; =0x00002710\n    mov r1, #0xfe\n    mul r0, r2\n    bl _u32_div_f\n    add r0, r0, #5\n    mov r1, #0xa\n    bl _u32_div_f\n    add r6, r0, #0\n    add r0, r6, #0\n    mov r1, #0xc\n    bl _u32_div_f\n    add r7, r0, #0\n    add r0, r6, #0\n    mov r1, #0xc\n    bl _u32_div_f\n    add r6, r1, #0\n    cmp r7, #0xa\n    blo _021F394C\n    add r0, r7, #0\n    mov r1, #0xa\n    bl _u32_div_f\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, #0x2b\n    bl ov18_021F118C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov18_021F11C0\n    b _021F3956\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r7, #0\n    mov r1, #0xa\n    bl _u32_div_f\n    add r2, r1, #0\n    add r0, r5, #0\n    add r1, r4, #1\n    add r2, #0x2b\n    bl ov18_021F118C\n    add r0, r5, #0\n    add r1, r4, #1\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r6, #0\n    mov r1, #0xa\n    bl _u32_div_f\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #2\n    add r2, #0x2b\n    bl ov18_021F118C\n    add r0, r5, #0\n    add r1, r4, #2\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r6, #0\n    mov r1, #0xa\n    bl _u32_div_f\n    add r2, r1, #0\n    add r0, r5, #0\n    add r1, r4, #3\n    add r2, #0x2b\n    bl ov18_021F118C\n    add r0, r5, #0\n    add r1, r4, #3\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r5, #0\n    add r1, r4, #4\n    mov r2, #0\n    bl ov18_021F11C0\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F39BC: .word 0x000003E7\n    _021F39C0: .word 0x00002710"
    );
    #endif
}

void ov18_021F39C4(void) {
    /* Original at 0x021F39C4 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r1, #0\n    add r7, r0, #0\n    ldr r1, _021F3A50 ; =0x0000270F\n    add r0, r2, #0\n    str r2, [sp]\n    cmp r0, r1\n    bne _021F39DC\n    ldr r0, _021F3A54 ; =0x00018696\n    str r0, [sp]\n    b _021F39EC\n    ldr r1, _021F3A58 ; =0x00035D2E\n    mul r2, r1\n    ldr r1, _021F3A5C ; =0x0000C350\n    add r0, r2, r1\n    lsl r1, r1, #1\n    bl _u32_div_f\n    str r0, [sp]\n    mov r0, #0\n    ldr r5, _021F3A60 ; =0x00002710\n    str r0, [sp, #4]\n    add r4, r0, #0\n    ldr r0, [sp]\n    add r1, r5, #0\n    bl _u32_div_f\n    add r2, r0, #0\n    bne _021F3A06\n    ldr r0, [sp, #4]\n    cmp r0, #1\n    bne _021F3A20\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r7, #0\n    add r1, r6, r4\n    add r2, #0x2b\n    bl ov18_021F118C\n    add r0, r7, #0\n    add r1, r6, r4\n    mov r2, #1\n    bl ov18_021F11C0\n    b _021F3A2A\n    add r0, r7, #0\n    add r1, r6, r4\n    mov r2, #0\n    bl ov18_021F11C0\n    ldr r0, [sp]\n    add r1, r5, #0\n    bl _u32_div_f\n    str r1, [sp]\n    add r0, r5, #0\n    mov r1, #0xa\n    bl _u32_div_f\n    add r5, r0, #0\n    cmp r4, #2\n    bne _021F3A46\n    mov r0, #1\n    str r0, [sp, #4]\n    add r4, r4, #1\n    cmp r4, #5\n    blo _021F39F4\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F3A50: .word 0x0000270F\n    _021F3A54: .word 0x00018696\n    _021F3A58: .word 0x00035D2E\n    _021F3A5C: .word 0x0000C350\n    _021F3A60: .word 0x00002710"
    );
    #endif
}

void ov18_021F3A64(void) {
    /* Original at 0x021F3A64 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r1, #0\n    bne _021F3A82\n    add r1, r4, #0\n    mov r2, #0x3a\n    bl ov18_021F118C\n    add r0, r5, #0\n    add r1, r4, #1\n    mov r2, #0x35\n    bl ov18_021F118C\n    pop {r3, r4, r5, pc}\n    cmp r1, #0x98\n    bne _021F3A9A\n    add r1, r4, #0\n    mov r2, #0x38\n    bl ov18_021F118C\n    add r0, r5, #0\n    add r1, r4, #1\n    mov r2, #0x37\n    bl ov18_021F118C\n    pop {r3, r4, r5, pc}\n    add r1, r4, #0\n    mov r2, #0x38\n    bl ov18_021F118C\n    add r0, r5, #0\n    add r1, r4, #1\n    mov r2, #0x35\n    bl ov18_021F118C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021F3AB0(void) {
    /* Original at 0x021F3AB0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    add r1, sp, #0\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    sub r0, #0x34\n    pop {r3, pc}"
    );
    #endif
}

void ov18_021F3AD0(void) {
    /* Original at 0x021F3AD0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r1, #0x34\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov18_021F3AD8(void) {
    /* Original at 0x021F3AD8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021F3B24 ; =0x00001860\n    add r4, r0, #0\n    ldr r1, [r4, r1]\n    cmp r1, #1\n    bne _021F3B20\n    mov r1, #0x11\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0x11\n    bl ov18_021F2AC0\n    ldr r0, _021F3B28 ; =0x000006B4\n    add r1, sp, #0\n    ldr r0, [r4, r0]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    ldr r0, _021F3B28 ; =0x000006B4\n    add r3, sp, #0\n    mov r1, #2\n    ldrsh r2, [r3, r1]\n    mov r1, #0x12\n    lsl r1, r1, #4\n    sub r1, r2, r1\n    mov r2, #0\n    lsl r1, r1, #0x10\n    ldrsh r2, [r3, r2]\n    ldr r0, [r4, r0]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    add sp, #4\n    pop {r3, r4, pc}\n    _021F3B24: .word 0x00001860\n    _021F3B28: .word 0x000006B4"
    );
    #endif
}

void ov18_021F3B2C(void) {
    /* Original at 0x021F3B2C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021F3B5C ; =0x000006B4\n    add r4, r1, #0\n    add r1, sp, #0\n    ldr r0, [r5, r0]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    ldr r0, _021F3B5C ; =0x000006B4\n    add r3, sp, #0\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    add r1, r1, r4\n    lsl r1, r1, #0x10\n    ldr r0, [r5, r0]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    pop {r3, r4, r5, pc}\n    nop\n    _021F3B5C: .word 0x000006B4"
    );
    #endif
}

void ov18_021F3B60(void) {
    /* Original at 0x021F3B60 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    cmp r1, #1\n    bne _021F3B88\n    mov r4, #0x2c\n    mov r6, #1\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov18_021F11C0\n    add r4, r4, #1\n    cmp r4, #0x3a\n    bls _021F3B6C\n    add r0, r5, #0\n    mov r1, #0x2b\n    mov r2, #0\n    bl ov18_021F11C0\n    pop {r4, r5, r6, pc}\n    mov r4, #0x2c\n    mov r6, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov18_021F11C0\n    add r4, r4, #1\n    cmp r4, #0x3a\n    bls _021F3B8C\n    add r0, r5, #0\n    bl ov18_021F3BA4\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F3BA4(void) {
    /* Original at 0x021F3BA4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021F3BD0 ; =0x0000188C\n    add r4, r0, #0\n    ldr r1, [r4, r1]\n    cmp r1, #0xe\n    bne _021F3BBA\n    mov r1, #0x2b\n    mov r2, #0\n    bl ov18_021F11C0\n    pop {r4, pc}\n    mov r1, #0x2b\n    mov r2, #1\n    bl ov18_021F11C0\n    ldr r2, _021F3BD0 ; =0x0000188C\n    add r0, r4, #0\n    ldr r2, [r4, r2]\n    mov r1, #0x2b\n    bl ov18_021F118C\n    pop {r4, pc}\n    _021F3BD0: .word 0x0000188C"
    );
    #endif
}

void ov18_021F3BD4(void) {
    /* Original at 0x021F3BD4 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x6e\n    lsl r0, r0, #4\n    add r4, r1, #0\n    add r1, sp, #0\n    ldr r0, [r5, r0]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x6e\n    lsl r0, r0, #4\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    add r2, r2, r4\n    lsl r2, r2, #0x10\n    ldr r0, [r5, r0]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, _021F3C2C ; =0x0000071C\n    add r1, sp, #0\n    ldr r0, [r5, r0]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    ldr r0, _021F3C2C ; =0x0000071C\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    add r2, r2, r4\n    lsl r2, r2, #0x10\n    ldr r0, [r5, r0]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    pop {r3, r4, r5, pc}\n    _021F3C2C: .word 0x0000071C"
    );
    #endif
}

void ov18_021F3C30(void) {
    /* Original at 0x021F3C30 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F3C50 ; =0x000006D4\n    mov r1, #0x30\n    add r2, r1, #0\n    ldr r0, [r4, r0]\n    sub r2, #0x90\n    bl ManagedSprite_SetPositionXY\n    add r0, r4, #0\n    mov r1, #0x19\n    mov r2, #1\n    bl ov18_021F11C0\n    pop {r4, pc}\n    nop\n    _021F3C50: .word 0x000006D4"
    );
    #endif
}

void ov18_021F3C54(void) {
    /* Original at 0x021F3C54 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021F3C84 ; =0x000006D4\n    add r4, r1, #0\n    add r1, sp, #0\n    ldr r0, [r5, r0]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    ldr r0, _021F3C84 ; =0x000006D4\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    add r2, r2, r4\n    lsl r2, r2, #0x10\n    ldr r0, [r5, r0]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    pop {r3, r4, r5, pc}\n    nop\n    _021F3C84: .word 0x000006D4"
    );
    #endif
}

void ov18_021F3C88(void) {
    /* Original at 0x021F3C88 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F3CA4 ; =0x000006D4\n    mov r1, #0x30\n    ldr r0, [r4, r0]\n    mov r2, #0x18\n    bl ManagedSprite_SetPositionXY\n    add r0, r4, #0\n    mov r1, #0x19\n    mov r2, #1\n    bl ov18_021F11C0\n    pop {r4, pc}\n    _021F3CA4: .word 0x000006D4"
    );
    #endif
}

void ov18_021F3CA8(void) {
    /* Original at 0x021F3CA8 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    add r0, r2, #0\n    ldr r2, _021F3D30 ; =0x000018A4\n    add r5, r3, #0\n    add r6, r4, r2\n    ldrb r3, [r6, r1]\n    mov r7, #0x80\n    add r2, r3, #0\n    tst r2, r7\n    beq _021F3D0C\n    ldr r1, _021F3D30 ; =0x000018A4\n    sub r1, r1, #2\n    ldrh r1, [r4, r1]\n    cmp r1, #0xac\n    bne _021F3CF2\n    add r1, r3, #0\n    eor r1, r7\n    beq _021F3CD8\n    cmp r1, #1\n    beq _021F3CE0\n    cmp r1, #2\n    beq _021F3CEA\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    strb r1, [r0]\n    strb r1, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    strb r1, [r0]\n    mov r0, #1\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #1\n    strb r1, [r0]\n    strb r1, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r3, #0\n    eor r1, r7\n    strb r1, [r0]\n    ldr r1, _021F3D30 ; =0x000018A4\n    ldr r0, [r4]\n    sub r1, r1, #2\n    ldrh r1, [r4, r1]\n    ldr r0, [r0]\n    mov r2, #0\n    bl Pokedex_SpeciesGetLastSeenGender\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0\n    strb r2, [r0]\n    ldrb r0, [r6, r1]\n    cmp r0, #1\n    beq _021F3D1E\n    cmp r0, #2\n    beq _021F3D22\n    cmp r0, #3\n    b _021F3D28\n    strb r2, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #2\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F3D30: .word 0x000018A4"
    );
    #endif
}

void ov18_021F3D34(void) {
    /* Original at 0x021F3D34 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov18_021F2648\n    ldr r1, _021F3D64 ; =0x00000668\n    ldr r2, _021F3D68 ; =ov18_021FA554\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    bl SpriteSystem_NewSprite\n    mov r1, #0x67\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #4\n    bl ManagedSprite_SetPaletteOverride\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov18_021F11C0\n    pop {r4, pc}\n    _021F3D64: .word 0x00000668\n    _021F3D68: .word ov18_021FA554"
    );
    #endif
}

void ov18_021F3D6C(void) {
    ov18_021F10E8(0);
    ov18_021F26E4(r4);
}

void ov18_021F3D80(void) {
    ov18_021F1294(0, 0xb0);
}

void ov18_021F3D98(void) {
    /* Original at 0x021F3D98 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    bl ov18_021F3E24\n    mov r6, #1\n    mov r4, #0x34\n    add r5, r7, #4\n    add r2, r4, #0\n    ldr r1, _021F3E00 ; =ov18_021FA610\n    sub r2, #0x34\n    add r0, r7, #0\n    add r1, r1, r2\n    bl ov18_021F11EC\n    mov r1, #0x67\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r6, r6, #1\n    add r4, #0x34\n    add r5, r5, #4\n    cmp r6, #8\n    bls _021F3DA6\n    add r0, r7, #0\n    mov r1, #1\n    bl ov18_021F69C0\n    add r2, sp, #0\n    add r0, r7, #0\n    mov r1, #0\n    add r2, #1\n    add r3, sp, #0\n    bl ov18_021F3CA8\n    ldr r1, _021F3E04 ; =0x000018A2\n    add r2, sp, #0\n    ldrh r1, [r7, r1]\n    ldrb r2, [r2, #1]\n    add r0, r7, #0\n    mov r3, #1\n    bl ov18_021F1534\n    add r0, r7, #0\n    bl ov18_021F40E4\n    add r0, r7, #0\n    bl ov18_021F40A0\n    add r0, r7, #0\n    bl ov18_021F4188\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F3E00: .word ov18_021FA610\n    _021F3E04: .word 0x000018A2"
    );
    #endif
}

void ov18_021F3E08(void) {
    /* Original at 0x021F3E08 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #1\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F10E8\n    add r4, r4, #1\n    cmp r4, #0x3b\n    blo _021F3E0E\n    add r0, r5, #0\n    bl ov18_021F3FDC\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021F3E24(void) {
    /* Original at 0x021F3E24 */
    /* Requires manual decompilation - 194 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F3FB0 ; =0x0000C550\n    ldr r1, _021F3FB4 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F3FB8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x4c\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    bl sub_02074490\n    ldr r2, _021F3FBC ; =0x00000858\n    ldr r3, _021F3FB4 ; =0x00000668\n    ldr r1, [r4, r2]\n    sub r2, #8\n    str r1, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r1, #3\n    str r1, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _021F3FC0 ; =0x0000C551\n    str r0, [sp, #0x14]\n    ldr r0, [r4, r2]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r3, [r4, r3]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    bl sub_0207449C\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021F3FB0 ; =0x0000C550\n    ldr r1, _021F3FB4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F3FBC ; =0x00000858\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    bl sub_020744A8\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021F3FB0 ; =0x0000C550\n    ldr r1, _021F3FB4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F3FBC ; =0x00000858\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F3FC4 ; =0x0000C59C\n    ldr r1, _021F3FB4 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F3FB8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x73\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r0, _021F3FB8 ; =0x00000854\n    ldr r3, _021F3FB4 ; =0x00000668\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp]\n    mov r1, #0x76\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #1\n    str r1, [sp, #0xc]\n    mov r1, #2\n    str r1, [sp, #0x10]\n    ldr r1, _021F3FC8 ; =0x0000C55E\n    str r1, [sp, #0x14]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F3FCC ; =0x0000C55A\n    ldr r1, _021F3FB4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F3FB8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x74\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F3FCC ; =0x0000C55A\n    ldr r1, _021F3FB4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F3FB8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x75\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F3FD0 ; =0x0000C59A\n    ldr r1, _021F3FB4 ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F3FB8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x77\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r0, _021F3FB8 ; =0x00000854\n    ldr r3, _021F3FB4 ; =0x00000668\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp]\n    mov r1, #0x7a\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #2\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, _021F3FD4 ; =0x0000C55C\n    str r1, [sp, #0x14]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F3FD8 ; =0x0000C559\n    ldr r1, _021F3FB4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F3FB8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x78\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F3FD8 ; =0x0000C559\n    ldr r1, _021F3FB4 ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F3FB8 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x79\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add sp, #0x18\n    pop {r4, pc}\n    nop\n    _021F3FB0: .word 0x0000C550\n    _021F3FB4: .word 0x00000668\n    _021F3FB8: .word 0x00000854\n    _021F3FBC: .word 0x00000858\n    _021F3FC0: .word 0x0000C551\n    _021F3FC4: .word 0x0000C59C\n    _021F3FC8: .word 0x0000C55E\n    _021F3FCC: .word 0x0000C55A\n    _021F3FD0: .word 0x0000C59A\n    _021F3FD4: .word 0x0000C55C\n    _021F3FD8: .word 0x0000C559"
    );
    #endif
}

void ov18_021F3FDC(void) {
    /* Original at 0x021F3FDC */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F405C ; =0x0000066C\n    ldr r1, _021F4060 ; =0x0000C550\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F405C ; =0x0000066C\n    ldr r1, _021F4064 ; =0x0000C551\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F405C ; =0x0000066C\n    ldr r1, _021F4060 ; =0x0000C550\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F405C ; =0x0000066C\n    ldr r1, _021F4060 ; =0x0000C550\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    ldr r0, _021F405C ; =0x0000066C\n    ldr r1, _021F4068 ; =0x0000C59C\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F405C ; =0x0000066C\n    ldr r1, _021F406C ; =0x0000C55E\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F405C ; =0x0000066C\n    ldr r1, _021F4070 ; =0x0000C55A\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F405C ; =0x0000066C\n    ldr r1, _021F4070 ; =0x0000C55A\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    ldr r0, _021F405C ; =0x0000066C\n    ldr r1, _021F4074 ; =0x0000C59A\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F405C ; =0x0000066C\n    ldr r1, _021F4078 ; =0x0000C55C\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F405C ; =0x0000066C\n    ldr r1, _021F407C ; =0x0000C559\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F405C ; =0x0000066C\n    ldr r1, _021F407C ; =0x0000C559\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    pop {r4, pc}\n    nop\n    _021F405C: .word 0x0000066C\n    _021F4060: .word 0x0000C550\n    _021F4064: .word 0x0000C551\n    _021F4068: .word 0x0000C59C\n    _021F406C: .word 0x0000C55E\n    _021F4070: .word 0x0000C55A\n    _021F4074: .word 0x0000C59A\n    _021F4078: .word 0x0000C55C\n    _021F407C: .word 0x0000C559"
    );
    #endif
}

void ov18_021F4080(void) {
    ov18_021F1294(1, 4, 0x20);
}

void ov18_021F40A0(void) {
    /* Original at 0x021F40A0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #9\n    mov r2, #0x19\n    str r1, [sp]\n    add r4, r0, #0\n    lsl r2, r2, #8\n    ldr r2, [r4, r2]\n    ldr r3, _021F40DC ; =ov18_021FA35A\n    lsl r2, r2, #0x18\n    mov r1, #5\n    asr r2, r2, #0x18\n    bl ov18_021F61DC\n    add r0, r4, #0\n    bl ov18_021F65EC\n    ldr r2, _021F40E0 ; =0x000018CA\n    add r0, r4, #0\n    ldrsb r1, [r4, r2]\n    add r2, #0x36\n    ldr r2, [r4, r2]\n    mov r3, #6\n    lsl r2, r2, #0x18\n    asr r2, r2, #0x18\n    bl ov18_021F619C\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021F40DC: .word ov18_021FA35A\n    _021F40E0: .word 0x000018CA"
    );
    #endif
}

void ov18_021F40E4(void) {
    /* Original at 0x021F40E4 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r3, [r4]\n    ldr r1, [r3, #0x10]\n    asr r0, r1, #4\n    lsr r0, r0, #0x1b\n    add r0, r1, r0\n    lsl r0, r0, #0xb\n    ldr r1, [r3, #0x14]\n    lsr r2, r0, #0x10\n    asr r0, r1, #4\n    lsr r0, r0, #0x1b\n    add r0, r1, r0\n    lsl r0, r0, #0xb\n    lsr r3, r0, #0x10\n    cmp r2, #0x17\n    blo _021F410E\n    sub r2, #0x16\n    lsl r0, r2, #0x10\n    lsr r2, r0, #0x10\n    lsl r2, r2, #3\n    lsl r3, r3, #3\n    add r2, #0x44\n    add r3, #0x2c\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x10\n    mov r1, #2\n    add r0, r4, #0\n    asr r2, r2, #0x10\n    asr r3, r3, #0x10\n    str r1, [sp]\n    bl ov18_021F1294\n    add r0, r4, #0\n    bl ov18_021F4134\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov18_021F4134(void) {
    /* Original at 0x021F4134 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _021F4184 ; =0x000018C8\n    ldrsb r1, [r0, r1]\n    cmp r1, #0\n    ldr r1, [r0]\n    bne _021F4162\n    ldr r2, [r1, #0x10]\n    asr r1, r2, #4\n    lsr r1, r1, #0x1b\n    add r1, r2, r1\n    asr r1, r1, #5\n    cmp r1, #0x17\n    blt _021F4158\n    mov r1, #2\n    mov r2, #0\n    bl ov18_021F11C0\n    pop {r3, pc}\n    mov r1, #2\n    mov r2, #1\n    bl ov18_021F11C0\n    pop {r3, pc}\n    ldr r2, [r1, #0x10]\n    asr r1, r2, #4\n    lsr r1, r1, #0x1b\n    add r1, r2, r1\n    asr r1, r1, #5\n    cmp r1, #0x17\n    blt _021F417A\n    mov r1, #2\n    mov r2, #1\n    bl ov18_021F11C0\n    pop {r3, pc}\n    mov r1, #2\n    mov r2, #0\n    bl ov18_021F11C0\n    pop {r3, pc}\n    _021F4184: .word 0x000018C8"
    );
    #endif
}

void ov18_021F4188(void) {
    /* Original at 0x021F4188 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r5, #0\n    mov r7, #0x67\n    mov r4, #9\n    add r6, #0x24\n    lsl r7, r7, #4\n    ldr r1, _021F41C0 ; =ov18_021FA4B8\n    add r0, r5, #0\n    bl ov18_021F11EC\n    str r0, [r6, r7]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov18_021F1160\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov18_021F11C0\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #0x3b\n    blo _021F4196\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F41C0: .word ov18_021FA4B8"
    );
    #endif
}

void ov18_021F41C4(void) {
    /* Original at 0x021F41C4 */
    /* Requires manual decompilation - 139 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    add r7, r2, #0\n    str r3, [sp]\n    ldr r4, [sp, #0x18]\n    bl ov18_021E8B24\n    cmp r0, #1\n    bne _021F41E4\n    mov r0, #0x20\n    mov r1, #4\n    mov r2, #1\n    mov r3, #3\n    b _021F422C\n    add r0, r5, #0\n    bl ov18_021E8B0C\n    cmp r0, #0x12\n    bne _021F4204\n    mov r0, #0x24\n    add r1, r5, #0\n    mul r1, r0\n    ldr r0, _021F42DC ; =0x0000190C\n    mov r3, #2\n    ldr r2, [r6, r0]\n    ldrb r0, [r2, r1]\n    add r1, r2, r1\n    ldrb r1, [r1, #1]\n    mov r2, #1\n    b _021F422C\n    add r0, r5, #0\n    bl ov18_021E8B5C\n    cmp r0, #1\n    bne _021F4218\n    mov r0, #0x23\n    mov r1, #8\n    mov r2, #2\n    mov r3, #1\n    b _021F422C\n    mov r0, #0x24\n    add r1, r5, #0\n    mul r1, r0\n    ldr r0, _021F42DC ; =0x0000190C\n    ldr r2, [r6, r0]\n    add r3, r2, r1\n    ldrb r0, [r2, r1]\n    ldrb r1, [r3, #1]\n    ldrb r2, [r3, #2]\n    ldrb r3, [r3, #3]\n    cmp r2, #1\n    bne _021F4262\n    cmp r3, #1\n    bne _021F423A\n    mov r5, #0\n    strb r5, [r4]\n    b _021F42AC\n    cmp r3, #2\n    bne _021F4244\n    mov r5, #6\n    strb r5, [r4]\n    b _021F42AC\n    cmp r3, #3\n    bne _021F424E\n    mov r5, #7\n    strb r5, [r4]\n    b _021F42AC\n    cmp r3, #4\n    bne _021F4258\n    mov r5, #8\n    strb r5, [r4]\n    b _021F42AC\n    cmp r3, #5\n    bne _021F42AC\n    mov r5, #9\n    strb r5, [r4]\n    b _021F42AC\n    cmp r2, #2\n    bne _021F4276\n    cmp r3, #1\n    bne _021F4270\n    mov r5, #1\n    strb r5, [r4]\n    b _021F42AC\n    mov r5, #0xa\n    strb r5, [r4]\n    b _021F42AC\n    cmp r2, #3\n    bne _021F428A\n    cmp r3, #1\n    bne _021F4284\n    mov r5, #2\n    strb r5, [r4]\n    b _021F42AC\n    mov r5, #0xb\n    strb r5, [r4]\n    b _021F42AC\n    cmp r2, #4\n    bne _021F4294\n    mov r5, #3\n    strb r5, [r4]\n    b _021F42AC\n    cmp r2, #5\n    bne _021F429E\n    mov r5, #4\n    strb r5, [r4]\n    b _021F42AC\n    cmp r2, #6\n    bne _021F42A8\n    mov r5, #5\n    strb r5, [r4]\n    b _021F42AC\n    mov r5, #0\n    strb r5, [r4]\n    lsl r4, r2, #3\n    lsr r2, r4, #0x1f\n    add r2, r4, r2\n    ldr r4, _021F42E0 ; =0x000018C8\n    asr r2, r2, #1\n    ldrsb r5, [r6, r4]\n    mov r4, #0x16\n    mul r4, r5\n    sub r0, r0, r4\n    lsl r0, r0, #3\n    add r0, r2, r0\n    add r0, #0x40\n    lsl r2, r1, #3\n    lsl r1, r3, #3\n    strh r0, [r7]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    add r1, r2, r0\n    ldr r0, [sp]\n    add r1, #0x28\n    strh r1, [r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F42DC: .word 0x0000190C\n    _021F42E0: .word 0x000018C8"
    );
    #endif
}

void ov18_021F42E4(void) {
    /* Original at 0x021F42E4 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r2, #0\n    ldr r2, _021F437C ; =0x00001908\n    mov ip, r1\n    ldr r2, [r0, r2]\n    lsl r1, r1, #2\n    ldrb r7, [r2, r1]\n    ldr r2, _021F437C ; =0x00001908\n    add r4, r3, #0\n    sub r2, #0x40\n    ldrsb r3, [r0, r2]\n    mov r2, #0x16\n    ldr r5, [sp, #0x18]\n    mul r2, r3\n    sub r2, r7, r2\n    lsl r2, r2, #3\n    add r2, #0x44\n    strh r2, [r6]\n    ldr r2, _021F437C ; =0x00001908\n    ldr r0, [r0, r2]\n    add r0, r0, r1\n    ldrb r0, [r0, #1]\n    lsl r0, r0, #3\n    add r0, #0x2c\n    strh r0, [r4]\n    mov r0, ip\n    bl ov18_021E8B18\n    cmp r0, #0x7c\n    beq _021F4328\n    add r1, r0, #0\n    sub r1, #0xb2\n    cmp r1, #1\n    bhi _021F4336\n    mov r0, #6\n    strb r0, [r5]\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    add r0, r0, #4\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #0x60\n    beq _021F4340\n    ldr r2, _021F4380 ; =0x000001E7\n    cmp r0, r2\n    bne _021F4352\n    mov r1, #0\n    strb r1, [r5]\n    ldrsh r0, [r6, r1]\n    add r0, r0, #4\n    strh r0, [r6]\n    ldrsh r0, [r4, r1]\n    add r0, r0, #4\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #0x71\n    beq _021F4366\n    add r1, r2, #0\n    sub r1, #0xac\n    cmp r0, r1\n    beq _021F4366\n    add r1, r2, #3\n    sub r0, r0, r1\n    cmp r0, #2\n    bhi _021F4374\n    mov r0, #6\n    strb r0, [r5]\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    add r0, r0, #4\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F437C: .word 0x00001908\n    _021F4380: .word 0x000001E7"
    );
    #endif
}

void ov18_021F4384(void) {
    /* Original at 0x021F4384 */
    /* Requires manual decompilation - 304 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    mov r1, #0\n    add r3, sp, #0xc\n    str r1, [sp, #4]\n    mov r1, #2\n    add r2, sp, #0x10\n    add r3, #2\n    add r5, r0, #0\n    str r1, [sp]\n    bl ov18_021F12C8\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, _021F4610 ; =0x000018CA\n    ldrsb r1, [r5, r0]\n    cmp r1, #0\n    bne _021F44A8\n    add r0, #0x36\n    ldr r0, [r5, r0]\n    mov r4, #1\n    cmp r0, #1\n    ble ov18_021F4478\n    add r6, sp, #8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021E8AB0\n    cmp r0, #0\n    add r0, sp, #8\n    bne _021F43DA\n    ldr r1, _021F4614 ; =0x000018FC\n    str r0, [sp]\n    ldr r2, [r5, r1]\n    lsl r1, r4, #2\n    ldr r1, [r2, r1]\n    add r3, sp, #8\n    add r0, r5, #0\n    add r2, sp, #0xc\n    add r3, #2\n    bl ov18_021F41C4\n    b _021F4400\n    ldr r1, _021F4614 ; =0x000018FC\n    str r0, [sp]\n    ldr r1, [r5, r1]\n    lsl r7, r4, #2\n    add r3, sp, #8\n    ldr r1, [r1, r7]\n    add r0, r5, #0\n    add r2, sp, #0xc\n    add r3, #2\n    bl ov18_021F42E4\n    ldr r0, _021F4614 ; =0x000018FC\n    ldr r0, [r5, r0]\n    ldr r0, [r0, r7]\n    bl ov18_021E8B18\n    add r1, sp, #0x14\n    bl ov18_021F47C0\n    mov r0, #2\n    str r0, [sp]\n    mov r2, #4\n    mov r3, #2\n    add r7, r4, #0\n    add r7, #8\n    ldrsh r2, [r6, r2]\n    ldrsh r3, [r6, r3]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov18_021F1294\n    ldrb r2, [r6]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov18_021F118C\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r2, #1\n    bl ov18_021F11C0\n    ldrb r0, [r6]\n    lsl r1, r0, #1\n    ldr r0, _021F4618 ; =ov18_021FA3B0\n    add r3, r0, r1\n    ldrb r0, [r0, r1]\n    lsr r2, r0, #1\n    mov r0, #4\n    ldrsh r1, [r6, r0]\n    mov r0, #8\n    ldrsh r7, [r6, r0]\n    sub r0, r1, r2\n    cmp r7, r0\n    blt _021F4468\n    add r0, r1, r2\n    cmp r7, r0\n    bge _021F4468\n    ldrb r0, [r3, #1]\n    lsr r2, r0, #1\n    mov r0, #2\n    ldrsh r1, [r6, r0]\n    mov r0, #6\n    ldrsh r0, [r6, r0]\n    sub r3, r1, r2\n    cmp r0, r3\n    blt _021F4468\n    add r1, r1, r2\n    cmp r0, r1\n    bge _021F4468\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    mov r0, #0x19\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    cmp r4, r0\n    blt _021F43B4\n    add r4, #8\n    ldr r1, [sp, #0x14]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov18_021F47F8\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    bne _021F4490\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    bne _021F4492\n    b _021F4602\n    add r1, r4, #0\n    add r4, sp, #8\n    mov r2, #8\n    mov r3, #6\n    ldrsh r2, [r4, r2]\n    ldrsh r3, [r4, r3]\n    add r0, r5, #0\n    bl ov18_021F4974\n    str r0, [sp, #4]\n    b _021F4602\n    add r0, r5, #0\n    bl ov18_021F4620\n    ldr r1, _021F4610 ; =0x000018CA\n    add r0, r5, #0\n    ldrsb r1, [r5, r1]\n    bl ov18_021E8AB0\n    cmp r0, #0\n    add r0, sp, #8\n    ldr r1, _021F4614 ; =0x000018FC\n    bne _021F4542\n    str r0, [sp]\n    ldr r2, [r5, r1]\n    sub r1, #0x32\n    ldrsb r1, [r5, r1]\n    add r3, sp, #8\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    add r2, sp, #0xc\n    add r3, #2\n    bl ov18_021F41C4\n    mov r4, #2\n    str r4, [sp]\n    add r3, sp, #8\n    mov r2, #4\n    ldrsh r2, [r3, r2]\n    ldrsh r3, [r3, r4]\n    add r0, r5, #0\n    mov r1, #9\n    bl ov18_021F1294\n    add r2, sp, #8\n    ldrb r2, [r2]\n    add r0, r5, #0\n    mov r1, #9\n    bl ov18_021F118C\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, sp, #8\n    ldrb r1, [r0]\n    lsl r4, r1, #1\n    ldr r1, _021F4618 ; =ov18_021FA3B0\n    ldrb r1, [r1, r4]\n    lsr r3, r1, #1\n    mov r1, #4\n    ldrsh r2, [r0, r1]\n    mov r1, #8\n    ldrsh r1, [r0, r1]\n    sub r6, r2, r3\n    cmp r1, r6\n    blt _021F4602\n    add r2, r2, r3\n    cmp r1, r2\n    bge _021F4602\n    ldr r1, _021F461C ; =ov18_021FA3B0 + 1\n    mov r2, #2\n    ldrb r1, [r1, r4]\n    ldrsh r3, [r0, r2]\n    mov r2, #6\n    ldrsh r2, [r0, r2]\n    lsr r1, r1, #1\n    sub r0, r3, r1\n    cmp r2, r0\n    blt _021F4602\n    add r0, r3, r1\n    cmp r2, r0\n    bge _021F4602\n    mov r0, #1\n    str r0, [sp, #4]\n    b _021F4602\n    str r0, [sp]\n    ldr r2, [r5, r1]\n    sub r1, #0x32\n    ldrsb r1, [r5, r1]\n    add r3, sp, #8\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    add r2, sp, #0xc\n    add r3, #2\n    bl ov18_021F42E4\n    ldr r0, _021F4614 ; =0x000018FC\n    ldr r1, [r5, r0]\n    sub r0, #0x32\n    ldrsb r0, [r5, r0]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl ov18_021E8B18\n    add r1, sp, #0x14\n    bl ov18_021F47C0\n    mov r4, #2\n    str r4, [sp]\n    add r3, sp, #8\n    mov r2, #4\n    ldrsh r2, [r3, r2]\n    ldrsh r3, [r3, r4]\n    add r0, r5, #0\n    mov r1, #9\n    bl ov18_021F1294\n    add r2, sp, #8\n    ldrb r2, [r2]\n    add r0, r5, #0\n    mov r1, #9\n    bl ov18_021F118C\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, sp, #8\n    ldrb r1, [r0]\n    lsl r4, r1, #1\n    ldr r1, _021F4618 ; =ov18_021FA3B0\n    ldrb r1, [r1, r4]\n    lsr r3, r1, #1\n    mov r1, #4\n    ldrsh r2, [r0, r1]\n    mov r1, #8\n    ldrsh r1, [r0, r1]\n    sub r6, r2, r3\n    cmp r1, r6\n    blt _021F45D8\n    add r2, r2, r3\n    cmp r1, r2\n    bge _021F45D8\n    ldr r1, _021F461C ; =ov18_021FA3B0 + 1\n    mov r2, #2\n    ldrb r1, [r1, r4]\n    ldrsh r3, [r0, r2]\n    mov r2, #6\n    ldrsh r2, [r0, r2]\n    lsr r1, r1, #1\n    sub r0, r3, r1\n    cmp r2, r0\n    blt _021F45D8\n    add r0, r3, r1\n    cmp r2, r0\n    bge _021F45D8\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r1, [sp, #0x14]\n    add r0, r5, #0\n    mov r2, #0xa\n    bl ov18_021F47F8\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    bne _021F4602\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    beq _021F4602\n    add r4, sp, #8\n    mov r2, #8\n    mov r3, #6\n    ldrsh r2, [r4, r2]\n    ldrsh r3, [r4, r3]\n    add r0, r5, #0\n    mov r1, #0xa\n    bl ov18_021F4974\n    str r0, [sp, #4]\n    ldr r1, [sp, #4]\n    add r0, r5, #0\n    bl ov18_021F69C0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F4610: .word 0x000018CA\n    _021F4614: .word 0x000018FC\n    _021F4618: .word ov18_021FA3B0\n    _021F461C: .word ov18_021FA3B0 + 1"
    );
    #endif
}

void ov18_021F4620(void) {
    ov18_021F11C0(9, 0);
}

void ov18_021F463C(void) {
    /* Original at 0x021F463C */
    /* Requires manual decompilation - 167 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    mov r1, #0\n    str r1, [sp, #8]\n    str r1, [sp, #4]\n    ldr r1, _021F47B0 ; =0x000018CA\n    add r5, r0, #0\n    ldrsb r2, [r5, r1]\n    cmp r2, #0\n    bne _021F470A\n    add r1, #0x36\n    ldr r0, [r5, r1]\n    mov r4, #1\n    cmp r0, #1\n    ble ov18_021F46EC\n    ldr r7, _021F47B4 ; =0x000018CB\n    add r6, r7, #0\n    ldrb r2, [r5, r6]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r2, r2, #0x19\n    lsr r2, r2, #0x1f\n    bl ov18_021E8ACC\n    cmp r0, #0\n    beq _021F4694\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x69\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    ldrb r1, [r5, r7]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1f\n    add r1, r1, #4\n    bl ManagedSprite_SetPaletteOverride\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #8\n    mov r2, #1\n    bl ov18_021F11C0\n    b _021F46BE\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #8\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021E8AB0\n    cmp r0, #0\n    beq _021F46BE\n    ldr r0, _021F47B8 ; =0x000018FC\n    ldr r1, [r5, r0]\n    lsl r0, r4, #2\n    ldr r0, [r1, r0]\n    bl ov18_021E8B18\n    add r1, sp, #4\n    bl ov18_021F47C0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021E8AB0\n    cmp r0, #0\n    beq _021F46DC\n    ldr r0, _021F47B8 ; =0x000018FC\n    ldr r1, [r5, r0]\n    lsl r0, r4, #2\n    ldr r0, [r1, r0]\n    bl ov18_021E8B18\n    add r1, sp, #8\n    bl ov18_021F47C0\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    mov r0, #0x19\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    cmp r4, r0\n    blt _021F465E\n    ldr r0, _021F47B4 ; =0x000018CB\n    add r4, #8\n    ldrb r0, [r5, r0]\n    add r3, r4, #0\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1f\n    add r0, r0, #4\n    str r0, [sp]\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    bl ov18_021F48AC\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    bl ov18_021F4620\n    ldr r2, _021F47B0 ; =0x000018CA\n    add r0, r5, #0\n    ldrsb r1, [r5, r2]\n    add r2, r2, #1\n    ldrb r2, [r5, r2]\n    lsl r2, r2, #0x19\n    lsr r2, r2, #0x1f\n    bl ov18_021E8ACC\n    cmp r0, #0\n    beq _021F4742\n    ldr r1, _021F47B4 ; =0x000018CB\n    ldr r0, _021F47BC ; =0x00000694\n    ldrb r1, [r5, r1]\n    ldr r0, [r5, r0]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1f\n    add r1, r1, #4\n    bl ManagedSprite_SetPaletteOverride\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #1\n    bl ov18_021F11C0\n    b _021F4770\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #0\n    bl ov18_021F11C0\n    ldr r1, _021F47B0 ; =0x000018CA\n    add r0, r5, #0\n    ldrsb r1, [r5, r1]\n    bl ov18_021E8AB0\n    cmp r0, #0\n    beq _021F4770\n    ldr r0, _021F47B8 ; =0x000018FC\n    ldr r1, [r5, r0]\n    sub r0, #0x32\n    ldrsb r0, [r5, r0]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl ov18_021E8B18\n    add r1, sp, #4\n    bl ov18_021F47C0\n    ldr r1, _021F47B0 ; =0x000018CA\n    add r0, r5, #0\n    ldrsb r1, [r5, r1]\n    bl ov18_021E8AB0\n    cmp r0, #0\n    beq _021F4794\n    ldr r0, _021F47B8 ; =0x000018FC\n    ldr r1, [r5, r0]\n    sub r0, #0x32\n    ldrsb r0, [r5, r0]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl ov18_021E8B18\n    add r1, sp, #8\n    bl ov18_021F47C0\n    ldr r0, _021F47B4 ; =0x000018CB\n    mov r3, #0xa\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1f\n    add r0, r0, #4\n    str r0, [sp]\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    bl ov18_021F48AC\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021F47B0: .word 0x000018CA\n    _021F47B4: .word 0x000018CB\n    _021F47B8: .word 0x000018FC\n    _021F47BC: .word 0x00000694"
    );
    #endif
}

void ov18_021F47C0(void) {
    /* Original at 0x021F47C0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0x6a\n    bne _021F47CE\n    ldr r2, [r1]\n    mov r0, #1\n    orr r0, r2\n    str r0, [r1]\n    bx lr\n    cmp r0, #0x78\n    beq _021F47DA\n    add r2, r0, #0\n    sub r2, #0xed\n    cmp r2, #2\n    bhi _021F47E4\n    ldr r2, [r1]\n    mov r0, #2\n    orr r0, r2\n    str r0, [r1]\n    bx lr\n    cmp r0, #0x7b\n    beq _021F47EC\n    cmp r0, #0xb0\n    bne _021F47F4\n    ldr r2, [r1]\n    mov r0, #4\n    orr r0, r2\n    str r0, [r1]\n    bx lr"
    );
    #endif
}

void ov18_021F47F8(void) {
    /* Original at 0x021F47F8 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r1, #0\n    mov r1, #1\n    add r5, r0, #0\n    add r4, r2, #0\n    tst r1, r6\n    beq _021F482C\n    mov r1, #2\n    str r1, [sp]\n    add r1, r4, #0\n    mov r2, #0x94\n    mov r3, #0x4c\n    bl ov18_021F1294\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov18_021F118C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov18_021F11C0\n    add r4, r4, #1\n    mov r0, #2\n    add r1, r6, #0\n    tst r1, r0\n    beq _021F4858\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0xec\n    mov r3, #0x4c\n    bl ov18_021F1294\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov18_021F118C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov18_021F11C0\n    add r4, r4, #1\n    mov r0, #4\n    tst r0, r6\n    beq _021F48A6\n    mov r0, #2\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0xe4\n    mov r3, #0x5c\n    bl ov18_021F1294\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov18_021F118C\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov18_021F11C0\n    mov r0, #2\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #1\n    mov r2, #0xdc\n    mov r3, #0x7c\n    bl ov18_021F1294\n    add r0, r5, #0\n    add r1, r4, #1\n    mov r2, #0\n    bl ov18_021F118C\n    add r0, r5, #0\n    add r1, r4, #1\n    mov r2, #1\n    bl ov18_021F11C0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F48AC(void) {
    /* Original at 0x021F48AC */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    mov r2, #1\n    add r5, r0, #0\n    add r6, r1, #0\n    add r4, r3, #0\n    tst r1, r2\n    beq _021F48E4\n    add r1, r7, #0\n    tst r1, r2\n    beq _021F48CC\n    add r1, r4, #0\n    mov r2, #0\n    bl ov18_021F11C0\n    b _021F48E2\n    add r1, r4, #0\n    bl ov18_021F11C0\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    ldr r1, [sp, #0x18]\n    bl ManagedSprite_SetPaletteOverride\n    add r4, r4, #1\n    mov r0, #2\n    add r1, r6, #0\n    tst r1, r0\n    beq _021F4918\n    tst r0, r7\n    beq _021F48FC\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov18_021F11C0\n    b _021F4916\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov18_021F11C0\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    ldr r1, [sp, #0x18]\n    bl ManagedSprite_SetPaletteOverride\n    add r4, r4, #1\n    mov r0, #4\n    add r1, r6, #0\n    tst r1, r0\n    beq _021F496C\n    tst r0, r7\n    beq _021F493A\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r5, #0\n    add r1, r4, #1\n    mov r2, #0\n    bl ov18_021F11C0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r5, #0\n    add r1, r4, #1\n    mov r2, #1\n    bl ov18_021F11C0\n    lsl r4, r4, #2\n    mov r0, #0x67\n    ldr r6, [sp, #0x18]\n    add r1, r5, r4\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, r6, #0\n    bl ManagedSprite_SetPaletteOverride\n    ldr r0, _021F4970 ; =0x00000674\n    add r1, r5, r4\n    ldr r0, [r1, r0]\n    add r1, r6, #0\n    bl ManagedSprite_SetPaletteOverride\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F4970: .word 0x00000674"
    );
    #endif
}

void ov18_021F4974(void) {
    /* Original at 0x021F4974 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    str r0, [sp, #4]\n    add r0, r5, #4\n    add r6, r2, #0\n    add r7, r3, #0\n    str r0, [sp, #8]\n    cmp r5, r0\n    bhs _021F49EE\n    ldr r0, [sp, #4]\n    lsl r1, r5, #2\n    add r4, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ManagedSprite_GetDrawFlag\n    cmp r0, #0\n    beq _021F49E4\n    mov r0, #2\n    str r0, [sp]\n    add r2, sp, #0xc\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    add r2, #2\n    add r3, sp, #0xc\n    bl ov18_021F12C8\n    ldr r0, _021F49F4 ; =ov18_021FA3B0\n    add r2, sp, #0xc\n    ldrb r0, [r0]\n    mov r1, #2\n    ldrsh r2, [r2, r1]\n    lsr r0, r0, #1\n    sub r1, r2, r0\n    cmp r6, r1\n    blt _021F49E4\n    add r0, r2, r0\n    cmp r6, r0\n    bge _021F49E4\n    ldr r0, _021F49F4 ; =ov18_021FA3B0\n    add r2, sp, #0xc\n    ldrb r0, [r0, #1]\n    mov r1, #0\n    ldrsh r2, [r2, r1]\n    lsr r0, r0, #1\n    sub r1, r2, r0\n    cmp r7, r1\n    blt _021F49E4\n    add r0, r2, r0\n    cmp r7, r0\n    bge _021F49E4\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, r0\n    blo _021F498E\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F49F4: .word ov18_021FA3B0"
    );
    #endif
}

void ov18_021F49F8(void) {
    /* Original at 0x021F49F8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    bl ov18_021F4A6C\n    mov r6, #1\n    mov r4, #0x34\n    add r5, r7, #4\n    add r2, r4, #0\n    ldr r1, _021F4A4C ; =ov18_021FA7B0\n    sub r2, #0x34\n    add r0, r7, #0\n    add r1, r1, r2\n    bl ov18_021F11EC\n    mov r1, #0x67\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r6, r6, #1\n    add r4, #0x34\n    add r5, r5, #4\n    cmp r6, #0xa\n    blo _021F4A06\n    add r0, r7, #0\n    bl ov18_021F4D64\n    add r0, r7, #0\n    bl ov18_021F4DDC\n    add r0, r7, #0\n    bl ov18_021F4E28\n    add r0, r7, #0\n    mov r1, #3\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r7, #0\n    mov r1, #5\n    mov r2, #0\n    bl ov18_021F11C0\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F4A4C: .word ov18_021FA7B0"
    );
    #endif
}

void ov18_021F4A50(void) {
    /* Original at 0x021F4A50 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #1\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F10E8\n    add r4, r4, #1\n    cmp r4, #0xa\n    blo _021F4A56\n    add r0, r5, #0\n    bl ov18_021F4CC4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021F4A6C(void) {
    /* Original at 0x021F4A6C */
    /* Requires manual decompilation - 270 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    mov r1, #1\n    add r4, r0, #0\n    bl ov18_021F1324\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F4C98 ; =0x0000C551\n    ldr r1, _021F4C9C ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F4CA0 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x4c\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    bl sub_02074490\n    ldr r2, _021F4CA4 ; =0x00000858\n    ldr r3, _021F4C9C ; =0x00000668\n    ldr r1, [r4, r2]\n    sub r2, #8\n    str r1, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r1, #3\n    str r1, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _021F4C98 ; =0x0000C551\n    str r0, [sp, #0x14]\n    ldr r0, [r4, r2]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r3, [r4, r3]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F4CA8 ; =0x0000C55A\n    ldr r1, _021F4C9C ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F4CA0 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x6a\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F4CA8 ; =0x0000C55A\n    ldr r1, _021F4C9C ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F4CA0 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x6b\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F4CAC ; =0x0000C55B\n    ldr r1, _021F4C9C ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F4CA0 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x70\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F4CAC ; =0x0000C55B\n    ldr r1, _021F4C9C ; =0x00000668\n    str r0, [sp, #4]\n    ldr r2, _021F4CA0 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x71\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    ldr r0, [r4]\n    ldr r0, [r0, #4]\n    bl PlayerProfile_GetTrainerGender\n    cmp r0, #0\n    ldr r1, _021F4C9C ; =0x00000668\n    bne _021F4BE8\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F4CB0 ; =0x0000C59B\n    ldr r2, _021F4CA0 ; =0x00000854\n    str r0, [sp, #8]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x69\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F4CB4 ; =0x0000C59C\n    ldr r1, _021F4C9C ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F4CA0 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x69\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F4CB8 ; =0x0000C59D\n    ldr r1, _021F4C9C ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F4CA0 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x6f\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r0, _021F4CA0 ; =0x00000854\n    ldr r3, _021F4C9C ; =0x00000668\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp]\n    mov r1, #0x6c\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #1\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, _021F4CBC ; =0x0000C55D\n    str r1, [sp, #0x14]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #2\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    ldr r0, _021F4CA0 ; =0x00000854\n    ldr r3, _021F4C9C ; =0x00000668\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp]\n    mov r1, #0x6c\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #1\n    str r1, [sp, #0xc]\n    mov r1, #2\n    str r1, [sp, #0x10]\n    ldr r1, _021F4CC0 ; =0x0000C55E\n    str r1, [sp, #0x14]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    add sp, #0x18\n    pop {r4, pc}\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F4CB0 ; =0x0000C59B\n    ldr r2, _021F4CA0 ; =0x00000854\n    str r0, [sp, #8]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x6d\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F4CB4 ; =0x0000C59C\n    ldr r1, _021F4C9C ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F4CA0 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x6d\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F4CB8 ; =0x0000C59D\n    ldr r1, _021F4C9C ; =0x00000668\n    str r0, [sp, #8]\n    ldr r2, _021F4CA0 ; =0x00000854\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    mov r3, #0x72\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r0, _021F4CA0 ; =0x00000854\n    ldr r3, _021F4C9C ; =0x00000668\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp]\n    mov r1, #0x6e\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #1\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, _021F4CBC ; =0x0000C55D\n    str r1, [sp, #0x14]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #2\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    ldr r0, _021F4CA0 ; =0x00000854\n    ldr r3, _021F4C9C ; =0x00000668\n    ldr r1, [r4, r0]\n    sub r0, r0, #4\n    str r1, [sp]\n    mov r1, #0x6e\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #1\n    str r1, [sp, #0xc]\n    mov r1, #2\n    str r1, [sp, #0x10]\n    ldr r1, _021F4CC0 ; =0x0000C55E\n    str r1, [sp, #0x14]\n    ldr r2, [r4, r3]\n    add r3, r3, #4\n    ldr r0, [r4, r0]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    add sp, #0x18\n    pop {r4, pc}\n    _021F4C98: .word 0x0000C551\n    _021F4C9C: .word 0x00000668\n    _021F4CA0: .word 0x00000854\n    _021F4CA4: .word 0x00000858\n    _021F4CA8: .word 0x0000C55A\n    _021F4CAC: .word 0x0000C55B\n    _021F4CB0: .word 0x0000C59B\n    _021F4CB4: .word 0x0000C59C\n    _021F4CB8: .word 0x0000C59D\n    _021F4CBC: .word 0x0000C55D\n    _021F4CC0: .word 0x0000C55E"
    );
    #endif
}

void ov18_021F4CC4(void) {
    /* Original at 0x021F4CC4 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #1\n    add r4, r0, #0\n    bl ov18_021F13DC\n    ldr r0, _021F4D40 ; =0x0000066C\n    ldr r1, _021F4D44 ; =0x0000C551\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F4D40 ; =0x0000066C\n    ldr r1, _021F4D44 ; =0x0000C551\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F4D40 ; =0x0000066C\n    ldr r1, _021F4D48 ; =0x0000C55A\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F4D40 ; =0x0000066C\n    ldr r1, _021F4D48 ; =0x0000C55A\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    ldr r0, _021F4D40 ; =0x0000066C\n    ldr r1, _021F4D4C ; =0x0000C55B\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, _021F4D40 ; =0x0000066C\n    ldr r1, _021F4D4C ; =0x0000C55B\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadAnimObjById\n    ldr r0, _021F4D40 ; =0x0000066C\n    ldr r1, _021F4D50 ; =0x0000C59B\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F4D40 ; =0x0000066C\n    ldr r1, _021F4D54 ; =0x0000C59C\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F4D40 ; =0x0000066C\n    ldr r1, _021F4D58 ; =0x0000C59D\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, _021F4D40 ; =0x0000066C\n    ldr r1, _021F4D5C ; =0x0000C55D\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, _021F4D40 ; =0x0000066C\n    ldr r1, _021F4D60 ; =0x0000C55E\n    ldr r0, [r4, r0]\n    bl SpriteManager_UnloadPlttObjById\n    pop {r4, pc}\n    nop\n    _021F4D40: .word 0x0000066C\n    _021F4D44: .word 0x0000C551\n    _021F4D48: .word 0x0000C55A\n    _021F4D4C: .word 0x0000C55B\n    _021F4D50: .word 0x0000C59B\n    _021F4D54: .word 0x0000C59C\n    _021F4D58: .word 0x0000C59D\n    _021F4D5C: .word 0x0000C55D\n    _021F4D60: .word 0x0000C55E"
    );
    #endif
}

void ov18_021F4D64(void) {
    /* Original at 0x021F4D64 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _021F4DD0 ; =0x000018A4\n    add r5, r0, #0\n    ldrb r3, [r5, r1]\n    mov r0, #0x80\n    add r2, r3, #0\n    tst r2, r0\n    beq _021F4D8E\n    eor r0, r3\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    sub r0, r1, #2\n    ldrh r0, [r5, r0]\n    cmp r0, #0xac\n    bne _021F4D90\n    cmp r4, #2\n    bne _021F4D8A\n    mov r4, #1\n    b _021F4D90\n    mov r4, #0\n    b _021F4D90\n    mov r4, #0\n    ldr r1, _021F4DD4 ; =0x000018A2\n    add r0, r5, #0\n    ldrh r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #2\n    bl ov18_021F14FC\n    ldr r1, _021F4DD4 ; =0x000018A2\n    add r0, r5, #0\n    ldrh r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #3\n    bl ov18_021F1534\n    ldr r0, _021F4DD8 ; =0x0000068C\n    mov r1, #2\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetAffineOverwriteMode\n    ldr r0, _021F4DD8 ; =0x0000068C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetAffineZRotation\n    ldr r0, _021F4DD8 ; =0x0000068C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    sub r2, r1, #4\n    bl ManagedSprite_SetAffineTranslation\n    pop {r3, r4, r5, pc}\n    nop\n    _021F4DD0: .word 0x000018A4\n    _021F4DD4: .word 0x000018A2\n    _021F4DD8: .word 0x0000068C"
    );
    #endif
}

void ov18_021F4DDC(void) {
    /* Original at 0x021F4DDC */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r2, sp, #4\n    mov r1, #0\n    add r2, #1\n    add r3, sp, #4\n    add r5, r0, #0\n    bl ov18_021F3CA8\n    ldr r1, _021F4E20 ; =0x000018CC\n    mov r0, #2\n    add r4, r5, r1\n    str r0, [sp]\n    sub r1, #0x2a\n    add r3, sp, #4\n    ldrb r2, [r3, #1]\n    ldrh r1, [r5, r1]\n    ldrb r3, [r3]\n    add r0, r5, #0\n    bl ov18_021F69E8\n    ldr r0, _021F4E24 ; =0x000018A2\n    ldr r1, [r4, #8]\n    ldrh r0, [r5, r0]\n    ldr r2, [r4, #0xc]\n    lsl r3, r0, #1\n    ldrsh r1, [r1, r3]\n    ldrsh r2, [r2, r3]\n    add r0, r5, #0\n    bl ov18_021F6AB0\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _021F4E20: .word 0x000018CC\n    _021F4E24: .word 0x000018A2"
    );
    #endif
}

void ov18_021F4E28(void) {
    /* Original at 0x021F4E28 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    ldr r1, _021F4EA4 ; =0x000018CC\n    add r4, r0, #0\n    add r2, r4, r1\n    sub r1, #0x2a\n    ldrh r1, [r4, r1]\n    ldr r2, [r2, #4]\n    mov r0, #1\n    lsl r1, r1, #1\n    ldrsh r1, [r2, r1]\n    lsl r0, r0, #0x14\n    lsl r1, r1, #0xc\n    bl FX_Div\n    bl _fflt\n    ldr r1, _021F4EA8 ; =0x45800000\n    bl _fdiv\n    add r5, r0, #0\n    ldr r0, _021F4EAC ; =0x00000674\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAffineOverwriteMode\n    ldr r0, _021F4EAC ; =0x00000674\n    add r1, r5, #0\n    ldr r0, [r4, r0]\n    add r2, r5, #0\n    bl ManagedSprite_SetAffineScale\n    mov r0, #2\n    add r2, sp, #4\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #1\n    add r2, #2\n    add r3, sp, #4\n    bl ov18_021F12C8\n    mov r2, #2\n    ldr r6, _021F4EA4 ; =0x000018CC\n    str r2, [sp]\n    add r5, sp, #4\n    mov r3, #0\n    ldrsh r2, [r5, r2]\n    ldrsh r5, [r5, r3]\n    ldr r3, [r4, r6]\n    sub r6, #0x2a\n    add r0, r4, #0\n    ldrh r4, [r4, r6]\n    mov r1, #1\n    lsl r4, r4, #1\n    ldrsh r3, [r3, r4]\n    add r3, r5, r3\n    lsl r3, r3, #0x10\n    asr r3, r3, #0x10\n    bl ov18_021F1294\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _021F4EA4: .word 0x000018CC\n    _021F4EA8: .word 0x45800000\n    _021F4EAC: .word 0x00000674"
    );
    #endif
}

void ov18_021F4EB0(void) {
    /* Original at 0x021F4EB0 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    asr r0, r0, #4\n    lsl r6, r0, #1\n    add r5, r1, #0\n    ldr r0, _021F4F90 ; =FX_SinCosTable_\n    lsl r1, r6, #1\n    ldrsh r7, [r0, r1]\n    add r4, r2, #0\n    add r0, r7, #0\n    bl _fflt\n    ldr r1, _021F4F94 ; =0x45800000\n    bl _fdiv\n    mov r1, #0\n    bl _fgr\n    bls _021F4EF4\n    add r0, r7, #0\n    bl _fflt\n    ldr r1, _021F4F94 ; =0x45800000\n    bl _fdiv\n    add r1, r0, #0\n    ldr r0, _021F4F94 ; =0x45800000\n    bl _fmul\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021F4F10\n    add r0, r7, #0\n    bl _fflt\n    ldr r1, _021F4F94 ; =0x45800000\n    bl _fdiv\n    add r1, r0, #0\n    ldr r0, _021F4F94 ; =0x45800000\n    bl _fmul\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r7, r0, #0\n    add r0, r6, #1\n    lsl r1, r0, #1\n    ldr r0, _021F4F90 ; =FX_SinCosTable_\n    ldrsh r6, [r0, r1]\n    add r0, r6, #0\n    bl _fflt\n    ldr r1, _021F4F94 ; =0x45800000\n    bl _fdiv\n    mov r1, #0\n    bl _fgr\n    bls _021F4F52\n    add r0, r6, #0\n    bl _fflt\n    ldr r1, _021F4F94 ; =0x45800000\n    bl _fdiv\n    add r1, r0, #0\n    ldr r0, _021F4F94 ; =0x45800000\n    bl _fmul\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021F4F6E\n    add r0, r6, #0\n    bl _fflt\n    ldr r1, _021F4F94 ; =0x45800000\n    bl _fdiv\n    add r1, r0, #0\n    ldr r0, _021F4F94 ; =0x45800000\n    bl _fmul\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    mov r2, #0\n    ldrsh r1, [r5, r2]\n    mov r3, #0x38\n    add r6, r7, #0\n    mul r6, r3\n    asr r6, r6, #0xc\n    add r1, r1, r6\n    strh r1, [r5]\n    add r1, r0, #0\n    mul r1, r3\n    ldrsh r2, [r4, r2]\n    asr r0, r1, #0xc\n    add r0, r2, r0\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F4F90: .word FX_SinCosTable_\n    _021F4F94: .word 0x45800000"
    );
    #endif
}

void ov18_021F4F98(void) {
    /* Original at 0x021F4F98 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r2, #0\n    add r1, sp, #0x1c\n    add r2, sp, #0x20\n    bl ov18_021F4EB0\n    mov r0, #1\n    str r0, [sp]\n    add r1, r4, #0\n    add r4, sp, #0x10\n    mov r2, #0xc\n    mov r3, #0x10\n    ldrsh r2, [r4, r2]\n    ldrsh r3, [r4, r3]\n    add r0, r5, #0\n    bl ov18_021F1294\n    pop {r3, r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov18_021F4FC8(void) {
    /* Original at 0x021F4FC8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r1, #0\n    mov r1, #1\n    str r1, [sp]\n    add r1, r2, #0\n    add r2, sp, #4\n    add r2, #2\n    add r3, sp, #4\n    add r5, r0, #0\n    bl ov18_021F12C8\n    add r6, sp, #4\n    mov r3, #0\n    ldrsh r0, [r6, r3]\n    mov r2, #2\n    add r1, r4, #0\n    sub r0, #0x10\n    strh r0, [r6]\n    mov r0, #1\n    str r0, [sp]\n    ldrsh r2, [r6, r2]\n    ldrsh r3, [r6, r3]\n    add r0, r5, #0\n    bl ov18_021F1294\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F5000(void) {
    /* Original at 0x021F5000 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r2, _021F5048 ; =0xFFFFC000\n    add r4, r1, #0\n    sub r2, r2, r4\n    mov r1, #0x68\n    lsl r2, r2, #0x10\n    str r1, [sp]\n    mov r1, #8\n    lsr r2, r2, #0x10\n    mov r3, #0x80\n    add r5, r0, #0\n    bl ov18_021F4F98\n    mov r2, #1\n    lsl r2, r2, #0xe\n    sub r2, r2, r4\n    mov r0, #0x68\n    lsl r2, r2, #0x10\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #9\n    lsr r2, r2, #0x10\n    mov r3, #0x80\n    bl ov18_021F4F98\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #8\n    bl ov18_021F4FC8\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #9\n    bl ov18_021F4FC8\n    pop {r3, r4, r5, pc}\n    _021F5048: .word 0xFFFFC000"
    );
    #endif
}

void ov18_021F504C(void) {
    /* Original at 0x021F504C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    str r5, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    strb r0, [r4, #0xb]\n    ldr r0, [r5]\n    ldr r0, [r0, #4]\n    bl PlayerProfile_GetTrainerGender\n    cmp r0, #0\n    bne _021F506C\n    mov r0, #0x19\n    lsl r0, r0, #4\n    b _021F506E\n    ldr r0, _021F50B4 ; =0x0000019A\n    ldr r1, _021F50B8 ; =0x0000184C\n    ldr r2, [r5, r1]\n    add r1, #0x56\n    ldrh r1, [r5, r1]\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    cmp r1, r0\n    blo _021F5086\n    add r2, r0, #0\n    add r0, r1, #0\n    mov r1, #0\n    b _021F508A\n    add r2, r1, #0\n    mov r1, #1\n    strb r1, [r4, #0xa]\n    sub r0, r0, r2\n    mov r1, #0xa\n    bl _u32_div_f\n    ldr r3, _021F50BC ; =ov18_021FA5CC\n    mov r2, #0\n    ldrh r1, [r3]\n    cmp r0, r1\n    blo _021F50A8\n    ldrh r1, [r3, #2]\n    cmp r0, r1\n    bhi _021F50A8\n    strh r2, [r4, #8]\n    pop {r3, r4, r5, pc}\n    add r2, r2, #1\n    add r3, r3, #4\n    cmp r2, #0x11\n    blo _021F5098\n    pop {r3, r4, r5, pc}\n    nop\n    _021F50B4: .word 0x0000019A\n    _021F50B8: .word 0x0000184C\n    _021F50BC: .word ov18_021FA5CC"
    );
    #endif
}

void ov18_021F50C0(void) {
    /* Original at 0x021F50C0 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r2, sp, #8\n    ldr r0, [r4]\n    mov r1, #2\n    add r2, #2\n    add r3, sp, #8\n    bl ov18_021F12C8\n    mov r0, #1\n    str r0, [sp]\n    add r2, sp, #4\n    ldr r0, [r4]\n    mov r1, #4\n    add r2, #2\n    add r3, sp, #4\n    bl ov18_021F12C8\n    mov r0, #1\n    ldr r1, [r4, #4]\n    lsl r0, r0, #0xa\n    add r0, r1, r0\n    str r0, [r4, #4]\n    add r2, sp, #4\n    mov r1, #4\n    ldrsh r3, [r2, r1]\n    asr r0, r0, #0xc\n    add r0, r3, r0\n    strh r0, [r2, #4]\n    mov r0, #0\n    ldrsh r3, [r2, r0]\n    ldr r0, [r4, #4]\n    asr r0, r0, #0xc\n    add r0, r3, r0\n    strh r0, [r2]\n    ldrsh r3, [r2, r1]\n    cmp r3, #0x58\n    blt _021F513E\n    mov r0, #1\n    str r0, [sp]\n    mov r3, #6\n    ldrsh r2, [r2, r3]\n    ldr r0, [r4]\n    mov r1, #2\n    mov r3, #0x58\n    bl ov18_021F1294\n    mov r0, #1\n    str r0, [sp]\n    add r3, sp, #4\n    mov r2, #2\n    ldrsh r2, [r3, r2]\n    ldr r0, [r4]\n    mov r1, #4\n    mov r3, #0x58\n    bl ov18_021F1294\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, pc}\n    mov r0, #1\n    str r0, [sp]\n    mov r5, #6\n    ldrsh r2, [r2, r5]\n    ldr r0, [r4]\n    mov r1, #2\n    bl ov18_021F1294\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r4]\n    add r4, sp, #4\n    mov r2, #2\n    mov r3, #0\n    ldrsh r2, [r4, r2]\n    ldrsh r3, [r4, r3]\n    mov r1, #4\n    bl ov18_021F1294\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov18_021F516C(void) {
    /* Original at 0x021F516C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r1, [r0, #8]\n    lsl r2, r1, #2\n    ldr r1, _021F517C ; =ov18_021FA588\n    ldr r1, [r1, r2]\n    blx r1\n    pop {r3, pc}\n    nop\n    _021F517C: .word ov18_021FA588"
    );
    #endif
}

void ov18_021F5180(void) {
    /* Original at 0x021F5180 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r3, [r0, #0xa]\n    cmp r3, #0\n    bne _021F518E\n    neg r1, r1\n    str r1, [r0, #0xc]\n    str r2, [r0, #0x10]\n    bx lr\n    str r1, [r0, #0xc]\n    neg r1, r2\n    str r1, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov18_021F5198(void) {
    /* Original at 0x021F5198 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldrb r4, [r0, #0xa]\n    cmp r4, #0\n    bne _021F51B0\n    neg r1, r1\n    str r1, [r0, #0xc]\n    neg r1, r2\n    str r1, [r0, #0x10]\n    neg r1, r3\n    str r1, [r0, #0x14]\n    pop {r3, r4}\n    bx lr\n    str r1, [r0, #0xc]\n    str r2, [r0, #0x10]\n    str r3, [r0, #0x14]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov18_021F51BC(void) {
    PlaySE();
}

void ov18_021F51CC(void) {
    /* Original at 0x021F51CC */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #0\n    beq _021F51DC\n    cmp r0, #1\n    beq _021F51FA\n    b _021F522A\n    ldr r0, _021F5230 ; =0x000008EB\n    bl PlaySE\n    mov r2, #0x1f\n    mvn r2, r2\n    mov r1, #1\n    add r3, r2, #0\n    add r0, r4, #0\n    lsl r1, r1, #8\n    sub r3, #0xc0\n    bl ov18_021F5198\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F5234 ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F5234 ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r1, r1, r0\n    str r1, [r4, #0xc]\n    ldr r0, [r4, #0x14]\n    cmp r1, r0\n    bne _021F522A\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _021F5230: .word 0x000008EB\n    _021F5234: .word 0x0000068C"
    );
    #endif
}

void ov18_021F5238(void) {
    /* Original at 0x021F5238 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #0\n    beq _021F5248\n    cmp r0, #1\n    beq _021F5266\n    b _021F5296\n    ldr r0, _021F529C ; =0x000008EB\n    bl PlaySE\n    mov r2, #0x1f\n    mvn r2, r2\n    mov r1, #0x12\n    add r3, r2, #0\n    add r0, r4, #0\n    lsl r1, r1, #4\n    sub r3, #0xe0\n    bl ov18_021F5198\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F52A0 ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F52A0 ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r1, r1, r0\n    str r1, [r4, #0xc]\n    ldr r0, [r4, #0x14]\n    cmp r1, r0\n    bne _021F5296\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _021F529C: .word 0x000008EB\n    _021F52A0: .word 0x0000068C"
    );
    #endif
}

void ov18_021F52A4(void) {
    /* Original at 0x021F52A4 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #0\n    beq _021F52B4\n    cmp r0, #1\n    beq _021F52D0\n    b _021F5300\n    ldr r0, _021F5304 ; =0x000008EB\n    bl PlaySE\n    mov r1, #5\n    mov r2, #0x1f\n    ldr r3, _021F5308 ; =0xFFFFFEE0\n    add r0, r4, #0\n    lsl r1, r1, #6\n    mvn r2, r2\n    bl ov18_021F5198\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F530C ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F530C ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r1, r1, r0\n    str r1, [r4, #0xc]\n    ldr r0, [r4, #0x14]\n    cmp r1, r0\n    bne _021F5300\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    _021F5304: .word 0x000008EB\n    _021F5308: .word 0xFFFFFEE0\n    _021F530C: .word 0x0000068C"
    );
    #endif
}

void ov18_021F5310(void) {
    /* Original at 0x021F5310 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #0\n    beq _021F5320\n    cmp r0, #1\n    beq _021F533C\n    b _021F536C\n    ldr r0, _021F5370 ; =0x000008EB\n    bl PlaySE\n    mov r1, #0x16\n    mov r2, #0x1f\n    ldr r3, _021F5374 ; =0xFFFFFEC0\n    add r0, r4, #0\n    lsl r1, r1, #4\n    mvn r2, r2\n    bl ov18_021F5198\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F5378 ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F5378 ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r1, r1, r0\n    str r1, [r4, #0xc]\n    ldr r0, [r4, #0x14]\n    cmp r1, r0\n    bne _021F536C\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    _021F5370: .word 0x000008EB\n    _021F5374: .word 0xFFFFFEC0\n    _021F5378: .word 0x0000068C"
    );
    #endif
}

void ov18_021F537C(void) {
    /* Original at 0x021F537C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #0\n    beq _021F538C\n    cmp r0, #1\n    beq _021F53A8\n    b _021F53D8\n    ldr r0, _021F53DC ; =0x000008EB\n    bl PlaySE\n    mov r1, #6\n    mov r2, #0x1f\n    ldr r3, _021F53E0 ; =0xFFFFFEA0\n    add r0, r4, #0\n    lsl r1, r1, #6\n    mvn r2, r2\n    bl ov18_021F5198\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F53E4 ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F53E4 ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r1, r1, r0\n    str r1, [r4, #0xc]\n    ldr r0, [r4, #0x14]\n    cmp r1, r0\n    bne _021F53D8\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    _021F53DC: .word 0x000008EB\n    _021F53E0: .word 0xFFFFFEA0\n    _021F53E4: .word 0x0000068C"
    );
    #endif
}

void ov18_021F53E8(void) {
    /* Original at 0x021F53E8 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #0\n    beq _021F53F8\n    cmp r0, #1\n    beq _021F5414\n    b _021F5444\n    ldr r0, _021F5448 ; =0x000008EB\n    bl PlaySE\n    mov r1, #7\n    mov r2, #0x3f\n    ldr r3, _021F544C ; =0xFFFFFEC0\n    add r0, r4, #0\n    lsl r1, r1, #6\n    mvn r2, r2\n    bl ov18_021F5198\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F5450 ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F5450 ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r1, r1, r0\n    str r1, [r4, #0xc]\n    ldr r0, [r4, #0x14]\n    cmp r1, r0\n    bne _021F5444\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    _021F5448: .word 0x000008EB\n    _021F544C: .word 0xFFFFFEC0\n    _021F5450: .word 0x0000068C"
    );
    #endif
}

void ov18_021F5454(void) {
    /* Original at 0x021F5454 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #0\n    beq _021F5464\n    cmp r0, #1\n    beq _021F5480\n    b _021F54B0\n    ldr r0, _021F54B4 ; =0x000008EB\n    bl PlaySE\n    mov r1, #2\n    mov r2, #0x3f\n    ldr r3, _021F54B8 ; =0xFFFFFE80\n    add r0, r4, #0\n    lsl r1, r1, #8\n    mvn r2, r2\n    bl ov18_021F5198\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F54BC ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F54BC ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r1, r1, r0\n    str r1, [r4, #0xc]\n    ldr r0, [r4, #0x14]\n    cmp r1, r0\n    bne _021F54B0\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    _021F54B4: .word 0x000008EB\n    _021F54B8: .word 0xFFFFFE80\n    _021F54BC: .word 0x0000068C"
    );
    #endif
}

void ov18_021F54C0(void) {
    /* Original at 0x021F54C0 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    strh r1, [r4, #0x18]\n    strh r2, [r4, #0x1a]\n    mov r0, #1\n    str r0, [sp]\n    add r2, sp, #8\n    ldr r0, [r4]\n    mov r1, #2\n    add r2, #2\n    add r3, sp, #8\n    bl ov18_021F12C8\n    mov r0, #1\n    str r0, [sp]\n    add r2, sp, #4\n    ldr r0, [r4]\n    mov r1, #4\n    add r2, #2\n    add r3, sp, #4\n    bl ov18_021F12C8\n    add r1, sp, #4\n    mov r2, #4\n    mov r0, #0\n    ldrsh r3, [r1, r2]\n    ldrsh r0, [r1, r0]\n    cmp r3, r0\n    bge _021F552E\n    mov r0, #2\n    strh r0, [r4, #0x1c]\n    mov r0, #8\n    strh r0, [r4, #0x1e]\n    ldr r0, [r4]\n    mov r1, #3\n    mov r2, #1\n    bl ov18_021F11C0\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, [r4]\n    add r4, sp, #4\n    mov r3, #4\n    ldrsh r3, [r4, r3]\n    mov r2, #6\n    ldrsh r2, [r4, r2]\n    add r3, #0xc0\n    lsl r3, r3, #0x10\n    mov r1, #3\n    asr r3, r3, #0x10\n    bl ov18_021F1294\n    add sp, #0xc\n    pop {r3, r4, pc}\n    strh r2, [r4, #0x1c]\n    mov r0, #9\n    strh r0, [r4, #0x1e]\n    ldr r0, [r4]\n    mov r1, #5\n    mov r2, #1\n    bl ov18_021F11C0\n    mov r2, #2\n    str r2, [sp]\n    ldr r0, [r4]\n    add r4, sp, #4\n    mov r3, #0\n    ldrsh r3, [r4, r3]\n    ldrsh r2, [r4, r2]\n    mov r1, #5\n    add r3, #0xc0\n    lsl r3, r3, #0x10\n    asr r3, r3, #0x10\n    bl ov18_021F1294\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov18_021F555C(void) {
    /* Original at 0x021F555C */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r2, sp, #4\n    ldrh r1, [r4, #0x1c]\n    ldr r0, [r4]\n    add r2, #2\n    add r3, sp, #4\n    bl ov18_021F12C8\n    mov r0, #0x18\n    add r5, sp, #4\n    mov r3, #0\n    ldrsh r1, [r5, r3]\n    ldrsh r0, [r4, r0]\n    mov r2, #2\n    add r0, r1, r0\n    strh r0, [r5]\n    mov r0, #1\n    str r0, [sp]\n    ldrh r1, [r4, #0x1c]\n    ldrsh r2, [r5, r2]\n    ldrsh r3, [r5, r3]\n    ldr r0, [r4]\n    bl ov18_021F1294\n    mov r0, #2\n    str r0, [sp]\n    ldrh r1, [r4, #0x1c]\n    add r2, sp, #4\n    ldr r0, [r4]\n    add r1, r1, #1\n    add r2, #2\n    add r3, sp, #4\n    bl ov18_021F12C8\n    mov r3, #0\n    mov r0, #0x18\n    ldrsh r1, [r5, r3]\n    ldrsh r0, [r4, r0]\n    mov r2, #2\n    add r0, r1, r0\n    strh r0, [r5]\n    str r2, [sp]\n    ldrh r1, [r4, #0x1c]\n    ldrsh r2, [r5, r2]\n    ldrsh r3, [r5, r3]\n    ldr r0, [r4]\n    add r1, r1, #1\n    bl ov18_021F1294\n    mov r0, #0x18\n    ldrsh r1, [r4, r0]\n    mov r0, #0x1a\n    ldrsh r0, [r4, r0]\n    add r0, r1, r0\n    strh r0, [r4, #0x18]\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021F55D8(void) {
    /* Original at 0x021F55D8 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov18_021F555C\n    mov r0, #1\n    str r0, [sp]\n    add r2, sp, #8\n    ldrh r1, [r4, #0x1c]\n    ldr r0, [r4]\n    add r2, #2\n    add r3, sp, #8\n    bl ov18_021F12C8\n    mov r0, #1\n    str r0, [sp]\n    add r2, sp, #4\n    ldrh r1, [r4, #0x1e]\n    ldr r0, [r4]\n    add r2, #2\n    add r3, sp, #4\n    bl ov18_021F12C8\n    add r2, sp, #4\n    mov r0, #0\n    ldrsh r3, [r2, r0]\n    mov r0, #4\n    ldrsh r0, [r2, r0]\n    sub r3, #0x10\n    cmp r0, r3\n    blt _021F5630\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r4]\n    ldrh r1, [r4, #0x1c]\n    mov r4, #2\n    lsl r3, r3, #0x10\n    ldrsh r2, [r2, r4]\n    asr r3, r3, #0x10\n    bl ov18_021F1294\n    add sp, #0xc\n    mov r0, #0\n    pop {r3, r4, pc}\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov18_021F5638(void) {
    /* Original at 0x021F5638 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0xb]\n    cmp r0, #0\n    beq _021F5648\n    cmp r0, #1\n    beq _021F5660\n    b _021F56CE\n    ldr r0, _021F56D4 ; =0x000008EB\n    bl PlaySE\n    mov r1, #3\n    add r0, r5, #0\n    lsl r1, r1, #8\n    mov r2, #0\n    bl ov18_021F5180\n    ldrb r0, [r5, #0xb]\n    add r0, r0, #1\n    strb r0, [r5, #0xb]\n    ldr r1, [r5]\n    ldr r0, _021F56D8 ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r5, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r5]\n    ldr r0, _021F56D8 ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r4, r0, #0\n    ldr r0, [r5]\n    add r1, r4, #0\n    bl ov18_021F5000\n    ldr r1, [r5, #0xc]\n    ldr r0, [r5, #0x10]\n    add r0, r1, r0\n    str r0, [r5, #0xc]\n    ldrb r0, [r5, #0xa]\n    cmp r0, #0\n    bne _021F56AE\n    mov r1, #0xf6\n    lsl r1, r1, #8\n    cmp r4, r1\n    bhi _021F56CE\n    ldr r2, [r5]\n    ldr r0, _021F56D8 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xf6\n    ldr r0, [r5]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r1, #0xa\n    lsl r1, r1, #8\n    cmp r4, r1\n    blo _021F56CE\n    ldr r2, [r5]\n    ldr r0, _021F56D8 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xa\n    ldr r0, [r5]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021F56D4: .word 0x000008EB\n    _021F56D8: .word 0x0000068C"
    );
    #endif
}

void ov18_021F56DC(void) {
    /* Original at 0x021F56DC */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #3\n    bhi _021F57A6\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    ov18_021F56F2: ; jump table\n    ldr r0, _021F57AC ; =0x000008EC\n    bl PlaySE\n    mov r1, #3\n    add r0, r4, #0\n    lsl r1, r1, #8\n    mov r2, #0\n    bl ov18_021F5180\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F57B0 ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F57B0 ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r0, r1, r0\n    str r0, [r4, #0xc]\n    ldrb r0, [r4, #0xa]\n    cmp r0, #0\n    bne _021F5764\n    mov r1, #0xf6\n    lsl r1, r1, #8\n    cmp r5, r1\n    bhi _021F57A6\n    ldr r2, [r4]\n    ldr r0, _021F57B0 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xf6\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    b _021F5786\n    mov r1, #0xa\n    lsl r1, r1, #8\n    cmp r5, r1\n    blo _021F57A6\n    ldr r2, [r4]\n    ldr r0, _021F57B0 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xa\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    mov r1, #3\n    add r0, r4, #0\n    mvn r1, r1\n    mov r2, #1\n    bl ov18_021F54C0\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    add r0, r4, #0\n    bl ov18_021F55D8\n    cmp r0, #0\n    bne _021F57A6\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021F57AC: .word 0x000008EC\n    _021F57B0: .word 0x0000068C"
    );
    #endif
}

void ov18_021F57B4(void) {
    /* Original at 0x021F57B4 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #3\n    bhi _021F587E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    ov18_021F57CA: ; jump table\n    ldr r0, _021F5884 ; =0x000008EC\n    bl PlaySE\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xa\n    mov r2, #0\n    bl ov18_021F5180\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F5888 ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F5888 ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r0, r1, r0\n    str r0, [r4, #0xc]\n    ldrb r0, [r4, #0xa]\n    cmp r0, #0\n    bne _021F583C\n    mov r1, #0xf6\n    lsl r1, r1, #8\n    cmp r5, r1\n    bhi _021F587E\n    ldr r2, [r4]\n    ldr r0, _021F5888 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xf6\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    b _021F585E\n    mov r1, #0xa\n    lsl r1, r1, #8\n    cmp r5, r1\n    blo _021F587E\n    ldr r2, [r4]\n    ldr r0, _021F5888 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xa\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    mov r1, #7\n    add r0, r4, #0\n    mvn r1, r1\n    mov r2, #1\n    bl ov18_021F54C0\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    add r0, r4, #0\n    bl ov18_021F55D8\n    cmp r0, #0\n    bne _021F587E\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021F5884: .word 0x000008EC\n    _021F5888: .word 0x0000068C"
    );
    #endif
}

void ov18_021F588C(void) {
    /* Original at 0x021F588C */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #3\n    bhi _021F5956\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    ov18_021F58A2: ; jump table\n    ldr r0, _021F595C ; =0x000008EC\n    bl PlaySE\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xa\n    mov r2, #0\n    bl ov18_021F5180\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F5960 ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F5960 ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r0, r1, r0\n    str r0, [r4, #0xc]\n    ldrb r0, [r4, #0xa]\n    cmp r0, #0\n    bne _021F5914\n    mov r1, #0xf6\n    lsl r1, r1, #8\n    cmp r5, r1\n    bhi _021F5956\n    ldr r2, [r4]\n    ldr r0, _021F5960 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xf6\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    b _021F5936\n    mov r1, #0xa\n    lsl r1, r1, #8\n    cmp r5, r1\n    blo _021F5956\n    ldr r2, [r4]\n    ldr r0, _021F5960 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xa\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    mov r1, #0xb\n    add r0, r4, #0\n    mvn r1, r1\n    mov r2, #1\n    bl ov18_021F54C0\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    add r0, r4, #0\n    bl ov18_021F55D8\n    cmp r0, #0\n    bne _021F5956\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021F595C: .word 0x000008EC\n    _021F5960: .word 0x0000068C"
    );
    #endif
}

void ov18_021F5964(void) {
    /* Original at 0x021F5964 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #3\n    bhi _021F5A2E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    ov18_021F597A: ; jump table\n    ldr r0, _021F5A34 ; =0x000008ED\n    bl PlaySE\n    mov r1, #5\n    add r0, r4, #0\n    lsl r1, r1, #8\n    mov r2, #0\n    bl ov18_021F5180\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F5A38 ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F5A38 ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r0, r1, r0\n    str r0, [r4, #0xc]\n    ldrb r0, [r4, #0xa]\n    cmp r0, #0\n    bne _021F59EC\n    mov r1, #0xf6\n    lsl r1, r1, #8\n    cmp r5, r1\n    bhi _021F5A2E\n    ldr r2, [r4]\n    ldr r0, _021F5A38 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xf6\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    b _021F5A0E\n    mov r1, #0xa\n    lsl r1, r1, #8\n    cmp r5, r1\n    blo _021F5A2E\n    ldr r2, [r4]\n    ldr r0, _021F5A38 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xa\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    mov r1, #0xd\n    add r0, r4, #0\n    mvn r1, r1\n    mov r2, #1\n    bl ov18_021F54C0\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    add r0, r4, #0\n    bl ov18_021F55D8\n    cmp r0, #0\n    bne _021F5A2E\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021F5A34: .word 0x000008ED\n    _021F5A38: .word 0x0000068C"
    );
    #endif
}

void ov18_021F5A3C(void) {
    /* Original at 0x021F5A3C */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #3\n    bhi _021F5B06\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    ov18_021F5A52: ; jump table\n    ldr r0, _021F5B0C ; =0x000008ED\n    bl PlaySE\n    mov r1, #5\n    add r0, r4, #0\n    lsl r1, r1, #8\n    mov r2, #0\n    bl ov18_021F5180\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F5B10 ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F5B10 ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r0, r1, r0\n    str r0, [r4, #0xc]\n    ldrb r0, [r4, #0xa]\n    cmp r0, #0\n    bne _021F5AC4\n    mov r1, #0xf6\n    lsl r1, r1, #8\n    cmp r5, r1\n    bhi _021F5B06\n    ldr r2, [r4]\n    ldr r0, _021F5B10 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xf6\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    b _021F5AE6\n    mov r1, #0xa\n    lsl r1, r1, #8\n    cmp r5, r1\n    blo _021F5B06\n    ldr r2, [r4]\n    ldr r0, _021F5B10 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xa\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    mov r1, #0x11\n    add r0, r4, #0\n    mvn r1, r1\n    mov r2, #1\n    bl ov18_021F54C0\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    add r0, r4, #0\n    bl ov18_021F55D8\n    cmp r0, #0\n    bne _021F5B06\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021F5B0C: .word 0x000008ED\n    _021F5B10: .word 0x0000068C"
    );
    #endif
}

void ov18_021F5B14(void) {
    /* Original at 0x021F5B14 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #3\n    bhi _021F5BDE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    ov18_021F5B2A: ; jump table\n    ldr r0, _021F5BE4 ; =0x000008ED\n    bl PlaySE\n    mov r1, #6\n    add r0, r4, #0\n    lsl r1, r1, #8\n    mov r2, #0\n    bl ov18_021F5180\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F5BE8 ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F5BE8 ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r0, r1, r0\n    str r0, [r4, #0xc]\n    ldrb r0, [r4, #0xa]\n    cmp r0, #0\n    bne _021F5B9C\n    mov r1, #0xf6\n    lsl r1, r1, #8\n    cmp r5, r1\n    bhi _021F5BDE\n    ldr r2, [r4]\n    ldr r0, _021F5BE8 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xf6\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    b _021F5BBE\n    mov r1, #0xa\n    lsl r1, r1, #8\n    cmp r5, r1\n    blo _021F5BDE\n    ldr r2, [r4]\n    ldr r0, _021F5BE8 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xa\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    mov r1, #0x14\n    add r0, r4, #0\n    mvn r1, r1\n    mov r2, #1\n    bl ov18_021F54C0\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    add r0, r4, #0\n    bl ov18_021F55D8\n    cmp r0, #0\n    bne _021F5BDE\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021F5BE4: .word 0x000008ED\n    _021F5BE8: .word 0x0000068C"
    );
    #endif
}

void ov18_021F5BEC(void) {
    /* Original at 0x021F5BEC */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #3\n    bhi _021F5CB6\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    ov18_021F5C02: ; jump table\n    ldr r0, _021F5CBC ; =0x000008ED\n    bl PlaySE\n    mov r1, #7\n    add r0, r4, #0\n    lsl r1, r1, #8\n    mov r2, #0\n    bl ov18_021F5180\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F5CC0 ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F5CC0 ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r0, r1, r0\n    str r0, [r4, #0xc]\n    ldrb r0, [r4, #0xa]\n    cmp r0, #0\n    bne _021F5C74\n    mov r1, #0xf6\n    lsl r1, r1, #8\n    cmp r5, r1\n    bhi _021F5CB6\n    ldr r2, [r4]\n    ldr r0, _021F5CC0 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xf6\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    b _021F5C96\n    mov r1, #0xa\n    lsl r1, r1, #8\n    cmp r5, r1\n    blo _021F5CB6\n    ldr r2, [r4]\n    ldr r0, _021F5CC0 ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xa\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    mov r1, #0x17\n    add r0, r4, #0\n    mvn r1, r1\n    mov r2, #1\n    bl ov18_021F54C0\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    add r0, r4, #0\n    bl ov18_021F55D8\n    cmp r0, #0\n    bne _021F5CB6\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021F5CBC: .word 0x000008ED\n    _021F5CC0: .word 0x0000068C"
    );
    #endif
}

void ov18_021F5CC4(void) {
    /* Original at 0x021F5CC4 */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldrb r0, [r4, #0xb]\n    cmp r0, #3\n    bhi _021F5DB2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    ov18_021F5CDC: ; jump table\n    ldr r0, _021F5DB8 ; =0x000008EE\n    bl PlaySE\n    mov r1, #2\n    add r0, r4, #0\n    lsl r1, r1, #0xa\n    mov r2, #0\n    bl ov18_021F5180\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    ldr r1, [r4]\n    ldr r0, _021F5DBC ; =0x0000068C\n    ldr r0, [r1, r0]\n    ldr r1, [r4, #0xc]\n    bl ManagedSprite_OffsetAffineZRotation\n    ldr r1, [r4]\n    ldr r0, _021F5DBC ; =0x0000068C\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetRotation\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl ov18_021F5000\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r0, r1, r0\n    str r0, [r4, #0xc]\n    ldrb r0, [r4, #0xa]\n    cmp r0, #0\n    bne _021F5D4E\n    mov r1, #0xf6\n    lsl r1, r1, #8\n    cmp r5, r1\n    bhi _021F5DB2\n    ldr r2, [r4]\n    ldr r0, _021F5DBC ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xf6\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    b _021F5D70\n    mov r1, #0xa\n    lsl r1, r1, #8\n    cmp r5, r1\n    blo _021F5DB2\n    ldr r2, [r4]\n    ldr r0, _021F5DBC ; =0x0000068C\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetAffineZRotation\n    mov r1, #0xa\n    ldr r0, [r4]\n    lsl r1, r1, #8\n    bl ov18_021F5000\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    mov r1, #0x17\n    add r0, r4, #0\n    mvn r1, r1\n    mov r2, #0\n    bl ov18_021F54C0\n    ldrb r0, [r4, #0xb]\n    add r0, r0, #1\n    strb r0, [r4, #0xb]\n    add r0, r4, #0\n    bl ov18_021F55D8\n    cmp r0, #0\n    bne _021F5D92\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    str r0, [sp]\n    ldrh r1, [r4, #0x1c]\n    add r2, sp, #4\n    ldr r0, [r4]\n    add r2, #2\n    add r3, sp, #4\n    bl ov18_021F12C8\n    add r1, sp, #4\n    mov r0, #0\n    ldrsh r2, [r1, r0]\n    mov r1, #0xff\n    mvn r1, r1\n    cmp r2, r1\n    ble ov18_021F5DB4\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _021F5DB8: .word 0x000008EE\n    _021F5DBC: .word 0x0000068C"
    );
    #endif
}

void ov18_021F5DC0(void) {
    ov18_021F1324(6);
    ov18_021F17FC(r4);
    ov18_021F193C(r4);
    ov18_021F5E0C(r4);
}

void ov18_021F5DE0(void) {
    /* Original at 0x021F5DE0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #1\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F10E8\n    add r4, r4, #1\n    cmp r4, #0x14\n    blo _021F5DE6\n    add r0, r5, #0\n    mov r1, #6\n    bl ov18_021F13DC\n    add r0, r5, #0\n    bl ov18_021F18E0\n    add r0, r5, #0\n    bl ov18_021F19EC\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021F5E0C(void) {
    /* Original at 0x021F5E0C */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r7, #1\n    mov r6, #0x34\n    add r4, r5, #4\n    ldr r0, _021F5ED8 ; =0x00000668\n    ldr r1, _021F5EDC ; =0x0000066C\n    add r3, r6, #0\n    ldr r2, _021F5EE0 ; =ov18_021FAC28\n    sub r3, #0x34\n    add r2, r2, r3\n    mov r3, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    mov r1, #0x67\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r7, r7, #1\n    add r6, #0x34\n    add r4, r4, #4\n    cmp r7, #4\n    bls _021F5E16\n    mov r7, #5\n    add r6, r7, #0\n    add r4, r5, #0\n    add r6, #0xff\n    add r4, #0x14\n    ldr r0, _021F5ED8 ; =0x00000668\n    ldr r1, _021F5EDC ; =0x0000066C\n    add r3, r6, #0\n    ldr r2, _021F5EE0 ; =ov18_021FAC28\n    sub r3, #0x34\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r2, r3\n    bl SpriteSystem_NewSprite\n    mov r1, #0x67\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r7, r7, #1\n    add r6, #0x34\n    add r4, r4, #4\n    cmp r7, #0x14\n    blo _021F5E48\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r5, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r5, #0\n    mov r1, #0xb\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r5, #0\n    mov r1, #0xc\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r5, #0\n    mov r1, #0xd\n    mov r2, #0\n    bl ov18_021F11C0\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov18_021F5EFC\n    add r0, r5, #0\n    bl ov18_021F6038\n    mov r0, #9\n    str r0, [sp]\n    ldr r2, _021F5EE4 ; =0x000018C4\n    ldr r3, _021F5EE8 ; =ov18_021FA348\n    ldrsb r2, [r5, r2]\n    add r0, r5, #0\n    mov r1, #5\n    bl ov18_021F61DC\n    add r0, r5, #0\n    bl ov18_021F65AC\n    ldr r2, _021F5EEC ; =0x000018C5\n    add r0, r5, #0\n    ldrsb r1, [r5, r2]\n    sub r2, r2, #1\n    ldrsb r2, [r5, r2]\n    mov r3, #6\n    bl ov18_021F619C\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F5ED8: .word 0x00000668\n    _021F5EDC: .word 0x0000066C\n    _021F5EE0: .word ov18_021FAC28\n    _021F5EE4: .word 0x000018C4\n    _021F5EE8: .word ov18_021FA348\n    _021F5EEC: .word 0x000018C5"
    );
    #endif
}

void ov18_021F5EF0(void) {
    ov18_021F5EFC();
}

void ov18_021F5EFC(void) {
    /* Original at 0x021F5EFC */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r3, sp, #0xc\n    add r7, r2, #0\n    add r2, sp, #0xc\n    add r3, #1\n    add r5, r0, #0\n    bl ov18_021F3CA8\n    ldr r0, _021F5FF4 ; =0x000018C7\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1f\n    bne _021F5F32\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #0\n    mov r6, #1\n    mov r4, #2\n    bl ov18_021F11C0\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #0\n    bl ov18_021F11C0\n    b _021F5F4A\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    mov r6, #3\n    mov r4, #4\n    bl ov18_021F11C0\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov18_021F11C0\n    ldr r1, _021F5FF4 ; =0x000018C7\n    mov r2, #0x20\n    ldrb r3, [r5, r1]\n    add r0, r3, #0\n    bic r0, r2\n    lsl r2, r3, #0x1a\n    lsr r3, r2, #0x1f\n    mov r2, #1\n    eor r2, r3\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    lsl r2, r2, #0x1f\n    lsr r2, r2, #0x1a\n    orr r0, r2\n    strb r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    str r6, [sp, #4]\n    str r7, [sp, #8]\n    sub r1, #0x25\n    add r3, sp, #0xc\n    ldrb r2, [r3]\n    ldrh r1, [r5, r1]\n    ldrb r3, [r3, #1]\n    add r0, r5, #0\n    bl ov18_021F1A7C\n    lsl r0, r6, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0x40\n    mov r2, #0x78\n    lsl r3, r1, #0xf\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    mov r0, #0\n    str r0, [sp]\n    str r4, [sp, #4]\n    ldr r1, _021F5FF8 ; =0x000018A2\n    str r7, [sp, #8]\n    add r3, sp, #0xc\n    ldrb r2, [r3]\n    ldrh r1, [r5, r1]\n    ldrb r3, [r3, #1]\n    add r0, r5, #0\n    bl ov18_021F1A7C\n    mov r2, #0\n    ldr r0, _021F5FF8 ; =0x000018A2\n    str r2, [sp]\n    add r3, sp, #0xc\n    ldrb r1, [r3, #1]\n    ldrh r0, [r5, r0]\n    ldrb r3, [r3]\n    bl GetMonPicHeightBySpeciesGenderForm\n    add r2, r0, #0\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #4\n    add r2, #0x78\n    ldr r0, [r1, r0]\n    lsl r2, r2, #0x10\n    mov r3, #2\n    mov r1, #0xc0\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x14\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov18_021F11C0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F5FF4: .word 0x000018C7\n    _021F5FF8: .word 0x000018A2"
    );
    #endif
}

void ov18_021F5FFC(void) {
    /* Original at 0x021F5FFC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r1, #0\n    ldr r1, _021F6030 ; =0x000018A4\n    add r2, r0, r2\n    ldrb r5, [r2, r1]\n    mov r2, #0x80\n    add r4, r5, #0\n    tst r4, r2\n    beq _021F6024\n    sub r1, r1, #2\n    ldrh r1, [r0, r1]\n    eor r2, r5\n    cmp r1, #0xac\n    bne _021F6026\n    cmp r2, #2\n    bne _021F6020\n    mov r2, #1\n    b _021F6026\n    mov r2, #0\n    b _021F6026\n    mov r2, #0\n    ldr r1, _021F6034 ; =0x000018A2\n    ldrh r1, [r0, r1]\n    bl ov18_021F14FC\n    pop {r3, r4, r5, pc}\n    _021F6030: .word 0x000018A4\n    _021F6034: .word 0x000018A2"
    );
    #endif
}

void ov18_021F6038(void) {
    /* Original at 0x021F6038 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r4, #0\n    mov r6, #0xe\n    ldr r0, _021F6094 ; =0x000018C5\n    ldrsb r0, [r5, r0]\n    add r0, r0, r4\n    sub r7, r0, #2\n    ldr r0, _021F6098 ; =0x000018C4\n    ldrsb r0, [r5, r0]\n    cmp r7, r0\n    blo _021F605E\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0xe\n    mov r2, #0\n    bl ov18_021F11C0\n    b _021F6076\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0xe\n    mov r2, #1\n    bl ov18_021F11C0\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0xe\n    add r2, r7, #0\n    bl ov18_021F5FFC\n    mov r0, #0\n    add r1, r4, #0\n    lsl r3, r6, #0x10\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, #0xe\n    mov r2, #0x30\n    asr r3, r3, #0x10\n    bl ov18_021F1294\n    add r4, r4, #1\n    add r6, #0x18\n    cmp r4, #6\n    blo _021F6040\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F6094: .word 0x000018C5\n    _021F6098: .word 0x000018C4"
    );
    #endif
}

void ov18_021F609C(void) {
    /* Original at 0x021F609C */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    mov r4, #0\n    add r5, r0, #0\n    str r1, [sp, #4]\n    add r6, r4, #0\n    add r7, sp, #8\n    add r1, r4, #0\n    add r2, sp, #8\n    add r0, r5, #0\n    add r1, #0xe\n    add r2, #2\n    add r3, sp, #8\n    str r6, [sp]\n    bl ov18_021F12C8\n    mov r0, #0\n    ldrsh r1, [r7, r0]\n    sub r0, #0xa\n    cmp r1, r0\n    beq _021F60D0\n    cmp r1, #0x86\n    beq _021F60D0\n    add r4, r4, #1\n    cmp r4, #6\n    blo _021F60AA\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    bge _021F6126\n    mov r0, #0\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, #0xe\n    mov r2, #0x30\n    mov r3, #0x86\n    bl ov18_021F1294\n    ldr r0, _021F6174 ; =0x000018C5\n    ldrsb r1, [r5, r0]\n    sub r0, r0, #1\n    ldrsb r0, [r5, r0]\n    add r1, r1, #2\n    cmp r1, r0\n    blt _021F6106\n    add r4, #0xe\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov18_021F11C0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0xe\n    mov r2, #1\n    bl ov18_021F11C0\n    ldr r2, _021F6174 ; =0x000018C5\n    add r4, #0xe\n    ldrsb r2, [r5, r2]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r2, #2\n    bl ov18_021F5FFC\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r2, #0x30\n    mov r0, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, #0xe\n    sub r3, #0x3a\n    bl ov18_021F1294\n    ldr r0, _021F6174 ; =0x000018C5\n    ldrsb r0, [r5, r0]\n    sub r0, r0, #2\n    bpl _021F6152\n    add r4, #0xe\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov18_021F11C0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0xe\n    mov r2, #1\n    bl ov18_021F11C0\n    ldr r2, _021F6174 ; =0x000018C5\n    add r4, #0xe\n    ldrsb r2, [r5, r2]\n    add r0, r5, #0\n    add r1, r4, #0\n    sub r2, r2, #2\n    bl ov18_021F5FFC\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F6174: .word 0x000018C5"
    );
    #endif
}

void ov18_021F6178(void) {
    /* Original at 0x021F6178 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r4, #0\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0xe\n    add r2, r7, #0\n    add r3, r6, #0\n    str r7, [sp]\n    bl ov18_021F121C\n    add r4, r4, #1\n    cmp r4, #6\n    blo _021F6182\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F619C(void) {
    /* Original at 0x021F619C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    cmp r5, #0\n    bne _021F61B4\n    add r1, r4, #0\n    mov r2, #7\n    bl ov18_021F118C\n    b _021F61BC\n    add r1, r4, #0\n    mov r2, #5\n    bl ov18_021F118C\n    sub r0, r7, #1\n    cmp r5, r0\n    bne _021F61CE\n    add r0, r6, #0\n    add r1, r4, #1\n    mov r2, #0xa\n    bl ov18_021F118C\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    add r1, r4, #1\n    mov r2, #8\n    bl ov18_021F118C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F61DC(void) {
    /* Original at 0x021F61DC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    ldr r3, [sp, #0x10]\n    add r5, r0, #0\n    bl ov18_021F61F8\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F118C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021F61F8(void) {
    /* Original at 0x021F61F8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r0, #0\n    cmp r3, #0\n    bls _021F620E\n    ldrh r4, [r2]\n    cmp r1, r4\n    ble _021F620E\n    add r0, r0, #1\n    add r2, r2, #2\n    cmp r0, r3\n    blo _021F6200\n    add r0, #0xe\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov18_021F6214(void) {
    ManagedSprite_GetActiveAnim(0x67);
}

void ov18_021F6230(void) {
    ov18_021F6214();
}

void ov18_021F6244(void) {
    ov18_021F6214();
}

void ov18_021F6258(void) {
    /* Original at 0x021F6258 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r0, #0\n    ldr r0, _021F62AC ; =0x00000684\n    add r5, r1, #0\n    add r1, sp, #0\n    add r4, r2, #0\n    ldr r0, [r6, r0]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    ldr r2, _021F62B0 ; =ov18_021FA310\n    add r0, r6, #0\n    mov r1, #5\n    bl ov18_021F6214\n    add r2, sp, #0\n    mov r1, #2\n    ldrsh r3, [r2, r1]\n    add r1, r3, #0\n    sub r1, #0xb\n    cmp r5, r1\n    blo _021F62A6\n    add r3, #0xb\n    cmp r5, r3\n    bhi _021F62A6\n    lsr r3, r0, #1\n    mov r0, #0\n    ldrsh r1, [r2, r0]\n    sub r0, r1, r3\n    cmp r4, r0\n    blo _021F62A6\n    add r0, r1, r3\n    cmp r4, r0\n    bhi _021F62A6\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _021F62AC: .word 0x00000684\n    _021F62B0: .word ov18_021FA310"
    );
    #endif
}

void ov18_021F62B4(void) {
    /* Original at 0x021F62B4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r0, #0\n    ldr r0, _021F6308 ; =0x00000684\n    add r5, r1, #0\n    add r1, sp, #0\n    add r4, r2, #0\n    ldr r0, [r6, r0]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    ldr r2, _021F630C ; =ov18_021FA304\n    add r0, r6, #0\n    mov r1, #5\n    bl ov18_021F6214\n    add r2, sp, #0\n    mov r1, #2\n    ldrsh r3, [r2, r1]\n    add r1, r3, #0\n    sub r1, #0xb\n    cmp r5, r1\n    blo _021F6302\n    add r3, #0xb\n    cmp r5, r3\n    bhi _021F6302\n    lsr r3, r0, #1\n    mov r0, #0\n    ldrsh r1, [r2, r0]\n    sub r0, r1, r3\n    cmp r4, r0\n    blo _021F6302\n    add r0, r1, r3\n    cmp r4, r0\n    bhi _021F6302\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _021F6308: .word 0x00000684\n    _021F630C: .word ov18_021FA304"
    );
    #endif
}

void ov18_021F6310(void) {
    /* Original at 0x021F6310 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _021F63CC ; =0x00000684\n    add r1, sp, #4\n    add r6, r2, #0\n    ldr r0, [r5, r0]\n    add r1, #2\n    add r2, sp, #4\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x56\n    str r0, [sp]\n    ldr r2, _021F63D0 ; =ov18_021FA310\n    add r0, r5, #0\n    mov r1, #5\n    mov r3, #0x40\n    bl ov18_021F6230\n    cmp r6, r0\n    bhs _021F633C\n    add r6, r0, #0\n    mov r0, #0x56\n    str r0, [sp]\n    ldr r2, _021F63D0 ; =ov18_021FA310\n    add r0, r5, #0\n    mov r1, #5\n    mov r3, #0x40\n    bl ov18_021F6244\n    cmp r6, r0\n    bls _021F6352\n    add r6, r0, #0\n    ldr r0, _021F63CC ; =0x00000684\n    add r2, sp, #4\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    lsl r2, r6, #0x10\n    ldr r0, [r5, r0]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x56\n    str r0, [sp]\n    ldr r2, _021F63D0 ; =ov18_021FA310\n    add r0, r5, #0\n    mov r1, #5\n    mov r3, #0x40\n    bl ov18_021F6230\n    add r7, r0, #0\n    mov r0, #0x56\n    str r0, [sp]\n    ldr r2, _021F63D0 ; =ov18_021FA310\n    add r0, r5, #0\n    mov r1, #5\n    mov r3, #0x40\n    bl ov18_021F6244\n    sub r1, r0, r7\n    ldr r0, _021F63D4 ; =0x000018C4\n    ldrsb r0, [r5, r0]\n    sub r4, r0, #1\n    lsl r0, r1, #8\n    add r1, r4, #0\n    bl _u32_div_f\n    sub r1, r6, r7\n    mov r3, #0\n    lsl r2, r1, #8\n    add r6, r3, #0\n    add r7, r3, #0\n    cmp r2, r6\n    blo _021F63BA\n    add r1, r7, r0\n    cmp r2, r1\n    bhs _021F63BA\n    ldr r0, _021F63D8 ; =0x000018C5\n    ldrsb r1, [r5, r0]\n    cmp r1, r3\n    beq _021F63C4\n    add sp, #8\n    strb r3, [r5, r0]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r3, r3, #1\n    add r6, r6, r0\n    add r7, r7, r0\n    cmp r3, r4\n    bls _021F63A0\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F63CC: .word 0x00000684\n    _021F63D0: .word ov18_021FA310\n    _021F63D4: .word 0x000018C4\n    _021F63D8: .word 0x000018C5"
    );
    #endif
}

void ov18_021F63DC(void) {
    /* Original at 0x021F63DC */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _021F6498 ; =0x00000684\n    add r1, sp, #4\n    add r6, r2, #0\n    ldr r0, [r5, r0]\n    add r1, #2\n    add r2, sp, #4\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x56\n    str r0, [sp]\n    ldr r2, _021F649C ; =ov18_021FA304\n    add r0, r5, #0\n    mov r1, #5\n    mov r3, #0x60\n    bl ov18_021F6230\n    cmp r6, r0\n    bhs _021F6408\n    add r6, r0, #0\n    mov r0, #0x56\n    str r0, [sp]\n    ldr r2, _021F649C ; =ov18_021FA304\n    add r0, r5, #0\n    mov r1, #5\n    mov r3, #0x60\n    bl ov18_021F6244\n    cmp r6, r0\n    bls _021F641E\n    add r6, r0, #0\n    ldr r0, _021F6498 ; =0x00000684\n    add r2, sp, #4\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    lsl r2, r6, #0x10\n    ldr r0, [r5, r0]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x56\n    str r0, [sp]\n    ldr r2, _021F649C ; =ov18_021FA304\n    add r0, r5, #0\n    mov r1, #5\n    mov r3, #0x60\n    bl ov18_021F6230\n    add r7, r0, #0\n    mov r0, #0x56\n    str r0, [sp]\n    ldr r2, _021F649C ; =ov18_021FA304\n    add r0, r5, #0\n    mov r1, #5\n    mov r3, #0x60\n    bl ov18_021F6244\n    sub r1, r0, r7\n    mov r0, #0x19\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    sub r4, r0, #1\n    lsl r0, r1, #8\n    add r1, r4, #0\n    bl _u32_div_f\n    sub r1, r6, r7\n    mov r3, #0\n    lsl r2, r1, #8\n    add r6, r3, #0\n    add r7, r3, #0\n    cmp r2, r6\n    blo _021F6488\n    add r1, r7, r0\n    cmp r2, r1\n    bhs _021F6488\n    ldr r0, _021F64A0 ; =0x000018CA\n    ldrsb r1, [r5, r0]\n    cmp r1, r3\n    beq _021F6492\n    add sp, #8\n    strb r3, [r5, r0]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r3, r3, #1\n    add r6, r6, r0\n    add r7, r7, r0\n    cmp r3, r4\n    bls _021F646E\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F6498: .word 0x00000684\n    _021F649C: .word ov18_021FA304\n    _021F64A0: .word 0x000018CA"
    );
    #endif
}

void ov18_021F64A4(void) {
    /* Original at 0x021F64A4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r1, #0\n    mov r1, #0x56\n    str r1, [sp]\n    ldr r2, _021F64EC ; =ov18_021FA310\n    mov r1, #5\n    mov r3, #0x40\n    add r6, r0, #0\n    bl ov18_021F6230\n    add r4, r0, #0\n    mov r0, #0x56\n    str r0, [sp]\n    ldr r2, _021F64EC ; =ov18_021FA310\n    add r0, r6, #0\n    mov r1, #5\n    mov r3, #0x40\n    bl ov18_021F6244\n    ldr r1, _021F64F0 ; =0x000018C4\n    ldrsb r1, [r6, r1]\n    sub r1, r1, #1\n    cmp r5, r1\n    beq _021F64E6\n    sub r0, r0, r4\n    lsl r0, r0, #8\n    bl _u32_div_f\n    add r1, r0, #0\n    mul r1, r5\n    lsr r0, r1, #8\n    add r0, r4, r0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021F64EC: .word ov18_021FA310\n    _021F64F0: .word 0x000018C4"
    );
    #endif
}

void ov18_021F64F4(void) {
    /* Original at 0x021F64F4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r1, #0\n    mov r1, #0x56\n    str r1, [sp]\n    ldr r2, _021F653C ; =ov18_021FA304\n    mov r1, #5\n    mov r3, #0x60\n    add r6, r0, #0\n    bl ov18_021F6230\n    add r4, r0, #0\n    mov r0, #0x56\n    str r0, [sp]\n    ldr r2, _021F653C ; =ov18_021FA304\n    add r0, r6, #0\n    mov r1, #5\n    mov r3, #0x60\n    bl ov18_021F6244\n    mov r1, #0x19\n    lsl r1, r1, #8\n    ldr r1, [r6, r1]\n    sub r1, r1, #1\n    cmp r5, r1\n    beq _021F6538\n    sub r0, r0, r4\n    lsl r0, r0, #8\n    bl _u32_div_f\n    add r1, r0, #0\n    mul r1, r5\n    lsr r0, r1, #8\n    add r0, r4, r0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _021F653C: .word ov18_021FA304"
    );
    #endif
}

void ov18_021F6540(void) {
    /* Original at 0x021F6540 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x67\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r5, r2, #0\n    add r1, #2\n    add r2, sp, #0\n    add r4, r3, #0\n    bl ManagedSprite_GetPositionXY\n    add r1, sp, #0\n    mov r0, #0\n    ldrsh r0, [r1, r0]\n    cmp r5, r0\n    blo _021F656E\n    sub r0, r5, r0\n    add r1, r4, #0\n    bl _u32_div_f\n    pop {r3, r4, r5, pc}\n    sub r0, r0, r5\n    add r1, r4, #0\n    bl _u32_div_f\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021F6578(void) {
    /* Original at 0x021F6578 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r2, #0\n    mov r2, #0x67\n    lsl r2, r2, #4\n    add r5, r0, r2\n    lsl r4, r1, #2\n    add r1, sp, #0\n    ldr r0, [r5, r4]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    add r2, r2, r6\n    lsl r2, r2, #0x10\n    ldr r0, [r5, r4]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F65AC(void) {
    /* Original at 0x021F65AC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, _021F65E4 ; =0x00000684\n    add r1, sp, #0\n    ldr r0, [r4, r0]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    ldr r1, _021F65E8 ; =0x000018C5\n    add r0, r4, #0\n    ldrsb r1, [r4, r1]\n    bl ov18_021F64A4\n    add r3, r0, #0\n    ldr r0, _021F65E4 ; =0x00000684\n    add r2, sp, #0\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    lsl r2, r3, #0x10\n    ldr r0, [r4, r0]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021F65E4: .word 0x00000684\n    _021F65E8: .word 0x000018C5"
    );
    #endif
}

void ov18_021F65EC(void) {
    /* Original at 0x021F65EC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, _021F6624 ; =0x00000684\n    add r1, sp, #0\n    ldr r0, [r4, r0]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    ldr r1, _021F6628 ; =0x000018CA\n    add r0, r4, #0\n    ldrsb r1, [r4, r1]\n    bl ov18_021F64F4\n    add r3, r0, #0\n    ldr r0, _021F6624 ; =0x00000684\n    add r2, sp, #0\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    lsl r2, r3, #0x10\n    ldr r0, [r4, r0]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021F6624: .word 0x00000684\n    _021F6628: .word 0x000018CA"
    );
    #endif
}

void ov18_021F662C(void) {
    /* Original at 0x021F662C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021F6680 ; =0x000018C5\n    add r4, r0, #0\n    ldrsb r1, [r4, r1]\n    mov r2, #1\n    bl ov18_021F5EFC\n    add r0, r4, #0\n    bl ov18_021F6038\n    add r0, r4, #0\n    bl ov18_021F65AC\n    ldr r2, _021F6680 ; =0x000018C5\n    add r0, r4, #0\n    ldrsb r1, [r4, r2]\n    sub r2, r2, #1\n    ldrsb r2, [r4, r2]\n    mov r3, #6\n    bl ov18_021F619C\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #1\n    bl ov18_021F11C0\n    pop {r4, pc}\n    _021F6680: .word 0x000018C5"
    );
    #endif
}

void ov18_021F6684(void) {
    /* Original at 0x021F6684 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #5\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0xe\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0xf\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0x11\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0x12\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0x13\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0\n    bl ov18_021F11C0\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F6714(void) {
    /* Original at 0x021F6714 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021F67C4 ; =0x000018C4\n    add r4, r0, #0\n    ldrsb r1, [r4, r1]\n    cmp r1, #3\n    blt _021F6752\n    mov r1, #9\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r2, #1\n    bl ov18_021F11C0\n    ldr r2, _021F67C8 ; =0x000018C5\n    add r0, r4, #0\n    ldrsb r2, [r4, r2]\n    mov r1, #0xe\n    bl ov18_021F6844\n    ldr r2, _021F67CC ; =0x000018C6\n    add r0, r4, #0\n    ldrsb r2, [r4, r2]\n    mov r1, #0xf\n    bl ov18_021F6844\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0xe\n    mov r2, #0x40\n    mov r3, #0x50\n    bl ov18_021F1294\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0xf\n    mov r2, #0xc0\n    mov r3, #0x50\n    bl ov18_021F1294\n    ldr r2, _021F67C8 ; =0x000018C5\n    mov r1, #1\n    ldrsb r2, [r4, r2]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl ov18_021F684C\n    ldr r2, _021F67CC ; =0x000018C6\n    add r0, r4, #0\n    ldrsb r2, [r4, r2]\n    mov r1, #2\n    mov r3, #1\n    bl ov18_021F684C\n    add r0, r4, #0\n    bl ov18_021F6990\n    add r0, r4, #0\n    mov r1, #0xe\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0xf\n    mov r2, #1\n    bl ov18_021F11C0\n    add sp, #4\n    pop {r3, r4, pc}\n    _021F67C4: .word 0x000018C4\n    _021F67C8: .word 0x000018C5\n    _021F67CC: .word 0x000018C6"
    );
    #endif
}

void ov18_021F67D0(void) {
    /* Original at 0x021F67D0 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #9\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0xe\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0xf\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0\n    bl ov18_021F11C0\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F6844(void) {
    ov18_021F5FFC();
}

void ov18_021F684C(void) {
    /* Original at 0x021F684C */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r3, [sp, #0xc]\n    add r3, sp, #0x14\n    add r4, r1, #0\n    add r1, r2, #0\n    add r2, sp, #0x14\n    add r3, #1\n    add r5, r0, #0\n    bl ov18_021F3CA8\n    ldr r0, _021F697C ; =0x000018C7\n    ldrb r1, [r5, r0]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1f\n    bne _021F6872\n    mov r6, #2\n    mov r0, #0\n    b _021F6886\n    mov r6, #0\n    str r6, [sp]\n    sub r0, #0x25\n    add r3, sp, #0x14\n    ldrb r1, [r3, #1]\n    ldrh r0, [r5, r0]\n    ldrb r3, [r3]\n    add r2, r6, #0\n    bl GetMonPicHeightBySpeciesGenderForm\n    cmp r4, #1\n    bne _021F68EC\n    add r0, #0x78\n    lsl r0, r0, #0x18\n    mov r1, #0x40\n    lsr r7, r0, #0x18\n    ldr r0, _021F697C ; =0x000018C7\n    str r1, [sp, #0x10]\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _021F68B8\n    mov r4, #3\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov18_021F11C0\n    b _021F68CC\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov18_021F11C0\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #0\n    bl ov18_021F11C0\n    ldr r3, _021F697C ; =0x000018C7\n    mov r1, #0x20\n    ldrb r2, [r5, r3]\n    add r0, r2, #0\n    bic r0, r1\n    lsl r1, r2, #0x1a\n    lsr r2, r1, #0x1f\n    mov r1, #1\n    eor r1, r2\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x1a\n    orr r0, r1\n    strb r0, [r5, r3]\n    b _021F6950\n    cmp r4, #2\n    bne _021F6950\n    add r0, #0x78\n    lsl r0, r0, #0x18\n    mov r1, #0xc0\n    lsr r7, r0, #0x18\n    ldr r0, _021F697C ; =0x000018C7\n    str r1, [sp, #0x10]\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _021F691E\n    mov r4, #4\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov18_021F11C0\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov18_021F11C0\n    b _021F6932\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #1\n    bl ov18_021F11C0\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #0\n    bl ov18_021F11C0\n    ldr r3, _021F697C ; =0x000018C7\n    mov r1, #0x40\n    ldrb r2, [r5, r3]\n    add r0, r2, #0\n    bic r0, r1\n    lsl r1, r2, #0x19\n    lsr r2, r1, #0x1f\n    mov r1, #1\n    eor r1, r2\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x19\n    orr r0, r1\n    strb r0, [r5, r3]\n    str r6, [sp]\n    ldr r0, [sp, #0xc]\n    str r4, [sp, #4]\n    str r0, [sp, #8]\n    ldr r1, _021F6980 ; =0x000018A2\n    add r3, sp, #0x14\n    ldrb r2, [r3]\n    ldrh r1, [r5, r1]\n    ldrb r3, [r3, #1]\n    add r0, r5, #0\n    bl ov18_021F1A7C\n    mov r0, #1\n    str r0, [sp]\n    ldr r2, [sp, #0x10]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r7, #0\n    bl ov18_021F1294\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F697C: .word 0x000018C7\n    _021F6980: .word 0x000018A2"
    );
    #endif
}

void ov18_021F6984(void) {
    ov18_021F684C();
}

void ov18_021F6990(void) {
    /* Original at 0x021F6990 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _021F69BC ; =0x000018C7\n    ldrb r1, [r0, r1]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1b\n    bne _021F69AC\n    mov r1, #0\n    str r1, [sp]\n    mov r1, #0xd\n    mov r2, #0x40\n    mov r3, #0x58\n    bl ov18_021F1294\n    pop {r3, pc}\n    mov r1, #0\n    str r1, [sp]\n    mov r1, #0xd\n    mov r2, #0xc0\n    mov r3, #0x58\n    bl ov18_021F1294\n    pop {r3, pc}\n    _021F69BC: .word 0x000018C7"
    );
    #endif
}

void ov18_021F69C0(void) {
    /* Original at 0x021F69C0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    ldr r0, [r0, #4]\n    bl PlayerProfile_GetTrainerGender\n    cmp r0, #0\n    bne _021F69D6\n    mov r2, #0\n    b _021F69D8\n    mov r2, #1\n    cmp r4, #1\n    bne _021F69DE\n    add r2, r2, #2\n    add r0, r5, #0\n    mov r1, #2\n    bl ov18_021F118C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021F69E8(void) {
    /* Original at 0x021F69E8 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    str r2, [sp, #0x14]\n    str r3, [sp, #0x18]\n    ldr r3, _021F6AA4 ; =ov18_021FA338\n    add r2, sp, #0x1c\n    add r5, r0, #0\n    add r4, r1, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r1, #0x32\n    mov r0, #0x25\n    lsl r1, r1, #6\n    bl Heap_AllocAtEnd\n    add r7, r0, #0\n    ldr r0, _021F6AA8 ; =0x00000147\n    cmp r4, r0\n    bne _021F6A20\n    ldr r0, [r5]\n    mov r1, #0\n    ldr r0, [r0]\n    bl Pokedex_GetSeenSpindaPersonality\n    add r6, r0, #0\n    b _021F6A22\n    mov r6, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    add r3, sp, #0x40\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldrb r3, [r3, #0x10]\n    ldr r2, [sp, #0x18]\n    add r0, sp, #0x2c\n    add r1, r4, #0\n    bl GetMonSpriteCharAndPlttNarcIdsEx\n    str r7, [sp]\n    str r6, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    str r4, [sp, #0x10]\n    add r1, sp, #0x1c\n    ldrh r0, [r1, #0x10]\n    ldrh r1, [r1, #0x12]\n    mov r2, #0x25\n    add r3, sp, #0x1c\n    bl sub_02014510\n    mov r1, #0x32\n    add r0, r7, #0\n    lsl r1, r1, #6\n    mov r2, #0xf\n    mov r3, #0x25\n    bl Convert4bppTo8bpp\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r3, #0x19\n    ldr r0, [r5, #4]\n    mov r1, #7\n    add r2, r4, #0\n    lsl r3, r3, #8\n    bl BG_LoadCharTilesData\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r7, #0\n    bl Heap_Free\n    mov r3, #0xb\n    str r3, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5, #4]\n    ldr r2, _021F6AAC ; =ov18_021FB5B4\n    mov r1, #7\n    bl LoadRectToBgTilemapRect\n    ldr r0, [r5, #4]\n    mov r1, #7\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    _021F6AA4: .word ov18_021FA338\n    _021F6AA8: .word 0x00000147\n    _021F6AAC: .word ov18_021FB5B4"
    );
    #endif
}

void ov18_021F6AB0(void) {
    /* Original at 0x021F6AB0 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    mov r0, #1\n    add r4, r1, #0\n    lsl r0, r0, #0x14\n    lsl r1, r2, #0xc\n    bl FX_Div\n    bl FX_Inv\n    mov r2, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x18]\n    str r2, [sp, #0x10]\n    str r2, [sp, #0x14]\n    add r0, sp, #0xc\n    str r0, [sp]\n    mov r0, #0x80\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5, #4]\n    mov r1, #7\n    mov r3, #0x38\n    bl Bg_SetTextDimAndAffineParams\n    add r0, sp, #0xc\n    str r0, [sp]\n    mov r0, #0x80\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x10\n    ldr r0, [r5, #4]\n    mov r1, #7\n    mov r2, #3\n    sub r3, r3, r4\n    bl Bg_SetTextDimAndAffineParams\n    add sp, #0x1c\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov18_021F6B00(void) {
    /* Original at 0x021F6B00 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F6BA8 ; =0x00000864\n    mov r1, #0\n    str r1, [r4, r0]\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _021F6B3A\n    ldr r0, _021F6BAC ; =ov18_021FB72C\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021F6B24\n    add r0, r1, #0\n    pop {r4, pc}\n    lsl r1, r0, #2\n    ldr r0, _021F6BB0 ; =ov18_021FB6F0\n    ldr r0, [r0, r1]\n    cmp r0, #6\n    bne _021F6BA4\n    ldr r1, _021F6BB4 ; =0x00001860\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    bne _021F6BA4\n    mov r0, #5\n    pop {r4, pc}\n    ldr r0, _021F6BA8 ; =0x00000864\n    mov r1, #1\n    str r1, [r4, r0]\n    ldr r1, _021F6BB4 ; =0x00001860\n    ldr r0, [r4, r1]\n    cmp r0, #1\n    bne _021F6B7C\n    ldr r0, _021F6BB8 ; =gSystem\n    ldr r3, [r0, #0x48]\n    mov r0, #0x20\n    add r2, r3, #0\n    tst r2, r0\n    beq _021F6B64\n    sub r1, #8\n    ldrb r1, [r4, r1]\n    cmp r1, #0\n    bne _021F6B60\n    mov r0, #3\n    pop {r4, pc}\n    sub r0, #0x21\n    pop {r4, pc}\n    mov r0, #0x10\n    add r2, r3, #0\n    tst r2, r0\n    beq _021F6B7C\n    sub r1, #8\n    ldrb r1, [r4, r1]\n    cmp r1, #1\n    bne _021F6B78\n    mov r0, #4\n    pop {r4, pc}\n    sub r0, #0x11\n    pop {r4, pc}\n    ldr r0, _021F6BB8 ; =gSystem\n    mov r1, #1\n    ldr r3, [r0, #0x48]\n    add r0, r3, #0\n    tst r0, r1\n    bne _021F6B8E\n    mov r0, #8\n    tst r0, r3\n    beq _021F6B92\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #2\n    add r2, r3, #0\n    tst r2, r0\n    bne _021F6BA4\n    lsl r2, r0, #0xa\n    tst r2, r3\n    bne _021F6BA2\n    sub r1, r0, #3\n    add r0, r1, #0\n    pop {r4, pc}\n    nop\n    _021F6BA8: .word 0x00000864\n    _021F6BAC: .word ov18_021FB72C\n    _021F6BB0: .word ov18_021FB6F0\n    _021F6BB4: .word 0x00001860\n    _021F6BB8: .word gSystem"
    );
    #endif
}

void ov18_021F6BBC(void) {
    /* Original at 0x021F6BBC */
    /* Requires manual decompilation - 249 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, _021F6DBC ; =0x00000864\n    mov r1, #0\n    str r1, [r5, r0]\n    add r0, sp, #4\n    add r1, sp, #0\n    bl System_GetTouchNewCoords\n    cmp r0, #1\n    bne _021F6C5C\n    ldr r0, _021F6DC0 ; =ov18_021FB8A4\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021F6BEA\n    add sp, #8\n    add r0, r1, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r1, r0, #2\n    ldr r0, _021F6DC4 ; =ov18_021FB84C\n    ldr r4, [r0, r1]\n    cmp r4, #0\n    bne _021F6C32\n    ldr r1, [sp]\n    ldr r0, [sp, #4]\n    sub r1, r1, #4\n    sub r0, #0x1b\n    str r1, [sp]\n    mov r1, #0x28\n    str r0, [sp, #4]\n    bl _u32_div_f\n    add r6, r0, #0\n    ldr r0, [sp]\n    mov r1, #0x28\n    bl _u32_div_f\n    lsl r1, r0, #2\n    add r0, r0, r1\n    add r0, r6, r0\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    ldr r0, _021F6DC8 ; =0x0000185A\n    ldrb r1, [r5, r0]\n    cmp r2, r1\n    bne _021F6C28\n    add sp, #8\n    mov r0, #4\n    pop {r3, r4, r5, r6, r7, pc}\n    strb r2, [r5, r0]\n    ldr r0, _021F6DCC ; =0x000008E9\n    bl PlaySE\n    b _021F6C56\n    cmp r4, #0xe\n    bne _021F6C3E\n    ldr r0, _021F6DD0 ; =0x000008F2\n    bl PlaySE\n    b _021F6C56\n    cmp r4, #2\n    bne _021F6C4A\n    ldr r0, _021F6DCC ; =0x000008E9\n    bl PlaySE\n    b _021F6C56\n    cmp r4, #5\n    bne _021F6C56\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    add sp, #8\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, _021F6DBC ; =0x00000864\n    mov r6, #1\n    ldr r7, _021F6DD4 ; =gSystem\n    str r6, [r5, r2]\n    ldr r3, [r7, #0x4c]\n    mov r0, #0x40\n    tst r0, r3\n    beq _021F6C8C\n    ldr r0, _021F6DC8 ; =0x0000185A\n    ldrb r1, [r5, r0]\n    cmp r1, #5\n    bhs _021F6C7A\n    add sp, #8\n    mov r0, #0xa\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r1, r1, #5\n    add r2, #0x84\n    strb r1, [r5, r0]\n    add r0, r2, #0\n    bl PlaySE\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x80\n    tst r0, r3\n    beq _021F6CB8\n    ldr r0, _021F6DC8 ; =0x0000185A\n    ldrb r0, [r5, r0]\n    cmp r0, #0xa\n    blo _021F6CA4\n    cmp r0, #0xf\n    bhs _021F6CA4\n    add sp, #8\n    mov r0, #0xc\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021F6DC8 ; =0x0000185A\n    ldrb r1, [r5, r0]\n    add r1, r1, #5\n    strb r1, [r5, r0]\n    ldr r0, _021F6DD8 ; =0x000008E8\n    bl PlaySE\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x20\n    add r1, r3, #0\n    tst r1, r0\n    beq _021F6CF2\n    ldr r3, _021F6DC8 ; =0x0000185A\n    ldrb r1, [r5, r3]\n    cmp r1, #0\n    beq _021F6CDA\n    sub r0, r1, #1\n    add r2, #0x84\n    strb r0, [r5, r3]\n    add r0, r2, #0\n    bl PlaySE\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r1, r3, #1\n    ldrb r1, [r5, r1]\n    cmp r1, #0\n    beq _021F6CEC\n    mov r0, #0xe\n    strb r0, [r5, r3]\n    add sp, #8\n    mov r0, #9\n    pop {r3, r4, r5, r6, r7, pc}\n    add sp, #8\n    sub r0, #0x21\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x10\n    tst r0, r3\n    beq _021F6D36\n    ldr r0, _021F6DC8 ; =0x0000185A\n    ldrb r1, [r5, r0]\n    add r1, r1, #1\n    cmp r1, #0xf\n    beq _021F6D12\n    add r2, #0x84\n    strb r1, [r5, r0]\n    add r0, r2, #0\n    bl PlaySE\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F8950\n    ldr r1, _021F6DDC ; =0x00001859\n    ldrb r2, [r5, r1]\n    add r2, r2, #1\n    cmp r2, r0\n    bhi _021F6D30\n    mov r2, #0\n    add r0, r1, #1\n    strb r2, [r5, r0]\n    add sp, #8\n    mov r0, #0xb\n    pop {r3, r4, r5, r6, r7, pc}\n    add sp, #8\n    sub r0, r6, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r7, #0x48]\n    add r0, r1, #0\n    tst r0, r6\n    beq _021F6D44\n    add sp, #8\n    mov r0, #4\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r4, #2\n    add r0, r1, #0\n    tst r0, r4\n    beq _021F6D5A\n    add r2, #0xdc\n    add r0, r2, #0\n    bl PlaySE\n    add sp, #8\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r4, #9\n    tst r0, r1\n    beq _021F6D66\n    add sp, #8\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r4, #0xa\n    tst r0, r1\n    beq _021F6D7A\n    add r2, #0x85\n    add r0, r2, #0\n    bl PlaySE\n    add sp, #8\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r4, #8\n    tst r0, r3\n    beq _021F6D86\n    add sp, #8\n    mov r0, #9\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, #0xfe\n    add r0, r3, #0\n    tst r0, r4\n    beq _021F6D94\n    add sp, #8\n    mov r0, #0xb\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #4\n    tst r0, r1\n    beq _021F6DA0\n    add sp, #8\n    mov r0, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #8\n    tst r1, r0\n    beq _021F6DB4\n    add r2, #0x8e\n    add r0, r2, #0\n    bl PlaySE\n    add sp, #8\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, #9\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F6DBC: .word 0x00000864\n    _021F6DC0: .word ov18_021FB8A4\n    _021F6DC4: .word ov18_021FB84C\n    _021F6DC8: .word 0x0000185A\n    _021F6DCC: .word 0x000008E9\n    _021F6DD0: .word 0x000008F2\n    _021F6DD4: .word gSystem\n    _021F6DD8: .word 0x000008E8\n    _021F6DDC: .word 0x00001859"
    );
    #endif
}

void ov18_021F6DE0(void) {
    /* Original at 0x021F6DE0 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #1\n    str r0, [sp]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0x25\n    str r0, [sp, #8]\n    ldr r0, _021F6E1C ; =ov18_021FB878\n    ldr r1, _021F6E20 ; =ov18_021FB9F0\n    ldr r2, _021F6E24 ; =ov18_021FB688\n    add r3, r5, #0\n    bl GridInputHandler_Create\n    ldr r1, _021F6E28 ; =0x00001864\n    mov r2, #1\n    str r0, [r5, r1]\n    add r0, r5, #0\n    mov r1, #0\n    bl ov18_021F11C0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F6E58\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _021F6E1C: .word ov18_021FB878\n    _021F6E20: .word ov18_021FB9F0\n    _021F6E24: .word ov18_021FB688\n    _021F6E28: .word 0x00001864"
    );
    #endif
}

void ov18_021F6E2C(void) {
    /* Original at 0x021F6E2C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    ldr r0, _021F6E50 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #8\n    tst r1, r0\n    bne _021F6E4C\n    ldr r0, _021F6E54 ; =0x00001864\n    ldr r0, [r4, r0]\n    bl GridInputHandler_HandleInput_AllowHold\n    pop {r4, pc}\n    nop\n    _021F6E50: .word gSystem\n    _021F6E54: .word 0x00001864"
    );
    #endif
}

void ov18_021F6E58(void) {
    /* Original at 0x021F6E58 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021F6E90 ; =0x00001864\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x67\n    add r2, sp, #0\n    lsl r0, r0, #4\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetPositionXY\n    ldr r2, _021F6E94 ; =ov18_021FBD1C\n    add r0, r5, #0\n    ldrb r2, [r2, r4]\n    mov r1, #0\n    bl ov18_021F118C\n    pop {r3, r4, r5, pc}\n    nop\n    _021F6E90: .word 0x00001864\n    _021F6E94: .word ov18_021FBD1C"
    );
    #endif
}

void ov18_021F6E98(void) {
    /* Original at 0x021F6E98 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov18_021F6E58\n    ldr r0, _021F6EA8 ; =0x000008E8\n    bl PlaySE\n    pop {r3, pc}\n    nop\n    _021F6EA8: .word 0x000008E8"
    );
    #endif
}

void ov18_021F6EAC(void) {
    /* Original at 0x021F6EAC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov18_021F6E58\n    ldr r0, [r4]\n    mov r1, #1\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F6EC0(void) {
    /* Original at 0x021F6EC0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x25\n    str r0, [sp, #8]\n    ldr r0, _021F6EF8 ; =ov18_021FB828\n    ldr r1, _021F6EFC ; =ov18_021FB968\n    ldr r2, _021F6F00 ; =ov18_021FB668\n    add r3, r4, #0\n    bl GridInputHandler_Create\n    ldr r1, _021F6F04 ; =0x00001864\n    mov r2, #1\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F6F38\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _021F6EF8: .word ov18_021FB828\n    _021F6EFC: .word ov18_021FB968\n    _021F6F00: .word ov18_021FB668\n    _021F6F04: .word 0x00001864"
    );
    #endif
}

void ov18_021F6F08(void) {
    /* Original at 0x021F6F08 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    ldr r0, _021F6F30 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #8\n    tst r0, r1\n    beq _021F6F24\n    mov r0, #6\n    pop {r4, pc}\n    ldr r0, _021F6F34 ; =0x00001864\n    ldr r0, [r4, r0]\n    bl GridInputHandler_HandleInput_AllowHold\n    pop {r4, pc}\n    nop\n    _021F6F30: .word gSystem\n    _021F6F34: .word 0x00001864"
    );
    #endif
}

void ov18_021F6F38(void) {
    /* Original at 0x021F6F38 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021F6F70 ; =0x00001864\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x67\n    add r2, sp, #0\n    lsl r0, r0, #4\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetPositionXY\n    ldr r2, _021F6F74 ; =ov18_021FB628\n    add r0, r5, #0\n    ldrb r2, [r2, r4]\n    mov r1, #0\n    bl ov18_021F118C\n    pop {r3, r4, r5, pc}\n    nop\n    _021F6F70: .word 0x00001864\n    _021F6F74: .word ov18_021FB628"
    );
    #endif
}

void ov18_021F6F78(void) {
    /* Original at 0x021F6F78 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov18_021F6F38\n    ldr r0, _021F6F88 ; =0x000008E8\n    bl PlaySE\n    pop {r3, pc}\n    nop\n    _021F6F88: .word 0x000008E8"
    );
    #endif
}

void ov18_021F6F8C(void) {
    /* Original at 0x021F6F8C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov18_021F6F38\n    ldr r0, [r4]\n    mov r1, #1\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F6FA0(void) {
    /* Original at 0x021F6FA0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x25\n    str r0, [sp, #8]\n    ldr r0, _021F6FD8 ; =ov18_021FBA94\n    ldr r1, _021F6FDC ; =ov18_021FBC34\n    ldr r2, _021F6FE0 ; =ov18_021FB6A8\n    add r3, r4, #0\n    bl GridInputHandler_Create\n    ldr r1, _021F6FE4 ; =0x00001864\n    mov r2, #1\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F7018\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _021F6FD8: .word ov18_021FBA94\n    _021F6FDC: .word ov18_021FBC34\n    _021F6FE0: .word ov18_021FB6A8\n    _021F6FE4: .word 0x00001864"
    );
    #endif
}

void ov18_021F6FE8(void) {
    /* Original at 0x021F6FE8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    ldr r0, _021F7010 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #8\n    tst r0, r1\n    beq _021F7004\n    mov r0, #0x1b\n    pop {r4, pc}\n    ldr r0, _021F7014 ; =0x00001864\n    ldr r0, [r4, r0]\n    bl GridInputHandler_HandleInput_AllowHold\n    pop {r4, pc}\n    nop\n    _021F7010: .word gSystem\n    _021F7014: .word 0x00001864"
    );
    #endif
}

void ov18_021F7018(void) {
    /* Original at 0x021F7018 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021F705C ; =0x00001864\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x67\n    add r2, sp, #0\n    lsl r0, r0, #4\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetPositionXY\n    cmp r4, #0x1b\n    blt _021F7050\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x23\n    bl ov18_021F118C\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x28\n    bl ov18_021F118C\n    pop {r3, r4, r5, pc}\n    _021F705C: .word 0x00001864"
    );
    #endif
}

void ov18_021F7060(void) {
    /* Original at 0x021F7060 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    sub r0, #0x1b\n    add r4, r1, #0\n    cmp r0, #1\n    bhi _021F70DA\n    ldr r0, _021F70F0 ; =0x0000189C\n    ldr r0, [r5, r0]\n    lsl r1, r0, #3\n    ldr r0, _021F70F4 ; =ov18_021FBC34\n    cmp r4, #0\n    ldrb r0, [r0, r1]\n    beq _021F7082\n    cmp r4, #6\n    bne _021F70AC\n    ldr r3, _021F70F4 ; =ov18_021FBC34\n    mov r1, #0\n    ldrb r2, [r3]\n    cmp r0, r2\n    bne _021F70A2\n    ldr r0, _021F70F8 ; =0x00001864\n    lsl r2, r6, #0x18\n    add r4, r1, #0\n    lsl r1, r1, #0x18\n    lsr r2, r2, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F70DA\n    add r1, r1, #1\n    add r3, #8\n    cmp r1, #0x1a\n    ble ov18_021F7086\n    b _021F70DA\n    cmp r4, #0x15\n    beq _021F70B4\n    cmp r4, #0x1a\n    bne _021F70DA\n    ldr r3, _021F70FC ; =ov18_021FBC34 + 0xD0\n    mov r1, #0x1a\n    ldrb r2, [r3]\n    cmp r0, r2\n    bne _021F70D4\n    ldr r0, _021F70F8 ; =0x00001864\n    lsl r2, r6, #0x18\n    add r4, r1, #0\n    lsl r1, r1, #0x18\n    lsr r2, r2, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F70DA\n    sub r3, #8\n    sub r1, r1, #1\n    bpl _021F70B8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F7018\n    ldr r0, _021F70F0 ; =0x0000189C\n    str r6, [r5, r0]\n    ldr r0, _021F7100 ; =0x000008E8\n    bl PlaySE\n    pop {r4, r5, r6, pc}\n    nop\n    _021F70F0: .word 0x0000189C\n    _021F70F4: .word ov18_021FBC34\n    _021F70F8: .word 0x00001864\n    _021F70FC: .word ov18_021FBC34 + 0xD0\n    _021F7100: .word 0x000008E8"
    );
    #endif
}

void ov18_021F7104(void) {
    /* Original at 0x021F7104 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    bl ov18_021F7018\n    ldr r0, [r5]\n    mov r1, #1\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    ldr r0, _021F7120 ; =0x0000189C\n    str r4, [r5, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _021F7120: .word 0x0000189C"
    );
    #endif
}

void ov18_021F7124(void) {
    /* Original at 0x021F7124 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x25\n    str r0, [sp, #8]\n    ldr r0, _021F715C ; =ov18_021FBA40\n    ldr r1, _021F7160 ; =ov18_021FBB94\n    ldr r2, _021F7164 ; =ov18_021FB638\n    add r3, r4, #0\n    bl GridInputHandler_Create\n    ldr r1, _021F7168 ; =0x00001864\n    mov r2, #1\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F719C\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _021F715C: .word ov18_021FBA40\n    _021F7160: .word ov18_021FBB94\n    _021F7164: .word ov18_021FB638\n    _021F7168: .word 0x00001864"
    );
    #endif
}

void ov18_021F716C(void) {
    /* Original at 0x021F716C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    ldr r0, _021F7194 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #8\n    tst r0, r1\n    beq _021F7188\n    mov r0, #0x12\n    pop {r4, pc}\n    ldr r0, _021F7198 ; =0x00001864\n    ldr r0, [r4, r0]\n    bl GridInputHandler_HandleInput_AllowHold\n    pop {r4, pc}\n    nop\n    _021F7194: .word gSystem\n    _021F7198: .word 0x00001864"
    );
    #endif
}

void ov18_021F719C(void) {
    /* Original at 0x021F719C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021F71D4 ; =0x00001864\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x67\n    add r2, sp, #0\n    lsl r0, r0, #4\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetPositionXY\n    ldr r2, _021F71D8 ; =ov18_021FBD3C\n    add r0, r5, #0\n    ldrb r2, [r2, r4]\n    mov r1, #0\n    bl ov18_021F118C\n    pop {r3, r4, r5, pc}\n    nop\n    _021F71D4: .word 0x00001864\n    _021F71D8: .word ov18_021FBD3C"
    );
    #endif
}

void ov18_021F71DC(void) {
    /* Original at 0x021F71DC */
    /* Requires manual decompilation - 159 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r6, #0x12\n    bne _021F727C\n    cmp r4, #0\n    bne _021F7236\n    ldr r0, _021F7328 ; =0x0000189C\n    ldr r1, [r5, r0]\n    cmp r1, #0x10\n    blt _021F7218\n    cmp r1, #0x11\n    bgt _021F7218\n    lsr r3, r1, #0x1f\n    lsl r2, r1, #0x1e\n    sub r2, r2, r3\n    mov r1, #0x1e\n    ror r2, r1\n    add r4, r3, r2\n    sub r0, #0x38\n    lsl r1, r4, #0x18\n    lsl r2, r6, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0x12\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F7312\n    cmp r1, #0\n    blt _021F7312\n    cmp r1, #1\n    bgt _021F7312\n    ldr r0, _021F732C ; =0x00001864\n    add r4, r1, #0\n    lsl r1, r1, #0x18\n    lsl r2, r6, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0x12\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F7312\n    cmp r4, #0x10\n    bne _021F7312\n    ldr r0, _021F7328 ; =0x0000189C\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    blt _021F725E\n    cmp r1, #1\n    bgt _021F725E\n    add r4, r1, #0\n    add r4, #0x10\n    sub r0, #0x38\n    lsl r1, r4, #0x18\n    lsl r2, r6, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0x12\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F7312\n    cmp r1, #0x10\n    blt _021F7312\n    cmp r1, #0x11\n    bgt _021F7312\n    ldr r0, _021F732C ; =0x00001864\n    add r4, r1, #0\n    lsl r1, r1, #0x18\n    lsl r2, r6, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0x12\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F7312\n    cmp r6, #0x13\n    bne _021F7312\n    cmp r4, #3\n    bne _021F72CE\n    ldr r0, _021F7328 ; =0x0000189C\n    ldr r1, [r5, r0]\n    cmp r1, #0xe\n    blt _021F72B0\n    cmp r1, #0xf\n    bgt _021F72B0\n    lsr r3, r1, #0x1f\n    lsl r2, r1, #0x1e\n    sub r2, r2, r3\n    mov r1, #0x1e\n    ror r2, r1\n    add r4, r3, r2\n    sub r0, #0x38\n    lsl r1, r4, #0x18\n    lsl r2, r6, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0x13\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F7312\n    cmp r1, #2\n    blt _021F7312\n    cmp r1, #3\n    bgt _021F7312\n    ldr r0, _021F732C ; =0x00001864\n    add r4, r1, #0\n    lsl r1, r1, #0x18\n    lsl r2, r6, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0x13\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F7312\n    cmp r4, #0xf\n    bne _021F7312\n    ldr r0, _021F7328 ; =0x0000189C\n    ldr r1, [r5, r0]\n    cmp r1, #2\n    blt _021F72F6\n    cmp r1, #3\n    bgt _021F72F6\n    add r4, r1, #0\n    add r4, #0xc\n    sub r0, #0x38\n    lsl r1, r4, #0x18\n    lsl r2, r6, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0x13\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F7312\n    cmp r1, #0xe\n    blt _021F7312\n    cmp r1, #0xf\n    bgt _021F7312\n    ldr r0, _021F732C ; =0x00001864\n    add r4, r1, #0\n    lsl r1, r1, #0x18\n    lsl r2, r6, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0x13\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F719C\n    ldr r0, _021F7328 ; =0x0000189C\n    str r6, [r5, r0]\n    ldr r0, _021F7330 ; =0x000008E8\n    bl PlaySE\n    pop {r4, r5, r6, pc}\n    nop\n    _021F7328: .word 0x0000189C\n    _021F732C: .word 0x00001864\n    _021F7330: .word 0x000008E8"
    );
    #endif
}

void ov18_021F7334(void) {
    /* Original at 0x021F7334 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    bl ov18_021F719C\n    ldr r0, [r5]\n    mov r1, #1\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    ldr r0, _021F7350 ; =0x0000189C\n    str r4, [r5, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _021F7350: .word 0x0000189C"
    );
    #endif
}

void ov18_021F7354(void) {
    /* Original at 0x021F7354 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x25\n    str r0, [sp, #8]\n    ldr r0, _021F738C ; =ov18_021FB6C8\n    ldr r1, _021F7390 ; =ov18_021FB780\n    ldr r2, _021F7394 ; =ov18_021FB648\n    add r3, r4, #0\n    bl GridInputHandler_Create\n    ldr r1, _021F7398 ; =0x00001864\n    mov r2, #1\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F7444\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _021F738C: .word ov18_021FB6C8\n    _021F7390: .word ov18_021FB780\n    _021F7394: .word ov18_021FB648\n    _021F7398: .word 0x00001864"
    );
    #endif
}

void ov18_021F739C(void) {
    /* Original at 0x021F739C */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _021F7438 ; =0x00001864\n    ldr r0, [r5, r0]\n    bl GridInputHandler_GetNextInput\n    add r4, r0, #0\n    ldr r0, [r5]\n    mov r1, #0\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    ldr r1, _021F743C ; =gSystem\n    mov r0, #8\n    ldr r2, [r1, #0x48]\n    tst r0, r2\n    beq _021F73C2\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    cmp r4, #0\n    bne _021F73DC\n    ldr r1, [r1, #0x4c]\n    mov r0, #0x20\n    tst r0, r1\n    beq _021F73D2\n    mov r0, #5\n    pop {r4, r5, r6, pc}\n    mov r0, #0x10\n    tst r0, r1\n    beq _021F73DC\n    mov r0, #4\n    pop {r4, r5, r6, pc}\n    cmp r4, #1\n    bne _021F73F8\n    ldr r0, _021F743C ; =gSystem\n    ldr r1, [r0, #0x4c]\n    mov r0, #0x20\n    tst r0, r1\n    beq _021F73EE\n    mov r0, #7\n    pop {r4, r5, r6, pc}\n    mov r0, #0x10\n    tst r0, r1\n    beq _021F73F8\n    mov r0, #6\n    pop {r4, r5, r6, pc}\n    ldr r0, _021F7440 ; =ov18_021FB718\n    bl TouchscreenHitbox_FindRectAtTouchHeld\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _021F742C\n    ldr r0, [r5]\n    mov r1, #1\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    ldr r0, _021F7438 ; =0x00001864\n    lsr r4, r6, #1\n    lsl r1, r4, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F7444\n    add r0, r6, #4\n    pop {r4, r5, r6, pc}\n    ldr r0, _021F7438 ; =0x00001864\n    ldr r0, [r5, r0]\n    bl GridInputHandler_HandleInput_AllowHold\n    pop {r4, r5, r6, pc}\n    nop\n    _021F7438: .word 0x00001864\n    _021F743C: .word gSystem\n    _021F7440: .word ov18_021FB718"
    );
    #endif
}

void ov18_021F7444(void) {
    /* Original at 0x021F7444 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021F74A0 ; =0x00001864\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    cmp r4, #0\n    bne _021F7470\n    ldr r1, _021F74A4 ; =0x0000187C\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov18_021F3AD0\n    add r1, sp, #0\n    strb r0, [r1, #1]\n    b _021F7482\n    cmp r4, #1\n    bne _021F7482\n    ldr r1, _021F74A8 ; =0x00001878\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov18_021F3AD0\n    add r1, sp, #0\n    strb r0, [r1, #1]\n    mov r0, #0x67\n    add r2, sp, #0\n    lsl r0, r0, #4\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetPositionXY\n    ldr r2, _021F74AC ; =ov18_021FB618\n    add r0, r5, #0\n    ldrb r2, [r2, r4]\n    mov r1, #0\n    bl ov18_021F118C\n    pop {r3, r4, r5, pc}\n    _021F74A0: .word 0x00001864\n    _021F74A4: .word 0x0000187C\n    _021F74A8: .word 0x00001878\n    _021F74AC: .word ov18_021FB618"
    );
    #endif
}

void ov18_021F74B0(void) {
    /* Original at 0x021F74B0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov18_021F7444\n    ldr r0, _021F74C0 ; =0x000008E8\n    bl PlaySE\n    pop {r3, pc}\n    nop\n    _021F74C0: .word 0x000008E8"
    );
    #endif
}

void ov18_021F74C4(void) {
    /* Original at 0x021F74C4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov18_021F7444\n    ldr r0, [r4]\n    mov r1, #1\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F74D8(void) {
    /* Original at 0x021F74D8 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x25\n    str r0, [sp, #8]\n    ldr r0, _021F7510 ; =ov18_021FB6DC\n    ldr r1, _021F7514 ; =ov18_021FB7A0\n    ldr r2, _021F7518 ; =ov18_021FB678\n    add r3, r4, #0\n    bl GridInputHandler_Create\n    ldr r1, _021F751C ; =0x00001864\n    mov r2, #1\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F75C8\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _021F7510: .word ov18_021FB6DC\n    _021F7514: .word ov18_021FB7A0\n    _021F7518: .word ov18_021FB678\n    _021F751C: .word 0x00001864"
    );
    #endif
}

void ov18_021F7520(void) {
    /* Original at 0x021F7520 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _021F75BC ; =0x00001864\n    ldr r0, [r5, r0]\n    bl GridInputHandler_GetNextInput\n    add r4, r0, #0\n    ldr r0, [r5]\n    mov r1, #0\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    ldr r1, _021F75C0 ; =gSystem\n    mov r0, #8\n    ldr r2, [r1, #0x48]\n    tst r0, r2\n    beq _021F7546\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    cmp r4, #0\n    bne _021F7560\n    ldr r1, [r1, #0x4c]\n    mov r0, #0x20\n    tst r0, r1\n    beq _021F7556\n    mov r0, #5\n    pop {r4, r5, r6, pc}\n    mov r0, #0x10\n    tst r0, r1\n    beq _021F7560\n    mov r0, #4\n    pop {r4, r5, r6, pc}\n    cmp r4, #1\n    bne _021F757C\n    ldr r0, _021F75C0 ; =gSystem\n    ldr r1, [r0, #0x4c]\n    mov r0, #0x20\n    tst r0, r1\n    beq _021F7572\n    mov r0, #7\n    pop {r4, r5, r6, pc}\n    mov r0, #0x10\n    tst r0, r1\n    beq _021F757C\n    mov r0, #6\n    pop {r4, r5, r6, pc}\n    ldr r0, _021F75C4 ; =ov18_021FB718\n    bl TouchscreenHitbox_FindRectAtTouchHeld\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _021F75B0\n    ldr r0, [r5]\n    mov r1, #1\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    ldr r0, _021F75BC ; =0x00001864\n    lsr r4, r6, #1\n    lsl r1, r4, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F75C8\n    add r0, r6, #4\n    pop {r4, r5, r6, pc}\n    ldr r0, _021F75BC ; =0x00001864\n    ldr r0, [r5, r0]\n    bl GridInputHandler_HandleInput_AllowHold\n    pop {r4, r5, r6, pc}\n    nop\n    _021F75BC: .word 0x00001864\n    _021F75C0: .word gSystem\n    _021F75C4: .word ov18_021FB718"
    );
    #endif
}

void ov18_021F75C8(void) {
    /* Original at 0x021F75C8 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021F7628 ; =0x00001864\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    cmp r4, #0\n    bne _021F75F4\n    ldr r1, _021F762C ; =0x00001884\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    bl ov18_021F3AD0\n    add r1, sp, #0\n    strb r0, [r1, #1]\n    b _021F7608\n    cmp r4, #1\n    bne _021F7608\n    mov r1, #0x62\n    lsl r1, r1, #6\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov18_021F3AD0\n    add r1, sp, #0\n    strb r0, [r1, #1]\n    mov r0, #0x67\n    add r2, sp, #0\n    lsl r0, r0, #4\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetPositionXY\n    ldr r2, _021F7630 ; =ov18_021FB61C\n    add r0, r5, #0\n    ldrb r2, [r2, r4]\n    mov r1, #0\n    bl ov18_021F118C\n    pop {r3, r4, r5, pc}\n    nop\n    _021F7628: .word 0x00001864\n    _021F762C: .word 0x00001884\n    _021F7630: .word ov18_021FB61C"
    );
    #endif
}

void ov18_021F7634(void) {
    /* Original at 0x021F7634 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov18_021F75C8\n    ldr r0, _021F7644 ; =0x000008E8\n    bl PlaySE\n    pop {r3, pc}\n    nop\n    _021F7644: .word 0x000008E8"
    );
    #endif
}

void ov18_021F7648(void) {
    /* Original at 0x021F7648 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov18_021F75C8\n    ldr r0, [r4]\n    mov r1, #1\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F765C(void) {
    System_GetTouchHeldCoords();
}

void ov18_021F7668(void) {
    /* Original at 0x021F7668 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x25\n    str r0, [sp, #8]\n    ldr r0, _021F76A0 ; =ov18_021FB744\n    ldr r1, _021F76A4 ; =ov18_021FB8D4\n    ldr r2, _021F76A8 ; =ov18_021FB6B8\n    add r3, r4, #0\n    bl GridInputHandler_Create\n    ldr r1, _021F76AC ; =0x00001864\n    mov r2, #1\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F76E0\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _021F76A0: .word ov18_021FB744\n    _021F76A4: .word ov18_021FB8D4\n    _021F76A8: .word ov18_021FB6B8\n    _021F76AC: .word 0x00001864"
    );
    #endif
}

void ov18_021F76B0(void) {
    /* Original at 0x021F76B0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    ldr r0, _021F76D8 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #8\n    tst r0, r1\n    beq _021F76CC\n    mov r0, #4\n    pop {r4, pc}\n    ldr r0, _021F76DC ; =0x00001864\n    ldr r0, [r4, r0]\n    bl GridInputHandler_HandleInput_AllowHold\n    pop {r4, pc}\n    nop\n    _021F76D8: .word gSystem\n    _021F76DC: .word 0x00001864"
    );
    #endif
}

void ov18_021F76E0(void) {
    /* Original at 0x021F76E0 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021F7718 ; =0x00001864\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x67\n    add r2, sp, #0\n    lsl r0, r0, #4\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetPositionXY\n    ldr r2, _021F771C ; =ov18_021FB620\n    add r0, r5, #0\n    ldrb r2, [r2, r4]\n    mov r1, #0\n    bl ov18_021F118C\n    pop {r3, r4, r5, pc}\n    nop\n    _021F7718: .word 0x00001864\n    _021F771C: .word ov18_021FB620"
    );
    #endif
}

void ov18_021F7720(void) {
    /* Original at 0x021F7720 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov18_021F76E0\n    ldr r0, _021F7730 ; =0x000008E8\n    bl PlaySE\n    pop {r3, pc}\n    nop\n    _021F7730: .word 0x000008E8"
    );
    #endif
}

void ov18_021F7734(void) {
    /* Original at 0x021F7734 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov18_021F76E0\n    ldr r0, [r4]\n    mov r1, #1\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F7748(void) {
    /* Original at 0x021F7748 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x25\n    str r0, [sp, #8]\n    ldr r0, _021F7780 ; =ov18_021FB9A8\n    ldr r1, _021F7784 ; =ov18_021FBB0C\n    ldr r2, _021F7788 ; =ov18_021FB658\n    add r3, r4, #0\n    bl GridInputHandler_Create\n    ldr r1, _021F778C ; =0x00001864\n    mov r2, #1\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F11C0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov18_021F77C0\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _021F7780: .word ov18_021FB9A8\n    _021F7784: .word ov18_021FBB0C\n    _021F7788: .word ov18_021FB658\n    _021F778C: .word 0x00001864"
    );
    #endif
}

void ov18_021F7790(void) {
    /* Original at 0x021F7790 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    ldr r0, _021F77B8 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #8\n    tst r0, r1\n    beq _021F77AC\n    mov r0, #0xf\n    pop {r4, pc}\n    ldr r0, _021F77BC ; =0x00001864\n    ldr r0, [r4, r0]\n    bl GridInputHandler_HandleInput_AllowHold\n    pop {r4, pc}\n    nop\n    _021F77B8: .word gSystem\n    _021F77BC: .word 0x00001864"
    );
    #endif
}

void ov18_021F77C0(void) {
    /* Original at 0x021F77C0 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021F77F8 ; =0x00001864\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x67\n    add r2, sp, #0\n    lsl r0, r0, #4\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetPositionXY\n    ldr r2, _021F77FC ; =ov18_021FBD28\n    add r0, r5, #0\n    ldrb r2, [r2, r4]\n    mov r1, #0\n    bl ov18_021F118C\n    pop {r3, r4, r5, pc}\n    nop\n    _021F77F8: .word 0x00001864\n    _021F77FC: .word ov18_021FBD28"
    );
    #endif
}

void ov18_021F7800(void) {
    /* Original at 0x021F7800 */
    /* Requires manual decompilation - 155 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    cmp r4, #0xf\n    bne _021F789E\n    cmp r6, #0\n    bne _021F7858\n    ldr r0, _021F7948 ; =0x0000189C\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    blt _021F7832\n    cmp r1, #2\n    bgt _021F7832\n    sub r0, #0x38\n    add r6, r1, #0\n    lsl r1, r1, #0x18\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0xf\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F7932\n    cmp r1, #0xa\n    blt _021F7932\n    cmp r1, #0xc\n    bgt _021F7932\n    add r0, r1, #0\n    mov r1, #5\n    bl _s32_div_f\n    ldr r0, _021F794C ; =0x00001864\n    add r6, r1, #0\n    lsl r1, r6, #0x18\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0xf\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F7932\n    cmp r6, #0xa\n    bne _021F7932\n    ldr r0, _021F7948 ; =0x0000189C\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    blt _021F7880\n    cmp r1, #2\n    bgt _021F7880\n    add r6, r1, #0\n    add r6, #0xa\n    sub r0, #0x38\n    lsl r1, r6, #0x18\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0xf\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F7932\n    cmp r1, #0xa\n    blt _021F7932\n    cmp r1, #0xc\n    bgt _021F7932\n    ldr r0, _021F794C ; =0x00001864\n    add r6, r1, #0\n    lsl r1, r1, #0x18\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0xf\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F7932\n    cmp r4, #0x10\n    bne _021F7932\n    cmp r6, #4\n    bne _021F78EE\n    ldr r0, _021F7948 ; =0x0000189C\n    ldr r1, [r5, r0]\n    cmp r1, #3\n    blt _021F78C8\n    cmp r1, #4\n    bgt _021F78C8\n    sub r0, #0x38\n    add r6, r1, #0\n    lsl r1, r1, #0x18\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0x10\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F7932\n    cmp r1, #0xd\n    blt _021F7932\n    cmp r1, #0xe\n    bgt _021F7932\n    add r0, r1, #0\n    mov r1, #5\n    bl _s32_div_f\n    ldr r0, _021F794C ; =0x00001864\n    add r6, r1, #0\n    lsl r1, r6, #0x18\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0x10\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F7932\n    cmp r6, #0xe\n    bne _021F7932\n    ldr r0, _021F7948 ; =0x0000189C\n    ldr r1, [r5, r0]\n    cmp r1, #3\n    blt _021F7916\n    cmp r1, #4\n    bgt _021F7916\n    add r6, r1, #0\n    add r6, #0xa\n    sub r0, #0x38\n    lsl r1, r6, #0x18\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0x10\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    b _021F7932\n    cmp r1, #0xd\n    blt _021F7932\n    cmp r1, #0xe\n    bgt _021F7932\n    ldr r0, _021F794C ; =0x00001864\n    add r6, r1, #0\n    lsl r1, r1, #0x18\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0x10\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov18_021F77C0\n    ldr r0, _021F7948 ; =0x0000189C\n    str r4, [r5, r0]\n    ldr r0, _021F7950 ; =0x000008E8\n    bl PlaySE\n    pop {r4, r5, r6, pc}\n    nop\n    _021F7948: .word 0x0000189C\n    _021F794C: .word 0x00001864\n    _021F7950: .word 0x000008E8"
    );
    #endif
}

void ov18_021F7954(void) {
    /* Original at 0x021F7954 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    bl ov18_021F77C0\n    ldr r0, [r5]\n    mov r1, #1\n    ldr r0, [r0, #0xc]\n    bl MenuInputStateMgr_SetState\n    ldr r0, _021F7970 ; =0x0000189C\n    str r4, [r5, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _021F7970: .word 0x0000189C"
    );
    #endif
}

void ov18_021F7974(void) {
    /* Original at 0x021F7974 */
    /* Requires manual decompilation - 234 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, sp, #4\n    add r1, sp, #0\n    bl System_GetTouchNewCoords\n    cmp r0, #1\n    bne _021F7A1A\n    ldr r0, _021F7B58 ; =ov18_021FB8A4\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021F799C\n    add sp, #8\n    add r0, r1, #0\n    pop {r4, r5, r6, pc}\n    lsl r1, r0, #2\n    ldr r0, _021F7B5C ; =ov18_021FB84C\n    ldr r4, [r0, r1]\n    cmp r4, #0\n    bne _021F79FC\n    ldr r1, [sp]\n    ldr r0, [sp, #4]\n    sub r1, r1, #4\n    sub r0, #0x1b\n    str r1, [sp]\n    mov r1, #0x28\n    str r0, [sp, #4]\n    bl _u32_div_f\n    add r6, r0, #0\n    ldr r0, [sp]\n    mov r1, #0x28\n    bl _u32_div_f\n    lsl r1, r0, #2\n    add r0, r0, r1\n    add r0, r6, r0\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    ldr r0, _021F7B60 ; =0x0000185A\n    ldrb r1, [r5, r0]\n    cmp r2, r1\n    bne _021F79F2\n    cmp r1, #0\n    bne _021F79EC\n    sub r0, r0, #1\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    bne _021F79EC\n    ldr r0, _021F7B64 ; =0x000008E9\n    bl PlaySE\n    add sp, #8\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    add sp, #8\n    mov r0, #4\n    pop {r4, r5, r6, pc}\n    strb r2, [r5, r0]\n    ldr r0, _021F7B64 ; =0x000008E9\n    bl PlaySE\n    b _021F7A14\n    cmp r4, #2\n    bne _021F7A08\n    ldr r0, _021F7B64 ; =0x000008E9\n    bl PlaySE\n    b _021F7A14\n    cmp r4, #5\n    bne _021F7A14\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    add sp, #8\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    ldr r1, _021F7B68 ; =gSystem\n    mov r0, #0x40\n    ldr r2, [r1, #0x4c]\n    tst r0, r2\n    beq _021F7A42\n    ldr r0, _021F7B60 ; =0x0000185A\n    ldrb r1, [r5, r0]\n    cmp r1, #5\n    bhs _021F7A32\n    add sp, #8\n    mov r0, #0xa\n    pop {r4, r5, r6, pc}\n    sub r1, r1, #5\n    strb r1, [r5, r0]\n    ldr r0, _021F7B6C ; =0x000008E8\n    bl PlaySE\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #0x80\n    tst r0, r2\n    beq _021F7A6E\n    ldr r0, _021F7B60 ; =0x0000185A\n    ldrb r0, [r5, r0]\n    cmp r0, #0xa\n    blo _021F7A5A\n    cmp r0, #0xf\n    bhs _021F7A5A\n    add sp, #8\n    mov r0, #0xc\n    pop {r4, r5, r6, pc}\n    ldr r0, _021F7B60 ; =0x0000185A\n    ldrb r1, [r5, r0]\n    add r1, r1, #5\n    strb r1, [r5, r0]\n    ldr r0, _021F7B6C ; =0x000008E8\n    bl PlaySE\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #0x20\n    add r3, r2, #0\n    tst r3, r0\n    beq _021F7AA6\n    ldr r2, _021F7B60 ; =0x0000185A\n    ldrb r1, [r5, r2]\n    cmp r1, #0\n    beq _021F7A8E\n    sub r0, r1, #1\n    strb r0, [r5, r2]\n    ldr r0, _021F7B6C ; =0x000008E8\n    bl PlaySE\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    sub r1, r2, #1\n    ldrb r1, [r5, r1]\n    cmp r1, #0\n    beq _021F7AA0\n    mov r0, #0xe\n    strb r0, [r5, r2]\n    add sp, #8\n    mov r0, #9\n    pop {r4, r5, r6, pc}\n    add sp, #8\n    sub r0, #0x21\n    pop {r4, r5, r6, pc}\n    mov r0, #0x10\n    tst r0, r2\n    beq _021F7AEA\n    ldr r0, _021F7B60 ; =0x0000185A\n    ldrb r1, [r5, r0]\n    add r1, r1, #1\n    cmp r1, #0xf\n    beq _021F7AC4\n    strb r1, [r5, r0]\n    ldr r0, _021F7B6C ; =0x000008E8\n    bl PlaySE\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov18_021F8950\n    ldr r1, _021F7B70 ; =0x00001859\n    ldrb r2, [r5, r1]\n    add r2, r2, #1\n    cmp r2, r0\n    bhi _021F7AE2\n    mov r2, #0\n    add r0, r1, #1\n    strb r2, [r5, r0]\n    add sp, #8\n    mov r0, #0xb\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #8\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    ldr r0, [r1, #0x48]\n    mov r1, #1\n    tst r1, r0\n    beq _021F7AF8\n    add sp, #8\n    mov r0, #4\n    pop {r4, r5, r6, pc}\n    mov r3, #2\n    add r1, r0, #0\n    tst r1, r3\n    beq _021F7B0E\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    add sp, #8\n    mov r0, #6\n    pop {r4, r5, r6, pc}\n    lsl r1, r3, #9\n    tst r1, r0\n    beq _021F7B1A\n    add sp, #8\n    mov r0, #3\n    pop {r4, r5, r6, pc}\n    lsl r1, r3, #0xa\n    tst r1, r0\n    beq _021F7B2C\n    ldr r0, _021F7B64 ; =0x000008E9\n    bl PlaySE\n    add sp, #8\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    lsl r1, r3, #8\n    tst r1, r2\n    beq _021F7B38\n    add sp, #8\n    mov r0, #9\n    pop {r4, r5, r6, pc}\n    add r3, #0xfe\n    add r1, r2, #0\n    tst r1, r3\n    beq _021F7B46\n    add sp, #8\n    mov r0, #0xb\n    pop {r4, r5, r6, pc}\n    mov r1, #4\n    tst r0, r1\n    beq _021F7B52\n    add sp, #8\n    mov r0, #8\n    pop {r4, r5, r6, pc}\n    sub r0, r1, #5\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _021F7B58: .word ov18_021FB8A4\n    _021F7B5C: .word ov18_021FB84C\n    _021F7B60: .word 0x0000185A\n    _021F7B64: .word 0x000008E9\n    _021F7B68: .word gSystem\n    _021F7B6C: .word 0x000008E8\n    _021F7B70: .word 0x00001859"
    );
    #endif
}

void ov18_021F7B74(void) {
    GridInputHandler_Free(0);
}

void ov18_021F7B90(void) {
    /* Original at 0x021F7B90 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov18_021F7B94(void) {
    /* Original at 0x021F7B94 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _021F7BE8\n    ldr r0, _021F7C04 ; =ov18_021FB704\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _021F7BFE\n    add r0, sp, #4\n    add r1, sp, #0\n    bl System_GetTouchNewCoords\n    ldr r0, _021F7C08 ; =ov18_021FB698\n    lsl r1, r6, #2\n    ldr r6, [r0, r1]\n    cmp r6, #1\n    bne _021F7BDE\n    ldr r1, _021F7C0C ; =0x000018A2\n    ldr r0, [r5]\n    ldrh r1, [r5, r1]\n    ldr r0, [r0]\n    bl Pokedex_CheckMonCaughtFlag\n    cmp r0, #0\n    bne _021F7BDE\n    mov r0, #0\n    add sp, #8\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    str r0, [r4]\n    add sp, #8\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, _021F7C10 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r1, r0\n    beq _021F7BFC\n    mov r0, #0\n    str r0, [r4]\n    add sp, #8\n    mov r0, #3\n    pop {r4, r5, r6, pc}\n    sub r0, r0, #3\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _021F7C04: .word ov18_021FB704\n    _021F7C08: .word ov18_021FB698\n    _021F7C0C: .word 0x000018A2\n    _021F7C10: .word gSystem"
    );
    #endif
}

void ov18_021F7C14(void) {
    /* Original at 0x021F7C14 */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    bl ov18_021F7B94\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021F7CE6\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _021F7C4C\n    ldr r0, _021F7CE8 ; =ov18_021FB934\n    bl TouchscreenHitbox_FindHitboxAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021F7C40\n    add r0, r1, #0\n    pop {r3, r4, r5, pc}\n    mov r1, #1\n    str r1, [r5]\n    lsl r1, r0, #2\n    ldr r0, _021F7CEC ; =ov18_021FB904\n    ldr r0, [r0, r1]\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    str r0, [r5]\n    ldr r2, _021F7CF0 ; =gSystem\n    mov r0, #0x40\n    ldr r1, [r2, #0x4c]\n    tst r0, r1\n    beq _021F7C5E\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    mov r0, #0x80\n    tst r0, r1\n    beq _021F7C68\n    mov r0, #7\n    pop {r3, r4, r5, pc}\n    ldr r0, [r2, #0x48]\n    mov r2, #1\n    tst r2, r0\n    beq _021F7C88\n    ldr r0, _021F7CF4 ; =0x000018C9\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    bne _021F7C7C\n    mov r0, #0xe\n    pop {r3, r4, r5, pc}\n    cmp r0, #1\n    bne _021F7C84\n    mov r0, #0xf\n    pop {r3, r4, r5, pc}\n    mov r0, #0xd\n    pop {r3, r4, r5, pc}\n    mov r3, #4\n    add r2, r0, #0\n    tst r2, r3\n    beq _021F7CA0\n    ldr r0, _021F7CF8 ; =0x000018C8\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    bne _021F7C9C\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    mov r0, #0xb\n    pop {r3, r4, r5, pc}\n    ldr r2, _021F7CF8 ; =0x000018C8\n    ldrsb r2, [r4, r2]\n    cmp r2, #0\n    bne _021F7CB2\n    add r3, #0xfc\n    tst r0, r3\n    beq _021F7CBC\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    lsl r2, r3, #7\n    tst r0, r2\n    beq _021F7CBC\n    mov r0, #0xb\n    pop {r3, r4, r5, pc}\n    mov r0, #0x20\n    tst r0, r1\n    beq _021F7CC6\n    mov r0, #0x10\n    pop {r3, r4, r5, pc}\n    mov r0, #0x10\n    tst r1, r0\n    beq _021F7CE4\n    ldr r1, _021F7CFC ; =0x000018A2\n    ldr r0, [r4]\n    ldrh r1, [r4, r1]\n    ldr r0, [r0]\n    bl Pokedex_CheckMonCaughtFlag\n    cmp r0, #0\n    beq _021F7CE0\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    sub r0, #0x11\n    pop {r3, r4, r5, pc}\n    _021F7CE8: .word ov18_021FB934\n    _021F7CEC: .word ov18_021FB904\n    _021F7CF0: .word gSystem\n    _021F7CF4: .word 0x000018C9\n    _021F7CF8: .word 0x000018C8\n    _021F7CFC: .word 0x000018A2"
    );
    #endif
}

void ov18_021F7D00(void) {
    /* Original at 0x021F7D00 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl ov18_021F7B94\n    mov r3, #0\n    mvn r3, r3\n    cmp r0, r3\n    bne _021F7D28\n    mov r0, #0\n    ldr r1, _021F7D2C ; =gSystem\n    str r0, [r4]\n    ldr r2, [r1, #0x4c]\n    mov r1, #0x20\n    tst r1, r2\n    bne _021F7D28\n    mov r0, #0x10\n    tst r0, r2\n    beq _021F7D26\n    mov r3, #2\n    add r0, r3, #0\n    pop {r4, pc}\n    nop\n    _021F7D2C: .word gSystem"
    );
    #endif
}

void ov18_021F7D30(void) {
    /* Original at 0x021F7D30 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    bl ov18_021F7B94\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021F7DBA\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _021F7D68\n    ldr r0, _021F7DBC ; =ov18_021FB804\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021F7D5C\n    add r0, r1, #0\n    pop {r3, r4, r5, pc}\n    mov r1, #1\n    str r1, [r5]\n    lsl r1, r0, #2\n    ldr r0, _021F7DC0 ; =ov18_021FB760\n    ldr r0, [r0, r1]\n    pop {r3, r4, r5, pc}\n    ldr r2, _021F7DC4 ; =gSystem\n    mov r0, #0\n    str r0, [r5]\n    ldr r0, [r2, #0x4c]\n    mov r1, #0x40\n    tst r1, r0\n    beq _021F7D7A\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    mov r1, #0x80\n    tst r1, r0\n    beq _021F7D84\n    mov r0, #7\n    pop {r3, r4, r5, pc}\n    mov r1, #0x20\n    tst r1, r0\n    beq _021F7DA2\n    ldr r1, _021F7DC8 ; =0x000018A2\n    ldr r0, [r4]\n    ldrh r1, [r4, r1]\n    ldr r0, [r0]\n    bl Pokedex_CheckMonCaughtFlag\n    cmp r0, #0\n    beq _021F7D9E\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r1, #0x10\n    tst r0, r1\n    beq _021F7DAC\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    ldr r1, [r2, #0x48]\n    mov r0, #1\n    tst r1, r0\n    beq _021F7DB8\n    mov r0, #0xb\n    pop {r3, r4, r5, pc}\n    sub r0, r0, #2\n    pop {r3, r4, r5, pc}\n    _021F7DBC: .word ov18_021FB804\n    _021F7DC0: .word ov18_021FB760\n    _021F7DC4: .word gSystem\n    _021F7DC8: .word 0x000018A2"
    );
    #endif
}

void ov18_021F7DCC(void) {
    /* Original at 0x021F7DCC */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _021F7DF8\n    ldr r0, _021F7E60 ; =ov18_021FB7E0\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021F7DEC\n    add r0, r1, #0\n    pop {r3, r4, r5, pc}\n    mov r1, #1\n    str r1, [r4]\n    lsl r1, r0, #2\n    ldr r0, _021F7E64 ; =ov18_021FB7C0\n    ldr r0, [r0, r1]\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    ldr r2, _021F7E68 ; =gSystem\n    str r0, [r4]\n    ldr r3, [r2, #0x4c]\n    mov r1, #0x40\n    tst r1, r3\n    beq _021F7E14\n    ldr r1, _021F7E6C ; =0x000018C7\n    ldrb r1, [r5, r1]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1b\n    beq _021F7E5C\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    mov r0, #0x80\n    tst r0, r3\n    beq _021F7E2C\n    ldr r0, _021F7E6C ; =0x000018C7\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1b\n    bne _021F7E28\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    ldr r2, [r2, #0x48]\n    mov r0, #0x20\n    tst r0, r2\n    beq _021F7E38\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    mov r0, #0x10\n    add r1, r2, #0\n    tst r1, r0\n    beq _021F7E44\n    mov r0, #7\n    pop {r3, r4, r5, pc}\n    lsl r0, r0, #6\n    tst r0, r2\n    beq _021F7E4E\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    mov r0, #3\n    add r1, r2, #0\n    tst r1, r0\n    beq _021F7E5A\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    sub r0, r0, #4\n    pop {r3, r4, r5, pc}\n    nop\n    _021F7E60: .word ov18_021FB7E0\n    _021F7E64: .word ov18_021FB7C0\n    _021F7E68: .word gSystem\n    _021F7E6C: .word 0x000018C7"
    );
    #endif
}

void ov18_021F7E70(void) {
    /* Original at 0x021F7E70 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl ov18_021F7B94\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021F7EC8\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _021F7EA2\n    ldr r0, _021F7ECC ; =ov18_021FB630\n    bl TouchscreenHitbox_FindHitboxAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021F7E9A\n    add r0, r1, #0\n    pop {r4, pc}\n    mov r0, #1\n    str r0, [r4]\n    mov r0, #4\n    pop {r4, pc}\n    mov r0, #0\n    ldr r2, _021F7ED0 ; =gSystem\n    str r0, [r4]\n    ldr r3, [r2, #0x4c]\n    mov r1, #0x20\n    tst r1, r3\n    beq _021F7EB4\n    mov r0, #2\n    pop {r4, pc}\n    mov r1, #0x10\n    tst r1, r3\n    bne _021F7EC8\n    ldr r1, [r2, #0x48]\n    mov r0, #1\n    tst r1, r0\n    beq _021F7EC6\n    mov r0, #3\n    pop {r4, pc}\n    sub r0, r0, #2\n    pop {r4, pc}\n    nop\n    _021F7ECC: .word ov18_021FB630\n    _021F7ED0: .word gSystem"
    );
    #endif
}

void ov18_021F7ED4(void) {
    /* Original at 0x021F7ED4 */
    /* Requires manual decompilation - 290 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    str r2, [sp, #0x10]\n    add r5, r0, #0\n    ldr r2, _021F815C ; =0x00000878\n    add r7, r1, #0\n    add r1, r5, r2\n    mov r0, #0\n    sub r2, #0xc0\n    str r3, [sp, #0x14]\n    bl MIi_CpuClear32\n    ldr r1, _021F8160 ; =0x000003DA\n    mov r0, #0x25\n    bl Heap_AllocAtEnd\n    add r6, r0, #0\n    bne _021F7EFC\n    bl GF_AssertFail\n    ldr r2, _021F8160 ; =0x000003DA\n    add r0, r6, #0\n    mov r1, #0\n    bl memset\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    ldr r1, _021F8160 ; =0x000003DA\n    mov r0, #0x25\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    bne _021F7F1A\n    bl GF_AssertFail\n    ldr r2, _021F8160 ; =0x000003DA\n    add r0, r4, #0\n    mov r1, #0\n    bl memset\n    mov r0, #0\n    str r0, [sp, #0x18]\n    cmp r7, #0\n    add r1, sp, #0x20\n    bne _021F7F36\n    mov r0, #1\n    bl ov18_021F8168\n    b _021F7F3A\n    bl ov18_021F8168\n    add r7, r0, #0\n    ldr r0, [sp, #0x20]\n    add r1, sp, #0x1c\n    str r0, [sp]\n    ldr r2, [r5]\n    add r0, r6, #0\n    ldr r2, [r2]\n    add r3, r7, #0\n    bl ov18_021F8198\n    ldr r0, [sp, #0x1c]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5]\n    add r2, sp, #0x18\n    ldr r0, [r0]\n    add r3, r6, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    bl ov18_021F822C\n    ldr r2, [sp, #0x18]\n    add r0, r6, #0\n    add r1, r4, #0\n    lsl r2, r2, #1\n    bl memcpy\n    ldr r2, [sp, #0x18]\n    add r0, r4, #0\n    str r2, [sp, #0x1c]\n    mov r1, #0\n    lsl r2, r2, #1\n    bl memset\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5]\n    add r2, sp, #0x18\n    ldr r0, [r0]\n    add r3, r6, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x14]\n    bl ov18_021F82CC\n    ldr r2, [sp, #0x18]\n    cmp r2, #0\n    beq _021F8090\n    add r0, r6, #0\n    add r1, r4, #0\n    lsl r2, r2, #1\n    bl memcpy\n    ldr r2, [sp, #0x18]\n    add r0, r4, #0\n    str r2, [sp, #0x1c]\n    mov r1, #0\n    lsl r2, r2, #1\n    bl memset\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5]\n    add r2, sp, #0x18\n    ldr r0, [r0]\n    add r3, r6, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x38]\n    bl ov18_021F831C\n    ldr r2, [sp, #0x18]\n    cmp r2, #0\n    beq _021F8090\n    add r0, r6, #0\n    add r1, r4, #0\n    lsl r2, r2, #1\n    bl memcpy\n    ldr r2, [sp, #0x18]\n    add r0, r4, #0\n    str r2, [sp, #0x1c]\n    mov r1, #0\n    lsl r2, r2, #1\n    bl memset\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5]\n    add r2, sp, #0x18\n    ldr r0, [r0]\n    add r3, r6, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x3c]\n    bl ov18_021F831C\n    ldr r2, [sp, #0x18]\n    cmp r2, #0\n    beq _021F8090\n    add r0, r6, #0\n    add r1, r4, #0\n    lsl r2, r2, #1\n    bl memcpy\n    ldr r2, [sp, #0x18]\n    add r0, r4, #0\n    str r2, [sp, #0x1c]\n    mov r1, #0\n    lsl r2, r2, #1\n    bl memset\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5]\n    add r2, sp, #0x18\n    ldr r0, [r0]\n    add r3, r6, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x54]\n    bl ov18_021F8468\n    ldr r2, [sp, #0x18]\n    cmp r2, #0\n    beq _021F8142\n    add r0, r6, #0\n    add r1, r4, #0\n    lsl r2, r2, #1\n    bl memcpy\n    ldr r2, [sp, #0x18]\n    add r0, r4, #0\n    str r2, [sp, #0x1c]\n    mov r1, #0\n    lsl r2, r2, #1\n    bl memset\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, _021F8164 ; =0x00001860\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _021F8092\n    ldr r1, [sp, #0x50]\n    mov r0, #4\n    tst r0, r1\n    beq _021F8092\n    str r6, [sp]\n    ldr r0, [sp, #0x1c]\n    mov r1, #6\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    add r2, r4, #0\n    ldr r0, [r0]\n    add r3, sp, #0x18\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl ov18_021F8584\n    ldr r2, [sp, #0x18]\n    cmp r2, #0\n    bne _021F80B0\n    b _021F8142\n    str r6, [sp]\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x50]\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    add r2, r4, #0\n    ldr r0, [r0]\n    add r3, sp, #0x18\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl ov18_021F8584\n    ldr r2, [sp, #0x18]\n    cmp r2, #0\n    beq _021F8142\n    add r0, r6, #0\n    add r1, r4, #0\n    lsl r2, r2, #1\n    bl memcpy\n    ldr r2, [sp, #0x18]\n    add r0, r4, #0\n    str r2, [sp, #0x1c]\n    mov r1, #0\n    lsl r2, r2, #1\n    bl memset\n    mov r0, #0\n    str r0, [sp, #0x18]\n    add r0, sp, #0x18\n    str r0, [sp]\n    str r6, [sp, #4]\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x40]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, [sp, #0x44]\n    ldr r0, [r0]\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    add r3, r4, #0\n    bl ov18_021F8640\n    ldr r2, [sp, #0x18]\n    add r0, r6, #0\n    add r1, r4, #0\n    lsl r2, r2, #1\n    bl memcpy\n    ldr r2, [sp, #0x18]\n    add r0, r4, #0\n    str r2, [sp, #0x1c]\n    mov r1, #0\n    lsl r2, r2, #1\n    bl memset\n    mov r0, #0\n    str r0, [sp, #0x18]\n    add r0, sp, #0x18\n    str r0, [sp]\n    str r6, [sp, #4]\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x48]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, [sp, #0x4c]\n    ldr r0, [r0]\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    add r3, r4, #0\n    bl ov18_021F86D0\n    ldr r1, [r5]\n    ldr r0, _021F815C ; =0x00000878\n    ldr r1, [r1]\n    ldr r3, [sp, #0x18]\n    add r0, r5, r0\n    add r2, r4, #0\n    bl ov18_021F81D8\n    add r0, r7, #0\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r6, #0\n    bl Heap_Free\n    mov r0, #1\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F815C: .word 0x00000878\n    _021F8160: .word 0x000003DA\n    _021F8164: .word 0x00001860"
    );
    #endif
}

void ov18_021F8168(void) {
    /* Original at 0x021F8168 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    ; u32 size;\n    ; void * ret;\n    ; GF_ASSERT(a < 82);\n    cmp r5, #0x52\n    blo _021F8178\n    bl GF_AssertFail\n    ; ret = GfGfxLoader_LoadFromNarc_GetSizeOut(GetPokedexDataNarcID(), a0 + 11, FALSE, HEAP_ID_POKEDEX_APP, FALSE, &size);\n    bl GetPokedexDataNarcID\n    mov r2, #0\n    str r2, [sp]\n    add r1, sp, #8\n    add r5, #0xb\n    str r1, [sp, #4]\n    add r1, r5, #0\n    mov r3, #0x25\n    bl GfGfxLoader_LoadFromNarc_GetSizeOut\n    ; *a1 = size / 2;\n    ldr r1, [sp, #8]\n    lsr r1, r1, #1\n    str r1, [r4]\n    ; return ret;\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov18_021F8198(void) {
    /* Original at 0x021F8198 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r7, [sp, #0x20]\n    add r5, r1, #0\n    mov r6, #0\n    add r4, r3, #0\n    str r0, [sp]\n    str r2, [sp, #4]\n    str r6, [r5]\n    cmp r7, #0\n    bls _021F81D2\n    ldrh r1, [r4]\n    ldr r0, [sp, #4]\n    bl Pokedex_CheckMonSeenFlag\n    cmp r0, #0\n    beq _021F81CA\n    ldr r1, [r5]\n    ldrh r0, [r4]\n    lsl r2, r1, #1\n    ldr r1, [sp]\n    strh r0, [r1, r2]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add r6, r6, #1\n    add r4, r4, #2\n    cmp r6, r7\n    blo _021F81AE\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F81D8(void) {
    /* Original at 0x021F81D8 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r1, [sp]\n    add r5, r0, #0\n    ldr r1, _021F8228 ; =0x000007B4\n    add r0, r3, #0\n    strh r0, [r5, r1]\n    mov r7, #0\n    add r0, r1, #2\n    add r4, r2, #0\n    strh r7, [r5, r0]\n    str r3, [sp, #4]\n    add r0, r3, #0\n    beq _021F8224\n    add r0, r1, #2\n    add r6, r5, r0\n    ldrh r0, [r4]\n    strh r0, [r5]\n    ldrh r1, [r4]\n    ldr r0, [sp]\n    bl Pokedex_CheckMonCaughtFlag\n    cmp r0, #0\n    beq _021F8214\n    mov r0, #2\n    strh r0, [r5, #2]\n    ldrh r0, [r6]\n    add r0, r0, #1\n    strh r0, [r6]\n    b _021F8218\n    mov r0, #1\n    strh r0, [r5, #2]\n    ldr r0, [sp, #4]\n    add r7, r7, #1\n    add r4, r4, #2\n    add r5, r5, #4\n    cmp r7, r0\n    blo _021F81F8\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F8228: .word 0x000007B4"
    );
    #endif
}

void ov18_021F822C(void) {
    /* Original at 0x021F822C */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r7, r1, #0\n    add r5, r2, #0\n    mov r4, #0\n    str r3, [sp, #0x10]\n    cmp r0, #5\n    bhi _021F82A6\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    ov18_021F8248: ; jump table\n    ldr r2, [sp, #0x30]\n    add r0, r7, #0\n    add r1, r3, #0\n    lsl r2, r2, #1\n    bl memcpy\n    ldr r0, [sp, #0x30]\n    add sp, #0x18\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #2\n    add r1, sp, #0x14\n    bl ov18_021F8168\n    add r6, r0, #0\n    mov r4, #1\n    b _021F82AA\n    mov r0, #3\n    add r1, sp, #0x14\n    bl ov18_021F8168\n    add r6, r0, #0\n    b _021F82AA\n    mov r0, #4\n    add r1, sp, #0x14\n    bl ov18_021F8168\n    add r6, r0, #0\n    b _021F82AA\n    mov r0, #5\n    add r1, sp, #0x14\n    bl ov18_021F8168\n    add r6, r0, #0\n    b _021F82AA\n    mov r0, #6\n    add r1, sp, #0x14\n    bl ov18_021F8168\n    add r6, r0, #0\n    b _021F82AA\n    bl GF_AssertFail\n    str r6, [sp]\n    ldr r0, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x34]\n    str r4, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r3, [sp, #0x30]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl ov18_021F8764\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F82CC(void) {
    /* Original at 0x021F82CC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r1, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    cmp r0, #0x1a\n    bne _021F82EE\n    ldr r2, [sp, #0x28]\n    add r0, r6, #0\n    add r1, r4, #0\n    lsl r2, r2, #1\n    bl memcpy\n    ldr r0, [sp, #0x28]\n    add sp, #0x14\n    str r0, [r5]\n    pop {r4, r5, r6, r7, pc}\n    add r0, r0, #7\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    ldr r0, [sp, #0x28]\n    str r4, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x2c]\n    add r1, r5, #0\n    str r0, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    add r0, r6, #0\n    add r2, r7, #0\n    bl ov18_021F8764\n    add r0, r7, #0\n    bl Heap_Free\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F831C(void) {
    /* Original at 0x021F831C */
    /* Requires manual decompilation - 126 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl ov18_021F8970\n    cmp r0, #0x11\n    bls _021F8330\n    b _021F843E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    ov18_021F833C: ; jump table\n    ldr r5, [sp, #0x28]\n    add r0, r7, #0\n    add r1, r6, #0\n    lsl r2, r5, #1\n    bl memcpy\n    add sp, #0x14\n    str r5, [r4]\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0x33\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x34\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x35\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x36\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x37\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x38\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x39\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x3a\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x3b\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x3c\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x3d\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x3e\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x3f\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x40\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x41\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x42\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    mov r0, #0x43\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r5, r0, #0\n    b _021F8442\n    bl GF_AssertFail\n    ldr r0, [sp, #0x28]\n    str r6, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x2c]\n    add r1, r4, #0\n    str r0, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    add r0, r7, #0\n    add r2, r5, #0\n    bl ov18_021F8764\n    add r0, r5, #0\n    bl Heap_Free\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F8468(void) {
    /* Original at 0x021F8468 */
    /* Requires manual decompilation - 110 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r1, #0\n    add r4, r2, #0\n    add r5, r3, #0\n    cmp r0, #0xe\n    bhi _021F855C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    ov18_021F8482: ; jump table\n    ldr r2, [sp, #0x28]\n    add r0, r6, #0\n    add r1, r5, #0\n    lsl r2, r2, #1\n    bl memcpy\n    ldr r0, [sp, #0x28]\n    add sp, #0x14\n    str r0, [r4]\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0x44\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    b _021F8560\n    mov r0, #0x45\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    b _021F8560\n    mov r0, #0x46\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    b _021F8560\n    mov r0, #0x47\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    b _021F8560\n    mov r0, #0x48\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    b _021F8560\n    mov r0, #0x49\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    b _021F8560\n    mov r0, #0x4a\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    b _021F8560\n    mov r0, #0x4b\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    b _021F8560\n    mov r0, #0x4c\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    b _021F8560\n    mov r0, #0x4d\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    b _021F8560\n    mov r0, #0x4e\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    b _021F8560\n    mov r0, #0x4f\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    b _021F8560\n    mov r0, #0x50\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    b _021F8560\n    mov r0, #0x51\n    add r1, sp, #0x10\n    bl ov18_021F8168\n    add r7, r0, #0\n    b _021F8560\n    bl GF_AssertFail\n    ldr r0, [sp, #0x28]\n    str r5, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x2c]\n    add r1, r4, #0\n    str r0, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    add r0, r6, #0\n    add r2, r7, #0\n    bl ov18_021F8764\n    add r0, r7, #0\n    bl Heap_Free\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F8584(void) {
    /* Original at 0x021F8584 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #0x30]\n    add r7, r1, #0\n    str r0, [sp, #0x30]\n    mov r0, #8\n    add r4, r3, #0\n    str r2, [sp, #4]\n    ldr r6, [sp, #0x2c]\n    tst r0, r7\n    beq _021F85AC\n    ldr r1, [sp, #0x28]\n    add r0, r2, #0\n    lsl r2, r6, #1\n    bl memcpy\n    add sp, #0x10\n    str r6, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r7, #6\n    bne _021F85FA\n    mov r0, #0\n    str r0, [sp, #0xc]\n    cmp r6, #0\n    bls _021F8638\n    ldr r5, [sp, #0x28]\n    ldr r2, [sp]\n    ldr r0, _021F863C ; =0x00001854\n    ldrh r1, [r5]\n    ldr r0, [r2, r0]\n    add r2, r7, #0\n    ldrb r0, [r0, r1]\n    tst r2, r0\n    beq _021F85EA\n    mov r2, #1\n    tst r0, r2\n    bne _021F85EA\n    ldr r0, [sp, #0x30]\n    bl Pokedex_CheckMonSeenFlag\n    cmp r0, #0\n    beq _021F85EA\n    ldr r1, [r4]\n    ldrh r0, [r5]\n    lsl r2, r1, #1\n    ldr r1, [sp, #4]\n    strh r0, [r1, r2]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    ldr r0, [sp, #0xc]\n    add r5, r5, #2\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    cmp r0, r6\n    blo _021F85BA\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [sp, #8]\n    cmp r6, #0\n    bls _021F8638\n    ldr r5, [sp, #0x28]\n    ldr r2, [sp]\n    ldr r0, _021F863C ; =0x00001854\n    ldrh r1, [r5]\n    ldr r0, [r2, r0]\n    ldrb r0, [r0, r1]\n    tst r0, r7\n    beq _021F862C\n    ldr r0, [sp, #0x30]\n    bl Pokedex_CheckMonSeenFlag\n    cmp r0, #0\n    beq _021F862C\n    ldr r1, [r4]\n    ldrh r0, [r5]\n    lsl r2, r1, #1\n    ldr r1, [sp, #4]\n    strh r0, [r1, r2]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    ldr r0, [sp, #8]\n    add r5, r5, #2\n    add r0, r0, #1\n    str r0, [sp, #8]\n    cmp r0, r6\n    blo _021F8604\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F863C: .word 0x00001854"
    );
    #endif
}

void ov18_021F8640(void) {
    /* Original at 0x021F8640 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    ldr r0, [sp, #0x28]\n    str r3, [sp]\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x2c]\n    ldr r5, [sp, #0x20]\n    str r0, [sp, #0x2c]\n    cmp r1, #0\n    bne _021F866E\n    cmp r2, #0x98\n    bne _021F866E\n    ldr r2, [sp, #0x28]\n    ldr r1, [sp, #0x24]\n    add r0, r3, #0\n    lsl r2, r2, #1\n    bl memcpy\n    ldr r0, [sp, #0x28]\n    add sp, #0xc\n    str r0, [r5]\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x28]\n    mov r7, #0\n    cmp r0, #0\n    bls _021F86C4\n    lsl r0, r1, #2\n    str r0, [sp, #8]\n    lsl r0, r2, #2\n    ldr r4, [sp, #0x24]\n    str r0, [sp, #4]\n    ldr r0, _021F86C8 ; =0x00001848\n    ldrh r2, [r4]\n    ldr r1, [r6, r0]\n    ldr r3, [sp, #8]\n    lsl r0, r2, #2\n    ldr r1, [r1, r0]\n    ldr r0, _021F86CC ; =0x00001850\n    ldr r0, [r6, r0]\n    ldrh r3, [r3, r0]\n    cmp r1, r3\n    blt _021F86BA\n    ldr r3, [sp, #4]\n    ldrh r0, [r3, r0]\n    cmp r1, r0\n    bgt _021F86BA\n    ldr r0, [sp, #0x2c]\n    add r1, r2, #0\n    bl Pokedex_CheckMonCaughtFlag\n    cmp r0, #0\n    beq _021F86BA\n    ldr r1, [r5]\n    ldrh r0, [r4]\n    lsl r2, r1, #1\n    ldr r1, [sp]\n    strh r0, [r1, r2]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r0, [sp, #0x28]\n    add r7, r7, #1\n    add r4, r4, #2\n    cmp r7, r0\n    blo _021F8680\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021F86C8: .word 0x00001848\n    _021F86CC: .word 0x00001850"
    );
    #endif
}

void ov18_021F86D0(void) {
    /* Original at 0x021F86D0 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    ldr r0, [sp, #0x28]\n    str r3, [sp]\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x2c]\n    ldr r5, [sp, #0x20]\n    str r0, [sp, #0x2c]\n    cmp r1, #0\n    bne _021F86FE\n    cmp r2, #0x98\n    bne _021F86FE\n    ldr r2, [sp, #0x28]\n    ldr r1, [sp, #0x24]\n    add r0, r3, #0\n    lsl r2, r2, #1\n    bl memcpy\n    ldr r0, [sp, #0x28]\n    add sp, #0xc\n    str r0, [r5]\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x28]\n    mov r7, #0\n    cmp r0, #0\n    bls _021F8758\n    lsl r0, r1, #2\n    str r0, [sp, #8]\n    lsl r0, r2, #2\n    ldr r4, [sp, #0x24]\n    str r0, [sp, #4]\n    ldr r0, _021F875C ; =0x0000184C\n    ldrh r2, [r4]\n    ldr r1, [r6, r0]\n    ldr r3, [sp, #8]\n    lsl r0, r2, #2\n    ldr r1, [r1, r0]\n    ldr r0, _021F8760 ; =0x00001850\n    ldr r0, [r6, r0]\n    add r3, r3, r0\n    ldrh r3, [r3, #2]\n    cmp r1, r3\n    blt _021F874E\n    ldr r3, [sp, #4]\n    add r0, r3, r0\n    ldrh r0, [r0, #2]\n    cmp r1, r0\n    bgt _021F874E\n    ldr r0, [sp, #0x2c]\n    add r1, r2, #0\n    bl Pokedex_CheckMonCaughtFlag\n    cmp r0, #0\n    beq _021F874E\n    ldr r1, [r5]\n    ldrh r0, [r4]\n    lsl r2, r1, #1\n    ldr r1, [sp]\n    strh r0, [r1, r2]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r0, [sp, #0x28]\n    add r7, r7, #1\n    add r4, r4, #2\n    cmp r7, r0\n    blo _021F8710\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021F875C: .word 0x0000184C\n    _021F8760: .word 0x00001850"
    );
    #endif
}

void ov18_021F8764(void) {
    /* Original at 0x021F8764 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    str r1, [sp, #4]\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x34]\n    mov r1, #0\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #4]\n    str r2, [sp, #8]\n    str r1, [r0]\n    ldr r0, [sp, #0x30]\n    add r5, r3, #0\n    str r1, [sp, #0xc]\n    cmp r0, #1\n    bne _021F87D0\n    ldr r0, [sp, #0x2c]\n    cmp r0, #0\n    bls _021F8820\n    ldr r1, [sp, #0x28]\n    mov r0, #0\n    add r4, r0, #0\n    cmp r5, #0\n    bls _021F87BE\n    ldrh r2, [r1]\n    ldr r6, [sp, #8]\n    ldrh r3, [r6]\n    cmp r2, r3\n    bne _021F87B6\n    ldr r3, [sp, #4]\n    ldr r3, [r3]\n    lsl r4, r3, #1\n    ldr r3, [sp]\n    strh r2, [r3, r4]\n    ldr r2, [sp, #4]\n    ldr r2, [r2]\n    add r3, r2, #1\n    ldr r2, [sp, #4]\n    str r3, [r2]\n    b _021F87BE\n    add r4, r4, #1\n    add r6, r6, #2\n    cmp r4, r5\n    blo _021F879A\n    ldr r2, [sp, #0xc]\n    add r1, r1, #2\n    add r3, r2, #1\n    ldr r2, [sp, #0x2c]\n    str r3, [sp, #0xc]\n    cmp r3, r2\n    blo _021F8790\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x2c]\n    cmp r0, #0\n    bls _021F8820\n    ldr r7, [sp, #0x28]\n    mov r6, #0\n    cmp r5, #0\n    bls _021F8812\n    ldr r4, [sp, #8]\n    ldrh r1, [r7]\n    ldrh r0, [r4]\n    cmp r1, r0\n    bne _021F880A\n    ldr r0, [sp, #0x34]\n    bl Pokedex_CheckMonCaughtFlag\n    cmp r0, #0\n    beq _021F880A\n    ldr r0, [sp, #4]\n    ldrh r2, [r7]\n    ldr r0, [r0]\n    lsl r1, r0, #1\n    ldr r0, [sp]\n    strh r2, [r0, r1]\n    ldr r0, [sp, #4]\n    ldr r0, [r0]\n    add r1, r0, #1\n    ldr r0, [sp, #4]\n    str r1, [r0]\n    b _021F8812\n    add r6, r6, #1\n    add r4, r4, #2\n    cmp r6, r5\n    blo _021F87E0\n    ldr r0, [sp, #0xc]\n    add r7, r7, #2\n    add r1, r0, #1\n    ldr r0, [sp, #0x2c]\n    str r1, [sp, #0xc]\n    cmp r1, r0\n    blo _021F87D8\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F8824(void) {
    /* Original at 0x021F8824 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021F8834 ; =0x0000185A\n    ldrb r2, [r0, r1]\n    sub r1, r1, #1\n    ldrb r1, [r0, r1]\n    mov r0, #0xf\n    mul r0, r1\n    add r0, r2, r0\n    bx lr\n    _021F8834: .word 0x0000185A"
    );
    #endif
}

void ov18_021F8838(void) {
    ov18_021F8824();
}

void ov18_021F8850(void) {
    /* Original at 0x021F8850 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r2, _021F8880 ; =0x000007B4\n    mov r4, #0\n    ldrh r5, [r0, r2]\n    add r3, r4, #0\n    cmp r5, #0\n    bls _021F8878\n    cmp r4, #0\n    bne _021F8864\n    ldrh r4, [r0]\n    ldrh r2, [r0]\n    cmp r1, r2\n    bne _021F8870\n    add r0, r1, #0\n    pop {r4, r5}\n    bx lr\n    add r3, r3, #1\n    add r0, r0, #4\n    cmp r3, r5\n    blo _021F885E\n    add r0, r4, #0\n    pop {r4, r5}\n    bx lr\n    nop\n    _021F8880: .word 0x000007B4"
    );
    #endif
}

void ov18_021F8884(void) {
    /* Original at 0x021F8884 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r2, _021F8900 ; =0x00001030\n    add r5, r0, #0\n    add r4, r1, #0\n    add r1, r5, r2\n    mov r0, #0\n    lsr r2, r2, #1\n    bl MIi_CpuClear32\n    cmp r4, #1\n    ldr r0, _021F8904 ; =0x0000102C\n    bne _021F88D6\n    ldrh r0, [r5, r0]\n    mov r6, #0\n    cmp r0, #0\n    bls _021F88FE\n    ldr r7, _021F8904 ; =0x0000102C\n    add r4, r5, #0\n    ldr r0, _021F8908 ; =0x00001858\n    ldr r1, _021F890C ; =0x00000878\n    ldrb r0, [r5, r0]\n    ldrh r1, [r4, r1]\n    bl Pokedex_ConvertToCurrentDexNo\n    ldr r1, _021F890C ; =0x00000878\n    sub r0, r0, #1\n    ldrh r2, [r4, r1]\n    lsl r0, r0, #2\n    ldr r1, _021F8900 ; =0x00001030\n    add r0, r5, r0\n    strh r2, [r0, r1]\n    ldr r1, _021F8910 ; =0x0000087A\n    add r6, r6, #1\n    ldrh r2, [r4, r1]\n    ldr r1, _021F8914 ; =0x00001032\n    add r4, r4, #4\n    strh r2, [r0, r1]\n    ldrh r0, [r5, r7]\n    cmp r6, r0\n    blo _021F88A8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5, r0]\n    mov r1, #0\n    cmp r0, #0\n    bls _021F88FE\n    ldr r3, _021F8918 ; =0x00001034\n    ldr r4, _021F8910 ; =0x0000087A\n    add r7, r3, #0\n    add r0, r5, #0\n    add r6, r3, #2\n    sub r7, #8\n    ldr r2, _021F890C ; =0x00000878\n    add r1, r1, #1\n    ldrh r2, [r0, r2]\n    strh r2, [r0, r3]\n    ldrh r2, [r0, r4]\n    strh r2, [r0, r6]\n    ldrh r2, [r5, r7]\n    add r0, r0, #4\n    cmp r1, r2\n    blo _021F88EA\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F8900: .word 0x00001030\n    _021F8904: .word 0x0000102C\n    _021F8908: .word 0x00001858\n    _021F890C: .word 0x00000878\n    _021F8910: .word 0x0000087A\n    _021F8914: .word 0x00001032\n    _021F8918: .word 0x00001034"
    );
    #endif
}

void ov18_021F891C(void) {
    /* Original at 0x021F891C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r2, r0, #0\n    cmp r1, #0\n    bne _021F892A\n    ldr r0, _021F8944 ; =0x0000102C\n    ldrh r0, [r2, r0]\n    pop {r3, pc}\n    ldr r1, _021F8944 ; =0x0000102C\n    ldr r0, _021F8948 ; =0x00001858\n    ldrh r1, [r2, r1]\n    ldrb r0, [r2, r0]\n    sub r1, r1, #1\n    lsl r1, r1, #2\n    add r2, r2, r1\n    ldr r1, _021F894C ; =0x00000878\n    ldrh r1, [r2, r1]\n    bl Pokedex_ConvertToCurrentDexNo\n    pop {r3, pc}\n    nop\n    _021F8944: .word 0x0000102C\n    _021F8948: .word 0x00001858\n    _021F894C: .word 0x00000878"
    );
    #endif
}

void ov18_021F8950(void) {
    /* Original at 0x021F8950 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    bne _021F8962\n    bl ov18_021F891C\n    mov r1, #0xf\n    bl _u32_div_f\n    pop {r3, pc}\n    bl ov18_021F891C\n    sub r0, r0, #1\n    mov r1, #0xf\n    bl _u32_div_f\n    pop {r3, pc}"
    );
    #endif
}

void ov18_021F8970(void) {
    /* Original at 0x021F8970 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov18_021F8974(void) {
    /* Original at 0x021F8974 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r1, #0x96\n    ldr r0, [r5, #0x14]\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    mov r2, #0x96\n    mov r1, #0\n    lsl r2, r2, #2\n    add r4, r0, #0\n    bl memset\n    add r2, r4, #0\n    mov r1, #0x18\n    ldrb r0, [r5]\n    add r5, r5, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _021F8992\n    ldr r1, [r4, #0x14]\n    mov r0, #0x44\n    bl NARC_New\n    str r0, [r4, #0x1c]\n    mov r0, #9\n    mov r2, #0\n    lsl r0, r0, #6\n    strh r2, [r4, r0]\n    add r0, #0x14\n    str r2, [r4, r0]\n    ldr r0, _021F89C4 ; =ov18_021F89F8\n    add r1, r4, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021F89C4: .word ov18_021F89F8"
    );
    #endif
}

void ov18_021F89C8(void) {
    /* Original at 0x021F89C8 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x95\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov18_021F89D0(void) {
    /* Original at 0x021F89D0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov18_021F91F0\n    add r0, r4, #0\n    bl ov18_021F8F10\n    add r0, r4, #0\n    bl ov18_021F8BEC\n    ldr r0, [r4, #0x1c]\n    bl NARC_Delete\n    ldr r0, [r4, #0x18]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F89F8(void) {
    /* Original at 0x021F89F8 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r1, #0\n    mov r1, #9\n    lsl r1, r1, #6\n    ldrh r0, [r4, r1]\n    cmp r0, #4\n    bhi _021F8AA0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    ov18_021F8A14: ; jump table\n    ldr r0, _021F8AB4 ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    add r0, r4, #0\n    bl ov18_021F8AB8\n    add r0, r4, #0\n    bl ov18_021F8B10\n    add r0, r4, #0\n    bl ov18_021F8CCC\n    add r0, r4, #0\n    bl ov18_021F8FA0\n    add r0, r4, #0\n    bl ov18_021F95CC\n    add r0, r4, #0\n    bl ov18_021F8C0C\n    mov r0, #9\n    mov r1, #1\n    lsl r0, r0, #6\n    strh r1, [r4, r0]\n    b _021F8AA0\n    add r0, r4, #0\n    bl ov18_021F8C48\n    cmp r0, #1\n    bne _021F8AA0\n    mov r0, #9\n    mov r1, #2\n    lsl r0, r0, #6\n    strh r1, [r4, r0]\n    b _021F8AA0\n    add r2, r1, #0\n    sub r2, #0x41\n    str r2, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r0, #0xe\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    add r3, r2, #0\n    bl PlayCryEx\n    mov r0, #9\n    mov r1, #3\n    lsl r0, r0, #6\n    strh r1, [r4, r0]\n    b _021F8AA0\n    bl IsCryFinished\n    cmp r0, #0\n    bne _021F8AA0\n    mov r0, #0x95\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r1, #4\n    sub r0, #0x14\n    strh r1, [r4, r0]\n    add r0, r4, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    bl SpriteList_RenderAndAnimateSprites\n    add r0, r4, #0\n    bl ov18_021F8C68\n    add sp, #8\n    pop {r4, pc}\n    _021F8AB4: .word 0x04000050"
    );
    #endif
}

void ov18_021F8AB8(void) {
    /* Original at 0x021F8AB8 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    bl AcquireMonLock\n    add r4, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x91\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r0, [r5, #0xc]\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r0, [r5, #0xc]\n    mov r1, #0xb1\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x93\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r0, [r5, #0xc]\n    mov r1, #0xb2\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x25\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    ldr r0, [r5, #0xc]\n    add r1, r4, #0\n    bl ReleaseMonLock\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021F8B10(void) {
    /* Original at 0x021F8B10 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x64\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r5, _021F8BE0 ; =ov18_021FBD7C\n    add r3, sp, #0x48\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    ldr r0, [r4]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r3, [r4, #0x14]\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    ldr r5, _021F8BE4 ; =ov18_021FBD60\n    add r3, sp, #0x2c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    ldr r0, [r4]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r5, _021F8BE8 ; =ov18_021FBD98\n    add r3, sp, #0x10\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    ldr r0, [r4]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x14]\n    mov r1, #0x13\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x1c]\n    ldr r2, [r4]\n    mov r3, #2\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x14]\n    mov r1, #0x14\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x1c]\n    ldr r2, [r4]\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    ldr r1, [r4, #0x1c]\n    ldr r3, [r4, #0x14]\n    mov r2, #0x12\n    bl PaletteData_LoadOpenNarc\n    add sp, #0x64\n    pop {r4, r5, pc}\n    nop\n    _021F8BE0: .word ov18_021FBD7C\n    _021F8BE4: .word ov18_021FBD60\n    _021F8BE8: .word ov18_021FBD98"
    );
    #endif
}

void ov18_021F8BEC(void) {
    /* Original at 0x021F8BEC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F8C0C(void) {
    /* Original at 0x021F8C0C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    ldr r2, _021F8C44 ; =0x0000FFFF\n    mov r1, #5\n    mov r3, #1\n    bl PaletteData_BeginPaletteFade\n    mov r2, #0\n    str r2, [sp]\n    ldr r0, [r4, #0x20]\n    mov r1, #0x10\n    add r3, r2, #0\n    bl Pokepic_StartPaletteFade\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl PaletteData_SetAutoTransparent\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _021F8C44: .word 0x0000FFFF"
    );
    #endif
}

void ov18_021F8C48(void) {
    /* Original at 0x021F8C48 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl PaletteData_GetSelectedBuffersBitmask\n    cmp r0, #0\n    bne _021F8C64\n    ldr r0, [r4, #0x20]\n    bl Pokepic_ResumePaletteFade\n    cmp r0, #0\n    bne _021F8C64\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F8C68(void) {
    /* Original at 0x021F8C68 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, _021F8CC8 ; =0x00000242\n    ldrh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    ldrh r0, [r4, r0]\n    cmp r0, #0x10\n    bne _021F8C9E\n    mov r0, #0x20\n    str r0, [sp]\n    mov r1, #2\n    mov r2, #0\n    str r1, [sp, #4]\n    mov r0, #7\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0xc\n    pop {r3, r4, pc}\n    cmp r0, #0x20\n    bne _021F8CC4\n    mov r0, #0x20\n    str r0, [sp]\n    mov r1, #2\n    mov r2, #0\n    str r1, [sp, #4]\n    str r2, [sp, #8]\n    ldr r0, [r4]\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, _021F8CC8 ; =0x00000242\n    mov r1, #0\n    strh r1, [r4, r0]\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _021F8CC8: .word 0x00000242"
    );
    #endif
}

void ov18_021F8CCC(void) {
    /* Original at 0x021F8CCC */
    /* Requires manual decompilation - 249 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r5, #0\n    ldr r6, _021F8F04 ; =ov18_021FBDB4\n    mov r7, #0\n    add r4, #0x24\n    ldr r0, [r5]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl AddWindow\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r7, r7, #1\n    add r6, #8\n    add r4, #0x10\n    cmp r7, #9\n    blo _021F8CDA\n    ldr r2, _021F8F08 ; =0x00000322\n    ldr r3, [r5, #0x14]\n    mov r0, #0\n    mov r1, #0x1b\n    bl NewMsgDataFromNarc\n    add r4, r0, #0\n    ldr r0, [r5, #0x14]\n    bl MessageFormat_New\n    add r6, r0, #0\n    mov r0, #1\n    ldr r1, [r5, #0x14]\n    lsl r0, r0, #0xa\n    bl String_New\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _021F8F0C ; =0x00020100\n    add r1, r4, #0\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r0, #0x24\n    mov r2, #0x90\n    mov r3, #0x70\n    bl ov18_021F9648\n    mov r1, #0x91\n    lsl r1, r1, #2\n    ldr r0, [r5, #0x10]\n    ldr r1, [r5, r1]\n    bl Pokedex_ConvertToCurrentDexNo\n    add r2, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    add r0, r4, #0\n    mov r1, #9\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    ldr r1, [sp, #0x10]\n    add r0, r6, #0\n    add r2, r7, #0\n    bl StringExpandPlaceholders\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, _021F8F0C ; =0x00020100\n    ldr r1, [sp, #0x10]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r3, #0\n    add r0, #0x34\n    mov r2, #1\n    str r3, [sp, #8]\n    bl ov18_021F95FC\n    add r0, r7, #0\n    bl String_Delete\n    mov r0, #0x91\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x14]\n    mov r1, #2\n    bl ov18_021E590C\n    add r7, r0, #0\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, _021F8F0C ; =0x00020100\n    mov r2, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x44\n    add r1, r7, #0\n    add r3, r2, #0\n    str r2, [sp, #8]\n    bl ov18_021F95FC\n    add r0, r7, #0\n    bl String_Delete\n    mov r0, #0x91\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x14]\n    mov r1, #2\n    bl ov18_021E595C\n    add r7, r0, #0\n    add r0, r5, #0\n    add r0, #0x54\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r2, r0, #4\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, _021F8F0C ; =0x00020100\n    add r1, r7, #0\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x54\n    mov r3, #0\n    bl ov18_021F95FC\n    add r0, r7, #0\n    bl String_Delete\n    mov r0, #0x91\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r3, [r5, #0x14]\n    mov r1, #2\n    mov r2, #0\n    bl ov18_021E59A8\n    add r7, r0, #0\n    add r0, r5, #0\n    add r0, #0x64\n    bl GetWindowWidth\n    str r0, [sp, #0x14]\n    mov r0, #0\n    add r1, r7, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidthMultiline\n    ldr r1, [sp, #0x14]\n    mov r3, #0\n    lsl r1, r1, #3\n    sub r0, r1, r0\n    lsr r2, r0, #1\n    ldr r0, _021F8F0C ; =0x00020100\n    str r3, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x64\n    add r1, r7, #0\n    str r3, [sp, #8]\n    bl ov18_021F95FC\n    add r0, r7, #0\n    bl String_Delete\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F8F0C ; =0x00020100\n    add r1, r4, #0\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r0, #0x74\n    mov r2, #0xa\n    mov r3, #0x14\n    bl ov18_021F9648\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F8F0C ; =0x00020100\n    add r1, r4, #0\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r0, #0x94\n    mov r2, #0xb\n    mov r3, #0x14\n    bl ov18_021F9648\n    add r0, r6, #0\n    bl MessageFormat_Delete\n    add r0, r4, #0\n    bl DestroyMsgData\n    bl GetDexHeightMsgBank\n    add r2, r0, #0\n    ldr r3, [r5, #0x14]\n    mov r0, #0\n    mov r1, #0x1b\n    bl NewMsgDataFromNarc\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp]\n    mov r2, #0x91\n    ldr r0, _021F8F0C ; =0x00020100\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    lsl r2, r2, #2\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    add r0, #0x84\n    add r1, r4, #0\n    mov r3, #4\n    bl ov18_021F9648\n    add r0, r4, #0\n    bl DestroyMsgData\n    bl GetDexWeightMsgBank\n    add r2, r0, #0\n    ldr r3, [r5, #0x14]\n    mov r0, #0\n    mov r1, #0x1b\n    bl NewMsgDataFromNarc\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp]\n    mov r2, #0x91\n    ldr r0, _021F8F0C ; =0x00020100\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    lsl r2, r2, #2\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    add r0, #0xa4\n    add r1, r4, #0\n    mov r3, #4\n    bl ov18_021F9648\n    add r0, r4, #0\n    bl DestroyMsgData\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    mov r4, #0\n    add r5, #0x24\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #9\n    blo _021F8EF2\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F8F04: .word ov18_021FBDB4\n    _021F8F08: .word 0x00000322\n    _021F8F0C: .word 0x00020100"
    );
    #endif
}

void ov18_021F8F10(void) {
    RemoveWindow(0);
}

void ov18_021F8F28(void) {
    /* Original at 0x021F8F28 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    ldr r4, _021F8F50 ; =ov18_021FBD50\n    add r3, sp, #0\n    add r5, r0, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5, #0x14]\n    ldr r1, _021F8F54 ; =0x00100010\n    str r0, [sp, #0xc]\n    add r0, r2, #0\n    mov r2, #0x10\n    bl ObjCharTransfer_InitEx\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021F8F50: .word ov18_021FBD50\n    _021F8F54: .word 0x00100010"
    );
    #endif
}

void ov18_021F8F58(void) {
    ObjCharTransfer_Destroy();
}

void ov18_021F8F60(void) {
    /* Original at 0x021F8F60 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r7, #0x1e\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #4\n    ldr r2, [r6, #0x14]\n    mov r0, #8\n    add r1, r4, #0\n    bl Create2DGfxResObjMan\n    str r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021F8F6C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F8F84(void) {
    Destroy2DGfxResObjMan(0, 0x1e);
}

void ov18_021F8FA0(void) {
    /* Original at 0x021F8FA0 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    ldr r2, [r4, #0x14]\n    mov r0, #0x20\n    add r1, #0xb8\n    bl G2dRenderer_Init\n    add r1, r4, #0\n    add r1, #0xb4\n    str r0, [r1]\n    ldr r0, [r4, #0x14]\n    bl ClearMainOAM\n    add r0, r4, #0\n    bl ov18_021F8F28\n    add r0, r4, #0\n    bl ov18_021F8F60\n    add r0, r4, #0\n    bl ov18_021F8FF8\n    add r0, r4, #0\n    bl ov18_021F9068\n    add r0, r4, #0\n    bl ov18_021F9150\n    add r0, r4, #0\n    bl ov18_021F94BC\n    add r0, r4, #0\n    bl ov18_021F9370\n    add r0, r4, #0\n    bl ov18_021F9518\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F8FF8(void) {
    /* Original at 0x021F8FF8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x24\n    add r4, r0, #0\n    mov r0, #0x1d\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x1e\n    str r0, [sp, #8]\n    mov r0, #0x1f\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _021F9050 ; =0x0000C618\n    mov r1, #0x7d\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    str r0, [sp, #0x20]\n    lsl r1, r1, #2\n    add r0, r4, r1\n    sub r1, #0x14\n    ldr r2, [r4, #0x14]\n    ldr r3, [r4, #0x1c]\n    add r1, r4, r1\n    bl ov18_021F922C\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl SpriteTransfer_GetPlttOffset\n    add r2, r0, #0\n    lsl r2, r2, #0x14\n    ldr r0, [r4, #4]\n    mov r1, #2\n    lsr r2, r2, #0x10\n    mov r3, #0x40\n    bl PaletteData_LoadPaletteSlotFromHardware\n    add sp, #0x24\n    pop {r3, r4, pc}\n    nop\n    _021F9050: .word 0x0000C618"
    );
    #endif
}

void ov18_021F9054(void) {
    /* Original at 0x021F9054 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x7d\n    add r2, r0, #0\n    lsl r1, r1, #2\n    add r0, r2, r1\n    sub r1, #0x14\n    ldr r3, _021F9064 ; =ov18_021F92DC\n    add r1, r2, r1\n    bx r3\n    _021F9064: .word ov18_021F92DC"
    );
    #endif
}

void ov18_021F9068(void) {
    /* Original at 0x021F9068 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x24\n    add r4, r0, #0\n    mov r0, #0x93\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov18_021F967C\n    str r0, [sp]\n    mov r0, #0x23\n    str r0, [sp, #4]\n    mov r0, #0x21\n    str r0, [sp, #8]\n    mov r0, #0x22\n    str r0, [sp, #0xc]\n    mov r0, #4\n    str r0, [sp, #0x10]\n    ldr r0, _021F9100 ; =0x0000C619\n    mov r1, #0x82\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    str r0, [sp, #0x20]\n    lsl r1, r1, #2\n    add r0, r4, r1\n    sub r1, #0x28\n    ldr r2, [r4, #0x14]\n    ldr r3, [r4, #0x1c]\n    add r1, r4, r1\n    bl ov18_021F922C\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov18_021F967C\n    str r0, [sp]\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #4]\n    mov r0, #0x21\n    str r0, [sp, #8]\n    mov r0, #0x22\n    str r0, [sp, #0xc]\n    mov r0, #4\n    str r0, [sp, #0x10]\n    ldr r0, _021F9104 ; =0x0000C61A\n    mov r1, #0x87\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    str r0, [sp, #0x20]\n    lsl r1, r1, #2\n    add r0, r4, r1\n    sub r1, #0x3c\n    ldr r2, [r4, #0x14]\n    ldr r3, [r4, #0x1c]\n    add r1, r4, r1\n    bl ov18_021F922C\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl SpriteTransfer_GetPlttOffset\n    add r2, r0, #0\n    lsl r2, r2, #0x14\n    ldr r0, [r4, #4]\n    mov r1, #2\n    lsr r2, r2, #0x10\n    mov r3, #0x80\n    bl PaletteData_LoadPaletteSlotFromHardware\n    add sp, #0x24\n    pop {r3, r4, pc}\n    _021F9100: .word 0x0000C619\n    _021F9104: .word 0x0000C61A"
    );
    #endif
}

void ov18_021F9108(void) {
    /* Original at 0x021F9108 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x82\n    add r4, r0, #0\n    lsl r1, r1, #2\n    add r0, r4, r1\n    sub r1, #0x28\n    add r1, r4, r1\n    bl ov18_021F92DC\n    mov r0, #0x87\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_0200AEB0\n    mov r1, #0x1e\n    lsl r1, r1, #4\n    ldr r0, [r4, r1]\n    add r1, #0x3c\n    ldr r1, [r4, r1]\n    bl DestroySingle2DGfxResObj\n    mov r1, #0x7a\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x3c\n    ldr r1, [r4, r1]\n    bl DestroySingle2DGfxResObj\n    mov r1, #0x7b\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x3c\n    ldr r1, [r4, r1]\n    bl DestroySingle2DGfxResObj\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F9150(void) {
    /* Original at 0x021F9150 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    bl ov18_021E5900\n    ldr r1, [r5, #0x14]\n    bl NARC_New\n    add r4, r0, #0\n    mov r0, #0x4d\n    str r0, [sp]\n    sub r0, #0x4e\n    str r0, [sp, #4]\n    mov r0, #0x4e\n    str r0, [sp, #8]\n    mov r0, #0x4f\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, _021F91D8 ; =0x0000C61B\n    mov r1, #0x23\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    str r0, [sp, #0x20]\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0x50\n    ldr r2, [r5, #0x14]\n    ldr r3, [r5, #0x1c]\n    add r1, r5, r1\n    bl ov18_021F922C\n    bl ov18_021E5908\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F91D8 ; =0x0000C61B\n    add r2, r4, #0\n    str r0, [sp, #4]\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, #0x14]\n    bl ov18_021F92AC\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #1\n    bl SpriteTransfer_GetPlttOffset\n    add r2, r0, #0\n    lsl r2, r2, #0x14\n    ldr r0, [r5, #4]\n    mov r1, #2\n    lsr r2, r2, #0x10\n    mov r3, #0x20\n    bl PaletteData_LoadPaletteSlotFromHardware\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x24\n    pop {r4, r5, pc}\n    nop\n    _021F91D8: .word 0x0000C61B"
    );
    #endif
}

void ov18_021F91DC(void) {
    /* Original at 0x021F91DC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x23\n    add r2, r0, #0\n    lsl r1, r1, #4\n    add r0, r2, r1\n    sub r1, #0x50\n    ldr r3, _021F91EC ; =ov18_021F92DC\n    add r1, r2, r1\n    bx r3\n    _021F91EC: .word ov18_021F92DC"
    );
    #endif
}

void ov18_021F91F0(void) {
    /* Original at 0x021F91F0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov18_021F959C\n    add r0, r4, #0\n    bl ov18_021F94A0\n    add r0, r4, #0\n    bl ov18_021F9508\n    add r0, r4, #0\n    bl ov18_021F91DC\n    add r0, r4, #0\n    bl ov18_021F9108\n    add r0, r4, #0\n    bl ov18_021F9054\n    add r0, r4, #0\n    bl ov18_021F8F84\n    bl ov18_021F8F58\n    add r4, #0xb4\n    ldr r0, [r4]\n    bl SpriteList_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F922C(void) {
    /* Original at 0x021F922C */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [sp, #0x34]\n    add r7, r3, #0\n    add r6, r2, #0\n    add r4, r1, #0\n    str r0, [sp]\n    mov r3, #1\n    str r3, [sp, #4]\n    str r6, [sp, #8]\n    ldr r0, [r4]\n    ldr r2, [sp, #0x20]\n    add r1, r7, #0\n    bl AddCharResObjFromOpenNarc\n    str r0, [r5]\n    bl sub_0200ADA4\n    ldr r0, [r5]\n    bl sub_0200A740\n    mov r0, #0\n    ldr r3, [sp, #0x24]\n    mvn r0, r0\n    cmp r3, r0\n    beq _021F9276\n    ldr r0, [sp, #0x30]\n    add r1, r6, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x38]\n    add r2, r7, #0\n    str r0, [sp, #4]\n    ldr r0, [r4, #4]\n    bl ov18_021F92AC\n    str r0, [r5, #4]\n    ldr r0, [sp, #0x3c]\n    ldr r2, [sp, #0x28]\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldr r0, [r4, #8]\n    add r1, r7, #0\n    mov r3, #1\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r5, #8]\n    ldr r0, [sp, #0x40]\n    ldr r2, [sp, #0x2c]\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldr r0, [r4, #0xc]\n    add r1, r7, #0\n    mov r3, #1\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r5, #0xc]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F92AC(void) {
    /* Original at 0x021F92AC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, [sp, #0x1c]\n    str r4, [sp]\n    mov r4, #1\n    str r4, [sp, #4]\n    ldr r4, [sp, #0x18]\n    str r4, [sp, #8]\n    str r1, [sp, #0xc]\n    add r1, r2, #0\n    add r2, r3, #0\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    add r4, r0, #0\n    bl sub_0200B00C\n    add r0, r4, #0\n    bl sub_0200A740\n    add r0, r4, #0\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F92DC(void) {
    /* Original at 0x021F92DC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    bl sub_0200AEB0\n    ldr r0, [r5, #4]\n    bl sub_0200B0A8\n    ldr r0, [r4]\n    ldr r1, [r5]\n    bl DestroySingle2DGfxResObj\n    ldr r0, [r4, #4]\n    ldr r1, [r5, #4]\n    bl DestroySingle2DGfxResObj\n    ldr r0, [r4, #8]\n    ldr r1, [r5, #8]\n    bl DestroySingle2DGfxResObj\n    ldr r0, [r4, #0xc]\n    ldr r1, [r5, #0xc]\n    bl DestroySingle2DGfxResObj\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov18_021F9310(void) {
    /* Original at 0x021F9310 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    add r7, r2, #0\n    add r6, r3, #0\n    bl GF2DGfxResObj_GetResID\n    str r0, [sp, #0x2c]\n    ldr r0, [r5, #4]\n    bl GF2DGfxResObj_GetResID\n    str r0, [sp, #0x30]\n    ldr r0, [r5, #8]\n    bl GF2DGfxResObj_GetResID\n    str r0, [sp, #0x34]\n    ldr r0, [r5, #0xc]\n    bl GF2DGfxResObj_GetResID\n    str r0, [sp]\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r6, [sp, #0x10]\n    ldr r1, [r4]\n    ldr r2, [sp, #0x30]\n    str r1, [sp, #0x14]\n    ldr r1, [r4, #4]\n    ldr r3, [sp, #0x34]\n    str r1, [sp, #0x18]\n    ldr r1, [r4, #8]\n    str r1, [sp, #0x1c]\n    ldr r1, [r4, #0xc]\n    str r1, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    ldr r1, [sp, #0x2c]\n    add r0, r7, #0\n    bl CreateSpriteResourcesHeader\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F9370(void) {
    /* Original at 0x021F9370 */
    /* Requires manual decompilation - 138 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x70\n    mov r1, #0x82\n    add r5, r0, #0\n    lsl r1, r1, #2\n    add r0, r5, r1\n    sub r1, #0x28\n    add r1, r5, r1\n    add r2, sp, #0x2c\n    mov r3, #1\n    bl ov18_021F9310\n    add r0, r5, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    str r0, [sp, #0x50]\n    add r0, sp, #0x2c\n    str r0, [sp, #0x54]\n    mov r0, #1\n    str r0, [sp, #0x68]\n    mov r0, #0\n    str r0, [sp, #0x64]\n    ldr r0, [r5, #0x14]\n    str r0, [sp, #0x6c]\n    mov r0, #0x2a\n    lsl r0, r0, #0xe\n    str r0, [sp, #0x58]\n    mov r0, #0x12\n    lsl r0, r0, #0xe\n    str r0, [sp, #0x5c]\n    add r0, sp, #0x50\n    bl Sprite_Create\n    mov r1, #0x81\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r1, #0x48\n    ldr r0, [r5, r1]\n    bl ov18_021F9688\n    add r1, r0, #0\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Sprite_SetPalIndexRespectVramOffset\n    mov r0, #0x87\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl GF2DGfxResObj_GetResID\n    add r4, r0, #0\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl GF2DGfxResObj_GetResID\n    add r6, r0, #0\n    mov r0, #0x89\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl GF2DGfxResObj_GetResID\n    add r7, r0, #0\n    mov r0, #0x8a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl GF2DGfxResObj_GetResID\n    str r0, [sp]\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r2, [r5, r0]\n    add r3, r7, #0\n    str r2, [sp, #0x14]\n    add r2, r0, #4\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x18]\n    add r2, r0, #0\n    add r2, #8\n    ldr r2, [r5, r2]\n    add r0, #0xc\n    str r2, [sp, #0x1c]\n    ldr r0, [r5, r0]\n    add r2, r6, #0\n    str r0, [sp, #0x20]\n    str r1, [sp, #0x24]\n    str r1, [sp, #0x28]\n    add r0, sp, #0x2c\n    add r1, r4, #0\n    bl CreateSpriteResourcesHeader\n    add r0, r5, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    str r0, [sp, #0x50]\n    add r0, sp, #0x2c\n    str r0, [sp, #0x54]\n    mov r0, #1\n    str r0, [sp, #0x68]\n    mov r0, #0\n    str r0, [sp, #0x64]\n    ldr r0, [r5, #0x14]\n    str r0, [sp, #0x6c]\n    mov r0, #0xd9\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x58]\n    mov r0, #0x12\n    lsl r0, r0, #0xe\n    str r0, [sp, #0x5c]\n    add r0, sp, #0x50\n    bl Sprite_Create\n    mov r1, #0x86\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    add r0, #0x38\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _021F947A\n    add r1, #0x34\n    ldr r1, [r5, r1]\n    cmp r1, r0\n    bne _021F948A\n    mov r0, #0x86\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #0x70\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov18_021F9688\n    add r1, r0, #0\n    mov r0, #0x86\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Sprite_SetPalIndexRespectVramOffset\n    add sp, #0x70\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F94A0(void) {
    /* Original at 0x021F94A0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    mov r0, #0x86\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F94BC(void) {
    /* Original at 0x021F94BC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x44\n    mov r1, #0x7d\n    add r4, r0, #0\n    lsl r1, r1, #2\n    add r0, r4, r1\n    sub r1, #0x14\n    add r1, r4, r1\n    add r2, sp, #0\n    mov r3, #1\n    bl ov18_021F9310\n    add r0, r4, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    mov r1, #1\n    str r0, [sp, #0x24]\n    add r0, sp, #0\n    str r0, [sp, #0x28]\n    mov r0, #0\n    str r1, [sp, #0x3c]\n    str r0, [sp, #0x38]\n    ldr r0, [r4, #0x14]\n    str r0, [sp, #0x40]\n    mov r0, #7\n    lsl r0, r0, #0x10\n    str r0, [sp, #0x2c]\n    lsl r0, r1, #0x11\n    str r0, [sp, #0x30]\n    add r0, sp, #0x24\n    bl Sprite_Create\n    mov r1, #0x1f\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add sp, #0x44\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov18_021F9508(void) {
    /* Original at 0x021F9508 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x1f\n    lsl r1, r1, #4\n    ldr r3, _021F9514 ; =Sprite_Delete\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _021F9514: .word Sprite_Delete"
    );
    #endif
}

void ov18_021F9518(void) {
    /* Original at 0x021F9518 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x44\n    mov r1, #0x23\n    add r5, r0, #0\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0x50\n    add r1, r5, r1\n    add r2, sp, #0\n    mov r3, #1\n    bl ov18_021F9310\n    add r0, r5, #0\n    add r0, #0xb4\n    ldr r0, [r0]\n    str r0, [sp, #0x24]\n    add r0, sp, #0\n    str r0, [sp, #0x28]\n    mov r0, #1\n    str r0, [sp, #0x3c]\n    mov r0, #0\n    str r0, [sp, #0x38]\n    ldr r0, [r5, #0x14]\n    str r0, [sp, #0x40]\n    mov r0, #0x1e\n    lsl r0, r0, #0xe\n    str r0, [sp, #0x2c]\n    mov r0, #5\n    lsl r0, r0, #0x10\n    str r0, [sp, #0x30]\n    add r0, sp, #0x24\n    bl Sprite_Create\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r1, #0x18\n    ldr r0, [r5, r1]\n    ldr r1, [r5, #0x14]\n    bl ov18_021F9694\n    add r4, r0, #0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Sprite_GetImageProxy\n    mov r1, #1\n    bl NNS_G2dGetImageLocation\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #0x80\n    bl DC_FlushRange\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0x80\n    bl GX_LoadOBJ\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x44\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov18_021F959C(void) {
    /* Original at 0x021F959C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x8b\n    lsl r1, r1, #2\n    ldr r3, _021F95A8 ; =Sprite_Delete\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _021F95A8: .word Sprite_Delete"
    );
    #endif
}

void ov18_021F95AC(void) {
    Sprite_SetDrawFlag(0, 0x1f);
}

void ov18_021F95CC(void) {
    /* Original at 0x021F95CC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x20\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    add r0, sp, #0x10\n    mov r2, #2\n    bl GetPokemonSpriteCharAndPlttNarcIds\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #8]\n    add r1, sp, #0x10\n    mov r2, #0x30\n    mov r3, #0x48\n    bl PokepicManager_CreatePokepic\n    str r0, [r4, #0x20]\n    add sp, #0x20\n    pop {r4, pc}"
    );
    #endif
}

void ov18_021F95F8(void) {
    /* Original at 0x021F95F8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void ov18_021F95FC(void) {
    /* Original at 0x021F95FC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    ldr r0, [sp, #0x30]\n    add r7, r1, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    cmp r0, #1\n    bne _021F961A\n    ldr r0, [sp, #0x28]\n    mov r2, #0\n    bl FontID_String_GetWidth\n    sub r5, r5, r0\n    b _021F962A\n    cmp r0, #2\n    bne _021F962A\n    ldr r0, [sp, #0x28]\n    mov r2, #0\n    bl FontID_String_GetWidth\n    lsr r0, r0, #1\n    sub r5, r5, r0\n    str r4, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    ldr r1, [sp, #0x28]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    add r2, r7, #0\n    add r3, r5, #0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov18_021F9648(void) {
    /* Original at 0x021F9648 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    add r6, r3, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r0, [sp, #0x24]\n    ldr r3, [sp, #0x20]\n    str r0, [sp]\n    ldr r0, [sp, #0x28]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl ov18_021F95FC\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov18_021F967C(void) {
    /* Original at 0x021F967C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r0, #2\n    ldr r0, _021F9684 ; =ov18_021FBE10\n    ldr r0, [r0, r1]\n    bx lr\n    _021F9684: .word ov18_021FBE10"
    );
    #endif
}

void ov18_021F9688(void) {
    /* Original at 0x021F9688 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021F9690 ; =ov18_021FBDFC\n    ldrb r0, [r1, r0]\n    bx lr\n    nop\n    _021F9690: .word ov18_021FBDFC"
    );
    #endif
}

void ov18_021F9694(void) {
    /* Original at 0x021F9694 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov18_021E5900\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov18_021E5904\n    add r1, r0, #0\n    str r4, [sp]\n    add r0, r6, #0\n    mov r2, #1\n    add r3, sp, #4\n    bl GfGfxLoader_GetCharData\n    add r6, r0, #0\n    ldr r0, [sp, #4]\n    mov r1, #0x80\n    ldr r5, [r0, #0x14]\n    add r0, r4, #0\n    bl Heap_AllocAtEnd\n    mov r1, #0\n    mov r2, #0x80\n    add r4, r0, #0\n    bl memset\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x80\n    mov r2, #0x40\n    bl memcpy\n    add r0, r4, #0\n    add r0, #0x40\n    add r1, r5, #0\n    mov r2, #0x40\n    bl memcpy\n    add r0, r6, #0\n    bl Heap_Free\n    add r0, r4, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}
