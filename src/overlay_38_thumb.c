#include "overlay_38_thumb.h"

// Global state variable (from assembly: _02226020)
static u32 sGlobalState = 0;

// ov38_0221BA00 - Assembly: asm/overlay_38_thumb.s
// Updates global state value
// Parameters: value - new value to store
// Returns: void
void ov38_0221BA00(u32 value) {
    // Store value in global state (combines with existing value)
    // Equivalent to: *global = (value << 16) | value
    sGlobalState = (value << 16) | value;
}

// ov38_0221BA10 - Assembly: asm/overlay_38_thumb.s
// Calculates a modified hash/ID based on global state
// Parameters: none (uses global state)
// Returns: modified value (upper 16 bits)
u32 ov38_0221BA10(void) {
    // Multiply current state by 0x45 and add 0x1111
    u32 temp = sGlobalState * 0x45 + 0x1111;
    
    // Mask with 0x7FFFFFFF
    temp = temp & 0x7FFFFFFF;
    
    // Store back
    sGlobalState = temp;
    
    // Return upper 16 bits
    return (temp >> 16) & 0xFFFF;
}

// ov38_0221BA38 - Assembly: asm/overlay_38_thumb.s
// Complex data processing/encryption function
// Parameters: structPtr, length, data, param3
// Returns: result code
int ov38_0221BA38(Ov38Struct *structPtr, u32 length, void *data, u32 param3) {
    // Calculate some value
    u32 calcValue = ov38_0221BB44(length + 1);
    
    if (param3 >= calcValue) {
        return 2;
    }
    
    // Find pointer
    void *ptr = ov00_021EC2A8(0xA, structPtr);
    if (ptr == NULL) {
        return 1;
    }
    
    // Extract bytes from structPtr
    u8 byte0 = (structPtr >> 24) & 0xFF;
    u8 byte1 = (structPtr >> 16) & 0xFF;
    u8 byte2 = (structPtr >> 8) & 0xFF;
    u8 byte3 = structPtr & 0xFF;
    
    // Calculate checksum
    u32 checksum = 0;
    for (u32 i = 0; i < length; i++) {
        checksum += ((u8 *)data)[i];
    }
    
    // Add struct bytes
    checksum += byte0 + byte1 + byte2 + byte3;
    
    // Store checksum in global
    ov38_0221BA00(checksum);
    
    // Calculate XOR values
    u8 xor0 = ov38_0221BA10() ^ byte0;
    ((u8 *)ptr)[4] = xor0;
    
    u8 xor1 = ov38_0221BA10() ^ byte1;
    ((u8 *)ptr)[5] = xor1;
    
    u8 xor2 = ov38_0221BA10() ^ byte2;
    ((u8 *)ptr)[6] = xor2;
    
    u8 xor3 = ov38_0221BA10() ^ byte3;
    ((u8 *)ptr)[7] = xor3;
    
    // Process data bytes
    for (u32 i = 0; i < length; i++) {
        u8 val = ov38_0221BA10() ^ ((u8 *)data)[i];
        ((u8 *)ptr)[8 + i] = val;
    }
    
    // Calculate final value
    u32 finalVal = 0x4A3B2C1D ^ checksum;
    
    // Store first 4 bytes
    ((u8 *)ptr)[0] = (finalVal >> 24) & 0xFF;
    ((u8 *)ptr)[1] = (finalVal >> 16) & 0xFF;
    ((u8 *)ptr)[2] = (finalVal >> 8) & 0xFF;
    ((u8 *)ptr)[3] = finalVal & 0xFF;
    
    // Call additional function
    ov00_021FFC18(ptr, data + 8, 2);
    
    // Get length
    u32 len = ov38_0221BB44(length + 1);
    
    // Store zero at end
    *(u8 *)(data + len) = 0;
    
    // Call final function
    ov00_021EC2EC(0xA, ptr);
    
    return 0;
}

// ov38_0221BB44 - Assembly: asm/overlay_38_thumb.s
// Division helper - divides by 3 and returns result
// Parameters: value
// Returns: processed value
u32 ov38_0221BB44(u32 value) {
    u32 result = _u32_div_f(value, 3);
    u32 remainder = value % 3;
    
    // Return (result + remainder) * 4
    return (result + remainder) << 2;
}

// ov38_0221BB68 - Assembly: asm/overlay_38_thumb.s
// State setter with 8-case jump table
// Parameters: state - state value (0-7)
// Returns: void
void ov38_0221BB68(int state) {
    // Global state pointer (from assembly: _02225040)
    static u32 *sStatePtr = NULL;
    
    if (state < 0 || state > 7) {
        state = 0;
    }
    
    // Set state value based on case
    // The switch sets different state values
    switch (state) {
        case 0:
            if (sStatePtr) *sStatePtr = 0;
            break;
        case 1:
            if (sStatePtr) *sStatePtr = 1;
            break;
        case 2:
            if (sStatePtr) *sStatePtr = 2;
            break;
        case 3:
            if (sStatePtr) *sStatePtr = 3;
            break;
        case 4:
            if (sStatePtr) *sStatePtr = 4;
            break;
        case 5:
            if (sStatePtr) *sStatePtr = 5;
            break;
        case 6:
            if (sStatePtr) *sStatePtr = 6;
            break;
        case 7:
        default:
            if (sStatePtr) *sStatePtr = 0;
            break;
    }
}

// ov38_0221BBD0 - Assembly: asm/overlay_38_thumb.s
// Main handler for data operations - complex state machine
// Parameters: param0, param1, param2
// Returns: void
void ov38_0221BBD0(int param0, int param1, int param2) {
    // Global state pointer
    static u32 *sStatePtr = NULL;
    
    // Set some value
    sStatePtr = (u32 *)0x02225040;
    if (sStatePtr) *sStatePtr = -1;
    
    u32 state = sStatePtr ? *sStatePtr : 0;
    
    // State machine
    if (state == 1) {
        return;
    }
    
    if (param2 == 0) {
        if (state == 4) {
            // Special processing for state 4
            if (param1 == 0x20) {
                // Calculate SHA1 hash
                // Copy data to buffer and calculate
                char buffer[17];
                char buffer2[22];
                
                // Build string
                strncat(buffer, (char *)0x02224E4C + 0x14, 0x11);
                strncat(buffer2, (char *)0x02225074, 0x15);
                strcat(buffer, buffer2);
                
                // Calculate SHA1
                MATH_CalcSHA1(buffer, strlen(buffer), sStatePtr + 6);
                
                // Convert to hex
                char *hashPtr = (char *)(sStatePtr + 10);
                for (int i = 0; i < 20; i++) {
                    u8 byte = ((u8 *)sStatePtr + 0x28)[i];
                    hashPtr[i * 2] = "0123456789ABCDEF"[(byte >> 4) & 0xF];
                    hashPtr[i * 2 + 1] = "0123456789ABCDEF"[byte & 0xF];
                }
                
                // Call processing
                ov38_0221BA38(sStatePtr, 
                             *(u32 *)(sStatePtr + 0x10),
                             *(u32 *)(sStatePtr + 0x14),
                             *(u32 *)(sStatePtr + 0x18),
                             *(u32 *)(sStatePtr + 0x2C));
                
                if (param0 == 0 || param0 == 1) {
                    *sStatePtr = 1;
                    return;
                }
                *sStatePtr = 5;
                return;
            }
        }
        
        if (state == 6) {
            // State 6 processing
            if (param1 == 0x16) {
                // Check strings and set result
                if (strncmp((char *)param0, "WIRELESS", 0x16) == 0) {
                    *sStatePtr = 1;
                    *(sStatePtr + 2) = 0x1A;
                    return;
                }
                if (strncmp((char *)param0, "WIFI", 0x16) == 0) {
                    *sStatePtr = 1;
                    *(sStatePtr + 2) = 0x1B;
                    return;
                }
                if (strncmp((char *)param0, "INFRARED", 0x16) == 0) {
                    *sStatePtr = 1;
                    *(sStatePtr + 2) = 0x1C;
                    return;
                }
                if (strncmp((char *)param0, "BLUETOOTH", 0x16) == 0) {
                    *sStatePtr = 1;
                    *(sStatePtr + 2) = 0x1D;
                    return;
                }
                if (strncmp((char *)param0, "GM001", 0x16) == 0) {
                    *sStatePtr = 1;
                    *(sStatePtr + 2) = 0x1E;
                    return;
                }
                if (strncmp((char *)param0, "GAMEBOY", 0x16) == 0) {
                    *sStatePtr = 1;
                    *(sStatePtr + 2) = 0x1F;
                    return;
                }
            }
            
            // Compare lengths and copy
            if (param1 < *(sStatePtr + 8)) {
                memcpy(*(sStatePtr + 0x1C), param0, param1);
                *sStatePtr = 7;
            } else {
                memcpy(*(sStatePtr + 0x1C), param0, param1);
                *sStatePtr = 1;
                *(sStatePtr + 2) = 0x20;
            }
            
            *(sStatePtr + 3) = param1;
            return;
        }
        
        // Default case
        *sStatePtr = 1;
        return;
    }
    
    // param2 != 0
    *sStatePtr = 1;
}