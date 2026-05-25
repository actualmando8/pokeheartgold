/* Decompiled from asm/unk_02005D10.s */
#include "global.h"

void sub_02005D10(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // bl GF_GetPlayerNoBySeq
    // bl GF_GetSndHandleByPlayerNo
    // str r5, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // sub r1, r1, #2
    // add r2, r1, #0
    // add r3, r1, #0
    // add r4, r0, #0
    // bl sub_02006C14
    // add r6, r0, #0
    // bne _02005D3A
    // add r0, r5, #0
    // bl sub_02004920
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02005DA0
    // add r0, r6, #0
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void PlayBGM(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // bl GF_GetPlayerNoBySeq
    // add r5, r0, #0
    // bl GF_GetSndHandleByPlayerNo
    // add r6, r0, #0
    // cmp r5, #7
    // bne _02005D6A
    // add r0, r4, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // bl sub_02005DC4
    // add r5, r0, #0
    // b _02005D84
    // cmp r5, #1
    // bne _02005D7C
    // add r0, r4, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // bl sub_02005DF4
    // add r5, r0, #0
    // b _02005D84
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // bl sub_020059E0
    // cmp r5, #0
    // bne _02005D94
    // add r0, r4, #0
    // bl sub_02004920
    // add r0, r4, #0
    // add r1, r6, #0
    // bl sub_02005DA0
    // add r0, r5, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02005DA0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02004A60
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02005464
    // mov r0, #1
    // bl GF_SndSetState
    // cmp r4, #0
    // bne _02005DC2
    // mov r0, #0x80
    // bl GF_SndWorkSetGbSoundsVolume
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02005DC4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #3
    // add r4, r2, #0
    // bl sub_02005328
    // bl GF_Snd_LoadState
    // add r0, r5, #0
    // bl GF_Snd_LoadSeq
    // str r5, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // sub r1, r1, #2
    // add r0, r4, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl sub_02006C14
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02005DF4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0x13
    // add r6, r2, #0
    // bl GF_SdatGetAttrPtr
    // mov r0, #0x20
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // mov r0, #0
    // bl GF_GetSoundHandle
    // bl GF_NNS_SndPlayerGetSeqNo
    // bl GF_GetBankBySeqNo
    // add r1, r0, #0
    // add r0, r5, #0
    // bl sub_020051A4
    // mov r0, #0
    // bl SndRadio_StopSeq
    // ldrh r0, [r4]
    // bl GF_GetBankBySeqNo
    // add r2, r0, #0
    // str r5, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // sub r1, r1, #2
    // add r0, r6, #0
    // add r3, r1, #0
    // bl sub_02006C14
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02005E44(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #0x15
    // bl GF_SdatGetAttrPtr
    // ldrb r0, [r0]
    // cmp r0, #4
    // beq _02005E60
    // bl GF_AssertFail
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl GF_GetPlayerNoBySeq
    // cmp r0, #7
    // beq _02005E74
    // bl GF_AssertFail
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // str r4, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #7
    // add r1, r0, #0
    // sub r1, #8
    // add r2, r1, #0
    // add r3, r1, #0
    // bl sub_02006C14
    // add r5, r0, #0
    // bne _02005E9A
    // add r0, r4, #0
    // bl sub_02004920
    // mov r0, #0
    // bl SndRadio_StopSeq
    // add r0, r4, #0
    // bl sub_02004A60
    // mov r0, #1
    // bl GF_SndSetState
    // add r0, r5, #0
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void StopBGM(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl NNS_SndPlayerStopSeqBySeqNo
    // add r0, r5, #0
    // bl GBSounds_GetGBSeqNoByDSSeqNo
    // cmp r5, r0
    // beq _02005ECE
    // add r1, r4, #0
    // bl NNS_SndPlayerStopSeqBySeqNo
    // add r0, r5, #0
    // bl GF_GetPlayerNoBySeq
    // cmp r0, #0xff
    // beq _02005EE4
    // bl GF_GetSndHandleByPlayerNo
    // bl GF_GetSoundHandle
    // bl NNS_SndHandleReleaseSeq
    // bl sub_02005EEC
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02005EEC(void) {
    SndRadio_StopSeq(0);
    sub_02004A60(0);
    GF_SetCurrentPlayingBGM(0);
    sub_02004AB8(0);
    GF_SndSetState(0);
}


void GF_SndStartFadeInBGM(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // bl GF_GetCurrentPlayingBGM
    // bl GF_GetPlayerNoBySeq
    // cmp r0, #0xff
    // beq _02005F4C
    // bl GF_GetSndHandleByPlayerNo
    // add r7, r0, #0
    // cmp r4, #0
    // bne _02005F36
    // mov r1, #0
    // add r2, r1, #0
    // bl GF_SndHandleMoveVolume
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // bl GF_SndHandleMoveVolume
    // add r0, r5, #0
    // bl sub_02005990
    // mov r0, #3
    // bl GF_SndSetState
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void GF_SndStartFadeOutBGM(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl GF_GetCurrentPlayingBGM
    // bl GF_GetPlayerNoBySeq
    // add r6, r0, #0
    // cmp r6, #0xff
    // beq _02005F86
    // bl GF_SndGetFadeTimer
    // cmp r0, #0
    // bne _02005F80
    // add r0, r6, #0
    // bl GF_GetSndHandleByPlayerNo
    // add r1, r5, #0
    // add r2, r4, #0
    // bl GF_SndHandleMoveVolume
    // add r0, r4, #0
    // bl sub_02005990
    // mov r0, #4
    // bl GF_SndSetState
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void GF_SndGetFadeTimer(void) {
    GF_SdatGetAttrPtr();
}


void sub_02005F94(void) {
    GF_GetPlayerNoBySeq();
    GF_SndPlayerCountPlayingSeqByPlayerNo();
}


void Sound_Stop(void) {
    // push {r3, r4, r5, lr}
    // mov r0, #0x10
    // bl GF_SdatGetAttrPtr
    // add r5, r0, #0
    // mov r0, #0x11
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // mov r0, #0
    // bl NNS_SndPlayerStopSeqAll
    // ldrb r0, [r5]
    // cmp r0, #1
    // bne _02005FC4
    // mov r0, #0xe
    // bl sub_02005728
    // ldrb r0, [r4]
    // cmp r0, #1
    // bne _02005FD0
    // mov r0, #0xf
    // bl sub_02005728
    // mov r0, #0
    // bl GF_SndSetState
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02005FD8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r0, #0x10
    // bl GF_SdatGetAttrPtr
    // add r7, r0, #0
    // mov r0, #0x11
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // mov r0, #7
    // bl GF_GetSoundHandle
    // mov r1, #0
    // bl NNS_SndPlayerStopSeq
    // bl sub_02005EEC
    // mov r5, #0
    // add r4, r5, #0
    // add r0, r5, #3
    // add r1, r4, #0
    // bl sub_0200615C
    // add r5, r5, #1
    // cmp r5, #4
    // blt _02005FFE
    // mov r0, #0
    // bl sub_02006300
    // ldrb r0, [r7]
    // cmp r0, #1
    // bne _0200601E
    // mov r0, #0xe
    // bl sub_02005728
    // ldrb r0, [r6]
    // cmp r0, #1
    // bne _0200602A
    // mov r0, #0xf
    // bl sub_02005728
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // bl GF_GetPlayerNoBySeq
    // bl GF_GetSndHandleByPlayerNo
    // mov r1, #0
    // mvn r1, r1
    // add r2, r1, #0
    // add r3, r1, #0
    // str r4, [sp]
    // bl sub_020060BC
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_0200606C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl GF_GetSndHandleByPlayerNo
    // mov r2, #0
    // mvn r2, r2
    // add r1, r4, #0
    // add r3, r2, #0
    // str r5, [sp]
    // bl sub_020060BC
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02006088(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // mov r0, #0x20
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // add r0, r5, #0
    // bl GF_GetPlayerNoBySeq
    // bl GF_GetSndHandleByPlayerNo
    // add r6, r0, #0
    // ldrh r0, [r4]
    // bl GF_GetBankBySeqNo
    // mov r1, #0
    // mvn r1, r1
    // add r2, r0, #0
    // add r0, r6, #0
    // add r3, r1, #0
    // str r5, [sp]
    // bl sub_020060BC
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
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
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl PlaySE
    // add r6, r0, #0
    // beq _0200612E
    // add r0, r5, #0
    // add r1, r4, #0
    // bl GF_SetVolumeBySeqNo
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
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
    NNS_SndPlayerStopSeqBySeqNo();
}


void sub_0200615C(void) {
    GF_GetSoundHandle();
    NNS_SndPlayerStopSeq(r4);
}


void sub_0200616C(void) {
    sub_0200615C(0);
}


void IsSEPlaying(void) {
    GF_GetPlayerNoBySeq();
    GF_SndPlayerCountPlayingSeqByPlayerNo();
}


void sub_02006190(void) {
    GF_SndPlayerCountPlayingSeqByPlayerNo();
}


void GF_IsAnySEPlaying(void) {
    GF_SndPlayerCountPlayingSeqByPlayerNo(0, 1, 0);
}


void sub_020061B4(void) {
    GF_GetPlayerNoBySeq();
    GF_GetSndHandleByPlayerNo();
    GF_GetSoundHandle();
    NNS_SndPlayerSetTrackPan(r5, r4);
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
    sub_02006920(0, 0xb, 1, 0x7f);
}


void sub_02006300(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r0, #0x10
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // mov r0, #0x11
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // mov r0, #0xf
    // bl GF_SdatGetAttrPtr
    // mov r0, #1
    // bl GF_GetSoundHandle
    // add r1, r5, #0
    // bl NNS_SndPlayerStopSeq
    // mov r0, #8
    // bl GF_GetSoundHandle
    // add r1, r5, #0
    // bl NNS_SndPlayerStopSeq
    // ldrb r0, [r6]
    // cmp r0, #1
    // bne _02006344
    // mov r0, #0xe
    // bl sub_020058B8
    // mov r0, #0xe
    // bl sub_02005680
    // ldrb r0, [r4]
    // cmp r0, #1
    // bne _02006356
    // mov r0, #0xf
    // bl sub_020058B8
    // mov r0, #0xf
    // bl sub_02005680
    // bl sub_02006DB8
    // bl sub_02006A30
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void IsCryFinished(void) {
    // push {r3, r4, r5, lr}
    // mov r0, #0x10
    // bl GF_SdatGetAttrPtr
    // add r5, r0, #0
    // mov r0, #0x11
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // mov r0, #0xf
    // bl GF_SdatGetAttrPtr
    // mov r0, #0x2e
    // bl GF_SdatGetAttrPtr
    // ldrb r0, [r5]
    // cmp r0, #1
    // bne _0200638C
    // mov r0, #0xe
    // bl sub_02005738
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4]
    // cmp r0, #1
    // bne _0200639A
    // mov r0, #0xf
    // bl sub_02005738
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // bl GF_SndPlayerCountPlayingSeqByPlayerNo
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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
    GF_SndHandleSetInitialVolume(r1, r2);
    sub_02005464(r5, r4);
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
    // push {r4, r5, r6, lr}
    // mov r0, #0x10
    // add r5, r1, #0
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // mov r0, #0x11
    // bl GF_SdatGetAttrPtr
    // ldr r2, [r5]
    // add r4, r0, #0
    // cmp r2, #0xa
    // bne _020068B0
    // mov r0, #1
    // mov r1, #0
    // bl GF_SndHandleMoveVolume
    // ldr r2, [r5]
    // mov r0, #8
    // mov r1, #0
    // bl GF_SndHandleMoveVolume
    // ldr r0, [r5]
    // sub r0, r0, #1
    // str r0, [r5]
    // bl IsCryFinished
    // cmp r0, #0
    // bne _020068C2
    // mov r0, #0
    // str r0, [r5]
    // ldr r0, [r5]
    // cmp r0, #0
    // bgt _020068F6
    // mov r0, #0
    // bl sub_02006300
    // ldrb r0, [r6]
    // cmp r0, #1
    // bne _020068E0
    // mov r0, #0xe
    // bl sub_020058B8
    // mov r0, #0xe
    // bl sub_02005680
    // ldrb r0, [r4]
    // cmp r0, #1
    // bne _020068F2
    // mov r0, #0xf
    // bl sub_020058B8
    // mov r0, #0xf
    // bl sub_02005680
    // bl sub_020068F8
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_020068F8(void) {
    // push {r3, r4, r5, lr}
    // mov r0, #0x23
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _0200691A
    // bl SysTask_GetData
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl SysTask_Destroy
    // add r0, r5, #0
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // mov r0, #0x29
    // bl GF_SdatGetAttrPtr
    // add r5, r0, #0
    // mov r0, #0x2d
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // mov r0, #0x2a
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // mov r0, #0x2b
    // bl GF_SdatGetAttrPtr
    // add r7, r0, #0
    // mov r0, #0x2c
    // bl GF_SdatGetAttrPtr
    // str r0, [sp]
    // mov r0, #0x2e
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #4]
    // mov r0, #0x2f
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #8]
    // mov r0, #0x33
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0xc]
    // mov r0, #0x30
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x10]
    // mov r0, #0x31
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x14]
    // mov r0, #0x32
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #0x18]
    // mov r0, #0x34
    // bl GF_SdatGetAttrPtr
    // mov r1, #0
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
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // mov r0, #0x12
    // add r4, r2, #0
    // add r6, r3, #0
    // bl GF_SdatGetAttrPtr
    // mov r1, #1
    // strb r1, [r0]
    // mov r0, #0xf
    // bl sub_02005600
    // ldr r0, [sp, #0x18]
    // add r1, r4, #0
    // str r0, [sp]
    // add r0, r5, #0
    // add r2, r6, #0
    // mov r3, #0xf
    // bl sub_020057AC
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void PlayFanfare(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r4, r0, #0
    // bl GF_GetBankInfoBySeqNo
    // add r0, r4, #0
    // bl sub_02006C04
    // bl GF_GetCurrentPlayingBGM
    // bl GF_GetPlayerNoBySeq
    // cmp r0, #0xff
    // beq _02006B48
    // mov r1, #1
    // bl sub_020053A8
    // b _02006B4E
    // mov r0, #1
    // bl SndRadio_PausePlayer
    // mov r0, #0x1d
    // bl GF_SdatGetAttrPtr
    // bl GF_Snd_SaveState
    // add r0, r4, #0
    // mov r1, #3
    // bl GF_Snd_LoadSeqEx
    // str r4, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #2
    // sub r1, r0, #3
    // add r2, r1, #0
    // add r3, r1, #0
    // bl sub_02006C14
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #2
    // bl sub_02005464
    // add r0, r5, #0
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02006B84(void) {
    // push {r4, lr}
    // mov r0, #0xe
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // mov r0, #2
    // bl GF_SndPlayerCountPlayingSeqByPlayerNo
    // cmp r0, #0
    // beq _02006B9C
    // mov r0, #1
    // pop {r4, pc}
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _02006BAA
    // sub r0, r0, #1
    // strh r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02006BB0(void) {
    GF_GetSoundHandle(2);
    NNS_SndPlayerStopSeq(r4);
    sub_02005328(6);
    GF_Snd_LoadState();
}


void IsFanfarePlaying(void) {
    // push {r3, lr}
    // mov r0, #0xe
    // bl GF_SdatGetAttrPtr
    // bl sub_02006B84
    // cmp r0, #1
    // bne _02006BE0
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // bl sub_02006BB0
    // bl GF_GetCurrentPlayingBGM
    // bl GF_GetPlayerNoBySeq
    // cmp r0, #0xff
    // beq _02006BF8
    // mov r1, #0
    // bl sub_020053A8
    // mov r0, #0
    // bl SndRadio_PausePlayer
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void sub_02006C04(void) {
    GF_SdatGetAttrPtr();
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

