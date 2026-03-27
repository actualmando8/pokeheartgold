#include "overlay_97.h"

#include "global.h"

// ov97_0221E5C0 - Assembly: asm/overlay_97.s
// Checks if ov97_0221E6DC returns non-zero
// Returns: 1 if ov97_0221E6DC returns non-zero, 0 otherwise
int ov97_0221E5C0(void) {
    int result = ov97_0221E6DC();
    if (result != 0) {
        return 1;
    }
    return 0;
}

// ov97_0221E5D4 - Assembly: asm/overlay_97.s
// Main state machine handler with 6-case jump table
// Cases: 0=set state 1, 1=palette fade, 2=check fade, 3=check sub_020935E0, 4=palette fade, 5=default
// Parameters: param - pointer to UnkStruct_0221E5D4
void ov97_0221E5D4(UnkStruct_0221E5D4 *param) {
    switch (param->field_0x4) {
    case 0:
        // mov r0, #1; str r0, [r4, #4]
        param->field_0x4 = 1;
        break;
    case 1:
        // BeginNormalPaletteFade(6, 1, 0x5c, 0, 0)
        // mov r0, #6; str r0, [sp]; mov r1, #1; str r1, [sp, #4]
        // mov r0, #0x5c; str r0, [sp, #8]; mov r0, #0; ...
        // mov r0, #2; str r0, [r4, #4]
        param->field_0x4 = 2;
        BeginNormalPaletteFade(6, 1, 0x5c, 0, 0);
        break;
    case 2:
        // Check if palette fade is finished
        if (IsPaletteFadeFinished() != 0) {
            param->field_0x4 = 3;
        }
        break;
    case 3:
        // Check field_0x8 against sub_020935E0 return values
        // cmp r0, #2 -> set field_0x28 to 0
        // cmp r0, #3 -> set field_0x28 to 1
        // Then set field_0x4 to 4
        {
            int subResult = sub_020935E0(param->field_0x8);
            if (subResult == 2) {
                param->field_0x28 = 0;
            } else if (subResult == 3) {
                param->field_0x28 = 1;
            }
            param->field_0x4 = 4;
        }
        break;
    case 4:
        // Another palette fade: BeginNormalPaletteFade(6, 1, 0x5c, 0, 0)
        param->field_0x4 = 5;
        BeginNormalPaletteFade(6, 1, 0x5c, 0, 0);
        break;
    case 5:
    default:
        // Default case - fall through
        break;
    }
}

// ov97_0221E69C - Assembly: asm/overlay_97.s
void ov97_0221E69C(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221E6DC - Assembly: asm/overlay_97.s
// Initializes overlay data
// Returns: result of initialization
int ov97_0221E6DC(void) {
    // TODO: Implement based on assembly analysis
    return 0;
}

// ov97_0221E700 - Assembly: asm/overlay_97.s
void ov97_0221E700(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221E7F4 - Assembly: asm/overlay_97.s
void ov97_0221E7F4(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221E814 - Assembly: asm/overlay_97.s
void ov97_0221E814(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221E834 - Assembly: asm/overlay_97.s
void ov97_0221E834(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221E864 - Assembly: asm/overlay_97.s
void ov97_0221E864(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221E88C - Assembly: asm/overlay_97.s
void ov97_0221E88C(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221E898 - Assembly: asm/overlay_97.s
void ov97_0221E898(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221E91C - Assembly: asm/overlay_97.s
void ov97_0221E91C(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221E97C - Assembly: asm/overlay_97.s
void ov97_0221E97C(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221E98C - Assembly: asm/overlay_97.s
void ov97_0221E98C(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221EA88 - Assembly: asm/overlay_97.s
void ov97_0221EA88(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221EB38 - Assembly: asm/overlay_97.s
void ov97_0221EB38(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221EBD8 - Assembly: asm/overlay_97.s
void ov97_0221EBD8(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221EC14 - Assembly: asm/overlay_97.s
void ov97_0221EC14(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221EDE4 - Assembly: asm/overlay_97.s
void ov97_0221EDE4(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221EE84 - Assembly: asm/overlay_97.s
void ov97_0221EE84(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221EEA4 - Assembly: asm/overlay_97.s
void ov97_0221EEA4(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221EFD0 - Assembly: asm/overlay_97.s
void ov97_0221EFD0(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221F010 - Assembly: asm/overlay_97.s
void ov97_0221F010(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221F020 - Assembly: asm/overlay_97.s
void ov97_0221F020(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221F0E0 - Assembly: asm/overlay_97.s
void ov97_0221F0E0(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221F14C - Assembly: asm/overlay_97.s
void ov97_0221F14C(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221F1D8 - Assembly: asm/overlay_97.s
void ov97_0221F1D8(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221F294 - Assembly: asm/overlay_97.s
void ov97_0221F294(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221F428 - Assembly: asm/overlay_97.s
void ov97_0221F428(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221F56C - Assembly: asm/overlay_97.s
void ov97_0221F56C(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221F5F8 - Assembly: asm/overlay_97.s
void ov97_0221F5F8(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221F74C - Assembly: asm/overlay_97.s
void ov97_0221F74C(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221F7DC - Assembly: asm/overlay_97.s
void ov97_0221F7DC(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221F9E0 - Assembly: asm/overlay_97.s
void ov97_0221F9E0(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221FAEC - Assembly: asm/overlay_97.s
void ov97_0221FAEC(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221FB80 - Assembly: asm/overlay_97.s
void ov97_0221FB80(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221FBA0 - Assembly: asm/overlay_97.s
void ov97_0221FBA0(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221FBDC - Assembly: asm/overlay_97.s
void ov97_0221FBDC(void) {
    // TODO: Implement based on assembly analysis
}

// ov97_0221FC54 - Assembly: asm/overlay_97.s
// Loads OBJ graphics using DC_FlushRange and GXS_LoadOBJ/GXS_LoadOBJPltt
void ov97_0221FC54(UnkStruct_0221E5D4 *param) {
    // TODO: Implement based on assembly analysis
    // DC_FlushRange for multiple buffer regions
    // GXS_LoadOBJ and GXS_LoadOBJPltt calls
}
