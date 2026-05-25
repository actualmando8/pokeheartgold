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
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x15
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // mov r0, #0x16
    // bl GF_SdatGetAttrPtr
    // cmp r5, #0x33
    // bhs _02004AF6
    // strb r5, [r4]
    // mov r1, #0
    // strb r1, [r0]
    // pop {r3, r4, r5, pc}
    // strb r5, [r0]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #0x15
    // add r5, r1, #0
    // add r6, r2, #0
    // bl GF_SdatGetAttrPtr
    // str r0, [sp]
    // mov r0, #0x16
    // bl GF_SdatGetAttrPtr
    // str r0, [sp, #4]
    // mov r0, #0xe
    // bl GF_SdatGetAttrPtr
    // add r7, r0, #0
    // cmp r4, #0x33
    // bhs _02004EF8
    // ldr r0, [sp]
    // ldrb r0, [r0]
    // cmp r0, r4
    // bne _02004F06
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // ldrb r0, [r0]
    // cmp r0, r4
    // bne _02004F06
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl Sound_SetScene
    // cmp r4, #0x4a
    // bls _02004F12
    // b _02005054
    // add r0, r4, r4
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02004F1E: ; jump table
    // mov r0, #0
    // bl sub_02005AF8
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_0200508C
    // mov r0, #0
    // strh r0, [r7]
    // b _0200505A
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02005228
    // b _0200505A
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02005260
    // b _0200505A
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02005280
    // b _0200505A
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_020052A4
    // b _0200505A
    // add r0, r4, #0
    // bl sub_020052C8
    // b _0200505A
    // add r0, r4, #0
    // bl sub_020052C8
    // add r0, r5, #0
    // bl PlayBGM
    // b _0200505A
    // mov r0, #1
    // bl sub_02005AF8
    // add r0, r4, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // bl sub_020052E4
    // b _0200505A
    // mov r0, #2
    // bl sub_02005AF8
    // add r0, r4, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // bl sub_020052E4
    // b _0200505A
    // mov r0, #0
    // bl sub_02005AF8
    // add r0, r4, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // bl sub_020052E4
    // b _0200505A
    // add r0, r4, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // bl sub_020052E4
    // b _0200505A
    // add r0, r4, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // bl sub_020052E4
    // b _0200505A
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x20
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // ldrh r0, [r4]
    // bl GF_GetBankBySeqNo
    // mov r1, #0xaf
    // lsl r1, r1, #2
    // cmp r0, r1
    // bne _02005178
    // add r0, r5, #0
    // mov r1, #4
    // bl GF_Snd_LoadSeqEx
    // bl GF_AssertFail
    // b _02005180
    // ldrh r0, [r4]
    // mov r1, #6
    // bl GF_Snd_LoadSeqEx
    // mov r0, #0x1b
    // bl GF_SdatGetAttrPtr
    // bl GF_Snd_SaveState
    // mov r0, #1
    // mov r1, #0
    // bl sub_020053A8
    // mov r0, #0x7f
    // mov r1, #0x28
    // mov r2, #0
    // bl GF_SndStartFadeInBGM
    // mov r0, #0
    // bl sub_020059E0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void sub_020051A4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // mov r0, #0x13
    // add r5, r1, #0
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // mov r0, #0x20
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // ldrb r0, [r6]
    // cmp r0, #1
    // beq _020051C4
    // cmp r5, #0
    // bne _02005224
    // mov r0, #1
    // bl sub_02005328
    // bl GF_Snd_LoadState
    // mov r0, #0
    // bl sub_02004AFC
    // ldrh r0, [r4]
    // mov r1, #2
    // bl GF_Snd_LoadSeqEx
    // mov r0, #0x19
    // bl GF_SdatGetAttrPtr
    // bl GF_Snd_SaveState
    // mov r0, #4
    // bl sub_02004B24
    // mov r0, #0x1a
    // bl GF_SdatGetAttrPtr
    // bl GF_Snd_SaveState
    // ldrh r0, [r4]
    // bl GF_GetBankBySeqNo
    // mov r1, #0xaf
    // lsl r1, r1, #2
    // cmp r0, r1
    // bne _02005212
    // add r0, r7, #0
    // mov r1, #4
    // bl GF_Snd_LoadSeqEx
    // bl GF_AssertFail
    // b _0200521A
    // ldrh r0, [r4]
    // mov r1, #4
    // bl GF_Snd_LoadSeqEx
    // mov r0, #0x1b
    // bl GF_SdatGetAttrPtr
    // bl GF_Snd_SaveState
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_02005228(void) {
    GF_SdatGetAttrPtr(0x18);
    sub_02005B20();
    sub_02005328(2);
    GF_Snd_LoadState();
    sub_02004B24(5);
    GF_SdatGetAttrPtr(0x1a);
    GF_Snd_SaveState();
    sub_020059E0(1);
    PlayBGM(r4);
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
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl GetSoundDataPointer
    // cmp r4, #7
    // blt _02005342
    // bl GF_AssertFail
    // mov r0, #0x1b
    // bl GF_SdatGetAttrPtr
    // ldr r0, [r0]
    // pop {r3, r4, r5, pc}
    // cmp r4, #6
    // bhi _020053A4
    // add r0, r4, r4
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02005352: ; jump table
    // mov r0, #0x17
    // bl GF_SdatGetAttrPtr
    // add r5, r0, #0
    // b _020053A4
    // mov r0, #0x18
    // bl GF_SdatGetAttrPtr
    // add r5, r0, #0
    // b _020053A4
    // mov r0, #0x19
    // bl GF_SdatGetAttrPtr
    // add r5, r0, #0
    // b _020053A4
    // mov r0, #0x1a
    // bl GF_SdatGetAttrPtr
    // add r5, r0, #0
    // b _020053A4
    // mov r0, #0x1b
    // bl GF_SdatGetAttrPtr
    // add r5, r0, #0
    // b _020053A4
    // mov r0, #0x1c
    // bl GF_SdatGetAttrPtr
    // add r5, r0, #0
    // b _020053A4
    // mov r0, #0x1d
    // bl GF_SdatGetAttrPtr
    // add r5, r0, #0
    // ldr r0, [r5]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void sub_020053A8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // cmp r0, #1
    // bne _020053BC
    // mov r0, #0xc
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // mov r4, #0
    // b _020053CA
    // cmp r0, #7
    // bne _020053EE
    // mov r0, #0xd
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // mov r4, #7
    // cmp r5, #0
    // bne _020053E0
    // add r0, r4, #0
    // bl GF_GetSoundHandle
    // bl GF_NNS_SndPlayerGetSeqNo
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl sub_02004A60
    // add r0, r4, #0
    // bl GF_GetSoundHandle
    // add r1, r5, #0
    // bl NNS_SndPlayerPause
    // strb r5, [r6]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void Sound_ClearBGMPauseFlags(void) {
}



void GF_SndHandleMoveVolume(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // add r6, r0, #0
    // bl GF_GetSoundHandle
    // add r1, r5, #0
    // add r2, r4, #0
    // bl NNS_SndPlayerMoveVolume
    // cmp r6, #0
    // bne _02005428
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // bl GF_SndWorkSetGbSoundsVolume
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void GF_SndHandleSetInitialVolume(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bpl _02005434
    // mov r4, #0
    // cmp r4, #0x7f
    // ble _0200543A
    // mov r4, #0x7f
    // bl GF_GetSoundHandle
    // add r1, r4, #0
    // bl NNS_SndPlayerSetInitialVolume
    // pop {r4, pc}
    // TODO: decompile
}



void sub_02005448(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // bl GF_GetPlayerNoBySeq
    // bl GF_GetSndHandleByPlayerNo
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_02005464
    // pop {r4, pc}
    // TODO: decompile
}



void sub_02005464(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // bl NNS_SndArcGetSeqParam
    // cmp r5, #1
    // beq _02005474
    // cmp r5, #8
    // bne _02005478
    // mov r4, #0x7f
    // b _0200547E
    // cmp r0, #0
    // beq _02005496
    // ldrb r4, [r0, #2]
    // bl sub_020378CC
    // cmp r0, #1
    // bne _02005496
    // add r0, r4, #0
    // mov r1, #5
    // bl _s32_div_f
    // add r1, r0, #0
    // add r0, r5, #0
    // bl GF_SndHandleSetInitialVolume
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void GF_GetVolumeBySeqNo(void) {
}



void GF_SetVolumeBySeqNo(void) {
}



void GF_SndPlayerCountPlayingSeqByPlayerNo(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bpl _020054CA
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl NNS_SndPlayerCountPlayingSeqByPlayerNo
    // pop {r4, pc}
    // TODO: decompile
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
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl GetSoundDataPointer
    // mov r0, #0x10
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // mov r0, #0x11
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // cmp r5, #0xe
    // beq _020055D0
    // cmp r5, #0xf
    // beq _020055D0
    // bl GF_AssertFail
    // cmp r5, #0xe
    // bne _020055DE
    // ldrb r0, [r6]
    // cmp r0, #0
    // bne _020055DE
    // bl GF_AssertFail
    // cmp r5, #0xf
    // bne _020055EC
    // ldrb r0, [r4]
    // cmp r0, #0
    // bne _020055EC
    // bl GF_AssertFail
    // cmp r5, #0xe
    // bne _020055F8
    // mov r0, #0
    // bl GF_SdatGetAttrPtr
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // bl GF_SdatGetAttrPtr
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void sub_02005600(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl GetSoundDataPointer
    // mov r0, #0x10
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // mov r0, #0x11
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // cmp r5, #0xe
    // beq _02005624
    // cmp r5, #0xf
    // beq _02005624
    // bl GF_AssertFail
    // cmp r5, #0xe
    // bne _02005652
    // ldrb r0, [r6]
    // cmp r0, #0
    // bne _0200564C
    // mov r0, #0
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // add r0, r5, #0
    // bl NNS_SndWaveOutAllocChannel
    // str r0, [r4]
    // cmp r0, #0
    // bne _02005646
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // strb r0, [r6]
    // b _0200567A
    // bl GF_AssertFail
    // b _0200567A
    // ldrb r0, [r4]
    // cmp r0, #0
    // bne _02005676
    // mov r0, #1
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // add r0, r5, #0
    // bl NNS_SndWaveOutAllocChannel
    // str r0, [r6]
    // cmp r0, #0
    // bne _02005670
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // strb r0, [r4]
    // b _0200567A
    // bl GF_AssertFail
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void sub_02005680(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl GetSoundDataPointer
    // mov r0, #0x10
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // mov r0, #0x11
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // cmp r5, #0xe
    // beq _020056A6
    // cmp r5, #0xf
    // beq _020056A6
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // cmp r5, #0xe
    // bne _020056C8
    // ldrb r0, [r6]
    // cmp r0, #1
    // bne _020056C2
    // add r0, r5, #0
    // bl sub_020055AC
    // ldr r0, [r0]
    // bl NNS_SndWaveOutFreeChannel
    // mov r0, #0
    // strb r0, [r6]
    // pop {r4, r5, r6, pc}
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // ldrb r0, [r4]
    // cmp r0, #1
    // bne _020056E0
    // add r0, r5, #0
    // bl sub_020055AC
    // ldr r0, [r0]
    // bl NNS_SndWaveOutFreeChannel
    // mov r0, #0
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void sub_020056E8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r3, r0, #0
    // ldr r0, [r3, #0x10]
    // add r4, r1, #0
    // str r0, [sp]
    // ldr r0, [r3, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [r3, #0x18]
    // str r0, [sp, #8]
    // ldr r0, [r3, #0x1c]
    // str r0, [sp, #0xc]
    // ldr r0, [r3, #0x20]
    // str r0, [sp, #0x10]
    // ldr r0, [r3, #0x24]
    // str r0, [sp, #0x14]
    // ldr r0, [r3]
    // ldr r1, [r3, #4]
    // ldr r2, [r3, #8]
    // ldr r0, [r0]
    // ldr r3, [r3, #0xc]
    // bl NNS_SndWaveOutStart
    // add r5, r0, #0
    // bne _02005720
    // add r0, r4, #0
    // bl sub_02005680
    // add r0, r5, #0
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void sub_02005728(void) {
}



void sub_02005738(void) {
}



void sub_02005748(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // cmp r4, #0x7f
    // bls _02005752
    // mov r4, #0x7f
    // bl sub_020055AC
    // ldr r0, [r0]
    // add r1, r4, #0
    // bl NNS_SndWaveOutSetPan
    // pop {r4, pc}
    // TODO: decompile
}



void sub_02005760(void) {
}



void sub_02005774(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r5, r1, #0
    // bl sub_020378CC
    // cmp r0, #1
    // bne _0200579C
    // add r0, r4, #0
    // bl sub_020055AC
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #5
    // bl _s32_div_f
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl NNS_SndWaveOutSetVolume
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl sub_020055AC
    // ldr r0, [r0]
    // add r1, r5, #0
    // bl NNS_SndWaveOutSetVolume
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, r6}
    // mov r5, #0
    // lsr r6, r1, #1
    // beq _020058B2
    // sub r2, r1, #1
    // sub r3, r2, r5
    // ldrb r4, [r0, r5]
    // ldrb r1, [r0, r3]
    // strb r1, [r0, r5]
    // add r5, r5, #1
    // strb r4, [r0, r3]
    // cmp r5, r6
    // blo _020058A2
    // pop {r3, r4, r5, r6}
    // bx lr
    // TODO: decompile
}



void sub_020058B8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl GetSoundDataPointer
    // mov r0, #0xf
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // mov r0, #0x22
    // bl GF_SdatGetAttrPtr
    // add r6, r0, #0
    // cmp r5, #0xe
    // beq _020058DC
    // cmp r5, #0xf
    // beq _020058DC
    // bl GF_AssertFail
    // add r0, r5, #0
    // bl sub_02005728
    // ldrb r0, [r4]
    // cmp r0, #1
    // bne _020058F2
    // mov r0, #0
    // strb r0, [r4]
    // ldr r0, [r6]
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void sub_020058F4(void) {
    // push {r4, lr}
    // bl NNS_SndCaptureIsActive
    // add r4, r0, #0
    // cmp r4, #1
    // bne _02005904
    // bl sub_02005908
    // add r0, r4, #0
    // pop {r4, pc}
    // TODO: decompile
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
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #0x16
    // add r6, r1, #0
    // add r7, r2, #0
    // str r3, [sp, #8]
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // add r0, sp, #0x10
    // ldrb r0, [r0, #0x10]
    // ldr r3, [sp, #8]
    // add r1, r6, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // add r2, r7, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl sub_02005AB0
    // mov r0, #0
    // strb r0, [r4]
    // mov r0, #5
    // bl GF_SndSetState
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}



void GF_FadeStartMusicId(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // str r3, [sp]
    // add r0, sp, #0x10
    // ldrb r0, [r0, #0x10]
    // add r5, r1, #0
    // add r4, r2, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // add r1, r6, #0
    // str r0, [sp, #8]
    // mov r0, #4
    // add r2, r5, #0
    // add r3, r4, #0
    // bl sub_02005A74
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}



void sub_02005A74(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #9
    // add r6, r1, #0
    // add r7, r2, #0
    // str r3, [sp, #8]
    // bl GF_SdatGetAttrPtr
    // add r4, r0, #0
    // add r0, sp, #0x10
    // ldrb r0, [r0, #0x14]
    // ldr r3, [sp, #8]
    // add r1, r6, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // add r2, r7, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl sub_02005AB0
    // ldr r0, [sp, #0x20]
    // str r0, [r4]
    // mov r0, #6
    // bl GF_SndSetState
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // push {r3, lr}
    // bl GF_SndGetFadeTimer
    // cmp r0, #0
    // bne _02005B4A
    // mov r0, #0
    // bl GF_GetSoundHandle
    // bl GF_NNS_SndPlayerGetSeqNo
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _02005B4A
    // bl sub_02005FD8
    // mov r0, #1
    // add r1, r0, #0
    // bl sub_020053A8
    // pop {r3, pc}
    // bl Sound_Stop
    // pop {r3, pc}
    // TODO: decompile
}



void GF_SndHandleSetPlayerVolume(void) {
}



void sub_02005B58(void) {
}



void sub_02005B68(void) {
}



void sub_02005B78(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bne _02005B86
    // bl GF_AssertFail
    // cmp r4, #0xf
    // bls _02005B8E
    // bl GF_AssertFail
    // add r0, r5, #0
    // bl GF_GetPlayerNoBySeq
    // bl GF_GetSndHandleByPlayerNo
    // bl GF_GetSoundHandle
    // add r1, r4, #0
    // add r2, r6, #0
    // bl NNS_SndPlayerReadVariable
    // pop {r4, r5, r6, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, lr}
    // bl SoundSys_GetGBSoundsState
    // cmp r0, #0
    // bne _02005C36
    // mov r0, #1
    // bl sub_02005C08
    // b _02005C3C
    // mov r0, #0
    // bl sub_02005C08
    // bl sub_02004AAC
    // cmp r0, #0
    // bne _02005C6A
    // bl GF_GetCurrentPlayingBGM
    // add r4, r0, #0
    // bl GF_SndWorkGetGbSoundsVolume
    // add r5, r0, #0
    // add r0, r4, #0
    // bl GBSounds_GetGBSeqNoByDSSeqNo
    // cmp r4, r0
    // beq _02005C60
    // add r0, r4, #0
    // bl PlayBGM
    // mov r0, #0
    // add r1, r5, #0
    // add r2, r0, #0
    // bl GF_SndHandleMoveVolume
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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


