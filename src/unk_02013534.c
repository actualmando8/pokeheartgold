/* Decompiled from asm/unk_02013534.s */
#include "global.h"

void FontSystem_NewInit(void) {
    /* Original at 0x02013534 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r1, #0\n    str r0, [sp, #4]\n    add r0, r7, #0\n    mov r1, #0x68\n    bl Heap_Alloc\n    str r0, [sp, #8]\n    cmp r0, #0\n    bne _0201354E\n    bl GF_AssertFail\n    ldr r4, [sp, #8]\n    ldr r5, [sp, #8]\n    mov r6, #0\n    add r4, #0x30\n    mov r0, #0x23\n    add r1, r6, #0\n    mov r2, #0\n    add r3, r4, #0\n    str r7, [sp]\n    bl GfGfxLoader_GetCellBank\n    str r0, [r5]\n    cmp r0, #0\n    bne _0201356E\n    bl GF_AssertFail\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #0xc\n    blt _02013556\n    ldr r0, [sp, #4]\n    mov r1, #0x14\n    add r4, r0, #0\n    mul r4, r1\n    add r0, r7, #0\n    add r1, r4, #0\n    bl Heap_Alloc\n    ldr r1, [sp, #8]\n    cmp r0, #0\n    str r0, [r1, #0x60]\n    bne _02013594\n    bl GF_AssertFail\n    ldr r1, [sp, #4]\n    ldr r0, [sp, #8]\n    add r2, r4, #0\n    str r1, [r0, #0x64]\n    ldr r0, [r0, #0x60]\n    mov r1, #0\n    bl memset\n    ldr r0, [sp, #8]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020135AC(void) {
    /* Original at 0x020135AC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    bne _020135B6\n    bl GF_AssertFail\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5]\n    bl Heap_Free\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0xc\n    blt _020135BA\n    ldr r0, [r6, #0x60]\n    bl Heap_Free\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020135D8(void) {
    /* Original at 0x020135D8 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    bne _020135E4\n    bl GF_AssertFail\n    ldr r0, [r5]\n    bl sub_02013AD0\n    add r4, r0, #0\n    bne _020135F2\n    bl GF_AssertFail\n    ldr r0, [r5, #0x10]\n    add r3, sp, #8\n    str r0, [r4, #8]\n    ldr r0, [r5, #0x18]\n    str r0, [r4, #0xc]\n    ldr r0, [r5, #0x1c]\n    str r0, [r4, #0x10]\n    str r3, [sp, #0x14]\n    str r3, [sp, #0x18]\n    ldr r1, [r5, #4]\n    ldr r2, [r5, #0x2c]\n    ldrb r0, [r1, #7]\n    ldrb r1, [r1, #8]\n    bl sub_02013BD4\n    add r6, r0, #0\n    mov r1, #0x24\n    ldr r0, [r5, #0x2c]\n    mul r1, r6\n    bl Heap_AllocAtEnd\n    add r7, r0, #0\n    mov r1, #0xc\n    ldr r0, [r5, #0x2c]\n    mul r1, r6\n    bl Heap_Alloc\n    str r0, [r4]\n    str r6, [r4, #4]\n    ldr r0, [r5, #0x28]\n    add r1, sp, #8\n    str r0, [sp]\n    ldr r0, [r5, #0x2c]\n    add r2, r7, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #4]\n    ldr r3, [r5, #0x14]\n    bl sub_02013C5C\n    add r0, r5, #0\n    add r1, sp, #8\n    add r2, r7, #0\n    add r3, r4, #0\n    bl sub_02013E78\n    add r0, r7, #0\n    bl Heap_Free\n    add r0, sp, #8\n    bl sub_02013FA8\n    add r0, r4, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void FontOAM_Delete(void) {
    /* Original at 0x02013660 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _0201366A\n    bl GF_AssertFail\n    ldr r0, [r4]\n    cmp r0, #0\n    bne _02013674\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl sub_02013ECC\n    ldr r0, [r4]\n    bl Heap_Free\n    add r0, r4, #0\n    bl sub_02013AC0\n    pop {r4, pc}"
    );
    #endif
}

void sub_02013688(void) {
    /* Original at 0x02013688 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r3, sp, #0\n    add r5, r0, #0\n    str r3, [sp, #0xc]\n    str r3, [sp, #0x10]\n    add r4, r1, #0\n    ldrb r0, [r5, #7]\n    ldrb r1, [r5, #8]\n    bl sub_02013BD4\n    add r0, sp, #0\n    add r1, r4, #0\n    bl sub_02013E24\n    add r4, r0, #0\n    add r0, sp, #0\n    bl sub_02013FA8\n    add r0, r4, #0\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void sub_020136B4(void) {
    /* Original at 0x020136B4 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r7, r2, #0\n    str r1, [sp]\n    cmp r5, #0\n    bne _020136C6\n    bl GF_AssertFail\n    ldr r0, [sp]\n    str r0, [r5, #0xc]\n    str r7, [r5, #0x10]\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    ldr r0, [r5, #8]\n    lsl r7, r7, #0xc\n    cmp r0, #0\n    beq _020136E8\n    bl Sprite_GetMatrixPtr\n    ldr r2, [r0]\n    ldr r1, [sp]\n    ldr r0, [r0, #4]\n    add r1, r1, r2\n    str r1, [sp]\n    add r7, r7, r0\n    mov r6, #0\n    str r6, [sp, #0xc]\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    ble _02013722\n    add r4, r6, #0\n    ldr r0, [r5]\n    add r0, r0, r4\n    ldr r0, [r0, #4]\n    lsl r1, r0, #0xc\n    ldr r0, [sp]\n    add r0, r0, r1\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    add r1, sp, #4\n    add r0, r0, r4\n    ldr r0, [r0, #8]\n    lsl r0, r0, #0xc\n    add r0, r7, r0\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    ldr r0, [r0, r4]\n    bl Sprite_SetMatrix\n    ldr r0, [r5, #4]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _020136F4\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02013728(void) {
    /* Original at 0x02013728 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    bne _02013734\n    bl GF_AssertFail\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    beq _0201378E\n    ldr r1, [r5, #0xc]\n    lsl r1, r1, #0xc\n    str r1, [sp]\n    ldr r1, [r5, #0x10]\n    lsl r7, r1, #0xc\n    bl Sprite_GetMatrixPtr\n    ldr r2, [r0]\n    ldr r0, [r0, #4]\n    mov r6, #0\n    ldr r1, [sp]\n    str r6, [sp, #0xc]\n    add r7, r7, r0\n    add r1, r1, r2\n    ldr r0, [r5, #4]\n    str r1, [sp]\n    cmp r0, #0\n    ble _0201378E\n    add r4, r6, #0\n    ldr r0, [r5]\n    add r0, r0, r4\n    ldr r0, [r0, #4]\n    lsl r1, r0, #0xc\n    ldr r0, [sp]\n    add r0, r0, r1\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    add r1, sp, #4\n    add r0, r0, r4\n    ldr r0, [r0, #8]\n    lsl r0, r0, #0xc\n    add r0, r7, r0\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    ldr r0, [r0, r4]\n    bl Sprite_SetMatrix\n    ldr r0, [r5, #4]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _02013760\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02013794(void) {
    /* Original at 0x02013794 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    cmp r5, #0\n    bne _020137A4\n    bl GF_AssertFail\n    cmp r4, #0\n    bne _020137AC\n    bl GF_AssertFail\n    cmp r6, #0\n    bne _020137B4\n    bl GF_AssertFail\n    ldr r0, [r5, #0xc]\n    str r0, [r4]\n    ldr r0, [r5, #0x10]\n    str r0, [r6]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void TextOBJ_SetSpritesDrawFlag(void) {
    /* Original at 0x020137C0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    cmp r5, #0\n    bne _020137CE\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    mov r6, #0\n    cmp r0, #0\n    ble _020137EC\n    add r4, r6, #0\n    ldr r0, [r5]\n    add r1, r7, #0\n    ldr r0, [r0, r4]\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #4]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _020137D8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020137F0(void) {
    /* Original at 0x020137F0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    cmp r5, #0\n    bne _020137FE\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    mov r6, #0\n    cmp r0, #0\n    ble _0201381C\n    add r4, r6, #0\n    ldr r0, [r5]\n    add r1, r7, #0\n    ldr r0, [r0, r4]\n    bl Sprite_SetPriority\n    ldr r0, [r5, #4]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _02013808\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02013820(void) {
    /* Original at 0x02013820 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    cmp r5, #0\n    bne _0201382E\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    mov r6, #0\n    cmp r0, #0\n    ble _0201384C\n    add r4, r6, #0\n    ldr r0, [r5]\n    add r1, r7, #0\n    ldr r0, [r0, r4]\n    bl Sprite_SetDrawPriority\n    ldr r0, [r5, #4]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _02013838\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void TextOBJ_SetPaletteNum(void) {
    /* Original at 0x02013850 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    cmp r5, #0\n    bne _0201385E\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    mov r6, #0\n    cmp r0, #0\n    ble _0201387C\n    add r4, r6, #0\n    ldr r0, [r5]\n    add r1, r7, #0\n    ldr r0, [r0, r4]\n    bl Sprite_SetPaletteOverride\n    ldr r0, [r5, #4]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _02013868\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02013880(void) {
    /* Original at 0x02013880 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    cmp r5, #0\n    bne _0201388E\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    mov r6, #0\n    cmp r0, #0\n    ble _020138AC\n    add r4, r6, #0\n    ldr r0, [r5]\n    add r1, r7, #0\n    ldr r0, [r0, r4]\n    bl Sprite_SetPalIndexRespectVramOffset\n    ldr r0, [r5, #4]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _02013898\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020138B0(void) {
    /* Original at 0x020138B0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    cmp r5, #0\n    bne _020138BE\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    mov r6, #0\n    cmp r0, #0\n    ble _020138DC\n    add r4, r6, #0\n    ldr r0, [r5]\n    add r1, r7, #0\n    ldr r0, [r0, r4]\n    bl Sprite_SetPalOffset\n    ldr r0, [r5, #4]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _020138C8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020138E0(void) {
    /* Original at 0x020138E0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    cmp r5, #0\n    bne _020138EE\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    mov r6, #0\n    cmp r0, #0\n    ble _0201390C\n    add r4, r6, #0\n    ldr r0, [r5]\n    add r1, r7, #0\n    ldr r0, [r0, r4]\n    bl Sprite_SetPalOffsetRespectVramOffset\n    ldr r0, [r5, #4]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _020138F8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02013910(void) {
    /* Original at 0x02013910 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #0x18\n    bl Heap_Alloc\n    add r4, r0, #0\n    str r4, [r4, #0xc]\n    str r4, [r4, #0x10]\n    ldrb r0, [r5, #7]\n    ldrb r1, [r5, #8]\n    add r2, r6, #0\n    add r3, r4, #0\n    bl sub_02013BD4\n    str r0, [r4, #0x14]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02013938(void) {
    sub_02013FA8();
    Heap_Free(r4);
}

void sub_02013948(void) {
    sub_02013E24();
}

void TextOBJ_Create(void) {
    /* Original at 0x02013950 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r6, r1, #0\n    cmp r5, #0\n    bne _02013960\n    bl GF_AssertFail\n    ldr r0, [r5]\n    bl sub_02013AD0\n    add r4, r0, #0\n    bne _0201396E\n    bl GF_AssertFail\n    ldr r0, [r5, #0x10]\n    mov r1, #0x24\n    str r0, [r4, #8]\n    ldr r0, [r5, #0x18]\n    str r0, [r4, #0xc]\n    ldr r0, [r5, #0x1c]\n    str r0, [r4, #0x10]\n    ldr r2, [r6, #0x14]\n    ldr r0, [r5, #0x2c]\n    mul r1, r2\n    bl Heap_AllocAtEnd\n    add r7, r0, #0\n    ldr r2, [r6, #0x14]\n    mov r1, #0xc\n    ldr r0, [r5, #0x2c]\n    mul r1, r2\n    bl Heap_Alloc\n    str r0, [r4]\n    ldr r0, [r6, #0x14]\n    add r1, r6, #0\n    str r0, [r4, #4]\n    ldr r0, [r5, #0x28]\n    add r2, r7, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x2c]\n    str r0, [sp, #4]\n    ldr r0, [r5, #4]\n    ldr r3, [r5, #0x14]\n    bl sub_02013C5C\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    add r3, r4, #0\n    bl sub_02013E78\n    add r0, r7, #0\n    bl Heap_Free\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void TextOBJ_Destroy(void) {
    FontOAM_Delete();
}

void TextOBJ_CopyFromBGWindow(void) {
    /* Original at 0x020139D0 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    ldr r0, [r0]\n    add r7, r1, #0\n    ldr r0, [r0]\n    str r2, [sp, #4]\n    add r5, r3, #0\n    str r0, [sp, #8]\n    bl Sprite_GetVramType\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0xc]\n    add r0, r7, #0\n    bl sub_02013948\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl Heap_AllocAtEnd\n    mov r1, #0\n    add r2, r6, #0\n    add r4, r0, #0\n    bl memset\n    ldr r0, [sp, #4]\n    ldr r3, [sp, #0xc]\n    add r1, r4, #0\n    add r2, r7, #0\n    str r5, [sp]\n    bl sub_02013D88\n    add r0, r4, #0\n    add r1, r6, #0\n    bl DC_FlushRange\n    ldr r0, [sp, #8]\n    bl Sprite_GetImageProxy\n    ldr r1, [sp, #0xc]\n    cmp r1, #1\n    bne _02013A36\n    mov r1, #1\n    bl NNS_G2dGetImageLocation\n    add r1, r0, #0\n    add r0, r4, #0\n    add r2, r6, #0\n    bl GX_LoadOBJ\n    b _02013A46\n    mov r1, #2\n    bl NNS_G2dGetImageLocation\n    add r1, r0, #0\n    add r0, r4, #0\n    add r2, r6, #0\n    bl GXS_LoadOBJ\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02013A50(void) {
    /* Original at 0x02013A50 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    ldr r0, [sp, #0x20]\n    add r7, r1, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x24]\n    ldrb r1, [r6, #7]\n    str r0, [sp, #0x24]\n    add r0, r3, #0\n    add r0, r7, r0\n    str r2, [sp]\n    str r3, [sp, #4]\n    cmp r1, r0\n    bge _02013A72\n    bl GF_AssertFail\n    ldrb r2, [r6, #8]\n    ldr r1, [sp]\n    ldr r0, [sp, #0x20]\n    add r0, r1, r0\n    cmp r2, r0\n    bge _02013A82\n    bl GF_AssertFail\n    ldr r0, [sp]\n    mov r4, #0\n    cmp r0, #0\n    ble _02013ABA\n    lsl r0, r7, #5\n    add r5, r4, #0\n    str r0, [sp, #8]\n    ldrb r1, [r6, #7]\n    ldr r0, [sp, #0x20]\n    add r2, r1, #0\n    add r0, r4, r0\n    mul r2, r0\n    ldr r0, [sp, #4]\n    lsl r1, r5, #5\n    add r2, r2, r0\n    ldr r0, [sp, #0x24]\n    lsl r2, r2, #5\n    add r0, r0, r1\n    ldr r1, [r6, #0xc]\n    add r1, r1, r2\n    ldr r2, [sp, #8]\n    bl memcpy\n    ldr r0, [sp]\n    add r4, r4, #1\n    add r5, r5, r7\n    cmp r4, r0\n    blt _02013A90\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02013AC0(void) {
    /* Original at 0x02013AC0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x14\n    mov r1, #0\n    strb r1, [r0]\n    add r0, r0, #1\n    sub r2, r2, #1\n    bne _02013AC4\n    bx lr"
    );
    #endif
}

void sub_02013AD0(void) {
    /* Original at 0x02013AD0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x64]\n    mov r2, #0\n    cmp r1, #0\n    ble _02013AF4\n    ldr r3, [r0, #0x60]\n    ldr r1, [r3]\n    cmp r1, #0\n    bne _02013AEA\n    ldr r1, [r0, #0x60]\n    mov r0, #0x14\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    ldr r1, [r0, #0x64]\n    add r2, r2, #1\n    add r3, #0x14\n    cmp r2, r1\n    blt _02013ADA\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_02013AF8(void) {
    /* Original at 0x02013AF8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, _02013B20 ; =_020F5F2C\n    mov r3, #0\n    ldrb r2, [r4]\n    cmp r2, r0\n    bgt _02013B10\n    ldrb r2, [r4, #1]\n    cmp r2, r1\n    bgt _02013B10\n    add r0, r3, #0\n    pop {r3, r4}\n    bx lr\n    add r3, r3, #1\n    add r4, r4, #2\n    cmp r3, #0xc\n    blt _02013AFE\n    mov r0, #0xc\n    pop {r3, r4}\n    bx lr\n    nop\n    _02013B20: .word _020F5F2C"
    );
    #endif
}

void sub_02013B24(void) {
    /* Original at 0x02013B24 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r0, r2, #0\n    bl sub_02013F78\n    ldr r1, [r6, #0x10]\n    add r4, r0, #0\n    bl sub_02013FC0\n    ldr r0, [r5, #8]\n    ldr r1, [r5, #0xc]\n    bl sub_02013AF8\n    str r0, [r4, #8]\n    ldr r0, [r5, #4]\n    ldr r1, _02013BCC ; =_020F5F2C\n    str r0, [r4]\n    ldr r0, [r5]\n    ldr r6, _02013BD0 ; =_020F5F2D\n    str r0, [r4, #4]\n    ldr r0, [r4, #8]\n    ldr r2, [r5, #8]\n    lsl r3, r0, #1\n    ldrb r0, [r1, r3]\n    ldrb r3, [r6, r3]\n    sub r2, r2, r0\n    ldr r0, [r5, #0xc]\n    sub r6, r0, r3\n    cmp r2, #0\n    ble _02013B8C\n    str r0, [r5, #0x1c]\n    str r2, [r5, #0x18]\n    ldr r0, [r5]\n    str r0, [r5, #0x10]\n    ldr r2, [r4, #8]\n    ldr r0, [r5, #4]\n    lsl r2, r2, #1\n    ldrb r1, [r1, r2]\n    add r0, r0, r1\n    str r0, [r5, #0x14]\n    add r0, r5, #0\n    add r0, #0x20\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02013B84\n    bl GF_AssertFail\n    add r0, r5, #0\n    mov r1, #1\n    add r0, #0x20\n    strb r1, [r0]\n    cmp r6, #0\n    ble _02013BA2\n    ldr r0, [r4, #8]\n    ldr r2, [r5]\n    lsl r1, r0, #1\n    ldr r0, _02013BD0 ; =_020F5F2D\n    ldrb r0, [r0, r1]\n    add r0, r2, r0\n    str r0, [r5]\n    str r6, [r5, #0xc]\n    b _02013BC6\n    add r0, r5, #0\n    add r0, #0x20\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02013BC2\n    add r3, r5, #0\n    add r3, #0x10\n    add r2, r5, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r0, #0\n    add r5, #0x20\n    strb r0, [r5]\n    b _02013BC6\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _02013BCC: .word _020F5F2C\n    _02013BD0: .word _020F5F2D"
    );
    #endif
}

void sub_02013BD4(void) {
    /* Original at 0x02013BD4 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r7, r0, #0\n    str r1, [sp]\n    add r5, r2, #0\n    add r6, r3, #0\n    cmp r7, #0\n    bne _02013BE8\n    bl GF_AssertFail\n    ldr r0, [sp]\n    cmp r0, #0\n    bne _02013BF2\n    bl GF_AssertFail\n    ldr r0, [sp]\n    mov r4, #0\n    str r0, [sp, #0x10]\n    str r4, [sp, #4]\n    str r4, [sp, #8]\n    str r7, [sp, #0xc]\n    add r0, sp, #0x24\n    strb r4, [r0]\n    ldr r0, [sp]\n    str r4, [sp, #0x2c]\n    str r7, [sp, #0x30]\n    cmp r0, #0\n    beq _02013C50\n    add r7, sp, #4\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp]\n    bl sub_02013AF8\n    lsl r1, r0, #1\n    ldr r0, _02013C58 ; =_020F5F2C\n    add r0, r0, r1\n    ldrb r0, [r0, #1]\n    ldr r1, [sp, #4]\n    add r1, r1, r0\n    str r1, [sp, #0x28]\n    ldr r1, [sp, #0x10]\n    sub r1, r1, r0\n    str r1, [sp, #0x34]\n    str r0, [sp, #0x10]\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    add r4, r4, #1\n    bl sub_02013B24\n    cmp r0, #0\n    beq _02013C2C\n    add r2, sp, #0x28\n    add r3, sp, #4\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [sp, #0x10]\n    str r0, [sp]\n    cmp r0, #0\n    bne _02013C0E\n    add r0, r4, #0\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02013C58: .word _020F5F2C"
    );
    #endif
}

void sub_02013C5C(void) {
    /* Original at 0x02013C5C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x30]\n    str r1, [sp, #0x14]\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x34]\n    add r5, r2, #0\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x30]\n    add r6, r3, #0\n    cmp r0, #1\n    bne _02013C7E\n    mov r0, #1\n    lsl r0, r0, #0x1a\n    ldr r1, [r0]\n    b _02013C82\n    ldr r0, _02013CC8 ; =0x04001000\n    ldr r1, [r0]\n    ldr r0, _02013CCC ; =0x00300010\n    add r7, r1, #0\n    and r7, r0\n    add r0, r7, #0\n    bl ObjCharTransfer_GetBlockSizeFromMode\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    ldr r4, [r0, #0xc]\n    cmp r4, r0\n    beq _02013CC2\n    add r0, r5, #0\n    bl NNS_G2dInitImageProxy\n    str r7, [sp]\n    ldr r0, [sp, #0x30]\n    str r6, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x34]\n    ldr r3, [sp, #0x18]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    add r1, r4, #0\n    add r2, r5, #0\n    bl sub_02013CD0\n    add r6, r0, #0\n    ldr r4, [r4, #0xc]\n    ldr r0, [sp, #0x14]\n    add r5, #0x24\n    cmp r4, r0\n    bne _02013C98\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02013CC8: .word 0x04001000\n    _02013CCC: .word 0x00300010"
    );
    #endif
}

void sub_02013CD0(void) {
    /* Original at 0x02013CD0 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r1, #0\n    str r0, [sp, #8]\n    ldr r0, [r6, #8]\n    add r5, r2, #0\n    lsl r1, r0, #1\n    ldr r0, _02013D74 ; =_020F5F2C\n    ldrb r0, [r0, r1]\n    str r0, [sp, #0x10]\n    ldr r0, _02013D78 ; =_020F5F2D\n    ldrb r0, [r0, r1]\n    ldr r1, [sp, #0x10]\n    add r4, r1, #0\n    mul r4, r0\n    str r0, [sp, #0xc]\n    cmp r4, r3\n    bge _02013CF6\n    add r4, r3, #0\n    lsl r4, r4, #5\n    ldr r0, [sp, #0x34]\n    add r1, r4, #0\n    bl Heap_AllocAtEnd\n    add r7, r0, #0\n    ldr r0, [r6, #4]\n    ldr r1, [sp, #0x10]\n    str r0, [sp]\n    str r7, [sp, #4]\n    ldr r0, [sp, #8]\n    ldr r2, [sp, #0xc]\n    ldr r3, [r6]\n    bl sub_02013A50\n    add r0, r7, #0\n    add r1, r4, #0\n    bl DC_FlushRange\n    ldr r0, [sp, #0x30]\n    cmp r0, #1\n    bne _02013D38\n    ldr r6, [sp, #0x2c]\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl GX_LoadOBJ\n    mov r0, #1\n    str r6, [r5, #4]\n    lsl r0, r0, #0x1a\n    ldr r1, [r0]\n    b _02013D4A\n    ldr r6, [sp, #0x2c]\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl GXS_LoadOBJ\n    ldr r0, _02013D7C ; =0x04001000\n    str r6, [r5, #8]\n    ldr r1, [r0]\n    ldr r0, _02013D80 ; =0x00300010\n    and r0, r1\n    str r0, [r5, #0x20]\n    ldr r0, _02013D84 ; =0x0000FFFF\n    str r0, [r5, #0xc]\n    str r0, [r5, #0x10]\n    mov r0, #3\n    str r0, [r5, #0x14]\n    mov r0, #0\n    str r0, [r5, #0x18]\n    mov r0, #1\n    str r0, [r5, #0x1c]\n    ldr r0, [sp, #0x28]\n    str r0, [r5, #0x20]\n    add r0, r7, #0\n    bl Heap_Free\n    ldr r0, [sp, #0x2c]\n    add r0, r0, r4\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02013D74: .word _020F5F2C\n    _02013D78: .word _020F5F2D\n    _02013D7C: .word 0x04001000\n    _02013D80: .word 0x00300010\n    _02013D84: .word 0x0000FFFF"
    );
    #endif
}

void sub_02013D88(void) {
    /* Original at 0x02013D88 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r2, #0\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r7, [sp, #0x30]\n    cmp r3, #1\n    bne _02013DA0\n    mov r0, #1\n    lsl r0, r0, #0x1a\n    ldr r1, [r0]\n    b _02013DA4\n    ldr r0, _02013DD8 ; =0x04001000\n    ldr r1, [r0]\n    ldr r0, _02013DDC ; =0x00300010\n    add r5, r1, #0\n    and r5, r0\n    add r0, r5, #0\n    bl ObjCharTransfer_GetBlockSizeFromMode\n    ldr r4, [r6, #0xc]\n    str r0, [sp, #0x14]\n    mov r3, #0\n    cmp r4, r6\n    beq _02013DD4\n    ldr r0, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    str r0, [sp]\n    str r5, [sp, #4]\n    ldr r0, [sp, #0xc]\n    str r7, [sp, #8]\n    add r1, r4, #0\n    bl sub_02013DE0\n    ldr r4, [r4, #0xc]\n    add r3, r0, #0\n    cmp r4, r6\n    bne _02013DBA\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _02013DD8: .word 0x04001000\n    _02013DDC: .word 0x00300010"
    );
    #endif
}

void sub_02013DE0(void) {
    /* Original at 0x02013DE0 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r1, #0\n    ldr r1, [r6, #8]\n    add r7, r0, #0\n    add r0, r2, #0\n    lsl r2, r1, #1\n    ldr r1, _02013E1C ; =_020F5F2C\n    add r5, r3, #0\n    ldrb r1, [r1, r2]\n    ldr r3, _02013E20 ; =_020F5F2D\n    ldrb r2, [r3, r2]\n    add r4, r1, #0\n    ldr r3, [sp, #0x20]\n    mul r4, r2\n    cmp r4, r3\n    bge _02013E04\n    add r4, r3, #0\n    ldr r3, [r6, #4]\n    add r0, r0, r5\n    str r3, [sp]\n    str r0, [sp, #4]\n    ldr r3, [r6]\n    add r0, r7, #0\n    bl sub_02013A50\n    lsl r0, r4, #5\n    add r0, r5, r0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02013E1C: .word _020F5F2C\n    _02013E20: .word _020F5F2D"
    );
    #endif
}

void sub_02013E24(void) {
    /* Original at 0x02013E24 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    cmp r1, #1\n    bne _02013E34\n    mov r0, #1\n    lsl r0, r0, #0x1a\n    ldr r1, [r0]\n    b _02013E38\n    ldr r0, _02013E6C ; =0x04001000\n    ldr r1, [r0]\n    ldr r0, _02013E70 ; =0x00300010\n    and r0, r1\n    bl ObjCharTransfer_GetBlockSizeFromMode\n    ldr r2, [r4, #0xc]\n    mov r3, #0\n    cmp r2, r4\n    beq _02013E66\n    ldr r1, _02013E74 ; =_020F5F2C\n    ldr r5, [r2, #8]\n    lsl r5, r5, #1\n    add r7, r1, r5\n    ldrb r6, [r1, r5]\n    ldrb r5, [r7, #1]\n    mul r5, r6\n    cmp r5, r0\n    bge _02013E5C\n    add r5, r0, #0\n    ldr r2, [r2, #0xc]\n    lsl r5, r5, #5\n    add r3, r3, r5\n    cmp r2, r4\n    bne _02013E4A\n    add r0, r3, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02013E6C: .word 0x04001000\n    _02013E70: .word 0x00300010\n    _02013E74: .word _020F5F2C"
    );
    #endif
}

void sub_02013E78(void) {
    /* Original at 0x02013E78 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    add r0, r1, #0\n    ldr r4, [r0, #0xc]\n    str r1, [sp, #4]\n    add r7, r2, #0\n    add r6, r3, #0\n    cmp r4, r0\n    beq _02013EC8\n    mov r5, #0\n    ldr r0, [sp]\n    add r1, r4, #0\n    add r2, r7, #0\n    bl sub_02013EF0\n    ldr r1, [r6]\n    str r0, [r1, r5]\n    ldr r0, [r6]\n    ldr r0, [r0, r5]\n    cmp r0, #0\n    bne _02013EA8\n    bl GF_AssertFail\n    ldr r0, [r4]\n    add r7, #0x24\n    lsl r1, r0, #3\n    ldr r0, [r6]\n    add r0, r0, r5\n    str r1, [r0, #4]\n    ldr r0, [r4, #4]\n    lsl r1, r0, #3\n    ldr r0, [r6]\n    add r0, r0, r5\n    str r1, [r0, #8]\n    ldr r4, [r4, #0xc]\n    ldr r0, [sp, #4]\n    add r5, #0xc\n    cmp r4, r0\n    bne _02013E8E\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02013ECC(void) {
    /* Original at 0x02013ECC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    mov r6, #0\n    cmp r0, #0\n    ble _02013EEC\n    add r4, r6, #0\n    ldr r0, [r5]\n    ldr r0, [r0, r4]\n    bl Sprite_Delete\n    ldr r0, [r5, #4]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _02013EDA\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02013EF0(void) {
    /* Original at 0x02013EF0 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x44\n    add r5, r0, #0\n    mov r0, #0\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r4, r1, #0\n    ldr r1, [r5, #0xc]\n    str r1, [sp, #8]\n    ldr r1, [r4, #8]\n    ldr r2, [r5]\n    lsl r1, r1, #2\n    add r1, r2, r1\n    ldr r1, [r1, #0x30]\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    ldr r2, [r5, #0x20]\n    add r1, sp, #0x20\n    strb r2, [r1]\n    ldr r1, [r5, #8]\n    str r1, [sp, #0x24]\n    add r1, sp, #0\n    str r1, [sp, #0x28]\n    ldr r1, [r5, #0x24]\n    str r1, [sp, #0x38]\n    ldr r1, [r5, #0x28]\n    str r1, [sp, #0x3c]\n    ldr r1, [r5, #0x2c]\n    str r1, [sp, #0x40]\n    str r0, [sp, #0x2c]\n    str r0, [sp, #0x30]\n    str r0, [sp, #0x34]\n    ldr r0, [r5, #0x10]\n    cmp r0, #0\n    beq _02013F4C\n    bl Sprite_GetMatrixPtr\n    add r3, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x2c\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r1, [r4]\n    ldr r2, [r5, #0x18]\n    lsl r1, r1, #3\n    add r1, r2, r1\n    ldr r0, [sp, #0x2c]\n    lsl r1, r1, #0xc\n    add r0, r0, r1\n    str r0, [sp, #0x2c]\n    ldr r1, [r4, #4]\n    ldr r2, [r5, #0x1c]\n    lsl r1, r1, #3\n    add r1, r2, r1\n    ldr r0, [sp, #0x30]\n    lsl r1, r1, #0xc\n    add r0, r0, r1\n    str r0, [sp, #0x30]\n    add r0, sp, #0x24\n    bl Sprite_Create\n    add sp, #0x44\n    pop {r4, r5, pc}"
    );
    #endif
}

void sub_02013F78(void) {
    /* Original at 0x02013F78 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x14\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    bne _02013F88\n    bl GF_AssertFail\n    mov r0, #0\n    str r0, [r4, #0xc]\n    str r0, [r4, #0x10]\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_02013F94(void) {
    /* Original at 0x02013F94 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _02013F9E\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void sub_02013FA8(void) {
    sub_02013F94();
}

void sub_02013FC0(void) {
    /* Original at 0x02013FC0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r1, #0xc]\n    str r2, [r0, #0xc]\n    str r1, [r0, #0x10]\n    ldr r2, [r1, #0xc]\n    str r0, [r2, #0x10]\n    str r0, [r1, #0xc]\n    bx lr"
    );
    #endif
}

void sub_02013FD0(void) {
    sub_02013728();
}
