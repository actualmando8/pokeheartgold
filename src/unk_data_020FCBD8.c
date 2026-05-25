/*
 * unk_data_020FCBD8.c - Movement command data tables
 * 
 * Pure data file containing:
 * - Animation ID tables (_020FCBD8 through _020FCCC8)
 * - Movement command function tables (_020FCCF8 through _020FD198)
 * - Master lookup tables (_020FD198, _020FD1F4)
 * - gMovementCmdTable - Main movement command step table array
 */

#include "global.h"
#include "constants/sndseq.h"
#include "constants/species.h"
#include "constants/maps.h"
#include "constants/pokemon.h"
#include "constants/flags.h"
#include "constants/vars.h"
#include "constants/items.h"
#include "constants/std_script.h"
#include "constants/field_move_response.h"

/* Forward declarations */
extern void *gMovementCmdSteps_000;
extern void *gMovementCmdSteps_001;
extern void *gMovementCmdSteps_002;
extern void *gMovementCmdSteps_003;
extern void *gMovementCmdSteps_004;
extern void *gMovementCmdSteps_005;
extern void *gMovementCmdSteps_006;
extern void *gMovementCmdSteps_007;
extern void *gMovementCmdSteps_008;
extern void *gMovementCmdSteps_009;
extern void *gMovementCmdSteps_010;
extern void *gMovementCmdSteps_011;
extern void *gMovementCmdSteps_012;
extern void *gMovementCmdSteps_013;
extern void *gMovementCmdSteps_014;
extern void *gMovementCmdSteps_015;
extern void *gMovementCmdSteps_016;
extern void *gMovementCmdSteps_017;
extern void *gMovementCmdSteps_018;
extern void *gMovementCmdSteps_019;
extern void *gMovementCmdSteps_020;
extern void *gMovementCmdSteps_021;
extern void *gMovementCmdSteps_022;
extern void *gMovementCmdSteps_023;
extern void *gMovementCmdSteps_024;
extern void *gMovementCmdSteps_025;
extern void *gMovementCmdSteps_026;
extern void *gMovementCmdSteps_027;
extern void *gMovementCmdSteps_028;
extern void *gMovementCmdSteps_029;
extern void *gMovementCmdSteps_030;
extern void *gMovementCmdSteps_031;
extern void *gMovementCmdSteps_032;
extern void *gMovementCmdSteps_033;
extern void *gMovementCmdSteps_034;
extern void *gMovementCmdSteps_035;
extern void *gMovementCmdSteps_036;
extern void *gMovementCmdSteps_037;
extern void *gMovementCmdSteps_038;
extern void *gMovementCmdSteps_039;
extern void *gMovementCmdSteps_040;
extern void *gMovementCmdSteps_041;
extern void *gMovementCmdSteps_042;
extern void *gMovementCmdSteps_043;
extern void *gMovementCmdSteps_044;
extern void *gMovementCmdSteps_045;
extern void *gMovementCmdSteps_046;
extern void *gMovementCmdSteps_047;
extern void *gMovementCmdSteps_048;
extern void *gMovementCmdSteps_049;
extern void *gMovementCmdSteps_050;
extern void *gMovementCmdSteps_051;
extern void *gMovementCmdSteps_052;
extern void *gMovementCmdSteps_053;
extern void *gMovementCmdSteps_054;
extern void *gMovementCmdSteps_055;
extern void *gMovementCmdSteps_056;
extern void *gMovementCmdSteps_057;
extern void *gMovementCmdSteps_058;
extern void *gMovementCmdSteps_059;
extern void *gMovementCmdSteps_060;
extern void *gMovementCmdSteps_061;
extern void *gMovementCmdSteps_062;
extern void *gMovementCmdSteps_063;
extern void *gMovementCmdSteps_064;
extern void *gMovementCmdSteps_065;
extern void *gMovementCmdSteps_066;
extern void *gMovementCmdSteps_067;
extern void *gMovementCmdSteps_068;
extern void *gMovementCmdSteps_069;
extern void *gMovementCmdSteps_070;
extern void *gMovementCmdSteps_071;
extern void *gMovementCmdSteps_072;
extern void *gMovementCmdSteps_073;
extern void *gMovementCmdSteps_074;
extern void *gMovementCmdSteps_075;
extern void *gMovementCmdSteps_076;
extern void *gMovementCmdSteps_077;
extern void *gMovementCmdSteps_078;
extern void *gMovementCmdSteps_079;
extern void *gMovementCmdSteps_080;
extern void *gMovementCmdSteps_081;
extern void *gMovementCmdSteps_082;
extern void *gMovementCmdSteps_083;
extern void *gMovementCmdSteps_084;
extern void *gMovementCmdSteps_085;
extern void *gMovementCmdSteps_086;
extern void *gMovementCmdSteps_087;
extern void *gMovementCmdSteps_088;
extern void *gMovementCmdSteps_089;
extern void *gMovementCmdSteps_090;
extern void *gMovementCmdSteps_091;
extern void *gMovementCmdSteps_092;
extern void *gMovementCmdSteps_093;
extern void *gMovementCmdSteps_094;
extern void *gMovementCmdSteps_095;
extern void *gMovementCmdSteps_096;
extern void *gMovementCmdSteps_097;
extern void *gMovementCmdSteps_098;
extern void *gMovementCmdSteps_099;
extern void *gMovementCmdSteps_100;
extern void *gMovementCmdSteps_101;
extern void *gMovementCmdSteps_102;
extern void *gMovementCmdSteps_103;
extern void *gMovementCmdSteps_104;
extern void *gMovementCmdSteps_105;
extern void *gMovementCmdSteps_106;
extern void *gMovementCmdSteps_107;
extern void *gMovementCmdSteps_108;
extern void *gMovementCmdSteps_109;
extern void *gMovementCmdSteps_110;
extern void *gMovementCmdSteps_111;
extern void *gMovementCmdSteps_112;

/* Animation ID tables */
static const u32 unk_020FCBD8[] = {0x24, 0x25, 0x26, 0x27};
static const u32 unk_020FCBE8[] = {0x34, 0x35, 0x36, 0x37};
static const u32 unk_020FCBF8[] = {0x5E, 0x5F, 0x5E, 0x5F};
static const u32 unk_020FCC08[] = {0x28, 0x29, 0x2A, 0x2B};
static const u32 unk_020FCC18[] = {0x5C, 0x5D, 0x5C, 0x5D};
static const u32 unk_020FCC28[] = {0x20, 0x21, 0x22, 0x23};
static const u32 unk_020FCC38[] = {0x4C, 0x4D, 0x4E, 0x4F};
static const u32 unk_020FCC48[] = {0x54, 0x55, 0x56, 0x57};
static const u32 unk_020FCC58[] = {0x30, 0x31, 0x32, 0x33};
static const u32 unk_020FCC68[] = {0x58, 0x59, 0x5A, 0x5B};
static const u32 unk_020FCC78[] = {0x1C, 0x1D, 0x1E, 0x1F};
static const u32 unk_020FCC88[] = {0x44, 0x45, 0x46, 0x47};
static const u32 unk_020FCC98[] = {0x48, 0x49, 0x4A, 0x4B};
static const u32 unk_020FCCB8[] = {0x2C, 0x2D, 0x2E, 0x2F};
static const u32 unk_020FCCA8[] = {0x40, 0x41, 0x42, 0x43};
static const u32 unk_020FCCC8[] = {0x50, 0x51, 0x52, 0x53};
static const u32 unk_020FCCD8[] = {0x38, 0x39, 0x3A, 0x3B};
static const u32 unk_020FCCE8[] = {0x14, 0x15, 0x16, 0x17};
static const u32 unk_020FCCF8[] = {0x18, 0x19, 0x1A, 0x1B};
static const u32 unk_020FCD08[] = {0x0C, 0x0D, 0x0E, 0x0F};
static const u32 unk_020FCD18[] = {0x10, 0x11, 0x12, 0x13};
static const u32 unk_020FCD28[] = {0x04, 0x05, 0x06, 0x07};
static const u32 unk_020FCD38[] = {0x00, 0x01, 0x02, 0x03};

/* Movement command function tables - each has: count, func1, func2, func3, func4 */
typedef struct {
    u32 count;
    void *func1;
    void *func2;
    void *func3;
    void *func4;
} MovementCmdFuncTable;

extern void *sub_0205FCB4, *sub_0205FCB8, *sub_0205FCBC, *sub_0205FCC0;
extern void *sub_02061B6C, *sub_02061B7C, *sub_02061B8C, *sub_02061B9C, *sub_02061BAC;
extern void *sub_02061BCC, *sub_02061BDC, *sub_02061BEC, *sub_02061BFC, *sub_02061C0C;
extern void *sub_02061C1C, *sub_02061D80, *sub_02061D90, *sub_02061DA0, *sub_02061DB0;
extern void *sub_02061DC0, *sub_02061DD0, *sub_02061BBC, *sub_02061B4C, *sub_02061B5C;
extern void *sub_02061B3C, *sub_020613C0, *sub_020613F8, *sub_020612D8, *sub_02061338;
extern void *sub_0206139C, *sub_020612E4, *sub_0206197C, *sub_0206199C, *sub_02061844;
extern void *sub_02061850, *sub_020612CC, *sub_020612C0, *sub_02065FFC, *sub_02066024;
extern void *sub_02066054, *sub_02066058, *sub_020613B0, *sub_020613A0, *sub_020612B4;
extern void *sub_020658D4, *sub_02065968, *sub_02065998;
extern void *sub_0206630C, *sub_0206633C, *sub_02066360, *sub_02066370;

/* Animation lookup tables */
static const void *unk_020FD198[] = {
    unk_020FCCF8, unk_020FCD08, unk_020FCD18, unk_020FCCE8,
    unk_020FCCA8, unk_020FCCB8, unk_020FCC98, unk_020FCC78,
    unk_020FCC28, unk_020FCBD8, unk_020FCC08, unk_020FCD28,
    unk_020FCC58, unk_020FCBE8, unk_020FCC88, unk_020FCC38,
    unk_020FCCD8, unk_020FCC48, unk_020FCC68, unk_020FCC18,
    unk_020FCBF8, unk_020FCCC8, 0
};

static const void *unk_020FD1F4[] = {
    unk_020FCEC8, unk_020FCEDC, unk_020FD184, unk_020FD170,
    unk_020FD15C, unk_020FCF2C, unk_020FD134, unk_020FD120,
    unk_020FCF68, unk_020FCFB8, unk_020FD0E4, unk_020FD0D0,
    unk_020FD0BC, unk_020FD058, unk_020FD0F8, unk_020FD10C,
    unk_020FD044, unk_020FD030, unk_020FD01C, unk_020FCDB0,
    unk_020FCFE0, unk_020FCD88, unk_020FCD4C, unk_020FCFA4,
    unk_020FCF90, unk_020FCF7C, unk_020FCDD8, unk_020FCE00,
    unk_020FCE14, unk_020FCE28, unk_020FCE3C, unk_020FCF04,
    unk_020FCE50, unk_020FCE64, unk_020FCE78, unk_020FCE8C,
    unk_020FCEA0, unk_020FCEB4, unk_020FCEF0, unk_020FCF18,
    unk_020FCF40, unk_020FCF54, unk_020FCFCC, unk_020FD008,
    unk_020FD06C, unk_020FD080, unk_020FD094, 0,
    unk_020FD0A8, unk_020FCFF4, unk_020FD148, unk_020FCDC4,
    unk_020FCD38, unk_020FCD9C, unk_020FCD60, unk_020FCD74,
    unk_020FCDEC
};

/* Master movement command table */
void *gMovementCmdTable[] = {
    gMovementCmdSteps_000, gMovementCmdSteps_001, gMovementCmdSteps_002, gMovementCmdSteps_003,
    gMovementCmdSteps_004, gMovementCmdSteps_005, gMovementCmdSteps_006, gMovementCmdSteps_007,
    gMovementCmdSteps_008, gMovementCmdSteps_009, gMovementCmdSteps_010, gMovementCmdSteps_011,
    gMovementCmdSteps_012, gMovementCmdSteps_013, gMovementCmdSteps_014, gMovementCmdSteps_015,
    gMovementCmdSteps_016, gMovementCmdSteps_017, gMovementCmdSteps_018, gMovementCmdSteps_019,
    gMovementCmdSteps_020, gMovementCmdSteps_021, gMovementCmdSteps_022, gMovementCmdSteps_023,
    gMovementCmdSteps_024, gMovementCmdSteps_025, gMovementCmdSteps_026, gMovementCmdSteps_027,
    gMovementCmdSteps_028, gMovementCmdSteps_029, gMovementCmdSteps_030, gMovementCmdSteps_031,
    gMovementCmdSteps_032, gMovementCmdSteps_033, gMovementCmdSteps_034, gMovementCmdSteps_035,
    gMovementCmdSteps_036, gMovementCmdSteps_037, gMovementCmdSteps_038, gMovementCmdSteps_039,
    gMovementCmdSteps_040, gMovementCmdSteps_041, gMovementCmdSteps_042, gMovementCmdSteps_043,
    gMovementCmdSteps_044, gMovementCmdSteps_045, gMovementCmdSteps_046, gMovementCmdSteps_047,
    gMovementCmdSteps_048, gMovementCmdSteps_049, gMovementCmdSteps_050, gMovementCmdSteps_051,
    gMovementCmdSteps_052, gMovementCmdSteps_053, gMovementCmdSteps_054, gMovementCmdSteps_055,
    gMovementCmdSteps_056, gMovementCmdSteps_057, gMovementCmdSteps_058, gMovementCmdSteps_059,
    gMovementCmdSteps_060, gMovementCmdSteps_061, gMovementCmdSteps_062, gMovementCmdSteps_063,
    gMovementCmdSteps_064, gMovementCmdSteps_065, gMovementCmdSteps_066, gMovementCmdSteps_067,
    gMovementCmdSteps_068, gMovementCmdSteps_069, gMovementCmdSteps_070, gMovementCmdSteps_071,
    gMovementCmdSteps_072, gMovementCmdSteps_073, gMovementCmdSteps_074, gMovementCmdSteps_075,
    gMovementCmdSteps_076, gMovementCmdSteps_077, gMovementCmdSteps_078, gMovementCmdSteps_079,
    gMovementCmdSteps_080, gMovementCmdSteps_081, gMovementCmdSteps_082, gMovementCmdSteps_083,
    gMovementCmdSteps_084, gMovementCmdSteps_085, gMovementCmdSteps_086, gMovementCmdSteps_087,
    gMovementCmdSteps_088, gMovementCmdSteps_089, gMovementCmdSteps_090, gMovementCmdSteps_091,
    gMovementCmdSteps_092, gMovementCmdSteps_093, gMovementCmdSteps_094, gMovementCmdSteps_095,
    gMovementCmdSteps_096, gMovementCmdSteps_097, gMovementCmdSteps_098, gMovementCmdSteps_099,
    gMovementCmdSteps_100, gMovementCmdSteps_101, gMovementCmdSteps_102, gMovementCmdSteps_103,
    gMovementCmdSteps_104, gMovementCmdSteps_105, gMovementCmdSteps_106, gMovementCmdSteps_107,
    gMovementCmdSteps_108, gMovementCmdSteps_109, gMovementCmdSteps_110, gMovementCmdSteps_111,
    gMovementCmdSteps_112
};
