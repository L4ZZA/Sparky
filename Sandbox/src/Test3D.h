#pragma once

#include <Sparky.h>

class Test3D : public ge::graphics::Layer3D
{
private:
	ge::graphics::Camera* m_MayaCamera;
	ge::graphics::Camera* m_FPSCamera;

	ge::entity::Entity* m_Cube;
	std::vector<ge::entity::Entity*> m_Spheres;
	ge::entity::Entity* m_Plane;
	ge::entity::Entity* m_Dagger;
	ge::graphics::PBRMaterial* m_DaggerMaterial;
	ge::graphics::MaterialInstance* m_SkyboxMaterial;
	ge::graphics::Light* m_Light;
	float m_Rotation;
	bool m_SetUniforms[2];
	std::vector<ge::graphics::PBRMaterial*> m_Materials;
public:
	Test3D();
	~Test3D();

	void OnInit(ge::graphics::Renderer3D& renderer, ge::graphics::Scene& scene) override;

	void OnTick() override;
	void OnUpdate(const ge::Timestep& ts) override;
	void OnEvent(ge::events::Event& event) override;

	void OnRender(ge::graphics::Renderer3D& renderer);
};