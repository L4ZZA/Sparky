#include "ge/sp.h"
#include "MeshComponent.h"

namespace ge { namespace entity { namespace component {

	MeshComponent::MeshComponent(graphics::Mesh* mesh)
		: mesh(mesh)
	{
	}

} } }