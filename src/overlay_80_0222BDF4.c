/* Decompiled from asm/overlay_80_0222BDF4.s */
#include "global.h"

void FrontierScript_ReadVarPtr(void) {
    FrontierScriptContext_ReadHalfWord();
    ov80_0222BE24(r4, r0);
    GF_AssertFail();
}



void FrontierScript_ReadVar(void) {
}



void ov80_0222BE24(void) {
    // push {r3, lr}
    // mov r3, #2
    // lsl r3, r3, #0xe
    // cmp r1, r3
    // bhs _0222BE32
    // mov r0, #0
    // pop {r3, pc}
    // add r2, r3, #0
    // add r2, #8
    // cmp r1, r2
    // bhs _0222BE44
    // sub r1, r1, r3
    // add r0, #8
    // lsl r1, r1, #1
    // add r0, r0, r1
    // pop {r3, pc}
    // add r2, r3, #0
    // add r2, #0x10
    // cmp r1, r2
    // bhs _0222BE58
    // add r3, #8
    // ldr r0, [r0]
    // sub r1, r1, r3
    // bl ov80_0222AB2C
    // pop {r3, pc}
    // add r2, r3, #0
    // add r2, #0x14
    // cmp r1, r2
    // bhs _0222BE6C
    // add r3, #0x10
    // sub r1, r1, r3
    // add r0, #0x78
    // lsl r1, r1, #1
    // add r0, r0, r1
    // pop {r3, pc}
    // ldr r0, _0222BE94 ; =0x0000FD13
    // cmp r1, r0
    // bne _0222BE76
    // mov r0, #0
    // pop {r3, pc}
    // ldr r0, _0222BE98 ; =0x0000EEEE
    // cmp r1, r0
    // bne _0222BE80
    // mov r0, #0
    // pop {r3, pc}
    // add r0, r0, #1
    // cmp r1, r0
    // bne _0222BE8A
    // mov r0, #0
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _0222BE94: .word 0x0000FD13
    // _0222BE98: .word 0x0000EEEE
    // TODO: decompile
}



void ov80_0222BE9C(void) {
}



u8 FrtCmd_000(void) {
}



void FrtCmd_001(void) {
}



u32 FrtCmd_002(void) {
}



void FrtCmd_003(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r4, [r5]
    // bl FrontierScript_ReadVar
    // add r1, r0, #0
    // ldr r0, [r4]
    // ldr r2, _0222BEF4 ; =0x0000FFFF
    // bl sub_02096854
    // ldr r1, _0222BEF8 ; =ov80_0222BEFC
    // add r0, r5, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _0222BEF4: .word 0x0000FFFF
    // _0222BEF8: .word ov80_0222BEFC
    // TODO: decompile
}



u8 ov80_0222BEFC(void) {
}



u32 FrtCmd_004(void) {
}



void FrtCmd_005(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl FrontierScriptContext_ReadHalfWord
    // add r4, r0, #0
    // add r0, r5, #0
    // bl FrontierScriptContext_ReadHalfWord
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov80_0222BE24
    // strh r4, [r0]
    // add r0, r5, #0
    // add r0, #0x78
    // strh r6, [r0]
    // ldr r1, _0222BF58 ; =ov80_0222BF5C
    // add r0, r5, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // nop
    // _0222BF58: .word ov80_0222BF5C
    // TODO: decompile
}



void ov80_0222BF5C(void) {
}



u32 FrtCmd_006(void) {
}



u32 FrtCmd_007(void) {
}



u32 FrtCmd_008(void) {
}



void FrtCmd_009(void) {
    FrontierScript_ReadVarPtr();
    FrontierScript_ReadVar(r5);
    // ldrh r1, [r4]
    // sub r0, r1, r0
    // strh r0, [r4]
}



void ov80_0222BFE4(void) {
    // cmp r0, r1
    // bhs _0222BFEC
    // mov r0, #0
    // bx lr
    // cmp r0, r1
    // bne _0222BFF4
    // mov r0, #1
    // bx lr
    // mov r0, #2
    // bx lr
    // TODO: decompile
}



u32 FrtCmd_032(void) {
}



u32 FrtCmd_033(void) {
}



void ov80_0222C03C(void) {
}



u32 FrtCmd_010(void) {
}



void FrtCmd_011(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r2, [r5, #0x1c]
    // add r1, r2, #1
    // str r1, [r5, #0x1c]
    // ldrb r4, [r2]
    // bl FrontierScriptContext_ReadWord
    // add r1, r0, #0
    // lsl r0, r4, #1
    // add r4, r4, r0
    // add r0, r5, #0
    // add r0, #0x8c
    // ldr r3, _0222C08C ; =ov80_0223B9D8
    // ldrb r2, [r0]
    // add r0, r3, r4
    // ldrb r0, [r2, r0]
    // cmp r0, #1
    // bne _0222C088
    // ldr r2, [r5, #0x1c]
    // add r0, r5, #0
    // add r1, r2, r1
    // bl ov80_0222C03C
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0222C08C: .word ov80_0223B9D8
    // TODO: decompile
}



u32 FrtCmd_012(void) {
}



void FrtCmd_013(void) {
}



void FrtCmd_014(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r2, [r5, #0x1c]
    // add r1, r2, #1
    // str r1, [r5, #0x1c]
    // ldrb r4, [r2]
    // bl FrontierScriptContext_ReadWord
    // add r1, r0, #0
    // lsl r0, r4, #1
    // add r4, r4, r0
    // add r0, r5, #0
    // add r0, #0x8c
    // ldr r3, _0222C0E8 ; =ov80_0223B9D8
    // ldrb r2, [r0]
    // add r0, r3, r4
    // ldrb r0, [r2, r0]
    // cmp r0, #1
    // bne _0222C0E4
    // ldr r2, [r5, #0x1c]
    // add r0, r5, #0
    // add r1, r2, r1
    // bl FrontierScriptContext_Call
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0222C0E8: .word ov80_0223B9D8
    // TODO: decompile
}



void FrtCmd_015(void) {
    FrontierScriptContext_ReadHalfWord();
    // add r0, sp, #4
    // strb r3, [r0]
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 1;
    *((u8*)(r0 + 3)) = 0;
    // add r0, sp, #4
    // str r0, [sp]
    // add r4, #0x80
    ov80_0222E268(*((u32*)r4), *((u32*)r4), r0, 0);
}



void FrtCmd_016(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // bl FrontierScriptContext_ReadHalfWord
    // mov r3, #0
    // add r1, r4, #0
    // str r3, [sp]
    // add r1, #0x80
    // add r2, r0, #0
    // ldr r0, [r4]
    // ldr r1, [r1]
    // bl ov80_0222E268
    // ldr r1, _0222C148 ; =ov80_0222C17C
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _0222C148: .word ov80_0222C17C
    // TODO: decompile
}



void FrtCmd_017(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // bl FrontierScriptContext_ReadHalfWord
    // add r2, r0, #0
    // mov r0, #0
    // add r1, r4, #0
    // str r0, [sp]
    // add r1, #0x80
    // ldr r0, [r4]
    // ldr r1, [r1]
    // mov r3, #1
    // bl ov80_0222E268
    // ldr r1, _0222C178 ; =ov80_0222C17C
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // add sp, #4
    // pop {r3, r4, pc}
    // _0222C178: .word ov80_0222C17C
    // TODO: decompile
}



void ov80_0222C17C(void) {
    // add r0, #0x50
    // ldrb r0, [r0]
    TextPrinterCheckActive(*((u32*)r0));
    TextFlags_SetCanTouchSpeedUpPrint(0);
}



void FrtCmd_018(void) {
}



void FrtCmd_019(void) {
    FrontierScriptContext_ReadHalfWord();
    FrontierScriptContext_ReadHalfWord(r5);
    FrontierScriptContext_ReadHalfWord(r5);
    FrontierScriptContext_ReadHalfWord(r5);
    // str r4, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, r7, r7, r0);
    sub_0200FBDC(0);
    sub_0200FBDC(1);
}



void FrtCmd_020(void) {
}



void ov80_0222C200(void) {
}



void FrtCmd_021(void) {
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    // ldrb r1, [r1]
    // str r1, [sp, #0x14]
    *((u32*)(r0 + 0x1c)) = ((*((u32*)(r0 + 0x1c)) + 1) + 1);
    // ldrb r1, [r2]
    // str r1, [sp, #0x10]
    *((u32*)(r0 + 0x1c)) = (((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1);
    // ldrb r7, [r3]
    *((u32*)(r0 + 0x1c)) = ((((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1) + 1);
    // ldrb r6, [r2]
    FrontierScriptContext_ReadHalfWord(((((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1) + 1), (((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1), ((*((u32*)(r0 + 0x1c)) + 1) + 1));
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    ov80_0222BE24(r5);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    ov80_0222E558(r4, r7);
    *((u32*)(r4 + 0x60)) = r0;
    // ldr r0, [sp, #0x18]
    // add r5, #0x78
    // strh r0, [r5]
}



void FrtCmd_022(void) {
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    // ldrb r1, [r1]
    // str r1, [sp, #0x14]
    *((u32*)(r0 + 0x1c)) = ((*((u32*)(r0 + 0x1c)) + 1) + 1);
    // ldrb r1, [r2]
    // str r1, [sp, #0x10]
    *((u32*)(r0 + 0x1c)) = (((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1);
    // ldrb r7, [r3]
    *((u32*)(r0 + 0x1c)) = ((((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1) + 1);
    // ldrb r6, [r2]
    FrontierScriptContext_ReadHalfWord(((((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1) + 1), (((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1), ((*((u32*)(r0 + 0x1c)) + 1) + 1));
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    ov80_0222BE24(r5);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x80
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    ov80_0222E558(r4, r7);
    *((u32*)(r4 + 0x60)) = r0;
    // ldr r0, [sp, #0x18]
    // add r5, #0x78
    // strh r0, [r5]
}



u32 FrtCmd_023(void) {
}



u32 FrtCmd_024(void) {
}



void FrtCmd_025(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0, #0x60]
    // bl ov80_0222E5B0
    // ldr r1, _0222C338 ; =ov80_0222C33C
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, pc}
    // _0222C338: .word ov80_0222C33C
    // TODO: decompile
}



void ov80_0222C33C(void) {
    // push {r4, lr}
    // add r1, r0, #0
    // add r1, #0x78
    // ldrh r1, [r1]
    // ldr r4, [r0]
    // bl ov80_0222BE24
    // ldr r1, [r4, #0x60]
    // cmp r1, #0
    // beq _0222C354
    // mov r0, #0
    // pop {r4, pc}
    // ldrh r1, [r0]
    // ldr r0, _0222C364 ; =0x0000EEEE
    // cmp r1, r0
    // beq _0222C360
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _0222C364: .word 0x0000EEEE
    // TODO: decompile
}



void FrtCmd_026(void) {
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    // ldrb r1, [r1]
    // str r1, [sp, #0x14]
    *((u32*)(r0 + 0x1c)) = ((*((u32*)(r0 + 0x1c)) + 1) + 1);
    // ldrb r1, [r2]
    // str r1, [sp, #0x10]
    *((u32*)(r0 + 0x1c)) = (((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1);
    // ldrb r7, [r3]
    *((u32*)(r0 + 0x1c)) = ((((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1) + 1);
    // ldrb r6, [r2]
    FrontierScriptContext_ReadHalfWord(((((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1) + 1), (((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1), ((*((u32*)(r0 + 0x1c)) + 1) + 1));
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    ov80_0222BE24(r5);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    ov80_0222E920(r4, r7);
    *((u32*)(r4 + 0x60)) = r0;
    // ldr r0, [sp, #0x18]
    // add r5, #0x78
    // strh r0, [r5]
}



void FrtCmd_027(void) {
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    // ldrb r1, [r1]
    // str r1, [sp, #0x14]
    *((u32*)(r0 + 0x1c)) = ((*((u32*)(r0 + 0x1c)) + 1) + 1);
    // ldrb r1, [r2]
    // str r1, [sp, #0x10]
    *((u32*)(r0 + 0x1c)) = (((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1);
    // ldrb r7, [r3]
    *((u32*)(r0 + 0x1c)) = ((((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1) + 1);
    // ldrb r6, [r2]
    FrontierScriptContext_ReadHalfWord(((((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1) + 1), (((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1), ((*((u32*)(r0 + 0x1c)) + 1) + 1));
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    ov80_0222BE24(r5);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x80
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    ov80_0222E920(r4, r7);
    *((u32*)(r4 + 0x60)) = r0;
    // ldr r0, [sp, #0x18]
    // add r5, #0x78
    // strh r0, [r5]
}



u32 FrtCmd_028(void) {
}



void FrtCmd_029(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0, #0x60]
    // bl ov80_0222E948
    // ldr r1, _0222C468 ; =ov80_0222C33C
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, pc}
    // _0222C468: .word ov80_0222C33C
    // TODO: decompile
}



void FrtCmd_030(void) {
}



void FrtCmd_031(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r4, [r5]
    // add r0, r4, #0
    // bl FrontierSystem_GetFrontierMap
    // add r6, r0, #0
    // add r0, r5, #0
    // bl FrontierScriptContext_ReadHalfWord
    // ldr r1, [r5, #0x1c]
    // add r7, r0, #0
    // add r0, r1, #1
    // str r0, [r5, #0x1c]
    // ldrb r0, [r1]
    // ldr r1, _0222C4C4 ; =ov80_0223B9D0
    // ldr r2, _0222C4C8 ; =0x000003D9
    // str r0, [sp]
    // ldr r0, [r4, #0x34]
    // mov r3, #0xc
    // str r0, [sp, #4]
    // ldr r0, [r6]
    // bl CreateYesNoMenu
    // str r0, [r4, #0x74]
    // add r0, r5, #0
    // add r0, #0x78
    // strh r7, [r0]
    // ldr r1, _0222C4CC ; =ov80_0222C4D0
    // add r0, r5, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222C4C4: .word ov80_0223B9D0
    // _0222C4C8: .word 0x000003D9
    // _0222C4CC: .word ov80_0222C4D0
    // TODO: decompile
}



void ov80_0222C4D0(void) {
    // push {r4, r5, r6, lr}
    // add r1, r0, #0
    // add r1, #0x78
    // ldrh r1, [r1]
    // ldr r4, [r0]
    // bl ov80_0222BE24
    // add r5, r0, #0
    // ldr r0, [r4, #0x74]
    // ldr r1, [r4, #0x34]
    // bl Handle2dMenuInput_DeleteOnFinish
    // add r6, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // bne _0222C516
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _0222C512
    // ldr r0, _0222C528 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r4, #0x74]
    // bl Get2dMenuSelection
    // add r6, r0, #0
    // ldr r0, [r4, #0x74]
    // ldr r1, [r4, #0x34]
    // bl Clear2dMenuWindowAndDelete
    // b _0222C516
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // cmp r6, #0
    // bne _0222C51E
    // mov r0, #0
    // b _0222C520
    // mov r0, #1
    // strh r0, [r5]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // nop
    // _0222C528: .word 0x000005DC
    // TODO: decompile
}



void FrtCmd_034(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp]
    // ldr r0, [r0]
    // str r0, [sp, #8]
    // ldr r0, [r0]
    // bl sub_0209680C
    // add r4, r0, #0
    // ldr r0, [sp]
    // bl FrontierScriptContext_ReadWord
    // ldr r1, [sp]
    // ldr r1, [r1, #0x1c]
    // str r1, [sp, #4]
    // add r1, r1, r0
    // ldr r0, [sp]
    // str r1, [r0, #0x1c]
    // ldr r0, [sp]
    // bl FrontierScript_ReadVar
    // add r1, sp, #0xc
    // strh r0, [r1]
    // ldrh r2, [r1]
    // ldr r0, _0222C5E4 ; =0x0000FD13
    // cmp r2, r0
    // beq _0222C5D8
    // ldr r0, [sp]
    // ldr r3, [r0, #0x1c]
    // add r2, r3, #1
    // str r2, [r0, #0x1c]
    // ldrb r0, [r3]
    // strb r0, [r1, #2]
    // ldrh r1, [r1]
    // ldr r0, _0222C5E8 ; =0x0000EEEE
    // cmp r1, r0
    // bne _0222C596
    // ldr r0, [sp, #8]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // ldr r0, [r0, #8]
    // bl Save_PlayerData_GetProfile
    // bl ov80_0222A7EC
    // add r1, sp, #0xc
    // strh r0, [r1]
    // add r0, r4, #0
    // add r1, sp, #0xc
    // bl ov80_0223947C
    // b _0222C550
    // add r0, r0, #1
    // cmp r1, r0
    // bne _0222C5CE
    // bl sub_02037474
    // cmp r0, #1
    // bne _0222C550
    // bl sub_02037454
    // add r6, r0, #0
    // mov r5, #0
    // cmp r6, #0
    // ble _0222C550
    // add r7, sp, #0xc
    // add r0, r5, #0
    // bl sub_02034818
    // bl ov80_0222A7EC
    // strh r0, [r7]
    // add r0, r4, #0
    // add r1, sp, #0xc
    // bl ov80_0223947C
    // add r5, r5, #1
    // cmp r5, r6
    // blt _0222C5B2
    // b _0222C550
    // add r0, r4, #0
    // add r1, sp, #0xc
    // bl ov80_0223947C
    // b _0222C550
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // str r1, [r0, #0x1c]
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222C5E4: .word 0x0000FD13
    // _0222C5E8: .word 0x0000EEEE
    // TODO: decompile
}



u32 FrtCmd_035(void) {
}



void FrtCmd_036(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r5, r0, #0
    // ldr r0, [r5]
    // str r0, [sp, #8]
    // ldr r0, [r0]
    // bl sub_0209680C
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl FrontierScriptContext_ReadWord
    // ldr r1, [r5, #0x1c]
    // add r4, r5, #0
    // add r0, r1, r0
    // str r1, [sp]
    // str r0, [r5, #0x1c]
    // add r4, #0x1c
    // add r6, sp, #0xc
    // mov r7, #0
    // add r0, r5, #0
    // mvn r7, r7
    // bl FrontierScript_ReadVar
    // strh r0, [r6, #4]
    // ldrh r1, [r6, #4]
    // ldr r0, _0222C6DC ; =0x0000FD13
    // cmp r1, r0
    // beq _0222C6D0
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // strh r0, [r6]
    // ldr r0, [r4]
    // ldr r1, [r5, #0x1c]
    // add r0, r0, #1
    // str r0, [r4]
    // ldrb r0, [r1]
    // strb r0, [r6, #0xa]
    // add r0, r5, #0
    // bl FrontierScriptContext_ReadHalfWord
    // sub r0, #8
    // strh r0, [r6, #6]
    // add r0, r5, #0
    // bl FrontierScriptContext_ReadHalfWord
    // sub r0, #0x10
    // strh r0, [r6, #8]
    // ldr r0, [r4]
    // ldr r1, [r5, #0x1c]
    // add r0, r0, #1
    // str r0, [r4]
    // ldrb r0, [r1]
    // strb r0, [r6, #0xb]
    // ldr r0, [r4]
    // ldr r1, [r5, #0x1c]
    // add r0, r0, #1
    // str r0, [r4]
    // ldrb r0, [r1]
    // strb r0, [r6, #0xc]
    // mov r0, #0
    // strh r0, [r6, #2]
    // ldrh r1, [r6]
    // ldr r0, _0222C6E0 ; =0x0000EEEE
    // cmp r1, r0
    // bne _0222C6AA
    // ldr r0, [sp, #8]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // ldr r0, [r0, #8]
    // bl Save_PlayerData_GetProfile
    // bl ov80_0222A7EC
    // strh r0, [r6]
    // mov r7, #0x1f
    // b _0222C6C4
    // add r0, r0, #1
    // cmp r1, r0
    // bne _0222C6C4
    // ldr r0, [r4]
    // ldr r1, [r5, #0x1c]
    // add r0, r0, #1
    // str r0, [r4]
    // ldrb r0, [r1]
    // bl sub_02034818
    // bl ov80_0222A7EC
    // strh r0, [r6]
    // ldr r0, [sp, #4]
    // add r1, sp, #0xc
    // add r2, r7, #0
    // bl ov80_02239510
    // b _0222C632
    // ldr r0, [sp]
    // str r0, [r5, #0x1c]
    // mov r0, #0
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222C6DC: .word 0x0000FD13
    // _0222C6E0: .word 0x0000EEEE
    // TODO: decompile
}



u32 FrtCmd_037(void) {
}



void FrtCmd_038(void) {
    sub_0209680C(*((u32*)*((u32*)r0)));
    FrontierScript_ReadVar(r5);
    *((u32*)(r5 + 0x1c)) = (*((u32*)(r5 + 0x1c)) + 1);
    // ldrb r5, [r2]
    // str r2, [sp]
    // add r3, sp, #0
    ov80_022395E8(r4, r0, 0);
    // ldr r0, [sp]
    GF_AssertFail();
    // ldr r0, [sp]
    ov42_02229200(r5);
}



u8 FrtCmd_039(void) {
}



void FrtCmd_040(void) {
    sub_0209680C(*((u32*)*((u32*)r0)));
    // str r0, [sp, #0xc]
    FrontierScript_ReadVar(r5);
    FrontierScriptContext_ReadWord(r5);
    ov80_02239938(*((u32*)r4), r7);
    // str r0, [sp, #8]
    GF_AssertFail();
    // add r0, #0x59
    // str r0, [sp]
    // ldr r3, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r2, r2, r6
    ov80_0222C7B0(r7, *((u32*)(r5 + 0x1c)), *((u32*)(r3 + 0x30)));
    // add r0, #0x59
    // ldrb r0, [r0]
    // add r4, #0x59
    // strb r0, [r4]
}



void ov80_0222C7B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // ldr r0, [sp, #0x1c]
    // mov r1, #0x18
    // add r7, r2, #0
    // str r3, [sp]
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0x18
    // bl MI_CpuFill8
    // str r5, [r4, #0x14]
    // ldr r0, [sp]
    // str r7, [r4, #0xc]
    // str r0, [r4, #0x10]
    // ldr r0, [sp, #0x18]
    // strh r6, [r4, #4]
    // str r0, [r4, #8]
    // ldr r0, [r5, #0x38]
    // cmp r0, #0
    // beq _0222C7E4
    // bl GF_AssertFail
    // ldr r0, _0222C7F4 ; =ov80_0222EEC8
    // ldr r2, _0222C7F8 ; =0x0000EAC4
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5, #0x38]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222C7F4: .word ov80_0222EEC8
    // _0222C7F8: .word 0x0000EAC4
    // TODO: decompile
}



void FrtCmd_041(void) {
}



void ov80_0222C80C(void) {
    // add r0, #0x59
    // ldrb r0, [r0]
}



void FrtCmd_042(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r0, #0
    // ldr r4, [r6]
    // ldr r0, [r4]
    // bl sub_0209680C
    // add r5, r0, #0
    // add r0, r6, #0
    // bl FrontierScriptContext_ReadWord
    // ldr r1, [r6, #0x1c]
    // add r0, r1, r0
    // str r0, [r6, #0x1c]
    // str r1, [sp, #4]
    // ldr r1, [r4, #0x34]
    // mov r0, #0xb8
    // bl NARC_New
    // add r7, r0, #0
    // add r0, r6, #0
    // bl FrontierScript_ReadVar
    // add r4, r0, #0
    // ldr r0, _0222C880 ; =0x0000FD13
    // cmp r4, r0
    // beq _0222C86E
    // str r4, [sp]
    // ldr r0, [r5, #0x34]
    // ldr r1, [r5, #0x38]
    // ldr r3, [r5, #4]
    // add r2, r7, #0
    // bl ov80_02239AF8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov80_0223962C
    // b _0222C848
    // add r0, r7, #0
    // bl NARC_Delete
    // ldr r0, [sp, #4]
    // str r0, [r6, #0x1c]
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222C880: .word 0x0000FD13
    // TODO: decompile
}



u32 FrtCmd_043(void) {
}



void FrtCmd_044(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl sub_0209680C
    // add r6, r0, #0
    // add r0, r5, #0
    // bl FrontierScriptContext_ReadWord
    // ldr r1, [r5, #0x1c]
    // add r4, r5, #0
    // add r0, r1, r0
    // str r1, [sp]
    // str r0, [r5, #0x1c]
    // add r4, #0x1c
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // add r7, r0, #0
    // ldr r0, _0222C948 ; =0x0000FD13
    // cmp r7, r0
    // beq _0222C93E
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // str r0, [sp, #0x14]
    // ldr r0, [r4]
    // ldr r1, [r5, #0x1c]
    // add r2, r0, #1
    // str r2, [r4]
    // ldrb r0, [r1]
    // str r0, [sp, #8]
    // add r0, r2, #1
    // ldr r1, [r5, #0x1c]
    // add r2, r7, #0
    // str r0, [r4]
    // ldrb r0, [r1]
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r0, r6, #0
    // bl ov80_0223968C
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // add r7, r0, #0
    // bl ManagedSprite_SetPositionXY
    // ldr r1, [sp, #0x14]
    // add r0, r7, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    // add r0, r6, #0
    // bl ov80_02239708
    // b _0222C8D2
    // ldr r0, [sp]
    // str r0, [r5, #0x1c]
    // mov r0, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222C948: .word 0x0000FD13
    // TODO: decompile
}



u32 FrtCmd_045(void) {
}



void FrtCmd_046(void) {
    sub_0209680C(*((u32*)*((u32*)r0)));
    FrontierScript_ReadVar(r5);
    *((u32*)(r5 + 0x1c)) = (*((u32*)(r5 + 0x1c)) + 1);
    // ldrb r5, [r2]
    ov80_02239700(r4, r0, *((u32*)(r5 + 0x1c)));
    GF_AssertFail();
    ManagedSprite_SetDrawFlag(r4, r5);
}



void FrtCmd_047(void) {
    sub_0209680C(*((u32*)*((u32*)r0)));
    FrontierScript_ReadVar(r4);
    ov80_02239700(r5, r0);
    GF_AssertFail();
    thunk_Sprite_SetFlipMode(*((u32*)r4), 1);
}



void FrtCmd_048(void) {
    sub_0209680C(*((u32*)*((u32*)r0)));
    FrontierScript_ReadVar(r5);
    FrontierScript_ReadVar(r5);
    ov80_02239700(r4, r6);
    GF_AssertFail();
    thunk_Sprite_SetOamMode(*((u32*)r4), 0);
    thunk_Sprite_SetOamMode(1);
}



u32 FrtCmd_049(void) {
}



u32 FrtCmd_050(void) {
}



void FrtCmd_051(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl FrontierScript_ReadVar
    // add r1, r4, #0
    // add r1, #0x78
    // strh r0, [r1]
    // ldr r1, _0222CA90 ; =ov80_0222CA94
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0222CA90: .word ov80_0222CA94
    // TODO: decompile
}



void ov80_0222CA94(void) {
    sub_0209680C(*((u32*)*((u32*)r0)));
    // add r1, #0x78
    // ldrh r1, [r1]
    ov80_02239700(r5);
    // add r5, #0x78
    // ldrh r1, [r5]
    ov80_02239734(r4);
    ManagedSprite_IsAnimated(r6);
}



void ov80_0222CAD0(void) {
    GF_AssertFail();
    Heap_Alloc(*((u32*)(r7 + 0x34)), (r4 << 1));
    // str r0, [sp, #8]
    FrontierScript_ReadVar(r6);
    // ldr r5, [sp, #8]
    // str r0, [sp, #4]
    FrontierScript_ReadVar(r6);
    // strh r0, [r5]
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r3, [sp, #8]
    ov80_02239BF0(*((u32*)r7), 1);
    // ldr r0, [sp, #8]
    Heap_Free();
}



void FrtCmd_083(void) {
    FrontierScript_ReadVar();
    // str r2, [sp]
    ov80_02239BF0(*((u32*)*((u32*)r4)), r0, 0, 0);
}



void FrtCmd_084(void) {
}



void FrtCmd_052(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // ldr r0, [r0, #4]
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0xb
    // add r2, r1, #0
    // mov r3, #8
    // str r1, [sp, #4]
    // bl NamingScreen_CreateArgs
    // add r2, r0, #0
    // ldr r0, _0222CB8C ; =ov80_0222CB94
    // ldr r1, _0222CB90 ; =gOverlayTemplate_NamingScreen
    // str r0, [sp]
    // ldr r0, [r4]
    // mov r3, #0
    // ldr r0, [r0]
    // bl Frontier_LaunchApplication
    // mov r0, #1
    // add sp, #8
    // pop {r4, pc}
    // _0222CB8C: .word ov80_0222CB94
    // _0222CB90: .word gOverlayTemplate_NamingScreen
    // TODO: decompile
}



void ov80_0222CB94(void) {
}



u32 FrtCmd_108(void) {
}



void FrtCmd_109(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r4, [r5]
    // bl FrontierScriptContext_ReadHalfWord
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // str r0, [sp]
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // add r6, r0, #0
    // add r0, r5, #0
    // bl FrontierScript_ReadVarPtr
    // add r7, r0, #0
    // ldr r0, _0222CC18 ; =0x0000270F
    // cmp r6, r0
    // bls _0222CBE2
    // add r6, r0, #0
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xb0
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0xb2
    // strh r1, [r0]
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // bl ov80_0222CC70
    // add r1, r4, #0
    // add r1, #0xb4
    // strh r0, [r1]
    // add r0, r4, #0
    // add r0, #0xb6
    // strh r6, [r0]
    // add r4, #0xb8
    // ldr r1, _0222CC1C ; =ov80_0222CC20
    // add r0, r5, #0
    // str r7, [r4]
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222CC18: .word 0x0000270F
    // _0222CC1C: .word ov80_0222CC20
    // TODO: decompile
}



void ov80_0222CC20(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    // add r1, #0xb0
    // str r1, [sp]
    // add r1, #0xb2
    // str r1, [sp, #4]
    // add r1, #0xb4
    // add r2, #0xb6
    // ldrh r1, [r1]
    // ldrh r2, [r2]
    sub_0202FE14(*((u32*)(r0 + 8)), r4, r4, 0);
    // add r4, #0xb8
    // strh r1, [r0]
}



void ov80_0222CC70(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CC84: ; jump table
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CCA2: ; jump table
    GF_AssertFail((*((u16*)((*((u16*)(r0 + 6)) << 0x10) + 6)) << 0x10));
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CCD0: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CCFA: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CD24: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CD4E: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CD78: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
}



void FrtCmd_110(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // mov r1, #0x75
    // add r4, r0, #0
    // mov r0, #0xb
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // mov r2, #0x75
    // mov r1, #0
    // lsl r2, r2, #2
    // add r6, r0, #0
    // bl MI_CpuFill8
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [r4, #8]
    // mov r1, #0xb
    // add r2, sp, #4
    // add r3, r6, #0
    // bl sub_0202FC90
    // ldr r1, _0222CDEC ; =0x0000045D
    // mov r0, #5
    // mov r2, #1
    // bl Sound_SetSceneAndPlayBGM
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [r5]
    // ldr r1, _0222CDF0 ; =gOverlayTemplate_Battle
    // ldr r0, [r0]
    // add r2, r6, #0
    // mov r3, #1
    // bl Frontier_LaunchApplication
    // mov r0, #1
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _0222CDEC: .word 0x0000045D
    // _0222CDF0: .word gOverlayTemplate_Battle
    // TODO: decompile
}



void FrtCmd_111(void) {
}



u32 FrtCmd_112(void) {
}



u32 FrtCmd_114(void) {
}



void FrtCmd_115(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r4, [r5]
    // ldr r0, [r4]
    // bl Frontier_GetLaunchArgs
    // add r6, r0, #0
    // add r0, r5, #0
    // bl FrontierScript_ReadVarPtr
    // mov r0, #4
    // bl sub_0201A728
    // ldr r0, [r4, #0x34]
    // bl sub_0201A748
    // ldr r0, [r6, #8]
    // mov r1, #2
    // bl Save_PrepareForAsyncWrite
    // ldr r1, _0222CE7C ; =ov80_0222CE80
    // add r0, r5, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // _0222CE7C: .word ov80_0222CE80
    // TODO: decompile
}



void ov80_0222CE80(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    Save_WriteFileAsync(*((u32*)(r0 + 8)));
    sub_0201A774();
    sub_0201A738(4);
    sub_0201A774(1);
    sub_0201A738(4);
}



u32 FrtCmd_116(void) {
}



u32 FrtCmd_117(void) {
}



void FrtCmd_119(void) {
}



void FrtCmd_120(void) {
}



u32 FrtCmd_121(void) {
}



void FrtCmd_122(void) {
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    // ldrb r4, [r2]
    FrontierScript_ReadVar((*((u32*)(r0 + 0x1c)) + 1), *((u32*)(r0 + 0x1c)));
    ov80_0222CF6C();
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(*((u32*)r5) + 0x44)), r4, r6, r0);
}



void ov80_0222CF6C(void) {
    // push {r4, lr}
    // mov r1, #0xa
    // add r4, r0, #0
    // bl _u32_div_f
    // cmp r0, #0
    // bne _0222CF7E
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #0x64
    // bl _u32_div_f
    // cmp r0, #0
    // bne _0222CF8E
    // mov r0, #2
    // pop {r4, pc}
    // mov r1, #0xfa
    // add r0, r4, #0
    // lsl r1, r1, #2
    // bl _u32_div_f
    // cmp r0, #0
    // bne _0222CFA0
    // mov r0, #3
    // pop {r4, pc}
    // ldr r1, _0222CFF4 ; =0x00002710
    // add r0, r4, #0
    // bl _u32_div_f
    // cmp r0, #0
    // bne _0222CFB0
    // mov r0, #4
    // pop {r4, pc}
    // ldr r1, _0222CFF8 ; =0x000186A0
    // add r0, r4, #0
    // bl _u32_div_f
    // cmp r0, #0
    // bne _0222CFC0
    // mov r0, #5
    // pop {r4, pc}
    // ldr r1, _0222CFFC ; =0x000F4240
    // add r0, r4, #0
    // bl _u32_div_f
    // cmp r0, #0
    // bne _0222CFD0
    // mov r0, #6
    // pop {r4, pc}
    // ldr r1, _0222D000 ; =0x00989680
    // add r0, r4, #0
    // bl _u32_div_f
    // cmp r0, #0
    // bne _0222CFE0
    // mov r0, #7
    // pop {r4, pc}
    // ldr r1, _0222D004 ; =0x05F5E100
    // add r0, r4, #0
    // bl _u32_div_f
    // cmp r0, #0
    // bne _0222CFF0
    // mov r0, #8
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // _0222CFF4: .word 0x00002710
    // _0222CFF8: .word 0x000186A0
    // _0222CFFC: .word 0x000F4240
    // _0222D000: .word 0x00989680
    // _0222D004: .word 0x05F5E100
    // TODO: decompile
}



u32 FrtCmd_123(void) {
}



void FrtCmd_124(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    *((u32*)(r5 + 0x1c)) = (*((u32*)(r5 + 0x1c)) + 1);
    // ldrb r4, [r1]
    sub_0203769C((*((u32*)(r5 + 0x1c)) + 1), *((u32*)(r5 + 0x1c)));
    // eor r0, r1
    sub_02034818(1);
    BufferPlayersName(*((u32*)(*((u32*)r5) + 0x44)), r4, r0);
}



u32 FrtCmd_125(void) {
}



void FrtCmd_126(void) {
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    // ldrb r6, [r2]
    FrontierScript_ReadVar((*((u32*)(r0 + 0x1c)) + 1), *((u32*)(r0 + 0x1c)));
    FrontierScriptContext_ReadHalfWord(r5);
    // str r0, [sp, #8]
    *((u32*)(r5 + 0x1c)) = (*((u32*)(r5 + 0x1c)) + 1);
    // ldrb r4, [r1]
    ov80_0222D0D4(r7, 0xb);
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    BufferString(*((u32*)(*((u32*)r5) + 0x44)), r6, r0);
    String_Delete(r7);
}



void ov80_0222D0D4(void) {
}



u32 FrtCmd_127(void) {
}



u32 FrtCmd_128(void) {
}



u32 FrtCmd_129(void) {
}



u32 FrtCmd_130(void) {
}



u32 FrtCmd_131(void) {
}



void FrtCmd_053(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl FrontierScript_ReadVar
    // add r1, r4, #0
    // add r1, #0x78
    // strh r0, [r1]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl sub_02037AC0
    // ldr r1, _0222D1FC ; =ov80_0222D200
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0222D1FC: .word ov80_0222D200
    // TODO: decompile
}



void ov80_0222D200(void) {
    sub_02037454();
    // add r4, #0x78
    // ldrh r0, [r4]
    sub_02037B38(((1 << 0x18) >> 0x18));
}



void FrtCmd_054(void) {
}



void FrtCmd_055(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02058284
    // ldr r1, _0222D240 ; =ov80_0222D244
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, pc}
    // _0222D240: .word ov80_0222D244
    // TODO: decompile
}



void ov80_0222D244(void) {
    sub_02037D78();
    sub_02035650();
}



u32 FrtCmd_056(void) {
}



u32 FrtCmd_057(void) {
}



void FrtCmd_058(void) {
}



void ov80_0222D2AC(void) {
}



void FrtCmd_059(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl FrontierScript_ReadVar
    // add r1, r4, #0
    // add r1, #0x78
    // strh r0, [r1]
    // ldr r1, _0222D2E8 ; =ov80_0222D2EC
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0222D2E8: .word ov80_0222D2EC
    // TODO: decompile
}



void ov80_0222D2EC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0222D324 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _0222D302
    // bl System_GetTouchNew
    // cmp r0, #0
    // beq _0222D306
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // add r0, #0x78
    // ldrh r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x78
    // add r4, #0x78
    // strh r1, [r0]
    // ldrh r0, [r4]
    // cmp r0, #0
    // bne _0222D320
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _0222D324: .word gSystem
    // TODO: decompile
}



void FrtCmd_060(void) {
}



u32 FrtCmd_061(void) {
}



u32 FrtCmd_062(void) {
}



void ov80_0222D390(void) {
    // str r0, [sp]
    // sub r2, #0x20
    // add r3, #0xc
    ov80_0223AC24(1, 0x10, 0x10, r0);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    sub_0200FBDC(0);
    sub_0200FBDC(1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0x20, 0x20, 0);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    IsPaletteFadeFinished((*((u32*)(r4 + 4)) + 1));
}



void ov80_0222D404(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222D41C: ; jump table
    // str r0, [sp]
    // sub r2, #0x20
    // add r3, #0xc
    ov80_0223AC24(1, 0x10, 0x10, r0);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    AllocWindows(0xb, 1);
    *((u32*)(r4 + 0x28)) = r0;
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    AddWindowParameterized(*((u32*)*((u32*)r4)), *((u32*)(r4 + 0x28)), 1, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    PaletteData_FillPaletteInBuffer(*((u32*)(*((u32*)r4) + 4)), 0, 2, 0);
    FillWindowPixelBuffer(*((u32*)(r4 + 0x28)), 0);
    ScheduleWindowCopyToVram(*((u32*)(r4 + 0x28)));
    ov80_0223AF30(0xb);
    *((u32*)(r4 + 0x2c)) = r0;
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // str r0, [sp]
    ov80_0223AF80(*((u32*)(r4 + 0x2c)), 1, 1, *((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov80_0223AFC4(*((u32*)(r4 + 0x2c)));
    ScheduleWindowCopyToVram(*((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    IsPaletteFadeFinished((*((u32*)(r4 + 4)) + 1));
    ov80_0223AF60(*((u32*)(r4 + 0x2c)));
    ClearWindowTilemapAndCopyToVram(*((u32*)(r4 + 0x28)));
    RemoveWindow(*((u32*)(r4 + 0x28)));
    WindowArray_Delete(*((u32*)(r4 + 0x28)), 1);
    sub_0200FBF4(0, 0);
    sub_0200FBF4(1, 0);
    BG_ClearCharDataRange(1, 0x20, 0, 0xb);
    BgClearTilemapBufferAndCommit(*((u32*)*((u32*)r4)), 1);
}



void ov80_0222D520(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222D538: ; jump table
    // str r0, [sp]
    // sub r2, #0x20
    // add r3, #0xc
    ov80_0223AC24(1, 0x10, 0x10, r0);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    AllocWindows(0xb, 1);
    *((u32*)(r4 + 0x28)) = r0;
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    AddWindowParameterized(*((u32*)*((u32*)r4)), *((u32*)(r4 + 0x28)), 1, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    PaletteData_FillPaletteInBuffer(*((u32*)(*((u32*)r4) + 4)), 0, 2, 0);
    FillWindowPixelBuffer(*((u32*)(r4 + 0x28)), 0);
    ScheduleWindowCopyToVram(*((u32*)(r4 + 0x28)));
    ov80_0223AF30(0xb);
    *((u32*)(r4 + 0x2c)) = r0;
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // str r0, [sp]
    ov80_0223AF80(*((u32*)(r4 + 0x2c)), 1, 1, *((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov80_0223B1D4(*((u32*)(r4 + 0x2c)));
    ScheduleWindowCopyToVram(*((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    IsPaletteFadeFinished((*((u32*)(r4 + 4)) + 1));
    ov80_0223AF60(*((u32*)(r4 + 0x2c)));
    ClearWindowTilemapAndCopyToVram(*((u32*)(r4 + 0x28)));
    RemoveWindow(*((u32*)(r4 + 0x28)));
    WindowArray_Delete(*((u32*)(r4 + 0x28)), 1);
    sub_0200FBF4(0, 0);
    sub_0200FBF4(1, 0);
    BG_ClearCharDataRange(1, 0x20, 0, 0xb);
    BgClearTilemapBufferAndCommit(*((u32*)*((u32*)r4)), 1);
}



void ov80_0222D63C(void) {
    // orr r0, r1
}



void ov80_0222D644(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // add r4, r1, #0
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // mov r1, #2
    // ldr r0, [r0]
    // ldr r7, [r4, #0x24]
    // bl GetBgHOffset
    // str r0, [sp, #0x20]
    // ldr r0, [r4]
    // mov r1, #2
    // ldr r0, [r0]
    // bl GetBgHOffset
    // str r0, [sp, #0x1c]
    // ldr r0, [r4]
    // mov r1, #3
    // ldr r0, [r0]
    // bl GetBgHOffset
    // str r0, [sp, #0x18]
    // ldr r0, [r4]
    // mov r1, #3
    // ldr r0, [r0]
    // bl GetBgHOffset
    // str r0, [sp, #0x14]
    // ldr r0, [r4, #0x10]
    // cmp r0, #1
    // beq _0222D686
    // b _0222D7F6
    // mov r0, #6
    // lsl r0, r0, #8
    // ldr r0, [r7, r0]
    // bl ov80_0223B60C
    // str r0, [sp, #0x24]
    // mov r0, #0
    // str r0, [sp, #0x28]
    // add r4, r7, #0
    // mov r0, #0
    // strh r0, [r4, #8]
    // strh r0, [r4, #0xa]
    // ldrsh r6, [r4, r0]
    // mov r0, #2
    // ldrsh r0, [r4, r0]
    // cmp r6, r0
    // blt _0222D6AA
    // b _0222D7CE
    // ldr r0, [sp, #0x24]
    // lsl r1, r6, #5
    // add r5, r0, r1
    // mov r2, #1
    // mov r0, #0
    // lsl r2, r2, #0xc
    // str r0, [sp]
    // add r0, sp, #0x2c
    // mov r1, #0
    // add r3, r2, #0
    // bl MTX22_2DAffine
    // mov r0, #8
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #0x20]
    // add r0, r0, r1
    // mov r1, #0xa
    // ldrsh r2, [r4, r1]
    // ldr r1, [sp, #0x1c]
    // lsl r0, r0, #0x10
    // add r1, r1, r2
    // ldr r2, _0222D964 ; =0x00000604
    // lsl r1, r1, #0x10
    // ldr r2, [r7, r2]
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // cmp r2, #2
    // bne _0222D704
    // lsr r2, r0, #0x1f
    // lsl r3, r0, #0x18
    // sub r3, r3, r2
    // mov r0, #0x18
    // ror r3, r0
    // add r0, r2, r3
    // lsr r2, r1, #0x1f
    // lsl r3, r1, #0x18
    // lsl r0, r0, #0x10
    // sub r3, r3, r2
    // mov r1, #0x18
    // ror r3, r1
    // add r1, r2, r3
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // b _0222D730
    // cmp r2, #1
    // bne _0222D730
    // cmp r0, #0
    // bge _0222D716
    // mov r2, #1
    // lsl r2, r2, #8
    // add r0, r0, r2
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // cmp r1, #0
    // bge _0222D720
    // neg r1, r1
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // lsr r2, r0, #0x1f
    // lsl r3, r0, #0x18
    // sub r3, r3, r2
    // mov r0, #0x18
    // ror r3, r0
    // add r0, r2, r3
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp]
    // mov r2, #0
    // str r1, [sp, #4]
    // add r0, r5, #0
    // add r1, sp, #0x2c
    // add r3, r2, #0
    // bl G2x_SetBGyAffine_
    // mov r0, #8
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #0x18]
    // add r0, r0, r1
    // mov r1, #0xa
    // ldrsh r2, [r4, r1]
    // ldr r1, [sp, #0x14]
    // lsl r0, r0, #0x10
    // add r1, r1, r2
    // ldr r2, _0222D964 ; =0x00000604
    // lsl r1, r1, #0x10
    // ldr r2, [r7, r2]
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // cmp r2, #2
    // bne _0222D782
    // lsr r2, r0, #0x1f
    // lsl r3, r0, #0x18
    // sub r3, r3, r2
    // mov r0, #0x18
    // ror r3, r0
    // add r0, r2, r3
    // lsr r2, r1, #0x1f
    // lsl r3, r1, #0x18
    // lsl r0, r0, #0x10
    // sub r3, r3, r2
    // mov r1, #0x18
    // ror r3, r1
    // add r1, r2, r3
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // b _0222D7AE
    // cmp r2, #1
    // bne _0222D7AE
    // cmp r0, #0
    // bge _0222D794
    // mov r2, #1
    // lsl r2, r2, #8
    // add r0, r0, r2
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // cmp r1, #0
    // bge _0222D79E
    // neg r1, r1
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // lsr r2, r0, #0x1f
    // lsl r3, r0, #0x18
    // sub r3, r3, r2
    // mov r0, #0x18
    // ror r3, r0
    // add r0, r2, r3
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp]
    // add r0, r5, #0
    // mov r2, #0
    // str r1, [sp, #4]
    // add r0, #0x10
    // add r1, sp, #0x2c
    // add r3, r2, #0
    // bl G2x_SetBGyAffine_
    // mov r0, #2
    // ldrsh r0, [r4, r0]
    // add r6, r6, #1
    // add r5, #0x20
    // cmp r6, r0
    // bge _0222D7CE
    // b _0222D6B0
    // ldr r0, [sp, #0x28]
    // add r4, #0x10
    // add r0, r0, #1
    // str r0, [sp, #0x28]
    // cmp r0, #0x60
    // bge _0222D7DC
    // b _0222D698
    // mov r0, #6
    // lsl r0, r0, #8
    // ldr r0, [r7, r0]
    // bl ov80_0223B5E8
    // add r0, r7, #0
    // bl Heap_Free
    // ldr r0, [sp, #8]
    // bl SysTask_Destroy
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #6
    // lsl r0, r0, #8
    // ldr r0, [r7, r0]
    // bl ov80_0223B60C
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r4, r7, #0
    // mov r0, #8
    // ldrsh r1, [r4, r0]
    // mov r0, #4
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    // strh r0, [r4, #8]
    // mov r0, #0xa
    // ldrsh r1, [r4, r0]
    // mov r0, #6
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    // strh r0, [r4, #0xa]
    // mov r0, #0
    // ldrsh r6, [r4, r0]
    // mov r0, #2
    // ldrsh r0, [r4, r0]
    // cmp r6, r0
    // blt _0222D82E
    // b _0222D952
    // ldr r0, [sp, #0x10]
    // lsl r1, r6, #5
    // add r5, r0, r1
    // mov r2, #1
    // mov r0, #0
    // lsl r2, r2, #0xc
    // str r0, [sp]
    // add r0, sp, #0x2c
    // mov r1, #0
    // add r3, r2, #0
    // bl MTX22_2DAffine
    // mov r0, #8
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #0x20]
    // add r0, r0, r1
    // mov r1, #0xa
    // ldrsh r2, [r4, r1]
    // ldr r1, [sp, #0x1c]
    // lsl r0, r0, #0x10
    // add r1, r1, r2
    // ldr r2, _0222D964 ; =0x00000604
    // lsl r1, r1, #0x10
    // ldr r2, [r7, r2]
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // cmp r2, #2
    // bne _0222D888
    // lsr r2, r0, #0x1f
    // lsl r3, r0, #0x18
    // sub r3, r3, r2
    // mov r0, #0x18
    // ror r3, r0
    // add r0, r2, r3
    // lsr r2, r1, #0x1f
    // lsl r3, r1, #0x18
    // lsl r0, r0, #0x10
    // sub r3, r3, r2
    // mov r1, #0x18
    // ror r3, r1
    // add r1, r2, r3
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // b _0222D8B4
    // cmp r2, #1
    // bne _0222D8B4
    // cmp r0, #0
    // bge _0222D89A
    // mov r2, #1
    // lsl r2, r2, #8
    // add r0, r0, r2
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // cmp r1, #0
    // bge _0222D8A4
    // neg r1, r1
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // lsr r2, r0, #0x1f
    // lsl r3, r0, #0x18
    // sub r3, r3, r2
    // mov r0, #0x18
    // ror r3, r0
    // add r0, r2, r3
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp]
    // mov r2, #0
    // str r1, [sp, #4]
    // add r0, r5, #0
    // add r1, sp, #0x2c
    // add r3, r2, #0
    // bl G2x_SetBGyAffine_
    // mov r0, #8
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #0x18]
    // add r0, r0, r1
    // mov r1, #0xa
    // ldrsh r2, [r4, r1]
    // ldr r1, [sp, #0x14]
    // lsl r0, r0, #0x10
    // add r1, r1, r2
    // ldr r2, _0222D964 ; =0x00000604
    // lsl r1, r1, #0x10
    // ldr r2, [r7, r2]
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // cmp r2, #2
    // bne _0222D906
    // lsr r2, r0, #0x1f
    // lsl r3, r0, #0x18
    // sub r3, r3, r2
    // mov r0, #0x18
    // ror r3, r0
    // add r0, r2, r3
    // lsr r2, r1, #0x1f
    // lsl r3, r1, #0x18
    // lsl r0, r0, #0x10
    // sub r3, r3, r2
    // mov r1, #0x18
    // ror r3, r1
    // add r1, r2, r3
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // b _0222D932
    // cmp r2, #1
    // bne _0222D932
    // cmp r0, #0
    // bge _0222D918
    // mov r2, #1
    // lsl r2, r2, #8
    // add r0, r0, r2
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // cmp r1, #0
    // bge _0222D922
    // neg r1, r1
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // lsr r2, r0, #0x1f
    // lsl r3, r0, #0x18
    // sub r3, r3, r2
    // mov r0, #0x18
    // ror r3, r0
    // add r0, r2, r3
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp]
    // add r0, r5, #0
    // mov r2, #0
    // str r1, [sp, #4]
    // add r0, #0x10
    // add r1, sp, #0x2c
    // add r3, r2, #0
    // bl G2x_SetBGyAffine_
    // mov r0, #2
    // ldrsh r0, [r4, r0]
    // add r6, r6, #1
    // add r5, #0x20
    // cmp r6, r0
    // bge _0222D952
    // b _0222D834
    // ldr r0, [sp, #0xc]
    // add r4, #0x10
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // cmp r0, #0x60
    // bge _0222D960
    // b _0222D808
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // _0222D964: .word 0x00000604
    // TODO: decompile
}



void ov80_0222D968(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _0222D97E
    // cmp r0, #1
    // beq _0222D99A
    // cmp r0, #2
    // beq _0222DA54
    // b _0222DA8E
    // mov r1, #0x10
    // mov r0, #2
    // add r2, r1, #0
    // add r3, r5, #0
    // str r0, [sp]
    // mov r0, #1
    // sub r2, #0x20
    // add r3, #0xc
    // bl ov80_0223AC24
    // ldr r0, [r5, #4]
    // add r0, r0, #1
    // str r0, [r5, #4]
    // b _0222DA94
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // beq _0222DA94
    // add r0, sp, #4
    // mov r1, #0
    // mov r2, #0x20
    // bl MI_CpuFill8
    // mov r0, #0
    // str r0, [r5, #0x10]
    // ldr r1, _0222DA9C ; =0x00000608
    // mov r0, #0x65
    // bl Heap_Alloc
    // ldr r1, _0222DAA0 ; =0x00000604
    // str r0, [r5, #0x24]
    // mov r2, #1
    // str r2, [r0, r1]
    // ldr r0, _0222DAA4 ; =0x04000020
    // add r1, sp, #4
    // mov r2, #0x65
    // bl ov80_0223B544
    // mov r7, #0
    // mov r1, #6
    // ldr r2, [r5, #0x24]
    // lsl r1, r1, #8
    // str r0, [r2, r1]
    // add r6, r7, #0
    // add r4, r7, #0
    // ldr r0, [r5, #0x24]
    // strh r6, [r0, r4]
    // ldr r1, [r5, #0x24]
    // add r0, r1, r4
    // ldrsh r1, [r1, r4]
    // add r1, r1, #2
    // strh r1, [r0, #2]
    // mov r0, #0x31
    // sub r2, r0, r7
    // lsr r1, r2, #0x1f
    // lsl r3, r2, #0x1d
    // sub r3, r3, r1
    // mov r0, #0x1d
    // ror r3, r0
    // add r0, r1, r3
    // ldr r1, [r5, #0x24]
    // add r1, r1, r4
    // strh r0, [r1, #4]
    // asr r0, r2, #1
    // lsr r0, r0, #0x1e
    // add r0, r2, r0
    // asr r1, r0, #2
    // ldr r0, [r5, #0x24]
    // add r0, r0, r4
    // strh r1, [r0, #6]
    // ldr r0, [r5, #0x24]
    // add r1, r0, r4
    // mov r0, #0
    // strh r0, [r1, #8]
    // ldr r0, [r5, #0x24]
    // add r1, r0, r4
    // mov r0, #0
    // strh r0, [r1, #0xa]
    // add r1, r0, #0
    // bl ov80_0222D63C
    // ldr r1, [r5, #0x24]
    // add r7, r7, #1
    // add r1, r1, r4
    // str r0, [r1, #0xc]
    // add r6, r6, #2
    // add r4, #0x10
    // cmp r7, #0x60
    // blt _0222D9D6
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x28
    // add r1, r0, #0
    // sub r1, #0x38
    // mov r2, #0
    // mov r3, #0x1e
    // bl StartBrightnessTransition
    // mov r2, #1
    // ldr r0, _0222DAA8 ; =ov80_0222D644
    // add r1, r5, #0
    // lsl r2, r2, #0xc
    // bl SysTask_CreateOnMainQueue
    // ldr r0, [r5, #4]
    // add r0, r0, #1
    // str r0, [r5, #4]
    // b _0222DA94
    // mov r0, #1
    // bl IsBrightnessTransitionActive
    // cmp r0, #0
    // beq _0222DA94
    // mov r0, #1
    // str r0, [r5, #0x10]
    // mov r0, #3
    // mov r1, #0
    // bl ToggleBgLayer
    // ldr r0, [r5]
    // mov r2, #0
    // ldr r0, [r0]
    // mov r1, #3
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r5]
    // mov r1, #3
    // ldr r0, [r0]
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r5, #4]
    // add r0, r0, #1
    // str r0, [r5, #4]
    // b _0222DA94
    // add sp, #0x24
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222DA9C: .word 0x00000608
    // _0222DAA0: .word 0x00000604
    // _0222DAA4: .word 0x04000020
    // _0222DAA8: .word ov80_0222D644
    // TODO: decompile
}



void ov80_0222DAAC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _0222DAC2
    // cmp r0, #1
    // beq _0222DADE
    // cmp r0, #2
    // beq _0222DBBC
    // b _0222DBF6
    // mov r1, #0x10
    // mov r0, #2
    // add r2, r1, #0
    // add r3, r5, #0
    // str r0, [sp]
    // mov r0, #1
    // sub r2, #0x20
    // add r3, #0xc
    // bl ov80_0223AC24
    // ldr r0, [r5, #4]
    // add r0, r0, #1
    // str r0, [r5, #4]
    // b _0222DBFC
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // bne _0222DAE6
    // b _0222DBFC
    // add r0, sp, #4
    // mov r1, #0
    // mov r2, #0x20
    // bl MI_CpuFill8
    // mov r0, #0
    // str r0, [r5, #0x10]
    // ldr r1, _0222DC04 ; =0x00000608
    // mov r0, #0x65
    // bl Heap_Alloc
    // ldr r1, _0222DC08 ; =0x00000604
    // str r0, [r5, #0x24]
    // mov r2, #2
    // str r2, [r0, r1]
    // ldr r0, _0222DC0C ; =0x04000020
    // add r1, sp, #4
    // mov r2, #0x65
    // bl ov80_0223B544
    // mov r6, #0
    // mov r1, #6
    // ldr r2, [r5, #0x24]
    // lsl r1, r1, #8
    // str r0, [r2, r1]
    // add r7, r6, #0
    // add r4, r6, #0
    // ldr r0, [r5, #0x24]
    // lsr r2, r6, #0x1f
    // strh r7, [r0, r4]
    // ldr r1, [r5, #0x24]
    // add r0, r1, r4
    // ldrsh r1, [r1, r4]
    // add r1, r1, #2
    // strh r1, [r0, #2]
    // mov r0, #0x30
    // sub r1, r0, r6
    // asr r0, r1, #2
    // lsr r0, r0, #0x1d
    // add r0, r1, r0
    // asr r0, r0, #3
    // add r1, r0, #1
    // ldr r0, [r5, #0x24]
    // add r0, r0, r4
    // strh r1, [r0, #4]
    // lsl r1, r6, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // beq _0222DB5A
    // ldr r0, [r5, #0x24]
    // mov r1, #4
    // add r0, r0, r4
    // ldrsh r2, [r0, r1]
    // sub r1, r1, #5
    // mul r1, r2
    // strh r1, [r0, #4]
    // cmp r6, #0x30
    // bge _0222DB66
    // ldr r0, [r5, #0x24]
    // add r0, r0, r4
    // strh r6, [r0, #6]
    // b _0222DB70
    // mov r0, #0x60
    // sub r1, r0, r6
    // ldr r0, [r5, #0x24]
    // add r0, r0, r4
    // strh r1, [r0, #6]
    // ldr r0, [r5, #0x24]
    // add r1, r0, r4
    // mov r0, #0
    // strh r0, [r1, #8]
    // ldr r0, [r5, #0x24]
    // add r1, r0, r4
    // mov r0, #0
    // strh r0, [r1, #0xa]
    // add r1, r0, #0
    // bl ov80_0222D63C
    // ldr r1, [r5, #0x24]
    // add r6, r6, #1
    // add r1, r1, r4
    // str r0, [r1, #0xc]
    // add r7, r7, #2
    // add r4, #0x10
    // cmp r6, #0x60
    // blt _0222DB1C
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x28
    // add r1, r0, #0
    // sub r1, #0x38
    // mov r2, #0
    // mov r3, #0x1c
    // bl StartBrightnessTransition
    // mov r2, #1
    // ldr r0, _0222DC10 ; =ov80_0222D644
    // add r1, r5, #0
    // lsl r2, r2, #0xc
    // bl SysTask_CreateOnMainQueue
    // ldr r0, [r5, #4]
    // add r0, r0, #1
    // str r0, [r5, #4]
    // b _0222DBFC
    // mov r0, #1
    // bl IsBrightnessTransitionActive
    // cmp r0, #0
    // beq _0222DBFC
    // mov r0, #1
    // str r0, [r5, #0x10]
    // mov r0, #3
    // mov r1, #0
    // bl ToggleBgLayer
    // ldr r0, [r5]
    // mov r2, #0
    // ldr r0, [r0]
    // mov r1, #3
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r5]
    // mov r1, #3
    // ldr r0, [r0]
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r5, #4]
    // add r0, r0, #1
    // str r0, [r5, #4]
    // b _0222DBFC
    // add sp, #0x24
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222DC04: .word 0x00000608
    // _0222DC08: .word 0x00000604
    // _0222DC0C: .word 0x04000020
    // _0222DC10: .word ov80_0222D644
    // TODO: decompile
}



void ov80_0222DC14(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _0222DC26
    // cmp r0, #1
    // beq _0222DC38
    // b _0222DC62
    // add r0, r4, #0
    // add r0, #0x18
    // mov r1, #0x65
    // bl ov80_0223B424
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // b _0222DC62
    // mov r0, #0x12
    // lsl r0, r0, #0xc
    // str r0, [sp]
    // mov r0, #0x19
    // lsl r0, r0, #4
    // str r0, [sp, #4]
    // ldr r0, _0222DC68 ; =0x0400001C
    // mov r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // mov r0, #4
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // ldr r3, _0222DC6C ; =0x000002AA
    // add r0, #0x18
    // mov r2, #0xbf
    // bl ov80_0223B440
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // mov r0, #1
    // add sp, #0x14
    // pop {r3, r4, pc}
    // _0222DC68: .word 0x0400001C
    // _0222DC6C: .word 0x000002AA
    // TODO: decompile
}



void FrtCmd_063(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // add r1, r5, #0
    // add r1, #0x78
    // strh r0, [r1]
    // ldr r1, _0222DCE8 ; =0x0000045D
    // mov r0, #5
    // mov r2, #1
    // bl Sound_SetSceneAndPlayBGM
    // mov r0, #0xb
    // mov r1, #0x30
    // bl Heap_Alloc
    // add r4, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // str r0, [r4, #0x14]
    // mov r0, #0
    // str r0, [r4, #4]
    // add r0, r5, #0
    // add r0, #0x78
    // ldrh r0, [r0]
    // str r0, [r4, #8]
    // ldr r0, [r5]
    // bl FrontierSystem_GetFrontierMap
    // str r0, [r4]
    // ldr r0, [r5]
    // add r1, r4, #0
    // ldr r0, [r0]
    // bl Frontier_SetData
    // ldr r1, _0222DCEC ; =ov80_0222DCF0
    // add r0, r5, #0
    // bl FrontierScriptContext_Pause
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // mov r2, #2
    // ldr r0, [r0, #4]
    // add r3, r1, #0
    // bl PaletteData_FillPaletteInBuffer
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _0222DCE8: .word 0x0000045D
    // _0222DCEC: .word ov80_0222DCF0
    // TODO: decompile
}



void ov80_0222DCF0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r4, r0, #0
    // ldr r1, [r4, #8]
    // lsl r2, r1, #2
    // ldr r1, _0222DD38 ; =ov80_0223B9EC
    // ldr r1, [r1, r2]
    // blx r1
    // add r6, r0, #0
    // bne _0222DD2C
    // mov r0, #0
    // add r1, r0, #0
    // bl sub_0200FBF4
    // mov r0, #1
    // mov r1, #0
    // bl sub_0200FBF4
    // ldr r0, [r5]
    // ldr r1, [r4, #0x14]
    // ldr r0, [r0]
    // bl Frontier_SetData
    // add r0, r4, #0
    // bl Heap_Free
    // cmp r6, #0
    // bne _0222DD34
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _0222DD38: .word ov80_0223B9EC
    // TODO: decompile
}



void FrtCmd_064(void) {
    FrontierScript_ReadVarPtr();
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r5)));
    Save_PlayerData_GetProfile(*((u32*)(r0 + 8)));
    PlayerProfile_GetTrainerGender();
    // strh r0, [r4]
}



u32 FrtCmd_065(void) {
}



u32 FrtCmd_066(void) {
}



u32 FrtCmd_067(void) {
}



void FrtCmd_068(void) {
}



void ov80_0222DE00(void) {
    sub_0209680C(*((u32*)*((u32*)r0)));
    ov80_02239A74(*((u32*)(r0 + 0x10)));
}



void FrtCmd_076(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl sub_0209680C
    // add r5, r0, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // add r5, #0xa4
    // cmp r0, #0
    // beq _0222DE3E
    // bl GF_AssertFail
    // ldr r0, [r5]
    // bl SysTask_Destroy
    // add r0, r4, #0
    // bl FrontierScript_ReadVar
    // add r6, r0, #0
    // add r0, r4, #0
    // bl FrontierScript_ReadVar
    // add r7, r0, #0
    // add r0, r4, #0
    // bl FrontierScript_ReadVar
    // str r0, [sp]
    // add r0, r4, #0
    // bl FrontierScript_ReadVar
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #0xc
    // bl MI_CpuFill8
    // strh r6, [r5, #4]
    // ldr r0, [sp]
    // strh r7, [r5, #6]
    // strb r0, [r5, #9]
    // ldr r0, _0222DE84 ; =ov80_0222F4F0
    // ldr r2, _0222DE88 ; =0x00011170
    // add r1, r5, #0
    // strb r4, [r5, #0xa]
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5]
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222DE84: .word ov80_0222F4F0
    // _0222DE88: .word 0x00011170
    // TODO: decompile
}



void FrtCmd_077(void) {
}



void ov80_0222DE9C(void) {
}



void FrtCmd_078(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl sub_0209680C
    // add r4, r0, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // add r4, #0xb0
    // cmp r0, #0
    // beq _0222DEDA
    // bl GF_AssertFail
    // ldr r0, [r4]
    // bl SysTask_Destroy
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0xc
    // bl MI_CpuFill8
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // strb r0, [r4, #4]
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // strb r0, [r4, #5]
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // strb r0, [r4, #6]
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // strb r0, [r4, #7]
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // strh r0, [r4, #8]
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // strb r0, [r4, #0xa]
    // mov r2, #0x4b
    // ldr r0, _0222DF28 ; =ov80_0222F53C
    // add r1, r4, #0
    // lsl r2, r2, #2
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0222DF28: .word ov80_0222F53C
    // TODO: decompile
}



void FrtCmd_079(void) {
}



void ov80_0222DF3C(void) {
}



void FrtCmd_150(void) {
}



void FrtCmd_069(void) {
    FrontierSystem_GetFrontierMap(*((u32*)r0));
    FrontierScript_ReadVar(r5);
    // str r0, [sp, #0x18]
    FrontierScript_ReadVar(r5);
    FrontierScript_ReadVar(r5);
    FrontierScriptContext_ReadHalfWord(r5);
    // str r0, [sp, #0x1c]
    FrontierScriptContext_ReadHalfWord(r5);
    FrontierScriptContext_ReadHalfWord(r5);
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r5)));
    SaveArray_Party_Get(*((u32*)(r0 + 8)));
    // ldr r1, [sp, #0x18]
    Party_GetMonByIndex();
    // str r4, [sp]
    // str r6, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // ldr r3, [sp, #0x1c]
    ov80_0222F030(r7, r0, 0xb);
}



u32 FrtCmd_070(void) {
}



void FrtCmd_071(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, [r5]
    // bl FrontierSystem_GetFrontierMap
    // add r4, r0, #0
    // add r0, r5, #0
    // bl FrontierScriptContext_ReadHalfWord
    // add r1, sp, #0x10
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, #2
    // add r2, sp, #0x10
    // bl ov80_022398E4
    // ldr r0, [r4, #4]
    // add r1, sp, #0x10
    // str r0, [sp]
    // add r0, r5, #0
    // add r0, #0x78
    // str r0, [sp, #4]
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #8]
    // mov r0, #0
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #0xc]
    // ldr r1, [r4]
    // ldr r2, [r4, #0x34]
    // ldr r3, [r4, #0x38]
    // add r0, r6, #0
    // bl ov80_0223A00C
    // ldr r1, _0222E054 ; =0x0000047B
    // mov r0, #5
    // mov r2, #1
    // bl Sound_SetSceneAndPlayBGM
    // ldr r1, _0222E058 ; =ov80_0222E05C
    // add r0, r5, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0222E054: .word 0x0000047B
    // _0222E058: .word ov80_0222E05C
    // TODO: decompile
}



void ov80_0222E05C(void) {
}



u32 FrtCmd_072(void) {
}



u32 FrtCmd_073(void) {
}



u32 FrtCmd_074(void) {
}



u32 FrtCmd_075(void) {
}



u32 FrtCmd_113(void) {
}



u32 FrtCmd_183(void) {
}



u32 FrtCmd_200(void) {
}



u32 FrtCmd_201(void) {
}



void FrtCmd_203(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl FrontierScript_ReadVar
    // add r1, r4, #0
    // add r1, #0x78
    // strh r0, [r1]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl sub_02037AC0
    // ldr r1, _0222E194 ; =ov80_0222E198
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0222E194: .word ov80_0222E198
    // TODO: decompile
}



void ov80_0222E198(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl sub_02037454
    // cmp r0, #2
    // bge _0222E1A8
    // mov r4, #1
    // b _0222E1B8
    // add r0, r5, #0
    // add r0, #0x78
    // ldrh r0, [r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl sub_02037B38
    // add r4, r0, #0
    // cmp r4, #0
    // bne _0222E210
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r6, r0, #0
    // beq _0222E210
    // add r0, #0x6f
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0222E210
    // add r0, r6, #0
    // add r0, #0x74
    // ldrh r1, [r0]
    // cmp r1, #1
    // beq _0222E1E0
    // ldr r0, _0222E214 ; =0x0000FFFE
    // cmp r1, r0
    // bne _0222E1EA
    // ldr r0, [r5]
    // mov r4, #1
    // add r0, #0x39
    // strb r4, [r0]
    // b _0222E210
    // cmp r1, #0
    // bne _0222E210
    // bl sub_0203769C
    // mov r1, #1
    // eor r0, r1
    // bl sub_02034818
    // bl PlayerProfile_GetVersion
    // cmp r0, #0xc
    // bne _0222E210
    // add r0, r6, #0
    // mov r1, #0
    // add r0, #0x6f
    // strb r1, [r0]
    // add r0, r6, #0
    // bl sub_02096BF8
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _0222E214: .word 0x0000FFFE
    // TODO: decompile
}



void FrtCmd_204(void) {
}



void FrtCmd_205(void) {
    // add r0, #0x39
    // strb r1, [r0]
}



void FrtCmd_206(void) {
}



void FrtCmd_207(void) {
}



void ov80_0222E268(void) {
    // str r3, [sp, #4]
    // ldr r4, [sp, #0x20]
    ov80_0222E2B8();
    ov80_0222E328(r5, r6, r7);
    FrontierSystem_GetFrontierMap(r5);
    Frontier_GetLaunchArgs(*((u32*)(r0 + 8)));
    Options_GetTextFrameDelay(*((u32*)(r0 + 4)));
    // ldrb r2, [r4]
    // str r0, [sp]
    // ldr r3, [sp, #4]
    ov80_0222E344(r5, *((u8*)(r4 + 2)), r0);
}



void ov80_0222E2B8(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // bl FrontierSystem_GetFrontierMap
    // add r1, r4, #0
    // add r1, #0x5a
    // ldrb r1, [r1]
    // cmp r1, #0
    // bne _0222E310
    // mov r1, #0x13
    // str r1, [sp]
    // mov r1, #0x1b
    // str r1, [sp, #4]
    // mov r1, #4
    // str r1, [sp, #8]
    // mov r1, #0xd
    // str r1, [sp, #0xc]
    // ldr r1, _0222E320 ; =0x0000036D
    // mov r2, #1
    // str r1, [sp, #0x10]
    // add r1, r4, #0
    // ldr r0, [r0]
    // add r1, #0x64
    // mov r3, #2
    // bl AddWindowParameterized
    // add r0, r4, #0
    // add r0, #0x64
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // ldr r2, _0222E324 ; =0x000003E2
    // add r0, #0x64
    // mov r1, #0
    // mov r3, #0xb
    // bl DrawFrameAndWindow2
    // mov r0, #1
    // add r4, #0x5a
    // add sp, #0x14
    // strb r0, [r4]
    // pop {r3, r4, pc}
    // add r4, #0x64
    // add r0, r4, #0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // add sp, #0x14
    // pop {r3, r4, pc}
    // nop
    // _0222E320: .word 0x0000036D
    // _0222E324: .word 0x000003E2
    // TODO: decompile
}



void ov80_0222E328(void) {
}



void ov80_0222E344(void) {
    TextFlags_SetCanABSpeedUpPrint(r3);
    // ldr r0, [sp, #0x20]
    TextFlags_SetAutoScrollParam();
    TextFlags_SetCanTouchSpeedUpPrint(0);
    TextFlags_SetCanTouchSpeedUpPrint(1);
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0x64
    AddTextPrinterParameterized(r5, r6, *((u32*)(r5 + 0x48)), 0);
    // add r5, #0x50
    // strb r0, [r5]
}



void ov80_0222E38C(void) {
    // add r0, #0x5a
    // ldrb r0, [r0]
    GF_AssertFail();
    // add r0, #0x64
    ClearFrameAndWindow2(r4, 0);
    // add r0, #0x64
    RemoveWindow(r4);
    // add r4, #0x5a
    // strb r0, [r4]
}



void ov80_0222E3B8(void) {
    ov80_0222E2B8();
    // add r3, sp, #8
    // str r0, [sp]
    ov80_0222E400(*((u32*)(r5 + 0x48)), r6, r7, *((u16*)(r3 + 0x10)));
    // add r0, sp, #8
    // str r0, [sp]
    ov80_0222E344(r5, 1, r4, *((u8*)(r0 + 0x18)));
    // str r2, [sp]
    ov80_0222E344(r5, 1, 0);
}



void ov80_0222E400(void) {
    // add r0, sp, #0
    MailMsg_Init();
    // add r0, sp, #0
    MailMsg_SetMsgBankAndNum(r4, r6);
    // add r0, sp, #0
    MailMsg_SetFieldI(0, r7);
    // add r2, sp, #0x10
    // add r0, sp, #0
    MailMsg_SetFieldI(1, *((u16*)(r2 + 0x10)));
    // add r0, sp, #0
    MailMsg_GetExpandedString(0x20);
    String_Copy(r5, r0);
    String_Delete(r4);
}



void ov80_0222E450(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // ldr r1, [sp, #0x28]
    // add r7, r0, #0
    // add r4, r2, #0
    // add r5, r3, #0
    // cmp r1, #0
    // bne _0222E47E
    // ldr r3, [r7, #0x34]
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xbf
    // bl NewMsgDataFromNarc
    // add r1, r6, #0
    // add r1, #0x8c
    // str r0, [r1]
    // add r0, r6, #0
    // add r0, #0x97
    // ldrb r1, [r0]
    // mov r0, #2
    // orr r1, r0
    // b _0222E48E
    // add r0, r6, #0
    // add r0, #0x8c
    // str r1, [r0]
    // add r0, r6, #0
    // add r0, #0x97
    // ldrb r1, [r0]
    // mov r0, #2
    // bic r1, r0
    // add r0, r6, #0
    // add r0, #0x97
    // strb r1, [r0]
    // add r0, r6, #0
    // ldr r1, [sp, #0x24]
    // add r0, #0x90
    // str r1, [r0]
    // add r0, r6, #0
    // ldr r1, [sp, #0x20]
    // str r7, [r6]
    // add r0, #0xa0
    // str r1, [r0]
    // add r1, r6, #0
    // add r1, #0xa0
    // ldr r1, [r1]
    // mov r0, #0
    // strh r0, [r1]
    // add r1, r6, #0
    // add r1, #0x97
    // ldrb r3, [r1]
    // mov r1, #1
    // bic r3, r1
    // add r1, sp, #8
    // ldrb r2, [r1, #0x14]
    // mov r1, #1
    // and r1, r2
    // add r2, r3, #0
    // orr r2, r1
    // add r1, r6, #0
    // add r1, #0x97
    // strb r2, [r1]
    // add r1, sp, #8
    // add r2, r6, #0
    // ldrb r1, [r1, #0x10]
    // add r2, #0x96
    // mov r3, #3
    // strb r1, [r2]
    // add r2, r6, #0
    // add r2, #0x98
    // strb r4, [r2]
    // add r2, r6, #0
    // add r2, #0x99
    // strb r5, [r2]
    // add r2, r6, #0
    // add r2, #0x9b
    // strb r0, [r2]
    // add r2, r7, #0
    // add r2, #0x64
    // str r2, [r6, #0x18]
    // add r2, r6, #0
    // add r2, #0x94
    // strb r3, [r2]
    // mov r2, #0xb5
    // lsl r2, r2, #2
    // strh r1, [r6, r2]
    // add r3, r6, #0
    // add r2, r0, #0
    // add r1, r3, #0
    // add r1, #0xb4
    // str r2, [r1]
    // add r1, r3, #0
    // add r1, #0xb8
    // add r0, r0, #1
    // add r3, #8
    // str r2, [r1]
    // cmp r0, #0x1c
    // blt _0222E500
    // add r0, r6, #0
    // add r1, r6, #0
    // mov r5, #0
    // mov r4, #0xff
    // mov r3, #0x6f
    // lsl r3, r3, #2
    // str r5, [r0, r3]
    // add r3, r3, #4
    // str r5, [r0, r3]
    // mov r3, #0xa7
    // lsl r3, r3, #2
    // strh r4, [r1, r3]
    // add r2, r2, #1
    // add r0, #8
    // add r1, r1, #2
    // cmp r2, #0x1c
    // blt _0222E51C
    // add r4, r6, #0
    // ldr r1, [r7, #0x34]
    // mov r0, #0x50
    // bl String_New
    // str r0, [r4, #0x1c]
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #0x1c
    // blt _0222E538
    // add r6, #0xa0
    // ldr r1, _0222E554 ; =0x0000EEEE
    // ldr r0, [r6]
    // strh r1, [r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222E554: .word 0x0000EEEE
    // TODO: decompile
}



void ov80_0222E558(void) {
    // str r2, [sp, #0x14]
    Heap_Alloc(*((u32*)(r0 + 0x34)), (0xb6 << 2));
    memset(0, 0, (0xb6 << 2));
    // str r4, [sp]
    // add r0, sp, #0x20
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    ov80_0222E450(r5, r6, r7);
}



void ov80_0222E5A8(void) {
}



void ov80_0222E5B0(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, [r5]
    // bl FrontierSystem_GetFrontierMap
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov80_0222E714
    // mov r1, #7
    // tst r1, r0
    // bne _0222E5CE
    // lsr r0, r0, #3
    // b _0222E5D2
    // lsr r0, r0, #3
    // add r0, r0, #1
    // add r1, r5, #0
    // add r1, #0x97
    // ldrb r1, [r1]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x1f
    // beq _0222E5EC
    // add r1, r5, #0
    // add r1, #0x98
    // ldrb r1, [r1]
    // sub r2, r1, r0
    // add r1, r5, #0
    // add r1, #0x98
    // strb r2, [r1]
    // add r1, r5, #0
    // add r1, #0x97
    // ldrb r1, [r1]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1f
    // beq _0222E60E
    // add r1, r5, #0
    // add r1, #0x99
    // ldrb r2, [r1]
    // add r1, r5, #0
    // add r1, #0x9b
    // ldrb r1, [r1]
    // lsl r1, r1, #1
    // sub r2, r2, r1
    // add r1, r5, #0
    // add r1, #0x99
    // strb r2, [r1]
    // add r1, r5, #0
    // add r1, #0x99
    // ldrb r1, [r1]
    // lsl r0, r0, #0x18
    // add r3, r5, #0
    // str r1, [sp]
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r1, r5, #0
    // mov r2, #1
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r3, #0x98
    // ldrb r3, [r3]
    // ldr r0, [r4]
    // add r1, #8
    // bl AddWindowParameterized
    // add r0, r5, #0
    // ldr r2, _0222E688 ; =0x000003D9
    // add r0, #8
    // mov r1, #1
    // mov r3, #0xc
    // bl DrawFrameAndWindow1
    // add r0, r5, #0
    // bl ov80_0222E754
    // ldr r2, [r5]
    // add r1, r5, #0
    // add r1, #0x96
    // ldr r2, [r2, #0x34]
    // add r0, r5, #0
    // lsl r2, r2, #0x18
    // ldrb r1, [r1]
    // add r0, #0xa4
    // lsr r2, r2, #0x18
    // bl Create2dMenu
    // add r1, r5, #0
    // add r1, #0xb0
    // str r0, [r1]
    // add r0, r5, #0
    // bl ov80_0222E8FC
    // ldr r0, _0222E68C ; =ov80_0222E7C8
    // add r1, r5, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5, #4]
    // add sp, #0x14
    // pop {r4, r5, pc}
    // nop
    // _0222E688: .word 0x000003D9
    // _0222E68C: .word ov80_0222E7C8
    // TODO: decompile
}



void ov80_0222E690(void) {
    // str r1, [sp]
    String_New(0x50, *((u32*)(*((u32*)r0) + 0x34)));
    // add r0, #0x8c
    // ldr r1, [sp]
    ReadMsgDataIntoString(*((u32*)r5), r0);
    // add r1, #0x9b
    // ldrb r1, [r1]
    // add r0, #0x90
    // add r1, r5, r1
    StringExpandPlaceholders(*((u32*)r5), *((u32*)((r5 << 2) + 0x1c)), r4);
    // add r0, #0x9b
    // ldrb r1, [r0]
    // add r0, r5, r0
    // add r1, r5, r1
    // add r1, #0xb4
    // str r0, [r1]
    String_Delete(r4, (r1 << 3));
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r1, r5, r0
    // strh r6, [r1, r0]
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r0, r5, r0
    // add r0, #0xb8
    // str r7, [r0]
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r5, #0x9b
    // strb r0, [r5]
}



void ov80_0222E714(void) {
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r0, #0xb4
    FontID_String_GetWidth(0, *((u32*)r0), 0);
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r5, #8
    // add r6, #0xc
}



void ov80_0222E754(void) {
    // add r2, #0xb4
    // add r1, #0xa4
    // str r2, [r1]
    // add r2, #8
    // add r1, #0xa8
    // str r2, [r1]
    // add r1, #0xac
    // strb r2, [r1]
    // add r1, #0xad
    // strb r2, [r1]
    // add r1, #0x9b
    // ldrb r2, [r1]
    // add r1, #0xae
    // strb r2, [r1]
    // add r2, #0xaf
    // ldrb r3, [r2]
    // bic r3, r2
    // add r2, #0xaf
    // strb r3, [r2]
    // add r2, #0xaf
    // ldrb r3, [r2]
    // add r1, #0xaf
    // bic r3, r2
    // add r2, #0xaf
    // strb r3, [r2]
    // add r0, #0x9b
    // ldrb r0, [r0]
    // ldrb r2, [r1]
    // bic r2, r0
    // orr r0, r2
    // strb r0, [r1]
    // bic r2, r0
    // strb r2, [r1]
}



void ov80_0222E7C8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // add r0, #0x94
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0222E7E4
    // add r0, r5, #0
    // add r0, #0x94
    // ldrb r0, [r0]
    // add r5, #0x94
    // sub r0, r0, #1
    // strb r0, [r5]
    // pop {r3, r4, r5, pc}
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0222E87E
    // add r0, r5, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // bl Handle2dMenuInput
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _0222E814
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _0222E814
    // add r0, r5, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // bl Get2dMenuSelection
    // add r4, r0, #0
    // ldr r0, _0222E880 ; =gSystem
    // mov r1, #0x40
    // ldr r0, [r0, #0x4c]
    // tst r1, r0
    // bne _0222E830
    // mov r1, #0x80
    // tst r1, r0
    // bne _0222E830
    // mov r1, #0x20
    // tst r1, r0
    // bne _0222E830
    // mov r1, #0x10
    // tst r0, r1
    // beq _0222E836
    // add r0, r5, #0
    // bl ov80_0222E8FC
    // add r0, r5, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // ldr r1, _0222E884 ; =0x0000EEDD
    // ldrh r2, [r0]
    // cmp r2, r1
    // bne _0222E84C
    // add r0, r5, #0
    // bl ov80_0222E88C
    // pop {r3, r4, r5, pc}
    // mov r1, #1
    // mvn r1, r1
    // cmp r4, r1
    // beq _0222E85C
    // add r1, r1, #1
    // cmp r4, r1
    // beq _0222E87E
    // b _0222E876
    // add r1, r5, #0
    // add r1, #0x97
    // ldrb r1, [r1]
    // lsl r1, r1, #0x1f
    // lsr r1, r1, #0x1f
    // cmp r1, #1
    // bne _0222E87E
    // ldr r1, _0222E888 ; =0x0000FFFE
    // strh r1, [r0]
    // add r0, r5, #0
    // bl ov80_0222E88C
    // pop {r3, r4, r5, pc}
    // strh r4, [r0]
    // add r0, r5, #0
    // bl ov80_0222E88C
    // pop {r3, r4, r5, pc}
    // _0222E880: .word gSystem
    // _0222E884: .word 0x0000EEDD
    // _0222E888: .word 0x0000FFFE
    // TODO: decompile
}



void ov80_0222E88C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _0222E8F8 ; =0x000005DC
    // ldr r7, [r6]
    // bl PlaySE
    // add r0, r6, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // mov r1, #0
    // bl Delete2dMenu
    // add r0, r6, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // mov r1, #0
    // bl sub_0200E5D4
    // add r0, r6, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // bl RemoveWindow
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r5, #0x1c]
    // bl String_Delete
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x1c
    // blt _0222E8BE
    // add r0, r6, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1e
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _0222E8E4
    // add r0, r6, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // bl DestroyMsgData
    // ldr r0, [r6, #4]
    // bl SysTask_Destroy
    // add r0, r6, #0
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r7, #0x60]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222E8F8: .word 0x000005DC
    // TODO: decompile
}



void ov80_0222E8FC(void) {
    // add r0, #0xb0
    Get2dMenuSelection(*((u32*)r0));
    // add r1, r4, r0
    // ldrh r1, [r1, r0]
    ov80_0222EE14(r4, 0);
}



void ov80_0222E920(void) {
}



void ov80_0222E940(void) {
}



void ov80_0222E948(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, [r5]
    // bl FrontierSystem_GetFrontierMap
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov80_0222EB14
    // mov r1, #7
    // tst r1, r0
    // bne _0222E966
    // lsr r1, r0, #3
    // b _0222E96A
    // lsr r0, r0, #3
    // add r1, r0, #1
    // add r0, r5, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1f
    // beq _0222E984
    // add r0, r5, #0
    // add r0, #0x98
    // ldrb r0, [r0]
    // sub r2, r0, r1
    // add r0, r5, #0
    // add r0, #0x98
    // strb r2, [r0]
    // add r0, r5, #0
    // add r0, #0x9b
    // ldrb r0, [r0]
    // cmp r0, #8
    // bls _0222E9D4
    // add r0, r5, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // beq _0222E9A8
    // add r0, r5, #0
    // add r0, #0x99
    // ldrb r2, [r0]
    // add r0, r5, #0
    // add r0, #0x99
    // sub r2, #0x10
    // strb r2, [r0]
    // add r0, r5, #0
    // add r0, #0x99
    // ldrb r0, [r0]
    // add r3, r5, #0
    // mov r2, #1
    // str r0, [sp]
    // lsl r0, r1, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r3, #0x98
    // add r1, r5, #0
    // ldrb r3, [r3]
    // ldr r0, [r4]
    // add r1, #8
    // bl AddWindowParameterized
    // b _0222EA22
    // add r2, r5, #0
    // add r2, #0x97
    // ldrb r2, [r2]
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x1f
    // beq _0222E9F0
    // add r2, r5, #0
    // add r2, #0x99
    // ldrb r2, [r2]
    // lsl r0, r0, #1
    // sub r2, r2, r0
    // add r0, r5, #0
    // add r0, #0x99
    // strb r2, [r0]
    // add r0, r5, #0
    // add r0, #0x99
    // ldrb r0, [r0]
    // add r3, r5, #0
    // mov r2, #1
    // str r0, [sp]
    // lsl r0, r1, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r1, r5, #0
    // add r3, #0x98
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // ldrb r3, [r3]
    // ldr r0, [r4]
    // add r1, #8
    // bl AddWindowParameterized
    // add r0, r5, #0
    // ldr r2, _0222EA6C ; =0x000003D9
    // add r0, #8
    // mov r1, #1
    // mov r3, #0xc
    // bl DrawFrameAndWindow1
    // add r0, r5, #0
    // bl ov80_0222EB54
    // ldr r3, [r5]
    // add r2, r5, #0
    // add r2, #0x96
    // ldr r3, [r3, #0x34]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // lsl r3, r3, #0x18
    // ldrb r2, [r2]
    // add r0, r5, r0
    // mov r1, #0
    // lsr r3, r3, #0x18
    // bl ListMenuInit
    // mov r1, #0x6d
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov80_0222EE7C
    // ldr r0, _0222EA70 ; =ov80_0222EC90
    // add r1, r5, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5, #4]
    // add sp, #0x14
    // pop {r4, r5, pc}
    // _0222EA6C: .word 0x000003D9
    // _0222EA70: .word ov80_0222EC90
    // TODO: decompile
}



void ov80_0222EA74(void) {
    // str r1, [sp]
    String_New(0x50, *((u32*)(*((u32*)r0) + 0x34)));
    // add r0, #0x8c
    // ldr r1, [sp]
    ReadMsgDataIntoString(*((u32*)r5), r0);
    // add r1, #0x9b
    // ldrb r1, [r1]
    // add r0, #0x90
    // add r1, r5, r1
    StringExpandPlaceholders(*((u32*)r5), *((u32*)((r5 << 2) + 0x1c)), r6);
    // add r0, #0x9b
    // ldrb r1, [r0]
    // add r0, r5, r0
    // add r2, r5, r1
    // str r0, [r2, r1]
    String_Delete(r6, (0x6f << 2));
    // add r0, #0x9b
    // ldrb r0, [r0]
    // mvn r2, r2
    // add r1, r5, r0
    // str r2, [r1, r0]
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r1, r5, r0
    // str r4, [r1, r0]
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r1, r5, r0
    // strh r7, [r1, r0]
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r5, #0x9b
    // strb r0, [r5]
}



void ov80_0222EB14(void) {
    // add r0, #0x9b
    // ldrb r0, [r0]
    // ldr r1, [r5, r0]
    FontID_String_GetWidth(0, 0);
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r5, #8
    // add r6, #0xc
}



void ov80_0222EB54(void) {
    // push {r4, r5}
    // mov r3, #0x6f
    // lsl r3, r3, #2
    // add r1, r3, #0
    // add r2, r0, r3
    // sub r1, #0x28
    // str r2, [r0, r1]
    // add r1, r3, #0
    // ldr r2, _0222EC4C ; =ov80_0222EC84
    // sub r1, #0x24
    // str r2, [r0, r1]
    // add r1, r3, #0
    // ldr r2, _0222EC50 ; =ov80_0222EC60
    // sub r1, #0x20
    // str r2, [r0, r1]
    // add r2, r0, #0
    // add r1, r3, #0
    // add r2, #8
    // sub r1, #0x1c
    // str r2, [r0, r1]
    // add r1, r0, #0
    // add r1, #0x9b
    // ldrb r2, [r1]
    // add r1, r3, #0
    // sub r1, #0x18
    // strh r2, [r0, r1]
    // add r1, r3, #0
    // mov r2, #8
    // sub r1, #0x16
    // strh r2, [r0, r1]
    // add r1, r3, #0
    // mov r2, #1
    // sub r1, #0x14
    // strb r2, [r0, r1]
    // add r1, r3, #0
    // mov r4, #0xc
    // sub r1, #0x13
    // strb r4, [r0, r1]
    // add r1, r3, #0
    // mov r4, #2
    // sub r1, #0x12
    // strb r4, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0x11
    // ldrb r4, [r0, r1]
    // mov r1, #0xf
    // bic r4, r1
    // orr r4, r2
    // add r2, r3, #0
    // sub r2, #0x11
    // strb r4, [r0, r2]
    // add r2, r3, #0
    // sub r2, #0x11
    // ldrb r5, [r0, r2]
    // mov r2, #0xf0
    // mov r4, #0x10
    // bic r5, r2
    // orr r5, r4
    // add r4, r3, #0
    // sub r4, #0x11
    // strb r5, [r0, r4]
    // add r4, r3, #0
    // sub r4, #0x10
    // ldrb r4, [r0, r4]
    // bic r4, r1
    // mov r1, #0xf
    // orr r4, r1
    // add r1, r3, #0
    // sub r1, #0x10
    // strb r4, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0x10
    // ldrb r4, [r0, r1]
    // mov r1, #0x20
    // bic r4, r2
    // add r2, r4, #0
    // orr r2, r1
    // add r1, r3, #0
    // sub r1, #0x10
    // strb r2, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0xe
    // ldrh r2, [r0, r1]
    // mov r1, #7
    // bic r2, r1
    // add r1, r3, #0
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0xe
    // ldrh r2, [r0, r1]
    // mov r1, #0x78
    // bic r2, r1
    // add r1, r3, #0
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0xe
    // ldrh r2, [r0, r1]
    // ldr r1, _0222EC54 ; =0xFFFFFE7F
    // and r2, r1
    // add r1, r3, #0
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0xe
    // ldrh r2, [r0, r1]
    // ldr r1, _0222EC58 ; =0xFFFF81FF
    // and r2, r1
    // add r1, r3, #0
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0xe
    // ldrh r2, [r0, r1]
    // ldr r1, _0222EC5C ; =0xFFFF7FFF
    // and r2, r1
    // add r1, r3, #0
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // sub r3, #0xc
    // str r0, [r0, r3]
    // pop {r4, r5}
    // bx lr
    // _0222EC4C: .word ov80_0222EC84
    // _0222EC50: .word ov80_0222EC60
    // _0222EC54: .word 0xFFFFFE7F
    // _0222EC58: .word 0xFFFF81FF
    // _0222EC5C: .word 0xFFFF7FFF
    // TODO: decompile
}



void ov80_0222EC60(void) {
    // mvn r2, r2
    ListMenuOverrideSetColors(3, 0xf, 4);
    ListMenuOverrideSetColors(1, 0xf, 2);
}



void ov80_0222EC84(void) {
}



void ov80_0222EC90(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // add r0, #0x94
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0222ECAC
    // add r0, r5, #0
    // add r0, #0x94
    // ldrb r0, [r0]
    // add r5, #0x94
    // sub r0, r0, #1
    // strb r0, [r5]
    // pop {r4, r5, r6, pc}
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0222ED8C
    // mov r0, #0x6d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl ListMenu_ProcessInput
    // add r4, r0, #0
    // mov r0, #0x6d
    // mov r1, #0xb5
    // lsl r0, r0, #2
    // lsl r1, r1, #2
    // ldrh r6, [r5, r1]
    // ldr r0, [r5, r0]
    // add r1, r5, r1
    // bl ListMenuGetCurrentItemArrayId
    // mov r0, #0xb5
    // lsl r0, r0, #2
    // ldrh r0, [r5, r0]
    // cmp r6, r0
    // beq _0222ECE2
    // ldr r0, _0222ED90 ; =0x000005DC
    // bl PlaySE
    // ldr r0, _0222ED94 ; =gSystem
    // mov r1, #0x40
    // ldr r0, [r0, #0x4c]
    // tst r1, r0
    // bne _0222ECFE
    // mov r1, #0x80
    // tst r1, r0
    // bne _0222ECFE
    // mov r1, #0x20
    // tst r1, r0
    // bne _0222ECFE
    // mov r1, #0x10
    // tst r0, r1
    // beq _0222ED04
    // add r0, r5, #0
    // bl ov80_0222EE7C
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _0222ED26
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _0222ED26
    // mov r1, #0xb5
    // mov r0, #0x6d
    // lsl r1, r1, #2
    // lsl r0, r0, #2
    // ldrh r1, [r5, r1]
    // ldr r0, [r5, r0]
    // bl ListMenuGetValueByArrayId
    // add r4, r0, #0
    // add r0, r5, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // ldrh r1, [r0]
    // ldr r0, _0222ED98 ; =0x0000EEDD
    // cmp r1, r0
    // bne _0222ED3E
    // add r0, r5, #0
    // mov r1, #0
    // bl ov80_0222EDA0
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // beq _0222ED4E
    // add r0, r0, #1
    // cmp r4, r0
    // beq _0222ED8C
    // b _0222ED76
    // add r0, r5, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _0222ED8C
    // ldr r0, _0222ED90 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // add r0, #0xa0
    // ldr r1, _0222ED9C ; =0x0000FFFE
    // ldr r0, [r0]
    // strh r1, [r0]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov80_0222EDA0
    // pop {r4, r5, r6, pc}
    // ldr r0, _0222ED90 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // mov r1, #1
    // strh r4, [r0]
    // add r0, r5, #0
    // bl ov80_0222EDA0
    // pop {r4, r5, r6, pc}
    // nop
    // _0222ED90: .word 0x000005DC
    // _0222ED94: .word gSystem
    // _0222ED98: .word 0x0000EEDD
    // _0222ED9C: .word 0x0000FFFE
    // TODO: decompile
}



void ov80_0222EDA0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r7, [r6]
    // cmp r1, #1
    // bne _0222EDB0
    // ldr r0, _0222EE10 ; =0x000005DC
    // bl PlaySE
    // mov r0, #0x6d
    // lsl r0, r0, #2
    // mov r1, #0
    // ldr r0, [r6, r0]
    // add r2, r1, #0
    // bl DestroyListMenu
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // mov r1, #0
    // bl sub_0200E5D4
    // add r0, r6, #0
    // add r0, #8
    // bl RemoveWindow
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r5, #0x1c]
    // bl String_Delete
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x1c
    // blt _0222EDD6
    // add r0, r6, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1e
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _0222EDFC
    // add r0, r6, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // bl DestroyMsgData
    // ldr r0, [r6, #4]
    // bl SysTask_Destroy
    // add r0, r6, #0
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r7, #0x60]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222EE10: .word 0x000005DC
    // TODO: decompile
}



void ov80_0222EE14(void) {
    // str r1, [sp, #0xc]
    String_New(0x50, *((u32*)(*((u32*)r0) + 0x34)));
    String_New(0x50, *((u32*)(*((u32*)r5) + 0x34)));
    FillWindowPixelBuffer(*((u32*)(r5 + 0x18)), 0xf);
    // add r0, #0x8c
    // ldr r1, [sp, #0xc]
    ReadMsgDataIntoString(*((u32*)r5), r4);
    // add r0, #0x90
    StringExpandPlaceholders(*((u32*)r5), r6, r4);
    // str r3, [sp]
    // str r7, [sp, #4]
    // str r3, [sp, #8]
    AddTextPrinterParameterized(*((u32*)(r5 + 0x18)), 1, r6, 0);
    String_Delete(r4);
    String_Delete(r6);
}



void ov80_0222EE7C(void) {
    // push {r4, lr}
    // mov r1, #0x6d
    // add r4, r0, #0
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, r1, #6
    // add r1, r4, r1
    // bl ListMenuGetCurrentItemArrayId
    // ldr r0, _0222EEA8 ; =0x000001BA
    // ldrh r1, [r4, r0]
    // add r0, #0xe2
    // lsl r1, r1, #1
    // add r1, r4, r1
    // ldrh r1, [r1, r0]
    // cmp r1, #0xff
    // beq _0222EEA6
    // add r0, r4, #0
    // mov r2, #0
    // bl ov80_0222EE14
    // pop {r4, pc}
    // _0222EEA8: .word 0x000001BA
    // TODO: decompile
}



void ov80_0222EEAC(void) {
}



void ov80_0222EEC8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r7, r0, #0
    // ldr r0, [r5, #0xc]
    // ldrh r4, [r0]
    // ldrh r6, [r0, #2]
    // ldrb r0, [r5]
    // cmp r0, #0
    // beq _0222EEE8
    // cmp r0, #1
    // beq _0222EEF6
    // cmp r0, #2
    // beq _0222EF9A
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _0222EFC8 ; =0x0000FD13
    // cmp r4, r0
    // bne _0222EEF6
    // mov r0, #2
    // add sp, #8
    // strb r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x14]
    // mov r1, #5
    // ldr r0, [r0]
    // bl ov42_02228188
    // cmp r0, #0
    // bne _0222EFC2
    // cmp r4, #0x20
    // blo _0222EF2E
    // cmp r4, #0x26
    // bhi _0222EF2E
    // mov r0, #2
    // ldrsh r1, [r5, r0]
    // sub r4, #0x20
    // add r1, r1, #1
    // strh r1, [r5, #2]
    // ldrsh r1, [r5, r0]
    // ldr r0, _0222EFCC ; =ov80_0223BD44
    // ldrb r0, [r0, r4]
    // cmp r1, r0
    // blt _0222EFC2
    // mov r0, #0
    // strh r0, [r5, #2]
    // ldr r0, [r5, #0xc]
    // add sp, #8
    // add r0, r0, #4
    // str r0, [r5, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r4, #0x27
    // blo _0222EF66
    // cmp r4, #0x29
    // bhs _0222EF66
    // cmp r4, #0x27
    // beq _0222EF40
    // cmp r4, #0x28
    // beq _0222EF4C
    // b _0222EF58
    // ldr r0, [r5, #0x14]
    // mov r1, #1
    // ldr r0, [r0, #4]
    // bl ov42_02229200
    // b _0222EF5C
    // ldr r0, [r5, #0x14]
    // mov r1, #0
    // ldr r0, [r0, #4]
    // bl ov42_02229200
    // b _0222EF5C
    // bl GF_AssertFail
    // ldr r0, [r5, #0xc]
    // add sp, #8
    // add r0, r0, #4
    // str r0, [r5, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [r5, #0x14]
    // ldrh r2, [r5, #4]
    // ldr r1, [r1]
    // add r0, sp, #0
    // add r3, r4, #0
    // bl ov80_0222EFD0
    // ldr r0, [r5, #0x10]
    // add r1, sp, #0
    // bl ov42_022299C0
    // ldrb r0, [r5, #1]
    // add r0, r0, #1
    // strb r0, [r5, #1]
    // ldrb r0, [r5, #1]
    // cmp r0, r6
    // blt _0222EF92
    // mov r0, #0
    // strb r0, [r5, #1]
    // ldr r0, [r5, #0xc]
    // add r0, r0, #4
    // str r0, [r5, #0xc]
    // mov r0, #0
    // add sp, #8
    // strb r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x14]
    // mov r1, #5
    // ldr r0, [r0]
    // bl ov42_02228188
    // cmp r0, #0
    // bne _0222EFC2
    // ldr r1, [r5, #8]
    // ldrb r0, [r1]
    // sub r0, r0, #1
    // strb r0, [r1]
    // ldr r0, [r5, #0x14]
    // mov r1, #0
    // str r1, [r0, #0x38]
    // add r0, r5, #0
    // bl Heap_Free
    // add r0, r7, #0
    // bl SysTask_Destroy
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222EFC8: .word 0x0000FD13
    // _0222EFCC: .word ov80_0223BD44
    // TODO: decompile
}



void ov80_0222EFD0(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // strb r2, [r4, #7]
    // ldr r0, _0222F028 ; =ov80_0223DC22
    // lsl r2, r3, #2
    // ldrh r0, [r0, r2]
    // strb r0, [r4, #6]
    // ldr r0, _0222F02C ; =_0223DC20
    // ldrh r0, [r0, r2]
    // strh r0, [r4, #4]
    // cmp r0, #2
    // beq _0222EFF2
    // cmp r0, #3
    // beq _0222EFF2
    // cmp r0, #6
    // bne _0222F00C
    // add r0, r1, #0
    // bl ov42_022282E8
    // add r1, sp, #0
    // strh r0, [r1, #4]
    // lsr r0, r0, #0x10
    // strh r0, [r1, #6]
    // ldrh r0, [r1, #4]
    // add sp, #8
    // strh r0, [r4]
    // ldrh r0, [r1, #6]
    // strh r0, [r4, #2]
    // pop {r4, pc}
    // add r0, r1, #0
    // bl ov42_022282DC
    // add r1, sp, #0
    // strh r0, [r1]
    // lsr r0, r0, #0x10
    // strh r0, [r1, #2]
    // ldrh r0, [r1]
    // strh r0, [r4]
    // ldrh r0, [r1, #2]
    // strh r0, [r4, #2]
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _0222F028: .word ov80_0223DC22
    // _0222F02C: .word _0223DC20
    // TODO: decompile
}



void ov80_0222F030(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x7c
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x2c]
    // ldr r7, [r5, #0x34]
    // ldr r6, [r5, #0x38]
    // mov r0, #8
    // add r1, r2, #0
    // str r2, [sp, #0x24]
    // add r4, r3, #0
    // bl NARC_New
    // str r0, [sp, #0x30]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x30]
    // add r0, r7, #0
    // add r1, r6, #0
    // mov r3, #0x70
    // str r4, [sp, #8]
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // ldr r0, [sp, #0x30]
    // mov r1, #2
    // str r0, [sp]
    // mov r0, #0x6f
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x2c]
    // add r2, r7, #0
    // add r3, r6, #0
    // str r4, [sp, #0x14]
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r2, [sp, #0x30]
    // add r0, r7, #0
    // add r1, r6, #0
    // mov r3, #0x71
    // str r4, [sp, #4]
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r2, [sp, #0x30]
    // add r0, r7, #0
    // add r1, r6, #0
    // mov r3, #0x72
    // str r4, [sp, #4]
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // ldr r0, [sp, #0x30]
    // bl NARC_Delete
    // add r0, sp, #0x38
    // mov r1, #0
    // mov r2, #0x34
    // bl MI_CpuFill8
    // ldr r0, [sp, #0x90]
    // add r1, sp, #0x38
    // strh r0, [r1]
    // ldr r0, [sp, #0x94]
    // strh r0, [r1, #2]
    // mov r0, #0
    // strh r0, [r1, #4]
    // strh r0, [r1, #6]
    // ldr r1, [sp, #0x98]
    // str r0, [sp, #0x44]
    // str r1, [sp, #0x40]
    // mov r1, #1
    // str r1, [sp, #0x48]
    // ldr r1, [sp, #0x9c]
    // str r0, [sp, #0x68]
    // str r1, [sp, #0x64]
    // add r1, sp, #0x38
    // add r0, r0, #1
    // str r4, [r1, #0x14]
    // add r1, r1, #4
    // cmp r0, #6
    // blt _0222F0DA
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, sp, #0x38
    // bl SpriteSystem_NewSprite
    // add r6, r0, #0
    // bl ManagedSprite_TickFrame
    // mov r1, #0x32
    // ldr r0, [sp, #0x24]
    // lsl r1, r1, #6
    // bl Heap_Alloc
    // str r0, [sp, #0x28]
    // mov r1, #0
    // ldr r0, [sp, #0x20]
    // add r2, r1, #0
    // bl GetMonData
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x20]
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // add r7, r0, #0
    // ldr r1, [sp, #0x20]
    // add r0, sp, #0x6c
    // mov r2, #2
    // bl GetPokemonSpriteCharAndPlttNarcIds
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    // add r1, sp, #0x38
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x34]
    // ldr r2, [sp, #0x24]
    // str r0, [sp, #0x10]
    // str r3, [sp, #0x14]
    // mov r0, #2
    // str r0, [sp, #0x18]
    // str r7, [sp, #0x1c]
    // ldrh r0, [r1, #0x34]
    // ldrh r1, [r1, #0x36]
    // bl sub_02014494
    // ldr r0, [r6]
    // bl Sprite_GetImageProxy
    // add r7, r0, #0
    // ldr r0, [sp, #0x28]
    // mov r1, #4
    // bl DC_FlushRange
    // mov r2, #0x32
    // ldr r0, [sp, #0x28]
    // ldr r1, [r7, #4]
    // lsl r2, r2, #6
    // bl GX_LoadOBJ
    // ldr r0, [r6]
    // bl Sprite_GetPaletteProxy
    // mov r1, #1
    // bl ObjPlttTransfer_GetPaletteVramOffset
    // lsl r7, r0, #4
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r2, sp, #0x38
    // ldrh r1, [r2, #0x34]
    // ldrh r2, [r2, #0x38]
    // ldr r0, [sp, #0x2c]
    // ldr r3, [sp, #0x24]
    // bl PaletteData_LoadNarc
    // ldr r0, [sp, #0xa0]
    // cmp r0, #0
    // ble _0222F1AE
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // add r0, sp, #0x80
    // ldrh r0, [r0, #0x24]
    // lsl r2, r7, #0x10
    // mov r1, #2
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // lsr r2, r2, #0x10
    // mov r3, #0x10
    // bl PaletteData_BlendPalette
    // ldr r0, [sp, #0x28]
    // bl Heap_Free
    // ldr r0, _0222F1CC ; =0x0000C350
    // add r5, #0x80
    // sub r0, r4, r0
    // lsl r4, r0, #2
    // ldr r0, [r5, r4]
    // cmp r0, #0
    // beq _0222F1C6
    // bl GF_AssertFail
    // str r6, [r5, r4]
    // add sp, #0x7c
    // pop {r4, r5, r6, r7, pc}
    // _0222F1CC: .word 0x0000C350
    // TODO: decompile
}



void ov80_0222F1D0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _0222F20C ; =0x0000C350
    // add r6, r1, #0
    // add r4, r5, #0
    // sub r0, r6, r0
    // add r4, #0x80
    // lsl r7, r0, #2
    // ldr r0, [r4, r7]
    // bl Sprite_DeleteAndFreeResources
    // mov r0, #0
    // str r0, [r4, r7]
    // ldr r0, [r5, #0x38]
    // add r1, r6, #0
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, [r5, #0x38]
    // add r1, r6, #0
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, [r5, #0x38]
    // add r1, r6, #0
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, [r5, #0x38]
    // add r1, r6, #0
    // bl SpriteManager_UnloadAnimObjById
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222F20C: .word 0x0000C350
    // TODO: decompile
}



void ov80_0222F210(void) {
    sub_02074490();
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBuffer(*((u32*)(r4 + 4)), 2, *((u32*)(r4 + 0x34)), *((u32*)(r4 + 0x38)));
    sub_02074498();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r4 + 0x34)), *((u32*)(r4 + 0x38)), 0x14, r0);
    sub_020744A4();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r4 + 0x34)), *((u32*)(r4 + 0x38)), 0x14, r0);
}



void ov80_0222F278(void) {
    SpriteManager_UnloadCellObjById(*((u32*)(r0 + 0x38)), (0x7d << 4));
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x38)), (0x7d << 4));
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x38)), (0x7d << 4));
}



void ov80_0222F29C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x44
    // add r4, r2, #0
    // add r5, r0, #0
    // add r7, r1, #0
    // str r3, [sp, #0xc]
    // cmp r4, #8
    // blt _0222F2B0
    // bl GF_AssertFail
    // add r0, r7, #0
    // bl Pokemon_GetIconNaix
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // add r0, r4, r0
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x34]
    // ldr r1, [r5, #0x38]
    // mov r2, #0x14
    // bl SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType
    // ldr r6, _0222F320 ; =ov80_0223BD80
    // add r3, sp, #0x10
    // mov r2, #6
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0222F2D8
    // ldr r0, [r6]
    // add r1, sp, #0x10
    // str r0, [r3]
    // ldr r0, [sp, #0x24]
    // add r2, sp, #0x10
    // add r0, r0, r4
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0xc]
    // strh r0, [r1]
    // ldr r0, [sp, #0x58]
    // strh r0, [r1, #2]
    // mov r0, #0xc8
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #0x34]
    // ldr r1, [r5, #0x38]
    // bl SpriteSystem_NewSprite
    // add r4, r0, #0
    // add r0, r7, #0
    // bl Pokemon_GetIconPalette
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl Sprite_SetPalOffsetRespectVramOffset
    // add r0, r4, #0
    // bl ManagedSprite_TickFrame
    // add r0, r4, #0
    // add sp, #0x44
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222F320: .word ov80_0223BD80
    // TODO: decompile
}



void ov80_0222F324(void) {
    // add r1, r2, r1
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x38)), (0x7d << 4));
    Sprite_DeleteAndFreeResources(r4);
}



void ov80_0222F33C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // mov r0, #0x15
    // mov r1, #0x65
    // bl NARC_New
    // add r4, r0, #0
    // bl sub_0207CAA0
    // str r4, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, _0222F3C4 ; =0x000007D1
    // mov r1, #2
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #4]
    // ldr r2, [r5, #0x34]
    // ldr r3, [r5, #0x38]
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // bl sub_0207CAA4
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222F3C4 ; =0x000007D1
    // add r2, r4, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x34]
    // ldr r1, [r5, #0x38]
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // bl sub_0207CAA8
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222F3C4 ; =0x000007D1
    // add r2, r4, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x34]
    // ldr r1, [r5, #0x38]
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // bl sub_0207CA9C
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0222F3C8 ; =0x000007D9
    // mov r2, #0x15
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x34]
    // ldr r1, [r5, #0x38]
    // bl SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType
    // add r0, r4, #0
    // bl NARC_Delete
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // _0222F3C4: .word 0x000007D1
    // _0222F3C8: .word 0x000007D9
    // TODO: decompile
}



void ov80_0222F3CC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x38]
    // ldr r1, _0222F3F4 ; =0x000007D9
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, [r4, #0x38]
    // ldr r1, _0222F3F8 ; =0x000007D1
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, [r4, #0x38]
    // ldr r1, _0222F3F8 ; =0x000007D1
    // bl SpriteManager_UnloadAnimObjById
    // ldr r0, [r4, #0x38]
    // ldr r1, _0222F3F8 ; =0x000007D1
    // bl SpriteManager_UnloadPlttObjById
    // pop {r4, pc}
    // nop
    // _0222F3F4: .word 0x000007D9
    // _0222F3F8: .word 0x000007D1
    // TODO: decompile
}



void ov80_0222F3FC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // ldr r5, _0222F43C ; =ov80_0223BD4C
    // add r6, r2, #0
    // add r3, r0, #0
    // add r7, r1, #0
    // add r4, sp, #0
    // mov r2, #6
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // sub r2, r2, #1
    // bne _0222F40C
    // ldr r0, [r5]
    // add r2, sp, #0
    // str r0, [r4]
    // add r0, sp, #0
    // strh r7, [r0]
    // strh r6, [r0, #2]
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // str r0, [sp, #8]
    // ldr r0, [r3, #0x34]
    // ldr r1, [r3, #0x38]
    // bl SpriteSystem_NewSprite
    // add r4, r0, #0
    // bl ManagedSprite_TickFrame
    // add r0, r4, #0
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222F43C: .word ov80_0223BD4C
    // TODO: decompile
}



void ov80_0222F440(void) {
}



void ov80_0222F44C(void) {
}



void ov80_0222F458(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // ldr r0, [r0]
    // add r6, r2, #0
    // bl Frontier_GetLaunchArgs
    // ldrh r2, [r4]
    // ldr r1, _0222F4C8 ; =0x0000FFFF
    // cmp r2, r1
    // bne _0222F498
    // mov r0, #1
    // mov r1, #0x1b
    // add r2, r6, #0
    // mov r3, #0x20
    // bl NewMsgDataFromNarc
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldrh r2, [r4, #2]
    // ldr r0, [r5]
    // add r1, r6, #0
    // mov r3, #1
    // bl ov80_0222E268
    // add r0, r6, #0
    // bl DestroyMsgData
    // b _0222F4BC
    // ldr r0, [r0, #8]
    // bl Save_PlayerData_GetOptionsAddr
    // bl Options_GetTextFrameDelay
    // add r1, r0, #0
    // ldrh r0, [r4, #4]
    // str r0, [sp]
    // mov r0, #6
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldrh r2, [r4]
    // ldrh r3, [r4, #2]
    // ldr r0, [r5]
    // bl ov80_0222E3B8
    // ldr r1, _0222F4CC ; =ov80_0222F4D0
    // add r0, r5, #0
    // bl FrontierScriptContext_Pause
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _0222F4C8: .word 0x0000FFFF
    // _0222F4CC: .word ov80_0222F4D0
    // TODO: decompile
}



void ov80_0222F4D0(void) {
    // add r0, #0x50
    // ldrb r0, [r0]
    TextPrinterCheckActive(*((u32*)r0));
    TextFlags_SetCanTouchSpeedUpPrint(0);
}



void ov80_0222F4F0(void) {
    // ldrsb r2, [r4, r1]
    *((u8*)(r1 + 8)) = (r2 + 1);
    // ldrsb r2, [r4, r1]
    // ldrsb r1, [r4, r1]
    *((u8*)(r1 + 8)) = 0;
    // ldrsb r2, [r4, r1]
    *((u8*)(r1 + 0xa)) = ((r2 + 1) - 1);
    // ldrsb r1, [r4, r1]
    SysTask_Destroy(0xa, ((r2 + 1) - 1));
    MI_CpuFill8(r4, 0, 0xc);
    // ldrsh r0, [r4, r0]
    // neg r0, r0
    *((u16*)(r4 + 4)) = 4;
    // ldrsh r0, [r4, r0]
    // neg r0, r0
    *((u16*)(r4 + 6)) = 6;
}



void ov80_0222F53C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // mov r1, #8
    // add r7, r0, #0
    // ldrsh r0, [r4, r1]
    // cmp r0, #0
    // bgt _0222F5C2
    // mov r0, #0xa
    // ldrsb r0, [r4, r0]
    // cmp r0, #1
    // bne _0222F5A6
    // ldr r2, _0222F5C8 ; =0x04000048
    // mov r1, #0x3f
    // ldrh r3, [r2]
    // mov r0, #0xf
    // mov r5, #0x20
    // bic r3, r1
    // orr r0, r3
    // orr r0, r5
    // strh r0, [r2]
    // ldrh r3, [r2, #2]
    // mov r0, #0x1f
    // bic r3, r1
    // orr r0, r3
    // orr r0, r5
    // strh r0, [r2, #2]
    // ldrb r3, [r4, #4]
    // ldrb r1, [r4, #7]
    // ldrb r0, [r4, #5]
    // lsl r6, r3, #8
    // mov r3, #0xff
    // lsl r3, r3, #8
    // and r6, r3
    // ldrb r3, [r4, #6]
    // orr r6, r3
    // add r3, r2, #0
    // sub r3, #8
    // strh r6, [r3]
    // lsl r3, r0, #8
    // mov r0, #0xff
    // lsl r0, r0, #8
    // and r0, r3
    // orr r1, r0
    // sub r0, r2, #4
    // strh r1, [r0]
    // lsl r2, r5, #0x15
    // ldr r1, [r2]
    // ldr r0, _0222F5CC ; =0xFFFF1FFF
    // and r1, r0
    // lsl r0, r5, #8
    // orr r0, r1
    // str r0, [r2]
    // b _0222F5B0
    // lsl r2, r1, #0x17
    // ldr r1, [r2]
    // ldr r0, _0222F5CC ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // add r0, r7, #0
    // bl SysTask_Destroy
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0xc
    // bl MI_CpuFill8
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, r0, #1
    // strh r0, [r4, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222F5C8: .word 0x04000048
    // _0222F5CC: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov80_0222F5D0(void) {
    // add r2, #0x97
    // ldrb r3, [r2]
    // bic r3, r2
    // orr r1, r3
    // add r0, #0x97
    // strb r1, [r0]
}



void ov80_0222F5EC(void) {
    // add r2, #0x97
    // ldrb r3, [r2]
    // bic r3, r2
    // orr r1, r3
    // add r0, #0x97
    // strb r1, [r0]
}


