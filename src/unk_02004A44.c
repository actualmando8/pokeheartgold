/* Decompiled from asm/unk_02004A44.s */
#include "global.h"

void GF_SND_BGM_DisableSet(void) {
}





void GF_SND_BGM_DisableCheck(void) {
}





void sub_02004A60(void) {
    *((u16*)r4) = r0;
    *((u16*)r4) = r5;
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
    *((u8*)r4) = r5;
    *((u8*)r0) = r1;
    *((u8*)r0) = r5;
}





void sub_02004AFC(void) {
}





void sub_02004B10(void) {
}





void sub_02004B24(void) {
    // mov r0, #GROUP_SE_FIELD
    // mov r0, #GROUP_SE_FIELD
    // mov r0, #GROUP_SE_NUTMIXER
    // mov r0, #GROUP_SE_BATTLE
    // mov r0, #WAVE_ARC_SE_HIROBA>>8
    // mov r0, #GROUP_SE_TRADE
    // mov r0, #GROUP_SE_FIELD
    // mov r0, #GROUP_SE_BATTLE
    // mov r0, #GROUP_SE_FIELD
    // mov r0, #GROUP_SE_CONTEST
    // mov r0, #GROUP_SE_FIELD
    // mov r0, #GROUP_SE_NUTMIXER
    // mov r0, #GROUP_SE_FIELD
    // mov r0, #GROUP_SE_DIG
    // mov r0, #GROUP_SE_FIELD
    // mov r0, #GROUP_SE_BAG
    // mov r0, #GROUP_SE_SLOT
    // mov r0, #GROUP_SE_NAMEIN
    // mov r0, #GROUP_SE_IMAGE
    // mov r0, #GROUP_SE_ZUKAN
    // mov r0, #GROUP_SE_TRCARD
    // mov r0, #GROUP_SE_POKELIST
    // mov r0, #GROUP_SE_DIG
    // mov r0, #GROUP_SE_CUSTOM
    // mov r0, #GROUP_SE_BAG
    // mov r0, #GROUP_SE_NAMEIN
    // mov r0, #GROUP_SE_CUSTOM
    // mov r0, #GROUP_SE_CLIMAX
    // mov r0, #BANK_SE_LINEAR>>2
    // mov r0, #WAVE_ARC_SE_LINEAR>>2
    // mov r0, #BANK_SE_JUICE>>2
    // mov r0, #WAVE_ARC_SE_JUICE>>2
    // mov r0, #BANK_SE_PHC>>2
    // mov r0, #WAVE_ARC_SE_PHC>>2
}





void sub_02004EB4(void) {
    // bx r3
}





void Sound_SetSceneAndPlayBGM(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u16*)r7) = ((s32)((r4 + r4)) >> 0x10);
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
}





void sub_020051A4(void) {
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
}





void sub_020053A8(void) {
    *((u8*)r6) = r5;
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
    *((u8*)r0) = r1;
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
}





void sub_02005600(void) {
    *((u32*)r4) = r0;
    *((u8*)r6) = r0;
    *((u32*)r6) = r0;
    *((u8*)r4) = r0;
}





void sub_02005680(void) {
    *((u8*)r6) = r0;
    *((u8*)r4) = r0;
}





void sub_020056E8(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0x14)) = r0;
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
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r2;
    *((u32*)r4) = *((u32*)(sp + 0x48));
    *((u32*)(sp + 0xc)) = ~(r1);
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x48));
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 0x48));
    *((u32*)(sp + 0x14)) = ~(r1);
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x48));
    *((u32*)(sp + 0x18)) = ~(r1);
    *((u32*)(sp + 0x24)) = *((u32*)sp);
    *((u32*)(sp + 0x28)) = *((u32*)sp);
    *((u32*)(sp + 0x2c)) = *((u32*)(sp + 4));
    *((u32*)(sp + 0x1c)) = r6;
    *((u8*)(sp + 8)) = *((u32*)sp);
}





void sub_02005898(void) {
    // sub r3, r2, r5
    // strb r1, [r0, r5]
    // strb r4, [r0, r3]
}





void sub_020058B8(void) {
    *((u8*)r4) = r0;
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
}





void sub_020059E0(void) {
}





void GF_NowStartMusicId(void) {
}





void sub_02005A10(void) {
    *((u32*)(sp + 8)) = r3;
    *((u32*)sp) = (sp + 0x10);
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x24));
    *((u8*)r4) = *((u32*)(sp + 0x24));
}





void GF_FadeStartMusicId(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = (sp + 0x10);
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x24));
}





void sub_02005A74(void) {
    *((u32*)(sp + 8)) = r3;
    *((u32*)sp) = (sp + 0x10);
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x28));
    *((u32*)r4) = *((u32*)(sp + 0x20));
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





/* Address: 0x02005C72
 * Looks up GB sequence number by DS sequence number.
 */
u32 GBSounds_GetGBSeqNoByDSSeqNo(u32 a1) {
    u32 i;
    
    for (i = 0; i < 0x88; i++) {
        u16 seq = *((u16*)(_020F5730 + i * 4));
        if (seq == a1) {
            u16 result = *((u16*)(_020F5730 + 2 + i * 4));
            return result;
        }
    }
    
    return 0;
}





void GBSounds_GetDSSeqNoByGBSeqNo(void) {
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




