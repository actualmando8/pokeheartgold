/* Decompiled from asm/overlay_102.s */
#include "global.h"

void EasyChat_Init(void) {
    /* Original at 0x021E7740 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [r4]\n    add r5, r0, #0\n    cmp r1, #0\n    beq _021E7752\n    cmp r1, #1\n    beq _021E778A\n    b _021E77B2\n    mov r1, #0\n    mov r0, #0x3e\n    add r2, r1, #0\n    bl Sound_SetSceneAndPlayBGM\n    mov r2, #2\n    mov r0, #3\n    mov r1, #0x22\n    lsl r2, r2, #0xe\n    bl Heap_Create\n    mov r2, #0xa\n    mov r0, #3\n    mov r1, #0x23\n    lsl r2, r2, #0xe\n    bl Heap_Create\n    add r0, r5, #0\n    bl ov102_021E7888\n    ldr r0, [r0, #0x14]\n    mov r1, #0\n    bl ov102_021E940C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E77B2\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    bl ov102_021E9464\n    cmp r0, #0\n    beq _021E77B2\n    ldr r0, [r4, #4]\n    cmp r0, #2\n    bne _021E77A8\n    ldr r0, [r4, #0x14]\n    bl ov102_021EA238\n    b _021E77AA\n    mov r0, #0\n    add r4, #0x6a\n    strb r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void EasyChat_Main(void) {
    /* Original at 0x021E77B8 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, _021E77F4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    strh r1, [r4, #0x30]\n    ldr r1, [r0, #0x44]\n    strh r1, [r4, #0x32]\n    ldr r0, [r0, #0x4c]\n    strh r0, [r4, #0x34]\n    ldr r0, [r4, #0x40]\n    bl TouchHitboxController_IsTriggered\n    ldr r2, [r4, #0x2c]\n    cmp r2, #0\n    beq _021E77E6\n    add r0, r4, #0\n    add r4, #0x28\n    add r1, r4, #0\n    blx r2\n    mov r0, #0\n    pop {r4, pc}\n    add r1, r4, #0\n    ldr r2, [r4, #0x20]\n    add r0, r4, #0\n    add r1, #0x1c\n    blx r2\n    pop {r4, pc}\n    nop\n    _021E77F4: .word gSystem"
    );
    #endif
}

void ov102_021E77F8(void) {
    /* Original at 0x021E77F8 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    cmp r1, #3\n    bhi _021E7860\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E780C: ; jump table\n    str r0, [r4, #0x38]\n    cmp r0, #2\n    beq _021E7820\n    cmp r0, #3\n    beq _021E782A\n    pop {r4, pc}\n    ldr r0, [r4, #0x14]\n    mov r1, #0x1c\n    bl ov102_021E940C\n    pop {r4, pc}\n    ldr r0, [r4, #0x14]\n    mov r1, #0x1d\n    bl ov102_021E940C\n    pop {r4, pc}\n    cmp r0, #2\n    beq _021E783E\n    cmp r0, #3\n    beq _021E7848\n    b _021E7850\n    ldr r0, [r4, #0x14]\n    mov r1, #0x1e\n    bl ov102_021E940C\n    b _021E7850\n    ldr r0, [r4, #0x14]\n    mov r1, #0x1f\n    bl ov102_021E940C\n    mov r0, #4\n    str r0, [r4, #0x38]\n    pop {r4, pc}\n    sub r1, r0, #2\n    cmp r1, #1\n    bhi _021E7864\n    str r0, [r4, #0x38]\n    pop {r4, pc}\n    mov r0, #4\n    str r0, [r4, #0x38]\n    pop {r4, pc}"
    );
    #endif
}

u32 EasyChat_Exit(void) {
    OverlayManager_GetData();
    ov102_021E7A24(r4);
    Heap_Destroy(0x22);
    Heap_Destroy(0x23);
    return 1;
}

void ov102_021E7888(void) {
    /* Original at 0x021E7888 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x7c\n    mov r2, #0x22\n    add r5, r0, #0\n    bl OverlayManager_CreateAndGetData\n    mov r1, #0\n    mov r2, #0x7c\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    str r0, [r4]\n    bl sub_02090D70\n    str r0, [r4, #4]\n    ldr r0, [r4]\n    bl sub_02090E44\n    str r0, [r4, #0x74]\n    add r1, r4, #0\n    add r2, r4, #0\n    ldr r0, [r4]\n    add r1, #0x10\n    add r2, #8\n    bl sub_02090D8C\n    ldr r0, [r4, #4]\n    cmp r0, #2\n    bne _021E78D4\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x64\n    add r1, #8\n    bl ov102_021E7934\n    ldr r1, [r4]\n    mov r0, #0x22\n    bl sub_02091880\n    str r0, [r4, #0x18]\n    ldr r1, [r4, #0x18]\n    add r0, r4, #0\n    bl ov102_021E909C\n    str r0, [r4, #0x14]\n    mov r0, #0x22\n    str r0, [sp]\n    ldr r0, _021E7924 ; =ov102_021EC648\n    ldr r2, _021E7928 ; =ov102_021E77F8\n    mov r1, #5\n    add r3, r4, #0\n    bl TouchHitboxController_Create\n    str r0, [r4, #0x40]\n    mov r1, #0\n    str r1, [r4, #0x44]\n    add r0, r4, #0\n    str r1, [r4, #0x48]\n    add r0, #0x6b\n    strb r1, [r0]\n    str r1, [r4, #0x2c]\n    add r0, r4, #0\n    str r1, [r4, #0x28]\n    add r0, #0x4e\n    strh r1, [r0]\n    ldr r1, _021E792C ; =ov102_021E7AA4\n    add r0, r4, #0\n    bl ov102_021E7A4C\n    ldr r1, _021E7930 ; =ov102_021E8D60\n    add r0, r4, #0\n    bl ov102_021E8D50\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _021E7924: .word ov102_021EC648\n    _021E7928: .word ov102_021E77F8\n    _021E792C: .word ov102_021E7AA4\n    _021E7930: .word ov102_021E8D60"
    );
    #endif
}

void ov102_021E7934(void) {
    /* Original at 0x021E7934 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl MailMsg_GetMsgBank\n    strh r0, [r5]\n    mov r0, #0x14\n    strb r0, [r5, #3]\n    add r0, r4, #0\n    bl MailMsg_GetMsgNo\n    mov r6, #0\n    strb r0, [r5, #2]\n    add r4, r5, #4\n    add r0, r6, #0\n    mov r1, #3\n    ldrsb r3, [r4, r0]\n    ldrsb r2, [r5, r1]\n    add r6, r6, #1\n    add r2, r3, r2\n    strb r2, [r4]\n    cmp r6, #5\n    blt _021E7956\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov102_021E7968(void) {
    /* Original at 0x021E7968 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    mov r0, #2\n    ldrsb r3, [r2, r0]\n    add r3, r3, #1\n    strb r3, [r2, #2]\n    ldrsb r3, [r2, r0]\n    mov r0, #3\n    ldrsb r0, [r2, r0]\n    cmp r3, r0\n    blt _021E798E\n    mov r3, #0\n    strb r3, [r2, #2]\n    ldrsh r0, [r2, r3]\n    add r0, r0, #1\n    strh r0, [r2]\n    ldrsh r0, [r2, r3]\n    cmp r0, #5\n    blt _021E798E\n    strh r3, [r2]\n    add r0, r1, #0\n    mov r1, #0\n    mov r3, #2\n    ldrsh r1, [r2, r1]\n    ldrsb r2, [r2, r3]\n    ldr r3, _021E799C ; =MailMsg_SetMsgBankAndNum\n    bx r3\n    _021E799C: .word MailMsg_SetMsgBankAndNum"
    );
    #endif
}

void ov102_021E79A0(void) {
    /* Original at 0x021E79A0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    mov r0, #2\n    ldrsb r3, [r2, r0]\n    sub r3, r3, #1\n    strb r3, [r2, #2]\n    ldrsb r0, [r2, r0]\n    cmp r0, #0\n    bge _021E79CA\n    mov r0, #0\n    ldrsh r3, [r2, r0]\n    sub r3, r3, #1\n    strh r3, [r2]\n    ldrsh r0, [r2, r0]\n    cmp r0, #0\n    bge _021E79C2\n    mov r0, #4\n    strh r0, [r2]\n    mov r0, #3\n    ldrsb r0, [r2, r0]\n    sub r0, r0, #1\n    strb r0, [r2, #2]\n    add r0, r1, #0\n    mov r1, #0\n    mov r3, #2\n    ldrsh r1, [r2, r1]\n    ldrsb r2, [r2, r3]\n    ldr r3, _021E79D8 ; =MailMsg_SetMsgBankAndNum\n    bx r3\n    _021E79D8: .word MailMsg_SetMsgBankAndNum"
    );
    #endif
}

void ov102_021E79DC(void) {
    /* Original at 0x021E79DC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #3\n    add r6, r2, #0\n    ldrsb r1, [r5, r1]\n    add r0, r6, #0\n    bl _s32_div_f\n    strb r1, [r5, #2]\n    mov r1, #3\n    ldrsb r1, [r5, r1]\n    add r0, r6, #0\n    bl _s32_div_f\n    strh r0, [r5]\n    mov r1, #0\n    mov r2, #2\n    ldrsh r1, [r5, r1]\n    ldrsb r2, [r5, r2]\n    add r0, r4, #0\n    bl MailMsg_SetMsgBankAndNum\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov102_021E7A0C(void) {
    /* Original at 0x021E7A0C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #2\n    ldrsb r3, [r0, r1]\n    mov r1, #0\n    ldrsh r2, [r0, r1]\n    mov r1, #3\n    ldrsb r0, [r0, r1]\n    mul r0, r2\n    add r0, r3, r0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx lr"
    );
    #endif
}

void ov102_021E7A24(void) {
    sub_02090E5C(*((u32*)(r0 + 0x74)));
    TouchHitboxController_Destroy(*((u32*)(r5 + 0x40)));
    ov102_021E9144(*((u32*)(r5 + 0x14)));
    sub_020918C0(*((u32*)(r5 + 0x18)));
    OverlayManager_FreeData(r4);
}

void ov102_021E7A4C(void) {
    ((u32*)r0)[0x20] = r1;
    ((u32*)r0)[0x1c] = 0;
    ((u32*)r0)[0x78] = 0;
}

void ov102_021E7A58(void) {
    /* Original at 0x021E7A58 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x74]\n    cmp r0, #1\n    bne _021E7A80\n    bl System_GetTouchHeld\n    cmp r0, #0\n    beq _021E7A6E\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _021E7AA0 ; =gSystem\n    ldr r0, [r0, #0x44]\n    cmp r0, #0\n    beq _021E7A9C\n    mov r0, #4\n    str r0, [r4, #0x38]\n    mov r0, #0\n    str r0, [r4, #0x74]\n    pop {r4, pc}\n    ldr r0, _021E7AA0 ; =gSystem\n    ldr r0, [r0, #0x44]\n    cmp r0, #0\n    beq _021E7A8C\n    mov r0, #0\n    pop {r4, pc}\n    bl System_GetTouchHeld\n    cmp r0, #0\n    beq _021E7A9C\n    mov r0, #1\n    str r0, [r4, #0x74]\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _021E7AA0: .word gSystem"
    );
    #endif
}

void ov102_021E7AA4(void) {
    /* Original at 0x021E7AA4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, [r0, #4]\n    lsl r3, r2, #2\n    ldr r2, _021E7AB4 ; =ov102_021EC5E8\n    ldr r2, [r2, r3]\n    blx r2\n    pop {r3, pc}\n    nop\n    _021E7AB4: .word ov102_021EC5E8"
    );
    #endif
}

void ov102_021E7AB8(void) {
    /* Original at 0x021E7AB8 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #3\n    bhi _021E7B10\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E7ACC: ; jump table\n    ldr r0, _021E7B14 ; =0x000005DC\n    bl PlaySE\n    mov r0, #2\n    pop {r4, pc}\n    ldr r0, _021E7B14 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, _021E7B14 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x50\n    strh r1, [r0]\n    ldr r0, [r4, #0x14]\n    mov r1, #9\n    bl ov102_021E940C\n    mov r0, #4\n    pop {r4, pc}\n    ldr r0, _021E7B14 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r4, #0x14]\n    mov r1, #0xf\n    bl ov102_021E940C\n    mov r0, #0\n    pop {r4, pc}\n    _021E7B14: .word 0x000005DC"
    );
    #endif
}

void ov102_021E7B18(void) {
    /* Original at 0x021E7B18 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r2, [r4, #0x30]\n    mov r1, #2\n    add r3, r2, #0\n    tst r3, r1\n    beq _021E7B3C\n    add r0, #0x4c\n    strh r1, [r0]\n    ldr r0, [r4, #0x14]\n    mov r1, #0xf\n    bl ov102_021E940C\n    add r0, r4, #0\n    mov r1, #2\n    bl ov102_021E7AB8\n    pop {r4, pc}\n    mov r1, #1\n    add r3, r2, #0\n    tst r3, r1\n    beq _021E7B4E\n    add r4, #0x4c\n    ldrh r1, [r4]\n    bl ov102_021E7AB8\n    pop {r4, pc}\n    mov r3, #8\n    tst r3, r2\n    beq _021E7B60\n    add r4, #0x4c\n    strh r1, [r4]\n    mov r1, #3\n    bl ov102_021E7AB8\n    pop {r4, pc}\n    mov r3, #0x80\n    tst r3, r2\n    beq _021E7B88\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrh r1, [r1]\n    cmp r1, #2\n    bne _021E7B74\n    mov r0, #0\n    pop {r4, pc}\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrh r1, [r1]\n    add r4, #0x4c\n    add r1, r1, #1\n    strh r1, [r4]\n    mov r1, #3\n    bl ov102_021E7AB8\n    pop {r4, pc}\n    mov r3, #0x40\n    tst r3, r2\n    beq _021E7BB0\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrh r1, [r1]\n    cmp r1, #0\n    bne _021E7B9C\n    mov r0, #0\n    pop {r4, pc}\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrh r1, [r1]\n    add r4, #0x4c\n    sub r1, r1, #1\n    strh r1, [r4]\n    mov r1, #3\n    bl ov102_021E7AB8\n    pop {r4, pc}\n    ldr r3, [r4, #4]\n    cmp r3, #0\n    bne _021E7BBA\n    mov r0, #0\n    pop {r4, pc}\n    mov r3, #0x30\n    tst r2, r3\n    beq _021E7BD4\n    add r2, r4, #0\n    add r2, #0x4e\n    ldrh r2, [r2]\n    add r4, #0x4e\n    eor r1, r2\n    strh r1, [r4]\n    mov r1, #3\n    bl ov102_021E7AB8\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021E7BD8(void) {
    /* Original at 0x021E7BD8 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021E7BE0 ; =TouchscreenHitbox_FindRectAtTouchNew\n    ldr r0, _021E7BE4 ; =ov102_021EC610\n    bx r3\n    nop\n    _021E7BE0: .word TouchscreenHitbox_FindRectAtTouchNew\n    _021E7BE4: .word ov102_021EC610"
    );
    #endif
}

void ov102_021E7BE8(void) {
    /* Original at 0x021E7BE8 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021E7BF0 ; =TouchscreenHitbox_FindRectAtTouchNew\n    ldr r0, _021E7BF4 ; =ov102_021EC620\n    bx r3\n    nop\n    _021E7BF0: .word TouchscreenHitbox_FindRectAtTouchNew\n    _021E7BF4: .word ov102_021EC620"
    );
    #endif
}

void ov102_021E7BF8(void) {
    /* Original at 0x021E7BF8 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    cmp r1, #0\n    bne _021E7C08\n    bl ov102_021E7BD8\n    b _021E7C0C\n    bl ov102_021E7BE8\n    cmp r0, #3\n    bhi _021E7C80\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E7C1C: ; jump table\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x4c\n    strh r1, [r0]\n    ldr r0, [r4, #0x14]\n    mov r1, #0xf\n    bl ov102_021E940C\n    add r0, r4, #0\n    mov r1, #1\n    bl ov102_021E7AB8\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #2\n    add r0, #0x4c\n    strh r1, [r0]\n    ldr r0, [r4, #0x14]\n    mov r1, #0xf\n    bl ov102_021E940C\n    add r0, r4, #0\n    mov r1, #2\n    bl ov102_021E7AB8\n    pop {r4, pc}\n    add r1, r4, #0\n    mov r2, #0\n    add r1, #0x50\n    strh r2, [r1]\n    sub r1, r0, #2\n    add r0, r4, #0\n    add r0, #0x4e\n    strh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x4c\n    strh r2, [r0]\n    ldr r0, [r4, #0x14]\n    mov r1, #0xf\n    bl ov102_021E940C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov102_021E7AB8\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021E7C84(void) {
    /* Original at 0x021E7C84 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [r4]\n    add r5, r0, #0\n    cmp r1, #4\n    bhi _021E7CFA\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E7C9C: ; jump table\n    ldr r0, [r5, #0x14]\n    bl ov102_021E9464\n    cmp r0, #0\n    beq _021E7CFA\n    ldr r0, [r5, #0x74]\n    cmp r0, #0\n    bne _021E7CC0\n    add r0, r5, #0\n    bl ov102_021E7B18\n    str r0, [r4]\n    b _021E7CFA\n    add r0, r5, #0\n    bl ov102_021E7BF8\n    str r0, [r4]\n    b _021E7CFA\n    mov r1, #3\n    str r1, [r4]\n    ldr r1, _021E7D00 ; =ov102_021E8D94\n    bl ov102_021E8D50\n    b _021E7CFA\n    mov r1, #3\n    str r1, [r4]\n    ldr r1, _021E7D04 ; =ov102_021E8E84\n    bl ov102_021E8D50\n    b _021E7CFA\n    mov r0, #0\n    str r0, [r4]\n    b _021E7CFA\n    ldr r0, [r5, #0x14]\n    bl ov102_021E9464\n    cmp r0, #0\n    beq _021E7CFA\n    ldr r1, _021E7D08 ; =ov102_021E8240\n    add r0, r5, #0\n    bl ov102_021E7A4C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E7D00: .word ov102_021E8D94\n    _021E7D04: .word ov102_021E8E84\n    _021E7D08: .word ov102_021E8240"
    );
    #endif
}

void ov102_021E7D0C(void) {
    /* Original at 0x021E7D0C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r2, [r4]\n    add r5, r0, #0\n    cmp r2, #0\n    bne _021E7D24\n    bl ov102_021E7A58\n    cmp r0, #0\n    beq _021E7D24\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov102_021E7C84\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E7D30(void) {
    /* Original at 0x021E7D30 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #4\n    bhi _021E7DB4\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E7D44: ; jump table\n    ldr r0, _021E7DB8 ; =0x000005DC\n    bl PlaySE\n    mov r0, #4\n    pop {r4, pc}\n    ldr r0, _021E7DB8 ; =0x000005DC\n    bl PlaySE\n    mov r0, #3\n    pop {r4, pc}\n    ldr r0, [r4, #0x14]\n    bl ov102_021EA238\n    cmp r0, #0\n    bne _021E7D70\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, _021E7DB8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x50\n    strh r1, [r0]\n    ldr r0, [r4, #0x14]\n    mov r1, #9\n    bl ov102_021E940C\n    mov r0, #6\n    pop {r4, pc}\n    ldr r0, _021E7DB8 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r4, #0x14]\n    mov r1, #0xf\n    bl ov102_021E940C\n    b _021E7DB4\n    ldr r0, _021E7DB8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x4e\n    strh r1, [r0]\n    ldr r0, [r4, #0x14]\n    mov r1, #3\n    bl ov102_021E940C\n    mov r0, #2\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    _021E7DB8: .word 0x000005DC"
    );
    #endif
}

void ov102_021E7DBC(void) {
    /* Original at 0x021E7DBC */
    /* Requires manual decompilation - 140 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r2, [r4, #0x30]\n    mov r1, #2\n    add r3, r2, #0\n    tst r3, r1\n    beq _021E7DE0\n    add r0, #0x4c\n    strh r1, [r0]\n    ldr r0, [r4, #0x14]\n    mov r1, #0xf\n    bl ov102_021E940C\n    add r0, r4, #0\n    mov r1, #2\n    bl ov102_021E7D30\n    pop {r4, pc}\n    mov r1, #1\n    add r3, r2, #0\n    tst r3, r1\n    beq _021E7DF2\n    add r4, #0x4c\n    ldrh r1, [r4]\n    bl ov102_021E7D30\n    pop {r4, pc}\n    mov r3, #0x40\n    tst r3, r2\n    beq _021E7E42\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrh r1, [r1]\n    cmp r1, #0\n    beq _021E7E16\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrh r1, [r1]\n    add r4, #0x4c\n    sub r1, r1, #1\n    strh r1, [r4]\n    mov r1, #3\n    bl ov102_021E7D30\n    pop {r4, pc}\n    add r1, r4, #0\n    add r1, #0x6a\n    ldrb r1, [r1]\n    cmp r1, #0\n    beq _021E7E3E\n    add r1, r4, #0\n    add r1, #0x4e\n    ldrh r1, [r1]\n    cmp r1, #0\n    beq _021E7E3E\n    add r1, r4, #0\n    add r1, #0x4e\n    ldrh r1, [r1]\n    add r4, #0x4e\n    sub r1, r1, #1\n    strh r1, [r4]\n    mov r1, #3\n    bl ov102_021E7D30\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    mov r3, #0x80\n    tst r2, r3\n    beq _021E7EAE\n    add r2, r4, #0\n    add r2, #0x4c\n    ldrh r2, [r2]\n    cmp r2, #0\n    bne _021E7E92\n    add r1, r4, #0\n    add r1, #0x6a\n    ldrb r1, [r1]\n    cmp r1, #2\n    bne _021E7E7A\n    add r1, r4, #0\n    add r1, #0x4e\n    ldrh r1, [r1]\n    cmp r1, #0\n    bne _021E7E7A\n    add r1, r4, #0\n    add r1, #0x4e\n    ldrh r1, [r1]\n    add r4, #0x4e\n    add r1, r1, #1\n    strh r1, [r4]\n    mov r1, #3\n    bl ov102_021E7D30\n    pop {r4, pc}\n    add r0, r4, #0\n    add r0, #0x4c\n    ldrh r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x4c\n    strh r1, [r0]\n    add r0, r4, #0\n    mov r1, #3\n    bl ov102_021E7D30\n    pop {r4, pc}\n    cmp r2, #1\n    bne _021E7EAA\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrh r1, [r1]\n    add r4, #0x4c\n    add r1, r1, #1\n    strh r1, [r4]\n    mov r1, #3\n    bl ov102_021E7D30\n    pop {r4, pc}\n    add r0, r1, #0\n    pop {r4, pc}\n    ldrh r2, [r4, #0x34]\n    mov r0, #0x20\n    tst r0, r2\n    beq _021E7ECC\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x64\n    add r1, #8\n    bl ov102_021E79A0\n    add r0, r4, #0\n    mov r1, #4\n    bl ov102_021E7D30\n    pop {r4, pc}\n    mov r0, #0x10\n    tst r0, r2\n    beq _021E7EE8\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x64\n    add r1, #8\n    bl ov102_021E7968\n    add r0, r4, #0\n    mov r1, #4\n    bl ov102_021E7D30\n    pop {r4, pc}\n    add r0, r1, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021E7EEC(void) {
    /* Original at 0x021E7EEC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl System_GetTouchHeld\n    cmp r0, #0\n    bne _021E7EFE\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E7F2C ; =gSystem + 0x40\n    ldrh r2, [r0, #0x20]\n    add r1, r2, #0\n    sub r1, #0xa\n    cmp r5, r1\n    blt _021E7F10\n    add r2, #0xa\n    cmp r5, r2\n    ble _021E7F14\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r0, #0x22]\n    add r0, r1, #0\n    sub r0, #0xc\n    cmp r4, r0\n    blt _021E7F24\n    add r1, #0xc\n    cmp r4, r1\n    ble _021E7F28\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _021E7F2C: .word gSystem + 0x40"
    );
    #endif
}

void ov102_021E7F30(void) {
    /* Original at 0x021E7F30 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl System_GetTouchHeld\n    cmp r0, #0\n    bne _021E7F42\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    cmp r5, #0x12\n    blt _021E7F4A\n    cmp r5, #0xec\n    ble _021E7F4E\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E7F68 ; =gSystem + 0x40\n    ldrh r1, [r0, #0x22]\n    add r0, r1, #0\n    sub r0, #0x18\n    cmp r4, r0\n    blt _021E7F60\n    add r1, #0x18\n    cmp r4, r1\n    ble _021E7F64\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _021E7F68: .word gSystem + 0x40"
    );
    #endif
}

void ov102_021E7F6C(void) {
    /* Original at 0x021E7F6C */
    /* Requires manual decompilation - 151 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5, #0x14]\n    bl ov102_021EA228\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    add r6, r0, #0\n    bl Sprite_GetPositionXY\n    add r0, r5, #0\n    add r0, #0x6c\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021E8020\n    add r3, sp, #0\n    mov r1, #2\n    mov r2, #0\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, r5, #0\n    bl ov102_021E7F30\n    cmp r0, #0\n    bne _021E7FAE\n    mov r0, #0\n    add r5, #0x6c\n    strb r0, [r5]\n    add sp, #8\n    sub r0, r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _021E80B0 ; =gSystem + 0x40\n    mov r0, #0x20\n    ldrsh r4, [r1, r0]\n    cmp r4, #0x1c\n    bge _021E7FBC\n    mov r4, #0x1c\n    b _021E7FC2\n    cmp r4, #0xe2\n    ble _021E7FC2\n    mov r4, #0xe2\n    mov r0, #0x6e\n    ldrsh r0, [r5, r0]\n    sub r0, r4, r0\n    bpl _021E7FCC\n    neg r0, r0\n    cmp r0, #2\n    bge _021E7FD8\n    mov r0, #0\n    add sp, #8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl Sprite_SetPositionXY\n    add r0, r5, #0\n    add r0, #0x6e\n    strh r4, [r0]\n    sub r4, #0x1c\n    add r0, r5, #0\n    lsr r2, r4, #0x1f\n    add r2, r4, r2\n    lsl r2, r2, #0x17\n    mov r1, #0\n    add r0, #0x4e\n    strh r1, [r0]\n    add r0, r5, #0\n    add r1, r5, #0\n    add r0, #0x64\n    add r1, #8\n    lsr r2, r2, #0x18\n    bl ov102_021E79DC\n    ldr r0, _021E80B4 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x14]\n    mov r1, #3\n    bl ov102_021E940C\n    mov r0, #0\n    add sp, #8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl System_GetTouchNew\n    cmp r0, #0\n    bne _021E8030\n    mov r0, #0\n    add sp, #8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r3, sp, #0\n    mov r1, #2\n    mov r2, #0\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, r5, #0\n    bl ov102_021E7EEC\n    cmp r0, #0\n    beq _021E8060\n    ldr r0, _021E80B0 ; =gSystem + 0x40\n    ldrh r1, [r0, #0x20]\n    add r0, r5, #0\n    add r0, #0x6e\n    strh r1, [r0]\n    mov r0, #1\n    add r5, #0x6c\n    strb r0, [r5]\n    ldr r0, _021E80B4 ; =0x000005DC\n    bl PlaySE\n    add sp, #8\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E80B8 ; =ov102_021EC634\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021E80AC\n    ldr r0, [r5, #0x14]\n    bl ov102_021EA238\n    add r6, r0, #0\n    mov r4, #0\n    cmp r6, #0\n    ble _021E80A8\n    add r7, sp, #4\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #0x14]\n    add r1, r7, #0\n    lsr r2, r2, #0x18\n    bl ov102_021EA248\n    ldr r1, _021E80B0 ; =gSystem + 0x40\n    ldr r2, _021E80B0 ; =gSystem + 0x40\n    ldrh r1, [r1, #0x20]\n    ldrh r2, [r2, #0x22]\n    add r0, r7, #0\n    bl TouchscreenHitbox_PointIsIn\n    cmp r0, #0\n    beq _021E80A2\n    add sp, #8\n    add r0, r4, #4\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    cmp r4, r6\n    blt _021E807E\n    mov r0, #0\n    mvn r0, r0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E80B0: .word gSystem + 0x40\n    _021E80B4: .word 0x000005DC\n    _021E80B8: .word ov102_021EC634"
    );
    #endif
}

void ov102_021E80BC(void) {
    /* Original at 0x021E80BC */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov102_021E7F6C\n    add r5, r0, #0\n    cmp r5, #6\n    bhi _021E8170\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E80D6: ; jump table\n    ldr r0, _021E8174 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    add r1, r5, #1\n    add r0, #0x4c\n    strh r1, [r0]\n    ldr r0, [r4, #0x14]\n    mov r1, #0xf\n    bl ov102_021E940C\n    add r0, r4, #0\n    add r4, #0x4c\n    ldrh r1, [r4]\n    bl ov102_021E7D30\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x4c\n    strh r1, [r0]\n    ldr r0, [r4, #0x14]\n    mov r1, #0xf\n    bl ov102_021E940C\n    cmp r5, #2\n    bne _021E8128\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x64\n    add r1, #8\n    bl ov102_021E79A0\n    b _021E8134\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x64\n    add r1, #8\n    bl ov102_021E7968\n    add r0, r4, #0\n    mov r1, #4\n    bl ov102_021E7D30\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x4c\n    strh r1, [r0]\n    add r0, r4, #0\n    sub r1, r5, #4\n    add r0, #0x4e\n    strh r1, [r0]\n    ldr r0, [r4, #0x14]\n    mov r1, #0xf\n    bl ov102_021E940C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov102_021E7D30\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x4c\n    strh r1, [r0]\n    ldr r0, [r4, #0x14]\n    mov r1, #0xf\n    bl ov102_021E940C\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _021E8174: .word 0x000005DC"
    );
    #endif
}

void ov102_021E8178(void) {
    /* Original at 0x021E8178 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [r4]\n    add r5, r0, #0\n    cmp r1, #6\n    bhi _021E820A\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E8190: ; jump table\n    ldr r0, [r5, #0x14]\n    bl ov102_021EA238\n    add r1, r5, #0\n    add r1, #0x6a\n    strb r0, [r1]\n    mov r0, #1\n    str r0, [r4]\n    ldr r0, [r5, #0x74]\n    cmp r0, #0\n    bne _021E81BE\n    add r0, r5, #0\n    bl ov102_021E7DBC\n    str r0, [r4]\n    b _021E820A\n    add r0, r5, #0\n    bl ov102_021E80BC\n    str r0, [r4]\n    b _021E820A\n    ldr r0, [r5, #0x14]\n    mov r1, #3\n    bl ov102_021E947C\n    cmp r0, #0\n    beq _021E820A\n    mov r0, #0\n    str r0, [r4]\n    b _021E820A\n    mov r1, #5\n    str r1, [r4]\n    ldr r1, _021E8210 ; =ov102_021E8D94\n    bl ov102_021E8D50\n    b _021E820A\n    mov r1, #5\n    str r1, [r4]\n    ldr r1, _021E8214 ; =ov102_021E8E84\n    bl ov102_021E8D50\n    b _021E820A\n    mov r0, #1\n    str r0, [r4]\n    b _021E820A\n    ldr r0, [r5, #0x14]\n    bl ov102_021E9464\n    cmp r0, #0\n    beq _021E820A\n    ldr r1, _021E8218 ; =ov102_021E8240\n    add r0, r5, #0\n    bl ov102_021E7A4C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E8210: .word ov102_021E8D94\n    _021E8214: .word ov102_021E8E84\n    _021E8218: .word ov102_021E8240"
    );
    #endif
}

void ov102_021E821C(void) {
    /* Original at 0x021E821C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r2, [r4]\n    add r5, r0, #0\n    cmp r2, #1\n    bhi _021E8234\n    bl ov102_021E7A58\n    cmp r0, #0\n    beq _021E8234\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov102_021E8178\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E8240(void) {
    /* Original at 0x021E8240 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021E8256\n    cmp r0, #1\n    beq _021E826C\n    cmp r0, #2\n    beq _021E8280\n    b _021E8290\n    ldr r0, [r5, #0x14]\n    mov r1, #0x12\n    bl ov102_021E947C\n    cmp r0, #0\n    beq _021E8290\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov102_021E8580\n    b _021E8290\n    ldr r0, [r5, #0x14]\n    bl ov102_021E9464\n    cmp r0, #0\n    beq _021E8290\n    ldr r1, [r5, #0x24]\n    add r0, r5, #0\n    bl ov102_021E7A4C\n    b _021E8290\n    ldr r0, [r5, #0x14]\n    mov r1, #0x1b\n    bl ov102_021E947C\n    cmp r0, #0\n    beq _021E8290\n    mov r0, #0\n    str r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E8294(void) {
    /* Original at 0x021E8294 */
    /* Requires manual decompilation - 113 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r5, #0x38]\n    cmp r1, #0\n    bne _021E82A8\n    add r0, #0x6b\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021E82BE\n    cmp r1, #1\n    bne _021E82B6\n    add r0, r5, #0\n    add r0, #0x6b\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _021E82BE\n    ldrh r0, [r5, #0x30]\n    mov r1, #4\n    tst r1, r0\n    beq _021E82EE\n    ldr r0, _021E8388 ; =0x000005E4\n    bl PlaySE\n    mov r0, #4\n    str r0, [r5, #0x38]\n    add r0, r5, #0\n    add r0, #0x6b\n    ldrb r1, [r0]\n    mov r0, #1\n    eor r1, r0\n    add r0, r5, #0\n    add r0, #0x6b\n    strb r1, [r0]\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x50\n    strh r1, [r0]\n    ldr r0, [r5, #0x14]\n    mov r1, #0x1b\n    bl ov102_021E940C\n    mov r0, #2\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    mov r1, #2\n    tst r1, r0\n    beq _021E830C\n    ldr r0, _021E838C ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x14]\n    mov r1, #0xa\n    bl ov102_021E940C\n    ldr r0, _021E8390 ; =ov102_021E7AA4\n    str r0, [r5, #0x24]\n    mov r0, #1\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    mov r1, #1\n    tst r0, r1\n    beq _021E836E\n    add r0, r5, #0\n    add r0, #0x50\n    ldrh r2, [r0]\n    cmp r2, #0xfe\n    bne _021E8334\n    ldr r0, _021E838C ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x14]\n    mov r1, #0xa\n    bl ov102_021E940C\n    ldr r0, _021E8390 ; =ov102_021E7AA4\n    str r0, [r5, #0x24]\n    mov r0, #1\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    add r1, r5, #0\n    add r1, #0x6b\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x18]\n    bl ov102_021E85A8\n    cmp r0, #0\n    beq _021E8366\n    ldr r0, _021E838C ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    add r0, #0x54\n    add r1, r5, #0\n    bl ov102_021E874C\n    ldr r0, _021E8394 ; =ov102_021E87B4\n    mov r1, #0xb\n    str r0, [r5, #0x24]\n    ldr r0, [r5, #0x14]\n    bl ov102_021E940C\n    mov r0, #1\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E8398 ; =0x000005F2\n    bl PlaySE\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov102_021E85E8\n    cmp r0, #0\n    beq _021E8386\n    ldr r0, _021E838C ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x14]\n    mov r1, #0x11\n    bl ov102_021E940C\n    pop {r3, r4, r5, pc}\n    _021E8388: .word 0x000005E4\n    _021E838C: .word 0x000005DC\n    _021E8390: .word ov102_021E7AA4\n    _021E8394: .word ov102_021E87B4\n    _021E8398: .word 0x000005F2"
    );
    #endif
}

void ov102_021E839C(void) {
    /* Original at 0x021E839C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E83E0 ; =ov102_021EC600\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021E83B2\n    mov r0, #0\n    pop {r4, pc}\n    cmp r0, #0\n    beq _021E83C0\n    cmp r0, #1\n    beq _021E83C4\n    cmp r0, #2\n    beq _021E83D0\n    b _021E83DC\n    mov r0, #1\n    pop {r4, pc}\n    add r4, #0x6b\n    ldrb r0, [r4]\n    cmp r0, #0\n    bne _021E83DC\n    mov r0, #0\n    pop {r4, pc}\n    add r4, #0x6b\n    ldrb r0, [r4]\n    cmp r0, #1\n    bne _021E83DC\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}\n    _021E83E0: .word ov102_021EC600"
    );
    #endif
}

void ov102_021E83E4(void) {
    /* Original at 0x021E83E4 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    bl System_GetTouchNew\n    cmp r0, #0\n    bne _021E83F8\n    mov r0, #0\n    add sp, #0xc\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x38\n    ldr r7, _021E8454 ; =gSystem + 0x40\n    str r0, [sp]\n    add r6, sp, #8\n    ldr r0, [sp]\n    mov r4, #0\n    strb r0, [r6]\n    ldrb r0, [r6]\n    mov r5, #0xc\n    add r0, #0x10\n    strb r0, [r6, #1]\n    strb r5, [r6, #2]\n    ldrb r0, [r6, #2]\n    add r0, #0x48\n    strb r0, [r6, #3]\n    ldrh r1, [r7, #0x20]\n    ldrh r2, [r7, #0x22]\n    add r0, sp, #8\n    bl TouchscreenHitbox_PointIsIn\n    cmp r0, #0\n    beq _021E8434\n    ldr r0, [sp, #4]\n    add sp, #0xc\n    lsl r1, r0, #1\n    add r0, r0, r1\n    add r0, r4, r0\n    pop {r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r5, #0x50\n    cmp r4, #3\n    blt _021E8412\n    ldr r0, [sp]\n    add r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #4\n    blt _021E8404\n    mov r0, #0\n    mvn r0, r0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021E8454: .word gSystem + 0x40"
    );
    #endif
}

void ov102_021E8458(void) {
    /* Original at 0x021E8458 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021E8484 ; =ov102_021EC5E0\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _021E8480\n    ldr r1, _021E8488 ; =gSystem + 0x40\n    ldrh r0, [r1, #0x20]\n    ldrh r1, [r1, #0x22]\n    sub r0, #0x14\n    sub r1, #0x40\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov102_021EC5A0\n    add r1, r0, #0\n    add r0, r1, #0\n    pop {r3, pc}\n    _021E8484: .word ov102_021EC5E0\n    _021E8488: .word gSystem + 0x40"
    );
    #endif
}

void ov102_021E848C(void) {
    /* Original at 0x021E848C */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov102_021E839C\n    cmp r0, #1\n    beq _021E84A0\n    cmp r0, #2\n    beq _021E84B8\n    b _021E84E4\n    ldr r0, _021E856C ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x14]\n    mov r1, #0xa\n    bl ov102_021E940C\n    ldr r0, _021E8570 ; =ov102_021E7AA4\n    str r0, [r5, #0x24]\n    mov r0, #1\n    str r0, [r4]\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E8574 ; =0x000005E4\n    bl PlaySE\n    add r0, r5, #0\n    add r0, #0x6b\n    ldrb r1, [r0]\n    mov r0, #1\n    eor r1, r0\n    add r0, r5, #0\n    add r0, #0x6b\n    strb r1, [r0]\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x50\n    strh r1, [r0]\n    ldr r0, [r5, #0x14]\n    mov r1, #0x1b\n    bl ov102_021E940C\n    mov r0, #2\n    str r0, [r4]\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r0, #0x6b\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021E851C\n    add r0, r5, #0\n    bl ov102_021E83E4\n    add r6, r0, #0\n    bmi _021E8568\n    add r1, r5, #0\n    add r1, #0x6b\n    ldrb r1, [r1]\n    lsl r2, r6, #0x10\n    ldr r0, [r5, #0x18]\n    lsr r2, r2, #0x10\n    bl ov102_021E85A8\n    cmp r0, #0\n    bne _021E8514\n    ldr r0, _021E8578 ; =0x000005F2\n    bl PlaySE\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r0, #0x50\n    strh r6, [r0]\n    b _021E8548\n    add r0, r5, #0\n    bl ov102_021E8458\n    add r6, r0, #0\n    bmi _021E8568\n    add r1, r5, #0\n    add r1, #0x6b\n    ldrb r1, [r1]\n    lsl r2, r6, #0x10\n    ldr r0, [r5, #0x18]\n    lsr r2, r2, #0x10\n    bl ov102_021E85A8\n    cmp r0, #0\n    bne _021E8542\n    ldr r0, _021E8578 ; =0x000005F2\n    bl PlaySE\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r0, #0x50\n    strh r6, [r0]\n    ldr r0, _021E856C ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    add r0, #0x54\n    add r1, r5, #0\n    bl ov102_021E874C\n    ldr r0, _021E857C ; =ov102_021E87B4\n    mov r1, #0xb\n    str r0, [r5, #0x24]\n    ldr r0, [r5, #0x14]\n    bl ov102_021E940C\n    mov r0, #1\n    str r0, [r4]\n    pop {r4, r5, r6, pc}\n    nop\n    _021E856C: .word 0x000005DC\n    _021E8570: .word ov102_021E7AA4\n    _021E8574: .word 0x000005E4\n    _021E8578: .word 0x000005F2\n    _021E857C: .word ov102_021E87B4"
    );
    #endif
}

void ov102_021E8580(void) {
    /* Original at 0x021E8580 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov102_021E7A58\n    cmp r0, #0\n    bne _021E85A6\n    ldr r0, [r5, #0x74]\n    cmp r0, #0\n    bne _021E859E\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov102_021E8294\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov102_021E848C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E85A8(void) {
    /* Original at 0x021E85A8 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, _021E85E4 ; =0x0000FF02\n    add r3, r2, r3\n    lsl r3, r3, #0x10\n    lsr r3, r3, #0x10\n    cmp r3, #1\n    bhi _021E85BA\n    mov r0, #0\n    pop {r3, pc}\n    cmp r1, #0\n    bne _021E85D0\n    add r1, r2, #0\n    bl sub_02091C38\n    cmp r0, #0\n    beq _021E85CC\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    add r1, r2, #0\n    bl sub_02091C74\n    cmp r0, #0\n    beq _021E85DE\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _021E85E4: .word 0x0000FF02"
    );
    #endif
}

void ov102_021E85E8(void) {
    /* Original at 0x021E85E8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r1, r0, #0\n    add r1, #0x6b\n    ldrb r1, [r1]\n    lsl r2, r1, #2\n    ldr r1, _021E85FC ; =_021EC5D8\n    ldr r1, [r1, r2]\n    blx r1\n    pop {r3, pc}\n    nop\n    _021E85FC: .word _021EC5D8"
    );
    #endif
}

void ov102_021E8600(void) {
    /* Original at 0x021E8600 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x50\n    ldrh r2, [r0]\n    add r1, r2, #0\n    cmp r2, #0xfe\n    bne _021E8610\n    mov r1, #0xc\n    cmp r2, #0xfe\n    beq _021E866C\n    add r0, r4, #0\n    add r0, #0x52\n    strh r2, [r0]\n    ldrh r0, [r4, #0x34]\n    mov r2, #0x40\n    tst r2, r0\n    beq _021E8630\n    ldr r0, _021E86A8 ; =ov102_021EC65C\n    lsl r1, r1, #2\n    ldrb r0, [r0, r1]\n    add r4, #0x50\n    strh r0, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    mov r2, #0x80\n    tst r2, r0\n    beq _021E8644\n    ldr r0, _021E86AC ; =ov102_021EC65D\n    lsl r1, r1, #2\n    ldrb r0, [r0, r1]\n    add r4, #0x50\n    strh r0, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    mov r2, #0x20\n    tst r2, r0\n    beq _021E8658\n    ldr r0, _021E86B0 ; =ov102_021EC65E\n    lsl r1, r1, #2\n    ldrb r0, [r0, r1]\n    add r4, #0x50\n    strh r0, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    mov r2, #0x10\n    tst r0, r2\n    beq _021E86A4\n    ldr r0, _021E86B4 ; =ov102_021EC65F\n    lsl r1, r1, #2\n    ldrb r0, [r0, r1]\n    add r4, #0x50\n    strh r0, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    ldrh r1, [r4, #0x34]\n    mov r0, #0x40\n    tst r0, r1\n    beq _021E868A\n    add r0, r4, #0\n    add r0, #0x52\n    ldrh r0, [r0]\n    mov r1, #3\n    bl _s32_div_f\n    add r1, #9\n    add r4, #0x50\n    strh r1, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0x80\n    tst r0, r1\n    beq _021E86A4\n    add r0, r4, #0\n    add r0, #0x52\n    ldrh r0, [r0]\n    mov r1, #3\n    bl _s32_div_f\n    add r4, #0x50\n    strh r1, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _021E86A8: .word ov102_021EC65C\n    _021E86AC: .word ov102_021EC65D\n    _021E86B0: .word ov102_021EC65E\n    _021E86B4: .word ov102_021EC65F"
    );
    #endif
}

void ov102_021E86B8(void) {
    /* Original at 0x021E86B8 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x50\n    ldrh r0, [r0]\n    cmp r0, #0xfe\n    beq _021E8716\n    ldrh r1, [r4, #0x34]\n    mov r3, #0x40\n    mov r2, #0xff\n    tst r3, r1\n    beq _021E86D6\n    bl ov102_021EC4F8\n    add r2, r0, #0\n    b _021E86FE\n    mov r3, #0x80\n    tst r3, r1\n    beq _021E86E4\n    bl ov102_021EC514\n    add r2, r0, #0\n    b _021E86FE\n    mov r3, #0x10\n    tst r3, r1\n    beq _021E86F2\n    bl ov102_021EC54C\n    add r2, r0, #0\n    b _021E86FE\n    mov r3, #0x20\n    tst r1, r3\n    beq _021E86FE\n    bl ov102_021EC530\n    add r2, r0, #0\n    cmp r2, #0xff\n    beq _021E8748\n    add r0, r4, #0\n    add r0, #0x50\n    ldrh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x52\n    strh r1, [r0]\n    add r4, #0x50\n    strh r2, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    ldrh r1, [r4, #0x34]\n    mov r0, #0x40\n    tst r0, r1\n    beq _021E8730\n    add r0, r4, #0\n    add r0, #0x52\n    ldrh r0, [r0]\n    bl ov102_021EC584\n    add r4, #0x50\n    strh r0, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0x80\n    tst r0, r1\n    beq _021E8748\n    add r0, r4, #0\n    add r0, #0x52\n    ldrh r0, [r0]\n    bl ov102_021EC568\n    add r4, #0x50\n    strh r0, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021E874C(void) {
    /* Original at 0x021E874C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0\n    strh r0, [r4]\n    strb r0, [r4, #6]\n    strb r0, [r4, #7]\n    add r0, r1, #0\n    bl ov102_021E8FD8\n    strh r0, [r4, #4]\n    mov r1, #0\n    str r1, [r4, #8]\n    ldr r0, _021E8788 ; =0x0000FFFF\n    strh r1, [r4, #0xc]\n    strh r0, [r4, #0xe]\n    ldrh r2, [r4, #4]\n    cmp r2, #0xa\n    bls _021E8784\n    add r1, r2, #0\n    sub r1, #0xa\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r1, r0, #1\n    mov r0, #1\n    and r0, r2\n    add r0, r1, r0\n    strh r0, [r4, #2]\n    pop {r4, pc}\n    strh r1, [r4, #2]\n    pop {r4, pc}\n    _021E8788: .word 0x0000FFFF"
    );
    #endif
}

void ov102_021E878C(void) {
    /* Original at 0x021E878C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #6]\n    ldrb r0, [r0, #7]\n    lsl r0, r0, #1\n    add r0, r1, r0\n    bx lr"
    );
    #endif
}

void ov102_021E8798(void) {
    ov102_021E878C();
}

void ov102_021E87A8(void) {
    /* Original at 0x021E87A8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov102_021E87AC(void) {
    /* Original at 0x021E87AC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0]\n    bx lr"
    );
    #endif
}

void ov102_021E87B0(void) {
    /* Original at 0x021E87B0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0, #2]\n    bx lr"
    );
    #endif
}

void ov102_021E87B4(void) {
    /* Original at 0x021E87B4 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r2, [r5]\n    add r4, r0, #0\n    cmp r2, #3\n    bhi _021E881C\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021E87CC: ; jump table\n    bl ov102_021E8B18\n    b _021E881C\n    ldr r0, [r4, #0x14]\n    mov r1, #0x13\n    bl ov102_021E947C\n    cmp r0, #0\n    beq _021E881C\n    mov r0, #0\n    str r0, [r5]\n    b _021E881C\n    ldr r0, [r4, #0x14]\n    mov r1, #0x13\n    bl ov102_021E947C\n    cmp r0, #0\n    beq _021E881C\n    ldr r0, [r4, #0x14]\n    mov r1, #0x12\n    bl ov102_021E940C\n    mov r0, #0\n    str r0, [r5]\n    b _021E881C\n    ldr r0, [r4, #0x14]\n    bl ov102_021E9464\n    cmp r0, #0\n    beq _021E881C\n    ldr r1, [r4, #0x24]\n    add r0, r4, #0\n    bl ov102_021E7A4C\n    mov r0, #0\n    str r0, [r5]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E8820(void) {
    /* Original at 0x021E8820 */
    /* Requires manual decompilation - 143 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x38]\n    add r4, r1, #0\n    cmp r0, #0\n    bne _021E8836\n    add r1, r5, #0\n    add r1, #0x6b\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _021E884C\n    cmp r0, #1\n    bne _021E8844\n    add r1, r5, #0\n    add r1, #0x6b\n    ldrb r1, [r1]\n    cmp r1, #1\n    bne _021E884C\n    ldrh r2, [r5, #0x30]\n    mov r1, #4\n    tst r1, r2\n    beq _021E8880\n    ldr r0, _021E8958 ; =0x000005E4\n    bl PlaySE\n    mov r0, #4\n    str r0, [r5, #0x38]\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x50\n    strh r1, [r0]\n    add r0, r5, #0\n    add r0, #0x6b\n    ldrb r1, [r0]\n    mov r0, #1\n    eor r1, r0\n    add r0, r5, #0\n    add r0, #0x6b\n    strb r1, [r0]\n    ldr r0, [r5, #0x14]\n    mov r1, #0xc\n    bl ov102_021E940C\n    ldr r0, _021E895C ; =ov102_021E8240\n    str r0, [r5, #0x24]\n    mov r0, #3\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    cmp r0, #2\n    bne _021E888E\n    add r0, r5, #0\n    add r0, #0x54\n    bl ov102_021E8C3C\n    b _021E88A6\n    cmp r0, #3\n    bne _021E889C\n    add r0, r5, #0\n    add r0, #0x54\n    bl ov102_021E8C64\n    b _021E88A6\n    ldrh r1, [r5, #0x34]\n    add r0, r5, #0\n    add r0, #0x54\n    bl ov102_021E8B40\n    cmp r0, #1\n    beq _021E88B4\n    cmp r0, #2\n    beq _021E88C4\n    cmp r0, #3\n    beq _021E88D8\n    b _021E88EC\n    ldr r0, _021E8960 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x14]\n    mov r1, #0x12\n    bl ov102_021E940C\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E8960 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x14]\n    mov r1, #0x13\n    bl ov102_021E940C\n    mov r0, #1\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E8960 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x14]\n    mov r1, #0x13\n    bl ov102_021E940C\n    mov r0, #2\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r5, #0x30]\n    mov r0, #2\n    tst r0, r1\n    beq _021E890C\n    ldr r0, _021E8960 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x14]\n    mov r1, #0xc\n    bl ov102_021E940C\n    ldr r0, _021E895C ; =ov102_021E8240\n    str r0, [r5, #0x24]\n    mov r0, #3\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    tst r0, r1\n    beq _021E8956\n    add r0, r5, #0\n    add r0, #0x60\n    ldrh r0, [r0]\n    cmp r0, #0\n    ldr r0, _021E8960 ; =0x000005DC\n    beq _021E8934\n    bl PlaySE\n    ldr r0, [r5, #0x14]\n    mov r1, #0xc\n    bl ov102_021E940C\n    ldr r0, _021E895C ; =ov102_021E8240\n    str r0, [r5, #0x24]\n    mov r0, #3\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    bl PlaySE\n    add r0, r5, #0\n    ldr r1, _021E8964 ; =0x0000FFFF\n    add r0, #0x62\n    strh r1, [r0]\n    add r0, r5, #0\n    bl ov102_021E8CA4\n    ldr r0, _021E8968 ; =ov102_021E7AA4\n    mov r1, #0xd\n    str r0, [r5, #0x24]\n    ldr r0, [r5, #0x14]\n    bl ov102_021E940C\n    mov r0, #3\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    _021E8958: .word 0x000005E4\n    _021E895C: .word ov102_021E8240\n    _021E8960: .word 0x000005DC\n    _021E8964: .word 0x0000FFFF\n    _021E8968: .word ov102_021E7AA4"
    );
    #endif
}

void ov102_021E896C(void) {
    /* Original at 0x021E896C */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r0, #0\n    bl System_GetTouchNew\n    cmp r0, #0\n    bne _021E8980\n    add sp, #0x10\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E8A2C ; =ov102_021EC5F4\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    cmp r0, #0\n    beq _021E8990\n    cmp r0, #1\n    beq _021E899C\n    b _021E89A8\n    add r7, #0x54\n    add r0, r7, #0\n    bl ov102_021E8C3C\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    add r7, #0x54\n    add r0, r7, #0\n    bl ov102_021E8C64\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    add r0, #0x54\n    ldrh r0, [r0]\n    lsl r0, r0, #0x11\n    lsr r4, r0, #0x10\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x30\n    str r0, [sp]\n    ldr r1, [sp]\n    add r0, sp, #0xc\n    strb r1, [r0]\n    ldrb r1, [r0]\n    mov r6, #0\n    mov r5, #0x20\n    add r1, #0x10\n    strb r1, [r0, #1]\n    add r0, sp, #0xc\n    strb r5, [r0, #2]\n    ldrb r1, [r0, #2]\n    ldr r2, _021E8A30 ; =gSystem + 0x40\n    add r1, #0x48\n    strb r1, [r0, #3]\n    ldr r1, _021E8A30 ; =gSystem + 0x40\n    ldrh r2, [r2, #0x22]\n    ldrh r1, [r1, #0x20]\n    add r0, sp, #0xc\n    bl TouchscreenHitbox_PointIsIn\n    cmp r0, #0\n    beq _021E89F2\n    add r7, #0x62\n    add sp, #0x10\n    strh r4, [r7]\n    mov r0, #5\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    add r0, r7, #0\n    add r0, #0x58\n    ldrh r0, [r0]\n    cmp r4, r0\n    blo _021E8A08\n    mov r0, #1\n    str r0, [sp, #4]\n    b _021E8A10\n    add r6, r6, #1\n    add r5, #0x68\n    cmp r6, #2\n    blt _021E89CC\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    bne _021E8A26\n    ldr r0, [sp]\n    add r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    str r0, [sp, #8]\n    cmp r0, #5\n    blt _021E89BC\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E8A2C: .word ov102_021EC5F4\n    _021E8A30: .word gSystem + 0x40"
    );
    #endif
}

void ov102_021E8A34(void) {
    /* Original at 0x021E8A34 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    bl ov102_021E839C\n    cmp r0, #1\n    beq _021E8A48\n    cmp r0, #2\n    beq _021E8A60\n    b _021E8A90\n    ldr r0, _021E8B08 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r4, #0x14]\n    mov r1, #0xc\n    bl ov102_021E940C\n    ldr r0, _021E8B0C ; =ov102_021E8240\n    str r0, [r4, #0x24]\n    mov r0, #3\n    str r0, [r5]\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E8B10 ; =0x000005E4\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x50\n    strh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x6b\n    ldrb r1, [r0]\n    mov r0, #1\n    eor r1, r0\n    add r0, r4, #0\n    add r0, #0x6b\n    strb r1, [r0]\n    ldr r0, [r4, #0x14]\n    mov r1, #0xc\n    bl ov102_021E940C\n    ldr r0, _021E8B0C ; =ov102_021E8240\n    str r0, [r4, #0x24]\n    mov r0, #3\n    str r0, [r5]\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov102_021E896C\n    cmp r0, #5\n    bhi _021E8B06\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E8AA6: ; jump table\n    ldr r0, _021E8B08 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov102_021E8CA4\n    ldr r0, _021E8B14 ; =ov102_021E7AA4\n    mov r1, #0xd\n    str r0, [r4, #0x24]\n    ldr r0, [r4, #0x14]\n    bl ov102_021E940C\n    mov r0, #3\n    str r0, [r5]\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E8B08 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r4, #0x14]\n    mov r1, #0x12\n    bl ov102_021E940C\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E8B08 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r4, #0x14]\n    mov r1, #0x13\n    bl ov102_021E940C\n    mov r0, #1\n    str r0, [r5]\n    pop {r3, r4, r5, pc}\n    ldr r0, _021E8B08 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r4, #0x14]\n    mov r1, #0x13\n    bl ov102_021E940C\n    mov r0, #2\n    str r0, [r5]\n    pop {r3, r4, r5, pc}\n    _021E8B08: .word 0x000005DC\n    _021E8B0C: .word ov102_021E8240\n    _021E8B10: .word 0x000005E4\n    _021E8B14: .word ov102_021E7AA4"
    );
    #endif
}

void ov102_021E8B18(void) {
    /* Original at 0x021E8B18 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov102_021E7A58\n    cmp r0, #0\n    bne _021E8B3E\n    ldr r0, [r5, #0x74]\n    cmp r0, #0\n    bne _021E8B36\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov102_021E8820\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov102_021E8A34\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E8B40(void) {
    /* Original at 0x021E8B40 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0x80\n    add r4, r0, #0\n    tst r2, r1\n    beq _021E8BB8\n    ldrh r1, [r4, #0xc]\n    cmp r1, #0\n    beq _021E8B54\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    ldrb r1, [r4, #7]\n    cmp r1, #4\n    bhs _021E8B8A\n    add r1, r1, #1\n    strb r1, [r4, #7]\n    bl ov102_021E8798\n    ldrh r1, [r4, #4]\n    cmp r0, r1\n    bhs _021E8B6C\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    cmp r0, r1\n    bne _021E8B7E\n    mov r1, #1\n    tst r0, r1\n    beq _021E8B7E\n    mov r0, #0\n    strb r0, [r4, #6]\n    add r0, r1, #0\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r4, #7]\n    sub r0, r0, #1\n    strb r0, [r4, #7]\n    mov r0, #1\n    strh r0, [r4, #0xc]\n    pop {r3, r4, r5, pc}\n    ldrh r2, [r4]\n    ldrh r1, [r4, #2]\n    cmp r2, r1\n    bhs _021E8BB2\n    mov r1, #1\n    str r1, [r4, #8]\n    ldrh r1, [r4]\n    add r1, r1, #1\n    strh r1, [r4]\n    bl ov102_021E8798\n    ldrh r1, [r4, #4]\n    cmp r0, r1\n    bhs _021E8BAA\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    strb r0, [r4, #6]\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    strh r0, [r4, #0xc]\n    pop {r3, r4, r5, pc}\n    mov r5, #0x40\n    add r2, r1, #0\n    tst r2, r5\n    beq _021E8BF4\n    ldrh r0, [r4, #0xc]\n    cmp r0, #0\n    beq _021E8BCE\n    mov r0, #0\n    strh r0, [r4, #0xc]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r4, #7]\n    cmp r0, #0\n    beq _021E8BDC\n    sub r0, r0, #1\n    strb r0, [r4, #7]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _021E8BF0\n    sub r5, #0x41\n    str r5, [r4, #8]\n    ldrh r0, [r4]\n    sub r0, r0, #1\n    strh r0, [r4]\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    mov r3, #0x30\n    add r2, r1, #0\n    tst r2, r3\n    beq _021E8C1E\n    ldrb r2, [r4, #6]\n    mov r1, #1\n    eor r1, r2\n    strb r1, [r4, #6]\n    bl ov102_021E8798\n    ldrh r1, [r4, #4]\n    cmp r0, r1\n    bhs _021E8C12\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldrb r1, [r4, #6]\n    mov r0, #1\n    eor r0, r1\n    strb r0, [r4, #6]\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    lsl r2, r5, #3\n    tst r2, r1\n    beq _021E8C2A\n    bl ov102_021E8C3C\n    pop {r3, r4, r5, pc}\n    add r3, #0xd0\n    tst r1, r3\n    beq _021E8C36\n    bl ov102_021E8C64\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E8C3C(void) {
    /* Original at 0x021E8C3C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r1, [r0]\n    cmp r1, #0\n    beq _021E8C5E\n    cmp r1, #5\n    blo _021E8C52\n    sub r1, r1, #5\n    strh r1, [r0]\n    mov r1, #4\n    mvn r1, r1\n    str r1, [r0, #8]\n    b _021E8C5A\n    neg r1, r1\n    str r1, [r0, #8]\n    mov r1, #0\n    strh r1, [r0]\n    mov r0, #2\n    bx lr\n    mov r0, #4\n    bx lr"
    );
    #endif
}

void ov102_021E8C64(void) {
    /* Original at 0x021E8C64 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r2, [r4, #2]\n    ldrh r1, [r4]\n    cmp r1, r2\n    bhs _021E8CA0\n    add r0, r1, #5\n    cmp r0, r2\n    bgt _021E8C80\n    mov r0, #5\n    str r0, [r4, #8]\n    ldrh r0, [r4]\n    add r0, r0, #5\n    b _021E8C86\n    sub r0, r2, r1\n    str r0, [r4, #8]\n    ldrh r0, [r4, #2]\n    strh r0, [r4]\n    add r0, r4, #0\n    bl ov102_021E8798\n    ldrh r1, [r4, #4]\n    cmp r0, r1\n    bhs _021E8C98\n    mov r0, #2\n    pop {r4, pc}\n    mov r0, #0\n    strb r0, [r4, #6]\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #4\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021E8CA4(void) {
    /* Original at 0x021E8CA4 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x62\n    ldrh r2, [r0]\n    ldr r0, _021E8D18 ; =0x0000FFFF\n    cmp r2, r0\n    bne _021E8CBC\n    add r0, r4, #0\n    add r0, #0x54\n    bl ov102_021E8798\n    add r2, r0, #0\n    add r0, r4, #0\n    add r0, #0x6b\n    ldrb r0, [r0]\n    cmp r0, #0\n    ldr r0, [r4, #0x18]\n    bne _021E8CD4\n    add r1, r4, #0\n    add r1, #0x50\n    ldrh r1, [r1]\n    bl sub_02091C60\n    b _021E8CDE\n    add r1, r4, #0\n    add r1, #0x50\n    ldrh r1, [r1]\n    bl sub_02091CAC\n    add r2, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021E8CF0\n    cmp r0, #1\n    beq _021E8CF4\n    cmp r0, #2\n    beq _021E8D02\n    b _021E8D10\n    strh r2, [r4, #0x10]\n    b _021E8D10\n    add r0, r4, #0\n    add r0, #0x4e\n    ldrh r0, [r0]\n    lsl r0, r0, #1\n    add r0, r4, r0\n    strh r2, [r0, #0x10]\n    b _021E8D10\n    add r1, r4, #0\n    add r1, #0x4e\n    ldrh r1, [r1]\n    add r0, r4, #0\n    add r0, #8\n    bl MailMsg_SetFieldI\n    add r0, r4, #0\n    bl ov102_021E8F14\n    pop {r4, pc}\n    _021E8D18: .word 0x0000FFFF"
    );
    #endif
}

void ov102_021E8D1C(void) {
    /* Original at 0x021E8D1C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r1, [r4]\n    cmp r1, #0\n    beq _021E8D2C\n    cmp r1, #1\n    beq _021E8D3C\n    b _021E8D4A\n    ldr r0, [r0, #0x14]\n    mov r1, #1\n    bl ov102_021E940C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E8D4A\n    ldr r0, [r0, #0x14]\n    bl ov102_021E9464\n    cmp r0, #0\n    beq _021E8D4A\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021E8D50(void) {
    ((u32*)r0)[0x2c] = r1;
    ((u32*)r0)[0x28] = 0;
}

void ov102_021E8D58(void) {
    ((u32*)r0)[0x2c] = 0;
}

void ov102_021E8D60(void) {
    /* Original at 0x021E8D60 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021E8D72\n    cmp r0, #1\n    beq _021E8D82\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x14]\n    mov r1, #2\n    bl ov102_021E940C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x14]\n    bl ov102_021E9464\n    cmp r0, #0\n    beq _021E8D92\n    add r0, r5, #0\n    bl ov102_021E8D58\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E8D94(void) {
    /* Original at 0x021E8D94 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #3\n    bhi _021E8E78\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E8DAC: ; jump table\n    bl ov102_021E8EF8\n    cmp r0, #0\n    bne _021E8DC6\n    ldr r0, [r4]\n    bl sub_02090D88\n    cmp r0, #0\n    beq _021E8DF8\n    add r0, r4, #0\n    bl ov102_021E8F14\n    cmp r0, #0\n    beq _021E8DEA\n    add r0, r4, #0\n    add r0, #0x70\n    mov r1, #1\n    mov r2, #0\n    bl ov102_021E8F5C\n    ldr r0, [r4, #0x14]\n    mov r1, #0x15\n    bl ov102_021E940C\n    mov r0, #1\n    str r0, [r5]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x14]\n    mov r1, #0x17\n    bl ov102_021E940C\n    mov r0, #2\n    str r0, [r5]\n    pop {r3, r4, r5, pc}\n    ldr r1, _021E8E7C ; =ov102_021E8E84\n    add r0, r4, #0\n    bl ov102_021E8D50\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x14]\n    bl ov102_021EA258\n    cmp r0, #0\n    beq _021E8E12\n    cmp r0, #1\n    beq _021E8E20\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x14]\n    mov r1, #0x19\n    bl ov102_021E940C\n    mov r0, #3\n    str r0, [r5]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #4]\n    cmp r0, #2\n    bne _021E8E2E\n    add r0, r4, #0\n    add r0, #8\n    bl MailMsg_SetTrailingFieldsEmpty\n    add r1, r4, #0\n    add r2, r4, #0\n    ldr r0, [r4]\n    add r1, #0x10\n    add r2, #8\n    bl sub_02090E04\n    ldr r1, _021E8E80 ; =ov102_021E8D1C\n    add r0, r4, #0\n    bl ov102_021E7A4C\n    mov r0, #3\n    str r0, [r5]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r4, #0x30]\n    mov r0, #0xf3\n    tst r0, r1\n    bne _021E8E5A\n    bl System_GetTouchNew\n    cmp r0, #0\n    beq _021E8E78\n    ldr r0, [r4, #0x14]\n    mov r1, #0x14\n    bl ov102_021E940C\n    mov r0, #3\n    str r0, [r5]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x14]\n    bl ov102_021E9464\n    cmp r0, #0\n    beq _021E8E78\n    add r0, r4, #0\n    bl ov102_021E8D58\n    pop {r3, r4, r5, pc}\n    nop\n    _021E8E7C: .word ov102_021E8E84\n    _021E8E80: .word ov102_021E8D1C"
    );
    #endif
}

void ov102_021E8E84(void) {
    /* Original at 0x021E8E84 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021E8E9A\n    cmp r0, #1\n    beq _021E8EB4\n    cmp r0, #2\n    beq _021E8EE0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #1\n    add r0, #0x70\n    add r2, r1, #0\n    bl ov102_021E8F5C\n    ldr r0, [r5, #0x14]\n    mov r1, #0x16\n    bl ov102_021E940C\n    mov r0, #1\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x14]\n    bl ov102_021EA258\n    cmp r0, #0\n    beq _021E8EC4\n    cmp r0, #1\n    beq _021E8ED2\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x14]\n    mov r1, #0x19\n    bl ov102_021E940C\n    mov r0, #2\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    ldr r1, _021E8EF4 ; =ov102_021E8D1C\n    add r0, r5, #0\n    bl ov102_021E7A4C\n    mov r0, #2\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x14]\n    bl ov102_021E9464\n    cmp r0, #0\n    beq _021E8EF0\n    add r0, r5, #0\n    bl ov102_021E8D58\n    pop {r3, r4, r5, pc}\n    nop\n    _021E8EF4: .word ov102_021E8D1C"
    );
    #endif
}

void ov102_021E8EF8(void) {
    sub_02090DC0(0, 1);
}

void ov102_021E8F14(void) {
    /* Original at 0x021E8F14 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, [r0, #4]\n    cmp r1, #0\n    beq _021E8F26\n    cmp r1, #1\n    beq _021E8F36\n    cmp r1, #2\n    beq _021E8F4C\n    b _021E8F54\n    ldrh r1, [r0, #0x10]\n    ldr r0, _021E8F58 ; =0x0000FFFF\n    cmp r1, r0\n    beq _021E8F32\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    ldrh r2, [r0, #0x10]\n    ldr r1, _021E8F58 ; =0x0000FFFF\n    cmp r2, r1\n    beq _021E8F48\n    ldrh r0, [r0, #0x12]\n    cmp r0, r1\n    beq _021E8F48\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    add r0, #8\n    bl MailMsg_AllFieldsAreInit\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _021E8F58: .word 0x0000FFFF"
    );
    #endif
}

void ov102_021E8F5C(void) {
    *(u8*)r0 = r2;
    ((u8*)r0)[1] = r1;
}

void ov102_021E8F64(void) {
    /* Original at 0x021E8F64 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void ov102_021E8F68(void) {
    /* Original at 0x021E8F68 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x74\n    bx lr"
    );
    #endif
}

void ov102_021E8F6C(void) {
    /* Original at 0x021E8F6C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    bx lr"
    );
    #endif
}

void ov102_021E8F70(void) {
    sub_02090D74();
}

void ov102_021E8F7C(void) {
    /* Original at 0x021E8F7C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x6b\n    ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void ov102_021E8F84(void) {
    MailMsg_GetMsgBank();
}

void ov102_021E8F90(void) {
    MailMsg_GetFieldI();
}

void ov102_021E8FA8(void) {
    MailMsg_GetRawString();
}

void ov102_021E8FB4(void) {
    ov102_021E7A0C();
}

void ov102_021E8FC0(void) {
    /* Original at 0x021E8FC0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x4e\n    ldrh r0, [r0]\n    bx lr"
    );
    #endif
}

void ov102_021E8FC8(void) {
    /* Original at 0x021E8FC8 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x4c\n    ldrh r0, [r0]\n    bx lr"
    );
    #endif
}

void ov102_021E8FD0(void) {
    /* Original at 0x021E8FD0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x50\n    ldrh r0, [r0]\n    bx lr"
    );
    #endif
}

void ov102_021E8FD8(void) {
    /* Original at 0x021E8FD8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r1, r0, #0\n    add r0, #0x6b\n    ldrb r0, [r0]\n    cmp r0, #0\n    ldr r0, [r1, #0x18]\n    bne _021E8FF0\n    add r1, #0x50\n    ldrh r1, [r1]\n    bl sub_02091C38\n    pop {r3, pc}\n    add r1, #0x50\n    ldrh r1, [r1]\n    bl sub_02091C74\n    pop {r3, pc}"
    );
    #endif
}

void ov102_021E8FFC(void) {
    /* Original at 0x021E8FFC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x6b\n    ldrb r0, [r0]\n    add r4, r1, #0\n    add r3, r2, #0\n    cmp r0, #0\n    ldr r0, [r5, #0x18]\n    bne _021E901A\n    add r5, #0x50\n    ldrh r1, [r5]\n    add r2, r4, #0\n    bl sub_02091C40\n    pop {r3, r4, r5, pc}\n    add r5, #0x50\n    ldrh r1, [r5]\n    add r2, r4, #0\n    bl sub_02091C84\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E9028(void) {
    ov102_021E878C(0);
}

void ov102_021E9044(void) {
    ov102_021E87A8();
}

void ov102_021E9050(void) {
    ov102_021E87AC(0, 1);
}

void ov102_021E9064(void) {
    /* Original at 0x021E9064 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x54\n    bl ov102_021E87AC\n    add r5, #0x54\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov102_021E87B0\n    cmp r4, r0\n    bge _021E9080\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E9084(void) {
    sub_02090D78();
}

void ov102_021E9090(void) {
    ov102_021E8F64();
}

void ov102_021E909C(void) {
    /* Original at 0x021E909C */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r6, r1, #0\n    mov r1, #0x8d\n    add r5, r0, #0\n    mov r0, #0x23\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    str r5, [r4, #0x18]\n    add r0, r5, #0\n    str r6, [r4, #0x1c]\n    bl ov102_021E8F68\n    mov r1, #0x7e\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov102_021E9198\n    bl NNS_G2dInitOamManagerModule\n    mov r2, #0\n    str r2, [sp]\n    mov r1, #0x7f\n    str r1, [sp, #4]\n    str r2, [sp, #8]\n    mov r3, #0x20\n    str r3, [sp, #0xc]\n    mov r0, #0x23\n    str r0, [sp, #0x10]\n    mov r0, #1\n    bl OamManager_Create\n    add r1, r4, #0\n    mov r0, #0x80\n    add r1, #0x28\n    mov r2, #0x23\n    bl G2dRenderer_Init\n    str r0, [r4, #0x24]\n    mov r0, #0x23\n    bl BgConfig_Alloc\n    str r0, [r4, #0x20]\n    ldr r0, _021E913C ; =ov102_021E93DC\n    add r1, r4, #0\n    mov r2, #2\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4]\n    ldr r0, _021E9140 ; =ov102_021E93E0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov102_021E93D4\n    mov r1, #0\n    str r0, [r4, #4]\n    add r2, r4, #0\n    add r0, r1, #0\n    add r1, r1, #1\n    str r0, [r2, #8]\n    add r2, r2, #4\n    cmp r1, #4\n    blt _021E9122\n    mov r0, #4\n    mov r1, #0x23\n    bl FontID_Alloc\n    add r0, r4, #0\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021E913C: .word ov102_021E93DC\n    _021E9140: .word ov102_021E93E0"
    );
    #endif
}

void ov102_021E9144(void) {
    /* Original at 0x021E9144 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    beq _021E9196\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #4\n    bl FontID_Release\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    beq _021E9166\n    bl SysTask_Destroy\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021E915C\n    ldr r0, [r6]\n    bl SysTask_Destroy\n    ldr r0, [r6, #4]\n    bl SysTask_Destroy\n    bl OamManager_Free\n    ldr r0, [r6, #0x24]\n    bl SpriteList_Delete\n    add r0, r6, #0\n    bl ov102_021E91BC\n    ldr r0, [r6, #0x20]\n    bl Heap_Free\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov102_021E9198(void) {
    /* Original at 0x021E9198 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _021E91B8 ; =ov102_021EC698\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl ObjCharTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    add sp, #0x10\n    pop {r4, pc}\n    _021E91B8: .word ov102_021EC698"
    );
    #endif
}

void ov102_021E91BC(void) {
    ObjCharTransfer_Destroy();
}

void ov102_021E91C4(void) {
    /* Original at 0x021E91C4 */
    /* Requires manual decompilation - 196 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x60\n    add r7, r0, #0\n    mov r0, #2\n    mov r1, #0x23\n    bl FontSystem_NewInit\n    mov r1, #0x7f\n    lsl r1, r1, #2\n    str r0, [r7, r1]\n    add r1, #8\n    add r0, r7, r1\n    bl InitWindow\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x81\n    str r0, [sp, #4]\n    lsl r1, r1, #2\n    ldr r0, [r7, #0x20]\n    add r1, r7, r1\n    mov r2, #9\n    mov r3, #4\n    bl AddTextWindowTopLeftCorner\n    mov r0, #0x81\n    lsl r0, r0, #2\n    add r0, r7, r0\n    mov r1, #0\n    bl FillWindowPixelBufferText_AssumeTileSize32\n    mov r0, #0x81\n    lsl r0, r0, #2\n    add r0, r7, r0\n    mov r1, #0x23\n    bl sub_02013910\n    mov r1, #2\n    lsl r1, r1, #8\n    str r0, [r7, r1]\n    ldr r0, [r7, r1]\n    mov r1, #1\n    bl sub_02013948\n    mov r1, #0x7f\n    mov r3, #0x23\n    add r2, r3, #0\n    lsl r1, r1, #2\n    str r0, [sp, #0x28]\n    ldr r0, [r7, r1]\n    add r2, #0xf8\n    str r0, [sp, #0x30]\n    add r0, r1, #0\n    add r0, #8\n    add r0, r7, r0\n    str r0, [sp, #0x34]\n    ldr r0, [r7, #0x24]\n    sub r1, #0x64\n    str r0, [sp, #0x38]\n    add r0, r7, r1\n    str r0, [sp, #0x3c]\n    mov r0, #3\n    mov r1, #1\n    str r0, [sp, #0x50]\n    mov r0, #0\n    str r1, [sp, #0x58]\n    mov r1, #0x1b\n    str r0, [sp, #0x54]\n    str r0, [sp, #0x48]\n    str r0, [sp, #0x4c]\n    str r3, [sp, #0x5c]\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0x20]\n    mov r0, #0x15\n    mov r1, #0x23\n    bl String_New\n    str r0, [sp, #0x24]\n    mov r0, #0x15\n    mov r1, #0x23\n    bl String_New\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp, #0x2c]\n    mov r0, #0x86\n    lsl r0, r0, #2\n    add r0, r7, r0\n    str r0, [sp, #0x18]\n    mov r0, #0x18\n    str r7, [sp, #0x14]\n    str r0, [sp, #0x10]\n    mov r1, #1\n    ldr r0, [sp, #0x28]\n    ldr r3, [sp, #0x18]\n    add r2, r1, #0\n    bl sub_02021AC8\n    mov r1, #0x87\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    ldr r1, [sp, #0x2c]\n    str r0, [sp, #0x44]\n    mov r0, #0\n    str r0, [sp, #0x40]\n    ldr r0, [sp, #0x20]\n    ldr r2, [sp, #0x24]\n    add r1, #0xb\n    bl ReadMsgDataIntoString\n    ldr r0, [sp, #0x24]\n    bl String_CountLines\n    str r0, [sp, #0x1c]\n    mov r0, #0x81\n    lsl r0, r0, #2\n    add r0, r7, r0\n    mov r1, #0\n    bl FillWindowPixelBufferText_AssumeTileSize32\n    ldr r0, [sp, #0x1c]\n    mov r6, #0\n    lsl r1, r0, #4\n    mov r0, #0x20\n    sub r0, r0, r1\n    lsr r5, r0, #1\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0\n    bls _021E9308\n    ldr r1, [sp, #0x24]\n    add r0, r4, #0\n    add r2, r6, #0\n    bl String_GetLineN\n    mov r0, #4\n    add r1, r4, #0\n    mov r2, #0\n    mov r3, #0x48\n    bl FontID_String_GetCenterAlignmentX\n    add r3, r0, #0\n    str r5, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E9378 ; =0x000E0F00\n    mov r1, #4\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #0x81\n    lsl r0, r0, #2\n    add r0, r7, r0\n    add r2, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x1c]\n    add r6, r6, #1\n    add r5, #0x10\n    cmp r6, r0\n    blo _021E92CA\n    mov r1, #2\n    lsl r1, r1, #8\n    ldr r1, [r7, r1]\n    add r0, sp, #0x30\n    bl TextOBJ_Create\n    mov r2, #0x85\n    ldr r1, [sp, #0x14]\n    lsl r2, r2, #2\n    str r0, [r1, r2]\n    add r0, r1, #0\n    ldr r0, [r0, r2]\n    mov r1, #1\n    bl TextOBJ_SetSpritesDrawFlag\n    mov r1, #0x85\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl TextOBJ_SetPaletteNum\n    mov r1, #0x85\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    ldr r1, [sp, #0x10]\n    mov r2, #6\n    bl sub_020136B4\n    ldr r0, [sp, #0x18]\n    add r0, #0x10\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    add r0, #0x10\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    add r0, #0x88\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x2c]\n    add r0, r0, #1\n    str r0, [sp, #0x2c]\n    cmp r0, #2\n    blt _021E927E\n    add r0, r4, #0\n    bl String_Delete\n    ldr r0, [sp, #0x24]\n    bl String_Delete\n    ldr r0, [sp, #0x20]\n    bl DestroyMsgData\n    add sp, #0x60\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E9378: .word 0x000E0F00"
    );
    #endif
}

void ov102_021E937C(void) {
    /* Original at 0x021E937C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r1, #0x86\n    mov r6, #0\n    lsl r1, r1, #2\n    str r0, [sp]\n    add r4, r0, #0\n    add r5, r0, r1\n    add r7, r6, #0\n    mov r0, #0x85\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl TextOBJ_Destroy\n    add r0, r5, #0\n    bl sub_02021B5C\n    mov r0, #0x85\n    lsl r0, r0, #2\n    str r7, [r4, r0]\n    add r6, r6, #1\n    add r4, #0x10\n    add r5, #0x10\n    cmp r6, #2\n    blt _021E938C\n    add r1, r0, #0\n    ldr r0, [sp]\n    sub r1, #0x14\n    ldr r0, [r0, r1]\n    bl sub_02013938\n    mov r1, #0x81\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    add r0, r0, r1\n    bl RemoveWindow\n    mov r1, #0x7f\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    bl sub_020135AC\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov102_021E93D4(void) {
    SysTask_CreateOnVBlankQueue();
}

void ov102_021E93DC(void) {
    /* Original at 0x021E93DC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov102_021E93E0(void) {
    /* Original at 0x021E93E0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0x20]\n    bl DoScheduledBgGpuUpdates\n    ldr r0, [r4, #0x24]\n    bl SpriteList_RenderAndAnimateSprites\n    bl OamManager_ApplyAndResetBuffers\n    ldr r3, _021E9404 ; =0x027E0000\n    ldr r1, _021E9408 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    nop\n    _021E9404: .word 0x027E0000\n    _021E9408: .word 0x00003FF8"
    );
    #endif
}

void ov102_021E940C(void) {
    /* Original at 0x021E940C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    cmp r6, #0x20\n    bhs _021E945A\n    mov r0, #0x23\n    mov r1, #0x18\n    bl Heap_Alloc\n    add r1, r0, #0\n    beq _021E945E\n    mov r4, #0\n    str r4, [r1, #0x14]\n    str r6, [r1, #0xc]\n    str r5, [r1]\n    ldr r0, [r5, #0x18]\n    add r2, r5, #0\n    str r0, [r1, #4]\n    ldr r0, [r5, #0x1c]\n    str r0, [r1, #8]\n    ldr r0, [r2, #8]\n    cmp r0, #0\n    bne _021E9450\n    ldr r0, _021E9460 ; =ov102_021EC788\n    lsl r2, r6, #2\n    ldr r0, [r0, r2]\n    mov r2, #1\n    str r4, [r1, #0x10]\n    bl SysTask_CreateOnMainQueue\n    lsl r1, r4, #2\n    add r1, r5, r1\n    str r0, [r1, #8]\n    pop {r4, r5, r6, pc}\n    add r4, r4, #1\n    add r2, r2, #4\n    cmp r4, #4\n    blt _021E9434\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    _021E9460: .word ov102_021EC788"
    );
    #endif
}

void ov102_021E9464(void) {
    /* Original at 0x021E9464 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    ldr r1, [r0, #8]\n    cmp r1, #0\n    beq _021E9470\n    mov r0, #0\n    bx lr\n    add r2, r2, #1\n    add r0, r0, #4\n    cmp r2, #4\n    blt _021E9466\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov102_021E947C(void) {
    /* Original at 0x021E947C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    beq _021E9498\n    bl SysTask_GetData\n    ldr r0, [r0, #0xc]\n    cmp r0, r6\n    bne _021E9498\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021E9484\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov102_021E94A4(void) {
    /* Original at 0x021E94A4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    ldr r0, [r0, #8]\n    bl SysTask_Destroy\n    ldr r0, [r4, #0x10]\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    mov r2, #0\n    add r0, r1, r0\n    str r2, [r0, #8]\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021E94CC(void) {
    /* Original at 0x021E94CC */
    /* Requires manual decompilation - 113 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r1, #1\n    lsl r1, r1, #0x1a\n    ldr r0, [r1]\n    ldr r2, _021E95D0 ; =0xFFFFE0FF\n    and r0, r2\n    str r0, [r1]\n    ldr r0, _021E95D4 ; =0x04001000\n    ldr r3, [r0]\n    and r2, r3\n    str r2, [r0]\n    ldr r2, [r1]\n    ldr r3, _021E95D8 ; =0xFFCFFFEF\n    add r5, r2, #0\n    ldr r2, _021E95DC ; =0x00100010\n    and r5, r3\n    orr r2, r5\n    str r2, [r1]\n    ldr r1, [r0]\n    add r2, r1, #0\n    and r2, r3\n    mov r1, #0x10\n    orr r1, r2\n    str r1, [r0]\n    mov r0, #0x4c\n    mov r1, #0x23\n    bl NARC_New\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov102_021E978C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov102_021E95E0\n    ldr r0, [r4]\n    bl ov102_021E91C4\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    bl ov102_021EA314\n    mov r1, #0x1e\n    ldr r2, [r4]\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    ldr r0, [r4]\n    ldr r0, [r0, r1]\n    add r1, r5, #0\n    bl ov102_021EA41C\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    bl ov102_021EB1A4\n    mov r1, #0x79\n    ldr r2, [r4]\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    ldr r0, [r4]\n    ldr r0, [r0, r1]\n    add r1, r5, #0\n    bl ov102_021EB1F8\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    bl ov102_021EB694\n    mov r1, #0x7a\n    ldr r2, [r4]\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    ldr r0, [r4]\n    ldr r0, [r0, r1]\n    add r1, r5, #0\n    bl ov102_021EB6E0\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    bl ov102_021EBC34\n    mov r1, #0x7b\n    ldr r2, [r4]\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    ldr r0, [r4]\n    ldr r0, [r0, r1]\n    bl ov102_021EBD00\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    bl ov102_021EC20C\n    mov r1, #0x1f\n    ldr r2, [r4]\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    ldr r0, [r4]\n    ldr r0, [r0, r1]\n    add r1, r5, #0\n    bl ov102_021EC248\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    bl GX_DispOn\n    add r0, r5, #0\n    bl NARC_Delete\n    add r0, r4, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}\n    _021E95D0: .word 0xFFFFE0FF\n    _021E95D4: .word 0x04001000\n    _021E95D8: .word 0xFFCFFFEF\n    _021E95DC: .word 0x00100010"
    );
    #endif
}

void ov102_021E95E0(void) {
    /* Original at 0x021E95E0 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    ldr r4, [r0]\n    mov r0, #0x66\n    lsl r0, r0, #2\n    add r5, r1, #0\n    add r1, r4, r0\n    str r1, [sp, #0x1c]\n    add r1, r0, #0\n    sub r1, #0x48\n    add r7, r4, r1\n    add r1, r0, #0\n    add r1, #0x28\n    add r0, #0x30\n    add r1, r4, r1\n    add r0, r4, r0\n    mov r6, #0\n    str r1, [sp, #0x18]\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x1c]\n    bl NNS_G2dInitImagePaletteProxy\n    add r0, r7, #0\n    bl NNS_G2dInitImageProxy\n    mov r0, #0\n    str r0, [sp]\n    add r0, r6, #1\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #0x23\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #1\n    mov r3, #0\n    str r7, [sp, #0x10]\n    bl GfGfxLoader_LoadImageMappingFromOpenNarc\n    mov r0, #0x23\n    str r0, [sp]\n    ldr r0, [sp, #0x1c]\n    mov r1, #0xa\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, r6, #1\n    mov r3, #0\n    bl GfGfxLoader_PartiallyLoadPaletteFromOpenNarc\n    mov r0, #0x23\n    str r0, [sp]\n    ldr r3, [sp, #0x18]\n    add r0, r5, #0\n    mov r1, #7\n    mov r2, #1\n    bl GfGfxLoader_GetCellBankFromOpenNarc\n    mov r1, #0x1d\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    mov r0, #0x23\n    str r0, [sp]\n    ldr r3, [sp, #0x14]\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #1\n    bl GfGfxLoader_GetAnimBankFromOpenNarc\n    mov r1, #0x76\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [sp, #0x1c]\n    add r6, r6, #1\n    add r0, #0x14\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x18]\n    add r7, #0x24\n    add r0, r0, #4\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    add r4, r4, #4\n    add r0, r0, #4\n    str r0, [sp, #0x14]\n    cmp r6, #2\n    blt _021E9606\n    bl sub_0203A964\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov102_021E9694(void) {
    /* Original at 0x021E9694 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r1, #0\n    ldr r0, [r6, #0x14]\n    ldr r7, [r6]\n    cmp r0, #0\n    beq _021E96AA\n    cmp r0, #1\n    beq _021E96CC\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x23\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r6, #0x14]\n    add sp, #0xc\n    add r0, r0, #1\n    str r0, [r6, #0x14]\n    pop {r4, r5, r6, r7, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E9784\n    mov r0, #0x1e\n    ldr r1, [r6]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov102_021EA380\n    mov r0, #0x79\n    ldr r1, [r6]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl ov102_021EB1E0\n    mov r0, #0x7a\n    ldr r1, [r6]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl ov102_021EB6C8\n    mov r0, #0x7b\n    ldr r1, [r6]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl ov102_021EBCBC\n    mov r0, #0x1f\n    ldr r1, [r6]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov102_021EC240\n    ldr r0, [r6]\n    bl ov102_021E937C\n    mov r4, #0\n    add r5, r7, #0\n    mov r0, #0x1d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _021E9728\n    bl Heap_Free\n    mov r0, #0x76\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _021E9736\n    bl Heap_Free\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _021E971A\n    mov r0, #2\n    bl FontID_Release\n    ldr r0, [r7, #0x20]\n    mov r1, #0\n    bl FreeBgTilemapBuffer\n    ldr r0, [r7, #0x20]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    ldr r0, [r7, #0x20]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    ldr r0, [r7, #0x20]\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    ldr r0, [r7, #0x20]\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    ldr r0, [r7, #0x20]\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    ldr r2, _021E9788 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    add r0, r6, #0\n    bl ov102_021E94A4\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021E9788: .word 0x04000304"
    );
    #endif
}

void ov102_021E978C(void) {
    /* Original at 0x021E978C */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r2, _021E9814 ; =0x04000304\n    ldr r5, [r0]\n    ldrh r1, [r2]\n    ldr r0, _021E9818 ; =0xFFFF7FFF\n    and r0, r1\n    strh r0, [r2]\n    mov r0, #1\n    mov r1, #0\n    add r2, r0, #0\n    bl GX_SetGraphicsMode\n    ldr r0, _021E981C ; =ov102_021EC760\n    bl GfGfx_SetBanks\n    ldr r0, _021E9820 ; =ov102_021EC6A8\n    bl SetBothScreensModesAndDisable\n    mov r1, #0\n    ldr r0, [r5, #0x20]\n    ldr r2, _021E9824 ; =ov102_021EC728\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    ldr r0, [r5, #0x20]\n    ldr r2, _021E9828 ; =ov102_021EC6D4\n    mov r1, #1\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r5, #0x20]\n    ldr r2, _021E982C ; =ov102_021EC6B8\n    mov r1, #2\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r5, #0x20]\n    ldr r2, _021E9830 ; =ov102_021EC70C\n    mov r1, #3\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r5, #0x20]\n    ldr r2, _021E9834 ; =ov102_021EC744\n    mov r1, #4\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r5, #0x20]\n    ldr r2, _021E9838 ; =ov102_021EC6F0\n    mov r1, #5\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r4, #0\n    lsl r1, r4, #0x18\n    ldr r0, [r5, #0x20]\n    lsr r1, r1, #0x18\n    bl BgClearTilemapBufferAndCommit\n    add r4, r4, #1\n    cmp r4, #6\n    blt _021E97FA\n    mov r0, #2\n    mov r1, #0x23\n    bl FontID_Alloc\n    pop {r3, r4, r5, pc}\n    _021E9814: .word 0x04000304\n    _021E9818: .word 0xFFFF7FFF\n    _021E981C: .word ov102_021EC760\n    _021E9820: .word ov102_021EC6A8\n    _021E9824: .word ov102_021EC728\n    _021E9828: .word ov102_021EC6D4\n    _021E982C: .word ov102_021EC6B8\n    _021E9830: .word ov102_021EC70C\n    _021E9834: .word ov102_021EC744\n    _021E9838: .word ov102_021EC6F0"
    );
    #endif
}

void ov102_021E983C(void) {
    /* Original at 0x021E983C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _021E984E\n    cmp r0, #1\n    beq _021E986E\n    b _021E9880\n    mov r0, #5\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x23\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4, #0x14]\n    add sp, #0xc\n    add r0, r0, #1\n    str r0, [r4, #0x14]\n    pop {r3, r4, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E9886\n    ldr r0, [r4, #0x14]\n    add sp, #0xc\n    add r0, r0, #1\n    str r0, [r4, #0x14]\n    pop {r3, r4, pc}\n    add r0, r4, #0\n    bl ov102_021E94A4\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov102_021E988C(void) {
    /* Original at 0x021E988C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r0, #0x1e\n    ldr r4, [r5]\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EAA3C\n    ldr r0, [r5, #4]\n    bl ov102_021E8FC0\n    add r1, r0, #0\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EAFF0\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E98B8(void) {
    ov102_021E94A4();
}

void ov102_021E98C4(void) {
    /* Original at 0x021E98C4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    mov r0, #0x7a\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov102_021EB98C\n    add r0, r4, #0\n    bl ov102_021E94A4\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021E98E0(void) {
    /* Original at 0x021E98E0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    mov r0, #0x7b\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov102_021EBEF4\n    add r0, r4, #0\n    bl ov102_021E94A4\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021E98FC(void) {
    /* Original at 0x021E98FC */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r0, #0x7d\n    ldr r4, [r5]\n    mov r1, #1\n    lsl r0, r0, #2\n    strb r1, [r4, r0]\n    sub r0, #0x14\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EAF5C\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EAF7C\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EB524\n    ldr r0, [r4, #0x18]\n    bl ov102_021E8FC8\n    add r1, r0, #0\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB530\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E9944(void) {
    /* Original at 0x021E9944 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r0, #0x7d\n    ldr r4, [r5]\n    mov r1, #0\n    lsl r0, r0, #2\n    strb r1, [r4, r0]\n    sub r0, #0x10\n    ldr r0, [r4, r0]\n    bl ov102_021EB524\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EAFAC\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EAF5C\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E9978(void) {
    /* Original at 0x021E9978 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    ldr r0, [r5, #0x14]\n    ldr r4, [r5]\n    cmp r0, #0\n    beq _021E998A\n    cmp r0, #1\n    beq _021E99DE\n    pop {r4, r5, r6, pc}\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EAF44\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EAF7C\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EADF8\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EAE40\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB664\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBA44\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EA71C\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r4, r5, r6, pc}\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBA5C\n    add r6, r0, #0\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EA754\n    cmp r6, #0\n    beq _021E9A20\n    cmp r0, #0\n    beq _021E9A20\n    ldr r0, [r4, #0x18]\n    bl ov102_021E8FD0\n    add r1, r0, #0\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB9C0\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EB98C\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov102_021E9A24(void) {
    /* Original at 0x021E9A24 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r0, [r5, #0x14]\n    ldr r4, [r5]\n    cmp r0, #0\n    beq _021E9A3A\n    cmp r0, #1\n    beq _021E9A4C\n    cmp r0, #2\n    beq _021E9A5E\n    pop {r3, r4, r5, pc}\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB624\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBBF4\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBC28\n    cmp r0, #0\n    beq _021E9A8A\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB654\n    cmp r0, #0\n    beq _021E9A8A\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBBD0\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E9A8C(void) {
    /* Original at 0x021E9A8C */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r0, [r5, #0x14]\n    ldr r4, [r5]\n    cmp r0, #3\n    bhi _021E9B2E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E9AA4: ; jump table\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB624\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EB98C\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBBF4\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBC28\n    cmp r0, #0\n    beq _021E9B2E\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBBD0\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB654\n    cmp r0, #0\n    beq _021E9B2E\n    ldr r0, [r4, #0x18]\n    bl ov102_021E8FD0\n    add r1, r0, #0\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB9C0\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EB98C\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E9B30(void) {
    /* Original at 0x021E9B30 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    ldr r0, [r5, #0x14]\n    ldr r4, [r5]\n    cmp r0, #0\n    beq _021E9B42\n    cmp r0, #1\n    beq _021E9B8E\n    pop {r4, r5, r6, pc}\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB67C\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EB98C\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBAAC\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EADF8\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EAE40\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EA71C\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r4, r5, r6, pc}\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBAD0\n    add r6, r0, #0\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EA754\n    cmp r6, #0\n    beq _021E9BCE\n    cmp r0, #0\n    beq _021E9BCE\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EAFAC\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EAF50\n    mov r0, #0x7d\n    mov r1, #0\n    lsl r0, r0, #2\n    strb r1, [r4, r0]\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov102_021E9BD0(void) {
    /* Original at 0x021E9BD0 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r0, [r5, #0x14]\n    ldr r4, [r5]\n    cmp r0, #0\n    beq _021E9BE6\n    cmp r0, #1\n    beq _021E9C0E\n    cmp r0, #2\n    beq _021E9C2E\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBDEC\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EB98C\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBB50\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBB6C\n    cmp r0, #0\n    beq _021E9C6C\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBE3C\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBE80\n    cmp r0, #0\n    beq _021E9C6C\n    ldr r0, [r4, #0x18]\n    bl ov102_021E9028\n    add r1, r0, #0\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBF38\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EBEF4\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EC290\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E9C70(void) {
    /* Original at 0x021E9C70 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r0, [r5, #0x14]\n    ldr r4, [r5]\n    cmp r0, #4\n    bhi _021E9D40\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E9C88: ; jump table\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB624\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EBEF4\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EC290\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBEA4\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBEC8\n    cmp r0, #0\n    beq _021E9D40\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBBD0\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBB88\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBBC4\n    cmp r0, #0\n    beq _021E9D40\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB654\n    cmp r0, #0\n    beq _021E9D40\n    ldr r0, [r4, #0x18]\n    bl ov102_021E8FD0\n    add r1, r0, #0\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB9C0\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EB98C\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E9D44(void) {
    /* Original at 0x021E9D44 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    ldr r0, [r5, #0x14]\n    ldr r4, [r5]\n    cmp r0, #3\n    bls _021E9D52\n    b _021E9E5E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E9D5E: ; jump table\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB67C\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EBEF4\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EC290\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBEA4\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EADF8\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EAE40\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EA71C\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r4, r5, r6, pc}\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBEC8\n    add r6, r0, #0\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EA754\n    cmp r6, #0\n    beq _021E9E5E\n    cmp r0, #0\n    beq _021E9E5E\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBB1C\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBB88\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r4, r5, r6, pc}\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBBC4\n    cmp r0, #0\n    beq _021E9E5E\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBB2C\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r4, r5, r6, pc}\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBB44\n    cmp r0, #0\n    beq _021E9E5E\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EAA3C\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EAF5C\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EAFAC\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EAF50\n    mov r0, #0x7d\n    mov r1, #0\n    lsl r0, r0, #2\n    strb r1, [r4, r0]\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov102_021E9E60(void) {
    /* Original at 0x021E9E60 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r0, [r5, #0x14]\n    ldr r4, [r5]\n    cmp r0, #3\n    bhi _021E9F34\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E9E78: ; jump table\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB67C\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EBEF4\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EC290\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBEA4\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBEC8\n    cmp r0, #0\n    beq _021E9F34\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBB1C\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBB88\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBBC4\n    cmp r0, #0\n    beq _021E9F34\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBB2C\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBB44\n    cmp r0, #0\n    beq _021E9F34\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EAA3C\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EAF5C\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EB524\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E9F38(void) {
    /* Original at 0x021E9F38 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    ldr r4, [r6]\n    ldr r0, [r4, #0x18]\n    bl ov102_021E8FC8\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    bne _021E9F7A\n    mov r0, #0x7d\n    mov r1, #0\n    lsl r0, r0, #2\n    strb r1, [r4, r0]\n    sub r0, #0x10\n    ldr r0, [r4, r0]\n    bl ov102_021EB524\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EAF5C\n    ldr r0, [r4, #0x18]\n    bl ov102_021E8FC0\n    add r1, r0, #0\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EAFF0\n    b _021E9FA4\n    mov r0, #0x7d\n    mov r1, #1\n    lsl r0, r0, #2\n    strb r1, [r4, r0]\n    sub r0, #0x14\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EAF5C\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EB524\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r5, #0\n    bl ov102_021EB530\n    add r0, r6, #0\n    bl ov102_021E94A4\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov102_021E9FAC(void) {
    /* Original at 0x021E9FAC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r4, [r5]\n    ldr r0, [r4, #0x18]\n    bl ov102_021E8FC8\n    add r1, r0, #0\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB530\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E9FCC(void) {
    /* Original at 0x021E9FCC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r4, [r5]\n    ldr r0, [r4, #0x18]\n    bl ov102_021E8FD0\n    add r1, r0, #0\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB9C0\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021E9FEC(void) {
    /* Original at 0x021E9FEC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r4, [r5]\n    ldr r0, [r4, #0x18]\n    bl ov102_021E9028\n    add r1, r0, #0\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBF38\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EA00C(void) {
    /* Original at 0x021EA00C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r0, [r5, #0x14]\n    ldr r4, [r5]\n    cmp r0, #0\n    beq _021EA01E\n    cmp r0, #1\n    beq _021EA038\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x18]\n    bl ov102_021E9044\n    add r1, r0, #0\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EBFA0\n    ldr r0, [r5, #0x14]\n    add r0, r0, #1\n    str r0, [r5, #0x14]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EC05C\n    cmp r0, #0\n    beq _021EA058\n    mov r0, #0x1f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ov102_021EC290\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EA05C(void) {
    /* Original at 0x021EA05C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    mov r0, #0x1e\n    ldr r1, [r4]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ov102_021EAE40\n    add r0, r4, #0\n    bl ov102_021E94A4\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EA078(void) {
    /* Original at 0x021EA078 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r0, #0x1e\n    ldr r4, [r5]\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #2\n    bl ov102_021EAE40\n    mov r0, #0x79\n    ldr r1, [r5]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    add r2, r1, #0\n    bl ov102_021EB2EC\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    ldrb r1, [r4, r0]\n    cmp r1, #1\n    bne _021EA0AE\n    sub r0, #0x10\n    ldr r0, [r4, r0]\n    bl ov102_021EB50C\n    b _021EA0B6\n    sub r0, #0x14\n    ldr r0, [r4, r0]\n    bl ov102_021EAF44\n    ldr r0, [r5, #4]\n    bl ov102_021E9090\n    add r1, r0, #0\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EB0C0\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EA0D0(void) {
    /* Original at 0x021EA0D0 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r0, #0x1e\n    ldr r4, [r5]\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #3\n    bl ov102_021EAE40\n    mov r0, #0x79\n    ldr r1, [r5]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    add r2, r1, #0\n    bl ov102_021EB2EC\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    ldrb r1, [r4, r0]\n    cmp r1, #1\n    bne _021EA106\n    sub r0, #0x10\n    ldr r0, [r4, r0]\n    bl ov102_021EB50C\n    b _021EA10E\n    sub r0, #0x14\n    ldr r0, [r4, r0]\n    bl ov102_021EAF44\n    ldr r0, [r5, #4]\n    bl ov102_021E9090\n    add r1, r0, #0\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EB0C0\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EA128(void) {
    /* Original at 0x021EA128 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    mov r0, #0x1e\n    ldr r1, [r4]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov102_021EAE40\n    add r0, r4, #0\n    bl ov102_021E94A4\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EA144(void) {
    /* Original at 0x021EA144 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r0, [r5, #4]\n    ldr r4, [r5]\n    bl ov102_021E9090\n    add r1, r0, #0\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EB170\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EA164(void) {
    /* Original at 0x021EA164 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r0, #0x1e\n    ldr r4, [r5]\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ov102_021EAE40\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    ldrb r1, [r4, r0]\n    cmp r1, #1\n    bne _021EA198\n    sub r0, #0x10\n    mov r1, #1\n    ldr r0, [r4, r0]\n    add r2, r1, #0\n    bl ov102_021EB2EC\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov102_021EB518\n    b _021EA1AE\n    sub r0, #0x10\n    ldr r0, [r4, r0]\n    mov r1, #1\n    mov r2, #0\n    bl ov102_021EB2EC\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov102_021EAF50\n    add r0, r5, #0\n    bl ov102_021E94A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EA1B8(void) {
    /* Original at 0x021EA1B8 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    mov r0, #0x1f\n    ldr r1, [r4]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    mov r2, #1\n    bl ov102_021EC294\n    add r0, r4, #0\n    bl ov102_021E94A4\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EA1D4(void) {
    /* Original at 0x021EA1D4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    mov r0, #0x1f\n    ldr r1, [r4]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    add r2, r1, #0\n    bl ov102_021EC294\n    add r0, r4, #0\n    bl ov102_021E94A4\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EA1F0(void) {
    /* Original at 0x021EA1F0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    mov r0, #0x1f\n    ldr r1, [r4]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    add r2, r1, #0\n    bl ov102_021EC294\n    add r0, r4, #0\n    bl ov102_021E94A4\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EA20C(void) {
    /* Original at 0x021EA20C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    mov r0, #0x1f\n    ldr r1, [r4]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    mov r2, #0\n    bl ov102_021EC294\n    add r0, r4, #0\n    bl ov102_021E94A4\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EA228(void) {
    /* Original at 0x021EA228 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x1e\n    lsl r1, r1, #4\n    ldr r3, _021EA234 ; =ov102_021EAFEC\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _021EA234: .word ov102_021EAFEC"
    );
    #endif
}

void ov102_021EA238(void) {
    /* Original at 0x021EA238 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x1e\n    lsl r1, r1, #4\n    ldr r3, _021EA244 ; =ov102_021EADF0\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _021EA244: .word ov102_021EADF0"
    );
    #endif
}

void ov102_021EA248(void) {
    /* Original at 0x021EA248 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0x1e\n    lsl r3, r3, #4\n    ldr r0, [r0, r3]\n    ldr r3, _021EA254 ; =ov102_021EAB10\n    bx r3\n    nop\n    _021EA254: .word ov102_021EAB10"
    );
    #endif
}

void ov102_021EA258(void) {
    /* Original at 0x021EA258 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x1e\n    lsl r1, r1, #4\n    ldr r3, _021EA264 ; =ov102_021EB130\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _021EA264: .word ov102_021EB130"
    );
    #endif
}

void ov102_021EA268(void) {
    /* Original at 0x021EA268 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void ov102_021EA26C(void) {
    /* Original at 0x021EA26C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x24]\n    bx lr"
    );
    #endif
}

void ov102_021EA270(void) {
    /* Original at 0x021EA270 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    mov r4, #0x15\n    lsl r4, r4, #4\n    mov r5, #0x24\n    add r6, r0, r4\n    mul r5, r2\n    add r5, r6, r5\n    str r5, [r1]\n    add r5, r4, #0\n    add r5, #0x48\n    add r6, r0, r5\n    mov r5, #0x14\n    mul r5, r2\n    lsl r2, r2, #2\n    add r5, r6, r5\n    add r2, r0, r2\n    add r0, r4, #0\n    str r5, [r1, #8]\n    add r0, #0x70\n    ldr r0, [r2, r0]\n    add r4, #0x78\n    str r0, [r1, #0xc]\n    ldr r0, [r2, r4]\n    str r0, [r1, #0x10]\n    add r0, r1, #0\n    add r0, #0x20\n    strb r3, [r0]\n    mov r0, #0\n    str r0, [r1, #4]\n    str r0, [r1, #0x14]\n    str r0, [r1, #0x18]\n    str r0, [r1, #0x1c]\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void ov102_021EA2B4(void) {
    /* Original at 0x021EA2B4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x20\n    ldr r0, [r0, #0x24]\n    str r0, [sp]\n    lsl r0, r2, #0xc\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x30]\n    str r1, [sp, #4]\n    ldr r1, [sp, #0x34]\n    lsl r2, r3, #0xc\n    str r0, [sp, #0x14]\n    mov r0, #0x23\n    str r2, [sp, #0xc]\n    str r1, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    cmp r1, #2\n    bne _021EA2E2\n    mov r0, #3\n    lsl r0, r0, #0x12\n    add r0, r2, r0\n    str r0, [sp, #0xc]\n    bl OS_DisableInterrupts\n    add r4, r0, #0\n    add r0, sp, #0\n    bl Sprite_Create\n    add r5, r0, #0\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    cmp r5, #0\n    beq _021EA30C\n    add r0, r5, #0\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl Sprite_SetAnimSpeed\n    add r0, r5, #0\n    add sp, #0x20\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EA314(void) {
    /* Original at 0x021EA314 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    mov r1, #0x7d\n    add r5, r0, #0\n    mov r0, #0x23\n    lsl r1, r1, #2\n    add r7, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    str r5, [r4]\n    str r6, [r4, #4]\n    str r7, [r4, #8]\n    ldr r0, [r4, #4]\n    bl ov102_021E8F68\n    mov r1, #0x1f\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    mov r0, #0\n    str r0, [r4, #0x60]\n    str r0, [r4, #0x64]\n    str r0, [r4, #0x68]\n    str r0, [r4, #0x6c]\n    str r0, [r4, #0x70]\n    str r0, [r4, #0x74]\n    mov r0, #0x80\n    mov r1, #0x23\n    bl String_New\n    str r0, [r4, #0x7c]\n    ldr r2, _021EA37C ; =0x0000011B\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x23\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x78]\n    mov r0, #0x23\n    bl ListMenuCursorNew\n    add r1, r4, #0\n    add r1, #0x80\n    str r0, [r1]\n    mov r0, #0x1e\n    mov r1, #0\n    lsl r0, r0, #4\n    strh r1, [r4, r0]\n    add r0, r0, #2\n    strh r1, [r4, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EA37C: .word 0x0000011B"
    );
    #endif
}

void ov102_021EA380(void) {
    /* Original at 0x021EA380 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _021EA390\n    bl DestroyListMenuCursorObj\n    ldr r0, [r4, #0x60]\n    cmp r0, #0\n    beq _021EA39A\n    bl Sprite_Delete\n    ldr r0, [r4, #0x64]\n    cmp r0, #0\n    beq _021EA3A4\n    bl Sprite_Delete\n    ldr r0, [r4, #0x68]\n    cmp r0, #0\n    beq _021EA3AE\n    bl Sprite_Delete\n    ldr r0, [r4, #0x6c]\n    cmp r0, #0\n    beq _021EA3B8\n    bl Sprite_Delete\n    ldr r0, [r4, #0x70]\n    cmp r0, #0\n    beq _021EA3C2\n    bl Sprite_Delete\n    ldr r0, [r4, #0x74]\n    cmp r0, #0\n    beq _021EA3CC\n    bl Sprite_Delete\n    ldr r0, [r4, #0x78]\n    cmp r0, #0\n    beq _021EA3D6\n    bl DestroyMsgData\n    ldr r0, [r4, #0x7c]\n    cmp r0, #0\n    beq _021EA3E0\n    bl String_Delete\n    add r0, r4, #0\n    add r0, #0xc\n    bl RemoveWindow\n    add r0, r4, #0\n    add r0, #0x1c\n    bl RemoveWindow\n    add r0, r4, #0\n    add r0, #0x2c\n    bl RemoveWindow\n    add r0, r4, #0\n    add r0, #0x3c\n    bl RemoveWindow\n    add r0, r4, #0\n    add r0, #0x4c\n    bl RemoveWindow\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EA41C(void) {
    /* Original at 0x021EA41C */
    /* Requires manual decompilation - 246 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    bl ov102_021EA268\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov102_021EA80C\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x23\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    add r2, r6, #0\n    add r3, r1, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x23\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    add r2, r6, #0\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0xbf\n    ldr r3, _021EA63C ; =0x000001E2\n    mvn r0, r0\n    strh r0, [r5, r3]\n    ldrsh r3, [r5, r3]\n    add r0, r6, #0\n    mov r1, #4\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r0, #0x23\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    add r2, r6, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    add r7, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r0, #0x23\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    add r2, r6, #0\n    mov r3, #4\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    add r1, r5, #0\n    lsr r4, r7, #5\n    str r0, [sp, #8]\n    mov r2, #0\n    lsl r0, r4, #0x10\n    str r2, [sp, #0xc]\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    add r1, #0xc\n    mov r3, #3\n    bl AddWindowParameterized\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r2, #4\n    add r1, r5, #0\n    str r2, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    add r1, #0x1c\n    mov r3, #3\n    bl AddWindowParameterized\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r3, #2\n    add r1, r5, #0\n    str r3, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    add r0, #0x6c\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    add r1, #0x2c\n    mov r2, #0\n    bl AddWindowParameterized\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #0x13\n    str r0, [sp, #4]\n    mov r3, #2\n    add r1, r5, #0\n    str r3, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    add r0, #0x6c\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    add r1, #0x3c\n    mov r2, #0\n    bl AddWindowParameterized\n    mov r0, #0xc\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    add r0, #0xa2\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    add r1, r5, #0\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    add r1, #0x4c\n    mov r2, #0\n    mov r3, #0x19\n    bl AddWindowParameterized\n    add r1, r4, #0\n    ldr r0, _021EA640 ; =0x000001EE\n    add r1, #0xa2\n    strh r1, [r5, r0]\n    mov r0, #0x23\n    bl YesNoPrompt_Create\n    mov r1, #0x7a\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r4, #0\n    add r0, #0xde\n    str r0, [sp]\n    mov r1, #0\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0x23\n    str r0, [sp, #0xc]\n    mov r0, #0x26\n    add r2, r6, #0\n    add r3, r1, #0\n    bl GfGfxLoader_LoadCharData\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0xde\n    add r0, #0x90\n    str r1, [r0]\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x23\n    mov r3, #7\n    str r0, [sp, #4]\n    mov r0, #0x26\n    mov r1, #0x19\n    mov r2, #0\n    lsl r3, r3, #6\n    bl GfGfxLoader_GXLoadPal\n    add r1, r4, #0\n    mov r0, #0x7b\n    add r1, #0xe7\n    lsl r0, r0, #2\n    strh r1, [r5, r0]\n    ldr r0, [r5, #4]\n    bl ov102_021E9084\n    lsl r0, r0, #0x18\n    add r2, r4, #0\n    lsr r0, r0, #0x18\n    add r2, #0xe7\n    str r0, [sp]\n    mov r0, #0x23\n    lsl r2, r2, #0x10\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    lsr r2, r2, #0x10\n    mov r3, #0xf\n    bl LoadUserFrameGfx2\n    add r0, r5, #0\n    add r4, #0xe7\n    add r0, #0x2c\n    add r1, r4, #0\n    mov r2, #0xf\n    str r0, [r5, #0x5c]\n    bl sub_0200E948\n    add r0, r5, #0\n    add r0, #0xc\n    bl PutWindowTilemap\n    add r0, r5, #0\n    add r0, #0x1c\n    bl PutWindowTilemap\n    add r0, r5, #0\n    add r0, #0x2c\n    bl PutWindowTilemap\n    add r0, r5, #0\n    add r0, #0x3c\n    bl PutWindowTilemap\n    add r0, r5, #0\n    bl ov102_021EA8C0\n    add r0, r5, #0\n    bl ov102_021EAA3C\n    add r0, r5, #0\n    mov r1, #0\n    bl ov102_021EAE40\n    add r0, r5, #0\n    bl ov102_021EA920\n    ldr r0, [r5, #4]\n    bl ov102_021E8F6C\n    cmp r0, #2\n    bne _021EA636\n    add r0, r5, #0\n    bl ov102_021EAC20\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021EA63C: .word 0x000001E2\n    _021EA640: .word 0x000001EE"
    );
    #endif
}

void ov102_021EA644(void) {
    /* Original at 0x021EA644 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl ov102_021EA268\n    ldr r1, _021EA674 ; =0x04000006\n    ldrh r1, [r1]\n    cmp r1, #0x30\n    bge _021EA666\n    mov r3, #0x1e\n    lsl r3, r3, #4\n    ldrsh r3, [r4, r3]\n    mov r1, #0\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    pop {r4, pc}\n    mov r1, #0\n    mov r2, #3\n    add r3, r1, #0\n    bl BgSetPosTextAndCommit\n    pop {r4, pc}\n    nop\n    _021EA674: .word 0x04000006"
    );
    #endif
}

void ov102_021EA678(void) {
    /* Original at 0x021EA678 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r2, _021EA70C ; =0x0400004A\n    mov r3, #0x3f\n    ldrh r0, [r2]\n    mov r4, #0x1f\n    bic r0, r3\n    orr r0, r4\n    strh r0, [r2]\n    cmp r1, #0\n    beq _021EA6D2\n    sub r0, r2, #2\n    ldrh r4, [r0]\n    mov r1, #0x1a\n    bic r4, r3\n    orr r1, r4\n    strh r1, [r0]\n    ldrh r3, [r0]\n    ldr r1, _021EA710 ; =0xFFFFC0FF\n    and r3, r1\n    mov r1, #0x1b\n    lsl r1, r1, #8\n    orr r1, r3\n    strh r1, [r0]\n    add r0, r2, #0\n    mov r3, #0xff\n    sub r0, #0xa\n    strh r3, [r0]\n    mov r0, #0x30\n    sub r1, r2, #6\n    strh r0, [r1]\n    add r1, r2, #0\n    sub r1, #8\n    strh r3, [r1]\n    sub r1, r2, #4\n    ldr r3, _021EA714 ; =0x0000A0C0\n    sub r2, #0x4a\n    strh r3, [r1]\n    ldr r3, [r2]\n    ldr r1, _021EA718 ; =0xFFFF1FFF\n    lsl r0, r0, #9\n    and r1, r3\n    orr r0, r1\n    str r0, [r2]\n    pop {r3, r4}\n    bx lr\n    sub r0, r2, #2\n    ldrh r1, [r0]\n    bic r1, r3\n    orr r1, r4\n    strh r1, [r0]\n    ldrh r3, [r0]\n    ldr r1, _021EA710 ; =0xFFFFC0FF\n    and r3, r1\n    lsl r1, r4, #8\n    orr r1, r3\n    strh r1, [r0]\n    add r0, r2, #0\n    mov r1, #0\n    sub r0, #0xa\n    strh r1, [r0]\n    sub r0, r2, #6\n    strh r1, [r0]\n    add r0, r2, #0\n    sub r0, #8\n    strh r1, [r0]\n    sub r0, r2, #4\n    strh r1, [r0]\n    sub r2, #0x4a\n    ldr r1, [r2]\n    ldr r0, _021EA718 ; =0xFFFF1FFF\n    and r0, r1\n    str r0, [r2]\n    pop {r3, r4}\n    bx lr\n    _021EA70C: .word 0x0400004A\n    _021EA710: .word 0xFFFFC0FF\n    _021EA714: .word 0x0000A0C0\n    _021EA718: .word 0xFFFF1FFF"
    );
    #endif
}

void ov102_021EA71C(void) {
    /* Original at 0x021EA71C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    mov r0, #0x79\n    mov r3, #0\n    lsl r0, r0, #2\n    strb r3, [r2, r0]\n    add r3, r0, #1\n    strb r1, [r2, r3]\n    add r0, r0, #1\n    ldrb r0, [r2, r0]\n    cmp r0, #1\n    bne _021EA740\n    ldr r1, _021EA748 ; =0x04000048\n    mov r0, #0x3f\n    ldrh r3, [r1]\n    bic r3, r0\n    mov r0, #0x1b\n    orr r0, r3\n    strh r0, [r1]\n    ldr r3, _021EA74C ; =Main_SetHBlankIntrCB\n    ldr r0, _021EA750 ; =ov102_021EA644\n    add r1, r2, #0\n    bx r3\n    _021EA748: .word 0x04000048\n    _021EA74C: .word Main_SetHBlankIntrCB\n    _021EA750: .word ov102_021EA644"
    );
    #endif
}

void ov102_021EA754(void) {
    /* Original at 0x021EA754 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r1, #0x79\n    add r5, r0, #0\n    lsl r1, r1, #2\n    ldrb r2, [r5, r1]\n    cmp r2, #5\n    bls _021EA77C\n    add r1, r1, #1\n    ldrb r1, [r5, r1]\n    cmp r1, #0\n    bne _021EA772\n    mov r1, #1\n    bl ov102_021EA678\n    b _021EA778\n    mov r1, #0\n    bl ov102_021EA678\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, [r5]\n    bl ov102_021EA268\n    add r6, r0, #0\n    ldr r0, _021EA804 ; =0x000001E5\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    beq _021EA792\n    mov r4, #7\n    mvn r4, r4\n    b _021EA794\n    mov r4, #8\n    ldr r3, _021EA808 ; =0x000001E2\n    mov r2, #3\n    ldrsh r0, [r5, r3]\n    add r0, r0, r4\n    strh r0, [r5, r3]\n    sub r0, r3, #2\n    ldrsh r0, [r5, r0]\n    add r1, r0, r4\n    sub r0, r3, #2\n    strh r1, [r5, r0]\n    sub r3, r3, #2\n    ldrsh r3, [r5, r3]\n    add r0, r6, #0\n    mov r1, #0\n    bl BgSetPosTextAndCommit\n    ldr r3, _021EA808 ; =0x000001E2\n    add r0, r6, #0\n    ldrsh r3, [r5, r3]\n    mov r1, #4\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    neg r4, r4\n    lsl r2, r4, #0x10\n    ldr r0, [r5, #0x60]\n    mov r1, #0\n    asr r2, r2, #0x10\n    bl Sprite_OffsetPositionXY\n    lsl r2, r4, #0x10\n    ldr r0, [r5, #0x64]\n    mov r1, #0\n    asr r2, r2, #0x10\n    bl Sprite_OffsetPositionXY\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldrb r1, [r5, r0]\n    add r1, r1, #1\n    strb r1, [r5, r0]\n    add r1, r0, #1\n    ldrb r1, [r5, r1]\n    cmp r1, #0\n    beq _021EA800\n    ldrb r0, [r5, r0]\n    cmp r0, #6\n    bne _021EA800\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetHBlankIntrCB\n    bl HBlankInterruptDisable\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _021EA804: .word 0x000001E5\n    _021EA808: .word 0x000001E2"
    );
    #endif
}

void ov102_021EA80C(void) {
    /* Original at 0x021EA80C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #7\n    lsl r0, r0, #6\n    add r5, r1, #0\n    str r0, [sp]\n    mov r0, #0x23\n    mov r2, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #6\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0x60\n    str r0, [sp]\n    mov r0, #0x23\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0xd\n    mov r2, #4\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    add r0, r5, #0\n    mov r1, #0x10\n    add r2, sp, #8\n    mov r3, #0x23\n    bl GfGfxLoader_GetPlttDataFromOpenNarc\n    add r5, r0, #0\n    ldr r0, [sp, #8]\n    add r1, r4, #0\n    mov r2, #5\n    ldr r0, [r0, #0xc]\n    add r1, #0xa0\n    lsl r2, r2, #6\n    bl MIi_CpuCopy16\n    add r4, #0xa0\n    mov r1, #5\n    add r0, r4, #0\n    lsl r1, r1, #6\n    bl DC_FlushRange\n    add r0, r5, #0\n    bl Heap_Free\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov102_021EA874(void) {
    /* Original at 0x021EA874 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl ov102_021E8F6C\n    cmp r0, #2\n    bne _021EA8A4\n    ldr r0, [r4, #4]\n    bl ov102_021E8F84\n    add r0, r0, #1\n    add r4, #0xa0\n    lsl r5, r0, #5\n    add r0, r4, r5\n    mov r1, #0\n    mov r2, #0x20\n    bl GX_LoadBGPltt\n    add r0, r4, r5\n    mov r1, #0\n    mov r2, #0x20\n    bl GXS_LoadBGPltt\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r0, #0xa0\n    mov r1, #0\n    mov r2, #0x20\n    bl GX_LoadBGPltt\n    add r4, #0xa0\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x20\n    bl GXS_LoadBGPltt\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EA8C0(void) {
    /* Original at 0x021EA8C0 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl ov102_021E8F6C\n    cmp r0, #0\n    beq _021EA8D8\n    cmp r0, #1\n    beq _021EA8F0\n    cmp r0, #2\n    beq _021EA916\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0x68\n    add r0, #0x84\n    strh r1, [r0]\n    add r0, r4, #0\n    mov r1, #0x10\n    add r0, #0x86\n    strh r1, [r0]\n    mov r0, #1\n    add r4, #0x8c\n    str r0, [r4]\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0x30\n    add r0, #0x84\n    strh r1, [r0]\n    add r0, r4, #0\n    mov r2, #0x10\n    add r0, #0x86\n    strh r2, [r0]\n    add r0, r4, #0\n    mov r1, #0xa0\n    add r0, #0x88\n    strh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x8a\n    strh r2, [r0]\n    mov r0, #2\n    add r4, #0x8c\n    str r0, [r4]\n    pop {r4, pc}\n    mov r0, #0\n    add r4, #0x8c\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EA920(void) {
    /* Original at 0x021EA920 */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x54\n    add r4, r0, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _021EA93A\n    add r0, r4, #0\n    add r0, #0x84\n    add r1, sp, #8\n    bl ov102_021EAD5C\n    b _021EA944\n    mov r1, #0x80\n    add r0, sp, #8\n    strh r1, [r0]\n    mov r1, #0x18\n    strh r1, [r0, #2]\n    mov r2, #0\n    ldr r0, [r4]\n    add r1, sp, #0x30\n    add r3, r2, #0\n    bl ov102_021EA270\n    ldr r0, [r4]\n    add r1, sp, #0xc\n    mov r2, #1\n    mov r3, #0\n    bl ov102_021EA270\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r5, sp, #8\n    mov r3, #2\n    ldrsh r2, [r5, r2]\n    ldrsh r3, [r5, r3]\n    ldr r0, [r4]\n    add r1, sp, #0x30\n    bl ov102_021EA2B4\n    str r0, [r4, #0x60]\n    mov r2, #0\n    str r2, [sp]\n    mov r5, #2\n    str r5, [sp, #4]\n    add r3, sp, #8\n    ldrsh r2, [r3, r2]\n    ldrsh r5, [r3, r5]\n    ldr r3, _021EAA38 ; =0x000001E2\n    ldr r0, [r4]\n    ldrsh r3, [r4, r3]\n    add r1, sp, #0xc\n    sub r3, r5, r3\n    bl ov102_021EA2B4\n    mov r1, #1\n    str r0, [r4, #0x64]\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #0\n    mov r1, #1\n    bl ov102_021EB088\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #0x30\n    mov r2, #8\n    mov r3, #0x40\n    bl ov102_021EA2B4\n    mov r1, #0x13\n    str r0, [r4, #0x68]\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #0x30\n    mov r2, #0xf8\n    mov r3, #0x40\n    bl ov102_021EA2B4\n    mov r1, #0x15\n    str r0, [r4, #0x6c]\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #0x30\n    mov r2, #0x1c\n    mov r3, #0x40\n    bl ov102_021EA2B4\n    mov r1, #0x12\n    str r0, [r4, #0x74]\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #0x30\n    mov r2, #0x80\n    mov r3, #0x40\n    bl ov102_021EA2B4\n    str r0, [r4, #0x70]\n    mov r1, #0x17\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #4]\n    bl ov102_021E8F6C\n    cmp r0, #2\n    beq _021EAA34\n    ldr r0, [r4, #0x6c]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x68]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x70]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x74]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #0x54\n    pop {r4, r5, pc}\n    _021EAA38: .word 0x000001E2"
    );
    #endif
}

void ov102_021EAA3C(void) {
    /* Original at 0x021EAA3C */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl ov102_021EA268\n    str r0, [sp]\n    add r0, r5, #0\n    bl ov102_021EA874\n    mov r0, #0\n    add r4, r5, #0\n    add r6, r5, #0\n    add r7, r5, #0\n    str r0, [sp, #4]\n    add r4, #0xc\n    add r6, #0x84\n    add r7, #0x88\n    add r0, r4, #0\n    mov r1, #0xd\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #4]\n    bl ov102_021E8F6C\n    cmp r0, #0\n    beq _021EAA7C\n    cmp r0, #1\n    beq _021EAA9A\n    cmp r0, #2\n    beq _021EAAD4\n    b _021EAAE8\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov102_021EAD70\n    ldr r0, [r5, #4]\n    mov r1, #0\n    bl ov102_021E8F90\n    add r3, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov102_021EAD98\n    b _021EAAE8\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov102_021EAD70\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov102_021EAD70\n    ldr r0, [r5, #4]\n    mov r1, #0\n    bl ov102_021E8F90\n    add r3, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov102_021EAD98\n    ldr r0, [r5, #4]\n    mov r1, #1\n    bl ov102_021E8F90\n    add r3, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov102_021EAD98\n    b _021EAAE8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov102_021EAB30\n    add r1, r5, #0\n    add r1, #0x8c\n    str r0, [r1]\n    add r0, r5, #0\n    bl ov102_021EAC20\n    add r0, r4, #0\n    bl CopyWindowPixelsToVram_TextMode\n    ldr r0, [sp, #4]\n    add r4, #0x10\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #2\n    blt _021EAA60\n    ldr r0, [sp]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [sp]\n    mov r1, #4\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov102_021EAB10(void) {
    /* Original at 0x021EAB10 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "lsl r2, r2, #2\n    add r2, r0, r2\n    mov r0, #0x84\n    ldrsh r0, [r2, r0]\n    sub r0, #0x18\n    strb r0, [r1, #2]\n    ldrb r0, [r1, #2]\n    add r0, #0x60\n    strb r0, [r1, #3]\n    mov r0, #0x86\n    ldrsh r0, [r2, r0]\n    strb r0, [r1]\n    ldrb r0, [r1]\n    add r0, #0x10\n    strb r0, [r1, #1]\n    bx lr"
    );
    #endif
}

void ov102_021EAB30(void) {
    /* Original at 0x021EAB30 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    str r0, [sp, #0x10]\n    str r1, [sp, #0x14]\n    ldr r0, [r0, #4]\n    mov r1, #0x23\n    bl ov102_021E8FA8\n    mov r4, #0\n    str r0, [sp, #0x20]\n    mov r0, #1\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x10]\n    add r0, #0x94\n    str r4, [sp, #0x1c]\n    add r5, r4, #0\n    bl ov102_021EAC44\n    ldr r7, [sp, #0x10]\n    add r0, r7, #0\n    add r6, r7, #0\n    str r0, [sp, #0x24]\n    add r0, #0x94\n    add r6, #0x84\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x20]\n    bl ov102_021EAC7C\n    cmp r0, #3\n    bhi _021EABFC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EAB7C: ; jump table\n    str r4, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021EAC18 ; =0x0003040D\n    ldr r2, [sp, #0x20]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x14]\n    mov r1, #1\n    add r3, r5, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r1, [sp, #0x20]\n    mov r0, #1\n    mov r2, #0\n    bl FontID_String_GetWidth\n    add r5, r5, r0\n    b _021EABFC\n    add r1, r5, #0\n    add r0, r7, #0\n    add r1, #0x32\n    add r0, #0x84\n    strh r1, [r0]\n    add r1, r4, #0\n    add r0, r7, #0\n    add r1, #8\n    add r0, #0x86\n    strh r1, [r0]\n    ldr r0, [sp, #0x14]\n    add r1, r6, #0\n    bl ov102_021EAD70\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x1c]\n    ldr r0, [r0, #4]\n    bl ov102_021E8F90\n    add r3, r0, #0\n    ldr r0, _021EAC1C ; =0x0000FFFF\n    cmp r3, r0\n    beq _021EABE4\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    add r2, r6, #0\n    bl ov102_021EAD98\n    ldr r0, [sp, #0x1c]\n    add r7, r7, #4\n    add r0, r0, #1\n    add r6, r6, #4\n    str r0, [sp, #0x1c]\n    add r5, #0x64\n    b _021EABFC\n    add r4, #0x10\n    mov r5, #0\n    b _021EABFC\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x18]\n    cmp r0, #0\n    bne _021EAB64\n    ldr r0, [sp, #0x10]\n    add r0, #0x94\n    str r0, [sp, #0x10]\n    bl ov102_021EAC70\n    ldr r0, [sp, #0x20]\n    bl String_Delete\n    ldr r0, [sp, #0x1c]\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EAC18: .word 0x0003040D\n    _021EAC1C: .word 0x0000FFFF"
    );
    #endif
}

void ov102_021EAC20(void) {
    /* Original at 0x021EAC20 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl ov102_021E8FB4\n    add r1, r0, #0\n    ldr r0, [r4, #0x74]\n    cmp r0, #0\n    beq _021EAC40\n    lsl r1, r1, #1\n    add r1, #0x1c\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    mov r2, #0x40\n    bl Sprite_SetPositionXY\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EAC44(void) {
    /* Original at 0x021EAC44 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r1, #4]\n    mov r1, #0x23\n    bl ov102_021E8FA8\n    str r0, [r4]\n    bl String_cstr\n    str r0, [r4, #4]\n    ldrh r1, [r0]\n    ldr r0, _021EAC6C ; =0x0000FFFE\n    cmp r1, r0\n    bne _021EAC66\n    mov r0, #1\n    str r0, [r4, #8]\n    pop {r4, pc}\n    mov r0, #0\n    str r0, [r4, #8]\n    pop {r4, pc}\n    _021EAC6C: .word 0x0000FFFE"
    );
    #endif
}

void ov102_021EAC70(void) {
    String_Delete();
}

void ov102_021EAC7C(void) {
    /* Original at 0x021EAC7C */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    str r1, [sp]\n    mov ip, r0\n    ldr r0, [r4, #8]\n    cmp r0, #3\n    bhi _021EAD0C\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021EAC98: ; jump table\n    cmp r0, #0\n    bne _021EACDC\n    ldr r6, _021EAD44 ; =0x0000FFFE\n    mov r3, #0xe\n    mov r0, #1\n    mov r1, #3\n    mov r2, #2\n    add r7, r6, #1\n    lsl r3, r3, #0xc\n    ldr r5, [r4, #4]\n    ldrh r5, [r5]\n    cmp r5, r3\n    beq _021EACC4\n    cmp r5, r6\n    beq _021EACCC\n    cmp r5, r7\n    beq _021EACC8\n    b _021EACD0\n    str r2, [r4, #8]\n    b _021EACD6\n    str r1, [r4, #8]\n    b _021EACD6\n    str r0, [r4, #8]\n    b _021EACD6\n    ldr r5, [r4, #4]\n    add r5, r5, #2\n    str r5, [r4, #4]\n    ldr r5, [r4, #8]\n    cmp r5, #0\n    beq _021EACB2\n    ldr r3, [r4, #4]\n    mov r2, ip\n    sub r3, r3, r2\n    lsr r2, r3, #0x1f\n    add r2, r3, r2\n    asr r2, r2, #1\n    ldr r0, [sp]\n    mov r1, ip\n    add r2, r2, #1\n    bl CopyU16ArrayToStringN\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, ip\n    bl MsgArray_SkipControlCode\n    str r0, [r4, #4]\n    mov r0, #1\n    b _021EAD10\n    mov r0, ip\n    add r0, r0, #2\n    str r0, [r4, #4]\n    mov r0, #2\n    b _021EAD10\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r4, #4]\n    ldrh r2, [r1]\n    mov r1, #0xe\n    lsl r1, r1, #0xc\n    cmp r2, r1\n    beq _021EAD2A\n    ldr r1, _021EAD44 ; =0x0000FFFE\n    cmp r2, r1\n    beq _021EAD36\n    add r1, r1, #1\n    cmp r2, r1\n    beq _021EAD30\n    b _021EAD3C\n    mov r1, #2\n    str r1, [r4, #8]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #3\n    str r1, [r4, #8]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #1\n    str r1, [r4, #8]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    str r1, [r4, #8]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EAD44: .word 0x0000FFFE"
    );
    #endif
}

void ov102_021EAD48(void) {
    /* Original at 0x021EAD48 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    ldrsh r2, [r0, r2]\n    sub r2, #0x30\n    strh r2, [r1]\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    sub r0, #8\n    strh r0, [r1, #2]\n    bx lr"
    );
    #endif
}

void ov102_021EAD5C(void) {
    /* Original at 0x021EAD5C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    ldrsh r2, [r0, r2]\n    add r2, #0x18\n    strh r2, [r1]\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    add r0, #8\n    strh r0, [r1, #2]\n    bx lr"
    );
    #endif
}

void ov102_021EAD70(void) {
    /* Original at 0x021EAD70 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r0, r1, #0\n    add r1, sp, #8\n    bl ov102_021EAD48\n    mov r0, #0x60\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    add r3, sp, #8\n    ldrh r2, [r3]\n    ldrh r3, [r3, #2]\n    add r0, r4, #0\n    mov r1, #0xe\n    bl FillWindowPixelRect\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov102_021EAD98(void) {
    /* Original at 0x021EAD98 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, _021EADE8 ; =0x0000FFFF\n    add r6, r3, #0\n    add r4, r1, #0\n    cmp r6, r0\n    beq _021EADE2\n    add r0, r2, #0\n    add r1, sp, #0x10\n    bl ov102_021EAD48\n    ldr r1, [r5, #0x7c]\n    add r0, r6, #0\n    bl GetECWordIntoStringByIndex\n    ldr r1, [r5, #0x7c]\n    mov r0, #1\n    mov r2, #0\n    bl FontID_String_GetWidth\n    add r3, sp, #0x10\n    mov r0, #2\n    ldrsh r0, [r3, r0]\n    mov r6, #0\n    mov r1, #1\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021EADEC ; =0x0005060E\n    str r0, [sp, #8]\n    str r6, [sp, #0xc]\n    ldrsh r3, [r3, r6]\n    ldr r2, [r5, #0x7c]\n    add r0, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021EADE8: .word 0x0000FFFF\n    _021EADEC: .word 0x0005060E"
    );
    #endif
}

void ov102_021EADF0(void) {
    /* Original at 0x021EADF0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x8c\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov102_021EADF8(void) {
    /* Original at 0x021EADF8 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    bl ov102_021EA268\n    mov r1, #0x14\n    str r1, [sp]\n    mov r1, #0x18\n    str r1, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    mov r1, #0x11\n    str r1, [sp, #0xc]\n    mov r1, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl FillBgTilemapRect\n    ldr r0, [r5, #0x5c]\n    bl ClearWindowTilemapAndCopyToVram\n    add r1, r5, #0\n    add r1, #0x2c\n    lsl r0, r4, #4\n    add r0, r1, r0\n    mov r1, #0x7b\n    str r0, [r5, #0x5c]\n    lsl r1, r1, #2\n    ldrh r1, [r5, r1]\n    mov r2, #0xf\n    bl sub_0200E948\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EAE40(void) {
    /* Original at 0x021EAE40 */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, [r4, #0x5c]\n    add r5, r1, #0\n    mov r1, #9\n    bl FillWindowPixelBuffer\n    cmp r5, #3\n    bhi _021EAF34\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EAE60: ; jump table\n    mov r0, #2\n    mov r1, #0x3c\n    mov r2, #0\n    bl MessageFormat_New_Custom\n    add r5, r0, #0\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    mov r1, #0\n    bl String_New\n    mov r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl BufferPocketName\n    ldr r0, [r4, #4]\n    bl ov102_021E8F70\n    add r1, r0, #0\n    ldr r0, [r4, #0x78]\n    ldr r2, [r4, #0x7c]\n    bl ReadMsgDataIntoString\n    ldr r2, [r4, #0x7c]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl StringExpandPlaceholders\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021EAF40 ; =0x00010209\n    mov r1, #1\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r0, [r4, #0x5c]\n    add r2, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, #0\n    bl MessageFormat_Delete\n    b _021EAF34\n    ldr r0, [r4, #0x78]\n    ldr r2, [r4, #0x7c]\n    mov r1, #6\n    bl ReadMsgDataIntoString\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021EAF40 ; =0x00010209\n    mov r1, #1\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r0, [r4, #0x5c]\n    ldr r2, [r4, #0x7c]\n    bl AddTextPrinterParameterizedWithColor\n    b _021EAF34\n    ldr r0, [r4, #0x78]\n    ldr r2, [r4, #0x7c]\n    mov r1, #7\n    bl ReadMsgDataIntoString\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021EAF40 ; =0x00010209\n    mov r1, #1\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r0, [r4, #0x5c]\n    ldr r2, [r4, #0x7c]\n    bl AddTextPrinterParameterizedWithColor\n    b _021EAF34\n    ldr r0, [r4, #0x78]\n    ldr r2, [r4, #0x7c]\n    mov r1, #8\n    bl ReadMsgDataIntoString\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021EAF40 ; =0x00010209\n    mov r1, #1\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r0, [r4, #0x5c]\n    ldr r2, [r4, #0x7c]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [r4, #0x5c]\n    bl CopyWindowToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021EAF40: .word 0x00010209"
    );
    #endif
}

void ov102_021EAF44(void) {
    ov102_021EB088();
}

void ov102_021EAF50(void) {
    ov102_021EB088();
}

void ov102_021EAF5C(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x60)));
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x64)), r4);
    ov102_021EB088(r5, 1);
}

void ov102_021EAF7C(void) {
    /* Original at 0x021EAF7C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl ov102_021E8F6C\n    cmp r0, #2\n    bne _021EAFAA\n    ldr r0, [r4, #0x68]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x6c]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x74]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x70]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EAFAC(void) {
    /* Original at 0x021EAFAC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl ov102_021E8F6C\n    cmp r0, #2\n    bne _021EAFEA\n    ldr r0, [r4, #0x68]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x6c]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x74]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x70]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x68]\n    mov r1, #0x13\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x6c]\n    mov r1, #0x15\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EAFEC(void) {
    /* Original at 0x021EAFEC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x74]\n    bx lr"
    );
    #endif
}

void ov102_021EAFF0(void) {
    /* Original at 0x021EAFF0 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _021EB022\n    add r2, r4, #0\n    lsl r0, r1, #2\n    add r2, #0x84\n    add r0, r2, r0\n    add r1, sp, #0\n    bl ov102_021EAD5C\n    add r1, sp, #0\n    mov r2, #0\n    ldrsh r0, [r1, r2]\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    b _021EB032\n    mov r0, #2\n    lsl r0, r0, #0x12\n    str r0, [sp, #4]\n    mov r0, #6\n    lsl r0, r0, #0xe\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x60]\n    add r1, sp, #4\n    bl Sprite_SetMatrix\n    ldr r0, _021EB084 ; =0x000001E2\n    ldrsh r1, [r4, r0]\n    mov r0, #0xc0\n    sub r0, r0, r1\n    cmp r0, #0\n    ble _021EB058\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _021EB066\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #8]\n    add r0, r1, r0\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x64]\n    add r1, sp, #4\n    bl Sprite_SetMatrix\n    add r0, r4, #0\n    mov r1, #1\n    bl ov102_021EB088\n    add sp, #0x10\n    pop {r4, pc}\n    _021EB084: .word 0x000001E2"
    );
    #endif
}

void ov102_021EB088(void) {
    /* Original at 0x021EB088 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r2, r0, #0\n    add r2, #0x8c\n    ldr r2, [r2]\n    cmp r2, #0\n    beq _021EB0AA\n    cmp r1, #0\n    ldr r0, [r0, #0x60]\n    beq _021EB0A2\n    mov r1, #0\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, pc}\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, pc}\n    cmp r1, #0\n    ldr r0, [r0, #0x60]\n    beq _021EB0B8\n    mov r1, #0xe\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, pc}\n    mov r1, #0xf\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, pc}"
    );
    #endif
}

void ov102_021EB0C0(void) {
    /* Original at 0x021EB0C0 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    bl ov102_021EA268\n    add r6, r0, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    mov r0, #0\n    ldr r2, _021EB12C ; =0x000001EE\n    str r6, [sp]\n    str r0, [sp, #4]\n    ldrh r0, [r5, r2]\n    mov r1, #0x19\n    mov r3, #0xf\n    str r0, [sp, #8]\n    mov r0, #3\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    strb r1, [r0, #0x10]\n    mov r1, #0xc\n    strb r1, [r0, #0x11]\n    ldrb r1, [r0, #0x12]\n    bic r1, r3\n    add r3, r2, #2\n    ldr r3, [r5, r3]\n    ldr r3, [r3]\n    lsl r3, r3, #0x18\n    lsr r6, r3, #0x18\n    mov r3, #0xf\n    and r3, r6\n    orr r1, r3\n    strb r1, [r0, #0x12]\n    ldrb r1, [r0, #0x12]\n    mov r3, #0xf0\n    bic r1, r3\n    lsl r3, r4, #0x18\n    lsr r3, r3, #0x18\n    lsl r3, r3, #0x1c\n    lsr r3, r3, #0x18\n    orr r1, r3\n    strb r1, [r0, #0x12]\n    sub r0, r2, #6\n    ldr r0, [r5, r0]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _021EB12C: .word 0x000001EE"
    );
    #endif
}

void ov102_021EB130(void) {
    /* Original at 0x021EB130 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _021EB148\n    cmp r0, #2\n    beq _021EB14C\n    b _021EB150\n    mov r4, #1\n    b _021EB156\n    mov r4, #0\n    b _021EB156\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_IsInTouchMode\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EB170(void) {
    /* Original at 0x021EB170 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r2, #0\n    add r4, r1, #0\n    add r0, #0x4c\n    mov r1, #9\n    add r3, r2, #0\n    bl FillWindowPixelRect\n    add r0, r5, #0\n    add r0, #0x80\n    add r5, #0x4c\n    ldr r0, [r0]\n    add r1, r5, #0\n    mov r2, #0\n    lsl r3, r4, #4\n    bl ListMenuUpdateCursorObj\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EB1A4(void) {
    /* Original at 0x021EB1A4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0x23\n    mov r1, #0x68\n    add r7, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    str r5, [r4]\n    str r6, [r4, #4]\n    str r7, [r4, #8]\n    mov r0, #0\n    str r0, [r4, #0xc]\n    str r0, [r4, #0x64]\n    ldr r0, [r4]\n    bl ov102_021EA268\n    mov r2, #0x47\n    str r0, [r4, #0x10]\n    mov r0, #0\n    mov r1, #0x1b\n    lsl r2, r2, #2\n    mov r3, #0x23\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x14]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov102_021EB1E0(void) {
    ov102_021EB29C();
    DestroyMsgData(*((u32*)(r4 + 0x14)));
    Heap_Free(r4);
}

void ov102_021EB1F8(void) {
    /* Original at 0x021EB1F8 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    bl ov102_021EA268\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x23\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #4\n    add r2, r6, #0\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x23\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #5\n    add r2, r6, #0\n    mov r3, #3\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0x23\n    add r3, r5, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0xe\n    mov r2, #0\n    add r3, #0x5c\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    str r0, [r5, #0x54]\n    mov r0, #0x23\n    add r3, r5, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0xf\n    mov r2, #0\n    add r3, #0x60\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    str r0, [r5, #0x58]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov102_021EB46C\n    add r0, r5, #0\n    bl ov102_021EB4D0\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov102_021EB2EC\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #1\n    bl ov102_021EB570\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov102_021EB570\n    add r0, r6, #0\n    mov r1, #3\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov102_021EB29C(void) {
    /* Original at 0x021EB29C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, [r7]\n    bl ov102_021EA268\n    str r0, [sp]\n    ldr r0, [r7, #0xc]\n    cmp r0, #0\n    beq _021EB2B2\n    bl Sprite_Delete\n    add r4, r7, #0\n    mov r6, #0\n    add r4, #0x24\n    add r5, r7, #0\n    add r0, r4, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    bl RemoveWindow\n    ldr r0, [r5, #0x18]\n    bl String_Delete\n    add r6, r6, #1\n    add r4, #0x10\n    add r5, r5, #4\n    cmp r6, #3\n    blt _021EB2BA\n    ldr r0, [r7, #0x58]\n    bl Heap_Free\n    ldr r0, [r7, #0x54]\n    bl Heap_Free\n    ldr r0, [sp]\n    mov r1, #3\n    bl BgCommitTilemapBufferToVram\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov102_021EB2EC(void) {
    /* Original at 0x021EB2EC */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ov102_021EA268\n    mov r1, #0xd\n    str r1, [sp]\n    mov r1, #9\n    str r1, [sp, #4]\n    mov r1, #7\n    str r1, [sp, #8]\n    mov r1, #0x11\n    str r1, [sp, #0xc]\n    mov r1, #0\n    add r2, r1, #0\n    mov r3, #0x17\n    str r0, [sp, #0x1c]\n    bl FillBgTilemapRect\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov102_021EB524\n    cmp r4, #0\n    bne _021EB330\n    ldr r0, [sp, #0x1c]\n    mov r1, #0\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x5c]\n    mov r1, #9\n    str r1, [sp]\n    mov r1, #7\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldrh r2, [r0]\n    mov r3, #0xd\n    lsl r2, r2, #0x15\n    lsr r2, r2, #0x18\n    str r2, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    mov r2, #0x17\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    bl CopyToBgTilemapRect\n    add r4, r5, #0\n    mov r6, #0\n    add r4, #0x24\n    add r0, r4, #0\n    mov r1, #0xe\n    bl FillWindowPixelBuffer\n    ldr r1, [r5, #0x18]\n    mov r0, #4\n    mov r2, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x38\n    sub r3, r1, r0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EB3B0 ; =0x0003010E\n    lsr r7, r3, #0x1f\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r7, r3, r7\n    ldr r2, [r5, #0x18]\n    add r0, r4, #0\n    mov r1, #4\n    asr r3, r7, #1\n    bl AddTextPrinterParameterizedWithColor\n    add r6, r6, #1\n    add r4, #0x10\n    add r5, r5, #4\n    cmp r6, #2\n    blt _021EB366\n    ldr r0, [sp, #0x1c]\n    mov r1, #0\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EB3B0: .word 0x0003010E"
    );
    #endif
}

void ov102_021EB3B4(void) {
    /* Original at 0x021EB3B4 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    bl ov102_021EA268\n    add r6, r0, #0\n    cmp r4, #0\n    bne _021EB3F6\n    mov r1, #0x14\n    str r1, [sp]\n    mov r1, #8\n    str r1, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    mov r1, #0x11\n    str r1, [sp, #0xc]\n    mov r1, #0\n    add r2, r1, #0\n    mov r3, #0x18\n    bl FillBgTilemapRect\n    add r5, #0x44\n    add r0, r5, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r6, #0\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}\n    ldr r2, [r5, #0x5c]\n    mov r1, #8\n    str r1, [sp]\n    mov r1, #4\n    str r1, [sp, #4]\n    add r1, r2, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    mov r3, #7\n    str r3, [sp, #0x10]\n    ldrh r3, [r2]\n    lsl r3, r3, #0x15\n    lsr r3, r3, #0x18\n    str r3, [sp, #0x14]\n    ldrh r2, [r2, #2]\n    mov r3, #0x14\n    lsl r2, r2, #0x15\n    lsr r2, r2, #0x18\n    str r2, [sp, #0x18]\n    mov r2, #0x18\n    bl CopyToBgTilemapRect\n    add r0, r5, #0\n    add r0, #0x44\n    mov r1, #0xe\n    bl FillWindowPixelBuffer\n    ldr r1, [r5, #0x20]\n    mov r0, #4\n    mov r2, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x30\n    sub r3, r1, r0\n    mov r1, #0\n    str r1, [sp]\n    lsr r4, r3, #0x1f\n    add r4, r3, r4\n    ldr r0, _021EB468 ; =0x0003010E\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    ldr r2, [r5, #0x20]\n    add r0, #0x44\n    mov r1, #4\n    asr r3, r4, #1\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}\n    _021EB468: .word 0x0003010E"
    );
    #endif
}

void ov102_021EB46C(void) {
    /* Original at 0x021EB46C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r6, _021EB4CC ; =ov102_021EC808\n    str r0, [sp]\n    str r1, [sp, #4]\n    mov r7, #0\n    add r4, #0x24\n    add r5, r0, #0\n    ldr r0, [sp, #4]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl AddWindow\n    ldr r0, [sp]\n    add r1, r7, #0\n    ldr r0, [r0, #0x14]\n    bl NewString_ReadMsgData\n    str r0, [r5, #0x18]\n    add r7, r7, #1\n    add r6, #8\n    add r4, #0x10\n    add r5, r5, #4\n    cmp r7, #3\n    blo _021EB47E\n    ldr r0, [sp]\n    add r0, #0x24\n    bl PutWindowTilemap\n    ldr r0, [sp]\n    mov r1, #0xe\n    add r0, #0x24\n    bl FillWindowPixelBuffer\n    ldr r0, [sp]\n    add r0, #0x34\n    bl PutWindowTilemap\n    ldr r0, [sp]\n    mov r1, #0xe\n    add r0, #0x34\n    str r0, [sp]\n    bl FillWindowPixelBuffer\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EB4CC: .word ov102_021EC808"
    );
    #endif
}

void ov102_021EB4D0(void) {
    /* Original at 0x021EB4D0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x2c\n    add r4, r0, #0\n    mov r2, #0\n    ldr r0, [r4]\n    add r1, sp, #8\n    add r3, r2, #0\n    bl ov102_021EA270\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #8\n    mov r2, #0xdc\n    mov r3, #0x78\n    bl ov102_021EA2B4\n    str r0, [r4, #0xc]\n    mov r1, #2\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #0x2c\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov102_021EB50C(void) {
    sub_020248F0();
}

void ov102_021EB518(void) {
    sub_020248F0();
}

void ov102_021EB524(void) {
    Sprite_SetDrawFlag();
}

void ov102_021EB530(void) {
    /* Original at 0x021EB530 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp, #8]\n    cmp r1, #1\n    beq _021EB542\n    cmp r1, #2\n    beq _021EB550\n    mov r0, #0x37\n    lsl r0, r0, #0xe\n    str r0, [sp]\n    mov r0, #0x1e\n    lsl r0, r0, #0xe\n    str r0, [sp, #4]\n    b _021EB55C\n    mov r0, #0x37\n    lsl r0, r0, #0xe\n    str r0, [sp]\n    mov r0, #9\n    lsl r0, r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, [r4, #0xc]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldr r0, [r4, #0xc]\n    mov r1, #2\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov102_021EB570(void) {
    /* Original at 0x021EB570 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x1c\n    add r4, r1, #0\n    ldr r1, [r0, #0x60]\n    mov r3, #0xb\n    str r3, [sp]\n    mov r5, #6\n    add r3, r1, #0\n    str r5, [sp, #4]\n    add r3, #0xc\n    mul r5, r2\n    str r3, [sp, #8]\n    mov r3, #0\n    lsl r2, r5, #0x18\n    str r3, [sp, #0xc]\n    lsr r2, r2, #0x18\n    str r2, [sp, #0x10]\n    ldrh r2, [r1]\n    lsl r2, r2, #0x15\n    lsr r2, r2, #0x18\n    str r2, [sp, #0x14]\n    ldrh r1, [r1, #2]\n    lsl r2, r4, #4\n    add r2, r4, r2\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x18]\n    add r2, r2, #2\n    lsl r2, r2, #0x18\n    ldr r0, [r0, #0x10]\n    mov r1, #3\n    lsr r2, r2, #0x18\n    bl CopyToBgTilemapRect\n    add sp, #0x1c\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov102_021EB5B8(void) {
    /* Original at 0x021EB5B8 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021EB5CA\n    cmp r0, #1\n    beq _021EB602\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r4, #0xa]\n    ldr r0, [r4]\n    mov r2, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov102_021EB570\n    ldrh r2, [r4, #0xa]\n    mov r1, #1\n    ldr r0, [r4]\n    eor r1, r2\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    mov r2, #0\n    bl ov102_021EB570\n    ldr r0, [r4]\n    mov r1, #3\n    ldr r0, [r0, #0x10]\n    bl ScheduleBgTilemapBufferTransfer\n    ldrh r0, [r4, #0xc]\n    add r0, r0, #1\n    strh r0, [r4, #0xc]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    strh r0, [r4, #8]\n    ldrh r0, [r4, #8]\n    cmp r0, #4\n    blo _021EB620\n    ldr r0, [r4]\n    mov r1, #0\n    str r1, [r0, #0x64]\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EB624(void) {
    /* Original at 0x021EB624 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    bl ov102_021E8F7C\n    add r4, r0, #0\n    mov r0, #0x23\n    mov r1, #0x1c\n    bl Heap_Alloc\n    add r1, r0, #0\n    str r5, [r1]\n    mov r0, #0\n    str r0, [r1, #4]\n    strh r0, [r1, #8]\n    ldr r0, _021EB650 ; =ov102_021EB5B8\n    mov r2, #1\n    strh r4, [r1, #0xa]\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #0x64]\n    pop {r3, r4, r5, pc}\n    _021EB650: .word ov102_021EB5B8"
    );
    #endif
}

void ov102_021EB654(void) {
    /* Original at 0x021EB654 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x64]\n    cmp r0, #0\n    bne _021EB65E\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov102_021EB664(void) {
    ov102_021EB3B4(1);
    ov102_021EB2EC(r4, 0, 0);
}

void ov102_021EB67C(void) {
    ov102_021EB3B4(0);
    ov102_021EB2EC(r4, 1, 0);
}

void ov102_021EB694(void) {
    /* Original at 0x021EB694 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0x23\n    mov r1, #0x64\n    add r7, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    str r5, [r4]\n    str r6, [r4, #4]\n    str r7, [r4, #8]\n    add r0, r5, #0\n    bl ov102_021EA268\n    str r0, [r4, #0xc]\n    mov r0, #0\n    str r0, [r4, #0x10]\n    str r0, [r4, #0x18]\n    str r0, [r4, #0x5c]\n    ldr r0, [r4, #4]\n    bl ov102_021E8F68\n    str r0, [r4, #0x60]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov102_021EB6C8(void) {
    /* Original at 0x021EB6C8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x5c]\n    cmp r0, #0\n    beq _021EB6D6\n    bl Sprite_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EB6E0(void) {
    /* Original at 0x021EB6E0 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r6, r1, #0\n    bl ov102_021EA268\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x23\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #2\n    add r2, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x23\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #3\n    add r2, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    lsr r2, r2, #5\n    bl ov102_021EB77C\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov102_021EB880\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov102_021EB94C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #1\n    sub r3, r2, #4\n    bl BgSetPosTextAndCommit\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #3\n    mov r3, #0x10\n    bl BgSetPosTextAndCommit\n    add r0, r5, #0\n    bl ov102_021EB950\n    mov r1, #2\n    add r2, r1, #0\n    ldr r0, _021EB778 ; =0x04000050\n    sub r2, #0xc\n    bl G2x_SetBlendBrightness_\n    add r0, r4, #0\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021EB778: .word 0x04000050"
    );
    #endif
}

void ov102_021EB77C(void) {
    /* Original at 0x021EB77C */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    str r1, [sp, #0x18]\n    mov r1, #0x1b\n    add r6, r2, #0\n    add r2, r1, #0\n    str r0, [sp, #0x14]\n    mov r0, #1\n    add r2, #0xff\n    mov r3, #0x23\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0x20]\n    mov r0, #9\n    mov r7, #1\n    str r0, [sp, #0x24]\n    mov r4, #0\n    cmp r4, #0\n    beq _021EB7B6\n    add r0, r4, #0\n    mov r1, #3\n    bl _s32_div_f\n    cmp r1, #0\n    bne _021EB7B6\n    ldr r0, [sp, #0x24]\n    mov r7, #1\n    add r0, r0, #3\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x14]\n    add r1, r4, #0\n    ldr r0, [r0, #8]\n    bl sub_02091C38\n    cmp r0, #0\n    beq _021EB7D4\n    ldr r0, [sp, #0x20]\n    add r1, r4, #0\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r0, _021EB874 ; =0x0001020F\n    str r0, [sp, #0x1c]\n    b _021EB7E2\n    ldr r0, [sp, #0x20]\n    mov r1, #0xc\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r0, _021EB878 ; =0x0003040F\n    str r0, [sp, #0x1c]\n    ldr r0, _021EB87C ; =0x000003EE\n    cmp r6, r0\n    blo _021EB7EC\n    bl GF_AssertFail\n    ldr r0, [sp, #0x24]\n    lsl r3, r7, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #9\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    add r1, sp, #0x28\n    mov r2, #1\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    add r0, sp, #0x28\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    add r1, r5, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x48\n    sub r0, r1, r0\n    lsr r3, r0, #1\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x1c]\n    mov r1, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, sp, #0x28\n    add r2, r5, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, sp, #0x28\n    bl PutWindowTilemap\n    add r0, sp, #0x28\n    bl CopyWindowPixelsToVram_TextMode\n    add r0, r5, #0\n    bl String_Delete\n    add r0, sp, #0x28\n    bl RemoveWindow\n    add r4, r4, #1\n    add r6, #0x12\n    add r7, #0xa\n    cmp r4, #0xc\n    blt _021EB79E\n    ldr r0, [sp, #0x20]\n    bl DestroyMsgData\n    add r0, r6, #0\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EB874: .word 0x0001020F\n    _021EB878: .word 0x0003040F\n    _021EB87C: .word 0x000003EE"
    );
    #endif
}

void ov102_021EB880(void) {
    /* Original at 0x021EB880 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r4, r1, #0\n    mov r1, #0xce\n    add r6, r0, #0\n    lsl r1, r1, #2\n    add r0, r2, #0\n    str r2, [sp, #0x14]\n    cmp r0, r1\n    blo _021EB898\n    bl GF_AssertFail\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #0x19\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x14]\n    add r1, sp, #0x20\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    mov r2, #1\n    mov r3, #0x22\n    bl AddWindowParameterized\n    mov r0, #4\n    mov r1, #0x23\n    bl String_New\n    add r4, r0, #0\n    add r0, sp, #0x20\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    bl ov102_021EC4A4\n    add r7, r0, #0\n    ldr r5, _021EB940 ; =0x00000000\n    beq _021EB91E\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov102_021EC4A8\n    add r0, r5, #0\n    add r1, sp, #0x1c\n    add r2, sp, #0x18\n    bl ov102_021EC4CC\n    ldr r0, [r6, #8]\n    add r1, r5, #0\n    bl sub_02091C74\n    cmp r0, #0\n    beq _021EB8FA\n    ldr r1, _021EB944 ; =0x0001020F\n    b _021EB8FC\n    ldr r1, _021EB948 ; =0x0003040F\n    ldr r0, [sp, #0x18]\n    add r2, r4, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r3, [sp, #0x1c]\n    add r0, sp, #0x20\n    mov r1, #0\n    add r3, r3, #3\n    bl AddTextPrinterParameterizedWithColor\n    add r5, r5, #1\n    cmp r5, r7\n    blo _021EB8D8\n    add r0, sp, #0x20\n    bl CopyWindowPixelsToVram_TextMode\n    add r0, sp, #0x20\n    bl PutWindowTilemap\n    add r0, r4, #0\n    bl String_Delete\n    add r0, sp, #0x20\n    bl RemoveWindow\n    ldr r0, [sp, #0x14]\n    add r0, #0xc8\n    str r0, [sp, #0x14]\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EB940: .word 0x00000000\n    _021EB944: .word 0x0001020F\n    _021EB948: .word 0x0003040F"
    );
    #endif
}

void ov102_021EB94C(void) {
    /* Original at 0x021EB94C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r2, #0\n    bx lr"
    );
    #endif
}

void ov102_021EB950(void) {
    /* Original at 0x021EB950 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x2c\n    add r4, r0, #0\n    mov r2, #0\n    ldr r0, [r4]\n    add r1, sp, #8\n    add r3, r2, #0\n    bl ov102_021EA270\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #8\n    mov r2, #0x30\n    mov r3, #0x40\n    bl ov102_021EA2B4\n    str r0, [r4, #0x5c]\n    mov r1, #4\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x5c]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #0x2c\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov102_021EB98C(void) {
    /* Original at 0x021EB98C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #0\n    ldr r0, [r4, #0x5c]\n    beq _021EB9B8\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #4]\n    bl ov102_021E8F7C\n    cmp r0, #0\n    ldr r0, [r4, #0x5c]\n    bne _021EB9B0\n    mov r1, #4\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, pc}\n    mov r1, #6\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, pc}\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EB9C0(void) {
    /* Original at 0x021EB9C0 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    add r5, r1, #0\n    bl ov102_021E8F7C\n    mov r1, #0\n    str r1, [sp, #0x10]\n    cmp r5, #0xfe\n    bne _021EB9E2\n    mov r0, #0xe0\n    str r0, [sp, #8]\n    mov r0, #0xb0\n    str r0, [sp, #0xc]\n    mov r5, #0x10\n    b _021EBA22\n    cmp r0, #0\n    bne _021EBA0A\n    add r0, r5, #0\n    mov r1, #3\n    bl _u32_div_f\n    mov r0, #0x50\n    mul r0, r1\n    add r0, #0x30\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r1, #3\n    bl _u32_div_f\n    mov r1, #0x18\n    mul r1, r0\n    add r1, #0x40\n    str r1, [sp, #0xc]\n    mov r5, #4\n    b _021EBA22\n    add r0, r5, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    bl ov102_021EC4CC\n    ldr r0, [sp, #4]\n    mov r5, #6\n    add r0, #0x1a\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    add r0, #0x48\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    add r1, sp, #8\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    ldr r0, [sp, #0xc]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x5c]\n    bl Sprite_SetMatrix\n    ldr r0, [r4, #0x5c]\n    add r1, r5, #0\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov102_021EBA44(void) {
    ov102_021EC410(0x10, 2, 0);
}

void ov102_021EBA5C(void) {
    /* Original at 0x021EBA5C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _021EBA6E\n    cmp r0, #1\n    beq _021EBA98\n    b _021EBAA4\n    add r0, r4, #0\n    add r0, #0x1c\n    bl ov102_021EC450\n    cmp r0, #0\n    beq _021EBAA4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #1\n    ldr r1, [r4, #0xc]\n    add r0, #0x3c\n    add r3, r2, #0\n    bl ov102_021EC298\n    ldr r0, [r4, #0x14]\n    add r0, r0, #1\n    str r0, [r4, #0x14]\n    b _021EBAA4\n    add r4, #0x3c\n    add r0, r4, #0\n    bl ov102_021EC2EC\n    add sp, #8\n    pop {r4, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EBAAC(void) {
    ov102_021EC298(0, 6, 1);
}

void ov102_021EBAD0(void) {
    /* Original at 0x021EBAD0 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _021EBAE2\n    cmp r0, #1\n    beq _021EBB0A\n    b _021EBB16\n    add r0, r4, #0\n    add r0, #0x3c\n    bl ov102_021EC2EC\n    cmp r0, #0\n    beq _021EBB16\n    mov r0, #0x10\n    mov r2, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r3, r2, #0\n    add r0, #0x1c\n    mov r1, #2\n    sub r3, #0xa\n    bl ov102_021EC410\n    ldr r0, [r4, #0x14]\n    add r0, r0, #1\n    str r0, [r4, #0x14]\n    b _021EBB16\n    add r4, #0x1c\n    add r0, r4, #0\n    bl ov102_021EC450\n    add sp, #4\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov102_021EBB1C(void) {
    BgSetPosTextAndCommit();
}

void ov102_021EBB2C(void) {
    ov102_021EC410(0x10, 2, 0);
}

void ov102_021EBB44(void) {
    ov102_021EC450();
}

void ov102_021EBB50(void) {
    ov102_021EC37C(0, 0xc, 2, 0x3f, 0x7c);
}

void ov102_021EBB6C(void) {
    /* Original at 0x021EBB6C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r0, #0x1c\n    bl ov102_021EC3AC\n    cmp r0, #0\n    beq _021EBB84\n    mov r0, #1\n    mov r1, #0\n    bl ToggleBgLayer\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov102_021EBB88(void) {
    /* Original at 0x021EBB88 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #0x10\n    str r0, [sp]\n    ldr r0, _021EBBC0 ; =0x04000050\n    mov r1, #2\n    mov r2, #0x3f\n    mov r3, #0\n    bl G2x_SetBlendAlpha_\n    mov r0, #1\n    add r1, r0, #0\n    bl ToggleBgLayer\n    mov r0, #0x7c\n    str r0, [sp]\n    mov r0, #0xc\n    add r4, #0x1c\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x3f\n    mov r3, #0\n    bl ov102_021EC37C\n    add sp, #8\n    pop {r4, pc}\n    _021EBBC0: .word 0x04000050"
    );
    #endif
}

void ov102_021EBBC4(void) {
    ov102_021EC3AC();
}

void ov102_021EBBD0(void) {
    /* Original at 0x021EBBD0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl ov102_021E8F7C\n    cmp r0, #0\n    bne _021EBBE4\n    mov r3, #3\n    mvn r3, r3\n    b _021EBBE6\n    mov r3, #0xfc\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    mov r2, #0\n    bl BgSetPosTextAndCommit\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EBBF4(void) {
    /* Original at 0x021EBBF4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl ov102_021E8F7C\n    cmp r0, #0\n    bne _021EBC0A\n    mov r0, #0xff\n    mvn r0, r0\n    b _021EBC0E\n    mov r0, #1\n    lsl r0, r0, #8\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    add r0, r4, #0\n    ldr r1, [r4, #0xc]\n    add r0, #0x3c\n    mov r2, #1\n    mov r3, #0\n    bl ov102_021EC298\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EBC28(void) {
    ov102_021EC2EC();
}

void ov102_021EBC34(void) {
    /* Original at 0x021EBC34 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0x23\n    mov r1, #0x98\n    add r7, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    str r5, [r4]\n    str r6, [r4, #4]\n    str r7, [r4, #8]\n    add r0, r5, #0\n    bl ov102_021EA268\n    str r0, [r4, #0xc]\n    mov r0, #0x20\n    mov r1, #0x23\n    bl String_New\n    str r0, [r4, #0x3c]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x1a\n    str r0, [sp, #4]\n    mov r0, #0x20\n    str r0, [sp, #8]\n    mov r0, #0xc\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0x10\n    mov r2, #2\n    mov r3, #4\n    bl AddWindowParameterized\n    mov r3, #0\n    str r3, [sp]\n    mov r1, #0xc\n    str r1, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0x20\n    mov r2, #2\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [r4, #0x30]\n    str r0, [r4, #0x34]\n    str r0, [r4, #0x38]\n    ldr r0, [r4, #4]\n    bl ov102_021E8F68\n    add r1, r4, #0\n    add r1, #0x94\n    str r0, [r1]\n    add r0, r4, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov102_021EBCBC(void) {
    /* Original at 0x021EBCBC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x30]\n    cmp r0, #0\n    beq _021EBCCA\n    bl Sprite_Delete\n    ldr r0, [r4, #0x34]\n    cmp r0, #0\n    beq _021EBCD4\n    bl Sprite_Delete\n    ldr r0, [r4, #0x38]\n    cmp r0, #0\n    beq _021EBCDE\n    bl Sprite_Delete\n    ldr r0, [r4, #0x3c]\n    cmp r0, #0\n    beq _021EBCE8\n    bl String_Delete\n    add r0, r4, #0\n    add r0, #0x20\n    bl RemoveWindow\n    add r0, r4, #0\n    add r0, #0x10\n    bl RemoveWindow\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EBD00(void) {
    /* Original at 0x021EBD00 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl ov102_021EA268\n    add r4, r0, #0\n    mov r0, #2\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x23\n    bl BG_ClearCharDataRange\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0xc\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    add r0, r5, #0\n    add r0, #0x10\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x10\n    bl PutWindowTilemap\n    add r0, r5, #0\n    add r0, #0x10\n    bl CopyWindowPixelsToVram_TextMode\n    add r0, r4, #0\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    add r0, r5, #0\n    bl ov102_021EBD68\n    mov r0, #2\n    mov r1, #0\n    bl ToggleBgLayer\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EBD68(void) {
    /* Original at 0x021EBD68 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x2c\n    add r4, r0, #0\n    mov r2, #0\n    ldr r0, [r4]\n    add r1, sp, #8\n    add r3, r2, #0\n    bl ov102_021EA270\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #8\n    mov r2, #0x48\n    mov r3, #0x38\n    bl ov102_021EA2B4\n    str r0, [r4, #0x30]\n    mov r1, #8\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x30]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #8\n    mov r2, #0xf0\n    mov r3, #0x50\n    bl ov102_021EA2B4\n    str r0, [r4, #0x34]\n    mov r1, #0x18\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    add r1, sp, #8\n    mov r2, #0xf0\n    mov r3, #0x80\n    bl ov102_021EA2B4\n    str r0, [r4, #0x38]\n    mov r1, #0x1a\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x38]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #0x2c\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov102_021EBDEC(void) {
    /* Original at 0x021EBDEC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r0, #0x10\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r6, #0\n    bl ov102_021EC11C\n    ldr r0, [r6, #4]\n    bl ov102_021E8FD8\n    add r7, r0, #0\n    cmp r7, #0xa\n    bls _021EBE0C\n    mov r7, #0xa\n    add r0, r6, #0\n    add r0, #0x8c\n    mov r5, #0\n    ldr r4, [r0]\n    cmp r7, #0\n    bls _021EBE30\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov102_021EC13C\n    mov r0, #1\n    tst r0, r5\n    beq _021EBE2A\n    add r4, #0x18\n    add r5, r5, #1\n    cmp r5, r7\n    blo _021EBE18\n    add r6, #0x10\n    add r0, r6, #0\n    bl CopyWindowPixelsToVram_TextMode\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov102_021EBE3C(void) {
    /* Original at 0x021EBE3C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #0x10\n    str r0, [sp]\n    ldr r0, _021EBE7C ; =0x04000050\n    mov r1, #4\n    mov r2, #0x3f\n    mov r3, #0\n    bl G2x_SetBlendAlpha_\n    mov r0, #2\n    mov r1, #1\n    bl ToggleBgLayer\n    add r0, r4, #0\n    mov r3, #0\n    add r0, #0x80\n    str r3, [r0]\n    mov r0, #0x7c\n    str r0, [sp]\n    mov r0, #0xc\n    add r4, #0x40\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0x3f\n    bl ov102_021EC37C\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _021EBE7C: .word 0x04000050"
    );
    #endif
}

void ov102_021EBE80(void) {
    ov102_021EC3AC(0, 1, 1);
}

void ov102_021EBEA4(void) {
    ov102_021EC37C(0xc, 4, 0, 0x3f, 0x7c);
}

void ov102_021EBEC8(void) {
    /* Original at 0x021EBEC8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r1, r0, #0\n    add r1, #0x80\n    ldr r1, [r1]\n    cmp r1, #0\n    bne _021EBEEA\n    add r0, #0x40\n    bl ov102_021EC3AC\n    cmp r0, #0\n    beq _021EBEEE\n    mov r0, #2\n    mov r1, #0\n    bl ToggleBgLayer\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov102_021EBEF4(void) {
    /* Original at 0x021EBEF4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #0\n    ldr r0, [r4, #0x30]\n    beq _021EBF22\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #4]\n    bl ov102_021E9050\n    add r1, r0, #0\n    ldr r0, [r4, #0x34]\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #4]\n    bl ov102_021E9064\n    add r1, r0, #0\n    ldr r0, [r4, #0x38]\n    bl Sprite_SetDrawFlag\n    pop {r4, pc}\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x38]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EBF38(void) {
    /* Original at 0x021EBF38 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _021EBF6A\n    mov r0, #0xe\n    lsl r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #0xb\n    lsl r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x30]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldr r0, [r4, #0x30]\n    mov r1, #0x10\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0xc\n    pop {r3, r4, pc}\n    add r2, r1, #0\n    mov r0, #1\n    and r2, r0\n    mov r0, #0x70\n    mul r0, r2\n    add r0, #0x48\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    lsr r1, r1, #1\n    mov r0, #0x18\n    mul r0, r1\n    add r0, #0x38\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x30]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldr r0, [r4, #0x30]\n    mov r1, #8\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov102_021EBFA0(void) {
    /* Original at 0x021EBFA0 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r4, r1, #0\n    add r6, r0, #0\n    bl ov102_021EC090\n    lsl r0, r4, #1\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r0, #0x90\n    ldr r7, [r0]\n    ldr r0, [sp, #8]\n    add r0, r7, r0\n    str r0, [sp, #0x14]\n    mov r0, #0x18\n    mul r0, r4\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    ldr r1, [sp, #0xc]\n    add r1, r0, r1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x18]\n    cmp r4, #0\n    bge _021EBFE4\n    ldr r0, [sp, #8]\n    add r5, r1, #0\n    neg r0, r0\n    ldr r7, [sp, #0x14]\n    str r0, [sp, #0x10]\n    str r0, [sp, #8]\n    b _021EC004\n    add r0, #0x78\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldr r0, [sp, #8]\n    add r7, #0xa\n    str r0, [sp, #0x10]\n    ldr r0, [r6, #4]\n    bl ov102_021E8FD8\n    ldr r1, [sp, #8]\n    add r1, r1, r7\n    cmp r1, r0\n    bls _021EC004\n    ldr r0, [sp, #0x10]\n    sub r0, r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x10]\n    mov r4, #0\n    cmp r0, #0\n    ble _021EC02A\n    add r0, r6, #0\n    add r1, r7, r4\n    add r2, r5, #0\n    bl ov102_021EC13C\n    mov r0, #1\n    tst r0, r4\n    beq _021EC022\n    add r5, #0x18\n    lsl r0, r5, #0x18\n    lsr r5, r0, #0x18\n    ldr r0, [sp, #0x10]\n    add r4, r4, #1\n    cmp r4, r0\n    blt _021EC00C\n    add r1, r6, #0\n    ldr r0, [sp, #0x18]\n    add r1, #0x8c\n    str r0, [r1]\n    add r1, r6, #0\n    ldr r0, [sp, #0x14]\n    add r1, #0x90\n    str r0, [r1]\n    add r0, r6, #0\n    add r0, #0x10\n    bl CopyWindowPixelsToVram_TextMode\n    ldr r0, [sp, #0xc]\n    mov r2, #2\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    mov r3, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    ldr r1, [r6, #0xc]\n    add r0, #0x60\n    bl ov102_021EC298\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov102_021EC05C(void) {
    /* Original at 0x021EC05C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x60\n    bl ov102_021EC2EC\n    cmp r0, #0\n    beq _021EC08A\n    ldr r0, [r4, #4]\n    bl ov102_021E9050\n    add r1, r0, #0\n    ldr r0, [r4, #0x34]\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #4]\n    bl ov102_021E9064\n    add r1, r0, #0\n    ldr r0, [r4, #0x38]\n    bl Sprite_SetDrawFlag\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EC090(void) {
    /* Original at 0x021EC090 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    cmp r1, #0\n    ble _021EC0B0\n    add r0, #0x8c\n    ldr r0, [r0]\n    add r0, #0x78\n    lsl r0, r0, #0x18\n    lsr r3, r0, #0x18\n    mov r0, #0x18\n    mul r0, r1\n    add r0, r3, r0\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    b _021EC0BE\n    add r0, #0x8c\n    ldr r4, [r0]\n    mov r0, #0x18\n    mul r0, r1\n    add r0, r4, r0\n    lsl r0, r0, #0x18\n    lsr r3, r0, #0x18\n    cmp r3, r4\n    bge _021EC0E2\n    mov r0, #0xd0\n    str r0, [sp]\n    sub r0, r4, r3\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    mov r1, #0\n    lsl r3, r3, #0x10\n    add r5, #0x10\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, r1, #0\n    lsr r3, r3, #0x10\n    bl FillWindowPixelRect\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    mov r0, #0xd0\n    str r0, [sp]\n    add r0, #0x30\n    sub r0, r0, r3\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0\n    lsl r3, r3, #0x10\n    add r0, #0x10\n    add r2, r1, #0\n    lsr r3, r3, #0x10\n    bl FillWindowPixelRect\n    mov r1, #0\n    mov r0, #0xd0\n    str r0, [sp]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    add r5, #0x10\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl FillWindowPixelRect\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EC11C(void) {
    BgSetPosTextAndCommit(2, 0x30, 3, 0);
}

void ov102_021EC13C(void) {
    /* Original at 0x021EC13C */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r2, #0\n    ldr r0, [r5, #4]\n    ldr r2, [r5, #0x3c]\n    add r7, r1, #0\n    bl ov102_021E8FFC\n    cmp r4, #0xf0\n    bhi _021EC178\n    str r4, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021EC208 ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    mov r3, #1\n    add r4, r7, #0\n    and r4, r3\n    mov r3, #0x70\n    ldr r2, [r5, #0x3c]\n    add r0, #0x10\n    mul r3, r4\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    lsl r0, r0, #8\n    sub r6, r0, r4\n    add r0, r5, #0\n    add r0, #0x20\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021EC208 ; =0x00010200\n    add r3, r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    ldr r2, [r5, #0x3c]\n    add r0, #0x20\n    bl AddTextPrinterParameterizedWithColor\n    mov r2, #0\n    mov r0, #1\n    add r1, r7, #0\n    and r1, r0\n    add r7, r1, #0\n    mov r0, #0x70\n    mul r7, r0\n    mov r0, #0x60\n    str r0, [sp]\n    mov r1, #0x10\n    str r1, [sp, #4]\n    lsl r1, r7, #0x10\n    lsr r1, r1, #0x10\n    str r1, [sp, #8]\n    lsl r1, r4, #0x10\n    lsr r1, r1, #0x10\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    ldr r1, [r5, #0x2c]\n    add r0, #0x10\n    add r3, r2, #0\n    bl BlitBitmapRectToWindow\n    mov r1, #0x60\n    lsl r2, r7, #0x10\n    lsl r3, r6, #0x10\n    str r1, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    lsr r2, r2, #0x10\n    str r2, [sp, #8]\n    mov r2, #0\n    sub r0, r0, r6\n    str r2, [sp, #0xc]\n    lsl r0, r0, #0x10\n    str r1, [sp, #0x10]\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    ldr r1, [r5, #0x2c]\n    add r0, #0x10\n    lsr r3, r3, #0x10\n    bl BlitBitmapRectToWindow\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EC208: .word 0x00010200"
    );
    #endif
}

void ov102_021EC20C(void) {
    /* Original at 0x021EC20C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0x23\n    mov r1, #0x30\n    add r7, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    str r5, [r4]\n    str r6, [r4, #4]\n    str r7, [r4, #8]\n    add r0, r5, #0\n    bl ov102_021EA268\n    str r0, [r4, #0xc]\n    add r0, r5, #0\n    bl ov102_021EA26C\n    str r0, [r4, #0x10]\n    mov r0, #0\n    str r0, [r4, #0x14]\n    str r0, [r4, #0x18]\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov102_021EC240(void) {
    Heap_Free();
}

void ov102_021EC248(void) {
    /* Original at 0x021EC248 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x23\n    str r0, [sp, #0xc]\n    add r4, r1, #0\n    ldr r2, [r5, #0xc]\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x23\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0xc]\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r3, #5\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    ldr r0, [r5, #0xc]\n    mov r1, #5\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov102_021EC290(void) {
    /* Original at 0x021EC290 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov102_021EC294(void) {
    /* Original at 0x021EC294 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov102_021EC298(void) {
    /* Original at 0x021EC298 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    str r1, [r4]\n    str r2, [r4, #4]\n    cmp r3, #0\n    bne _021EC2B2\n    add r0, r1, #0\n    add r1, r2, #0\n    bl Bg_GetXpos\n    str r0, [r4, #0xc]\n    mov r0, #0\n    b _021EC2BE\n    add r0, r1, #0\n    add r1, r2, #0\n    bl Bg_GetYpos\n    str r0, [r4, #0xc]\n    mov r0, #3\n    str r0, [r4, #8]\n    ldr r0, [sp, #8]\n    ldr r1, [r4, #0xc]\n    add r2, r1, r0\n    ldr r1, _021EC2E8 ; =0x000001FF\n    lsl r0, r0, #0xc\n    and r1, r2\n    str r1, [r4, #0x10]\n    ldr r1, [r4, #0xc]\n    lsl r1, r1, #0xc\n    str r1, [r4, #0xc]\n    ldr r1, [sp, #0xc]\n    bl _s32_div_f\n    str r0, [r4, #0x14]\n    ldr r0, [sp, #0xc]\n    strh r0, [r4, #0x18]\n    mov r0, #0\n    strh r0, [r4, #0x1a]\n    pop {r4, pc}\n    nop\n    _021EC2E8: .word 0x000001FF"
    );
    #endif
}

void ov102_021EC2EC(void) {
    /* Original at 0x021EC2EC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #0x1a]\n    cmp r0, #0\n    beq _021EC300\n    cmp r0, #1\n    beq _021EC314\n    cmp r0, #2\n    beq _021EC32A\n    b _021EC32E\n    ldr r0, _021EC334 ; =ov102_021EC338\n    add r1, r4, #0\n    mov r2, #0\n    bl ov102_021E93D4\n    str r0, [r4, #0x1c]\n    ldrh r0, [r4, #0x1a]\n    add r0, r0, #1\n    strh r0, [r4, #0x1a]\n    b _021EC32E\n    ldrh r0, [r4, #0x18]\n    cmp r0, #0\n    bne _021EC32E\n    ldr r0, [r4, #0x1c]\n    bl SysTask_Destroy\n    ldrh r0, [r4, #0x1a]\n    add r0, r0, #1\n    strh r0, [r4, #0x1a]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _021EC334: .word ov102_021EC338"
    );
    #endif
}

void ov102_021EC338(void) {
    /* Original at 0x021EC338 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldrh r0, [r4, #0x18]\n    cmp r0, #0\n    beq _021EC366\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x14]\n    add r3, r1, r0\n    str r3, [r4, #0xc]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x18\n    ldr r0, [r4]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    asr r3, r3, #0xc\n    bl BgSetPosTextAndCommit\n    ldrh r0, [r4, #0x18]\n    sub r0, r0, #1\n    strh r0, [r4, #0x18]\n    pop {r4, pc}\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x18\n    ldr r0, [r4]\n    ldr r3, [r4, #0x10]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    bl BgSetPosTextAndCommit\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EC37C(void) {
    /* Original at 0x021EC37C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    str r1, [r4]\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    str r2, [r4, #4]\n    str r1, [r4, #0x14]\n    str r3, [r4, #8]\n    sub r0, r0, r3\n    bl _s32_div_f\n    str r0, [r4, #0x10]\n    ldr r0, [sp, #8]\n    mov r2, #0\n    str r0, [r4, #0xc]\n    ldr r0, _021EC3A8 ; =ov102_021EC3D4\n    add r1, r4, #0\n    str r2, [r4, #0x18]\n    bl ov102_021E93D4\n    str r0, [r4, #0x1c]\n    pop {r4, pc}\n    _021EC3A8: .word ov102_021EC3D4"
    );
    #endif
}

void ov102_021EC3AC(void) {
    /* Original at 0x021EC3AC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    bne _021EC3CC\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    bne _021EC3D0\n    ldr r0, [r4, #0x1c]\n    bl SysTask_Destroy\n    ldr r0, [r4, #0x18]\n    add r0, r0, #1\n    str r0, [r4, #0x18]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EC3D4(void) {
    /* Original at 0x021EC3D4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r2, r1, #0\n    ldr r0, [r2, #0x14]\n    cmp r0, #0\n    beq _021EC3F0\n    ldr r1, [r2, #8]\n    ldr r0, [r2, #0x10]\n    add r0, r1, r0\n    str r0, [r2, #8]\n    asr r3, r0, #3\n    ldr r0, [r2, #0x14]\n    sub r0, r0, #1\n    str r0, [r2, #0x14]\n    b _021EC3F4\n    ldr r0, [r2, #0xc]\n    asr r3, r0, #3\n    cmp r3, #0x10\n    ble _021EC3FA\n    mov r3, #0x10\n    mov r0, #0x10\n    sub r0, r0, r3\n    str r0, [sp]\n    ldr r0, _021EC40C ; =0x04000050\n    ldmia r2!, {r1, r2}\n    bl G2x_SetBlendAlpha_\n    pop {r3, pc}\n    nop\n    _021EC40C: .word 0x04000050"
    );
    #endif
}

void ov102_021EC410(void) {
    /* Original at 0x021EC410 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _021EC448 ; =0x04000050\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl G2x_SetBlendBrightness_\n    ldr r1, [sp, #0x18]\n    str r4, [r5]\n    str r1, [r5, #0x14]\n    lsl r0, r6, #0xc\n    str r0, [r5, #8]\n    lsl r2, r7, #0xc\n    str r2, [r5, #0xc]\n    ldr r0, [r5, #8]\n    sub r0, r2, r0\n    bl _s32_div_f\n    str r0, [r5, #0x10]\n    mov r2, #0\n    ldr r0, _021EC44C ; =ov102_021EC478\n    add r1, r5, #0\n    str r2, [r5, #0x18]\n    bl ov102_021E93D4\n    str r0, [r5, #0x1c]\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EC448: .word 0x04000050\n    _021EC44C: .word ov102_021EC478"
    );
    #endif
}

void ov102_021EC450(void) {
    /* Original at 0x021EC450 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    bne _021EC470\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    bne _021EC474\n    ldr r0, [r4, #0x1c]\n    bl SysTask_Destroy\n    ldr r0, [r4, #0x18]\n    add r0, r0, #1\n    str r0, [r4, #0x18]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov102_021EC478(void) {
    /* Original at 0x021EC478 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r1, #0x14]\n    cmp r0, #0\n    beq _021EC490\n    ldr r2, [r1, #8]\n    ldr r0, [r1, #0x10]\n    add r0, r2, r0\n    str r0, [r1, #8]\n    asr r2, r0, #0xc\n    ldr r0, [r1, #0x14]\n    sub r0, r0, #1\n    str r0, [r1, #0x14]\n    b _021EC494\n    ldr r0, [r1, #0xc]\n    asr r2, r0, #0xc\n    ldr r3, _021EC49C ; =G2x_SetBlendBrightness_\n    ldr r0, _021EC4A0 ; =0x04000050\n    ldr r1, [r1]\n    bx r3\n    _021EC49C: .word G2x_SetBlendBrightness_\n    _021EC4A0: .word 0x04000050"
    );
    #endif
}

u8 ov102_021EC4A4(void) {
    return 0x1b;
}

void ov102_021EC4A8(void) {
    /* Original at 0x021EC4A8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    cmp r4, #0x1b\n    blo _021EC4B6\n    bl GF_AssertFail\n    mov r1, #0xa\n    ldr r2, _021EC4C8 ; =ov102_021EC820\n    mul r1, r4\n    add r1, r2, r1\n    add r0, r5, #0\n    mov r2, #2\n    bl CopyU16ArrayToStringN\n    pop {r3, r4, r5, pc}\n    _021EC4C8: .word ov102_021EC820"
    );
    #endif
}

void ov102_021EC4CC(void) {
    /* Original at 0x021EC4CC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    cmp r5, #0x1b\n    blo _021EC4DC\n    bl GF_AssertFail\n    mov r0, #0xa\n    add r1, r5, #0\n    mul r1, r0\n    ldr r0, _021EC4F0 ; =ov102_021EC820 + 2\n    ldrb r0, [r0, r1]\n    str r0, [r4]\n    ldr r0, _021EC4F4 ; =ov102_021EC820 + 3\n    ldrb r0, [r0, r1]\n    str r0, [r6]\n    pop {r4, r5, r6, pc}\n    _021EC4F0: .word ov102_021EC820 + 2\n    _021EC4F4: .word ov102_021EC820 + 3"
    );
    #endif
}

void ov102_021EC4F8(void) {
    GF_AssertFail(0xa);
}

void ov102_021EC514(void) {
    GF_AssertFail(0xa);
}

void ov102_021EC530(void) {
    GF_AssertFail(0xa);
}

void ov102_021EC54C(void) {
    GF_AssertFail(0xa);
}

void ov102_021EC568(void) {
    GF_AssertFail(0xa);
}

void ov102_021EC584(void) {
    GF_AssertFail(0xa);
}

void ov102_021EC5A0(void) {
    /* Original at 0x021EC5A0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, _021EC5D4 ; =ov102_021EC820\n    mov r3, #0\n    ldrb r2, [r4, #2]\n    cmp r2, r0\n    bhi _021EC5C4\n    add r2, #0x10\n    cmp r0, r2\n    bhs _021EC5C4\n    ldrb r2, [r4, #3]\n    cmp r2, r1\n    bhi _021EC5C4\n    add r2, #0x10\n    cmp r1, r2\n    bhs _021EC5C4\n    add r0, r3, #0\n    pop {r3, r4}\n    bx lr\n    add r3, r3, #1\n    add r4, #0xa\n    cmp r3, #0x1b\n    blo _021EC5A6\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4}\n    bx lr\n    _021EC5D4: .word ov102_021EC820"
    );
    #endif
}
