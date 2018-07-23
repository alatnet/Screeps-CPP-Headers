#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "Structure.h"

namespace Screeps {
	class StructureContainer : public Structure {
	public:
		StructureContainer();
		StructureContainer(emscripten::val structureContainer);

	public:
		emscripten::val *store;
		int storeCapacity;
		int ticksToDecay;
	};
}