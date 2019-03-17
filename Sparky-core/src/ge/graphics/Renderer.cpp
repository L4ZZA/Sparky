#include "ge/pch.h"
#include "Renderer.h"

#include "ge/platform/opengl/GLRenderer.h"

#include "API/Context.h"
#include "ge/system/Memory.h"

namespace ge { namespace graphics {

	Renderer* Renderer::s_Instance = nullptr;

	void Renderer::Init()
	{
		switch (API::Context::GetRenderAPI())
		{
		case API::RenderAPI::OPENGL:	s_Instance = spnew GLRenderer(); break;
		}
		s_Instance->InitInternal();
	}

} }