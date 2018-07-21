#pragma once

#include "OwnedStructure.h"

namespace Screeps {
	class StructureLink : public OwnedStructure {
	public:
		StructureLink();

	public:
		int cooldown;
		int energy;
		int energyCapacity;

	public:
		int transferEnergy(StructureLink target, int amount = -1);
	};
}