#include "ge/sp.h"
#include "VertexArray.h"

#include "ge/platform/opengl/GLVertexArray.h"

#include "ge/graphics/API/Context.h"
#include "ge/system/Memory.h"

namespace ge { namespace graphics { namespace API {

	VertexArray* VertexArray::Create()
	{
		switch (Context::GetRenderAPI())
		{
			case RenderAPI::OPENGL:		return spnew GLVertexArray();
		}
		return nullptr;
	}

} } }