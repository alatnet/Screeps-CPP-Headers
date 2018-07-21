#pragma once

#include "Common.h"

#include "OwnedStructure.h"

namespace Screeps {
	class StructurePowerSpawn : public OwnedStructure {
	public:
		StructurePowerSpawn();

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