#include "ge/pch.h"

#include "ge/utils/Log.h"

#include "GLCommon.h"

namespace ge {

	GLenum GLCheckError()
	{
		return glGetError();
	}

	bool GLLogCall(const char* function, const char* file, int32 line)
	{
		GLenum error = GLCheckError();
		if (error != GL_NO_ERROR)
		{
			SP_ERROR("[OpenGL Error] (", error, "): ", function, " ", file, ":", line);
			return false;
		}
		return true;
	}

}