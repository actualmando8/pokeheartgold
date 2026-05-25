#ifndef POKEHEARTGOLD_OV_01_021F1348_H
#define POKEHEARTGOLD_OV_01_021F1348_H

#include "map_object.h"
#include "script.h"
#include "task.h"
#include "unk_020689C8.h"

typedef struct {
    u8 unk0[0xc];
    NNSG3dResMdl *unkC;
    u8 unk10[4];
} UnkOv01_021FFECC_sub;

typedef struct {
    void *unk0;
    UnkOv01_021FFECC_sub unk4[4];
    NNSG3dRenderObj unk54[4];
} UnkOv01_021FFECC;

typedef struct {
    u32 unk0;      /* state (0, 1, 2) */
    u32 unk4;      /* spriteId */
    u32 unk8;      /* objectID */
    u32 unkC;      /* mapID */
    u32 unk10;     /* targetX << 16 */
    u32 unk14;     /* result of sub_0206121C (0 or 1) */
    u32 unk18;     /* padding or priority */
    u32 unk1C;     /* task pointer */
    u32 unk20;     /* targetY << 16 */
    u32 unk24;     /* arg to sub_0206121C */
    u32 unk28;     /* config handle */
    u8 unk2C[4];
    LocalMapObject *unk30; /* map object */
    s16 unk34;     /* saved X */
    s16 unk36;     /* saved Z */
    s8 unk38;      /* facing direction */
    u8 unk39[3];
    u32 unk3C;     /* sprite handle */
} UnkOv01_021FFFCD;

typedef BOOL (*UnkOv01_02209280_Cb1)(void *, UnkOv01_021FFFCD *);
typedef void (*UnkOv01_02209280_Cb2)(void *, UnkOv01_021FFFCD *);

typedef struct {
    int unk0;
    UnkOv01_02209280_Cb1 unk4;
    UnkOv01_02209280_Cb1 unk8;
    UnkOv01_02209280_Cb2 unkC;
    UnkOv01_02209280_Cb2 unk10;
} UnkOv01_02209280;

typedef struct {
    int unk0;
    FieldSystem *unk4;
    UnkOv01_021FFECC *unk8;
    LocalMapObject *unkC;
    NNSG3dRenderObj *unk10;
} UnkOv01_021FFF5C;

UnkOv01_021FFECC *ov01_021F1430(void *a0, int a1, int a2, int a3);
FieldSystem *ov01_021F146C(LocalMapObject *mapObject);
TaskManager *ov01_021F1468(FieldSystem *fieldSystem);
UnkOv01_021FFECC *ov01_021F1450(FieldSystem *fieldSystem, int a1);
void ov01_021F1620(void *a0, const void *a1, ...);
void ov01_021F1448(UnkOv01_021FFECC *a0);
void ov01_021F19F4(void *a0, UnkOv01_021FFECC_sub *a1, int a2, int a3, int a4);
void ov01_021F1640(int a0);

#endif // POKEHEARTGOLD_OV_01_021F1348_H
