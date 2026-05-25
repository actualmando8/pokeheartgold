#ifndef GUARD_OVERLAY_01_021FF854_H
#define GUARD_OVERLAY_01_021FF854_H

#include "global.h"
#include "overlay_01_021F1348.h"

/* Shadow entity callback tables */
extern const UnkOv01_02209280 ov01_02209218;
extern const UnkOv01_02209280 ov01_02209244;

/* Config data for shadow entity initialization */
extern const u8 ov01_0220922C[];

/* Shadow entity lifecycle */
UnkOv01_021FFECC *ov01_021FF854(void *parent);
void ov01_021FF870(UnkOv01_021FFECC *entity);

/* Shadow entity position updates */
void ov01_021FF8F0(UnkOv01_021FFECC *entity, UnkOv01_021FFF5C *data);
void ov01_021FF964(UnkOv01_021FFECC *entity, s16 offsetX, s16 offsetZ, u8 *direction, UnkOv01_021FFF5C *data);

/* Shadow entity callbacks (used by ov01_02209218 table) */
BOOL ov01_021FF9F4(UnkOv01_021FFF5C *data, UnkOv01_021FFFCD *shadow);
BOOL ov01_021FFAB0(void *r0, UnkOv01_021FFFCD *shadow);
void ov01_021FFABC(UnkOv01_021FFF5C *data, UnkOv01_021FFFCD *shadow);
void ov01_021FFBD4(UnkOv01_021FFF5C *data, UnkOv01_021FFFCD *shadow);

#endif
