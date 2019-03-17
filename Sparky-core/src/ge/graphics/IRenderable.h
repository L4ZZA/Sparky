#pragma once

#include "ge/Common.h"

namespace ge { namespace graphics {

	class Renderer3D;

	class SP_API IRenderable
	{
	public:
		virtual void Render(Renderer3D& renderer) = 0;
	};

} }
