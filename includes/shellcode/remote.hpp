#include <windows.h>
#include <iostream>
#pragma once


/*
    *    includes/shellcode/remote.hpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


class RemoteProcessShellcodeExecution {
    public:
        void Execute(int pid, char *s);
};