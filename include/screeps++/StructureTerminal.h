#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>

#include "OwnedStructure.h"

namespace Screeps {
	class StructureTerminal : public OwnedStructure {
	public:
		StructureTerminal();
		StructureTerminal(emscripten::val structureTerminal);

	public:
		int cooldown;
		emscripten::val *store;
		int storeCapacity;

	public:
		int send(SCREEPS_STR resourceType, int amount, SCREEPS_STR destination, SCREEPS_STR description = "");
	};
}