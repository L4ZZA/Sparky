#include "ge/sp.h"
#include "Texture2D.h"

#include "ge/system/Memory.h"

#include "ge/platform/opengl/GLTexture2D.h"

#include "ge/graphics/API/Context.h"

namespace ge { namespace graphics { namespace API {

	Texture2D* Texture2D::Create(uint width, uint height, TextureParameters parameters, TextureLoadOptions loadOptions)
	{
		switch (Context::GetRenderAPI())
		{
			case RenderAPI::OPENGL:		return spnew GLTexture2D(width, height, parameters, loadOptions);
		}
		return nullptr;
	}

	Texture2D* Texture2D::CreateFromFile(const String& filepath, TextureParameters parameters, TextureLoadOptions loadOptions)
	{
		switch (Context::GetRenderAPI())
		{
			case RenderAPI::OPENGL:		return spnew GLTexture2D(filepath, filepath, parameters, loadOptions);
		}
		return nullptr;
	}

	Texture2D* Texture2D::CreateFromFile(const String& filepath, TextureLoadOptions loadOptions)
	{
		switch (Context::GetRenderAPI())
		{
		case RenderAPI::OPENGL:		return spnew GLTexture2D(filepath, filepath, TextureParameters(), loadOptions);
		}
		return nullptr;
	}

	Texture2D* Texture2D::CreateFromFile(const String& name, const String& filepath, TextureParameters parameters, TextureLoadOptions loadOptions)
	{
		switch (Context::GetRenderAPI())
		{
			case RenderAPI::OPENGL:		return spnew GLTexture2D(name, filepath, parameters, loadOptions);
		}
		return nullptr;
	}

	Texture2D* Texture2D::CreateFromFile(const String& name, const String& filepath, TextureLoadOptions loadOptions)
	{
		switch (Context::GetRenderAPI())
		{
		case RenderAPI::OPENGL:		return spnew GLTexture2D(name, filepath, TextureParameters(), loadOptions);
		}
		return nullptr;
	}

} } }