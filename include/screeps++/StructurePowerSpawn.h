#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>

#include "OwnedStructure.h"

namespace Screeps {
	class StructurePowerSpawn : public OwnedStructure {
	public:
		StructurePowerSpawn();
		StructurePowerSpawn(emscripten::val structurePowerSpawn);

	public:
		int energy;
		int energyCapacity;
		int power;
		int powerCapacity;

	public:
		void createPowerCreep(SCREEPS_STR roomName);
		int processPower();
	};
}