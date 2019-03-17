#pragma once

#include "ge/sp.h"
#include "ge/Types.h"
#include "ge/graphics/API/Texture.h"

namespace ge { namespace graphics {

	class SP_API TextureManager
	{
	private:
		static std::vector<API::Texture*> m_Textures;
	public:
		static API::Texture* Add(API::Texture* texture);
		static API::Texture* Get(const String& name);
		static void Clean();
	private:
		TextureManager() { }
	};

} }