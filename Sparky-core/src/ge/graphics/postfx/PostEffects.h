#pragma once

#include "ge/sp.h"
#include "ge/Common.h"

#include "ge/graphics/API/Framebuffer.h"
#include "ge/graphics/API/VertexArray.h"
#include "ge/graphics/API/IndexBuffer.h"
#include "PostEffectsPass.h"

namespace sp { namespace graphics {

	// The Post Effects pipeline
	class SP_API PostEffects
	{
	private:
		std::vector<PostEffectsPass*> m_Passes;
	public:
		PostEffects();
		~PostEffects();
		void Push(PostEffectsPass* pass);
		void Pop();

		void RenderPostEffects(Framebuffer* source, Framebuffer* target, API::VertexArray* quad, API::IndexBuffer* indices);
	};

} }