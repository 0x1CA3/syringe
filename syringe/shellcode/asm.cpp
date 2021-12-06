#include "../../includes/shellcode/asm.hpp"


/*
    *    syringe/shellcode/asm.cpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


void ASMShellcodeExecution::Execute(void) {
    __asm__ __volatile__(""s_code"");
}