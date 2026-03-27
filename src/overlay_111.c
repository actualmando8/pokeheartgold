// BugContestSwapMon - Assembly: asm/overlay_111.s
// Bug Catching Contest Pokemon Swap screen

#include "overlay_111.h"

// Data tables
const u32 ov111_021E6B7C[1] = { 0x00000001 };
const u32 ov111_021E6B8C[1] = { 0x00000000 };
const u32 ov111_021E6BA0[4] = { 0x00000003, 0x00000002, 0x00000002, 0x00000002 };
const u32 ov111_021E6BB8[2] = { 0x00000000, 0x00000080 };
const u32 ov111_021E6BD8[2] = { 0x00000002, 0x00000000 };
const u32 ov111_021E6C00[4] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000 };
const u32 ov111_021E6C34[3] = { 0x00000000, 0x00010000, 0x00000000 };
const u32 ov111_021E6C68[2] = { 0xFFFEFFFE, 0x000F0208 };
const u32 ov111_021E6CA4[3] = { 0x00000000, 0x00080000, 0x00000000 };

// BugContestSwapMon_Init - Initialization
int BugContestSwapMon_Init(void *param1, int param2) {
    // 3-case state machine: 0=init, 1=fade in, 2=check done
    (void)param1;
    (void)param2;
    return 0;
}

// BugContestSwapMon_Exit - Cleanup
int BugContestSwapMon_Exit(void *param1) {
    (void)param1;
    return 0;
}

// ov111_021E59E4 - Main task handler
void ov111_021E59E4(void *param1) {
    (void)param1;
}

// ov111_021E5AA0 - State handler
void ov111_021E5AA0(void *param1) {
    (void)param1;
}

// ov111_021E5BE4 - Setup graphics
void ov111_021E5BE4(void *param1) {
    (void)param1;
}

// ov111_021E5C54 - BG setup
void ov111_021E5C54(void *param1) {
    (void)param1;
}

// ov111_021E5C94 - Display mode
void ov111_021E5C94(void *param1) {
    (void)param1;
}

// ov111_021E5CB4 - Setup BG template
void ov111_021E5CB4(void *param1) {
    (void)param1;
}

// ov111_021E5CD4 - Configure display
void ov111_021E5CD4(void *param1) {
    (void)param1;
}

// ov111_021E5D08 - Add text
void ov111_021E5D08(void *param1, int param2) {
    (void)param1;
    (void)param2;
}

// ov111_021E5D2C - Text rendering
void ov111_021E5D2C(void *param1) {
    (void)param1;
}

// ov111_021E5DF0 - Message callback
void ov111_021E5DF0(void *param1) {
    (void)param1;
}

// ov111_021E5E34 - Full initialization
void ov111_021E5E34(void *param1) {
    (void)param1;
}

// ov111_021E5F04 - Cleanup
void ov111_021E5F04(void *param1) {
    (void)param1;
}

// ov111_021E5F50 - Screen setup
void ov111_021E5F50(void *param1) {
    (void)param1;
}

// ov111_021E5FD4 - BG cleanup
void ov111_021E5FD4(void *param1) {
    (void)param1;
}

// ov111_021E6000 - Load graphics
void ov111_021E6000(void *param1) {
    (void)param1;
}

// ov111_021E60D4 - Initialize sprites
void ov111_021E60D4(void *param1) {
    (void)param1;
}

// ov111_021E6170 - Cleanup helper
void ov111_021E6170(void *param1) {
    (void)param1;
}

// ov111_021E6180 - Load BG resources
void ov111_021E6180(void *param1) {
    (void)param1;
}

// ov111_021E6268 - Create sprite
void ov111_021E6268(void *param1) {
    (void)param1;
}

// ov111_021E62E0 - Sprite setup
void ov111_021E62E0(void *param1) {
    (void)param1;
}

// ov111_021E6330 - Draw sprite
void ov111_021E6330(void *param1, int param2) {
    (void)param1;
    (void)param2;
}

// ov111_021E6380 - Draw sprite variant
void ov111_021E6380(void *param1, int param2) {
    (void)param1;
    (void)param2;
}

// ov111_021E63D0 - Complex sprite draw
void ov111_021E63D0(void *param1, int param2) {
    (void)param1;
    (void)param2;
}

// ov111_021E64C8 - Multiple sprite setup
void ov111_021E64C8(void *param1) {
    (void)param1;
}

// ov111_021E65CC - Set pointer
void ov111_021E65CC(void *param1) {
    (void)param1;
}

// ov111_021E65D4 - Pointer update
void ov111_021E65D4(void *param1) {
    (void)param1;
}

// ov111_021E6684 - Get pointer
void ov111_021E6684(void *param1) {
    (void)param1;
}

// ov111_021E6694 - Pointer setup
void ov111_021E6694(void *param1) {
    (void)param1;
}

// ov111_021E66DC - Pokemon setup
void ov111_021E66DC(void *param1) {
    (void)param1;
}

// ov111_021E6710 - Pointer cleanup
void ov111_021E6710(void *param1) {
    (void)param1;
}

// ov111_021E6738 - Sprite draw helper
void ov111_021E6738(void *param1, int param2) {
    (void)param1;
    (void)param2;
}

// ov111_021E6770 - Text placement
void ov111_021E6770(void *param1, int param2) {
    (void)param1;
    (void)param2;
}

// ov111_021E6784 - Check pointer 1
void ov111_021E6784(void *param1) {
    (void)param1;
}

// ov111_021E67A4 - Check pointer 2
void ov111_021E67A4(void *param1) {
    (void)param1;
}

// ov111_021E67C4 - Get Pokemon data
void ov111_021E67C4(void *param1) {
    (void)param1;
}

// ov111_021E67EC - Setup Pokemon
void ov111_021E67EC(void *param1, int param2) {
    (void)param1;
    (void)param2;
}

// ov111_021E685C - Cleanup sprites
void ov111_021E685C(void *param1) {
    (void)param1;
}

// ov111_021E6888 - Check condition
void ov111_021E6888(void *param1) {
    (void)param1;
}

// ov111_021E68FC - Setup pointer
void ov111_021E68FC(void *param1) {
    (void)param1;
}

// ov111_021E6934 - Add sprite
void ov111_021E6934(void *param1) {
    (void)param1;
}

// ov111_021E696C - Add another sprite
void ov111_021E696C(void *param1) {
    (void)param1;
}

// ov111_021E69A0 - Setup Pokemon sprites
void ov111_021E69A0(void *param1, int param2) {
    (void)param1;
    (void)param2;
}

// ov111_021E69F4 - Get Pokemon data
void ov111_021E69F4(void *param1) {
    (void)param1;
}

// ov111_021E6A2C - Get data wrapper
void ov111_021E6A2C(void *param1) {
    (void)param1;
}

// ov111_021E6A44 - Get Pokemon info
void ov111_021E6A44(void *param1) {
    (void)param1;
}

// ov111_021E6A74 - Complex sprite setup
void ov111_021E6A74(void *param1) {
    (void)param1;
}

// ov111_021E6B30 - Add sprite resources
void ov111_021E6B30(void *param1) {
    (void)param1;
}
