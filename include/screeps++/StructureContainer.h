#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "Structure.h"

namespace Screeps {
	class StructureContainer : public Structure {
	public:
		Structure();

	public:
		val store;
		int storeCapacity;
		int ticksToDecay;
	};
}