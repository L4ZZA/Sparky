#include "ge/sp.h"
#include "Embedded.h"

namespace ge { namespace internal {

	byte DEFAULT_FONT_ARRAY[] =
	{
#include "files/SourceSansPro-Light.embed"
	};

	byte* DEFAULT_FONT = DEFAULT_FONT_ARRAY;
	uint DEFAULT_FONT_SIZE = sizeof(DEFAULT_FONT_ARRAY);
	
} }