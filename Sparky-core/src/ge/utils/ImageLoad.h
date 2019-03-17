#pragma once

#include <string>

#include <ge/Types.h>
#include <ge/utils/Log.h>

#ifdef LoadImage
#undef LoadImage
#endif

namespace ge {

	SP_API byte* LoadImage(const char* filename, uint* width = nullptr, uint* height = nullptr, uint* bits = nullptr, bool flipY = false);
	SP_API byte* LoadImage(const String& filename, uint* width = nullptr, uint* height = nullptr, uint* bits = nullptr, bool flipY = false);

}