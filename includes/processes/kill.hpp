#include <windows.h>
#include <winbase.h>
#include <Tlhelp32.h>
#include <iostream>
#pragma once


/*
    *    includes/processes/kill.hpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


class KillProc {
    public:
        bool Execute(int pid);
};