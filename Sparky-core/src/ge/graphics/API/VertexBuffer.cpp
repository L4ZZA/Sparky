#include "ge/sp.h"
#include "VertexBuffer.h"

#include "ge/platform/opengl/GLVertexBuffer.h"

#include "ge/graphics/API/Context.h"

namespace sp { namespace graphics { namespace API {

	VertexBuffer* VertexBuffer::Create(BufferUsage usage)
	{
		switch (Context::GetRenderAPI())
		{
			case RenderAPI::OPENGL:		return spnew GLVertexBuffer(usage);
		}
		return nullptr;
	}

} } }