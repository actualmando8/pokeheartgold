/* Decompiled from asm/overlay_83.s */
#include "global.h"

void ov83_0223DD60(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, _0223DE40 ; =FS_OVERLAY_ID(OVY_80)
    // mov r1, #2
    // bl HandleLoadOverlay
    // bl ov83_0223F1C8
    // mov r0, #3
    // mov r1, #0x6b
    // lsl r2, r0, #0x10
    // bl Heap_Create
    // ldr r1, _0223DE44 ; =0x0000086C
    // add r0, r4, #0
    // mov r2, #0x6b
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _0223DE44 ; =0x0000086C
    // mov r1, #0
    // add r5, r0, #0
    // bl memset
    // mov r0, #0x6b
    // bl BgConfig_Alloc
    // str r0, [r5, #0x4c]
    // add r0, r4, #0
    // str r4, [r5]
    // bl OverlayManager_GetArgs
    // add r4, r0, #0
    // ldr r1, [r4]
    // ldr r0, _0223DE48 ; =0x0000050C
    // str r1, [r5, r0]
    // ldr r0, [r5, r0]
    // bl sub_02030CC8
    // mov r1, #0x51
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // sub r0, r1, #4
    // ldr r0, [r5, r0]
    // bl sub_02030E08
    // ldr r1, _0223DE4C ; =0x00000514
    // add r2, r4, #0
    // str r0, [r5, r1]
    // ldrb r0, [r4, #4]
    // add r2, #0x20
    // sub r1, #8
    // strb r0, [r5, #9]
    // mov r0, #0x7a
    // lsl r0, r0, #4
    // str r2, [r5, r0]
    // ldr r0, [r5, r1]
    // bl Save_PlayerData_GetOptionsAddr
    // ldr r1, _0223DE50 ; =0x00000508
    // str r0, [r5, r1]
    // ldr r2, [r4, #0x18]
    // ldr r0, _0223DE54 ; =0x000007A4
    // str r2, [r5, r0]
    // mov r2, #0xff
    // strb r2, [r5, #0x12]
    // ldrh r2, [r4, #0x28]
    // add r0, #0x5e
    // strh r2, [r5, r0]
    // add r0, r1, #4
    // ldr r0, [r5, r0]
    // bl Save_Frontier_GetStatic
    // str r0, [r5, #4]
    // ldr r0, _0223DE58 ; =0x000007FF
    // mov r3, #0
    // mov r2, #1
    // add r1, r5, r3
    // add r3, r3, #1
    // strb r2, [r1, r0]
    // cmp r3, #3
    // blt _0223DDF8
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _0223DE10
    // mov r0, #3
    // b _0223DE12
    // mov r0, #4
    // strb r0, [r5, #0x14]
    // mov r0, #4
    // strb r0, [r5, #0x15]
    // ldrb r0, [r5, #0x15]
    // sub r0, r0, #1
    // strb r0, [r5, #0xc]
    // ldr r0, _0223DE5C ; =0x00000868
    // add r0, r5, r0
    // bl ov83_022477E4
    // add r0, r5, #0
    // bl ov83_0223F200
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #1
    // bne _0223DE3C
    // add r0, r5, #0
    // bl sub_02096910
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _0223DE40: .word FS_OVERLAY_ID(OVY_80)
    // _0223DE44: .word 0x0000086C
    // _0223DE48: .word 0x0000050C
    // _0223DE4C: .word 0x00000514
    // _0223DE50: .word 0x00000508
    // _0223DE54: .word 0x000007A4
    // _0223DE58: .word 0x000007FF
    // _0223DE5C: .word 0x00000868
    // TODO: decompile
}



void ov83_0223DE60(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // ldr r1, _0223DFAC ; =0x000007FE
    // add r4, r0, #0
    // ldrb r2, [r4, r1]
    // cmp r2, #1
    // bne _0223DEC6
    // ldr r2, [r5]
    // cmp r2, #1
    // bne _0223DEEC
    // mov r2, #0
    // strb r2, [r4, r1]
    // bl ov83_022412A0
    // ldr r0, _0223DFB0 ; =0x0000075C
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0223DE94
    // bl ov83_0224753C
    // ldrb r1, [r4, #0xe]
    // mov r0, #4
    // bic r1, r0
    // strb r1, [r4, #0xe]
    // ldr r0, _0223DFB4 ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // ldr r0, [r4, #0x24]
    // mov r1, #0
    // bl ov80_0222A7CC
    // add r0, r4, #0
    // mov r1, #8
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #3
    // bl ov83_02240DA8
    // b _0223DEEC
    // ldrb r0, [r4, #0x12]
    // cmp r0, #0xff
    // beq _0223DEEC
    // ldr r0, [r5]
    // cmp r0, #1
    // beq _0223DED6
    // cmp r0, #3
    // bne _0223DEEC
    // ldr r0, _0223DFAC ; =0x000007FE
    // mov r1, #0
    // strb r1, [r4, r0]
    // add r0, r4, #0
    // bl ov83_022412A0
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #2
    // bl ov83_02240DA8
    // ldr r0, [r5]
    // cmp r0, #4
    // bhi _0223DF9A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223DEFE: ; jump table
    // add r0, r4, #0
    // bl ov83_0223E008
    // cmp r0, #1
    // bne _0223DF9A
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #1
    // bl ov83_02240DA8
    // b _0223DF9A
    // add r0, r4, #0
    // bl ov83_0223E14C
    // cmp r0, #1
    // bne _0223DF9A
    // ldrb r0, [r4, #0xe]
    // lsl r0, r0, #0x1e
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _0223DF3E
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #2
    // bl ov83_02240DA8
    // b _0223DF9A
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #1
    // bne _0223DF54
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #3
    // bl ov83_02240DA8
    // b _0223DF9A
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #4
    // bl ov83_02240DA8
    // b _0223DF9A
    // add r0, r4, #0
    // bl ov83_0223EEA0
    // cmp r0, #1
    // bne _0223DF9A
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #1
    // bl ov83_02240DA8
    // b _0223DF9A
    // add r0, r4, #0
    // bl ov83_0223EFA4
    // cmp r0, #1
    // bne _0223DF9A
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #4
    // bl ov83_02240DA8
    // b _0223DF9A
    // add r0, r4, #0
    // bl ov83_0223F010
    // cmp r0, #1
    // bne _0223DF9A
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov83_02241B30
    // ldr r0, _0223DFB8 ; =0x00000518
    // ldr r0, [r4, r0]
    // bl SpriteList_RenderAndAnimateSprites
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0223DFAC: .word 0x000007FE
    // _0223DFB0: .word 0x0000075C
    // _0223DFB4: .word 0x00000508
    // _0223DFB8: .word 0x00000518
    // TODO: decompile
}



void ov83_0223DFBC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // mov r0, #0x7a
    // lsl r0, r0, #4
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4, r0]
    // strh r1, [r0]
    // ldr r0, _0223E000 ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // bl GF_DestroyVramTransferManager
    // add r0, r4, #0
    // bl ov83_0223F058
    // add r0, r5, #0
    // bl OverlayManager_FreeData
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0x6b
    // bl Heap_Destroy
    // ldr r0, _0223E004 ; =FS_OVERLAY_ID(OVY_80)
    // bl UnloadOverlayByID
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _0223E000: .word 0x04000050
    // _0223E004: .word FS_OVERLAY_ID(OVY_80)
    // TODO: decompile
}



void ov83_0223E008(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223E020: ; jump table
    ov80_02237D8C(*((u8*)(r0 + 9)));
    sub_02037BEC();
    sub_02037AC0(0xd7);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov80_02237D8C(*((u8*)(r4 + 9)));
    sub_02037B38(0xd7);
    sub_02037BEC();
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov80_02237D8C(*((u8*)(r4 + 9)));
    ov83_02241368(r4, 0xa, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov83_0223E10C(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov80_02237D8C(*((u8*)(r4 + 9)));
    *((u8*)(r4 + 0xf)) = 0;
    ov83_0223E10C(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u8*)(r4 + 8)) + 1));
}



void ov83_0223E10C(void) {
}



void ov83_0223E14C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #0x16
    // bls _0223E15C
    // bl _0223EE86
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E168: ; jump table
    // ldrb r1, [r4, #0xe]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x1e
    // cmp r1, #1
    // bne _0223E1C2
    // bl ov83_02240348
    // ldr r0, _0223E4F0 ; =0x00000778
    // mov r1, #0xcc
    // ldr r0, [r4, r0]
    // mov r2, #0x64
    // bl ov83_02247630
    // mov r0, #2
    // strb r0, [r4, #8]
    // ldrb r1, [r4, #0xe]
    // mov r0, #0x60
    // add sp, #4
    // bic r1, r0
    // strb r1, [r4, #0xe]
    // mov r0, #0
    // pop {r3, r4, r5, r6, pc}
    // cmp r1, #2
    // bne _0223E1E8
    // bl ov83_02240384
    // ldr r0, _0223E4F0 ; =0x00000778
    // mov r1, #0xd3
    // ldr r0, [r4, r0]
    // mov r2, #0x6a
    // bl ov83_02247630
    // mov r0, #8
    // strb r0, [r4, #8]
    // ldrb r1, [r4, #0xe]
    // mov r0, #0x60
    // add sp, #4
    // bic r1, r0
    // strb r1, [r4, #0xe]
    // mov r0, #0
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, _0223E4F4 ; =0x00000838
    // ldr r0, [r4, r0]
    // bl ov83_02247AD4
    // cmp r0, #4
    // bhi _0223E20A
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E200: ; jump table
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // beq _0223E236
    // bl _0223EE86
    // add r0, r4, #0
    // bl ov83_022402F4
    // add r0, r4, #0
    // bl ov83_02240300
    // mov r0, #1
    // strb r0, [r4, #8]
    // bl _0223EE86
    // ldr r0, _0223E4F8 ; =0x000005DC
    // bl PlaySE
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldrb r1, [r4, #0xd]
    // ldrb r0, [r4, #0x15]
    // cmp r1, r0
    // beq _0223E2FA
    // ldr r0, _0223E4F4 ; =0x00000838
    // ldr r0, [r4, r0]
    // bl ov83_02247B04
    // ldrb r2, [r4, #0xd]
    // add r0, r4, #0
    // mov r1, #4
    // bl ov83_02242AB4
    // bl _0223EE86
    // mov r0, #0x21
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl TouchscreenListMenu_HandleInput
    // ldr r1, _0223E4F8 ; =0x000005DC
    // add r5, r0, #0
    // bl ov83_022477B0
    // add r0, r4, #0
    // bl ov83_02242DAC
    // cmp r5, #5
    // bhi _0223E27A
    // bhs _0223E2AA
    // cmp r5, #0
    // beq _0223E296
    // bl _0223EE86
    // cmp r5, #0xb
    // bhi _0223E284
    // beq _0223E2BE
    // bl _0223EE86
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // blo _0223E2FA
    // beq _0223E2BE
    // add r0, r0, #1
    // cmp r5, r0
    // bl _0223EE86
    // add r0, r4, #0
    // bl ov83_02240334
    // add r0, r4, #0
    // bl ov83_02240348
    // mov r0, #2
    // strb r0, [r4, #8]
    // bl _0223EE86
    // add r0, r4, #0
    // bl ov83_02240334
    // add r0, r4, #0
    // bl ov83_02240384
    // mov r0, #8
    // strb r0, [r4, #8]
    // bl _0223EE86
    // add r0, r4, #0
    // bl ov83_02240334
    // add r0, r4, #0
    // bl ov83_02240290
    // mov r0, #0
    // strb r0, [r4, #8]
    // bl _0223EE86
    // mov r0, #0x21
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl TouchscreenListMenu_HandleInput
    // ldr r1, _0223E4F8 ; =0x000005DC
    // add r5, r0, #0
    // bl ov83_022477B0
    // add r0, r4, #0
    // bl ov83_02242DFC
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // bhi _0223E322
    // blo _0223E2F6
    // b _0223E418
    // cmp r5, #0xb
    // bls _0223E2FE
    // bl _0223EE86
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223E30A: ; jump table
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // bl _0223EE86
    // add r0, r4, #0
    // strb r5, [r4, #0x13]
    // bl ov83_0224037C
    // ldr r0, _0223E4FC ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // ldr r0, _0223E500 ; =0x0000050C
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r2, #0
    // bl ov83_0224777C
    // ldr r1, _0223E504 ; =0x00000848
    // ldr r2, [r4, r1]
    // mov r1, #0xc
    // add r3, r2, #0
    // mul r3, r1
    // ldr r1, _0223E508 ; =ov83_02247F4C
    // ldr r1, [r1, r3]
    // cmp r0, r1
    // bhs _0223E378
    // add r0, r4, #0
    // mov r1, #0x21
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // mov r0, #7
    // strb r0, [r4, #8]
    // bl _0223EE86
    // lsl r3, r2, #1
    // ldr r2, _0223E50C ; =ov83_02247D18
    // mov r1, #0
    // ldrh r2, [r2, r3]
    // add r0, r4, #0
    // mov r3, #3
    // str r1, [sp]
    // bl ov83_02240C48
    // add r0, r4, #0
    // mov r1, #0x37
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // add r0, r4, #0
    // bl ov83_02240514
    // mov r0, #3
    // strb r0, [r4, #8]
    // bl _0223EE86
    // ldr r0, _0223E500 ; =0x0000050C
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r2, #0
    // bl ov83_0224777C
    // add r6, r0, #0
    // cmp r6, #3
    // bne _0223E3C8
    // ldr r0, _0223E4F8 ; =0x000005DC
    // mov r1, #0
    // bl StopSE
    // ldr r0, _0223E510 ; =0x000005F3
    // bl PlaySE
    // bl _0223EE86
    // strb r5, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_0224037C
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // add r5, r0, #0
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // bl FrontierSave_GetStat
    // mov r1, #0
    // ldr r2, _0223E514 ; =ov83_02247D48
    // lsl r3, r6, #1
    // ldrh r2, [r2, r3]
    // add r0, r4, #0
    // mov r3, #4
    // str r1, [sp]
    // bl ov83_02240C48
    // add r0, r4, #0
    // mov r1, #0x26
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // add r0, r4, #0
    // bl ov83_02240514
    // mov r0, #4
    // strb r0, [r4, #8]
    // bl _0223EE86
    // add r0, r4, #0
    // bl ov83_0224037C
    // add r0, r4, #0
    // bl ov83_02240300
    // mov r0, #1
    // strb r0, [r4, #8]
    // bl _0223EE86
    // ldr r0, _0223E518 ; =0x0000084C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _0223E442
    // cmp r0, #2
    // bne _0223E43E
    // b _0223E5F2
    // bl _0223EE86
    // ldr r0, _0223E518 ; =0x0000084C
    // add r0, r4, r0
    // bl ov83_022478B4
    // ldrb r0, [r4, #0x14]
    // ldrb r1, [r4, #0xd]
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _0223E51C ; =0x000007A4
    // ldr r0, [r4, r0]
    // bl Party_GetMonByIndex
    // add r5, r0, #0
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // add r6, r0, #0
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r4, #4]
    // add r1, r6, #0
    // bl FrontierSave_GetStat
    // add r6, r0, #0
    // ldr r0, _0223E500 ; =0x0000050C
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r2, #0
    // bl ov83_0224777C
    // ldr r1, _0223E504 ; =0x00000848
    // mov r2, #0xc
    // ldr r1, [r4, r1]
    // add r3, r1, #0
    // mul r3, r2
    // ldr r2, _0223E508 ; =ov83_02247F4C
    // ldr r2, [r2, r3]
    // cmp r0, r2
    // bhs _0223E4C0
    // ldr r0, _0223E4FC ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // add r0, r4, #0
    // mov r1, #0x21
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // mov r0, #7
    // strb r0, [r4, #8]
    // bl _0223EE86
    // ldr r0, _0223E50C ; =ov83_02247D18
    // lsl r2, r1, #1
    // ldrh r0, [r0, r2]
    // cmp r6, r0
    // bhs _0223E520
    // ldr r0, _0223E4FC ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // add r0, r4, #0
    // mov r1, #0x20
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // mov r0, #7
    // strb r0, [r4, #8]
    // bl _0223EE86
    // _0223E4F0: .word 0x00000778
    // _0223E4F4: .word 0x00000838
    // _0223E4F8: .word 0x000005DC
    // _0223E4FC: .word 0x00000508
    // _0223E500: .word 0x0000050C
    // _0223E504: .word 0x00000848
    // _0223E508: .word ov83_02247F4C
    // _0223E50C: .word ov83_02247D18
    // _0223E510: .word 0x000005F3
    // _0223E514: .word ov83_02247D48
    // _0223E518: .word 0x0000084C
    // _0223E51C: .word 0x000007A4
    // cmp r1, #0
    // bne _0223E552
    // add r0, r5, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #0xa4
    // mov r2, #0
    // bl GetMonData
    // cmp r6, r0
    // bne _0223E5AC
    // add r0, r4, #0
    // mov r1, #0x25
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // mov r0, #7
    // strb r0, [r4, #8]
    // bl _0223EE86
    // cmp r1, #1
    // bne _0223E574
    // add r0, r5, #0
    // bl ov83_022412DC
    // cmp r0, #0
    // bne _0223E5AC
    // add r0, r4, #0
    // mov r1, #0x25
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // mov r0, #7
    // strb r0, [r4, #8]
    // bl _0223EE86
    // add r0, r5, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #0xa4
    // mov r2, #0
    // bl GetMonData
    // cmp r6, r0
    // bne _0223E5AC
    // add r0, r5, #0
    // bl ov83_022412DC
    // cmp r0, #0
    // bne _0223E5AC
    // add r0, r4, #0
    // mov r1, #0x25
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // mov r0, #7
    // strb r0, [r4, #8]
    // bl _0223EE86
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _0223E5E4
    // ldrb r2, [r4, #0x13]
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, #4]
    // sub r2, r2, #1
    // lsl r3, r2, #1
    // ldr r2, _0223E8D8 ; =ov83_02247D18
    // ldrh r2, [r2, r3]
    // bl ov80_02237FA4
    // add r1, r4, #0
    // add r0, r4, #0
    // add r1, #0x50
    // bl ov83_02241770
    // ldrb r1, [r4, #0xd]
    // ldrb r2, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_022415F4
    // mov r0, #0x13
    // strb r0, [r4, #8]
    // bl _0223EE86
    // ldrb r1, [r4, #0xe]
    // mov r0, #2
    // add sp, #4
    // orr r0, r1
    // strb r0, [r4, #0xe]
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, _0223E8DC ; =0x0000084C
    // add r0, r4, r0
    // bl ov83_022478B4
    // add r0, r4, #0
    // bl ov83_02240348
    // mov r0, #2
    // strb r0, [r4, #8]
    // bl _0223EE86
    // ldr r0, _0223E8DC ; =0x0000084C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _0223E61C
    // cmp r0, #2
    // beq _0223E6A6
    // bl _0223EE86
    // ldr r0, _0223E8DC ; =0x0000084C
    // add r0, r4, r0
    // bl ov83_022478B4
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // add r5, r0, #0
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // bl FrontierSave_GetStat
    // add r5, r0, #0
    // ldr r0, _0223E8E0 ; =0x0000050C
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r2, #0
    // bl ov83_0224777C
    // lsl r1, r0, #1
    // ldr r0, _0223E8E4 ; =ov83_02247D48
    // ldrh r0, [r0, r1]
    // cmp r5, r0
    // bhs _0223E67E
    // ldr r0, _0223E8E8 ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // add r0, r4, #0
    // mov r1, #0x29
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // mov r0, #7
    // strb r0, [r4, #8]
    // bl _0223EE86
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _0223E698
    // ldrb r1, [r4, #0xd]
    // add r0, r4, #0
    // mov r2, #4
    // bl ov83_02241BC4
    // mov r0, #5
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldrb r1, [r4, #0xe]
    // mov r0, #2
    // add sp, #4
    // orr r0, r1
    // strb r0, [r4, #0xe]
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, _0223E8DC ; =0x0000084C
    // add r0, r4, r0
    // bl ov83_022478B4
    // add r0, r4, #0
    // bl ov83_02240348
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldrb r1, [r4, #0xd]
    // ldrb r2, [r4, #0x13]
    // bl ov83_02240FAC
    // cmp r0, #1
    // bne _0223E754
    // mov r0, #6
    // strb r0, [r4, #8]
    // b _0223EE86
    // bl ov83_02247CF0
    // cmp r0, #1
    // bne _0223E754
    // ldr r0, _0223E8EC ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov83_02240348
    // ldr r0, _0223E8F0 ; =0x00000778
    // mov r1, #0xcc
    // ldr r0, [r4, r0]
    // mov r2, #0x64
    // bl ov83_02247630
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223EE86
    // bl ov83_02247CF0
    // cmp r0, #1
    // bne _0223E754
    // ldr r0, _0223E8EC ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02241354
    // add r0, r4, #0
    // bl ov83_02240348
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldr r2, _0223E8F4 ; =0x00000868
    // mov r0, #2
    // mov r1, #0
    // add r2, r4, r2
    // bl ov83_022477EC
    // mov r0, #0x21
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl TouchscreenListMenu_HandleInput
    // ldr r1, _0223E8EC ; =0x000005DC
    // add r5, r0, #0
    // bl ov83_022477B0
    // add r0, r4, #0
    // bl ov83_02242E88
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // bhi _0223E756
    // bhs _0223E75C
    // cmp r5, #8
    // bhi _0223E754
    // cmp r5, #6
    // blo _0223E754
    // beq _0223E76E
    // cmp r5, #7
    // beq _0223E784
    // cmp r5, #8
    // beq _0223E7C0
    // b _0223EE86
    // add r0, r0, #1
    // cmp r5, r0
    // b _0223EE86
    // add r0, r4, #0
    // bl ov83_022403B8
    // add r0, r4, #0
    // bl ov83_02240300
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0223EE86
    // add r0, r4, #0
    // strb r5, [r4, #0x13]
    // bl ov83_022403B8
    // add r0, r4, #0
    // mov r1, #6
    // bl ov83_022403C0
    // mov r0, #9
    // strb r0, [r4, #8]
    // b _0223EE86
    // add r0, r4, #0
    // strb r5, [r4, #0x13]
    // bl ov83_022403B8
    // ldr r0, _0223E8E0 ; =0x0000050C
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r2, #1
    // bl ov83_0224777C
    // cmp r0, #1
    // bne _0223E7B2
    // add r0, r4, #0
    // mov r1, #0x36
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // mov r0, #0xf
    // strb r0, [r4, #8]
    // add sp, #4
    // mov r0, #0
    // pop {r3, r4, r5, r6, pc}
    // add r0, r4, #0
    // mov r1, #7
    // bl ov83_022403C0
    // mov r0, #9
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldr r0, _0223E8E0 ; =0x0000050C
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r2, #1
    // bl ov83_0224777C
    // add r6, r0, #0
    // cmp r6, #3
    // bne _0223E7E2
    // ldr r0, _0223E8EC ; =0x000005DC
    // mov r1, #0
    // bl StopSE
    // ldr r0, _0223E8F8 ; =0x000005F3
    // bl PlaySE
    // b _0223EE86
    // add r0, r4, #0
    // strb r5, [r4, #0x13]
    // bl ov83_022403B8
    // mov r1, #0
    // ldr r2, _0223E8FC ; =ov83_02247D4E
    // lsl r3, r6, #1
    // ldrh r2, [r2, r3]
    // add r0, r4, #0
    // mov r3, #4
    // str r1, [sp]
    // bl ov83_02240C48
    // add r0, r4, #0
    // mov r1, #0x26
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // add r0, r4, #0
    // bl ov83_02240514
    // mov r0, #0xc
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldr r0, _0223E900 ; =0x0000085C
    // ldr r0, [r4, r0]
    // bl ov83_02247BC4
    // add r5, r0, #0
    // mov r0, #2
    // mvn r0, r0
    // cmp r5, r0
    // bhi _0223E84A
    // bhs _0223E8AE
    // cmp r5, #8
    // bhi _0223E852
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223E838: ; jump table
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // beq _0223E8B6
    // b _0223EE86
    // ldr r0, _0223E904 ; =0x00000862
    // mov r1, #6
    // ldrsh r2, [r4, r0]
    // mul r1, r2
    // add r2, r5, r1
    // sub r1, r0, #2
    // strb r2, [r4, r1]
    // sub r0, r0, #1
    // ldrb r1, [r4, r1]
    // ldrb r0, [r4, r0]
    // cmp r1, r0
    // bhs _0223E916
    // ldr r0, _0223E908 ; =0x000005DD
    // bl PlaySE
    // lsl r1, r5, #0x10
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // bl ov83_02242F18
    // mov r0, #0xa
    // strb r0, [r4, #8]
    // b _0223EE86
    // mov r0, #0x5e
    // lsl r0, r0, #4
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #6
    // bl ov83_02242F18
    // mov r0, #0xa
    // strb r0, [r4, #8]
    // b _0223EE86
    // mov r0, #0x5e
    // lsl r0, r0, #4
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #7
    // bl ov83_02242F18
    // mov r0, #0xa
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldr r0, _0223E8EC ; =0x000005DC
    // bl PlaySE
    // b _0223EE86
    // ldr r0, _0223E908 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #8
    // bl ov83_02242F18
    // mov r0, #0xa
    // strb r0, [r4, #8]
    // b _0223EE86
    // bl ov83_02242F2C
    // cmp r0, #1
    // beq _0223E916
    // ldr r0, _0223E90C ; =0x00000864
    // b _0223E910
    // nop
    // _0223E8D8: .word ov83_02247D18
    // _0223E8DC: .word 0x0000084C
    // _0223E8E0: .word 0x0000050C
    // _0223E8E4: .word ov83_02247D48
    // _0223E8E8: .word 0x00000508
    // _0223E8EC: .word 0x000005DC
    // _0223E8F0: .word 0x00000778
    // _0223E8F4: .word 0x00000868
    // _0223E8F8: .word 0x000005F3
    // _0223E8FC: .word ov83_02247D4E
    // _0223E900: .word 0x0000085C
    // _0223E904: .word 0x00000862
    // _0223E908: .word 0x000005DD
    // _0223E90C: .word 0x00000864
    // ldrh r1, [r4, r0]
    // cmp r1, #8
    // bls _0223E918
    // b _0223EE86
    // add r2, r1, r1
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _0223E924: ; jump table
    // add r0, r4, #0
    // bl ov83_022428A8
    // ldr r0, _0223EC84 ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldrb r1, [r4, r1]
    // ldrb r2, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02240EC4
    // add r2, r0, #0
    // mov r1, #0
    // add r0, r4, #0
    // mov r3, #3
    // str r1, [sp]
    // bl ov83_02240C48
    // add r0, r4, #0
    // mov r1, #0x37
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // add r0, r4, #0
    // bl ov83_02240514
    // mov r0, #0xb
    // strb r0, [r4, #8]
    // b _0223EE86
    // sub r1, r0, #2
    // ldrsh r1, [r4, r1]
    // sub r2, r1, #1
    // sub r1, r0, #2
    // strh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // cmp r1, #0
    // bge _0223E9A2
    // sub r0, r0, #3
    // ldrb r0, [r4, r0]
    // mov r1, #6
    // sub r0, r0, #1
    // bl _s32_div_f
    // ldr r1, _0223EC88 ; =0x00000862
    // strh r0, [r4, r1]
    // add r0, r4, #0
    // bl ov83_02240664
    // add r0, r4, #0
    // bl ov83_02240748
    // add r0, r4, #0
    // bl ov83_022407FC
    // ldr r0, _0223EC8C ; =0x0000085C
    // ldr r0, [r4, r0]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov83_022408E0
    // mov r0, #9
    // strb r0, [r4, #8]
    // b _0223EE86
    // sub r1, r0, #2
    // ldrsh r1, [r4, r1]
    // add r2, r1, #1
    // sub r1, r0, #2
    // strh r2, [r4, r1]
    // sub r0, r0, #3
    // ldrb r0, [r4, r0]
    // mov r1, #6
    // sub r0, r0, #1
    // bl _s32_div_f
    // ldr r1, _0223EC88 ; =0x00000862
    // ldrsh r2, [r4, r1]
    // cmp r0, r2
    // bge _0223E9EC
    // mov r0, #0
    // strh r0, [r4, r1]
    // add r0, r4, #0
    // bl ov83_02240664
    // add r0, r4, #0
    // bl ov83_02240748
    // add r0, r4, #0
    // bl ov83_022407FC
    // ldr r0, _0223EC8C ; =0x0000085C
    // ldr r0, [r4, r0]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov83_022408E0
    // mov r0, #9
    // strb r0, [r4, #8]
    // b _0223EE86
    // add r0, r4, #0
    // bl ov83_0224042C
    // add r0, r4, #0
    // bl ov83_02240384
    // mov r0, #8
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldr r0, _0223EC90 ; =0x0000084C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _0223EA3A
    // cmp r0, #2
    // bne _0223EA38
    // b _0223EB7E
    // b _0223EE86
    // ldr r0, _0223EC90 ; =0x0000084C
    // add r0, r4, r0
    // bl ov83_022478B4
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // add r5, r0, #0
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // bl FrontierSave_GetStat
    // mov r1, #0x86
    // lsl r1, r1, #4
    // add r5, r0, #0
    // ldrb r1, [r4, r1]
    // ldrb r2, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02240EC4
    // cmp r5, r0
    // bhs _0223EA96
    // ldr r0, _0223EC84 ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // add r0, r4, #0
    // mov r1, #0x20
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // mov r0, #0x10
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldr r0, _0223EC94 ; =0x00000804
    // mov r1, #6
    // ldr r5, [r4, r0]
    // mov r2, #0
    // add r0, r5, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _0223EB36
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _0223EB0A
    // add r0, r4, #0
    // bl ov83_0224042C
    // ldr r0, _0223EC84 ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldrb r1, [r4, r1]
    // ldrb r2, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02240EC4
    // add r2, r0, #0
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, #4]
    // bl ov80_02237FA4
    // add r1, r4, #0
    // add r0, r4, #0
    // add r1, #0x50
    // bl ov83_02241770
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldrb r1, [r4, r1]
    // ldrb r2, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02240F48
    // add r2, r0, #0
    // ldrb r1, [r4, #0xd]
    // add r0, r4, #0
    // bl ov83_022416A0
    // mov r0, #0x13
    // strb r0, [r4, #8]
    // b _0223EE86
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldrb r1, [r4, r1]
    // ldrb r2, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02240F48
    // strh r0, [r4, #0x10]
    // add r0, r4, #0
    // bl ov83_0224042C
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02241354
    // ldrb r1, [r4, #0xe]
    // mov r0, #2
    // add sp, #4
    // orr r0, r1
    // strb r0, [r4, #0xe]
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // add r0, r5, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov83_02240C60
    // add r0, r5, #0
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // add r2, r0, #0
    // ldr r0, [r4, #0x24]
    // mov r1, #1
    // bl BufferItemNameWithIndefArticle
    // ldr r0, _0223EC84 ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // add r0, r4, #0
    // mov r1, #0x3c
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // mov r0, #0x11
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldr r0, _0223EC90 ; =0x0000084C
    // add r0, r4, r0
    // bl ov83_022478B4
    // add r0, r4, #0
    // bl ov83_0224175C
    // mov r0, #9
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldr r0, _0223EC90 ; =0x0000084C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _0223EBA4
    // cmp r0, #2
    // beq _0223EC2C
    // b _0223EE86
    // ldr r0, _0223EC90 ; =0x0000084C
    // add r0, r4, r0
    // bl ov83_022478B4
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // add r5, r0, #0
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // bl FrontierSave_GetStat
    // add r5, r0, #0
    // ldr r0, _0223EC98 ; =0x0000050C
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r2, #1
    // bl ov83_0224777C
    // lsl r1, r0, #1
    // ldr r0, _0223EC9C ; =ov83_02247D4E
    // ldrh r0, [r0, r1]
    // cmp r5, r0
    // bhs _0223EC04
    // ldr r0, _0223EC84 ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // add r0, r4, #0
    // mov r1, #0x29
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // mov r0, #0xf
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _0223EC1E
    // ldrb r1, [r4, #0xd]
    // add r0, r4, #0
    // mov r2, #8
    // bl ov83_02241BC4
    // mov r0, #0xd
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldrb r1, [r4, #0xe]
    // mov r0, #2
    // add sp, #4
    // orr r0, r1
    // strb r0, [r4, #0xe]
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, _0223EC90 ; =0x0000084C
    // add r0, r4, r0
    // bl ov83_022478B4
    // add r0, r4, #0
    // bl ov83_02240384
    // mov r0, #8
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldrb r1, [r4, #0xd]
    // ldrb r2, [r4, #0x13]
    // bl ov83_02240FAC
    // cmp r0, #1
    // bne _0223ED10
    // mov r0, #0xe
    // strb r0, [r4, #8]
    // b _0223EE86
    // bl ov83_02247CF0
    // cmp r0, #1
    // bne _0223ED10
    // ldr r0, _0223ECA0 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov83_02240384
    // ldr r0, _0223ECA4 ; =0x00000778
    // mov r1, #0xd3
    // ldr r0, [r4, r0]
    // mov r2, #0x6a
    // bl ov83_02247630
    // mov r0, #8
    // strb r0, [r4, #8]
    // b _0223EE86
    // bl ov83_02247CF0
    // cmp r0, #1
    // bne _0223ED10
    // ldr r0, _0223ECA0 ; =0x000005DC
    // b _0223ECA8
    // _0223EC84: .word 0x00000508
    // _0223EC88: .word 0x00000862
    // _0223EC8C: .word 0x0000085C
    // _0223EC90: .word 0x0000084C
    // _0223EC94: .word 0x00000804
    // _0223EC98: .word 0x0000050C
    // _0223EC9C: .word ov83_02247D4E
    // _0223ECA0: .word 0x000005DC
    // _0223ECA4: .word 0x00000778
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02241354
    // add r0, r4, #0
    // bl ov83_02240384
    // mov r0, #8
    // strb r0, [r4, #8]
    // b _0223EE86
    // bl ov83_02247CF0
    // cmp r0, #1
    // bne _0223ED10
    // ldr r0, _0223EE8C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov83_0224175C
    // mov r0, #9
    // strb r0, [r4, #8]
    // b _0223EE86
    // bl ov83_02247CF0
    // cmp r0, #1
    // bne _0223ED10
    // ldr r0, _0223EE8C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x3d
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r4, #0xa]
    // add r0, r4, #0
    // bl ov83_02240514
    // mov r0, #0x12
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldr r0, _0223EE90 ; =0x0000084C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _0223ED12
    // cmp r0, #2
    // beq _0223EDAE
    // b _0223EE86
    // ldr r0, _0223EE90 ; =0x0000084C
    // add r0, r4, r0
    // bl ov83_022478B4
    // add r0, r4, #0
    // bl ov83_02240664
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _0223ED82
    // add r0, r4, #0
    // bl ov83_0224042C
    // ldr r0, _0223EE94 ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldrb r1, [r4, r1]
    // ldrb r2, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02240EC4
    // add r2, r0, #0
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, #4]
    // bl ov80_02237FA4
    // add r1, r4, #0
    // add r0, r4, #0
    // add r1, #0x50
    // bl ov83_02241770
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldrb r1, [r4, r1]
    // ldrb r2, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02240F48
    // add r2, r0, #0
    // ldrb r1, [r4, #0xd]
    // add r0, r4, #0
    // bl ov83_022416A0
    // mov r0, #0x13
    // strb r0, [r4, #8]
    // b _0223EE86
    // mov r1, #0x86
    // lsl r1, r1, #4
    // ldrb r1, [r4, r1]
    // ldrb r2, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02240F48
    // strh r0, [r4, #0x10]
    // add r0, r4, #0
    // bl ov83_0224042C
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02241354
    // ldrb r1, [r4, #0xe]
    // mov r0, #2
    // add sp, #4
    // orr r0, r1
    // strb r0, [r4, #0xe]
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, _0223EE90 ; =0x0000084C
    // add r0, r4, r0
    // bl ov83_022478B4
    // add r0, r4, #0
    // bl ov83_0224175C
    // mov r0, #9
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldr r2, _0223EE98 ; =0x00000868
    // mov r0, #2
    // mov r1, #0
    // add r2, r4, r2
    // bl ov83_022477EC
    // ldrb r1, [r4, #0xd]
    // ldrb r2, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02240FAC
    // cmp r0, #1
    // bne _0223EE86
    // mov r0, #0x14
    // strb r0, [r4, #8]
    // b _0223EE86
    // bl ov83_02247CF0
    // cmp r0, #1
    // bne _0223EE86
    // ldr r0, _0223EE8C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02241354
    // add r0, r4, #0
    // bl ov83_02240290
    // mov r0, #0
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldr r1, _0223EE9C ; =gSystem
    // ldr r3, [r1, #0x48]
    // mov r1, #0x20
    // add r2, r3, #0
    // tst r2, r1
    // beq _0223EE18
    // sub r1, #0x21
    // bl ov83_02241208
    // b _0223EE86
    // mov r1, #0x10
    // tst r1, r3
    // beq _0223EE26
    // mov r1, #1
    // bl ov83_02241208
    // b _0223EE86
    // bl ov83_02247CF0
    // cmp r0, #1
    // bne _0223EE86
    // ldr r0, _0223EE8C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov83_02241B18
    // add r0, r4, #0
    // bl ov83_02240300
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0223EE86
    // ldr r1, _0223EE9C ; =gSystem
    // ldr r3, [r1, #0x48]
    // mov r1, #0x20
    // add r2, r3, #0
    // tst r2, r1
    // beq _0223EE5A
    // sub r1, #0x21
    // bl ov83_02241254
    // b _0223EE86
    // mov r1, #0x10
    // tst r1, r3
    // beq _0223EE68
    // mov r1, #1
    // bl ov83_02241254
    // b _0223EE86
    // bl ov83_02247CF0
    // cmp r0, #1
    // bne _0223EE86
    // ldr r0, _0223EE8C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov83_02241B18
    // add r0, r4, #0
    // bl ov83_02240300
    // mov r0, #1
    // strb r0, [r4, #8]
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _0223EE8C: .word 0x000005DC
    // _0223EE90: .word 0x0000084C
    // _0223EE94: .word 0x00000508
    // _0223EE98: .word 0x00000868
    // _0223EE9C: .word gSystem
    // TODO: decompile
}



void ov83_0223EEA0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #4
    // bhi _0223EF96
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223EEB6: ; jump table
    // ldrb r1, [r4, #0xe]
    // mov r0, #0x60
    // ldr r2, _0223EF9C ; =0x00000868
    // bic r1, r0
    // strb r1, [r4, #0xe]
    // mov r0, #2
    // mov r1, #0
    // add r2, r4, r2
    // bl ov83_022477EC
    // ldrb r2, [r4, #0xd]
    // add r0, r4, #0
    // mov r1, #0xb
    // bl ov83_02241368
    // cmp r0, #1
    // bne _0223EF96
    // ldrb r1, [r4, #0xe]
    // mov r0, #2
    // bic r1, r0
    // strb r1, [r4, #0xe]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223EF96
    // ldrb r1, [r4, #0x12]
    // cmp r1, #0xff
    // beq _0223EF96
    // mov r1, #0
    // strb r1, [r4, #0xf]
    // ldrb r2, [r4, #0x13]
    // cmp r2, #4
    // beq _0223EF06
    // cmp r2, #8
    // bne _0223EF10
    // ldrb r1, [r4, #0x12]
    // add r0, r4, #0
    // bl ov83_02241BC4
    // b _0223EF16
    // ldrb r1, [r4, #0x12]
    // bl ov83_022418E8
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223EF96
    // ldrb r0, [r4, #0x15]
    // ldrb r1, [r4, #0x12]
    // bl ov83_0224776C
    // add r1, r0, #0
    // ldrb r2, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02240FAC
    // cmp r0, #1
    // bne _0223EF96
    // mov r0, #0x1e
    // strb r0, [r4, #0xb]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223EF96
    // ldrb r0, [r4, #0xb]
    // sub r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldrb r0, [r4, #0xb]
    // cmp r0, #0
    // bne _0223EF96
    // bl sub_02037BEC
    // mov r0, #0x82
    // bl sub_02037AC0
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223EF96
    // mov r0, #0x82
    // bl sub_02037B38
    // cmp r0, #1
    // bne _0223EF96
    // bl sub_02037BEC
    // mov r0, #0x6b
    // bl sub_020379A0
    // mov r0, #0xff
    // strb r0, [r4, #0x12]
    // ldrb r0, [r4, #0xe]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1e
    // bne _0223EF8C
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02241354
    // add r0, r4, #0
    // bl ov83_02240290
    // ldr r0, _0223EFA0 ; =0x000007FE
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0223EF9C: .word 0x00000868
    // _0223EFA0: .word 0x000007FE
    // TODO: decompile
}



void ov83_0223EFA4(void) {
    ov83_02241368(0xd, 0);
    *((u8*)(r4 + 0xb)) = 0x1e;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) - 1);
    sub_02037BEC(*((u8*)(r4 + 0xb)));
    sub_02037AC0(0x83);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    sub_02037B38(0x83);
    sub_02037BEC();
    // add r4, #0xb0
    ov83_02241354(r4);
}



void ov83_0223F010(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u8*)(r4 + 8)) + 1));
}



void ov83_0223F058(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _0223F18C ; =0x0000084C
    // add r0, r5, r0
    // bl ov83_02247858
    // ldr r0, _0223F190 ; =0x0000083C
    // ldr r0, [r5, r0]
    // bl ov83_02247CC4
    // ldr r0, _0223F194 ; =0x00000838
    // ldr r0, [r5, r0]
    // bl ov83_02247A18
    // ldr r0, _0223F198 ; =0x00000734
    // ldr r0, [r5, r0]
    // bl ov83_0224753C
    // ldr r0, _0223F19C ; =0x00000738
    // ldr r0, [r5, r0]
    // bl ov83_0224753C
    // ldr r0, _0223F1A0 ; =0x00000778
    // ldr r0, [r5, r0]
    // bl ov83_0224753C
    // mov r0, #0x76
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl ov83_0224753C
    // ldr r0, _0223F1A4 ; =0x00000764
    // ldr r0, [r5, r0]
    // bl ov83_0224753C
    // ldr r0, _0223F1A8 ; =0x0000077C
    // ldr r0, [r5, r0]
    // bl ov83_0224753C
    // mov r0, #0x1e
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // bl ov83_0224753C
    // ldr r0, _0223F1AC ; =0x0000079C
    // ldr r0, [r5, r0]
    // bl ov83_0224753C
    // ldrb r0, [r5, #9]
    // mov r1, #1
    // bl ov80_02237B24
    // add r7, r0, #0
    // mov r6, #0
    // cmp r7, #0
    // ble _0223F0EA
    // add r4, r5, #0
    // ldr r0, _0223F1B0 ; =0x0000073C
    // ldr r0, [r4, r0]
    // bl ov83_0224753C
    // ldr r0, _0223F1B4 ; =0x0000074C
    // ldr r0, [r4, r0]
    // bl ov83_0224753C
    // ldr r0, _0223F1B8 ; =0x00000768
    // ldr r0, [r4, r0]
    // bl ov83_0224753C
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, r7
    // blt _0223F0CA
    // ldr r7, _0223F1BC ; =0x00000784
    // mov r6, #0
    // add r4, r5, #0
    // ldr r0, [r4, r7]
    // bl ov83_0224753C
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #6
    // blt _0223F0F0
    // bl sub_0203A914
    // mov r0, #5
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // mov r1, #2
    // bl PaletteData_FreeBuffers
    // mov r0, #5
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl PaletteData_FreeBuffers
    // mov r0, #5
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // bl PaletteData_Free
    // mov r0, #5
    // mov r1, #0
    // lsl r0, r0, #8
    // str r1, [r5, r0]
    // add r0, #0x18
    // add r0, r5, r0
    // bl ov83_022471FC
    // ldr r0, [r5, #0x20]
    // bl DestroyMsgData
    // ldr r0, [r5, #0x1c]
    // bl DestroyMsgData
    // ldr r0, [r5, #0x24]
    // bl MessageFormat_Delete
    // ldr r0, [r5, #0x28]
    // bl String_Delete
    // ldr r0, [r5, #0x2c]
    // bl String_Delete
    // ldr r0, _0223F1C0 ; =0x00000504
    // ldr r0, [r5, r0]
    // bl MessagePrinter_Delete
    // mov r0, #4
    // bl FontID_Release
    // mov r6, #0
    // add r4, r5, #0
    // ldr r0, [r4, #0x30]
    // bl String_Delete
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #3
    // blt _0223F164
    // add r0, r5, #0
    // add r0, #0x50
    // mov r1, #0
    // bl ov83_0224791C
    // ldr r0, [r5, #0x4c]
    // bl ov83_0223F734
    // ldr r0, _0223F1C4 ; =0x000007A8
    // ldr r0, [r5, r0]
    // bl NARC_Delete
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223F18C: .word 0x0000084C
    // _0223F190: .word 0x0000083C
    // _0223F194: .word 0x00000838
    // _0223F198: .word 0x00000734
    // _0223F19C: .word 0x00000738
    // _0223F1A0: .word 0x00000778
    // _0223F1A4: .word 0x00000764
    // _0223F1A8: .word 0x0000077C
    // _0223F1AC: .word 0x0000079C
    // _0223F1B0: .word 0x0000073C
    // _0223F1B4: .word 0x0000074C
    // _0223F1B8: .word 0x00000768
    // _0223F1BC: .word 0x00000784
    // _0223F1C0: .word 0x00000504
    // _0223F1C4: .word 0x000007A8
    // TODO: decompile
}



void ov83_0223F1C8(void) {
    // push {r3, lr}
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetHBlankIntrCB
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _0223F1F8 ; =0xFFFFE0FF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _0223F1FC ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // pop {r3, pc}
    // _0223F1F8: .word 0xFFFFE0FF
    // _0223F1FC: .word 0x04001000
    // TODO: decompile
}



void ov83_0223F200(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // add r5, r0, #0
    // mov r0, #0xb7
    // mov r1, #0x6b
    // bl NARC_New
    // ldr r1, _0223F594 ; =0x000007A8
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov83_0223F690
    // add r0, r5, #0
    // bl ov83_0223F70C
    // mov r0, #4
    // mov r1, #0x6b
    // bl FontID_Alloc
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0x1f
    // mov r3, #0x6b
    // bl NewMsgDataFromNarc
    // str r0, [r5, #0x20]
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xdd
    // mov r3, #0x6b
    // bl NewMsgDataFromNarc
    // str r0, [r5, #0x1c]
    // mov r0, #0x6b
    // bl MessageFormat_New
    // str r0, [r5, #0x24]
    // mov r0, #0x96
    // lsl r0, r0, #2
    // mov r1, #0x6b
    // bl String_New
    // str r0, [r5, #0x28]
    // mov r0, #0x96
    // lsl r0, r0, #2
    // mov r1, #0x6b
    // bl String_New
    // str r0, [r5, #0x2c]
    // mov r6, #0
    // add r4, r5, #0
    // mov r7, #0x20
    // add r0, r7, #0
    // mov r1, #0x6b
    // bl String_New
    // str r0, [r4, #0x30]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #3
    // blt _0223F268
    // mov r1, #7
    // mov r0, #0
    // lsl r1, r1, #6
    // mov r2, #0x6b
    // bl LoadFontPal0
    // mov r1, #0x1a
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #0x6b
    // bl LoadFontPal1
    // mov r0, #1
    // mov r1, #2
    // mov r2, #0
    // mov r3, #0x6b
    // bl MessagePrinter_New
    // ldr r1, _0223F598 ; =0x00000504
    // mov r2, #0
    // str r0, [r5, r1]
    // add r1, r5, #0
    // ldr r0, [r5, #0x4c]
    // add r1, #0x50
    // bl ov83_022478D4
    // add r0, sp, #0x30
    // add r1, sp, #0x34
    // add r3, sp, #0x30
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, #2
    // add r2, sp, #0x34
    // add r3, #2
    // bl ov83_02240F7C
    // mov r1, #0
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #0xa0
    // str r0, [sp, #4]
    // mov r0, #0xa
    // str r0, [sp, #8]
    // ldr r0, _0223F59C ; =0x00000518
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    // add r2, r1, #0
    // add r3, r1, #0
    // str r1, [sp, #0x10]
    // bl ov83_02247454
    // ldr r1, _0223F5A0 ; =0x00000734
    // str r0, [r5, r1]
    // mov r1, #0
    // mov r0, #5
    // str r0, [sp]
    // mov r0, #0xa0
    // str r0, [sp, #4]
    // mov r0, #0x7c
    // str r0, [sp, #8]
    // ldr r0, _0223F59C ; =0x00000518
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    // add r2, r1, #0
    // add r3, r1, #0
    // str r1, [sp, #0x10]
    // bl ov83_02247454
    // ldr r1, _0223F5A4 ; =0x00000738
    // str r0, [r5, r1]
    // sub r0, r1, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ov83_0224755C
    // ldr r0, _0223F5A4 ; =0x00000738
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl ov83_0224755C
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _0223F32C
    // mov r0, #0x48
    // mov r7, #0x40
    // str r0, [sp, #0x18]
    // b _0223F332
    // mov r0, #0x28
    // mov r7, #0x20
    // str r0, [sp, #0x18]
    // ldrb r0, [r5, #9]
    // mov r1, #1
    // bl ov80_02237B24
    // mov r6, #0
    // str r0, [sp, #0x14]
    // cmp r0, #0
    // bgt _0223F344
    // b _0223F45C
    // add r4, r5, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // mov r1, #1
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // mov r0, #0x3e
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r0, _0223F59C ; =0x00000518
    // add r2, r1, #0
    // add r0, r5, r0
    // add r3, r1, #0
    // bl ov83_02247454
    // ldr r1, _0223F5A8 ; =0x0000074C
    // str r0, [r4, r1]
    // add r0, r1, #0
    // add r0, #0x58
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // mov r1, #6
    // mov r2, #0
    // str r0, [sp, #0x1c]
    // bl GetMonData
    // cmp r0, #0
    // bne _0223F394
    // ldr r0, _0223F5A8 ; =0x0000074C
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl ov83_0224755C
    // ldr r0, [sp, #0x1c]
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // mov r1, #0xa4
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x10
    // mov r2, #0x30
    // bl CalculateHpBarColor
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov83_022411B0
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x10
    // mov r2, #0x30
    // bl CalculateHpBarColor
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov83_022411DC
    // mov r1, #0
    // str r0, [sp]
    // lsl r0, r7, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // mov r0, #0x4e
    // str r0, [sp, #8]
    // mov r0, #3
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r0, _0223F59C ; =0x00000518
    // add r2, r1, #0
    // add r0, r5, r0
    // add r3, r1, #0
    // bl ov83_02247454
    // ldr r1, _0223F5AC ; =0x00000768
    // mov r2, #0xa
    // str r0, [r4, r1]
    // ldr r0, [sp, #0x28]
    // add r1, r6, #0
    // str r0, [sp]
    // lsl r0, r7, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // mov r0, #0x3a
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r0, _0223F59C ; =0x00000518
    // add r1, #0xa
    // add r0, r5, r0
    // mov r3, #5
    // bl ov83_02247454
    // ldr r1, _0223F5B0 ; =0x0000073C
    // str r0, [r4, r1]
    // add r0, r1, #0
    // add r0, #0x68
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // add r1, r0, #0
    // ldr r0, _0223F5B0 ; =0x0000073C
    // ldr r0, [r4, r0]
    // bl ov83_022475EC
    // ldr r0, [sp, #0x18]
    // add r6, r6, #1
    // add r0, #0x40
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r4, r4, #4
    // add r7, #0x40
    // cmp r6, r0
    // bge _0223F45C
    // b _0223F346
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // mov r0, #0xa0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, _0223F59C ; =0x00000518
    // str r1, [sp, #0x10]
    // mov r1, #3
    // add r0, r5, r0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov83_022474C4
    // ldr r1, _0223F5B4 ; =0x0000079C
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // mov r1, #0
    // bl ov83_0224755C
    // mov r4, #0
    // add r6, r5, #0
    // add r7, r4, #0
    // add r1, sp, #0x2c
    // add r0, r4, #0
    // add r1, #2
    // add r2, sp, #0x2c
    // bl ov83_02242894
    // str r7, [sp]
    // add r1, sp, #0x2c
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // mov r3, #4
    // str r0, [sp, #4]
    // mov r0, #0
    // ldrsh r0, [r1, r0]
    // add r1, r4, #4
    // add r2, r1, #0
    // str r0, [sp, #8]
    // ldr r0, _0223F59C ; =0x00000518
    // str r7, [sp, #0xc]
    // add r0, r5, r0
    // str r7, [sp, #0x10]
    // bl ov83_02247454
    // ldr r1, _0223F5B8 ; =0x00000784
    // str r0, [r6, r1]
    // add r0, r1, #0
    // ldr r0, [r6, r0]
    // mov r1, #0
    // bl ov83_0224755C
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, #6
    // blt _0223F48C
    // add r0, r5, #0
    // add r1, sp, #0x3c
    // add r2, sp, #0x38
    // mov r3, #0
    // bl ov83_02240E70
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [sp, #0x3c]
    // mov r1, #0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // add r2, r1, #0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, _0223F59C ; =0x00000518
    // add r3, r1, #0
    // add r0, r5, r0
    // str r1, [sp, #0x10]
    // bl ov83_02247454
    // mov r1, #0x76
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r0, #2
    // str r0, [sp]
    // ldr r1, [sp, #0x3c]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x38]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // str r1, [sp, #8]
    // mov r1, #0
    // str r0, [sp, #0xc]
    // ldr r0, _0223F59C ; =0x00000518
    // add r2, r1, #0
    // add r0, r5, r0
    // add r3, r1, #0
    // str r1, [sp, #0x10]
    // bl ov83_02247454
    // ldr r1, _0223F5BC ; =0x00000764
    // str r0, [r5, r1]
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _0223F548
    // ldr r0, _0223F5BC ; =0x00000764
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl ov83_0224755C
    // mov r0, #0xb
    // str r0, [sp]
    // mov r0, #0x14
    // str r0, [sp, #4]
    // mov r1, #0
    // str r0, [sp, #8]
    // ldr r0, _0223F59C ; =0x00000518
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    // add r2, r1, #0
    // add r3, r1, #0
    // str r1, [sp, #0x10]
    // bl ov83_02247454
    // ldr r1, _0223F5C0 ; =0x00000778
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // mov r1, #0
    // bl ov83_0224755C
    // mov r1, #0
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #0x14
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, _0223F59C ; =0x00000518
    // add r2, r1, #0
    // add r0, r5, r0
    // add r3, r1, #0
    // str r1, [sp, #0x10]
    // bl ov83_02247454
    // ldr r1, _0223F5C4 ; =0x0000077C
    // b _0223F5C8
    // nop
    // _0223F594: .word 0x000007A8
    // _0223F598: .word 0x00000504
    // _0223F59C: .word 0x00000518
    // _0223F5A0: .word 0x00000734
    // _0223F5A4: .word 0x00000738
    // _0223F5A8: .word 0x0000074C
    // _0223F5AC: .word 0x00000768
    // _0223F5B0: .word 0x0000073C
    // _0223F5B4: .word 0x0000079C
    // _0223F5B8: .word 0x00000784
    // _0223F5BC: .word 0x00000764
    // _0223F5C0: .word 0x00000778
    // _0223F5C4: .word 0x0000077C
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // mov r1, #0
    // bl ov83_0224755C
    // add r0, r5, #0
    // bl ov83_02241E18
    // add r0, r5, #0
    // bl ov83_02241FF0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov83_022421E0
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x30
    // str r0, [sp, #4]
    // mov r0, #0x28
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, _0223F67C ; =0x00000518
    // str r1, [sp, #0x10]
    // mov r1, #2
    // add r0, r5, r0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov83_022474C4
    // mov r3, #0x1e
    // lsl r3, r3, #6
    // add r2, r3, #0
    // str r0, [r5, r3]
    // add r1, r3, #0
    // add r2, #0x8c
    // ldr r0, [r5, r3]
    // add r1, #0x88
    // add r3, #0x94
    // ldrh r2, [r5, r2]
    // ldr r1, [r5, r1]
    // ldr r3, [r5, r3]
    // bl ov83_02247668
    // ldrb r2, [r5, #0x14]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov83_02247A24
    // ldr r1, _0223F680 ; =0x00000838
    // str r0, [r5, r1]
    // ldr r1, _0223F67C ; =0x00000518
    // ldr r0, [r5, r1]
    // sub r1, #0x18
    // ldr r1, [r5, r1]
    // bl ov83_02247CB8
    // ldr r1, _0223F684 ; =0x0000083C
    // str r0, [r5, r1]
    // add r1, #0x10
    // add r0, r5, r1
    // bl ov83_02247844
    // bl sub_02037474
    // cmp r0, #0
    // beq _0223F660
    // mov r0, #1
    // mov r1, #0x10
    // bl G2dRenderer_SetObjCharTransferReservedRegion
    // mov r0, #1
    // bl G2dRenderer_SetPlttTransferReservedRegion
    // bl sub_0203A880
    // mov r0, #0xa
    // str r0, [sp]
    // ldr r0, _0223F688 ; =0x04000050
    // mov r1, #0
    // mov r2, #0xe
    // mov r3, #6
    // bl G2x_SetBlendAlpha_
    // ldr r0, _0223F68C ; =ov83_0223F7A0
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223F67C: .word 0x00000518
    // _0223F680: .word 0x00000838
    // _0223F684: .word 0x0000083C
    // _0223F688: .word 0x04000050
    // _0223F68C: .word ov83_0223F7A0
    // TODO: decompile
}



void ov83_0223F690(void) {
    // push {r4, lr}
    // ldr r2, _0223F700 ; =0x04000304
    // add r4, r0, #0
    // ldrh r1, [r2]
    // ldr r0, _0223F704 ; =0xFFFF7FFF
    // and r0, r1
    // strh r0, [r2]
    // bl ov83_0223F7E4
    // ldr r0, [r4, #0x4c]
    // bl ov83_0223F804
    // mov r0, #0x6b
    // bl PaletteData_Init
    // mov r1, #5
    // lsl r1, r1, #8
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #2
    // lsl r2, r1, #8
    // mov r3, #0x6b
    // bl PaletteData_AllocBuffers
    // mov r0, #5
    // lsl r0, r0, #8
    // mov r2, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // lsl r2, r2, #8
    // mov r3, #0x6b
    // bl PaletteData_AllocBuffers
    // add r0, r4, #0
    // mov r1, #3
    // bl ov83_0223FA00
    // bl ov83_0223FA74
    // add r0, r4, #0
    // mov r1, #2
    // bl ov83_0223FAA8
    // bl ov83_0223FAF0
    // ldr r2, _0223F708 ; =0x00000868
    // mov r0, #2
    // mov r1, #0
    // add r2, r4, r2
    // bl ov83_022477EC
    // add r0, r4, #0
    // mov r1, #4
    // bl ov83_0223FBEC
    // pop {r4, pc}
    // _0223F700: .word 0x04000304
    // _0223F704: .word 0xFFFF7FFF
    // _0223F708: .word 0x00000868
    // TODO: decompile
}



void ov83_0223F70C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // add r2, r0, #0
    // ldr r1, _0223F72C ; =0x000007A4
    // ldr r0, _0223F730 ; =0x00000518
    // lsl r2, r2, #0x18
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // lsr r2, r2, #0x18
    // bl ov83_02246E08
    // pop {r4, pc}
    // nop
    // _0223F72C: .word 0x000007A4
    // _0223F730: .word 0x00000518
    // TODO: decompile
}



void ov83_0223F734(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x1f
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x1f
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r4, #0
    // mov r1, #3
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #2
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #0
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #1
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #4
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #5
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #6
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #7
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r2, _0223F79C ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // pop {r4, pc}
    // nop
    // _0223F79C: .word 0x04000304
    // TODO: decompile
}



void ov83_0223F7A0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #5
    // lsl r0, r0, #8
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0223F7B2
    // bl PaletteData_PushTransparentBuffers
    // ldr r0, [r4, #0x4c]
    // bl DoScheduledBgGpuUpdates
    // ldr r0, _0223F7D8 ; =0x00000868
    // add r0, r4, r0
    // bl ov83_0224780C
    // bl GF_RunVramTransferTasks
    // bl OamManager_ApplyAndResetBuffers
    // ldr r3, _0223F7DC ; =0x027E0000
    // ldr r1, _0223F7E0 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // nop
    // _0223F7D8: .word 0x00000868
    // _0223F7DC: .word 0x027E0000
    // _0223F7E0: .word 0x00003FF8
    // TODO: decompile
}



void ov83_0223F7E4(void) {
}



void ov83_0223F804(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0xf0
    // ldr r5, _0223F9D8 ; =ov83_02247D38
    // add r3, sp, #0xe0
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _0223F9DC ; =ov83_02247DA0
    // add r3, sp, #0xc4
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #1
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x6b
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223F9E0 ; =ov83_02247DBC
    // add r3, sp, #0xa8
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0x6b
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223F9E4 ; =ov83_02247DF4
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #2
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x6b
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223F9E8 ; =ov83_02247E10
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #3
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x6b
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223F9EC ; =ov83_02247E2C
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #4
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223F9F0 ; =ov83_02247E48
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #5
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #5
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x6b
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223F9F4 ; =ov83_02247D84
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r3]
    // add r0, r4, #0
    // mov r1, #6
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #6
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x6b
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223F9F8 ; =ov83_02247DD8
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #7
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #7
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x6b
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // ldr r1, _0223F9FC ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // strh r2, [r1]
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0xf0
    // pop {r3, r4, r5, pc}
    // _0223F9D8: .word ov83_02247D38
    // _0223F9DC: .word ov83_02247DA0
    // _0223F9E0: .word ov83_02247DBC
    // _0223F9E4: .word ov83_02247DF4
    // _0223F9E8: .word ov83_02247E10
    // _0223F9EC: .word ov83_02247E2C
    // _0223F9F0: .word ov83_02247E48
    // _0223F9F4: .word ov83_02247D84
    // _0223F9F8: .word ov83_02247DD8
    // _0223F9FC: .word 0x04000008
    // TODO: decompile
}



void ov83_0223FA00(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // add r4, r1, #0
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // ldr r0, _0223FA70 ; =0x000007A8
    // ldr r2, [r5, #0x4c]
    // ldr r0, [r5, r0]
    // mov r1, #0x22
    // add r3, r4, #0
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _0223FA4E
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // ldr r0, _0223FA70 ; =0x000007A8
    // ldr r2, [r5, #0x4c]
    // ldr r0, [r5, r0]
    // mov r1, #0x23
    // add r3, r4, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // ldr r0, _0223FA70 ; =0x000007A8
    // ldr r2, [r5, #0x4c]
    // ldr r0, [r5, r0]
    // mov r1, #0x24
    // add r3, r4, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0223FA70: .word 0x000007A8
    // TODO: decompile
}



void ov83_0223FA74(void) {
    // add r2, sp, #0
    GfGfxLoader_GetPlttData(0xb7, 0x9c, 0x6b);
    // ldr r0, [sp]
    DC_FlushRange(*((u32*)(r0 + 0xc)), 0xe0);
    // ldr r0, [sp]
    GX_LoadBGPltt(*((u32*)(r0 + 0xc)), 0, 0xe0);
    Heap_Free(r4);
}



void ov83_0223FAA8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // add r4, r1, #0
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // ldr r0, _0223FAEC ; =0x000007A8
    // ldr r2, [r5, #0x4c]
    // ldr r0, [r5, r0]
    // mov r1, #0x22
    // add r3, r4, #0
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // ldr r0, _0223FAEC ; =0x000007A8
    // ldr r2, [r5, #0x4c]
    // ldr r0, [r5, r0]
    // mov r1, #0x2a
    // add r3, r4, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0223FAEC: .word 0x000007A8
    // TODO: decompile
}



void ov83_0223FAF0(void) {
    // add r2, sp, #0
    GfGfxLoader_GetPlttData(0xb7, 0x9c, 0x6b);
    // ldr r0, [sp]
    DC_FlushRange(*((u32*)(r0 + 0xc)), 0x80);
    // ldr r0, [sp]
    GX_LoadBGPltt(*((u32*)(r0 + 0xc)), 0, 0x80);
    Heap_Free(r4);
}



void ov83_0223FB24(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // add r4, r1, #0
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // ldr r0, _0223FB68 ; =0x000007A8
    // ldr r2, [r5, #0x4c]
    // ldr r0, [r5, r0]
    // mov r1, #0x22
    // add r3, r4, #0
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // ldr r0, _0223FB68 ; =0x000007A8
    // ldr r2, [r5, #0x4c]
    // ldr r0, [r5, r0]
    // mov r1, #0x2b
    // add r3, r4, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0223FB68: .word 0x000007A8
    // TODO: decompile
}



void ov83_0223FB6C(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // ldr r0, _0223FBE8 ; =0x000007A8
    // ldr r2, [r4, #0x4c]
    // ldr r0, [r4, r0]
    // mov r1, #0x22
    // mov r3, #2
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // ldr r0, _0223FBE8 ; =0x000007A8
    // ldr r2, [r4, #0x4c]
    // ldr r0, [r4, r0]
    // mov r1, #0x26
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // ldr r0, _0223FBE8 ; =0x000007A8
    // ldr r2, [r4, #0x4c]
    // ldr r0, [r4, r0]
    // mov r1, #0x28
    // mov r3, #6
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // ldr r0, _0223FBE8 ; =0x000007A8
    // ldr r2, [r4, #0x4c]
    // ldr r0, [r4, r0]
    // mov r1, #0x29
    // mov r3, #6
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _0223FBE8: .word 0x000007A8
    // TODO: decompile
}



void ov83_0223FBEC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // add r4, r1, #0
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // ldr r0, _0223FC44 ; =0x000007A8
    // ldr r2, [r5, #0x4c]
    // ldr r0, [r5, r0]
    // mov r1, #0x28
    // add r3, r4, #0
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // ldr r0, _0223FC44 ; =0x000007A8
    // ldr r2, [r5, #0x4c]
    // ldr r0, [r5, r0]
    // mov r1, #0x93
    // add r3, r4, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0x6b
    // str r0, [sp, #4]
    // ldr r0, _0223FC44 ; =0x000007A8
    // mov r1, #0xbe
    // ldr r0, [r5, r0]
    // mov r2, #4
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0223FC44: .word 0x000007A8
    // TODO: decompile
}



void ov83_0223FC48(void) {
    // add r1, sp, #0x38
    // ldrb r1, [r1]
    FillWindowPixelBuffer(r1);
    ReadMsgDataIntoString(*((u32*)(r5 + 0x20)), r6, *((u32*)(r5 + 0x2c)));
    StringExpandPlaceholders(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), *((u32*)(r5 + 0x2c)));
    // ldr r0, [sp, #0x28]
    // add r2, sp, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // add r0, sp, #0x38
    // ldrb r1, [r0]
    // orr r0, r2
    // orr r0, r1
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x3c
    // ldrb r1, [r1]
    AddTextPrinterParameterizedWithColor(r4, *((u32*)(r5 + 0x28)), r7);
    ScheduleWindowCopyToVram(r4);
}



void ov83_0223FCB4(void) {
    ReadMsgDataIntoString(*((u32*)(r0 + 0x20)), r2, *((u32*)(r0 + 0x2c)));
    StringExpandPlaceholders(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), *((u32*)(r5 + 0x2c)));
    // ldr r0, [sp, #0x20]
    // add r2, sp, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #4]
    // add r0, sp, #0x30
    // ldrb r1, [r0]
    // orr r0, r2
    // orr r0, r1
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x34
    // ldrb r1, [r1]
    AddTextPrinterParameterizedWithColor(r4, *((u32*)(r5 + 0x28)), r6);
    ScheduleWindowCopyToVram(r4);
}



void ov83_0223FD14(void) {
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r1, #0xb0
    ov83_0223FC48(r0, r1, 1);
    // add r5, #0xb0
    ScheduleWindowCopyToVram(r5);
}



void ov83_0223FD4C(void) {
    FillWindowPixelBuffer(r1, 0);
    GetMonData(r6, 6, 0);
    BufferItemName(*((u32*)(r5 + 0x24)), 0, r0);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x46, 1);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x47, 0x40);
    GetMonNature(r6);
    BufferNatureName(*((u32*)(r5 + 0x24)), 0, r0);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x48, 1);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x49, 0x40);
    GetMonData(r6, 0xa, 0);
    BufferAbilityName(*((u32*)(r5 + 0x24)), 0, r0);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x4a, 1);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x4b, 0x40);
    GetMonData(r6, 0xa5, 0);
    // str r0, [sp]
    ov83_02240C48(r5, 0, r0, 3);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x4c, 1);
    // str r3, [sp]
    ov83_0223FF20(r5, r4, 0x4d, 0x38);
    GetMonData(r6, 0xa6, 0);
    // str r0, [sp]
    ov83_02240C48(r5, 0, r0, 3);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x4e, 0x58);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x4f, 0x90);
    GetMonData(r6, 0xa8, 0);
    // str r0, [sp]
    ov83_02240C48(r5, 0, r0, 3);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x50, 1);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x51, 0x38);
    GetMonData(r6, 0xa9, 0);
    // str r0, [sp]
    ov83_02240C48(r5, 0, r0, 3);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x52, 0x58);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x53, 0x90);
    GetMonData(r6, 0xa7, 0);
    // str r0, [sp]
    ov83_02240C48(r5, 0, r0, 3);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x54, 1);
    // str r0, [sp]
    ov83_0223FF20(r5, r4, 0x55, 0x38);
    ScheduleWindowCopyToVram(r4);
}



void ov83_0223FF20(void) {
    // add r4, sp, #0x10
    // str r4, [sp]
    // str r4, [sp, #4]
    // str r4, [sp, #8]
    // str r4, [sp, #0xc]
    // str r4, [sp, #0x10]
    // str r4, [sp, #0x14]
    ov83_0223FCB4();
}



void ov83_0223FF44(void) {
    FillWindowPixelBuffer(r1, 0);
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov83_0223FFD8(r6, r5, 0, 0x60);
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov83_0223FFD8(r6, r5, 1, 0x61);
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov83_0223FFD8(r6, r5, 2, 0x62);
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov83_0223FFD8(r6, r5, 3, 0x63);
    ScheduleWindowCopyToVram(r5);
}



void ov83_0223FFD8(void) {
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x38]
    GetMonData(0);
    BufferMoveName(*((u32*)(r4 + 0x24)), r5, r0);
    // mul r0, r3
    // add r0, #0xc
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov83_0223FCB4(r4, r6, r7, 0x18);
    *((u8*)(r4 + 0xa)) = r0;
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x3c]
    GetMonData(0);
    // str r0, [sp]
    ov83_02240C48(r4, 4, r0, 3);
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x40]
    GetMonData(0);
    // str r0, [sp]
    ov83_02240C48(r4, 5, r0, 3);
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r2, [sp, #0x30]
    ov83_0223FCB4(r4, r6, 0x60);
    *((u8*)(r4 + 0xa)) = r0;
}



void ov83_02240080(void) {
    FillWindowPixelBuffer(r1, 0);
    ov80_02237B24(*((u8*)(r5 + 9)), 1);
    ov83_022400BC(r5, r7, ((0 << 0x18) >> 0x18), 0);
    ScheduleWindowCopyToVram(r7);
}



void ov83_022400BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, _02240168 ; =0x000007A4
    // add r4, r2, #0
    // add r6, r1, #0
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // add r7, r3, #0
    // bl Party_GetMonByIndex
    // str r0, [sp, #0xc]
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _022400E2
    // mov r0, #0x24
    // b _022400E4
    // mov r0, #4
    // cmp r7, #0
    // bne _0224010A
    // lsl r1, r4, #6
    // add r2, r0, r1
    // lsl r2, r2, #0x10
    // lsr r7, r2, #0x10
    // add r2, r0, #0
    // add r2, #0x18
    // add r2, r2, r1
    // add r0, #0x20
    // lsl r2, r2, #0x10
    // add r0, r0, r1
    // lsr r2, r2, #0x10
    // lsl r0, r0, #0x10
    // str r2, [sp, #0x10]
    // lsr r0, r0, #0x10
    // mov r4, #1
    // str r0, [sp, #0x14]
    // b _02240116
    // mov r0, #0x1c
    // str r0, [sp, #0x10]
    // mov r0, #0x24
    // mov r7, #4
    // mov r4, #0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // str r6, [sp]
    // add r1, r0, #0
    // str r7, [sp, #4]
    // ldr r0, _0224016C ; =0x00000504
    // str r4, [sp, #8]
    // ldr r0, [r5, r0]
    // mov r2, #3
    // mov r3, #1
    // bl PrintUIntOnWindow
    // str r4, [sp]
    // ldr r0, _0224016C ; =0x00000504
    // ldr r3, [sp, #0x10]
    // ldr r0, [r5, r0]
    // mov r1, #0
    // add r2, r6, #0
    // bl sub_0200CDAC
    // ldr r0, [sp, #0xc]
    // mov r1, #0xa4
    // mov r2, #0
    // bl GetMonData
    // str r6, [sp]
    // add r1, r0, #0
    // ldr r0, [sp, #0x14]
    // mov r2, #3
    // str r0, [sp, #4]
    // ldr r0, _0224016C ; =0x00000504
    // str r4, [sp, #8]
    // ldr r0, [r5, r0]
    // mov r3, #0
    // bl PrintUIntOnWindow
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _02240168: .word 0x000007A4
    // _0224016C: .word 0x00000504
    // TODO: decompile
}



void ov83_02240170(void) {
    ov80_02237B24(*((u8*)(r0 + 9)), 1);
    ov83_022401A4(r5, r6, ((0 << 0x18) >> 0x18), 0);
    ScheduleWindowCopyToVram(r6);
}



void ov83_022401A4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // str r3, [sp, #0x14]
    // ldrb r0, [r5, #9]
    // str r1, [sp, #0x10]
    // add r6, r2, #0
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _022401C0
    // mov r4, #0x28
    // mov r7, #0x50
    // b _022401C4
    // mov r4, #8
    // mov r7, #0x30
    // ldr r0, _02240230 ; =0x000007A4
    // add r1, r6, #0
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // bne _022401E0
    // lsl r0, r6, #6
    // add r6, r4, r0
    // mov r4, #1
    // add r7, r7, r0
    // b _022401E6
    // mov r6, #4
    // mov r4, #0
    // mov r7, #0x30
    // ldr r0, [sp, #0x18]
    // mov r1, #0xa1
    // mov r2, #0
    // bl GetMonData
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // mov r1, #1
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r0, _02240234 ; =0x00000504
    // str r4, [sp, #0xc]
    // ldr r0, [r5, r0]
    // mov r3, #3
    // bl sub_0200CE7C
    // ldr r0, [sp, #0x18]
    // mov r1, #0x6f
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0
    // lsl r0, r0, #0x18
    // str r1, [sp]
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // add r0, r5, #0
    // add r2, r7, #0
    // add r3, r4, #0
    // bl ov83_02240D64
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02240230: .word 0x000007A4
    // _02240234: .word 0x00000504
    // TODO: decompile
}



void ov83_02240238(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldrb r0, [r5, #9]
    // add r6, r1, #0
    // add r4, r2, #0
    // add r7, r3, #0
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _02240252
    // mov r1, #0x24
    // b _02240254
    // mov r1, #4
    // lsl r0, r4, #6
    // add r4, r1, r0
    // mov r0, #0x18
    // str r0, [sp]
    // mov r0, #9
    // mov r1, #0
    // lsl r2, r4, #0x10
    // str r0, [sp, #4]
    // add r0, r6, #0
    // lsr r2, r2, #0x10
    // add r3, r1, #0
    // bl FillWindowPixelRect
    // str r6, [sp]
    // str r4, [sp, #4]
    // mov r3, #1
    // ldr r0, _0224028C ; =0x00000504
    // str r3, [sp, #8]
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // mov r2, #3
    // bl PrintUIntOnWindow
    // add r0, r6, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0224028C: .word 0x00000504
    // TODO: decompile
}



void ov83_02240290(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // mov r1, #5
    // str r1, [sp]
    // mov r1, #0xff
    // str r1, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // mov r1, #2
    // add r4, r0, #0
    // str r1, [sp, #0xc]
    // mov r3, #0
    // str r3, [sp, #0x10]
    // add r1, r4, #0
    // str r3, [sp, #0x14]
    // add r1, #0x60
    // mov r2, #6
    // bl ov83_0223FC48
    // strb r0, [r4, #0xa]
    // ldr r0, _022402F0 ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ov83_02247944
    // mov r3, #1
    // add r1, r4, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // add r1, #0xc0
    // mov r2, #5
    // str r3, [sp, #0x14]
    // bl ov83_0223FC48
    // strb r0, [r4, #0xa]
    // add sp, #0x18
    // pop {r4, pc}
    // _022402F0: .word 0x00000508
    // TODO: decompile
}



void ov83_022402F4(void) {
}



void ov83_02240300(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0224032C ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // mov r1, #1
    // ldr r0, _02240330 ; =0x00000848
    // mvn r1, r1
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov83_02242BAC
    // add r0, r4, #0
    // bl ov83_02242DAC
    // pop {r4, pc}
    // _0224032C: .word 0x00000508
    // _02240330: .word 0x00000848
    // TODO: decompile
}



void ov83_02240334(void) {
}



void ov83_02240348(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02240374 ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // mov r1, #1
    // ldr r0, _02240378 ; =0x00000848
    // mvn r1, r1
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov83_02242BF0
    // add r0, r4, #0
    // bl ov83_02242DFC
    // pop {r4, pc}
    // _02240374: .word 0x00000508
    // _02240378: .word 0x00000848
    // TODO: decompile
}



void ov83_0224037C(void) {
}



void ov83_02240384(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _022403B0 ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // mov r1, #1
    // ldr r0, _022403B4 ; =0x00000848
    // mvn r1, r1
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov83_02242CAC
    // add r0, r4, #0
    // bl ov83_02242E88
    // pop {r4, pc}
    // _022403B0: .word 0x00000508
    // _022403B4: .word 0x00000848
    // TODO: decompile
}



void ov83_022403B8(void) {
}



void ov83_022403C0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldrb r1, [r5, #0xe]
    // mov r0, #8
    // orr r0, r1
    // strb r0, [r5, #0xe]
    // add r0, r5, #0
    // add r0, #0xb0
    // bl ov83_02241354
    // add r0, r5, #0
    // add r0, #0xb0
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r5, #0
    // add r0, #0xe0
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r5, #0
    // bl ov83_0223FB6C
    // ldr r2, _02240428 ; =0x00000868
    // mov r0, #2
    // mov r1, #1
    // add r2, r5, r2
    // bl ov83_022477EC
    // ldr r2, _02240428 ; =0x00000868
    // mov r0, #6
    // mov r1, #1
    // add r2, r5, r2
    // bl ov83_022477EC
    // ldr r2, _02240428 ; =0x00000868
    // mov r0, #7
    // mov r1, #1
    // add r2, r5, r2
    // bl ov83_022477EC
    // mov r0, #0x86
    // mov r1, #0
    // lsl r0, r0, #4
    // strb r1, [r5, r0]
    // add r0, r0, #2
    // strh r1, [r5, r0]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov83_02240B54
    // pop {r3, r4, r5, pc}
    // nop
    // _02240428: .word 0x00000868
    // TODO: decompile
}



void ov83_0224042C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0xe]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _022404F8
    // add r6, r5, #0
    // mov r4, #0
    // add r6, #0x50
    // add r0, r4, #0
    // add r0, #0x30
    // lsl r0, r0, #4
    // add r0, r6, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r4, r4, #1
    // cmp r4, #6
    // blo _02240440
    // mov r0, #0x3b
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0xf
    // lsl r0, r0, #6
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #1
    // lsl r0, r0, #0xa
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0x41
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r2, _022404FC ; =0x00000868
    // mov r0, #2
    // mov r1, #0
    // add r2, r5, r2
    // bl ov83_022477EC
    // ldr r2, _022404FC ; =0x00000868
    // mov r0, #6
    // mov r1, #0
    // add r2, r5, r2
    // bl ov83_022477EC
    // ldr r2, _022404FC ; =0x00000868
    // mov r0, #7
    // mov r1, #0
    // add r2, r5, r2
    // bl ov83_022477EC
    // ldr r0, _02240500 ; =0x0000085C
    // ldr r0, [r5, r0]
    // bl ov83_02247A18
    // ldr r0, _02240504 ; =0x000004DC
    // ldr r0, [r5, r0]
    // bl ListMenuItems_Delete
    // ldr r0, _02240508 ; =0x0000077C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl ov83_0224755C
    // ldr r0, _0224050C ; =0x0000079C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl ov83_0224755C
    // ldr r7, _02240510 ; =0x00000784
    // mov r6, #0
    // add r4, r5, #0
    // ldr r0, [r4, r7]
    // mov r1, #0
    // bl ov83_0224755C
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #6
    // blo _022404D2
    // mov r0, #0x1e
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // mov r1, #0x30
    // mov r2, #0x28
    // bl ov83_0224759C
    // ldrb r1, [r5, #0xe]
    // mov r0, #8
    // bic r1, r0
    // strb r1, [r5, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022404FC: .word 0x00000868
    // _02240500: .word 0x0000085C
    // _02240504: .word 0x000004DC
    // _02240508: .word 0x0000077C
    // _0224050C: .word 0x0000079C
    // _02240510: .word 0x00000784
    // TODO: decompile
}



void ov83_02240514(void) {
    // add r1, r0, #0
    // ldr r0, _02240520 ; =0x0000084C
    // ldr r3, _02240524 ; =ov83_02247864
    // add r0, r1, r0
    // ldr r1, [r1, #0x4c]
    // bx r3
    // _02240520: .word 0x0000084C
    // _02240524: .word ov83_02247864
    // TODO: decompile
}



void ov83_02240528(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // add r4, r1, #0
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #1
    // lsl r0, r0, #0xa
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x41
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // cmp r4, #6
    // ldr r0, _02240658 ; =0x00010200
    // bne _02240574
    // mov r3, #0
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r2, #0x6a
    // bl ov83_022479E4
    // b _0224058C
    // mov r3, #0
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r2, #0x6b
    // bl ov83_022479E4
    // ldr r0, _0224065C ; =0x0000050C
    // ldr r0, [r5, r0]
    // bl Save_PlayerData_GetProfile
    // add r6, r0, #0
    // mov r0, #8
    // mov r1, #0x6b
    // bl String_New
    // add r4, r0, #0
    // add r0, r6, #0
    // bl PlayerProfile_GetNamePtr
    // add r1, r0, #0
    // add r0, r4, #0
    // bl CopyU16ArrayToString
    // add r0, r6, #0
    // bl PlayerProfile_GetTrainerGender
    // cmp r0, #0
    // bne _022405BC
    // ldr r0, _02240660 ; =0x00070800
    // b _022405C0
    // mov r0, #0xc1
    // lsl r0, r0, #0xa
    // mov r2, #0
    // str r2, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // lsl r0, r0, #0xa
    // add r0, r5, r0
    // add r1, r4, #0
    // add r3, r2, #0
    // str r2, [sp, #8]
    // bl ov83_02247998
    // add r0, r4, #0
    // bl String_Delete
    // ldrb r0, [r5, #9]
    // bl sub_0205C1F0
    // add r4, r0, #0
    // ldrb r0, [r5, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r5, #4]
    // add r1, r4, #0
    // bl FrontierSave_GetStat
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0
    // mov r3, #4
    // bl ov83_02240C48
    // mov r0, #0x41
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02240658 ; =0x00010200
    // mov r1, #0x41
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // lsl r1, r1, #4
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #2
    // bl ov83_02241DD8
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // mov r0, #1
    // lsl r0, r0, #0xa
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x41
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02240658: .word 0x00010200
    // _0224065C: .word 0x0000050C
    // _02240660: .word 0x00070800
    // TODO: decompile
}



void ov83_02240664(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // ldr r0, _02240738 ; =0x00000862
    // add r4, r5, #0
    // ldrsh r1, [r5, r0]
    // mov r0, #6
    // mov r6, #0
    // mul r0, r1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x18]
    // lsl r0, r0, #3
    // str r0, [sp, #0x14]
    // add r4, #0x50
    // add r0, r6, #0
    // add r0, #0x30
    // lsl r0, r0, #4
    // str r0, [sp, #0x1c]
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x18]
    // add r1, r0, r6
    // ldr r0, _0224073C ; =0x00000861
    // ldrb r0, [r5, r0]
    // cmp r1, r0
    // bge _02240722
    // add r0, r6, #0
    // add r0, #0x30
    // lsl r0, r0, #4
    // str r0, [sp, #0x20]
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02240740 ; =0x00010200
    // ldr r2, _02240744 ; =0x000004DC
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r3, [r5, r2]
    // ldr r2, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // add r2, r2, r3
    // lsl r7, r6, #3
    // ldr r2, [r7, r2]
    // add r0, r4, r0
    // mov r1, #0
    // mov r3, #4
    // bl AddTextPrinterParameterizedWithColor
    // ldr r1, _02240744 ; =0x000004DC
    // add r0, r5, #0
    // ldr r2, [r5, r1]
    // ldr r1, [sp, #0x14]
    // add r1, r1, r2
    // add r1, r7, r1
    // ldr r1, [r1, #4]
    // ldrb r2, [r5, #0x13]
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // bl ov83_02240EC4
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0
    // mov r3, #2
    // bl ov83_02240C48
    // ldr r0, [sp, #0x20]
    // add r0, r4, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, r0, #4
    // str r0, [sp]
    // mov r0, #0x14
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, _02240740 ; =0x00010200
    // ldr r1, [sp, #0x20]
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r4, r1
    // mov r3, #0x68
    // bl ov83_02241DD8
    // ldr r0, [sp, #0x1c]
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // add r0, r6, #1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // cmp r6, #6
    // blo _02240682
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _02240738: .word 0x00000862
    // _0224073C: .word 0x00000861
    // _02240740: .word 0x00010200
    // _02240744: .word 0x000004DC
    // TODO: decompile
}



void ov83_02240748(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, _022407E8 ; =0x00000862
    // mov r4, #0
    // ldrsh r1, [r5, r0]
    // mov r0, #6
    // str r4, [sp, #4]
    // mul r0, r1
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // lsl r0, r7, #3
    // add r6, r5, #0
    // str r0, [sp]
    // ldr r0, _022407EC ; =0x00000861
    // ldrb r0, [r5, r0]
    // cmp r7, r0
    // bhs _022407C8
    // ldr r1, _022407F0 ; =0x000004DC
    // add r0, r5, #0
    // ldr r2, [r5, r1]
    // ldr r1, [sp]
    // add r2, r1, r2
    // ldr r1, [sp, #4]
    // add r1, r1, r2
    // ldr r1, [r1, #4]
    // ldrb r2, [r5, #0x13]
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // bl ov83_02240F48
    // str r0, [sp, #8]
    // ldr r0, _022407F4 ; =0x00000518
    // ldr r2, [sp, #8]
    // add r0, r5, r0
    // add r1, r4, #4
    // bl ov83_02247264
    // ldr r0, _022407F4 ; =0x00000518
    // ldr r2, [sp, #8]
    // add r0, r5, r0
    // add r1, r4, #4
    // bl ov83_022472A0
    // add r1, sp, #0xc
    // add r0, r4, #0
    // add r1, #2
    // add r2, sp, #0xc
    // bl ov83_02242894
    // ldr r0, _022407F8 ; =0x00000784
    // add r1, sp, #0xc
    // add r2, sp, #0xc
    // ldrh r1, [r1, #2]
    // ldrh r2, [r2]
    // ldr r0, [r6, r0]
    // bl ov83_02247568
    // ldr r0, _022407F8 ; =0x00000784
    // mov r1, #1
    // ldr r0, [r6, r0]
    // bl ov83_0224755C
    // b _022407D2
    // ldr r0, _022407F8 ; =0x00000784
    // mov r1, #0
    // ldr r0, [r6, r0]
    // bl ov83_0224755C
    // ldr r0, [sp, #4]
    // add r4, r4, #1
    // add r0, #8
    // add r7, r7, #1
    // add r6, r6, #4
    // str r0, [sp, #4]
    // cmp r4, #6
    // blo _02240764
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022407E8: .word 0x00000862
    // _022407EC: .word 0x00000861
    // _022407F0: .word 0x000004DC
    // _022407F4: .word 0x00000518
    // _022407F8: .word 0x00000784
    // TODO: decompile
}



void ov83_022407FC(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // ldr r2, _02240880 ; =0x00000862
    // str r1, [sp]
    // ldrsh r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #1
    // add r2, r2, #1
    // bl ov83_02240C48
    // ldr r0, _02240884 ; =0x00000861
    // mov r1, #6
    // ldrb r0, [r4, r0]
    // sub r0, r0, #1
    // bl _s32_div_f
    // add r2, r0, #0
    // mov r0, #0
    // mov r1, #1
    // str r0, [sp]
    // add r0, r4, #0
    // add r2, r2, #1
    // add r3, r1, #0
    // bl ov83_02240C48
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl GetWindowWidth
    // lsl r1, r0, #3
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02240888 ; =0x00010200
    // mov r1, #0x3d
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // lsl r1, r1, #4
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // add r1, r4, r1
    // mov r3, #0x67
    // bl ov83_02241DD8
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r3, r4, pc}
    // nop
    // _02240880: .word 0x00000862
    // _02240884: .word 0x00000861
    // _02240888: .word 0x00010200
    // TODO: decompile
}



void ov83_0224088C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0x3e
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x3e
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _022408DC ; =0x00010200
    // lsl r5, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0x3e
    // lsr r3, r5, #0x1f
    // lsl r0, r0, #4
    // add r3, r5, r3
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x69
    // asr r3, r3, #1
    // bl ov83_022479E4
    // mov r0, #0x3e
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _022408DC: .word 0x00010200
    // TODO: decompile
}



void ov83_022408E0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x42
    // lsl r0, r0, #4
    // add r4, r1, #0
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, _02240970 ; =0x00000862
    // mov r0, #6
    // ldrsh r2, [r5, r1]
    // sub r1, #0xc6
    // mul r0, r2
    // add r0, r4, r0
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // ldr r0, [r5, r1]
    // mov r1, #0
    // bl ov83_0224755C
    // cmp r4, #6
    // bhs _02240960
    // ldr r0, _02240974 ; =0x00000861
    // ldrb r0, [r5, r0]
    // cmp r6, r0
    // bge _02240960
    // ldrb r2, [r5, #0x13]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov83_02240F48
    // add r4, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02240978 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x42
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x1c]
    // add r0, r5, r0
    // add r2, r4, #0
    // bl ov83_022479E4
    // ldr r0, _0224097C ; =0x00000518
    // mov r1, #3
    // add r0, r5, r0
    // add r2, r4, #0
    // bl ov83_02247264
    // ldr r0, _0224097C ; =0x00000518
    // mov r1, #3
    // add r0, r5, r0
    // add r2, r4, #0
    // bl ov83_022472A0
    // ldr r0, _02240980 ; =0x0000079C
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl ov83_0224755C
    // mov r0, #0x42
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _02240970: .word 0x00000862
    // _02240974: .word 0x00000861
    // _02240978: .word 0x00010200
    // _0224097C: .word 0x00000518
    // _02240980: .word 0x0000079C
    // TODO: decompile
}



void ov83_02240984(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0x43
    // lsl r0, r0, #4
    // mov r6, #0x3e
    // add r4, r5, r0
    // mov r7, #0
    // add r0, r4, #0
    // add r1, r7, #0
    // bl FillWindowPixelBuffer
    // add r6, r6, #1
    // add r4, #0x10
    // cmp r6, #0x45
    // bls _02240994
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02240B34 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x45
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r2, #0x58
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02240B34 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x49
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r2, #0x46
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02240B34 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x47
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r2, #0x59
    // bl ov83_022479E4
    // mov r1, #0
    // ldr r2, _02240B38 ; =0x00000818
    // str r1, [sp]
    // ldrh r2, [r5, r2]
    // add r0, r5, #0
    // mov r3, #3
    // bl ov83_02240C48
    // mov r0, #0
    // str r0, [sp]
    // ldr r2, _02240B3C ; =0x0000081A
    // add r0, r5, #0
    // ldrh r2, [r5, r2]
    // mov r1, #1
    // mov r3, #3
    // bl ov83_02240C48
    // mov r0, #0x12
    // lsl r0, r0, #6
    // add r0, r5, r0
    // bl GetWindowWidth
    // lsl r1, r0, #3
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02240B34 ; =0x00010200
    // mov r1, #0x12
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // lsl r1, r1, #6
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x5f
    // bl ov83_02241DD8
    // ldr r0, _02240B40 ; =0x00000804
    // ldr r0, [r5, r0]
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, [r5, #0x24]
    // mov r1, #0
    // bl BufferBoxMonNickname
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _02240B34 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #0x43
    // lsl r1, r1, #4
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x5b
    // bl ov83_02241DD8
    // ldr r0, _02240B44 ; =0x0000080E
    // ldrb r0, [r5, r0]
    // lsl r1, r0, #0x18
    // lsr r1, r1, #0x1f
    // bne _02240AC2
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x19
    // bne _02240AA2
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02240B48 ; =0x00050600
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x11
    // lsl r0, r0, #6
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r2, #0x56
    // bl ov83_022479E4
    // b _02240AC2
    // cmp r0, #1
    // bne _02240AC2
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xc1
    // str r3, [sp, #4]
    // lsl r0, r0, #0xa
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x11
    // lsl r0, r0, #6
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r2, #0x57
    // bl ov83_022479E4
    // mov r1, #0
    // ldr r2, _02240B4C ; =0x0000080F
    // str r1, [sp]
    // ldrb r2, [r5, r2]
    // add r0, r5, #0
    // mov r3, #3
    // bl ov83_02240C48
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _02240B34 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #0x46
    // lsl r1, r1, #4
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x5e
    // bl ov83_02241DD8
    // ldr r2, _02240B50 ; =0x00000812
    // ldr r0, [r5, #0x24]
    // ldrh r2, [r5, r2]
    // mov r1, #0
    // bl BufferItemName
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _02240B34 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #0x4a
    // lsl r1, r1, #4
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x47
    // bl ov83_02241DD8
    // mov r0, #0x43
    // lsl r0, r0, #4
    // mov r4, #0x3e
    // add r5, r5, r0
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #0x45
    // bls _02240B22
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02240B34: .word 0x00010200
    // _02240B38: .word 0x00000818
    // _02240B3C: .word 0x0000081A
    // _02240B40: .word 0x00000804
    // _02240B44: .word 0x0000080E
    // _02240B48: .word 0x00050600
    // _02240B4C: .word 0x0000080F
    // _02240B50: .word 0x00000812
    // TODO: decompile
}



void ov83_02240B54(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xde
    // mov r3, #0x6b
    // bl NewMsgDataFromNarc
    // add r7, r0, #0
    // ldr r0, _02240C28 ; =0x0000050C
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // mov r2, #1
    // bl ov83_0224777C
    // ldr r1, [sp]
    // cmp r1, #6
    // bne _02240B8A
    // sub r0, r0, #1
    // lsl r1, r0, #1
    // ldr r0, _02240C2C ; =ov83_02247D12
    // ldr r6, _02240C30 ; =ov83_02247F88
    // ldrh r1, [r0, r1]
    // ldr r0, _02240C34 ; =0x00000861
    // strb r1, [r5, r0]
    // b _02240B98
    // sub r0, r0, #1
    // lsl r1, r0, #1
    // ldr r0, _02240C38 ; =ov83_02247D24
    // ldr r6, _02240C3C ; =ov83_02247EE0
    // ldrh r1, [r0, r1]
    // ldr r0, _02240C34 ; =0x00000861
    // strb r1, [r5, r0]
    // ldr r0, _02240C34 ; =0x00000861
    // mov r1, #0x6b
    // ldrb r0, [r5, r0]
    // bl ListMenuItems_New
    // ldr r1, _02240C40 ; =0x000004DC
    // mov r4, #0
    // str r0, [r5, r1]
    // ldr r0, _02240C34 ; =0x00000861
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // ble _02240BCE
    // ldr r0, _02240C40 ; =0x000004DC
    // lsl r2, r4, #1
    // ldrh r2, [r6, r2]
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // add r3, r4, #0
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, _02240C34 ; =0x00000861
    // ldrb r0, [r5, r0]
    // cmp r4, r0
    // blt _02240BB0
    // add r0, r7, #0
    // bl DestroyMsgData
    // add r0, r5, #0
    // bl ov83_02247B7C
    // ldr r1, _02240C44 ; =0x0000085C
    // str r0, [r5, r1]
    // sub r1, #0xe0
    // ldr r0, [r5, r1]
    // mov r1, #1
    // bl ov83_0224755C
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl ov83_02240528
    // add r0, r5, #0
    // bl ov83_02240664
    // add r0, r5, #0
    // bl ov83_02240748
    // add r0, r5, #0
    // bl ov83_022407FC
    // add r0, r5, #0
    // bl ov83_0224088C
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_022408E0
    // add r0, r5, #0
    // bl ov83_02240984
    // mov r0, #0x1e
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // mov r1, #0x30
    // mov r2, #0x48
    // bl ov83_0224759C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02240C28: .word 0x0000050C
    // _02240C2C: .word ov83_02247D12
    // _02240C30: .word ov83_02247F88
    // _02240C34: .word 0x00000861
    // _02240C38: .word ov83_02247D24
    // _02240C3C: .word ov83_02247EE0
    // _02240C40: .word 0x000004DC
    // _02240C44: .word 0x0000085C
    // TODO: decompile
}



void ov83_02240C48(void) {
}



void ov83_02240C60(void) {
}



void ov83_02240C6C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02240C88 ; =0x0000050C
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // bl Save_PlayerData_GetProfile
    // add r2, r0, #0
    // ldr r0, [r5, #0x24]
    // add r1, r4, #0
    // bl BufferPlayersName
    // pop {r3, r4, r5, pc}
    // nop
    // _02240C88: .word 0x0000050C
    // TODO: decompile
}



void ov83_02240C8C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r1, #0
    // ldr r1, _02240CF4 ; =0x0000050C
    // str r2, [sp, #0x10]
    // ldr r0, [r0, r1]
    // add r6, r3, #0
    // bl Save_PlayerData_GetProfile
    // add r7, r0, #0
    // mov r0, #8
    // mov r1, #0x6b
    // bl String_New
    // add r4, r0, #0
    // add r0, r7, #0
    // bl PlayerProfile_GetNamePtr
    // add r1, r0, #0
    // add r0, r4, #0
    // bl CopyU16ArrayToString
    // add r0, r7, #0
    // bl PlayerProfile_GetTrainerGender
    // cmp r0, #0
    // bne _02240CC6
    // ldr r1, _02240CF8 ; =0x00070800
    // b _02240CCA
    // mov r1, #0xc1
    // lsl r1, r1, #0xa
    // str r6, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r1, sp, #0x18
    // ldrb r1, [r1, #0x10]
    // ldr r3, [sp, #0x10]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02240CF4: .word 0x0000050C
    // _02240CF8: .word 0x00070800
    // TODO: decompile
}



void ov83_02240CFC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // add r7, r1, #0
    // str r2, [sp, #0x18]
    // add r6, r3, #0
    // bl sub_0203769C
    // mov r1, #1
    // eor r0, r1
    // bl sub_02034818
    // str r0, [sp, #0x1c]
    // bl PlayerProfile_GetTrainerGender
    // cmp r0, #0
    // bne _02240D22
    // ldr r4, _02240D60 ; =0x00070800
    // b _02240D26
    // mov r4, #0xc1
    // lsl r4, r4, #0xa
    // ldr r0, [r5, #0x24]
    // ldr r2, [sp, #0x1c]
    // mov r1, #0
    // bl BufferPlayersName
    // str r6, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // lsr r0, r4, #0x10
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // lsr r0, r4, #8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r2, #1
    // bl ov83_0223FCB4
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _02240D60: .word 0x00070800
    // TODO: decompile
}



void ov83_02240D64(void) {
    // add r3, sp, #0x20
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r4, [sp, #8]
    // str r5, [sp, #0xc]
    // str r6, [sp, #0x10]
    // add r2, sp, #0x20
    // str r2, [sp, #0x14]
    ov83_0223FCB4(0x57, r2);
}



void ov83_02240DA8(void) {
}



void ov83_02240DB0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02240DDC ; =0x000005DC
    // bl PlaySE
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #1
    // bne _02240DCE
    // ldrb r2, [r4, #0xd]
    // add r0, r4, #0
    // mov r1, #0xc
    // bl ov83_02241368
    // ldrb r1, [r4, #0xd]
    // add r0, r4, #0
    // mov r2, #0
    // bl ov83_02240DE0
    // pop {r4, pc}
    // nop
    // _02240DDC: .word 0x000005DC
    // TODO: decompile
}



void ov83_02240DE0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r7, r1, #0
    // add r6, r2, #0
    // bne _02240DF8
    // mov r0, #0x76
    // lsl r0, r0, #4
    // ldr r4, [r5, r0]
    // mov r2, #1
    // mov r1, #0
    // b _02240E00
    // ldr r0, _02240E6C ; =0x00000764
    // mov r2, #2
    // ldr r4, [r5, r0]
    // mov r1, #0x11
    // ldrb r0, [r5, #0x15]
    // cmp r7, r0
    // blo _02240E26
    // add r0, r4, #0
    // bl ov83_022475D4
    // add r0, r4, #0
    // mov r1, #0xe0
    // mov r2, #0xa0
    // bl ov83_02247568
    // cmp r6, #0
    // bne _02240E68
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_02242844
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r1, r2, #0
    // bl ov83_022475D4
    // add r0, r5, #0
    // add r1, sp, #4
    // add r2, sp, #0
    // add r3, r7, #0
    // bl ov83_02240E70
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // lsr r2, r2, #0x10
    // bl ov83_02247568
    // cmp r6, #0
    // bne _02240E68
    // ldrb r1, [r5, #0xc]
    // ldrb r0, [r5, #0x15]
    // cmp r1, r0
    // blo _02240E60
    // add r0, r5, #0
    // mov r1, #1
    // bl ov83_02242844
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_02242814
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02240E6C: .word 0x00000764
    // TODO: decompile
}



void ov83_02240E70(void) {
    ov80_02237D8C(*((u8*)(r0 + 9)));
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r6]
}



void ov83_02240EC4(void) {
    // push {r3, r4, r5, lr}
    // add r3, r0, #0
    // ldr r0, _02240EEC ; =0x0000050C
    // add r5, r1, #0
    // add r4, r2, #0
    // ldrb r1, [r3, #9]
    // ldr r0, [r3, r0]
    // mov r2, #1
    // bl ov83_0224777C
    // cmp r4, #6
    // bne _02240EE4
    // ldr r0, _02240EF0 ; =ov83_02247FC8
    // lsl r1, r5, #1
    // ldrh r0, [r0, r1]
    // pop {r3, r4, r5, pc}
    // ldr r0, _02240EF4 ; =ov83_02247F16
    // lsl r1, r5, #1
    // ldrh r0, [r0, r1]
    // pop {r3, r4, r5, pc}
    // _02240EEC: .word 0x0000050C
    // _02240EF0: .word ov83_02247FC8
    // _02240EF4: .word ov83_02247F16
    // TODO: decompile
}



void ov83_02240EF8(void) {
    // push {r3, lr}
    // ldr r3, _02240F38 ; =ov83_02247EE0
    // mov r2, #0
    // ldrh r1, [r3]
    // cmp r0, r1
    // bne _02240F0C
    // ldr r0, _02240F3C ; =ov83_02247F16
    // lsl r1, r2, #1
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // add r2, r2, #1
    // add r3, r3, #2
    // cmp r2, #0x1b
    // blo _02240EFE
    // ldr r2, _02240F40 ; =ov83_02247F88
    // mov r3, #0
    // ldrh r1, [r2]
    // cmp r0, r1
    // bne _02240F26
    // ldr r0, _02240F44 ; =ov83_02247FC8
    // lsl r1, r3, #1
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // add r3, r3, #1
    // add r2, r2, #2
    // cmp r3, #0x20
    // blo _02240F18
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _02240F38: .word ov83_02247EE0
    // _02240F3C: .word ov83_02247F16
    // _02240F40: .word ov83_02247F88
    // _02240F44: .word ov83_02247FC8
    // TODO: decompile
}



void ov83_02240F48(void) {
    // push {r3, r4, r5, lr}
    // add r3, r0, #0
    // ldr r0, _02240F70 ; =0x0000050C
    // add r5, r1, #0
    // add r4, r2, #0
    // ldrb r1, [r3, #9]
    // ldr r0, [r3, r0]
    // mov r2, #1
    // bl ov83_0224777C
    // cmp r4, #6
    // bne _02240F68
    // ldr r0, _02240F74 ; =ov83_02247F88
    // lsl r1, r5, #1
    // ldrh r0, [r0, r1]
    // pop {r3, r4, r5, pc}
    // ldr r0, _02240F78 ; =ov83_02247EE0
    // lsl r1, r5, #1
    // ldrh r0, [r0, r1]
    // pop {r3, r4, r5, pc}
    // _02240F70: .word 0x0000050C
    // _02240F74: .word ov83_02247F88
    // _02240F78: .word ov83_02247EE0
    // TODO: decompile
}



void ov83_02240F7C(void) {
    // ldr r4, [sp, #0x18]
    ov80_02237D8C(*((u8*)(r0 + 9)));
    // strh r0, [r5]
    // strh r0, [r6]
    // strh r0, [r7]
    // strh r0, [r4]
    // strh r1, [r5]
    // strh r1, [r6]
    // strh r0, [r7]
    // strh r1, [r4]
}



void ov83_02240FAC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r4, r0, #0
    // ldrb r0, [r4, #0x14]
    // add r6, r2, #0
    // bl ov83_02247768
    // add r5, r0, #0
    // ldr r0, _0224119C ; =0x000007A4
    // add r1, r5, #0
    // ldr r0, [r4, r0]
    // bl Party_GetMonByIndex
    // str r0, [sp, #0x14]
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // mov r1, #0xa4
    // mov r2, #0
    // bl GetMonData
    // add r7, r0, #0
    // ldr r0, [sp, #0x1c]
    // lsl r1, r7, #0x10
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x10
    // mov r2, #0x30
    // bl CalculateHpBarColor
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov83_022411B0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // lsl r1, r7, #0x10
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x10
    // mov r2, #0x30
    // bl CalculateHpBarColor
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov83_022411DC
    // add r7, r0, #0
    // cmp r6, #0xa
    // bls _02241018
    // b _02241196
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02241024: ; jump table
    // ldrb r1, [r4, #0xe]
    // mov r0, #4
    // add sp, #0x20
    // bic r1, r0
    // strb r1, [r4, #0xe]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r1, [r4, #0xe]
    // lsl r0, r1, #0x1d
    // lsr r0, r0, #0x1f
    // bne _0224108E
    // mov r0, #4
    // orr r0, r1
    // strb r0, [r4, #0xe]
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _02241064
    // mov r1, #0x40
    // b _02241066
    // mov r1, #0x20
    // mov r0, #8
    // str r0, [sp]
    // lsl r0, r5, #6
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // mov r1, #0
    // mov r0, #0x3e
    // str r0, [sp, #8]
    // ldr r0, _022411A0 ; =0x00000518
    // str r1, [sp, #0xc]
    // add r0, r4, r0
    // add r2, r1, #0
    // add r3, r1, #0
    // str r1, [sp, #0x10]
    // bl ov83_02247454
    // ldr r1, _022411A4 ; =0x0000075C
    // str r0, [r4, r1]
    // ldr r0, _022411A4 ; =0x0000075C
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _022410AC
    // bl ov83_02247624
    // cmp r0, #0
    // bne _022410AC
    // ldr r0, _022411A4 ; =0x0000075C
    // ldr r0, [r4, r0]
    // bl ov83_0224753C
    // ldr r0, _022411A4 ; =0x0000075C
    // mov r1, #0
    // str r1, [r4, r0]
    // ldr r0, _022411A4 ; =0x0000075C
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _02241196
    // ldr r0, [sp, #0x14]
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r3, r0, #0
    // add r0, r4, #0
    // add r1, #0x80
    // add r2, r5, #0
    // bl ov83_02240238
    // ldrb r0, [r4, #0xd]
    // cmp r0, r5
    // bne _022410E0
    // add r0, r4, #0
    // bl ov83_02241E18
    // add r0, r4, #0
    // mov r1, #0
    // bl ov83_022421E0
    // lsl r5, r5, #2
    // ldr r0, _022411A8 ; =0x00000768
    // add r1, r4, r5
    // ldr r0, [r1, r0]
    // add r1, r7, #0
    // bl ov83_022475D4
    // ldr r0, _022411AC ; =0x0000073C
    // add r1, r4, r5
    // ldr r0, [r1, r0]
    // ldr r1, [sp, #0x18]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ov83_02247600
    // ldrb r1, [r4, #0xe]
    // mov r0, #4
    // add sp, #0x20
    // bic r1, r0
    // strb r1, [r4, #0xe]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r1, [r4, #0xe]
    // lsl r0, r1, #0x1d
    // lsr r0, r0, #0x1f
    // bne _02241152
    // mov r0, #4
    // orr r0, r1
    // strb r0, [r4, #0xe]
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _02241128
    // mov r1, #0x40
    // b _0224112A
    // mov r1, #0x20
    // mov r0, #0x10
    // str r0, [sp]
    // lsl r0, r5, #6
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // mov r1, #0
    // mov r0, #0x3e
    // str r0, [sp, #8]
    // ldr r0, _022411A0 ; =0x00000518
    // str r1, [sp, #0xc]
    // add r0, r4, r0
    // add r2, r1, #0
    // add r3, r1, #0
    // str r1, [sp, #0x10]
    // bl ov83_02247454
    // ldr r1, _022411A4 ; =0x0000075C
    // str r0, [r4, r1]
    // ldr r0, _022411A4 ; =0x0000075C
    // ldr r0, [r4, r0]
    // bl ov83_02247624
    // cmp r0, #0
    // bne _02241196
    // ldr r0, _022411A4 ; =0x0000075C
    // ldr r0, [r4, r0]
    // bl ov83_0224753C
    // ldr r0, _022411A4 ; =0x0000075C
    // mov r1, #0
    // str r1, [r4, r0]
    // ldrb r1, [r4, #0xe]
    // mov r0, #4
    // add sp, #0x20
    // bic r1, r0
    // strb r1, [r4, #0xe]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r1, [r4, #0xe]
    // mov r0, #4
    // add sp, #0x20
    // bic r1, r0
    // strb r1, [r4, #0xe]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r1, [r4, #0xe]
    // mov r0, #4
    // add sp, #0x20
    // bic r1, r0
    // strb r1, [r4, #0xe]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224119C: .word 0x000007A4
    // _022411A0: .word 0x00000518
    // _022411A4: .word 0x0000075C
    // _022411A8: .word 0x00000768
    // _022411AC: .word 0x0000073C
    // TODO: decompile
}



void ov83_022411B0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022411C0: ; jump table
}



void ov83_022411DC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022411EC: ; jump table
}



void ov83_02241208(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xd
    // ldrsb r0, [r4, r0]
    // add r0, r0, r1
    // lsl r0, r0, #0x18
    // asr r1, r0, #0x18
    // ldrb r0, [r4, #0x14]
    // bpl _02241222
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // asr r1, r0, #0x18
    // b _02241228
    // cmp r1, r0
    // blt _02241228
    // mov r1, #0
    // strb r1, [r4, #0xd]
    // add r0, r4, #0
    // bl ov83_02240DB0
    // ldrb r0, [r4, #0x14]
    // ldrb r1, [r4, #0xd]
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _02241250 ; =0x000007A4
    // ldr r0, [r4, r0]
    // bl Party_GetMonByIndex
    // add r2, r0, #0
    // add r0, r4, #0
    // add r4, #0x90
    // add r1, r4, #0
    // bl ov83_0223FD4C
    // pop {r4, pc}
    // _02241250: .word 0x000007A4
    // TODO: decompile
}



void ov83_02241254(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xd
    // ldrsb r0, [r4, r0]
    // add r0, r0, r1
    // lsl r0, r0, #0x18
    // asr r1, r0, #0x18
    // ldrb r0, [r4, #0x14]
    // bpl _0224126E
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // asr r1, r0, #0x18
    // b _02241274
    // cmp r1, r0
    // blt _02241274
    // mov r1, #0
    // strb r1, [r4, #0xd]
    // add r0, r4, #0
    // bl ov83_02240DB0
    // ldrb r0, [r4, #0x14]
    // ldrb r1, [r4, #0xd]
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _0224129C ; =0x000007A4
    // ldr r0, [r4, r0]
    // bl Party_GetMonByIndex
    // add r2, r0, #0
    // add r0, r4, #0
    // add r4, #0x90
    // add r1, r4, #0
    // bl ov83_0223FF44
    // pop {r4, pc}
    // _0224129C: .word 0x000007A4
    // TODO: decompile
}



void ov83_022412A0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov83_02241730
    // add r0, r4, #0
    // bl ov83_0224042C
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02241354
    // add r0, r4, #0
    // bl ov83_02241B18
    // ldr r2, _022412D4 ; =0x00000868
    // mov r0, #2
    // mov r1, #0
    // add r2, r4, r2
    // bl ov83_022477EC
    // ldr r0, _022412D8 ; =0x00000778
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl ov83_0224755C
    // pop {r4, pc}
    // _022412D4: .word 0x00000868
    // _022412D8: .word 0x00000778
    // TODO: decompile
}



void ov83_022412DC(void) {
    GetMonData(0x3a, 0);
    GetMonData(r5, 0x42, r4);
    GetMonData(r5, 0x3b, 0);
    GetMonData(r5, 0x43, 0);
    GetMonData(r5, 0x3c, 0);
    GetMonData(r5, 0x44, 0);
    GetMonData(r5, 0x3d, 0);
    GetMonData(r5, 0x45, 0);
}



void ov83_02241354(void) {
}



void ov83_02241368(void) {
    // push {r3, r4, r5, lr}
    // add r3, r1, #0
    // sub r3, #0xa
    // add r5, r0, #0
    // cmp r3, #3
    // bhi _022413A6
    // add r3, r3, r3
    // add r3, pc
    // ldrh r3, [r3, #6]
    // lsl r3, r3, #0x10
    // asr r3, r3, #0x10
    // add pc, r3
    // _02241380: ; jump table
    // mov r4, #0x31
    // bl ov83_022413C4
    // b _022413A6
    // mov r4, #0x32
    // bl ov83_0224143C
    // b _022413A6
    // mov r4, #0x33
    // bl ov83_022414CC
    // b _022413A6
    // mov r4, #0x34
    // bl ov83_02241504
    // ldr r1, _022413C0 ; =0x000007AC
    // add r0, r4, #0
    // add r1, r5, r1
    // mov r2, #0x28
    // bl sub_02037030
    // cmp r0, #1
    // bne _022413BA
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _022413C0: .word 0x000007AC
    // TODO: decompile
}



void ov83_022413C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _02241400 ; =0x0000050C
    // add r4, r1, #0
    // ldr r0, [r6, r0]
    // bl Save_PlayerData_GetProfile
    // ldr r1, _02241404 ; =0x000007AC
    // strh r4, [r6, r1]
    // bl PlayerProfile_GetTrainerGender
    // ldr r1, _02241408 ; =0x000007AE
    // mov r4, #0
    // strh r0, [r6, r1]
    // add r5, r6, #4
    // sub r7, r1, #2
    // ldr r0, _02241400 ; =0x0000050C
    // ldrb r1, [r6, #9]
    // lsl r2, r4, #0x18
    // ldr r0, [r6, r0]
    // lsr r2, r2, #0x18
    // bl ov83_0224777C
    // strh r0, [r5, r7]
    // add r4, r4, #1
    // add r5, r5, #2
    // cmp r4, #3
    // blt _022413E4
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02241400: .word 0x0000050C
    // _02241404: .word 0x000007AC
    // _02241408: .word 0x000007AE
    // TODO: decompile
}



void ov83_0224140C(void) {
    // push {r4, r5, r6, lr}
    // add r4, r3, #0
    // add r5, r0, #0
    // ldrb r0, [r4, #0xf]
    // add r6, r2, #0
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _02241436
    // ldr r0, _02241438 ; =0x000007FF
    // mov r3, #0
    // add r5, r6, #4
    // ldrh r2, [r5]
    // add r1, r4, r3
    // add r3, r3, #1
    // add r5, r5, #2
    // strb r2, [r1, r0]
    // cmp r3, #3
    // blt _02241428
    // pop {r4, r5, r6, pc}
    // _02241438: .word 0x000007FF
    // TODO: decompile
}



void ov83_0224143C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02241470 ; =0x000007AC
    // add r4, r2, #0
    // strh r1, [r5, r0]
    // add r0, r0, #2
    // strh r4, [r5, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0224145A
    // ldrb r0, [r5, #0x12]
    // cmp r0, #0xff
    // bne _0224145A
    // strb r4, [r5, #0x12]
    // ldrb r1, [r5, #0x12]
    // mov r0, #0x7b
    // lsl r0, r0, #4
    // strh r1, [r5, r0]
    // ldrh r2, [r5, #0x10]
    // add r1, r0, #4
    // add r0, r0, #6
    // strh r2, [r5, r1]
    // ldrb r1, [r5, #0x13]
    // strh r1, [r5, r0]
    // pop {r3, r4, r5, pc}
    // _02241470: .word 0x000007AC
    // TODO: decompile
}



void ov83_02241474(void) {
    // push {r4, r5, r6, lr}
    // add r4, r3, #0
    // add r6, r0, #0
    // ldrb r0, [r4, #0xf]
    // add r5, r2, #0
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _022414C4
    // ldrh r1, [r5, #2]
    // ldr r0, _022414C8 ; =0x000007FD
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _022414B8
    // ldrb r0, [r4, #0x12]
    // cmp r0, #0xff
    // ldr r0, _022414C8 ; =0x000007FD
    // beq _022414A6
    // mov r1, #0
    // strb r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // ldrb r1, [r4, r0]
    // ldrb r0, [r4, #0x15]
    // add r0, r1, r0
    // strb r0, [r4, #0x12]
    // ldrh r0, [r5, #8]
    // strh r0, [r4, #0x10]
    // ldrh r0, [r5, #0xa]
    // strb r0, [r4, #0x13]
    // pop {r4, r5, r6, pc}
    // ldrh r0, [r5, #4]
    // strb r0, [r4, #0x12]
    // ldrh r0, [r5, #8]
    // strh r0, [r4, #0x10]
    // ldrh r0, [r5, #0xa]
    // strb r0, [r4, #0x13]
    // pop {r4, r5, r6, pc}
    // nop
    // _022414C8: .word 0x000007FD
    // TODO: decompile
}



void ov83_022414CC(void) {
    // ldr r2, _022414D8 ; =0x000007AC
    // strh r1, [r0, r2]
    // ldrb r3, [r0, #0xd]
    // add r1, r2, #2
    // strh r3, [r0, r1]
    // bx lr
    // _022414D8: .word 0x000007AC
    // TODO: decompile
}



void ov83_022414DC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r2, #0
    // add r4, r3, #0
    // bl sub_0203769C
    // cmp r5, r0
    // beq _022414FC
    // ldrh r0, [r6, #2]
    // ldr r1, _02241500 ; =0x000007FC
    // mov r2, #1
    // strb r0, [r4, r1]
    // ldrb r1, [r4, r1]
    // add r0, r4, #0
    // bl ov83_02240DE0
    // pop {r4, r5, r6, pc}
    // nop
    // _02241500: .word 0x000007FC
    // TODO: decompile
}



void ov83_02241504(void) {
    // ldr r1, _0224150C ; =0x000007AC
    // mov r2, #1
    // strh r2, [r0, r1]
    // bx lr
    // _0224150C: .word 0x000007AC
    // TODO: decompile
}



void ov83_02241510(void) {
}



void ov83_0224152C(void) {
}



void ov83_0224153C(void) {
    // add r1, sp, #4
    // str r1, [sp]
    // add r1, sp, #8
    // add r3, sp, #4
    // add r1, #2
    // add r2, sp, #8
    // add r3, #2
    ov83_02240F7C();
    ov80_02237D8C(*((u8*)(r5 + 9)));
    // str r0, [sp]
    // add r3, sp, #4
    ov83_02240C8C(r5, r4, (((*((u16*)(r3 + 6)) + 4) << 0x10) >> 0x10), (((*((u16*)(r3 + 4)) + 1) << 0x10) >> 0x10));
    sub_0203769C();
    // add r2, sp, #4
    // str r0, [sp]
    ov83_02240C8C(r5, r4, *((u16*)(r2 + 6)), (((*((u16*)(r2 + 4)) + 1) << 0x10) >> 0x10));
    // str r0, [sp]
    // add r3, sp, #4
    // ldrh r3, [r3]
    ov83_02240CFC(r5, r4, *((u16*)(r3 + 2)), (((r3 + 1) << 0x10) >> 0x10));
    // str r0, [sp]
    ov83_02240CFC(r5, r4, *((u16*)(r2 + 6)), (((*((u16*)(r2 + 4)) + 1) << 0x10) >> 0x10));
    // str r0, [sp]
    // add r3, sp, #4
    // ldrh r3, [r3]
    ov83_02240C8C(r5, r4, *((u16*)(r3 + 2)), (((r3 + 1) << 0x10) >> 0x10));
    ScheduleWindowCopyToVram(r4);
}



void ov83_022415F4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0x14]
    // add r4, r2, #0
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _0224168C ; =0x000007A4
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // add r6, r0, #0
    // ldr r0, _02241690 ; =0x0000050C
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // mov r2, #0
    // bl ov83_0224777C
    // add r0, r6, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_02240C60
    // ldr r0, _02241694 ; =0x00000508
    // ldr r0, [r5, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r5, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // sub r1, r4, #1
    // lsl r2, r1, #1
    // ldr r1, _02241698 ; =_02247D0C
    // add r0, r5, #0
    // ldrh r1, [r1, r2]
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r5, #0xa]
    // cmp r4, #1
    // beq _0224165A
    // cmp r4, #2
    // beq _02241664
    // cmp r4, #3
    // beq _0224166E
    // b _02241680
    // add r0, r6, #0
    // mov r1, #0x18
    // bl ov83_0224152C
    // b _02241684
    // add r0, r6, #0
    // mov r1, #0x29
    // bl ov83_0224152C
    // b _02241684
    // add r0, r6, #0
    // mov r1, #0x18
    // bl ov83_0224152C
    // add r0, r6, #0
    // mov r1, #0x29
    // bl ov83_0224152C
    // b _02241684
    // bl GF_AssertFail
    // ldr r0, _0224169C ; =0x000005EC
    // bl PlaySE
    // pop {r4, r5, r6, pc}
    // _0224168C: .word 0x000007A4
    // _02241690: .word 0x0000050C
    // _02241694: .word 0x00000508
    // _02241698: .word _02247D0C
    // _0224169C: .word 0x000005EC
    // TODO: decompile
}



void ov83_022416A0(void) {
    // push {r0, r1, r2, r3}
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0x14]
    // add r4, r1, #0
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _02241724 ; =0x000007A4
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // mov r1, #6
    // add r2, sp, #0x18
    // add r6, r0, #0
    // bl SetMonData
    // ldrb r0, [r5, #0xd]
    // cmp r0, r4
    // bne _022416D6
    // add r0, r5, #0
    // bl ov83_02241E18
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_022421E0
    // ldrb r0, [r5, #0x14]
    // add r1, r4, #0
    // bl ov83_02247768
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _02241728 ; =0x0000074C
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ov83_0224755C
    // add r0, r6, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_02240C60
    // add r2, sp, #0x10
    // ldrh r2, [r2, #8]
    // ldr r0, [r5, #0x24]
    // mov r1, #1
    // bl BufferItemName
    // add r0, r5, #0
    // mov r1, #0x3b
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r5, #0xa]
    // ldr r0, _0224172C ; =0x00000623
    // bl PlaySE
    // pop {r4, r5, r6}
    // pop {r3}
    // add sp, #0x10
    // bx r3
    // nop
    // _02241724: .word 0x000007A4
    // _02241728: .word 0x0000074C
    // _0224172C: .word 0x00000623
    // TODO: decompile
}



void ov83_02241730(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xe]
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _0224174E
    // mov r0, #0x21
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl TouchscreenListMenu_DestroyButtons
    // add r0, r4, #0
    // bl ov83_02242D5C
    // ldr r0, _02241758 ; =0x0000084C
    // add r0, r4, r0
    // bl ov83_022478B4
    // pop {r4, pc}
    // _02241758: .word 0x0000084C
    // TODO: decompile
}



void ov83_0224175C(void) {
}



void ov83_02241770(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r4, r1, #0
    // add r1, sp, #0x1c
    // str r1, [sp]
    // add r1, sp, #0x20
    // add r3, sp, #0x1c
    // add r5, r0, #0
    // add r1, #2
    // add r2, sp, #0x20
    // add r3, #2
    // bl ov83_02240F7C
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _02241806
    // add r1, sp, #0x1c
    // ldrh r0, [r1, #6]
    // add r0, #0x48
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // ldrh r0, [r1, #4]
    // mov r1, #0
    // add r2, r7, #0
    // add r0, r0, #1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // mov r0, #0x30
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r3, r6, #0
    // bl FillWindowPixelRect
    // ldrb r0, [r5, #9]
    // bl sub_0205C1F0
    // str r0, [sp, #0x18]
    // ldrb r0, [r5, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r5, #4]
    // ldr r1, [sp, #0x18]
    // bl FrontierSave_GetStat
    // mov r1, #0
    // add r2, r0, #0
    // str r1, [sp]
    // add r0, r5, #0
    // mov r3, #4
    // bl ov83_02240C48
    // str r6, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r2, #2
    // str r2, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r3, r7, #0
    // bl ov83_0223FCB4
    // strb r0, [r5, #0xa]
    // b _022418D4
    // mov r0, #0x30
    // str r0, [sp]
    // mov r0, #0x10
    // mov r1, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0x40
    // add r3, r1, #0
    // bl FillWindowPixelRect
    // mov r0, #0x30
    // str r0, [sp]
    // mov r0, #0x10
    // mov r1, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0xc0
    // add r3, r1, #0
    // bl FillWindowPixelRect
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0224185A
    // ldrb r0, [r5, #9]
    // bl sub_0205C1F0
    // add r6, r0, #0
    // ldrb r0, [r5, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r5, #4]
    // add r1, r6, #0
    // bl FrontierSave_GetStat
    // add r6, r0, #0
    // ldr r0, _022418E0 ; =0x00000802
    // ldrh r7, [r5, r0]
    // b _0224187C
    // ldr r0, _022418E0 ; =0x00000802
    // ldrh r6, [r5, r0]
    // ldrb r0, [r5, #9]
    // bl sub_0205C1F0
    // add r7, r0, #0
    // ldrb r0, [r5, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r5, #4]
    // add r1, r7, #0
    // bl FrontierSave_GetStat
    // add r7, r0, #0
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r6, #0
    // mov r3, #4
    // str r1, [sp]
    // bl ov83_02240C48
    // mov r0, #0x70
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _022418E4 ; =0x00010200
    // add r1, r4, #0
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // mov r3, #2
    // bl ov83_02241DD8
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r7, #0
    // mov r3, #4
    // str r1, [sp]
    // bl ov83_02240C48
    // mov r0, #0xf0
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _022418E4 ; =0x00010200
    // add r1, r4, #0
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // mov r3, #3
    // bl ov83_02241DD8
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022418E0: .word 0x00000802
    // _022418E4: .word 0x00010200
    // TODO: decompile
}



void ov83_022418E8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, _02241A4C ; =0x000005E3
    // add r7, r1, #0
    // add r5, r2, #0
    // bl PlaySE
    // ldrb r0, [r4, #0x15]
    // add r1, r7, #0
    // str r0, [sp]
    // bl ov83_0224776C
    // str r0, [sp, #4]
    // cmp r5, #0xa
    // bhi _02241940
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02241914: ; jump table
    // sub r0, r5, #1
    // lsl r1, r0, #1
    // ldr r0, _02241A50 ; =ov83_02247D18
    // ldrh r6, [r0, r1]
    // b _02241940
    // ldrh r0, [r4, #0x10]
    // bl ov83_02240EF8
    // add r6, r0, #0
    // b _02241940
    // mov r6, #0
    // bl sub_0203769C
    // cmp r0, #0
    // bne _02241974
    // ldr r0, [sp]
    // cmp r7, r0
    // bhs _02241962
    // add r0, r4, #0
    // mov r1, #5
    // bl ov83_02240C6C
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, #4]
    // add r2, r6, #0
    // bl ov80_02237FA4
    // b _0224199E
    // ldr r0, [r4, #0x24]
    // mov r1, #5
    // bl ov83_022477C4
    // ldr r0, _02241A54 ; =0x00000802
    // ldrh r1, [r4, r0]
    // sub r1, r1, r6
    // strh r1, [r4, r0]
    // b _0224199E
    // ldr r0, [sp]
    // cmp r7, r0
    // bhs _0224198C
    // ldr r0, [r4, #0x24]
    // mov r1, #5
    // bl ov83_022477C4
    // ldr r0, _02241A54 ; =0x00000802
    // ldrh r1, [r4, r0]
    // sub r1, r1, r6
    // strh r1, [r4, r0]
    // b _0224199E
    // add r0, r4, #0
    // mov r1, #5
    // bl ov83_02240C6C
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, #4]
    // add r2, r6, #0
    // bl ov80_02237FA4
    // add r1, r4, #0
    // add r0, r4, #0
    // add r1, #0x50
    // bl ov83_02241770
    // add r0, r4, #0
    // bl ov83_02241730
    // add r0, r4, #0
    // bl ov83_02241B18
    // add r0, r4, #0
    // bl ov83_0224042C
    // ldr r2, _02241A58 ; =0x00000868
    // mov r0, #2
    // mov r1, #0
    // add r2, r4, r2
    // bl ov83_022477EC
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02241354
    // cmp r5, #0xa
    // bhi _02241A48
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022419DE: ; jump table
    // ldr r0, _02241A5C ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // add r2, r5, #0
    // bl ov83_022415F4
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02241A5C ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // ldrh r2, [r4, #0x10]
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // bl ov83_022416A0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // bl ov83_02241A60
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // bl ov83_02241ABC
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02241A4C: .word 0x000005E3
    // _02241A50: .word ov83_02247D18
    // _02241A54: .word 0x00000802
    // _02241A58: .word 0x00000868
    // _02241A5C: .word 0x00000508
    // TODO: decompile
}



void ov83_02241A60(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // mov r1, #2
    // bl ov83_0223FAA8
    // add r0, r5, #0
    // add r0, #0xb0
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r5, #0
    // add r0, #0xa0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #5
    // lsl r0, r0, #6
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldrb r0, [r5, #0x14]
    // add r1, r4, #0
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _02241AB4 ; =0x000007A4
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // add r1, r5, #0
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, #0x90
    // bl ov83_0223FD4C
    // ldr r2, _02241AB8 ; =0x00000868
    // mov r0, #2
    // mov r1, #1
    // add r2, r5, r2
    // bl ov83_022477EC
    // pop {r3, r4, r5, pc}
    // nop
    // _02241AB4: .word 0x000007A4
    // _02241AB8: .word 0x00000868
    // TODO: decompile
}



void ov83_02241ABC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // mov r1, #2
    // bl ov83_0223FB24
    // add r0, r5, #0
    // add r0, #0xb0
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r5, #0
    // add r0, #0xa0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #5
    // lsl r0, r0, #6
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldrb r0, [r5, #0x14]
    // add r1, r4, #0
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _02241B10 ; =0x000007A4
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // add r1, r5, #0
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, #0x90
    // bl ov83_0223FF44
    // ldr r2, _02241B14 ; =0x00000868
    // mov r0, #2
    // mov r1, #1
    // add r2, r5, r2
    // bl ov83_022477EC
    // pop {r3, r4, r5, pc}
    // nop
    // _02241B10: .word 0x000007A4
    // _02241B14: .word 0x00000868
    // TODO: decompile
}



void ov83_02241B18(void) {
    // ldr r2, _02241B28 ; =0x00000868
    // add r3, r0, #0
    // add r2, r3, r2
    // ldr r3, _02241B2C ; =ov83_022477EC
    // mov r0, #2
    // mov r1, #0
    // bx r3
    // nop
    // _02241B28: .word 0x00000868
    // _02241B2C: .word ov83_022477EC
    // TODO: decompile
}



void ov83_02241B30(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r0, #0
    // ldrb r0, [r6, #9]
    // mov r1, #1
    // bl ov80_02237B24
    // mov r4, #0
    // str r0, [sp]
    // cmp r0, #0
    // ble _02241BB8
    // add r5, r6, #0
    // ldr r0, _02241BBC ; =0x000007A4
    // add r1, r4, #0
    // ldr r0, [r6, r0]
    // bl Party_GetMonByIndex
    // str r0, [sp, #4]
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // add r7, r0, #0
    // ldr r0, [sp, #4]
    // mov r1, #0xa4
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // lsl r0, r7, #0x10
    // lsl r1, r1, #0x10
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x10
    // bl ov80_0222A43C
    // add r1, r0, #0
    // ldr r0, _02241BC0 ; =0x0000073C
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _02241BAE
    // bl ov83_02247600
    // ldrb r0, [r6, #0x14]
    // ldrb r1, [r6, #0xd]
    // bl ov83_02247768
    // cmp r4, r0
    // bne _02241B98
    // ldrb r1, [r6, #0xd]
    // ldrb r0, [r6, #0x15]
    // cmp r1, r0
    // blo _02241BA4
    // ldr r0, _02241BC0 ; =0x0000073C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl ov83_0224760C
    // b _02241BAE
    // ldr r0, _02241BC0 ; =0x0000073C
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl ov83_0224760C
    // ldr r0, [sp]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, r0
    // blt _02241B48
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02241BBC: .word 0x000007A4
    // _02241BC0: .word 0x0000073C
    // TODO: decompile
}



void ov83_02241BC4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // str r2, [sp]
    // ldrb r0, [r5, #9]
    // add r6, r1, #0
    // mov r1, #0
    // bl ov80_02237B24
    // ldr r0, [sp]
    // cmp r0, #4
    // beq _02241BE0
    // mov r0, #1
    // b _02241BE2
    // mov r0, #0
    // ldrb r7, [r5, #0x15]
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r7, #0
    // add r1, r6, #0
    // bl ov83_0224776C
    // bl sub_0203769C
    // cmp r0, #0
    // bne _02241CC4
    // cmp r6, r7
    // bhs _02241C92
    // add r0, r5, #0
    // mov r1, #5
    // bl ov83_02240C6C
    // ldr r0, _02241DC4 ; =0x0000050C
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // add r2, r4, #0
    // bl ov83_0224777C
    // add r2, r0, #0
    // mov r0, #6
    // add r6, r4, #0
    // mul r6, r0
    // ldr r3, _02241DC8 ; =ov83_02247D48
    // lsl r2, r2, #1
    // add r3, r3, r6
    // ldrb r1, [r5, #9]
    // ldrh r2, [r2, r3]
    // ldr r0, [r5, #4]
    // bl ov80_02237FA4
    // ldr r0, _02241DC4 ; =0x0000050C
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // add r2, r4, #0
    // bl ov83_0224777C
    // add r7, r0, #0
    // ldr r0, _02241DC4 ; =0x0000050C
    // ldr r0, [r5, r0]
    // bl Save_Frontier_GetStatic
    // str r0, [sp, #4]
    // ldrb r0, [r5, #9]
    // add r1, r4, #0
    // bl sub_0205C174
    // str r0, [sp, #8]
    // ldrb r0, [r5, #9]
    // add r1, r4, #0
    // bl sub_0205C174
    // bl sub_0205C268
    // add r3, r7, #1
    // add r2, r0, #0
    // lsl r3, r3, #0x10
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // lsr r3, r3, #0x10
    // bl sub_02031108
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #1
    // beq _02241C72
    // b _02241D8C
    // ldr r0, [sp]
    // ldrb r1, [r5, #0xe]
    // cmp r0, #4
    // bne _02241C86
    // mov r0, #0x60
    // bic r1, r0
    // mov r0, #0x20
    // orr r0, r1
    // strb r0, [r5, #0xe]
    // b _02241D8C
    // mov r0, #0x60
    // bic r1, r0
    // mov r0, #0x40
    // orr r0, r1
    // strb r0, [r5, #0xe]
    // b _02241D8C
    // ldr r0, [r5, #0x24]
    // mov r1, #5
    // bl ov83_022477C4
    // ldr r0, _02241DCC ; =0x000007FF
    // add r6, r4, #0
    // add r1, r5, r0
    // ldrb r7, [r1, r4]
    // mov r0, #6
    // mul r6, r0
    // ldr r0, _02241DCC ; =0x000007FF
    // ldr r2, _02241DC8 ; =ov83_02247D48
    // add r0, r0, #3
    // lsl r3, r7, #1
    // add r2, r2, r6
    // ldrh r0, [r5, r0]
    // ldrh r2, [r3, r2]
    // sub r0, r0, r2
    // ldr r2, _02241DCC ; =0x000007FF
    // add r2, r2, #3
    // strh r0, [r5, r2]
    // ldrb r0, [r1, r4]
    // add r0, r0, #1
    // strb r0, [r1, r4]
    // b _02241D8C
    // cmp r6, r7
    // bhs _02241CFA
    // ldr r0, [r5, #0x24]
    // mov r1, #5
    // bl ov83_022477C4
    // ldr r0, _02241DCC ; =0x000007FF
    // add r6, r4, #0
    // add r1, r5, r0
    // ldrb r7, [r1, r4]
    // mov r0, #6
    // mul r6, r0
    // ldr r0, _02241DCC ; =0x000007FF
    // ldr r2, _02241DC8 ; =ov83_02247D48
    // add r0, r0, #3
    // lsl r3, r7, #1
    // add r2, r2, r6
    // ldrh r0, [r5, r0]
    // ldrh r2, [r3, r2]
    // sub r0, r0, r2
    // ldr r2, _02241DCC ; =0x000007FF
    // add r2, r2, #3
    // strh r0, [r5, r2]
    // ldrb r0, [r1, r4]
    // add r0, r0, #1
    // strb r0, [r1, r4]
    // b _02241D8C
    // add r0, r5, #0
    // mov r1, #5
    // bl ov83_02240C6C
    // ldr r0, _02241DC4 ; =0x0000050C
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // add r2, r4, #0
    // bl ov83_0224777C
    // add r2, r0, #0
    // mov r0, #6
    // add r6, r4, #0
    // mul r6, r0
    // ldr r3, _02241DC8 ; =ov83_02247D48
    // lsl r2, r2, #1
    // add r3, r3, r6
    // ldrb r1, [r5, #9]
    // ldrh r2, [r2, r3]
    // ldr r0, [r5, #4]
    // bl ov80_02237FA4
    // ldr r0, _02241DC4 ; =0x0000050C
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // add r2, r4, #0
    // bl ov83_0224777C
    // add r7, r0, #0
    // ldr r0, _02241DC4 ; =0x0000050C
    // ldr r0, [r5, r0]
    // bl Save_Frontier_GetStatic
    // str r0, [sp, #0xc]
    // ldrb r0, [r5, #9]
    // add r1, r4, #0
    // bl sub_0205C174
    // str r0, [sp, #0x10]
    // ldrb r0, [r5, #9]
    // add r1, r4, #0
    // bl sub_0205C174
    // bl sub_0205C268
    // add r3, r7, #1
    // add r2, r0, #0
    // lsl r3, r3, #0x10
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // lsr r3, r3, #0x10
    // bl sub_02031108
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #1
    // bne _02241D8C
    // ldr r0, [sp]
    // ldrb r1, [r5, #0xe]
    // cmp r0, #4
    // bne _02241D82
    // mov r0, #0x60
    // bic r1, r0
    // mov r0, #0x20
    // orr r0, r1
    // strb r0, [r5, #0xe]
    // b _02241D8C
    // mov r0, #0x60
    // bic r1, r0
    // mov r0, #0x40
    // orr r0, r1
    // strb r0, [r5, #0xe]
    // add r0, r5, #0
    // bl ov83_02241730
    // add r1, r5, #0
    // add r0, r5, #0
    // add r1, #0x50
    // bl ov83_02241770
    // ldr r0, _02241DD0 ; =0x00000508
    // ldr r0, [r5, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r5, #0
    // add r0, #0xb0
    // bl ov83_02247944
    // ldr r1, _02241DD4 ; =ov83_02247D5A
    // lsl r2, r7, #1
    // add r1, r1, r6
    // ldrh r1, [r2, r1]
    // add r0, r5, #0
    // mov r2, #1
    // bl ov83_0223FD14
    // strb r0, [r5, #0xa]
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02241DC4: .word 0x0000050C
    // _02241DC8: .word ov83_02247D48
    // _02241DCC: .word 0x000007FF
    // _02241DD0: .word 0x00000508
    // _02241DD4: .word ov83_02247D5A
    // TODO: decompile
}



void ov83_02241DD8(void) {
    NewString_ReadMsgData(r2, r3);
    StringExpandPlaceholders(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), r0);
    // ldr r0, [sp, #0x28]
    // ldr r2, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // ldr r3, [sp, #0x24]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    ov83_02247998(r4, *((u32*)(r5 + 0x28)));
    String_Delete(r6);
}



void ov83_02241E18(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldrb r0, [r5, #0x14]
    // ldrb r1, [r5, #0xd]
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _02241FA8 ; =0x000007A4
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // add r6, r0, #0
    // bl AcquireMonLock
    // str r0, [sp, #4]
    // ldr r0, _02241FAC ; =0x00000804
    // str r6, [r5, r0]
    // add r0, r6, #0
    // bl Mon_GetBoxMon
    // ldr r1, _02241FB0 ; =0x00000808
    // mov r2, #0
    // str r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #5
    // bl GetMonData
    // ldr r1, _02241FB4 ; =0x0000080C
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa1
    // bl GetMonData
    // ldr r1, _02241FB8 ; =0x0000080F
    // mov r2, #0
    // strb r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa
    // bl GetMonData
    // mov r1, #0x81
    // lsl r1, r1, #4
    // strb r0, [r5, r1]
    // add r0, r6, #0
    // bl GetMonNature
    // ldr r1, _02241FBC ; =0x00000811
    // mov r2, #0
    // strb r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #6
    // bl GetMonData
    // ldr r1, _02241FC0 ; =0x00000812
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa3
    // bl GetMonData
    // ldr r1, _02241FC4 ; =0x00000818
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa4
    // bl GetMonData
    // ldr r1, _02241FC8 ; =0x0000081A
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa5
    // bl GetMonData
    // ldr r1, _02241FCC ; =0x0000081C
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa8
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _02241FD0 ; =0x0000081E
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa6
    // bl GetMonData
    // mov r1, #0x82
    // lsl r1, r1, #4
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa9
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _02241FD4 ; =0x00000822
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa7
    // bl GetMonData
    // ldr r1, _02241FD8 ; =0x00000824
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0x70
    // bl GetMonData
    // ldr r1, _02241FDC ; =0x00000826
    // strb r0, [r5, r1]
    // mov r1, #0
    // add r0, r6, #0
    // add r2, r1, #0
    // bl GetMonData
    // ldr r1, _02241FE0 ; =0x00000814
    // mov r2, #0
    // str r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xb0
    // bl GetMonData
    // cmp r0, #1
    // ldr r1, _02241FE4 ; =0x0000080E
    // bne _02241F24
    // ldrb r2, [r5, r1]
    // mov r0, #0x80
    // bic r2, r0
    // strb r2, [r5, r1]
    // b _02241F2C
    // ldrb r2, [r5, r1]
    // mov r0, #0x80
    // orr r0, r2
    // strb r0, [r5, r1]
    // add r0, r6, #0
    // bl GetMonGender
    // ldr r3, _02241FE4 ; =0x0000080E
    // mov r2, #0x7f
    // ldrb r1, [r5, r3]
    // mov r4, #0
    // bic r1, r2
    // mov r2, #0x7f
    // and r0, r2
    // orr r0, r1
    // strb r0, [r5, r3]
    // lsl r0, r4, #1
    // add r0, r5, r0
    // add r1, r4, #0
    // str r0, [sp]
    // add r0, r6, #0
    // add r1, #0x36
    // mov r2, #0
    // bl GetMonData
    // ldr r2, [sp]
    // ldr r1, _02241FE8 ; =0x00000828
    // add r7, r5, r4
    // strh r0, [r2, r1]
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x3a
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x83
    // lsl r1, r1, #4
    // strb r0, [r7, r1]
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x3e
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // lsl r1, r1, #0x18
    // ldr r2, [sp]
    // ldr r0, _02241FE8 ; =0x00000828
    // lsr r1, r1, #0x18
    // ldrh r0, [r2, r0]
    // bl GetMoveMaxPP
    // ldr r1, _02241FEC ; =0x00000834
    // strb r0, [r7, r1]
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #4
    // blo _02241F44
    // ldr r1, [sp, #4]
    // add r0, r6, #0
    // bl ReleaseMonLock
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02241FA8: .word 0x000007A4
    // _02241FAC: .word 0x00000804
    // _02241FB0: .word 0x00000808
    // _02241FB4: .word 0x0000080C
    // _02241FB8: .word 0x0000080F
    // _02241FBC: .word 0x00000811
    // _02241FC0: .word 0x00000812
    // _02241FC4: .word 0x00000818
    // _02241FC8: .word 0x0000081A
    // _02241FCC: .word 0x0000081C
    // _02241FD0: .word 0x0000081E
    // _02241FD4: .word 0x00000822
    // _02241FD8: .word 0x00000824
    // _02241FDC: .word 0x00000826
    // _02241FE0: .word 0x00000814
    // _02241FE4: .word 0x0000080E
    // _02241FE8: .word 0x00000828
    // _02241FEC: .word 0x00000834
    // TODO: decompile
}



void ov83_02241FF0(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0x19
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x1d
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x1f
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x21
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x23
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x25
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x27
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x29
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x2b
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _022421DC ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x19
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x58
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _022421DC ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x4a
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _022421DC ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x1d
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x48
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _022421DC ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x1f
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x46
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _022421DC ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x21
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x59
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _022421DC ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x23
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x4c
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _022421DC ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x25
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x50
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _022421DC ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x4e
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _022421DC ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x29
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x52
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _022421DC ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x2b
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x54
    // bl ov83_022479E4
    // mov r0, #0x19
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x1d
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x1f
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x21
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x23
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x25
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x27
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x29
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x2b
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _022421DC: .word 0x00010200
    // TODO: decompile
}



void ov83_022421E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r4, r0, #0
    // mov r0, #0x17
    // lsl r0, r0, #4
    // str r1, [sp, #0x14]
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #6
    // lsl r0, r0, #6
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #7
    // lsl r0, r0, #6
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #2
    // lsl r0, r0, #8
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #9
    // lsl r0, r0, #6
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x26
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0xa
    // lsl r0, r0, #6
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0xb
    // lsl r0, r0, #6
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x2e
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #3
    // lsl r0, r0, #8
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x31
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x32
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x33
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0xd
    // lsl r0, r0, #6
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0224262C ; =0x00000804
    // ldr r0, [r4, r0]
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, [r4, #0x24]
    // mov r1, #0
    // bl BufferBoxMonNickname
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _02242630 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #0x17
    // lsl r1, r1, #4
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // add r1, r4, r1
    // mov r3, #0x5b
    // bl ov83_02241DD8
    // ldr r0, _02242634 ; =0x0000080E
    // ldrb r0, [r4, r0]
    // lsl r1, r0, #0x18
    // lsr r1, r1, #0x1f
    // bne _02242354
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x19
    // bne _02242334
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02242638 ; =0x00050600
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x56
    // bl ov83_022479E4
    // b _02242354
    // cmp r0, #1
    // bne _02242354
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xc1
    // str r3, [sp, #4]
    // lsl r0, r0, #0xa
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x57
    // bl ov83_022479E4
    // mov r1, #0
    // ldr r2, _0224263C ; =0x0000080F
    // str r1, [sp]
    // ldrb r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #3
    // bl ov83_02240C48
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _02242630 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #0x1a
    // lsl r1, r1, #4
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // add r1, r4, r1
    // mov r3, #0x5e
    // bl ov83_02241DD8
    // mov r2, #0x81
    // lsl r2, r2, #4
    // ldrb r2, [r4, r2]
    // ldr r0, [r4, #0x24]
    // mov r1, #0
    // bl BufferAbilityName
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _02242630 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #7
    // lsl r1, r1, #6
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // add r1, r4, r1
    // mov r3, #0x4b
    // bl ov83_02241DD8
    // ldr r2, _02242640 ; =0x00000811
    // ldr r0, [r4, #0x24]
    // ldrb r2, [r4, r2]
    // mov r1, #0
    // bl BufferNatureName
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _02242630 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #0x1e
    // lsl r1, r1, #4
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // add r1, r4, r1
    // mov r3, #0x49
    // bl ov83_02241DD8
    // ldr r2, _02242644 ; =0x00000812
    // ldr r0, [r4, #0x24]
    // ldrh r2, [r4, r2]
    // mov r1, #0
    // bl BufferItemName
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _02242630 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #2
    // lsl r1, r1, #8
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // add r1, r4, r1
    // mov r3, #0x47
    // bl ov83_02241DD8
    // mov r1, #0
    // ldr r2, _02242648 ; =0x00000818
    // str r1, [sp]
    // ldrh r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #3
    // bl ov83_02240C48
    // mov r0, #0
    // str r0, [sp]
    // ldr r2, _0224264C ; =0x0000081A
    // add r0, r4, #0
    // ldrh r2, [r4, r2]
    // mov r1, #1
    // mov r3, #3
    // bl ov83_02240C48
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02242630 ; =0x00010200
    // mov r1, #0x22
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // lsl r1, r1, #4
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // add r1, r4, r1
    // mov r3, #0x5f
    // bl ov83_02241DD8
    // mov r1, #0
    // ldr r2, _02242650 ; =0x0000081C
    // str r1, [sp]
    // ldrh r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #3
    // bl ov83_02240C48
    // mov r0, #9
    // lsl r0, r0, #6
    // add r0, r4, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02242630 ; =0x00010200
    // mov r1, #9
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // lsl r1, r1, #6
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // add r1, r4, r1
    // mov r3, #0x4d
    // bl ov83_02241DD8
    // mov r1, #0
    // ldr r2, _02242654 ; =0x0000081E
    // str r1, [sp]
    // ldrh r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #3
    // bl ov83_02240C48
    // mov r0, #0x26
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02242630 ; =0x00010200
    // mov r1, #0x26
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // lsl r1, r1, #4
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // add r1, r4, r1
    // mov r3, #0x51
    // bl ov83_02241DD8
    // mov r1, #0
    // mov r2, #0x82
    // str r1, [sp]
    // lsl r2, r2, #4
    // ldrh r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #3
    // bl ov83_02240C48
    // mov r0, #0xa
    // lsl r0, r0, #6
    // add r0, r4, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02242630 ; =0x00010200
    // mov r1, #0xa
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // lsl r1, r1, #6
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // add r1, r4, r1
    // mov r3, #0x4f
    // bl ov83_02241DD8
    // mov r1, #0
    // ldr r2, _02242658 ; =0x00000822
    // str r1, [sp]
    // ldrh r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #3
    // bl ov83_02240C48
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02242630 ; =0x00010200
    // mov r1, #0x2a
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // lsl r1, r1, #4
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // add r1, r4, r1
    // mov r3, #0x53
    // bl ov83_02241DD8
    // mov r1, #0
    // ldr r2, _0224265C ; =0x00000824
    // str r1, [sp]
    // ldrh r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #3
    // bl ov83_02240C48
    // mov r0, #0xb
    // lsl r0, r0, #6
    // add r0, r4, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02242630 ; =0x00010200
    // mov r1, #0xb
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // lsl r1, r1, #6
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // add r1, r4, r1
    // mov r3, #0x55
    // bl ov83_02241DD8
    // add r6, r4, #0
    // mov r5, #0
    // str r4, [sp, #0x1c]
    // add r6, #0x50
    // ldr r3, [sp, #0x1c]
    // ldr r2, _02242660 ; =0x00000828
    // ldr r0, [r4, #0x24]
    // ldrh r2, [r3, r2]
    // add r1, r5, #0
    // bl BufferMoveName
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02242630 ; =0x00010200
    // add r1, r5, #0
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // add r1, #0x28
    // lsl r1, r1, #4
    // add r3, r5, #0
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // add r1, r6, r1
    // add r3, #0x60
    // bl ov83_02241DD8
    // ldr r1, [sp, #0x1c]
    // ldr r0, _02242660 ; =0x00000828
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // bne _022425F2
    // add r0, r5, #0
    // add r0, #0x2c
    // lsl r7, r0, #4
    // add r0, r6, r7
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02242630 ; =0x00010200
    // lsl r3, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r6, r7
    // lsr r7, r3, #0x1f
    // add r7, r3, r7
    // ldr r1, [r4, #0x20]
    // mov r2, #0x66
    // asr r3, r7, #1
    // bl ov83_022479E4
    // b _02242712
    // ldr r0, [r4, #0x20]
    // mov r1, #0x5a
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x28]
    // mov r0, #0
    // ldr r1, [sp, #0x28]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0xf
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x24]
    // add r0, r5, #0
    // add r0, #0x2c
    // lsl r7, r0, #4
    // add r0, r6, r7
    // bl GetWindowWidth
    // lsl r1, r0, #3
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // lsl r0, r0, #0xf
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x20]
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _02242630 ; =0x00010200
    // b _02242664
    // _0224262C: .word 0x00000804
    // _02242630: .word 0x00010200
    // _02242634: .word 0x0000080E
    // _02242638: .word 0x00050600
    // _0224263C: .word 0x0000080F
    // _02242640: .word 0x00000811
    // _02242644: .word 0x00000812
    // _02242648: .word 0x00000818
    // _0224264C: .word 0x0000081A
    // _02242650: .word 0x0000081C
    // _02242654: .word 0x0000081E
    // _02242658: .word 0x00000822
    // _0224265C: .word 0x00000824
    // _02242660: .word 0x00000828
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x20]
    // add r0, r6, r7
    // mov r3, #0
    // bl ov83_02247998
    // ldr r0, [sp, #0x28]
    // bl String_Delete
    // add r0, r4, r5
    // str r0, [sp, #0x18]
    // mov r0, #0
    // mov r2, #0x83
    // str r0, [sp]
    // ldr r3, [sp, #0x18]
    // lsl r2, r2, #4
    // ldrb r2, [r3, r2]
    // add r0, r4, #0
    // mov r1, #0
    // mov r3, #2
    // bl ov83_02240C48
    // ldr r0, [r4, #0x20]
    // mov r1, #0x65
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x2c]
    // ldr r0, [r4, #0x24]
    // ldr r1, [r4, #0x28]
    // ldr r2, [sp, #0x2c]
    // bl StringExpandPlaceholders
    // mov r0, #0
    // ldr r1, [r4, #0x28]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // mov ip, r0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0224280C ; =0x00010200
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x20]
    // ldr r2, [sp, #0x24]
    // ldr r1, [r4, #0x28]
    // sub r2, r3, r2
    // mov r3, ip
    // sub r2, r2, r3
    // add r0, r6, r7
    // mov r3, #0
    // bl ov83_02247998
    // ldr r0, [sp, #0x2c]
    // bl String_Delete
    // mov r0, #0
    // str r0, [sp]
    // ldr r3, [sp, #0x18]
    // ldr r2, _02242810 ; =0x00000834
    // add r0, r4, #0
    // ldrb r2, [r3, r2]
    // mov r1, #0
    // mov r3, #2
    // bl ov83_02240C48
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // mov r3, #0x65
    // add r0, r1, r0
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _0224280C ; =0x00010200
    // add r1, r6, r7
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // bl ov83_02241DD8
    // ldr r0, [sp, #0x1c]
    // add r5, r5, #1
    // add r0, r0, #2
    // str r0, [sp, #0x1c]
    // cmp r5, #4
    // bhs _02242720
    // b _02242586
    // ldr r0, [sp, #0x14]
    // cmp r0, #1
    // bne _02242740
    // mov r0, #0x17
    // lsl r0, r0, #4
    // mov r5, #0x12
    // add r4, r4, r0
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add r5, r5, #1
    // add r4, #0x10
    // cmp r5, #0x2f
    // bls _0224272E
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x17
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #6
    // lsl r0, r0, #6
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #7
    // lsl r0, r0, #6
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #2
    // lsl r0, r0, #8
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #9
    // lsl r0, r0, #6
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x26
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0xa
    // lsl r0, r0, #6
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0xb
    // lsl r0, r0, #6
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x2e
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x2f
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #3
    // lsl r0, r0, #8
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x31
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x32
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x33
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0xd
    // lsl r0, r0, #6
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224280C: .word 0x00010200
    // _02242810: .word 0x00000834
    // TODO: decompile
}



void ov83_02242814(void) {
    ov83_02241E18();
    ov83_022421E0(r4, r5);
    // add r2, #0x8c
    // ldr r0, [r4, r3]
    // add r1, #0x88
    // add r3, #0x94
    // ldrh r2, [r4, r2]
    // ldr r1, [r4, r1]
    // ldr r3, [r4, r3]
    ov83_02247668((0x1e << 6), (0x1e << 6), (0x1e << 6));
}



void ov83_02242844(void) {
    // add r5, r6, r0
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
    // ldr r0, [r6, r0]
    ov83_0224755C((0x1e << 6), 1);
    // add r4, r6, r0
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r4, #0x10
    // ldr r0, [r6, r0]
    ov83_0224755C((0x1e << 6), 0);
}



void ov83_02242894(void) {
    // add r3, #0x14
    // strh r3, [r1]
    // mul r0, r1
    // add r0, #0x38
    // strh r0, [r2]
}



void ov83_022428A8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r6, r0, #0
    // str r0, [sp, #0x14]
    // add r0, #0x50
    // add r7, r1, #0
    // mov r4, #0
    // add r5, r6, #0
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // add r0, #0x30
    // lsl r1, r0, #4
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    // bl ClearWindowTilemapAndScheduleTransfer
    // cmp r4, r7
    // ldr r0, _022429CC ; =0x00000784
    // beq _022428D8
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ov83_0224755C
    // b _022428E2
    // ldr r0, [r5, r0]
    // mov r1, #0x44
    // mov r2, #0x4c
    // bl ov83_02247568
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #6
    // blo _022428BA
    // ldr r0, _022429D0 ; =0x0000077C
    // mov r1, #0
    // ldr r0, [r6, r0]
    // bl ov83_0224755C
    // mov r0, #0x6b
    // str r0, [sp]
    // ldr r0, _022429D4 ; =0x000007A8
    // mov r1, #0x27
    // ldr r0, [r6, r0]
    // mov r2, #1
    // add r3, sp, #0x18
    // bl GfGfxLoader_GetScrnDataFromOpenNarc
    // mov r3, #0
    // add r4, r0, #0
    // str r3, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x18
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x18]
    // ldr r0, [r6, #0x4c]
    // mov r1, #2
    // add r2, #0xc
    // bl LoadRectToBgTilemapRect
    // ldr r0, [r6, #0x4c]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #0x3b
    // lsl r0, r0, #4
    // add r0, r6, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0xf
    // lsl r0, r0, #6
    // add r0, r6, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _022429D8 ; =0x00000862
    // ldr r2, _022429DC ; =0x000004DC
    // ldrsh r1, [r6, r0]
    // mov r0, #6
    // mul r0, r1
    // mov r1, #0
    // add r0, r0, r7
    // lsl r4, r0, #3
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022429E0 ; =0x00010200
    // add r3, r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, [r6, r2]
    // mov r0, #0x3b
    // lsl r0, r0, #4
    // ldr r2, [r2, r4]
    // add r0, r6, r0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r1, _022429DC ; =0x000004DC
    // ldrb r2, [r6, #0x13]
    // ldr r1, [r6, r1]
    // add r0, r6, #0
    // add r1, r1, r4
    // ldr r1, [r1, #4]
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // bl ov83_02240EC4
    // add r2, r0, #0
    // mov r1, #0
    // add r0, r6, #0
    // mov r3, #2
    // str r1, [sp]
    // bl ov83_02240C48
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _022429E0 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #0xf
    // lsl r1, r1, #6
    // ldr r2, [r6, #0x20]
    // add r0, r6, #0
    // add r1, r6, r1
    // mov r3, #0x68
    // bl ov83_02241DD8
    // mov r0, #0x3b
    // lsl r0, r0, #4
    // add r0, r6, r0
    // bl ScheduleWindowCopyToVram
    // mov r0, #0xf
    // lsl r0, r0, #6
    // add r0, r6, r0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022429CC: .word 0x00000784
    // _022429D0: .word 0x0000077C
    // _022429D4: .word 0x000007A8
    // _022429D8: .word 0x00000862
    // _022429DC: .word 0x000004DC
    // _022429E0: .word 0x00010200
    // TODO: decompile
}



void ov83_022429E4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r6, r0, #0
    // mov r0, #0x3b
    // lsl r0, r0, #4
    // add r0, r6, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0xf
    // lsl r0, r0, #6
    // add r0, r6, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0x6b
    // str r0, [sp]
    // ldr r0, _02242AA0 ; =0x000007A8
    // mov r1, #0x26
    // ldr r0, [r6, r0]
    // mov r2, #1
    // add r3, sp, #0x10
    // bl GfGfxLoader_GetScrnDataFromOpenNarc
    // mov r3, #0
    // add r4, r0, #0
    // str r3, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x18
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x10]
    // ldr r0, [r6, #0x4c]
    // mov r1, #2
    // add r2, #0xc
    // bl LoadRectToBgTilemapRect
    // ldr r0, [r6, #0x4c]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r0, _02242AA4 ; =0x00000862
    // mov r4, #0
    // ldrsh r1, [r6, r0]
    // mov r0, #6
    // add r5, r6, #0
    // add r7, r1, #0
    // mul r7, r0
    // add r1, sp, #0xc
    // add r0, r4, #0
    // add r1, #2
    // add r2, sp, #0xc
    // bl ov83_02242894
    // ldr r0, _02242AA8 ; =0x00000784
    // add r1, sp, #0xc
    // add r2, sp, #0xc
    // ldrh r1, [r1, #2]
    // ldrh r2, [r2]
    // ldr r0, [r5, r0]
    // bl ov83_02247568
    // ldr r0, _02242AAC ; =0x00000861
    // add r1, r7, r4
    // ldrb r0, [r6, r0]
    // cmp r1, r0
    // bhs _02242A76
    // ldr r0, _02242AA8 ; =0x00000784
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl ov83_0224755C
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #6
    // blo _02242A46
    // ldr r0, _02242AB0 ; =0x0000077C
    // mov r1, #1
    // ldr r0, [r6, r0]
    // bl ov83_0224755C
    // add r0, r6, #0
    // bl ov83_02240664
    // add r0, r6, #0
    // bl ov83_022407FC
    // add r0, r6, #0
    // bl ov83_0224088C
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02242AA0: .word 0x000007A8
    // _02242AA4: .word 0x00000862
    // _02242AA8: .word 0x00000784
    // _02242AAC: .word 0x00000861
    // _02242AB0: .word 0x0000077C
    // TODO: decompile
}



void ov83_02242AB4(void) {
}



void ov83_02242AC0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02242ADC ; =0x0000077C
    // add r4, r3, #0
    // ldr r0, [r5, r0]
    // bl ov83_02247568
    // ldr r0, _02242ADC ; =0x0000077C
    // add r1, r4, #0
    // ldr r0, [r5, r0]
    // bl ov83_022475D4
    // pop {r3, r4, r5, pc}
    // nop
    // _02242ADC: .word 0x0000077C
    // TODO: decompile
}



void ov83_02242AE0(void) {
}



void ov83_02242AEC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r5, r0, #0
    // add r0, sp, #4
    // add r4, r1, #0
    // add r0, #2
    // add r1, sp, #4
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov83_02247988
    // ldr r0, _02242B9C ; =_02247D0C
    // add r1, sp, #4
    // ldrh r2, [r0, #0x1e]
    // add r3, sp, #8
    // strh r2, [r1, #0x1c]
    // ldrh r2, [r0, #0x20]
    // strh r2, [r1, #0x1e]
    // ldrh r2, [r0, #0x22]
    // strh r2, [r1, #0x20]
    // ldrh r2, [r0, #0x24]
    // strh r2, [r1, #0x22]
    // ldrh r2, [r0, #0x26]
    // ldrh r0, [r0, #0x28]
    // strh r2, [r1, #0x24]
    // strh r0, [r1, #0x26]
    // ldrh r0, [r1, #2]
    // strh r0, [r1, #0x22]
    // ldrh r2, [r1]
    // add r0, r0, r2
    // sub r0, #0x1b
    // strh r0, [r1, #0x24]
    // strh r2, [r1, #0x26]
    // ldrh r0, [r1, #0x1c]
    // strh r0, [r1, #4]
    // ldrh r0, [r1, #0x1e]
    // strh r0, [r1, #6]
    // ldrh r0, [r1, #0x20]
    // strh r0, [r1, #8]
    // ldrh r0, [r1, #0x22]
    // strh r0, [r1, #0xa]
    // ldrh r0, [r1, #0x24]
    // strh r0, [r1, #0xc]
    // ldrh r0, [r1, #0x26]
    // strh r0, [r1, #0xe]
    // ldr r0, _02242BA0 ; =0x00000844
    // ldr r2, [r5, r0]
    // sub r0, #8
    // str r2, [sp, #0x14]
    // ldr r2, [r5, #0x4c]
    // str r2, [sp, #0x18]
    // strb r4, [r1, #0x18]
    // add r1, sp, #0x30
    // ldrb r1, [r1, #0x10]
    // add r2, r6, #0
    // str r1, [sp]
    // add r1, r3, #0
    // ldr r0, [r5, r0]
    // add r3, r7, #0
    // bl ov83_02247CCC
    // mov r1, #0x21
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // ldrb r1, [r5, #0xe]
    // mov r0, #0x10
    // orr r0, r1
    // strb r0, [r5, #0xe]
    // ldrb r0, [r5, #9]
    // mov r1, #1
    // bl ov80_02237B24
    // add r4, r0, #0
    // ldr r0, _02242BA4 ; =0x0000073C
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #1
    // bl ov83_0224773C
    // ldr r0, _02242BA8 ; =0x0000074C
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #1
    // bl ov83_0224773C
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02242B9C: .word _02247D0C
    // _02242BA0: .word 0x00000844
    // _02242BA4: .word 0x0000073C
    // _02242BA8: .word 0x0000074C
    // TODO: decompile
}



void ov83_02242BAC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #3
    // mov r1, #0x6b
    // bl ListMenuItems_New
    // ldr r1, _02242BE8 ; =0x00000844
    // ldr r5, _02242BEC ; =ov83_02247D6C
    // str r0, [r6, r1]
    // mov r4, #0
    // add r7, r1, #0
    // ldr r0, [r6, r7]
    // ldr r1, [r6, #0x20]
    // ldr r2, [r5]
    // ldr r3, [r5, #4]
    // bl ListMenuItems_AppendFromMsgData
    // add r4, r4, #1
    // add r5, #8
    // cmp r4, #3
    // blo _02242BC2
    // mov r0, #0xd
    // str r0, [sp]
    // add r0, r6, #0
    // mov r1, #3
    // mov r2, #0x11
    // mov r3, #8
    // bl ov83_02242AEC
    // pop {r3, r4, r5, r6, r7, pc}
    // _02242BE8: .word 0x00000844
    // _02242BEC: .word ov83_02247D6C
    // TODO: decompile
}



void ov83_02242BF0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // mov r0, #5
    // mov r1, #0x6b
    // bl ListMenuItems_New
    // ldr r1, _02242C9C ; =0x00000844
    // mov r2, #0
    // str r0, [r4, r1]
    // ldr r0, _02242CA0 ; =0x0000050C
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, r0]
    // bl ov83_0224777C
    // mov r5, #0
    // add r7, r0, #0
    // add r6, r5, #0
    // mov r0, #0xc
    // add r1, r6, #0
    // mul r1, r0
    // ldr r0, _02242CA4 ; =ov83_02247F4C
    // add r2, r0, r1
    // ldr r3, [r2, #8]
    // cmp r3, #4
    // bhi _02242C6A
    // add r0, r3, r3
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02242C2E: ; jump table
    // ldr r0, [r2]
    // cmp r7, r0
    // blo _02242C7C
    // ldr r0, _02242C9C ; =0x00000844
    // ldr r1, [r4, #0x20]
    // ldr r0, [r4, r0]
    // ldr r2, [r2, #4]
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // b _02242C7C
    // cmp r7, #3
    // beq _02242C7C
    // ldr r0, _02242C9C ; =0x00000844
    // ldr r1, [r4, #0x20]
    // ldr r0, [r4, r0]
    // ldr r2, [r2, #4]
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // b _02242C7C
    // ldr r0, _02242C9C ; =0x00000844
    // ldr r1, [r4, #0x20]
    // ldr r0, [r4, r0]
    // ldr r2, [r2, #4]
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // add r0, r6, #1
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // cmp r6, #5
    // blo _02242C12
    // ldr r3, _02242CA8 ; =ov83_02248008
    // mov r0, #0xd
    // ldrb r3, [r3, r5]
    // str r0, [sp]
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0x11
    // bl ov83_02242AEC
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02242C9C: .word 0x00000844
    // _02242CA0: .word 0x0000050C
    // _02242CA4: .word ov83_02247F4C
    // _02242CA8: .word ov83_02248008
    // TODO: decompile
}



void ov83_02242CAC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #4
    // mov r1, #0x6b
    // bl ListMenuItems_New
    // ldr r1, _02242D4C ; =0x00000844
    // mov r2, #1
    // str r0, [r5, r1]
    // ldr r0, _02242D50 ; =0x0000050C
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // bl ov83_0224777C
    // mov r4, #0
    // add r7, r0, #0
    // add r6, r4, #0
    // mov r0, #0xc
    // add r1, r6, #0
    // mul r1, r0
    // ldr r0, _02242D54 ; =ov83_02247EB0
    // add r2, r0, r1
    // ldr r3, [r2, #8]
    // cmp r3, #6
    // beq _02242CE8
    // cmp r3, #7
    // beq _02242CE8
    // cmp r3, #8
    // beq _02242D02
    // b _02242D1A
    // ldr r0, [r2]
    // cmp r7, r0
    // blo _02242D2C
    // ldr r0, _02242D4C ; =0x00000844
    // ldr r1, [r5, #0x20]
    // ldr r0, [r5, r0]
    // ldr r2, [r2, #4]
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // b _02242D2C
    // cmp r7, #3
    // beq _02242D2C
    // ldr r0, _02242D4C ; =0x00000844
    // ldr r1, [r5, #0x20]
    // ldr r0, [r5, r0]
    // ldr r2, [r2, #4]
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // b _02242D2C
    // ldr r0, _02242D4C ; =0x00000844
    // ldr r1, [r5, #0x20]
    // ldr r0, [r5, r0]
    // ldr r2, [r2, #4]
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r6, #1
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // cmp r6, #4
    // blo _02242CCE
    // ldr r3, _02242D58 ; =ov83_02248008
    // mov r0, #0xd
    // ldrb r3, [r3, r4]
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x11
    // bl ov83_02242AEC
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02242D4C: .word 0x00000844
    // _02242D50: .word 0x0000050C
    // _02242D54: .word ov83_02247EB0
    // _02242D58: .word ov83_02248008
    // TODO: decompile
}



void ov83_02242D5C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #9]
    // mov r1, #1
    // bl ov80_02237B24
    // add r4, r0, #0
    // ldr r0, _02242DA0 ; =0x0000073C
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // bl ov83_0224773C
    // ldr r0, _02242DA4 ; =0x0000074C
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // bl ov83_0224773C
    // mov r0, #0x21
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // bl ov83_02247CE8
    // ldr r0, _02242DA8 ; =0x00000844
    // ldr r0, [r5, r0]
    // bl ListMenuItems_Delete
    // ldrb r1, [r5, #0xe]
    // mov r0, #0x10
    // bic r1, r0
    // strb r1, [r5, #0xe]
    // pop {r3, r4, r5, pc}
    // nop
    // _02242DA0: .word 0x0000073C
    // _02242DA4: .word 0x0000074C
    // _02242DA8: .word 0x00000844
    // TODO: decompile
}



void ov83_02242DAC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // mov r1, #0x21
    // add r4, r0, #0
    // lsl r1, r1, #6
    // ldr r2, [r4, r1]
    // add r1, #8
    // add r2, #0x24
    // ldrb r2, [r2]
    // ldr r1, [r4, r1]
    // cmp r1, r2
    // beq _02242DF4
    // mov r3, #1
    // str r3, [sp]
    // mov r1, #0xff
    // str r1, [sp, #4]
    // lsl r5, r2, #1
    // ldr r2, _02242DF8 ; =ov83_02247D1E
    // str r3, [sp, #8]
    // mov r1, #2
    // str r1, [sp, #0xc]
    // mov r1, #0xf
    // str r1, [sp, #0x10]
    // add r1, r4, #0
    // ldrh r2, [r2, r5]
    // add r1, #0xb0
    // str r3, [sp, #0x14]
    // bl ov83_0223FC48
    // mov r0, #0x21
    // lsl r0, r0, #6
    // ldr r1, [r4, r0]
    // add r0, #8
    // add r1, #0x24
    // ldrb r1, [r1]
    // str r1, [r4, r0]
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // _02242DF8: .word ov83_02247D1E
    // TODO: decompile
}



void ov83_02242DFC(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #0x21
    // lsl r0, r0, #6
    // ldr r1, [r4, r0]
    // add r1, #0x24
    // ldrb r2, [r1]
    // add r1, r0, #0
    // add r1, #8
    // ldr r1, [r4, r1]
    // cmp r1, r2
    // beq _02242E80
    // add r0, r0, #4
    // ldr r1, [r4, r0]
    // lsl r0, r2, #3
    // add r0, r1, r0
    // ldr r1, [r0, #4]
    // cmp r1, #4
    // beq _02242E2E
    // mov r0, #1
    // mvn r0, r0
    // cmp r1, r0
    // beq _02242E4E
    // b _02242E52
    // ldr r0, _02242E84 ; =0x0000050C
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r2, #0
    // bl ov83_0224777C
    // cmp r0, #3
    // bne _02242E42
    // mov r2, #0x1b
    // b _02242E54
    // cmp r0, #1
    // bne _02242E4A
    // mov r2, #0x19
    // b _02242E54
    // mov r2, #0x1a
    // b _02242E54
    // mov r2, #0x1c
    // b _02242E54
    // mov r2, #0x18
    // mov r3, #1
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // add r1, r4, #0
    // str r3, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // add r1, #0xb0
    // str r3, [sp, #0x14]
    // bl ov83_0223FC48
    // mov r0, #0x21
    // lsl r0, r0, #6
    // ldr r1, [r4, r0]
    // add r0, #8
    // add r1, #0x24
    // ldrb r1, [r1]
    // str r1, [r4, r0]
    // add sp, #0x18
    // pop {r4, pc}
    // _02242E84: .word 0x0000050C
    // TODO: decompile
}



void ov83_02242E88(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #0x21
    // lsl r0, r0, #6
    // ldr r1, [r4, r0]
    // add r1, #0x24
    // ldrb r2, [r1]
    // add r1, r0, #0
    // add r1, #8
    // ldr r1, [r4, r1]
    // cmp r1, r2
    // beq _02242F10
    // add r0, r0, #4
    // ldr r1, [r4, r0]
    // lsl r0, r2, #3
    // add r0, r1, r0
    // ldr r0, [r0, #4]
    // cmp r0, #6
    // beq _02242EBA
    // cmp r0, #7
    // beq _02242EBE
    // cmp r0, #8
    // beq _02242EC2
    // b _02242EE2
    // mov r2, #0x30
    // b _02242EE4
    // mov r2, #0x31
    // b _02242EE4
    // ldr r0, _02242F14 ; =0x0000050C
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r2, #1
    // bl ov83_0224777C
    // cmp r0, #3
    // bne _02242ED6
    // mov r2, #0x34
    // b _02242EE4
    // cmp r0, #1
    // bne _02242EDE
    // mov r2, #0x32
    // b _02242EE4
    // mov r2, #0x33
    // b _02242EE4
    // mov r2, #0x35
    // mov r3, #1
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // add r1, r4, #0
    // str r3, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // add r1, #0xb0
    // str r3, [sp, #0x14]
    // bl ov83_0223FC48
    // mov r0, #0x21
    // lsl r0, r0, #6
    // ldr r1, [r4, r0]
    // add r0, #8
    // add r1, #0x24
    // ldrb r1, [r1]
    // str r1, [r4, r0]
    // add sp, #0x18
    // pop {r4, pc}
    // _02242F14: .word 0x0000050C
    // TODO: decompile
}



void ov83_02242F18(void) {
    // ldr r2, _02242F28 ; =0x00000864
    // mov r3, #0
    // strh r1, [r0, r2]
    // add r1, r2, #2
    // strb r3, [r0, r1]
    // add r1, r2, #3
    // strb r3, [r0, r1]
    // bx lr
    // _02242F28: .word 0x00000864
    // TODO: decompile
}



void ov83_02242F2C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // ldr r1, _02242FD8 ; =0x00000864
    // add r4, r0, #0
    // ldrh r0, [r4, r1]
    // ldr r2, _02242FDC ; =ov83_02247E64
    // lsl r0, r0, #2
    // add r3, r2, r0
    // add r0, r1, #2
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _02242F4E
    // cmp r0, #1
    // beq _02242F78
    // cmp r0, #2
    // beq _02242FBA
    // b _02242FD0
    // ldrb r0, [r3, #2]
    // mov r1, #2
    // str r0, [sp]
    // ldrb r0, [r3, #3]
    // str r0, [sp, #4]
    // mov r0, #6
    // str r0, [sp, #8]
    // ldrb r2, [r3]
    // ldrb r3, [r3, #1]
    // ldr r0, [r4, #0x4c]
    // bl BgTilemapRectChangePalette
    // ldr r0, [r4, #0x4c]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, _02242FE0 ; =0x00000866
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _02242FD0
    // add r0, r1, #3
    // ldrb r0, [r4, r0]
    // add r2, r0, #1
    // add r0, r1, #3
    // strb r2, [r4, r0]
    // ldrb r0, [r4, r0]
    // cmp r0, #4
    // bne _02242FD0
    // ldrb r0, [r3, #2]
    // mov r1, #2
    // str r0, [sp]
    // ldrb r0, [r3, #3]
    // str r0, [sp, #4]
    // mov r0, #5
    // str r0, [sp, #8]
    // ldrb r2, [r3]
    // ldrb r3, [r3, #1]
    // ldr r0, [r4, #0x4c]
    // bl BgTilemapRectChangePalette
    // ldr r0, [r4, #0x4c]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, _02242FE4 ; =0x00000867
    // mov r1, #0
    // strb r1, [r4, r0]
    // sub r1, r0, #1
    // ldrb r1, [r4, r1]
    // sub r0, r0, #1
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _02242FD0
    // add r0, r1, #3
    // ldrb r0, [r4, r0]
    // add r2, r0, #1
    // add r0, r1, #3
    // strb r2, [r4, r0]
    // ldrb r0, [r4, r0]
    // cmp r0, #2
    // bne _02242FD0
    // add sp, #0xc
    // mov r0, #0
    // pop {r3, r4, pc}
    // mov r0, #1
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _02242FD8: .word 0x00000864
    // _02242FDC: .word ov83_02247E64
    // _02242FE0: .word 0x00000866
    // _02242FE4: .word 0x00000867
    // TODO: decompile
}



void ov83_02242FE8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, _022430F0 ; =FS_OVERLAY_ID(OVY_80)
    // mov r1, #2
    // bl HandleLoadOverlay
    // bl ov83_02243F9C
    // mov r0, #3
    // mov r1, #0x6b
    // lsl r2, r0, #0x10
    // bl Heap_Create
    // ldr r1, _022430F4 ; =0x00000614
    // add r0, r4, #0
    // mov r2, #0x6b
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _022430F4 ; =0x00000614
    // mov r1, #0
    // add r5, r0, #0
    // bl memset
    // mov r0, #0x6b
    // bl BgConfig_Alloc
    // str r0, [r5, #0x4c]
    // add r0, r4, #0
    // str r4, [r5]
    // bl OverlayManager_GetArgs
    // add r4, r0, #0
    // mov r0, #0xaf
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // ldr r0, [r5, r0]
    // bl sub_02030CC8
    // mov r1, #0xb
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // sub r0, r1, #4
    // ldr r0, [r5, r0]
    // bl sub_02030E08
    // mov r1, #0xb1
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldrb r0, [r4, #4]
    // add r2, r4, #0
    // add r2, #0x20
    // strb r0, [r5, #9]
    // ldr r0, _022430F8 ; =0x00000548
    // sub r1, #8
    // str r2, [r5, r0]
    // ldr r0, [r5, r1]
    // bl Save_PlayerData_GetOptionsAddr
    // mov r1, #0xae
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r3, r4, #0
    // ldr r2, [r4, #0x1c]
    // ldr r0, _022430FC ; =0x0000055C
    // add r3, #8
    // str r2, [r5, r0]
    // add r2, r0, #0
    // sub r2, #0x10
    // str r3, [r5, r2]
    // add r3, r4, #0
    // add r2, r0, #0
    // add r3, #0xc
    // sub r2, #0xc
    // str r3, [r5, r2]
    // add r3, r4, #0
    // add r2, r0, #0
    // add r3, #0x10
    // sub r2, #8
    // str r3, [r5, r2]
    // add r3, r4, #0
    // sub r2, r0, #4
    // add r3, #0x14
    // str r3, [r5, r2]
    // mov r2, #0xff
    // strb r2, [r5, #0x11]
    // ldrh r2, [r4, #0x28]
    // add r0, #0x5e
    // strh r2, [r5, r0]
    // add r0, r1, #4
    // ldr r0, [r5, r0]
    // bl Save_Frontier_GetStatic
    // str r0, [r5, #4]
    // ldr r0, _02243100 ; =0x000005B7
    // mov r3, #0
    // mov r2, #1
    // add r1, r5, r3
    // add r3, r3, #1
    // strb r2, [r1, r0]
    // cmp r3, #3
    // blt _022430AA
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _022430C2
    // mov r0, #3
    // b _022430C4
    // mov r0, #4
    // strb r0, [r5, #0x14]
    // mov r0, #4
    // strb r0, [r5, #0x15]
    // ldrb r0, [r5, #0x15]
    // mov r1, #0
    // sub r0, r0, #1
    // strb r0, [r5, #0xc]
    // ldr r0, _02243104 ; =0x000005B4
    // strb r1, [r5, r0]
    // add r0, r5, #0
    // bl ov83_02243FD4
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #1
    // bne _022430EC
    // add r0, r5, #0
    // bl sub_02096910
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _022430F0: .word FS_OVERLAY_ID(OVY_80)
    // _022430F4: .word 0x00000614
    // _022430F8: .word 0x00000548
    // _022430FC: .word 0x0000055C
    // _02243100: .word 0x000005B7
    // _02243104: .word 0x000005B4
    // TODO: decompile
}



void ov83_02243108(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // ldr r1, _02243260 ; =0x000005B6
    // add r4, r0, #0
    // ldrb r2, [r4, r1]
    // cmp r2, #1
    // bne _02243176
    // ldr r2, [r5]
    // cmp r2, #1
    // bne _022431A2
    // mov r2, #0
    // strb r2, [r4, r1]
    // bl ov83_02245074
    // add r0, r4, #0
    // bl ov83_022459A0
    // ldr r0, _02243264 ; =0x00000504
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02243142
    // bl ov83_0224753C
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #0xae
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ov83_02247944
    // ldr r0, [r4, #0x24]
    // mov r1, #0
    // bl ov80_0222A7CC
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r4, #0xa]
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #3
    // bl ov83_02244CD4
    // b _022431A2
    // ldrb r0, [r4, #0x11]
    // cmp r0, #0xff
    // beq _022431A2
    // ldr r0, [r5]
    // cmp r0, #1
    // beq _02243186
    // cmp r0, #3
    // bne _022431A2
    // ldr r0, _02243260 ; =0x000005B6
    // mov r1, #0
    // strb r1, [r4, r0]
    // add r0, r4, #0
    // bl ov83_02245074
    // add r0, r4, #0
    // bl ov83_022459A0
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #2
    // bl ov83_02244CD4
    // ldr r0, [r5]
    // cmp r0, #4
    // bhi _0224324C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022431B4: ; jump table
    // add r0, r4, #0
    // bl ov83_022432B4
    // cmp r0, #1
    // bne _0224324C
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #1
    // bl ov83_02244CD4
    // b _0224324C
    // add r0, r4, #0
    // bl ov83_022433F8
    // cmp r0, #1
    // bne _0224324C
    // ldrb r0, [r4, #0x10]
    // cmp r0, #1
    // bne _022431F0
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #2
    // bl ov83_02244CD4
    // b _0224324C
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #1
    // bne _02243206
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #3
    // bl ov83_02244CD4
    // b _0224324C
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #4
    // bl ov83_02244CD4
    // b _0224324C
    // add r0, r4, #0
    // bl ov83_02243C88
    // cmp r0, #1
    // bne _0224324C
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #1
    // bl ov83_02244CD4
    // b _0224324C
    // add r0, r4, #0
    // bl ov83_02243D7C
    // cmp r0, #1
    // bne _0224324C
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #4
    // bl ov83_02244CD4
    // b _0224324C
    // add r0, r4, #0
    // bl ov83_02243DE8
    // cmp r0, #1
    // bne _0224324C
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov83_022459AC
    // mov r0, #0xb2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl SpriteList_RenderAndAnimateSprites
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _02243260: .word 0x000005B6
    // _02243264: .word 0x00000504
    // TODO: decompile
}



void ov83_02243268(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, _022432A8 ; =0x00000548
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4, r0]
    // strh r1, [r0]
    // ldr r0, _022432AC ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // bl GF_DestroyVramTransferManager
    // add r0, r4, #0
    // bl ov83_02243E30
    // add r0, r5, #0
    // bl OverlayManager_FreeData
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0x6b
    // bl Heap_Destroy
    // ldr r0, _022432B0 ; =FS_OVERLAY_ID(OVY_80)
    // bl UnloadOverlayByID
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _022432A8: .word 0x00000548
    // _022432AC: .word 0x04000050
    // _022432B0: .word FS_OVERLAY_ID(OVY_80)
    // TODO: decompile
}



void ov83_022432B4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022432CC: ; jump table
    ov80_02237D8C(*((u8*)(r0 + 9)));
    sub_02037BEC();
    sub_02037AC0(0xd8);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov80_02237D8C(*((u8*)(r4 + 9)));
    sub_02037B38(0xd8);
    sub_02037BEC();
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov80_02237D8C(*((u8*)(r4 + 9)));
    ov83_022450A8(r4, 0x14, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov83_022433B8(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov80_02237D8C(*((u8*)(r4 + 9)));
    *((u8*)(r4 + 0x17)) = 0;
    ov83_022433B8(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u8*)(r4 + 8)) + 1));
}



void ov83_022433B8(void) {
}



void ov83_022433F8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #0x12
    // bhi _022434BA
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224340E: ; jump table
    // mov r0, #0
    // strb r0, [r4, #0xb]
    // mov r0, #1
    // strb r0, [r4, #8]
    // ldrb r0, [r4, #0xf]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1b
    // cmp r0, #1
    // bne _02243456
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ov83_02245094
    // add r0, r4, #0
    // bl ov83_02244BEC
    // b _02243484
    // cmp r0, #2
    // bne _0224347C
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ov83_02245094
    // add r0, r4, #0
    // bl ov83_02244C9C
    // mov r0, #0x15
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // mov r1, #0xc8
    // mov r2, #0x69
    // bl ov83_02247630
    // mov r0, #6
    // strb r0, [r4, #8]
    // b _02243484
    // cmp r0, #3
    // bne _02243484
    // mov r0, #0xe
    // strb r0, [r4, #8]
    // ldrb r1, [r4, #0xf]
    // mov r0, #0xf8
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // b _02243C7A
    // mov r0, #0x5f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov83_02247AD4
    // cmp r0, #4
    // bhi _022434B2
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022434A8: ; jump table
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // beq _022434D8
    // b _02243C7A
    // add r0, r4, #0
    // bl ov83_02244C4C
    // add r0, r4, #0
    // bl ov83_02244C58
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldr r0, _022437F0 ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldrb r1, [r4, #0xd]
    // ldrb r0, [r4, #0x15]
    // cmp r1, r0
    // beq _0224351A
    // mov r0, #0x5f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov83_02247B04
    // ldrb r2, [r4, #0xd]
    // add r0, r4, #0
    // mov r1, #4
    // bl ov83_022469D8
    // b _02243C7A
    // ldr r0, _022437F4 ; =0x000005F8
    // ldr r0, [r4, r0]
    // bl TouchscreenListMenu_HandleInput
    // ldr r1, _022437F0 ; =0x000005DC
    // add r5, r0, #0
    // bl ov83_022477B0
    // add r0, r4, #0
    // bl ov83_02246CC0
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // bhi _02243536
    // bhs _0224360C
    // cmp r5, #6
    // bls _0224351C
    // b _02243C7A
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02243528: ; jump table
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // b _02243C7A
    // strb r5, [r4, #0x13]
    // ldrb r0, [r4, #0x14]
    // ldrb r1, [r4, #0xd]
    // bl ov83_02247768
    // ldr r1, _022437F8 ; =0x0000054C
    // ldr r1, [r4, r1]
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _02243584
    // add r0, r4, #0
    // bl ov83_02244C88
    // add r0, r4, #0
    // bl ov83_022453C0
    // mov r1, #0
    // add r0, r4, #0
    // mov r2, #1
    // mov r3, #4
    // str r1, [sp]
    // bl ov83_02244A98
    // add r0, r4, #0
    // mov r1, #0x10
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r4, #0xa]
    // add r0, r4, #0
    // bl ov83_02244A74
    // mov r0, #3
    // strb r0, [r4, #8]
    // b _02243C7A
    // add r0, r4, #0
    // bl ov83_02244C88
    // ldrb r0, [r4, #0x14]
    // ldrb r1, [r4, #0xd]
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _022437FC ; =0x0000055C
    // ldr r0, [r4, r0]
    // bl Party_GetMonByIndex
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov83_022453C0
    // add r0, r5, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov83_02244AB0
    // add r0, r4, #0
    // mov r1, #0x14
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r4, #0xa]
    // mov r0, #0x10
    // strb r0, [r4, #8]
    // b _02243C7A
    // add r0, r4, #0
    // strb r5, [r4, #0x13]
    // bl ov83_02244C88
    // add r0, r4, #0
    // bl ov83_022453C0
    // mov r2, #0x17
    // lsl r2, r2, #6
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov83_02244AB0
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r4, #0xa]
    // add r0, r4, #0
    // bl ov83_02244A88
    // mov r0, #4
    // strb r0, [r4, #8]
    // b _02243C7A
    // add r0, r4, #0
    // bl ov83_02244C88
    // add r0, r4, #0
    // bl ov83_02244C9C
    // mov r0, #6
    // strb r0, [r4, #8]
    // b _02243C7A
    // add r0, r4, #0
    // bl ov83_02244C88
    // add r0, r4, #0
    // bl ov83_02244BEC
    // mov r0, #0
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldr r0, _02243800 ; =0x00000604
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _02243630
    // cmp r0, #2
    // beq _022436B8
    // b _02243C7A
    // ldr r0, _02243800 ; =0x00000604
    // add r0, r4, r0
    // bl ov83_022478B4
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ov83_02245094
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // add r5, r0, #0
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // bl FrontierSave_GetStat
    // cmp r0, #1
    // bhs _02243678
    // add r0, r4, #0
    // bl ov83_022453C0
    // add r0, r4, #0
    // mov r1, #0x1c
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r4, #0xa]
    // mov r0, #0x10
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _022436B2
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, #4]
    // mov r2, #1
    // bl ov80_02237FA4
    // add r1, r4, #0
    // add r0, r4, #0
    // add r1, #0x50
    // bl ov83_022453DC
    // ldrb r1, [r4, #0xd]
    // add r0, r4, #0
    // bl ov83_02245748
    // add r0, r4, #0
    // bl ov83_02246988
    // add r0, r4, #0
    // mov r1, #0
    // bl ov83_02246114
    // mov r0, #0xb
    // strb r0, [r4, #8]
    // b _02243C7A
    // mov r0, #1
    // strb r0, [r4, #0x10]
    // pop {r3, r4, r5, pc}
    // ldr r0, _02243800 ; =0x00000604
    // add r0, r4, r0
    // bl ov83_022478B4
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ov83_02245094
    // add r0, r4, #0
    // bl ov83_02244C58
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldr r0, _022437F4 ; =0x000005F8
    // ldr r0, [r4, r0]
    // bl TouchscreenListMenu_HandleInput
    // ldr r1, _022437F0 ; =0x000005DC
    // add r5, r0, #0
    // bl ov83_022477B0
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // bhi _02243700
    // bhs _02243706
    // cmp r5, #2
    // bhi _022436FE
    // cmp r5, #0
    // beq _02243720
    // cmp r5, #1
    // beq _0224377C
    // cmp r5, #2
    // beq _02243706
    // b _02243C7A
    // add r0, r0, #1
    // cmp r5, r0
    // b _02243C7A
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ov83_02245094
    // add r0, r4, #0
    // bl ov83_02244A90
    // add r0, r4, #0
    // bl ov83_02244C58
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // add r5, r0, #0
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // bl FrontierSave_GetStat
    // add r0, r4, #0
    // bl ov83_02244A90
    // ldrb r0, [r4, #0x14]
    // ldrb r1, [r4, #0xd]
    // bl ov83_02247768
    // mov r1, #0x55
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // ldrb r0, [r1, r0]
    // cmp r0, #1
    // bne _0224376E
    // add r0, r4, #0
    // bl ov83_022453C0
    // add r0, r4, #0
    // mov r1, #0x1d
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r4, #0xa]
    // mov r0, #0x10
    // strb r0, [r4, #8]
    // b _02243C7A
    // add r0, r4, #0
    // mov r1, #1
    // bl ov83_02245554
    // mov r0, #5
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // add r5, r0, #0
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // bl FrontierSave_GetStat
    // add r0, r4, #0
    // bl ov83_02244A90
    // ldrb r0, [r4, #0x14]
    // ldrb r1, [r4, #0xd]
    // bl ov83_02247768
    // mov r1, #0x55
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // ldrb r0, [r1, r0]
    // cmp r0, #2
    // bne _022437CA
    // add r0, r4, #0
    // bl ov83_022453C0
    // add r0, r4, #0
    // mov r1, #0x1e
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r4, #0xa]
    // mov r0, #0x10
    // strb r0, [r4, #8]
    // b _02243C7A
    // add r0, r4, #0
    // mov r1, #2
    // bl ov83_02245554
    // mov r0, #5
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldr r0, _02243800 ; =0x00000604
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _022437EA
    // cmp r0, #2
    // beq _02243892
    // b _02243C7A
    // ldr r0, _02243800 ; =0x00000604
    // b _02243804
    // nop
    // _022437F0: .word 0x000005DC
    // _022437F4: .word 0x000005F8
    // _022437F8: .word 0x0000054C
    // _022437FC: .word 0x0000055C
    // _02243800: .word 0x00000604
    // add r0, r4, r0
    // bl ov83_022478B4
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // add r5, r0, #0
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // bl FrontierSave_GetStat
    // add r5, r0, #0
    // ldrb r0, [r4, #0xe]
    // bl ov83_02245068
    // cmp r5, r0
    // bhs _0224384C
    // add r0, r4, #0
    // bl ov83_022453C0
    // add r0, r4, #0
    // mov r1, #0x1c
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r4, #0xa]
    // mov r0, #0x10
    // strb r0, [r4, #8]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4, #0xe]
    // strb r0, [r4, #0x12]
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _0224388C
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ov83_02245094
    // ldrb r0, [r4, #0xe]
    // bl ov83_02245068
    // add r2, r0, #0
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, #4]
    // bl ov80_02237FA4
    // add r1, r4, #0
    // add r0, r4, #0
    // add r1, #0x50
    // bl ov83_022453DC
    // ldrb r1, [r4, #0xd]
    // ldrb r2, [r4, #0xe]
    // add r0, r4, #0
    // bl ov83_02245838
    // mov r0, #0xc
    // strb r0, [r4, #8]
    // b _02243C7A
    // mov r0, #1
    // strb r0, [r4, #0x10]
    // pop {r3, r4, r5, pc}
    // ldr r0, _02243BA8 ; =0x00000604
    // add r0, r4, r0
    // bl ov83_022478B4
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ov83_02245094
    // add r0, r4, #0
    // bl ov83_02244C58
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldr r0, _02243BAC ; =0x000005F8
    // ldr r0, [r4, r0]
    // bl TouchscreenListMenu_HandleInput
    // ldr r1, _02243BB0 ; =0x000005DC
    // add r5, r0, #0
    // bl ov83_022477B0
    // add r0, r4, #0
    // bl ov83_02246D40
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // bhi _022438E2
    // bhs _022438E8
    // cmp r5, #5
    // bhi _022438E0
    // cmp r5, #3
    // blo _022438E0
    // beq _02243902
    // cmp r5, #4
    // beq _0224394E
    // cmp r5, #5
    // beq _022439C0
    // b _02243C7A
    // add r0, r0, #1
    // cmp r5, r0
    // b _02243C7A
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ov83_02245094
    // add r0, r4, #0
    // bl ov83_02244CCC
    // add r0, r4, #0
    // bl ov83_02244C58
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _02243C7A
    // strb r5, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02244CCC
    // ldrb r0, [r4, #0x14]
    // ldrb r1, [r4, #0xd]
    // bl ov83_02247768
    // ldr r1, _02243BB4 ; =0x00000554
    // ldr r1, [r4, r1]
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _02243948
    // add r0, r4, #0
    // bl ov83_022453C0
    // mov r1, #0
    // add r0, r4, #0
    // mov r2, #2
    // mov r3, #4
    // str r1, [sp]
    // bl ov83_02244A98
    // add r0, r4, #0
    // mov r1, #0x2b
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r4, #0xa]
    // add r0, r4, #0
    // bl ov83_02244A74
    // mov r0, #7
    // strb r0, [r4, #8]
    // b _02243C7A
    // mov r0, #0x11
    // strb r0, [r4, #8]
    // b _02243C7A
    // add r0, r4, #0
    // strb r5, [r4, #0x13]
    // bl ov83_02244CCC
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r2, #2
    // bl ov83_0224777C
    // cmp r0, #1
    // bne _0224397C
    // add r0, r4, #0
    // mov r1, #0x2a
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r4, #0xa]
    // mov r0, #0xf
    // strb r0, [r4, #8]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4, #0x14]
    // ldrb r1, [r4, #0xd]
    // bl ov83_02247768
    // ldr r1, _02243BB8 ; =0x00000558
    // ldr r1, [r4, r1]
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _022439BA
    // add r0, r4, #0
    // bl ov83_022453C0
    // mov r1, #0
    // add r0, r4, #0
    // mov r2, #5
    // mov r3, #4
    // str r1, [sp]
    // bl ov83_02244A98
    // add r0, r4, #0
    // mov r1, #0x4f
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r4, #0xa]
    // add r0, r4, #0
    // bl ov83_02244A74
    // mov r0, #8
    // strb r0, [r4, #8]
    // b _02243C7A
    // mov r0, #0x12
    // strb r0, [r4, #8]
    // b _02243C7A
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r2, #2
    // bl ov83_0224777C
    // cmp r0, #2
    // bne _022439EC
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ov83_02245094
    // add r0, r4, #0
    // bl ov83_02244CCC
    // add r0, r4, #0
    // bl ov83_02244C58
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _02243C7A
    // strb r5, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02244CCC
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // add r5, r0, #0
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // bl FrontierSave_GetStat
    // mov r1, #0
    // add r0, r4, #0
    // mov r2, #0x32
    // mov r3, #4
    // str r1, [sp]
    // bl ov83_02244A98
    // add r0, r4, #0
    // mov r1, #0x5b
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r4, #0xa]
    // add r0, r4, #0
    // bl ov83_02244A74
    // mov r0, #9
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldr r0, _02243BA8 ; =0x00000604
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _02243A48
    // cmp r0, #2
    // beq _02243A62
    // b _02243C7A
    // ldr r0, _02243BA8 ; =0x00000604
    // add r0, r4, r0
    // bl ov83_022478B4
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0x2e
    // bl ov83_02245A40
    // cmp r0, #1
    // bne _02243A86
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r0, _02243BA8 ; =0x00000604
    // add r0, r4, r0
    // bl ov83_022478B4
    // add r0, r4, #0
    // bl ov83_02244C9C
    // mov r0, #6
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldr r0, _02243BA8 ; =0x00000604
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _02243A88
    // cmp r0, #2
    // beq _02243AA2
    // b _02243C7A
    // ldr r0, _02243BA8 ; =0x00000604
    // add r0, r4, r0
    // bl ov83_022478B4
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0x52
    // bl ov83_02245A40
    // cmp r0, #1
    // bne _02243AC6
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r0, _02243BA8 ; =0x00000604
    // add r0, r4, r0
    // bl ov83_022478B4
    // add r0, r4, #0
    // bl ov83_02244C9C
    // mov r0, #6
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldr r0, _02243BA8 ; =0x00000604
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _02243AC8
    // cmp r0, #2
    // beq _02243B46
    // b _02243C7A
    // ldr r0, _02243BA8 ; =0x00000604
    // add r0, r4, r0
    // bl ov83_022478B4
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // add r5, r0, #0
    // ldrb r0, [r4, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // bl FrontierSave_GetStat
    // add r5, r0, #0
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r2, #2
    // bl ov83_0224777C
    // cmp r5, #0x32
    // bhs _02243B26
    // mov r0, #0xae
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ov83_02247944
    // add r0, r4, #0
    // mov r1, #0x52
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r4, #0xa]
    // mov r0, #0xf
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _02243B40
    // ldrb r1, [r4, #0xd]
    // add r0, r4, #0
    // mov r2, #5
    // bl ov83_02245ACC
    // mov r0, #0xa
    // strb r0, [r4, #8]
    // b _02243C7A
    // mov r0, #1
    // strb r0, [r4, #0x10]
    // pop {r3, r4, r5, pc}
    // ldr r0, _02243BA8 ; =0x00000604
    // add r0, r4, r0
    // bl ov83_022478B4
    // add r0, r4, #0
    // bl ov83_02244C9C
    // mov r0, #6
    // strb r0, [r4, #8]
    // b _02243C7A
    // bl ov83_02247CF0
    // cmp r0, #1
    // beq _02243B64
    // b _02243C7A
    // add r0, r4, #0
    // bl ov83_02244C9C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov83_02246114
    // mov r0, #0x15
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // mov r1, #0xc8
    // mov r2, #0x69
    // bl ov83_02247630
    // mov r0, #6
    // strb r0, [r4, #8]
    // b _02243C7A
    // add r1, r4, #0
    // add r1, #0x80
    // bl ov83_022448E4
    // mov r0, #0xc
    // strb r0, [r4, #8]
    // ldrb r1, [r4, #0xd]
    // ldrb r2, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02244E24
    // cmp r0, #1
    // bne _02243C7A
    // mov r0, #0x10
    // strb r0, [r4, #8]
    // b _02243C7A
    // nop
    // _02243BA8: .word 0x00000604
    // _02243BAC: .word 0x000005F8
    // _02243BB0: .word 0x000005DC
    // _02243BB4: .word 0x00000554
    // _02243BB8: .word 0x00000558
    // ldrb r1, [r4, #0xd]
    // ldrb r2, [r4, #0x13]
    // bl ov83_02244E24
    // cmp r0, #1
    // bne _02243C7A
    // mov r0, #0xe
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldrb r0, [r4, #0x13]
    // cmp r0, #3
    // bne _02243BDA
    // mov r0, #0x11
    // strb r0, [r4, #8]
    // b _02243C7A
    // mov r0, #0x12
    // strb r0, [r4, #8]
    // b _02243C7A
    // bl ov83_02247CF0
    // cmp r0, #1
    // bne _02243C7A
    // ldr r0, _02243C80 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov83_02244C9C
    // mov r0, #6
    // strb r0, [r4, #8]
    // b _02243C7A
    // bl ov83_02247CF0
    // cmp r0, #1
    // bne _02243C7A
    // ldr r0, _02243C80 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ov83_02245094
    // add r0, r4, #0
    // bl ov83_02244BEC
    // mov r0, #0
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldr r0, _02243C84 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #0x20
    // tst r0, r1
    // bne _02243C7A
    // mov r0, #0x10
    // tst r0, r1
    // bne _02243C7A
    // bl ov83_02247CF0
    // cmp r0, #1
    // bne _02243C7A
    // ldr r0, _02243C80 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov83_022459A0
    // add r0, r4, #0
    // bl ov83_02244C58
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _02243C7A
    // ldr r0, _02243C84 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #0x20
    // tst r0, r1
    // bne _02243C7A
    // mov r0, #0x10
    // tst r0, r1
    // bne _02243C7A
    // bl ov83_02247CF0
    // cmp r0, #1
    // bne _02243C7A
    // ldr r0, _02243C80 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov83_022459A0
    // add r0, r4, #0
    // bl ov83_02244C58
    // mov r0, #2
    // strb r0, [r4, #8]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02243C80: .word 0x000005DC
    // _02243C84: .word gSystem
    // TODO: decompile
}



void ov83_02243C88(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #5
    // bhi _02243D74
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02243C9E: ; jump table
    // ldrb r2, [r4, #0xf]
    // mov r1, #0xf8
    // bic r2, r1
    // mov r1, #8
    // orr r1, r2
    // strb r1, [r4, #0xf]
    // ldrb r2, [r4, #0xd]
    // mov r1, #0x15
    // bl ov83_022450A8
    // cmp r0, #1
    // bne _02243D74
    // mov r0, #0
    // strb r0, [r4, #0x10]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _02243D74
    // ldrb r1, [r4, #0x11]
    // cmp r1, #0xff
    // beq _02243D74
    // mov r1, #0
    // strb r1, [r4, #0x17]
    // ldrb r2, [r4, #0x13]
    // ldrb r1, [r4, #0x11]
    // cmp r2, #5
    // bne _02243CE8
    // mov r2, #5
    // bl ov83_02245ACC
    // b _02243CEC
    // bl ov83_0224563C
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _02243D74
    // ldrb r0, [r4, #0x15]
    // ldrb r1, [r4, #0x11]
    // bl ov83_0224776C
    // add r1, r0, #0
    // ldrb r2, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02244E24
    // cmp r0, #1
    // bne _02243D74
    // mov r0, #0x1e
    // strb r0, [r4, #0x16]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _02243D74
    // ldrb r0, [r4, #0x16]
    // sub r0, r0, #1
    // strb r0, [r4, #0x16]
    // ldrb r0, [r4, #0x16]
    // cmp r0, #0
    // bne _02243D74
    // bl sub_02037BEC
    // mov r0, #0x85
    // bl sub_02037AC0
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _02243D74
    // mov r0, #0x85
    // bl sub_02037B38
    // cmp r0, #1
    // bne _02243D74
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _02243D74
    // ldrb r0, [r4, #0x15]
    // ldrb r1, [r4, #0x11]
    // bl ov83_0224776C
    // add r1, r0, #0
    // ldrb r2, [r4, #0x13]
    // add r0, r4, #0
    // bl ov83_02244F60
    // cmp r0, #1
    // bne _02243D74
    // bl sub_02037BEC
    // mov r0, #0x6b
    // bl sub_020379A0
    // mov r0, #0xff
    // strb r0, [r4, #0x11]
    // ldr r0, _02243D78 ; =0x000005B6
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _02243D78: .word 0x000005B6
    // TODO: decompile
}



void ov83_02243D7C(void) {
    ov83_022450A8(0x17, 0);
    *((u8*)(r4 + 0x16)) = 0x1e;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 0x16)) = (*((u8*)(r4 + 0x16)) - 1);
    sub_02037BEC(*((u8*)(r4 + 0x16)));
    sub_02037AC0(0x86);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    sub_02037B38(0x86);
    sub_02037BEC();
    // add r4, #0xc0
    ov83_02245094(r4);
}



void ov83_02243DE8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u8*)(r4 + 8)) + 1));
}



void ov83_02243E30(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // ldr r1, _02243F80 ; =0x00000604
    // str r0, [sp]
    // add r0, r0, r1
    // bl ov83_02247858
    // ldr r1, _02243F84 ; =0x000005F4
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    // bl ov83_02247CC4
    // mov r1, #0x5f
    // ldr r0, [sp]
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // bl ov83_02247A18
    // ldr r1, _02243F88 ; =0x00000508
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    // bl ov83_0224753C
    // ldr r1, _02243F8C ; =0x0000050C
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    // bl ov83_0224753C
    // mov r1, #0x15
    // ldr r0, [sp]
    // lsl r1, r1, #6
    // ldr r0, [r0, r1]
    // bl ov83_0224753C
    // ldr r1, _02243F90 ; =0x00000544
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    // bl ov83_0224753C
    // mov r0, #0
    // mov r6, #0x52
    // ldr r7, [sp]
    // str r0, [sp, #4]
    // lsl r6, r6, #4
    // mov r4, #0
    // add r5, r7, #0
    // ldr r0, [r5, r6]
    // bl ov83_0224753C
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #2
    // blt _02243E8C
    // ldr r0, [sp, #4]
    // add r7, #8
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #4
    // blt _02243E88
    // ldr r0, [sp]
    // mov r1, #1
    // ldrb r0, [r0, #9]
    // bl ov80_02237B58
    // add r6, r0, #0
    // mov r5, #0
    // cmp r6, #0
    // ble _02243EDC
    // mov r7, #0x51
    // ldr r4, [sp]
    // lsl r7, r7, #4
    // ldr r0, _02243F94 ; =0x000004F4
    // ldr r0, [r4, r0]
    // bl ov83_0224753C
    // ldr r0, _02243F98 ; =0x000004E4
    // ldr r0, [r4, r0]
    // bl ov83_0224753C
    // ldr r0, [r4, r7]
    // bl ov83_0224753C
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, r6
    // blt _02243EBE
    // bl sub_0203A914
    // mov r1, #0x2b
    // ldr r0, [sp]
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // mov r1, #2
    // bl PaletteData_FreeBuffers
    // mov r1, #0x2b
    // ldr r0, [sp]
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // mov r1, #0
    // bl PaletteData_FreeBuffers
    // mov r1, #0x2b
    // ldr r0, [sp]
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // bl PaletteData_Free
    // mov r1, #0x2b
    // ldr r0, [sp]
    // mov r2, #0
    // lsl r1, r1, #4
    // str r2, [r0, r1]
    // add r1, #0x18
    // add r0, r0, r1
    // bl ov83_022471FC
    // ldr r0, [sp]
    // ldr r0, [r0, #0x20]
    // bl DestroyMsgData
    // ldr r0, [sp]
    // ldr r0, [r0, #0x24]
    // bl MessageFormat_Delete
    // ldr r0, [sp]
    // ldr r0, [r0, #0x28]
    // bl String_Delete
    // ldr r0, [sp]
    // ldr r0, [r0, #0x2c]
    // bl String_Delete
    // mov r1, #0xad
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // bl MessagePrinter_Delete
    // mov r0, #4
    // bl FontID_Release
    // ldr r4, [sp]
    // mov r5, #0
    // ldr r0, [r4, #0x30]
    // bl String_Delete
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #3
    // blt _02243F50
    // ldr r0, [sp]
    // mov r1, #1
    // add r0, #0x50
    // bl ov83_0224791C
    // ldr r0, [sp]
    // ldr r0, [r0, #0x4c]
    // bl ov83_0224442C
    // mov r1, #0x56
    // ldr r0, [sp]
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // bl NARC_Delete
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02243F80: .word 0x00000604
    // _02243F84: .word 0x000005F4
    // _02243F88: .word 0x00000508
    // _02243F8C: .word 0x0000050C
    // _02243F90: .word 0x00000544
    // _02243F94: .word 0x000004F4
    // _02243F98: .word 0x000004E4
    // TODO: decompile
}



void ov83_02243F9C(void) {
    // push {r3, lr}
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetHBlankIntrCB
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _02243FCC ; =0xFFFFE0FF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _02243FD0 ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // pop {r3, pc}
    // _02243FCC: .word 0xFFFFE0FF
    // _02243FD0: .word 0x04001000
    // TODO: decompile
}



void ov83_02243FD4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r5, r0, #0
    // mov r0, #0xb7
    // mov r1, #0x6b
    // bl NARC_New
    // mov r1, #0x56
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov83_02244394
    // add r0, r5, #0
    // bl ov83_02244408
    // mov r0, #4
    // mov r1, #0x6b
    // bl FontID_Alloc
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0x21
    // mov r3, #0x6b
    // bl NewMsgDataFromNarc
    // str r0, [r5, #0x20]
    // mov r0, #0x6b
    // bl MessageFormat_New
    // str r0, [r5, #0x24]
    // mov r0, #0x96
    // lsl r0, r0, #2
    // mov r1, #0x6b
    // bl String_New
    // str r0, [r5, #0x28]
    // mov r0, #0x96
    // lsl r0, r0, #2
    // mov r1, #0x6b
    // bl String_New
    // str r0, [r5, #0x2c]
    // mov r6, #0
    // add r4, r5, #0
    // mov r7, #0x20
    // add r0, r7, #0
    // mov r1, #0x6b
    // bl String_New
    // str r0, [r4, #0x30]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #3
    // blt _02244030
    // mov r1, #7
    // mov r0, #0
    // lsl r1, r1, #6
    // mov r2, #0x6b
    // bl LoadFontPal0
    // mov r1, #0x1a
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #0x6b
    // bl LoadFontPal1
    // mov r0, #1
    // mov r1, #2
    // mov r2, #0
    // mov r3, #0x6b
    // bl MessagePrinter_New
    // mov r1, #0xad
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r1, r5, #0
    // ldr r0, [r5, #0x4c]
    // add r1, #0x50
    // mov r2, #1
    // bl ov83_022478D4
    // add r0, sp, #0x28
    // add r1, sp, #0x2c
    // add r3, sp, #0x28
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, #2
    // add r2, sp, #0x2c
    // add r3, #2
    // bl ov83_02244DF4
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _0224409E
    // mov r0, #0x3c
    // mov r7, #0x40
    // str r0, [sp, #0x1c]
    // b _022440A4
    // mov r0, #0x1c
    // mov r7, #0x20
    // str r0, [sp, #0x1c]
    // ldrb r0, [r5, #9]
    // mov r1, #1
    // bl ov80_02237B58
    // mov r6, #0
    // str r0, [sp, #0x18]
    // cmp r0, #0
    // ble _022441AC
    // add r4, r5, #0
    // mov r0, #7
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // mov r1, #0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // mov r0, #0x3e
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // mov r0, #0xb2
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov83_02247454
    // ldr r1, _02244370 ; =0x000004F4
    // str r0, [r4, r1]
    // mov r1, #0
    // mov r0, #0xf
    // str r0, [sp]
    // lsl r0, r7, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // mov r0, #0x4e
    // str r0, [sp, #8]
    // mov r0, #3
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // mov r0, #0xb2
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov83_02247454
    // mov r1, #0x51
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // mov r0, #1
    // str r0, [sp]
    // lsl r0, r7, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // mov r0, #0x3a
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // mov r0, #0xb2
    // lsl r0, r0, #2
    // add r1, r6, #0
    // add r0, r5, r0
    // add r1, #0xa
    // mov r2, #0xa
    // mov r3, #5
    // bl ov83_02247454
    // ldr r1, _02244374 ; =0x000004E4
    // str r0, [r4, r1]
    // add r0, r1, #0
    // add r0, #0x78
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // add r1, r0, #0
    // ldr r0, _02244374 ; =0x000004E4
    // ldr r0, [r4, r0]
    // bl ov83_022475EC
    // ldr r0, _02244378 ; =0x0000054C
    // ldr r0, [r5, r0]
    // ldrb r0, [r0, r6]
    // cmp r0, #0
    // ldr r0, _02244370 ; =0x000004F4
    // bne _0224417C
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov83_0224755C
    // ldr r0, _02244374 ; =0x000004E4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl ov83_0224755C
    // mov r0, #0x51
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov83_0224755C
    // b _0224419A
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov83_0224755C
    // ldr r0, _02244374 ; =0x000004E4
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl ov83_0224755C
    // mov r0, #0x51
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov83_0224755C
    // ldr r0, [sp, #0x1c]
    // add r6, r6, #1
    // add r0, #0x40
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r4, r4, #4
    // add r7, #0x40
    // cmp r6, r0
    // blt _022440B6
    // add r0, r5, #0
    // add r1, sp, #0x34
    // add r2, sp, #0x30
    // mov r3, #0
    // bl ov83_02244DA0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // mov r1, #0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // add r2, r1, #0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0xb2
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r3, r1, #0
    // str r1, [sp, #0x10]
    // bl ov83_02247454
    // ldr r1, _0224437C ; =0x00000508
    // str r0, [r5, r1]
    // mov r0, #2
    // str r0, [sp]
    // ldr r1, [sp, #0x34]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x30]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // str r1, [sp, #8]
    // mov r1, #0
    // str r0, [sp, #0xc]
    // mov r0, #0xb2
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r2, r1, #0
    // add r3, r1, #0
    // str r1, [sp, #0x10]
    // bl ov83_02247454
    // ldr r1, _02244380 ; =0x0000050C
    // str r0, [r5, r1]
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _02244226
    // ldr r0, _02244380 ; =0x0000050C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl ov83_0224755C
    // mov r0, #0
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x20]
    // str r5, [sp, #0x24]
    // mov r7, #0
    // ldr r4, [sp, #0x24]
    // add r6, r7, #0
    // add r0, r5, #0
    // add r1, sp, #0x34
    // add r2, sp, #0x30
    // bl ov83_02245CE8
    // mov r0, #0xc
    // str r0, [sp]
    // ldr r1, [sp, #0x34]
    // ldr r0, [sp, #0x20]
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // mov r1, #0
    // ldr r0, [sp, #0x30]
    // add r2, r1, #0
    // add r0, r0, r6
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // mov r0, #0xb2
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r3, r1, #0
    // bl ov83_02247454
    // mov r1, #0x52
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov83_0224755C
    // add r7, r7, #1
    // add r6, #0xc
    // add r4, r4, #4
    // cmp r7, #2
    // blt _02244234
    // ldr r0, [sp, #0x20]
    // add r0, #0x40
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // add r0, #8
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // add r0, r0, #1
    // str r0, [sp, #0x14]
    // cmp r0, #4
    // blt _0224422E
    // add r0, r5, #0
    // bl ov83_02245C80
    // mov r1, #0
    // mov r0, #0xb
    // str r0, [sp]
    // mov r0, #0x14
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xb2
    // lsl r0, r0, #2
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    // add r2, r1, #0
    // add r3, r1, #0
    // str r1, [sp, #0x10]
    // bl ov83_02247454
    // mov r1, #0x15
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // mov r1, #0
    // bl ov83_0224755C
    // add r0, r5, #0
    // bl ov83_02245D48
    // add r0, r5, #0
    // bl ov83_02245F24
    // add r0, r5, #0
    // mov r1, #1
    // bl ov83_02246114
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x30
    // str r0, [sp, #4]
    // mov r0, #0x28
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // mov r0, #0xb2
    // str r1, [sp, #0x10]
    // mov r1, #2
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov83_022474C4
    // ldr r1, _02244384 ; =0x00000544
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov83_02246988
    // ldrb r2, [r5, #0x14]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov83_02247A7C
    // mov r1, #0x5f
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r1, #0xb2
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // sub r1, #0x18
    // ldr r1, [r5, r1]
    // bl ov83_02247CB8
    // ldr r1, _02244388 ; =0x000005F4
    // str r0, [r5, r1]
    // add r1, #0x10
    // add r0, r5, r1
    // bl ov83_02247844
    // bl sub_02037474
    // cmp r0, #0
    // beq _02244354
    // mov r0, #1
    // mov r1, #0x10
    // bl G2dRenderer_SetObjCharTransferReservedRegion
    // mov r0, #1
    // bl G2dRenderer_SetPlttTransferReservedRegion
    // bl sub_0203A880
    // mov r0, #0xa
    // str r0, [sp]
    // ldr r0, _0224438C ; =0x04000050
    // mov r1, #0
    // mov r2, #0xe
    // mov r3, #6
    // bl G2x_SetBlendAlpha_
    // ldr r0, _02244390 ; =ov83_02244488
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // _02244370: .word 0x000004F4
    // _02244374: .word 0x000004E4
    // _02244378: .word 0x0000054C
    // _0224437C: .word 0x00000508
    // _02244380: .word 0x0000050C
    // _02244384: .word 0x00000544
    // _02244388: .word 0x000005F4
    // _0224438C: .word 0x04000050
    // _02244390: .word ov83_02244488
    // TODO: decompile
}



void ov83_02244394(void) {
    // push {r4, lr}
    // ldr r2, _02244400 ; =0x04000304
    // add r4, r0, #0
    // ldrh r1, [r2]
    // ldr r0, _02244404 ; =0xFFFF7FFF
    // and r0, r1
    // strh r0, [r2]
    // bl ov83_022444C0
    // ldr r0, [r4, #0x4c]
    // bl ov83_022444E0
    // mov r0, #0x6b
    // bl PaletteData_Init
    // mov r1, #0x2b
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #2
    // lsl r2, r1, #8
    // mov r3, #0x6b
    // bl PaletteData_AllocBuffers
    // mov r2, #0x2b
    // lsl r2, r2, #4
    // ldr r0, [r4, r2]
    // mov r1, #0
    // sub r2, #0xb0
    // mov r3, #0x6b
    // bl PaletteData_AllocBuffers
    // add r0, r4, #0
    // mov r1, #3
    // bl ov83_0224465C
    // bl ov83_022446D0
    // add r0, r4, #0
    // mov r1, #2
    // bl ov83_02244704
    // bl ov83_0224474C
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // mov r1, #4
    // bl ov83_02244780
    // pop {r4, pc}
    // nop
    // _02244400: .word 0x04000304
    // _02244404: .word 0xFFFF7FFF
    // TODO: decompile
}



void ov83_02244408(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // add r2, r0, #0
    // ldr r1, _02244428 ; =0x0000055C
    // mov r0, #0xb2
    // lsl r0, r0, #2
    // lsl r2, r2, #0x18
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // lsr r2, r2, #0x18
    // bl ov83_02246E08
    // pop {r4, pc}
    // _02244428: .word 0x0000055C
    // TODO: decompile
}



void ov83_0224442C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x1f
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x1f
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r4, #0
    // mov r1, #3
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #2
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #0
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #1
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #4
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #5
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r2, _02244484 ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // pop {r4, pc}
    // nop
    // _02244484: .word 0x04000304
    // TODO: decompile
}



void ov83_02244488(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2b
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0224449A
    // bl PaletteData_PushTransparentBuffers
    // ldr r0, [r4, #0x4c]
    // bl DoScheduledBgGpuUpdates
    // bl GF_RunVramTransferTasks
    // bl OamManager_ApplyAndResetBuffers
    // ldr r3, _022444B8 ; =0x027E0000
    // ldr r1, _022444BC ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // nop
    // _022444B8: .word 0x027E0000
    // _022444BC: .word 0x00003FF8
    // TODO: decompile
}



void ov83_022444C0(void) {
}



void ov83_022444E0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0xb8
    // ldr r5, _0224463C ; =ov83_02248044
    // add r3, sp, #0xa8
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _02244640 ; =ov83_02248068
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #1
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x6b
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02244644 ; =ov83_02248084
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0x6b
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02244648 ; =ov83_022480A0
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #2
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x6b
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0224464C ; =ov83_022480BC
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #3
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x6b
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02244650 ; =ov83_022480D8
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #4
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02244654 ; =ov83_022480F4
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #5
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #5
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x6b
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // ldr r1, _02244658 ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // strh r2, [r1]
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0xb8
    // pop {r3, r4, r5, pc}
    // _0224463C: .word ov83_02248044
    // _02244640: .word ov83_02248068
    // _02244644: .word ov83_02248084
    // _02244648: .word ov83_022480A0
    // _0224464C: .word ov83_022480BC
    // _02244650: .word ov83_022480D8
    // _02244654: .word ov83_022480F4
    // _02244658: .word 0x04000008
    // TODO: decompile
}



void ov83_0224465C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadCharDataFromOpenNarc((0x56 << 4), 0x30, *((u32*)(r0 + 0x4c)), r1);
    ov80_02237D8C(*((u8*)(r5 + 9)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadScrnDataFromOpenNarc((0x56 << 4), 0x2c, *((u32*)(r5 + 0x4c)), r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadScrnDataFromOpenNarc((0x56 << 4), 0x2d, *((u32*)(r5 + 0x4c)), r4);
}



void ov83_022446D0(void) {
    // add r2, sp, #0
    GfGfxLoader_GetPlttData(0xb7, 0x9d, 0x6b);
    // ldr r0, [sp]
    DC_FlushRange(*((u32*)(r0 + 0xc)), 0x80);
    // ldr r0, [sp]
    GX_LoadBGPltt(*((u32*)(r0 + 0xc)), 0, 0x80);
    Heap_Free(r4);
}



void ov83_02244704(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadCharDataFromOpenNarc((0x56 << 4), 0x30, *((u32*)(r0 + 0x4c)), r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadScrnDataFromOpenNarc((0x56 << 4), 0x2e, *((u32*)(r5 + 0x4c)), r4);
}



void ov83_0224474C(void) {
    // add r2, sp, #0
    GfGfxLoader_GetPlttData(0xb7, 0x9d, 0x6b);
    // ldr r0, [sp]
    DC_FlushRange(*((u32*)(r0 + 0xc)), 0x80);
    // ldr r0, [sp]
    GX_LoadBGPltt(*((u32*)(r0 + 0xc)), 0, 0x80);
    Heap_Free(r4);
}



void ov83_02244780(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadCharDataFromOpenNarc((0x56 << 4), 0x28, *((u32*)(r0 + 0x4c)), r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadScrnDataFromOpenNarc((0x56 << 4), 0x93, *((u32*)(r5 + 0x4c)), r4);
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r5, r0]
    GfGfxLoader_GXLoadPalFromOpenNarc((0x56 << 4), 0xbe, 4, 0);
}



void ov83_022447E0(void) {
    // add r1, sp, #0x38
    // ldrb r1, [r1]
    FillWindowPixelBuffer(r1);
    ReadMsgDataIntoString(*((u32*)(r5 + 0x20)), r6, *((u32*)(r5 + 0x2c)));
    StringExpandPlaceholders(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), *((u32*)(r5 + 0x2c)));
    // ldr r0, [sp, #0x28]
    // add r2, sp, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // add r0, sp, #0x38
    // ldrb r1, [r0]
    // orr r0, r2
    // orr r0, r1
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x3c
    // ldrb r1, [r1]
    AddTextPrinterParameterizedWithColor(r4, *((u32*)(r5 + 0x28)), r7);
    ScheduleWindowCopyToVram(r4);
}



void ov83_0224484C(void) {
    ReadMsgDataIntoString(*((u32*)(r0 + 0x20)), r2, *((u32*)(r0 + 0x2c)));
    StringExpandPlaceholders(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), *((u32*)(r5 + 0x2c)));
    // ldr r0, [sp, #0x20]
    // add r2, sp, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #4]
    // add r0, sp, #0x30
    // ldrb r1, [r0]
    // orr r0, r2
    // orr r0, r1
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x34
    // ldrb r1, [r1]
    AddTextPrinterParameterizedWithColor(r4, *((u32*)(r5 + 0x28)), r6);
    ScheduleWindowCopyToVram(r4);
}



void ov83_022448AC(void) {
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r1, #0xc0
    ov83_022447E0(r0, r1, 1);
    // add r5, #0xc0
    ScheduleWindowCopyToVram(r5);
}



void ov83_022448E4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _02244902
    // mov r6, #0x24
    // b _02244904
    // mov r6, #4
    // ldrb r0, [r5, #9]
    // mov r1, #1
    // bl ov80_02237B58
    // mov r7, #0
    // str r0, [sp, #0xc]
    // cmp r0, #0
    // ble _022449C0
    // add r0, r6, #0
    // str r0, [sp, #0x14]
    // add r0, #0x18
    // str r0, [sp, #0x14]
    // add r0, r6, #0
    // str r0, [sp, #0x10]
    // add r0, #0x20
    // str r0, [sp, #0x10]
    // ldr r0, _022449CC ; =0x0000054C
    // ldr r0, [r5, r0]
    // ldrb r0, [r0, r7]
    // cmp r0, #0
    // bne _02244946
    // mov r0, #0x40
    // str r0, [sp]
    // mov r0, #0x10
    // lsl r2, r6, #0x10
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0
    // lsr r2, r2, #0x10
    // mov r3, #1
    // bl FillWindowPixelRect
    // b _022449AA
    // ldr r0, _022449D0 ; =0x0000055C
    // add r1, r7, #0
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // mov r1, #0xa3
    // mov r2, #0
    // str r0, [sp, #0x18]
    // bl GetMonData
    // str r4, [sp]
    // add r1, r0, #0
    // str r6, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0xad
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r2, #3
    // mov r3, #1
    // bl PrintUIntOnWindow
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0xad
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r3, [sp, #0x14]
    // mov r1, #0
    // add r2, r4, #0
    // bl sub_0200CDAC
    // ldr r0, [sp, #0x18]
    // mov r1, #0xa4
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // ldr r0, [sp, #0x10]
    // str r4, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0xad
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r2, #3
    // mov r3, #0
    // bl PrintUIntOnWindow
    // ldr r0, [sp, #0x14]
    // add r7, r7, #1
    // add r0, #0x40
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r6, #0x40
    // add r0, #0x40
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // cmp r7, r0
    // blt _02244924
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022449CC: .word 0x0000054C
    // _022449D0: .word 0x0000055C
    // TODO: decompile
}



void ov83_022449D4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // str r1, [sp, #0x10]
    // add r0, r1, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _022449F4
    // mov r4, #0x28
    // mov r6, #0x50
    // b _022449F8
    // mov r4, #8
    // mov r6, #0x30
    // ldrb r0, [r5, #9]
    // mov r1, #1
    // bl ov80_02237B58
    // mov r7, #0
    // str r0, [sp, #0x14]
    // cmp r0, #0
    // ble _02244A66
    // ldr r0, _02244A70 ; =0x0000055C
    // add r1, r7, #0
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // mov r1, #0xa1
    // mov r2, #0
    // str r0, [sp, #0x18]
    // bl GetMonData
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // mov r1, #1
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #0xad
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r3, #3
    // bl sub_0200CE7C
    // ldr r0, [sp, #0x18]
    // mov r1, #0x6f
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0
    // lsl r0, r0, #0x18
    // str r1, [sp]
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // add r0, r5, #0
    // add r2, r6, #0
    // mov r3, #1
    // bl ov83_02244BA8
    // ldr r0, [sp, #0x14]
    // add r7, r7, #1
    // add r4, #0x40
    // add r6, #0x40
    // cmp r7, r0
    // blt _02244A08
    // ldr r0, [sp, #0x10]
    // bl ScheduleWindowCopyToVram
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _02244A70: .word 0x0000055C
    // TODO: decompile
}



void ov83_02244A74(void) {
    // add r1, r0, #0
    // ldr r0, _02244A80 ; =0x00000604
    // ldr r3, _02244A84 ; =ov83_02247864
    // add r0, r1, r0
    // ldr r1, [r1, #0x4c]
    // bx r3
    // _02244A80: .word 0x00000604
    // _02244A84: .word ov83_02247864
    // TODO: decompile
}



void ov83_02244A88(void) {
}



void ov83_02244A90(void) {
}



void ov83_02244A98(void) {
}



void ov83_02244AB0(void) {
}



void ov83_02244ABC(void) {
    // ldr r0, [r5, r0]
    Save_PlayerData_GetProfile((0xaf << 2));
    BufferPlayersName(*((u32*)(r5 + 0x24)), r4, r0);
}



void ov83_02244AD8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r1, #0
    // mov r1, #0xaf
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // str r2, [sp, #0x10]
    // add r5, r3, #0
    // bl Save_PlayerData_GetProfile
    // add r6, r0, #0
    // mov r0, #8
    // mov r1, #0x6b
    // bl String_New
    // add r4, r0, #0
    // add r0, r6, #0
    // bl PlayerProfile_GetNamePtr
    // add r1, r0, #0
    // add r0, r4, #0
    // bl CopyU16ArrayToString
    // add r0, r6, #0
    // bl PlayerProfile_GetTrainerGender
    // cmp r0, #0
    // bne _02244B14
    // ldr r1, _02244B3C ; =0x00070800
    // b _02244B18
    // mov r1, #0xc1
    // lsl r1, r1, #0xa
    // str r5, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r1, sp, #0x18
    // ldrb r1, [r1, #0x10]
    // ldr r3, [sp, #0x10]
    // add r0, r7, #0
    // add r2, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02244B3C: .word 0x00070800
    // TODO: decompile
}



void ov83_02244B40(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // add r7, r1, #0
    // str r2, [sp, #0x18]
    // add r6, r3, #0
    // bl sub_0203769C
    // mov r1, #1
    // eor r0, r1
    // bl sub_02034818
    // str r0, [sp, #0x1c]
    // bl PlayerProfile_GetTrainerGender
    // cmp r0, #0
    // bne _02244B66
    // ldr r4, _02244BA4 ; =0x00070800
    // b _02244B6A
    // mov r4, #0xc1
    // lsl r4, r4, #0xa
    // ldr r0, [r5, #0x24]
    // ldr r2, [sp, #0x1c]
    // mov r1, #0
    // bl BufferPlayersName
    // str r6, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // lsr r0, r4, #0x10
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // lsr r0, r4, #8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r2, #1
    // bl ov83_0224484C
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _02244BA4: .word 0x00070800
    // TODO: decompile
}



void ov83_02244BA8(void) {
    // add r3, sp, #0x20
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r4, [sp, #8]
    // str r5, [sp, #0xc]
    // str r6, [sp, #0x10]
    // add r2, sp, #0x20
    // str r2, [sp, #0x14]
    ov83_0224484C(0x41, r2);
}



void ov83_02244BEC(void) {
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r3, [sp, #0x14]
    // add r1, #0x60
    ov83_022447E0(r0, 5, 0);
    *((u8*)(r4 + 0xa)) = r0;
    // ldr r0, [r4, r0]
    Options_GetFrame((0xae << 2));
    // add r0, #0xd0
    ov83_02247944(r4, r0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xd0
    // str r3, [sp, #0x14]
    ov83_022447E0(r4, r4, 4, 1);
    *((u8*)(r4 + 0xa)) = r0;
}



void ov83_02244C4C(void) {
}



void ov83_02244C58(void) {
    // ldr r0, [r4, r0]
    Options_GetFrame((0xae << 2));
    // add r0, #0xc0
    ov83_02247944(r4, r0);
    // mvn r1, r1
    // str r1, [r4, r0]
    ov83_02246AA4(r4, 1);
    ov83_02246CC0(r4);
}



void ov83_02244C88(void) {
}



void ov83_02244C9C(void) {
    // ldr r0, [r4, r0]
    Options_GetFrame((0xae << 2));
    // add r0, #0xc0
    ov83_02247944(r4, r0);
    // mvn r1, r1
    // str r1, [r4, r0]
    ov83_02246B6C(r4, 1);
    ov83_02246D40(r4);
}



void ov83_02244CCC(void) {
}



void ov83_02244CD4(void) {
}



void ov83_02244CDC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02244D08 ; =0x000005DC
    // bl PlaySE
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #1
    // bne _02244CFA
    // ldrb r2, [r4, #0xd]
    // add r0, r4, #0
    // mov r1, #0x16
    // bl ov83_022450A8
    // ldrb r1, [r4, #0xd]
    // add r0, r4, #0
    // mov r2, #0
    // bl ov83_02244D0C
    // pop {r4, pc}
    // nop
    // _02244D08: .word 0x000005DC
    // TODO: decompile
}



void ov83_02244D0C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r7, r1, #0
    // add r6, r2, #0
    // bne _02244D22
    // ldr r0, _02244D98 ; =0x00000508
    // mov r2, #1
    // ldr r4, [r5, r0]
    // mov r1, #0
    // b _02244D2A
    // ldr r0, _02244D9C ; =0x0000050C
    // mov r2, #2
    // ldr r4, [r5, r0]
    // mov r1, #0x11
    // ldrb r0, [r5, #0x15]
    // cmp r7, r0
    // blo _02244D50
    // add r0, r4, #0
    // bl ov83_022475D4
    // add r0, r4, #0
    // mov r1, #0xe0
    // mov r2, #0xa0
    // bl ov83_02247568
    // cmp r6, #0
    // bne _02244D92
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_02246938
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r1, r2, #0
    // bl ov83_022475D4
    // add r0, r5, #0
    // add r1, sp, #4
    // add r2, sp, #0
    // add r3, r7, #0
    // bl ov83_02244DA0
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // lsr r2, r2, #0x10
    // bl ov83_02247568
    // cmp r6, #0
    // bne _02244D92
    // ldrb r1, [r5, #0xc]
    // ldrb r0, [r5, #0x15]
    // cmp r1, r0
    // blo _02244D8A
    // add r0, r5, #0
    // mov r1, #1
    // bl ov83_02246938
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_0224691C
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02244D98: .word 0x00000508
    // _02244D9C: .word 0x0000050C
    // TODO: decompile
}



void ov83_02244DA0(void) {
    ov80_02237D8C(*((u8*)(r0 + 9)));
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r6]
}



void ov83_02244DF4(void) {
    // ldr r4, [sp, #0x18]
    ov80_02237D8C(*((u8*)(r0 + 9)));
    // strh r0, [r5]
    // strh r0, [r6]
    // strh r0, [r7]
    // strh r0, [r4]
    // strh r1, [r5]
    // strh r1, [r6]
    // strh r0, [r7]
    // strh r1, [r4]
}



void ov83_02244E24(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // ldrb r0, [r4, #0x14]
    // add r5, r2, #0
    // bl ov83_02247768
    // add r6, r0, #0
    // ldr r0, _02244F58 ; =0x0000055C
    // add r1, r6, #0
    // ldr r0, [r4, r0]
    // bl Party_GetMonByIndex
    // cmp r5, #5
    // bls _02244E44
    // b _02244F52
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02244E50: ; jump table
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // add sp, #0x14
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldrb r1, [r4, #0xf]
    // lsl r0, r1, #0x1f
    // lsr r0, r0, #0x1f
    // bne _02244EC0
    // mov r0, #1
    // bic r1, r0
    // mov r0, #1
    // orr r0, r1
    // strb r0, [r4, #0xf]
    // ldrb r0, [r4, #0x12]
    // cmp r0, #1
    // bne _02244E86
    // mov r5, #9
    // b _02244E88
    // mov r5, #0xa
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _02244E96
    // mov r1, #0x50
    // b _02244E98
    // mov r1, #0x30
    // lsl r0, r6, #6
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // str r5, [sp]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // mov r1, #0
    // mov r0, #0x32
    // str r0, [sp, #8]
    // mov r0, #0xb2
    // lsl r0, r0, #2
    // str r1, [sp, #0xc]
    // add r0, r4, r0
    // add r2, r1, #0
    // add r3, r1, #0
    // str r1, [sp, #0x10]
    // bl ov83_02247454
    // ldr r1, _02244F5C ; =0x00000504
    // str r0, [r4, r1]
    // ldr r0, _02244F5C ; =0x00000504
    // ldr r0, [r4, r0]
    // bl ov83_02247624
    // cmp r0, #0
    // bne _02244F52
    // ldr r0, _02244F5C ; =0x00000504
    // ldr r0, [r4, r0]
    // bl ov83_0224753C
    // ldr r0, _02244F5C ; =0x00000504
    // mov r1, #0
    // str r1, [r4, r0]
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // add sp, #0x14
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _02244F08
    // add r0, r4, #0
    // mov r1, #0
    // bl ov83_02246114
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // add sp, #0x14
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // add sp, #0x14
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _02244F36
    // add r0, r4, #0
    // mov r1, #0
    // bl ov83_02246114
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // add sp, #0x14
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // add sp, #0x14
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // add sp, #0x14
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _02244F58: .word 0x0000055C
    // _02244F5C: .word 0x00000504
    // TODO: decompile
}



void ov83_02244F60(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0x14]
    // add r6, r2, #0
    // ldrb r5, [r4, #0x15]
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _02245064 ; =0x0000055C
    // ldr r0, [r4, r0]
    // bl Party_GetMonByIndex
    // cmp r6, #5
    // bhi _02245060
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02244F88: ; jump table
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldrb r0, [r4, #0xf]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // bne _02244FB0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov83_02246114
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #1
    // bne _02244FF0
    // bl sub_0203769C
    // cmp r0, #0
    // ldrb r0, [r4, #0x11]
    // bne _02244FE0
    // cmp r0, r5
    // blo _02244FF0
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // cmp r0, r5
    // bhs _02244FF0
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldrb r1, [r4, #0xf]
    // lsl r0, r1, #0x1f
    // lsr r0, r0, #0x1f
    // bne _02245060
    // mov r0, #0xf8
    // bic r1, r0
    // mov r0, #0x18
    // orr r0, r1
    // strb r0, [r4, #0xf]
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldrb r0, [r4, #9]
    // bl ov80_02237D8C
    // cmp r0, #1
    // bne _02245042
    // bl sub_0203769C
    // cmp r0, #0
    // ldrb r0, [r4, #0x11]
    // bne _02245032
    // cmp r0, r5
    // blo _02245042
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // cmp r0, r5
    // bhs _02245042
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldrb r1, [r4, #0xf]
    // lsl r0, r1, #0x1f
    // lsr r0, r0, #0x1f
    // bne _02245060
    // mov r0, #0xf8
    // bic r1, r0
    // mov r0, #0x18
    // orr r0, r1
    // strb r0, [r4, #0xf]
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r4, #0xf]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _02245064: .word 0x0000055C
    // TODO: decompile
}



void ov83_02245068(void) {
    // cmp r0, #1
    // bne _02245070
    // mov r0, #1
    // bx lr
    // mov r0, #0xf
    // bx lr
    // TODO: decompile
}



void ov83_02245074(void) {
    ov83_02245390();
    // add r0, #0xc0
    ov83_02245094(r4);
    // ldr r0, [r4, r0]
    ov83_0224755C((0x15 << 6), 0);
}



void ov83_02245094(void) {
}



void ov83_022450A8(void) {
    // push {r3, r4, r5, lr}
    // add r3, r1, #0
    // sub r3, #0x14
    // add r5, r0, #0
    // cmp r3, #3
    // bhi _022450E6
    // add r3, r3, r3
    // add r3, pc
    // ldrh r3, [r3, #6]
    // lsl r3, r3, #0x10
    // asr r3, r3, #0x10
    // add pc, r3
    // _022450C0: ; jump table
    // mov r4, #0x35
    // bl ov83_02245104
    // b _022450E6
    // mov r4, #0x36
    // bl ov83_0224517C
    // b _022450E6
    // mov r4, #0x37
    // bl ov83_02245210
    // b _022450E6
    // mov r4, #0x38
    // bl ov83_02245248
    // ldr r1, _02245100 ; =0x00000564
    // add r0, r4, #0
    // add r1, r5, r1
    // mov r2, #0x28
    // bl sub_02037030
    // cmp r0, #1
    // bne _022450FA
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02245100: .word 0x00000564
    // TODO: decompile
}



void ov83_02245104(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // add r4, r1, #0
    // bl Save_PlayerData_GetProfile
    // ldr r1, _02245144 ; =0x00000564
    // strh r4, [r6, r1]
    // bl PlayerProfile_GetTrainerGender
    // ldr r1, _02245148 ; =0x00000566
    // mov r4, #0
    // strh r0, [r6, r1]
    // add r5, r6, #4
    // sub r7, r1, #2
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // lsl r2, r4, #0x18
    // ldrb r1, [r6, #9]
    // ldr r0, [r6, r0]
    // lsr r2, r2, #0x18
    // bl ov83_0224777C
    // strh r0, [r5, r7]
    // add r4, r4, #1
    // add r5, r5, #2
    // cmp r4, #3
    // blt _02245126
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02245144: .word 0x00000564
    // _02245148: .word 0x00000566
    // TODO: decompile
}



void ov83_0224514C(void) {
    // push {r4, r5, r6, lr}
    // add r4, r3, #0
    // add r5, r0, #0
    // ldrb r0, [r4, #0x17]
    // add r6, r2, #0
    // add r0, r0, #1
    // strb r0, [r4, #0x17]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _02245176
    // ldr r0, _02245178 ; =0x000005B7
    // mov r3, #0
    // add r5, r6, #4
    // ldrh r2, [r5]
    // add r1, r4, r3
    // add r3, r3, #1
    // add r5, r5, #2
    // strb r2, [r1, r0]
    // cmp r3, #3
    // blt _02245168
    // pop {r4, r5, r6, pc}
    // _02245178: .word 0x000005B7
    // TODO: decompile
}



void ov83_0224517C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _022451B0 ; =0x00000564
    // add r4, r2, #0
    // strh r1, [r5, r0]
    // add r0, r0, #2
    // strh r4, [r5, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0224519A
    // ldrb r0, [r5, #0x11]
    // cmp r0, #0xff
    // bne _0224519A
    // strb r4, [r5, #0x11]
    // ldrb r1, [r5, #0x11]
    // ldr r0, _022451B4 ; =0x00000568
    // strh r1, [r5, r0]
    // ldrb r2, [r5, #0x12]
    // add r1, r0, #4
    // add r0, r0, #6
    // strh r2, [r5, r1]
    // ldrb r1, [r5, #0x13]
    // strh r1, [r5, r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _022451B0: .word 0x00000564
    // _022451B4: .word 0x00000568
    // TODO: decompile
}



void ov83_022451B8(void) {
    // push {r4, r5, r6, lr}
    // add r4, r3, #0
    // add r6, r0, #0
    // ldrb r0, [r4, #0x17]
    // add r5, r2, #0
    // add r0, r0, #1
    // strb r0, [r4, #0x17]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _02245208
    // ldrh r1, [r5, #2]
    // ldr r0, _0224520C ; =0x000005B5
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _022451FC
    // ldrb r0, [r4, #0x11]
    // cmp r0, #0xff
    // ldr r0, _0224520C ; =0x000005B5
    // beq _022451EA
    // mov r1, #0
    // strb r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // ldrb r1, [r4, r0]
    // ldrb r0, [r4, #0x15]
    // add r0, r1, r0
    // strb r0, [r4, #0x11]
    // ldrh r0, [r5, #8]
    // strb r0, [r4, #0x12]
    // ldrh r0, [r5, #0xa]
    // strb r0, [r4, #0x13]
    // pop {r4, r5, r6, pc}
    // ldrh r0, [r5, #4]
    // strb r0, [r4, #0x11]
    // ldrh r0, [r5, #8]
    // strb r0, [r4, #0x12]
    // ldrh r0, [r5, #0xa]
    // strb r0, [r4, #0x13]
    // pop {r4, r5, r6, pc}
    // nop
    // _0224520C: .word 0x000005B5
    // TODO: decompile
}



void ov83_02245210(void) {
    // ldr r2, _0224521C ; =0x00000564
    // strh r1, [r0, r2]
    // ldrb r3, [r0, #0xd]
    // add r1, r2, #2
    // strh r3, [r0, r1]
    // bx lr
    // _0224521C: .word 0x00000564
    // TODO: decompile
}



void ov83_02245220(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r2, #0
    // add r4, r3, #0
    // bl sub_0203769C
    // cmp r5, r0
    // beq _02245240
    // ldrh r0, [r6, #2]
    // ldr r1, _02245244 ; =0x000005B4
    // mov r2, #1
    // strb r0, [r4, r1]
    // ldrb r1, [r4, r1]
    // add r0, r4, #0
    // bl ov83_02244D0C
    // pop {r4, r5, r6, pc}
    // nop
    // _02245244: .word 0x000005B4
    // TODO: decompile
}



void ov83_02245248(void) {
    // ldr r1, _02245250 ; =0x00000564
    // mov r2, #1
    // strh r2, [r0, r1]
    // bx lr
    // _02245250: .word 0x00000564
    // TODO: decompile
}



void ov83_02245254(void) {
}



void ov83_02245270(void) {
}



void ov83_02245288(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0xae
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r4, r1, #0
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r5, #0
    // add r0, #0xc0
    // bl ov83_02247944
    // ldrb r0, [r5, #0x14]
    // add r1, r4, #0
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _022452F8 ; =0x0000055C
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_02244AB0
    // add r0, r5, #0
    // mov r1, #0x2f
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r5, #0xa]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov83_02245270
    // add r0, r5, #0
    // bl ov83_02245C80
    // ldrb r0, [r5, #0xd]
    // cmp r0, r4
    // bne _022452F0
    // add r0, r5, #0
    // bl ov83_02245D48
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_02246114
    // ldr r0, _022452FC ; =0x00000623
    // bl PlaySE
    // pop {r3, r4, r5, pc}
    // _022452F8: .word 0x0000055C
    // _022452FC: .word 0x00000623
    // TODO: decompile
}



void ov83_02245300(void) {
}



void ov83_02245318(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0xae
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r4, r1, #0
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r5, #0
    // add r0, #0xc0
    // bl ov83_02247944
    // ldrb r0, [r5, #0x14]
    // add r1, r4, #0
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _02245388 ; =0x0000055C
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_02244AB0
    // add r0, r5, #0
    // mov r1, #0x53
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r5, #0xa]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov83_02245300
    // add r0, r5, #0
    // bl ov83_02245C80
    // ldrb r0, [r5, #0xd]
    // cmp r0, r4
    // bne _02245380
    // add r0, r5, #0
    // bl ov83_02245D48
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_02246114
    // ldr r0, _0224538C ; =0x00000623
    // bl PlaySE
    // pop {r3, r4, r5, pc}
    // _02245388: .word 0x0000055C
    // _0224538C: .word 0x00000623
    // TODO: decompile
}



void ov83_02245390(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xf]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _022453AC
    // ldr r0, _022453B8 ; =0x000005F8
    // ldr r0, [r4, r0]
    // bl TouchscreenListMenu_DestroyButtons
    // add r0, r4, #0
    // bl ov83_02246C70
    // ldr r0, _022453BC ; =0x00000604
    // add r0, r4, r0
    // bl ov83_022478B4
    // pop {r4, pc}
    // nop
    // _022453B8: .word 0x000005F8
    // _022453BC: .word 0x00000604
    // TODO: decompile
}



void ov83_022453C0(void) {
    // ldr r0, [r4, r0]
    Options_GetFrame((0xae << 2));
    // add r4, #0xc0
    ov83_02247944(r4, r0);
}



void ov83_022453DC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r4, r1, #0
    // add r1, sp, #0x1c
    // str r1, [sp]
    // add r1, sp, #0x20
    // add r3, sp, #0x1c
    // add r5, r0, #0
    // add r1, #2
    // add r2, sp, #0x20
    // add r3, #2
    // bl ov83_02244DF4
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _02245472
    // add r1, sp, #0x1c
    // ldrh r0, [r1, #6]
    // add r0, #0x48
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // ldrh r0, [r1, #4]
    // mov r1, #0
    // add r2, r7, #0
    // add r0, r0, #1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // mov r0, #0x30
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r3, r6, #0
    // bl FillWindowPixelRect
    // ldrb r0, [r5, #9]
    // bl sub_0205C1F0
    // str r0, [sp, #0x18]
    // ldrb r0, [r5, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r5, #4]
    // ldr r1, [sp, #0x18]
    // bl FrontierSave_GetStat
    // mov r1, #0
    // add r2, r0, #0
    // str r1, [sp]
    // add r0, r5, #0
    // mov r3, #4
    // bl ov83_02244A98
    // str r6, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r2, #2
    // str r2, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r3, r7, #0
    // bl ov83_0224484C
    // strb r0, [r5, #0xa]
    // b _02245540
    // mov r0, #0x30
    // str r0, [sp]
    // mov r0, #0x10
    // mov r1, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0x40
    // add r3, r1, #0
    // bl FillWindowPixelRect
    // mov r0, #0x30
    // str r0, [sp]
    // mov r0, #0x10
    // mov r1, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0xc0
    // add r3, r1, #0
    // bl FillWindowPixelRect
    // bl sub_0203769C
    // cmp r0, #0
    // bne _022454C6
    // ldrb r0, [r5, #9]
    // bl sub_0205C1F0
    // add r6, r0, #0
    // ldrb r0, [r5, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r5, #4]
    // add r1, r6, #0
    // bl FrontierSave_GetStat
    // add r6, r0, #0
    // ldr r0, _0224554C ; =0x000005BA
    // ldrh r7, [r5, r0]
    // b _022454E8
    // ldr r0, _0224554C ; =0x000005BA
    // ldrh r6, [r5, r0]
    // ldrb r0, [r5, #9]
    // bl sub_0205C1F0
    // add r7, r0, #0
    // ldrb r0, [r5, #9]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r0, [r5, #4]
    // add r1, r7, #0
    // bl FrontierSave_GetStat
    // add r7, r0, #0
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r6, #0
    // mov r3, #4
    // str r1, [sp]
    // bl ov83_02244A98
    // mov r0, #0x70
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02245550 ; =0x00010200
    // add r1, r4, #0
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // mov r3, #2
    // bl ov83_02245D08
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r7, #0
    // mov r3, #4
    // str r1, [sp]
    // bl ov83_02244A98
    // mov r0, #0xf0
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02245550 ; =0x00010200
    // add r1, r4, #0
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // mov r3, #3
    // bl ov83_02245D08
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0224554C: .word 0x000005BA
    // _02245550: .word 0x00010200
    // TODO: decompile
}



void ov83_02245554(void) {
    ov83_02245068(r1);
    // str r1, [sp]
    ov83_02244A98(r5, 0, r0, 4);
    ov83_022448AC(r5, 0x19, 1);
    *((u8*)(r5 + 0xa)) = r0;
    ov83_02244A74(r5);
    *((u8*)(r5 + 0xe)) = r4;
}



void ov83_02245584(void) {
    // add r1, sp, #4
    // str r1, [sp]
    // add r1, sp, #8
    // add r3, sp, #4
    // add r1, #2
    // add r2, sp, #8
    // add r3, #2
    ov83_02244DF4();
    ov80_02237D8C(*((u8*)(r5 + 9)));
    // str r0, [sp]
    // add r3, sp, #4
    ov83_02244AD8(r5, r4, (((*((u16*)(r3 + 6)) + 4) << 0x10) >> 0x10), (((*((u16*)(r3 + 4)) + 1) << 0x10) >> 0x10));
    sub_0203769C();
    // add r2, sp, #4
    // str r0, [sp]
    ov83_02244AD8(r5, r4, *((u16*)(r2 + 6)), (((*((u16*)(r2 + 4)) + 1) << 0x10) >> 0x10));
    // str r0, [sp]
    // add r3, sp, #4
    // ldrh r3, [r3]
    ov83_02244B40(r5, r4, *((u16*)(r3 + 2)), (((r3 + 1) << 0x10) >> 0x10));
    // str r0, [sp]
    ov83_02244B40(r5, r4, *((u16*)(r2 + 6)), (((*((u16*)(r2 + 4)) + 1) << 0x10) >> 0x10));
    // str r0, [sp]
    // add r3, sp, #4
    // ldrh r3, [r3]
    ov83_02244AD8(r5, r4, *((u16*)(r3 + 2)), (((r3 + 1) << 0x10) >> 0x10));
    ScheduleWindowCopyToVram(r4);
}



void ov83_0224563C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, _02245740 ; =0x000005E3
    // add r7, r1, #0
    // add r6, r2, #0
    // bl PlaySE
    // ldrb r0, [r4, #0x15]
    // add r1, r7, #0
    // str r0, [sp]
    // bl ov83_0224776C
    // str r0, [sp, #4]
    // cmp r6, #4
    // bhi _02245686
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02245668: ; jump table
    // mov r5, #1
    // b _02245686
    // ldrb r0, [r4, #0x12]
    // bl ov83_02245068
    // add r5, r0, #0
    // b _02245686
    // mov r5, #2
    // b _02245686
    // mov r5, #5
    // bl sub_0203769C
    // cmp r0, #0
    // bne _022456BA
    // ldr r0, [sp]
    // cmp r7, r0
    // bhs _022456A8
    // add r0, r4, #0
    // mov r1, #5
    // bl ov83_02244ABC
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, #4]
    // add r2, r5, #0
    // bl ov80_02237FA4
    // b _022456E4
    // ldr r0, [r4, #0x24]
    // mov r1, #5
    // bl ov83_022477C4
    // ldr r0, _02245744 ; =0x000005BA
    // ldrh r1, [r4, r0]
    // sub r1, r1, r5
    // strh r1, [r4, r0]
    // b _022456E4
    // ldr r0, [sp]
    // cmp r7, r0
    // bhs _022456D2
    // ldr r0, [r4, #0x24]
    // mov r1, #5
    // bl ov83_022477C4
    // ldr r0, _02245744 ; =0x000005BA
    // ldrh r1, [r4, r0]
    // sub r1, r1, r5
    // strh r1, [r4, r0]
    // b _022456E4
    // add r0, r4, #0
    // mov r1, #5
    // bl ov83_02244ABC
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, #4]
    // add r2, r5, #0
    // bl ov80_02237FA4
    // add r1, r4, #0
    // add r0, r4, #0
    // add r1, #0x50
    // bl ov83_022453DC
    // add r0, r4, #0
    // bl ov83_02245390
    // cmp r6, #4
    // bhi _0224573C
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02245704: ; jump table
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // bl ov83_02245824
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r2, [r4, #0x12]
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // bl ov83_02245838
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // bl ov83_02245288
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // bl ov83_02245318
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02245740: .word 0x000005E3
    // _02245744: .word 0x000005BA
    // TODO: decompile
}



void ov83_02245748(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0x14]
    // add r4, r1, #0
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _02245810 ; =0x0000055C
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // add r6, r0, #0
    // mov r0, #0xae
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r5, #0
    // add r0, #0xc0
    // bl ov83_02247944
    // add r0, r6, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_02244AB0
    // add r0, r5, #0
    // mov r1, #0x14
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r5, #0xa]
    // ldrb r0, [r5, #0x14]
    // add r1, r4, #0
    // bl ov83_02247768
    // ldr r1, _02245814 ; =0x0000054C
    // mov r2, #1
    // ldr r1, [r5, r1]
    // strb r2, [r1, r0]
    // ldrb r0, [r5, #0x14]
    // add r1, r4, #0
    // bl ov83_02247768
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _02245818 ; =0x000004F4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ov83_0224755C
    // ldrb r0, [r5, #0x14]
    // add r1, r4, #0
    // bl ov83_02247768
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _0224581C ; =0x000004E4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ov83_0224755C
    // add r1, r5, #0
    // add r0, r5, #0
    // add r1, #0x70
    // bl ov83_022449D4
    // ldrb r0, [r5, #0xd]
    // cmp r0, r4
    // bne _022457F0
    // add r0, r5, #0
    // bl ov83_02245D48
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_02246114
    // add r0, r5, #0
    // bl ov83_02246988
    // ldrb r0, [r5, #0x14]
    // add r1, r4, #0
    // bl ov83_02247768
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x51
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ov83_0224755C
    // ldr r0, _02245820 ; =0x00000623
    // bl PlaySE
    // pop {r4, r5, r6, pc}
    // _02245810: .word 0x0000055C
    // _02245814: .word 0x0000054C
    // _02245818: .word 0x000004F4
    // _0224581C: .word 0x000004E4
    // _02245820: .word 0x00000623
    // TODO: decompile
}



void ov83_02245824(void) {
}



void ov83_02245838(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0xae
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r6, r1, #0
    // add r7, r2, #0
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r5, #0
    // add r0, #0xc0
    // bl ov83_02247944
    // ldrb r0, [r5, #0x14]
    // add r1, r6, #0
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _02245994 ; =0x0000055C
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // add r4, r0, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_02244AB0
    // cmp r7, #1
    // bne _0224588E
    // add r0, r5, #0
    // mov r1, #0x1f
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r5, #0xa]
    // ldr r0, _02245998 ; =0x00000632
    // bl PlaySE
    // b _022458A0
    // add r0, r5, #0
    // mov r1, #0x20
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r5, #0xa]
    // ldr r0, _0224599C ; =0x00000633
    // bl PlaySE
    // ldrb r0, [r5, #0x14]
    // add r1, r6, #0
    // bl ov83_02247768
    // mov r1, #0x55
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // ldrb r0, [r5, #0x14]
    // bne _022458C6
    // add r1, r6, #0
    // bl ov83_02247768
    // mov r1, #0x55
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // strb r7, [r1, r0]
    // b _022458D6
    // add r1, r6, #0
    // bl ov83_02247768
    // mov r1, #0x55
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0
    // strb r2, [r1, r0]
    // ldrb r0, [r5, #0x14]
    // add r1, r6, #0
    // bl ov83_02247768
    // mov r1, #0x55
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _0224590E
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x32
    // bl GetMonExpBySpeciesAndLevel
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #8
    // add r2, sp, #0
    // bl SetMonData
    // add r0, r4, #0
    // bl CalcMonLevelAndStats
    // b _02245968
    // ldrb r0, [r5, #0x14]
    // add r1, r6, #0
    // bl ov83_02247768
    // mov r1, #0x55
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // ldrb r0, [r1, r0]
    // cmp r0, #1
    // bne _02245946
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x37
    // bl GetMonExpBySpeciesAndLevel
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #8
    // add r2, sp, #0
    // bl SetMonData
    // add r0, r4, #0
    // bl CalcMonLevelAndStats
    // b _02245968
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x2d
    // bl GetMonExpBySpeciesAndLevel
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #8
    // add r2, sp, #0
    // bl SetMonData
    // add r0, r4, #0
    // bl CalcMonLevelAndStats
    // add r1, r5, #0
    // add r0, r5, #0
    // add r1, #0x80
    // bl ov83_022448E4
    // add r1, r5, #0
    // add r0, r5, #0
    // add r1, #0x70
    // bl ov83_022449D4
    // ldrb r0, [r5, #0xd]
    // cmp r0, r6
    // bne _02245990
    // add r0, r5, #0
    // bl ov83_02245D48
    // add r0, r5, #0
    // mov r1, #0
    // bl ov83_02246114
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02245994: .word 0x0000055C
    // _02245998: .word 0x00000632
    // _0224599C: .word 0x00000633
    // TODO: decompile
}



void ov83_022459A0(void) {
}



void ov83_022459AC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r0, #0
    // ldrb r0, [r6, #9]
    // mov r1, #1
    // bl ov80_02237B24
    // mov r4, #0
    // str r0, [sp]
    // cmp r0, #0
    // ble _02245A34
    // add r5, r6, #0
    // ldr r0, _02245A38 ; =0x0000055C
    // add r1, r4, #0
    // ldr r0, [r6, r0]
    // bl Party_GetMonByIndex
    // str r0, [sp, #4]
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // add r7, r0, #0
    // ldr r0, [sp, #4]
    // mov r1, #0xa4
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // lsl r0, r7, #0x10
    // lsl r1, r1, #0x10
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x10
    // bl ov80_0222A43C
    // add r1, r0, #0
    // ldr r0, _02245A3C ; =0x000004E4
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _02245A2A
    // bl ov83_02247600
    // ldrb r0, [r6, #0x14]
    // ldrb r1, [r6, #0xd]
    // bl ov83_02247768
    // cmp r4, r0
    // bne _02245A14
    // ldrb r1, [r6, #0xd]
    // ldrb r0, [r6, #0x15]
    // cmp r1, r0
    // blo _02245A20
    // ldr r0, _02245A3C ; =0x000004E4
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl ov83_0224760C
    // b _02245A2A
    // ldr r0, _02245A3C ; =0x000004E4
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl ov83_0224760C
    // ldr r0, [sp]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, r0
    // blt _022459C4
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02245A38: .word 0x0000055C
    // _02245A3C: .word 0x000004E4
    // TODO: decompile
}



void ov83_02245A40(void) {
    sub_0205C1F0(*((u8*)(r0 + 9)));
    sub_0205C1F0(*((u8*)(r5 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r5 + 4)), r7, r0);
    ov83_022453C0(r5);
    ov83_022448AC(r5, r6, 1);
    *((u8*)(r5 + 0xa)) = r0;
    *((u8*)(r5 + 8)) = 0x10;
    ov80_02237D8C(*((u8*)(r5 + 9)));
    // add r0, #0xc0
    ov83_02245094(r5);
    ov80_02237FA4(*((u32*)(r5 + 4)), *((u8*)(r5 + 9)), r4);
    // add r1, #0x50
    ov83_022453DC(r5, r5);
    ov83_02245288(r5, *((u8*)(r5 + 0xd)));
    ov83_02245318(r5, *((u8*)(r5 + 0xd)));
    *((u8*)(r5 + 8)) = 0xd;
    *((u8*)(r5 + 0x10)) = 1;
}



void ov83_02245ACC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldrb r0, [r5, #9]
    // add r4, r1, #0
    // mov r1, #0
    // add r7, r2, #0
    // bl ov80_02237B24
    // cmp r7, #5
    // bne _02245AE6
    // mov r6, #2
    // b _02245AEA
    // bl GF_AssertFail
    // ldrb r7, [r5, #0x15]
    // add r1, r4, #0
    // add r0, r7, #0
    // bl ov83_0224776C
    // bl sub_0203769C
    // cmp r0, #0
    // bne _02245B9A
    // cmp r4, r7
    // bhs _02245B7A
    // add r0, r5, #0
    // mov r1, #5
    // bl ov83_02244ABC
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // add r2, r6, #0
    // bl ov83_0224777C
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, #4]
    // mov r2, #0x32
    // bl ov80_02237FA4
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // add r2, r6, #0
    // bl ov83_0224777C
    // add r4, r0, #0
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Save_Frontier_GetStatic
    // add r7, r0, #0
    // ldrb r0, [r5, #9]
    // add r1, r6, #0
    // bl sub_0205C174
    // str r0, [sp]
    // ldrb r0, [r5, #9]
    // add r1, r6, #0
    // bl sub_0205C174
    // bl sub_0205C268
    // add r3, r4, #1
    // lsl r3, r3, #0x10
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r0, r7, #0
    // lsr r3, r3, #0x10
    // bl sub_02031108
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #1
    // bne _02245C36
    // ldrb r1, [r5, #0xf]
    // mov r0, #0xf8
    // bic r1, r0
    // mov r0, #0x10
    // orr r0, r1
    // strb r0, [r5, #0xf]
    // b _02245C36
    // ldr r0, [r5, #0x24]
    // mov r1, #5
    // bl ov83_022477C4
    // ldr r1, _02245C78 ; =0x000005B7
    // add r2, r1, #3
    // add r0, r5, r1
    // ldrh r2, [r5, r2]
    // ldrb r4, [r0, r6]
    // add r1, r1, #3
    // sub r2, #0x32
    // strh r2, [r5, r1]
    // ldrb r1, [r0, r6]
    // add r1, r1, #1
    // strb r1, [r0, r6]
    // b _02245C36
    // cmp r4, r7
    // bhs _02245BBE
    // ldr r0, [r5, #0x24]
    // mov r1, #5
    // bl ov83_022477C4
    // ldr r1, _02245C78 ; =0x000005B7
    // add r2, r1, #3
    // add r0, r5, r1
    // ldrh r2, [r5, r2]
    // ldrb r4, [r0, r6]
    // add r1, r1, #3
    // sub r2, #0x32
    // strh r2, [r5, r1]
    // ldrb r1, [r0, r6]
    // add r1, r1, #1
    // strb r1, [r0, r6]
    // b _02245C36
    // add r0, r5, #0
    // mov r1, #5
    // bl ov83_02244ABC
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // add r2, r6, #0
    // bl ov83_0224777C
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, #4]
    // mov r2, #0x32
    // bl ov80_02237FA4
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // add r2, r6, #0
    // bl ov83_0224777C
    // add r4, r0, #0
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Save_Frontier_GetStatic
    // add r7, r0, #0
    // ldrb r0, [r5, #9]
    // add r1, r6, #0
    // bl sub_0205C174
    // str r0, [sp, #4]
    // ldrb r0, [r5, #9]
    // add r1, r6, #0
    // bl sub_0205C174
    // bl sub_0205C268
    // add r3, r4, #1
    // lsl r3, r3, #0x10
    // add r2, r0, #0
    // ldr r1, [sp, #4]
    // add r0, r7, #0
    // lsr r3, r3, #0x10
    // bl sub_02031108
    // ldrb r0, [r5, #9]
    // bl ov80_02237D8C
    // cmp r0, #1
    // bne _02245C36
    // ldrb r1, [r5, #0xf]
    // mov r0, #0xf8
    // bic r1, r0
    // mov r0, #0x10
    // orr r0, r1
    // strb r0, [r5, #0xf]
    // add r0, r5, #0
    // bl ov83_02245390
    // add r1, r5, #0
    // add r0, r5, #0
    // add r1, #0x50
    // bl ov83_022453DC
    // mov r0, #0xae
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r5, #0
    // add r0, #0xc0
    // bl ov83_02247944
    // mov r1, #6
    // add r3, r6, #0
    // mul r3, r1
    // ldr r1, _02245C7C ; =ov83_02248054
    // lsl r2, r4, #1
    // add r1, r1, r3
    // ldrh r1, [r2, r1]
    // add r0, r5, #0
    // mov r2, #1
    // bl ov83_022448AC
    // strb r0, [r5, #0xa]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02245C78: .word 0x000005B7
    // _02245C7C: .word ov83_02248054
    // TODO: decompile
}



void ov83_02245C80(void) {
    ov80_02237B58(*((u8*)(r0 + 9)), 1);
    ov83_02245CA8(r6, ((0 << 0x18) >> 0x18));
}



void ov83_02245CA8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02245CE0 ; =0x00000554
    // add r4, r1, #0
    // ldr r1, [r5, r0]
    // ldrb r1, [r1, r4]
    // cmp r1, #1
    // bne _02245CC6
    // lsl r1, r4, #3
    // add r1, r5, r1
    // sub r0, #0x34
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ov83_0224755C
    // ldr r0, _02245CE4 ; =0x00000558
    // ldr r1, [r5, r0]
    // ldrb r1, [r1, r4]
    // cmp r1, #1
    // bne _02245CDE
    // lsl r1, r4, #3
    // add r1, r5, r1
    // sub r0, #0x34
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ov83_0224755C
    // pop {r3, r4, r5, pc}
    // _02245CE0: .word 0x00000554
    // _02245CE4: .word 0x00000558
    // TODO: decompile
}



void ov83_02245CE8(void) {
}



void ov83_02245D08(void) {
    NewString_ReadMsgData(r2, r3);
    StringExpandPlaceholders(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), r0);
    // ldr r0, [sp, #0x28]
    // ldr r2, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // ldr r3, [sp, #0x24]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    ov83_02247998(r4, *((u32*)(r5 + 0x28)));
    String_Delete(r6);
}



void ov83_02245D48(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldrb r0, [r5, #0x14]
    // ldrb r1, [r5, #0xd]
    // bl ov83_02247768
    // add r1, r0, #0
    // ldr r0, _02245EDC ; =0x0000055C
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // add r6, r0, #0
    // bl AcquireMonLock
    // str r0, [sp, #4]
    // ldr r0, _02245EE0 ; =0x000005BC
    // str r6, [r5, r0]
    // add r0, r6, #0
    // bl Mon_GetBoxMon
    // mov r1, #0x17
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _02245EE4 ; =0x000005C4
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa1
    // bl GetMonData
    // ldr r1, _02245EE8 ; =0x000005C7
    // mov r2, #0
    // strb r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa
    // bl GetMonData
    // ldr r1, _02245EEC ; =0x000005C8
    // strb r0, [r5, r1]
    // add r0, r6, #0
    // bl GetMonNature
    // ldr r1, _02245EF0 ; =0x000005C9
    // mov r2, #0
    // strb r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #6
    // bl GetMonData
    // ldr r1, _02245EF4 ; =0x000005CA
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa3
    // bl GetMonData
    // mov r1, #0x5d
    // lsl r1, r1, #4
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa4
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _02245EF8 ; =0x000005D2
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa5
    // bl GetMonData
    // ldr r1, _02245EFC ; =0x000005D4
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa8
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _02245F00 ; =0x000005D6
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa6
    // bl GetMonData
    // ldr r1, _02245F04 ; =0x000005D8
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa9
    // bl GetMonData
    // ldr r1, _02245F08 ; =0x000005DA
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xa7
    // bl GetMonData
    // ldr r1, _02245F0C ; =0x000005DC
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0x70
    // bl GetMonData
    // ldr r1, _02245F10 ; =0x000005DE
    // strb r0, [r5, r1]
    // mov r1, #0
    // add r0, r6, #0
    // add r2, r1, #0
    // bl GetMonData
    // ldr r1, _02245F14 ; =0x000005CC
    // mov r2, #0
    // str r0, [r5, r1]
    // add r0, r6, #0
    // mov r1, #0xb0
    // bl GetMonData
    // cmp r0, #1
    // ldr r1, _02245F18 ; =0x000005C6
    // bne _02245E54
    // ldrb r2, [r5, r1]
    // mov r0, #0x80
    // bic r2, r0
    // strb r2, [r5, r1]
    // b _02245E5C
    // ldrb r2, [r5, r1]
    // mov r0, #0x80
    // orr r0, r2
    // strb r0, [r5, r1]
    // add r0, r6, #0
    // bl GetMonGender
    // ldr r3, _02245F18 ; =0x000005C6
    // mov r2, #0x7f
    // ldrb r1, [r5, r3]
    // mov r4, #0
    // bic r1, r2
    // mov r2, #0x7f
    // and r0, r2
    // orr r0, r1
    // strb r0, [r5, r3]
    // lsl r0, r4, #1
    // add r0, r5, r0
    // add r1, r4, #0
    // str r0, [sp]
    // add r0, r6, #0
    // add r1, #0x36
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x5e
    // ldr r2, [sp]
    // lsl r1, r1, #4
    // strh r0, [r2, r1]
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x3a
    // mov r2, #0
    // add r7, r5, r4
    // bl GetMonData
    // ldr r1, _02245F1C ; =0x000005E8
    // mov r2, #0
    // strb r0, [r7, r1]
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x3e
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // mov r0, #0x5e
    // lsl r1, r1, #0x18
    // ldr r2, [sp]
    // lsl r0, r0, #4
    // ldrh r0, [r2, r0]
    // lsr r1, r1, #0x18
    // bl GetMoveMaxPP
    // ldr r1, _02245F20 ; =0x000005EC
    // strb r0, [r7, r1]
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #4
    // blo _02245E74
    // ldr r1, [sp, #4]
    // add r0, r6, #0
    // bl ReleaseMonLock
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02245EDC: .word 0x0000055C
    // _02245EE0: .word 0x000005BC
    // _02245EE4: .word 0x000005C4
    // _02245EE8: .word 0x000005C7
    // _02245EEC: .word 0x000005C8
    // _02245EF0: .word 0x000005C9
    // _02245EF4: .word 0x000005CA
    // _02245EF8: .word 0x000005D2
    // _02245EFC: .word 0x000005D4
    // _02245F00: .word 0x000005D6
    // _02245F04: .word 0x000005D8
    // _02245F08: .word 0x000005DA
    // _02245F0C: .word 0x000005DC
    // _02245F10: .word 0x000005DE
    // _02245F14: .word 0x000005CC
    // _02245F18: .word 0x000005C6
    // _02245F1C: .word 0x000005E8
    // _02245F20: .word 0x000005EC
    // TODO: decompile
}



void ov83_02245F24(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x15
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x17
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x19
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x1d
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x1f
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x21
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x23
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x25
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02246110 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x13
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x42
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02246110 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x15
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x34
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02246110 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x17
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x32
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02246110 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x19
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x30
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02246110 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x43
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02246110 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x1d
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x36
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02246110 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x1f
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x3a
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02246110 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x21
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x38
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02246110 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x23
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x3c
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02246110 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x25
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x20]
    // add r0, r4, r0
    // mov r2, #0x3e
    // bl ov83_022479E4
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x15
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x17
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x19
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x1d
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x1f
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x21
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x23
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x25
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _02246110: .word 0x00010200
    // TODO: decompile
}



void ov83_02246114(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // mov r0, #0xaf
    // str r1, [sp, #0x14]
    // lsl r0, r0, #2
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // mov r2, #2
    // bl ov83_0224777C
    // add r6, r0, #0
    // ldrb r0, [r5, #0x14]
    // ldrb r1, [r5, #0xd]
    // bl ov83_02247768
    // add r4, r0, #0
    // mov r0, #0x11
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x12
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #5
    // lsl r0, r0, #6
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x16
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #6
    // lsl r0, r0, #6
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #7
    // lsl r0, r0, #6
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #2
    // lsl r0, r0, #8
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #9
    // lsl r0, r0, #6
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x26
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x27
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _02246538 ; =0x000005C6
    // ldrb r0, [r5, r0]
    // lsl r1, r0, #0x18
    // lsr r1, r1, #0x1f
    // bne _0224621E
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x19
    // bne _022461FE
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _0224653C ; =0x00050600
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r2, #0x40
    // bl ov83_022479E4
    // b _0224621E
    // cmp r0, #1
    // bne _0224621E
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xc1
    // str r3, [sp, #4]
    // lsl r0, r0, #0xa
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r2, #0x41
    // bl ov83_022479E4
    // mov r1, #0
    // ldr r2, _02246540 ; =0x000005C7
    // str r1, [sp]
    // ldrb r2, [r5, r2]
    // add r0, r5, #0
    // mov r3, #3
    // bl ov83_02244A98
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _02246544 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #5
    // lsl r1, r1, #6
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x48
    // bl ov83_02245D08
    // ldr r0, _02246548 ; =0x0000054C
    // ldr r1, [r5, r0]
    // ldrb r1, [r1, r4]
    // cmp r1, #0
    // beq _022462D8
    // add r0, #0x70
    // ldr r0, [r5, r0]
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, [r5, #0x24]
    // mov r1, #0
    // bl BufferBoxMonSpeciesName
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _02246544 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #0x11
    // lsl r1, r1, #4
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x45
    // bl ov83_02245D08
    // mov r1, #0
    // mov r2, #0x5d
    // str r1, [sp]
    // lsl r2, r2, #4
    // ldrh r2, [r5, r2]
    // add r0, r5, #0
    // mov r3, #3
    // bl ov83_02244A98
    // mov r0, #0
    // str r0, [sp]
    // ldr r2, _0224654C ; =0x000005D2
    // add r0, r5, #0
    // ldrh r2, [r5, r2]
    // mov r1, #1
    // mov r3, #3
    // bl ov83_02244A98
    // mov r0, #7
    // lsl r0, r0, #6
    // add r0, r5, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02246544 ; =0x00010200
    // mov r1, #7
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // lsl r1, r1, #6
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x4e
    // bl ov83_02245D08
    // b _0224631C
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02246544 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x11
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r2, #0x4b
    // bl ov83_022479E4
    // mov r0, #7
    // lsl r0, r0, #6
    // add r0, r5, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02246544 ; =0x00010200
    // mov r2, #0x4d
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #7
    // lsl r0, r0, #6
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // lsl r3, r3, #3
    // bl ov83_022479E4
    // ldr r2, _02246550 ; =0x00000554
    // ldr r0, [r5, r2]
    // ldrb r0, [r0, r4]
    // cmp r0, #0
    // bne _02246328
    // b _022464D2
    // add r2, #0x74
    // ldrb r2, [r5, r2]
    // ldr r0, [r5, #0x24]
    // mov r1, #0
    // bl BufferAbilityName
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _02246544 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #0x16
    // lsl r1, r1, #4
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x35
    // bl ov83_02245D08
    // ldr r2, _02246554 ; =0x000005C9
    // ldr r0, [r5, #0x24]
    // ldrb r2, [r5, r2]
    // mov r1, #0
    // bl BufferNatureName
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _02246544 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #6
    // lsl r1, r1, #6
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x33
    // bl ov83_02245D08
    // ldr r2, _02246558 ; =0x000005CA
    // ldr r0, [r5, #0x24]
    // ldrh r2, [r5, r2]
    // mov r1, #0
    // bl BufferItemName
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _02246544 ; =0x00010200
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #0x1a
    // lsl r1, r1, #4
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x31
    // bl ov83_02245D08
    // mov r1, #0
    // ldr r2, _0224655C ; =0x000005D4
    // str r1, [sp]
    // ldrh r2, [r5, r2]
    // add r0, r5, #0
    // mov r3, #3
    // bl ov83_02244A98
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02246544 ; =0x00010200
    // mov r1, #0x1e
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // lsl r1, r1, #4
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x37
    // bl ov83_02245D08
    // mov r1, #0
    // ldr r2, _02246560 ; =0x000005D6
    // str r1, [sp]
    // ldrh r2, [r5, r2]
    // add r0, r5, #0
    // mov r3, #3
    // bl ov83_02244A98
    // mov r0, #2
    // lsl r0, r0, #8
    // add r0, r5, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02246544 ; =0x00010200
    // mov r1, #1
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // lsl r1, r1, #9
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x3b
    // bl ov83_02245D08
    // mov r1, #0
    // ldr r2, _02246564 ; =0x000005D8
    // str r1, [sp]
    // ldrh r2, [r5, r2]
    // add r0, r5, #0
    // mov r3, #3
    // bl ov83_02244A98
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02246544 ; =0x00010200
    // mov r1, #0x22
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // lsl r1, r1, #4
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x39
    // bl ov83_02245D08
    // mov r1, #0
    // ldr r2, _02246568 ; =0x000005DA
    // str r1, [sp]
    // ldrh r2, [r5, r2]
    // add r0, r5, #0
    // mov r3, #3
    // bl ov83_02244A98
    // mov r0, #9
    // lsl r0, r0, #6
    // add r0, r5, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02246544 ; =0x00010200
    // mov r1, #9
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // lsl r1, r1, #6
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x3d
    // bl ov83_02245D08
    // mov r1, #0
    // ldr r2, _0224656C ; =0x000005DC
    // str r1, [sp]
    // ldrh r2, [r5, r2]
    // add r0, r5, #0
    // mov r3, #3
    // bl ov83_02244A98
    // mov r0, #0x26
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02246544 ; =0x00010200
    // mov r1, #0x26
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // lsl r1, r1, #4
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r1, r5, r1
    // mov r3, #0x3f
    // bl ov83_02245D08
    // b _0224662C
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02246544 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r2, #0x4b
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02246544 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r2, #0x4b
    // bl ov83_022479E4
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02246544 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r2, #0x4b
    // bl ov83_022479E4
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02246544 ; =0x00010200
    // b _02246570
    // nop
    // _02246538: .word 0x000005C6
    // _0224653C: .word 0x00050600
    // _02246540: .word 0x000005C7
    // _02246544: .word 0x00010200
    // _02246548: .word 0x0000054C
    // _0224654C: .word 0x000005D2
    // _02246550: .word 0x00000554
    // _02246554: .word 0x000005C9
    // _02246558: .word 0x000005CA
    // _0224655C: .word 0x000005D4
    // _02246560: .word 0x000005D6
    // _02246564: .word 0x000005D8
    // _02246568: .word 0x000005DA
    // _0224656C: .word 0x000005DC
    // mov r2, #0x4a
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // lsl r3, r3, #3
    // bl ov83_022479E4
    // mov r0, #2
    // lsl r0, r0, #8
    // add r0, r5, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0224690C ; =0x00010200
    // mov r2, #0x4a
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // lsl r0, r0, #9
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // lsl r3, r3, #3
    // bl ov83_022479E4
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0224690C ; =0x00010200
    // mov r2, #0x4a
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // lsl r3, r3, #3
    // bl ov83_022479E4
    // mov r0, #9
    // lsl r0, r0, #6
    // add r0, r5, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0224690C ; =0x00010200
    // mov r2, #0x4a
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #9
    // lsl r0, r0, #6
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // lsl r3, r3, #3
    // bl ov83_022479E4
    // mov r0, #0x26
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0224690C ; =0x00010200
    // mov r2, #0x4a
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #0x26
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // lsl r3, r3, #3
    // bl ov83_022479E4
    // cmp r6, #1
    // bne _0224664C
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _0224690C ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r2, #0x4c
    // bl ov83_022479E4
    // b _02246864
    // ldr r0, _02246910 ; =0x00000558
    // ldr r0, [r5, r0]
    // ldrb r0, [r0, r4]
    // cmp r0, #0
    // bne _02246722
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // mov r2, #0x4b
    // lsl r4, r0, #4
    // str r4, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _0224690C ; =0x00010200
    // mov r3, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // bl ov83_022479E4
    // ldr r0, [r5, #0x20]
    // mov r1, #0x44
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // mov r0, #0
    // add r1, r7, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x17
    // lsr r6, r0, #0x18
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0224690C ; =0x00010200
    // add r1, r7, #0
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // add r0, r5, r0
    // mov r2, #0x78
    // add r3, r4, #0
    // bl ov83_02247998
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [r5, #0x20]
    // mov r1, #0x49
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // mov r0, #0
    // add r1, r7, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0224690C ; =0x00010200
    // mov r2, #0x78
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // sub r2, r2, r6
    // sub r2, r2, r3
    // add r0, r5, r0
    // add r1, r7, #0
    // add r3, r4, #0
    // bl ov83_02247998
    // add r0, r7, #0
    // bl String_Delete
    // add r6, #0x78
    // str r4, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _0224690C ; =0x00010200
    // mov r2, #0x49
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // add r3, r6, #0
    // bl ov83_022479E4
    // ldr r0, [sp, #0x20]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x20]
    // cmp r0, #4
    // blo _0224665A
    // b _02246864
    // mov r4, #0
    // lsl r0, r4, #1
    // mov r2, #0x5e
    // add r7, r5, r0
    // lsl r2, r2, #4
    // ldrh r2, [r7, r2]
    // ldr r0, [r5, #0x24]
    // add r1, r4, #0
    // bl BufferMoveName
    // mov r0, #0
    // mov r1, #0x27
    // lsl r1, r1, #4
    // add r3, r4, #0
    // lsl r6, r4, #4
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _0224690C ; =0x00010200
    // add r1, r5, r1
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // add r3, #0x54
    // bl ov83_02245D08
    // mov r0, #0x5e
    // lsl r0, r0, #4
    // ldrh r0, [r7, r0]
    // cmp r0, #0
    // bne _02246784
    // str r6, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _0224690C ; =0x00010200
    // mov r2, #0x5a
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldr r1, [r5, #0x20]
    // add r0, r5, r0
    // mov r3, #0x78
    // bl ov83_022479E4
    // b _02246858
    // ldr r0, [r5, #0x20]
    // mov r1, #0x44
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // mov r0, #0
    // add r1, r7, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x17
    // lsr r6, r0, #0x18
    // lsl r0, r4, #4
    // str r0, [sp, #0x1c]
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0224690C ; =0x00010200
    // ldr r3, [sp, #0x1c]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // add r0, r5, r0
    // add r1, r7, #0
    // mov r2, #0x78
    // bl ov83_02247998
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r5, r4
    // str r0, [sp, #0x18]
    // mov r0, #0
    // str r0, [sp]
    // ldr r3, [sp, #0x18]
    // ldr r2, _02246914 ; =0x000005E8
    // add r0, r5, #0
    // ldrb r2, [r3, r2]
    // mov r1, #0
    // mov r3, #2
    // bl ov83_02244A98
    // ldr r0, [r5, #0x20]
    // mov r1, #0x59
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // ldr r0, [r5, #0x24]
    // ldr r1, [r5, #0x28]
    // add r2, r7, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // ldr r1, [r5, #0x28]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0224690C ; =0x00010200
    // mov r3, #0x78
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #0x27
    // sub r3, r3, r6
    // lsl r0, r0, #4
    // sub r2, r3, r2
    // ldr r1, [r5, #0x28]
    // ldr r3, [sp, #0x1c]
    // add r0, r5, r0
    // bl ov83_02247998
    // add r0, r7, #0
    // bl String_Delete
    // mov r0, #0
    // str r0, [sp]
    // ldr r3, [sp, #0x18]
    // ldr r2, _02246918 ; =0x000005EC
    // add r0, r5, #0
    // ldrb r2, [r3, r2]
    // mov r1, #0
    // mov r3, #2
    // bl ov83_02244A98
    // add r6, #0x78
    // mov r1, #0x27
    // lsl r1, r1, #4
    // ldr r0, [sp, #0x1c]
    // str r6, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, _0224690C ; =0x00010200
    // add r1, r5, r1
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r2, [r5, #0x20]
    // add r0, r5, #0
    // mov r3, #0x59
    // bl ov83_02245D08
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // bhs _02246864
    // b _02246724
    // ldr r0, [sp, #0x14]
    // cmp r0, #1
    // bne _02246884
    // mov r4, #0xc
    // add r5, #0x50
    // lsl r0, r4, #4
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #0x22
    // bls _0224686E
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0x11
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x12
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #5
    // lsl r0, r0, #6
    // add r0, r5, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x16
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #6
    // lsl r0, r0, #6
    // add r0, r5, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #7
    // lsl r0, r0, #6
    // add r0, r5, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #2
    // lsl r0, r0, #8
    // add r0, r5, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x22
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #9
    // lsl r0, r0, #6
    // add r0, r5, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x26
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x27
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0224690C: .word 0x00010200
    // _02246910: .word 0x00000558
    // _02246914: .word 0x000005E8
    // _02246918: .word 0x000005EC
    // TODO: decompile
}



void ov83_0224691C(void) {
}



void ov83_02246938(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // cmp r1, #1
    // bne _02246962
    // mov r0, #0x11
    // lsl r0, r0, #4
    // mov r4, #0xc
    // add r5, r6, r0
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #0x22
    // bls _02246948
    // ldr r0, _02246984 ; =0x00000544
    // mov r1, #1
    // ldr r0, [r6, r0]
    // bl ov83_0224755C
    // pop {r4, r5, r6, pc}
    // mov r0, #0x11
    // lsl r0, r0, #4
    // mov r5, #0xc
    // add r4, r6, r0
    // add r0, r4, #0
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r5, r5, #1
    // add r4, #0x10
    // cmp r5, #0x22
    // bls _0224696A
    // ldr r0, _02246984 ; =0x00000544
    // mov r1, #0
    // ldr r0, [r6, r0]
    // bl ov83_0224755C
    // pop {r4, r5, r6, pc}
    // _02246984: .word 0x00000544
    // TODO: decompile
}



void ov83_02246988(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0x14]
    // ldrb r1, [r4, #0xd]
    // bl ov83_02247768
    // ldr r3, _022469D4 ; =0x0000054C
    // ldr r1, [r4, r3]
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _022469B6
    // add r0, r3, #0
    // add r1, r3, #0
    // sub r0, #8
    // add r1, #0x74
    // add r3, #0x80
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r3, [r4, r3]
    // mov r2, #0
    // bl ov83_02247668
    // pop {r4, pc}
    // add r2, r3, #0
    // add r0, r3, #0
    // add r1, r3, #0
    // add r2, #0x78
    // sub r0, #8
    // add r1, #0x74
    // add r3, #0x80
    // ldrh r2, [r4, r2]
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r3, [r4, r3]
    // bl ov83_02247668
    // pop {r4, pc}
    // nop
    // _022469D4: .word 0x0000054C
    // TODO: decompile
}



void ov83_022469D8(void) {
}



void ov83_022469E4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r5, r0, #0
    // add r0, sp, #4
    // add r4, r1, #0
    // add r0, #2
    // add r1, sp, #4
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov83_02247988
    // ldr r0, _02246A90 ; =ov83_02248018
    // add r1, sp, #4
    // ldrh r2, [r0]
    // add r3, sp, #8
    // strh r2, [r1, #0x1c]
    // ldrh r2, [r0, #2]
    // strh r2, [r1, #0x1e]
    // ldrh r2, [r0, #4]
    // strh r2, [r1, #0x20]
    // ldrh r2, [r0, #6]
    // strh r2, [r1, #0x22]
    // ldrh r2, [r0, #8]
    // ldrh r0, [r0, #0xa]
    // strh r2, [r1, #0x24]
    // strh r0, [r1, #0x26]
    // ldrh r0, [r1, #2]
    // strh r0, [r1, #0x22]
    // ldrh r2, [r1]
    // add r0, r0, r2
    // sub r0, #0x1b
    // strh r0, [r1, #0x24]
    // strh r2, [r1, #0x26]
    // ldrh r0, [r1, #0x1c]
    // strh r0, [r1, #4]
    // ldrh r0, [r1, #0x1e]
    // strh r0, [r1, #6]
    // ldrh r0, [r1, #0x20]
    // strh r0, [r1, #8]
    // ldrh r0, [r1, #0x22]
    // strh r0, [r1, #0xa]
    // ldrh r0, [r1, #0x24]
    // strh r0, [r1, #0xc]
    // ldrh r0, [r1, #0x26]
    // strh r0, [r1, #0xe]
    // ldr r0, _02246A94 ; =0x000005FC
    // ldr r2, [r5, r0]
    // sub r0, #8
    // str r2, [sp, #0x14]
    // ldr r2, [r5, #0x4c]
    // str r2, [sp, #0x18]
    // strb r4, [r1, #0x18]
    // add r1, sp, #0x30
    // ldrb r1, [r1, #0x10]
    // add r2, r6, #0
    // str r1, [sp]
    // add r1, r3, #0
    // ldr r0, [r5, r0]
    // add r3, r7, #0
    // bl ov83_02247CCC
    // ldr r1, _02246A98 ; =0x000005F8
    // str r0, [r5, r1]
    // ldrb r1, [r5, #0xf]
    // mov r0, #4
    // orr r0, r1
    // strb r0, [r5, #0xf]
    // ldrb r0, [r5, #9]
    // mov r1, #1
    // bl ov80_02237B24
    // add r4, r0, #0
    // ldr r0, _02246A9C ; =0x000004E4
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #1
    // bl ov83_0224773C
    // ldr r0, _02246AA0 ; =0x000004F4
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #1
    // bl ov83_0224773C
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _02246A90: .word ov83_02248018
    // _02246A94: .word 0x000005FC
    // _02246A98: .word 0x000005F8
    // _02246A9C: .word 0x000004E4
    // _02246AA0: .word 0x000004F4
    // TODO: decompile
}



void ov83_02246AA4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #4
    // mov r1, #0x6b
    // mov r4, #0
    // bl ListMenuItems_New
    // ldr r1, _02246B5C ; =0x000005FC
    // mov r2, #2
    // str r0, [r5, r1]
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // bl ov83_0224777C
    // add r7, r0, #0
    // ldrb r0, [r5, #0x14]
    // ldrb r1, [r5, #0xd]
    // bl ov83_02247768
    // add r6, r0, #0
    // ldr r0, _02246B60 ; =0x0000054C
    // ldr r1, [r5, r0]
    // ldrb r1, [r1, r6]
    // cmp r1, #0
    // bne _02246AEE
    // add r0, #0xb0
    // ldr r0, [r5, r0]
    // ldr r1, [r5, #0x20]
    // mov r2, #8
    // add r3, r4, #0
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, _02246B5C ; =0x000005FC
    // ldr r1, [r5, #0x20]
    // ldr r0, [r5, r0]
    // mov r2, #9
    // mov r3, #1
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, _02246B64 ; =0x00000554
    // ldr r1, [r5, r0]
    // ldrb r1, [r1, r6]
    // cmp r1, #0
    // beq _02246B1A
    // add r0, r0, #4
    // ldr r0, [r5, r0]
    // ldrb r0, [r0, r6]
    // cmp r0, #0
    // beq _02246B1A
    // cmp r7, #2
    // beq _02246B2E
    // ldr r0, _02246B5C ; =0x000005FC
    // ldr r1, [r5, #0x20]
    // ldr r0, [r5, r0]
    // mov r2, #0xa
    // mov r3, #2
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, _02246B5C ; =0x000005FC
    // mov r2, #0xb
    // add r3, r2, #0
    // ldr r0, [r5, r0]
    // ldr r1, [r5, #0x20]
    // sub r3, #0xd
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r3, r0, #0x10
    // lsl r1, r3, #0x18
    // ldr r4, _02246B68 ; =ov83_02248010
    // mov r0, #0xd
    // str r0, [sp]
    // ldrb r3, [r4, r3]
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // mov r2, #0x11
    // bl ov83_022469E4
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02246B5C: .word 0x000005FC
    // _02246B60: .word 0x0000054C
    // _02246B64: .word 0x00000554
    // _02246B68: .word ov83_02248010
    // TODO: decompile
}



void ov83_02246B6C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #4
    // mov r1, #0x6b
    // mov r4, #0
    // bl ListMenuItems_New
    // ldr r1, _02246C1C ; =0x000005FC
    // mov r2, #2
    // str r0, [r5, r1]
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // bl ov83_0224777C
    // add r6, r0, #0
    // ldrb r0, [r5, #0x14]
    // ldrb r1, [r5, #0xd]
    // bl ov83_02247768
    // add r7, r0, #0
    // ldr r0, _02246C20 ; =0x00000554
    // ldr r1, [r5, r0]
    // ldrb r1, [r1, r7]
    // cmp r1, #0
    // bne _02246BB6
    // add r0, #0xa8
    // ldr r0, [r5, r0]
    // ldr r1, [r5, #0x20]
    // mov r2, #0x21
    // mov r3, #3
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r6, #1
    // beq _02246BD8
    // ldr r0, _02246C24 ; =0x00000558
    // ldr r1, [r5, r0]
    // ldrb r1, [r1, r7]
    // cmp r1, #0
    // bne _02246BD8
    // add r0, #0xa4
    // ldr r0, [r5, r0]
    // ldr r1, [r5, #0x20]
    // mov r2, #0x22
    // mov r3, #4
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r6, #2
    // beq _02246BF0
    // ldr r0, _02246C1C ; =0x000005FC
    // ldr r1, [r5, #0x20]
    // ldr r0, [r5, r0]
    // mov r2, #0x23
    // mov r3, #5
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, _02246C1C ; =0x000005FC
    // mov r2, #0x24
    // add r3, r2, #0
    // ldr r0, [r5, r0]
    // ldr r1, [r5, #0x20]
    // sub r3, #0x26
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r3, r0, #0x10
    // lsl r1, r3, #0x18
    // ldr r4, _02246C28 ; =ov83_02248010
    // mov r0, #0xd
    // str r0, [sp]
    // ldrb r3, [r4, r3]
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // mov r2, #0x11
    // bl ov83_022469E4
    // pop {r3, r4, r5, r6, r7, pc}
    // _02246C1C: .word 0x000005FC
    // _02246C20: .word 0x00000554
    // _02246C24: .word 0x00000558
    // _02246C28: .word ov83_02248010
    // TODO: decompile
}



void ov83_02246C2C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // mov r0, #3
    // mov r1, #0x6b
    // bl ListMenuItems_New
    // ldr r1, _02246C6C ; =0x000005FC
    // mov r4, #0
    // str r0, [r5, r1]
    // add r6, r1, #0
    // add r2, r4, #0
    // ldr r0, [r5, r6]
    // ldr r1, [r5, #0x20]
    // add r2, #0x16
    // add r3, r4, #0
    // bl ListMenuItems_AppendFromMsgData
    // add r4, r4, #1
    // cmp r4, #3
    // blo _02246C42
    // mov r0, #0xd
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #3
    // mov r2, #0x11
    // mov r3, #8
    // bl ov83_022469E4
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02246C6C: .word 0x000005FC
    // TODO: decompile
}



void ov83_02246C70(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #9]
    // mov r1, #1
    // bl ov80_02237B24
    // add r4, r0, #0
    // ldr r0, _02246CB0 ; =0x000004E4
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // bl ov83_0224773C
    // ldr r0, _02246CB4 ; =0x000004F4
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // bl ov83_0224773C
    // ldr r0, _02246CB8 ; =0x000005F8
    // ldr r0, [r5, r0]
    // bl ov83_02247CE8
    // ldr r0, _02246CBC ; =0x000005FC
    // ldr r0, [r5, r0]
    // bl ListMenuItems_Delete
    // ldrb r1, [r5, #0xf]
    // mov r0, #4
    // bic r1, r0
    // strb r1, [r5, #0xf]
    // pop {r3, r4, r5, pc}
    // _02246CB0: .word 0x000004E4
    // _02246CB4: .word 0x000004F4
    // _02246CB8: .word 0x000005F8
    // _02246CBC: .word 0x000005FC
    // TODO: decompile
}



void ov83_02246CC0(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // ldr r1, _02246D3C ; =0x000005F8
    // add r4, r0, #0
    // ldr r0, [r4, r1]
    // add r3, r1, #0
    // add r0, #0x24
    // add r3, #8
    // ldrb r0, [r0]
    // ldr r3, [r4, r3]
    // cmp r3, r0
    // beq _02246D36
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // lsl r0, r0, #3
    // add r0, r1, r0
    // ldr r1, [r0, #4]
    // cmp r1, #2
    // bhi _02246CF4
    // cmp r1, #0
    // beq _02246CFE
    // cmp r1, #1
    // beq _02246D02
    // cmp r1, #2
    // beq _02246D06
    // b _02246D0C
    // mov r0, #1
    // mvn r0, r0
    // cmp r1, r0
    // beq _02246D0A
    // b _02246D0C
    // mov r2, #0xc
    // b _02246D0C
    // mov r2, #0xd
    // b _02246D0C
    // mov r2, #0xe
    // b _02246D0C
    // mov r2, #0xf
    // mov r3, #1
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // add r1, r4, #0
    // str r3, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // add r1, #0xc0
    // str r3, [sp, #0x14]
    // bl ov83_022447E0
    // ldr r0, _02246D3C ; =0x000005F8
    // ldr r1, [r4, r0]
    // add r0, #8
    // add r1, #0x24
    // ldrb r1, [r1]
    // str r1, [r4, r0]
    // add sp, #0x18
    // pop {r4, pc}
    // nop
    // _02246D3C: .word 0x000005F8
    // TODO: decompile
}



void ov83_02246D40(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // mov r0, #6
    // lsl r0, r0, #8
    // ldr r1, [r5, r0]
    // sub r0, #8
    // ldr r0, [r5, r0]
    // add r0, #0x24
    // ldrb r0, [r0]
    // cmp r1, r0
    // beq _02246DEA
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // ldrb r1, [r5, #9]
    // ldr r0, [r5, r0]
    // mov r2, #2
    // bl ov83_0224777C
    // cmp r0, #1
    // beq _02246D6E
    // mov r1, #1
    // b _02246D70
    // mov r1, #0
    // ldr r2, _02246DF0 ; =0x000005FC
    // ldr r0, [r5, r2]
    // sub r2, r2, #4
    // ldr r2, [r5, r2]
    // add r2, #0x24
    // ldrb r2, [r2]
    // lsl r2, r2, #3
    // add r0, r0, r2
    // ldr r2, [r0, #4]
    // cmp r2, #5
    // bhi _02246D96
    // cmp r2, #3
    // blo _02246DBE
    // beq _02246DA0
    // cmp r2, #4
    // beq _02246DA8
    // cmp r2, #5
    // beq _02246DB0
    // b _02246DBE
    // mov r0, #1
    // mvn r0, r0
    // cmp r2, r0
    // beq _02246DB8
    // b _02246DBE
    // ldr r0, _02246DF4 ; =ov83_02248024
    // lsl r1, r1, #1
    // ldrh r4, [r0, r1]
    // b _02246DBE
    // ldr r0, _02246DF8 ; =ov83_02248028
    // lsl r1, r1, #1
    // ldrh r4, [r0, r1]
    // b _02246DBE
    // ldr r0, _02246DFC ; =ov83_0224802C
    // lsl r1, r1, #1
    // ldrh r4, [r0, r1]
    // b _02246DBE
    // ldr r0, _02246E00 ; =ov83_02248030
    // lsl r1, r1, #1
    // ldrh r4, [r0, r1]
    // mov r3, #1
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // add r1, r5, #0
    // str r3, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // add r1, #0xc0
    // add r2, r4, #0
    // str r3, [sp, #0x14]
    // bl ov83_022447E0
    // ldr r0, _02246E04 ; =0x000005F8
    // ldr r1, [r5, r0]
    // add r0, #8
    // add r1, #0x24
    // ldrb r1, [r1]
    // str r1, [r5, r0]
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // nop
    // _02246DF0: .word 0x000005FC
    // _02246DF4: .word ov83_02248024
    // _02246DF8: .word ov83_02248028
    // _02246DFC: .word ov83_0224802C
    // _02246E00: .word ov83_02248030
    // _02246E04: .word 0x000005F8
    // TODO: decompile
}



void ov83_02246E08(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // str r1, [sp, #0x14]
    // mov r0, #0x20
    // mov r1, #0x6b
    // str r2, [sp, #0x18]
    // bl GF_CreateVramTransferManager
    // bl ov83_022472DC
    // bl NNS_G2dInitOamManagerModule
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x80
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #0x20
    // str r3, [sp, #0xc]
    // mov r2, #0x6b
    // str r2, [sp, #0x10]
    // add r2, r0, #0
    // bl OamManager_Create
    // mov r0, #0x28
    // add r1, r5, #4
    // mov r2, #0x6b
    // bl G2dRenderer_Init
    // ldr r4, _02247148 ; =ov83_02248178
    // str r0, [r5]
    // mov r7, #0
    // add r6, r5, #0
    // ldrb r0, [r4]
    // add r1, r7, #0
    // mov r2, #0x6b
    // bl Create2DGfxResObjMan
    // mov r1, #0x4b
    // lsl r1, r1, #2
    // str r0, [r6, r1]
    // add r7, r7, #1
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r7, #4
    // blt _02246E4C
    // add r0, r5, #0
    // bl ov83_022473BC
    // mov r0, #0
    // str r0, [sp]
    // mov r3, #1
    // str r3, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // add r0, #0xc1
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0xf
    // bl AddCharResObjFromNarc
    // mov r1, #0x4f
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // add r0, #0xc5
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x37
    // bl AddPlttResObjFromNarc
    // mov r1, #5
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // add r0, #0xc9
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x11
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x51
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // add r0, #0xcd
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x10
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x52
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0x12
    // mov r1, #0x6b
    // bl NARC_New
    // add r6, r5, #0
    // add r7, r0, #0
    // mov r4, #4
    // add r6, #0x40
    // mov r0, #0
    // mov r1, #1
    // bl GetItemIndexMapping
    // add r2, r0, #0
    // str r4, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // add r0, #0xc1
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // mov r3, #0
    // bl AddCharResObjFromOpenNarc
    // mov r1, #0x4f
    // lsl r1, r1, #2
    // str r0, [r6, r1]
    // mov r0, #0
    // mov r1, #2
    // bl GetItemIndexMapping
    // add r2, r0, #0
    // str r4, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // add r0, #0xc5
    // ldr r0, [r5, r0]
    // mov r1, #0x12
    // mov r3, #0
    // bl AddPlttResObjFromNarc
    // mov r1, #5
    // lsl r1, r1, #6
    // str r0, [r6, r1]
    // add r4, r4, #1
    // add r6, #0x10
    // cmp r4, #9
    // ble _02246EFC
    // bl GetItemIconCell
    // add r2, r0, #0
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // add r0, #0xc9
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x61
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // bl GetItemIconAnim
    // add r2, r0, #0
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // add r0, #0xcd
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x62
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0
    // mov r1, #2
    // bl GetItemIndexMapping
    // add r2, r0, #0
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // add r0, #0xc5
    // ldr r0, [r5, r0]
    // mov r1, #0x12
    // mov r3, #0
    // bl AddPlttResObjFromNarc
    // mov r1, #0x17
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r7, #0
    // bl NARC_Delete
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // add r0, #0xc1
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x24
    // mov r3, #1
    // bl AddCharResObjFromNarc
    // mov r1, #0x5b
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // add r0, #0xc9
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x26
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x5d
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #3
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // add r0, #0xcd
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x25
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x5e
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov83_02247314
    // mov r0, #0x14
    // mov r1, #0x6b
    // bl NARC_New
    // add r7, r0, #0
    // bl sub_02074490
    // add r2, r0, #0
    // mov r0, #0xa
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #3
    // str r0, [sp, #8]
    // mov r0, #0x6b
    // str r0, [sp, #0xc]
    // add r0, #0xc5
    // ldr r0, [r5, r0]
    // mov r1, #0x14
    // mov r3, #0
    // bl AddPlttResObjFromNarc
    // mov r1, #0x1e
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // bl sub_02074498
    // add r2, r0, #0
    // mov r0, #5
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // add r0, #0xc9
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x79
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // bl sub_020744A4
    // add r2, r0, #0
    // mov r0, #5
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // add r0, #0xcd
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x7a
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r4, #0
    // add r6, r5, #0
    // cmp r4, #3
    // bne _022470CC
    // ldr r0, [sp, #0x18]
    // cmp r0, #0
    // bne _022470C2
    // ldr r0, [sp, #0x14]
    // mov r1, #0
    // bl Party_GetMonByIndex
    // b _022470D4
    // ldr r0, [sp, #0x14]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // b _022470D4
    // ldr r0, [sp, #0x14]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // bl Pokemon_GetIconNaix
    // add r2, r0, #0
    // add r0, r4, #0
    // add r0, #0xa
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // add r0, #0xc1
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // mov r3, #0
    // bl AddCharResObjFromOpenNarc
    // mov r1, #0x77
    // lsl r1, r1, #2
    // str r0, [r6, r1]
    // add r4, r4, #1
    // add r6, #0x10
    // cmp r4, #4
    // blt _022470AE
    // add r0, r7, #0
    // bl NARC_Delete
    // mov r7, #0x4f
    // mov r6, #0
    // add r4, r5, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // bl sub_0200ACF0
    // add r6, r6, #1
    // add r4, #0x10
    // cmp r6, #0xe
    // blt _02247110
    // mov r6, #5
    // mov r4, #0
    // lsl r6, r6, #6
    // ldr r0, [r5, r6]
    // bl sub_0200AF94
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #0xb
    // blt _02247124
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02247148: .word ov83_02248178
    // TODO: decompile
}



void ov83_0224714C(void) {
    // str r3, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x98]
    // str r5, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r6, [r4, r0]
    // str r6, [sp, #0x14]
    // ldr r6, [r4, r6]
    // str r6, [sp, #0x18]
    // add r6, #8
    // ldr r6, [r4, r6]
    // add r0, #0xc
    // str r6, [sp, #0x1c]
    // ldr r0, [r4, r0]
    // str r0, [sp, #0x20]
    // str r5, [sp, #0x24]
    // str r5, [sp, #0x28]
    // add r0, sp, #0x5c
    CreateSpriteResourcesHeader((0x4b << 2));
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x30]
    // str r1, [sp, #0x34]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    *((u16*)((1 << 0xc) + 0x20)) = r5;
    // ldr r0, [sp, #0x94]
    // str r0, [sp, #0x50]
    // add r0, sp, #0x80
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // add r0, sp, #0x80
    // ldr r1, [sp, #0x38]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    Sprite_CreateAffine((3 << 0x12), r5);
    Sprite_SetAnimActiveFlag(1);
    Sprite_SetAnimSpeed(r4, (1 << 0xc));
    // ldr r1, [sp, #0x90]
    Sprite_SetAnimCtrlSeq(r4);
}



void ov83_022471FC(void) {
    // add r0, r5, r0
    // ldr r0, [r0, r6]
    sub_0200AEB0((0 << 4));
    // add r0, r5, r0
    // ldr r0, [r0, r6]
    sub_0200B0A8((0 << 4));
    // add r0, r5, r0
    // ldr r0, [r0, r6]
    Destroy2DGfxResObjMan((0 << 2));
    SpriteList_Delete(*((u32*)r5));
    OamManager_Free();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
}



void ov83_02247264(void) {
    // ldr r0, [r5, r0]
    SpriteResourceCollection_Find((0x4b << 2));
    GetItemIndexMapping(r6, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xc1
    // ldr r0, [r5, r0]
    ReplaceCharResObjFromNarc(0x6b, r4, 0x12, r0);
    sub_0200AE8C(r4);
}



void ov83_022472A0(void) {
    // ldr r0, [r5, r0]
    SpriteResourceCollection_Find((0x13 << 4));
    GetItemIndexMapping(r6, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xc5
    // ldr r0, [r5, r0]
    ReplacePlttResObjFromNarc(0x6b, r4, 0x12, r0);
    sub_0200B084(r4);
}



void ov83_022472DC(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, _0224730C ; =ov83_0224817C
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // ldr r2, _02247310 ; =0x00100010
    // mov r1, #0x10
    // bl ObjCharTransfer_InitEx
    // mov r0, #0x20
    // mov r1, #0x6b
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // add sp, #0x10
    // pop {r4, pc}
    // _0224730C: .word ov83_0224817C
    // _02247310: .word 0x00100010
    // TODO: decompile
}



void ov83_02247314(void) {
    NARC_New(0x15, 0x6b);
    sub_0207CA9C();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc1
    // ldr r0, [r5, r0]
    AddCharResObjFromOpenNarc(0x6b, r4, r0, 0);
    // str r0, [r5, r1]
    sub_0207CAA0((0x53 << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xc5
    // ldr r0, [r5, r0]
    AddPlttResObjFromNarc(0x6b, 0x15, r0, 0);
    // str r0, [r5, r1]
    sub_0207CAA4((0x15 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc9
    // ldr r0, [r5, r0]
    AddCellOrAnimResObjFromOpenNarc(0x6b, r4, r0, 0);
    // str r0, [r5, r1]
    sub_0207CAA8((0x55 << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xcd
    // ldr r0, [r5, r0]
    AddCellOrAnimResObjFromOpenNarc(0x6b, r4, r0, 0);
    // str r0, [r5, r1]
    NARC_Delete(r4, (0x56 << 2));
}



void ov83_022473BC(void) {
    NARC_New(8, 0x6b);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc1
    // ldr r0, [r5, r0]
    AddCharResObjFromOpenNarc(0x6b, r0, 0x4c, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xc5
    // ldr r0, [r5, r0]
    AddPlttResObjFromOpenNarc(0x6b, r4, 0x4b, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc9
    // ldr r0, [r5, r0]
    AddCellOrAnimResObjFromOpenNarc(0x6b, r4, 0x4d, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xcd
    // ldr r0, [r5, r0]
    AddCellOrAnimResObjFromOpenNarc(0x6b, r4, 0x4e, 0);
    // str r0, [r5, r1]
    NARC_Delete(r4, (0x5a << 2));
}



void ov83_02247454(void) {
    // str r3, [sp, #0x10]
    Heap_Alloc(0x6b, 8);
    // strb r1, [r4]
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 0;
    *((u8*)(r0 + 4)) = 0;
    *((u8*)(r0 + 5)) = 0;
    *((u8*)(r0 + 6)) = 0;
    *((u8*)(r0 + 7)) = 0;
    // add r0, sp, #0x28
    // ldrsh r2, [r0, r2]
    // ldr r3, [sp, #0x10]
    // strh r2, [r4]
    // ldrsh r0, [r0, r2]
    *((u16*)(r0 + 2)) = r0;
    // ldr r0, [sp, #0x38]
    // str r0, [sp]
    // ldr r0, [sp, #0x44]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    ov83_0224714C(r5, r6, r7);
    *((u32*)(r4 + 4)) = r0;
    // add r1, sp, #0x28
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #0x14]
    // ldrsh r0, [r1, r0]
    // add r1, sp, #0x14
    // str r0, [sp, #0x18]
    Sprite_SetMatrix(*((u32*)(r4 + 4)));
}



void ov83_022474C4(void) {
    // str r3, [sp, #0x10]
    Heap_Alloc(0x6b, 8);
    // strb r1, [r4]
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 0;
    *((u8*)(r0 + 4)) = 0;
    *((u8*)(r0 + 5)) = 0;
    *((u8*)(r0 + 6)) = 0;
    *((u8*)(r0 + 7)) = 0;
    // add r0, sp, #0x28
    // ldrsh r2, [r0, r2]
    // ldr r3, [sp, #0x10]
    // strh r2, [r4]
    // ldrsh r0, [r0, r2]
    *((u16*)(r0 + 2)) = r0;
    // ldr r0, [sp, #0x38]
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov83_0224714C(r5, r6, r7);
    *((u32*)(r4 + 4)) = r0;
    // add r1, sp, #0x28
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #0x14]
    // ldrsh r1, [r1, r0]
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // add r1, sp, #0x14
    Sprite_SetMatrix(*((u32*)(r4 + 4)), (r1 << 0xc));
}



void ov83_0224753C(void) {
    GF_AssertFail();
    Sprite_Delete(*((u32*)(r4 + 4)));
    Heap_Free(r4);
}



void ov83_0224755C(void) {
}



void ov83_02247568(void) {
    Sprite_GetMatrixPtr(*((u32*)(r0 + 4)));
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    Sprite_SetMatrix(*((u32*)(r5 + 4)), r2, r0);
}



void ov83_0224759C(void) {
    Sprite_GetMatrixPtr(*((u32*)(r0 + 4)));
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    // add r0, r1, r0
    // str r0, [sp, #4]
    Sprite_SetMatrix(*((u32*)(r5 + 4)), r2, r0);
}



void ov83_022475D4(void) {
}



void ov83_022475EC(void) {
}



void ov83_02247600(void) {
}



void ov83_0224760C(void) {
}



void ov83_02247624(void) {
}



void ov83_02247630(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // mov r1, #0xb
    // bl ov83_022475D4
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov83_02247568
    // add r0, r5, #0
    // mov r1, #1
    // bl ov83_0224755C
    // ldr r0, _02247660 ; =0x000005E3
    // bl PlaySE
    // ldr r0, _02247664 ; =0x00000655
    // bl PlaySE
    // pop {r4, r5, r6, pc}
    // nop
    // _02247660: .word 0x000005E3
    // _02247664: .word 0x00000655
    // TODO: decompile
}



void ov83_02247668(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // add r7, r3, #0
    // add r6, r2, #0
    // ldr r3, _02247738 ; =ov83_0224818C
    // add r2, sp, #0x20
    // add r5, r0, #0
    // str r1, [sp, #0x14]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r1, #0x32
    // mov r0, #0x6b
    // lsl r1, r1, #6
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // cmp r6, #0
    // beq _022476C0
    // ldr r1, [sp, #0x14]
    // add r0, sp, #0x30
    // mov r2, #2
    // mov r3, #0
    // bl GetBoxmonSpriteCharAndPlttNarcIds
    // str r4, [sp]
    // str r7, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // str r6, [sp, #0x10]
    // add r1, sp, #0x1c
    // ldrh r0, [r1, #0x14]
    // ldrh r1, [r1, #0x16]
    // mov r2, #0x6b
    // add r3, sp, #0x20
    // bl sub_02014510
    // add r0, sp, #0x1c
    // ldrh r7, [r0, #0x14]
    // ldrh r6, [r0, #0x18]
    // b _022476EA
    // mov r0, #0x6b
    // str r0, [sp]
    // mov r0, #0xb8
    // mov r1, #0x27
    // mov r2, #1
    // add r3, sp, #0x1c
    // bl GfGfxLoader_GetCharData
    // add r6, r0, #0
    // ldr r0, [sp, #0x1c]
    // mov r2, #0x32
    // ldr r0, [r0, #0x14]
    // add r1, r4, #0
    // lsl r2, r2, #6
    // bl MIi_CpuCopy32
    // add r0, r6, #0
    // bl Heap_Free
    // mov r7, #0xb8
    // mov r6, #0x3d
    // ldr r0, [r5, #4]
    // bl Sprite_GetImageProxy
    // mov r1, #2
    // bl NNS_G2dGetImageLocation
    // mov r1, #0x32
    // str r0, [sp, #0x18]
    // add r0, r4, #0
    // lsl r1, r1, #6
    // bl DC_FlushRange
    // mov r2, #0x32
    // ldr r1, [sp, #0x18]
    // add r0, r4, #0
    // lsl r2, r2, #6
    // bl GXS_LoadOBJ
    // ldr r0, [r5, #4]
    // bl Sprite_GetPaletteProxy
    // mov r1, #2
    // bl NNS_G2dGetImagePaletteLocation
    // add r3, r0, #0
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x6b
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r6, #0
    // mov r2, #5
    // bl GfGfxLoader_GXLoadPal
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // _02247738: .word ov83_0224818C
    // TODO: decompile
}



void ov83_0224773C(void) {
    Sprite_SetOamMode(*((u32*)(*((u32*)r0) + 4)), 0);
}



void ov83_02247768(void) {
    // add r0, r1, #0
    // bx lr
    // TODO: decompile
}



void ov83_0224776C(void) {
    // sub r0, r1, r0
}



void ov83_0224777C(void) {
    Save_Frontier_GetStatic();
    sub_0205C174(r5, r4);
    sub_0205C174(r5, r4);
    sub_0205C268();
    FrontierSave_GetStat(r6, r7, r0);
}



void ov83_022477B0(void) {
}



void ov83_022477C4(void) {
    sub_0203769C();
    // eor r0, r1
    sub_02034818(1);
    BufferPlayersName(r5, r4, r0);
}



void ov83_022477E4(void) {
}



void ov83_022477EC(void) {
    // lsl r1, r5
    // sub r0, #0x10
    // eor r0, r1
    // lsl r4, r5
    // and r0, r3
    // orr r0, r4
    // str r0, [r2]
}



void ov83_0224780C(void) {
    // lsr r1, r0
    // and r0, r6
    ToggleBgLayer(((0 << 0x18) >> 0x18), (((((*((u32*)r0) << 0x10) >> 0x10) - 1) << 0x18) >> 0x18));
    ov83_022477E4(r5);
}



void ov83_02247844(void) {
}



void ov83_02247858(void) {
}



void ov83_02247864(void) {
    // add r0, sp, #0
    // add r0, #2
    // add r1, sp, #0
    *((u32*)(r0 + 8)) = r1;
    ov83_02247988();
    // str r5, [sp, #4]
    // str r0, [sp, #8]
    // add r2, sp, #0
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    *((u8*)(r2 + 0x14)) = 0x19;
    *((u8*)(r2 + 0x15)) = 0xa;
    // bic r3, r1
    *((u8*)(r2 + 0x16)) = *((u8*)(r2 + 0x16));
    // bic r3, r1
    *((u8*)(r2 + 0x16)) = *((u8*)(r2 + 0x16));
    *((u8*)(r2 + 0x17)) = 0;
    // add r1, sp, #4
    YesNoPrompt_InitFromTemplate(*((u32*)r4), 0xf0, *((u8*)(r2 + 0x16)));
    *((u32*)(r4 + 4)) = 1;
}



void ov83_022478B4(void) {
    YesNoPrompt_Reset(*((u32*)r0));
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 8)), 0);
    *((u32*)(r4 + 4)) = 0;
}



void ov83_022478D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r0, [sp]
    // add r5, r1, #0
    // ldr r0, _02247914 ; =ov83_0224819C
    // lsl r1, r2, #3
    // ldr r0, [r0, r1]
    // mov r4, #0
    // str r0, [sp, #4]
    // ldr r0, _02247918 ; =ov83_0224819C + 4
    // ldr r7, [r0, r1]
    // cmp r7, #0
    // bls _02247910
    // ldr r2, [sp, #4]
    // lsl r6, r4, #4
    // lsl r3, r4, #3
    // ldr r0, [sp]
    // add r1, r5, r6
    // add r2, r2, r3
    // bl AddWindow
    // add r0, r5, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, r7
    // blo _022478EE
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02247914: .word ov83_0224819C
    // _02247918: .word ov83_0224819C + 4
    // TODO: decompile
}



void ov83_0224791C(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _02247940 ; =ov83_0224819C + 4
    // lsl r1, r1, #3
    // ldr r5, [r0, r1]
    // mov r4, #0
    // cmp r5, #0
    // bls _0224793E
    // lsl r0, r4, #4
    // add r0, r6, r0
    // bl RemoveWindow
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, r5
    // blo _0224792C
    // pop {r4, r5, r6, pc}
    // _02247940: .word ov83_0224819C + 4
    // TODO: decompile
}



void ov83_02247944(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r4, r0, #0
    // bl GetWindowBgId
    // add r1, r0, #0
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x6b
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // ldr r2, _02247984 ; =0x000003D9
    // mov r3, #0xa
    // bl LoadUserFrameGfx2
    // add r0, r4, #0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // ldr r2, _02247984 ; =0x000003D9
    // add r0, r4, #0
    // mov r1, #1
    // mov r3, #0xa
    // bl DrawFrameAndWindow2
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _02247984: .word 0x000003D9
    // TODO: decompile
}



void ov83_02247988(void) {
    // mov r2, #0xf0
    // strh r2, [r1]
    // ldr r1, _02247994 ; =0x000002E9
    // strh r1, [r0]
    // bx lr
    // nop
    // _02247994: .word 0x000002E9
    // TODO: decompile
}



void ov83_02247998(void) {
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x28]
    FontID_String_GetWidth(0);
    // sub r5, r5, r0
    // ldr r0, [sp, #0x28]
    FontID_String_GetWidth(0);
    // sub r5, r5, r0
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, r7, r5);
}



void ov83_022479E4(void) {
    NewString_ReadMsgData(r1, r2);
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
    ov83_02247998(r5, r0, r6);
    String_Delete(r4);
}



void ov83_02247A18(void) {
}



void ov83_02247A20(void) {
    // bx lr
    // TODO: decompile
}



void ov83_02247A24(void) {
    // push {lr}
    // sub sp, #0xc
    // add r3, r0, #0
    // cmp r2, #3
    // bne _02247A4A
    // mov r0, #1
    // str r0, [sp]
    // lsl r0, r1, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // ldr r0, _02247A68 ; =ov83_02248530
    // ldr r1, _02247A6C ; =ov83_022485A8
    // ldr r2, _02247A70 ; =ov83_02248500
    // bl GridInputHandler_Create
    // add sp, #0xc
    // pop {pc}
    // mov r0, #1
    // str r0, [sp]
    // lsl r0, r1, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // ldr r0, _02247A74 ; =ov83_02248558
    // ldr r1, _02247A78 ; =ov83_022485E8
    // ldr r2, _02247A70 ; =ov83_02248500
    // bl GridInputHandler_Create
    // add sp, #0xc
    // pop {pc}
    // nop
    // _02247A68: .word ov83_02248530
    // _02247A6C: .word ov83_022485A8
    // _02247A70: .word ov83_02248500
    // _02247A74: .word ov83_02248558
    // _02247A78: .word ov83_022485E8
    // TODO: decompile
}



void ov83_02247A7C(void) {
    // push {lr}
    // sub sp, #0xc
    // add r3, r0, #0
    // cmp r2, #3
    // bne _02247AA2
    // mov r0, #1
    // str r0, [sp]
    // lsl r0, r1, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // ldr r0, _02247AC0 ; =ov83_02248530
    // ldr r1, _02247AC4 ; =ov83_022485A8
    // ldr r2, _02247AC8 ; =ov83_02248510
    // bl GridInputHandler_Create
    // add sp, #0xc
    // pop {pc}
    // mov r0, #1
    // str r0, [sp]
    // lsl r0, r1, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // ldr r0, _02247ACC ; =ov83_02248558
    // ldr r1, _02247AD0 ; =ov83_022485E8
    // ldr r2, _02247AC8 ; =ov83_02248510
    // bl GridInputHandler_Create
    // add sp, #0xc
    // pop {pc}
    // nop
    // _02247AC0: .word ov83_02248530
    // _02247AC4: .word ov83_022485A8
    // _02247AC8: .word ov83_02248510
    // _02247ACC: .word ov83_02248558
    // _02247AD0: .word ov83_022485E8
    // TODO: decompile
}



void ov83_02247AD4(void) {
    // push {r3, lr}
    // bl GridInputHandler_HandleInput_NoHold
    // add r1, r0, #4
    // cmp r1, #3
    // bhi _02247AF6
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02247AEC: ; jump table
    // pop {r3, pc}
    // lsl r1, r0, #2
    // ldr r0, _02247B00 ; =ov83_02248544
    // ldr r0, [r0, r1]
    // pop {r3, pc}
    // nop
    // _02247B00: .word ov83_02248544
    // TODO: decompile
}



void ov83_02247B04(void) {
}



void ov83_02247B1C(void) {
    // ldr r3, _02247B2C ; =ov83_02248544
    // lsl r1, r1, #2
    // lsl r2, r2, #2
    // ldr r1, [r3, r1]
    // ldr r2, [r3, r2]
    // ldr r3, _02247B30 ; =ov83_02242AB4
    // bx r3
    // nop
    // _02247B2C: .word ov83_02248544
    // _02247B30: .word ov83_02242AB4
    // TODO: decompile
}



void ov83_02247B34(void) {
    // ldr r3, _02247B44 ; =ov83_02248544
    // lsl r1, r1, #2
    // lsl r2, r2, #2
    // ldr r1, [r3, r1]
    // ldr r2, [r3, r2]
    // ldr r3, _02247B48 ; =ov83_02242AB4
    // bx r3
    // nop
    // _02247B44: .word ov83_02248544
    // _02247B48: .word ov83_02242AB4
    // TODO: decompile
}



void ov83_02247B4C(void) {
    // ldr r3, _02247B5C ; =ov83_02248544
    // lsl r1, r1, #2
    // lsl r2, r2, #2
    // ldr r1, [r3, r1]
    // ldr r2, [r3, r2]
    // ldr r3, _02247B60 ; =ov83_022469D8
    // bx r3
    // nop
    // _02247B5C: .word ov83_02248544
    // _02247B60: .word ov83_022469D8
    // TODO: decompile
}



void ov83_02247B64(void) {
    // ldr r3, _02247B74 ; =ov83_02248544
    // lsl r1, r1, #2
    // lsl r2, r2, #2
    // ldr r1, [r3, r1]
    // ldr r2, [r3, r2]
    // ldr r3, _02247B78 ; =ov83_022469D8
    // bx r3
    // nop
    // _02247B74: .word ov83_02248544
    // _02247B78: .word ov83_022469D8
    // TODO: decompile
}



void ov83_02247B7C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x6b
    // str r0, [sp, #8]
    // ldr r0, _02247BB8 ; =ov83_022485C8
    // ldr r1, _02247BBC ; =ov83_02248610
    // ldr r2, _02247BC0 ; =ov83_02248520
    // add r3, r4, #0
    // bl GridInputHandler_Create
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #0x40
    // mov r2, #0x34
    // mov r3, #3
    // bl ov83_02242AC0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov83_02242AE0
    // add r0, r5, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _02247BB8: .word ov83_022485C8
    // _02247BBC: .word ov83_02248610
    // _02247BC0: .word ov83_02248520
    // TODO: decompile
}



void ov83_02247BC4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl GridInputHandler_HandleInput_NoHold
    // add r1, r0, #4
    // cmp r1, #3
    // bhi _02247C28
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02247BDE: ; jump table
    // pop {r4, pc}
    // ldr r0, _02247C4C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #0x20
    // tst r0, r1
    // beq _02247C08
    // add r0, r4, #0
    // bl GridInputHandler_GetNextInput
    // cmp r0, #0
    // beq _02247C04
    // cmp r0, #2
    // beq _02247C04
    // cmp r0, #4
    // bne _02247C08
    // mov r0, #6
    // pop {r4, pc}
    // ldr r0, _02247C4C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #0x10
    // tst r0, r1
    // beq _02247C30
    // add r0, r4, #0
    // bl GridInputHandler_GetNextInput
    // cmp r0, #1
    // beq _02247C24
    // cmp r0, #3
    // beq _02247C24
    // cmp r0, #5
    // bne _02247C30
    // mov r0, #7
    // pop {r4, pc}
    // lsl r1, r0, #2
    // ldr r0, _02247C50 ; =ov83_0224858C
    // ldr r0, [r0, r1]
    // pop {r4, pc}
    // ldr r0, _02247C54 ; =ov83_022484F4
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // cmp r0, #0
    // bne _02247C3E
    // mov r0, #6
    // pop {r4, pc}
    // cmp r0, #1
    // bne _02247C46
    // mov r0, #7
    // pop {r4, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, pc}
    // _02247C4C: .word gSystem
    // _02247C50: .word ov83_0224858C
    // _02247C54: .word ov83_022484F4
    // TODO: decompile
}



void ov83_02247C58(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // ldr r1, _02247C7C ; =ov83_02248610
    // lsl r3, r4, #3
    // ldr r2, _02247C80 ; =ov83_02248611
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r3, _02247C84 ; =ov83_02248570
    // lsl r6, r4, #2
    // ldr r3, [r3, r6]
    // add r5, r0, #0
    // bl ov83_02242AC0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov83_02242AE0
    // pop {r4, r5, r6, pc}
    // _02247C7C: .word ov83_02248610
    // _02247C80: .word ov83_02248611
    // _02247C84: .word ov83_02248570
    // TODO: decompile
}



void ov83_02247C88(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // ldr r1, _02247CAC ; =ov83_02248610
    // lsl r3, r4, #3
    // ldr r2, _02247CB0 ; =ov83_02248611
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r3, _02247CB4 ; =ov83_02248570
    // lsl r6, r4, #2
    // ldr r3, [r3, r6]
    // add r5, r0, #0
    // bl ov83_02242AC0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov83_02242AE0
    // pop {r4, r5, r6, pc}
    // _02247CAC: .word ov83_02248610
    // _02247CB0: .word ov83_02248611
    // _02247CB4: .word ov83_02248570
    // TODO: decompile
}



void ov83_02247CB8(void) {
}



void ov83_02247CC4(void) {
}



void ov83_02247CCC(void) {
}



void ov83_02247CE8(void) {
}



void ov83_02247CF0(void) {
}


