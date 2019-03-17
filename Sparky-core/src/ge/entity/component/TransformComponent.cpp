#include "ge/pch.h"
#include "TransformComponent.h"

namespace ge { namespace entity { namespace component {

	TransformComponent::TransformComponent(const maths::mat4& transform)
		: transform(transform)
	{
	}

} } }