#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>

#include "Structure.h"

namespace Screeps {
	class OwnedStructure : public Structure {
	public:
		OwnedStructure();
		OwnedStructure(emscripten::val ownedStructure);
	
	public:
		bool my;
		SCREEPS_STR owner;
	};
}