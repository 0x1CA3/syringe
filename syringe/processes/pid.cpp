#include "../../includes/processes/pid.hpp"


/*
    *    includes/processes/pid.hpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


int GetPID::Execute(char *proc) {
    HANDLE ss = CreateToolhelp32Snapshot(TH32CS_SNAPALL, NULL);
    PROCESSENTRY32 process;
        
    process.dwSize = sizeof(process);
    BOOL hRes = Process32First(ss, &process);
        
    while (hRes) {
        if (strcmp(process.szExeFile, proc) == 0) {
            return (DWORD)process.th32ProcessID;
        }
        hRes = Process32Next(ss, &process);
    }
    CloseHandle(ss);
    return -1;
}