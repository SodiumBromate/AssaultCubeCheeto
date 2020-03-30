#pragma once

#include <vector>
#include <windows.h>
#include <TlHelp32.h>

DWORD GetProcID(const wchar_t* procNAME);

uintptr_t GetModuleBaseAddress(DWORD procID, const wchar_t* modName);

uintptr_t findDMAAddy(HANDLE hProc, uintptr_t ptr, std::vector<unsigned int> offsets);