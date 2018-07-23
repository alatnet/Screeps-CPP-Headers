#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "OwnedStructure.h"

namespace Screeps {
	class StructureKeeperLair : public OwnedStructure {
	public:
		StructureKeeperLair();
		StructureKeeperLair(emscripten::val structureKeeperLair);

	public:
		int ticksToSpawn;
	};
}