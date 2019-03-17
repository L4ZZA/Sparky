#pragma once

#include "Component.h"

#include "ge/Common.h"
#include "ge/graphics/Sprite.h"

namespace ge { namespace entity { namespace component {

	class SP_API SpriteComponent : public Component
	{
	public:
		graphics::Sprite* sprite;
	public:
		SpriteComponent(graphics::Sprite* sprite);

		static ComponentType* GetStaticType()
		{
			static ComponentType type({ "Sprite" });
			return &type;
		}

		inline virtual ComponentType* GetType() const override { return GetStaticType(); }
	};

} } }

