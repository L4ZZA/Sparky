#pragma once

#include <Sparky.h>

class DeferredTest : public ge::graphics::Layer3D
{
private:
	ge::graphics::Scene* m_Scene;
	ge::entity::Entity* m_Cube;
	ge::entity::Entity* m_Sphere;
	ge::entity::Entity* m_Plane;
	float m_Rotation;
	bool m_SetUniforms[2];
public:
	DeferredTest();
	~DeferredTest();

	void OnInit(ge::graphics::Renderer3D& renderer, ge::graphics::Scene& scene) override;

	void OnTick() override;
	void OnUpdate(const ge::Timestep& ts) override;
	void OnEvent(ge::events::Event& event) override;

	void OnRender(ge::graphics::Renderer3D& renderer);
};