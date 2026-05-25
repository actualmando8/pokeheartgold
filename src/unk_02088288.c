/* Decompiled from asm/unk_02088288.s */
#include "global.h"

u8 sub_02088288(void) {
}





void sub_0208828C(void) {
}





void PokemonSummary_Init(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r0, r2
    // str r0, [r1]
    // and r2, r3
    // str r2, [r0]
    // and r3, r2
    // str r3, [r1]
    // add r1, #0x50
    // and r2, r3
    // str r2, [r0]
    // strh r2, [r1]
    // add r0, #0x50
    // strh r2, [r0]
    SetKeyRepeatTimers(4, 8, 0, *((u32*)0x04001000));
    Heap_Create(3, 0x13, (0x45 << 0xc));
    NARC_New(0x27, 0x13);
    NARC_New(0xa2, 0x13);
    OverlayManager_CreateAndGetData(r6, 0x000007D8, 0x13);
    memset(0, 0x000007D8);
    OverlayManager_GetArgs(r6);
    // str r0, [r4, r1]
    BgConfig_Alloc(0x13, (0x8b << 2));
    // str r0, [r4]
    *((u32*)(*((u32*)(r4 + (0x8b << 2))) + 0x38)) = 0;
    sub_02016EDC(0x13, 1, 1);
    // str r0, [r4, r1]
    NARC_New(0xb4, 0x13);
    // str r0, [r4, r1]
    FontID_SetAccessDirect(0, 0x13);
    sub_020210BC();
    sub_02021148(4);
    sub_02088610();
    sub_02088630(*((u32*)r4));
    sub_020887C4(r4, r7, r5);
    sub_0208887C();
    sub_0208DE40(r4);
    FontID_Alloc(4, 0x13);
    sub_02088894(r4);
    sub_020889D0(r4, r5);
    sub_020897C0(r4);
    sub_0208B1AC(r4);
    sub_0208B2C0(r4);
    sub_0208E3AC(r4);
    sub_0208B48C(r4);
    sub_0208B4EC(r4);
    sub_0208BECC(r4);
    sub_0208C3E4(r4);
    sub_02089CB4(r4);
    sub_0208DF2C(r4);
    Main_SetVBlankIntrCB(sub_020885DC, r4);
    // strh r0, [r2]
    GfGfx_BothDispOn(((0x04000304 >> 0xb) | *((u16*)0x04000304)), *((u16*)0x04000304), 0x04000304);
    Sound_SetSceneAndPlayBGM(0x3d, 0, 0);
    sub_0203A964();
    NARC_Delete(r5);
    NARC_Delete(r7);
}





void PokemonSummary_Main(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02088442: ; jump table
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
}





void PokemonSummary_Exit(void) {
    OverlayManager_GetData();
    Main_SetVBlankIntrCB(0, 0);
    sub_0208DEFC(r4);
    sub_0208B258(r4);
    sub_0208C560(r4);
    sub_0208877C(*((u32*)r4));
    sub_02021238();
    GF_DestroyVramTransferManager();
    sub_02088AF8(r4);
    sub_0208895C(r4);
    FontID_Release(4);
    NARC_Delete(*((u32*)(r4 + 0x000007B8)));
    FontID_SetAccessLazy(0);
    // strh r1, [r0]
    OverlayManager_FreeData(r5, 0);
    Heap_Destroy(0x13);
}





void sub_020885DC(void) {
    DoScheduledBgGpuUpdates(*((u32*)r0));
    PokepicManager_HandleLoadImgAndOrPltt(*((u32*)(r4 + (0x2a << 4))));
    GF_RunVramTransferTasks();
    SpriteSystem_TransferOam();
    // str r0, [r3, r1]
}





void sub_02088610(void) {
}





void sub_02088630(void) {
    // add r3, sp, #0xa8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    ScheduleSetBgPosText(r4, 2, 0, 0);
    ScheduleSetBgPosText(r4, 2, 3, 0);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 6, r3, 0);
    BG_ClearCharDataRange(1, 0x20, 0, 0x13);
    BG_ClearCharDataRange(4, 0x20, 0, 0x13);
}





void sub_0208877C(void) {
}





void sub_020887C4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void sub_0208887C(void) {
}





void sub_02088894(void) {
    NewMsgDataFromNarc(0, 0x1b, 0x0000012E, 0x13);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(1, 0x1b, (0x6a << 2), 0x13);
    // str r0, [r4, r1]
    MessagePrinter_New(1, 2, 0, 0x13);
    // str r0, [r4, r1]
    MessageFormat_New(0x13, 0x0000079C);
    // str r0, [r4, r1]
    String_New(0xc, 0x13);
    // str r0, [r4, r1]
    String_New(0xc, 0x13);
    // str r0, [r4, r1]
    String_New(8, 0x13);
    // str r0, [r4, r1]
    String_New(0x80, 0x13);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, 0x000002EE, 0x13);
    // str r0, [r4, r1]
    String_New(8, 0x13);
    // str r0, [r4, r2]
    CopyU16ArrayToString(*((u32*)(r4 + (0x7b << 4))), *((u32*)(*((u32*)(r4 + (0x8b << 2))) + 8)), (0x7b << 4));
}





void sub_0208895C(void) {
    DestroyMsgData(*((u32*)(r0 + 0x000007B4)));
    DestroyMsgData(*((u32*)(r4 + 0x000007A4)));
    DestroyMsgData(*((u32*)(r4 + (0x7a << 4))));
    MessagePrinter_Delete(*((u32*)(r4 + 0x0000079C)));
    MessageFormat_Delete(*((u32*)(r4 + 0x000007A8)));
    String_Delete(*((u32*)(r4 + (0x23 << 4))));
    String_Delete(*((u32*)(r4 + (0x8d << 2))));
    String_Delete(*((u32*)(r4 + (0x8e << 2))));
    String_Delete(*((u32*)(r4 + 0x000007AC)));
    String_Delete(*((u32*)(r4 + (0x7b << 4))));
}





void sub_020889D0(void) {
    // str r0, [r5, r1]
    // str r2, [sp]
    // str r1, [sp]
    // str r2, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
}





void sub_02088AF8(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _02088B04: .word sub_020195C0
}





void sub_02088B08(void) {
    // ldr r0, [r4, r0]
}





void sub_02088B40(void) {
    *((u8*)(*((u32*)(r0 + (0x8b << 2))) + 0x17)) = 1;
    // tst r6, r1
    // sub r1, #0x21
    sub_02089E30(0x15, 0x20, 0x000007BF, gSystem);
    // tst r1, r4
    sub_02089E30(2, 1);
    // tst r6, r1
    // sub r1, #0x41
    sub_0208A2C0(2, 0x40);
    // tst r1, r4
    sub_0208A2C0(0x13, 1);
    // tst r0, r1
    PlaySE((0x25 << 6), *((u32*)(r3 + 0x48)));
    *((u8*)(*((u32*)(r5 + (0x8b << 2))) + 0x17)) = 1;
    sub_0208ADB8(r5, 0);
    sub_0208B044(r5, 0x15);
    // tst r0, r1
    // ldrsb r0, [r5, r0]
    PlaySE(0x0000069B);
    // strb r2, [r5, r1]
    PlaySE(0x000005DD, 0x000007BD, (*((u8*)(r5 + 0x000007BD)) & ~(0xf)));
    // strb r1, [r5, r0]
    // ldrsb r0, [r5, r0]
    sub_0208ADCC(r5, 0);
    // mvn r0, r0
    // add r1, r5, r0
    PlaySE(0x0000069B);
    // and r1, r3
    // strb r0, [r5, r2]
    // ldrsb r0, [r5, r0]
    sub_0208AEC4(r5, 0xf, 0x000007BD, ((r4 << 0x18) >> 0x18));
    // mvn r0, r0
    PlaySE(0x000005DD);
    // strb r4, [r5, r0]
    sub_0208AEB4(r5);
    // mvn r1, r1
    sub_0208A2E0(r5, 0);
    // mvn r1, r1
    PlaySE(0x000005DD, 0);
    sub_0208B0B0(r5, 0, 0x14);
    sub_0208A2E0(r5, 1);
    // mvn r1, r1
    PlaySE(0x000005DD, 0);
    sub_0208B0B0(r5, 1, 0x14);
    sub_02089E98(r5);
}





void sub_02088D18(void) {
}





void sub_02088D34(void) {
}





void sub_02088D48(void) {
    // tst r3, r1
    // sub r1, #0x41
    sub_0208A71C(0x40, *((u32*)(gSystem + 0x48)), *((u32*)(gSystem + 0x48)));
    PlaySE(0x000005DC);
    sub_0208A79C(r4);
    // tst r1, r2
    sub_0208A71C(5, 1);
    PlaySE(0x000005DC);
    sub_0208A79C(r4);
    // tst r0, r2
    PlaySE(0x000005DD);
    sub_0208B08C(r4, 7);
    // tst r0, r2
    PlaySE((0x25 << 6));
    sub_0208AFA0(r4, 0);
    sub_0208B044(r4, 4);
    sub_0208AE08(r4);
    PlaySE(0x000005DD);
    sub_0208B08C(r4, 7);
    PlaySE((0x25 << 6));
    sub_0208AFA0(r4, 0);
    sub_0208B044(r4, 4);
    // mvn r1, r1
    // add r2, r4, r1
    // and r0, r2
    // strb r0, [r4, r3]
    PlaySE(0x000005DC, (*((u8*)(r4 + 0x000007BD)) & ~(0xf)), ((r0 << 0x18) >> 0x18), 0x000007BD);
    sub_0208A79C(r4);
}





void sub_02088E68(void) {
    sub_0208AFA0(0);
    sub_0208BC78(r4);
    // strb r0, [r4, r2]
}





void sub_02088E98(void) {
    // tst r3, r1
    // sub r1, #0x41
    sub_0208A71C(0x40, *((u32*)(gSystem + 0x48)), *((u32*)(gSystem + 0x48)));
    PlaySE(0x000005DC);
    sub_0208A79C(r5);
    // tst r1, r2
    sub_0208A71C(6, 1);
    PlaySE(0x000005DC);
    sub_0208A79C(r5);
    // tst r3, r1
    sub_0208AFA0(6, 1, r2);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x0000042C)), 0);
    PlaySE(0x000005DD, ((*((u8*)(r5 + 0x000007BD)) << 0x1c) >> 0x1c));
    sub_0208A834(r5);
    sub_0208BB24(r5, ((*((u8*)(r5 + 0x000007BD)) << 0x1c) >> 0x1c), ((*((u8*)(r5 + 0x000007BD)) << 0x18) >> 0x1c));
    sub_0208DB64(r5);
    sub_0208A79C(r5);
    PlaySE(0x000005DC);
    // tst r1, r2
    PlaySE((0x25 << 6), 2);
    sub_0208AFA0(r5, 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x0000042C)), 0);
    sub_0208B044(r5, 5);
    sub_0208ADDC();
    PlaySE((0x25 << 6));
    sub_0208AFA0(r5, 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x0000042C)), 0);
    sub_0208B044(r5, 5);
    // mvn r0, r0
    // add r1, r5, r0
    sub_0208AFA0(r5, 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x0000042C)), 0);
    // and r1, r3
    // strb r0, [r5, r2]
    PlaySE(0x000005DD, 0xf, 0x000007BD, ((r4 << 0x18) >> 0x18));
    sub_0208A834(r5);
    sub_0208BB24(r5, ((*((u8*)(r5 + 0x000007BD)) << 0x1c) >> 0x1c), ((*((u8*)(r5 + 0x000007BD)) << 0x18) >> 0x1c));
    sub_0208DB64(r5);
    sub_0208A79C(r5);
    PlaySE(0x000005DC);
}





void sub_02089028(void) {
    // tst r3, r1
    // sub r1, #0x41
    sub_0208A71C(0x40, *((u32*)(gSystem + 0x48)), *((u32*)(gSystem + 0x48)));
    PlaySE(0x000005DC);
    sub_0208A79C(r5);
    // tst r1, r2
    sub_0208A71C(8, 1);
    PlaySE(0x000005DC);
    sub_0208A79C(r5);
    // tst r1, r2
    PlaySE(0x000005DD, 1);
    *((u8*)(*((u32*)(r5 + (0x8b << 2))) + 0x16)) = 4;
    *((u8*)(*((u32*)(r5 + (0x8b << 2))) + 0x17)) = 0;
    // add r1, r5, r0
    MoveIsHM(*((u16*)(0 + (0x99 << 2))), 0, 4);
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + 0x0000044C)), 0);
    sub_0208DBF0(r5);
    sub_0208AED4(r5);
    // tst r1, r2
    PlaySE((0x25 << 6), 2);
    *((u8*)(*((u32*)(r5 + (0x8b << 2))) + 0x16)) = 4;
    *((u8*)(*((u32*)(r5 + (0x8b << 2))) + 0x17)) = 1;
    sub_0208B044(r5, 0x15, 4);
    sub_0208AE48();
    // mvn r0, r0
    PlaySE(0x000005DD);
    // strb r0, [r5, r1]
    sub_0208A79C(r5, 0x000007BD, (*((u8*)(r5 + 0x000007BD)) & ~(0xf)));
    PlaySE((0x25 << 6));
    // strb r0, [r5, r1]
    *((u8*)(*((u32*)(r5 + (0x8b << 2))) + 0x16)) = 4;
    *((u8*)(*((u32*)(r5 + (0x8b << 2))) + 0x17)) = 0;
    sub_0208B044(r5, 0x15, 4);
    // add r6, r5, r0
    MoveIsHM(*((u16*)(r6 + (r4 << 1))));
    PlaySE(0x000005DD);
    // and r1, r3
    // strb r0, [r5, r2]
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + 0x0000044C)), 0, 0x000007BD, ((r4 << 0x18) >> 0x18));
    sub_0208BBDC(r5);
    sub_0208DBF0(r5);
    PlaySE(0x000005DD);
    // and r1, r3
    // strb r0, [r5, r2]
    sub_0208A79C(r5, 0xf, 0x000007BD, ((r4 << 0x18) >> 0x18));
    sub_0208AED4(r5);
}





void sub_02089208(void) {
    // tst r1, r2
    PlaySE(0x000005DD, 1, *((u32*)(gSystem + 0x48)));
    *((u8*)(*((u32*)(r4 + (0x8b << 2))) + 0x16)) = ((*((u8*)(r4 + 0x000007BD)) << 0x1c) >> 0x1c);
    *((u8*)(*((u32*)(r4 + (0x8b << 2))) + 0x17)) = 0;
    sub_0208B068(r4, 0x15, ((*((u8*)(r4 + 0x000007BD)) << 0x1c) >> 0x1c));
    // tst r1, r2
    PlaySE((0x25 << 6), 2);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000428)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x0000042C)), 0);
    sub_0208AF08(r4, 0);
    sub_0208B044(r4, 8);
    sub_0208AE88();
    // mvn r1, r1
    PlaySE(0x000005DD, 0);
    *((u8*)(*((u32*)(r4 + (0x8b << 2))) + 0x16)) = ((*((u8*)(r4 + 0x000007BD)) << 0x1c) >> 0x1c);
    *((u8*)(*((u32*)(r4 + (0x8b << 2))) + 0x17)) = 0;
    sub_0208B068(r4, 0x15, ((*((u8*)(r4 + 0x000007BD)) << 0x1c) >> 0x1c));
    PlaySE((0x25 << 6));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000428)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x0000042C)), 0);
    sub_0208AF08(r4, 0);
    sub_0208B044(r4, 8);
}





void sub_020892F4(void) {
}





void sub_02089308(void) {
}





void sub_0208931C(void) {
    // tst r5, r1
    // sub r1, #0x21
    sub_0208AB58(0x20, *((u32*)(gSystem + 0x4c)), gSystem);
    // tst r1, r2
    sub_0208AB58(0xc, 1);
    // tst r5, r1
    // sub r1, #0x43
    sub_0208AB58(0xc, 0x40);
    // tst r1, r2
    sub_0208AB58(0xc, 3);
    // tst r1, r2
    PlaySE((0x25 << 6), 3, *((u32*)(r3 + 0x48)));
    sub_0208B0F4(r4, 0xb);
    sub_0208AEC4();
    // mvn r1, r1
    Sprite_GetDrawFlag(*((u32*)(r4 + 0x00000504)), 0);
    PlaySE(0x000005DC);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000504)), 2);
    Sprite_GetDrawFlag(*((u32*)(r4 + 0x00000508)));
    PlaySE(0x000005DC);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000508)), 3);
    PlaySE((0x25 << 6));
    sub_0208B0F4(r4, 0xb);
    // strb r0, [r4, r1]
    PlaySE(0x000005DC, 0x000007C4, *((u8*)(r4 + 0x000007C4)));
    sub_0208AB58(r4, 0);
}





void sub_0208942C(void) {
    Sprite_IsAnimated(*((u32*)(r0 + 0x00000504)));
    // mvn r1, r1
    sub_0208AB58(r4, 8);
}





void sub_02089454(void) {
    Sprite_IsAnimated(*((u32*)(r0 + 0x00000508)));
    sub_0208AB58(r4, 9);
}





void sub_02089478(void) {
    // tst r1, r2
    sub_0208A520(*((u8*)(*((u32*)(r0 + (0x8b << 2))) + 0x11)), *((u32*)(gSystem + 0x48)));
    AllocMonZeroed(0x13);
    CopyBoxPokemonToPokemon(r6, r0);
    sub_0208A520();
    // strb r2, [r5, r0]
    GetMonData(r0, 0x13, 0);
    // strb r0, [r5, r1]
    // strb r0, [r5, r1]
    GetMonData(r4, 0x14, 0);
    // strb r0, [r5, r1]
    // strb r0, [r5, r1]
    GetMonData(r4, 0x15, 0);
    // strb r0, [r5, r1]
    // strb r0, [r5, r1]
    GetMonData(r4, 0x16, 0);
    // strb r0, [r5, r1]
    // strb r0, [r5, r1]
    GetMonData(r4, 0x17, 0);
    // strb r0, [r5, r1]
    // strb r0, [r5, r1]
    GetMonData(r4, 0x18, 0);
    // strb r0, [r5, r1]
    // sub r1, #0x4e
    Heap_Free(r4, 0x0000027A);
    LoadFontPal1(0, (7 << 6), 0x13);
    Options_GetFrame(*((u32*)(*((u32*)(r5 + (0x8b << 2))) + 4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r5), 1, 0x000003E2, 0xd);
    sub_0208DDA0(r5, 0xfe);
    sub_0208E174(r5);
    sub_0208BCD4(r5);
    sub_0208BDC8(r5);
}





void sub_02089608(void) {
    // tst r0, r1
    // lsl r4, r1
    // tst r3, r4
    sub_0208DDA0(r0, 0, *((u8*)(r0 + 0x000007BE)), *((u8*)(r0 + 0x000007BE)));
    // eor r1, r4
    // strb r1, [r5, r0]
}





void sub_02089658(void) {
    // tst r0, r1
}





void sub_02089670(void) {
}





void sub_02089680(void) {
}





void sub_02089698(void) {
    // add r0, #0xc
    // str r0, [sp]
    // add r0, #0xd
    // add r1, #0xf
    // add r2, #0xa
    // str r0, [sp, #4]
    // add r0, #0xe
    // add r3, #0xb
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r0), *((u8*)(r0 + 0x000007BE)), *((u8*)(r0 + 0x000007BE)), *((u8*)(r0 + 0x000007BE)));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), *((u8*)(r4 + 0x000007CD)));
    // strb r1, [r4, r0]
    // add r0, #0x10
    // add r0, #0x10
    // strb r1, [r4, r0]
    // add r0, #0x10
    // add r0, #0xc
    // str r0, [sp]
    // add r0, #0xd
    // add r1, #0xf
    // add r2, #0xa
    // str r0, [sp, #4]
    // add r0, #0xe
    // add r3, #0xb
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r4), *((u8*)(r4 + r3)), *((u8*)(r4 + r3)), *((u8*)(r4 + r3)));
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), *((u8*)(r4 + 0x000007CD)));
    // strb r0, [r4, r1]
    // sub r0, #0x10
    // sub r1, #0x10
    // strb r0, [r4, r1]
    // add r0, #0x10
    // add r0, #0x10
    // strb r1, [r4, r0]
    // add r0, #0x10
    // strb r0, [r4, r3]
    // add r3, #0x11
}





void sub_02089794(void) {
    // mvn r1, r1
    sub_0208A2C0(0);
    sub_0208A2C0(1);
    sub_0208B118(r4);
}





void sub_020897C0(void) {
    // add r2, r4, r2
    // add r2, r4, r2
}





void sub_020897F0(void) {
}





void sub_0208981C(void) {
    AcquireMonLock(r1);
    // str r0, [sp, #4]
    GetMonData(r5, 5, 0);
    *((u16*)(r4 + 0xc)) = r0;
    Mon_GetBoxMon(r5);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r7 + (0x7a << 4))), 0xb, *((u32*)(r7 + (0x7a << 4))));
    BufferBoxMonSpeciesName(*((u32*)(r7 + 0x000007A8)), 0, r6);
    StringExpandPlaceholders(*((u32*)(r7 + 0x000007A8)), *((u32*)(r7 + (0x23 << 4))), *((u32*)(r7 + (0x000007A8 + 4))));
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r7 + (0x7a << 4))), 0, *((u32*)(r7 + (0x7a << 4))));
    BufferBoxMonNickname(*((u32*)(r7 + 0x000007A8)), 0, r6);
    StringExpandPlaceholders(*((u32*)(r7 + 0x000007A8)), *((u32*)(r7 + (0x8d << 2))), *((u32*)(r7 + (0x000007A8 + 4))));
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r7 + (0x7a << 4))), 0xe, *((u32*)(r7 + (0x7a << 4))));
    BufferBoxMonOTName(*((u32*)(r7 + 0x000007A8)), 0, r6);
    StringExpandPlaceholders(*((u32*)(r7 + 0x000007A8)), *((u32*)(r7 + (0x8e << 2))), *((u32*)(r7 + (0x000007A8 + 4))));
    GetMonData(r5, 6, 0);
    *((u16*)(r4 + 0xe)) = r0;
    GetMonData(r5, 0xa1, 0);
    // and r0, r2
    *((u8*)(r4 + 0x12)) = (0x7f | (*((u8*)(r4 + 0x12)) & ~(0x7f)));
    GetMonData(r5, 0x4c, 0);
    // and r1, r2
    *((u32*)(r4 + 0x50)) = (((r0 << 0x1f) >> 3) | 0xEFFFFFFF);
    GetMonData(r5, 0xb0, 0);
    *((u8*)(r4 + 0x12)) = (*((u8*)(r4 + 0x12)) & ~(0x80));
    *((u8*)(r4 + 0x12)) = (0x80 | *((u8*)(r4 + 0x12)));
    GetMonGender(r5, *((u8*)(r4 + 0x12)));
    // and r0, r2
    *((u8*)(r4 + 0x13)) = (r0 | (*((u8*)(r4 + 0x13)) & ~(3)));
    GetMonData(r5, 0x9b, 0);
    *((u8*)(r4 + 0x13)) = (((((r0 << 0x18) >> 0x18) << 0x1a) >> 0x18) | (*((u8*)(r4 + 0x13)) & ~(0xfc)));
    GetMonData(r5, 0xb1, 0);
    *((u8*)(r4 + 0x10)) = r0;
    GetMonData(r5, 0xb2, 0);
    *((u8*)(r4 + 0x11)) = r0;
    GetMonData(r5, 7, 0);
    *((u32*)(r4 + 0x14)) = r0;
    GetMonData(r5, 8, 0);
    *((u32*)(r4 + 0x18)) = r0;
    GetMonData(r5, 0x9d, 0);
    // add r1, #0x44
    // strb r0, [r1]
    GetMonExpBySpeciesAndLevel(*((u16*)(r4 + 0xc)), ((*((u8*)(r4 + 0x12)) << 0x19) >> 0x19));
    *((u32*)(r4 + 0x1c)) = r0;
    GetMonExpBySpeciesAndLevel(*((u16*)(r4 + 0xc)), (((*((u8*)(r4 + 0x12)) << 0x19) >> 0x19) + 1));
    *((u32*)(r4 + 0x20)) = r0;
    GetMonData(r5, 0xa3, 0);
    *((u16*)(r4 + 0x24)) = r0;
    GetMonData(r5, 0xa4, 0);
    *((u16*)(r4 + 0x26)) = r0;
    GetMonData(r5, 0xa5, 0);
    *((u16*)(r4 + 0x28)) = r0;
    GetMonData(r5, 0xa6, 0);
    *((u16*)(r4 + 0x2a)) = r0;
    GetMonData(r5, 0xa8, 0);
    *((u16*)(r4 + 0x2c)) = r0;
    GetMonData(r5, 0xa9, 0);
    *((u16*)(r4 + 0x2e)) = r0;
    GetMonData(r5, 0xa7, 0);
    *((u16*)(r4 + 0x30)) = r0;
    GetMonData(r5, 0xa, 0);
    // add r1, #0x32
    // strb r0, [r1]
    GetMonNature(r5, r4);
    // add r1, #0x33
    // strb r0, [r1]
    // add r0, r4, r0
    // str r0, [sp]
    // add r1, #0x36
    GetMonData(r5, 0, 0);
    // ldr r1, [sp]
    *((u16*)(r1 + 0x34)) = r0;
    // add r1, #0x3a
    GetMonData(r5, r6, 0);
    // add r1, r4, r6
    // add r1, #0x3c
    // strb r0, [r1]
    // add r1, #0x3e
    GetMonData(r5, r6, 0);
    // ldr r0, [sp]
    GetMoveMaxPP(*((u16*)((r0 << 0x18) + 0x34)), ((r0 << 0x18) >> 0x18));
    // add r1, r4, r6
    // add r1, #0x40
    // strb r0, [r1]
    GetMonData(r5, 0x13, 0);
    // add r1, #0x45
    // strb r0, [r1]
    GetMonData(r5, 0x14, 0);
    // add r1, #0x46
    // strb r0, [r1]
    GetMonData(r5, 0x15, 0);
    // add r1, #0x47
    // strb r0, [r1]
    GetMonData(r5, 0x16, 0);
    // add r1, #0x48
    // strb r0, [r1]
    GetMonData(r5, 0x17, 0);
    // add r1, #0x49
    // strb r0, [r1]
    GetMonData(r5, 0x18, 0);
    // add r1, #0x4a
    // strb r0, [r1]
    // add r0, #0x4b
    // strb r1, [r0]
    MonGetFlavorPreference(r5, 0);
    // add r0, #0x4b
    // strb r6, [r0]
    GetMonData(r5, 0xb, 0);
    // add r1, #0x4c
    // strh r0, [r1]
    GetMonData(r5, 0x70, 0);
    // add r1, #0x4e
    // strh r0, [r1]
    Pokemon_GetStatusIconId(r5, r4);
    // and r2, r1
    // and r0, r1
    *((u32*)(r4 + 0x50)) = (r0 | *((u32*)(r4 + 0x50)));
    Pokemon_IsImmuneToPokerus(r5, 0x0FFFFFFF, *((u32*)(r4 + 0x50)));
    // and r1, r0
    *((u32*)(r4 + 0x50)) = ((2 << 0x1e) | *((u32*)(r4 + 0x50)));
    Pokemon_HasPokerus(r5, *((u32*)(r4 + 0x50)));
    // and r2, r1
    *((u32*)(r4 + 0x50)) = ((0x3FFFFFFF + 1) | *((u32*)(r4 + 0x50)));
    // add r0, #0x50
    // and r1, r2
    // str r1, [r0]
    // and r0, r1
    *((u32*)(r4 + 0x50)) = 0x3FFFFFFF;
    MonIsShiny(r5, *((u32*)(r4 + 0x50)), *((u32*)r4));
    // and r0, r1
    *((u32*)(r4 + 0x50)) = 0xDFFFFFFF;
    *((u32*)(r4 + 0x54)) = 0;
    *((u32*)(r4 + 0x58)) = 0;
    *((u32*)(r4 + 0x5c)) = 0;
    *((u32*)(r4 + 0x60)) = 0;
    // strb r6, [r7, r0]
    GetRibbonAttr(((0 << 0x18) >> 0x18), 0);
    GetMonData(r5, r0, 0);
    // add r0, r4, r0
    // and r2, r1
    // lsl r1, r2
    *((u32*)(((r6 >> 5) << 2) + 0x54)) = (1 | *((u32*)(((r6 >> 5) << 2) + 0x54)));
    // strb r1, [r7, r0]
    // add r1, #0xb5
    GetMonData(r5, 0, 0, *((u32*)(((r6 >> 5) << 2) + 0x54)));
    // add r1, r7, r4
    // strb r0, [r1, r6]
    // ldr r1, [sp, #4]
    ReleaseMonLock(r5);
}





void sub_02089C50(void) {
    // sub r2, #0x44
    // add r1, sp, #4
    sub_020729A4(*((u32*)(r0 + 0x000007B8)), *((u16*)(r0 + (0xa << 6))), 1);
    // sub r1, #0x83
    // add r0, sp, #4
    // sub r2, #0x10
    // str r0, [sp]
    sub_02006EA0(*((u32*)(*((u32*)(r4 + (0x8f << 2))) + 0x28)), 0, 0x64, 0);
    // add r2, #0x42
    // add r1, sp, #4
    sub_020062E0(*((u8*)r1), ((*((u16*)(r4 + r2)) << 0x18) >> 0x18));
}





void sub_02089CB4(void) {
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    sub_0208B448(r0, 1);
    sub_0208B5A8(r4);
    sub_0208C2A0(r4);
    sub_0208BD38(r4);
    sub_0208BCD4(r4);
    sub_0208C42C(r4);
    sub_0208CBD4(r4);
    sub_02089F98(r4);
    sub_0208B9C8(r4);
    sub_0208A8F4(r4);
    sub_0208B400(r4);
    sub_0208BF9C(r4);
    sub_0208BFD0(r4);
}





void sub_02089D40(void) {
    // add r0, #0x15
    // lsl r2, r5
    // strb r2, [r0]
}





void sub_02089D68(void) {
    // ldrsb r1, [r5, r1]
    sub_0208C4E0(0x000007BC);
    // strb r4, [r5, r0]
    sub_0208B448(r5);
    sub_0208B5A8(r5);
    sub_0208B89C(r5);
    sub_0208B9C8(r5);
    sub_0208C2A0(r5);
    sub_0208BCD4(r5);
    sub_0208C42C(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r5), 1, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)r5), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r5), 4, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)r5), 4);
    sub_0208CBD4(r5);
    sub_02089F98(r5);
    sub_0208A950(r5);
}





void sub_02089E14(void) {
    PlaySE(0x000005E1);
    sub_02089D68(r5, ((r4 << 0x18) >> 0x18));
}





void sub_02089E30(void) {
    // ldrsb r1, [r3, r0]
    // mov ip, r1
    // sub r0, #0x54
    // add r1, r1, r2
    // asr r1, r1, #0x18
    // bpl _02089E60
    // lsl r5, r1
    // tst r5, r0
    // mov r0, ip
    sub_02089E14(r0, 0, r1, r0);
}





void sub_02089E80(void) {
    // lsl r2, r1
    // tst r1, r2
}





void sub_02089E98(void) {
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02089EBA: ; jump table
    // asr r1, r1, #0x18
    // asr r1, r1, #0x18
}





void sub_02089F50(void) {
    // add r1, sp, #0xc
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    // add r2, #0xc
}





void sub_02089F98(void) {
    // ldrsb r1, [r4, r1]
    sub_02089F50(*((u32*)r0), 0xb, 3);
    // ldrsb r3, [r4, r2]
    sub_02089F50(r4, *((u32*)r4), *((u32*)(_021039B8 + (r3 * 0xc))), 3);
    // ldrsb r3, [r4, r2]
    sub_02089F50(r4, *((u32*)r4), *((u32*)(_021039B8 + (r3 * 0xc))), 6);
    ScheduleSetBgPosText(*((u32*)r4), 5, 0, 0x80);
    ScheduleSetBgPosText(*((u32*)r4), 5, 3, 0);
    sub_0208AF70(r4);
    // add r0, #0x54
    // ldrsb r3, [r4, r2]
    sub_02089F50(r4, *((u32*)r4), *((u32*)(_021039B8 + (r3 * 0xc))), 6);
    sub_02089E80(r4, 2);
    // ldrsb r3, [r4, r2]
    sub_02089F50(r4, *((u32*)r4), *((u32*)(_021039B8 + (r3 * 0xc))), 6);
    // ldrsb r0, [r4, r0]
    sub_02089F50(r4, *((u32*)r4), 0x4d, 6);
    sub_02089F50(r4, *((u32*)r4), 0x4e, 6);
    sub_020196E8(*((u32*)(r4 + (0x7d << 4))), 4, 0x14, 4);
    sub_0208B118(r4);
    // ldrsb r0, [r4, r0]
    sub_0208A1A0(r4);
    sub_0208A0EC(r4);
}





void sub_0208A0EC(void) {
    CalculateHpBarColor(*((u16*)(r0 + (0x95 << 2))), *((u16*)(r0 + ((0x95 << 2) + 2))), 0x30);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0208A112: ; jump table
    CalculateHpBarPixelsLength(*((u16*)(r6 + (0x95 << 2))), *((u16*)(r6 + ((0x95 << 2) + 2))), 0x30);
    // add r0, #8
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x10]
    // add r0, r7, r4
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r3, #0xa
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r6), 3, ((((r7 << 0x10) >> 0x10) << 0x10) >> 0x10), ((0 << 0x18) >> 0x18));
    // sub r4, #8
    ScheduleBgTilemapBufferTransfer(*((u32*)r6), 3);
}





void sub_0208A1A0(void) {
    // add r0, #0xa
    // add r1, #0xe
    // sub r1, r1, r0
    // sub r0, r2, r0
    CalculateHpBarPixelsLength(0, 0, 0x38);
    // add r0, r4, r0
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r3, #9
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r6), 6, ((0x0000E037 << 0x10) >> 0x10), ((0 << 0x18) >> 0x18));
    // sub r4, #8
    ScheduleBgTilemapBufferTransfer(*((u32*)r6), 6);
}





void sub_0208A234(void) {
    // ldr r2, [r4, r2]
}





void sub_0208A2C0(void) {
    // mvn r0, r0
}





void sub_0208A2E0(void) {
    // mvn r0, r0
}





void sub_0208A310(void) {
    // add r0, r4, r6
    // add r0, r4, r6
    // add r0, r4, r6
    // add r0, r4, r6
}





void sub_0208A3CC(void) {
    // ldrsb r0, [r0, r1]
}





void sub_0208A3F4(void) {
    // str r1, [sp]
    // ldrsb r4, [r1, r0]
    // ldr r0, [sp]
    // add r0, r4, r0
    // asr r4, r0, #0x18
    // bmi _0208A41A
    // mvn r0, r0
    // add r0, r6, r7
    // add r0, r6, r7
}





void sub_0208A45C(void) {
    // ldrsb r4, [r1, r0]
    // add r0, r4, r7
    // asr r4, r0, #0x18
    // bmi _0208A480
    // mvn r0, r0
}





void sub_0208A4B8(void) {
    // str r1, [sp]
    // ldrsb r4, [r1, r0]
    // ldr r0, [sp]
    // add r0, r4, r0
    // asr r4, r0, #0x18
    // bmi _0208A4DE
    // mvn r0, r0
    // add r0, r6, r7
    // add r0, r6, r7
}





void sub_0208A520(void) {
    // add r0, r2, r0
    // add r0, r2, r0
}





void sub_0208A564(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x00000428)), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000428)), 0);
    ScheduleSetBgPosText(*((u32*)r4), 5, 0, 0);
    ScheduleSetBgPosText(*((u32*)r4), 5, 3, 0);
    // add r0, #0x44
    ClearWindowTilemapAndScheduleTransfer(r4);
    // strb r1, [r4, r0]
    Bg_GetXpos(*((u32*)r4), 5);
    ScheduleSetBgPosText(*((u32*)r4), 5, 0, 0x80);
    // strb r1, [r4, r0]
    ScheduleSetBgPosText(0x000007BE, 5, 1, 0x40);
    sub_0208DB1C();
    sub_0208A79C(r4);
    thunk_Sprite_SetDrawFlag(*((u32*)(r4 + (0x43 << 4))), 1);
    sub_0208C068(r4);
    thunk_Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000434)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000428)), 1);
    // strb r1, [r4, r0]
}





void sub_0208A63C(void) {
    thunk_Sprite_SetDrawFlag(*((u32*)(r0 + (0x43 << 4))), 0);
    thunk_Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000434)), 0);
    thunk_Sprite_SetDrawFlag(*((u32*)(r4 + 0x0000044C)), 0);
    thunk_Sprite_SetDrawFlag(*((u32*)(r4 + (0x45 << 4))), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000428)), 0);
    sub_0208DB58(r4);
    sub_0208DAD4(r4);
    // strb r1, [r4, r0]
    Bg_GetXpos(*((u32*)r4), 5);
    ScheduleSetBgPosText(*((u32*)r4), 5, 0, 0);
    // strb r1, [r4, r0]
    ScheduleSetBgPosText(0x000007BE, 5, 2, 0x40);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x81 << 2));
    // add r0, #0x64
    ScheduleWindowCopyToVram(r4);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x7d << 2));
    // add r0, #0x44
    ScheduleWindowCopyToVram(r4);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000428)), 1);
    sub_0208B400(r4);
    // strb r1, [r4, r0]
}





void sub_0208A71C(void) {
    // asr r2, r0, #0x18
    // add r2, r2, r1
    // asr r2, r2, #0x18
    // bpl _0208A75A
    // add r7, r5, r7
    // and r1, r2
    // strb r0, [r5, r3]
}





void sub_0208A79C(void) {
    sub_0208BBDC();
    sub_0208A7F8(r4, *((u16*)(*((u32*)(r4 + (0x8b << 2))) + 0x18)));
    // mvn r1, r1
    sub_0208A7F8(r4, 0);
    // mvn r1, r1
    sub_0208A7F8(r4, 0);
    // add r2, r4, r1
    sub_0208A7F8(r4, *((u16*)(r2 + (0x99 << 2))));
}





void sub_0208A7F8(void) {
    // mvn r2, r2
    sub_0208DAD4(0);
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + 0x0000044C)), 0);
    sub_0208D9A0();
    sub_0208BB8C(r5, r4);
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + 0x0000044C)), 1);
}





void sub_0208A834(void) {
    sub_0208A520();
    BoxMonSwapMoves(((*((u8*)(r4 + 0x000007BD)) << 0x1c) >> 0x1c), ((*((u8*)(r4 + 0x000007BD)) << 0x18) >> 0x1c));
    MonSwapMoves(((*((u8*)(r4 + r1)) << 0x1c) >> 0x1c), ((*((u8*)(r4 + r1)) << 0x18) >> 0x1c));
    // add r5, r4, r1
    // add r6, r4, r6
    // strh r6, [r5, r3]
    // add r3, r4, r3
    // strh r2, [r3, r1]
    // add r2, #8
    // add r5, r4, r2
    // add r7, r4, r6
    // add r6, #8
    // strb r6, [r5, r3]
    // add r5, r4, r3
    // add r3, #8
    // strb r2, [r5, r3]
    // add r2, #0xc
    // add r5, r4, r2
    // add r7, r4, r6
    // add r6, #0xc
    // strb r6, [r5, r3]
    // add r3, r4, r0
    // add r0, #0xc
    // strb r2, [r3, r0]
    // sub r1, #0x38
    *((u32*)(*((u32*)(r4 + (0x99 << 2))) + 0x38)) = 1;
}





void sub_0208A8F4(void) {
    ScheduleSetBgPosText(*((u32*)r0), 2, 0, 0);
    sub_0208DB1C(r4);
    sub_0208A79C(r4);
    thunk_Sprite_SetDrawFlag(*((u32*)(r4 + (0x43 << 4))), 1);
    sub_0208C068(r4);
    thunk_Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000434)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000428)), 1);
}





void sub_0208A950(void) {
    sub_0208DB1C();
    sub_0208A79C(r4);
    sub_0208C068(r4);
    // ldrsb r0, [r4, r0]
    sub_0208C208(r4);
    thunk_Sprite_SetDrawFlag(*((u32*)(r4 + (0x43 << 4))), 1);
    thunk_Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000434)), 1);
    ScheduleSetBgPosText(*((u32*)r4), 2, 3, 0);
    sub_0208C0E8(r4);
    // add r3, #0xfd
    ScheduleSetBgPosText(*((u32*)r4), 2, 3, 3);
}





void sub_0208A9C4(void) {
    ScheduleSetBgPosText(*((u32*)r0), 5, 0, 0);
    ScheduleSetBgPosText(*((u32*)r4), 5, 3, 0);
    Sprite_SetPriority(*((u32*)(r4 + 0x00000428)), 3);
    thunk_Sprite_SetPaletteOverride(*((u32*)(r4 + 0x00000428)), 0);
    // add r0, r4, r0
    ClearWindowTilemapAndScheduleTransfer((0x75 << 2));
    // add r0, r4, r0
    ClearWindowTilemapAndScheduleTransfer((0x5d << 2));
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r4 + (0x89 << 2))));
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    Bg_GetYpos(*((u32*)r4), 5);
    ScheduleSetBgPosText(*((u32*)r4), 5, 3, 0x48);
    // strb r1, [r4, r0]
    ScheduleSetBgPosText(0x000007BE, 5, 4, 0x24);
    Sprite_SetDrawFlag(*((u32*)(r4 + (5 << 8))), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x0000050C)), 1);
    sub_0208AB58(r4, 0);
    // strb r1, [r4, r0]
}





void sub_0208AA9C(void) {
    // strb r2, [r4, r0]
    // strb r2, [r4, r0]
    // add r0, #0x10
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r0 + (0x89 << 2))), 0x000007BE, 0);
    // add r0, #0x20
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r4 + (0x89 << 2))));
    sub_0208C2A0(r4);
    // strb r1, [r4, r0]
    Bg_GetYpos(*((u32*)r4), 5);
    ScheduleSetBgPosText(*((u32*)r4), 5, 3, 0);
    // strb r1, [r4, r0]
    ScheduleSetBgPosText(0x000007BE, 5, 5, 0x24);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x75 << 2));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x5d << 2));
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    Sprite_SetPriority(*((u32*)(r4 + 0x00000428)), 0);
    thunk_Sprite_SetPaletteOverride(*((u32*)(r4 + 0x00000428)), 2);
    // strb r1, [r4, r0]
}





void sub_0208AB58(void) {
    _s32_div_f(*((u8*)(r0 + 0x000007C4)), 3);
    // strb r1, [r5, r0]
    // mvn r2, r2
    _s32_div_f(r7, 3, 0);
    // strb r1, [r5, r0]
    // add r1, r2, r1
    // strb r2, [r5, r1]
    _s32_div_f(*((u8*)(r5 + 0x000007C4)), 3, (*((u8*)(r5 + (0x000007C4 + 1))) + 1));
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // strb r2, [r5, r1]
    _s32_div_f(*((u8*)(r5 + 0x000007C4)), 3, (*((u8*)(r5 + (0x000007C4 + 1))) - 1));
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // add r1, r2, r1
    // strb r1, [r5, r0]
    // sub r2, #8
    // strb r1, [r5, r0]
    // mvn r0, r0
    PlaySE(0x000005DC, *((u8*)(r5 + 0x000007C4)), *((u8*)(r5 + (0x000007C4 + 2))));
    sub_0208ACDC(r5, *((u8*)(r5 + 0x000007C4)));
    // strb r0, [r5, r1]
    sub_0208C380(r5, 0x000007C7);
    sub_0208C320(r5);
    sub_0208D7C4(r5);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000504)), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + r0)), 0);
    // add r1, r2, r1
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000508)), 1, (*((u8*)(r5 + 0x000007C5)) + 1));
    Sprite_SetDrawFlag(*((u32*)(r5 + r0)), 0);
}





void sub_0208ACDC(void) {
    // add r2, r3, r2
    // add r1, r1, r2
    // and r7, r3
    // lsl r3, r7
    // add r7, r0, r7
    // tst r3, r7
}





void sub_0208AD34(void) {
}





u8 sub_0208AD54(void) {
}





u8 sub_0208AD58(void) {
}





u8 sub_0208AD5C(void) {
}





u8 sub_0208AD60(void) {
}





u32 Pokemon_GetStatusIconId(void) {
    // mov r1, #MON_DATA_STATUS
    // mov r1, #MON_DATA_HP
    // mov r0, #MON_STATUS_PSN_MASK|MON_STATUS_TOX_MASK
    // tst r0, r4
    // mov r0, #MON_STATUS_SLP_MASK
    // tst r1, r0
    // mov r1, #MON_STATUS_BRN_MASK
    // tst r1, r4
    // mov r1, #MON_STATUS_FRZ_MASK
    // tst r1, r4
    // mov r1, #MON_STATUS_PRZ_MASK
    // tst r1, r4
}





void sub_0208ADB8(void) {
}





void sub_0208ADCC(void) {
    // bx r3
    // nop
    // _0208ADD4: .word TouchscreenHitbox_FindRectAtTouchNew
    // _0208ADD8: .word _021038D4
}





void sub_0208ADDC(void) {
    TouchscreenHitbox_FindRectAtTouchNew(_021038D4);
    // mvn r1, r1
    TouchscreenHitbox_TouchNewIsIn(_021038AC, 0);
    // mvn r0, r0
}





void sub_0208AE08(void) {
    TouchscreenHitbox_FindRectAtTouchNew(_021038D4);
    // mvn r1, r1
    TouchscreenHitbox_TouchNewIsIn(_021038B0, 0);
    TouchscreenHitbox_TouchNewIsIn(_021038AC);
    // mvn r0, r0
}





void sub_0208AE48(void) {
    TouchscreenHitbox_FindRectAtTouchNew(_021038D4);
    // mvn r1, r1
    TouchscreenHitbox_TouchNewIsIn(_021038B4, 0);
    TouchscreenHitbox_TouchNewIsIn(_021038AC);
    // mvn r0, r0
}





void sub_0208AE88(void) {
    TouchscreenHitbox_TouchNewIsIn(_021038B4);
    TouchscreenHitbox_TouchNewIsIn(_021038AC);
    // mvn r0, r0
}





void sub_0208AEB4(void) {
    // bx r3
    // nop
    // _0208AEBC: .word TouchscreenHitbox_FindRectAtTouchNew
    // _0208AEC0: .word _021038B8
}





void sub_0208AEC4(void) {
    // bx r3
    // nop
    // _0208AECC: .word TouchscreenHitbox_FindRectAtTouchNew
    // _0208AED0: .word _021039E8
}





void sub_0208AED4(void) {
    Sprite_SetAnimCtrlSeq(*((u32*)(r0 + 0x00000428)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x0000042C)), 1);
    sub_0208BCB4(r4);
    sub_0208AF08(r4, 1);
}





void sub_0208AF08(void) {
    sub_020196E8(*((u32*)(r0 + (0x7d << 4))), 0, 0, 0x12);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000448)), 0);
    sub_0208DC68(r4, 1);
    sub_020196E8(*((u32*)(r4 + (0x7d << 4))), 1, 0, 0x12);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000448)), 1);
    sub_0208AF70();
    sub_0208DC68(r4, 0);
}





void sub_0208AF70(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r0), 6, 0x00003006, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 6);
}





void sub_0208AFA0(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}





void sub_0208AFE8(void) {
    // strb r2, [r4, r5]
    // strb r3, [r4, r0]
    // add r2, sp, #0
    // strb r3, [r4, r0]
    // strb r3, [r4, r0]
    // and r6, r0
    // strb r6, [r4, r3]
    // strb r3, [r4, r2]
    // strb r1, [r4, r2]
    // strb r2, [r4, r1]
    // add r1, sp, #0x20
    // strb r2, [r4, r1]
}





void sub_0208B044(void) {
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
}





void sub_0208B068(void) {
}





void sub_0208B08C(void) {
}





void sub_0208B0B0(void) {
    // str r1, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r1, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
}





void sub_0208B0F4(void) {
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
}





void sub_0208B118(void) {
    // mvn r1, r1
    // mvn r1, r1
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // mvn r1, r1
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




