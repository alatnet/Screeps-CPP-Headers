#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "Structure.h"

namespace Screeps {
	class StructureRoad : public Structure {
	public:
		StructureRoad();
		StructureRoad(emscripten::val structureRoad);

	public:
		int ticksToDecay;
	};
}