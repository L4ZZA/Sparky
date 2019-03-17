#pragma once

#include "Component.h"

#include "ge/Common.h"
#include <ge/maths/maths.h>

namespace sp { namespace entity { namespace component {

	class SP_API TransformComponent : public Component
	{
	public:
		maths::mat4 transform;
	public:
		TransformComponent(const maths::mat4& transform);

		static ComponentType* GetStaticType()
		{
			static ComponentType type({ "Transform" });
			return &type;
		}

		inline virtual ComponentType* GetType() const override { return GetStaticType(); }
	};

} } }