/* Decompiled from asm/overlay_45_thumb.s */
#include "global.h"

void ov45_02229EE0(void) {
    *((u8*)r2) = r0;
    *((u32*)r5) = r0;
    *((u32*)sp) = r0;
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
    *((u32*)r4) = r5;
    *((u32*)(r4 + r0)) = r7;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)sp) = r4;
    *((u32*)(r1 + 0xe8)) = r0;
}





void ov45_0222A0F0(void) {
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
}





void ov45_0222A1FC(void) {
    // ldr r0, [r0, r1]
}





void ov45_0222A208(void) {
}





void ov45_0222A210(void) {
}





void ov45_0222A214(void) {
}





void ov45_0222A22C(void) {
}





void ov45_0222A230(void) {
    // lsl r3, r1
    // and r1, r4
    *((u32*)(r0 + 0xf8)) = ~(r3);
}





void ov45_0222A25C(void) {
    // lsl r3, r1
    // and r1, r4
    *((u32*)(r0 + 0xfc)) = ~(r3);
}





void ov45_0222A288(void) {
    // lsl r2, r1
}





void ov45_0222A2A0(void) {
    // lsl r5, r1
    // and r2, r3
    *((u32*)(r0 + r1)) = ~(r5);
}





void ov45_0222A2C8(void) {
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
}





void ov45_0222A330(void) {
}





void ov45_0222A33C(void) {
    // ldrsh r0, [r0, r1]
}





void ov45_0222A35C(void) {
    // ldrsh r2, [r0, r1]
    // sub r1, #8
}





void ov45_0222A374(void) {
    // ldrsh r0, [r0, r1]
}





void ov45_0222A394(void) {
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
}





void ov45_0222A414(void) {
}





void ov45_0222A424(void) {
    // ldr r0, [r0, r1]
}





void ov45_0222A430(void) {
    *((u32*)(r0 + r2)) = r1;
}





void ov45_0222A43C(void) {
}





void ov45_0222A450(void) {
    // strb r6, [r1, r0]
}





void ov45_0222A480(void) {
}





void ov45_0222A498(void) {
}





void ov45_0222A4A8(void) {
}





void ov45_0222A4B8(void) {
}





void ov45_0222A4C8(void) {
    // strb r1, [r0, r2]
}





void ov45_0222A4D0(void) {
    // ldrsh r0, [r4, r0]
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
}





void ov45_0222A5C0(void) {
    *((u32*)(r4 + (r4 + r0))) = r1;
}





void ov45_0222A5E8(void) {
    *((u32*)(r4 + (r4 + r0))) = r1;
    // sub r2, #0x11
    // sub r2, #0x12
    // sub r2, #0x13
    // sub r2, #0x14
    // sub r2, #0x15
    // sub r2, #0x16
    // sub r2, #0x17
    // strb r5, [r4, r0]
    // sub r0, #0x63
}





void ov45_0222A704(void) {
}





void ov45_0222A72C(void) {
    *((u32*)(r5 + (r5 + r0))) = r1;
    // strb r4, [r5, r0]
    // sub r0, #0x61
}





void ov45_0222A770(void) {
    *((u32*)(r5 + (r5 + r0))) = r1;
    // strh r6, [r5, r0]
    // strh r1, [r5, r0]
    // strh r4, [r5, r0]
    // strh r6, [r5, r0]
}





void ov45_0222A7DC(void) {
    *((u32*)(r5 + (r5 + r0))) = r1;
    *((u32*)(r5 + (r5 + r0))) = r6;
    *((u32*)(r5 + r1)) = r4;
    // strb r1, [r5, r0]
}





void ov45_0222A844(void) {
    *((u32*)sp) = (r0 + 8);
    *((u32*)(sp + 4)) = (r0 + 8);
}





void ov45_0222A920(void) {
}





void ov45_0222A92C(void) {
}





void ov45_0222A964(void) {
}





void ov45_0222A99C(void) {
}





void ov45_0222A9A0(void) {
}





void ov45_0222A9A4(void) {
    ov45_0222AA5C();
}





void ov45_0222A9C8(void) {
}





void ov45_0222A9CC(void) {
}





void ov45_0222AA10(void) {
}





void ov45_0222AA28(void) {
}





void ov45_0222AA54(void) {
}





void ov45_0222AA5C(void) {
    ov45_0222CD04(*((u16*)(r0 + 0x3a)));
    ov45_0222A9CC(r4, 0x0000FFFF);
}





void ov45_0222AA84(void) {
}





void ov45_0222AAA8(void) {
}





void ov45_0222AAC8(void) {
}





void ov45_0222AADC(void) {
}





void ov45_0222AAEC(void) {
}





void ov45_0222AB0C(void) {
    *((u32*)r1) = (r2 + 0x8c);
}





void ov45_0222AB1C(void) {
    // ldr r0, [r0, r1]
}





void ov45_0222AB28(void) {
}





void ov45_0222AB38(void) {
}





void ov45_0222AB48(void) {
}





void ov45_0222AB58(void) {
}





void ov45_0222AB68(void) {
}





void ov45_0222AB78(void) {
}





void ov45_0222AB94(void) {
    *((u32*)(sp + 0)) = r2;
    *((u32*)sp) = (sp + 0);
    *((u32*)(sp + 4)) = (sp + 0);
}





void ov45_0222ABD0(void) {
    *((u32*)(sp + 0)) = r0;
    *((u32*)sp) = (sp + 0);
    *((u32*)(sp + 4)) = (sp + 0);
}





void ov45_0222AC14(void) {
    *((u32*)(sp + 0)) = r0;
}





void ov45_0222AC58(void) {
    *((u32*)sp) = (sp + 0);
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x28));
    // and r2, r3
}





void ov45_0222ACB8(void) {
    *((u32*)(sp + 0)) = r0;
    *((u32*)sp) = (sp + 0);
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x28));
    // and r2, r3
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
}





void ov45_0222AD90(void) {
}





void ov45_0222ADA0(void) {
}





void ov45_0222ADA8(void) {
}





void ov45_0222ADB8(void) {
}





void ov45_0222ADC8(void) {
}





void ov45_0222ADD8(void) {
}





void ov45_0222ADE8(void) {
}





void ov45_0222ADF8(void) {
}





void ov45_0222AE08(void) {
}





void ov45_0222AE24(void) {
}





void ov45_0222AE34(void) {
}





void ov45_0222AE44(void) {
}





void ov45_0222AE54(void) {
}





void ov45_0222AE64(void) {
}





void ov45_0222AE74(void) {
    // strh r4, [r5, r0]
    // strb r2, [r5, r1]
    // strb r2, [r5, r1]
}





void ov45_0222AED8(void) {
    // strb r2, [r4, r0]
    // strb r2, [r4, r0]
}





void ov45_0222AF80(void) {
    // strh r2, [r4, r0]
}





void ov45_0222AFC4(void) {
    // strb r3, [r4, r2]
    // strh r3, [r4, r0]
}





void ov45_0222AFF8(void) {
}





void ov45_0222B00C(void) {
}





void ov45_0222B020(void) {
    // ldrh r0, [r0, r1]
}





void ov45_0222B028(void) {
}





void ov45_0222B034(void) {
}





void ov45_0222B040(void) {
    // ldrh r0, [r0, r1]
}





void ov45_0222B048(void) {
}





void ov45_0222B06C(void) {
}





void ov45_0222B094(void) {
}





void ov45_0222B0A4(void) {
    // strb r2, [r0, r1]
}





void ov45_0222B0B0(void) {
}





void ov45_0222B0BC(void) {
}





void ov45_0222B0D8(void) {
}





void ov45_0222B0E8(void) {
}





void ov45_0222B0F8(void) {
}





void ov45_0222B108(void) {
}





void ov45_0222B118(void) {
}





void ov45_0222B134(void) {
}





void ov45_0222B1B4(void) {
}





void ov45_0222B1DC(void) {
}





void ov45_0222B1EC(void) {
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
    *((u32*)(r4 + r1)) = r0;
}





void ov45_0222B270(void) {
}





/* Address: 0x0222B28C
 * Checks if all u16 values in array are 0xFFFF.
 */
u32 ov45_0222B28C(u32 a1, u32 a2) {
    u32 i;
    
    if (a2 <= 0)
        return 0;
    
    for (i = 0; i < a2; i++) {
        if (*((u16*)a1) != 0xFFFF)
            return 1;
        a1 += 2;
    }
    
    return 0;
}





void ov45_0222B2B4(void) {
    *((u32*)sp) = r1;
    *((u32*)(r4 + (r4 + (r4 + r2)))) = (r4 + r1);
    *((u32*)(r4 + (r4 + (r4 + r2)))) = r5;
    *((u32*)(sp + 4)) = (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r2))))));
    *((u32*)(r4 + (sp + 0xc))) = (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r2))))));
    // strb r1, [r4, r0]
    // strb r2, [r4, r1]
    // strb r2, [r4, r0]
    // lsl r0, r6
    *((u32*)(((r4 + *((u32*)sp)) + 0xf8) + 0xf8)) = (sp + 0xc);
    *((u32*)(sp + 8)) = r6;
}





void ov45_0222B470(void) {
    // lsl r1, r0
    *((u32*)(r5 + 0xfc)) = (r5 + (r5 + (r5 + (r5 + (r5 + (r5 + r0))))));
}





void ov45_0222B530(void) {
    // lsl r2, r6
    *((u32*)(r4 + r1)) = r0;
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
    *((u32*)(r4 + (r4 + r0))) = r1;
}





void ov45_0222B79C(void) {
    *((u32*)sp) = *((u32*)(sp + 8));
}





void ov45_0222B840(void) {
    // adc r1, r2
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
    *((u32*)(r5 + (r5 + r0))) = r1;
    // strb r0, [r2, r1]
    *((u32*)(r6 + r1)) = (r5 + r7);
    // sub r1, #0x68
}





void ov45_0222BAC4(void) {
}





void ov45_0222BADC(void) {
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
    // ldrsh r1, [r5, r1]
    *((u8*)r5) = r0;
    // ldrsh r0, [r5, r1]
    // ldrsh r2, [r5, r0]
    // bmi _0222BBB2
    // ldrsh r0, [r5, r0]
    // ldrsh r2, [r5, r0]
    // bmi _0222BBD8
    *((u8*)r5) = r1;
    // ldrsh r0, [r5, r0]
    // ldrsh r1, [r5, r0]
    // bmi _0222BC08
    *((u8*)r5) = r0;
    // ldrsh r0, [r5, r0]
}





void ov45_0222BC3C(void) {
    *((u8*)r0) = r2;
    *((u8*)r0) = r2;
    *((u8*)r0) = r2;
    *((u8*)r0) = r2;
    *((u8*)r0) = r2;
    *((u8*)r0) = r2;
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
    *((u16*)r0) = r1;
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
}





void ov45_0222BD30(void) {
    *((u8*)r0) = r1;
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
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = (~(r0) + 0xe8);
    *((u32*)(sp + 8)) = ((~(r0) + 0xe8) + 0xec);
}





void ov45_0222BF18(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = (~(r0) + 0xe8);
    *((u32*)(sp + 8)) = ((~(r0) + 0xe8) + 0xec);
    *((u32*)(sp + 0x10)) = *((u32*)sp);
}





void ov45_0222BF98(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 0x30)) = (~(*((u32*)(sp + 4))) + 0xe8);
    *((u32*)(sp + 0x30)) = (~(*((u32*)(sp + 4))) + 0xe8);
    *((u32*)(sp + 4)) = *((u32*)(sp + 4));
    *((u32*)(sp + 8)) = *((u32*)(sp + 4));
    *((u32*)(sp + 0x30)) = (~(*((u32*)(sp + 8))) + 0xe8);
    *((u32*)(sp + 0x30)) = (~(*((u32*)(sp + 8))) + 0xe8);
    *((u32*)(sp + 8)) = *((u32*)(sp + 8));
    *((u32*)(sp + 0xc)) = *((u32*)sp);
    *((u32*)(sp + 0x10)) = *((u32*)sp);
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x30));
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x34));
    *((u32*)(sp + 0x1c)) = *((u32*)(sp + 0x38));
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x3c));
    *((u32*)(sp + 0x2c)) = *((u32*)sp);
}





void ov45_0222C0CC(void) {
    *((u32*)sp) = ~(r0);
    *((u32*)(sp + 4)) = ~(r0);
    *((u32*)(sp + 8)) = (~(r0) + 0xe8);
}





void ov45_0222C130(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 0x24)) = (*((u32*)sp) + 0xe8);
    *((u32*)(sp + 0x24)) = (*((u32*)sp) + 0xe8);
    *((u32*)(sp + 8)) = *((u32*)(sp + 4));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 0x28));
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x2c));
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x30));
}





void ov45_0222C1EC(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 0x24)) = (*((u32*)sp) + 0xe8);
    *((u32*)(sp + 0x24)) = (*((u32*)sp) + 0xe8);
    *((u32*)(sp + 8)) = *((u32*)(sp + 4));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 0x28));
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x2c));
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x30));
}





void ov45_0222C2A8(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 0x28)) = (*((u32*)sp) + 0xe8);
    *((u32*)(sp + 0x28)) = (*((u32*)sp) + 0xe8);
    *((u32*)(sp + 8)) = *((u32*)(sp + 4));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 4));
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 0x28));
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x2c));
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x30));
    *((u32*)(sp + 0x1c)) = *((u32*)(sp + 0x34));
}





void ov45_0222C36C(void) {
}





void ov45_0222C370(void) {
}





void ov45_0222C388(void) {
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
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r5;
    *((u32*)(sp + 4)) = *((u32*)(sp + 4));
}





void ov45_0222C480(void) {
}





void ov45_0222C4B4(void) {
}





void ov45_0222C4E4(void) {
}





void ov45_0222C4FC(void) {
}





void ov45_0222C514(void) {
    *((u32*)(((r5 + r2) + ~(r1)) + ~(r1))) = r0;
}





void ov45_0222C54C(void) {
}





void ov45_0222C580(void) {
    *((u32*)(((r5 + r2) + r1) + r1)) = r0;
}





void ov45_0222C5B4(void) {
}





void ov45_0222C5E8(void) {
    *((u32*)(((r5 + r2) + r1) + 0xbc)) = r0;
}





void ov45_0222C61C(void) {
}





void ov45_0222C658(void) {
}





void ov45_0222C688(void) {
    *((u32*)sp) = r1;
    *((u32*)(r5 + (r5 + r0))) = r1;
    // strb r1, [r5, r0]
    // strh r6, [r5, r0]
    // strb r2, [r5, r1]
    // strb r2, [r5, r1]
    // strb r2, [r5, r1]
}





void ov45_0222C73C(void) {
    // sub r2, #0xa
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // sub r2, #0xa
}





void ov45_0222C79C(void) {
    // strb r0, [r4, r2]
    // strh r2, [r4, r0]
}





void ov45_0222C800(void) {
}





void ov45_0222C828(void) {
    // blx r2
}





void ov45_0222C83C(void) {
}





void ov45_0222C858(void) {
}





void ov45_0222C88C(void) {
}





void ov45_0222C8AC(void) {
}





void ov45_0222C8C8(void) {
    // strb r1, [r5, r0]
    // strb r0, [r7, r4]
}





void ov45_0222C900(void) {
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
}





void ov45_0222C9D0(void) {
}





void ov45_0222C9EC(void) {
}





void ov45_0222CA10(void) {
    *((u32*)(sp + 8)) = r4;
    *((u32*)sp) = (sp + 8);
    *((u16*)r5) = ((sp + 8) + r4);
    *((u32*)(sp + 4)) = (sp + 8);
}





void ov45_0222CA7C(void) {
    *((u32*)r0) = r3;
    // sub r2, r2, r1
}





void ov45_0222CA8C(void) {
    *((u32*)r0) = r1;
}





void ov45_0222CAA0(void) {
    // sub r0, r3, r0
    // sbc r1, r2
    // sub r2, r2, r0
    // sbc r3, r1
    *((u32*)r4) = (sp + 0);
}





void ov45_0222CB3C(void) {
}





void ov45_0222CB40(void) {
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
    *((u8*)((r5 + (((r0 + 0x42) + 0x41) + 0x42)) + 0x34)) = r4;
    *((u32*)(r5 + (((r5 + (((r0 + 0x42) + 0x41) + 0x42)) + 0x34) + 0x42))) = r6;
    *((u8*)(((((r5 + (((r0 + 0x42) + 0x41) + 0x42)) + 0x34) + 0x42) + 0x42) + 0x42)) = r1;
}





void ov45_0222CBD0(void) {
    *((u32*)r3) = r4;
}





void ov45_0222CC00(void) {
    // strb r1, [r0, r2]
    // sub r1, #0x19
    *((u32*)(r5 + ((((r0 + 0x41) + 0x42) + 0x34) + 0x42))) = r1;
    *((u8*)((((((r0 + 0x41) + 0x42) + 0x34) + 0x42) + 0x41) + 0x41)) = r1;
}





void ov45_0222CC50(void) {
    // sub r0, r1, r0
    // bpl _0222CC72
}





void ov45_0222CC7C(void) {
    // sub r0, r1, r0
    // bpl _0222CC9E
}





void ov45_0222CCA4(void) {
}





void ov45_0222CCB8(void) {
    *((u16*)(r4 + 0x4a)) = r0;
}





void ov45_0222CCDC(void) {
}





void ov45_0222CCE4(void) {
}





void ov45_0222CD04(void) {
    // ldrh r0, [r0, r1]
}





void ov45_0222CD1C(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r3;
    *((u8*)(*((u32*)sp) + 0x39)) = r5;
}





void ov45_0222CD68(void) {
}





void ov45_0222CD84(void) {
}





void ov45_0222CD90(void) {
    *((u32*)r4) = r0;
}





void ov45_0222CDC0(void) {
}





void ov45_0222CDC4(void) {
    *((u32*)r5) = r0;
}





void ov45_0222CDE4(void) {
    // blx r3
}





void ov45_0222CE0C(void) {
}





void ov45_0222CE2C(void) {
    // blx r2
    *((u8*)(r5 + 0x38)) = r4;
}





void ov45_0222CE54(void) {
    // blx r2
}





void ov45_0222CE78(void) {
}





void ov45_0222CE94(void) {
}





void ov45_0222CEB0(void) {
    *((u32*)sp) = r2;
    *((u32*)r6) = r0;
}





void ov45_0222CF00(void) {
}





void ov45_0222CF24(void) {
    *((u32*)r4) = r0;
}





void ov45_0222CF40(void) {
    ov45_0222AD2C(*((u32*)(r0 + 0x3c)));
    *((u32*)(r4 + 4)) = r0;
    ov45_0222AD3C(*((u32*)(r5 + 0x3c)));
    *((u32*)(r4 + 8)) = r0;
    ov45_0222CDC4(r5, r6, ov45_02254B94);
}





void ov45_0222CF68(void) {
    // add r1, pc
    // add pc, r1
}





void ov45_0222CFF4(void) {
    *((u32*)r4) = r0;
    *((u8*)r0) = r1;
}





void ov45_0222D01C(void) {
}





void ov45_0222D028(void) {
    *((u32*)r4) = r0;
}





void ov45_0222D054(void) {
}





void ov45_0222D078(void) {
    *((u32*)r5) = r0;
    *((u8*)r0) = r1;
    *((u32*)r5) = r0;
}





void ov45_0222D0BC(void) {
}





void ov45_0222D0C8(void) {
    // bx r3
}





void ov45_0222D0D8(void) {
}





void ov45_0222D0FC(void) {
    *((u32*)r4) = r0;
    *((u8*)r0) = r1;
    *((u32*)r1) = r0;
}





void ov45_0222D130(void) {
}





void ov45_0222D13C(void) {
    // bx r3
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
    *((u32*)r4) = r0;
    *((u8*)r0) = r1;
    *((u32*)r1) = r0;
}





void ov45_0222D4C0(void) {
}





void ov45_0222D4CC(void) {
    // bx r3
}





void ov45_0222D4DC(void) {
}





void ov45_0222D500(void) {
}





void ov45_0222D524(void) {
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u8*)r4) = (r2 + (sp + 0));
}





void ov45_0222D594(void) {
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    // ldrsb r1, [r1, r0]
    // sub r0, r1, r0
    // bpl _0222D5CE
    // neg r0, r0
    // sub r0, r1, r0
    // sub r0, r0, r5
    // ldrsb r1, [r1, r0]
    // sub r0, r1, r0
    // bpl _0222D600
    // neg r0, r0
    // sub r0, r1, r0
    // sub r0, r0, r5
    // ldrsb r2, [r1, r0]
    // ldrsb r0, [r1, r0]
    // sub r0, r2, r0
    // bpl _0222D62A
    // neg r0, r0
    // sub r0, r1, r0
    *((u8*)r4) = (sp + 0);
}





void ov45_0222D638(void) {
    *((u32*)sp) = r0;
    // strh r5, [r1, r2]
    // and r1, r2
}





void ov45_0222D6B0(void) {
}





void ov45_0222D6D4(void) {
}





void ov45_0222D6FC(void) {
}





void ov45_0222D724(void) {
}





void ov45_0222D740(void) {
}





void ov45_0222D79C(void) {
}





void ov45_0222D7C0(void) {
}





void ov45_0222D7CC(void) {
}





void ov45_0222D7FC(void) {
}





void ov45_0222D844(void) {
}





void ov45_0222D860(void) {
}





void ov45_0222D890(void) {
}





void ov45_0222D8A4(void) {
}





void ov45_0222D8BC(void) {
    *((u32*)r0) = r1;
}





void ov45_0222D8C8(void) {
}





void ov45_0222D8D4(void) {
}





void ov45_0222D8F0(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)sp) = (*((u32*)sp) + 8);
}





void ov45_0222D940(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)(sp + 0x10)) = r2;
    *((u32*)(sp + 0x14)) = r2;
    *((u32*)(sp + 0x18)) = r1;
    *((u32*)(sp + 0x1c)) = r1;
    *((u32*)(sp + 0x20)) = r2;
    *((u32*)(sp + 0x24)) = r2;
    *((u32*)(sp + 0x28)) = r1;
}





void ov45_0222D990(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r2;
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x10)) = r1;
    *((u32*)(sp + 0x14)) = r1;
    *((u32*)(sp + 0x18)) = r2;
    *((u32*)(sp + 0x1c)) = r2;
    *((u32*)(sp + 0x20)) = r1;
    *((u32*)(sp + 0x24)) = r1;
    *((u32*)(sp + 0x28)) = r1;
}





void ov45_0222D9EC(void) {
    *((u32*)(sp + 0x2c)) = (r0 + 0x5c);
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)(sp + 0x10)) = r1;
    *((u32*)(sp + 0x14)) = r1;
    *((u32*)(sp + 0x18)) = r1;
    *((u32*)(sp + 0x1c)) = r1;
    *((u32*)(sp + 0x20)) = r1;
    *((u32*)(sp + 0x24)) = r7;
    *((u32*)(sp + 0x28)) = r1;
}





void ov45_0222DA80(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r3;
    *((u32*)(sp + 0x10)) = r2;
    *((u32*)(sp + 0x14)) = r3;
    *((u32*)(sp + 0x18)) = r3;
    *((u32*)(sp + 0x1c)) = r3;
    *((u32*)(sp + 0x20)) = r2;
    *((u32*)(sp + 0x24)) = r2;
    *((u32*)(sp + 0x28)) = r2;
}





void ov45_0222DAE0(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)(sp + 0x10)) = r1;
    *((u32*)(sp + 0x14)) = r1;
    *((u32*)(sp + 0x18)) = r1;
    *((u32*)(sp + 0x1c)) = r1;
    *((u32*)(sp + 0x20)) = r1;
    *((u32*)(sp + 0x24)) = r1;
    *((u32*)(sp + 0x28)) = r1;
}





void ov45_0222DB3C(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)(sp + 0x10)) = r1;
    *((u32*)(sp + 0x14)) = r1;
    *((u32*)(sp + 0x18)) = r1;
    *((u32*)(sp + 0x1c)) = r1;
    *((u32*)(sp + 0x20)) = r1;
    *((u32*)(sp + 0x24)) = r1;
    *((u32*)(sp + 0x28)) = r1;
}





void ov45_0222DB98(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r3;
    *((u32*)(sp + 0x10)) = r3;
    *((u32*)(sp + 0x14)) = r3;
    *((u32*)(sp + 0x18)) = r3;
    *((u32*)(sp + 0x1c)) = r3;
    *((u32*)(sp + 0x20)) = r1;
    *((u32*)(sp + 0x24)) = r1;
    *((u32*)(sp + 0x28)) = r1;
}





void ov45_0222DC08(void) {
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r2;
    *((u32*)(sp + 8)) = r2;
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(sp + 0x10)) = r2;
    *((u32*)(sp + 0x14)) = r2;
    *((u32*)(sp + 0x18)) = r2;
    *((u32*)(sp + 0x1c)) = r2;
    *((u32*)(sp + 0x20)) = r1;
    *((u32*)(sp + 0x24)) = r1;
    *((u32*)(sp + 0x28)) = r1;
}





void ov45_0222DC64(void) {
    *((u32*)(sp + 0x2c)) = (r0 + 0x5c);
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)(sp + 0x10)) = r1;
    *((u32*)(sp + 0x14)) = r1;
    *((u32*)(sp + 0x18)) = r1;
    *((u32*)(sp + 0x1c)) = r1;
    *((u32*)(sp + 0x20)) = r1;
    *((u32*)(sp + 0x24)) = r6;
    *((u32*)(sp + 0x28)) = r1;
}





void ov45_0222DCE8(void) {
}





void ov45_0222DCF4(void) {
    *((u32*)r1) = r2;
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
}





void ov45_0222DD5C(void) {
    // ldr r0, [r4, r0]
}





void ov45_0222DD78(void) {
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x28));
    *((u32*)sp) = r5;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x28));
    // blx r4
}





void ov45_0222DDE4(void) {
    // blx r2
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
}





void ov45_0222DF38(void) {
}





void ov45_0222DF50(void) {
}





void ov45_0222DF58(void) {
}





void ov45_0222DF78(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 4)) = *((u32*)sp);
    *((u32*)(sp + 4)) = (*((u32*)(sp + 4)) + 0x34);
    *((u32*)(sp + 8)) = *((u32*)(sp + 8));
    *((u32*)(*((u32*)sp) + (r1 + 0x2c))) = (*((u32*)sp) + r2);
    *((u32*)(*((u32*)sp) + (r2 + 0x30))) = (*((u32*)sp) + r2);
}





void ov45_0222DFD0(void) {
    *((u32*)sp) = r0;
}





void ov45_0222E000(void) {
    // sub r0, #0x2c
    // ldrsh r0, [r1, r0]
    // ldrsh r0, [r1, r0]
}





void ov45_0222E03C(void) {
    // ldr r1, [r0, r1]
    // bx r3
}





void ov45_0222E04C(void) {
}





void ov45_0222E094(void) {
}





void ov45_0222E0A4(void) {
    // sub r2, #0x30
}





void ov45_0222E0CC(void) {
}





void ov45_0222E0E0(void) {
    *((u8*)r5) = *((u32*)(sp + 0x40));
}





void ov45_0222E14C(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r4;
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r4;
}





void ov45_0222E1A0(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r4;
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r4;
}





void ov45_0222E200(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r6;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r6;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r6;
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r6;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r6;
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r6;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r6;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r6;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r6;
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r3;
    // sub r2, r2, r5
}





void ov45_0222E33C(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r3;
    // sub r2, r2, r5
}





void ov45_0222E39C(void) {
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0xc));
    // sub r1, r1, r2
}





void ov45_0222E414(void) {
}





void ov45_0222E484(void) {
}





void ov45_0222E4A8(void) {
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0xc));
}





void ov45_0222E540(void) {
}





void ov45_0222E550(void) {
}





void ov45_0222E560(void) {
}





void ov45_0222E574(void) {
}





void ov45_0222E584(void) {
}





u8 ov45_0222E598(void) {
}





u8 ov45_0222E59C(void) {
}





void ov45_0222E5A0(void) {
}





void ov45_0222E5B4(void) {
    // bhi _0222E5C4
    // bls _0222E5D0
    // bls _0222E5D0
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
    *((u32*)(r1 + r0)) = r1;
}





void ov45_0222E6C8(void) {
    // strb r2, [r1, r0]
    // strb r2, [r1, r0]
    // strb r2, [r1, r0]
    // strb r2, [r1, r0]
    // strb r2, [r1, r0]
    // strb r3, [r2, r0]
    // strb r2, [r1, r0]
    // strb r2, [r1, r0]
    // strb r1, [r2, r0]
    // strb r2, [r1, r0]
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
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)(sp + 0x18)) = r0;
    *((u32*)(sp + 0x1c)) = r0;
    *((u32*)(sp + 0x20)) = r0;
    *((u32*)(sp + 0x24)) = r0;
    *((u32*)(sp + 0x28)) = r0;
    *((u32*)(sp + 0x2c)) = r0;
    *((u32*)(sp + 0x30)) = r0;
    *((u32*)(sp + 0x34)) = r0;
    *((u32*)(sp + 0x38)) = r0;
    *((u32*)(sp + 0x3c)) = r0;
    *((u32*)(sp + 0x40)) = r0;
    *((u32*)(sp + 0x44)) = r0;
    *((u32*)(sp + 0x48)) = r0;
    *((u32*)(sp + 0x4c)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r5;
    *((u32*)(sp + 8)) = r0;
    *((u32*)((sp + 0xc) + r1)) = r0;
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
    *((u32*)r4) = r1;
}





void ov45_0222EA78(void) {
    *((u32*)sp) = ~(r0);
    // sub r0, r2, r5
    // mov ip, r1
    // mov r0, ip
    // sbc r0, r6
    *((u32*)sp) = r7;
}





void ov45_0222EAD4(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = ~(r0);
    // sub r0, r2, r6
    // mov ip, r1
    // mov r0, ip
    // sbc r0, r7
    *((u32*)(sp + 4)) = r5;
}





void ov45_0222EB38(void) {
    // strb r4, [r3, r1]
    // strb r3, [r2, r1]
}





void ov45_0222EB74(void) {
}





void ov45_0222EB94(void) {
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
    // ldrsh r2, [r2, r0]
    *((u32*)r4) = r2;
}





void ov45_0222EC3C(void) {
    // ldrsh r2, [r2, r0]
    *((u32*)r4) = r2;
}





void ov45_0222EC68(void) {
    // bx r3
}





void ov45_0222EC7C(void) {
    // bx r3
}





void ov45_0222EC90(void) {
    // bx r3
}





void ov45_0222ECA4(void) {
    // bx r3
}





void ov45_0222ECB8(void) {
    GF_AssertFail(*((u32*)_022577C0));
    // add r0, r1, r0
    // ldmia r0!, {r2, r3}
    // stmia r4!, {r2, r3}
}





void ov45_0222ECDC(void) {
    // add r1, pc
    // add pc, r1
}





void ov45_0222ED7C(void) {
    // strb r3, [r2, r1]
}





void ov45_0222EDA8(void) {
}





void ov45_0222EDC4(void) {
}





void ov45_0222EDF0(void) {
}





void ov45_0222EE20(void) {
    *((u32*)(r0 + r1)) = r5;
    *((u32*)(r3 + r0)) = r4;
    *((u32*)(r0 + (r1 + 8))) = r6;
}





void ov45_0222EE50(void) {
    *((u32*)(r0 + r1)) = r5;
    *((u32*)(r3 + r0)) = r4;
    *((u32*)(r0 + (r1 + 8))) = r6;
}





void ov45_0222EE80(void) {
    *((u8*)(r1 + r0)) = r0;
}





void ov45_0222EEB8(void) {
    *((u8*)(r1 + r0)) = r0;
}





void ov45_0222EEF0(void) {
}





void ov45_0222EF4C(void) {
}





void ov45_0222EFAC(void) {
}





void ov45_0222F028(void) {
    // sub r0, #0xe4
    *((u32*)((r0 + r5) + r0)) = r4;
    // sub r0, #0xe0
    *((u32*)((r0 + r5) + r0)) = r6;
    // sub r0, #0xdc
    *((u32*)((r0 + r5) + r0)) = r7;
    // sub r0, #0xd8
    *((u32*)((r0 + r5) + r0)) = r7;
    // sub r1, #0xe4
    // strh r0, [r2, r1]
    *((u32*)((((r2 + r1) + r5) + r5) + r7)) = (((r2 + r1) + ((r2 + r1) + r5)) + r5);
    // strh r0, [r3, r2]
    // sub r2, #0x6c
    // strh r4, [r3, r2]
    // sub r2, #0x6a
    // strb r4, [r3, r2]
    // sub r0, #0x69
    // strb r3, [r2, r0]
    // sub r0, #0x18
}





void ov45_0222F154(void) {
    // strb r2, [r1, r0]
}





void ov45_0222F1BC(void) {
    // sub r1, #0xda
    *((u32*)((r1 + r6) + r1)) = r0;
    // sub r0, #0xe6
}





void ov45_0222F218(void) {
    // sub r1, #0xd8
}





void ov45_0222F254(void) {
}





void ov45_0222F274(void) {
    GF_AssertFail(*((u32*)_022577C0));
    ov45_0223021C(*((u32*)_022577C0), r4);
}





void ov45_0222F294(void) {
}





void ov45_0222F2D4(void) {
    // sub r0, r1, r0
}





void ov45_0222F314(void) {
    GF_AssertFail(*((u32*)_022577C0));
    GF_AssertFail();
    ov45_0223021C(*((u32*)_022577C0), r4);
    ov45_022302B0(*((u32*)_022577C0), r4);
}





void ov45_0222F350(void) {
    // sub r1, #0xd8
    // strh r5, [r0, r2]
    // sub r2, #0x9e
    // sub r1, #0x2c
}





void ov45_0222F3E8(void) {
}





void ov45_0222F430(void) {
    // sub r1, #0x9c
}





void ov45_0222F464(void) {
}





void ov45_0222F484(void) {
}





void ov45_0222F4AC(void) {
}





void ov45_0222F4D4(void) {
    *((u32*)(r1 + r0)) = r2;
}





void ov45_0222F524(void) {
}





void ov45_0222F544(void) {
    // sub r4, #8
}





void ov45_0222F628(void) {
}





void ov45_0222F6B0(void) {
}





void ov45_0222F70C(void) {
    // strh r3, [r1, r0]
    // strb r4, [r3, r1]
    // strb r4, [r1, r0]
}





void ov45_0222F74C(void) {
}





void ov45_0222F78C(void) {
    // strb r3, [r2, r0]
    // strb r3, [r1, r0]
}





void ov45_0222F7A8(void) {
    // bpl _0222F7AE
}





void ov45_0222F7B0(void) {
}





void ov45_0222F7B4(void) {
    *((u32*)(sp + 4)) = r0;
    // strh r4, [r2, r3]
    // strb r0, [r2, r1]
    // strb r1, [r2, r0]
    *((u32*)sp) = *((u32*)(sp + 4));
    // sub r0, #0x51
}





void ov45_0222F848(void) {
    Heap_Alloc(r2, (r1 * 0x14));
    *((u32*)(*((u32*)_022577C0) + 0x24)) = r0;
    memset(*((u32*)(*((u32*)_022577C0) + 0x24)), 0, r4);
    *((u32*)(*((u32*)_022577C0) + 0x28)) = r5;
}





void ov45_0222F878(void) {
    // bx r3
}





void ov45_0222F88C(void) {
}





void ov45_0222F898(void) {
    *((u32*)sp) = r2;
}





void ov45_0222F8D8(void) {
}





void ov45_0222F8FC(void) {
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
}





void ov45_0222F978(void) {
    // strb r0, [r5, r1]
}





void ov45_0222F9B8(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r2;
    *((u32*)(sp + 8)) = r3;
    // strh r1, [r5, r0]
    *((u32*)(r5 + r1)) = *((u32*)(sp + 8));
    // strh r6, [r5, r0]
}





void ov45_0222FA10(void) {
    *((u32*)(r5 + r0)) = r6;
}





void ov45_0222FA40(void) {
    // strh r1, [r0, r2]
    *((u32*)(r4 + r6)) = r5;
}





void ov45_0222FA74(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = ((r7 + r0) + r4);
    // ldrsh r1, [r1, r4]
    // ldrsh r1, [r1, r0]
    *((u32*)(sp + 8)) = ((r7 + r0) + r4);
    *((u32*)((r7 + r4) + (r7 + r4))) = *((u32*)sp);
    // ldrsh r0, [r0, r1]
    *((u16*)*((u32*)(sp + 4))) = (r7 + r4);
}





void ov45_0222FAF8(void) {
    *((u32*)((r5 + r2) + r0)) = ~(r1);
    // ldrsh r0, [r1, r2]
    // strh r0, [r1, r2]
}





void ov45_0222FB24(void) {
}





void ov45_0222FB5C(void) {
}





void ov45_0222FB84(void) {
}





void ov45_0222FBD8(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = *((u32*)sp);
}





void ov45_0222FC44(void) {
    *((u32*)(r2 + r1)) = r3;
    // strb r2, [r4, r0]
    // strb r2, [r4, r0]
}





void ov45_0222FCE0(void) {
    *((u32*)sp) = r3;
    // blx r4
}





void ov45_0222FD50(void) {
    // blx r2
}





void ov45_0222FDD4(void) {
}





void ov45_0222FDD8(void) {
    *((u32*)sp) = r3;
    // blx r4
}





void ov45_0222FE84(void) {
    // strb r1, [r2, r0]
}





void ov45_0222FEC4(void) {
}





void ov45_0222FF40(void) {
    // blx r3
}





void ov45_0222FF7C(void) {
    // sub r2, #0xe6
    // sub r0, r3, r0
    // sbc r2, r1
    // strb r2, [r1, r0]
}





void ov45_02230008(void) {
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
    // strb r2, [r1, r0]
}





void ov45_022300DC(void) {
    // strb r2, [r1, r0]
}





void ov45_02230108(void) {
    *((u32*)(r1 + r0)) = r2;
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
    // strh r1, [r2, r0]
}





void ov45_0223021C(void) {
}





void ov45_0223023C(void) {
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
}





void ov45_022302E4(void) {
    // strh r2, [r0, r1]
    // strh r0, [r1, r2]
}





void ov45_02230378(void) {
}





void ov45_02230384(void) {
    *((u32*)r1) = r2;
}





void ov45_02230390(void) {
}





void ov45_02230394(void) {
    // strb r3, [r1, r0]
}





void ov45_022303BC(void) {
}





void ov45_022303E4(void) {
}





void ov45_022303FC(void) {
}





void ov45_0223040C(void) {
}





void ov45_02230434(void) {
}





void ov45_0223045C(void) {
}





void ov45_0223048C(void) {
}





void ov45_02230498(void) {
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r3;
    *((u32*)r4) = (*((u32*)(sp + 4)) + r5);
    *((u32*)(sp + 0x24)) = r7;
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 4));
    *((u32*)(sp + 0x18)) = (sp + 0x20);
    *((u32*)sp) = *((u32*)(sp + 4));
    *((u32*)(sp + 0x14)) = (sp + 0x20);
    *((u32*)sp) = r7;
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 8));
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 8));
    *((u32*)sp) = *((u32*)(sp + 0x10));
    *((u32*)sp) = *((u32*)(sp + 0xc));
    *((u32*)(sp + 0x1c)) = *((u32*)(sp + 0xc));
}





void ov45_02230638(void) {
}





void ov45_02230680(void) {
}





void ov45_022306B4(void) {
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
    *((u8*)r0) = r1;
}





void ov45_022308B0(void) {
    *((u32*)(r0 + 0x8c)) = r1;
}





void ov45_022308B8(void) {
}





void ov45_022308C0(void) {
    *((u32*)(sp + 8)) = (*((u32*)(sp + 8)) + r0);
}





void ov45_022308E4(void) {
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
    *((u8*)r0) = r1;
}





void ov45_02230994(void) {
}





void ov45_0223099C(void) {
}





void ov45_022309C4(void) {
}





void ov45_022309D0(void) {
}





void ov45_022309E8(void) {
    *((u32*)r4) = *((u32*)sp);
}





void ov45_02230A44(void) {
}





void ov45_02230A4C(void) {
}





void ov45_02230A58(void) {
}





void ov45_02230A5C(void) {
    // bx r3
}





void ov45_02230A6C(void) {
}





void ov45_02230AA4(void) {
}





void ov45_02230AB4(void) {
}





void ov45_02230AC0(void) {
}





void ov45_02230ACC(void) {
    *((u8*)(r1 + 0x85)) = (((r0 + 0x86) + 0x84) + 0x84);
    *((u32*)((r1 + 0x85) + 0x88)) = (((r0 + 0x86) + 0x84) + 0x84);
    *((u8*)((((r0 + 0x86) + 0x84) + 0x84) + 0x84)) = r4;
    *((u16*)(((((r0 + 0x86) + 0x84) + 0x84) + 0x84) + 0x86)) = r6;
    // blx r1
    *((u16*)(sp + 0)) = (((((r0 + 0x86) + 0x84) + 0x84) + 0x84) + 0x86);
}





void ov45_02230B64(void) {
}





void ov45_02230B8C(void) {
}





void ov45_02230BFC(void) {
}





void ov45_02230C40(void) {
}





void ov45_02230CB0(void) {
    // blx r1
}





void ov45_02230CD8(void) {
    // sub r1, r1, r2
    // ror r1, r0
}





void ov45_02230D20(void) {
}





void ov45_02230D5C(void) {
    // sub r1, r1, r2
    // ror r1, r0
}





void ov45_02230DC4(void) {
}





void ov45_02230DF4(void) {
    *((u8*)r4) = r0;
    *((u8*)r4) = r1;
}





void ov45_02230E28(void) {
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
    *((u32*)sp) = (sp + 0xc);
    *((u32*)sp) = (sp + 8);
    // sub r0, r1, r0
    *((u32*)(sp + 4)) = *((u32*)(sp + 0xc));
    *((u8*)(sp + 4)) = (*((u32*)(sp + 8)) + 0x18);
}





void ov45_02231018(void) {
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)(sp + 0x10)) = r3;
    *((u32*)sp) = r7;
    *((u32*)(sp + 4)) = (sp + 0x18);
    *((u32*)(sp + 8)) = r0;
    // ldrsh r0, [r1, r0]
    *((u32*)*((u32*)(sp + 0x30))) = *((u32*)(sp + 0x18));
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = (sp + 0x14);
    // ldrsh r0, [r1, r0]
    // ldrsh r0, [r5, r0]
    *((u32*)*((u32*)(sp + 0x30))) = *((u32*)(sp + 0x10));
}




