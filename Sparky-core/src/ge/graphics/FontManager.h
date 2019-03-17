#pragma once

#include "ge/sp.h"
#include "ge/Common.h"
#include "ge/Types.h"

#include "Font.h"

namespace ge { namespace graphics {

	class SP_API FontManager
	{
	private:
		static std::vector<Font*> s_Fonts;
		static maths::vec2 s_Scale;
	public:
		static void SetScale(const maths::vec2& scale);
		static inline const maths::vec2& GetScale() { return s_Scale; }

		static void Add(Font* font);
		static Font* Get();
		static Font* Get(const String& name);
		static Font* Get(uint size);
		static Font* Get(const String& name, uint size);
		static void Clean();
	private:
		FontManager() { }
	};

} }