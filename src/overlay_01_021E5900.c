/* Decompiled from asm/overlay_01_021E5900.s */
#include "global.h"

void ov01_021E5900(void) {
    DoScheduledBgGpuUpdates(*((u32*)(r0 + 8)));
    GF_RunVramTransferTasks();
    OamManager_ApplyAndResetBuffers();
    sub_0205F1A0(*((u32*)(r4 + 0x3c)));
    ov01_021FA1D0();
    sub_02023910();
}

void ov01_021E5924(void) {
    /* Original at 0x021E5924 */
    /* Requires manual decompilation - 273 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r1, #0\n    mov r1, #0\n    ldr r5, _021E5B9C ; =0x00DCE6A1\n    str r1, [sp, #4]\n    bl OverlayManager_GetArgs\n    ldr r1, [r6]\n    add r4, r0, #0\n    cmp r1, #3\n    bls _021E593E\n    b _021E5B8E\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E594A: ; jump table\n    ldr r1, _021E5BA0 ; =FS_OVERLAY_ID(ds_protect)\n    mov r0, #0\n    bl FS_LoadOverlay\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    ldr r0, _021E5BA4 ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    ldr r0, _021E5BA8 ; =0x04001050\n    strh r1, [r0]\n    ldr r0, _021E5BAC ; =ov01_021E66A8\n    bl DSProt_DetectDummy\n    ldr r1, _021E5BB0 ; =0x000004CF\n    mul r1, r0\n    mov r0, #0\n    add r5, r5, r1\n    bl sub_0200FBDC\n    mov r0, #1\n    bl sub_0200FBDC\n    add r0, r4, #0\n    bl ov01_021E6364\n    ldr r0, _021E5BB4 ; =ov01_021E66D8\n    bl DSProt_DetectNotEmulator\n    cmp r0, #0\n    bne _021E599C\n    mov r1, #1\n    b _021E599E\n    mov r1, #0\n    mov r0, #0x6b\n    mul r0, r1\n    add r5, r5, r0\n    add r0, r4, #0\n    bl sub_02053018\n    mov r0, #0x47\n    mov r1, #8\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, [r4, #0x74]\n    ldr r0, [r0]\n    lsl r0, r0, #8\n    lsr r0, r0, #0x1c\n    beq _021E59F0\n    ldr r0, _021E5BB8 ; =FS_OVERLAY_ID(OVY_2)\n    mov r1, #2\n    bl HandleLoadOverlay\n    add r0, r4, #0\n    bl ov01_021E5EB8\n    cmp r0, #0\n    beq _021E59D4\n    cmp r0, #1\n    beq _021E59DE\n    b _021E59E8\n    ldr r0, _021E5BBC ; =FS_OVERLAY_ID(OVY_4)\n    mov r1, #2\n    bl HandleLoadOverlay\n    b _021E59F0\n    ldr r0, _021E5BC0 ; =FS_OVERLAY_ID(OVY_3)\n    mov r1, #2\n    bl HandleLoadOverlay\n    b _021E59F0\n    ldr r0, _021E5BC0 ; =FS_OVERLAY_ID(OVY_3)\n    mov r1, #2\n    bl HandleLoadOverlay\n    ldr r0, _021E5BC4 ; =ov01_021E66B8\n    bl DSProt_DetectFlashcart\n    ldr r2, [r4, #0x74]\n    add r7, r0, #0\n    ldr r1, _021E5BC8 ; =0x000003A1\n    ldr r2, [r2, #4]\n    mul r7, r1\n    mov r0, #3\n    mov r1, #4\n    bl Heap_Create\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021E5A12\n    bl GF_AssertFail\n    ldr r1, _021E5BA0 ; =FS_OVERLAY_ID(ds_protect)\n    mov r0, #0\n    bl FS_UnloadOverlay\n    mov r0, #4\n    mov r1, #0x28\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x28\n    str r0, [r4, #4]\n    bl MI_CpuFill8\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #8\n    bl Field3dObjectTaskManager_Create\n    ldr r1, [r4, #4]\n    str r0, [r1, #4]\n    ldr r1, _021E5BCC ; =0x00000D69\n    add r0, r5, r7\n    bl _u32_div_f\n    cmp r1, #0\n    beq _021E5A50\n    ldr r0, _021E5BD0 ; =sub_0203E348\n    mov r1, #0\n    mov r2, #0x7b\n    bl SysTask_CreateOnMainQueue\n    bl ov01_021E6028\n    mov r0, #0x80\n    mov r1, #4\n    bl GF_CreateVramTransferManager\n    mov r0, #4\n    add r1, r0, #0\n    bl sub_02023738\n    mov r0, #4\n    bl GF3dRender_InitSimpleManager\n    bl ov01_021E61E0\n    bl ov01_021E6178\n    bl GfGfx_SwapDisplay\n    mov r0, #4\n    bl BgConfig_Alloc\n    str r0, [r4, #8]\n    bl ov01_021E6058\n    mov r0, #0\n    mov r1, #1\n    bl sub_0205B4EC\n    add r0, r4, #0\n    mov r1, #4\n    bl TryStartMapScriptByType\n    ldr r1, _021E5BD4 ; =0x00001079\n    add r0, r5, r7\n    bl _u32_div_f\n    cmp r1, #0\n    beq _021E5AA8\n    ldr r0, _021E5BD0 ; =sub_0203E348\n    ldr r2, _021E5BD8 ; =0x00000315\n    mov r1, #0\n    bl SysTask_CreateOnMainQueue\n    mov r0, #4\n    bl ov02_0224F864\n    mov r1, #0x12\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    b _021E5B8E\n    bl ov01_021E63B8\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r4, #0\n    str r0, [sp]\n    add r3, r4, #0\n    add r1, #0xc0\n    add r3, #0xcc\n    ldr r0, [r4, #0x34]\n    ldr r1, [r1]\n    ldr r2, [r4, #0x54]\n    ldr r3, [r3]\n    bl ov01_021FBA3C\n    add r1, r4, #0\n    add r1, #0xc0\n    ldr r1, [r1]\n    mov r0, #4\n    bl ov01_021F3638\n    add r1, r4, #0\n    add r1, #0x9c\n    str r0, [r1]\n    add r0, r4, #0\n    bl ov01_021E6460\n    add r0, r4, #0\n    bl ov01_021E64A4\n    add r0, r4, #0\n    bl ov01_021E6580\n    ldr r0, [r4, #0xc]\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetWeatherType\n    add r1, r0, #0\n    ldr r0, [r4, #4]\n    ldr r0, [r0, #0xc]\n    bl ov01_021EB260\n    ldr r1, [r4, #0x20]\n    add r0, r4, #0\n    ldr r1, [r1]\n    bl FieldBGM_PlayEffectiveForMapHeader\n    cmp r0, #0\n    bne _021E5B2A\n    add r0, r4, #0\n    add r0, #0xc4\n    ldr r1, [r0]\n    mov r0, #1\n    mvn r0, r0\n    cmp r1, r0\n    bne _021E5B32\n    add r0, r4, #0\n    mov r1, #0\n    bl ov01_021E7F00\n    add r0, r4, #0\n    mov r1, #3\n    bl TryStartMapScriptByType\n    mov r0, #4\n    bl ov01_021FB4C0\n    ldr r1, [r4, #4]\n    str r0, [r1, #0x1c]\n    ldr r0, [r4, #4]\n    ldr r0, [r0, #0x1c]\n    bl ov01_021FB4F4\n    ldr r1, [r4, #4]\n    mov r0, #4\n    ldr r1, [r1, #0x1c]\n    bl ov01_021FB5D4\n    ldr r1, [r4, #4]\n    str r0, [r1, #0x20]\n    b _021E5B8E\n    bl ov01_021EAF18\n    b _021E5B8E\n    bl ov01_021EAF34\n    cmp r0, #0\n    beq _021E5B70\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [r4, #0x6c]\n    bl ov01_021E662C\n    cmp r0, #0\n    bne _021E5B8E\n    mov r2, #0xfa\n    ldr r0, _021E5BDC ; =sub_02096594\n    mov r1, #0\n    lsl r2, r2, #2\n    bl SysTask_CreateOnMainQueue\n    ldr r0, _021E5BDC ; =sub_02096594\n    ldr r2, _021E5BE0 ; =0x00000578\n    mov r1, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    ldr r0, [sp, #4]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E5B9C: .word 0x00DCE6A1\n    _021E5BA0: .word FS_OVERLAY_ID(ds_protect)\n    _021E5BA4: .word 0x04000050\n    _021E5BA8: .word 0x04001050\n    _021E5BAC: .word ov01_021E66A8\n    _021E5BB0: .word 0x000004CF\n    _021E5BB4: .word ov01_021E66D8\n    _021E5BB8: .word FS_OVERLAY_ID(OVY_2)\n    _021E5BBC: .word FS_OVERLAY_ID(OVY_4)\n    _021E5BC0: .word FS_OVERLAY_ID(OVY_3)\n    _021E5BC4: .word ov01_021E66B8\n    _021E5BC8: .word 0x000003A1\n    _021E5BCC: .word 0x00000D69\n    _021E5BD0: .word sub_0203E348\n    _021E5BD4: .word 0x00001079\n    _021E5BD8: .word 0x00000315\n    _021E5BDC: .word sub_02096594\n    _021E5BE0: .word 0x00000578"
    );
    #endif
}

void ov01_021E5BE4(void) {
    /* Original at 0x021E5BE4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OverlayManager_GetArgs\n    add r4, r0, #0\n    bl ov01_021E5ED4\n    cmp r0, #0\n    beq _021E5C04\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov01_021F6830\n    add r0, r4, #0\n    bl ov01_021E5F04\n    add r1, r4, #0\n    add r1, #0xbc\n    ldr r1, [r1]\n    add r0, r4, #0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov01_021E5FC0\n    ldr r0, [r4, #0x6c]\n    cmp r0, #0\n    beq _021E5C1E\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021E5C24(void) {
    /* Original at 0x021E5C24 */
    /* Requires manual decompilation - 249 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    ldr r5, _021E5E7C ; =0x002AAACF\n    bl OverlayManager_GetArgs\n    add r4, r0, #0\n    ldr r0, [r4, #0x2c]\n    bl ov01_021F50F0\n    ldr r0, [r6]\n    cmp r0, #0\n    beq _021E5C4A\n    cmp r0, #1\n    bne _021E5C42\n    b _021E5D82\n    cmp r0, #2\n    bne _021E5C48\n    b _021E5E12\n    b _021E5E76\n    ldr r1, _021E5E80 ; =FS_OVERLAY_ID(ds_protect)\n    mov r0, #0\n    bl FS_LoadOverlay\n    add r0, r4, #0\n    bl sub_02064910\n    ldr r0, _021E5E84 ; =ov01_021E66C8\n    bl DSProt_DetectDummy\n    ldr r1, _021E5E88 ; =0x0000023B\n    mul r1, r0\n    ldr r0, [r4, #0x2c]\n    add r5, r5, r1\n    bl ov01_021F6304\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetXCoord\n    ldr r1, [r4, #0x20]\n    str r0, [r1, #8]\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetZCoord\n    ldr r1, [r4, #0x20]\n    str r0, [r1, #0xc]\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    ldr r1, [r4, #0x20]\n    str r0, [r1, #0x10]\n    add r0, r4, #0\n    add r0, #0x98\n    ldr r0, [r0]\n    bl ov01_021FB418\n    ldr r0, [r4, #0x54]\n    cmp r0, #0\n    bne _021E5C9C\n    bl GF_AssertFail\n    ldr r0, [r4, #0x2c]\n    bl ov01_021F61F8\n    ldr r0, _021E5E8C ; =ov01_021E66DC\n    bl DSProt_DetectNotFlashcart\n    cmp r0, #0\n    bne _021E5CB0\n    mov r1, #1\n    b _021E5CB2\n    mov r1, #0\n    ldr r0, _021E5E90 ; =0x0000018D\n    mul r0, r1\n    add r5, r5, r0\n    ldr r0, [r4, #0x54]\n    bl ov01_021E8A28\n    ldr r0, [r4, #0x54]\n    bl ov01_021E8AEC\n    add r0, r4, #0\n    add r0, #0x58\n    bl ov01_021E8DD4\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov01_02204764\n    add r0, r4, #0\n    add r0, #0xcc\n    ldr r0, [r0]\n    bl ov01_02204634\n    add r0, r4, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    bl ov01_02204278\n    ldr r0, _021E5E94 ; =ov01_021E66E0\n    bl DSProt_DetectNotEmulator\n    cmp r0, #0\n    bne _021E5CF8\n    mov r1, #1\n    b _021E5CFA\n    mov r1, #0\n    mov r0, #0x8b\n    add r7, r1, #0\n    mul r7, r0\n    ldr r0, [r4, #4]\n    ldr r0, [r0, #0x10]\n    bl ov01_021EB1BC\n    ldr r1, _021E5E80 ; =FS_OVERLAY_ID(ds_protect)\n    mov r0, #0\n    bl FS_UnloadOverlay\n    ldr r0, [r4, #4]\n    ldr r0, [r0, #0x10]\n    bl ov01_021EB1DC\n    ldr r0, [r4, #4]\n    mov r1, #0\n    str r1, [r0, #0x10]\n    ldr r1, _021E5E98 ; =0x000008AD\n    add r0, r5, r7\n    bl _u32_div_f\n    cmp r1, #0\n    beq _021E5D34\n    ldr r0, _021E5E9C ; =sub_0203E348\n    ldr r2, _021E5EA0 ; =0x00001EA5\n    mov r1, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r0, [r4, #0x3c]\n    bl sub_0205E4C8\n    ldr r0, [r4, #0x3c]\n    bl ov01_021F9250\n    ldr r0, [r4, #0x3c]\n    bl sub_0205F55C\n    ldr r0, [r4, #0x44]\n    bl ov01_021F13F4\n    add r0, r4, #0\n    bl ov01_02205424\n    ldr r0, [r4, #0x38]\n    bl ov01_021E66A0\n    mov r0, #0\n    str r0, [r4, #0x38]\n    ldr r1, _021E5EA4 ; =0x000004EB\n    add r0, r5, r7\n    bl _u32_div_f\n    cmp r1, #0\n    beq _021E5D72\n    ldr r0, _021E5E9C ; =sub_0203E348\n    ldr r2, _021E5EA8 ; =0x000004DD\n    mov r1, #0\n    bl SysTask_CreateOnMainQueue\n    add r4, #0x9c\n    ldr r0, [r4]\n    bl ov01_021F3660\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _021E5E76\n    ldr r0, [r4, #0x2c]\n    bl ov01_021F62CC\n    cmp r0, #1\n    bne _021E5E76\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    bl ov01_02204084\n    add r0, r4, #0\n    add r0, #0x34\n    bl ov01_021FB944\n    ldr r0, [r4, #0x2c]\n    bl ov01_021F62B0\n    add r0, r4, #0\n    bl ov01_021EAC30\n    add r0, r4, #0\n    add r0, #0x50\n    bl ov01_021EA284\n    ldr r0, [r4, #0x68]\n    bl ov01_021F3D50\n    ldr r0, [r4, #4]\n    ldr r0, [r0, #8]\n    bl FieldDrawMapNameInfo_Destroy\n    ldr r0, [r4, #4]\n    ldr r0, [r0, #0xc]\n    bl ov01_021EB234\n    ldr r0, [r4, #4]\n    ldr r0, [r0, #0x20]\n    bl ov01_021FB610\n    ldr r0, [r4, #4]\n    ldr r0, [r0, #0x1c]\n    bl ov01_021FB4D4\n    ldr r0, [r4, #4]\n    ldr r0, [r0, #0x18]\n    bl sub_020556A8\n    add r0, r4, #0\n    add r0, #0x4c\n    bl ov01_021EA840\n    add r0, r4, #0\n    add r0, #0x48\n    bl ov01_021EA8FC\n    bl ov01_021E619C\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov02_0224F8F4\n    ldr r0, [r4, #8]\n    bl ov01_021E6138\n    add r0, r4, #0\n    bl ov01_021EAF54\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _021E5E76\n    add r0, r4, #0\n    bl ov01_021EAF70\n    cmp r0, #0\n    beq _021E5E76\n    bl ov01_021E6214\n    bl sub_02023778\n    bl GF_DestroyVramTransferManager\n    bl GF3dRender_DeleteSimpleManager\n    ldr r0, [r4, #4]\n    ldr r0, [r0, #4]\n    bl Field3dObjectTaskManager_Delete\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    ldr r0, [r4, #8]\n    bl Heap_Free\n    ldr r0, [r4, #4]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4, #4]\n    mov r0, #4\n    bl Heap_Destroy\n    ldr r0, [r4, #0x74]\n    ldr r0, [r0]\n    lsl r0, r0, #8\n    lsr r0, r0, #0x1c\n    beq _021E5E6E\n    ldr r0, _021E5EAC ; =FS_OVERLAY_ID(OVY_2)\n    bl UnloadOverlayByID\n    ldr r0, _021E5EB0 ; =FS_OVERLAY_ID(OVY_4)\n    bl UnloadOverlayByID\n    ldr r0, _021E5EB4 ; =FS_OVERLAY_ID(OVY_3)\n    bl UnloadOverlayByID\n    bl sub_02005D00\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E5E7C: .word 0x002AAACF\n    _021E5E80: .word FS_OVERLAY_ID(ds_protect)\n    _021E5E84: .word ov01_021E66C8\n    _021E5E88: .word 0x0000023B\n    _021E5E8C: .word ov01_021E66DC\n    _021E5E90: .word 0x0000018D\n    _021E5E94: .word ov01_021E66E0\n    _021E5E98: .word 0x000008AD\n    _021E5E9C: .word sub_0203E348\n    _021E5EA0: .word 0x00001EA5\n    _021E5EA4: .word 0x000004EB\n    _021E5EA8: .word 0x000004DD\n    _021E5EAC: .word FS_OVERLAY_ID(OVY_2)\n    _021E5EB0: .word FS_OVERLAY_ID(OVY_4)\n    _021E5EB4: .word FS_OVERLAY_ID(OVY_3)"
    );
    #endif
}

void ov01_021E5EB8(void) {
    /* Original at 0x021E5EB8 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    bl Save_Gymmick_GetType\n    cmp r0, #0\n    bne _021E5ECE\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021E5ED4(void) {
    /* Original at 0x021E5ED4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetXCoord\n    add r4, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetZCoord\n    ldr r2, [r5, #0x20]\n    ldr r1, [r2, #8]\n    cmp r4, r1\n    bne _021E5EF4\n    ldr r1, [r2, #0xc]\n    cmp r0, r1\n    beq _021E5EFE\n    str r4, [r2, #8]\n    ldr r1, [r5, #0x20]\n    str r0, [r1, #0xc]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021E5F04(void) {
    /* Original at 0x021E5F04 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetXCoord\n    asr r1, r0, #4\n    lsr r1, r1, #0x1b\n    add r1, r0, r1\n    ldr r0, [r5, #0x40]\n    asr r4, r1, #5\n    bl PlayerAvatar_GetZCoord\n    asr r1, r0, #4\n    lsr r1, r1, #0x1b\n    add r1, r0, r1\n    asr r2, r1, #5\n    ldr r0, [r5, #0x30]\n    add r1, r4, #0\n    bl MapMatrix_GetMapHeader\n    add r4, r0, #0\n    ldr r0, [r5, #0x20]\n    ldr r6, [r0]\n    cmp r4, r6\n    bne _021E5F3E\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0xc]\n    bl Save_LocalFieldData_Get\n    add r7, r0, #0\n    ldr r0, [r5, #0x20]\n    add r1, r4, #0\n    str r4, [r0]\n    add r0, r5, #0\n    bl Field_InitMapEvents\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_02053038\n    add r0, r5, #0\n    bl Field_GetNumObjectEvents\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl Field_GetObjectEvents\n    str r0, [sp]\n    ldr r0, [r5, #0x3c]\n    ldr r3, [sp, #4]\n    add r1, r6, #0\n    add r2, r4, #0\n    bl sub_0205E104\n    ldr r1, [r5, #0x20]\n    add r0, r5, #0\n    ldr r1, [r1]\n    bl FieldBGM_GetEffective\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #1\n    bl FieldBGM_TryFadeOut\n    add r0, r5, #0\n    bl Field_InitMapObjectsFromZoneEventData\n    add r0, r7, #0\n    bl LocalFieldData_GetWeatherType\n    add r1, r0, #0\n    ldr r0, [r5, #4]\n    ldr r0, [r0, #0xc]\n    bl FieldWeatherUpdate_UsedFlash\n    add r0, r6, #0\n    bl MapHeader_GetMapSec\n    add r6, r0, #0\n    add r0, r4, #0\n    bl MapHeader_GetMapSec\n    cmp r6, r0\n    beq _021E5FB8\n    add r0, r5, #0\n    bl FieldSystem_DrawMapNameAnimation\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E5FC0(void) {
    /* Original at 0x021E5FC0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl FieldSystem_TaskIsRunning\n    cmp r0, #0\n    bne _021E5FD4\n    add r0, r5, #0\n    bl FieldSystem_StartBugContestTimer\n    ldr r0, [r5, #0x50]\n    bl ov01_021EA2A4\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ov01_022047DC\n    ldr r0, [r5, #0x28]\n    bl ov01_021EAD8C\n    add r0, r5, #0\n    bl ov01_021F3D98\n    mov r0, #1\n    tst r0, r4\n    beq _021E5FFE\n    ldr r0, [r5, #4]\n    ldr r0, [r0, #0x10]\n    bl ov01_021EB114\n    mov r0, #8\n    tst r0, r4\n    beq _021E600E\n    add r0, r5, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    bl ov01_02204350\n    mov r0, #2\n    tst r0, r4\n    beq _021E601A\n    ldr r0, [r5, #0x2c]\n    bl ov01_021F50F0\n    mov r0, #4\n    tst r0, r4\n    beq _021E6026\n    add r0, r5, #0\n    bl ov01_021E6220\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021E6028(void) {
    GfGfx_SetBanks(5);
}

void ov01_021E6048(void) {
    ov01_021E6058();
}

void ov01_021E6050(void) {
    ov01_021E6138();
}

void ov01_021E6058(void) {
    /* Original at 0x021E6058 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x68\n    ldr r5, _021E6128 ; =ov01_022062EC\n    add r3, sp, #0x58\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _021E612C ; =ov01_02206318\n    add r3, sp, #0x3c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #4\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E6130 ; =ov01_022062FC\n    add r3, sp, #0x20\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #2\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #4\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E6134 ; =ov01_02206334\n    add r3, sp, #4\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #3\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #4\n    bl BG_ClearCharDataRange\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0\n    add r1, sp, #0\n    strh r0, [r1]\n    mov r1, #2\n    bl DC_FlushRange\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #2\n    bl GX_LoadBGPltt\n    add sp, #0x68\n    pop {r3, r4, r5, pc}\n    _021E6128: .word ov01_022062EC\n    _021E612C: .word ov01_02206318\n    _021E6130: .word ov01_022062FC\n    _021E6134: .word ov01_02206334"
    );
    #endif
}

void ov01_021E6138(void) {
    GfGfx_EngineATogglePlanes(1, 0);
    GfGfx_EngineATogglePlanes(2, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(8, 0);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 2);
    FreeBgTilemapBuffer(r4, 3);
}

void ov01_021E6178(void) {
    /* Original at 0x021E6178 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x14\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7c\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x1f\n    str r3, [sp, #0xc]\n    mov r2, #4\n    str r2, [sp, #0x10]\n    add r2, r0, #0\n    bl OamManager_Create\n    add sp, #0x14\n    pop {pc}"
    );
    #endif
}

void ov01_021E619C(void) {
    OamManager_Free();
}

void ov01_021E61A4(void) {
    /* Original at 0x021E61A4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0\n    add r4, r0, #0\n    add r2, r1, #0\n    bl ov01_021EAB44\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov01_021EAB58\n    add r0, r4, #0\n    mov r1, #0x1f\n    mov r2, #0\n    bl ov01_021EAB6C\n    mov r1, #2\n    add r0, r4, #0\n    lsl r1, r1, #0xe\n    mov r2, #1\n    mov r3, #0\n    bl ov01_021EAB80\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0x16\n    bl ov01_021EA910\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021E61E0(void) {
    /* Original at 0x021E61E0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _021E6210 ; =ov01_022062DC\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    mov r1, #0x10\n    add r0, r2, #0\n    add r2, r1, #0\n    bl ObjCharTransfer_InitEx\n    mov r0, #0x14\n    mov r1, #4\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    add sp, #0x10\n    pop {r4, pc}\n    _021E6210: .word ov01_022062DC"
    );
    #endif
}

void ov01_021E6214(void) {
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
}

void ov01_021E6220(void) {
    /* Original at 0x021E6220 */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x88\n    add r4, r0, #0\n    bl Thunk_G3X_Reset\n    bl Camera_PushLookAtToNNSGlb\n    ldr r0, [r4, #0x2c]\n    ldr r1, [r4, #0x48]\n    bl ov01_021F61A8\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    ldr r1, [r4, #0x34]\n    bl ov01_021F3C9C\n    ldr r1, [r4, #0x24]\n    add r0, sp, #0\n    bl Camera_GetAngle\n    add r2, sp, #0\n    ldrh r2, [r2]\n    mov r0, #0x47\n    lsl r0, r0, #2\n    neg r2, r2\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    asr r2, r2, #4\n    lsl r2, r2, #1\n    add r2, r2, #1\n    lsl r3, r2, #1\n    ldr r2, _021E630C ; =FX_SinCosTable_\n    ldr r0, [r4, r0]\n    ldrsh r2, [r2, r3]\n    lsl r0, r0, #0xc\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r2, r2, #0xc\n    ldr r6, _021E6310 ; =NNS_G3dGlb + 0x8\n    orr r2, r0\n    add r5, sp, #0x48\n    mov r3, #8\n    ldmia r6!, {r0, r1}\n    stmia r5!, {r0, r1}\n    sub r3, r3, #1\n    bne _021E6286\n    add r6, sp, #0x48\n    add r5, sp, #8\n    mov r3, #8\n    ldmia r6!, {r0, r1}\n    stmia r5!, {r0, r1}\n    sub r3, r3, #1\n    bne _021E6294\n    ldr r0, [sp, #0x30]\n    asr r3, r2, #0x1f\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r3, #2\n    mov r5, #0\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    adc r1, r5\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    ldr r2, [sp, #0x40]\n    orr r1, r0\n    add r0, r2, r1\n    str r0, [sp, #0x40]\n    ldr r1, _021E6310 ; =NNS_G3dGlb + 0x8\n    add r0, sp, #8\n    mov r2, #0x40\n    bl MIi_CpuCopyFast\n    ldr r1, _021E6314 ; =NNS_G3dGlb + 0x80\n    mov r0, #0x50\n    ldr r2, [r1, #0x7c]\n    bic r2, r0\n    str r2, [r1, #0x7c]\n    bl NNS_G3dGlbFlushP\n    ldr r0, [r4, #0x44]\n    bl ov01_021F13EC\n    bl sub_020237B0\n    ldr r1, _021E6310 ; =NNS_G3dGlb + 0x8\n    add r0, sp, #0x48\n    mov r2, #0x40\n    bl MIi_CpuCopyFast\n    ldr r1, _021E6314 ; =NNS_G3dGlb + 0x80\n    mov r0, #0x50\n    ldr r2, [r1, #0x7c]\n    bic r2, r0\n    str r2, [r1, #0x7c]\n    bl NNS_G3dGlbFlushP\n    ldr r0, [r4, #4]\n    ldr r0, [r0, #4]\n    bl Field3dObjectTaskManager_RunDrawTasks\n    ldr r1, _021E6318 ; =gG3dDepthBufferingMode\n    add r0, r5, #0\n    ldr r1, [r1]\n    bl RequestSwap3DBuffers\n    add sp, #0x88\n    pop {r4, r5, r6, pc}\n    _021E630C: .word FX_SinCosTable_\n    _021E6310: .word NNS_G3dGlb + 0x8\n    _021E6314: .word NNS_G3dGlb + 0x80\n    _021E6318: .word gG3dDepthBufferingMode"
    );
    #endif
}

void ov01_021E631C(void) {
    /* Original at 0x021E631C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #1\n    bne _021E6330\n    add r1, r0, #0\n    add r1, #0xbc\n    ldr r2, [r1]\n    mov r1, #4\n    orr r1, r2\n    add r0, #0xbc\n    str r1, [r0]\n    bx lr\n    add r1, r0, #0\n    add r1, #0xbc\n    ldr r2, [r1]\n    mov r1, #4\n    bic r2, r1\n    add r0, #0xbc\n    str r2, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021E6340(void) {
    /* Original at 0x021E6340 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #1\n    bne _021E6354\n    add r1, r0, #0\n    add r1, #0xbc\n    ldr r2, [r1]\n    mov r1, #1\n    orr r1, r2\n    add r0, #0xbc\n    str r1, [r0]\n    bx lr\n    add r1, r0, #0\n    add r1, #0xbc\n    ldr r2, [r1]\n    mov r1, #1\n    bic r2, r1\n    add r0, #0xbc\n    str r2, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021E6364(void) {
    /* Original at 0x021E6364 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xf\n    add r0, #0xbc\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021E636C(void) {
    /* Original at 0x021E636C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    cmp r0, #1\n    bne _021E638E\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    add sp, #0xc\n    pop {pc}\n    cmp r0, #0\n    bne _021E63AE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    add sp, #0xc\n    pop {pc}\n    bl GF_AssertFail\n    add sp, #0xc\n    pop {pc}"
    );
    #endif
}

void ov01_021E63B8(void) {
    /* Original at 0x021E63B8 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _021E6454 ; =gG3dDepthBufferingMode\n    ldr r0, [r0]\n    lsl r1, r0, #1\n    ldr r0, _021E6458 ; =0x04000540\n    str r1, [r0]\n    ldr r0, [r5, #0x20]\n    ldr r0, [r0]\n    bl MapHeader_GetAreaDataBank\n    bl ov01_021FB888\n    str r0, [r5, #0x34]\n    bl ov01_021FB934\n    add r3, r0, #0\n    ldr r1, _021E645C ; =0x00000226\n    mov r0, #4\n    mov r2, #0x80\n    bl ov01_02204004\n    add r1, r5, #0\n    add r1, #0xc0\n    str r0, [r1]\n    ldr r0, [r5, #0x20]\n    ldr r0, [r0]\n    bl MapHeader_GetMoveModelBank\n    add r4, r0, #0\n    ldr r0, [r5, #0x38]\n    cmp r0, #0\n    beq _021E6406\n    bl GF_AssertFail\n    mov r0, #4\n    add r1, r4, #0\n    bl ov01_021E6644\n    str r0, [r5, #0x38]\n    mov r0, #4\n    bl ov01_022041C4\n    add r1, r5, #0\n    add r1, #0xc8\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    bl ov01_0220460C\n    add r1, r5, #0\n    add r1, #0xcc\n    str r0, [r1]\n    mov r0, #4\n    bl ov01_02204744\n    mov r1, #0x41\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r0, [r5, #0x34]\n    bl ov01_021FB904\n    add r1, r5, #0\n    add r1, #0xc8\n    ldr r1, [r1]\n    bl ov01_021E87E4\n    str r0, [r5, #0x54]\n    bl ov01_021E8DB4\n    str r0, [r5, #0x58]\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6454: .word gG3dDepthBufferingMode\n    _021E6458: .word 0x04000540\n    _021E645C: .word 0x00000226"
    );
    #endif
}

void ov01_021E6460(void) {
    /* Original at 0x021E6460 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r0, #0xcc\n    ldr r0, [r0]\n    add r2, r4, #0\n    str r0, [sp]\n    ldr r0, [r4, #0x64]\n    add r2, #0xc0\n    str r0, [sp, #4]\n    ldr r0, [r4, #0xc]\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x30]\n    ldr r1, [r4, #0x34]\n    ldr r2, [r2]\n    ldr r3, [r4, #0x54]\n    bl ov01_021F6020\n    str r0, [r4, #0x2c]\n    mov r0, #8\n    mov r1, #4\n    bl ov01_021FB3A4\n    add r1, r4, #0\n    add r1, #0x98\n    str r0, [r1]\n    ldr r2, [r4, #0x20]\n    ldr r0, [r4, #0x2c]\n    ldr r1, [r2, #8]\n    ldr r2, [r2, #0xc]\n    bl ov01_021F6118\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021E64A4(void) {
    /* Original at 0x021E64A4 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    mov r1, #0x17\n    mov r2, #4\n    add r5, r0, #0\n    bl ov01_021F1348\n    mov r1, #0x50\n    str r0, [r5, #0x44]\n    bl ov01_021F1384\n    mov r2, #0x20\n    str r2, [sp]\n    mov r0, #5\n    str r2, [sp, #4]\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    lsl r0, r2, #6\n    str r0, [sp, #0xc]\n    lsl r0, r2, #0xb\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x44]\n    mov r1, #4\n    add r3, r2, #0\n    bl ov01_021F1390\n    add r0, r5, #0\n    mov r1, #4\n    bl sub_02055680\n    ldr r1, [r5, #4]\n    str r0, [r1, #0x18]\n    ldr r0, [r5, #0x70]\n    cmp r0, #2\n    bne _021E64F2\n    ldr r0, [r5, #0x3c]\n    mov r1, #0\n    bl sub_0205F5F8\n    ldr r0, [r5, #0x44]\n    ldr r1, _021E657C ; =ov01_02208BFC\n    bl ov01_021F13D0\n    ldr r0, [r5, #0x70]\n    mov r4, #0xa\n    cmp r0, #2\n    bne _021E6504\n    mov r4, #5\n    ldr r0, [r5, #0x38]\n    bl ov01_021E669C\n    add r6, r0, #0\n    ldr r0, [r5, #0x38]\n    bl ov01_021E6698\n    str r4, [sp]\n    add r3, r0, #0\n    ldr r0, [r5, #0x3c]\n    mov r1, #0x20\n    add r2, r6, #3\n    bl ov01_021F91F8\n    ldr r0, [r5, #0x3c]\n    bl ov01_022057DC\n    ldr r0, [r5, #0x44]\n    bl ov01_021FD3F8\n    ldr r0, [r5, #0x40]\n    bl sub_0205C46C\n    add r0, r5, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    cmp r0, #0\n    ldr r0, [r5, #0x3c]\n    beq _021E6544\n    bl sub_0205E580\n    b _021E654E\n    bl sub_0205E520\n    add r0, r5, #0\n    bl ov01_022059AC\n    bl sub_02057FA4\n    add r0, r5, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    cmp r0, #0\n    ldr r0, [r5, #0x3c]\n    beq _021E6566\n    mov r1, #2\n    bl MapObjectManager_ClearFlagsBits\n    b _021E656A\n    bl sub_0205F568\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetPositionVector\n    ldr r1, [r5, #0x2c]\n    bl ov01_021F62E8\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021E657C: .word ov01_02208BFC"
    );
    #endif
}

void ov01_021E6580(void) {
    /* Original at 0x021E6580 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    bl GfGfx_BothDispOn\n    bl ov01_021EA8E0\n    str r0, [r4, #0x48]\n    bl ov01_021E61A4\n    bl ov01_021EA824\n    str r0, [r4, #0x4c]\n    ldr r0, [r4, #0xc]\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetCameraType\n    add r5, r0, #0\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetPositionVector\n    add r1, r4, #0\n    add r2, r5, #0\n    mov r3, #1\n    bl ov01_021EABA8\n    ldr r0, [r4, #0x34]\n    bl ov01_021FBA14\n    add r5, r0, #0\n    cmp r5, #3\n    bne _021E65D8\n    ldr r0, [r4, #0xc]\n    bl Save_VarsFlags_Get\n    bl CheckFlag96A\n    cmp r0, #0\n    beq _021E65D8\n    mov r5, #4\n    ldr r0, [r4, #0x48]\n    add r1, r5, #0\n    bl ov01_021EA220\n    str r0, [r4, #0x50]\n    add r0, r4, #0\n    bl ov01_021EB1F4\n    ldr r1, [r4, #4]\n    str r0, [r1, #0xc]\n    ldr r0, [r4, #8]\n    bl FieldDrawMapNameInfo_Create\n    ldr r1, [r4, #4]\n    str r0, [r1, #8]\n    mov r0, #4\n    bl ov01_021F3D38\n    str r0, [r4, #0x68]\n    bl ov01_021EAFD4\n    ldr r1, [r4, #4]\n    str r0, [r1, #0x10]\n    ldr r0, [r4, #0x34]\n    bl ov01_021FB9CC\n    add r1, r0, #0\n    ldr r0, [r4, #4]\n    ldr r0, [r0, #0x10]\n    bl ov01_021EB00C\n    add r0, r4, #0\n    bl sub_020648EC\n    ldr r0, _021E6628 ; =ov01_021E5900\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6628: .word ov01_021E5900"
    );
    #endif
}

void ov01_021E662C(void) {
    /* Original at 0x021E662C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl CARD_SpiWaitGetStatus\n    bl CARD_SpiWaitGetStatus\n    cmp r0, #0xaa\n    bne _021E663E\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021E6644(void) {
    /* Original at 0x021E6644 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    mov r1, #0x64\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r0, #0x5c\n    add r1, r6, #0\n    add r2, r5, #0\n    bl AllocAtEndAndReadWholeNarcMemberByIdPair\n    ldr r1, _021E6694 ; =0x0000FFFF\n    mov r2, #0\n    add r3, r4, #0\n    add r2, r2, #1\n    str r1, [r3, #4]\n    add r3, r3, #4\n    cmp r2, #0x18\n    blt _021E6662\n    ldr r5, _021E6694 ; =0x0000FFFF\n    mov r3, #0\n    add r1, r0, #0\n    add r2, r4, #0\n    ldrh r6, [r1]\n    str r6, [r2, #4]\n    ldrh r6, [r1]\n    cmp r6, r5\n    beq _021E6688\n    add r3, r3, #1\n    add r1, r1, #2\n    add r2, r2, #4\n    cmp r3, #0x18\n    blt _021E6674\n    strh r3, [r4]\n    bl Heap_Free\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _021E6694: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021E6698(void) {
    /* Original at 0x021E6698 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r0, #4\n    bx lr"
    );
    #endif
}

void ov01_021E669C(void) {
    /* Original at 0x021E669C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021E66A0(void) {
    Heap_Free();
}

void ov01_021E66A8(void) {
    /* Original at 0x021E66A8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021E66B4 ; =Heap_AllocAtEnd\n    mov r1, #0xfa\n    mov r0, #3\n    lsl r1, r1, #2\n    bx r3\n    nop\n    _021E66B4: .word Heap_AllocAtEnd"
    );
    #endif
}

void ov01_021E66B8(void) {
    /* Original at 0x021E66B8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021E66C4 ; =Heap_AllocAtEnd\n    mov r1, #0xfa\n    mov r0, #3\n    lsl r1, r1, #2\n    bx r3\n    nop\n    _021E66C4: .word Heap_AllocAtEnd"
    );
    #endif
}

void ov01_021E66C8(void) {
    /* Original at 0x021E66C8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021E66D4 ; =Heap_AllocAtEnd\n    mov r1, #0xfa\n    mov r0, #3\n    lsl r1, r1, #2\n    bx r3\n    nop\n    _021E66D4: .word Heap_AllocAtEnd"
    );
    #endif
}

void ov01_021E66D8(void) {
    /* Original at 0x021E66D8 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021E66DC(void) {
    /* Original at 0x021E66DC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021E66E0(void) {
    /* Original at 0x021E66E0 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}
