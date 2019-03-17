#include "ge/pch.h"
#include "Shader.h"

#include "ge/platform/opengl/GLShader.h"

#include "ge/graphics/API/Context.h"

#include "ge/system/Memory.h"

namespace ge { namespace graphics { namespace API {

	const Shader* Shader::s_CurrentlyBound = nullptr;

	Shader* Shader::CreateFromFile(const String& name, const String& filepath, void* address)
	{
		String source = VFS::Get()->ReadTextFile(filepath);

		// TODO: Fix dynamic shader reloading
		switch (Context::GetRenderAPI())
		{
			case RenderAPI::OPENGL:
			{
				GLShader* result = address ? new(address) GLShader(name, source) : spnew GLShader(name, source);
				result->m_Path = filepath;
				return result;
			}
		}
		return nullptr;
	}

	Shader* Shader::CreateFromSource(const String& name, const String& source)
	{
		switch (Context::GetRenderAPI())
		{
			case RenderAPI::OPENGL:		return spnew GLShader(name, source);
		}
		return nullptr;
	}

	bool Shader::TryCompile(const String& source, String& error)
	{
		switch (Context::GetRenderAPI())
		{
			case RenderAPI::OPENGL:		return GLShader::TryCompile(source, error);
		}
		return nullptr;
	}

	bool Shader::TryCompileFromFile(const String& filepath, String& error)
	{
		String source = VFS::Get()->ReadTextFile(filepath);
		return TryCompile(source, error);
	}

} } }