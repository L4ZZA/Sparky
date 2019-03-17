#pragma once

#include "ge/sp.h"

#include "ge/graphics/ui/Button.h"
#include "ge/maths/maths.h"

namespace sp { namespace debug {

	struct IAction;
	

	class DebugMenuItem : public graphics::ui::Button
	{
	protected:
		IAction* m_Action;
	public:
		DebugMenuItem(IAction* action, const maths::Rectangle& bounds);

		void OnUpdate() override;

		inline const IAction* GetAction() const { return m_Action; }
	};

} }