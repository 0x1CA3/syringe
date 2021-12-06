#include "../../includes/misc/bit.hpp"


/*
    *    includes/misc/bit.cpp
    *    Date: 12/6/21
    *    Author: 'David Heffernan' on https://stackoverflow.com/questions/23696749/how-to-detect-on-c-is-windows-32-or-64-bit
*/


bool IsWin64::Execute(void) {
    #if defined(_WIN64)
        return true;
    #elif defined(_WIN32)
        BOOL f64 = false;
        return IsWow64Process(GetCurrentProcess(), &f64) && f64;
    #else
        return false;
    #endif
}