#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "Structure.h"

namespace Screeps {
	class RoomPosition;

	class StructurePortal : public Structure {
	public:
		StructurePortal();
		StructurePortal(emscripten::val structurePortal);

	public:
		RoomPosition *destination;
		int ticksToDecay;
	};
}