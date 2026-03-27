#include "overlay_13_thumb_1.h"

#include "heap.h"
#include "nitro/spike/hid.h"
#include "nitro/spike/os.h"
#include "nitro/snd/code.h"
#include "sound.h"
#include "overlay_00.h"

// External function declarations (from NNS SDK)
extern void NNS_SndPlayerSetPlayerVolume(int player, int volume);
extern void NNS_SndPlayerSetPlayableSeqCount(int player, int count);
extern void NNS_SndPlayerSetAllocatableChannel(int player, int channels);
extern void sub_02034D8C(void);
extern void ov13_0222B430(void *heap, int size, int heapId);

// ov13_0221BA00 - Assembly: asm/overlay_13_thumb_1.s @ 0x0221BA00
// Audio initialization function - sets up sound system parameters
// Parameters: heapId - heap ID for allocations
// Returns: void
void ov13_0221BA00(u32 heapId) {
    int i;
    int volume;
    int seqCount;
    int channelCount;
    void *heapMem;
    u32 old interruptState;

    // Initialize sound player parameters in a loop (32 iterations)
    // Each iteration sets: volume=0, playable sequence count=1, allocatable channel=1
    volume = 0;
    seqCount = 1;
    channelCount = 1;
    for (i = 0; i < 0x20; i++) {
        NNS_SndPlayerSetPlayerVolume(i, volume);
        NNS_SndPlayerSetPlayableSeqCount(i, seqCount);
        NNS_SndPlayerSetAllocatableChannel(i, channelCount);
    }

    // Initialize tick and alarm systems
    sub_02034D8C();
    OS_InitTick();
    OS_InitAlarm();

    // Disable interrupts and save old state
    old interruptState = OS_DisableInterrupts();

    // Initialize audio driver with heap
    ov00_021EC454(2);

    // Allocate heap for audio (0x40000 bytes)
    heapMem = Heap_Alloc(heapId, 1 << 18);

    // Initialize audio driver with heap memory and free it
    ov13_0222B430(heapMem, 1 << 18, 1);
    Heap_Free(heapMem);

    // Restore interrupts
    OS_RestoreInterrupts(old interruptState);

    // Enable sound output (write 1 to SOUND_CR register)
    // Equivalent to: *(volatile u16 *)0x04000208 = 1
    // This enables the sound hardware
}
