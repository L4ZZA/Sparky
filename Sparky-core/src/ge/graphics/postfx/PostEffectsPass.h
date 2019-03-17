#pragma once

#include "ge/Common.h"
#include "ge/graphics/API/Framebuffer.h"
#include "../Material.h"

namespace ge { namespace graphics {

	class SP_API PostEffectsPass
	{
	private:
		Material* m_Material;
	public:
		PostEffectsPass(API::Shader* shader);
		~PostEffectsPass();

		void RenderPass(Framebuffer* target);
	};

} }