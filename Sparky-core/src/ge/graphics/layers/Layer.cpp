#include "ge/sp.h"
#include "Layer.h"

#include "ge/events/Events.h"
#include "ge/utils/Log.h"

namespace ge { namespace graphics {

	Layer::Layer()
		: m_Window(Window::GetWindowClass(nullptr)), m_Visible(true)
	{
	}

	Layer::~Layer()
	{
	}

	void Layer::Init()
	{
	}

	void Layer::OnEvent(events::Event& event)
	{
		events::EventDispatcher dispatcher(event);
		dispatcher.Dispatch<events::ResizeWindowEvent>([this](events::ResizeWindowEvent& e) { return OnResize(e.GetWidth(), e.GetHeight()); });
	}

	bool Layer::OnResize(uint width, uint height)
	{
		return false;
	}

	void Layer::OnTick()
	{
	}

	void Layer::OnUpdate(const Timestep& ts)
	{
	}

	void Layer::OnUpdateInternal(const Timestep& ts)
	{
	}

	void Layer::OnRender()
	{
	}

} }