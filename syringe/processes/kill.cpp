#include "../../includes/processes/kill.hpp"


/*
    *    syringe/processes/kill.cpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


bool KillProc::Execute(int pid) {
    HANDLE kill = OpenProcess(PROCESS_TERMINATE, 0, pid);
    if (kill != NULL) {
        TerminateProcess(kill, 9);
        return true;
    }
    return false;
}