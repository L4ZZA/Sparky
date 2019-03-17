#include "ge/sp.h"
#include "Context.h"

#include "ge/platform/opengl/GLContext.h"

#include "ge/system/Memory.h"

namespace sp { namespace graphics { namespace API {

	Context* Context::s_Context = nullptr;
	RenderAPI Context::s_RenderAPI = RenderAPI::NONE;

	void Context::Create(WindowProperties properties, void* deviceContext)
	{
		switch (GetRenderAPI())
		{
			case RenderAPI::OPENGL:		s_Context = spnew GLContext(properties, deviceContext); break;
		}
	}

} } }