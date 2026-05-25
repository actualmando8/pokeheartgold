/* Decompiled from asm/unk_02004A44.s */
#include "global.h"

void GF_SND_BGM_DisableSet(void) {
}





void GF_SND_BGM_DisableCheck(void) {
}





void sub_02004A60(void) {
    GF_SdatGetAttrPtr(0xa);
    sub_02004AB8(r5);
    GBSounds_GetDSSeqNoByGBSeqNo(r5);
    // strh r0, [r4]
    // strh r5, [r4]
    GF_SetCurrentPlayingBGM(0);
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
    // strb r5, [r4]
    // strb r1, [r0]
    // strb r5, [r0]
}





void sub_02004AFC(void) {
}





void sub_02004B10(void) {
}





void sub_02004B24(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02004B38: ; jump table
    // mov r0, #GROUP_SE_FIELD
    GF_Snd_LoadGroup((*((u16*)(r0 + 6)) << 0x10));
    // mov r0, #GROUP_SE_FIELD
    GF_Snd_LoadGroup();
    GF_Snd_LoadSeqEx(SEQ_SE_PL_BALLOON02, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_PL_BALLOON03_2, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_PL_BALLOON05, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_PL_BALLOON01, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_PL_BALLOON07, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_PL_ALERT4, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_DP_FW104, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_PL_NOMI02, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_DP_023, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_PL_POINT1, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_PL_POINT2, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_PL_POINT3, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_PL_BALLOON05_2, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_DP_HAMARU, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_DP_CON_016, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_PL_KIRAKIRA, 1);
    GF_Snd_LoadSeqEx(SEQ_SE_PL_FCALL, 1);
    // mov r0, #GROUP_SE_NUTMIXER
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_BATTLE
    GF_Snd_LoadGroup();
    // mov r0, #WAVE_ARC_SE_HIROBA>>8
    GF_Snd_LoadBank((r0 << 8));
    GF_Snd_LoadWaveArc((3 << 8));
    // mov r0, #GROUP_SE_TRADE
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_FIELD
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_BATTLE
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_FIELD
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_CONTEST
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_FIELD
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_NUTMIXER
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_FIELD
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_DIG
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_FIELD
    GF_Snd_LoadGroup();
    GF_Snd_LoadBank(BANK_SE_THLON);
    GF_Snd_LoadWaveArc(WAVE_ARC_SE_THLON);
    GF_Snd_LoadBank(BANK_SE_THLON_OPED);
    GF_Snd_LoadWaveArc(WAVE_ARC_SE_THLON_OPED);
    // mov r0, #GROUP_SE_BAG
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_SLOT
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_NAMEIN
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_IMAGE
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_ZUKAN
    GF_Snd_LoadGroup();
    GF_Snd_LoadBank(BANK_SE_TOWNMAP);
    GF_Snd_LoadWaveArc(WAVE_ARC_SE_TOWNMAP);
    // mov r0, #GROUP_SE_TRCARD
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_POKELIST
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_DIG
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_CUSTOM
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_BAG
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_NAMEIN
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_CUSTOM
    GF_Snd_LoadGroup();
    // mov r0, #GROUP_SE_CLIMAX
    GF_Snd_LoadGroup();
    GF_Snd_LoadBank(BANK_SE_SCRATCH);
    GF_Snd_LoadWaveArc(WAVE_ARC_SE_SCRATCH);
    GF_Snd_LoadBank(BANK_SE_PLANTER);
    GF_Snd_LoadWaveArc(WAVE_ARC_SE_PLANTER);
    // mov r0, #BANK_SE_LINEAR>>2
    GF_Snd_LoadBank((r0 << 2));
    // mov r0, #WAVE_ARC_SE_LINEAR>>2
    GF_Snd_LoadWaveArc((r0 << 2));
    GF_Snd_LoadBank(BANK_SE_COIN);
    GF_Snd_LoadWaveArc(WAVE_ARC_SE_COIN);
    GF_Snd_LoadBank(BANK_SE_DENDO);
    GF_Snd_LoadWaveArc(WAVE_ARC_SE_DENDO);
    // mov r0, #BANK_SE_JUICE>>2
    GF_Snd_LoadBank((r0 << 2));
    // mov r0, #WAVE_ARC_SE_JUICE>>2
    GF_Snd_LoadWaveArc((r0 << 2));
    // mov r0, #BANK_SE_PHC>>2
    GF_Snd_LoadBank((r0 << 2));
    // mov r0, #WAVE_ARC_SE_PHC>>2
    GF_Snd_LoadWaveArc((r0 << 2));
    GF_Snd_LoadBank(BANK_SE_SEKIBAN);
    GF_Snd_LoadWaveArc(WAVE_ARC_SE_SEKIBAN);
    GF_Snd_LoadBank(BANK_SE_EVENT);
    GF_Snd_LoadWaveArc(WAVE_ARC_SE_EVENT);
    GF_AssertFail();
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
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02004F1E: ; jump table
    // strh r0, [r7]
}





void sub_02005060(void) {
}





void sub_0200508C(void) {
    GF_SdatGetAttrPtr(0xc);
    GF_SdatGetAttrPtr(0x18);
    GF_SdatGetAttrPtr(0x20);
    GF_GetSoundHandle(0);
    GF_NNS_SndPlayerGetSeqNo();
    GBSounds_GetDSSeqNoByGBSeqNo(((r0 << 0x10) >> 0x10));
    sub_02004AAC(*((u8*)r6));
    sub_020059E0(1, SEQ_GS_BICYCLE);
    sub_02005FD8(*((u32*)(_021D05E8 + 4)), *((u32*)(_021D05E8 + 0xc)));
    *((u32*)(_021D05E8 + 4)) = 1;
    sub_020053A8(1, 0);
    Sound_Stop();
    sub_02005328(2);
    GF_Snd_LoadState();
    sub_02004B24(4);
    GF_SdatGetAttrPtr(0x1a);
    GF_Snd_SaveState();
    sub_020053A8(1, 0);
    sub_02005150(r5, ((r7 << 0x10) >> 0x10));
    PlayBGM(r5);
}





void sub_02005150(void) {
    // ldrh r0, [r4]
    // ldrh r0, [r4]
}





void sub_020051A4(void) {
    // ldrb r0, [r6]
    // ldrh r0, [r4]
    // ldrh r0, [r4]
    // ldrh r0, [r4]
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
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02005352: ; jump table
}





void sub_020053A8(void) {
    // strb r5, [r6]
}





void Sound_ClearBGMPauseFlags(void) {
}





void GF_SndHandleMoveVolume(void) {
}





void GF_SndHandleSetInitialVolume(void) {
    // bpl _02005434
}





void sub_02005448(void) {
}





void sub_02005464(void) {
}





void GF_GetVolumeBySeqNo(void) {
}





void GF_SetVolumeBySeqNo(void) {
}





void GF_SndPlayerCountPlayingSeqByPlayerNo(void) {
    // bpl _020054CA
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
    MIC_StartAutoSampling();
    // strb r1, [r0]
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}





void GF_MIC_StopAutoSampling(void) {
    GetSoundDataPointer();
    // strb r1, [r0]
    MIC_StopAutoSampling(_021D05E8, 0);
}





void GF_MicPauseOnLidClose(void) {
    MIC_StopAutoSampling(*((u8*)_021D05E8));
    GF_AssertFail();
}





void GF_MicResumeOnLidOpen(void) {
    MIC_StartAutoSampling(_021D05F8);
    GF_AssertFail();
    GF_SndWorkMicCounterReset();
}





void sub_020055AC(void) {
    // ldrb r0, [r6]
    // ldrb r0, [r4]
}





void sub_02005600(void) {
    // str r0, [r4]
    // strb r0, [r6]
    // str r0, [r6]
    // strb r0, [r4]
}





void sub_02005680(void) {
    // strb r0, [r6]
    // strb r0, [r4]
}





void sub_020056E8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
}





void sub_02005728(void) {
}





void sub_02005738(void) {
}





void sub_02005748(void) {
}





void sub_02005760(void) {
}





void sub_02005774(void) {
}





void sub_020057AC(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    GetSoundDataPointer();
    GF_SdatGetAttrPtr(0x22);
    GF_AssertFail();
    NNS_SndArcGetWaveArcInfo(r6);
    GF_AssertFail();
    NNS_SndArcGetFileSize(((*((u32*)r7) << 8) >> 8));
    GF_AssertFail();
    // ldr r0, [sp, #0x48]
    Heap_Alloc(0, r6);
    // str r0, [r4]
    GF_AssertFail();
    memset(0, 0, r6);
    NNS_SndArcReadFile(((*((u32*)r7) << 8) >> 8), *((u32*)r4), r6, 0);
    // mvn r1, r1
    GF_AssertFail(0);
    sub_02005898(*((u32*)r4), r6);
    sub_020055AC(r5);
    // str r1, [sp, #0xc]
    // str r0, [sp, #8]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x20]
    // ldr r0, [sp]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x2c]
    // add r0, sp, #8
    // str r6, [sp, #0x1c]
    sub_020056E8((6 << 0xc), r5);
    // ldr r1, [sp]
    sub_02005774(r5);
    GF_SdatGetAttrPtr(0xf);
    // strb r1, [r0]
}





void sub_02005898(void) {
    // sub r3, r2, r5
    // strb r1, [r0, r5]
    // strb r4, [r0, r3]
}





void sub_020058B8(void) {
    // strb r0, [r4]
}





void sub_020058F4(void) {
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
    // add r0, sp, #0x10
    // ldr r3, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #4]
    // strb r0, [r4]
}





void GF_FadeStartMusicId(void) {
    // str r3, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
}





void sub_02005A74(void) {
    // str r3, [sp, #8]
    // add r0, sp, #0x10
    // ldr r3, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r0, [r4]
}





void sub_02005AB0(void) {
}





void GF_SndSetAllocatableChannelForBGMPlayer(void) {
}





void sub_02005AF8(void) {
    GF_SndSetAllocatableChannelForBGMPlayer(0x0000A7FE);
    sub_02005910(0);
    GF_SndSetAllocatableChannelForBGMPlayer(0x00003FFF);
    sub_020058F4();
}





void sub_02005B20(void) {
    // mvn r1, r1
}





void GF_SndHandleSetPlayerVolume(void) {
}





void sub_02005B58(void) {
}





void sub_02005B68(void) {
}





void sub_02005B78(void) {
}





void sub_02005BA8(void) {
    GF_SdatGetAttrPtr(0x37);
    GF_SetVolumeBySeqNo(r5, *((u8*)(_020F5710 + (*((u8*)r0) << 2))), (*((u8*)r0) << 2));
    GF_SndHandleSetTrackPitch(4, 0x0000FFFF, *((u8*)(_020F5710 + (*((u8*)r4) << 2))), (*((u8*)r4) << 2));
    *((u8*)(r4 + 1)) = 0;
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
    // add r1, r2, r3
}





void GBSounds_SetAllocatableChannels(void) {
    GF_GetSoundHandle(0);
    NNS_SndPlayerSetTrackAllocatableChannel(0xf, 0x0000A7FE);
    GF_GetSoundHandle(7);
    NNS_SndPlayerSetTrackAllocatableChannel(0xf, 0x0000A7FE);
    GF_GetSoundHandle(2);
    NNS_SndPlayerSetTrackAllocatableChannel(0xf, 0x0000A7FE);
}





void sub_02005CF4(void) {
    *((u32*)(_021D05E8 + 0xc)) = r0;
}





void sub_02005D00(void) {
    *((u32*)(_021D05E8 + 0xc)) = 0;
    *((u32*)(_021D05E8 + 4)) = 0;
}




