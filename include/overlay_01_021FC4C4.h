#ifndef GUARD_OVERLAY_01_021FC4C4_H
#define GUARD_OVERLAY_01_021FC4C4_H

typedef struct {
    u32 key1;
    u32 key2;
    u32 data;
} CacheEntry;

typedef struct {
    u32 param0;
    HeapID heap;
    u32 count;
    u32 paramC;
    u32 entrySize;
    CacheEntry *entries;
} CacheManager;

void *ov01_021FC4C4(u32 param0, HeapID heap, u32 count, u32 entrySize);
void ov01_021FC520(CacheManager *cache);
CacheEntry *ov01_021FC554(CacheManager *cache, u32 key1, u32 key2, u32 allocSize);
void ov01_021FC588(CacheManager *cache, u32 key1, u32 key2);
CacheEntry *ov01_021FC5A4(CacheManager *cache, u32 key1, u32 key2);
u32 ov01_021FC5B8(CacheManager *cache, u32 key1, u32 key2);
void ov01_021FC5CC(CacheManager *cache, NARC *narc, u16 index, u32 key1, u32 key2);
CacheEntry *ov01_021FC5FC(HeapID heap, u32 size);
void ov01_021FC61C(void *ptr);
CacheEntry *ov01_021FC624(CacheManager *cache, u32 key1, u32 key2);
CacheEntry *ov01_021FC644(CacheManager *cache);
void ov01_021FC65C(CacheEntry *entry, u32 key1, u32 key2);
void ov01_021FC664(CacheEntry *entry);

#endif
