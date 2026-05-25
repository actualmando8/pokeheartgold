/* Decompiled from asm/unk_02004A44.s */
#include "global.h"

void GF_SND_BGM_DisableSet(void) {
}




void GF_SND_BGM_DisableCheck(void) {
}




void sub_02004A60(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0xa
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // ldr r0, _02004A8C ; =SEQ_GS_P_START
    // cmp r5, r0
    // bls _02004A82
    // add r0, r5, #0
    // bl sub_02004AB8
    // add r0, r5, #0
    // bl GBSounds_GetDSSeqNoByGBSeqNo
    // strh r0, [r4]
    // b _02004A84
    // strh r5, [r4]
    // mov r0, #0
    // bl GF_SetCurrentPlayingBGM
    // pop {r3, r4, r5, pc}
    // _02004A8C: .word SEQ_GS_P_START
    // TODO: decompile
}




void GF_GetCurrentPlayingBGM(void) {
}




void GF_SetCurrentPlayingBGM(void) {
}




void sub_02004AAC(void) {
}




void sub_02004AB8(void) {
}




void Sound_SetFieldBGM(void) {
}




void Sound_SetScene(void) {
    GF_SdatGetAttrPtr(0x15);
    GF_SdatGetAttrPtr(0x16);
    // strb r5, [r4]
    // strb r1, [r0]
    // strb r5, [r0]
}




void sub_02004AFC(void) {
}




void sub_02004B10(void) {
}




void sub_02004B24(void) {
    // push {r4, lr}
    // cmp r0, #0x4b
    // bls _02004B2C
    // b _02004E42
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02004B38: ; jump table
    // mov r0, #GROUP_SE_FIELD
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_FIELD
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // ldr r0, _02004E4C ; =SEQ_SE_PL_BALLOON02
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E50 ; =SEQ_SE_PL_BALLOON03_2
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E54 ; =SEQ_SE_PL_BALLOON05
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E58 ; =SEQ_SE_PL_BALLOON01
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E5C ; =SEQ_SE_PL_BALLOON07
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E60 ; =SEQ_SE_PL_ALERT4
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E64 ; =SEQ_SE_DP_FW104
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E68 ; =SEQ_SE_PL_NOMI02
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E6C ; =SEQ_SE_DP_023
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E70 ; =SEQ_SE_PL_POINT1
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E74 ; =SEQ_SE_PL_POINT2
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E78 ; =SEQ_SE_PL_POINT3
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E7C ; =SEQ_SE_PL_BALLOON05_2
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E80 ; =SEQ_SE_DP_HAMARU
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E84 ; =SEQ_SE_DP_CON_016
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E88 ; =SEQ_SE_PL_KIRAKIRA
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // ldr r0, _02004E8C ; =SEQ_SE_PL_FCALL
    // mov r1, #1
    // bl GF_Snd_LoadSeqEx
    // b _02004E48
    // mov r0, #GROUP_SE_NUTMIXER
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_BATTLE
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #WAVE_ARC_SE_HIROBA>>8
    // lsl r0, r0, #8
    // bl GF_Snd_LoadBank
    // mov r0, #3
    // lsl r0, r0, #8
    // bl GF_Snd_LoadWaveArc
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_TRADE
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_FIELD
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_BATTLE
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_FIELD
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_CONTEST
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_FIELD
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_NUTMIXER
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_FIELD
    // bl GF_Snd_LoadGroup
    // mov r0, #GROUP_SE_DIG
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_FIELD
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // ldr r0, _02004E90 ; =BANK_SE_THLON
    // bl GF_Snd_LoadBank
    // ldr r0, _02004E90 ; =WAVE_ARC_SE_THLON
    // bl GF_Snd_LoadWaveArc
    // add r4, r0, #0
    // b _02004E48
    // ldr r0, _02004E94 ; =BANK_SE_THLON_OPED
    // bl GF_Snd_LoadBank
    // ldr r0, _02004E94 ; =WAVE_ARC_SE_THLON_OPED
    // bl GF_Snd_LoadWaveArc
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_BAG
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_SLOT
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_NAMEIN
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_IMAGE
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_ZUKAN
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // ldr r0, _02004E98 ; =BANK_SE_TOWNMAP
    // bl GF_Snd_LoadBank
    // ldr r0, _02004E98 ; =WAVE_ARC_SE_TOWNMAP
    // bl GF_Snd_LoadWaveArc
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_TRCARD
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_POKELIST
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_DIG
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_CUSTOM
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_BAG
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_NAMEIN
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_CUSTOM
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #GROUP_SE_CLIMAX
    // bl GF_Snd_LoadGroup
    // add r4, r0, #0
    // b _02004E48
    // ldr r0, _02004E9C ; =BANK_SE_SCRATCH
    // bl GF_Snd_LoadBank
    // ldr r0, _02004E9C ; =WAVE_ARC_SE_SCRATCH
    // bl GF_Snd_LoadWaveArc
    // add r4, r0, #0
    // b _02004E48
    // ldr r0, _02004EA0 ; =BANK_SE_PLANTER
    // bl GF_Snd_LoadBank
    // ldr r0, _02004EA0 ; =WAVE_ARC_SE_PLANTER
    // bl GF_Snd_LoadWaveArc
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #BANK_SE_LINEAR>>2
    // lsl r0, r0, #2
    // bl GF_Snd_LoadBank
    // mov r0, #WAVE_ARC_SE_LINEAR>>2
    // lsl r0, r0, #2
    // bl GF_Snd_LoadWaveArc
    // add r4, r0, #0
    // b _02004E48
    // ldr r0, _02004EA4 ; =BANK_SE_COIN
    // bl GF_Snd_LoadBank
    // ldr r0, _02004EA4 ; =WAVE_ARC_SE_COIN
    // bl GF_Snd_LoadWaveArc
    // add r4, r0, #0
    // b _02004E48
    // ldr r0, _02004EA8 ; =BANK_SE_DENDO
    // bl GF_Snd_LoadBank
    // ldr r0, _02004EA8 ; =WAVE_ARC_SE_DENDO
    // bl GF_Snd_LoadWaveArc
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #BANK_SE_JUICE>>2
    // lsl r0, r0, #2
    // bl GF_Snd_LoadBank
    // mov r0, #WAVE_ARC_SE_JUICE>>2
    // lsl r0, r0, #2
    // bl GF_Snd_LoadWaveArc
    // add r4, r0, #0
    // b _02004E48
    // mov r0, #BANK_SE_PHC>>2
    // lsl r0, r0, #2
    // bl GF_Snd_LoadBank
    // mov r0, #WAVE_ARC_SE_PHC>>2
    // lsl r0, r0, #2
    // bl GF_Snd_LoadWaveArc
    // add r4, r0, #0
    // b _02004E48
    // ldr r0, _02004EAC ; =BANK_SE_SEKIBAN
    // bl GF_Snd_LoadBank
    // ldr r0, _02004EAC ; =WAVE_ARC_SE_SEKIBAN
    // bl GF_Snd_LoadWaveArc
    // add r4, r0, #0
    // b _02004E48
    // ldr r0, _02004EB0 ; =BANK_SE_EVENT
    // bl GF_Snd_LoadBank
    // ldr r0, _02004EB0 ; =WAVE_ARC_SE_EVENT
    // bl GF_Snd_LoadWaveArc
    // add r4, r0, #0
    // b _02004E48
    // bl GF_AssertFail
    // mov r4, #0
    // add r0, r4, #0
    // pop {r4, pc}
    // _02004E4C: .word SEQ_SE_PL_BALLOON02
    // _02004E50: .word SEQ_SE_PL_BALLOON03_2
    // _02004E54: .word SEQ_SE_PL_BALLOON05
    // _02004E58: .word SEQ_SE_PL_BALLOON01
    // _02004E5C: .word SEQ_SE_PL_BALLOON07
    // _02004E60: .word SEQ_SE_PL_ALERT4
    // _02004E64: .word SEQ_SE_DP_FW104
    // _02004E68: .word SEQ_SE_PL_NOMI02
    // _02004E6C: .word SEQ_SE_DP_023
    // _02004E70: .word SEQ_SE_PL_POINT1
    // _02004E74: .word SEQ_SE_PL_POINT2
    // _02004E78: .word SEQ_SE_PL_POINT3
    // _02004E7C: .word SEQ_SE_PL_BALLOON05_2
    // _02004E80: .word SEQ_SE_DP_HAMARU
    // _02004E84: .word SEQ_SE_DP_CON_016
    // _02004E88: .word SEQ_SE_PL_KIRAKIRA
    // _02004E8C: .word SEQ_SE_PL_FCALL
    // _02004E90: .word BANK_SE_THLON
    // _02004E94: .word BANK_SE_THLON_OPED
    // _02004E98: .word BANK_SE_TOWNMAP
    // _02004E9C: .word BANK_SE_SCRATCH
    // _02004EA0: .word BANK_SE_PLANTER
    // _02004EA4: .word BANK_SE_COIN
    // _02004EA8: .word BANK_SE_DENDO
    // _02004EAC: .word BANK_SE_SEKIBAN
    // _02004EB0: .word BANK_SE_EVENT
    // TODO: decompile
}




void sub_02004EB4(void) {
    // ldr r3, _02004EC0 ; =Sound_SetSceneAndPlayBGM
    // add r1, r0, #0
    // mov r0, #4
    // mov r2, #1
    // bx r3
    // nop
    // _02004EC0: .word Sound_SetSceneAndPlayBGM
    // TODO: decompile
}




void Sound_SetSceneAndPlayBGM(void) {
    GF_SdatGetAttrPtr(0x15);
    // str r0, [sp]
    GF_SdatGetAttrPtr(0x16);
    // str r0, [sp, #4]
    GF_SdatGetAttrPtr(0xe);
    // ldr r0, [sp]
    // ldrb r0, [r0]
    // ldr r0, [sp, #4]
    // ldrb r0, [r0]
    Sound_SetScene(r4);
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02004F1E: ; jump table
    sub_02005AF8(0);
    sub_0200508C(r5, r6);
    // strh r0, [r7]
    sub_02005228(r5, r6);
    sub_02005260(r5, r6);
    sub_02005280(r5, r6);
    sub_020052A4(r5, r6);
    sub_020052C8(r4);
    sub_020052C8(r4);
    PlayBGM(r5);
    sub_02005AF8(1);
    sub_020052E4(r4, r5, r6);
    sub_02005AF8(2);
    sub_020052E4(r4, r5, r6);
    sub_02005AF8(0);
    sub_020052E4(r4, r5, r6);
    sub_020052E4(r4, r5, r6);
    sub_020052E4(r4, r5, r6);
}




void sub_02005060(void) {
}




void sub_0200508C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0xc
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // mov r0, #0x18
    // bl GF_SdatGetAttrPtr
    // mov r0, #0x20
    // bl GF_SdatGetAttrPtr
    // mov r0, #0
    // bl GF_GetSoundHandle
    // bl GF_NNS_SndPlayerGetSeqNo
    // add r7, r0, #0
    // lsl r0, r7, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, _02005144 ; =SEQ_GS_P_START
    // cmp r7, r0
    // ble _020050C2
    // add r0, r4, #0
    // bl GBSounds_GetDSSeqNoByGBSeqNo
    // add r4, r0, #0
    // ldrb r0, [r6]
    // cmp r0, #0
    // bne _020050D6
    // cmp r4, r5
    // bne _020050D6
    // bl sub_02004AAC
    // ldr r1, _02005148 ; =SEQ_GS_BICYCLE
    // cmp r0, r1
    // bne _02005142
    // mov r0, #1
    // bl sub_020059E0
    // ldr r0, _0200514C ; =_021D05E8
    // ldr r1, [r0, #0xc]
    // cmp r1, #0
    // beq _020050EA
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // bne _020050F4
    // bl sub_02005FD8
    // ldr r0, _0200514C ; =_021D05E8
    // mov r1, #1
    // str r1, [r0, #4]
    // cmp r4, r5
    // beq _02005104
    // mov r0, #1
    // mov r1, #0
    // bl sub_020053A8
    // bl Sound_Stop
    // ldrb r0, [r6]
    // cmp r0, #1
    // bne _0200513C
    // mov r0, #2
    // bl sub_02005328
    // bl GF_Snd_LoadState
    // mov r0, #4
    // bl sub_02004B24
    // mov r0, #0x1a
    // bl GF_SdatGetAttrPtr
    // bl GF_Snd_SaveState
    // cmp r4, r5
    // beq _02005130
    // mov r0, #1
    // mov r1, #0
    // bl sub_020053A8
    // lsl r1, r7, #0x10
    // add r0, r5, #0
    // lsr r1, r1, #0x10
    // bl sub_02005150
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl PlayBGM
    // pop {r3, r4, r5, r6, r7, pc}
    // _02005144: .word SEQ_GS_P_START
    // _02005148: .word SEQ_GS_BICYCLE
    // _0200514C: .word _021D05E8
    // TODO: decompile
}




void sub_02005150(void) {
    GF_SdatGetAttrPtr(0x20);
    // ldrh r0, [r4]
    GF_GetBankBySeqNo();
    GF_Snd_LoadSeqEx(r5, 4);
    GF_AssertFail();
    // ldrh r0, [r4]
    GF_Snd_LoadSeqEx(6);
    GF_SdatGetAttrPtr(0x1b);
    GF_Snd_SaveState();
    sub_020053A8(1, 0);
    GF_SndStartFadeInBGM(0x7f, 0x28, 0);
    sub_020059E0(0);
}




void sub_020051A4(void) {
    GF_SdatGetAttrPtr(0x13);
    GF_SdatGetAttrPtr(0x20);
    // ldrb r0, [r6]
    sub_02005328(1);
    GF_Snd_LoadState();
    sub_02004AFC(0);
    // ldrh r0, [r4]
    GF_Snd_LoadSeqEx(2);
    GF_SdatGetAttrPtr(0x19);
    GF_Snd_SaveState();
    sub_02004B24(4);
    GF_SdatGetAttrPtr(0x1a);
    GF_Snd_SaveState();
    // ldrh r0, [r4]
    GF_GetBankBySeqNo();
    GF_Snd_LoadSeqEx(r7, 4);
    GF_AssertFail();
    // ldrh r0, [r4]
    GF_Snd_LoadSeqEx(4);
    GF_SdatGetAttrPtr(0x1b);
    GF_Snd_SaveState();
}




void sub_02005228(void) {
}




void sub_02005260(void) {
}




void sub_02005280(void) {
}




void sub_020052A4(void) {
}




void sub_020052C8(void) {
}




void sub_020052E4(void) {
}




void BGM_SaveStateAndPlayNew(void) {
}




void sub_02005318(void) {
}




void sub_02005328(void) {
    GetSoundDataPointer();
    GF_AssertFail();
    GF_SdatGetAttrPtr(0x1b);
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02005352: ; jump table
    GF_SdatGetAttrPtr(0x17);
    GF_SdatGetAttrPtr(0x18);
    GF_SdatGetAttrPtr(0x19);
    GF_SdatGetAttrPtr(0x1a);
    GF_SdatGetAttrPtr(0x1b);
    GF_SdatGetAttrPtr(0x1c);
    GF_SdatGetAttrPtr(0x1d);
}




void sub_020053A8(void) {
    GF_SdatGetAttrPtr(0xc);
    GF_SdatGetAttrPtr(0xd);
    GF_GetSoundHandle(7);
    GF_NNS_SndPlayerGetSeqNo();
    sub_02004A60(((r0 << 0x10) >> 0x10));
    GF_GetSoundHandle(r4);
    NNS_SndPlayerPause(r5);
    // strb r5, [r6]
}




void Sound_ClearBGMPauseFlags(void) {
}




void GF_SndHandleMoveVolume(void) {
    GF_GetSoundHandle();
    NNS_SndPlayerMoveVolume(r5, r4);
    GF_SndWorkSetGbSoundsVolume(((r5 << 0x18) >> 0x18));
}




void GF_SndHandleSetInitialVolume(void) {
    // bpl _02005434
    GF_GetSoundHandle();
    NNS_SndPlayerSetInitialVolume(r4);
}




void sub_02005448(void) {
    GF_GetPlayerNoBySeq(((r0 << 0x10) >> 0x10));
    GF_GetSndHandleByPlayerNo();
    sub_02005464(r4, r0);
}




void sub_02005464(void) {
    NNS_SndArcGetSeqParam();
    sub_020378CC();
    _s32_div_f(r4, 5);
    GF_SndHandleSetInitialVolume(r5, r0);
}




void GF_GetVolumeBySeqNo(void) {
}




void GF_SetVolumeBySeqNo(void) {
}




void GF_SndPlayerCountPlayingSeqByPlayerNo(void) {
    // bpl _020054CA
    GF_AssertFail();
    NNS_SndPlayerCountPlayingSeqByPlayerNo(r4);
}




void GF_GetPlayerNoBySeq(void) {
}




void GF_NNS_SndPlayerGetSeqNo(void) {
}




void GF_GetBankInfoBySeqNo(void) {
}




void GF_GetBankBySeqNo(void) {
}




void sub_02005518(void) {
}




void GF_MIC_StartAutoSampling(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl MIC_StartAutoSampling
    // add r3, r0, #0
    // ldr r0, _02005548 ; =_021D05E8
    // mov r1, #1
    // strb r1, [r0]
    // ldr r2, _0200554C ; =_021D05F8
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r4]
    // str r0, [r2]
    // add r0, r3, #0
    // pop {r4, pc}
    // nop
    // _02005548: .word _021D05E8
    // _0200554C: .word _021D05F8
    // TODO: decompile
}




void GF_MIC_StopAutoSampling(void) {
    // push {r3, lr}
    // bl GetSoundDataPointer
    // ldr r0, _02005564 ; =_021D05E8
    // mov r1, #0
    // strb r1, [r0]
    // bl MIC_StopAutoSampling
    // pop {r3, pc}
    // nop
    // _02005564: .word _021D05E8
    // TODO: decompile
}




void GF_MicPauseOnLidClose(void) {
    // push {r3, lr}
    // ldr r0, _02005580 ; =_021D05E8
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0200557E
    // bl MIC_StopAutoSampling
    // cmp r0, #0
    // beq _0200557E
    // bl GF_AssertFail
    // pop {r3, pc}
    // _02005580: .word _021D05E8
    // TODO: decompile
}




void GF_MicResumeOnLidOpen(void) {
    // push {r3, lr}
    // ldr r0, _020055A4 ; =_021D05E8
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0200559C
    // ldr r0, _020055A8 ; =_021D05F8
    // bl MIC_StartAutoSampling
    // cmp r0, #0
    // beq _0200559C
    // bl GF_AssertFail
    // bl GF_SndWorkMicCounterReset
    // pop {r3, pc}
    // nop
    // _020055A4: .word _021D05E8
    // _020055A8: .word _021D05F8
    // TODO: decompile
}




void sub_020055AC(void) {
    GetSoundDataPointer();
    GF_SdatGetAttrPtr(0x10);
    GF_SdatGetAttrPtr(0x11);
    GF_AssertFail();
    // ldrb r0, [r6]
    GF_AssertFail();
    // ldrb r0, [r4]
    GF_AssertFail();
    GF_SdatGetAttrPtr(0);
    GF_SdatGetAttrPtr(1);
}




void sub_02005600(void) {
    GetSoundDataPointer();
    GF_SdatGetAttrPtr(0x10);
    GF_SdatGetAttrPtr(0x11);
    GF_AssertFail();
    // ldrb r0, [r6]
    GF_SdatGetAttrPtr(0);
    NNS_SndWaveOutAllocChannel(r5);
    // str r0, [r4]
    // strb r0, [r6]
    GF_AssertFail(1);
    // ldrb r0, [r4]
    GF_SdatGetAttrPtr(1);
    NNS_SndWaveOutAllocChannel(r5);
    // str r0, [r6]
    // strb r0, [r4]
    GF_AssertFail(1);
}




void sub_02005680(void) {
    GetSoundDataPointer();
    GF_SdatGetAttrPtr(0x10);
    GF_SdatGetAttrPtr(0x11);
    GF_AssertFail();
    // ldrb r0, [r6]
    sub_020055AC(r5);
    NNS_SndWaveOutFreeChannel(*((u32*)r0));
    // strb r0, [r6]
    GF_AssertFail(0);
    // ldrb r0, [r4]
    sub_020055AC(r5);
    NNS_SndWaveOutFreeChannel(*((u32*)r0));
    // strb r0, [r4]
    GF_AssertFail(0);
}




void sub_020056E8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    NNS_SndWaveOutStart(*((u32*)*((u32*)r0)), *((u32*)(r0 + 4)), *((u32*)(r0 + 8)), *((u32*)(r0 + 0xc)));
    sub_02005680(r4);
}




void sub_02005728(void) {
}




void sub_02005738(void) {
}




void sub_02005748(void) {
    sub_020055AC();
    NNS_SndWaveOutSetPan(*((u32*)r0), r4);
}




void sub_02005760(void) {
}




void sub_02005774(void) {
    sub_020378CC();
    sub_020055AC(r4);
    _s32_div_f(r5, 5);
    NNS_SndWaveOutSetVolume(*((u32*)r4), r0);
    sub_020055AC(r4);
    NNS_SndWaveOutSetVolume(*((u32*)r0), r5);
}




void sub_020057AC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r6, r0, #0
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r5, r3, #0
    // bl GetSoundDataPointer
    // mov r0, #0x22
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // cmp r5, #0xe
    // beq _020057D0
    // cmp r5, #0xf
    // beq _020057D0
    // bl GF_AssertFail
    // add r0, r6, #0
    // bl NNS_SndArcGetWaveArcInfo
    // add r7, r0, #0
    // bne _020057E4
    // bl GF_AssertFail
    // add sp, #0x30
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r7]
    // lsl r0, r0, #8
    // lsr r0, r0, #8
    // bl NNS_SndArcGetFileSize
    // add r6, r0, #0
    // bne _020057FC
    // bl GF_AssertFail
    // add sp, #0x30
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r5, #0xe
    // bne _0200584A
    // ldr r0, [sp, #0x48]
    // add r1, r6, #0
    // bl Heap_Alloc
    // str r0, [r4]
    // cmp r0, #0
    // bne _02005818
    // bl GF_AssertFail
    // add sp, #0x30
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // add r2, r6, #0
    // bl memset
    // ldr r0, [r7]
    // ldr r1, [r4]
    // lsl r0, r0, #8
    // lsr r0, r0, #8
    // add r2, r6, #0
    // mov r3, #0
    // bl NNS_SndArcReadFile
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _02005842
    // bl GF_AssertFail
    // add sp, #0x30
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4]
    // add r1, r6, #0
    // bl sub_02005898
    // add r0, r5, #0
    // bl sub_020055AC
    // mov r1, #0
    // str r1, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // str r0, [sp, #0x10]
    // ldr r0, _02005894 ; =0x00003443
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x20]
    // ldr r0, [sp]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x24]
    // mov r0, #6
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #4]
    // add r1, r5, #0
    // str r0, [sp, #0x2c]
    // add r0, sp, #8
    // str r6, [sp, #0x1c]
    // bl sub_020056E8
    // add r4, r0, #0
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl sub_02005774
    // mov r0, #0xf
    // bl GF_SdatGetAttrPtr
    // mov r1, #1
    // strb r1, [r0]
    // add r0, r4, #0
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _02005894: .word 0x00003443
    // TODO: decompile
}




void sub_02005898(void) {
    // sub r3, r2, r5
    // ldrb r4, [r0, r5]
    // ldrb r1, [r0, r3]
    // strb r1, [r0, r5]
    // strb r4, [r0, r3]
}




void sub_020058B8(void) {
    GetSoundDataPointer();
    GF_SdatGetAttrPtr(0xf);
    GF_SdatGetAttrPtr(0x22);
    GF_AssertFail();
    sub_02005728(r5);
    // ldrb r0, [r4]
    // strb r0, [r4]
    Heap_Free(*((u32*)r6));
}




void sub_020058F4(void) {
    NNS_SndCaptureIsActive();
    sub_02005908();
}




void sub_02005908(void) {
}




void sub_02005910(void) {
}




void GF_SndHandleSetTrackPitch(void) {
}




void sub_0200592C(void) {
}




void sub_02005944(void) {
}




void GF_SndHandleSetTrackPan(void) {
}




void GF_SndHandleSetTempoRatio(void) {
}




void GF_SndSetMonoFlag(void) {
}




void sub_02005990(void) {
}




void sub_020059A0(void) {
}




void GF_SndGetAfterFadeDelayTimer(void) {
}




void Sound_SetMasterVolume(void) {
}




void sub_020059D8(void) {
    // ldr r0, _020059DC ; =_021D0620
    // bx lr
    // _020059DC: .word _021D0620
    // TODO: decompile
}




void sub_020059E0(void) {
}




void GF_NowStartMusicId(void) {
}




void sub_02005A10(void) {
    // str r3, [sp, #8]
    GF_SdatGetAttrPtr(0x16);
    // add r0, sp, #0x10
    // ldr r3, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #4]
    sub_02005AB0(r5, r6, r7);
    // strb r0, [r4]
    GF_SndSetState(5);
}




void GF_FadeStartMusicId(void) {
    // str r3, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
    sub_02005A74(4, r0, r1, r2);
}




void sub_02005A74(void) {
    // str r3, [sp, #8]
    GF_SdatGetAttrPtr(9);
    // add r0, sp, #0x10
    // ldr r3, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    sub_02005AB0(r5, r6, r7);
    // ldr r0, [sp, #0x20]
    // str r0, [r4]
    GF_SndSetState(6);
}




void sub_02005AB0(void) {
}




void GF_SndSetAllocatableChannelForBGMPlayer(void) {
}




void sub_02005AF8(void) {
    // push {r3, lr}
    // cmp r0, #0
    // bne _02005B0C
    // ldr r0, _02005B18 ; =0x0000A7FE
    // bl GF_SndSetAllocatableChannelForBGMPlayer
    // mov r0, #0
    // bl sub_02005910
    // b _02005B12
    // ldr r0, _02005B1C ; =0x00003FFF
    // bl GF_SndSetAllocatableChannelForBGMPlayer
    // bl sub_020058F4
    // pop {r3, pc}
    // _02005B18: .word 0x0000A7FE
    // _02005B1C: .word 0x00003FFF
    // TODO: decompile
}




void sub_02005B20(void) {
    GF_SndGetFadeTimer();
    GF_GetSoundHandle(0);
    GF_NNS_SndPlayerGetSeqNo();
    // mvn r1, r1
    sub_02005FD8(0);
    sub_020053A8(1, 1);
    Sound_Stop();
}




void GF_SndHandleSetPlayerVolume(void) {
}




void sub_02005B58(void) {
}




void sub_02005B68(void) {
}




void sub_02005B78(void) {
    GF_AssertFail();
    GF_AssertFail();
    GF_GetPlayerNoBySeq(r5);
    GF_GetSndHandleByPlayerNo();
    GF_GetSoundHandle();
    NNS_SndPlayerReadVariable(r4, r6);
}




void sub_02005BA8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x37
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // ldrb r1, [r4]
    // add r0, r5, #0
    // lsl r2, r1, #2
    // ldr r1, _02005BE0 ; =_020F5710 + 1
    // ldrb r1, [r1, r2]
    // bl GF_SetVolumeBySeqNo
    // ldrb r2, [r4]
    // ldr r1, _02005BE4 ; =0x0000FFFF
    // mov r0, #4
    // lsl r3, r2, #2
    // ldr r2, _02005BE8 ; =_020F5710
    // ldrb r2, [r2, r3]
    // bl GF_SndHandleSetTrackPitch
    // ldrb r0, [r4, #1]
    // cmp r0, #8
    // blo _02005BDC
    // mov r0, #0
    // strb r0, [r4, #1]
    // pop {r3, r4, r5, pc}
    // nop
    // _02005BE0: .word _020F5710 + 1
    // _02005BE4: .word 0x0000FFFF
    // _02005BE8: .word _020F5710
    // TODO: decompile
}




void sub_02005BEC(void) {
}




void sub_02005BFC(void) {
}




void sub_02005C08(void) {
}




void SoundSys_GetGBSoundsState(void) {
}




void SoundSys_ToggleGBSounds(void) {
    SoundSys_GetGBSoundsState();
    sub_02005C08(1);
    sub_02005C08(0);
    sub_02004AAC();
    GF_GetCurrentPlayingBGM();
    GF_SndWorkGetGbSoundsVolume();
    GBSounds_GetGBSeqNoByDSSeqNo(r4);
    PlayBGM(r4);
    GF_SndHandleMoveVolume(0, r5, 0);
}




void GBSounds_GetGBSeqNoByDSSeqNo(void) {
    // push {r3, r4}
    // ldr r2, _02005C90 ; =_020F5730
    // mov r4, #0
    // lsl r3, r4, #2
    // ldrh r1, [r2, r3]
    // cmp r0, r1
    // bne _02005C82
    // ldr r0, _02005C94 ; =_020F5730 + 2
    // ldrh r0, [r0, r3]
    // pop {r3, r4}
    // bx lr
    // add r1, r4, #1
    // lsl r1, r1, #0x10
    // lsr r4, r1, #0x10
    // cmp r4, #0x88
    // blo _02005C72
    // pop {r3, r4}
    // bx lr
    // _02005C90: .word _020F5730
    // _02005C94: .word _020F5730 + 2
    // TODO: decompile
}




void GBSounds_GetDSSeqNoByGBSeqNo(void) {
    // push {r3, r4}
    // ldr r2, _02005CBC ; =_020F5730
    // mov r4, #0
    // lsl r3, r4, #2
    // add r1, r2, r3
    // ldrh r1, [r1, #2]
    // cmp r0, r1
    // bne _02005CAE
    // ldrh r0, [r2, r3]
    // pop {r3, r4}
    // bx lr
    // add r1, r4, #1
    // lsl r1, r1, #0x10
    // lsr r4, r1, #0x10
    // cmp r4, #0x88
    // blo _02005C9E
    // pop {r3, r4}
    // bx lr
    // _02005CBC: .word _020F5730
    // TODO: decompile
}




void GBSounds_SetAllocatableChannels(void) {
    // push {r3, lr}
    // mov r0, #0 ; HANDLE_FIELD
    // bl GF_GetSoundHandle
    // ldr r2, _02005CF0 ; =0x0000A7FE
    // mov r1, #0xf
    // bl NNS_SndPlayerSetTrackAllocatableChannel
    // mov r0, #7 ; HANDLE_BGM
    // bl GF_GetSoundHandle
    // ldr r2, _02005CF0 ; =0x0000A7FE
    // mov r1, #0xf
    // bl NNS_SndPlayerSetTrackAllocatableChannel
    // mov r0, #2 ; HANDLE_ME
    // bl GF_GetSoundHandle
    // ldr r2, _02005CF0 ; =0x0000A7FE
    // mov r1, #0xf
    // bl NNS_SndPlayerSetTrackAllocatableChannel
    // pop {r3, pc}
    // nop
    // _02005CF0: .word 0x0000A7FE
    // TODO: decompile
}




void sub_02005CF4(void) {
    // ldr r1, _02005CFC ; =_021D05E8
    // str r0, [r1, #0xc]
    // bx lr
    // nop
    // _02005CFC: .word _021D05E8
    // TODO: decompile
}




void sub_02005D00(void) {
    // ldr r0, _02005D0C ; =_021D05E8
    // mov r1, #0
    // str r1, [r0, #0xc]
    // str r1, [r0, #4]
    // bx lr
    // nop
    // _02005D0C: .word _021D05E8
    // TODO: decompile
}



