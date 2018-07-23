#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "OwnedStructure.h"

namespace Screeps {
	class StructureExtension : public OwnedStructure {
	public:
		StructureExtension();
		StructureExtension(emscripten::val structureExtension);

	public:
		int energy;
		int energyCapacity;
	};
}