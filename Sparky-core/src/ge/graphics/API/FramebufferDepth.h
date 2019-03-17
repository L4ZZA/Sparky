#pragma once

#include "Framebuffer.h"

namespace ge { namespace graphics {

	class SP_API FramebufferDepth : public Framebuffer
	{
	public:
		static FramebufferDepth* Create(uint width, uint height);
	};

} }