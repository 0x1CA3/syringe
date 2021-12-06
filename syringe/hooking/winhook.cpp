#include "../../includes/hooking/winhook.hpp"


/*
    *    syringe/hooking/winhook.cpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


void Winhook::Execute(char *dll) {
	HMODULE lib = LoadLibraryA(dll);
	HOOKPROC haddr = (HOOKPROC)GetProcAddress(lib, "spotlessExport");
	HHOOK h_h = SetWindowsHookEx(WH_KEYBOARD, haddr, lib, 0);
	UnhookWindowsHookEx(h_h);
}