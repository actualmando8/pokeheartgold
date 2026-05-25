/* Decompiled from asm/overlay_01_021F3F50.s */
#include "global.h"

void ov01_021F3F50(void) {
    /* Original at 0x021F3F50 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r4, [r1, #0xc]\n    add r5, r0, #0\n    add r0, r4, #0\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetCurrentPosition\n    add r6, r0, #0\n    add r0, r4, #0\n    bl Save_Pokedex_Get\n    add r7, r0, #0\n    ldr r0, [r6]\n    bl MapHeader_GetMapSec\n    str r0, [r5, #4]\n    add r0, r7, #0\n    bl Pokedex_IsEnabled\n    cmp r0, #0\n    beq _021F3F84\n    add r0, r7, #0\n    bl Pokedex_CountDexOwned\n    b _021F3F86\n    mov r0, #0\n    str r0, [r5]\n    add r0, r4, #0\n    bl Save_PlayerData_GetProfile\n    str r0, [r5, #8]\n    add r0, r4, #0\n    bl Save_PlayerData_GetIGTAddr\n    str r0, [r5, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F3F9C(void) {
    /* Original at 0x021F3F9C */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r1, #0\n    ldr r2, [r4, #4]\n    mov r1, #0\n    add r5, r0, #0\n    bl BufferLandmarkName\n    ldr r2, [r4, #8]\n    add r0, r5, #0\n    mov r1, #1\n    bl BufferPlayersName\n    ldr r0, [r4, #8]\n    bl PlayerProfile_CountBadges\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    mov r1, #2\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    ldr r2, [r4]\n    cmp r2, #0x64\n    blt _021F3FDC\n    mov r3, #3\n    mov r0, #0\n    b _021F3FEA\n    cmp r2, #0xa\n    blt _021F3FE6\n    mov r3, #3\n    mov r0, #1\n    b _021F3FEA\n    mov r3, #2\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #3\n    bl BufferIntegerAsString\n    ldr r0, [r4, #0xc]\n    bl GetIGTHours\n    add r2, r0, #0\n    cmp r2, #0x64\n    blt _021F400A\n    mov r3, #3\n    mov r0, #0\n    b _021F4018\n    cmp r2, #0xa\n    blt _021F4014\n    mov r3, #3\n    mov r0, #1\n    b _021F4018\n    mov r3, #2\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #4\n    bl BufferIntegerAsString\n    ldr r0, [r4, #0xc]\n    bl GetIGTMinutes\n    mov r3, #2\n    add r2, r0, #0\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #5\n    bl BufferIntegerAsString\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

u8 ov01_021F4044(void) {
    return 0xa;
}

void ov01_021F4048(void) {
    /* Original at 0x021F4048 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    mov r0, #0\n    mov r1, #1\n    bl GetFontAttribute\n    add r4, r0, #0\n    mov r0, #0\n    mov r1, #3\n    bl GetFontAttribute\n    add r0, r4, r0\n    str r0, [sp, #0x14]\n    mov r4, #0\n    ldr r0, [r5, #0x14]\n    ldr r1, [r5, #0x18]\n    ldr r3, [r5, #4]\n    add r2, r4, #0\n    bl ReadMsgData_ExpandPlaceholders\n    add r1, r4, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r5, #0x10]\n    add r2, r6, #0\n    add r3, r1, #0\n    bl AddTextPrinterParameterized\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, _021F4124 ; =ov01_02206AF4\n    ldr r7, _021F4128 ; =ov01_02206AE4\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0xc]\n    ldr r1, [r0]\n    cmp r1, #3\n    bne _021F40A6\n    ldr r0, [r5, #0x1c]\n    cmp r0, #0\n    beq _021F410E\n    ldr r0, [sp, #0x14]\n    add r4, r4, r0\n    ldr r0, [r5, #0x18]\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r1, #0\n    str r4, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x10]\n    add r2, r6, #0\n    add r3, r1, #0\n    bl AddTextPrinterParameterized\n    add r0, r6, #0\n    bl String_Delete\n    sub r2, r7, #4\n    ldr r0, [r5, #0x14]\n    ldr r1, [r5, #0x18]\n    ldr r2, [r2]\n    ldr r3, [r5, #4]\n    bl ReadMsgData_ExpandPlaceholders\n    add r6, r0, #0\n    mov r0, #0\n    mov r1, #2\n    bl GetFontAttribute\n    add r2, r0, #0\n    mov r0, #0\n    add r1, r6, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x68\n    sub r3, r1, r0\n    str r4, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    add r2, r6, #0\n    bl AddTextPrinterParameterized\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, [sp, #0xc]\n    add r7, r7, #4\n    add r0, r0, #4\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    add r0, r0, #1\n    str r0, [sp, #0x10]\n    cmp r0, #5\n    blo _021F4098\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F4124: .word ov01_02206AF4\n    _021F4128: .word ov01_02206AE4"
    );
    #endif
}

void Field_SaveStatsPrinter_Print(void) {
    /* Original at 0x021F412C */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    mov r1, #0x10\n    bl Heap_Alloc\n    str r0, [r4, #0x10]\n    mov r3, #1\n    str r3, [sp]\n    ldr r0, [r4, #0x2c]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x30]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    ldr r0, _021F419C ; =0x00000189\n    str r0, [sp, #0x10]\n    ldrb r2, [r4, #8]\n    ldr r0, [r4, #0xc]\n    ldr r1, [r4, #0x10]\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [r4, #4]\n    ldr r2, _021F41A0 ; =0x000003D9\n    str r0, [sp, #4]\n    ldrb r1, [r4, #8]\n    ldr r0, [r4, #0xc]\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    mov r0, #0\n    mov r1, #6\n    bl GetFontAttribute\n    add r1, r0, #0\n    ldr r0, [r4, #0x10]\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    bl ov01_021F4048\n    ldr r0, [r4, #0x10]\n    ldr r2, _021F41A0 ; =0x000003D9\n    mov r1, #0\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _021F419C: .word 0x00000189\n    _021F41A0: .word 0x000003D9"
    );
    #endif
}

void Field_SaveStatsPrinter_RemoveFromScreen(void) {
    sub_0200E5D4(*((u32*)(r0 + 0x10)), 0);
    RemoveWindow(*((u32*)(r4 + 0x10)));
    Heap_Free(*((u32*)(r4 + 0x10)));
}

void Field_SaveStatsPrinter_New(void) {
    /* Original at 0x021F41C0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0x34\n    add r7, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    str r6, [r4]\n    str r5, [r4, #4]\n    strb r7, [r4, #8]\n    ldr r0, [r6, #8]\n    str r0, [r4, #0xc]\n    add r0, r5, #0\n    bl MessageFormat_New\n    str r0, [r4, #0x14]\n    ldr r2, _021F4218 ; =0x000001A7\n    mov r0, #1\n    mov r1, #0x1b\n    add r3, r5, #0\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    ldr r1, [r4]\n    add r0, #0x1c\n    bl ov01_021F3F50\n    add r1, r4, #0\n    ldr r0, [r4, #0x14]\n    add r1, #0x1c\n    bl ov01_021F3F9C\n    mov r0, #0xd\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    add r0, #0x1c\n    bl ov01_021F4044\n    str r0, [r4, #0x30]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F4218: .word 0x000001A7"
    );
    #endif
}

void Field_SaveStatsPrinter_Delete(void) {
    DestroyMsgData(*((u32*)(r0 + 0x18)));
    MessageFormat_Delete(*((u32*)(r4 + 0x14)));
    Heap_Free(r4);
}

void ov01_021F4234(void) {
    /* Original at 0x021F4234 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #0\n    cmp r2, #1\n    beq _021F4244\n    cmp r2, #2\n    beq _021F4254\n    b _021F4268\n    add r0, r3, #0\n    add r2, r4, #0\n    bl FontID_String_GetWidth\n    ldrb r1, [r5, #7]\n    lsl r1, r1, #3\n    sub r4, r1, r0\n    b _021F4268\n    add r0, r3, #0\n    add r2, r4, #0\n    bl FontID_String_GetWidth\n    ldrb r1, [r5, #7]\n    lsl r1, r1, #3\n    sub r1, r1, r0\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r4, r0, #1\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F426C(void) {
    /* Original at 0x021F426C */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0\n    mov r1, #1\n    bl GetFontAttribute\n    add r4, r0, #0\n    mov r0, #0\n    mov r1, #3\n    bl GetFontAttribute\n    add r0, r4, r0\n    ldr r4, _021F42F0 ; =ov01_02206B04\n    str r0, [sp, #0x10]\n    mov r7, #0\n    ldr r0, [r5, #0x1c]\n    cmp r0, #0\n    bne _021F429C\n    ldr r0, [r4]\n    cmp r0, #0xb\n    beq _021F42E2\n    cmp r0, #7\n    beq _021F42E2\n    ldr r0, [r5, #0x14]\n    ldr r1, [r5, #0x18]\n    ldr r2, [r4]\n    ldr r3, [r5, #4]\n    bl ReadMsgData_ExpandPlaceholders\n    add r6, r0, #0\n    ldr r0, [r5, #0x10]\n    ldr r2, [r4, #4]\n    add r1, r6, #0\n    mov r3, #0\n    bl ov01_021F4234\n    add r3, r0, #0\n    ldr r1, [r4, #8]\n    ldr r0, [sp, #0x10]\n    add r2, r6, #0\n    mul r1, r0\n    str r1, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r4, #0xc]\n    lsl r1, r0, #2\n    ldr r0, _021F42F4 ; =ov01_02206AD8\n    ldr r0, [r0, r1]\n    mov r1, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x10]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    add r7, r7, #1\n    add r4, #0x10\n    cmp r7, #9\n    blo _021F428C\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F42F0: .word ov01_02206B04\n    _021F42F4: .word ov01_02206AD8"
    );
    #endif
}

void ov01_021F42F8(void) {
    /* Original at 0x021F42F8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    mov r1, #0x10\n    bl Heap_Alloc\n    str r0, [r4, #0x10]\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, [r4, #0x2c]\n    mov r3, #7\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x30]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #4\n    str r0, [sp, #0xc]\n    ldr r0, _021F4348 ; =0x0000010B\n    str r0, [sp, #0x10]\n    ldrb r2, [r4, #8]\n    ldr r0, [r4, #0xc]\n    ldr r1, [r4, #0x10]\n    bl AddWindowParameterized\n    ldr r0, [r4, #0x10]\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    bl ov01_021F426C\n    ldr r0, [r4, #0x10]\n    bl CopyWindowToVram\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _021F4348: .word 0x0000010B"
    );
    #endif
}

void ov01_021F434C(void) {
    RemoveWindow(*((u32*)(r0 + 0x10)));
    Heap_Free(*((u32*)(r4 + 0x10)));
}

void ov01_021F4360(void) {
    /* Original at 0x021F4360 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0x34\n    add r7, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    str r6, [r4]\n    str r5, [r4, #4]\n    strb r7, [r4, #8]\n    ldr r0, [r6, #8]\n    str r0, [r4, #0xc]\n    add r0, r5, #0\n    bl MessageFormat_New\n    str r0, [r4, #0x14]\n    ldr r2, _021F43CC ; =0x000001A7\n    mov r0, #1\n    mov r1, #0x1b\n    add r3, r5, #0\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x18]\n    mov r0, #1\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetAutoScrollParam\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    add r0, r4, #0\n    ldr r1, [r4]\n    add r0, #0x1c\n    bl ov01_021F3F50\n    add r1, r4, #0\n    ldr r0, [r4, #0x14]\n    add r1, #0x1c\n    bl ov01_021F3F9C\n    mov r0, #0x13\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    add r0, #0x1c\n    bl ov01_021F4044\n    str r0, [r4, #0x30]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F43CC: .word 0x000001A7"
    );
    #endif
}

void ov01_021F43D0(void) {
    DestroyMsgData(*((u32*)(r0 + 0x18)));
    MessageFormat_Delete(*((u32*)(r4 + 0x14)));
    Heap_Free(r4);
}

void Field_SaveGameNormal(void) {
    /* Original at 0x021F43E8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov01_021F4404\n    ldr r0, [r4, #0xc]\n    bl SaveGameNormal\n    cmp r0, #2\n    bne _021F43FE\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F4404(void) {
    /* Original at 0x021F4404 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FieldSystem_SyncMapObjectsToSave\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0\n    bl ov01_021F6830\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetXCoord\n    ldr r1, [r4, #0x20]\n    str r0, [r1, #8]\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetZCoord\n    ldr r1, [r4, #0x20]\n    str r0, [r1, #0xc]\n    mov r1, #0\n    ldr r0, [r4, #0x20]\n    mvn r1, r1\n    str r1, [r0, #4]\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    ldr r1, [r4, #0x20]\n    str r0, [r1, #0x10]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F4440(void) {
    /* Original at 0x021F4440 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    bne _021F444C\n    bl GF_AssertFail\n    pop {r3, pc}\n    ldr r1, [r0, #0x20]\n    ldr r1, [r1]\n    cmp r1, #MAP_UNION\n    beq _021F4460\n    cmp r1, #MAP_WIFI_SINGLE_BATTLE_AREA\n    beq _021F4460\n    cmp r1, #MAP_WIFI_MULTI_BATTLE_AREA\n    beq _021F4460\n    bl ov01_021F4404\n    pop {r3, pc}"
    );
    #endif
}
