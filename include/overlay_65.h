#ifndef POKEHEARTGOLD_OVERLAY_65_H
#define POKEHEARTGOLD_OVERLAY_65_H

#include <global.h>

// Unknown structure used by overlay 65 (WirelessTradeSelectMon)
// Based on function analysis
typedef struct UnkStruct_0221BF54 {
    u32 field_0x0;
    u32 field_0x4;
    u32 field_0x8;
    u32 field_0xc;
    u32 field_0x10;
    u32 field_0x14;
    u32 field_0x18;
    u32 field_0x1c;
    u32 field_0x20;
    u32 field_0x24;
    u32 field_0x28;
    u32 field_0x2c;
    u32 field_0x30;
    u32 field_0x34;
    u32 field_0x38;
    u32 field_0x3c;
    u32 field_0x40;
    u32 field_0x44;
    u32 field_0x48;
    u32 field_0x4c;
    u32 field_0x50;
    u32 field_0x54;
    u32 field_0x58;
    u32 field_0x5c;
    u32 field_0x60;
    u32 field_0x64;
    u32 field_0x68;
    u32 field_0x6c;
    u32 field_0x70;
    u32 field_0x74;
    u32 field_0x78;
    u32 field_0x7c;
    u32 field_0x80;
    u32 field_0x84;
    u32 field_0x88;
    u32 field_0x8c;
    u32 field_0x90;
    u32 field_0x94;
    u32 field_0x98;
    u32 field_0x9c;
    u32 field_0xa0;
    u32 field_0xa4;
    u32 field_0xa8;
    u32 field_0xac;
    u32 field_0xb0;
    u32 field_0xb4;
    u32 field_0xb8;
    u32 field_0xbc;
    u32 field_0xc0;
    u32 field_0xc4;
    u32 field_0xc8;
    u32 field_0xcc;
    u32 field_0xd0;
    u32 field_0xd4;
    u32 field_0xd8;
    u32 field_0xdc;
    u32 field_0xe0;
    u32 field_0xe4;
    u32 field_0xe8;
    u32 field_0xec;
    u32 field_0xf0;
    u32 field_0xf4;
    u32 field_0xf8;
    u32 field_0xfc;
} UnkStruct_0221BF54;

// WirelessTradeSelectMon_Init - Assembly: asm/overlay_65.s
// Initializes the wireless trade select monster screen
int WirelessTradeSelectMon_Init(UnkStruct_0221BF54 *structPtr);

// ov65_0221BFBC - Assembly: asm/overlay_65.s
void ov65_0221BFBC(void);

// ov65_0221BFEC - Assembly: asm/overlay_65.s
void ov65_0221BFEC(void);

// ov65_0221C08C - Assembly: asm/overlay_65.s
void ov65_0221C08C(void);

// ov65_0221C1C4 - Assembly: asm/overlay_65.s
void ov65_0221C1C4(void);

// WirelessTradeSelectMon_Main - Assembly: asm/overlay_65.s
// Main loop for wireless trade select monster
void WirelessTradeSelectMon_Main(void *task);

// ov65_0221C3DC - Assembly: asm/overlay_65.s
void ov65_0221C3DC(void);

// ov65_0221C414 - Assembly: asm/overlay_65.s
void ov65_0221C414(void);

// ov65_0221C46C - Assembly: asm/overlay_65.s
void ov65_0221C46C(void);

// ov65_0221C5E0 - Assembly: asm/overlay_65.s
void ov65_0221C5E0(void);

// ov65_0221C9D8 - Assembly: asm/overlay_65.s
void ov65_0221C9D8(void);

// ov65_0221CA64 - Assembly: asm/overlay_65.s
void ov65_0221CA64(void);

// ov65_0221CADC - Assembly: asm/overlay_65.s
void ov65_0221CADC(void);

// ov65_0221CB5C - Assembly: asm/overlay_65.s
void ov65_0221CB5C(void);

// ov65_0221CC0C - Assembly: asm/overlay_65.s
void ov65_0221CC0C(void);

// ov65_0221CCB0 - Assembly: asm/overlay_65.s
void ov65_0221CCB0(void);

// ov65_0221CD0C - Assembly: asm/overlay_65.s
void ov65_0221CD0C(void);

// WirelessTradeSelectMon_Exit - Assembly: asm/overlay_65.s
// Cleanup for wireless trade select monster
void WirelessTradeSelectMon_Exit(UnkStruct_0221BF54 *structPtr);

// ov65_0221CE1C - Assembly: asm/overlay_65.s
void ov65_0221CE1C(void);

// ov65_0221CE98 - Assembly: asm/overlay_65.s
void ov65_0221CE98(void);

// ov65_0221CEB8 - Assembly: asm/overlay_65.s
void ov65_0221CEB8(void);

// ov65_0221D0EC - Assembly: asm/overlay_65.s
void ov65_0221D0EC(void);

// ov65_0221D1C8 - Assembly: asm/overlay_65.s
void ov65_0221D1C8(void);

// ov65_0221D204 - Assembly: asm/overlay_65.s
void ov65_0221D204(void);

// ov65_0221D25C - Assembly: asm/overlay_65.s
void ov65_0221D25C(void);

// ov65_0221D280 - Assembly: asm/overlay_65.s
void ov65_0221D280(void);

// ov65_0221D3B8 - Assembly: asm/overlay_65.s
void ov65_0221D3B8(void);

// ov65_0221D3E8 - Assembly: asm/overlay_65.s
void ov65_0221D3E8(void);

// ov65_0221D57C - Assembly: asm/overlay_65.s
void ov65_0221D57C(void);

// ov65_0221D5FC - Assembly: asm/overlay_65.s
void ov65_0221D5FC(void);

// ov65_0221D648 - Assembly: asm/overlay_65.s
void ov65_0221D648(void);

// ov65_0221D674 - Assembly: asm/overlay_65.s
void ov65_0221D674(void);

// ov65_0221D8C4 - Assembly: asm/overlay_65.s
void ov65_0221D8C4(void);

// ov65_0221D930 - Assembly: asm/overlay_65.s
void ov65_0221D930(void);

// ov65_0221DBF4 - Assembly: asm/overlay_65.s
void ov65_0221DBF4(void);

// ov65_0221DC34 - Assembly: asm/overlay_65.s
void ov65_0221DC34(void);

// ov65_0221DCBC - Assembly: asm/overlay_65.s
void ov65_0221DCBC(void);

// ov65_0221DCFC - Assembly: asm/overlay_65.s
void ov65_0221DCFC(void);

// ov65_0221DD34 - Assembly: asm/overlay_65.s
void ov65_0221DD34(void);

// ov65_0221DDC0 - Assembly: asm/overlay_65.s
void ov65_0221DDC0(void);

// ov65_0221DE10 - Assembly: asm/overlay_65.s
void ov65_0221DE10(void);

// ov65_0221DE24 - Assembly: asm/overlay_65.s
void ov65_0221DE24(void);

// ov65_0221DE58 - Assembly: asm/overlay_65.s
void ov65_0221DE58(void);

// ov65_0221DE64 - Assembly: asm/overlay_65.s
void ov65_0221DE64(void);

// ov65_0221DE8C - Assembly: asm/overlay_65.s
void ov65_0221DE8C(void);

// ov65_0221DEA0 - Assembly: asm/overlay_65.s
void ov65_0221DEA0(void);

// ov65_0221DF0C - Assembly: asm/overlay_65.s
void ov65_0221DF0C(void);

// ov65_0221DF1C - Assembly: asm/overlay_65.s
void ov65_0221DF1C(void);

// ov65_0221DFB8 - Assembly: asm/overlay_65.s
void ov65_0221DFB8(void);

// ov65_0221E050 - Assembly: asm/overlay_65.s
void ov65_0221E050(void);

// ov65_0221E06C - Assembly: asm/overlay_65.s
void ov65_0221E06C(void);

// ov65_0221E144 - Assembly: asm/overlay_65.s
void ov65_0221E144(void);

// ov65_0221E194 - Assembly: asm/overlay_65.s
void ov65_0221E194(void);

// ov65_0221E270 - Assembly: asm/overlay_65.s
void ov65_0221E270(void);

// ov65_0221E2C0 - Assembly: asm/overlay_65.s
void ov65_0221E2C0(void);

// ov65_0221E330 - Assembly: asm/overlay_65.s
void ov65_0221E330(void);

// ov65_0221E354 - Assembly: asm/overlay_65.s
void ov65_0221E354(void);

// ov65_0221E3BC - Assembly: asm/overlay_65.s
void ov65_0221E3BC(void);

// ov65_0221E474 - Assembly: asm/overlay_65.s
void ov65_0221E474(void);

// ov65_0221E558 - Assembly: asm/overlay_65.s
void ov65_0221E558(void);

// ov65_0221E600 - Assembly: asm/overlay_65.s
void ov65_0221E600(void);

// ov65_0221E684 - Assembly: asm/overlay_65.s
void ov65_0221E684(void);

// ov65_0221E72C - Assembly: asm/overlay_65.s
void ov65_0221E72C(void);

// ov65_0221E740 - Assembly: asm/overlay_65.s
void ov65_0221E740(void);

// ov65_0221E858 - Assembly: asm/overlay_65.s
void ov65_0221E858(void);

// ov65_0221E8EC - Assembly: asm/overlay_65.s
void ov65_0221E8EC(void);

// ov65_0221E928 - Assembly: asm/overlay_65.s
void ov65_0221E928(void);

// ov65_0221E9A8 - Assembly: asm/overlay_65.s
void ov65_0221E9A8(void);

// ov65_0221EA74 - Assembly: asm/overlay_65.s
void ov65_0221EA74(void);

// ov65_0221EB9C - Assembly: asm/overlay_65.s
void ov65_0221EB9C(void);

// ov65_0221EBF8 - Assembly: asm/overlay_65.s
void ov65_0221EBF8(void);

// ov65_0221EC34 - Assembly: asm/overlay_65.s
void ov65_0221EC34(void);

// ov65_0221ED80 - Assembly: asm/overlay_65.s
void ov65_0221ED80(void);

// ov65_0221ED94 - Assembly: asm/overlay_65.s
void ov65_0221ED94(void);

// ov65_0221EE18 - Assembly: asm/overlay_65.s
void ov65_0221EE18(void);

// ov65_0221EF0C - Assembly: asm/overlay_65.s
void ov65_0221EF0C(void);

// ov65_0221F028 - Assembly: asm/overlay_65.s
void ov65_0221F028(void);

// ov65_0221F0C4 - Assembly: asm/overlay_65.s
void ov65_0221F0C4(void);

// ov65_0221F0D8 - Assembly: asm/overlay_65.s
void ov65_0221F0D8(void);

// ov65_0221F120 - Assembly: asm/overlay_65.s
void ov65_0221F120(void);

// ov65_0221F258 - Assembly: asm/overlay_65.s
void ov65_0221F258(void);

// ov65_0221F2A8 - Assembly: asm/overlay_65.s
void ov65_0221F2A8(void);

// ov65_0221F354 - Assembly: asm/overlay_65.s
void ov65_0221F354(void);

// ov65_0221F3B0 - Assembly: asm/overlay_65.s
void ov65_0221F3B0(void);

// ov65_0221F3F4 - Assembly: asm/overlay_65.s
void ov65_0221F3F4(void);

// ov65_0221F4B0 - Assembly: asm/overlay_65.s
void ov65_0221F4B0(void);

// ov65_0221F4D4 - Assembly: asm/overlay_65.s
void ov65_0221F4D4(void);

// ov65_0221F5A0 - Assembly: asm/overlay_65.s
void ov65_0221F5A0(void);

// ov65_0221F714 - Assembly: asm/overlay_65.s
void ov65_0221F714(void);

// ov65_0221F748 - Assembly: asm/overlay_65.s
void ov65_0221F748(void);

// ov65_0221F760 - Assembly: asm/overlay_65.s
void ov65_0221F760(void);

// ov65_0221F780 - Assembly: asm/overlay_65.s
void ov65_0221F780(void);

// ov65_0221F79C - Assembly: asm/overlay_65.s
void ov65_0221F79C(void);

// ov65_0221F7E0 - Assembly: asm/overlay_65.s
void ov65_0221F7E0(void);

// ov65_0221F850 - Assembly: asm/overlay_65.s
void ov65_0221F850(void);

// ov65_0221F864 - Assembly: asm/overlay_65.s
void ov65_0221F864(void);

// ov65_0221F890 - Assembly: asm/overlay_65.s
void ov65_0221F890(void);

// ov65_0221F8B4 - Assembly: asm/overlay_65.s
void ov65_0221F8B4(void);

// ov65_0221F8D0 - Assembly: asm/overlay_65.s
void ov65_0221F8D0(void);

// ov65_0221FAE0 - Assembly: asm/overlay_65.s
void ov65_0221FAE0(void);

// ov65_0221FB4C - Assembly: asm/overlay_65.s
void ov65_0221FB4C(void);

// ov65_0221FB90 - Assembly: asm/overlay_65.s
void ov65_0221FB90(void);

// ov65_0221FC08 - Assembly: asm/overlay_65.s
void ov65_0221FC08(void);

// ov65_0221FC54 - Assembly: asm/overlay_65.s
void ov65_0221FC54(void);

// ov65_0221FCA0 - Assembly: asm/overlay_65.s
void ov65_0221FCA0(void);

// ov65_0221FD20 - Assembly: asm/overlay_65.s
void ov65_0221FD20(void);

#endif // POKEHEARTGOLD_OVERLAY_65_H
