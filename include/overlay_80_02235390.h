#ifndef POKEHEARTGOLD_OVERLAY_80_02235390_H
#define POKEHEARTGOLD_OVERLAY_80_02235390_H

#include <global.h>

// FrtCmd_085 - Assembly: asm/overlay_80_02235390.s @ 0x02235390
// Reads a variable and plays a sound effect
// Parameters: none (uses FrontierScript context)
// Returns: void
void FrtCmd_085(void);

// FrtCmd_086 - Assembly: asm/overlay_80_02235390.s @ 0x022353A0
// Reads a variable and stops a sound effect
// Parameters: none (uses FrontierScript context)
// Returns: void
void FrtCmd_086(void);

// FrtCmd_087 - Assembly: asm/overlay_80_02235390.s @ 0x022353B0
// Reads a variable and stores it at offset 0x78, then pauses the script context
// Parameters: context - FrontierScriptContext pointer
// Returns: void
void FrtCmd_087(void *context);

// ov80_022353D0 - Assembly: asm/overlay_80_02235390.s @ 0x022353D0
// Checks if a sound effect is playing
// Parameters: context - pointer to context with sound data at offset 0x78
// Returns: BOOL - TRUE if sound is not playing, FALSE if playing
BOOL ov80_022353D0(void *context);

// FrtCmd_088 - Assembly: asm/overlay_80_02235390.s @ 0x022353E8
// Reads a halfword and plays a fanfare
// Parameters: none (uses FrontierScript context)
// Returns: void
void FrtCmd_088(void);

// FrtCmd_089 - Assembly: asm/overlay_80_02235390.s @ 0x022353F8
// Pauses the script context using ov80_02235408 as callback
// Parameters: context - FrontierScriptContext pointer
// Returns: void
void FrtCmd_089(void *context);

// ov80_02235408 - Assembly: asm/overlay_80_02235390.s @ 0x02235408
// Checks if a fanfare is playing
// Parameters: none
// Returns: BOOL - TRUE if fanfare is not playing, FALSE if playing
BOOL ov80_02235408(void);

// FrtCmd_090 - Assembly: asm/overlay_80_02235390.s @ 0x0223541C
// Reads a halfword and plays background music
// Parameters: none (uses FrontierScript context)
// Returns: void
void FrtCmd_090(void);

#endif // POKEHEARTGOLD_OVERLAY_80_02235390_H
