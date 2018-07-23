#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "OwnedStructure.h"

namespace Screeps {
	class RoomPosition;

	class StructureNuker : public OwnedStructure {
	public:
		StructureNuker();
		StructureNuker(emscripten::val structureNuker);

	public:
		int energy;
		int energyCapacity;
		int ghodium;
		int ghodiumCapacity;
		int cooldown;

	public:
		int launchNuke(RoomPosition *pos);
	};
}