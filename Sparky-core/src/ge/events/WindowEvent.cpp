#include "ge/sp.h"
#include "WindowEvent.h"

namespace ge { namespace events {

	ResizeWindowEvent::ResizeWindowEvent(uint width, uint height)
		: Event(ResizeWindowEvent::GetStaticType()), m_Size(maths::tvec2<uint>(width, height))
	{
	}

} }