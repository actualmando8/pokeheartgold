/* Decompiled from asm/unk_02005D10.s */
#include "global.h"

void sub_02005D10(void) {
    GF_GetPlayerNoBySeq();
    GF_GetSndHandleByPlayerNo();
    // str r5, [sp]
    // str r1, [sp, #4]
    sub_02006C14((1 - 2), (1 - 2), (1 - 2));
    sub_02004920(r5);
    sub_02005DA0(r5, r4);
}



void PlayBGM(void) {
    GF_GetPlayerNoBySeq();
    GF_GetSndHandleByPlayerNo();
    sub_02005DC4(r4, r5, r0);
    sub_02005DF4(r4, r0, r6);
    GF_AssertFail();
    sub_020059E0(0);
    sub_02004920(r4);
    sub_02005DA0(r4, r6);
}



void sub_02005DA0(void) {
    sub_02004A60();
    sub_02005464(r5, r4);
    GF_SndSetState(1);
    GF_SndWorkSetGbSoundsVolume(0x80);
}



void sub_02005DC4(void) {
    sub_02005328(3);
    GF_Snd_LoadState();
    GF_Snd_LoadSeq(r5);
    // str r5, [sp]
    // str r1, [sp, #4]
    sub_02006C14(r4, (1 - 2), (1 - 2), (1 - 2));
}



void sub_02005DF4(void) {
    GF_SdatGetAttrPtr(0x13);
    GF_SdatGetAttrPtr(0x20);
    GF_GetSoundHandle(0);
    GF_NNS_SndPlayerGetSeqNo();
    GF_GetBankBySeqNo();
    sub_020051A4(r5, r0);
    SndRadio_StopSeq(0);
    // ldrh r0, [r4]
    GF_GetBankBySeqNo();
    // str r5, [sp]
    // str r1, [sp, #4]
    sub_02006C14(r6, (1 - 2), r0, (1 - 2));
}



void sub_02005E44(void) {
    GF_SdatGetAttrPtr(0x15);
    // ldrb r0, [r0]
    GF_AssertFail();
    GF_GetPlayerNoBySeq(r4);
    GF_AssertFail();
    GF_Snd_LoadSeqEx(r4, 1);
    // str r4, [sp]
    // str r0, [sp, #4]
    // sub r1, #8
    sub_02006C14(7, 7, 7, 7);
    sub_02004920(r4);
    SndRadio_StopSeq(0);
    sub_02004A60(r4);
    GF_SndSetState(1);
}



void StopBGM(void) {
    NNS_SndPlayerStopSeqBySeqNo();
    GBSounds_GetGBSeqNoByDSSeqNo(r5);
    NNS_SndPlayerStopSeqBySeqNo(r4);
    GF_GetPlayerNoBySeq(r5);
    GF_GetSndHandleByPlayerNo();
    GF_GetSoundHandle();
    NNS_SndHandleReleaseSeq();
    sub_02005EEC();
}



void sub_02005EEC(void) {
}



void GF_SndStartFadeInBGM(void) {
    GF_GetCurrentPlayingBGM();
    GF_GetPlayerNoBySeq();
    GF_GetSndHandleByPlayerNo();
    GF_SndHandleMoveVolume(0, 0);
    GF_SndHandleMoveVolume(r7, r6, r5);
    sub_02005990(r5);
    GF_SndSetState(3);
}



void GF_SndStartFadeOutBGM(void) {
    GF_GetCurrentPlayingBGM();
    GF_GetPlayerNoBySeq();
    GF_SndGetFadeTimer();
    GF_GetSndHandleByPlayerNo(r6);
    GF_SndHandleMoveVolume(r5, r4);
    sub_02005990(r4);
    GF_SndSetState(4);
}



void GF_SndGetFadeTimer(void) {
}



void sub_02005F94(void) {
}



void Sound_Stop(void) {
    GF_SdatGetAttrPtr(0x10);
    GF_SdatGetAttrPtr(0x11);
    NNS_SndPlayerStopSeqAll(0);
    // ldrb r0, [r5]
    sub_02005728(0xe);
    // ldrb r0, [r4]
    sub_02005728(0xf);
    GF_SndSetState(0);
}



void sub_02005FD8(void) {
    GF_SdatGetAttrPtr(0x10);
    GF_SdatGetAttrPtr(0x11);
    GF_GetSoundHandle(7);
    NNS_SndPlayerStopSeq(0);
    sub_02005EEC();
    sub_0200615C((0 + 3), 0);
    sub_02006300(0);
    // ldrb r0, [r7]
    sub_02005728(0xe);
    // ldrb r0, [r6]
    sub_02005728(0xf);
}



void sub_0200602C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl PlaySE
    // add r6, r0, #0
    // ldr r1, _02006048 ; =0x0000FFFF
    // add r0, r5, #0
    // add r2, r4, #0
    // bl sub_020061B4
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _02006048: .word 0x0000FFFF
    // TODO: decompile
}



void PlaySE(void) {
    GF_GetPlayerNoBySeq();
    GF_GetSndHandleByPlayerNo();
    // mvn r1, r1
    // str r4, [sp]
    sub_020060BC(0, 0, 0);
}



void sub_0200606C(void) {
    GF_GetSndHandleByPlayerNo(r1);
    // mvn r2, r2
    // str r5, [sp]
    sub_020060BC(r4, 0, 0);
}



void sub_02006088(void) {
    GF_SdatGetAttrPtr(0x20);
    GF_GetPlayerNoBySeq(r5);
    GF_GetSndHandleByPlayerNo();
    // ldrh r0, [r4]
    GF_GetBankBySeqNo();
    // mvn r1, r1
    // str r5, [sp]
    sub_020060BC(r6, 0, r0, 0);
}



void sub_020060BC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // add r4, r1, #0
    // add r7, r2, #0
    // str r3, [sp, #8]
    // ldr r5, [sp, #0x20]
    // bl sub_02005BFC
    // cmp r0, #1
    // bne _020060E0
    // ldr r0, _02006114 ; =0x000005DC
    // sub r0, r5, r0
    // cmp r0, #1
    // bhi _020060E0
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl sub_02006C14
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02005464
    // cmp r4, #0
    // bne _0200610C
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // bl sub_02004920
    // add r0, r4, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02006114: .word 0x000005DC
    // TODO: decompile
}



void sub_02006118(void) {
    PlaySE();
    GF_SetVolumeBySeqNo(r5, r4);
}



void PlaySE_SetPitch(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl PlaySE
    // add r6, r0, #0
    // beq _0200614C
    // ldr r1, _02006150 ; =0x0000FFFF
    // add r0, r5, #0
    // add r2, r4, #0
    // bl sub_0200592C
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // _02006150: .word 0x0000FFFF
    // TODO: decompile
}



void StopSE(void) {
}



void sub_0200615C(void) {
}



void sub_0200616C(void) {
}



void IsSEPlaying(void) {
}



void sub_02006190(void) {
}



void GF_IsAnySEPlaying(void) {
}



void sub_020061B4(void) {
}



void sub_020061D0(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl GF_GetSndHandleByPlayerNo
    // bl GF_GetSoundHandle
    // ldr r1, _020061E8 ; =0x0000FFFF
    // add r2, r4, #0
    // bl NNS_SndPlayerSetTrackPan
    // pop {r4, pc}
    // nop
    // _020061E8: .word 0x0000FFFF
    // TODO: decompile
}



void sub_020061EC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #3
    // bl GF_GetSndHandleByPlayerNo
    // ldr r7, _02006214 ; =0x0000FFFF
    // add r4, r0, #0
    // mov r5, #0
    // add r0, r4, r5
    // bl GF_GetSoundHandle
    // add r1, r7, #0
    // add r2, r6, #0
    // bl NNS_SndPlayerSetTrackPan
    // add r5, r5, #1
    // cmp r5, #4
    // blt _020061FC
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02006214: .word 0x0000FFFF
    // TODO: decompile
}



void PlayCry(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #0x12
    // str r1, [sp, #8]
    // bl GF_SdatGetAttrPtr
    // add r7, r0, #0
    // mov r0, #0x24
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // mov r0, #0x35
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // ldr r1, [sp, #8]
    // add r0, r5, #0
    // bl sub_02006A0C
    // cmp r0, #1
    // bne _02006246
    // ldr r5, _020062D8 ; =0x000001EE
    // ldr r0, _020062D8 ; =0x000001EE
    // cmp r5, r0
    // beq _02006258
    // add r0, r0, #1
    // cmp r5, r0
    // bhi _02006256
    // cmp r5, #0
    // bne _02006258
    // mov r5, #1
    // ldr r0, _020062DC ; =0x000001B9
    // cmp r5, r0
    // bne _0200627A
    // mov r1, #0
    // ldr r0, [r6]
    // mov r2, #0x7f
    // add r3, r1, #0
    // bl sub_02006D04
    // cmp r0, #1
    // bne _0200627A
    // mov r0, #0
    // bl sub_02006E3C
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldrb r0, [r7]
    // cmp r0, #0
    // bne _020062AC
    // ldrb r0, [r4]
    // cmp r0, #0
    // bne _0200628C
    // mov r0, #0
    // bl sub_02006300
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #1
    // sub r1, r0, #2
    // add r2, r5, #0
    // add r3, r1, #0
    // bl sub_02006C14
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_02005464
    // b _020062CC
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #8
    // add r1, r0, #0
    // sub r1, #9
    // add r2, r5, #0
    // add r3, r1, #0
    // bl sub_02006C14
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #8
    // bl sub_02005464
    // mov r0, #0
    // bl sub_02006E3C
    // add r0, r4, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _020062D8: .word 0x000001EE
    // _020062DC: .word 0x000001B9
    // TODO: decompile
}



void sub_020062E0(void) {
}



void sub_02006300(void) {
    GF_SdatGetAttrPtr(0x10);
    GF_SdatGetAttrPtr(0x11);
    GF_SdatGetAttrPtr(0xf);
    GF_GetSoundHandle(1);
    NNS_SndPlayerStopSeq(r5);
    GF_GetSoundHandle(8);
    NNS_SndPlayerStopSeq(r5);
    // ldrb r0, [r6]
    sub_020058B8(0xe);
    sub_02005680(0xe);
    // ldrb r0, [r4]
    sub_020058B8(0xf);
    sub_02005680(0xf);
    sub_02006DB8();
    sub_02006A30();
}



BOOL IsCryFinished(void) {
    GF_SdatGetAttrPtr(0x10);
    GF_SdatGetAttrPtr(0x11);
    GF_SdatGetAttrPtr(0xf);
    GF_SdatGetAttrPtr(0x2e);
    // ldrb r0, [r5]
    sub_02005738(0xe);
    // ldrb r0, [r4]
    sub_02005738(0xf);
    GF_SndPlayerCountPlayingSeqByPlayerNo(0);
}



void PlayCryEx(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // add r4, r1, #0
    // str r0, [sp, #0x38]
    // mov r0, #0x10
    // add r6, r2, #0
    // add r7, r3, #0
    // ldr r5, [sp, #0x3c]
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x14]
    // mov r0, #0x11
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x10]
    // mov r0, #0x12
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0xc]
    // mov r0, #0x1e
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #8]
    // mov r0, #0x24
    // bl GF_SdatGetAttrPtr
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_02006A0C
    // cmp r0, #1
    // bne _020063EA
    // ldr r4, _02006740 ; =0x000001EE
    // ldr r0, _02006740 ; =0x000001EE
    // cmp r4, r0
    // beq _020063FC
    // add r0, r0, #1
    // cmp r4, r0
    // bhi _020063FA
    // cmp r4, #0
    // bne _020063FC
    // mov r4, #1
    // lsr r0, r6, #0x1f
    // add r0, r6, r0
    // asr r0, r0, #1
    // str r0, [sp, #0x1c]
    // add r0, #0x40
    // str r0, [sp, #0x1c]
    // add r0, r7, #0
    // str r0, [sp, #0x18]
    // sub r0, #0x1e
    // str r0, [sp, #0x18]
    // cmp r0, #0
    // bgt _02006418
    // mov r0, #1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // mov r1, #0
    // strb r1, [r0]
    // ldr r0, [sp, #0x14]
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02006432
    // mov r0, #0xe
    // bl sub_020058B8
    // mov r0, #0xe
    // bl sub_02005680
    // ldr r0, [sp, #0x10]
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02006446
    // mov r0, #0xf
    // bl sub_020058B8
    // mov r0, #0xf
    // bl sub_02005680
    // ldr r0, _02006744 ; =0x000001B9
    // cmp r4, r0
    // bne _020064DA
    // ldr r1, [sp, #4]
    // cmp r1, #0xc
    // bhi _020064D4
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0200645E: ; jump table
    // add r1, r5, #0
    // bl PlayCry
    // ldr r0, [sp, #8]
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _0200649C
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #1
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl sub_02006820
    // b _020064CE
    // ldr r0, [sp, #0x14]
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _020064BA
    // ldr r1, [sp, #0x1c]
    // mov r0, #0xe
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl sub_02005748
    // mov r0, #0xe
    // add r1, r7, #0
    // bl sub_02005774
    // b _020064CE
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #1
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl sub_02006820
    // add sp, #0x20
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // bl sub_02006E3C
    // ldr r0, [sp, #4]
    // cmp r0, #0xe
    // bls _020064E2
    // b _02006814
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _020064EE: ; jump table
    // add r0, r4, #0
    // add r1, r5, #0
    // bl PlayCry
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #1
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl sub_02006820
    // b _02006814
    // add r0, r4, #0
    // add r1, r5, #0
    // bl PlayCry
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #1
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl sub_02006820
    // ldr r1, [sp, #0x38]
    // mov r0, #0x14
    // bl sub_02006838
    // b _02006814
    // add r0, r4, #0
    // add r1, r5, #0
    // bl PlayCry
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #1
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl sub_02006820
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #1
    // mov r2, #0x40
    // bl GF_SndHandleSetTrackPitch
    // add r0, r4, #0
    // mov r1, #0x14
    // add r2, r5, #0
    // bl sub_02006AC0
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #8
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // ldr r2, [sp, #0x18]
    // add r0, r4, #0
    // mov r1, #8
    // bl sub_02006820
    // b _02006814
    // add r0, r4, #0
    // add r1, r5, #0
    // bl PlayCry
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #1
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl sub_02006820
    // ldr r1, [sp, #0x38]
    // mov r0, #0x1e
    // bl sub_02006838
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #1
    // mov r2, #0xc0
    // bl GF_SndHandleSetTrackPitch
    // add r0, r4, #0
    // mov r1, #0x10
    // add r2, r5, #0
    // bl sub_02006AC0
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #8
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // ldr r2, [sp, #0x18]
    // add r0, r4, #0
    // mov r1, #8
    // bl sub_02006820
    // b _02006814
    // mov r0, #0xe
    // bl sub_02005600
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp]
    // add r0, r4, #0
    // add r1, r7, #0
    // mov r3, #0xe
    // bl sub_020057AC
    // ldr r1, [sp, #0x1c]
    // mov r0, #0xe
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl sub_02005748
    // ldr r1, [sp, #0x38]
    // mov r0, #0xf
    // bl sub_02006838
    // mov r1, #0x86
    // mov r0, #0xe
    // lsl r1, r1, #8
    // bl sub_02005760
    // ldr r0, [sp, #0x38]
    // mov r1, #0x3f
    // str r0, [sp]
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // add r0, r4, #0
    // mvn r1, r1
    // bl sub_02006AF4
    // mov r1, #0x86
    // mov r0, #0xf
    // lsl r1, r1, #8
    // bl sub_02005760
    // b _02006814
    // add r0, r4, #0
    // add r1, r5, #0
    // bl PlayCry
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #1
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl sub_02006820
    // mov r0, #1
    // add r2, r0, #0
    // ldr r1, _02006748 ; =0x0000FFFF
    // sub r2, #0xe1
    // bl GF_SndHandleSetTrackPitch
    // b _02006814
    // add r0, r4, #0
    // add r1, r5, #0
    // bl PlayCry
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #1
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl sub_02006820
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #1
    // mov r2, #0x2c
    // bl GF_SndHandleSetTrackPitch
    // mov r1, #0x3f
    // add r0, r4, #0
    // mvn r1, r1
    // add r2, r5, #0
    // bl sub_02006AC0
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #8
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // ldr r2, [sp, #0x18]
    // add r0, r4, #0
    // mov r1, #8
    // bl sub_02006820
    // b _02006814
    // add r0, r4, #0
    // add r1, r5, #0
    // bl PlayCry
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #1
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl sub_02006820
    // ldr r1, [sp, #0x38]
    // mov r0, #0xb
    // bl sub_02006838
    // mov r0, #1
    // add r2, r0, #0
    // ldr r1, _02006748 ; =0x0000FFFF
    // sub r2, #0x81
    // bl GF_SndHandleSetTrackPitch
    // b _02006814
    // add r0, r4, #0
    // add r1, r5, #0
    // bl PlayCry
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #1
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl sub_02006820
    // ldr r1, [sp, #0x38]
    // mov r0, #0x3c
    // bl sub_02006838
    // ldr r1, _02006748 ; =0x0000FFFF
    // mov r0, #1
    // mov r2, #0x3c
    // bl GF_SndHandleSetTrackPitch
    // b _02006814
    // mov r0, #0xe
    // bl sub_02005600
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp]
    // add r0, r4, #0
    // add r1, r7, #0
    // mov r3, #0xe
    // bl sub_020057AC
    // ldr r1, [sp, #0x1c]
    // mov r0, #0xe
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl sub_02005748
    // ldr r1, [sp, #0x38]
    // mov r0, #0xd
    // bl sub_02006838
    // mov r1, #0x1a
    // mov r0, #0xe
    // lsl r1, r1, #0xa
    // bl sub_02005760
    // b _02006814
    // _02006740: .word 0x000001EE
    // _02006744: .word 0x000001B9
    // _02006748: .word 0x0000FFFF
    // add r0, r4, #0
    // add r1, r5, #0
    // bl PlayCry
    // ldr r1, _0200681C ; =0x0000FFFF
    // mov r0, #1
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl sub_02006820
    // ldr r1, [sp, #0x38]
    // mov r0, #0x64
    // bl sub_02006838
    // mov r0, #1
    // add r2, r0, #0
    // ldr r1, _0200681C ; =0x0000FFFF
    // sub r2, #0x2d
    // bl GF_SndHandleSetTrackPitch
    // b _02006814
    // add r0, r4, #0
    // add r1, r5, #0
    // bl PlayCry
    // ldr r1, _0200681C ; =0x0000FFFF
    // mov r0, #1
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl sub_02006820
    // mov r0, #1
    // add r2, r0, #0
    // ldr r1, _0200681C ; =0x0000FFFF
    // sub r2, #0x61
    // bl GF_SndHandleSetTrackPitch
    // b _02006814
    // add r0, r4, #0
    // add r1, r5, #0
    // bl PlayCry
    // ldr r1, _0200681C ; =0x0000FFFF
    // mov r0, #1
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl sub_02006820
    // ldr r1, [sp, #0x38]
    // mov r0, #0x14
    // bl sub_02006838
    // mov r0, #1
    // add r2, r0, #0
    // ldr r1, _0200681C ; =0x0000FFFF
    // sub r2, #0x61
    // bl GF_SndHandleSetTrackPitch
    // b _02006814
    // add r0, r4, #0
    // add r1, r5, #0
    // bl PlayCry
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0x7f
    // bl sub_02006820
    // add r0, r4, #0
    // mov r1, #0x14
    // add r2, r5, #0
    // bl sub_02006AC0
    // ldr r1, _0200681C ; =0x0000FFFF
    // mov r0, #8
    // add r2, r6, #0
    // bl GF_SndHandleSetTrackPan
    // mov r0, #8
    // add r1, r7, #0
    // mov r2, #0
    // bl GF_SndHandleMoveVolume
    // b _02006814
    // add r0, r4, #0
    // add r1, r5, #0
    // bl PlayCry
    // mov r0, #1
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0200681C: .word 0x0000FFFF
    // TODO: decompile
}



void sub_02006820(void) {
}



void sub_02006838(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #0x23
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // bl sub_020068F8
    // add r0, r4, #0
    // mov r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _0200685C
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // mov r2, #0
    // strb r2, [r4]
    // strb r2, [r4, #1]
    // strb r2, [r4, #2]
    // strb r2, [r4, #3]
    // strb r2, [r4, #4]
    // strb r2, [r4, #5]
    // strb r2, [r4, #6]
    // strb r2, [r4, #7]
    // ldr r0, _02006880 ; =sub_02006884
    // add r1, r4, #0
    // str r5, [r4]
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #4]
    // str r0, [r6]
    // pop {r4, r5, r6, pc}
    // nop
    // _02006880: .word sub_02006884
    // TODO: decompile
}



void sub_02006884(void) {
    GF_SdatGetAttrPtr(0x10);
    GF_SdatGetAttrPtr(0x11);
    GF_SndHandleMoveVolume(1, 0, *((u32*)r5));
    GF_SndHandleMoveVolume(8, 0, *((u32*)r5));
    // str r0, [r5]
    IsCryFinished((*((u32*)r5) - 1));
    // str r0, [r5]
    sub_02006300(0);
    // ldrb r0, [r6]
    sub_020058B8(0xe);
    sub_02005680(0xe);
    // ldrb r0, [r4]
    sub_020058B8(0xf);
    sub_02005680(0xf);
    sub_020068F8();
}



void sub_020068F8(void) {
    GF_SdatGetAttrPtr(0x23);
    SysTask_GetData(*((u32*)r0));
    SysTask_Destroy(*((u32*)r4));
    Heap_Free(r5);
    // str r0, [r4]
}



void sub_02006920(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r6, r0, #0
    // mov r0, #6
    // add r5, r1, #0
    // add r7, r2, #0
    // str r3, [sp, #8]
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // mov r0, #0x35
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0xc]
    // ldrb r0, [r4]
    // cmp r0, #0
    // bne _02006974
    // mov r0, #0x29
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x24]
    // mov r0, #0x2d
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x20]
    // mov r0, #0x2a
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x1c]
    // mov r0, #0x2b
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x18]
    // mov r0, #0x2c
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x14]
    // mov r0, #0x2e
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x10]
    // b _020069A4
    // mov r0, #0x2f
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x24]
    // mov r0, #0x33
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x20]
    // mov r0, #0x30
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x1c]
    // mov r0, #0x31
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x18]
    // mov r0, #0x32
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x14]
    // mov r0, #0x34
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _020069B4
    // ldrb r1, [r4]
    // mov r0, #1
    // eor r0, r1
    // strb r0, [r4]
    // add r1, sp, #0x30
    // ldrb r1, [r1, #0x18]
    // add r0, r5, #0
    // bl sub_02006A0C
    // cmp r0, #1
    // bne _020069C4
    // ldr r5, _02006A08 ; =0x000001EE
    // cmp r5, #0
    // beq _02006A04
    // add r1, sp, #0x30
    // ldrb r0, [r1, #0x14]
    // cmp r0, #0
    // bne _020069E8
    // ldr r0, [sp, #0x40]
    // ldr r3, [sp, #8]
    // str r0, [sp]
    // ldrb r0, [r1, #0x18]
    // add r1, r5, #0
    // add r2, r7, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // bl PlayCryEx
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #8]
    // str r6, [r1]
    // ldr r1, [sp, #0x20]
    // strh r5, [r1]
    // ldr r1, [sp, #0x1c]
    // str r7, [r1]
    // ldr r1, [sp, #0x18]
    // str r2, [r1]
    // ldr r2, [sp, #0x40]
    // ldr r1, [sp, #0x14]
    // str r2, [r1]
    // ldr r1, [sp, #0x10]
    // strb r0, [r1]
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _02006A08: .word 0x000001EE
    // TODO: decompile
}



void sub_02006A0C(void) {
    // mov r2, #0x7b
    // lsl r2, r2, #2
    // cmp r0, r2
    // bne _02006A1C
    // cmp r1, #1
    // bne _02006A1C
    // mov r0, #1
    // bx lr
    // ldr r1, _02006A2C ; =0x000001EE
    // cmp r0, r1
    // bne _02006A26
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _02006A2C: .word 0x000001EE
    // TODO: decompile
}



void sub_02006A30(void) {
    GF_SdatGetAttrPtr(0x29);
    GF_SdatGetAttrPtr(0x2d);
    GF_SdatGetAttrPtr(0x2a);
    GF_SdatGetAttrPtr(0x2b);
    GF_SdatGetAttrPtr(0x2c);
    // str r0, [sp]
    GF_SdatGetAttrPtr(0x2e);
    // str r0, [sp, #4]
    GF_SdatGetAttrPtr(0x2f);
    // str r0, [sp, #8]
    GF_SdatGetAttrPtr(0x33);
    // str r0, [sp, #0xc]
    GF_SdatGetAttrPtr(0x30);
    // str r0, [sp, #0x10]
    GF_SdatGetAttrPtr(0x31);
    // str r0, [sp, #0x14]
    GF_SdatGetAttrPtr(0x32);
    // str r0, [sp, #0x18]
    GF_SdatGetAttrPtr(0x34);
    // str r1, [r5]
    // strh r1, [r4]
    // str r1, [r6]
    // ldr r2, [sp]
    // str r1, [r7]
    // str r1, [r2]
    // ldr r2, [sp, #4]
    // strb r1, [r2]
    // ldr r2, [sp, #8]
    // str r1, [r2]
    // ldr r2, [sp, #0xc]
    // strh r1, [r2]
    // ldr r2, [sp, #0x10]
    // str r1, [r2]
    // ldr r2, [sp, #0x14]
    // str r1, [r2]
    // ldr r2, [sp, #0x18]
    // str r1, [r2]
    // strb r1, [r0]
}



void sub_02006AC0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r0, #0x12
    // add r4, r1, #0
    // add r6, r2, #0
    // bl GF_SdatGetAttrPtr
    // mov r1, #1
    // strb r1, [r0]
    // add r0, r1, #0
    // bl sub_02006E3C
    // add r0, r5, #0
    // add r1, r6, #0
    // bl PlayCry
    // add r5, r0, #0
    // ldr r1, _02006AF0 ; =0x0000FFFF
    // mov r0, #8
    // add r2, r4, #0
    // bl GF_SndHandleSetTrackPitch
    // add r0, r5, #0
    // pop {r4, r5, r6, pc}
    // _02006AF0: .word 0x0000FFFF
    // TODO: decompile
}



void sub_02006AF4(void) {
    GF_SdatGetAttrPtr(0x12);
    // strb r1, [r0]
    sub_02005600(0xf, 1);
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    sub_020057AC(r5, r4, r6, 0xf);
}



void PlayFanfare(void) {
    GF_GetBankInfoBySeqNo();
    sub_02006C04(r4);
    GF_GetCurrentPlayingBGM();
    GF_GetPlayerNoBySeq();
    sub_020053A8(1);
    SndRadio_PausePlayer(1);
    GF_SdatGetAttrPtr(0x1d);
    GF_Snd_SaveState();
    GF_Snd_LoadSeqEx(r4, 3);
    // str r4, [sp]
    // str r0, [sp, #4]
    sub_02006C14(2, (2 - 3), (2 - 3), (2 - 3));
    sub_02005464(r4, 2);
}



void sub_02006B84(void) {
    GF_SdatGetAttrPtr(0xe);
    GF_SndPlayerCountPlayingSeqByPlayerNo(2);
    // ldrh r0, [r4]
    // strh r0, [r4]
}



void sub_02006BB0(void) {
}



BOOL IsFanfarePlaying(void) {
    GF_SdatGetAttrPtr(0xe);
    sub_02006B84();
    sub_02006BB0(0);
    GF_GetCurrentPlayingBGM();
    GF_GetPlayerNoBySeq();
    sub_020053A8(0);
    SndRadio_PausePlayer(0);
}



void sub_02006C04(void) {
}



void sub_02006C14(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r0, [sp, #4]
    // add r0, sp, #0x10
    // ldrh r6, [r0, #0x10]
    // ldrb r0, [r0, #0x14]
    // add r5, r1, #0
    // add r7, r2, #0
    // str r3, [sp, #8]
    // cmp r0, #1
    // bne _02006C6A
    // bl SoundSys_GetGBSoundsState
    // cmp r0, #1
    // bne _02006C6A
    // add r0, sp, #0x10
    // ldrh r0, [r0, #0x10]
    // bl GBSounds_GetGBSeqNoByDSSeqNo
    // add r1, sp, #0x10
    // ldrh r1, [r1, #0x10]
    // add r4, r0, #0
    // cmp r1, r4
    // beq _02006C6A
    // add r6, r4, #0
    // ldr r7, _02006C88 ; =0x000002BD
    // bl sub_02004AB8
    // add r0, r4, #0
    // bl GF_GetPlayerNoBySeq
    // mov r1, #0
    // mvn r1, r1
    // cmp r5, r1
    // beq _02006C5E
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #7
    // bne _02006C6A
    // add r0, r4, #0
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, [sp, #4]
    // bl GF_GetSoundHandle
    // ldr r3, [sp, #8]
    // add r1, r5, #0
    // add r2, r7, #0
    // str r6, [sp]
    // bl NNS_SndArcPlayerStartSeqEx
    // add r4, r0, #0
    // bl GBSounds_SetAllocatableChannels
    // add r0, r4, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02006C88: .word 0x000002BD
    // TODO: decompile
}


