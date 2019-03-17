#include "ge/pch.h"
#include "IndexBuffer.h"

#include "ge/platform/opengl/GLIndexBuffer.h"

#include "ge/graphics/API/Context.h"

namespace ge { namespace graphics { namespace API {

	IndexBuffer* IndexBuffer::Create(uint16* data, uint count)
	{
		switch (Context::GetRenderAPI())
		{
			case RenderAPI::OPENGL:		return spnew GLIndexBuffer(data, count);
		}
		return nullptr;
	}

	IndexBuffer* IndexBuffer::Create(uint* data, uint count)
	{
		switch (Context::GetRenderAPI())
		{
			case RenderAPI::OPENGL:		return spnew GLIndexBuffer(data, count);
		}
		return nullptr;
	}
	
} } }