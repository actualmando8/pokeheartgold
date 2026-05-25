/* Decompiled from asm/overlay_80_02239D74.s */
#include "global.h"

void ov80_02239D74(void) {
    /* Original at 0x02239D74 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0x65\n    mov r1, #0xc\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0xc\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r5, #0\n    bl ov80_02239DD0\n    str r0, [r4]\n    add r0, r6, #0\n    bl ov80_02239F48\n    str r0, [r4, #4]\n    mov r0, #9\n    str r0, [sp]\n    ldr r0, _02239DB4 ; =0x04000050\n    mov r1, #4\n    mov r2, #0x1f\n    mov r3, #8\n    bl G2x_SetBlendAlpha_\n    add r0, r4, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _02239DB4: .word 0x04000050"
    );
    #endif
}

void ov80_02239DB8(void) {
    ov80_02239EC4();
    ov80_02239F94(*((u32*)(r4 + 4)));
    Heap_Free(r4);
}

void ov80_02239DD0(void) {
    /* Original at 0x02239DD0 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    ldr r1, _02239EAC ; =0x0002200C\n    add r4, r0, #0\n    mov r0, #0x65\n    bl Heap_Alloc\n    ldr r2, _02239EAC ; =0x0002200C\n    str r0, [sp, #8]\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, [sp, #8]\n    mov r1, #0x65\n    str r4, [r0, #4]\n    mov r0, #0xb7\n    bl NARC_New\n    ldr r5, [sp, #8]\n    ldr r4, _02239EB0 ; =ov80_0223DB2C\n    str r0, [sp, #4]\n    mov r6, #0\n    add r5, #8\n    mov r0, #0x65\n    str r0, [sp]\n    ldrh r1, [r4]\n    ldr r0, [sp, #4]\n    mov r2, #1\n    add r3, sp, #0x10\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    add r7, r0, #0\n    ldr r0, [sp, #0x10]\n    mov r2, #1\n    add r0, #0xc\n    add r1, r5, #0\n    lsl r2, r2, #0xc\n    bl MIi_CpuCopy32\n    add r0, r7, #0\n    bl Heap_Free\n    mov r0, #1\n    lsl r0, r0, #0xc\n    add r6, r6, #1\n    add r4, r4, #2\n    add r5, r5, r0\n    cmp r6, #2\n    blt _02239DFE\n    ldr r0, [sp, #4]\n    bl NARC_Delete\n    mov r0, #0xb7\n    mov r1, #0x65\n    bl NARC_New\n    mov r1, #0x65\n    str r1, [sp]\n    mov r1, #0xe\n    mov r2, #1\n    add r3, sp, #0xc\n    add r4, r0, #0\n    bl GfGfxLoader_GetCharDataFromOpenNarc\n    ldr r3, [sp, #0xc]\n    add r5, r0, #0\n    ldr r2, _02239EB4 ; =0x00002008\n    ldr r1, [sp, #8]\n    ldr r0, [r3, #0x14]\n    add r1, r1, r2\n    ldr r2, [r3, #0x10]\n    bl MIi_CpuCopy32\n    add r0, r5, #0\n    bl Heap_Free\n    mov r0, #0x65\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0xf\n    mov r2, #1\n    add r3, sp, #0xc\n    bl GfGfxLoader_GetCharDataFromOpenNarc\n    ldr r3, [sp, #0xc]\n    add r5, r0, #0\n    ldr r2, _02239EB8 ; =0x00012008\n    ldr r1, [sp, #8]\n    ldr r0, [r3, #0x14]\n    add r1, r1, r2\n    ldr r2, [r3, #0x10]\n    bl MIi_CpuCopy32\n    add r0, r5, #0\n    bl Heap_Free\n    add r0, r4, #0\n    bl NARC_Delete\n    ldr r0, _02239EBC ; =ov80_02239ED8\n    ldr r1, [sp, #8]\n    ldr r2, _02239EC0 ; =0x0001368C\n    bl SysTask_CreateOnMainQueue\n    ldr r1, [sp, #8]\n    str r0, [r1]\n    add r0, r1, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02239EAC: .word 0x0002200C\n    _02239EB0: .word ov80_0223DB2C\n    _02239EB4: .word 0x00002008\n    _02239EB8: .word 0x00012008\n    _02239EBC: .word ov80_02239ED8\n    _02239EC0: .word 0x0001368C"
    );
    #endif
}

void ov80_02239EC4(void) {
    SysTask_Destroy();
    Heap_Free(r4);
}

void ov80_02239ED8(void) {
    /* Original at 0x02239ED8 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r3, _02239F3C ; =0x00022008\n    add r4, r1, #0\n    ldrb r0, [r4, r3]\n    cmp r0, #0xc\n    bhs _02239EEE\n    add r0, r0, #1\n    add sp, #4\n    strb r0, [r4, r3]\n    pop {r3, r4, pc}\n    mov r0, #0\n    strb r0, [r4, r3]\n    str r0, [sp]\n    add r3, r3, #1\n    ldrb r3, [r4, r3]\n    ldr r2, _02239F40 ; =0x00002008\n    ldr r0, [r4, #4]\n    add r2, r4, r2\n    lsl r3, r3, #0x10\n    add r2, r2, r3\n    mov r3, #1\n    mov r1, #3\n    lsl r3, r3, #0x10\n    bl BG_LoadCharTilesData\n    ldr r2, _02239F44 ; =0x00022009\n    add r3, r4, #0\n    ldrb r2, [r4, r2]\n    add r3, #8\n    ldr r0, [r4, #4]\n    lsl r2, r2, #0xc\n    add r2, r3, r2\n    mov r3, #1\n    mov r1, #3\n    lsl r3, r3, #0xc\n    bl BG_LoadScreenTilemapData\n    ldr r0, [r4, #4]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r1, _02239F44 ; =0x00022009\n    mov r0, #1\n    ldrb r2, [r4, r1]\n    eor r0, r2\n    strb r0, [r4, r1]\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02239F3C: .word 0x00022008\n    _02239F40: .word 0x00002008\n    _02239F44: .word 0x00022009"
    );
    #endif
}

void ov80_02239F48(void) {
    /* Original at 0x02239F48 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x65\n    mov r1, #0x6c\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x6c\n    bl MI_CpuFill8\n    add r0, r4, #0\n    str r5, [r4, #4]\n    mov r1, #2\n    add r0, #0x68\n    strb r1, [r0]\n    add r0, r5, #0\n    mov r1, #0\n    bl PaletteData_GetUnfadedBuf\n    add r1, r4, #0\n    add r0, #0xa0\n    add r1, #8\n    mov r2, #0x60\n    bl MIi_CpuCopy16\n    ldr r0, _02239F8C ; =ov80_02239FA8\n    ldr r2, _02239F90 ; =0x0001368D\n    add r1, r4, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _02239F8C: .word ov80_02239FA8\n    _02239F90: .word 0x0001368D"
    );
    #endif
}

void ov80_02239F94(void) {
    SysTask_Destroy();
    Heap_Free(r4);
}

void ov80_02239FA8(void) {
    /* Original at 0x02239FA8 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r1, #0\n    add r0, r4, #0\n    add r0, #0x69\n    ldrb r0, [r0]\n    cmp r0, #8\n    bhs _02239FC8\n    add r0, r4, #0\n    add r0, #0x69\n    ldrb r0, [r0]\n    add r4, #0x69\n    add sp, #4\n    add r0, r0, #1\n    strb r0, [r4]\n    pop {r3, r4, pc}\n    add r0, r4, #0\n    mov r2, #0\n    add r0, #0x69\n    strb r2, [r0]\n    mov r0, #0x20\n    str r0, [sp]\n    add r1, #0x68\n    ldrb r1, [r1]\n    add r3, r4, #0\n    ldr r0, [r4, #4]\n    add r3, #8\n    lsl r1, r1, #5\n    add r1, r3, r1\n    mov r3, #0x60\n    bl PaletteData_LoadPalette\n    add r0, r4, #0\n    add r0, #0x68\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x68\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x68\n    ldrb r0, [r0]\n    cmp r0, #3\n    blo _0223A006\n    mov r0, #0\n    add r4, #0x68\n    strb r0, [r4]\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}
