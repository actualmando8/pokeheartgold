#ifndef POKEHEARTGOLD_MIDDLEWARE_H
#define POKEHEARTGOLD_MIDDLEWARE_H

#include <global.h>

// Version strings from middleware.s - Assembly: asm/middleware.s
// These are SDK version strings from Nintendo's middleware

// Nintendo DWC version string (NINTENDO_DWC)
// Address: 0x02000BC4
extern const char version_NINTENDO_DWC[];

// Nintendo WiFi version string (NINTENDO_WiFi)
// Address: 0x02000BFC
extern const char version_NINTENDO_WiFi[];

// Ubiquitous CPS version string (UBIQUITOUS_CPS)
// Address: 0x02000C24
extern const char version_UBIQUITOUS_CPS[];

// Ubiquitous SSL version string (UBIQUITOUS_SSL)
// Address: 0x02000C3C
extern const char version_UBIQUITOUS_SSL[];

// Abiosso libVCT version string (Abiosso_libVCT)
// Address: 0x02000C54
extern const char version_Abiosso_libVCT[];

// Nintendo BACKUP version string (NINTENDO_BACKUP)
// Address: 0x02000C70
extern const char version_NINTENDO_BACKUP[];

// Nintendo DWC_LOBBY version string (NINTENDO_DWC_LOBBY)
// Address: 0x02000C88
extern const char version_NINTENDO_DWC_LOBBY[];

#endif // POKEHEARTGOLD_MIDDLEWARE_H
