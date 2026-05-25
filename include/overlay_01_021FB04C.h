#ifndef GUARD_OVERLAY_01_021FB04C_H
#define GUARD_OVERLAY_01_021FB04C_H

typedef struct {
    u32 base;
    u32 offset1;
    u32 offset2;
    u32 offset3;
    u32 offset4;
    u32 offset5;
} BlockData;

void ov01_021FB04C(NARC *narc, void *blockData);
void ov01_021FB0B0(void *header, void *blockData, void *src);
void *ov01_021FB110(NARC *narc, void *blockData, void *header);
void *ov01_021FB120(NARC *narc, void *blockData, void *header);
void *ov01_021FB134(NARC *narc, void *blockData, void *header);
void *ov01_021FB144(NARC *narc, void *blockData, void *header);
void *ov01_021FB154(NARC *narc, void *blockData, void *header);
void *ov01_021FB164(NARC *narc, void *blockData, void *header);
u8 ov01_021FB174(void *taskData, void *ctx);
void *ov01_021FB254(void);
void ov01_021FB270(NARC *narc, void *dst, void *header);
void ov01_021FB2E8(void *data);
void ov01_021FB2F4(void *data);

#endif // GUARD_OVERLAY_01_021FB04C_H
