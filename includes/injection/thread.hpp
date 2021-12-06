#include <windows.h>
#include <winbase.h>
#include <Tlhelp32.h>
#include <iostream>
#pragma once


/*
    *    includes/injection/thread.hpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


class TInjection {
    public:
        void Execute(int pid, char *s);
};