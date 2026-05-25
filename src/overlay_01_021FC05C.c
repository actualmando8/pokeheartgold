/* Decompiled from asm/overlay_01_021FC05C.s */
#include "global.h"

void ov01_021FC05C(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r0, [r1, #8]
    // add r4, r2, #0
    // bl ov01_021FC14C
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0xa
    // mov r3, #0x13
    // bl ov01_021FC1A4
    // mov r3, #0
    // str r3, [r4, #0x14]
    // mov r0, #0x10
    // str r0, [sp]
    // ldr r0, _021FC0A0 ; =0x04000050
    // mov r1, #4
    // mov r2, #0x29
    // bl G2x_SetBlendAlpha_
    // mov r0, #2
    // mov r1, #0
    // bl SetBgPriority
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _021FC0A4 ; =SEQ_SE_DP_FW230
    // bl PlaySE
    // add sp, #4
    // pop {r3, r4, pc}
    // _021FC0A0: .word 0x04000050
    // _021FC0A4: .word SEQ_SE_DP_FW230
    // TODO: decompile
}



void ov01_021FC0A8(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r0, [r1, #8]
    // add r4, r2, #0
    // bl ov01_021FC14C
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0
    // mov r3, #0xf
    // bl ov01_021FC1A4
    // mov r0, #0
    // str r0, [r4, #0x14]
    // mov r0, #6
    // str r0, [sp]
    // ldr r0, _021FC0D8 ; =0x04000050
    // mov r1, #4
    // mov r2, #0x21
    // mov r3, #0xa
    // bl G2x_SetBlendAlpha_
    // add sp, #4
    // pop {r3, r4, pc}
    // _021FC0D8: .word 0x04000050
    // TODO: decompile
}



void ov01_021FC0DC(void) {
    // bx lr
    // TODO: decompile
}



void ov01_021FC0E0(void) {
    // push {r4, lr}
    // add r4, r2, #0
    // ldr r0, [r4, #0x14]
    // cmp r0, #1
    // beq _021FC106
    // add r0, r4, #0
    // bl ov01_021FC1B4
    // cmp r0, #0
    // beq _021FC0F8
    // mov r0, #1
    // str r0, [r4, #0x14]
    // ldr r1, [r4]
    // mov r0, #0x10
    // sub r0, r0, r1
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _021FC108 ; =0x04000052
    // strh r1, [r0]
    // pop {r4, pc}
    // _021FC108: .word 0x04000052
    // TODO: decompile
}



void ov01_021FC10C(void) {
    // bx lr
    // TODO: decompile
}



void ov01_021FC110(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _021FC11C ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _021FC120 ; =ov01_02208BCC
    // bx r3
    // nop
    // _021FC11C: .word Field3dObjectTaskManager_CreateTask
    // _021FC120: .word ov01_02208BCC
    // TODO: decompile
}



void ov01_021FC124(void) {
}



void ov01_021FC12C(void) {
}



void ov01_021FC138(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _021FC144 ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _021FC148 ; =ov01_02208BE4
    // bx r3
    // nop
    // _021FC144: .word Field3dObjectTaskManager_CreateTask
    // _021FC148: .word ov01_02208BE4
    // TODO: decompile
}



void ov01_021FC14C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // ldr r1, _021FC19C ; =0x00005D5F
    // add r5, r0, #0
    // add r0, sp, #4
    // strh r1, [r0]
    // mov r0, #2
    // add r1, sp, #4
    // add r2, r0, #0
    // mov r3, #0xc2
    // bl BG_LoadPlttData
    // mov r0, #4
    // mov r1, #0x20
    // bl Heap_Alloc
    // mov r1, #0x11
    // mov r2, #0x20
    // add r4, r0, #0
    // bl memset
    // mov r0, #1
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #2
    // add r2, r4, #0
    // mov r3, #0x20
    // bl BG_LoadCharTilesData
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r2, _021FC1A0 ; =0x00006001
    // add r0, r5, #0
    // mov r1, #2
    // bl BgFillTilemapBufferAndCommit
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _021FC19C: .word 0x00005D5F
    // _021FC1A0: .word 0x00006001
    // TODO: decompile
}



void ov01_021FC1A4(void) {
    // str r1, [r0]
    *((u32*)(r0 + 4)) = r1;
    // sub r1, r2, r1
    *((u32*)(r0 + 8)) = r1;
    *((u32*)(r0 + 0x10)) = r3;
    *((u32*)(r0 + 0xc)) = 0;
}



void ov01_021FC1B4(void) {
    // mul r0, r1
    _s32_div_f(*((u32*)(r0 + 0xc)), *((u32*)(r0 + 0x10)));
    // add r0, r0, r1
    // str r0, [r4]
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x10));
}



void ov01_021FC1E0(void) {
}



void ov01_021FC1EC(void) {
    // ldr r3, _021FC1F4 ; =BG_SetMaskColor
    // mov r0, #2
    // ldr r1, _021FC1F8 ; =0x00007FFF
    // bx r3
    // _021FC1F4: .word BG_SetMaskColor
    // _021FC1F8: .word 0x00007FFF
    // TODO: decompile
}



void ov01_021FC1FC(void) {
    // push {r4, lr}
    // sub sp, #8
    // ldr r1, _021FC254 ; =0x00007FFF
    // add r4, r0, #0
    // add r0, sp, #4
    // strh r1, [r0]
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r1, _021FC258 ; =0x0400000C
    // mov r0, #3
    // ldrh r2, [r1]
    // mov r3, #0xc4
    // bic r2, r0
    // mov r0, #3
    // orr r0, r2
    // strh r0, [r1]
    // mov r0, #2
    // add r1, sp, #4
    // add r2, r0, #0
    // bl BG_LoadPlttData
    // mov r1, #2
    // str r1, [sp]
    // ldr r0, [r4, #8]
    // add r2, r1, #0
    // mov r3, #1
    // bl BG_FillCharDataRange
    // ldr r0, [r4, #8]
    // ldr r2, _021FC25C ; =0x00006002
    // mov r1, #2
    // bl BgFillTilemapBufferAndCommit
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // bl ov01_021FC1E0
    // add sp, #8
    // pop {r4, pc}
    // _021FC254: .word 0x00007FFF
    // _021FC258: .word 0x0400000C
    // _021FC25C: .word 0x00006002
    // TODO: decompile
}



void ov01_021FC260(void) {
    // push {r4, lr}
    // sub sp, #8
    // ldr r1, _021FC2B8 ; =0x00007FFF
    // add r4, r0, #0
    // add r0, sp, #4
    // strh r1, [r0]
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r1, _021FC2BC ; =0x0400000E
    // mov r0, #3
    // ldrh r2, [r1]
    // mov r3, #0xc4
    // bic r2, r0
    // mov r0, #3
    // orr r2, r0
    // strh r2, [r1]
    // add r1, sp, #4
    // mov r2, #2
    // bl BG_LoadPlttData
    // mov r2, #2
    // str r2, [sp]
    // ldr r0, [r4, #8]
    // mov r1, #3
    // mov r3, #1
    // bl BG_FillCharDataRange
    // ldr r0, [r4, #8]
    // ldr r2, _021FC2C0 ; =0x00006002
    // mov r1, #3
    // bl BgFillTilemapBufferAndCommit
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // bl ov01_021FC1E0
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _021FC2B8: .word 0x00007FFF
    // _021FC2BC: .word 0x0400000E
    // _021FC2C0: .word 0x00006002
    // TODO: decompile
}



u8 ov01_021FC2C4(void) {
}



void ov01_021FC2C8(void) {
    // push {r3, lr}
    // ldr r0, [r0, #4]
    // ldr r0, [r0, #0xc]
    // bl ov01_021EB31C
    // ldr r3, _021FC2EC ; =ov01_02208BC0
    // mov r2, #0
    // ldr r1, [r3]
    // cmp r0, r1
    // bne _021FC2E0
    // mov r0, #0
    // pop {r3, pc}
    // add r2, r2, #1
    // add r3, r3, #4
    // cmp r2, #3
    // blt _021FC2D6
    // mov r0, #1
    // pop {r3, pc}
    // _021FC2EC: .word ov01_02208BC0
    // TODO: decompile
}



void ov01_021FC2F0(void) {
    ov01_021FC124(*((u32*)r0));
    // str r0, [r4]
    Heap_Free(r4);
}



u8 GetHoneySweetScentWorkSize(void) {
}



void Task_HoneyOrSweetScent(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // add r0, r6, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldrh r1, [r4, #8]
    // cmp r1, #9
    // bls _021FC32A
    // b _021FC4AE
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021FC336: ; jump table
    // add r0, r5, #0
    // bl ov01_021FC2C8
    // cmp r0, #1
    // bne _021FC36C
    // mov r0, #1
    // strh r0, [r4, #8]
    // add r0, r5, #0
    // bl ov01_021FC2C4
    // str r0, [r4, #4]
    // cmp r0, #0
    // beq _021FC39C
    // add r0, r5, #0
    // bl ov01_021FC1EC
    // b _021FC4B2
    // mov r0, #7
    // strh r0, [r4, #8]
    // mov r0, #0x14
    // strh r0, [r4, #0xa]
    // b _021FC4B2
    // add r0, r5, #0
    // bl ov01_021FC110
    // str r0, [r4]
    // mov r0, #2
    // mov r1, #0
    // strh r0, [r4, #8]
    // bl SetBgPriority
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // b _021FC4B2
    // ldr r0, [r4]
    // bl ov01_021FC12C
    // cmp r0, #0
    // bne _021FC39E
    // b _021FC4B2
    // mov r0, #0x16
    // strh r0, [r4, #0xa]
    // mov r0, #3
    // strh r0, [r4, #8]
    // b _021FC4B2
    // mov r0, #0xa
    // ldrsh r0, [r4, r0]
    // sub r0, r0, #1
    // strh r0, [r4, #0xa]
    // ldr r0, [r5, #0x20]
    // ldr r0, [r0]
    // bl MapHeader_HasWildEncounters
    // cmp r0, #0
    // beq _021FC3F4
    // mov r0, #0xa
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bge _021FC4B2
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetXCoord
    // add r6, r0, #0
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetZCoord
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl GetMetatileBehavior
    // add r1, r0, #0
    // add r0, r5, #0
    // bl FieldSystem_CanGenerateStepEncounter
    // cmp r0, #0
    // beq _021FC3EE
    // mov r0, #6
    // strh r0, [r4, #8]
    // b _021FC4B2
    // mov r0, #4
    // strh r0, [r4, #8]
    // b _021FC4B2
    // mov r0, #4
    // strh r0, [r4, #8]
    // b _021FC4B2
    // ldr r0, [r4]
    // bl ov01_021FC124
    // add r0, r5, #0
    // bl ov01_021FC138
    // str r0, [r4]
    // mov r0, #5
    // strh r0, [r4, #8]
    // b _021FC4B2
    // ldr r0, [r4]
    // bl ov01_021FC12C
    // cmp r0, #0
    // beq _021FC4B2
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _021FC4B8 ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // mov r0, #2
    // mov r1, #3
    // bl SetBgPriority
    // mov r0, #8
    // strh r0, [r4, #8]
    // b _021FC4B2
    // bl ov01_021FC2F0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _021FC444
    // add r0, r5, #0
    // bl ov01_021FC260
    // add r0, r5, #0
    // add r1, r6, #0
    // bl FieldSystem_PerformSweetScentEncounterCheck
    // cmp r0, #0
    // bne _021FC4B2
    // bl GF_AssertFail
    // b _021FC4B2
    // mov r0, #0xa
    // ldrsh r1, [r4, r0]
    // sub r1, r1, #1
    // strh r1, [r4, #0xa]
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bge _021FC4B2
    // mov r2, #0
    // ldr r1, _021FC4BC ; =0x000007E3
    // add r0, r6, #0
    // add r3, r2, #0
    // bl QueueScript
    // mov r0, #9
    // strh r0, [r4, #8]
    // b _021FC4B2
    // mov r2, #0
    // ldr r1, _021FC4C0 ; =0x000007E2
    // add r0, r6, #0
    // add r3, r2, #0
    // bl QueueScript
    // mov r0, #9
    // strh r0, [r4, #8]
    // b _021FC4B2
    // bl ov01_021FC2F0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _021FC498
    // add r0, r5, #0
    // bl ov01_021FC1FC
    // ldr r0, [r5, #8]
    // mov r1, #2
    // mov r2, #0
    // bl BgFillTilemapBufferAndCommit
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _021FC4B8: .word 0x04000050
    // _021FC4BC: .word 0x000007E3
    // _021FC4C0: .word 0x000007E2
    // TODO: decompile
}


