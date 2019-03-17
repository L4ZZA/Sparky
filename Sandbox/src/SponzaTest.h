#pragma once

#include <Sparky.h>

class SponzaTest : public ge::graphics::Layer3D
{
private:
	ge::graphics::Camera* m_MayaCamera;
	ge::graphics::Camera* m_FPSCamera;
	ge::graphics::MaterialInstance* m_SkyboxMaterial;

public:
	SponzaTest();
	~SponzaTest();

	void OnInit(ge::graphics::Renderer3D& renderer, ge::graphics::Scene& scene) override;

	void OnTick() override;
	void OnUpdate(const ge::Timestep& ts) override;
	void OnEvent(ge::events::Event& event) override;

	void OnRender(ge::graphics::Renderer3D& renderer);
};