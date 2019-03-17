#pragma once

#include "ge/pch.h"
#include "ge/Common.h"
#include "ge/Types.h"

#include "VertexBuffer.h"

namespace ge { namespace graphics { namespace API {

	class SP_API VertexArray
	{
	private:
		uint m_ID;
		std::vector<API::VertexBuffer*> m_Buffers;
	public:
		virtual API::VertexBuffer* GetBuffer(uint index = 0) = 0;
		virtual void PushBuffer(API::VertexBuffer* buffer) = 0;

		virtual void Bind() const = 0;
		virtual void Unbind() const = 0;

		virtual void Draw(uint count) const = 0;
	public:
		static VertexArray* Create();
	};

} } }