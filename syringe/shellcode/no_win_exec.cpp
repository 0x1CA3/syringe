#include "../../includes/shellcode/no_win_exec.hpp"


/*
    *    syringe/shellcode/no_win_exec.cpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


void ExecuteShellCodeNoAPI::Execute(char *shellcode) {
    __declspec(allocate(".text")) char *s_s = shellcode;
    (*(void(*)())(&s_s))();
}