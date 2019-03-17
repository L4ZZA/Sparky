#pragma once

#include "ge/sp.h"
#include "ge/Common.h"
#include "ge/Types.h"

#include "Shader.h"

namespace ge { namespace graphics {

	class SP_API ShaderManager
	{
	private:
		static std::vector<API::Shader*> s_Shaders;
	public:
		static void Add(API::Shader* shader);
		static API::Shader* Get(const String& name);
		static void Clean();

		static void Reload(const String& name);
		static void Reload(const API::Shader* shader);
	private:
		ShaderManager() { }
	};

} }