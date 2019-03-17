#pragma once

#include <Sparky.h>

class Test2D : public ge::graphics::Layer2D
{
private:
	ge::graphics::Label** m_DebugInfo;
	ge::graphics::Renderer2D* m_Renderer;
public:
	Test2D();
	~Test2D();

	void OnInit(ge::graphics::Renderer2D& renderer, ge::graphics::Material& material) override;

	void OnTick() override;
	void OnUpdate(const ge::Timestep& ts) override;

	bool OnKeyPressedEvent(ge::events::KeyPressedEvent& event);
	bool OnMousePressedEvent(ge::events::MousePressedEvent& event);
	void OnEvent(ge::events::Event& event) override;

	void OnRender(ge::graphics::Renderer2D& renderer) override;
};