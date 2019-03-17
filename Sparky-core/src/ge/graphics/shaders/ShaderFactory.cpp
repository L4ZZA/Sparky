#include "ge/sp.h"
#include "ShaderFactory.h"

#include "ge/graphics/API/Context.h"

namespace sp { namespace graphics { namespace ShaderFactory {

#if defined(SP_PLATFORM_WINDOWS)

	static const char* s_BatchRendererShaderGL =
#include "ge/platform/opengl/shaders/BatchRenderer.shader"
		;

	static const char* s_SimpleShader =
#include "default/Simple.shader"
		;

	static const char* s_BasicLightShader =
#include "default/BasicLight.shader"
		;

	static const char* s_GeometryPassShader =
#include "default/GeometryPass.shader"
		;

	static const char* s_DebugShader =
#include "default/Debug.shader"
		;
#else
#error TODO: GLES shaders!
#endif

	API::Shader* BatchRendererShader()
	{
		switch (API::Context::GetRenderAPI())
		{
			case API::RenderAPI::OPENGL: return API::Shader::CreateFromSource("BatchRenderer", s_BatchRendererShaderGL);
		}
		return nullptr;
	}

	API::Shader* SimpleShader()
	{
		return API::Shader::CreateFromSource("Simple Shader", s_SimpleShader);
	}

	API::Shader* BasicLightShader()
	{
		return API::Shader::CreateFromSource("Basic Light Shader", s_BasicLightShader);
	}

	API::Shader* GeometryPassShader()
	{
		return API::Shader::CreateFromSource("Geometry Pass Shader", s_GeometryPassShader);
	}

	API::Shader* DebugShader()
	{
		return API::Shader::CreateFromSource("Debug Shader", s_DebugShader);
	}

} } }