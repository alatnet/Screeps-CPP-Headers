#pragma once

#include "OwnedStructure.h"
#include "Creep.h"

namespace Screeps {
	class StructureLab : public OwnedStructure {
	public:
		StructureLab();

	public:
		int cooldown;
		int energy;
		int energyCapacity;
		int mineralAmount;
		int mineralType;
		int mineralCapacity;

	public:
		int boostCreep(Creep creep, int bodyPartsCount=-1);
		int runReaction(StructureLab lab1, StructureLab lab2);
	};
}