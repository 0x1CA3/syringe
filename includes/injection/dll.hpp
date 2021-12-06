#include <windows.h>
#include <iostream>
#pragma once


/*
    *    includes/injection/dll.hpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


class DllInject {
    public:
        void Execute(int pid, wchar_t p_dll);
};