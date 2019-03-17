#pragma once

#include "ge/Common.h"

namespace ge {

	struct Members;

	class SP_API Timer
	{
	private:
		byte m_Reserved[32];
		Members* m_Members;
	public:
		// Creates and starts timer
		Timer();
		// Resets and restarts timer
		virtual void Reset();
		// Returns time in seconds
		virtual float Elapsed();
		// Returns time in milliseconds
		virtual float ElapsedMillis();
	};

}