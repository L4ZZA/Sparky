#pragma once

#include "Layer.h"

#include "ge/Common.h"
#include "ge/Scene2D.h"
#include "ge/events/Event.h"
#include "ge/graphics/Renderable2D.h"
#include "ge/graphics/Mask.h"

namespace ge { namespace graphics {

	class SP_API Layer2D : public Layer
	{
	private:
		Renderer2D* m_Renderer;
	protected:
		Material* m_Material;
		Scene2D* m_Scene;
		std::vector<Renderable2D*> m_SubmittedRenderables;
	public:
		Layer2D(const maths::mat4& projectionMatrix);
		Layer2D(Scene2D* scene);
		virtual ~Layer2D();

		virtual void Init();
		virtual void OnInit(Renderer2D& renderer, Material& material);

		inline void SetMask(const Mask* mask) const { m_Renderer->SetMask(mask); }
		virtual Sprite* Add(Sprite* sprite);
		inline Scene2D* GetScene() { return m_Scene; }

		virtual Renderable2D* Submit(Renderable2D* renderable);

		void OnUpdateInternal(const Timestep& ts) override;
		virtual void OnRender(Renderer2D& renderer);
		void OnRender() override;
	protected:
		bool OnResize(uint width, uint height) override;
	};

} }

