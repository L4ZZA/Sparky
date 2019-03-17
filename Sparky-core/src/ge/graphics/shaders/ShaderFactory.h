#pragma once

#include "ge/Common.h"
#include "Shader.h"

namespace ge { namespace graphics { namespace ShaderFactory {

	SP_API API::Shader* BatchRendererShader();
	SP_API API::Shader* SimpleShader();
	SP_API API::Shader* BasicLightShader();

	SP_API API::Shader* GeometryPassShader();

	SP_API API::Shader* DebugShader();

} } }