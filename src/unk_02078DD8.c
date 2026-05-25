#include "global.h"
#include "unk_02078DD8.h"

/* 0x02078DD8 */
/* Allocates a 0x24-byte struct from heap, fills profile data, validates with ov00_021E6D60 */
void *sub_02078DD8(PlayerProfile profile, enum HeapID heapID) {
    u8 *r4;

    r4 = Heap_Alloc(heapID, 0x24);
    memset(r4, 0, 0x24);
    r4[0x1b] = 0x1c;
    r4[0x1e] = PlayerProfile_GetTrainerGender(profile);
    r4[0x1d] = PlayerProfile_GetAvatar(profile);
    r4[0x18] = PlayerProfile_GetVersion(profile);
    r4[0x19] = PlayerProfile_GetLanguage(profile);
    if (ov00_021E6D60(r4, 0x24) != 1) {
        GF_AssertFail();
    }
    return r4;
}

/* 0x02078E28 */
void sub_02078E28(void *ptr) {
    Heap_Free(ptr);
}
