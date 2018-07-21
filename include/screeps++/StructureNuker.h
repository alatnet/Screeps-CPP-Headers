#pragma once

#include "OwnedStructure.h"
#include "RoomPosition.h"

namespace Screeps {
	class StructureNuker : public OwnedStructure {
	public:
		StructureNuker();

	public:
		int energy;
		int energyCapacity;
		int ghodium;
		int ghodiumCapacity;
		int cooldown;

	public:
		int launchNuke(RoomPosition pos);
	};
}