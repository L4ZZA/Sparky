#pragma once

#include "Texture.h"

namespace ge { namespace graphics { namespace API {

	class SP_API TextureDepth : public Texture
	{
	public:
		static TextureDepth* Create(uint width, uint height);
	};

} } }