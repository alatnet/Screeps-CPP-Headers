#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "OwnedStructure.h"

namespace Screeps {
	class Creep;

	class StructureLab : public OwnedStructure {
	public:
		StructureLab();
		StructureLab(emscripten::val structureLab);

	public:
		int cooldown;
		int energy;
		int energyCapacity;
		int mineralAmount;
		int mineralType;
		int mineralCapacity;

	public:
		int boostCreep(Creep *creep, int bodyPartsCount=-1);
		int runReaction(StructureLab *lab1, StructureLab *lab2);
	};
}