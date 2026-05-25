/* Decompiled from asm/overlay_45_thumb.s */
#include "global.h"

void ov45_02229EE0(void) {
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    LoadDwcOverlay();
    LoadOVY38();
    sub_02039FD8(3);
    Heap_Create(3, 0x6f, (5 << 0xc));
    OverlayManager_CreateAndGetData(r4, 0x10, 0x6f);
    // strb r0, [r2]
    OverlayManager_GetArgs(r4, (0x10 - 1), (r0 + 1));
    // str r0, [r5]
    ov45_02229FF4(*((u32*)(r0 + 4)), 0x6f);
    *((u32*)(r5 + 4)) = r0;
    // str r0, [sp]
    ov45_0222CD1C(*((u32*)(r4 + 8)), *((u32*)(r4 + 4)), *((u32*)r4), *((u32*)(r5 + 4)));
    *((u32*)(r5 + 8)) = r0;
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    SysTask_CreateOnVWaitQueue(ov45_02229FE0, r5, 0);
    *((u32*)(r5 + 0xc)) = r0;
    ov45_0222CD84(*((u32*)(r5 + 8)));
}





void ov45_02229F70(void) {
}





void ov45_02229F94(void) {
    OverlayManager_GetData();
    SysTask_Destroy(*((u32*)(r0 + 0xc)));
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    ov45_0222CD68(*((u32*)(r4 + 8)));
    ov45_0222A0F0(*((u32*)(r4 + 4)));
    OverlayManager_FreeData(r5);
    Heap_Destroy(0x6f);
    UnloadOverlayByID(FS_OVERLAY_ID);
    UnloadOVY38();
    UnloadDwcOverlay();
}





void ov45_02229FE0(void) {
}





void ov45_02229FF4(void) {
    Heap_Alloc(r1, (0x53 << 4));
    memset(0, (0x53 << 4));
    // str r5, [r4]
    // str r7, [r4, r0]
    // str r0, [sp, #4]
    // add r3, sp, #4
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r4, [sp]
    ov45_0222E5D4(r7, *((u32*)r4), 0x94);
    ov45_0222D860(r7);
    *((u32*)(r4 + 4)) = r0;
    PlayerProfile_New(r7);
    // add r1, #0xe8
    // str r0, [r1]
    // add r0, r4, r0
    ov45_0222B8A0((0x42 << 2), *((u32*)r4), r7);
    // add r0, r4, r0
    ov45_0222BD40((7 << 6));
    // add r0, r4, r0
    ov45_0222BD30((0x7a << 2));
    ov45_0222EE20(ov45_02254AC4, 8, r4);
    // add r0, r4, r0
    ov45_0222BC3C((0x7f << 2));
    // add r0, r4, r0
    ov45_0222C388((0x83 << 2));
    // add r0, r4, r0
    ov45_0222C8AC((0xeb << 2));
    // add r0, r4, r0
    ov45_0222C978((0xf9 << 2), r7);
    // add r0, r4, r0
    ov45_0222CB44(0x000004BC, *((u32*)r4));
    // add r0, r4, r0
    ov45_0222BCC8(0x00000508, r7);
}





void ov45_0222A0F0(void) {
    // add r0, r6, r0
    // add r1, sp, #0
    ov45_0222AB0C((0x4a << 2));
    sub_020318E8(*((u32*)r6));
    // ldr r1, [sp]
    sub_020318FC();
    // ldr r1, [sp, #4]
    sub_02031900(r4);
    // add r0, r6, r0
    ov45_0222BCD8(0x00000508);
    // add r0, r6, r0
    ov45_0222C994((0xf9 << 2));
    ov45_0222EE80();
    ov45_0222D890(*((u32*)(r6 + 4)));
    // add r0, #0xe8
    Heap_Free(*((u32*)r6));
    ov45_0222E688();
    Heap_Free(r6);
}





void ov45_0222A15C(void) {
    ov45_0222D8A4(*((u32*)(r0 + 4)));
    // add r0, sp, #0
    ov45_0222ECB8();
    // add r1, sp, #0
    // ldmia r0!, {r2, r3}
    // add r0, #0xd8
    // stmia r0!, {r2, r3}
    // add r0, #0xd4
    ov45_0222D500(r4);
    ov45_0222B840(r4);
    // add r0, r4, r0
    ov45_0222BE5C((7 << 6));
    // add r0, r4, r0
    ov45_0222BD30((0x7a << 2));
    // add r0, #0xf8
    ov45_0222BB58(r4);
    // add r0, r4, r2
    // add r2, #0x10
    // add r1, #0xf8
    // add r2, r4, r2
    // add r3, r4, r3
    ov45_0222BB60(r4, (0x7f << 2), 0x0000049C);
    // add r0, r4, r0
    ov45_0222BCB8((0x3a << 4));
    // add r0, r4, r0
    ov45_0222C3B0((0x83 << 2));
    // add r0, r4, r0
    ov45_0222CAA0(0x0000049C);
    // add r0, r4, r0
    ov45_0222CCDC(0x000004BC);
    // str r1, [r4, r0]
}





void ov45_0222A1F8(void) {
    // bx lr
    // TODO: decompile
}





void ov45_0222A1FC(void) {
    // ldr r1, _0222A204 ; =0x0000052C
    // ldr r0, [r0, r1]
    // bx lr
    // nop
    // _0222A204: .word 0x0000052C
    // TODO: decompile
}





void ov45_0222A208(void) {
}





void ov45_0222A210(void) {
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}





void ov45_0222A214(void) {
}





void ov45_0222A22C(void) {
    // add r0, #0xd4
}





void ov45_0222A230(void) {
    // lsl r3, r1
    // add r1, #0xf8
    // tst r1, r3
    // add r1, #0xf8
    // mvn r1, r3
    // and r1, r4
    // add r0, #0xf8
    // str r1, [r0]
}





void ov45_0222A25C(void) {
    // lsl r3, r1
    // add r1, #0xfc
    // tst r1, r3
    // add r1, #0xfc
    // mvn r1, r3
    // and r1, r4
    // add r0, #0xfc
    // str r1, [r0]
}





void ov45_0222A288(void) {
    // lsl r2, r1
    // tst r1, r2
}





void ov45_0222A2A0(void) {
    // lsl r5, r1
    // tst r2, r5
    // mvn r2, r5
    // and r2, r3
    // str r2, [r0, r1]
}





void ov45_0222A2C8(void) {
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}





void ov45_0222A2CC(void) {
}





void ov45_0222A2E0(void) {
}





void ov45_0222A2F8(void) {
}





void ov45_0222A310(void) {
    // strb r1, [r0, r2]
}





void ov45_0222A324(void) {
    // ldrb r0, [r0, r1]
}





void ov45_0222A330(void) {
    // ldrb r0, [r0, r1]
}





void ov45_0222A33C(void) {
    // ldrsh r0, [r0, r1]
}





void ov45_0222A35C(void) {
    // ldrsh r2, [r0, r1]
    // sub r1, #8
}





void ov45_0222A374(void) {
    // add r1, #0xa
    // ldrsh r0, [r0, r1]
}





void ov45_0222A394(void) {
    // ldrb r0, [r0, r1]
}





void ov45_0222A3A0(void) {
    // ldrsh r0, [r0, r1]
}





void ov45_0222A3BC(void) {
    // ldrsh r2, [r0, r1]
}





void ov45_0222A3D4(void) {
    // ldrsh r2, [r0, r1]
}





void ov45_0222A3EC(void) {
    // ldrsh r2, [r0, r1]
}





void ov45_0222A404(void) {
    // add r0, r0, r1
}





void ov45_0222A414(void) {
    // add r0, r0, r1
}





void ov45_0222A424(void) {
    // ldr r1, _0222A42C ; =0x0000050C
    // ldr r0, [r0, r1]
    // bx lr
    // nop
    // _0222A42C: .word 0x0000050C
    // TODO: decompile
}





void ov45_0222A430(void) {
    // str r1, [r0, r2]
}





void ov45_0222A43C(void) {
    // add r1, r2, r1
}





void ov45_0222A450(void) {
    // mvn r0, r0
    // add r1, r5, r4
    // strb r6, [r1, r0]
}





void ov45_0222A480(void) {
}





void ov45_0222A498(void) {
    // add r0, r0, r2
}





void ov45_0222A4A8(void) {
    // add r0, r0, r1
}





void ov45_0222A4B8(void) {
    // add r0, r0, r1
}





void ov45_0222A4C8(void) {
    // strb r1, [r0, r2]
}





void ov45_0222A4D0(void) {
    // add r0, #0xa
    // ldrsh r0, [r4, r0]
    Sound_SetSceneAndPlayBGM(0x15, 0x00000481, 0);
    // add r0, r4, r0
    ov45_0222BC84((0x7f << 2));
    Sound_SetSceneAndPlayBGM(0x15, 0x0000047F, 0);
    // add r0, r4, r0
    ov45_0222BC84((0x7f << 2));
}





void ov45_0222A520(void) {
}





void ov45_0222A53C(void) {
}





void ov45_0222A548(void) {
}





void ov45_0222A550(void) {
}





void ov45_0222A578(void) {
    // add r0, sp, #0
    // ldr r1, [sp, #4]
    // mvn r0, r0
    // add r0, r4, r0
}





void ov45_0222A5C0(void) {
    // add r0, r4, r0
    ov45_0222BADC((0x42 << 2), *((u32*)r0));
    // str r1, [r4, r0]
    // add r0, r4, r0
}





void ov45_0222A5E8(void) {
    GF_AssertFail();
    // add r0, r4, r0
    ov45_0222BADC((0x42 << 2), *((u32*)r4));
    // str r1, [r4, r0]
    ov45_0222AFF8(r4, 1);
    ov45_0222B00C(r4);
    ov45_0222EC90(*((u16*)(r4 + (0x71 << 2))));
    ov45_0222BE28(r4, *((u16*)(r4 + (0x71 << 2))));
    // add r0, r4, r0
    ov45_0222BD5C((7 << 6));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A662: ; jump table
    // add r0, r4, r0
    // sub r2, #0x11
    ov45_0222CB74(0x000004BC, 0x10, 0x10);
    // add r0, r4, r0
    // sub r2, #0x12
    ov45_0222CB74(0x000004BC, 0x11, 0x11);
    // add r0, r4, r0
    // sub r2, #0x13
    ov45_0222CB74(0x000004BC, 0x12, 0x12);
    // add r0, r4, r0
    // sub r2, #0x14
    ov45_0222CB74(0x000004BC, 0x13, 0x13);
    // add r0, r4, r0
    // sub r2, #0x15
    ov45_0222CB74(0x000004BC, 0x14, 0x14);
    // add r0, r4, r0
    // sub r2, #0x16
    ov45_0222CB74(0x000004BC, 0x15, 0x15);
    // add r0, r4, r0
    // sub r2, #0x17
    ov45_0222CB74(0x000004BC, 0x16, 0x16);
    // strb r5, [r4, r0]
    // sub r0, #0x63
    // add r0, r4, r0
    ov45_0222BAC4(0x0000016B, *((u32*)r4));
    ov45_0222BA3C(r4);
}





void ov45_0222A704(void) {
    GF_AssertFail();
    // add r0, r5, r0
    ov45_0222CB74(0x000004BC, r4, r6);
    ov45_0222BA3C(r5);
}





void ov45_0222A72C(void) {
    GF_AssertFail();
    // add r0, r5, r0
    ov45_0222BADC((0x42 << 2), *((u32*)r5));
    // str r1, [r5, r0]
    // strb r4, [r5, r0]
    // sub r0, #0x61
    // add r0, r5, r0
    ov45_0222BAC4(0x00000169, *((u32*)r5));
    ov45_0222BA3C(r5);
}





void ov45_0222A770(void) {
    GF_AssertFail();
    GF_AssertFail();
    // add r0, r5, r0
    ov45_0222BADC((0x42 << 2), *((u32*)r5));
    // str r1, [r5, r0]
    // strh r6, [r5, r0]
    // strh r1, [r5, r0]
    // strh r4, [r5, r0]
    // strh r6, [r5, r0]
    // add r0, r5, r0
    ov45_0222BAC4((0x42 << 2), *((u32*)r5));
    ov45_0222BA3C(r5);
}





void ov45_0222A7DC(void) {
    GF_AssertFail();
    // add r0, r5, r0
    ov45_0222BADC((0x42 << 2), *((u32*)r5));
    // str r1, [r5, r0]
    // str r6, [r5, r0]
    // str r4, [r5, r1]
    // add r1, #0x57
    // add r0, #0x57
    // strb r1, [r5, r0]
    ov45_0222B118(r5, 6, (*((u8*)(r5 + (0x6d << 2))) & ~(0xf)));
    // add r0, r5, r0
    ov45_0222BAC4((0x42 << 2), *((u32*)r5));
    ov45_0222BA3C(r5);
}





void ov45_0222A844(void) {
    // add r0, #8
    ov45_0222B28C(8);
    // add r1, #8
    Save_Profile_PlayerName_Set(r4, r5);
    String_New(0x20, r7);
    // str r0, [sp]
    String_New(0x20, r7);
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    PlayerName_FlatToString(r4);
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    FontID_String_AllCharsValid(r6);
    // ldr r0, [sp]
    String_Delete();
    // ldr r0, [sp, #4]
    String_Delete();
    NewMsgDataFromNarc(1, 0x1b, 0x00000309, r7);
    NewString_ReadMsgData(0x40);
    PlayerName_StringToFlat(r4, r0);
    String_Delete(r7);
    DestroyMsgData(r6);
    ov45_0222A9A0(r5);
    PlayerProfile_SetTrainerID(r4, r0);
    ov45_0222A9CC(r5);
    PlayerProfile_SetTrainerGender(r4, r0);
    ov45_0222AA5C(r5);
    PlayerProfile_SetAvatar(r4, ((r0 << 0x18) >> 0x18));
    ov45_0222AA10(r5);
    PlayerProfile_SetLanguage(r4, ((r0 << 0x18) >> 0x18));
    PlayerProfile_SetGameClearFlag(r4);
}





void ov45_0222A920(void) {
    // add r0, #0x43
}





void ov45_0222A92C(void) {
    // add r0, r5, r2
    // add r0, #0x4c
    // add r0, r5, r2
    // add r0, #0x4c
}





void ov45_0222A964(void) {
    // add r0, r5, r2
    // add r0, #0x4c
    // add r0, r5, r0
    // mvn r0, r0
}





void ov45_0222A99C(void) {
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}





void ov45_0222A9A0(void) {
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}





void ov45_0222A9A4(void) {
    ov45_0222AA5C();
}





void ov45_0222A9C8(void) {
    // ldr r0, [r0, #0x1c]
    // bx lr
    // TODO: decompile
}





void ov45_0222A9CC(void) {
    // add r0, #0x38
    ov45_0222CD04(*((u16*)(r0 + 0x3a)));
}





void ov45_0222AA10(void) {
}





void ov45_0222AA28(void) {
    // add r0, #0x39
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222AA3C: ; jump table
}





void ov45_0222AA54(void) {
    // add r0, #0x39
}





void ov45_0222AA5C(void) {
    ov45_0222CD04(*((u16*)(r0 + 0x3a)));
    ov45_0222A9CC(r4, 0x0000FFFF);
}





void ov45_0222AA84(void) {
    // add r1, #0x3e
}





void ov45_0222AAA8(void) {
}





void ov45_0222AAC8(void) {
    // add r0, #0x41
}





void ov45_0222AADC(void) {
    // add r0, #0x41
}





void ov45_0222AAEC(void) {
}





void ov45_0222AB0C(void) {
    // add r2, #0x8c
    // add r0, #0x90
    // str r2, [r1]
}





void ov45_0222AB1C(void) {
    // ldr r1, _0222AB24 ; =0x00000508
    // ldr r0, [r0, r1]
    // bx lr
    // nop
    // _0222AB24: .word 0x00000508
    // TODO: decompile
}





void ov45_0222AB28(void) {
    // add r0, r0, r2
}





void ov45_0222AB38(void) {
    // add r0, r0, r2
}





void ov45_0222AB48(void) {
    // add r0, r0, r2
}





void ov45_0222AB58(void) {
    // add r0, r0, r2
}





void ov45_0222AB68(void) {
}





void ov45_0222AB78(void) {
    // mvn r1, r1
}





void ov45_0222AB94(void) {
    // add r0, sp, #0
    // str r2, [r0]
    // add r0, sp, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0
    // add r1, sp, #0
}





void ov45_0222ABD0(void) {
    // add r1, sp, #0
    // str r0, [r1]
    // add r0, sp, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0
    // add r1, sp, #0
}





void ov45_0222AC14(void) {
    // add r1, sp, #0
    // str r0, [r1]
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222AC3A: ; jump table
}





void ov45_0222AC58(void) {
    // add r0, sp, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // and r2, r3
    // ldr r2, [sp, #0x2c]
    // add r1, sp, #0
}





void ov45_0222ACB8(void) {
    // add r1, sp, #0
    // str r0, [r1]
    // add r0, sp, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // and r2, r3
    // add r1, sp, #0
}





void ov45_0222AD2C(void) {
}





void ov45_0222AD3C(void) {
}





void ov45_0222AD4C(void) {
}





void ov45_0222AD58(void) {
}





void ov45_0222AD70(void) {
}





void ov45_0222AD80(void) {
    // add r0, r0, r2
}





void ov45_0222AD90(void) {
    // add r0, r0, r2
}





void ov45_0222ADA0(void) {
}





void ov45_0222ADA8(void) {
    // add r0, r0, r2
}





void ov45_0222ADB8(void) {
    // add r0, r0, r3
}





void ov45_0222ADC8(void) {
    // add r0, r0, r2
}





void ov45_0222ADD8(void) {
    // add r0, r0, r2
}





void ov45_0222ADE8(void) {
    // add r0, r0, r2
}





void ov45_0222ADF8(void) {
    // add r0, r0, r2
}





void ov45_0222AE08(void) {
}





void ov45_0222AE24(void) {
    // add r0, r0, r3
}





void ov45_0222AE34(void) {
    // add r0, r0, r2
}





void ov45_0222AE44(void) {
}





void ov45_0222AE54(void) {
}





void ov45_0222AE64(void) {
    // add r0, r0, r1
}





void ov45_0222AE74(void) {
    ov45_0222A578(0, *((u8*)(r0 + 0x000001CA)));
    ov45_0222A920();
    // strh r4, [r5, r0]
    // strb r2, [r5, r1]
    // strb r2, [r5, r1]
    // add r0, r5, r0
    ov45_0222BE00(((0x71 << 2) - 4), 0, 1);
    ov45_0222EC90(r4);
    // add r2, r5, r2
    ov45_0222EF4C(0, r0, (0x1e << 4), 4);
    // add r0, r5, r0
    ov45_0222BE48((7 << 6));
}





void ov45_0222AED8(void) {
    ov45_0222EC90(*((u16*)(r0 + (0x71 << 2))), *((u8*)(r0 + 0x000001CA)), *((u8*)(r0 + (*((u8*)(r0 + (0x000001CA - 4))) - 4))));
    ov45_0222BE28(r4, r0);
    // strb r2, [r4, r0]
    // strb r2, [r4, r0]
    ov45_0222EC90(*((u16*)(r4 + (0x71 << 2))), 2);
    ov45_0222BE28(r4, r0);
    // add r0, r4, r0
    ov45_0222BE00((7 << 6));
    ov45_0222EC90(*((u16*)(r4 + (0x71 << 2))));
    // add r2, r4, r2
    ov45_0222EF4C(2, r0, (0x1e << 4), 4);
    // add r0, r4, r0
    ov45_0222BE48((7 << 6));
}





void ov45_0222AF80(void) {
    // add r0, #0x1c
    // strh r2, [r4, r0]
    ov45_0222EC90(*((u16*)(r0 + (0x000001C6 - 2))), 0x000001C6, 0);
    // add r2, r4, r2
    ov45_0222EF4C(3, r0, (0x1e << 4), 4);
    // add r0, r4, r0
    ov45_0222BD4C((7 << 6));
}





void ov45_0222AFC4(void) {
    ov45_0222EC90(*((u16*)(r0 + (0x000001C6 - 2))), *((u8*)(r0 + 0x000001C6)));
    // strb r3, [r4, r2]
    // add r0, #0x1c
    // add r2, #0x1a
    // strh r3, [r4, r0]
    // add r2, r4, r2
    ov45_0222EF4C(2, r0, 0x000001C6, 4);
}





void ov45_0222AFF8(void) {
    // ldr r1, _0222B008 ; =0x000001CA
    // ldrb r0, [r0, r1]
    // cmp r0, #0
    // beq _0222B004
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _0222B008: .word 0x000001CA
    // TODO: decompile
}





void ov45_0222B00C(void) {
    // ldr r1, _0222B01C ; =0x000001CA
    // ldrb r0, [r0, r1]
    // cmp r0, #2
    // bne _0222B018
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _0222B01C: .word 0x000001CA
    // TODO: decompile
}





void ov45_0222B020(void) {
    // ldrh r0, [r0, r1]
}





void ov45_0222B028(void) {
    // ldr r1, _0222B030 ; =0x000001CB
    // ldrb r0, [r0, r1]
    // bx lr
    // nop
    // _0222B030: .word 0x000001CB
    // TODO: decompile
}





void ov45_0222B034(void) {
    // ldr r1, _0222B03C ; =0x000001C6
    // ldrb r0, [r0, r1]
    // bx lr
    // nop
    // _0222B03C: .word 0x000001C6
    // TODO: decompile
}





void ov45_0222B040(void) {
    // ldrh r0, [r0, r1]
}





void ov45_0222B048(void) {
    // add r1, r5, r4
}





void ov45_0222B06C(void) {
    // add r0, r0, r1
    ov45_0222BE74(1, (0x000001C6 - 6), *((u8*)(r0 + 0x000001C6)));
}





void ov45_0222B094(void) {
    // add r0, r0, r1
}





void ov45_0222B0A4(void) {
    // strb r2, [r0, r1]
}





void ov45_0222B0B0(void) {
    // ldr r1, _0222B0B8 ; =0x000001C7
    // ldrb r0, [r0, r1]
    // bx lr
    // nop
    // _0222B0B8: .word 0x000001C7
    // TODO: decompile
}





void ov45_0222B0BC(void) {
    // add r0, r4, r1
}





void ov45_0222B0D8(void) {
    // add r0, r0, r2
}





void ov45_0222B0E8(void) {
    // add r0, r0, r2
}





void ov45_0222B0F8(void) {
}





void ov45_0222B108(void) {
}





void ov45_0222B118(void) {
}





void ov45_0222B134(void) {
    // add r0, r5, r4
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222B158: ; jump table
}





void ov45_0222B1B4(void) {
    // add r0, r4, r0
}





void ov45_0222B1DC(void) {
    // add r0, r0, r1
}





void ov45_0222B1EC(void) {
    // add r0, r0, r1
}





void ov45_0222B1FC(void) {
    // str r2, [r0, r1]
    // sub r1, #0x14
    // add r2, r0, r1
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}





void ov45_0222B21C(void) {
    // sub r1, #0x14
    // add r2, r0, r1
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}





void ov45_0222B244(void) {
    GF_AssertFail(*((u32*)(r0 + 0x000004B8)));
    Save_PlayerData_GetProfile(*((u32*)r4));
    sub_02078DD8(*((u32*)(r4 + 0x00000528)));
    // str r0, [r4, r1]
}





void ov45_0222B270(void) {
}





void ov45_0222B28C(void) {
    // push {r3, r4}
    // mov r4, #0
    // cmp r1, #0
    // bls _0222B2AA
    // ldr r2, _0222B2B0 ; =0x0000FFFF
    // ldrh r3, [r0]
    // cmp r3, r2
    // bne _0222B2A2
    // mov r0, #1
    // pop {r3, r4}
    // bx lr
    // add r4, r4, #1
    // add r0, r0, #2
    // cmp r4, r1
    // blo _0222B296
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // _0222B2B0: .word 0x0000FFFF
    // TODO: decompile
}





void ov45_0222B2B4(void) {
    // str r1, [sp]
    // add r0, r4, r2
    // add r2, #0x20
    // add r1, r4, r1
    ov45_0222BCE4((0x42 << 2), *((u32*)(r2 + 0x00000508)));
    // add r0, r4, r0
    ov45_0222BADC((0x42 << 2), *((u32*)r4));
    // str r1, [r4, r0]
    ov45_0222EC68(r5, 1);
    ov45_0222D8C8(*((u32*)(r4 + 4)), r0, *((u8*)(r4 + (0x16 << 4))), 3);
    // str r5, [r4, r0]
    // add r1, sp, #0xc
    ov45_0222EA4C(r5);
    // add r0, r4, r0
    // add r1, sp, #0xc
    ov45_0222D500((5 << 6));
    // add r0, r4, r0
    ov45_0222AA84((0x4a << 2));
    // add r0, r4, r0
    ov45_0222AAA8((0x4a << 2));
    // add r0, r4, r0
    ov45_0222AA28((0x4a << 2));
    ov45_02230F94(((r6 << 0x10) >> 0x10), ((r7 << 0x18) >> 0x18), *((u32*)(r4 + (5 << 6))), *((u32*)(r4 + 0x00000528)));
    // str r0, [sp, #4]
    // str r0, [r4, r1]
    // strb r1, [r4, r0]
    // strb r2, [r4, r1]
    // strb r2, [r4, r0]
    // add r0, r4, r0
    ov45_0222BAC4((0x42 << 2), *((u32*)r4), 0);
    ov45_0222BA3C(r4);
    ov45_0222EA78();
    ov45_0222EC68(r5);
    // ldr r0, [sp]
    ov45_0222A9CC();
    ov45_0222D8C8(*((u32*)(r4 + 4)), r7, r0, 0);
    ov45_0222D8F0(*((u32*)(r4 + 4)), r7);
    // add r0, r4, r0
    // mvn r2, r2
    ov45_0222CBD0(0x000004BC, r5, 0);
    ov45_0222BA3C(r4);
    ov45_0222EC68(r5);
    // add r0, #0xf8
    // lsl r0, r6
    // add r0, #0xf8
    // str r1, [r0]
    ov45_0222F484(r5, (*((u32*)r4) | 1));
    // add r0, r4, r0
    ov45_0222C944((0xf3 << 2), r6, 1);
    // str r6, [sp, #8]
    // add r1, sp, #8
    // add r2, r4, r2
    ov45_0222DC08(*((u32*)(r4 + 4)), (0xf3 << 2));
    ov45_0222F4AC(r5);
    // add r0, r4, r0
    ov45_0222C9A0((0xf9 << 2), r6, 1, r0);
    // add r0, r4, r0
    ov45_0222C9A0((0xf9 << 2), r6, 0);
    // add r0, r4, r0
    ov45_0222C944((0xf3 << 2), r6, 0);
    // add r0, r4, r0
    ov45_0222C9A0((0xf9 << 2), r6, 0, 0);
}





void ov45_0222B470(void) {
    ov45_0222E9E0();
    ov45_0222EC68(r6);
    ov45_0222AFF8(r5);
    ov45_0222B020(r5);
    // add r0, r5, r0
    ov45_0222BD5C((7 << 6));
    ov45_0222D8D4(*((u32*)(r5 + 4)), r4);
    ov45_0222EAD4(r6);
    ov45_0222EC68();
    ov45_0222D8F0(*((u32*)(r5 + 4)), r0);
    // add r0, r5, r0
    ov45_0222C944((0xf3 << 2), r4, 0);
    // add r0, r5, r0
    ov45_0222BDE8((7 << 6), r4);
    // add r0, r5, r0
    ov45_0222BDB0((7 << 6), r4);
    // add r0, r5, r0
    // mvn r2, r2
    ov45_0222CBD0(0x000004BC, r6, 0);
    ov45_0222BA3C(r5);
    // add r0, r5, r0
    ov45_0222C9A0((0xf9 << 2), r4, 0, 0);
    ov45_0222EC68(r6);
    // add r1, #0xfc
    // lsl r1, r0
    // add r5, #0xfc
    // str r0, [r5]
}





void ov45_0222B530(void) {
    // lsl r2, r6
    // str r0, [r4, r1]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222B560: ; jump table
    // add r0, r4, r0
    // add r0, r4, r0
}





void ov45_0222B5A0(void) {
    // add r0, sp, #0
    ov45_022320C4();
    // add r0, #0xd4
    // add r1, sp, #0
    ov45_0222D500(r4);
    // add r0, sp, #0
    // ldmia r0!, {r2, r3}
    // add r0, #0xd8
    // stmia r0!, {r2, r3}
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222B5D6: ; jump table
    // add r1, #0xd4
    ov45_0222D8BC(*((u32*)(r4 + 4)), r4);
    // add r0, #0xd8
    // ldmia r0!, {r2, r3}
    // add r0, #0xe0
    // stmia r0!, {r2, r3}
    // strb r0, [r4, r1]
    // add r0, #0xff
    // add r2, #0xff
    // str r0, [r4, r2]
    *((u32*)(r4 + 8)) = 1;
    // add r0, #0xd6
    // strh r1, [r4, r0]
    // strb r5, [r4, r0]
    // sub r0, #0xfd
    // add r0, #0xfe
    // str r1, [r4, r0]
    *((u32*)(r4 + 8)) = 1;
    // add r0, #0xd6
    // strh r1, [r4, r0]
    // strb r5, [r4, r0]
    // sub r0, #0xfe
    // add r0, #0xfc
    // str r1, [r4, r0]
    *((u32*)(r4 + 8)) = 1;
    // add r0, #0xd6
    // strh r1, [r4, r0]
    // strb r5, [r4, r0]
    // sub r0, #0xff
    // add r0, #0xf8
    // str r1, [r4, r0]
    ov45_0222ECDC(6, (*((u32*)(r4 + 0x000001FF)) | 8), 1, (*((u8*)(r4 + (0x7f << 2))) & ~(1)));
    ov45_0222ECDC(7);
    // add r0, r4, r0
    ov45_0222CA7C(0x0000049C, r5, r0);
    // add r0, #0xd8
    // strh r1, [r4, r0]
    // add r0, #0xf8
    // strb r2, [r4, r1]
    // add r0, #0xe0
    // str r1, [r4, r0]
    // add r0, #0xda
    // strh r1, [r4, r0]
    // strb r2, [r4, r1]
    // strh r1, [r4, r0]
    // add r0, #0xe0
    // strb r2, [r4, r1]
    // add r0, #0xf0
    // str r1, [r4, r0]
    ov45_0222C370(r4, 4, ((*((u8*)(r4 + (0x7f << 2))) & ~(0x60)) | 0x20));
}





void ov45_0222B75C(void) {
    // add r0, r4, r0
    ov45_0222BADC((0x42 << 2), *((u32*)r2));
    // str r1, [r4, r0]
    // add r0, r4, r0
    ov45_0222BB00((0x42 << 2), r5, r6);
    // add r0, r4, r0
    ov45_0222BAC4((0x42 << 2), *((u32*)r4));
}





void ov45_0222B79C(void) {
    // add r0, sp, #4
    // add r4, #0x20
    // ldr r0, [sp, #8]
    // mvn r1, r1
    // str r0, [sp]
    // ldr r0, [sp]
}





void ov45_0222B840(void) {
    // add r2, #0xe0
    // add r2, #0xe4
    // add r5, r0, r3
    // adc r1, r2
    // add r0, #0xd8
    // add r0, #0xdc
    // sub r0, r5, r3
    // sbc r1, r2
    // strb r2, [r4, r1]
    // strh r1, [r4, r0]
}





void ov45_0222B8A0(void) {
    // str r1, [sp]
    Save_PlayerData_GetProfile(r1);
    // str r0, [sp, #0x18]
    // ldr r0, [sp]
    SaveArray_Party_Get();
    // str r0, [sp, #0x14]
    // ldr r0, [sp]
    Save_Pokedex_Get();
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    Save_WiFiHistory_Get();
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    Save_SysInfo_RTC_Get();
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    PlayerProfile_GetPlayerName_NewString(r4);
    // add r1, #0x28
    CopyStringToU16Array(r5, 8);
    CopyStringToU16Array(r4, r5, 8);
    String_Delete(r4);
    // mvn r0, r0
    *((u32*)(r5 + 0x20)) = 0;
    // ldr r0, [sp, #0x18]
    PlayerProfile_GetTrainerID(0);
    *((u32*)(r5 + 0x24)) = r0;
    // ldr r0, [sp, #0x14]
    Party_GetCount();
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    Party_GetMonByIndex(0);
    GetMonData(5, 0);
    // add r1, #0x40
    // strh r0, [r1]
    GetMonData(r7, 0x70, 0);
    // add r1, r5, r4
    // add r1, #0x4c
    // strb r0, [r1]
    GetMonData(r7, 0x4c, 0);
    // add r1, r5, r4
    // add r1, #0x52
    // strb r0, [r1]
    // add r1, #0x40
    // strh r0, [r1]
    // ldr r0, [sp, #0x18]
    PlayerProfile_GetTrainerGender(0x000001EF, r6);
    // add r1, #0x58
    // strb r0, [r1]
    // ldr r0, [sp, #0x18]
    PlayerProfile_GetLanguage(r5);
    // add r1, #0x59
    // strb r0, [r1]
    // ldr r0, [sp, #0x18]
    PlayerProfile_GetAvatar(r5);
    // add r1, #0x5a
    // strh r0, [r1]
    // add r0, #0x5a
    ov45_0222CCE4(*((u16*)r5), r5);
    // add r1, #0x5a
    // strh r0, [r1]
    // ldr r0, [sp, #0x10]
    WifiHistory_GetPlayerCountry(r5);
    // add r1, #0x5c
    // strh r0, [r1]
    // ldr r0, [sp, #0x10]
    WiFiHistory_GetPlayerRegion(r5);
    // add r1, #0x5e
    // strb r0, [r1]
    // ldr r0, [sp, #0xc]
    Pokedex_GetNatDexFlag(r5);
    // add r1, #0x5f
    // strb r0, [r1]
    // ldr r0, [sp, #0x18]
    PlayerProfile_GetGameClearFlag(r5);
    // add r1, #0x60
    // strb r0, [r1]
    // add r0, #0x61
    // strb r1, [r0]
    // add r1, #0x63
    // strb r0, [r1]
    // mov r2, #GAME_VERSION
    // add r1, #0x62
    // strb r2, [r1]
    // ldr r1, [sp, #8]
    // add r1, #0x24
    // str r1, [sp, #8]
    // ldmia r1!, {r2, r3}
    // str r1, [sp, #8]
    // add r1, #0x64
    // stmia r1!, {r2, r3}
    // sub r2, #0x19
    // add r1, r5, r0
    // add r1, #0x6c
    // strb r3, [r1]
    *((u32*)(r5 + 0x78)) = 0x18;
    // add r0, #0xa8
    // strh r1, [r0]
    // mvn r1, r1
    // add r0, #0xac
    // str r1, [r0]
    // add r0, #0xb0
    // str r1, [r0]
    // ldr r1, [sp]
    ov45_0222BAC4(r5, 3, (0 + 1), (r5 + 2));
}





void ov45_0222BA3C(void) {
    // add r0, r5, r0
    ov45_0222BADC((0x42 << 2), *((u32*)r0));
    // str r1, [r5, r0]
    // add r0, r5, r7
    ov45_0222CC50(0x0000052C, 0);
    // add r2, r5, r4
    // strb r0, [r2, r1]
    // add r0, r5, r7
    ov45_0222CC7C(r4);
    // str r0, [r6, r1]
    // sub r1, #0x68
    // add r0, r5, r1
    // add r1, #0x18
    // add r1, r5, r1
    MI_CpuCopy8((6 << 6), 0x10);
    // add r0, r5, r0
    ov45_0222E9F8((0x4a << 2));
    // add r0, r5, r1
    // add r1, #0x28
    // add r1, r5, r1
    MI_CpuCopy8((0x42 << 2), 0x10);
    // add r0, r5, r0
    ov45_0222BAC4((0x42 << 2), *((u32*)r5));
}





void ov45_0222BAC4(void) {
}





void ov45_0222BADC(void) {
    // add r1, #0x20
    // add r4, #0xb4
}





void ov45_0222BB00(void) {
    // add r3, #0x20
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, #0x20
    // add r1, #0x20
    // add r4, #8
    // add r1, #0x10
    // add r5, #0x28
}





void ov45_0222BB58(void) {
}





void ov45_0222BB60(void) {
    // ldrsh r2, [r5, r1]
    // bmi _0222BB8C
    *((u16*)(r0 + 4)) = (r2 - 1);
    // ldrsh r1, [r5, r1]
    GF_SndStartFadeOutBGM(0, 0x7f);
    *((u8*)(r5 + 0xe)) = 1;
    // strb r0, [r5]
    *((u32*)(r4 + 8)) = (0x80 | *((u32*)(r4 + 8)));
    // ldrsh r0, [r5, r1]
    *((u16*)(r5 + 4)) = ((0x80 | *((u32*)(r4 + 8))) - 1);
    // ldrsh r2, [r5, r0]
    // bmi _0222BBB2
    *((u16*)(r5 + 6)) = (*((u32*)(r4 + 8)) - 1);
    *((u32*)(r4 + 8)) = (2 | ((*((u32*)(r4 + 8)) | 4) | 8));
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 6)) = (6 - 1);
    // ldrsh r2, [r5, r0]
    // bmi _0222BBD8
    *((u16*)(r5 + 8)) = (((*((u32*)(r4 + 8)) | 4) | 8) - 1);
    // strb r1, [r5]
    *((u32*)(r4 + 8)) = (0x20 | *((u32*)(r4 + 8)));
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 8)) = (8 - 1);
    ov45_0222CA8C(r7, (0x20 | *((u32*)(r4 + 8))), *((u32*)(r4 + 8)));
    // ldrsh r1, [r5, r0]
    // bmi _0222BC08
    *((u16*)(r5 + 0xa)) = (r1 - 1);
    ov45_0222C3A8(r6);
    PlayBGM(0x00000481);
    // strb r0, [r5]
    *((u32*)(r4 + 8)) = (0x40 | *((u32*)(r4 + 8)));
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 0xa)) = (0xa - 1);
}





void ov45_0222BC3C(void) {
    // strb r2, [r0]
    // strb r2, [r0]
    // strb r2, [r0]
    // strb r2, [r0]
    // strb r2, [r0]
    // strb r2, [r0]
    // sub r1, #0xc
}





void ov45_0222BC84(void) {
}





void ov45_0222BCA0(void) {
}





void ov45_0222BCA8(void) {
    // ldrsh r0, [r0, r1]
}





void ov45_0222BCB8(void) {
    // ldrsh r1, [r0, r1]
    // strh r1, [r0]
}





void ov45_0222BCC8(void) {
}





void ov45_0222BCD8(void) {
}





void ov45_0222BCE4(void) {
}





void ov45_0222BD24(void) {
}





void ov45_0222BD2C(void) {
    // ldrb r0, [r0, #2]
    // bx lr
    // TODO: decompile
}





void ov45_0222BD30(void) {
    // strb r1, [r0]
}





void ov45_0222BD40(void) {
}





void ov45_0222BD4C(void) {
    *((u16*)(r0 + 4)) = 0;
    *((u8*)(r0 + 6)) = 0;
    *((u8*)(r0 + 0xa)) = 0;
}





void ov45_0222BD5C(void) {
}





void ov45_0222BD74(void) {
}





void ov45_0222BD94(void) {
}





void ov45_0222BDB0(void) {
}





void ov45_0222BDCC(void) {
}





void ov45_0222BDE8(void) {
}





void ov45_0222BE00(void) {
}





void ov45_0222BE08(void) {
}





void ov45_0222BE28(void) {
}





void ov45_0222BE48(void) {
}





void ov45_0222BE54(void) {
}





void ov45_0222BE5C(void) {
    // ldrsh r1, [r0, r1]
}





void ov45_0222BE74(void) {
    // ldrsh r1, [r0, r1]
}





void ov45_0222BE94(void) {
    // ldrsh r0, [r0, r1]
}





void ov45_0222BE9C(void) {
    // str r1, [sp]
    ov45_0222EC68(*((u32*)r1));
    // mvn r0, r0
    ov45_0222A578(r6, r0);
    // add r1, #0xe8
    ov45_0222A844(*((u32*)r5), *((u32*)(r6 + 0x00000528)));
    // add r0, #0xe8
    // str r0, [sp, #4]
    // add r0, #0xec
    // str r0, [sp, #8]
    // ldr r0, [sp]
    ov45_0222EC68(*((u32*)*((u32*)r6)));
    // add r1, sp, #4
    *((u16*)(r1 + 8)) = r0;
    // ldr r0, [sp]
    ov45_0222EC68(*((u32*)(r0 + 4)));
    // add r1, sp, #4
    *((u16*)(r1 + 0xa)) = r0;
    // add r1, sp, #4
    ov45_0222D940(*((u32*)(r6 + 4)));
}





void ov45_0222BF18(void) {
    // str r1, [sp]
    ov45_0222EC68(*((u32*)r1));
    // mvn r0, r0
    ov45_0222A578(r6, r0);
    // add r1, #0xe8
    ov45_0222A844(*((u32*)r5), *((u32*)(r6 + 0x00000528)));
    // add r0, #0xe8
    // str r0, [sp, #4]
    // add r0, #0xec
    // str r0, [sp, #8]
    // ldr r0, [sp]
    ov45_0222EC68(*((u32*)*((u32*)r6)));
    // add r1, sp, #4
    *((u16*)(r1 + 8)) = r0;
    // ldr r0, [sp]
    ov45_0222EC68(*((u32*)(r0 + 4)));
    // add r1, sp, #4
    *((u16*)(r1 + 0xa)) = r0;
    // ldr r0, [sp]
    // add r1, sp, #4
    // str r0, [sp, #0x10]
    ov45_0222D990(*((u32*)(r6 + 4)));
}





void ov45_0222BF98(void) {
    // str r1, [sp]
    // add r5, sp, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)*((u8*)(r1 + 0x10))));
    // mvn r0, r0
    ov45_0222A578(r6, r0);
    // add r1, #0xe8
    ov45_0222A844(*((u32*)r4), *((u32*)(r6 + 0x00000528)));
    // add r0, #0xe8
    // str r0, [r5]
    // str r0, [r5]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    ov45_0222EC68(*((u32*)r1));
    // mvn r0, r0
    ov45_0222A578(r6, r0);
    // add r1, #0xe8
    ov45_0222A844(*((u32*)r4), *((u32*)(r6 + 0x00000528)));
    // add r0, #0xe8
    // str r0, [r5]
    // str r0, [r5]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp]
    ov45_0222EC68(*((u32*)*((u8*)(((*((u8*)((0 + 4) + 0x13)) << 0x19) >> 0x19) + 0x10))));
    // add r1, sp, #0xc
    *((u16*)(r1 + 0x18)) = r0;
    // ldr r0, [sp]
    ov45_0222EC68(*((u32*)(r0 + 4)));
    // add r1, sp, #0xc
    *((u16*)(r1 + 0x1a)) = r0;
    // ldr r0, [sp]
    ov45_0222EC68(*((u32*)(r0 + 8)));
    // add r1, sp, #0xc
    *((u16*)(r1 + 0x1c)) = r0;
    // ldr r0, [sp]
    ov45_0222EC68(*((u32*)(r0 + 0xc)));
    // add r1, sp, #0xc
    *((u16*)(r1 + 0x1e)) = r0;
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // str r0, [sp, #0x2c]
    ov45_0222D9EC(*((u32*)(r6 + 4)));
}





void ov45_0222C0CC(void) {
    ov45_0222EC68(*((u32*)r1));
    // mvn r0, r0
    ov45_0222A578(r5, r0);
    // add r1, #0xe8
    ov45_0222A844(*((u32*)r5), *((u32*)(r5 + 0x00000528)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xe8
    // str r0, [sp, #8]
    ov45_0222EC68(*((u32*)r4));
    // add r1, sp, #0
    *((u16*)(r1 + 0xc)) = r0;
    // add r1, sp, #0
    ov45_0222DA80(*((u32*)(r5 + 4)));
}





void ov45_0222C130(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r4, [sp]
    // add r5, sp, #0x24
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)r1));
    // mvn r0, r0
    // ldr r0, [sp]
    ov45_0222A578(0, r0);
    // add r1, #0xe8
    // ldr r3, [sp]
    ov45_0222A844(*((u32*)r4), *((u32*)(r3 + 0x00000528)));
    // add r0, #0xe8
    // str r0, [r5]
    // str r0, [r5]
    // ldr r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)*((u8*)(0 + 0x10))));
    // add r1, sp, #8
    *((u16*)(r1 + 0x14)) = r0;
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)(r0 + 4)));
    // add r1, sp, #8
    *((u16*)(r1 + 0x16)) = r0;
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)(r0 + 8)));
    // add r1, sp, #8
    *((u16*)(r1 + 0x18)) = r0;
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)(r0 + 0xc)));
    // add r1, sp, #8
    *((u16*)(r1 + 0x1a)) = r0;
    // ldr r0, [sp]
    // add r1, sp, #8
    ov45_0222DAE0(*((u32*)(r0 + 4)));
}





void ov45_0222C1EC(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r4, [sp]
    // add r5, sp, #0x24
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)r1));
    // mvn r0, r0
    // ldr r0, [sp]
    ov45_0222A578(0, r0);
    // add r1, #0xe8
    // ldr r3, [sp]
    ov45_0222A844(*((u32*)r4), *((u32*)(r3 + 0x00000528)));
    // add r0, #0xe8
    // str r0, [r5]
    // str r0, [r5]
    // ldr r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)*((u8*)(0 + 0x10))));
    // add r1, sp, #8
    *((u16*)(r1 + 0x14)) = r0;
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)(r0 + 4)));
    // add r1, sp, #8
    *((u16*)(r1 + 0x16)) = r0;
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)(r0 + 8)));
    // add r1, sp, #8
    *((u16*)(r1 + 0x18)) = r0;
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)(r0 + 0xc)));
    // add r1, sp, #8
    *((u16*)(r1 + 0x1a)) = r0;
    // ldr r0, [sp]
    // add r1, sp, #8
    ov45_0222DB3C(*((u32*)(r0 + 4)));
}





void ov45_0222C2A8(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r4, [sp]
    // add r5, sp, #0x28
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)r1));
    // mvn r0, r0
    // ldr r0, [sp]
    ov45_0222A578(0, r0);
    // add r1, #0xe8
    // ldr r3, [sp]
    ov45_0222A844(*((u32*)r4), *((u32*)(r3 + 0x00000528)));
    // add r0, #0xe8
    // str r0, [r5]
    // str r0, [r5]
    // ldr r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)*((u8*)(((*((u8*)(0 + 0x13)) << 0x19) >> 0x19) + 0x10))));
    // add r1, sp, #8
    *((u16*)(r1 + 0x18)) = r0;
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)(r0 + 4)));
    // add r1, sp, #8
    *((u16*)(r1 + 0x1a)) = r0;
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)(r0 + 8)));
    // add r1, sp, #8
    *((u16*)(r1 + 0x1c)) = r0;
    // ldr r0, [sp, #4]
    ov45_0222EC68(*((u32*)(r0 + 0xc)));
    // add r1, sp, #8
    *((u16*)(r1 + 0x1e)) = r0;
    // ldr r0, [sp]
    // add r1, sp, #8
    ov45_0222DC64(*((u32*)(r0 + 4)));
}





void ov45_0222C36C(void) {
    // bx lr
    // TODO: decompile
}





void ov45_0222C370(void) {
}





void ov45_0222C388(void) {
    // add r4, #0x50
    // mvn r0, r0
}





void ov45_0222C3A8(void) {
}





void ov45_0222C3B0(void) {
    *((u32*)(r0 + 0x2c)) = 1;
    *((u32*)(r0 + 8)) = (*((u32*)(r0 + 8)) + 1);
    *((u32*)(r0 + 0x2c)) = 2;
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
}





void ov45_0222C408(void) {
    // str r1, [sp]
    // mvn r1, r1
    // str r5, [sp, #4]
    // ldr r1, [sp, #4]
    // add r1, r4, r5
    // add r1, r4, r5
    // mvn r1, r1
    // ldr r0, [sp, #4]
    // add r1, r6, r1
    // add r1, r1, r0
    // ldr r0, [sp]
    // add r0, r4, r5
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // mvn r0, r0
}





void ov45_0222C480(void) {
    // mvn r1, r1
    // add r2, r5, r2
    // mvn r0, r0
    // add r1, r2, r1
}





void ov45_0222C4B4(void) {
    // add r2, r5, r0
    // add r0, r2, r0
}





void ov45_0222C4E4(void) {
}





void ov45_0222C4FC(void) {
}





void ov45_0222C514(void) {
    // mvn r1, r1
    // add r2, r5, r2
    // add r2, r2, r1
    // str r0, [r2, r1]
}





void ov45_0222C54C(void) {
    // add r2, r5, r0
    // add r1, r2, r0
}





void ov45_0222C580(void) {
    // add r2, r5, r2
    // add r2, r2, r1
    // str r0, [r2, r1]
}





void ov45_0222C5B4(void) {
    // add r0, r4, r0
    // add r0, r5, r0
    // add r0, #0xc
    // mvn r0, r0
}





void ov45_0222C5E8(void) {
    // add r2, r5, r2
    // add r1, r2, r1
    // add r1, #0xbc
    // str r0, [r1]
}





void ov45_0222C61C(void) {
    // add r2, r5, r0
    // add r0, r2, r0
    // add r0, #0xbc
}





void ov45_0222C658(void) {
    // add r2, r5, r0
    // add r0, r2, r0
    // add r0, #0xbc
}





void ov45_0222C688(void) {
    // str r1, [sp]
    ov45_0222EC68();
    // add r0, r5, r0
    ov45_0222BADC((0x42 << 2), *((u32*)r5));
    // str r1, [r5, r0]
    // add r0, r5, r0
    ov45_0222A920((0x4a << 2), 1);
    ov45_0222AFF8(r5);
    // mvn r1, r1
    // ldr r1, [sp]
    ov45_0222B048(r5, r6);
    ov45_0222BE08(r5, r7, 0);
    ov45_0222BE08(r5, r7, 1);
    // add r0, r5, r0
    ov45_0222BD74((7 << 6), r6);
    // strb r1, [r5, r0]
    // strh r6, [r5, r0]
    // strb r2, [r5, r1]
    // strb r2, [r5, r1]
    // add r0, r5, r0
    // strb r2, [r5, r1]
    ov45_0222BE48(((0x71 << 2) - 4), ((0x71 << 2) + 3), 0);
}





void ov45_0222C73C(void) {
    ov45_0222EC68();
    // sub r2, #0xa
    // add r0, r4, r2
    ov45_0222BD74(*((u16*)r5), r0, 0x000001CA);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // sub r2, #0xa
    // add r0, r4, r2
    ov45_0222BD4C(0x000001C6, 2);
    // add r0, r4, r0
    ov45_0222BE54((7 << 6));
}





void ov45_0222C79C(void) {
    ov45_0222EC68(*((u8*)(r3 + 0x000001CA)));
    // add r2, r0, r2
    // strb r0, [r4, r2]
    // strh r2, [r4, r0]
    // add r0, r4, r0
    ov45_0222BE54(((0x71 << 2) - 4), (0x71 << 2), *((u16*)r5));
    // add r0, r4, r0
    ov45_0222BD5C((r1 - 4));
    // mvn r2, r2
    // add r0, r4, r0
    ov45_0222BD5C((r1 - 4), 0);
}





void ov45_0222C800(void) {
    ov45_0222EC68(*((u8*)(r3 + 0x000001C6)));
    // add r0, r4, r0
    ov45_0222BD4C(((0x71 << 2) - 4), (0x71 << 2), *((u16*)(r4 + (0x71 << 2))));
}





void ov45_0222C828(void) {
    // blx r2
}





void ov45_0222C83C(void) {
}





void ov45_0222C858(void) {
    // mvn r0, r0
    // add r0, r5, r7
    // mvn r1, r1
}





void ov45_0222C88C(void) {
    // mvn r0, r0
    // add r0, r4, r0
}





void ov45_0222C8AC(void) {
}





void ov45_0222C8C8(void) {
    // add r7, #0xc
    // asr r1, r1, #1
    // strb r1, [r5, r0]
    // strb r0, [r7, r4]
}





void ov45_0222C900(void) {
    // add r5, r5, r0
    // add r2, r3, r2
    // add r0, r0, r1
    // add r3, r3, r2
}





void ov45_0222C944(void) {
}





void ov45_0222C95C(void) {
}





void ov45_0222C978(void) {
}





void ov45_0222C994(void) {
}





void ov45_0222C9A0(void) {
    // strb r6, [r5, r4]
    // add r0, #0xb4
    // add r5, #0x14
    // add r2, r5, r2
}





void ov45_0222C9D0(void) {
}





void ov45_0222C9EC(void) {
    // add r5, #0x14
    // add r0, r5, r0
}





void ov45_0222CA10(void) {
    // str r4, [sp, #8]
    // add r0, sp, #8
    // str r0, [sp]
    // add r0, r0, r4
    // strh r0, [r5]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // add r0, r4, r0
    // add r0, sp, #8
    // ldr r0, [sp, #4]
    // add r0, r0, r4
    // ldr r0, [sp]
    // add r0, r4, r0
}





void ov45_0222CA7C(void) {
    // str r3, [r0]
    // sub r2, r2, r1
}





void ov45_0222CA8C(void) {
    // str r1, [r0]
    *((u32*)(r0 + 0xc)) = 0;
}





void ov45_0222CAA0(void) {
    // add r0, sp, #0
    ov45_0222ECB8(*((u32*)r0));
    // ldr r3, [sp]
    // ldr r1, [sp, #4]
    // sub r0, r3, r0
    // sbc r1, r2
    _ll_mul(*((u32*)(r4 + 4)), 0x1e, 0);
    // asr r3, r2, #0x1f
    // sub r2, r2, r0
    // sbc r3, r1
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    _s32_div_f(((*((u32*)(r4 + 0xc)) + 1) << 8), *((u32*)(r4 + 0x10)), *((u32*)(r4 + 0xc)));
    // add r2, r2, r1
    *((u32*)(r4 + 0x14)) = *((u16*)(_02254A28 + (0 << 2)));
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x14)) = 5;
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    // str r0, [r4]
    *((u32*)(r4 + 0x18)) = (*((u32*)(r4 + 0x18)) + 1);
}





void ov45_0222CB3C(void) {
    // ldr r0, [r0, #0x18]
    // bx lr
    // TODO: decompile
}





void ov45_0222CB40(void) {
    // ldr r0, [r0, #0x14]
    // bx lr
    // TODO: decompile
}





void ov45_0222CB44(void) {
    // sub r3, #0x19
    // add r2, r0, r5
    // add r2, #0x34
    // strb r4, [r2]
    // stmia r6!, {r3}
    // add r2, #0x41
    // strb r3, [r2]
    // add r2, #0x42
    // strb r3, [r2]
}





void ov45_0222CB74(void) {
    // add r0, #0x42
    // add r0, #0x41
    // add r0, #0x42
    // add r0, r5, r0
    // add r0, #0x34
    // strb r4, [r0]
    // add r0, #0x42
    // str r6, [r5, r0]
    // add r0, #0x42
    // add r0, #0x42
    // strb r1, [r0]
}





void ov45_0222CBD0(void) {
    // str r4, [r3]
}





void ov45_0222CC00(void) {
    // add r0, #0x41
    // add r0, #0x42
    // add r0, #0x34
    // strb r1, [r0, r2]
    // add r0, #0x42
    // sub r1, #0x19
    // str r1, [r5, r0]
    // add r0, #0x41
    // add r0, #0x41
    // strb r1, [r0]
}





void ov45_0222CC50(void) {
    // add r0, #0x42
    // sub r0, r1, r0
    // bpl _0222CC72
    // add r0, #0xd
    // add r0, r5, r0
    // add r0, #0x34
}





void ov45_0222CC7C(void) {
    // add r0, #0x42
    // sub r0, r1, r0
    // bpl _0222CC9E
    // add r0, #0xd
}





void ov45_0222CCA4(void) {
}





void ov45_0222CCB8(void) {
    // add r1, #0x48
    // add r4, #0x4a
    // strh r0, [r4]
}





void ov45_0222CCDC(void) {
    // add r0, #0x4a
}





void ov45_0222CCE4(void) {
    // ldr r3, _0222CD00 ; =ov45_02254A84
    // mov r2, #0
    // ldrh r1, [r3]
    // cmp r0, r1
    // bne _0222CCF2
    // add r0, r2, #0
    // bx lr
    // add r2, r2, #1
    // add r3, r3, #4
    // cmp r2, #0x10
    // blt _0222CCE8
    // mov r0, #0x10
    // bx lr
    // nop
    // _0222CD00: .word ov45_02254A84
    // TODO: decompile
}





void ov45_0222CD04(void) {
    // cmp r0, #0x10
    // bhs _0222CD10
    // lsl r1, r0, #2
    // ldr r0, _0222CD14 ; =ov45_02254A84
    // ldrh r0, [r0, r1]
    // bx lr
    // ldr r0, _0222CD18 ; =0x0000FFFF
    // bx lr
    // _0222CD14: .word ov45_02254A84
    // _0222CD18: .word 0x0000FFFF
    // TODO: decompile
}





void ov45_0222CD1C(void) {
    // ldr r6, [sp, #0x20]
    // str r2, [sp]
    // str r3, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0x39
    // strb r5, [r0]
}





void ov45_0222CD68(void) {
}





void ov45_0222CD84(void) {
}





void ov45_0222CD90(void) {
    // str r0, [r4]
    // add r4, #0x38
}





void ov45_0222CDC0(void) {
    // bx lr
    // TODO: decompile
}





void ov45_0222CDC4(void) {
    // str r0, [r5]
}





void ov45_0222CDE4(void) {
    GF_AssertFail();
    // add r1, r1, r3
    // blx r3
}





void ov45_0222CE0C(void) {
}





void ov45_0222CE2C(void) {
    GF_AssertFail();
    // add r1, r1, r3
    // blx r2
    // add r5, #0x38
    // strb r4, [r5]
}





void ov45_0222CE54(void) {
    GF_AssertFail();
    // add r1, r1, r3
    // blx r2
}





void ov45_0222CE78(void) {
}





void ov45_0222CE94(void) {
}





void ov45_0222CEB0(void) {
    // str r2, [sp]
    // str r0, [r6]
    // add r1, #8
    // add r1, r6, r4
    // ldr r2, [sp]
}





void ov45_0222CF00(void) {
}





void ov45_0222CF24(void) {
    // str r0, [r4]
}





void ov45_0222CF40(void) {
    ov45_0222AD2C(*((u32*)(r0 + 0x3c)));
    *((u32*)(r4 + 4)) = r0;
    ov45_0222AD3C(*((u32*)(r5 + 0x3c)));
    *((u32*)(r4 + 8)) = r0;
    ov45_0222CDC4(r5, r6, ov45_02254B94);
}





void ov45_0222CF68(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222CF7E: ; jump table
}





void ov45_0222CFF4(void) {
    // str r0, [r4]
    // strb r1, [r0]
}





void ov45_0222D01C(void) {
}





void ov45_0222D028(void) {
    ov45_0222A214(*((u32*)(r0 + 0x3c)));
    // str r0, [r4]
    ov45_0222A22C(*((u32*)(r5 + 0x3c)));
    *((u32*)(r4 + 8)) = *((u32*)r0);
    ov45_0222CDC4(r5, r6, ov45_02254B84);
}





void ov45_0222D054(void) {
}





void ov45_0222D078(void) {
    // str r0, [r5]
    // strb r1, [r0]
    // str r0, [r5]
}





void ov45_0222D0BC(void) {
}





void ov45_0222D0C8(void) {
    // ldr r3, _0222D0D0 ; =ov45_0222CDC4
    // ldr r2, _0222D0D4 ; =ov45_02254B74
    // bx r3
    // nop
    // _0222D0D0: .word ov45_0222CDC4
    // _0222D0D4: .word ov45_02254B74
    // TODO: decompile
}





void ov45_0222D0D8(void) {
}





void ov45_0222D0FC(void) {
    // str r0, [r4]
    // strb r1, [r0]
    // str r0, [r1]
    // add r0, #0x39
}





void ov45_0222D130(void) {
}





void ov45_0222D13C(void) {
    // ldr r3, _0222D144 ; =ov45_0222CDC4
    // ldr r2, _0222D148 ; =ov45_02254B64
    // bx r3
    // nop
    // _0222D144: .word ov45_0222CDC4
    // _0222D148: .word ov45_02254B64
    // TODO: decompile
}





void ov45_0222D14C(void) {
}





void ov45_0222D164(void) {
}





void ov45_0222D19C(void) {
}





void ov45_0222D1B0(void) {
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    ov45_0222CEB0(*((u32*)r4), *((u32*)(r5 + 0x3c)), *((u16*)(r5 + 0x3a)));
    ov45_0222CDC4(r5, r4, ov45_02254B54);
}





void ov45_0222D1DC(void) {
    UnloadOverlayByID(FS_OVERLAY_ID);
    ov45_0222A430(*((u32*)(r4 + 0x3c)), *((u32*)(*((u32*)r5) + 0x1c)));
    ov45_0222A72C(*((u32*)(r4 + 0x3c)), *((u32*)r5));
    ov45_0222CE2C(r4, 0);
}





void ov45_0222D20C(void) {
}





void ov45_0222D23C(void) {
}





void ov45_0222D250(void) {
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    ov45_0222CEB0(*((u32*)r4), *((u32*)(r5 + 0x3c)), *((u16*)(r5 + 0x3a)));
    ov45_0222CDC4(r5, r4, ov45_02254BA4);
}





void ov45_0222D27C(void) {
    UnloadOverlayByID(FS_OVERLAY_ID);
    ov45_0222A430(*((u32*)(r4 + 0x3c)), *((u32*)(*((u32*)r5) + 0x1c)));
    ov45_0222A72C(*((u32*)(r4 + 0x3c)), *((u32*)r5));
    ov45_0222CE2C(r4, 0);
}





void ov45_0222D2AC(void) {
}





void ov45_0222D2E4(void) {
}





void ov45_0222D2F8(void) {
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    ov45_0222CEB0(*((u32*)r4), *((u32*)(r5 + 0x3c)), *((u16*)(r5 + 0x3a)));
    ov45_0222CDC4(r5, r4, ov45_02254B34);
}





void ov45_0222D324(void) {
    UnloadOverlayByID(FS_OVERLAY_ID);
    ov45_0222A430(*((u32*)(r4 + 0x3c)), *((u32*)(*((u32*)r5) + 0x1c)));
    ov45_0222A72C(*((u32*)(r4 + 0x3c)), *((u32*)r5));
    ov45_0222CE2C(r4, 0);
}





void ov45_0222D354(void) {
}





void ov45_0222D380(void) {
}





void ov45_0222D38C(void) {
}





void ov45_0222D3B0(void) {
    *((u8*)(*((u32*)r1) + 4)) = 0;
}





void ov45_0222D3C4(void) {
    *((u8*)(*((u32*)r1) + 4)) = 1;
}





void ov45_0222D3D8(void) {
}





void ov45_0222D410(void) {
}





void ov45_0222D41C(void) {
}





void ov45_0222D428(void) {
}





void ov45_0222D434(void) {
    *((u32*)(*((u32*)r1) + 8)) = r2;
}





u8 ov45_0222D448(void) {
}





void ov45_0222D44C(void) {
}





void ov45_0222D484(void) {
    // str r0, [r4]
    // strb r1, [r0]
    // str r0, [r1]
}





void ov45_0222D4C0(void) {
}





void ov45_0222D4CC(void) {
    // ldr r3, _0222D4D4 ; =ov45_0222CDC4
    // ldr r2, _0222D4D8 ; =ov45_02254B44
    // bx r3
    // nop
    // _0222D4D4: .word ov45_0222CDC4
    // _0222D4D8: .word ov45_02254B44
    // TODO: decompile
}





void ov45_0222D4DC(void) {
}





void ov45_0222D500(void) {
}





void ov45_0222D524(void) {
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, sp, #0
    // add r1, r2, r1
    // add r1, sp, #0
    // add r0, r2, r0
    // add r0, sp, #0
    // add r1, r2, r1
    // add r1, sp, #0
    // add r0, r2, r0
    // add r0, sp, #0
    // add r1, r2, r1
    // strb r1, [r4]
}





void ov45_0222D594(void) {
    // str r0, [sp, #4]
    // add r1, sp, #0
    // str r0, [sp]
    // ldrsb r1, [r1, r0]
    // asr r0, r0, #0x18
    // sub r0, r1, r0
    // bpl _0222D5CE
    // neg r0, r0
    // add r2, sp, #0
    // add r1, r3, r1
    // sub r0, r1, r0
    // add r1, sp, #0
    // sub r0, r0, r5
    // ldrsb r1, [r1, r0]
    // asr r0, r0, #0x18
    // sub r0, r1, r0
    // bpl _0222D600
    // neg r0, r0
    // add r2, sp, #0
    // add r1, r3, r1
    // sub r0, r1, r0
    // add r1, sp, #0
    // sub r0, r0, r5
    // ldrsb r2, [r1, r0]
    // ldrsb r0, [r1, r0]
    // sub r0, r2, r0
    // bpl _0222D62A
    // neg r0, r0
    // add r1, sp, #0
    // add r0, r3, r0
    // add r0, sp, #0
    // sub r0, r1, r0
    // strb r0, [r4]
}





void ov45_0222D638(void) {
    // str r0, [sp]
    // ldr r2, [sp]
    // ldr r0, [sp]
    // ldr r1, [sp]
    // add r0, r0, r2
    // strh r5, [r1, r2]
    // and r1, r2
}





void ov45_0222D6B0(void) {
    // add r4, r4, r0
}





void ov45_0222D6D4(void) {
    // add r0, r5, r4
    // add r0, r5, r4
}





void ov45_0222D6FC(void) {
    // add r4, r4, r0
}





void ov45_0222D724(void) {
}





void ov45_0222D740(void) {
    // add r2, #8
    // add r1, r2, r1
    // add r4, r0, r1
}





void ov45_0222D79C(void) {
}





void ov45_0222D7C0(void) {
    // ldr r1, _0222D7C8 ; =ov45_02254BB4
    // ldrb r0, [r1, r0]
    // bx lr
    // nop
    // _0222D7C8: .word ov45_02254BB4
    // TODO: decompile
}





void ov45_0222D7CC(void) {
}





void ov45_0222D7FC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222D822: ; jump table
}





void ov45_0222D844(void) {
}





void ov45_0222D860(void) {
    // add r0, #8
    // add r0, #0x5c
}





void ov45_0222D890(void) {
}





void ov45_0222D8A4(void) {
}





void ov45_0222D8BC(void) {
    // str r1, [r0]
}





void ov45_0222D8C8(void) {
}





void ov45_0222D8D4(void) {
}





void ov45_0222D8F0(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r4, #8
    // tst r0, r7
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, #8
    // ldr r0, [sp]
    // add r0, #8
    // ldr r1, [sp, #4]
    // str r0, [sp]
}





void ov45_0222D940(void) {
    // add r0, #0x5c
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r1, [sp, #0x28]
    // add r5, #0x5c
}





void ov45_0222D990(void) {
    // add r0, #0x5c
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    // add r5, #0x5c
}





void ov45_0222D9EC(void) {
    // add r0, #0x5c
    ov45_0222E04C(r0, ((*((u32*)(ov45_02254BDC + (*((u32*)r1) << 2))) << 0x10) >> 0x10));
    // str r0, [sp, #0x2c]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r7, [sp, #0x24]
    // str r1, [sp, #0x28]
    ov45_0222E0E0(r4, *((u32*)(r5 + 4)), *((u32*)(r5 + 0x20)));
    // add r6, #0x5c
    // ldr r1, [sp, #0x2c]
    ov45_0222E0A4(r6);
}





void ov45_0222DA80(void) {
    // add r0, #0x5c
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r5, #0x5c
}





void ov45_0222DAE0(void) {
    // add r0, #0x5c
    ov45_0222E04C(0xc);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    ov45_0222E0E0(*((u32*)r4), 0, 0);
    // add r5, #0x5c
    ov45_0222E0A4(r5, r6);
}





void ov45_0222DB3C(void) {
    // add r0, #0x5c
    ov45_0222E04C(0xd);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    ov45_0222E0E0(*((u32*)r4), 0, 0);
    // add r5, #0x5c
    ov45_0222E0A4(r5, r6);
}





void ov45_0222DB98(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222DBB2: ; jump table
    // add r0, #0x5c
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    // add r5, #0x5c
}





void ov45_0222DC08(void) {
    // add r0, #0x5c
    ov45_0222E04C(r0, 1);
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    ov45_0222E0E0(*((u32*)r4), 0, 0);
    // add r5, #0x5c
    ov45_0222E0A4(r5, r6);
}





void ov45_0222DC64(void) {
    ov45_0222E5B4(*((u32*)r1), *((u32*)(r1 + 4)));
    // add r0, #0x5c
    ov45_0222E04C(r5, *((u8*)(ov45_02254BC8 + *((u32*)r4))));
    // str r0, [sp, #0x2c]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r6, [sp, #0x24]
    // str r1, [sp, #0x28]
    ov45_0222E0E0(r7, *((u32*)(r4 + 4)), 0);
    // add r5, #0x5c
    // ldr r1, [sp, #0x2c]
    ov45_0222E0A4(r5);
}





void ov45_0222DCE8(void) {
}





void ov45_0222DCF4(void) {
    // str r2, [r1]
}





void ov45_0222DCFC(void) {
}





void ov45_0222DD08(void) {
}





void ov45_0222DD14(void) {
}





void ov45_0222DD20(void) {
}





void ov45_0222DD2C(void) {
}





void ov45_0222DD38(void) {
}





void ov45_0222DD44(void) {
    // sub r1, #0x2c
    // add r0, r0, r1
}





void ov45_0222DD5C(void) {
    // ldr r0, [r4, r0]
    // ldrb r0, [r0]
}





void ov45_0222DD78(void) {
    // str r1, [sp, #8]
    ov45_0222DD44();
    GF_AssertFail();
    // ldr r3, [sp, #0x28]
    // add r2, #0xcd
    NewMsgDataFromNarc(1, 0x1b, (0x8a << 2));
    // ldr r0, [sp, #0x28]
    MessageFormat_New();
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0xc]
    // blx r4
    DestroyMsgData(r7, r7);
    // ldr r0, [sp, #0xc]
    MessageFormat_Delete();
}





void ov45_0222DDE4(void) {
    ov45_0222DD44();
    GF_AssertFail();
    // blx r2
    GF_AssertFail(*((u32*)(r5 + (0x8a << 2))), r4, *((u32*)(ov45_02254BE8 + (*((u8*)*((u32*)(r5 + (0x8a << 2)))) << 2))), (*((u8*)*((u32*)(r5 + (0x8a << 2)))) << 2));
}





void ov45_0222DE1C(void) {
}





void ov45_0222DE3C(void) {
}





void ov45_0222DE58(void) {
}





void ov45_0222DE74(void) {
}





void ov45_0222DE8C(void) {
}





void ov45_0222DEA4(void) {
}





void ov45_0222DEB8(void) {
}





void ov45_0222DECC(void) {
}





void ov45_0222DEE0(void) {
}





void ov45_0222DEF4(void) {
}





void ov45_0222DF14(void) {
    // add r0, r4, r0
    // tst r0, r1
}





void ov45_0222DF38(void) {
}





void ov45_0222DF50(void) {
    // add r0, #0x50
}





void ov45_0222DF58(void) {
}





void ov45_0222DF78(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // ldr r5, [sp, #4]
    // ldr r0, [sp, #4]
    // add r0, #0x34
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r3, r0, r2
    // add r1, #0x2c
    // str r3, [r0, r1]
    // add r2, #0x30
    // str r3, [r0, r2]
}





void ov45_0222DFD0(void) {
    // str r0, [sp]
    // add r6, #0x34
    // ldr r0, [sp]
}





void ov45_0222E000(void) {
    // sub r0, #0x2c
    // add r4, r6, r0
    // ldrsh r0, [r1, r0]
    // ldrsh r0, [r1, r0]
}





void ov45_0222E03C(void) {
    // mov r1, #0x73
    // lsl r1, r1, #2
    // ldr r3, _0222E048 ; =ov45_0222E0CC
    // ldr r1, [r0, r1]
    // bx r3
    // nop
    // _0222E048: .word ov45_0222E0CC
    // TODO: decompile
}





void ov45_0222E04C(void) {
    // add r4, r0, r2
    // add r5, #0x34
    // add r4, r0, r1
    // add r5, #0x34
}





void ov45_0222E094(void) {
}





void ov45_0222E0A4(void) {
    // sub r2, #0x30
    // add r2, r0, r2
}





void ov45_0222E0CC(void) {
}





void ov45_0222E0E0(void) {
    // ldr r0, [sp, #0x40]
    // ldr r0, [sp, #0x40]
    // strb r0, [r5]
    // ldr r0, [sp, #0x38]
    // ldr r0, [sp, #0x3c]
    // add r0, sp, #8
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
}





void ov45_0222E14C(void) {
    // str r0, [sp]
    // str r4, [sp, #4]
    BufferString(r2, 0, *((u32*)(r0 + 0x10)), 0);
    // str r1, [sp]
    // str r4, [sp, #4]
    BufferString(r6, 1, *((u32*)(r5 + 0x14)), 0);
    NewString_ReadMsgData(r7, 7);
    // ldr r1, [sp, #0x20]
    StringExpandPlaceholders(r6, r0);
    String_Delete(r4);
}





void ov45_0222E1A0(void) {
    // str r0, [sp]
    // str r4, [sp, #4]
    BufferString(r2, 0, *((u32*)(r0 + 0x10)), 0);
    // str r1, [sp]
    // str r4, [sp, #4]
    BufferString(r6, 1, *((u32*)(r5 + 0x14)), 0);
    BufferWiFiPlazaInstrumentName(r6, 2, *((u32*)(r5 + 4)));
    NewString_ReadMsgData(r7, 8);
    // ldr r1, [sp, #0x20]
    StringExpandPlaceholders(r6, r0);
    String_Delete(r4);
}





void ov45_0222E200(void) {
    BufferWiFiPlazaActivityName(r2, 0, *((u32*)(r0 + 4)));
    // str r1, [sp]
    // str r6, [sp, #4]
    BufferString(r4, 1, *((u32*)(r5 + 0x10)), 0);
    // str r0, [sp]
    // str r6, [sp, #4]
    BufferString(r4, 2, *((u32*)(r5 + 0x14)), 0);
    // str r0, [sp]
    // str r6, [sp, #4]
    BufferString(r4, 3, *((u32*)(r5 + 0x18)), 0);
    // str r1, [sp]
    // str r6, [sp, #4]
    BufferString(r4, 1, *((u32*)(r5 + 0x10)), 0);
    // str r0, [sp]
    // str r6, [sp, #4]
    BufferString(r4, 2, *((u32*)(r5 + 0x14)), 0);
    // str r1, [sp]
    // str r6, [sp, #4]
    BufferString(r4, 1, *((u32*)(r5 + 0x10)), 0);
    // str r0, [sp]
    // str r6, [sp, #4]
    BufferString(r4, 2, *((u32*)(r5 + 0x14)), 0);
    // str r0, [sp]
    // str r6, [sp, #4]
    BufferString(r4, 3, *((u32*)(r5 + 0x18)), 0);
    // str r0, [sp]
    // str r6, [sp, #4]
    BufferString(r4, 4, *((u32*)(r5 + 0x1c)), 0);
    NewString_ReadMsgData(r7, 6);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferString(r4, 1, *((u32*)(r0 + 0x10)), 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // sub r2, r2, r5
    BufferIntegerAsString(r4, 2, 4, 1);
    NewString_ReadMsgData(r7, 5);
    // ldr r1, [sp, #0x20]
    StringExpandPlaceholders(r4, r0);
    String_Delete(r5);
}





void ov45_0222E33C(void) {
    BufferWiFiPlazaActivityName(r2, 0, *((u32*)(r0 + 4)));
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferString(r4, 1, *((u32*)(r5 + 0x10)), 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // sub r2, r2, r5
    BufferIntegerAsString(r4, 2, 8, 1);
    NewString_ReadMsgData(r6, 9);
    // ldr r1, [sp, #0x18]
    StringExpandPlaceholders(r4, r0);
    String_Delete(r5);
}





void ov45_0222E39C(void) {
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #4]
    BufferString(r2, 0, *((u32*)(r0 + 0x10)), 0);
    BufferWiFiPlazaActivityName(r7, *((u32*)(r6 + 4)), 5);
    BufferWiFiPlazaActivityName(r7, 6);
    // ldr r0, [sp, #8]
    // sub r1, r1, r2
    NewString_ReadMsgData(0xe, *((u32*)(r6 + 4)));
    // ldr r1, [sp, #0x28]
    StringExpandPlaceholders(r7, r0);
    String_Delete(r4);
}





void ov45_0222E414(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222E42C: ; jump table
    // ldr r1, [sp, #0x10]
}





void ov45_0222E484(void) {
    // ldr r2, [sp, #8]
}





void ov45_0222E4A8(void) {
    // str r3, [sp, #8]
    ov45_0222E5B4(*((u32*)(r0 + 4)), *((u32*)(r0 + 8)));
    BufferWiFiPlazaActivityName(r7, 0, *((u32*)(r6 + 4)));
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #4]
    BufferString(r7, (0 + 1), *((u32*)(r6 + 0x10)), 0);
    // ldr r0, [sp, #8]
    NewString_ReadMsgData(*((u32*)(r6 + 4)), *((u16*)(ov45_02254BCA + (*((u32*)(r6 + 8)) << 1))), (*((u32*)(r6 + 8)) << 1));
    // ldr r0, [sp, #8]
    NewString_ReadMsgData(*((u16*)(ov45_02254BD2 + (r1 << 1))), (r1 << 1));
    // ldr r1, [sp, #0x28]
    StringExpandPlaceholders(r7, r0);
    String_Delete(r4);
}





void ov45_0222E540(void) {
    // add r0, r0, r1
}





void ov45_0222E550(void) {
    // add r0, r0, r1
}





void ov45_0222E560(void) {
    // add r0, r0, r1
}





void ov45_0222E574(void) {
    // add r0, r0, r1
}





void ov45_0222E584(void) {
    // add r0, r0, r1
}





u8 ov45_0222E598(void) {
}





u8 ov45_0222E59C(void) {
}





void ov45_0222E5A0(void) {
    // add r0, r0, r1
}





void ov45_0222E5B4(void) {
    // cmp r0, #1
    // bhi _0222E5C4
    // cmp r1, #1
    // blo _0222E5C0
    // cmp r1, #4
    // bls _0222E5D0
    // mov r0, #0
    // bx lr
    // cmp r1, #2
    // blo _0222E5CC
    // cmp r1, #4
    // bls _0222E5D0
    // mov r0, #0
    // bx lr
    // mov r0, #1
    // bx lr
    // TODO: decompile
}





void ov45_0222E5D4(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail((0x4b << 2));
    Heap_Alloc(r5, 0x00000988);
    // str r0, [r1]
    memset(0, 0x00000988);
    // str r6, [r0]
    sub_0202C6F4(r6);
    *((u32*)(*((u32*)_022577C0) + 4)) = r0;
    Save_WiFiHistory_Get(r6, *((u32*)_022577C0));
    *((u32*)(*((u32*)_022577C0) + 8)) = r0;
    // ldmia r4!, {r0, r1}
    // add r2, #0xc
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x18]
    *((u32*)(*((u32*)_022577C0) + 0x20)) = *((u32*)r4);
    ov45_0222F848(*((u32*)_022577C0), r7, r5, *((u32*)_022577C0));
    ov45_0222F9B8(*((u32*)r6), 0x14, 8, r5);
    ov45_02230144(*((u32*)r6));
    // add r0, r1, r0
    ov45_022303E4((0x6a << 4), 0x80, r5);
    // str r2, [r1, r0]
}





void ov45_0222E688(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // add r0, r1, r0
    ov45_022303FC((0x6a << 4), *((u32*)_022577C0));
    ov45_0222FA10(*((u32*)_022577C0));
    ov45_0222F878(*((u32*)_022577C0));
    Heap_Free(*((u32*)_022577C0));
    // str r1, [r0]
}





void ov45_0222E6C8(void) {
    ov45_02231514(0);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222E6EA: ; jump table
    // strb r2, [r1, r0]
    // strb r2, [r1, r0]
    // strb r2, [r1, r0]
    // strb r2, [r1, r0]
    // strb r2, [r1, r0]
    ov45_022302E4(*((u32*)_022577C0), *((u8*)(*((u32*)_022577C0) + (0x4b << 2))), 4);
    // add r0, r1, r0
    ov45_022320C4((0x67 << 2), *((u32*)_022577C0));
    ov45_022321E0();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222E778: ; jump table
    // strb r3, [r2, r0]
    // strb r2, [r1, r0]
    // strb r2, [r1, r0]
    // strb r1, [r2, r0]
    // strb r2, [r1, r0]
    ov45_0222E96C(0x0000012E, *((u32*)_022577C0), 4, 0);
}





void ov45_0222E7CC(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_02233220(*((u32*)(*((u32*)_022577C0) + 0x00000984)), *((u32*)_022577C0));
    ov45_022331E8();
}





void ov45_0222E7FC(void) {
}





void ov45_0222E804(void) {
}





void ov45_0222E810(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    sub_0202C08C(*((u32*)(*((u32*)_022577C0) + 4)));
    // str r0, [sp]
    // str r5, [sp, #4]
    // str r0, [sp, #8]
    // add r3, sp, #0xc
    ov45_022310C0(ov45_02254F04, ov45_02254F14, r4);
    // str r0, [r3, r1]
    ov45_0222F74C(*((u32*)(*((u32*)_022577C0) + 0x00000984)), 0x00000984, _022577C0, *((u32*)_022577C0));
}





void ov45_0222E8F4(void) {
    GF_AssertFail(*((u32*)_022577C0));
}





void ov45_0222E91C(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_0222F78C();
    ov45_02231490();
    ov45_0222F74C();
    GF_AssertFail();
}





void ov45_0222E944(void) {
    GF_AssertFail(*((u32*)_022577C0));
}





void ov45_0222E96C(void) {
    GF_AssertFail(*((u32*)_022577C0));
}





void ov45_0222E9BC(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // strb r2, [r3, r1]
}





void ov45_0222E9E0(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_02232580();
}





void ov45_0222E9F8(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_02232580();
    ov45_0222F88C(*((u32*)_022577C0), r0, r4);
    ov45_022325B0(r4, *((u32*)(*((u32*)_022577C0) + 0x28)), 0);
}





void ov45_0222EA2C(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_0222F8D8(*((u32*)_022577C0), r4);
}





void ov45_0222EA4C(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_0222F954(*((u32*)_022577C0), r5);
    // str r1, [r4]
    *((u32*)(r4 + 4)) = *((u32*)(r0 + 4));
}





void ov45_0222EA78(void) {
    // mvn r0, r0
    // str r0, [sp]
    GF_AssertFail(*((u32*)_022577C0));
    ov45_0222FB5C(*((u32*)_022577C0), 0, 0);
    // mvn r1, r1
    // add r1, sp, #4
    ov45_0222EA4C(0);
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #8]
    // sub r0, r2, r5
    // mov ip, r1
    // mov r0, ip
    // sbc r0, r6
    // str r7, [sp]
    // ldr r0, [sp]
}





void ov45_0222EAD4(void) {
    // str r0, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    GF_AssertFail(*((u32*)_022577C0));
    ov45_0222FB5C(*((u32*)_022577C0), 0, 0);
    // mvn r1, r1
    // ldr r1, [sp]
    // add r1, sp, #8
    ov45_0222EA4C(0);
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0xc]
    // sub r0, r2, r6
    // mov ip, r1
    // mov r0, ip
    // sbc r0, r7
    // str r5, [sp, #4]
    // ldr r0, [sp, #4]
}





void ov45_0222EB38(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_0222F7B0(r4);
    ov45_02231C8C();
    ov45_0222F74C();
    // strb r4, [r3, r1]
    // strb r3, [r2, r1]
}





void ov45_0222EB74(void) {
}





void ov45_0222EB94(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_02231EC0();
    ov45_0222F74C();
    // strb r3, [r2, r1]
}





void ov45_0222EBC4(void) {
    GF_AssertFail(*((u32*)_022577C0));
}





void ov45_0222EBF0(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_0222FBD8(*((u32*)_022577C0), r4);
}





void ov45_0222EC10(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // ldrsh r2, [r2, r0]
    // str r2, [r4]
    *((u32*)(r4 + 4)) = *((u32*)(*((u32*)_022577C0) + ((0x47 << 2) + 4)));
}





void ov45_0222EC3C(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // ldrsh r2, [r2, r0]
    // str r2, [r4]
    *((u32*)(r4 + 4)) = *((u32*)(*((u32*)_022577C0) + ((0x49 << 2) + 4)));
}





void ov45_0222EC68(void) {
    // add r1, r0, #0
    // ldr r0, _0222EC74 ; =_022577C0
    // ldr r3, _0222EC78 ; =ov45_0222FB24
    // ldr r0, [r0]
    // mov r2, #0
    // bx r3
    // _0222EC74: .word _022577C0
    // _0222EC78: .word ov45_0222FB24
    // TODO: decompile
}





void ov45_0222EC7C(void) {
    // add r1, r0, #0
    // ldr r0, _0222EC88 ; =_022577C0
    // ldr r3, _0222EC8C ; =ov45_0222FB24
    // ldr r0, [r0]
    // mov r2, #1
    // bx r3
    // _0222EC88: .word _022577C0
    // _0222EC8C: .word ov45_0222FB24
    // TODO: decompile
}





void ov45_0222EC90(void) {
    // add r1, r0, #0
    // ldr r0, _0222EC9C ; =_022577C0
    // ldr r3, _0222ECA0 ; =ov45_0222FB5C
    // ldr r0, [r0]
    // mov r2, #0
    // bx r3
    // _0222EC9C: .word _022577C0
    // _0222ECA0: .word ov45_0222FB5C
    // TODO: decompile
}





void ov45_0222ECA4(void) {
    // add r1, r0, #0
    // ldr r0, _0222ECB0 ; =_022577C0
    // ldr r3, _0222ECB4 ; =ov45_0222FB5C
    // ldr r0, [r0]
    // mov r2, #1
    // bx r3
    // _0222ECB0: .word _022577C0
    // _0222ECB4: .word ov45_0222FB5C
    // TODO: decompile
}





void ov45_0222ECB8(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // add r0, r1, r0
    // ldmia r0!, {r2, r3}
    // stmia r4!, {r2, r3}
}





void ov45_0222ECDC(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail(0, *((u8*)(*((u32*)_022577C0) + (0x4b << 2))), *((u32*)_022577C0));
    GF_AssertFail();
    // add r0, r1, r0
    // add r1, r5, r5
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222ED2C: ; jump table
    // tst r0, r4
    ov45_022303BC(*((u32*)((0x6d << 2) + 8)), 0x13);
    ov45_022303BC(0x10);
    ov45_022303BC(0x11);
}





void ov45_0222ED7C(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_0222F7B4(*((u32*)_022577C0));
    // strb r3, [r2, r1]
}





void ov45_0222EDA8(void) {
    // ldr r0, _0222EDC0 ; =_022577C0
    // ldr r1, [r0]
    // mov r0, #0x13
    // lsl r0, r0, #4
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _0222EDBA
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _0222EDC0: .word _022577C0
    // TODO: decompile
}





void ov45_0222EDC4(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail();
    // add r1, r1, r0
}





void ov45_0222EDF0(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail();
    // add r1, r1, r0
}





void ov45_0222EE20(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // str r5, [r0, r1]
    // str r4, [r3, r0]
    // add r1, #8
    // str r6, [r0, r1]
}





void ov45_0222EE50(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // str r5, [r0, r1]
    // str r4, [r3, r0]
    // add r1, #8
    // str r6, [r0, r1]
}





void ov45_0222EE80(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // add r1, r1, r0
    // strb r0, [r1]
    *((u8*)(*((u32*)_022577C0) + 1)) = 0;
    *((u8*)(*((u32*)_022577C0) + 2)) = 0;
    *((u8*)(*((u32*)_022577C0) + 3)) = 0;
    *((u8*)(*((u32*)_022577C0) + 4)) = 0;
    *((u8*)(*((u32*)_022577C0) + 5)) = 0;
    *((u8*)(*((u32*)_022577C0) + 6)) = 0;
    *((u8*)(*((u32*)_022577C0) + 7)) = 0;
    *((u8*)(*((u32*)_022577C0) + 8)) = 0;
    *((u8*)(*((u32*)_022577C0) + 9)) = 0;
    *((u8*)(*((u32*)_022577C0) + 0xa)) = 0;
    *((u8*)(*((u32*)_022577C0) + 0xb)) = 0;
}





void ov45_0222EEB8(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // add r1, r1, r0
    // strb r0, [r1]
    *((u8*)(*((u32*)_022577C0) + 1)) = 0;
    *((u8*)(*((u32*)_022577C0) + 2)) = 0;
    *((u8*)(*((u32*)_022577C0) + 3)) = 0;
    *((u8*)(*((u32*)_022577C0) + 4)) = 0;
    *((u8*)(*((u32*)_022577C0) + 5)) = 0;
    *((u8*)(*((u32*)_022577C0) + 6)) = 0;
    *((u8*)(*((u32*)_022577C0) + 7)) = 0;
    *((u8*)(*((u32*)_022577C0) + 8)) = 0;
    *((u8*)(*((u32*)_022577C0) + 9)) = 0;
    *((u8*)(*((u32*)_022577C0) + 0xa)) = 0;
    *((u8*)(*((u32*)_022577C0) + 0xb)) = 0;
}





void ov45_0222EEF0(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail(*((u32*)(*((u32*)_022577C0) + (0x62 << 2))), *((u32*)_022577C0));
    // add r0, r1, r0
    GF_AssertFail(*((u32*)((r5 << 3) + 4)), *((u32*)(*((u32*)_022577C0) + (0x61 << 2))));
    ov45_0223247C(0, r5, r6, r4);
    ov45_0222F74C();
    GF_AssertFail();
}





void ov45_0222EF4C(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail(*((u32*)(*((u32*)_022577C0) + (0x62 << 2))), *((u32*)_022577C0));
    // add r0, r1, r0
    GF_AssertFail(*((u32*)((r5 << 3) + 4)), *((u32*)(*((u32*)_022577C0) + (0x61 << 2))));
    ov45_02232500(r6, r5, r7, r4);
    ov45_0222F74C();
    GF_AssertFail();
}





void ov45_0222EFAC(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail(*((u32*)(*((u32*)_022577C0) + (0x65 << 2))), *((u32*)_022577C0));
    // add r0, r1, r0
    GF_AssertFail(*((u32*)((r5 << 3) + 4)), *((u32*)(*((u32*)_022577C0) + (0x19 << 4))));
    GF_AssertFail(*((u8*)(*((u32*)_022577C0) + 0x0000012D)), *((u32*)_022577C0));
    ov45_0222F7B0(*((u8*)(*((u32*)_022577C0) + 0x0000012D)), *((u32*)_022577C0));
    ov45_0223247C(r5, r6, r4);
    ov45_0222F74C();
    GF_AssertFail();
}





void ov45_0222F028(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_0223021C(*((u32*)_022577C0), r4);
    // add r3, r0, r5
    // sub r0, #0xe4
    // str r4, [r3, r0]
    // add r3, r0, r5
    // sub r0, #0xe0
    // str r6, [r3, r0]
    // add r3, r0, r5
    // sub r0, #0xdc
    // str r7, [r3, r0]
    // add r3, r0, r5
    // sub r0, #0xd8
    // str r7, [r3, r0]
    // sub r1, #0xe4
    // add r0, r2, r1
    // add r0, r0, r5
    // add r1, r2, r1
    ov45_02230378(0x0000069C, (0x67 << 2), *((u32*)_022577C0), 0x4c);
    // add r0, r1, r0
    // add r0, r0, r5
    ov45_0223285C(0x000005B8, *((u32*)_022577C0));
    ov45_0222F74C();
    GF_AssertFail();
    // add r2, r1, r5
    // strh r0, [r2, r1]
    ov45_02232580(1, 0x000005FC);
    // add r2, r2, r5
    // str r0, [r2, r7]
    // add r3, r2, r5
    // strh r0, [r3, r2]
    // sub r2, #0x6c
    // strh r4, [r3, r2]
    // sub r2, #0x6a
    // strb r4, [r3, r2]
    // sub r0, #0x69
    // strb r3, [r2, r0]
    // add r1, r4, r5
    _s32_div_f(*((u16*)(_022577C0 + ((6 << 8) - 2))), 0x1e, *((u32*)_022577C0), 0);
    // sub r0, #0x18
    // add r0, r4, r0
    // add r0, r0, r5
    ov00_021E5CEC(r7, r6, 1, r0);
    ov00_021E5CD0(ov45_02230390, *((u32*)_022577C0));
    ov00_021E5CA0(ov45_02230394, *((u32*)_022577C0));
}





void ov45_0222F154(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_02232CA4(*((u8*)(*((u32*)_022577C0) + (0x0000069C + 2))), *((u16*)(*((u32*)_022577C0) + 0x0000069C)), *((u32*)_022577C0));
    ov45_0222F74C();
    GF_AssertFail();
    ov45_02232580(_022577C0);
    ov45_022301E0(r4, *((u16*)(r4 + 0x0000069C)), r0);
    GF_AssertFail();
    // strb r2, [r1, r0]
}





void ov45_0222F1BC(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // add r5, r1, r6
    // sub r1, #0xda
    // str r0, [r5, r1]
    // sub r0, #0xe6
    // add r4, r1, r0
    // add r0, r4, r1
    ov45_02232BB0(*((u16*)(*((u32*)_022577C0) + (0x0000069E - 2))), (*((u16*)(*((u32*)_022577C0) + (0x0000069E - 2))) * 0x4c), 0x4c, 0x0000069E);
    ov45_0222F74C();
    GF_AssertFail();
}





void ov45_0222F218(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // add r0, r3, r0
    // sub r1, #0xd8
}





void ov45_0222F254(void) {
}





void ov45_0222F274(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_0223021C(*((u32*)_022577C0), r4);
}





void ov45_0222F294(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_0222F274(r4);
    // add r1, r1, r0
}





void ov45_0222F2D4(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail();
    ov45_0223021C(*((u32*)_022577C0), r4);
    ov45_022302B0(*((u32*)_022577C0), r4);
    // sub r0, r1, r0
}





void ov45_0222F314(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail();
    ov45_0223021C(*((u32*)_022577C0), r4);
    ov45_022302B0(*((u32*)_022577C0), r4);
}





void ov45_0222F350(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_0223021C(*((u32*)_022577C0), r5);
    // add r6, r0, r4
    // sub r1, #0xd8
    // strh r5, [r0, r2]
    // sub r2, #0x9e
    // add r0, r5, r4
    _s32_div_f(*((u16*)(0 + 0x0000069C)), 0x1e, 0x0000069C, _022577C0);
    // add r0, r5, r1
    // add r2, r5, r4
    // sub r1, #0x2c
    // add r0, r0, r4
    ov00_021E5CEC(*((u32*)(r2 + 0x000005E8)), 0, r0);
    ov00_021E5CD0(ov45_02230390, *((u32*)_022577C0));
    ov00_021E5CA0(ov45_02230394, *((u32*)_022577C0));
}





void ov45_0222F3E8(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail();
    ov45_0223021C(*((u32*)_022577C0), r4);
    // add r1, r1, r0
}





void ov45_0222F430(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // mvn r0, r0
    // add r0, r3, r0
    // sub r1, #0x9c
}





void ov45_0222F464(void) {
}





void ov45_0222F484(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // add r0, r1, r0
    ov45_02230434((0x6a << 4), r4);
}





void ov45_0222F4AC(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // add r0, r1, r0
    ov45_0223045C((0x6a << 4), r4);
}





void ov45_0222F4D4(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail();
    GF_AssertFail(*((u32*)(*((u32*)_022577C0) + (0x26 << 6))), *((u32*)_022577C0));
    ov45_02232E60(r4);
    ov45_0222F74C();
    GF_AssertFail();
    // str r2, [r1, r0]
}





void ov45_0222F524(void) {
}





void ov45_0222F544(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail();
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222F56C: ; jump table
    // sub r4, #8
    // add r1, r1, r0
    GF_AssertFail(*((u32*)(*((u32*)_022577C0) + 0x00000974)), *((u32*)_022577C0));
}





void ov45_0222F628(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail();
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222F650: ; jump table
    // add r0, r1, r0
    // add r2, r1, r0
    // add r0, r2, r0
    // add r0, r1, r0
    // add r2, r1, r0
    // add r0, r2, r0
    GF_AssertFail((0x24 * (r4 - 5)), (r4 - 5));
}





void ov45_0222F6B0(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail();
    GF_AssertFail();
    // add r1, r0, r4
    // add r1, r0, r4
}





void ov45_0222F70C(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov00_021E5CD0(0, 0);
    ov00_021E5CA0(0, 0);
    // strh r3, [r1, r0]
    // strb r4, [r3, r1]
    // strb r4, [r1, r0]
}





void ov45_0222F74C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222F760: ; jump table
}





void ov45_0222F78C(void) {
    // strb r3, [r2, r0]
    // strb r3, [r1, r0]
}





void ov45_0222F7A8(void) {
    // bpl _0222F7AE
}





void ov45_0222F7B0(void) {
    // add r0, r0, #1
    // bx lr
    // TODO: decompile
}





void ov45_0222F7B4(void) {
    // str r0, [sp, #4]
    WifiHistory_GetPlayerCountry(*((u32*)(r0 + 8)));
    // ldr r0, [sp, #4]
    WiFiHistory_GetPlayerRegion(*((u32*)(r0 + 8)));
    // ldr r2, [sp, #4]
    GF_AssertFail(0, (0 + 1), (r2 + 4), (0x00000136 - 2));
    // ldr r1, [sp, #4]
    // add r2, r1, r2
    // strh r4, [r2, r3]
    // strb r0, [r2, r1]
    // strb r1, [r2, r0]
    // str r0, [sp]
    // ldr r4, [sp, #4]
    // sub r0, #0x51
    // add r3, r4, r3
    ov45_022322A4(0x50, 0, *((u32*)ov45_02254EF0), (0x4d << 2));
    ov45_0222F74C();
}





void ov45_0222F848(void) {
    Heap_Alloc(r2, (r1 * 0x14));
    *((u32*)(*((u32*)_022577C0) + 0x24)) = r0;
    memset(*((u32*)(*((u32*)_022577C0) + 0x24)), 0, r4);
    *((u32*)(*((u32*)_022577C0) + 0x28)) = r5;
}





void ov45_0222F878(void) {
    // ldr r0, _0222F884 ; =_022577C0
    // ldr r3, _0222F888 ; =Heap_Free
    // ldr r0, [r0]
    // ldr r0, [r0, #0x24]
    // bx r3
    // nop
    // _0222F884: .word _022577C0
    // _0222F888: .word Heap_Free
    // TODO: decompile
}





void ov45_0222F88C(void) {
}





void ov45_0222F898(void) {
    // str r2, [sp]
    // mvn r0, r0
    // add r0, r5, r4
    // ldr r1, [sp]
    // add r0, r5, r4
}





void ov45_0222F8D8(void) {
    // mvn r0, r0
    // add r0, r2, r1
}





void ov45_0222F8FC(void) {
    // mvn r0, r0
    // add r0, r1, r0
}





void ov45_0222F928(void) {
    // mvn r0, r0
    // add r2, r5, r0
    // ldmia r4!, {r0, r1}
    // add r2, #0x2c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}





void ov45_0222F954(void) {
    // mvn r0, r0
    // add r5, #0x2c
    // add r0, r5, r0
}





void ov45_0222F978(void) {
    // mvn r0, r0
    // add r5, #0x2c
    // add r2, r5, r1
    // strb r0, [r5, r1]
}





void ov45_0222F9B8(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // ldr r6, [sp]
    // ldr r6, [sp, #4]
    // strh r1, [r5, r0]
    // ldr r0, [sp, #8]
    // str r0, [r5, r1]
    // strh r6, [r5, r0]
    // add r5, #8
}





void ov45_0222FA10(void) {
    // str r6, [r5, r0]
    // add r5, #8
}





void ov45_0222FA40(void) {
    // add r0, r0, r2
    // strh r1, [r0, r2]
    // str r5, [r4, r6]
}





void ov45_0222FA74(void) {
    // str r1, [sp]
    ov45_0222FB24();
    // mvn r1, r1
    // add r5, r7, r0
    // add r1, r7, r0
    // add r0, r1, r4
    // str r0, [sp, #4]
    // ldrsh r1, [r1, r4]
    GF_AssertFail(*((u16*)(r5 + (r4 << 3))), 0);
    // ldr r1, [sp, #4]
    // ldrsh r1, [r1, r0]
    // add r2, r7, r4
    // str r0, [sp, #8]
    // add r1, r7, r4
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // str r0, [r2, r1]
    // ldr r0, [sp, #4]
    // ldrsh r0, [r0, r1]
    // ldr r0, [sp, #4]
    // strh r1, [r0]
}





void ov45_0222FAF8(void) {
    // mvn r1, r1
    // add r4, r5, r2
    // str r1, [r4, r0]
    // add r1, r5, r0
    // ldrsh r0, [r1, r2]
    // strh r0, [r1, r2]
}





void ov45_0222FB24(void) {
    // add r0, r0, r2
    // mvn r0, r0
}





void ov45_0222FB5C(void) {
    // add r1, r5, r6
    GF_AssertFail(*((u16*)(r1 + 0x0000011E)));
    // add r1, r5, r6
}





void ov45_0222FB84(void) {
    ov45_0222F7B0(r1);
    ov45_0222FA40(r5, 1);
    ov45_0222FB5C(r5, 0, 0);
    // mvn r0, r0
    ov45_0222FA74(r5, r0, 1);
    // add r6, #0xc
}





void ov45_0222FBD8(void) {
    // str r1, [sp]
    GF_AssertFail();
    // ldr r0, [sp]
    ov45_0222F7B0();
    // str r0, [sp, #4]
    ov45_0222FB5C(r6, 0, 0);
    // mvn r1, r1
    // ldr r0, [sp, #4]
    // add r5, #0xc
    // ldr r0, [sp]
}





void ov45_0222FC44(void) {
    // str r3, [r2, r1]
    // add r0, r2, r0
    // add r1, r2, r1
    ov45_02232170((0x6d << 2), 0x000005B4, *((u32*)_022577C0), (1 << 0xa));
    ov45_0222F74C();
    GF_AssertFail();
    // mvn r0, r0
    ov45_02232304(0, 0, *((u32*)ov45_02254EF0), 0);
    ov45_0222F7A8(r1);
    // strb r2, [r4, r0]
    ov45_0222FB84(*((u32*)_022577C0), *((u8*)(*((u32*)_022577C0) + 0x0000012D)), 1);
    ov45_02232580();
    ov45_0222FA74(*((u32*)_022577C0), r0, 1);
    // strb r2, [r4, r0]
    GF_AssertFail((r1 + 2), 2);
    ov45_0222EB94();
}





void ov45_0222FCE0(void) {
    // str r3, [sp]
    ov45_02232580();
    // add r0, r1, r0
    ov45_022320C4((0x67 << 2), *((u32*)_022577C0));
    ov45_0222FA74(*((u32*)_022577C0), r5, 0);
    // ldr r3, [sp]
    ov45_0222F898(*((u32*)_022577C0), r5, r7);
    ov45_0222F928(*((u32*)_022577C0), r5, r6);
    ov45_0222F8D8(*((u32*)_022577C0), r5);
    // blx r4
}





void ov45_0222FD50(void) {
    ov45_0222FB24(*((u32*)_022577C0), r0, 0);
    // mvn r1, r1
    // add r2, r1, r4
    // add r1, r1, r2
    // add r1, r1, r4
    ov45_02230008(r5, *((u32*)_022577C0), 0x000005B8);
    // add r4, #0x4c
    // blx r2
    ov45_0222F978(*((u32*)_022577C0), r5, *((u32*)(*((u32*)_022577C0) + 0x10)));
    ov45_0222F8FC(*((u32*)_022577C0), r5);
    ov45_0222FAF8(*((u32*)_022577C0), r5, 0);
    ov45_0222FAF8(*((u32*)_022577C0), r5, 1);
}





void ov45_0222FDD4(void) {
    // bx lr
    // TODO: decompile
}





void ov45_0222FDD8(void) {
    // str r3, [sp]
    ov45_0222FB24(*((u32*)_022577C0), r0, 0);
    // mvn r1, r1
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222FE06: ; jump table
    ov45_0222F7A8(r4, 0);
    // _0222FE30: ; 0x0222FE30 unreachable
    // add r0, r0, r4
    // add r0, r0, r5
    // ldr r0, [sp, #0x18]
    GF_AssertFail(*((u32*)(*((u32*)_022577C0) + ((0x62 << 2) - 4))), *((u32*)(*((u32*)(*((u32*)_022577C0) + ((0x62 << 2) - 4))) + 4)), *((u32*)(*((u32*)_022577C0) + (0x62 << 2))));
    // add r6, r0, r4
    // add r3, #8
    // add r2, r4, r5
    // ldr r1, [sp]
    // blx r4
}





void ov45_0222FE84(void) {
    // ldr r0, [sp, #8]
    strcmp(*((u32*)ov45_02254EF0));
    // add r0, r1, r0
    // ldr r1, [sp, #0xc]
    memcpy((0x4d << 2), *((u32*)_022577C0), 0x50);
    // strb r1, [r2, r0]
}





void ov45_0222FEC4(void) {
    ov45_0222FB24(*((u32*)_022577C0), r0, 0);
    // mvn r1, r1
    ov45_0222F954(*((u32*)_022577C0), r5);
    ov45_0222F7B0(*((u8*)(*((u32*)_022577C0) + 0x0000012D)), *((u32*)_022577C0));
    ov45_0222FA74(*((u32*)_022577C0), r5, 1);
    ov45_0222FAF8(*((u32*)_022577C0), r5, 1);
    ov45_0222F928(*((u32*)_022577C0), r5, r7);
}





void ov45_0222FF40(void) {
    ov45_0222FB24(*((u32*)_022577C0), r0, 0);
    // mvn r1, r1
    ov45_0222F88C(*((u32*)_022577C0), r5, r4);
    // blx r3
}





void ov45_0222FF7C(void) {
    ov45_0222FB24(*((u32*)_022577C0), r0, 0);
    // mvn r1, r1
    ov45_0222E9E0(0);
    // sub r2, #0xe6
    // add r2, r1, r2
    // add r0, r2, r1
    // add r1, sp, #8
    ov45_02230384(*((u16*)(*((u32*)_022577C0) + (0x0000069E - 2))), (0x4c * *((u16*)(*((u32*)_022577C0) + (0x0000069E - 2)))), 0x0000069E, *((u32*)r4));
    // add r1, sp, #0
    ov45_02230384(r4);
    // ldr r3, [sp, #8]
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // sub r0, r3, r0
    // sbc r2, r1
    // strb r2, [r1, r0]
    ov45_0222F154(0x0000069F, *((u32*)_022577C0), 1);
    ov45_02230164(*((u32*)_022577C0), *((u32*)r4), r5, r4);
}





void ov45_02230008(void) {
    ov45_0222FB24(*((u32*)_022577C0), r0, 0);
    // mvn r1, r1
    ov45_022301E0(*((u32*)_022577C0), *((u32*)r4), r5);
    // strb r2, [r5, r0]
}





void ov45_02230050(void) {
    // blx r2
}





void ov45_02230064(void) {
    // strb r2, [r1, r0]
    // blx r3
}





void ov45_02230090(void) {
    // strb r2, [r1, r0]
}





void ov45_022300B0(void) {
    // add r0, r3, r0
    ov45_0223040C((0x6a << 4), *((u32*)_022577C0));
    // strb r2, [r1, r0]
}





void ov45_022300DC(void) {
    // add r0, r2, r0
    ov45_0223048C(0x000006A8, *((u32*)_022577C0));
    // strb r2, [r1, r0]
}





void ov45_02230108(void) {
    GF_AssertFail(*((u32*)(*((u32*)_022577C0) + (0x26 << 6))), *((u32*)_022577C0));
    // str r2, [r1, r0]
}





void ov45_02230130(void) {
    // strb r2, [r1, r0]
}





void ov45_02230144(void) {
}





void ov45_02230164(void) {
    // str r2, [sp]
    GF_AssertFail();
    ov45_0223021C(r5, r6);
    // add r1, r5, r0
    // ldr r0, [sp]
    // add r1, r5, r4
    // add r3, r1, r0
    // ldmia r7!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r2, r5, r0
    // strh r1, [r2, r4]
    // ldr r0, [sp]
    // add r2, r5, r4
    // str r0, [r2, r1]
    ov45_0223023C(r5, r6, (8 - 1));
    // add r2, r5, r4
    // strh r0, [r2, r1]
}





void ov45_022301E0(void) {
    // add r2, r5, r0
    // strh r1, [r2, r0]
}





void ov45_0223021C(void) {
}





void ov45_0223023C(void) {
    // add r1, sp, #0
    // ldr r3, [sp]
    // ldr r1, [sp, #4]
    // sub r0, r0, r3
    // sbc r2, r1
    // sub r1, r1, r0
    // sbc r3, r2
    // sub r1, r0, r1
    // mov ip, r2
    // mov r1, ip
    // sbc r1, r3
    // sub r0, r1, r0
    // mov ip, r3
    // mov r1, ip
    // sbc r1, r2
}





void ov45_022302B0(void) {
    GF_AssertFail();
    // add r1, r5, r4
    GF_AssertFail(*((u16*)(r1 + 0x000005FC)));
    // add r0, r5, r0
    // add r0, r0, r4
}





void ov45_022302E4(void) {
    ov00_021E7144(*((u8*)(*((u32*)_022577C0) + 0x0000069E)), *((u32*)_022577C0));
    GF_AssertFail();
    // add r2, r1, r0
    // add r0, #0xe4
    // add r0, r2, r0
    *((u32*)((0x4c * *((u16*)(*((u32*)_022577C0) + 0x000005B8))) + 8)) = r4;
    ov45_02232BB0((0x4c * *((u16*)(*((u32*)_022577C0) + 0x000005B8))), *((u32*)((0x4c * *((u16*)(*((u32*)_022577C0) + 0x000005B8))) + 8)));
    // add r0, r0, r5
    // strh r2, [r0, r1]
    ov45_0223023C(*((u32*)_022577C0), 0, (*((u16*)(*((u32*)_022577C0) + 0x000005FE)) - 1));
    // add r1, r1, r5
    // strh r0, [r1, r2]
    // add r5, #0x4c
}





void ov45_02230378(void) {
}





void ov45_02230384(void) {
    // str r2, [r1]
}





void ov45_02230390(void) {
    // bx lr
    // TODO: decompile
}





void ov45_02230394(void) {
    ov45_0222F154(*((u8*)(r1 + 0x0000069E)), 0x0000069E);
    // strb r3, [r1, r0]
}





void ov45_022303BC(void) {
    // add r5, #8
}





void ov45_022303E4(void) {
}





void ov45_022303FC(void) {
}





void ov45_0223040C(void) {
}





void ov45_02230434(void) {
    // add r4, #8
}





void ov45_0223045C(void) {
    // add r0, r5, r0
    // add r4, #8
}





void ov45_0223048C(void) {
}





void ov45_02230498(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r3, [sp, #0xc]
    Heap_Alloc(r2, 0x30);
    memset(0, 0x30);
    // ldr r2, [sp, #4]
    Heap_Alloc(r7, (0x90 * r2));
    *((u32*)(r4 + 0x10)) = r0;
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 0x14)) = r0;
    // add r0, r0, r5
    ov45_02230AB4(*((u32*)(r4 + 0x10)));
    // add r5, #0x90
    GF2dGfxRawResMan_Create(1, r7);
    // str r0, [r4]
    GF2dGfxRawResMan_Create(2, r7);
    *((u32*)(r4 + 4)) = r0;
    GF3dGfxRawResMan_Create(0x14, r7);
    *((u32*)(r4 + 8)) = r0;
    sub_02023738(1, r7);
    // ldr r0, [sp, #4]
    // str r7, [sp, #0x24]
    // str r0, [sp, #0x20]
    // add r0, sp, #0x20
    sub_020237EC();
    *((u32*)(r4 + 0xc)) = r0;
    NARC_New(0x51, r7);
    // str r0, [sp, #0x18]
    NARC_New(0xd1, r7);
    // ldr r3, [sp, #0xc]
    // str r2, [sp]
    // str r0, [sp, #0x14]
    GfGfxLoader_LoadFromOpenNarc(0x7f, 0);
    GF2dGfxRawResMan_AllocObj(*((u32*)r4), r0, 0x7f);
    ov45_0222D740(r5);
    NNS_G3dGetMdlSet(r5);
    // add r2, #8
    // add r1, r2, r1
    // add r0, r0, r1
    NNS_G3dMdlGetMdlLightEnableFlag(0, 0, r0);
    *((u32*)(r4 + 0x2c)) = r0;
    // str r7, [sp]
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0xc]
    GfGfxLoader_LoadFromOpenNarc(*((u16*)ov45_02254C38), 0);
    GF2dGfxRawResMan_AllocObj(*((u32*)(r4 + 4)), r0, *((u16*)r5));
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0xc]
    GfGfxLoader_LoadFromOpenNarc(0, ((*((u16*)(ov45_02254C48 + 2)) << 0x11) >> 0x11), 0);
    // ldr r0, [sp, #0xc]
    // str r0, [sp]
    GF3dGfxRawResMan_AllocObj(*((u32*)(r4 + 8)), r0, ((*((u16*)(r5 + 2)) << 0x11) >> 0x11), r6);
    // str r0, [sp, #0x1c]
    GF3dGfxRawResObj_AllocVramAndGetKeys();
    // ldr r0, [sp, #0x1c]
    GF3dGfxRawResObj_LoadTex();
    // ldr r0, [sp, #0x1c]
    GF3dGfxRawResObj_FreeVramAndSecondaryHeader();
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0xc]
    // add r0, #0x18
    ov45_022309E8(r4, 0x80);
    // ldr r0, [sp, #0x18]
    NARC_Delete();
    // ldr r0, [sp, #0x14]
    NARC_Delete();
}





void ov45_02230638(void) {
    // add r0, #0x18
}





void ov45_02230680(void) {
    // add r0, r0, r4
    // add r0, r0, r4
    // add r0, r0, r4
    // add r4, #0x90
}





void ov45_022306B4(void) {
    // add r0, #0x18
    // add r0, r0, r4
    // add r0, r0, r4
    // add r4, #0x90
}





void ov45_022306F4(void) {
}





void ov45_02230700(void) {
}





void ov45_0223070C(void) {
    ov45_02230A6C();
    *((u32*)(r0 + 4)) = r7;
    // add r1, sp, #0x34
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x28
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    ov42_02228188(r7, 7, ov45_02254C3C);
    ov45_0223099C();
    GF2dGfxRawResMan_GetObjById(*((u32*)r5), 0x7f);
    GF2dGfxRawResObj_GetData();
    // str r0, [sp, #0x14]
    GF3dGfxRawResMan_GetObjById(*((u32*)(r5 + 8)), ((*((u16*)(r6 + 2)) << 0x11) >> 0x11));
    // str r0, [sp, #0x18]
    GF3dGfxRawResObj_GetTex();
    // str r0, [sp, #0x10]
    GF2dGfxRawResMan_GetObjById(*((u32*)(r5 + 4)), (0x46 << 2));
    GF2dGfxRawResObj_GetData();
    // add r1, sp, #0x40
    sub_02026E18();
    // add r0, sp, #0x40
    // str r0, [sp]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // add r0, sp, #0x70
    sub_02023E2C(((*((u16*)(r6 + 2)) << 0x10) >> 0x1f), ov45_02254C98);
    // ldr r0, [sp, #0x18]
    GF3dGfxRawResObj_GetTexKey();
    // ldr r0, [sp, #0x18]
    GF3dGfxRawResObj_GetTex4x4Key();
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    GF3dGfxRawResObj_GetPlttKey();
    // add r1, sp, #0x40
    // str r1, [sp]
    // ldr r1, [sp, #0x1c]
    // str r6, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // add r0, sp, #0x70
    sub_02023E04(ov45_02254C98);
    ov42_022282DC(r7);
    // add r1, sp, #0x20
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // add r0, sp, #0x24
    *((u16*)(r1 + 4)) = *((u16*)r1);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    // add r1, sp, #0x34
    ov49_02258800((r0 >> 0x10), *((u16*)(r1 + 2)));
    // ldr r1, [sp, #0x3c]
    // add r0, r1, r0
    // str r0, [sp, #0x3c]
    // add r3, sp, #0x34
    // str r0, [sp, #0x50]
    // add r0, sp, #0x70
    // str r0, [sp, #0x54]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x58
    // stmia r2!, {r0, r1}
    // add r3, sp, #0x28
    // str r0, [r2]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x64
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, sp, #0x50
    sub_02023D44(*((u32*)r3));
    *((u32*)(r4 + 8)) = r0;
    sub_02023FE4(ov45_02230E64, r4);
    // add r0, #0x18
    // add r1, #0xc
    ov45_02230A5C(r5, r4);
    // ldr r6, [sp, #0x3c]
    // ldr r1, [sp, #0x34]
    // add r0, #0xc
    // sub r3, r6, r3
    sub_020182A8(r4, (2 << 0xc), ((2 << 0xc) << 2));
    // strb r0, [r4]
    // strb r0, [r4]
    // strb r1, [r4]
    // add r0, #0x8c
    // str r1, [r0]
}





void ov45_02230884(void) {
}





void ov45_0223089C(void) {
    // and r1, r2
    // strb r1, [r0]
}





void ov45_022308B0(void) {
    // add r0, #0x8c
    // str r1, [r0]
}





void ov45_022308B8(void) {
    // ldrb r0, [r0]
}





void ov45_022308C0(void) {
    // add r1, sp, #0
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
}





void ov45_022308E4(void) {
    // add r5, #0xc
    // sub r3, r4, r3
}





void ov45_02230908(void) {
}





void ov45_02230920(void) {
}





void ov45_0223093C(void) {
    // bic r3, r2
    // orr r2, r4
    // bic r2, r3
    // orr r1, r2
}





void ov45_02230968(void) {
    // bic r2, r1
}





void ov45_02230974(void) {
}





void ov45_02230978(void) {
    // strb r1, [r0]
}





void ov45_02230994(void) {
    // ldrb r0, [r0]
}





void ov45_0223099C(void) {
    // add r0, r1, r0
    GF_AssertFail((0 << 2), ov45_02254C48, (0 + 1), (ov45_02254C48 + 4));
}





void ov45_022309C4(void) {
    // cmp r0, #0
    // bne _022309CA
    // add r1, r1, #4
    // add r0, r1, #0
    // bx lr
    // TODO: decompile
}





void ov45_022309D0(void) {
}





void ov45_022309E8(void) {
    // add r0, sp, #0
    // ldr r0, [sp]
    // str r0, [r4]
    // add r2, #8
    // add r1, r2, r1
    // add r0, r0, r1
}





void ov45_02230A44(void) {
}





void ov45_02230A4C(void) {
}





void ov45_02230A58(void) {
    // ldr r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}





void ov45_02230A5C(void) {
    // ldr r3, _02230A68 ; =sub_020181B0
    // add r2, r0, #0
    // add r0, r1, #0
    // add r1, r2, #0
    // bx r3
    // nop
    // _02230A68: .word sub_020181B0
    // TODO: decompile
}





void ov45_02230A6C(void) {
    // add r0, r0, r4
    // add r0, r1, r0
    // add r4, #0x90
}





void ov45_02230AA4(void) {
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // beq _02230AAE
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}





void ov45_02230AB4(void) {
}





void ov45_02230AC0(void) {
}





void ov45_02230ACC(void) {
    ov42_02228188(*((u32*)(r0 + 4)), 5);
    ov42_02228188(*((u32*)(r5 + 4)), 8);
    // add r0, #0x86
    // add r0, #0x84
    // add r0, #0x84
    ov45_02230DC4(*((u8*)r5));
    sub_02023EF4(*((u32*)(r5 + 8)));
    // add r1, #0x85
    // strb r0, [r1]
    sub_02023F70(*((u32*)(r5 + 8)), r5);
    // add r1, #0x88
    // str r0, [r1]
    // add r0, #0x84
    // strb r4, [r0]
    // add r0, #0x86
    // strh r6, [r0]
    // blx r1
    ov42_022282F4(*((u32*)(r5 + 4)), *((u32*)(ov45_02254F28 + (r4 << 2))), (r4 << 2));
    // add r2, sp, #0
    // strh r0, [r2]
    *((u16*)(r2 + 2)) = (r0 >> 0x10);
    // add r1, sp, #4
    *((u16*)(r2 + 4)) = *((u16*)r2);
    *((u16*)(r2 + 6)) = *((u16*)(r2 + 2));
    ov45_022308C0(r5);
}





void ov45_02230B64(void) {
}





void ov45_02230B8C(void) {
    // add r0, #0x85
    // add r5, #0x88
    // add r1, r6, r1
}





void ov45_02230BFC(void) {
}





void ov45_02230C40(void) {
    // add r0, #0x85
    // add r5, #0x88
    // add r1, r6, r1
}





void ov45_02230CB0(void) {
    // blx r1
}





void ov45_02230CD8(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    ov45_022309C4(1, *((u8*)(ov45_02254C34 + (*((u8*)(r0 + 2)) >> 2))), (*((u8*)(r0 + 2)) >> 2), *((u8*)(r0 + 2)));
    sub_02023EE0(*((u32*)(r4 + 8)), r0);
    sub_02023F40(*((u32*)(r4 + 8)), 0);
    // add r0, r0, r1
    *((u8*)(r4 + 2)) = *((u8*)(r4 + 2));
    *((u8*)(r4 + 2)) = 0;
}





void ov45_02230D20(void) {
}





void ov45_02230D5C(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
}





void ov45_02230DC4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230DD4: ; jump table
}





void ov45_02230DF4(void) {
    // strb r0, [r4]
    // strb r1, [r4]
}





void ov45_02230E28(void) {
    // add r4, #0xc
    // add r4, #0xc
}





void ov45_02230E64(void) {
}





void ov45_02230E78(void) {
    sub_02023F90();
    // add r4, #0x14
    sub_02023E68(r5);
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x38
    // stmia r2!, {r0, r1}
    // add r1, sp, #0
    // str r0, [r2]
    // ldrsh r0, [r4, r0]
    *((u16*)(r1 + 0x24)) = 0x1e;
    // ldrsh r2, [r4, r0]
    *((u16*)(r1 + 0x26)) = r2;
    // ldrsh r0, [r4, r0]
    *((u16*)(r1 + 0x28)) = 0x20;
    // asr r0, r0, #0xc
    // str r0, [sp, #0x2c]
    // asr r0, r0, #0xc
    // str r0, [sp, #0x30]
    // asr r0, r0, #0xc
    // str r0, [sp, #0x34]
    // ldrsh r0, [r4, r0]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(0x18, *((u32*)(r4 + 0x24)), r0);
    // add r3, r0, r3
    // adc r1, r6
    // ldr r2, [sp, #0x38]
    // add r0, r2, r1
    // str r0, [sp, #0x38]
    // ldrsh r0, [r4, r0]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(0x1a, (((2 << 0xa) >> 0xc) | (r1 << 0x14)), *((u32*)(r4 + 0x24)), (2 << 0xa));
    // add r3, r0, r3
    // adc r1, r6
    // ldr r2, [sp, #0x3c]
    // add r0, r2, r1
    // str r0, [sp, #0x3c]
    // ldrsh r0, [r4, r0]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(0x1c, (((2 << 0xa) >> 0xc) | (r1 << 0x14)), *((u32*)(r4 + 0x24)), (2 << 0xa));
    // add r3, r0, r3
    // adc r1, r6
    // ldr r2, [sp, #0x40]
    // add r0, r2, r1
    // str r0, [sp, #0x40]
    // ldrsh r0, [r4, r0]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(0x20, (((2 << 0xa) >> 0xc) | (r1 << 0x14)), *((u32*)(r4 + 0x24)), (2 << 0xa));
    // add r3, r0, r3
    // adc r1, r4
    // ldr r2, [sp, #0x40]
    // sub r0, r2, r1
    // str r0, [sp, #0x40]
    // add r0, sp, #0
    MTX_Identity33_((r1 << 0x14), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa));
    // add r0, sp, #0
    MI_Copy36B(NNS_G3dGlb);
    *((u32*)(NNS_G3dGlb + 0x7c)) = (*((u32*)(NNS_G3dGlb + 0x7c)) & ~(0xa4));
    sub_02023E94(r5, NNS_G3dGlb, (*((u32*)(NNS_G3dGlb + 0x7c)) & ~(0xa4)));
    NNS_G3dGlbSetBaseScale();
    // add r0, sp, #0x38
    // add r1, sp, #0x24
    sub_0201FA34();
}





void ov45_02230F94(void) {
    NARC_New(0x62, r3);
    // add r1, sp, #0xc
    // str r1, [sp]
    ov45_02231018(r7, 0xdb, 3);
    // add r0, sp, #8
    // str r0, [sp]
    ov45_02231018(r4, r7, r5, r6);
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // sub r0, r1, r0
    _s32_div_f((0x18 * ((r0 << 0x10) >> 0x10)), 0x0000FFFF);
    // add r0, #0x18
    _s32_div_f(0x18);
    // add r2, sp, #4
    // str r1, [r2]
    // add r1, sp, #4
    // strb r0, [r1]
    // add r1, sp, #0x30
    ov45_0222D524(r2, 0);
    NARC_Delete(r4);
    // ldr r0, [sp, #4]
}





void ov45_02231018(void) {
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r7, [sp]
    // add r1, sp, #0x18
    // str r1, [sp, #4]
    // ldr r3, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r4, [sp, #0x30]
    // ldr r0, [sp, #0x18]
    // add r1, r6, r1
    // ldrsh r0, [r1, r0]
    // str r0, [r4]
    // str r2, [sp]
    // add r0, sp, #0x14
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r1, r5, r0
    // ldrsh r0, [r1, r0]
    // ldrsh r0, [r5, r0]
    // str r0, [r4]
}




