#pragma once

#include "ge/Common.h"
#include "Mesh.h"

namespace ge { namespace graphics {

	struct SP_API RendererUniform
	{
		String uniform;
		byte* value;
	};

	struct SP_API RenderCommand
	{
		Mesh* mesh;
		maths::mat4 transform;
		API::Shader* shader;
		std::vector<RendererUniform> uniforms;
	};

} }
