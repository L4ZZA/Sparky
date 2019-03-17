#include "ge/sp.h"
#include "DebugMenuItem.h"
#include "DebugMenuAction.h"

#include "ge/graphics/FontManager.h"

#include "DebugMenu.h"

namespace ge { namespace debug {

	using namespace graphics;

	DebugMenuItem::DebugMenuItem(IAction* action, const maths::Rectangle& bounds)
		: Button(action->ToString(), bounds, [action]() { action->OnAction(); }), m_Action(action)
	{
	}

	void DebugMenuItem::OnUpdate()
	{
		m_Label = m_Action->ToString();
		m_Font = FontManager::Get((uint)DebugMenu::Get()->GetSettings().fontSize);
	}

} }