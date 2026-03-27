# Assembly to C Conversion Standards

This document defines the standards and procedures for converting assembly files in the pokeheartgold project to C.

## Table of Contents

1. [Overview](#overview)
2. [File Naming Conventions](#file-naming-conventions)
3. [Function Naming Conventions](#function-naming-conventions)
4. [Struct Naming Conventions](#struct-naming-conventions)
5. [Comment Requirements](#comment-requirements)
6. [Header File Organization](#header-file-organization)
7. [Code Style](#code-style)
8. [Conversion Priority List](#conversion-priority-list)
9. [Conversion Checklist](#conversion-checklist)

---

## Overview

The pokeheartgold project contains a mix of ARM/Thumb assembly files (`.s`) and C source files (`.c`). This document establishes a systematic framework for converting assembly files to C while maintaining code quality and preserving original functionality.

### Conversion Goals

- Maintain binary equivalence with original assembly
- Preserve original function names for debugging/reversing
- Follow existing codebase conventions
- Create maintainable, readable C code

---

## File Naming Conventions

### Assembly to C Mapping

| Assembly File | C File | Notes |
|---------------|--------|-------|
| `asm/overlay_35.s` | `src/overlay_35.c` | Overlay files map to src/ |
| `asm/middleware.s` | `src/middleware.c` | Keep original name |
| `asm/overlay_01_021E5900.s` | `src/overlay_01_021E5900.c` | Preserve address suffix |
| `asm/overlay_13_thumb_1.s` | `src/overlay_13_thumb_1.c` | Preserve thumb suffix |

### Header File Naming

| Source File | Header File |
|-------------|-------------|
| `src/overlay_35.c` | `include/overlay_35.h` |
| `src/overlay_01_021E5900.c` | `include/overlay_01_021E5900.h` |

### Rules

1. Assembly files in `asm/` map to C files in `src/`
2. Corresponding headers go in `include/`
3. Preserve original identifiers in filenames
4. Use lowercase with underscores (snake_case)

---

## Function Naming Conventions

### Preserve Original Names

Function names from assembly should be preserved to maintain compatibility with existing code and debugging tools:

```c
// From assembly: ov35_02259D80
int ov35_02259D80(void *structPtr, int caseId);

// From assembly: ov35_02259DB8
u8 ov35_02259DB8(void *structPtr);
```

### Rationale

- Original names preserve the connection to the decompiled binary
- Makes it easier to reference debugging notes and documentation
- Maintains compatibility with existing function declarations in headers

### Function Prefixes

| Overlay | Prefix Example |
|---------|----------------|
| overlay_35 | `ov35_` |
| overlay_01_021E5900 | `ov01_021E5900_` |
| middleware | `middleware_` |

---

## Struct Naming Conventions

### Unknown Structures

For structures whose purpose is not yet understood, use the `UnkStruct_` prefix with the structure size or a unique identifier:

```c
// Unknown structure at offset 0x20, 0x50 bytes total
typedef struct UnkStruct_02059D80 {
    u8 field_0x0;
    u8 field_0x1;
    u8 field_0x2;
    u8 field_0x3;
    u32 field_0x4;
    void (*callback)(void);  // field_0x44
    void *field_0x48;        // Function pointer from assembly
} UnkStruct_02059D80;
```

### Struct Naming Patterns

1. **Known Purpose**: Descriptive name (e.g., `Pokemon`, `Party`, `SaveData`)
2. **Unknown Purpose**: `UnkStruct_XXXXXX` where XXXXXX is the function address or unique ID
3. **Field Naming**: `field_0xN` for unknown fields, descriptive names when identified

### Known Structure Examples

```c
// From overlay_06.c - known purpose
typedef struct PaletteData {
    void *data;
    u32 size;
    u32 flags;
} PaletteData;
```

---

## Comment Requirements

### Required Comments

Every converted function MUST include:

1. **Assembly Origin Comment**: Reference to the original assembly function
2. **Function Purpose**: Brief description of what the function does
3. **Parameter Descriptions**: What each parameter represents

```c
// ov35_02259D80 - Assembly: asm/overlay_35.s
// Handler for case-based operations on mystery gift data
// Parameters: structPtr - mystery gift structure, caseId - operation type (0-5)
// Returns: varies by case
int ov35_02259D80(UnkStruct_02059D80 *structPtr, int caseId) {
    // Implementation
}
```

### Inline Comments

Add comments for non-obvious assembly translations:

```c
// Assembly: lsl r1, r1, #0x10  -> asr r1, r1, #0x10
// This effectively sign-extends the 16-bit value
s16 value = (s16)(rawValue << 16) >> 16;
```

### Jump Table Comments

```c
// Jump table cases (from assembly):
// Case 0: default (return)
// Case 1: set flag -> return
// Case 2: check condition -> call callback if set
// Case 3: default (fall through)
// Case 4: special check
// Case 5: default (return)
```

---

## Header File Organization

### Header Template

```c
#ifndef POKEHEARTGOLD_OVERLAY_XX_H
#define POKEHEARTGOLD_OVERLAY_XX_H

#include <global.h>

// Type definitions
typedef struct UnkStruct_XXXXXX UnkStruct_XXXXXX;

// Function declarations
int ovXX_XXXXXXXX(void *param1, int param2);
u8 ovXX_XXXXXXXX(void *param);

#endif // POKEHEARTGOLD_OVERLAY_XX_H
```

### Include Order

1. Standard library headers (if needed)
2. Global project headers (`global.h`, `config.h`)
3. Related headers
4. Local type definitions

### Header Guards

Use format: `POKEHEARTGOLD_<FILENAME>_H`

---

## Code Style

### General Rules (Based on .clang-format)

- **Indentation**: 4 spaces (no tabs)
- **Line Length**: 120 characters max
- **Braces**: Allman style (newline before brace)
- **Naming**: snake_case for variables/functions, SCREAMING_SNAKE for macros

### Function Definitions

```c
// Single line
int ov35_02259D80(void *structPtr, int caseId);

// Multi-line with parameters aligned
void ov06_0221BA1C(PaletteData *palData, int param_2, int unused,
                  PaletteBufferId bufferId, u32 paletteSlot) {
    // Implementation
}
```

### Variable Declarations

```c
// Local variables at function start
void example_function(void) {
    int i;
    u32 value;
    void *ptr;
    
    // Code
}
```

### Control Structures

```c
if (condition) {
    // code
} else if (condition2) {
    // code
} else {
    // code
}

switch (value) {
case 0:
    // code
    break;
case 1:
    // code
    break;
default:
    break;
}
```

---

## Conversion Priority List

### Priority 1: Tiny Files (< 10KB)

These files are small enough to convert as proof-of-concept:

| File | Size | Status |
|------|------|--------|
| asm/overlay_35.s | 943 bytes | Priority 1 - EXAMPLE |
| asm/overlay_13_thumb_1.s | 1003 bytes | Priority 1 - CONVERTED |
| asm/middleware.s | 907 bytes | Priority 1 - CONVERTED |
| asm/overlay_01_data_02208BFC.s | 1967 bytes | Priority 1 - CONVERTED |
| asm/overlay_01_021F467C.s | 1922 bytes | Priority 1 - CONVERTED |
| asm/overlay_80_02235390.s | 1975 bytes | Priority 1 - CONVERTED |
| asm/overlay_58.s | 10,508 bytes | Priority 1 - CONVERTED |
| asm/overlay_33.s | 13,016 bytes | Priority 1 - CONVERTED |
| asm/overlay_114.s | 10,133 bytes | Priority 1 - CONVERTED |
| asm/overlay_104.s | 17,521 bytes | Priority 1 - CONVERTED |
| asm/overlay_38_thumb.s | 18,105 bytes | Priority 1 - CONVERTED |
| asm/overlay_98.s | 31,090 bytes | Priority 1 - CONVERTED |
| asm/overlay_105.s | 12,756 bytes | Priority 1 - CONVERTED |
| asm/overlay_117.s | 24,912 bytes | Priority 1 - CONVERTED |
| asm/overlay_119.s | 47,541 bytes | Priority 1 - CONVERTED |
| asm/overlay_120.s | 43,130 bytes | Priority 1 - CONVERTED |

- [x] `asm/overlay_46.s` → `src/overlay_46.c` (CONVERTED)
- [x] `include/overlay_46.h` (CREATED)
- **Functions**: Mystery Gift UI - ov46_02258800 (init), ov46_0225892C (16-case main handler), ov46_02258C38 (cleanup), BG init, palette handling, message windows
- [x] `asm/overlay_47.s` → `src/overlay_47.c` (CONVERTED)
- [x] `include/overlay_47.h` (CREATED)
- **Functions**: Player Selection - ov47_02258800 (init), ov47_02258898 (5-case main handler), ov47_022589A8 (cleanup), sprite rendering, BG setup
- [x] `asm/overlay_56.s` → `src/overlay_56.c` (CONVERTED)
- [x] `include/overlay_56.h` (CREATED)
- **Functions**: Mail View - ov56_021E5C20 (init), ov56_021E6228 (main task), mail message display, input handling
- [x] `asm/overlay_116.s` → `src/overlay_116.c` (CONVERTED)
- [x] `include/overlay_116.h` (CREATED)
- **Functions**: Pokemon 3D View - ov116_0225F020 (camera setup), ov116_0225F054 (8-case handler), ov116_0225F1BC (10-case handler), camera animations
- [x] `asm/overlay_118.s` → `src/overlay_118.c` (CONVERTED)
- [x] `include/overlay_118.h` (CREATED)
- **Functions**: Pokemon Summary Screen - ov118_0225F020 (9-case handler), BG scroll/positioning, display setup

### Priority 2: Small Files (10-50KB)

| File | Size | Status |
|------|------|--------|
| asm/overlay_33.s | 13KB | Priority 1 - CONVERTED |
| asm/overlay_58.s | 10.5KB | Priority 1 - CONVERTED |
| asm/overlay_114.s | ~15KB | Priority 1 - CONVERTED |
| asm/overlay_46.s | 30KB | Priority 2 - CONVERTED |
| asm/overlay_47.s | 53KB | Priority 2 - CONVERTED |
| asm/overlay_56.s | 42KB | Priority 2 - CONVERTED |
| asm/overlay_116.s | 9KB | Priority 2 - CONVERTED |
| asm/overlay_118.s | 5KB | Priority 2 - CONVERTED |

### Priority 3: Medium Files (50-150KB)

Defer until conversion process is well-established:

| File | Size |
|------|------|
| asm/overlay_32.s | 31KB |
| asm/overlay_34.s | 40KB | Priority 3 - HEADER/SOURCE CREATED |
| asm/overlay_37.s | 77KB | Priority 3 - HEADER/SOURCE CREATED |
| asm/overlay_39_thumb.s | 85KB | Priority 3 - HEADER/SOURCE CREATED |
| asm/overlay_28.s | 50KB |
| asm/overlay_27.s | 113KB |

### Priority 4: Large Files (>150KB)

Defer until process is mature:

| File | Size |
|------|------|
| asm/overlay_07.s | 955KB |
| asm/overlay_14.s | 682KB |
| asm/overlay_40.s | 905KB |
| asm/overlay_49.s | 631KB |
| asm/overlay_74_thumb.s | 560KB |

---

## Conversion Checklist

Use this checklist for each file conversion.

### Phase 1: Analysis

- [ ] **Read the assembly file** - Understand the overall structure
- [ ] **Identify all functions** - List each function with its address
- [ ] **Identify structures** - Note any struct definitions or data tables
- [ ] **Identify external calls** - List calls to other functions (bl, blx)
- [ ] **Identify constants** - Note any literal values or tables
- [ ] **Check for dependencies** - Look at included files (.include directives)

### Phase 2: Header Creation

- [ ] **Create header file** - `include/overlay_XX.h`
- [ ] **Add header guard** - `POKEHEARTGOLD_OVERLAY_XX_H`
- [ ] **Add includes** - Standard headers, global.h
- [ ] **Define types** - Struct definitions for unknown structures
- [ ] **Declare functions** - Add function prototypes

### Phase 3: Implementation

- [ ] **Create source file** - `src/overlay_XX.c`
- [ ] **Add includes** - Include the header and any dependencies
- [ ] **Implement functions** - Convert each function to C
- [ ] **Add comments** - Include assembly origin and purpose
- [ ] **Preserve function names** - Keep original names for compatibility

### Phase 4: Integration

- [ ] **Check CMakeLists.txt** - See if new file needs to be added
- [ ] **Verify build** - Try to compile the project
- [ ] **Test functionality** - Verify the code works correctly

### Phase 5: Documentation

- [ ] **Update priority list** - Mark file as converted
- [ ] **Add to conversion notes** - Document any findings or issues

---

## Example Conversion

See [`asm/overlay_35.s`](asm/overlay_35.s) and its C equivalent for a complete example of the conversion process.

### Key Points from Example

1. **Function ov35_02259D80**: Contains a jump table with 6 cases (0-5)
   - Cases 0, 2, 3, 5: default behavior (return)
   - Case 1: Sets a byte field to 1
   - Case 4: Checks conditions and calls a function pointer

2. **Function ov35_02259DB8**: Simple getter - returns a byte from struct offset 3

3. **Struct Analysis**: The structure has at least:
   - Offset 0x0: unknown (char/byte)
   - Offset 0x2: byte (compared to 2)
   - Offset 0x3: byte (returned by second function)
   - Offset 0x4: byte (set to 1 by case 1)
   - Offset 0x44: function pointer
   - Offset 0x48: void pointer

### Current Status

- [x] `asm/overlay_35.s` → `src/overlay_35.c` (CONVERTED)
- [x] `include/overlay_35.h` (UPDATED with struct and function declarations)
- **Note**: The existing caller in `src/field_system.c` calls `ov35_02259DB8()` without arguments, but the assembly shows it expects a pointer in r0. This may require updating the caller or could be a pre-existing bug in the codebase.
- [x] `asm/overlay_13_thumb_1.s` → `src/overlay_13_thumb_1.c` (CONVERTED)
- [x] `include/overlay_13_thumb_1.h` (CREATED)
- **Function ov13_0221BA00**: Audio initialization - sets up sound player parameters, initializes tick/alarm systems, and enables sound hardware
- [x] `asm/middleware.s` → `src/middleware.c` (CONVERTED)
- [x] `include/middleware.h` (CREATED)
- **Data**: Version strings for Nintendo SDK middleware (DWC, WiFi, CPS, SSL, libVCT, BACKUP, DWC_LOBBY)
- [x] `asm/overlay_01_021F467C.s` → `src/overlay_01_021F467C.c` (CONVERTED)
- [x] `include/overlay_01_021F467C.h` (CREATED)
- **Functions**: ov01_021F467C (graphics init), ov01_021F46DC (cleanup), ov01_02206B94_data (44-byte init table)
- [x] `asm/overlay_01_data_02208BFC.s` → `src/overlay_01_data_02208BFC.c` (CONVERTED)
- [x] `include/overlay_01_data_02208BFC.h` (CREATED)
- **Data**: ov01_02208BFC (24 ID table), ov01_02208C5C (24-entry function pointer table)
- [x] `asm/overlay_80_02235390.s` → `src/overlay_80_02235390.c` (CONVERTED)
- [x] `include/overlay_80_02235390.h` (CREATED)
- **Functions**: FrtCmd_085-090 and ov80_022353D0/ov80_02235408 (Frontier script sound/BGM commands)
- [x] `asm/overlay_58.s` → `src/overlay_58.c` (CONVERTED)
- [x] `include/overlay_58.h` (CREATED)
- **Functions**: ApricornBox_Init/Main/Exit, ov58_022378C0 (overlay runner), ov58_022379C0 (aprijuice calculation), and 6 case handlers
- [x] `asm/overlay_33.s` → `src/overlay_33.c` (CONVERTED)
- [x] `include/overlay_33.h` (CREATED)
- **Functions**: Mystery Events UI - ov33_0225D520 (init), ov33_0225D5D0 (main task with 6-case jump table), ov33_0225D720 (BG init), etc.
- [x] `asm/overlay_114.s` → `src/overlay_114.c` (CONVERTED)
- [x] `include/overlay_114.h` (CREATED)
- **Functions**: ov114_0225F020/0225F280 (8-case jump table handlers for sprite/display overlay)
- [x] `asm/overlay_104.s` → `src/overlay_104.c` (CONVERTED)
- [x] `include/overlay_104.h` (CREATED)
- **Functions**: 3D Pokemon view - ov104_021E5900 (init), ov104_021E59E4 (main loop), ov104_021E5B14 (cleanup), camera setup
- [x] `asm/overlay_117.s` → `src/overlay_117.c` (CONVERTED)
- [x] `include/overlay_117.h` (CREATED)
- **Functions**: Pokemon Compare - ov117_0225F020 (8-case handler), ov117_0225F420 (screen load), ov117_0225F470 (trainer name), ov117_0225F524 (13-case handler)
- [x] `asm/overlay_119.s` → `src/overlay_119.c` (CONVERTED)
- [x] `include/overlay_119.h` (CREATED)
- **Functions**: Pokemon Compare (multiple views) - ov119_0225F020 (3-Pokemon view), ov119_0225F37C (2-Pokemon view), ov119_0225F670 (rotation view), ov119_0225FA2C (stats view)
- [x] `asm/overlay_120.s` → `src/overlay_120.c` (CONVERTED)
- [x] `include/overlay_120.h` (CREATED)
- **Functions**: Card Game - ov120_0225F020 (alloc), ov120_0225F040 (process), ov120_0225F08C (collision), ov120_0225F120 (init), ov120_0225F14C (game logic), ov120_0225F1E8 (shuffle), ov120_0225F714 (main handler)
- [x] `asm/overlay_105.s` → `src/overlay_105.c` (CONVERTED)
- [x] `include/overlay_105.h` (CREATED)
- **Functions**: Pokemon 3D View - ov105_021E5900 (init), ov105_021E59DC (main), ov105_021E5B14 (cleanup), ov105_021E5B68 (gfx init), ov105_021E5BCC (camera setup)
- [x] `asm/overlay_98.s` → `src/overlay_98.c` (CONVERTED)
- [x] `include/overlay_98.h` (CREATED)
- **Functions**: Sprite System - ov98_0221E5E0 (init), ov98_0221E684 (free), ov98_0221E6CC (draw), ov98_0221E6E0 (new sprite), ov98_0221E7E8 (pokemon sprite), ov98_0221E970 (icon sprite)
- [x] `asm/overlay_38_thumb.s` → `src/overlay_38_thumb.c` (CONVERTED)
- [x] `include/overlay_38_thumb.h` (CREATED)
- **Functions**: Data transfer/encryption - ov38_0221BA00/BA10 (state functions), ov38_0221BA38 (data processing), ov38_0221BB68 (8-case state setter)
- [x] `asm/overlay_97.s` → `src/overlay_97.c` (CONVERTED)
- [x] `include/overlay_97.h` (CREATED)
- **Functions**: Unknown overlay - ov97_0221E5C0 (check), ov97_0221E5D4 (6-case state machine), ov97_0221E6DC (init), plus 36 helper functions, graphics loading (ov97_0221FC54)
- [x] `asm/overlay_69.s` → `src/overlay_69.c` (CONVERTED)
- [x] `include/overlay_69.h` (CREATED)
- **Functions**: GeonetGlobe - GeonetGlobe_Init (0x021E5900), GeonetGlobe_Main (0x021E5A34, 19-case handler), GeonetGlobe_Exit (0x021E6080), plus 34 helper functions
- [x] `asm/overlay_95.s` → `src/overlay_95.c` (CONVERTED)
- [x] `include/overlay_95.h` (CREATED)
- **Functions**: HatchEggApp - HatchEggApp_Init (0x021E6B74), HatchEggApp_Main (0x021E6BC4), HatchEggApp_Exit (0x021E6C28), plus 59 helper functions
- [x] `asm/overlay_106.s` → `src/overlay_106.c` (CONVERTED)
- [x] `include/overlay_106.h` (CREATED)
- **Functions**: ScriptCinematic_HoOh - ScriptCinematic_HoOh (0x021E6064), ov106_021E5900 (init), ov106_021E5A44 (main), plus 73 helper functions
- [x] `asm/overlay_65.s` → `src/overlay_65.c` (CONVERTED)
- [x] `include/overlay_65.h` (CREATED)
- **Functions**: WirelessTradeSelectMon - WirelessTradeSelectMon_Init (0x0221BF54), WirelessTradeSelectMon_Main (0x0221C1C8), WirelessTradeSelectMon_Exit (0x0221CD0C), plus 103 helper functions
- [x] `asm/overlay_75.s` → `src/overlay_75.c` (CONVERTED)
- [x] `include/overlay_75.h` (CREATED)
- **Functions**: WiiMessageSettings/TitleScreen - ov75_02246960 (init), ov75_022469D8 (main, 5-case handler), ov75_02246B00 (exit), plus 93 helper functions, sub-overlay management
- [x] `asm/overlay_85.s` → `src/overlay_85.c` (CONVERTED)
- [x] `include/overlay_85.h` (CREATED)
- **Functions**: Battle - ov85_021E5900 (init), ov85_021E5A34 (main, 10+ state handler), ov85_021E5AAC (exit), plus 200+ helper functions, menu handling, move execution, animations
- [x] `asm/overlay_86.s` → `src/overlay_86.c` (CONVERTED)
- [x] `include/overlay_86.h` (CREATED)
- **Functions**: FrontierApp - ov86_021E5900 (init), ov86_021E5A40 (main), ov86_021E5AA4 (exit), plus 75 helper functions
- [x] `asm/overlay_87.s` → `src/overlay_87.c` (CONVERTED)
- [x] `include/overlay_87.h` (CREATED)
- **Functions**: ScratchOffCards - ScratchOffCards_Init (0x021E5900), ScratchOffCards_Main (0x021E5A40), ScratchOffCards_Exit (0x021E5AA4), plus 81 helper functions, card matching game logic
- [x] `asm/overlay_103.s` → `src/overlay_103.c` (CONVERTED)
- [x] `include/overlay_103.h` (CREATED)
- **Functions**: MailboxApp - ov103_021EC940 (init), ov103_021EC988 (main), ov103_021EC9A4 (exit), plus 150+ helper functions, mail list/display UI
- [x] `asm/overlay_34.s` → `src/overlay_34.c` (CREATED - 37 functions, stub implementations)
- [x] `include/overlay_34.h` (CREATED)
- **Functions**: Friend Lobby - 37 thumb functions including main task handlers, window management, player display, connection handling
- [x] `asm/overlay_31.s` → `src/overlay_31.c` (CREATED - 46 functions, stub implementations)
- [x] `include/overlay_31.h` (CREATED)
- **Functions**: Friend Code - 46 thumb functions including friend code display, input handling, battle/trade requests
- [x] `asm/overlay_37.s` → `src/overlay_37.c` (CREATED - 67 functions, stub implementations)
- [x] `include/overlay_37.h` (CREATED)
- **Functions**: Global Trade - 67 thumb functions for trade system, graphics, window management
- [x] `asm/overlay_39_thumb.s` → `src/overlay_39_thumb.c` (CREATED - 97 functions, stub implementations)
- [x] `include/overlay_39_thumb.h` (CREATED)
- **Functions**: Union Room - 97 thumb functions for online trading/battling, menu handling, connection
- [x] `asm/nitrocrypto.s` → `src/nitrocrypto.c` (CREATED - 67 functions, stub implementations)
- [x] `include/nitrocrypto.h` (CREATED)
- **Functions**: Crypto Library - RC4, RSA, BigNum operations, signature verification

- [ ] `asm/overlay_81.s` → `src/overlay_81.c` (PENDING - 204KB, complex UI overlay)
- [ ] `asm/overlay_82.s` → `src/overlay_82.c` (PENDING - 76KB, related to overlay 81)
- [ ] `asm/overlay_90.s` → `src/overlay_90.c` (PENDING - 142KB)
- [ ] `asm/overlay_91.s` → `src/overlay_91.c` (PENDING - 217KB)
- [ ] `asm/overlay_92.s` → `src/overlay_92.c` (PENDING - 261KB)

---

## Notes

- When in doubt, prefer preserving original behavior over code elegance
- Use `FIXME` or `TODO` comments for code that needs review
- Reference the original assembly for any ambiguous decisions
- Test thoroughly - the goal is binary-equivalent decompilation