#pragma once

#include "Allocator.h"

#define spnew		new(__FILE__, __LINE__)
#define spdel		delete

#pragma warning(disable : 4595)

inline void* operator new(size_t size)
{
	return ge::Allocator::Allocate(size);
}

inline void* operator new(size_t size, const char* file, uint line)
{
	return ge::Allocator::AllocateDebug(size, file, line);
}

inline void* operator new[](size_t size)
{
	return ge::Allocator::Allocate(size);
}

inline void* operator new[](size_t size, const char* file, uint line)
{
	return ge::Allocator::AllocateDebug(size, file, line);
}

inline void operator delete(void* block)
{
	ge::Allocator::Free(block);
}

inline void operator delete(void* block, const char* file, uint line)
{
	ge::Allocator::FreeDebug(block, file, line);
}

inline void operator delete[](void* block)
{
	ge::Allocator::Free(block);
}

inline void operator delete[](void* block, const char* file, uint line)
{
	ge::Allocator::FreeDebug(block, file, line);
}

#pragma warning(default : 4595)
