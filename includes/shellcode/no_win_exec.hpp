#include <iostream>
#pragma section(".text")
#pragma once


/*
    *    includes/shellcode/no_win_exec.hpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


class ExecuteShellCodeNoAPI {
    public:
        void Execute(char *shellcode);
};