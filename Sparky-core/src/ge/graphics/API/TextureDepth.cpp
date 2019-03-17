#include "ge/sp.h"
#include "TextureDepth.h"

#include "ge/platform/opengl/GLTextureDepth.h"

#include "ge/graphics/API/Context.h"

#include "ge/system/Memory.h"

namespace sp { namespace graphics { namespace API {

	TextureDepth* TextureDepth::Create(uint width, uint height)
	{
		switch (Context::GetRenderAPI())
		{
			case RenderAPI::OPENGL:		return spnew GLTextureDepth(width, height);
		}
		return nullptr;
	}

} } }