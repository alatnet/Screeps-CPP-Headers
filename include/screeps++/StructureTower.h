#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "OwnedStructure.h"

namespace Screeps {
	class Creep;

	class StructureTower : public OwnedStructure {
	public:
		StructureTower();
		StructureTower(emscripten::val structureTower);

	public:
		int energy;
		int energyCapacity;

	public:
		int attack(Creep *target);
		int heal(Creep *target);
		int repair(Structure *target);
	};
}