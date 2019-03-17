#pragma once

#include "ge/Common.h"
#include "ge/Types.h"
#include "ge/maths/maths.h"

#include "ge/graphics/Mesh.h"
#include "ge/graphics/Material.h"
#include "ge/graphics/API/VertexArray.h"

namespace ge { namespace graphics { namespace MeshFactory {

	//
	// TODO: Return a Mesh instead of a VertexArray
	//

	SP_API Mesh* CreateQuad(float x, float y, float width, float height, MaterialInstance* material);
	SP_API Mesh* CreateQuad(const maths::vec2& position, const maths::vec2& size, MaterialInstance* material);

	SP_API Mesh* CreateCube(float size, MaterialInstance* material);
	SP_API Mesh* CreatePlane(float width, float height, const maths::vec3& normal, MaterialInstance* material);

} } }