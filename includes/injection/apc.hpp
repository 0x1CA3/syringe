#include <windows.h>
#include <winbase.h>
#include <Tlhelp32.h>
#include <iostream>
#include <vector>
#pragma once


/*
    *    includes/injection/apc.hpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


class APCInjection {
    public:
        void Execute(char *s, char *proc_name);
};