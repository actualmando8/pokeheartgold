/* Decompiled from asm/unk_020932E0.s */
#include "global.h"

void sub_020932E0(void) {
    /* Original at 0x020932E0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    ldr r1, _02093348 ; =0x000046E8\n    add r6, r0, #0\n    add r7, r2, #0\n    bl Heap_Alloc\n    ldr r2, _02093348 ; =0x000046E8\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    cmp r5, #0\n    bne _02093300\n    bl GF_AssertFail\n    str r6, [r4, #4]\n    strb r5, [r4, #0xd]\n    strb r7, [r4, #0x10]\n    ldrb r0, [r4, #0xd]\n    cmp r0, #3\n    bls _02093314\n    bl GF_AssertFail\n    mov r0, #3\n    strb r0, [r4, #0xd]\n    ldrb r2, [r4, #0xd]\n    mov r1, #0xc\n    ldr r0, [r4, #4]\n    mul r1, r2\n    bl Heap_Alloc\n    mov r1, #0x8d\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldrb r1, [r4, #0xd]\n    ldr r0, [r4, #4]\n    add r1, #0x22\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    ldr r1, _0209334C ; =0x000007E4\n    str r0, [r4, r1]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0xf\n    bl sub_02095CE0\n    ldr r1, _02093350 ; =0x000046B8\n    str r0, [r4, r1]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02093348: .word 0x000046E8\n    _0209334C: .word 0x000007E4\n    _02093350: .word 0x000046B8"
    );
    #endif
}

void sub_02093354(void) {
    /* Original at 0x02093354 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0209341C ; =0x000046B8\n    ldr r0, [r5, r0]\n    bl sub_02095D2C\n    add r0, r5, #0\n    bl sub_0209515C\n    ldr r0, _02093420 ; =0x00004650\n    mov r1, #1\n    add r0, r5, r0\n    bl sub_020950F8\n    ldr r0, _02093424 ; =0x00004670\n    add r0, r5, r0\n    bl RemoveWindow\n    add r0, r5, #0\n    bl sub_020950D4\n    ldr r0, _02093428 ; =0x000046C8\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    ldr r0, _0209342C ; =0x000046CC\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    mov r0, #0x57\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200AEB0\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl sub_0200B0A8\n    mov r7, #0x51\n    mov r6, #0\n    add r4, r5, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    bl Destroy2DGfxResObjMan\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #6\n    blt _020933AA\n    ldr r0, [r5, #0x18]\n    bl SpriteList_Delete\n    ldr r0, _02093430 ; =0x000046A4\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    ldr r0, [r5, #8]\n    bl YesNoPrompt_Destroy\n    ldr r0, _02093434 ; =0x000007E4\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    mov r0, #0x8d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    mov r0, #4\n    bl FontID_Release\n    ldr r0, _02093438 ; =gSystem + 0x60\n    mov r1, #0\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    ldr r0, _0209343C ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    ldr r0, [r5]\n    bl FreeBgTilemapBuffer\n    ldr r0, [r5]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    ldr r0, [r5]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    ldr r0, [r5]\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    add r0, r5, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0209341C: .word 0x000046B8\n    _02093420: .word 0x00004650\n    _02093424: .word 0x00004670\n    _02093428: .word 0x000046C8\n    _0209342C: .word 0x000046CC\n    _02093430: .word 0x000046A4\n    _02093434: .word 0x000007E4\n    _02093438: .word gSystem + 0x60\n    _0209343C: .word 0x04000050"
    );
    #endif
}

void sub_02093440(void) {
    /* Original at 0x02093440 */
    /* Requires manual decompilation - 145 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl YesNoPrompt_Create\n    str r0, [r5, #8]\n    ldr r0, _02093580 ; =0x0000463C\n    ldr r2, [sp, #0x48]\n    str r6, [r5, r0]\n    add r1, r0, #4\n    str r7, [r5, r1]\n    add r1, r0, #0\n    str r4, [r5]\n    add r1, #0xa0\n    str r2, [r5, r1]\n    add r1, r0, #0\n    ldr r2, [sp, #0x44]\n    add r1, #0x9c\n    str r2, [r5, r1]\n    ldr r1, [sp, #0x34]\n    mov r2, #0\n    strb r1, [r5, #0xf]\n    add r1, r0, #0\n    mvn r2, r2\n    add r1, #0xa8\n    str r2, [r5, r1]\n    add r0, #0xa4\n    str r2, [r5, r0]\n    ldr r0, [sp, #0x30]\n    strb r0, [r5, #0x13]\n    ldr r0, [r5]\n    ldr r1, [r5, #4]\n    bl sub_02094D9C\n    add r0, r5, #0\n    bl sub_02093A50\n    add r0, r5, #0\n    bl sub_02093B40\n    add r0, r5, #0\n    bl sub_02094004\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    ldr r1, [r5, #4]\n    mov r0, #4\n    bl FontID_Alloc\n    mov r1, #0x1a\n    ldr r2, [r5, #4]\n    mov r0, #0\n    lsl r1, r1, #4\n    bl LoadFontPal0\n    mov r1, #6\n    ldr r2, [r5, #4]\n    mov r0, #0\n    lsl r1, r1, #6\n    bl LoadFontPal0\n    ldr r0, [sp, #0x28]\n    ldr r1, [sp, #0x30]\n    strb r0, [r5, #0x11]\n    ldr r0, [sp, #0x2c]\n    lsl r1, r1, #0x18\n    strb r0, [r5, #0x12]\n    ldr r0, _02093584 ; =0x000046B8\n    lsr r1, r1, #0x18\n    ldr r0, [r5, r0]\n    bl sub_02095D1C\n    ldr r0, _02093584 ; =0x000046B8\n    mov r1, #2\n    ldr r0, [r5, r0]\n    mov r2, #0\n    bl sub_02095D40\n    add r0, r5, #0\n    bl sub_02093B84\n    ldr r0, [sp, #0x38]\n    ldr r1, _02093588 ; =0x00004648\n    ldr r2, [sp, #0x3c]\n    str r0, [r5, r1]\n    add r0, r1, #4\n    str r2, [r5, r0]\n    mov r2, #1\n    add r1, #8\n    str r2, [sp]\n    mov r3, #0xd\n    str r3, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    mov r0, #0xa0\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    add r1, r5, r1\n    mov r3, #4\n    bl AddWindowParameterized\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xc\n    str r0, [sp, #0xc]\n    mov r0, #0xba\n    ldr r1, _0209358C ; =0x00004670\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    add r1, r5, r1\n    mov r2, #1\n    mov r3, #0x19\n    bl AddWindowParameterized\n    add r0, r5, #0\n    bl sub_02094D1C\n    ldr r1, [r5]\n    ldr r2, [r5, #4]\n    add r0, r5, #0\n    bl sub_020941CC\n    add r0, r5, #0\n    bl sub_020942B0\n    add r0, r5, #0\n    bl sub_020943EC\n    add r0, r5, #0\n    bl sub_020950C0\n    bl sub_02095794\n    ldr r0, [sp, #0x40]\n    ldr r1, _02093590 ; =0x000046B4\n    mov r2, #0\n    str r0, [r5, r1]\n    add r0, r1, #0\n    str r2, [r5, #0x14]\n    add r0, #8\n    str r2, [r5, r0]\n    add r0, r1, #0\n    add r0, #0xc\n    str r2, [r5, r0]\n    add r1, #0x10\n    str r2, [r5, r1]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02093580: .word 0x0000463C\n    _02093584: .word 0x000046B8\n    _02093588: .word 0x00004648\n    _0209358C: .word 0x00004670\n    _02093590: .word 0x000046B4"
    );
    #endif
}

void sub_02093594(void) {
    /* Original at 0x02093594 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _020935D0 ; =0x00004644\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _020935B2\n    ldr r0, _020935D4 ; =0x000008D4\n    add r0, r4, r0\n    blx r1\n    ldr r0, _020935D0 ; =0x00004644\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl sub_020956B8\n    bl GF_RunVramTransferTasks\n    bl OamManager_ApplyAndResetBuffers\n    ldr r0, [r4]\n    bl DoScheduledBgGpuUpdates\n    ldr r3, _020935D8 ; =OS_IRQTable\n    ldr r1, _020935DC ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    nop\n    _020935D0: .word 0x00004644\n    _020935D4: .word 0x000008D4\n    _020935D8: .word OS_IRQTable\n    _020935DC: .word 0x00003FF8"
    );
    #endif
}

void sub_020935E0(void) {
    /* Original at 0x020935E0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, [r0, #0x14]\n    cmp r1, #6\n    bhi _0209362E\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _020935F4: ; jump table\n    bl sub_02093630\n    pop {r3, pc}\n    bl sub_0209389C\n    mov r0, #0\n    pop {r3, pc}\n    bl sub_02093908\n    mov r0, #0\n    pop {r3, pc}\n    bl sub_0209396C\n    mov r0, #0\n    pop {r3, pc}\n    bl sub_020939B8\n    mov r0, #0\n    pop {r3, pc}\n    bl sub_0209511C\n    mov r0, #2\n    pop {r3, pc}"
    );
    #endif
}

void sub_02093630(void) {
    /* Original at 0x02093630 */
    /* Requires manual decompilation - 270 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    mov r4, #0\n    add r5, r0, #0\n    str r4, [sp]\n    bl System_GetTouchHeld\n    cmp r0, #0\n    bne _02093714\n    ldr r0, _02093874 ; =0x000046C0\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    bne _02093714\n    ldr r1, _02093878 ; =gSystem\n    ldr r4, [r1, #0x48]\n    cmp r4, #0\n    beq _02093714\n    sub r0, #8\n    ldr r0, [r5, r0]\n    mov r7, #0\n    add r6, r7, #0\n    bl sub_02095DD8\n    cmp r4, #0x20\n    bgt _0209367A\n    bge _02093688\n    cmp r4, #2\n    bgt _02093674\n    cmp r4, #1\n    blt _020936EE\n    beq _020936C0\n    cmp r4, #2\n    beq _020936D8\n    b _020936EE\n    cmp r4, #0x10\n    beq _0209369C\n    b _020936EE\n    cmp r4, #0x40\n    bgt _02093682\n    beq _020936B0\n    b _020936EE\n    cmp r4, #0x80\n    beq _020936B8\n    b _020936EE\n    cmp r0, #5\n    bne _02093694\n    add r0, r5, #0\n    bl sub_02095540\n    b _020936EE\n    sub r0, r7, #1\n    lsl r0, r0, #0x18\n    asr r7, r0, #0x18\n    b _020936EE\n    cmp r0, #5\n    bne _020936A8\n    add r0, r5, #0\n    bl sub_020955EC\n    b _020936EE\n    add r0, r7, #1\n    lsl r0, r0, #0x18\n    asr r7, r0, #0x18\n    b _020936EE\n    sub r0, r6, #1\n    lsl r0, r0, #0x18\n    asr r6, r0, #0x18\n    b _020936EE\n    add r0, r6, #1\n    lsl r0, r0, #0x18\n    asr r6, r0, #0x18\n    b _020936EE\n    add r0, r5, #0\n    bl sub_02095354\n    str r0, [sp]\n    cmp r0, #0\n    beq _020936EE\n    cmp r0, #3\n    beq _020936EE\n    ldr r0, _0209387C ; =0x000005DD\n    bl PlaySE\n    b _020936EE\n    add r0, r5, #0\n    bl sub_020954CC\n    str r0, [sp]\n    cmp r0, #0\n    beq _020936EE\n    cmp r0, #3\n    beq _020936EE\n    ldr r0, _0209387C ; =0x000005DD\n    bl PlaySE\n    cmp r7, #0\n    bne _020936F6\n    cmp r6, #0\n    beq _02093714\n    ldr r0, _02093880 ; =0x000046B8\n    add r1, r7, #0\n    ldr r0, [r5, r0]\n    add r2, r6, #0\n    bl sub_02095D88\n    add r6, r0, #0\n    add r0, r5, #0\n    bl sub_02095238\n    cmp r6, #0\n    beq _02093714\n    ldr r0, _02093884 ; =0x000005DC\n    bl PlaySE\n    cmp r4, #0\n    bne _02093720\n    ldr r0, _02093888 ; =0x000046BC\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _02093722\n    b _02093860\n    bl System_GetTouchNew\n    cmp r0, #0\n    bne _0209372C\n    b _02093832\n    ldr r0, _0209388C ; =0x00004680\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    bne _02093832\n    mov r1, #1\n    add r0, #0x44\n    str r1, [r5, r0]\n    ldr r0, _02093890 ; =0x000007E4\n    ldr r0, [r5, r0]\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _0209382A\n    cmp r4, #0x1e\n    bge _0209378A\n    ldrb r0, [r5, #0xf]\n    cmp r0, #0x12\n    bne _0209375A\n    cmp r4, #6\n    bge _02093824\n    ldr r0, _02093880 ; =0x000046B8\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #2\n    lsr r2, r2, #0x18\n    bl sub_02095D40\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02094794\n    cmp r0, #1\n    bne _02093824\n    ldr r0, _02093894 ; =0x000005EB\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    bl sub_020948C4\n    mov r0, #1\n    str r0, [sp]\n    b _02093824\n    cmp r4, #0x21\n    blt _020937CE\n    ldrb r0, [r5, #0xd]\n    add r0, #0x21\n    cmp r4, r0\n    bge _020937CE\n    ldr r0, _02093880 ; =0x000046B8\n    add r2, r4, #0\n    sub r2, #0x21\n    lsl r2, r2, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #3\n    lsr r2, r2, #0x18\n    bl sub_02095D40\n    add r1, r4, #0\n    add r0, r5, #0\n    sub r1, #0x21\n    bl sub_02094860\n    cmp r0, #1\n    bne _02093824\n    ldr r0, _02093894 ; =0x000005EB\n    bl PlaySE\n    sub r4, #0x21\n    add r0, r5, #0\n    mov r1, #2\n    add r2, r4, #0\n    bl sub_020948C4\n    mov r0, #1\n    str r0, [sp]\n    b _02093824\n    cmp r4, #0x1e\n    beq _020937EC\n    cmp r4, #0x1f\n    beq _020937DC\n    cmp r4, #0x20\n    beq _020937E4\n    b _02093824\n    add r0, r5, #0\n    bl sub_02095540\n    b _02093824\n    add r0, r5, #0\n    bl sub_020955EC\n    b _02093824\n    ldrb r0, [r5, #0x13]\n    cmp r0, #0\n    beq _02093824\n    mov r0, #0xe\n    lsl r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #0xb\n    lsl r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r1, sp, #4\n    bl Sprite_SetMatrix\n    ldr r0, _02093880 ; =0x000046B8\n    mov r1, #1\n    ldr r0, [r5, r0]\n    mov r2, #0\n    bl sub_02095D40\n    add r0, r5, #0\n    bl sub_0209569C\n    mov r0, #3\n    str r0, [sp]\n    add r0, r5, #0\n    bl sub_020956B8\n    ldr r0, _02093874 ; =0x000046C0\n    mov r1, #1\n    str r1, [r5, r0]\n    b _02093860\n    bl System_GetTouchHeld\n    cmp r0, #0\n    beq _02093850\n    ldr r0, _02093898 ; =0x000046C4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _02093850\n    add r0, r5, #0\n    bl sub_020949F4\n    ldr r0, _02093874 ; =0x000046C0\n    mov r1, #1\n    str r1, [r5, r0]\n    b _02093860\n    add r0, r5, #0\n    bl sub_02094A70\n    ldr r0, _02093874 ; =0x000046C0\n    mov r1, #0\n    str r1, [r5, r0]\n    add r0, r0, #4\n    str r1, [r5, r0]\n    ldrb r1, [r5, #0xe]\n    ldrb r0, [r5, #0xd]\n    cmp r1, r0\n    bne _0209386C\n    mov r0, #1\n    str r0, [r5, #0x14]\n    ldr r0, [sp]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02093874: .word 0x000046C0\n    _02093878: .word gSystem\n    _0209387C: .word 0x000005DD\n    _02093880: .word 0x000046B8\n    _02093884: .word 0x000005DC\n    _02093888: .word 0x000046BC\n    _0209388C: .word 0x00004680\n    _02093890: .word 0x000007E4\n    _02093894: .word 0x000005EB\n    _02093898: .word 0x000046C4"
    );
    #endif
}

void sub_0209389C(void) {
    /* Original at 0x0209389C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    ldr r0, [r4]\n    mov r1, #0x19\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #2\n    lsl r0, r0, #8\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    strb r1, [r0, #0x10]\n    mov r1, #0xf\n    strb r1, [r0, #0x11]\n    ldr r0, [r4, #8]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    ldrb r0, [r4, #0xd]\n    cmp r0, #1\n    bne _020938EC\n    ldr r0, _02093904 ; =0x00004660\n    mov r1, #0\n    add r0, r4, r0\n    bl sub_020950F8\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #1\n    bl sub_0209501C\n    b _020938F6\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #1\n    bl sub_0209501C\n    bl sub_02095780\n    mov r0, #2\n    str r0, [r4, #0x14]\n    add sp, #0x14\n    pop {r3, r4, pc}\n    nop\n    _02093904: .word 0x00004660"
    );
    #endif
}

void sub_02093908(void) {
    /* Original at 0x02093908 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _0209391C\n    cmp r0, #2\n    beq _02093932\n    pop {r4, pc}\n    ldr r0, _02093964 ; =0x00004660\n    mov r1, #1\n    add r0, r4, r0\n    bl sub_020950F8\n    ldr r0, [r4, #8]\n    bl YesNoPrompt_Reset\n    mov r0, #6\n    str r0, [r4, #0x14]\n    pop {r4, pc}\n    ldr r0, _02093964 ; =0x00004660\n    mov r1, #1\n    add r0, r4, r0\n    bl sub_020950F8\n    ldr r0, [r4, #8]\n    bl YesNoPrompt_Reset\n    ldr r1, _02093968 ; =0x000046B0\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    bl sub_02094F5C\n    add r0, r4, #0\n    bl sub_020950C0\n    bl sub_02095794\n    add r0, r4, #0\n    bl sub_020956B8\n    mov r0, #0\n    str r0, [r4, #0x14]\n    pop {r4, pc}\n    nop\n    _02093964: .word 0x00004660\n    _02093968: .word 0x000046B0"
    );
    #endif
}

void sub_0209396C(void) {
    /* Original at 0x0209396C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    ldr r0, [r4]\n    mov r1, #0x19\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #2\n    lsl r0, r0, #8\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    strb r1, [r0, #0x10]\n    mov r1, #0xf\n    strb r1, [r0, #0x11]\n    ldr r0, [r4, #8]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0\n    bl sub_0209501C\n    bl sub_02095780\n    mov r0, #5\n    str r0, [r4, #0x14]\n    add sp, #0x14\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_020939B8(void) {
    /* Original at 0x020939B8 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _020939CC\n    cmp r0, #2\n    beq _02093A10\n    pop {r4, pc}\n    ldr r0, _02093A34 ; =0x00004660\n    mov r1, #1\n    add r0, r4, r0\n    bl sub_020950F8\n    ldr r0, [r4, #8]\n    bl YesNoPrompt_Reset\n    ldr r1, _02093A38 ; =0x00004684\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    bl sub_02094F5C\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    mov r1, #0x2d\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #0\n    mov r1, #2\n    bl sub_02094A90\n    ldr r0, _02093A3C ; =0x000046BC\n    mov r1, #0\n    str r1, [r4, r0]\n    bl sub_02095794\n    add r0, r4, #0\n    bl sub_020956B8\n    mov r0, #0\n    str r0, [r4, #0x14]\n    pop {r4, pc}\n    ldr r0, _02093A34 ; =0x00004660\n    mov r1, #1\n    add r0, r4, r0\n    bl sub_020950F8\n    ldr r0, [r4, #8]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02094A90\n    bl sub_02095794\n    mov r0, #0\n    str r0, [r4, #0x14]\n    pop {r4, pc}\n    nop\n    _02093A34: .word 0x00004660\n    _02093A38: .word 0x00004684\n    _02093A3C: .word 0x000046BC"
    );
    #endif
}

void sub_02093A40(void) {
    SpriteList_RenderAndAnimateSprites();
}

void sub_02093A50(void) {
    /* Original at 0x02093A50 */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r1, r5, #0\n    ldr r2, [r5, #4]\n    mov r0, #0x2b\n    add r1, #0x1c\n    bl G2dRenderer_Init\n    str r0, [r5, #0x18]\n    add r0, r5, #0\n    mov r2, #1\n    add r0, #0x1c\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r7, #0x51\n    mov r6, #0\n    add r4, r5, #0\n    lsl r7, r7, #2\n    ldr r2, [r5, #4]\n    mov r0, #3\n    add r1, r6, #0\n    bl Create2DGfxResObjMan\n    str r0, [r4, r7]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #6\n    blt _02093A7A\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #1\n    str r3, [sp, #4]\n    ldr r0, [r5, #4]\n    mov r1, #0x97\n    str r0, [sp, #8]\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r2, #8\n    bl AddCharResObjFromNarc\n    mov r1, #0x57\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r0, [r5, #4]\n    sub r1, #0x14\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    mov r1, #0x97\n    mov r2, #5\n    bl AddPlttResObjFromNarc\n    mov r1, #0x16\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, #4]\n    sub r1, #0x14\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    mov r1, #0x97\n    mov r2, #7\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x59\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    ldr r0, [r5, #4]\n    sub r1, #0x14\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    mov r1, #0x97\n    mov r2, #6\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, #0xc\n    ldr r0, [r5, r1]\n    bl sub_0200ADA4\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl sub_0200AF94\n    bl sub_02074490\n    add r1, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [r5, #4]\n    mov r2, #1\n    add r3, r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x14\n    add r3, #0xff\n    bl GfGfxLoader_GXLoadPal\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02093B40(void) {
    /* Original at 0x02093B40 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x2c\n    mov r1, #0\n    str r1, [sp]\n    sub r2, r1, #1\n    str r2, [sp, #4]\n    str r2, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r3, #0x51\n    str r1, [sp, #0x10]\n    lsl r3, r3, #2\n    ldr r2, [r0, r3]\n    str r2, [sp, #0x14]\n    add r2, r3, #4\n    ldr r2, [r0, r2]\n    str r2, [sp, #0x18]\n    add r2, r3, #0\n    add r2, #8\n    ldr r2, [r0, r2]\n    str r2, [sp, #0x1c]\n    add r2, r3, #0\n    add r2, #0xc\n    ldr r2, [r0, r2]\n    add r3, #0x30\n    str r2, [sp, #0x20]\n    str r1, [sp, #0x24]\n    add r0, r0, r3\n    add r2, r1, #0\n    add r3, r1, #0\n    str r1, [sp, #0x28]\n    bl CreateSpriteResourcesHeader\n    add sp, #0x2c\n    pop {pc}"
    );
    #endif
}

void sub_02093B84(void) {
    /* Original at 0x02093B84 */
    /* Requires manual decompilation - 161 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r5, r0, #0\n    add r0, sp, #0x10\n    add r1, r5, #0\n    mov r2, #1\n    bl sub_02094150\n    ldrb r1, [r5, #0xd]\n    ldr r0, [r5, #4]\n    lsl r1, r1, #3\n    bl Heap_Alloc\n    ldr r1, _02093CD0 ; =0x000046A4\n    mov r7, #0\n    str r0, [r5, r1]\n    ldrb r0, [r5, #0xd]\n    cmp r0, #0\n    ble _02093C78\n    mov r0, #0x20\n    str r0, [sp, #0xc]\n    mov r0, #0x2c\n    add r6, r7, #0\n    str r7, [sp, #8]\n    add r4, r5, #0\n    str r0, [sp, #4]\n    ldr r0, _02093CD0 ; =0x000046A4\n    ldr r1, [r5, r0]\n    ldr r0, [sp, #0xc]\n    strb r0, [r1, r6]\n    ldr r0, _02093CD0 ; =0x000046A4\n    ldr r0, [r5, r0]\n    add r1, r0, r6\n    ldrb r0, [r0, r6]\n    add r0, #0x18\n    strb r0, [r1, #2]\n    ldr r0, _02093CD0 ; =0x000046A4\n    ldr r0, [r5, r0]\n    add r1, r0, r6\n    mov r0, #0xc0\n    strb r0, [r1, #1]\n    ldr r0, _02093CD0 ; =0x000046A4\n    ldr r0, [r5, r0]\n    add r1, r0, r6\n    ldrb r0, [r1, #1]\n    add r0, #0x20\n    strb r0, [r1, #3]\n    ldr r0, _02093CD0 ; =0x000046A4\n    ldr r0, [r5, r0]\n    add r1, r0, r6\n    mov r0, #0\n    str r0, [r1, #4]\n    mov r0, #0x35\n    lsl r0, r0, #0xe\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #8]\n    add r0, #0x28\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x1c]\n    ldr r0, _02093CD4 ; =0x000007E8\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _02093C0C\n    add r0, sp, #0x10\n    bl Sprite_CreateAffine\n    ldr r1, _02093CD4 ; =0x000007E8\n    str r0, [r4, r1]\n    ldr r0, _02093CD4 ; =0x000007E8\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _02093CD4 ; =0x000007E8\n    add r1, r7, #0\n    ldr r0, [r4, r0]\n    add r1, #0x27\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _02093CD4 ; =0x000007E8\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetPriority\n    ldr r0, _02093CD4 ; =0x000007E8\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _02093CD4 ; =0x000007E8\n    mov r1, #6\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawPriority\n    mov r0, #0x18\n    str r0, [sp]\n    ldr r0, _02093CD8 ; =0x000007E4\n    ldr r2, [sp, #4]\n    ldr r1, [r5, r0]\n    add r0, r7, #0\n    add r0, #0x21\n    lsl r0, r0, #2\n    add r0, r1, r0\n    mov r1, #0xd4\n    mov r3, #0x18\n    bl sub_0209428C\n    ldr r0, [sp, #0xc]\n    add r7, r7, #1\n    add r0, #0x28\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    add r6, #8\n    add r0, #0x28\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    add r4, #0x34\n    add r0, #0x28\n    str r0, [sp, #4]\n    ldrb r0, [r5, #0xd]\n    cmp r7, r0\n    blt _02093BB8\n    mov r6, #0\n    cmp r7, #3\n    bge _02093CAE\n    mov r0, #0x28\n    add r4, r7, #0\n    mul r4, r0\n    add r4, #0x2c\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0xd4\n    add r2, r4, #0\n    mov r3, #0x2f\n    bl sub_0209417C\n    add r1, r6, #0\n    add r2, r6, #1\n    lsl r2, r2, #0x18\n    lsl r1, r1, #2\n    lsr r6, r2, #0x18\n    add r2, r5, r1\n    ldr r1, _02093CDC ; =0x000008C8\n    add r7, r7, #1\n    add r4, #0x28\n    str r0, [r2, r1]\n    cmp r7, #3\n    blt _02093C86\n    ldr r0, _02093CE0 ; =0x000046A8\n    mov r1, #0x20\n    strb r1, [r5, r0]\n    mov r3, #0x97\n    add r1, r0, #2\n    strb r3, [r5, r1]\n    mov r2, #8\n    add r1, r0, #1\n    strb r2, [r5, r1]\n    add r1, r0, #3\n    strb r3, [r5, r1]\n    mov r1, #0\n    add r0, r0, #4\n    str r1, [r5, r0]\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02093CD0: .word 0x000046A4\n    _02093CD4: .word 0x000007E8\n    _02093CD8: .word 0x000007E4\n    _02093CDC: .word 0x000008C8\n    _02093CE0: .word 0x000046A8"
    );
    #endif
}

void sub_02093CE4(void) {
    /* Original at 0x02093CE4 */
    /* Requires manual decompilation - 192 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    ldr r3, _02093E68 ; =0x0000469C\n    add r1, r0, #0\n    ldr r1, [r1, r3]\n    str r0, [sp]\n    cmp r1, #1\n    bne _02093DA2\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, [sp]\n    ldrb r0, [r0, #0xd]\n    mov ip, r0\n    cmp r0, #0\n    ble _02093DA0\n    ldr r0, [sp]\n    add r3, #8\n    ldr r4, [r0, r3]\n    ldr r5, [sp, #0x18]\n    str r4, [sp, #8]\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    ldr r0, _02093E6C ; =0x00004698\n    bne _02093D4E\n    ldr r1, [sp]\n    ldr r7, [r1, r0]\n    ldr r0, [sp, #8]\n    add r3, r0, r5\n    ldrb r6, [r0, r5]\n    ldrb r0, [r3, #2]\n    ldrb r2, [r3, #1]\n    str r0, [sp, #0x1c]\n    ldr r0, _02093E70 ; =0x00004694\n    ldr r0, [r1, r0]\n    ldrb r1, [r3, #3]\n    sub r0, r0, r2\n    sub r1, r1, r2\n    cmp r0, r1\n    bhs _02093D90\n    ldr r0, [sp, #0x1c]\n    sub r1, r7, r6\n    sub r0, r0, r6\n    cmp r1, r0\n    bhs _02093D90\n    ldr r1, [sp, #0x18]\n    ldr r0, [sp]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl sub_02093E7C\n    add sp, #0x24\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r1, [sp]\n    ldr r7, [r1, r0]\n    ldr r0, [sp, #8]\n    add r3, r0, r5\n    ldrb r6, [r0, r5]\n    ldrb r0, [r3, #2]\n    ldrb r2, [r3, #1]\n    str r0, [sp, #0x20]\n    ldr r0, _02093E70 ; =0x00004694\n    ldr r0, [r1, r0]\n    ldrb r1, [r3, #3]\n    sub r0, r0, r2\n    sub r1, r1, r2\n    cmp r0, r1\n    bhs _02093D90\n    ldr r0, [sp, #0x20]\n    sub r1, r7, r6\n    sub r0, r0, r6\n    cmp r1, r0\n    bhs _02093D90\n    ldr r0, [sp]\n    ldr r1, [sp, #0x18]\n    bl sub_02094F5C\n    ldr r1, [sp, #0x18]\n    ldr r0, [sp]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl sub_02093E7C\n    add sp, #0x24\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x18]\n    add r4, #8\n    add r1, r0, #1\n    mov r0, ip\n    add r5, #8\n    str r1, [sp, #0x18]\n    cmp r1, r0\n    blt _02093D0C\n    b _02093E62\n    cmp r1, #2\n    bne _02093E5E\n    sub r2, r3, #4\n    add r1, r0, #0\n    ldr r1, [r1, r2]\n    add r2, r3, #0\n    str r1, [sp, #0x14]\n    add r2, #0xd\n    add r1, r0, #0\n    ldrb r6, [r1, r2]\n    add r2, r3, #0\n    add r2, #0xc\n    ldrb r5, [r1, r2]\n    add r2, r3, #0\n    add r2, #0xe\n    ldrb r4, [r1, r2]\n    add r2, r3, #0\n    sub r2, #8\n    ldr r1, [r1, r2]\n    add r2, r3, #0\n    str r1, [sp, #0x10]\n    sub r7, r1, r6\n    add r2, #0xf\n    add r1, r0, #0\n    ldrb r1, [r1, r2]\n    sub r1, r1, r6\n    cmp r7, r1\n    bhs _02093DFA\n    ldr r1, [sp, #0x14]\n    sub r2, r1, r5\n    sub r1, r4, r5\n    cmp r2, r1\n    bhs _02093DFA\n    sub r3, #0x18\n    add r1, r0, #0\n    ldr r1, [r1, r3]\n    bl sub_02094F5C\n    ldr r0, [sp]\n    bl sub_020956B8\n    add sp, #0x24\n    mov r0, #2\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    mov r7, #0\n    ldrb r0, [r0, #0xd]\n    str r0, [sp, #0xc]\n    cmp r0, #0\n    ble _02093E62\n    ldr r1, _02093E74 ; =0x000046A4\n    ldr r0, [sp]\n    add r6, r7, #0\n    ldr r5, [r0, r1]\n    str r5, [sp, #4]\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    bne _02093E50\n    ldr r0, [sp, #4]\n    add r4, r0, r6\n    ldrb r3, [r4, #1]\n    ldrb r1, [r4, #2]\n    ldrb r2, [r0, r6]\n    ldr r0, [sp, #0x10]\n    ldrb r4, [r4, #3]\n    sub r0, r0, r3\n    sub r3, r4, r3\n    cmp r0, r3\n    bhs _02093E50\n    ldr r0, [sp, #0x14]\n    sub r3, r0, r2\n    sub r0, r1, r2\n    cmp r3, r0\n    bhs _02093E50\n    ldr r0, [sp]\n    ldr r2, _02093E78 ; =0x00004684\n    add r1, r0, #0\n    ldr r1, [r1, r2]\n    lsl r2, r7, #0x18\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    bl sub_02093F84\n    add sp, #0x24\n    mov r0, #3\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0xc]\n    add r7, r7, #1\n    add r5, #8\n    add r6, #8\n    cmp r7, r0\n    blt _02093E10\n    b _02093E62\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _02093E68: .word 0x0000469C\n    _02093E6C: .word 0x00004698\n    _02093E70: .word 0x00004694\n    _02093E74: .word 0x000046A4\n    _02093E78: .word 0x00004684"
    );
    #endif
}

void sub_02093E7C(void) {
    /* Original at 0x02093E7C */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _02093F70 ; =0x000005EA\n    str r1, [sp]\n    bl PlaySE\n    ldr r2, _02093F74 ; =0x000046A4\n    ldr r0, [sp]\n    ldr r1, [r5, r2]\n    lsl r0, r0, #3\n    mov r3, #1\n    add r0, r1, r0\n    str r3, [r0, #4]\n    sub r2, #0x20\n    ldr r2, [r5, r2]\n    ldr r1, [sp]\n    lsl r2, r2, #0x18\n    add r0, r5, #0\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02094668\n    ldrb r1, [r5, #0xd]\n    mov r4, #0\n    cmp r1, #0\n    bls _02093F6A\n    mov r0, #0x8d\n    lsl r0, r0, #4\n    mov r7, #0xc\n    add r2, r7, #0\n    ldr r0, [r5, r0]\n    sub r2, #0xd\n    add r6, r4, #0\n    mul r6, r7\n    add r3, r0, r6\n    ldr r3, [r3, #4]\n    cmp r3, r2\n    bne _02093F60\n    ldr r0, _02093F78 ; =0x00004688\n    add r2, sp, #4\n    add r3, r5, r0\n    ldmia r3!, {r0, r1}\n    add r7, r2, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    mov r0, #2\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0xe\n    sub r1, r1, r0\n    str r1, [sp, #4]\n    ldr r1, [sp, #8]\n    lsr r0, r0, #1\n    sub r0, r1, r0\n    str r0, [sp, #8]\n    mov r0, #0x8d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    ldr r0, [r0, r6]\n    bl Sprite_SetMatrix\n    mov r0, #0x8d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #1\n    ldr r0, [r0, r6]\n    bl Sprite_SetDrawFlag\n    ldr r0, _02093F7C ; =0x00004684\n    lsr r2, r0, #3\n    ldr r2, [r5, r2]\n    ldr r1, [r5, r0]\n    add r2, r2, r6\n    str r1, [r2, #4]\n    lsr r2, r0, #3\n    ldr r2, [r5, r2]\n    ldrb r1, [r5, #0xf]\n    add r2, r2, r6\n    str r1, [r2, #8]\n    ldrb r1, [r5, #0xe]\n    add r1, r1, #1\n    strb r1, [r5, #0xe]\n    ldr r1, [r5, r0]\n    mov r0, #0x34\n    mul r0, r1\n    add r1, r5, r0\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl Sprite_SetOamMode\n    ldr r0, [sp]\n    ldr r3, _02093F80 ; =0x00000888\n    lsl r1, r0, #4\n    ldr r0, _02093F7C ; =0x00004684\n    add r1, r5, r1\n    ldr r2, [r5, r0]\n    add r0, #0x2c\n    str r2, [r1, r3]\n    ldrb r6, [r5, #0xf]\n    sub r2, r3, #4\n    str r6, [r1, r2]\n    add r2, r3, #4\n    str r4, [r1, r2]\n    mov r2, #1\n    add r3, #8\n    str r2, [r1, r3]\n    ldr r1, [sp]\n    add sp, #0x10\n    str r1, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r3, r4, #1\n    lsl r3, r3, #0x18\n    lsr r4, r3, #0x18\n    cmp r4, r1\n    blo _02093EBE\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02093F70: .word 0x000005EA\n    _02093F74: .word 0x000046A4\n    _02093F78: .word 0x00004688\n    _02093F7C: .word 0x00004684\n    _02093F80: .word 0x00000888"
    );
    #endif
}

void sub_02093F84(void) {
    /* Original at 0x02093F84 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _02093FF4 ; =0x000005EA\n    add r4, r1, #0\n    add r6, r2, #0\n    bl PlaySE\n    lsl r7, r4, #4\n    mov r2, #0x89\n    mov r1, #0\n    add r0, r5, r7\n    lsl r2, r2, #4\n    str r1, [r0, r2]\n    mov r0, #0x34\n    mul r0, r4\n    add r0, r5, r0\n    sub r2, #0xa8\n    ldr r0, [r0, r2]\n    bl Sprite_SetDrawFlag\n    ldr r1, _02093FF8 ; =0x000046A4\n    mov r0, #0\n    ldr r2, [r5, r1]\n    lsl r1, r4, #3\n    add r1, r2, r1\n    str r0, [r1, #4]\n    ldr r0, _02093FF8 ; =0x000046A4\n    mov r3, #1\n    ldr r1, [r5, r0]\n    lsl r0, r6, #3\n    add r0, r1, r0\n    str r3, [r0, #4]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl sub_02094668\n    lsl r1, r6, #4\n    ldr r0, _02093FFC ; =0x00000888\n    add r2, r5, r7\n    ldr r3, [r2, r0]\n    add r1, r5, r1\n    str r3, [r1, r0]\n    sub r3, r0, #4\n    ldr r4, [r2, r3]\n    str r4, [r1, r3]\n    add r3, r0, #4\n    ldr r3, [r2, r3]\n    add r2, r0, #4\n    str r3, [r1, r2]\n    mov r2, #1\n    add r0, #8\n    str r2, [r1, r0]\n    ldr r0, _02094000 ; =0x000046B0\n    str r6, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02093FF4: .word 0x000005EA\n    _02093FF8: .word 0x000046A4\n    _02093FFC: .word 0x00000888\n    _02094000: .word 0x000046B0"
    );
    #endif
}

void sub_02094004(void) {
    /* Original at 0x02094004 */
    /* Requires manual decompilation - 147 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    ldr r0, _0209413C ; =0x000007E4\n    mov r1, #0xe0\n    ldr r0, [r5, r0]\n    mov r2, #0xb0\n    add r0, #0x78\n    mov r3, #0x32\n    bl sub_0209428C\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0xe0\n    mov r2, #0xb0\n    mov r3, #4\n    bl sub_0209417C\n    ldr r1, _02094140 ; =0x000008B4\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #3\n    bl Sprite_SetPriority\n    ldrb r0, [r5, #0x13]\n    cmp r0, #0\n    bne _02094048\n    ldr r0, _02094140 ; =0x000008B4\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    mov r3, #0x20\n    ldr r0, _0209413C ; =0x000007E4\n    str r3, [sp]\n    ldr r0, [r5, r0]\n    mov r1, #0x90\n    add r0, #0x80\n    mov r2, #0x10\n    bl sub_0209428C\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x90\n    mov r2, #0x10\n    mov r3, #2\n    bl sub_0209417C\n    ldr r1, _02094144 ; =0x000008B8\n    mov r3, #0x20\n    str r0, [r5, r1]\n    str r3, [sp]\n    sub r1, #0xd4\n    ldr r0, [r5, r1]\n    mov r1, #0x10\n    add r0, #0x7c\n    add r2, r1, #0\n    bl sub_0209428C\n    mov r0, #1\n    mov r1, #0x10\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r1, #0\n    mov r3, #0\n    bl sub_0209417C\n    ldr r1, _02094148 ; =0x000008BC\n    mov r3, #0x32\n    str r0, [r5, r1]\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    str r1, [sp]\n    bl sub_0209417C\n    ldr r1, _0209414C ; =0x000008C4\n    mov r2, #0xff\n    str r0, [r5, r1]\n    ldrb r0, [r5, #0xd]\n    sub r1, #0xe0\n    ldr r1, [r5, r1]\n    add r0, #0x21\n    lsl r0, r0, #2\n    strb r2, [r1, r0]\n    ldrb r0, [r5, #0xd]\n    mov r7, #0\n    cmp r0, #0\n    ble _0209410C\n    add r6, r7, #0\n    add r4, r7, #0\n    mov r0, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x40\n    mov r3, #6\n    bl sub_0209417C\n    mov r1, #0x8d\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    str r0, [r1, r4]\n    mov r0, #0x8d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r0, r4\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r1, #4]\n    mov r1, #0x8d\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    ldrb r0, [r5, #0x10]\n    add r1, r1, r4\n    str r0, [r1, #8]\n    mov r0, #0x8d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #4\n    ldr r0, [r0, r4]\n    bl Sprite_SetDrawPriority\n    ldrb r0, [r5, #0xd]\n    add r7, r7, #1\n    add r6, #0x24\n    add r4, #0xc\n    cmp r7, r0\n    blt _020940C0\n    mov r0, #0\n    strb r0, [r5, #0xe]\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x14\n    mov r2, #0x28\n    mov r3, #0x2d\n    bl sub_0209417C\n    mov r1, #0x23\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #1\n    bl Sprite_SetPriority\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawPriority\n    pop {r3, r4, r5, r6, r7, pc}\n    _0209413C: .word 0x000007E4\n    _02094140: .word 0x000008B4\n    _02094144: .word 0x000008B8\n    _02094148: .word 0x000008BC\n    _0209414C: .word 0x000008C4"
    );
    #endif
}

void sub_02094150(void) {
    /* Original at 0x02094150 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, [r1, #0x18]\n    mov r4, #0\n    str r3, [r0]\n    mov r3, #0x5d\n    lsl r3, r3, #2\n    add r3, r1, r3\n    str r3, [r0, #4]\n    mov r3, #1\n    str r4, [r0, #0x10]\n    lsl r3, r3, #0xc\n    str r3, [r0, #0x14]\n    str r3, [r0, #0x18]\n    str r3, [r0, #0x1c]\n    strh r4, [r0, #0x20]\n    mov r3, #0x14\n    str r3, [r0, #0x24]\n    str r2, [r0, #0x28]\n    ldr r1, [r1, #4]\n    str r1, [r0, #0x2c]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_0209417C(void) {
    /* Original at 0x0209417C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r6, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    add r0, sp, #0\n    add r1, r6, #0\n    mov r2, #1\n    add r7, r3, #0\n    bl sub_02094150\n    lsl r0, r5, #0xc\n    str r0, [sp, #8]\n    lsl r0, r4, #0xc\n    str r0, [sp, #0xc]\n    mov r0, #0xa\n    str r0, [sp, #0x24]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    add r4, r0, #0\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    add r0, r4, #0\n    add r1, r7, #0\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #0\n    mov r1, #1\n    bl Sprite_SetPriority\n    ldr r1, [sp, #0x48]\n    add r0, r4, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020941CC(void) {
    /* Original at 0x020941CC */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    add r6, r1, #0\n    str r0, [sp, #4]\n    mov r1, #1\n    add r4, r2, #0\n    str r1, [sp, #8]\n    mov r0, #0x97\n    add r2, r6, #0\n    mov r3, #2\n    str r4, [sp, #0xc]\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #1\n    mov r2, #0\n    str r0, [sp, #8]\n    add r0, r6, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    add r0, r6, #0\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x97\n    mov r1, #4\n    add r2, r6, #0\n    mov r3, #3\n    str r4, [sp, #0xc]\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #1\n    mov r2, #0\n    str r0, [sp, #8]\n    add r0, r6, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    add r0, r6, #0\n    mov r1, #3\n    bl BgCommitTilemapBufferToVram\n    ldr r3, _02094280 ; =0x000046D0\n    mov r0, #0x97\n    mov r1, #3\n    mov r2, #1\n    add r3, r5, r3\n    str r4, [sp]\n    bl GfGfxLoader_GetScrnData\n    ldr r3, _02094284 ; =0x000046C8\n    mov r1, #1\n    str r0, [r5, r3]\n    add r3, #0xc\n    mov r0, #0x97\n    add r2, r1, #0\n    add r3, r5, r3\n    str r4, [sp]\n    bl GfGfxLoader_GetScrnData\n    ldr r1, _02094288 ; =0x000046CC\n    str r0, [r5, r1]\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _02094280: .word 0x000046D0\n    _02094284: .word 0x000046C8\n    _02094288: .word 0x000046CC"
    );
    #endif
}

void sub_0209428C(void) {
    /* Original at 0x0209428C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r5, [sp, #8]\n    lsr r4, r5, #0x1f\n    add r4, r5, r4\n    asr r4, r4, #1\n    sub r5, r2, r4\n    strb r5, [r0]\n    lsr r5, r3, #0x1f\n    add r5, r3, r5\n    asr r5, r5, #1\n    sub r3, r1, r5\n    strb r3, [r0, #2]\n    add r2, r2, r4\n    strb r2, [r0, #1]\n    add r1, r1, r5\n    strb r1, [r0, #3]\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void sub_020942B0(void) {
    /* Original at 0x020942B0 */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x48\n    str r0, [sp, #4]\n    ldr r1, [sp, #4]\n    add r0, sp, #0x18\n    mov r2, #1\n    bl sub_02094150\n    mov r6, #0\n    mov r0, #0x28\n    ldr r4, [sp, #4]\n    str r6, [sp, #0x10]\n    str r0, [sp, #0xc]\n    add r7, r6, #0\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0xc]\n    mov r5, #0x14\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    mov r0, #0x18\n    str r0, [sp]\n    ldr r1, [sp, #4]\n    ldr r0, _020943E8 ; =0x000007E4\n    ldr r2, [sp, #0xc]\n    ldr r0, [r1, r0]\n    add r1, r5, #0\n    add r0, r0, r7\n    mov r3, #0x18\n    bl sub_0209428C\n    lsl r0, r5, #0xc\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #8]\n    str r0, [sp, #0x24]\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0209430C\n    add r0, sp, #0x18\n    bl Sprite_CreateAffine\n    mov r1, #0x66\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r6, #7\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetPriority\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #6\n    bl Sprite_SetDrawPriority\n    ldr r0, [sp, #0x14]\n    add r7, r7, #4\n    add r0, r0, #1\n    add r4, #0x34\n    add r6, r6, #1\n    add r5, #0x18\n    str r0, [sp, #0x14]\n    cmp r0, #6\n    blt _020942D8\n    ldr r0, [sp, #0xc]\n    add r0, #0x18\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    add r0, r0, #1\n    str r0, [sp, #0x10]\n    cmp r0, #5\n    blt _020942CC\n    mov r0, #5\n    lsl r0, r0, #0xe\n    str r0, [sp, #0x20]\n    lsl r0, r0, #1\n    str r0, [sp, #0x24]\n    mov r1, #0x7b\n    ldr r0, [sp, #4]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    bne _0209438E\n    add r0, sp, #0x18\n    bl Sprite_CreateAffine\n    mov r2, #0x7b\n    ldr r1, [sp, #4]\n    lsl r2, r2, #4\n    str r0, [r1, r2]\n    mov r1, #0x7b\n    ldr r0, [sp, #4]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r1, #0x7b\n    ldr r0, [sp, #4]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    mov r1, #0x30\n    bl Sprite_SetAnimCtrlSeq\n    mov r1, #0x7b\n    ldr r0, [sp, #4]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    mov r1, #1\n    bl Sprite_SetPriority\n    mov r1, #0x7b\n    ldr r0, [sp, #4]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r1, #0x7b\n    ldr r0, [sp, #4]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    mov r1, #8\n    bl Sprite_SetDrawPriority\n    mov r1, #0x7b\n    ldr r0, [sp, #4]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    mov r1, #1\n    bl Sprite_SetOamMode\n    add sp, #0x48\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020943E8: .word 0x000007E4"
    );
    #endif
}

void sub_020943EC(void) {
    /* Original at 0x020943EC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrb r1, [r0, #0xf]\n    cmp r1, #0x12\n    bne _020943FA\n    bl sub_02094528\n    pop {r3, pc}\n    bl sub_02094400\n    pop {r3, pc}"
    );
    #endif
}

void sub_02094400(void) {
    /* Original at 0x02094400 */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x54\n    add r5, r0, #0\n    ldr r1, [r5, #4]\n    mov r0, #0x14\n    bl NARC_New\n    str r0, [sp, #0x1c]\n    mov r1, #1\n    ldr r0, [r5, #4]\n    lsl r1, r1, #0xc\n    bl Heap_AllocAtEnd\n    str r0, [sp, #0x20]\n    mov r7, #0\n    add r4, r5, #0\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetOamMode\n    ldr r6, _02094514 ; =0x0000463C\n    ldrb r1, [r5, #0xf]\n    ldr r0, [r5, r6]\n    add r6, #0xc\n    ldr r6, [r5, r6]\n    add r2, r7, #0\n    add r3, sp, #0x24\n    blx r6\n    cmp r0, #0\n    beq _02094494\n    mov r0, #0x67\n    lsl r0, r0, #2\n    add r3, sp, #0x24\n    add r2, r4, r0\n    mov r6, #6\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r6, r6, #1\n    bne _0209444A\n    ldr r0, [sp, #0x20]\n    mov r3, #0x66\n    str r0, [sp]\n    ldr r0, [sp, #0x1c]\n    ldr r1, _02094518 ; =0x000008D4\n    str r0, [sp, #4]\n    mov r0, #0x40\n    str r0, [sp, #8]\n    lsl r3, r3, #2\n    ldr r3, [r4, r3]\n    add r0, sp, #0x24\n    add r1, r5, r1\n    add r2, r7, #0\n    bl sub_02094C08\n    add r0, sp, #0x24\n    ldrh r0, [r0, #8]\n    cmp r0, #0\n    beq _02094486\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetOamMode\n    b _020944BA\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetOamMode\n    b _020944BA\n    ldr r0, [sp, #0x20]\n    ldr r1, _02094518 ; =0x000008D4\n    str r0, [sp]\n    ldr r0, [sp, #0x1c]\n    add r1, r5, r1\n    str r0, [sp, #4]\n    mov r0, #0x40\n    str r0, [sp, #8]\n    add r0, sp, #0x24\n    add r2, r7, #0\n    mov r3, #0\n    bl sub_02094C08\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r7, r7, #1\n    add r4, #0x34\n    cmp r7, #0x1e\n    blt _02094420\n    ldr r0, [sp, #0x20]\n    bl Heap_Free\n    ldr r0, [sp, #0x1c]\n    bl NARC_Delete\n    ldr r1, _0209451C ; =sub_02094758\n    ldr r0, _02094520 ; =0x00004644\n    str r1, [r5, r0]\n    ldrb r1, [r5, #0xf]\n    add r0, r5, #0\n    bl sub_02094C88\n    add r0, r5, #0\n    bl sub_02094EB4\n    mov r0, #0x14\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02094524 ; =0x000046D4\n    mov r2, #0\n    ldr r0, [r5, r0]\n    mov r1, #2\n    add r0, #0xc\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    str r2, [sp, #0x10]\n    mov r0, #0x20\n    str r0, [sp, #0x14]\n    mov r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r5]\n    add r3, r2, #0\n    bl CopyRectToBgTilemapRect\n    ldr r0, [r5]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x54\n    pop {r4, r5, r6, r7, pc}\n    _02094514: .word 0x0000463C\n    _02094518: .word 0x000008D4\n    _0209451C: .word sub_02094758\n    _02094520: .word 0x00004644\n    _02094524: .word 0x000046D4"
    );
    #endif
}

void sub_02094528(void) {
    /* Original at 0x02094528 */
    /* Requires manual decompilation - 140 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x58\n    add r6, r0, #0\n    ldr r1, [r6, #4]\n    mov r0, #0x14\n    bl NARC_New\n    str r0, [sp, #0x20]\n    mov r1, #1\n    ldr r0, [r6, #4]\n    lsl r1, r1, #0xc\n    bl Heap_AllocAtEnd\n    str r0, [sp, #0x24]\n    ldr r0, _02094654 ; =0x00004640\n    ldr r0, [r6, r0]\n    bl Party_GetCount\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov r4, #0\n    str r0, [sp, #0x1c]\n    cmp r0, #0\n    ble _020945C0\n    add r5, r6, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, sp, #0x28\n    bl sub_02094F14\n    mov r0, #0x67\n    lsl r0, r0, #2\n    add r3, sp, #0x28\n    add r2, r5, r0\n    mov r7, #6\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r7, r7, #1\n    bne _0209456E\n    ldr r0, [sp, #0x24]\n    mov r3, #0x66\n    str r0, [sp]\n    ldr r0, [sp, #0x20]\n    ldr r1, _02094658 ; =0x000008D4\n    str r0, [sp, #4]\n    mov r0, #0x40\n    str r0, [sp, #8]\n    lsl r3, r3, #2\n    ldr r3, [r5, r3]\n    add r0, sp, #0x28\n    add r1, r6, r1\n    add r2, r4, #0\n    bl sub_02094C08\n    add r0, sp, #0x28\n    ldrh r0, [r0, #8]\n    cmp r0, #0\n    beq _020945AA\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetOamMode\n    b _020945B6\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetOamMode\n    ldr r0, [sp, #0x1c]\n    add r4, r4, #1\n    add r5, #0x34\n    cmp r4, r0\n    blt _0209455A\n    mov r1, #0\n    str r1, [sp, #0x28]\n    add r0, sp, #0x28\n    strh r1, [r0, #8]\n    strh r1, [r0, #0xa]\n    strh r1, [r0, #0xc]\n    strh r1, [r0, #0xe]\n    cmp r4, #0x1e\n    bge _02094606\n    mov r0, #0x34\n    mul r0, r4\n    add r5, r6, r0\n    mov r7, #0x40\n    ldr r0, [sp, #0x24]\n    ldr r1, _02094658 ; =0x000008D4\n    str r0, [sp]\n    ldr r0, [sp, #0x20]\n    add r1, r6, r1\n    str r0, [sp, #4]\n    add r0, sp, #0x28\n    add r2, r4, #0\n    mov r3, #0\n    str r7, [sp, #8]\n    bl sub_02094C08\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, #0x34\n    cmp r4, #0x1e\n    blt _020945DA\n    ldr r0, [sp, #0x24]\n    bl Heap_Free\n    ldr r0, [sp, #0x20]\n    bl NARC_Delete\n    ldr r1, _0209465C ; =sub_02094758\n    ldr r0, _02094660 ; =0x00004644\n    str r1, [r6, r0]\n    ldrb r1, [r6, #0xf]\n    add r0, r6, #0\n    bl sub_02094C88\n    add r0, r6, #0\n    bl sub_02094EB4\n    mov r1, #0x14\n    str r1, [sp]\n    mov r2, #0\n    ldr r0, _02094664 ; =0x000046D0\n    str r1, [sp, #4]\n    ldr r0, [r6, r0]\n    add r3, r2, #0\n    add r0, #0xc\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    str r2, [sp, #0x10]\n    str r1, [sp, #0x14]\n    str r1, [sp, #0x18]\n    ldr r0, [r6]\n    mov r1, #2\n    bl CopyRectToBgTilemapRect\n    ldr r0, [r6]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x58\n    pop {r3, r4, r5, r6, r7, pc}\n    _02094654: .word 0x00004640\n    _02094658: .word 0x000008D4\n    _0209465C: .word sub_02094758\n    _02094660: .word 0x00004644\n    _02094664: .word 0x000046D0"
    );
    #endif
}

void sub_02094668(void) {
    /* Original at 0x02094668 */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r4, r0, #0\n    str r1, [sp, #0xc]\n    ldr r1, [r4, #4]\n    mov r0, #0x14\n    add r7, r2, #0\n    add r6, r3, #0\n    bl NARC_New\n    str r0, [sp, #0x14]\n    mov r1, #1\n    ldr r0, [r4, #4]\n    lsl r1, r1, #0xc\n    bl Heap_AllocAtEnd\n    str r0, [sp, #0x18]\n    mov r3, #0\n    mov r1, #0x83\n    ldr r0, _02094740 ; =0x000008DC\n    add r5, r4, #0\n    add r2, r3, #0\n    lsl r1, r1, #2\n    add r3, r3, #1\n    str r2, [r5, r0]\n    add r5, r5, r1\n    cmp r3, #0x1e\n    blt _02094696\n    cmp r6, #0\n    beq _020946E6\n    ldr r1, [sp, #0xc]\n    ldr r0, _02094744 ; =0x000007EC\n    add r3, r7, #0\n    mov r2, #0x34\n    mul r3, r2\n    mul r2, r1\n    add r1, r4, r2\n    add r5, r4, r0\n    mov ip, r2\n    add r2, r5, r3\n    add r6, r1, r0\n    mov r7, #6\n    ldmia r2!, {r0, r1}\n    stmia r6!, {r0, r1}\n    sub r7, r7, #1\n    bne _020946BC\n    ldr r0, [sp, #0x18]\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    str r0, [sp, #4]\n    ldr r0, _02094748 ; =0x00000222\n    str r0, [sp, #8]\n    add r0, r5, r3\n    ldr r5, _0209474C ; =0x000008D4\n    mov r3, ip\n    add r1, r4, r5\n    add r3, r4, r3\n    sub r5, #0xec\n    ldr r2, [sp, #0xc]\n    ldr r3, [r3, r5]\n    bl sub_02094C08\n    b _0209472A\n    mov r0, #0x67\n    lsl r0, r0, #2\n    add r6, r4, r0\n    add r5, r7, #0\n    mov r1, #0x34\n    mul r5, r1\n    ldr r0, [sp, #0xc]\n    add r3, r6, r5\n    mul r1, r0\n    str r1, [sp, #0x10]\n    ldr r0, _02094744 ; =0x000007EC\n    add r1, r4, r1\n    add r2, r1, r0\n    mov r7, #6\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r7, r7, #1\n    bne _02094702\n    ldr r0, [sp, #0x18]\n    ldr r3, [sp, #0x10]\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    add r3, r4, r3\n    str r0, [sp, #4]\n    ldr r0, _02094748 ; =0x00000222\n    str r0, [sp, #8]\n    add r0, r6, r5\n    ldr r5, _0209474C ; =0x000008D4\n    ldr r2, [sp, #0xc]\n    add r1, r4, r5\n    sub r5, #0xec\n    ldr r3, [r3, r5]\n    bl sub_02094C08\n    ldr r0, [sp, #0x18]\n    bl Heap_Free\n    ldr r0, [sp, #0x14]\n    bl NARC_Delete\n    ldr r1, _02094750 ; =sub_02094758\n    ldr r0, _02094754 ; =0x00004644\n    str r1, [r4, r0]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _02094740: .word 0x000008DC\n    _02094744: .word 0x000007EC\n    _02094748: .word 0x00000222\n    _0209474C: .word 0x000008D4\n    _02094750: .word sub_02094758\n    _02094754: .word 0x00004644"
    );
    #endif
}

void sub_02094758(void) {
    /* Original at 0x02094758 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r6, #2\n    lsl r6, r6, #8\n    add r7, r6, #0\n    add r5, r0, #0\n    mov r4, #0\n    add r7, #0xc\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    beq _0209478A\n    add r0, r5, #0\n    add r0, #0xc\n    add r1, r6, #0\n    bl DC_FlushRange\n    add r0, r5, #0\n    ldr r1, [r5]\n    add r0, #0xc\n    add r2, r6, #0\n    bl GX_LoadOBJ\n    ldr r0, [r5, #8]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, r5, r7\n    cmp r4, #0x1e\n    blt _02094766\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02094794(void) {
    /* Original at 0x02094794 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0x34\n    mul r0, r4\n    add r1, r5, r0\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl Sprite_GetMatrixPtr\n    add r1, r0, #0\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl Sprite_SetMatrix\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_020947C0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020947C0(void) {
    /* Original at 0x020947C0 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r0, #0x34\n    add r6, r4, #0\n    mul r6, r0\n    mov r0, #0x66\n    add r1, r5, r6\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _020947E4\n    bl Sprite_GetDrawFlag\n    cmp r0, #0\n    bne _020947E4\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x69\n    add r1, r5, r6\n    lsl r0, r0, #2\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    beq _020947F4\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    mov r0, #0\n    mvn r1, r1\n    add r2, r0, #0\n    b _0209481A\n    mov r3, #0x8d\n    lsl r3, r3, #4\n    ldr r3, [r5, r3]\n    ldrb r6, [r5, #0xf]\n    add r7, r3, r2\n    ldr r3, [r7, #8]\n    cmp r6, r3\n    bne _02094816\n    ldr r3, [r7, #4]\n    cmp r4, r3\n    bne _02094816\n    add r1, r0, #0\n    add r2, #0xc\n    add r0, r0, #1\n    mov r3, #0\n    mvn r3, r3\n    cmp r1, r3\n    bne _02094828\n    ldrb r3, [r5, #0xd]\n    cmp r0, r3\n    blt _020947FE\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _0209485C\n    ldrb r3, [r5, #0xd]\n    ldrb r0, [r5, #0xe]\n    cmp r0, r3\n    bne _0209483C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r4, #0\n    cmp r3, #0\n    ble _0209485C\n    mov r0, #0x8d\n    lsl r0, r0, #4\n    ldr r2, [r5, r0]\n    sub r0, r4, #1\n    ldr r1, [r2, #4]\n    cmp r1, r0\n    bne _02094854\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r2, #0xc\n    cmp r4, r3\n    blt _0209484A\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02094860(void) {
    /* Original at 0x02094860 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02094894\n    ldrb r1, [r5, #0xd]\n    add r6, r0, #0\n    cmp r4, r1\n    bge _0209488E\n    mov r0, #0x34\n    mul r0, r4\n    add r1, r5, r0\n    ldr r0, _02094890 ; =0x000007E8\n    ldr r0, [r1, r0]\n    bl Sprite_GetMatrixPtr\n    add r1, r0, #0\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl Sprite_SetMatrix\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    _02094890: .word 0x000007E8"
    );
    #endif
}

void sub_02094894(void) {
    /* Original at 0x02094894 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrb r2, [r0, #0xd]\n    cmp r1, r2\n    blt _020948A0\n    mov r0, #3\n    pop {r3, pc}\n    mov r2, #0x34\n    mul r2, r1\n    add r1, r0, r2\n    ldr r0, _020948C0 ; =0x000007E8\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _020948BA\n    bl Sprite_GetDrawFlag\n    cmp r0, #0\n    bne _020948BA\n    mov r0, #3\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    nop\n    _020948C0: .word 0x000007E8"
    );
    #endif
}

void sub_020948C4(void) {
    /* Original at 0x020948C4 */
    /* Requires manual decompilation - 132 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r1, _020949D4 ; =0x00004680\n    mov r0, #1\n    str r0, [r5, r1]\n    add r6, r2, #0\n    add r0, r1, #4\n    str r6, [r5, r0]\n    add r0, r1, #0\n    add r0, #0x1c\n    str r4, [r5, r0]\n    cmp r4, #1\n    bne _020948EE\n    mov r0, #0x66\n    lsl r0, r0, #2\n    add r7, r5, r0\n    add r1, #0x20\n    str r7, [r5, r1]\n    b _02094900\n    cmp r4, #2\n    bne _020948FC\n    ldr r0, _020949D8 ; =0x000007E8\n    add r1, #0x20\n    add r7, r5, r0\n    str r7, [r5, r1]\n    b _02094900\n    bl GF_AssertFail\n    mov r0, #0x34\n    mul r0, r6\n    ldr r0, [r7, r0]\n    bl Sprite_GetMatrixPtr\n    add r3, r0, #0\n    ldr r0, _020949DC ; =0x00004688\n    add r2, r5, r0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    mov r1, #0x2e\n    str r0, [r2]\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _020949E0 ; =0x000046A0\n    ldr r2, [r5, r0]\n    sub r0, #0x1c\n    ldr r1, [r5, r0]\n    mov r0, #0x34\n    mul r0, r1\n    ldr r0, [r2, r0]\n    mov r1, #3\n    bl Sprite_SetDrawPriority\n    cmp r4, #1\n    bne _020949D0\n    ldr r0, _020949E0 ; =0x000046A0\n    ldr r2, [r5, r0]\n    sub r0, #0x1c\n    ldr r1, [r5, r0]\n    mov r0, #0x34\n    mul r0, r1\n    ldr r0, [r2, r0]\n    bl Sprite_GetMatrixPtr\n    add r6, r0, #0\n    mov r3, #0\n    mov r1, #0x83\n    ldr r0, _020949E4 ; =0x000008DC\n    add r4, r5, #0\n    add r2, r3, #0\n    lsl r1, r1, #2\n    add r3, r3, #1\n    str r2, [r4, r0]\n    add r4, r4, r1\n    cmp r3, #0x1e\n    blt _0209495C\n    ldr r1, [r5, #4]\n    mov r0, #0x14\n    bl NARC_New\n    add r4, r0, #0\n    mov r1, #1\n    ldr r0, [r5, #4]\n    lsl r1, r1, #0xc\n    bl Heap_AllocAtEnd\n    add r7, r0, #0\n    ldr r3, _020949E0 ; =0x000046A0\n    str r7, [sp]\n    add r1, r3, #0\n    ldr r0, _020949E8 ; =0x000002B1\n    str r4, [sp, #4]\n    str r0, [sp, #8]\n    sub r1, #0x1c\n    ldr r2, [r5, r1]\n    mov r1, #0x34\n    mul r1, r2\n    ldr r0, [r5, r3]\n    mov r2, #0\n    add r0, r0, r1\n    lsr r1, r3, #3\n    mov r3, #0x7b\n    lsl r3, r3, #4\n    ldr r3, [r5, r3]\n    add r0, r0, #4\n    add r1, r5, r1\n    bl sub_02094C08\n    mov r0, #0x7b\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl Sprite_SetMatrix\n    mov r0, #0x7b\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add r0, r7, #0\n    bl Heap_Free\n    add r0, r4, #0\n    bl NARC_Delete\n    ldr r1, _020949EC ; =sub_02094758\n    ldr r0, _020949F0 ; =0x00004644\n    str r1, [r5, r0]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _020949D4: .word 0x00004680\n    _020949D8: .word 0x000007E8\n    _020949DC: .word 0x00004688\n    _020949E0: .word 0x000046A0\n    _020949E4: .word 0x000008DC\n    _020949E8: .word 0x000002B1\n    _020949EC: .word sub_02094758\n    _020949F0: .word 0x00004644"
    );
    #endif
}

void sub_020949F4(void) {
    /* Original at 0x020949F4 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x20\n    add r4, r0, #0\n    ldr r0, _02094A64 ; =0x00004680\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02094A5E\n    add r0, sp, #4\n    add r1, sp, #0\n    bl System_GetTouchHeldCoords\n    ldr r0, [sp, #4]\n    add r5, sp, #0x14\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x14]\n    ldr r0, [sp]\n    add r3, sp, #8\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x18]\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r3]\n    mov r0, #1\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #0xe\n    sub r0, r1, r0\n    str r0, [sp, #0xc]\n    ldr r0, _02094A68 ; =0x000046A0\n    ldr r3, [r4, r0]\n    sub r0, #0x1c\n    ldr r1, [r4, r0]\n    mov r0, #0x34\n    mul r0, r1\n    ldr r0, [r3, r0]\n    add r1, r2, #0\n    bl Sprite_SetMatrix\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    add r1, sp, #0x14\n    bl Sprite_SetMatrix\n    ldr r1, [sp, #4]\n    ldr r0, _02094A6C ; =0x00004694\n    str r1, [r4, r0]\n    ldr r1, [sp]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    add sp, #0x20\n    pop {r3, r4, r5, pc}\n    nop\n    _02094A64: .word 0x00004680\n    _02094A68: .word 0x000046A0\n    _02094A6C: .word 0x00004694"
    );
    #endif
}

void sub_02094A70(void) {
    /* Original at 0x02094A70 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02094A8C ; =0x00004680\n    add r4, r0, #0\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    beq _02094A88\n    bl sub_02093CE4\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_02094A90\n    pop {r4, pc}\n    nop\n    _02094A8C: .word 0x00004680"
    );
    #endif
}

void sub_02094A90(void) {
    /* Original at 0x02094A90 */
    /* Requires manual decompilation - 174 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    cmp r1, #0\n    beq _02094B1A\n    ldr r2, _02094BF0 ; =0x0000469C\n    ldr r0, [r4, r2]\n    cmp r0, #2\n    bne _02094AE8\n    cmp r1, #2\n    bne _02094AC0\n    add r0, r2, #0\n    sub r0, #0x14\n    add r5, r4, r0\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    sub r2, #0x18\n    str r0, [r3]\n    ldr r0, [r4, r2]\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    b _02094B0E\n    add r0, r2, #0\n    add r0, #0x14\n    ldr r0, [r4, r0]\n    add r2, #0x14\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    mov r0, #0x35\n    lsl r0, r0, #0xe\n    str r0, [sp]\n    add r1, r1, #1\n    mov r0, #0x28\n    mul r0, r1\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [r4, r2]\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    b _02094B0E\n    add r0, r2, #0\n    add r0, #0x14\n    ldr r0, [r4, r0]\n    add r2, #0x14\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    mov r0, #0x35\n    lsl r0, r0, #0xe\n    str r0, [sp]\n    add r1, r1, #1\n    mov r0, #0x28\n    mul r0, r1\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [r4, r2]\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    ldr r0, _02094BF4 ; =0x000046B8\n    mov r1, #3\n    ldr r0, [r4, r0]\n    bl sub_02095D40\n    b _02094B5C\n    ldr r2, _02094BF8 ; =0x00004688\n    add r3, sp, #0\n    add r5, r4, r2\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r3]\n    add r0, r2, #0\n    add r0, #0x14\n    ldr r0, [r4, r0]\n    cmp r0, #2\n    bne _02094B48\n    add r0, r2, #0\n    sub r2, r2, #4\n    ldr r2, [r4, r2]\n    add r0, #0x30\n    lsl r2, r2, #0x18\n    ldr r0, [r4, r0]\n    mov r1, #3\n    lsr r2, r2, #0x18\n    bl sub_02095D40\n    b _02094B5C\n    add r0, r2, #0\n    sub r2, r2, #4\n    ldr r2, [r4, r2]\n    add r0, #0x30\n    lsl r2, r2, #0x18\n    ldr r0, [r4, r0]\n    mov r1, #2\n    lsr r2, r2, #0x18\n    bl sub_02095D40\n    ldr r1, _02094BFC ; =0x000046A0\n    add r0, r1, #0\n    sub r0, #0x1c\n    ldr r2, [r4, r0]\n    ldr r3, [r4, r1]\n    mov r0, #0x34\n    mul r0, r2\n    sub r1, #0x18\n    ldr r0, [r3, r0]\n    add r1, r4, r1\n    bl Sprite_SetMatrix\n    ldr r0, _02094BFC ; =0x000046A0\n    ldr r2, [r4, r0]\n    sub r0, #0x1c\n    ldr r1, [r4, r0]\n    mov r0, #0x34\n    mul r0, r1\n    ldr r0, [r2, r0]\n    mov r1, #6\n    bl Sprite_SetDrawPriority\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    mov r1, #0x2d\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _02094C00 ; =0x000046BC\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _02094BAC\n    mov r1, #0\n    str r1, [r4, r0]\n    ldr r0, _02094C04 ; =0x00004680\n    mov r1, #0\n    str r1, [r4, r0]\n    sub r3, r1, #1\n    add r2, r0, #4\n    str r3, [r4, r2]\n    add r2, r0, #0\n    add r2, #8\n    str r1, [r4, r2]\n    add r2, r0, #0\n    add r2, #0xc\n    str r1, [r4, r2]\n    add r2, r0, #0\n    add r2, #0x10\n    str r1, [r4, r2]\n    add r2, r0, #0\n    add r2, #0x14\n    str r1, [r4, r2]\n    add r2, r0, #0\n    add r2, #0x18\n    str r1, [r4, r2]\n    add r2, r0, #0\n    add r2, #0x20\n    str r1, [r4, r2]\n    add r0, #0x1c\n    str r1, [r4, r0]\n    mov r0, #0x7b\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _02094BF0: .word 0x0000469C\n    _02094BF4: .word 0x000046B8\n    _02094BF8: .word 0x00004688\n    _02094BFC: .word 0x000046A0\n    _02094C00: .word 0x000046BC\n    _02094C04: .word 0x00004680"
    );
    #endif
}

void sub_02094C08(void) {
    /* Original at 0x02094C08 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0x83\n    add r7, r2, #0\n    lsl r0, r0, #2\n    mul r0, r7\n    add r5, r3, #0\n    add r4, r1, r0\n    cmp r5, #0\n    beq _02094C64\n    ldrh r1, [r6, #8]\n    ldrh r2, [r6, #0xa]\n    ldr r0, [r6]\n    bl GetMonIconNaixEx\n    ldr r2, [sp, #0x18]\n    ldr r3, [sp, #0x1c]\n    add r1, sp, #0\n    bl sub_02094C6C\n    ldr r0, [sp]\n    add r1, r4, #0\n    mov r2, #2\n    ldr r0, [r0, #0x14]\n    add r1, #0xc\n    lsl r2, r2, #8\n    bl MIi_CpuCopyFast\n    ldr r1, [sp, #0x20]\n    lsl r0, r7, #4\n    add r0, r1, r0\n    lsl r0, r0, #5\n    str r0, [r4]\n    str r5, [r4, #8]\n    ldrh r1, [r6, #0xa]\n    ldrh r2, [r6, #8]\n    ldr r0, [r6]\n    bl GetMonIconPaletteEx\n    add r0, #8\n    str r0, [r4, #4]\n    ldr r1, [r4, #4]\n    add r0, r5, #0\n    bl Sprite_SetPaletteOverride\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [r4, #8]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02094C6C(void) {
    NARC_ReadWholeMember(r3, r0);
    NNS_G2dGetUnpackedBGCharacterData(r4, r5);
}

void sub_02094C88(void) {
    /* Original at 0x02094C88 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r1, #0\n    add r5, r0, #0\n    cmp r6, #0x12\n    bne _02094CB2\n    ldr r2, _02094D0C ; =0x0000012A\n    ldr r3, [r5, #4]\n    mov r0, #1\n    mov r1, #0x1b\n    bl NewMsgDataFromNarc\n    add r6, r0, #0\n    mov r1, #1\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r6, #0\n    bl DestroyMsgData\n    b _02094CC8\n    ldr r1, [r5, #4]\n    mov r0, #0x40\n    bl String_New\n    ldr r3, _02094D10 ; =0x0000463C\n    add r2, r6, #0\n    ldr r1, [r5, r3]\n    add r3, #0x10\n    ldr r3, [r5, r3]\n    add r4, r0, #0\n    blx r3\n    ldr r0, _02094D14 ; =0x00004650\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    mov r3, #0x60\n    bl FontID_String_GetCenterAlignmentX\n    mov r1, #0\n    add r3, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02094D18 ; =0x00010200\n    add r2, r4, #0\n    str r0, [sp, #8]\n    ldr r0, _02094D14 ; =0x00004650\n    str r1, [sp, #0xc]\n    add r0, r5, r0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, _02094D14 ; =0x00004650\n    add r0, r5, r0\n    bl CopyWindowToVram\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _02094D0C: .word 0x0000012A\n    _02094D10: .word 0x0000463C\n    _02094D14: .word 0x00004650\n    _02094D18: .word 0x00010200"
    );
    #endif
}

void sub_02094D1C(void) {
    /* Original at 0x02094D1C */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r2, _02094D90 ; =0x0000012A\n    ldr r3, [r5, #4]\n    mov r0, #1\n    mov r1, #0x1b\n    bl NewMsgDataFromNarc\n    mov r1, #0\n    add r6, r0, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r0, _02094D94 ; =0x00004670\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldrb r0, [r5, #0x13]\n    cmp r0, #0\n    beq _02094D78\n    ldr r0, _02094D94 ; =0x00004670\n    add r0, r5, r0\n    bl GetWindowWidth\n    lsl r3, r0, #3\n    mov r0, #4\n    add r1, r4, #0\n    mov r2, #0\n    bl FontID_String_GetCenterAlignmentX\n    mov r1, #0\n    add r3, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02094D98 ; =0x000F0100\n    add r2, r4, #0\n    str r0, [sp, #8]\n    ldr r0, _02094D94 ; =0x00004670\n    str r1, [sp, #0xc]\n    add r0, r5, r0\n    mov r1, #4\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, _02094D94 ; =0x00004670\n    add r0, r5, r0\n    bl CopyWindowToVram\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl DestroyMsgData\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _02094D90: .word 0x0000012A\n    _02094D94: .word 0x00004670\n    _02094D98: .word 0x000F0100"
    );
    #endif
}

void sub_02094D9C(void) {
    /* Original at 0x02094D9C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02094DF8\n    ldr r0, _02094DF4 ; =gSystem + 0x60\n    mov r1, #1\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    mov r1, #0\n    mov r0, #0xc0\n    str r0, [sp]\n    mov r0, #0x97\n    add r2, r1, #0\n    add r3, r1, #0\n    str r4, [sp, #4]\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #5\n    lsl r0, r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r1, #2\n    mov r0, #0x97\n    add r2, r5, #0\n    add r3, r1, #0\n    str r4, [sp, #0xc]\n    bl GfGfxLoader_LoadCharData\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    mov r3, #1\n    str r1, [sp]\n    bl BG_FillCharDataRange\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _02094DF4: .word gSystem + 0x60"
    );
    #endif
}

void sub_02094DF8(void) {
    /* Original at 0x02094DF8 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x70\n    ldr r5, _02094EA4 ; =_021083E4\n    add r4, r0, #0\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0x54\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02094EA8 ; =_021083C8\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02094EAC ; =_021083AC\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02094EB0 ; =_02108400\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    add sp, #0x70\n    pop {r3, r4, r5, pc}\n    nop\n    _02094EA4: .word _021083E4\n    _02094EA8: .word _021083C8\n    _02094EAC: .word _021083AC\n    _02094EB0: .word _02108400"
    );
    #endif
}

void sub_02094EB4(void) {
    /* Original at 0x02094EB4 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0xd]\n    mov r6, #0\n    cmp r0, #0\n    ble _02094F12\n    add r4, r6, #0\n    sub r7, r6, #1\n    mov r0, #0x8d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    ldr r1, [r0, #4]\n    cmp r1, r7\n    beq _02094F00\n    ldrb r2, [r5, #0xf]\n    ldr r1, [r0, #8]\n    cmp r2, r1\n    bne _02094F00\n    ldr r0, [r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x8d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    ldr r1, [r0, #4]\n    mov r0, #0x34\n    mul r0, r1\n    add r1, r5, r0\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl Sprite_SetOamMode\n    b _02094F08\n    ldr r0, [r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldrb r0, [r5, #0xd]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _02094EC4\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02094F14(void) {
    /* Original at 0x02094F14 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    ldr r2, _02094F58 ; =0x00004640\n    ldr r0, [r0, r2]\n    bl Party_GetMonByIndex\n    add r5, r0, #0\n    mov r1, #MON_DATA_SPECIES\n    mov r2, #0\n    bl GetMonData\n    str r0, [r4]\n    add r0, r5, #0\n    mov r1, #MON_DATA_IS_EGG\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #8]\n    add r0, r5, #0\n    mov r1, #MON_DATA_FORM\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0xa]\n    add r0, r5, #0\n    mov r1, #MON_DATA_HELD_ITEM\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0xc]\n    mov r0, #0\n    strh r0, [r4, #0xe]\n    pop {r3, r4, r5, pc}\n    nop\n    _02094F58: .word 0x00004640"
    );
    #endif
}

void sub_02094F5C(void) {
    /* Original at 0x02094F5C */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r1, #0\n    add r5, r0, #0\n    lsl r7, r6, #4\n    ldr r1, _02095010 ; =0x0000088C\n    add r0, r5, r7\n    ldr r2, [r0, r1]\n    mov r0, #0xc\n    add r4, r2, #0\n    add r1, #0x44\n    mul r4, r0\n    ldr r0, [r5, r1]\n    add r2, r0, r4\n    ldr r1, [r2, #8]\n    ldr r0, [r0, r4]\n    str r1, [sp, #4]\n    ldr r1, [r2, #4]\n    str r1, [sp]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x8d\n    lsl r0, r0, #4\n    ldr r2, [r5, r0]\n    mov r1, #0\n    mvn r1, r1\n    add r2, r2, r4\n    str r1, [r2, #4]\n    ldrb r1, [r5, #0xe]\n    sub r1, r1, #1\n    strb r1, [r5, #0xe]\n    ldrb r2, [r5, #0xf]\n    ldr r1, [sp, #4]\n    cmp r1, r2\n    bne _02094FBA\n    ldr r0, [sp]\n    mov r1, #0x34\n    mul r1, r0\n    mov r0, #0x66\n    add r1, r5, r1\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl Sprite_SetOamMode\n    b _02094FE6\n    mov r1, #0x34\n    mul r1, r6\n    add r1, r5, r1\n    sub r0, #0xe8\n    ldr r0, [r1, r0]\n    bl Sprite_GetMatrixPtr\n    add r1, r0, #0\n    ldr r0, _02095014 ; =0x000008C4\n    ldr r0, [r5, r0]\n    bl Sprite_SetMatrix\n    ldr r0, _02095014 ; =0x000008C4\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _02095014 ; =0x000008C4\n    mov r1, #0x32\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    mov r2, #0x89\n    mov r1, #0\n    add r0, r5, r7\n    lsl r2, r2, #4\n    str r1, [r0, r2]\n    mov r0, #0x34\n    mul r0, r6\n    add r0, r5, r0\n    sub r2, #0xa8\n    ldr r0, [r0, r2]\n    bl Sprite_SetDrawFlag\n    ldr r0, _02095018 ; =0x000046A4\n    mov r2, #0\n    ldr r1, [r5, r0]\n    lsl r0, r6, #3\n    add r0, r1, r0\n    str r2, [r0, #4]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02095010: .word 0x0000088C\n    _02095014: .word 0x000008C4\n    _02095018: .word 0x000046A4"
    );
    #endif
}

void sub_0209501C(void) {
    /* Original at 0x0209501C */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r1, #0\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r0, [r4, #4]\n    add r6, r2, #0\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r2, _020950B0 ; =0x000003D2\n    mov r3, #0xb\n    bl LoadUserFrameGfx2\n    mov r0, #0x15\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r3, #2\n    ldr r1, _020950B4 ; =0x00004660\n    str r3, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0xc6\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, r4, r1\n    mov r2, #3\n    bl AddWindowParameterized\n    ldr r2, _020950B8 ; =0x0000012A\n    ldr r3, [r4, #4]\n    mov r0, #1\n    mov r1, #0x1b\n    bl NewMsgDataFromNarc\n    add r1, r5, #0\n    add r7, r0, #0\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r0, _020950B4 ; =0x00004660\n    mov r1, #0xf\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _020950BC ; =0x0001020F\n    add r1, r6, #0\n    str r0, [sp, #8]\n    ldr r0, _020950B4 ; =0x00004660\n    add r2, r5, #0\n    add r0, r4, r0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r7, #0\n    bl DestroyMsgData\n    ldr r0, _020950B4 ; =0x00004660\n    add r0, r4, r0\n    bl CopyWindowToVram\n    mov r0, #8\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _020950B0: .word 0x000003D2\n    _020950B4: .word 0x00004660\n    _020950B8: .word 0x0000012A\n    _020950BC: .word 0x0001020F"
    );
    #endif
}

void sub_020950C0(void) {
    sub_0209501C(5, 1);
}

void sub_020950D4(void) {
    /* Original at 0x020950D4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xd]\n    cmp r0, #1\n    bne _020950F2\n    ldr r0, _020950F4 ; =0x00004660\n    add r0, r4, r0\n    bl GetWindowBgConfig\n    cmp r0, #0\n    beq _020950F2\n    ldr r0, _020950F4 ; =0x00004660\n    add r0, r4, r0\n    bl RemoveWindow\n    pop {r4, pc}\n    _020950F4: .word 0x00004660"
    );
    #endif
}

void sub_020950F8(void) {
    /* Original at 0x020950F8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0209511A\n    cmp r1, #0\n    beq _0209510E\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void sub_0209511C(void) {
    /* Original at 0x0209511C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    ldrb r1, [r0, #0xd]\n    mov r4, #0\n    cmp r1, #0\n    ble _0209514C\n    ldr r1, _02095150 ; =0x00000888\n    ldr r2, _02095154 ; =0x000046B4\n    add r5, r0, #0\n    add r6, r4, #0\n    ldr r3, _02095158 ; =0x00000884\n    ldr r7, _02095154 ; =0x000046B4\n    ldr r3, [r5, r3]\n    ldr r7, [r0, r7]\n    add r4, r4, #1\n    str r3, [r7, r6]\n    ldr r7, [r0, r2]\n    ldr r3, [r5, r1]\n    add r7, r7, r6\n    str r3, [r7, #4]\n    ldrb r3, [r0, #0xd]\n    add r5, #0x10\n    add r6, #8\n    cmp r4, r3\n    blt _0209512E\n    pop {r4, r5, r6, r7}\n    bx lr\n    _02095150: .word 0x00000888\n    _02095154: .word 0x000046B4\n    _02095158: .word 0x00000884"
    );
    #endif
}

void sub_0209515C(void) {
    /* Original at 0x0209515C */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r7, #0x66\n    mov r6, #0\n    add r4, r5, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    cmp r0, #0\n    beq _02095172\n    bl Sprite_Delete\n    add r6, r6, #1\n    add r4, #0x34\n    cmp r6, #0x1e\n    blt _02095168\n    ldrb r0, [r5, #0xd]\n    mov r6, #0\n    cmp r0, #0\n    ble _0209519A\n    ldr r7, _02095220 ; =0x000007E8\n    add r4, r5, #0\n    ldr r0, [r4, r7]\n    cmp r0, #0\n    beq _02095190\n    bl Sprite_Delete\n    ldrb r0, [r5, #0xd]\n    add r6, r6, #1\n    add r4, #0x34\n    cmp r6, r0\n    blt _02095186\n    mov r6, #0\n    cmp r0, #0\n    ble _020951BC\n    mov r7, #0x8d\n    add r4, r6, #0\n    lsl r7, r7, #4\n    ldr r0, [r5, r7]\n    ldr r0, [r0, r4]\n    cmp r0, #0\n    beq _020951B2\n    bl Sprite_Delete\n    ldrb r0, [r5, #0xd]\n    add r6, r6, #1\n    add r4, #0xc\n    cmp r6, r0\n    blt _020951A6\n    ldr r0, _02095224 ; =0x000008B4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _020951C8\n    bl Sprite_Delete\n    ldr r0, _02095228 ; =0x000008BC\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _020951D4\n    bl Sprite_Delete\n    ldr r0, _0209522C ; =0x000008B8\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _020951E0\n    bl Sprite_Delete\n    ldr r0, _02095230 ; =0x000008C4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _020951EC\n    bl Sprite_Delete\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _020951FA\n    bl Sprite_Delete\n    ldrb r1, [r5, #0xd]\n    mov r0, #3\n    mov r4, #0\n    sub r0, r0, r1\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    cmp r6, #0\n    ble _0209521E\n    ldr r7, _02095234 ; =0x000008C8\n    ldr r0, [r5, r7]\n    cmp r0, #0\n    beq _02095216\n    bl Sprite_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r6\n    blt _0209520C\n    pop {r3, r4, r5, r6, r7, pc}\n    _02095220: .word 0x000007E8\n    _02095224: .word 0x000008B4\n    _02095228: .word 0x000008BC\n    _0209522C: .word 0x000008B8\n    _02095230: .word 0x000008C4\n    _02095234: .word 0x000008C8"
    );
    #endif
}

void sub_02095238(void) {
    /* Original at 0x02095238 */
    /* Requires manual decompilation - 126 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    ldr r0, _02095348 ; =0x000046B8\n    mov r5, #0\n    ldr r0, [r4, r0]\n    bl sub_02095DD8\n    add r7, r0, #0\n    ldr r0, _02095348 ; =0x000046B8\n    ldr r0, [r4, r0]\n    bl sub_02095DE8\n    add r1, r5, #0\n    add r6, r0, #0\n    str r1, [sp, #0x14]\n    cmp r7, #6\n    bhi _0209532C\n    add r1, r7, r7\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02095268: ; jump table\n    mov r0, #5\n    lsl r0, r0, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #1\n    lsl r0, r0, #0x10\n    str r0, [sp, #0x10]\n    mov r5, #1\n    b _0209532C\n    mov r1, #6\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r1, r0, #0x18\n    mov r0, #0x18\n    mul r0, r1\n    add r0, #0x14\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #6\n    bl _s32_div_f\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    mov r0, #0x18\n    mul r0, r1\n    add r0, #0x28\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x10]\n    mov r5, #1\n    b _0209532C\n    mov r0, #0x35\n    lsl r0, r0, #0xe\n    str r0, [sp, #0xc]\n    add r1, r6, #1\n    mov r0, #0x28\n    mul r0, r1\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x10]\n    mov r5, #1\n    b _0209532C\n    mov r0, #0x35\n    lsl r0, r0, #0xe\n    add r1, r6, #1\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    add r5, r1, #0\n    mul r5, r0\n    lsl r0, r5, #0xc\n    ldr r2, _0209534C ; =0x000046BC\n    str r0, [sp, #0x10]\n    ldr r0, [r4, r2]\n    cmp r0, #0\n    beq _0209531A\n    add r6, sp, #0xc\n    ldmia r6!, {r0, r1}\n    add r3, sp, #0\n    add r7, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    str r0, [r3]\n    mov r0, #1\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0xe\n    sub r0, r1, r0\n    str r0, [sp, #4]\n    add r0, r2, #0\n    sub r2, #0x38\n    sub r0, #0x1c\n    ldr r2, [r4, r2]\n    mov r1, #0x34\n    ldr r0, [r4, r0]\n    mul r1, r2\n    ldr r0, [r0, r1]\n    add r1, r7, #0\n    bl Sprite_SetMatrix\n    ldr r0, _02095350 ; =0x00004694\n    mov r1, #0xd4\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r5, [r4, r0]\n    mov r5, #1\n    b _0209532C\n    mov r0, #0xe\n    lsl r0, r0, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #0xb\n    lsl r0, r0, #0x10\n    str r0, [sp, #0x10]\n    mov r5, #1\n    cmp r5, #0\n    beq _02095342\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    add r1, sp, #0xc\n    bl Sprite_SetMatrix\n    add r0, r4, #0\n    bl sub_020956B8\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02095348: .word 0x000046B8\n    _0209534C: .word 0x000046BC\n    _02095350: .word 0x00004694"
    );
    #endif
}

void sub_02095354(void) {
    /* Original at 0x02095354 */
    /* Requires manual decompilation - 164 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r4, r0, #0\n    ldr r0, _020954B8 ; =0x000046B8\n    mov r5, #0\n    ldr r0, [r4, r0]\n    bl sub_02095DD8\n    add r6, r0, #0\n    ldr r0, _020954B8 ; =0x000046B8\n    ldr r0, [r4, r0]\n    bl sub_02095DE8\n    add r7, r0, #0\n    cmp r6, #6\n    bhi _0209539A\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02095380: ; jump table\n    add r0, r4, #0\n    add r1, r7, #0\n    bl sub_02094794\n    cmp r0, #1\n    beq _0209539C\n    b _020954B2\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_020948C4\n    ldrb r0, [r4, #0xd]\n    cmp r0, #0\n    ble _0209543A\n    ldr r2, _020954BC ; =0x000046A4\n    add r1, r5, #0\n    add r6, sp, #0x18\n    add r0, r5, #0\n    str r0, [r6]\n    str r0, [r6, #4]\n    str r0, [r6, #8]\n    ldr r3, [r4, r2]\n    add r3, r3, r1\n    ldr r3, [r3, #4]\n    cmp r3, #0\n    bne _02095430\n    ldr r2, _020954C0 ; =0x00004694\n    mov r0, #0xd4\n    str r0, [r4, r2]\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    add r1, r0, #1\n    mov r0, #0x28\n    add r3, r1, #0\n    mul r3, r0\n    add r0, r2, #4\n    str r3, [r4, r0]\n    ldr r0, [r4, r2]\n    add r3, sp, #0xc\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x18]\n    add r0, r2, #4\n    ldr r0, [r4, r0]\n    add r7, r3, #0\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x1c]\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    str r0, [r3]\n    mov r0, #1\n    ldr r1, [sp, #0x10]\n    lsl r0, r0, #0xe\n    sub r0, r1, r0\n    str r0, [sp, #0x10]\n    add r0, r2, #0\n    sub r2, #0x10\n    add r0, #0xc\n    ldr r2, [r4, r2]\n    mov r1, #0x34\n    ldr r0, [r4, r0]\n    mul r1, r2\n    ldr r0, [r0, r1]\n    add r1, r7, #0\n    bl Sprite_SetMatrix\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    add r1, sp, #0x18\n    bl Sprite_SetMatrix\n    ldr r0, _020954B8 ; =0x000046B8\n    lsl r2, r5, #0x18\n    ldr r0, [r4, r0]\n    mov r1, #4\n    lsr r2, r2, #0x18\n    bl sub_02095D40\n    b _0209543A\n    ldrb r3, [r4, #0xd]\n    add r5, r5, #1\n    add r1, #8\n    cmp r5, r3\n    blt _020953B4\n    ldr r0, _020954C4 ; =0x000046BC\n    mov r5, #1\n    str r5, [r4, r0]\n    b _020954B2\n    add r0, r4, #0\n    add r1, r7, #0\n    bl sub_02094860\n    cmp r0, #1\n    bne _020954B2\n    add r0, r4, #0\n    mov r1, #2\n    add r2, r7, #0\n    bl sub_020948C4\n    ldr r0, _020954C8 ; =0x000046A0\n    ldr r2, [r4, r0]\n    sub r0, #0x1c\n    ldr r1, [r4, r0]\n    mov r0, #0x34\n    mul r0, r1\n    ldr r0, [r2, r0]\n    bl Sprite_GetMatrixPtr\n    add r5, r0, #0\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r3]\n    mov r0, #1\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0xe\n    sub r0, r1, r0\n    str r0, [sp, #4]\n    ldr r0, _020954C8 ; =0x000046A0\n    ldr r3, [r4, r0]\n    sub r0, #0x1c\n    ldr r1, [r4, r0]\n    mov r0, #0x34\n    mul r0, r1\n    ldr r0, [r3, r0]\n    add r1, r2, #0\n    bl Sprite_SetMatrix\n    ldr r0, _020954C4 ; =0x000046BC\n    mov r5, #1\n    str r5, [r4, r0]\n    mov r0, #4\n    str r0, [r4, #0x14]\n    b _020954B2\n    add r0, r4, #0\n    bl sub_0209569C\n    mov r5, #3\n    b _020954B2\n    add r0, r4, #0\n    bl sub_02094A70\n    add r0, r5, #0\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _020954B8: .word 0x000046B8\n    _020954BC: .word 0x000046A4\n    _020954C0: .word 0x00004694\n    _020954C4: .word 0x000046BC\n    _020954C8: .word 0x000046A0"
    );
    #endif
}

void sub_020954CC(void) {
    /* Original at 0x020954CC */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _02095538 ; =0x000046B8\n    mov r4, #0\n    ldr r0, [r5, r0]\n    bl sub_02095DD8\n    cmp r0, #1\n    beq _020954F4\n    cmp r0, #4\n    bne _020954FE\n    ldr r0, _0209553C ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02094A90\n    b _02095532\n    add r0, r5, #0\n    bl sub_0209569C\n    mov r4, #3\n    b _02095532\n    ldrb r0, [r5, #0x13]\n    cmp r0, #0\n    beq _02095532\n    ldr r0, _02095538 ; =0x000046B8\n    mov r1, #1\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    bl sub_02095D40\n    mov r0, #0xe\n    lsl r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #0xb\n    lsl r0, r0, #0x10\n    str r0, [sp, #4]\n    add r0, r4, #0\n    str r0, [sp, #8]\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldr r0, _0209553C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _02095538: .word 0x000046B8\n    _0209553C: .word 0x000005DC"
    );
    #endif
}

void sub_02095540(void) {
    /* Original at 0x02095540 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldrb r0, [r5, #0xf]\n    cmp r0, #0\n    bne _02095550\n    ldrb r0, [r5, #0x10]\n    b _02095550\n    sub r0, r0, #1\n    strb r0, [r5, #0xf]\n    ldr r0, _020955E0 ; =0x000008BC\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r5, #0\n    bl sub_020943EC\n    ldr r0, _020955E4 ; =0x000005DC\n    bl PlaySE\n    ldrb r0, [r5, #0xf]\n    cmp r0, #0x12\n    ldr r0, _020955E8 ; =0x000046B8\n    bne _020955BE\n    ldr r0, [r5, r0]\n    bl sub_02095DD8\n    cmp r0, #2\n    bne _020955DC\n    ldr r0, _020955E8 ; =0x000046B8\n    ldr r0, [r5, r0]\n    bl sub_02095DE8\n    mov r1, #6\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r4, r0, #0x18\n    ldr r0, _020955E8 ; =0x000046B8\n    mov r1, #6\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    bl sub_02095D40\n    mov r0, #0x18\n    mul r0, r4\n    add r0, #0x14\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    mov r0, #0xa\n    lsl r0, r0, #0xe\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r4, r5, pc}\n    ldr r0, [r5, r0]\n    bl sub_02095DD8\n    cmp r0, #6\n    bne _020955DC\n    ldr r0, _020955E8 ; =0x000046B8\n    ldr r0, [r5, r0]\n    bl sub_02095DE8\n    add r2, r0, #0\n    ldr r0, _020955E8 ; =0x000046B8\n    mov r1, #2\n    ldr r0, [r5, r0]\n    bl sub_02095D40\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _020955E0: .word 0x000008BC\n    _020955E4: .word 0x000005DC\n    _020955E8: .word 0x000046B8"
    );
    #endif
}

void sub_020955EC(void) {
    /* Original at 0x020955EC */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldrb r0, [r5, #0xf]\n    add r0, r0, #1\n    strb r0, [r5, #0xf]\n    ldrb r1, [r5, #0xf]\n    ldrb r0, [r5, #0x10]\n    cmp r1, r0\n    bne _02095604\n    mov r0, #0\n    strb r0, [r5, #0xf]\n    ldr r0, _02095690 ; =0x000008B8\n    mov r1, #3\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r5, #0\n    bl sub_020943EC\n    ldr r0, _02095694 ; =0x000005DC\n    bl PlaySE\n    ldrb r0, [r5, #0xf]\n    cmp r0, #0x12\n    ldr r0, _02095698 ; =0x000046B8\n    bne _0209566E\n    ldr r0, [r5, r0]\n    bl sub_02095DD8\n    cmp r0, #2\n    bne _0209568C\n    ldr r0, _02095698 ; =0x000046B8\n    ldr r0, [r5, r0]\n    bl sub_02095DE8\n    mov r1, #6\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r4, r0, #0x18\n    ldr r0, _02095698 ; =0x000046B8\n    mov r1, #6\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    bl sub_02095D40\n    mov r0, #0x18\n    mul r0, r4\n    add r0, #0x14\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    mov r0, #0xa\n    lsl r0, r0, #0xe\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #0x23\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r4, r5, pc}\n    ldr r0, [r5, r0]\n    bl sub_02095DD8\n    cmp r0, #6\n    bne _0209568C\n    ldr r0, _02095698 ; =0x000046B8\n    ldr r0, [r5, r0]\n    bl sub_02095DE8\n    add r2, r0, #0\n    ldr r0, _02095698 ; =0x000046B8\n    mov r1, #2\n    ldr r0, [r5, r0]\n    bl sub_02095D40\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _02095690: .word 0x000008B8\n    _02095694: .word 0x000005DC\n    _02095698: .word 0x000046B8"
    );
    #endif
}

void sub_0209569C(void) {
    /* Original at 0x0209569C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _020956B0 ; =0x000008B4\n    ldr r0, [r0, r1]\n    mov r1, #5\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _020956B4 ; =0x000005DC\n    bl PlaySE\n    pop {r3, pc}\n    _020956B0: .word 0x000008B4\n    _020956B4: .word 0x000005DC"
    );
    #endif
}

void sub_020956B8(void) {
    /* Original at 0x020956B8 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, _02095768 ; =0x000046D8\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _02095764\n    sub r0, #0x20\n    mov r6, #0\n    mvn r6, r6\n    ldr r0, [r4, r0]\n    add r5, r6, #0\n    bl sub_02095DD8\n    cmp r0, #6\n    bhi _0209573E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _020956E2: ; jump table\n    ldr r0, _0209576C ; =0x000046B8\n    ldrb r5, [r4, #0xf]\n    ldr r0, [r4, r0]\n    bl sub_02095DE8\n    add r7, r0, #0\n    add r0, r4, #0\n    add r1, r7, #0\n    bl sub_020947C0\n    cmp r0, #1\n    bne _0209573E\n    add r6, r7, #0\n    b _0209573E\n    ldr r0, _0209576C ; =0x000046B8\n    ldr r0, [r4, r0]\n    bl sub_02095DE8\n    add r7, r0, #0\n    add r0, r4, #0\n    add r1, r7, #0\n    bl sub_02094894\n    cmp r0, #1\n    bne _0209573E\n    lsl r0, r7, #4\n    add r1, r4, r0\n    ldr r0, _02095770 ; =0x00000884\n    ldr r5, [r1, r0]\n    add r0, r0, #4\n    ldr r6, [r1, r0]\n    b _0209573E\n    ldr r0, _02095774 ; =0x00004680\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _0209573E\n    add r0, r0, #4\n    ldrb r5, [r4, #0xf]\n    ldr r6, [r4, r0]\n    ldr r0, _02095778 ; =0x000046E4\n    ldr r1, [r4, r0]\n    cmp r1, r5\n    bne _0209574E\n    sub r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, r6\n    beq _0209575C\n    ldr r3, _0209577C ; =0x000046DC\n    add r0, r5, #0\n    ldr r2, [r4, r3]\n    sub r3, r3, #4\n    ldr r3, [r4, r3]\n    add r1, r6, #0\n    blx r3\n    ldr r0, _02095778 ; =0x000046E4\n    str r5, [r4, r0]\n    sub r0, r0, #4\n    str r6, [r4, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02095768: .word 0x000046D8\n    _0209576C: .word 0x000046B8\n    _02095770: .word 0x00000884\n    _02095774: .word 0x00004680\n    _02095778: .word 0x000046E4\n    _0209577C: .word 0x000046DC"
    );
    #endif
}

void sub_02095780(void) {
    /* Original at 0x02095780 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x16\n    add r2, r1, #0\n    ldr r3, _0209578C ; =G2x_SetBlendBrightness_\n    ldr r0, _02095790 ; =0x04000050\n    sub r2, #0x1d\n    bx r3\n    _0209578C: .word G2x_SetBlendBrightness_\n    _02095790: .word 0x04000050"
    );
    #endif
}

void sub_02095794(void) {
    G2x_SetBlendAlpha_(0, 0xa, 4, 6);
}
