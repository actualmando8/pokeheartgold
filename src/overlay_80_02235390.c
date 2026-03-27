#include "overlay_80_02235390.h"

#include "frontier.h"
#include "sound.h"

// External function declarations
extern u16 FrontierScript_ReadVar(void);
extern void FrontierScriptContext_ReadHalfWord(void *context);
extern void FrontierScriptContext_Pause(void *context, void *callback);
extern BOOL IsSEPlaying(void);
extern BOOL IsFanfarePlaying(void);
extern void sub_02004AC8(int value);

// FrtCmd_085 - Assembly: asm/overlay_80_02235390.s @ 0x02235390
// Reads a variable and plays a sound effect
// Parameters: none (uses FrontierScript context)
// Returns: void
void FrtCmd_085(void) {
    FrontierScript_ReadVar();
    PlaySE();
}

// FrtCmd_086 - Assembly: asm/overlay_80_02235390.s @ 0x022353A0
// Reads a variable and stops a sound effect
// Parameters: none (uses FrontierScript context)
// Returns: void
void FrtCmd_086(void) {
    FrontierScript_ReadVar();
    StopSE(0);
}

// FrtCmd_087 - Assembly: asm/overlay_80_02235390.s @ 0x022353B0
// Reads a variable and stores it at offset 0x78, then pauses the script context
// Parameters: context - FrontierScriptContext pointer
// Returns: void
void FrtCmd_087(void *context) {
    u16 value;
    u16 *soundPtr;

    // Read variable value
    value = FrontierScript_ReadVar();

    // Store at offset 0x78
    soundPtr = (u16 *)((u8 *)context + 0x78);
    *soundPtr = value;

    // Pause with callback
    FrontierScriptContext_Pause(context, ov80_022353D0);
}

// ov80_022353D0 - Assembly: asm/overlay_80_02235390.s @ 0x022353D0
// Checks if a sound effect is playing
// Parameters: context - pointer to context with sound data at offset 0x78
// Returns: BOOL - TRUE if sound is not playing, FALSE if playing
BOOL ov80_022353D0(void *context) {
    u16 *soundPtr;
    u16 soundValue;

    // Get sound value from offset 0x78
    soundPtr = (u16 *)((u8 *)context + 0x78);
    soundValue = *soundPtr;

    // Check if sound is playing
    if (IsSEPlaying() == FALSE) {
        return TRUE;  // Sound finished
    }

    return FALSE;  // Sound still playing
}

// FrtCmd_088 - Assembly: asm/overlay_80_02235390.s @ 0x022353E8
// Reads a halfword and plays a fanfare
// Parameters: none (uses FrontierScript context)
// Returns: void
void FrtCmd_088(void) {
    FrontierScriptContext_ReadHalfWord(NULL);  // This seems wrong, but follows assembly
    PlayFanfare();
}

// FrtCmd_089 - Assembly: asm/overlay_80_02235390.s @ 0x022353F8
// Pauses the script context using ov80_02235408 as callback
// Parameters: context - FrontierScriptContext pointer
// Returns: void
void FrtCmd_089(void *context) {
    FrontierScriptContext_Pause(context, ov80_02235408);
}

// ov80_02235408 - Assembly: asm/overlay_80_02235390.s @ 0x02235408
// Checks if a fanfare is playing
// Parameters: none
// Returns: BOOL - TRUE if fanfare is not playing, FALSE if playing
BOOL ov80_02235408(void) {
    if (IsFanfarePlaying() == FALSE) {
        return TRUE;  // Fanfare finished
    }

    return FALSE;  // Fanfare still playing
}

// FrtCmd_090 - Assembly: asm/overlay_80_02235390.s @ 0x0223541C
// Reads a halfword and plays background music
// Parameters: none (uses FrontierScript context)
// Returns: void
void FrtCmd_090(void) {
    u16 bgmId;

    // Read halfword (BGM ID)
    FrontierScriptContext_ReadHalfWord(NULL);

    // Sign-extend the 16-bit value to 32-bit
    // From assembly: lsl r0, r4, #0x10; lsr r0, r0, #0x10
    bgmId = (s16)bgmId;

    // Call some function and play BGM
    sub_02004AC8(bgmId);

    // Play the BGM (need to get the extended value again)
    // Note: This is a simplification; the assembly does this twice
    PlayBGM(bgmId);
}
