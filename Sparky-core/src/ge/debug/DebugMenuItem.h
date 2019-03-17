#pragma once

#include "ge/pch.h"

#include "ge/graphics/ui/Button.h"
#include "ge/maths/maths.h"

namespace ge { namespace debug {

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