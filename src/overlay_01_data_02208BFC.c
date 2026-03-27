#include "overlay_01_data_02208BFC.h"

// Data table at ov01_02208BFC (0x02208BFC)
// Contains 24 u32 values representing some kind of IDs
const u32 ov01_02208BFC[24] = {
    0x14,  // [0]
    0x13,  // [1]
    0x11,  // [2]
    0x01,  // [3]
    0x10,  // [4]
    0x05,  // [5]
    0x16,  // [6]
    0x08,  // [7]
    0x09,  // [8]
    0x0A,  // [9]
    0x0B,  // [10]
    0x0C,  // [11]
    0x0D,  // [12]
    0x0F,  // [13]
    0x12,  // [14]
    0x00,  // [15]
    0x02,  // [16]
    0x03,  // [17]
    0x04,  // [18]
    0x0E,  // [19]
    0x06,  // [20]
    0x07,  // [21]
    0x15,  // [22]
    0x17   // [23]
};

// Function pointer table at ov01_02208C5C (0x02208C5C)
// Contains 24 entries, each with 3 u32 values:
// - u32 id
// - void *initFunc
// - void *mainFunc
// Entry 0x17 has NULL pointers (end marker)
const ov01_02208C5C_Entry ov01_02208C5C[24] = {
    { 0x00000000, (void *)0x021FD41C, (void *)0x021FD440 },
    { 0x00000001, (void *)0x021FDA14, (void *)0x021FDA30 },
    { 0x00000002, (void *)0x021FE200, (void *)0x021FE220 },
    { 0x00000003, (void *)0x02200858, (void *)0x02200874 },
    { 0x00000004, (void *)0x021FE780, (void *)0x021FE79C },
    { 0x00000005, (void *)0x021FEA0C, (void *)0x021FEA20 },
    { 0x00000006, (void *)0x021FEC38, (void *)0x021FEC54 },
    { 0x00000007, (void *)0x021FED9C, (void *)0x021FEDB8 },
    { 0x00000008, (void *)0x021FEEEC, (void *)0x021FEF08 },
    { 0x00000009, (void *)0x022001E4, (void *)0x022001F8 },
    { 0x0000000A, (void *)0x021FF464, (void *)0x021FF480 },
    { 0x0000000B, (void *)0x021FF6B0, (void *)0x021FF6CC },
    { 0x0000000C, (void *)0x021FF854, (void *)0x021FF870 },
    { 0x0000000D, (void *)0x021FFC0C, (void *)0x021FFC28 },
    { 0x0000000E, (void *)0x021FFECC, (void *)0x021FFEE8 },
    { 0x0000000F, (void *)0x02200040, (void *)0x0220005C },
    { 0x00000010, (void *)0x021FE590, (void *)0x021FE5A4 },
    { 0x00000011, (void *)0x022031C0, (void *)0x022031E8 },
    { 0x00000012, (void *)0x02203A18, (void *)0x02203A38 },
    { 0x00000013, (void *)0x02203E40, (void *)0x02203E64 },
    { 0x00000014, (void *)0x021FD1B8, (void *)0x021FD1CC },
    { 0x00000015, (void *)0x022006A8, (void *)0x022006C4 },
    { 0x00000016, (void *)0x022051EC, (void *)0x02205208 },
    { 0x00000017, NULL, NULL }
};
