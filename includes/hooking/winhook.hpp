#include <windows.h>
#include <iostream>
#pragma once


/*
    *    includes/hooking/winhook.hpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


class Winhook {
    public:
        void Execute(char *dll);
};