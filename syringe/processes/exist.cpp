#include "../../includes/processes/exist.hpp"


/*
    *    syringe/processes/exist.cpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


bool GetProcess::Execute(char *proc) {
    HANDLE ss = CreateToolhelp32Snapshot(TH32CS_SNAPALL, NULL);
    PROCESSENTRY32 process;
        
    process.dwSize = sizeof(process);
    BOOL hRes = Process32First(ss, &process);
        
    while (hRes) {
        if (strcmp(process.szExeFile, proc) == 0) {
            return true;
        }
        hRes = Process32Next(ss, &process);
    }
    CloseHandle(ss);
    return false;
}