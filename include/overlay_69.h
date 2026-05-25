#ifndef POKEHEARTGOLD_OVERLAY_69_H
#define POKEHEARTGOLD_OVERLAY_69_H

#include <global.h>

// Unknown structure used by overlay 69 (GeonetGlobe)
// Based on analysis of GeonetGlobe_Init at 0x021E5900
// Size: at least 0xC340 bytes based on field accesses
struct UnkStruct_021E5900 {
    u32 field_0x0;          // Heap ID (0x31)
    u32 field_0x4;          // WiFi history pointer
    u32 field_0x8;          // Options address
    u8 field_0xc;
    u8 field_0xd;
    u8 field_0xe;
    u8 field_0xf;
    u32 field_0x10;
    u32 field_0x14;
    u32 field_0x18;
    u32 field_0x1c;
    // +0xC010: BgConfig*
    // +0xC070: MessageFormat*
    // +0xC080: MessageFormat* (custom)
    // +0xC2DC: Camera*
    // +0xC324: PlayerCountry
    // +0xC328: PlayerRegion
    // +0xC334: NonJapaneseFlag
    // +0xC33C: Overlay data size
    u32 field_0xc010;
    u32 field_0xc070;
    u32 field_0xc080;
    u32 field_0xc2dc;
    u32 field_0xc324;
    u32 field_0xc328;
    u32 field_0xc334;
    u32 field_0xc33c;
};

// GeonetGlobe_Init - Assembly: asm/overlay_69.s
// Initializes the Geonet Globe overlay
// Parameters: structPtr - pointer to UnkStruct_021E5900
// Returns: int (1 on success)
int GeonetGlobe_Init(UnkStruct_021E5900 *structPtr);

// GeonetGlobe_Main - Assembly: asm/overlay_69.s
// Main loop with 19-case jump table (cases 0-18)
// Parameters: task - task pointer
void GeonetGlobe_Main(void *task);

// GeonetGlobe_Exit - Assembly: asm/overlay_69.s
// Cleanup function
// Parameters: structPtr - pointer to UnkStruct_021E5900
void GeonetGlobe_Exit(UnkStruct_021E5900 *structPtr);

// ov69_021E60F8 - Assembly: asm/overlay_69.s
void ov69_021E60F8(void);

// ov69_021E6118 - Assembly: asm/overlay_69.s
void ov69_021E6118(void);

// ov69_021E6138 - Assembly: asm/overlay_69.s
void ov69_021E6138(void);

// ov69_021E623C - Assembly: asm/overlay_69.s
void ov69_021E623C(void);

// ov69_021E62B0 - Assembly: asm/overlay_69.s
void ov69_021E62B0(void);

// ov69_021E6300 - Assembly: asm/overlay_69.s
void ov69_021E6300(void);

// ov69_021E6308 - Assembly: asm/overlay_69.s
void ov69_021E6308(void);

// ov69_021E645C - Assembly: asm/overlay_69.s
void ov69_021E645C(void);

// ov69_021E64CC - Assembly: asm/overlay_69.s
void ov69_021E64CC(void);

// ov69_021E67B8 - Assembly: asm/overlay_69.s
void ov69_021E67B8(void);

// ov69_021E6810 - Assembly: asm/overlay_69.s
void ov69_021E6810(void);

// ov69_021E68D8 - Assembly: asm/overlay_69.s
void ov69_021E68D8(void);

// ov69_021E68EC - Assembly: asm/overlay_69.s
void ov69_021E68EC(void);

// ov69_021E6994 - Assembly: asm/overlay_69.s
void ov69_021E6994(void);

// ov69_021E6A54 - Assembly: asm/overlay_69.s
void ov69_021E6A54(void);

// ov69_021E6A8C - Assembly: asm/overlay_69.s
void ov69_021E6A8C(void);

// ov69_021E6B5C - Assembly: asm/overlay_69.s
void ov69_021E6B5C(void);

// ov69_021E6C14 - Assembly: asm/overlay_69.s
void ov69_021E6C14(void);

// ov69_021E6C30 - Assembly: asm/overlay_69.s
void ov69_021E6C30(void);

// ov69_021E6D5C - Assembly: asm/overlay_69.s
void ov69_021E6D5C(void);

// ov69_021E6E88 - Assembly: asm/overlay_69.s
void ov69_021E6E88(void);

// ov69_021E6F48 - Assembly: asm/overlay_69.s
void ov69_021E6F48(void);

// ov69_021E6F8C - Assembly: asm/overlay_69.s
void ov69_021E6F8C(void);

// ov69_021E6FE8 - Assembly: asm/overlay_69.s
void ov69_021E6FE8(void);

// ov69_021E706C - Assembly: asm/overlay_69.s
void ov69_021E706C(void);

// ov69_021E70A8 - Assembly: asm/overlay_69.s
void ov69_021E70A8(void);

// ov69_021E7120 - Assembly: asm/overlay_69.s
void ov69_021E7120(void);

// ov69_021E7198 - Assembly: asm/overlay_69.s
void ov69_021E7198(void);

// ov69_021E737C - Assembly: asm/overlay_69.s
void ov69_021E737C(void);

// ov69_021E7408 - Assembly: asm/overlay_69.s
void ov69_021E7408(void);

// ov69_021E7520 - Assembly: asm/overlay_69.s
void ov69_021E7520(void);

// ov69_021E758C - Assembly: asm/overlay_69.s
void ov69_021E758C(void);

// ov69_021E75A0 - Assembly: asm/overlay_69.s
void ov69_021E75A0(void);

// ov69_021E75F8 - Assembly: asm/overlay_69.s
void ov69_021E75F8(void);

#endif // POKEHEARTGOLD_OVERLAY_69_H
