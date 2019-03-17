#include "ge/pch.h"
#include "ge/system/MemoryManager.h"

#include <Windows.h>

namespace ge { namespace internal {

	SystemMemoryInfo MemoryManager::GetSystemInfo()
	{
		MEMORYSTATUSEX status;
		status.dwLength = sizeof(MEMORYSTATUSEX);
		GlobalMemoryStatusEx(&status);

		SystemMemoryInfo result =
		{
			(int64)status.ullAvailPhys,
			(int64)status.ullTotalPhys,

			(int64)status.ullAvailVirtual,
			(int64)status.ullTotalVirtual
		};
		return result;
	}


} }