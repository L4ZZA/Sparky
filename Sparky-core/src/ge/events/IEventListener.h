#pragma once

#include "Event.h"

namespace ge { namespace events {

	class SP_API IEventListener
	{
	public:
		virtual void OnEvent(Event& event) = 0;
	};

} }