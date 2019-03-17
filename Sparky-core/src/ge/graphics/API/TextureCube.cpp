#include "ge/sp.h"
#include "TextureCube.h"

#include "ge/system/Memory.h"

#include "ge/platform/opengl/GLTextureCube.h"

#include "ge/graphics/API/Context.h"

namespace sp { namespace graphics { namespace API {

	TextureCube* TextureCube::CreateFromFile(const String& filepath)
	{
		switch (Context::GetRenderAPI())
		{
			case RenderAPI::OPENGL:		return spnew GLTextureCube(filepath, filepath);
		}
		return nullptr;
	}

	TextureCube* TextureCube::CreateFromFiles(const String* files)
	{
		switch (Context::GetRenderAPI())
		{
			case RenderAPI::OPENGL:		return spnew GLTextureCube(files[0], files);
		}
		return nullptr;
	}

	TextureCube* TextureCube::CreateFromVCross(const String* files, int32 mips)
	{
		switch (Context::GetRenderAPI())
		{
			case RenderAPI::OPENGL:		return spnew GLTextureCube(files[0], files, mips, InputFormat::VERTICAL_CROSS);
		}
		return nullptr;
	}

} } }