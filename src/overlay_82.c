/* Decompiled from asm/overlay_82.s */
#include "global.h"

void ov82_0223DD60(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // add r6, r1, #0
    // ldr r0, _0223DE1C ; =FS_OVERLAY_ID(OVY_80)
    // mov r1, #2
    // bl HandleLoadOverlay
    // bl ov82_0223E9B0
    // mov r2, #2
    // mov r0, #3
    // mov r1, #0x69
    // lsl r2, r2, #0x10
    // bl Heap_Create
    // mov r1, #0xa1
    // add r0, r4, #0
    // lsl r1, r1, #2
    // mov r2, #0x69
    // bl OverlayManager_CreateAndGetData
    // mov r2, #0xa1
    // mov r1, #0
    // lsl r2, r2, #2
    // add r5, r0, #0
    // bl memset
    // mov r0, #0x69
    // bl BgConfig_Alloc
    // str r0, [r5, #0x48]
    // add r0, r4, #0
    // str r4, [r5]
    // bl OverlayManager_GetArgs
    // add r4, r0, #0
    // add r0, r5, #0
    // ldr r1, [r4]
    // add r0, #0xa0
    // str r1, [r0]
    // ldrb r0, [r4, #4]
    // add r1, r4, #6
    // strb r0, [r5, #9]
    // mov r0, #0x21
    // lsl r0, r0, #4
    // str r1, [r5, r0]
    // add r0, r5, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // bl Save_PlayerData_GetOptionsAddr
    // add r1, r5, #0
    // add r1, #0x9c
    // str r0, [r1]
    // mov r1, #0x85
    // ldr r0, [r4, #0xc]
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r2, [r4, #8]
    // add r0, r1, #4
    // str r2, [r5, r0]
    // add r0, r1, #0
    // ldr r2, [r4, #0x14]
    // add r0, #8
    // str r2, [r5, r0]
    // ldrh r0, [r4, #0x18]
    // add r1, #0x68
    // add r0, r0, #1
    // strh r0, [r5, #0x1c]
    // ldrb r0, [r4, #5]
    // strb r0, [r5, #0xd]
    // mov r0, #0xff
    // strb r0, [r5, r1]
    // strb r0, [r5, #0x18]
    // mov r0, #0x75
    // strb r0, [r5, #0x1f]
    // add r0, r5, #0
    // bl ov82_0223E9E8
    // ldrb r0, [r5, #9]
    // bl ov80_0223792C
    // cmp r0, #1
    // bne _0223DE0E
    // add r0, r5, #0
    // bl sub_02096910
    // mov r0, #0
    // str r0, [r6]
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // _0223DE1C: .word FS_OVERLAY_ID(OVY_80)
    // TODO: decompile
}



void ov82_0223DE20(void) {
    OverlayManager_GetData();
    ov82_0223F834(*((u16*)(r0 + 0x10)));
    ov82_0223F2F8(r4, r5, 3);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223DE5E: ; jump table
    ov82_0223E2A4(r4);
    ov82_0223F2F8(r4, r5, 0);
    ov82_0223DFBC(r4);
    ov82_0223F2F8(r4, r5, 2);
    ov82_0223E2EC(r4);
    ov82_0223F2F8(r4, r5, 3);
    ov82_0223F2F8(r4, r5, 1);
    ov80_0223792C(*((u8*)(r4 + 9)));
    ov82_0223F2F8(r4, r5, 4);
    ov82_0223F2F8(r4, r5, 5);
    ov82_0223E5D4(r4);
    *((u8*)(r4 + 0x19)) = 0;
    ov82_0223F2F8(r4, r5, 2);
    ov80_0223792C(*((u8*)(r4 + 9)));
    ov82_0223F2F8(r4, r5, 4);
    ov82_0223F2F8(r4, r5, 5);
    ov82_0223E7E8(r4);
    ov82_0223F2F8(r4, r5, 5);
    ov82_0223E820(r4);
    ov82_0223E888(r4);
    ov82_0223F2F8(r4, r5, 4);
    // add r4, #0xa8
    SpriteList_RenderAndAnimateSprites(*((u32*)r4));
}



void ov82_0223DF74(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl OverlayManager_GetData
    // mov r1, #0x21
    // lsl r1, r1, #4
    // ldrb r2, [r0, #0xd]
    // ldr r1, [r0, r1]
    // strh r2, [r1]
    // bl ov82_0223E8C4
    // add r0, r4, #0
    // bl OverlayManager_FreeData
    // ldr r2, _0223DFB4 ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0x69
    // bl Heap_Destroy
    // ldr r0, _0223DFB8 ; =FS_OVERLAY_ID(OVY_80)
    // bl UnloadOverlayByID
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0223DFB4: .word 0x04000304
    // _0223DFB8: .word FS_OVERLAY_ID(OVY_80)
    // TODO: decompile
}



void ov82_0223DFBC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223DFD4: ; jump table
    ov80_0223792C(*((u8*)(r0 + 9)), (*((u16*)(*((u8*)(r0 + 8)) + 6)) << 0x10));
    sub_02037BEC();
    sub_02037AC0(0x70);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov80_0223792C(*((u8*)(r4 + 9)));
    sub_02037B38(0x70);
    sub_02037BEC();
    *((u16*)(r4 + 0x12)) = 1;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov82_0223E070((*((u8*)(r4 + 8)) + 1));
    ov82_0223E0B0(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u8*)(r4 + 8)) + 1));
}



void ov82_0223E070(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0x6c
    ov82_0223F040(r0, 1, 2);
    // add r1, #0x6c
    ov82_0223F134(r4, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r4, #0x5c
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    ov82_0223EFCC(r4, r4, 0, 0);
}



void ov82_0223E0B0(void) {
    // add r0, #0x7c
    GetWindowX();
    // str r0, [sp, #0x10]
    // add r0, #0x7c
    GetWindowY(r5);
    // add r0, #0x7c
    GetWindowWidth(r5);
    // add r0, #0x7c
    GetWindowHeight(r5);
    // add r0, #0x7c
    GetWindowBgId(r5);
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x7c
    // str r2, [sp, #0xc]
    ov82_0223F1AC(r5, r5, 0, 0);
    ov82_0223EECC(r5, 4);
    // str r6, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    ov82_0223E140(*((u32*)(r5 + 0x48)), r7);
    // ldr r1, [sp, #0x14]
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x48)));
}



void ov82_0223E140(void) {
    // str r1, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r5, [sp, #0x4c]
    // str r6, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // add r2, sp, #0x30
    // ldr r3, [sp, #0x18]
    // str r0, [sp, #0x10]
    FillBgTilemapRect(*((u16*)(((r5 << 0x18) >> 0x18) + 0x18)));
    // add r1, sp, #0x30
    // ldr r0, [sp, #0x18]
    // add r0, r0, r7
    // str r0, [sp, #0x20]
    // ldr r3, [sp, #0x20]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(((r5 << 0x18) >> 0x18), (((*((u16*)(r1 + 0x18)) + 2) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // add r0, sp, #0x30
    // str r0, [sp, #0x28]
    // add r0, r6, r0
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    FillBgTilemapRect(((r5 << 0x18) >> 0x18), (((r4 + 6) << 0x10) >> 0x10));
    // ldr r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x20]
    // add r2, #8
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(((r5 << 0x18) >> 0x18), ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(((r5 << 0x18) >> 0x18), (((r4 + 1) << 0x10) >> 0x10), ((((r7 - 2) + 1) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x24]
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(((r5 << 0x18) >> 0x18), (((r4 + 7) << 0x10) >> 0x10), ((r7 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    FillBgTilemapRect(((r5 << 0x18) >> 0x18), (((r4 + 3) << 0x10) >> 0x10));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(((r5 << 0x18) >> 0x18), (((r4 + 5) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
}



void ov82_0223E2A4(void) {
    OverlayManager_Run(*((u32*)(r0 + 4)));
    // add r0, #0xa4
    // str r1, [r4, r0]
    // add r0, #0xa4
    Heap_Free(*((u32*)r4), *((u8*)(*((u32*)r4) + 0x14)));
    Heap_Free(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 4)) = 0;
    ov82_0223E974(r4);
    *((u16*)(r4 + 0x10)) = 0;
}



void ov82_0223E2EC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #7
    // bhi _0223E33A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E304: ; jump table
    // mov r0, #0
    // strb r0, [r4, #0xb]
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0223E5B6
    // ldr r1, _0223E5BC ; =gSystem
    // ldr r1, [r1, #0x48]
    // bl ov82_0223F300
    // add r0, r4, #0
    // bl ov82_0223F53C
    // cmp r0, #0
    // bne _0223E33C
    // add r0, r4, #0
    // bl ov82_0223F488
    // cmp r0, #0
    // bne _0223E33C
    // b _0223E5B6
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // bne _0223E36E
    // ldr r0, _0223E5C0 ; =0x000005DD
    // bl PlaySE
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // mov r0, #1
    // strh r0, [r4, #0x10]
    // mov r0, #7
    // strb r0, [r4, #8]
    // b _0223E5B6
    // add r0, r4, #0
    // bl ov82_0223F6E4
    // cmp r0, #1
    // ldrb r0, [r4, #0xd]
    // bne _0223E38E
    // bl ov80_02237920
    // cmp r0, #9
    // beq _0223E3C2
    // ldr r0, _0223E5C4 ; =0x000005F3
    // bl PlaySE
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // bl ov82_0223F6C4
    // mov r1, #0x86
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // bl sub_02030BD0
    // cmp r0, #0xa
    // blo _0223E3AC
    // ldr r0, _0223E5C4 ; =0x000005F3
    // bl PlaySE
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #9
    // bne _0223E3C2
    // ldr r0, _0223E5C4 ; =0x000005F3
    // bl PlaySE
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, _0223E5C0 ; =0x000005DD
    // bl PlaySE
    // ldrb r0, [r4, #9]
    // bl ov80_0223792C
    // cmp r0, #0
    // bne _0223E3E4
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4, #0x48]
    // mov r2, #1
    // bl ov82_0223F5E0
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #0
    // strh r0, [r4, #0x14]
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223E5B6
    // mov r0, #0x14
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #0x14]
    // ldrsh r0, [r4, r0]
    // neg r0, r0
    // bl ov82_0223F948
    // mov r0, #0x14
    // ldrsh r0, [r4, r0]
    // cmp r0, #8
    // bne _0223E45C
    // ldrb r0, [r4, #9]
    // bl ov80_0223792C
    // cmp r0, #0
    // bne _0223E41C
    // add r0, r4, #0
    // bl ov82_0223F84C
    // mov r0, #3
    // strb r0, [r4, #8]
    // b _0223E5B6
    // add r0, r4, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0x4c
    // bl ov82_0223FD78
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #1
    // bl ov82_0223EF7C
    // strb r0, [r4, #0xa]
    // ldrb r0, [r4, #0xd]
    // add sp, #0x18
    // strb r0, [r4, #0x1a]
    // mov r0, #1
    // strb r0, [r4, #0x17]
    // pop {r3, r4, r5, pc}
    // add r0, #0x8c
    // ldr r0, [r0]
    // bl ov82_0223FE18
    // cmp r0, #0
    // beq _0223E45C
    // cmp r0, #1
    // beq _0223E45E
    // cmp r0, #2
    // beq _0223E49E
    // b _0223E5B6
    // add r0, r4, #0
    // bl ov82_0223F834
    // add r0, r4, #0
    // bl ov82_0223F6CC
    // cmp r0, #1
    // bne _0223E482
    // add r0, r4, #0
    // bl ov82_0223F6E4
    // cmp r0, #0
    // bne _0223E482
    // ldrb r0, [r4, #0xd]
    // strb r0, [r4, #0x1f]
    // mov r0, #5
    // strb r0, [r4, #8]
    // b _0223E5B6
    // ldr r0, _0223E5C8 ; =0x000005DC
    // mov r1, #0
    // bl StopSE
    // ldr r0, _0223E5CC ; =0x00000623
    // bl PlaySE
    // ldrb r0, [r4, #0x1f]
    // cmp r0, #0x75
    // beq _0223E498
    // strb r0, [r4, #0xd]
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov82_0223F834
    // mov r0, #4
    // strb r0, [r4, #8]
    // b _0223E5B6
    // mov r0, #0x14
    // ldrsh r1, [r4, r0]
    // sub r1, r1, #1
    // strh r1, [r4, #0x14]
    // ldrsh r0, [r4, r0]
    // neg r0, r0
    // bl ov82_0223F948
    // mov r0, #0x14
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bgt _0223E5B6
    // add r0, r4, #0
    // bl ov82_0223F8E4
    // ldrb r0, [r4, #0x1e]
    // cmp r0, #1
    // bne _0223E4D4
    // mov r0, #0
    // strb r0, [r4, #8]
    // b _0223E5B6
    // cmp r0, #0
    // bne _0223E4DE
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0223E5B6
    // bl GF_AssertFail
    // b _0223E5B6
    // add r0, #0x9c
    // ldr r0, [r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0x4c
    // bl ov82_0223FD78
    // add r0, r4, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // bl Save_PlayerData_GetOptionsAddr
    // bl Options_GetTextFrameDelay
    // mov r3, #1
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r1, r4, #0
    // str r3, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // str r3, [sp, #0x14]
    // add r0, r4, #0
    // add r1, #0x4c
    // mov r2, #0x20
    // bl ov82_0223EF1C
    // strb r0, [r4, #0xa]
    // add r0, r4, #0
    // add r0, #0x4c
    // bl CopyWindowToVram
    // mov r0, #6
    // strb r0, [r4, #8]
    // b _0223E5B6
    // ldrb r0, [r4, #0xa]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _0223E5B6
    // mov r0, #1
    // strb r0, [r4, #0x1e]
    // add r0, r4, #0
    // bl ov82_0223F90C
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov82_0223FCFC
    // ldr r0, [r4, #0x48]
    // mov r1, #0x13
    // mov r2, #0
    // bl ov82_0223F5E0
    // ldr r1, [r4, #0x48]
    // add r0, r4, #0
    // bl ov82_0223F580
    // mov r0, #0x13
    // strb r0, [r4, #0xd]
    // add r0, r4, #0
    // bl ov82_0223F558
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov82_0223F570
    // add r2, r0, #0
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r5, #0
    // bl ov82_0223FCBC
    // mov r0, #4
    // strb r0, [r4, #8]
    // b _0223E5B6
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _0223E5B6
    // add r0, r4, #0
    // bl ov82_0223F224
    // add r0, r4, #0
    // bl ov82_0223E8C4
    // add r1, r4, #0
    // add r1, #0xa4
    // ldr r0, _0223E5D0 ; =gOverlayTemplate_PokemonSummary
    // ldr r1, [r1]
    // mov r2, #0x69
    // bl OverlayManager_New
    // str r0, [r4, #4]
    // mov r0, #1
    // add sp, #0x18
    // strb r0, [r4, #0xb]
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // _0223E5BC: .word gSystem
    // _0223E5C0: .word 0x000005DD
    // _0223E5C4: .word 0x000005F3
    // _0223E5C8: .word 0x000005DC
    // _0223E5CC: .word 0x00000623
    // _0223E5D0: .word gOverlayTemplate_PokemonSummary
    // TODO: decompile
}



void ov82_0223E5D4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #9
    // bhi _0223E632
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E5EA: ; jump table
    // ldrb r0, [r4, #0x1a]
    // bl ov82_0223F6C4
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #5
    // bl ov82_0223F6E8
    // cmp r0, #1
    // bne _0223E632
    // mov r0, #0
    // strb r0, [r4, #0x1b]
    // strb r0, [r4, #0x1a]
    // strb r0, [r4, #0x17]
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0223E7D6
    // ldrb r0, [r4, #0x1b]
    // cmp r0, #0
    // beq _0223E62C
    // sub r0, r0, #1
    // strb r0, [r4, #0x1b]
    // b _0223E7D6
    // ldrb r0, [r4, #0x16]
    // cmp r0, #2
    // bhs _0223E634
    // b _0223E7D6
    // mov r0, #0
    // strb r0, [r4, #0x16]
    // ldrb r0, [r4, #0x18]
    // cmp r0, #0x14
    // bhs _0223E652
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0223E64C
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223E7D6
    // mov r0, #3
    // strb r0, [r4, #8]
    // b _0223E7D6
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0223E660
    // mov r0, #3
    // strb r0, [r4, #8]
    // b _0223E7D6
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223E7D6
    // mov r0, #0
    // bl ov82_0223F948
    // mov r1, #0
    // mov r0, #0x82
    // strh r1, [r4, #0x14]
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov82_0223FCB0
    // add r0, r4, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0x4c
    // bl ov82_0223FD78
    // ldr r0, [r4, #0x24]
    // mov r1, #0
    // bl ov80_0222A7CC
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #1
    // bl ov82_0223EF7C
    // strb r0, [r4, #0xa]
    // mov r0, #0xa
    // mov r1, #0x9f
    // strb r0, [r4, #0x1b]
    // lsl r1, r1, #2
    // ldrb r1, [r4, r1]
    // ldr r0, [r4, #0x48]
    // mov r2, #2
    // bl ov82_0223F5E0
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #4
    // strb r0, [r4, #8]
    // b _0223E7D6
    // ldr r1, _0223E7DC ; =0x0000027D
    // ldrb r2, [r4, r1]
    // cmp r2, #0
    // beq _0223E73A
    // cmp r2, #1
    // bne _0223E6D8
    // sub r0, r1, #1
    // ldrb r0, [r4, r0]
    // strb r0, [r4, #0xd]
    // mov r0, #1
    // pop {r4, pc}
    // bl ov82_0223F90C
    // mov r1, #0x9f
    // lsl r1, r1, #2
    // ldrb r1, [r4, r1]
    // ldr r0, [r4, #0x48]
    // mov r2, #0
    // bl ov82_0223F5E0
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #0x9f
    // mov r2, #0xff
    // lsl r0, r0, #2
    // strb r2, [r4, r0]
    // mov r1, #0
    // add r0, r0, #1
    // strb r1, [r4, r0]
    // strb r2, [r4, #0x18]
    // mov r0, #1
    // strb r0, [r4, #0x19]
    // pop {r4, pc}
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4, #0x48]
    // mov r2, #1
    // bl ov82_0223F5E0
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r4, #0
    // bl ov82_0223F84C
    // mov r0, #5
    // strb r0, [r4, #8]
    // b _0223E7D6
    // add r0, #0x8c
    // ldr r0, [r0]
    // bl ov82_0223FE18
    // cmp r0, #0
    // beq _0223E7D6
    // cmp r0, #1
    // beq _0223E73C
    // cmp r0, #2
    // beq _0223E756
    // b _0223E7D6
    // ldr r0, _0223E7E0 ; =0x000005DC
    // mov r1, #0
    // bl StopSE
    // ldr r0, _0223E7E4 ; =0x00000623
    // bl PlaySE
    // add r0, r4, #0
    // bl ov82_0223F834
    // mov r0, #6
    // strb r0, [r4, #8]
    // b _0223E7D6
    // add r0, r4, #0
    // bl ov82_0223F834
    // mov r0, #7
    // strb r0, [r4, #8]
    // b _0223E7D6
    // mov r1, #6
    // mov r2, #1
    // bl ov82_0223F6E8
    // cmp r0, #1
    // bne _0223E7D6
    // mov r0, #1
    // pop {r4, pc}
    // mov r1, #0x14
    // ldrsh r2, [r4, r1]
    // cmp r2, #0
    // ble _0223E788
    // sub r0, r2, #1
    // strh r0, [r4, #0x14]
    // ldrsh r0, [r4, r1]
    // neg r0, r0
    // bl ov82_0223F948
    // b _0223E7D6
    // mov r1, #6
    // mov r2, #2
    // bl ov82_0223F6E8
    // cmp r0, #1
    // bne _0223E7D6
    // add r0, r4, #0
    // bl ov82_0223F8E4
    // mov r0, #0x9f
    // mov r1, #0xff
    // lsl r0, r0, #2
    // strb r1, [r4, r0]
    // strb r1, [r4, #0x18]
    // mov r0, #1
    // strb r0, [r4, #0x19]
    // pop {r4, pc}
    // bl sub_02037BEC
    // mov r0, #0x68
    // bl sub_02037AC0
    // mov r0, #9
    // strb r0, [r4, #8]
    // b _0223E7D6
    // mov r0, #0x68
    // bl sub_02037B38
    // cmp r0, #1
    // bne _0223E7D6
    // bl sub_02037BEC
    // mov r0, #0x69
    // bl sub_020379A0
    // mov r0, #0xff
    // strb r0, [r4, #0x18]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0223E7DC: .word 0x0000027D
    // _0223E7E0: .word 0x000005DC
    // _0223E7E4: .word 0x00000623
    // TODO: decompile
}



void ov82_0223E7E8(void) {
    sub_02037BEC(*((u8*)(r0 + 8)));
    sub_02037AC0(0x68);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    sub_02037B38(0x68);
    sub_02037BEC();
}



void ov82_0223E820(void) {
    *((u8*)(r0 + 0x1b)) = 0xa;
    *((u8*)(r0 + 8)) = (*((u8*)(r0 + 8)) + 1);
    *((u8*)(r0 + 0x1b)) = (*((u8*)(r0 + 0x1b)) - 1);
    ov82_0223F90C((*((u8*)(r0 + 8)) + 1), *((u8*)(r0 + 0x1b)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u8*)(r4 + 8)) + 1));
}



void ov82_0223E888(void) {
    ov82_0223F834(*((u8*)(r0 + 8)));
    // ldr r0, [r4, r0]
    ov82_0223FCB0((0x82 << 2), 1);
    // add r0, #0x4c
    ClearFrameAndWindow2(r4, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
}



void ov82_0223E8C4(void) {
    // ldr r0, [r6, r0]
    ov82_0223FC9C((0x81 << 2));
    // ldr r0, [r6, r0]
    ov82_0223FC9C((0x82 << 2));
    // add r0, #0x8c
    ov82_0223FDC0(*((u32*)r6));
    sub_0203A914();
    // add r0, #0x94
    PaletteData_FreeBuffers(*((u32*)r6), 2);
    // add r0, #0x94
    PaletteData_FreeBuffers(*((u32*)r6), 0);
    // add r0, #0x94
    PaletteData_Free(*((u32*)r6));
    // add r0, #0x94
    // str r1, [r0]
    // add r0, #0xa8
    ov82_0223FBBC(r6, 0);
    DestroyMsgData(*((u32*)(r6 + 0x20)));
    MessageFormat_Delete(*((u32*)(r6 + 0x24)));
    String_Delete(*((u32*)(r6 + 0x28)));
    String_Delete(*((u32*)(r6 + 0x2c)));
    // add r0, #0x98
    MessagePrinter_Delete(*((u32*)r6));
    String_Delete(*((u32*)(r6 + 0x30)));
    // add r0, #0x4c
    ov82_0223FD5C(r6);
    ov82_0223EBB8(*((u32*)(r6 + 0x48)));
    // ldr r0, [r6, r0]
    NARC_Delete((0x22 << 4));
}



void ov82_0223E974(void) {
    ov82_0223E9B0();
    BgConfig_Alloc(0x69);
    *((u32*)(r4 + 0x48)) = r0;
    ov82_0223E9E8(r4);
    ov80_02237920(*((u8*)(r4 + 0xd)));
    // ldr r0, [r4, r0]
    ov82_0223FCFC((0x81 << 2), 2);
    // ldr r0, [r4, r0]
    ov82_0223FCBC((0x81 << 2), 0x80, 0xa8);
}



void ov82_0223E9B0(void) {
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
    // ldr r0, _0223E9E0 ; =0xFFFFE0FF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _0223E9E4 ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // pop {r3, pc}
    // _0223E9E0: .word 0xFFFFE0FF
    // _0223E9E4: .word 0x04001000
    // TODO: decompile
}



void ov82_0223E9E8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0xb7
    // mov r1, #0x69
    // bl NARC_New
    // mov r1, #0x22
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov82_0223EB3C
    // add r0, r5, #0
    // bl ov82_0223EB9C
    // ldr r2, _0223EB2C ; =0x000001B9
    // mov r0, #1
    // mov r1, #0x1b
    // mov r3, #0x69
    // bl NewMsgDataFromNarc
    // str r0, [r5, #0x20]
    // mov r0, #0x69
    // bl MessageFormat_New
    // str r0, [r5, #0x24]
    // mov r0, #0x96
    // lsl r0, r0, #2
    // mov r1, #0x69
    // bl String_New
    // str r0, [r5, #0x28]
    // mov r0, #0x96
    // lsl r0, r0, #2
    // mov r1, #0x69
    // bl String_New
    // str r0, [r5, #0x2c]
    // mov r6, #0
    // add r4, r5, #0
    // mov r7, #0x20
    // add r0, r7, #0
    // mov r1, #0x69
    // bl String_New
    // str r0, [r4, #0x30]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #2
    // blt _0223EA3C
    // mov r1, #0x1a
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #0x69
    // bl LoadFontPal0
    // mov r1, #6
    // mov r0, #0
    // lsl r1, r1, #6
    // mov r2, #0x69
    // bl LoadFontPal1
    // mov r0, #4
    // mov r1, #0x40
    // mov r2, #0x69
    // bl LoadFontPal0
    // mov r0, #0xf
    // mov r1, #0xe
    // mov r2, #0
    // mov r3, #0x69
    // bl MessagePrinter_New
    // add r1, r5, #0
    // add r1, #0x98
    // str r0, [r1]
    // add r1, r5, #0
    // ldr r0, [r5, #0x48]
    // add r1, #0x4c
    // bl ov82_0223FD2C
    // ldr r1, [r5, #0x48]
    // add r0, r5, #0
    // bl ov82_0223F580
    // ldr r2, _0223EB30 ; =0x04000304
    // ldr r0, _0223EB34 ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // and r0, r1
    // strh r0, [r2]
    // bl GfGfx_BothDispOn
    // add r0, r5, #0
    // bl ov82_0223F558
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov82_0223F570
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0xa8
    // mov r2, #1
    // add r3, r4, #0
    // str r1, [sp, #4]
    // bl ov82_0223FC48
    // mov r1, #0x81
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r3, #0xa0
    // mov r1, #1
    // str r3, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0xa8
    // add r2, r1, #0
    // bl ov82_0223FC48
    // mov r1, #0x82
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r1, #0xc
    // ldr r0, [r5, r1]
    // mov r1, #0
    // bl Party_GetMonByIndex
    // add r1, r0, #0
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl ov82_0223FD18
    // bl sub_02037474
    // cmp r0, #0
    // beq _0223EB12
    // mov r0, #1
    // mov r1, #0x10
    // bl G2dRenderer_SetObjCharTransferReservedRegion
    // mov r0, #1
    // bl G2dRenderer_SetPlttTransferReservedRegion
    // bl sub_0203A880
    // mov r0, #0x69
    // bl ov82_0223FDB8
    // add r1, r5, #0
    // add r1, #0x8c
    // str r0, [r1]
    // ldr r0, _0223EB38 ; =ov82_0223EC0C
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223EB2C: .word 0x000001B9
    // _0223EB30: .word 0x04000304
    // _0223EB34: .word 0xFFFF7FFF
    // _0223EB38: .word ov82_0223EC0C
    // TODO: decompile
}



void ov82_0223EB3C(void) {
    ov82_0223EC48();
    ov82_0223EC68(*((u32*)(r4 + 0x48)));
    ov82_0223ED94(r4);
    PaletteData_Init(0x69);
    // add r1, #0x94
    // str r0, [r1]
    // add r0, #0x94
    PaletteData_AllocBuffers(*((u32*)r4), 2, (2 << 8), 0x69);
    // add r0, #0x94
    PaletteData_AllocBuffers(*((u32*)r4), 0, (2 << 8), 0x69);
    ov82_0223EDF0(r4, 3);
    ov82_0223EE38();
    GfGfx_EngineATogglePlanes(4, 0);
    ov82_0223EE6C(r4, 5);
}



void ov82_0223EB9C(void) {
    // ldr r0, [r4, r0]
    Party_GetMonByIndex((0x85 << 2), 0);
    // add r4, #0xa8
    ov82_0223F95C(r4, r0);
}



void ov82_0223EBB8(void) {
    // push {r4, lr}
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // add r4, r0, #0
    // ldr r1, [r2]
    // ldr r0, _0223EC08 ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
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
    // mov r1, #1
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #0
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #5
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #4
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // _0223EC08: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov82_0223EC0C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _0223EC3E
    // add r0, r4, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0223EC24
    // bl PaletteData_PushTransparentBuffers
    // ldr r0, [r4, #0x48]
    // bl DoScheduledBgGpuUpdates
    // bl GF_RunVramTransferTasks
    // bl OamManager_ApplyAndResetBuffers
    // ldr r3, _0223EC40 ; =0x027E0000
    // ldr r1, _0223EC44 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // _0223EC40: .word 0x027E0000
    // _0223EC44: .word 0x00003FF8
    // TODO: decompile
}



void ov82_0223EC48(void) {
}



void ov82_0223EC68(void) {
    // push {r4, r5, lr}
    // sub sp, #0x9c
    // ldr r5, _0223ED78 ; =ov82_0223FE28
    // add r3, sp, #0x8c
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _0223ED7C ; =ov82_0223FE54
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
    // mov r3, #0x69
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223ED80 ; =ov82_0223FE70
    // add r3, sp, #0x54
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
    // mov r3, #0x69
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223ED84 ; =ov82_0223FE8C
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
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223ED88 ; =ov82_0223FEA8
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
    // mov r1, #5
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223ED8C ; =ov82_0223FE38
    // add r3, sp, #0
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
    // ldr r1, _0223ED90 ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #1
    // strh r2, [r1]
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0x9c
    // pop {r4, r5, pc}
    // _0223ED78: .word ov82_0223FE28
    // _0223ED7C: .word ov82_0223FE54
    // _0223ED80: .word ov82_0223FE70
    // _0223ED84: .word ov82_0223FE8C
    // _0223ED88: .word ov82_0223FEA8
    // _0223ED8C: .word ov82_0223FE38
    // _0223ED90: .word 0x04000008
    // TODO: decompile
}



void ov82_0223ED94(void) {
    // push {r3, r4, r5, lr}
    // ldrb r0, [r0, #9]
    // bl ov80_0223792C
    // cmp r0, #0
    // beq _0223EDEA
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r1, [r0]
    // ldr r3, _0223EDEC ; =0xFFFF1FFF
    // add r4, r0, #0
    // and r1, r3
    // str r1, [r0]
    // add r4, #0x48
    // ldrh r5, [r4]
    // mov r1, #0x3f
    // mov r2, #0x1f
    // bic r5, r1
    // orr r5, r2
    // strh r5, [r4]
    // add r4, r0, #0
    // add r4, #0x4a
    // ldrh r5, [r4]
    // bic r5, r1
    // orr r2, r5
    // mov r1, #0x20
    // orr r1, r2
    // strh r1, [r4]
    // mov r2, #0xf
    // add r1, r0, #0
    // lsl r2, r2, #0xc
    // add r1, #0x40
    // strh r2, [r1]
    // add r1, r0, #0
    // mov r4, #0x10
    // add r1, #0x44
    // strh r4, [r1]
    // ldr r1, [r0]
    // add r2, r1, #0
    // and r2, r3
    // lsl r1, r4, #9
    // orr r1, r2
    // str r1, [r0]
    // pop {r3, r4, r5, pc}
    // _0223EDEC: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov82_0223EDF0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadCharDataFromOpenNarc((0x22 << 4), 0x17, *((u32*)(r0 + 0x48)), r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadScrnDataFromOpenNarc((0x22 << 4), 0x18, *((u32*)(r5 + 0x48)), r4);
}



void ov82_0223EE38(void) {
    // add r2, sp, #0
    GfGfxLoader_GetPlttData(0xb7, 0x99, 0x69);
    // ldr r0, [sp]
    DC_FlushRange(*((u32*)(r0 + 0xc)), 0xc0);
    // ldr r0, [sp]
    GX_LoadBGPltt(*((u32*)(r0 + 0xc)), 0, 0xc0);
    Heap_Free(r4);
}



void ov82_0223EE6C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadCharDataFromOpenNarc((0x22 << 4), 0x81, *((u32*)(r0 + 0x48)), r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadScrnDataFromOpenNarc((0x22 << 4), 0x82, *((u32*)(r5 + 0x48)), r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r5, r0]
    GfGfxLoader_GXLoadPalFromOpenNarc((0x22 << 4), 0xbe, 4, 0);
}



void ov82_0223EECC(void) {
    BG_ClearCharDataRange(((r1 << 0x18) >> 0x18), 0x20, 0, 0x69);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadCharDataFromOpenNarc((0x22 << 4), 0x85, *((u32*)(r5 + 0x48)), r4);
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r5, r0]
    GfGfxLoader_GXLoadPalFromOpenNarc((0x22 << 4), 0xc0, 4, 0x20);
}



void ov82_0223EF1C(void) {
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
}



void ov82_0223EF7C(void) {
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r1, #0x4c
    ov82_0223EF1C(r0, r1, 1);
    // add r5, #0x4c
    CopyWindowToVram(r5);
}



void ov82_0223EFB4(void) {
}



void ov82_0223EFCC(void) {
    // ldr r0, [r0, r1]
    Party_GetMonByIndex(0);
    // add r2, sp, #0x10
    GetMonData(0xb3);
    // add r1, sp, #0x30
    FillWindowPixelBuffer(r5, *((u8*)(r1 + 0x18)));
    String_New(0xb, 0x69);
    // add r1, sp, #0x10
    CopyU16ArrayToString();
    // str r4, [sp]
    // str r4, [sp, #4]
    // add r2, sp, #0x30
    // orr r0, r3
    // orr r0, r1
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, *((u8*)(r2 + 0x1c)), r6, r7);
    String_Delete(r6);
    CopyWindowToVram(r5);
}



void ov82_0223F040(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // str r1, [sp, #0x10]
    // add r0, r1, #0
    // add r1, sp, #0x30
    // ldrb r1, [r1, #0x10]
    // add r4, r2, #0
    // add r6, r3, #0
    // bl FillWindowPixelBuffer
    // ldr r2, _0223F108 ; =0x000002DF
    // mov r0, #1
    // mov r1, #0x1b
    // mov r3, #0x69
    // bl NewMsgDataFromNarc
    // str r0, [sp, #0x24]
    // mov r0, #0xb
    // mov r1, #0x69
    // bl String_New
    // add r5, r0, #0
    // mov r0, #0
    // lsl r2, r4, #0x18
    // lsr r3, r2, #8
    // lsl r2, r6, #0x18
    // lsr r2, r2, #0x10
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x20]
    // mov r0, #0x10
    // add r1, sp, #0x30
    // str r0, [sp, #0x14]
    // ldrb r0, [r1, #0x10]
    // orr r2, r3
    // orr r0, r2
    // str r0, [sp, #0x1c]
    // ldrb r0, [r1, #0x14]
    // str r0, [sp, #0x18]
    // mov r4, #0
    // mov r6, #1
    // ldr r0, [sp, #0x20]
    // add r7, r4, r0
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // bl ov80_02237920
    // cmp r0, #0xfe
    // beq _0223F0D4
    // add r0, r5, #0
    // bl String_SetEmpty
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // bl ov80_02237920
    // add r1, r0, #0
    // ldr r0, [sp, #0x24]
    // add r2, r5, #0
    // bl ReadMsgDataIntoString
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // add r2, r5, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r3, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r4, r4, #1
    // add r6, #0x40
    // cmp r4, #4
    // blt _0223F090
    // ldr r0, [sp, #0x20]
    // add r0, r0, #4
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // add r0, #0x24
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x28]
    // add r0, r0, #1
    // str r0, [sp, #0x28]
    // cmp r0, #5
    // blt _0223F08C
    // add r0, r5, #0
    // bl String_Delete
    // ldr r0, [sp, #0x24]
    // bl DestroyMsgData
    // ldr r0, [sp, #0x10]
    // bl CopyWindowToVram
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _0223F108: .word 0x000002DF
    // TODO: decompile
}



void ov82_0223F10C(void) {
    // str r4, [sp]
    // str r3, [sp, #4]
    // ldr r1, [sp, #0x18]
    // add r0, #0x98
    // str r1, [sp, #8]
    PrintUIntOnWindow(*((u32*)r0), r2, 2, 0);
    ScheduleWindowCopyToVram(r4);
}



void ov82_0223F134(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r7, r4, r0
    ov80_02237920(((r7 << 0x18) >> 0x18));
    ov82_0223F6C4(((r7 << 0x18) >> 0x18));
    // ldr r1, [r6, r1]
    sub_02030BD0((0x86 << 2));
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // str r0, [sp]
    ov82_0223F10C(r6, 0xa, r5);
    // add r5, #0x40
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0x24
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
}



void ov82_0223F1AC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r1, #0
    // add r1, sp, #0x18
    // ldrb r1, [r1, #0x18]
    // add r0, r5, #0
    // add r7, r2, #0
    // add r4, r3, #0
    // bl FillWindowPixelBuffer
    // ldr r2, _0223F220 ; =0x000001B9
    // mov r0, #1
    // mov r1, #0x1b
    // mov r3, #0x69
    // bl NewMsgDataFromNarc
    // mov r1, #0x25
    // str r0, [sp, #0x10]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // str r4, [sp]
    // mov r4, #0
    // str r4, [sp, #4]
    // add r2, sp, #0x18
    // ldrb r0, [r2, #0x10]
    // ldrb r3, [r2, #0x14]
    // ldrb r1, [r2, #0x18]
    // lsl r0, r0, #0x18
    // lsl r3, r3, #0x18
    // lsr r0, r0, #8
    // lsr r3, r3, #0x10
    // orr r0, r3
    // orr r0, r1
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldrb r1, [r2, #0x1c]
    // add r0, r5, #0
    // add r2, r6, #0
    // add r3, r7, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, [sp, #0x10]
    // bl DestroyMsgData
    // add r0, r5, #0
    // bl CopyWindowToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223F220: .word 0x000001B9
    // TODO: decompile
}



void ov82_0223F224(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x69
    // mov r1, #0x3c
    // bl Heap_Alloc
    // add r1, r4, #0
    // add r1, #0xa4
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // mov r1, #0
    // mov r2, #0x3c
    // bl memset
    // mov r0, #0x85
    // add r1, r4, #0
    // lsl r0, r0, #2
    // add r1, #0xa4
    // ldr r2, [r4, r0]
    // ldr r1, [r1]
    // str r2, [r1]
    // add r2, r4, #0
    // add r2, #0xa4
    // ldr r2, [r2]
    // mov r1, #1
    // strb r1, [r2, #0x11]
    // add r2, r4, #0
    // add r2, #0x9c
    // ldr r3, [r2]
    // add r2, r4, #0
    // add r2, #0xa4
    // ldr r2, [r2]
    // str r3, [r2, #4]
    // add r2, r4, #0
    // add r2, #0xa4
    // ldr r2, [r2]
    // strb r1, [r2, #0x12]
    // ldr r0, [r4, r0]
    // bl Party_GetCount
    // add r1, r4, #0
    // add r1, #0xa4
    // ldr r1, [r1]
    // strb r0, [r1, #0x13]
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // mov r1, #0
    // strb r1, [r0, #0x14]
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // strh r1, [r0, #0x18]
    // add r0, r4, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // bl SaveArray_IsNatDexEnabled
    // add r1, r4, #0
    // add r1, #0xa4
    // ldr r1, [r1]
    // str r0, [r1, #0x1c]
    // add r0, r4, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // bl sub_02088288
    // add r1, r4, #0
    // add r1, #0xa4
    // ldr r1, [r1]
    // str r0, [r1, #0x2c]
    // add r0, r4, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // bl Save_SpecialRibbons_Get
    // add r1, r4, #0
    // add r1, #0xa4
    // ldr r1, [r1]
    // str r0, [r1, #0x20]
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // mov r1, #0
    // str r1, [r0, #0x34]
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // ldr r1, _0223F2F4 ; =_0223FE20
    // bl sub_02089D40
    // add r0, r4, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // bl Save_PlayerData_GetProfile
    // add r4, #0xa4
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl sub_0208AD34
    // pop {r4, pc}
    // _0223F2F4: .word _0223FE20
    // TODO: decompile
}



void ov82_0223F2F8(void) {
}



void ov82_0223F300(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0223F480 ; =gSystem
    // add r4, r0, #0
    // ldr r2, [r1, #0x48]
    // mov r1, #0x20
    // mov r0, #0
    // tst r1, r2
    // beq _0223F34A
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // beq _0223F31E
    // ldrb r0, [r4, #0xd]
    // strb r0, [r4, #0xc]
    // ldrb r0, [r4, #0xd]
    // mov r1, #0x1e
    // lsr r3, r0, #0x1f
    // lsl r2, r0, #0x1e
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // bne _0223F334
    // add r0, r0, #3
    // strb r0, [r4, #0xd]
    // b _0223F348
    // bl ov80_02237920
    // cmp r0, #0xfe
    // bne _0223F342
    // mov r0, #0x10
    // strb r0, [r4, #0xd]
    // b _0223F348
    // ldrb r0, [r4, #0xd]
    // sub r0, r0, #1
    // strb r0, [r4, #0xd]
    // mov r0, #1
    // ldr r1, _0223F480 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #0x10
    // tst r1, r2
    // beq _0223F390
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // beq _0223F362
    // ldrb r0, [r4, #0xd]
    // strb r0, [r4, #0xc]
    // ldrb r0, [r4, #0xd]
    // mov r1, #0x1e
    // lsr r3, r0, #0x1f
    // lsl r2, r0, #0x1e
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // cmp r1, #3
    // bne _0223F37A
    // sub r0, r0, #3
    // strb r0, [r4, #0xd]
    // b _0223F38E
    // bl ov80_02237920
    // cmp r0, #0xfe
    // bne _0223F388
    // mov r0, #0x13
    // strb r0, [r4, #0xd]
    // b _0223F38E
    // ldrb r0, [r4, #0xd]
    // add r0, r0, #1
    // strb r0, [r4, #0xd]
    // mov r0, #1
    // ldr r1, _0223F480 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #0x40
    // tst r1, r2
    // beq _0223F3FC
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // beq _0223F3A8
    // ldrb r0, [r4, #0xd]
    // strb r0, [r4, #0xc]
    // ldrb r0, [r4, #0xd]
    // cmp r0, #4
    // bhs _0223F3B4
    // add r0, #0x10
    // strb r0, [r4, #0xd]
    // b _0223F3FA
    // bl ov80_02237920
    // cmp r0, #0xfe
    // bne _0223F3F4
    // ldrb r0, [r4, #0xc]
    // cmp r0, #0x10
    // bne _0223F3C8
    // mov r0, #0xd
    // strb r0, [r4, #0xd]
    // b _0223F3FA
    // cmp r0, #0x13
    // bne _0223F3D2
    // mov r0, #0xe
    // strb r0, [r4, #0xd]
    // b _0223F3FA
    // cmp r0, #0xd
    // beq _0223F3DA
    // cmp r0, #1
    // bne _0223F3E0
    // mov r0, #0xd
    // strb r0, [r4, #0xd]
    // b _0223F3FA
    // cmp r0, #0xe
    // beq _0223F3E8
    // cmp r0, #2
    // bne _0223F3EE
    // mov r0, #0xe
    // strb r0, [r4, #0xd]
    // b _0223F3FA
    // mov r0, #0xd
    // strb r0, [r4, #0xd]
    // b _0223F3FA
    // ldrb r0, [r4, #0xd]
    // sub r0, r0, #4
    // strb r0, [r4, #0xd]
    // mov r0, #1
    // ldr r1, _0223F480 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #0x80
    // tst r1, r2
    // beq _0223F424
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // beq _0223F414
    // ldrb r0, [r4, #0xd]
    // strb r0, [r4, #0xc]
    // ldrb r0, [r4, #0xd]
    // cmp r0, #0x10
    // blo _0223F41E
    // sub r0, #0x10
    // b _0223F420
    // add r0, r0, #4
    // strb r0, [r4, #0xd]
    // mov r0, #1
    // cmp r0, #1
    // bne _0223F44A
    // ldr r0, _0223F484 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov82_0223F558
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov82_0223F570
    // add r2, r0, #0
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r5, #0
    // bl ov82_0223FCBC
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // bne _0223F470
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #2
    // bl ov82_0223FCFC
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0x80
    // mov r2, #0xa8
    // bl ov82_0223FCBC
    // pop {r3, r4, r5, pc}
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov82_0223FCFC
    // pop {r3, r4, r5, pc}
    // nop
    // _0223F480: .word gSystem
    // _0223F484: .word 0x000005DC
    // TODO: decompile
}



void ov82_0223F488(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // ldr r0, _0223F538 ; =gSystem + 0x40
    // ldrh r1, [r0, #0x24]
    // cmp r1, #0
    // beq _0223F532
    // ldrh r4, [r0, #0x20]
    // ldrh r5, [r0, #0x22]
    // mov r7, #0
    // mov r3, #3
    // add r2, r3, #0
    // add r2, #0x23
    // mov r1, #0
    // mov r6, #1
    // add r0, r6, #0
    // add r0, #0x3f
    // cmp r6, r4
    // bgt _0223F522
    // cmp r4, r0
    // bgt _0223F522
    // cmp r3, r5
    // bgt _0223F522
    // cmp r5, r2
    // bgt _0223F522
    // lsl r0, r7, #2
    // add r1, r1, r0
    // ldr r0, [sp]
    // strb r1, [r0, #0xd]
    // bl ov82_0223F558
    // add r4, r0, #0
    // ldr r0, [sp]
    // bl ov82_0223F570
    // add r2, r0, #0
    // mov r1, #0x81
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // add r1, r4, #0
    // bl ov82_0223FCBC
    // ldr r0, [sp]
    // ldrb r0, [r0, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // bne _0223F508
    // mov r1, #0x81
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #2
    // bl ov82_0223FCFC
    // mov r1, #0x81
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #0x80
    // mov r2, #0xa8
    // bl ov82_0223FCBC
    // b _0223F516
    // mov r1, #0x81
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #1
    // bl ov82_0223FCFC
    // ldr r1, [sp]
    // mov r0, #1
    // add r1, #0x90
    // strb r0, [r1]
    // str r1, [sp]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r1, #1
    // add r6, #0x40
    // cmp r1, #4
    // blt _0223F4A4
    // add r7, r7, #1
    // add r3, #0x24
    // cmp r7, #5
    // blt _0223F49C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223F538: .word gSystem + 0x40
    // TODO: decompile
}



void ov82_0223F53C(void) {
    // ldr r1, _0223F554 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #1
    // tst r2, r1
    // beq _0223F550
    // mov r2, #0
    // add r0, #0x90
    // strb r2, [r0]
    // add r0, r1, #0
    // bx lr
    // mov r0, #0
    // bx lr
    // _0223F554: .word gSystem
    // TODO: decompile
}



void ov82_0223F558(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, #0x20
}



void ov82_0223F570(void) {
    // mul r0, r1
    // add r0, #0x10
}



void ov82_0223F580(void) {
    ov82_0223F6E4();
    ov82_0223F5E0(r5, ((0 << 0x18) >> 0x18), 3);
    // ldr r1, [r6, r7]
    sub_02030BD0(((0 << 0x18) >> 0x18));
    ov82_0223F5E0(r5, ((r4 << 0x18) >> 0x18), 3);
    ov82_0223F5E0(r5, 0x13, 3);
    ScheduleBgTilemapBufferTransfer(r5, 3);
}



void ov82_0223F5E0(void) {
    // sub r2, r2, r3
    // ror r2, r0
    // add r0, r3, r2
    // str r0, [sp, #0xc]
    // mov ip, r0
    // sub r2, r2, r3
    // ror r2, r0
    // add r6, r3, r2
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r1, [sp, #8]
    // mov r2, ip
    BgTilemapRectChangePalette(r0, 3, 4, 0x12);
    // ldr r0, [sp, #0xc]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r7, 3, ((r0 << 0x18) >> 0x18), 0x14);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r7, 3);
}



void ov82_0223F6C4(void) {
    // cmp r0, #0x11
    // blo _0223F6CA
    // mov r0, #0x11
    // bx lr
    // TODO: decompile
}



void ov82_0223F6CC(void) {
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bne _0223F6E0
    // ldrh r0, [r0, #0x1c]
    // cmp r0, #0x32
    // beq _0223F6DC
    // cmp r0, #0xaa
    // bne _0223F6E0
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov82_0223F6E4(void) {
    // ldrb r0, [r0, #0x1e]
    // bx lr
    // TODO: decompile
}



void ov82_0223F6E8(void) {
    ov80_0223792C(*((u8*)(r0 + 9)));
    ov82_0223F74C(r5, r4);
    ov82_0223F770(r5, r4, r7);
    ov82_0223F808(r5, r4, r7);
    // add r1, r5, r1
    sub_02037030(r6, (0x89 << 2), 0x2c);
}



void ov82_0223F74C(void) {
}



void ov82_0223F764(void) {
}



void ov82_0223F770(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x89
    // lsl r0, r0, #2
    // strh r1, [r5, r0]
    // add r4, r2, #0
    // add r0, r0, #2
    // strh r4, [r5, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0223F790
    // ldrb r0, [r5, #0x18]
    // cmp r0, #0xff
    // bne _0223F790
    // strb r4, [r5, #0x18]
    // ldrb r1, [r5, #0x18]
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // strh r1, [r5, r0]
    // sub r0, #0x14
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Party_GetMonByIndex
    // mov r1, #0xa1
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _0223F7B0 ; =0x0000022A
    // strh r0, [r5, r1]
    // pop {r3, r4, r5, pc}
    // _0223F7B0: .word 0x0000022A
    // TODO: decompile
}



void ov82_0223F7B4(void) {
    *((u8*)(r3 + 0x16)) = (*((u8*)(r3 + 0x16)) + 1);
    sub_0203769C((*((u8*)(r3 + 0x16)) + 1));
    // strb r1, [r4, r0]
    sub_0203769C((0x9f << 2), *((u16*)(r5 + 2)));
    // strb r1, [r4, r0]
    // ldrb r0, [r4, r0]
    // add r0, #0x14
    *((u8*)(r4 + 0x18)) = (0x9f << 2);
    *((u8*)(r4 + 0x18)) = *((u16*)(r5 + 4));
    // ldr r0, [r4, r0]
    // strh r1, [r0]
}



void ov82_0223F808(void) {
    // strh r1, [r0, r3]
    // strh r2, [r0, r1]
}



void ov82_0223F814(void) {
}



void ov82_0223F834(void) {
}



void ov82_0223F84C(void) {
    // ldr r0, [r4, r0]
    ov82_0223FCB0((0x82 << 2), 0);
    // add r0, #0x9c
    Options_GetFrame(*((u32*)r4));
    // add r0, #0x4c
    ov82_0223FD78(r4, r0);
    ov80_02237920(*((u8*)(r4 + 0xd)));
    BufferTypeName(*((u32*)(r4 + 0x24)), 0, r0);
    ov82_0223F6C4(*((u8*)(r4 + 0xd)));
    // ldr r1, [r4, r1]
    sub_02030BD0((0x86 << 2));
    ov82_0223EFB4(r4, 1, 0xa);
    ov82_0223F6E4(r4);
    ov82_0223EF7C(r4, 0x18, 1);
    *((u8*)(r4 + 0xa)) = r0;
    // ldr r0, [r4, r0]
    ov82_0223FCFC((0x81 << 2), 0);
    // add r2, #0x90
    // add r0, #0x8c
    // ldrb r2, [r2]
    ov82_0223FDC8(*((u32*)r4), *((u32*)(r4 + 0x48)), r4);
    *((u8*)(r4 + 0xf)) = 1;
}



void ov82_0223F8E4(void) {
    ov82_0223F90C();
    ov82_0223F5E0(*((u32*)(r4 + 0x48)), *((u8*)(r4 + 0xd)), 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x48)), 3);
    // ldr r0, [r4, r0]
    ov82_0223FCFC((0x81 << 2), 1);
}



void ov82_0223F90C(void) {
    // ldr r0, [r4, r0]
    ov82_0223FCB0((0x82 << 2), 1);
    // add r0, #0x4c
    ClearFrameAndWindow2(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r4, #0x5c
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    ov82_0223EFCC(r4, r4, 0, 0);
}



void ov82_0223F948(void) {
    // ldr r3, _0223F954 ; =G2x_SetBlendBrightness_
    // add r2, r0, #0
    // ldr r0, _0223F958 ; =0x04000050
    // mov r1, #0x1e
    // bx r3
    // nop
    // _0223F954: .word G2x_SetBlendBrightness_
    // _0223F958: .word 0x04000050
    // TODO: decompile
}



void ov82_0223F95C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // str r1, [sp, #0x14]
    // bl ov82_0223FC14
    // bl NNS_G2dInitOamManagerModule
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x80
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #0x20
    // str r3, [sp, #0xc]
    // mov r2, #0x69
    // str r2, [sp, #0x10]
    // add r2, r0, #0
    // bl OamManager_Create
    // mov r0, #2
    // add r1, r5, #4
    // mov r2, #0x69
    // bl G2dRenderer_Init
    // ldr r4, _0223FB04 ; =ov82_0223FEEC
    // str r0, [r5]
    // mov r7, #0
    // add r6, r5, #0
    // ldrb r0, [r4]
    // add r1, r7, #0
    // mov r2, #0x69
    // bl Create2DGfxResObjMan
    // mov r1, #0x4b
    // lsl r1, r1, #2
    // str r0, [r6, r1]
    // add r7, r7, #1
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r7, #4
    // blt _0223F996
    // mov r0, #0
    // str r0, [sp]
    // mov r3, #1
    // str r3, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // add r0, #0xc3
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0xc
    // bl AddCharResObjFromNarc
    // mov r1, #0x4f
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x69
    // str r0, [sp, #0xc]
    // add r0, #0xc7
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x36
    // bl AddPlttResObjFromNarc
    // mov r1, #5
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // add r0, #0xcb
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0xe
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x51
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // add r0, #0xcf
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0xd
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x52
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0x14
    // mov r1, #0x69
    // bl NARC_New
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // bl Pokemon_GetIconNaix
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // add r0, #0xc3
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x18]
    // mov r3, #0
    // bl AddCharResObjFromOpenNarc
    // mov r1, #0x53
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // bl sub_02074490
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #3
    // str r0, [sp, #8]
    // mov r0, #0x69
    // str r0, [sp, #0xc]
    // add r0, #0xc7
    // ldr r0, [r5, r0]
    // mov r1, #0x14
    // mov r3, #0
    // bl AddPlttResObjFromNarc
    // mov r1, #0x15
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // bl sub_02074498
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // add r0, #0xcb
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x18]
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x55
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // bl sub_020744A4
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // add r0, #0xcf
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x18]
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x56
    // lsl r1, r1, #2
    // add r7, r1, #0
    // add r6, r1, #0
    // str r0, [r5, r1]
    // mov r4, #0
    // sub r7, #0x1c
    // sub r6, #0x18
    // ldr r0, [r5, r7]
    // bl sub_0200ACF0
    // ldr r0, [r5, r6]
    // bl sub_0200AF94
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #2
    // blt _0223FAD4
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [sp, #0x18]
    // bl NARC_Delete
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223FB04: .word ov82_0223FEEC
    // TODO: decompile
}



void ov82_0223FB08(void) {
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [r5, r0]
    // str r2, [sp, #0x14]
    // ldr r2, [r5, r2]
    // str r2, [sp, #0x18]
    // add r2, #8
    // ldr r2, [r5, r2]
    // add r0, #0xc
    // str r2, [sp, #0x1c]
    // ldr r0, [r5, r0]
    // str r0, [sp, #0x20]
    // str r3, [sp, #0x24]
    // str r3, [sp, #0x28]
    // add r0, sp, #0x5c
    CreateSpriteResourcesHeader((0x4b << 2), r1, r1);
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
    *((u16*)((1 << 0xc) + 0x20)) = 0;
    // str r4, [sp, #0x50]
    // add r0, sp, #0x80
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // add r0, sp, #0x80
    // ldr r1, [sp, #0x38]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    Sprite_CreateAffine((3 << 0x12), 0);
    Sprite_SetAnimActiveFlag(1);
    Sprite_SetAnimSpeed(r4, (1 << 0xc));
    Sprite_SetAnimCtrlSeq(r4, r6);
}



void ov82_0223FBBC(void) {
    // add r6, r5, r0
    // ldr r0, [r6, r0]
    sub_0200AEB0((0x4f << 2));
    // ldr r0, [r6, r7]
    sub_0200B0A8();
    // add r0, r5, r0
    // ldr r0, [r0, r6]
    Destroy2DGfxResObjMan((0 << 2));
    SpriteList_Delete(*((u32*)r5));
    OamManager_Free();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
}



void ov82_0223FC14(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, _0223FC44 ; =ov82_0223FEF0
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r1, #0x10
    // add r0, r2, #0
    // add r2, r1, #0
    // bl ObjCharTransfer_InitEx
    // mov r0, #4
    // mov r1, #0x69
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // add sp, #0x10
    // pop {r4, pc}
    // _0223FC44: .word ov82_0223FEF0
    // TODO: decompile
}



void ov82_0223FC48(void) {
    // str r2, [sp, #4]
    Heap_Alloc(0x69, 0x14);
    // strb r0, [r2]
    // ldr r0, [sp, #0x2c]
    *((u32*)(r0 + 0xc)) = 0;
    // ldr r2, [sp, #4]
    // str r3, [sp]
    ov82_0223FB08(r6, r7, (r0 + 1), 0);
    *((u32*)(r4 + 0x10)) = r0;
    // str r0, [sp, #8]
    // add r0, sp, #0x18
    // add r1, sp, #8
    // str r0, [sp, #0xc]
    Sprite_SetMatrix(*((u32*)(r4 + 0x10)));
}



u32 ov82_0223FC9C(void) {
}



void ov82_0223FCB0(void) {
}



void ov82_0223FCBC(void) {
    // ldrb r1, [r1]
    Sprite_TryChangeAnimSeq(*((u32*)(r0 + 0x10)), *((u32*)(r0 + 0xc)));
    Sprite_GetMatrixPtr(*((u32*)(r5 + 0x10)));
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    Sprite_SetMatrix(*((u32*)(r5 + 0x10)), r2, r0);
}



void ov82_0223FCFC(void) {
    Sprite_SetAnimSpeed(*((u32*)(r0 + 0x10)), (1 << 0xc));
    Sprite_TryChangeAnimSeq(*((u32*)(r5 + 0x10)), r4);
}



void ov82_0223FD18(void) {
}



void ov82_0223FD2C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // mov r4, #0
    // ldr r2, _0223FD58 ; =ov82_0223FF00
    // lsl r6, r4, #4
    // lsl r3, r4, #3
    // add r0, r7, #0
    // add r1, r5, r6
    // add r2, r2, r3
    // bl AddWindow
    // add r0, r5, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _0223FD34
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223FD58: .word ov82_0223FF00
    // TODO: decompile
}



void ov82_0223FD5C(void) {
}



void ov82_0223FD78(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r4, r0, #0
    // bl GetWindowBgId
    // add r1, r0, #0
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x69
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // ldr r2, _0223FDB4 ; =0x000003D9
    // mov r3, #0xa
    // bl LoadUserFrameGfx2
    // add r0, r4, #0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // ldr r2, _0223FDB4 ; =0x000003D9
    // add r0, r4, #0
    // mov r1, #0
    // mov r3, #0xa
    // bl DrawFrameAndWindow2
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _0223FDB4: .word 0x000003D9
    // TODO: decompile
}



void ov82_0223FDB8(void) {
}



void ov82_0223FDC0(void) {
}



void ov82_0223FDC8(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r5, [sp]
    // str r2, [sp, #4]
    // add r0, sp, #0
    *((u8*)(0xe + 0x10)) = 0x18;
    *((u8*)(0xe + 0x11)) = 0xa;
    // bic r1, r3
    // and r3, r4
    // orr r1, r3
    *((u8*)(0xe + 0x12)) = *((u8*)(0xe + 0x12));
    // bic r3, r1
    *((u8*)(0xe + 0x12)) = *((u8*)(0xe + 0x12));
    *((u8*)(0xe + 0x13)) = 0;
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(r6, 0xf0, 0, *((u8*)(0xe + 0x12)));
}



void ov82_0223FE18(void) {
}


