#include "ge/sp.h"
#include "Framebuffer2D.h"

#include "Context.h"

#include "ge/platform/opengl/GLFramebuffer2D.h"

#include "ge/system/Memory.h"

namespace ge { namespace graphics {

	Framebuffer2D* Framebuffer2D::Create(uint width, uint height)
	{
		switch (API::Context::GetRenderAPI())
		{
			case API::RenderAPI::OPENGL:	return spnew GLFramebuffer2D(width, height);
		}
		return nullptr;
	}

} }