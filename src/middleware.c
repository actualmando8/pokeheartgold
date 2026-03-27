#include "middleware.h"

// Version strings from middleware.s - Assembly: asm/middleware.s @ various addresses
// These are SDK version strings from Nintendo's middleware

// Nintendo DWC version string (NINTENDO_DWC)
// Address: 0x02000BC4
const char version_NINTENDO_DWC[] = "[SDK+NINTENDO:DWC2.2.30008.080630.1906_DWC_2_2_PLUS8]";

// Nintendo WiFi version string (NINTENDO_WiFi)
// Address: 0x02000BFC
const char version_NINTENDO_WiFi[] = "[SDK+NINTENDO:WiFi2.1.30003.0709200229]";

// Ubiquitous CPS version string (UBIQUITOUS_CPS)
// Address: 0x02000C24
const char version_UBIQUITOUS_CPS[] = "[SDK+UBIQUITOUS:CPS]";

// Ubiquitous SSL version string (UBIQUITOUS_SSL)
// Address: 0x02000C3C
const char version_UBIQUITOUS_SSL[] = "[SDK+UBIQUITOUS:SSL]";

// Abiosso libVCT version string (Abiosso_libVCT)
// Address: 0x02000C54
const char version_Abiosso_libVCT[] = "[SDK+Abiosso:libVCT 1.3.1]";

// Nintendo BACKUP version string (NINTENDO_BACKUP)
// Address: 0x02000C70
const char version_NINTENDO_BACKUP[] = "[SDK+NINTENDO:BACKUP]";

// Nintendo DWC_LOBBY version string (NINTENDO_DWC_LOBBY)
// Address: 0x02000C88
const char version_NINTENDO_DWC_LOBBY[] = "[SDK+NINTENDO:DWC_LOBBY]";
