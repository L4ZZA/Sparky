#include "ge/pch.h"
#include "FramebufferDepth.h"

#include "Context.h"

#include "ge/platform/opengl/GLFramebufferDepth.h"

#include "ge/system/Memory.h"

namespace ge { namespace graphics {

	FramebufferDepth* FramebufferDepth::Create(uint width, uint height)
	{
		switch (API::Context::GetRenderAPI())
		{
			case API::RenderAPI::OPENGL:	return spnew GLFramebufferDepth(width, height);
		}
		return nullptr;
	}

	
} }