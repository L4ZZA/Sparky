#pragma once

#include "ge/Common.h"
#include "ge/Types.h"

#include "ge/maths/vec4.h"
#include "ge/maths/tvec2.h"

#include "Texture.h"

namespace sp { namespace graphics {

	class SP_API Framebuffer
	{
	public:
		virtual void Bind() const = 0;
		virtual void Unbind() const = 0;
		virtual void Clear() = 0;

		virtual uint GetWidth() const = 0;
		virtual uint GetHeight() const = 0;
		virtual API::Texture* GetTexture() const = 0;
	protected:
		virtual void Init() {};
	};

} }