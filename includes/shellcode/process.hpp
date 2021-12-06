#include <windows.h>
#include <iostream>
#pragma once


/*
    *    includes/shellcode/process.hpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


class RemoteProcessShellcodeInjection {
    public:
        void Execute(int pid, char *s);
};