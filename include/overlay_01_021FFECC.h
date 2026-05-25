#ifndef POKEHEARTGOLD_OV_01_021FFECC_H
#define POKEHEARTGOLD_OV_01_021FFECC_H

#include "global.h"
#include "overlay_01_021F1348.h"

/* UnkOv01_021FFFCC wraps UnkOv01_021FFF5C */
typedef struct UnkOv01_021FFFCC {
    UnkOv01_021FFF5C unk0;
} UnkOv01_021FFFCC;
// UnkOv01_021FFFCD is defined in overlay_01_021F1348.h

UnkOv01_021FFECC *ov01_021FFECC(void *a0);
void ov01_021FFEE8(UnkOv01_021FFECC *a0);
void ov01_021FFF5C(LocalMapObject *mapObject, int a1);

#endif // POKEHEARTGOLD_OV_01_021FFECC_H
