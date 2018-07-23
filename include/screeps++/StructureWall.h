#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "Structure.h"

namespace Screeps {
	class StructureWall : public Structure {
	public:
		StructureWall();
		StructureWall(emscripten::val structureWall);
	};
}