#pragma once

#include "ge/sp.h"
#include "ge/Common.h"
#include "ge/Types.h"
#include "ge/maths/maths.h"

#include "Context.h"

#include "ge/platform/opengl/GLTypes.h"

namespace ge { namespace graphics { namespace API {

	struct SP_API BufferElement
	{
		String name;
		uint type;
		uint size;
		uint count;
		uint offset;
		bool normalized;
	};

	class SP_API BufferLayout
	{
	private:
		uint m_Size;
		std::vector<BufferElement> m_Layout;
	public:
		BufferLayout();

		template<typename T>
		void Push(const String& name, uint count = 1, bool normalized = false)
		{
			SP_ASSERT(false, "Unkown type!");
		}

		template<>
		void Push<float>(const String& name, uint count, bool normalized)
		{
			switch (Context::GetRenderAPI())
			{
				case RenderAPI::OPENGL:
					Push(name, GL_FLOAT, sizeof(float), count, normalized);
					break;
			}
		}

		template<>
		void Push<uint>(const String& name, uint count, bool normalized)
		{
			switch (Context::GetRenderAPI())
			{
				case RenderAPI::OPENGL:
					Push(name, GL_UNSIGNED_INT, sizeof(uint), count, normalized);
					break;
			}
		}

		template<>
		void Push<byte>(const String& name, uint count, bool normalized)
		{
			switch (Context::GetRenderAPI())
			{
				case RenderAPI::OPENGL:
					Push(name, GL_UNSIGNED_BYTE, sizeof(byte), count, normalized);
					break;
			}
		}

		template<>
		void Push<maths::vec2>(const String& name, uint count, bool normalized)
		{
			switch (Context::GetRenderAPI())
			{
				case RenderAPI::OPENGL:
					Push(name, GL_FLOAT, sizeof(float), 2, normalized);
					break;
			}
		}

		template<>
		void Push<maths::vec3>(const String& name, uint count, bool normalized)
		{
			switch (Context::GetRenderAPI())
			{
				case RenderAPI::OPENGL:
					Push(name, GL_FLOAT, sizeof(float), 3, normalized);
					break;
			}
		}

		template<>
		void Push<maths::vec4>(const String& name, uint count, bool normalized)
		{
			switch (Context::GetRenderAPI())
			{
				case RenderAPI::OPENGL:
					Push(name, GL_FLOAT, sizeof(float), 4, normalized);
					break;
			}
		}

		inline const std::vector<BufferElement>& GetLayout() const { return m_Layout; }
		inline uint GetStride() const { return m_Size; }
	private:
		void Push(const String& name, uint type, uint size, uint count, bool normalized);
	};


} } }