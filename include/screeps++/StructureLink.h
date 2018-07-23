#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "OwnedStructure.h"

namespace Screeps {
	class StructureLink : public OwnedStructure {
	public:
		StructureLink();
		StructureLink(emscripten::val structureLink);

	public:
		int cooldown;
		int energy;
		int energyCapacity;

	public:
		int transferEnergy(StructureLink *target, int amount = -1);
	};
}