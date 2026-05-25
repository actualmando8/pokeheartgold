/* Decompiled from asm/overlay_03.s */
#include "global.h"

void ov03_02253E20(void) {
    /* Original at 0x02253E20 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02253ECC ; =ov03_022598A0\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    bne _02253E42\n    ldr r0, _02253ECC ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl RemoveTextPrinter\n    cmp r4, #0\n    beq _02253E64\n    ldr r0, _02253ECC ; =ov03_022598A0\n    add r1, r5, #0\n    ldr r2, [r0]\n    ldr r0, [r2, #0x74]\n    ldr r2, [r2, #0x10]\n    bl ReadMsgDataIntoString\n    ldr r0, _02253ECC ; =ov03_022598A0\n    ldr r2, [r0]\n    ldr r0, [r2, #0x58]\n    ldr r1, [r2, #0x14]\n    ldr r2, [r2, #0x10]\n    bl StringExpandPlaceholders\n    b _02253E72\n    ldr r0, _02253ECC ; =ov03_022598A0\n    add r1, r5, #0\n    ldr r2, [r0]\n    ldr r0, [r2, #0x74]\n    ldr r2, [r2, #0x14]\n    bl ReadMsgDataIntoString\n    ldr r0, _02253ECC ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x40\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _02253E90\n    ldr r0, _02253ECC ; =ov03_022598A0\n    mov r2, #3\n    ldr r1, [r0]\n    ldr r0, [r1, #0x68]\n    add r1, #0x40\n    ldr r0, [r0, #8]\n    bl sub_0205B514\n    ldr r0, _02253ECC ; =ov03_022598A0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x68]\n    ldr r0, [r0, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    add r1, r0, #0\n    ldr r0, _02253ECC ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x40\n    bl sub_0205B564\n    ldr r0, _02253ECC ; =ov03_022598A0\n    ldr r4, [r0]\n    ldr r0, [r4, #0x68]\n    ldr r0, [r0, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    add r2, r0, #0\n    add r0, r4, #0\n    ldr r1, [r4, #0x14]\n    add r0, #0x40\n    mov r3, #1\n    bl sub_0205B5B4\n    ldr r1, _02253ECC ; =ov03_022598A0\n    ldr r1, [r1]\n    add r1, #0x94\n    strb r0, [r1]\n    pop {r3, r4, r5, pc}\n    _02253ECC: .word ov03_022598A0"
    );
    #endif
}

void ov03_02253ED0(void) {
    /* Original at 0x02253ED0 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, lr}\n    sub sp, #0x34\n    ldr r0, _02253F6C ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x20\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _02253F14\n    ldr r0, _02253F6C ; =ov03_022598A0\n    add r3, sp, #0x60\n    ldr r1, [r0]\n    add r0, sp, #0x64\n    ldrb r0, [r0]\n    ldrb r3, [r3]\n    mov r2, #3\n    str r0, [sp]\n    add r0, sp, #0x68\n    ldrb r0, [r0]\n    str r0, [sp, #4]\n    add r0, sp, #0x6c\n    ldrb r0, [r0]\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    add r0, sp, #0x40\n    ldrh r0, [r0, #0x30]\n    str r0, [sp, #0x10]\n    ldr r0, [r1, #0x68]\n    add r1, #0x20\n    ldr r0, [r0, #8]\n    bl AddWindowParameterized\n    ldr r0, _02253F6C ; =ov03_022598A0\n    ldr r2, _02253F70 ; =0x000003D9\n    ldr r0, [r0]\n    mov r1, #1\n    add r0, #0x20\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    add r4, sp, #0x40\n    add r3, sp, #0x14\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, _02253F6C ; =ov03_022598A0\n    mov r3, #4\n    ldr r1, [r0]\n    ldr r0, [r1, #0x64]\n    add r1, #0x20\n    str r1, [sp, #0x20]\n    str r0, [sp, #0x14]\n    mov r1, #0\n    add r0, r2, #0\n    add r2, r1, #0\n    bl ListMenuInit\n    ldr r1, _02253F6C ; =ov03_022598A0\n    ldr r2, [r1]\n    str r0, [r2, #0x5c]\n    ldr r0, [r1]\n    add r0, #0x20\n    bl CopyWindowToVram\n    add sp, #0x34\n    pop {r3, r4}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    nop\n    _02253F6C: .word ov03_022598A0\n    _02253F70: .word 0x000003D9"
    );
    #endif
}

void ov03_02253F74(void) {
    /* Original at 0x02253F74 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, _02254050 ; =ov03_022598A0\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02253F84\n    bl GF_AssertFail\n    mov r0, #4\n    mov r1, #0xac\n    bl Heap_Alloc\n    ldr r1, _02254050 ; =ov03_022598A0\n    mov r2, #0xac\n    str r0, [r1]\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, _02254050 ; =ov03_022598A0\n    mov r2, #0\n    ldr r1, [r0]\n    mov r3, #4\n    add r1, #0x88\n    str r2, [r1]\n    ldr r1, [r0]\n    str r4, [r1, #0x68]\n    ldr r0, [r0]\n    mov r1, #0x1b\n    add r0, #0x97\n    strb r2, [r0]\n    mov r0, #1\n    mov r2, #0xb6\n    bl NewMsgDataFromNarc\n    ldr r1, _02254050 ; =ov03_022598A0\n    ldr r2, [r1]\n    str r0, [r2, #0x74]\n    ldr r0, [r1]\n    ldr r0, [r0, #0x68]\n    bl FieldSystem_GetSaveData\n    bl Save_PlayerData_GetProfile\n    ldr r1, _02254050 ; =ov03_022598A0\n    ldr r1, [r1]\n    str r0, [r1, #0x78]\n    mov r0, #4\n    bl PlayerProfile_New\n    ldr r1, _02254050 ; =ov03_022598A0\n    ldr r2, [r1]\n    str r0, [r2, #0x7c]\n    ldr r0, [r1]\n    add r0, #0x20\n    bl InitWindow\n    ldr r0, _02254050 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x30\n    bl InitWindow\n    ldr r0, _02254050 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x40\n    bl InitWindow\n    mov r0, #4\n    bl MessageFormat_New\n    ldr r1, _02254050 ; =ov03_022598A0\n    ldr r1, [r1]\n    str r0, [r1, #0x50]\n    mov r0, #4\n    bl MessageFormat_New\n    ldr r1, _02254050 ; =ov03_022598A0\n    ldr r1, [r1]\n    str r0, [r1, #0x54]\n    mov r0, #4\n    bl MessageFormat_New\n    ldr r1, _02254050 ; =ov03_022598A0\n    ldr r2, [r1]\n    str r0, [r2, #0x58]\n    ldr r0, [r1]\n    mov r2, #0\n    add r0, #0x98\n    strb r2, [r0]\n    add r5, r2, #0\n    ldr r0, [r1]\n    add r0, r0, r2\n    add r0, #0x80\n    add r2, r2, #1\n    strb r5, [r0]\n    cmp r2, #8\n    blt _02254026\n    ldr r6, _02254050 ; =ov03_022598A0\n    add r4, r5, #0\n    mov r7, #0x8c\n    add r0, r7, #0\n    mov r1, #4\n    bl String_New\n    ldr r1, [r6]\n    add r5, r5, #1\n    str r0, [r1, r4]\n    add r4, r4, #4\n    cmp r5, #8\n    blt _0225403A\n    pop {r3, r4, r5, r6, r7, pc}\n    _02254050: .word ov03_022598A0"
    );
    #endif
}

void ov03_02254054(void) {
    /* Original at 0x02254054 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r4, #0\n    ldr r6, _022540E4 ; =ov03_022598A0\n    add r5, r4, #0\n    ldr r0, [r6]\n    ldr r0, [r0, r5]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #8\n    blt _0225405C\n    ldr r0, _022540E4 ; =ov03_022598A0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x7c]\n    bl Heap_Free\n    ldr r0, _022540E4 ; =ov03_022598A0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x50]\n    cmp r0, #0\n    beq _0225408C\n    bl MessageFormat_Delete\n    ldr r0, _022540E4 ; =ov03_022598A0\n    mov r1, #0\n    ldr r0, [r0]\n    str r1, [r0, #0x50]\n    ldr r0, _022540E4 ; =ov03_022598A0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x54]\n    cmp r0, #0\n    beq _022540A2\n    bl MessageFormat_Delete\n    ldr r0, _022540E4 ; =ov03_022598A0\n    mov r1, #0\n    ldr r0, [r0]\n    str r1, [r0, #0x54]\n    ldr r0, _022540E4 ; =ov03_022598A0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x58]\n    cmp r0, #0\n    beq _022540B8\n    bl MessageFormat_Delete\n    ldr r0, _022540E4 ; =ov03_022598A0\n    mov r1, #0\n    ldr r0, [r0]\n    str r1, [r0, #0x58]\n    ldr r0, _022540E4 ; =ov03_022598A0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x74]\n    bl DestroyMsgData\n    ldr r0, _022540E4 ; =ov03_022598A0\n    ldr r0, [r0]\n    ldr r1, [r0, #0x4c]\n    cmp r1, #0\n    beq _022540D2\n    add r0, #0x40\n    bl RemoveWindow\n    ldr r0, _022540E4 ; =ov03_022598A0\n    ldr r0, [r0]\n    bl Heap_Free\n    ldr r0, _022540E4 ; =ov03_022598A0\n    mov r1, #0\n    str r1, [r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _022540E4: .word ov03_022598A0"
    );
    #endif
}

void ov03_022540E8(void) {
    ov03_02255B98();
    sub_02058124(*((u32*)(r4 + 0x68)), r0);
}

void ov03_02254100(void) {
    PlaySE(1);
}

void ov03_02254120(void) {
    /* Original at 0x02254120 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r1, #3\n    add r5, r0, #0\n    mov r4, #0\n    bl ListMenuGetTemplateField\n    cmp r0, #0\n    bls _0225414E\n    add r6, r4, #0\n    mov r7, #3\n    lsl r2, r4, #0x18\n    add r0, r5, #0\n    add r1, r6, #0\n    lsr r2, r2, #0x18\n    bl ov03_02254150\n    add r0, r5, #0\n    add r1, r7, #0\n    add r4, r4, #1\n    bl ListMenuGetTemplateField\n    cmp r4, r0\n    blo _02254134\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov03_02254150(void) {
    /* Original at 0x02254150 */
    /* Requires manual decompilation - 168 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r2, #0\n    bl sub_0203511C\n    add r4, r0, #0\n    mov r2, #0\n    add r0, sp, #0xc\n    strh r2, [r0]\n    ldr r0, _022542C4 ; =ov03_022598A0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x5c]\n    cmp r0, #0\n    beq _02254172\n    add r1, sp, #0xc\n    bl ListMenuGetScrollAndRow\n    add r0, sp, #0xc\n    ldrh r1, [r0]\n    add r1, r1, r5\n    strh r1, [r0]\n    ldr r0, _022542C4 ; =ov03_022598A0\n    lsl r5, r5, #4\n    ldr r0, [r0]\n    add r0, #0x20\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, #8\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, _022542C4 ; =ov03_022598A0\n    lsl r3, r5, #0x10\n    ldr r0, [r0]\n    mov r1, #0xf\n    add r0, #0x20\n    mov r2, #8\n    lsr r3, r3, #0x10\n    bl FillWindowPixelRect\n    add r0, sp, #0xc\n    ldrh r2, [r0]\n    cmp r2, r4\n    bge _02254274\n    ldr r1, _022542C4 ; =ov03_022598A0\n    add r0, r2, #0\n    ldr r1, [r1]\n    ldr r1, [r1, #0x7c]\n    bl sub_020351DC\n    mov r3, #2\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _022542C4 ; =ov03_022598A0\n    add r2, sp, #0xc\n    ldr r0, [r0]\n    ldrh r2, [r2]\n    ldr r0, [r0, #0x50]\n    mov r1, #0\n    add r2, r2, #1\n    bl BufferIntegerAsString\n    ldr r0, _022542C4 ; =ov03_022598A0\n    mov r1, #1\n    ldr r2, [r0]\n    ldr r0, [r2, #0x50]\n    ldr r2, [r2, #0x7c]\n    bl BufferPlayersName\n    ldr r0, _022542C4 ; =ov03_022598A0\n    mov r1, #0x4c\n    ldr r2, [r0]\n    ldr r0, [r2, #0x74]\n    ldr r2, [r2, #4]\n    bl ReadMsgDataIntoString\n    ldr r0, _022542C4 ; =ov03_022598A0\n    ldr r2, [r0]\n    ldr r0, [r2, #0x50]\n    ldmia r2!, {r1, r2}\n    bl StringExpandPlaceholders\n    ldr r0, _022542C4 ; =ov03_022598A0\n    mov r1, #0\n    ldr r2, [r0]\n    mov r0, #0xff\n    str r5, [sp]\n    str r0, [sp, #4]\n    add r0, r2, #0\n    str r1, [sp, #8]\n    ldr r2, [r2]\n    add r0, #0x20\n    mov r3, #8\n    bl AddTextPrinterParameterized\n    ldr r0, _022542C4 ; =ov03_022598A0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x7c]\n    bl PlayerProfile_GetTrainerID\n    add r2, r0, #0\n    mov r1, #2\n    lsl r2, r2, #0x10\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _022542C4 ; =ov03_022598A0\n    lsr r2, r2, #0x10\n    ldr r0, [r0]\n    mov r3, #5\n    ldr r0, [r0, #0x50]\n    bl BufferIntegerAsString\n    ldr r0, _022542C4 ; =ov03_022598A0\n    mov r1, #0x4e\n    ldr r2, [r0]\n    ldr r0, [r2, #0x74]\n    ldr r2, [r2, #0xc]\n    bl ReadMsgDataIntoString\n    ldr r0, _022542C4 ; =ov03_022598A0\n    ldr r2, [r0]\n    ldr r0, [r2, #0x50]\n    ldr r1, [r2, #8]\n    ldr r2, [r2, #0xc]\n    bl StringExpandPlaceholders\n    ldr r0, _022542C4 ; =ov03_022598A0\n    mov r1, #0\n    ldr r2, [r0]\n    mov r0, #0xff\n    str r5, [sp]\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    add r0, r2, #0\n    ldr r2, [r2, #8]\n    add r0, #0x20\n    mov r3, #0x58\n    bl AddTextPrinterParameterized\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    mov r3, #2\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _022542C4 ; =ov03_022598A0\n    mov r1, #0\n    ldr r0, [r0]\n    add r2, r2, #1\n    ldr r0, [r0, #0x50]\n    bl BufferIntegerAsString\n    ldr r0, _022542C4 ; =ov03_022598A0\n    mov r1, #0x4d\n    ldr r2, [r0]\n    ldr r0, [r2, #0x74]\n    ldr r2, [r2, #4]\n    bl ReadMsgDataIntoString\n    ldr r0, _022542C4 ; =ov03_022598A0\n    ldr r2, [r0]\n    ldr r0, [r2, #0x50]\n    ldmia r2!, {r1, r2}\n    bl StringExpandPlaceholders\n    ldr r0, _022542C4 ; =ov03_022598A0\n    mov r1, #0\n    ldr r2, [r0]\n    mov r0, #0xff\n    str r5, [sp]\n    str r0, [sp, #4]\n    add r0, r2, #0\n    str r1, [sp, #8]\n    ldr r2, [r2]\n    add r0, #0x20\n    mov r3, #8\n    bl AddTextPrinterParameterized\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _022542C4: .word ov03_022598A0"
    );
    #endif
}

void ov03_022542C8(void) {
    /* Original at 0x022542C8 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x68\n    add r4, r0, #0\n    ldr r0, _02254398 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x30\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _02254302\n    ldr r0, _02254398 ; =ov03_022598A0\n    mov r2, #3\n    ldr r1, [r0]\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0xc9\n    str r0, [sp, #0x10]\n    ldr r0, [r1, #0x68]\n    add r1, #0x30\n    ldr r0, [r0, #8]\n    mov r3, #0x17\n    bl AddWindowParameterized\n    ldr r0, _02254398 ; =ov03_022598A0\n    ldr r2, _0225439C ; =0x000003D9\n    ldr r0, [r0]\n    mov r1, #1\n    add r0, #0x30\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    ldr r0, _02254398 ; =ov03_022598A0\n    mov r1, #0xf\n    ldr r0, [r0]\n    add r0, #0x30\n    bl FillWindowPixelBuffer\n    ldr r0, _02254398 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x30\n    bl CopyWindowToVram\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x97\n    strb r1, [r0]\n    ldr r0, _022543A0 ; =ov03_02254D64\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r0, _02254398 ; =ov03_022598A0\n    ldr r0, [r0]\n    bl ov03_022543AC\n    ldr r3, _022543A4 ; =ov03_0225927A\n    add r2, sp, #0x14\n    mov r1, #0x29\n    ldrh r0, [r3]\n    add r3, r3, #2\n    strh r0, [r2]\n    add r2, r2, #2\n    sub r1, r1, #1\n    bne _02254348\n    ldr r0, _02254398 ; =ov03_022598A0\n    ldr r1, [r0]\n    add r0, r1, #0\n    add r0, #0x91\n    ldrb r0, [r0]\n    cmp r0, #8\n    bne _02254370\n    add r1, #0x92\n    ldrb r0, [r1]\n    mov r1, #0\n    add r0, #0x7a\n    bl ov03_02253E20\n    b _0225438E\n    cmp r0, #0x28\n    bne _02254382\n    add r1, #0x92\n    ldrb r0, [r1]\n    mov r1, #0\n    add r0, #0x94\n    bl ov03_02253E20\n    b _0225438E\n    lsl r1, r0, #1\n    add r0, sp, #0x14\n    ldrh r0, [r0, r1]\n    mov r1, #0\n    bl ov03_02253E20\n    ldr r0, _022543A8 ; =ov03_02254420\n    bl ov03_02254B4C\n    add sp, #0x68\n    pop {r4, pc}\n    _02254398: .word ov03_022598A0\n    _0225439C: .word 0x000003D9\n    _022543A0: .word ov03_02254D64\n    _022543A4: .word ov03_0225927A\n    _022543A8: .word ov03_02254420"
    );
    #endif
}

void ov03_022543AC(void) {
    /* Original at 0x022543AC */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    ldr r0, _0225441C ; =ov03_022598A0\n    mov r1, #0\n    ldr r2, [r0]\n    ldr r0, [r2, #0x54]\n    ldr r2, [r2, #0x78]\n    bl BufferPlayersName\n    ldr r0, _0225441C ; =ov03_022598A0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x78]\n    bl PlayerProfile_GetTrainerID\n    add r2, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r1, #1\n    lsl r2, r2, #0x10\n    ldr r0, _0225441C ; =ov03_022598A0\n    str r1, [sp, #4]\n    ldr r0, [r0]\n    lsr r2, r2, #0x10\n    ldr r0, [r0, #0x54]\n    mov r3, #5\n    bl BufferIntegerAsString\n    ldr r0, _0225441C ; =ov03_022598A0\n    mov r1, #0x4b\n    ldr r2, [r0]\n    ldr r0, [r2, #0x74]\n    ldr r2, [r2, #0x18]\n    bl ReadMsgDataIntoString\n    ldr r0, _0225441C ; =ov03_022598A0\n    ldr r2, [r0]\n    ldr r0, [r2, #0x54]\n    ldr r1, [r2, #0x1c]\n    ldr r2, [r2, #0x18]\n    bl StringExpandPlaceholders\n    ldr r0, _0225441C ; =ov03_022598A0\n    mov r3, #2\n    ldr r2, [r0]\n    mov r1, #0\n    str r3, [sp]\n    str r1, [sp, #4]\n    add r0, r2, #0\n    str r1, [sp, #8]\n    ldr r2, [r2, #0x1c]\n    add r0, #0x30\n    bl AddTextPrinterParameterized\n    add sp, #0xc\n    pop {pc}\n    nop\n    _0225441C: .word ov03_022598A0"
    );
    #endif
}

void ov03_02254420(void) {
    /* Original at 0x02254420 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    ldr r0, _022544EC ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _022544E6\n    mov r0, #0x10\n    mov r1, #4\n    bl ListMenuItems_New\n    ldr r4, _022544EC ; =ov03_022598A0\n    mov r5, #0\n    ldr r1, [r4]\n    mov r6, #2\n    str r0, [r1, #0x64]\n    mov r7, #1\n    str r6, [sp]\n    str r7, [sp, #4]\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0, #0x50]\n    add r2, r5, #1\n    add r3, r6, #0\n    bl BufferIntegerAsString\n    ldr r2, [r4]\n    mov r1, #0x4d\n    ldr r0, [r2, #0x74]\n    ldr r2, [r2, #4]\n    bl ReadMsgDataIntoString\n    ldr r2, [r4]\n    ldr r0, [r2, #0x50]\n    ldmia r2!, {r1, r2}\n    bl StringExpandPlaceholders\n    ldr r1, [r4]\n    mov r2, #0\n    ldr r0, [r1, #0x64]\n    ldr r1, [r1]\n    bl ListMenuItems_AddItem\n    add r5, r5, #1\n    cmp r5, #0x10\n    blt _02254448\n    mov r1, #1\n    str r1, [sp, #0x10]\n    mov r0, #2\n    str r0, [sp, #0x14]\n    mov r0, #0x14\n    str r0, [sp, #0x18]\n    mov r0, #0xa\n    mov r4, sp\n    str r0, [sp, #0x1c]\n    sub r4, #0x10\n    ldr r3, _022544F0 ; =ov03_02259164\n    str r1, [sp, #0x20]\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r4!, {r0, r1, r2, r3}\n    bl ov03_02253ED0\n    ldr r0, _022544EC ; =ov03_022598A0\n    ldr r2, _022544F4 ; =ov03_02259134\n    ldr r1, [r0]\n    add r1, #0x9c\n    str r2, [r1]\n    ldr r1, [r0]\n    mov r2, #2\n    add r1, #0xa0\n    strb r2, [r1]\n    ldr r1, [r0]\n    ldr r2, _022544F8 ; =0x0000FFFF\n    add r1, #0xa2\n    strh r2, [r1]\n    ldr r1, [r0]\n    mov r2, #0\n    add r1, #0xa1\n    strb r2, [r1]\n    ldr r2, [r0]\n    mov r1, #7\n    ldr r0, [r2, #0x68]\n    add r2, #0x9c\n    bl ov01_021F6A9C\n    ldr r0, _022544FC ; =ov03_02254500\n    bl ov03_02254B4C\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022544EC: .word ov03_022598A0\n    _022544F0: .word ov03_02259164\n    _022544F4: .word ov03_02259134\n    _022544F8: .word 0x0000FFFF\n    _022544FC: .word ov03_02254500"
    );
    #endif
}

void ov03_02254500(void) {
    /* Original at 0x02254500 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov03_022543AC\n    ldr r0, [r4, #0x68]\n    bl ov01_021F6B10\n    cmp r0, #1\n    bne _022545F2\n    bl sub_02037700\n    cmp r0, #0\n    beq _02254536\n    ldr r0, _022545F4 ; =ov03_022598A0\n    mov r1, #3\n    ldr r0, [r0]\n    add r0, #0x88\n    str r1, [r0]\n    bl ov03_02254B44\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    pop {r3, r4, r5, pc}\n    bl sub_02035184\n    cmp r0, #0\n    bne _02254574\n    ldr r0, _022545F4 ; =ov03_022598A0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x5c]\n    bl ListMenu_ProcessInput\n    mov r2, #0\n    mvn r2, r2\n    cmp r0, r2\n    bne _02254578\n    add r1, r4, #0\n    add r1, #0xa2\n    ldrh r1, [r1]\n    cmp r1, #0\n    bne _0225456C\n    ldr r0, _022545F4 ; =ov03_022598A0\n    add r1, sp, #0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x5c]\n    bl ListMenuGetCurrentItemArrayId\n    add r0, sp, #0\n    ldrh r0, [r0]\n    b _02254578\n    cmp r1, #1\n    bne _02254578\n    sub r0, r2, #1\n    b _02254578\n    mov r0, #0\n    mvn r0, r0\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    beq _0225458E\n    add r1, r1, #1\n    cmp r0, r1\n    bne _022545AC\n    add r0, r4, #0\n    bl ov03_02254600\n    pop {r3, r4, r5, pc}\n    ldr r0, _022545F8 ; =0x000005DC\n    bl PlaySE\n    ldr r0, _022545F4 ; =ov03_022598A0\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0x88\n    str r1, [r0]\n    bl ov03_02254B44\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    pop {r3, r4, r5, pc}\n    ldr r0, _022545F8 ; =0x000005DC\n    bl PlaySE\n    add r1, r4, #0\n    ldr r0, [r4, #0x5c]\n    add r1, #0x8e\n    bl ListMenuGetCurrentItemArrayId\n    bl sub_0203511C\n    add r1, r4, #0\n    add r1, #0x8e\n    ldrh r1, [r1]\n    cmp r0, r1\n    ble _022545F2\n    add r0, r4, #0\n    bl ov03_02254600\n    add r0, r4, #0\n    add r0, #0x8e\n    ldrh r0, [r0]\n    bl sub_02035150\n    add r1, r4, #0\n    add r1, #0x8e\n    add r4, #0x8e\n    strh r0, [r1]\n    ldrh r0, [r4]\n    bl sub_02058164\n    bl sub_02037BC8\n    ldr r0, _022545FC ; =ov03_02254660\n    bl ov03_02254B4C\n    pop {r3, r4, r5, pc}\n    _022545F4: .word ov03_022598A0\n    _022545F8: .word 0x000005DC\n    _022545FC: .word ov03_02254660"
    );
    #endif
}

void ov03_02254600(void) {
    /* Original at 0x02254600 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #8\n    bl sub_02035184\n    cmp r0, #0\n    bne _02254618\n    ldr r0, _0225465C ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x98\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02254656\n    ldr r0, _0225465C ; =ov03_022598A0\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x98\n    strb r1, [r0]\n    bl sub_02035198\n    mov r0, #0xc\n    str r0, [sp]\n    mov r0, #0x50\n    str r0, [sp, #4]\n    ldr r0, _0225465C ; =ov03_022598A0\n    mov r1, #0xf\n    ldr r0, [r0]\n    mov r2, #8\n    add r0, #0x20\n    mov r3, #0\n    bl FillWindowPixelRect\n    ldr r0, _0225465C ; =ov03_022598A0\n    mov r1, #0\n    ldr r0, [r0]\n    add r2, r1, #0\n    ldr r0, [r0, #0x5c]\n    bl ov03_02254120\n    ldr r0, _0225465C ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x20\n    bl CopyWindowToVram\n    add sp, #8\n    pop {r3, pc}\n    nop\n    _0225465C: .word ov03_022598A0"
    );
    #endif
}

void ov03_02254660(void) {
    /* Original at 0x02254660 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02037700\n    cmp r0, #0\n    beq _02254690\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    mov r0, #0\n    add r1, r0, #0\n    bl ov03_02253E20\n    add r0, r4, #0\n    bl ov03_02255ADC\n    ldr r0, _022546AC ; =ov03_022598A0\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0xa1\n    strb r1, [r0]\n    pop {r3, r4, r5, pc}\n    bl sub_0203769C\n    bl sub_02034818\n    cmp r0, #0\n    beq _022546A8\n    bl sub_02037BC8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_022546B0\n    pop {r3, r4, r5, pc}\n    nop\n    _022546AC: .word ov03_022598A0"
    );
    #endif
}

void ov03_022546B0(void) {
    /* Original at 0x022546B0 */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02037700\n    cmp r0, #0\n    beq _022546E4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    mov r0, #0\n    add r1, r0, #0\n    bl ov03_02253E20\n    add r0, r4, #0\n    bl ov03_02255ADC\n    ldr r0, _022547D0 ; =ov03_022598A0\n    mov r1, #1\n    ldr r0, [r0]\n    add sp, #0xc\n    add r0, #0xa1\n    strb r1, [r0]\n    pop {r4, r5, pc}\n    ldr r1, _022547D0 ; =ov03_022598A0\n    add r0, r4, #0\n    add r0, #0x8e\n    ldr r1, [r1]\n    ldrh r0, [r0]\n    ldr r1, [r1, #0x7c]\n    bl sub_020351DC\n    ldr r2, _022547D0 ; =ov03_022598A0\n    ldr r0, [r4, #0x58]\n    ldr r2, [r2]\n    mov r1, #1\n    ldr r2, [r2, #0x7c]\n    bl BufferPlayersName\n    bl ov03_02255B70\n    cmp r0, #2\n    bgt _02254714\n    mov r0, #1\n    add r1, r0, #0\n    bl ov03_02253E20\n    b _022547B4\n    ldr r0, _022547D0 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    bne _02254730\n    ldr r0, _022547D0 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl RemoveTextPrinter\n    ldr r0, _022547D0 ; =ov03_022598A0\n    mov r1, #2\n    ldr r2, [r0]\n    ldr r0, [r2, #0x74]\n    ldr r2, [r2, #0x10]\n    bl ReadMsgDataIntoString\n    ldr r0, _022547D0 ; =ov03_022598A0\n    ldr r2, [r0]\n    ldr r0, [r2, #0x58]\n    ldr r1, [r2, #0x14]\n    ldr r2, [r2, #0x10]\n    bl StringExpandPlaceholders\n    ldr r0, _022547D0 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x40\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _0225476A\n    ldr r0, _022547D0 ; =ov03_022598A0\n    mov r2, #3\n    ldr r1, [r0]\n    ldr r0, [r1, #0x68]\n    add r1, #0x40\n    ldr r0, [r0, #8]\n    bl sub_0205B514\n    ldr r0, _022547D0 ; =ov03_022598A0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x68]\n    ldr r0, [r0, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    add r1, r0, #0\n    ldr r0, _022547D0 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x40\n    bl sub_0205B564\n    mov r0, #1\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetAutoScrollParam\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldr r0, _022547D0 ; =ov03_022598A0\n    mov r3, #0\n    ldr r2, [r0]\n    mov r1, #1\n    str r3, [sp]\n    str r1, [sp, #4]\n    add r0, r2, #0\n    str r3, [sp, #8]\n    ldr r2, [r2, #0x14]\n    add r0, #0x40\n    bl AddTextPrinterParameterized\n    ldr r1, _022547D0 ; =ov03_022598A0\n    ldr r1, [r1]\n    add r1, #0x94\n    strb r0, [r1]\n    ldr r0, _022547D0 ; =ov03_022598A0\n    mov r2, #0\n    ldr r1, [r0]\n    add r1, #0xa8\n    str r2, [r1]\n    ldr r0, [r0]\n    mov r1, #1\n    add r0, #0xa1\n    strb r1, [r0]\n    ldr r0, _022547D4 ; =ov03_022548E0\n    bl ov03_02254B4C\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _022547D0: .word ov03_022598A0\n    _022547D4: .word ov03_022548E0"
    );
    #endif
}

void ov03_022547D8(void) {
    /* Original at 0x022547D8 */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r4, r1, #0\n    bl sub_02037700\n    cmp r0, #0\n    beq _022547FE\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    mov r0, #0\n    add r1, r0, #0\n    bl ov03_02253E20\n    add r0, r4, #0\n    bl ov03_02255ADC\n    b _022548D2\n    mov r0, #0\n    mov r1, #3\n    bl sub_02037BA0\n    add r5, r0, #0\n    bl sub_0203769C\n    cmp r5, r0\n    bne _02254824\n    bl sub_02037BC8\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    add r0, r4, #0\n    bl ov03_02255A70\n    b _022548D2\n    mov r0, #0\n    mov r1, #5\n    bl sub_02037BA0\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _02254848\n    bl sub_02037BC8\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    add r0, r4, #0\n    bl ov03_02255A70\n    b _022548D2\n    mov r0, #0\n    mov r1, #4\n    bl sub_02037BA0\n    add r5, r0, #0\n    bl sub_0203769C\n    cmp r5, r0\n    bne _0225486A\n    mov r0, #0x74\n    mov r1, #0\n    bl ov03_02253E20\n    ldr r0, _022548D8 ; =ov03_02255280\n    bl ov03_02254B4C\n    b _022548D2\n    mov r0, #0\n    mov r1, #2\n    bl sub_02037BA0\n    add r5, r0, #0\n    bl sub_0203769C\n    cmp r5, r0\n    bne _022548B6\n    bl sub_02037BC8\n    bl sub_020347A0\n    add r1, r4, #0\n    add r1, #0x90\n    strb r0, [r1]\n    ldr r0, _022548DC ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    bne _022548A6\n    ldr r0, _022548DC ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl RemoveTextPrinter\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    add r0, r4, #0\n    bl ov03_02255804\n    b _022548D2\n    bl ov03_02255C80\n    cmp r0, #0\n    beq _022548CE\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    add r0, r4, #0\n    bl ov03_02255A70\n    b _022548D2\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    nop\n    _022548D8: .word ov03_02255280\n    _022548DC: .word ov03_022598A0"
    );
    #endif
}

void ov03_022548E0(void) {
    /* Original at 0x022548E0 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02254984 ; =ov03_022598A0\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02254980\n    add r0, r4, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02254936\n    ldr r0, _02254984 ; =ov03_022598A0\n    ldr r2, _02254988 ; =_0225912C\n    ldr r1, [r0]\n    add r1, #0x9c\n    str r2, [r1]\n    ldr r1, [r0]\n    mov r2, #1\n    add r1, #0xa0\n    strb r2, [r1]\n    ldr r1, [r0]\n    ldr r2, _0225498C ; =0x0000FFFF\n    add r1, #0xa2\n    strh r2, [r1]\n    ldr r1, [r0]\n    mov r2, #0\n    add r1, #0xa1\n    strb r2, [r1]\n    ldr r2, [r0]\n    mov r1, #7\n    ldr r0, [r2, #0x68]\n    add r2, #0x9c\n    bl ov01_021F6A9C\n    mov r0, #1\n    add r4, #0xa8\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x68]\n    bl ov01_021F6B10\n    cmp r0, #1\n    bne _02254980\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_022547D8\n    cmp r0, #0\n    beq _02254954\n    mov r0, #2\n    add r4, #0xa1\n    strb r0, [r4]\n    pop {r3, r4, r5, pc}\n    ldr r0, _02254990 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    bne _02254968\n    add r0, r4, #0\n    add r0, #0xa2\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _02254980\n    ldr r0, _02254994 ; =0x000005DC\n    bl PlaySE\n    mov r1, #0\n    add r4, #0xa8\n    mov r0, #3\n    str r1, [r4]\n    bl ov03_02253E20\n    ldr r0, _02254998 ; =ov03_0225499C\n    bl ov03_02254B4C\n    pop {r3, r4, r5, pc}\n    nop\n    _02254984: .word ov03_022598A0\n    _02254988: .word _0225912C\n    _0225498C: .word 0x0000FFFF\n    _02254990: .word gSystem\n    _02254994: .word 0x000005DC\n    _02254998: .word ov03_0225499C"
    );
    #endif
}

void ov03_0225499C(void) {
    /* Original at 0x0225499C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl ov03_022547D8\n    cmp r0, #0\n    beq _022549B0\n    mov r0, #2\n    add r4, #0xa1\n    strb r0, [r4]\n    pop {r4, pc}\n    ldr r0, _022549D0 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _022549CC\n    add r0, r4, #0\n    bl ov03_02255C84\n    ldr r0, _022549D4 ; =ov03_022549D8\n    bl ov03_02254B4C\n    pop {r4, pc}\n    nop\n    _022549D0: .word ov03_022598A0\n    _022549D4: .word ov03_022549D8"
    );
    #endif
}

void ov03_022549D8(void) {
    /* Original at 0x022549D8 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _022549FA\n    add r0, r4, #0\n    bl ov03_02255CA0\n    cmp r0, #1\n    bne _02254A4E\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0xa8\n    str r1, [r0]\n    add r0, r4, #0\n    bl ov03_02255CD0\n    cmp r0, #0\n    beq _02254A4E\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_022547D8\n    cmp r0, #0\n    beq _02254A18\n    add r0, r4, #0\n    bl ov03_02255CE4\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x68]\n    bl ov01_021F6AEC\n    cmp r0, #6\n    bne _02254A4E\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02254A44\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    mov r0, #6\n    mov r1, #0\n    bl ov03_02253E20\n    add r0, r4, #0\n    bl ov03_02255ADC\n    pop {r3, r4, r5, pc}\n    cmp r0, #1\n    bne _02254A4E\n    ldr r0, _02254A50 ; =ov03_022546B0\n    bl ov03_02254B4C\n    pop {r3, r4, r5, pc}\n    _02254A50: .word ov03_022546B0"
    );
    #endif
}

void ov03_02254A54(void) {
    /* Original at 0x02254A54 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r2, #0\n    mov r2, #0\n    add r0, sp, #0xc\n    strh r2, [r0]\n    ldr r0, _02254B28 ; =ov03_022598A0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x5c]\n    cmp r0, #0\n    beq _02254A70\n    add r1, sp, #0xc\n    bl ListMenuGetScrollAndRow\n    add r0, sp, #0xc\n    ldrh r1, [r0]\n    add r1, r1, r4\n    strh r1, [r0]\n    ldrh r0, [r0]\n    bl sub_02034818\n    cmp r0, #0\n    beq _02254B22\n    add r0, sp, #0xc\n    ldrh r0, [r0]\n    bl sub_02034818\n    add r2, r0, #0\n    ldr r0, _02254B28 ; =ov03_022598A0\n    mov r1, #0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x50]\n    bl BufferPlayersName\n    ldr r0, _02254B28 ; =ov03_022598A0\n    mov r1, #0x4f\n    ldr r2, [r0]\n    ldr r0, [r2, #0x74]\n    ldr r2, [r2, #4]\n    bl ReadMsgDataIntoString\n    ldr r0, _02254B28 ; =ov03_022598A0\n    ldr r2, [r0]\n    ldr r0, [r2, #0x50]\n    ldmia r2!, {r1, r2}\n    bl StringExpandPlaceholders\n    ldr r0, _02254B28 ; =ov03_022598A0\n    lsl r4, r4, #4\n    ldr r2, [r0]\n    mov r1, #0\n    str r4, [sp]\n    str r1, [sp, #4]\n    add r0, r2, #0\n    str r1, [sp, #8]\n    ldr r2, [r2]\n    add r0, #0x20\n    mov r3, #8\n    bl AddTextPrinterParameterized\n    add r0, sp, #0xc\n    ldrh r0, [r0]\n    bl sub_02034818\n    bl PlayerProfile_GetTrainerID_VisibleHalf\n    mov r1, #2\n    add r2, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _02254B28 ; =ov03_022598A0\n    mov r3, #5\n    ldr r0, [r0]\n    ldr r0, [r0, #0x50]\n    bl BufferIntegerAsString\n    ldr r0, _02254B28 ; =ov03_022598A0\n    mov r1, #0x4e\n    ldr r2, [r0]\n    ldr r0, [r2, #0x74]\n    ldr r2, [r2, #0xc]\n    bl ReadMsgDataIntoString\n    ldr r0, _02254B28 ; =ov03_022598A0\n    ldr r2, [r0]\n    ldr r0, [r2, #0x50]\n    ldr r1, [r2, #8]\n    ldr r2, [r2, #0xc]\n    bl StringExpandPlaceholders\n    ldr r0, _02254B28 ; =ov03_022598A0\n    mov r1, #0\n    ldr r2, [r0]\n    mov r3, #0x48\n    str r4, [sp]\n    str r1, [sp, #4]\n    add r0, r2, #0\n    str r1, [sp, #8]\n    ldr r2, [r2, #8]\n    add r0, #0x20\n    bl AddTextPrinterParameterized\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _02254B28: .word ov03_022598A0"
    );
    #endif
}

void ov03_02254B2C(void) {
    ov03_02255B98();
    sub_020580E4(*((u32*)(r4 + 0x68)), r0);
}

void ov03_02254B44(void) {
    sub_02058284();
}

void ov03_02254B4C(void) {
    /* Original at 0x02254B4C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02254B54 ; =ov03_022598A0\n    ldr r1, [r1]\n    str r0, [r1, #0x6c]\n    bx lr\n    _02254B54: .word ov03_022598A0"
    );
    #endif
}

void ov03_02254B58(void) {
    /* Original at 0x02254B58 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, _02254BDC ; =ov03_02254D64\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    bl ov03_02254BEC\n    ldr r0, _02254BE0 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x30\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _02254BA0\n    ldr r0, _02254BE0 ; =ov03_022598A0\n    mov r2, #3\n    ldr r1, [r0]\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #9\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0xcd\n    str r0, [sp, #0x10]\n    ldr r0, [r1, #0x68]\n    add r1, #0x30\n    ldr r0, [r0, #8]\n    mov r3, #0x16\n    bl AddWindowParameterized\n    ldr r0, _02254BE0 ; =ov03_022598A0\n    ldr r2, _02254BE4 ; =0x000003D9\n    ldr r0, [r0]\n    mov r1, #1\n    add r0, #0x30\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    ldr r0, _02254BE0 ; =ov03_022598A0\n    mov r1, #0xf\n    ldr r0, [r0]\n    add r0, #0x30\n    bl FillWindowPixelBuffer\n    ldr r0, _02254BE0 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x30\n    bl CopyWindowToVram\n    mov r0, #1\n    add r4, #0x97\n    strb r0, [r4]\n    mov r0, #0\n    bl sub_0203476C\n    ldr r0, _02254BE8 ; =ov03_02254D78\n    bl ov03_02254B4C\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _02254BDC: .word ov03_02254D64\n    _02254BE0: .word ov03_022598A0\n    _02254BE4: .word 0x000003D9\n    _02254BE8: .word ov03_02254D78"
    );
    #endif
}

void ov03_02254BEC(void) {
    /* Original at 0x02254BEC */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x54\n    ldr r3, _02254C94 ; =ov03_0225931E\n    add r2, sp, #0\n    mov r1, #0x29\n    ldrh r0, [r3]\n    add r3, r3, #2\n    strh r0, [r2]\n    add r2, r2, #2\n    sub r1, r1, #1\n    bne _02254BF6\n    ldr r0, _02254C98 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x91\n    ldrb r0, [r0]\n    cmp r0, #0x29\n    blo _02254C12\n    bl GF_AssertFail\n    ldr r0, _02254C98 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x91\n    ldrb r0, [r0]\n    cmp r0, #8\n    bne _02254C4E\n    bl sub_020347A0\n    cmp r0, #1\n    ble _02254C3A\n    ldr r0, _02254C98 ; =ov03_022598A0\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x92\n    ldrb r0, [r0]\n    add r0, #0x7f\n    bl ov03_02253E20\n    add sp, #0x54\n    pop {pc}\n    ldr r0, _02254C98 ; =ov03_022598A0\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x92\n    ldrb r0, [r0]\n    add r0, #0x75\n    bl ov03_02253E20\n    add sp, #0x54\n    pop {pc}\n    cmp r0, #0x28\n    bne _02254C82\n    bl sub_020347A0\n    cmp r0, #1\n    ble _02254C6E\n    ldr r0, _02254C98 ; =ov03_022598A0\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x92\n    ldrb r0, [r0]\n    add r0, #0x9a\n    bl ov03_02253E20\n    add sp, #0x54\n    pop {pc}\n    ldr r0, _02254C98 ; =ov03_022598A0\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x92\n    ldrb r0, [r0]\n    add r0, #0x8e\n    bl ov03_02253E20\n    add sp, #0x54\n    pop {pc}\n    lsl r1, r0, #1\n    add r0, sp, #0\n    ldrh r0, [r0, r1]\n    mov r1, #0\n    bl ov03_02253E20\n    add sp, #0x54\n    pop {pc}\n    nop\n    _02254C94: .word ov03_0225931E\n    _02254C98: .word ov03_022598A0"
    );
    #endif
}

void ov03_02254C9C(void) {
    /* Original at 0x02254C9C */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    bl sub_020347A0\n    add r4, r0, #0\n    bl ov03_02255B70\n    cmp r4, r0\n    blt _02254CB8\n    bl sub_020347A0\n    add r2, r0, #0\n    mov r4, #0x51\n    b _02254CC6\n    bl ov03_02255B70\n    add r4, r0, #0\n    bl sub_020347A0\n    sub r2, r4, r0\n    mov r4, #0x50\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _02254D20 ; =ov03_022598A0\n    mov r1, #0\n    ldr r0, [r0]\n    mov r3, #2\n    ldr r0, [r0, #0x54]\n    bl BufferIntegerAsString\n    ldr r0, _02254D20 ; =ov03_022598A0\n    mov r1, #0xf\n    ldr r0, [r0]\n    add r0, #0x30\n    bl FillWindowPixelBuffer\n    ldr r0, _02254D20 ; =ov03_022598A0\n    add r1, r4, #0\n    ldr r2, [r0]\n    ldr r0, [r2, #0x74]\n    ldr r2, [r2, #0x1c]\n    bl ReadMsgDataIntoString\n    ldr r0, _02254D20 ; =ov03_022598A0\n    ldr r2, [r0]\n    ldr r0, [r2, #0x54]\n    ldr r1, [r2, #0x18]\n    ldr r2, [r2, #0x1c]\n    bl StringExpandPlaceholders\n    ldr r0, _02254D20 ; =ov03_022598A0\n    mov r3, #2\n    ldr r2, [r0]\n    mov r1, #0\n    str r3, [sp]\n    str r1, [sp, #4]\n    add r0, r2, #0\n    str r1, [sp, #8]\n    ldr r2, [r2, #0x18]\n    add r0, #0x30\n    bl AddTextPrinterParameterized\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _02254D20: .word ov03_022598A0"
    );
    #endif
}

void ov03_02254D24(void) {
    /* Original at 0x02254D24 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x54\n    ldr r5, _02254D60 ; =ov03_02259370\n    add r4, r1, #0\n    add r3, sp, #0\n    mov r2, #0x29\n    ldrh r1, [r5]\n    add r5, r5, #2\n    strh r1, [r3]\n    add r3, r3, #2\n    sub r2, r2, #1\n    bne _02254D30\n    bl sub_02034818\n    add r2, r0, #0\n    beq _02254D4C\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    bl BufferPlayersName\n    add r4, #0x91\n    ldrb r0, [r4]\n    lsl r1, r0, #1\n    add r0, sp, #0\n    ldrh r0, [r0, r1]\n    mov r1, #1\n    bl ov03_02253E20\n    add sp, #0x54\n    pop {r4, r5, pc}\n    _02254D60: .word ov03_02259370"
    );
    #endif
}

void ov03_02254D64(void) {
    /* Original at 0x02254D64 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _02254D74 ; =ov03_022598A0\n    ldr r2, [r2]\n    ldr r2, [r2, #0x6c]\n    cmp r2, #0\n    beq _02254D72\n    blx r2\n    pop {r3, pc}\n    _02254D74: .word ov03_022598A0"
    );
    #endif
}

void ov03_02254D78(void) {
    /* Original at 0x02254D78 */
    /* Requires manual decompilation - 110 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r0, r1, #0\n    bl ov03_02254C9C\n    ldr r0, _02254E58 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02254E52\n    mov r0, #5\n    mov r1, #4\n    bl ListMenuItems_New\n    ldr r4, _02254E58 ; =ov03_022598A0\n    mov r5, #0\n    ldr r1, [r4]\n    mov r6, #0x52\n    str r0, [r1, #0x64]\n    add r7, r5, #0\n    ldr r1, [r4]\n    add r2, r6, #0\n    ldr r0, [r1, #0x64]\n    ldr r1, [r1, #0x74]\n    add r3, r7, #0\n    bl ListMenuItems_AppendFromMsgData\n    add r5, r5, #1\n    cmp r5, #5\n    blt _02254DA6\n    ldr r1, _02254E58 ; =ov03_022598A0\n    mov r2, #1\n    ldr r0, [r1]\n    mov r3, #0\n    add r0, #0x98\n    strb r2, [r0]\n    add r2, r3, #0\n    ldr r0, [r1]\n    add r0, r0, r3\n    add r0, #0x80\n    add r3, r3, #1\n    strb r2, [r0]\n    cmp r3, #8\n    blt _02254DC8\n    mov r1, #1\n    str r1, [sp, #0x10]\n    mov r0, #2\n    str r0, [sp, #0x14]\n    mov r0, #0x11\n    str r0, [sp, #0x18]\n    mov r0, #0xc\n    mov r4, sp\n    str r0, [sp, #0x1c]\n    sub r4, #0x10\n    ldr r3, _02254E5C ; =ov03_02259144\n    str r1, [sp, #0x20]\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r4!, {r0, r1, r2, r3}\n    bl ov03_02253ED0\n    ldr r0, _02254E60 ; =ov03_02254E70\n    bl ov03_02254B4C\n    bl ov03_02255B84\n    cmp r0, #2\n    ble _02254E22\n    ldr r0, _02254E58 ; =ov03_022598A0\n    ldr r2, _02254E64 ; =ov03_0225913C\n    ldr r1, [r0]\n    add r1, #0x9c\n    str r2, [r1]\n    mov r1, #2\n    b _02254E2E\n    ldr r0, _02254E58 ; =ov03_022598A0\n    ldr r2, _02254E68 ; =ov03_02259130\n    ldr r1, [r0]\n    add r1, #0x9c\n    str r2, [r1]\n    mov r1, #1\n    ldr r0, [r0]\n    ldr r2, _02254E6C ; =0x0000FFFF\n    add r0, #0xa0\n    strb r1, [r0]\n    ldr r0, _02254E58 ; =ov03_022598A0\n    ldr r1, [r0]\n    add r1, #0xa2\n    strh r2, [r1]\n    ldr r1, [r0]\n    mov r2, #0\n    add r1, #0xa1\n    strb r2, [r1]\n    ldr r2, [r0]\n    mov r1, #7\n    ldr r0, [r2, #0x68]\n    add r2, #0x9c\n    bl ov01_021F6A9C\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02254E58: .word ov03_022598A0\n    _02254E5C: .word ov03_02259144\n    _02254E60: .word ov03_02254E70\n    _02254E64: .word ov03_0225913C\n    _02254E68: .word ov03_02259130\n    _02254E6C: .word 0x0000FFFF"
    );
    #endif
}

void ov03_02254E70(void) {
    /* Original at 0x02254E70 */
    /* Requires manual decompilation - 226 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x5c\n    str r0, [sp]\n    ldr r0, [r1, #0x68]\n    str r1, [sp, #4]\n    bl ov01_021F6B10\n    cmp r0, #1\n    beq _02254E84\n    b _02255058\n    ldr r0, [sp, #4]\n    bl ov03_02254C9C\n    mov r7, #1\n    ldr r4, _0225505C ; =ov03_022598A0\n    mov r5, #0\n    add r6, r7, #0\n    add r0, r5, #0\n    bl sub_02034714\n    cmp r0, #0\n    beq _02254EB0\n    cmp r5, #0\n    beq _02254EB0\n    ldr r0, [r4]\n    add r0, r0, r5\n    add r0, #0x80\n    strb r6, [r0]\n    ldr r0, [r4]\n    add r0, #0x98\n    strb r6, [r0]\n    b _02254EFA\n    add r0, r5, #0\n    bl sub_02034818\n    cmp r0, #0\n    beq _02254ED4\n    ldr r1, [r4]\n    add r0, r1, r5\n    add r0, #0x80\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02254ED4\n    add r0, r1, r5\n    add r0, #0x80\n    strb r7, [r0]\n    ldr r0, [r4]\n    add r0, #0x98\n    strb r7, [r0]\n    b _02254EFA\n    add r0, r5, #0\n    bl sub_02034818\n    cmp r0, #0\n    bne _02254EFA\n    ldr r1, [r4]\n    add r0, r1, r5\n    add r0, #0x80\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02254EFA\n    add r1, r1, r5\n    add r1, #0x80\n    mov r0, #0\n    strb r0, [r1]\n    ldr r1, [r4]\n    mov r0, #1\n    add r1, #0x98\n    strb r0, [r1]\n    add r5, r5, #1\n    cmp r5, #8\n    blt _02254E92\n    ldr r1, _0225505C ; =ov03_022598A0\n    ldr r2, [r1]\n    add r0, r2, #0\n    add r0, #0x98\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02254F52\n    mov r0, #0\n    add r2, #0x98\n    strb r0, [r2]\n    ldr r0, [r1]\n    ldr r0, [r0, #0x5c]\n    bl RedrawListMenu\n    ldr r0, _0225505C ; =ov03_022598A0\n    mov r1, #3\n    ldr r0, [r0]\n    mov r5, #0\n    ldr r0, [r0, #0x5c]\n    bl ListMenuGetTemplateField\n    cmp r0, #0\n    bls _02254F52\n    ldr r4, _0225505C ; =ov03_022598A0\n    add r6, r5, #0\n    mov r7, #3\n    ldr r0, [r4]\n    lsl r2, r5, #0x18\n    ldr r0, [r0, #0x5c]\n    add r1, r6, #0\n    lsr r2, r2, #0x18\n    bl ov03_02254A54\n    ldr r0, [r4]\n    add r1, r7, #0\n    ldr r0, [r0, #0x5c]\n    add r5, r5, #1\n    bl ListMenuGetTemplateField\n    cmp r5, r0\n    blo _02254F34\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #0x5c]\n    bl ListMenu_ProcessInput\n    add r4, r0, #0\n    bl sub_02034780\n    cmp r0, #0xff\n    beq _02254F92\n    bl sub_02034780\n    ldr r1, [sp, #4]\n    add r1, #0x95\n    strb r0, [r1]\n    ldr r0, _02255060 ; =0x0000060C\n    bl PlaySE\n    ldr r0, [sp, #4]\n    mov r1, #1\n    add r0, #0xa1\n    strb r1, [r0]\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #4]\n    add r0, #0x95\n    ldrb r0, [r0]\n    bl ov03_02254D24\n    ldr r0, _02255064 ; =ov03_02255714\n    bl ov03_02254B4C\n    add sp, #0x5c\n    pop {r4, r5, r6, r7, pc}\n    bl sub_02037700\n    cmp r0, #0\n    beq _02254FB4\n    bl ov03_02254B44\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    bl ov03_0225574C\n    ldr r0, _0225505C ; =ov03_022598A0\n    mov r1, #3\n    ldr r0, [r0]\n    add sp, #0x5c\n    add r0, #0x88\n    str r1, [r0]\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _02254FEE\n    bl ov03_02255B84\n    cmp r0, #2\n    ble _02254FDE\n    ldr r0, _0225505C ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0xa2\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _02254FD4\n    mov r4, #0\n    b _02254FEE\n    cmp r0, #1\n    bne _02254FEE\n    mov r4, #1\n    mvn r4, r4\n    b _02254FEE\n    ldr r0, _0225505C ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0xa2\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _02254FEE\n    mov r4, #1\n    mvn r4, r4\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _02254FFE\n    add r0, r0, #1\n    cmp r4, r0\n    beq _02255058\n    b _0225500E\n    ldr r0, _02255068 ; =0x000005DC\n    bl PlaySE\n    ldr r0, _0225506C ; =ov03_0225558C\n    bl ov03_02254B4C\n    add sp, #0x5c\n    pop {r4, r5, r6, r7, pc}\n    bl ov03_02255B70\n    add r4, r0, #0\n    bl sub_020347A0\n    cmp r4, r0\n    bgt _02255058\n    ldr r3, _02255070 ; =ov03_02259184\n    add r2, sp, #8\n    mov r1, #0x29\n    ldrh r0, [r3]\n    add r3, r3, #2\n    strh r0, [r2]\n    add r2, r2, #2\n    sub r1, r1, #1\n    bne _02255022\n    ldr r0, _02255068 ; =0x000005DC\n    bl PlaySE\n    bl sub_020347A0\n    ldr r1, [sp, #4]\n    add r1, #0x90\n    strb r0, [r1]\n    ldr r0, [sp, #4]\n    add r0, #0x91\n    str r0, [sp, #4]\n    ldrb r0, [r0]\n    lsl r1, r0, #1\n    add r0, sp, #8\n    ldrh r0, [r0, r1]\n    mov r1, #0\n    bl ov03_02253E20\n    ldr r0, _02255074 ; =ov03_022553C8\n    bl ov03_02254B4C\n    add sp, #0x5c\n    pop {r4, r5, r6, r7, pc}\n    _0225505C: .word ov03_022598A0\n    _02255060: .word 0x0000060C\n    _02255064: .word ov03_02255714\n    _02255068: .word 0x000005DC\n    _0225506C: .word ov03_0225558C\n    _02255070: .word ov03_02259184\n    _02255074: .word ov03_022553C8"
    );
    #endif
}

void ov03_02255078(void) {
    /* Original at 0x02255078 */
    /* Requires manual decompilation - 208 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov03_02254C9C\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _022550A0\n    add r0, r5, #0\n    bl ov03_02255CA0\n    cmp r0, #1\n    bne _022550AA\n    add r0, r5, #0\n    mov r1, #1\n    add r0, #0xa8\n    str r1, [r0]\n    add r0, r5, #0\n    bl ov03_02255CD0\n    cmp r0, #0\n    bne _022550AC\n    b _0225526E\n    add r0, r5, #0\n    add r0, #0x95\n    ldrb r0, [r0]\n    bl sub_020373B4\n    cmp r0, #0\n    bne _02255128\n    add r0, r5, #0\n    bl ov03_02255CE4\n    add r0, r5, #0\n    add r0, #0x91\n    ldrb r0, [r0]\n    cmp r0, #8\n    beq _022550CE\n    cmp r0, #0x28\n    bne _02255110\n    mov r5, #1\n    bl ov03_02255B84\n    cmp r0, #1\n    ble _02255100\n    mov r4, #5\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _022550F6\n    add r0, r5, #0\n    bl sub_020346E8\n    lsl r1, r5, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl sub_02037B8C\n    add r5, r5, #1\n    bl ov03_02255B84\n    cmp r5, r0\n    blt _022550DA\n    mov r0, #0\n    add r1, r0, #0\n    bl ov03_02253E20\n    ldr r0, _02255270 ; =ov03_022552C8\n    bl ov03_02254B4C\n    pop {r4, r5, r6, pc}\n    add r5, #0x95\n    ldrb r0, [r5]\n    bl sub_020346E8\n    mov r0, #0\n    add r1, r0, #0\n    bl ov03_02253E20\n    ldr r0, _02255270 ; =ov03_022552C8\n    bl ov03_02254B4C\n    pop {r4, r5, r6, pc}\n    bl sub_02037700\n    cmp r0, #0\n    bne _02255138\n    bl ov03_02255C80\n    cmp r0, #0\n    beq _02255156\n    add r0, r5, #0\n    bl ov03_02255CE4\n    add r5, #0x95\n    ldrb r0, [r5]\n    bl sub_020346E8\n    mov r0, #0\n    add r1, r0, #0\n    bl ov03_02253E20\n    ldr r0, _02255270 ; =ov03_022552C8\n    bl ov03_02254B4C\n    pop {r4, r5, r6, pc}\n    ldr r0, [r5, #0x68]\n    bl ov01_021F6AEC\n    cmp r0, #6\n    beq _02255162\n    b _0225526E\n    add r0, r5, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02255200\n    add r0, r5, #0\n    add r0, #0x91\n    ldrb r0, [r0]\n    cmp r0, #1\n    beq _02255184\n    cmp r0, #2\n    beq _02255184\n    add r0, #0xdb\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _022551A6\n    bl sub_020348F0\n    cmp r0, #0\n    bne _022551A6\n    mov r0, #0x74\n    mov r1, #0\n    bl ov03_02253E20\n    ldr r0, _02255274 ; =ov03_02255280\n    bl ov03_02254B4C\n    add r5, #0x95\n    ldrb r1, [r5]\n    mov r0, #4\n    bl sub_02037B8C\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r0, #0x95\n    ldrb r0, [r0]\n    bl sub_0203476C\n    add r1, r5, #0\n    add r1, #0x95\n    ldrb r1, [r1]\n    mov r0, #2\n    bl sub_02037B8C\n    bl ov03_02255B84\n    add r4, r0, #0\n    bl sub_020347A0\n    cmp r4, r0\n    bne _022551F4\n    bl sub_020347A0\n    add r1, r5, #0\n    add r1, #0x90\n    strb r0, [r1]\n    bl ov03_02255B84\n    cmp r0, #2\n    ble _022551E4\n    ldr r0, _02255278 ; =ov03_02255388\n    bl ov03_02254B4C\n    pop {r4, r5, r6, pc}\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov03_0225574C\n    add r0, r5, #0\n    bl ov03_022557CC\n    pop {r4, r5, r6, pc}\n    bl ov03_02254BEC\n    ldr r0, _0225527C ; =ov03_0225530C\n    bl ov03_02254B4C\n    pop {r4, r5, r6, pc}\n    cmp r0, #1\n    bne _0225526E\n    add r0, r5, #0\n    add r0, #0x91\n    ldrb r0, [r0]\n    cmp r0, #8\n    beq _02255212\n    cmp r0, #0x28\n    bne _02255250\n    mov r5, #1\n    bl ov03_02255B84\n    cmp r0, #1\n    ble _02255244\n    mov r4, #5\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _0225523A\n    add r0, r5, #0\n    bl sub_020346E8\n    lsl r1, r5, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl sub_02037B8C\n    add r5, r5, #1\n    bl ov03_02255B84\n    cmp r5, r0\n    blt _0225521E\n    bl ov03_02254BEC\n    ldr r0, _0225527C ; =ov03_0225530C\n    bl ov03_02254B4C\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r0, #0x95\n    ldrb r0, [r0]\n    bl sub_020346E8\n    add r5, #0x95\n    ldrb r1, [r5]\n    mov r0, #3\n    bl sub_02037B8C\n    bl ov03_02254BEC\n    ldr r0, _0225527C ; =ov03_0225530C\n    bl ov03_02254B4C\n    pop {r4, r5, r6, pc}\n    _02255270: .word ov03_022552C8\n    _02255274: .word ov03_02255280\n    _02255278: .word ov03_02255388\n    _0225527C: .word ov03_0225530C"
    );
    #endif
}

void ov03_02255280(void) {
    /* Original at 0x02255280 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _022552C0 ; =ov03_022598A0\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _022552BE\n    ldr r0, _022552C4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _022552A8\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _022552BE\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    bl ov03_02254B44\n    ldr r0, _022552C0 ; =ov03_022598A0\n    mov r1, #4\n    ldr r0, [r0]\n    add r0, #0x88\n    str r1, [r0]\n    pop {r3, r4, r5, pc}\n    _022552C0: .word ov03_022598A0\n    _022552C4: .word gSystem"
    );
    #endif
}

void ov03_022552C8(void) {
    /* Original at 0x022552C8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r0, r1, #0\n    bl ov03_02254C9C\n    ldr r0, _02255300 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _022552FC\n    ldr r0, _02255304 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _022552F2\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _022552FC\n    bl ov03_02254BEC\n    ldr r0, _02255308 ; =ov03_0225530C\n    bl ov03_02254B4C\n    pop {r3, pc}\n    nop\n    _02255300: .word ov03_022598A0\n    _02255304: .word gSystem\n    _02255308: .word ov03_0225530C"
    );
    #endif
}

void ov03_0225530C(void) {
    /* Original at 0x0225530C */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r0, r1, #0\n    bl ov03_02254C9C\n    ldr r0, _02255374 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02255370\n    ldr r0, _02255378 ; =ov03_02254E70\n    bl ov03_02254B4C\n    bl ov03_02255B84\n    cmp r0, #2\n    ble _02255340\n    ldr r0, _02255374 ; =ov03_022598A0\n    ldr r2, _0225537C ; =ov03_0225913C\n    ldr r1, [r0]\n    add r1, #0x9c\n    str r2, [r1]\n    mov r1, #2\n    b _0225534C\n    ldr r0, _02255374 ; =ov03_022598A0\n    ldr r2, _02255380 ; =ov03_02259130\n    ldr r1, [r0]\n    add r1, #0x9c\n    str r2, [r1]\n    mov r1, #1\n    ldr r0, [r0]\n    ldr r2, _02255384 ; =0x0000FFFF\n    add r0, #0xa0\n    strb r1, [r0]\n    ldr r0, _02255374 ; =ov03_022598A0\n    ldr r1, [r0]\n    add r1, #0xa2\n    strh r2, [r1]\n    ldr r1, [r0]\n    mov r2, #0\n    add r1, #0xa1\n    strb r2, [r1]\n    ldr r2, [r0]\n    mov r1, #7\n    ldr r0, [r2, #0x68]\n    add r2, #0x9c\n    bl ov01_021F6A9C\n    pop {r3, pc}\n    nop\n    _02255374: .word ov03_022598A0\n    _02255378: .word ov03_02254E70\n    _0225537C: .word ov03_0225913C\n    _02255380: .word ov03_02259130\n    _02255384: .word 0x0000FFFF"
    );
    #endif
}

void ov03_02255388(void) {
    /* Original at 0x02255388 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x54\n    ldr r3, _022553C0 ; =ov03_022591D6\n    add r4, r1, #0\n    add r2, sp, #0\n    mov r1, #0x29\n    ldrh r0, [r3]\n    add r3, r3, #2\n    strh r0, [r2]\n    add r2, r2, #2\n    sub r1, r1, #1\n    bne _02255394\n    add r0, r4, #0\n    bl ov03_02254C9C\n    add r4, #0x91\n    ldrb r0, [r4]\n    lsl r1, r0, #1\n    add r0, sp, #0\n    ldrh r0, [r0, r1]\n    mov r1, #0\n    bl ov03_02253E20\n    ldr r0, _022553C4 ; =ov03_022553C8\n    bl ov03_02254B4C\n    add sp, #0x54\n    pop {r3, r4, pc}\n    _022553C0: .word ov03_022591D6\n    _022553C4: .word ov03_022553C8"
    );
    #endif
}

void ov03_022553C8(void) {
    /* Original at 0x022553C8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    bl ov03_02254C9C\n    mov r0, #0\n    bl sub_02037EC0\n    ldr r0, [r4, #0x5c]\n    bl ListMenu_ProcessInput\n    ldr r0, _022553FC ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _022553FA\n    add r0, r4, #0\n    bl ov03_02255C84\n    ldr r0, _02255400 ; =ov03_02255404\n    bl ov03_02254B4C\n    pop {r4, pc}\n    _022553FC: .word ov03_022598A0\n    _02255400: .word ov03_02255404"
    );
    #endif
}

void ov03_02255404(void) {
    /* Original at 0x02255404 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov03_02254C9C\n    add r0, r4, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0225542C\n    add r0, r4, #0\n    bl ov03_02255CA0\n    cmp r0, #1\n    bne _022554D0\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0xa8\n    str r1, [r0]\n    add r0, r4, #0\n    bl ov03_02255CD0\n    cmp r0, #0\n    beq _022554D0\n    bl sub_02037700\n    cmp r0, #0\n    bne _0225544C\n    bl sub_02037454\n    add r1, r4, #0\n    add r1, #0x90\n    ldrb r1, [r1]\n    cmp r1, r0\n    beq _0225545A\n    add r0, r4, #0\n    bl ov03_02255CE4\n    ldr r0, _022554D4 ; =ov03_022554E0\n    bl ov03_02254B4C\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x68]\n    bl ov01_021F6AEC\n    cmp r0, #6\n    bne _022554D0\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _022554B0\n    add r4, #0x91\n    ldrb r0, [r4]\n    cmp r0, #8\n    beq _0225547A\n    cmp r0, #0x28\n    bne _022554A2\n    mov r4, #1\n    bl sub_02037454\n    cmp r0, #1\n    ble _022554A2\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    bne _02255498\n    ldr r0, _022554D4 ; =ov03_022554E0\n    bl ov03_02254B4C\n    pop {r3, r4, r5, pc}\n    add r4, r4, #1\n    bl sub_02037454\n    cmp r4, r0\n    blt _02255484\n    mov r0, #0xa\n    bl sub_02037AC0\n    ldr r0, _022554D8 ; =ov03_022556BC\n    bl ov03_02254B4C\n    pop {r3, r4, r5, pc}\n    cmp r0, #1\n    bne _022554D0\n    mov r0, #1\n    bl sub_02037EC0\n    bl ov03_02254B44\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    ldr r0, _022554DC ; =ov03_022598A0\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0x88\n    str r1, [r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _022554D4: .word ov03_022554E0\n    _022554D8: .word ov03_022556BC\n    _022554DC: .word ov03_022598A0"
    );
    #endif
}

void ov03_022554E0(void) {
    /* Original at 0x022554E0 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x54\n    ldr r5, _02255540 ; =ov03_022592CC\n    add r4, r1, #0\n    add r3, sp, #0\n    mov r2, #0x29\n    ldrh r1, [r5]\n    add r5, r5, #2\n    strh r1, [r3]\n    add r3, r3, #2\n    sub r2, r2, #1\n    bne _022554EC\n    add r1, r4, #0\n    bl ov03_0225574C\n    ldr r0, _02255544 ; =ov03_022598A0\n    ldr r1, [r0]\n    add r0, r1, #0\n    add r0, #0x91\n    ldrb r0, [r0]\n    cmp r0, #8\n    bne _0225551A\n    add r1, #0x92\n    ldrb r0, [r1]\n    mov r1, #0\n    add r0, #0x89\n    bl ov03_02253E20\n    b _0225552C\n    add r0, r4, #0\n    add r0, #0x91\n    ldrb r0, [r0]\n    lsl r1, r0, #1\n    add r0, sp, #0\n    ldrh r0, [r0, r1]\n    mov r1, #0\n    bl ov03_02253E20\n    bl sub_02058284\n    ldr r0, _02255548 ; =ov03_0225554C\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    add sp, #0x54\n    pop {r4, r5, pc}\n    nop\n    _02255540: .word ov03_022592CC\n    _02255544: .word ov03_022598A0\n    _02255548: .word ov03_0225554C"
    );
    #endif
}

void ov03_0225554C(void) {
    /* Original at 0x0225554C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02255584 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02255582\n    ldr r0, _02255588 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _02255572\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _02255582\n    ldr r0, _02255584 ; =ov03_022598A0\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0x88\n    str r1, [r0]\n    add r0, r4, #0\n    bl SysTask_Destroy\n    pop {r4, pc}\n    _02255584: .word ov03_022598A0\n    _02255588: .word gSystem"
    );
    #endif
}

void ov03_0225558C(void) {
    /* Original at 0x0225558C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x54\n    ldr r3, _022555E8 ; =ov03_022593C2\n    add r4, r1, #0\n    add r5, r0, #0\n    add r2, sp, #0\n    mov r1, #0x29\n    ldrh r0, [r3]\n    add r3, r3, #2\n    strh r0, [r2]\n    add r2, r2, #2\n    sub r1, r1, #1\n    bne _0225559A\n    add r0, r4, #0\n    bl ov03_02254C9C\n    bl sub_020347A0\n    cmp r0, #1\n    ble _022555CE\n    add r4, #0x91\n    ldrb r0, [r4]\n    lsl r1, r0, #1\n    add r0, sp, #0\n    ldrh r0, [r0, r1]\n    mov r1, #0\n    bl ov03_02253E20\n    ldr r0, _022555EC ; =ov03_022555F4\n    bl ov03_02254B4C\n    add sp, #0x54\n    pop {r4, r5, pc}\n    bl ov03_02254B44\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    ldr r0, _022555F0 ; =ov03_022598A0\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0x88\n    str r1, [r0]\n    add sp, #0x54\n    pop {r4, r5, pc}\n    _022555E8: .word ov03_022593C2\n    _022555EC: .word ov03_022555F4\n    _022555F0: .word ov03_022598A0"
    );
    #endif
}

void ov03_022555F4(void) {
    /* Original at 0x022555F4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    bl ov03_02254C9C\n    ldr r0, [r4, #0x5c]\n    bl ListMenu_ProcessInput\n    ldr r0, _02255624 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02255620\n    add r0, r4, #0\n    bl ov03_02255C84\n    ldr r0, _02255628 ; =ov03_0225562C\n    bl ov03_02254B4C\n    pop {r4, pc}\n    nop\n    _02255624: .word ov03_022598A0\n    _02255628: .word ov03_0225562C"
    );
    #endif
}

void ov03_0225562C(void) {
    /* Original at 0x0225562C */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov03_02254C9C\n    add r0, r4, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02255654\n    add r0, r4, #0\n    bl ov03_02255CA0\n    cmp r0, #1\n    bne _022556B2\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0xa8\n    str r1, [r0]\n    add r0, r4, #0\n    bl ov03_02255CD0\n    cmp r0, #0\n    beq _022556B2\n    bl sub_02037700\n    cmp r0, #0\n    beq _02255678\n    add r0, r4, #0\n    bl ov03_02255CE4\n    bl ov03_02254BEC\n    ldr r0, _022556B4 ; =ov03_0225530C\n    bl ov03_02254B4C\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x68]\n    bl ov01_021F6AEC\n    cmp r0, #6\n    bne _022556B2\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _022556A4\n    bl ov03_02254B44\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    ldr r0, _022556B8 ; =ov03_022598A0\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0x88\n    str r1, [r0]\n    pop {r3, r4, r5, pc}\n    cmp r0, #1\n    bne _022556B2\n    bl ov03_02254BEC\n    ldr r0, _022556B4 ; =ov03_0225530C\n    bl ov03_02254B4C\n    pop {r3, r4, r5, pc}\n    _022556B4: .word ov03_0225530C\n    _022556B8: .word ov03_022598A0"
    );
    #endif
}

void ov03_022556BC(void) {
    /* Original at 0x022556BC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02037700\n    cmp r0, #0\n    bne _022556D8\n    bl sub_02037454\n    add r1, r4, #0\n    add r1, #0x90\n    ldrb r1, [r1]\n    cmp r1, r0\n    beq _022556E0\n    ldr r0, _02255710 ; =ov03_022554E0\n    bl ov03_02254B4C\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov03_02254C9C\n    ldr r0, [r4, #0x5c]\n    bl ListMenu_ProcessInput\n    mov r0, #0xa\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0225570C\n    bl sub_02037A10\n    cmp r0, #0\n    beq _0225570C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_0225574C\n    add r0, r4, #0\n    bl ov03_02255B44\n    pop {r3, r4, r5, pc}\n    nop\n    _02255710: .word ov03_022554E0"
    );
    #endif
}

void ov03_02255714(void) {
    /* Original at 0x02255714 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    bl ov03_02254C9C\n    ldr r0, [r4, #0x5c]\n    bl ListMenu_ProcessInput\n    ldr r0, _02255744 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02255740\n    add r0, r4, #0\n    bl ov03_02255C84\n    ldr r0, _02255748 ; =ov03_02255078\n    bl ov03_02254B4C\n    pop {r4, pc}\n    nop\n    _02255744: .word ov03_022598A0\n    _02255748: .word ov03_02255078"
    );
    #endif
}

void ov03_0225574C(void) {
    /* Original at 0x0225574C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _022557C8 ; =ov03_022598A0\n    add r4, r1, #0\n    ldr r0, [r0]\n    mov r1, #0xf\n    add r0, #0x40\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    add r0, #0x20\n    mov r1, #0\n    bl sub_0200E5D4\n    ldr r0, [r4, #0x64]\n    bl ListMenuItems_Delete\n    mov r1, #0\n    ldr r0, [r4, #0x5c]\n    add r2, r1, #0\n    bl DestroyListMenu\n    mov r0, #0\n    str r0, [r4, #0x5c]\n    add r0, r4, #0\n    add r0, #0x20\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    add r0, #0x20\n    bl RemoveWindow\n    add r0, r4, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _022557BC\n    ldr r0, _022557C8 ; =ov03_022598A0\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x30\n    bl sub_0200E5D4\n    ldr r0, _022557C8 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x30\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _022557C8 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x30\n    bl RemoveWindow\n    mov r0, #0\n    add r4, #0x97\n    strb r0, [r4]\n    cmp r5, #0\n    beq _022557C6\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    _022557C8: .word ov03_022598A0"
    );
    #endif
}

void ov03_022557CC(void) {
    /* Original at 0x022557CC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #1\n    bl sub_02034818\n    add r2, r0, #0\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    bl BufferPlayersName\n    mov r0, #0x45\n    mov r1, #1\n    bl ov03_02253E20\n    ldr r0, _022557FC ; =ov03_02254D64\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r0, _02255800 ; =ov03_02255860\n    bl ov03_02254B4C\n    pop {r4, pc}\n    nop\n    _022557FC: .word ov03_02254D64\n    _02255800: .word ov03_02255860"
    );
    #endif
}

void ov03_02255804(void) {
    /* Original at 0x02255804 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02255854 ; =ov03_022598A0\n    add r4, r0, #0\n    add r0, #0x8e\n    ldr r1, [r1]\n    ldrh r0, [r0]\n    ldr r1, [r1, #0x7c]\n    bl sub_020351DC\n    ldr r2, _02255854 ; =ov03_022598A0\n    ldr r0, [r4, #0x58]\n    ldr r2, [r2]\n    mov r1, #1\n    ldr r2, [r2, #0x7c]\n    bl BufferPlayersName\n    mov r0, #4\n    mov r1, #1\n    bl ov03_02253E20\n    bl sub_02037454\n    add r1, r4, #0\n    add r1, #0x90\n    strb r0, [r1]\n    ldr r0, _02255858 ; =ov03_02254D64\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r0, _0225585C ; =ov03_02255860\n    bl ov03_02254B4C\n    ldr r0, _02255854 ; =ov03_022598A0\n    mov r1, #0x5a\n    ldr r0, [r0]\n    add r0, #0x96\n    strb r1, [r0]\n    pop {r4, pc}\n    nop\n    _02255854: .word ov03_022598A0\n    _02255858: .word ov03_02254D64\n    _0225585C: .word ov03_02255860"
    );
    #endif
}

void ov03_02255860(void) {
    /* Original at 0x02255860 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02255880\n    bl sub_02037454\n    add r4, #0x90\n    ldrb r1, [r4]\n    cmp r1, r0\n    beq _02255880\n    ldr r0, _022558B8 ; =ov03_02255A00\n    bl ov03_02254B4C\n    pop {r4, pc}\n    bl ov03_02255C80\n    cmp r0, #0\n    bne _02255890\n    bl sub_02037700\n    cmp r0, #0\n    beq _02255898\n    ldr r0, _022558B8 ; =ov03_02255A00\n    bl ov03_02254B4C\n    pop {r4, pc}\n    ldr r0, _022558BC ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _022558B4\n    mov r0, #0xa\n    bl sub_02037AC0\n    ldr r0, _022558C0 ; =ov03_022558C4\n    bl ov03_02254B4C\n    pop {r4, pc}\n    nop\n    _022558B8: .word ov03_02255A00\n    _022558BC: .word ov03_022598A0\n    _022558C0: .word ov03_022558C4"
    );
    #endif
}

void ov03_022558C4(void) {
    /* Original at 0x022558C4 */
    /* Requires manual decompilation - 135 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x54\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _022558EA\n    bl sub_02037454\n    add r1, r4, #0\n    add r1, #0x90\n    ldrb r1, [r1]\n    cmp r1, r0\n    beq _022558EA\n    ldr r0, _022559F4 ; =ov03_02255A00\n    bl ov03_02254B4C\n    b _0225597A\n    bl ov03_02255C80\n    cmp r0, #0\n    bne _022558FA\n    bl sub_02037700\n    cmp r0, #0\n    beq _02255904\n    ldr r0, _022559F4 ; =ov03_02255A00\n    bl ov03_02254B4C\n    add sp, #0x54\n    pop {r4, r5, pc}\n    mov r0, #0\n    bl sub_020373B4\n    cmp r0, #0\n    bne _02255918\n    ldr r0, _022559F4 ; =ov03_02255A00\n    bl ov03_02254B4C\n    add sp, #0x54\n    pop {r4, r5, pc}\n    mov r0, #0\n    mov r1, #5\n    bl sub_02037BA0\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _02255932\n    ldr r0, _022559F4 ; =ov03_02255A00\n    bl ov03_02254B4C\n    add sp, #0x54\n    pop {r4, r5, pc}\n    mov r0, #0xa\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0225597A\n    bl sub_02037A10\n    cmp r0, #0\n    beq _0225597A\n    ldr r0, _022559F8 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    bne _02255960\n    ldr r0, _022559F8 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl RemoveTextPrinter\n    bl sub_02037454\n    add r1, r4, #0\n    add r1, #0x90\n    strb r0, [r1]\n    add r0, r4, #0\n    bl ov03_02255B44\n    add r0, r5, #0\n    bl SysTask_Destroy\n    add sp, #0x54\n    pop {r4, r5, pc}\n    ldr r2, _022559F8 ; =ov03_022598A0\n    ldr r0, [r2]\n    add r1, r0, #0\n    add r1, #0x96\n    ldrb r1, [r1]\n    cmp r1, #0\n    beq _022559F0\n    add r1, r0, #0\n    add r1, #0x96\n    ldrb r1, [r1]\n    add r0, #0x96\n    sub r1, r1, #1\n    strb r1, [r0]\n    ldr r0, [r2]\n    add r1, r0, #0\n    add r1, #0x96\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _022559F0\n    ldr r5, _022559FC ; =ov03_02259228\n    add r3, sp, #0\n    mov r2, #0x29\n    ldrh r1, [r5]\n    add r5, r5, #2\n    strh r1, [r3]\n    add r3, r3, #2\n    sub r2, r2, #1\n    bne _022559A6\n    add r1, r0, #0\n    add r1, #0x91\n    ldrb r1, [r1]\n    cmp r1, #8\n    bne _022559CC\n    add r0, #0x92\n    ldrb r0, [r0]\n    mov r1, #0\n    add r0, #0x84\n    bl ov03_02253E20\n    add sp, #0x54\n    pop {r4, r5, pc}\n    cmp r1, #0x28\n    bne _022559E0\n    add r0, #0x92\n    ldrb r0, [r0]\n    mov r1, #0\n    add r0, #0xa0\n    bl ov03_02253E20\n    add sp, #0x54\n    pop {r4, r5, pc}\n    add r4, #0x91\n    ldrb r0, [r4]\n    lsl r1, r0, #1\n    add r0, sp, #0\n    ldrh r0, [r0, r1]\n    mov r1, #0\n    bl ov03_02253E20\n    add sp, #0x54\n    pop {r4, r5, pc}\n    _022559F4: .word ov03_02255A00\n    _022559F8: .word ov03_022598A0\n    _022559FC: .word ov03_02259228"
    );
    #endif
}

void ov03_02255A00(void) {
    /* Original at 0x02255A00 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02255A24 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02255A20\n    mov r0, #0\n    add r1, r0, #0\n    bl ov03_02253E20\n    ldr r0, _02255A28 ; =ov03_02255A2C\n    bl ov03_02254B4C\n    pop {r3, pc}\n    nop\n    _02255A24: .word ov03_022598A0\n    _02255A28: .word ov03_02255A2C"
    );
    #endif
}

void ov03_02255A2C(void) {
    /* Original at 0x02255A2C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02255A68 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02255A66\n    ldr r0, _02255A6C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _02255A52\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _02255A66\n    add r0, r4, #0\n    bl SysTask_Destroy\n    bl ov03_02254B44\n    ldr r0, _02255A68 ; =ov03_022598A0\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0x88\n    str r1, [r0]\n    pop {r4, pc}\n    _02255A68: .word ov03_022598A0\n    _02255A6C: .word gSystem"
    );
    #endif
}

void ov03_02255A70(void) {
    /* Original at 0x02255A70 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02255AA8 ; =ov03_022598A0\n    add r4, r0, #0\n    add r0, #0x8e\n    ldr r1, [r1]\n    ldrh r0, [r0]\n    ldr r1, [r1, #0x7c]\n    bl sub_020351DC\n    ldr r2, _02255AA8 ; =ov03_022598A0\n    ldr r0, [r4, #0x58]\n    ldr r2, [r2]\n    mov r1, #1\n    ldr r2, [r2, #0x7c]\n    bl BufferPlayersName\n    mov r0, #5\n    mov r1, #1\n    bl ov03_02253E20\n    bl sub_02058180\n    ldr r0, _02255AAC ; =ov03_02255AB0\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    pop {r4, pc}\n    _02255AA8: .word ov03_022598A0\n    _02255AAC: .word ov03_02255AB0"
    );
    #endif
}

void ov03_02255AB0(void) {
    /* Original at 0x02255AB0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02255AD8 ; =ov03_022598A0\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02255AD6\n    bl sub_02058180\n    add r0, r4, #0\n    bl ov03_022542C8\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    _02255AD8: .word ov03_022598A0"
    );
    #endif
}

void ov03_02255ADC(void) {
    /* Original at 0x02255ADC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_02058180\n    mov r4, #0\n    add r0, r4, #0\n    bl sub_020346E8\n    add r4, r4, #1\n    cmp r4, #8\n    blt _02255AE6\n    ldr r0, _02255B00 ; =ov03_02255B04\n    add r1, r5, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    pop {r3, r4, r5, pc}\n    nop\n    _02255B00: .word ov03_02255B04"
    );
    #endif
}

void ov03_02255B04(void) {
    /* Original at 0x02255B04 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02255B3C ; =ov03_022598A0\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r0, #0x94\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _02255B38\n    ldr r0, _02255B40 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _02255B2C\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _02255B38\n    add r0, r4, #0\n    bl ov03_022542C8\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    nop\n    _02255B3C: .word ov03_022598A0\n    _02255B40: .word gSystem"
    );
    #endif
}

void ov03_02255B44(void) {
    /* Original at 0x02255B44 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    bl sub_02037EC0\n    ldr r0, _02255B6C ; =ov03_022598A0\n    mov r1, #2\n    ldr r0, [r0]\n    add r0, #0x88\n    str r1, [r0]\n    mov r0, #1\n    add r1, r0, #0\n    bl sub_020398D4\n    bl sub_02034434\n    mov r0, #1\n    bl sub_020356C0\n    pop {r3, pc}\n    nop\n    _02255B6C: .word ov03_022598A0"
    );
    #endif
}

void ov03_02255B70(void) {
    /* Original at 0x02255B70 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02255B7C ; =ov03_022598A0\n    ldr r3, _02255B80 ; =sub_0203775C\n    ldr r0, [r0]\n    add r0, #0x91\n    ldrb r0, [r0]\n    bx r3\n    _02255B7C: .word ov03_022598A0\n    _02255B80: .word sub_0203775C"
    );
    #endif
}

void ov03_02255B84(void) {
    /* Original at 0x02255B84 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02255B90 ; =ov03_022598A0\n    ldr r3, _02255B94 ; =sub_0203774C\n    ldr r0, [r0]\n    add r0, #0x91\n    ldrb r0, [r0]\n    bx r3\n    _02255B90: .word ov03_022598A0\n    _02255B94: .word sub_0203774C"
    );
    #endif
}

void ov03_02255B98(void) {
    /* Original at 0x02255B98 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02255BAC ; =ov03_022598A0\n    ldr r2, [r0]\n    add r0, r2, #0\n    add r0, #0x92\n    add r2, #0x93\n    ldrb r1, [r0]\n    ldrb r0, [r2]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bx lr\n    _02255BAC: .word ov03_022598A0"
    );
    #endif
}

void ov03_02255BB0(void) {
    /* Original at 0x02255BB0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov03_02253F74\n    ldr r0, _02255BE8 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x91\n    strb r4, [r0]\n    sub r0, r4, #3\n    cmp r0, #1\n    bhi _02255BD2\n    mov r0, #0\n    add r5, #0xa4\n    str r0, [r5]\n    ldr r0, _02255BE8 ; =ov03_022598A0\n    ldr r1, [r0]\n    add r1, #0x92\n    strb r6, [r1]\n    ldr r1, [r0]\n    add r1, #0x93\n    strb r7, [r1]\n    ldr r0, [r0]\n    bl ov03_022540E8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02255BE8: .word ov03_022598A0"
    );
    #endif
}

void ov03_02255BEC(void) {
    /* Original at 0x02255BEC */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02255BF4 ; =ov03_022598A0\n    ldr r3, _02255BF8 ; =ov03_022542C8\n    ldr r0, [r0]\n    bx r3\n    _02255BF4: .word ov03_022598A0\n    _02255BF8: .word ov03_022542C8"
    );
    #endif
}

void ov03_02255BFC(void) {
    ov03_02254054();
}

void ov03_02255C18(void) {
    /* Original at 0x02255C18 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov03_02253F74\n    ldr r0, _02255C50 ; =ov03_022598A0\n    ldr r0, [r0]\n    add r0, #0x91\n    strb r4, [r0]\n    sub r0, r4, #3\n    cmp r0, #1\n    bhi _02255C3A\n    mov r0, #0\n    add r5, #0xa4\n    str r0, [r5]\n    ldr r0, _02255C50 ; =ov03_022598A0\n    ldr r1, [r0]\n    add r1, #0x92\n    strb r6, [r1]\n    ldr r1, [r0]\n    add r1, #0x93\n    strb r7, [r1]\n    ldr r0, [r0]\n    bl ov03_02254B2C\n    pop {r3, r4, r5, r6, r7, pc}\n    _02255C50: .word ov03_022598A0"
    );
    #endif
}

void ov03_02255C54(void) {
    /* Original at 0x02255C54 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02255C5C ; =ov03_022598A0\n    ldr r3, _02255C60 ; =ov03_02254B58\n    ldr r0, [r0]\n    bx r3\n    _02255C5C: .word ov03_022598A0\n    _02255C60: .word ov03_02254B58"
    );
    #endif
}

void ov03_02255C64(void) {
    ov03_02254054();
}

u8 ov03_02255C80(void) {
    return 0;
}

void ov03_02255C84(void) {
    ov01_021F6A9C(0, 3, 0);
}

void ov03_02255CA0(void) {
    /* Original at 0x02255CA0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x68]\n    bl ov01_021F6B00\n    add r4, r0, #0\n    ldr r0, [r5, #0x68]\n    bl ov01_021F6B10\n    cmp r4, #3\n    bne _02255CCC\n    cmp r0, #1\n    bne _02255CCC\n    ldr r0, [r5, #0x68]\n    mov r1, #3\n    add r5, #0xa4\n    add r2, r1, #0\n    add r3, r5, #0\n    bl ov01_021F6ABC\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov03_02255CD0(void) {
    ov01_021F6AEC(0, 1);
}

void ov03_02255CE4(void) {
    ov01_021F6ABC(3, 0xb);
}

void ov03_02255CF8(void) {
    /* Original at 0x02255CF8 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x54\n    add r4, r1, #0\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _02255D32\n    add r0, r5, #0\n    add r0, #0x54\n    bl InitWindow\n    ldr r0, [r5, #0x10]\n    add r1, r5, #0\n    ldr r0, [r0, #8]\n    add r1, #0x54\n    mov r2, #3\n    bl sub_0205B514\n    ldr r0, [r5, #0x10]\n    ldr r0, [r0, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0x54\n    bl sub_0205B564\n    b _02255D3A\n    add r0, r5, #0\n    add r0, #0x54\n    bl sub_0205B5A8\n    ldr r0, [r5, #0x68]\n    ldr r2, [r5, #0x14]\n    add r1, r4, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #0x64]\n    ldr r1, [r5, #0x18]\n    ldr r2, [r5, #0x14]\n    bl StringExpandPlaceholders\n    ldr r0, [r5, #0x10]\n    ldr r0, [r0, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    add r2, r0, #0\n    add r0, r5, #0\n    ldr r1, [r5, #0x18]\n    add r0, #0x54\n    mov r3, #1\n    bl sub_0205B5B4\n    str r0, [r5, #0x74]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov03_02255D68(void) {
    /* Original at 0x02255D68 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #0\n    beq _02255D80\n    add r0, #0x54\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    add r0, #0x54\n    bl ClearWindowTilemapAndCopyToVram\n    add r4, #0x54\n    add r0, r4, #0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov03_02255D8C(void) {
    /* Original at 0x02255D8C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    ldr r2, [r4, #0x1c]\n    ldr r0, [r0, #0xc]\n    mov r3, #4\n    bl sub_0202921C\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r1, #0\n    ldr r0, [r4, #0x64]\n    ldr r2, [r4, #0x1c]\n    add r3, r1, #0\n    bl BufferString\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov03_02255DB8(void) {
    /* Original at 0x02255DB8 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    add r4, r5, #0\n    ldr r0, [r0, #0xc]\n    mov r1, #0\n    add r4, #0x34\n    bl Save_LinkBattleRuleset_GetByIndex\n    mov r6, #5\n    cmp r0, #0\n    beq _02255DD4\n    add r6, r6, #1\n    add r0, r4, #0\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _02255E66\n    add r0, r6, #2\n    mov r1, #4\n    bl ListMenuItems_New\n    str r0, [r5, #8]\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    add r0, r6, #2\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    str r3, [sp, #0x10]\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    ldr r0, [r0, #8]\n    mov r2, #3\n    bl AddWindowParameterized\n    add r0, r5, #0\n    ldr r2, _02255EB4 ; =0x000003D9\n    add r0, #0x34\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    ldr r0, [r5, #8]\n    ldr r1, [r5, #0x68]\n    mov r2, #0x8a\n    mov r3, #0xc\n    bl ListMenuItems_AppendFromMsgData\n    mov r4, #0\n    cmp r6, #0\n    ble _02255E58\n    mov r7, #0x80\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_02255D8C\n    ldr r0, [r5, #0x68]\n    ldr r2, [r5, #0x1c]\n    add r1, r7, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #0x64]\n    ldr r1, [r5, #0x20]\n    ldr r2, [r5, #0x1c]\n    bl StringExpandPlaceholders\n    ldr r0, [r5, #8]\n    ldr r1, [r5, #0x20]\n    add r2, r4, #0\n    bl ListMenuItems_AddItem\n    add r4, r4, #1\n    cmp r4, r6\n    blt _02255E2C\n    mov r2, #0x81\n    add r3, r2, #0\n    ldr r0, [r5, #8]\n    ldr r1, [r5, #0x68]\n    sub r3, #0x83\n    bl ListMenuItems_AppendFromMsgData\n    ldr r4, _02255EB8 ; =ov03_0225943C\n    add r3, sp, #0x14\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r6, #2\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    add r0, sp, #0x14\n    strh r1, [r0, #0x10]\n    strh r1, [r0, #0x12]\n    ldr r0, [r5, #8]\n    mov r1, #0\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r0, #0x34\n    str r0, [sp, #0x20]\n    add r0, r2, #0\n    add r2, r5, #0\n    str r5, [sp, #0x30]\n    add r2, #0x78\n    ldrh r2, [r2]\n    mov r3, #4\n    bl ListMenuInit\n    str r0, [r5]\n    add r5, #0x34\n    add r0, r5, #0\n    bl CopyWindowToVram\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02255EB4: .word 0x000003D9\n    _02255EB8: .word ov03_0225943C"
    );
    #endif
}

void ov03_02255EBC(void) {
    /* Original at 0x02255EBC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _02255EF6\n    mov r1, #0\n    add r2, r1, #0\n    bl DestroyListMenu\n    add r0, r4, #0\n    add r0, #0x34\n    mov r1, #1\n    bl sub_0200E5D4\n    add r1, r4, #0\n    add r1, #0x38\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r4, #0\n    add r0, #0x34\n    bl RemoveWindow\n    ldr r0, [r4, #8]\n    bl ListMenuItems_Delete\n    mov r0, #0\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov03_02255EF8(void) {
    /* Original at 0x02255EF8 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl ListMenu_ProcessInput\n    add r4, r0, #0\n    add r2, r5, #0\n    ldr r0, [r5]\n    mov r1, #0\n    add r2, #0x78\n    bl ListMenuGetScrollAndRow\n    add r0, r5, #0\n    add r0, #0x80\n    ldrh r6, [r0]\n    add r1, r5, #0\n    ldr r0, [r5]\n    add r1, #0x80\n    bl ListMenuGetCurrentItemArrayId\n    add r0, r5, #0\n    add r0, #0x80\n    ldrh r0, [r0]\n    cmp r6, r0\n    beq _02255F30\n    ldr r0, _02255F94 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _02255F60\n    add r0, r0, #1\n    cmp r4, r0\n    beq _02255F44\n    cmp r4, #0xc\n    beq _02255F48\n    b _02255F7A\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, _02255F94 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    add r0, #0xa4\n    str r1, [r0]\n    add r0, r5, #0\n    bl ov03_02255EBC\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    ldr r0, _02255F94 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    add r0, #0xa4\n    str r1, [r0]\n    add r0, r5, #0\n    bl ov03_02255EBC\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    ldr r0, _02255F94 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    ldr r0, [r0, #0xc]\n    bl sub_020291E8\n    ldr r1, [r5, #0x10]\n    add r1, #0xa4\n    str r0, [r1]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _02255F94: .word 0x000005DC"
    );
    #endif
}

void ov03_02255F98(void) {
    /* Original at 0x02255F98 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    mov r0, #3\n    mov r1, #4\n    ldr r4, _0225603C ; =ov03_02259838\n    bl ListMenuItems_New\n    str r0, [r5, #0xc]\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #9\n    str r0, [sp, #4]\n    mov r0, #6\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    ldr r0, _02256040 ; =0x00000201\n    add r1, r5, #0\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x10]\n    add r1, #0x44\n    ldr r0, [r0, #8]\n    mov r2, #3\n    mov r3, #0x16\n    bl AddWindowParameterized\n    add r0, r5, #0\n    ldr r2, _02256044 ; =0x000003D9\n    add r0, #0x44\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    mov r6, #0\n    ldr r0, [r5, #0xc]\n    ldr r1, [r5, #0x68]\n    ldr r2, [r4]\n    ldr r3, [r4, #4]\n    bl ListMenuItems_AppendFromMsgData\n    add r6, r6, #1\n    add r4, #8\n    cmp r6, #3\n    blt _02255FDE\n    ldr r4, _02256048 ; =ov03_0225943C\n    add r3, sp, #0x14\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    mov r1, #3\n    add r0, sp, #0x14\n    strh r1, [r0, #0x10]\n    strh r1, [r0, #0x12]\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    add r0, #0x44\n    str r0, [sp, #0x20]\n    add r0, r2, #0\n    add r2, r5, #0\n    str r5, [sp, #0x30]\n    add r2, #0x7a\n    ldrh r2, [r2]\n    mov r3, #4\n    bl ListMenuInit\n    str r0, [r5, #4]\n    add r5, #0x44\n    add r0, r5, #0\n    bl CopyWindowToVram\n    add sp, #0x34\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0225603C: .word ov03_02259838\n    _02256040: .word 0x00000201\n    _02256044: .word 0x000003D9\n    _02256048: .word ov03_0225943C"
    );
    #endif
}

void ov03_0225604C(void) {
    /* Original at 0x0225604C */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    bl ListMenu_ProcessInput\n    add r4, r0, #0\n    add r2, r5, #0\n    ldr r0, [r5, #4]\n    mov r1, #0\n    add r2, #0x7a\n    bl ListMenuGetScrollAndRow\n    add r0, r5, #0\n    add r0, #0x82\n    ldrh r6, [r0]\n    add r1, r5, #0\n    ldr r0, [r5, #4]\n    add r1, #0x82\n    bl ListMenuGetCurrentItemArrayId\n    add r0, r5, #0\n    add r0, #0x82\n    ldrh r0, [r0]\n    cmp r6, r0\n    beq _02256084\n    ldr r0, _022560E8 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _02256096\n    add r0, r0, #1\n    cmp r4, r0\n    bne _022560A2\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, _022560E8 ; =0x000005DC\n    bl PlaySE\n    mov r4, #0\n    mvn r4, r4\n    b _022560AE\n    ldr r0, _022560E8 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    bl ov03_02255EBC\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _022560E4\n    mov r1, #0\n    add r2, r1, #0\n    bl DestroyListMenu\n    add r0, r5, #0\n    add r0, #0x44\n    mov r1, #1\n    bl sub_0200E5D4\n    add r1, r5, #0\n    add r1, #0x48\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x44]\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    add r0, #0x44\n    bl RemoveWindow\n    ldr r0, [r5, #0xc]\n    bl ListMenuItems_Delete\n    mov r0, #0\n    str r0, [r5, #4]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _022560E8: .word 0x000005DC"
    );
    #endif
}

void ov03_022560EC(void) {
    /* Original at 0x022560EC */
    /* Requires manual decompilation - 315 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    str r0, [sp, #0x14]\n    ldr r6, [r0, #0x64]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xb6\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0x30]\n    mov r0, #0xb4\n    mov r1, #4\n    bl String_New\n    str r0, [sp, #0x2c]\n    mov r0, #0xb4\n    mov r1, #4\n    bl String_New\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x14]\n    mov r2, #3\n    str r0, [sp, #0x24]\n    add r0, #0x24\n    str r0, [sp, #0x24]\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0x13\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x24]\n    ldr r0, [r0, #0x10]\n    mov r3, #4\n    ldr r0, [r0, #8]\n    bl AddWindowParameterized\n    ldr r0, [sp, #0x24]\n    ldr r2, _022563B8 ; =0x000003D9\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    ldr r0, [sp, #0x24]\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x14]\n    add r1, r0, #0\n    add r1, #0x78\n    ldrh r1, [r1]\n    sub r1, r1, #1\n    bl ov03_02255D8C\n    ldr r0, [sp, #0x30]\n    ldr r2, [sp, #0x2c]\n    mov r1, #0x71\n    bl ReadMsgDataIntoString\n    ldr r1, [sp, #0x28]\n    ldr r2, [sp, #0x2c]\n    add r0, r6, #0\n    bl StringExpandPlaceholders\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    ldr r2, [sp, #0x28]\n    mov r3, #0x39\n    str r1, [sp, #8]\n    bl AddTextPrinterParameterized\n    mov r5, #0\n    mov r4, #0x10\n    mov r7, #0xff\n    add r1, r5, #0\n    ldr r0, [sp, #0x30]\n    ldr r2, [sp, #0x2c]\n    add r1, #0x5d\n    bl ReadMsgDataIntoString\n    str r4, [sp]\n    str r7, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x24]\n    ldr r2, [sp, #0x2c]\n    mov r1, #0\n    mov r3, #2\n    bl AddTextPrinterParameterized\n    add r5, r5, #1\n    add r4, #0xf\n    cmp r5, #9\n    blt _02256192\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, _022563BC ; =ov03_0225982C\n    ldr r7, _022563C0 ; =ov03_02259820\n    str r0, [sp, #0x20]\n    mov r0, #0x10\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x14]\n    ldrb r1, [r7]\n    ldr r0, [r0, #0x10]\n    add r0, #0xa4\n    ldr r0, [r0]\n    bl LinkBattleRuleset_GetRuleValue\n    add r4, r0, #0\n    ldr r0, [sp, #0x20]\n    ldrb r5, [r0]\n    ldrb r0, [r7]\n    cmp r0, #0xb\n    bls _022561E4\n    b _02256348\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022561F0: ; jump table\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    add r2, r4, #0\n    mov r3, #1\n    bl BufferIntegerAsString\n    b _02256348\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    add r2, r4, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    b _02256348\n    cmp r4, #0\n    bne _0225623A\n    mov r5, #0x72\n    b _02256348\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    add r2, r4, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    b _02256348\n    cmp r4, #0\n    ldr r0, _022563C4 ; =0x00002710\n    blt _0225626A\n    mul r0, r4\n    mov r1, #0xfe\n    bl _s32_div_f\n    add r0, r0, #5\n    mov r1, #0xa\n    bl _s32_div_f\n    add r4, r0, #0\n    b _0225627E\n    neg r1, r4\n    mul r0, r1\n    mov r1, #0xfe\n    bl _s32_div_f\n    add r0, r0, #5\n    mov r1, #0xa\n    bl _s32_div_f\n    neg r4, r0\n    add r0, r4, #0\n    mov r1, #0xc\n    bl _s32_div_f\n    bl abs\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    mov r3, #2\n    bl BufferIntegerAsString\n    add r0, r4, #0\n    mov r1, #0xc\n    bl _s32_div_f\n    add r0, r1, #0\n    bl abs\n    add r2, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #1\n    mov r3, #2\n    bl BufferIntegerAsString\n    cmp r4, #0\n    bne _022562C8\n    mov r5, #0x72\n    b _02256348\n    ble _02256348\n    add r5, r5, #1\n    b _02256348\n    cmp r4, #0\n    ldr r0, _022563C8 ; =0x00035D2E\n    blt _022562E6\n    add r1, r4, #0\n    mul r1, r0\n    ldr r0, _022563CC ; =0x0000C350\n    add r0, r1, r0\n    ldr r1, _022563D0 ; =0x000186A0\n    bl _s32_div_f\n    add r4, r0, #0\n    b _022562F8\n    neg r1, r4\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, _022563CC ; =0x0000C350\n    ldr r1, _022563D0 ; =0x000186A0\n    add r0, r2, r0\n    bl _s32_div_f\n    neg r4, r0\n    add r0, r4, #0\n    bl abs\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    cmp r4, #0\n    bne _0225631A\n    mov r5, #0x72\n    b _02256348\n    ble _02256348\n    add r5, r5, #1\n    b _02256348\n    ldr r0, [sp, #0x14]\n    mov r1, #0xd\n    ldr r0, [r0, #0x10]\n    add r0, #0xa4\n    ldr r0, [r0]\n    bl LinkBattleRuleset_GetRuleValue\n    mov r1, #2\n    lsl r1, r1, #0xe\n    cmp r0, r1\n    bne _0225633A\n    mov r5, #0x73\n    b _02256348\n    cmp r4, #0\n    bne _02256348\n    add r5, r5, #1\n    b _02256348\n    cmp r4, #0\n    bne _02256348\n    add r5, r5, #1\n    ldr r0, [sp, #0x30]\n    ldr r2, [sp, #0x2c]\n    add r1, r5, #0\n    bl ReadMsgDataIntoString\n    ldr r1, [sp, #0x28]\n    ldr r2, [sp, #0x2c]\n    add r0, r6, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    ldr r1, [sp, #0x28]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r4, r0, #0\n    ldr r0, [sp, #0x1c]\n    mov r3, #0xbf\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x24]\n    ldr r2, [sp, #0x28]\n    mov r1, #0\n    sub r3, r3, r4\n    bl AddTextPrinterParameterized\n    ldr r0, [sp, #0x20]\n    add r7, r7, #1\n    add r0, r0, #1\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x1c]\n    add r0, #0xf\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, #9\n    bge _0225639C\n    b _022561C8\n    ldr r0, [sp, #0x2c]\n    bl String_Delete\n    ldr r0, [sp, #0x28]\n    bl String_Delete\n    ldr r0, [sp, #0x30]\n    bl DestroyMsgData\n    ldr r0, [sp, #0x24]\n    bl CopyWindowToVram\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    _022563B8: .word 0x000003D9\n    _022563BC: .word ov03_0225982C\n    _022563C0: .word ov03_02259820\n    _022563C4: .word 0x00002710\n    _022563C8: .word 0x00035D2E\n    _022563CC: .word 0x0000C350\n    _022563D0: .word 0x000186A0"
    );
    #endif
}

void ov03_022563D4(void) {
    sub_0200E5D4(1);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x24)), r4);
    RemoveWindow(r4);
}

void ov03_022563F8(void) {
    /* Original at 0x022563F8 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    ldr r0, [r0, #0xc]\n    bl SaveArray_Party_Get\n    add r1, r0, #0\n    ldr r0, [r4, #0x10]\n    ldr r2, [r4, #0x6c]\n    add r0, #0xa4\n    ldr r0, [r0]\n    bl sub_02074CD0\n    cmp r0, #0\n    beq _02256422\n    cmp r0, #1\n    beq _02256462\n    cmp r0, #4\n    beq _02256428\n    b _02256462\n    add sp, #8\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, _022564A4 ; =0x000005F3\n    bl PlaySE\n    add r1, r4, #0\n    add r1, #0x78\n    ldrh r1, [r1]\n    add r0, r4, #0\n    sub r1, r1, #1\n    bl ov03_02255D8C\n    ldr r0, [r4, #0x10]\n    mov r1, #1\n    add r0, #0xa4\n    ldr r0, [r0]\n    bl LinkBattleRuleset_GetRuleValue\n    mov r1, #1\n    str r1, [sp]\n    str r1, [sp, #4]\n    add r2, r0, #0\n    ldr r0, [r4, #0x64]\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    add r0, r4, #0\n    mov r1, #0x7a\n    bl ov03_02255CF8\n    b _0225649C\n    ldr r0, _022564A4 ; =0x000005F3\n    bl PlaySE\n    add r1, r4, #0\n    add r1, #0x78\n    ldrh r1, [r1]\n    add r0, r4, #0\n    sub r1, r1, #1\n    bl ov03_02255D8C\n    ldr r0, [r4, #0x10]\n    mov r1, #3\n    add r0, #0xa4\n    ldr r0, [r0]\n    bl LinkBattleRuleset_GetRuleValue\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    ldr r0, [r4, #0x64]\n    mov r3, #3\n    bl BufferIntegerAsString\n    add r0, r4, #0\n    mov r1, #0x88\n    bl ov03_02255CF8\n    mov r0, #0\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _022564A4: .word 0x000005F3"
    );
    #endif
}

void ov03_022564A8(void) {
    /* Original at 0x022564A8 */
    /* Requires manual decompilation - 168 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r1, [r4, #0x7c]\n    cmp r1, #0xb\n    bls _022564C0\n    b _02256636\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022564CC: ; jump table\n    mov r1, #0x78\n    bl ov03_02255CF8\n    ldr r0, [r4, #0x7c]\n    add r0, r0, #1\n    str r0, [r4, #0x7c]\n    b _0225663A\n    ldr r0, [r4, #0x74]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #0\n    bne _02256502\n    b _0225663A\n    add r0, r4, #0\n    bl ov03_02255DB8\n    ldr r0, [r4, #0x7c]\n    add r0, r0, #1\n    str r0, [r4, #0x7c]\n    b _0225663A\n    bl ov03_02255EF8\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _02256528\n    ldr r0, [r4, #0x70]\n    mov r1, #2\n    strh r1, [r0]\n    mov r0, #0xb\n    str r0, [r4, #0x7c]\n    b _0225663A\n    cmp r0, #2\n    bne _02256538\n    ldr r0, [r4, #0x70]\n    mov r1, #3\n    strh r1, [r0]\n    mov r0, #0xb\n    str r0, [r4, #0x7c]\n    b _0225663A\n    cmp r0, #1\n    bne _0225663A\n    mov r0, #3\n    str r0, [r4, #0x7c]\n    b _0225663A\n    bl ov03_02255F98\n    ldr r0, [r4, #0x7c]\n    add r0, r0, #1\n    str r0, [r4, #0x7c]\n    b _0225663A\n    bl ov03_0225604C\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _02256560\n    mov r0, #2\n    str r0, [r4, #0x7c]\n    b _0225663A\n    cmp r0, #1\n    bne _0225656A\n    mov r0, #5\n    str r0, [r4, #0x7c]\n    b _0225663A\n    cmp r0, #2\n    bne _0225663A\n    mov r0, #7\n    str r0, [r4, #0x7c]\n    b _0225663A\n    bl ov03_022563F8\n    cmp r0, #0\n    beq _02256588\n    ldr r0, [r4, #0x70]\n    mov r1, #1\n    strh r1, [r0]\n    mov r0, #0xb\n    str r0, [r4, #0x7c]\n    b _0225663A\n    mov r0, #6\n    str r0, [r4, #0x7c]\n    b _0225663A\n    ldr r0, [r4, #0x74]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _0225663A\n    ldr r0, _02256640 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _0225663A\n    mov r0, #0\n    str r0, [r4, #0x7c]\n    b _0225663A\n    mov r1, #1\n    bl ov03_02255D68\n    add r0, r4, #0\n    bl ov03_022560EC\n    ldr r0, [r4, #0x7c]\n    add r0, r0, #1\n    str r0, [r4, #0x7c]\n    b _0225663A\n    ldr r1, _02256640 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #3\n    tst r1, r2\n    beq _0225663A\n    bl ov03_022563D4\n    add r0, r4, #0\n    mov r1, #0x78\n    bl ov03_02255CF8\n    add r0, r4, #0\n    bl ov03_02255DB8\n    mov r0, #9\n    str r0, [r4, #0x7c]\n    b _0225663A\n    ldr r0, [r4, #0x74]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl IsPrintFinished\n    cmp r0, #0\n    beq _0225663A\n    mov r0, #3\n    str r0, [r4, #0x7c]\n    b _0225663A\n    bl ov03_02255EBC\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_02255D68\n    ldr r0, [r4, #0x64]\n    bl MessageFormat_Delete\n    ldr r0, [r4, #0x68]\n    bl DestroyMsgData\n    ldr r0, [r4, #0x14]\n    bl String_Delete\n    ldr r0, [r4, #0x18]\n    bl String_Delete\n    ldr r0, [r4, #0x1c]\n    bl String_Delete\n    ldr r0, [r4, #0x20]\n    bl String_Delete\n    ldr r0, [r4, #0x6c]\n    bl PokedexData_UnloadAndDelete\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02256640: .word gSystem"
    );
    #endif
}

void ov03_02256644(void) {
    /* Original at 0x02256644 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xb\n    mov r1, #0x84\n    bl Heap_AllocAtEnd\n    mov r1, #0\n    mov r2, #0x84\n    add r4, r0, #0\n    bl MI_CpuFill8\n    mov r0, #0\n    str r0, [r4, #0x7c]\n    str r5, [r4, #0x10]\n    add r5, #0xa4\n    str r0, [r5]\n    mov r0, #4\n    bl MessageFormat_New\n    str r0, [r4, #0x64]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0x2e\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x68]\n    mov r0, #0xb4\n    mov r1, #4\n    bl String_New\n    str r0, [r4, #0x14]\n    mov r0, #0xb4\n    mov r1, #4\n    bl String_New\n    str r0, [r4, #0x18]\n    mov r0, #0xb4\n    mov r1, #4\n    bl String_New\n    str r0, [r4, #0x1c]\n    mov r0, #0xb4\n    mov r1, #4\n    bl String_New\n    str r0, [r4, #0x20]\n    mov r0, #0xb\n    bl PokedexData_CreateAndLoad\n    str r0, [r4, #0x6c]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov03_022566B0(void) {
    /* Original at 0x022566B0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl TaskManager_GetFieldSystem\n    bl ov03_02256644\n    add r2, r0, #0\n    ldr r1, _022566CC ; =ov03_022564A8\n    add r0, r5, #0\n    str r4, [r2, #0x70]\n    bl TaskManager_Call\n    pop {r3, r4, r5, pc}\n    _022566CC: .word ov03_022564A8"
    );
    #endif
}

void ov03_022566D0(void) {
    /* Original at 0x022566D0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0xb4\n    mov r1, #4\n    add r7, r2, #0\n    bl String_New\n    add r4, r0, #0\n    ldr r0, [r5, #0xc]\n    add r1, r7, #0\n    add r2, r4, #0\n    mov r3, #4\n    bl sub_0202921C\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    mov r1, #0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r2, r4, #0\n    add r3, r1, #0\n    bl BufferString\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov03_02256710(void) {
    sub_020291E8(0);
}

void ov03_02256730(void) {
    /* Original at 0x02256730 */
    /* Requires manual decompilation - 322 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    str r0, [sp, #0x14]\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0x13\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    add r4, r2, #0\n    ldr r0, [r0, #8]\n    mov r2, #3\n    mov r3, #4\n    str r1, [sp, #0x18]\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x14]\n    ldr r2, _02256A10 ; =0x000003D9\n    ldr r0, [r0, #8]\n    mov r1, #3\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    ldr r0, [sp, #0x18]\n    ldr r2, _02256A10 ; =0x000003D9\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    ldr r0, [sp, #0x18]\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xb6\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0x30]\n    mov r0, #4\n    bl MessageFormat_New\n    add r6, r0, #0\n    mov r0, #0xb4\n    mov r1, #4\n    bl String_New\n    add r7, r0, #0\n    mov r0, #0xb4\n    mov r1, #4\n    bl String_New\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x14]\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov03_022566D0\n    ldr r0, [sp, #0x30]\n    mov r1, #0x71\n    add r2, r7, #0\n    bl ReadMsgDataIntoString\n    ldr r1, [sp, #0x2c]\n    add r0, r6, #0\n    add r2, r7, #0\n    bl StringExpandPlaceholders\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x18]\n    ldr r2, [sp, #0x2c]\n    mov r3, #0x39\n    str r1, [sp, #8]\n    bl AddTextPrinterParameterized\n    mov r0, #0\n    str r0, [sp, #0x28]\n    mov r0, #0x10\n    str r0, [sp, #0x1c]\n    ldr r0, _02256A14 ; =ov03_02259820\n    str r0, [sp, #0x24]\n    ldr r0, _02256A18 ; =ov03_0225982C\n    str r0, [sp, #0x20]\n    ldr r1, [sp, #0x28]\n    ldr r0, [sp, #0x30]\n    add r1, #0x5d\n    add r2, r7, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [sp, #0x1c]\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x18]\n    add r2, r7, #0\n    mov r3, #2\n    bl AddTextPrinterParameterized\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x24]\n    add r0, #0xa4\n    ldrb r1, [r1]\n    ldr r0, [r0]\n    bl LinkBattleRuleset_GetRuleValue\n    add r4, r0, #0\n    ldr r0, [sp, #0x20]\n    ldrb r5, [r0]\n    ldr r0, [sp, #0x24]\n    ldrb r0, [r0]\n    cmp r0, #0xb\n    bls _02256832\n    b _02256994\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225683E: ; jump table\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    add r2, r4, #0\n    mov r3, #1\n    bl BufferIntegerAsString\n    b _02256994\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    add r2, r4, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    b _02256994\n    cmp r4, #0\n    bne _02256888\n    mov r5, #0x72\n    b _02256994\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    add r2, r4, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    b _02256994\n    cmp r4, #0\n    ldr r0, _02256A1C ; =0x00002710\n    blt _022568B8\n    mul r0, r4\n    mov r1, #0xfe\n    bl _s32_div_f\n    add r0, r0, #5\n    mov r1, #0xa\n    bl _s32_div_f\n    add r4, r0, #0\n    b _022568CC\n    neg r1, r4\n    mul r0, r1\n    mov r1, #0xfe\n    bl _s32_div_f\n    add r0, r0, #5\n    mov r1, #0xa\n    bl _s32_div_f\n    neg r4, r0\n    add r0, r4, #0\n    mov r1, #0xc\n    bl _s32_div_f\n    bl abs\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    mov r3, #2\n    bl BufferIntegerAsString\n    add r0, r4, #0\n    mov r1, #0xc\n    bl _s32_div_f\n    add r0, r1, #0\n    bl abs\n    add r2, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #1\n    mov r3, #2\n    bl BufferIntegerAsString\n    cmp r4, #0\n    bne _02256916\n    mov r5, #0x72\n    b _02256994\n    ble _02256994\n    add r5, r5, #1\n    b _02256994\n    cmp r4, #0\n    ldr r0, _02256A20 ; =0x00035D2E\n    blt _02256934\n    add r1, r4, #0\n    mul r1, r0\n    ldr r0, _02256A24 ; =0x0000C350\n    add r0, r1, r0\n    ldr r1, _02256A28 ; =0x000186A0\n    bl _s32_div_f\n    add r4, r0, #0\n    b _02256946\n    neg r1, r4\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, _02256A24 ; =0x0000C350\n    ldr r1, _02256A28 ; =0x000186A0\n    add r0, r2, r0\n    bl _s32_div_f\n    neg r4, r0\n    add r0, r4, #0\n    bl abs\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    cmp r4, #0\n    bne _02256968\n    mov r5, #0x72\n    b _02256994\n    ble _02256994\n    add r5, r5, #1\n    b _02256994\n    ldr r0, [sp, #0x14]\n    mov r1, #0xd\n    add r0, #0xa4\n    ldr r0, [r0]\n    bl LinkBattleRuleset_GetRuleValue\n    mov r1, #2\n    lsl r1, r1, #0xe\n    cmp r0, r1\n    bne _02256986\n    mov r5, #0x73\n    b _02256994\n    cmp r4, #0\n    bne _02256994\n    add r5, r5, #1\n    b _02256994\n    cmp r4, #0\n    bne _02256994\n    add r5, r5, #1\n    ldr r0, [sp, #0x30]\n    add r1, r5, #0\n    add r2, r7, #0\n    bl ReadMsgDataIntoString\n    ldr r1, [sp, #0x2c]\n    add r0, r6, #0\n    add r2, r7, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    ldr r1, [sp, #0x2c]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r4, r0, #0\n    ldr r0, [sp, #0x1c]\n    mov r3, #0xbf\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x18]\n    ldr r2, [sp, #0x2c]\n    mov r1, #0\n    sub r3, r3, r4\n    bl AddTextPrinterParameterized\n    ldr r0, [sp, #0x1c]\n    add r0, #0xf\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x24]\n    add r0, r0, #1\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x20]\n    add r0, r0, #1\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x28]\n    add r0, r0, #1\n    str r0, [sp, #0x28]\n    cmp r0, #9\n    bge _022569EC\n    b _022567F0\n    ldr r0, [sp, #0x2c]\n    bl String_Delete\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl MessageFormat_Delete\n    ldr r0, [sp, #0x30]\n    bl DestroyMsgData\n    ldr r0, [sp, #0x18]\n    bl CopyWindowToVram\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02256A10: .word 0x000003D9\n    _02256A14: .word ov03_02259820\n    _02256A18: .word ov03_0225982C\n    _02256A1C: .word 0x00002710\n    _02256A20: .word 0x00035D2E\n    _02256A24: .word 0x0000C350\n    _02256A28: .word 0x000186A0"
    );
    #endif
}

void ov03_02256A2C(void) {
    /* Original at 0x02256A2C */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r0, [sp, #8]\n    ldr r0, [r0, #0xc]\n    str r1, [sp, #0xc]\n    str r2, [sp, #0x10]\n    bl SaveArray_Party_Get\n    add r6, r0, #0\n    mov r0, #0xb\n    bl PokedexData_CreateAndLoad\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    cmp r0, #0xa\n    bne _02256A84\n    add r0, r6, #0\n    bl Party_GetCount\n    add r7, r0, #0\n    add r5, r7, #0\n    mov r4, #0\n    cmp r7, #0\n    ble _02256A78\n    add r0, r6, #0\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02256A72\n    sub r5, r5, #1\n    add r4, r4, #1\n    cmp r4, r7\n    blt _02256A5C\n    cmp r5, #2\n    bge _02256A80\n    mov r4, #7\n    b _02256A94\n    mov r4, #0\n    b _02256A94\n    ldr r0, [sp, #8]\n    ldr r2, [sp, #0x14]\n    add r0, #0xa4\n    ldr r0, [r0]\n    add r1, r6, #0\n    bl sub_02074CD0\n    add r4, r0, #0\n    ldr r0, [sp, #0x14]\n    bl PokedexData_UnloadAndDelete\n    cmp r4, #7\n    bhi _02256B0E\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02256AAA: ; jump table\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    bl ov03_022566D0\n    ldr r0, [sp, #8]\n    mov r1, #1\n    add r0, #0xa4\n    str r0, [sp, #8]\n    ldr r0, [r0]\n    bl LinkBattleRuleset_GetRuleValue\n    mov r1, #1\n    add r2, r0, #0\n    str r1, [sp]\n    ldr r0, [sp, #0xc]\n    add r3, r1, #0\n    str r1, [sp, #4]\n    bl BufferIntegerAsString\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    bl ov03_022566D0\n    mov r1, #1\n    str r1, [sp]\n    ldr r0, [sp, #0xc]\n    mov r2, #2\n    add r3, r1, #0\n    str r1, [sp, #4]\n    bl BufferIntegerAsString\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    bl ov03_022566D0\n    ldr r0, [sp, #8]\n    mov r1, #3\n    add r0, #0xa4\n    str r0, [sp, #8]\n    ldr r0, [r0]\n    bl LinkBattleRuleset_GetRuleValue\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #1\n    ldr r0, [sp, #0xc]\n    mov r3, #3\n    str r1, [sp, #4]\n    bl BufferIntegerAsString\n    mov r0, #2\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov03_02256B40(void) {
    /* Original at 0x02256B40 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0xb\n    bhi _02256B7E\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02256B50: ; jump table\n    mov r0, #0xff\n    bx lr\n    mov r0, #0\n    bx lr\n    mov r0, #3\n    bx lr\n    mov r0, #4\n    bx lr\n    mov r0, #0\n    mvn r0, r0\n    bx lr\n    cmp r0, #9\n    blo _02256B84\n    mov r0, #0xff\n    bx lr"
    );
    #endif
}

void ScrCmd_710(void) {
    ov03_02256BA8(0, 0);
}

void ov03_02256BA8(void) {
    /* Original at 0x02256BA8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    ldr r0, _02256BE8 ; =ov03_0225945C\n    lsl r1, r6, #1\n    ldrh r4, [r0, r1]\n    add r0, r5, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    add r1, r4, #0\n    bl Field3dObjectList_GetRenderObjectByID\n    add r7, r0, #0\n    bne _02256BCA\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0xc]\n    bl Save_VarsFlags_Get\n    add r1, r6, #0\n    bl sub_020669B4\n    add r1, r0, #0\n    ldr r0, [r5, #0x54]\n    mov r2, #1\n    str r0, [sp]\n    add r0, r4, #0\n    add r3, r7, #0\n    bl ov01_021E8970\n    pop {r3, r4, r5, r6, r7, pc}\n    _02256BE8: .word ov03_0225945C"
    );
    #endif
}

void ov03_02256BEC(void) {
    /* Original at 0x02256BEC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    sub r2, r2, #3\n    cmp r2, #1\n    ldr r3, _02256C28 ; =0x0000FFFF\n    bhi _02256C0C\n    mov r0, #1\n    mov r2, #0\n    lsl r0, r0, #8\n    ldrh r4, [r1]\n    cmp r4, r3\n    beq _02256C20\n    add r2, r2, #1\n    add r1, r1, #4\n    cmp r2, r0\n    blt _02256BFC\n    b _02256C20\n    mov r1, #1\n    mov r2, #0\n    lsl r1, r1, #8\n    ldrh r4, [r0]\n    cmp r4, r3\n    beq _02256C20\n    add r2, r2, #1\n    add r0, r0, #2\n    cmp r2, r1\n    blt _02256C12\n    add r0, r2, #0\n    pop {r3, r4}\n    bx lr\n    nop\n    _02256C28: .word 0x0000FFFF"
    );
    #endif
}

void ov03_02256C2C(void) {
    /* Original at 0x02256C2C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    add r4, r0, #0\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldrb r7, [r4, r0]\n    add r3, r1, #0\n    mov r1, #0\n    add r0, r1, #0\n    mov ip, r2\n    cmp r7, #0\n    ble _02256C80\n    mov r2, ip\n    cmp r2, #0\n    ldrh r6, [r3]\n    bne _02256C6C\n    cmp r6, #4\n    bne _02256C5E\n    mov r2, #0x27\n    lsl r2, r2, #4\n    ldrb r2, [r4, r2]\n    sub r5, r2, #1\n    mov r2, #0x27\n    lsl r2, r2, #4\n    strb r5, [r4, r2]\n    b _02256C78\n    mov r2, #0x9a\n    lsl r2, r2, #2\n    ldr r5, [r4, r2]\n    lsl r2, r1, #1\n    strh r6, [r5, r2]\n    add r1, r1, #1\n    b _02256C78\n    mov r2, #0x9a\n    lsl r2, r2, #2\n    ldr r5, [r4, r2]\n    lsl r2, r1, #1\n    strh r6, [r5, r2]\n    add r1, r1, #1\n    add r0, r0, #1\n    add r3, r3, #2\n    cmp r0, r7\n    blt _02256C42\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov03_02256C84(void) {
    /* Original at 0x02256C84 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    mov r3, #0x27\n    lsl r3, r3, #4\n    ldrb r3, [r0, r3]\n    mov r2, #0\n    cmp r3, #0\n    ble _02256CAE\n    mov r4, #0x9a\n    lsl r4, r4, #2\n    add r5, r4, #0\n    add r3, r2, #0\n    add r5, #8\n    ldrh r7, [r1]\n    ldr r6, [r0, r4]\n    add r2, r2, #1\n    strh r7, [r6, r3]\n    ldrb r6, [r0, r5]\n    add r3, r3, #2\n    add r1, r1, #4\n    cmp r2, r6\n    blt _02256C9C\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov03_02256CB4(void) {
    /* Original at 0x02256CB4 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r2, #0\n    ldr r2, _02256D14 ; =0x00000283\n    add r5, r0, #0\n    add r4, r1, #0\n    add r7, r3, #0\n    ldrb r2, [r5, r2]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov03_02256BEC\n    mov r1, #0x27\n    lsl r1, r1, #4\n    strb r0, [r5, r1]\n    ldrb r0, [r5, r1]\n    cmp r0, #0xff\n    blo _02256CDA\n    bl GF_AssertFail\n    mov r1, #0x27\n    lsl r1, r1, #4\n    ldrb r1, [r5, r1]\n    mov r0, #0xb\n    lsl r1, r1, #1\n    bl Heap_Alloc\n    mov r1, #0x9a\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r1, #0x1b\n    ldrb r0, [r5, r1]\n    add r0, #0xfd\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _02256D06\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov03_02256C84\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov03_02256C2C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02256D14: .word 0x00000283"
    );
    #endif
}

void ov03_02256D18(void) {
    /* Original at 0x02256D18 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0xa9\n    mov r0, #0xb\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    mov r2, #0xa9\n    mov r1, #0\n    lsl r2, r2, #2\n    add r4, r0, #0\n    bl memset\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void InitMartUI(void) {
    /* Original at 0x02256D34 */
    /* Requires manual decompilation - 110 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r7, r0, #0\n    str r2, [sp]\n    add r6, r3, #0\n    bl ov03_02256D18\n    add r4, r0, #0\n    ldr r0, [r5, #8]\n    mov r1, #0xb\n    str r0, [r4]\n    mov r0, #0x60\n    bl String_New\n    mov r1, #0x9d\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r5, #0xc]\n    bl Save_PlayerData_GetProfile\n    mov r1, #0x92\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r5, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    mov r1, #0x25\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r5, #0xc]\n    bl Save_GameStats_Get\n    mov r1, #0x97\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r5, #0xc]\n    bl Save_VarsFlags_Get\n    mov r1, #0x26\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r5, #0xc]\n    bl Save_ApricornBox_Get\n    mov r1, #0x96\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #0\n    ldr r2, [sp, #0x1c]\n    add r0, #0xc\n    str r2, [r4, r0]\n    add r0, r1, #0\n    add r0, #0x2b\n    add r2, r1, #0\n    strb r6, [r4, r0]\n    mov r0, #0\n    add r2, #0x19\n    strb r0, [r4, r2]\n    add r2, r1, #0\n    add r2, #0x38\n    str r0, [r4, r2]\n    add r2, r1, #0\n    sub r3, r0, #1\n    add r2, #0x3c\n    str r3, [r4, r2]\n    add r1, #0x40\n    str r0, [r4, r1]\n    ldr r0, [r5, #0xc]\n    bl Save_Pokeathlon_Get\n    mov r1, #0x95\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #0\n    ldr r2, [sp, #0x20]\n    add r0, #0x18\n    str r2, [r4, r0]\n    add r0, sp, #8\n    ldrb r2, [r0, #0x10]\n    add r0, r1, #0\n    add r0, #0x1f\n    add r1, #0x2f\n    strb r2, [r4, r0]\n    ldrb r0, [r4, r1]\n    cmp r0, #0\n    beq _02256DEA\n    add r0, #0xfd\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _02256DF8\n    ldr r0, [r5, #0xc]\n    bl Save_Bag_Get\n    mov r1, #0x93\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    b _02256E04\n    ldr r0, [r5, #0xc]\n    bl Save_SealCase_Get\n    mov r1, #0x93\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0x26\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl CheckFlag09A\n    add r2, r0, #0\n    ldr r1, [sp]\n    ldr r3, [sp, #0x20]\n    add r0, r4, #0\n    bl ov03_02256CB4\n    ldr r1, _02256E28 ; =ov03_02256E2C\n    add r0, r7, #0\n    add r2, r4, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02256E28: .word ov03_02256E2C"
    );
    #endif
}

void ov03_02256E2C(void) {
    /* Original at 0x02256E2C */
    /* Requires manual decompilation - 225 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r6, #0\n    bl TaskManager_GetEnvironment\n    ldr r1, _02257064 ; =0x00000272\n    add r4, r0, #0\n    ldrb r2, [r4, r1]\n    cmp r2, #0x1b\n    bhi _02256F08\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _02256E52: ; jump table\n    bl ov03_0225706C\n    ldr r0, _02257068 ; =0x00000273\n    ldrb r1, [r4, r0]\n    cmp r1, #0\n    bne _02256E9E\n    mov r1, #1\n    sub r0, r0, #1\n    strb r1, [r4, r0]\n    b _02257036\n    mov r1, #0x16\n    sub r0, r0, #1\n    strb r1, [r4, r0]\n    b _02257036\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_022570D4\n    add r0, r5, #0\n    mov r1, #2\n    add r2, r4, #0\n    bl ov01_021F6A9C\n    ldr r0, _02257064 ; =0x00000272\n    mov r1, #2\n    strb r1, [r4, r0]\n    b _02257036\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_02257334\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    add r1, #0x22\n    mov r2, #0\n    ldr r1, [r4, r1]\n    mvn r2, r2\n    cmp r1, r2\n    bne _02256EE4\n    bl ov03_02257510\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    bl ov03_0225761C\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    mov r0, #0\n    mvn r0, r0\n    add r1, #0x22\n    str r0, [r4, r1]\n    b _02257036\n    mov r0, #3\n    strb r0, [r4, r1]\n    b _02257036\n    sub r1, #0x52\n    ldr r0, [r4, r1]\n    bl Sprite_IsAnimated\n    cmp r0, #0\n    beq _02256F0A\n    b _02257036\n    mov r3, #0x9a\n    lsl r3, r3, #2\n    add r2, r3, #0\n    ldr r1, [r4, r3]\n    add r2, #0x28\n    add r3, #9\n    ldr r5, [r4, r2]\n    ldrb r2, [r4, r3]\n    add r0, r4, #0\n    add r2, r5, r2\n    lsl r2, r2, #1\n    ldrh r1, [r1, r2]\n    bl ov03_02257874\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    bl ov03_02257944\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    add r1, #0x22\n    mov r2, #0\n    ldr r1, [r4, r1]\n    mvn r2, r2\n    cmp r1, r2\n    bne _02256F4C\n    bl ov03_02257ADC\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    bl ov03_02257B4C\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    mov r0, #0\n    mvn r0, r0\n    add r1, #0x22\n    str r0, [r4, r1]\n    b _02257036\n    bl ov03_022579E0\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    bl ov03_02257A70\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    bl ov03_02257D6C\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    add r1, #0x22\n    mov r2, #0\n    ldr r1, [r4, r1]\n    mvn r2, r2\n    cmp r1, r2\n    beq _02257036\n    bl ov03_02257D90\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    mov r0, #0\n    mvn r0, r0\n    add r1, #0x22\n    str r0, [r4, r1]\n    b _02257036\n    bl ov03_02257E6C\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    bl ov03_02257F24\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    bl ov03_02257FF8\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    bl ov03_02258078\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    bl ov03_022577D0\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    bl ov03_022572EC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_02258164\n    ldr r0, _02257064 ; =0x00000272\n    mov r1, #0x12\n    strb r1, [r4, r0]\n    b _02257036\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_02258170\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    bl ov03_022576F8\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    bl ov03_02257728\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    bl ov03_022586E0\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_0225874C\n    b _02257036\n    add r0, r6, #0\n    bl ov03_02258764\n    b _02257036\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_022587D4\n    ldr r1, _02257064 ; =0x00000272\n    strb r0, [r4, r1]\n    b _02257036\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_0225709C\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r7, #0x7e\n    mov r6, #0\n    add r5, r4, #0\n    lsl r7, r7, #2\n    ldr r0, [r5, r7]\n    cmp r0, #0\n    beq _0225704C\n    mov r1, #1\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, #0x13\n    blt _0225703E\n    add r4, #0x94\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _02257060\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02257064: .word 0x00000272\n    _02257068: .word 0x00000273"
    );
    #endif
}

void ov03_0225706C(void) {
    ov03_02257074();
}

void ov03_02257074(void) {
    /* Original at 0x02257074 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _02257098 ; =0x000001B3\n    add r4, r0, #0\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0xb\n    bl NewMsgDataFromNarc\n    add r1, r4, #0\n    add r1, #0x88\n    str r0, [r1]\n    mov r0, #0xb\n    bl MessageFormat_New\n    add r4, #0x8c\n    str r0, [r4]\n    pop {r4, pc}\n    nop\n    _02257098: .word 0x000001B3"
    );
    #endif
}

void ov03_0225709C(void) {
    /* Original at 0x0225709C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    add r0, #0x88\n    ldr r0, [r0]\n    bl DestroyMsgData\n    add r0, r4, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    bl MessageFormat_Delete\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl String_Delete\n    mov r0, #0x9a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov03_022570D4(void) {
    /* Original at 0x022570D4 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x12\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #6\n    mov r2, #0\n    str r0, [sp, #8]\n    add r4, r1, #0\n    str r2, [sp, #0xc]\n    ldr r0, [r4]\n    mov r1, #3\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r4, #0\n    bl ov03_02257134\n    mov r0, #0xb\n    bl Camera_New\n    add r1, r4, #0\n    add r1, #0x90\n    str r0, [r1]\n    add r1, r4, #0\n    add r1, #0x90\n    ldr r0, [r5, #0x24]\n    ldr r1, [r1]\n    bl Camera_Copy\n    add r0, r4, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    bl Camera_SetStaticPtr\n    ldr r0, _02257130 ; =0x00000281\n    mov r1, #0\n    strb r1, [r4, r0]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _02257130: .word 0x00000281"
    );
    #endif
}

void ov03_02257134(void) {
    /* Original at 0x02257134 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r5, #0\n    ldr r7, _02257178 ; =ov03_022594C6\n    mov r6, #0\n    add r4, #8\n    ldr r0, _0225717C ; =0x00000283\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    beq _02257160\n    cmp r0, #3\n    beq _02257160\n    cmp r0, #4\n    beq _02257160\n    cmp r6, #1\n    bne _02257160\n    ldr r0, [r5]\n    ldr r2, _02257180 ; =ov03_02259464\n    add r1, r4, #0\n    bl AddWindow\n    b _0225716A\n    ldr r0, [r5]\n    add r1, r4, #0\n    add r2, r7, #0\n    bl AddWindow\n    add r6, r6, #1\n    add r4, #0x10\n    add r7, #8\n    cmp r6, #6\n    blo _02257140\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02257178: .word ov03_022594C6\n    _0225717C: .word 0x00000283\n    _02257180: .word ov03_02259464"
    );
    #endif
}

void ov03_02257184(void) {
    /* Original at 0x02257184 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x28\n    mov r1, #1\n    bl sub_0200E5D4\n    mov r4, #0\n    add r5, #8\n    add r0, r5, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #6\n    blo _02257194\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov03_022571AC(void) {
    /* Original at 0x022571AC */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    add r4, r0, #0\n    str r1, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0x3c\n    mov r3, #1\n    bl GfGfxLoader_LoadCharData\n    ldr r0, _02257258 ; =0x00000283\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _022571DA\n    add r0, #0xfd\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _022571F4\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0x3c\n    mov r1, #2\n    mov r3, #1\n    bl GfGfxLoader_LoadScrnData\n    b _0225720C\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    mov r0, #0x3c\n    mov r1, #3\n    mov r3, #1\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0xb\n    mov r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x3c\n    mov r1, #1\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #0xb\n    str r3, [sp, #4]\n    ldr r0, [r4]\n    mov r1, #3\n    mov r2, #0x1f\n    bl LoadUserFrameGfx1\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    mov r1, #3\n    mov r2, #1\n    mov r3, #0xa\n    bl LoadUserFrameGfx2\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _02257258: .word 0x00000283"
    );
    #endif
}

void ov03_0225725C(void) {
    /* Original at 0x0225725C */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl GfGfx_EngineAGetPlanes\n    mov r1, #0x9f\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4]\n    mov r1, #0\n    bl GetBgPriority\n    mov r1, #0x9e\n    lsl r1, r1, #2\n    strb r0, [r4, r1]\n    ldr r0, [r4]\n    mov r1, #1\n    bl GetBgPriority\n    ldr r1, _022572E0 ; =0x00000279\n    strb r0, [r4, r1]\n    ldr r0, [r4]\n    mov r1, #2\n    bl GetBgPriority\n    ldr r1, _022572E4 ; =0x0000027A\n    strb r0, [r4, r1]\n    ldr r0, [r4]\n    mov r1, #3\n    bl GetBgPriority\n    ldr r1, _022572E8 ; =0x0000027B\n    strb r0, [r4, r1]\n    mov r0, #0\n    mov r1, #3\n    bl SetBgPriority\n    mov r0, #1\n    mov r1, #2\n    bl SetBgPriority\n    mov r0, #2\n    mov r1, #1\n    bl SetBgPriority\n    mov r0, #3\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #8\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    pop {r4, pc}\n    nop\n    _022572E0: .word 0x00000279\n    _022572E4: .word 0x0000027A\n    _022572E8: .word 0x0000027B"
    );
    #endif
}

void ov03_022572EC(void) {
    /* Original at 0x022572EC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x9e\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldrb r1, [r4, r1]\n    mov r0, #0\n    bl SetBgPriority\n    ldr r1, _02257328 ; =0x00000279\n    mov r0, #1\n    ldrb r1, [r4, r1]\n    bl SetBgPriority\n    ldr r1, _0225732C ; =0x0000027A\n    mov r0, #2\n    ldrb r1, [r4, r1]\n    bl SetBgPriority\n    ldr r1, _02257330 ; =0x0000027B\n    mov r0, #3\n    ldrb r1, [r4, r1]\n    bl SetBgPriority\n    mov r0, #0x9f\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl GfGfx_EngineASetPlanes\n    pop {r4, pc}\n    nop\n    _02257328: .word 0x00000279\n    _0225732C: .word 0x0000027A\n    _02257330: .word 0x0000027B"
    );
    #endif
}

void ov03_02257334(void) {
    /* Original at 0x02257334 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl ov01_021F6B10\n    cmp r0, #1\n    beq _02257344\n    mov r0, #2\n    pop {r4, pc}\n    ldr r0, _02257374 ; =0x00000281\n    mov r1, #0\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    bl ov03_022571AC\n    add r0, r4, #0\n    bl ov03_0225725C\n    mov r1, #0x29\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov03_022573D4\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _02257374: .word 0x00000281"
    );
    #endif
}

void ov03_02257378(void) {
    /* Original at 0x02257378 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    cmp r2, #0\n    beq _0225738A\n    cmp r2, #1\n    beq _022573C0\n    cmp r2, #2\n    pop {r3, r4, r5, pc}\n    mov r1, #0x22\n    lsl r1, r1, #4\n    ldr r0, [r4, r1]\n    add r1, #0x70\n    ldr r1, [r4, r1]\n    lsl r2, r1, #2\n    ldr r1, _022573C4 ; =ov03_022594A0\n    ldrb r1, [r1, r2]\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r1, _022573C8 ; =ov03_022594A1\n    lsl r5, r5, #2\n    ldrb r1, [r1, r5]\n    ldr r0, [r4, r0]\n    bl thunk_Sprite_SetPaletteOverride\n    ldr r1, _022573CC ; =ov03_0225949E\n    ldr r2, _022573D0 ; =ov03_0225949F\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldrb r1, [r1, r5]\n    ldrb r2, [r2, r5]\n    ldr r0, [r4, r0]\n    bl Sprite_SetPositionXY\n    pop {r3, r4, r5, pc}\n    nop\n    _022573C4: .word ov03_022594A0\n    _022573C8: .word ov03_022594A1\n    _022573CC: .word ov03_0225949E\n    _022573D0: .word ov03_0225949F"
    );
    #endif
}

void ov03_022573D4(void) {
    /* Original at 0x022573D4 */
    /* Requires manual decompilation - 130 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    mov r3, #0x9a\n    lsl r3, r3, #2\n    add r4, r0, #0\n    add r2, r3, #0\n    ldr r0, [r4, r3]\n    add r2, #0x28\n    add r3, #9\n    ldr r5, [r4, r2]\n    ldrb r2, [r4, r3]\n    add r2, r5, r2\n    lsl r2, r2, #1\n    ldrh r5, [r0, r2]\n    cmp r1, #8\n    bls _022573F6\n    b _02257504\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02257402: ; jump table\n    add r0, r4, #0\n    add r0, #0x18\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r2, #0x29\n    lsl r2, r2, #4\n    add r0, r2, #0\n    sub r0, #0x1f\n    ldrb r0, [r4, r0]\n    ldr r1, [r4, r2]\n    add r1, r1, r0\n    add r0, r2, #0\n    sub r0, #0x20\n    ldrb r0, [r4, r0]\n    cmp r1, r0\n    bge _022574D4\n    add r0, r2, #0\n    sub r0, #0xd\n    ldrb r1, [r4, r0]\n    cmp r1, #0\n    beq _0225744C\n    add r0, r1, #0\n    add r0, #0xfd\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _02257460\n    mov r0, #0x82\n    mov r1, #0xb\n    bl String_New\n    add r1, r5, #0\n    mov r2, #0xb\n    add r6, r0, #0\n    bl GetItemDescIntoString\n    b _022574AA\n    cmp r1, #1\n    bne _02257484\n    mov r0, #0\n    mov r1, #0x1b\n    add r2, #0x51\n    mov r3, #0xb\n    bl NewMsgDataFromNarc\n    add r1, r5, #0\n    add r7, r0, #0\n    add r1, #0x8a\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    add r0, r7, #0\n    bl DestroyMsgData\n    b _022574AA\n    mov r0, #0\n    mov r1, #0x1b\n    sub r2, #0xde\n    mov r3, #0xb\n    bl NewMsgDataFromNarc\n    add r7, r0, #0\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    bl sub_020910B8\n    add r1, r0, #0\n    add r0, r7, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    add r0, r7, #0\n    bl DestroyMsgData\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02257508 ; =0x000F0E00\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r0, #0x18\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov03_022585A4\n    b _022574DE\n    sub r2, #0x8c\n    ldr r0, [r4, r2]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r4, #0x18\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r0, #0x18\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r1, _0225750C ; =0x0000FFFF\n    add r0, r4, #0\n    bl ov03_022585A4\n    add r4, #0x18\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02257508: .word 0x000F0E00\n    _0225750C: .word 0x0000FFFF"
    );
    #endif
}

void ov03_02257510(void) {
    /* Original at 0x02257510 */
    /* Requires manual decompilation - 117 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r1, _02257604 ; =gSystem\n    mov r2, #0x40\n    ldr r1, [r1, #0x48]\n    add r5, r0, #0\n    mov r4, #0\n    tst r2, r1\n    beq _02257538\n    mov r0, #0x29\n    lsl r0, r0, #4\n    ldr r1, [r5, r0]\n    lsl r2, r1, #2\n    ldr r1, _02257608 ; =ov03_0225947A\n    ldrb r1, [r1, r2]\n    str r1, [r5, r0]\n    ldr r0, _0225760C ; =0x000005DC\n    bl PlaySE\n    add r4, r4, #1\n    b _022575B0\n    mov r2, #0x80\n    tst r2, r1\n    beq _02257556\n    mov r0, #0x29\n    lsl r0, r0, #4\n    ldr r1, [r5, r0]\n    lsl r2, r1, #2\n    ldr r1, _02257610 ; =ov03_0225947B\n    ldrb r1, [r1, r2]\n    str r1, [r5, r0]\n    ldr r0, _0225760C ; =0x000005DC\n    bl PlaySE\n    add r4, r4, #1\n    b _022575B0\n    mov r2, #0x20\n    tst r2, r1\n    beq _02257584\n    mov r2, #0x29\n    lsl r2, r2, #4\n    ldr r1, [r5, r2]\n    ldr r3, _02257614 ; =ov03_0225947C\n    lsl r6, r1, #2\n    ldrb r3, [r3, r6]\n    cmp r3, #6\n    bne _02257574\n    mov r1, #6\n    bl ov03_0225761C\n    pop {r4, r5, r6, pc}\n    cmp r1, #8\n    beq _022575B0\n    ldr r0, _0225760C ; =0x000005DC\n    str r3, [r5, r2]\n    bl PlaySE\n    add r4, r4, #1\n    b _022575B0\n    mov r2, #0x10\n    tst r1, r2\n    beq _022575B0\n    mov r2, #0x29\n    lsl r2, r2, #4\n    ldr r1, [r5, r2]\n    ldr r3, _02257618 ; =ov03_0225947D\n    lsl r6, r1, #2\n    ldrb r3, [r3, r6]\n    cmp r3, #7\n    bne _022575A2\n    mov r1, #7\n    bl ov03_0225761C\n    pop {r4, r5, r6, pc}\n    cmp r1, #8\n    beq _022575B0\n    ldr r0, _0225760C ; =0x000005DC\n    str r3, [r5, r2]\n    bl PlaySE\n    add r4, r4, #1\n    cmp r4, #0\n    beq _022575CE\n    mov r1, #0x29\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov03_02257378\n    mov r1, #0x29\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov03_022573D4\n    ldr r0, _02257604 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _022575EC\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0xd\n    mov r2, #0x10\n    bl ov03_022586CC\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    tst r0, r1\n    beq _02257600\n    mov r1, #0x29\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov03_0225761C\n    pop {r4, r5, r6, pc}\n    mov r0, #3\n    pop {r4, r5, r6, pc}\n    _02257604: .word gSystem\n    _02257608: .word ov03_0225947A\n    _0225760C: .word 0x000005DC\n    _02257610: .word ov03_0225947B\n    _02257614: .word ov03_0225947C\n    _02257618: .word ov03_0225947D"
    );
    #endif
}

void ov03_0225761C(void) {
    /* Original at 0x0225761C */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    cmp r1, #8\n    bhi _022576EA\n    add r2, r1, r1\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _02257630: ; jump table\n    ldr r3, _022576F0 ; =0x00000271\n    ldrb r2, [r4, r3]\n    add r5, r1, r2\n    sub r2, r3, #1\n    ldrb r2, [r4, r2]\n    cmp r5, r2\n    bhs _022576EA\n    add r2, r3, #0\n    add r2, #0x1f\n    str r1, [r4, r2]\n    add r3, #0x1f\n    ldr r1, [r4, r3]\n    mov r2, #0\n    bl ov03_02257378\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x13\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _022576F4 ; =0x000005DC\n    bl PlaySE\n    mov r1, #0x29\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov03_022573D4\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    ldr r0, _022576F0 ; =0x00000271\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _022576EA\n    ldr r0, _022576F4 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0x13\n    bl ov03_022586CC\n    pop {r3, r4, r5, pc}\n    ldr r0, _022576F0 ; =0x00000271\n    ldrb r1, [r4, r0]\n    sub r0, r0, #1\n    ldrb r0, [r4, r0]\n    add r1, r1, #6\n    cmp r1, r0\n    bge _022576EA\n    ldr r0, _022576F4 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #0x14\n    bl ov03_022586CC\n    pop {r3, r4, r5, pc}\n    mov r2, #0\n    bl ov03_02257378\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #7\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #8\n    bl ov03_022573D4\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r2, #0x10\n    bl ov03_022586CC\n    pop {r3, r4, r5, pc}\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    nop\n    _022576F0: .word 0x00000271\n    _022576F4: .word 0x000005DC"
    );
    #endif
}

void ov03_022576F8(void) {
    /* Original at 0x022576F8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _02257724 ; =0x00000271\n    add r4, r0, #0\n    ldrb r1, [r4, r2]\n    sub r1, r1, #6\n    strb r1, [r4, r2]\n    ldrb r1, [r4, r2]\n    sub r2, r2, #1\n    ldrb r2, [r4, r2]\n    bl ov03_02257758\n    mov r1, #0xa6\n    mov r0, #1\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #8\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov03_022573D4\n    mov r0, #3\n    pop {r4, pc}\n    _02257724: .word 0x00000271"
    );
    #endif
}

void ov03_02257728(void) {
    /* Original at 0x02257728 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _02257754 ; =0x00000271\n    add r4, r0, #0\n    ldrb r1, [r4, r2]\n    add r1, r1, #6\n    strb r1, [r4, r2]\n    ldrb r1, [r4, r2]\n    sub r2, r2, #1\n    ldrb r2, [r4, r2]\n    bl ov03_02257758\n    mov r1, #0xa6\n    mov r0, #1\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #8\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov03_022573D4\n    mov r0, #3\n    pop {r4, pc}\n    _02257754: .word 0x00000271"
    );
    #endif
}

void ov03_02257758(void) {
    /* Original at 0x02257758 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    mov r4, #0\n    str r0, [sp]\n    add r5, r0, #0\n    lsl r0, r1, #1\n    str r4, [sp, #8]\n    sub r7, r2, r1\n    str r0, [sp, #4]\n    cmp r7, #6\n    ble _02257772\n    mov r0, #6\n    b _0225777C\n    cmp r7, #0\n    bge _0225777A\n    mov r0, #0\n    b _0225777C\n    add r0, r7, #0\n    cmp r4, r0\n    bge _022577A8\n    ldr r0, [sp]\n    mov r3, #0x9a\n    add r6, r0, #0\n    lsl r3, r3, #2\n    ldr r6, [r6, r3]\n    ldr r3, [sp, #4]\n    add r1, r4, #3\n    add r6, r3, r6\n    ldr r3, [sp, #8]\n    add r2, r4, #2\n    ldrh r3, [r3, r6]\n    bl ov03_02258648\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    b _022577B4\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [sp, #8]\n    add r4, r4, #1\n    add r0, r0, #2\n    add r5, r5, #4\n    str r0, [sp, #8]\n    cmp r4, #6\n    blt _0225776A\n    ldr r0, [sp]\n    mov r1, #0\n    bl ov03_022582C0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov03_022577D0(void) {
    /* Original at 0x022577D0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov03_02257184\n    ldr r0, [r4]\n    mov r1, #1\n    mov r2, #0\n    bl BgFillTilemapBufferAndSchedule\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x11\n    pop {r4, pc}"
    );
    #endif
}

void ov03_022577F4(void) {
    /* Original at 0x022577F4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub r1, r1, #3\n    cmp r1, #1\n    bhi _02257808\n    mov r1, #0x95\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    bl PokeathlonSave_GetAthletePoints\n    pop {r3, pc}\n    mov r1, #0x92\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    bl PlayerProfile_GetMoney\n    pop {r3, pc}"
    );
    #endif
}

void ov03_02257814(void) {
    /* Original at 0x02257814 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, _02257870 ; =0x00000283\n    add r5, r0, #0\n    ldrb r0, [r5, r1]\n    cmp r0, #3\n    bne _02257840\n    add r0, r1, #0\n    add r2, r1, #0\n    sub r1, #0x12\n    add r2, #0xd\n    sub r0, #0x2f\n    ldrb r1, [r5, r1]\n    ldr r2, [r5, r2]\n    ldr r0, [r5, r0]\n    add r1, r2, r1\n    bl PokeathlonSave_GetUnkB7C_AtIndex\n    cmp r0, #0\n    beq _0225785E\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    cmp r0, #4\n    bne _0225785E\n    add r2, r1, #1\n    add r0, r1, #0\n    sub r0, #0x2f\n    ldrh r2, [r5, r2]\n    sub r1, #0x8a\n    ldr r0, [r5, r0]\n    sub r1, r2, r1\n    bl PokeathlonSave_GetUnkB78_AtIndex\n    cmp r0, #0\n    beq _0225785E\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    mov r0, #0xa3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r4, r0\n    bhs _0225786C\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _02257870: .word 0x00000283"
    );
    #endif
}

void ov03_02257874(void) {
    /* Original at 0x02257874 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    bl Sprite_GetDrawFlag\n    mov r1, #0x91\n    lsl r1, r1, #2\n    strh r0, [r5, r1]\n    sub r1, #0x48\n    ldr r0, [r5, r1]\n    bl Sprite_GetDrawFlag\n    ldr r1, _0225793C ; =0x00000246\n    strh r0, [r5, r1]\n    sub r1, #0x4e\n    ldr r0, [r5, r1]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r5, #0\n    mov r1, #1\n    bl ov03_022586BC\n    mov r1, #0xa1\n    lsl r1, r1, #2\n    strh r4, [r5, r1]\n    mov r2, #1\n    add r0, r1, #2\n    strh r2, [r5, r0]\n    ldrh r1, [r5, r1]\n    add r0, r5, #0\n    bl ov03_02258120\n    mov r1, #0xa3\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, #9\n    ldrb r1, [r5, r1]\n    add r0, r5, #0\n    bl ov03_022577F4\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov03_02257814\n    cmp r0, #0\n    beq _022578F2\n    mov r0, #0xa6\n    mov r1, #0xa\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r0, #0xe\n    pop {r3, r4, r5, pc}\n    mov r1, #0xa3\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r4, #0\n    bl _u32_div_f\n    mov r1, #0xa2\n    lsl r1, r1, #2\n    strh r0, [r5, r1]\n    ldrh r0, [r5, r1]\n    cmp r0, #0x63\n    bls _0225790E\n    mov r0, #0x63\n    strh r0, [r5, r1]\n    ldr r0, _02257940 ; =0x00000283\n    ldrb r0, [r5, r0]\n    cmp r0, #1\n    beq _02257920\n    add r0, #0xfd\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _02257928\n    add r0, r5, #0\n    bl ov03_02257CA0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #1\n    bl ov03_022582C0\n    mov r0, #0xa6\n    mov r1, #2\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    _0225793C: .word 0x00000246\n    _02257940: .word 0x00000283"
    );
    #endif
}

void ov03_02257944(void) {
    /* Original at 0x02257944 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldrb r0, [r4, r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    bne _0225795A\n    mov r0, #5\n    pop {r4, pc}\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #7\n    pop {r4, pc}"
    );
    #endif
}

void ov03_02257978(void) {
    /* Original at 0x02257978 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, _022579D8 ; =0x00000283\n    add r2, r0, #0\n    ldrb r4, [r2, r3]\n    cmp r4, #0\n    beq _02257994\n    cmp r4, #1\n    beq _02257994\n    add r0, r4, #0\n    add r0, #0xfd\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _022579C0\n    ldr r3, _022579DC ; =0x000001E5\n    cmp r1, r3\n    blt _022579AE\n    add r0, r3, #6\n    cmp r1, r0\n    bgt _022579AE\n    add r0, r3, #0\n    add r0, #0x73\n    ldr r0, [r2, r0]\n    sub r1, r1, r3\n    bl ApricornBox_CountApricorn\n    pop {r4, pc}\n    mov r1, #0x93\n    lsl r1, r1, #2\n    ldr r0, [r2, r1]\n    add r1, #0x38\n    ldrh r1, [r2, r1]\n    mov r2, #0xb\n    bl Bag_GetQuantity\n    pop {r4, pc}\n    cmp r4, #2\n    bne _022579D4\n    add r0, r3, #0\n    add r1, r3, #1\n    sub r0, #0x37\n    ldrh r1, [r2, r1]\n    ldr r0, [r2, r0]\n    bl SealCase_CountSealOccurrenceAnywhere\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _022579D8: .word 0x00000283\n    _022579DC: .word 0x000001E5"
    );
    #endif
}

void ov03_022579E0(void) {
    /* Original at 0x022579E0 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    add r0, #0x48\n    mov r1, #1\n    bl sub_0200E5D4\n    add r0, r4, #0\n    add r0, #0x38\n    mov r1, #1\n    bl sub_0200E5D4\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0xa6\n    mov r1, #7\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    sub r0, #0x58\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x23\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x8e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x8f\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl ov03_02257CA0\n    pop {r4, pc}"
    );
    #endif
}

void ov03_02257A70(void) {
    /* Original at 0x02257A70 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x48\n    mov r1, #1\n    bl sub_0200E5D4\n    add r0, r4, #0\n    add r0, #0x38\n    mov r1, #1\n    bl sub_0200E5D4\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_02258560\n    mov r1, #0x7e\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x4c\n    ldrh r1, [r4, r1]\n    bl Sprite_SetDrawFlag\n    mov r1, #0x7f\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x4a\n    ldrh r1, [r4, r1]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_022586BC\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_022582C0\n    mov r0, #0xa6\n    mov r1, #4\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    sub r0, #0x6c\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov03_02257ADC(void) {
    /* Original at 0x02257ADC */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02257B3C ; =0x00000286\n    add r4, r0, #0\n    add r0, r4, r1\n    add r1, r1, #2\n    ldrh r1, [r4, r1]\n    bl sub_020881C0\n    cmp r0, #0\n    beq _02257B02\n    ldr r0, _02257B40 ; =0x00000637\n    bl PlaySE\n    mov r0, #0xa6\n    mov r1, #6\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #7\n    pop {r4, pc}\n    ldr r0, _02257B44 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _02257B1E\n    ldr r0, _02257B48 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x12\n    mov r2, #8\n    bl ov03_022586CC\n    pop {r4, pc}\n    mov r0, #2\n    tst r0, r1\n    beq _02257B38\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r2, #9\n    bl ov03_022586CC\n    pop {r4, pc}\n    mov r0, #7\n    pop {r4, pc}\n    _02257B3C: .word 0x00000286\n    _02257B40: .word 0x00000637\n    _02257B44: .word gSystem\n    _02257B48: .word 0x000005DC"
    );
    #endif
}

void ov03_02257B4C(void) {
    /* Original at 0x02257B4C */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #5\n    bhi _02257B76\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02257B60: ; jump table\n    mov r0, #0xa2\n    lsl r0, r0, #2\n    ldrh r1, [r4, r0]\n    cmp r1, #0xa\n    bhs _02257B78\n    b _02257C90\n    sub r0, r0, #2\n    ldrsh r0, [r4, r0]\n    mov r2, #0xa\n    bl ov03_022587E8\n    ldr r1, _02257C94 ; =0x00000286\n    strh r0, [r4, r1]\n    sub r1, #0x56\n    ldr r0, [r4, r1]\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    mov r0, #0x23\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0xd\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _02257C98 ; =0x00000637\n    bl PlaySE\n    mov r0, #0xa6\n    mov r1, #6\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _02257C90\n    mov r0, #0xa2\n    lsl r0, r0, #2\n    ldrh r1, [r4, r0]\n    cmp r1, #1\n    beq _02257C90\n    sub r0, r0, #2\n    ldrsh r0, [r4, r0]\n    mov r2, #1\n    bl ov03_022587E8\n    ldr r1, _02257C94 ; =0x00000286\n    strh r0, [r4, r1]\n    sub r1, #0x52\n    ldr r0, [r4, r1]\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xd\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _02257C98 ; =0x00000637\n    bl PlaySE\n    mov r0, #0xa6\n    mov r1, #6\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _02257C90\n    mov r0, #0xa2\n    lsl r0, r0, #2\n    ldrh r1, [r4, r0]\n    cmp r1, #0xa\n    blo _02257C90\n    sub r0, r0, #2\n    ldrsh r0, [r4, r0]\n    mov r2, #9\n    mvn r2, r2\n    bl ov03_022587E8\n    ldr r1, _02257C94 ; =0x00000286\n    strh r0, [r4, r1]\n    sub r1, #0x4e\n    ldr r0, [r4, r1]\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    mov r0, #0x8e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xf\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _02257C98 ; =0x00000637\n    bl PlaySE\n    mov r0, #0xa6\n    mov r1, #6\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _02257C90\n    mov r0, #0xa2\n    lsl r0, r0, #2\n    ldrh r1, [r4, r0]\n    cmp r1, #1\n    beq _02257C90\n    sub r0, r0, #2\n    ldrsh r0, [r4, r0]\n    mov r2, #0\n    mvn r2, r2\n    bl ov03_022587E8\n    ldr r1, _02257C94 ; =0x00000286\n    strh r0, [r4, r1]\n    sub r1, #0x4a\n    ldr r0, [r4, r1]\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    mov r0, #0x8f\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xf\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _02257C98 ; =0x00000637\n    bl PlaySE\n    mov r0, #0xa6\n    mov r1, #6\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _02257C90\n    ldr r0, _02257C9C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x12\n    mov r2, #8\n    bl ov03_022586CC\n    pop {r4, pc}\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r2, #9\n    bl ov03_022586CC\n    pop {r4, pc}\n    mov r0, #7\n    pop {r4, pc}\n    _02257C94: .word 0x00000286\n    _02257C98: .word 0x00000637\n    _02257C9C: .word 0x000005DC"
    );
    #endif
}

void ov03_02257CA0(void) {
    /* Original at 0x02257CA0 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _02257D64 ; =0x00000283\n    add r4, r0, #0\n    ldrb r0, [r4, r2]\n    cmp r0, #0\n    bne _02257CC2\n    add r0, r2, #0\n    add r1, r2, #1\n    add r2, r2, #3\n    sub r0, #0x37\n    ldrh r1, [r4, r1]\n    ldrh r2, [r4, r2]\n    ldr r0, [r4, r0]\n    mov r3, #0xb\n    bl Bag_HasSpaceForItem\n    b _02257D4C\n    cmp r0, #1\n    bne _02257CCA\n    mov r0, #0\n    b _02257D4C\n    add r0, #0xfd\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _02257D3A\n    add r0, r2, #1\n    ldrh r1, [r4, r0]\n    add r0, r2, #0\n    sub r0, #0x9e\n    cmp r1, r0\n    blo _02257D06\n    add r0, r2, #0\n    sub r0, #0x98\n    cmp r1, r0\n    bhi _02257D06\n    add r0, r2, #0\n    sub r0, #0x2b\n    sub r2, #0x9e\n    ldr r0, [r4, r0]\n    sub r1, r1, r2\n    bl ApricornBox_CountApricorn\n    cmp r0, #0x63\n    bne _02257D26\n    mov r0, #0xa6\n    mov r1, #0xc\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #0xe\n    pop {r4, pc}\n    mov r2, #0x93\n    lsl r2, r2, #2\n    ldr r0, [r4, r2]\n    add r2, #0x3a\n    ldrh r2, [r4, r2]\n    mov r3, #0xb\n    bl Bag_HasSpaceForItem\n    cmp r0, #0\n    bne _02257D26\n    mov r0, #0xa6\n    mov r1, #0xc\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #0xe\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #2\n    bl ov03_022582C0\n    mov r0, #0xa6\n    mov r1, #3\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #0xa\n    pop {r4, pc}\n    add r0, r2, #0\n    add r1, r2, #1\n    add r2, r2, #3\n    sub r0, #0x37\n    ldrh r1, [r4, r1]\n    ldrsh r2, [r4, r2]\n    ldr r0, [r4, r0]\n    bl SealCase_CheckSealQuantity\n    cmp r0, #0\n    bne _02257D60\n    ldr r0, _02257D68 ; =0x00000286\n    mov r1, #0\n    strh r1, [r4, r0]\n    mov r1, #0xb\n    add r0, #0x12\n    str r1, [r4, r0]\n    mov r0, #0xd\n    pop {r4, pc}\n    mov r0, #0xa\n    pop {r4, pc}\n    _02257D64: .word 0x00000283\n    _02257D68: .word 0x00000286"
    );
    #endif
}

void ov03_02257D6C(void) {
    /* Original at 0x02257D6C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldrb r0, [r4, r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    bne _02257D82\n    mov r0, #0xa\n    pop {r4, pc}\n    mov r0, #0xa6\n    mov r1, #8\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #0xb\n    pop {r4, pc}"
    );
    #endif
}

void ov03_02257D90(void) {
    /* Original at 0x02257D90 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #0\n    beq _02257D9E\n    cmp r1, #1\n    beq _02257DAA\n    b _02257DF2\n    mov r0, #0xa6\n    mov r1, #9\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #0xc\n    pop {r4, pc}\n    add r0, #0x58\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_02258560\n    mov r1, #0x7e\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x4c\n    ldrh r1, [r4, r1]\n    bl Sprite_SetDrawFlag\n    mov r1, #0x7f\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x4a\n    ldrh r1, [r4, r1]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_022586BC\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_022582C0\n    mov r0, #0xa6\n    mov r1, #4\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #0xb\n    pop {r4, pc}"
    );
    #endif
}

void ov03_02257DF8(void) {
    /* Original at 0x02257DF8 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, _02257E30 ; =0x00000283\n    add r2, r0, #0\n    ldrb r0, [r2, r3]\n    add r0, #0xfd\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _02257E18\n    sub r3, #0x2f\n    lsl r1, r1, #0x10\n    ldr r0, [r2, r3]\n    lsr r1, r1, #0x10\n    bl PokeathlonSave_SubAthletePoints\n    pop {r4, pc}\n    add r1, r3, #0\n    add r1, #9\n    ldr r4, [r2, r1]\n    add r1, r3, #3\n    add r0, r3, #0\n    ldrsh r1, [r2, r1]\n    sub r0, #0x3b\n    ldr r0, [r2, r0]\n    mul r1, r4\n    bl PlayerProfile_SubMoney\n    pop {r4, pc}\n    _02257E30: .word 0x00000283"
    );
    #endif
}

void ov03_02257E34(void) {
    /* Original at 0x02257E34 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _02257E68 ; =0x000001E5\n    add r3, r0, #0\n    cmp r1, r2\n    blt _02257E54\n    add r0, r2, #6\n    cmp r1, r0\n    bgt _02257E54\n    add r0, r2, #0\n    add r0, #0x73\n    ldr r0, [r3, r0]\n    sub r1, r1, r2\n    mov r2, #1\n    bl ApricornBox_GiveApricorn\n    pop {r3, pc}\n    mov r1, #0x93\n    lsl r1, r1, #2\n    ldr r0, [r3, r1]\n    add r1, #0x38\n    ldrh r1, [r3, r1]\n    mov r2, #1\n    mov r3, #0xb\n    bl Bag_AddItem\n    pop {r3, pc}\n    _02257E68: .word 0x000001E5"
    );
    #endif
}

void ov03_02257E6C(void) {
    /* Original at 0x02257E6C */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldrb r0, [r4, r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    bne _02257E82\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    ldr r2, _02257F20 ; =0x00000283\n    ldrb r0, [r4, r2]\n    cmp r0, #0\n    bne _02257EA0\n    add r0, r2, #0\n    add r1, r2, #1\n    add r2, r2, #3\n    sub r0, #0x37\n    ldrh r1, [r4, r1]\n    ldrh r2, [r4, r2]\n    ldr r0, [r4, r0]\n    mov r3, #0xb\n    bl Bag_AddItem\n    b _02257EF0\n    cmp r0, #3\n    bne _02257EC6\n    add r1, r2, #1\n    ldrh r1, [r4, r1]\n    add r0, r4, #0\n    bl ov03_02257E34\n    mov r2, #0x95\n    lsl r2, r2, #2\n    add r1, r2, #0\n    ldr r0, [r4, r2]\n    add r1, #0x3c\n    add r2, #0x1d\n    ldr r3, [r4, r1]\n    ldrb r1, [r4, r2]\n    add r1, r3, r1\n    bl PokeathlonSave_SetUnkB7C_AtIndex\n    b _02257EF0\n    cmp r0, #4\n    bne _02257EDE\n    add r1, r2, #1\n    add r0, r2, #0\n    sub r0, #0x2f\n    ldrh r1, [r4, r1]\n    sub r2, #0x8a\n    ldr r0, [r4, r0]\n    sub r1, r1, r2\n    bl PokeathlonSave_SetUnkB78_AtIndex\n    b _02257EF0\n    add r0, r2, #0\n    add r1, r2, #1\n    add r2, r2, #3\n    sub r0, #0x37\n    ldrh r1, [r4, r1]\n    ldrsh r2, [r4, r2]\n    ldr r0, [r4, r0]\n    bl GiveOrTakeSeal\n    mov r1, #0xa3\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    sub r1, r1, #6\n    ldrsh r1, [r4, r1]\n    add r0, r4, #0\n    mul r1, r2\n    bl ov03_02257DF8\n    mov r3, #0x97\n    lsl r3, r3, #2\n    add r2, r3, #0\n    ldr r0, [r4, r3]\n    add r2, #0x30\n    add r3, #0x2a\n    ldr r5, [r4, r2]\n    ldrsh r2, [r4, r3]\n    mov r1, #0x24\n    mul r2, r5\n    bl GameStats_Add\n    mov r0, #0xd\n    pop {r3, r4, r5, pc}\n    nop\n    _02257F20: .word 0x00000283"
    );
    #endif
}

void ov03_02257F24(void) {
    /* Original at 0x02257F24 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldrb r0, [r4, r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    bne _02257F3A\n    mov r0, #0xd\n    pop {r4, pc}\n    ldr r0, _02257FEC ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _02257F4C\n    ldr r0, _02257FF0 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _02257FE6\n    mov r0, #0x99\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    cmp r1, #1\n    bne _02257F5E\n    sub r0, r0, #4\n    ldr r0, [r4, r0]\n    bl sub_02066D80\n    ldr r1, _02257FF4 ; =0x00000283\n    ldrb r0, [r4, r1]\n    cmp r0, #0\n    bne _02257F9E\n    add r0, r1, #1\n    ldrh r0, [r4, r0]\n    cmp r0, #4\n    bne _02257F9E\n    add r0, r1, #3\n    ldrsh r0, [r4, r0]\n    cmp r0, #0xa\n    blt _02257F9E\n    sub r1, #0x37\n    ldr r0, [r4, r1]\n    mov r1, #0xc\n    mov r2, #1\n    mov r3, #0xb\n    bl Bag_AddItem\n    cmp r0, #1\n    bne _02257F9E\n    mov r0, #0xa6\n    mov r1, #0xd\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    sub r0, #0x3c\n    ldr r0, [r4, r0]\n    mov r1, #0x33\n    bl GameStats_Inc\n    mov r0, #0xf\n    pop {r4, pc}\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_02258560\n    mov r1, #0x7e\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x4c\n    ldrh r1, [r4, r1]\n    bl Sprite_SetDrawFlag\n    mov r1, #0x7f\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x4a\n    ldrh r1, [r4, r1]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_022586BC\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_022582C0\n    mov r1, #0xa6\n    mov r0, #4\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r4, pc}\n    mov r0, #0xd\n    pop {r4, pc}\n    nop\n    _02257FEC: .word gSystem\n    _02257FF0: .word gSystem + 0x40\n    _02257FF4: .word 0x00000283"
    );
    #endif
}

void ov03_02257FF8(void) {
    /* Original at 0x02257FF8 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldrb r0, [r4, r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    bne _0225800E\n    mov r0, #0xe\n    pop {r4, pc}\n    ldr r0, _02258070 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _02258020\n    ldr r0, _02258074 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _0225806A\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_02258560\n    mov r1, #0x7e\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x4c\n    ldrh r1, [r4, r1]\n    bl Sprite_SetDrawFlag\n    mov r1, #0x7f\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x4a\n    ldrh r1, [r4, r1]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_022586BC\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_022582C0\n    mov r0, #0xa6\n    mov r1, #5\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #4\n    pop {r4, pc}\n    mov r0, #0xe\n    pop {r4, pc}\n    nop\n    _02258070: .word gSystem\n    _02258074: .word gSystem + 0x40"
    );
    #endif
}

void ov03_02258078(void) {
    /* Original at 0x02258078 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldrb r0, [r4, r0]\n    bl IsPrintFinished\n    cmp r0, #0\n    bne _0225808E\n    mov r0, #0xf\n    pop {r4, pc}\n    ldr r0, _022580F0 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _022580A0\n    ldr r0, _022580F4 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _022580EA\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_02258560\n    mov r1, #0x7e\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x4c\n    ldrh r1, [r4, r1]\n    bl Sprite_SetDrawFlag\n    mov r1, #0x7f\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x4a\n    ldrh r1, [r4, r1]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_022586BC\n    add r0, r4, #0\n    mov r1, #0\n    bl ov03_022582C0\n    mov r0, #0xa6\n    mov r1, #4\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #0xf\n    pop {r4, pc}\n    nop\n    _022580F0: .word gSystem\n    _022580F4: .word gSystem + 0x40"
    );
    #endif
}

void ov03_022580F8(void) {
    /* Original at 0x022580F8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r4, #0\n    cmp r2, #0\n    ble _02258118\n    add r5, r1, #0\n    ldrh r3, [r5]\n    cmp r0, r3\n    bne _02258110\n    lsl r0, r4, #2\n    add r0, r1, r0\n    ldrh r0, [r0, #2]\n    pop {r3, r4, r5, pc}\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r2\n    blt _02258102\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov03_02258120(void) {
    /* Original at 0x02258120 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, _02258160 ; =0x00000283\n    add r2, r0, #0\n    ldrb r0, [r2, r3]\n    cmp r0, #0\n    bne _02258138\n    add r0, r1, #0\n    mov r1, #0\n    mov r2, #0xb\n    bl GetItemAttr\n    pop {r3, pc}\n    cmp r0, #1\n    bne _02258140\n    mov r0, #0x64\n    pop {r3, pc}\n    add r0, #0xfd\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _0225815C\n    add r0, r1, #0\n    add r1, r3, #0\n    sub r1, #0x17\n    sub r3, #0x13\n    ldr r1, [r2, r1]\n    ldrb r2, [r2, r3]\n    bl ov03_022580F8\n    pop {r3, pc}\n    mov r0, #0x64\n    pop {r3, pc}\n    _02258160: .word 0x00000283"
    );
    #endif
}

void ov03_02258164(void) {
    ov01_021F6A9C();
}

void ov03_02258170(void) {
    /* Original at 0x02258170 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021F6B10\n    cmp r0, #0\n    bne _0225818C\n    add r0, r5, #0\n    bl ov01_021F6B00\n    cmp r0, #1\n    beq _0225818C\n    mov r0, #0x12\n    pop {r3, r4, r5, pc}\n    ldr r0, _022581B8 ; =0x00000281\n    mov r1, #0\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    ldr r1, [r5, #0x24]\n    bl Camera_Copy\n    add r0, r4, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    bl Camera_Delete\n    ldr r0, [r5, #0x24]\n    bl Camera_SetStaticPtr\n    add r0, r4, #0\n    bl ov03_02258288\n    mov r0, #0x1b\n    pop {r3, r4, r5, pc}\n    _022581B8: .word 0x00000281"
    );
    #endif
}

void ov03_022581BC(void) {
    /* Original at 0x022581BC */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r1, _0225827C ; =ov03_0225946C\n    add r7, r0, #0\n    add r0, #0x94\n    mov r2, #0x13\n    mov r3, #0xb\n    bl UnkFieldSpriteRenderer_ov01_021E7FDC_Init\n    add r0, r7, #0\n    str r0, [sp]\n    add r0, #0x94\n    ldr r4, _02258280 ; =ov03_022594F8\n    mov r6, #0\n    add r5, r7, #0\n    str r0, [sp]\n    ldr r0, [sp]\n    add r1, r4, #0\n    bl ov01_021E81F0\n    mov r1, #0x7e\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r6, r6, #1\n    add r4, #0x28\n    add r5, r5, #4\n    cmp r6, #0x13\n    blo _022581DA\n    add r0, r1, #0\n    add r0, #0x34\n    ldr r0, [r7, r0]\n    mov r1, #1\n    bl Sprite_SetPriority\n    mov r0, #9\n    lsl r0, r0, #6\n    ldr r0, [r7, r0]\n    mov r1, #1\n    bl Sprite_SetPriority\n    mov r0, #0x22\n    lsl r0, r0, #4\n    ldr r0, [r7, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #2\n    lsl r0, r0, #8\n    ldr r0, [r7, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r7, #0\n    mov r1, #0\n    bl ov03_022582C0\n    mov r1, #0x29\n    lsl r1, r1, #4\n    ldr r1, [r7, r1]\n    add r0, r7, #0\n    mov r2, #0\n    bl ov03_02257378\n    ldr r2, _02258284 ; =0x00000271\n    add r0, r7, #0\n    ldrb r1, [r7, r2]\n    sub r2, r2, #1\n    ldrb r2, [r7, r2]\n    bl ov03_02257758\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225827C: .word ov03_0225946C\n    _02258280: .word ov03_022594F8\n    _02258284: .word 0x00000271"
    );
    #endif
}

void ov03_02258288(void) {
    /* Original at 0x02258288 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    mov r7, #0x7e\n    str r0, [sp]\n    add r5, r0, #0\n    add r6, r4, #0\n    lsl r7, r7, #2\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Sprite_Delete\n    str r6, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x13\n    blo _02258296\n    ldr r0, [sp]\n    add r0, #0x94\n    bl UnkFieldSpriteRenderer_ov01_021E7FDC_Release\n    ldr r0, [sp]\n    mov r1, #0\n    add r0, #0x94\n    str r0, [sp]\n    str r1, [r0]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov03_022582C0(void) {
    /* Original at 0x022582C0 */
    /* Requires manual decompilation - 310 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    cmp r1, #0\n    beq _022582DA\n    cmp r1, #1\n    bne _022582D0\n    b _022583F4\n    cmp r1, #2\n    bne _022582D6\n    b _022584F2\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    ldr r4, _02258554 ; =ov03_022594F8\n    mov r7, #0\n    add r6, r5, #0\n    mov r0, #0xa4\n    ldrsh r0, [r4, r0]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x18]\n    mov r0, #0xa6\n    ldrsh r0, [r4, r0]\n    lsl r1, r0, #0xc\n    mov r0, #3\n    lsl r0, r0, #0x12\n    add r0, r1, r0\n    str r0, [sp, #0x1c]\n    mov r0, #0xa8\n    ldrsh r0, [r4, r0]\n    add r1, sp, #0x18\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x20]\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl Sprite_SetMatrix\n    add r7, r7, #1\n    add r4, #0x28\n    add r6, r6, #4\n    cmp r7, #6\n    blt _022582E0\n    mov r7, #0x27\n    ldr r4, _02258558 ; =ov03_02259850\n    mov r6, #0\n    lsl r7, r7, #4\n    ldrb r1, [r4, #1]\n    cmp r1, #4\n    bne _02258354\n    ldr r0, _0225855C ; =0x00000271\n    ldrb r0, [r5, r0]\n    add r1, r0, #6\n    ldrb r0, [r5, r7]\n    cmp r1, r0\n    ldrb r0, [r4]\n    bge _02258342\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    b _022583D0\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    b _022583D0\n    cmp r1, #3\n    bne _02258386\n    ldr r0, _0225855C ; =0x00000271\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    ldrb r0, [r4]\n    bne _02258374\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    b _022583D0\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    b _022583D0\n    cmp r1, #5\n    bne _022583C0\n    ldr r0, _0225855C ; =0x00000271\n    ldrb r0, [r5, r0]\n    add r1, r0, r6\n    mov r0, #0x27\n    lsl r0, r0, #4\n    ldrb r0, [r5, r0]\n    cmp r1, r0\n    ldrb r0, [r4]\n    bge _022583AE\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    b _022583D0\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    b _022583D0\n    ldrb r0, [r4]\n    lsl r0, r0, #2\n    add r2, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r2, r0]\n    bl Sprite_SetDrawFlag\n    add r6, r6, #1\n    add r4, r4, #3\n    cmp r6, #0xf\n    blo _0225831C\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #6\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    mov r7, #0x56\n    ldr r4, _02258558 ; =ov03_02259850\n    mov r6, #0\n    lsl r7, r7, #0xc\n    ldrb r1, [r4, #2]\n    cmp r1, #2\n    bne _02258452\n    mov r0, #0x29\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, r6\n    bne _0225843E\n    mov r0, #0x43\n    lsl r0, r0, #0xe\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldrb r0, [r4]\n    str r7, [sp, #0xc]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0xc\n    bl Sprite_SetMatrix\n    ldrb r0, [r4]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    b _022584CE\n    ldrb r0, [r4]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    b _022584CE\n    ldrb r0, [r4]\n    cmp r0, #0xe\n    beq _0225845C\n    cmp r0, #0x10\n    bne _0225848A\n    mov r1, #0xa2\n    lsl r1, r1, #2\n    ldrh r1, [r5, r1]\n    cmp r1, #0xa\n    bhs _02258478\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    b _022584CE\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    b _022584CE\n    cmp r0, #0xf\n    beq _02258492\n    cmp r0, #0x11\n    bne _022584C0\n    mov r1, #0xa2\n    lsl r1, r1, #2\n    ldrh r1, [r5, r1]\n    cmp r1, #1\n    bne _022584AE\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    b _022584CE\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    b _022584CE\n    lsl r0, r0, #2\n    add r2, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r2, r0]\n    bl Sprite_SetDrawFlag\n    add r6, r6, #1\n    add r4, r4, #3\n    cmp r6, #0xf\n    blo _022583FC\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x1a\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    mov r7, #0x56\n    ldr r4, _02258558 ; =ov03_02259850\n    mov r6, #0\n    lsl r7, r7, #0xc\n    mov r0, #0x29\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, r6\n    bne _02258536\n    mov r0, #0x43\n    lsl r0, r0, #0xe\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldrb r0, [r4]\n    str r7, [sp]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldrb r0, [r4]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    b _02258548\n    ldrb r0, [r4]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r6, r6, #1\n    add r4, r4, #3\n    cmp r6, #0xf\n    blo _022584FA\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _02258554: .word ov03_022594F8\n    _02258558: .word ov03_02259850\n    _0225855C: .word 0x00000271"
    );
    #endif
}

void ov03_02258560(void) {
    /* Original at 0x02258560 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #0\n    bne _02258586\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xb1\n    mov r2, #8\n    bl Sprite_SetPositionXY\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xb1\n    mov r2, #0x84\n    bl Sprite_SetPositionXY\n    pop {r4, pc}\n    mov r0, #0x7e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xa2\n    mov r2, #0x6c\n    bl Sprite_SetPositionXY\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xa2\n    mov r2, #0x84\n    bl Sprite_SetPositionXY\n    pop {r4, pc}"
    );
    #endif
}

void ov03_022585A4(void) {
    /* Original at 0x022585A4 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, _02258644 ; =0x00000283\n    add r6, r1, #0\n    ldrb r1, [r4, r0]\n    cmp r1, #0\n    beq _022585CA\n    cmp r1, #3\n    beq _022585CA\n    cmp r1, #4\n    beq _022585CA\n    sub r0, #0x7f\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    mov r0, #0x71\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #2\n    bl SpriteResourceCollection_Find\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #1\n    bl GetItemIndexMapping\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r5, #0\n    mov r2, #0x12\n    bl ReplaceCharResObjFromNarc\n    add r0, r5, #0\n    bl sub_0200AE8C\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl SpriteResourceCollection_Find\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #2\n    bl GetItemIndexMapping\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r5, #0\n    mov r2, #0x12\n    bl ReplacePlttResObjFromNarc\n    add r0, r5, #0\n    bl sub_0200B084\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _02258644: .word 0x00000283"
    );
    #endif
}

void ov03_02258648(void) {
    /* Original at 0x02258648 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #0x71\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r6, r3, #0\n    add r7, r2, #0\n    bl SpriteResourceCollection_Find\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #1\n    bl GetItemIndexMapping\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    mov r0, #0x71\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r5, #0\n    mov r2, #0x12\n    bl ReplaceCharResObjFromNarc\n    add r0, r5, #0\n    bl sub_0200AE8C\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r7, #0\n    bl SpriteResourceCollection_Find\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #2\n    bl GetItemIndexMapping\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r5, #0\n    mov r2, #0x12\n    bl ReplacePlttResObjFromNarc\n    add r0, r5, #0\n    bl sub_0200B084\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov03_022586BC(void) {
    /* Original at 0x022586BC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #2\n    lsl r2, r2, #8\n    ldr r3, _022586C8 ; =thunk_Sprite_SetPaletteOverride\n    ldr r0, [r0, r2]\n    bx r3\n    nop\n    _022586C8: .word thunk_Sprite_SetPaletteOverride"
    );
    #endif
}

void ov03_022586CC(void) {
    /* Original at 0x022586CC */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0xa7\n    lsl r3, r3, #2\n    add r3, r0, r3\n    strb r1, [r3]\n    mov r0, #0\n    strb r0, [r3, #1]\n    strb r0, [r3, #2]\n    strb r2, [r3, #3]\n    mov r0, #0x15\n    bx lr"
    );
    #endif
}

void ov03_022586E0(void) {
    /* Original at 0x022586E0 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0xa7\n    lsl r1, r1, #2\n    add r4, r0, r1\n    ldrb r2, [r4, #1]\n    cmp r2, #0\n    beq _022586F8\n    cmp r2, #1\n    beq _02258710\n    cmp r2, #2\n    beq _02258738\n    b _02258748\n    ldrb r2, [r4]\n    sub r1, #0xa4\n    lsl r2, r2, #2\n    add r0, r0, r2\n    ldr r0, [r0, r1]\n    mov r1, #7\n    bl thunk_Sprite_SetPaletteOverride\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    b _02258748\n    ldrb r2, [r4, #2]\n    add r2, r2, #1\n    strb r2, [r4, #2]\n    ldrb r2, [r4, #2]\n    cmp r2, #4\n    bne _02258748\n    ldrb r2, [r4]\n    sub r1, #0xa4\n    lsl r2, r2, #2\n    add r0, r0, r2\n    ldr r0, [r0, r1]\n    mov r1, #6\n    bl thunk_Sprite_SetPaletteOverride\n    mov r0, #0\n    strb r0, [r4, #2]\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    b _02258748\n    ldrb r0, [r4, #2]\n    add r0, r0, #1\n    strb r0, [r4, #2]\n    ldrb r0, [r4, #2]\n    cmp r0, #2\n    bne _02258748\n    ldrb r0, [r4, #3]\n    pop {r4, pc}\n    mov r0, #0x15\n    pop {r4, pc}"
    );
    #endif
}

void ov03_0225874C(void) {
    ov01_021E636C(0, 0x17);
}

void ov03_02258764(void) {
    /* Original at 0x02258764 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r0, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _022587C2\n    add r0, r6, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r6, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Save_Bag_Get\n    ldr r1, _022587C8 ; =ov03_022597F0\n    mov r2, #0xb\n    bl Bag_CreateView\n    str r0, [r4, #4]\n    mov r0, #0x43\n    lsl r0, r0, #2\n    add r0, r5, r0\n    str r0, [sp]\n    add r3, r5, #0\n    add r3, #0x94\n    ldr r0, [r4, #4]\n    ldr r1, [r5, #0xc]\n    ldr r3, [r3]\n    mov r2, #2\n    bl sub_0207789C\n    ldr r1, [r4, #4]\n    add r0, r5, #0\n    bl Bag_LaunchApp\n    ldr r1, _022587CC ; =sub_02092B04\n    add r0, r6, #0\n    add r2, r4, #0\n    bl TaskManager_Jump\n    ldr r0, _022587D0 ; =0x00000272\n    mov r1, #0x18\n    strb r1, [r4, r0]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _022587C8: .word ov03_022597F0\n    _022587CC: .word sub_02092B04\n    _022587D0: .word 0x00000272"
    );
    #endif
}

void ov03_022587D4(void) {
    IsPaletteFadeFinished();
}

void ov03_022587E8(void) {
    /* Original at 0x022587E8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "cmp r2, #0\n    ble _022587FE\n    cmp r0, r1\n    bne _022587F4\n    mov r0, #1\n    bx lr\n    add r0, r0, r2\n    cmp r0, r1\n    ble _0225880E\n    add r0, r1, #0\n    bx lr\n    cmp r0, #1\n    bne _02258806\n    add r0, r1, #0\n    bx lr\n    add r0, r0, r2\n    cmp r0, #0\n    bgt _0225880E\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov03_02258810(void) {
    *(u32*)r1 = r0;
}

void ov03_02258814(void) {
    /* Original at 0x02258814 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02258820 ; =sub_0203410C\n    add r2, r0, #0\n    ldr r0, _02258824 ; =ov03_022597FC\n    mov r1, #1\n    bx r3\n    nop\n    _02258820: .word sub_0203410C\n    _02258824: .word ov03_022597FC"
    );
    #endif
}

void ov03_02258828(void) {
    r0 = r0 << 2;
}

void ov03_02258830(void) {
    GF_AssertFail(0xba);
}

void ov03_0225884C(void) {
    /* Original at 0x0225884C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r2, #0\n    add r4, r3, #0\n    bl sub_0203769C\n    cmp r5, r0\n    beq _02258876\n    ldr r0, [r4, #4]\n    mov r1, #1\n    add r2, r6, #0\n    bl SafariZone_SetAreaSet\n    add r0, r5, #0\n    bl sub_02034818\n    add r1, r0, #0\n    ldr r0, [r4, #4]\n    mov r2, #0xb\n    bl SafariZone_SetLinkLeaderFromProfile\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov03_02258878(void) {
    /* Original at 0x02258878 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02258890 ; =0x000005D8\n    mov r0, #0xb\n    bl Heap_AllocAtEnd\n    ldr r2, _02258890 ; =0x000005D8\n    mov r1, #0\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r4, #0\n    pop {r4, pc}\n    _02258890: .word 0x000005D8"
    );
    #endif
}

void ov03_02258894(void) {
    /* Original at 0x02258894 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl TaskManager_GetEnvironment\n    ldr r1, [r0]\n    cmp r1, #0\n    bne _022588A8\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, pc}\n    blx r1\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov03_022588B0(void) {
    /* Original at 0x022588B0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xd\n    bl sub_02037B38\n    cmp r0, #0\n    beq _022588D2\n    bl sub_0203769C\n    mov r1, #1\n    sub r0, r1, r0\n    bl sub_02034818\n    mov r0, #0\n    add r1, r4, #0\n    bl ov03_02258810\n    pop {r4, pc}"
    );
    #endif
}

void ov03_022588D4(void) {
    /* Original at 0x022588D4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xc\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0225890A\n    mov r0, #1\n    bl sub_02034818\n    cmp r0, #0\n    beq _0225890A\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl SafariZone_GetAreaSet\n    add r1, r0, #0\n    mov r0, #0x16\n    bl sub_020376D4\n    mov r0, #0xd\n    bl sub_02037AC0\n    ldr r0, _0225890C ; =ov03_022588B0\n    add r1, r4, #0\n    bl ov03_02258810\n    pop {r4, pc}\n    _0225890C: .word ov03_022588B0"
    );
    #endif
}

void ov03_02258910(void) {
    /* Original at 0x02258910 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov03_02258878\n    add r4, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Save_SafariZone_Get\n    str r0, [r4, #4]\n    add r0, r4, #0\n    bl ov03_02258814\n    mov r0, #0xc\n    bl sub_02037AC0\n    ldr r0, _02258944 ; =ov03_022588D4\n    add r1, r4, #0\n    bl ov03_02258810\n    ldr r0, [r5, #0x10]\n    ldr r1, _02258948 ; =ov03_02258894\n    add r2, r4, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, pc}\n    nop\n    _02258944: .word ov03_022588D4\n    _02258948: .word ov03_02258894"
    );
    #endif
}

void ScrCmd_716(void) {
    /* Original at 0x0225894C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    mov r1, #0x14\n    bl FieldSysGetAttrAddr\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    bl SafariAreaCustomizer_LaunchApp\n    str r0, [r4]\n    ldr r1, _02258974 ; =ScrNative_WaitApplication_DestroyTaskData\n    add r0, r5, #0\n    bl SetupNativeScript\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _02258974: .word ScrNative_WaitApplication_DestroyTaskData"
    );
    #endif
}

u32 ScrCmd_717(void) {
    ScriptReadHalfword();
    GetVarPointer(r4, r0);
    sub_02097720(*((u32*)(r4 + 0x74)), r0);
    return 1;
}

void ScrCmd_718(void) {
    /* Original at 0x02258998 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    mov r1, #0x10\n    bl FieldSysGetAttrAddr\n    ldr r1, [r5, #8]\n    add r6, r0, #0\n    add r0, r1, #1\n    str r0, [r5, #8]\n    add r0, r5, #0\n    ldrb r4, [r1]\n    bl ScriptReadHalfword\n    add r5, #0x80\n    add r1, r0, #0\n    ldr r0, [r5]\n    bl FieldSystem_VarGet\n    add r2, r0, #0\n    lsl r2, r2, #0x18\n    ldr r0, [r6]\n    add r1, r4, #0\n    lsr r2, r2, #0x18\n    bl BufferSafariZoneObjectName\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ScrCmd_719(void) {
    /* Original at 0x022589D4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, #0x80\n    ldr r6, [r0]\n    mov r1, #0x10\n    add r0, r6, #0\n    bl FieldSysGetAttrAddr\n    add r0, r5, #0\n    bl ScriptReadHalfword\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    bl GetVarPointer\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ScriptReadHalfword\n    add r5, #0x80\n    add r1, r0, #0\n    ldr r0, [r5]\n    bl GetVarPointer\n    add r1, r0, #0\n    add r0, r6, #0\n    bl ov02_0224E754\n    strh r0, [r4]\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ScrCmd_720(void) {
    /* Original at 0x02258A18 */
    /* Requires manual decompilation - 203 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r4, r0, #0\n    add r0, #0x80\n    ldr r5, [r0]\n    mov r1, #0x10\n    add r0, r5, #0\n    bl FieldSysGetAttrAddr\n    add r0, r4, #0\n    bl ScriptReadHalfword\n    add r4, #0x80\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl FieldSystem_VarGet\n    str r0, [sp]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    add r4, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetXCoord\n    add r6, r0, #0\n    add r0, r4, #0\n    bl GetDeltaXByFacingDirection\n    add r7, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetZCoord\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    bl GetDeltaYByFacingDirection\n    add r2, r6, r7\n    sub r2, #0x20\n    asr r1, r2, #4\n    lsr r1, r1, #0x1b\n    add r1, r2, r1\n    ldr r2, [sp, #0x14]\n    asr r1, r1, #5\n    add r2, r2, r0\n    sub r2, #0x20\n    asr r0, r2, #4\n    lsr r0, r0, #0x1b\n    add r0, r2, r0\n    asr r2, r0, #5\n    lsl r0, r2, #1\n    add r0, r2, r0\n    add r0, r1, r0\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0xc]\n    bl Save_SafariZone_Get\n    mov r1, #0\n    bl SafariZone_GetAreaSet\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x2c]\n    bl ov01_021F6320\n    add r4, r0, #0\n    lsl r0, r4, #0x18\n    ldr r1, [r5, #0x2c]\n    lsr r0, r0, #0x18\n    add r2, sp, #0x20\n    bl ov01_021F630C\n    lsl r1, r4, #0x18\n    ldr r0, [r5, #0x2c]\n    lsr r1, r1, #0x18\n    bl ov01_021F65E4\n    str r0, [sp, #8]\n    lsl r1, r4, #0x18\n    ldr r0, [r5, #0x2c]\n    lsr r1, r1, #0x18\n    bl ov01_021F65F0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    mov r1, #0x7a\n    mul r1, r0\n    ldr r0, [sp, #0xc]\n    add r0, r0, r1\n    add r1, r0, #2\n    ldr r0, [sp]\n    lsl r0, r0, #2\n    add r4, r1, r0\n    ldr r0, [r5, #0xc]\n    bl Save_PlayerData_GetProfile\n    bl PlayerProfile_GetTrainerGender\n    add r2, r0, #0\n    lsl r2, r2, #0x18\n    ldrb r1, [r4]\n    add r0, sp, #0x1c\n    lsr r2, r2, #0x18\n    bl GetSafariObjectConfig\n    ldrb r0, [r4, #3]\n    mov ip, r0\n    add r0, sp, #0x1c\n    ldrb r0, [r0, #1]\n    lsl r0, r0, #0x19\n    lsr r1, r0, #0x1d\n    mov r0, ip\n    sub r1, r0, r1\n    mov r0, ip\n    cmp r0, r1\n    ble _02258B54\n    mov r0, ip\n    lsl r6, r0, #5\n    add r7, sp, #0x1c\n    ldrb r0, [r7, #1]\n    ldrb r1, [r4, #1]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    cmp r1, r0\n    bge _02258B3A\n    ldr r0, [sp, #4]\n    lsl r3, r6, #1\n    add r0, r0, r6\n    add r2, r0, r1\n    ldr r0, [sp, #8]\n    add r3, r0, r3\n    lsl r0, r1, #1\n    add r3, r3, r0\n    ldrb r0, [r2]\n    add r1, r1, #1\n    add r2, r2, #1\n    strh r0, [r3]\n    ldrb r5, [r7, #1]\n    ldrb r0, [r4, #1]\n    add r3, r3, #2\n    lsl r5, r5, #0x1c\n    lsr r5, r5, #0x1d\n    add r0, r0, r5\n    cmp r1, r0\n    blt _02258B22\n    add r1, sp, #0x1c\n    mov r0, ip\n    ldrb r1, [r1, #1]\n    sub r0, r0, #1\n    mov ip, r0\n    lsl r1, r1, #0x19\n    ldrb r0, [r4, #3]\n    lsr r1, r1, #0x1d\n    sub r6, #0x20\n    sub r1, r0, r1\n    mov r0, ip\n    cmp r0, r1\n    bgt _02258B02\n    mov r5, #0\n    lsl r1, r5, #0x18\n    ldr r0, [sp, #0x20]\n    lsr r1, r1, #0x18\n    bl ov01_021F3B44\n    str r0, [sp, #0x18]\n    bl ov01_021F3B30\n    cmp r0, #0\n    beq _02258BC0\n    ldr r1, [sp, #0x18]\n    add r0, sp, #0x24\n    bl ov01_021F3B0C\n    ldr r0, [sp, #0x2c]\n    ldrb r2, [r4, #1]\n    asr r1, r0, #0xc\n    add r1, #0xf8\n    asr r0, r1, #3\n    lsr r0, r0, #0x1c\n    add r0, r1, r0\n    lsl r0, r0, #0xc\n    asr r3, r0, #0x10\n    ldr r0, [sp, #0x24]\n    asr r1, r0, #0xc\n    add r1, #0xf8\n    asr r0, r1, #3\n    lsr r0, r0, #0x1c\n    add r0, r1, r0\n    lsl r0, r0, #0xc\n    asr r1, r0, #0x10\n    cmp r1, r2\n    blt _02258BC0\n    ldrb r0, [r4, #3]\n    cmp r3, r0\n    bgt _02258BC0\n    add r6, sp, #0x1c\n    ldrb r7, [r6, #1]\n    lsl r6, r7, #0x1c\n    lsr r6, r6, #0x1d\n    add r2, r2, r6\n    cmp r1, r2\n    bge _02258BC0\n    lsl r1, r7, #0x19\n    lsr r1, r1, #0x1d\n    sub r0, r0, r1\n    cmp r3, r0\n    ble _02258BC0\n    ldr r0, [sp, #0x18]\n    mov r1, #1\n    bl ov01_021F3B2C\n    b _02258BC6\n    add r5, r5, #1\n    cmp r5, #0x20\n    blt _02258B56\n    ldr r2, [sp]\n    ldr r0, [sp, #0xc]\n    lsl r2, r2, #0x18\n    ldr r1, [sp, #0x10]\n    lsr r2, r2, #0x18\n    bl SafariZone_RemoveObjectFromArea\n    mov r0, #0\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

u32 ScrCmd_721(void) {
    ScriptReadHalfword();
    GetVarPointer(r4, r0);
    ov02_0224E698();
    return 0;
}

void ScrCmd_791(void) {
    /* Original at 0x02258C00 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    ldr r2, _02258CD4 ; =ov03_02259808\n    add r1, sp, #0x14\n    ldrh r3, [r2]\n    ldrh r2, [r2, #2]\n    add r5, r0, #0\n    strh r3, [r1]\n    strh r2, [r1, #2]\n    add r1, r5, #0\n    add r1, #0x80\n    ldr r2, [r5, #8]\n    ldr r4, [r1]\n    add r1, r2, #1\n    str r1, [r5, #8]\n    ldrb r1, [r2]\n    str r1, [sp, #8]\n    bl ScriptReadHalfword\n    add r5, #0x80\n    add r1, r0, #0\n    ldr r0, [r5]\n    bl GetVarPointer\n    str r0, [sp]\n    ldr r0, [r4, #0xc]\n    bl SaveArray_Party_Get\n    str r0, [sp, #4]\n    bl Party_GetCount\n    add r6, r0, #0\n    ldr r0, [r4, #0xc]\n    bl Save_PlayerData_GetProfile\n    bl PlayerProfile_GetTrainerID\n    str r0, [sp, #0xc]\n    ldr r0, _02258CD8 ; =0x00000165\n    bl MapHeader_GetMapSec\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    mov r5, #0\n    cmp r6, #0\n    ble _02258CCA\n    ldr r0, [sp, #8]\n    lsl r0, r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    bl Party_GetMonByIndex\n    mov r1, #0x4c\n    mov r2, #0\n    add r4, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _02258CC4\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0\n    bl GetMonData\n    ldr r1, [sp, #0xc]\n    cmp r1, r0\n    bne _02258CC4\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    ldr r1, [sp, #0x10]\n    add r2, sp, #0x14\n    ldrh r1, [r2, r1]\n    cmp r1, r0\n    bne _02258CC4\n    add r0, r4, #0\n    mov r1, #0x98\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _02258CC4\n    add r0, r4, #0\n    mov r1, #0x99\n    mov r2, #0\n    bl GetMonData\n    cmp r7, r0\n    bne _02258CC4\n    ldr r0, [sp]\n    mov r1, #1\n    strh r1, [r0]\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r5, r5, #1\n    cmp r5, r6\n    blt _02258C62\n    ldr r1, [sp]\n    mov r0, #0\n    strh r0, [r1]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _02258CD4: .word ov03_02259808\n    _02258CD8: .word 0x00000165"
    );
    #endif
}

u32 ScrCmd_792(void) {
    Save_SafariZone_Get(*((u32*)(r5 + 0xc)));
    Save_PlayerData_GetIGTAddr(*((u32*)(r5 + 0xc)));
    sub_0202F784(r4, r0);
    return 0;
}

void ov03_02258CFC(void) {
    /* Original at 0x02258CFC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    mov r0, #0xb\n    mov r1, #0x40\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [r4]\n    str r6, [r4, #4]\n    ldr r0, [r5, #8]\n    str r0, [r4, #0xc]\n    str r5, [r4, #8]\n    ldr r0, [r5, #0xc]\n    bl Save_Pokeathlon_Get\n    str r0, [r4, #0x20]\n    bl PokeathlonSave_GetUnkB00\n    str r0, [r4, #0x24]\n    ldr r0, [r5, #0x10]\n    ldr r1, _02258D38 ; =ov03_02258D3C\n    add r2, r4, #0\n    bl TaskManager_Call\n    pop {r4, r5, r6, pc}\n    nop\n    _02258D38: .word ov03_02258D3C"
    );
    #endif
}

void ov03_02258D3C(void) {
    /* Original at 0x02258D3C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r1, [r4]\n    cmp r1, #0\n    beq _02258D58\n    cmp r1, #1\n    beq _02258D6C\n    b _02258D84\n    bl ov03_02258DE8\n    ldr r1, [r4, #4]\n    add r0, r4, #0\n    bl ov03_02258EE8\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02258D84\n    bl ov03_02258D88\n    cmp r0, #0\n    beq _02258D84\n    add r0, r4, #0\n    bl ov03_02258E88\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov03_02258D88(void) {
    /* Original at 0x02258D88 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl System_GetTouchNew\n    cmp r0, #0\n    beq _02258DAC\n    ldr r0, _02258DDC ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x43\n    ldr r1, [r4, #8]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    mov r1, #1\n    bl MenuInputStateMgr_SetState\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, _02258DE0 ; =gSystem\n    ldr r1, [r0, #0x48]\n    ldr r0, _02258DE4 ; =0x00000CF3\n    tst r0, r1\n    beq _02258DC4\n    mov r0, #0x43\n    ldr r1, [r4, #8]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    mov r1, #0\n    bl MenuInputStateMgr_SetState\n    ldr r0, _02258DE0 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _02258DD8\n    ldr r0, _02258DDC ; =0x000005DD\n    bl PlaySE\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _02258DDC: .word 0x000005DD\n    _02258DE0: .word gSystem\n    _02258DE4: .word 0x00000CF3"
    );
    #endif
}

void ov03_02258DE8(void) {
    /* Original at 0x02258DE8 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    mov r1, #1\n    add r4, r0, #0\n    str r1, [sp]\n    mov r0, #0x1c\n    str r0, [sp, #4]\n    mov r0, #0x16\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0x10\n    mov r2, #3\n    mov r3, #2\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, [r4, #0xc]\n    ldr r2, _02258E84 ; =0x000003D9\n    mov r1, #3\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    add r0, r4, #0\n    ldr r2, _02258E84 ; =0x000003D9\n    add r0, #0x10\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    add r0, r4, #0\n    add r0, #0x10\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r1, #0x1b\n    add r2, r1, #0\n    mov r0, #0\n    add r2, #0xfa\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x28]\n    mov r0, #3\n    mov r1, #0x10\n    mov r2, #4\n    bl MessageFormat_New_Custom\n    str r0, [r4, #0x2c]\n    mov r0, #0x80\n    mov r1, #4\n    bl String_New\n    str r0, [r4, #0x30]\n    mov r0, #0x80\n    mov r1, #4\n    bl String_New\n    str r0, [r4, #0x34]\n    ldr r0, [r4, #0x28]\n    mov r1, #1\n    bl NewString_ReadMsgData\n    str r0, [r4, #0x38]\n    ldr r0, [r4, #0x28]\n    mov r1, #3\n    bl NewString_ReadMsgData\n    str r0, [r4, #0x3c]\n    add sp, #0x14\n    pop {r3, r4, pc}\n    nop\n    _02258E84: .word 0x000003D9"
    );
    #endif
}

void ov03_02258E88(void) {
    /* Original at 0x02258E88 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x3c]\n    bl String_Delete\n    ldr r0, [r4, #0x38]\n    bl String_Delete\n    ldr r0, [r4, #0x34]\n    bl String_Delete\n    ldr r0, [r4, #0x30]\n    bl String_Delete\n    ldr r0, [r4, #0x2c]\n    bl MessageFormat_Delete\n    ldr r0, [r4, #0x28]\n    bl DestroyMsgData\n    add r0, r4, #0\n    add r0, #0x10\n    mov r1, #1\n    bl sub_0200E5D4\n    add r0, r4, #0\n    add r0, #0x10\n    bl RemoveWindow\n    ldr r0, [r4, #0xc]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    pop {r4, pc}"
    );
    #endif
}

void ov03_02258ECC(void) {
    PokeathlonSave_GetUnkB78_AtIndex(1);
}

void ov03_02258EE8(void) {
    /* Original at 0x02258EE8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r2, _02258F44 ; =ov03_0225980C\n    add r6, r0, #0\n    lsl r0, r1, #2\n    str r0, [sp]\n    ldr r0, [r2, r0]\n    mov r7, #0\n    cmp r0, #0\n    ble _02258F32\n    mov r0, #0xa\n    add r4, r1, #0\n    mul r4, r0\n    mov r5, #8\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov03_02258ECC\n    cmp r0, #0\n    beq _02258F1A\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov03_02258F8C\n    b _02258F22\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov03_02258F48\n    ldr r1, _02258F44 ; =ov03_0225980C\n    ldr r0, [sp]\n    add r7, r7, #1\n    ldr r0, [r1, r0]\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r7, r0\n    blt _02258F02\n    add r0, r6, #0\n    add r0, #0x10\n    bl ScheduleWindowCopyToVram\n    ldr r0, [r6, #0xc]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    pop {r3, r4, r5, r6, r7, pc}\n    _02258F44: .word ov03_0225980C"
    );
    #endif
}

void ov03_02258F48(void) {
    /* Original at 0x02258F48 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r5, r0, #0\n    str r4, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02258F88 ; =0x0001020F\n    mov r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    ldr r2, [r5, #0x3c]\n    add r0, #0x10\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    str r4, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02258F88 ; =0x0001020F\n    mov r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    ldr r2, [r5, #0x38]\n    add r0, #0x10\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _02258F88: .word 0x0001020F"
    );
    #endif
}

void ov03_02258F8C(void) {
    /* Original at 0x02258F8C */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r2, #0\n    add r4, r1, #0\n    ldr r0, [r5, #0x28]\n    ldr r2, [r5, #0x34]\n    add r1, r6, #4\n    bl ReadMsgDataIntoString\n    str r4, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02259064 ; =0x0001020F\n    mov r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    ldr r2, [r5, #0x34]\n    add r0, #0x10\n    mov r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [r5, #0x24]\n    add r1, r6, #0\n    bl ov03_02259070\n    add r7, r0, #0\n    ldr r0, _02259068 ; =0x0098967F\n    cmp r7, r0\n    blo _02258FCC\n    add r7, r0, #0\n    cmp r6, #9\n    bne _02259028\n    ldr r0, [r5, #0x28]\n    ldr r2, [r5, #0x30]\n    mov r1, #2\n    bl ReadMsgDataIntoString\n    add r0, r7, #0\n    mov r1, #0x3c\n    bl _u32_div_f\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    add r0, r7, #0\n    mov r1, #0x3c\n    bl _u32_div_f\n    lsl r0, r1, #0x10\n    lsr r7, r0, #0x10\n    ldr r0, _0225906C ; =0x000003E7\n    cmp r6, r0\n    bls _02258FFA\n    add r6, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x2c]\n    mov r1, #0\n    add r2, r6, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r3, #2\n    str r3, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    ldr r0, [r5, #0x2c]\n    add r2, r7, #0\n    bl BufferIntegerAsString\n    ldr r0, [r5, #0x2c]\n    ldr r1, [r5, #0x34]\n    ldr r2, [r5, #0x30]\n    bl StringExpandPlaceholders\n    b _02259036\n    mov r3, #1\n    str r3, [sp]\n    ldr r0, [r5, #0x34]\n    add r1, r7, #0\n    mov r2, #7\n    bl String16_FormatInteger\n    mov r0, #0\n    ldr r1, [r5, #0x34]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0xe0\n    sub r3, r1, r0\n    str r4, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02259064 ; =0x0001020F\n    mov r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    ldr r2, [r5, #0x34]\n    add r0, #0x10\n    sub r3, #8\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02259064: .word 0x0001020F\n    _02259068: .word 0x0098967F\n    _0225906C: .word 0x000003E7"
    );
    #endif
}

void ov03_02259070(void) {
    /* Original at 0x02259070 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0xa\n    blt _02259082\n    cmp r1, #0x13\n    bgt _02259082\n    sub r1, #0xa\n    lsl r1, r1, #2\n    add r0, r0, r1\n    ldr r0, [r0, #0x44]\n    bx lr\n    cmp r1, #0x1c\n    bhi _02259128\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02259092: ; jump table\n    ldr r0, [r0, #4]\n    bx lr\n    ldr r0, [r0, #8]\n    bx lr\n    ldr r0, [r0, #0xc]\n    bx lr\n    ldr r0, [r0, #0x10]\n    bx lr\n    mov r3, #0\n    add r2, r3, #0\n    ldr r1, [r0, #0x44]\n    add r2, r2, #1\n    add r3, r3, r1\n    add r0, r0, #4\n    cmp r2, #0xa\n    blt _022590E0\n    add r0, r3, #0\n    bx lr\n    ldr r0, [r0, #0x6c]\n    bx lr\n    ldr r0, [r0, #0x38]\n    bx lr\n    ldr r0, [r0, #0x3c]\n    bx lr\n    ldr r0, [r0, #0x40]\n    bx lr\n    ldr r0, [r0]\n    bx lr\n    ldr r0, [r0, #0x14]\n    bx lr\n    ldr r0, [r0, #0x2c]\n    bx lr\n    ldr r0, [r0, #0x1c]\n    bx lr\n    ldr r0, [r0, #0x24]\n    bx lr\n    ldr r0, [r0, #0x30]\n    bx lr\n    ldr r0, [r0, #0x34]\n    bx lr\n    ldr r0, [r0, #0x20]\n    bx lr\n    ldr r0, [r0, #0x18]\n    bx lr\n    ldr r0, [r0, #0x28]\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}
