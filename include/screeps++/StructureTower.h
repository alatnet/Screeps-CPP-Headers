#pragma once

#include "OwnedStructure.h"
#include "Creep.h"

namespace Screeps {
	class StuctureTower : public OwnedStructure {
	public:
		StuctureTower();

	public:
		int energy;
		int energyCapacity;

	public:
		int attack(Creep target);
		int heal(Creep target);
		int repair(Structure target);
	};
}