#define LIB_EXPORT
#include "pch.h"
#include "AinBLib.h"
#include <cstring>
bool AinB(const char* strB, const char* strA) {
    int count = 0;
    const char* buf = strB;
    while (strstr(buf, strA) != NULL) {
        buf = strstr(buf, strA);
        ++count;
        ++buf;
    }
    if (count == 0) return false;
    else return true;
}#   T P 1  
 