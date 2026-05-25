/* Decompiled from asm/overlay_80_0223A00C.s */
#include "global.h"

void ov80_0223A00C(void) {
    /* Original at 0x0223A00C */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    add r7, r2, #0\n    mov r1, #0x5a\n    mov r2, #0xfa\n    str r3, [sp]\n    ldr r0, _0223A0B4 ; =ov80_0223A144\n    lsl r1, r1, #2\n    lsl r2, r2, #2\n    mov r3, #0x65\n    bl CreateSysTaskAndEnvironment\n    bl SysTask_GetData\n    add r4, r0, #0\n    str r5, [r4, #0x10]\n    ldr r0, [sp]\n    str r7, [r4, #0x14]\n    str r0, [r4, #0x18]\n    ldr r0, [sp, #0x18]\n    add r1, sp, #8\n    str r0, [r4, #0x1c]\n    ldr r0, [sp, #0x1c]\n    str r0, [r4, #0x20]\n    mov r0, #0x18\n    ldrsh r0, [r1, r0]\n    strh r0, [r4, #0x28]\n    mov r0, #0x1c\n    ldrsh r0, [r1, r0]\n    mov r1, #0x65\n    strh r0, [r4, #0x2a]\n    mov r0, #0x6d\n    bl NARC_New\n    str r0, [r4, #0x24]\n    ldr r1, [r4, #0x20]\n    cmp r1, #0\n    beq _0223A05E\n    mov r0, #0\n    strh r0, [r1]\n    add r0, r4, #0\n    sub r1, r6, #1\n    add r0, #0x2c\n    strb r1, [r0]\n    mov r0, #1\n    bl BgGetCharPtr\n    mov r2, #2\n    add r1, r0, #0\n    mov r0, #0\n    lsl r2, r2, #0xe\n    bl MIi_CpuClear32\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl ScheduleSetBgPosText\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #3\n    mov r3, #0\n    bl ScheduleSetBgPosText\n    add r1, r4, #0\n    add r1, #0x2c\n    ldrb r2, [r1]\n    mov r1, #0xc\n    ldr r3, _0223A0B8 ; =ov80_0223DB98\n    mul r1, r2\n    add r0, r4, #0\n    add r1, r3, r1\n    bl ov80_0223A938\n    ldr r0, _0223A0BC ; =ov80_0223A0EC\n    add r1, r4, #0\n    mov r2, #1\n    bl SysTask_CreateOnVWaitQueue\n    str r0, [r4, #0x34]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223A0B4: .word ov80_0223A144\n    _0223A0B8: .word ov80_0223DB98\n    _0223A0BC: .word ov80_0223A0EC"
    );
    #endif
}

void ov80_0223A0C0(void) {
    /* Original at 0x0223A0C0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #5\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    bl SysTask_Destroy\n    ldr r0, [r5, #0x34]\n    bl SysTask_Destroy\n    ldr r0, [r5, #0x24]\n    bl NARC_Delete\n    ldr r1, [r5, #0xc]\n    mov r0, #0x65\n    bl Heap_FreeExplicit\n    add r0, r4, #0\n    bl DestroySysTaskAndEnvironment\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_0223A0EC(void) {
    /* Original at 0x0223A0EC */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    add r0, r1, #0\n    ldr r1, _0223A13C ; =0x00000151\n    sub r2, r1, #2\n    ldrb r3, [r0, r2]\n    sub r2, r1, #3\n    ldrb r2, [r0, r2]\n    ldrb r4, [r0, r1]\n    lsl r3, r3, #8\n    lsl r5, r2, #8\n    add r6, r5, #0\n    sub r5, r1, #1\n    mov r2, #0xff\n    lsl r2, r2, #8\n    and r3, r2\n    ldrb r5, [r0, r5]\n    and r6, r2\n    orr r3, r4\n    orr r5, r6\n    ldr r6, _0223A140 ; =0x04000040\n    strh r5, [r6]\n    strh r3, [r6, #4]\n    add r3, r1, #4\n    ldrb r5, [r0, r3]\n    add r3, r1, #2\n    ldrb r4, [r0, r3]\n    add r3, r1, #1\n    ldrb r3, [r0, r3]\n    add r1, r1, #3\n    ldrb r0, [r0, r1]\n    lsl r3, r3, #8\n    and r3, r2\n    orr r0, r3\n    strh r0, [r6, #2]\n    lsl r0, r4, #8\n    and r0, r2\n    orr r0, r5\n    strh r0, [r6, #6]\n    pop {r3, r4, r5, r6}\n    bx lr\n    _0223A13C: .word 0x00000151\n    _0223A140: .word 0x04000040"
    );
    #endif
}

void ov80_0223A144(void) {
    /* Original at 0x0223A144 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r3, r4, #0\n    add r3, #0x2c\n    ldrb r6, [r3]\n    mov r3, #0xc\n    ldr r2, _0223A170 ; =ov80_0223DB98\n    mul r3, r6\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #0x65\n    add r2, r2, r3\n    bl ov80_0223A174\n    cmp r0, #1\n    bne _0223A16C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov80_0223A0C0\n    pop {r4, r5, r6, pc}\n    nop\n    _0223A170: .word ov80_0223DB98"
    );
    #endif
}

void ov80_0223A174(void) {
    /* Original at 0x0223A174 */
    /* Requires manual decompilation - 520 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r4, r0, #0\n    add r6, r1, #0\n    ldr r1, [r4]\n    add r7, r2, #0\n    ldr r5, [r4, #0xc]\n    cmp r1, #0x12\n    bls _0223A188\n    b _0223A620\n    add r2, r1, r1\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0223A194: ; jump table\n    add r0, r6, #0\n    mov r1, #0x94\n    bl Heap_Alloc\n    str r0, [r4, #0xc]\n    mov r1, #0\n    mov r2, #0x94\n    bl memset\n    ldr r5, [r4, #0xc]\n    ldr r0, [r4, #0x24]\n    mov r1, #2\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, _0223A50C ; =0x000007D4\n    str r0, [sp, #0x14]\n    ldr r0, [r4, #0x1c]\n    ldr r2, [r4, #0x14]\n    ldr r3, [r4, #0x18]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r3, #0x59\n    add r1, r0, #0\n    lsl r3, r3, #2\n    mov r2, #1\n    lsl r2, r1\n    ldr r0, [r4, r3]\n    mov r1, #0x65\n    orr r0, r2\n    str r0, [r4, r3]\n    mov r0, #4\n    bl FontSystem_NewInit\n    str r0, [r4, #0x30]\n    ldr r2, _0223A510 ; =0x000002D9\n    mov r0, #1\n    mov r1, #0x1b\n    add r3, r6, #0\n    bl NewMsgDataFromNarc\n    ldr r1, [r7]\n    str r0, [sp, #0x20]\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x24]\n    ldr r0, _0223A514 ; =0x00010200\n    add r1, r5, #0\n    str r0, [sp]\n    mov r3, #0\n    ldr r0, _0223A50C ; =0x000007D4\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x28\n    ldrsh r0, [r4, r0]\n    ldr r2, [sp, #0x24]\n    add r1, #0x7c\n    add r0, #0x74\n    str r0, [sp, #0xc]\n    mov r0, #0x2a\n    ldrsh r0, [r4, r0]\n    add r0, #0x58\n    str r0, [sp, #0x10]\n    str r3, [sp, #0x14]\n    str r3, [sp, #0x18]\n    add r0, r4, #0\n    bl ov80_0223A62C\n    ldr r0, [r5, #0x7c]\n    mov r1, #0\n    bl TextOBJ_SetSpritesDrawFlag\n    ldr r0, [sp, #0x24]\n    bl String_Delete\n    ldr r0, [sp, #0x20]\n    bl DestroyMsgData\n    ldr r0, [r4, #0x24]\n    mov r1, #2\n    str r0, [sp]\n    ldrb r0, [r7, #4]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, _0223A518 ; =0x000007D2\n    str r0, [sp, #0x14]\n    ldr r0, [r4, #0x1c]\n    ldr r2, [r4, #0x14]\n    ldr r3, [r4, #0x18]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r3, #0x16\n    lsl r3, r3, #4\n    str r0, [r4, r3]\n    add r0, r3, #4\n    ldr r2, [r4, r3]\n    mov r1, #1\n    ldr r0, [r4, r0]\n    lsl r1, r2\n    orr r1, r0\n    add r0, r3, #4\n    str r1, [r4, r0]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0223A51C ; =0x000007DA\n    str r0, [sp, #8]\n    ldrb r3, [r7, #5]\n    ldr r0, [r4, #0x14]\n    ldr r1, [r4, #0x18]\n    ldr r2, [r4, #0x24]\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0223A518 ; =0x000007D2\n    str r0, [sp, #4]\n    ldrb r3, [r7, #6]\n    ldr r0, [r4, #0x14]\n    ldr r1, [r4, #0x18]\n    ldr r2, [r4, #0x24]\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0223A518 ; =0x000007D2\n    str r0, [sp, #4]\n    ldrb r3, [r7, #7]\n    ldr r0, [r4, #0x14]\n    ldr r1, [r4, #0x18]\n    ldr r2, [r4, #0x24]\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #0\n    mov r2, #0x16\n    str r0, [sp, #4]\n    lsl r2, r2, #4\n    ldr r2, [r4, r2]\n    ldr r0, [r4, #0x1c]\n    lsl r2, r2, #0x14\n    mov r1, #2\n    lsr r2, r2, #0x10\n    mov r3, #0x10\n    bl PaletteData_BlendPalette\n    ldr r0, [r4, #0x24]\n    mov r1, #2\n    str r0, [sp]\n    mov r0, #0x3b\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, _0223A520 ; =0x000007D3\n    str r0, [sp, #0x14]\n    ldr r0, [r4, #0x1c]\n    ldr r2, [r4, #0x14]\n    ldr r3, [r4, #0x18]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    add r3, r0, #0\n    mov r7, #0x59\n    mov r0, #1\n    lsl r7, r7, #2\n    add r1, r0, #0\n    lsl r1, r3\n    ldr r2, [r4, r7]\n    mov r3, #0xcc\n    orr r1, r2\n    str r1, [r4, r7]\n    mov r1, #0\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0223A524 ; =0x000007DB\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x14]\n    ldr r1, [r4, #0x18]\n    ldr r2, [r4, #0x24]\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0223A520 ; =0x000007D3\n    mov r3, #0xcd\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x14]\n    ldr r1, [r4, #0x18]\n    ldr r2, [r4, #0x24]\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0223A520 ; =0x000007D3\n    mov r3, #0xce\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x14]\n    ldr r1, [r4, #0x18]\n    ldr r2, [r4, #0x24]\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    ldr r0, [r4, #0x14]\n    ldr r1, [r4, #0x18]\n    ldr r2, _0223A528 ; =ov80_0223DB30\n    bl SpriteSystem_NewSprite\n    add r1, r5, #0\n    add r1, #0x90\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r0, r5, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Sprite_TickFrame\n    mov r0, #0x2a\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _0223A3AA\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    str r0, [sp, #0x1c]\n    b _0223A3BA\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    str r0, [sp, #0x1c]\n    mov r0, #0x28\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _0223A3D4\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0223A3E2\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r7, r0, #0\n    ldr r0, [sp, #0x1c]\n    bl _ffix\n    add r5, #0x14\n    add r1, r5, #0\n    mov r2, #0x12\n    mov r5, #0x52\n    add r3, r0, #0\n    lsl r2, r2, #0xe\n    lsl r5, r5, #0xc\n    str r6, [sp]\n    add r0, r4, #0\n    add r2, r7, r2\n    add r3, r3, r5\n    bl ov80_0223A78C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0\n    ldr r3, _0223A52C ; =0x00007FFF\n    str r6, [sp, #8]\n    add r1, r0, #0\n    add r2, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0223A4FC\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    mov r0, #3\n    mov r1, #1\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r3, _0223A52C ; =0x00007FFF\n    str r6, [sp, #8]\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0223A4FC\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    mov r1, #0\n    bl ov80_0223AA80\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldrb r0, [r4, r0]\n    cmp r0, #1\n    bne _0223A4FC\n    add r0, r1, #1\n    str r0, [r4]\n    mov r0, #0xa\n    str r0, [r5, #0x78]\n    b _0223A620\n    ldr r0, [r5, #0x78]\n    sub r0, r0, #1\n    str r0, [r5, #0x78]\n    bpl _0223A4FC\n    add r5, #0x14\n    add r0, r5, #0\n    bl ov80_0223A834\n    cmp r0, #1\n    bne _0223A4FC\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    add r0, r1, #1\n    str r0, [r4]\n    b _0223A620\n    mov r2, #0x56\n    lsl r2, r2, #2\n    add r1, r5, #0\n    add r2, r4, r2\n    bl ov80_0223AB94\n    cmp r0, #1\n    bne _0223A4FC\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    mov r0, #0xa\n    str r0, [r5, #0x78]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    ldr r0, [r5, #0x78]\n    sub r0, r0, #1\n    str r0, [r5, #0x78]\n    bpl _0223A4FC\n    mov r0, #3\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r1, #0\n    ldr r3, _0223A52C ; =0x00007FFF\n    str r6, [sp, #8]\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _0223A4FE\n    b _0223A620\n    mov r0, #0\n    mov r2, #0x59\n    str r0, [sp]\n    lsl r2, r2, #2\n    ldr r3, [r4, r2]\n    ldr r2, _0223A530 ; =0x00003FFF\n    b _0223A534\n    _0223A50C: .word 0x000007D4\n    _0223A510: .word 0x000002D9\n    _0223A514: .word 0x00010200\n    _0223A518: .word 0x000007D2\n    _0223A51C: .word 0x000007DA\n    _0223A520: .word 0x000007D3\n    _0223A524: .word 0x000007DB\n    _0223A528: .word ov80_0223DB30\n    _0223A52C: .word 0x00007FFF\n    _0223A530: .word 0x00003FFF\n    ldr r0, [r4, #0x1c]\n    eor r2, r3\n    lsl r2, r2, #0x10\n    mov r1, #2\n    lsr r2, r2, #0x10\n    mov r3, #0xe\n    bl PaletteData_BlendPalettes\n    mov r0, #0\n    str r0, [sp]\n    mov r2, #0x16\n    str r0, [sp, #4]\n    lsl r2, r2, #4\n    ldr r2, [r4, r2]\n    ldr r0, [r4, #0x1c]\n    lsl r2, r2, #0x14\n    mov r1, #2\n    lsr r2, r2, #0x10\n    mov r3, #0x10\n    bl PaletteData_BlendPalette\n    mov r0, #0xd\n    mvn r0, r0\n    mov r1, #0x2c\n    mov r2, #1\n    bl SetBlendBrightness\n    ldr r0, [r5, #0x7c]\n    mov r1, #1\n    bl TextOBJ_SetSpritesDrawFlag\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    mov r0, #3\n    mov r1, #1\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r3, _0223A628 ; =0x00007FFF\n    str r6, [sp, #8]\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0223A620\n    mov r0, #0x1a\n    str r0, [r5, #0x78]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    ldr r0, [r5, #0x78]\n    sub r0, r0, #1\n    str r0, [r5, #0x78]\n    bpl _0223A620\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    mov r0, #0xf\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x65\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r3, _0223A628 ; =0x00007FFF\n    mov r0, #3\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0223A620\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0223A620\n    ldr r1, _0223A628 ; =0x00007FFF\n    mov r0, #1\n    bl sub_0200FBF4\n    ldr r1, [r4, #0x20]\n    cmp r1, #0\n    beq _0223A5FA\n    mov r0, #1\n    strh r0, [r1]\n    add r0, r5, #0\n    add r0, #0x7c\n    bl ov80_0223A748\n    ldr r0, [r4, #0x30]\n    bl sub_020135AC\n    add r0, r5, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    bl Sprite_DeleteAndFreeResources\n    add r5, #0x14\n    add r0, r5, #0\n    bl ov80_0223A81C\n    add sp, #0x28\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223A628: .word 0x00007FFF"
    );
    #endif
}

void ov80_0223A62C(void) {
    /* Original at 0x0223A62C */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x7c\n    add r5, r1, #0\n    add r7, r0, #0\n    ldr r0, [r5]\n    str r2, [sp, #0x18]\n    str r3, [sp, #0x1c]\n    ldr r6, [sp, #0x9c]\n    ldr r4, [sp, #0xa8]\n    cmp r0, #0\n    beq _0223A646\n    bl GF_AssertFail\n    ldr r0, [r7, #0x10]\n    cmp r4, #0\n    str r0, [sp, #0x24]\n    ldr r0, [r7, #0x18]\n    str r0, [sp, #0x20]\n    bne _0223A660\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x1c]\n    add r2, sp, #0x2c\n    add r3, sp, #0x28\n    bl ov80_0223A75C\n    b _0223A668\n    ldrh r0, [r4, #0x12]\n    str r0, [sp, #0x2c]\n    ldrh r0, [r4, #0x10]\n    str r0, [sp, #0x28]\n    cmp r4, #0\n    bne _0223A6A6\n    add r0, sp, #0x3c\n    bl InitWindow\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x28]\n    ldr r0, [sp, #0x24]\n    lsl r2, r2, #0x18\n    add r1, sp, #0x3c\n    lsr r2, r2, #0x18\n    mov r3, #2\n    bl AddTextWindowTopLeftCorner\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x90]\n    ldr r1, [sp, #0x1c]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    str r3, [sp, #0x10]\n    ldr r2, [sp, #0x18]\n    add r0, sp, #0x3c\n    str r3, [sp, #0x14]\n    bl AddTextPrinterParameterizedWithColorAndSpacing\n    b _0223A6B2\n    add r3, r4, #0\n    add r2, sp, #0x3c\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, sp, #0x3c\n    mov r1, #1\n    mov r2, #0x65\n    bl sub_02013688\n    mov r1, #1\n    add r2, r1, #0\n    add r3, sp, #0x30\n    bl sub_02021AC8\n    ldr r0, [sp, #0xa4]\n    cmp r0, #1\n    bne _0223A6D6\n    ldr r1, [sp, #0x2c]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    sub r6, r6, r0\n    ldr r0, [r7, #0x30]\n    str r0, [sp, #0x4c]\n    add r0, sp, #0x3c\n    str r0, [sp, #0x50]\n    ldr r0, [sp, #0x20]\n    bl SpriteManager_GetSpriteList\n    str r0, [sp, #0x54]\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x98]\n    bl SpriteManager_FindPlttResourceProxy\n    mov r1, #0\n    str r0, [sp, #0x58]\n    ldr r0, [sp, #0x34]\n    str r1, [sp, #0x5c]\n    str r0, [sp, #0x60]\n    ldr r0, [sp, #0xa0]\n    str r6, [sp, #0x64]\n    sub r0, #8\n    str r0, [sp, #0x68]\n    mov r0, #0xb\n    str r0, [sp, #0x70]\n    mov r0, #1\n    str r0, [sp, #0x74]\n    mov r0, #0x65\n    str r0, [sp, #0x78]\n    add r0, sp, #0x4c\n    str r1, [sp, #0x6c]\n    bl sub_020135D8\n    ldr r1, [sp, #0x94]\n    add r7, r0, #0\n    bl sub_020138E0\n    ldr r2, [sp, #0xa0]\n    add r0, r7, #0\n    add r1, r6, #0\n    sub r2, #8\n    bl sub_020136B4\n    cmp r4, #0\n    bne _0223A732\n    add r0, sp, #0x3c\n    bl RemoveWindow\n    str r7, [r5]\n    add r3, sp, #0x30\n    ldmia r3!, {r0, r1}\n    add r2, r5, #4\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [sp, #0x2c]\n    strh r0, [r5, #0x10]\n    add sp, #0x7c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0223A748(void) {
    /* Original at 0x0223A748 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl FontOAM_Delete\n    add r0, r4, #4\n    bl sub_02021B5C\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0223A75C(void) {
    /* Original at 0x0223A75C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    add r6, r2, #0\n    add r0, r1, #0\n    add r1, r4, #0\n    mov r2, #0\n    add r7, r3, #0\n    bl FontID_String_GetWidth\n    add r4, r0, #0\n    asr r1, r4, #2\n    lsr r1, r1, #0x1d\n    add r1, r4, r1\n    asr r5, r1, #3\n    mov r1, #8\n    bl FX_ModS32\n    cmp r0, #0\n    beq _0223A784\n    add r5, r5, #1\n    str r4, [r6]\n    str r5, [r7]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0223A78C(void) {
    /* Original at 0x0223A78C */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r6, r3, #0\n    mov ip, r2\n    ldr r3, _0223A818 ; =ov80_0223DB64\n    add r7, r0, #0\n    add r4, r1, #0\n    add r2, sp, #0\n    mov r5, #6\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r5, r5, #1\n    bne _0223A79E\n    ldr r0, [r3]\n    add r5, r4, #0\n    str r0, [r2]\n    mov r0, ip\n    asr r1, r0, #0xc\n    add r0, sp, #0\n    strh r1, [r0]\n    asr r1, r6, #0xc\n    strh r1, [r0, #2]\n    mov r6, #0\n    strh r6, [r4]\n    strh r6, [r4, #2]\n    add r5, #0x14\n    ldr r0, [r7, #0x14]\n    ldr r1, [r7, #0x18]\n    add r2, sp, #0\n    bl SpriteSystem_NewSprite\n    mov r1, #0\n    str r0, [r4, #4]\n    bl ManagedSprite_SetDrawFlag\n    cmp r6, #3\n    beq _0223A7FA\n    ldr r0, [r4, #4]\n    mov r1, #2\n    ldr r0, [r0]\n    bl Sprite_SetAffineOverwriteMode\n    ldr r0, [r4, #4]\n    mov r1, #1\n    ldr r0, [r0]\n    bl Sprite_SetAnimCtrlSeq\n    mov r1, #2\n    lsl r1, r1, #0xc\n    add r0, r5, #0\n    lsr r2, r1, #1\n    mov r3, #6\n    bl ov80_0223A8C4\n    b _0223A808\n    mov r1, #1\n    lsl r1, r1, #0xc\n    add r0, r5, #0\n    add r2, r1, #0\n    mov r3, #6\n    bl ov80_0223A8C4\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, #0x14\n    cmp r6, #4\n    blt _0223A7C0\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223A818: .word ov80_0223DB64"
    );
    #endif
}

void ov80_0223A81C(void) {
    Sprite_DeleteAndFreeResources(0);
}

void ov80_0223A834(void) {
    /* Original at 0x0223A834 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r7, r0, #0\n    mov r0, #1\n    mov r1, #2\n    str r0, [sp]\n    ldrsh r0, [r7, r1]\n    cmp r0, #4\n    bge _0223A862\n    mov r0, #0\n    str r0, [sp]\n    ldrsh r0, [r7, r0]\n    sub r0, r0, #1\n    strh r0, [r7]\n    ldr r0, [sp]\n    ldrsh r0, [r7, r0]\n    cmp r0, #0\n    bgt _0223A862\n    mov r0, #3\n    strh r0, [r7]\n    ldrsh r0, [r7, r1]\n    add r0, r0, #1\n    strh r0, [r7, #2]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #2\n    ldrsh r0, [r7, r0]\n    cmp r0, #0\n    ble _0223A8BE\n    add r6, r7, #0\n    add r6, #0x14\n    add r4, r7, #0\n    add r5, r7, #0\n    add r0, r6, #0\n    bl ov80_0223A8D4\n    ldr r1, [r4, #0x14]\n    str r0, [sp, #8]\n    add r0, sp, #0xc\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov80_0223A91C\n    ldr r0, [r5, #4]\n    add r1, sp, #0xc\n    ldr r0, [r0]\n    bl Sprite_SetAffineScale\n    ldr r0, [r5, #4]\n    mov r1, #1\n    ldr r0, [r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    bne _0223A8A8\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    add r6, #0x14\n    add r0, r0, #1\n    str r0, [sp, #4]\n    mov r0, #2\n    ldrsh r1, [r7, r0]\n    ldr r0, [sp, #4]\n    add r4, #0x14\n    add r5, r5, #4\n    cmp r0, r1\n    blt _0223A876\n    ldr r0, [sp]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0223A8C4(void) {
    /* Original at 0x0223A8C4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    str r1, [r0, #4]\n    sub r1, r2, r1\n    str r1, [r0, #8]\n    str r3, [r0, #0x10]\n    mov r1, #0\n    str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov80_0223A8D4(void) {
    /* Original at 0x0223A8D4 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r2, [r4, #0xc]\n    ldr r0, [r4, #8]\n    lsl r2, r2, #0xc\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    ldr r1, [r4, #0x10]\n    lsl r1, r1, #0xc\n    bl FX_Div\n    ldr r1, [r4, #4]\n    add r0, r0, r1\n    str r0, [r4]\n    ldr r0, [r4, #0xc]\n    ldr r1, [r4, #0x10]\n    add r0, r0, #1\n    cmp r0, r1\n    bgt _0223A914\n    str r0, [r4, #0xc]\n    mov r0, #0\n    pop {r4, pc}\n    str r1, [r4, #0xc]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0223A91C(void) {
    /* Original at 0x0223A91C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4}\n    sub sp, #0xc\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    add r2, sp, #0\n    add r4, r0, #0\n    str r1, [sp]\n    ldmia r2!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r4]\n    add sp, #0xc\n    pop {r4}\n    bx lr"
    );
    #endif
}

void ov80_0223A938(void) {
    /* Original at 0x0223A938 */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    mov r3, #1\n    lsl r3, r3, #0x1a\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r3]\n    ldr r0, _0223AA3C ; =0xFFFF1FFF\n    add r2, r3, #0\n    and r1, r0\n    mov r0, #6\n    lsl r0, r0, #0xc\n    orr r0, r1\n    str r0, [r3]\n    add r2, #0x48\n    ldrh r6, [r2]\n    mov r0, #0x3f\n    mov r1, #0x1f\n    bic r6, r0\n    orr r1, r6\n    mov r7, #0x20\n    orr r1, r7\n    strh r1, [r2]\n    ldrh r6, [r2]\n    ldr r1, _0223AA40 ; =0xFFFFC0FF\n    and r1, r6\n    mov r6, #0x1f\n    lsl r6, r6, #8\n    orr r6, r1\n    lsl r1, r7, #8\n    orr r1, r6\n    strh r1, [r2]\n    add r1, r3, #0\n    add r1, #0x4a\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #0x1d\n    orr r0, r2\n    orr r0, r7\n    strh r0, [r1]\n    add r1, r3, #0\n    mov r0, #0\n    add r1, #0x40\n    strh r0, [r1]\n    add r1, r3, #0\n    add r1, #0x44\n    strh r0, [r1]\n    add r1, r3, #0\n    add r1, #0x42\n    strh r0, [r1]\n    add r3, #0x46\n    strh r0, [r3]\n    str r0, [sp]\n    str r7, [sp, #4]\n    mov r0, #0xc0\n    str r0, [sp, #8]\n    ldrb r2, [r4, #8]\n    ldr r0, [r5, #0x1c]\n    mov r1, #0x6d\n    mov r3, #0x65\n    bl PaletteData_LoadNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x65\n    str r0, [sp, #0xc]\n    ldrb r1, [r4, #9]\n    ldr r0, [r5, #0x24]\n    ldr r2, [r5, #0x10]\n    mov r3, #1\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x65\n    str r0, [sp, #0xc]\n    ldrb r1, [r4, #0xa]\n    ldr r0, [r5, #0x24]\n    ldr r2, [r5, #0x10]\n    mov r3, #1\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add r0, r7, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0xc\n    str r0, [sp, #8]\n    mov r2, #0\n    ldr r0, [r5, #0x10]\n    mov r1, #1\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    ldr r0, [r5, #0x10]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    ldrb r1, [r4, #8]\n    mov r0, #0x6d\n    add r2, sp, #0x10\n    mov r3, #0x65\n    bl GfGfxLoader_GetPlttData\n    add r4, r0, #0\n    ldr r0, [sp, #0x10]\n    add r1, r5, #0\n    add r2, r7, #0\n    ldr r0, [r0, #0xc]\n    add r1, #0x40\n    add r2, #0xe0\n    bl MIi_CpuCopy16\n    add r0, r4, #0\n    bl Heap_Free\n    ldr r0, _0223AA44 ; =ov80_0223AA4C\n    ldr r2, _0223AA48 ; =0x0000044C\n    add r1, r5, #0\n    bl SysTask_CreateOnMainQueue\n    mov r1, #5\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223AA3C: .word 0xFFFF1FFF\n    _0223AA40: .word 0xFFFFC0FF\n    _0223AA44: .word ov80_0223AA4C\n    _0223AA48: .word 0x0000044C"
    );
    #endif
}

void ov80_0223AA4C(void) {
    /* Original at 0x0223AA4C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r1, #0x38]\n    add r0, r0, #1\n    str r0, [r1, #0x38]\n    bmi _0223AA7E\n    mov r2, #0\n    str r2, [r1, #0x38]\n    ldr r0, [r1, #0x3c]\n    add r0, r0, #1\n    str r0, [r1, #0x3c]\n    cmp r0, #8\n    blt _0223AA66\n    str r2, [r1, #0x3c]\n    mov r0, #0x20\n    str r0, [sp]\n    add r2, r1, #0\n    ldr r0, [r1, #0x1c]\n    ldr r1, [r1, #0x3c]\n    add r2, #0x40\n    lsl r1, r1, #5\n    add r1, r2, r1\n    mov r2, #0\n    mov r3, #0xc0\n    bl PaletteData_LoadPalette\n    pop {r3, pc}"
    );
    #endif
}

void ov80_0223AA80(void) {
    /* Original at 0x0223AA80 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r1, #0x51\n    lsl r1, r1, #2\n    add r4, r0, r1\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    cmp r5, #0\n    bne _0223AAAE\n    mov r0, #5\n    lsl r0, r0, #0xc\n    str r0, [r4]\n    str r0, [r4, #4]\n    mov r2, #0xfa\n    ldr r0, _0223AAC8 ; =ov80_0223AAD0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    bl SysTask_CreateOnMainQueue\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2e\n    lsl r0, r0, #8\n    str r0, [r4]\n    mov r0, #0x72\n    lsl r0, r0, #8\n    str r0, [r4, #4]\n    mov r2, #0xfa\n    ldr r0, _0223AACC ; =ov80_0223AB34\n    add r1, r4, #0\n    lsl r2, r2, #2\n    bl SysTask_CreateOnMainQueue\n    pop {r3, r4, r5, pc}\n    _0223AAC8: .word ov80_0223AAD0\n    _0223AACC: .word ov80_0223AB34"
    );
    #endif
}

void ov80_0223AAD0(void) {
    /* Original at 0x0223AAD0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrb r2, [r1, #9]\n    cmp r2, #0\n    bne _0223AB28\n    mov r0, #2\n    ldr r2, [r1]\n    lsl r0, r0, #0xa\n    sub r2, r2, r0\n    str r2, [r1]\n    ldr r2, [r1, #4]\n    add r0, r2, r0\n    str r0, [r1, #4]\n    mov r0, #0x2e\n    ldr r2, [r1]\n    lsl r0, r0, #8\n    cmp r2, r0\n    bgt _0223AB00\n    str r0, [r1]\n    mov r0, #0x72\n    lsl r0, r0, #8\n    str r0, [r1, #4]\n    ldrb r0, [r1, #9]\n    add r0, r0, #1\n    strb r0, [r1, #9]\n    mov r0, #0\n    strb r0, [r1, #0xa]\n    ldr r2, [r1]\n    asr r2, r2, #8\n    strb r2, [r1, #0xb]\n    mov r2, #0xff\n    strb r2, [r1, #0xc]\n    ldr r2, [r1, #4]\n    asr r2, r2, #8\n    strb r2, [r1, #0xd]\n    mov r2, #1\n    strb r2, [r1, #0xe]\n    ldr r2, [r1]\n    asr r2, r2, #8\n    strb r2, [r1, #0xf]\n    strb r0, [r1, #0x10]\n    ldr r0, [r1, #4]\n    asr r0, r0, #8\n    strb r0, [r1, #0x11]\n    pop {r3, pc}\n    mov r2, #1\n    strb r2, [r1, #8]\n    bl SysTask_Destroy\n    pop {r3, pc}"
    );
    #endif
}

void ov80_0223AB34(void) {
    /* Original at 0x0223AB34 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrb r2, [r1, #9]\n    cmp r2, #0\n    bne _0223AB88\n    mov r0, #2\n    ldr r2, [r1]\n    lsl r0, r0, #0xa\n    add r2, r2, r0\n    str r2, [r1]\n    ldr r2, [r1, #4]\n    sub r0, r2, r0\n    str r0, [r1, #4]\n    mov r0, #5\n    ldr r2, [r1]\n    lsl r0, r0, #0xc\n    cmp r2, r0\n    blt _0223AB60\n    str r0, [r1]\n    str r0, [r1, #4]\n    ldrb r0, [r1, #9]\n    add r0, r0, #1\n    strb r0, [r1, #9]\n    mov r0, #0\n    strb r0, [r1, #0xa]\n    ldr r2, [r1]\n    asr r2, r2, #8\n    strb r2, [r1, #0xb]\n    mov r2, #0xff\n    strb r2, [r1, #0xc]\n    ldr r2, [r1, #4]\n    asr r2, r2, #8\n    strb r2, [r1, #0xd]\n    mov r2, #1\n    strb r2, [r1, #0xe]\n    ldr r2, [r1]\n    asr r2, r2, #8\n    strb r2, [r1, #0xf]\n    strb r0, [r1, #0x10]\n    ldr r0, [r1, #4]\n    asr r0, r0, #8\n    strb r0, [r1, #0x11]\n    pop {r3, pc}\n    mov r2, #1\n    strb r2, [r1, #8]\n    bl SysTask_Destroy\n    pop {r3, pc}"
    );
    #endif
}

void ov80_0223AB94(void) {
    /* Original at 0x0223AB94 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    add r3, r0, #0\n    ldr r0, [r4, #4]\n    add r5, r1, #0\n    cmp r0, #0\n    beq _0223ABA8\n    cmp r0, #1\n    beq _0223ABE4\n    b _0223AC1C\n    mov r1, #0x28\n    ldrsh r2, [r3, r1]\n    add r1, #0xd8\n    add r0, r5, #0\n    add r1, r2, r1\n    mov r2, #0x2a\n    ldrsh r2, [r3, r2]\n    add r0, #0x90\n    lsl r1, r1, #0x10\n    add r2, #0x50\n    lsl r2, r2, #0x10\n    mov r3, #2\n    ldr r0, [r0]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x14\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    add r5, #0x90\n    ldr r0, [r5]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #1\n    lsl r0, r0, #0x10\n    str r0, [r4]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _0223AC20\n    mov r0, #0xf\n    ldr r1, [r4]\n    lsl r0, r0, #8\n    sub r1, r1, r0\n    mov r0, #0xd\n    lsl r0, r0, #0xc\n    str r1, [r4]\n    cmp r1, r0\n    bgt _0223ABFE\n    str r0, [r4]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    mov r2, #0x2a\n    ldrsh r2, [r3, r2]\n    ldr r1, [r4]\n    add r5, #0x90\n    add r2, #0x50\n    lsl r1, r1, #8\n    lsl r2, r2, #0x10\n    mov r3, #2\n    ldr r0, [r5]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x14\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    b _0223AC20\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}
