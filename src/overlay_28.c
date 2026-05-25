/* Decompiled from asm/overlay_28.s */
#include "global.h"

void ov28_0225D520(void) {
    /* Original at 0x0225D520 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r7, r1, #0\n    mov r0, #3\n    str r2, [sp]\n    mov r1, #8\n    lsl r2, r0, #0xf\n    str r3, [sp, #4]\n    bl Heap_Create\n    ldr r0, _0225D5E4 ; =0x04001050\n    mov r1, #0\n    strh r1, [r0]\n    mov r1, #0xd\n    ldr r0, _0225D5E8 ; =ov28_0225DC2C\n    lsl r1, r1, #6\n    mov r2, #0xa\n    mov r3, #8\n    bl CreateSysTaskAndEnvironment\n    add r6, r0, #0\n    bl SysTask_GetData\n    add r4, r0, #0\n    str r5, [r4, #0x10]\n    ldr r0, [sp]\n    str r7, [r4, #0x14]\n    str r0, [r4, #0x18]\n    ldr r0, [sp, #4]\n    mov r1, #0\n    str r0, [r4, #0x1c]\n    mov r0, #0xcf\n    str r6, [r4, #0x20]\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, [r4, #0x18]\n    bl ov01_021E7F54\n    mov r1, #0xcd\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    cmp r0, #1\n    bne _0225D5A6\n    ldr r0, [r4, #0x18]\n    add r1, sp, #8\n    bl FieldSystem_GetFacingObject\n    ldr r0, [sp, #8]\n    bl MapObject_GetScriptID\n    bl ov01_021F6BD0\n    cmp r0, #1\n    beq _0225D59E\n    ldr r0, [sp, #8]\n    bl MapObject_GetSpriteID\n    bl ov01_021F6BB0\n    cmp r0, #1\n    bne _0225D5A6\n    mov r0, #0xcd\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #0xfd\n    mov r1, #8\n    bl NARC_New\n    add r7, r0, #0\n    bl ov28_0225D628\n    add r0, r5, #0\n    bl ov28_0225D650\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov28_0225D6FC\n    add r0, r4, #0\n    bl ov28_0225D764\n    add r0, r4, #0\n    bl ov28_0225D7E0\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov28_0225D898\n    add r0, r7, #0\n    bl NARC_Delete\n    add r0, r6, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225D5E4: .word 0x04001050\n    _0225D5E8: .word ov28_0225DC2C"
    );
    #endif
}

void ov28_0225D5EC(void) {
    /* Original at 0x0225D5EC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    bl SysTask_GetData\n    add r4, r0, #0\n    bl DowsingMchn_FreeHiddenItemLocs\n    add r0, r4, #0\n    bl ov28_0225D8D0\n    add r0, r4, #0\n    bl ov28_0225D878\n    add r0, r4, #0\n    bl ov28_0225D7C4\n    ldr r0, [r4, #0x10]\n    bl ov28_0225D6E0\n    add r0, r5, #0\n    bl DestroySysTaskAndEnvironment\n    mov r0, #8\n    bl Heap_Destroy\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

u8 ov28_0225D624(void) {
    return 1;
}

void ov28_0225D628(void) {
    /* Original at 0x0225D628 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0x80\n    bl GX_SetBankForSubBG\n    mov r0, #1\n    lsl r0, r0, #8\n    bl GX_SetBankForSubOBJ\n    ldr r2, _0225D648 ; =0x04001000\n    ldr r0, _0225D64C ; =0xFFCFFFEF\n    ldr r1, [r2]\n    and r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    str r0, [r2]\n    pop {r3, pc}\n    _0225D648: .word 0x04001000\n    _0225D64C: .word 0xFFCFFFEF"
    );
    #endif
}

void ov28_0225D650(void) {
    /* Original at 0x0225D650 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x54\n    add r4, r0, #0\n    mov r0, #0\n    bl GXS_SetGraphicsMode\n    ldr r5, _0225D6D4 ; =ov28_0225EAC0\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #8\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0225D6D8 ; =ov28_0225EADC\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r5, _0225D6DC ; =ov28_0225EAF8\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #6\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add sp, #0x54\n    pop {r4, r5, pc}\n    _0225D6D4: .word ov28_0225EAC0\n    _0225D6D8: .word ov28_0225EADC\n    _0225D6DC: .word ov28_0225EAF8"
    );
    #endif
}

void ov28_0225D6E0(void) {
    FreeBgTilemapBuffer(6);
    FreeBgTilemapBuffer(r4, 5);
    FreeBgTilemapBuffer(r4, 4);
}

void ov28_0225D6FC(void) {
    /* Original at 0x0225D6FC */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    add r4, r1, #0\n    ldr r2, [r5, #0x10]\n    add r0, r4, #0\n    mov r1, #2\n    mov r3, #5\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x10]\n    add r0, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x10]\n    add r0, r4, #0\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #4\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov28_0225D764(void) {
    /* Original at 0x0225D764 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xc4\n    mov r3, #8\n    bl NewMsgDataFromNarc\n    mov r1, #0x11\n    add r4, r0, #0\n    bl NewString_ReadMsgData\n    mov r1, #0x69\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0x12\n    bl NewString_ReadMsgData\n    mov r1, #0x1a\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0x16\n    bl NewString_ReadMsgData\n    mov r1, #0x6a\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0x17\n    bl NewString_ReadMsgData\n    mov r1, #0x6b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0x15\n    bl NewString_ReadMsgData\n    mov r1, #0x1b\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r4, #0\n    bl DestroyMsgData\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov28_0225D7C4(void) {
    String_Delete(0, 0x1a);
}

void ov28_0225D7E0(void) {
    /* Original at 0x0225D7E0 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r0, #0\n    mov r0, #4\n    mov r1, #8\n    bl FontID_Alloc\n    mov r0, #0\n    str r0, [sp, #0x10]\n    mov r0, #0x6d\n    lsl r0, r0, #2\n    ldr r6, _0225D86C ; =ov28_0225EB52\n    add r4, r7, r0\n    add r5, r7, #0\n    ldr r0, [r7, #0x10]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl AddWindow\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0225D870 ; =0x000F0100\n    mov r2, #0x1a\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    lsl r2, r2, #4\n    ldr r2, [r5, r2]\n    add r0, r4, #0\n    mov r1, #4\n    mov r3, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl CopyWindowPixelsToVram_TextMode\n    ldr r0, [sp, #0x10]\n    add r6, #8\n    add r0, r0, #1\n    add r4, #0x10\n    add r5, r5, #4\n    str r0, [sp, #0x10]\n    cmp r0, #5\n    blo _0225D7FC\n    mov r0, #0x6d\n    lsl r0, r0, #2\n    add r2, r7, r0\n    mov r0, #0xcd\n    lsl r0, r0, #2\n    ldr r1, [r7, r0]\n    ldr r0, _0225D874 ; =ov28_0225EB7C\n    ldrb r0, [r0, r1]\n    lsl r0, r0, #4\n    add r0, r2, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    add r0, r7, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225D86C: .word ov28_0225EB52\n    _0225D870: .word 0x000F0100\n    _0225D874: .word ov28_0225EB7C"
    );
    #endif
}

void ov28_0225D878(void) {
    /* Original at 0x0225D878 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x6d\n    lsl r1, r1, #2\n    mov r4, #0\n    add r5, r0, r1\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #5\n    blo _0225D882\n    mov r0, #4\n    bl FontID_Release\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov28_0225D898(void) {
    /* Original at 0x0225D898 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #8\n    add r1, r5, #0\n    add r1, #0x28\n    add r2, r0, #0\n    bl G2dRenderer_Init\n    str r0, [r5, #0x24]\n    add r0, r5, #0\n    mov r2, #1\n    add r0, #0x28\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    add r0, r5, #0\n    bl ov28_0225D8EC\n    add r0, r5, #0\n    bl ov28_0225DA74\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov28_0225DB8C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov28_0225D8D0(void) {
    ov28_0225DBFC();
    ov28_0225DB54(r4);
    ov28_0225D910(r4);
    SpriteList_Delete(*((u32*)(r4 + 0x24)));
}

void ov28_0225D8EC(void) {
    /* Original at 0x0225D8EC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r6, #0x15\n    add r5, r0, #0\n    mov r4, #0\n    mov r7, #2\n    lsl r6, r6, #4\n    add r0, r7, #0\n    add r1, r4, #0\n    mov r2, #8\n    bl Create2DGfxResObjMan\n    str r0, [r5, r6]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blo _0225D8F8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov28_0225D910(void) {
    Destroy2DGfxResObjMan(0, 0x15);
}

void ov28_0225D92C(void) {
    /* Original at 0x0225D92C */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [sp, #0x30]\n    add r6, r2, #0\n    str r0, [sp]\n    mov r0, #2\n    add r4, r1, #0\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    add r2, r3, #0\n    ldr r0, [r4]\n    add r1, r6, #0\n    mov r3, #1\n    bl AddCharResObjFromOpenNarc\n    str r0, [r5]\n    bl sub_0200ADA4\n    ldr r0, [r5]\n    bl sub_0200A740\n    ldr r0, [sp, #0x34]\n    ldr r2, [sp, #0x20]\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    add r1, r6, #0\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #4]\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    str r0, [r5, #4]\n    bl sub_0200B00C\n    ldr r0, [r5, #4]\n    bl sub_0200A740\n    ldr r0, [sp, #0x38]\n    ldr r2, [sp, #0x24]\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    ldr r0, [r4, #8]\n    add r1, r6, #0\n    mov r3, #1\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r5, #8]\n    ldr r0, [sp, #0x3c]\n    ldr r2, [sp, #0x28]\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    ldr r0, [r4, #0xc]\n    add r1, r6, #0\n    mov r3, #1\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r5, #0xc]\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov28_0225D9BC(void) {
    /* Original at 0x0225D9BC */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    add r7, r2, #0\n    add r6, r3, #0\n    bl GF2DGfxResObj_GetResID\n    str r0, [sp, #0x2c]\n    ldr r0, [r5, #4]\n    bl GF2DGfxResObj_GetResID\n    str r0, [sp, #0x30]\n    ldr r0, [r5, #8]\n    bl GF2DGfxResObj_GetResID\n    str r0, [sp, #0x34]\n    ldr r0, [r5, #0xc]\n    bl GF2DGfxResObj_GetResID\n    str r0, [sp]\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r6, [sp, #0x10]\n    ldr r1, [r4]\n    ldr r2, [sp, #0x30]\n    str r1, [sp, #0x14]\n    ldr r1, [r4, #4]\n    ldr r3, [sp, #0x34]\n    str r1, [sp, #0x18]\n    ldr r1, [r4, #8]\n    str r1, [sp, #0x1c]\n    ldr r1, [r4, #0xc]\n    str r1, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    ldr r1, [sp, #0x2c]\n    add r0, r7, #0\n    bl CreateSpriteResourcesHeader\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov28_0225DA1C(void) {
    /* Original at 0x0225DA1C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x30\n    add r5, r3, #0\n    ldr r3, [r0, #0x24]\n    lsl r6, r1, #2\n    str r3, [sp]\n    str r2, [sp, #4]\n    ldrb r2, [r5]\n    lsl r2, r2, #0xc\n    str r2, [sp, #8]\n    ldrb r2, [r5, #1]\n    lsl r3, r2, #0xc\n    mov r2, #1\n    lsl r2, r2, #0x14\n    add r3, r3, r2\n    lsr r2, r2, #8\n    str r3, [sp, #0xc]\n    mov r3, #0\n    str r3, [sp, #0x10]\n    str r2, [sp, #0x14]\n    str r2, [sp, #0x18]\n    str r2, [sp, #0x1c]\n    add r2, sp, #0\n    strh r3, [r2, #0x20]\n    ldrb r2, [r5, #2]\n    str r2, [sp, #0x24]\n    mov r2, #2\n    str r2, [sp, #0x28]\n    mov r2, #8\n    str r2, [sp, #0x2c]\n    mov r2, #6\n    lsl r2, r2, #6\n    add r4, r0, r2\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    str r0, [r4, r6]\n    ldrb r1, [r5, #3]\n    ldr r0, [r4, r6]\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x30\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov28_0225DA74(void) {
    /* Original at 0x0225DA74 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x44\n    add r5, r0, #0\n    mov r0, #0xe\n    mov r1, #8\n    bl NARC_New\n    add r4, r0, #0\n    mov r0, #7\n    str r0, [sp]\n    mov r0, #0x44\n    str r0, [sp, #4]\n    mov r0, #0x45\n    str r0, [sp, #8]\n    mov r0, #4\n    ldr r1, _0225DB40 ; =0x000001F2\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r1, [sp, #0x14]\n    str r1, [sp, #0x18]\n    add r0, r1, #0\n    str r1, [sp, #0x1c]\n    sub r0, #0x92\n    sub r1, #0xa2\n    add r0, r5, r0\n    add r1, r5, r1\n    add r2, r4, #0\n    mov r3, #0x46\n    bl ov28_0225D92C\n    add r0, r4, #0\n    bl NARC_Delete\n    mov r1, #0x16\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0x10\n    add r1, r5, r1\n    add r2, sp, #0x20\n    mov r3, #1\n    bl ov28_0225D9BC\n    ldr r3, _0225DB44 ; =ov28_0225EA9A\n    add r0, r5, #0\n    mov r1, #0\n    add r2, sp, #0x20\n    bl ov28_0225DA1C\n    ldr r3, _0225DB48 ; =ov28_0225EA9E\n    add r0, r5, #0\n    mov r1, #1\n    add r2, sp, #0x20\n    bl ov28_0225DA1C\n    ldr r3, _0225DB4C ; =ov28_0225EAA2\n    add r0, r5, #0\n    mov r1, #2\n    add r2, sp, #0x20\n    bl ov28_0225DA1C\n    ldr r3, _0225DB50 ; =ov28_0225EAA6\n    add r0, r5, #0\n    mov r1, #3\n    add r2, sp, #0x20\n    bl ov28_0225DA1C\n    ldr r0, [r5, #0x18]\n    bl FieldSystem_GetPlayerAvatar\n    bl PlayerAvatar_CheckRunningShoesLock\n    cmp r0, #0\n    bne _0225DB22\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0xb\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x44\n    pop {r4, r5, pc}\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #4\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #7\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x44\n    pop {r4, r5, pc}\n    nop\n    _0225DB40: .word 0x000001F2\n    _0225DB44: .word ov28_0225EA9A\n    _0225DB48: .word ov28_0225EA9E\n    _0225DB4C: .word ov28_0225EAA2\n    _0225DB50: .word ov28_0225EAA6"
    );
    #endif
}

void ov28_0225DB54(void) {
    /* Original at 0x0225DB54 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl sub_0200AEB0\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_0200B0A8\n    pop {r4, pc}"
    );
    #endif
}

void ov28_0225DB8C(void) {
    /* Original at 0x0225DB8C */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x48\n    add r5, r0, #0\n    add r2, r1, #0\n    add r1, sp, #0x20\n    mov r0, #0\n    strb r0, [r1]\n    strb r0, [r1, #1]\n    strb r0, [r1, #2]\n    strb r0, [r1, #3]\n    mov r0, #7\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    mov r0, #6\n    str r0, [sp, #8]\n    mov r0, #9\n    ldr r1, _0225DBF8 ; =0x000001F3\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r1, [sp, #0x14]\n    str r1, [sp, #0x18]\n    add r0, r1, #0\n    str r1, [sp, #0x1c]\n    sub r0, #0x83\n    sub r1, #0xa3\n    add r0, r5, r0\n    add r1, r5, r1\n    mov r3, #4\n    bl ov28_0225D92C\n    mov r1, #0x17\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0x20\n    add r1, r5, r1\n    add r2, sp, #0x24\n    mov r3, #2\n    bl ov28_0225D9BC\n    mov r4, #0\n    add r6, sp, #0x24\n    add r7, sp, #0x20\n    add r0, r5, #0\n    add r1, r4, #4\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov28_0225DA1C\n    add r4, r4, #1\n    cmp r4, #4\n    blo _0225DBE2\n    add sp, #0x48\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225DBF8: .word 0x000001F3"
    );
    #endif
}

void ov28_0225DBFC(void) {
    /* Original at 0x0225DBFC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r6, #0x19\n    mov r4, #0\n    add r5, r7, #0\n    lsl r6, r6, #4\n    ldr r0, [r5, r6]\n    bl Sprite_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blo _0225DC08\n    mov r0, #0x17\n    lsl r0, r0, #4\n    ldr r0, [r7, r0]\n    bl sub_0200AEB0\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    bl sub_0200B0A8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov28_0225DC2C(void) {
    /* Original at 0x0225DC2C */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0x18]\n    add r1, r0, #0\n    add r1, #0xd2\n    ldrb r1, [r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1f\n    beq _0225DC56\n    bl FieldSystem_IsPlayerMovementAllowed\n    cmp r0, #0\n    beq _0225DC56\n    ldr r2, [r4, #0x18]\n    add r0, r2, #0\n    add r0, #0xd2\n    ldrb r1, [r0]\n    mov r0, #0x80\n    add r2, #0xd2\n    bic r1, r0\n    strb r1, [r2]\n    mov r0, #0xcf\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0225DC76\n    ldr r0, _0225DD1C ; =ov28_0225EA88\n    bl TouchscreenHitbox_FindHitboxAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0225DC76\n    mov r0, #0xcf\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, [r4, #0x18]\n    bl FieldSystem_TaskIsRunning\n    cmp r0, #1\n    beq _0225DC98\n    ldr r0, _0225DD1C ; =ov28_0225EA88\n    bl TouchscreenHitbox_FindHitboxAtTouchHeld\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0225DC98\n    mov r0, #0xcf\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0225DCD0\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov28_0225E31C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov28_0225E578\n    mov r2, #0x93\n    lsl r2, r2, #2\n    ldrh r1, [r4, r2]\n    ldr r0, _0225DD20 ; =0xFFFF7FFF\n    and r0, r1\n    strh r0, [r4, r2]\n    add r0, r2, #0\n    mov r1, #0\n    add r0, #0xec\n    strh r1, [r4, r0]\n    add r0, r2, #0\n    add r0, #0xee\n    strh r1, [r4, r0]\n    add r2, #0xf0\n    ldr r0, _0225DD24 ; =0x0000093D\n    str r1, [r4, r2]\n    bl StopSE\n    b _0225DCF6\n    cmp r0, #1\n    bne _0225DCF6\n    add r0, r4, #0\n    bl ov28_0225E7D4\n    add r0, r4, #0\n    bl ov28_0225E1A4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov28_0225E31C\n    add r0, r4, #0\n    mov r1, #1\n    bl ov28_0225E578\n    add r0, r4, #0\n    bl ov28_0225E730\n    add r0, r4, #0\n    bl ov28_0225E3BC\n    add r0, r4, #0\n    bl ov28_0225E43C\n    add r0, r4, #0\n    bl ov28_0225E900\n    add r0, r4, #0\n    bl ov28_0225E938\n    add r0, r4, #0\n    bl ov28_0225E9E0\n    ldr r0, [r4, #0x24]\n    bl SpriteList_RenderAndAnimateSprites\n    pop {r4, pc}\n    _0225DD1C: .word ov28_0225EA88\n    _0225DD20: .word 0xFFFF7FFF\n    _0225DD24: .word 0x0000093D"
    );
    #endif
}

void DowsingMchn_GetHiddenItemLocs(void) {
    AllocAndFetchNearbyHiddenItems(0x81, 8);
}

void DowsingMchn_FreeHiddenItemLocs(void) {
    Heap_Free(0x81, 0x81, 0);
}

void ov28_0225DD58(void) {
    /* Original at 0x0225DD58 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    bl DowsingMchn_GetHiddenItemLocs\n    mov r0, #0x83\n    mov r4, #0\n    lsl r0, r0, #2\n    str r4, [r5, r0]\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r6, r0, r4\n    ldrb r0, [r6, #4]\n    cmp r0, #0xff\n    beq _0225DDF6\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _0225DDBA\n    mov r0, #0\n    ldrsh r0, [r6, r0]\n    str r0, [sp, #4]\n    bl abs\n    add r7, r0, #0\n    mov r0, #2\n    ldrsh r0, [r6, r0]\n    bl abs\n    add r0, r7, r0\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    mov r0, #0x82\n    ldr r1, [sp, #4]\n    lsl r0, r0, #2\n    strh r1, [r5, r0]\n    sub r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r0, r4\n    mov r0, #2\n    ldrsh r1, [r1, r0]\n    ldr r0, _0225DE00 ; =0x0000020A\n    strh r1, [r5, r0]\n    mov r1, #1\n    add r0, r0, #2\n    str r1, [r5, r0]\n    b _0225DDF2\n    mov r0, #0\n    ldrsh r0, [r6, r0]\n    str r0, [sp]\n    bl abs\n    str r0, [sp, #8]\n    mov r0, #2\n    ldrsh r0, [r6, r0]\n    bl abs\n    ldr r1, [sp, #8]\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r7, r0\n    bls _0225DDF2\n    add r7, r0, #0\n    mov r0, #0x82\n    ldr r1, [sp]\n    lsl r0, r0, #2\n    strh r1, [r5, r0]\n    sub r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r0, r4\n    mov r0, #2\n    ldrsh r1, [r1, r0]\n    ldr r0, _0225DE00 ; =0x0000020A\n    strh r1, [r5, r0]\n    add r4, r4, #6\n    b _0225DD6A\n    add r0, r5, #0\n    bl DowsingMchn_FreeHiddenItemLocs\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0225DE00: .word 0x0000020A"
    );
    #endif
}

void ov28_0225DE04(void) {
    /* Original at 0x0225DE04 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl GF_CosDeg\n    mov r2, #0x11\n    asr r1, r0, #0x1f\n    lsl r2, r2, #0xe\n    mov r3, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    mov r0, #0x15\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [r5]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    mov r2, #0x11\n    asr r1, r0, #0x1f\n    lsl r2, r2, #0xe\n    mov r3, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    mov r0, #0x59\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [r5, #4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov28_0225DE64(void) {
    /* Original at 0x0225DE64 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    sub r1, #0x64\n    ldr r3, _0225DE74 ; =FX_Atan2Idx\n    sub r2, #0x54\n    lsl r0, r1, #0xc\n    lsl r1, r2, #0xc\n    bx r3\n    nop\n    _0225DE74: .word FX_Atan2Idx"
    );
    #endif
}

void ov28_0225DE78(void) {
    /* Original at 0x0225DE78 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0225DE84 ; =FX_Atan2Idx\n    add r2, r0, #0\n    lsl r0, r1, #0xc\n    lsl r1, r2, #0xc\n    bx r3\n    nop\n    _0225DE84: .word FX_Atan2Idx"
    );
    #endif
}

void ov28_0225DE88(void) {
    /* Original at 0x0225DE88 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    mul r0, r1\n    lsr r0, r0, #0x10\n    bx lr"
    );
    #endif
}

void ov28_0225DE98(void) {
    _u32_div_f(6);
}

void ov28_0225DEB0(void) {
    /* Original at 0x0225DEB0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x85\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    bl ov28_0225DE64\n    bl ov28_0225DE88\n    mov r1, #0x22\n    lsl r1, r1, #4\n    add r2, r1, #0\n    sub r2, #0xf4\n    add r3, r0, r2\n    add r2, r1, #0\n    str r0, [r4, r1]\n    add r2, #0xc\n    str r3, [r4, r2]\n    add r3, r0, #0\n    add r2, r1, #0\n    add r3, #0x78\n    add r2, #0x18\n    str r3, [r4, r2]\n    add r2, r1, #0\n    add r0, #0xd8\n    add r2, #0x24\n    str r0, [r4, r2]\n    add r0, r1, #0\n    add r0, #0x2c\n    ldrh r2, [r4, r0]\n    ldr r0, _0225DF00 ; =0xFFFF8000\n    add r1, #0x2c\n    and r2, r0\n    mov r0, #6\n    orr r0, r2\n    strh r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _0225DF00: .word 0xFFFF8000"
    );
    #endif
}

void ov28_0225DF04(void) {
    /* Original at 0x0225DF04 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0]\n    ldr r3, [r0, #4]\n    lsl r1, r2, #1\n    add r1, r2, r1\n    add r1, r3, r1\n    lsr r1, r1, #2\n    str r1, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov28_0225DF14(void) {
    /* Original at 0x0225DF14 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r1, #0x85\n    add r5, r0, #0\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl ov28_0225DE64\n    bl ov28_0225DE88\n    mov r1, #0x82\n    lsl r1, r1, #2\n    add r4, r0, #0\n    ldrsh r0, [r5, r1]\n    add r1, r1, #2\n    ldrsh r1, [r5, r1]\n    bl ov28_0225DE78\n    bl ov28_0225DE88\n    lsl r1, r4, #1\n    add r1, r4, r1\n    add r1, r0, r1\n    lsr r2, r1, #2\n    mov r1, #0x22\n    add r3, r4, #0\n    lsl r1, r1, #4\n    add r6, r0, #0\n    add r3, #0x1e\n    str r2, [r5, r1]\n    lsl r2, r3, #1\n    add r6, #0x78\n    add r2, r3, r2\n    add r2, r6, r2\n    add r6, r0, #0\n    lsr r3, r2, #2\n    add r2, r1, #0\n    add r2, #0xc\n    str r3, [r5, r2]\n    add r3, r4, #0\n    sub r3, #0x24\n    lsl r2, r3, #1\n    sub r6, #0x87\n    add r2, r3, r2\n    add r2, r6, r2\n    lsr r3, r2, #2\n    add r2, r1, #0\n    add r2, #0x18\n    add r4, #0x5a\n    str r3, [r5, r2]\n    lsl r2, r4, #1\n    add r0, #0x5a\n    add r2, r4, r2\n    add r0, r0, r2\n    lsr r2, r0, #2\n    add r0, r1, #0\n    add r0, #0x24\n    str r2, [r5, r0]\n    add r0, r1, #0\n    add r0, #0x2c\n    ldrh r2, [r5, r0]\n    ldr r0, _0225DFA0 ; =0xFFFF8000\n    add r1, #0x2c\n    and r2, r0\n    mov r0, #4\n    orr r0, r2\n    strh r0, [r5, r1]\n    pop {r4, r5, r6, pc}\n    nop\n    _0225DFA0: .word 0xFFFF8000"
    );
    #endif
}

void ov28_0225DFA4(void) {
    _u32_div_f(3);
}

void ov28_0225DFBC(void) {
    /* Original at 0x0225DFBC */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r1, #0x85\n    add r5, r0, #0\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl ov28_0225DE64\n    bl ov28_0225DE88\n    mov r1, #0x82\n    lsl r1, r1, #2\n    add r4, r0, #0\n    ldrsh r0, [r5, r1]\n    add r1, r1, #2\n    ldrsh r1, [r5, r1]\n    bl ov28_0225DE78\n    bl ov28_0225DE88\n    add r6, r0, #0\n    lsl r0, r4, #1\n    add r0, r6, r0\n    mov r1, #3\n    bl _u32_div_f\n    mov r1, #0x22\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r4, #0\n    add r1, r6, #0\n    add r0, #0x1e\n    add r1, #0x87\n    lsl r0, r0, #1\n    add r0, r1, r0\n    mov r1, #3\n    bl _u32_div_f\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r4, #0\n    add r1, r6, #0\n    sub r0, #0x24\n    sub r1, #0x78\n    lsl r0, r0, #1\n    add r0, r1, r0\n    mov r1, #3\n    bl _u32_div_f\n    mov r1, #0x8e\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r4, #0x5a\n    add r6, #0x3c\n    lsl r0, r4, #1\n    add r0, r6, r0\n    mov r1, #3\n    bl _u32_div_f\n    mov r1, #0x91\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    add r0, #8\n    ldrh r2, [r5, r0]\n    ldr r0, _0225E050 ; =0xFFFF8000\n    add r1, #8\n    and r2, r0\n    mov r0, #3\n    orr r0, r2\n    strh r0, [r5, r1]\n    pop {r4, r5, r6, pc}\n    _0225E050: .word 0xFFFF8000"
    );
    #endif
}

void ov28_0225E054(void) {
    /* Original at 0x0225E054 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #4]\n    ldr r1, [r0]\n    add r1, r2, r1\n    lsr r1, r1, #1\n    str r1, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov28_0225E060(void) {
    /* Original at 0x0225E060 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r1, #0x85\n    add r5, r0, #0\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl ov28_0225DE64\n    bl ov28_0225DE88\n    mov r1, #0x82\n    lsl r1, r1, #2\n    add r4, r0, #0\n    ldrsh r0, [r5, r1]\n    add r1, r1, #2\n    ldrsh r1, [r5, r1]\n    bl ov28_0225DE78\n    bl ov28_0225DE88\n    add r6, r0, #0\n    add r0, r4, r6\n    mov r1, #3\n    bl _u32_div_f\n    mov r1, #0x22\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r6, #0\n    add r0, #0x3c\n    add r0, r0, r4\n    lsr r2, r0, #1\n    add r0, r1, #0\n    add r0, #0xc\n    str r2, [r5, r0]\n    add r0, r6, #0\n    sub r0, #0x48\n    add r0, r0, r4\n    lsr r2, r0, #1\n    add r0, r1, #0\n    add r0, #0x18\n    add r4, #0x5a\n    add r6, #0x2d\n    str r2, [r5, r0]\n    add r0, r4, r6\n    lsr r2, r0, #1\n    add r0, r1, #0\n    add r0, #0x24\n    str r2, [r5, r0]\n    add r0, r1, #0\n    add r0, #0x2c\n    ldrh r2, [r5, r0]\n    ldr r0, _0225E0D8 ; =0xFFFF8000\n    add r1, #0x2c\n    and r2, r0\n    mov r0, #2\n    orr r0, r2\n    strh r0, [r5, r1]\n    pop {r4, r5, r6, pc}\n    _0225E0D8: .word 0xFFFF8000"
    );
    #endif
}

void ov28_0225E0DC(void) {
    _u32_div_f(3);
}

void ov28_0225E0F4(void) {
    /* Original at 0x0225E0F4 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r1, #0x82\n    add r5, r0, #0\n    lsl r1, r1, #2\n    ldrsh r0, [r5, r1]\n    lsl r6, r0, #3\n    add r0, r1, #2\n    ldrsh r0, [r5, r0]\n    add r6, #0x54\n    lsl r4, r0, #3\n    add r0, r1, #0\n    add r0, #0xc\n    add r1, #0x10\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r4, #0x64\n    sub r0, r6, r0\n    sub r1, r4, r1\n    bl ov28_0225DE78\n    bl ov28_0225DE88\n    mov r1, #0x22\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r0, #0xc\n    add r2, r6, #0\n    sub r1, #8\n    ldr r0, [r5, r0]\n    add r2, #0xa\n    sub r0, r2, r0\n    add r2, r4, #0\n    ldr r1, [r5, r1]\n    add r2, #0xc\n    sub r1, r2, r1\n    bl ov28_0225DE78\n    bl ov28_0225DE88\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r0, #0x18\n    add r2, r6, #0\n    sub r1, #0x14\n    ldr r0, [r5, r0]\n    sub r2, #0xc\n    sub r0, r2, r0\n    ldr r1, [r5, r1]\n    sub r2, r4, #4\n    sub r1, r2, r1\n    bl ov28_0225DE78\n    bl ov28_0225DE88\n    mov r1, #0x8e\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r0, #0x24\n    sub r1, #0x20\n    ldr r0, [r5, r0]\n    sub r6, #8\n    ldr r1, [r5, r1]\n    sub r4, #8\n    sub r0, r6, r0\n    sub r1, r4, r1\n    bl ov28_0225DE78\n    bl ov28_0225DE88\n    mov r1, #0x91\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    add r0, #8\n    ldrh r2, [r5, r0]\n    ldr r0, _0225E1A0 ; =0xFFFF8000\n    add r1, #8\n    and r2, r0\n    mov r0, #3\n    orr r0, r2\n    strh r0, [r5, r1]\n    pop {r4, r5, r6, pc}\n    _0225E1A0: .word 0xFFFF8000"
    );
    #endif
}

void ov28_0225E1A4(void) {
    /* Original at 0x0225E1A4 */
    /* Requires manual decompilation - 174 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    bl ov28_0225DD58\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r1, [r6, r0]\n    cmp r1, #0\n    bne _0225E1C8\n    add r0, r6, #0\n    bl ov28_0225DEB0\n    mov r0, #0x21\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r6, r0]\n    b _0225E236\n    sub r0, r0, #4\n    ldrsh r0, [r6, r0]\n    bl abs\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    ldr r0, _0225E310 ; =0x0000020A\n    ldrsh r0, [r6, r0]\n    bl abs\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    cmp r4, #8\n    bgt _0225E1F8\n    cmp r0, #8\n    bgt _0225E1F8\n    add r0, r6, #0\n    bl ov28_0225E0F4\n    mov r0, #0x21\n    mov r1, #4\n    lsl r0, r0, #4\n    str r1, [r6, r0]\n    b _0225E236\n    cmp r4, #0xc\n    bgt _0225E210\n    cmp r0, #0xc\n    bgt _0225E210\n    add r0, r6, #0\n    bl ov28_0225E060\n    mov r0, #0x21\n    mov r1, #3\n    lsl r0, r0, #4\n    str r1, [r6, r0]\n    b _0225E236\n    cmp r4, #0x11\n    bgt _0225E228\n    cmp r0, #0x11\n    bgt _0225E228\n    add r0, r6, #0\n    bl ov28_0225DFBC\n    mov r0, #0x21\n    mov r1, #2\n    lsl r0, r0, #4\n    str r1, [r6, r0]\n    b _0225E236\n    add r0, r6, #0\n    bl ov28_0225DF14\n    mov r0, #0x21\n    mov r1, #1\n    lsl r0, r0, #4\n    str r1, [r6, r0]\n    mov r1, #0x93\n    lsl r1, r1, #2\n    ldrh r0, [r6, r1]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x1f\n    bne _0225E27E\n    mov r2, #0x22\n    lsl r2, r2, #4\n    mov r0, #0\n    add r1, r6, #0\n    sub r3, r2, #4\n    add r4, r2, #0\n    add r5, r2, #4\n    ldr r7, [r1, r2]\n    add r0, r0, #1\n    str r7, [r1, r3]\n    ldr r7, [r1, r4]\n    str r7, [r1, r5]\n    add r1, #0xc\n    cmp r0, #4\n    blo _0225E250\n    mov r1, #0x93\n    lsl r1, r1, #2\n    ldrh r2, [r6, r1]\n    mov r0, #2\n    lsl r0, r0, #0xe\n    orr r0, r2\n    strh r0, [r6, r1]\n    ldrh r2, [r6, r1]\n    ldr r0, _0225E314 ; =0xFFFF8000\n    add sp, #8\n    and r2, r0\n    mov r0, #1\n    orr r0, r2\n    strh r0, [r6, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    sub r1, #0x30\n    str r0, [sp]\n    add r0, r6, r1\n    add r4, r6, #0\n    str r0, [sp, #4]\n    mov r0, #0x22\n    lsl r0, r0, #4\n    mov r1, #0x5a\n    ldr r0, [r4, r0]\n    lsl r1, r1, #2\n    bl _u32_div_f\n    mov r0, #0x22\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    sub r0, r0, #4\n    mov r1, #0x5a\n    ldr r0, [r4, r0]\n    lsl r1, r1, #2\n    bl _u32_div_f\n    mov r0, #0x87\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r5, [r4, r0]\n    add r0, r0, #4\n    ldr r7, [r4, r0]\n    sub r0, r7, r5\n    bl abs\n    cmp r0, #0xb4\n    blt _0225E2EA\n    cmp r7, r5\n    bls _0225E2D6\n    mov r0, #0x87\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    sub r0, #0xb4\n    add r1, r1, r0\n    mov r0, #0x87\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _0225E2EA\n    cmp r7, r5\n    bhs _0225E2EA\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    sub r0, #0xb8\n    add r1, r1, r0\n    mov r0, #0x22\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    mov r1, #0x21\n    lsl r1, r1, #4\n    ldr r1, [r6, r1]\n    ldr r0, [sp, #4]\n    lsl r2, r1, #2\n    ldr r1, _0225E318 ; =ov28_0225EAAC\n    ldr r1, [r1, r2]\n    blx r1\n    ldr r0, [sp, #4]\n    add r4, #0xc\n    add r0, #0xc\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    add r0, r0, #1\n    str r0, [sp]\n    cmp r0, #4\n    blo _0225E28A\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225E310: .word 0x0000020A\n    _0225E314: .word 0xFFFF8000\n    _0225E318: .word ov28_0225EAAC"
    );
    #endif
}

void ov28_0225E31C(void) {
    /* Original at 0x0225E31C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    cmp r1, #0\n    blt _0225E356\n    mov r2, #0x21\n    lsl r2, r2, #4\n    ldr r4, [r0, r2]\n    ldr r3, _0225E368 ; =ov28_0225EB84\n    ldrb r3, [r3, r4]\n    mul r3, r1\n    add r1, r2, #0\n    add r1, #0x3e\n    ldrsh r1, [r0, r1]\n    add r3, r1, r3\n    add r1, r2, #0\n    add r1, #0x3e\n    strh r3, [r0, r1]\n    ldr r1, [r0, r2]\n    lsl r3, r1, #1\n    ldr r1, _0225E36C ; =ov28_0225EA90\n    ldrb r3, [r1, r3]\n    add r1, r2, #0\n    add r1, #0x3e\n    ldrsh r1, [r0, r1]\n    cmp r1, r3\n    ble _0225E362\n    add r2, #0x3e\n    strh r3, [r0, r2]\n    pop {r3, r4}\n    bx lr\n    ldr r1, _0225E370 ; =0x0000024E\n    ldrsh r2, [r0, r1]\n    cmp r2, #0\n    ble _0225E362\n    sub r2, r2, #1\n    strh r2, [r0, r1]\n    pop {r3, r4}\n    bx lr\n    nop\n    _0225E368: .word ov28_0225EB84\n    _0225E36C: .word ov28_0225EA90\n    _0225E370: .word 0x0000024E"
    );
    #endif
}

void ov28_0225E374(void) {
    /* Original at 0x0225E374 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x21\n    lsl r0, r0, #4\n    add r4, r1, #0\n    ldr r1, [r5, r0]\n    add r6, r2, #0\n    lsl r2, r1, #1\n    ldr r1, _0225E3B4 ; =ov28_0225EA90\n    ldrb r2, [r1, r2]\n    add r1, r0, #0\n    add r1, #0x3e\n    ldrsh r1, [r5, r1]\n    cmp r1, r2\n    ble _0225E396\n    add r0, #0x3e\n    strh r2, [r5, r0]\n    ldr r0, _0225E3B8 ; =0x0000024E\n    mov r1, #0xa\n    ldrsh r0, [r5, r0]\n    bl _s32_div_f\n    mov r1, #1\n    and r0, r1\n    strh r0, [r4]\n    ldr r0, _0225E3B8 ; =0x0000024E\n    mov r1, #0x14\n    ldrsh r0, [r5, r0]\n    bl _s32_div_f\n    strh r0, [r6]\n    pop {r4, r5, r6, pc}\n    _0225E3B4: .word ov28_0225EA90\n    _0225E3B8: .word 0x0000024E"
    );
    #endif
}

void ov28_0225E3BC(void) {
    /* Original at 0x0225E3BC */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r1, _0225E420 ; =0x0000024E\n    add r5, r0, #0\n    ldrsh r1, [r5, r1]\n    cmp r1, #0\n    bne _0225E3E2\n    mov r4, #0\n    mov r6, #0x19\n    add r7, r4, #0\n    lsl r6, r6, #4\n    ldr r0, [r5, r6]\n    add r1, r7, #0\n    bl Sprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blo _0225E3D0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ov28_0225E374\n    mov r7, #0x19\n    mov r4, #0\n    add r6, sp, #0\n    lsl r7, r7, #4\n    mov r0, #0x19\n    ldrh r1, [r6]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r1, #1\n    bl Sprite_SetPalIndexRespectVramOffset\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldrh r1, [r6, #2]\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5, r7]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blo _0225E3F4\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225E420: .word 0x0000024E"
    );
    #endif
}

void ov28_0225E424(void) {
    /* Original at 0x0225E424 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x10\n    bl GF_DegreeToSinCosIdx\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #2\n    bl Sprite_SetRotationAndAffineType\n    pop {r4, pc}"
    );
    #endif
}

void ov28_0225E43C(void) {
    /* Original at 0x0225E43C */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x93\n    lsl r0, r0, #2\n    ldrh r1, [r5, r0]\n    lsl r2, r1, #0x11\n    lsr r4, r2, #0x11\n    beq _0225E50E\n    ldr r2, _0225E514 ; =0xFFFF8000\n    lsr r3, r2, #0x10\n    add r3, r4, r3\n    lsl r3, r3, #0x10\n    and r1, r2\n    lsr r3, r3, #0x10\n    lsr r2, r2, #0x11\n    and r2, r3\n    orr r1, r2\n    strh r1, [r5, r0]\n    ldrh r1, [r5, r0]\n    lsl r1, r1, #0x11\n    lsr r1, r1, #0x11\n    bne _0225E4B0\n    mov r6, #0\n    add r4, r5, #0\n    add r7, sp, #4\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r1, [r5, r0]\n    sub r0, r0, #4\n    str r1, [r5, r0]\n    mov r1, #0x87\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r7, #0\n    bl ov28_0225DE04\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    add r1, r7, #0\n    bl Sprite_SetMatrix\n    mov r0, #0x19\n    mov r1, #0x87\n    lsl r0, r0, #4\n    lsl r1, r1, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r5, r1]\n    bl ov28_0225E424\n    add r6, r6, #1\n    add r5, #0xc\n    add r4, r4, #4\n    cmp r6, #4\n    blo _0225E470\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    sub r0, #0x30\n    str r1, [sp]\n    add r4, r5, #0\n    add r6, r5, #0\n    add r7, r5, r0\n    mov r0, #0x89\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    sub r0, #8\n    str r1, [r4, r0]\n    mov r1, #0x87\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r0, sp, #4\n    bl ov28_0225DE04\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    add r1, sp, #4\n    bl Sprite_SetMatrix\n    mov r0, #0x19\n    mov r1, #0x87\n    lsl r0, r0, #4\n    lsl r1, r1, #2\n    ldr r0, [r6, r0]\n    ldr r1, [r4, r1]\n    bl ov28_0225E424\n    mov r1, #0x21\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r7, #0\n    lsl r2, r1, #2\n    ldr r1, _0225E518 ; =ov28_0225EAAC\n    ldr r1, [r1, r2]\n    blx r1\n    ldr r0, [sp]\n    add r4, #0xc\n    add r0, r0, #1\n    add r6, r6, #4\n    add r7, #0xc\n    str r0, [sp]\n    cmp r0, #4\n    blo _0225E4BC\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225E514: .word 0xFFFF8000\n    _0225E518: .word ov28_0225EAAC"
    );
    #endif
}

void ov28_0225E51C(void) {
    /* Original at 0x0225E51C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x21\n    lsl r0, r0, #4\n    add r4, r2, #0\n    ldr r2, [r5, r0]\n    cmp r2, #4\n    bne _0225E566\n    sub r0, #8\n    ldrsh r0, [r5, r0]\n    add r0, r0, #7\n    sub r0, r0, r1\n    bl abs\n    add r6, r0, #0\n    ldr r0, _0225E570 ; =0x0000020A\n    ldrsh r0, [r5, r0]\n    add r0, r0, #7\n    sub r0, r0, r4\n    bl abs\n    add r1, r6, r0\n    mov r0, #0x10\n    sub r1, r0, r1\n    cmp r1, #5\n    bge _0225E554\n    mov r1, #5\n    b _0225E55A\n    cmp r1, #0x10\n    ble _0225E55A\n    add r1, r0, #0\n    mov r0, #0xa\n    mul r0, r1\n    sub r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r4, r5, r6, pc}\n    ldr r0, _0225E574 ; =ov28_0225EA91\n    lsl r1, r2, #1\n    ldrb r0, [r0, r1]\n    pop {r4, r5, r6, pc}\n    nop\n    _0225E570: .word 0x0000020A\n    _0225E574: .word ov28_0225EA91"
    );
    #endif
}

void ov28_0225E578(void) {
    /* Original at 0x0225E578 */
    /* Requires manual decompilation - 210 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r6, r0, #0\n    str r1, [sp, #0x10]\n    cmp r1, #1\n    bne _0225E5A2\n    mov r1, #0x85\n    lsl r1, r1, #2\n    ldr r0, [r6, r1]\n    lsr r0, r0, #3\n    sub r0, r0, #3\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #0x30]\n    add r0, r1, #4\n    ldr r0, [r6, r0]\n    lsr r0, r0, #3\n    sub r0, r0, #5\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #0x24]\n    ldr r0, _0225E724 ; =ov28_0225EB14\n    mov r7, #0\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x30]\n    add r4, r6, #0\n    sub r0, r0, #3\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x30]\n    add r0, r0, #3\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x24]\n    sub r0, r0, #3\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x24]\n    add r0, r0, #3\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x24]\n    mov r5, #0\n    sub r0, r0, r7\n    str r0, [sp, #0x18]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x14]\n    add r0, r7, #5\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x3c]\n    mov r0, #1\n    add r1, r0, #0\n    ldr r0, [sp, #0x34]\n    lsl r1, r5\n    ldrh r0, [r0]\n    tst r0, r1\n    beq _0225E5E8\n    b _0225E6F6\n    ldr r0, [sp, #0x10]\n    cmp r0, #1\n    bne _0225E67E\n    ldr r0, [sp, #0x2c]\n    cmp r5, r0\n    blt _0225E658\n    ldr r0, [sp, #0x28]\n    cmp r5, r0\n    bgt _0225E658\n    ldr r0, [sp, #0x20]\n    cmp r7, r0\n    blt _0225E658\n    ldr r0, [sp, #0x1c]\n    cmp r7, r0\n    bgt _0225E658\n    ldr r0, [sp, #0x30]\n    sub r0, r0, r5\n    bl abs\n    str r0, [sp, #0x38]\n    ldr r0, [sp, #0x18]\n    bl abs\n    ldr r1, [sp, #0x38]\n    add r0, r1, r0\n    cmp r0, #4\n    bgt _0225E658\n    lsl r1, r5, #0x10\n    ldr r2, [sp, #0x14]\n    add r0, r6, #0\n    lsr r1, r1, #0x10\n    bl ov28_0225E51C\n    add r2, r0, #0\n    mov r0, #0x25\n    add r3, r4, r5\n    lsl r0, r0, #4\n    ldrb r0, [r3, r0]\n    cmp r0, r2\n    bhs _0225E650\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldrb r1, [r3, r0]\n    add r1, #0xa\n    strb r1, [r3, r0]\n    ldrb r0, [r3, r0]\n    cmp r0, r2\n    bls _0225E6A2\n    mov r0, #0x25\n    lsl r0, r0, #4\n    strb r2, [r3, r0]\n    b _0225E6A2\n    mov r0, #0x25\n    lsl r0, r0, #4\n    strb r2, [r3, r0]\n    b _0225E6A2\n    mov r0, #0x25\n    add r3, r4, r5\n    lsl r0, r0, #4\n    ldrb r0, [r3, r0]\n    cmp r0, #2\n    blo _0225E674\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldrb r0, [r3, r0]\n    sub r1, r0, #2\n    mov r0, #0x25\n    lsl r0, r0, #4\n    strb r1, [r3, r0]\n    b _0225E6A2\n    mov r0, #0x25\n    mov r1, #0\n    lsl r0, r0, #4\n    strb r1, [r3, r0]\n    b _0225E6A2\n    mov r0, #0x25\n    add r3, r4, r5\n    lsl r0, r0, #4\n    ldrb r0, [r3, r0]\n    cmp r0, #2\n    blo _0225E69A\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldrb r0, [r3, r0]\n    sub r1, r0, #2\n    mov r0, #0x25\n    lsl r0, r0, #4\n    strb r1, [r3, r0]\n    b _0225E6A2\n    mov r0, #0x25\n    mov r1, #0\n    lsl r0, r0, #4\n    strb r1, [r3, r0]\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldrb r0, [r3, r0]\n    cmp r0, #0\n    bne _0225E6CC\n    ldr r0, [sp, #0x3c]\n    add r3, r5, #3\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    lsl r3, r3, #0x18\n    ldr r0, [r6, #0x10]\n    ldr r2, _0225E728 ; =0x00001001\n    mov r1, #6\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    b _0225E6F6\n    mov r1, #0xa\n    bl _s32_div_f\n    add r2, r0, #0\n    ldr r0, [sp, #0x3c]\n    lsl r3, r2, #1\n    str r0, [sp]\n    mov r0, #1\n    ldr r2, _0225E72C ; =ov28_0225EB32\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x11\n    ldrh r2, [r2, r3]\n    add r3, r5, #3\n    str r0, [sp, #0xc]\n    lsl r3, r3, #0x18\n    ldr r0, [r6, #0x10]\n    mov r1, #6\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    asr r5, r0, #0x10\n    cmp r5, #0xf\n    bge _0225E702\n    b _0225E5D8\n    ldr r0, [sp, #0x34]\n    add r4, #0xf\n    add r0, r0, #2\n    str r0, [sp, #0x34]\n    add r0, r7, #1\n    lsl r0, r0, #0x10\n    asr r7, r0, #0x10\n    cmp r7, #0xf\n    bge _0225E716\n    b _0225E5C2\n    ldr r0, [r6, #0x10]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225E724: .word ov28_0225EB14\n    _0225E728: .word 0x00001001\n    _0225E72C: .word ov28_0225EB32"
    );
    #endif
}

void ov28_0225E730(void) {
    /* Original at 0x0225E730 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    add r5, r0, #0\n    bl ov28_0225E374\n    add r0, sp, #0\n    ldrh r1, [r0, #2]\n    ldrh r0, [r0]\n    mov r2, #0x21\n    lsl r2, r2, #4\n    lsl r0, r0, #1\n    add r0, r1, r0\n    lsl r1, r0, #6\n    mov r0, #0xf\n    lsl r0, r0, #6\n    sub r0, r1, r0\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    ldr r0, [r5, r2]\n    cmp r0, #4\n    bne _0225E798\n    add r1, r2, #0\n    add r1, #8\n    ldr r1, [r5, r1]\n    add r0, r2, #4\n    lsr r1, r1, #3\n    ldr r0, [r5, r0]\n    sub r2, #8\n    sub r6, r1, #5\n    ldrsh r1, [r5, r2]\n    lsr r0, r0, #3\n    sub r0, r0, #3\n    add r1, r1, #7\n    sub r0, r1, r0\n    bl abs\n    add r7, r0, #0\n    ldr r0, _0225E7C8 ; =0x0000020A\n    ldrsh r0, [r5, r0]\n    add r0, r0, #7\n    sub r0, r0, r6\n    bl abs\n    add r1, r7, r0\n    mov r0, #0x10\n    sub r0, r0, r1\n    lsl r0, r0, #6\n    add r0, r4, r0\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    bne _0225E7AA\n    ldr r0, _0225E7CC ; =0x0000093D\n    add r1, r4, #0\n    bl PlaySE_SetPitch\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldrh r1, [r5, r0]\n    cmp r1, #0xa\n    bne _0225E7B8\n    mov r1, #0\n    b _0225E7BA\n    add r1, r1, #1\n    strh r1, [r5, r0]\n    ldr r0, _0225E7D0 ; =0x0000033A\n    ldrsh r1, [r5, r0]\n    cmp r1, r4\n    beq _0225E7C6\n    strh r4, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225E7C8: .word 0x0000020A\n    _0225E7CC: .word 0x0000093D\n    _0225E7D0: .word 0x0000033A"
    );
    #endif
}

void ov28_0225E7D4(void) {
    /* Original at 0x0225E7D4 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r0, sp, #4\n    add r1, sp, #0\n    bl System_GetTouchHeldCoords\n    mov r1, #0x85\n    lsl r1, r1, #2\n    ldr r0, [sp, #4]\n    ldr r2, [r4, r1]\n    cmp r2, r0\n    bne _0225E7F8\n    add r1, r1, #4\n    ldr r2, [r4, r1]\n    ldr r1, [sp]\n    cmp r2, r1\n    beq _0225E80A\n    mov r1, #0x85\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r2, [sp]\n    add r0, r1, #4\n    str r2, [r4, r0]\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov28_0225E810(void) {
    /* Original at 0x0225E810 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x18]\n    add r1, r0, #0\n    add r1, #0xd2\n    ldrb r1, [r1]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1f\n    cmp r1, #1\n    bne _0225E828\n    mov r4, #4\n    b _0225E890\n    bl FieldSystem_IsPlayerMovementAllowed\n    cmp r0, #0\n    ldr r0, [r5, #0x18]\n    bne _0225E860\n    bl FieldSystem_GetPlayerAvatar\n    bl PlayerAvatar_GetMapObject\n    add r4, r0, #0\n    bl MapObject_GetSpriteID\n    sub r0, #0xbc\n    cmp r0, #1\n    bhi _0225E858\n    add r0, r4, #0\n    bl sub_0205F330\n    cmp r0, #1\n    bne _0225E854\n    mov r4, #3\n    b _0225E890\n    mov r4, #4\n    b _0225E890\n    mov r0, #0xcd\n    lsl r0, r0, #2\n    ldr r4, [r5, r0]\n    b _0225E890\n    bl ov01_021E7F54\n    add r4, r0, #0\n    cmp r4, #1\n    bne _0225E890\n    ldr r0, [r5, #0x18]\n    add r1, sp, #0\n    bl FieldSystem_GetFacingObject\n    ldr r0, [sp]\n    bl MapObject_GetScriptID\n    bl ov01_021F6BD0\n    cmp r0, #1\n    beq _0225E88E\n    ldr r0, [sp]\n    bl MapObject_GetSpriteID\n    bl ov01_021F6BB0\n    cmp r0, #1\n    bne _0225E890\n    mov r4, #0\n    mov r1, #0xcd\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    cmp r4, r0\n    beq _0225E8B0\n    mov r0, #0x6d\n    lsl r0, r0, #2\n    str r4, [r5, r1]\n    add r2, r5, r0\n    ldr r1, [r5, r1]\n    ldr r0, _0225E8B4 ; =ov28_0225EB7C\n    ldrb r0, [r0, r1]\n    lsl r0, r0, #4\n    add r0, r2, r0\n    bl ScheduleWindowCopyToVram\n    pop {r3, r4, r5, pc}\n    nop\n    _0225E8B4: .word ov28_0225EB7C"
    );
    #endif
}

void ov28_0225E8B8(void) {
    /* Original at 0x0225E8B8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    str r2, [sp]\n    add r6, r3, #0\n    bl TouchscreenHitbox_TouchHeldIsIn\n    add r4, r0, #0\n    add r0, r5, #0\n    bl Sprite_GetAnimationNumber\n    add r7, r0, #0\n    cmp r4, #1\n    bne _0225E8E6\n    bl System_GetTouchNew\n    cmp r0, #0\n    beq _0225E8E6\n    add r0, r5, #0\n    add r1, r6, #0\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #1\n    bne _0225E8F2\n    cmp r7, r6\n    bne _0225E8F2\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov28_0225E900(void) {
    /* Original at 0x0225E900 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    bl sub_0203DF8C\n    cmp r0, #1\n    bne _0225E914\n    add r0, r4, #0\n    bl ov28_0225E810\n    mov r1, #6\n    lsl r1, r1, #6\n    ldr r0, _0225E930 ; =_0225EA7C\n    ldr r1, [r4, r1]\n    mov r2, #5\n    mov r3, #6\n    bl ov28_0225E8B8\n    cmp r0, #0\n    beq _0225E92E\n    ldr r0, _0225E934 ; =gSystem\n    mov r1, #1\n    str r1, [r0, #0x5c]\n    pop {r4, pc}\n    _0225E930: .word _0225EA7C\n    _0225E934: .word gSystem"
    );
    #endif
}

void ov28_0225E938(void) {
    /* Original at 0x0225E938 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x18]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetState\n    cmp r0, #1\n    beq _0225E952\n    add r0, r5, #0\n    bl ov28_0225EA58\n    cmp r0, #1\n    bne _0225E96C\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    pop {r4, r5, r6, pc}\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, _0225E9DC ; =ov28_0225EA84\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #1\n    bne _0225E9DA\n    ldr r0, [r5, #0x18]\n    bl FieldSystem_GetPlayerAvatar\n    add r6, r0, #0\n    bl PlayerAvatar_CheckRunningShoesLock\n    add r4, r0, #0\n    bne _0225E9B8\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #4\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #7\n    bl Sprite_SetAnimCtrlSeq\n    b _0225E9D0\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0xb\n    bl Sprite_SetAnimCtrlSeq\n    mov r1, #1\n    add r0, r6, #0\n    eor r1, r4\n    bl PlayerAvatar_SetRunningShoesLock\n    pop {r4, r5, r6, pc}\n    _0225E9DC: .word ov28_0225EA84"
    );
    #endif
}

void ov28_0225E9E0(void) {
    /* Original at 0x0225E9E0 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov28_0225EA58\n    cmp r0, #1\n    bne _0225EA10\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #8\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    pop {r4, pc}\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r1, #0x63\n    lsl r1, r1, #2\n    ldr r0, _0225EA54 ; =ov28_0225EA80\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #9\n    bl ov28_0225E8B8\n    cmp r0, #0\n    beq _0225EA50\n    ldr r0, [r4, #0x18]\n    mov r1, #0xb\n    add r0, #0xd0\n    strh r1, [r0]\n    mov r0, #0x43\n    ldr r1, [r4, #0x18]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    mov r1, #1\n    bl MenuInputStateMgr_SetState\n    pop {r4, pc}\n    nop\n    _0225EA54: .word ov28_0225EA80"
    );
    #endif
}

void ov28_0225EA58(void) {
    /* Original at 0x0225EA58 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    bl FieldSystem_TaskIsRunning\n    cmp r0, #1\n    bne _0225EA76\n    ldr r0, [r4, #0x18]\n    add r0, #0xd2\n    ldrb r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _0225EA76\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}
