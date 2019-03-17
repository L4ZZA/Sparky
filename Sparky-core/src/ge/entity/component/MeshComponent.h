#pragma once

#include "Component.h"

#include "ge/Common.h"
#include "ge/graphics/Mesh.h"

namespace sp { namespace entity { namespace component {

	class SP_API MeshComponent : public Component
	{
	public:
		graphics::Mesh* mesh;
	public:
		MeshComponent(graphics::Mesh* mesh);

		static ComponentType* GetStaticType()
		{
			static ComponentType type({ "Mesh" });
			return &type;
		}

		inline virtual ComponentType* GetType() const override { return GetStaticType(); }
	};

} } }
