#pragma once

#include "ge/Common.h"
#include "ge/Types.h"

#include "ge/graphics/API/VertexBuffer.h"

namespace ge { namespace graphics { namespace API {

	class SP_API IndexBuffer
	{
	public:
		virtual void Bind() const = 0;
		virtual void Unbind() const = 0;

		virtual uint GetCount() const = 0;
	public:
		static IndexBuffer* Create(uint16* data, uint count);
		static IndexBuffer* Create(uint* data, uint count);
	};

} } }