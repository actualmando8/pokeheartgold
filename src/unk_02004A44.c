/* Decompiled from asm/unk_02004A44.s */
#include "global.h"

void GF_SND_BGM_DisableSet(void) {
    GF_SdatGetAttrPtr();
}

void GF_SND_BGM_DisableCheck(void) {
    GF_SdatGetAttrPtr();
}

void sub_02004A60(void) {
    /* Original at 0x02004A60 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xa\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    ldr r0, _02004A8C ; =SEQ_GS_P_START\n    cmp r5, r0\n    bls _02004A82\n    add r0, r5, #0\n    bl sub_02004AB8\n    add r0, r5, #0\n    bl GBSounds_GetDSSeqNoByGBSeqNo\n    strh r0, [r4]\n    b _02004A84\n    strh r5, [r4]\n    mov r0, #0\n    bl GF_SetCurrentPlayingBGM\n    pop {r3, r4, r5, pc}\n    _02004A8C: .word SEQ_GS_P_START"
    );
    #endif
}

void GF_GetCurrentPlayingBGM(void) {
    GF_SdatGetAttrPtr();
}

void GF_SetCurrentPlayingBGM(void) {
    GF_SdatGetAttrPtr();
}

void sub_02004AAC(void) {
    GF_SdatGetAttrPtr();
}

void sub_02004AB8(void) {
    GF_SdatGetAttrPtr();
}

void Sound_SetFieldBGM(void) {
    GF_SdatGetAttrPtr();
}

void Sound_SetScene(void) {
    /* Original at 0x02004AD8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x15\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    mov r0, #0x16\n    bl GF_SdatGetAttrPtr\n    cmp r5, #0x33\n    bhs _02004AF6\n    strb r5, [r4]\n    mov r1, #0\n    strb r1, [r0]\n    pop {r3, r4, r5, pc}\n    strb r5, [r0]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02004AFC(void) {
    GF_SdatGetAttrPtr(0x15);
    GF_SdatGetAttrPtr(0x16);
}

void sub_02004B10(void) {
    GF_SdatGetAttrPtr(0x16);
    sub_02005318();
}

void sub_02004B24(void) {
    /* Original at 0x02004B24 */
    /* Requires manual decompilation - 284 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    cmp r0, #0x4b\n    bls _02004B2C\n    b _02004E42\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02004B38: ; jump table\n    mov r0, #GROUP_SE_FIELD\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_FIELD\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    ldr r0, _02004E4C ; =SEQ_SE_PL_BALLOON02\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E50 ; =SEQ_SE_PL_BALLOON03_2\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E54 ; =SEQ_SE_PL_BALLOON05\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E58 ; =SEQ_SE_PL_BALLOON01\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E5C ; =SEQ_SE_PL_BALLOON07\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E60 ; =SEQ_SE_PL_ALERT4\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E64 ; =SEQ_SE_DP_FW104\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E68 ; =SEQ_SE_PL_NOMI02\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E6C ; =SEQ_SE_DP_023\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E70 ; =SEQ_SE_PL_POINT1\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E74 ; =SEQ_SE_PL_POINT2\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E78 ; =SEQ_SE_PL_POINT3\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E7C ; =SEQ_SE_PL_BALLOON05_2\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E80 ; =SEQ_SE_DP_HAMARU\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E84 ; =SEQ_SE_DP_CON_016\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E88 ; =SEQ_SE_PL_KIRAKIRA\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, _02004E8C ; =SEQ_SE_PL_FCALL\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    b _02004E48\n    mov r0, #GROUP_SE_NUTMIXER\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_BATTLE\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #WAVE_ARC_SE_HIROBA>>8\n    lsl r0, r0, #8\n    bl GF_Snd_LoadBank\n    mov r0, #3\n    lsl r0, r0, #8\n    bl GF_Snd_LoadWaveArc\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_TRADE\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_FIELD\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_BATTLE\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_FIELD\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_CONTEST\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_FIELD\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_NUTMIXER\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_FIELD\n    bl GF_Snd_LoadGroup\n    mov r0, #GROUP_SE_DIG\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_FIELD\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    ldr r0, _02004E90 ; =BANK_SE_THLON\n    bl GF_Snd_LoadBank\n    ldr r0, _02004E90 ; =WAVE_ARC_SE_THLON\n    bl GF_Snd_LoadWaveArc\n    add r4, r0, #0\n    b _02004E48\n    ldr r0, _02004E94 ; =BANK_SE_THLON_OPED\n    bl GF_Snd_LoadBank\n    ldr r0, _02004E94 ; =WAVE_ARC_SE_THLON_OPED\n    bl GF_Snd_LoadWaveArc\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_BAG\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_SLOT\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_NAMEIN\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_IMAGE\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_ZUKAN\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    ldr r0, _02004E98 ; =BANK_SE_TOWNMAP\n    bl GF_Snd_LoadBank\n    ldr r0, _02004E98 ; =WAVE_ARC_SE_TOWNMAP\n    bl GF_Snd_LoadWaveArc\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_TRCARD\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_POKELIST\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_DIG\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_CUSTOM\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_BAG\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_NAMEIN\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_CUSTOM\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #GROUP_SE_CLIMAX\n    bl GF_Snd_LoadGroup\n    add r4, r0, #0\n    b _02004E48\n    ldr r0, _02004E9C ; =BANK_SE_SCRATCH\n    bl GF_Snd_LoadBank\n    ldr r0, _02004E9C ; =WAVE_ARC_SE_SCRATCH\n    bl GF_Snd_LoadWaveArc\n    add r4, r0, #0\n    b _02004E48\n    ldr r0, _02004EA0 ; =BANK_SE_PLANTER\n    bl GF_Snd_LoadBank\n    ldr r0, _02004EA0 ; =WAVE_ARC_SE_PLANTER\n    bl GF_Snd_LoadWaveArc\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #BANK_SE_LINEAR>>2\n    lsl r0, r0, #2\n    bl GF_Snd_LoadBank\n    mov r0, #WAVE_ARC_SE_LINEAR>>2\n    lsl r0, r0, #2\n    bl GF_Snd_LoadWaveArc\n    add r4, r0, #0\n    b _02004E48\n    ldr r0, _02004EA4 ; =BANK_SE_COIN\n    bl GF_Snd_LoadBank\n    ldr r0, _02004EA4 ; =WAVE_ARC_SE_COIN\n    bl GF_Snd_LoadWaveArc\n    add r4, r0, #0\n    b _02004E48\n    ldr r0, _02004EA8 ; =BANK_SE_DENDO\n    bl GF_Snd_LoadBank\n    ldr r0, _02004EA8 ; =WAVE_ARC_SE_DENDO\n    bl GF_Snd_LoadWaveArc\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #BANK_SE_JUICE>>2\n    lsl r0, r0, #2\n    bl GF_Snd_LoadBank\n    mov r0, #WAVE_ARC_SE_JUICE>>2\n    lsl r0, r0, #2\n    bl GF_Snd_LoadWaveArc\n    add r4, r0, #0\n    b _02004E48\n    mov r0, #BANK_SE_PHC>>2\n    lsl r0, r0, #2\n    bl GF_Snd_LoadBank\n    mov r0, #WAVE_ARC_SE_PHC>>2\n    lsl r0, r0, #2\n    bl GF_Snd_LoadWaveArc\n    add r4, r0, #0\n    b _02004E48\n    ldr r0, _02004EAC ; =BANK_SE_SEKIBAN\n    bl GF_Snd_LoadBank\n    ldr r0, _02004EAC ; =WAVE_ARC_SE_SEKIBAN\n    bl GF_Snd_LoadWaveArc\n    add r4, r0, #0\n    b _02004E48\n    ldr r0, _02004EB0 ; =BANK_SE_EVENT\n    bl GF_Snd_LoadBank\n    ldr r0, _02004EB0 ; =WAVE_ARC_SE_EVENT\n    bl GF_Snd_LoadWaveArc\n    add r4, r0, #0\n    b _02004E48\n    bl GF_AssertFail\n    mov r4, #0\n    add r0, r4, #0\n    pop {r4, pc}\n    _02004E4C: .word SEQ_SE_PL_BALLOON02\n    _02004E50: .word SEQ_SE_PL_BALLOON03_2\n    _02004E54: .word SEQ_SE_PL_BALLOON05\n    _02004E58: .word SEQ_SE_PL_BALLOON01\n    _02004E5C: .word SEQ_SE_PL_BALLOON07\n    _02004E60: .word SEQ_SE_PL_ALERT4\n    _02004E64: .word SEQ_SE_DP_FW104\n    _02004E68: .word SEQ_SE_PL_NOMI02\n    _02004E6C: .word SEQ_SE_DP_023\n    _02004E70: .word SEQ_SE_PL_POINT1\n    _02004E74: .word SEQ_SE_PL_POINT2\n    _02004E78: .word SEQ_SE_PL_POINT3\n    _02004E7C: .word SEQ_SE_PL_BALLOON05_2\n    _02004E80: .word SEQ_SE_DP_HAMARU\n    _02004E84: .word SEQ_SE_DP_CON_016\n    _02004E88: .word SEQ_SE_PL_KIRAKIRA\n    _02004E8C: .word SEQ_SE_PL_FCALL\n    _02004E90: .word BANK_SE_THLON\n    _02004E94: .word BANK_SE_THLON_OPED\n    _02004E98: .word BANK_SE_TOWNMAP\n    _02004E9C: .word BANK_SE_SCRATCH\n    _02004EA0: .word BANK_SE_PLANTER\n    _02004EA4: .word BANK_SE_COIN\n    _02004EA8: .word BANK_SE_DENDO\n    _02004EAC: .word BANK_SE_SEKIBAN\n    _02004EB0: .word BANK_SE_EVENT"
    );
    #endif
}

void sub_02004EB4(void) {
    /* Original at 0x02004EB4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02004EC0 ; =Sound_SetSceneAndPlayBGM\n    add r1, r0, #0\n    mov r0, #4\n    mov r2, #1\n    bx r3\n    nop\n    _02004EC0: .word Sound_SetSceneAndPlayBGM"
    );
    #endif
}

void Sound_SetSceneAndPlayBGM(void) {
    /* Original at 0x02004EC4 */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #0x15\n    add r5, r1, #0\n    add r6, r2, #0\n    bl GF_SdatGetAttrPtr\n    str r0, [sp]\n    mov r0, #0x16\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #4]\n    mov r0, #0xe\n    bl GF_SdatGetAttrPtr\n    add r7, r0, #0\n    cmp r4, #0x33\n    bhs _02004EF8\n    ldr r0, [sp]\n    ldrb r0, [r0]\n    cmp r0, r4\n    bne _02004F06\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    ldrb r0, [r0]\n    cmp r0, r4\n    bne _02004F06\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl Sound_SetScene\n    cmp r4, #0x4a\n    bls _02004F12\n    b _02005054\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02004F1E: ; jump table\n    mov r0, #0\n    bl sub_02005AF8\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_0200508C\n    mov r0, #0\n    strh r0, [r7]\n    b _0200505A\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02005228\n    b _0200505A\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02005260\n    b _0200505A\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02005280\n    b _0200505A\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_020052A4\n    b _0200505A\n    add r0, r4, #0\n    bl sub_020052C8\n    b _0200505A\n    add r0, r4, #0\n    bl sub_020052C8\n    add r0, r5, #0\n    bl PlayBGM\n    b _0200505A\n    mov r0, #1\n    bl sub_02005AF8\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl sub_020052E4\n    b _0200505A\n    mov r0, #2\n    bl sub_02005AF8\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl sub_020052E4\n    b _0200505A\n    mov r0, #0\n    bl sub_02005AF8\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl sub_020052E4\n    b _0200505A\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl sub_020052E4\n    b _0200505A\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl sub_020052E4\n    b _0200505A\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02005060(void) {
    /* Original at 0x02005060 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x18\n    bl GF_SdatGetAttrPtr\n    ldr r0, [r0]\n    bl GF_Snd_LoadState\n    mov r0, #0x19\n    bl GF_SdatGetAttrPtr\n    bl GF_Snd_SaveState\n    add r0, r4, #0\n    bl sub_02004B24\n    mov r0, #0x1a\n    bl GF_SdatGetAttrPtr\n    bl GF_Snd_SaveState\n    pop {r4, pc}"
    );
    #endif
}

void sub_0200508C(void) {
    /* Original at 0x0200508C */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0xc\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    mov r0, #0x18\n    bl GF_SdatGetAttrPtr\n    mov r0, #0x20\n    bl GF_SdatGetAttrPtr\n    mov r0, #0\n    bl GF_GetSoundHandle\n    bl GF_NNS_SndPlayerGetSeqNo\n    add r7, r0, #0\n    lsl r0, r7, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, _02005144 ; =SEQ_GS_P_START\n    cmp r7, r0\n    ble _020050C2\n    add r0, r4, #0\n    bl GBSounds_GetDSSeqNoByGBSeqNo\n    add r4, r0, #0\n    ldrb r0, [r6]\n    cmp r0, #0\n    bne _020050D6\n    cmp r4, r5\n    bne _020050D6\n    bl sub_02004AAC\n    ldr r1, _02005148 ; =SEQ_GS_BICYCLE\n    cmp r0, r1\n    bne _02005142\n    mov r0, #1\n    bl sub_020059E0\n    ldr r0, _0200514C ; =_021D05E8\n    ldr r1, [r0, #0xc]\n    cmp r1, #0\n    beq _020050EA\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    bne _020050F4\n    bl sub_02005FD8\n    ldr r0, _0200514C ; =_021D05E8\n    mov r1, #1\n    str r1, [r0, #4]\n    cmp r4, r5\n    beq _02005104\n    mov r0, #1\n    mov r1, #0\n    bl sub_020053A8\n    bl Sound_Stop\n    ldrb r0, [r6]\n    cmp r0, #1\n    bne _0200513C\n    mov r0, #2\n    bl sub_02005328\n    bl GF_Snd_LoadState\n    mov r0, #4\n    bl sub_02004B24\n    mov r0, #0x1a\n    bl GF_SdatGetAttrPtr\n    bl GF_Snd_SaveState\n    cmp r4, r5\n    beq _02005130\n    mov r0, #1\n    mov r1, #0\n    bl sub_020053A8\n    lsl r1, r7, #0x10\n    add r0, r5, #0\n    lsr r1, r1, #0x10\n    bl sub_02005150\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl PlayBGM\n    pop {r3, r4, r5, r6, r7, pc}\n    _02005144: .word SEQ_GS_P_START\n    _02005148: .word SEQ_GS_BICYCLE\n    _0200514C: .word _021D05E8"
    );
    #endif
}

void sub_02005150(void) {
    /* Original at 0x02005150 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x20\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    ldrh r0, [r4]\n    bl GF_GetBankBySeqNo\n    mov r1, #0xaf\n    lsl r1, r1, #2\n    cmp r0, r1\n    bne _02005178\n    add r0, r5, #0\n    mov r1, #4\n    bl GF_Snd_LoadSeqEx\n    bl GF_AssertFail\n    b _02005180\n    ldrh r0, [r4]\n    mov r1, #6\n    bl GF_Snd_LoadSeqEx\n    mov r0, #0x1b\n    bl GF_SdatGetAttrPtr\n    bl GF_Snd_SaveState\n    mov r0, #1\n    mov r1, #0\n    bl sub_020053A8\n    mov r0, #0x7f\n    mov r1, #0x28\n    mov r2, #0\n    bl GF_SndStartFadeInBGM\n    mov r0, #0\n    bl sub_020059E0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020051A4(void) {
    /* Original at 0x020051A4 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r0, #0x13\n    add r5, r1, #0\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    mov r0, #0x20\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    ldrb r0, [r6]\n    cmp r0, #1\n    beq _020051C4\n    cmp r5, #0\n    bne _02005224\n    mov r0, #1\n    bl sub_02005328\n    bl GF_Snd_LoadState\n    mov r0, #0\n    bl sub_02004AFC\n    ldrh r0, [r4]\n    mov r1, #2\n    bl GF_Snd_LoadSeqEx\n    mov r0, #0x19\n    bl GF_SdatGetAttrPtr\n    bl GF_Snd_SaveState\n    mov r0, #4\n    bl sub_02004B24\n    mov r0, #0x1a\n    bl GF_SdatGetAttrPtr\n    bl GF_Snd_SaveState\n    ldrh r0, [r4]\n    bl GF_GetBankBySeqNo\n    mov r1, #0xaf\n    lsl r1, r1, #2\n    cmp r0, r1\n    bne _02005212\n    add r0, r7, #0\n    mov r1, #4\n    bl GF_Snd_LoadSeqEx\n    bl GF_AssertFail\n    b _0200521A\n    ldrh r0, [r4]\n    mov r1, #4\n    bl GF_Snd_LoadSeqEx\n    mov r0, #0x1b\n    bl GF_SdatGetAttrPtr\n    bl GF_Snd_SaveState\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02005228(void) {
    /* Original at 0x02005228 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x18\n    bl GF_SdatGetAttrPtr\n    bl sub_02005B20\n    mov r0, #2\n    bl sub_02005328\n    bl GF_Snd_LoadState\n    mov r0, #5\n    bl sub_02004B24\n    mov r0, #0x1a\n    bl GF_SdatGetAttrPtr\n    bl GF_Snd_SaveState\n    mov r0, #1\n    bl sub_020059E0\n    add r0, r4, #0\n    bl PlayBGM\n    pop {r4, pc}"
    );
    #endif
}

void sub_02005260(void) {
    GF_SdatGetAttrPtr(0x18);
    Sound_Stop();
    Sound_ClearBGMPauseFlags();
    sub_02005060(4);
    PlayBGM(r4);
}

void sub_02005280(void) {
    GF_SdatGetAttrPtr(0x18);
    Sound_Stop();
    sub_02005060(6);
    sub_020059E0(1);
    PlayBGM(r4);
}

void sub_020052A4(void) {
    GF_SdatGetAttrPtr(0x18);
    Sound_Stop();
    sub_02005060(7);
    sub_020059E0(1);
    PlayBGM(r4);
}

void sub_020052C8(void) {
    sub_02005318();
    sub_02004B24(r4);
    GF_SdatGetAttrPtr(0x1c);
    GF_Snd_SaveState();
}

void sub_020052E4(void) {
    GF_SdatGetAttrPtr(0x18);
    Sound_Stop();
    sub_02005060(r5);
    PlayBGM(r4);
}

void BGM_SaveStateAndPlayNew(void) {
    GetSoundDataPointer();
    sub_02005B20();
    PlayBGM(r4);
}

void sub_02005318(void) {
    sub_02005328(4);
    GF_Snd_LoadState();
}

void sub_02005328(void) {
    /* Original at 0x02005328 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl GetSoundDataPointer\n    cmp r4, #7\n    blt _02005342\n    bl GF_AssertFail\n    mov r0, #0x1b\n    bl GF_SdatGetAttrPtr\n    ldr r0, [r0]\n    pop {r3, r4, r5, pc}\n    cmp r4, #6\n    bhi _020053A4\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02005352: ; jump table\n    mov r0, #0x17\n    bl GF_SdatGetAttrPtr\n    add r5, r0, #0\n    b _020053A4\n    mov r0, #0x18\n    bl GF_SdatGetAttrPtr\n    add r5, r0, #0\n    b _020053A4\n    mov r0, #0x19\n    bl GF_SdatGetAttrPtr\n    add r5, r0, #0\n    b _020053A4\n    mov r0, #0x1a\n    bl GF_SdatGetAttrPtr\n    add r5, r0, #0\n    b _020053A4\n    mov r0, #0x1b\n    bl GF_SdatGetAttrPtr\n    add r5, r0, #0\n    b _020053A4\n    mov r0, #0x1c\n    bl GF_SdatGetAttrPtr\n    add r5, r0, #0\n    b _020053A4\n    mov r0, #0x1d\n    bl GF_SdatGetAttrPtr\n    add r5, r0, #0\n    ldr r0, [r5]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020053A8(void) {
    /* Original at 0x020053A8 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    cmp r0, #1\n    bne _020053BC\n    mov r0, #0xc\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    mov r4, #0\n    b _020053CA\n    cmp r0, #7\n    bne _020053EE\n    mov r0, #0xd\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    mov r4, #7\n    cmp r5, #0\n    bne _020053E0\n    add r0, r4, #0\n    bl GF_GetSoundHandle\n    bl GF_NNS_SndPlayerGetSeqNo\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02004A60\n    add r0, r4, #0\n    bl GF_GetSoundHandle\n    add r1, r5, #0\n    bl NNS_SndPlayerPause\n    strb r5, [r6]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void Sound_ClearBGMPauseFlags(void) {
    GF_SdatGetAttrPtr(0xc);
    GF_SdatGetAttrPtr(0xd);
}

void GF_SndHandleMoveVolume(void) {
    /* Original at 0x02005408 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    add r6, r0, #0\n    bl GF_GetSoundHandle\n    add r1, r5, #0\n    add r2, r4, #0\n    bl NNS_SndPlayerMoveVolume\n    cmp r6, #0\n    bne _02005428\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    bl GF_SndWorkSetGbSoundsVolume\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void GF_SndHandleSetInitialVolume(void) {
    /* Original at 0x0200542C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bpl _02005434\n    mov r4, #0\n    cmp r4, #0x7f\n    ble _0200543A\n    mov r4, #0x7f\n    bl GF_GetSoundHandle\n    add r1, r4, #0\n    bl NNS_SndPlayerSetInitialVolume\n    pop {r4, pc}"
    );
    #endif
}

void sub_02005448(void) {
    /* Original at 0x02005448 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl GF_GetPlayerNoBySeq\n    bl GF_GetSndHandleByPlayerNo\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_02005464\n    pop {r4, pc}"
    );
    #endif
}

void sub_02005464(void) {
    /* Original at 0x02005464 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl NNS_SndArcGetSeqParam\n    cmp r5, #1\n    beq _02005474\n    cmp r5, #8\n    bne _02005478\n    mov r4, #0x7f\n    b _0200547E\n    cmp r0, #0\n    beq _02005496\n    ldrb r4, [r0, #2]\n    bl sub_020378CC\n    cmp r0, #1\n    bne _02005496\n    add r0, r4, #0\n    mov r1, #5\n    bl _s32_div_f\n    add r1, r0, #0\n    add r0, r5, #0\n    bl GF_SndHandleSetInitialVolume\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void GF_GetVolumeBySeqNo(void) {
    NNS_SndArcGetSeqParam();
}

void GF_SetVolumeBySeqNo(void) {
    GF_GetPlayerNoBySeq();
    GF_GetSndHandleByPlayerNo();
    GF_SndHandleSetInitialVolume(r4);
}

void GF_SndPlayerCountPlayingSeqByPlayerNo(void) {
    /* Original at 0x020054C0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bpl _020054CA\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl NNS_SndPlayerCountPlayingSeqByPlayerNo\n    pop {r4, pc}"
    );
    #endif
}

void GF_GetPlayerNoBySeq(void) {
    NNS_SndArcGetSeqParam(0xff, 0xff);
}

void GF_NNS_SndPlayerGetSeqNo(void) {
    NNS_SndPlayerGetSeqNo();
}

void GF_GetBankInfoBySeqNo(void) {
    GF_GetBankBySeqNo();
    NNS_SndArcGetBankInfo();
}

void GF_GetBankBySeqNo(void) {
    NNS_SndArcGetSeqParam();
}

void sub_02005518(void) {
    GF_SndWorkMicCounterFull();
}

void GF_MIC_StartAutoSampling(void) {
    /* Original at 0x02005520 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl MIC_StartAutoSampling\n    add r3, r0, #0\n    ldr r0, _02005548 ; =_021D05E8\n    mov r1, #1\n    strb r1, [r0]\n    ldr r2, _0200554C ; =_021D05F8\n    ldmia r4!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r2]\n    add r0, r3, #0\n    pop {r4, pc}\n    nop\n    _02005548: .word _021D05E8\n    _0200554C: .word _021D05F8"
    );
    #endif
}

void GF_MIC_StopAutoSampling(void) {
    /* Original at 0x02005550 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl GetSoundDataPointer\n    ldr r0, _02005564 ; =_021D05E8\n    mov r1, #0\n    strb r1, [r0]\n    bl MIC_StopAutoSampling\n    pop {r3, pc}\n    nop\n    _02005564: .word _021D05E8"
    );
    #endif
}

void GF_MicPauseOnLidClose(void) {
    /* Original at 0x02005568 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02005580 ; =_021D05E8\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0200557E\n    bl MIC_StopAutoSampling\n    cmp r0, #0\n    beq _0200557E\n    bl GF_AssertFail\n    pop {r3, pc}\n    _02005580: .word _021D05E8"
    );
    #endif
}

void GF_MicResumeOnLidOpen(void) {
    /* Original at 0x02005584 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020055A4 ; =_021D05E8\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0200559C\n    ldr r0, _020055A8 ; =_021D05F8\n    bl MIC_StartAutoSampling\n    cmp r0, #0\n    beq _0200559C\n    bl GF_AssertFail\n    bl GF_SndWorkMicCounterReset\n    pop {r3, pc}\n    nop\n    _020055A4: .word _021D05E8\n    _020055A8: .word _021D05F8"
    );
    #endif
}

void sub_020055AC(void) {
    /* Original at 0x020055AC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl GetSoundDataPointer\n    mov r0, #0x10\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    mov r0, #0x11\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    cmp r5, #0xe\n    beq _020055D0\n    cmp r5, #0xf\n    beq _020055D0\n    bl GF_AssertFail\n    cmp r5, #0xe\n    bne _020055DE\n    ldrb r0, [r6]\n    cmp r0, #0\n    bne _020055DE\n    bl GF_AssertFail\n    cmp r5, #0xf\n    bne _020055EC\n    ldrb r0, [r4]\n    cmp r0, #0\n    bne _020055EC\n    bl GF_AssertFail\n    cmp r5, #0xe\n    bne _020055F8\n    mov r0, #0\n    bl GF_SdatGetAttrPtr\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    bl GF_SdatGetAttrPtr\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02005600(void) {
    /* Original at 0x02005600 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl GetSoundDataPointer\n    mov r0, #0x10\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    mov r0, #0x11\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    cmp r5, #0xe\n    beq _02005624\n    cmp r5, #0xf\n    beq _02005624\n    bl GF_AssertFail\n    cmp r5, #0xe\n    bne _02005652\n    ldrb r0, [r6]\n    cmp r0, #0\n    bne _0200564C\n    mov r0, #0\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    add r0, r5, #0\n    bl NNS_SndWaveOutAllocChannel\n    str r0, [r4]\n    cmp r0, #0\n    bne _02005646\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    strb r0, [r6]\n    b _0200567A\n    bl GF_AssertFail\n    b _0200567A\n    ldrb r0, [r4]\n    cmp r0, #0\n    bne _02005676\n    mov r0, #1\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    add r0, r5, #0\n    bl NNS_SndWaveOutAllocChannel\n    str r0, [r6]\n    cmp r0, #0\n    bne _02005670\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    strb r0, [r4]\n    b _0200567A\n    bl GF_AssertFail\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02005680(void) {
    /* Original at 0x02005680 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl GetSoundDataPointer\n    mov r0, #0x10\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    mov r0, #0x11\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    cmp r5, #0xe\n    beq _020056A6\n    cmp r5, #0xf\n    beq _020056A6\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    cmp r5, #0xe\n    bne _020056C8\n    ldrb r0, [r6]\n    cmp r0, #1\n    bne _020056C2\n    add r0, r5, #0\n    bl sub_020055AC\n    ldr r0, [r0]\n    bl NNS_SndWaveOutFreeChannel\n    mov r0, #0\n    strb r0, [r6]\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    ldrb r0, [r4]\n    cmp r0, #1\n    bne _020056E0\n    add r0, r5, #0\n    bl sub_020055AC\n    ldr r0, [r0]\n    bl NNS_SndWaveOutFreeChannel\n    mov r0, #0\n    strb r0, [r4]\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020056E8(void) {
    /* Original at 0x020056E8 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r3, r0, #0\n    ldr r0, [r3, #0x10]\n    add r4, r1, #0\n    str r0, [sp]\n    ldr r0, [r3, #0x14]\n    str r0, [sp, #4]\n    ldr r0, [r3, #0x18]\n    str r0, [sp, #8]\n    ldr r0, [r3, #0x1c]\n    str r0, [sp, #0xc]\n    ldr r0, [r3, #0x20]\n    str r0, [sp, #0x10]\n    ldr r0, [r3, #0x24]\n    str r0, [sp, #0x14]\n    ldr r0, [r3]\n    ldr r1, [r3, #4]\n    ldr r2, [r3, #8]\n    ldr r0, [r0]\n    ldr r3, [r3, #0xc]\n    bl NNS_SndWaveOutStart\n    add r5, r0, #0\n    bne _02005720\n    add r0, r4, #0\n    bl sub_02005680\n    add r0, r5, #0\n    add sp, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02005728(void) {
    sub_020055AC();
    NNS_SndWaveOutStop();
}

void sub_02005738(void) {
    sub_020055AC();
    NNS_SndWaveOutIsPlaying();
}

void sub_02005748(void) {
    /* Original at 0x02005748 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    cmp r4, #0x7f\n    bls _02005752\n    mov r4, #0x7f\n    bl sub_020055AC\n    ldr r0, [r0]\n    add r1, r4, #0\n    bl NNS_SndWaveOutSetPan\n    pop {r4, pc}"
    );
    #endif
}

void sub_02005760(void) {
    sub_020055AC();
    NNS_SndWaveOutSetSpeed(r4);
}

void sub_02005774(void) {
    /* Original at 0x02005774 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    bl sub_020378CC\n    cmp r0, #1\n    bne _0200579C\n    add r0, r4, #0\n    bl sub_020055AC\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #5\n    bl _s32_div_f\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl NNS_SndWaveOutSetVolume\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl sub_020055AC\n    ldr r0, [r0]\n    add r1, r5, #0\n    bl NNS_SndWaveOutSetVolume\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020057AC(void) {
    /* Original at 0x020057AC */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r6, r0, #0\n    str r1, [sp]\n    str r2, [sp, #4]\n    add r5, r3, #0\n    bl GetSoundDataPointer\n    mov r0, #0x22\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    cmp r5, #0xe\n    beq _020057D0\n    cmp r5, #0xf\n    beq _020057D0\n    bl GF_AssertFail\n    add r0, r6, #0\n    bl NNS_SndArcGetWaveArcInfo\n    add r7, r0, #0\n    bne _020057E4\n    bl GF_AssertFail\n    add sp, #0x30\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r7]\n    lsl r0, r0, #8\n    lsr r0, r0, #8\n    bl NNS_SndArcGetFileSize\n    add r6, r0, #0\n    bne _020057FC\n    bl GF_AssertFail\n    add sp, #0x30\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r5, #0xe\n    bne _0200584A\n    ldr r0, [sp, #0x48]\n    add r1, r6, #0\n    bl Heap_Alloc\n    str r0, [r4]\n    cmp r0, #0\n    bne _02005818\n    bl GF_AssertFail\n    add sp, #0x30\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    add r2, r6, #0\n    bl memset\n    ldr r0, [r7]\n    ldr r1, [r4]\n    lsl r0, r0, #8\n    lsr r0, r0, #8\n    add r2, r6, #0\n    mov r3, #0\n    bl NNS_SndArcReadFile\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _02005842\n    bl GF_AssertFail\n    add sp, #0x30\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4]\n    add r1, r6, #0\n    bl sub_02005898\n    add r0, r5, #0\n    bl sub_020055AC\n    mov r1, #0\n    str r1, [sp, #0xc]\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    str r0, [sp, #0x10]\n    ldr r0, _02005894 ; =0x00003443\n    str r1, [sp, #0x14]\n    str r0, [sp, #0x20]\n    ldr r0, [sp]\n    str r1, [sp, #0x18]\n    str r0, [sp, #0x24]\n    mov r0, #6\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    str r0, [sp, #0x2c]\n    add r0, sp, #8\n    str r6, [sp, #0x1c]\n    bl sub_020056E8\n    add r4, r0, #0\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl sub_02005774\n    mov r0, #0xf\n    bl GF_SdatGetAttrPtr\n    mov r1, #1\n    strb r1, [r0]\n    add r0, r4, #0\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _02005894: .word 0x00003443"
    );
    #endif
}

void sub_02005898(void) {
    /* Original at 0x02005898 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    mov r5, #0\n    lsr r6, r1, #1\n    beq _020058B2\n    sub r2, r1, #1\n    sub r3, r2, r5\n    ldrb r4, [r0, r5]\n    ldrb r1, [r0, r3]\n    strb r1, [r0, r5]\n    add r5, r5, #1\n    strb r4, [r0, r3]\n    cmp r5, r6\n    blo _020058A2\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void sub_020058B8(void) {
    /* Original at 0x020058B8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl GetSoundDataPointer\n    mov r0, #0xf\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    mov r0, #0x22\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    cmp r5, #0xe\n    beq _020058DC\n    cmp r5, #0xf\n    beq _020058DC\n    bl GF_AssertFail\n    add r0, r5, #0\n    bl sub_02005728\n    ldrb r0, [r4]\n    cmp r0, #1\n    bne _020058F2\n    mov r0, #0\n    strb r0, [r4]\n    ldr r0, [r6]\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020058F4(void) {
    /* Original at 0x020058F4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl NNS_SndCaptureIsActive\n    add r4, r0, #0\n    cmp r4, #1\n    bne _02005904\n    bl sub_02005908\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_02005908(void) {
    NNS_SndCaptureGetCaptureType();
}

void sub_02005910(void) {
    NNS_SndCaptureStopReverb();
}

void GF_SndHandleSetTrackPitch(void) {
    GF_GetSoundHandle();
    NNS_SndPlayerSetTrackPitch(r5, r4);
}

void sub_0200592C(void) {
    GF_GetPlayerNoBySeq();
    GF_GetSndHandleByPlayerNo();
    GF_SndHandleSetTrackPitch(r5, r4);
}

void sub_02005944(void) {
    GF_GetSndHandleByPlayerNo();
    GF_SndHandleSetTrackPitch(r5, r4);
}

void GF_SndHandleSetTrackPan(void) {
    GF_GetSoundHandle();
    NNS_SndPlayerSetTrackPan(r5, r4);
}

void GF_SndHandleSetTempoRatio(void) {
    GF_GetSoundHandle();
    NNS_SndPlayerSetTempoRatio(r4);
}

void GF_SndSetMonoFlag(void) {
    NNS_SndSetMonoFlag();
}

void sub_02005990(void) {
    GF_SdatGetAttrPtr();
}

void sub_020059A0(void) {
    GF_SdatGetAttrPtr();
}

void GF_SndGetAfterFadeDelayTimer(void) {
    GF_SdatGetAttrPtr(8, 0);
}

void Sound_SetMasterVolume(void) {
    NNS_SndSetMasterVolume();
}

void sub_020059D8(void) {
    /* Original at 0x020059D8 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020059DC ; =_021D0620\n    bx lr\n    _020059DC: .word _021D0620"
    );
    #endif
}

void sub_020059E0(void) {
    GF_SdatGetAttrPtr();
}

void GF_NowStartMusicId(void) {
    sub_02005A10(4);
}

void sub_02005A10(void) {
    /* Original at 0x02005A10 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0x16\n    add r6, r1, #0\n    add r7, r2, #0\n    str r3, [sp, #8]\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    add r0, sp, #0x10\n    ldrb r0, [r0, #0x10]\n    ldr r3, [sp, #8]\n    add r1, r6, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    add r2, r7, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl sub_02005AB0\n    mov r0, #0\n    strb r0, [r4]\n    mov r0, #5\n    bl GF_SndSetState\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void GF_FadeStartMusicId(void) {
    /* Original at 0x02005A4C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    str r3, [sp]\n    add r0, sp, #0x10\n    ldrb r0, [r0, #0x10]\n    add r5, r1, #0\n    add r4, r2, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    add r1, r6, #0\n    str r0, [sp, #8]\n    mov r0, #4\n    add r2, r5, #0\n    add r3, r4, #0\n    bl sub_02005A74\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_02005A74(void) {
    /* Original at 0x02005A74 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #9\n    add r6, r1, #0\n    add r7, r2, #0\n    str r3, [sp, #8]\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    add r0, sp, #0x10\n    ldrb r0, [r0, #0x14]\n    ldr r3, [sp, #8]\n    add r1, r6, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x28]\n    add r2, r7, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl sub_02005AB0\n    ldr r0, [sp, #0x20]\n    str r0, [r4]\n    mov r0, #6\n    bl GF_SndSetState\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02005AB0(void) {
    /* Original at 0x02005AB0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r2, #0\n    mov r0, #2\n    add r5, r1, #0\n    add r7, r3, #0\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r6, #0\n    bl GF_SndStartFadeOutBGM\n    mov r0, #0\n    bl sub_02004A60\n    add r0, r5, #0\n    bl GF_SetCurrentPlayingBGM\n    add r0, r7, #0\n    bl sub_020059A0\n    add r0, r5, #0\n    bl GF_GetBankInfoBySeqNo\n    str r0, [r4]\n    add r0, sp, #8\n    ldrb r0, [r0, #0x10]\n    bl sub_020059E0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void GF_SndSetAllocatableChannelForBGMPlayer(void) {
    NNS_SndPlayerSetAllocatableChannel();
}

void sub_02005AF8(void) {
    /* Original at 0x02005AF8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    bne _02005B0C\n    ldr r0, _02005B18 ; =0x0000A7FE\n    bl GF_SndSetAllocatableChannelForBGMPlayer\n    mov r0, #0\n    bl sub_02005910\n    b _02005B12\n    ldr r0, _02005B1C ; =0x00003FFF\n    bl GF_SndSetAllocatableChannelForBGMPlayer\n    bl sub_020058F4\n    pop {r3, pc}\n    _02005B18: .word 0x0000A7FE\n    _02005B1C: .word 0x00003FFF"
    );
    #endif
}

void sub_02005B20(void) {
    /* Original at 0x02005B20 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl GF_SndGetFadeTimer\n    cmp r0, #0\n    bne _02005B4A\n    mov r0, #0\n    bl GF_GetSoundHandle\n    bl GF_NNS_SndPlayerGetSeqNo\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _02005B4A\n    bl sub_02005FD8\n    mov r0, #1\n    add r1, r0, #0\n    bl sub_020053A8\n    pop {r3, pc}\n    bl Sound_Stop\n    pop {r3, pc}"
    );
    #endif
}

void GF_SndHandleSetPlayerVolume(void) {
    NNS_SndPlayerSetPlayerVolume();
}

void sub_02005B58(void) {
    GF_SdatGetAttrPtr();
}

void sub_02005B68(void) {
    GF_SdatGetAttrPtr();
}

void sub_02005B78(void) {
    /* Original at 0x02005B78 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bne _02005B86\n    bl GF_AssertFail\n    cmp r4, #0xf\n    bls _02005B8E\n    bl GF_AssertFail\n    add r0, r5, #0\n    bl GF_GetPlayerNoBySeq\n    bl GF_GetSndHandleByPlayerNo\n    bl GF_GetSoundHandle\n    add r1, r4, #0\n    add r2, r6, #0\n    bl NNS_SndPlayerReadVariable\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02005BA8(void) {
    /* Original at 0x02005BA8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x37\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    ldrb r1, [r4]\n    add r0, r5, #0\n    lsl r2, r1, #2\n    ldr r1, _02005BE0 ; =_020F5710 + 1\n    ldrb r1, [r1, r2]\n    bl GF_SetVolumeBySeqNo\n    ldrb r2, [r4]\n    ldr r1, _02005BE4 ; =0x0000FFFF\n    mov r0, #4\n    lsl r3, r2, #2\n    ldr r2, _02005BE8 ; =_020F5710\n    ldrb r2, [r2, r3]\n    bl GF_SndHandleSetTrackPitch\n    ldrb r0, [r4, #1]\n    cmp r0, #8\n    blo _02005BDC\n    mov r0, #0\n    strb r0, [r4, #1]\n    pop {r3, r4, r5, pc}\n    nop\n    _02005BE0: .word _020F5710 + 1\n    _02005BE4: .word 0x0000FFFF\n    _02005BE8: .word _020F5710"
    );
    #endif
}

void sub_02005BEC(void) {
    GF_SdatGetAttrPtr();
}

void sub_02005BFC(void) {
    GF_SdatGetAttrPtr();
}

void sub_02005C08(void) {
    GF_SdatGetAttrPtr();
}

void SoundSys_GetGBSoundsState(void) {
    GF_SdatGetAttrPtr();
}

void SoundSys_ToggleGBSounds(void) {
    /* Original at 0x02005C24 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    bl SoundSys_GetGBSoundsState\n    cmp r0, #0\n    bne _02005C36\n    mov r0, #1\n    bl sub_02005C08\n    b _02005C3C\n    mov r0, #0\n    bl sub_02005C08\n    bl sub_02004AAC\n    cmp r0, #0\n    bne _02005C6A\n    bl GF_GetCurrentPlayingBGM\n    add r4, r0, #0\n    bl GF_SndWorkGetGbSoundsVolume\n    add r5, r0, #0\n    add r0, r4, #0\n    bl GBSounds_GetGBSeqNoByDSSeqNo\n    cmp r4, r0\n    beq _02005C60\n    add r0, r4, #0\n    bl PlayBGM\n    mov r0, #0\n    add r1, r5, #0\n    add r2, r0, #0\n    bl GF_SndHandleMoveVolume\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void GBSounds_GetGBSeqNoByDSSeqNo(void) {
    /* Original at 0x02005C6C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r2, _02005C90 ; =_020F5730\n    mov r4, #0\n    lsl r3, r4, #2\n    ldrh r1, [r2, r3]\n    cmp r0, r1\n    bne _02005C82\n    ldr r0, _02005C94 ; =_020F5730 + 2\n    ldrh r0, [r0, r3]\n    pop {r3, r4}\n    bx lr\n    add r1, r4, #1\n    lsl r1, r1, #0x10\n    lsr r4, r1, #0x10\n    cmp r4, #0x88\n    blo _02005C72\n    pop {r3, r4}\n    bx lr\n    _02005C90: .word _020F5730\n    _02005C94: .word _020F5730 + 2"
    );
    #endif
}

void GBSounds_GetDSSeqNoByGBSeqNo(void) {
    /* Original at 0x02005C98 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r2, _02005CBC ; =_020F5730\n    mov r4, #0\n    lsl r3, r4, #2\n    add r1, r2, r3\n    ldrh r1, [r1, #2]\n    cmp r0, r1\n    bne _02005CAE\n    ldrh r0, [r2, r3]\n    pop {r3, r4}\n    bx lr\n    add r1, r4, #1\n    lsl r1, r1, #0x10\n    lsr r4, r1, #0x10\n    cmp r4, #0x88\n    blo _02005C9E\n    pop {r3, r4}\n    bx lr\n    _02005CBC: .word _020F5730"
    );
    #endif
}

void GBSounds_SetAllocatableChannels(void) {
    /* Original at 0x02005CC0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0 ; HANDLE_FIELD\n    bl GF_GetSoundHandle\n    ldr r2, _02005CF0 ; =0x0000A7FE\n    mov r1, #0xf\n    bl NNS_SndPlayerSetTrackAllocatableChannel\n    mov r0, #7 ; HANDLE_BGM\n    bl GF_GetSoundHandle\n    ldr r2, _02005CF0 ; =0x0000A7FE\n    mov r1, #0xf\n    bl NNS_SndPlayerSetTrackAllocatableChannel\n    mov r0, #2 ; HANDLE_ME\n    bl GF_GetSoundHandle\n    ldr r2, _02005CF0 ; =0x0000A7FE\n    mov r1, #0xf\n    bl NNS_SndPlayerSetTrackAllocatableChannel\n    pop {r3, pc}\n    nop\n    _02005CF0: .word 0x0000A7FE"
    );
    #endif
}

void sub_02005CF4(void) {
    /* Original at 0x02005CF4 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02005CFC ; =_021D05E8\n    str r0, [r1, #0xc]\n    bx lr\n    nop\n    _02005CFC: .word _021D05E8"
    );
    #endif
}

void sub_02005D00(void) {
    /* Original at 0x02005D00 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02005D0C ; =_021D05E8\n    mov r1, #0\n    str r1, [r0, #0xc]\n    str r1, [r0, #4]\n    bx lr\n    nop\n    _02005D0C: .word _021D05E8"
    );
    #endif
}
