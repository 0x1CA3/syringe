#include "../../includes/injection/dll.hpp"


/*
    *    syringe/injection/dll.cpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


void DllInject::Execute(int pid, wchar_t p_dll) {
    HANDLE h = OpenProcess(PROCESS_ALL_ACCESS, FALSE, (DWORD)pid);
    PVOID buf = VirtualAllocEx(h, NULL, sizeof(p_dll), MEM_COMMIT, PAGE_READWRITE); 

    WriteProcessMemory(h, buf, (LPVOID)p_dll, sizeof(p_dll), NULL);
    PTHREAD_START_ROUTINE thread = (PTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandle(TEXT("kernel32")), "LoadLibraryW");

    CreateRemoteThread(h, NULL, 0, thread, buf, 0, NULL);
    CloseHandle(h);
}