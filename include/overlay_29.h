#ifndef POKEHEARTGOLD_OVERLAY_29_H
#define POKEHEARTGOLD_OVERLAY_29_H

#include <global.h>

// Type definitions
typedef struct UnkStruct_0225D520 UnkStruct_0225D520;
typedef struct UnkStruct_0225E1AC UnkStruct_0225E1AC;

// Unknown structure at 0x0225D520
struct UnkStruct_0225D520 {
    void *field_0x0;          // 0x00 - pointer
    u32 field_0x4;            // 0x04 - parameter from r2
    u32 field_0x8;            // 0x08 - parameter from r3
    u32 field_0xc;            // 0x0c - parameter r5
    u32 field_0x10;           // 0x10 - mvn result (0xFFFFFFFF)
    u32 field_0x14;           // 0x14 - sysTask pointer
    u32 field_0x18;           // 0x18 - NARC id
    u8 field_0x1c;           // 0x1c - selection index
    u8 field_0x1d;           // 0x1d - padding
    u8 field_0x1e;           // 0x1e - padding
    u8 field_0x1f;           // 0x1f - padding
    u32 field_0x20;          // 0x20 - grid input handler
    void *field_0x24;        // 0x24 - g2d renderer
    void *field_0x28;        // 0x28 - sprite list
    void *field_0x2c;        // 0x2c - sprite resources array
    void *field_0x30;        // 0x30 - gfx resource pointers
    void *field_0x34;        // 0x34 - more gfx resources
    void *field_0x38;        // 0x38 - more gfx resources
    void *field_0x3c;        // 0x3c - more gfx resources
    void *field_0x40;        // 0x40 - more gfx resources
    u32 field_0x44;          // 0x44 - selection value
    u32 field_0x48;          // 0x48 - max selection
    u32 field_0x4c;          // 0x4c - current value
    u32 field_0x50;          // 0x50 - max value
    u32 field_0x54;          // 0x54 - some counter
    u8 field_0x58;           // 0x58 - state flags
    u8 field_0x59;           // 0x59 - padding
    u8 field_0x5a;           // 0x5a - padding
    u8 field_0x5b;           // 0x5b - padding
    u32 field_0x5c;           // 0x5c - sprite pointers array
    u32 field_0x60;          // 0x60 - sprite pointers array
    u32 field_0x64;          // 0x64 - sprite pointers array
    u32 field_0x68;          // 0x68 - sprite pointers array
    u32 field_0x6c;          // 0x6c - sprite pointers array
    u32 field_0x70;          // 0x70 - sprite pointers array
    u32 field_0x74;          // 0x74 - sprite pointers array
    u32 field_0x78;          // 0x78 - sprite pointers array
    u32 field_0x7c;          // 0x7c - sprite pointers array
    u32 field_0x80;          // 0x80 - sprite pointers array
    u32 field_0x84;          // 0x84 - sprite pointers array
    u32 field_0x88;          // 0x88 - sprite pointers array
    u32 field_0x8c;          // 0x8c - sprite pointers array
    u32 field_0x90;          // 0x90 - sprite pointers array
    u32 field_0x94;          // 0x94 - sprite pointers array
    u32 field_0x98;          // 0x98 - sprite pointers array
    u32 field_0x9c;          // 0x9c - sprite pointers array
    u32 field_0xa0;          // 0xa0 - sprite pointers array
    u32 field_0xa4;          // 0xa4 - sprite pointers array
    u32 field_0xa8;          // 0xa8 - sprite pointers array
    u32 field_0xac;          // 0xac - sprite pointers array
    u32 field_0xb0;          // 0xb0 - sprite pointers array
    u32 field_0xb4;          // 0xb4 - sprite pointers array
    u32 field_0xb8;          // 0xb8 - sprite pointers array
    u32 field_0xbc;          // 0xbc - sprite pointers array
    u32 field_0xc0;          // 0xc0 - sprite pointers array
    u32 field_0xc4;          // 0xc4 - sprite pointers array
    u32 field_0xc8;          // 0xc8 - sprite pointers array
    u32 field_0xcc;          // 0xcc - sprite pointers array
    u32 field_0xd0;          // 0xd0 - sprite pointers array
    u32 field_0xd4;          // 0xd4 - sprite pointers array
    u32 field_0xd8;          // 0xd8 - sprite pointers array
    u32 field_0xdc;          // 0xdc - sprite pointers array
    u32 field_0xe0;          // 0xe0 - sprite pointers array
    u32 field_0xe4;          // 0xe4 - sprite pointers array
    u32 field_0xe8;          // 0xe8 - sprite pointers array
    u32 field_0xec;          // 0xec - sprite pointers array
    u32 field_0xf0;          // 0xf0 - sprite pointers array
    u32 field_0xf4;          // 0xf4 - sprite pointers array
    u32 field_0xf8;          // 0xf8 - sprite pointers array
    u32 field_0xfc;          // 0xfc - sprite pointers array
    u32 field_0x100;         // 0x100 - sprite pointers array
    u32 field_0x104;         // 0x104 - sprite pointers array
    u32 field_0x108;         // 0x108 - sprite pointers array
    u32 field_0x10c;         // 0x10c - sprite pointers array
    u32 field_0x110;         // 0x110 - sprite pointers array
    u32 field_0x114;         // 0x114 - sprite pointers array
    u32 field_0x118;         // 0x118 - sprite pointers array
    u32 field_0x11c;         // 0x11c - sprite pointers array
    u32 field_0x120;         // 0x120 - sprite pointers array
    u32 field_0x124;         // 0x124 - sprite pointers array
    u32 field_0x128;         // 0x128 - sprite pointers array
    u32 field_0x12c;         // 0x12c - sprite pointers array
    u32 field_0x130;         // 0x130 - sprite pointers array
    u32 field_0x134;         // 0x134 - sprite pointers array
    u32 field_0x138;         // 0x138 - sprite pointers array
    u32 field_0x13c;         // 0x13c - sprite pointers array
    u32 field_0x140;         // 0x140 - sprite pointers array
    u32 field_0x144;         // 0x144 - sprite pointers array
    u32 field_0x148;         // 0x148 - sprite pointers array
    u32 field_0x14c;         // 0x14c - sprite pointers array
    u32 field_0x150;         // 0x150 - sprite pointers array
    u32 field_0x154;         // 0x154 - sprite pointers array
    u32 field_0x158;         // 0x158 - sprite pointers array
    u32 field_0x15c;         // 0x15c - sprite pointers array
    u32 field_0x160;         // 0x160 - sprite pointers array
    u32 field_0x164;         // 0x164 - sprite pointers array
    u32 field_0x168;         // 0x168 - sprite pointers array
    u32 field_0x16c;         // 0x16c - sprite pointers array
    u32 field_0x170;         // 0x170 - sprite pointers array
    u32 field_0x174;         // 0x174 - sprite pointers array
    u32 field_0x178;         // 0x178 - sprite pointers array
    u32 field_0x17c;         // 0x17c - sprite pointers array
    u32 field_0x180;         // 0x180 - sprite pointers array
    u32 field_0x184;         // 0x184 - sprite pointers array
    u32 field_0x188;         // 0x188 - sprite pointers array
    u32 field_0x18c;         // 0x18c - sprite pointers array
    u32 field_0x190;         // 0x190 - sprite pointers array
    u32 field_0x194;         // 0x194 - sprite pointers array
    u32 field_0x198;         // 0x198 - sprite pointers array
    u32 field_0x19c;         // 0x19c - sprite pointers array
    u32 field_0x1a0;         // 0x1a0 - sprite pointers array
    u32 field_0x1a4;         // 0x1a4 - sprite pointers array
    u32 field_0x1a8;         // 0x1a8 - sprite pointers array
    u32 field_0x1ac;         // 0x1ac - sprite pointers array
    u32 field_0x1b0;         // 0x1b0 - sprite pointers array
    u32 field_0x1b4;         // 0x1b4 - sprite pointers array
    u32 field_0x1b8;         // 0x1b8 - sprite pointers array
    u32 field_0x1bc;         // 0x1bc - sprite pointers array
    u32 field_0x1c0;         // 0x1c0 - sprite pointers array
    u32 field_0x1c4;         // 0x1c4 - sprite pointers array
    u32 field_0x1c8;         // 0x1c8 - sprite pointers array
    u32 field_0x1cc;         // 0x1cc - sprite pointers array
    u32 field_0x1d0;         // 0x1d0 - sprite pointers array
    u32 field_0x1d4;         // 0x1d4 - sprite pointers array
    u32 field_0x1d8;         // 0x1d8 - sprite pointers array
    u32 field_0x1dc;         // 0x1dc - sprite pointers array
    u32 field_0x1e0;         // 0x1e0 - sprite pointers array
    u32 field_0x1e4;         // 0x1e4 - sprite pointers array
    u32 field_0x1e8;         // 0x1e8 - sprite pointers array
    u32 field_0x1ec;         // 0x1ec - sprite pointers array
    u32 field_0x1f0;         // 0x1f0 - sprite pointers array
    u32 field_0x1f4;         // 0x1f4 - sprite pointers array
    u32 field_0x1f8;         // 0x1f8 - sprite pointers array
    u32 field_0x1fc;         // 0x1fc - sprite pointers array
    u32 field_0x200;         // 0x200 - sprite pointers array
    u32 field_0x204;         // 0x204 - sprite pointers array
    u32 field_0x208;         // 0x208 - sprite pointers array
    u32 field_0x20c;         // 0x20c - sprite pointers array
    u32 field_0x210;         // 0x210 - sprite pointers array
    u32 field_0x214;         // 0x214 - sprite pointers array
    u32 field_0x218;         // 0x218 - sprite pointers array
    u32 field_0x21c;         // 0x21c - sprite pointers array
    u32 field_0x220;         // 0x220 - sprite pointers array
    u32 field_0x224;         // 0x224 - sprite pointers array
    u32 field_0x228;         // 0x228 - sprite pointers array
    u32 field_0x22c;         // 0x22c - sprite pointers array
    u32 field_0x230;         // 0x230 - sprite pointers array
    u32 field_0x234;         // 0x234 - sprite pointers array
    u32 field_0x238;         // 0x238 - sprite pointers array
    u32 field_0x23c;         // 0x23c - sprite pointers array
    u32 field_0x240;         // 0x240 - sprite pointers array
    u32 field_0x244;         // 0x244 - sprite pointers array
    u32 field_0x248;         // 0x248 - sprite pointers array
    u32 field_0x24c;         // 0x24c - sprite pointers array
    u32 field_0x250;         // 0x250 - sprite pointers array
    u32 field_0x254;         // 0x254 - sprite pointers array
    u32 field_0x258;         // 0x258 - sprite pointers array
    u32 field_0x25c;         // 0x25c - sprite pointers array
    u32 field_0x260;         // 0x260 - sprite pointers array
    u32 field_0x264;         // 0x264 - sprite pointers array
    u32 field_0x268;         // 0x268 - sprite pointers array
    u32 field_0x26c;         // 0x26c - sprite pointers array
    u32 field_0x270;         // 0x270 - sprite pointers array
    u32 field_0x274;         // 0x274 - sprite pointers array
    u32 field_0x278;         // 0x278 - sprite pointers array
    u32 field_0x27c;         // 0x27c - sprite pointers array
    u32 field_0x280;         // 0x280 - sprite pointers array
    u32 field_0x284;         // 0x284 - sprite pointers array
    u32 field_0x288;         // 0x288 - sprite pointers array
    u32 field_0x28c;         // 0x28c - sprite pointers array
    u32 field_0x290;         // 0x290 - sprite pointers array
    u32 field_0x294;         // 0x294 - sprite pointers array
    u32 field_0x298;         // 0x298 - sprite pointers array
    u32 field_0x29c;         // 0x29c - sprite pointers array
    u32 field_0x2a0;         // 0x2a0 - sprite pointers array
    u32 field_0x2a4;         // 0x2a4 - sprite pointers array
    u32 field_0x2a8;         // 0x2a8 - sprite pointers array
    u32 field_0x2ac;         // 0x2ac - sprite pointers array
    u32 field_0x2b0;         // 0x2b0 - sprite pointers array
    u32 field_0x2b4;         // 0x2b4 - sprite pointers array
    u32 field_0x2b8;         // 0x2b8 - sprite pointers array
    u32 field_0x2bc;         // 0x2bc - sprite pointers array
    u32 field_0x2c0;         // 0x2c0 - sprite pointers array
    u32 field_0x2c4;         // 0x2c4 - sprite pointers array
    u32 field_0x2c8;         // 0x2c8 - sprite pointers array
    u32 field_0x2cc;         // 0x2cc - sprite pointers array
    u32 field_0x2d0;         // 0x2d0 - sprite pointers array
    u32 field_0x2d4;         // 0x2d4 - sprite pointers array
    u32 field_0x2d8;         // 0x2d8 - sprite pointers array
    u32 field_0x2dc;         // 0x2dc - sprite pointers array
    u32 field_0x2e0;         // 0x2e0 - sprite pointers array
    u32 field_0x2e4;         // 0x2e4 - sprite pointers array
    u32 field_0x2e8;         // 0x2e8 - sprite pointers array
    u32 field_0x2ec;         // 0x2ec - sprite pointers array
    u32 field_0x2f0;         // 0x2f0 - sprite pointers array
    u32 field_0x2f4;         // 0x2f4 - sprite pointers array
    u32 field_0x2f8;         // 0x2f8 - sprite pointers array
    u32 field_0x2fc;         // 0x2fc - sprite pointers array
    u32 field_0x300;         // 0x300 - sprite pointers array
    u32 field_0x304;         // 0x304 - sprite pointers array
    u32 field_0x308;         // 0x308 - sprite pointers array
    u32 field_0x30c;         // 0x30c - sprite pointers array
    u32 field_0x310;         // 0x310 - sprite pointers array
    u32 field_0x314;         // 0x314 - sprite pointers array
    u32 field_0x318;         // 0x318 - sprite pointers array
    u32 field_0x31c;         // 0x31c - sprite pointers array
    u32 field_0x320;         // 0x320 - sprite pointers array
    u32 field_0x324;         // 0x324 - sprite pointers array
    u32 field_0x328;         // 0x328 - sprite pointers array
    u32 field_0x32c;         // 0x32c - sprite pointers array
    u32 field_0x330;         // 0x330 - sprite pointers array
    u32 field_0x334;         // 0x334 - sprite pointers array
    u32 field_0x338;         // 0x338 - sprite pointers array
    u32 field_0x33c;         // 0x33c - sprite pointers array
    u32 field_0x340;         // 0x340 - sprite pointers array
    u32 field_0x344;         // 0x344 - sprite pointers array
    u32 field_0x348;         // 0x348 - sprite pointers array
    u32 field_0x34c;         // 0x34c - sprite pointers array
    u32 field_0x350;         // 0x350 - sprite pointers array
    u32 field_0x354;         // 0x354 - sprite pointers array
    u32 field_0x358;         // 0x358 - sprite pointers array
    u32 field_0x35c;         // 0x35c - sprite pointers array
    u32 field_0x360;         // 0x360 - sprite pointers array
    u32 field_0x364;         // 0x364 - sprite pointers array
    u32 field_0x368;         // 0x368 - sprite pointers array
    u32 field_0x36c;         // 0x36c - sprite pointers array
    u32 field_0x370;         // 0x370 - sprite pointers array
    u32 field_0x374;         // 0x374 - sprite pointers array
    u32 field_0x378;         // 0x378 - sprite pointers array
    u32 field_0x37c;         // 0x37c - sprite pointers array
    u32 field_0x380;         // 0x380 - sprite pointers array
    u32 field_0x384;         // 0x384 - sprite pointers array
    u32 field_0x388;         // 0x388 - sprite pointers array
    u32 field_0x38c;         // 0x38c - sprite pointers array
    u32 field_0x390;         // 0x390 - sprite pointers array
    u32 field_0x394;         // 0x394 - sprite pointers array
    u32 field_0x398;         // 0x398 - sprite pointers array
    u32 field_0x39c;         // 0x39c - sprite pointers array
    u32 field_0x3a0;         // 0x3a0 - sprite pointers array
    u32 field_0x3a4;         // 0x3a4 - sprite pointers array
    u32 field_0x3a8;         // 0x3a8 - sprite pointers array
    u32 field_0x3ac;         // 0x3ac - sprite pointers array
    u32 field_0x3b0;         // 0x3b0 - sprite pointers array
    u32 field_0x3b4;         // 0x3b4 - sprite pointers array
    u32 field_0x3b8;         // 0x3b8 - sprite pointers array
    u32 field_0x3bc;         // 0x3bc - sprite pointers array
    u32 field_0x3c0;         // 0x3c0 - sprite pointers array
    u32 field_0x3c4;         // 0x3c4 - sprite pointers array
    u32 field_0x3c8;         // 0x3c8 - sprite pointers array
    u32 field_0x3cc;         // 0x3cc - sprite pointers array
    u32 field_0x3d0;         // 0x3d0 - sprite pointers array
    u32 field_0x3d4;         // 0x3d4 - sprite pointers array
    u32 field_0x3d8;         // 0x3d8 - sprite pointers array
    u32 field_0x3dc;         // 0x3dc - sprite pointers array
    u32 field_0x3e0;         // 0x3e0 - sprite pointers array
    u32 field_0x3e4;         // 0x3e4 - sprite pointers array
    u32 field_0x3e8;         // 0x3e8 - sprite pointers array
    u32 field_0x3ec;         // 0x3ec - sprite pointers array
    u32 field_0x3f0;         // 0x3f0 - sprite pointers array
    u32 field_0x3f4;         // 0x3f4 - sprite pointers array
    u32 field_0x3f8;         // 0x3f8 - sprite pointers array
    u32 field_0x3fc;         // 0x3fc - sprite pointers array
};

// Data structure at 0x0225E1AC
struct UnkStruct_0225E1AC {
    u32 field_0x0;
    void *field_0x4;
    void *field_0x8;
    void *field_0xc;
    void *field_0x10;
    void *field_0x14;
    void *field_0x18;
};

// Function declarations
void *ov29_0225D520(void *param1, u32 param2, u32 param3);
void ov29_0225D5EC(void *param1, int param2);
int ov29_0225D61C(void);
void ov29_0225D620(void);
void ov29_0225D648(void *bgConfig);
void ov29_0225D6B4(void *bgHandle);
void ov29_0225D6C8(void *narcId, void *param2);
void ov29_0225D714(void *param1);
void ov29_0225D7D4(void *param1);
void ov29_0225D7F0(void *param1, void *param2);
void ov29_0225D828(void *param1);
void ov29_0225D840(void *param1);
void ov29_0225D864(void *param1);
void ov29_0225D880(void *param1, void *param2, void *param3, void *param4);
void ov29_0225D910(void *param1, void *param2, void *param3, void *param4);
void ov29_0225D970(void *param1, int param2, void *param3);
void ov29_0225D9C8(void *param1, void *param2);
void ov29_0225DB38(void *param1);
void ov29_0225DB7C(void *param1);
void ov29_0225DB9C(void *param1, int input);
void ov29_0225DBF0(void *param1);
void ov29_0225DC34(void *param1);
int ov29_0225DC44(void);
void ov29_0225DC48(void);
void ov29_0225DC50(void *param1);
void ov29_0225DC84(void *param1);
void ov29_0225DCD0(void *taskData, int input);
int ov29_0225DEB8(void *param1, int param2);
void ov29_0225DEF4(void *param1, int param2);
void ov29_0225DF18(void *param1);
int ov29_0225DF74(void *param1);
void ov29_0225E028(void *param1, int caseId, int param3, int param4);
void ov29_0225E078(void *param1, int param2, int param3, int param4);
void ov29_0225E0E0(void *param1);

// Data declarations
extern UnkStruct_0225E1AC ov29_0225E1AC;
extern const u32 ov29_0225E1E4[8];
extern const u32 ov29_0225E200[5];
extern const u32 ov29_0225E21C[1];
extern const u32 ov29_0225E220[1];
extern const u32 ov29_0225E224[1];
extern const u32 ov29_0225E228[1];
extern const u32 ov29_0225E22C[1];
extern const u32 ov29_0225E230[1];
extern const u32 ov29_0225E234[1];
extern const u32 ov29_0225E238[1];
extern const u32 ov29_0225E23C[1];
extern const u32 ov29_0225E240[1];
extern const u32 ov29_0225E244[1];
extern const u32 ov29_0225E248[2];
extern const u32 ov29_0225E280[4];

#endif // POKEHEARTGOLD_OVERLAY_29_H
