#pragma once

#include "ge/graphics/API/IndexBuffer.h"
#include "GLCommon.h"

namespace ge { namespace graphics { namespace API {

	class GLIndexBuffer : public IndexBuffer
	{
	private:
		uint m_Handle;
		uint m_Count;
	public:
		GLIndexBuffer(uint16* data, uint count);
		GLIndexBuffer(uint* data, uint count);
		~GLIndexBuffer();

		void Bind() const;
		void Unbind() const;

		uint GetCount() const;
	};


} } }
